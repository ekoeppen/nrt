#include "include/NBlockComparator.h"

/**
 * Symbol: NBlockComparator::__ct(long)
 * Address: 001285b0
 */
NBlockComparator::NBlockComparator(long) {
    /*
        1285b0:	e1a0c00d 	mov	ip, sp
        1285b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1285b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1285bc:	e1b04000 	movs	r4, r0
        1285c0:	e1a05001 	mov	r5, r1
        1285c4:	1a000003 	bne	1285d8 <NBlockComparator::__ct(long)+0x28>
        1285c8:	e3a00008 	mov	r0, #8	; 0x8
        1285cc:	eb6a9859 	bl	1bce738 <$__nw(unsigned int)>
        1285d0:	e1b04000 	movs	r4, r0
        1285d4:	0a000003 	beq	1285e8 <NBlockComparator::__ct(long)+0x38>
        1285d8:	e1a00004 	mov	r0, r4
        1285dc:	eb6a24c5 	bl	1bb18f8 <NComparator::$__ct(void)>
        1285e0:	e59f0008 	ldr	r0, [pc, #8]	; 1285f0 <NBlockComparator::__ct(long)+0x40>
        1285e4:	e8840021 	stmia	r4, {r0, r5}
        1285e8:	e1a00004 	mov	r0, r4
        1285ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1285f0:	0001e3a0 	andeq	lr, r1, r0, lsr #7
    */
}

/**
 * Symbol: NBlockComparator::__dt(void)
 * Address: 001285f4
 */
NBlockComparator::~NBlockComparator(void) {
    /*
        1285f4:	e1a0c00d 	mov	ip, sp
        1285f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1285fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        128600:	e1a04000 	mov	r4, r0
        128604:	e1a05001 	mov	r5, r1
        128608:	e59f0020 	ldr	r0, [pc, #20]	; 128630 <NBlockComparator::__dt(void)+0x3c>
        12860c:	e5840000 	str	r0, [r4]
        128610:	e1a00004 	mov	r0, r4
        128614:	e3a01000 	mov	r1, #0	; 0x0
        128618:	eb6a24b7 	bl	1bb18fc <NComparator::$__dt(void)>
        12861c:	e3150001 	tst	r5, #1	; 0x1
        128620:	11a00004 	movne	r0, r4
        128624:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        128628:	1a6a942c 	bne	1bcd6e0 <$__dl(void *)>
        12862c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        128630:	0001e3a0 	andeq	lr, r1, r0, lsr #7
    */
}

/**
 * Symbol: CompareKeys__16NBlockComparatorCFPCvT1
 * Address: 00128634
 */
void NBlockComparator::CompareKeys() {
    /*
        128634:	e1a03002 	mov	r3, r2
        128638:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        12863c:	e1a00001 	mov	r0, r1
        128640:	e1a01003 	mov	r1, r3
        128644:	ea6a3100 	b	1bb4a4c <$memcmp>
    */
}

