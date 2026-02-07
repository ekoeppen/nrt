#include "DDKIncludes/OS600/UserTasks.h"

/**
 * Symbol: Init__6TUTaskFPFPvUlT2_vUlT2PvN22
 * Address: 0025bbd4
 */
long		TUTask::Init(TaskProcPtr pc, ULong stackSize, ULong objectSize, void* theObject, ULong priority = kUserTaskPriority, ULong taskName = 'UNAM') {
    /*
        25bbd4:	e1a0c00d 	mov	ip, sp
        25bbd8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25bbdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        25bbe0:	e1a05000 	mov	r5, r0
        25bbe4:	e1a04001 	mov	r4, r1
        25bbe8:	e1a0e002 	mov	lr, r2
        25bbec:	e1a0c003 	mov	ip, r3
        25bbf0:	e3a03000 	mov	r3, #0	; 0x0
        25bbf4:	e99b0007 	ldmib	fp, {r0, r1, r2}
        25bbf8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25bbfc:	e1a0300c 	mov	r3, ip
        25bc00:	e1a0200e 	mov	r2, lr
        25bc04:	e1a01004 	mov	r1, r4
        25bc08:	e1a00005 	mov	r0, r5
        25bc0c:	eb65e7ad 	bl	1bd5ac8 <$Init__6TUTaskFPFPvUlT2_vUlT2PvN32>
        25bc10:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: Init__6TUTaskFPFPvUlT2_vUlT2PvN32
 * Address: 0025bc14
 */
long		TUTask::Init(TaskProcPtr pc, ULong stackSize, ULong objectSize, void* theObject, ULong priority = kUserTaskPriority, ULong taskName = 'UNAM') {
    /*
        25bc14:	e1a0c00d 	mov	ip, sp
        25bc18:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25bc1c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        25bc20:	e24cb014 	sub	fp, ip, #20	; 0x14
        25bc24:	e1a06000 	mov	r6, r0
        25bc28:	e1a05001 	mov	r5, r1
        25bc2c:	e1a04002 	mov	r4, r2
        25bc30:	e59b7020 	ldr	r7, [fp, #32]
        25bc34:	e59b801c 	ldr	r8, [fp, #28]
        25bc38:	e59b9018 	ldr	r9, [fp, #24]
        25bc3c:	e59ba014 	ldr	sl, [fp, #20]
        25bc40:	e24dd030 	sub	sp, sp, #48	; 0x30
        25bc44:	e3a00000 	mov	r0, #0	; 0x0
        25bc48:	e5cd0004 	strb	r0, [sp, #4]
        25bc4c:	e58d0000 	str	r0, [sp]
        25bc50:	e1a0000d 	mov	r0, sp
        25bc54:	eb65e388 	bl	1bd4a7c <TUSharedMem::$Init(void)>
        25bc58:	e3300000 	teq	r0, #0	; 0x0
        25bc5c:	1a000012 	bne	25bcac <Init__6TUTaskFPFPvUlT2_vUlT2PvN32+0x98>
        25bc60:	e1a0100a 	mov	r1, sl
        25bc64:	e1a0000d 	mov	r0, sp
        25bc68:	e3a03001 	mov	r3, #1	; 0x1
        25bc6c:	e59b2010 	ldr	r2, [fp, #16]
        25bc70:	eb65fc3d 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        25bc74:	e3300000 	teq	r0, #0	; 0x0
        25bc78:	1a00000b 	bne	25bcac <Init__6TUTaskFPFPvUlT2_vUlT2PvN32+0x98>
        25bc7c:	e58d401c 	str	r4, [sp, #28]
        25bc80:	e58d5018 	str	r5, [sp, #24]
        25bc84:	e59d0000 	ldr	r0, [sp]
        25bc88:	e58d0020 	str	r0, [sp, #32]
        25bc8c:	e58d9024 	str	r9, [sp, #36]
        25bc90:	e58d702c 	str	r7, [sp, #44]
        25bc94:	e58d8028 	str	r8, [sp, #40]
        25bc98:	e28d2008 	add	r2, sp, #8	; 0x8
        25bc9c:	e1a00006 	mov	r0, r6
        25bca0:	e3a03028 	mov	r3, #40	; 0x28
        25bca4:	e3a01001 	mov	r1, #1	; 0x1
        25bca8:	eb65ebad 	bl	1bd6b64 <TUObject::$MakeObject(ObjectTypes, ObjectMessage *, unsigned long)>
        25bcac:	e1a04000 	mov	r4, r0
        25bcb0:	e1a0000d 	mov	r0, sp
        25bcb4:	e3a01000 	mov	r1, #0	; 0x0
        25bcb8:	eb65ca99 	bl	1bce724 <TUObject::$__dt(void)>
        25bcbc:	e1a00004 	mov	r0, r4
        25bcc0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TUTask::Start(void)
 * Address: 0025bcc4
 */
long		TUTask::Start() {
    /*
        25bcc4:	e1a0c00d 	mov	ip, sp
        25bcc8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25bccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        25bcd0:	e3a0100c 	mov	r1, #12	; 0xc
        25bcd4:	e52d1028 	str	r1, [sp, -#40]!
        25bcd8:	e5900000 	ldr	r0, [r0]
        25bcdc:	e58d0008 	str	r0, [sp, #8]
        25bce0:	e59f0014 	ldr	r0, [pc, #14]	; 25bcfc <TUTask::Start(void)+0x38>
        25bce4:	e5900000 	ldr	r0, [r0]
        25bce8:	e1a0200d 	mov	r2, sp
        25bcec:	e3a01003 	mov	r1, #3	; 0x3
        25bcf0:	e5900000 	ldr	r0, [r0]
        25bcf4:	eb054989 	bl	3ae320 <MonitorDispatchSWI>
        25bcf8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        25bcfc:	0c104f04 	ldceq	15, cr4, [r0], -#16
    */
}

/**
 * Symbol: TUTask::Suspend(void)
 * Address: 0025bd00
 */
long		TUTask::Suspend() {
    /*
        25bd00:	e1a0c00d 	mov	ip, sp
        25bd04:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25bd08:	e24cb004 	sub	fp, ip, #4	; 0x4
        25bd0c:	e3a0100c 	mov	r1, #12	; 0xc
        25bd10:	e52d1028 	str	r1, [sp, -#40]!
        25bd14:	e5900000 	ldr	r0, [r0]
        25bd18:	e58d0008 	str	r0, [sp, #8]
        25bd1c:	e59f0014 	ldr	r0, [pc, #14]	; 25bd38 <TUTask::Suspend(void)+0x38>
        25bd20:	e5900000 	ldr	r0, [r0]
        25bd24:	e1a0200d 	mov	r2, sp
        25bd28:	e3a01004 	mov	r1, #4	; 0x4
        25bd2c:	e5900000 	ldr	r0, [r0]
        25bd30:	eb05497a 	bl	3ae320 <MonitorDispatchSWI>
        25bd34:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        25bd38:	0c104f04 	ldceq	15, cr4, [r0], -#16
    */
}

/**
 * Symbol: TUTask::GetRegister(unsigned long, unsigned long *)
 * Address: 0025bd3c
 */
long		TUTask::GetRegister(ULong reg, ULong* value) {
    /*
        25bd3c:	e1a0c00d 	mov	ip, sp
        25bd40:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25bd44:	e24cb004 	sub	fp, ip, #4	; 0x4
        25bd48:	e1a04002 	mov	r4, r2
        25bd4c:	e3a02010 	mov	r2, #16	; 0x10
        25bd50:	e52d2028 	str	r2, [sp, -#40]!
        25bd54:	e5900000 	ldr	r0, [r0]
        25bd58:	e58d0008 	str	r0, [sp, #8]
        25bd5c:	e58d100c 	str	r1, [sp, #12]
        25bd60:	e59f001c 	ldr	r0, [pc, #1c]	; 25bd84 <TUTask::GetRegister(unsigned long, unsigned long *)+0x48>
        25bd64:	e5900000 	ldr	r0, [r0]
        25bd68:	e1a0200d 	mov	r2, sp
        25bd6c:	e3a01006 	mov	r1, #6	; 0x6
        25bd70:	e5900000 	ldr	r0, [r0]
        25bd74:	eb054969 	bl	3ae320 <MonitorDispatchSWI>
        25bd78:	e59d1004 	ldr	r1, [sp, #4]
        25bd7c:	e5841000 	str	r1, [r4]
        25bd80:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        25bd84:	0c104f04 	ldceq	15, cr4, [r0], -#16
    */
}

/**
 * Symbol: TUTask::SetRegister(unsigned long, unsigned long)
 * Address: 0025bd88
 */
long		TUTask::SetRegister(ULong reg, ULong value) {
    /*
        25bd88:	e1a0c00d 	mov	ip, sp
        25bd8c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25bd90:	e24cb004 	sub	fp, ip, #4	; 0x4
        25bd94:	e3a03014 	mov	r3, #20	; 0x14
        25bd98:	e52d3028 	str	r3, [sp, -#40]!
        25bd9c:	e5900000 	ldr	r0, [r0]
        25bda0:	e58d0008 	str	r0, [sp, #8]
        25bda4:	e58d100c 	str	r1, [sp, #12]
        25bda8:	e58d2010 	str	r2, [sp, #16]
        25bdac:	e59f0014 	ldr	r0, [pc, #14]	; 25bdc8 <TUTask::SetRegister(unsigned long, unsigned long)+0x40>
        25bdb0:	e5900000 	ldr	r0, [r0]
        25bdb4:	e1a0200d 	mov	r2, sp
        25bdb8:	e3a01005 	mov	r1, #5	; 0x5
        25bdbc:	e5900000 	ldr	r0, [r0]
        25bdc0:	eb054956 	bl	3ae320 <MonitorDispatchSWI>
        25bdc4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        25bdc8:	0c104f04 	ldceq	15, cr4, [r0], -#16
    */
}

