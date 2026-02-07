#include "DDKIncludes/OS600/UserSemaphore.h"

/**
 * Symbol: TULockingSemaphore::Acquire(SemFlags)
 * Address: 0025a298
 */
long		TULockingSemaphore::Acquire(SemFlags flags = kWaitOnBlock) {
    /*
        25a298:	e1a0c00d 	mov	ip, sp
        25a29c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        25a2a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a2a4:	e1a04000 	mov	r4, r0
        25a2a8:	e1a05001 	mov	r5, r1
        25a2ac:	e3a06000 	mov	r6, #0	; 0x0
        25a2b0:	e3a07000 	mov	r7, #0	; 0x0
        25a2b4:	e59f9034 	ldr	r9, [pc, #34]	; 25a2f0 <TULockingSemaphore::Acquire(SemFlags)+0x58>
        25a2b8:	e59f8034 	ldr	r8, [pc, #34]	; 25a2f4 <TULockingSemaphore::Acquire(SemFlags)+0x5c>
        25a2bc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        25a2c0:	e5991000 	ldr	r1, [r9]
        25a2c4:	eb054fce 	bl	3ae204 <Swap>
        25a2c8:	e3300000 	teq	r0, #0	; 0x0
        25a2cc:	0a000009 	beq	25a2f8 <TULockingSemaphore::Acquire(SemFlags)+0x60>
        25a2d0:	e1a02005 	mov	r2, r5
        25a2d4:	e1a01008 	mov	r1, r8
        25a2d8:	e1a00004 	mov	r0, r4
        25a2dc:	eb660296 	bl	1bdad3c <TUSemaphoreGroup::$SemOp(TUSemaphoreOpList *, SemFlags)>
        25a2e0:	e1b06000 	movs	r6, r0
        25a2e4:	e3a07001 	mov	r7, #1	; 0x1
        25a2e8:	0afffff3 	beq	25a2bc <TULockingSemaphore::Acquire(SemFlags)+0x24>
        25a2ec:	ea000003 	b	25a300 <TULockingSemaphore::Acquire(SemFlags)+0x68>
        25a2f0:	0c101054 	ldceq	0, cr1, [r0], -#336
        25a2f4:	0c104f14 	ldceq	15, cr4, [r0], -#80
        25a2f8:	e3370000 	teq	r7, #0	; 0x0
        25a2fc:	0a000003 	beq	25a310 <TULockingSemaphore::Acquire(SemFlags)+0x78>
        25a300:	e59f1010 	ldr	r1, [pc, #10]	; 25a318 <TULockingSemaphore::Acquire(SemFlags)+0x80>
        25a304:	e1a00004 	mov	r0, r4
        25a308:	e3a02001 	mov	r2, #1	; 0x1
        25a30c:	eb66028a 	bl	1bdad3c <TUSemaphoreGroup::$SemOp(TUSemaphoreOpList *, SemFlags)>
        25a310:	e1a00006 	mov	r0, r6
        25a314:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        25a318:	0c104f0c 	ldceq	15, cr4, [r0], -#48
    */
}

/**
 * Symbol: TULockingSemaphore::Release(void)
 * Address: 0025a31c
 */
long		TULockingSemaphore::Release() {
    /*
        25a31c:	e1a0c00d 	mov	ip, sp
        25a320:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25a324:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a328:	e1a04000 	mov	r4, r0
        25a32c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        25a330:	e3a01000 	mov	r1, #0	; 0x0
        25a334:	eb054fb2 	bl	3ae204 <Swap>
        25a338:	e59f1020 	ldr	r1, [pc, #20]	; 25a360 <TULockingSemaphore::Release(void)+0x44>
        25a33c:	e5911000 	ldr	r1, [r1]
        25a340:	e1300001 	teq	r0, r1
        25a344:	03a00000 	moveq	r0, #0	; 0x0
        25a348:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        25a34c:	e59f1010 	ldr	r1, [pc, #10]	; 25a364 <TULockingSemaphore::Release(void)+0x48>
        25a350:	e1a00004 	mov	r0, r4
        25a354:	e3a02001 	mov	r2, #1	; 0x1
        25a358:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        25a35c:	ea660276 	b	1bdad3c <TUSemaphoreGroup::$SemOp(TUSemaphoreOpList *, SemFlags)>
        25a360:	0c101054 	ldceq	0, cr1, [r0], -#336
        25a364:	0c104f0c 	ldceq	15, cr4, [r0], -#48
    */
}

/**
 * Symbol: StaticInit__18TULockingSemaphoreSFv
 * Address: 0025a480
 */
