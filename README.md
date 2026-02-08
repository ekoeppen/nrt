# Newton OS ROM Reverse Engineering Project

This project aims at reconstrucing the NewtonOS sources from the ROM listing in MP2x00.s and the header files in `Includes`.

The intermediate sources are under `intermediate`, and the reverse engineered sources under `Sources`.
The header files in `Includes` will be gradually expanded to cover missing headers.

More information about the NewtonOS internals can be found here: https://40hz.org/Pages/newton/hacking/newtonos-internals/,
as well as in the [background](docs/the_newton_os.txt) document.

## Toolkit Quick-Reference Guide

Use this guide to select the right tool for each reconstruction scenario.

| If you want to... | Use this Tool | Notes |
| :--- | :--- | :--- |
| **Start a new class reconstruction** | `scaffolder` | Generates the initial `.cpp` file with grouped assembly. |
| **Determine class size & base class** | `analyzer` | Identifies `new` calls and base class constructors. |
| **Identify all fields in a class** | `analyzer` | Builds a unified memory map of all field offsets (`fFieldN`). |
| **Resolve a virtual call (e.g. slot 14)** | `vcall` | Maps the VTable offset to a human-readable method name. |
| **Find who calls a specific method** | `query` | Performs a symbolic search for all caller functions. |
| **Find who writes to a specific field** | `query` | Search for all accessors of a specific `Class:Offset`. |
| **Visualize subsystem dependencies** | `viz` | Generates a Mermaid-format call graph for architectural mapping. |

### **General Usage Instructions**

All tools are located in `tools/reconstructor/` and can be run using `go run`.

1. **Navigate to the toolkit directory**:
   ```bash
   cd tools/reconstructor
   ```

2. **Run a tool**:
   ```bash
   go run cmd/<tool_name>/main.go -asm ../../MP2x00US.s [options]
   ```

*   **`<tool_name>`**: Use `scaffolder`, `analyzer`, `vcall`, `query`, or `viz`.
*   **`-asm`**: Path to the 42MB disassembly file (relative to the tool directory).

For specific help on any tool, run it without arguments or with `-h`.

---

---


This document outlines the methodology, findings, and toolkit developed for reconstructing the Newton OS source code from a 42MB ARM disassembly (`MP2x00US.s`).

## 1. Overall Approach: The Reconstruction Pipeline

The project follows a "Binary to Semantic" pipeline to transform flat assembly into architectural insights:

1.  **Structural Scaffolding**: Automated grouping of assembly instructions by class and method using the `scaffolder` tool. This breaks the 1-million-line file into ~1,000 browsable `.cpp` files.
2.  **VTable Discovery**: Identifying the jump-table patterns in constructors to map the virtual function ordering for every class.
3.  **Semantic Mapping**: Automatically cross-referencing field offsets (e.g., `[r0, #16]`) with official Apple DDK headers to restore original variable names (e.g., `fEnvironment`).
4.  **Logical Reconstruction**: Manual translation of high-level assembly patterns into clean C++ code, stored in `reconstructed_cpp/`.

---

## 2. The Toolkit (NRT - Newton Reconstruction Toolkit)

Located in `tools/reconstructor/`, this Go-based suite provides the "brain" for the analysis:

*   **`scaffolder`**: Generates the initial class-based source tree.
*   **`query`**: A symbolic search engine. It understands "Who calls this virtual method?" and "Who writes to this member variable?"
*   **`viz`**: Generates Mermaid-format call graphs to visualize subsystem relationships.
*   **`analyzer`**: Detailed class structural analysis, identifying size, base classes, and field usage patterns.

---

## 3. Key Architectural Findings

### **The Buffer System (`CBuffer`)**
*   **Hierarchy**: Follows a strict inheritance: `CMinBuffer` (Interface) -> `CBuffer` (Wrapper) -> `CBufferSegment` (Concrete Data).
*   **Fragmentation**: `CBufferList` implements the "Chain of Buffers" pattern, allowing the OS to treat fragmented memory segments as a single contiguous stream.
*   **Size Constraints**: Newton OS is extremely memory-efficient. A `CBufferList` is exactly 32 bytes; a `CBufferSegment` is 40 bytes.

