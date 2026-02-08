# Newton OS ROM Reverse Engineering Project

This project aims at reconstrucing the NewtonOS sources from the ROM listing in MP2x00.s and the header files in `Includes`.

The intermediate sources are under `intermediate`, and the reverse engineered sources under `Sources`.
The header files in `Includes` will be gradually expanded to cover missing headers.

More information about the NewtonOS internals can be found here: https://40hz.org/Pages/newton/hacking/newtonos-internals/,
as well as in the [background](docs/the_newton_os.txt) document.

Detailed process is documented [here](docs/progress.md).

## Toolkit Quick-Reference Guide

Use the Newton Reconstruction Toolkit (`nrt`) to analyze and scaffold classes.

| If you want to... | Use this Command | Notes |
| :--- | :--- | :--- |
| **Start a new class reconstruction** | `nrt scaffold` | Generates the initial `.cpp` file with grouped assembly. |
| **Determine class size & base class** | `nrt analyze` | Identifies `new` calls and base class constructors. |
| **Identify all fields in a class** | `nrt analyze` | Builds a unified memory map of all field offsets (`fFieldN`). |
| **Resolve a virtual call (e.g. slot 14)** | `nrt vcall` | Maps the VTable offset to a human-readable method name. |
| **Find who calls a specific method** | `nrt query` | Performs a symbolic search for all caller functions. |
| **Find who writes to a specific field** | `nrt query` | Search for all accessors of a specific `Class:Offset`. |
| **Visualize subsystem dependencies** | `nrt viz` | Generates a Mermaid-format call graph for architectural mapping. |
| **Identify hardware registers (MMIO)** | `nrt regmap` | Maps hex addresses (e.g., `0xF0050000`) to official register names. |
| **Map a class VTable (all slots)** | `nrt vmap` | Traces constructors to build the complete, ordered virtual method map. |
| **Analyze critical hardware sections** | `nrt atomic` | Groups code within `EnterAtomic` blocks to reveal register logic. |
| **Find symbols or cross-references** | `nrt inspect` | Fast, indexed lookup of function bodies and global call-sites. |

### **General Usage Instructions**

The toolkit is managed using the `task` utility.

1.  **Build and Install**:
    ```bash
    task install
    ```
    This will build the `nrt` binary and install it to your path.

2.  **Run a command**:
    ```bash
    nrt <command> --asm MP2x00US.s [options]
    ```

*   **`--asm`**: Path to the 42MB disassembly file.
*   **`--headers`**: Path to the Newton C++ headers directory (default: `Includes`).

For specific help on any command, run `nrt <command> --help`.

---

This document outlines the methodology, findings, and toolkit developed for reconstructing the Newton OS source code from a 42MB ARM disassembly (`MP2x00US.s`).

## 1. Overall Approach: The Reconstruction Pipeline

The project follows a "Binary to Semantic" pipeline to transform flat assembly into architectural insights:

1.  **Structural Scaffolding**: Automated grouping of assembly instructions by class and method using the `nrt scaffold` command. This breaks the 1-million-line file into ~1,000 browsable `.cpp` files.
2.  **VTable Discovery**: Identifying the jump-table patterns in constructors to map the virtual function ordering for every class.
3.  **Semantic Mapping**: Automatically cross-referencing field offsets (e.g., `[r0, #16]`) with official Apple DDK headers to restore original variable names (e.g., `fEnvironment`).
4.  **Logical Reconstruction**: Manual translation of high-level assembly patterns into clean C++ code, stored in `Sources/`.

---

## 2. The Toolkit (NRT - Newton Reconstruction Toolkit)

Located in `tools/reconstructor/`, this Go-based suite provides the "brain" for the analysis:

*   **`nrt scaffold`**: Generates the initial class-based source tree.
*   **`nrt query`**: A symbolic search engine. It understands "Who calls this virtual method?" and "Who writes to this member variable?"
*   **`nrt viz`**: Generates Mermaid-format call graphs to visualize subsystem relationships.
*   **`nrt analyze`**: Detailed class structural analysis, identifying size, base classes, and field usage patterns.
*   **`nrt regmap`**: Hardware register (MMIO) semantic mapper.
*   **`nrt vmap`**: Automated VTable discovery and mapping.
*   **`nrt atomic`**: Pattern recognizer for atomic hardware transactions.
*   **`nrt inspect`**: High-performance disassembly navigation and cross-referencing.

## 4. Lessons Learned

### **What Worked Well**
*   **Go-based Tooling**: Parsing the 42MB file in memory using Go is nearly instantaneous, allowing for rapid iteration on reconstruction logic.
*   **Header Semantic Injection**: Automating the mapping of offsets to names from the DDK headers was the single biggest "unlock" for readability.
*   **Side-by-Side View**: Keeping the assembly as comments inside the reconstructed C++ methods provides a "ground truth" that prevents logic errors.

### **Challenges & Failed Attempts**
*   **The "Grep Problem"**: Initial attempts to use shell tools for cross-referencing failed due to the sheer number of false positives. Symbolic analysis (knowing that `r4` holds `this`) was required.
*   **Mangled Name Ambiguity**: Some internal Apple classes aren't in the DDK. For these, we have to infer names based on their neighbors in the VTable, which is an ongoing "detective" process.


## Coverage Plan

General principle: Start with leaf classes which have no or few outgoing dependencies, then work up.


### **OS600 Subsystem Coverage Plan**

Follow this order to minimize unresolved dependencies during reconstruction:

