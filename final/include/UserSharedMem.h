#ifndef	__USERSHAREDMEM_H
#define __USERSHAREDMEM_H

#include "UserObjects.h"

class TUMsgToken;

class TUSharedMem : public TUObject
{
	public:
					TUSharedMem(TObjectId id = 0) : TUObject(id) {}
		void		operator=(TObjectId id) { CopyObject(id); }
		void		operator=(const TUSharedMem& copy) { CopyObject(copy); }
		long		Init();

		long		SetBuffer(void* buffer, unsigned long size, unsigned long permissions = 2); // kSMemReadOnly = 2
		long		GetSize(unsigned long* returnSize, void** returnBuffer = NULL);
		long		CopyToShared(void* buffer, unsigned long size, unsigned long offset = 0, TUMsgToken* token = NULL);
		long		CopyFromShared(unsigned long* returnSize, void* buffer, unsigned long size, unsigned long offset = 0, TUMsgToken* token = NULL);
};

class TUSharedMemMsg : public TUSharedMem
{
	public:
					TUSharedMemMsg(TObjectId id = 0) : TUSharedMem(id) {}
		void		operator=(TObjectId id) { CopyObject(id); }
		void		operator=(const TUSharedMemMsg& copy) { CopyObject(copy); }
		long		Init();

		long		SetTimerParms(unsigned long timeout = 0, void* delay = NULL);
		long		SetMsgAvailPort(TObjectId availPortId);
		long		GetSenderTaskId(TObjectId* theSenderTaskId);
		long		GetSize(unsigned long* returnSize, void** returnBuffer = NULL, unsigned long *refConPtr = NULL);
		long		SetUserRefCon(unsigned long refCon);
		long		GetUserRefCon(unsigned long *refConPtr);
		long		CheckForDone(unsigned long flags, TObjectId* sentbyId = NULL, TObjectId* replymemId = NULL, unsigned long* msgType = NULL, unsigned long* signature = NULL);
		long		MsgDone(long result, TObjectId signature);
};

#endif
