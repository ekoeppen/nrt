#ifndef __USERTASKS_H
#define __USERTASKS_H

#include "UserObjects.h"
#include "UserPorts.h"

typedef void (*TaskProcPtr)(void*);

class TUTask : public TUObject
{
public:
    TUTask(TObjectId id = 0) : TUObject(id) {}
    void operator=(TObjectId id) { CopyObject(id); }
    void operator=(const TUTask& copy) { CopyObject(copy); }

    long Init(TaskProcPtr pc, unsigned long stackSize, unsigned long objectSize, void* theObject, unsigned long priority = 20, unsigned long taskName = 'UNAM', TObjectId environment = 0);

    long Start();
    long Suspend();
    long GetRegister(unsigned long reg, unsigned long* value);
    long SetRegister(unsigned long reg, unsigned long value);
};

#endif
