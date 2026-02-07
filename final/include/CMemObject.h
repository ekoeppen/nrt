#ifndef __CMEMOBJECT_H
#define __CMEMOBJECT_H

#include "Newton.h"

// Types for CMemObject
typedef long TObjectId;
struct TUMsgToken {
    long fData[4];
};

/**
 * CMemObject: Base class for memory-managed objects with shared memory support.
 * Size: 36 bytes.
 */
class CMemObject {
public:
    CMemObject();
    virtual ~CMemObject();

    NewtonErr Init(Size size, Boolean makeShared = false, unsigned long permissions = 0);
    virtual void Destroy();
    
    long      Make(TObjectId sharedObjectId, TUMsgToken* msgToken = NULL);
    NewtonErr MakeShared(unsigned long permissions);
    
    NewtonErr CopyTo(void* dest, Size offset, Size count);
    NewtonErr CopyFrom(Size* actualCount, void* src, Size offset, Size count);
    
    TObjectId GetId() const;

protected:
    long        fFlags;               // Offset 4 (TUObject part?)
    Boolean     fSharedMemoryObject;  // Offset 8
    // Padding/Internal
    TUMsgToken  fMsgToken;            // Offset 12 (16 bytes)
    Size        fSize;                // Offset 28
    void*       fBuffer;              // Offset 32
};

#endif
