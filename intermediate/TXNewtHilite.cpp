#include "include/TXNewtHilite.h"

/**
 * Symbol: TXNewtHilite::__ct(TView *)
 * Address: 0024d9f4
 */
TXNewtHilite::TXNewtHilite(TView *) {
    /*
        24d9f4:	e1a0c00d 	mov	ip, sp
        24d9f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24d9fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        24da00:	e1b04000 	movs	r4, r0
        24da04:	e1a05001 	mov	r5, r1
        24da08:	1a000003 	bne	24da1c <TXNewtHilite::__ct(TView *)+0x28>
        24da0c:	e3a00050 	mov	r0, #80	; 0x50
        24da10:	eb660348 	bl	1bce738 <$__nw(unsigned int)>
        24da14:	e1b04000 	movs	r4, r0
        24da18:	0a000006 	beq	24da38 <TXNewtHilite::__ct(TView *)+0x44>
        24da1c:	e1a00004 	mov	r0, r4
        24da20:	eb650b81 	bl	1b9082c <TXHilite::$__ct(void)>
        24da24:	e59f0014 	ldr	r0, [pc, #14]	; 24da40 <TXNewtHilite::__ct(TView *)+0x4c>
        24da28:	e5840000 	str	r0, [r4]
        24da2c:	e3a00000 	mov	r0, #0	; 0x0
        24da30:	e5845048 	str	r5, [r4, #72]	; fField72
        24da34:	e5c4004c 	strb	r0, [r4, #76]	; fField76
        24da38:	e1a00004 	mov	r0, r4
        24da3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24da40:	0001c7b8 	streqh	ip, [r1], -r8
    */
}

/**
 * Symbol: TXNewtHilite::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char)
 * Address: 0024da44
 */
TXNewtHilite::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char) {
    /*
        24da44:	e1a0c00d 	mov	ip, sp
        24da48:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24da4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        24da50:	e1a05000 	mov	r5, r0
        24da54:	e1a04001 	mov	r4, r1
        24da58:	e20270ff 	and	r7, r2, #255	; 0xff
        24da5c:	e20380ff 	and	r8, r3, #255	; 0xff
        24da60:	e59f607c 	ldr	r6, [pc, #7c]	; 24dae4 <TXNewtHilite::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char)+0xa0>
        24da64:	e5960000 	ldr	r0, [r6]
        24da68:	eb620f8d 	bl	1ad18a4 <TRootView::$HideCaret(void)>
        24da6c:	e3380000 	teq	r8, #0	; 0x0
        24da70:	0a000011 	beq	24dabc <TXNewtHilite::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char)+0x78>
        24da74:	e5960000 	ldr	r0, [r6]
        24da78:	e5902068 	ldr	r2, [r0, #104]
        24da7c:	e5951048 	ldr	r1, [r5, #72]	; fField72
        24da80:	e1320001 	teq	r2, r1
        24da84:	1a00000c 	bne	24dabc <TXNewtHilite::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char)+0x78>
        24da88:	e5942008 	ldr	r2, [r4, #8]
        24da8c:	e5943000 	ldr	r3, [r4]
        24da90:	e0428003 	sub	r8, r2, r3
        24da94:	e3580000 	cmp	r8, #0	; 0x0
        24da98:	cb61519f 	blgt	1aa211c <TRootView::$SetHilitedView(TView *)>
        24da9c:	e3a03000 	mov	r3, #0	; 0x0
        24daa0:	e92d0008 	stmdb	sp!, {r3}
        24daa4:	e5942000 	ldr	r2, [r4]
        24daa8:	e1a03008 	mov	r3, r8
        24daac:	e5951048 	ldr	r1, [r5, #72]	; fField72
        24dab0:	e5960000 	ldr	r0, [r6]
        24dab4:	eb6217ca 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
        24dab8:	e28dd004 	add	sp, sp, #4	; 0x4
        24dabc:	e1a02007 	mov	r2, r7
        24dac0:	e1a01004 	mov	r1, r4
        24dac4:	e1a00005 	mov	r0, r5
        24dac8:	e3a03001 	mov	r3, #1	; 0x1
        24dacc:	eb650f74 	bl	1b918a4 <TXHilite::$SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char)>
        24dad0:	e1a04000 	mov	r4, r0
        24dad4:	e5960000 	ldr	r0, [r6]
        24dad8:	eb6155ae 	bl	1aa3198 <TRootView::$ShowCaret(void)>
        24dadc:	e1a00004 	mov	r0, r4
        24dae0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        24dae4:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TXNewtHilite::CalcCountClicks(Point, long, long)
 * Address: 0024dae8
 */
TXNewtHilite::CalcCountClicks(Point, long, long) {
    /*
        24dae8:	e1a0c00d 	mov	ip, sp
        24daec:	e92dd80f 	stmdb	sp!, {r0, r1, r2, r3, fp, ip, lr, pc}
        24daf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        24daf4:	e5d0004c 	ldrb	r0, [r0, #76]	; fField76
        24daf8:	e3300000 	teq	r0, #0	; 0x0
        24dafc:	03a00001 	moveq	r0, #1	; 0x1
        24db00:	13a00002 	movne	r0, #2	; 0x2
        24db04:	e20000ff 	and	r0, r0, #255	; 0xff
        24db08:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

