#include "DDKIncludes/OS600/UserTasks.h"

/**
 * Symbol: TUTaskWorld::__ct(void)
 * Address: 0025b878
 */
TUTaskWorld::TUTaskWorld() {
    /*
        25b878:	e1a0c00d 	mov	ip, sp
        25b87c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25b880:	e24cb004 	sub	fp, ip, #4	; 0x4
        25b884:	e3300000 	teq	r0, #0	; 0x0
        25b888:	1a000003 	bne	25b89c <TUTaskWorld::__ct(void)+0x24>
        25b88c:	e3a00018 	mov	r0, #24	; 0x18
        25b890:	eb65cba8 	bl	1bce738 <$__nw(unsigned int)>
        25b894:	e3300000 	teq	r0, #0	; 0x0
        25b898:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        25b89c:	e3a01000 	mov	r1, #0	; 0x0
        25b8a0:	e5c0100c 	strb	r1, [r0, #12]	; fField12
        25b8a4:	e5801008 	str	r1, [r0, #8]	; fMotherPort
        25b8a8:	e5c01014 	strb	r1, [r0, #20]	; fField20
        25b8ac:	e5801010 	str	r1, [r0, #16]	; fChildTask
        25b8b0:	e59f2010 	ldr	r2, [pc, #10]	; 25b8c8 <TUTaskWorld::__ct(void)+0x50>
        25b8b4:	e5802000 	str	r2, [r0]
        25b8b8:	e5c01004 	strb	r1, [r0, #4]	; fIsSpawned
        25b8bc:	e5c01005 	strb	r1, [r0, #5]	; fIsOwnedByParent
        25b8c0:	e5c01006 	strb	r1, [r0, #6]	; fWantResult
        25b8c4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        25b8c8:	0001b738 	andeq	fp, r1, r8, lsr r7
    */
}

/**
 * Symbol: TUTaskWorld::__dt(void)
 * Address: 0025b8cc
 */
TUTaskWorld::~TUTaskWorld() {
    /*
        25b8cc:	e1a0c00d 	mov	ip, sp
        25b8d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25b8d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25b8d8:	e1a04000 	mov	r4, r0
        25b8dc:	e1a05001 	mov	r5, r1
        25b8e0:	e59f002c 	ldr	r0, [pc, #2c]	; 25b914 <TUTaskWorld::__dt(void)+0x48>
        25b8e4:	e5840000 	str	r0, [r4]
        25b8e8:	e2840010 	add	r0, r4, #16	; 0x10
        25b8ec:	e3a01000 	mov	r1, #0	; 0x0
        25b8f0:	eb65cb8b 	bl	1bce724 <TUObject::$__dt(void)>
        25b8f4:	e2840008 	add	r0, r4, #8	; 0x8
        25b8f8:	e3a01000 	mov	r1, #0	; 0x0
        25b8fc:	eb65cb88 	bl	1bce724 <TUObject::$__dt(void)>
        25b900:	e3150001 	tst	r5, #1	; 0x1
        25b904:	11a00004 	movne	r0, r4
        25b908:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        25b90c:	1a65c773 	bne	1bcd6e0 <$__dl(void *)>
        25b910:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25b914:	0001b738 	andeq	fp, r1, r8, lsr r7
    */
}

/**
 * Symbol: TUTaskWorld::StartTask(unsigned char, unsigned char, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 0025b918
 */
