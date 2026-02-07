#include "include/TMathLineView.h"

/**
 * Symbol: TMathLineView::ClassID( const(void))
 * Address: 0011bd00
 */
TMathLineView::ClassID( const(void)) {
    /*
        11bd00:	e3a00056 	mov	r0, #86	; 0x56
        11bd04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMathLineView::DerivedFrom( const(long))
 * Address: 0011bd08
 */
TMathLineView::DerivedFrom( const(long)) {
    /*
        11bd08:	e1a0c00d 	mov	ip, sp
        11bd0c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11bd10:	e24cb004 	sub	fp, ip, #4	; 0x4
        11bd14:	e3310056 	teq	r1, #86	; 0x56
        11bd18:	0a000002 	beq	11bd28 <TMathLineView::DerivedFrom( const(long))+0x20>
        11bd1c:	ebfe1ca9 	bl	a2fc8 <TDataView::DerivedFrom( const(long))>
        11bd20:	e3300000 	teq	r0, #0	; 0x0
        11bd24:	0a000001 	beq	11bd30 <TMathLineView::DerivedFrom( const(long))+0x28>
        11bd28:	e3a00001 	mov	r0, #1	; 0x1
        11bd2c:	ea000000 	b	11bd34 <TMathLineView::DerivedFrom( const(long))+0x2c>
        11bd30:	e3a00000 	mov	r0, #0	; 0x0
        11bd34:	e20000ff 	and	r0, r0, #255	; 0xff
        11bd38:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TMathLineView::Constructor(RefVar const &, TView *)
 * Address: 0011bd3c
 */
TMathLineView::Constructor(RefVar const &, TView *) {
    /*
        11bd3c:	e1a0c00d 	mov	ip, sp
        11bd40:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11bd44:	e24cb004 	sub	fp, ip, #4	; 0x4
        11bd48:	e1a04000 	mov	r4, r0
        11bd4c:	eb6ab5e1 	bl	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
        11bd50:	e24dd008 	sub	sp, sp, #8	; 0x8
        11bd54:	e5940024 	ldr	r0, [r4, #36]	; fField36
        11bd58:	e5900000 	ldr	r0, [r0]
        11bd5c:	eb6a98fa 	bl	1bc214c <$AllocateRefHandle(long)>
        11bd60:	e58d0004 	str	r0, [sp, #4]
        11bd64:	e59f1034 	ldr	r1, [pc, #34]	; 11bda0 <TMathLineView::Constructor(RefVar const &, TView *)+0x64>
        11bd68:	e28d0004 	add	r0, sp, #4	; 0x4
        11bd6c:	e3a03000 	mov	r3, #0	; 0x0
        11bd70:	e3a02000 	mov	r2, #0	; 0x0
        11bd74:	eb6aa13e 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        11bd78:	eb6a98f3 	bl	1bc214c <$AllocateRefHandle(long)>
        11bd7c:	e58d0000 	str	r0, [sp]
        11bd80:	e1a0000d 	mov	r0, sp
        11bd84:	e2841030 	add	r1, r4, #48	; 0x30
        11bd88:	eb65e33a 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        11bd8c:	e59d0000 	ldr	r0, [sp]
        11bd90:	eb6a9d09 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        11bd94:	e59d0004 	ldr	r0, [sp, #4]
        11bd98:	eb6a9d07 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        11bd9c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11bda0:	006837d0 	ldreqd	r3, [r8], -#112
    */
}

/**
 * Symbol: TMathLineView::PreDraw(TRect &)
 * Address: 0011bda4
 */
TMathLineView::PreDraw(TRect &) {
    /*
        11bda4:	ea6abe01 	b	1bcb5b0 <TView::$PreDraw(TRect &)>
    */
}

/**
 * Symbol: TMathLineView::RealDoCommand(RefVar const &)
 * Address: 0011bda8
 */
TMathLineView::RealDoCommand(RefVar const &) {
    /*
        11bda8:	ea660c6f 	b	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
    */
}

/**
 * Symbol: TMathLineView::RealDraw(TRect &)
 * Address: 0011bdac
 */
TMathLineView::RealDraw(TRect &) {
    /*
        11bdac:	e1a0c00d 	mov	ip, sp
        11bdb0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11bdb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11bdb8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        11bdbc:	e2801030 	add	r1, r0, #48	; 0x30
        11bdc0:	e4912004 	ldr	r2, [r1], #4
        11bdc4:	e58d2008 	str	r2, [sp, #8]
        11bdc8:	e5911000 	ldr	r1, [r1]
        11bdcc:	e58d1004 	str	r1, [sp, #4]
        11bdd0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        11bdd4:	e58d0000 	str	r0, [sp]
        11bdd8:	e59d1006 	ldr	r1, [sp, #6]
        11bddc:	e59d000a 	ldr	r0, [sp, #10]
        11bde0:	e0410000 	sub	r0, r1, r0
        11bde4:	e5cd0005 	strb	r0, [sp, #5]
        11bde8:	e1a00440 	mov	r0, r0, asr #8
        11bdec:	e5cd0004 	strb	r0, [sp, #4]
        11bdf0:	e59d1004 	ldr	r1, [sp, #4]
        11bdf4:	e59d0008 	ldr	r0, [sp, #8]
        11bdf8:	e0410000 	sub	r0, r1, r0
        11bdfc:	e5cd0007 	strb	r0, [sp, #7]
        11be00:	e1a00440 	mov	r0, r0, asr #8
        11be04:	e5cd0006 	strb	r0, [sp, #6]
        11be08:	e3a00000 	mov	r0, #0	; 0x0
        11be0c:	e5cd0009 	strb	r0, [sp, #9]
        11be10:	e5cd0008 	strb	r0, [sp, #8]
        11be14:	e5cd000b 	strb	r0, [sp, #11]
        11be18:	e5cd000a 	strb	r0, [sp, #10]
        11be1c:	e59d100a 	ldr	r1, [sp, #10]
        11be20:	e59d0002 	ldr	r0, [sp, #2]
        11be24:	e0810000 	add	r0, r1, r0
        11be28:	e5cd0009 	strb	r0, [sp, #9]
        11be2c:	e1a00440 	mov	r0, r0, asr #8
        11be30:	e5cd0008 	strb	r0, [sp, #8]
        11be34:	e59d1008 	ldr	r1, [sp, #8]
        11be38:	e59d0000 	ldr	r0, [sp]
        11be3c:	e0810000 	add	r0, r1, r0
        11be40:	e5cd000b 	strb	r0, [sp, #11]
        11be44:	e1a00440 	mov	r0, r0, asr #8
        11be48:	e5cd000a 	strb	r0, [sp, #10]
        11be4c:	e59d1006 	ldr	r1, [sp, #6]
        11be50:	e59d0002 	ldr	r0, [sp, #2]
        11be54:	e0810000 	add	r0, r1, r0
        11be58:	e5cd0005 	strb	r0, [sp, #5]
        11be5c:	e1a00440 	mov	r0, r0, asr #8
        11be60:	e5cd0004 	strb	r0, [sp, #4]
        11be64:	e59d1004 	ldr	r1, [sp, #4]
        11be68:	e59d0000 	ldr	r0, [sp]
        11be6c:	e0810000 	add	r0, r1, r0
        11be70:	e5cd0007 	strb	r0, [sp, #7]
        11be74:	e1a00440 	mov	r0, r0, asr #8
        11be78:	e5cd0006 	strb	r0, [sp, #6]
        11be7c:	eb68daa8 	bl	1b52924 <$PenNormal(void)>
        11be80:	e59d000a 	ldr	r0, [sp, #10]
        11be84:	e1a00840 	mov	r0, r0, asr #16
        11be88:	e59d1008 	ldr	r1, [sp, #8]
        11be8c:	e1a01841 	mov	r1, r1, asr #16
        11be90:	eb68d68a 	bl	1b518c0 <$MoveTo__FlT1>
        11be94:	e59d0006 	ldr	r0, [sp, #6]
        11be98:	e1a00840 	mov	r0, r0, asr #16
        11be9c:	e59d1004 	ldr	r1, [sp, #4]
        11bea0:	e1a01841 	mov	r1, r1, asr #16
        11bea4:	eb68d274 	bl	1b5087c <$LineTo__FlT1>
        11bea8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

