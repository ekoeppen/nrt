#include "UserObjects.h"
#include "UserGlobals.h"

// Error code from NewtErrors.h / OSErrors.h
#define kError_Object_Already_Initialized -10040

/**
 * Symbol: TUObject::MakeObject(ObjectTypes, ObjectMessage *, unsigned long)
 * Address: 002595b4
 */
long TUObject::MakeObject(ObjectTypes objectType, ObjectMessage* msg, unsigned long msgSize) {
    if (fObjectCreatedByUs) {
        return kError_Object_Already_Initialized;
    }

    msg->fData = objectType;
    msg->fMsgSize = msgSize;

    long result = MonitorDispatchSWI(*gUObjectMgrMonitor, 0, msg);

    if (result != 0) {
        fId = 0;
        return result;
    }

    fId = msg->fMsgSize;
    fObjectCreatedByUs = true;
    return 0;
}

/**
 * Symbol: TUObject::CopyObject(unsigned long)
 * Address: 00259624
 */
void TUObject::CopyObject(const TObjectId id) {
    if (fId == id) return;

    DestroyObject();

    fObjectCreatedByUs = false;
    fId = id;
}

/**
 * Symbol: TUObject::DestroyObject(void)
 * Address: 0025965c
 */
void TUObject::DestroyObject() {
    if (fId == 0) return;

    if (fObjectCreatedByUs) {
        ObjectMessage msg;
        msg.fMsgSize = 12;
        msg.fData = fId;
        MonitorDispatchSWI(*gUObjectMgrMonitor, 1, &msg);
    }

    fObjectCreatedByUs = false;
    fId = 0;
}

/**
 * Symbol: TUObject::~TUObject(void)
 * Address: 002596c4
 */
TUObject::~TUObject() {
    DestroyObject();
}