static long TULockingSemaphore::StaticInit();	// should only be called by UserBoot at init time {
    /*
        25a480:	e1a0c00d 	mov	ip, sp
        25a484:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25a488:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a48c:	e59f002c 	ldr	r0, [pc, #2c]	; 25a4c0 <StaticInit__18TULockingSemaphoreSFv+0x40>
        25a490:	e3a03001 	mov	r3, #1	; 0x1
        25a494:	e3a02000 	mov	r2, #0	; 0x0
        25a498:	e3a01002 	mov	r1, #2	; 0x2
        25a49c:	eb65ed84 	bl	1bd5ab4 <TUSemaphoreOpList::$Init(unsigned long,...)>
        25a4a0:	e3300000 	teq	r0, #0	; 0x0
        25a4a4:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        25a4a8:	e59f0014 	ldr	r0, [pc, #14]	; 25a4c4 <StaticInit__18TULockingSemaphoreSFv+0x44>
        25a4ac:	e3a02801 	mov	r2, #65536	; 0x10000
        25a4b0:	e2422001 	sub	r2, r2, #1	; 0x1
        25a4b4:	e3a01001 	mov	r1, #1	; 0x1
        25a4b8:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        25a4bc:	ea65ed7c 	b	1bd5ab4 <TUSemaphoreOpList::$Init(unsigned long,...)>
        25a4c0:	0c104f0c 	ldceq	15, cr4, [r0], -#48
        25a4c4:	0c104f14 	ldceq	15, cr4, [r0], -#80
    */
}

/**
 * Symbol: TULockingSemaphore::Init(void)
 * Address: 0025a4c8
 */
long		TULockingSemaphore::Init() {
    /*
        25a4c8:	e1a0c00d 	mov	ip, sp
        25a4cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25a4d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a4d4:	e1a04000 	mov	r4, r0
        25a4d8:	e3a00004 	mov	r0, #4	; 0x4
        25a4dc:	eb65f1a1 	bl	1bd6b68 <$malloc>
        25a4e0:	e5840008 	str	r0, [r4, #8]	; fField8
        25a4e4:	e3300000 	teq	r0, #0	; 0x0
        25a4e8:	03a050e9 	moveq	r5, #233	; 0xe9
        25a4ec:	02455b0a 	subeq	r5, r5, #10240	; 0x2800
        25a4f0:	0a000010 	beq	25a538 <TULockingSemaphore::Init(void)+0x70>
        25a4f4:	e3a06000 	mov	r6, #0	; 0x0
        25a4f8:	e5806000 	str	r6, [r0]
        25a4fc:	e1a00004 	mov	r0, r4
        25a500:	e3a01001 	mov	r1, #1	; 0x1
        25a504:	eb65ed68 	bl	1bd5aac <TUSemaphoreGroup::$Init(unsigned long)>
        25a508:	e1a05000 	mov	r5, r0
        25a50c:	e3500000 	cmp	r0, #0	; 0x0
        25a510:	1a000003 	bne	25a524 <TULockingSemaphore::Init(void)+0x5c>
        25a514:	e5941008 	ldr	r1, [r4, #8]	; fField8
        25a518:	e1a00004 	mov	r0, r4
        25a51c:	eb660631 	bl	1bdbde8 <TUSemaphoreGroup::$SetRefCon(void *)>
        25a520:	ea000004 	b	25a538 <TULockingSemaphore::Init(void)+0x70>
        25a524:	15940008 	ldrne	r0, [r4, #8]	; fField8
        25a528:	13300000 	teqne	r0, #0	; 0x0
        25a52c:	0a000001 	beq	25a538 <TULockingSemaphore::Init(void)+0x70>
        25a530:	eb65e108 	bl	1bd2958 <$free>
        25a534:	e5a46008 	str	r6, [r4, #8]!	; fField8
        25a538:	e1a00005 	mov	r0, r5
        25a53c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TULockingSemaphore::CopyObject(unsigned long)
 * Address: 0025a540
 */
void		TULockingSemaphore::CopyObject(TObjectId id) {
    /*
        25a540:	e1a0c00d 	mov	ip, sp
        25a544:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25a548:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a54c:	e1a04000 	mov	r4, r0
        25a550:	eb65d8bc 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25a554:	e2841008 	add	r1, r4, #8	; 0x8
        25a558:	e1a00004 	mov	r0, r4
        25a55c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        25a560:	ea65e92f 	b	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
    */
}

/**
 * Symbol: TULockingSemaphore::__dt(void)
 * Address: 0025a564
 */
TULockingSemaphore::~TULockingSemaphore() {
    /*
        25a564:	e1a0c00d 	mov	ip, sp
        25a568:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25a56c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a570:	e1a04000 	mov	r4, r0
        25a574:	e1a05001 	mov	r5, r1
        25a578:	e5d00004 	ldrb	r0, [r0, #4]	; fSem
        25a57c:	e3300000 	teq	r0, #0	; 0x0
        25a580:	15940008 	ldrne	r0, [r4, #8]	; fField8
        25a584:	13300000 	teqne	r0, #0	; 0x0
        25a588:	1b65e0f2 	blne	1bd2958 <$free>
        25a58c:	e1a00004 	mov	r0, r4
        25a590:	e3a01000 	mov	r1, #0	; 0x0
        25a594:	eb65d062 	bl	1bce724 <TUObject::$__dt(void)>
        25a598:	e3150001 	tst	r5, #1	; 0x1
        25a59c:	11a00004 	movne	r0, r4
        25a5a0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        25a5a4:	1a65cc4d 	bne	1bcd6e0 <$__dl(void *)>
        25a5a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

