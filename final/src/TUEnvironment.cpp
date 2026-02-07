#include "TUEnvironment.h"
#include "UserGlobals.h"

extern "C" long AddDomainToEnvironment(TObjectId envId, unsigned long domainId, unsigned long flags);
extern "C" long RemoveDomainFromEnvironment(TObjectId envId, unsigned long domainId);
extern "C" long EnvironmentHasDomain(TObjectId envId, unsigned long domainId, bool* hasDomain, bool* isManager);

long TUEnvironment::Init(void* reserved) {
    struct {
        unsigned long fReserved;
        unsigned long fUnused[3];
    } msg;
    msg.fReserved = (unsigned long)reserved;
    return MakeObject(kObjectEnvironment, (ObjectMessage*)&msg, 16);
}

long TUEnvironment::Add(unsigned long domainId, bool manager, bool readOnly, bool shared) {
    unsigned long flags = 0;
    if (manager) flags |= 4;
    if (readOnly) flags |= 2;
    if (shared) flags |= 1;
    return AddDomainToEnvironment(fId, domainId, flags);
}

long TUEnvironment::Remove(unsigned long domainId) {
    return RemoveDomainFromEnvironment(fId, domainId);
}

long TUEnvironment::HasDomain(unsigned long domainId, bool* hasDomain, bool* isManager) {
    return EnvironmentHasDomain(fId, domainId, hasDomain, isManager);
}
