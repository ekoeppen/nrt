/*
	File:		TUTaskWorld.cpp

	Contains:	Implementation of TUTaskWorld class.

	Copyright:	© 1992-1995 by Apple Computer, Inc., all rights reserved.
*/

#include "UserTasks.h"
#include "KernelTypes.h"
#include "OSErrors.h"

#pragma segment OS600

/**
 * Symbol: TUTaskWorld::__ct(void)
 * Address: 0025b878
 */
TUTaskWorld::TUTaskWorld()
{
	fMotherPort.fId = 0;
	fMotherPort.DenyOwnership();
	
	fChildTask.fId = 0;
	fChildTask.DenyOwnership();

	fIsSpawned = false;
	fIsOwnedByParent = false;
	fWantResult = false;
}

/**
 * Symbol: TUTaskWorld::__dt(void)
 * Address: 0025b8cc
 */
TUTaskWorld::~TUTaskWorld()
{
	// Explicitly cleanup objects (mimicking assembly at 25b8e8-25b8fc)
	fChildTask.DestroyObject();
	fMotherPort.DestroyObject();
}

/**
 * Symbol: TUTaskWorld::StartTask(Boolean, Boolean, TTimeout, ULong, ULong, ULong, TObjectId)
 * Address: 0025b918
 */
long TUTaskWorld::StartTask(Boolean wantResultFromChild, Boolean wantOwnerShip, TTimeout startTimeout, 
                            ULong stackSize, ULong priority, ULong taskName, TObjectId environment)
{
	fWantResult = wantResultFromChild;
	fIsOwnedByParent = wantOwnerShip;

	if (fIsOwnedByParent) {
		long err = fMotherPort.Init();
		if (err != noErr) {
			return err;
		}
	}

	ULong objSize = GetSizeOf();

	// Initialize the child task
	long err = fChildTask.Init((TaskProcPtr)&TUTaskWorld::TaskEntry, stackSize, objSize, this, priority, taskName, environment);
	if (err != noErr) {
		return err;
	}

	err = fChildTask.Start();
	if (err != noErr) {
		return err;
	}

	if (fIsOwnedByParent) {
		// Hand off ownership of the object to the child task
		TObjectId childId = fChildTask;
		fChildTask.CopyObject((TObjectId)0);
		fChildTask.CopyObject(childId);
		
		err = TaskAcceptObject(fChildTask);
		if (err != noErr) {
			return err;
		}
	}

	if (fWantResult) {
		// Wait for completion result via mother port
		// Message type kSpawnedTaskAckMsgType (0x00800000)
		err = fMotherPort.SendRPC(nil, nil, 0, nil, 0, startTimeout, kSpawnedTaskAckMsgType);
	}

	return err;
}

/**
 * Symbol: TUTaskWorld::StartTask(Boolean, Boolean, TTimeout, ULong, ULong, ULong)
 * Address: 0025ba4c
 */
long TUTaskWorld::StartTask(Boolean wantResultFromChild, Boolean wantOwnerShip, TTimeout startTimeout, 
                            ULong stackSize, ULong priority, ULong taskName)
{
	return StartTask(wantResultFromChild, wantOwnerShip, startTimeout, stackSize, priority, taskName, (TObjectId)0);
}

/**
 * Symbol: TUTaskWorld::TaskEntry(unsigned long, unsigned long)
 * Address: 0025ba94
 */
void TUTaskWorld::TaskEntry(ULong, TObjectId taskId)
{
	TUMsgToken token;

	// We are now running in the child task context
	fChildTask.CopyObject(taskId);
	fIsSpawned = true;

	if (fWantResult) {
		ULong size;
		// Sync with parent via mother port
		fMotherPort.Receive(&size, nil, 0, &token, nil, kNoTimeout, kSpawnedTaskAckMsgType);
	}

	long err = TaskConstructor();
	if (err == noErr) {
		TaskMain();

		if (fWantResult) {
			token.ReplyRPC(nil, 0, noErr);
		}

		TaskDestructor();
	}

	// Self-destruct: the TUTaskWorld object and the task it represents are finished
	delete this;
}

/**
 * Symbol: TUTaskWorld::TaskConstructor(void)
 * Address: 0025bb88
 */
long TUTaskWorld::TaskConstructor()
{
	return noErr;
}

/**
 * Symbol: TUTaskWorld::TaskDestructor(void)
 * Address: 0025bb90
 */
void TUTaskWorld::TaskDestructor()
{
}
