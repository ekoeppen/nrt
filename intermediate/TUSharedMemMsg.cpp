#include "DDKIncludes/OS600/UserSharedMem.h"

/**
 * Symbol: TUSharedMemMsg::SetUserRefCon(unsigned long)
 * Address: 0025a5d8
 */
long		TUSharedMemMsg::SetUserRefCon(ULong refCon) {
    /*
        25a5d8:	e5900000 	ldr	r0, [r0]
        25a5dc:	ea054f96 	b	3ae43c <SMemMsgSetUserRefConSWI>
    */
}

/**
 * Symbol: TUSharedMemMsg::GetUserRefCon(unsigned long *)
 * Address: 0025a5e0
 */
long		TUSharedMemMsg::GetUserRefCon(ULong *refConPtr) {
    /*
        25a5e0:	e5900000 	ldr	r0, [r0]
        25a5e4:	ea054f96 	b	3ae444 <SMemMsgGetUserRefConSWI>
    */
}

/**
 * Symbol: TUSharedMemMsg::Init(void)
 * Address: 0025a6ac
 */
long		TUSharedMemMsg::Init() {
    /*
        25a6ac:	e1a0c00d 	mov	ip, sp
        25a6b0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25a6b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a6b8:	e24dd028 	sub	sp, sp, #40	; 0x28
        25a6bc:	e1a0200d 	mov	r2, sp
        25a6c0:	e3a0300c 	mov	r3, #12	; 0xc
        25a6c4:	e3a01007 	mov	r1, #7	; 0x7
        25a6c8:	eb65f125 	bl	1bd6b64 <TUObject::$MakeObject(ObjectTypes, ObjectMessage *, unsigned long)>
        25a6cc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUSharedMemMsg::SetTimerParms(unsigned long, TTime *)
 * Address: 0025a6d0
 */
long		TUSharedMemMsg::SetTimerParms(TTimeout timeout = kNoTimeout, TTime* delay = nil) {
    /*
        25a6d0:	e1a03002 	mov	r3, r2
        25a6d4:	e5922004 	ldr	r2, [r2, #4]
        25a6d8:	e5933000 	ldr	r3, [r3]
        25a6dc:	e5900000 	ldr	r0, [r0]
        25a6e0:	ea054f4c 	b	3ae418 <SMemMsgSetTimerParmsSWI>
    */
}

/**
 * Symbol: TUSharedMemMsg::SetMsgAvailPort(unsigned long)
 * Address: 0025a6e4
 */
long		TUSharedMemMsg::SetMsgAvailPort(TObjectId availPortId) {
    /*
        25a6e4:	e5900000 	ldr	r0, [r0]
        25a6e8:	ea054f4c 	b	3ae420 <SMemMsgSetMsgAvailPortSWI>
    */
}

/**
 * Symbol: TUSharedMemMsg::GetSenderTaskId(unsigned long *)
 * Address: 0025a6ec
 */
long		TUSharedMemMsg::GetSenderTaskId(TObjectId* theSenderTaskId) {
    /*
        25a6ec:	e5900000 	ldr	r0, [r0]
        25a6f0:	ea054f4c 	b	3ae428 <SMemMsgGetSenderTaskIdSWI>
    */
}

/**
 * Symbol: TUSharedMemMsg::GetSize(unsigned long *, void **, unsigned long *)
 * Address: 0025a6f4
 */
long		TUSharedMemMsg::GetSize(ULong* returnSize, void** returnBuffer = nil, ULong *refConPtr = nil) {
    /*
        25a6f4:	e5900000 	ldr	r0, [r0]
        25a6f8:	ea054f2b 	b	3ae3ac <SMemGetSizeSWI>
    */
}