### **The Pipe System (`CPipe`)**
*   **Abstraction**: Pipes act as bidirectional streams between buffers.
*   **`CBufferPipe`**: The primary implementation used in the communications stack, effectively "gluing" two buffers together for asynchronous I/O.

### **C++ Implementation Details**
*   **VTables**: Unlike modern compilers that use pointers, the Newton compiler often used branch-instruction tables.
*   **Mangling**: Uses the classic ARM/CFront mangling style (e.g., `__6TUTask` for `TUTask`).

---

## 4. Lessons Learned

### **What Worked Well**
*   **Go-based Tooling**: Parsing the 42MB file in memory using Go is nearly instantaneous, allowing for rapid iteration on reconstruction logic.
*   **Header Semantic Injection**: Automating the mapping of offsets to names from the DDK headers was the single biggest "unlock" for readability.
*   **Side-by-Side View**: Keeping the assembly as comments inside the reconstructed C++ methods provides a "ground truth" that prevents logic errors.

### **Challenges & Failed Attempts**
*   **The "Grep Problem"**: Initial attempts to use shell tools for cross-referencing failed due to the sheer number of false positives. Symbolic analysis (knowing that `r4` holds `this`) was required.
*   **Mangled Name Ambiguity**: Some internal Apple classes aren't in the DDK. For these, we have to infer names based on their neighbors in the VTable, which is an ongoing "detective" process.

---

## 5. Progress Log

*   **[2026-02-07]**: Initial Scaffolding. 1,054 classes identified.
*   **[2026-02-07]**: Global Data Reconstruction. `g[A-Z]` and `k[A-Z]` symbols mapped.
*   **[2026-02-07]**: VTable & Field Inference. 30-50% of mystery fields resolved.
*   **[2026-02-07]**: **Milestone**: Full reconstruction of the `CBuffer` and `CPipe` hierarchy in `reconstructed_cpp/`.

---

## 6. Bottom-Up Reconstruction Progress

### **Utility Classes: `CList` & `CDynamicArray`**
*   **Status**: Core logic and layout reconstructed.
*   **Findings**:
    *   `CDynamicArray` (24 bytes) is a non-virtual base class for `CList`.
    *   It maintains a linked list of `CArrayIterator` objects to handle on-the-fly modifications.
    *   `CList` inherits directly from `CDynamicArray` and adds high-level searching/insertion logic.
    *   The `CArrayIterator` (28 bytes) tracks its position and the iteration direction.
*   **Methodology Improvement**: Verification against official DDK headers in `NCT_Projects` has been used to validate inferred field names and offsets. This confirms the accuracy of the reconstruction pipeline.
*   **Dependencies**: These classes are "leaf" nodes in the dependency tree, used by `CBufferList`, `CBufferPipe`, and most higher-level OS components.

---

### **Buffer Management: `CBufferList` (Refined)**
*   **Status**: Finalized with correct `CList` and `CListIterator` dependencies.
*   **Findings**:
    *   `CBufferList` acts as a composite buffer.
    *   It maintains a `fCurrentSegment` pointer to the active `CBuffer` (typically a `CBufferSegment`).
    *   The `SelectSegment` method is the heart of the traversal, ensuring the newly selected segment is `Reset()` upon activation.
    *   The use of `fEndSegmentIdx` allows the list to treat a subset of its segments as a logical buffer.
*   **Dependencies**: Now correctly links against the verified `CList` and `CListIterator` implementations.

---

*   **[2026-02-07]**: **Milestone**: Full reconstruction of the `CBuffer` and `CPipe` hierarchy in `reconstructed_cpp/`.
    *   Verified `CMinBuffer` interface (Slots 0-15).
    *   Verified `CPipe` interface (Slots 0-11).
    *   Implemented `CBufferSegment`, `CBufferList`, and `CBufferPipe` logic.
    *   Toolkit enhanced with `analyzer` and `vcall` tools for VTable and field discovery.

