# Newton ROM Reconstruction Toolkit (NRT)

A modular toolkit for reverse engineering and analyzing Newton OS ROM disassemblies.

## Modules

- `pkg/asm`: Low-level ARM assembly parser. Handles labels, instructions, and basic mangling patterns.
- `pkg/cpp`: Semantic mapping engine. Correlates assembly with high-level C++ headers, performs offset calculations, and restores member names.
- `pkg/analysis`: Cross-reference and relationship engine. Tracks function calls and field accesses.
- `pkg/commands`: Implementation of the toolkit's CLI subcommands.

## Commands

The toolkit is consolidated into a single umbrella binary: `nrt`.

### 1. `nrt scaffold`
Generates a structured C++ project from the ROM dump.
- **Project Structure**: Organizes code by class into `.cpp` and `.h` files.
- **Semantic Enhancement**: Injects real member names and signatures from headers.
- **Global Discovery**: Reconstructs global variables and hardware tables.

```bash
nrt scaffold --asm MP2x00US.s --headers Includes --out intermediate
```

### 2. `nrt query`
A powerful search engine for the ROM's internal relationships.
- **Callers**: Find every function that calls a target (e.g., `--callees-of "TSharedMem::Init"`).
- **Accessors**: Find every instruction that reads or writes to a specific class field (e.g., `--accessors-of "TSharedMem:4"`).

```bash
nrt query --asm MP2x00US.s --accessors-of "TSharedMem:4"
```

### 3. `nrt viz`
Generates visual call graphs in Mermaid format.
- **Graphing**: Centers the graph on a target class or function and traces its neighbors.

```bash
nrt viz --asm MP2x00US.s --target "TSharedMem"
```

### 4. `nrt analyze`
Performs deep structural analysis of a class.
- **Size & Inheritance**: Automatically detects the class size and base class from the constructor.
- **Field Mapping**: Lists every offset accessed by the class and which functions use it.

```bash
nrt analyze --asm MP2x00US.s --class "CBufferList"
```

### 5. `nrt regmap`
Scans for MMIO constants and maps them to hardware register names.
- **MMIO Discovery**: Identifies constants in the `0xF...` and `0x1...` ranges.
- **DDK Mapping**: Correlates addresses with known Newton register definitions.

```bash
nrt regmap --asm MP2x00US.s --class "TBIOInterface"
```

### 6. `nrt vmap`
Reconstructs the virtual function table (VTable) for a specific class.
- **Constructor Analysis**: Traces the VTable pointer initialization in the constructor.
- **Method Enumeration**: Dumps the ordered list of virtual methods (slots) for the class.

```bash
nrt vmap --asm MP2x00US.s --class "TDelayTimer"
```

### 7. `nrt atomic`
Identifies and displays critical sections protected by atomic operations.
- **Transaction View**: Groups instructions between `EnterAtomic` and `ExitAtomic`.
- **Logic Isolation**: Helps in reconstructing clean hardware read-modify-write logic.

```bash
nrt atomic --asm MP2x00US.s --class "TBIOInterface"
```

### 8. `nrt inspect`
An interactive navigation and cross-reference tool for the ROM.
- **`lookup`**: Find functions by name or regex.
- **`xref`**: Find all calls to a specific address or symbol.
- **`body`**: Extract the full implementation of a function.
- **`range`**: Dump disassembly for a specific address range.

```bash
# Find all references to TBIOInterface::WaitBIOStatus
nrt inspect --cmd xref --target "TBIOInterface::WaitBIOStatus"

# Dump the implementation of TDelayTimer::ShortTimerDelay
nrt inspect --cmd body --target "TDelayTimer::ShortTimerDelay"
```

## Build and Installation

The toolkit is managed using the `task` utility from the project root.

1.  **Build and Install**:
    ```bash
    task install
    ```
    This builds the `nrt` binary and installs it to your path (using `go install`).

2.  **Clean Build**:
    ```bash
    task clean
    ```

3.  **Run Tests**:
    ```bash
    task test
    ```

## Usage in Workflow

1.  **Generate Project**: Run `nrt scaffold` once to create the browsable source code.
2.  **Investigate**: Use `nrt query` to find who is interacting with a specific piece of state.
3.  **Visualize**: Use `nrt viz` to see the high-level architecture of a subsystem.
