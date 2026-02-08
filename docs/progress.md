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

### **Singly Linked Lists: `TSingleQItem` & `TSingleQContainer`**
*   **Status**: Core logic and layout reconstructed.
*   **Findings**:
    *   `TSingleQContainer` (8 bytes) is a lightweight LIFO queue.
    *   It uses an `fOffsetToSingleQItem` to allow generic objects to be queued without requiring them to inherit from a specific base class (the "Intrusive List" pattern).
    *   `Add` performs a head-insertion (LIFO/Stack behavior).
    *   `Remove` and `Peek` use the offset to return the pointer to the outer object rather than the internal `TSingleQItem`.
*   **Methodology Improvement**: Hand-verified against `MP2x00US.s` logic for `PersistentDBEntry` usage.

### **Synchronization Primitives: `TUSemaphoreGroup`, `TULockingSemaphore`, `TURdWrSemaphore`**
*   **Status**: Core logic and layout reconstructed.
*   **Findings**:
    *   `TULockingSemaphore` implements a "fast-path" mutex using an atomic `Swap` on a user-space memory word (`fSem`).
    *   It falls back to the kernel `TUSemaphoreGroup` (Object Type 5) if the lock is contended.
    *   Static `TUSemaphoreOpList` objects are used to define the atomic semaphore operations for acquisition and release.
    *   `TURdWrSemaphore` uses two internal semaphores managed by the kernel group to implement reader-writer semantics.
*   **Methodology Improvement**: Identified the use of Object Type 4 (Op List) and 5 (Group) in `TUObject::MakeObject` calls.

### **Name Server Interface: `TUNameServer`**
*   **Status**: Fully reconstructed.
*   **Findings**:
    *   `TUNameServer` (16 bytes) is a user-space proxy that communicates with the system NameServer (Port 2).
    *   It manages two `TUSharedMem` objects (`fMsgName`, `fMsgType`) to pass string parameters (name and type) to the kernel.
    *   Most operations (`RegisterName`, `Lookup`, etc.) follow a standard pattern: set up shared memory buffers, populate a `TNameRequest` structure, and perform a synchronous RPC via `fNameServerPort.SendRPC`.
    *   It includes support for Resource Arbitration (Claim/Unclaim) which uses the `TResArbitrationRequest` extension.
*   **Methodology Improvement**: Confirmed that `TUObject` (and its derivatives like `TUPort`) are 8 bytes in size and do NOT have a VTable if they only have non-virtual methods, with `fId` at offset 0 and `fObjectCreatedByUs` at offset 4.



### **TUTaskWorld Reconstruction**
*   **Status**: Completed.
*   **Findings**:
    *   `TUTaskWorld` (24 bytes) manages task spawning and synchronization between parent and child contexts.
    *   Uses a `TUPort` (mother port) for inter-task communication during initialization and cleanup.
    *   Implements a virtual VTable: `~TUTaskWorld`, `GetSizeOf`, `TaskConstructor`, `TaskDestructor`, `TaskMain`.
    *   Automatically deletes itself in the child task context upon completion.
*   **Methodology**: Analyzed constructor offsets to map `fMotherPort` and `fChildTask`. Reconstructed `StartTask` and `TaskEntry` logic from assembly patterns for NewtonOS task lifecycle management.

### **TKDomain Reconstruction**
*   **Status**: Completed.
*   **Findings**:
    *   `TKDomain` (36 bytes) is the kernel-side primitive for memory domains.
    *   Manages address range (`fBase`, `fSize`), domain IDs (`fDomainNumber`), and fault monitors.
    *   Integrates with `TMemArchManager` for range management and `InitDomainPrimaryTable` for hardware MMU setup.
*   **Methodology**: Identified kernel addresses (`0xaf040`) for domain primitives. Mapped internal offsets for base address and size tracking. Reconstructed range intersection logic and fault monitor registration.

### **TSystemEvent Reconstruction**
*   **Status**: Completed.
*   **Findings**:
    *   `TSystemEvent` (12 bytes) manages registration for system-wide events via the NameServer.
    *   `TSendSystemEvent` (44 bytes) inherits from `TSystemEvent` and adds a `TUSharedMemMsg` for sending event data.
    *   Communicates with the NameServer port (ID 2) using `TSysEventRequest` messages.
*   **Methodology**: Mapped `TSysEventRequest` field offsets. Verified class inheritance and member placement for `TSendSystemEvent` (offset 12 for the shared memory message).

### **TProtocol & TClassInfo Reconstruction**
*   **Status**: Completed.
*   **Findings**:
    *   `TProtocol` (16 bytes) is the base class for the NewtonOS protocol system, using a custom dispatch table (`fBTable`) mechanism.
    *   `TClassInfo` (48 bytes) provides meta-information for protocols, including offsets to implementation names, interface names, and entry points for monitors.
    *   The protocol dispatch mechanism uses ARM branch instructions directly in the `BTable` for high-speed calls.
*   **Methodology**: Analyzed the self-relative offset (SRO) pattern in `TClassInfo` for name and table resolution. Reconstructed the `StartMonitor` and `DestroyMonitor` lifecycle methods which bridge the protocol and monitor systems.

### **HAL Subsystem: Phase 1 (Foundation I/O)**
*   **Status**: Fundamental hardware interface classes reconstructed.
*   **Classes Reconstructed**:
    *   `TDelayTimer`: Microsecond busy-waits and timeouts using Timer0.
    *   `TBankControlRegister`: Flash bank data size and lane width configuration.
    *   `TBIOInterface`: Interface for the Keynes/Voyager bus I/O ASIC.
    *   `TGPIOInterface`: General Purpose I/O management with interrupt routing.
    *   `TRealTimeClock`: RTC management and system alarm handling (16 slots).
*   **Architectural Insights**:
    *   HAL classes use a "Configuration Entry" system (`GetLastRExConfigEntry`) to map logical functions to hardware bits, allowing for platform flexibility.
    *   Atomic operations (`EnterAtomic`/`ExitAtomic`) are heavily used for register read-modify-write cycles.
    *   Register mapping follows a consistent `0x400` byte stride for sub-modules within the ASICs.

### **Serial Communication: `TSerialChip` (Protocol Glue)**
*   **Status**: Fully reconstructed.
*   **Findings**:
    *   `TSerialChip` in the ROM is a **Protocol Glue** class. It doesn't contain the hardware logic itself but acts as a proxy/delegate.
    *   It manages two key fields: `fRealThis` (pointer to the implementation object) and `fBTable` (pointer to the protocol dispatch table).
    *   The class implements 45 protocol methods (Slots 2-47) which it forwards to the implementation.
    *   The methods include core serial I/O (`PutByte`, `GetByte`), DMA setup (`InitTxDMA`, `InitRxDMA`), and power management.
    *   Instantiation via `TSerialChip::New(char* implementation)` uses `AllocInstanceByName` to dynamically link the hardware-specific driver.
*   **Methodology Improvement**: Successfully mapped the entire 45-slot protocol table by analyzing the ARM branch patterns and correlating with `SerialChipV2.h` DDK headers.
