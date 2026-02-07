#include "DDKIncludes/OS600/UserPhys.h"

/**
 * Symbol: TPhys::__ct(void)
 * Address: 00183458
 */
TPhys::TPhys(void) {
    /*
        183458:	e1a0c00d 	mov	ip, sp
        18345c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        183460:	e24cb004 	sub	fp, ip, #4	; 0x4
        183464:	e3300000 	teq	r0, #0	; 0x0
        183468:	1a000003 	bne	18347c <TPhys::__ct(void)+0x24>
        18346c:	e3a00018 	mov	r0, #24	; 0x18
        183470:	eb692cb0 	bl	1bce738 <$__nw(unsigned int)>
        183474:	e3300000 	teq	r0, #0	; 0x0
        183478:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        18347c:	e5901010 	ldr	r1, [r0, #16]	; fField16
        183480:	e2011c01 	and	r1, r1, #256	; 0x100
        183484:	e5801010 	str	r1, [r0, #16]	; fField16
        183488:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPhys::__dt(void)
 * Address: 001834c4
 */
TPhys::~TPhys(void) {
    /*
        1834c4:	e3110001 	tst	r1, #1	; 0x1
        1834c8:	1a692884 	bne	1bcd6e0 <$__dl(void *)>
        1834cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPhys::InitState(unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 001834d0
 */
TPhys::InitState(unsigned long, unsigned long, unsigned char, unsigned char) {
    /*
        1834d0:	e92d4000 	stmdb	sp!, {lr}
        1834d4:	e31300ff 	tst	r3, #255	; 0xff
        1834d8:	e59dc004 	ldr	ip, [sp, #4]
        1834dc:	e20cc0ff 	and	ip, ip, #255	; 0xff
        1834e0:	e590e010 	ldr	lr, [r0, #16]	; fField16
        1834e4:	e1a0ea0e 	mov	lr, lr, lsl #20
        1834e8:	e1a01621 	mov	r1, r1, lsr #12
        1834ec:	e1a01601 	mov	r1, r1, lsl #12
        1834f0:	e1811a2e 	orr	r1, r1, lr, lsr #20
        1834f4:	e5801010 	str	r1, [r0, #16]	; fField16
        1834f8:	03a03000 	moveq	r3, #0	; 0x0
        1834fc:	13a03001 	movne	r3, #1	; 0x1
        183500:	e3c11b02 	bic	r1, r1, #2048	; 0x800
        183504:	e2033001 	and	r3, r3, #1	; 0x1
        183508:	e1811583 	orr	r1, r1, r3, lsl #11
        18350c:	e1b0300c 	movs	r3, ip
        183510:	e5801010 	str	r1, [r0, #16]	; fField16
        183514:	13a03001 	movne	r3, #1	; 0x1
        183518:	e3c11b01 	bic	r1, r1, #1024	; 0x400
        18351c:	e2033001 	and	r3, r3, #1	; 0x1
        183520:	e1811503 	orr	r1, r1, r3, lsl #10
        183524:	e3520601 	cmp	r2, #1048576	; 0x100000
        183528:	e5801010 	str	r1, [r0, #16]	; fField16
        18352c:	25a02014 	strcs	r2, [r0, #20]!	; fField20
        183530:	28bd8000 	ldmcsia	sp!, {pc}
        183534:	e3c110ff 	bic	r1, r1, #255	; 0xff
        183538:	e3a030ff 	mov	r3, #255	; 0xff
        18353c:	e0032622 	and	r2, r3, r2, lsr #12
        183540:	e1811002 	orr	r1, r1, r2
        183544:	e5a01010 	str	r1, [r0, #16]!	; fField16
        183548:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TPhys::Init(unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 0018354c
 */
long		TPhys::Init(PAddr base, ULong size, Boolean readOnly=false, Boolean cache=true) {
    /*
        18354c:	e1a0c00d 	mov	ip, sp
        183550:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        183554:	e24cb004 	sub	fp, ip, #4	; 0x4
        183558:	e203c0ff 	and	ip, r3, #255	; 0xff
        18355c:	e59be004 	ldr	lr, [fp, #4]
        183560:	e20ee0ff 	and	lr, lr, #255	; 0xff
        183564:	e3a030ea 	mov	r3, #234	; 0xea
        183568:	e2433b0a 	sub	r3, r3, #10240	; 0x2800
        18356c:	e3520601 	cmp	r2, #1048576	; 0x100000
        183570:	3a000003 	bcc	183584 <TPhys::Init(unsigned long, unsigned long, unsigned char, unsigned char)+0x38>
        183574:	e5904010 	ldr	r4, [r0, #16]	; fField16
        183578:	e2044c02 	and	r4, r4, #512	; 0x200
        18357c:	e3340c02 	teq	r4, #512	; 0x200
        183580:	0a000003 	beq	183594 <TPhys::Init(unsigned long, unsigned long, unsigned char, unsigned char)+0x48>
        183584:	e1b04a01 	movs	r4, r1, lsl #20
        183588:	1a000001 	bne	183594 <TPhys::Init(unsigned long, unsigned long, unsigned char, unsigned char)+0x48>
        18358c:	e3520201 	cmp	r2, #268435456	; 0x10000000
        183590:	3a000001 	bcc	18359c <TPhys::Init(unsigned long, unsigned long, unsigned char, unsigned char)+0x50>
        183594:	e1a00003 	mov	r0, r3
        183598:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        18359c:	e1a0300e 	mov	r3, lr
        1835a0:	e92d0008 	stmdb	sp!, {r3}
        1835a4:	e1a0300c 	mov	r3, ip
        1835a8:	eb65ea42 	bl	1afdeb8 <TPhys::$InitState(unsigned long, unsigned long, unsigned char, unsigned char)>
        1835ac:	e3a00000 	mov	r0, #0	; 0x0
        1835b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPhys::Invalidate(void)
 * Address: 001835b4
 */
long		TPhys::Invalidate();			// to invalid {
    /*
        1835b4:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1835b8:	e3120c02 	tst	r2, #512	; 0x200
        1835bc:	05b01014 	ldreq	r1, [r0, #20]!	; fField20
        1835c0:	120200ff 	andne	r0, r2, #255	; 0xff
        1835c4:	11a01600 	movne	r1, r0, lsl #12
        1835c8:	e1a00622 	mov	r0, r2, lsr #12
        1835cc:	e1a00600 	mov	r0, r0, lsl #12
        1835d0:	e3a02000 	mov	r2, #0	; 0x0
        1835d4:	ea662843 	b	1b0d6e8 <$ChangePRangeAccessibility__FUlT115EPhysChangeType>
    */
}

/**
 * Symbol: TPhys::MakeInaccessible(void)
 * Address: 001835d8
 */
long		TPhys::MakeInaccessible();		// to inaccessible {
    /*
        1835d8:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1835dc:	e3120c02 	tst	r2, #512	; 0x200
        1835e0:	05b01014 	ldreq	r1, [r0, #20]!	; fField20
        1835e4:	120200ff 	andne	r0, r2, #255	; 0xff
        1835e8:	11a01600 	movne	r1, r0, lsl #12
        1835ec:	e1a00622 	mov	r0, r2, lsr #12
        1835f0:	e1a00600 	mov	r0, r0, lsl #12
        1835f4:	e3a02001 	mov	r2, #1	; 0x1
        1835f8:	ea66283a 	b	1b0d6e8 <$ChangePRangeAccessibility__FUlT115EPhysChangeType>
    */
}

/**
 * Symbol: TPhys::MakeAccessible(void)
 * Address: 001835fc
 */
long		TPhys::MakeAccessible();		// to accessible {
    /*
        1835fc:	e5902010 	ldr	r2, [r0, #16]	; fField16
        183600:	e3120c02 	tst	r2, #512	; 0x200
        183604:	05b01014 	ldreq	r1, [r0, #20]!	; fField20
        183608:	120200ff 	andne	r0, r2, #255	; 0xff
        18360c:	11a01600 	movne	r1, r0, lsl #12
        183610:	e1a00622 	mov	r0, r2, lsr #12
        183614:	e1a00600 	mov	r0, r0, lsl #12
        183618:	e3a02002 	mov	r2, #2	; 0x2
        18361c:	ea662831 	b	1b0d6e8 <$ChangePRangeAccessibility__FUlT115EPhysChangeType>
    */
}

/**
 * Symbol: TPhys::ChangeVirtualMapping(unsigned long, unsigned long, EPhysChangeType)
 * Address: 00183620
 */
long		TPhys::ChangeVirtualMapping(VAddr va, ULong vsize, EPhysChangeType access) {
    /*
        183620:	e1a0c00d 	mov	ip, sp
        183624:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        183628:	e24cb004 	sub	fp, ip, #4	; 0x4
        18362c:	e1a0c002 	mov	ip, r2
        183630:	e92d0008 	stmdb	sp!, {r3}
        183634:	e5902010 	ldr	r2, [r0, #16]	; fField16
        183638:	e3120c02 	tst	r2, #512	; 0x200
        18363c:	05b03014 	ldreq	r3, [r0, #20]!	; fField20
        183640:	120200ff 	andne	r0, r2, #255	; 0xff
        183644:	11a03600 	movne	r3, r0, lsl #12
        183648:	e1a00622 	mov	r0, r2, lsr #12
        18364c:	e1a02600 	mov	r2, r0, lsl #12
        183650:	e1a00001 	mov	r0, r1
        183654:	e1a0100c 	mov	r1, ip
        183658:	eb662825 	bl	1b0d6f4 <$ChangeVRangeAccessibility__FUlN3115EPhysChangeType>
        18365c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