#### **Phase 1: Foundation & Utility Classes**
Simple leaf classes with minimal internal logic or external dependencies.
*   [x] `TDoubleQItem`
*   [x] `TTaskQItem`
*   [x] `TSingleQContainer`
*   [x] `TSharedMem`
*   [x] `TSemaphoreOpList`
*   [x] `TUSemaphoreOpList`
*   [x] `TNameServerRequest`
*   [x] `TNameRequest`
*   [x] `TNameServerReply`
*   [x] `TSysEventRequest`
*   [x] `TGestaltRequest`
*   [x] `TResArbitrationRequest`
*   [x] `TUObject`

#### **Phase 2: User-Level OS Objects**
Classes that wrap kernel primitives for user-mode tasks.
*   [x] `TUSemaphoreGroup`
*   [x] `TULockingSemaphore`
*   [x] `TURdWrSemaphore`
*   [x] `TUSharedMem`
*   [x] `TUSharedMemMsg`
*   [x] `TUMonitor`
*   [x] `TUMsgToken`
*   [x] `TUDomain`
*   [x] `TUPhys`
*   [x] `TUGestalt`
*   [x] `TURealTimeAlarm`
*   [x] `TUEnvironment`

#### **Phase 3: Core Kernel Primitives**
The implementation of the OS objects themselves.

*   [x] `TSemaphore`
*   [x] `TSemaphoreGroup`
*   [ ] `TTask`
*   [x] `TUTask`
*   [x] `TUTaskWorld`
*   [ ] `TPort`
*   [x] `TUPort`
*   [x] `TKDomain` (listed as `TDomain`)
*   [ ] `TMonitor`
*   [x] `TSystemEvent`
*   [x] `TProtocol` (and `TClassInfo`)

#### **Phase 4: System Management & Infrastructure**
Complex orchestrators and memory management.
*   [ ] `TObjectManager`
*   [ ] `TObjectHeap`
*   [ ] `TNameServer`
*   [x] `TUNameServer`
*   [x] `TUDomainManager`
*   [ ] `TObjectTable`
*   [ ] `TObjectReader`
*   [ ] `TObjectWriter`

### **HAL Subsystem Coverage Plan**

Follow this order to build a solid hardware abstraction foundation:

#### **Phase 1: Fundamental Hardware I/O**
Low-level interfaces for register access and basic hardware state.
*   [x] `TBIOInterface` (Bus I/O)
*   [x] `TGPIOInterface` (General Purpose I/O)
*   [x] `TDelayTimer` (Low-level polling and short delays)
*   [x] `TRealTimeClock` (RTC management)
*   [x] `TBankControlRegister` (Memory banking)

#### **Phase 2: Timers & Interrupt Support**
The infrastructure for event-driven hardware interaction.
*   [x] `TTimerElement` / `TTimerEngine` / `TTimerQueue`
*   [ ] `TFIQTimer` (Fast Interrupt timers)
*   [ ] `TIRQTimer` (Standard Interrupt timers)
*   [x] `TTimerPort`

#### **Phase 3: Data Transport & Serial I/O**
Moving data between memory and external interfaces.
*   [ ] `TDMAChannel`
*   [ ] `TDMAManager`
*   [x] `TSerialChip` (Base class protocol)
*   [x] `TSerialChip16450` (Standard UART)
*   [x] `TSerialChipVoyager` (MP2k-specific UART)

#### **Phase 4: Input/Output & Power Drivers**
Core human-interface and system power logic.
*   [ ] `TADC` (Analog-to-Digital Converter)
*   [ ] `TResistiveTablet` (Touch screen input)
*   [ ] `TScreenDriver` (Display/LCD control)
*   [ ] `TPowerManager` / `TPowerEventHandler`

#### **Phase 5: Platform & PCMCIA Management**
Hardware-specific implementations for the MessagePad 2000 (Voyager platform).
*   [x] `TPlatformDriver`
*   [ ] `TVoyagerPlatform` (Concrete platform implementation)
*   [ ] `TCardPCMCIA` (PC Card bus)
*   [ ] `TCardSocket` (Socket management)
*   [ ] `TPCMCIA20Parser` (CIS parsing)

#### **Phase 6: MMU & Memory Layout**
Hardware-level memory protection and translation.
*   [ ] `TUPageManager`
*   [ ] `TPageTableManager`
*   [ ] `TPageTracker`
*   [ ] `TExtPageTracker`

### **CommAPI Subsystem Coverage Plan**

Follow this order to rebuild the communications stack:

#### **Phase 1: Foundation & Options**
The configuration backbone for all CommAPI objects.
*   [x] `TOption`
*   [x] `TOptionExtended`
*   [x] `TOptionArray`
*   [x] `TOptionIterator`
*   [x] `TSubArrayOption`
*   [ ] `TCMOTransportInfo`
*   [ ] `TCMOEndpointName`
*   [ ] `TCMOServiceIdentifier`

#### **Phase 2: Addressing**
Specialized classes for various network and telephony protocols.
*   [ ] `TCMAAppleTalkAddr`
*   [ ] `TCMANamedAppleTalkAddr`
*   [ ] `TCMAPhoneNumber`
*   [ ] `TCMARouteAddress`

#### **Phase 3: Service Management**
Infrastructure for managing communication services and asynchronous messages.
*   [ ] `TCMService`
*   [ ] `TServiceInfo`
*   [ ] `TAsyncServiceMessage`

#### **Phase 4: Endpoints & Event Handling**
The primary client-facing API and the asynchronous event model.
*   [ ] `TEndpoint`
*   [ ] `TAEvent`
*   [ ] `TAEventHandler`
*   [ ] `TEndpointEventHandler`