long			TUTaskWorld::StartTask(Boolean wantResultFromChild = true, Boolean wantOwnerShip = false, TTimeout startTimeout = kNoTimeout, ULong stackSize = kSpawnedTaskStackSize, ULong priority = kUserTaskPriority, ULong taskName = 'UNAM');	// make a new task and object {
    /*
        25b918:	e1a0c00d 	mov	ip, sp
        25b91c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        25b920:	e24cb004 	sub	fp, ip, #4	; 0x4
        25b924:	e1a04000 	mov	r4, r0
        25b928:	e1a05003 	mov	r5, r3
        25b92c:	e21100ff 	ands	r0, r1, #255	; 0xff
        25b930:	e59b7010 	ldr	r7, [fp, #16]	; fChildTask
        25b934:	e59b800c 	ldr	r8, [fp, #12]	; fField12
        25b938:	e99b0600 	ldmib	fp, {r9, sl}
        25b93c:	e5c40006 	strb	r0, [r4, #6]	; fWantResult
        25b940:	e5c42005 	strb	r2, [r4, #5]	; fIsOwnedByParent
        25b944:	e2846008 	add	r6, r4, #8	; 0x8
        25b948:	0a000003 	beq	25b95c <TUTaskWorld::StartTask(unsigned char, unsigned char, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0x44>
        25b94c:	e1a00006 	mov	r0, r6
        25b950:	eb65e85a 	bl	1bd5ac0 <TUPort::$Init(void)>
        25b954:	e3300000 	teq	r0, #0	; 0x0
        25b958:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        25b95c:	e1a03007 	mov	r3, r7
        25b960:	e1a02008 	mov	r2, r8
        25b964:	e1a0100a 	mov	r1, sl
        25b968:	e1a00004 	mov	r0, r4
        25b96c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25b970:	e1a00004 	mov	r0, r4
        25b974:	e5941000 	ldr	r1, [r4]
        25b978:	e1a0e00f 	mov	lr, pc
        25b97c:	e281f004 	add	pc, r1, #4	; 0x4
        25b980:	e1a03000 	mov	r3, r0
        25b984:	e2840010 	add	r0, r4, #16	; 0x10
        25b988:	e1a07000 	mov	r7, r0
        25b98c:	e1a02009 	mov	r2, r9
        25b990:	e59f10b0 	ldr	r1, [pc, #b0]	; 25ba48 <TUTaskWorld::StartTask(unsigned char, unsigned char, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0x130>
        25b994:	eb65e84b 	bl	1bd5ac8 <$Init__6TUTaskFPFPvUlT2_vUlT2PvN32>
        25b998:	e28dd010 	add	sp, sp, #16	; 0x10
        25b99c:	e3300000 	teq	r0, #0	; 0x0
        25b9a0:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        25b9a4:	e1a00007 	mov	r0, r7
        25b9a8:	eb660525 	bl	1bdce44 <TUTask::$Start(void)>
        25b9ac:	e3300000 	teq	r0, #0	; 0x0
        25b9b0:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        25b9b4:	e5d41005 	ldrb	r1, [r4, #5]	; fIsOwnedByParent
        25b9b8:	e3a08000 	mov	r8, #0	; 0x0
        25b9bc:	e3310000 	teq	r1, #0	; 0x0
        25b9c0:	0a00000a 	beq	25b9f0 <TUTaskWorld::StartTask(unsigned char, unsigned char, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0xd8>
        25b9c4:	e5979000 	ldr	r9, [r7]
        25b9c8:	e1a00007 	mov	r0, r7
        25b9cc:	e1a01008 	mov	r1, r8
        25b9d0:	eb65d39c 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25b9d4:	e1a00007 	mov	r0, r7
        25b9d8:	e1a01009 	mov	r1, r9
        25b9dc:	eb65d399 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25b9e0:	e5970000 	ldr	r0, [r7]
        25b9e4:	eb660521 	bl	1bdce70 <$TaskAcceptObject(unsigned long)>
        25b9e8:	e3300000 	teq	r0, #0	; 0x0
        25b9ec:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        25b9f0:	e5d41006 	ldrb	r1, [r4, #6]	; fWantResult
        25b9f4:	e3310000 	teq	r1, #0	; 0x0
        25b9f8:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        25b9fc:	e3a00000 	mov	r0, #0	; 0x0
        25ba00:	e3a01000 	mov	r1, #0	; 0x0
        25ba04:	e1a02005 	mov	r2, r5
        25ba08:	e3a0c502 	mov	ip, #8388608	; 0x800000
        25ba0c:	e3a03000 	mov	r3, #0	; 0x0
        25ba10:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25ba14:	e1a03008 	mov	r3, r8
        25ba18:	e3a02000 	mov	r2, #0	; 0x0
        25ba1c:	e1a0100c 	mov	r1, ip
        25ba20:	e1a00008 	mov	r0, r8
        25ba24:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25ba28:	e1a03008 	mov	r3, r8
        25ba2c:	e92d0008 	stmdb	sp!, {r3}
        25ba30:	e1a03008 	mov	r3, r8
        25ba34:	e1a00006 	mov	r0, r6
        25ba38:	e3a02002 	mov	r2, #2	; 0x2
        25ba3c:	e3a01001 	mov	r1, #1	; 0x1
        25ba40:	eb65fcc1 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        25ba44:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        25ba48:	01bdce7c 	moveqs	ip, ip, ror lr
    */
}

