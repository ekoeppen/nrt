/*
	File:		Protocols.cpp

	Contains:	Implementation of TProtocol and TClassInfo classes.

	Copyright:	© 1992-1994, Apple Computer, Inc.   All Rights Reserved.
*/

#include "Protocols.h"
#include "UserMonitor.h"
#include "OSErrors.h"
#include <stdlib.h>

#pragma segment OS600

/*
**	TProtocol implementation
*/

/**
 * Symbol: TProtocol::Become(TProtocol const *)
 * Address: 0005c708
 */
void TProtocol::Become(const TProtocol* proto)
{
	fRealThis = proto;
}

/**
 * Symbol: TProtocol::Become(unsigned long)
 * Address: 0005c5bc
 */
void TProtocol::Become(TObjectId id)
{
	fMonitorId = id;
}

/**
 * Symbol: TProtocol::GetMonitorId( const(void))
 * Address: 0005ccc4
 */
TObjectId TProtocol::GetMonitorId() const
{
	return fMonitorId;
}

/**
 * Symbol: TProtocol::SetType(TClassInfo const *)
 * Address: 0005ca4c
 */
void TProtocol::SetType(const TClassInfo* info)
{
	if (info) {
		fBTable = (const void**)((const char*)info + info->fBTableDelta);
	} else {
		fBTable = nil;
	}
}

/**
 * Symbol: TProtocol::ClassInfo( const(void))
 * Address: 0005b740
 */
const TClassInfo* TProtocol::ClassInfo() const
{
	// Dispatched via BTable slot 1
	typedef const TClassInfo* (*ClassInfoProc)(const TProtocol*);
	return ((ClassInfoProc)((const char*)fBTable + 4))(fRealThis);
}

/**
 * Symbol: TProtocol::StartMonitor(unsigned long, unsigned long, unsigned long, unsigned char)
 * Address: 0005cbe4
 */
long TProtocol::StartMonitor(unsigned long stackSize, TObjectId environment, ULong name, Boolean rebootProtected)
{
	TUMonitor monitor(0);
	
	const TClassInfo* info = ClassInfo();
	if (!info) return kOSInvalidParameter;
	
	MonitorProcPtr entry = (MonitorProcPtr)info->EntryProc();
	
	long err = monitor.Init(entry, stackSize, (void*)this, environment, false, name, rebootProtected);
	if (err == noErr) {
		fMonitorId = monitor;
	}
	
	return err;
}

/**
 * Symbol: TProtocol::DestroyMonitor(void)
 * Address: 0005cc80
 */
long TProtocol::DestroyMonitor()
{
	if (fMonitorId != 0) {
		TUMonitor monitor(fMonitorId);
		monitor.SetDestroyKernelObject(true);
		// Destructor of monitor will call DestroyObject() if fObjectCreatedByUs is true
	}
	
	free(this);
	return noErr;
}


/*
**	TClassInfo implementation
*/

/**
 * Symbol: TClassInfo::ImplementationName( const(void))
 * Address: 1bd4a74
 */
const char * TClassInfo::ImplementationName() const
{
	return (const char*)this + fNameDelta;
}

/**
 * Symbol: TClassInfo::InterfaceName( const(void))
 * Address: 1bd5af0
 */
const char * TClassInfo::InterfaceName() const
{
	return (const char*)this + fInterfaceDelta;
}

/**
 * Symbol: TClassInfo::Signature( const(void))
 * Address: Inferred
 */
const char * TClassInfo::Signature() const
{
	return (const char*)this + fSignatureDelta;
}

/**
 * Symbol: TClassInfo::Size( const(void))
 * Address: 0005c5c4
 */
size_t TClassInfo::Size() const
{
	// Dispatched by executing the branch at offset 24
	typedef size_t (*SizeProc)(const TClassInfo*);
	return ((SizeProc)(&fSizeofBranch))(this);
}

/**
 * Symbol: TClassInfo::MakeAt( const(void const *))
 * Address: 0005c5f0
 */
void TClassInfo::MakeAt(const void* proto) const
{
	TProtocol* p = (TProtocol*)proto;
	p->fRuntime = nil;
	p->fRealThis = p;
	p->fBTable = (const void**)((const char*)this + fBTableDelta);
	p->fMonitorId = 0;
}

/**
 * Symbol: TClassInfo::EntryProc( const(void))
 * Address: 0005c5f4
 */
const void * TClassInfo::EntryProc() const
{
	return (const char*)this + fEntryProcDelta;
}

/**
 * Symbol: TClassInfo::AllocProc( const(void))
 * Address: 0005c5c8
 */
const void * TClassInfo::AllocProc() const
{
	return fAllocBranch ? &fAllocBranch : nil;
}

/**
 * Symbol: TClassInfo::FreeProc( const(void))
 * Address: 0005c5dc
 */
const void * TClassInfo::FreeProc() const
{
	return fFreeBranch ? &fFreeBranch : nil;
}

/**
 * Symbol: TClassInfo::Version( const(void))
 * Address: 0005c600
 */
unsigned long TClassInfo::Version() const
{
	return fVersion;
}

/**
 * Symbol: TClassInfo::Flags( const(void))
 * Address: Inferred
 */
unsigned long TClassInfo::Flags() const
{
	return fFlags;
}

/**
 * Symbol: TClassInfo::New( const(void))
 * Address: 1bd6b7c
 */
TProtocol * TClassInfo::New() const
{
	TProtocol* instance;
	typedef TProtocol* (*AllocProc)(const TClassInfo*);
	
	if (fAllocBranch) {
		instance = ((AllocProc)&fAllocBranch)(this);
	} else {
		instance = (TProtocol*)malloc(Size());
	}
	
	if (instance) {
		MakeAt(instance);
		// Call Default Constructor if it exists
		typedef void (*DefaultCtProc)(TProtocol*);
		if (fDefaultNewBranch) {
			((DefaultCtProc)&fDefaultNewBranch)(instance);
		}
	}
	return instance;
}

/**
 * Symbol: TClassInfo::Destroy(TProtocol *)
 * Address: 0005c6b0
 */
void TClassInfo::Destroy(TProtocol * proto) const
{
	if (proto) {
		// Call Default Destructor if it exists
		typedef void (*DefaultDtProc)(TProtocol*);
		if (fDefaultDeleteBranch) {
			((DefaultDtProc)&fDefaultDeleteBranch)(proto);
		}
		
		typedef void (*FreeProc)(const TClassInfo*, TProtocol*);
		if (fFreeBranch) {
			((FreeProc)&fFreeBranch)(this, proto);
		} else {
			free(proto);
		}
	}
}
