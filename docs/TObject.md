In the Newton OS architecture, the relationship between  TUObject  and its corresponding kernel-side objects (like  TTask ,  TDomain , etc.) reflects the microkernel split between user-space proxies and protected-space implementations.

 ### 1.  TUObject  (The User Proxy)

 The  TUObject  (Task-Unit/User Object) is defined in  NCT_Projects/DDKIncludes/OS600/UserObjects.h . It is a lightweight C++ class designed to live in the user's task domain.

 • Size: Extremely small (8 bytes).
 • Structure:
   •  fId : A 32-bit  TObjectId . This is the "ticket" or handle used to identify the object to the kernel.
   •  fObjectCreatedByUs : A boolean flag indicating ownership for cleanup.
 • Mechanism: Methods like  MakeObject ,  DestroyObject , and  CopyObject  are wrappers around System Software Interrupts (SWI), specifically  MonitorDispatchSWI .
 • Subclasses: Most user-side OS wrappers inherit from  TUObject , including  TUTask ,  TUPort ,  TUDomain ,  TUSharedMem , and  TUMonitor .

 ### 2.  TKernelObject  (The Real Implementation)

 While people often refer to "TObjects" generically, the actual base class for these resources in the kernel is  TKernelObject .

 • Size: Significant (e.g.,  TTask  is 260 bytes).
 • Location: Protected kernel memory, inaccessible to user code.
 • Management: Tracked by the  TObjectManager  and stored in a global  TObjectTable .
 • Lifecycle: When a  TUObject  calls  MakeObject , the kernel instantiates a  TKernelObject  (like a  TTask ), assigns it a unique ID, and returns that ID to the user.

 ### 3. Comparison Table: User vs. Kernel

  Feature                                                                          │  TUObject  (User Object)                                                         │  TKernelObject  (Kernel Object)
 ──────────────────────────────────────────────────────────────────────────────────┼──────────────────────────────────────────────────────────────────────────────────┼──────────────────────────────────────────────────────────────────────────────────
  Domain                                                                           │ User Task (Unprivileged)                                                         │ Kernel (Privileged)
  Primary Classes                                                                  │  TUTask ,  TUPort ,  TUSharedMem                                                 │  TTask ,  TPort ,  TSharedMem
  Memory Footprint                                                                 │ ~8 bytes (the handle)                                                            │ 32 - 300+ bytes (the data)
  Logic                                                                            │ Proxy (marshals messages)                                                        │ Implementation (executes logic)
  Reference                                                                        │ Holds the  TObjectId                                                             │ Is the object identified by the ID

 ### 4. Code Example:  TUTask  vs  TTask

 In the ROM disassembly, we see this relationship in action during task creation:

 User Side ( intermediate/TUTask.cpp ):

   long TUTask::Init(...) {
       // 1. Prepare an ObjectMessage with task parameters
       // 2. Call TUObject::MakeObject(kObjectTask, msg, size)
       // 3. TUObject calls MonitorDispatchSWI
   }

 Kernel Side ( intermediate/TTask.cpp ):

   TTask::TTask() {
       // 1. Allocates 260 bytes of kernel memory
       // 2. Initializes the real task structures (queues, stack pointers)
       // 3. Registers itself in the TObjectTable to get a TObjectId
   }

 ### Key takeaway

 The  TU  prefix consistently identifies User-space wrappers. The lack of a prefix (or the use of  TKernelObject ) identifies the Kernel-space implementation. This separation ensures that even if a user task crashes or is malicious, it only possesses
 an ID and cannot directly corrupt the kernel's internal state.
