/*
	File:		UserGestalt.cpp

	Contains:	User-space Gestalt implementation.

	Copyright:	 1993-1996 by Apple Computer, Inc., all rights reserved.
*/

#include "NewtonGestalt.h"
#include "UserPorts.h"
#include "NameServer.h"
#include <stdio.h>
#include <setjmp.h>

extern "C" void AddExceptionHandler(jmp_buf env);
extern "C" void BlockMove(void* src, void* dest, ULong size);

/**
 * Symbol: TUGestalt::__ct(void)
 * Address: 00131780
 */
TUGestalt::TUGestalt()
{
	fId = 0;
	fObjectCreatedByUs = false;
	
	TObjectId nameServerPort = GetPort(kGetNameServerPort);
	CopyObject(nameServerPort);
}

/**
 * Symbol: TUGestalt::Gestalt(GestaltSelector, void *, ULong *)
 * Address: 001317ec
 */
NewtonErr TUGestalt::Gestalt(GestaltSelector selector, void* paramBlock, ULong* paramSize)
{
	char name[16];
	sprintf(name, "%lx", selector);
	
	ULong thing, spec;
	TUNameServer ns;
	NewtonErr err = ns.Lookup(name, "GSLT", &thing, &spec);
	
	if (err == noErr) {
		if (paramSize) {
			if (*paramSize > spec) {
				*paramSize = spec;
			}
			
			jmp_buf env;
			if (setjmp(env) == 0) {
				AddExceptionHandler(env);
				BlockMove((void*)thing, paramBlock, *paramSize);
			} else {
				// Exception occurred (likely bad pointer)
				err = -10015; // kOSErrObjectNotFound or similar
			}
		}
	}
	
	return err;
}

/**
 * Symbol: TUGestalt::ReplaceGestalt(unsigned long, void *, unsigned long)
 * Address: 00131a48
 */
NewtonErr TUGestalt::ReplaceGestalt(GestaltSelector selector, void* paramBlock, ULong paramSize)
{
	char name[16];
	sprintf(name, "%lx", selector);
	
	TUNameServer ns;
	ULong thing, spec;
	
	// Check if it already exists
	if (ns.Lookup(name, "GSLT", &thing, &spec) == noErr) {
		ns.UnRegisterName(name, "GSLT");
	}
	
	// Check for reserved selectors or other constraints
	if (selector >= 0xFF000000 && selector <= 0xFF000001) {
		// Cannot replace system gestalts?
		return -10010; // kOSErrBadParameter
	}
	
	return ns.RegisterName(name, "GSLT", (ULong)paramBlock, paramSize);
}

/**
 * Symbol: TUGestalt::RegisterGestalt(unsigned long, void *, unsigned long)
 * Address: 00131994
 */
NewtonErr TUGestalt::RegisterGestalt(GestaltSelector selector, void* paramBlock, ULong paramSize)
{
	char name[16];
	sprintf(name, "%lx", selector);
	
	TUNameServer ns;
	ULong thing, spec;
	
	// Check if it already exists
	if (ns.Lookup(name, "GSLT", &thing, &spec) == noErr) {
		return -10068; // kOSErrObjectAlreadyExists
	}
	
	// Check for reserved selectors
	if ((selector >= 0xFF000000 && selector <= 0xFF000001) ||
	    (selector >= 0xFE000000 && selector <= 0xFE000001)) {
		return -10010; // kOSErrBadParameter
	}
	
	return ns.RegisterName(name, "GSLT", (ULong)paramBlock, paramSize);
}

