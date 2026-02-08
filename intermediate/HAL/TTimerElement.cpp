#include "include/TTimerElement.h"

/**
 * Symbol: TTimerElement::__ct(TTimerQueue *, unsigned long)
 * Address: 0025564c
 */
TTimerElement::TTimerElement(TTimerQueue *, unsigned long) {
    /*
        25564c:	e1a0c00d 	mov	ip, sp
        255650:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        255654:	e24cb004 	sub	fp, ip, #4	; 0x4
        255658:	e1a05001 	mov	r5, r1
        25565c:	e1a04002 	mov	r4, r2
        255660:	e3300000 	teq	r0, #0	; 0x0
        255664:	1a000003 	bne	255678 <TTimerElement::__ct(TTimerQueue *, unsigned long)+0x2c>
        255668:	e3a00018 	mov	r0, #24	; 0x18
        25566c:	eb65e431 	bl	1bce738 <$__nw(unsigned int)>
        255670:	e3300000 	teq	r0, #0	; 0x0
        255674:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        255678:	e59f1018 	ldr	r1, [pc, #18]	; 255698 <TTimerElement::__ct(TTimerQueue *, unsigned long)+0x4c>
        25567c:	e8800022 	stmia	r0, {r1, r5}
        255680:	e3a01000 	mov	r1, #0	; 0x0
        255684:	e580100c 	str	r1, [r0, #12]	; fField12
        255688:	e5c01014 	strb	r1, [r0, #20]	; fField20
        25568c:	e5801008 	str	r1, [r0, #8]	; fField8
        255690:	e5804010 	str	r4, [r0, #16]	; fField16
        255694:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        255698:	0001d188 	andeq	sp, r1, r8, lsl #3
    */
}

/**
 * Symbol: TTimerElement::__dt(void)
 * Address: 0025569c
 */
TTimerElement::~TTimerElement(void) {
    /*
        25569c:	e1a0c00d 	mov	ip, sp
        2556a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2556a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2556a8:	e1a04000 	mov	r4, r0
        2556ac:	e1a05001 	mov	r5, r1
        2556b0:	e59f001c 	ldr	r0, [pc, #1c]	; 2556d4 <TTimerElement::__dt(void)+0x38>
        2556b4:	e5840000 	str	r0, [r4]
        2556b8:	e1a00004 	mov	r0, r4
        2556bc:	eb655bd5 	bl	1bac618 <TTimerElement::$Cancel(void)>
        2556c0:	e3150001 	tst	r5, #1	; 0x1
        2556c4:	11a00004 	movne	r0, r4
        2556c8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2556cc:	1a65e003 	bne	1bcd6e0 <$__dl(void *)>
        2556d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2556d4:	0001d188 	andeq	sp, r1, r8, lsl #3
    */
}

/**
 * Symbol: TTimerElement::Prime(unsigned long)
 * Address: 00255894
 */
TTimerElement::Prime(unsigned long) {
    /*
        255894:	e1a0c00d 	mov	ip, sp
        255898:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25589c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2558a0:	e1a04000 	mov	r4, r0
        2558a4:	e1a05001 	mov	r5, r1
        2558a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2558ac:	e3300000 	teq	r0, #0	; 0x0
        2558b0:	13350000 	teqne	r5, #0	; 0x0
        2558b4:	0a00000a 	beq	2558e4 <TTimerElement::Prime(unsigned long)+0x50>
        2558b8:	e5d41014 	ldrb	r1, [r4, #20]	; fField20
        2558bc:	e3310000 	teq	r1, #0	; 0x0
        2558c0:	11a01004 	movne	r1, r4
        2558c4:	13a02001 	movne	r2, #1	; 0x1
        2558c8:	1b655b69 	blne	1bac674 <TTimerQueue::$Dequeue(TTimerElement *, unsigned char)>
        2558cc:	e584500c 	str	r5, [r4, #12]	; fField12
        2558d0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2558d4:	eb655b4c 	bl	1bac60c <TTimerQueue::$Calibrate(void)>
        2558d8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2558dc:	e1a01004 	mov	r1, r4
        2558e0:	eb655f66 	bl	1bad680 <TTimerQueue::$Enqueue(TTimerElement *)>
        2558e4:	e5d40014 	ldrb	r0, [r4, #20]	; fField20
        2558e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTimerElement::Cancel(void)
 * Address: 002558ec
 */
TTimerElement::Cancel(void) {
    /*
        2558ec:	e1a0c00d 	mov	ip, sp
        2558f0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2558f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2558f8:	e1a01000 	mov	r1, r0
        2558fc:	e5d00014 	ldrb	r0, [r0, #20]	; fField20
        255900:	e3300000 	teq	r0, #0	; 0x0
        255904:	15910004 	ldrne	r0, [r1, #4]	; fField4
        255908:	13300000 	teqne	r0, #0	; 0x0
        25590c:	13a02001 	movne	r2, #1	; 0x1
        255910:	1b655b57 	blne	1bac674 <TTimerQueue::$Dequeue(TTimerElement *, unsigned char)>
        255914:	e3a00001 	mov	r0, #1	; 0x1
        255918:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