### **Stream Management: `CBufferPipe`**
*   **Status**: Fully reconstructed.
*   **Findings**:
    *   `CBufferPipe` (16 bytes) acts as a high-level stream interface.
    *   It manages two buffers: `fReadBuffer` and `fWriteBuffer`.
    *   It implements the `CPipe` interface, allowing for polymorphic data flow.
    *   The `fIsEOF` flag is used to track end-of-stream state during `Peek`, `Next`, and `Get` operations.
*   **Dependencies**: Relies on `CPipe` (interface) and `CBuffer` (backing storage).

### **Circular Buffers: `CBaseRingBuffer` & `CRingBuffer`**
*   **Status**: Core logic and layout reconstructed.
*   **Findings**:
    *   `CRingBuffer` (36 bytes) inherits from `CBaseRingBuffer` (24 bytes).
    *   It uses a "Start/End/Put/Get" pointer system rather than an "Index/Size" system for speed.
    *   The buffer size is stored at offset 12 and is used for wrapping the pointers and calculating `DataCount`.
    *   Includes a `TUSharedMem` component for cross-task buffer sharing.
*   **Methodology Improvement**: Used `analyzer` to identify field usage across multiple methods (`Init`, `Put`, `DataCount`), confirming that offset 12 is used as the wrap-around modulus.

### **Extended Foundation Classes: `CMemObject`, `CSortedList`, `CPtrPipe`, `CNullPipe`**
*   **Status**: Core logic and layout reconstructed for several utility and pipe classes.
*   **Findings**:
    *   `CMemObject` (36 bytes) provides a base for objects managing memory buffers, with hooks for shared memory.
    *   `CSortedList` (28 bytes) extends `CList` by adding a `CItemComparer` to maintain element order.
    *   `CPtrPipe` (24 bytes) is the simplest `CPipe` implementation, wrapping a raw memory pointer.
    *   `CNullPipe` (20 bytes) acts as a data sink, inheriting from `CBufferPipe`.
*   **Methodology Improvement**: Used the `analyzer` to verify inheritance chains (e.g., `CNullPipe` -> `CBufferPipe` -> `CPipe`) and size allocations in constructors.

---

## **Current Progress (2026-02-07)**

### **Foundational Subsystems (100% Reconstructed)**

The following classes have been fully reverse engineered from ARM assembly to high-level C++, maintaining 1:1 parity with the ROM method lists and field offsets.

#### **1. Utility & Collections**
- **`CDynamicArray`**: Low-level memory-managed array logic.
- **`CList`**: High-level generic list.
- **`CSortedList`**: Automatically ordered list using binary search.
- **`CArrayIterator` / `CListIterator`**: Complex iterator system with linked-list notification support.
- **`CItemTester` / `CItemComparer`**: Virtual testing and comparison interfaces.
- **`CMemObject`**: Base class for shared memory objects.

#### **2. Buffer Management**
- **`CMinBuffer` / `CBuffer`**: Fundamental buffer interfaces.
- **`CBufferSegment`**: The workhorse contiguous memory buffer.
- **`CBufferList`**: A composite buffer chaining multiple segments.
- **`CShadowBufferSegment`**: Buffer segments mapping to external memory regions.

#### **3. Ring Buffers**
- **`CBaseRingBuffer`**: Abstract circular buffer logic.
- **`CRingBuffer`**: Concrete implementation with pointer-wrap logic and shared memory support.

#### **4. I/O Pipes**
- **`CPipe`**: Bidirectional stream interface.
- **`CBufferPipe`**: Standard pipe backed by dual `CBuffer` objects.
- **`CPtrPipe`**: Simple pipe wrapping a raw pointer.
- **`CNullPipe`**: Auto-expanding data sink.

---

#### **5. Kernel Interface (User Space)**
- **`TUObject`**: Base class for all user-space proxies to kernel objects. Implements the `MonitorDispatchSWI` bridge for object creation and destruction.
- **`TUSharedMem` / `TUSharedMemMsg`**: Shared memory management and message passing primitives.
- **`TUMsgToken` / `TUAsyncMessage`**: Value classes for asynchronous message tracking and RPC completion.
- **`TUPort`**: The primary inter-task communication interface, supporting synchronous and asynchronous message passing.
- **`TUTask`**: User-space task management and CPU register control.
- **`TUEnvironment`**: Task memory visibility and domain management.
