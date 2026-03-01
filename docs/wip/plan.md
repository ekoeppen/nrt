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

### [x] Add fieldTypeFromMnemonic helper to analysis.go

#### Precondition

analysis.go exists with the broken HasPrefix guard

#### Action

Add a package-level helper that maps every ARM load/store mnemonic to (typeName, byteSize, isLoad, isStore, ok). Mnemonics covered: ldr ldrb ldrh ldrsb ldrsh str strb strh.

#### Result

Helper function available in the analysis package.

#### Verification

Helper compiles; unit test or manual check that ldrb → ("char",1,true,false,true), str → ("long",4,false,true,true), ldrsh → ("short",2,true,false,true), mov → ("",0,false,false,false).

### [x] Replace HasPrefix guard in analysis.go analyzeFunction

#### Precondition

Helper exists

#### Action

In analyzeFunction's field-access loop, replace the HasPrefix("ldr")/HasPrefix("str") condition with a call to fieldTypeFromMnemonic. Derive accType from isLoad/isStore. When inserting into ClassMetadata.Fields, if an entry already exists, upgrade to the widest type (long > short > char).

#### Result

ldrb/strb/ldrh/strh/ldrsb accesses are all tracked with the correct type.

#### Verification

nrt query --accessors-of TConnectionEnd:140 returns ldrb reads and strb writes.

### [x] Mirror fix in scaffold.go analyzeFunction

#### Precondition

analysis.go fix is done

#### Action

Apply the identical mnemonic-dispatch fix to analyzeFunction in scaffold.go, replacing its HasPrefix("ldr")/HasPrefix("str") guard and hardcoded size logic.

#### Result

scaffold.go field tracking matches analysis.go behaviour

#### Verification

Build passes; scaffold output for TConnectionEnd marks byte fields as char.

### [x] Build and verify

#### Precondition

Both files edited

#### Action

Build nrt binary and run a quick sanity check: nrt query --accessors-of TConnectionEnd:140 and nrt analyze --class TConnectionEnd, confirm byte fields appear.

#### Result

Byte-sized field accesses confirmed in tool output

#### Verification

ldrb/strb hits appear for offset 140 (fMsgContainers[3].fRequestPending)

