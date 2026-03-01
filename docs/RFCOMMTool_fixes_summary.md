# Summary of Fixes for TRFCOMMTool (Blunt-2 Bluetooth Stack)

Following the reverse engineering of the `TCommTool` base class and the `TCommToolProtocol` layer, three critical bugs and architectural misalignments were identified and fixed in the Blunt-2 `TRFCOMMTool` implementation.

---

## 1. Protocol State Alignment (The "Offset 624 Contract")

### **Discovery**
The Newton OS protocol layer (`TCommToolProtocol::CTPostCommEvent`) checks the tool's connectivity state at exactly **offset 624 (0x270)**. If the value at this offset is less than 2 (`kStateConnected`), the OS silently refuses to deliver any serial events to the application.

### **The Bug**
In the original `TRFCOMMTool` definition, this offset was occupied by the `fServerPort` (`TUPort`) member. This caused non-deterministic behavior where connection events were blocked based on the arbitrary task ID of the Bluetooth server.

### **The Fix**
- Reorganized the `TRFCOMMTool` class members in `RFCOMMTool.h`.
- Added `fSubclassPadding` at offset 620 and `fState` at offset 624.
- Explicitly initialized `fState` to `0` (Disconnected) in the constructor.
- Updated the state to `2` (Connected) upon successful Bluetooth handshake and reset to `0` on disconnect.

---

## 2. Reliable Event Delivery (The "Vanishing Connection" Fix)

### **Discovery**
`TCommTool::PostCommEvent` returns an error (`kCommErrNoGetCommEvent` / -16015) if the application has not yet queued a `GetCommEvent` request. 

### **The Bug**
`TRFCOMMTool` ignored this return value and allowed the connection notification (DCD Asserted) to expire on the stack. This resulted in cases where a Bluetooth link was established, but the application hung indefinitely waiting for a signal that was already discarded.

### **The Fix**
- Modified `HandleRequest` to check the return value of `PostCommEvent`.
- If a client is not ready, the event is now copied into the base class's `fGetEventReply` buffer (+0x1D8).
- This ensures the event is successfully delivered via the virtual `GetCommEvent` poller as soon as the application is ready.

---

## 3. Heap Stability (The "Buffer Overflow" Fix)

### **Discovery**
Bluetooth data arrives in bursts that often exceed the immediate request size of the Newton application. `TRFCOMMTool` uses a 2096-byte internal overflow buffer (`fSavedData`).

### **The Bug**
The original code performed a raw `memcpy` of incoming data into `fSavedData` without checking for remaining capacity. High-speed data streams could easily overflow this buffer, corrupting the system heap and causing a `Bus Error`.

### **The Fix**
- Added a capacity check in the `E_DATA` handler.
- Data is now capped at `MAX_SAVE - fSavedDataAmount`.
- This prevents memory corruption while preserving as much of the data stream as possible until the application can drain the buffer.

---

## Summary of File Changes

| File | Changes Made |
| :--- | :--- |
| `RFCOMMTool.h` | Reordered fields to align `fState` at 0x270. Defined `MAX_SAVE`. |
| `RFCOMMTool.cp` | Initialized `fState`. Integrated `PostCommEvent` error handling. Added `memcpy` bounds checks. |
| `TCommTool.cpp` | Reconstructed base class logic to document these requirements for future tools. |

These fixes ensure that the Bluetooth stack is OS-compliant, memory-safe, and provides reliable event signaling.
