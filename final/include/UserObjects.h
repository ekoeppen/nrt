#ifndef	__USEROBJECTS_H
#define __USEROBJECTS_H

#include "Newton.h"

// Kernel types from KernelTypes.h
enum ObjectTypes
{
	kObjectPort,
	kObjectTask,
	kObjectEnvironment,
	kObjectDomain,
	kObjectSemList,
	kObjectSemGroup,
	kObjectSharedMem,
	kObjectSharedMemMsg,
	kObjectMonitor,
	kObjectPhys
};

typedef unsigned long TObjectId;

struct ObjectMessage {
    unsigned long fMsgSize;
    unsigned long fReserved;
    unsigned long fData; // Can be objectType or objectId
};

class TUObject : public SingleObject
{
	public:
					TUObject(TObjectId id = 0)	{ fObjectCreatedByUs = false; fId = id; }
					TUObject(const TUObject& copy)	{ fObjectCreatedByUs = false; fId = copy.fId; }
					operator	TObjectId()		{ return fId; }
		void		DestroyObject();
					~TUObject();

		void		CopyObject(const TObjectId id);
		void		CopyObject(const TUObject& copy)	{ CopyObject(copy.fId); }
		long		MakeObject(ObjectTypes objectType, ObjectMessage* msg, unsigned long msgSize);
		void		DenyOwnership()				{ fObjectCreatedByUs = false; }

		bool		IsExtPage()					{ return (fId & 0x0f) == 0x0c; } // kExtPhysType = 12

		TObjectId	fId; // Offset 0

	protected:
		bool		fObjectCreatedByUs; // Offset 4
};

#endif
