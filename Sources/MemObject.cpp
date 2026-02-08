#include "MemObject.h"
#include <string.h>
#include <stdlib.h>

/**
 * Symbol: CMemObject::__ct(void)
 * Address: 0011c908
 */
CMemObject::CMemObject() {
    fFlags = 0;
    fSharedMemoryObject = false;
    memset(&fMsgToken, 0, sizeof(fMsgToken));
    fSize = 0;
    fBuffer = NULL;
}

/**
 * Symbol: CMemObject::~CMemObject()
 * Address: 0011c974
 */
CMemObject::~CMemObject() {
    this->Destroy();
}

/**
 * Symbol: CMemObject::Init(unsigned long, void *, unsigned char, unsigned long)
 * Address: 0011c9ac
 */
NewtonErr CMemObject::Init(Size size, Boolean makeShared, unsigned long permissions) {
    fSize = size;
    fBuffer = malloc(size);
    if (!fBuffer) return -1;
    
    if (makeShared) {
        return this->MakeShared(permissions);
    }
    return 0;
}

/**
 * Symbol: CMemObject::Destroy(void)
 * Address: 0011c9f4
 */
void CMemObject::Destroy() {
    if (fBuffer) {
        free(fBuffer);
        fBuffer = NULL;
    }
}

/**
 * Symbol: CMemObject::Make(unsigned long, TUMsgToken *)
 * Address: 0011ca28
 */
long CMemObject::Make(TObjectId sharedObjectId, TUMsgToken* msgToken) {
    if (msgToken) {
        fMsgToken = *msgToken;
    }
    // Shared memory setup logic
    return 0;
}

/**
 * Symbol: CMemObject::MakeShared(unsigned long)
 * Address: 0011caac
 */
NewtonErr CMemObject::MakeShared(unsigned long permissions) {
    fSharedMemoryObject = true;
    return 0;
}

/**
 * Symbol: CMemObject::CopyTo(void *, unsigned long, unsigned long)
 * Address: 0011cb1c
 */
NewtonErr CMemObject::CopyTo(void* dest, Size offset, Size count) {
    if (offset + count > fSize) return -1;
    memcpy(dest, (UByte*)fBuffer + offset, count);
    return 0;
}

/**
 * Symbol: CMemObject::CopyFrom(unsigned long *, void *, unsigned long, unsigned long)
 * Address: 0011cb68
 */
NewtonErr CMemObject::CopyFrom(Size* actualCount, void* src, Size offset, Size count) {
    if (offset + count > fSize) return -1;
    memcpy((UByte*)fBuffer + offset, src, count);
    if (actualCount) *actualCount = count;
    return 0;
}

/**
 * Symbol: CMemObject::GetId(void)
 * Address: 0011cbdc
 */
TObjectId CMemObject::GetId() const {
    return (TObjectId)fFlags; // As per assembly offset 4
}
