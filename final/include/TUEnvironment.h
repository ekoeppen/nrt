#ifndef __USERENVIRONMENT_H
#define __USERENVIRONMENT_H

#include "UserObjects.h"

class TUEnvironment : public TUObject
{
public:
    TUEnvironment(TObjectId id = 0) : TUObject(id) {}
    void operator=(TObjectId id) { CopyObject(id); }
    void operator=(const TUEnvironment& copy) { CopyObject(copy); }

    long Init(void* reserved = NULL);
    long Add(unsigned long domainId, bool manager = false, bool readOnly = false, bool shared = false);
    long Remove(unsigned long domainId);
    long HasDomain(unsigned long domainId, bool* hasDomain, bool* isManager);
};

#endif
