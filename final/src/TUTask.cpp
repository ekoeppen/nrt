#include "UserTasks.h"
#include "UserGlobals.h"

// --- TUTask Implementation ---

long TUTask::Init(TaskProcPtr pc, unsigned long stackSize, unsigned long objectSize, void* theObject, unsigned long priority, unsigned long taskName, TObjectId environment) {
    TUSharedMem sharedMem;
    long result = sharedMem.Init();
    if (result != 0) return result;
    
    result = sharedMem.SetBuffer(theObject, objectSize, 1);
    if (result != 0) return result;

    struct {
        unsigned long fUnused[4];
        unsigned long fPC;
        unsigned long fStackSize;
        TObjectId     fSharedMem;
        unsigned long fTaskName;
        unsigned long fPriority;
        TObjectId     fEnv;
    } msg;

    msg.fPC = (unsigned long)pc;
    msg.fStackSize = stackSize;
    msg.fSharedMem = sharedMem;
    msg.fTaskName = taskName;
    msg.fPriority = priority;
    msg.fEnv = environment;
    
    return MakeObject(kObjectTask, (ObjectMessage*)&msg, 40);
}

long TUTask::Start() {
    struct {
        unsigned long fSelector;
        unsigned long fReserved;
        TObjectId     fTaskId;
    } msg;
    msg.fSelector = 12; // Standard monitor selector for task operations?
    msg.fTaskId = fId;
    return MonitorDispatchSWI((TObjectId)gUObjectMgrMonitor, 3, &msg);
}

long TUTask::Suspend() {
    struct {
        unsigned long fSelector;
        unsigned long fReserved;
        TObjectId     fTaskId;
    } msg;
    msg.fSelector = 12;
    msg.fTaskId = fId;
    return MonitorDispatchSWI((TObjectId)gUObjectMgrMonitor, 4, &msg);
}

long TUTask::GetRegister(unsigned long reg, unsigned long* value) {
    struct {
        unsigned long fSelector;
        unsigned long fResult;
        TObjectId     fTaskId;
        unsigned long fReg;
    } msg;
    msg.fSelector = 16;
    msg.fTaskId = fId;
    msg.fReg = reg;
    long result = MonitorDispatchSWI((TObjectId)gUObjectMgrMonitor, 6, &msg);
    if (result == 0) {
        *value = msg.fResult;
    }
    return result;
}

long TUTask::SetRegister(unsigned long reg, unsigned long value) {
    struct {
        unsigned long fSelector;
        unsigned long fUnused;
        TObjectId     fTaskId;
        unsigned long fReg;
        unsigned long fValue;
    } msg;
    msg.fSelector = 20;
    msg.fTaskId = fId;
    msg.fReg = reg;
    msg.fValue = value;
    return MonitorDispatchSWI((TObjectId)gUObjectMgrMonitor, 5, &msg);
}
