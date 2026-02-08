# TEndpointEventHandler Field Analysis

## Class Structure

**Size:** 44 bytes (0x2C)  
**Base Class:** TAEventHandler (20 bytes)

## Complete Field Layout

### Inherited from TAEventHandler (offsets 0-19)

| Offset | Size | Type | Field Name | Description |
|--------|------|------|------------|-------------|
| 0 | 4 | void* | vtable | Virtual function table pointer |
| 4 | 4 | TAEventHandler* | fNext | Next handler in the chain |
| 8 | 4 | AEEventClass | fEventClass | Event class this handler responds to |
| 12 | 4 | AEEventID | fEventID | Event ID this handler responds to |
| 16 | 4 | TAEIdleTimer* | fIdler | Optional idle timer |

### TEndpointEventHandler Fields (offsets 20-43)

| Offset | Size | Type | Field Name | Description |
|--------|------|------|------------|-------------|
| 20 | 4 | TEndpoint* | fEndpoint | The endpoint this handler is associated with |
| 24 | 4 | TObjectId | fServicePort.fId | Service port object ID |
| 28 | 1 | Boolean | fServicePort.fObjectCreatedByUs | Whether we created the service port |
| 29-31 | 3 | - | (padding) | Padding for alignment |
| 32 | 8 | TPseudoSyncState | fSyncState | Synchronization state for blocking calls |
| 40 | 1 | Boolean | fBlocking | TRUE if currently in a blocking call |
| 41 | 1 | Boolean | fAborted | TRUE if an abort has been requested |
| 42 | 1 | Boolean | fUseForks | TRUE if fork-based event handling is enabled |
| 43 | 1 | - | (padding) | Padding to 44 bytes |

## Field Details

### fEndpoint (offset 20)
- **Type:** `TEndpoint*`
- **Purpose:** Pointer to the TEndpoint object this handler is servicing
- **Initialized:** In constructor
- **Used in:** AEHandlerProc for routing events to the endpoint

### fServicePort (offset 24-28)
- **Type:** `TUObject` (embedded structure, 8 bytes)
- **Purpose:** Represents the service port for communicating with the CommTool
- **Structure:**
  - `fId` (offset 24): TObjectId - the port object ID
  - `fObjectCreatedByUs` (offset 28): Boolean - ownership flag
- **Initialized:** In constructor (set to 0/false) and Init() method
- **Used in:** GetServicePortId(), CallService(), and other methods that need to communicate with the service

### fSyncState (offset 32-39)
- **Type:** `TPseudoSyncState` (embedded structure, 8 bytes)
- **Purpose:** Manages blocking/waiting for synchronous operations in an asynchronous environment
- **Methods:**
  - `Init()` - Initialize the state
  - `Block(timeout)` - Block waiting for completion
  - `Unblock()` - Unblock a waiting thread
- **Used in:** Block(), Unblock(), Init()

### fBlocking (offset 40)
- **Type:** `Boolean`
- **Purpose:** Flag indicating whether we're currently in a blocking (synchronous) call
- **Behavior:**
  - Set to TRUE at the start of Block()
  - Set to FALSE when Block() returns
  - Checked by Unblock() to determine if we should actually unblock
- **Prevents:** Re-entrant blocking calls

### fAborted (offset 41)
- **Type:** `Boolean`
- **Purpose:** Flag indicating an abort has been requested
- **Behavior:**
  - Set to TRUE by Abort() method
  - Checked after Block() returns
  - If set, Block() returns error -10441 (kCMErrAborted)
  - Cleared after being detected
- **Use case:** Allows asynchronous cancellation of blocking operations

### fUseForks (offset 42)
- **Type:** `Boolean`
- **Purpose:** Controls whether fork-based event handling is enabled
- **Behavior:**
  - Set in constructor
  - Can be changed via UseForks() method
  - When TRUE, enables special handling in AEHandlerProc for 'abrt' events
  - When TRUE, CallService() uses TForkWorld::Fork() for asynchronous execution
- **Purpose:** Allows the handler to operate in environments that support forking (multi-tasking)

## Assembly Evidence

### Constructor (0x000acc9c)
```asm
acccc: eb6cdd4d     bl   TAEventHandler::__ct(void)
accd0: e3a06000     mov  r6, #0
accd4: e5c4601c     strb r6, [r4, #28]    ; fServicePort.fObjectCreatedByUs = false
accd8: e5846018     str  r6, [r4, #24]    ; fServicePort.fId = 0
accdc: e2840020     add  r0, r4, #32      ; &fSyncState
acce0: eb6c0ed3     bl   TPseudoSyncState::__ct(void)
accec: e5845014     str  r5, [r4, #20]    ; fEndpoint = endpoint
accf0: e5c46028     strb r6, [r4, #40]    ; fBlocking = false
accf4: e5c46029     strb r6, [r4, #41]    ; fAborted = false
accf8: e5c4702a     strb r7, [r4, #42]    ; fUseForks = useForks
```

### Block() (0x000ac9cc)
```asm
ac9dc: e5d00028     ldrb r0, [r0, #40]    ; if (fBlocking)
ac9f4: e5c40028     strb r0, [r4, #40]    ; fBlocking = true
aca04: e5c41028     strb r1, [r4, #40]    ; fBlocking = false
aca10: e5d42029     ldrb r2, [r4, #41]    ; if (fAborted)
aca18: e5c41029     strb r1, [r4, #41]    ; fAborted = false
```

### AEHandlerProc() (0x000aca54)
```asm
aca70: e5d0002a     ldrb r0, [r0, #42]    ; if (fUseForks)
acaa8: e5b40014     ldr  r0, [r4, #20]!   ; r0 = fEndpoint
```

### Unblock() (0x000aca28)
```asm
aca28: e5d01028     ldrb r1, [r0, #40]    ; if (fBlocking)
aca30: e12800020    addne r0, r0, #32     ; &fSyncState
```

## Usage Patterns

### Synchronous Operations
1. Client calls endpoint method with sync=true
2. Endpoint calls CallService() which sends message to service
3. Handler's Block() is called with timeout
4. fBlocking is set to TRUE
5. fSyncState.Block() waits for completion
6. When event arrives, Unblock() is called
7. fSyncState.Unblock() wakes the waiting thread
8. Block() returns, fBlocking set back to FALSE

### Abort Handling
1. Abort() is called (possibly from another thread/fork)
2. fAborted is set to TRUE
3. Abort message is sent to service
4. When Block() returns from fSyncState.Block(), it checks fAborted
5. If TRUE, returns error -10441 and clears fAborted

### Fork-based Event Handling
1. When fUseForks is TRUE
2. CallService() uses TForkWorld::Fork() to execute in separate context
3. AEHandlerProc() watches for special 'abrt' event type
4. On receiving 'abrt', immediately calls Abort() method

## Recommendations

The field names identified are:
- ✅ **fEndpoint** - Clear and matches usage
- ✅ **fServicePort** - Embedded TUObject for service communication
- ✅ **fSyncState** - Manages synchronous/blocking behavior
- ✅ **fBlocking** - Tracks blocking state
- ✅ **fAborted** - Abort flag
- ✅ **fUseForks** - Fork mode flag

These names have been applied to `Sources/CommAPI/TEndpointEventHandler.cpp`.
