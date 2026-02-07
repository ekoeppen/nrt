#include "DDKIncludes/OS600/UserGlobals.h"

/**
 * Symbol: TUMonitor::__ct(unsigned long)
 * Address: 0025947c
 */
TUMonitor::TUMonitor(TObjectId id = 0) {
    /*
        25947c:	e1a0c00d 	mov	ip, sp
        259480:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        259484:	e24cb004 	sub	fp, ip, #4	; 0x4
        259488:	e1a04001 	mov	r4, r1
        25948c:	e3300000 	teq	r0, #0	; 0x0
        259490:	1a000003 	bne	2594a4 <TUMonitor::__ct(unsigned long)+0x28>
        259494:	e3a00008 	mov	r0, #8	; 0x8
        259498:	eb65d4a6 	bl	1bce738 <$__nw(unsigned int)>
        25949c:	e3300000 	teq	r0, #0	; 0x0
        2594a0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2594a4:	e3a01000 	mov	r1, #0	; 0x0
        2594a8:	e5c01004 	strb	r1, [r0, #4]	; TUMonitor
        2594ac:	e5804000 	str	r4, [r0]
        2594b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: Init__9TUMonitorFPFPvUlT1_vUlPvT2UcT2T5
 * Address: 002594b4
 */
long		TUMonitor::Init(MonitorProcPtr monitorProc, ULong stackSize, void* monitorObject = nil, TObjectId environmentId = 0, Boolean faultMonitor = false, ULong name = 'MNTR', Boolean rebootProtected = false) {
    /*
        2594b4:	e1a0c00d 	mov	ip, sp
        2594b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2594bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2594c0:	e28be00c 	add	lr, fp, #12	; 0xc
        2594c4:	e89e4010 	ldmia	lr, {r4, lr}
        2594c8:	e99b1020 	ldmib	fp, {r5, ip}
        2594cc:	e24dd028 	sub	sp, sp, #40	; 0x28
        2594d0:	e58d100c 	str	r1, [sp, #12]	; ObjectMessage
        2594d4:	e58d2010 	str	r2, [sp, #16]	; fObjectCreatedByUs
        2594d8:	e58d3014 	str	r3, [sp, #20]
        2594dc:	e58d5018 	str	r5, [sp, #24]
        2594e0:	e5cdc01c 	strb	ip, [sp, #28]
        2594e4:	e5cde01d 	strb	lr, [sp, #29]
        2594e8:	e58d4020 	str	r4, [sp, #32]
        2594ec:	e1a0200d 	mov	r2, sp
        2594f0:	e3a03024 	mov	r3, #36	; 0x24
        2594f4:	e3a01008 	mov	r1, #8	; 0x8
        2594f8:	eb65f599 	bl	1bd6b64 <TUObject::$MakeObject(ObjectTypes, ObjectMessage *, unsigned long)>
        2594fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUMonitor::CopyObject(unsigned long)
 * Address: 00259500
 */
void		TUMonitor::CopyObject(const TUMonitor& copy) {
    /*
        259500:	e1a0c00d 	mov	ip, sp
        259504:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        259508:	e24cb004 	sub	fp, ip, #4	; 0x4
        25950c:	e1a04000 	mov	r4, r0
        259510:	e1a05001 	mov	r5, r1
        259514:	e5900000 	ldr	r0, [r0]
        259518:	e1300001 	teq	r0, r1
        25951c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        259520:	e1a00004 	mov	r0, r4
        259524:	eb65e0de 	bl	1bd18a4 <TUMonitor::$DestroyObject(void)>
        259528:	e3a00000 	mov	r0, #0	; 0x0
        25952c:	e5c40004 	strb	r0, [r4, #4]	; TUMonitor
        259530:	e5845000 	str	r5, [r4]
        259534:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUMonitor::CopyObject(TUMonitor const &)
 * Address: 00259538
 */
void		TUMonitor::CopyObject(const TUMonitor& copy) {
    /*
        259538:	e5911000 	ldr	r1, [r1]
        25953c:	ea65dcc3 	b	1bd0850 <TUMonitor::$CopyObject(unsigned long)>
    */
}

/**
 * Symbol: TUMonitor::DestroyObject(void)
 * Address: 00259540
 */
void		TUMonitor::DestroyObject() {
    /*
        259540:	e1a0c00d 	mov	ip, sp
        259544:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        259548:	e24cb004 	sub	fp, ip, #4	; 0x4
        25954c:	e1a04000 	mov	r4, r0
        259550:	e5900000 	ldr	r0, [r0]
        259554:	e3300000 	teq	r0, #0	; 0x0
        259558:	15d41004 	ldrneb	r1, [r4, #4]	; TUMonitor
        25955c:	13310000 	teqne	r1, #0	; 0x0
        259560:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        259564:	e3a02000 	mov	r2, #0	; 0x0
        259568:	e3e01000 	mvn	r1, #0	; 0x0
        25956c:	eb05536b 	bl	3ae320 <MonitorDispatchSWI>
        259570:	e1a00004 	mov	r0, r4
        259574:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        259578:	ea65e0c8 	b	1bd18a0 <TUObject::$DestroyObject(void)>
    */
}

/**
 * Symbol: TUMonitor::__dt(void)
 * Address: 0025957c
 */
TUMonitor::~TUMonitor() {
    /*
        25957c:	e1a0c00d 	mov	ip, sp
        259580:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        259584:	e24cb004 	sub	fp, ip, #4	; 0x4
        259588:	e1a04000 	mov	r4, r0
        25958c:	e1a05001 	mov	r5, r1
        259590:	eb65e0c3 	bl	1bd18a4 <TUMonitor::$DestroyObject(void)>
        259594:	e1a00004 	mov	r0, r4
        259598:	e3a01000 	mov	r1, #0	; 0x0
        25959c:	eb65d460 	bl	1bce724 <TUObject::$__dt(void)>
        2595a0:	e3150001 	tst	r5, #1	; 0x1
        2595a4:	11a00004 	movne	r0, r4
        2595a8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2595ac:	1a65d04b 	bne	1bcd6e0 <$__dl(void *)>
        2595b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

