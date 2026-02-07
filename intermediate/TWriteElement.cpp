#include "include/TWriteElement.h"

/**
 * Symbol: TWriteElement::__ct(void)
 * Address: 00277630
 */
TWriteElement::TWriteElement(void) {
    /*
        277630:	e1a0c00d 	mov	ip, sp
        277634:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        277638:	e24cb004 	sub	fp, ip, #4	; 0x4
        27763c:	e1b04000 	movs	r4, r0
        277640:	1a000003 	bne	277654 <TWriteElement::__ct(void)+0x24>
        277644:	e3a00018 	mov	r0, #24	; 0x18
        277648:	eb655c3a 	bl	1bce738 <$__nw(unsigned int)>
        27764c:	e1b04000 	movs	r4, r0
        277650:	0a000006 	beq	277670 <TWriteElement::__ct(void)+0x40>
        277654:	e59f001c 	ldr	r0, [pc, #1c]	; 277678 <TWriteElement::__ct(void)+0x48>
        277658:	e5840000 	str	r0, [r4]
        27765c:	e1a00004 	mov	r0, r4
        277660:	eb601e39 	bl	1a7ef4c <TWriteElement::$Reset(void)>
        277664:	e3a00000 	mov	r0, #0	; 0x0
        277668:	e5840010 	str	r0, [r4, #16]
        27766c:	e5840014 	str	r0, [r4, #20]	; fField20
        277670:	e1a00004 	mov	r0, r4
        277674:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        277678:	0001d190 	muleq	r1, r0, r1
    */
}

/**
 * Symbol: TWriteElement::__dt(void)
 * Address: 0027767c
 */
TWriteElement::~TWriteElement(void) {
    /*
        27767c:	e1a0c00d 	mov	ip, sp
        277680:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        277684:	e24cb004 	sub	fp, ip, #4	; 0x4
        277688:	e1a04000 	mov	r4, r0
        27768c:	e1a05001 	mov	r5, r1
        277690:	e59f0034 	ldr	r0, [pc, #34]	; 2776cc <TWriteElement::__dt(void)+0x50>
        277694:	e5840000 	str	r0, [r4]
        277698:	e5940014 	ldr	r0, [r4, #20]	; fField20
        27769c:	e3300000 	teq	r0, #0	; 0x0
        2776a0:	11a01004 	movne	r1, r4
        2776a4:	1b601e1d 	blne	1a7ef20 <TWriteChain::$Remove(TWriteElement *)>
        2776a8:	e1a00004 	mov	r0, r4
        2776ac:	e5941000 	ldr	r1, [r4]
        2776b0:	e1a0e00f 	mov	lr, pc
        2776b4:	e281f004 	add	pc, r1, #4	; 0x4
        2776b8:	e3150001 	tst	r5, #1	; 0x1
        2776bc:	11a00004 	movne	r0, r4
        2776c0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2776c4:	1a655805 	bne	1bcd6e0 <$__dl(void *)>
        2776c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2776cc:	0001d190 	muleq	r1, r0, r1
    */
}

/**
 * Symbol: TWriteElement::Reset(void)
 * Address: 00277804
 */
TWriteElement::Reset(void) {
    /*
        277804:	e3a01000 	mov	r1, #0	; 0x0
        277808:	e5c01004 	strb	r1, [r0, #4]	; fField4
        27780c:	e5801008 	str	r1, [r0, #8]	; fField8
        277810:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        277814:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWriteElement::Init(void *, unsigned long, unsigned char)
 * Address: 0027794c
 */
TWriteElement::Init(void *, unsigned long, unsigned char) {
    /*
        27794c:	e2800008 	add	r0, r0, #8	; 0x8
        277950:	e8800006 	stmia	r0, {r1, r2}
        277954:	e2400008 	sub	r0, r0, #8	; 0x8
        277958:	e5c03004 	strb	r3, [r0, #4]	; fField4
        27795c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWriteElement::Destroy(void)
 * Address: 00277960
 */
TWriteElement::Destroy(void) {
    /*
        277960:	e1a0c00d 	mov	ip, sp
        277964:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        277968:	e24cb004 	sub	fp, ip, #4	; 0x4
        27796c:	e1a04000 	mov	r4, r0
        277970:	e5d00004 	ldrb	r0, [r0, #4]	; fField4
        277974:	e3100001 	tst	r0, #1	; 0x1
        277978:	12000002 	andne	r0, r0, #2	; 0x2
        27797c:	13300000 	teqne	r0, #0	; 0x0
        277980:	15940008 	ldrne	r0, [r4, #8]	; fField8
        277984:	13300000 	teqne	r0, #0	; 0x0
        277988:	1b655754 	blne	1bcd6e0 <$__dl(void *)>
        27798c:	e1a00004 	mov	r0, r4
        277990:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        277994:	ea601d6c 	b	1a7ef4c <TWriteElement::$Reset(void)>
    */
}

/**
 * Symbol: TWriteElement::Munge(void)
 * Address: 00277998
 */
TWriteElement::Munge(void) {
    /*
        277998:	e3a00000 	mov	r0, #0	; 0x0
        27799c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWriteElement::StreamOut(unsigned long *, unsigned char *, unsigned long)
 * Address: 002779a0
 */
TWriteElement::StreamOut(unsigned long *, unsigned char *, unsigned long) {
    /*
        2779a0:	e1a0c00d 	mov	ip, sp
        2779a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2779a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2779ac:	e1a04000 	mov	r4, r0
        2779b0:	e1a05001 	mov	r5, r1
        2779b4:	e1a01002 	mov	r1, r2
        2779b8:	e3a06000 	mov	r6, #0	; 0x0
        2779bc:	e5856000 	str	r6, [r5]
        2779c0:	e590200c 	ldr	r2, [r0, #12]	; fField12
        2779c4:	e1520003 	cmp	r2, r3
        2779c8:	83a00e12 	movhi	r0, #288	; 0x120
        2779cc:	82400a03 	subhi	r0, r0, #12288	; 0x3000
        2779d0:	891ba870 	ldmhidb	fp, {r4, r5, r6, fp, sp, pc}
        2779d4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2779d8:	eb659d5d 	bl	1bdef54 <$BlockMove>
        2779dc:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        2779e0:	e5850000 	str	r0, [r5]
        2779e4:	e1a00006 	mov	r0, r6
        2779e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

