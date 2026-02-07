#include "include/TMathOpView.h"

/**
 * Symbol: TMathOpView::Constructor(RefVar const &, TView *)
 * Address: 0011bb74
 */
TMathOpView::Constructor(RefVar const &, TView *) {
    /*
        11bb74:	e1a0c00d 	mov	ip, sp
        11bb78:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11bb7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11bb80:	e1a04000 	mov	r4, r0
        11bb84:	eb6ab653 	bl	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
        11bb88:	e24dd004 	sub	sp, sp, #4	; 0x4
        11bb8c:	e5940024 	ldr	r0, [r4, #36]	; fField36
        11bb90:	e5900000 	ldr	r0, [r0]
        11bb94:	eb6a996c 	bl	1bc214c <$AllocateRefHandle(long)>
        11bb98:	e58d0000 	str	r0, [sp]
        11bb9c:	e59f102c 	ldr	r1, [pc, #2c]	; 11bbd0 <TMathOpView::Constructor(RefVar const &, TView *)+0x5c>
        11bba0:	e1a0000d 	mov	r0, sp
        11bba4:	e3a03000 	mov	r3, #0	; 0x0
        11bba8:	e3a02000 	mov	r2, #0	; 0x0
        11bbac:	eb6aa1b0 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        11bbb0:	e3100003 	tst	r0, #3	; 0x3
        11bbb4:	01a00140 	moveq	r0, r0, asr #2
        11bbb8:	0a000000 	beq	11bbc0 <TMathOpView::Constructor(RefVar const &, TView *)+0x4c>
        11bbbc:	eb6a9956 	bl	1bc211c <$_RINTError(long)>
        11bbc0:	e5a40030 	str	r0, [r4, #48]!	; fField48
        11bbc4:	e59d0000 	ldr	r0, [sp]
        11bbc8:	eb6a9d7b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        11bbcc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11bbd0:	006837d8 	ldreqd	r3, [r8], -#120
    */
}

/**
 * Symbol: TMathOpView::PreDraw(TRect &)
 * Address: 0011bbd4
 */
TMathOpView::PreDraw(TRect &) {
    /*
        11bbd4:	ea6abe75 	b	1bcb5b0 <TView::$PreDraw(TRect &)>
    */
}

/**
 * Symbol: TMathOpView::RealDoCommand(RefVar const &)
 * Address: 0011bbd8
 */
TMathOpView::RealDoCommand(RefVar const &) {
    /*
        11bbd8:	ea660ce3 	b	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
    */
}

/**
 * Symbol: TMathOpView::RealDraw(TRect &)
 * Address: 0011bbdc
 */