/**
 * Symbol: TUTaskWorld::StartTask(unsigned char, unsigned char, unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 0025ba4c
 */
long			TUTaskWorld::StartTask(Boolean wantResultFromChild = true, Boolean wantOwnerShip = false, TTimeout startTimeout = kNoTimeout, ULong stackSize = kSpawnedTaskStackSize, ULong priority = kUserTaskPriority, ULong taskName = 'UNAM');	// make a new task and object {
    /*
        25ba4c:	e1a0c00d 	mov	ip, sp
        25ba50:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        25ba54:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ba58:	e1a0e000 	mov	lr, r0
        25ba5c:	e1a0c003 	mov	ip, r3
        25ba60:	e20140ff 	and	r4, r1, #255	; 0xff
        25ba64:	e20250ff 	and	r5, r2, #255	; 0xff
        25ba68:	e3a03000 	mov	r3, #0	; 0x0
        25ba6c:	e99b00c1 	ldmib	fp, {r0, r6, r7}
        25ba70:	e1a02007 	mov	r2, r7
        25ba74:	e1a01006 	mov	r1, r6
        25ba78:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25ba7c:	e1a0300c 	mov	r3, ip
        25ba80:	e1a02005 	mov	r2, r5
        25ba84:	e1a01004 	mov	r1, r4
        25ba88:	e1a0000e 	mov	r0, lr
        25ba8c:	eb6604ef 	bl	1bdce50 <TUTaskWorld::$StartTask(unsigned char, unsigned char, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)>
        25ba90:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUTaskWorld::TaskEntry(unsigned long, unsigned long)
 * Address: 0025ba94
 */
