Here's a thorough assessment of the Go toolkit against our current and next tasks:

---

## `nrt` Tool Assessment

### ✅ What Works Well Right Now

| Command                      | Purpose                                                           | Status                                                                     |
|------------------------------|-------------------------------------------------------------------|----------------------------------------------------------------------------|
| `nrt decode --target`        | Annotate function bodies (constants, field offsets, vtable slots) | ✅ Excellent                                                               |
| `nrt inspect --cmd lookup`   | Find functions by name/regex                                      | ✅ Fast                                                                    |
| `nrt inspect --cmd xref`     | Find all call sites to a function                                 | ✅ Works                                                                   |
| `nrt inspect --cmd body`     | Dump raw disassembly of a function                                | ✅ Works                                                                   |
| `nrt inspect --cmd range`    | Dump a raw address range                                          | ✅ Works                                                                   |
| `nrt query --callees-of`     | Find all callers of a function                                    | ✅ Works (fuzzy match)                                                     |
| `nrt analyze --class`        | Class size, base class, field map                                 | ✅ Good                                                                    |
| `nrt vcall --class --offset` | Resolve vtable dispatch at byte offset                            | ⚠️ Fails for classes with non-standard constructors                        |
| `nrt vmap --class`           | Dump full vtable                                                  | ⚠️ Fails — vtable data is in a ROM data page not in the instruction stream |
| `nrt viz --target`           | Mermaid call graph                                                | ✅ Works, useful                                                           |
---

### Key Finding: TConnectionEnd vs TCommTool MsgContainers

During the investigation, `decode` + `inspect` together resolved a subtle layout difference:

|                         | `TCommTool`         | `TConnectionEnd`   |
|-------------------------|---------------------|--------------------|
| Container array base    | `this + 0x94` (148) | `this + 0x44` (68) |
| Container stride        | 24 bytes            | 24 bytes           |
| Pending flag sub-offset | `+0x00`             | `+0x00`            |
| Channel 3 pending addr  | `this + 0xDC`       | `this + 0x8C`      |
| `fGetEventReply`        | `this + 0x1D8`      | `this + 0x188`     |
| State field             | `this + 0x1E0`      | `this + 0x190`     |
| Object size             | ~632 bytes          | 520 bytes          |
The `CompleteRequest` formula `r6 = this + ch*24; ldrb [r6, #BASE]` is identical in both classes — only `BASE` differs (0x94 vs 0x44). The `decode` command correctly annotated `field +0x44 (+68)` but the annotation refers to the sub-offset from the channel-stride register, not from `this` directly.

---

### 🔴 Known Gaps

**1. `analysis.go` misses `ldrb`/`strb`** — `query --accessors-of` and `analyze` only track `ldr`/`str`. Any byte-sized field (like the pending flag at `+0x8C`) shows only its write accesses and not reads. Fix: extend the field-tracking regex in `analyzeFunction` to also match `ldrb`/`strb`/`ldrsb`.

**2. vtable resolution via data segments** — The TCommTool vtable is stored at physical ROM address `0x01A094EC` in a mapped data page that doesn't appear as labelled symbols in the `.s` file. `vmap` and `vcall` both fail for classes like `TCommTool`, `TConnectionEnd`. The vtable thunk table (the `b <target>` stubs at `0x1ABxxx`) is navigable, but the slot-to-thunk pointer table is not. Fix: add a `--vtable-addr` flag to `vmap`/`vcall` to let you specify the base manually.

**3. No `diff` / side-by-side comparison** — We manually compared `TCommTool::GetCommEvent` vs `TConnectionEnd::GetCommEvent`. A `nrt diff --fn1 X --fn2 Y` command that aligns instructions and highlights structural differences would save significant time.

**4. No `struct` emitter** — Given the confirmed field offsets, there's no command to emit a `struct` or class definition stub. `scaffold` gets close but is class-level, not function-level.

---

### 🔧 Recommended Extensions

Three targeted additions would unlock the next phase (TConnectionEnd reconstruction):

**A. Fix `ldrb`/`strb` tracking** (~10 lines in `analysis.go`):
```go
// Change the condition from:
if (strings.HasPrefix(inst.Mnemonic, "ldr") || strings.HasPrefix(inst.Mnemonic, "str"))
// to: (already partially handles "ldrb" via HasPrefix("ldr"), but the field-type logic is broken)
// Real fix: properly set fieldType="char" for ldrb/strb
```

**B. `nrt diff` command** — Load two functions, align by structural pattern (prologue stripped), print side-by-side with `<`, `>`, `=` markers.

**C. `nrt struct --class X` command** — Emit a C++ struct definition from the known field accesses (merging `analyze` output into a header skeleton with named fields at confirmed offsets).

---

### Immediate Next Step

The tools are fully capable of driving the `TConnectionEnd` reconstruction. Want me to:
1. **Fix `ldrb`/`strb` tracking** in `analysis.go` now (quick, high value)?
2. **Add `nrt diff`** for side-by-side function comparison?
3. **Start writing the reconstructed C++ source** for `TConnectionEnd::GetCommEvent` / `PostCommEvent` using the decode output we already have?