# Implementation Plan

## Scope

Current state: analysis.go tracks ldr/str via `strings.HasPrefix(inst.Mnemonic, "ldr") || strings.HasPrefix(inst.Mnemonic, "str")`. This accidentally includes ldrb/strb since they share the prefix, BUT the field type detection `strings.HasSuffix(inst.Mnemonic, "b")` is only reached if a field entry doesn't already exist — so a word access seen first will permanently mask a byte field. Also, ldrh/strh (halfword) and ldrsb/ldrsh (signed) are not tracked correctly.

scaffold.go has its own copy of the same field-tracking logic with the same gap.

The fix needs to:
1. Explicitly enumerate all relevant load/store mnemonics (ldr, ldrb, ldrh, ldrsb, ldrsh, str, strb, strh)
2. Derive the correct field type (long/char/short) from the mnemonic
3. When a field entry already exists, upgrade to the widest observed type (don't silently ignore)
4. Apply the same fix to scaffold.go's analyzeFunction copy

## Goal

### Objective

Fix ldrb/strb tracking in analysis.go so that byte-sized field accesses are correctly captured by the Engine's FieldUsers and ClassMetadata maps, alongside the existing ldr/str (word) tracking.

### Success criteria

nrt query --accessors-of TConnectionEnd:140 (and other byte-offset fields) returns both ldrb and strb accesses. nrt analyze --class TConnectionEnd lists byte fields (char type) alongside word fields. Build passes with no errors.

## Design

### Decisions

Enumerate mnemonics explicitly rather than using HasPrefix. Use a helper fieldTypeFromMnemonic(m string) (string, int, bool) returning (typeName, byteSize, isMemAccess). For ClassMetadata, upgrade field type when a wider access is seen later. Apply identical fix in scaffold.go analyzeFunction to keep both in sync.

### Packages

pkg/analysis/analysis.go — main fix
pkg/commands/scaffold.go — mirror fix in analyzeFunction

### Functions

fieldTypeFromMnemonic(mnemonic string) (typeName string, size int, isLoad bool, isStore bool, ok bool)
analyzeFunction — replace HasPrefix guard with fieldTypeFromMnemonic call
analyzeFunction in scaffold.go — same replacement

### Structures

FieldInfo.Type: values now "char" (1), "short" (2), "long" (4) — widest observed wins

## Steps

### [ ] Add fieldTypeFromMnemonic helper to analysis.go

#### Precondition

analysis.go exists with the broken HasPrefix guard

#### Action

Add a package-level helper that maps every ARM load/store mnemonic to (typeName, byteSize, isLoad, isStore, ok). Mnemonics covered: ldr ldrb ldrh ldrsb ldrsh str strb strh.

#### Result

Helper function available in the analysis package.

#### Verification

Helper compiles; unit test or manual check that ldrb → ("char",1,true,false,true), str → ("long",4,false,true,true), ldrsh → ("short",2,true,false,true), mov → ("",0,false,false,false).