TMathOpView::RealDraw(TRect &) {
    /*
        11bbdc:	e1a0c00d 	mov	ip, sp
        11bbe0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11bbe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11bbe8:	e1a04000 	mov	r4, r0
        11bbec:	e24dd008 	sub	sp, sp, #8	; 0x8
        11bbf0:	e2800010 	add	r0, r0, #16	; 0x10
        11bbf4:	e8905000 	ldmia	r0, {ip, lr}
        11bbf8:	e88d5000 	stmia	sp, {ip, lr}
        11bbfc:	eb68db48 	bl	1b52924 <$PenNormal(void)>
        11bc00:	e59d0006 	ldr	r0, [sp, #6]
        11bc04:	e2400001 	sub	r0, r0, #1	; 0x1
        11bc08:	e5cd0005 	strb	r0, [sp, #5]
        11bc0c:	e1a00440 	mov	r0, r0, asr #8
        11bc10:	e5cd0004 	strb	r0, [sp, #4]
        11bc14:	e59d0004 	ldr	r0, [sp, #4]
        11bc18:	e2400001 	sub	r0, r0, #1	; 0x1
        11bc1c:	e5cd0007 	strb	r0, [sp, #7]
        11bc20:	e1a00440 	mov	r0, r0, asr #8
        11bc24:	e5cd0006 	strb	r0, [sp, #6]
        11bc28:	e24dd004 	sub	sp, sp, #4	; 0x4
        11bc2c:	e28d1004 	add	r1, sp, #4	; 0x4
        11bc30:	e1a0000d 	mov	r0, sp
        11bc34:	eb01ef12 	bl	197884 <TRect::MidPoint( const(void))>
        11bc38:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        11bc3c:	e3500004 	cmp	r0, #4	; 0x4
        11bc40:	908ff100 	addls	pc, pc, r0, lsl #2
        11bc44:	ea00002c 	b	11bcfc <TMathOpView::RealDraw(TRect &)+0x120>
        11bc48:	ea000003 	b	11bc5c <TMathOpView::RealDraw(TRect &)+0x80>
        11bc4c:	ea00000c 	b	11bc84 <TMathOpView::RealDraw(TRect &)+0xa8>
        11bc50:	ea000015 	b	11bcac <TMathOpView::RealDraw(TRect &)+0xd0>
        11bc54:	ea00001e 	b	11bcd4 <TMathOpView::RealDraw(TRect &)+0xf8>
        11bc58:	ea000027 	b	11bcfc <TMathOpView::RealDraw(TRect &)+0x120>
        11bc5c:	e59d0002 	ldr	r0, [sp, #2]
        11bc60:	e1a00840 	mov	r0, r0, asr #16
        11bc64:	e59d1004 	ldr	r1, [sp, #4]
        11bc68:	e1a01841 	mov	r1, r1, asr #16
        11bc6c:	eb68d713 	bl	1b518c0 <$MoveTo__FlT1>
        11bc70:	e59d1008 	ldr	r1, [sp, #8]
        11bc74:	e1a01841 	mov	r1, r1, asr #16
        11bc78:	e59d0002 	ldr	r0, [sp, #2]
        11bc7c:	e1a00840 	mov	r0, r0, asr #16
        11bc80:	eb68d2fd 	bl	1b5087c <$LineTo__FlT1>
        11bc84:	e59d0006 	ldr	r0, [sp, #6]
        11bc88:	e1a00840 	mov	r0, r0, asr #16
        11bc8c:	e59d1000 	ldr	r1, [sp]
        11bc90:	e1a01841 	mov	r1, r1, asr #16
        11bc94:	eb68d709 	bl	1b518c0 <$MoveTo__FlT1>
        11bc98:	e59d000a 	ldr	r0, [sp, #10]
        11bc9c:	e1a00840 	mov	r0, r0, asr #16
        11bca0:	e59d1000 	ldr	r1, [sp]
        11bca4:	e1a01841 	mov	r1, r1, asr #16
        11bca8:	ea000012 	b	11bcf8 <TMathOpView::RealDraw(TRect &)+0x11c>
        11bcac:	e59d0006 	ldr	r0, [sp, #6]
        11bcb0:	e1a00840 	mov	r0, r0, asr #16
        11bcb4:	e59d1004 	ldr	r1, [sp, #4]
        11bcb8:	e1a01841 	mov	r1, r1, asr #16
        11bcbc:	eb68d6ff 	bl	1b518c0 <$MoveTo__FlT1>
        11bcc0:	e59d1008 	ldr	r1, [sp, #8]
        11bcc4:	e1a01841 	mov	r1, r1, asr #16
        11bcc8:	e59d000a 	ldr	r0, [sp, #10]
        11bccc:	e1a00840 	mov	r0, r0, asr #16
        11bcd0:	eb68d2e9 	bl	1b5087c <$LineTo__FlT1>
        11bcd4:	e59d000a 	ldr	r0, [sp, #10]
        11bcd8:	e1a00840 	mov	r0, r0, asr #16
        11bcdc:	e59d1004 	ldr	r1, [sp, #4]
        11bce0:	e1a01841 	mov	r1, r1, asr #16
        11bce4:	eb68d6f5 	bl	1b518c0 <$MoveTo__FlT1>
        11bce8:	e59d1008 	ldr	r1, [sp, #8]
        11bcec:	e1a01841 	mov	r1, r1, asr #16
        11bcf0:	e59d0006 	ldr	r0, [sp, #6]
        11bcf4:	e1a00840 	mov	r0, r0, asr #16
        11bcf8:	eb68d2df 	bl	1b5087c <$LineTo__FlT1>
        11bcfc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMathOpView::ClassID( const(void))
 * Address: 0011c12c
 */
TMathOpView::ClassID( const(void)) {
    /*
        11c12c:	e3a00055 	mov	r0, #85	; 0x55
        11c130:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMathOpView::DerivedFrom( const(long))
 * Address: 0011c134
 */
TMathOpView::DerivedFrom( const(long)) {
    /*
        11c134:	e1a0c00d 	mov	ip, sp
        11c138:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11c13c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11c140:	e3310055 	teq	r1, #85	; 0x55
        11c144:	0a000002 	beq	11c154 <TMathOpView::DerivedFrom( const(long))+0x20>
        11c148:	ebfe1b9e 	bl	a2fc8 <TDataView::DerivedFrom( const(long))>
        11c14c:	e3300000 	teq	r0, #0	; 0x0
        11c150:	0a000001 	beq	11c15c <TMathOpView::DerivedFrom( const(long))+0x28>
        11c154:	e3a00001 	mov	r0, #1	; 0x1
        11c158:	ea000000 	b	11c160 <TMathOpView::DerivedFrom( const(long))+0x2c>
        11c15c:	e3a00000 	mov	r0, #0	; 0x0
        11c160:	e20000ff 	and	r0, r0, #255	; 0xff
        11c164:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

