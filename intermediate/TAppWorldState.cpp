#include "include/TAppWorldState.h"

/**
 * Symbol: TAppWorldState::NestedEventLoop(void)
 * Address: 00030e2c
 */
TAppWorldState::NestedEventLoop(void) {
    /*
         30e2c:	e1a0c00d 	mov	ip, sp
         30e30:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         30e34:	e24cb004 	sub	fp, ip, #4	; 0x4
         30e38:	e1a04000 	mov	r4, r0
         30e3c:	e3a00000 	mov	r0, #0	; 0x0
         30e40:	e52d006c 	str	r0, [sp, -#108]!
         30e44:	e28d0008 	add	r0, sp, #8	; 0x8
         30e48:	eb6e06c9 	bl	1bb2974 <$setjmp>
         30e4c:	e3a01001 	mov	r1, #1	; 0x1
         30e50:	e3300000 	teq	r0, #0	; 0x0
         30e54:	1a000005 	bne	30e70 <TAppWorldState::NestedEventLoop(void)+0x44>
         30e58:	e1a0000d 	mov	r0, sp
         30e5c:	eb6ebc86 	bl	1be007c <$AddExceptionHandler>
         30e60:	eb6e8adb 	bl	1bd39d4 <$GetGlobals>
         30e64:	e1a01004 	mov	r1, r4
         30e68:	eb6ed530 	bl	1be6330 <TAppWorld::$AEventLoop(TAppWorldState *)>
         30e6c:	ea000000 	b	30e74 <TAppWorldState::NestedEventLoop(void)+0x48>
         30e70:	e5c41028 	strb	r1, [r4, #40]	; fField40
         30e74:	e1a0000d 	mov	r0, sp
         30e78:	eb6ec08e 	bl	1be10b8 <$ExitHandler>
         30e7c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorldState::TerminateNestedEventLoop(void)
 * Address: 00030e80
 */
TAppWorldState::TerminateNestedEventLoop(void) {
    /*
         30e80:	e3a01001 	mov	r1, #1	; 0x1
         30e84:	e5c01028 	strb	r1, [r0, #40]	; fField40
         30e88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorldState::__ct(void)
 * Address: 000313f4
 */
TAppWorldState::TAppWorldState(void) {
    /*
         313f4:	e1a0c00d 	mov	ip, sp
         313f8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         313fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         31400:	e3300000 	teq	r0, #0	; 0x0
         31404:	1a000003 	bne	31418 <TAppWorldState::__ct(void)+0x24>
         31408:	e3a00f4d 	mov	r0, #308	; 0x134
         3140c:	eb6e74c9 	bl	1bce738 <$__nw(unsigned int)>
         31410:	e3300000 	teq	r0, #0	; 0x0
         31414:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         31418:	e3a01000 	mov	r1, #0	; 0x0
         3141c:	e5801008 	str	r1, [r0, #8]	; fField8
         31420:	e5801014 	str	r1, [r0, #20]	; fField20
         31424:	e580100c 	str	r1, [r0, #12]	; fField12
         31428:	e5801010 	str	r1, [r0, #16]	; fField16
         3142c:	e3e02000 	mvn	r2, #0	; 0x0
         31430:	e5801000 	str	r1, [r0]
         31434:	e5802024 	str	r2, [r0, #36]	; fField36
         31438:	e5c01029 	strb	r1, [r0, #41]	; fField41
         3143c:	e5c0102a 	strb	r1, [r0, #42]	; fField42
         31440:	e3a02c01 	mov	r2, #256	; 0x100
         31444:	e580101c 	str	r1, [r0, #28]	; fField28
         31448:	e5802018 	str	r2, [r0, #24]	; fField24
         3144c:	e5801030 	str	r1, [r0, #48]	; fField48
         31450:	e2802034 	add	r2, r0, #52	; 0x34
         31454:	e580202c 	str	r2, [r0, #44]	; fField44
         31458:	e5c01028 	strb	r1, [r0, #40]	; fField40
         3145c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorldState::__dt(void)
 * Address: 00031670
 */
TAppWorldState::~TAppWorldState(void) {
    /*
         31670:	e1a0c00d 	mov	ip, sp
         31674:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         31678:	e24cb004 	sub	fp, ip, #4	; 0x4
         3167c:	e1a04000 	mov	r4, r0
         31680:	e1a05001 	mov	r5, r1
         31684:	e5906004 	ldr	r6, [r0, #4]	; fField4
         31688:	e3360000 	teq	r6, #0	; 0x0
         3168c:	0a000004 	beq	316a4 <TAppWorldState::__dt(void)+0x34>
         31690:	e1a00006 	mov	r0, r6
         31694:	e3a01000 	mov	r1, #0	; 0x0
         31698:	eb6e7421 	bl	1bce724 <TUObject::$__dt(void)>
         3169c:	e1a00006 	mov	r0, r6
         316a0:	eb6e700e 	bl	1bcd6e0 <$__dl(void *)>
         316a4:	e3150001 	tst	r5, #1	; 0x1
         316a8:	11a00004 	movne	r0, r4
         316ac:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         316b0:	1a6e700a 	bne	1bcd6e0 <$__dl(void *)>
         316b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorldState::Init(void)
 * Address: 00031ae0
 */
TAppWorldState::Init(void) {
    /*
         31ae0:	e1a0c00d 	mov	ip, sp
         31ae4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         31ae8:	e24cb004 	sub	fp, ip, #4	; 0x4
         31aec:	e1a04000 	mov	r4, r0
         31af0:	e3a00008 	mov	r0, #8	; 0x8
         31af4:	eb6e730f 	bl	1bce738 <$__nw(unsigned int)>
         31af8:	e3500000 	cmp	r0, #0	; 0x0
         31afc:	13a01000 	movne	r1, #0	; 0x0
         31b00:	15c01004 	strneb	r1, [r0, #4]	; fField4
         31b04:	15801000 	strne	r1, [r0]
         31b08:	e5a40004 	str	r0, [r4, #4]!	; fField4
         31b0c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         31b10:	0a6ec182 	beq	1be2120 <$MemError>
         31b14:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         31b18:	1a6e8fe8 	bne	1bd5ac0 <TUPort::$Init(void)>
    */
}

/**
 * Symbol: TAppWorldState::Init(TUPort *)
 * Address: 00031b1c
 */
TAppWorldState::Init(TUPort *) {
    /*
         31b1c:	e5a01004 	str	r1, [r0, #4]!	; fField4
         31b20:	e3a00000 	mov	r0, #0	; 0x0
         31b24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorldState::Init(unsigned long)
 * Address: 00031b28
 */
TAppWorldState::Init(unsigned long) {
    /*
         31b28:	e1a0c00d 	mov	ip, sp
         31b2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         31b30:	e24cb004 	sub	fp, ip, #4	; 0x4
         31b34:	e1a04000 	mov	r4, r0
         31b38:	e3a05000 	mov	r5, #0	; 0x0
         31b3c:	e3a00000 	mov	r0, #0	; 0x0
         31b40:	eb6e6ee1 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
         31b44:	e5a40004 	str	r0, [r4, #4]!	; fField4
         31b48:	e3300000 	teq	r0, #0	; 0x0
         31b4c:	1a000001 	bne	31b58 <TAppWorldState::Init(unsigned long)+0x30>
         31b50:	eb6ec172 	bl	1be2120 <$MemError>
         31b54:	e1a05000 	mov	r5, r0
         31b58:	e1a00005 	mov	r0, r5
         31b5c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorldState::GetPort(void)
 * Address: 00031b60
 */
TAppWorldState::GetPort(void) {
    /*
         31b60:	e5900004 	ldr	r0, [r0, #4]	; fField4
         31b64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorldState::GetError(void)
 * Address: 00031b68
 */
TAppWorldState::GetError(void) {
    /*
         31b68:	e5900000 	ldr	r0, [r0]
         31b6c:	e1a0f00e 	mov	pc, lr
    */
}