void			TUTaskWorld::TaskEntry(ULong, TObjectId taskId);	// low level entry for spawned task (only in base class) {
    /*
        25ba94:	e1a0c00d 	mov	ip, sp
        25ba98:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25ba9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25baa0:	e1a04000 	mov	r4, r0
        25baa4:	e1a01002 	mov	r1, r2
        25baa8:	e3a00000 	mov	r0, #0	; 0x0
        25baac:	e52d0010 	str	r0, [sp, -#16]!	; fChildTask
        25bab0:	e58d000c 	str	r0, [sp, #12]	; fField12
        25bab4:	e58d0004 	str	r0, [sp, #4]	; fIsSpawned
        25bab8:	e58d0008 	str	r0, [sp, #8]	; fMotherPort
        25babc:	e2840010 	add	r0, r4, #16	; 0x10
        25bac0:	eb65d360 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25bac4:	e3a00001 	mov	r0, #1	; 0x1
        25bac8:	e5c40004 	strb	r0, [r4, #4]	; fIsSpawned
        25bacc:	e5d40006 	ldrb	r0, [r4, #6]	; fWantResult
        25bad0:	e3300000 	teq	r0, #0	; 0x0
        25bad4:	0a00000d 	beq	25bb10 <TUTaskWorld::TaskEntry(unsigned long, unsigned long)+0x7c>
        25bad8:	e3a03000 	mov	r3, #0	; 0x0
        25badc:	e3a02000 	mov	r2, #0	; 0x0
        25bae0:	e3a01502 	mov	r1, #8388608	; 0x800000
        25bae4:	e3a00000 	mov	r0, #0	; 0x0
        25bae8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25baec:	e28d2010 	add	r2, sp, #16	; 0x10
        25baf0:	e92d000c 	stmdb	sp!, {r2, r3}
        25baf4:	e2840008 	add	r0, r4, #8	; 0x8
        25baf8:	e3a02000 	mov	r2, #0	; 0x0
        25bafc:	e3a01000 	mov	r1, #0	; 0x0
        25bb00:	eb65f44c 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
        25bb04:	e28dd018 	add	sp, sp, #24	; 0x18
        25bb08:	e3300000 	teq	r0, #0	; 0x0
        25bb0c:	1a000014 	bne	25bb64 <TUTaskWorld::TaskEntry(unsigned long, unsigned long)+0xd0>
        25bb10:	e1a00004 	mov	r0, r4
        25bb14:	e5941000 	ldr	r1, [r4]
        25bb18:	e1a0e00f 	mov	lr, pc
        25bb1c:	e281f008 	add	pc, r1, #8	; 0x8
        25bb20:	e1a05000 	mov	r5, r0
        25bb24:	e5d40006 	ldrb	r0, [r4, #6]	; fWantResult
        25bb28:	e3300000 	teq	r0, #0	; 0x0
        25bb2c:	0a000006 	beq	25bb4c <TUTaskWorld::TaskEntry(unsigned long, unsigned long)+0xb8>
        25bb30:	e1a03005 	mov	r3, r5
        25bb34:	e1a0000d 	mov	r0, sp
        25bb38:	e3a02000 	mov	r2, #0	; 0x0
        25bb3c:	e3a01000 	mov	r1, #0	; 0x0
        25bb40:	eb65f869 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        25bb44:	e3300000 	teq	r0, #0	; 0x0
        25bb48:	1a000005 	bne	25bb64 <TUTaskWorld::TaskEntry(unsigned long, unsigned long)+0xd0>
        25bb4c:	e3350000 	teq	r5, #0	; 0x0
        25bb50:	1a000003 	bne	25bb64 <TUTaskWorld::TaskEntry(unsigned long, unsigned long)+0xd0>
        25bb54:	e1a00004 	mov	r0, r4
        25bb58:	e5941000 	ldr	r1, [r4]
        25bb5c:	e1a0e00f 	mov	lr, pc
        25bb60:	e281f010 	add	pc, r1, #16	; 0x10
        25bb64:	e1a00004 	mov	r0, r4
        25bb68:	e5941000 	ldr	r1, [r4]
        25bb6c:	e1a0e00f 	mov	lr, pc
        25bb70:	e281f00c 	add	pc, r1, #12	; 0xc
        25bb74:	e1a00004 	mov	r0, r4
        25bb78:	e3a01000 	mov	r1, #0	; 0x0
        25bb7c:	e1a0e00f 	mov	lr, pc
        25bb80:	e594f000 	ldr	pc, [r4]
        25bb84:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUTaskWorld::TaskConstructor(void)
 * Address: 0025bb88
 */
long	TUTaskWorld::TaskConstructor();			// spawned task called here to construct itself {
    /*
        25bb88:	e3a00000 	mov	r0, #0	; 0x0
        25bb8c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUTaskWorld::TaskDestructor(void)
 * Address: 0025bb90
 */
void	TUTaskWorld::TaskDestructor();			// spawned task called here to destroy itself {
    /*
        25bb90:	e1a0f00e 	mov	pc, lr
    */
}

