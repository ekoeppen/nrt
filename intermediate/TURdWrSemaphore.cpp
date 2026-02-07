#include "DDKIncludes/OS600/UserSemaphore.h"

/**
 * Symbol: StaticInit__15TURdWrSemaphoreSFv
 * Address: 0025a368
 */
static long TURdWrSemaphore::StaticInit();	// should only be called by UserBoot at init time {
    /*
        25a368:	e1a0c00d 	mov	ip, sp
        25a36c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25a370:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a374:	e3a03801 	mov	r3, #65536	; 0x10000
        25a378:	e92d0008 	stmdb	sp!, {r3}
        25a37c:	e59f006c 	ldr	r0, [pc, #6c]	; 25a3f0 <StaticInit__15TURdWrSemaphoreSFv+0x88>
        25a380:	e3a03001 	mov	r3, #1	; 0x1
        25a384:	e3a02000 	mov	r2, #0	; 0x0
        25a388:	e3a01003 	mov	r1, #3	; 0x3
        25a38c:	eb65edc8 	bl	1bd5ab4 <TUSemaphoreOpList::$Init(unsigned long,...)>
        25a390:	e28dd004 	add	sp, sp, #4	; 0x4
        25a394:	e3300000 	teq	r0, #0	; 0x0
        25a398:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        25a39c:	e59f0050 	ldr	r0, [pc, #50]	; 25a3f4 <StaticInit__15TURdWrSemaphoreSFv+0x8c>
        25a3a0:	e3a02801 	mov	r2, #65536	; 0x10000
        25a3a4:	e2422001 	sub	r2, r2, #1	; 0x1
        25a3a8:	e3a01001 	mov	r1, #1	; 0x1
        25a3ac:	eb65edc0 	bl	1bd5ab4 <TUSemaphoreOpList::$Init(unsigned long,...)>
        25a3b0:	e3300000 	teq	r0, #0	; 0x0
        25a3b4:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        25a3b8:	e59f0038 	ldr	r0, [pc, #38]	; 25a3f8 <StaticInit__15TURdWrSemaphoreSFv+0x90>
        25a3bc:	e3a03001 	mov	r3, #1	; 0x1
        25a3c0:	e2833801 	add	r3, r3, #65536	; 0x10000
        25a3c4:	e3a02000 	mov	r2, #0	; 0x0
        25a3c8:	e3a01002 	mov	r1, #2	; 0x2
        25a3cc:	eb65edb8 	bl	1bd5ab4 <TUSemaphoreOpList::$Init(unsigned long,...)>
        25a3d0:	e3300000 	teq	r0, #0	; 0x0
        25a3d4:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        25a3d8:	e59f001c 	ldr	r0, [pc, #1c]	; 25a3fc <StaticInit__15TURdWrSemaphoreSFv+0x94>
        25a3dc:	e3e028fe 	mvn	r2, #16646144	; 0xfe0000
        25a3e0:	e2822401 	add	r2, r2, #16777216	; 0x1000000
        25a3e4:	e3a01001 	mov	r1, #1	; 0x1
        25a3e8:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        25a3ec:	ea65edb0 	b	1bd5ab4 <TUSemaphoreOpList::$Init(unsigned long,...)>
        25a3f0:	0c104f1c 	ldceq	15, cr4, [r0], -#112
        25a3f4:	0c104f24 	ldceq	15, cr4, [r0], -#144
        25a3f8:	0c104f2c 	ldceq	15, cr4, [r0], -#176
        25a3fc:	0c104f34 	ldceq	15, cr4, [r0], -#208
    */
}

/**
 * Symbol: TURdWrSemaphore::Init(void)
 * Address: 0025a400
 */
long		TURdWrSemaphore::Init() {
    /*
        25a400:	e1a0c00d 	mov	ip, sp
        25a404:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25a408:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a40c:	e3a01002 	mov	r1, #2	; 0x2
        25a410:	eb65eda5 	bl	1bd5aac <TUSemaphoreGroup::$Init(unsigned long)>
        25a414:	e3500000 	cmp	r0, #0	; 0x0
        25a418:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TURdWrSemaphore::AcquireWr(SemFlags)
 * Address: 0025a41c
 */
long		TURdWrSemaphore::AcquireWr(SemFlags flags = kWaitOnBlock) {
    /*
        25a41c:	e1a02001 	mov	r2, r1
        25a420:	e59f1000 	ldr	r1, [pc, #0]	; 25a428 <TURdWrSemaphore::AcquireWr(SemFlags)+0xc>
        25a424:	ea660244 	b	1bdad3c <TUSemaphoreGroup::$SemOp(TUSemaphoreOpList *, SemFlags)>
        25a428:	0c104f1c 	ldceq	15, cr4, [r0], -#112
    */
}

/**
 * Symbol: TURdWrSemaphore::ReleaseWr(void)
 * Address: 0025a42c
 */
long		TURdWrSemaphore::ReleaseWr() {
    /*
        25a42c:	e59f1004 	ldr	r1, [pc, #4]	; 25a438 <TURdWrSemaphore::ReleaseWr(void)+0xc>
        25a430:	e3a02000 	mov	r2, #0	; 0x0
        25a434:	ea660240 	b	1bdad3c <TUSemaphoreGroup::$SemOp(TUSemaphoreOpList *, SemFlags)>
        25a438:	0c104f24 	ldceq	15, cr4, [r0], -#144
    */
}

/**
 * Symbol: TURdWrSemaphore::AcquireRd(SemFlags)
 * Address: 0025a43c
 */
long		TURdWrSemaphore::AcquireRd(SemFlags flags = kWaitOnBlock) {
    /*
        25a43c:	e1a02001 	mov	r2, r1
        25a440:	e59f1000 	ldr	r1, [pc, #0]	; 25a448 <TURdWrSemaphore::AcquireRd(SemFlags)+0xc>
        25a444:	ea66023c 	b	1bdad3c <TUSemaphoreGroup::$SemOp(TUSemaphoreOpList *, SemFlags)>
        25a448:	0c104f2c 	ldceq	15, cr4, [r0], -#176
    */
}

/**
 * Symbol: TURdWrSemaphore::ReleaseRd(void)
 * Address: 0025a44c
 */
long		TURdWrSemaphore::ReleaseRd() {
    /*
        25a44c:	e59f1004 	ldr	r1, [pc, #4]	; 25a458 <TURdWrSemaphore::ReleaseRd(void)+0xc>
        25a450:	e3a02000 	mov	r2, #0	; 0x0
        25a454:	ea660238 	b	1bdad3c <TUSemaphoreGroup::$SemOp(TUSemaphoreOpList *, SemFlags)>
        25a458:	0c104f34 	ldceq	15, cr4, [r0], -#208
    */
}

