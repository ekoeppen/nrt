#include "include/TView.h"

/**
 * Symbol: TView::DoCommand(TCommand *)
 * Address: 00034484
 */
TView::DoCommand(TCommand *) {
    /*
         34484:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::RealDoCommand(TCommand *)
 * Address: 00034488
 */
TView::RealDoCommand(TCommand *) {
    /*
         34488:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::Drop(RefVar const &, RefVar const &, TPoint *)
 * Address: 0009cbc4
 */
TView::Drop(RefVar const &, RefVar const &, TPoint *) {
    /*
         9cbc4:	e1a0c00d 	mov	ip, sp
         9cbc8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         9cbcc:	e24cb004 	sub	fp, ip, #4	; 0x4
         9cbd0:	e1a06000 	mov	r6, r0
         9cbd4:	e1a07001 	mov	r7, r1
         9cbd8:	e1a05002 	mov	r5, r2
         9cbdc:	e1a04003 	mov	r4, r3
         9cbe0:	e24dd004 	sub	sp, sp, #4	; 0x4
         9cbe4:	e3a00003 	mov	r0, #3	; 0x3
         9cbe8:	eb67fc6b 	bl	1a9bd9c <$MakeArray(long)>
         9cbec:	eb6c9556 	bl	1bc214c <$AllocateRefHandle(long)>
         9cbf0:	e58d0000 	str	r0, [sp]
         9cbf4:	e5970000 	ldr	r0, [r7]
         9cbf8:	e5902000 	ldr	r2, [r0]
         9cbfc:	e59d0000 	ldr	r0, [sp]
         9cc00:	e5900000 	ldr	r0, [r0]
         9cc04:	e3a01000 	mov	r1, #0	; 0x0
         9cc08:	eb6ca5d2 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9cc0c:	e5950000 	ldr	r0, [r5]
         9cc10:	e5902000 	ldr	r2, [r0]
         9cc14:	e59d0000 	ldr	r0, [sp]
         9cc18:	e5900000 	ldr	r0, [r0]
         9cc1c:	e3a01001 	mov	r1, #1	; 0x1
         9cc20:	eb6ca5cc 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9cc24:	e1a00004 	mov	r0, r4
         9cc28:	eb000e5a 	bl	a0598 <TClipboard::DrawDragData(TRect const &)+0x144>
         9cc2c:	eb6c9546 	bl	1bc214c <$AllocateRefHandle(long)>
         9cc30:	e1a04000 	mov	r4, r0
         9cc34:	e3a01002 	mov	r1, #2	; 0x2
         9cc38:	e5902000 	ldr	r2, [r0]
         9cc3c:	e59d0000 	ldr	r0, [sp]
         9cc40:	e5900000 	ldr	r0, [r0]
         9cc44:	eb6ca5c3 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9cc48:	e1a00004 	mov	r0, r4
         9cc4c:	eb6c995a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9cc50:	e3a03000 	mov	r3, #0	; 0x0
         9cc54:	e92d0008 	stmdb	sp!, {r3}
         9cc58:	e28d2004 	add	r2, sp, #4	; 0x4
         9cc5c:	e59f1028 	ldr	r1, [pc, #28]	; 9cc8c <TView::Drop(RefVar const &, RefVar const &, TPoint *)+0xc8>	; fField28
         9cc60:	e1a00006 	mov	r0, r6
         9cc64:	e3a03001 	mov	r3, #1	; 0x1
         9cc68:	eb6cba5c 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         9cc6c:	e28dd004 	add	sp, sp, #4	; 0x4
         9cc70:	e2500002 	subs	r0, r0, #2	; 0x2
         9cc74:	13a00001 	movne	r0, #1	; 0x1
         9cc78:	e20040ff 	and	r4, r0, #255	; 0xff
         9cc7c:	e59d0000 	ldr	r0, [sp]
         9cc80:	eb6c994d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9cc84:	e1a00004 	mov	r0, r4
         9cc88:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         9cc8c:	00684f98 	streqb	r4, [r8], -#248
    */
}

/**
 * Symbol: TView::DropRemove(RefVar const &)
 * Address: 0009cc90
 */
TView::DropRemove(RefVar const &) {
    /*
         9cc90:	e1a0c00d 	mov	ip, sp
         9cc94:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9cc98:	e24cb004 	sub	fp, ip, #4	; 0x4
         9cc9c:	e1a05000 	mov	r5, r0
         9cca0:	e1a04001 	mov	r4, r1
         9cca4:	e24dd004 	sub	sp, sp, #4	; 0x4
         9cca8:	e3a00001 	mov	r0, #1	; 0x1
         9ccac:	eb67fc3a 	bl	1a9bd9c <$MakeArray(long)>
         9ccb0:	eb6c9525 	bl	1bc214c <$AllocateRefHandle(long)>
         9ccb4:	e58d0000 	str	r0, [sp]
         9ccb8:	e5940000 	ldr	r0, [r4]
         9ccbc:	e5902000 	ldr	r2, [r0]
         9ccc0:	e59d0000 	ldr	r0, [sp]
         9ccc4:	e5900000 	ldr	r0, [r0]
         9ccc8:	e3a01000 	mov	r1, #0	; 0x0
         9cccc:	eb6ca5a1 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9ccd0:	e3a03000 	mov	r3, #0	; 0x0
         9ccd4:	e92d0008 	stmdb	sp!, {r3}
         9ccd8:	e28d2004 	add	r2, sp, #4	; 0x4
         9ccdc:	e59f1028 	ldr	r1, [pc, #28]	; 9cd0c <TView::DropRemove(RefVar const &)+0x7c>	; fField28
         9cce0:	e1a00005 	mov	r0, r5
         9cce4:	e3a03001 	mov	r3, #1	; 0x1
         9cce8:	eb6cba3c 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         9ccec:	e28dd004 	add	sp, sp, #4	; 0x4
         9ccf0:	e2500002 	subs	r0, r0, #2	; 0x2
         9ccf4:	13a00001 	movne	r0, #1	; 0x1
         9ccf8:	e20040ff 	and	r4, r0, #255	; 0xff
         9ccfc:	e59d0000 	ldr	r0, [sp]
         9cd00:	eb6c992d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9cd04:	e1a00004 	mov	r0, r4
         9cd08:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         9cd0c:	00684f90 	streqb	r4, [r8], -#240
    */
}

/**
 * Symbol: TView::DropApprove(TView *)
 * Address: 0009cd10
 */
TView::DropApprove(TView *) {
    /*
         9cd10:	e1a0c00d 	mov	ip, sp
         9cd14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9cd18:	e24cb004 	sub	fp, ip, #4	; 0x4
         9cd1c:	e1a05000 	mov	r5, r0
         9cd20:	e1a04001 	mov	r4, r1
         9cd24:	e24dd008 	sub	sp, sp, #8	; 0x8
         9cd28:	e3a00001 	mov	r0, #1	; 0x1
         9cd2c:	eb67fc1a 	bl	1a9bd9c <$MakeArray(long)>
         9cd30:	eb6c9505 	bl	1bc214c <$AllocateRefHandle(long)>
         9cd34:	e3a01000 	mov	r1, #0	; 0x0
         9cd38:	e3340000 	teq	r4, #0	; 0x0
         9cd3c:	e58d0000 	str	r0, [sp]
         9cd40:	0a000004 	beq	9cd58 <TView::DropApprove(TView *)+0x48>
         9cd44:	e5940024 	ldr	r0, [r4, #36]	; fField36
         9cd48:	e5902000 	ldr	r2, [r0]
         9cd4c:	e59d0000 	ldr	r0, [sp]
         9cd50:	e5900000 	ldr	r0, [r0]
         9cd54:	eb6ca57f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9cd58:	e28d3004 	add	r3, sp, #4	; 0x4
         9cd5c:	e92d0008 	stmdb	sp!, {r3}
         9cd60:	e28d2004 	add	r2, sp, #4	; 0x4
         9cd64:	e59f1044 	ldr	r1, [pc, #44]	; 9cdb0 <TView::DropApprove(TView *)+0xa0>	; fField44
         9cd68:	e1a00005 	mov	r0, r5
         9cd6c:	e3a03001 	mov	r3, #1	; 0x1
         9cd70:	eb6cba1a 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         9cd74:	e28dd004 	add	sp, sp, #4	; 0x4
         9cd78:	eb6c94f3 	bl	1bc214c <$AllocateRefHandle(long)>
         9cd7c:	e5dd1004 	ldrb	r1, [sp, #4]	; fField4
         9cd80:	e3310000 	teq	r1, #0	; 0x0
         9cd84:	03a0101a 	moveq	r1, #26	; 0x1a
         9cd88:	05801000 	streq	r1, [r0]
         9cd8c:	e5901000 	ldr	r1, [r0]
         9cd90:	e2511002 	subs	r1, r1, #2	; 0x2
         9cd94:	13a01001 	movne	r1, #1	; 0x1
         9cd98:	e20140ff 	and	r4, r1, #255	; 0xff
         9cd9c:	eb6c9906 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9cda0:	e59d0000 	ldr	r0, [sp]
         9cda4:	eb6c9904 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9cda8:	e1a00004 	mov	r0, r4
         9cdac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         9cdb0:	00684f70 	rsbeq	r4, r8, r0, ror pc
    */
}

/**
 * Symbol: TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)
 * Address: 0009cdb4
 */
TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char) {
    /*
         9cdb4:	e1a0c00d 	mov	ip, sp
         9cdb8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9cdbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         9cdc0:	e1a05000 	mov	r5, r0
         9cdc4:	e1a06001 	mov	r6, r1
         9cdc8:	e1a04002 	mov	r4, r2
         9cdcc:	e28b1008 	add	r1, fp, #8	; 0x8
         9cdd0:	e8910003 	ldmia	r1, {r0, r1}
         9cdd4:	e20190ff 	and	r9, r1, #255	; 0xff
         9cdd8:	e59ba004 	ldr	sl, [fp, #4]	; fField4
         9cddc:	e24dd00c 	sub	sp, sp, #12	; 0xc
         9cde0:	e5902002 	ldr	r2, [r0, #2]	; fField2
         9cde4:	e1a02822 	mov	r2, r2, lsr #16
         9cde8:	e5931002 	ldr	r1, [r3, #2]	; fField2
         9cdec:	e1a01821 	mov	r1, r1, lsr #16
         9cdf0:	e0421001 	sub	r1, r2, r1
         9cdf4:	e1a01801 	mov	r1, r1, lsl #16
         9cdf8:	e1a01841 	mov	r1, r1, asr #16
         9cdfc:	e5900000 	ldr	r0, [r0]
         9ce00:	e1a00820 	mov	r0, r0, lsr #16
         9ce04:	e5932000 	ldr	r2, [r3]
         9ce08:	e1a02822 	mov	r2, r2, lsr #16
         9ce0c:	e0400002 	sub	r0, r0, r2
         9ce10:	e1a00800 	mov	r0, r0, lsl #16
         9ce14:	e1a00840 	mov	r0, r0, asr #16
         9ce18:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ce1c:	e5cd1003 	strb	r1, [sp, #3]
         9ce20:	e1a01441 	mov	r1, r1, asr #8
         9ce24:	e5cd1002 	strb	r1, [sp, #2]	; fField2
         9ce28:	e5cd0001 	strb	r0, [sp, #1]
         9ce2c:	e1a00440 	mov	r0, r0, asr #8
         9ce30:	e5cd0000 	strb	r0, [sp]
         9ce34:	e49d0004 	ldr	r0, [sp], #4	; fField4
         9ce38:	e58d0008 	str	r0, [sp, #8]	; fField8
         9ce3c:	e5960000 	ldr	r0, [r6]
         9ce40:	e5900000 	ldr	r0, [r0]
         9ce44:	eb6ca118 	bl	1bc52ac <$Length(long)>
         9ce48:	e58d0004 	str	r0, [sp, #4]	; fField4
         9ce4c:	e59a0000 	ldr	r0, [sl]
         9ce50:	e3a07000 	mov	r7, #0	; 0x0
         9ce54:	e58d0000 	str	r0, [sp]
         9ce58:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9ce5c:	e3500000 	cmp	r0, #0	; 0x0
         9ce60:	da0000ae 	ble	9d120 <TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0x36c>
         9ce64:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ce68:	e1a01007 	mov	r1, r7
         9ce6c:	e1a00006 	mov	r0, r6
         9ce70:	eb68ce71 	bl	1ad083c <TDragInfo::$GetItemDragRef( const(long))>
         9ce74:	eb6c94b4 	bl	1bc214c <$AllocateRefHandle(long)>
         9ce78:	e1350004 	teq	r5, r4
         9ce7c:	e58d0000 	str	r0, [sp]
         9ce80:	1a00000a 	bne	9ceb0 <TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0xfc>
         9ce84:	e1a03009 	mov	r3, r9
         9ce88:	e92d0008 	stmdb	sp!, {r3}
         9ce8c:	e1a0300a 	mov	r3, sl
         9ce90:	e28d2010 	add	r2, sp, #16	; 0x10
         9ce94:	e28d1004 	add	r1, sp, #4	; 0x4
         9ce98:	e1a00005 	mov	r0, r5
         9ce9c:	e595c000 	ldr	ip, [r5]
         9cea0:	e1a0e00f 	mov	lr, pc
         9cea4:	e28cf0e8 	add	pc, ip, #232	; 0xe8
         9cea8:	e28dd004 	add	sp, sp, #4	; 0x4
         9ceac:	ea000094 	b	9d104 <TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0x350>
         9ceb0:	e24dd008 	sub	sp, sp, #8	; 0x8
         9ceb4:	e1a0100a 	mov	r1, sl
         9ceb8:	e1a00004 	mov	r0, r4
         9cebc:	e5942000 	ldr	r2, [r4]
         9cec0:	e1a0e00f 	mov	lr, pc
         9cec4:	e282ff45 	add	pc, r2, #276	; 0x114
         9cec8:	eb6c949f 	bl	1bc214c <$AllocateRefHandle(long)>
         9cecc:	e58d0000 	str	r0, [sp]
         9ced0:	e1a0200d 	mov	r2, sp
         9ced4:	e1a01007 	mov	r1, r7
         9ced8:	e1a00006 	mov	r0, r6
         9cedc:	eb68ca3b 	bl	1acf7d0 <TDragInfo::$FindType( const(long, RefVar const &))>
         9cee0:	eb6c9499 	bl	1bc214c <$AllocateRefHandle(long)>
         9cee4:	e58d0004 	str	r0, [sp, #4]	; fField4
         9cee8:	e59d0000 	ldr	r0, [sp]
         9ceec:	eb6c98b2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9cef0:	e24dd004 	sub	sp, sp, #4	; 0x4
         9cef4:	e1a08005 	mov	r8, r5
         9cef8:	e28d200c 	add	r2, sp, #12	; 0xc
         9cefc:	e28d1008 	add	r1, sp, #8	; 0x8
         9cf00:	e1a00005 	mov	r0, r5
         9cf04:	e5953000 	ldr	r3, [r5]
         9cf08:	e1a0e00f 	mov	lr, pc
         9cf0c:	e283f0cc 	add	pc, r3, #204	; 0xcc
         9cf10:	eb6c948d 	bl	1bc214c <$AllocateRefHandle(long)>
         9cf14:	e58d0000 	str	r0, [sp]
         9cf18:	e5900000 	ldr	r0, [r0]
         9cf1c:	e3300002 	teq	r0, #2	; 0x2
         9cf20:	1a000016 	bne	9cf80 <TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0x1cc>
         9cf24:	e1a01007 	mov	r1, r7
         9cf28:	e1a00006 	mov	r0, r6
         9cf2c:	eb68fba1 	bl	1adbdb8 <TDragInfo::$GetItemView( const(long))>
         9cf30:	e1b08000 	movs	r8, r0
         9cf34:	0a000009 	beq	9cf60 <TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0x1ac>
         9cf38:	e28d200c 	add	r2, sp, #12	; 0xc
         9cf3c:	e28d1008 	add	r1, sp, #8	; 0x8
         9cf40:	e1a00008 	mov	r0, r8
         9cf44:	e5983000 	ldr	r3, [r8]
         9cf48:	e1a0e00f 	mov	lr, pc
         9cf4c:	e283f0cc 	add	pc, r3, #204	; 0xcc
         9cf50:	e59d1000 	ldr	r1, [sp]
         9cf54:	e5810000 	str	r0, [r1]
         9cf58:	e3300002 	teq	r0, #2	; 0x2
         9cf5c:	1a000007 	bne	9cf80 <TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0x1cc>
         9cf60:	e59d0000 	ldr	r0, [sp]
         9cf64:	eb6c9894 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9cf68:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         9cf6c:	eb6c9892 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9cf70:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         9cf74:	eb6c9890 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9cf78:	e28dd010 	add	sp, sp, #16	; 0x10
         9cf7c:	ea000063 	b	9d110 <TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0x35c>
         9cf80:	e1a0100d 	mov	r1, sp
         9cf84:	e28d0008 	add	r0, sp, #8	; 0x8
         9cf88:	eb68c1d1 	bl	1acd6d4 <$CheckViewBounds__FRC6RefVarT1>
         9cf8c:	e24dd010 	sub	sp, sp, #16	; 0x10
         9cf90:	e5980010 	ldr	r0, [r8, #16]	; fField16
         9cf94:	e58d0000 	str	r0, [sp]
         9cf98:	e59d0000 	ldr	r0, [sp]
         9cf9c:	e59d1028 	ldr	r1, [sp, #40]	; fField40
         9cfa0:	e0800001 	add	r0, r0, r1
         9cfa4:	e1a00800 	mov	r0, r0, lsl #16
         9cfa8:	e1a00840 	mov	r0, r0, asr #16
         9cfac:	e41d2004 	ldr	r2, [sp], -#4	; fField4
         9cfb0:	e1a02822 	mov	r2, r2, lsr #16
         9cfb4:	e59d102e 	ldr	r1, [sp, #46]
         9cfb8:	e0821001 	add	r1, r2, r1
         9cfbc:	e1a01801 	mov	r1, r1, lsl #16
         9cfc0:	e1a01841 	mov	r1, r1, asr #16
         9cfc4:	e5cd0003 	strb	r0, [sp, #3]
         9cfc8:	e1a00440 	mov	r0, r0, asr #8
         9cfcc:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         9cfd0:	e5cd1001 	strb	r1, [sp, #1]
         9cfd4:	e1a00441 	mov	r0, r1, asr #8
         9cfd8:	e5cd0000 	strb	r0, [sp]
         9cfdc:	e49d0004 	ldr	r0, [sp], #4	; fField4
         9cfe0:	e1a01004 	mov	r1, r4
         9cfe4:	e58d0004 	str	r0, [sp, #4]	; fField4
         9cfe8:	e28d0008 	add	r0, sp, #8	; 0x8
         9cfec:	eb072944 	bl	267504 <TView::ContentsOrigin(void)>
         9cff0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9cff4:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         9cff8:	e0400001 	sub	r0, r0, r1
         9cffc:	e1a00800 	mov	r0, r0, lsl #16
         9d000:	e1a00840 	mov	r0, r0, asr #16
         9d004:	e59d1006 	ldr	r1, [sp, #6]
         9d008:	e59d200a 	ldr	r2, [sp, #10]
         9d00c:	e0411002 	sub	r1, r1, r2
         9d010:	e1a01801 	mov	r1, r1, lsl #16
         9d014:	e1a01841 	mov	r1, r1, asr #16
         9d018:	e24dd004 	sub	sp, sp, #4	; 0x4
         9d01c:	e5cd0003 	strb	r0, [sp, #3]
         9d020:	e1a00440 	mov	r0, r0, asr #8
         9d024:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         9d028:	e5cd1001 	strb	r1, [sp, #1]
         9d02c:	e1a00441 	mov	r0, r1, asr #8
         9d030:	e5cd0000 	strb	r0, [sp]
         9d034:	e49d0004 	ldr	r0, [sp], #4	; fField4
         9d038:	e58d000c 	str	r0, [sp, #12]	; fField12
         9d03c:	e28d100c 	add	r1, sp, #12	; 0xc
         9d040:	e28d0010 	add	r0, sp, #16	; 0x10
         9d044:	ebfffe83 	bl	9ca58 <OffsetBoundsRef(RefVar const &, TPoint const &)>
         9d048:	e28dd010 	add	sp, sp, #16	; 0x10
         9d04c:	e28d3010 	add	r3, sp, #16	; 0x10
         9d050:	e1a0200d 	mov	r2, sp
         9d054:	e28d1008 	add	r1, sp, #8	; 0x8
         9d058:	e1a00004 	mov	r0, r4
         9d05c:	e594c000 	ldr	ip, [r4]
         9d060:	e1a0e00f 	mov	lr, pc
         9d064:	e28cf0e4 	add	pc, ip, #228	; 0xe4
         9d068:	e3300000 	teq	r0, #0	; 0x0
         9d06c:	0a00001e 	beq	9d0ec <TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0x338>
         9d070:	e3390000 	teq	r9, #0	; 0x0
         9d074:	05950008 	ldreq	r0, [r5, #8]	; fField8
         9d078:	02000082 	andeq	r0, r0, #130	; 0x82
         9d07c:	03300000 	teqeq	r0, #0	; 0x0
         9d080:	1a000004 	bne	9d098 <TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0x2e4>
         9d084:	e28d100c 	add	r1, sp, #12	; 0xc
         9d088:	e1a00005 	mov	r0, r5
         9d08c:	e5952000 	ldr	r2, [r5]
         9d090:	e1a0e00f 	mov	lr, pc
         9d094:	e282f0ec 	add	pc, r2, #236	; 0xec
         9d098:	e24dd008 	sub	sp, sp, #8	; 0x8
         9d09c:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
         9d0a0:	e2411501 	sub	r1, r1, #4194304	; 0x400000
         9d0a4:	e5cd1005 	strb	r1, [sp, #5]
         9d0a8:	e3e0007f 	mvn	r0, #127	; 0x7f
         9d0ac:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         9d0b0:	e5cd1001 	strb	r1, [sp, #1]
         9d0b4:	e5cd0000 	strb	r0, [sp]
         9d0b8:	e1a0100d 	mov	r1, sp
         9d0bc:	e1a00004 	mov	r0, r4
         9d0c0:	e5942000 	ldr	r2, [r4]
         9d0c4:	e1a0e00f 	mov	lr, pc
         9d0c8:	e282f0b0 	add	pc, r2, #176	; 0xb0
         9d0cc:	e3100002 	tst	r0, #2	; 0x2
         9d0d0:	0a000004 	beq	9d0e8 <TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0x334>
         9d0d4:	e1a00004 	mov	r0, r4
         9d0d8:	e3a01000 	mov	r1, #0	; 0x0
         9d0dc:	e5942000 	ldr	r2, [r4]
         9d0e0:	e1a0e00f 	mov	lr, pc
         9d0e4:	e282f054 	add	pc, r2, #84	; 0x54
         9d0e8:	e28dd008 	add	sp, sp, #8	; 0x8
         9d0ec:	e59d0000 	ldr	r0, [sp]
         9d0f0:	eb6c9831 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9d0f4:	e28dd004 	add	sp, sp, #4	; 0x4
         9d0f8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9d0fc:	eb6c982e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9d100:	e28dd008 	add	sp, sp, #8	; 0x8
         9d104:	e59d0000 	ldr	r0, [sp]
         9d108:	eb6c982b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9d10c:	e28dd004 	add	sp, sp, #4	; 0x4
         9d110:	e2877001 	add	r7, r7, #1	; 0x1
         9d114:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9d118:	e1570000 	cmp	r7, r0
         9d11c:	baffff50 	blt	9ce64 <TView::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0xb0>
         9d120:	e1a00004 	mov	r0, r4
         9d124:	e5941000 	ldr	r1, [r4]
         9d128:	e1a0e00f 	mov	lr, pc
         9d12c:	e281f0f0 	add	pc, r1, #240	; 0xf0
         9d130:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::DropDone(void)
 * Address: 0009d134
 */
TView::DropDone(void) {
    /*
         9d134:	e1a0c00d 	mov	ip, sp
         9d138:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         9d13c:	e24cb004 	sub	fp, ip, #4	; 0x4
         9d140:	e1a04000 	mov	r4, r0
         9d144:	e24dd004 	sub	sp, sp, #4	; 0x4
         9d148:	e3a03000 	mov	r3, #0	; 0x0
         9d14c:	e92d0008 	stmdb	sp!, {r3}
         9d150:	e3a00002 	mov	r0, #2	; 0x2
         9d154:	eb6c93fc 	bl	1bc214c <$AllocateRefHandle(long)>
         9d158:	e58d0004 	str	r0, [sp, #4]	; fField4
         9d15c:	e28d2004 	add	r2, sp, #4	; 0x4
         9d160:	e59f1028 	ldr	r1, [pc, #28]	; 9d190 <TView::DropDone(void)+0x5c>	; fField28
         9d164:	e1a00004 	mov	r0, r4
         9d168:	e3a03001 	mov	r3, #1	; 0x1
         9d16c:	eb6cb91b 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         9d170:	e28dd004 	add	sp, sp, #4	; 0x4
         9d174:	e2500002 	subs	r0, r0, #2	; 0x2
         9d178:	13a00001 	movne	r0, #1	; 0x1
         9d17c:	e20040ff 	and	r4, r0, #255	; 0xff
         9d180:	e59d0000 	ldr	r0, [sp]
         9d184:	eb6c980c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9d188:	e1a00004 	mov	r0, r4
         9d18c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         9d190:	00684f80 	rsbeq	r4, r8, r0, lsl #31
    */
}

/**
 * Symbol: TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)
 * Address: 0009d194
 */
TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *) {
    /*
         9d194:	e1a0c00d 	mov	ip, sp
         9d198:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         9d19c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9d1a0:	e24cb014 	sub	fp, ip, #20	; 0x14
         9d1a4:	e1a04000 	mov	r4, r0
         9d1a8:	e1a06001 	mov	r6, r1
         9d1ac:	e1a05002 	mov	r5, r2
         9d1b0:	e1a07003 	mov	r7, r3
         9d1b4:	e28b9018 	add	r9, fp, #24	; 0x18
         9d1b8:	e8990301 	ldmia	r9, {r0, r8, r9}
         9d1bc:	e200a0ff 	and	sl, r0, #255	; 0xff
         9d1c0:	e3a00037 	mov	r0, #55	; 0x37
         9d1c4:	eb689c0e 	bl	1ac4204 <$BusyBoxSend(long)>
         9d1c8:	e1a00006 	mov	r0, r6
         9d1cc:	e3a01001 	mov	r1, #1	; 0x1
         9d1d0:	eb67f2c9 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
         9d1d4:	e1a00004 	mov	r0, r4
         9d1d8:	eb6cb0bf 	bl	1bc94dc <TView::$CopyProtection( const(void))>
         9d1dc:	e3100001 	tst	r0, #1	; 0x1
         9d1e0:	e3a00000 	mov	r0, #0	; 0x0
         9d1e4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         9d1e8:	e24dd020 	sub	sp, sp, #32	; 0x20
         9d1ec:	e28d3010 	add	r3, sp, #16	; 0x10
         9d1f0:	e28d2014 	add	r2, sp, #20	; 0x14
         9d1f4:	e28d1018 	add	r1, sp, #24	; 0x18
         9d1f8:	e28d001c 	add	r0, sp, #28	; 0x1c
         9d1fc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         9d200:	e1a0300a 	mov	r3, sl
         9d204:	e1a02009 	mov	r2, r9
         9d208:	e1a01007 	mov	r1, r7
         9d20c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         9d210:	e1a03005 	mov	r3, r5
         9d214:	e1a02006 	mov	r2, r6
         9d218:	e1a01008 	mov	r1, r8
         9d21c:	e1a00004 	mov	r0, r4
         9d220:	eb684124 	bl	1aad6b8 <TView::$Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)>
         9d224:	e1a07000 	mov	r7, r0
         9d228:	e594201c 	ldr	r2, [r4, #28]	; fField28
         9d22c:	e1a01005 	mov	r1, r5
         9d230:	e58d2018 	str	r2, [sp, #24]	; fField24
         9d234:	e28dd014 	add	sp, sp, #20	; 0x14
         9d238:	e28d0008 	add	r0, sp, #8	; 0x8
         9d23c:	eb67ac73 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
         9d240:	e28d0008 	add	r0, sp, #8	; 0x8
         9d244:	e58d0000 	str	r0, [sp]
         9d248:	e59f90a4 	ldr	r9, [pc, #a4]	; 9d2f4 <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x160>
         9d24c:	e5990000 	ldr	r0, [r9]
         9d250:	e8bd0006 	ldmia	sp!, {r1, r2}
         9d254:	eb67f6b6 	bl	1a9ad34 <TRootView::$Invalidate(TBaseRegion const, TView *)>
         9d258:	e24dd004 	sub	sp, sp, #4	; 0x4
         9d25c:	e5dd0018 	ldrb	r0, [sp, #24]	; fField24
         9d260:	e3300000 	teq	r0, #0	; 0x0
         9d264:	13a00001 	movne	r0, #1	; 0x1
         9d268:	e20000ff 	and	r0, r0, #255	; 0xff
         9d26c:	e3370000 	teq	r7, #0	; 0x0
         9d270:	e58d0000 	str	r0, [sp]
         9d274:	05dd0014 	ldreqb	r0, [sp, #20]	; fField20
         9d278:	03300000 	teqeq	r0, #0	; 0x0
         9d27c:	0a000071 	beq	9d448 <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x2b4>
         9d280:	e1a01007 	mov	r1, r7
         9d284:	e1a00004 	mov	r0, r4
         9d288:	eb684113 	bl	1aad6dc <TView::$DropApprove(TView *)>
         9d28c:	e3300000 	teq	r0, #0	; 0x0
         9d290:	0a00006c 	beq	9d448 <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x2b4>
         9d294:	e24dd008 	sub	sp, sp, #8	; 0x8
         9d298:	e5940024 	ldr	r0, [r4, #36]	; fField36
         9d29c:	e5900000 	ldr	r0, [r0]
         9d2a0:	eb6c93a9 	bl	1bc214c <$AllocateRefHandle(long)>
         9d2a4:	e58d0004 	str	r0, [sp, #4]	; fField4
         9d2a8:	e3a01001 	mov	r1, #1	; 0x1
         9d2ac:	e5990000 	ldr	r0, [r9]
         9d2b0:	eb68d9cd 	bl	1ad39ec <TRootView::$SetPreserveHilites(unsigned char)>
         9d2b4:	e58d0000 	str	r0, [sp]
         9d2b8:	e3a00002 	mov	r0, #2	; 0x2
         9d2bc:	e58d0008 	str	r0, [sp, #8]	; fField8
         9d2c0:	e3a01001 	mov	r1, #1	; 0x1
         9d2c4:	e5990000 	ldr	r0, [r9]
         9d2c8:	e5c0105c 	strb	r1, [r0, #92]
         9d2cc:	e5dd001c 	ldrb	r0, [sp, #28]	; fField28
         9d2d0:	e3300000 	teq	r0, #0	; 0x0
         9d2d4:	0a00005d 	beq	9d450 <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x2bc>
         9d2d8:	e5940008 	ldr	r0, [r4, #8]	; fField8
         9d2dc:	e3100301 	tst	r0, #67108864	; 0x4000000
         9d2e0:	0a000004 	beq	9d2f8 <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x164>
         9d2e4:	e28d1028 	add	r1, sp, #40	; 0x28
         9d2e8:	e1a00004 	mov	r0, r4
         9d2ec:	eb68d591 	bl	1ad2938 <TClipboard::$MoveIcon(TPoint const &)>
         9d2f0:	ea000023 	b	9d384 <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x1f0>
         9d2f4:	0c101934 	ldceq	9, cr1, [r0], -#208
         9d2f8:	e59b0014 	ldr	r0, [fp, #20]	; fField20
         9d2fc:	e3300000 	teq	r0, #0	; 0x0
         9d300:	01a02005 	moveq	r2, r5
         9d304:	159b2014 	ldrne	r2, [fp, #20]	; fField20
         9d308:	e28d3028 	add	r3, sp, #40	; 0x28
         9d30c:	e1a01004 	mov	r1, r4
         9d310:	e1a00008 	mov	r0, r8
         9d314:	eb6917ae 	bl	1ae31d4 <$NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint>
         9d318:	e33a0000 	teq	sl, #0	; 0x0
         9d31c:	05940008 	ldreq	r0, [r4, #8]	; fField8
         9d320:	02000082 	andeq	r0, r0, #130	; 0x82
         9d324:	03300000 	teqeq	r0, #0	; 0x0
         9d328:	1a000015 	bne	9d384 <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x1f0>
         9d32c:	e5980000 	ldr	r0, [r8]
         9d330:	e5900000 	ldr	r0, [r0]
         9d334:	eb6c9fdc 	bl	1bc52ac <$Length(long)>
         9d338:	e24dd004 	sub	sp, sp, #4	; 0x4
         9d33c:	e2505001 	subs	r5, r0, #1	; 0x1
         9d340:	4a00000e 	bmi	9d380 <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x1ec>
         9d344:	e1a06004 	mov	r6, r4
         9d348:	e1a01005 	mov	r1, r5
         9d34c:	e1a00008 	mov	r0, r8
         9d350:	eb68cd39 	bl	1ad083c <TDragInfo::$GetItemDragRef( const(long))>
         9d354:	eb6c937c 	bl	1bc214c <$AllocateRefHandle(long)>
         9d358:	e58d0000 	str	r0, [sp]
         9d35c:	e1a0100d 	mov	r1, sp
         9d360:	e1a00006 	mov	r0, r6
         9d364:	e5962000 	ldr	r2, [r6]
         9d368:	e1a0e00f 	mov	lr, pc
         9d36c:	e282f0ec 	add	pc, r2, #236	; 0xec
         9d370:	e59d0000 	ldr	r0, [sp]
         9d374:	eb6c9790 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9d378:	e2555001 	subs	r5, r5, #1	; 0x1
         9d37c:	5afffff0 	bpl	9d344 <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x1b0>
         9d380:	e28dd004 	add	sp, sp, #4	; 0x4
         9d384:	e59d1000 	ldr	r1, [sp]
         9d388:	e5990000 	ldr	r0, [r9]
         9d38c:	eb68d996 	bl	1ad39ec <TRootView::$SetPreserveHilites(unsigned char)>
         9d390:	e28d0004 	add	r0, sp, #4	; 0x4
         9d394:	eb6cb470 	bl	1bca55c <$GetView(RefVar const &)>
         9d398:	e1300004 	teq	r0, r4
         9d39c:	1a000026 	bne	9d43c <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x2a8>
         9d3a0:	e5dd001c 	ldrb	r0, [sp, #28]	; fField28
         9d3a4:	e3300000 	teq	r0, #0	; 0x0
         9d3a8:	1a00001f 	bne	9d42c <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x298>
         9d3ac:	e1a00004 	mov	r0, r4
         9d3b0:	e3a01051 	mov	r1, #81	; 0x51
         9d3b4:	e5942000 	ldr	r2, [r4]
         9d3b8:	e1a0e00f 	mov	lr, pc
         9d3bc:	e282f004 	add	pc, r2, #4	; 0x4
         9d3c0:	e3300000 	teq	r0, #0	; 0x0
         9d3c4:	1a000018 	bne	9d42c <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x298>
         9d3c8:	e1340007 	teq	r4, r7
         9d3cc:	0a000006 	beq	9d3ec <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x258>
         9d3d0:	e1a00007 	mov	r0, r7
         9d3d4:	e3a01051 	mov	r1, #81	; 0x51
         9d3d8:	e5972000 	ldr	r2, [r7]
         9d3dc:	e1a0e00f 	mov	lr, pc
         9d3e0:	e282f004 	add	pc, r2, #4	; 0x4
         9d3e4:	e3300000 	teq	r0, #0	; 0x0
         9d3e8:	1a00000f 	bne	9d42c <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x298>
         9d3ec:	e1340007 	teq	r4, r7
         9d3f0:	0a000011 	beq	9d43c <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x2a8>
         9d3f4:	e1a00007 	mov	r0, r7
         9d3f8:	e3a0104d 	mov	r1, #77	; 0x4d
         9d3fc:	e5972000 	ldr	r2, [r7]
         9d400:	e1a0e00f 	mov	lr, pc
         9d404:	e282f004 	add	pc, r2, #4	; 0x4
         9d408:	e3300000 	teq	r0, #0	; 0x0
         9d40c:	0a00000a 	beq	9d43c <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x2a8>
         9d410:	e1a00004 	mov	r0, r4
         9d414:	e3a0104d 	mov	r1, #77	; 0x4d
         9d418:	e5942000 	ldr	r2, [r4]
         9d41c:	e1a0e00f 	mov	lr, pc
         9d420:	e282f004 	add	pc, r2, #4	; 0x4
         9d424:	e3300000 	teq	r0, #0	; 0x0
         9d428:	0a000003 	beq	9d43c <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x2a8>
         9d42c:	e1a00004 	mov	r0, r4
         9d430:	e5941000 	ldr	r1, [r4]
         9d434:	e1a0e00f 	mov	lr, pc
         9d438:	e281f0ac 	add	pc, r1, #172	; 0xac
         9d43c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9d440:	eb6c975d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9d444:	e28dd008 	add	sp, sp, #8	; 0x8
         9d448:	e49d0024 	ldr	r0, [sp], #36	; fField36
         9d44c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         9d450:	e24dd004 	sub	sp, sp, #4	; 0x4
         9d454:	e1a05004 	mov	r5, r4
         9d458:	e1a0300a 	mov	r3, sl
         9d45c:	e28d2028 	add	r2, sp, #40	; 0x28
         9d460:	e28d102c 	add	r1, sp, #44	; 0x2c
         9d464:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         9d468:	e1a01006 	mov	r1, r6
         9d46c:	e28d000c 	add	r0, sp, #12	; 0xc
         9d470:	eb67dd72 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
         9d474:	e28d300c 	add	r3, sp, #12	; 0xc
         9d478:	e1a02007 	mov	r2, r7
         9d47c:	e1a01008 	mov	r1, r8
         9d480:	e1a00005 	mov	r0, r5
         9d484:	e595c000 	ldr	ip, [r5]
         9d488:	e1a0e00f 	mov	lr, pc
         9d48c:	e28cff43 	add	pc, ip, #268	; 0x10c
         9d490:	e28dd00c 	add	sp, sp, #12	; 0xc
         9d494:	eaffffb9 	b	9d380 <TView::DragAndDrop(TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TDragInfo const &, TRect const *)+0x1ec>
    */
}

/**
 * Symbol: TView::AlignDragPtToGrid(TDragInfo const &, TPoint *)
 * Address: 0009d498
 */
TView::AlignDragPtToGrid(TDragInfo const &, TPoint *) {
    /*
         9d498:	e1a0c00d 	mov	ip, sp
         9d49c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         9d4a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         9d4a4:	e1a06000 	mov	r6, r0
         9d4a8:	e1a04001 	mov	r4, r1
         9d4ac:	e1a05002 	mov	r5, r2
         9d4b0:	e24dd004 	sub	sp, sp, #4	; 0x4
         9d4b4:	e3a07000 	mov	r7, #0	; 0x0
         9d4b8:	e1a0200d 	mov	r2, sp
         9d4bc:	e59f1074 	ldr	r1, [pc, #74]	; 9d538 <TView::AlignDragPtToGrid(TDragInfo const &, TPoint *)+0xa0>
         9d4c0:	eb6927c0 	bl	1ae73c8 <TView::$IsGridded(RefVar const &, TPoint *)>
         9d4c4:	e3300000 	teq	r0, #0	; 0x0
         9d4c8:	1a000016 	bne	9d528 <TView::AlignDragPtToGrid(TDragInfo const &, TPoint *)+0x90>
         9d4cc:	e1a0200d 	mov	r2, sp
         9d4d0:	e59f1064 	ldr	r1, [pc, #64]	; 9d53c <TView::AlignDragPtToGrid(TDragInfo const &, TPoint *)+0xa4>
         9d4d4:	e1a00006 	mov	r0, r6
         9d4d8:	eb6927ba 	bl	1ae73c8 <TView::$IsGridded(RefVar const &, TPoint *)>
         9d4dc:	e3300000 	teq	r0, #0	; 0x0
         9d4e0:	0a000013 	beq	9d534 <TView::AlignDragPtToGrid(TDragInfo const &, TPoint *)+0x9c>
         9d4e4:	e5940000 	ldr	r0, [r4]
         9d4e8:	e5900000 	ldr	r0, [r0]
         9d4ec:	eb6c9f6e 	bl	1bc52ac <$Length(long)>
         9d4f0:	e2506001 	subs	r6, r0, #1	; 0x1
         9d4f4:	4a000009 	bmi	9d520 <TView::AlignDragPtToGrid(TDragInfo const &, TPoint *)+0x88>
         9d4f8:	e59f8040 	ldr	r8, [pc, #40]	; 9d540 <TView::AlignDragPtToGrid(TDragInfo const &, TPoint *)+0xa8>	; fField40
         9d4fc:	e1a02008 	mov	r2, r8
         9d500:	e1a01006 	mov	r1, r6
         9d504:	e1a00004 	mov	r0, r4
         9d508:	eb68c8b0 	bl	1acf7d0 <TDragInfo::$FindType( const(long, RefVar const &))>
         9d50c:	e3300002 	teq	r0, #2	; 0x2
         9d510:	13a07001 	movne	r7, #1	; 0x1
         9d514:	1a000001 	bne	9d520 <TView::AlignDragPtToGrid(TDragInfo const &, TPoint *)+0x88>
         9d518:	e2566001 	subs	r6, r6, #1	; 0x1
         9d51c:	5afffff6 	bpl	9d4fc <TView::AlignDragPtToGrid(TDragInfo const &, TPoint *)+0x64>
         9d520:	e3370000 	teq	r7, #0	; 0x0
         9d524:	0a000002 	beq	9d534 <TView::AlignDragPtToGrid(TDragInfo const &, TPoint *)+0x9c>
         9d528:	e1a0100d 	mov	r1, sp
         9d52c:	e1a00005 	mov	r0, r5
         9d530:	eb68bc50 	bl	1acc678 <$AlignPtToGrid(TPoint *, TPoint &)>
         9d534:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         9d538:	006847e8 	rsbeq	r4, r8, r8, ror #15
         9d53c:	00683590 	streqb	r3, [r8], -#80
         9d540:	00684ac0 	rsbeq	r4, r8, r0, asr #21
    */
}

/**
 * Symbol: TView::TargetDrop(TDragInfo const &, TPoint const &)
 * Address: 0009d5c8
 */
TView::TargetDrop(TDragInfo const &, TPoint const &) {
    /*
         9d5c8:	e1a0c00d 	mov	ip, sp
         9d5cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9d5d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         9d5d4:	e1a05001 	mov	r5, r1
         9d5d8:	e1a04002 	mov	r4, r2
         9d5dc:	e59f0108 	ldr	r0, [pc, #108]	; 9d6ec <TView::TargetDrop(TDragInfo const &, TPoint const &)+0x124>
         9d5e0:	e5900000 	ldr	r0, [r0]
         9d5e4:	e3a03000 	mov	r3, #0	; 0x0
         9d5e8:	e3a02402 	mov	r2, #33554432	; 0x2000000
         9d5ec:	e2422c02 	sub	r2, r2, #512	; 0x200
         9d5f0:	e5941000 	ldr	r1, [r4]
         9d5f4:	eb6cb3cb 	bl	1bca528 <TView::$FindView(TPoint, unsigned long, TPoint *)>
         9d5f8:	e1b06000 	movs	r6, r0
         9d5fc:	0a000038 	beq	9d6e4 <TView::TargetDrop(TDragInfo const &, TPoint const &)+0x11c>
         9d600:	e1a02004 	mov	r2, r4
         9d604:	e1a01005 	mov	r1, r5
         9d608:	e1a00006 	mov	r0, r6
         9d60c:	eb68f9e6 	bl	1adbdac <$FindDropViewDeep(TView *, TDragInfo const &, TPoint const &)>
         9d610:	e1b06000 	movs	r6, r0
         9d614:	0a000032 	beq	9d6e4 <TView::TargetDrop(TDragInfo const &, TPoint const &)+0x11c>
         9d618:	e1a02004 	mov	r2, r4
         9d61c:	e1a01005 	mov	r1, r5
         9d620:	e1a00006 	mov	r0, r6
         9d624:	e5963000 	ldr	r3, [r6]
         9d628:	e1a0e00f 	mov	lr, pc
         9d62c:	e283ff46 	add	pc, r3, #280	; 0x118
         9d630:	e1b06000 	movs	r6, r0
         9d634:	0a00002a 	beq	9d6e4 <TView::TargetDrop(TDragInfo const &, TPoint const &)+0x11c>
         9d638:	e24dd008 	sub	sp, sp, #8	; 0x8
         9d63c:	e3a00001 	mov	r0, #1	; 0x1
         9d640:	eb67f9d5 	bl	1a9bd9c <$MakeArray(long)>
         9d644:	eb6c92c0 	bl	1bc214c <$AllocateRefHandle(long)>
         9d648:	e58d0000 	str	r0, [sp]
         9d64c:	e5950000 	ldr	r0, [r5]
         9d650:	e5900000 	ldr	r0, [r0]
         9d654:	eb6c92bc 	bl	1bc214c <$AllocateRefHandle(long)>
         9d658:	e1a04000 	mov	r4, r0
         9d65c:	e3a01000 	mov	r1, #0	; 0x0
         9d660:	e5902000 	ldr	r2, [r0]
         9d664:	e59d0000 	ldr	r0, [sp]
         9d668:	e5900000 	ldr	r0, [r0]
         9d66c:	eb6ca339 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9d670:	e1a00004 	mov	r0, r4
         9d674:	eb6c96d0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9d678:	e24dd004 	sub	sp, sp, #4	; 0x4
         9d67c:	e28d3008 	add	r3, sp, #8	; 0x8
         9d680:	e92d0008 	stmdb	sp!, {r3}
         9d684:	e28d2008 	add	r2, sp, #8	; 0x8
         9d688:	e59f1060 	ldr	r1, [pc, #60]	; 9d6f0 <TView::TargetDrop(TDragInfo const &, TPoint const &)+0x128>
         9d68c:	e1a00006 	mov	r0, r6
         9d690:	e3a03001 	mov	r3, #1	; 0x1
         9d694:	eb6cb7d1 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         9d698:	e28dd004 	add	sp, sp, #4	; 0x4
         9d69c:	eb6c92aa 	bl	1bc214c <$AllocateRefHandle(long)>
         9d6a0:	e58d0000 	str	r0, [sp]
         9d6a4:	e5dd0008 	ldrb	r0, [sp, #8]	; fField8
         9d6a8:	e3300000 	teq	r0, #0	; 0x0
         9d6ac:	0a000007 	beq	9d6d0 <TView::TargetDrop(TDragInfo const &, TPoint const &)+0x108>
         9d6b0:	e59d0000 	ldr	r0, [sp]
         9d6b4:	e5900000 	ldr	r0, [r0]
         9d6b8:	e3300002 	teq	r0, #2	; 0x2
         9d6bc:	03a00000 	moveq	r0, #0	; 0x0
         9d6c0:	0a000001 	beq	9d6cc <TView::TargetDrop(TDragInfo const &, TPoint const &)+0x104>
         9d6c4:	e1a0000d 	mov	r0, sp
         9d6c8:	eb6cb3a3 	bl	1bca55c <$GetView(RefVar const &)>
         9d6cc:	e1a06000 	mov	r6, r0
         9d6d0:	e59d0000 	ldr	r0, [sp]
         9d6d4:	eb6c96b8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9d6d8:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         9d6dc:	eb6c96b6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9d6e0:	e28dd008 	add	sp, sp, #8	; 0x8
         9d6e4:	e1a00006 	mov	r0, r6
         9d6e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         9d6ec:	0c101934 	ldceq	9, cr1, [r0], -#208
         9d6f0:	00684fb8 	streqh	r4, [r8], -#248
    */
}

/**
 * Symbol: TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)
 * Address: 0009d6f4
 */
TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *) {
    /*
         9d6f4:	e1a0c00d 	mov	ip, sp
         9d6f8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         9d6fc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9d700:	e24cb014 	sub	fp, ip, #20	; 0x14
         9d704:	e1a05001 	mov	r5, r1
         9d708:	e1a04003 	mov	r4, r3
         9d70c:	e28b701c 	add	r7, fp, #28	; 0x1c
         9d710:	e8970081 	ldmia	r7, {r0, r7}
         9d714:	e20030ff 	and	r3, r0, #255	; 0xff
         9d718:	e28ba024 	add	sl, fp, #36	; 0x24
         9d71c:	e89a0440 	ldmia	sl, {r6, sl}
         9d720:	e52d302c 	str	r3, [sp, -#44]!	; fField44
         9d724:	e24dd010 	sub	sp, sp, #16	; 0x10
         9d728:	e59f0400 	ldr	r0, [pc, #400]	; 9db30 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x43c>
         9d72c:	e5900000 	ldr	r0, [r0]
         9d730:	eb6c9285 	bl	1bc214c <$AllocateRefHandle(long)>
         9d734:	e1a08000 	mov	r8, r0
         9d738:	e59f03f4 	ldr	r0, [pc, #3f4]	; 9db34 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x440>
         9d73c:	e5900000 	ldr	r0, [r0]
         9d740:	e5901000 	ldr	r1, [r0]
         9d744:	e5980000 	ldr	r0, [r8]
         9d748:	eb6c9ac4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9d74c:	eb6c927e 	bl	1bc214c <$AllocateRefHandle(long)>
         9d750:	e58d0004 	str	r0, [sp, #4]	; fField4
         9d754:	e1a00008 	mov	r0, r8
         9d758:	eb6c9697 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9d75c:	e3a08000 	mov	r8, #0	; 0x0
         9d760:	e59f13d0 	ldr	r1, [pc, #3d0]	; 9db38 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x444>
         9d764:	e28d0004 	add	r0, sp, #4	; 0x4
         9d768:	e3a02000 	mov	r2, #0	; 0x0
         9d76c:	eb6c9abd 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         9d770:	e3100003 	tst	r0, #3	; 0x3
         9d774:	01a00140 	moveq	r0, r0, asr #2
         9d778:	0a000000 	beq	9d780 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x8c>
         9d77c:	eb6c9266 	bl	1bc211c <$_RINTError(long)>
         9d780:	e5cd0003 	strb	r0, [sp, #3]
         9d784:	e1a00440 	mov	r0, r0, asr #8
         9d788:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         9d78c:	e59f13a8 	ldr	r1, [pc, #3a8]	; 9db3c <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x448>
         9d790:	e28d0004 	add	r0, sp, #4	; 0x4
         9d794:	e3a02000 	mov	r2, #0	; 0x0
         9d798:	eb6c9ab2 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         9d79c:	e3100003 	tst	r0, #3	; 0x3
         9d7a0:	01a00140 	moveq	r0, r0, asr #2
         9d7a4:	0a000000 	beq	9d7ac <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0xb8>
         9d7a8:	eb6c925b 	bl	1bc211c <$_RINTError(long)>
         9d7ac:	e5cd0001 	strb	r0, [sp, #1]
         9d7b0:	e1a00440 	mov	r0, r0, asr #8
         9d7b4:	e5cd0000 	strb	r0, [sp]
         9d7b8:	e59d0000 	ldr	r0, [sp]
         9d7bc:	e2800005 	add	r0, r0, #5	; 0x5
         9d7c0:	e5cd000b 	strb	r0, [sp, #11]
         9d7c4:	e1a00440 	mov	r0, r0, asr #8
         9d7c8:	e5cd000a 	strb	r0, [sp, #10]
         9d7cc:	e59d0002 	ldr	r0, [sp, #2]	; fField2
         9d7d0:	e2800005 	add	r0, r0, #5	; 0x5
         9d7d4:	e5cd0009 	strb	r0, [sp, #9]
         9d7d8:	e1a00440 	mov	r0, r0, asr #8
         9d7dc:	e5cd0008 	strb	r0, [sp, #8]	; fField8
         9d7e0:	e59f1358 	ldr	r1, [pc, #358]	; 9db40 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x44c>
         9d7e4:	e28d0004 	add	r0, sp, #4	; 0x4
         9d7e8:	e3a02000 	mov	r2, #0	; 0x0
         9d7ec:	eb6c9a9d 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         9d7f0:	e3100003 	tst	r0, #3	; 0x3
         9d7f4:	01a00140 	moveq	r0, r0, asr #2
         9d7f8:	0a000000 	beq	9d800 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x10c>
         9d7fc:	eb6c9246 	bl	1bc211c <$_RINTError(long)>
         9d800:	e240000a 	sub	r0, r0, #10	; 0xa
         9d804:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         9d808:	e0800001 	add	r0, r0, r1
         9d80c:	e5cd000f 	strb	r0, [sp, #15]
         9d810:	e1a00440 	mov	r0, r0, asr #8
         9d814:	e5cd000e 	strb	r0, [sp, #14]
         9d818:	e59f1324 	ldr	r1, [pc, #324]	; 9db44 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x450>
         9d81c:	e28d0004 	add	r0, sp, #4	; 0x4
         9d820:	e3a02000 	mov	r2, #0	; 0x0
         9d824:	eb6c9a8f 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         9d828:	e3100003 	tst	r0, #3	; 0x3
         9d82c:	01a00140 	moveq	r0, r0, asr #2
         9d830:	0a000000 	beq	9d838 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x144>
         9d834:	eb6c9238 	bl	1bc211c <$_RINTError(long)>
         9d838:	e240000a 	sub	r0, r0, #10	; 0xa
         9d83c:	e59d100a 	ldr	r1, [sp, #10]
         9d840:	e0800001 	add	r0, r0, r1
         9d844:	e5cd000d 	strb	r0, [sp, #13]
         9d848:	e1a00440 	mov	r0, r0, asr #8
         9d84c:	e5cd000c 	strb	r0, [sp, #12]	; fField12
         9d850:	e24dd004 	sub	sp, sp, #4	; 0x4
         9d854:	e59f12ec 	ldr	r1, [pc, #2ec]	; 9db48 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x454>	; fField2
         9d858:	e28d0008 	add	r0, sp, #8	; 0x8
         9d85c:	e3a02000 	mov	r2, #0	; 0x0
         9d860:	eb6c9a80 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         9d864:	eb6c9238 	bl	1bc214c <$AllocateRefHandle(long)>
         9d868:	e3a08000 	mov	r8, #0	; 0x0
         9d86c:	e40d000c 	str	r0, [sp], -#12	; fField12
         9d870:	e5ca8000 	strb	r8, [sl]
         9d874:	e59b102c 	ldr	r1, [fp, #44]	; fField44
         9d878:	e5c18000 	strb	r8, [r1]
         9d87c:	e3a09004 	mov	r9, #4	; 0x4
         9d880:	e3a00002 	mov	r0, #2	; 0x2
         9d884:	eb6c9230 	bl	1bc214c <$AllocateRefHandle(long)>
         9d888:	e58d0008 	str	r0, [sp, #8]	; fField8
         9d88c:	e3a00002 	mov	r0, #2	; 0x2
         9d890:	eb6c922d 	bl	1bc214c <$AllocateRefHandle(long)>
         9d894:	e58d0004 	str	r0, [sp, #4]	; fField4
         9d898:	e5950000 	ldr	r0, [r5]
         9d89c:	e5900000 	ldr	r0, [r0]
         9d8a0:	eb6c9e81 	bl	1bc52ac <$Length(long)>
         9d8a4:	e3a08000 	mov	r8, #0	; 0x0
         9d8a8:	e58d0000 	str	r0, [sp]
         9d8ac:	e3500000 	cmp	r0, #0	; 0x0
         9d8b0:	da000020 	ble	9d938 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x244>
         9d8b4:	e59f1290 	ldr	r1, [pc, #290]	; 9db4c <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x458>
         9d8b8:	e58d1048 	str	r1, [sp, #72]
         9d8bc:	e24dd004 	sub	sp, sp, #4	; 0x4
         9d8c0:	e5950000 	ldr	r0, [r5]
         9d8c4:	e5900000 	ldr	r0, [r0]
         9d8c8:	eb6c921f 	bl	1bc214c <$AllocateRefHandle(long)>
         9d8cc:	e58d0000 	str	r0, [sp]
         9d8d0:	e5900000 	ldr	r0, [r0]
         9d8d4:	e1a01008 	mov	r1, r8
         9d8d8:	eb6c9a5d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         9d8dc:	e59d100c 	ldr	r1, [sp, #12]	; fField12
         9d8e0:	e5810000 	str	r0, [r1]
         9d8e4:	e59d0000 	ldr	r0, [sp]
         9d8e8:	eb6c9633 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9d8ec:	e59d104c 	ldr	r1, [sp, #76]
         9d8f0:	e28d000c 	add	r0, sp, #12	; 0xc
         9d8f4:	e3a02000 	mov	r2, #0	; 0x0
         9d8f8:	eb6c9a5a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         9d8fc:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         9d900:	e5810000 	str	r0, [r1]
         9d904:	e2001003 	and	r1, r0, #3	; 0x3
         9d908:	e3510000 	cmp	r1, #0	; 0x0
         9d90c:	1a000005 	bne	9d928 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x234>
         9d910:	01a00140 	moveq	r0, r0, asr #2
         9d914:	0a000000 	beq	9d91c <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x228>
         9d918:	eb6c91ff 	bl	1bc211c <$_RINTError(long)>
         9d91c:	e1590000 	cmp	r9, r0
         9d920:	b1a00009 	movlt	r0, r9
         9d924:	e1a09000 	mov	r9, r0
         9d928:	e2888001 	add	r8, r8, #1	; 0x1
         9d92c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         9d930:	e1580000 	cmp	r8, r0
         9d934:	baffffe0 	blt	9d8bc <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x1c8>
         9d938:	e24dd024 	sub	sp, sp, #36	; 0x24
         9d93c:	e28d0020 	add	r0, sp, #32	; 0x20
         9d940:	e59b100c 	ldr	r1, [fp, #12]	; fField12
         9d944:	eb67dc3d 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
         9d948:	e28d0018 	add	r0, sp, #24	; 0x18
         9d94c:	e8945000 	ldmia	r4, {ip, lr}
         9d950:	e8805000 	stmia	r0, {ip, lr}
         9d954:	e59b1018 	ldr	r1, [fp, #24]	; fField24
         9d958:	e3310000 	teq	r1, #0	; 0x0
         9d95c:	e1a0000d 	mov	r0, sp
         9d960:	159b1018 	ldrne	r1, [fp, #24]	; fField24
         9d964:	18915000 	ldmneia	r1, {ip, lr}
         9d968:	18805000 	stmneia	r0, {ip, lr}
         9d96c:	1a000000 	bne	9d974 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x280>
         9d970:	eb691e54 	bl	1ae52c8 <$GetAppAreaBounds(TRect *)>
         9d974:	e24dd008 	sub	sp, sp, #8	; 0x8
         9d978:	e59b1014 	ldr	r1, [fp, #20]	; fField20
         9d97c:	e3310000 	teq	r1, #0	; 0x0
         9d980:	159b1014 	ldrne	r1, [fp, #20]	; fField20
         9d984:	18911008 	ldmneia	r1, {r3, ip}
         9d988:	188d1008 	stmneia	sp, {r3, ip}
         9d98c:	1a00000f 	bne	9d9d0 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x2dc>
         9d990:	e59d002a 	ldr	r0, [sp, #42]
         9d994:	e1a00840 	mov	r0, r0, asr #16
         9d998:	e5cd0003 	strb	r0, [sp, #3]
         9d99c:	e1a00440 	mov	r0, r0, asr #8
         9d9a0:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         9d9a4:	e59d1028 	ldr	r1, [sp, #40]	; fField40
         9d9a8:	e5cd1007 	strb	r1, [sp, #7]
         9d9ac:	e5cd0006 	strb	r0, [sp, #6]
         9d9b0:	e59d0028 	ldr	r0, [sp, #40]	; fField40
         9d9b4:	e1a00840 	mov	r0, r0, asr #16
         9d9b8:	e5cd0001 	strb	r0, [sp, #1]
         9d9bc:	e1a00440 	mov	r0, r0, asr #8
         9d9c0:	e5cd0000 	strb	r0, [sp]
         9d9c4:	e59d102a 	ldr	r1, [sp, #42]
         9d9c8:	e5cd1005 	strb	r1, [sp, #5]
         9d9cc:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         9d9d0:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         9d9d4:	e59d0000 	ldr	r0, [sp]
         9d9d8:	e0411000 	sub	r1, r1, r0
         9d9dc:	e59d0028 	ldr	r0, [sp, #40]	; fField40
         9d9e0:	e0810000 	add	r0, r1, r0
         9d9e4:	e1a01800 	mov	r1, r0, lsl #16
         9d9e8:	e1a01841 	mov	r1, r1, asr #16
         9d9ec:	e58d101c 	str	r1, [sp, #28]	; fField28
         9d9f0:	e59d100c 	ldr	r1, [sp, #12]	; fField12
         9d9f4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9d9f8:	e0411000 	sub	r1, r1, r0
         9d9fc:	e59d0028 	ldr	r0, [sp, #40]	; fField40
         9da00:	e0810000 	add	r0, r1, r0
         9da04:	e1a01800 	mov	r1, r0, lsl #16
         9da08:	e1a01841 	mov	r1, r1, asr #16
         9da0c:	e58d1018 	str	r1, [sp, #24]	; fField24
         9da10:	e59d100a 	ldr	r1, [sp, #10]
         9da14:	e59d0002 	ldr	r0, [sp, #2]	; fField2
         9da18:	e0410000 	sub	r0, r1, r0
         9da1c:	e59d102a 	ldr	r1, [sp, #42]
         9da20:	e0800001 	add	r0, r0, r1
         9da24:	e1a01800 	mov	r1, r0, lsl #16
         9da28:	e1a01841 	mov	r1, r1, asr #16
         9da2c:	e58d1014 	str	r1, [sp, #20]	; fField20
         9da30:	e59d100e 	ldr	r1, [sp, #14]
         9da34:	e59d0006 	ldr	r0, [sp, #6]
         9da38:	e0410000 	sub	r0, r1, r0
         9da3c:	e59d102a 	ldr	r1, [sp, #42]
         9da40:	e0800001 	add	r0, r0, r1
         9da44:	e1a00800 	mov	r0, r0, lsl #16
         9da48:	e1a00840 	mov	r0, r0, asr #16
         9da4c:	e58d0010 	str	r0, [sp, #16]	; fField16
         9da50:	e28dd004 	add	sp, sp, #4	; 0x4
         9da54:	e3a00000 	mov	r0, #0	; 0x0
         9da58:	e5cd0001 	strb	r0, [sp, #1]
         9da5c:	e3a00080 	mov	r0, #128	; 0x80
         9da60:	e44d00a8 	strb	r0, [sp], -#168
         9da64:	e3a00000 	mov	r0, #0	; 0x0
         9da68:	e58d00a4 	str	r0, [sp, #164]
         9da6c:	e58d00a0 	str	r0, [sp, #160]
         9da70:	e58d009c 	str	r0, [sp, #156]
         9da74:	e28d001c 	add	r0, sp, #28	; 0x1c
         9da78:	eb68dbf7 	bl	1ad4a5c <DragBits::$__ct(void)>
         9da7c:	e3a00000 	mov	r0, #0	; 0x0
         9da80:	e52d006c 	str	r0, [sp, -#108]!
         9da84:	e28d0008 	add	r0, sp, #8	; 0x8
         9da88:	eb6c53b9 	bl	1bb2974 <$setjmp>
         9da8c:	e59f10bc 	ldr	r1, [pc, #bc]	; 9db50 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x45c>
         9da90:	e58d1180 	str	r1, [sp, #384]
         9da94:	e28d108c 	add	r1, sp, #140	; 0x8c
         9da98:	e3300000 	teq	r0, #0	; 0x0
         9da9c:	e58d117c 	str	r1, [sp, #380]
         9daa0:	1a00002b 	bne	9db54 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x460>
         9daa4:	e1a0000d 	mov	r0, sp
         9daa8:	eb6d0973 	bl	1be007c <$AddExceptionHandler>
         9daac:	e3a03048 	mov	r3, #72	; 0x48
         9dab0:	e92d0008 	stmdb	sp!, {r3}
         9dab4:	e1a01004 	mov	r1, r4
         9dab8:	e28d0070 	add	r0, sp, #112	; 0x70
         9dabc:	e3a02001 	mov	r2, #1	; 0x1
         9dac0:	eb690949 	bl	1adffec <$InitBitMap__FP8PixelMapRC5TRectlN23>
         9dac4:	e28dd004 	add	sp, sp, #4	; 0x4
         9dac8:	e58d010c 	str	r0, [sp, #268]
         9dacc:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         9dad0:	e5900008 	ldr	r0, [r0, #8]	; fField8
         9dad4:	e3100301 	tst	r0, #67108864	; 0x4000000
         9dad8:	0a00002a 	beq	9db88 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x494>
         9dadc:	e1a02004 	mov	r2, r4
         9dae0:	e59d315c 	ldr	r3, [sp, #348]
         9dae4:	e28d0088 	add	r0, sp, #136	; 0x88
         9dae8:	e59b1004 	ldr	r1, [fp, #4]	; fField4
         9daec:	eb6900e6 	bl	1adde8c <DragBits::$Constructor(TView *, TRect const *, unsigned char)>
         9daf0:	e3a00001 	mov	r0, #1	; 0x1
         9daf4:	e3a03000 	mov	r3, #0	; 0x0
         9daf8:	e58d0110 	str	r0, [sp, #272]
         9dafc:	e92d0008 	stmdb	sp!, {r3}
         9db00:	e1a02004 	mov	r2, r4
         9db04:	e1a01004 	mov	r1, r4
         9db08:	e3a03002 	mov	r3, #2	; 0x2
         9db0c:	e59d0180 	ldr	r0, [sp, #384]
         9db10:	eb67cf71 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         9db14:	e28dd004 	add	sp, sp, #4	; 0x4
         9db18:	e59d017c 	ldr	r0, [sp, #380]
         9db1c:	e28d106c 	add	r1, sp, #108	; 0x6c
         9db20:	e3a03000 	mov	r3, #0	; 0x0
         9db24:	e3a02000 	mov	r2, #0	; 0x0
         9db28:	eb690946 	bl	1ae0048 <TBits::$CopyIntoBitmap(PixelMap *, long, Region **)>
         9db2c:	ea000015 	b	9db88 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x494>
         9db30:	0c10180c 	ldceq	8, cr1, [r0], -#48
         9db34:	006829d0 	ldreqd	r2, [r8], -#144
         9db38:	00681e88 	rsbeq	r1, r8, r8, lsl #29
         9db3c:	00681e90 	streqb	r1, [r8], -#224
         9db40:	00681eb0 	streqh	r1, [r8], -#224
         9db44:	00681e98 	streqb	r1, [r8], -#232
         9db48:	00682230 	rsbeq	r2, r8, r0, lsr r2
         9db4c:	00683870 	rsbeq	r3, r8, r0, ror r8
         9db50:	00371318 	eoreqs	r1, r7, r8, lsl r3
         9db54:	e59d0060 	ldr	r0, [sp, #96]
         9db58:	e59d1180 	ldr	r1, [sp, #384]
         9db5c:	e5911000 	ldr	r1, [r1]
         9db60:	eb6d158b 	bl	1be3194 <$Subexception>
         9db64:	e3300000 	teq	r0, #0	; 0x0
         9db68:	0a000004 	beq	9db80 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x48c>
         9db6c:	e3a00001 	mov	r0, #1	; 0x1
         9db70:	e58d0108 	str	r0, [sp, #264]
         9db74:	e28d0088 	add	r0, sp, #136	; 0x88
         9db78:	eb68dbb7 	bl	1ad4a5c <DragBits::$__ct(void)>
         9db7c:	ea000001 	b	9db88 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x494>
         9db80:	e1a0000d 	mov	r0, sp
         9db84:	eb6d1172 	bl	1be2154 <$NextHandler>
         9db88:	e1a0000d 	mov	r0, sp
         9db8c:	eb6d0d49 	bl	1be10b8 <$ExitHandler>
         9db90:	e28dd058 	add	sp, sp, #88	; 0x58
         9db94:	e3a00000 	mov	r0, #0	; 0x0
         9db98:	e3a08000 	mov	r8, #0	; 0x0
         9db9c:	e58d0010 	str	r0, [sp, #16]	; fField16
         9dba0:	e58d000c 	str	r0, [sp, #12]	; fField12
         9dba4:	e3a00001 	mov	r0, #1	; 0x1
         9dba8:	e58d0000 	str	r0, [sp]
         9dbac:	e59b000c 	ldr	r0, [fp, #12]	; fField12
         9dbb0:	eb67cf3b 	bl	1a918a4 <TStrokePublic::$Done(void)>
         9dbb4:	e3300000 	teq	r0, #0	; 0x0
         9dbb8:	1a000132 	bne	9e088 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x994>
         9dbbc:	e59d10d4 	ldr	r1, [sp, #212]
         9dbc0:	e1a00441 	mov	r0, r1, asr #8
         9dbc4:	e58d0120 	str	r0, [sp, #288]
         9dbc8:	e59d10d0 	ldr	r1, [sp, #208]
         9dbcc:	e1a00441 	mov	r0, r1, asr #8
         9dbd0:	e58d011c 	str	r0, [sp, #284]
         9dbd4:	e59d10cc 	ldr	r1, [sp, #204]
         9dbd8:	e1a00441 	mov	r0, r1, asr #8
         9dbdc:	e58d0118 	str	r0, [sp, #280]
         9dbe0:	e59d00c8 	ldr	r0, [sp, #200]
         9dbe4:	e1a00440 	mov	r0, r0, asr #8
         9dbe8:	e58d0114 	str	r0, [sp, #276]
         9dbec:	e24d0064 	sub	r0, sp, #100	; 0x64
         9dbf0:	e58d0110 	str	r0, [sp, #272]
         9dbf4:	e28d201c 	add	r2, sp, #28	; 0x1c
         9dbf8:	e58d210c 	str	r2, [sp, #268]
         9dbfc:	e28d0068 	add	r0, sp, #104	; 0x68
         9dc00:	e58d0108 	str	r0, [sp, #264]
         9dc04:	e28d0004 	add	r0, sp, #4	; 0x4
         9dc08:	e59b100c 	ldr	r1, [fp, #12]	; fField12
         9dc0c:	eb67d76c 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
         9dc10:	e28d20f0 	add	r2, sp, #240	; 0xf0
         9dc14:	e28d10fc 	add	r1, sp, #252	; 0xfc
         9dc18:	e28d0004 	add	r0, sp, #4	; 0x4
         9dc1c:	eb691568 	bl	1ae31c4 <$PointOnClipboard(TPoint const &, TRect &, RefVar const &)>
         9dc20:	e59b102c 	ldr	r1, [fp, #44]	; fField44
         9dc24:	e5c10000 	strb	r0, [r1]
         9dc28:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9dc2c:	e5860000 	str	r0, [r6]
         9dc30:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9dc34:	e5870000 	str	r0, [r7]
         9dc38:	e5960002 	ldr	r0, [r6, #2]	; fField2
         9dc3c:	e1a00840 	mov	r0, r0, asr #16
         9dc40:	e59d10d4 	ldr	r1, [sp, #212]
         9dc44:	e1500001 	cmp	r0, r1
         9dc48:	b59d10d4 	ldrlt	r1, [sp, #212]
         9dc4c:	b5c61003 	strltb	r1, [r6, #3]
         9dc50:	b59d0120 	ldrlt	r0, [sp, #288]
         9dc54:	ba000005 	blt	9dc70 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x57c>
         9dc58:	e59d10d0 	ldr	r1, [sp, #208]
         9dc5c:	e1500001 	cmp	r0, r1
         9dc60:	da000003 	ble	9dc74 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x580>
         9dc64:	e59d10d0 	ldr	r1, [sp, #208]
         9dc68:	e5c61003 	strb	r1, [r6, #3]
         9dc6c:	e59d011c 	ldr	r0, [sp, #284]
         9dc70:	e5c60002 	strb	r0, [r6, #2]	; fField2
         9dc74:	e5960000 	ldr	r0, [r6]
         9dc78:	e1a00840 	mov	r0, r0, asr #16
         9dc7c:	e59d10cc 	ldr	r1, [sp, #204]
         9dc80:	e1500001 	cmp	r0, r1
         9dc84:	b59d10cc 	ldrlt	r1, [sp, #204]
         9dc88:	b5c61001 	strltb	r1, [r6, #1]
         9dc8c:	b59d0118 	ldrlt	r0, [sp, #280]
         9dc90:	ba000005 	blt	9dcac <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x5b8>
         9dc94:	e59d10c8 	ldr	r1, [sp, #200]
         9dc98:	e1500001 	cmp	r0, r1
         9dc9c:	da000003 	ble	9dcb0 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x5bc>
         9dca0:	e59d00c8 	ldr	r0, [sp, #200]
         9dca4:	e5c60001 	strb	r0, [r6, #1]
         9dca8:	e59d0114 	ldr	r0, [sp, #276]
         9dcac:	e5c60000 	strb	r0, [r6]
         9dcb0:	e5da0000 	ldrb	r0, [sl]
         9dcb4:	e3300000 	teq	r0, #0	; 0x0
         9dcb8:	1a000006 	bne	9dcd8 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x5e4>
         9dcbc:	e28d10e0 	add	r1, sp, #224	; 0xe0
         9dcc0:	e1a00007 	mov	r0, r7
         9dcc4:	eb03ed3e 	bl	1991c4 <CheapDistance__FRC6TPointT1>
         9dcc8:	e1500009 	cmp	r0, r9
         9dccc:	d3a00000 	movle	r0, #0	; 0x0
         9dcd0:	c3a00001 	movgt	r0, #1	; 0x1
         9dcd4:	e5ca0000 	strb	r0, [sl]
         9dcd8:	e5da0000 	ldrb	r0, [sl]
         9dcdc:	e3300000 	teq	r0, #0	; 0x0
         9dce0:	15970000 	ldrne	r0, [r7]
         9dce4:	159d10bc 	ldrne	r1, [sp, #188]
         9dce8:	11300001 	teqne	r0, r1
         9dcec:	0a0000dd 	beq	9e068 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x974>
         9dcf0:	e59d00b8 	ldr	r0, [sp, #184]
         9dcf4:	e3300000 	teq	r0, #0	; 0x0
         9dcf8:	059d00b0 	ldreq	r0, [sp, #176]
         9dcfc:	03300000 	teqeq	r0, #0	; 0x0
         9dd00:	1a000024 	bne	9dd98 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x6a4>
         9dd04:	e3a00000 	mov	r0, #0	; 0x0
         9dd08:	e52d006c 	str	r0, [sp, -#108]!
         9dd0c:	e59d017c 	ldr	r0, [sp, #380]
         9dd10:	eb6c5317 	bl	1bb2974 <$setjmp>
         9dd14:	e3300000 	teq	r0, #0	; 0x0
         9dd18:	1a00000e 	bne	9dd58 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x664>
         9dd1c:	e1a0000d 	mov	r0, sp
         9dd20:	eb6d08d5 	bl	1be007c <$AddExceptionHandler>
         9dd24:	e1a02004 	mov	r2, r4
         9dd28:	e59d3170 	ldr	r3, [sp, #368]
         9dd2c:	e28d009c 	add	r0, sp, #156	; 0x9c
         9dd30:	e59b1004 	ldr	r1, [fp, #4]	; fField4
         9dd34:	eb690054 	bl	1adde8c <DragBits::$Constructor(TView *, TRect const *, unsigned char)>
         9dd38:	e59d0190 	ldr	r0, [sp, #400]
         9dd3c:	e28d1080 	add	r1, sp, #128	; 0x80
         9dd40:	e3a03000 	mov	r3, #0	; 0x0
         9dd44:	e3a02000 	mov	r2, #0	; 0x0
         9dd48:	eb6908be 	bl	1ae0048 <TBits::$CopyIntoBitmap(PixelMap *, long, Region **)>
         9dd4c:	e3a00001 	mov	r0, #1	; 0x1
         9dd50:	e58d0124 	str	r0, [sp, #292]
         9dd54:	ea00000c 	b	9dd8c <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x698>
         9dd58:	e59d0060 	ldr	r0, [sp, #96]
         9dd5c:	e59d1194 	ldr	r1, [sp, #404]
         9dd60:	e5911000 	ldr	r1, [r1]
         9dd64:	eb6d150a 	bl	1be3194 <$Subexception>
         9dd68:	e3300000 	teq	r0, #0	; 0x0
         9dd6c:	0a000004 	beq	9dd84 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x690>
         9dd70:	e3a00001 	mov	r0, #1	; 0x1
         9dd74:	e58d011c 	str	r0, [sp, #284]
         9dd78:	e28d009c 	add	r0, sp, #156	; 0x9c
         9dd7c:	eb68db36 	bl	1ad4a5c <DragBits::$__ct(void)>
         9dd80:	ea000001 	b	9dd8c <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x698>
         9dd84:	e1a0000d 	mov	r0, sp
         9dd88:	eb6d10f1 	bl	1be2154 <$NextHandler>
         9dd8c:	e1a0000d 	mov	r0, sp
         9dd90:	eb6d0cc8 	bl	1be10b8 <$ExitHandler>
         9dd94:	e28dd06c 	add	sp, sp, #108	; 0x6c
         9dd98:	e24dd004 	sub	sp, sp, #4	; 0x4
         9dd9c:	e5961002 	ldr	r1, [r6, #2]	; fField2
         9dda0:	e1a01821 	mov	r1, r1, lsr #16
         9dda4:	e59d00e4 	ldr	r0, [sp, #228]
         9dda8:	e0410000 	sub	r0, r1, r0
         9ddac:	e1a00800 	mov	r0, r0, lsl #16
         9ddb0:	e1a00840 	mov	r0, r0, asr #16
         9ddb4:	e5961000 	ldr	r1, [r6]
         9ddb8:	e1a01821 	mov	r1, r1, lsr #16
         9ddbc:	e59d20e6 	ldr	r2, [sp, #230]
         9ddc0:	e0411002 	sub	r1, r1, r2
         9ddc4:	e1a01801 	mov	r1, r1, lsl #16
         9ddc8:	e1a01841 	mov	r1, r1, asr #16
         9ddcc:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ddd0:	e5cd0003 	strb	r0, [sp, #3]
         9ddd4:	e1a00440 	mov	r0, r0, asr #8
         9ddd8:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         9dddc:	e5cd1001 	strb	r1, [sp, #1]
         9dde0:	e1a00441 	mov	r0, r1, asr #8
         9dde4:	e5cd0000 	strb	r0, [sp]
         9dde8:	e49d0004 	ldr	r0, [sp], #4	; fField4
         9ddec:	e3380000 	teq	r8, #0	; 0x0
         9ddf0:	e58d0000 	str	r0, [sp]
         9ddf4:	0a000003 	beq	9de08 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x714>
         9ddf8:	e1a0200d 	mov	r2, sp
         9ddfc:	e1a01005 	mov	r1, r5
         9de00:	e1a00008 	mov	r0, r8
         9de04:	eb68ba1a 	bl	1acc674 <TView::$AlignDragPtToGrid(TDragInfo const &, TPoint *)>
         9de08:	e24dd008 	sub	sp, sp, #8	; 0x8
         9de0c:	e8945000 	ldmia	r4, {ip, lr}
         9de10:	e88d5000 	stmia	sp, {ip, lr}
         9de14:	e24dd004 	sub	sp, sp, #4	; 0x4
         9de18:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         9de1c:	e58d0000 	str	r0, [sp]
         9de20:	e28d0004 	add	r0, sp, #4	; 0x4
         9de24:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         9de28:	e1a01841 	mov	r1, r1, asr #16
         9de2c:	e59d2000 	ldr	r2, [sp]
         9de30:	e1a02842 	mov	r2, r2, asr #16
         9de34:	eb6aceab 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         9de38:	e28dd004 	add	sp, sp, #4	; 0x4
         9de3c:	eb6d52b7 	bl	1bf2920 <$Ticks(void)>
         9de40:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         9de44:	e0400001 	sub	r0, r0, r1
         9de48:	e3500002 	cmp	r0, #2	; 0x2
         9de4c:	9a000083 	bls	9e060 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x96c>
         9de50:	e24dd008 	sub	sp, sp, #8	; 0x8
         9de54:	e28d00ec 	add	r0, sp, #236	; 0xec
         9de58:	e8905000 	ldmia	r0, {ip, lr}
         9de5c:	e88d5000 	stmia	sp, {ip, lr}
         9de60:	e28d1008 	add	r1, sp, #8	; 0x8
         9de64:	e1a0000d 	mov	r0, sp
         9de68:	eb681d08 	bl	1aa5290 <TRect::$Union(TRect const &)>
         9de6c:	e3a01000 	mov	r1, #0	; 0x0
         9de70:	e3a00000 	mov	r0, #0	; 0x0
         9de74:	eb6ab9e7 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         9de78:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         9de7c:	e3300000 	teq	r0, #0	; 0x0
         9de80:	0a000008 	beq	9dea8 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x7b4>
         9de84:	e28d201c 	add	r2, sp, #28	; 0x1c
         9de88:	e1a01005 	mov	r1, r5
         9de8c:	e1a00008 	mov	r0, r8
         9de90:	e3a03000 	mov	r3, #0	; 0x0
         9de94:	e598c000 	ldr	ip, [r8]
         9de98:	e1a0e00f 	mov	lr, pc
         9de9c:	e28cfe11 	add	pc, ip, #272	; 0x110
         9dea0:	e3a00000 	mov	r0, #0	; 0x0
         9dea4:	e58d0020 	str	r0, [sp, #32]	; fField32
         9dea8:	e59d00c4 	ldr	r0, [sp, #196]
         9deac:	e3300000 	teq	r0, #0	; 0x0
         9deb0:	1a000023 	bne	9df44 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x850>
         9deb4:	e3a03000 	mov	r3, #0	; 0x0
         9deb8:	e92d0008 	stmdb	sp!, {r3}
         9debc:	e59d0120 	ldr	r0, [sp, #288]
         9dec0:	e28d20f0 	add	r2, sp, #240	; 0xf0
         9dec4:	e1a01004 	mov	r1, r4
         9dec8:	eb67ce83 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         9decc:	e28dd004 	add	sp, sp, #4	; 0x4
         9ded0:	e3a03000 	mov	r3, #0	; 0x0
         9ded4:	e92d0008 	stmdb	sp!, {r3}
         9ded8:	e1a02004 	mov	r2, r4
         9dedc:	e59d0120 	ldr	r0, [sp, #288]
         9dee0:	e28d100c 	add	r1, sp, #12	; 0xc
         9dee4:	eb67c21a 	bl	1a8e754 <TBits::$CopyFromScreen(TRect const &, TRect const &, long, Region **)>
         9dee8:	e28dd004 	add	sp, sp, #4	; 0x4
         9deec:	e3a03000 	mov	r3, #0	; 0x0
         9def0:	e3a02003 	mov	r2, #3	; 0x3
         9def4:	e92d000c 	stmdb	sp!, {r2, r3}
         9def8:	e24dd004 	sub	sp, sp, #4	; 0x4
         9defc:	e1a0000d 	mov	r0, sp
         9df00:	eb6d4627 	bl	1bef7a4 <$GetPort(GrafPort **)>
         9df04:	e59d1000 	ldr	r1, [sp]
         9df08:	e59d212c 	ldr	r2, [sp, #300]
         9df0c:	e28dd004 	add	sp, sp, #4	; 0x4
         9df10:	e28d3010 	add	r3, sp, #16	; 0x10
         9df14:	e28d0030 	add	r0, sp, #48	; 0x30
         9df18:	eb6d4620 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
         9df1c:	e28dd008 	add	sp, sp, #8	; 0x8
         9df20:	e3a03000 	mov	r3, #0	; 0x0
         9df24:	e92d0008 	stmdb	sp!, {r3}
         9df28:	e59d013c 	ldr	r0, [sp, #316]
         9df2c:	e28d200c 	add	r2, sp, #12	; 0xc
         9df30:	e1a01004 	mov	r1, r4
         9df34:	e3a03001 	mov	r3, #1	; 0x1
         9df38:	eb67ce67 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         9df3c:	e28dd004 	add	sp, sp, #4	; 0x4
         9df40:	ea000018 	b	9dfa8 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x8b4>
         9df44:	e24dd010 	sub	sp, sp, #16	; 0x10
         9df48:	e1a0000d 	mov	r0, sp
         9df4c:	eb6ac61f 	bl	1b4f7d0 <$GetPenState(PenState *)>
         9df50:	eb6ad273 	bl	1b52924 <$PenNormal(void)>
         9df54:	e3a00002 	mov	r0, #2	; 0x2
         9df58:	eb6ac620 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
         9df5c:	eb6ad6a3 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
         9df60:	e3a01002 	mov	r1, #2	; 0x2
         9df64:	e3a00002 	mov	r0, #2	; 0x2
         9df68:	eb6ad26e 	bl	1b52928 <$PenSize__FlT1>
         9df6c:	e3a0000a 	mov	r0, #10	; 0xa
         9df70:	eb6ad26a 	bl	1b52920 <$PenMode(long)>
         9df74:	e59d0024 	ldr	r0, [sp, #36]	; fField36
         9df78:	e3300000 	teq	r0, #0	; 0x0
         9df7c:	1a000002 	bne	9df8c <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x898>
         9df80:	e28d00fc 	add	r0, sp, #252	; 0xfc
         9df84:	eb6ac604 	bl	1b4f79c <$FrameRect(Rect *)>
         9df88:	ea000001 	b	9df94 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x8a0>
         9df8c:	e3a00000 	mov	r0, #0	; 0x0
         9df90:	e58d0024 	str	r0, [sp, #36]	; fField36
         9df94:	e28d0018 	add	r0, sp, #24	; 0x18
         9df98:	eb6ac5ff 	bl	1b4f79c <$FrameRect(Rect *)>
         9df9c:	e1a0000d 	mov	r0, sp
         9dfa0:	eb6ad694 	bl	1b539f8 <$SetPenState(PenState *)>
         9dfa4:	e28dd010 	add	sp, sp, #16	; 0x10
         9dfa8:	e59b102c 	ldr	r1, [fp, #44]	; fField44
         9dfac:	e5d10000 	ldrb	r0, [r1]
         9dfb0:	e3300000 	teq	r0, #0	; 0x0
         9dfb4:	1a00001f 	bne	9e038 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x944>
         9dfb8:	e5970002 	ldr	r0, [r7, #2]	; fField2
         9dfbc:	e1a00840 	mov	r0, r0, asr #16
         9dfc0:	e59d10d6 	ldr	r1, [sp, #214]
         9dfc4:	e1500841 	cmp	r0, r1, asr #16
         9dfc8:	ba00001a 	blt	9e038 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x944>
         9dfcc:	e59d10da 	ldr	r1, [sp, #218]
         9dfd0:	e1500841 	cmp	r0, r1, asr #16
         9dfd4:	ca000017 	bgt	9e038 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x944>
         9dfd8:	e5970000 	ldr	r0, [r7]
         9dfdc:	e1a00840 	mov	r0, r0, asr #16
         9dfe0:	e59d10d4 	ldr	r1, [sp, #212]
         9dfe4:	e1500841 	cmp	r0, r1, asr #16
         9dfe8:	a59d10d8 	ldrge	r1, [sp, #216]
         9dfec:	a1a01841 	movge	r1, r1, asr #16
         9dff0:	a1510000 	cmpge	r1, r0
         9dff4:	ba00000f 	blt	9e038 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x944>
         9dff8:	e1a02007 	mov	r2, r7
         9dffc:	e1a01005 	mov	r1, r5
         9e000:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         9e004:	eb691465 	bl	1ae31a0 <TView::$TargetDrop(TDragInfo const &, TPoint const &)>
         9e008:	e1b08000 	movs	r8, r0
         9e00c:	0a000009 	beq	9e038 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x944>
         9e010:	e1a02007 	mov	r2, r7
         9e014:	e1a01005 	mov	r1, r5
         9e018:	e1a00008 	mov	r0, r8
         9e01c:	e3a03001 	mov	r3, #1	; 0x1
         9e020:	e598c000 	ldr	ip, [r8]
         9e024:	e1a0e00f 	mov	lr, pc
         9e028:	e28cfe11 	add	pc, ip, #272	; 0x110
         9e02c:	e58d0020 	str	r0, [sp, #32]	; fField32
         9e030:	e5970000 	ldr	r0, [r7]
         9e034:	e58d001c 	str	r0, [sp, #28]	; fField28
         9e038:	e3a01000 	mov	r1, #0	; 0x0
         9e03c:	e3a00000 	mov	r0, #0	; 0x0
         9e040:	eb6ab976 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         9e044:	e28d10ec 	add	r1, sp, #236	; 0xec
         9e048:	e28d0008 	add	r0, sp, #8	; 0x8
         9e04c:	e8905000 	ldmia	r0, {ip, lr}
         9e050:	e8815000 	stmia	r1, {ip, lr}
         9e054:	eb6d5231 	bl	1bf2920 <$Ticks(void)>
         9e058:	e58d0024 	str	r0, [sp, #36]	; fField36
         9e05c:	e28dd008 	add	sp, sp, #8	; 0x8
         9e060:	e28dd00c 	add	sp, sp, #12	; 0xc
         9e064:	ea000001 	b	9e070 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x97c>
         9e068:	e3a00001 	mov	r0, #1	; 0x1
         9e06c:	eb681ca1 	bl	1aa52f8 <$Wait(unsigned long)>
         9e070:	e5970000 	ldr	r0, [r7]
         9e074:	e58d00bc 	str	r0, [sp, #188]
         9e078:	e59b000c 	ldr	r0, [fp, #12]	; fField12
         9e07c:	eb67ce08 	bl	1a918a4 <TStrokePublic::$Done(void)>
         9e080:	e3300000 	teq	r0, #0	; 0x0
         9e084:	0afffede 	beq	9dc04 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x510>
         9e088:	e59d00b4 	ldr	r0, [sp, #180]
         9e08c:	e3300000 	teq	r0, #0	; 0x0
         9e090:	159d0014 	ldrne	r0, [sp, #20]	; fField20
         9e094:	1b6d0c05 	blne	1be10b0 <$DisposHandle>
         9e098:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         9e09c:	e3300000 	teq	r0, #0	; 0x0
         9e0a0:	0a000006 	beq	9e0c0 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x9cc>
         9e0a4:	e28d2008 	add	r2, sp, #8	; 0x8
         9e0a8:	e1a01005 	mov	r1, r5
         9e0ac:	e1a00008 	mov	r0, r8
         9e0b0:	e3a03000 	mov	r3, #0	; 0x0
         9e0b4:	e598c000 	ldr	ip, [r8]
         9e0b8:	e1a0e00f 	mov	lr, pc
         9e0bc:	e28cfe11 	add	pc, ip, #272	; 0x110
         9e0c0:	e5da0000 	ldrb	r0, [sl]
         9e0c4:	e3300000 	teq	r0, #0	; 0x0
         9e0c8:	0a000003 	beq	9e0dc <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0x9e8>
         9e0cc:	e28d10d8 	add	r1, sp, #216	; 0xd8
         9e0d0:	e59f00c8 	ldr	r0, [pc, #c8]	; 9e1a0 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0xaac>
         9e0d4:	e5900000 	ldr	r0, [r0]
         9e0d8:	eb681435 	bl	1aa31b4 <TRootView::$SmartInvalidate(TRect const &)>
         9e0dc:	eb6ad210 	bl	1b52924 <$PenNormal(void)>
         9e0e0:	e59d10e2 	ldr	r1, [sp, #226]
         9e0e4:	e5960002 	ldr	r0, [r6, #2]	; fField2
         9e0e8:	e1a00840 	mov	r0, r0, asr #16
         9e0ec:	e0701841 	rsbs	r1, r0, r1, asr #16
         9e0f0:	42611000 	rsbmi	r1, r1, #0	; 0x0
         9e0f4:	e1a02809 	mov	r2, r9, lsl #16
         9e0f8:	e1a02842 	mov	r2, r2, asr #16
         9e0fc:	e1510002 	cmp	r1, r2
         9e100:	ca000008 	bgt	9e128 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0xa34>
         9e104:	e59d10e0 	ldr	r1, [sp, #224]
         9e108:	e1a01841 	mov	r1, r1, asr #16
         9e10c:	e5963000 	ldr	r3, [r6]
         9e110:	e0511843 	subs	r1, r1, r3, asr #16
         9e114:	42611000 	rsbmi	r1, r1, #0	; 0x0
         9e118:	e1510002 	cmp	r1, r2
         9e11c:	d3a08000 	movle	r8, #0	; 0x0
         9e120:	d5ca8000 	strleb	r8, [sl]
         9e124:	da000054 	ble	9e27c <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0xb88>
         9e128:	e59b102c 	ldr	r1, [fp, #44]	; fField44
         9e12c:	e5d11000 	ldrb	r1, [r1]
         9e130:	e3310000 	teq	r1, #0	; 0x0
         9e134:	0a000022 	beq	9e1c4 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0xad0>
         9e138:	e3a08000 	mov	r8, #0	; 0x0
         9e13c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         9e140:	e1a01841 	mov	r1, r1, asr #16
         9e144:	e59d00fc 	ldr	r0, [sp, #252]
         9e148:	e1510840 	cmp	r1, r0, asr #16
         9e14c:	d59d00fe 	ldrle	r0, [sp, #254]
         9e150:	d2400005 	suble	r0, r0, #5	; 0x5
         9e154:	da00000d 	ble	9e190 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0xa9c>
         9e158:	e59d1006 	ldr	r1, [sp, #6]
         9e15c:	e1a01841 	mov	r1, r1, asr #16
         9e160:	e59d00fe 	ldr	r0, [sp, #254]
         9e164:	e1510840 	cmp	r1, r0, asr #16
         9e168:	d59d00fc 	ldrle	r0, [sp, #252]
         9e16c:	d2400005 	suble	r0, r0, #5	; 0x5
         9e170:	da00000d 	ble	9e1ac <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0xab8>
         9e174:	e59d0100 	ldr	r0, [sp, #256]
         9e178:	e1a00840 	mov	r0, r0, asr #16
         9e17c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         9e180:	e1500841 	cmp	r0, r1, asr #16
         9e184:	ca000006 	bgt	9e1a4 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0xab0>
         9e188:	e59d0102 	ldr	r0, [sp, #258]
         9e18c:	e2800005 	add	r0, r0, #5	; 0x5
         9e190:	e5c70001 	strb	r0, [r7, #1]
         9e194:	e1a00440 	mov	r0, r0, asr #8
         9e198:	e5c70000 	strb	r0, [r7]
         9e19c:	ea000005 	b	9e1b8 <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0xac4>
         9e1a0:	0c101934 	ldceq	9, cr1, [r0], -#208
         9e1a4:	e59d0100 	ldr	r0, [sp, #256]
         9e1a8:	e2800005 	add	r0, r0, #5	; 0x5
         9e1ac:	e5c70003 	strb	r0, [r7, #3]
         9e1b0:	e1a00440 	mov	r0, r0, asr #8
         9e1b4:	e5c70002 	strb	r0, [r7, #2]	; fField2
         9e1b8:	e5970000 	ldr	r0, [r7]
         9e1bc:	e5860000 	str	r0, [r6]
         9e1c0:	ea00002d 	b	9e27c <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0xb88>
         9e1c4:	e3380000 	teq	r8, #0	; 0x0
         9e1c8:	0a00002b 	beq	9e27c <TView::Drag(TDragInfo const &, TStrokePublic *, TRect const &, TRect const *, TRect const *, unsigned char, TPoint *, TPoint *, unsigned char *, unsigned char *)+0xb88>
         9e1cc:	e24dd004 	sub	sp, sp, #4	; 0x4
         9e1d0:	e59d10e4 	ldr	r1, [sp, #228]
         9e1d4:	e0400001 	sub	r0, r0, r1
         9e1d8:	e1a00800 	mov	r0, r0, lsl #16
         9e1dc:	e1a00840 	mov	r0, r0, asr #16
         9e1e0:	e5961000 	ldr	r1, [r6]
         9e1e4:	e1a01821 	mov	r1, r1, lsr #16
         9e1e8:	e59d20e6 	ldr	r2, [sp, #230]
         9e1ec:	e0411002 	sub	r1, r1, r2
         9e1f0:	e1a01801 	mov	r1, r1, lsl #16
         9e1f4:	e1a01841 	mov	r1, r1, asr #16
         9e1f8:	e24dd004 	sub	sp, sp, #4	; 0x4
         9e1fc:	e5cd0003 	strb	r0, [sp, #3]
         9e200:	e1a00440 	mov	r0, r0, asr #8
         9e204:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         9e208:	e5cd1001 	strb	r1, [sp, #1]
         9e20c:	e1a00441 	mov	r0, r1, asr #8
         9e210:	e5cd0000 	strb	r0, [sp]
         9e214:	e49d0004 	ldr	r0, [sp], #4	; fField4
         9e218:	e58d0000 	str	r0, [sp]
         9e21c:	e1a0200d 	mov	r2, sp
         9e220:	e1a01005 	mov	r1, r5
         9e224:	e1a00008 	mov	r0, r8
         9e228:	eb68b911 	bl	1acc674 <TView::$AlignDragPtToGrid(TDragInfo const &, TPoint *)>
         9e22c:	e59d00e4 	ldr	r0, [sp, #228]
         9e230:	e59d1000 	ldr	r1, [sp]
         9e234:	e0800001 	add	r0, r0, r1
         9e238:	e1a00800 	mov	r0, r0, lsl #16
         9e23c:	e1a00840 	mov	r0, r0, asr #16
         9e240:	e59d10e6 	ldr	r1, [sp, #230]
         9e244:	e41d2004 	ldr	r2, [sp], -#4	; fField4
         9e248:	e1a02822 	mov	r2, r2, lsr #16
         9e24c:	e0811002 	add	r1, r1, r2
         9e250:	e1a01801 	mov	r1, r1, lsl #16
         9e254:	e1a01841 	mov	r1, r1, asr #16
         9e258:	e5cd0003 	strb	r0, [sp, #3]
         9e25c:	e1a00440 	mov	r0, r0, asr #8
         9e260:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         9e264:	e5cd1001 	strb	r1, [sp, #1]
         9e268:	e1a00441 	mov	r0, r1, asr #8
         9e26c:	e5cd0000 	strb	r0, [sp]
         9e270:	e59d0000 	ldr	r0, [sp]
         9e274:	e5860000 	str	r0, [r6]
         9e278:	e28dd008 	add	sp, sp, #8	; 0x8
         9e27c:	e28d0030 	add	r0, sp, #48	; 0x30
         9e280:	e3a01000 	mov	r1, #0	; 0x0
         9e284:	eb6cac81 	bl	1bc9490 <DragBits::$__dt(void)>
         9e288:	e59d00e8 	ldr	r0, [sp, #232]
         9e28c:	eb6c93ca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e290:	e59d00ec 	ldr	r0, [sp, #236]
         9e294:	eb6c93c8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e298:	e59d00f0 	ldr	r0, [sp, #240]
         9e29c:	eb6c93c6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e2a0:	e59d00f8 	ldr	r0, [sp, #248]
         9e2a4:	eb6c93c4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e2a8:	e1a00008 	mov	r0, r8
         9e2ac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::DrawDragBackground(TRect const &, unsigned char)
 * Address: 0009e3bc
 */
TView::DrawDragBackground(TRect const &, unsigned char) {
    /*
         9e3bc:	e1a0c00d 	mov	ip, sp
         9e3c0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9e3c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         9e3c8:	e1a05000 	mov	r5, r0
         9e3cc:	e1a04001 	mov	r4, r1
         9e3d0:	e20260ff 	and	r6, r2, #255	; 0xff
         9e3d4:	e1a00001 	mov	r0, r1
         9e3d8:	eb6ac0db 	bl	1b4e74c <$EraseRect(Rect *)>
         9e3dc:	e24dd004 	sub	sp, sp, #4	; 0x4
         9e3e0:	e3a00002 	mov	r0, #2	; 0x2
         9e3e4:	eb67f66c 	bl	1a9bd9c <$MakeArray(long)>
         9e3e8:	eb6c8f57 	bl	1bc214c <$AllocateRefHandle(long)>
         9e3ec:	e58d0000 	str	r0, [sp]
         9e3f0:	e1a00004 	mov	r0, r4
         9e3f4:	eb6d44e8 	bl	1bef79c <$ToObject(TRect const &)>
         9e3f8:	eb6c8f53 	bl	1bc214c <$AllocateRefHandle(long)>
         9e3fc:	e1a04000 	mov	r4, r0
         9e400:	e3a01000 	mov	r1, #0	; 0x0
         9e404:	e5902000 	ldr	r2, [r0]
         9e408:	e59d0000 	ldr	r0, [sp]
         9e40c:	e5900000 	ldr	r0, [r0]
         9e410:	eb6c9fd0 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9e414:	e1a00004 	mov	r0, r4
         9e418:	eb6c9367 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e41c:	e3360000 	teq	r6, #0	; 0x0
         9e420:	03a00002 	moveq	r0, #2	; 0x2
         9e424:	13a0001a 	movne	r0, #26	; 0x1a
         9e428:	eb6c8f47 	bl	1bc214c <$AllocateRefHandle(long)>
         9e42c:	e1a04000 	mov	r4, r0
         9e430:	e3a01001 	mov	r1, #1	; 0x1
         9e434:	e5902000 	ldr	r2, [r0]
         9e438:	e59d0000 	ldr	r0, [sp]
         9e43c:	e5900000 	ldr	r0, [r0]
         9e440:	eb6c9fc4 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9e444:	e1a00004 	mov	r0, r4
         9e448:	eb6c935b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e44c:	e3a03000 	mov	r3, #0	; 0x0
         9e450:	e92d0008 	stmdb	sp!, {r3}
         9e454:	e28d2004 	add	r2, sp, #4	; 0x4
         9e458:	e59f1028 	ldr	r1, [pc, #28]	; 9e488 <TView::DrawDragBackground(TRect const &, unsigned char)+0xcc>	; fField28
         9e45c:	e1a00005 	mov	r0, r5
         9e460:	e3a03001 	mov	r3, #1	; 0x1
         9e464:	eb6cb45d 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         9e468:	e28dd004 	add	sp, sp, #4	; 0x4
         9e46c:	e2500002 	subs	r0, r0, #2	; 0x2
         9e470:	13a00001 	movne	r0, #1	; 0x1
         9e474:	e20040ff 	and	r4, r0, #255	; 0xff
         9e478:	e59d0000 	ldr	r0, [sp]
         9e47c:	eb6c934e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e480:	e1a00004 	mov	r0, r4
         9e484:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         9e488:	00684f58 	rsbeq	r4, r8, r8, asr pc
    */
}

/**
 * Symbol: TView::DrawDragData(TRect const &)
 * Address: 0009e48c
 */
TView::DrawDragData(TRect const &) {
    /*
         9e48c:	e1a0c00d 	mov	ip, sp
         9e490:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9e494:	e24cb004 	sub	fp, ip, #4	; 0x4
         9e498:	e1a04000 	mov	r4, r0
         9e49c:	e1a05001 	mov	r5, r1
         9e4a0:	e24dd004 	sub	sp, sp, #4	; 0x4
         9e4a4:	e3a00001 	mov	r0, #1	; 0x1
         9e4a8:	eb67f63b 	bl	1a9bd9c <$MakeArray(long)>
         9e4ac:	eb6c8f26 	bl	1bc214c <$AllocateRefHandle(long)>
         9e4b0:	e58d0000 	str	r0, [sp]
         9e4b4:	e1a00005 	mov	r0, r5
         9e4b8:	eb6d44b7 	bl	1bef79c <$ToObject(TRect const &)>
         9e4bc:	eb6c8f22 	bl	1bc214c <$AllocateRefHandle(long)>
         9e4c0:	e1a05000 	mov	r5, r0
         9e4c4:	e3a01000 	mov	r1, #0	; 0x0
         9e4c8:	e5902000 	ldr	r2, [r0]
         9e4cc:	e59d0000 	ldr	r0, [sp]
         9e4d0:	e5900000 	ldr	r0, [r0]
         9e4d4:	eb6c9f9f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9e4d8:	e1a00005 	mov	r0, r5
         9e4dc:	eb6c9336 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e4e0:	e3a03000 	mov	r3, #0	; 0x0
         9e4e4:	e92d0008 	stmdb	sp!, {r3}
         9e4e8:	e28d2004 	add	r2, sp, #4	; 0x4
         9e4ec:	e59f1030 	ldr	r1, [pc, #30]	; 9e524 <TView::DrawDragData(TRect const &)+0x98>
         9e4f0:	e1a00004 	mov	r0, r4
         9e4f4:	e3a03001 	mov	r3, #1	; 0x1
         9e4f8:	eb6cb438 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         9e4fc:	e28dd004 	add	sp, sp, #4	; 0x4
         9e500:	e3300002 	teq	r0, #2	; 0x2
         9e504:	1a000003 	bne	9e518 <TView::DrawDragData(TRect const &)+0x8c>
         9e508:	e1a00004 	mov	r0, r4
         9e50c:	e5941000 	ldr	r1, [r4]
         9e510:	e1a0e00f 	mov	lr, pc
         9e514:	e281f088 	add	pc, r1, #136	; 0x88
         9e518:	e59d0000 	ldr	r0, [sp]
         9e51c:	eb6c9326 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e520:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         9e524:	00684f60 	rsbeq	r4, r8, r0, ror #30
    */
}

/**
 * Symbol: TView::GetClipboardDataBits(TRect *)
 * Address: 0009e528
 */
TView::GetClipboardDataBits(TRect *) {
    /*
         9e528:	e1a0c00d 	mov	ip, sp
         9e52c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9e530:	e24cb004 	sub	fp, ip, #4	; 0x4
         9e534:	e1a05000 	mov	r5, r0
         9e538:	e1a04001 	mov	r4, r1
         9e53c:	e24dd020 	sub	sp, sp, #32	; 0x20
         9e540:	e28d1004 	add	r1, sp, #4	; 0x4
         9e544:	e1a00004 	mov	r0, r4
         9e548:	eb691320 	bl	1ae31d0 <$AllocateClipboardBits__10TClipboardSFRC5TRectP8PixelMap>
         9e54c:	eb6c8efe 	bl	1bc214c <$AllocateRefHandle(long)>
         9e550:	e58d0000 	str	r0, [sp]
         9e554:	e5900000 	ldr	r0, [r0]
         9e558:	e3a06000 	mov	r6, #0	; 0x0
         9e55c:	e3300002 	teq	r0, #2	; 0x2
         9e560:	0a000033 	beq	9e634 <TView::GetClipboardDataBits(TRect *)+0x10c>
         9e564:	e24dd004 	sub	sp, sp, #4	; 0x4
         9e568:	e28d1004 	add	r1, sp, #4	; 0x4
         9e56c:	e1a0000d 	mov	r0, sp
         9e570:	eb6c8ad8 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         9e574:	e1a0000d 	mov	r0, sp
         9e578:	eb6c8ee5 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         9e57c:	e58d0008 	str	r0, [sp, #8]	; fField8
         9e580:	e24dd034 	sub	sp, sp, #52	; 0x34
         9e584:	e1a0000d 	mov	r0, sp
         9e588:	eb67a7a2 	bl	1a88418 <TBits::$__ct(void)>
         9e58c:	e52d606c 	str	r6, [sp, -#108]!
         9e590:	e3a06000 	mov	r6, #0	; 0x0
         9e594:	e28d0008 	add	r0, sp, #8	; 0x8
         9e598:	eb6c50f5 	bl	1bb2974 <$setjmp>
         9e59c:	e3300000 	teq	r0, #0	; 0x0
         9e5a0:	1a00000f 	bne	9e5e4 <TView::GetClipboardDataBits(TRect *)+0xbc>
         9e5a4:	e1a0000d 	mov	r0, sp
         9e5a8:	eb6d06b3 	bl	1be007c <$AddExceptionHandler>
         9e5ac:	e28d10a8 	add	r1, sp, #168	; 0xa8
         9e5b0:	e28d006c 	add	r0, sp, #108	; 0x6c
         9e5b4:	eb68bc4d 	bl	1acd6f0 <TBits::$Constructor(PixelMap const &)>
         9e5b8:	e28d006c 	add	r0, sp, #108	; 0x6c
         9e5bc:	e5941000 	ldr	r1, [r4]
         9e5c0:	eb67afe5 	bl	1a8a55c <TBits::$BeginDrawing(TPoint)>
         9e5c4:	e1a01004 	mov	r1, r4
         9e5c8:	e1a00005 	mov	r0, r5
         9e5cc:	e5952000 	ldr	r2, [r5]
         9e5d0:	e1a0e00f 	mov	lr, pc
         9e5d4:	e282f0d8 	add	pc, r2, #216	; 0xd8
         9e5d8:	e1a0000d 	mov	r0, sp
         9e5dc:	eb6d0ab5 	bl	1be10b8 <$ExitHandler>
         9e5e0:	ea000000 	b	9e5e8 <TView::GetClipboardDataBits(TRect *)+0xc0>
         9e5e4:	e3a06001 	mov	r6, #1	; 0x1
         9e5e8:	e28d006c 	add	r0, sp, #108	; 0x6c
         9e5ec:	eb680698 	bl	1aa0054 <TBits::$RestorePort(void)>
         9e5f0:	e3360000 	teq	r6, #0	; 0x0
         9e5f4:	0a000005 	beq	9e610 <TView::GetClipboardDataBits(TRect *)+0xe8>
         9e5f8:	e28d00a0 	add	r0, sp, #160	; 0xa0
         9e5fc:	e3a01000 	mov	r1, #0	; 0x0
         9e600:	eb6c8ebe 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         9e604:	e3360000 	teq	r6, #0	; 0x0
         9e608:	11a0000d 	movne	r0, sp
         9e60c:	1b6d0ed0 	blne	1be2154 <$NextHandler>
         9e610:	e28dd06c 	add	sp, sp, #108	; 0x6c
         9e614:	e1a0000d 	mov	r0, sp
         9e618:	e3a01000 	mov	r1, #0	; 0x0
         9e61c:	eb67a795 	bl	1a88478 <TBits::$__dt(void)>
         9e620:	e28dd034 	add	sp, sp, #52	; 0x34
         9e624:	e1a0000d 	mov	r0, sp
         9e628:	e3a01000 	mov	r1, #0	; 0x0
         9e62c:	eb6c8eb3 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         9e630:	e28dd004 	add	sp, sp, #4	; 0x4
         9e634:	e59d0000 	ldr	r0, [sp]
         9e638:	e5904000 	ldr	r4, [r0]
         9e63c:	eb6c92de 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e640:	e1a00004 	mov	r0, r4
         9e644:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TView::AddDragInfo(TDragInfo *)
 * Address: 0009e648
 */
TView::AddDragInfo(TDragInfo *) {
    /*
         9e648:	e1a0c00d 	mov	ip, sp
         9e64c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9e650:	e24cb004 	sub	fp, ip, #4	; 0x4
         9e654:	e1a04000 	mov	r4, r0
         9e658:	e1a05001 	mov	r5, r1
         9e65c:	e24dd008 	sub	sp, sp, #8	; 0x8
         9e660:	e3a00001 	mov	r0, #1	; 0x1
         9e664:	eb67f5cc 	bl	1a9bd9c <$MakeArray(long)>
         9e668:	eb6c8eb7 	bl	1bc214c <$AllocateRefHandle(long)>
         9e66c:	e58d0000 	str	r0, [sp]
         9e670:	e5950000 	ldr	r0, [r5]
         9e674:	e5900000 	ldr	r0, [r0]
         9e678:	eb6c8eb3 	bl	1bc214c <$AllocateRefHandle(long)>
         9e67c:	e1a05000 	mov	r5, r0
         9e680:	e3a01000 	mov	r1, #0	; 0x0
         9e684:	e5902000 	ldr	r2, [r0]
         9e688:	e59d0000 	ldr	r0, [sp]
         9e68c:	e5900000 	ldr	r0, [r0]
         9e690:	eb6c9f30 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9e694:	e1a00005 	mov	r0, r5
         9e698:	eb6c92c7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e69c:	e28d3004 	add	r3, sp, #4	; 0x4
         9e6a0:	e92d0008 	stmdb	sp!, {r3}
         9e6a4:	e28d2004 	add	r2, sp, #4	; 0x4
         9e6a8:	e59f1040 	ldr	r1, [pc, #40]	; 9e6f0 <TView::AddDragInfo(TDragInfo *)+0xa8>	; fField40
         9e6ac:	e1a00004 	mov	r0, r4
         9e6b0:	e3a03001 	mov	r3, #1	; 0x1
         9e6b4:	eb6cb3c9 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         9e6b8:	e28dd004 	add	sp, sp, #4	; 0x4
         9e6bc:	eb6c8ea2 	bl	1bc214c <$AllocateRefHandle(long)>
         9e6c0:	e5dd1004 	ldrb	r1, [sp, #4]	; fField4
         9e6c4:	e3310000 	teq	r1, #0	; 0x0
         9e6c8:	15901000 	ldrne	r1, [r0]
         9e6cc:	13310002 	teqne	r1, #2	; 0x2
         9e6d0:	03a01000 	moveq	r1, #0	; 0x0
         9e6d4:	13a01001 	movne	r1, #1	; 0x1
         9e6d8:	e20140ff 	and	r4, r1, #255	; 0xff
         9e6dc:	eb6c92b6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e6e0:	e59d0000 	ldr	r0, [sp]
         9e6e4:	eb6c92b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e6e8:	e1a00004 	mov	r0, r4
         9e6ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         9e6f0:	00684f00 	rsbeq	r4, r8, r0, lsl #30
    */
}

/**
 * Symbol: TView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char)
 * Address: 0009e6f4
 */
TView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char) {
    /*
         9e6f4:	e1a0c00d 	mov	ip, sp
         9e6f8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         9e6fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         9e700:	e1a06000 	mov	r6, r0
         9e704:	e1a05001 	mov	r5, r1
         9e708:	e1a04002 	mov	r4, r2
         9e70c:	e20370ff 	and	r7, r3, #255	; 0xff
         9e710:	e24dd004 	sub	sp, sp, #4	; 0x4
         9e714:	e3a00003 	mov	r0, #3	; 0x3
         9e718:	eb67f59f 	bl	1a9bd9c <$MakeArray(long)>
         9e71c:	eb6c8e8a 	bl	1bc214c <$AllocateRefHandle(long)>
         9e720:	e58d0000 	str	r0, [sp]
         9e724:	e5950000 	ldr	r0, [r5]
         9e728:	e5900000 	ldr	r0, [r0]
         9e72c:	eb6c8e86 	bl	1bc214c <$AllocateRefHandle(long)>
         9e730:	e1a05000 	mov	r5, r0
         9e734:	e3a01000 	mov	r1, #0	; 0x0
         9e738:	e5902000 	ldr	r2, [r0]
         9e73c:	e59d0000 	ldr	r0, [sp]
         9e740:	e5900000 	ldr	r0, [r0]
         9e744:	eb6c9f03 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9e748:	e1a00005 	mov	r0, r5
         9e74c:	eb6c929a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e750:	e1a00004 	mov	r0, r4
         9e754:	eb00078f 	bl	a0598 <TClipboard::DrawDragData(TRect const &)+0x144>
         9e758:	eb6c8e7b 	bl	1bc214c <$AllocateRefHandle(long)>
         9e75c:	e1a04000 	mov	r4, r0
         9e760:	e3a01001 	mov	r1, #1	; 0x1
         9e764:	e5902000 	ldr	r2, [r0]
         9e768:	e59d0000 	ldr	r0, [sp]
         9e76c:	e5900000 	ldr	r0, [r0]
         9e770:	eb6c9ef8 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9e774:	e1a00004 	mov	r0, r4
         9e778:	eb6c928f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e77c:	e3370000 	teq	r7, #0	; 0x0
         9e780:	03a00002 	moveq	r0, #2	; 0x2
         9e784:	13a0001a 	movne	r0, #26	; 0x1a
         9e788:	eb6c8e6f 	bl	1bc214c <$AllocateRefHandle(long)>
         9e78c:	e1a04000 	mov	r4, r0
         9e790:	e3a01002 	mov	r1, #2	; 0x2
         9e794:	e5902000 	ldr	r2, [r0]
         9e798:	e59d0000 	ldr	r0, [sp]
         9e79c:	e5900000 	ldr	r0, [r0]
         9e7a0:	eb6c9eec 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9e7a4:	e1a00004 	mov	r0, r4
         9e7a8:	eb6c9283 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e7ac:	e3a03000 	mov	r3, #0	; 0x0
         9e7b0:	e92d0008 	stmdb	sp!, {r3}
         9e7b4:	e28d2004 	add	r2, sp, #4	; 0x4
         9e7b8:	e59f1028 	ldr	r1, [pc, #28]	; 9e7e8 <TView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char)+0xf4>	; fField28
         9e7bc:	e1a00006 	mov	r0, r6
         9e7c0:	e3a03001 	mov	r3, #1	; 0x1
         9e7c4:	eb6cb385 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         9e7c8:	e28dd004 	add	sp, sp, #4	; 0x4
         9e7cc:	e2500002 	subs	r0, r0, #2	; 0x2
         9e7d0:	13a00001 	movne	r0, #1	; 0x1
         9e7d4:	e20040ff 	and	r4, r0, #255	; 0xff
         9e7d8:	e59d0000 	ldr	r0, [sp]
         9e7dc:	eb6c9276 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e7e0:	e1a00004 	mov	r0, r4
         9e7e4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         9e7e8:	00684f50 	rsbeq	r4, r8, r0, asr pc
    */
}

/**
 * Symbol: TView::DoEditCommand(long)
 * Address: 0009e7ec
 */
TView::DoEditCommand(long) {
    /*
         9e7ec:	e1a0c00d 	mov	ip, sp
         9e7f0:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9e7f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         9e7f8:	e1a04000 	mov	r4, r0
         9e7fc:	e24dd008 	sub	sp, sp, #8	; 0x8
         9e800:	e1a0000d 	mov	r0, sp
         9e804:	e3a01000 	mov	r1, #0	; 0x0
         9e808:	eb68d896 	bl	1ad4a68 <TDragInfo::$__ct(long)>
         9e80c:	e3a089fe 	mov	r8, #4161536	; 0x3f8000
         9e810:	e2488501 	sub	r8, r8, #4194304	; 0x400000
         9e814:	e3e0607f 	mvn	r6, #127	; 0x7f
         9e818:	e3a07000 	mov	r7, #0	; 0x0
         9e81c:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
         9e820:	e59f509c 	ldr	r5, [pc, #9c]	; 9e8c4 <TView::DoEditCommand(long)+0xd8>
         9e824:	e3510004 	cmp	r1, #4	; 0x4
         9e828:	908ff101 	addls	pc, pc, r1, lsl #2
         9e82c:	ea000167 	b	9edd0 <TView::DoEditCommand(long)+0x5e4>
         9e830:	ea000024 	b	9e8c8 <TView::DoEditCommand(long)+0xdc>
         9e834:	ea00002e 	b	9e8f4 <TView::DoEditCommand(long)+0x108>
         9e838:	ea00006d 	b	9e9f4 <TView::DoEditCommand(long)+0x208>
         9e83c:	ea00006c 	b	9e9f4 <TView::DoEditCommand(long)+0x208>
         9e840:	e1a00004 	mov	r0, r4
         9e844:	e3a01051 	mov	r1, #81	; 0x51
         9e848:	e5942000 	ldr	r2, [r4]
         9e84c:	e1a0e00f 	mov	lr, pc
         9e850:	e282f004 	add	pc, r2, #4	; 0x4
         9e854:	e3300000 	teq	r0, #0	; 0x0
         9e858:	0a000005 	beq	9e874 <TView::DoEditCommand(long)+0x88>
         9e85c:	e1a00004 	mov	r0, r4
         9e860:	e5941000 	ldr	r1, [r4]
         9e864:	e1a0e00f 	mov	lr, pc
         9e868:	e281fd05 	add	pc, r1, #320	; 0x140
         9e86c:	e3300000 	teq	r0, #0	; 0x0
         9e870:	1a000000 	bne	9e878 <TView::DoEditCommand(long)+0x8c>
         9e874:	e1a00004 	mov	r0, r4
         9e878:	e3a01000 	mov	r1, #0	; 0x0
         9e87c:	e5902000 	ldr	r2, [r0]
         9e880:	e1a0e00f 	mov	lr, pc
         9e884:	e282f054 	add	pc, r2, #84	; 0x54
         9e888:	e5940008 	ldr	r0, [r4, #8]	; fField8
         9e88c:	e3100082 	tst	r0, #130	; 0x82
         9e890:	1a00014e 	bne	9edd0 <TView::DoEditCommand(long)+0x5e4>
         9e894:	e1a0100d 	mov	r1, sp
         9e898:	e1a00004 	mov	r0, r4
         9e89c:	e5942000 	ldr	r2, [r4]
         9e8a0:	e1a0e00f 	mov	lr, pc
         9e8a4:	e282f0c8 	add	pc, r2, #200	; 0xc8
         9e8a8:	e59d0000 	ldr	r0, [sp]
         9e8ac:	e5900000 	ldr	r0, [r0]
         9e8b0:	eb6c9a7d 	bl	1bc52ac <$Length(long)>
         9e8b4:	e24dd004 	sub	sp, sp, #4	; 0x4
         9e8b8:	e2506001 	subs	r6, r0, #1	; 0x1
         9e8bc:	4a000142 	bmi	9edcc <TView::DoEditCommand(long)+0x5e0>
         9e8c0:	ea000132 	b	9ed90 <TView::DoEditCommand(long)+0x5a4>
         9e8c4:	0c101934 	ldceq	9, cr1, [r0], -#208
         9e8c8:	e1a00004 	mov	r0, r4
         9e8cc:	e3a01001 	mov	r1, #1	; 0x1
         9e8d0:	e5942000 	ldr	r2, [r4]
         9e8d4:	e1a0e00f 	mov	lr, pc
         9e8d8:	e282f06c 	add	pc, r2, #108	; 0x6c
         9e8dc:	e1a00004 	mov	r0, r4
         9e8e0:	e3a01004 	mov	r1, #4	; 0x4
         9e8e4:	e5942000 	ldr	r2, [r4]
         9e8e8:	e1a0e00f 	mov	lr, pc
         9e8ec:	e282f06c 	add	pc, r2, #108	; 0x6c
         9e8f0:	ea000136 	b	9edd0 <TView::DoEditCommand(long)+0x5e4>
         9e8f4:	e24dd008 	sub	sp, sp, #8	; 0x8
         9e8f8:	e5cd8005 	strb	r8, [sp, #5]
         9e8fc:	e5cd6004 	strb	r6, [sp, #4]	; fField4
         9e900:	e5cd8001 	strb	r8, [sp, #1]
         9e904:	e5cd6000 	strb	r6, [sp]
         9e908:	e28d1008 	add	r1, sp, #8	; 0x8
         9e90c:	e1a00004 	mov	r0, r4
         9e910:	e5942000 	ldr	r2, [r4]
         9e914:	e1a0e00f 	mov	lr, pc
         9e918:	e282f0c8 	add	pc, r2, #200	; 0xc8
         9e91c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         9e920:	e5900000 	ldr	r0, [r0]
         9e924:	eb6c8e08 	bl	1bc214c <$AllocateRefHandle(long)>
         9e928:	e1a06000 	mov	r6, r0
         9e92c:	e5900000 	ldr	r0, [r0]
         9e930:	eb6c9a5d 	bl	1bc52ac <$Length(long)>
         9e934:	e3500000 	cmp	r0, #0	; 0x0
         9e938:	da000028 	ble	9e9e0 <TView::DoEditCommand(long)+0x1f4>
         9e93c:	e24dd008 	sub	sp, sp, #8	; 0x8
         9e940:	e1a01007 	mov	r1, r7
         9e944:	e5960000 	ldr	r0, [r6]
         9e948:	eb6c9641 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         9e94c:	eb6c8dfe 	bl	1bc214c <$AllocateRefHandle(long)>
         9e950:	e58d0004 	str	r0, [sp, #4]	; fField4
         9e954:	e59f1094 	ldr	r1, [pc, #94]	; 9e9f0 <TView::DoEditCommand(long)+0x204>
         9e958:	e28d0004 	add	r0, sp, #4	; 0x4
         9e95c:	e3a02000 	mov	r2, #0	; 0x0
         9e960:	eb6c9640 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         9e964:	eb6c8df8 	bl	1bc214c <$AllocateRefHandle(long)>
         9e968:	e58d0000 	str	r0, [sp]
         9e96c:	e5900000 	ldr	r0, [r0]
         9e970:	e3300002 	teq	r0, #2	; 0x2
         9e974:	128d1008 	addne	r1, sp, #8	; 0x8
         9e978:	11a0000d 	movne	r0, sp
         9e97c:	1b67d83d 	blne	1a94a78 <$FromObject(RefVar const &, TRect &)>
         9e980:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         9e984:	e1a00840 	mov	r0, r0, asr #16
         9e988:	e3700902 	cmn	r0, #32768	; 0x8000
         9e98c:	1a000004 	bne	9e9a4 <TView::DoEditCommand(long)+0x1b8>
         9e990:	e28d1008 	add	r1, sp, #8	; 0x8
         9e994:	e1a00004 	mov	r0, r4
         9e998:	e5942000 	ldr	r2, [r4]
         9e99c:	e1a0e00f 	mov	lr, pc
         9e9a0:	e282f0b8 	add	pc, r2, #184	; 0xb8
         9e9a4:	e1a00004 	mov	r0, r4
         9e9a8:	e3a01000 	mov	r1, #0	; 0x0
         9e9ac:	e5942000 	ldr	r2, [r4]
         9e9b0:	e1a0e00f 	mov	lr, pc
         9e9b4:	e282f054 	add	pc, r2, #84	; 0x54
         9e9b8:	e28d2008 	add	r2, sp, #8	; 0x8
         9e9bc:	e1a01004 	mov	r1, r4
         9e9c0:	e28d0010 	add	r0, sp, #16	; 0x10
         9e9c4:	e3a03000 	mov	r3, #0	; 0x0
         9e9c8:	eb691201 	bl	1ae31d4 <$NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint>
         9e9cc:	e59d0000 	ldr	r0, [sp]
         9e9d0:	eb6c91f9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e9d4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9e9d8:	eb6c91f7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e9dc:	e28dd008 	add	sp, sp, #8	; 0x8
         9e9e0:	e1a00006 	mov	r0, r6
         9e9e4:	eb6c91f4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9e9e8:	e28dd008 	add	sp, sp, #8	; 0x8
         9e9ec:	ea0000f7 	b	9edd0 <TView::DoEditCommand(long)+0x5e4>
         9e9f0:	00682190 	streqb	r2, [r8], -#16	; fField16
         9e9f4:	e5950000 	ldr	r0, [r5]
         9e9f8:	eb691e4d 	bl	1ae6334 <TRootView::$GetClipboard(void)>
         9e9fc:	e1a07000 	mov	r7, r0
         9ea00:	e5950000 	ldr	r0, [r5]
         9ea04:	eb691e4b 	bl	1ae6338 <TRootView::$GetClipboardIcon(void)>
         9ea08:	e1a0a000 	mov	sl, r0
         9ea0c:	e3370000 	teq	r7, #0	; 0x0
         9ea10:	133a0000 	teqne	sl, #0	; 0x0
         9ea14:	0a0000ed 	beq	9edd0 <TView::DoEditCommand(long)+0x5e4>
         9ea18:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ea1c:	e3a09001 	mov	r9, #1	; 0x1
         9ea20:	e59f135c 	ldr	r1, [pc, #35c]	; 9ed84 <TView::DoEditCommand(long)+0x598>
         9ea24:	e1a00004 	mov	r0, r4
         9ea28:	eb6caec6 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         9ea2c:	eb6c8dc6 	bl	1bc214c <$AllocateRefHandle(long)>
         9ea30:	e58d0000 	str	r0, [sp]
         9ea34:	e5900000 	ldr	r0, [r0]
         9ea38:	e3300002 	teq	r0, #2	; 0x2
         9ea3c:	0a000006 	beq	9ea5c <TView::DoEditCommand(long)+0x270>
         9ea40:	e59f1340 	ldr	r1, [pc, #340]	; 9ed88 <TView::DoEditCommand(long)+0x59c>
         9ea44:	e1a0000d 	mov	r0, sp
         9ea48:	e3a02000 	mov	r2, #0	; 0x0
         9ea4c:	eb6c9605 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         9ea50:	e2500002 	subs	r0, r0, #2	; 0x2
         9ea54:	13a00001 	movne	r0, #1	; 0x1
         9ea58:	e20090ff 	and	r9, r0, #255	; 0xff
         9ea5c:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ea60:	e3a08000 	mov	r8, #0	; 0x0
         9ea64:	e5cd8001 	strb	r8, [sp, #1]
         9ea68:	e3a06080 	mov	r6, #128	; 0x80
         9ea6c:	e5cd6000 	strb	r6, [sp]
         9ea70:	e5950000 	ldr	r0, [r5]
         9ea74:	eb68bb0a 	bl	1acd6a4 <TRootView::$CaretEnabled(void)>
         9ea78:	e3300000 	teq	r0, #0	; 0x0
         9ea7c:	11a0100d 	movne	r1, sp
         9ea80:	15950000 	ldrne	r0, [r5]
         9ea84:	1b68c358 	blne	1acf7ec <TRootView::$GetCaretPoint(TPoint *)>
         9ea88:	e3a08001 	mov	r8, #1	; 0x1
         9ea8c:	e59d0000 	ldr	r0, [sp]
         9ea90:	e1a00840 	mov	r0, r0, asr #16
         9ea94:	e2841010 	add	r1, r4, #16	; 0x10
         9ea98:	e3700902 	cmn	r0, #32768	; 0x8000
         9ea9c:	e58d100c 	str	r1, [sp, #12]	; fField12
         9eaa0:	1a000003 	bne	9eab4 <TView::DoEditCommand(long)+0x2c8>
         9eaa4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
         9eaa8:	e1a0000d 	mov	r0, sp
         9eaac:	eb03e374 	bl	197884 <TRect::MidPoint( const(void))>
         9eab0:	e3a08000 	mov	r8, #0	; 0x0
         9eab4:	e24dd004 	sub	sp, sp, #4	; 0x4
         9eab8:	e1a0000d 	mov	r0, sp
         9eabc:	e3a01000 	mov	r1, #0	; 0x0
         9eac0:	eb68d7e8 	bl	1ad4a68 <TDragInfo::$__ct(long)>
         9eac4:	e1a0100d 	mov	r1, sp
         9eac8:	e1a00007 	mov	r0, r7
         9eacc:	eb6911c2 	bl	1ae31dc <TClipboard::$GetClipboardDataInfo(TDragInfo *)>
         9ead0:	e28d2004 	add	r2, sp, #4	; 0x4
         9ead4:	e1a0100d 	mov	r1, sp
         9ead8:	e1a00004 	mov	r0, r4
         9eadc:	eb6911af 	bl	1ae31a0 <TView::$TargetDrop(TDragInfo const &, TPoint const &)>
         9eae0:	e1a06000 	mov	r6, r0
         9eae4:	e3380000 	teq	r8, #0	; 0x0
         9eae8:	1a00002c 	bne	9eba0 <TView::DoEditCommand(long)+0x3b4>
         9eaec:	e3360000 	teq	r6, #0	; 0x0
         9eaf0:	0a00009e 	beq	9ed70 <TView::DoEditCommand(long)+0x584>
         9eaf4:	e1a00006 	mov	r0, r6
         9eaf8:	e3a0104d 	mov	r1, #77	; 0x4d
         9eafc:	e5962000 	ldr	r2, [r6]
         9eb00:	e1a0e00f 	mov	lr, pc
         9eb04:	e282f004 	add	pc, r2, #4	; 0x4
         9eb08:	e3300000 	teq	r0, #0	; 0x0
         9eb0c:	0a000023 	beq	9eba0 <TView::DoEditCommand(long)+0x3b4>
         9eb10:	e24dd004 	sub	sp, sp, #4	; 0x4
         9eb14:	e2860024 	add	r0, r6, #36	; 0x24
         9eb18:	e59f126c 	ldr	r1, [pc, #26c]	; 9ed8c <TView::DoEditCommand(long)+0x5a0>
         9eb1c:	e3a03000 	mov	r3, #0	; 0x0
         9eb20:	e3a02000 	mov	r2, #0	; 0x0
         9eb24:	eb6c95d2 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         9eb28:	eb6c8d87 	bl	1bc214c <$AllocateRefHandle(long)>
         9eb2c:	e58d0000 	str	r0, [sp]
         9eb30:	e3a00000 	mov	r0, #0	; 0x0
         9eb34:	e59d1000 	ldr	r1, [sp]
         9eb38:	e5911000 	ldr	r1, [r1]
         9eb3c:	e3310002 	teq	r1, #2	; 0x2
         9eb40:	0a000006 	beq	9eb60 <TView::DoEditCommand(long)+0x374>
         9eb44:	e1a00001 	mov	r0, r1
         9eb48:	e3110003 	tst	r1, #3	; 0x3
         9eb4c:	01a00140 	moveq	r0, r0, asr #2
         9eb50:	0a000000 	beq	9eb58 <TView::DoEditCommand(long)+0x36c>
         9eb54:	eb6c8d70 	bl	1bc211c <$_RINTError(long)>
         9eb58:	e1a00800 	mov	r0, r0, lsl #16
         9eb5c:	e1a00840 	mov	r0, r0, asr #16
         9eb60:	e59d1014 	ldr	r1, [sp, #20]	; fField20
         9eb64:	e5911000 	ldr	r1, [r1]
         9eb68:	e58d1008 	str	r1, [sp, #8]	; fField8
         9eb6c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         9eb70:	e2811005 	add	r1, r1, #5	; 0x5
         9eb74:	e5cd100b 	strb	r1, [sp, #11]
         9eb78:	e1a01441 	mov	r1, r1, asr #8
         9eb7c:	e5cd100a 	strb	r1, [sp, #10]
         9eb80:	e59d100a 	ldr	r1, [sp, #10]
         9eb84:	e0810000 	add	r0, r1, r0
         9eb88:	e5cd0009 	strb	r0, [sp, #9]
         9eb8c:	e1a00440 	mov	r0, r0, asr #8
         9eb90:	e5cd0008 	strb	r0, [sp, #8]	; fField8
         9eb94:	e59d0000 	ldr	r0, [sp]
         9eb98:	eb6c9187 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9eb9c:	e28dd004 	add	sp, sp, #4	; 0x4
         9eba0:	e3360000 	teq	r6, #0	; 0x0
         9eba4:	0a000071 	beq	9ed70 <TView::DoEditCommand(long)+0x584>
         9eba8:	e1a01006 	mov	r1, r6
         9ebac:	e1a00004 	mov	r0, r4
         9ebb0:	eb683ac9 	bl	1aad6dc <TView::$DropApprove(TView *)>
         9ebb4:	e3300000 	teq	r0, #0	; 0x0
         9ebb8:	0a00006c 	beq	9ed70 <TView::DoEditCommand(long)+0x584>
         9ebbc:	e3390000 	teq	r9, #0	; 0x0
         9ebc0:	0a000017 	beq	9ec24 <TView::DoEditCommand(long)+0x438>
         9ebc4:	e1a00004 	mov	r0, r4
         9ebc8:	e3a01004 	mov	r1, #4	; 0x4
         9ebcc:	e5942000 	ldr	r2, [r4]
         9ebd0:	e1a0e00f 	mov	lr, pc
         9ebd4:	e282f06c 	add	pc, r2, #108	; 0x6c
         9ebd8:	e3380000 	teq	r8, #0	; 0x0
         9ebdc:	1a000010 	bne	9ec24 <TView::DoEditCommand(long)+0x438>
         9ebe0:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ebe4:	e3a08000 	mov	r8, #0	; 0x0
         9ebe8:	e5cd8001 	strb	r8, [sp, #1]
         9ebec:	e3a00080 	mov	r0, #128	; 0x80
         9ebf0:	e5cd0000 	strb	r0, [sp]
         9ebf4:	e5950000 	ldr	r0, [r5]
         9ebf8:	eb68baa9 	bl	1acd6a4 <TRootView::$CaretEnabled(void)>
         9ebfc:	e3300000 	teq	r0, #0	; 0x0
         9ec00:	11a0100d 	movne	r1, sp
         9ec04:	15950000 	ldrne	r0, [r5]
         9ec08:	1b68c2f7 	blne	1acf7ec <TRootView::$GetCaretPoint(TPoint *)>
         9ec0c:	e59d0000 	ldr	r0, [sp]
         9ec10:	e1a00840 	mov	r0, r0, asr #16
         9ec14:	e3700902 	cmn	r0, #32768	; 0x8000
         9ec18:	159d0000 	ldrne	r0, [sp]
         9ec1c:	158d0008 	strne	r0, [sp, #8]	; fField8
         9ec20:	e28dd004 	add	sp, sp, #4	; 0x4
         9ec24:	e24dd00c 	sub	sp, sp, #12	; 0xc
         9ec28:	e59a0010 	ldr	r0, [sl, #16]	; fField16
         9ec2c:	e58d0008 	str	r0, [sp, #8]	; fField8
         9ec30:	e24dd008 	sub	sp, sp, #8	; 0x8
         9ec34:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         9ec38:	e58d0000 	str	r0, [sp]
         9ec3c:	e58d0004 	str	r0, [sp, #4]	; fField4
         9ec40:	e59d0002 	ldr	r0, [sp, #2]	; fField2
         9ec44:	e5cd0009 	strb	r0, [sp, #9]
         9ec48:	e1a00440 	mov	r0, r0, asr #8
         9ec4c:	e5cd0008 	strb	r0, [sp, #8]	; fField8
         9ec50:	e59d0000 	ldr	r0, [sp]
         9ec54:	e5cd000b 	strb	r0, [sp, #11]
         9ec58:	e1a00440 	mov	r0, r0, asr #8
         9ec5c:	e5cd000a 	strb	r0, [sp, #10]
         9ec60:	e59d0006 	ldr	r0, [sp, #6]
         9ec64:	e5cd000d 	strb	r0, [sp, #13]
         9ec68:	e1a00440 	mov	r0, r0, asr #8
         9ec6c:	e5cd000c 	strb	r0, [sp, #12]	; fField12
         9ec70:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9ec74:	e5cd000f 	strb	r0, [sp, #15]
         9ec78:	e1a00440 	mov	r0, r0, asr #8
         9ec7c:	e5cd000e 	strb	r0, [sp, #14]
         9ec80:	e28dd008 	add	sp, sp, #8	; 0x8
         9ec84:	e1a0100d 	mov	r1, sp
         9ec88:	e1a00007 	mov	r0, r7
         9ec8c:	eb68809e 	bl	1abef0c <TClipboard::$CalcDataBitsBounds(TRect *)>
         9ec90:	e24dd008 	sub	sp, sp, #8	; 0x8
         9ec94:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         9ec98:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         9ec9c:	e0400001 	sub	r0, r0, r1
         9eca0:	e1a00800 	mov	r0, r0, lsl #16
         9eca4:	e1a00840 	mov	r0, r0, asr #16
         9eca8:	e59d1012 	ldr	r1, [sp, #18]	; fField18
         9ecac:	e59d200a 	ldr	r2, [sp, #10]
         9ecb0:	e0411002 	sub	r1, r1, r2
         9ecb4:	e1a01801 	mov	r1, r1, lsl #16
         9ecb8:	e1a01841 	mov	r1, r1, asr #16
         9ecbc:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ecc0:	e5cd0003 	strb	r0, [sp, #3]
         9ecc4:	e1a00440 	mov	r0, r0, asr #8
         9ecc8:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         9eccc:	e5cd1001 	strb	r1, [sp, #1]
         9ecd0:	e1a00441 	mov	r0, r1, asr #8
         9ecd4:	e5cd0000 	strb	r0, [sp]
         9ecd8:	e49d0004 	ldr	r0, [sp], #4	; fField4
         9ecdc:	e58d0000 	str	r0, [sp]
         9ece0:	e59d1018 	ldr	r1, [sp, #24]	; fField24
         9ece4:	e59d0000 	ldr	r0, [sp]
         9ece8:	e0810000 	add	r0, r1, r0
         9ecec:	e1a00800 	mov	r0, r0, lsl #16
         9ecf0:	e1a00840 	mov	r0, r0, asr #16
         9ecf4:	e59d201a 	ldr	r2, [sp, #26]
         9ecf8:	e41d1004 	ldr	r1, [sp], -#4	; fField4
         9ecfc:	e1a01821 	mov	r1, r1, lsr #16
         9ed00:	e0821001 	add	r1, r2, r1
         9ed04:	e1a01801 	mov	r1, r1, lsl #16
         9ed08:	e1a01841 	mov	r1, r1, asr #16
         9ed0c:	e5cd0003 	strb	r0, [sp, #3]
         9ed10:	e1a00440 	mov	r0, r0, asr #8
         9ed14:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         9ed18:	e5cd1001 	strb	r1, [sp, #1]
         9ed1c:	e1a00441 	mov	r0, r1, asr #8
         9ed20:	e5cd0000 	strb	r0, [sp]
         9ed24:	e49d0008 	ldr	r0, [sp], #8	; fField8
         9ed28:	e3a03001 	mov	r3, #1	; 0x1
         9ed2c:	e58d0000 	str	r0, [sp]
         9ed30:	e1a0200d 	mov	r2, sp
         9ed34:	e28d1014 	add	r1, sp, #20	; 0x14
         9ed38:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         9ed3c:	e28d3018 	add	r3, sp, #24	; 0x18
         9ed40:	e1a02006 	mov	r2, r6
         9ed44:	e28d101c 	add	r1, sp, #28	; 0x1c
         9ed48:	e1a00007 	mov	r0, r7
         9ed4c:	e597c000 	ldr	ip, [r7]
         9ed50:	e1a0e00f 	mov	lr, pc
         9ed54:	e28cff43 	add	pc, ip, #268	; 0x10c
         9ed58:	e28dd00c 	add	sp, sp, #12	; 0xc
         9ed5c:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
         9ed60:	e3310002 	teq	r1, #2	; 0x2
         9ed64:	05950000 	ldreq	r0, [r5]
         9ed68:	0b688074 	bleq	1abef40 <TRootView::$RemoveClipboard(void)>
         9ed6c:	e28dd010 	add	sp, sp, #16	; 0x10
         9ed70:	e59d0000 	ldr	r0, [sp]
         9ed74:	eb6c9110 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ed78:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
         9ed7c:	eb6c910e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ed80:	ea000011 	b	9edcc <TView::DoEditCommand(long)+0x5e0>
         9ed84:	00682a78 	rsbeq	r2, r8, r8, ror sl
         9ed88:	00682460 	rsbeq	r2, r8, r0, ror #8
         9ed8c:	00685058 	rsbeq	r5, r8, r8, asr r0
         9ed90:	e1a07004 	mov	r7, r4
         9ed94:	e1a01006 	mov	r1, r6
         9ed98:	e28d0004 	add	r0, sp, #4	; 0x4
         9ed9c:	eb68c6a6 	bl	1ad083c <TDragInfo::$GetItemDragRef( const(long))>
         9eda0:	eb6c8ce9 	bl	1bc214c <$AllocateRefHandle(long)>
         9eda4:	e58d0000 	str	r0, [sp]
         9eda8:	e1a0100d 	mov	r1, sp
         9edac:	e1a00007 	mov	r0, r7
         9edb0:	e5972000 	ldr	r2, [r7]
         9edb4:	e1a0e00f 	mov	lr, pc
         9edb8:	e282f0ec 	add	pc, r2, #236	; 0xec
         9edbc:	e59d0000 	ldr	r0, [sp]
         9edc0:	eb6c90fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9edc4:	e2566001 	subs	r6, r6, #1	; 0x1
         9edc8:	5afffff0 	bpl	9ed90 <TView::DoEditCommand(long)+0x5a4>
         9edcc:	e28dd004 	add	sp, sp, #4	; 0x4
         9edd0:	e3a01001 	mov	r1, #1	; 0x1
         9edd4:	e5950000 	ldr	r0, [r5]
         9edd8:	e5c0105c 	strb	r1, [r0, #92]
         9eddc:	e3a01000 	mov	r1, #0	; 0x0
         9ede0:	e5950000 	ldr	r0, [r5]
         9ede4:	eb68192e 	bl	1aa52a4 <TRootView::$Update(TRect *)>
         9ede8:	e3a04001 	mov	r4, #1	; 0x1
         9edec:	e59d0000 	ldr	r0, [sp]
         9edf0:	eb6c90f1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9edf4:	e1a00004 	mov	r0, r4
         9edf8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::FindDropView(TDragInfo const &, TPoint const &)
 * Address: 000a0df4
 */
TView::FindDropView(TDragInfo const &, TPoint const &) {
    /*
         a0df4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::AcceptDrop(TDragInfo const &, TPoint const &)
 * Address: 000a12c0
 */
TView::AcceptDrop(TDragInfo const &, TPoint const &) {
    /*
         a12c0:	e1a0c00d 	mov	ip, sp
         a12c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a12c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         a12cc:	e1a04001 	mov	r4, r1
         a12d0:	e1a01002 	mov	r1, r2
         a12d4:	e24dd004 	sub	sp, sp, #4	; 0x4
         a12d8:	e5902000 	ldr	r2, [r0]
         a12dc:	e1a0e00f 	mov	lr, pc
         a12e0:	e282ff45 	add	pc, r2, #276	; 0x114
         a12e4:	eb6c8398 	bl	1bc214c <$AllocateRefHandle(long)>
         a12e8:	e58d0000 	str	r0, [sp]
         a12ec:	e1a0000d 	mov	r0, sp
         a12f0:	eb6d49a5 	bl	1bf398c <$IsArray(RefVar const &)>
         a12f4:	e3a05000 	mov	r5, #0	; 0x0
         a12f8:	e3300000 	teq	r0, #0	; 0x0
         a12fc:	1a000003 	bne	a1310 <TView::AcceptDrop(TDragInfo const &, TPoint const &)+0x50>
         a1300:	e59d0000 	ldr	r0, [sp]
         a1304:	eb6c87ac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1308:	e1a00005 	mov	r0, r5
         a130c:	ea000006 	b	a132c <TView::AcceptDrop(TDragInfo const &, TPoint const &)+0x6c>
         a1310:	e1a0100d 	mov	r1, sp
         a1314:	e1a00004 	mov	r0, r4
         a1318:	eb68b0ec 	bl	1acd6d0 <TDragInfo::$CheckTypes( const(RefVar const &))>
         a131c:	e1a04000 	mov	r4, r0
         a1320:	e59d0000 	ldr	r0, [sp]
         a1324:	eb6c87a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1328:	e1a00004 	mov	r0, r4
         a132c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)
 * Address: 000a13e4
 */
TView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char) {
    /*
         a13e4:	e1a0c00d 	mov	ip, sp
         a13e8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         a13ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         a13f0:	e1a07000 	mov	r7, r0
         a13f4:	e1a06001 	mov	r6, r1
         a13f8:	e1a05002 	mov	r5, r2
         a13fc:	e1a04003 	mov	r4, r3
         a1400:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         a1404:	e20080ff 	and	r8, r0, #255	; 0xff
         a1408:	e24dd004 	sub	sp, sp, #4	; 0x4
         a140c:	e3a00004 	mov	r0, #4	; 0x4
         a1410:	eb67ea61 	bl	1a9bd9c <$MakeArray(long)>
         a1414:	eb6c834c 	bl	1bc214c <$AllocateRefHandle(long)>
         a1418:	e58d0000 	str	r0, [sp]
         a141c:	e5960000 	ldr	r0, [r6]
         a1420:	e3a01000 	mov	r1, #0	; 0x0
         a1424:	e5902000 	ldr	r2, [r0]
         a1428:	e59d0000 	ldr	r0, [sp]
         a142c:	e5900000 	ldr	r0, [r0]
         a1430:	eb6c93c8 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a1434:	e1a00005 	mov	r0, r5
         a1438:	ebfffc56 	bl	a0598 <TClipboard::DrawDragData(TRect const &)+0x144>
         a143c:	eb6c8342 	bl	1bc214c <$AllocateRefHandle(long)>
         a1440:	e1a05000 	mov	r5, r0
         a1444:	e3a01001 	mov	r1, #1	; 0x1
         a1448:	e5902000 	ldr	r2, [r0]
         a144c:	e59d0000 	ldr	r0, [sp]
         a1450:	e5900000 	ldr	r0, [r0]
         a1454:	eb6c93bf 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a1458:	e1a00005 	mov	r0, r5
         a145c:	eb6c8756 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1460:	e1a00004 	mov	r0, r4
         a1464:	ebfffc4b 	bl	a0598 <TClipboard::DrawDragData(TRect const &)+0x144>
         a1468:	eb6c8337 	bl	1bc214c <$AllocateRefHandle(long)>
         a146c:	e1a04000 	mov	r4, r0
         a1470:	e3a01002 	mov	r1, #2	; 0x2
         a1474:	e5902000 	ldr	r2, [r0]
         a1478:	e59d0000 	ldr	r0, [sp]
         a147c:	e5900000 	ldr	r0, [r0]
         a1480:	eb6c93b4 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a1484:	e1a00004 	mov	r0, r4
         a1488:	eb6c874b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a148c:	e3380000 	teq	r8, #0	; 0x0
         a1490:	03a00002 	moveq	r0, #2	; 0x2
         a1494:	13a0001a 	movne	r0, #26	; 0x1a
         a1498:	eb6c832b 	bl	1bc214c <$AllocateRefHandle(long)>
         a149c:	e1a04000 	mov	r4, r0
         a14a0:	e3a01003 	mov	r1, #3	; 0x3
         a14a4:	e5902000 	ldr	r2, [r0]
         a14a8:	e59d0000 	ldr	r0, [sp]
         a14ac:	e5900000 	ldr	r0, [r0]
         a14b0:	eb6c93a8 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a14b4:	e1a00004 	mov	r0, r4
         a14b8:	eb6c873f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a14bc:	e3a03000 	mov	r3, #0	; 0x0
         a14c0:	e92d0008 	stmdb	sp!, {r3}
         a14c4:	e28d2004 	add	r2, sp, #4	; 0x4
         a14c8:	e59f1028 	ldr	r1, [pc, #28]	; a14f8 <TView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x114>	; fField28
         a14cc:	e1a00007 	mov	r0, r7
         a14d0:	e3a03001 	mov	r3, #1	; 0x1
         a14d4:	eb6ca841 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         a14d8:	e28dd004 	add	sp, sp, #4	; 0x4
         a14dc:	e2500002 	subs	r0, r0, #2	; 0x2
         a14e0:	13a00001 	movne	r0, #1	; 0x1
         a14e4:	e20040ff 	and	r4, r0, #255	; 0xff
         a14e8:	e59d0000 	ldr	r0, [sp]
         a14ec:	eb6c8732 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a14f0:	e1a00004 	mov	r0, r4
         a14f4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         a14f8:	00684f88 	rsbeq	r4, r8, r8, lsl #31
    */
}

/**
 * Symbol: TView::GetSupportedDropTypes(TPoint const &)
 * Address: 000a14fc
 */
TView::GetSupportedDropTypes(TPoint const &) {
    /*
         a14fc:	e1a0c00d 	mov	ip, sp
         a1500:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a1504:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1508:	e1a04000 	mov	r4, r0
         a150c:	e1a05001 	mov	r5, r1
         a1510:	e24dd004 	sub	sp, sp, #4	; 0x4
         a1514:	e3a00001 	mov	r0, #1	; 0x1
         a1518:	eb67ea1f 	bl	1a9bd9c <$MakeArray(long)>
         a151c:	eb6c830a 	bl	1bc214c <$AllocateRefHandle(long)>
         a1520:	e58d0000 	str	r0, [sp]
         a1524:	e1a00005 	mov	r0, r5
         a1528:	ebfffc1a 	bl	a0598 <TClipboard::DrawDragData(TRect const &)+0x144>
         a152c:	eb6c8306 	bl	1bc214c <$AllocateRefHandle(long)>
         a1530:	e1a05000 	mov	r5, r0
         a1534:	e3a01000 	mov	r1, #0	; 0x0
         a1538:	e5902000 	ldr	r2, [r0]
         a153c:	e59d0000 	ldr	r0, [sp]
         a1540:	e5900000 	ldr	r0, [r0]
         a1544:	eb6c9383 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a1548:	e1a00005 	mov	r0, r5
         a154c:	eb6c871a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1550:	e24dd004 	sub	sp, sp, #4	; 0x4
         a1554:	e1a0300d 	mov	r3, sp
         a1558:	e92d0008 	stmdb	sp!, {r3}
         a155c:	e28d2008 	add	r2, sp, #8	; 0x8
         a1560:	e59f103c 	ldr	r1, [pc, #3c]	; a15a4 <TView::GetSupportedDropTypes(TPoint const &)+0xa8>
         a1564:	e1a00004 	mov	r0, r4
         a1568:	e3a03001 	mov	r3, #1	; 0x1
         a156c:	eb6ca81b 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         a1570:	e28dd004 	add	sp, sp, #4	; 0x4
         a1574:	eb6c82f4 	bl	1bc214c <$AllocateRefHandle(long)>
         a1578:	e5901000 	ldr	r1, [r0]
         a157c:	e3310002 	teq	r1, #2	; 0x2
         a1580:	1a000008 	bne	a15a8 <TView::GetSupportedDropTypes(TPoint const &)+0xac>
         a1584:	e5dd2000 	ldrb	r2, [sp]
         a1588:	e3320000 	teq	r2, #0	; 0x0
         a158c:	0a000005 	beq	a15a8 <TView::GetSupportedDropTypes(TPoint const &)+0xac>
         a1590:	eb6c8709 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1594:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a1598:	eb6c8707 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a159c:	e3a0001a 	mov	r0, #26	; 0x1a
         a15a0:	ea000005 	b	a15bc <TView::GetSupportedDropTypes(TPoint const &)+0xc0>
         a15a4:	00685010 	rsbeq	r5, r8, r0, lsl r0
         a15a8:	e1a04001 	mov	r4, r1
         a15ac:	eb6c8702 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a15b0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a15b4:	eb6c8700 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a15b8:	e1a00004 	mov	r0, r4
         a15bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::GetDropData(RefVar const &, RefVar const &)
 * Address: 000a15c0
 */
TView::GetDropData(RefVar const &, RefVar const &) {
    /*
         a15c0:	e1a0c00d 	mov	ip, sp
         a15c4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a15c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         a15cc:	e1a05000 	mov	r5, r0
         a15d0:	e1a06001 	mov	r6, r1
         a15d4:	e1a04002 	mov	r4, r2
         a15d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         a15dc:	e3a00002 	mov	r0, #2	; 0x2
         a15e0:	eb67e9ed 	bl	1a9bd9c <$MakeArray(long)>
         a15e4:	eb6c82d8 	bl	1bc214c <$AllocateRefHandle(long)>
         a15e8:	e58d0000 	str	r0, [sp]
         a15ec:	e5960000 	ldr	r0, [r6]
         a15f0:	e5902000 	ldr	r2, [r0]
         a15f4:	e59d0000 	ldr	r0, [sp]
         a15f8:	e5900000 	ldr	r0, [r0]
         a15fc:	e3a01000 	mov	r1, #0	; 0x0
         a1600:	eb6c9354 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a1604:	e5940000 	ldr	r0, [r4]
         a1608:	e5902000 	ldr	r2, [r0]
         a160c:	e59d0000 	ldr	r0, [sp]
         a1610:	e5900000 	ldr	r0, [r0]
         a1614:	e3a01001 	mov	r1, #1	; 0x1
         a1618:	eb6c934e 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a161c:	e3a03000 	mov	r3, #0	; 0x0
         a1620:	e92d0008 	stmdb	sp!, {r3}
         a1624:	e28d2004 	add	r2, sp, #4	; 0x4
         a1628:	e59f101c 	ldr	r1, [pc, #1c]	; a164c <TView::GetDropData(RefVar const &, RefVar const &)+0x8c>
         a162c:	e1a00005 	mov	r0, r5
         a1630:	e3a03001 	mov	r3, #1	; 0x1
         a1634:	eb6ca7e9 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         a1638:	e1a04000 	mov	r4, r0
         a163c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         a1640:	eb6c86dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1644:	e1a00004 	mov	r0, r4
         a1648:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         a164c:	00685008 	rsbeq	r5, r8, r8
    */
}

/**
 * Symbol: TView::BuildContext(RefVar const &, unsigned char)
 * Address: 0025e56c
 */
TView::BuildContext(RefVar const &, unsigned char) {
    /*
        25e56c:	e1a0c00d 	mov	ip, sp
        25e570:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        25e574:	e24cb004 	sub	fp, ip, #4	; 0x4
        25e578:	e1a04001 	mov	r4, r1
        25e57c:	e20290ff 	and	r9, r2, #255	; 0xff
        25e580:	e24dd010 	sub	sp, sp, #16	; 0x10
        25e584:	e59f11b4 	ldr	r1, [pc, #1b4]	; 25e740 <TView::BuildContext(RefVar const &, unsigned char)+0x1d4>
        25e588:	e1a0a001 	mov	sl, r1
        25e58c:	e1a00004 	mov	r0, r4
        25e590:	e3a02000 	mov	r2, #0	; 0x0
        25e594:	eb659733 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        25e598:	eb658eeb 	bl	1bc214c <$AllocateRefHandle(long)>
        25e59c:	e58d000c 	str	r0, [sp, #12]	; fField12
        25e5a0:	e5940000 	ldr	r0, [r4]
        25e5a4:	e5900000 	ldr	r0, [r0]
        25e5a8:	eb658ee7 	bl	1bc214c <$AllocateRefHandle(long)>
        25e5ac:	e58d0008 	str	r0, [sp, #8]	; fField8
        25e5b0:	e3a00002 	mov	r0, #2	; 0x2
        25e5b4:	eb658ee4 	bl	1bc214c <$AllocateRefHandle(long)>
        25e5b8:	e58d0004 	str	r0, [sp, #4]	; fField4
        25e5bc:	e3a00002 	mov	r0, #2	; 0x2
        25e5c0:	eb658ee1 	bl	1bc214c <$AllocateRefHandle(long)>
        25e5c4:	e3a07000 	mov	r7, #0	; 0x0
        25e5c8:	e58d0000 	str	r0, [sp]
        25e5cc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        25e5d0:	e5900000 	ldr	r0, [r0]
        25e5d4:	e59f8168 	ldr	r8, [pc, #168]	; 25e744 <TView::BuildContext(RefVar const &, unsigned char)+0x1d8>
        25e5d8:	e59f5168 	ldr	r5, [pc, #168]	; 25e748 <TView::BuildContext(RefVar const &, unsigned char)+0x1dc>
        25e5dc:	e3300002 	teq	r0, #2	; 0x2
        25e5e0:	1a000062 	bne	25e770 <TView::BuildContext(RefVar const &, unsigned char)+0x204>
        25e5e4:	e59f1160 	ldr	r1, [pc, #160]	; 25e74c <TView::BuildContext(RefVar const &, unsigned char)+0x1e0>
        25e5e8:	e1a00004 	mov	r0, r4
        25e5ec:	e3a02000 	mov	r2, #0	; 0x0
        25e5f0:	eb65971c 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        25e5f4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        25e5f8:	e5810000 	str	r0, [r1]
        25e5fc:	e3300002 	teq	r0, #2	; 0x2
        25e600:	1a00000a 	bne	25e630 <TView::BuildContext(RefVar const &, unsigned char)+0xc4>
        25e604:	e59f1144 	ldr	r1, [pc, #144]	; 25e750 <TView::BuildContext(RefVar const &, unsigned char)+0x1e4>
        25e608:	e1a00004 	mov	r0, r4
        25e60c:	e3a02000 	mov	r2, #0	; 0x0
        25e610:	eb659714 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        25e614:	e3300002 	teq	r0, #2	; 0x2
        25e618:	0a000004 	beq	25e630 <TView::BuildContext(RefVar const &, unsigned char)+0xc4>
        25e61c:	e5980000 	ldr	r0, [r8]
        25e620:	e5900000 	ldr	r0, [r0]
        25e624:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        25e628:	e3a07001 	mov	r7, #1	; 0x1
        25e62c:	e5810000 	str	r0, [r1]
        25e630:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        25e634:	e5900000 	ldr	r0, [r0]
        25e638:	e3300002 	teq	r0, #2	; 0x2
        25e63c:	1a000004 	bne	25e654 <TView::BuildContext(RefVar const &, unsigned char)+0xe8>
        25e640:	e3a02000 	mov	r2, #0	; 0x0
        25e644:	e3e01035 	mvn	r1, #53	; 0x35
        25e648:	e2411c21 	sub	r1, r1, #8448	; 0x2100
        25e64c:	e5950000 	ldr	r0, [r5]
        25e650:	eb6612d1 	bl	1be319c <$Throw>
        25e654:	e59f00f8 	ldr	r0, [pc, #f8]	; 25e754 <TView::BuildContext(RefVar const &, unsigned char)+0x1e8>
        25e658:	e5900000 	ldr	r0, [r0]
        25e65c:	eb658eba 	bl	1bc214c <$AllocateRefHandle(long)>
        25e660:	e1a06000 	mov	r6, r0
        25e664:	e59f00ec 	ldr	r0, [pc, #ec]	; 25e758 <TView::BuildContext(RefVar const &, unsigned char)+0x1ec>
        25e668:	e5900000 	ldr	r0, [r0]
        25e66c:	e5901000 	ldr	r1, [r0]
        25e670:	e5960000 	ldr	r0, [r6]
        25e674:	eb6596f9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        25e678:	e59d1000 	ldr	r1, [sp]
        25e67c:	e5810000 	str	r0, [r1]
        25e680:	e1a00006 	mov	r0, r6
        25e684:	eb6592cc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25e688:	e28d100c 	add	r1, sp, #12	; 0xc
        25e68c:	e1a0000d 	mov	r0, sp
        25e690:	e3a02000 	mov	r2, #0	; 0x0
        25e694:	eb6596f3 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        25e698:	e59d1000 	ldr	r1, [sp]
        25e69c:	e5810000 	str	r0, [r1]
        25e6a0:	e3300002 	teq	r0, #2	; 0x2
        25e6a4:	1a000004 	bne	25e6bc <TView::BuildContext(RefVar const &, unsigned char)+0x150>
        25e6a8:	e3a02000 	mov	r2, #0	; 0x0
        25e6ac:	e3e01036 	mvn	r1, #54	; 0x36
        25e6b0:	e2411c21 	sub	r1, r1, #8448	; 0x2100
        25e6b4:	e5950000 	ldr	r0, [r5]
        25e6b8:	eb6612b7 	bl	1be319c <$Throw>
        25e6bc:	e1a0100a 	mov	r1, sl
        25e6c0:	e1a0000d 	mov	r0, sp
        25e6c4:	e3a03000 	mov	r3, #0	; 0x0
        25e6c8:	e3a02000 	mov	r2, #0	; 0x0
        25e6cc:	eb6596e8 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        25e6d0:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        25e6d4:	e5810000 	str	r0, [r1]
        25e6d8:	e5940000 	ldr	r0, [r4]
        25e6dc:	e5900000 	ldr	r0, [r0]
        25e6e0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        25e6e4:	e5810000 	str	r0, [r1]
        25e6e8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        25e6ec:	e5900000 	ldr	r0, [r0]
        25e6f0:	e3100003 	tst	r0, #3	; 0x3
        25e6f4:	01a00140 	moveq	r0, r0, asr #2
        25e6f8:	0a000000 	beq	25e700 <TView::BuildContext(RefVar const &, unsigned char)+0x194>
        25e6fc:	eb658e86 	bl	1bc211c <$_RINTError(long)>
        25e700:	e3100801 	tst	r0, #65536	; 0x10000
        25e704:	0a000015 	beq	25e760 <TView::BuildContext(RefVar const &, unsigned char)+0x1f4>
        25e708:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        25e70c:	e5900000 	ldr	r0, [r0]
        25e710:	eb659af6 	bl	1bc52f0 <$ObjectFlags(long)>
        25e714:	e3100040 	tst	r0, #64	; 0x40
        25e718:	0a000003 	beq	25e72c <TView::BuildContext(RefVar const &, unsigned char)+0x1c0>
        25e71c:	e28d0008 	add	r0, sp, #8	; 0x8
        25e720:	eb658e91 	bl	1bc216c <$Clone(RefVar const &)>
        25e724:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        25e728:	e5810000 	str	r0, [r1]
        25e72c:	e1a0200d 	mov	r2, sp
        25e730:	e59f1024 	ldr	r1, [pc, #24]	; 25e75c <TView::BuildContext(RefVar const &, unsigned char)+0x1f0>	; fField24
        25e734:	e28d0008 	add	r0, sp, #8	; 0x8
        25e738:	eb659f0a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        25e73c:	ea00000b 	b	25e770 <TView::BuildContext(RefVar const &, unsigned char)+0x204>
        25e740:	00684f30 	rsbeq	r4, r8, r0, lsr pc
        25e744:	00683f20 	rsbeq	r3, r8, r0, lsr #30
        25e748:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        25e74c:	006850d8 	ldreqd	r5, [r8], -#8	; fField8
        25e750:	00683220 	rsbeq	r3, r8, r0, lsr #4
        25e754:	0c10180c 	ldceq	8, cr1, [r0], -#48
        25e758:	00684840 	rsbeq	r4, r8, r0, asr #16
        25e75c:	00685390 	streqb	r5, [r8], -#48
        25e760:	e59d0000 	ldr	r0, [sp]
        25e764:	e5901000 	ldr	r1, [r0]
        25e768:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        25e76c:	e5801000 	str	r1, [r0]
        25e770:	e3390000 	teq	r9, #0	; 0x0
        25e774:	1a00001d 	bne	25e7f0 <TView::BuildContext(RefVar const &, unsigned char)+0x284>
        25e778:	e59f106c 	ldr	r1, [pc, #6c]	; 25e7ec <TView::BuildContext(RefVar const &, unsigned char)+0x280>
        25e77c:	e28d0008 	add	r0, sp, #8	; 0x8
        25e780:	e3a02000 	mov	r2, #0	; 0x0
        25e784:	eb6596b7 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        25e788:	e1a06000 	mov	r6, r0
        25e78c:	e3300002 	teq	r0, #2	; 0x2
        25e790:	1a000004 	bne	25e7a8 <TView::BuildContext(RefVar const &, unsigned char)+0x23c>
        25e794:	e3a02000 	mov	r2, #0	; 0x0
        25e798:	e3e01037 	mvn	r1, #55	; 0x37
        25e79c:	e2411c21 	sub	r1, r1, #8448	; 0x2100
        25e7a0:	e5950000 	ldr	r0, [r5]
        25e7a4:	eb66127c 	bl	1be319c <$Throw>
        25e7a8:	e1a00006 	mov	r0, r6
        25e7ac:	e3160003 	tst	r6, #3	; 0x3
        25e7b0:	01a00140 	moveq	r0, r0, asr #2
        25e7b4:	0a000000 	beq	25e7bc <TView::BuildContext(RefVar const &, unsigned char)+0x250>
        25e7b8:	eb658e57 	bl	1bc211c <$_RINTError(long)>
        25e7bc:	e3100001 	tst	r0, #1	; 0x1
        25e7c0:	1a00000a 	bne	25e7f0 <TView::BuildContext(RefVar const &, unsigned char)+0x284>
        25e7c4:	e59d0000 	ldr	r0, [sp]
        25e7c8:	eb65927b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25e7cc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        25e7d0:	eb659279 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25e7d4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        25e7d8:	eb659277 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25e7dc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        25e7e0:	eb659275 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25e7e4:	e3a00002 	mov	r0, #2	; 0x2
        25e7e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        25e7ec:	00684fc0 	rsbeq	r4, r8, r0, asr #31
        25e7f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        25e7f4:	e28d000c 	add	r0, sp, #12	; 0xc
        25e7f8:	eb6222f3 	bl	1ae73cc <$GetCacheContext(RefVar const &)>
        25e7fc:	eb658e52 	bl	1bc214c <$AllocateRefHandle(long)>
        25e800:	e58d0000 	str	r0, [sp]
        25e804:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        25e808:	e5900000 	ldr	r0, [r0]
        25e80c:	e3100003 	tst	r0, #3	; 0x3
        25e810:	01a00140 	moveq	r0, r0, asr #2
        25e814:	0a000000 	beq	25e81c <TView::BuildContext(RefVar const &, unsigned char)+0x2b0>
        25e818:	eb658e3f 	bl	1bc211c <$_RINTError(long)>
        25e81c:	e3100801 	tst	r0, #65536	; 0x10000
        25e820:	0a00000b 	beq	25e854 <TView::BuildContext(RefVar const &, unsigned char)+0x2e8>
        25e824:	e5940000 	ldr	r0, [r4]
        25e828:	e5900000 	ldr	r0, [r0]
        25e82c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        25e830:	e5810000 	str	r0, [r1]
        25e834:	e59d0000 	ldr	r0, [sp]
        25e838:	e5900000 	ldr	r0, [r0]
        25e83c:	e3300002 	teq	r0, #2	; 0x2
        25e840:	1a000003 	bne	25e854 <TView::BuildContext(RefVar const &, unsigned char)+0x2e8>
        25e844:	e59f00bc 	ldr	r0, [pc, #bc]	; 25e908 <TView::BuildContext(RefVar const &, unsigned char)+0x39c>
        25e848:	eb658e47 	bl	1bc216c <$Clone(RefVar const &)>
        25e84c:	e59d1000 	ldr	r1, [sp]
        25e850:	e5810000 	str	r0, [r1]
        25e854:	e59d0000 	ldr	r0, [sp]
        25e858:	e5900000 	ldr	r0, [r0]
        25e85c:	e3300002 	teq	r0, #2	; 0x2
        25e860:	1a000003 	bne	25e874 <TView::BuildContext(RefVar const &, unsigned char)+0x308>
        25e864:	e59f00a0 	ldr	r0, [pc, #a0]	; 25e90c <TView::BuildContext(RefVar const &, unsigned char)+0x3a0>
        25e868:	eb658e3f 	bl	1bc216c <$Clone(RefVar const &)>
        25e86c:	e59d1000 	ldr	r1, [sp]
        25e870:	e5810000 	str	r0, [r1]
        25e874:	e3370000 	teq	r7, #0	; 0x0
        25e878:	0a000003 	beq	25e88c <TView::BuildContext(RefVar const &, unsigned char)+0x320>
        25e87c:	e1a02008 	mov	r2, r8
        25e880:	e51f113c 	ldr	r1, [pc, #fffffec4]	; 25e74c <TView::BuildContext(RefVar const &, unsigned char)+0x1e0>
        25e884:	e1a0000d 	mov	r0, sp
        25e888:	eb659eb6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        25e88c:	e28d200c 	add	r2, sp, #12	; 0xc
        25e890:	e51f113c 	ldr	r1, [pc, #fffffec4]	; 25e75c <TView::BuildContext(RefVar const &, unsigned char)+0x1f0>
        25e894:	e1a0000d 	mov	r0, sp
        25e898:	eb659eb2 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        25e89c:	e59f006c 	ldr	r0, [pc, #6c]	; 25e910 <TView::BuildContext(RefVar const &, unsigned char)+0x3a4>
        25e8a0:	e5900000 	ldr	r0, [r0]
        25e8a4:	e2802024 	add	r2, r0, #36	; 0x24
        25e8a8:	e59f1064 	ldr	r1, [pc, #64]	; 25e914 <TView::BuildContext(RefVar const &, unsigned char)+0x3a8>
        25e8ac:	e1a0000d 	mov	r0, sp
        25e8b0:	eb659eac 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        25e8b4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        25e8b8:	e5900000 	ldr	r0, [r0]
        25e8bc:	e3300002 	teq	r0, #2	; 0x2
        25e8c0:	0a000003 	beq	25e8d4 <TView::BuildContext(RefVar const &, unsigned char)+0x368>
        25e8c4:	e28d2008 	add	r2, sp, #8	; 0x8
        25e8c8:	e59f1048 	ldr	r1, [pc, #48]	; 25e918 <TView::BuildContext(RefVar const &, unsigned char)+0x3ac>
        25e8cc:	e1a0000d 	mov	r0, sp
        25e8d0:	eb659ea4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        25e8d4:	e59d0000 	ldr	r0, [sp]
        25e8d8:	e5904000 	ldr	r4, [r0]
        25e8dc:	eb659236 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25e8e0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        25e8e4:	eb659234 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25e8e8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        25e8ec:	eb659232 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25e8f0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        25e8f4:	eb659230 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25e8f8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        25e8fc:	eb65922e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25e900:	e1a00004 	mov	r0, r4
        25e904:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        25e908:	0067fc38 	rsbeq	pc, r7, r8, lsr ip
        25e90c:	006814a0 	rsbeq	r1, r8, r0, lsr #9
        25e910:	0c101934 	ldceq	9, cr1, [r0], -#208
        25e914:	00685388 	rsbeq	r5, r8, r8, lsl #7
        25e918:	00684120 	rsbeq	r4, r8, r0, lsr #2
    */
}

/**
 * Symbol: TView::AddView(RefVar const &)
 * Address: 0025f1ac
 */
TView::AddView(RefVar const &) {
    /*
        25f1ac:	e1a0c00d 	mov	ip, sp
        25f1b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25f1b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25f1b8:	e1a04000 	mov	r4, r0
        25f1bc:	e1a05001 	mov	r5, r1
        25f1c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        25f1c4:	e59f103c 	ldr	r1, [pc, #3c]	; 25f208 <TView::AddView(RefVar const &)+0x5c>
        25f1c8:	e1a00005 	mov	r0, r5
        25f1cc:	e3a02000 	mov	r2, #0	; 0x0
        25f1d0:	eb659424 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        25f1d4:	eb658bdc 	bl	1bc214c <$AllocateRefHandle(long)>
        25f1d8:	e58d0000 	str	r0, [sp]
        25f1dc:	e5900000 	ldr	r0, [r0]
        25f1e0:	e3a06000 	mov	r6, #0	; 0x0
        25f1e4:	e3300002 	teq	r0, #2	; 0x2
        25f1e8:	1a000007 	bne	25f20c <TView::AddView(RefVar const &)+0x60>
        25f1ec:	e1a01005 	mov	r1, r5
        25f1f0:	e1a00004 	mov	r0, r4
        25f1f4:	e3a02000 	mov	r2, #0	; 0x0
        25f1f8:	eb60b0e3 	bl	1a8b58c <TView::$BuildContext(RefVar const &, unsigned char)>
        25f1fc:	e59d1000 	ldr	r1, [sp]
        25f200:	e5810000 	str	r0, [r1]
        25f204:	ea00000f 	b	25f248 <TView::AddView(RefVar const &)+0x9c>
        25f208:	00683f78 	rsbeq	r3, r8, r8, ror pc
        25f20c:	e1a0100d 	mov	r1, sp
        25f210:	e1a00004 	mov	r0, r4
        25f214:	eb65accf 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        25f218:	e59d1000 	ldr	r1, [sp]
        25f21c:	e5810000 	str	r0, [r1]
        25f220:	e59f1050 	ldr	r1, [pc, #50]	; 25f278 <TView::AddView(RefVar const &)+0xcc>
        25f224:	e1a0000d 	mov	r0, sp
        25f228:	e3a02000 	mov	r2, #0	; 0x0
        25f22c:	eb65940d 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        25f230:	e3100003 	tst	r0, #3	; 0x3
        25f234:	01a00140 	moveq	r0, r0, asr #2
        25f238:	0a000000 	beq	25f240 <TView::AddView(RefVar const &)+0x94>
        25f23c:	eb658bb6 	bl	1bc211c <$_RINTError(long)>
        25f240:	e3100001 	tst	r0, #1	; 0x1
        25f244:	0a00000e 	beq	25f284 <TView::AddView(RefVar const &)+0xd8>
        25f248:	e59d0000 	ldr	r0, [sp]
        25f24c:	e5900000 	ldr	r0, [r0]
        25f250:	e3300002 	teq	r0, #2	; 0x2
        25f254:	0a00000a 	beq	25f284 <TView::AddView(RefVar const &)+0xd8>
        25f258:	e1a0100d 	mov	r1, sp
        25f25c:	e1a00004 	mov	r0, r4
        25f260:	eb60b0ca 	bl	1a8b590 <$BuildView(TView *, RefVar const &)>
        25f264:	e1a04000 	mov	r4, r0
        25f268:	e59d0000 	ldr	r0, [sp]
        25f26c:	eb658fd2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f270:	e1a00004 	mov	r0, r4
        25f274:	ea000001 	b	25f280 <TView::AddView(RefVar const &)+0xd4>
        25f278:	00684fc0 	rsbeq	r4, r8, r0, asr #31
        25f27c:	e1a00006 	mov	r0, r6
        25f280:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        25f284:	e59d0000 	ldr	r0, [sp]
        25f288:	eb658fcb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f28c:	eafffffa 	b	25f27c <TView::AddView(RefVar const &)+0xd0>
    */
}

/**
 * Symbol: TView::ClassID( const(void))
 * Address: 0025f290
 */
TView::ClassID( const(void)) {
    /*
        25f290:	e3a0004a 	mov	r0, #74	; 0x4a
        25f294:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::SetFlags(unsigned long)
 * Address: 0025f298
 */
TView::SetFlags(unsigned long) {
    /*
        25f298:	e1a0c00d 	mov	ip, sp
        25f29c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25f2a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        25f2a4:	e1a04000 	mov	r4, r0
        25f2a8:	e1a05001 	mov	r5, r1
        25f2ac:	e5900008 	ldr	r0, [r0, #8]	; fField8
        25f2b0:	e1800001 	orr	r0, r0, r1
        25f2b4:	e5840008 	str	r0, [r4, #8]	; fField8
        25f2b8:	e3c104fd 	bic	r0, r1, #-50331648	; 0xfd000000
        25f2bc:	e3c008ff 	bic	r0, r0, #16711680	; 0xff0000
        25f2c0:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        25f2c4:	e3d000fe 	bics	r0, r0, #254	; 0xfe
        25f2c8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        25f2cc:	e24dd004 	sub	sp, sp, #4	; 0x4
        25f2d0:	e1a00004 	mov	r0, r4
        25f2d4:	e3a0100a 	mov	r1, #10	; 0xa
        25f2d8:	eb65ac96 	bl	1bca538 <TView::$GetCacheProto(long)>
        25f2dc:	e3100003 	tst	r0, #3	; 0x3
        25f2e0:	01a00140 	moveq	r0, r0, asr #2
        25f2e4:	0a000000 	beq	25f2ec <TView::SetFlags(unsigned long)+0x54>
        25f2e8:	eb658b8b 	bl	1bc211c <$_RINTError(long)>
        25f2ec:	e1800005 	orr	r0, r0, r5
        25f2f0:	e1a00100 	mov	r0, r0, lsl #2
        25f2f4:	eb658b94 	bl	1bc214c <$AllocateRefHandle(long)>
        25f2f8:	e58d0000 	str	r0, [sp]
        25f2fc:	e1a0200d 	mov	r2, sp
        25f300:	e59f1010 	ldr	r1, [pc, #10]	; 25f318 <TView::SetFlags(unsigned long)+0x80>
        25f304:	e1a00004 	mov	r0, r4
        25f308:	eb61f6c3 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        25f30c:	e59d0000 	ldr	r0, [sp]
        25f310:	eb658fa9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f314:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25f318:	00684fc0 	rsbeq	r4, r8, r0, asr #31
    */
}

/**
 * Symbol: TView::GetCacheVariable(long)
 * Address: 0025f31c
 */
TView::GetCacheVariable(long) {
    /*
        25f31c:	e1a0c00d 	mov	ip, sp
        25f320:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25f324:	e24cb004 	sub	fp, ip, #4	; 0x4
        25f328:	e1a04000 	mov	r4, r0
        25f32c:	e1a00001 	mov	r0, r1
        25f330:	e3510020 	cmp	r1, #32	; 0x20
        25f334:	b2845018 	addlt	r5, r4, #24	; 0x18
        25f338:	a284502c 	addge	r5, r4, #44	; 0x2c
        25f33c:	a2400020 	subge	r0, r0, #32	; 0x20
        25f340:	e3a02001 	mov	r2, #1	; 0x1
        25f344:	e1a06012 	mov	r6, r2, lsl r0
        25f348:	e5950000 	ldr	r0, [r5]
        25f34c:	e1160000 	tst	r6, r0
        25f350:	03a00002 	moveq	r0, #2	; 0x2
        25f354:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        25f358:	e24dd004 	sub	sp, sp, #4	; 0x4
        25f35c:	e59f0044 	ldr	r0, [pc, #44]	; 25f3a8 <TView::GetCacheVariable(long)+0x8c>	; fField44
        25f360:	e5900000 	ldr	r0, [r0]
        25f364:	e7900101 	ldr	r0, [r0, r1, lsl #2]	; fField2
        25f368:	eb658b77 	bl	1bc214c <$AllocateRefHandle(long)>
        25f36c:	e58d0000 	str	r0, [sp]
        25f370:	e1a0100d 	mov	r1, sp
        25f374:	e1a00004 	mov	r0, r4
        25f378:	eb65ac76 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        25f37c:	e1a04000 	mov	r4, r0
        25f380:	e59d0000 	ldr	r0, [sp]
        25f384:	eb658f8c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f388:	e3340002 	teq	r4, #2	; 0x2
        25f38c:	01e01006 	mvneq	r1, r6
        25f390:	e5950000 	ldr	r0, [r5]
        25f394:	00010000 	andeq	r0, r1, r0
        25f398:	11860000 	orrne	r0, r6, r0
        25f39c:	e5850000 	str	r0, [r5]
        25f3a0:	e1a00004 	mov	r0, r4
        25f3a4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        25f3a8:	0c104f58 	ldceq	15, cr4, [r0], -#352
    */
}

/**
 * Symbol: TView::GetCacheProto(long)
 * Address: 0025f3ac
 */
TView::GetCacheProto(long) {
    /*
        25f3ac:	e1a0c00d 	mov	ip, sp
        25f3b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25f3b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25f3b8:	e1a04000 	mov	r4, r0
        25f3bc:	e1a00001 	mov	r0, r1
        25f3c0:	e3510020 	cmp	r1, #32	; 0x20
        25f3c4:	b2845018 	addlt	r5, r4, #24	; 0x18
        25f3c8:	a284502c 	addge	r5, r4, #44	; 0x2c
        25f3cc:	a2400020 	subge	r0, r0, #32	; 0x20
        25f3d0:	e3a02001 	mov	r2, #1	; 0x1
        25f3d4:	e1a06012 	mov	r6, r2, lsl r0
        25f3d8:	e5950000 	ldr	r0, [r5]
        25f3dc:	e1160000 	tst	r6, r0
        25f3e0:	03a00002 	moveq	r0, #2	; 0x2
        25f3e4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        25f3e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        25f3ec:	e59f0044 	ldr	r0, [pc, #44]	; 25f438 <TView::GetCacheProto(long)+0x8c>	; fField44
        25f3f0:	e5900000 	ldr	r0, [r0]
        25f3f4:	e7900101 	ldr	r0, [r0, r1, lsl #2]	; fField2
        25f3f8:	eb658b53 	bl	1bc214c <$AllocateRefHandle(long)>
        25f3fc:	e58d0000 	str	r0, [sp]
        25f400:	e1a0100d 	mov	r1, sp
        25f404:	e1a00004 	mov	r0, r4
        25f408:	eb65ac4e 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        25f40c:	e1a04000 	mov	r4, r0
        25f410:	e59d0000 	ldr	r0, [sp]
        25f414:	eb658f68 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f418:	e3340002 	teq	r4, #2	; 0x2
        25f41c:	01e01006 	mvneq	r1, r6
        25f420:	e5950000 	ldr	r0, [r5]
        25f424:	00010000 	andeq	r0, r1, r0
        25f428:	11860000 	orrne	r0, r6, r0
        25f42c:	e5850000 	str	r0, [r5]
        25f430:	e1a00004 	mov	r0, r4
        25f434:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        25f438:	0c104f58 	ldceq	15, cr4, [r0], -#352
    */
}

/**
 * Symbol: TView::AddToSoup(RefVar const &)
 * Address: 0025f43c
 */
TView::AddToSoup(RefVar const &) {
    /*
        25f43c:	e1a0c00d 	mov	ip, sp
        25f440:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25f444:	e24cb004 	sub	fp, ip, #4	; 0x4
        25f448:	e1a04000 	mov	r4, r0
        25f44c:	e1a05001 	mov	r5, r1
        25f450:	e24dd004 	sub	sp, sp, #4	; 0x4
        25f454:	e3a00001 	mov	r0, #1	; 0x1
        25f458:	eb60f24f 	bl	1a9bd9c <$MakeArray(long)>
        25f45c:	eb658b3a 	bl	1bc214c <$AllocateRefHandle(long)>
        25f460:	e58d0000 	str	r0, [sp]
        25f464:	e5950000 	ldr	r0, [r5]
        25f468:	e5902000 	ldr	r2, [r0]
        25f46c:	e59d0000 	ldr	r0, [sp]
        25f470:	e5900000 	ldr	r0, [r0]
        25f474:	e3a06000 	mov	r6, #0	; 0x0
        25f478:	e1a01006 	mov	r1, r6
        25f47c:	eb659bb5 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        25f480:	e24dd004 	sub	sp, sp, #4	; 0x4
        25f484:	e3a03000 	mov	r3, #0	; 0x0
        25f488:	e92d0008 	stmdb	sp!, {r3}
        25f48c:	e28d2008 	add	r2, sp, #8	; 0x8
        25f490:	e59f10a0 	ldr	r1, [pc, #a0]	; 25f538 <TView::AddToSoup(RefVar const &)+0xfc>
        25f494:	e1a00004 	mov	r0, r4
        25f498:	eb65b050 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        25f49c:	e28dd004 	add	sp, sp, #4	; 0x4
        25f4a0:	eb658b29 	bl	1bc214c <$AllocateRefHandle(long)>
        25f4a4:	e58d0000 	str	r0, [sp]
        25f4a8:	e5900000 	ldr	r0, [r0]
        25f4ac:	e3300002 	teq	r0, #2	; 0x2
        25f4b0:	1a00002d 	bne	25f56c <TView::AddToSoup(RefVar const &)+0x130>
        25f4b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        25f4b8:	e1a00004 	mov	r0, r4
        25f4bc:	eb65a7fe 	bl	1bc94bc <TView::$Children(void)>
        25f4c0:	eb658b21 	bl	1bc214c <$AllocateRefHandle(long)>
        25f4c4:	e58d0000 	str	r0, [sp]
        25f4c8:	e5900000 	ldr	r0, [r0]
        25f4cc:	e3300002 	teq	r0, #2	; 0x2
        25f4d0:	1a00001a 	bne	25f540 <TView::AddToSoup(RefVar const &)+0x104>
        25f4d4:	e24dd008 	sub	sp, sp, #8	; 0x8
        25f4d8:	e3a00001 	mov	r0, #1	; 0x1
        25f4dc:	eb60f22e 	bl	1a9bd9c <$MakeArray(long)>
        25f4e0:	eb658b19 	bl	1bc214c <$AllocateRefHandle(long)>
        25f4e4:	e58d0004 	str	r0, [sp, #4]	; fField4
        25f4e8:	e5950000 	ldr	r0, [r5]
        25f4ec:	e5902000 	ldr	r2, [r0]
        25f4f0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        25f4f4:	e5900000 	ldr	r0, [r0]
        25f4f8:	e1a01006 	mov	r1, r6
        25f4fc:	eb659b95 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        25f500:	e1a00004 	mov	r0, r4
        25f504:	eb65a7f7 	bl	1bc94e8 <TView::$DataFrame(void)>
        25f508:	eb658b0f 	bl	1bc214c <$AllocateRefHandle(long)>
        25f50c:	e58d0000 	str	r0, [sp]
        25f510:	e1a0000d 	mov	r0, sp
        25f514:	e28d2004 	add	r2, sp, #4	; 0x4
        25f518:	e59f101c 	ldr	r1, [pc, #1c]	; 25f53c <TView::AddToSoup(RefVar const &)+0x100>
        25f51c:	eb659b91 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        25f520:	e59d0000 	ldr	r0, [sp]
        25f524:	eb658f24 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f528:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        25f52c:	eb658f22 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f530:	e28dd008 	add	sp, sp, #8	; 0x8
        25f534:	ea000004 	b	25f54c <TView::AddToSoup(RefVar const &)+0x110>
        25f538:	00684ef8 	streqd	r4, [r8], -#232
        25f53c:	00684f28 	rsbeq	r4, r8, r8, lsr #30
        25f540:	e1a01005 	mov	r1, r5
        25f544:	e1a0000d 	mov	r0, sp
        25f548:	eb658af6 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        25f54c:	e1a01005 	mov	r1, r5
        25f550:	e1a00004 	mov	r0, r4
        25f554:	eb60a7e8 	bl	1a894fc <TView::$AddView(RefVar const &)>
        25f558:	e1a04000 	mov	r4, r0
        25f55c:	e59d0000 	ldr	r0, [sp]
        25f560:	eb658f15 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f564:	e28dd004 	add	sp, sp, #4	; 0x4
        25f568:	ea000007 	b	25f58c <TView::AddToSoup(RefVar const &)+0x150>
        25f56c:	e1a0000d 	mov	r0, sp
        25f570:	eb665106 	bl	1bf3990 <$IsFrame(RefVar const &)>
        25f574:	e3300000 	teq	r0, #0	; 0x0
        25f578:	01a01005 	moveq	r1, r5
        25f57c:	11a0100d 	movne	r1, sp
        25f580:	e1a00004 	mov	r0, r4
        25f584:	eb65abe8 	bl	1bca52c <TView::$FindView(RefVar const &)>
        25f588:	e1a04000 	mov	r4, r0
        25f58c:	e59d0000 	ldr	r0, [sp]
        25f590:	eb658f09 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f594:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        25f598:	eb658f07 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f59c:	e1a00004 	mov	r0, r4
        25f5a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TView::RemoveFromSoup(TView *)
 * Address: 0025f5a4
 */
TView::RemoveFromSoup(TView *) {
    /*
        25f5a4:	e1a0c00d 	mov	ip, sp
        25f5a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25f5ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        25f5b0:	e1a05000 	mov	r5, r0
        25f5b4:	e1a04001 	mov	r4, r1
        25f5b8:	e24dd008 	sub	sp, sp, #8	; 0x8
        25f5bc:	e3a00001 	mov	r0, #1	; 0x1
        25f5c0:	eb60f1f5 	bl	1a9bd9c <$MakeArray(long)>
        25f5c4:	eb658ae0 	bl	1bc214c <$AllocateRefHandle(long)>
        25f5c8:	e58d0004 	str	r0, [sp, #4]	; fField4
        25f5cc:	e1a00004 	mov	r0, r4
        25f5d0:	eb65a7c4 	bl	1bc94e8 <TView::$DataFrame(void)>
        25f5d4:	eb658adc 	bl	1bc214c <$AllocateRefHandle(long)>
        25f5d8:	e58d0000 	str	r0, [sp]
        25f5dc:	e5902000 	ldr	r2, [r0]
        25f5e0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        25f5e4:	e5900000 	ldr	r0, [r0]
        25f5e8:	e3a01000 	mov	r1, #0	; 0x0
        25f5ec:	eb659b59 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        25f5f0:	e1a00004 	mov	r0, r4
        25f5f4:	eb65aff6 	bl	1bcb5d4 <TView::$RemoveView(void)>
        25f5f8:	e3a03000 	mov	r3, #0	; 0x0
        25f5fc:	e92d0008 	stmdb	sp!, {r3}
        25f600:	e28d2008 	add	r2, sp, #8	; 0x8
        25f604:	e59f1058 	ldr	r1, [pc, #58]	; 25f664 <TView::RemoveFromSoup(TView *)+0xc0>
        25f608:	e1a00005 	mov	r0, r5
        25f60c:	eb65aff3 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        25f610:	e28dd004 	add	sp, sp, #4	; 0x4
        25f614:	e3300002 	teq	r0, #2	; 0x2
        25f618:	1a00000c 	bne	25f650 <TView::RemoveFromSoup(TView *)+0xac>
        25f61c:	e24dd004 	sub	sp, sp, #4	; 0x4
        25f620:	e1a00005 	mov	r0, r5
        25f624:	eb65a7a4 	bl	1bc94bc <TView::$Children(void)>
        25f628:	eb658ac7 	bl	1bc214c <$AllocateRefHandle(long)>
        25f62c:	e58d0000 	str	r0, [sp]
        25f630:	e5900000 	ldr	r0, [r0]
        25f634:	e3300002 	teq	r0, #2	; 0x2
        25f638:	128d1004 	addne	r1, sp, #4	; 0x4
        25f63c:	11a0000d 	movne	r0, sp
        25f640:	1b66a383 	blne	1c08454 <$ArrayRemove__FRC6RefVarT1>
        25f644:	e59d0000 	ldr	r0, [sp]
        25f648:	eb658edb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f64c:	e28dd004 	add	sp, sp, #4	; 0x4
        25f650:	e59d0000 	ldr	r0, [sp]
        25f654:	eb658ed8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f658:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        25f65c:	eb658ed6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f660:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25f664:	00684f78 	rsbeq	r4, r8, r8, ror pc
    */
}

/**
 * Symbol: TView::Sync(void)
 * Address: 0025f668
 */
TView::Sync(void) {
    /*
        25f668:	e1a0c00d 	mov	ip, sp
        25f66c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25f670:	e24cb004 	sub	fp, ip, #4	; 0x4
        25f674:	e1a04000 	mov	r4, r0
        25f678:	e5900008 	ldr	r0, [r0, #8]	; fField8
        25f67c:	e3100201 	tst	r0, #268435456	; 0x10000000
        25f680:	1a000003 	bne	25f694 <TView::Sync(void)+0x2c>
        25f684:	e1a00004 	mov	r0, r4
        25f688:	e5941000 	ldr	r1, [r4]
        25f68c:	e1a0e00f 	mov	lr, pc
        25f690:	e281f034 	add	pc, r1, #52	; 0x34
        25f694:	e24dd004 	sub	sp, sp, #4	; 0x4
        25f698:	e59f116c 	ldr	r1, [pc, #16c]	; 25f80c <TView::Sync(void)+0x1a4>	; fField16
        25f69c:	e1a00004 	mov	r0, r4
        25f6a0:	eb65aba8 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        25f6a4:	eb658aa8 	bl	1bc214c <$AllocateRefHandle(long)>
        25f6a8:	e40d0008 	str	r0, [sp], -#8	; fField8
        25f6ac:	e1a0100d 	mov	r1, sp
        25f6b0:	e28d0008 	add	r0, sp, #8	; 0x8
        25f6b4:	eb60d4ef 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        25f6b8:	e3300000 	teq	r0, #0	; 0x0
        25f6bc:	028f0f53 	addeq	r0, pc, #332	; 0x14c
        25f6c0:	0b660eb6 	bleq	1be31a0 <$ThrowMsg>
        25f6c4:	e24dd008 	sub	sp, sp, #8	; 0x8
        25f6c8:	e2840010 	add	r0, r4, #16	; 0x10
        25f6cc:	e8905000 	ldmia	r0, {ip, lr}
        25f6d0:	e88d5000 	stmia	sp, {ip, lr}
        25f6d4:	e1a00004 	mov	r0, r4
        25f6d8:	e3a01009 	mov	r1, #9	; 0x9
        25f6dc:	eb621f33 	bl	1ae73b0 <TView::$InvalidateSlotCache(long)>
        25f6e0:	e1a00004 	mov	r0, r4
        25f6e4:	e3a01009 	mov	r1, #9	; 0x9
        25f6e8:	eb65ab92 	bl	1bca538 <TView::$GetCacheProto(long)>
        25f6ec:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        25f6f0:	e5810000 	str	r0, [r1]
        25f6f4:	e3300002 	teq	r0, #2	; 0x2
        25f6f8:	03a00000 	moveq	r0, #0	; 0x0
        25f6fc:	0a000007 	beq	25f720 <TView::Sync(void)+0xb8>
        25f700:	e3100003 	tst	r0, #3	; 0x3
        25f704:	01a00140 	moveq	r0, r0, asr #2
        25f708:	0a000000 	beq	25f710 <TView::Sync(void)+0xa8>
        25f70c:	eb658a82 	bl	1bc211c <$_RINTError(long)>
        25f710:	e3c00103 	bic	r0, r0, #-1073741824	; 0xc0000000
        25f714:	e5941028 	ldr	r1, [r4, #40]	; fField40
        25f718:	e2011103 	and	r1, r1, #-1073741824	; 0xc0000000
        25f71c:	e1800001 	orr	r0, r0, r1
        25f720:	e5840028 	str	r0, [r4, #40]	; fField40
        25f724:	e24dd008 	sub	sp, sp, #8	; 0x8
        25f728:	e28d0010 	add	r0, sp, #16	; 0x10
        25f72c:	e8905000 	ldmia	r0, {ip, lr}
        25f730:	e88d5000 	stmia	sp, {ip, lr}
        25f734:	e1a0100d 	mov	r1, sp
        25f738:	e1a00004 	mov	r0, r4
        25f73c:	eb65af90 	bl	1bcb584 <TView::$JustifyBounds(TRect *)>
        25f740:	e28d1008 	add	r1, sp, #8	; 0x8
        25f744:	e1a0000d 	mov	r0, sp
        25f748:	eb63bbf7 	bl	1b4e72c <$EqualRect__FP4RectT1>
        25f74c:	e3300000 	teq	r0, #0	; 0x0
        25f750:	1a00005a 	bne	25f8c0 <TView::Sync(void)+0x258>
        25f754:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        25f758:	e59d1000 	ldr	r1, [sp]
        25f75c:	e0400001 	sub	r0, r0, r1
        25f760:	e1a00800 	mov	r0, r0, lsl #16
        25f764:	e1a00840 	mov	r0, r0, asr #16
        25f768:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        25f76c:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        25f770:	e0411002 	sub	r1, r1, r2
        25f774:	e1a01801 	mov	r1, r1, lsl #16
        25f778:	e1300841 	teq	r0, r1, asr #16
        25f77c:	1a000028 	bne	25f824 <TView::Sync(void)+0x1bc>
        25f780:	e59d0006 	ldr	r0, [sp, #6]
        25f784:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        25f788:	e0400001 	sub	r0, r0, r1
        25f78c:	e1a00800 	mov	r0, r0, lsl #16
        25f790:	e1a00840 	mov	r0, r0, asr #16
        25f794:	e59d100e 	ldr	r1, [sp, #14]
        25f798:	e59d200a 	ldr	r2, [sp, #10]
        25f79c:	e0411002 	sub	r1, r1, r2
        25f7a0:	e1a01801 	mov	r1, r1, lsl #16
        25f7a4:	e1300841 	teq	r0, r1, asr #16
        25f7a8:	1a00001d 	bne	25f824 <TView::Sync(void)+0x1bc>
        25f7ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        25f7b0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        25f7b4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        25f7b8:	e0410000 	sub	r0, r1, r0
        25f7bc:	e1a00800 	mov	r0, r0, lsl #16
        25f7c0:	e1a00840 	mov	r0, r0, asr #16
        25f7c4:	e59d1006 	ldr	r1, [sp, #6]
        25f7c8:	e59d200e 	ldr	r2, [sp, #14]
        25f7cc:	e0411002 	sub	r1, r1, r2
        25f7d0:	e1a01801 	mov	r1, r1, lsl #16
        25f7d4:	e1a01841 	mov	r1, r1, asr #16
        25f7d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        25f7dc:	e5cd0003 	strb	r0, [sp, #3]
        25f7e0:	e1a00440 	mov	r0, r0, asr #8
        25f7e4:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        25f7e8:	e5cd1001 	strb	r1, [sp, #1]
        25f7ec:	e1a00441 	mov	r0, r1, asr #8
        25f7f0:	e5cd0000 	strb	r0, [sp]
        25f7f4:	e49d0004 	ldr	r0, [sp], #4	; fField4
        25f7f8:	e58d0000 	str	r0, [sp]
        25f7fc:	e1a00004 	mov	r0, r4
        25f800:	e49d1004 	ldr	r1, [sp], #4	; fField4
        25f804:	eb65af63 	bl	1bcb598 <TView::$Offset(TPoint)>
        25f808:	ea00001e 	b	25f888 <TView::Sync(void)+0x220>
        25f80c:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        25f810:	62616420 	rsbvs	r6, r1, #536870912	; 0x20000000
        25f814:	626f756e 	rsbvs	r7, pc, #461373440	; 0x1b800000
        25f818:	64732066 	ldrvsbt	r2, [r3], -#102
        25f81c:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        25f820:	00000000 	andeq	r0, r0, r0
        25f824:	e28d1008 	add	r1, sp, #8	; 0x8
        25f828:	e1a00004 	mov	r0, r4
        25f82c:	e5942000 	ldr	r2, [r4]
        25f830:	e1a0e00f 	mov	lr, pc
        25f834:	e282f024 	add	pc, r2, #36	; 0x24
        25f838:	e28d1008 	add	r1, sp, #8	; 0x8
        25f83c:	e594201c 	ldr	r2, [r4, #28]	; fField28
        25f840:	e1a00002 	mov	r0, r2
        25f844:	e5922000 	ldr	r2, [r2]
        25f848:	e1a0e00f 	mov	lr, pc
        25f84c:	e282f054 	add	pc, r2, #84	; 0x54
        25f850:	e28d1010 	add	r1, sp, #16	; 0x10
        25f854:	e1a00004 	mov	r0, r4
        25f858:	e5942000 	ldr	r2, [r4]
        25f85c:	e1a0e00f 	mov	lr, pc
        25f860:	e282f02c 	add	pc, r2, #44	; 0x2c
        25f864:	e5940028 	ldr	r0, [r4, #40]	; fField40
        25f868:	e3100101 	tst	r0, #1073741824	; 0x40000000
        25f86c:	11a00004 	movne	r0, r4
        25f870:	1b61d05c 	blne	1ad39e8 <$SetModalView(TView *)>
        25f874:	e1a00004 	mov	r0, r4
        25f878:	e3a01000 	mov	r1, #0	; 0x0
        25f87c:	e5942000 	ldr	r2, [r4]
        25f880:	e1a0e00f 	mov	lr, pc
        25f884:	e282f054 	add	pc, r2, #84	; 0x54
        25f888:	e24dd00c 	sub	sp, sp, #12	; 0xc
        25f88c:	e1a0000d 	mov	r0, sp
        25f890:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
        25f894:	eb60a2e6 	bl	1a88434 <TListLoop::$__ct(CList *)>
        25f898:	e1a0000d 	mov	r0, sp
        25f89c:	eb60f55f 	bl	1a9ce20 <TListLoop::$Next(void)>
        25f8a0:	e3300000 	teq	r0, #0	; 0x0
        25f8a4:	0a000004 	beq	25f8bc <TView::Sync(void)+0x254>
        25f8a8:	eb65af44 	bl	1bcb5c0 <TView::$RecalcBounds(void)>
        25f8ac:	e1a0000d 	mov	r0, sp
        25f8b0:	eb60f55a 	bl	1a9ce20 <TListLoop::$Next(void)>
        25f8b4:	e3300000 	teq	r0, #0	; 0x0
        25f8b8:	1afffffa 	bne	25f8a8 <TView::Sync(void)+0x240>
        25f8bc:	e28dd00c 	add	sp, sp, #12	; 0xc
        25f8c0:	e5bd0018 	ldr	r0, [sp, #24]!	; fField24
        25f8c4:	eb658e3c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25f8c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::AddView(TView *)
 * Address: 0025f8cc
 */
TView::AddView(TView *) {
    /*
        25f8cc:	e1a0c00d 	mov	ip, sp
        25f8d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25f8d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25f8d8:	e1a04000 	mov	r4, r0
        25f8dc:	e1a05001 	mov	r5, r1
        25f8e0:	e5900020 	ldr	r0, [r0, #32]	; fField32
        25f8e4:	e59f1070 	ldr	r1, [pc, #70]	; 25f95c <TView::AddView(TView *)+0x90>
        25f8e8:	e5911000 	ldr	r1, [r1]
        25f8ec:	e1300001 	teq	r0, r1
        25f8f0:	1a000001 	bne	25f8fc <TView::AddView(TView *)+0x30>
        25f8f4:	eb04ac9b 	bl	38ab68 <C$$dtorvec$$Limit+0x1f4>
        25f8f8:	e5840020 	str	r0, [r4, #32]	; fField32
        25f8fc:	e5950008 	ldr	r0, [r5, #8]	; fField8
        25f900:	e3100040 	tst	r0, #64	; 0x40
        25f904:	1a00000f 	bne	25f948 <TView::AddView(TView *)+0x7c>
        25f908:	e5940020 	ldr	r0, [r4, #32]	; fField32
        25f90c:	e5901000 	ldr	r1, [r0]
        25f910:	e2411001 	sub	r1, r1, #1	; 0x1
        25f914:	eb661a8a 	bl	1be6344 <CList::$At(long)>
        25f918:	e3300000 	teq	r0, #0	; 0x0
        25f91c:	15900008 	ldrne	r0, [r0, #8]	; fField8
        25f920:	12000040 	andne	r0, r0, #64	; 0x40
        25f924:	13300000 	teqne	r0, #0	; 0x0
        25f928:	0a000006 	beq	25f948 <TView::AddView(TView *)+0x7c>
        25f92c:	e1a02005 	mov	r2, r5
        25f930:	e3a01000 	mov	r1, #0	; 0x0
        25f934:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        25f938:	eb6626eb 	bl	1be94ec <CList::$InsertAt(long, void *)>
        25f93c:	e1a00005 	mov	r0, r5
        25f940:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        25f944:	ea65a6d7 	b	1bc94a8 <TView::$BringToFront(void)>
        25f948:	e1a02005 	mov	r2, r5
        25f94c:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        25f950:	e5901000 	ldr	r1, [r0]
        25f954:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        25f958:	ea6626e3 	b	1be94ec <CList::$InsertAt(long, void *)>
        25f95c:	0c101930 	ldceq	9, cr1, [r0], -#192
    */
}

/**
 * Symbol: TView::RemoveView(void)
 * Address: 0025f960
 */
TView::RemoveView(void) {
    /*
        25f960:	e1a01000 	mov	r1, r0
        25f964:	e590001c 	ldr	r0, [r0, #28]	; fField28
        25f968:	ea65af16 	b	1bcb5c8 <TView::$RemoveChildView(TView *)>
    */
}

/**
 * Symbol: TView::RemoveChildView(TView *)
 * Address: 0025f96c
 */
TView::RemoveChildView(TView *) {
    /*
        25f96c:	e1a0c00d 	mov	ip, sp
        25f970:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25f974:	e24cb004 	sub	fp, ip, #4	; 0x4
        25f978:	e1a05000 	mov	r5, r0
        25f97c:	e1a04001 	mov	r4, r1
        25f980:	e5910008 	ldr	r0, [r1, #8]	; fField8
        25f984:	e3100001 	tst	r0, #1	; 0x1
        25f988:	0a000016 	beq	25f9e8 <TView::RemoveChildView(TView *)+0x7c>
        25f98c:	e3100201 	tst	r0, #268435456	; 0x10000000
        25f990:	1a000014 	bne	25f9e8 <TView::RemoveChildView(TView *)+0x7c>
        25f994:	e1a00004 	mov	r0, r4
        25f998:	eb65aaf4 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        25f99c:	e3300000 	teq	r0, #0	; 0x0
        25f9a0:	0a000004 	beq	25f9b8 <TView::RemoveChildView(TView *)+0x4c>
        25f9a4:	e1a00004 	mov	r0, r4
        25f9a8:	e5941000 	ldr	r1, [r4]
        25f9ac:	e1a0e00f 	mov	lr, pc
        25f9b0:	e281f03c 	add	pc, r1, #60	; 0x3c
        25f9b4:	ea00000b 	b	25f9e8 <TView::RemoveChildView(TView *)+0x7c>
        25f9b8:	e24dd008 	sub	sp, sp, #8	; 0x8
        25f9bc:	e1a0100d 	mov	r1, sp
        25f9c0:	e1a00004 	mov	r0, r4
        25f9c4:	e5942000 	ldr	r2, [r4]
        25f9c8:	e1a0e00f 	mov	lr, pc
        25f9cc:	e282f024 	add	pc, r2, #36	; 0x24
        25f9d0:	e1a0100d 	mov	r1, sp
        25f9d4:	e1a00005 	mov	r0, r5
        25f9d8:	e5952000 	ldr	r2, [r5]
        25f9dc:	e1a0e00f 	mov	lr, pc
        25f9e0:	e282f054 	add	pc, r2, #84	; 0x54
        25f9e4:	e28dd008 	add	sp, sp, #8	; 0x8
        25f9e8:	e1a01004 	mov	r1, r4
        25f9ec:	e5950020 	ldr	r0, [r5, #32]	; fField32
        25f9f0:	eb66228f 	bl	1be8434 <CList::$GetIdentityIndex(void *)>
        25f9f4:	e1a01000 	mov	r1, r0
        25f9f8:	e3700001 	cmn	r0, #1	; 0x1
        25f9fc:	0a000011 	beq	25fa48 <TView::RemoveChildView(TView *)+0xdc>
        25fa00:	e3a02001 	mov	r2, #1	; 0x1
        25fa04:	e5950020 	ldr	r0, [r5, #32]	; fField32
        25fa08:	eb663309 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        25fa0c:	e5950020 	ldr	r0, [r5, #32]	; fField32
        25fa10:	e1a06000 	mov	r6, r0
        25fa14:	e5900000 	ldr	r0, [r0]
        25fa18:	e3300000 	teq	r0, #0	; 0x0
        25fa1c:	1a000009 	bne	25fa48 <TView::RemoveChildView(TView *)+0xdc>
        25fa20:	e3360000 	teq	r6, #0	; 0x0
        25fa24:	0a000004 	beq	25fa3c <TView::RemoveChildView(TView *)+0xd0>
        25fa28:	e1a00006 	mov	r0, r6
        25fa2c:	e3a01000 	mov	r1, #0	; 0x0
        25fa30:	eb661613 	bl	1be5284 <CList::$__dt(void)>
        25fa34:	e1a00006 	mov	r0, r6
        25fa38:	eb65b728 	bl	1bcd6e0 <$__dl(void *)>
        25fa3c:	e59f0014 	ldr	r0, [pc, #14]	; 25fa58 <TView::RemoveChildView(TView *)+0xec>
        25fa40:	e5900000 	ldr	r0, [r0]
        25fa44:	e5a50020 	str	r0, [r5, #32]!	; fField32
        25fa48:	e1a00004 	mov	r0, r4
        25fa4c:	e5941000 	ldr	r1, [r4]
        25fa50:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        25fa54:	e281f018 	add	pc, r1, #24	; 0x18
        25fa58:	0c101930 	ldceq	9, cr1, [r0], -#192
    */
}

/**
 * Symbol: TView::RemoveAllViews(void)
 * Address: 0025fa5c
 */
TView::RemoveAllViews(void) {
    /*
        25fa5c:	e1a0c00d 	mov	ip, sp
        25fa60:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        25fa64:	e24cb004 	sub	fp, ip, #4	; 0x4
        25fa68:	e1a04000 	mov	r4, r0
        25fa6c:	e5900020 	ldr	r0, [r0, #32]	; fField32
        25fa70:	e59f6074 	ldr	r6, [pc, #74]	; 25faec <TView::RemoveAllViews(void)+0x90>
        25fa74:	e5961000 	ldr	r1, [r6]
        25fa78:	e1300001 	teq	r0, r1
        25fa7c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        25fa80:	e5940008 	ldr	r0, [r4, #8]	; fField8
        25fa84:	e2000209 	and	r0, r0, #-1879048192	; 0x90000000
        25fa88:	e3300209 	teq	r0, #-1879048192	; 0x90000000
        25fa8c:	13a00000 	movne	r0, #0	; 0x0
        25fa90:	03a00001 	moveq	r0, #1	; 0x1
        25fa94:	e21080ff 	ands	r8, r0, #255	; 0xff
        25fa98:	01a00004 	moveq	r0, r4
        25fa9c:	03a01209 	moveq	r1, #-1879048192	; 0x90000000
        25faa0:	0b65aed5 	bleq	1bcb5fc <TView::$SetFlags(unsigned long)>
        25faa4:	e3a09000 	mov	r9, #0	; 0x0
        25faa8:	e5945020 	ldr	r5, [r4, #32]	; fField32
        25faac:	e5950000 	ldr	r0, [r5]
        25fab0:	e3300000 	teq	r0, #0	; 0x0
        25fab4:	0a00000d 	beq	25faf0 <TView::RemoveAllViews(void)+0x94>
        25fab8:	e1a00005 	mov	r0, r5
        25fabc:	e3a01000 	mov	r1, #0	; 0x0
        25fac0:	eb661a1f 	bl	1be6344 <CList::$At(long)>
        25fac4:	e1a07000 	mov	r7, r0
        25fac8:	e1a01009 	mov	r1, r9
        25facc:	e1a00005 	mov	r0, r5
        25fad0:	e3a02001 	mov	r2, #1	; 0x1
        25fad4:	eb6632d6 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        25fad8:	e1a00007 	mov	r0, r7
        25fadc:	e5971000 	ldr	r1, [r7]
        25fae0:	e1a0e00f 	mov	lr, pc
        25fae4:	e281f018 	add	pc, r1, #24	; 0x18
        25fae8:	eaffffee 	b	25faa8 <TView::RemoveAllViews(void)+0x4c>
        25faec:	0c101930 	ldceq	9, cr1, [r0], -#192
        25faf0:	e3380000 	teq	r8, #0	; 0x0
        25faf4:	01a00004 	moveq	r0, r4
        25faf8:	03a01209 	moveq	r1, #-1879048192	; 0x90000000
        25fafc:	0b65a672 	bleq	1bc94cc <TView::$ClearFlags(unsigned long)>
        25fb00:	e5945020 	ldr	r5, [r4, #32]	; fField32
        25fb04:	e5960000 	ldr	r0, [r6]
        25fb08:	e1350000 	teq	r5, r0
        25fb0c:	13350000 	teqne	r5, #0	; 0x0
        25fb10:	0a000004 	beq	25fb28 <TView::RemoveAllViews(void)+0xcc>
        25fb14:	e1a00005 	mov	r0, r5
        25fb18:	e3a01000 	mov	r1, #0	; 0x0
        25fb1c:	eb6615d8 	bl	1be5284 <CList::$__dt(void)>
        25fb20:	e1a00005 	mov	r0, r5
        25fb24:	eb65b6ed 	bl	1bcd6e0 <$__dl(void *)>
        25fb28:	e5960000 	ldr	r0, [r6]
        25fb2c:	e5a40020 	str	r0, [r4, #32]!	; fField32
        25fb30:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TView::FindView(RefVar const &)
 * Address: 0025fb34
 */
TView::FindView(RefVar const &) {
    /*
        25fb34:	e1a0c00d 	mov	ip, sp
        25fb38:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        25fb3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25fb40:	e1a04000 	mov	r4, r0
        25fb44:	e1a05001 	mov	r5, r1
        25fb48:	e3a06000 	mov	r6, #0	; 0x0
        25fb4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        25fb50:	eb65a664 	bl	1bc94e8 <TView::$DataFrame(void)>
        25fb54:	eb65897c 	bl	1bc214c <$AllocateRefHandle(long)>
        25fb58:	e58d0000 	str	r0, [sp]
        25fb5c:	e1a0000d 	mov	r0, sp
        25fb60:	e1a01005 	mov	r1, r5
        25fb64:	eb65b2ae 	bl	1bcc624 <$SoupEQ__FRC6RefVarT1>
        25fb68:	e1b07000 	movs	r7, r0
        25fb6c:	13a07001 	movne	r7, #1	; 0x1
        25fb70:	e59d0000 	ldr	r0, [sp]
        25fb74:	eb658d90 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25fb78:	e3370000 	teq	r7, #0	; 0x0
        25fb7c:	11a06004 	movne	r6, r4
        25fb80:	1a000013 	bne	25fbd4 <TView::FindView(RefVar const &)+0xa0>
        25fb84:	e5940008 	ldr	r0, [r4, #8]	; fField8
        25fb88:	e3100001 	tst	r0, #1	; 0x1
        25fb8c:	0a000010 	beq	25fbd4 <TView::FindView(RefVar const &)+0xa0>
        25fb90:	e24dd00c 	sub	sp, sp, #12	; 0xc
        25fb94:	e1a0000d 	mov	r0, sp
        25fb98:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
        25fb9c:	eb60a224 	bl	1a88434 <TListLoop::$__ct(CList *)>
        25fba0:	e1a0000d 	mov	r0, sp
        25fba4:	eb60f49d 	bl	1a9ce20 <TListLoop::$Next(void)>
        25fba8:	e3300000 	teq	r0, #0	; 0x0
        25fbac:	0a000007 	beq	25fbd0 <TView::FindView(RefVar const &)+0x9c>
        25fbb0:	e1a01005 	mov	r1, r5
        25fbb4:	eb65aa5c 	bl	1bca52c <TView::$FindView(RefVar const &)>
        25fbb8:	e1b06000 	movs	r6, r0
        25fbbc:	1a000003 	bne	25fbd0 <TView::FindView(RefVar const &)+0x9c>
        25fbc0:	e1a0000d 	mov	r0, sp
        25fbc4:	eb60f495 	bl	1a9ce20 <TListLoop::$Next(void)>
        25fbc8:	e3300000 	teq	r0, #0	; 0x0
        25fbcc:	1afffff7 	bne	25fbb0 <TView::FindView(RefVar const &)+0x7c>
        25fbd0:	e28dd00c 	add	sp, sp, #12	; 0xc
        25fbd4:	e1a00006 	mov	r0, r6
        25fbd8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TView::TextFlags( const(void))
 * Address: 0025fbdc
 */
TView::TextFlags( const(void)) {
    /*
        25fbdc:	e1a0c00d 	mov	ip, sp
        25fbe0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25fbe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25fbe8:	e59f102c 	ldr	r1, [pc, #2c]	; 25fc1c <TView::TextFlags( const(void))+0x40>	; fField2
        25fbec:	eb65aa55 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        25fbf0:	eb658955 	bl	1bc214c <$AllocateRefHandle(long)>
        25fbf4:	e1a04000 	mov	r4, r0
        25fbf8:	e5900000 	ldr	r0, [r0]
        25fbfc:	e2001003 	and	r1, r0, #3	; 0x3
        25fc00:	e3510000 	cmp	r1, #0	; 0x0
        25fc04:	1a000005 	bne	25fc20 <TView::TextFlags( const(void))+0x44>
        25fc08:	01a00140 	moveq	r0, r0, asr #2
        25fc0c:	0a000000 	beq	25fc14 <TView::TextFlags( const(void))+0x38>
        25fc10:	eb658941 	bl	1bc211c <$_RINTError(long)>
        25fc14:	e1a05000 	mov	r5, r0
        25fc18:	ea000001 	b	25fc24 <TView::TextFlags( const(void))+0x48>
        25fc1c:	00684ad8 	ldreqd	r4, [r8], -#168
        25fc20:	e3a05000 	mov	r5, #0	; 0x0
        25fc24:	e1a00004 	mov	r0, r4
        25fc28:	eb658d63 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25fc2c:	e1a00005 	mov	r0, r5
        25fc30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::InsideView(TPoint &)
 * Address: 0025fc34
 */
TView::InsideView(TPoint &) {
    /*
        25fc34:	e1a0c00d 	mov	ip, sp
        25fc38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25fc3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25fc40:	e1a04001 	mov	r4, r1
        25fc44:	e24dd008 	sub	sp, sp, #8	; 0x8
        25fc48:	e1a0100d 	mov	r1, sp
        25fc4c:	e5902000 	ldr	r2, [r0]
        25fc50:	e1a0e00f 	mov	lr, pc
        25fc54:	e282f024 	add	pc, r2, #36	; 0x24
        25fc58:	e5940000 	ldr	r0, [r4]
        25fc5c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        25fc60:	e28d1004 	add	r1, sp, #4	; 0x4
        25fc64:	e28dd004 	add	sp, sp, #4	; 0x4
        25fc68:	eb63cb33 	bl	1b5293c <$PtInRect(Point, Rect *)>
        25fc6c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::Distance(TPoint, TPoint *)
 * Address: 0025fc70
 */
TView::Distance(TPoint, TPoint *) {
    /*
        25fc70:	e1a0c00d 	mov	ip, sp
        25fc74:	e92dd817 	stmdb	sp!, {r0, r1, r2, r4, fp, ip, lr, pc}
        25fc78:	e24cb004 	sub	fp, ip, #4	; 0x4
        25fc7c:	e3a04801 	mov	r4, #65536	; 0x10000
        25fc80:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        25fc84:	e5901008 	ldr	r1, [r0, #8]	; fField8
        25fc88:	e3110001 	tst	r1, #1	; 0x1
        25fc8c:	0a000037 	beq	25fd70 <TView::Distance(TPoint, TPoint *)+0x100>
        25fc90:	eb65a60f 	bl	1bc94d4 <TView::$Clipper( const(void))>
        25fc94:	e3300000 	teq	r0, #0	; 0x0
        25fc98:	0a000007 	beq	25fcbc <TView::Distance(TPoint, TPoint *)+0x4c>
        25fc9c:	e51b1018 	ldr	r1, [fp, -#24]	; fField24
        25fca0:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        25fca4:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        25fca8:	e49d0004 	ldr	r0, [sp], #4	; fField4
        25fcac:	eb63cb23 	bl	1b52940 <$PtInRgn(Point, Region **)>
        25fcb0:	e3300000 	teq	r0, #0	; 0x0
        25fcb4:	0a00002d 	beq	25fd70 <TView::Distance(TPoint, TPoint *)+0x100>
        25fcb8:	ea00002b 	b	25fd6c <TView::Distance(TPoint, TPoint *)+0xfc>
        25fcbc:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        25fcc0:	e3300000 	teq	r0, #0	; 0x0
        25fcc4:	0a000020 	beq	25fd4c <TView::Distance(TPoint, TPoint *)+0xdc>
        25fcc8:	e24dd008 	sub	sp, sp, #8	; 0x8
        25fccc:	e1a0100d 	mov	r1, sp
        25fcd0:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        25fcd4:	e5902000 	ldr	r2, [r0]
        25fcd8:	e1a0e00f 	mov	lr, pc
        25fcdc:	e282f024 	add	pc, r2, #36	; 0x24
        25fce0:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        25fce4:	e5901002 	ldr	r1, [r0, #2]	; fField2
        25fce8:	e1a01841 	mov	r1, r1, asr #16
        25fcec:	e2611000 	rsb	r1, r1, #0	; 0x0
        25fcf0:	e5900000 	ldr	r0, [r0]
        25fcf4:	e1a00840 	mov	r0, r0, asr #16
        25fcf8:	e2602000 	rsb	r2, r0, #0	; 0x0
        25fcfc:	e1a0000d 	mov	r0, sp
        25fd00:	eb63c2ce 	bl	1b50840 <$InsetRect__FP4RectlT2>
        25fd04:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        25fd08:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        25fd0c:	e28d1004 	add	r1, sp, #4	; 0x4
        25fd10:	e28dd004 	add	sp, sp, #4	; 0x4
        25fd14:	eb63cb08 	bl	1b5293c <$PtInRect(Point, Rect *)>
        25fd18:	e3300000 	teq	r0, #0	; 0x0
        25fd1c:	0a000008 	beq	25fd44 <TView::Distance(TPoint, TPoint *)+0xd4>
        25fd20:	e24dd004 	sub	sp, sp, #4	; 0x4
        25fd24:	e28d1004 	add	r1, sp, #4	; 0x4
        25fd28:	e1a0000d 	mov	r0, sp
        25fd2c:	ebfcded4 	bl	197884 <TRect::MidPoint( const(void))>
        25fd30:	e1a0000d 	mov	r0, sp
        25fd34:	e24b1018 	sub	r1, fp, #24	; 0x18
        25fd38:	ebfce521 	bl	1991c4 <CheapDistance__FRC6TPointT1>
        25fd3c:	e1a04000 	mov	r4, r0
        25fd40:	e28dd004 	add	sp, sp, #4	; 0x4
        25fd44:	e28dd008 	add	sp, sp, #8	; 0x8
        25fd48:	ea000008 	b	25fd70 <TView::Distance(TPoint, TPoint *)+0x100>
        25fd4c:	e51b201c 	ldr	r2, [fp, -#28]	; fField28
        25fd50:	e24b1018 	sub	r1, fp, #24	; 0x18
        25fd54:	e1a00002 	mov	r0, r2
        25fd58:	e5922000 	ldr	r2, [r2]
        25fd5c:	e1a0e00f 	mov	lr, pc
        25fd60:	e282f028 	add	pc, r2, #40	; 0x28
        25fd64:	e3300000 	teq	r0, #0	; 0x0
        25fd68:	0a000000 	beq	25fd70 <TView::Distance(TPoint, TPoint *)+0x100>
        25fd6c:	e3a04000 	mov	r4, #0	; 0x0
        25fd70:	e1a00004 	mov	r0, r4
        25fd74:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::FindClosestView(TPoint, unsigned long, long *, TPoint *, unsigned char *)
 * Address: 0025fd78
 */
TView::FindClosestView(TPoint, unsigned long, long *, TPoint *, unsigned char *) {
    /*
        25fd78:	e1a0c00d 	mov	ip, sp
        25fd7c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25fd80:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        25fd84:	e24cb014 	sub	fp, ip, #20	; 0x14
        25fd88:	e1a06001 	mov	r6, r1
        25fd8c:	e1a04000 	mov	r4, r0
        25fd90:	e1a05002 	mov	r5, r2
        25fd94:	e3a00000 	mov	r0, #0	; 0x0
        25fd98:	e59b9018 	ldr	r9, [fp, #24]	; fField24
        25fd9c:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        25fda0:	e5c90000 	strb	r0, [r9]
        25fda4:	e3a07000 	mov	r7, #0	; 0x0
        25fda8:	e1a0200a 	mov	r2, sl
        25fdac:	e1a00004 	mov	r0, r4
        25fdb0:	eb65a5cf 	bl	1bc94f4 <TView::$Distance(TPoint, TPoint *)>
        25fdb4:	e3300801 	teq	r0, #65536	; 0x10000
        25fdb8:	0a000033 	beq	25fe8c <TView::FindClosestView(TPoint, unsigned long, long *, TPoint *, unsigned char *)+0x114>
        25fdbc:	e5941008 	ldr	r1, [r4, #8]	; fField8
        25fdc0:	e3110020 	tst	r1, #32	; 0x20
        25fdc4:	13a01001 	movne	r1, #1	; 0x1
        25fdc8:	15c91000 	strneb	r1, [r9]
        25fdcc:	e3350000 	teq	r5, #0	; 0x0
        25fdd0:	0a000004 	beq	25fde8 <TView::FindClosestView(TPoint, unsigned long, long *, TPoint *, unsigned char *)+0x70>
        25fdd4:	e5941008 	ldr	r1, [r4, #8]	; fField8
        25fdd8:	e3c114fe 	bic	r1, r1, #-33554432	; 0xfe000000
        25fddc:	e3c110ff 	bic	r1, r1, #255	; 0xff
        25fde0:	e1110005 	tst	r1, r5
        25fde4:	0a000002 	beq	25fdf4 <TView::FindClosestView(TPoint, unsigned long, long *, TPoint *, unsigned char *)+0x7c>
        25fde8:	e1a07004 	mov	r7, r4
        25fdec:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        25fdf0:	e5830000 	str	r0, [r3]
        25fdf4:	e24dd008 	sub	sp, sp, #8	; 0x8
        25fdf8:	e3a08801 	mov	r8, #65536	; 0x10000
        25fdfc:	e1a0000d 	mov	r0, sp
        25fe00:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
        25fe04:	eb609d78 	bl	1a873ec <TBackwardLoop::$__ct(CList *)>
        25fe08:	e1a0000d 	mov	r0, sp
        25fe0c:	eb60f400 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        25fe10:	e3300000 	teq	r0, #0	; 0x0
        25fe14:	0a00001b 	beq	25fe88 <TView::FindClosestView(TPoint, unsigned long, long *, TPoint *, unsigned char *)+0x110>
        25fe18:	e3a01801 	mov	r1, #65536	; 0x10000
        25fe1c:	e52d1008 	str	r1, [sp, -#8]!	; fField8
        25fe20:	e28d3004 	add	r3, sp, #4	; 0x4
        25fe24:	e1a0200a 	mov	r2, sl
        25fe28:	e92d000c 	stmdb	sp!, {r2, r3}
        25fe2c:	e28d3008 	add	r3, sp, #8	; 0x8
        25fe30:	e1a02005 	mov	r2, r5
        25fe34:	e1a01006 	mov	r1, r6
        25fe38:	eb65a9b8 	bl	1bca520 <TView::$FindClosestView(TPoint, unsigned long, long *, TPoint *, unsigned char *)>
        25fe3c:	e1a01000 	mov	r1, r0
        25fe40:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        25fe44:	e1500008 	cmp	r0, r8
        25fe48:	aa000003 	bge	25fe5c <TView::FindClosestView(TPoint, unsigned long, long *, TPoint *, unsigned char *)+0xe4>
        25fe4c:	e1a08000 	mov	r8, r0
        25fe50:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        25fe54:	e1a07001 	mov	r7, r1
        25fe58:	e5830000 	str	r0, [r3]
        25fe5c:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        25fe60:	e3300000 	teq	r0, #0	; 0x0
        25fe64:	13a01001 	movne	r1, #1	; 0x1
        25fe68:	15c91000 	strneb	r1, [r9]
        25fe6c:	128dd008 	addne	sp, sp, #8	; 0x8
        25fe70:	1a000004 	bne	25fe88 <TView::FindClosestView(TPoint, unsigned long, long *, TPoint *, unsigned char *)+0x110>
        25fe74:	e28dd008 	add	sp, sp, #8	; 0x8
        25fe78:	e1a0000d 	mov	r0, sp
        25fe7c:	eb60f3e4 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        25fe80:	e3300000 	teq	r0, #0	; 0x0
        25fe84:	1affffe3 	bne	25fe18 <TView::FindClosestView(TPoint, unsigned long, long *, TPoint *, unsigned char *)+0xa0>
        25fe88:	e28dd008 	add	sp, sp, #8	; 0x8
        25fe8c:	e1a00007 	mov	r0, r7
        25fe90:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::FindView(TPoint, unsigned long, TPoint *)
 * Address: 0025fe94
 */
TView::FindView(TPoint, unsigned long, TPoint *) {
    /*
        25fe94:	e1a0c00d 	mov	ip, sp
        25fe98:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25fe9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25fea0:	e1a0c002 	mov	ip, r2
        25fea4:	e1a02003 	mov	r2, r3
        25fea8:	e24dd008 	sub	sp, sp, #8	; 0x8
        25feac:	e1a0300d 	mov	r3, sp
        25feb0:	e92d000c 	stmdb	sp!, {r2, r3}
        25feb4:	e28d300c 	add	r3, sp, #12	; 0xc
        25feb8:	e1a0200c 	mov	r2, ip
        25febc:	eb65a997 	bl	1bca520 <TView::$FindClosestView(TPoint, unsigned long, long *, TPoint *, unsigned char *)>
        25fec0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TView::Offset(TPoint)
 * Address: 0025fec4
 */
TView::Offset(TPoint) {
    /*
        25fec4:	e1a0c00d 	mov	ip, sp
        25fec8:	e92dd833 	stmdb	sp!, {r0, r1, r4, r5, fp, ip, lr, pc}
        25fecc:	e24cb004 	sub	fp, ip, #4	; 0x4
        25fed0:	e1a04000 	mov	r4, r0
        25fed4:	e51b0016 	ldr	r0, [fp, -#22]	; fField22
        25fed8:	e1b00840 	movs	r0, r0, asr #16
        25fedc:	051b0018 	ldreq	r0, [fp, -#24]	; fField24
        25fee0:	01a00840 	moveq	r0, r0, asr #16
        25fee4:	03300000 	teqeq	r0, #0	; 0x0
        25fee8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        25feec:	e1a00004 	mov	r0, r4
        25fef0:	eb65a99e 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        25fef4:	e3300000 	teq	r0, #0	; 0x0
        25fef8:	13a00000 	movne	r0, #0	; 0x0
        25fefc:	03a00001 	moveq	r0, #1	; 0x1
        25ff00:	e21050ff 	ands	r5, r0, #255	; 0xff
        25ff04:	0a00000c 	beq	25ff3c <TView::Offset(TPoint)+0x78>
        25ff08:	e24dd008 	sub	sp, sp, #8	; 0x8
        25ff0c:	e1a0100d 	mov	r1, sp
        25ff10:	e1a00004 	mov	r0, r4
        25ff14:	e5942000 	ldr	r2, [r4]
        25ff18:	e1a0e00f 	mov	lr, pc
        25ff1c:	e282f024 	add	pc, r2, #36	; 0x24
        25ff20:	e1a0100d 	mov	r1, sp
        25ff24:	e594201c 	ldr	r2, [r4, #28]	; fField28
        25ff28:	e1a00002 	mov	r0, r2
        25ff2c:	e5922000 	ldr	r2, [r2]
        25ff30:	e1a0e00f 	mov	lr, pc
        25ff34:	e282f054 	add	pc, r2, #84	; 0x54
        25ff38:	e28dd008 	add	sp, sp, #8	; 0x8
        25ff3c:	e1a00004 	mov	r0, r4
        25ff40:	e3a02000 	mov	r2, #0	; 0x0
        25ff44:	e51b1018 	ldr	r1, [fp, -#24]	; fField24
        25ff48:	e5943000 	ldr	r3, [r4]
        25ff4c:	e1a0e00f 	mov	lr, pc
        25ff50:	e283f0f8 	add	pc, r3, #248	; 0xf8
        25ff54:	e3350000 	teq	r5, #0	; 0x0
        25ff58:	0a000005 	beq	25ff74 <TView::Offset(TPoint)+0xb0>
        25ff5c:	e1a00004 	mov	r0, r4
        25ff60:	e3a01000 	mov	r1, #0	; 0x0
        25ff64:	e5942000 	ldr	r2, [r4]
        25ff68:	e1a0e00f 	mov	lr, pc
        25ff6c:	e282f054 	add	pc, r2, #84	; 0x54
        25ff70:	ea000003 	b	25ff84 <TView::Offset(TPoint)+0xc0>
        25ff74:	e594001c 	ldr	r0, [r4, #28]	; fField28
        25ff78:	e1a01004 	mov	r1, r4
        25ff7c:	e51b2018 	ldr	r2, [fp, -#24]	; fField24
        25ff80:	eb65a550 	bl	1bc94c8 <TView::$ChildViewMoved(TView *, TPoint)>
        25ff84:	e5940028 	ldr	r0, [r4, #40]	; fField40
        25ff88:	e3100101 	tst	r0, #1073741824	; 0x40000000
        25ff8c:	11a00004 	movne	r0, r4
        25ff90:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        25ff94:	1a61ce93 	bne	1ad39e8 <$SetModalView(TView *)>
        25ff98:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::SimpleOffset(TPoint, long)
 * Address: 0025ff9c
 */
TView::SimpleOffset(TPoint, long) {
    /*
        25ff9c:	e1a0c00d 	mov	ip, sp
        25ffa0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25ffa4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ffa8:	e1a05001 	mov	r5, r1
        25ffac:	e1a04000 	mov	r4, r0
        25ffb0:	e3320000 	teq	r2, #0	; 0x0
        25ffb4:	1a000002 	bne	25ffc4 <TView::SimpleOffset(TPoint, long)+0x28>
        25ffb8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        25ffbc:	e3100c01 	tst	r0, #256	; 0x100
        25ffc0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        25ffc4:	e2840010 	add	r0, r4, #16	; 0x10
        25ffc8:	e52d5004 	str	r5, [sp, -#4]!	; fField4
        25ffcc:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        25ffd0:	e1a01841 	mov	r1, r1, asr #16
        25ffd4:	e59d2000 	ldr	r2, [sp]
        25ffd8:	e1a02842 	mov	r2, r2, asr #16
        25ffdc:	eb63c641 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        25ffe0:	e24dd008 	sub	sp, sp, #8	; 0x8
        25ffe4:	e1a0000d 	mov	r0, sp
        25ffe8:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
        25ffec:	eb60a110 	bl	1a88434 <TListLoop::$__ct(CList *)>
        25fff0:	e1a0000d 	mov	r0, sp
        25fff4:	eb60f389 	bl	1a9ce20 <TListLoop::$Next(void)>
        25fff8:	e3300000 	teq	r0, #0	; 0x0
        25fffc:	0a000008 	beq	260024 <TView::SimpleOffset(TPoint, long)+0x88>
        260000:	e3a02001 	mov	r2, #1	; 0x1
        260004:	e1a01005 	mov	r1, r5
        260008:	e5903000 	ldr	r3, [r0]
        26000c:	e1a0e00f 	mov	lr, pc
        260010:	e283f0f8 	add	pc, r3, #248	; 0xf8
        260014:	e1a0000d 	mov	r0, sp
        260018:	eb60f380 	bl	1a9ce20 <TListLoop::$Next(void)>
        26001c:	e3300000 	teq	r0, #0	; 0x0
        260020:	1afffff6 	bne	260000 <TView::SimpleOffset(TPoint, long)+0x64>
        260024:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::ChildViewMoved(TView *, TPoint)
 * Address: 00260028
 */
TView::ChildViewMoved(TView *, TPoint) {
    /*
        260028:	e1a0c00d 	mov	ip, sp
        26002c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        260030:	e24cb004 	sub	fp, ip, #4	; 0x4
        260034:	e1a04002 	mov	r4, r2
        260038:	e1a06000 	mov	r6, r0
        26003c:	e1a05001 	mov	r5, r1
        260040:	e1a00001 	mov	r0, r1
        260044:	eb65a949 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        260048:	e3300000 	teq	r0, #0	; 0x0
        26004c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        260050:	e24dd014 	sub	sp, sp, #20	; 0x14
        260054:	e1a0000d 	mov	r0, sp
        260058:	eb609ce0 	bl	1a873e0 <TRegionVar::$__ct(void)>
        26005c:	e59d0000 	ldr	r0, [sp]
        260060:	eb63ce60 	bl	1b539e8 <$SetEmptyRgn(Region **)>
        260064:	e24dd014 	sub	sp, sp, #20	; 0x14
        260068:	e1a0000d 	mov	r0, sp
        26006c:	eb609cdb 	bl	1a873e0 <TRegionVar::$__ct(void)>
        260070:	e59d0000 	ldr	r0, [sp]
        260074:	eb63ce5b 	bl	1b539e8 <$SetEmptyRgn(Region **)>
        260078:	e24dd008 	sub	sp, sp, #8	; 0x8
        26007c:	e1a0000d 	mov	r0, sp
        260080:	e5b61020 	ldr	r1, [r6, #32]!	; fField32
        260084:	eb609cd8 	bl	1a873ec <TBackwardLoop::$__ct(CList *)>
        260088:	e1a0000d 	mov	r0, sp
        26008c:	eb60f360 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        260090:	e1b06000 	movs	r6, r0
        260094:	159f9004 	ldrne	r9, [pc, #4]	; 2600a0 <TView::ChildViewMoved(TView *, TPoint)+0x78>	; fField4
        260098:	1a000003 	bne	2600ac <TView::ChildViewMoved(TView *, TPoint)+0x84>
        26009c:	ea000044 	b	2601b4 <TView::ChildViewMoved(TView *, TPoint)+0x18c>
        2600a0:	0c101934 	ldceq	9, cr1, [r0], -#208
        2600a4:	e3380000 	teq	r8, #0	; 0x0
        2600a8:	1a000003 	bne	2600bc <TView::ChildViewMoved(TView *, TPoint)+0x94>
        2600ac:	e1360005 	teq	r6, r5
        2600b0:	13a00000 	movne	r0, #0	; 0x0
        2600b4:	03a00001 	moveq	r0, #1	; 0x1
        2600b8:	e20080ff 	and	r8, r0, #255	; 0xff
        2600bc:	e5960008 	ldr	r0, [r6, #8]	; fField8
        2600c0:	e3100001 	tst	r0, #1	; 0x1
        2600c4:	0a000036 	beq	2601a4 <TView::ChildViewMoved(TView *, TPoint)+0x17c>
        2600c8:	e1a00006 	mov	r0, r6
        2600cc:	eb65a500 	bl	1bc94d4 <TView::$Clipper( const(void))>
        2600d0:	e1a07000 	mov	r7, r0
        2600d4:	e1360005 	teq	r6, r5
        2600d8:	1a000010 	bne	260120 <TView::ChildViewMoved(TView *, TPoint)+0xf8>
        2600dc:	e24dd014 	sub	sp, sp, #20	; 0x14
        2600e0:	e5970000 	ldr	r0, [r7]
        2600e4:	e5900000 	ldr	r0, [r0]
        2600e8:	e2801004 	add	r1, r0, #4	; 0x4
        2600ec:	e28d0004 	add	r0, sp, #4	; 0x4
        2600f0:	eb60a0c6 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        2600f4:	e28d0004 	add	r0, sp, #4	; 0x4
        2600f8:	e58d0000 	str	r0, [sp]
        2600fc:	e1a01000 	mov	r1, r0
        260100:	e59d201c 	ldr	r2, [sp, #28]	; fField28
        260104:	e1a00002 	mov	r0, r2
        260108:	eb63d65e 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        26010c:	e28dd004 	add	sp, sp, #4	; 0x4
        260110:	e1a00007 	mov	r0, r7
        260114:	e1a01004 	mov	r1, r4
        260118:	eb60f344 	bl	1a9ce30 <TClipper::$Offset(TPoint)>
        26011c:	e28dd010 	add	sp, sp, #16	; 0x10
        260120:	e3380000 	teq	r8, #0	; 0x0
        260124:	0a00001a 	beq	260194 <TView::ChildViewMoved(TView *, TPoint)+0x16c>
        260128:	e1a00007 	mov	r0, r7
        26012c:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        260130:	eb60ffa6 	bl	1a9ffd0 <TClipper::$RecalcVisible(TBaseRegion)>
        260134:	e1360005 	teq	r6, r5
        260138:	1a000015 	bne	260194 <TView::ChildViewMoved(TView *, TPoint)+0x16c>
        26013c:	e24dd014 	sub	sp, sp, #20	; 0x14
        260140:	e5970000 	ldr	r0, [r7]
        260144:	e5900000 	ldr	r0, [r0]
        260148:	e2801004 	add	r1, r0, #4	; 0x4
        26014c:	e28d0004 	add	r0, sp, #4	; 0x4
        260150:	eb60a0ae 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        260154:	e28d0004 	add	r0, sp, #4	; 0x4
        260158:	e58d0000 	str	r0, [sp]
        26015c:	e1a01000 	mov	r1, r0
        260160:	e59d201c 	ldr	r2, [sp, #28]	; fField28
        260164:	e1a00002 	mov	r0, r2
        260168:	eb63d646 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        26016c:	e28dd004 	add	sp, sp, #4	; 0x4
        260170:	e59d2018 	ldr	r2, [sp, #24]	; fField24
        260174:	e1a00002 	mov	r0, r2
        260178:	e59d102c 	ldr	r1, [sp, #44]	; fField44
        26017c:	eb63b552 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
        260180:	e3a02000 	mov	r2, #0	; 0x0
        260184:	e5990000 	ldr	r0, [r9]
        260188:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        26018c:	eb60eae8 	bl	1a9ad34 <TRootView::$Invalidate(TBaseRegion const, TView *)>
        260190:	e28dd010 	add	sp, sp, #16	; 0x10
        260194:	e5971000 	ldr	r1, [r7]
        260198:	e59d201c 	ldr	r2, [sp, #28]	; fField28
        26019c:	e1a00002 	mov	r0, r2
        2601a0:	eb63d638 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        2601a4:	e1a0000d 	mov	r0, sp
        2601a8:	eb60f319 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        2601ac:	e1b06000 	movs	r6, r0
        2601b0:	1affffbb 	bne	2600a4 <TView::ChildViewMoved(TView *, TPoint)+0x7c>
        2601b4:	e28dd008 	add	sp, sp, #8	; 0x8
        2601b8:	e1a0000d 	mov	r0, sp
        2601bc:	e3a01000 	mov	r1, #0	; 0x0
        2601c0:	eb60a09f 	bl	1a88444 <TRegionVar::$__dt(void)>
        2601c4:	e28dd014 	add	sp, sp, #20	; 0x14
        2601c8:	e1a0000d 	mov	r0, sp
        2601cc:	e3a01000 	mov	r1, #0	; 0x0
        2601d0:	eb60a09b 	bl	1a88444 <TRegionVar::$__dt(void)>
        2601d4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TView::Dump(long)
 * Address: 00260274
 */
TView::Dump(long) {
    /*
        260274:	e1a0c00d 	mov	ip, sp
        260278:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        26027c:	e24cb004 	sub	fp, ip, #4	; 0x4
        260280:	e1a04000 	mov	r4, r0
        260284:	e1a05001 	mov	r5, r1
        260288:	e3a07000 	mov	r7, #0	; 0x0
        26028c:	e52d706c 	str	r7, [sp, -#108]!
        260290:	e28d0008 	add	r0, sp, #8	; 0x8
        260294:	eb6549b6 	bl	1bb2974 <$setjmp>
        260298:	e59f846c 	ldr	r8, [pc, #46c]	; 26070c <TView::Dump(long)+0x498>
        26029c:	e3300000 	teq	r0, #0	; 0x0
        2602a0:	1a000273 	bne	260c74 <TView::Dump(long)+0xa00>
        2602a4:	e1a0000d 	mov	r0, sp
        2602a8:	eb65ff73 	bl	1be007c <$AddExceptionHandler>
        2602ac:	e24dd048 	sub	sp, sp, #72	; 0x48
        2602b0:	e5cd7040 	strb	r7, [sp, #64]
        2602b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2602b8:	e59f1450 	ldr	r1, [pc, #450]	; 260710 <TView::Dump(long)+0x49c>
        2602bc:	e1a00004 	mov	r0, r4
        2602c0:	eb65a8a0 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        2602c4:	eb6587a0 	bl	1bc214c <$AllocateRefHandle(long)>
        2602c8:	e58d0000 	str	r0, [sp]
        2602cc:	e5cd7004 	strb	r7, [sp, #4]	; fField4
        2602d0:	e59d0000 	ldr	r0, [sp]
        2602d4:	e5900000 	ldr	r0, [r0]
        2602d8:	e3300002 	teq	r0, #2	; 0x2
        2602dc:	0a00000b 	beq	260310 <TView::Dump(long)+0x9c>
        2602e0:	e3100003 	tst	r0, #3	; 0x3
        2602e4:	1a000003 	bne	2602f8 <TView::Dump(long)+0x84>
        2602e8:	e1a0000d 	mov	r0, sp
        2602ec:	ebfe25ca 	bl	1e9a1c <GetNameFromDebugHash(RefVar const &)>
        2602f0:	e59d1000 	ldr	r1, [sp]
        2602f4:	e5810000 	str	r0, [r1]
        2602f8:	e1a0000d 	mov	r0, sp
        2602fc:	eb658ba0 	bl	1bc3184 <$GetCString(RefVar const &)>
        260300:	e28d1004 	add	r1, sp, #4	; 0x4
        260304:	e3a0303f 	mov	r3, #63	; 0x3f
        260308:	e3a02001 	mov	r2, #1	; 0x1
        26030c:	eb661c1b 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        260310:	e3a09000 	mov	r9, #0	; 0x0
        260314:	e59f63f8 	ldr	r6, [pc, #3f8]	; 260714 <TView::Dump(long)+0x4a0>
        260318:	e3550000 	cmp	r5, #0	; 0x0
        26031c:	da000005 	ble	260338 <TView::Dump(long)+0xc4>
        260320:	e5960000 	ldr	r0, [r6]
        260324:	e28f1ffb 	add	r1, pc, #1004	; 0x3ec
        260328:	eb04a6e2 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        26032c:	e2899001 	add	r9, r9, #1	; 0x1
        260330:	e1590005 	cmp	r9, r5
        260334:	bafffff9 	blt	260320 <TView::Dump(long)+0xac>
        260338:	e28d2004 	add	r2, sp, #4	; 0x4
        26033c:	e5960000 	ldr	r0, [r6]
        260340:	e28f1ff5 	add	r1, pc, #980	; 0x3d4
        260344:	eb04a6db 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        260348:	e1a09005 	mov	r9, r5
        26034c:	e3550008 	cmp	r5, #8	; 0x8
        260350:	aa000005 	bge	26036c <TView::Dump(long)+0xf8>
        260354:	e5960000 	ldr	r0, [r6]
        260358:	e28f1ff2 	add	r1, pc, #968	; 0x3c8
        26035c:	eb04a6d5 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        260360:	e2899001 	add	r9, r9, #1	; 0x1
        260364:	e3590008 	cmp	r9, #8	; 0x8
        260368:	bafffff9 	blt	260354 <TView::Dump(long)+0xe0>
        26036c:	e5940024 	ldr	r0, [r4, #36]	; fField36
        260370:	e28d2044 	add	r2, sp, #68	; 0x44
        260374:	e5903000 	ldr	r3, [r0]
        260378:	e5960000 	ldr	r0, [r6]
        26037c:	e28f1fea 	add	r1, pc, #936	; 0x3a8
        260380:	eb04a6cc 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        260384:	e5943008 	ldr	r3, [r4, #8]	; fField8
        260388:	e5942014 	ldr	r2, [r4, #20]	; fField20
        26038c:	e1a02842 	mov	r2, r2, asr #16
        260390:	e5941016 	ldr	r1, [r4, #22]	; fField22
        260394:	e1a01841 	mov	r1, r1, asr #16
        260398:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        26039c:	e5943010 	ldr	r3, [r4, #16]	; fField16
        2603a0:	e1a03843 	mov	r3, r3, asr #16
        2603a4:	e5942012 	ldr	r2, [r4, #18]	; fField18
        2603a8:	e1a02842 	mov	r2, r2, asr #16
        2603ac:	e5960000 	ldr	r0, [r6]
        2603b0:	e28f1fe0 	add	r1, pc, #896	; 0x380
        2603b4:	eb04a6bf 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        2603b8:	e28dd00c 	add	sp, sp, #12	; 0xc
        2603bc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2603c0:	e3100001 	tst	r0, #1	; 0x1
        2603c4:	15960000 	ldrne	r0, [r6]
        2603c8:	128f1fe1 	addne	r1, pc, #900	; 0x384
        2603cc:	1b04a6b9 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2603d0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2603d4:	e3100080 	tst	r0, #128	; 0x80
        2603d8:	15960000 	ldrne	r0, [r6]
        2603dc:	128f1fdf 	addne	r1, pc, #892	; 0x37c
        2603e0:	1b04a6b4 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2603e4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2603e8:	e3100002 	tst	r0, #2	; 0x2
        2603ec:	15960000 	ldrne	r0, [r6]
        2603f0:	128f1fdf 	addne	r1, pc, #892	; 0x37c
        2603f4:	1b04a6af 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2603f8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2603fc:	e3100004 	tst	r0, #4	; 0x4
        260400:	15960000 	ldrne	r0, [r6]
        260404:	128f1fdd 	addne	r1, pc, #884	; 0x374
        260408:	1b04a6aa 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        26040c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        260410:	e3100008 	tst	r0, #8	; 0x8
        260414:	15960000 	ldrne	r0, [r6]
        260418:	128f1fdc 	addne	r1, pc, #880	; 0x370
        26041c:	1b04a6a5 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260420:	e5940008 	ldr	r0, [r4, #8]	; fField8
        260424:	e3100020 	tst	r0, #32	; 0x20
        260428:	15960000 	ldrne	r0, [r6]
        26042c:	128f1fdc 	addne	r1, pc, #880	; 0x370
        260430:	1b04a6a0 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260434:	e5940008 	ldr	r0, [r4, #8]	; fField8
        260438:	e3100040 	tst	r0, #64	; 0x40
        26043c:	15960000 	ldrne	r0, [r6]
        260440:	128f1fda 	addne	r1, pc, #872	; 0x368
        260444:	1b04a69b 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260448:	e5940008 	ldr	r0, [r4, #8]	; fField8
        26044c:	e3c014fe 	bic	r1, r0, #-33554432	; 0xfe000000
        260450:	e3c11c01 	bic	r1, r1, #256	; 0x100
        260454:	e3c110ff 	bic	r1, r1, #255	; 0xff
        260458:	e241c77f 	sub	ip, r1, #33292288	; 0x1fc0000
        26045c:	e24ccbff 	sub	ip, ip, #261120	; 0x3fc00
        260460:	e33c0c02 	teq	ip, #512	; 0x200
        260464:	05960000 	ldreq	r0, [r6]
        260468:	028f1fd3 	addeq	r1, pc, #844	; 0x34c
        26046c:	0a00004e 	beq	2605ac <TView::Dump(long)+0x338>
        260470:	e3100c02 	tst	r0, #512	; 0x200
        260474:	15960000 	ldrne	r0, [r6]
        260478:	128f1fd4 	addne	r1, pc, #848	; 0x350
        26047c:	1b04a68d 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260480:	e5940008 	ldr	r0, [r4, #8]	; fField8
        260484:	e3100b01 	tst	r0, #1024	; 0x400
        260488:	15960000 	ldrne	r0, [r6]
        26048c:	128f1fd2 	addne	r1, pc, #840	; 0x348
        260490:	1b04a688 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260494:	e5940008 	ldr	r0, [r4, #8]	; fField8
        260498:	e3100b02 	tst	r0, #2048	; 0x800
        26049c:	15960000 	ldrne	r0, [r6]
        2604a0:	128f1fd2 	addne	r1, pc, #840	; 0x348
        2604a4:	1b04a683 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2604a8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2604ac:	e3100a01 	tst	r0, #4096	; 0x1000
        2604b0:	15960000 	ldrne	r0, [r6]
        2604b4:	128f1fd2 	addne	r1, pc, #840	; 0x348
        2604b8:	1b04a67e 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2604bc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2604c0:	e3100a02 	tst	r0, #8192	; 0x2000
        2604c4:	15960000 	ldrne	r0, [r6]
        2604c8:	128f1fd1 	addne	r1, pc, #836	; 0x344
        2604cc:	1b04a679 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2604d0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2604d4:	e3100901 	tst	r0, #16384	; 0x4000
        2604d8:	15960000 	ldrne	r0, [r6]
        2604dc:	128f1fd1 	addne	r1, pc, #836	; 0x344
        2604e0:	1b04a674 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2604e4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2604e8:	e3100902 	tst	r0, #32768	; 0x8000
        2604ec:	15960000 	ldrne	r0, [r6]
        2604f0:	128f1fd1 	addne	r1, pc, #836	; 0x344
        2604f4:	1b04a66f 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2604f8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2604fc:	e3100801 	tst	r0, #65536	; 0x10000
        260500:	15960000 	ldrne	r0, [r6]
        260504:	128f1fd2 	addne	r1, pc, #840	; 0x348
        260508:	1b04a66a 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        26050c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        260510:	e3100802 	tst	r0, #131072	; 0x20000
        260514:	15960000 	ldrne	r0, [r6]
        260518:	128f1fd1 	addne	r1, pc, #836	; 0x344
        26051c:	1b04a665 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260520:	e5940008 	ldr	r0, [r4, #8]	; fField8
        260524:	e3100701 	tst	r0, #262144	; 0x40000
        260528:	15960000 	ldrne	r0, [r6]
        26052c:	128f1fd0 	addne	r1, pc, #832	; 0x340
        260530:	1b04a660 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260534:	e5940008 	ldr	r0, [r4, #8]	; fField8
        260538:	e3100702 	tst	r0, #524288	; 0x80000
        26053c:	15960000 	ldrne	r0, [r6]
        260540:	128f1fcf 	addne	r1, pc, #828	; 0x33c
        260544:	1b04a65b 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260548:	e5940008 	ldr	r0, [r4, #8]	; fField8
        26054c:	e3100601 	tst	r0, #1048576	; 0x100000
        260550:	15960000 	ldrne	r0, [r6]
        260554:	128f1fcd 	addne	r1, pc, #820	; 0x334
        260558:	1b04a656 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        26055c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        260560:	e3100602 	tst	r0, #2097152	; 0x200000
        260564:	15960000 	ldrne	r0, [r6]
        260568:	128f1fcb 	addne	r1, pc, #812	; 0x32c
        26056c:	1b04a651 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260570:	e5940008 	ldr	r0, [r4, #8]	; fField8
        260574:	e3100501 	tst	r0, #4194304	; 0x400000
        260578:	15960000 	ldrne	r0, [r6]
        26057c:	128f1fca 	addne	r1, pc, #808	; 0x328
        260580:	1b04a64c 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260584:	e5940008 	ldr	r0, [r4, #8]	; fField8
        260588:	e3100502 	tst	r0, #8388608	; 0x800000
        26058c:	15960000 	ldrne	r0, [r6]
        260590:	128f1fc8 	addne	r1, pc, #800	; 0x320
        260594:	1b04a647 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260598:	e5940008 	ldr	r0, [r4, #8]	; fField8
        26059c:	e3100401 	tst	r0, #16777216	; 0x1000000
        2605a0:	0a000002 	beq	2605b0 <TView::Dump(long)+0x33c>
        2605a4:	e5960000 	ldr	r0, [r6]
        2605a8:	e28f1fc6 	add	r1, pc, #792	; 0x318
        2605ac:	eb04a641 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        2605b0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2605b4:	e3100402 	tst	r0, #33554432	; 0x2000000
        2605b8:	15960000 	ldrne	r0, [r6]
        2605bc:	128f1fc7 	addne	r1, pc, #796	; 0x31c
        2605c0:	1b04a63c 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2605c4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2605c8:	e3100301 	tst	r0, #67108864	; 0x4000000
        2605cc:	15960000 	ldrne	r0, [r6]
        2605d0:	128f1fc5 	addne	r1, pc, #788	; 0x314
        2605d4:	1b04a637 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2605d8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2605dc:	e3100302 	tst	r0, #134217728	; 0x8000000
        2605e0:	15960000 	ldrne	r0, [r6]
        2605e4:	128f1fc3 	addne	r1, pc, #780	; 0x30c
        2605e8:	1b04a632 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2605ec:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2605f0:	e3100202 	tst	r0, #536870912	; 0x20000000
        2605f4:	15960000 	ldrne	r0, [r6]
        2605f8:	128f1fc1 	addne	r1, pc, #772	; 0x304
        2605fc:	1b04a62d 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260600:	e1a00004 	mov	r0, r4
        260604:	e5941000 	ldr	r1, [r4]
        260608:	e1a0e00f 	mov	lr, pc
        26060c:	e281f020 	add	pc, r1, #32	; 0x20
        260610:	e3300000 	teq	r0, #0	; 0x0
        260614:	0a000007 	beq	260638 <TView::Dump(long)+0x3c4>
        260618:	e1a00004 	mov	r0, r4
        26061c:	e5941000 	ldr	r1, [r4]
        260620:	e1a0e00f 	mov	lr, pc
        260624:	e281f020 	add	pc, r1, #32	; 0x20
        260628:	e1a02000 	mov	r2, r0
        26062c:	e5960000 	ldr	r0, [r6]
        260630:	e28f1fb7 	add	r1, pc, #732	; 0x2dc
        260634:	eb04a61f 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        260638:	e1a00004 	mov	r0, r4
        26063c:	e5941000 	ldr	r1, [r4]
        260640:	e1a0e00f 	mov	lr, pc
        260644:	e281f020 	add	pc, r1, #32	; 0x20
        260648:	e3100001 	tst	r0, #1	; 0x1
        26064c:	15960000 	ldrne	r0, [r6]
        260650:	128f1fb4 	addne	r1, pc, #720	; 0x2d0
        260654:	1b04a617 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260658:	e1a00004 	mov	r0, r4
        26065c:	e5941000 	ldr	r1, [r4]
        260660:	e1a0e00f 	mov	lr, pc
        260664:	e281f020 	add	pc, r1, #32	; 0x20
        260668:	e3100002 	tst	r0, #2	; 0x2
        26066c:	15960000 	ldrne	r0, [r6]
        260670:	128f1fb2 	addne	r1, pc, #712	; 0x2c8
        260674:	1b04a60f 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260678:	e1a00004 	mov	r0, r4
        26067c:	e5941000 	ldr	r1, [r4]
        260680:	e1a0e00f 	mov	lr, pc
        260684:	e281f020 	add	pc, r1, #32	; 0x20
        260688:	e3100004 	tst	r0, #4	; 0x4
        26068c:	15960000 	ldrne	r0, [r6]
        260690:	128f1fad 	addne	r1, pc, #692	; 0x2b4
        260694:	1b04a607 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260698:	e1a00004 	mov	r0, r4
        26069c:	e5941000 	ldr	r1, [r4]
        2606a0:	e1a0e00f 	mov	lr, pc
        2606a4:	e281f020 	add	pc, r1, #32	; 0x20
        2606a8:	e3100008 	tst	r0, #8	; 0x8
        2606ac:	15960000 	ldrne	r0, [r6]
        2606b0:	128f1fab 	addne	r1, pc, #684	; 0x2ac
        2606b4:	1b04a5ff 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2606b8:	e1a00004 	mov	r0, r4
        2606bc:	e5941000 	ldr	r1, [r4]
        2606c0:	e1a0e00f 	mov	lr, pc
        2606c4:	e281f020 	add	pc, r1, #32	; 0x20
        2606c8:	e3100010 	tst	r0, #16	; 0x10
        2606cc:	15960000 	ldrne	r0, [r6]
        2606d0:	128f1fa8 	addne	r1, pc, #672	; 0x2a0
        2606d4:	1b04a5f7 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2606d8:	e1a00004 	mov	r0, r4
        2606dc:	e5941000 	ldr	r1, [r4]
        2606e0:	e1a0e00f 	mov	lr, pc
        2606e4:	e281f020 	add	pc, r1, #32	; 0x20
        2606e8:	e3100020 	tst	r0, #32	; 0x20
        2606ec:	15960000 	ldrne	r0, [r6]
        2606f0:	128f1fa5 	addne	r1, pc, #660	; 0x294
        2606f4:	1b04a5ef 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2606f8:	e1a00004 	mov	r0, r4
        2606fc:	e5941000 	ldr	r1, [r4]
        260700:	e1a0e00f 	mov	lr, pc
        260704:	e281f020 	add	pc, r1, #32	; 0x20
        260708:	ea0000a6 	b	2609a8 <TView::Dump(long)+0x734>
        26070c:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        260710:	00682840 	rsbeq	r2, r8, r0, asr #16
        260714:	0c101820 	ldceq	8, cr1, [r0], -#128
        260718:	7c000000 	stcvc	0, cr0, [r0]
        26071c:	252d3132 	strcs	r3, [sp, -#306]!
        260720:	2e313273 	mrccs	2, 1, r3, cr1, cr3, {3}
        260724:	00000000 	andeq	r0, r0, r0
        260728:	20000000 	andcs	r0, r0, r0
        26072c:	25347320 	ldrcs	r7, [r4, -#800]!	; fField800
        260730:	23256c58 	teqcs	r5, #22528	; 0x5800
        260734:	00000000 	andeq	r0, r0, r0
        260738:	205b2533 	subcss	r2, fp, r3, lsr r5
        26073c:	6c642c25 	stcvsl	12, cr2, [r4], -#148
        260740:	336c642c 	cmncc	ip, #738197504	; 0x2c000000
        260744:	25336c64 	ldrcs	r6, [r3, -#3172]!
        260748:	2c25336c 	stccs	3, cr3, [r5], -#432
        26074c:	645d2025 	ldrvsb	r2, [sp], -#37
        260750:	386c5800 	stmccda	ip!, {fp, ip, lr}^
        260754:	20765669 	rsbcss	r5, r6, r9, ror #12
        260758:	7369626c 	cmnvc	r9, #-1073741818	; 0xc0000006
        26075c:	65000000 	strvs	r0, [r0]
        260760:	20765772 	rsbcss	r5, r6, r2, ror r7
        260764:	69746550 	ldmvsdb	r4!, {r4, r6, r8, sl, sp, lr}^
        260768:	726f7465 	rsbvc	r7, pc, #1694498816	; 0x65000000
        26076c:	63746564 	cmnvs	r4, #419430400	; 0x19000000
        260770:	00000000 	andeq	r0, r0, r0
        260774:	20765265 	rsbcss	r5, r6, r5, ror #4
        260778:	61644f6e 	cmnvs	r4, lr, ror #30
        26077c:	6c790000 	ldcvsl	0, cr0, [r9]
        260780:	20764170 	rsbcss	r4, r6, r0, ror r1
        260784:	706c6963 	rsbvc	r6, ip, r3, ror #18
        260788:	6174696f 	cmnvs	r4, pc, ror #18
        26078c:	6e000000 	cdpvs	0, 0, cr0, cr0, cr0, {0}
        260790:	20764361 	rsbcss	r4, r6, r1, ror #6
        260794:	6c63756c 	stcvsl	5, cr7, [r3], -#432
        260798:	61746542 	cmnvs	r4, r2, asr #10
        26079c:	6f756e64 	swivs	0x00756e64
        2607a0:	73000000 	tstvc	r0, #0	; 0x0
        2607a4:	2076436c 	rsbcss	r4, r6, ip, ror #6
        2607a8:	69707069 	ldmvsdb	r0!, {r0, r3, r5, r6, ip, sp, lr}^
        2607ac:	6e670000 	cdpvs	0, 6, cr0, cr7, cr0, {0}
        2607b0:	2076466c 	rsbcss	r4, r6, ip, ror #12
        2607b4:	6f617469 	swivs	0x00617469
        2607b8:	6e670000 	cdpvs	0, 6, cr0, cr7, cr0, {0}
        2607bc:	2076416e 	rsbcss	r4, r6, lr, ror #2
        2607c0:	79746869 	ldmvcdb	r4!, {r0, r3, r5, r6, fp, sp, lr}^
        2607c4:	6e67416c 	powvssz	f4, f7, #4.0
        2607c8:	6c6f7765 	stcvsl	7, cr7, [pc], -#404
        2607cc:	64000000 	strvs	r0, [r0]
        2607d0:	2076436c 	rsbcss	r4, r6, ip, ror #6
        2607d4:	69636b61 	stmvsdb	r3!, {r0, r5, r6, r8, r9, fp, sp, lr}^
        2607d8:	626c6500 	rsbvs	r6, ip, #0	; 0x0
        2607dc:	20765374 	rsbcss	r5, r6, r4, ror r3
        2607e0:	726f6b65 	rsbvc	r6, pc, #103424	; 0x19400
        2607e4:	73416c6c 	cmpvc	r1, #27648	; 0x6c00
        2607e8:	6f776564 	swivs	0x00776564
        2607ec:	00000000 	andeq	r0, r0, r0
        2607f0:	20764765 	rsbcss	r4, r6, r5, ror #14
        2607f4:	73747572 	cmnvc	r4, #478150656	; 0x1c800000
        2607f8:	6573416c 	ldrvsb	r4, [r3, -#364]!
        2607fc:	6c6f7765 	stcvsl	7, cr7, [pc], -#404
        260800:	64000000 	strvs	r0, [r0]
        260804:	20764368 	rsbcss	r4, r6, r8, ror #6
        260808:	61727341 	cmnvs	r2, r1, asr #6
        26080c:	6c6c6f77 	stcvsl	15, cr6, [ip], -#476
        260810:	65640000 	strvsb	r0, [r4]!
        260814:	20764e75 	rsbcss	r4, r6, r5, ror lr
        260818:	6d626572 	stcvsl	5, cr6, [r2, -#456]!
        26081c:	73416c6c 	cmpvc	r1, #27648	; 0x6c00
        260820:	6f776564 	swivs	0x00776564
        260824:	00000000 	andeq	r0, r0, r0
        260828:	20764c65 	rsbcss	r4, r6, r5, ror #24
        26082c:	74746572 	ldrvcbt	r6, [r4], -#1394	; fField1394
        260830:	73416c6c 	cmpvc	r1, #27648	; 0x6c00
        260834:	6f776564 	swivs	0x00776564
        260838:	00000000 	andeq	r0, r0, r0
        26083c:	20765075 	rsbcss	r5, r6, r5, ror r0
        260840:	6e637475 	mcrvs	4, 3, r7, cr3, cr5, {3}
        260844:	6174696f 	cmnvs	r4, pc, ror #18
        260848:	6e416c6c 	cdpvs	12, 4, cr6, cr1, cr12, {3}
        26084c:	6f776564 	swivs	0x00776564
        260850:	00000000 	andeq	r0, r0, r0
        260854:	20765368 	rsbcss	r5, r6, r8, ror #6
        260858:	61706573 	cmnvs	r0, r3, ror r5
        26085c:	416c6c6f 	cmnmi	ip, pc, ror #24
        260860:	77656400 	strvcb	r6, [r5, -r0, lsl #8]!	; fField8
        260864:	20764d61 	rsbcss	r4, r6, r1, ror #26
        260868:	7468416c 	strvcbt	r4, [r8], -#364
        26086c:	6c6f7765 	stcvsl	7, cr7, [pc], -#404
        260870:	64000000 	strvs	r0, [r0]
        260874:	20765068 	rsbcss	r5, r6, r8, rrx
        260878:	6f6e6546 	swivs	0x006e6546
        26087c:	69656c64 	stmvsdb	r5!, {r2, r5, r6, sl, fp, sp, lr}^
        260880:	00000000 	andeq	r0, r0, r0
        260884:	20764461 	rsbcss	r4, r6, r1, ror #8
        260888:	74654669 	strvcbt	r4, [r5], -#1641
        26088c:	656c6400 	strvsb	r6, [ip, -#1024]!
        260890:	20765469 	rsbcss	r5, r6, r9, ror #8
        260894:	6d654669 	stcvsl	6, cr4, [r5, -#420]!
        260898:	656c6400 	strvsb	r6, [ip, -#1024]!
        26089c:	20764164 	rsbcss	r4, r6, r4, ror #2
        2608a0:	64726573 	ldrvsbt	r6, [r2], -#1395
        2608a4:	73466965 	cmpvc	r6, #1654784	; 0x194000
        2608a8:	6c640000 	stcvsl	0, cr0, [r4]
        2608ac:	20764e61 	rsbcss	r4, r6, r1, ror #28
        2608b0:	6d654669 	stcvsl	6, cr4, [r5, -#420]!
        2608b4:	656c6400 	strvsb	r6, [ip, -#1024]!
        2608b8:	20764361 	rsbcss	r4, r6, r1, ror #6
        2608bc:	70735265 	rsbvcs	r5, r3, r5, ror #4
        2608c0:	71756972 	cmnvc	r5, r2, ror r9
        2608c4:	65640000 	strvsb	r0, [r4]!
        2608c8:	20764375 	rsbcss	r4, r6, r5, ror r3
        2608cc:	73746f6d 	cmnvc	r4, #436	; 0x1b4
        2608d0:	44696374 	strmibt	r6, [r9], -#884
        2608d4:	696f6e61 	stmvsdb	pc!, {r0, r5, r6, r9, sl, fp, sp, lr}^
        2608d8:	72696573 	rsbvc	r6, r9, #482344960	; 0x1cc00000
        2608dc:	00000000 	andeq	r0, r0, r0
        2608e0:	20765365 	rsbcss	r5, r6, r5, ror #6
        2608e4:	6c656374 	stcvsl	3, cr6, [r5], -#464
        2608e8:	65640000 	strvsb	r0, [r4]!
        2608ec:	2076436c 	rsbcss	r4, r6, ip, ror #6
        2608f0:	6970626f 	ldmvsdb	r0!, {r0, r1, r2, r3, r5, r6, r9, sp, lr}^
        2608f4:	61726400 	cmnvs	r2, r0, lsl #8
        2608f8:	20764e6f 	rsbcss	r4, r6, pc, ror #28
        2608fc:	53637269 	cmnpl	r3, #-1879048186	; 0x90000006
        260900:	70747300 	rsbvcs	r7, r4, r0, lsl #6
        260904:	20764861 	rsbcss	r4, r6, r1, ror #16
        260908:	7349646c 	cmpvc	r9, #1811939328	; 0x6c000000
        26090c:	65724869 	ldrvsb	r4, [r2, -#2153]!
        260910:	6e740000 	cdpvs	0, 7, cr0, cr4, cr0, {0}
        260914:	20746578 	rsbcss	r6, r4, r8, ror r5
        260918:	74466c61 	strvcb	r6, [r6], -#3169
        26091c:	67733a20 	ldrvsb	r3, [r3, -r0, lsr #20]!	; fField20
        260920:	256c5820 	strcsb	r5, [ip, -#2080]!
        260924:	00000000 	andeq	r0, r0, r0
        260928:	20765769 	rsbcss	r5, r6, r9, ror #14
        26092c:	64746849 	ldrvsbt	r6, [r4], -#2121	; fField2121
        260930:	73506172 	cmpvc	r0, #-2147483620	; 0x8000001c
        260934:	656e7457 	strvsb	r7, [lr, -#1111]!
        260938:	69647468 	stmvsdb	r4!, {r3, r5, r6, sl, ip, sp, lr}^
        26093c:	00000000 	andeq	r0, r0, r0
        260940:	20764e6f 	rsbcss	r4, r6, pc, ror #28
        260944:	53706163 	cmnpl	r0, #-1073741800	; 0xc0000018
        260948:	65730000 	ldrvsb	r0, [r3]!
        26094c:	20765769 	rsbcss	r5, r6, r9, ror #14
        260950:	64746847 	ldrvsbt	r6, [r4], -#2119	; fField2119
        260954:	726f7773 	rsbvc	r7, pc, #30146560	; 0x1cc0000
        260958:	57697468 	strplb	r7, [r9, -r8, ror #8]!	; fField8
        26095c:	54657874 	strplbt	r7, [r5], -#2164
        260960:	00000000 	andeq	r0, r0, r0
        260964:	20764669 	rsbcss	r4, r6, r9, ror #12
        260968:	78656454 	stmvcda	r5!, {r2, r4, r6, sl, sp, lr}^
        26096c:	65787453 	ldrvsb	r7, [r8, -#1107]!
        260970:	74796c65 	ldrvcbt	r6, [r9], -#3173
        260974:	00000000 	andeq	r0, r0, r0
        260978:	20764669 	rsbcss	r4, r6, r9, ror #12
        26097c:	78656449 	stmvcda	r5!, {r0, r3, r6, sl, sp, lr}^
        260980:	6e6b5465 	cdpvs	4, 6, cr5, cr11, cr5, {3}
        260984:	78745374 	ldmvcda	r4!, {r2, r4, r5, r6, r8, r9, ip, lr}^
        260988:	796c6500 	stmvcdb	ip!, {r8, sl, sp, lr}^
        26098c:	2076416c 	rsbcss	r4, r6, ip, ror #2
        260990:	69676e54 	stmvsdb	r7!, {r2, r4, r6, r9, sl, fp, sp, lr}^
        260994:	6f506172 	swivs	0x00506172
        260998:	656e744c 	strvsb	r7, [lr, -#1100]!
        26099c:	696e6553 	stmvsdb	lr!, {r0, r1, r4, r6, r8, sl, sp, lr}^
        2609a0:	70616369 	rsbvc	r6, r1, r9, ror #6
        2609a4:	6e670000 	cdpvs	0, 6, cr0, cr7, cr0, {0}
        2609a8:	e3100040 	tst	r0, #64	; 0x40
        2609ac:	15960000 	ldrne	r0, [r6]
        2609b0:	128f1f68 	addne	r1, pc, #416	; 0x1a0
        2609b4:	1b04a53f 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2609b8:	e1a00004 	mov	r0, r4
        2609bc:	e5941000 	ldr	r1, [r4]
        2609c0:	e1a0e00f 	mov	lr, pc
        2609c4:	e281f020 	add	pc, r1, #32	; 0x20
        2609c8:	e3100080 	tst	r0, #128	; 0x80
        2609cc:	15960000 	ldrne	r0, [r6]
        2609d0:	128f1f64 	addne	r1, pc, #400	; 0x190
        2609d4:	1b04a537 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2609d8:	e1a00004 	mov	r0, r4
        2609dc:	e5941000 	ldr	r1, [r4]
        2609e0:	e1a0e00f 	mov	lr, pc
        2609e4:	e281f020 	add	pc, r1, #32	; 0x20
        2609e8:	e3100c01 	tst	r0, #256	; 0x100
        2609ec:	15960000 	ldrne	r0, [r6]
        2609f0:	128f1f60 	addne	r1, pc, #384	; 0x180
        2609f4:	1b04a52f 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        2609f8:	e1a00004 	mov	r0, r4
        2609fc:	e5941000 	ldr	r1, [r4]
        260a00:	e1a0e00f 	mov	lr, pc
        260a04:	e281f020 	add	pc, r1, #32	; 0x20
        260a08:	e3100c02 	tst	r0, #512	; 0x200
        260a0c:	15960000 	ldrne	r0, [r6]
        260a10:	128f1f5d 	addne	r1, pc, #372	; 0x174
        260a14:	1b04a527 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260a18:	e1a00004 	mov	r0, r4
        260a1c:	e5941000 	ldr	r1, [r4]
        260a20:	e1a0e00f 	mov	lr, pc
        260a24:	e281f020 	add	pc, r1, #32	; 0x20
        260a28:	e3100b01 	tst	r0, #1024	; 0x400
        260a2c:	15960000 	ldrne	r0, [r6]
        260a30:	128f1f5a 	addne	r1, pc, #360	; 0x168
        260a34:	1b04a51f 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260a38:	e1a00004 	mov	r0, r4
        260a3c:	e5941000 	ldr	r1, [r4]
        260a40:	e1a0e00f 	mov	lr, pc
        260a44:	e281f020 	add	pc, r1, #32	; 0x20
        260a48:	e3100b02 	tst	r0, #2048	; 0x800
        260a4c:	15960000 	ldrne	r0, [r6]
        260a50:	128f1f57 	addne	r1, pc, #348	; 0x15c
        260a54:	1b04a517 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260a58:	e1a00004 	mov	r0, r4
        260a5c:	e5941000 	ldr	r1, [r4]
        260a60:	e1a0e00f 	mov	lr, pc
        260a64:	e281f020 	add	pc, r1, #32	; 0x20
        260a68:	e3100a01 	tst	r0, #4096	; 0x1000
        260a6c:	15960000 	ldrne	r0, [r6]
        260a70:	128f1f54 	addne	r1, pc, #336	; 0x150
        260a74:	1b04a50f 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260a78:	e1a00004 	mov	r0, r4
        260a7c:	e5941000 	ldr	r1, [r4]
        260a80:	e1a0e00f 	mov	lr, pc
        260a84:	e281f020 	add	pc, r1, #32	; 0x20
        260a88:	e3100a02 	tst	r0, #8192	; 0x2000
        260a8c:	15960000 	ldrne	r0, [r6]
        260a90:	128f1f52 	addne	r1, pc, #328	; 0x148
        260a94:	1b04a507 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260a98:	e1a00004 	mov	r0, r4
        260a9c:	e5941000 	ldr	r1, [r4]
        260aa0:	e1a0e00f 	mov	lr, pc
        260aa4:	e281f020 	add	pc, r1, #32	; 0x20
        260aa8:	e3100901 	tst	r0, #16384	; 0x4000
        260aac:	15960000 	ldrne	r0, [r6]
        260ab0:	128f1f50 	addne	r1, pc, #320	; 0x140
        260ab4:	1b04a4ff 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260ab8:	e1a00004 	mov	r0, r4
        260abc:	e5941000 	ldr	r1, [r4]
        260ac0:	e1a0e00f 	mov	lr, pc
        260ac4:	e281f020 	add	pc, r1, #32	; 0x20
        260ac8:	e3100902 	tst	r0, #32768	; 0x8000
        260acc:	15960000 	ldrne	r0, [r6]
        260ad0:	128f1f4d 	addne	r1, pc, #308	; 0x134
        260ad4:	1b04a4f7 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260ad8:	e1a00004 	mov	r0, r4
        260adc:	e5941000 	ldr	r1, [r4]
        260ae0:	e1a0e00f 	mov	lr, pc
        260ae4:	e281f020 	add	pc, r1, #32	; 0x20
        260ae8:	e3100801 	tst	r0, #65536	; 0x10000
        260aec:	15960000 	ldrne	r0, [r6]
        260af0:	128f1f49 	addne	r1, pc, #292	; 0x124
        260af4:	1b04a4ef 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        260af8:	e5960000 	ldr	r0, [r6]
        260afc:	e28f1f4a 	add	r1, pc, #296	; 0x128
        260b00:	eb04a4ec 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        260b04:	e24dd00c 	sub	sp, sp, #12	; 0xc
        260b08:	e1a0000d 	mov	r0, sp
        260b0c:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
        260b10:	eb609e47 	bl	1a88434 <TListLoop::$__ct(CList *)>
        260b14:	e1a0000d 	mov	r0, sp
        260b18:	eb60f0c0 	bl	1a9ce20 <TListLoop::$Next(void)>
        260b1c:	e1b04000 	movs	r4, r0
        260b20:	0a00004f 	beq	260c64 <TView::Dump(long)+0x9f0>
        260b24:	e24d6064 	sub	r6, sp, #100	; 0x64
        260b28:	e2855001 	add	r5, r5, #1	; 0x1
        260b2c:	e1a00006 	mov	r0, r6
        260b30:	e52d706c 	str	r7, [sp, -#108]!
        260b34:	eb65478e 	bl	1bb2974 <$setjmp>
        260b38:	e3300000 	teq	r0, #0	; 0x0
        260b3c:	1a00003b 	bne	260c30 <TView::Dump(long)+0x9bc>
        260b40:	e1a0000d 	mov	r0, sp
        260b44:	eb65fd4c 	bl	1be007c <$AddExceptionHandler>
        260b48:	e1a01005 	mov	r1, r5
        260b4c:	e1a00004 	mov	r0, r4
        260b50:	ebfffdc7 	bl	260274 <TView::Dump(long)>
        260b54:	ea00003b 	b	260c48 <TView::Dump(long)+0x9d4>
        260b58:	20764e6f 	rsbcss	r4, r6, pc, ror #28
        260b5c:	54726163 	ldrplbt	r6, [r2], -#355
        260b60:	6b536361 	blvs	17398ec <ROM$$Size+0x1019ca0>
        260b64:	6c650000 	stcvsl	0, cr0, [r5]
        260b68:	2076416c 	rsbcss	r4, r6, ip, ror #2
        260b6c:	6c6f7745 	stcvsl	7, cr7, [pc], -#276
        260b70:	6d707479 	ldcvsl	4, cr7, [r0, -#484]!
        260b74:	00000000 	andeq	r0, r0, r0
        260b78:	20764b65 	rsbcss	r4, r6, r5, ror #22
        260b7c:	65705374 	ldrvsb	r5, [r0, -#884]!
        260b80:	796c6573 	stmvcdb	ip!, {r0, r1, r4, r5, r6, r8, sl, sp, lr}^
        260b84:	41727261 	cmnmi	r2, r1, ror #4
        260b88:	79000000 	stmvcdb	r0, {}
        260b8c:	20764578 	rsbcss	r4, r6, r8, ror r5
        260b90:	70656374 	rsbvc	r6, r5, r4, ror r3
        260b94:	696e674e 	stmvsdb	lr!, {r1, r2, r3, r6, r8, r9, sl, sp, lr}^
        260b98:	756d6265 	strvcb	r6, [sp, -#613]!
        260b9c:	72730000 	rsbvcs	r0, r3, #0	; 0x0
        260ba0:	20765369 	rsbcss	r5, r6, r9, ror #6
        260ba4:	6e676c65 	cdpvs	12, 6, cr6, cr7, cr5, {3}
        260ba8:	4b657973 	blmi	1bbf17c <TCommToolProtocol::$CTSetConnectInfo(TCMOCTConnectInfo &)+0x200>
        260bac:	74726f6b 	ldrvcbt	r6, [r2], -#3947
        260bb0:	65730000 	ldrvsb	r0, [r3]!
        260bb4:	20765374 	rsbcss	r5, r6, r4, ror r3
        260bb8:	616e6441 	cmnvs	lr, r1, asr #8
        260bbc:	6c6f6e65 	stcvsl	14, cr6, [pc], -#404
        260bc0:	426f756e 	rsbmi	r7, pc, #461373440	; 0x1b800000
        260bc4:	64730000 	ldrvsbt	r0, [r3]
        260bc8:	2076416c 	rsbcss	r4, r6, ip, ror #2
        260bcc:	77617973 	undefined
        260bd0:	5472794b 	ldrplbt	r7, [r2], -#2379
        260bd4:	6579436f 	ldrvsb	r4, [r9, -#879]!
        260bd8:	6d6d616e 	stfvse	f6, [sp, -#440]!
        260bdc:	64730000 	ldrvsbt	r0, [r3]
        260be0:	20764361 	rsbcss	r4, r6, r1, ror #6
        260be4:	6c6c5374 	stcvsl	3, cr5, [ip], -#464
        260be8:	616e6461 	cmnvs	lr, r1, ror #8
        260bec:	72645363 	rsbvc	r5, r4, #-1946157055	; 0x8c000001
        260bf0:	72697074 	rsbvc	r7, r9, #116	; 0x74
        260bf4:	73000000 	tstvc	r0, #0	; 0x0
        260bf8:	20765461 	rsbcss	r5, r6, r1, ror #8
        260bfc:	6b657343 	blvs	1bbd910 <TCommTool::$CompleteRequest(TUMsgToken &, long, TCommToolReply &)+0xa94>
        260c00:	6f6d6d61 	swivs	0x006d6d61
        260c04:	6e644b65 	cdpvs	11, 6, cr4, cr4, cr5, {3}
        260c08:	79730000 	ldmvcdb	r3!, {}^
        260c0c:	20765461 	rsbcss	r5, r6, r1, ror #8
        260c10:	6b657341 	blvs	1bbd91c <TCommTool::$CompleteRequest(TUMsgToken &, long, TCommToolReply &)+0xaa0>
        260c14:	6c6c4b65 	stcvsl	11, cr4, [ip], -#404
        260c18:	79730000 	ldmvcdb	r3!, {}^
        260c1c:	20765461 	rsbcss	r5, r6, r1, ror #8
        260c20:	6b65734e 	blvs	1bbd960 <TCommTool::$CompleteRequest(TUMsgToken &, long, TCommToolReply &)+0xae4>
        260c24:	6f4b6579 	swivs	0x004b6579
        260c28:	73000000 	tstvc	r0, #0	; 0x0
        260c2c:	0d000000 	stceq	0, cr0, [r0]
        260c30:	e59d0060 	ldr	r0, [sp, #96]
        260c34:	e5981000 	ldr	r1, [r8]
        260c38:	eb660955 	bl	1be3194 <$Subexception>
        260c3c:	e3300000 	teq	r0, #0	; 0x0
        260c40:	01a0000d 	moveq	r0, sp
        260c44:	0b660542 	bleq	1be2154 <$NextHandler>
        260c48:	e1a0000d 	mov	r0, sp
        260c4c:	eb660119 	bl	1be10b8 <$ExitHandler>
        260c50:	e28dd06c 	add	sp, sp, #108	; 0x6c
        260c54:	e1a0000d 	mov	r0, sp
        260c58:	eb60f070 	bl	1a9ce20 <TListLoop::$Next(void)>
        260c5c:	e1b04000 	movs	r4, r0
        260c60:	1affffb1 	bne	260b2c <TView::Dump(long)+0x8b8>
        260c64:	e5bd000c 	ldr	r0, [sp, #12]!	; fField12
        260c68:	eb658953 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        260c6c:	e28dd04c 	add	sp, sp, #76	; 0x4c
        260c70:	ea000005 	b	260c8c <TView::Dump(long)+0xa18>
        260c74:	e59d0060 	ldr	r0, [sp, #96]
        260c78:	e5981000 	ldr	r1, [r8]
        260c7c:	eb660944 	bl	1be3194 <$Subexception>
        260c80:	e3300000 	teq	r0, #0	; 0x0
        260c84:	01a0000d 	moveq	r0, sp
        260c88:	0b660531 	bleq	1be2154 <$NextHandler>
        260c8c:	e1a0000d 	mov	r0, sp
        260c90:	eb660108 	bl	1be10b8 <$ExitHandler>
        260c94:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TView::ReorderView(TView *, long)
 * Address: 00260cd8
 */
TView::ReorderView(TView *, long) {
    /*
        260cd8:	e1a0c00d 	mov	ip, sp
        260cdc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        260ce0:	e24cb004 	sub	fp, ip, #4	; 0x4
        260ce4:	e1a05000 	mov	r5, r0
        260ce8:	e1a07001 	mov	r7, r1
        260cec:	e1a04002 	mov	r4, r2
        260cf0:	e5900020 	ldr	r0, [r0, #32]	; fField32
        260cf4:	eb661dce 	bl	1be8434 <CList::$GetIdentityIndex(void *)>
        260cf8:	e1a06000 	mov	r6, r0
        260cfc:	e5950020 	ldr	r0, [r5, #32]	; fField32
        260d00:	eb61ec2b 	bl	1adbdb4 <$GetFirstNonFloater(TViewList *)>
        260d04:	e5971008 	ldr	r1, [r7, #8]	; fField8
        260d08:	e3110040 	tst	r1, #64	; 0x40
        260d0c:	e59f8080 	ldr	r8, [pc, #80]	; 260d94 <TView::ReorderView(TView *, long)+0xbc>
        260d10:	05971028 	ldreq	r1, [r7, #40]	; fField40
        260d14:	02011101 	andeq	r1, r1, #1073741824	; 0x40000000
        260d18:	03310000 	teqeq	r1, #0	; 0x0
        260d1c:	0a00001d 	beq	260d98 <TView::ReorderView(TView *, long)+0xc0>
        260d20:	e5951020 	ldr	r1, [r5, #32]	; fField32
        260d24:	e5911000 	ldr	r1, [r1]
        260d28:	e2419001 	sub	r9, r1, #1	; 0x1
        260d2c:	e2800001 	add	r0, r0, #1	; 0x1
        260d30:	e1500004 	cmp	r0, r4
        260d34:	d1a00004 	movle	r0, r4
        260d38:	e1500009 	cmp	r0, r9
        260d3c:	a1a00009 	movge	r0, r9
        260d40:	e1a04000 	mov	r4, r0
        260d44:	e5980000 	ldr	r0, [r8]
        260d48:	e1350000 	teq	r5, r0
        260d4c:	1a000017 	bne	260db0 <TView::ReorderView(TView *, long)+0xd8>
        260d50:	e1390006 	teq	r9, r6
        260d54:	1a000002 	bne	260d64 <TView::ReorderView(TView *, long)+0x8c>
        260d58:	e3590000 	cmp	r9, #0	; 0x0
        260d5c:	da000000 	ble	260d64 <TView::ReorderView(TView *, long)+0x8c>
        260d60:	e2499001 	sub	r9, r9, #1	; 0x1
        260d64:	e1a01009 	mov	r1, r9
        260d68:	e5950020 	ldr	r0, [r5, #32]	; fField32
        260d6c:	eb661574 	bl	1be6344 <CList::$At(long)>
        260d70:	e1a01000 	mov	r1, r0
        260d74:	e5980000 	ldr	r0, [r8]
        260d78:	eb62156f 	bl	1ae633c <TRootView::$GetClipboard(TView *)>
        260d7c:	e3300000 	teq	r0, #0	; 0x0
        260d80:	0a00000a 	beq	260db0 <TView::ReorderView(TView *, long)+0xd8>
        260d84:	e3590000 	cmp	r9, #0	; 0x0
        260d88:	c2444001 	subgt	r4, r4, #1	; 0x1
        260d8c:	cafffff3 	bgt	260d60 <TView::ReorderView(TView *, long)+0x88>
        260d90:	ea000006 	b	260db0 <TView::ReorderView(TView *, long)+0xd8>
        260d94:	0c101934 	ldceq	9, cr1, [r0], -#208
        260d98:	e3a01000 	mov	r1, #0	; 0x0
        260d9c:	e3540000 	cmp	r4, #0	; 0x0
        260da0:	a1a01004 	movge	r1, r4
        260da4:	e1510000 	cmp	r1, r0
        260da8:	b1a00001 	movlt	r0, r1
        260dac:	e1a04000 	mov	r4, r0
        260db0:	e1340006 	teq	r4, r6
        260db4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        260db8:	e1a01007 	mov	r1, r7
        260dbc:	e5950020 	ldr	r0, [r5, #32]	; fField32
        260dc0:	eb662e18 	bl	1bec628 <CList::$Remove(void *)>
        260dc4:	e1a02007 	mov	r2, r7
        260dc8:	e1a01004 	mov	r1, r4
        260dcc:	e5950020 	ldr	r0, [r5, #32]	; fField32
        260dd0:	eb6621c5 	bl	1be94ec <CList::$InsertAt(long, void *)>
        260dd4:	e5970008 	ldr	r0, [r7, #8]	; fField8
        260dd8:	e3100001 	tst	r0, #1	; 0x1
        260ddc:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        260de0:	e24dd034 	sub	sp, sp, #52	; 0x34
        260de4:	e28d102c 	add	r1, sp, #44	; 0x2c
        260de8:	e28d0014 	add	r0, sp, #20	; 0x14
        260dec:	eb609d87 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        260df0:	e1a0000d 	mov	r0, sp
        260df4:	eb609979 	bl	1a873e0 <TRegionVar::$__ct(void)>
        260df8:	e59d0000 	ldr	r0, [sp]
        260dfc:	eb63caf9 	bl	1b539e8 <$SetEmptyRgn(Region **)>
        260e00:	e24dd014 	sub	sp, sp, #20	; 0x14
        260e04:	e1a0000d 	mov	r0, sp
        260e08:	eb609974 	bl	1a873e0 <TRegionVar::$__ct(void)>
        260e0c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        260e10:	eb63caf4 	bl	1b539e8 <$SetEmptyRgn(Region **)>
        260e14:	e24dd014 	sub	sp, sp, #20	; 0x14
        260e18:	e1a0000d 	mov	r0, sp
        260e1c:	eb60996f 	bl	1a873e0 <TRegionVar::$__ct(void)>
        260e20:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        260e24:	eb63caef 	bl	1b539e8 <$SetEmptyRgn(Region **)>
        260e28:	e28d104c 	add	r1, sp, #76	; 0x4c
        260e2c:	e1a00007 	mov	r0, r7
        260e30:	e5972000 	ldr	r2, [r7]
        260e34:	e1a0e00f 	mov	lr, pc
        260e38:	e282f024 	add	pc, r2, #36	; 0x24
        260e3c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        260e40:	e5980000 	ldr	r0, [r8]
        260e44:	e1350000 	teq	r5, r0
        260e48:	15950020 	ldrne	r0, [r5, #32]	; fField32
        260e4c:	15907000 	ldrne	r7, [r0]
        260e50:	03e07000 	mvneq	r7, #0	; 0x0
        260e54:	e1540006 	cmp	r4, r6
        260e58:	d1a09006 	movle	r9, r6
        260e5c:	c1a09004 	movgt	r9, r4
        260e60:	b1a06004 	movlt	r6, r4
        260e64:	e1a0a006 	mov	sl, r6
        260e68:	e1a0000d 	mov	r0, sp
        260e6c:	e5951020 	ldr	r1, [r5, #32]	; fField32
        260e70:	eb621953 	bl	1ae73c4 <TBackwardViewListLoop::$__ct(CList *)>
        260e74:	e1a0000d 	mov	r0, sp
        260e78:	ebfffce5 	bl	260214 <TBackwardViewListLoop::Next(void)>
        260e7c:	e1a06000 	mov	r6, r0
        260e80:	e5950020 	ldr	r0, [r5, #32]	; fField32
        260e84:	e5900000 	ldr	r0, [r0]
        260e88:	e1a01007 	mov	r1, r7
        260e8c:	e28d7050 	add	r7, sp, #80	; 0x50
        260e90:	e1300001 	teq	r0, r1
        260e94:	1a000063 	bne	261028 <TView::ReorderView(TView *, long)+0x350>
        260e98:	ea00001a 	b	260f08 <TView::ReorderView(TView *, long)+0x230>
        260e9c:	e5960008 	ldr	r0, [r6, #8]	; fField8
        260ea0:	e3100001 	tst	r0, #1	; 0x1
        260ea4:	0a000014 	beq	260efc <TView::ReorderView(TView *, long)+0x224>
        260ea8:	e28d1060 	add	r1, sp, #96	; 0x60
        260eac:	e1a00006 	mov	r0, r6
        260eb0:	e5962000 	ldr	r2, [r6]
        260eb4:	e1a0e00f 	mov	lr, pc
        260eb8:	e282f024 	add	pc, r2, #36	; 0x24
        260ebc:	e28d1060 	add	r1, sp, #96	; 0x60
        260ec0:	e28d0058 	add	r0, sp, #88	; 0x58
        260ec4:	eb60e794 	bl	1a9ad1c <TRect::$Intersects( const(TRect const &))>
        260ec8:	e3300000 	teq	r0, #0	; 0x0
        260ecc:	0a00000a 	beq	260efc <TView::ReorderView(TView *, long)+0x224>
        260ed0:	e28d1060 	add	r1, sp, #96	; 0x60
        260ed4:	e8915000 	ldmia	r1, {ip, lr}
        260ed8:	e8875000 	stmia	r7, {ip, lr}
        260edc:	e24dd004 	sub	sp, sp, #4	; 0x4
        260ee0:	e28d004c 	add	r0, sp, #76	; 0x4c
        260ee4:	e58d0000 	str	r0, [sp]
        260ee8:	e1a01000 	mov	r1, r0
        260eec:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        260ef0:	e1a00002 	mov	r0, r2
        260ef4:	eb63d2e3 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        260ef8:	e28dd004 	add	sp, sp, #4	; 0x4
        260efc:	e1a0000d 	mov	r0, sp
        260f00:	ebfffcc3 	bl	260214 <TBackwardViewListLoop::Next(void)>
        260f04:	e1a06000 	mov	r6, r0
        260f08:	e3360000 	teq	r6, #0	; 0x0
        260f0c:	0a000095 	beq	261168 <TView::ReorderView(TView *, long)+0x490>
        260f10:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        260f14:	e1500009 	cmp	r0, r9
        260f18:	caffffdf 	bgt	260e9c <TView::ReorderView(TView *, long)+0x1c4>
        260f1c:	ea00001c 	b	260f94 <TView::ReorderView(TView *, long)+0x2bc>
        260f20:	e5960008 	ldr	r0, [r6, #8]	; fField8
        260f24:	e3100001 	tst	r0, #1	; 0x1
        260f28:	159d0004 	ldrne	r0, [sp, #4]	; fField4
        260f2c:	11300004 	teqne	r0, r4
        260f30:	0a000014 	beq	260f88 <TView::ReorderView(TView *, long)+0x2b0>
        260f34:	e28d1060 	add	r1, sp, #96	; 0x60
        260f38:	e1a00006 	mov	r0, r6
        260f3c:	e5962000 	ldr	r2, [r6]
        260f40:	e1a0e00f 	mov	lr, pc
        260f44:	e282f024 	add	pc, r2, #36	; 0x24
        260f48:	e28d1060 	add	r1, sp, #96	; 0x60
        260f4c:	e28d0058 	add	r0, sp, #88	; 0x58
        260f50:	eb60e771 	bl	1a9ad1c <TRect::$Intersects( const(TRect const &))>
        260f54:	e3300000 	teq	r0, #0	; 0x0
        260f58:	0a00000a 	beq	260f88 <TView::ReorderView(TView *, long)+0x2b0>
        260f5c:	e28d1060 	add	r1, sp, #96	; 0x60
        260f60:	e8915000 	ldmia	r1, {ip, lr}
        260f64:	e8875000 	stmia	r7, {ip, lr}
        260f68:	e24dd004 	sub	sp, sp, #4	; 0x4
        260f6c:	e28d004c 	add	r0, sp, #76	; 0x4c
        260f70:	e58d0000 	str	r0, [sp]
        260f74:	e1a01000 	mov	r1, r0
        260f78:	e59d2024 	ldr	r2, [sp, #36]	; fField36
        260f7c:	e1a00002 	mov	r0, r2
        260f80:	eb63d2c0 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        260f84:	e28dd004 	add	sp, sp, #4	; 0x4
        260f88:	e1a0000d 	mov	r0, sp
        260f8c:	ebfffca0 	bl	260214 <TBackwardViewListLoop::Next(void)>
        260f90:	e1a06000 	mov	r6, r0
        260f94:	e3360000 	teq	r6, #0	; 0x0
        260f98:	0a000072 	beq	261168 <TView::ReorderView(TView *, long)+0x490>
        260f9c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        260fa0:	e150000a 	cmp	r0, sl
        260fa4:	aaffffdd 	bge	260f20 <TView::ReorderView(TView *, long)+0x248>
        260fa8:	ea00006e 	b	261168 <TView::ReorderView(TView *, long)+0x490>
        260fac:	e5960008 	ldr	r0, [r6, #8]	; fField8
        260fb0:	e3100001 	tst	r0, #1	; 0x1
        260fb4:	0a000018 	beq	26101c <TView::ReorderView(TView *, long)+0x344>
        260fb8:	e1a00006 	mov	r0, r6
        260fbc:	eb65a144 	bl	1bc94d4 <TView::$Clipper( const(void))>
        260fc0:	e3300000 	teq	r0, #0	; 0x0
        260fc4:	0a000004 	beq	260fdc <TView::ReorderView(TView *, long)+0x304>
        260fc8:	e5901000 	ldr	r1, [r0]
        260fcc:	e59d2034 	ldr	r2, [sp, #52]
        260fd0:	e1a00002 	mov	r0, r2
        260fd4:	eb63d2ab 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        260fd8:	ea00000f 	b	26101c <TView::ReorderView(TView *, long)+0x344>
        260fdc:	e28d1060 	add	r1, sp, #96	; 0x60
        260fe0:	e1a00006 	mov	r0, r6
        260fe4:	e5962000 	ldr	r2, [r6]
        260fe8:	e1a0e00f 	mov	lr, pc
        260fec:	e282f024 	add	pc, r2, #36	; 0x24
        260ff0:	e28d1060 	add	r1, sp, #96	; 0x60
        260ff4:	e8915000 	ldmia	r1, {ip, lr}
        260ff8:	e8875000 	stmia	r7, {ip, lr}
        260ffc:	e24dd004 	sub	sp, sp, #4	; 0x4
        261000:	e28d004c 	add	r0, sp, #76	; 0x4c
        261004:	e58d0000 	str	r0, [sp]
        261008:	e1a01000 	mov	r1, r0
        26100c:	e59d2038 	ldr	r2, [sp, #56]
        261010:	e1a00002 	mov	r0, r2
        261014:	eb63d29b 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        261018:	e28dd004 	add	sp, sp, #4	; 0x4
        26101c:	e1a0000d 	mov	r0, sp
        261020:	ebfffc7b 	bl	260214 <TBackwardViewListLoop::Next(void)>
        261024:	e1a06000 	mov	r6, r0
        261028:	e3360000 	teq	r6, #0	; 0x0
        26102c:	0a000002 	beq	26103c <TView::ReorderView(TView *, long)+0x364>
        261030:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        261034:	e1500009 	cmp	r0, r9
        261038:	caffffdb 	bgt	260fac <TView::ReorderView(TView *, long)+0x2d4>
        26103c:	e59d0034 	ldr	r0, [sp, #52]
        261040:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        261044:	eb63b19a 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        261048:	ea000041 	b	261154 <TView::ReorderView(TView *, long)+0x47c>
        26104c:	e5960008 	ldr	r0, [r6, #8]	; fField8
        261050:	e3100001 	tst	r0, #1	; 0x1
        261054:	0a00003b 	beq	261148 <TView::ReorderView(TView *, long)+0x470>
        261058:	e28d1060 	add	r1, sp, #96	; 0x60
        26105c:	e1a00006 	mov	r0, r6
        261060:	e5962000 	ldr	r2, [r6]
        261064:	e1a0e00f 	mov	lr, pc
        261068:	e282f024 	add	pc, r2, #36	; 0x24
        26106c:	e1a00006 	mov	r0, r6
        261070:	eb65a117 	bl	1bc94d4 <TView::$Clipper( const(void))>
        261074:	e1b06000 	movs	r6, r0
        261078:	0a000017 	beq	2610dc <TView::ReorderView(TView *, long)+0x404>
        26107c:	e28d1060 	add	r1, sp, #96	; 0x60
        261080:	e28d0058 	add	r0, sp, #88	; 0x58
        261084:	eb60e724 	bl	1a9ad1c <TRect::$Intersects( const(TRect const &))>
        261088:	e3300000 	teq	r0, #0	; 0x0
        26108c:	11a00006 	movne	r0, r6
        261090:	159d1034 	ldrne	r1, [sp, #52]
        261094:	1b60fbcd 	blne	1a9ffd0 <TClipper::$RecalcVisible(TBaseRegion)>
        261098:	e5961000 	ldr	r1, [r6]
        26109c:	e59d2034 	ldr	r2, [sp, #52]
        2610a0:	e1a00002 	mov	r0, r2
        2610a4:	eb63d277 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        2610a8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2610ac:	e1300004 	teq	r0, r4
        2610b0:	0a000024 	beq	261148 <TView::ReorderView(TView *, long)+0x470>
        2610b4:	e28d1060 	add	r1, sp, #96	; 0x60
        2610b8:	e28d0058 	add	r0, sp, #88	; 0x58
        2610bc:	eb60e716 	bl	1a9ad1c <TRect::$Intersects( const(TRect const &))>
        2610c0:	e3300000 	teq	r0, #0	; 0x0
        2610c4:	0a00001f 	beq	261148 <TView::ReorderView(TView *, long)+0x470>
        2610c8:	e5961000 	ldr	r1, [r6]
        2610cc:	e59d2020 	ldr	r2, [sp, #32]	; fField32
        2610d0:	e1a00002 	mov	r0, r2
        2610d4:	eb63d26b 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        2610d8:	ea00001a 	b	261148 <TView::ReorderView(TView *, long)+0x470>
        2610dc:	e28d1060 	add	r1, sp, #96	; 0x60
        2610e0:	e8915000 	ldmia	r1, {ip, lr}
        2610e4:	e8875000 	stmia	r7, {ip, lr}
        2610e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2610ec:	e28d004c 	add	r0, sp, #76	; 0x4c
        2610f0:	e58d0000 	str	r0, [sp]
        2610f4:	e1a01000 	mov	r1, r0
        2610f8:	e59d2038 	ldr	r2, [sp, #56]
        2610fc:	e1a00002 	mov	r0, r2
        261100:	eb63d260 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        261104:	e28dd004 	add	sp, sp, #4	; 0x4
        261108:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        26110c:	e1300004 	teq	r0, r4
        261110:	0a00000c 	beq	261148 <TView::ReorderView(TView *, long)+0x470>
        261114:	e28d1060 	add	r1, sp, #96	; 0x60
        261118:	e28d0058 	add	r0, sp, #88	; 0x58
        26111c:	eb60e6fe 	bl	1a9ad1c <TRect::$Intersects( const(TRect const &))>
        261120:	e3300000 	teq	r0, #0	; 0x0
        261124:	0a000007 	beq	261148 <TView::ReorderView(TView *, long)+0x470>
        261128:	e24dd004 	sub	sp, sp, #4	; 0x4
        26112c:	e28d004c 	add	r0, sp, #76	; 0x4c
        261130:	e58d0000 	str	r0, [sp]
        261134:	e1a01000 	mov	r1, r0
        261138:	e59d2024 	ldr	r2, [sp, #36]	; fField36
        26113c:	e1a00002 	mov	r0, r2
        261140:	eb63d250 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        261144:	e28dd004 	add	sp, sp, #4	; 0x4
        261148:	e1a0000d 	mov	r0, sp
        26114c:	ebfffc30 	bl	260214 <TBackwardViewListLoop::Next(void)>
        261150:	e1a06000 	mov	r6, r0
        261154:	e3360000 	teq	r6, #0	; 0x0
        261158:	0a000002 	beq	261168 <TView::ReorderView(TView *, long)+0x490>
        26115c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        261160:	e150000a 	cmp	r0, sl
        261164:	aaffffb8 	bge	26104c <TView::ReorderView(TView *, long)+0x374>
        261168:	e28d1058 	add	r1, sp, #88	; 0x58
        26116c:	e8915000 	ldmia	r1, {ip, lr}
        261170:	e8875000 	stmia	r7, {ip, lr}
        261174:	e24dd004 	sub	sp, sp, #4	; 0x4
        261178:	e28d004c 	add	r0, sp, #76	; 0x4c
        26117c:	e58d0000 	str	r0, [sp]
        261180:	e1a01000 	mov	r1, r0
        261184:	e59d2024 	ldr	r2, [sp, #36]	; fField36
        261188:	e1a00002 	mov	r0, r2
        26118c:	eb63ca0f 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        261190:	e28dd004 	add	sp, sp, #4	; 0x4
        261194:	e59d2020 	ldr	r2, [sp, #32]	; fField32
        261198:	e1a00002 	mov	r0, r2
        26119c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2611a0:	eb63b149 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
        2611a4:	e1a02005 	mov	r2, r5
        2611a8:	e5980000 	ldr	r0, [r8]
        2611ac:	e59d1020 	ldr	r1, [sp, #32]	; fField32
        2611b0:	eb60e6df 	bl	1a9ad34 <TRootView::$Invalidate(TBaseRegion const, TView *)>
        2611b4:	e28dd00c 	add	sp, sp, #12	; 0xc
        2611b8:	e1a0000d 	mov	r0, sp
        2611bc:	e3a01000 	mov	r1, #0	; 0x0
        2611c0:	eb609c9f 	bl	1a88444 <TRegionVar::$__dt(void)>
        2611c4:	e28dd014 	add	sp, sp, #20	; 0x14
        2611c8:	e1a0000d 	mov	r0, sp
        2611cc:	e3a01000 	mov	r1, #0	; 0x0
        2611d0:	eb609c9b 	bl	1a88444 <TRegionVar::$__dt(void)>
        2611d4:	e28dd014 	add	sp, sp, #20	; 0x14
        2611d8:	e1a0000d 	mov	r0, sp
        2611dc:	e3a01000 	mov	r1, #0	; 0x0
        2611e0:	eb609c97 	bl	1a88444 <TRegionVar::$__dt(void)>
        2611e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::BringToFront(void)
 * Address: 002611e8
 */
TView::BringToFront(void) {
    /*
        2611e8:	e1a01000 	mov	r1, r0
        2611ec:	e590001c 	ldr	r0, [r0, #28]	; fField28
        2611f0:	e5902020 	ldr	r2, [r0, #32]	; fField32
        2611f4:	e5922000 	ldr	r2, [r2]
        2611f8:	ea65a8f6 	b	1bcb5d8 <TView::$ReorderView(TView *, long)>
    */
}

/**
 * Symbol: TView::MoveChildBehind(TView *, TView *)
 * Address: 002611fc
 */
TView::MoveChildBehind(TView *, TView *) {
    /*
        2611fc:	e1a0c00d 	mov	ip, sp
        261200:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        261204:	e24cb004 	sub	fp, ip, #4	; 0x4
        261208:	e1a04000 	mov	r4, r0
        26120c:	e1a05001 	mov	r5, r1
        261210:	e1a06002 	mov	r6, r2
        261214:	e5900020 	ldr	r0, [r0, #32]	; fField32
        261218:	eb661c85 	bl	1be8434 <CList::$GetIdentityIndex(void *)>
        26121c:	e1a07000 	mov	r7, r0
        261220:	e3360000 	teq	r6, #0	; 0x0
        261224:	0a000003 	beq	261238 <TView::MoveChildBehind(TView *, TView *)+0x3c>
        261228:	e1a01006 	mov	r1, r6
        26122c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        261230:	eb661c7f 	bl	1be8434 <CList::$GetIdentityIndex(void *)>
        261234:	ea000000 	b	26123c <TView::MoveChildBehind(TView *, TView *)+0x40>
        261238:	e3a00000 	mov	r0, #0	; 0x0
        26123c:	e1a02000 	mov	r2, r0
        261240:	e1570000 	cmp	r7, r0
        261244:	d2422001 	suble	r2, r2, #1	; 0x1
        261248:	d1520007 	cmple	r2, r7
        26124c:	c1a01005 	movgt	r1, r5
        261250:	c1a00004 	movgt	r0, r4
        261254:	c91b68f0 	ldmgtdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        261258:	ca65a8de 	bgt	1bcb5d8 <TView::$ReorderView(TView *, long)>
        26125c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TView::ChildViewFrames(void)
 * Address: 00261260
 */
TView::ChildViewFrames(void) {
    /*
        261260:	e1a0c00d 	mov	ip, sp
        261264:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        261268:	e24cb004 	sub	fp, ip, #4	; 0x4
        26126c:	e1a04000 	mov	r4, r0
        261270:	e5900020 	ldr	r0, [r0, #32]	; fField32
        261274:	e5906000 	ldr	r6, [r0]
        261278:	e1a00006 	mov	r0, r6
        26127c:	eb60eac6 	bl	1a9bd9c <$MakeArray(long)>
        261280:	eb6583b1 	bl	1bc214c <$AllocateRefHandle(long)>
        261284:	e1a05000 	mov	r5, r0
        261288:	e3560000 	cmp	r6, #0	; 0x0
        26128c:	da000019 	ble	2612f8 <TView::ChildViewFrames(void)+0x98>
        261290:	e24dd00c 	sub	sp, sp, #12	; 0xc
        261294:	e3a06000 	mov	r6, #0	; 0x0
        261298:	e3a00002 	mov	r0, #2	; 0x2
        26129c:	eb6583aa 	bl	1bc214c <$AllocateRefHandle(long)>
        2612a0:	e1a07000 	mov	r7, r0
        2612a4:	e1a0000d 	mov	r0, sp
        2612a8:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
        2612ac:	eb609c60 	bl	1a88434 <TListLoop::$__ct(CList *)>
        2612b0:	e1a0000d 	mov	r0, sp
        2612b4:	eb60eed9 	bl	1a9ce20 <TListLoop::$Next(void)>
        2612b8:	e3300000 	teq	r0, #0	; 0x0
        2612bc:	0a00000a 	beq	2612ec <TView::ChildViewFrames(void)+0x8c>
        2612c0:	e5900024 	ldr	r0, [r0, #36]	; fField36
        2612c4:	e5902000 	ldr	r2, [r0]
        2612c8:	e1a01006 	mov	r1, r6
        2612cc:	e5872000 	str	r2, [r7]
        2612d0:	e5950000 	ldr	r0, [r5]
        2612d4:	eb65941f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2612d8:	e2866001 	add	r6, r6, #1	; 0x1
        2612dc:	e1a0000d 	mov	r0, sp
        2612e0:	eb60eece 	bl	1a9ce20 <TListLoop::$Next(void)>
        2612e4:	e3300000 	teq	r0, #0	; 0x0
        2612e8:	1afffff4 	bne	2612c0 <TView::ChildViewFrames(void)+0x60>
        2612ec:	e1a00007 	mov	r0, r7
        2612f0:	eb6587b1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2612f4:	e28dd00c 	add	sp, sp, #12	; 0xc
        2612f8:	e5954000 	ldr	r4, [r5]
        2612fc:	e1a00005 	mov	r0, r5
        261300:	eb6587ad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        261304:	e1a00004 	mov	r0, r4
        261308:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TView::FrontMost(void)
 * Address: 0026130c
 */
TView::FrontMost(void) {
    /*
        26130c:	e1a0c00d 	mov	ip, sp
        261310:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        261314:	e24cb004 	sub	fp, ip, #4	; 0x4
        261318:	e3a04000 	mov	r4, #0	; 0x0
        26131c:	e5901008 	ldr	r1, [r0, #8]	; fField8
        261320:	e3110001 	tst	r1, #1	; 0x1
        261324:	12011004 	andne	r1, r1, #4	; 0x4
        261328:	13310000 	teqne	r1, #0	; 0x0
        26132c:	0a000011 	beq	261378 <TView::FrontMost(void)+0x6c>
        261330:	e1a04000 	mov	r4, r0
        261334:	e24dd008 	sub	sp, sp, #8	; 0x8
        261338:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        26133c:	e1a0000d 	mov	r0, sp
        261340:	eb609829 	bl	1a873ec <TBackwardLoop::$__ct(CList *)>
        261344:	e1a0000d 	mov	r0, sp
        261348:	eb60eeb1 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        26134c:	e3300000 	teq	r0, #0	; 0x0
        261350:	0a000007 	beq	261374 <TView::FrontMost(void)+0x68>
        261354:	eb65a475 	bl	1bca530 <TView::$FrontMost(void)>
        261358:	e3300000 	teq	r0, #0	; 0x0
        26135c:	11a04000 	movne	r4, r0
        261360:	1a000003 	bne	261374 <TView::FrontMost(void)+0x68>
        261364:	e1a0000d 	mov	r0, sp
        261368:	eb60eea9 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        26136c:	e3300000 	teq	r0, #0	; 0x0
        261370:	1afffff7 	bne	261354 <TView::FrontMost(void)+0x48>
        261374:	e28dd008 	add	sp, sp, #8	; 0x8
        261378:	e1a00004 	mov	r0, r4
        26137c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::FrontMostApp(void)
 * Address: 00261380
 */
TView::FrontMostApp(void) {
    /*
        261380:	e1a0c00d 	mov	ip, sp
        261384:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        261388:	e24cb004 	sub	fp, ip, #4	; 0x4
        26138c:	e3a04000 	mov	r4, #0	; 0x0
        261390:	e5901008 	ldr	r1, [r0, #8]	; fField8
        261394:	e3110001 	tst	r1, #1	; 0x1
        261398:	12012004 	andne	r2, r1, #4	; 0x4
        26139c:	13320000 	teqne	r2, #0	; 0x0
        2613a0:	0a000013 	beq	2613f4 <TView::FrontMostApp(void)+0x74>
        2613a4:	e3110040 	tst	r1, #64	; 0x40
        2613a8:	1a000011 	bne	2613f4 <TView::FrontMostApp(void)+0x74>
        2613ac:	e1a04000 	mov	r4, r0
        2613b0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2613b4:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        2613b8:	e1a0000d 	mov	r0, sp
        2613bc:	eb60980a 	bl	1a873ec <TBackwardLoop::$__ct(CList *)>
        2613c0:	e1a0000d 	mov	r0, sp
        2613c4:	eb60ee92 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        2613c8:	e3300000 	teq	r0, #0	; 0x0
        2613cc:	0a000007 	beq	2613f0 <TView::FrontMostApp(void)+0x70>
        2613d0:	eb65a457 	bl	1bca534 <TView::$FrontMostApp(void)>
        2613d4:	e3300000 	teq	r0, #0	; 0x0
        2613d8:	11a04000 	movne	r4, r0
        2613dc:	1a000003 	bne	2613f0 <TView::FrontMostApp(void)+0x70>
        2613e0:	e1a0000d 	mov	r0, sp
        2613e4:	eb60ee8a 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        2613e8:	e3300000 	teq	r0, #0	; 0x0
        2613ec:	1afffff7 	bne	2613d0 <TView::FrontMostApp(void)+0x50>
        2613f0:	e28dd008 	add	sp, sp, #8	; 0x8
        2613f4:	e1a00004 	mov	r0, r4
        2613f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::GetTextStyle(void)
 * Address: 0026180c
 */
TView::GetTextStyle(void) {
    /*
        26180c:	e1a0c00d 	mov	ip, sp
        261810:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        261814:	e24cb004 	sub	fp, ip, #4	; 0x4
        261818:	e1a04000 	mov	r4, r0
        26181c:	e59f102c 	ldr	r1, [pc, #2c]	; 261850 <TView::GetTextStyle(void)+0x44>	; fField2
        261820:	e1a06001 	mov	r6, r1
        261824:	eb65a347 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        261828:	eb658247 	bl	1bc214c <$AllocateRefHandle(long)>
        26182c:	e1a05000 	mov	r5, r0
        261830:	e5900000 	ldr	r0, [r0]
        261834:	e3300002 	teq	r0, #2	; 0x2
        261838:	0a000005 	beq	261854 <TView::GetTextStyle(void)+0x48>
        26183c:	e1a04000 	mov	r4, r0
        261840:	e1a00005 	mov	r0, r5
        261844:	eb65865c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        261848:	e1a00004 	mov	r0, r4
        26184c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        261850:	00684fc8 	rsbeq	r4, r8, r8, asr #31
        261854:	e5940008 	ldr	r0, [r4, #8]	; fField8
        261858:	e3100002 	tst	r0, #2	; 0x2
        26185c:	0a000003 	beq	261870 <TView::GetTextStyle(void)+0x64>
        261860:	e1a01006 	mov	r1, r6
        261864:	e1a00004 	mov	r0, r4
        261868:	eb65a33a 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        26186c:	eafffff2 	b	26183c <TView::GetTextStyle(void)+0x30>
        261870:	e59f0004 	ldr	r0, [pc, #4]	; 26187c <TView::GetTextStyle(void)+0x70>	; fField4
        261874:	eb60d4a2 	bl	1a96b04 <$GetPreference(RefVar const &)>
        261878:	eaffffef 	b	26183c <TView::GetTextStyle(void)+0x30>
        26187c:	00684e48 	rsbeq	r4, r8, r8, asr #28
    */
}

/**
 * Symbol: TView::GetTextStyleRecord(StyleRecord *)
 * Address: 00261880
 */
TView::GetTextStyleRecord(StyleRecord *) {
    /*
        261880:	e1a0c00d 	mov	ip, sp
        261884:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        261888:	e24cb004 	sub	fp, ip, #4	; 0x4
        26188c:	e1a04001 	mov	r4, r1
        261890:	e24dd004 	sub	sp, sp, #4	; 0x4
        261894:	eb65a32c 	bl	1bca54c <TView::$GetTextStyle(void)>
        261898:	eb65822b 	bl	1bc214c <$AllocateRefHandle(long)>
        26189c:	e58d0000 	str	r0, [sp]
        2618a0:	e1a0000d 	mov	r0, sp
        2618a4:	e1a01004 	mov	r1, r4
        2618a8:	eb659f0d 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        2618ac:	e59d0000 	ldr	r0, [sp]
        2618b0:	eb658641 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2618b4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::Printing(void)
 * Address: 00261d44
 */
TView::Printing(void) {
    /*
        261d44:	e1a0c00d 	mov	ip, sp
        261d48:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        261d4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        261d50:	e24dd004 	sub	sp, sp, #4	; 0x4
        261d54:	e1a0000d 	mov	r0, sp
        261d58:	eb663691 	bl	1bef7a4 <$GetPort(GrafPort **)>
        261d5c:	e59d0000 	ldr	r0, [sp]
        261d60:	e5900010 	ldr	r0, [r0, #16]	; fField16
        261d64:	e2100c0f 	ands	r0, r0, #3840	; 0xf00
        261d68:	13a00001 	movne	r0, #1	; 0x1
        261d6c:	e20000ff 	and	r0, r0, #255	; 0xff
        261d70:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TView::Hilites(void)
 * Address: 00261d74
 */
TView::Hilites(void) {
    /*
        261d74:	e59f1000 	ldr	r1, [pc, #0]	; 261d7c <TView::Hilites(void)+0x8>
        261d78:	ea65a1f2 	b	1bca548 <TView::$GetProto( const(RefVar const &))>
        261d7c:	00683110 	rsbeq	r3, r8, r0, lsl r1
    */
}

/**
 * Symbol: TView::Hilited(void)
 * Address: 00261de4
 */
TView::Hilited(void) {
    /*
        261de4:	e1a0c00d 	mov	ip, sp
        261de8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        261dec:	e24cb004 	sub	fp, ip, #4	; 0x4
        261df0:	eb61e7f9 	bl	1adbddc <TView::$Hilites(void)>
        261df4:	eb6580d4 	bl	1bc214c <$AllocateRefHandle(long)>
        261df8:	e1a04000 	mov	r4, r0
        261dfc:	e5900000 	ldr	r0, [r0]
        261e00:	e3300002 	teq	r0, #2	; 0x2
        261e04:	0a000003 	beq	261e18 <TView::Hilited(void)+0x34>
        261e08:	eb658d27 	bl	1bc52ac <$Length(long)>
        261e0c:	e3300000 	teq	r0, #0	; 0x0
        261e10:	13a00001 	movne	r0, #1	; 0x1
        261e14:	1a000000 	bne	261e1c <TView::Hilited(void)+0x38>
        261e18:	e3a00000 	mov	r0, #0	; 0x0
        261e1c:	e20050ff 	and	r5, r0, #255	; 0xff
        261e20:	e1a00004 	mov	r0, r4
        261e24:	eb6584e4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        261e28:	e1a00005 	mov	r0, r5
        261e2c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::FirstHilite(void)
 * Address: 00261e30
 */
TView::FirstHilite(void) {
    /*
        261e30:	e1a0c00d 	mov	ip, sp
        261e34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        261e38:	e24cb004 	sub	fp, ip, #4	; 0x4
        261e3c:	eb61e7e6 	bl	1adbddc <TView::$Hilites(void)>
        261e40:	eb6580c1 	bl	1bc214c <$AllocateRefHandle(long)>
        261e44:	e1a04000 	mov	r4, r0
        261e48:	e5900000 	ldr	r0, [r0]
        261e4c:	e3a05000 	mov	r5, #0	; 0x0
        261e50:	e3300002 	teq	r0, #2	; 0x2
        261e54:	0a000002 	beq	261e64 <TView::FirstHilite(void)+0x34>
        261e58:	eb658d13 	bl	1bc52ac <$Length(long)>
        261e5c:	e3300000 	teq	r0, #0	; 0x0
        261e60:	1a000003 	bne	261e74 <TView::FirstHilite(void)+0x44>
        261e64:	e1a00004 	mov	r0, r4
        261e68:	eb6584d3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        261e6c:	e3a00002 	mov	r0, #2	; 0x2
        261e70:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        261e74:	e1a01005 	mov	r1, r5
        261e78:	e5940000 	ldr	r0, [r4]
        261e7c:	eb6588f4 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        261e80:	e1a05000 	mov	r5, r0
        261e84:	e1a00004 	mov	r0, r4
        261e88:	eb6584cb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        261e8c:	e1a00005 	mov	r0, r5
        261e90:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::DrawHilites(unsigned char)
 * Address: 00261e94
 */
TView::DrawHilites(unsigned char) {
    /*
        261e94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::RemoveHilite(RefVar const &)
 * Address: 00261e98
 */
TView::RemoveHilite(RefVar const &) {
    /*
        261e98:	e1a0c00d 	mov	ip, sp
        261e9c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        261ea0:	e24cb004 	sub	fp, ip, #4	; 0x4
        261ea4:	e1a04000 	mov	r4, r0
        261ea8:	e1a05001 	mov	r5, r1
        261eac:	e2800024 	add	r0, r0, #36	; 0x24
        261eb0:	e1a02001 	mov	r2, r1
        261eb4:	e59f10a0 	ldr	r1, [pc, #a0]	; 261f5c <TView::RemoveHilite(RefVar const &)+0xc4>
        261eb8:	eb60a1a3 	bl	1a8a54c <$ArrayRemove__FRC6RefVarN21>
        261ebc:	e24dd008 	sub	sp, sp, #8	; 0x8
        261ec0:	e5950000 	ldr	r0, [r5]
        261ec4:	e5900000 	ldr	r0, [r0]
        261ec8:	eb60f844 	bl	1a9ffe0 <$RefToAddress(long)>
        261ecc:	e2801004 	add	r1, r0, #4	; 0x4
        261ed0:	e8915000 	ldmia	r1, {ip, lr}
        261ed4:	e88d5000 	stmia	sp, {ip, lr}
        261ed8:	e3300000 	teq	r0, #0	; 0x0
        261edc:	0a000002 	beq	261eec <TView::RemoveHilite(RefVar const &)+0x54>
        261ee0:	e3a01001 	mov	r1, #1	; 0x1
        261ee4:	e1a0e00f 	mov	lr, pc
        261ee8:	e590f000 	ldr	pc, [r0]
        261eec:	e24dd004 	sub	sp, sp, #4	; 0x4
        261ef0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        261ef4:	e58d0000 	str	r0, [sp]
        261ef8:	e28d0004 	add	r0, sp, #4	; 0x4
        261efc:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        261f00:	e1a01841 	mov	r1, r1, asr #16
        261f04:	e59d2000 	ldr	r2, [sp]
        261f08:	e1a02842 	mov	r2, r2, asr #16
        261f0c:	eb63be75 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        261f10:	e28dd004 	add	sp, sp, #4	; 0x4
        261f14:	e1a0100d 	mov	r1, sp
        261f18:	e594201c 	ldr	r2, [r4, #28]	; fField28
        261f1c:	e1a00002 	mov	r0, r2
        261f20:	e5922000 	ldr	r2, [r2]
        261f24:	e1a0e00f 	mov	lr, pc
        261f28:	e282f054 	add	pc, r2, #84	; 0x54
        261f2c:	e1a00004 	mov	r0, r4
        261f30:	e5941000 	ldr	r1, [r4]
        261f34:	e1a0e00f 	mov	lr, pc
        261f38:	e281f094 	add	pc, r1, #148	; 0x94
        261f3c:	e3300000 	teq	r0, #0	; 0x0
        261f40:	059f0018 	ldreq	r0, [pc, #18]	; 261f60 <TView::RemoveHilite(RefVar const &)+0xc8>	; fField18
        261f44:	05900000 	ldreq	r0, [r0]
        261f48:	05901030 	ldreq	r1, [r0, #48]
        261f4c:	01310004 	teqeq	r1, r4
        261f50:	03a01000 	moveq	r1, #0	; 0x0
        261f54:	05a01030 	streq	r1, [r0, #48]!
        261f58:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        261f5c:	00683110 	rsbeq	r3, r8, r0, lsl r1
        261f60:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TView::RemoveAllHilites(void)
 * Address: 00261f64
 */
TView::RemoveAllHilites(void) {
    /*
        261f64:	e1a0c00d 	mov	ip, sp
        261f68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        261f6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        261f70:	e1a04000 	mov	r4, r0
        261f74:	e24dd014 	sub	sp, sp, #20	; 0x14
        261f78:	e1a01000 	mov	r1, r0
        261f7c:	e1a0000d 	mov	r0, sp
        261f80:	eb609514 	bl	1a873d8 <HiliteLoop::$__ct(TView *)>
        261f84:	e1a0000d 	mov	r0, sp
        261f88:	eb60eba0 	bl	1a9ce10 <HiliteLoop::$Next(void)>
        261f8c:	e28d500c 	add	r5, sp, #12	; 0xc
        261f90:	e3300000 	teq	r0, #0	; 0x0
        261f94:	0a00000e 	beq	261fd4 <TView::RemoveAllHilites(void)+0x70>
        261f98:	e1a01005 	mov	r1, r5
        261f9c:	e1a00004 	mov	r0, r4
        261fa0:	e5942000 	ldr	r2, [r4]
        261fa4:	e1a0e00f 	mov	lr, pc
        261fa8:	e282f0a8 	add	pc, r2, #168	; 0xa8
        261fac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        261fb0:	e2400001 	sub	r0, r0, #1	; 0x1
        261fb4:	e58d0004 	str	r0, [sp, #4]	; fField4
        261fb8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        261fbc:	e2400001 	sub	r0, r0, #1	; 0x1
        261fc0:	e58d0008 	str	r0, [sp, #8]	; fField8
        261fc4:	e1a0000d 	mov	r0, sp
        261fc8:	eb60eb90 	bl	1a9ce10 <HiliteLoop::$Next(void)>
        261fcc:	e3300000 	teq	r0, #0	; 0x0
        261fd0:	1afffff0 	bne	261f98 <TView::RemoveAllHilites(void)+0x34>
        261fd4:	e59f0020 	ldr	r0, [pc, #20]	; 261ffc <TView::RemoveAllHilites(void)+0x98>	; fField20
        261fd8:	e5900000 	ldr	r0, [r0]
        261fdc:	e5901030 	ldr	r1, [r0, #48]
        261fe0:	e1310004 	teq	r1, r4
        261fe4:	03a01000 	moveq	r1, #0	; 0x0
        261fe8:	05a01030 	streq	r1, [r0, #48]!
        261fec:	e1a0000d 	mov	r0, sp
        261ff0:	e3a01000 	mov	r1, #0	; 0x0
        261ff4:	eb609911 	bl	1a88440 <HiliteLoop::$__dt(void)>
        261ff8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        261ffc:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TView::IsCompletelyHilited(RefVar const &)
 * Address: 00262000
 */
TView::IsCompletelyHilited(RefVar const &) {
    /*
        262000:	e3a00001 	mov	r0, #1	; 0x1
        262004:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::HiliteAll(void)
 * Address: 00262008
 */
TView::HiliteAll(void) {
    /*
        262008:	e1a0c00d 	mov	ip, sp
        26200c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        262010:	e24cb004 	sub	fp, ip, #4	; 0x4
        262014:	e1a04000 	mov	r4, r0
        262018:	e5901000 	ldr	r1, [r0]
        26201c:	e1a0e00f 	mov	lr, pc
        262020:	e281f0ac 	add	pc, r1, #172	; 0xac
        262024:	e3a00000 	mov	r0, #0	; 0x0
        262028:	eb6098fc 	bl	1a88420 <THilite::$__ct(void)>
        26202c:	e1b05000 	movs	r5, r0
        262030:	1a000005 	bne	26204c <TView::HiliteAll(void)+0x44>
        262034:	e59f00c0 	ldr	r0, [pc, #c0]	; 2620fc <TView::HiliteAll(void)+0xf4>
        262038:	e5900000 	ldr	r0, [r0]
        26203c:	e3a02000 	mov	r2, #0	; 0x0
        262040:	e3a010e9 	mov	r1, #233	; 0xe9
        262044:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        262048:	eb660453 	bl	1be319c <$Throw>
        26204c:	e24dd008 	sub	sp, sp, #8	; 0x8
        262050:	e2840010 	add	r0, r4, #16	; 0x10
        262054:	e8901008 	ldmia	r0, {r3, ip}
        262058:	e88d1008 	stmia	sp, {r3, ip}
        26205c:	e3a00000 	mov	r0, #0	; 0x0
        262060:	e5c50005 	strb	r0, [r5, #5]
        262064:	e5c50004 	strb	r0, [r5, #4]	; fField4
        262068:	e5c50007 	strb	r0, [r5, #7]
        26206c:	e5c50006 	strb	r0, [r5, #6]
        262070:	e59d0006 	ldr	r0, [sp, #6]
        262074:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        262078:	e0400001 	sub	r0, r0, r1
        26207c:	e5c50009 	strb	r0, [r5, #9]
        262080:	e1a00440 	mov	r0, r0, asr #8
        262084:	e5c50008 	strb	r0, [r5, #8]	; fField8
        262088:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        26208c:	e59d1000 	ldr	r1, [sp]
        262090:	e0400001 	sub	r0, r0, r1
        262094:	e5c5000b 	strb	r0, [r5, #11]
        262098:	e1a00440 	mov	r0, r0, asr #8
        26209c:	e5c5000a 	strb	r0, [r5, #10]
        2620a0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2620a4:	e1a01004 	mov	r1, r4
        2620a8:	e3a02302 	mov	r2, #134217728	; 0x8000000
        2620ac:	e3a00047 	mov	r0, #71	; 0x47
        2620b0:	eb6110a2 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        2620b4:	eb658024 	bl	1bc214c <$AllocateRefHandle(long)>
        2620b8:	e58d0004 	str	r0, [sp, #4]	; fField4
        2620bc:	e1a00005 	mov	r0, r5
        2620c0:	eb609d09 	bl	1a894ec <$AddressToRef(void *)>
        2620c4:	eb658020 	bl	1bc214c <$AllocateRefHandle(long)>
        2620c8:	e58d0000 	str	r0, [sp]
        2620cc:	e1a0100d 	mov	r1, sp
        2620d0:	e28d0004 	add	r0, sp, #4	; 0x4
        2620d4:	eb6110a2 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        2620d8:	e59d0000 	ldr	r0, [sp]
        2620dc:	eb658436 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2620e0:	e59f0018 	ldr	r0, [pc, #18]	; 262100 <TView::HiliteAll(void)+0xf8>	; fField18
        2620e4:	e5900000 	ldr	r0, [r0]
        2620e8:	e28d1004 	add	r1, sp, #4	; 0x4
        2620ec:	eb60b9d1 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        2620f0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2620f4:	eb658430 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2620f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2620fc:	00371318 	eoreqs	r1, r7, r8, lsl r3
        262100:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TView::DeleteHilited(RefVar const &)
 * Address: 00262104
 */
TView::DeleteHilited(RefVar const &) {
    /*
        262104:	e1a0c00d 	mov	ip, sp
        262108:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26210c:	e24cb004 	sub	fp, ip, #4	; 0x4
        262110:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        262114:	e5901018 	ldr	r1, [r0, #24]	; fField24
        262118:	e24dd004 	sub	sp, sp, #4	; 0x4
        26211c:	e59f0028 	ldr	r0, [pc, #28]	; 26214c <TView::DeleteHilited(RefVar const &)+0x48>	; fField28
        262120:	e5904000 	ldr	r4, [r0]
        262124:	e3a0003f 	mov	r0, #63	; 0x3f
        262128:	eb611084 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        26212c:	eb658006 	bl	1bc214c <$AllocateRefHandle(long)>
        262130:	e58d0000 	str	r0, [sp]
        262134:	e1a0100d 	mov	r1, sp
        262138:	e1a00004 	mov	r0, r4
        26213c:	eb60b9bd 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        262140:	e59d0000 	ldr	r0, [sp]
        262144:	eb65841c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        262148:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        26214c:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TView::HandleHilite(TUnitPublic *, long, unsigned char)
 * Address: 00262150
 */
TView::HandleHilite(TUnitPublic *, long, unsigned char) {
    /*
        262150:	e1a0c00d 	mov	ip, sp
        262154:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        262158:	e24cb004 	sub	fp, ip, #4	; 0x4
        26215c:	e1a04000 	mov	r4, r0
        262160:	e20370ff 	and	r7, r3, #255	; 0xff
        262164:	e3a05000 	mov	r5, #0	; 0x0
        262168:	e3320001 	teq	r2, #1	; 0x1
        26216c:	13720001 	cmnne	r2, #1	; 0x1
        262170:	11a00005 	movne	r0, r5
        262174:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        262178:	e24dd008 	sub	sp, sp, #8	; 0x8
        26217c:	e1a00001 	mov	r0, r1
        262180:	e1a0100d 	mov	r1, sp
        262184:	eb60a0f9 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        262188:	e1a0000d 	mov	r0, sp
        26218c:	e3e01007 	mvn	r1, #7	; 0x7
        262190:	e1a02001 	mov	r2, r1
        262194:	eb63b9a9 	bl	1b50840 <$InsetRect__FP4RectlT2>
        262198:	e24dd008 	sub	sp, sp, #8	; 0x8
        26219c:	e2840010 	add	r0, r4, #16	; 0x10
        2621a0:	e8905000 	ldmia	r0, {ip, lr}
        2621a4:	e88d5000 	stmia	sp, {ip, lr}
        2621a8:	e28d1008 	add	r1, sp, #8	; 0x8
        2621ac:	e1a0000d 	mov	r0, sp
        2621b0:	eb60b575 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        2621b4:	e350003c 	cmp	r0, #60	; 0x3c
        2621b8:	d3a00000 	movle	r0, #0	; 0x0
        2621bc:	c3a00001 	movgt	r0, #1	; 0x1
        2621c0:	e21020ff 	ands	r2, r0, #255	; 0xff
        2621c4:	e3a06001 	mov	r6, #1	; 0x1
        2621c8:	1a000037 	bne	2622ac <TView::HandleHilite(TUnitPublic *, long, unsigned char)+0x15c>
        2621cc:	e59d100e 	ldr	r1, [sp, #14]
        2621d0:	e59d000a 	ldr	r0, [sp, #10]
        2621d4:	e0410000 	sub	r0, r1, r0
        2621d8:	e1a01800 	mov	r1, r0, lsl #16
        2621dc:	e1a01841 	mov	r1, r1, asr #16
        2621e0:	e59d300c 	ldr	r3, [sp, #12]	; fField12
        2621e4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2621e8:	e0430000 	sub	r0, r3, r0
        2621ec:	e1a00800 	mov	r0, r0, lsl #16
        2621f0:	e1a00840 	mov	r0, r0, asr #16
        2621f4:	e1510080 	cmp	r1, r0, lsl #1
        2621f8:	a59dc00a 	ldrge	ip, [sp, #10]
        2621fc:	a1a0c84c 	movge	ip, ip, asr #16
        262200:	a59d3002 	ldrge	r3, [sp, #2]	; fField2
        262204:	a15c0843 	cmpge	ip, r3, asr #16
        262208:	ba00000d 	blt	262244 <TView::HandleHilite(TUnitPublic *, long, unsigned char)+0xf4>
        26220c:	e59dc00e 	ldr	ip, [sp, #14]
        262210:	e1a0c84c 	mov	ip, ip, asr #16
        262214:	e59d3006 	ldr	r3, [sp, #6]
        262218:	e15c0843 	cmp	ip, r3, asr #16
        26221c:	ca000008 	bgt	262244 <TView::HandleHilite(TUnitPublic *, long, unsigned char)+0xf4>
        262220:	e5cd500b 	strb	r5, [sp, #11]
        262224:	e5cd500a 	strb	r5, [sp, #10]
        262228:	e5cd600f 	strb	r6, [sp, #15]
        26222c:	e5cd500e 	strb	r5, [sp, #14]
        262230:	e5cd5003 	strb	r5, [sp, #3]
        262234:	e5cd5002 	strb	r5, [sp, #2]	; fField2
        262238:	e5cd6007 	strb	r6, [sp, #7]
        26223c:	e5cd5006 	strb	r5, [sp, #6]
        262240:	ea000012 	b	262290 <TView::HandleHilite(TUnitPublic *, long, unsigned char)+0x140>
        262244:	e1500081 	cmp	r0, r1, lsl #1
        262248:	a59d1008 	ldrge	r1, [sp, #8]	; fField8
        26224c:	a1a01841 	movge	r1, r1, asr #16
        262250:	a59d0000 	ldrge	r0, [sp]
        262254:	a1510840 	cmpge	r1, r0, asr #16
        262258:	ba000013 	blt	2622ac <TView::HandleHilite(TUnitPublic *, long, unsigned char)+0x15c>
        26225c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        262260:	e1a00840 	mov	r0, r0, asr #16
        262264:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        262268:	e1500841 	cmp	r0, r1, asr #16
        26226c:	ca00000e 	bgt	2622ac <TView::HandleHilite(TUnitPublic *, long, unsigned char)+0x15c>
        262270:	e5cd5009 	strb	r5, [sp, #9]
        262274:	e5cd5008 	strb	r5, [sp, #8]	; fField8
        262278:	e5cd600d 	strb	r6, [sp, #13]
        26227c:	e5cd500c 	strb	r5, [sp, #12]	; fField12
        262280:	e5cd5001 	strb	r5, [sp, #1]
        262284:	e5cd5000 	strb	r5, [sp]
        262288:	e5cd6005 	strb	r6, [sp, #5]
        26228c:	e5cd5004 	strb	r5, [sp, #4]	; fField4
        262290:	e28d1008 	add	r1, sp, #8	; 0x8
        262294:	e1a0000d 	mov	r0, sp
        262298:	eb60b53b 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        26229c:	e350003c 	cmp	r0, #60	; 0x3c
        2622a0:	d3a00000 	movle	r0, #0	; 0x0
        2622a4:	c3a00001 	movgt	r0, #1	; 0x1
        2622a8:	e20020ff 	and	r2, r0, #255	; 0xff
        2622ac:	e3320000 	teq	r2, #0	; 0x0
        2622b0:	01a00005 	moveq	r0, r5
        2622b4:	0a000006 	beq	2622d4 <TView::HandleHilite(TUnitPublic *, long, unsigned char)+0x184>
        2622b8:	e3370000 	teq	r7, #0	; 0x0
        2622bc:	0a000003 	beq	2622d0 <TView::HandleHilite(TUnitPublic *, long, unsigned char)+0x180>
        2622c0:	e1a00004 	mov	r0, r4
        2622c4:	e5941000 	ldr	r1, [r4]
        2622c8:	e1a0e00f 	mov	lr, pc
        2622cc:	e281f0a0 	add	pc, r1, #160	; 0xa0
        2622d0:	e1a00006 	mov	r0, r6
        2622d4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TView::GlobalHiliteBounds(TRect *)
 * Address: 002622d8
 */
TView::GlobalHiliteBounds(TRect *) {
    /*
        2622d8:	e1a0c00d 	mov	ip, sp
        2622dc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2622e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2622e4:	e1a04000 	mov	r4, r0
        2622e8:	e1a05001 	mov	r5, r1
        2622ec:	e24dd014 	sub	sp, sp, #20	; 0x14
        2622f0:	e1a01004 	mov	r1, r4
        2622f4:	e5b06010 	ldr	r6, [r0, #16]!	; fField16
        2622f8:	e1a0000d 	mov	r0, sp
        2622fc:	eb609435 	bl	1a873d8 <HiliteLoop::$__ct(TView *)>
        262300:	e1a0000d 	mov	r0, sp
        262304:	eb60eac1 	bl	1a9ce10 <HiliteLoop::$Next(void)>
        262308:	e3300000 	teq	r0, #0	; 0x0
        26230c:	0a00001e 	beq	26238c <TView::GlobalHiliteBounds(TRect *)+0xb4>
        262310:	e24dd008 	sub	sp, sp, #8	; 0x8
        262314:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        262318:	e2800004 	add	r0, r0, #4	; 0x4
        26231c:	e8905000 	ldmia	r0, {ip, lr}
        262320:	e88d5000 	stmia	sp, {ip, lr}
        262324:	e52d6004 	str	r6, [sp, -#4]!	; fField4
        262328:	e28d0004 	add	r0, sp, #4	; 0x4
        26232c:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        262330:	e1a01841 	mov	r1, r1, asr #16
        262334:	e59d2000 	ldr	r2, [sp]
        262338:	e1a02842 	mov	r2, r2, asr #16
        26233c:	eb63bd69 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        262340:	e28dd004 	add	sp, sp, #4	; 0x4
        262344:	e1a0100d 	mov	r1, sp
        262348:	e1a00005 	mov	r0, r5
        26234c:	eb610bcf 	bl	1aa5290 <TRect::$Union(TRect const &)>
        262350:	e28dd008 	add	sp, sp, #8	; 0x8
        262354:	e1a0000d 	mov	r0, sp
        262358:	eb60eaac 	bl	1a9ce10 <HiliteLoop::$Next(void)>
        26235c:	e3300000 	teq	r0, #0	; 0x0
        262360:	1affffea 	bne	262310 <TView::GlobalHiliteBounds(TRect *)+0x38>
        262364:	e1a00004 	mov	r0, r4
        262368:	e5941000 	ldr	r1, [r4]
        26236c:	e1a0e00f 	mov	lr, pc
        262370:	e281f0c0 	add	pc, r1, #192	; 0xc0
        262374:	e1a04000 	mov	r4, r0
        262378:	e1a0000d 	mov	r0, sp
        26237c:	e3a01000 	mov	r1, #0	; 0x0
        262380:	eb60982e 	bl	1a88440 <HiliteLoop::$__dt(void)>
        262384:	e1a00004 	mov	r0, r4
        262388:	ea000003 	b	26239c <TView::GlobalHiliteBounds(TRect *)+0xc4>
        26238c:	e1a0000d 	mov	r0, sp
        262390:	e3a01000 	mov	r1, #0	; 0x0
        262394:	eb609829 	bl	1a88440 <HiliteLoop::$__dt(void)>
        262398:	e3a00000 	mov	r0, #0	; 0x0
        26239c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TView::RemoveUnmarked(void)
 * Address: 002623a0
 */
TView::RemoveUnmarked(void) {
    /*
        2623a0:	e1a0c00d 	mov	ip, sp
        2623a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2623a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2623ac:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2623b0:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        2623b4:	e1a0000d 	mov	r0, sp
        2623b8:	eb60981d 	bl	1a88434 <TListLoop::$__ct(CList *)>
        2623bc:	e1a0000d 	mov	r0, sp
        2623c0:	eb60ea96 	bl	1a9ce20 <TListLoop::$Next(void)>
        2623c4:	e1b04000 	movs	r4, r0
        2623c8:	0a000010 	beq	262410 <TView::RemoveUnmarked(void)+0x70>
        2623cc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2623d0:	e3100101 	tst	r0, #1073741824	; 0x40000000
        2623d4:	0a000003 	beq	2623e8 <TView::RemoveUnmarked(void)+0x48>
        2623d8:	e1a00004 	mov	r0, r4
        2623dc:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        2623e0:	eb659c39 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        2623e4:	ea000005 	b	262400 <TView::RemoveUnmarked(void)+0x60>
        2623e8:	e1a0000d 	mov	r0, sp
        2623ec:	eb60f703 	bl	1aa0000 <TListLoop::$RemoveCurrent(void)>
        2623f0:	e1a00004 	mov	r0, r4
        2623f4:	e5941000 	ldr	r1, [r4]
        2623f8:	e1a0e00f 	mov	lr, pc
        2623fc:	e281f018 	add	pc, r1, #24	; 0x18
        262400:	e1a0000d 	mov	r0, sp
        262404:	eb60ea85 	bl	1a9ce20 <TListLoop::$Next(void)>
        262408:	e1b04000 	movs	r4, r0
        26240c:	1affffee 	bne	2623cc <TView::RemoveUnmarked(void)+0x2c>
        262410:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::GlobalHiliteResizeBounds(TRect *)
 * Address: 00262414
 */
TView::GlobalHiliteResizeBounds(TRect *) {
    /*
        262414:	e1a0c00d 	mov	ip, sp
        262418:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26241c:	e24cb004 	sub	fp, ip, #4	; 0x4
        262420:	e1a04000 	mov	r4, r0
        262424:	e1a05001 	mov	r5, r1
        262428:	e5901000 	ldr	r1, [r0]
        26242c:	e1a0e00f 	mov	lr, pc
        262430:	e281f094 	add	pc, r1, #148	; 0x94
        262434:	e3300000 	teq	r0, #0	; 0x0
        262438:	12841010 	addne	r1, r4, #16	; 0x10
        26243c:	11a00005 	movne	r0, r5
        262440:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        262444:	1a610b91 	bne	1aa5290 <TRect::$Union(TRect const &)>
        262448:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::GlobalHilitePinnedBounds(TRect *)
 * Address: 0026244c
 */
TView::GlobalHilitePinnedBounds(TRect *) {
    /*
        26244c:	e5902000 	ldr	r2, [r0]
        262450:	e282f0b0 	add	pc, r2, #176	; 0xb0
    */
}

/**
 * Symbol: TView::PointInHilite(TPoint &)
 * Address: 00262454
 */
TView::PointInHilite(TPoint &) {
    /*
        262454:	e1a0c00d 	mov	ip, sp
        262458:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26245c:	e24cb004 	sub	fp, ip, #4	; 0x4
        262460:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        262464:	e5902010 	ldr	r2, [r0, #16]	; fField16
        262468:	e58d2000 	str	r2, [sp]
        26246c:	e5913002 	ldr	r3, [r1, #2]	; fField2
        262470:	e1a03823 	mov	r3, r3, lsr #16
        262474:	e59d2000 	ldr	r2, [sp]
        262478:	e0432002 	sub	r2, r3, r2
        26247c:	e1a02802 	mov	r2, r2, lsl #16
        262480:	e1a02842 	mov	r2, r2, asr #16
        262484:	e5913000 	ldr	r3, [r1]
        262488:	e1a03823 	mov	r3, r3, lsr #16
        26248c:	e41d1004 	ldr	r1, [sp], -#4	; fField4
        262490:	e1a01821 	mov	r1, r1, lsr #16
        262494:	e0431001 	sub	r1, r3, r1
        262498:	e1a01801 	mov	r1, r1, lsl #16
        26249c:	e1a01841 	mov	r1, r1, asr #16
        2624a0:	e5cd2003 	strb	r2, [sp, #3]
        2624a4:	e1a02442 	mov	r2, r2, asr #8
        2624a8:	e5cd2002 	strb	r2, [sp, #2]	; fField2
        2624ac:	e5cd1001 	strb	r1, [sp, #1]
        2624b0:	e1a01441 	mov	r1, r1, asr #8
        2624b4:	e5cd1000 	strb	r1, [sp]
        2624b8:	e49d1008 	ldr	r1, [sp], #8	; fField8
        2624bc:	e58d1014 	str	r1, [sp, #20]	; fField20
        2624c0:	e1a01000 	mov	r1, r0
        2624c4:	e1a0000d 	mov	r0, sp
        2624c8:	eb6093c2 	bl	1a873d8 <HiliteLoop::$__ct(TView *)>
        2624cc:	e1a0000d 	mov	r0, sp
        2624d0:	eb60ea4e 	bl	1a9ce10 <HiliteLoop::$Next(void)>
        2624d4:	e3300000 	teq	r0, #0	; 0x0
        2624d8:	0a00000c 	beq	262510 <TView::PointInHilite(TPoint &)+0xbc>
        2624dc:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        2624e0:	e28d1014 	add	r1, sp, #20	; 0x14
        2624e4:	e1a00002 	mov	r0, r2
        2624e8:	e5922000 	ldr	r2, [r2]
        2624ec:	e1a0e00f 	mov	lr, pc
        2624f0:	e282f010 	add	pc, r2, #16	; 0x10
        2624f4:	e3300000 	teq	r0, #0	; 0x0
        2624f8:	13a04001 	movne	r4, #1	; 0x1
        2624fc:	1a000004 	bne	262514 <TView::PointInHilite(TPoint &)+0xc0>
        262500:	e1a0000d 	mov	r0, sp
        262504:	eb60ea41 	bl	1a9ce10 <HiliteLoop::$Next(void)>
        262508:	e3300000 	teq	r0, #0	; 0x0
        26250c:	1afffff2 	bne	2624dc <TView::PointInHilite(TPoint &)+0x88>
        262510:	e3a04000 	mov	r4, #0	; 0x0
        262514:	e1a0000d 	mov	r0, sp
        262518:	e3a01000 	mov	r1, #0	; 0x0
        26251c:	eb6097c7 	bl	1a88440 <HiliteLoop::$__dt(void)>
        262520:	e1a00004 	mov	r0, r4
        262524:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)
 * Address: 00262528
 */
TView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char) {
    /*
        262528:	e1a0c00d 	mov	ip, sp
        26252c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        262530:	e24cb004 	sub	fp, ip, #4	; 0x4
        262534:	e5903008 	ldr	r3, [r0, #8]	; fField8
        262538:	e3130082 	tst	r3, #130	; 0x82
        26253c:	1a000007 	bne	262560 <TView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x38>
        262540:	e3320005 	teq	r2, #5	; 0x5
        262544:	13720001 	cmnne	r2, #1	; 0x1
        262548:	1a000004 	bne	262560 <TView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x38>
        26254c:	e2800010 	add	r0, r0, #16	; 0x10
        262550:	eb60b48d 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        262554:	e350004b 	cmp	r0, #75	; 0x4b
        262558:	c3a00005 	movgt	r0, #5	; 0x5
        26255c:	c91ba800 	ldmgtdb	fp, {fp, sp, pc}
        262560:	e3a00000 	mov	r0, #0	; 0x0
        262564:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TView::ClickOptions(void)
 * Address: 00262568
 */
TView::ClickOptions(void) {
    /*
        262568:	e3a00001 	mov	r0, #1	; 0x1
        26256c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::DrawScaledData(TRect const &, TRect const &, TRect *)
 * Address: 00262570
 */
TView::DrawScaledData(TRect const &, TRect const &, TRect *) {
    /*
        262570:	e1a0c00d 	mov	ip, sp
        262574:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        262578:	e24cb004 	sub	fp, ip, #4	; 0x4
        26257c:	e1a05000 	mov	r5, r0
        262580:	e1a06001 	mov	r6, r1
        262584:	e1a07002 	mov	r7, r2
        262588:	e1a04003 	mov	r4, r3
        26258c:	e5901000 	ldr	r1, [r0]
        262590:	e1a0e00f 	mov	lr, pc
        262594:	e281f094 	add	pc, r1, #148	; 0x94
        262598:	e3300000 	teq	r0, #0	; 0x0
        26259c:	0a00000c 	beq	2625d4 <TView::DrawScaledData(TRect const &, TRect const &, TRect *)+0x64>
        2625a0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        2625a4:	e1a02007 	mov	r2, r7
        2625a8:	e1a01006 	mov	r1, r6
        2625ac:	e1a0000d 	mov	r0, sp
        2625b0:	e3a03000 	mov	r3, #0	; 0x0
        2625b4:	eb60fee8 	bl	1aa215c <TTransform::$Setup(TRect const *, TRect const *, unsigned char)>
        2625b8:	e2850010 	add	r0, r5, #16	; 0x10
        2625bc:	e8905000 	ldmia	r0, {ip, lr}
        2625c0:	e8845000 	stmia	r4, {ip, lr}
        2625c4:	e1a0100d 	mov	r1, sp
        2625c8:	e1a00004 	mov	r0, r4
        2625cc:	eb60fab0 	bl	1aa1094 <TRect::$Scale(TTransform const &)>
        2625d0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2625d4:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
        2625d8:	e2411501 	sub	r1, r1, #4194304	; 0x400000
        2625dc:	e5c41005 	strb	r1, [r4, #5]
        2625e0:	e3e0007f 	mvn	r0, #127	; 0x7f
        2625e4:	e5c40004 	strb	r0, [r4, #4]	; fField4
        2625e8:	e5c41001 	strb	r1, [r4, #1]
        2625ec:	e5c40000 	strb	r0, [r4]
        2625f0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TView::Scale(TRect const &, TRect const &)
 * Address: 002625f4
 */
TView::Scale(TRect const &, TRect const &) {
    /*
        2625f4:	e1a0c00d 	mov	ip, sp
        2625f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2625fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        262600:	e1a04000 	mov	r4, r0
        262604:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        262608:	e1a0000d 	mov	r0, sp
        26260c:	e3a03000 	mov	r3, #0	; 0x0
        262610:	eb60fed1 	bl	1aa215c <TTransform::$Setup(TRect const *, TRect const *, unsigned char)>
        262614:	e24dd008 	sub	sp, sp, #8	; 0x8
        262618:	e2840010 	add	r0, r4, #16	; 0x10
        26261c:	e8905000 	ldmia	r0, {ip, lr}
        262620:	e88d5000 	stmia	sp, {ip, lr}
        262624:	e28d1008 	add	r1, sp, #8	; 0x8
        262628:	e1a0000d 	mov	r0, sp
        26262c:	eb60fa98 	bl	1aa1094 <TRect::$Scale(TTransform const &)>
        262630:	e1a00004 	mov	r0, r4
        262634:	eb613ca7 	bl	1ab18d8 <TView::$FirstHilite(void)>
        262638:	eb657ec3 	bl	1bc214c <$AllocateRefHandle(long)>
        26263c:	e1a05000 	mov	r5, r0
        262640:	e5900000 	ldr	r0, [r0]
        262644:	e3300002 	teq	r0, #2	; 0x2
        262648:	0a00000c 	beq	262680 <TView::Scale(TRect const &, TRect const &)+0x8c>
        26264c:	eb60f663 	bl	1a9ffe0 <$RefToAddress(long)>
        262650:	e59d1006 	ldr	r1, [sp, #6]
        262654:	e59d2002 	ldr	r2, [sp, #2]	; fField2
        262658:	e0411002 	sub	r1, r1, r2
        26265c:	e5c01009 	strb	r1, [r0, #9]
        262660:	e1a01441 	mov	r1, r1, asr #8
        262664:	e5c01008 	strb	r1, [r0, #8]	; fField8
        262668:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        26266c:	e59d2000 	ldr	r2, [sp]
        262670:	e0411002 	sub	r1, r1, r2
        262674:	e5c0100b 	strb	r1, [r0, #11]
        262678:	e1a01441 	mov	r1, r1, asr #8
        26267c:	e5c0100a 	strb	r1, [r0, #10]
        262680:	e24dd008 	sub	sp, sp, #8	; 0x8
        262684:	e28d0004 	add	r0, sp, #4	; 0x4
        262688:	e594101c 	ldr	r1, [r4, #28]	; fField28
        26268c:	eb00139c 	bl	267504 <TView::ContentsOrigin(void)>
        262690:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        262694:	e2600000 	rsb	r0, r0, #0	; 0x0
        262698:	e1a00800 	mov	r0, r0, lsl #16
        26269c:	e1a00840 	mov	r0, r0, asr #16
        2626a0:	e59d1006 	ldr	r1, [sp, #6]
        2626a4:	e2611000 	rsb	r1, r1, #0	; 0x0
        2626a8:	e1a01801 	mov	r1, r1, lsl #16
        2626ac:	e1a01841 	mov	r1, r1, asr #16
        2626b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2626b4:	e5cd0003 	strb	r0, [sp, #3]
        2626b8:	e1a00440 	mov	r0, r0, asr #8
        2626bc:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        2626c0:	e5cd1001 	strb	r1, [sp, #1]
        2626c4:	e1a00441 	mov	r0, r1, asr #8
        2626c8:	e5cd0000 	strb	r0, [sp]
        2626cc:	e49d0004 	ldr	r0, [sp], #4	; fField4
        2626d0:	e58d0000 	str	r0, [sp]
        2626d4:	e28d0008 	add	r0, sp, #8	; 0x8
        2626d8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        2626dc:	e1a01841 	mov	r1, r1, asr #16
        2626e0:	e59d2000 	ldr	r2, [sp]
        2626e4:	e1a02842 	mov	r2, r2, asr #16
        2626e8:	eb63bc7e 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        2626ec:	e28dd008 	add	sp, sp, #8	; 0x8
        2626f0:	e1a0100d 	mov	r1, sp
        2626f4:	e1a00004 	mov	r0, r4
        2626f8:	eb65a7d2 	bl	1bcc648 <TView::$WriteBounds(TRect const &)>
        2626fc:	e1a00005 	mov	r0, r5
        262700:	eb6582ad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        262704:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::AddHiliter(TUnitPublic *)
 * Address: 00262708
 */
TView::AddHiliter(TUnitPublic *) {
    /*
        262708:	e1a0c00d 	mov	ip, sp
        26270c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        262710:	e24cb004 	sub	fp, ip, #4	; 0x4
        262714:	e1a05000 	mov	r5, r0
        262718:	e1a04001 	mov	r4, r1
        26271c:	e24dd008 	sub	sp, sp, #8	; 0x8
        262720:	e3a07000 	mov	r7, #0	; 0x0
        262724:	e1a0100d 	mov	r1, sp
        262728:	e1a00004 	mov	r0, r4
        26272c:	eb609f8f 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        262730:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        262734:	e59d0000 	ldr	r0, [sp]
        262738:	e0410000 	sub	r0, r1, r0
        26273c:	e1a00800 	mov	r0, r0, lsl #16
        262740:	e3500706 	cmp	r0, #1572864	; 0x180000
        262744:	da00002d 	ble	262800 <TView::AddHiliter(TUnitPublic *)+0xf8>
        262748:	e59d0006 	ldr	r0, [sp, #6]
        26274c:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        262750:	e0400001 	sub	r0, r0, r1
        262754:	e1a00800 	mov	r0, r0, lsl #16
        262758:	e3500601 	cmp	r0, #1048576	; 0x100000
        26275c:	da000027 	ble	262800 <TView::AddHiliter(TUnitPublic *)+0xf8>
        262760:	e1a00004 	mov	r0, r4
        262764:	eb6102a1 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        262768:	e1a08000 	mov	r8, r0
        26276c:	e3a0900f 	mov	r9, #15	; 0xf
        262770:	e2899c27 	add	r9, r9, #9984	; 0x2700
        262774:	e3a0a000 	mov	sl, #0	; 0x0
        262778:	e3a07004 	mov	r7, #4	; 0x4
        26277c:	eb610287 	bl	1aa31a0 <TStrokePublic::$Size(void)>
        262780:	e3500004 	cmp	r0, #4	; 0x4
        262784:	9a00001b 	bls	2627f8 <TView::AddHiliter(TUnitPublic *)+0xf0>
        262788:	e24dd008 	sub	sp, sp, #8	; 0x8
        26278c:	e1a02007 	mov	r2, r7
        262790:	e1a01008 	mov	r1, r8
        262794:	e28d0004 	add	r0, sp, #4	; 0x4
        262798:	eb60d0d8 	bl	1a96b00 <TStrokePublic::$GetPoint(long)>
        26279c:	e28d6004 	add	r6, sp, #4	; 0x4
        2627a0:	e1a01008 	mov	r1, r8
        2627a4:	e1a0000d 	mov	r0, sp
        2627a8:	eb60c8a4 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        2627ac:	e1a0000d 	mov	r0, sp
        2627b0:	e1a01006 	mov	r1, r6
        2627b4:	ebfcda82 	bl	1991c4 <CheapDistance__FRC6TPointT1>
        2627b8:	e28dd008 	add	sp, sp, #8	; 0x8
        2627bc:	e3500014 	cmp	r0, #20	; 0x14
        2627c0:	c3a0a001 	movgt	sl, #1	; 0x1
        2627c4:	ca000001 	bgt	2627d0 <TView::AddHiliter(TUnitPublic *)+0xc8>
        2627c8:	e33a0000 	teq	sl, #0	; 0x0
        2627cc:	0a000001 	beq	2627d8 <TView::AddHiliter(TUnitPublic *)+0xd0>
        2627d0:	e1500009 	cmp	r0, r9
        2627d4:	b1a09000 	movlt	r9, r0
        2627d8:	e2877001 	add	r7, r7, #1	; 0x1
        2627dc:	e1a00008 	mov	r0, r8
        2627e0:	eb61026e 	bl	1aa31a0 <TStrokePublic::$Size(void)>
        2627e4:	e1500007 	cmp	r0, r7
        2627e8:	8affffe6 	bhi	262788 <TView::AddHiliter(TUnitPublic *)+0x80>
        2627ec:	e3590014 	cmp	r9, #20	; 0x14
        2627f0:	b3a00001 	movlt	r0, #1	; 0x1
        2627f4:	ba000000 	blt	2627fc <TView::AddHiliter(TUnitPublic *)+0xf4>
        2627f8:	e3a00000 	mov	r0, #0	; 0x0
        2627fc:	e20070ff 	and	r7, r0, #255	; 0xff
        262800:	e3a06000 	mov	r6, #0	; 0x0
        262804:	e24dd00c 	sub	sp, sp, #12	; 0xc
        262808:	e1a0000d 	mov	r0, sp
        26280c:	e5951020 	ldr	r1, [r5, #32]	; fField32
        262810:	eb609707 	bl	1a88434 <TListLoop::$__ct(CList *)>
        262814:	e1a0000d 	mov	r0, sp
        262818:	eb60e980 	bl	1a9ce20 <TListLoop::$Next(void)>
        26281c:	e3300000 	teq	r0, #0	; 0x0
        262820:	0a000010 	beq	262868 <TView::AddHiliter(TUnitPublic *)+0x160>
        262824:	e1a0c000 	mov	ip, r0
        262828:	e3370000 	teq	r7, #0	; 0x0
        26282c:	03e02000 	mvneq	r2, #0	; 0x0
        262830:	13a02001 	movne	r2, #1	; 0x1
        262834:	e1a01004 	mov	r1, r4
        262838:	e1a0000c 	mov	r0, ip
        26283c:	e3a03000 	mov	r3, #0	; 0x0
        262840:	e59cc000 	ldr	ip, [ip]
        262844:	e1a0e00f 	mov	lr, pc
        262848:	e28cf08c 	add	pc, ip, #140	; 0x8c
        26284c:	e1560000 	cmp	r6, r0
        262850:	c1a00006 	movgt	r0, r6
        262854:	e1a06000 	mov	r6, r0
        262858:	e1a0000d 	mov	r0, sp
        26285c:	eb60e96f 	bl	1a9ce20 <TListLoop::$Next(void)>
        262860:	e3300000 	teq	r0, #0	; 0x0
        262864:	1affffee 	bne	262824 <TView::AddHiliter(TUnitPublic *)+0x11c>
        262868:	e28dd00c 	add	sp, sp, #12	; 0xc
        26286c:	e3360000 	teq	r6, #0	; 0x0
        262870:	0a000012 	beq	2628c0 <TView::AddHiliter(TUnitPublic *)+0x1b8>
        262874:	e24dd00c 	sub	sp, sp, #12	; 0xc
        262878:	e1a0000d 	mov	r0, sp
        26287c:	e5b51020 	ldr	r1, [r5, #32]!	; fField32
        262880:	eb6096eb 	bl	1a88434 <TListLoop::$__ct(CList *)>
        262884:	e1a0000d 	mov	r0, sp
        262888:	eb60e964 	bl	1a9ce20 <TListLoop::$Next(void)>
        26288c:	e3300000 	teq	r0, #0	; 0x0
        262890:	0a000009 	beq	2628bc <TView::AddHiliter(TUnitPublic *)+0x1b4>
        262894:	e1a02006 	mov	r2, r6
        262898:	e1a01004 	mov	r1, r4
        26289c:	e3a03001 	mov	r3, #1	; 0x1
        2628a0:	e590c000 	ldr	ip, [r0]
        2628a4:	e1a0e00f 	mov	lr, pc
        2628a8:	e28cf08c 	add	pc, ip, #140	; 0x8c
        2628ac:	e1a0000d 	mov	r0, sp
        2628b0:	eb60e95a 	bl	1a9ce20 <TListLoop::$Next(void)>
        2628b4:	e3300000 	teq	r0, #0	; 0x0
        2628b8:	1afffff5 	bne	262894 <TView::AddHiliter(TUnitPublic *)+0x18c>
        2628bc:	e28dd00c 	add	sp, sp, #12	; 0xc
        2628c0:	e3a00001 	mov	r0, #1	; 0x1
        2628c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::VisibleDeep( const(void))
 * Address: 00262950
 */
TView::VisibleDeep( const(void)) {
    /*
        262950:	e59f102c 	ldr	r1, [pc, #2c]	; 262984 <TView::VisibleDeep( const(void))+0x34>	; fField2
        262954:	e5911000 	ldr	r1, [r1]
        262958:	e1300001 	teq	r0, r1
        26295c:	0a000006 	beq	26297c <TView::VisibleDeep( const(void))+0x2c>
        262960:	e5902008 	ldr	r2, [r0, #8]	; fField8
        262964:	e3120001 	tst	r2, #1	; 0x1
        262968:	03a00000 	moveq	r0, #0	; 0x0
        26296c:	01a0f00e 	moveq	pc, lr
        262970:	e590001c 	ldr	r0, [r0, #28]	; fField28
        262974:	e1300001 	teq	r0, r1
        262978:	1afffff8 	bne	262960 <TView::VisibleDeep( const(void))+0x10>
        26297c:	e3a00001 	mov	r0, #1	; 0x1
        262980:	e1a0f00e 	mov	pc, lr
        262984:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TView::IsGridded(RefVar const &, TPoint *)
 * Address: 00262a20
 */
TView::IsGridded(RefVar const &, TPoint *) {
    /*
        262a20:	e1a0c00d 	mov	ip, sp
        262a24:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        262a28:	e24cb004 	sub	fp, ip, #4	; 0x4
        262a2c:	e1a06000 	mov	r6, r0
        262a30:	e1a05001 	mov	r5, r1
        262a34:	e1a04002 	mov	r4, r2
        262a38:	e59f1074 	ldr	r1, [pc, #74]	; 262ab4 <TView::IsGridded(RefVar const &, TPoint *)+0x94>
        262a3c:	eb659ec1 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        262a40:	eb657dc1 	bl	1bc214c <$AllocateRefHandle(long)>
        262a44:	e1a07000 	mov	r7, r0
        262a48:	e5950000 	ldr	r0, [r5]
        262a4c:	e5901000 	ldr	r1, [r0]
        262a50:	e5970000 	ldr	r0, [r7]
        262a54:	eb6585f5 	bl	1bc4230 <$EQRef__FlT1>
        262a58:	e1b08000 	movs	r8, r0
        262a5c:	13a08001 	movne	r8, #1	; 0x1
        262a60:	e1a00007 	mov	r0, r7
        262a64:	eb6581d4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        262a68:	e3a07000 	mov	r7, #0	; 0x0
        262a6c:	e3380000 	teq	r8, #0	; 0x0
        262a70:	01a00007 	moveq	r0, r7
        262a74:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        262a78:	e3340000 	teq	r4, #0	; 0x0
        262a7c:	0a000021 	beq	262b08 <TView::IsGridded(RefVar const &, TPoint *)+0xe8>
        262a80:	e59f1030 	ldr	r1, [pc, #30]	; 262ab8 <TView::IsGridded(RefVar const &, TPoint *)+0x98>
        262a84:	e1a00006 	mov	r0, r6
        262a88:	eb659eae 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        262a8c:	eb657dae 	bl	1bc214c <$AllocateRefHandle(long)>
        262a90:	e1a06000 	mov	r6, r0
        262a94:	e5900000 	ldr	r0, [r0]
        262a98:	e3300002 	teq	r0, #2	; 0x2
        262a9c:	0a000006 	beq	262abc <TView::IsGridded(RefVar const &, TPoint *)+0x9c>
        262aa0:	e3100003 	tst	r0, #3	; 0x3
        262aa4:	01a00140 	moveq	r0, r0, asr #2
        262aa8:	0a000004 	beq	262ac0 <TView::IsGridded(RefVar const &, TPoint *)+0xa0>
        262aac:	eb657d9a 	bl	1bc211c <$_RINTError(long)>
        262ab0:	ea000002 	b	262ac0 <TView::IsGridded(RefVar const &, TPoint *)+0xa0>
        262ab4:	00685018 	rsbeq	r5, r8, r8, lsl r0
        262ab8:	00685058 	rsbeq	r5, r8, r8, asr r0
        262abc:	e3a00001 	mov	r0, #1	; 0x1
        262ac0:	e1a08800 	mov	r8, r0, lsl #16
        262ac4:	e1a08848 	mov	r8, r8, asr #16
        262ac8:	e5c48001 	strb	r8, [r4, #1]
        262acc:	e1a09448 	mov	r9, r8, asr #8
        262ad0:	e5c49000 	strb	r9, [r4]
        262ad4:	e59f0034 	ldr	r0, [pc, #34]	; 262b10 <TView::IsGridded(RefVar const &, TPoint *)+0xf0>
        262ad8:	e5900000 	ldr	r0, [r0]
        262adc:	e5901000 	ldr	r1, [r0]
        262ae0:	e5950000 	ldr	r0, [r5]
        262ae4:	e5900000 	ldr	r0, [r0]
        262ae8:	eb6585d0 	bl	1bc4230 <$EQRef__FlT1>
        262aec:	e3300000 	teq	r0, #0	; 0x0
        262af0:	05c48003 	streqb	r8, [r4, #3]
        262af4:	05c49002 	streqb	r9, [r4, #2]	; fField2
        262af8:	15c47003 	strneb	r7, [r4, #3]
        262afc:	15c47002 	strneb	r7, [r4, #2]	; fField2
        262b00:	e1a00006 	mov	r0, r6
        262b04:	eb6581ac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        262b08:	e3a00001 	mov	r0, #1	; 0x1
        262b0c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        262b10:	00683590 	streqb	r3, [r8], -#80
    */
}

/**
 * Symbol: TView::AddViews(unsigned char)
 * Address: 00262c0c
 */
TView::AddViews(unsigned char) {
    /*
        262c0c:	e1a0c00d 	mov	ip, sp
        262c10:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        262c14:	e24cb004 	sub	fp, ip, #4	; 0x4
        262c18:	e1a04000 	mov	r4, r0
        262c1c:	e201a0ff 	and	sl, r1, #255	; 0xff
        262c20:	e24dd008 	sub	sp, sp, #8	; 0x8
        262c24:	e5900008 	ldr	r0, [r0, #8]	; fField8
        262c28:	e2100201 	ands	r0, r0, #268435456	; 0x10000000
        262c2c:	13a00001 	movne	r0, #1	; 0x1
        262c30:	e20000ff 	and	r0, r0, #255	; 0xff
        262c34:	e40d0004 	str	r0, [sp], -#4	; fField4
        262c38:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        262c3c:	e3300000 	teq	r0, #0	; 0x0
        262c40:	01a00004 	moveq	r0, r4
        262c44:	03a01201 	moveq	r1, #268435456	; 0x10000000
        262c48:	0b65a26b 	bleq	1bcb5fc <TView::$SetFlags(unsigned long)>
        262c4c:	e3a03000 	mov	r3, #0	; 0x0
        262c50:	e92d0008 	stmdb	sp!, {r3}
        262c54:	e3a00002 	mov	r0, #2	; 0x2
        262c58:	eb657d3b 	bl	1bc214c <$AllocateRefHandle(long)>
        262c5c:	e58d0004 	str	r0, [sp, #4]	; fField4
        262c60:	e28d2004 	add	r2, sp, #4	; 0x4
        262c64:	e1a00004 	mov	r0, r4
        262c68:	e3a03000 	mov	r3, #0	; 0x0
        262c6c:	e3a0100d 	mov	r1, #13	; 0xd
        262c70:	eb65a259 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        262c74:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        262c78:	eb65814f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        262c7c:	e3a08000 	mov	r8, #0	; 0x0
        262c80:	e1a00004 	mov	r0, r4
        262c84:	eb659a0c 	bl	1bc94bc <TView::$Children(void)>
        262c88:	eb657d2f 	bl	1bc214c <$AllocateRefHandle(long)>
        262c8c:	e1a09000 	mov	r9, r0
        262c90:	e5900000 	ldr	r0, [r0]
        262c94:	e3300002 	teq	r0, #2	; 0x2
        262c98:	0a000001 	beq	262ca4 <TView::AddViews(unsigned char)+0x98>
        262c9c:	eb658982 	bl	1bc52ac <$Length(long)>
        262ca0:	e1a08000 	mov	r8, r0
        262ca4:	e24dd004 	sub	sp, sp, #4	; 0x4
        262ca8:	e1a06008 	mov	r6, r8
        262cac:	e59f11d4 	ldr	r1, [pc, #1d4]	; 262e88 <TView::AddViews(unsigned char)+0x27c>
        262cb0:	e1a00004 	mov	r0, r4
        262cb4:	eb659e23 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        262cb8:	eb657d23 	bl	1bc214c <$AllocateRefHandle(long)>
        262cbc:	e58d0000 	str	r0, [sp]
        262cc0:	e5900000 	ldr	r0, [r0]
        262cc4:	e3300002 	teq	r0, #2	; 0x2
        262cc8:	0a000001 	beq	262cd4 <TView::AddViews(unsigned char)+0xc8>
        262ccc:	eb658976 	bl	1bc52ac <$Length(long)>
        262cd0:	e0806006 	add	r6, r0, r6
        262cd4:	e3560000 	cmp	r6, #0	; 0x0
        262cd8:	da00005f 	ble	262e5c <TView::AddViews(unsigned char)+0x250>
        262cdc:	e24dd008 	sub	sp, sp, #8	; 0x8
        262ce0:	e2840010 	add	r0, r4, #16	; 0x10
        262ce4:	e58d0014 	str	r0, [sp, #20]	; fField20
        262ce8:	e5900000 	ldr	r0, [r0]
        262cec:	e58d0000 	str	r0, [sp]
        262cf0:	e59d2000 	ldr	r2, [sp]
        262cf4:	e1a02842 	mov	r2, r2, asr #16
        262cf8:	e5ad2004 	str	r2, [sp, #4]!	; fField4
        262cfc:	e5940020 	ldr	r0, [r4, #32]	; fField32
        262d00:	e59f1184 	ldr	r1, [pc, #184]	; 262e8c <TView::AddViews(unsigned char)+0x280>
        262d04:	e5911000 	ldr	r1, [r1]
        262d08:	e1300001 	teq	r0, r1
        262d0c:	1a000002 	bne	262d1c <TView::AddViews(unsigned char)+0x110>
        262d10:	e1a00006 	mov	r0, r6
        262d14:	eb049f92 	bl	38ab64 <C$$dtorvec$$Limit+0x1f0>
        262d18:	e5840020 	str	r0, [r4, #32]	; fField32
        262d1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        262d20:	e3a00002 	mov	r0, #2	; 0x2
        262d24:	eb657d08 	bl	1bc214c <$AllocateRefHandle(long)>
        262d28:	e3a05000 	mov	r5, #0	; 0x0
        262d2c:	e3560000 	cmp	r6, #0	; 0x0
        262d30:	e58d0000 	str	r0, [sp]
        262d34:	da000033 	ble	262e08 <TView::AddViews(unsigned char)+0x1fc>
        262d38:	e1550008 	cmp	r5, r8
        262d3c:	a0451008 	subge	r1, r5, r8
        262d40:	a59d0008 	ldrge	r0, [sp, #8]	; fField8
        262d44:	a5900000 	ldrge	r0, [r0]
        262d48:	b1a01005 	movlt	r1, r5
        262d4c:	b5990000 	ldrlt	r0, [r9]
        262d50:	eb65853f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        262d54:	e59d1000 	ldr	r1, [sp]
        262d58:	e33a0000 	teq	sl, #0	; 0x0
        262d5c:	e5810000 	str	r0, [r1]
        262d60:	0a000004 	beq	262d78 <TView::AddViews(unsigned char)+0x16c>
        262d64:	e1a0100d 	mov	r1, sp
        262d68:	e5940020 	ldr	r0, [r4, #32]	; fField32
        262d6c:	eb659dea 	bl	1bca51c <$Exists(TViewList *, RefVar const &)>
        262d70:	e1b07000 	movs	r7, r0
        262d74:	1a000003 	bne	262d88 <TView::AddViews(unsigned char)+0x17c>
        262d78:	e1a0100d 	mov	r1, sp
        262d7c:	e1a00004 	mov	r0, r4
        262d80:	eb6099dd 	bl	1a894fc <TView::$AddView(RefVar const &)>
        262d84:	e1a07000 	mov	r7, r0
        262d88:	e3370000 	teq	r7, #0	; 0x0
        262d8c:	133a0000 	teqne	sl, #0	; 0x0
        262d90:	11a00007 	movne	r0, r7
        262d94:	13a01101 	movne	r1, #1073741824	; 0x40000000
        262d98:	1b65a217 	blne	1bcb5fc <TView::$SetFlags(unsigned long)>
        262d9c:	e3550000 	cmp	r5, #0	; 0x0
        262da0:	da000015 	ble	262dfc <TView::AddViews(unsigned char)+0x1f0>
        262da4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        262da8:	e3100801 	tst	r0, #65536	; 0x10000
        262dac:	0a000012 	beq	262dfc <TView::AddViews(unsigned char)+0x1f0>
        262db0:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        262db4:	e5901004 	ldr	r1, [r0, #4]	; fField4
        262db8:	e1a01821 	mov	r1, r1, lsr #16
        262dbc:	e5900000 	ldr	r0, [r0]
        262dc0:	e1a00820 	mov	r0, r0, lsr #16
        262dc4:	e0410000 	sub	r0, r1, r0
        262dc8:	e1a00800 	mov	r0, r0, lsl #16
        262dcc:	e5971014 	ldr	r1, [r7, #20]	; fField20
        262dd0:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        262dd4:	e0621841 	rsb	r1, r2, r1, asr #16
        262dd8:	e1510840 	cmp	r1, r0, asr #16
        262ddc:	da000006 	ble	262dfc <TView::AddViews(unsigned char)+0x1f0>
        262de0:	e0451008 	sub	r1, r5, r8
        262de4:	e28d0008 	add	r0, sp, #8	; 0x8
        262de8:	eb658d5f 	bl	1bc636c <$SetLength(RefVar const &, long)>
        262dec:	e1a05006 	mov	r5, r6
        262df0:	e1a01007 	mov	r1, r7
        262df4:	e1a00004 	mov	r0, r4
        262df8:	eb65a1f2 	bl	1bcb5c8 <TView::$RemoveChildView(TView *)>
        262dfc:	e2855001 	add	r5, r5, #1	; 0x1
        262e00:	e1550006 	cmp	r5, r6
        262e04:	baffffcb 	blt	262d38 <TView::AddViews(unsigned char)+0x12c>
        262e08:	e33a0000 	teq	sl, #0	; 0x0
        262e0c:	0a00000f 	beq	262e50 <TView::AddViews(unsigned char)+0x244>
        262e10:	e1a00004 	mov	r0, r4
        262e14:	eb65a1ed 	bl	1bcb5d0 <TView::$RemoveUnmarked(void)>
        262e18:	e24dd00c 	sub	sp, sp, #12	; 0xc
        262e1c:	e1a0000d 	mov	r0, sp
        262e20:	e5941020 	ldr	r1, [r4, #32]	; fField32
        262e24:	eb609582 	bl	1a88434 <TListLoop::$__ct(CList *)>
        262e28:	e1a0000d 	mov	r0, sp
        262e2c:	eb60e7fb 	bl	1a9ce20 <TListLoop::$Next(void)>
        262e30:	e3300000 	teq	r0, #0	; 0x0
        262e34:	0a000004 	beq	262e4c <TView::AddViews(unsigned char)+0x240>
        262e38:	eb65a5fa 	bl	1bcc628 <TView::$Sync(void)>
        262e3c:	e1a0000d 	mov	r0, sp
        262e40:	eb60e7f6 	bl	1a9ce20 <TListLoop::$Next(void)>
        262e44:	e3300000 	teq	r0, #0	; 0x0
        262e48:	1afffffa 	bne	262e38 <TView::AddViews(unsigned char)+0x22c>
        262e4c:	e28dd00c 	add	sp, sp, #12	; 0xc
        262e50:	e59d0000 	ldr	r0, [sp]
        262e54:	eb6580d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        262e58:	e28dd008 	add	sp, sp, #8	; 0x8
        262e5c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        262e60:	e3300000 	teq	r0, #0	; 0x0
        262e64:	01a00004 	moveq	r0, r4
        262e68:	03a01201 	moveq	r1, #268435456	; 0x10000000
        262e6c:	0b659996 	bleq	1bc94cc <TView::$ClearFlags(unsigned long)>
        262e70:	e59d0000 	ldr	r0, [sp]
        262e74:	eb6580d0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        262e78:	e28dd004 	add	sp, sp, #4	; 0x4
        262e7c:	e1a00009 	mov	r0, r9
        262e80:	eb6580cd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        262e84:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        262e88:	00684848 	rsbeq	r4, r8, r8, asr #16
        262e8c:	0c101930 	ldceq	9, cr1, [r0], -#192
    */
}

/**
 * Symbol: TView::SoundEffect(RefVar const &)
 * Address: 00262ff4
 */
TView::SoundEffect(RefVar const &) {
    /*
        262ff4:	e1a0c00d 	mov	ip, sp
        262ff8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        262ffc:	e24cb004 	sub	fp, ip, #4	; 0x4
        263000:	e1a04000 	mov	r4, r0
        263004:	e24dd004 	sub	sp, sp, #4	; 0x4
        263008:	eb659d52 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        26300c:	eb657c4e 	bl	1bc214c <$AllocateRefHandle(long)>
        263010:	e58d0000 	str	r0, [sp]
        263014:	e5900000 	ldr	r0, [r0]
        263018:	e3300002 	teq	r0, #2	; 0x2
        26301c:	12840024 	addne	r0, r4, #36	; 0x24
        263020:	11a0100d 	movne	r1, sp
        263024:	1b663a28 	blne	1bf18cc <$FPlaySound__FRC6RefVarT1>
        263028:	e59d0000 	ldr	r0, [sp]
        26302c:	eb658062 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        263030:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::SyncScrollSoup(RefVar const &, RefVar const &)
 * Address: 00263034
 */
TView::SyncScrollSoup(RefVar const &, RefVar const &) {
    /*
        263034:	e1a0c00d 	mov	ip, sp
        263038:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        26303c:	e24cb004 	sub	fp, ip, #4	; 0x4
        263040:	e1a04000 	mov	r4, r0
        263044:	e1a06001 	mov	r6, r1
        263048:	e1a05002 	mov	r5, r2
        26304c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        263050:	e3a09010 	mov	r9, #16	; 0x10
        263054:	e3a00002 	mov	r0, #2	; 0x2
        263058:	eb657c3b 	bl	1bc214c <$AllocateRefHandle(long)>
        26305c:	e58d0000 	str	r0, [sp]
        263060:	e59f1034 	ldr	r1, [pc, #34]	; 26309c <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x68>
        263064:	e1a00004 	mov	r0, r4
        263068:	eb659d36 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        26306c:	e59d1000 	ldr	r1, [sp]
        263070:	e5810000 	str	r0, [r1]
        263074:	e1a01000 	mov	r1, r0
        263078:	e3300002 	teq	r0, #2	; 0x2
        26307c:	0a000007 	beq	2630a0 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x6c>
        263080:	e1a00001 	mov	r0, r1
        263084:	e3110003 	tst	r1, #3	; 0x3
        263088:	01a00140 	moveq	r0, r0, asr #2
        26308c:	0a000000 	beq	263094 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x60>
        263090:	eb657c21 	bl	1bc211c <$_RINTError(long)>
        263094:	e1a09000 	mov	r9, r0
        263098:	ea00000e 	b	2630d8 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0xa4>
        26309c:	00683c00 	rsbeq	r3, r8, r0, lsl #24
        2630a0:	e59f10fc 	ldr	r1, [pc, #fc]	; 2631a4 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x170>
        2630a4:	e1a00004 	mov	r0, r4
        2630a8:	eb659d2a 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        2630ac:	e59d1000 	ldr	r1, [sp]
        2630b0:	e5810000 	str	r0, [r1]
        2630b4:	e1a01000 	mov	r1, r0
        2630b8:	e3300002 	teq	r0, #2	; 0x2
        2630bc:	0a000005 	beq	2630d8 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0xa4>
        2630c0:	e1a00001 	mov	r0, r1
        2630c4:	e3110003 	tst	r1, #3	; 0x3
        2630c8:	01a00140 	moveq	r0, r0, asr #2
        2630cc:	0a000000 	beq	2630d4 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0xa0>
        2630d0:	eb657c11 	bl	1bc211c <$_RINTError(long)>
        2630d4:	e1a09080 	mov	r9, r0, lsl #1
        2630d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2630dc:	e2840010 	add	r0, r4, #16	; 0x10
        2630e0:	e58d000c 	str	r0, [sp, #12]	; fField12
        2630e4:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2630e8:	e1a01821 	mov	r1, r1, lsr #16
        2630ec:	e5900000 	ldr	r0, [r0]
        2630f0:	e1a00820 	mov	r0, r0, lsr #16
        2630f4:	e0410000 	sub	r0, r1, r0
        2630f8:	e1a07800 	mov	r7, r0, lsl #16
        2630fc:	e1a07847 	mov	r7, r7, asr #16
        263100:	e5950000 	ldr	r0, [r5]
        263104:	e5900000 	ldr	r0, [r0]
        263108:	e3100003 	tst	r0, #3	; 0x3
        26310c:	01a00140 	moveq	r0, r0, asr #2
        263110:	0a000000 	beq	263118 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0xe4>
        263114:	eb657c00 	bl	1bc211c <$_RINTError(long)>
        263118:	e58d0000 	str	r0, [sp]
        26311c:	e1a00004 	mov	r0, r4
        263120:	e3a01007 	mov	r1, #7	; 0x7
        263124:	eb659d03 	bl	1bca538 <TView::$GetCacheProto(long)>
        263128:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        26312c:	e5810000 	str	r0, [r1]
        263130:	e1a01000 	mov	r1, r0
        263134:	e3300002 	teq	r0, #2	; 0x2
        263138:	03a0a000 	moveq	sl, #0	; 0x0
        26313c:	0a000005 	beq	263158 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x124>
        263140:	e1a00001 	mov	r0, r1
        263144:	e3110003 	tst	r1, #3	; 0x3
        263148:	01a00140 	moveq	r0, r0, asr #2
        26314c:	0a000000 	beq	263154 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x120>
        263150:	eb657bf1 	bl	1bc211c <$_RINTError(long)>
        263154:	e1a0a000 	mov	sl, r0
        263158:	e3a08000 	mov	r8, #0	; 0x0
        26315c:	e59d0000 	ldr	r0, [sp]
        263160:	e59f5040 	ldr	r5, [pc, #40]	; 2631a8 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x174>	; fField40
        263164:	e3500000 	cmp	r0, #0	; 0x0
        263168:	aa000027 	bge	26320c <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x1d8>
        26316c:	e33a0000 	teq	sl, #0	; 0x0
        263170:	1a000020 	bne	2631f8 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x1c4>
        263174:	e1a00006 	mov	r0, r6
        263178:	eb658008 	bl	1bc31a0 <$CursorPrev(RefVar const &)>
        26317c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        263180:	e5810000 	str	r0, [r1]
        263184:	e3300002 	teq	r0, #2	; 0x2
        263188:	1a000007 	bne	2631ac <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x178>
        26318c:	e1a00006 	mov	r0, r6
        263190:	eb658003 	bl	1bc31a4 <$CursorReset(RefVar const &)>
        263194:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        263198:	eb658007 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26319c:	e3a00002 	mov	r0, #2	; 0x2
        2631a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2631a4:	00685058 	rsbeq	r5, r8, r8, asr r0
        2631a8:	006830c8 	rsbeq	r3, r8, r8, asr #1
        2631ac:	e1a01005 	mov	r1, r5
        2631b0:	e28d0004 	add	r0, sp, #4	; 0x4
        2631b4:	e3a03000 	mov	r3, #0	; 0x0
        2631b8:	e3a02000 	mov	r2, #0	; 0x0
        2631bc:	eb65842c 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2631c0:	e3100003 	tst	r0, #3	; 0x3
        2631c4:	01a00140 	moveq	r0, r0, asr #2
        2631c8:	0a000000 	beq	2631d0 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x19c>
        2631cc:	eb657bd2 	bl	1bc211c <$_RINTError(long)>
        2631d0:	e1a06000 	mov	r6, r0
        2631d4:	e2605000 	rsb	r5, r0, #0	; 0x0
        2631d8:	e1500007 	cmp	r0, r7
        2631dc:	da000036 	ble	2632bc <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x288>
        2631e0:	e0470009 	sub	r0, r7, r9
        2631e4:	e1a01006 	mov	r1, r6
        2631e8:	eb653dd4 	bl	1bb2940 <$__rt_sdiv>
        2631ec:	e0468001 	sub	r8, r6, r1
        2631f0:	e0485006 	sub	r5, r8, r6
        2631f4:	ea000030 	b	2632bc <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x288>
        2631f8:	e0470009 	sub	r0, r7, r9
        2631fc:	e05a8000 	subs	r8, sl, r0
        263200:	e2605000 	rsb	r5, r0, #0	; 0x0
        263204:	43a08000 	movmi	r8, #0	; 0x0
        263208:	ea00002b 	b	2632bc <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x288>
        26320c:	e1a00006 	mov	r0, r6
        263210:	eb657fdd 	bl	1bc318c <$CursorEntry(RefVar const &)>
        263214:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        263218:	e5810000 	str	r0, [r1]
        26321c:	e1a01005 	mov	r1, r5
        263220:	e28d0004 	add	r0, sp, #4	; 0x4
        263224:	e3a03000 	mov	r3, #0	; 0x0
        263228:	e3a02000 	mov	r2, #0	; 0x0
        26322c:	eb658410 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        263230:	e3100003 	tst	r0, #3	; 0x3
        263234:	01a00140 	moveq	r0, r0, asr #2
        263238:	0a000000 	beq	263240 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x20c>
        26323c:	eb657bb6 	bl	1bc211c <$_RINTError(long)>
        263240:	e040000a 	sub	r0, r0, sl
        263244:	e58d0008 	str	r0, [sp, #8]	; fField8
        263248:	e1500007 	cmp	r0, r7
        26324c:	da000003 	ble	263260 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x22c>
        263250:	e08a0007 	add	r0, sl, r7
        263254:	e0408009 	sub	r8, r0, r9
        263258:	e0475009 	sub	r5, r7, r9
        26325c:	ea000016 	b	2632bc <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x288>
        263260:	e24dd004 	sub	sp, sp, #4	; 0x4
        263264:	e59f12e8 	ldr	r1, [pc, #2e8]	; 263554 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x520>	; fField2
        263268:	e1a00004 	mov	r0, r4
        26326c:	eb659cb5 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        263270:	eb657bb5 	bl	1bc214c <$AllocateRefHandle(long)>
        263274:	e1a05000 	mov	r5, r0
        263278:	e5901000 	ldr	r1, [r0]
        26327c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        263280:	e5900000 	ldr	r0, [r0]
        263284:	eb6583e9 	bl	1bc4230 <$EQRef__FlT1>
        263288:	e3300000 	teq	r0, #0	; 0x0
        26328c:	13a00001 	movne	r0, #1	; 0x1
        263290:	e58d0000 	str	r0, [sp]
        263294:	e1a00005 	mov	r0, r5
        263298:	eb657fc7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26329c:	e49d0004 	ldr	r0, [sp], #4	; fField4
        2632a0:	e3300000 	teq	r0, #0	; 0x0
        2632a4:	1affffe9 	bne	263250 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x21c>
        2632a8:	e1a00006 	mov	r0, r6
        2632ac:	e59d5008 	ldr	r5, [sp, #8]	; fField8
        2632b0:	eb657fb9 	bl	1bc319c <$CursorNext(RefVar const &)>
        2632b4:	e3300002 	teq	r0, #2	; 0x2
        2632b8:	0affffb3 	beq	26318c <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x158>
        2632bc:	e138000a 	teq	r8, sl
        2632c0:	0a00000d 	beq	2632fc <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x2c8>
        2632c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2632c8:	e1a00004 	mov	r0, r4
        2632cc:	e3a01007 	mov	r1, #7	; 0x7
        2632d0:	eb621036 	bl	1ae73b0 <TView::$InvalidateSlotCache(long)>
        2632d4:	e1a00108 	mov	r0, r8, lsl #2
        2632d8:	eb657b9b 	bl	1bc214c <$AllocateRefHandle(long)>
        2632dc:	e58d0000 	str	r0, [sp]
        2632e0:	e1a0200d 	mov	r2, sp
        2632e4:	e59f126c 	ldr	r1, [pc, #26c]	; 263558 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x524>
        2632e8:	e1a00004 	mov	r0, r4
        2632ec:	eb61e6ca 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        2632f0:	e59d0000 	ldr	r0, [sp]
        2632f4:	eb657fb0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2632f8:	e28dd004 	add	sp, sp, #4	; 0x4
        2632fc:	e24dd0bc 	sub	sp, sp, #188	; 0xbc
        263300:	e1a0000d 	mov	r0, sp
        263304:	eb609448 	bl	1a8842c <TAnimate::$__ct(void)>
        263308:	e24dd004 	sub	sp, sp, #4	; 0x4
        26330c:	e3350000 	teq	r5, #0	; 0x0
        263310:	0a000010 	beq	263358 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x324>
        263314:	e24dd008 	sub	sp, sp, #8	; 0x8
        263318:	e59d00d4 	ldr	r0, [sp, #212]
        26331c:	e8905000 	ldmia	r0, {ip, lr}
        263320:	e88d5000 	stmia	sp, {ip, lr}
        263324:	e59d0006 	ldr	r0, [sp, #6]
        263328:	e2400005 	sub	r0, r0, #5	; 0x5
        26332c:	e5cd0005 	strb	r0, [sp, #5]
        263330:	e1a00440 	mov	r0, r0, asr #8
        263334:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        263338:	e3a03000 	mov	r3, #0	; 0x0
        26333c:	e92d0008 	stmdb	sp!, {r3}
        263340:	e2653000 	rsb	r3, r5, #0	; 0x0
        263344:	e28d2004 	add	r2, sp, #4	; 0x4
        263348:	e1a01004 	mov	r1, r4
        26334c:	e28d0010 	add	r0, sp, #16	; 0x10
        263350:	eb60fb88 	bl	1aa2178 <TAnimate::$SetupSlideEffect(TView *, TRect const &, long, long)>
        263354:	e28dd00c 	add	sp, sp, #12	; 0xc
        263358:	e3a03000 	mov	r3, #0	; 0x0
        26335c:	e92d0008 	stmdb	sp!, {r3}
        263360:	e3a00002 	mov	r0, #2	; 0x2
        263364:	eb657b78 	bl	1bc214c <$AllocateRefHandle(long)>
        263368:	e58d0004 	str	r0, [sp, #4]	; fField4
        26336c:	e28d2004 	add	r2, sp, #4	; 0x4
        263370:	e1a00004 	mov	r0, r4
        263374:	e3a03000 	mov	r3, #0	; 0x0
        263378:	e3a0100d 	mov	r1, #13	; 0xd
        26337c:	eb65a096 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        263380:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        263384:	eb657f8c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        263388:	e3a07000 	mov	r7, #0	; 0x0
        26338c:	e1a00004 	mov	r0, r4
        263390:	eb659849 	bl	1bc94bc <TView::$Children(void)>
        263394:	eb657b6c 	bl	1bc214c <$AllocateRefHandle(long)>
        263398:	e1a0a000 	mov	sl, r0
        26339c:	e5900000 	ldr	r0, [r0]
        2633a0:	e3300002 	teq	r0, #2	; 0x2
        2633a4:	0a000001 	beq	2633b0 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x37c>
        2633a8:	eb6587bf 	bl	1bc52ac <$Length(long)>
        2633ac:	e1a07000 	mov	r7, r0
        2633b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2633b4:	e1a08007 	mov	r8, r7
        2633b8:	e59f119c 	ldr	r1, [pc, #19c]	; 26355c <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x528>
        2633bc:	e1a00004 	mov	r0, r4
        2633c0:	eb659c60 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        2633c4:	eb657b60 	bl	1bc214c <$AllocateRefHandle(long)>
        2633c8:	e58d0000 	str	r0, [sp]
        2633cc:	e5900000 	ldr	r0, [r0]
        2633d0:	e3300002 	teq	r0, #2	; 0x2
        2633d4:	0a000001 	beq	2633e0 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x3ac>
        2633d8:	eb6587b3 	bl	1bc52ac <$Length(long)>
        2633dc:	e0808008 	add	r8, r0, r8
        2633e0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2633e4:	e3a01000 	mov	r1, #0	; 0x0
        2633e8:	e3a00002 	mov	r0, #2	; 0x2
        2633ec:	e58d1004 	str	r1, [sp, #4]	; fField4
        2633f0:	eb657b55 	bl	1bc214c <$AllocateRefHandle(long)>
        2633f4:	e3a06000 	mov	r6, #0	; 0x0
        2633f8:	e3580000 	cmp	r8, #0	; 0x0
        2633fc:	e58d0000 	str	r0, [sp]
        263400:	da000025 	ble	26349c <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x468>
        263404:	e1560007 	cmp	r6, r7
        263408:	a0461007 	subge	r1, r6, r7
        26340c:	a59d0008 	ldrge	r0, [sp, #8]	; fField8
        263410:	b1a01006 	movlt	r1, r6
        263414:	b1a0000a 	movlt	r0, sl
        263418:	e5900000 	ldr	r0, [r0]
        26341c:	eb65838c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        263420:	e59d1000 	ldr	r1, [sp]
        263424:	e5810000 	str	r0, [r1]
        263428:	e1a0100d 	mov	r1, sp
        26342c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        263430:	eb60b0e7 	bl	1a8f7d4 <$DataExists(TViewList *, RefVar const &)>
        263434:	e1b09000 	movs	r9, r0
        263438:	1a000011 	bne	263484 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x450>
        26343c:	e1a0100d 	mov	r1, sp
        263440:	e1a00004 	mov	r0, r4
        263444:	eb60982c 	bl	1a894fc <TView::$AddView(RefVar const &)>
        263448:	e1a09000 	mov	r9, r0
        26344c:	e59d00cc 	ldr	r0, [sp, #204]
        263450:	e3500000 	cmp	r0, #0	; 0x0
        263454:	aa00000a 	bge	263484 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x450>
        263458:	e5940020 	ldr	r0, [r4, #32]	; fField32
        26345c:	e5901000 	ldr	r1, [r0]
        263460:	e2411001 	sub	r1, r1, #1	; 0x1
        263464:	e3a02001 	mov	r2, #1	; 0x1
        263468:	eb662471 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        26346c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        263470:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        263474:	e2812001 	add	r2, r1, #1	; 0x1
        263478:	e58d2004 	str	r2, [sp, #4]	; fField4
        26347c:	e1a02009 	mov	r2, r9
        263480:	eb661819 	bl	1be94ec <CList::$InsertAt(long, void *)>
        263484:	e1a00009 	mov	r0, r9
        263488:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        26348c:	eb65a05a 	bl	1bcb5fc <TView::$SetFlags(unsigned long)>
        263490:	e2866001 	add	r6, r6, #1	; 0x1
        263494:	e1560008 	cmp	r6, r8
        263498:	baffffd9 	blt	263404 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x3d0>
        26349c:	e1a00004 	mov	r0, r4
        2634a0:	eb65a04a 	bl	1bcb5d0 <TView::$RemoveUnmarked(void)>
        2634a4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2634a8:	e1a0000d 	mov	r0, sp
        2634ac:	e5941020 	ldr	r1, [r4, #32]	; fField32
        2634b0:	eb6093df 	bl	1a88434 <TListLoop::$__ct(CList *)>
        2634b4:	e1a0000d 	mov	r0, sp
        2634b8:	eb60e658 	bl	1a9ce20 <TListLoop::$Next(void)>
        2634bc:	e3300000 	teq	r0, #0	; 0x0
        2634c0:	0a000004 	beq	2634d8 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x4a4>
        2634c4:	eb65a03d 	bl	1bcb5c0 <TView::$RecalcBounds(void)>
        2634c8:	e1a0000d 	mov	r0, sp
        2634cc:	eb60e653 	bl	1a9ce20 <TListLoop::$Next(void)>
        2634d0:	e3300000 	teq	r0, #0	; 0x0
        2634d4:	1afffffa 	bne	2634c4 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x490>
        2634d8:	e59f6080 	ldr	r6, [pc, #80]	; 263560 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x52c>
        2634dc:	e3350000 	teq	r5, #0	; 0x0
        2634e0:	0a000021 	beq	26356c <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x538>
        2634e4:	e59d00d8 	ldr	r0, [sp, #216]
        2634e8:	e3500000 	cmp	r0, #0	; 0x0
        2634ec:	a59f1070 	ldrge	r1, [pc, #70]	; 263564 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x530>
        2634f0:	b59f1070 	ldrlt	r1, [pc, #70]	; 263568 <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x534>
        2634f4:	e28d001c 	add	r0, sp, #28	; 0x1c
        2634f8:	eb60b4dc 	bl	1a90870 <TAnimate::$DoEffect(RefVar const &)>
        2634fc:	e24dd018 	sub	sp, sp, #24	; 0x18
        263500:	e59d00fc 	ldr	r0, [sp, #252]
        263504:	e28d1010 	add	r1, sp, #16	; 0x10
        263508:	e8905000 	ldmia	r0, {ip, lr}
        26350c:	e8815000 	stmia	r1, {ip, lr}
        263510:	e59d0016 	ldr	r0, [sp, #22]	; fField22
        263514:	e2400005 	sub	r0, r0, #5	; 0x5
        263518:	e5cd0011 	strb	r0, [sp, #17]
        26351c:	e1a00440 	mov	r0, r0, asr #8
        263520:	e5cd0010 	strb	r0, [sp, #16]	; fField16
        263524:	e24dd004 	sub	sp, sp, #4	; 0x4
        263528:	e28d1014 	add	r1, sp, #20	; 0x14
        26352c:	e28d0004 	add	r0, sp, #4	; 0x4
        263530:	eb6093b6 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        263534:	e28d0004 	add	r0, sp, #4	; 0x4
        263538:	e1a02004 	mov	r2, r4
        26353c:	e58d0000 	str	r0, [sp]
        263540:	e5960000 	ldr	r0, [r6]
        263544:	e49d1004 	ldr	r1, [sp], #4	; fField4
        263548:	eb60ddf9 	bl	1a9ad34 <TRootView::$Invalidate(TBaseRegion const, TView *)>
        26354c:	e28dd018 	add	sp, sp, #24	; 0x18
        263550:	ea00000d 	b	26358c <TView::SyncScrollSoup(RefVar const &, RefVar const &)+0x558>
        263554:	00683470 	rsbeq	r3, r8, r0, ror r4
        263558:	00685070 	rsbeq	r5, r8, r0, ror r0
        26355c:	00684848 	rsbeq	r4, r8, r8, asr #16
        263560:	0c101934 	ldceq	9, cr1, [r0], -#208
        263564:	006844b8 	streqh	r4, [r8], -#72
        263568:	006844d8 	ldreqd	r4, [r8], -#72
        26356c:	e1a00004 	mov	r0, r4
        263570:	e3a01000 	mov	r1, #0	; 0x0
        263574:	e5942000 	ldr	r2, [r4]
        263578:	e1a0e00f 	mov	lr, pc
        26357c:	e282f054 	add	pc, r2, #84	; 0x54
        263580:	e3a01000 	mov	r1, #0	; 0x0
        263584:	e5960000 	ldr	r0, [r6]
        263588:	eb610745 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        26358c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        263590:	eb657f09 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        263594:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        263598:	eb657f07 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26359c:	e1a0000a 	mov	r0, sl
        2635a0:	eb657f05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2635a4:	e28d001c 	add	r0, sp, #28	; 0x1c
        2635a8:	e3a01000 	mov	r1, #0	; 0x0
        2635ac:	ebf77d60 	bl	42b34 <TAnimate::__dt(void)>
        2635b0:	e59d00dc 	ldr	r0, [sp, #220]
        2635b4:	eb657f00 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2635b8:	e3a00002 	mov	r0, #2	; 0x2
        2635bc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::DerivedFrom( const(long))
 * Address: 002635c0
 */
TView::DerivedFrom( const(long)) {
    /*
        2635c0:	e1a0c00d 	mov	ip, sp
        2635c4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2635c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2635cc:	e331004a 	teq	r1, #74	; 0x4a
        2635d0:	0a000002 	beq	2635e0 <TView::DerivedFrom( const(long))+0x20>
        2635d4:	ebfd1760 	bl	1a935c <TResponder::DerivedFrom( const(long))>
        2635d8:	e3300000 	teq	r0, #0	; 0x0
        2635dc:	0a000001 	beq	2635e8 <TView::DerivedFrom( const(long))+0x28>
        2635e0:	e3a00001 	mov	r0, #1	; 0x1
        2635e4:	ea000000 	b	2635ec <TView::DerivedFrom( const(long))+0x2c>
        2635e8:	e3a00000 	mov	r0, #0	; 0x0
        2635ec:	e20000ff 	and	r0, r0, #255	; 0xff
        2635f0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)
 * Address: 002635f4
 */
TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &) {
    /*
        2635f4:	e1a0c00d 	mov	ip, sp
        2635f8:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2635fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        263600:	e1a04000 	mov	r4, r0
        263604:	e1a05002 	mov	r5, r2
        263608:	e1a06003 	mov	r6, r3
        26360c:	e24dd018 	sub	sp, sp, #24	; 0x18
        263610:	e3a00002 	mov	r0, #2	; 0x2
        263614:	eb657acc 	bl	1bc214c <$AllocateRefHandle(long)>
        263618:	e58d0008 	str	r0, [sp, #8]	; fField8
        26361c:	e2840010 	add	r0, r4, #16	; 0x10
        263620:	e58d0014 	str	r0, [sp, #20]	; fField20
        263624:	e5901004 	ldr	r1, [r0, #4]	; fField4
        263628:	e1a01821 	mov	r1, r1, lsr #16
        26362c:	e5900000 	ldr	r0, [r0]
        263630:	e1a00820 	mov	r0, r0, lsr #16
        263634:	e0410000 	sub	r0, r1, r0
        263638:	e1a09800 	mov	r9, r0, lsl #16
        26363c:	e1a09849 	mov	r9, r9, asr #16
        263640:	e5960000 	ldr	r0, [r6]
        263644:	e5900000 	ldr	r0, [r0]
        263648:	e3100003 	tst	r0, #3	; 0x3
        26364c:	01a00140 	moveq	r0, r0, asr #2
        263650:	0a000000 	beq	263658 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x64>
        263654:	eb657ab0 	bl	1bc211c <$_RINTError(long)>
        263658:	e1a07000 	mov	r7, r0
        26365c:	e5950000 	ldr	r0, [r5]
        263660:	e5900000 	ldr	r0, [r0]
        263664:	e3100003 	tst	r0, #3	; 0x3
        263668:	01a00140 	moveq	r0, r0, asr #2
        26366c:	0a000000 	beq	263674 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x80>
        263670:	eb657aa9 	bl	1bc211c <$_RINTError(long)>
        263674:	e58d0004 	str	r0, [sp, #4]	; fField4
        263678:	e1a05000 	mov	r5, r0
        26367c:	e51b0034 	ldr	r0, [fp, -#52]
        263680:	e5900000 	ldr	r0, [r0]
        263684:	e5900000 	ldr	r0, [r0]
        263688:	eb658707 	bl	1bc52ac <$Length(long)>
        26368c:	e58d0000 	str	r0, [sp]
        263690:	e1a00004 	mov	r0, r4
        263694:	e3a01007 	mov	r1, #7	; 0x7
        263698:	eb659ba6 	bl	1bca538 <TView::$GetCacheProto(long)>
        26369c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2636a0:	e5810000 	str	r0, [r1]
        2636a4:	e3300002 	teq	r0, #2	; 0x2
        2636a8:	03a00000 	moveq	r0, #0	; 0x0
        2636ac:	0a000003 	beq	2636c0 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0xcc>
        2636b0:	e3100003 	tst	r0, #3	; 0x3
        2636b4:	01a00140 	moveq	r0, r0, asr #2
        2636b8:	0a000000 	beq	2636c0 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0xcc>
        2636bc:	eb657a96 	bl	1bc211c <$_RINTError(long)>
        2636c0:	e1a06000 	mov	r6, r0
        2636c4:	e3a08000 	mov	r8, #0	; 0x0
        2636c8:	e3a0a002 	mov	sl, #2	; 0x2
        2636cc:	e59f1028 	ldr	r1, [pc, #28]	; 2636fc <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x108>	; fField28
        2636d0:	e3570000 	cmp	r7, #0	; 0x0
        2636d4:	e58d1010 	str	r1, [sp, #16]	; fField16
        2636d8:	aa000026 	bge	263778 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x184>
        2636dc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2636e0:	e3300000 	teq	r0, #0	; 0x0
        2636e4:	03360000 	teqeq	r6, #0	; 0x0
        2636e8:	1a000004 	bne	263700 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x10c>
        2636ec:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2636f0:	eb657eb1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2636f4:	e1a0000a 	mov	r0, sl
        2636f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2636fc:	006830c8 	rsbeq	r3, r8, r8, asr #1
        263700:	e3360000 	teq	r6, #0	; 0x0
        263704:	1a000018 	bne	26376c <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x178>
        263708:	e0855007 	add	r5, r5, r7
        26370c:	e1a01005 	mov	r1, r5
        263710:	e51b0034 	ldr	r0, [fp, -#52]
        263714:	e5900000 	ldr	r0, [r0]
        263718:	e5900000 	ldr	r0, [r0]
        26371c:	eb6582cc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        263720:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        263724:	e5810000 	str	r0, [r1]
        263728:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        26372c:	e28d0008 	add	r0, sp, #8	; 0x8
        263730:	e3a03000 	mov	r3, #0	; 0x0
        263734:	e3a02000 	mov	r2, #0	; 0x0
        263738:	eb6582cd 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        26373c:	e3100003 	tst	r0, #3	; 0x3
        263740:	01a00140 	moveq	r0, r0, asr #2
        263744:	0a000000 	beq	26374c <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x158>
        263748:	eb657a73 	bl	1bc211c <$_RINTError(long)>
        26374c:	e1a0a000 	mov	sl, r0
        263750:	e1500009 	cmp	r0, r9
        263754:	da00001f 	ble	2637d8 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x1e4>
        263758:	e1a0100a 	mov	r1, sl
        26375c:	e1a00009 	mov	r0, r9
        263760:	eb653c76 	bl	1bb2940 <$__rt_sdiv>
        263764:	e04a8001 	sub	r8, sl, r1
        263768:	ea00001a 	b	2637d8 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x1e4>
        26376c:	e0568009 	subs	r8, r6, r9
        263770:	43a08000 	movmi	r8, #0	; 0x0
        263774:	ea000017 	b	2637d8 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x1e4>
        263778:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        26377c:	e51b0034 	ldr	r0, [fp, -#52]
        263780:	e5900000 	ldr	r0, [r0]
        263784:	e5900000 	ldr	r0, [r0]
        263788:	eb6582b1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        26378c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        263790:	e5810000 	str	r0, [r1]
        263794:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        263798:	e28d0008 	add	r0, sp, #8	; 0x8
        26379c:	e3a03000 	mov	r3, #0	; 0x0
        2637a0:	e3a02000 	mov	r2, #0	; 0x0
        2637a4:	eb6582b2 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2637a8:	e3100003 	tst	r0, #3	; 0x3
        2637ac:	01a00140 	moveq	r0, r0, asr #2
        2637b0:	0a000000 	beq	2637b8 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x1c4>
        2637b4:	eb657a58 	bl	1bc211c <$_RINTError(long)>
        2637b8:	e0400006 	sub	r0, r0, r6
        2637bc:	e1500009 	cmp	r0, r9
        2637c0:	c0868009 	addgt	r8, r6, r9
        2637c4:	ca000003 	bgt	2637d8 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x1e4>
        2637c8:	e0855007 	add	r5, r5, r7
        2637cc:	e59d0000 	ldr	r0, [sp]
        2637d0:	e1550000 	cmp	r5, r0
        2637d4:	aaffffc4 	bge	2636ec <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0xf8>
        2637d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2637dc:	e1380006 	teq	r8, r6
        2637e0:	0a00000d 	beq	26381c <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x228>
        2637e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2637e8:	e1a00004 	mov	r0, r4
        2637ec:	e3a01007 	mov	r1, #7	; 0x7
        2637f0:	eb620eee 	bl	1ae73b0 <TView::$InvalidateSlotCache(long)>
        2637f4:	e1a00108 	mov	r0, r8, lsl #2
        2637f8:	eb657a53 	bl	1bc214c <$AllocateRefHandle(long)>
        2637fc:	e58d0000 	str	r0, [sp]
        263800:	e1a0200d 	mov	r2, sp
        263804:	e59f1090 	ldr	r1, [pc, #90]	; 26389c <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x2a8>
        263808:	e1a00004 	mov	r0, r4
        26380c:	eb61e582 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        263810:	e59d0000 	ldr	r0, [sp]
        263814:	eb657e68 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        263818:	e28dd004 	add	sp, sp, #4	; 0x4
        26381c:	e1a00105 	mov	r0, r5, lsl #2
        263820:	eb657a49 	bl	1bc214c <$AllocateRefHandle(long)>
        263824:	e58d0000 	str	r0, [sp]
        263828:	e1a0200d 	mov	r2, sp
        26382c:	e2840024 	add	r0, r4, #36	; 0x24
        263830:	e59f1068 	ldr	r1, [pc, #68]	; 2638a0 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x2ac>
        263834:	eb658acd 	bl	1bc6370 <$SetVariable__FRC6RefVarN21>
        263838:	e59d0000 	ldr	r0, [sp]
        26383c:	eb657e5e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        263840:	e24dd004 	sub	sp, sp, #4	; 0x4
        263844:	e59f1058 	ldr	r1, [pc, #58]	; 2638a4 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x2b0>
        263848:	e1a00004 	mov	r0, r4
        26384c:	eb659b3d 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        263850:	e2500002 	subs	r0, r0, #2	; 0x2
        263854:	13a00001 	movne	r0, #1	; 0x1
        263858:	e20000ff 	and	r0, r0, #255	; 0xff
        26385c:	e58d0000 	str	r0, [sp]
        263860:	e59f1040 	ldr	r1, [pc, #40]	; 2638a8 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x2b4>	; fField40
        263864:	e1a00004 	mov	r0, r4
        263868:	eb659b3a 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        26386c:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        263870:	e5810000 	str	r0, [r1]
        263874:	e1a01000 	mov	r1, r0
        263878:	e24dd00c 	sub	sp, sp, #12	; 0xc
        26387c:	e3300002 	teq	r0, #2	; 0x2
        263880:	0a000009 	beq	2638ac <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x2b8>
        263884:	e1a00001 	mov	r0, r1
        263888:	e3110003 	tst	r1, #3	; 0x3
        26388c:	01a00140 	moveq	r0, r0, asr #2
        263890:	0a000006 	beq	2638b0 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x2bc>
        263894:	eb657a20 	bl	1bc211c <$_RINTError(long)>
        263898:	ea000004 	b	2638b0 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x2bc>
        26389c:	00685070 	rsbeq	r5, r8, r0, ror r0
        2638a0:	006831c0 	rsbeq	r3, r8, r0, asr #3
        2638a4:	00681e10 	rsbeq	r1, r8, r0, lsl lr
        2638a8:	006824e8 	rsbeq	r2, r8, r8, ror #9
        2638ac:	e3a00000 	mov	r0, #0	; 0x0
        2638b0:	e58d0008 	str	r0, [sp, #8]	; fField8
        2638b4:	e3a00000 	mov	r0, #0	; 0x0
        2638b8:	eb60e137 	bl	1a9bd9c <$MakeArray(long)>
        2638bc:	eb657a22 	bl	1bc214c <$AllocateRefHandle(long)>
        2638c0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2638c4:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2638c8:	e1500005 	cmp	r0, r5
        2638cc:	a1a06005 	movge	r6, r5
        2638d0:	b59d6018 	ldrlt	r6, [sp, #24]	; fField24
        2638d4:	e2680000 	rsb	r0, r8, #0	; 0x0
        2638d8:	e58d0000 	str	r0, [sp]
        2638dc:	e59f1004 	ldr	r1, [pc, #4]	; 2638e8 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x2f4>	; fField4
        2638e0:	e58d1020 	str	r1, [sp, #32]	; fField32
        2638e4:	ea00002b 	b	263998 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x3a4>
        2638e8:	006824e0 	rsbeq	r2, r8, r0, ror #9
        2638ec:	e1a01006 	mov	r1, r6
        2638f0:	e51b0034 	ldr	r0, [fp, -#52]
        2638f4:	e5900000 	ldr	r0, [r0]
        2638f8:	e5900000 	ldr	r0, [r0]
        2638fc:	eb658254 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        263900:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        263904:	e5810000 	str	r0, [r1]
        263908:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        26390c:	e3300000 	teq	r0, #0	; 0x0
        263910:	1a000006 	bne	263930 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x33c>
        263914:	e59d1020 	ldr	r1, [sp, #32]	; fField32
        263918:	e28d001c 	add	r0, sp, #28	; 0x1c
        26391c:	e3a02000 	mov	r2, #0	; 0x0
        263920:	eb658250 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        263924:	e2500002 	subs	r0, r0, #2	; 0x2
        263928:	13a00001 	movne	r0, #1	; 0x1
        26392c:	e20000ff 	and	r0, r0, #255	; 0xff
        263930:	e3300000 	teq	r0, #0	; 0x0
        263934:	159da008 	ldrne	sl, [sp, #8]	; fField8
        263938:	1a000009 	bne	263964 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x370>
        26393c:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        263940:	e28d001c 	add	r0, sp, #28	; 0x1c
        263944:	e3a03000 	mov	r3, #0	; 0x0
        263948:	e3a02000 	mov	r2, #0	; 0x0
        26394c:	eb658248 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        263950:	e3100003 	tst	r0, #3	; 0x3
        263954:	01a00140 	moveq	r0, r0, asr #2
        263958:	0a000000 	beq	263960 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x36c>
        26395c:	eb6579ee 	bl	1bc211c <$_RINTError(long)>
        263960:	e1a0a000 	mov	sl, r0
        263964:	e1560005 	cmp	r6, r5
        263968:	a59d0018 	ldrge	r0, [sp, #24]	; fField24
        26396c:	a1560000 	cmpge	r6, r0
        263970:	b088800a 	addlt	r8, r8, sl
        263974:	e1560005 	cmp	r6, r5
        263978:	ba000005 	blt	263994 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x3a0>
        26397c:	e28d101c 	add	r1, sp, #28	; 0x1c
        263980:	e28d0004 	add	r0, sp, #4	; 0x4
        263984:	eb6579e7 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        263988:	e59d0000 	ldr	r0, [sp]
        26398c:	e080000a 	add	r0, r0, sl
        263990:	e58d0000 	str	r0, [sp]
        263994:	e2866001 	add	r6, r6, #1	; 0x1
        263998:	e59d0000 	ldr	r0, [sp]
        26399c:	e1500009 	cmp	r0, r9
        2639a0:	b59d0014 	ldrlt	r0, [sp, #20]	; fField20
        2639a4:	b1560000 	cmplt	r6, r0
        2639a8:	baffffcf 	blt	2638ec <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x2f8>
        2639ac:	e24dd0bc 	sub	sp, sp, #188	; 0xbc
        2639b0:	e1a0000d 	mov	r0, sp
        2639b4:	eb60929c 	bl	1a8842c <TAnimate::$__ct(void)>
        2639b8:	e3380000 	teq	r8, #0	; 0x0
        2639bc:	0a000012 	beq	263a0c <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x418>
        2639c0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2639c4:	e59d00ec 	ldr	r0, [sp, #236]
        2639c8:	e8905000 	ldmia	r0, {ip, lr}
        2639cc:	e88d5000 	stmia	sp, {ip, lr}
        2639d0:	e59d0006 	ldr	r0, [sp, #6]
        2639d4:	e2400005 	sub	r0, r0, #5	; 0x5
        2639d8:	e5cd0005 	strb	r0, [sp, #5]
        2639dc:	e1a00440 	mov	r0, r0, asr #8
        2639e0:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        2639e4:	e3a03000 	mov	r3, #0	; 0x0
        2639e8:	e92d0008 	stmdb	sp!, {r3}
        2639ec:	e3570000 	cmp	r7, #0	; 0x0
        2639f0:	a2683000 	rsbge	r3, r8, #0	; 0x0
        2639f4:	b1a03008 	movlt	r3, r8
        2639f8:	e28d2004 	add	r2, sp, #4	; 0x4
        2639fc:	e1a01004 	mov	r1, r4
        263a00:	e28d000c 	add	r0, sp, #12	; 0xc
        263a04:	eb60f9db 	bl	1aa2178 <TAnimate::$SetupSlideEffect(TView *, TRect const &, long, long)>
        263a08:	e28dd00c 	add	sp, sp, #12	; 0xc
        263a0c:	e59d00c0 	ldr	r0, [sp, #192]
        263a10:	e5900000 	ldr	r0, [r0]
        263a14:	eb658624 	bl	1bc52ac <$Length(long)>
        263a18:	e1a09000 	mov	r9, r0
        263a1c:	e3a0a000 	mov	sl, #0	; 0x0
        263a20:	e3a06000 	mov	r6, #0	; 0x0
        263a24:	e3500000 	cmp	r0, #0	; 0x0
        263a28:	da000020 	ble	263ab0 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x4bc>
        263a2c:	e1a01006 	mov	r1, r6
        263a30:	e59d00c0 	ldr	r0, [sp, #192]
        263a34:	e5900000 	ldr	r0, [r0]
        263a38:	eb658205 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        263a3c:	e59d10d8 	ldr	r1, [sp, #216]
        263a40:	e5810000 	str	r0, [r1]
        263a44:	e28d10d8 	add	r1, sp, #216	; 0xd8
        263a48:	e5940020 	ldr	r0, [r4, #32]	; fField32
        263a4c:	eb659ab2 	bl	1bca51c <$Exists(TViewList *, RefVar const &)>
        263a50:	e1b05000 	movs	r5, r0
        263a54:	1a00000f 	bne	263a98 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x4a4>
        263a58:	e28d10d8 	add	r1, sp, #216	; 0xd8
        263a5c:	e1a00004 	mov	r0, r4
        263a60:	eb6096a5 	bl	1a894fc <TView::$AddView(RefVar const &)>
        263a64:	e1a05000 	mov	r5, r0
        263a68:	e3570000 	cmp	r7, #0	; 0x0
        263a6c:	aa000009 	bge	263a98 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x4a4>
        263a70:	e5940020 	ldr	r0, [r4, #32]	; fField32
        263a74:	e5901000 	ldr	r1, [r0]
        263a78:	e2411001 	sub	r1, r1, #1	; 0x1
        263a7c:	e3a02001 	mov	r2, #1	; 0x1
        263a80:	eb6622eb 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        263a84:	e1a0100a 	mov	r1, sl
        263a88:	e28aa001 	add	sl, sl, #1	; 0x1
        263a8c:	e1a02005 	mov	r2, r5
        263a90:	e5940020 	ldr	r0, [r4, #32]	; fField32
        263a94:	eb661694 	bl	1be94ec <CList::$InsertAt(long, void *)>
        263a98:	e1a00005 	mov	r0, r5
        263a9c:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        263aa0:	eb659ed5 	bl	1bcb5fc <TView::$SetFlags(unsigned long)>
        263aa4:	e2866001 	add	r6, r6, #1	; 0x1
        263aa8:	e1560009 	cmp	r6, r9
        263aac:	baffffde 	blt	263a2c <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x438>
        263ab0:	e1a00004 	mov	r0, r4
        263ab4:	eb659ec5 	bl	1bcb5d0 <TView::$RemoveUnmarked(void)>
        263ab8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        263abc:	e1a0000d 	mov	r0, sp
        263ac0:	e5941020 	ldr	r1, [r4, #32]	; fField32
        263ac4:	eb60925a 	bl	1a88434 <TListLoop::$__ct(CList *)>
        263ac8:	e1a0000d 	mov	r0, sp
        263acc:	eb60e4d3 	bl	1a9ce20 <TListLoop::$Next(void)>
        263ad0:	e3300000 	teq	r0, #0	; 0x0
        263ad4:	0a000004 	beq	263aec <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x4f8>
        263ad8:	eb659eb8 	bl	1bcb5c0 <TView::$RecalcBounds(void)>
        263adc:	e1a0000d 	mov	r0, sp
        263ae0:	eb60e4ce 	bl	1a9ce20 <TListLoop::$Next(void)>
        263ae4:	e3300000 	teq	r0, #0	; 0x0
        263ae8:	1afffffa 	bne	263ad8 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x4e4>
        263aec:	e59f5070 	ldr	r5, [pc, #70]	; 263b64 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x570>
        263af0:	e3380000 	teq	r8, #0	; 0x0
        263af4:	0a00001d 	beq	263b70 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x57c>
        263af8:	e3570000 	cmp	r7, #0	; 0x0
        263afc:	a59f1064 	ldrge	r1, [pc, #64]	; 263b68 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x574>
        263b00:	b59f1064 	ldrlt	r1, [pc, #64]	; 263b6c <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x578>
        263b04:	e28d000c 	add	r0, sp, #12	; 0xc
        263b08:	eb60b358 	bl	1a90870 <TAnimate::$DoEffect(RefVar const &)>
        263b0c:	e24dd018 	sub	sp, sp, #24	; 0x18
        263b10:	e59d0108 	ldr	r0, [sp, #264]
        263b14:	e28d1010 	add	r1, sp, #16	; 0x10
        263b18:	e8905000 	ldmia	r0, {ip, lr}
        263b1c:	e8815000 	stmia	r1, {ip, lr}
        263b20:	e59d0016 	ldr	r0, [sp, #22]	; fField22
        263b24:	e2400005 	sub	r0, r0, #5	; 0x5
        263b28:	e5cd0011 	strb	r0, [sp, #17]
        263b2c:	e1a00440 	mov	r0, r0, asr #8
        263b30:	e5cd0010 	strb	r0, [sp, #16]	; fField16
        263b34:	e24dd004 	sub	sp, sp, #4	; 0x4
        263b38:	e28d1014 	add	r1, sp, #20	; 0x14
        263b3c:	e28d0004 	add	r0, sp, #4	; 0x4
        263b40:	eb609232 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        263b44:	e28d0004 	add	r0, sp, #4	; 0x4
        263b48:	e1a02004 	mov	r2, r4
        263b4c:	e58d0000 	str	r0, [sp]
        263b50:	e5950000 	ldr	r0, [r5]
        263b54:	e49d1004 	ldr	r1, [sp], #4	; fField4
        263b58:	eb60dc75 	bl	1a9ad34 <TRootView::$Invalidate(TBaseRegion const, TView *)>
        263b5c:	e28dd018 	add	sp, sp, #24	; 0x18
        263b60:	ea00000a 	b	263b90 <TView::SyncScroll(RefVar const &, RefVar const &, RefVar const &)+0x59c>
        263b64:	0c101934 	ldceq	9, cr1, [r0], -#208
        263b68:	006844b8 	streqh	r4, [r8], -#72
        263b6c:	006844d8 	ldreqd	r4, [r8], -#72
        263b70:	e1a00004 	mov	r0, r4
        263b74:	e3a01000 	mov	r1, #0	; 0x0
        263b78:	e5942000 	ldr	r2, [r4]
        263b7c:	e1a0e00f 	mov	lr, pc
        263b80:	e282f054 	add	pc, r2, #84	; 0x54
        263b84:	e3a01000 	mov	r1, #0	; 0x0
        263b88:	e5950000 	ldr	r0, [r5]
        263b8c:	eb6105c4 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        263b90:	e59d00cc 	ldr	r0, [sp, #204]
        263b94:	e5904000 	ldr	r4, [r0]
        263b98:	e28d000c 	add	r0, sp, #12	; 0xc
        263b9c:	e3a01000 	mov	r1, #0	; 0x0
        263ba0:	ebf77be3 	bl	42b34 <TAnimate::__dt(void)>
        263ba4:	e59d00cc 	ldr	r0, [sp, #204]
        263ba8:	eb657d83 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        263bac:	e59d00e4 	ldr	r0, [sp, #228]
        263bb0:	eb657d81 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        263bb4:	e1a00004 	mov	r0, r4
        263bb8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)
 * Address: 00263bbc
 */
TView::RunCacheScript(long, RefVar const &, unsigned char, unsigned char *) {
    /*
        263bbc:	e1a0c00d 	mov	ip, sp
        263bc0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        263bc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        263bc8:	e1a05000 	mov	r5, r0
        263bcc:	e1a04001 	mov	r4, r1
        263bd0:	e1a06002 	mov	r6, r2
        263bd4:	e20380ff 	and	r8, r3, #255	; 0xff
        263bd8:	e3a00002 	mov	r0, #2	; 0x2
        263bdc:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        263be0:	eb657959 	bl	1bc214c <$AllocateRefHandle(long)>
        263be4:	e1a07000 	mov	r7, r0
        263be8:	e3a09000 	mov	r9, #0	; 0x0
        263bec:	e5950008 	ldr	r0, [r5, #8]	; fField8
        263bf0:	e3100302 	tst	r0, #134217728	; 0x8000000
        263bf4:	1a00002d 	bne	263cb0 <TView::RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)+0xf4>
        263bf8:	e1a01004 	mov	r1, r4
        263bfc:	e3540020 	cmp	r4, #32	; 0x20
        263c00:	b2850018 	addlt	r0, r5, #24	; 0x18
        263c04:	a285002c 	addge	r0, r5, #44	; 0x2c
        263c08:	a2411020 	subge	r1, r1, #32	; 0x20
        263c0c:	e3a02001 	mov	r2, #1	; 0x1
        263c10:	e5900000 	ldr	r0, [r0]
        263c14:	e1100112 	tst	r0, r2, lsl r1
        263c18:	0a000024 	beq	263cb0 <TView::RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)+0xf4>
        263c1c:	e3380000 	teq	r8, #0	; 0x0
        263c20:	e1a01004 	mov	r1, r4
        263c24:	e1a00005 	mov	r0, r5
        263c28:	0a000001 	beq	263c34 <TView::RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)+0x78>
        263c2c:	eb659a42 	bl	1bca53c <TView::$GetCacheVariable(long)>
        263c30:	ea000000 	b	263c38 <TView::RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)+0x7c>
        263c34:	eb659a3f 	bl	1bca538 <TView::$GetCacheProto(long)>
        263c38:	e3300002 	teq	r0, #2	; 0x2
        263c3c:	0a00001b 	beq	263cb0 <TView::RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)+0xf4>
        263c40:	e24dd008 	sub	sp, sp, #8	; 0x8
        263c44:	e59f0034 	ldr	r0, [pc, #34]	; 263c80 <TView::RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)+0xc4>
        263c48:	e2855024 	add	r5, r5, #36	; 0x24
        263c4c:	e3380000 	teq	r8, #0	; 0x0
        263c50:	e5900000 	ldr	r0, [r0]
        263c54:	e7900104 	ldr	r0, [r0, r4, lsl #2]	; fField2
        263c58:	0a000009 	beq	263c84 <TView::RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)+0xc8>
        263c5c:	eb65793a 	bl	1bc214c <$AllocateRefHandle(long)>
        263c60:	e58d0000 	str	r0, [sp]
        263c64:	e1a0100d 	mov	r1, sp
        263c68:	e1a00005 	mov	r0, r5
        263c6c:	e1a02006 	mov	r2, r6
        263c70:	eb657d57 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        263c74:	e5870000 	str	r0, [r7]
        263c78:	e59d0000 	ldr	r0, [sp]
        263c7c:	ea000008 	b	263ca4 <TView::RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)+0xe8>
        263c80:	0c104f58 	ldceq	15, cr4, [r0], -#352
        263c84:	eb657930 	bl	1bc214c <$AllocateRefHandle(long)>
        263c88:	e58d0004 	str	r0, [sp, #4]	; fField4
        263c8c:	e28d1004 	add	r1, sp, #4	; 0x4
        263c90:	e1a00005 	mov	r0, r5
        263c94:	e1a02006 	mov	r2, r6
        263c98:	eb657d50 	bl	1bc31e0 <$DoProtoMessage__FRC6RefVarN21>
        263c9c:	e5870000 	str	r0, [r7]
        263ca0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        263ca4:	eb657d44 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        263ca8:	e3a09001 	mov	r9, #1	; 0x1
        263cac:	e28dd008 	add	sp, sp, #8	; 0x8
        263cb0:	e33a0000 	teq	sl, #0	; 0x0
        263cb4:	15ca9000 	strneb	r9, [sl]
        263cb8:	e5974000 	ldr	r4, [r7]
        263cbc:	e1a00007 	mov	r0, r7
        263cc0:	eb657d3d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        263cc4:	e1a00004 	mov	r0, r4
        263cc8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::InvalidateSlotCache(long)
 * Address: 00263ccc
 */
TView::InvalidateSlotCache(long) {
    /*
        263ccc:	e3a02001 	mov	r2, #1	; 0x1
        263cd0:	e3510020 	cmp	r1, #32	; 0x20
        263cd4:	ba000004 	blt	263cec <TView::InvalidateSlotCache(long)+0x20>
        263cd8:	e2411020 	sub	r1, r1, #32	; 0x20
        263cdc:	e590302c 	ldr	r3, [r0, #44]	; fField44
        263ce0:	e1831112 	orr	r1, r3, r2, lsl r1
        263ce4:	e5a0102c 	str	r1, [r0, #44]!	; fField44
        263ce8:	ea000002 	b	263cf8 <TView::InvalidateSlotCache(long)+0x2c>
        263cec:	e5903018 	ldr	r3, [r0, #24]	; fField24
        263cf0:	e1831112 	orr	r1, r3, r2, lsl r1
        263cf4:	e5a01018 	str	r1, [r0, #24]!	; fField24
        263cf8:	e1a00002 	mov	r0, r2
        263cfc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)
 * Address: 00263d00
 */
TView::RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *) {
    /*
        263d00:	e1a0c00d 	mov	ip, sp
        263d04:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        263d08:	e24cb004 	sub	fp, ip, #4	; 0x4
        263d0c:	e1a05000 	mov	r5, r0
        263d10:	e1a04001 	mov	r4, r1
        263d14:	e1a06002 	mov	r6, r2
        263d18:	e20380ff 	and	r8, r3, #255	; 0xff
        263d1c:	e3a00002 	mov	r0, #2	; 0x2
        263d20:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        263d24:	eb657908 	bl	1bc214c <$AllocateRefHandle(long)>
        263d28:	e1a07000 	mov	r7, r0
        263d2c:	e3a09000 	mov	r9, #0	; 0x0
        263d30:	e5950008 	ldr	r0, [r5, #8]	; fField8
        263d34:	e3100302 	tst	r0, #134217728	; 0x8000000
        263d38:	1a000012 	bne	263d88 <TView::RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)+0x88>
        263d3c:	e3380000 	teq	r8, #0	; 0x0
        263d40:	e1a01004 	mov	r1, r4
        263d44:	e1a00005 	mov	r0, r5
        263d48:	0a000001 	beq	263d54 <TView::RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)+0x54>
        263d4c:	eb659a01 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        263d50:	ea000000 	b	263d58 <TView::RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)+0x58>
        263d54:	eb6599fb 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        263d58:	e3300002 	teq	r0, #2	; 0x2
        263d5c:	0a000009 	beq	263d88 <TView::RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)+0x88>
        263d60:	e2850024 	add	r0, r5, #36	; 0x24
        263d64:	e3380000 	teq	r8, #0	; 0x0
        263d68:	e1a02006 	mov	r2, r6
        263d6c:	e1a01004 	mov	r1, r4
        263d70:	0a000001 	beq	263d7c <TView::RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)+0x7c>
        263d74:	eb657d16 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        263d78:	ea000000 	b	263d80 <TView::RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)+0x80>
        263d7c:	eb657d17 	bl	1bc31e0 <$DoProtoMessage__FRC6RefVarN21>
        263d80:	e3a09001 	mov	r9, #1	; 0x1
        263d84:	e5870000 	str	r0, [r7]
        263d88:	e33a0000 	teq	sl, #0	; 0x0
        263d8c:	15ca9000 	strneb	r9, [sl]
        263d90:	e5974000 	ldr	r4, [r7]
        263d94:	e1a00007 	mov	r0, r7
        263d98:	eb657d07 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        263d9c:	e1a00004 	mov	r0, r4
        263da0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::LocalOrigin( const(void))
 * Address: 00263da4
 */
TView::LocalOrigin( const(void)) {
    /*
        263da4:	e1a0c00d 	mov	ip, sp
        263da8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        263dac:	e24cb004 	sub	fp, ip, #4	; 0x4
        263db0:	e1a04000 	mov	r4, r0
        263db4:	e24dd008 	sub	sp, sp, #8	; 0x8
        263db8:	e5910010 	ldr	r0, [r1, #16]	; fField16
        263dbc:	e58d0000 	str	r0, [sp]
        263dc0:	e591101c 	ldr	r1, [r1, #28]	; fField28
        263dc4:	e28d0004 	add	r0, sp, #4	; 0x4
        263dc8:	eb000dcd 	bl	267504 <TView::ContentsOrigin(void)>
        263dcc:	e59d0000 	ldr	r0, [sp]
        263dd0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        263dd4:	e0400001 	sub	r0, r0, r1
        263dd8:	e1a00800 	mov	r0, r0, lsl #16
        263ddc:	e1a00840 	mov	r0, r0, asr #16
        263de0:	e41d1004 	ldr	r1, [sp], -#4	; fField4
        263de4:	e1a01821 	mov	r1, r1, lsr #16
        263de8:	e59d200a 	ldr	r2, [sp, #10]
        263dec:	e0411002 	sub	r1, r1, r2
        263df0:	e1a01801 	mov	r1, r1, lsl #16
        263df4:	e1a01841 	mov	r1, r1, asr #16
        263df8:	e5cd0003 	strb	r0, [sp, #3]
        263dfc:	e1a00440 	mov	r0, r0, asr #8
        263e00:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        263e04:	e5cd1001 	strb	r1, [sp, #1]
        263e08:	e1a00441 	mov	r0, r1, asr #8
        263e0c:	e5cd0000 	strb	r0, [sp]
        263e10:	e59d0000 	ldr	r0, [sp]
        263e14:	e5840000 	str	r0, [r4]
        263e18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::Move(TPoint const &)
 * Address: 00263e1c
 */
TView::Move(TPoint const &) {
    /*
        263e1c:	e1a0c00d 	mov	ip, sp
        263e20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        263e24:	e24cb004 	sub	fp, ip, #4	; 0x4
        263e28:	e1a04000 	mov	r4, r0
        263e2c:	e1a05001 	mov	r5, r1
        263e30:	e24dd008 	sub	sp, sp, #8	; 0x8
        263e34:	e2800010 	add	r0, r0, #16	; 0x10
        263e38:	e8905000 	ldmia	r0, {ip, lr}
        263e3c:	e88d5000 	stmia	sp, {ip, lr}
        263e40:	e24dd008 	sub	sp, sp, #8	; 0x8
        263e44:	e28d0004 	add	r0, sp, #4	; 0x4
        263e48:	e594101c 	ldr	r1, [r4, #28]	; fField28
        263e4c:	eb000dac 	bl	267504 <TView::ContentsOrigin(void)>
        263e50:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        263e54:	e2600000 	rsb	r0, r0, #0	; 0x0
        263e58:	e1a00800 	mov	r0, r0, lsl #16
        263e5c:	e1a00840 	mov	r0, r0, asr #16
        263e60:	e59d1006 	ldr	r1, [sp, #6]
        263e64:	e2611000 	rsb	r1, r1, #0	; 0x0
        263e68:	e1a01801 	mov	r1, r1, lsl #16
        263e6c:	e1a01841 	mov	r1, r1, asr #16
        263e70:	e24dd004 	sub	sp, sp, #4	; 0x4
        263e74:	e5cd0003 	strb	r0, [sp, #3]
        263e78:	e1a00440 	mov	r0, r0, asr #8
        263e7c:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        263e80:	e5cd1001 	strb	r1, [sp, #1]
        263e84:	e1a00441 	mov	r0, r1, asr #8
        263e88:	e5cd0000 	strb	r0, [sp]
        263e8c:	e49d0004 	ldr	r0, [sp], #4	; fField4
        263e90:	e58d0000 	str	r0, [sp]
        263e94:	e28d0008 	add	r0, sp, #8	; 0x8
        263e98:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        263e9c:	e1a01841 	mov	r1, r1, asr #16
        263ea0:	e59d2000 	ldr	r2, [sp]
        263ea4:	e1a02842 	mov	r2, r2, asr #16
        263ea8:	eb63b68e 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        263eac:	e5950000 	ldr	r0, [r5]
        263eb0:	e5ad0004 	str	r0, [sp, #4]!	; fField4
        263eb4:	e28d0004 	add	r0, sp, #4	; 0x4
        263eb8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        263ebc:	e1a01841 	mov	r1, r1, asr #16
        263ec0:	e59d2000 	ldr	r2, [sp]
        263ec4:	e1a02842 	mov	r2, r2, asr #16
        263ec8:	eb63b686 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        263ecc:	e28dd004 	add	sp, sp, #4	; 0x4
        263ed0:	e1a0100d 	mov	r1, sp
        263ed4:	e1a00004 	mov	r0, r4
        263ed8:	eb65a1da 	bl	1bcc648 <TView::$WriteBounds(TRect const &)>
        263edc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        263ee0:	e1a0000d 	mov	r0, sp
        263ee4:	e5941020 	ldr	r1, [r4, #32]	; fField32
        263ee8:	eb609151 	bl	1a88434 <TListLoop::$__ct(CList *)>
        263eec:	e1a0000d 	mov	r0, sp
        263ef0:	eb60e3ca 	bl	1a9ce20 <TListLoop::$Next(void)>
        263ef4:	e3300000 	teq	r0, #0	; 0x0
        263ef8:	0a000004 	beq	263f10 <TView::Move(TPoint const &)+0xf4>
        263efc:	eb659daf 	bl	1bcb5c0 <TView::$RecalcBounds(void)>
        263f00:	e1a0000d 	mov	r0, sp
        263f04:	eb60e3c5 	bl	1a9ce20 <TListLoop::$Next(void)>
        263f08:	e3300000 	teq	r0, #0	; 0x0
        263f0c:	1afffffa 	bne	263efc <TView::Move(TPoint const &)+0xe0>
        263f10:	e3a01000 	mov	r1, #0	; 0x0
        263f14:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        263f18:	e5902000 	ldr	r2, [r0]
        263f1c:	e1a0e00f 	mov	lr, pc
        263f20:	e282f054 	add	pc, r2, #84	; 0x54
        263f24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::WriteBounds(TRect const &)
 * Address: 00263f28
 */
TView::WriteBounds(TRect const &) {
    /*
        263f28:	e1a0c00d 	mov	ip, sp
        263f2c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        263f30:	e24cb004 	sub	fp, ip, #4	; 0x4
        263f34:	e1a04000 	mov	r4, r0
        263f38:	e1a05001 	mov	r5, r1
        263f3c:	e24dd008 	sub	sp, sp, #8	; 0x8
        263f40:	e2800010 	add	r0, r0, #16	; 0x10
        263f44:	e8905000 	ldmia	r0, {ip, lr}
        263f48:	e88d5000 	stmia	sp, {ip, lr}
        263f4c:	e24dd008 	sub	sp, sp, #8	; 0x8
        263f50:	e28d0004 	add	r0, sp, #4	; 0x4
        263f54:	e594101c 	ldr	r1, [r4, #28]	; fField28
        263f58:	eb000d69 	bl	267504 <TView::ContentsOrigin(void)>
        263f5c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        263f60:	e2600000 	rsb	r0, r0, #0	; 0x0
        263f64:	e1a00800 	mov	r0, r0, lsl #16
        263f68:	e1a00840 	mov	r0, r0, asr #16
        263f6c:	e59d1006 	ldr	r1, [sp, #6]
        263f70:	e2611000 	rsb	r1, r1, #0	; 0x0
        263f74:	e1a01801 	mov	r1, r1, lsl #16
        263f78:	e1a01841 	mov	r1, r1, asr #16
        263f7c:	e24dd004 	sub	sp, sp, #4	; 0x4
        263f80:	e5cd0003 	strb	r0, [sp, #3]
        263f84:	e1a00440 	mov	r0, r0, asr #8
        263f88:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        263f8c:	e5cd1001 	strb	r1, [sp, #1]
        263f90:	e1a00441 	mov	r0, r1, asr #8
        263f94:	e5cd0000 	strb	r0, [sp]
        263f98:	e49d0004 	ldr	r0, [sp], #4	; fField4
        263f9c:	e58d0000 	str	r0, [sp]
        263fa0:	e28d0008 	add	r0, sp, #8	; 0x8
        263fa4:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        263fa8:	e1a01841 	mov	r1, r1, asr #16
        263fac:	e59d2000 	ldr	r2, [sp]
        263fb0:	e1a02842 	mov	r2, r2, asr #16
        263fb4:	eb63b64b 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        263fb8:	e28dd008 	add	sp, sp, #8	; 0x8
        263fbc:	e1a01005 	mov	r1, r5
        263fc0:	e1a0000d 	mov	r0, sp
        263fc4:	eb63a9d8 	bl	1b4e72c <$EqualRect__FP4RectT1>
        263fc8:	e3300000 	teq	r0, #0	; 0x0
        263fcc:	1a00001c 	bne	264044 <TView::WriteBounds(TRect const &)+0x11c>
        263fd0:	e24dd004 	sub	sp, sp, #4	; 0x4
        263fd4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        263fd8:	e3100082 	tst	r0, #130	; 0x82
        263fdc:	e59f6064 	ldr	r6, [pc, #64]	; 264048 <TView::WriteBounds(TRect const &)+0x120>
        263fe0:	1a000009 	bne	26400c <TView::WriteBounds(TRect const &)+0xe4>
        263fe4:	e1a00005 	mov	r0, r5
        263fe8:	eb662deb 	bl	1bef79c <$ToObject(TRect const &)>
        263fec:	eb657856 	bl	1bc214c <$AllocateRefHandle(long)>
        263ff0:	e58d0000 	str	r0, [sp]
        263ff4:	e1a0200d 	mov	r2, sp
        263ff8:	e1a01006 	mov	r1, r6
        263ffc:	e1a00004 	mov	r0, r4
        264000:	eb61e386 	bl	1adce20 <TView::$SetDataSlot(RefVar const &, RefVar const &)>
        264004:	e59d0000 	ldr	r0, [sp]
        264008:	eb657c6b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26400c:	e1a01005 	mov	r1, r5
        264010:	e1a00004 	mov	r0, r4
        264014:	e5942000 	ldr	r2, [r4]
        264018:	e1a0e00f 	mov	lr, pc
        26401c:	e282f02c 	add	pc, r2, #44	; 0x2c
        264020:	e5940008 	ldr	r0, [r4, #8]	; fField8
        264024:	e3100082 	tst	r0, #130	; 0x82
        264028:	1a000004 	bne	264040 <TView::WriteBounds(TRect const &)+0x118>
        26402c:	e1a01006 	mov	r1, r6
        264030:	e1a00004 	mov	r0, r4
        264034:	e5942000 	ldr	r2, [r4]
        264038:	e1a0e00f 	mov	lr, pc
        26403c:	e282f04c 	add	pc, r2, #76	; 0x4c
        264040:	e28dd004 	add	sp, sp, #4	; 0x4
        264044:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        264048:	00684f08 	rsbeq	r4, r8, r8, lsl #30
    */
}

/**
 * Symbol: TView::OuterBounds(TRect *)
 * Address: 002640d0
 */
TView::OuterBounds(TRect *) {
    /*
        2640d0:	e1a0c00d 	mov	ip, sp
        2640d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2640d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2640dc:	e1a05000 	mov	r5, r0
        2640e0:	e1a04001 	mov	r4, r1
        2640e4:	e2800010 	add	r0, r0, #16	; 0x10
        2640e8:	e8901008 	ldmia	r0, {r3, ip}
        2640ec:	e8841008 	stmia	r4, {r3, ip}
        2640f0:	e595100c 	ldr	r1, [r5, #12]	; fField12
        2640f4:	e1a00601 	mov	r0, r1, lsl #12
        2640f8:	e1a00620 	mov	r0, r0, lsr #12
        2640fc:	e3c00a0f 	bic	r0, r0, #61440	; 0xf000
        264100:	e3d000ff 	bics	r0, r0, #255	; 0xff
        264104:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        264108:	e1a00004 	mov	r0, r4
        26410c:	ebffffce 	bl	26404c <OuterBounds1(TRect *, unsigned long)>
        264110:	e59f0040 	ldr	r0, [pc, #40]	; 264158 <TView::OuterBounds(TRect *)+0x88>	; fField40
        264114:	e5900000 	ldr	r0, [r0]
        264118:	e5900074 	ldr	r0, [r0, #116]
        26411c:	e1300005 	teq	r0, r5
        264120:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        264124:	e5940000 	ldr	r0, [r4]
        264128:	e1a00820 	mov	r0, r0, lsr #16
        26412c:	e2400003 	sub	r0, r0, #3	; 0x3
        264130:	e5c40001 	strb	r0, [r4, #1]
        264134:	e1a00440 	mov	r0, r0, asr #8
        264138:	e5c40000 	strb	r0, [r4]
        26413c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        264140:	e1a00820 	mov	r0, r0, lsr #16
        264144:	e2800003 	add	r0, r0, #3	; 0x3
        264148:	e5c40005 	strb	r0, [r4, #5]
        26414c:	e1a00440 	mov	r0, r0, asr #8
        264150:	e5c40004 	strb	r0, [r4, #4]	; fField4
        264154:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        264158:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TView::JustifyBounds(TRect *)
 * Address: 0026415c
 */
TView::JustifyBounds(TRect *) {
    /*
        26415c:	e1a0c00d 	mov	ip, sp
        264160:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        264164:	e24cb004 	sub	fp, ip, #4	; 0x4
        264168:	e1a05000 	mov	r5, r0
        26416c:	e1a04001 	mov	r4, r1
        264170:	e24dd008 	sub	sp, sp, #8	; 0x8
        264174:	e590701c 	ldr	r7, [r0, #28]	; fField28
        264178:	e1300007 	teq	r0, r7
        26417c:	1a000000 	bne	264184 <TView::JustifyBounds(TRect *)+0x28>
        264180:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        264184:	e24dd008 	sub	sp, sp, #8	; 0x8
        264188:	e2870010 	add	r0, r7, #16	; 0x10
        26418c:	e8905000 	ldmia	r0, {ip, lr}
        264190:	e88d5000 	stmia	sp, {ip, lr}
        264194:	eb63a95f 	bl	1b4e718 <$EmptyRect(Rect *)>
        264198:	e3300000 	teq	r0, #0	; 0x0
        26419c:	15970008 	ldrne	r0, [r7, #8]	; fField8
        2641a0:	12000201 	andne	r0, r0, #268435456	; 0x10000000
        2641a4:	13300000 	teqne	r0, #0	; 0x0
        2641a8:	0a000011 	beq	2641f4 <TView::JustifyBounds(TRect *)+0x98>
        2641ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        2641b0:	e59f10dc 	ldr	r1, [pc, #dc]	; 264294 <TView::JustifyBounds(TRect *)+0x138>
        2641b4:	e1a00007 	mov	r0, r7
        2641b8:	eb6598e2 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        2641bc:	eb6577e2 	bl	1bc214c <$AllocateRefHandle(long)>
        2641c0:	e58d0000 	str	r0, [sp]
        2641c4:	e28d1004 	add	r1, sp, #4	; 0x4
        2641c8:	e1a0000d 	mov	r0, sp
        2641cc:	eb60c229 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        2641d0:	e3300000 	teq	r0, #0	; 0x0
        2641d4:	028f0f2f 	addeq	r0, pc, #188	; 0xbc
        2641d8:	0b65fbf0 	bleq	1be31a0 <$ThrowMsg>
        2641dc:	e28d1004 	add	r1, sp, #4	; 0x4
        2641e0:	e1a00007 	mov	r0, r7
        2641e4:	eb659ce6 	bl	1bcb584 <TView::$JustifyBounds(TRect *)>
        2641e8:	e59d0000 	ldr	r0, [sp]
        2641ec:	eb657bf2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2641f0:	e28dd004 	add	sp, sp, #4	; 0x4
        2641f4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2641f8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2641fc:	e58d0004 	str	r0, [sp, #4]	; fField4
        264200:	e1a0100d 	mov	r1, sp
        264204:	e1a00007 	mov	r0, r7
        264208:	eb6598cc 	bl	1bca540 <TView::$GetChildOrigin(TPoint *)>
        26420c:	e59d1006 	ldr	r1, [sp, #6]
        264210:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        264214:	e0410000 	sub	r0, r1, r0
        264218:	e5cd0005 	strb	r0, [sp, #5]
        26421c:	e1a00440 	mov	r0, r0, asr #8
        264220:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        264224:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        264228:	e59d1000 	ldr	r1, [sp]
        26422c:	e0400001 	sub	r0, r0, r1
        264230:	e5cd0007 	strb	r0, [sp, #7]
        264234:	e1a00440 	mov	r0, r0, asr #8
        264238:	e5cd0006 	strb	r0, [sp, #6]
        26423c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        264240:	e3100201 	tst	r0, #268435456	; 0x10000000
        264244:	12000209 	andne	r0, r0, #-1879048192	; 0x90000000
        264248:	13300209 	teqne	r0, #-1879048192	; 0x90000000
        26424c:	0a000016 	beq	2642ac <TView::JustifyBounds(TRect *)+0x150>
        264250:	e1a00005 	mov	r0, r5
        264254:	e3a01009 	mov	r1, #9	; 0x9
        264258:	eb6598b6 	bl	1bca538 <TView::$GetCacheProto(long)>
        26425c:	eb6577ba 	bl	1bc214c <$AllocateRefHandle(long)>
        264260:	e1a08000 	mov	r8, r0
        264264:	e5900000 	ldr	r0, [r0]
        264268:	e3300002 	teq	r0, #2	; 0x2
        26426c:	03a06000 	moveq	r6, #0	; 0x0
        264270:	0a000004 	beq	264288 <TView::JustifyBounds(TRect *)+0x12c>
        264274:	e3100003 	tst	r0, #3	; 0x3
        264278:	01a00140 	moveq	r0, r0, asr #2
        26427c:	0a000000 	beq	264284 <TView::JustifyBounds(TRect *)+0x128>
        264280:	eb6577a5 	bl	1bc211c <$_RINTError(long)>
        264284:	e3c06103 	bic	r6, r0, #-1073741824	; 0xc0000000
        264288:	e1a00008 	mov	r0, r8
        26428c:	eb657bca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        264290:	ea000007 	b	2642b4 <TView::JustifyBounds(TRect *)+0x158>
        264294:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        264298:	62616420 	rsbvs	r6, r1, #536870912	; 0x20000000
        26429c:	626f756e 	rsbvs	r7, pc, #461373440	; 0x1b800000
        2642a0:	64732066 	ldrvsbt	r2, [r3], -#102
        2642a4:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        2642a8:	00000000 	andeq	r0, r0, r0
        2642ac:	e5950028 	ldr	r0, [r5, #40]	; fField40
        2642b0:	e3c06103 	bic	r6, r0, #-1073741824	; 0xc0000000
        2642b4:	e3160c01 	tst	r6, #256	; 0x100
        2642b8:	0a00000b 	beq	2642ec <TView::JustifyBounds(TRect *)+0x190>
        2642bc:	e59d1006 	ldr	r1, [sp, #6]
        2642c0:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        2642c4:	e0810000 	add	r0, r1, r0
        2642c8:	e5cd0005 	strb	r0, [sp, #5]
        2642cc:	e1a00440 	mov	r0, r0, asr #8
        2642d0:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        2642d4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2642d8:	e59d0000 	ldr	r0, [sp]
        2642dc:	e0810000 	add	r0, r1, r0
        2642e0:	e5cd0007 	strb	r0, [sp, #7]
        2642e4:	e1a00440 	mov	r0, r0, asr #8
        2642e8:	e5cd0006 	strb	r0, [sp, #6]
        2642ec:	e3a09001 	mov	r9, #1	; 0x1
        2642f0:	e3a08001 	mov	r8, #1	; 0x1
        2642f4:	e3160c7e 	tst	r6, #32256	; 0x7e00
        2642f8:	0a0000be 	beq	2645f8 <TView::JustifyBounds(TRect *)+0x49c>
        2642fc:	e1a01005 	mov	r1, r5
        264300:	e5970020 	ldr	r0, [r7, #32]	; fField32
        264304:	eb66104a 	bl	1be8434 <CList::$GetIdentityIndex(void *)>
        264308:	e3700001 	cmn	r0, #1	; 0x1
        26430c:	05970020 	ldreq	r0, [r7, #32]	; fField32
        264310:	05900000 	ldreq	r0, [r0]
        264314:	e3500000 	cmp	r0, #0	; 0x0
        264318:	da0000b6 	ble	2645f8 <TView::JustifyBounds(TRect *)+0x49c>
        26431c:	e2401001 	sub	r1, r0, #1	; 0x1
        264320:	e5b72020 	ldr	r2, [r7, #32]!	; fField32
        264324:	e1a00002 	mov	r0, r2
        264328:	eb660805 	bl	1be6344 <CList::$At(long)>
        26432c:	e1a07000 	mov	r7, r0
        264330:	e2160a07 	ands	r0, r6, #28672	; 0x7000
        264334:	e58d0014 	str	r0, [sp, #20]	; fField20
        264338:	0a000055 	beq	264494 <TView::JustifyBounds(TRect *)+0x338>
        26433c:	e3a08000 	mov	r8, #0	; 0x0
        264340:	e3160203 	tst	r6, #805306368	; 0x30000000
        264344:	0a00001b 	beq	2643b8 <TView::JustifyBounds(TRect *)+0x25c>
        264348:	e2870010 	add	r0, r7, #16	; 0x10
        26434c:	e5901004 	ldr	r1, [r0, #4]	; fField4
        264350:	e1a01821 	mov	r1, r1, lsr #16
        264354:	e5900000 	ldr	r0, [r0]
        264358:	e1a00820 	mov	r0, r0, lsr #16
        26435c:	e0410000 	sub	r0, r1, r0
        264360:	e1a0a800 	mov	sl, r0, lsl #16
        264364:	e1a0a84a 	mov	sl, sl, asr #16
        264368:	e3160201 	tst	r6, #268435456	; 0x10000000
        26436c:	0a000007 	beq	264390 <TView::JustifyBounds(TRect *)+0x234>
        264370:	e5940000 	ldr	r0, [r4]
        264374:	e1a00840 	mov	r0, r0, asr #16
        264378:	e0010a90 	mul	r1, r0, sl
        26437c:	e3a00064 	mov	r0, #100	; 0x64
        264380:	eb65396e 	bl	1bb2940 <$__rt_sdiv>
        264384:	e5c40001 	strb	r0, [r4, #1]
        264388:	e1a00440 	mov	r0, r0, asr #8
        26438c:	e5c40000 	strb	r0, [r4]
        264390:	e3160202 	tst	r6, #536870912	; 0x20000000
        264394:	0a000007 	beq	2643b8 <TView::JustifyBounds(TRect *)+0x25c>
        264398:	e5940004 	ldr	r0, [r4, #4]	; fField4
        26439c:	e1a00840 	mov	r0, r0, asr #16
        2643a0:	e001009a 	mul	r1, sl, r0
        2643a4:	e3a00064 	mov	r0, #100	; 0x64
        2643a8:	eb653964 	bl	1bb2940 <$__rt_sdiv>
        2643ac:	e5c40005 	strb	r0, [r4, #5]
        2643b0:	e1a00440 	mov	r0, r0, asr #8
        2643b4:	e5c40004 	strb	r0, [r4, #4]	; fField4
        2643b8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2643bc:	e3300a01 	teq	r0, #4096	; 0x1000
        2643c0:	0a00000a 	beq	2643f0 <TView::JustifyBounds(TRect *)+0x294>
        2643c4:	e3300a02 	teq	r0, #8192	; 0x2000
        2643c8:	05970014 	ldreq	r0, [r7, #20]	; fField20
        2643cc:	01a00820 	moveq	r0, r0, lsr #16
        2643d0:	0a000017 	beq	264434 <TView::JustifyBounds(TRect *)+0x2d8>
        2643d4:	e3300a03 	teq	r0, #12288	; 0x3000
        2643d8:	0a000019 	beq	264444 <TView::JustifyBounds(TRect *)+0x2e8>
        2643dc:	e3300901 	teq	r0, #16384	; 0x4000
        2643e0:	05970010 	ldreq	r0, [r7, #16]	; fField16
        2643e4:	01a00820 	moveq	r0, r0, lsr #16
        2643e8:	0a000011 	beq	264434 <TView::JustifyBounds(TRect *)+0x2d8>
        2643ec:	ea000028 	b	264494 <TView::JustifyBounds(TRect *)+0x338>
        2643f0:	e2870010 	add	r0, r7, #16	; 0x10
        2643f4:	e5901000 	ldr	r1, [r0]
        2643f8:	e1a01841 	mov	r1, r1, asr #16
        2643fc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        264400:	e1a00820 	mov	r0, r0, lsr #16
        264404:	e0400001 	sub	r0, r0, r1
        264408:	e1a00800 	mov	r0, r0, lsl #16
        26440c:	e1a00840 	mov	r0, r0, asr #16
        264410:	e5942004 	ldr	r2, [r4, #4]	; fField4
        264414:	e1a02822 	mov	r2, r2, lsr #16
        264418:	e5943000 	ldr	r3, [r4]
        26441c:	e1a03823 	mov	r3, r3, lsr #16
        264420:	e0422003 	sub	r2, r2, r3
        264424:	e1a02802 	mov	r2, r2, lsl #16
        264428:	e0400842 	sub	r0, r0, r2, asr #16
        26442c:	e0800fa0 	add	r0, r0, r0, lsr #31
        264430:	e08100c0 	add	r0, r1, r0, asr #1
        264434:	e5cd0005 	strb	r0, [sp, #5]
        264438:	e1a00440 	mov	r0, r0, asr #8
        26443c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        264440:	ea000013 	b	264494 <TView::JustifyBounds(TRect *)+0x338>
        264444:	e3a00000 	mov	r0, #0	; 0x0
        264448:	e5cd0005 	strb	r0, [sp, #5]
        26444c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        264450:	e2870010 	add	r0, r7, #16	; 0x10
        264454:	e5901000 	ldr	r1, [r0]
        264458:	e1a01821 	mov	r1, r1, lsr #16
        26445c:	e5942000 	ldr	r2, [r4]
        264460:	e1a02822 	mov	r2, r2, lsr #16
        264464:	e0811002 	add	r1, r1, r2
        264468:	e5c41001 	strb	r1, [r4, #1]
        26446c:	e1a01441 	mov	r1, r1, asr #8
        264470:	e5c41000 	strb	r1, [r4]
        264474:	e5900004 	ldr	r0, [r0, #4]	; fField4
        264478:	e1a00820 	mov	r0, r0, lsr #16
        26447c:	e5941004 	ldr	r1, [r4, #4]	; fField4
        264480:	e1a01821 	mov	r1, r1, lsr #16
        264484:	e0800001 	add	r0, r0, r1
        264488:	e5c40005 	strb	r0, [r4, #5]
        26448c:	e1a00440 	mov	r0, r0, asr #8
        264490:	e5c40004 	strb	r0, [r4, #4]	; fField4
        264494:	e2160c0e 	ands	r0, r6, #3584	; 0xe00
        264498:	e58d0010 	str	r0, [sp, #16]	; fField16
        26449c:	0a000055 	beq	2645f8 <TView::JustifyBounds(TRect *)+0x49c>
        2644a0:	e3a09000 	mov	r9, #0	; 0x0
        2644a4:	e3160303 	tst	r6, #201326592	; 0xc000000
        2644a8:	0a00001b 	beq	26451c <TView::JustifyBounds(TRect *)+0x3c0>
        2644ac:	e2870010 	add	r0, r7, #16	; 0x10
        2644b0:	e5901006 	ldr	r1, [r0, #6]
        2644b4:	e1a01821 	mov	r1, r1, lsr #16
        2644b8:	e5900002 	ldr	r0, [r0, #2]	; fField2
        2644bc:	e1a00820 	mov	r0, r0, lsr #16
        2644c0:	e0410000 	sub	r0, r1, r0
        2644c4:	e1a0a800 	mov	sl, r0, lsl #16
        2644c8:	e1a0a84a 	mov	sl, sl, asr #16
        2644cc:	e3160301 	tst	r6, #67108864	; 0x4000000
        2644d0:	0a000007 	beq	2644f4 <TView::JustifyBounds(TRect *)+0x398>
        2644d4:	e5940002 	ldr	r0, [r4, #2]	; fField2
        2644d8:	e1a00840 	mov	r0, r0, asr #16
        2644dc:	e001009a 	mul	r1, sl, r0
        2644e0:	e3a00064 	mov	r0, #100	; 0x64
        2644e4:	eb653915 	bl	1bb2940 <$__rt_sdiv>
        2644e8:	e5c40003 	strb	r0, [r4, #3]
        2644ec:	e1a00440 	mov	r0, r0, asr #8
        2644f0:	e5c40002 	strb	r0, [r4, #2]	; fField2
        2644f4:	e3160302 	tst	r6, #134217728	; 0x8000000
        2644f8:	0a000007 	beq	26451c <TView::JustifyBounds(TRect *)+0x3c0>
        2644fc:	e5940006 	ldr	r0, [r4, #6]
        264500:	e1a00840 	mov	r0, r0, asr #16
        264504:	e001009a 	mul	r1, sl, r0
        264508:	e3a00064 	mov	r0, #100	; 0x64
        26450c:	eb65390b 	bl	1bb2940 <$__rt_sdiv>
        264510:	e5c40007 	strb	r0, [r4, #7]
        264514:	e1a00440 	mov	r0, r0, asr #8
        264518:	e5c40006 	strb	r0, [r4, #6]
        26451c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        264520:	e3300c02 	teq	r0, #512	; 0x200
        264524:	0a00000a 	beq	264554 <TView::JustifyBounds(TRect *)+0x3f8>
        264528:	e3300b01 	teq	r0, #1024	; 0x400
        26452c:	05970016 	ldreq	r0, [r7, #22]	; fField22
        264530:	01a00820 	moveq	r0, r0, lsr #16
        264534:	0a000017 	beq	264598 <TView::JustifyBounds(TRect *)+0x43c>
        264538:	e3300c06 	teq	r0, #1536	; 0x600
        26453c:	0a000019 	beq	2645a8 <TView::JustifyBounds(TRect *)+0x44c>
        264540:	e3300b02 	teq	r0, #2048	; 0x800
        264544:	05970012 	ldreq	r0, [r7, #18]	; fField18
        264548:	01a00820 	moveq	r0, r0, lsr #16
        26454c:	0a000011 	beq	264598 <TView::JustifyBounds(TRect *)+0x43c>
        264550:	ea000028 	b	2645f8 <TView::JustifyBounds(TRect *)+0x49c>
        264554:	e2870010 	add	r0, r7, #16	; 0x10
        264558:	e5901002 	ldr	r1, [r0, #2]	; fField2
        26455c:	e1a01841 	mov	r1, r1, asr #16
        264560:	e5900006 	ldr	r0, [r0, #6]
        264564:	e1a00820 	mov	r0, r0, lsr #16
        264568:	e0400001 	sub	r0, r0, r1
        26456c:	e1a00800 	mov	r0, r0, lsl #16
        264570:	e1a00840 	mov	r0, r0, asr #16
        264574:	e5943006 	ldr	r3, [r4, #6]
        264578:	e1a03823 	mov	r3, r3, lsr #16
        26457c:	e5942002 	ldr	r2, [r4, #2]	; fField2
        264580:	e1a02822 	mov	r2, r2, lsr #16
        264584:	e0432002 	sub	r2, r3, r2
        264588:	e1a02802 	mov	r2, r2, lsl #16
        26458c:	e0400842 	sub	r0, r0, r2, asr #16
        264590:	e0800fa0 	add	r0, r0, r0, lsr #31
        264594:	e08100c0 	add	r0, r1, r0, asr #1
        264598:	e5cd0007 	strb	r0, [sp, #7]
        26459c:	e1a00440 	mov	r0, r0, asr #8
        2645a0:	e5cd0006 	strb	r0, [sp, #6]
        2645a4:	ea000013 	b	2645f8 <TView::JustifyBounds(TRect *)+0x49c>
        2645a8:	e3a00000 	mov	r0, #0	; 0x0
        2645ac:	e5cd0007 	strb	r0, [sp, #7]
        2645b0:	e5cd0006 	strb	r0, [sp, #6]
        2645b4:	e2870010 	add	r0, r7, #16	; 0x10
        2645b8:	e5901002 	ldr	r1, [r0, #2]	; fField2
        2645bc:	e1a01821 	mov	r1, r1, lsr #16
        2645c0:	e5942002 	ldr	r2, [r4, #2]	; fField2
        2645c4:	e1a02822 	mov	r2, r2, lsr #16
        2645c8:	e0811002 	add	r1, r1, r2
        2645cc:	e5c41003 	strb	r1, [r4, #3]
        2645d0:	e1a01441 	mov	r1, r1, asr #8
        2645d4:	e5c41002 	strb	r1, [r4, #2]	; fField2
        2645d8:	e5900006 	ldr	r0, [r0, #6]
        2645dc:	e1a00820 	mov	r0, r0, lsr #16
        2645e0:	e5941006 	ldr	r1, [r4, #6]
        2645e4:	e1a01821 	mov	r1, r1, lsr #16
        2645e8:	e0800001 	add	r0, r0, r1
        2645ec:	e5c40007 	strb	r0, [r4, #7]
        2645f0:	e1a00440 	mov	r0, r0, asr #8
        2645f4:	e5c40006 	strb	r0, [r4, #6]
        2645f8:	e595101c 	ldr	r1, [r5, #28]	; fField28
        2645fc:	e59f0310 	ldr	r0, [pc, #310]	; 264914 <TView::JustifyBounds(TRect *)+0x7b8>
        264600:	e5900000 	ldr	r0, [r0]
        264604:	e1310000 	teq	r1, r0
        264608:	1a000044 	bne	264720 <TView::JustifyBounds(TRect *)+0x5c4>
        26460c:	e1350000 	teq	r5, r0
        264610:	0a000042 	beq	264720 <TView::JustifyBounds(TRect *)+0x5c4>
        264614:	e24dd004 	sub	sp, sp, #4	; 0x4
        264618:	e59f02f8 	ldr	r0, [pc, #2f8]	; 264918 <TView::JustifyBounds(TRect *)+0x7bc>	; fField2
        26461c:	e5900000 	ldr	r0, [r0]
        264620:	eb6576c9 	bl	1bc214c <$AllocateRefHandle(long)>
        264624:	e1a05000 	mov	r5, r0
        264628:	e59f02ec 	ldr	r0, [pc, #2ec]	; 26491c <TView::JustifyBounds(TRect *)+0x7c0>	; fField2
        26462c:	e5900000 	ldr	r0, [r0]
        264630:	e5901000 	ldr	r1, [r0]
        264634:	e5950000 	ldr	r0, [r5]
        264638:	eb657f08 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        26463c:	eb6576c2 	bl	1bc214c <$AllocateRefHandle(long)>
        264640:	e58d0000 	str	r0, [sp]
        264644:	e1a00005 	mov	r0, r5
        264648:	eb657adb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26464c:	e59f12cc 	ldr	r1, [pc, #2cc]	; 264920 <TView::JustifyBounds(TRect *)+0x7c4>	; fField2
        264650:	e1a0000d 	mov	r0, sp
        264654:	e3a02000 	mov	r2, #0	; 0x0
        264658:	eb657f02 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        26465c:	e3100003 	tst	r0, #3	; 0x3
        264660:	01a00140 	moveq	r0, r0, asr #2
        264664:	0a000000 	beq	26466c <TView::JustifyBounds(TRect *)+0x510>
        264668:	eb6576ab 	bl	1bc211c <$_RINTError(long)>
        26466c:	e5cd000f 	strb	r0, [sp, #15]
        264670:	e1a00440 	mov	r0, r0, asr #8
        264674:	e5cd000e 	strb	r0, [sp, #14]
        264678:	e59f12a4 	ldr	r1, [pc, #2a4]	; 264924 <TView::JustifyBounds(TRect *)+0x7c8>	; fField2
        26467c:	e1a0000d 	mov	r0, sp
        264680:	e3a02000 	mov	r2, #0	; 0x0
        264684:	eb657ef7 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        264688:	e3100003 	tst	r0, #3	; 0x3
        26468c:	01a00140 	moveq	r0, r0, asr #2
        264690:	0a000000 	beq	264698 <TView::JustifyBounds(TRect *)+0x53c>
        264694:	eb6576a0 	bl	1bc211c <$_RINTError(long)>
        264698:	e5cd000d 	strb	r0, [sp, #13]
        26469c:	e1a00440 	mov	r0, r0, asr #8
        2646a0:	e5cd000c 	strb	r0, [sp, #12]	; fField12
        2646a4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2646a8:	e58d0008 	str	r0, [sp, #8]	; fField8
        2646ac:	e59f1274 	ldr	r1, [pc, #274]	; 264928 <TView::JustifyBounds(TRect *)+0x7cc>
        2646b0:	e1a0000d 	mov	r0, sp
        2646b4:	e3a02000 	mov	r2, #0	; 0x0
        2646b8:	eb657eea 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        2646bc:	e3100003 	tst	r0, #3	; 0x3
        2646c0:	01a00140 	moveq	r0, r0, asr #2
        2646c4:	0a000000 	beq	2646cc <TView::JustifyBounds(TRect *)+0x570>
        2646c8:	eb657693 	bl	1bc211c <$_RINTError(long)>
        2646cc:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2646d0:	e0800001 	add	r0, r0, r1
        2646d4:	e5cd0013 	strb	r0, [sp, #19]
        2646d8:	e1a00440 	mov	r0, r0, asr #8
        2646dc:	e5cd0012 	strb	r0, [sp, #18]	; fField18
        2646e0:	e59f1244 	ldr	r1, [pc, #244]	; 26492c <TView::JustifyBounds(TRect *)+0x7d0>
        2646e4:	e1a0000d 	mov	r0, sp
        2646e8:	e3a02000 	mov	r2, #0	; 0x0
        2646ec:	eb657edd 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        2646f0:	e3100003 	tst	r0, #3	; 0x3
        2646f4:	01a00140 	moveq	r0, r0, asr #2
        2646f8:	0a000000 	beq	264700 <TView::JustifyBounds(TRect *)+0x5a4>
        2646fc:	eb657686 	bl	1bc211c <$_RINTError(long)>
        264700:	e59d100e 	ldr	r1, [sp, #14]
        264704:	e0800001 	add	r0, r0, r1
        264708:	e5cd0011 	strb	r0, [sp, #17]
        26470c:	e1a00440 	mov	r0, r0, asr #8
        264710:	e5cd0010 	strb	r0, [sp, #16]	; fField16
        264714:	e59d0000 	ldr	r0, [sp]
        264718:	eb657aa7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26471c:	e28dd004 	add	sp, sp, #4	; 0x4
        264720:	e316030f 	tst	r6, #1006632960	; 0x3c000000
        264724:	0a000035 	beq	264800 <TView::JustifyBounds(TRect *)+0x6a4>
        264728:	e3390000 	teq	r9, #0	; 0x0
        26472c:	0a000018 	beq	264794 <TView::JustifyBounds(TRect *)+0x638>
        264730:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        264734:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        264738:	e0400001 	sub	r0, r0, r1
        26473c:	e1a05800 	mov	r5, r0, lsl #16
        264740:	e1a05845 	mov	r5, r5, asr #16
        264744:	e3160301 	tst	r6, #67108864	; 0x4000000
        264748:	0a000007 	beq	26476c <TView::JustifyBounds(TRect *)+0x610>
        26474c:	e5940002 	ldr	r0, [r4, #2]	; fField2
        264750:	e1a00840 	mov	r0, r0, asr #16
        264754:	e0010095 	mul	r1, r5, r0
        264758:	e3a00064 	mov	r0, #100	; 0x64
        26475c:	eb653877 	bl	1bb2940 <$__rt_sdiv>
        264760:	e5c40003 	strb	r0, [r4, #3]
        264764:	e1a00440 	mov	r0, r0, asr #8
        264768:	e5c40002 	strb	r0, [r4, #2]	; fField2
        26476c:	e3160302 	tst	r6, #134217728	; 0x8000000
        264770:	0a000007 	beq	264794 <TView::JustifyBounds(TRect *)+0x638>
        264774:	e5940006 	ldr	r0, [r4, #6]
        264778:	e1a00840 	mov	r0, r0, asr #16
        26477c:	e0010095 	mul	r1, r5, r0
        264780:	e3a00064 	mov	r0, #100	; 0x64
        264784:	eb65386d 	bl	1bb2940 <$__rt_sdiv>
        264788:	e5c40007 	strb	r0, [r4, #7]
        26478c:	e1a00440 	mov	r0, r0, asr #8
        264790:	e5c40006 	strb	r0, [r4, #6]
        264794:	e3380000 	teq	r8, #0	; 0x0
        264798:	0a000035 	beq	264874 <TView::JustifyBounds(TRect *)+0x718>
        26479c:	e59d100e 	ldr	r1, [sp, #14]
        2647a0:	e59d000a 	ldr	r0, [sp, #10]
        2647a4:	e0410000 	sub	r0, r1, r0
        2647a8:	e1a05800 	mov	r5, r0, lsl #16
        2647ac:	e1a05845 	mov	r5, r5, asr #16
        2647b0:	e3160201 	tst	r6, #268435456	; 0x10000000
        2647b4:	0a000007 	beq	2647d8 <TView::JustifyBounds(TRect *)+0x67c>
        2647b8:	e5940000 	ldr	r0, [r4]
        2647bc:	e1a00840 	mov	r0, r0, asr #16
        2647c0:	e0010590 	mul	r1, r0, r5
        2647c4:	e3a00064 	mov	r0, #100	; 0x64
        2647c8:	eb65385c 	bl	1bb2940 <$__rt_sdiv>
        2647cc:	e5c40001 	strb	r0, [r4, #1]
        2647d0:	e1a00440 	mov	r0, r0, asr #8
        2647d4:	e5c40000 	strb	r0, [r4]
        2647d8:	e3160202 	tst	r6, #536870912	; 0x20000000
        2647dc:	0a000007 	beq	264800 <TView::JustifyBounds(TRect *)+0x6a4>
        2647e0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2647e4:	e1a00840 	mov	r0, r0, asr #16
        2647e8:	e0010095 	mul	r1, r5, r0
        2647ec:	e3a00064 	mov	r0, #100	; 0x64
        2647f0:	eb653852 	bl	1bb2940 <$__rt_sdiv>
        2647f4:	e5c40005 	strb	r0, [r4, #5]
        2647f8:	e1a00440 	mov	r0, r0, asr #8
        2647fc:	e5c40004 	strb	r0, [r4, #4]	; fField4
        264800:	e3380000 	teq	r8, #0	; 0x0
        264804:	0a00001a 	beq	264874 <TView::JustifyBounds(TRect *)+0x718>
        264808:	e20600c0 	and	r0, r6, #192	; 0xc0
        26480c:	e3300040 	teq	r0, #64	; 0x40
        264810:	0a000046 	beq	264930 <TView::JustifyBounds(TRect *)+0x7d4>
        264814:	e3300080 	teq	r0, #128	; 0x80
        264818:	059d100e 	ldreq	r1, [sp, #14]
        26481c:	059d000a 	ldreq	r0, [sp, #10]
        264820:	00410000 	subeq	r0, r1, r0
        264824:	0a00004f 	beq	264968 <TView::JustifyBounds(TRect *)+0x80c>
        264828:	e33000c0 	teq	r0, #192	; 0xc0
        26482c:	1a000010 	bne	264874 <TView::JustifyBounds(TRect *)+0x718>
        264830:	e3a00000 	mov	r0, #0	; 0x0
        264834:	e5cd0005 	strb	r0, [sp, #5]
        264838:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        26483c:	e5941000 	ldr	r1, [r4]
        264840:	e1a01821 	mov	r1, r1, lsr #16
        264844:	e59d000a 	ldr	r0, [sp, #10]
        264848:	e0810000 	add	r0, r1, r0
        26484c:	e5c40001 	strb	r0, [r4, #1]
        264850:	e1a00440 	mov	r0, r0, asr #8
        264854:	e5c40000 	strb	r0, [r4]
        264858:	e5941004 	ldr	r1, [r4, #4]	; fField4
        26485c:	e1a01821 	mov	r1, r1, lsr #16
        264860:	e59d000e 	ldr	r0, [sp, #14]
        264864:	e0810000 	add	r0, r1, r0
        264868:	e5c40005 	strb	r0, [r4, #5]
        26486c:	e1a00440 	mov	r0, r0, asr #8
        264870:	e5c40004 	strb	r0, [r4, #4]	; fField4
        264874:	e3390000 	teq	r9, #0	; 0x0
        264878:	0a00001a 	beq	2648e8 <TView::JustifyBounds(TRect *)+0x78c>
        26487c:	e2060030 	and	r0, r6, #48	; 0x30
        264880:	e3300010 	teq	r0, #16	; 0x10
        264884:	0a00003d 	beq	264980 <TView::JustifyBounds(TRect *)+0x824>
        264888:	e3300020 	teq	r0, #32	; 0x20
        26488c:	059d000c 	ldreq	r0, [sp, #12]	; fField12
        264890:	059d1008 	ldreq	r1, [sp, #8]	; fField8
        264894:	00400001 	subeq	r0, r0, r1
        264898:	0a000046 	beq	2649b8 <TView::JustifyBounds(TRect *)+0x85c>
        26489c:	e3300030 	teq	r0, #48	; 0x30
        2648a0:	1a000010 	bne	2648e8 <TView::JustifyBounds(TRect *)+0x78c>
        2648a4:	e3a00000 	mov	r0, #0	; 0x0
        2648a8:	e5cd0007 	strb	r0, [sp, #7]
        2648ac:	e5cd0006 	strb	r0, [sp, #6]
        2648b0:	e5941002 	ldr	r1, [r4, #2]	; fField2
        2648b4:	e1a01821 	mov	r1, r1, lsr #16
        2648b8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2648bc:	e0810000 	add	r0, r1, r0
        2648c0:	e5c40003 	strb	r0, [r4, #3]
        2648c4:	e1a00440 	mov	r0, r0, asr #8
        2648c8:	e5c40002 	strb	r0, [r4, #2]	; fField2
        2648cc:	e5940006 	ldr	r0, [r4, #6]
        2648d0:	e1a00820 	mov	r0, r0, lsr #16
        2648d4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2648d8:	e0800001 	add	r0, r0, r1
        2648dc:	e5c40007 	strb	r0, [r4, #7]
        2648e0:	e1a00440 	mov	r0, r0, asr #8
        2648e4:	e5c40006 	strb	r0, [r4, #6]
        2648e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2648ec:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2648f0:	e58d0000 	str	r0, [sp]
        2648f4:	e1a00004 	mov	r0, r4
        2648f8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        2648fc:	e1a01841 	mov	r1, r1, asr #16
        264900:	e59d2000 	ldr	r2, [sp]
        264904:	e1a02842 	mov	r2, r2, asr #16
        264908:	eb63b3f6 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        26490c:	e28dd014 	add	sp, sp, #20	; 0x14
        264910:	eafffe1a 	b	264180 <TView::JustifyBounds(TRect *)+0x24>
        264914:	0c101934 	ldceq	9, cr1, [r0], -#208
        264918:	0c10180c 	ldceq	8, cr1, [r0], -#48
        26491c:	006829d0 	ldreqd	r2, [r8], -#144
        264920:	00681e88 	rsbeq	r1, r8, r8, lsl #29
        264924:	00681e90 	streqb	r1, [r8], -#224
        264928:	00681eb0 	streqh	r1, [r8], -#224
        26492c:	00681e98 	streqb	r1, [r8], -#232
        264930:	e59d100e 	ldr	r1, [sp, #14]
        264934:	e59d000a 	ldr	r0, [sp, #10]
        264938:	e0410000 	sub	r0, r1, r0
        26493c:	e1a00800 	mov	r0, r0, lsl #16
        264940:	e1a00840 	mov	r0, r0, asr #16
        264944:	e5942004 	ldr	r2, [r4, #4]	; fField4
        264948:	e1a02822 	mov	r2, r2, lsr #16
        26494c:	e5941000 	ldr	r1, [r4]
        264950:	e1a01821 	mov	r1, r1, lsr #16
        264954:	e0421001 	sub	r1, r2, r1
        264958:	e1a01801 	mov	r1, r1, lsl #16
        26495c:	e0400841 	sub	r0, r0, r1, asr #16
        264960:	e0800fa0 	add	r0, r0, r0, lsr #31
        264964:	e1a000c0 	mov	r0, r0, asr #1
        264968:	e59d1006 	ldr	r1, [sp, #6]
        26496c:	e0800001 	add	r0, r0, r1
        264970:	e5cd0005 	strb	r0, [sp, #5]
        264974:	e1a00440 	mov	r0, r0, asr #8
        264978:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        26497c:	eaffffbc 	b	264874 <TView::JustifyBounds(TRect *)+0x718>
        264980:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        264984:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        264988:	e0410000 	sub	r0, r1, r0
        26498c:	e1a00800 	mov	r0, r0, lsl #16
        264990:	e1a00840 	mov	r0, r0, asr #16
        264994:	e5941006 	ldr	r1, [r4, #6]
        264998:	e1a01821 	mov	r1, r1, lsr #16
        26499c:	e5942002 	ldr	r2, [r4, #2]	; fField2
        2649a0:	e1a02822 	mov	r2, r2, lsr #16
        2649a4:	e0411002 	sub	r1, r1, r2
        2649a8:	e1a01801 	mov	r1, r1, lsl #16
        2649ac:	e0400841 	sub	r0, r0, r1, asr #16
        2649b0:	e0800fa0 	add	r0, r0, r0, lsr #31
        2649b4:	e1a000c0 	mov	r0, r0, asr #1
        2649b8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2649bc:	e0800001 	add	r0, r0, r1
        2649c0:	e5cd0007 	strb	r0, [sp, #7]
        2649c4:	e1a00440 	mov	r0, r0, asr #8
        2649c8:	e5cd0006 	strb	r0, [sp, #6]
        2649cc:	eaffffc5 	b	2648e8 <TView::JustifyBounds(TRect *)+0x78c>
    */
}

/**
 * Symbol: TView::DejustifyBounds(TRect *)
 * Address: 00264a54
 */
TView::DejustifyBounds(TRect *) {
    /*
        264a54:	e1a0c00d 	mov	ip, sp
        264a58:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        264a5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        264a60:	e1a05000 	mov	r5, r0
        264a64:	e1a04001 	mov	r4, r1
        264a68:	e24dd008 	sub	sp, sp, #8	; 0x8
        264a6c:	e2800010 	add	r0, r0, #16	; 0x10
        264a70:	e8901008 	ldmia	r0, {r3, ip}
        264a74:	e88d1008 	stmia	sp, {r3, ip}
        264a78:	e89d1008 	ldmia	sp, {r3, ip}
        264a7c:	e8841008 	stmia	r4, {r3, ip}
        264a80:	e595101c 	ldr	r1, [r5, #28]	; fField28
        264a84:	e1a07001 	mov	r7, r1
        264a88:	e1350001 	teq	r5, r1
        264a8c:	1a000000 	bne	264a94 <TView::DejustifyBounds(TRect *)+0x40>
        264a90:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        264a94:	e24dd00c 	sub	sp, sp, #12	; 0xc
        264a98:	e5950028 	ldr	r0, [r5, #40]	; fField40
        264a9c:	e3c06103 	bic	r6, r0, #-1073741824	; 0xc0000000
        264aa0:	e59f0138 	ldr	r0, [pc, #138]	; 264be0 <TView::DejustifyBounds(TRect *)+0x18c>
        264aa4:	e5900000 	ldr	r0, [r0]
        264aa8:	e1310000 	teq	r1, r0
        264aac:	1a000052 	bne	264bfc <TView::DejustifyBounds(TRect *)+0x1a8>
        264ab0:	e1350000 	teq	r5, r0
        264ab4:	0a000050 	beq	264bfc <TView::DejustifyBounds(TRect *)+0x1a8>
        264ab8:	e24dd004 	sub	sp, sp, #4	; 0x4
        264abc:	e59f0120 	ldr	r0, [pc, #120]	; 264be4 <TView::DejustifyBounds(TRect *)+0x190>
        264ac0:	e5900000 	ldr	r0, [r0]
        264ac4:	eb6575a0 	bl	1bc214c <$AllocateRefHandle(long)>
        264ac8:	e1a08000 	mov	r8, r0
        264acc:	e59f0114 	ldr	r0, [pc, #114]	; 264be8 <TView::DejustifyBounds(TRect *)+0x194>
        264ad0:	e5900000 	ldr	r0, [r0]
        264ad4:	e5901000 	ldr	r1, [r0]
        264ad8:	e5980000 	ldr	r0, [r8]
        264adc:	eb657ddf 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        264ae0:	eb657599 	bl	1bc214c <$AllocateRefHandle(long)>
        264ae4:	e58d0000 	str	r0, [sp]
        264ae8:	e1a00008 	mov	r0, r8
        264aec:	eb6579b2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        264af0:	e59f10f4 	ldr	r1, [pc, #f4]	; 264bec <TView::DejustifyBounds(TRect *)+0x198>
        264af4:	e1a0000d 	mov	r0, sp
        264af8:	e3a02000 	mov	r2, #0	; 0x0
        264afc:	eb657dd9 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        264b00:	e3100003 	tst	r0, #3	; 0x3
        264b04:	01a00140 	moveq	r0, r0, asr #2
        264b08:	0a000000 	beq	264b10 <TView::DejustifyBounds(TRect *)+0xbc>
        264b0c:	eb657582 	bl	1bc211c <$_RINTError(long)>
        264b10:	e5cd000b 	strb	r0, [sp, #11]
        264b14:	e1a00440 	mov	r0, r0, asr #8
        264b18:	e5cd000a 	strb	r0, [sp, #10]
        264b1c:	e59f10cc 	ldr	r1, [pc, #cc]	; 264bf0 <TView::DejustifyBounds(TRect *)+0x19c>
        264b20:	e1a0000d 	mov	r0, sp
        264b24:	e3a02000 	mov	r2, #0	; 0x0
        264b28:	eb657dce 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        264b2c:	e3100003 	tst	r0, #3	; 0x3
        264b30:	01a00140 	moveq	r0, r0, asr #2
        264b34:	0a000000 	beq	264b3c <TView::DejustifyBounds(TRect *)+0xe8>
        264b38:	eb657577 	bl	1bc211c <$_RINTError(long)>
        264b3c:	e5cd0009 	strb	r0, [sp, #9]
        264b40:	e1a00440 	mov	r0, r0, asr #8
        264b44:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        264b48:	e59f10a4 	ldr	r1, [pc, #a4]	; 264bf4 <TView::DejustifyBounds(TRect *)+0x1a0>
        264b4c:	e1a0000d 	mov	r0, sp
        264b50:	e3a02000 	mov	r2, #0	; 0x0
        264b54:	eb657dc3 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        264b58:	e3100003 	tst	r0, #3	; 0x3
        264b5c:	01a00140 	moveq	r0, r0, asr #2
        264b60:	0a000000 	beq	264b68 <TView::DejustifyBounds(TRect *)+0x114>
        264b64:	eb65756c 	bl	1bc211c <$_RINTError(long)>
        264b68:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        264b6c:	e0800001 	add	r0, r0, r1
        264b70:	e5cd000f 	strb	r0, [sp, #15]
        264b74:	e1a00440 	mov	r0, r0, asr #8
        264b78:	e5cd000e 	strb	r0, [sp, #14]
        264b7c:	e59f1074 	ldr	r1, [pc, #74]	; 264bf8 <TView::DejustifyBounds(TRect *)+0x1a4>
        264b80:	e1a0000d 	mov	r0, sp
        264b84:	e3a02000 	mov	r2, #0	; 0x0
        264b88:	eb657db6 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        264b8c:	e3100003 	tst	r0, #3	; 0x3
        264b90:	01a00140 	moveq	r0, r0, asr #2
        264b94:	0a000000 	beq	264b9c <TView::DejustifyBounds(TRect *)+0x148>
        264b98:	eb65755f 	bl	1bc211c <$_RINTError(long)>
        264b9c:	e59d100a 	ldr	r1, [sp, #10]
        264ba0:	e0800001 	add	r0, r0, r1
        264ba4:	e5cd000d 	strb	r0, [sp, #13]
        264ba8:	e1a00440 	mov	r0, r0, asr #8
        264bac:	e5cd000c 	strb	r0, [sp, #12]	; fField12
        264bb0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        264bb4:	e5cd0007 	strb	r0, [sp, #7]
        264bb8:	e1a00440 	mov	r0, r0, asr #8
        264bbc:	e5cd0006 	strb	r0, [sp, #6]
        264bc0:	e59d000a 	ldr	r0, [sp, #10]
        264bc4:	e5cd0005 	strb	r0, [sp, #5]
        264bc8:	e1a00440 	mov	r0, r0, asr #8
        264bcc:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        264bd0:	e59d0000 	ldr	r0, [sp]
        264bd4:	eb657978 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        264bd8:	e28dd004 	add	sp, sp, #4	; 0x4
        264bdc:	ea00000c 	b	264c14 <TView::DejustifyBounds(TRect *)+0x1c0>
        264be0:	0c101934 	ldceq	9, cr1, [r0], -#208
        264be4:	0c10180c 	ldceq	8, cr1, [r0], -#48
        264be8:	006829d0 	ldreqd	r2, [r8], -#144
        264bec:	00681e88 	rsbeq	r1, r8, r8, lsl #29
        264bf0:	00681e90 	streqb	r1, [r8], -#224
        264bf4:	00681eb0 	streqh	r1, [r8], -#224
        264bf8:	00681e98 	streqb	r1, [r8], -#232
        264bfc:	e28d2004 	add	r2, sp, #4	; 0x4
        264c00:	e2870010 	add	r0, r7, #16	; 0x10
        264c04:	e8901008 	ldmia	r0, {r3, ip}
        264c08:	e8821008 	stmia	r2, {r3, ip}
        264c0c:	e5900000 	ldr	r0, [r0]
        264c10:	e58d0000 	str	r0, [sp]
        264c14:	e3160c01 	tst	r6, #256	; 0x100
        264c18:	1a000010 	bne	264c60 <TView::DejustifyBounds(TRect *)+0x20c>
        264c1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        264c20:	e1a0100d 	mov	r1, sp
        264c24:	e1a00007 	mov	r0, r7
        264c28:	eb659644 	bl	1bca540 <TView::$GetChildOrigin(TPoint *)>
        264c2c:	e59d0006 	ldr	r0, [sp, #6]
        264c30:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        264c34:	e0400001 	sub	r0, r0, r1
        264c38:	e5cd0005 	strb	r0, [sp, #5]
        264c3c:	e1a00440 	mov	r0, r0, asr #8
        264c40:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        264c44:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        264c48:	e59d1000 	ldr	r1, [sp]
        264c4c:	e0400001 	sub	r0, r0, r1
        264c50:	e5cd0007 	strb	r0, [sp, #7]
        264c54:	e1a00440 	mov	r0, r0, asr #8
        264c58:	e5cd0006 	strb	r0, [sp, #6]
        264c5c:	e28dd004 	add	sp, sp, #4	; 0x4
        264c60:	e24dd004 	sub	sp, sp, #4	; 0x4
        264c64:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        264c68:	e2600000 	rsb	r0, r0, #0	; 0x0
        264c6c:	e1a00800 	mov	r0, r0, lsl #16
        264c70:	e1a00840 	mov	r0, r0, asr #16
        264c74:	e59d1006 	ldr	r1, [sp, #6]
        264c78:	e2611000 	rsb	r1, r1, #0	; 0x0
        264c7c:	e1a01801 	mov	r1, r1, lsl #16
        264c80:	e1a01841 	mov	r1, r1, asr #16
        264c84:	e24dd004 	sub	sp, sp, #4	; 0x4
        264c88:	e5cd0003 	strb	r0, [sp, #3]
        264c8c:	e1a00440 	mov	r0, r0, asr #8
        264c90:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        264c94:	e5cd1001 	strb	r1, [sp, #1]
        264c98:	e1a00441 	mov	r0, r1, asr #8
        264c9c:	e5cd0000 	strb	r0, [sp]
        264ca0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        264ca4:	e58d0000 	str	r0, [sp]
        264ca8:	e1a00004 	mov	r0, r4
        264cac:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        264cb0:	e1a01841 	mov	r1, r1, asr #16
        264cb4:	e59d2000 	ldr	r2, [sp]
        264cb8:	e1a02842 	mov	r2, r2, asr #16
        264cbc:	eb63b309 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        264cc0:	e28dd004 	add	sp, sp, #4	; 0x4
        264cc4:	e3a09001 	mov	r9, #1	; 0x1
        264cc8:	e3a08001 	mov	r8, #1	; 0x1
        264ccc:	e3160c7e 	tst	r6, #32256	; 0x7e00
        264cd0:	0a0000cc 	beq	265008 <TView::DejustifyBounds(TRect *)+0x5b4>
        264cd4:	e1a01005 	mov	r1, r5
        264cd8:	e5970020 	ldr	r0, [r7, #32]	; fField32
        264cdc:	eb660dd4 	bl	1be8434 <CList::$GetIdentityIndex(void *)>
        264ce0:	e3300000 	teq	r0, #0	; 0x0
        264ce4:	0a0000c7 	beq	265008 <TView::DejustifyBounds(TRect *)+0x5b4>
        264ce8:	e2401001 	sub	r1, r0, #1	; 0x1
        264cec:	e5b72020 	ldr	r2, [r7, #32]!	; fField32
        264cf0:	e1a00002 	mov	r0, r2
        264cf4:	eb660592 	bl	1be6344 <CList::$At(long)>
        264cf8:	e1a05000 	mov	r5, r0
        264cfc:	e2160a07 	ands	r0, r6, #28672	; 0x7000
        264d00:	0a000060 	beq	264e88 <TView::DejustifyBounds(TRect *)+0x434>
        264d04:	e3a08000 	mov	r8, #0	; 0x0
        264d08:	e3300a01 	teq	r0, #4096	; 0x1000
        264d0c:	0a00000a 	beq	264d3c <TView::DejustifyBounds(TRect *)+0x2e8>
        264d10:	e3300a02 	teq	r0, #8192	; 0x2000
        264d14:	0a00001a 	beq	264d84 <TView::DejustifyBounds(TRect *)+0x330>
        264d18:	e3300a03 	teq	r0, #12288	; 0x3000
        264d1c:	0a000026 	beq	264dbc <TView::DejustifyBounds(TRect *)+0x368>
        264d20:	e3300901 	teq	r0, #16384	; 0x4000
        264d24:	1a000035 	bne	264e00 <TView::DejustifyBounds(TRect *)+0x3ac>
        264d28:	e5951010 	ldr	r1, [r5, #16]	; fField16
        264d2c:	e1a01821 	mov	r1, r1, lsr #16
        264d30:	e59d000e 	ldr	r0, [sp, #14]
        264d34:	e0400001 	sub	r0, r0, r1
        264d38:	ea000015 	b	264d94 <TView::DejustifyBounds(TRect *)+0x340>
        264d3c:	e2850010 	add	r0, r5, #16	; 0x10
        264d40:	e5901000 	ldr	r1, [r0]
        264d44:	e59d200c 	ldr	r2, [sp, #12]	; fField12
        264d48:	e1a02842 	mov	r2, r2, asr #16
        264d4c:	e0421841 	sub	r1, r2, r1, asr #16
        264d50:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        264d54:	e0811842 	add	r1, r1, r2, asr #16
        264d58:	e5900004 	ldr	r0, [r0, #4]	; fField4
        264d5c:	e0410840 	sub	r0, r1, r0, asr #16
        264d60:	e0800fa0 	add	r0, r0, r0, lsr #31
        264d64:	e1a000c0 	mov	r0, r0, asr #1
        264d68:	e5c40001 	strb	r0, [r4, #1]
        264d6c:	e1a00440 	mov	r0, r0, asr #8
        264d70:	e5c40000 	strb	r0, [r4]
        264d74:	e59d1012 	ldr	r1, [sp, #18]	; fField18
        264d78:	e59d000e 	ldr	r0, [sp, #14]
        264d7c:	e0410000 	sub	r0, r1, r0
        264d80:	ea000009 	b	264dac <TView::DejustifyBounds(TRect *)+0x358>
        264d84:	e5950014 	ldr	r0, [r5, #20]	; fField20
        264d88:	e1a00820 	mov	r0, r0, lsr #16
        264d8c:	e59d100e 	ldr	r1, [sp, #14]
        264d90:	e0410000 	sub	r0, r1, r0
        264d94:	e5c40001 	strb	r0, [r4, #1]
        264d98:	e1a00440 	mov	r0, r0, asr #8
        264d9c:	e5c40000 	strb	r0, [r4]
        264da0:	e59d0012 	ldr	r0, [sp, #18]	; fField18
        264da4:	e59d100e 	ldr	r1, [sp, #14]
        264da8:	e0400001 	sub	r0, r0, r1
        264dac:	e5941000 	ldr	r1, [r4]
        264db0:	e1a01821 	mov	r1, r1, lsr #16
        264db4:	e0800001 	add	r0, r0, r1
        264db8:	ea00000d 	b	264df4 <TView::DejustifyBounds(TRect *)+0x3a0>
        264dbc:	e2850010 	add	r0, r5, #16	; 0x10
        264dc0:	e5901000 	ldr	r1, [r0]
        264dc4:	e1a01821 	mov	r1, r1, lsr #16
        264dc8:	e5942000 	ldr	r2, [r4]
        264dcc:	e1a02822 	mov	r2, r2, lsr #16
        264dd0:	e0421001 	sub	r1, r2, r1
        264dd4:	e5c41001 	strb	r1, [r4, #1]
        264dd8:	e1a01441 	mov	r1, r1, asr #8
        264ddc:	e5c41000 	strb	r1, [r4]
        264de0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        264de4:	e1a00820 	mov	r0, r0, lsr #16
        264de8:	e5941004 	ldr	r1, [r4, #4]	; fField4
        264dec:	e1a01821 	mov	r1, r1, lsr #16
        264df0:	e0410000 	sub	r0, r1, r0
        264df4:	e5c40005 	strb	r0, [r4, #5]
        264df8:	e1a00440 	mov	r0, r0, asr #8
        264dfc:	e5c40004 	strb	r0, [r4, #4]	; fField4
        264e00:	e3160203 	tst	r6, #805306368	; 0x30000000
        264e04:	0a00001f 	beq	264e88 <TView::DejustifyBounds(TRect *)+0x434>
        264e08:	e2850010 	add	r0, r5, #16	; 0x10
        264e0c:	e5901004 	ldr	r1, [r0, #4]	; fField4
        264e10:	e1a01821 	mov	r1, r1, lsr #16
        264e14:	e5900000 	ldr	r0, [r0]
        264e18:	e1a00820 	mov	r0, r0, lsr #16
        264e1c:	e0410000 	sub	r0, r1, r0
        264e20:	e1a07800 	mov	r7, r0, lsl #16
        264e24:	e1a07847 	mov	r7, r7, asr #16
        264e28:	e3160201 	tst	r6, #268435456	; 0x10000000
        264e2c:	0a000009 	beq	264e58 <TView::DejustifyBounds(TRect *)+0x404>
        264e30:	e5940000 	ldr	r0, [r4]
        264e34:	e1a00840 	mov	r0, r0, asr #16
        264e38:	e0801180 	add	r1, r0, r0, lsl #3
        264e3c:	e0811200 	add	r1, r1, r0, lsl #4
        264e40:	e1a01101 	mov	r1, r1, lsl #2
        264e44:	e1a00007 	mov	r0, r7
        264e48:	eb6536bc 	bl	1bb2940 <$__rt_sdiv>
        264e4c:	e5c40001 	strb	r0, [r4, #1]
        264e50:	e1a00440 	mov	r0, r0, asr #8
        264e54:	e5c40000 	strb	r0, [r4]
        264e58:	e3160202 	tst	r6, #536870912	; 0x20000000
        264e5c:	0a000009 	beq	264e88 <TView::DejustifyBounds(TRect *)+0x434>
        264e60:	e5940004 	ldr	r0, [r4, #4]	; fField4
        264e64:	e1a00840 	mov	r0, r0, asr #16
        264e68:	e0801180 	add	r1, r0, r0, lsl #3
        264e6c:	e0811200 	add	r1, r1, r0, lsl #4
        264e70:	e1a01101 	mov	r1, r1, lsl #2
        264e74:	e1a00007 	mov	r0, r7
        264e78:	eb6536b0 	bl	1bb2940 <$__rt_sdiv>
        264e7c:	e5c40005 	strb	r0, [r4, #5]
        264e80:	e1a00440 	mov	r0, r0, asr #8
        264e84:	e5c40004 	strb	r0, [r4, #4]	; fField4
        264e88:	e2160c0e 	ands	r0, r6, #3584	; 0xe00
        264e8c:	0a00005d 	beq	265008 <TView::DejustifyBounds(TRect *)+0x5b4>
        264e90:	e3a09000 	mov	r9, #0	; 0x0
        264e94:	e3300c02 	teq	r0, #512	; 0x200
        264e98:	0a000012 	beq	264ee8 <TView::DejustifyBounds(TRect *)+0x494>
        264e9c:	e3300b01 	teq	r0, #1024	; 0x400
        264ea0:	05951016 	ldreq	r1, [r5, #22]	; fField22
        264ea4:	01a01821 	moveq	r1, r1, lsr #16
        264ea8:	0a000005 	beq	264ec4 <TView::DejustifyBounds(TRect *)+0x470>
        264eac:	e3300c06 	teq	r0, #1536	; 0x600
        264eb0:	0a000021 	beq	264f3c <TView::DejustifyBounds(TRect *)+0x4e8>
        264eb4:	e3300b02 	teq	r0, #2048	; 0x800
        264eb8:	1a000030 	bne	264f80 <TView::DejustifyBounds(TRect *)+0x52c>
        264ebc:	e5951012 	ldr	r1, [r5, #18]	; fField18
        264ec0:	e1a01821 	mov	r1, r1, lsr #16
        264ec4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        264ec8:	e0400001 	sub	r0, r0, r1
        264ecc:	e5c40003 	strb	r0, [r4, #3]
        264ed0:	e1a00440 	mov	r0, r0, asr #8
        264ed4:	e5c40002 	strb	r0, [r4, #2]	; fField2
        264ed8:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        264edc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        264ee0:	e0410000 	sub	r0, r1, r0
        264ee4:	ea000010 	b	264f2c <TView::DejustifyBounds(TRect *)+0x4d8>
        264ee8:	e2850010 	add	r0, r5, #16	; 0x10
        264eec:	e5902002 	ldr	r2, [r0, #2]	; fField2
        264ef0:	e59d100e 	ldr	r1, [sp, #14]
        264ef4:	e1a01841 	mov	r1, r1, asr #16
        264ef8:	e0412842 	sub	r2, r1, r2, asr #16
        264efc:	e59d1012 	ldr	r1, [sp, #18]	; fField18
        264f00:	e0821841 	add	r1, r2, r1, asr #16
        264f04:	e5900006 	ldr	r0, [r0, #6]
        264f08:	e0410840 	sub	r0, r1, r0, asr #16
        264f0c:	e0800fa0 	add	r0, r0, r0, lsr #31
        264f10:	e1a000c0 	mov	r0, r0, asr #1
        264f14:	e5c40003 	strb	r0, [r4, #3]
        264f18:	e1a00440 	mov	r0, r0, asr #8
        264f1c:	e5c40002 	strb	r0, [r4, #2]	; fField2
        264f20:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        264f24:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        264f28:	e0400001 	sub	r0, r0, r1
        264f2c:	e5941002 	ldr	r1, [r4, #2]	; fField2
        264f30:	e1a01821 	mov	r1, r1, lsr #16
        264f34:	e0800001 	add	r0, r0, r1
        264f38:	ea00000d 	b	264f74 <TView::DejustifyBounds(TRect *)+0x520>
        264f3c:	e2850010 	add	r0, r5, #16	; 0x10
        264f40:	e5901002 	ldr	r1, [r0, #2]	; fField2
        264f44:	e1a01821 	mov	r1, r1, lsr #16
        264f48:	e5942002 	ldr	r2, [r4, #2]	; fField2
        264f4c:	e1a02822 	mov	r2, r2, lsr #16
        264f50:	e0421001 	sub	r1, r2, r1
        264f54:	e5c41003 	strb	r1, [r4, #3]
        264f58:	e1a01441 	mov	r1, r1, asr #8
        264f5c:	e5c41002 	strb	r1, [r4, #2]	; fField2
        264f60:	e5900006 	ldr	r0, [r0, #6]
        264f64:	e1a00820 	mov	r0, r0, lsr #16
        264f68:	e5941006 	ldr	r1, [r4, #6]
        264f6c:	e1a01821 	mov	r1, r1, lsr #16
        264f70:	e0410000 	sub	r0, r1, r0
        264f74:	e5c40007 	strb	r0, [r4, #7]
        264f78:	e1a00440 	mov	r0, r0, asr #8
        264f7c:	e5c40006 	strb	r0, [r4, #6]
        264f80:	e3160303 	tst	r6, #201326592	; 0xc000000
        264f84:	0a00001f 	beq	265008 <TView::DejustifyBounds(TRect *)+0x5b4>
        264f88:	e2850010 	add	r0, r5, #16	; 0x10
        264f8c:	e5901006 	ldr	r1, [r0, #6]
        264f90:	e1a01821 	mov	r1, r1, lsr #16
        264f94:	e5900002 	ldr	r0, [r0, #2]	; fField2
        264f98:	e1a00820 	mov	r0, r0, lsr #16
        264f9c:	e0410000 	sub	r0, r1, r0
        264fa0:	e1a05800 	mov	r5, r0, lsl #16
        264fa4:	e1a05845 	mov	r5, r5, asr #16
        264fa8:	e3160301 	tst	r6, #67108864	; 0x4000000
        264fac:	0a000009 	beq	264fd8 <TView::DejustifyBounds(TRect *)+0x584>
        264fb0:	e5940002 	ldr	r0, [r4, #2]	; fField2
        264fb4:	e1a00840 	mov	r0, r0, asr #16
        264fb8:	e0801180 	add	r1, r0, r0, lsl #3
        264fbc:	e0811200 	add	r1, r1, r0, lsl #4
        264fc0:	e1a01101 	mov	r1, r1, lsl #2
        264fc4:	e1a00005 	mov	r0, r5
        264fc8:	eb65365c 	bl	1bb2940 <$__rt_sdiv>
        264fcc:	e5c40003 	strb	r0, [r4, #3]
        264fd0:	e1a00440 	mov	r0, r0, asr #8
        264fd4:	e5c40002 	strb	r0, [r4, #2]	; fField2
        264fd8:	e3160302 	tst	r6, #134217728	; 0x8000000
        264fdc:	0a000009 	beq	265008 <TView::DejustifyBounds(TRect *)+0x5b4>
        264fe0:	e5940006 	ldr	r0, [r4, #6]
        264fe4:	e1a00840 	mov	r0, r0, asr #16
        264fe8:	e0801180 	add	r1, r0, r0, lsl #3
        264fec:	e0811200 	add	r1, r1, r0, lsl #4
        264ff0:	e1a01101 	mov	r1, r1, lsl #2
        264ff4:	e1a00005 	mov	r0, r5
        264ff8:	eb653650 	bl	1bb2940 <$__rt_sdiv>
        264ffc:	e5c40007 	strb	r0, [r4, #7]
        265000:	e1a00440 	mov	r0, r0, asr #8
        265004:	e5c40006 	strb	r0, [r4, #6]
        265008:	e59d100a 	ldr	r1, [sp, #10]
        26500c:	e59d0006 	ldr	r0, [sp, #6]
        265010:	e0410000 	sub	r0, r1, r0
        265014:	e1a00800 	mov	r0, r0, lsl #16
        265018:	e1a00840 	mov	r0, r0, asr #16
        26501c:	e1a0c000 	mov	ip, r0
        265020:	e5943004 	ldr	r3, [r4, #4]	; fField4
        265024:	e1a03843 	mov	r3, r3, asr #16
        265028:	e0401003 	sub	r1, r0, r3
        26502c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        265030:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        265034:	e0400002 	sub	r0, r0, r2
        265038:	e1a00800 	mov	r0, r0, lsl #16
        26503c:	e5942006 	ldr	r2, [r4, #6]
        265040:	e1a02842 	mov	r2, r2, asr #16
        265044:	e0620840 	rsb	r0, r2, r0, asr #16
        265048:	e3380000 	teq	r8, #0	; 0x0
        26504c:	0a000026 	beq	2650ec <TView::DejustifyBounds(TRect *)+0x698>
        265050:	e206e0c0 	and	lr, r6, #192	; 0xc0
        265054:	e33e0040 	teq	lr, #64	; 0x40
        265058:	0a000005 	beq	265074 <TView::DejustifyBounds(TRect *)+0x620>
        26505c:	e33e0080 	teq	lr, #128	; 0x80
        265060:	0a000014 	beq	2650b8 <TView::DejustifyBounds(TRect *)+0x664>
        265064:	e33e00c0 	teq	lr, #192	; 0xc0
        265068:	02611000 	rsbeq	r1, r1, #0	; 0x0
        26506c:	0a00001b 	beq	2650e0 <TView::DejustifyBounds(TRect *)+0x68c>
        265070:	ea00001d 	b	2650ec <TView::DejustifyBounds(TRect *)+0x698>
        265074:	e5943000 	ldr	r3, [r4]
        265078:	e1a03823 	mov	r3, r3, lsr #16
        26507c:	e0431001 	sub	r1, r3, r1
        265080:	e1a01801 	mov	r1, r1, lsl #16
        265084:	e1a01841 	mov	r1, r1, asr #16
        265088:	e0811fa1 	add	r1, r1, r1, lsr #31
        26508c:	e1a010c1 	mov	r1, r1, asr #1
        265090:	e5c41001 	strb	r1, [r4, #1]
        265094:	e1a01441 	mov	r1, r1, asr #8
        265098:	e5c41000 	strb	r1, [r4]
        26509c:	e59d3012 	ldr	r3, [sp, #18]	; fField18
        2650a0:	e59d100e 	ldr	r1, [sp, #14]
        2650a4:	e0431001 	sub	r1, r3, r1
        2650a8:	e5943000 	ldr	r3, [r4]
        2650ac:	e1a03823 	mov	r3, r3, lsr #16
        2650b0:	e0811003 	add	r1, r1, r3
        2650b4:	ea000009 	b	2650e0 <TView::DejustifyBounds(TRect *)+0x68c>
        2650b8:	e5941000 	ldr	r1, [r4]
        2650bc:	e1a01821 	mov	r1, r1, lsr #16
        2650c0:	e041100c 	sub	r1, r1, ip
        2650c4:	e5c41001 	strb	r1, [r4, #1]
        2650c8:	e1a01441 	mov	r1, r1, asr #8
        2650cc:	e5c41000 	strb	r1, [r4]
        2650d0:	e59dc00a 	ldr	ip, [sp, #10]
        2650d4:	e59d1006 	ldr	r1, [sp, #6]
        2650d8:	e04c1001 	sub	r1, ip, r1
        2650dc:	e0431001 	sub	r1, r3, r1
        2650e0:	e5c41005 	strb	r1, [r4, #5]
        2650e4:	e1a01441 	mov	r1, r1, asr #8
        2650e8:	e5c41004 	strb	r1, [r4, #4]	; fField4
        2650ec:	e3390000 	teq	r9, #0	; 0x0
        2650f0:	0a000029 	beq	26519c <TView::DejustifyBounds(TRect *)+0x748>
        2650f4:	e2061030 	and	r1, r6, #48	; 0x30
        2650f8:	e3310010 	teq	r1, #16	; 0x10
        2650fc:	0a000005 	beq	265118 <TView::DejustifyBounds(TRect *)+0x6c4>
        265100:	e3310020 	teq	r1, #32	; 0x20
        265104:	0a000014 	beq	26515c <TView::DejustifyBounds(TRect *)+0x708>
        265108:	e3310030 	teq	r1, #48	; 0x30
        26510c:	02600000 	rsbeq	r0, r0, #0	; 0x0
        265110:	0a00001e 	beq	265190 <TView::DejustifyBounds(TRect *)+0x73c>
        265114:	ea000020 	b	26519c <TView::DejustifyBounds(TRect *)+0x748>
        265118:	e5941002 	ldr	r1, [r4, #2]	; fField2
        26511c:	e1a01821 	mov	r1, r1, lsr #16
        265120:	e0410000 	sub	r0, r1, r0
        265124:	e1a00800 	mov	r0, r0, lsl #16
        265128:	e1a00840 	mov	r0, r0, asr #16
        26512c:	e0800fa0 	add	r0, r0, r0, lsr #31
        265130:	e1a000c0 	mov	r0, r0, asr #1
        265134:	e5c40003 	strb	r0, [r4, #3]
        265138:	e1a00440 	mov	r0, r0, asr #8
        26513c:	e5c40002 	strb	r0, [r4, #2]	; fField2
        265140:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        265144:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        265148:	e0400001 	sub	r0, r0, r1
        26514c:	e5941002 	ldr	r1, [r4, #2]	; fField2
        265150:	e1a01821 	mov	r1, r1, lsr #16
        265154:	e0800001 	add	r0, r0, r1
        265158:	ea00000c 	b	265190 <TView::DejustifyBounds(TRect *)+0x73c>
        26515c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        265160:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        265164:	e0400001 	sub	r0, r0, r1
        265168:	e5941002 	ldr	r1, [r4, #2]	; fField2
        26516c:	e1a01821 	mov	r1, r1, lsr #16
        265170:	e0410000 	sub	r0, r1, r0
        265174:	e5c40003 	strb	r0, [r4, #3]
        265178:	e1a00440 	mov	r0, r0, asr #8
        26517c:	e5c40002 	strb	r0, [r4, #2]	; fField2
        265180:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        265184:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        265188:	e0410000 	sub	r0, r1, r0
        26518c:	e0420000 	sub	r0, r2, r0
        265190:	e5c40007 	strb	r0, [r4, #7]
        265194:	e1a00440 	mov	r0, r0, asr #8
        265198:	e5c40006 	strb	r0, [r4, #6]
        26519c:	e316030f 	tst	r6, #1006632960	; 0x3c000000
        2651a0:	0a00003d 	beq	26529c <TView::DejustifyBounds(TRect *)+0x848>
        2651a4:	e3380000 	teq	r8, #0	; 0x0
        2651a8:	0a00001c 	beq	265220 <TView::DejustifyBounds(TRect *)+0x7cc>
        2651ac:	e59d100a 	ldr	r1, [sp, #10]
        2651b0:	e59d0006 	ldr	r0, [sp, #6]
        2651b4:	e0410000 	sub	r0, r1, r0
        2651b8:	e1a05800 	mov	r5, r0, lsl #16
        2651bc:	e1a05845 	mov	r5, r5, asr #16
        2651c0:	e3160201 	tst	r6, #268435456	; 0x10000000
        2651c4:	0a000009 	beq	2651f0 <TView::DejustifyBounds(TRect *)+0x79c>
        2651c8:	e5940000 	ldr	r0, [r4]
        2651cc:	e1a00840 	mov	r0, r0, asr #16
        2651d0:	e0801180 	add	r1, r0, r0, lsl #3
        2651d4:	e0811200 	add	r1, r1, r0, lsl #4
        2651d8:	e1a01101 	mov	r1, r1, lsl #2
        2651dc:	e1a00005 	mov	r0, r5
        2651e0:	eb6535d6 	bl	1bb2940 <$__rt_sdiv>
        2651e4:	e5c40001 	strb	r0, [r4, #1]
        2651e8:	e1a00440 	mov	r0, r0, asr #8
        2651ec:	e5c40000 	strb	r0, [r4]
        2651f0:	e3160202 	tst	r6, #536870912	; 0x20000000
        2651f4:	0a000009 	beq	265220 <TView::DejustifyBounds(TRect *)+0x7cc>
        2651f8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2651fc:	e1a00840 	mov	r0, r0, asr #16
        265200:	e0801180 	add	r1, r0, r0, lsl #3
        265204:	e0811200 	add	r1, r1, r0, lsl #4
        265208:	e1a01101 	mov	r1, r1, lsl #2
        26520c:	e1a00005 	mov	r0, r5
        265210:	eb6535ca 	bl	1bb2940 <$__rt_sdiv>
        265214:	e5c40005 	strb	r0, [r4, #5]
        265218:	e1a00440 	mov	r0, r0, asr #8
        26521c:	e5c40004 	strb	r0, [r4, #4]	; fField4
        265220:	e3390000 	teq	r9, #0	; 0x0
        265224:	0a00001c 	beq	26529c <TView::DejustifyBounds(TRect *)+0x848>
        265228:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        26522c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        265230:	e0400001 	sub	r0, r0, r1
        265234:	e1a05800 	mov	r5, r0, lsl #16
        265238:	e1a05845 	mov	r5, r5, asr #16
        26523c:	e3160301 	tst	r6, #67108864	; 0x4000000
        265240:	0a000009 	beq	26526c <TView::DejustifyBounds(TRect *)+0x818>
        265244:	e5940002 	ldr	r0, [r4, #2]	; fField2
        265248:	e1a00840 	mov	r0, r0, asr #16
        26524c:	e0801180 	add	r1, r0, r0, lsl #3
        265250:	e0811200 	add	r1, r1, r0, lsl #4
        265254:	e1a01101 	mov	r1, r1, lsl #2
        265258:	e1a00005 	mov	r0, r5
        26525c:	eb6535b7 	bl	1bb2940 <$__rt_sdiv>
        265260:	e5c40003 	strb	r0, [r4, #3]
        265264:	e1a00440 	mov	r0, r0, asr #8
        265268:	e5c40002 	strb	r0, [r4, #2]	; fField2
        26526c:	e3160302 	tst	r6, #134217728	; 0x8000000
        265270:	0a000009 	beq	26529c <TView::DejustifyBounds(TRect *)+0x848>
        265274:	e5940006 	ldr	r0, [r4, #6]
        265278:	e1a00840 	mov	r0, r0, asr #16
        26527c:	e0801180 	add	r1, r0, r0, lsl #3
        265280:	e0811200 	add	r1, r1, r0, lsl #4
        265284:	e1a01101 	mov	r1, r1, lsl #2
        265288:	e1a00005 	mov	r0, r5
        26528c:	eb6535ab 	bl	1bb2940 <$__rt_sdiv>
        265290:	e5c40007 	strb	r0, [r4, #7]
        265294:	e1a00440 	mov	r0, r0, asr #8
        265298:	e5c40006 	strb	r0, [r4, #6]
        26529c:	e28dd00c 	add	sp, sp, #12	; 0xc
        2652a0:	eafffdfa 	b	264a90 <TView::DejustifyBounds(TRect *)+0x3c>
    */
}

/**
 * Symbol: TView::RecalcBounds(void)
 * Address: 002652a4
 */
TView::RecalcBounds(void) {
    /*
        2652a4:	e1a0c00d 	mov	ip, sp
        2652a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2652ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2652b0:	e1a04000 	mov	r4, r0
        2652b4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2652b8:	e59f1070 	ldr	r1, [pc, #70]	; 265330 <TView::RecalcBounds(void)+0x8c>
        2652bc:	eb6594a1 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        2652c0:	eb6573a1 	bl	1bc214c <$AllocateRefHandle(long)>
        2652c4:	e58d0000 	str	r0, [sp]
        2652c8:	e28d1004 	add	r1, sp, #4	; 0x4
        2652cc:	e1a0000d 	mov	r0, sp
        2652d0:	eb60bde8 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        2652d4:	e3300000 	teq	r0, #0	; 0x0
        2652d8:	0a000004 	beq	2652f0 <TView::RecalcBounds(void)+0x4c>
        2652dc:	e28d1004 	add	r1, sp, #4	; 0x4
        2652e0:	e1a00004 	mov	r0, r4
        2652e4:	e5942000 	ldr	r2, [r4]
        2652e8:	e1a0e00f 	mov	lr, pc
        2652ec:	e282f02c 	add	pc, r2, #44	; 0x2c
        2652f0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2652f4:	e1a0000d 	mov	r0, sp
        2652f8:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
        2652fc:	eb608c4c 	bl	1a88434 <TListLoop::$__ct(CList *)>
        265300:	e1a0000d 	mov	r0, sp
        265304:	eb60dec5 	bl	1a9ce20 <TListLoop::$Next(void)>
        265308:	e3300000 	teq	r0, #0	; 0x0
        26530c:	0a000004 	beq	265324 <TView::RecalcBounds(void)+0x80>
        265310:	eb6598aa 	bl	1bcb5c0 <TView::$RecalcBounds(void)>
        265314:	e1a0000d 	mov	r0, sp
        265318:	eb60dec0 	bl	1a9ce20 <TListLoop::$Next(void)>
        26531c:	e3300000 	teq	r0, #0	; 0x0
        265320:	1afffffa 	bne	265310 <TView::RecalcBounds(void)+0x6c>
        265324:	e5bd000c 	ldr	r0, [sp, #12]!	; fField12
        265328:	eb6577a3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26532c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        265330:	00684f08 	rsbeq	r4, r8, r8, lsl #30
    */
}

/**
 * Symbol: TView::SetOrigin(TPoint &)
 * Address: 00265334
 */
TView::SetOrigin(TPoint &) {
    /*
        265334:	e1a0c00d 	mov	ip, sp
        265338:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        26533c:	e24cb004 	sub	fp, ip, #4	; 0x4
        265340:	e1a04000 	mov	r4, r0
        265344:	e1a05001 	mov	r5, r1
        265348:	e3a01008 	mov	r1, #8	; 0x8
        26534c:	eb659479 	bl	1bca538 <TView::$GetCacheProto(long)>
        265350:	eb65737d 	bl	1bc214c <$AllocateRefHandle(long)>
        265354:	e1a06000 	mov	r6, r0
        265358:	e5900000 	ldr	r0, [r0]
        26535c:	e3300002 	teq	r0, #2	; 0x2
        265360:	03a07000 	moveq	r7, #0	; 0x0
        265364:	0a000004 	beq	26537c <TView::SetOrigin(TPoint &)+0x48>
        265368:	e3100003 	tst	r0, #3	; 0x3
        26536c:	01a00140 	moveq	r0, r0, asr #2
        265370:	0a000000 	beq	265378 <TView::SetOrigin(TPoint &)+0x44>
        265374:	eb657368 	bl	1bc211c <$_RINTError(long)>
        265378:	e1a07000 	mov	r7, r0
        26537c:	e1a00004 	mov	r0, r4
        265380:	e3a01007 	mov	r1, #7	; 0x7
        265384:	eb65946b 	bl	1bca538 <TView::$GetCacheProto(long)>
        265388:	e5860000 	str	r0, [r6]
        26538c:	e3300002 	teq	r0, #2	; 0x2
        265390:	03a00000 	moveq	r0, #0	; 0x0
        265394:	0a000003 	beq	2653a8 <TView::SetOrigin(TPoint &)+0x74>
        265398:	e3100003 	tst	r0, #3	; 0x3
        26539c:	01a00140 	moveq	r0, r0, asr #2
        2653a0:	0a000000 	beq	2653a8 <TView::SetOrigin(TPoint &)+0x74>
        2653a4:	eb65735c 	bl	1bc211c <$_RINTError(long)>
        2653a8:	e1a08000 	mov	r8, r0
        2653ac:	e1a00004 	mov	r0, r4
        2653b0:	e3a01000 	mov	r1, #0	; 0x0
        2653b4:	e5942000 	ldr	r2, [r4]
        2653b8:	e1a0e00f 	mov	lr, pc
        2653bc:	e282f054 	add	pc, r2, #84	; 0x54
        2653c0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2653c4:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2653c8:	e5900000 	ldr	r0, [r0]
        2653cc:	e3300000 	teq	r0, #0	; 0x0
        2653d0:	0a00002b 	beq	265484 <TView::SetOrigin(TPoint &)+0x150>
        2653d4:	e5950002 	ldr	r0, [r5, #2]	; fField2
        2653d8:	e1a00820 	mov	r0, r0, lsr #16
        2653dc:	e0470000 	sub	r0, r7, r0
        2653e0:	e1a00800 	mov	r0, r0, lsl #16
        2653e4:	e1a00840 	mov	r0, r0, asr #16
        2653e8:	e5951000 	ldr	r1, [r5]
        2653ec:	e1a01821 	mov	r1, r1, lsr #16
        2653f0:	e0481001 	sub	r1, r8, r1
        2653f4:	e1a01801 	mov	r1, r1, lsl #16
        2653f8:	e1a01841 	mov	r1, r1, asr #16
        2653fc:	e24dd014 	sub	sp, sp, #20	; 0x14
        265400:	e5cd0003 	strb	r0, [sp, #3]
        265404:	e1a00440 	mov	r0, r0, asr #8
        265408:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        26540c:	e5cd1001 	strb	r1, [sp, #1]
        265410:	e1a00441 	mov	r0, r1, asr #8
        265414:	e5cd0000 	strb	r0, [sp]
        265418:	e49d0004 	ldr	r0, [sp], #4	; fField4
        26541c:	e58d000c 	str	r0, [sp, #12]	; fField12
        265420:	e1a0000d 	mov	r0, sp
        265424:	e5941020 	ldr	r1, [r4, #32]	; fField32
        265428:	eb608c01 	bl	1a88434 <TListLoop::$__ct(CList *)>
        26542c:	e1a0000d 	mov	r0, sp
        265430:	eb60de7a 	bl	1a9ce20 <TListLoop::$Next(void)>
        265434:	e1b07000 	movs	r7, r0
        265438:	0a000010 	beq	265480 <TView::SetOrigin(TPoint &)+0x14c>
        26543c:	e1a00007 	mov	r0, r7
        265440:	eb65944a 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        265444:	e3300000 	teq	r0, #0	; 0x0
        265448:	e1a00007 	mov	r0, r7
        26544c:	0a000002 	beq	26545c <TView::SetOrigin(TPoint &)+0x128>
        265450:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        265454:	eb65984f 	bl	1bcb598 <TView::$Offset(TPoint)>
        265458:	ea000004 	b	265470 <TView::SetOrigin(TPoint &)+0x13c>
        26545c:	e3a02000 	mov	r2, #0	; 0x0
        265460:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        265464:	e5973000 	ldr	r3, [r7]
        265468:	e1a0e00f 	mov	lr, pc
        26546c:	e283f0f8 	add	pc, r3, #248	; 0xf8
        265470:	e1a0000d 	mov	r0, sp
        265474:	eb60de69 	bl	1a9ce20 <TListLoop::$Next(void)>
        265478:	e1b07000 	movs	r7, r0
        26547c:	1affffee 	bne	26543c <TView::SetOrigin(TPoint &)+0x108>
        265480:	e28dd010 	add	sp, sp, #16	; 0x10
        265484:	e1a00004 	mov	r0, r4
        265488:	e3a01008 	mov	r1, #8	; 0x8
        26548c:	eb6207c7 	bl	1ae73b0 <TView::$InvalidateSlotCache(long)>
        265490:	e5950002 	ldr	r0, [r5, #2]	; fField2
        265494:	e1a00840 	mov	r0, r0, asr #16
        265498:	e1a00100 	mov	r0, r0, lsl #2
        26549c:	eb65732a 	bl	1bc214c <$AllocateRefHandle(long)>
        2654a0:	e58d0000 	str	r0, [sp]
        2654a4:	e1a0200d 	mov	r2, sp
        2654a8:	e59f1050 	ldr	r1, [pc, #50]	; 265500 <TView::SetOrigin(TPoint &)+0x1cc>
        2654ac:	e1a00004 	mov	r0, r4
        2654b0:	eb61de59 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        2654b4:	e59d0000 	ldr	r0, [sp]
        2654b8:	eb65773f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2654bc:	e1a00004 	mov	r0, r4
        2654c0:	e3a01007 	mov	r1, #7	; 0x7
        2654c4:	eb6207b9 	bl	1ae73b0 <TView::$InvalidateSlotCache(long)>
        2654c8:	e5950000 	ldr	r0, [r5]
        2654cc:	e1a00840 	mov	r0, r0, asr #16
        2654d0:	e1a00100 	mov	r0, r0, lsl #2
        2654d4:	eb65731c 	bl	1bc214c <$AllocateRefHandle(long)>
        2654d8:	e58d0004 	str	r0, [sp, #4]	; fField4
        2654dc:	e28d2004 	add	r2, sp, #4	; 0x4
        2654e0:	e59f101c 	ldr	r1, [pc, #1c]	; 265504 <TView::SetOrigin(TPoint &)+0x1d0>
        2654e4:	e1a00004 	mov	r0, r4
        2654e8:	eb61de4b 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        2654ec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2654f0:	eb657731 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2654f4:	e1a00006 	mov	r0, r6
        2654f8:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2654fc:	ea65772e 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        265500:	00685068 	rsbeq	r5, r8, r8, rrx
        265504:	00685070 	rsbeq	r5, r8, r0, ror r0
    */
}

/**
 * Symbol: TView::SetBounds(TRect const &)
 * Address: 0026555c
 */
TView::SetBounds(TRect const &) {
    /*
        26555c:	e1a0c00d 	mov	ip, sp
        265560:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        265564:	e24cb004 	sub	fp, ip, #4	; 0x4
        265568:	e1a04000 	mov	r4, r0
        26556c:	e2806010 	add	r6, r0, #16	; 0x10
        265570:	e8915000 	ldmia	r1, {ip, lr}
        265574:	e8865000 	stmia	r6, {ip, lr}
        265578:	e3a01009 	mov	r1, #9	; 0x9
        26557c:	eb6593ed 	bl	1bca538 <TView::$GetCacheProto(long)>
        265580:	eb6572f1 	bl	1bc214c <$AllocateRefHandle(long)>
        265584:	e1a05000 	mov	r5, r0
        265588:	e5900000 	ldr	r0, [r0]
        26558c:	e3300002 	teq	r0, #2	; 0x2
        265590:	03a00000 	moveq	r0, #0	; 0x0
        265594:	0a000007 	beq	2655b8 <TView::SetBounds(TRect const &)+0x5c>
        265598:	e3100003 	tst	r0, #3	; 0x3
        26559c:	01a00140 	moveq	r0, r0, asr #2
        2655a0:	0a000000 	beq	2655a8 <TView::SetBounds(TRect const &)+0x4c>
        2655a4:	eb6572dc 	bl	1bc211c <$_RINTError(long)>
        2655a8:	e3c00103 	bic	r0, r0, #-1073741824	; 0xc0000000
        2655ac:	e5941028 	ldr	r1, [r4, #40]	; fField40
        2655b0:	e2011103 	and	r1, r1, #-1073741824	; 0xc0000000
        2655b4:	e1800001 	orr	r0, r0, r1
        2655b8:	e1a01006 	mov	r1, r6
        2655bc:	e5840028 	str	r0, [r4, #40]	; fField40
        2655c0:	e1a00004 	mov	r0, r4
        2655c4:	eb6597ee 	bl	1bcb584 <TView::$JustifyBounds(TRect *)>
        2655c8:	e1a00004 	mov	r0, r4
        2655cc:	eb658fc0 	bl	1bc94d4 <TView::$Clipper( const(void))>
        2655d0:	e1b06000 	movs	r6, r0
        2655d4:	0a00000d 	beq	265610 <TView::SetBounds(TRect const &)+0xb4>
        2655d8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2655dc:	e1a0100d 	mov	r1, sp
        2655e0:	e1a00004 	mov	r0, r4
        2655e4:	e5942000 	ldr	r2, [r4]
        2655e8:	e1a0e00f 	mov	lr, pc
        2655ec:	e282f024 	add	pc, r2, #36	; 0x24
        2655f0:	e1a01004 	mov	r1, r4
        2655f4:	e1a00006 	mov	r0, r6
        2655f8:	eb60ff32 	bl	1aa52c8 <TClipper::$UpdateRegions(TView *)>
        2655fc:	e594001c 	ldr	r0, [r4, #28]	; fField28
        265600:	e1a01004 	mov	r1, r4
        265604:	e3a02000 	mov	r2, #0	; 0x0
        265608:	eb659c0c 	bl	1bcc640 <TView::$ViewVisibleChanged(TView *, unsigned char)>
        26560c:	e28dd008 	add	sp, sp, #8	; 0x8
        265610:	e1a00005 	mov	r0, r5
        265614:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        265618:	ea6576e7 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: TView::ChildrenHeight(long *)
 * Address: 0026561c
 */
TView::ChildrenHeight(long *) {
    /*
        26561c:	e1a0c00d 	mov	ip, sp
        265620:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        265624:	e24cb004 	sub	fp, ip, #4	; 0x4
        265628:	e1a04001 	mov	r4, r1
        26562c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        265630:	e3a06001 	mov	r6, #1	; 0x1
        265634:	e3a05000 	mov	r5, #0	; 0x0
        265638:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        26563c:	e1a0000d 	mov	r0, sp
        265640:	eb608b7b 	bl	1a88434 <TListLoop::$__ct(CList *)>
        265644:	e1a0000d 	mov	r0, sp
        265648:	eb60ddf4 	bl	1a9ce20 <TListLoop::$Next(void)>
        26564c:	e3300000 	teq	r0, #0	; 0x0
        265650:	0a00000c 	beq	265688 <TView::ChildrenHeight(long *)+0x6c>
        265654:	e2800010 	add	r0, r0, #16	; 0x10
        265658:	e5901004 	ldr	r1, [r0, #4]	; fField4
        26565c:	e1a01821 	mov	r1, r1, lsr #16
        265660:	e5900000 	ldr	r0, [r0]
        265664:	e1a00820 	mov	r0, r0, lsr #16
        265668:	e0410000 	sub	r0, r1, r0
        26566c:	e1a00800 	mov	r0, r0, lsl #16
        265670:	e0855840 	add	r5, r5, r0, asr #16
        265674:	e2866001 	add	r6, r6, #1	; 0x1
        265678:	e1a0000d 	mov	r0, sp
        26567c:	eb60dde7 	bl	1a9ce20 <TListLoop::$Next(void)>
        265680:	e3300000 	teq	r0, #0	; 0x0
        265684:	1afffff2 	bne	265654 <TView::ChildrenHeight(long *)+0x38>
        265688:	e3340000 	teq	r4, #0	; 0x0
        26568c:	15846000 	strne	r6, [r4]
        265690:	e1a00005 	mov	r0, r5
        265694:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TView::SetChildrenVertical(long, long)
 * Address: 00265698
 */
TView::SetChildrenVertical(long, long) {
    /*
        265698:	e1a0c00d 	mov	ip, sp
        26569c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2656a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2656a4:	e1a06000 	mov	r6, r0
        2656a8:	e1a04001 	mov	r4, r1
        2656ac:	e1a05002 	mov	r5, r2
        2656b0:	e24dd010 	sub	sp, sp, #16	; 0x10
        2656b4:	e1a01000 	mov	r1, r0
        2656b8:	e28d000c 	add	r0, sp, #12	; 0xc
        2656bc:	eb000790 	bl	267504 <TView::ContentsOrigin(void)>
        2656c0:	e1a0000d 	mov	r0, sp
        2656c4:	e5b61020 	ldr	r1, [r6, #32]!	; fField32
        2656c8:	eb608b59 	bl	1a88434 <TListLoop::$__ct(CList *)>
        2656cc:	e1a0000d 	mov	r0, sp
        2656d0:	eb60ddd2 	bl	1a9ce20 <TListLoop::$Next(void)>
        2656d4:	e1b06000 	movs	r6, r0
        2656d8:	0a000039 	beq	2657c4 <TView::SetChildrenVertical(long, long)+0x12c>
        2656dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2656e0:	e2860010 	add	r0, r6, #16	; 0x10
        2656e4:	e8901008 	ldmia	r0, {r3, ip}
        2656e8:	e88d1008 	stmia	sp, {r3, ip}
        2656ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        2656f0:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2656f4:	e2600000 	rsb	r0, r0, #0	; 0x0
        2656f8:	e1a00800 	mov	r0, r0, lsl #16
        2656fc:	e1a00840 	mov	r0, r0, asr #16
        265700:	e59d101a 	ldr	r1, [sp, #26]
        265704:	e2611000 	rsb	r1, r1, #0	; 0x0
        265708:	e1a01801 	mov	r1, r1, lsl #16
        26570c:	e1a01841 	mov	r1, r1, asr #16
        265710:	e24dd004 	sub	sp, sp, #4	; 0x4
        265714:	e5cd0003 	strb	r0, [sp, #3]
        265718:	e1a00440 	mov	r0, r0, asr #8
        26571c:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        265720:	e5cd1001 	strb	r1, [sp, #1]
        265724:	e1a00441 	mov	r0, r1, asr #8
        265728:	e5cd0000 	strb	r0, [sp]
        26572c:	e49d0004 	ldr	r0, [sp], #4	; fField4
        265730:	e58d0000 	str	r0, [sp]
        265734:	e28d0004 	add	r0, sp, #4	; 0x4
        265738:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        26573c:	e1a01841 	mov	r1, r1, asr #16
        265740:	e59d2000 	ldr	r2, [sp]
        265744:	e1a02842 	mov	r2, r2, asr #16
        265748:	eb63b066 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        26574c:	e28dd004 	add	sp, sp, #4	; 0x4
        265750:	e59d0006 	ldr	r0, [sp, #6]
        265754:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        265758:	e0400001 	sub	r0, r0, r1
        26575c:	e1a07800 	mov	r7, r0, lsl #16
        265760:	e1a07847 	mov	r7, r7, asr #16
        265764:	e59d0000 	ldr	r0, [sp]
        265768:	e1a00840 	mov	r0, r0, asr #16
        26576c:	e1540000 	cmp	r4, r0
        265770:	c1a00004 	movgt	r0, r4
        265774:	e5cd0001 	strb	r0, [sp, #1]
        265778:	e1a00440 	mov	r0, r0, asr #8
        26577c:	e5cd0000 	strb	r0, [sp]
        265780:	e0840007 	add	r0, r4, r7
        265784:	e5cd0005 	strb	r0, [sp, #5]
        265788:	e1a00440 	mov	r0, r0, asr #8
        26578c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        265790:	e1a0100d 	mov	r1, sp
        265794:	e1a00006 	mov	r0, r6
        265798:	e5962000 	ldr	r2, [r6]
        26579c:	e1a0e00f 	mov	lr, pc
        2657a0:	e282f02c 	add	pc, r2, #44	; 0x2c
        2657a4:	e59d0000 	ldr	r0, [sp]
        2657a8:	e0870840 	add	r0, r7, r0, asr #16
        2657ac:	e0804005 	add	r4, r0, r5
        2657b0:	e28dd008 	add	sp, sp, #8	; 0x8
        2657b4:	e1a0000d 	mov	r0, sp
        2657b8:	eb60dd98 	bl	1a9ce20 <TListLoop::$Next(void)>
        2657bc:	e1b06000 	movs	r6, r0
        2657c0:	1affffc5 	bne	2656dc <TView::SetChildrenVertical(long, long)+0x44>
        2657c4:	e1a00004 	mov	r0, r4
        2657c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TView::ChildBoundsChanged(TView *, TRect &)
 * Address: 002657cc
 */
TView::ChildBoundsChanged(TView *, TRect &) {
    /*
        2657cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::SetupForm(void)
 * Address: 002657d0
 */
TView::SetupForm(void) {
    /*
        2657d0:	e1a0c00d 	mov	ip, sp
        2657d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2657d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2657dc:	e1a04000 	mov	r4, r0
        2657e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2657e4:	e3a03000 	mov	r3, #0	; 0x0
        2657e8:	e92d0008 	stmdb	sp!, {r3}
        2657ec:	e3a00002 	mov	r0, #2	; 0x2
        2657f0:	eb657255 	bl	1bc214c <$AllocateRefHandle(long)>
        2657f4:	e58d0004 	str	r0, [sp, #4]	; fField4
        2657f8:	e28d2004 	add	r2, sp, #4	; 0x4
        2657fc:	e59f1014 	ldr	r1, [pc, #14]	; 265818 <TView::SetupForm(void)+0x48>
        265800:	e1a00004 	mov	r0, r4
        265804:	e3a03000 	mov	r3, #0	; 0x0
        265808:	eb659774 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        26580c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        265810:	eb657669 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        265814:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        265818:	006850c8 	rsbeq	r5, r8, r8, asr #1
    */
}

/**
 * Symbol: TView::SetupDone(void)
 * Address: 002658c0
 */
TView::SetupDone(void) {
    /*
        2658c0:	e1a0c00d 	mov	ip, sp
        2658c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2658c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2658cc:	e1a04000 	mov	r4, r0
        2658d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2658d4:	e3a03000 	mov	r3, #0	; 0x0
        2658d8:	e92d0008 	stmdb	sp!, {r3}
        2658dc:	e3a00002 	mov	r0, #2	; 0x2
        2658e0:	eb657219 	bl	1bc214c <$AllocateRefHandle(long)>
        2658e4:	e58d0004 	str	r0, [sp, #4]	; fField4
        2658e8:	e28d2004 	add	r2, sp, #4	; 0x4
        2658ec:	e59f1014 	ldr	r1, [pc, #14]	; 265908 <TView::SetupDone(void)+0x48>
        2658f0:	e1a00004 	mov	r0, r4
        2658f4:	e3a03000 	mov	r3, #0	; 0x0
        2658f8:	eb659738 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        2658fc:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        265900:	eb65762d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        265904:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        265908:	006850c0 	rsbeq	r5, r8, r0, asr #1
    */
}

/**
 * Symbol: TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)
 * Address: 0026590c
 */
TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *) {
    /*
        26590c:	e1a0c00d 	mov	ip, sp
        265910:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        265914:	e24cb004 	sub	fp, ip, #4	; 0x4
        265918:	e1a07000 	mov	r7, r0
        26591c:	e1b04001 	movs	r4, r1
        265920:	e1a05002 	mov	r5, r2
        265924:	059f00d8 	ldreq	r0, [pc, #d8]	; 265a04 <TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)+0xf8>
        265928:	05904000 	ldreq	r4, [r0]
        26592c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        265930:	e1a0000d 	mov	r0, sp
        265934:	eb66279a 	bl	1bef7a4 <$GetPort(GrafPort **)>
        265938:	e49d0004 	ldr	r0, [sp], #4	; fField4
        26593c:	e5900024 	ldr	r0, [r0, #36]	; fField36
        265940:	e58d0000 	str	r0, [sp]
        265944:	e1a08000 	mov	r8, r0
        265948:	e28d0004 	add	r0, sp, #4	; 0x4
        26594c:	eb6086a3 	bl	1a873e0 <TRegionVar::$__ct(void)>
        265950:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        265954:	eb63b823 	bl	1b539e8 <$SetEmptyRgn(Region **)>
        265958:	e24dd008 	sub	sp, sp, #8	; 0x8
        26595c:	e1370004 	teq	r7, r4
        265960:	0a000042 	beq	265a70 <TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)+0x164>
        265964:	e24dd008 	sub	sp, sp, #8	; 0x8
        265968:	e597001c 	ldr	r0, [r7, #28]	; fField28
        26596c:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        265970:	e1a0000d 	mov	r0, sp
        265974:	eb60869c 	bl	1a873ec <TBackwardLoop::$__ct(CList *)>
        265978:	e1a0000d 	mov	r0, sp
        26597c:	eb60dd24 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        265980:	e1a06000 	mov	r6, r0
        265984:	e1300007 	teq	r0, r7
        265988:	0a000034 	beq	265a60 <TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)+0x154>
        26598c:	e3350000 	teq	r5, #0	; 0x0
        265990:	0a00000b 	beq	2659c4 <TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)+0xb8>
        265994:	e28d1008 	add	r1, sp, #8	; 0x8
        265998:	e1a00006 	mov	r0, r6
        26599c:	e5962000 	ldr	r2, [r6]
        2659a0:	e1a0e00f 	mov	lr, pc
        2659a4:	e282f024 	add	pc, r2, #36	; 0x24
        2659a8:	e3350000 	teq	r5, #0	; 0x0
        2659ac:	0a000004 	beq	2659c4 <TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)+0xb8>
        2659b0:	e1a01005 	mov	r1, r5
        2659b4:	e28d0008 	add	r0, sp, #8	; 0x8
        2659b8:	eb60d4d7 	bl	1a9ad1c <TRect::$Intersects( const(TRect const &))>
        2659bc:	e3300000 	teq	r0, #0	; 0x0
        2659c0:	0a000021 	beq	265a4c <TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)+0x140>
        2659c4:	e596000c 	ldr	r0, [r6, #12]	; fField12
        2659c8:	e310000f 	tst	r0, #15	; 0xf
        2659cc:	1a000003 	bne	2659e0 <TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)+0xd4>
        2659d0:	e1a00006 	mov	r0, r6
        2659d4:	eb6592e5 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        2659d8:	e3300000 	teq	r0, #0	; 0x0
        2659dc:	0a00001a 	beq	265a4c <TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)+0x140>
        2659e0:	e1a00006 	mov	r0, r6
        2659e4:	eb658eba 	bl	1bc94d4 <TView::$Clipper( const(void))>
        2659e8:	e3300000 	teq	r0, #0	; 0x0
        2659ec:	0a000005 	beq	265a08 <TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)+0xfc>
        2659f0:	e1a02008 	mov	r2, r8
        2659f4:	e5901000 	ldr	r1, [r0]
        2659f8:	e1a00008 	mov	r0, r8
        2659fc:	eb639f32 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
        265a00:	ea000011 	b	265a4c <TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)+0x140>
        265a04:	0c101934 	ldceq	9, cr1, [r0], -#208
        265a08:	e24dd010 	sub	sp, sp, #16	; 0x10
        265a0c:	e28d1018 	add	r1, sp, #24	; 0x18
        265a10:	e1a00006 	mov	r0, r6
        265a14:	e5962000 	ldr	r2, [r6]
        265a18:	e1a0e00f 	mov	lr, pc
        265a1c:	e282f024 	add	pc, r2, #36	; 0x24
        265a20:	e24dd004 	sub	sp, sp, #4	; 0x4
        265a24:	e28d101c 	add	r1, sp, #28	; 0x1c
        265a28:	e28d0004 	add	r0, sp, #4	; 0x4
        265a2c:	eb608a77 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        265a30:	e28d0004 	add	r0, sp, #4	; 0x4
        265a34:	e58d0000 	str	r0, [sp]
        265a38:	e1a01000 	mov	r1, r0
        265a3c:	e1a02008 	mov	r2, r8
        265a40:	e1a00008 	mov	r0, r8
        265a44:	eb639f20 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
        265a48:	e28dd014 	add	sp, sp, #20	; 0x14
        265a4c:	e1a0000d 	mov	r0, sp
        265a50:	eb60dcef 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        265a54:	e1a06000 	mov	r6, r0
        265a58:	e1300007 	teq	r0, r7
        265a5c:	1affffca 	bne	26598c <TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)+0x80>
        265a60:	e597701c 	ldr	r7, [r7, #28]	; fField28
        265a64:	e28dd008 	add	sp, sp, #8	; 0x8
        265a68:	e1370004 	teq	r7, r4
        265a6c:	1affffbc 	bne	265964 <TView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)+0x58>
        265a70:	e28dd008 	add	sp, sp, #8	; 0x8
        265a74:	e28d0004 	add	r0, sp, #4	; 0x4
        265a78:	e3a01000 	mov	r1, #0	; 0x0
        265a7c:	eb608a70 	bl	1a88444 <TRegionVar::$__dt(void)>
        265a80:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TView::GetFrontMask( const(void))
 * Address: 00265a84
 */
TView::GetFrontMask( const(void)) {
    /*
        265a84:	e1a0c00d 	mov	ip, sp
        265a88:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        265a8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        265a90:	e1a05000 	mov	r5, r0
        265a94:	e1a04001 	mov	r4, r1
        265a98:	e24dd014 	sub	sp, sp, #20	; 0x14
        265a9c:	e1a0000d 	mov	r0, sp
        265aa0:	eb60864e 	bl	1a873e0 <TRegionVar::$__ct(void)>
        265aa4:	e59d0000 	ldr	r0, [sp]
        265aa8:	eb63b7ce 	bl	1b539e8 <$SetEmptyRgn(Region **)>
        265aac:	e24dd008 	sub	sp, sp, #8	; 0x8
        265ab0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        265ab4:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        265ab8:	e1a0000d 	mov	r0, sp
        265abc:	eb60864a 	bl	1a873ec <TBackwardLoop::$__ct(CList *)>
        265ac0:	e1a0000d 	mov	r0, sp
        265ac4:	eb60dcd2 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        265ac8:	e1a06000 	mov	r6, r0
        265acc:	e1300004 	teq	r0, r4
        265ad0:	0a000055 	beq	265c2c <TView::GetFrontMask( const(void))+0x1a8>
        265ad4:	e3360000 	teq	r6, #0	; 0x0
        265ad8:	0a000053 	beq	265c2c <TView::GetFrontMask( const(void))+0x1a8>
        265adc:	e5960008 	ldr	r0, [r6, #8]	; fField8
        265ae0:	e3100001 	tst	r0, #1	; 0x1
        265ae4:	0a00004b 	beq	265c18 <TView::GetFrontMask( const(void))+0x194>
        265ae8:	e24dd008 	sub	sp, sp, #8	; 0x8
        265aec:	e596000c 	ldr	r0, [r6, #12]	; fField12
        265af0:	e310000f 	tst	r0, #15	; 0xf
        265af4:	1a000003 	bne	265b08 <TView::GetFrontMask( const(void))+0x84>
        265af8:	e1a00006 	mov	r0, r6
        265afc:	eb65929b 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        265b00:	e3300000 	teq	r0, #0	; 0x0
        265b04:	0a00001a 	beq	265b74 <TView::GetFrontMask( const(void))+0xf0>
        265b08:	e1a00006 	mov	r0, r6
        265b0c:	eb658e70 	bl	1bc94d4 <TView::$Clipper( const(void))>
        265b10:	e3300000 	teq	r0, #0	; 0x0
        265b14:	0a000004 	beq	265b2c <TView::GetFrontMask( const(void))+0xa8>
        265b18:	e5901000 	ldr	r1, [r0]
        265b1c:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        265b20:	e1a00002 	mov	r0, r2
        265b24:	eb63bfd7 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        265b28:	ea000039 	b	265c14 <TView::GetFrontMask( const(void))+0x190>
        265b2c:	e24dd010 	sub	sp, sp, #16	; 0x10
        265b30:	e28d1010 	add	r1, sp, #16	; 0x10
        265b34:	e1a00006 	mov	r0, r6
        265b38:	e5962000 	ldr	r2, [r6]
        265b3c:	e1a0e00f 	mov	lr, pc
        265b40:	e282f024 	add	pc, r2, #36	; 0x24
        265b44:	e24dd004 	sub	sp, sp, #4	; 0x4
        265b48:	e28d1014 	add	r1, sp, #20	; 0x14
        265b4c:	e28d0004 	add	r0, sp, #4	; 0x4
        265b50:	eb608a2e 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        265b54:	e28d0004 	add	r0, sp, #4	; 0x4
        265b58:	e58d0000 	str	r0, [sp]
        265b5c:	e1a01000 	mov	r1, r0
        265b60:	e59d2024 	ldr	r2, [sp, #36]	; fField36
        265b64:	e1a00002 	mov	r0, r2
        265b68:	eb63bfc6 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        265b6c:	e28dd014 	add	sp, sp, #20	; 0x14
        265b70:	ea000027 	b	265c14 <TView::GetFrontMask( const(void))+0x190>
        265b74:	e5b60020 	ldr	r0, [r6, #32]!	; fField32
        265b78:	e5901000 	ldr	r1, [r0]
        265b7c:	e3310000 	teq	r1, #0	; 0x0
        265b80:	0a000023 	beq	265c14 <TView::GetFrontMask( const(void))+0x190>
        265b84:	e24dd00c 	sub	sp, sp, #12	; 0xc
        265b88:	e1a01000 	mov	r1, r0
        265b8c:	e1a0000d 	mov	r0, sp
        265b90:	eb608a27 	bl	1a88434 <TListLoop::$__ct(CList *)>
        265b94:	e1a0000d 	mov	r0, sp
        265b98:	eb60dca0 	bl	1a9ce20 <TListLoop::$Next(void)>
        265b9c:	e1b02000 	movs	r2, r0
        265ba0:	0a00001a 	beq	265c10 <TView::GetFrontMask( const(void))+0x18c>
        265ba4:	e5920008 	ldr	r0, [r2, #8]	; fField8
        265ba8:	e3100001 	tst	r0, #1	; 0x1
        265bac:	1592000c 	ldrne	r0, [r2, #12]	; fField12
        265bb0:	1200000f 	andne	r0, r0, #15	; 0xf
        265bb4:	13300000 	teqne	r0, #0	; 0x0
        265bb8:	0a000010 	beq	265c00 <TView::GetFrontMask( const(void))+0x17c>
        265bbc:	e24dd010 	sub	sp, sp, #16	; 0x10
        265bc0:	e28d101c 	add	r1, sp, #28	; 0x1c
        265bc4:	e1a00002 	mov	r0, r2
        265bc8:	e5922000 	ldr	r2, [r2]
        265bcc:	e1a0e00f 	mov	lr, pc
        265bd0:	e282f024 	add	pc, r2, #36	; 0x24
        265bd4:	e24dd004 	sub	sp, sp, #4	; 0x4
        265bd8:	e28d1020 	add	r1, sp, #32	; 0x20
        265bdc:	e28d0004 	add	r0, sp, #4	; 0x4
        265be0:	eb608a0a 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        265be4:	e28d0004 	add	r0, sp, #4	; 0x4
        265be8:	e58d0000 	str	r0, [sp]
        265bec:	e1a01000 	mov	r1, r0
        265bf0:	e59d2030 	ldr	r2, [sp, #48]
        265bf4:	e1a00002 	mov	r0, r2
        265bf8:	eb63bfa2 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        265bfc:	e28dd014 	add	sp, sp, #20	; 0x14
        265c00:	e1a0000d 	mov	r0, sp
        265c04:	eb60dc85 	bl	1a9ce20 <TListLoop::$Next(void)>
        265c08:	e1b02000 	movs	r2, r0
        265c0c:	1affffe4 	bne	265ba4 <TView::GetFrontMask( const(void))+0x120>
        265c10:	e28dd00c 	add	sp, sp, #12	; 0xc
        265c14:	e28dd008 	add	sp, sp, #8	; 0x8
        265c18:	e1a0000d 	mov	r0, sp
        265c1c:	eb60dc7c 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        265c20:	e1a06000 	mov	r6, r0
        265c24:	e1300004 	teq	r0, r4
        265c28:	1affffa9 	bne	265ad4 <TView::GetFrontMask( const(void))+0x50>
        265c2c:	e28d1008 	add	r1, sp, #8	; 0x8
        265c30:	e1a00005 	mov	r0, r5
        265c34:	eb6089fa 	bl	1a88424 <TRegion::$__ct(TRegionVar &)>
        265c38:	e28d0008 	add	r0, sp, #8	; 0x8
        265c3c:	e3a01000 	mov	r1, #0	; 0x0
        265c40:	eb6089ff 	bl	1a88444 <TRegionVar::$__dt(void)>
        265c44:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TView::GetWindowView(void)
 * Address: 00265c48
 */
TView::GetWindowView(void) {
    /*
        265c48:	e1a0c00d 	mov	ip, sp
        265c4c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        265c50:	e24cb004 	sub	fp, ip, #4	; 0x4
        265c54:	e1a04000 	mov	r4, r0
        265c58:	eb659244 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        265c5c:	e3300000 	teq	r0, #0	; 0x0
        265c60:	1a000004 	bne	265c78 <TView::GetWindowView(void)+0x30>
        265c64:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        265c68:	e1a04000 	mov	r4, r0
        265c6c:	eb65923f 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        265c70:	e3300000 	teq	r0, #0	; 0x0
        265c74:	0afffffa 	beq	265c64 <TView::GetWindowView(void)+0x1c>
        265c78:	e1a00004 	mov	r0, r4
        265c7c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::ViewVisibleChanged(TView *, unsigned char)
 * Address: 00265c80
 */
TView::ViewVisibleChanged(TView *, unsigned char) {
    /*
        265c80:	e1a0c00d 	mov	ip, sp
        265c84:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        265c88:	e24cb004 	sub	fp, ip, #4	; 0x4
        265c8c:	e1a04000 	mov	r4, r0
        265c90:	e1a05001 	mov	r5, r1
        265c94:	e20290ff 	and	r9, r2, #255	; 0xff
        265c98:	e24dd014 	sub	sp, sp, #20	; 0x14
        265c9c:	e1a0000d 	mov	r0, sp
        265ca0:	eb6085ce 	bl	1a873e0 <TRegionVar::$__ct(void)>
        265ca4:	e24dd008 	sub	sp, sp, #8	; 0x8
        265ca8:	e3a00001 	mov	r0, #1	; 0x1
        265cac:	e2400902 	sub	r0, r0, #32768	; 0x8000
        265cb0:	e3a02902 	mov	r2, #32768	; 0x8000
        265cb4:	e2422002 	sub	r2, r2, #2	; 0x2
        265cb8:	e5cd0001 	strb	r0, [sp, #1]
        265cbc:	e3e0107f 	mvn	r1, #127	; 0x7f
        265cc0:	e5cd1000 	strb	r1, [sp]
        265cc4:	e5cd0003 	strb	r0, [sp, #3]
        265cc8:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        265ccc:	e5cd2005 	strb	r2, [sp, #5]
        265cd0:	e3a0007f 	mov	r0, #127	; 0x7f
        265cd4:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        265cd8:	e5cd2007 	strb	r2, [sp, #7]
        265cdc:	e5cd0006 	strb	r0, [sp, #6]
        265ce0:	e1a0100d 	mov	r1, sp
        265ce4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        265ce8:	eb63b72b 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        265cec:	e24dd010 	sub	sp, sp, #16	; 0x10
        265cf0:	e28d1010 	add	r1, sp, #16	; 0x10
        265cf4:	e1a00004 	mov	r0, r4
        265cf8:	e5942000 	ldr	r2, [r4]
        265cfc:	e1a0e00f 	mov	lr, pc
        265d00:	e282f024 	add	pc, r2, #36	; 0x24
        265d04:	e24dd004 	sub	sp, sp, #4	; 0x4
        265d08:	e28d1014 	add	r1, sp, #20	; 0x14
        265d0c:	e28d0004 	add	r0, sp, #4	; 0x4
        265d10:	eb6089be 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        265d14:	e28d0004 	add	r0, sp, #4	; 0x4
        265d18:	e58d0000 	str	r0, [sp]
        265d1c:	e1a01000 	mov	r1, r0
        265d20:	e59d201c 	ldr	r2, [sp, #28]	; fField28
        265d24:	e1a00002 	mov	r0, r2
        265d28:	eb639e67 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
        265d2c:	e24dd004 	sub	sp, sp, #4	; 0x4
        265d30:	e1a0000d 	mov	r0, sp
        265d34:	e5941020 	ldr	r1, [r4, #32]	; fField32
        265d38:	eb6085ab 	bl	1a873ec <TBackwardLoop::$__ct(CList *)>
        265d3c:	e1a0000d 	mov	r0, sp
        265d40:	eb60dc33 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        265d44:	e1b06000 	movs	r6, r0
        265d48:	159f8004 	ldrne	r8, [pc, #4]	; 265d54 <TView::ViewVisibleChanged(TView *, unsigned char)+0xd4>	; fField4
        265d4c:	1a000003 	bne	265d60 <TView::ViewVisibleChanged(TView *, unsigned char)+0xe0>
        265d50:	ea000038 	b	265e38 <TView::ViewVisibleChanged(TView *, unsigned char)+0x1b8>
        265d54:	0c101934 	ldceq	9, cr1, [r0], -#208
        265d58:	e3370000 	teq	r7, #0	; 0x0
        265d5c:	1a000022 	bne	265dec <TView::ViewVisibleChanged(TView *, unsigned char)+0x16c>
        265d60:	e1360005 	teq	r6, r5
        265d64:	13a00000 	movne	r0, #0	; 0x0
        265d68:	03a00001 	moveq	r0, #1	; 0x1
        265d6c:	e21070ff 	ands	r7, r0, #255	; 0xff
        265d70:	13390000 	teqne	r9, #0	; 0x0
        265d74:	0a00001c 	beq	265dec <TView::ViewVisibleChanged(TView *, unsigned char)+0x16c>
        265d78:	e1a00005 	mov	r0, r5
        265d7c:	eb658dd4 	bl	1bc94d4 <TView::$Clipper( const(void))>
        265d80:	e1a0a000 	mov	sl, r0
        265d84:	e24dd024 	sub	sp, sp, #36	; 0x24
        265d88:	e28d0010 	add	r0, sp, #16	; 0x10
        265d8c:	eb608593 	bl	1a873e0 <TRegionVar::$__ct(void)>
        265d90:	e24dd004 	sub	sp, sp, #4	; 0x4
        265d94:	e59a0000 	ldr	r0, [sl]
        265d98:	e5900000 	ldr	r0, [r0]
        265d9c:	e2801004 	add	r1, r0, #4	; 0x4
        265da0:	e28d0004 	add	r0, sp, #4	; 0x4
        265da4:	eb608999 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        265da8:	e28d0004 	add	r0, sp, #4	; 0x4
        265dac:	e58d0000 	str	r0, [sp]
        265db0:	e59d1048 	ldr	r1, [sp, #72]
        265db4:	e59d2014 	ldr	r2, [sp, #20]	; fField20
        265db8:	eb639e43 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
        265dbc:	e28dd004 	add	sp, sp, #4	; 0x4
        265dc0:	e5960008 	ldr	r0, [r6, #8]	; fField8
        265dc4:	e3100001 	tst	r0, #1	; 0x1
        265dc8:	01a02004 	moveq	r2, r4
        265dcc:	11a02006 	movne	r2, r6
        265dd0:	e5980000 	ldr	r0, [r8]
        265dd4:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        265dd8:	eb60d3d5 	bl	1a9ad34 <TRootView::$Invalidate(TBaseRegion const, TView *)>
        265ddc:	e28d0010 	add	r0, sp, #16	; 0x10
        265de0:	e3a01000 	mov	r1, #0	; 0x0
        265de4:	eb608996 	bl	1a88444 <TRegionVar::$__dt(void)>
        265de8:	e28dd024 	add	sp, sp, #36	; 0x24
        265dec:	e5960008 	ldr	r0, [r6, #8]	; fField8
        265df0:	e3100001 	tst	r0, #1	; 0x1
        265df4:	0a00000b 	beq	265e28 <TView::ViewVisibleChanged(TView *, unsigned char)+0x1a8>
        265df8:	e1a00006 	mov	r0, r6
        265dfc:	eb658db4 	bl	1bc94d4 <TView::$Clipper( const(void))>
        265e00:	e1b06000 	movs	r6, r0
        265e04:	0a000007 	beq	265e28 <TView::ViewVisibleChanged(TView *, unsigned char)+0x1a8>
        265e08:	e3370000 	teq	r7, #0	; 0x0
        265e0c:	11a00006 	movne	r0, r6
        265e10:	159d1020 	ldrne	r1, [sp, #32]	; fField32
        265e14:	1b60e86d 	blne	1a9ffd0 <TClipper::$RecalcVisible(TBaseRegion)>
        265e18:	e5961000 	ldr	r1, [r6]
        265e1c:	e59d2020 	ldr	r2, [sp, #32]	; fField32
        265e20:	e1a00002 	mov	r0, r2
        265e24:	eb63bf17 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
        265e28:	e1a0000d 	mov	r0, sp
        265e2c:	eb60dbf8 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
        265e30:	e1b06000 	movs	r6, r0
        265e34:	1affffc7 	bne	265d58 <TView::ViewVisibleChanged(TView *, unsigned char)+0xd8>
        265e38:	e28dd020 	add	sp, sp, #32	; 0x20
        265e3c:	e1a0000d 	mov	r0, sp
        265e40:	e3a01000 	mov	r1, #0	; 0x0
        265e44:	eb60897e 	bl	1a88444 <TRegionVar::$__dt(void)>
        265e48:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::AddChild(RefVar const &)
 * Address: 00265e4c
 */
TView::AddChild(RefVar const &) {
    /*
        265e4c:	e1a0c00d 	mov	ip, sp
        265e50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        265e54:	e24cb004 	sub	fp, ip, #4	; 0x4
        265e58:	e1a05000 	mov	r5, r0
        265e5c:	e1a04001 	mov	r4, r1
        265e60:	e5900020 	ldr	r0, [r0, #32]	; fField32
        265e64:	eb6591ac 	bl	1bca51c <$Exists(TViewList *, RefVar const &)>
        265e68:	e3300000 	teq	r0, #0	; 0x0
        265e6c:	01a01004 	moveq	r1, r4
        265e70:	01a00005 	moveq	r0, r5
        265e74:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        265e78:	0a6095c4 	beq	1a8b590 <$BuildView(TView *, RefVar const &)>
        265e7c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::Show(void)
 * Address: 00265e80
 */
TView::Show(void) {
    /*
        265e80:	e1a0c00d 	mov	ip, sp
        265e84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        265e88:	e24cb004 	sub	fp, ip, #4	; 0x4
        265e8c:	e1a04000 	mov	r4, r0
        265e90:	e5900008 	ldr	r0, [r0, #8]	; fField8
        265e94:	e3100001 	tst	r0, #1	; 0x1
        265e98:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        265e9c:	e59f0060 	ldr	r0, [pc, #60]	; 265f04 <TView::Show(void)+0x84>
        265ea0:	e1a05000 	mov	r5, r0
        265ea4:	eb6174d4 	bl	1ac31fc <StrokeCentral::$BlockStrokes(void)>
        265ea8:	e1a00004 	mov	r0, r4
        265eac:	eb658d7d 	bl	1bc94a8 <TView::$BringToFront(void)>
        265eb0:	e24dd0bc 	sub	sp, sp, #188	; 0xbc
        265eb4:	e1a0000d 	mov	r0, sp
        265eb8:	eb60895b 	bl	1a8842c <TAnimate::$__ct(void)>
        265ebc:	e1a01004 	mov	r1, r4
        265ec0:	e1a0000d 	mov	r0, sp
        265ec4:	e3a03000 	mov	r3, #0	; 0x0
        265ec8:	e3a02001 	mov	r2, #1	; 0x1
        265ecc:	eb60f0a5 	bl	1aa2168 <TAnimate::$SetupPlainEffect(TView *, unsigned char, long)>
        265ed0:	e1a00004 	mov	r0, r4
        265ed4:	e3a01001 	mov	r1, #1	; 0x1
        265ed8:	eb6595c7 	bl	1bcb5fc <TView::$SetFlags(unsigned long)>
        265edc:	e24dd004 	sub	sp, sp, #4	; 0x4
        265ee0:	e1a00004 	mov	r0, r4
        265ee4:	eb6591a1 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        265ee8:	e3300000 	teq	r0, #0	; 0x0
        265eec:	0a000005 	beq	265f08 <TView::Show(void)+0x88>
        265ef0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        265ef4:	e1a01004 	mov	r1, r4
        265ef8:	e3a02001 	mov	r2, #1	; 0x1
        265efc:	eb6599cf 	bl	1bcc640 <TView::$ViewVisibleChanged(TView *, unsigned char)>
        265f00:	ea000005 	b	265f1c <TView::Show(void)+0x9c>
        265f04:	0c1018cc 	ldceq	8, cr1, [r0], -#816
        265f08:	e1a00004 	mov	r0, r4
        265f0c:	e3a01000 	mov	r1, #0	; 0x0
        265f10:	e5942000 	ldr	r2, [r4]
        265f14:	e1a0e00f 	mov	lr, pc
        265f18:	e282f054 	add	pc, r2, #84	; 0x54
        265f1c:	e59f1058 	ldr	r1, [pc, #58]	; 265f7c <TView::Show(void)+0xfc>
        265f20:	e28d0004 	add	r0, sp, #4	; 0x4
        265f24:	eb60aa51 	bl	1a90870 <TAnimate::$DoEffect(RefVar const &)>
        265f28:	e1a00005 	mov	r0, r5
        265f2c:	eb61917b 	bl	1aca520 <StrokeCentral::$UnblockStrokes(void)>
        265f30:	e1a00005 	mov	r0, r5
        265f34:	eb618511 	bl	1ac7380 <StrokeCentral::$FlushStrokes(void)>
        265f38:	e3a03000 	mov	r3, #0	; 0x0
        265f3c:	e92d0008 	stmdb	sp!, {r3}
        265f40:	e3a00002 	mov	r0, #2	; 0x2
        265f44:	eb657080 	bl	1bc214c <$AllocateRefHandle(long)>
        265f48:	e58d0004 	str	r0, [sp, #4]	; fField4
        265f4c:	e28d2004 	add	r2, sp, #4	; 0x4
        265f50:	e59f1028 	ldr	r1, [pc, #28]	; 265f80 <TView::Show(void)+0x100>	; fField28
        265f54:	e1a00004 	mov	r0, r4
        265f58:	e3a03000 	mov	r3, #0	; 0x0
        265f5c:	eb65959f 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        265f60:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        265f64:	eb657494 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        265f68:	e28dd004 	add	sp, sp, #4	; 0x4
        265f6c:	e1a0000d 	mov	r0, sp
        265f70:	e3a01000 	mov	r1, #0	; 0x0
        265f74:	ebf772ee 	bl	42b34 <TAnimate::__dt(void)>
        265f78:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        265f7c:	00684678 	rsbeq	r4, r8, r8, ror r6
        265f80:	006850d0 	ldreqd	r5, [r8]
    */
}

/**
 * Symbol: TView::Hide(void)
 * Address: 00265f84
 */
TView::Hide(void) {
    /*
        265f84:	e1a0c00d 	mov	ip, sp
        265f88:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        265f8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        265f90:	e1a04000 	mov	r4, r0
        265f94:	e5900008 	ldr	r0, [r0, #8]	; fField8
        265f98:	e3100001 	tst	r0, #1	; 0x1
        265f9c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        265fa0:	e59f00ac 	ldr	r0, [pc, #ac]	; 266054 <TView::Hide(void)+0xd0>
        265fa4:	e1a06000 	mov	r6, r0
        265fa8:	eb617493 	bl	1ac31fc <StrokeCentral::$BlockStrokes(void)>
        265fac:	e1a00004 	mov	r0, r4
        265fb0:	eb61baa6 	bl	1ad4a50 <$ViewContainsCaretView(TView *)>
        265fb4:	e59f509c 	ldr	r5, [pc, #9c]	; 266058 <TView::Hide(void)+0xd4>
        265fb8:	e3300000 	teq	r0, #0	; 0x0
        265fbc:	15950000 	ldrne	r0, [r5]
        265fc0:	1b6200d1 	blne	1ae630c <TRootView::$CaretViewGone(void)>
        265fc4:	e1a01004 	mov	r1, r4
        265fc8:	e3a02000 	mov	r2, #0	; 0x0
        265fcc:	e5950000 	ldr	r0, [r5]
        265fd0:	eb60f055 	bl	1aa212c <TRootView::$SetPopup(TView *, unsigned char)>
        265fd4:	e24dd0c0 	sub	sp, sp, #192	; 0xc0
        265fd8:	e28d0004 	add	r0, sp, #4	; 0x4
        265fdc:	eb608912 	bl	1a8842c <TAnimate::$__ct(void)>
        265fe0:	e1a01004 	mov	r1, r4
        265fe4:	e28d0004 	add	r0, sp, #4	; 0x4
        265fe8:	e3a03000 	mov	r3, #0	; 0x0
        265fec:	e3a02000 	mov	r2, #0	; 0x0
        265ff0:	eb60f05c 	bl	1aa2168 <TAnimate::$SetupPlainEffect(TView *, unsigned char, long)>
        265ff4:	e3a03000 	mov	r3, #0	; 0x0
        265ff8:	e92d0008 	stmdb	sp!, {r3}
        265ffc:	e3a00002 	mov	r0, #2	; 0x2
        266000:	eb657051 	bl	1bc214c <$AllocateRefHandle(long)>
        266004:	e58d0004 	str	r0, [sp, #4]	; fField4
        266008:	e28d2004 	add	r2, sp, #4	; 0x4
        26600c:	e59f1048 	ldr	r1, [pc, #48]	; 26605c <TView::Hide(void)+0xd8>
        266010:	e1a00004 	mov	r0, r4
        266014:	e3a03000 	mov	r3, #0	; 0x0
        266018:	eb659570 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        26601c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        266020:	eb657465 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        266024:	e1a00004 	mov	r0, r4
        266028:	eb659150 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        26602c:	e3300000 	teq	r0, #0	; 0x0
        266030:	0a00000a 	beq	266060 <TView::Hide(void)+0xdc>
        266034:	e1a00004 	mov	r0, r4
        266038:	e3a01001 	mov	r1, #1	; 0x1
        26603c:	eb658d22 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        266040:	e594001c 	ldr	r0, [r4, #28]	; fField28
        266044:	e1a01004 	mov	r1, r4
        266048:	e3a02001 	mov	r2, #1	; 0x1
        26604c:	eb65997b 	bl	1bcc640 <TView::$ViewVisibleChanged(TView *, unsigned char)>
        266050:	ea00000f 	b	266094 <TView::Hide(void)+0x110>
        266054:	0c1018cc 	ldceq	8, cr1, [r0], -#816
        266058:	0c101934 	ldceq	9, cr1, [r0], -#208
        26605c:	00685028 	rsbeq	r5, r8, r8, lsr #32
        266060:	e24dd008 	sub	sp, sp, #8	; 0x8
        266064:	e1a0100d 	mov	r1, sp
        266068:	e1a00004 	mov	r0, r4
        26606c:	e5942000 	ldr	r2, [r4]
        266070:	e1a0e00f 	mov	lr, pc
        266074:	e282f024 	add	pc, r2, #36	; 0x24
        266078:	e1a00004 	mov	r0, r4
        26607c:	e3a01001 	mov	r1, #1	; 0x1
        266080:	eb658d11 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        266084:	e1a0100d 	mov	r1, sp
        266088:	e5950000 	ldr	r0, [r5]
        26608c:	eb60f448 	bl	1aa31b4 <TRootView::$SmartInvalidate(TRect const &)>
        266090:	e28dd008 	add	sp, sp, #8	; 0x8
        266094:	e59f1024 	ldr	r1, [pc, #24]	; 2660c0 <TView::Hide(void)+0x13c>	; fField24
        266098:	e28d0004 	add	r0, sp, #4	; 0x4
        26609c:	eb60a9f3 	bl	1a90870 <TAnimate::$DoEffect(RefVar const &)>
        2660a0:	e1a00006 	mov	r0, r6
        2660a4:	eb61911d 	bl	1aca520 <StrokeCentral::$UnblockStrokes(void)>
        2660a8:	e1a00006 	mov	r0, r6
        2660ac:	eb6184b3 	bl	1ac7380 <StrokeCentral::$FlushStrokes(void)>
        2660b0:	e28d0004 	add	r0, sp, #4	; 0x4
        2660b4:	e3a01000 	mov	r1, #0	; 0x0
        2660b8:	ebf7729d 	bl	42b34 <TAnimate::__dt(void)>
        2660bc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2660c0:	006830e8 	rsbeq	r3, r8, r8, ror #1
    */
}

/**
 * Symbol: TView::Hilite(unsigned char)
 * Address: 002660c4
 */
TView::Hilite(unsigned char) {
    /*
        2660c4:	e1a0c00d 	mov	ip, sp
        2660c8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2660cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2660d0:	e1a04000 	mov	r4, r0
        2660d4:	e20170ff 	and	r7, r1, #255	; 0xff
        2660d8:	eb659959 	bl	1bcc644 <TView::$VisibleDeep( const(void))>
        2660dc:	e3300000 	teq	r0, #0	; 0x0
        2660e0:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2660e4:	e24dd020 	sub	sp, sp, #32	; 0x20
        2660e8:	e1a01004 	mov	r1, r4
        2660ec:	e1a0000d 	mov	r0, sp
        2660f0:	eb659946 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
        2660f4:	e1a0100d 	mov	r1, sp
        2660f8:	e28d000c 	add	r0, sp, #12	; 0xc
        2660fc:	eb6084b6 	bl	1a873dc <TRegionVar::$__ct(TRegion &)>
        266100:	e1a0000d 	mov	r0, sp
        266104:	e3a01000 	mov	r1, #0	; 0x0
        266108:	eb608cdd 	bl	1a89484 <TRegion::$__dt(void)>
        26610c:	e28d1004 	add	r1, sp, #4	; 0x4
        266110:	e59f5164 	ldr	r5, [pc, #164]	; 26627c <TView::Hilite(unsigned char)+0x1b8>
        266114:	e5950000 	ldr	r0, [r5]
        266118:	eb61a5b4 	bl	1acf7f0 <TRootView::$GetCaretRect(TRect *)>
        26611c:	e24dd008 	sub	sp, sp, #8	; 0x8
        266120:	e1a0100d 	mov	r1, sp
        266124:	e1a00004 	mov	r0, r4
        266128:	e5942000 	ldr	r2, [r4]
        26612c:	e1a0e00f 	mov	lr, pc
        266130:	e282f024 	add	pc, r2, #36	; 0x24
        266134:	e1a0100d 	mov	r1, sp
        266138:	e28d000c 	add	r0, sp, #12	; 0xc
        26613c:	eb60db45 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
        266140:	e1b08000 	movs	r8, r0
        266144:	15950000 	ldrne	r0, [r5]
        266148:	1b61add5 	blne	1ad18a4 <TRootView::$HideCaret(void)>
        26614c:	e3a09000 	mov	r9, #0	; 0x0
        266150:	e3a06000 	mov	r6, #0	; 0x0
        266154:	e52d906c 	str	r9, [sp, -#108]!
        266158:	e28d0008 	add	r0, sp, #8	; 0x8
        26615c:	eb653204 	bl	1bb2974 <$setjmp>
        266160:	e3300000 	teq	r0, #0	; 0x0
        266164:	1a00004d 	bne	2662a0 <TView::Hilite(unsigned char)+0x1dc>
        266168:	e1a0000d 	mov	r0, sp
        26616c:	eb65e7c2 	bl	1be007c <$AddExceptionHandler>
        266170:	e1a00004 	mov	r0, r4
        266174:	e3a01016 	mov	r1, #22	; 0x16
        266178:	eb6590ee 	bl	1bca538 <TView::$GetCacheProto(long)>
        26617c:	e3300002 	teq	r0, #2	; 0x2
        266180:	0a00001f 	beq	266204 <TView::Hilite(unsigned char)+0x140>
        266184:	e24dd004 	sub	sp, sp, #4	; 0x4
        266188:	e3a00001 	mov	r0, #1	; 0x1
        26618c:	eb60d702 	bl	1a9bd9c <$MakeArray(long)>
        266190:	eb656fed 	bl	1bc214c <$AllocateRefHandle(long)>
        266194:	e3370000 	teq	r7, #0	; 0x0
        266198:	e58d0000 	str	r0, [sp]
        26619c:	0a000009 	beq	2661c8 <TView::Hilite(unsigned char)+0x104>
        2661a0:	e3a0001a 	mov	r0, #26	; 0x1a
        2661a4:	eb656fe8 	bl	1bc214c <$AllocateRefHandle(long)>
        2661a8:	e1a07000 	mov	r7, r0
        2661ac:	e5902000 	ldr	r2, [r0]
        2661b0:	e59d0000 	ldr	r0, [sp]
        2661b4:	e5900000 	ldr	r0, [r0]
        2661b8:	e1a01009 	mov	r1, r9
        2661bc:	eb658065 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2661c0:	e1a00007 	mov	r0, r7
        2661c4:	eb6573fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2661c8:	e3a03000 	mov	r3, #0	; 0x0
        2661cc:	e92d0008 	stmdb	sp!, {r3}
        2661d0:	e28d2004 	add	r2, sp, #4	; 0x4
        2661d4:	e1a00004 	mov	r0, r4
        2661d8:	e3a01016 	mov	r1, #22	; 0x16
        2661dc:	eb6594fe 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        2661e0:	e28dd004 	add	sp, sp, #4	; 0x4
        2661e4:	e2500002 	subs	r0, r0, #2	; 0x2
        2661e8:	13a00001 	movne	r0, #1	; 0x1
        2661ec:	e20070ff 	and	r7, r0, #255	; 0xff
        2661f0:	e59d0000 	ldr	r0, [sp]
        2661f4:	eb6573f0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2661f8:	e28dd004 	add	sp, sp, #4	; 0x4
        2661fc:	e3370000 	teq	r7, #0	; 0x0
        266200:	1a000023 	bne	266294 <TView::Hilite(unsigned char)+0x1d0>
        266204:	e24dd008 	sub	sp, sp, #8	; 0x8
        266208:	e2840010 	add	r0, r4, #16	; 0x10
        26620c:	e8901008 	ldmia	r0, {r3, ip}
        266210:	e88d1008 	stmia	sp, {r3, ip}
        266214:	e594000c 	ldr	r0, [r4, #12]	; fField12
        266218:	e1a01000 	mov	r1, r0
        26621c:	e2000803 	and	r0, r0, #196608	; 0x30000
        266220:	e1a00820 	mov	r0, r0, lsr #16
        266224:	e201140f 	and	r1, r1, #251658240	; 0xf000000
        266228:	e1a01c21 	mov	r1, r1, lsr #24
        26622c:	e1a07081 	mov	r7, r1, lsl #1
        266230:	e2601000 	rsb	r1, r0, #0	; 0x0
        266234:	e1a02001 	mov	r2, r1
        266238:	e1a0000d 	mov	r0, sp
        26623c:	eb63a97f 	bl	1b50840 <$InsetRect__FP4RectlT2>
        266240:	e3370000 	teq	r7, #0	; 0x0
        266244:	0a000009 	beq	266270 <TView::Hilite(unsigned char)+0x1ac>
        266248:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        26624c:	e2000c0f 	and	r0, r0, #3840	; 0xf00
        266250:	e1a00420 	mov	r0, r0, lsr #8
        266254:	e3500001 	cmp	r0, #1	; 0x1
        266258:	da000002 	ble	266268 <TView::Hilite(unsigned char)+0x1a4>
        26625c:	e2400001 	sub	r0, r0, #1	; 0x1
        266260:	e0577080 	subs	r7, r7, r0, lsl #1
        266264:	43a07000 	movmi	r7, #0	; 0x0
        266268:	e3370000 	teq	r7, #0	; 0x0
        26626c:	1a000003 	bne	266280 <TView::Hilite(unsigned char)+0x1bc>
        266270:	e1a0000d 	mov	r0, sp
        266274:	eb63a97a 	bl	1b50864 <$InvertRect(Rect *)>
        266278:	ea000004 	b	266290 <TView::Hilite(unsigned char)+0x1cc>
        26627c:	0c101934 	ldceq	9, cr1, [r0], -#208
        266280:	e1a0000d 	mov	r0, sp
        266284:	e1a02007 	mov	r2, r7
        266288:	e1a01007 	mov	r1, r7
        26628c:	eb63a976 	bl	1b5086c <$InvertRoundRect__FP4RectlT2>
        266290:	e28dd008 	add	sp, sp, #8	; 0x8
        266294:	e1a0000d 	mov	r0, sp
        266298:	eb65eb86 	bl	1be10b8 <$ExitHandler>
        26629c:	ea000000 	b	2662a4 <TView::Hilite(unsigned char)+0x1e0>
        2662a0:	e3a06001 	mov	r6, #1	; 0x1
        2662a4:	e3380000 	teq	r8, #0	; 0x0
        2662a8:	15950000 	ldrne	r0, [r5]
        2662ac:	1b60f3b9 	blne	1aa3198 <TRootView::$ShowCaret(void)>
        2662b0:	e59d4080 	ldr	r4, [sp, #128]
        2662b4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2662b8:	e1a0000d 	mov	r0, sp
        2662bc:	eb662538 	bl	1bef7a4 <$GetPort(GrafPort **)>
        2662c0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        2662c4:	e5900024 	ldr	r0, [r0, #36]	; fField36
        2662c8:	e58d0000 	str	r0, [sp]
        2662cc:	e1a00004 	mov	r0, r4
        2662d0:	e59d1000 	ldr	r1, [sp]
        2662d4:	eb639cf6 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        2662d8:	e28dd004 	add	sp, sp, #4	; 0x4
        2662dc:	e3360000 	teq	r6, #0	; 0x0
        2662e0:	11a0000d 	movne	r0, sp
        2662e4:	1b65ef9a 	blne	1be2154 <$NextHandler>
        2662e8:	e28dd074 	add	sp, sp, #116	; 0x74
        2662ec:	e28d000c 	add	r0, sp, #12	; 0xc
        2662f0:	e3a01000 	mov	r1, #0	; 0x0
        2662f4:	eb608852 	bl	1a88444 <TRegionVar::$__dt(void)>
        2662f8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TView::SelectNone(void)
 * Address: 002662fc
 */
TView::SelectNone(void) {
    /*
        2662fc:	e1a0c00d 	mov	ip, sp
        266300:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        266304:	e24cb004 	sub	fp, ip, #4	; 0x4
        266308:	e24dd00c 	sub	sp, sp, #12	; 0xc
        26630c:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        266310:	e1a0000d 	mov	r0, sp
        266314:	eb608846 	bl	1a88434 <TListLoop::$__ct(CList *)>
        266318:	e1a0000d 	mov	r0, sp
        26631c:	eb60dabf 	bl	1a9ce20 <TListLoop::$Next(void)>
        266320:	e1b04000 	movs	r4, r0
        266324:	0a00000e 	beq	266364 <TView::SelectNone(void)+0x68>
        266328:	e5940008 	ldr	r0, [r4, #8]	; fField8
        26632c:	e3100402 	tst	r0, #33554432	; 0x2000000
        266330:	0a000007 	beq	266354 <TView::SelectNone(void)+0x58>
        266334:	e1a00004 	mov	r0, r4
        266338:	e3a01000 	mov	r1, #0	; 0x0
        26633c:	e5942000 	ldr	r2, [r4]
        266340:	e1a0e00f 	mov	lr, pc
        266344:	e282f058 	add	pc, r2, #88	; 0x58
        266348:	e1a00004 	mov	r0, r4
        26634c:	e3a01402 	mov	r1, #33554432	; 0x2000000
        266350:	eb658c5d 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        266354:	e1a0000d 	mov	r0, sp
        266358:	eb60dab0 	bl	1a9ce20 <TListLoop::$Next(void)>
        26635c:	e1b04000 	movs	r4, r0
        266360:	1afffff0 	bne	266328 <TView::SelectNone(void)+0x2c>
        266364:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::Constructor(RefVar const &, TView *)
 * Address: 00266368
 */
TView::Constructor(RefVar const &, TView *) {
    /*
        266368:	e1a0c00d 	mov	ip, sp
        26636c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        266370:	e24cb004 	sub	fp, ip, #4	; 0x4
        266374:	e1a04000 	mov	r4, r0
        266378:	e1a06001 	mov	r6, r1
        26637c:	e1a05002 	mov	r5, r2
        266380:	e59f05d4 	ldr	r0, [pc, #5d4]	; 26695c <TView::Constructor(RefVar const &, TView *)+0x5f4>
        266384:	e5900000 	ldr	r0, [r0]
        266388:	e5840020 	str	r0, [r4, #32]	; fField32
        26638c:	e584201c 	str	r2, [r4, #28]	; fField28
        266390:	e5911000 	ldr	r1, [r1]
        266394:	e5911000 	ldr	r1, [r1]
        266398:	e5940024 	ldr	r0, [r4, #36]	; fField36
        26639c:	e5801000 	str	r1, [r0]
        2663a0:	e3e00000 	mvn	r0, #0	; 0x0
        2663a4:	e5840018 	str	r0, [r4, #24]	; fField24
        2663a8:	e3a00801 	mov	r0, #65536	; 0x10000
        2663ac:	e2400001 	sub	r0, r0, #1	; 0x1
        2663b0:	e584002c 	str	r0, [r4, #44]	; fField44
        2663b4:	e59f05a4 	ldr	r0, [pc, #5a4]	; 266960 <TView::Constructor(RefVar const &, TView *)+0x5f8>
        2663b8:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2663bc:	e2811001 	add	r1, r1, #1	; 0x1
        2663c0:	e5a01004 	str	r1, [r0, #4]!	; fField4
        2663c4:	e5841004 	str	r1, [r4, #4]	; fField4
        2663c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2663cc:	e1350004 	teq	r5, r4
        2663d0:	0a000003 	beq	2663e4 <TView::Constructor(RefVar const &, TView *)+0x7c>
        2663d4:	e2852024 	add	r2, r5, #36	; 0x24
        2663d8:	e59f1584 	ldr	r1, [pc, #584]	; 266964 <TView::Constructor(RefVar const &, TView *)+0x5fc>
        2663dc:	e1a00006 	mov	r0, r6
        2663e0:	eb657fe0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2663e4:	e1a00004 	mov	r0, r4
        2663e8:	eb608c3f 	bl	1a894ec <$AddressToRef(void *)>
        2663ec:	eb656f56 	bl	1bc214c <$AllocateRefHandle(long)>
        2663f0:	e58d0000 	str	r0, [sp]
        2663f4:	e1a0200d 	mov	r2, sp
        2663f8:	e59f1568 	ldr	r1, [pc, #568]	; 266968 <TView::Constructor(RefVar const &, TView *)+0x600>
        2663fc:	e1a00006 	mov	r0, r6
        266400:	eb657fd8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        266404:	e59d0000 	ldr	r0, [sp]
        266408:	eb65736b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26640c:	e3a0a000 	mov	sl, #0	; 0x0
        266410:	e24dd008 	sub	sp, sp, #8	; 0x8
        266414:	e3a00002 	mov	r0, #2	; 0x2
        266418:	eb656f4b 	bl	1bc214c <$AllocateRefHandle(long)>
        26641c:	e58d0004 	str	r0, [sp, #4]	; fField4
        266420:	e1a00004 	mov	r0, r4
        266424:	e3a01017 	mov	r1, #23	; 0x17
        266428:	eb659042 	bl	1bca538 <TView::$GetCacheProto(long)>
        26642c:	eb656f46 	bl	1bc214c <$AllocateRefHandle(long)>
        266430:	e58d0000 	str	r0, [sp]
        266434:	e5900000 	ldr	r0, [r0]
        266438:	e59f9524 	ldr	r9, [pc, #524]	; 266964 <TView::Constructor(RefVar const &, TView *)+0x5fc>
        26643c:	e3300002 	teq	r0, #2	; 0x2
        266440:	0a000027 	beq	2664e4 <TView::Constructor(RefVar const &, TView *)+0x17c>
        266444:	eb657b98 	bl	1bc52ac <$Length(long)>
        266448:	e1a08000 	mov	r8, r0
        26644c:	e3a07000 	mov	r7, #0	; 0x0
        266450:	e3500000 	cmp	r0, #0	; 0x0
        266454:	da000022 	ble	2664e4 <TView::Constructor(RefVar const &, TView *)+0x17c>
        266458:	e24dd008 	sub	sp, sp, #8	; 0x8
        26645c:	e2871001 	add	r1, r7, #1	; 0x1
        266460:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        266464:	e5900000 	ldr	r0, [r0]
        266468:	eb657779 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        26646c:	eb656f36 	bl	1bc214c <$AllocateRefHandle(long)>
        266470:	e58d0000 	str	r0, [sp]
        266474:	e1a0100d 	mov	r1, sp
        266478:	e1a00005 	mov	r0, r5
        26647c:	e3a02001 	mov	r2, #1	; 0x1
        266480:	eb609441 	bl	1a8b58c <TView::$BuildContext(RefVar const &, unsigned char)>
        266484:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        266488:	e5810000 	str	r0, [r1]
        26648c:	e59d0000 	ldr	r0, [sp]
        266490:	eb657349 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        266494:	e1a02006 	mov	r2, r6
        266498:	e1a01009 	mov	r1, r9
        26649c:	e28d000c 	add	r0, sp, #12	; 0xc
        2664a0:	eb657fb0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2664a4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2664a8:	e5900000 	ldr	r0, [r0]
        2664ac:	e1a01007 	mov	r1, r7
        2664b0:	eb657767 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2664b4:	eb656f24 	bl	1bc214c <$AllocateRefHandle(long)>
        2664b8:	e58d0004 	str	r0, [sp, #4]	; fField4
        2664bc:	e28d1004 	add	r1, sp, #4	; 0x4
        2664c0:	e28d200c 	add	r2, sp, #12	; 0xc
        2664c4:	e1a00004 	mov	r0, r4
        2664c8:	eb61da53 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        2664cc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2664d0:	eb657339 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2664d4:	e28dd008 	add	sp, sp, #8	; 0x8
        2664d8:	e2877002 	add	r7, r7, #2	; 0x2
        2664dc:	e1570008 	cmp	r7, r8
        2664e0:	baffffdc 	blt	266458 <TView::Constructor(RefVar const &, TView *)+0xf0>
        2664e4:	e1a00004 	mov	r0, r4
        2664e8:	e3a0101c 	mov	r1, #28	; 0x1c
        2664ec:	eb659011 	bl	1bca538 <TView::$GetCacheProto(long)>
        2664f0:	e59d1000 	ldr	r1, [sp]
        2664f4:	e5810000 	str	r0, [r1]
        2664f8:	e3300002 	teq	r0, #2	; 0x2
        2664fc:	0a000027 	beq	2665a0 <TView::Constructor(RefVar const &, TView *)+0x238>
        266500:	eb657b69 	bl	1bc52ac <$Length(long)>
        266504:	e1a08000 	mov	r8, r0
        266508:	e3a07000 	mov	r7, #0	; 0x0
        26650c:	e3500000 	cmp	r0, #0	; 0x0
        266510:	da000022 	ble	2665a0 <TView::Constructor(RefVar const &, TView *)+0x238>
        266514:	e24dd008 	sub	sp, sp, #8	; 0x8
        266518:	e2871001 	add	r1, r7, #1	; 0x1
        26651c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        266520:	e5900000 	ldr	r0, [r0]
        266524:	eb65774a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        266528:	eb656f07 	bl	1bc214c <$AllocateRefHandle(long)>
        26652c:	e58d0000 	str	r0, [sp]
        266530:	e1a0100d 	mov	r1, sp
        266534:	e1a00005 	mov	r0, r5
        266538:	e3a02001 	mov	r2, #1	; 0x1
        26653c:	eb609412 	bl	1a8b58c <TView::$BuildContext(RefVar const &, unsigned char)>
        266540:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        266544:	e5810000 	str	r0, [r1]
        266548:	e59d0000 	ldr	r0, [sp]
        26654c:	eb65731a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        266550:	e1a02006 	mov	r2, r6
        266554:	e1a01009 	mov	r1, r9
        266558:	e28d000c 	add	r0, sp, #12	; 0xc
        26655c:	eb657f81 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        266560:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        266564:	e5900000 	ldr	r0, [r0]
        266568:	e1a01007 	mov	r1, r7
        26656c:	eb657738 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        266570:	eb656ef5 	bl	1bc214c <$AllocateRefHandle(long)>
        266574:	e58d0004 	str	r0, [sp, #4]	; fField4
        266578:	e28d1004 	add	r1, sp, #4	; 0x4
        26657c:	e28d200c 	add	r2, sp, #12	; 0xc
        266580:	e1a00004 	mov	r0, r4
        266584:	eb61da24 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        266588:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        26658c:	eb65730a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        266590:	e28dd008 	add	sp, sp, #8	; 0x8
        266594:	e2877002 	add	r7, r7, #2	; 0x2
        266598:	e1570008 	cmp	r7, r8
        26659c:	baffffdc 	blt	266514 <TView::Constructor(RefVar const &, TView *)+0x1ac>
        2665a0:	e1a00004 	mov	r0, r4
        2665a4:	e3a01201 	mov	r1, #268435456	; 0x10000000
        2665a8:	eb659413 	bl	1bcb5fc <TView::$SetFlags(unsigned long)>
        2665ac:	e1a00004 	mov	r0, r4
        2665b0:	e5941000 	ldr	r1, [r4]
        2665b4:	e1a0e00f 	mov	lr, pc
        2665b8:	e281f034 	add	pc, r1, #52	; 0x34
        2665bc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2665c0:	e2000209 	and	r0, r0, #-1879048192	; 0x90000000
        2665c4:	e59f73a0 	ldr	r7, [pc, #3a0]	; 26696c <TView::Constructor(RefVar const &, TView *)+0x604>
        2665c8:	e3300209 	teq	r0, #-1879048192	; 0x90000000
        2665cc:	1a000007 	bne	2665f0 <TView::Constructor(RefVar const &, TView *)+0x288>
        2665d0:	e1a00004 	mov	r0, r4
        2665d4:	e3a01219 	mov	r1, #-1879048191	; 0x90000001
        2665d8:	eb658bbb 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        2665dc:	e3a02000 	mov	r2, #0	; 0x0
        2665e0:	e3e01f4d 	mvn	r1, #308	; 0x134
        2665e4:	e2411a02 	sub	r1, r1, #8192	; 0x2000
        2665e8:	e5970000 	ldr	r0, [r7]
        2665ec:	eb65f2ea 	bl	1be319c <$Throw>
        2665f0:	e1a00004 	mov	r0, r4
        2665f4:	e3a01201 	mov	r1, #268435456	; 0x10000000
        2665f8:	eb658bb3 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        2665fc:	e5950008 	ldr	r0, [r5, #8]	; fField8
        266600:	e3100080 	tst	r0, #128	; 0x80
        266604:	11a00004 	movne	r0, r4
        266608:	13a01080 	movne	r1, #128	; 0x80
        26660c:	1b6593fa 	blne	1bcb5fc <TView::$SetFlags(unsigned long)>
        266610:	e1a00004 	mov	r0, r4
        266614:	e3a0100a 	mov	r1, #10	; 0xa
        266618:	eb658fc6 	bl	1bca538 <TView::$GetCacheProto(long)>
        26661c:	e59d1000 	ldr	r1, [sp]
        266620:	e5810000 	str	r0, [r1]
        266624:	e3100003 	tst	r0, #3	; 0x3
        266628:	01a00140 	moveq	r0, r0, asr #2
        26662c:	0a000000 	beq	266634 <TView::Constructor(RefVar const &, TView *)+0x2cc>
        266630:	eb656eb9 	bl	1bc211c <$_RINTError(long)>
        266634:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
        266638:	e5941008 	ldr	r1, [r4, #8]	; fField8
        26663c:	e1800001 	orr	r0, r0, r1
        266640:	e5840008 	str	r0, [r4, #8]	; fField8
        266644:	e59f1324 	ldr	r1, [pc, #324]	; 266970 <TView::Constructor(RefVar const &, TView *)+0x608>
        266648:	e1a00004 	mov	r0, r4
        26664c:	eb658fbd 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        266650:	e59d1000 	ldr	r1, [sp]
        266654:	e5810000 	str	r0, [r1]
        266658:	e1a01000 	mov	r1, r0
        26665c:	e3300002 	teq	r0, #2	; 0x2
        266660:	0a000006 	beq	266680 <TView::Constructor(RefVar const &, TView *)+0x318>
        266664:	e1a00001 	mov	r0, r1
        266668:	e3110003 	tst	r1, #3	; 0x3
        26666c:	01a00140 	moveq	r0, r0, asr #2
        266670:	0a000000 	beq	266678 <TView::Constructor(RefVar const &, TView *)+0x310>
        266674:	eb656ea8 	bl	1bc211c <$_RINTError(long)>
        266678:	e3c00103 	bic	r0, r0, #-1073741824	; 0xc0000000
        26667c:	e584000c 	str	r0, [r4, #12]	; fField12
        266680:	e59f82ec 	ldr	r8, [pc, #2ec]	; 266974 <TView::Constructor(RefVar const &, TView *)+0x60c>	; fField2
        266684:	e5980000 	ldr	r0, [r8]
        266688:	e1350000 	teq	r5, r0
        26668c:	1a00000e 	bne	2666cc <TView::Constructor(RefVar const &, TView *)+0x364>
        266690:	e1340000 	teq	r4, r0
        266694:	0a00000c 	beq	2666cc <TView::Constructor(RefVar const &, TView *)+0x364>
        266698:	e24dd004 	sub	sp, sp, #4	; 0x4
        26669c:	e3a00000 	mov	r0, #0	; 0x0
        2666a0:	eb608762 	bl	1a88430 <TClipper::$__ct(void)>
        2666a4:	eb608b90 	bl	1a894ec <$AddressToRef(void *)>
        2666a8:	eb656ea7 	bl	1bc214c <$AllocateRefHandle(long)>
        2666ac:	e58d0000 	str	r0, [sp]
        2666b0:	e1a0200d 	mov	r2, sp
        2666b4:	e59f12bc 	ldr	r1, [pc, #2bc]	; 266978 <TView::Constructor(RefVar const &, TView *)+0x610>	; fField2
        2666b8:	e1a00006 	mov	r0, r6
        2666bc:	eb657f29 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2666c0:	e59d0000 	ldr	r0, [sp]
        2666c4:	eb6572bc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2666c8:	e28dd004 	add	sp, sp, #4	; 0x4
        2666cc:	e1350004 	teq	r5, r4
        2666d0:	11a01004 	movne	r1, r4
        2666d4:	11a00005 	movne	r0, r5
        2666d8:	1b658b6f 	blne	1bc949c <TView::$AddView(TView *)>
        2666dc:	e52da06c 	str	sl, [sp, -#108]!
        2666e0:	e28d0008 	add	r0, sp, #8	; 0x8
        2666e4:	eb6530a2 	bl	1bb2974 <$setjmp>
        2666e8:	e3300000 	teq	r0, #0	; 0x0
        2666ec:	1a00010d 	bne	266b28 <TView::Constructor(RefVar const &, TView *)+0x7c0>
        2666f0:	e1a0000d 	mov	r0, sp
        2666f4:	eb65e660 	bl	1be007c <$AddExceptionHandler>
        2666f8:	e59f127c 	ldr	r1, [pc, #27c]	; 26697c <TView::Constructor(RefVar const &, TView *)+0x614>
        2666fc:	e1a09001 	mov	r9, r1
        266700:	e1a00004 	mov	r0, r4
        266704:	eb658f8f 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        266708:	e59d106c 	ldr	r1, [sp, #108]
        26670c:	e5810000 	str	r0, [r1]
        266710:	e3300002 	teq	r0, #2	; 0x2
        266714:	1a000004 	bne	26672c <TView::Constructor(RefVar const &, TView *)+0x3c4>
        266718:	e3a02000 	mov	r2, #0	; 0x0
        26671c:	e3e01f4e 	mvn	r1, #312	; 0x138
        266720:	e2411a02 	sub	r1, r1, #8192	; 0x2000
        266724:	e5970000 	ldr	r0, [r7]
        266728:	eb65f29b 	bl	1be319c <$Throw>
        26672c:	e24dd008 	sub	sp, sp, #8	; 0x8
        266730:	e1a0100d 	mov	r1, sp
        266734:	e28d0074 	add	r0, sp, #116	; 0x74
        266738:	eb60b8ce 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        26673c:	e3300000 	teq	r0, #0	; 0x0
        266740:	028f0f8e 	addeq	r0, pc, #568	; 0x238
        266744:	0b65f295 	bleq	1be31a0 <$ThrowMsg>
        266748:	e1a0100d 	mov	r1, sp
        26674c:	e1a00004 	mov	r0, r4
        266750:	e5942000 	ldr	r2, [r4]
        266754:	e1a0e00f 	mov	lr, pc
        266758:	e282f02c 	add	pc, r2, #44	; 0x2c
        26675c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        266760:	e3100004 	tst	r0, #4	; 0x4
        266764:	e2847010 	add	r7, r4, #16	; 0x10
        266768:	15980000 	ldrne	r0, [r8]
        26676c:	11340000 	teqne	r4, r0
        266770:	0a000035 	beq	26684c <TView::Constructor(RefVar const &, TView *)+0x4e4>
        266774:	e5940028 	ldr	r0, [r4, #40]	; fField40
        266778:	e31000c0 	tst	r0, #192	; 0xc0
        26677c:	1a000032 	bne	26684c <TView::Constructor(RefVar const &, TView *)+0x4e4>
        266780:	e5971004 	ldr	r1, [r7, #4]	; fField4
        266784:	e59f0208 	ldr	r0, [pc, #208]	; 266994 <TView::Constructor(RefVar const &, TView *)+0x62c>
        266788:	e5900000 	ldr	r0, [r0]
        26678c:	e0601841 	rsb	r1, r0, r1, asr #16
        266790:	e3510000 	cmp	r1, #0	; 0x0
        266794:	da00002c 	ble	26684c <TView::Constructor(RefVar const &, TView *)+0x4e4>
        266798:	e59d2002 	ldr	r2, [sp, #2]	; fField2
        26679c:	e0421001 	sub	r1, r2, r1
        2667a0:	e5cd1001 	strb	r1, [sp, #1]
        2667a4:	e1a01441 	mov	r1, r1, asr #8
        2667a8:	e5cd1000 	strb	r1, [sp]
        2667ac:	e59d1000 	ldr	r1, [sp]
        2667b0:	e1b01841 	movs	r1, r1, asr #16
        2667b4:	45cda001 	strmib	sl, [sp, #1]
        2667b8:	45cda000 	strmib	sl, [sp]
        2667bc:	e5cd0005 	strb	r0, [sp, #5]
        2667c0:	e1a00440 	mov	r0, r0, asr #8
        2667c4:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        2667c8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2667cc:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2667d0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2667d4:	e58d0004 	str	r0, [sp, #4]	; fField4
        2667d8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2667dc:	e2600000 	rsb	r0, r0, #0	; 0x0
        2667e0:	e1a00800 	mov	r0, r0, lsl #16
        2667e4:	e1a00840 	mov	r0, r0, asr #16
        2667e8:	e59d1006 	ldr	r1, [sp, #6]
        2667ec:	e2611000 	rsb	r1, r1, #0	; 0x0
        2667f0:	e1a01801 	mov	r1, r1, lsl #16
        2667f4:	e1a01841 	mov	r1, r1, asr #16
        2667f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2667fc:	e5cd0003 	strb	r0, [sp, #3]
        266800:	e1a00440 	mov	r0, r0, asr #8
        266804:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        266808:	e5cd1001 	strb	r1, [sp, #1]
        26680c:	e1a00441 	mov	r0, r1, asr #8
        266810:	e5cd0000 	strb	r0, [sp]
        266814:	e49d0004 	ldr	r0, [sp], #4	; fField4
        266818:	e58d0000 	str	r0, [sp]
        26681c:	e28d0008 	add	r0, sp, #8	; 0x8
        266820:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        266824:	e1a01841 	mov	r1, r1, asr #16
        266828:	e59d2000 	ldr	r2, [sp]
        26682c:	e1a02842 	mov	r2, r2, asr #16
        266830:	eb63ac2c 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        266834:	e28dd008 	add	sp, sp, #8	; 0x8
        266838:	e1a0100d 	mov	r1, sp
        26683c:	e1a00004 	mov	r0, r4
        266840:	e5942000 	ldr	r2, [r4]
        266844:	e1a0e00f 	mov	lr, pc
        266848:	e282f02c 	add	pc, r2, #44	; 0x2c
        26684c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        266850:	e3100001 	tst	r0, #1	; 0x1
        266854:	0a000007 	beq	266878 <TView::Constructor(RefVar const &, TView *)+0x510>
        266858:	e1a00004 	mov	r0, r4
        26685c:	eb658f43 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        266860:	e3300000 	teq	r0, #0	; 0x0
        266864:	0a000003 	beq	266878 <TView::Constructor(RefVar const &, TView *)+0x510>
        266868:	e1a01004 	mov	r1, r4
        26686c:	e1a00005 	mov	r0, r5
        266870:	e3a02000 	mov	r2, #0	; 0x0
        266874:	eb659771 	bl	1bcc640 <TView::$ViewVisibleChanged(TView *, unsigned char)>
        266878:	e59f1118 	ldr	r1, [pc, #118]	; 266998 <TView::Constructor(RefVar const &, TView *)+0x630>
        26687c:	e1a00004 	mov	r0, r4
        266880:	eb658f30 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        266884:	e59d1074 	ldr	r1, [sp, #116]
        266888:	e5810000 	str	r0, [r1]
        26688c:	e3300002 	teq	r0, #2	; 0x2
        266890:	0a000003 	beq	2668a4 <TView::Constructor(RefVar const &, TView *)+0x53c>
        266894:	e1a02006 	mov	r2, r6
        266898:	e28d1074 	add	r1, sp, #116	; 0x74
        26689c:	e1a00006 	mov	r0, r6
        2668a0:	eb657eb0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2668a4:	e1a00004 	mov	r0, r4
        2668a8:	e3a01000 	mov	r1, #0	; 0x0
        2668ac:	eb658afb 	bl	1bc94a0 <TView::$AddViews(unsigned char)>
        2668b0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2668b4:	e3100902 	tst	r0, #32768	; 0x8000
        2668b8:	0a000076 	beq	266a98 <TView::Constructor(RefVar const &, TView *)+0x730>
        2668bc:	e24dd014 	sub	sp, sp, #20	; 0x14
        2668c0:	e3a05001 	mov	r5, #1	; 0x1
        2668c4:	e1a0000d 	mov	r0, sp
        2668c8:	e5941020 	ldr	r1, [r4, #32]	; fField32
        2668cc:	eb6086d8 	bl	1a88434 <TListLoop::$__ct(CList *)>
        2668d0:	e1a0000d 	mov	r0, sp
        2668d4:	eb60d951 	bl	1a9ce20 <TListLoop::$Next(void)>
        2668d8:	e3300000 	teq	r0, #0	; 0x0
        2668dc:	0a00006c 	beq	266a94 <TView::Constructor(RefVar const &, TView *)+0x72c>
        2668e0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2668e4:	e2800010 	add	r0, r0, #16	; 0x10
        2668e8:	e8901008 	ldmia	r0, {r3, ip}
        2668ec:	e88d1008 	stmia	sp, {r3, ip}
        2668f0:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        2668f4:	e1a01841 	mov	r1, r1, asr #16
        2668f8:	e59d0006 	ldr	r0, [sp, #6]
        2668fc:	e1310840 	teq	r1, r0, asr #16
        266900:	1a000004 	bne	266918 <TView::Constructor(RefVar const &, TView *)+0x5b0>
        266904:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        266908:	e2800001 	add	r0, r0, #1	; 0x1
        26690c:	e5cd0007 	strb	r0, [sp, #7]
        266910:	e1a00440 	mov	r0, r0, asr #8
        266914:	e5cd0006 	strb	r0, [sp, #6]
        266918:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        26691c:	e1a01841 	mov	r1, r1, asr #16
        266920:	e59d0000 	ldr	r0, [sp]
        266924:	e1310840 	teq	r1, r0, asr #16
        266928:	1a000004 	bne	266940 <TView::Constructor(RefVar const &, TView *)+0x5d8>
        26692c:	e59d0006 	ldr	r0, [sp, #6]
        266930:	e2800001 	add	r0, r0, #1	; 0x1
        266934:	e5cd0005 	strb	r0, [sp, #5]
        266938:	e1a00440 	mov	r0, r0, asr #8
        26693c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        266940:	e3350000 	teq	r5, #0	; 0x0
        266944:	0a000014 	beq	26699c <TView::Constructor(RefVar const &, TView *)+0x634>
        266948:	e28d1014 	add	r1, sp, #20	; 0x14
        26694c:	e89d1008 	ldmia	sp, {r3, ip}
        266950:	e8811008 	stmia	r1, {r3, ip}
        266954:	e3a05000 	mov	r5, #0	; 0x0
        266958:	ea000012 	b	2669a8 <TView::Constructor(RefVar const &, TView *)+0x640>
        26695c:	0c101930 	ldceq	9, cr1, [r0], -#192
        266960:	0c104f58 	ldceq	15, cr4, [r0], -#352
        266964:	00685388 	rsbeq	r5, r8, r8, lsl #7
        266968:	00684f48 	rsbeq	r4, r8, r8, asr #30
        26696c:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        266970:	00684fd0 	ldreqd	r4, [r8], -#240
        266974:	0c101934 	ldceq	9, cr1, [r0], -#208
        266978:	00684f40 	rsbeq	r4, r8, r0, asr #30
        26697c:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        266980:	62616420 	rsbvs	r6, r1, #536870912	; 0x20000000
        266984:	626f756e 	rsbvs	r7, pc, #461373440	; 0x1b800000
        266988:	64732066 	ldrvsbt	r2, [r3], -#102
        26698c:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        266990:	00000000 	andeq	r0, r0, r0
        266994:	0c104c5c 	ldceq	12, cr4, [r0], -#368
        266998:	00682860 	rsbeq	r2, r8, r0, ror #16
        26699c:	e1a0100d 	mov	r1, sp
        2669a0:	e28d0014 	add	r0, sp, #20	; 0x14
        2669a4:	eb60fa39 	bl	1aa5290 <TRect::$Union(TRect const &)>
        2669a8:	e28dd008 	add	sp, sp, #8	; 0x8
        2669ac:	e1a0000d 	mov	r0, sp
        2669b0:	eb60d91a 	bl	1a9ce20 <TListLoop::$Next(void)>
        2669b4:	e3300000 	teq	r0, #0	; 0x0
        2669b8:	1affffc8 	bne	2668e0 <TView::Constructor(RefVar const &, TView *)+0x578>
        2669bc:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2669c0:	e2000030 	and	r0, r0, #48	; 0x30
        2669c4:	e3300010 	teq	r0, #16	; 0x10
        2669c8:	0a00003e 	beq	266ac8 <TView::Constructor(RefVar const &, TView *)+0x760>
        2669cc:	e3300020 	teq	r0, #32	; 0x20
        2669d0:	05941016 	ldreq	r1, [r4, #22]	; fField22
        2669d4:	01a01841 	moveq	r1, r1, asr #16
        2669d8:	059d0012 	ldreq	r0, [sp, #18]	; fField18
        2669dc:	01a00840 	moveq	r0, r0, asr #16
        2669e0:	15941012 	ldrne	r1, [r4, #18]	; fField18
        2669e4:	11a01841 	movne	r1, r1, asr #16
        2669e8:	159d000e 	ldrne	r0, [sp, #14]
        2669ec:	11a00840 	movne	r0, r0, asr #16
        2669f0:	e0411000 	sub	r1, r1, r0
        2669f4:	e28d000c 	add	r0, sp, #12	; 0xc
        2669f8:	e1a0200a 	mov	r2, sl
        2669fc:	eb63abb9 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        266a00:	e5940028 	ldr	r0, [r4, #40]	; fField40
        266a04:	e20000c0 	and	r0, r0, #192	; 0xc0
        266a08:	e3300040 	teq	r0, #64	; 0x40
        266a0c:	0a000039 	beq	266af8 <TView::Constructor(RefVar const &, TView *)+0x790>
        266a10:	e3300080 	teq	r0, #128	; 0x80
        266a14:	05940014 	ldreq	r0, [r4, #20]	; fField20
        266a18:	01a00840 	moveq	r0, r0, asr #16
        266a1c:	059d1010 	ldreq	r1, [sp, #16]	; fField16
        266a20:	01a01841 	moveq	r1, r1, asr #16
        266a24:	15940010 	ldrne	r0, [r4, #16]	; fField16
        266a28:	11a00840 	movne	r0, r0, asr #16
        266a2c:	159d100c 	ldrne	r1, [sp, #12]	; fField12
        266a30:	11a01841 	movne	r1, r1, asr #16
        266a34:	e0402001 	sub	r2, r0, r1
        266a38:	e28d000c 	add	r0, sp, #12	; 0xc
        266a3c:	e1a0100a 	mov	r1, sl
        266a40:	eb63aba8 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        266a44:	e28d000c 	add	r0, sp, #12	; 0xc
        266a48:	e8905000 	ldmia	r0, {ip, lr}
        266a4c:	e8875000 	stmia	r7, {ip, lr}
        266a50:	e24dd00c 	sub	sp, sp, #12	; 0xc
        266a54:	e28d1004 	add	r1, sp, #4	; 0x4
        266a58:	e1a00004 	mov	r0, r4
        266a5c:	eb60a362 	bl	1a8f7ec <TView::$DejustifyBounds(TRect *)>
        266a60:	e28d0004 	add	r0, sp, #4	; 0x4
        266a64:	eb66234c 	bl	1bef79c <$ToObject(TRect const &)>
        266a68:	eb656db7 	bl	1bc214c <$AllocateRefHandle(long)>
        266a6c:	e58d0000 	str	r0, [sp]
        266a70:	e1a0200d 	mov	r2, sp
        266a74:	e1a01009 	mov	r1, r9
        266a78:	e1a00004 	mov	r0, r4
        266a7c:	eb61d8e7 	bl	1adce20 <TView::$SetDataSlot(RefVar const &, RefVar const &)>
        266a80:	e59d0000 	ldr	r0, [sp]
        266a84:	eb6571cc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        266a88:	e1a00004 	mov	r0, r4
        266a8c:	eb6592cb 	bl	1bcb5c0 <TView::$RecalcBounds(void)>
        266a90:	e28dd00c 	add	sp, sp, #12	; 0xc
        266a94:	e28dd014 	add	sp, sp, #20	; 0x14
        266a98:	e1a00004 	mov	r0, r4
        266a9c:	e5941000 	ldr	r1, [r4]
        266aa0:	e1a0e00f 	mov	lr, pc
        266aa4:	e281f038 	add	pc, r1, #56	; 0x38
        266aa8:	e28dd008 	add	sp, sp, #8	; 0x8
        266aac:	e1a0000d 	mov	r0, sp
        266ab0:	eb65e980 	bl	1be10b8 <$ExitHandler>
        266ab4:	e5bd006c 	ldr	r0, [sp, #108]!
        266ab8:	eb6571bf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        266abc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        266ac0:	eb6571bd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        266ac4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        266ac8:	e5940012 	ldr	r0, [r4, #18]	; fField18
        266acc:	e1a00840 	mov	r0, r0, asr #16
        266ad0:	e5941016 	ldr	r1, [r4, #22]	; fField22
        266ad4:	e0802841 	add	r2, r0, r1, asr #16
        266ad8:	e59d100e 	ldr	r1, [sp, #14]
        266adc:	e1a01841 	mov	r1, r1, asr #16
        266ae0:	e59d0012 	ldr	r0, [sp, #18]	; fField18
        266ae4:	e0810840 	add	r0, r1, r0, asr #16
        266ae8:	e0421000 	sub	r1, r2, r0
        266aec:	e0811fa1 	add	r1, r1, r1, lsr #31
        266af0:	e1a010c1 	mov	r1, r1, asr #1
        266af4:	eaffffbe 	b	2669f4 <TView::Constructor(RefVar const &, TView *)+0x68c>
        266af8:	e5941010 	ldr	r1, [r4, #16]	; fField16
        266afc:	e1a01841 	mov	r1, r1, asr #16
        266b00:	e5940014 	ldr	r0, [r4, #20]	; fField20
        266b04:	e0812840 	add	r2, r1, r0, asr #16
        266b08:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        266b0c:	e1a01841 	mov	r1, r1, asr #16
        266b10:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        266b14:	e0810840 	add	r0, r1, r0, asr #16
        266b18:	e0422000 	sub	r2, r2, r0
        266b1c:	e0822fa2 	add	r2, r2, r2, lsr #31
        266b20:	e1a020c2 	mov	r2, r2, asr #1
        266b24:	eaffffc3 	b	266a38 <TView::Constructor(RefVar const &, TView *)+0x6d0>
        266b28:	e5940008 	ldr	r0, [r4, #8]	; fField8
        266b2c:	e3100001 	tst	r0, #1	; 0x1
        266b30:	0a000007 	beq	266b54 <TView::Constructor(RefVar const &, TView *)+0x7ec>
        266b34:	e1a00004 	mov	r0, r4
        266b38:	eb658e8c 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        266b3c:	e3300000 	teq	r0, #0	; 0x0
        266b40:	0a000003 	beq	266b54 <TView::Constructor(RefVar const &, TView *)+0x7ec>
        266b44:	e1a01004 	mov	r1, r4
        266b48:	e1a00005 	mov	r0, r5
        266b4c:	e3a02000 	mov	r2, #0	; 0x0
        266b50:	eb6596ba 	bl	1bcc640 <TView::$ViewVisibleChanged(TView *, unsigned char)>
        266b54:	e1a01004 	mov	r1, r4
        266b58:	e5950020 	ldr	r0, [r5, #32]	; fField32
        266b5c:	eb6616b1 	bl	1bec628 <CList::$Remove(void *)>
        266b60:	e1a0000d 	mov	r0, sp
        266b64:	eb65ed7a 	bl	1be2154 <$NextHandler>
        266b68:	eaffffee 	b	266b28 <TView::Constructor(RefVar const &, TView *)+0x7c0>
    */
}

/**
 * Symbol: TView::Select(unsigned char, unsigned char)
 * Address: 00266b6c
 */
TView::Select(unsigned char, unsigned char) {
    /*
        266b6c:	e1a0c00d 	mov	ip, sp
        266b70:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        266b74:	e24cb004 	sub	fp, ip, #4	; 0x4
        266b78:	e1a04000 	mov	r4, r0
        266b7c:	e20150ff 	and	r5, r1, #255	; 0xff
        266b80:	e31200ff 	tst	r2, #255	; 0xff
        266b84:	1594001c 	ldrne	r0, [r4, #28]	; fField28
        266b88:	1b659296 	blne	1bcb5e8 <TView::$SelectNone(void)>
        266b8c:	e3350000 	teq	r5, #0	; 0x0
        266b90:	0a00000c 	beq	266bc8 <TView::Select(unsigned char, unsigned char)+0x5c>
        266b94:	e5940008 	ldr	r0, [r4, #8]	; fField8
        266b98:	e3100402 	tst	r0, #33554432	; 0x2000000
        266b9c:	1a000007 	bne	266bc0 <TView::Select(unsigned char, unsigned char)+0x54>
        266ba0:	e1a00004 	mov	r0, r4
        266ba4:	e3a01402 	mov	r1, #33554432	; 0x2000000
        266ba8:	eb659293 	bl	1bcb5fc <TView::$SetFlags(unsigned long)>
        266bac:	e1a00004 	mov	r0, r4
        266bb0:	e3a01001 	mov	r1, #1	; 0x1
        266bb4:	e5942000 	ldr	r2, [r4]
        266bb8:	e1a0e00f 	mov	lr, pc
        266bbc:	e282f058 	add	pc, r2, #88	; 0x58
        266bc0:	e3350000 	teq	r5, #0	; 0x0
        266bc4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        266bc8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        266bcc:	e3100402 	tst	r0, #33554432	; 0x2000000
        266bd0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        266bd4:	e1a00004 	mov	r0, r4
        266bd8:	e3a01402 	mov	r1, #33554432	; 0x2000000
        266bdc:	eb658a3a 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        266be0:	e1a00004 	mov	r0, r4
        266be4:	e3a01000 	mov	r1, #0	; 0x0
        266be8:	e5942000 	ldr	r2, [r4]
        266bec:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        266bf0:	e282f058 	add	pc, r2, #88	; 0x58
    */
}

/**
 * Symbol: TView::Drag(TStrokePublic *, TRect const &)
 * Address: 00266bf4
 */
TView::Drag(TStrokePublic *, TRect const &) {
    /*
        266bf4:	e1a0c00d 	mov	ip, sp
        266bf8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        266bfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        266c00:	e1a04000 	mov	r4, r0
        266c04:	e1a05001 	mov	r5, r1
        266c08:	e1a06002 	mov	r6, r2
        266c0c:	e3a00037 	mov	r0, #55	; 0x37
        266c10:	eb61757b 	bl	1ac4204 <$BusyBoxSend(long)>
        266c14:	e59f8138 	ldr	r8, [pc, #138]	; 266d54 <TView::Drag(TStrokePublic *, TRect const &)+0x160>
        266c18:	e5980000 	ldr	r0, [r8]
        266c1c:	eb61ab20 	bl	1ad18a4 <TRootView::$HideCaret(void)>
        266c20:	e1a00005 	mov	r0, r5
        266c24:	e3a01001 	mov	r1, #1	; 0x1
        266c28:	eb60cc33 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        266c2c:	e24dd010 	sub	sp, sp, #16	; 0x10
        266c30:	e1a01005 	mov	r1, r5
        266c34:	e28d000c 	add	r0, sp, #12	; 0xc
        266c38:	eb60b780 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        266c3c:	e1a01005 	mov	r1, r5
        266c40:	e28d0008 	add	r0, sp, #8	; 0x8
        266c44:	eb60b77d 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        266c48:	e1a0100d 	mov	r1, sp
        266c4c:	e1a00004 	mov	r0, r4
        266c50:	e5942000 	ldr	r2, [r4]
        266c54:	e1a0e00f 	mov	lr, pc
        266c58:	e282f024 	add	pc, r2, #36	; 0x24
        266c5c:	e3a01000 	mov	r1, #0	; 0x0
        266c60:	e5980000 	ldr	r0, [r8]
        266c64:	eb60f98e 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        266c68:	e24dd0bc 	sub	sp, sp, #188	; 0xbc
        266c6c:	e1a0000d 	mov	r0, sp
        266c70:	eb6085ed 	bl	1a8842c <TAnimate::$__ct(void)>
        266c74:	e1a01004 	mov	r1, r4
        266c78:	e1a0000d 	mov	r0, sp
        266c7c:	eb61f146 	bl	1ae319c <TAnimate::$SetupDragEffect(TView *)>
        266c80:	e24dd008 	sub	sp, sp, #8	; 0x8
        266c84:	e28d10c4 	add	r1, sp, #196	; 0xc4
        266c88:	e8915000 	ldmia	r1, {ip, lr}
        266c8c:	e88d5000 	stmia	sp, {ip, lr}
        266c90:	e59d0006 	ldr	r0, [sp, #6]
        266c94:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        266c98:	e0400001 	sub	r0, r0, r1
        266c9c:	e1a01800 	mov	r1, r0, lsl #16
        266ca0:	e59f00b0 	ldr	r0, [pc, #b0]	; 266d58 <TView::Drag(TStrokePublic *, TRect const &)+0x164>
        266ca4:	e5900000 	ldr	r0, [r0]
        266ca8:	e1a00800 	mov	r0, r0, lsl #16
        266cac:	e1a00840 	mov	r0, r0, asr #16
        266cb0:	e1500841 	cmp	r0, r1, asr #16
        266cb4:	aa000004 	bge	266ccc <TView::Drag(TStrokePublic *, TRect const &)+0xd8>
        266cb8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        266cbc:	e0810000 	add	r0, r1, r0
        266cc0:	e5cd0005 	strb	r0, [sp, #5]
        266cc4:	e1a00440 	mov	r0, r0, asr #8
        266cc8:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        266ccc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        266cd0:	e59d1000 	ldr	r1, [sp]
        266cd4:	e0400001 	sub	r0, r0, r1
        266cd8:	e1a01800 	mov	r1, r0, lsl #16
        266cdc:	e59f0078 	ldr	r0, [pc, #78]	; 266d5c <TView::Drag(TStrokePublic *, TRect const &)+0x168>
        266ce0:	e5900000 	ldr	r0, [r0]
        266ce4:	e1a00800 	mov	r0, r0, lsl #16
        266ce8:	e1a00840 	mov	r0, r0, asr #16
        266cec:	e1500841 	cmp	r0, r1, asr #16
        266cf0:	aa000004 	bge	266d08 <TView::Drag(TStrokePublic *, TRect const &)+0x114>
        266cf4:	e59d1000 	ldr	r1, [sp]
        266cf8:	e0810000 	add	r0, r1, r0
        266cfc:	e5cd0007 	strb	r0, [sp, #7]
        266d00:	e1a00440 	mov	r0, r0, asr #8
        266d04:	e5cd0006 	strb	r0, [sp, #6]
        266d08:	e24dd00c 	sub	sp, sp, #12	; 0xc
        266d0c:	e1a0000d 	mov	r0, sp
        266d10:	eb6622a3 	bl	1bef7a4 <$GetPort(GrafPort **)>
        266d14:	e49d0004 	ldr	r0, [sp], #4	; fField4
        266d18:	e280001c 	add	r0, r0, #28	; 0x1c
        266d1c:	e8905000 	ldmia	r0, {ip, lr}
        266d20:	e88d5000 	stmia	sp, {ip, lr}
        266d24:	e1a0100d 	mov	r1, sp
        266d28:	e28d0044 	add	r0, sp, #68	; 0x44
        266d2c:	e1a09000 	mov	r9, r0
        266d30:	eb639642 	bl	1b4c640 <TSaveScreenBits::$AllocateBuffers(Rect *)>
        266d34:	e3300000 	teq	r0, #0	; 0x0
        266d38:	1a000008 	bne	266d60 <TView::Drag(TStrokePublic *, TRect const &)+0x16c>
        266d3c:	e3a04000 	mov	r4, #0	; 0x0
        266d40:	e28d0010 	add	r0, sp, #16	; 0x10
        266d44:	e3a01000 	mov	r1, #0	; 0x0
        266d48:	ebf76f79 	bl	42b34 <TAnimate::__dt(void)>
        266d4c:	e1a00004 	mov	r0, r4
        266d50:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        266d54:	0c101934 	ldceq	9, cr1, [r0], -#208
        266d58:	0c104c5c 	ldceq	12, cr4, [r0], -#368
        266d5c:	0c104c58 	ldceq	12, cr4, [r0], -#352
        266d60:	e24dd008 	sub	sp, sp, #8	; 0x8
        266d64:	e3a07000 	mov	r7, #0	; 0x0
        266d68:	e3a0a000 	mov	sl, #0	; 0x0
        266d6c:	e1a00005 	mov	r0, r5
        266d70:	eb60aacb 	bl	1a918a4 <TStrokePublic::$Done(void)>
        266d74:	e3a01000 	mov	r1, #0	; 0x0
        266d78:	e3300000 	teq	r0, #0	; 0x0
        266d7c:	1a00009a 	bne	266fec <TView::Drag(TStrokePublic *, TRect const &)+0x3f8>
        266d80:	e24dd004 	sub	sp, sp, #4	; 0x4
        266d84:	e1a01005 	mov	r1, r5
        266d88:	e1a0000d 	mov	r0, sp
        266d8c:	eb60b30c 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
        266d90:	e3370000 	teq	r7, #0	; 0x0
        266d94:	1a000006 	bne	266db4 <TView::Drag(TStrokePublic *, TRect const &)+0x1c0>
        266d98:	e28d10e0 	add	r1, sp, #224	; 0xe0
        266d9c:	e1a0000d 	mov	r0, sp
        266da0:	ebfcc907 	bl	1991c4 <CheapDistance__FRC6TPointT1>
        266da4:	e3500004 	cmp	r0, #4	; 0x4
        266da8:	d3a00000 	movle	r0, #0	; 0x0
        266dac:	c3a00001 	movgt	r0, #1	; 0x1
        266db0:	e20070ff 	and	r7, r0, #255	; 0xff
        266db4:	e3370000 	teq	r7, #0	; 0x0
        266db8:	159d0000 	ldrne	r0, [sp]
        266dbc:	159d10e0 	ldrne	r1, [sp, #224]
        266dc0:	11300001 	teqne	r0, r1
        266dc4:	0a000081 	beq	266fd0 <TView::Drag(TStrokePublic *, TRect const &)+0x3dc>
        266dc8:	e24dd004 	sub	sp, sp, #4	; 0x4
        266dcc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        266dd0:	e59d10e8 	ldr	r1, [sp, #232]
        266dd4:	e0400001 	sub	r0, r0, r1
        266dd8:	e1a00800 	mov	r0, r0, lsl #16
        266ddc:	e1a00840 	mov	r0, r0, asr #16
        266de0:	e59d1006 	ldr	r1, [sp, #6]
        266de4:	e59d20ea 	ldr	r2, [sp, #234]
        266de8:	e0411002 	sub	r1, r1, r2
        266dec:	e1a01801 	mov	r1, r1, lsl #16
        266df0:	e1a01841 	mov	r1, r1, asr #16
        266df4:	e24dd004 	sub	sp, sp, #4	; 0x4
        266df8:	e5cd0003 	strb	r0, [sp, #3]
        266dfc:	e1a00440 	mov	r0, r0, asr #8
        266e00:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        266e04:	e5cd1001 	strb	r1, [sp, #1]
        266e08:	e1a00441 	mov	r0, r1, asr #8
        266e0c:	e5cd0000 	strb	r0, [sp]
        266e10:	e49d0004 	ldr	r0, [sp], #4	; fField4
        266e14:	e40d0004 	str	r0, [sp], -#4	; fField4
        266e18:	e28d000c 	add	r0, sp, #12	; 0xc
        266e1c:	e28d10e0 	add	r1, sp, #224	; 0xe0
        266e20:	e8915000 	ldmia	r1, {ip, lr}
        266e24:	e8805000 	stmia	r0, {ip, lr}
        266e28:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        266e2c:	e58d0000 	str	r0, [sp]
        266e30:	e28d000c 	add	r0, sp, #12	; 0xc
        266e34:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        266e38:	e1a01841 	mov	r1, r1, asr #16
        266e3c:	e59d2000 	ldr	r2, [sp]
        266e40:	e1a02842 	mov	r2, r2, asr #16
        266e44:	eb63aaa7 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        266e48:	e28dd004 	add	sp, sp, #4	; 0x4
        266e4c:	e5960006 	ldr	r0, [r6, #6]
        266e50:	e1a00840 	mov	r0, r0, asr #16
        266e54:	e59d100e 	ldr	r1, [sp, #14]
        266e58:	e0501841 	subs	r1, r0, r1, asr #16
        266e5c:	428d0008 	addmi	r0, sp, #8	; 0x8
        266e60:	43a02000 	movmi	r2, #0	; 0x0
        266e64:	4b63aa9f 	blmi	1b518e8 <$OffsetRect__FP4RectlT2>
        266e68:	e5960004 	ldr	r0, [r6, #4]	; fField4
        266e6c:	e1a00840 	mov	r0, r0, asr #16
        266e70:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        266e74:	e0502841 	subs	r2, r0, r1, asr #16
        266e78:	428d0008 	addmi	r0, sp, #8	; 0x8
        266e7c:	43a01000 	movmi	r1, #0	; 0x0
        266e80:	4b63aa98 	blmi	1b518e8 <$OffsetRect__FP4RectlT2>
        266e84:	e5961002 	ldr	r1, [r6, #2]	; fField2
        266e88:	e1a01841 	mov	r1, r1, asr #16
        266e8c:	e59d000a 	ldr	r0, [sp, #10]
        266e90:	e0411840 	sub	r1, r1, r0, asr #16
        266e94:	e3510000 	cmp	r1, #0	; 0x0
        266e98:	c28d0008 	addgt	r0, sp, #8	; 0x8
        266e9c:	c3a02000 	movgt	r2, #0	; 0x0
        266ea0:	cb63aa90 	blgt	1b518e8 <$OffsetRect__FP4RectlT2>
        266ea4:	e5961000 	ldr	r1, [r6]
        266ea8:	e1a01841 	mov	r1, r1, asr #16
        266eac:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        266eb0:	e0412840 	sub	r2, r1, r0, asr #16
        266eb4:	e3520000 	cmp	r2, #0	; 0x0
        266eb8:	c28d0008 	addgt	r0, sp, #8	; 0x8
        266ebc:	c3a01000 	movgt	r1, #0	; 0x0
        266ec0:	cb63aa88 	blgt	1b518e8 <$OffsetRect__FP4RectlT2>
        266ec4:	e28d1008 	add	r1, sp, #8	; 0x8
        266ec8:	e28d0018 	add	r0, sp, #24	; 0x18
        266ecc:	eb60f8ef 	bl	1aa5290 <TRect::$Union(TRect const &)>
        266ed0:	e33a0000 	teq	sl, #0	; 0x0
        266ed4:	0a000007 	beq	266ef8 <TView::Drag(TStrokePublic *, TRect const &)+0x304>
        266ed8:	e3a01000 	mov	r1, #0	; 0x0
        266edc:	e3a00000 	mov	r0, #0	; 0x0
        266ee0:	eb6395cc 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        266ee4:	e28d1018 	add	r1, sp, #24	; 0x18
        266ee8:	e1a00009 	mov	r0, r9
        266eec:	e3a02000 	mov	r2, #0	; 0x0
        266ef0:	eb63b2aa 	bl	1b539a0 <TSaveScreenBits::$RestoreScreenBits(Rect *, Region **)>
        266ef4:	ea000025 	b	266f90 <TView::Drag(TStrokePublic *, TRect const &)+0x39c>
        266ef8:	e3a0a001 	mov	sl, #1	; 0x1
        266efc:	e1a00004 	mov	r0, r4
        266f00:	e3a01001 	mov	r1, #1	; 0x1
        266f04:	eb658970 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        266f08:	e1a00004 	mov	r0, r4
        266f0c:	eb658d97 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        266f10:	e3300000 	teq	r0, #0	; 0x0
        266f14:	0a000004 	beq	266f2c <TView::Drag(TStrokePublic *, TRect const &)+0x338>
        266f18:	e594001c 	ldr	r0, [r4, #28]	; fField28
        266f1c:	e1a01004 	mov	r1, r4
        266f20:	e3a02001 	mov	r2, #1	; 0x1
        266f24:	eb6595c5 	bl	1bcc640 <TView::$ViewVisibleChanged(TView *, unsigned char)>
        266f28:	ea000005 	b	266f44 <TView::Drag(TStrokePublic *, TRect const &)+0x350>
        266f2c:	e28d1018 	add	r1, sp, #24	; 0x18
        266f30:	e594201c 	ldr	r2, [r4, #28]	; fField28
        266f34:	e1a00002 	mov	r0, r2
        266f38:	e5922000 	ldr	r2, [r2]
        266f3c:	e1a0e00f 	mov	lr, pc
        266f40:	e282f054 	add	pc, r2, #84	; 0x54
        266f44:	e3a01000 	mov	r1, #0	; 0x0
        266f48:	e3a00000 	mov	r0, #0	; 0x0
        266f4c:	eb6395b1 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        266f50:	e3a01000 	mov	r1, #0	; 0x0
        266f54:	e5980000 	ldr	r0, [r8]
        266f58:	eb60f8d1 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        266f5c:	e1a00009 	mov	r0, r9
        266f60:	eb63b292 	bl	1b539b0 <TSaveScreenBits::$SaveScreenBits(void)>
        266f64:	e1a00004 	mov	r0, r4
        266f68:	e3a01001 	mov	r1, #1	; 0x1
        266f6c:	eb6591a2 	bl	1bcb5fc <TView::$SetFlags(unsigned long)>
        266f70:	e1a00004 	mov	r0, r4
        266f74:	eb658d7d 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        266f78:	e3300000 	teq	r0, #0	; 0x0
        266f7c:	0a000003 	beq	266f90 <TView::Drag(TStrokePublic *, TRect const &)+0x39c>
        266f80:	e594001c 	ldr	r0, [r4, #28]	; fField28
        266f84:	e1a01004 	mov	r1, r4
        266f88:	e3a02000 	mov	r2, #0	; 0x0
        266f8c:	eb6595ab 	bl	1bcc640 <TView::$ViewVisibleChanged(TView *, unsigned char)>
        266f90:	e28d1008 	add	r1, sp, #8	; 0x8
        266f94:	e28d0020 	add	r0, sp, #32	; 0x20
        266f98:	e3a03000 	mov	r3, #0	; 0x0
        266f9c:	e3a02000 	mov	r2, #0	; 0x0
        266fa0:	eb60aa4c 	bl	1a918d8 <TBits::$Draw(TRect const &, long, Region **)>
        266fa4:	e3a01000 	mov	r1, #0	; 0x0
        266fa8:	e3a00000 	mov	r0, #0	; 0x0
        266fac:	eb63959b 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        266fb0:	e28d1018 	add	r1, sp, #24	; 0x18
        266fb4:	e28d0008 	add	r0, sp, #8	; 0x8
        266fb8:	e8905000 	ldmia	r0, {ip, lr}
        266fbc:	e8815000 	stmia	r1, {ip, lr}
        266fc0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        266fc4:	e58d00e4 	str	r0, [sp, #228]
        266fc8:	e28dd004 	add	sp, sp, #4	; 0x4
        266fcc:	ea000001 	b	266fd8 <TView::Drag(TStrokePublic *, TRect const &)+0x3e4>
        266fd0:	e3a00001 	mov	r0, #1	; 0x1
        266fd4:	eb60f8c7 	bl	1aa52f8 <$Wait(unsigned long)>
        266fd8:	e28dd004 	add	sp, sp, #4	; 0x4
        266fdc:	e1a00005 	mov	r0, r5
        266fe0:	eb60aa2f 	bl	1a918a4 <TStrokePublic::$Done(void)>
        266fe4:	e3300000 	teq	r0, #0	; 0x0
        266fe8:	0affff64 	beq	266d80 <TView::Drag(TStrokePublic *, TRect const &)+0x18c>
        266fec:	eb63ae4c 	bl	1b52924 <$PenNormal(void)>
        266ff0:	e3370000 	teq	r7, #0	; 0x0
        266ff4:	0a000050 	beq	26713c <TView::Drag(TStrokePublic *, TRect const &)+0x548>
        266ff8:	e24dd014 	sub	sp, sp, #20	; 0x14
        266ffc:	e28d1014 	add	r1, sp, #20	; 0x14
        267000:	e28d0004 	add	r0, sp, #4	; 0x4
        267004:	eb608501 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        267008:	e28d0004 	add	r0, sp, #4	; 0x4
        26700c:	e58d0000 	str	r0, [sp]
        267010:	e1a01000 	mov	r1, r0
        267014:	e59d208c 	ldr	r2, [sp, #140]
        267018:	e1a00002 	mov	r0, r2
        26701c:	eb63b26b 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        267020:	e28dd004 	add	sp, sp, #4	; 0x4
        267024:	e59d0088 	ldr	r0, [sp, #136]
        267028:	eb639dbb 	bl	1b4e71c <$EmptyRgn(Region **)>
        26702c:	e3300000 	teq	r0, #0	; 0x0
        267030:	1a000003 	bne	267044 <TView::Drag(TStrokePublic *, TRect const &)+0x450>
        267034:	e59d2088 	ldr	r2, [sp, #136]
        267038:	e28d1010 	add	r1, sp, #16	; 0x10
        26703c:	e1a00009 	mov	r0, r9
        267040:	eb63b256 	bl	1b539a0 <TSaveScreenBits::$RestoreScreenBits(Rect *, Region **)>
        267044:	e24dd004 	sub	sp, sp, #4	; 0x4
        267048:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        26704c:	e59d10e8 	ldr	r1, [sp, #232]
        267050:	e0400001 	sub	r0, r0, r1
        267054:	e1a00800 	mov	r0, r0, lsl #16
        267058:	e1a00840 	mov	r0, r0, asr #16
        26705c:	e59d1016 	ldr	r1, [sp, #22]	; fField22
        267060:	e59d20ea 	ldr	r2, [sp, #234]
        267064:	e0411002 	sub	r1, r1, r2
        267068:	e1a01801 	mov	r1, r1, lsl #16
        26706c:	e1a01841 	mov	r1, r1, asr #16
        267070:	e24dd004 	sub	sp, sp, #4	; 0x4
        267074:	e5cd0003 	strb	r0, [sp, #3]
        267078:	e1a00440 	mov	r0, r0, asr #8
        26707c:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        267080:	e5cd1001 	strb	r1, [sp, #1]
        267084:	e1a00441 	mov	r0, r1, asr #8
        267088:	e5cd0000 	strb	r0, [sp]
        26708c:	e49d0004 	ldr	r0, [sp], #4	; fField4
        267090:	e58d0000 	str	r0, [sp]
        267094:	e1a00004 	mov	r0, r4
        267098:	e59d1000 	ldr	r1, [sp]
        26709c:	eb65913d 	bl	1bcb598 <TView::$Offset(TPoint)>
        2670a0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2670a4:	e28d1004 	add	r1, sp, #4	; 0x4
        2670a8:	e1a00004 	mov	r0, r4
        2670ac:	eb60a1ce 	bl	1a8f7ec <TView::$DejustifyBounds(TRect *)>
        2670b0:	e28d0004 	add	r0, sp, #4	; 0x4
        2670b4:	eb6621b8 	bl	1bef79c <$ToObject(TRect const &)>
        2670b8:	eb656c23 	bl	1bc214c <$AllocateRefHandle(long)>
        2670bc:	e58d0000 	str	r0, [sp]
        2670c0:	e1a0200d 	mov	r2, sp
        2670c4:	e59f108c 	ldr	r1, [pc, #8c]	; 267158 <TView::Drag(TStrokePublic *, TRect const &)+0x564>	; fField8
        2670c8:	e1a05001 	mov	r5, r1
        2670cc:	e1a00004 	mov	r0, r4
        2670d0:	eb61d752 	bl	1adce20 <TView::$SetDataSlot(RefVar const &, RefVar const &)>
        2670d4:	e59d0000 	ldr	r0, [sp]
        2670d8:	eb657037 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2670dc:	e1a01005 	mov	r1, r5
        2670e0:	e1a00004 	mov	r0, r4
        2670e4:	e5942000 	ldr	r2, [r4]
        2670e8:	e1a0e00f 	mov	lr, pc
        2670ec:	e282f04c 	add	pc, r2, #76	; 0x4c
        2670f0:	e24dd010 	sub	sp, sp, #16	; 0x10
        2670f4:	e1a00004 	mov	r0, r4
        2670f8:	eb658d1c 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        2670fc:	e3300000 	teq	r0, #0	; 0x0
        267100:	0a000003 	beq	267114 <TView::Drag(TStrokePublic *, TRect const &)+0x520>
        267104:	e594001c 	ldr	r0, [r4, #28]	; fField28
        267108:	e1a01004 	mov	r1, r4
        26710c:	e3a02000 	mov	r2, #0	; 0x0
        267110:	eb65954a 	bl	1bcc640 <TView::$ViewVisibleChanged(TView *, unsigned char)>
        267114:	e24dd004 	sub	sp, sp, #4	; 0x4
        267118:	e28d103c 	add	r1, sp, #60	; 0x3c
        26711c:	e28d0004 	add	r0, sp, #4	; 0x4
        267120:	eb6084ba 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        267124:	e28d0004 	add	r0, sp, #4	; 0x4
        267128:	e58d0000 	str	r0, [sp]
        26712c:	e5980000 	ldr	r0, [r8]
        267130:	e49d1004 	ldr	r1, [sp], #4	; fField4
        267134:	eb60f868 	bl	1aa52dc <TRootView::$Validate(TBaseRegion const)>
        267138:	e28dd030 	add	sp, sp, #48	; 0x30
        26713c:	e5980000 	ldr	r0, [r8]
        267140:	eb60f014 	bl	1aa3198 <TRootView::$ShowCaret(void)>
        267144:	e28d0018 	add	r0, sp, #24	; 0x18
        267148:	e3a01000 	mov	r1, #0	; 0x0
        26714c:	ebf76e78 	bl	42b34 <TAnimate::__dt(void)>
        267150:	e1a00007 	mov	r0, r7
        267154:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        267158:	00684f08 	rsbeq	r4, r8, r8, lsl #30
    */
}

/**
 * Symbol: TView::DrawHilitedData(void)
 * Address: 0026715c
 */
TView::DrawHilitedData(void) {
    /*
        26715c:	e1a0c00d 	mov	ip, sp
        267160:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        267164:	e24cb004 	sub	fp, ip, #4	; 0x4
        267168:	e24dd008 	sub	sp, sp, #8	; 0x8
        26716c:	e2801010 	add	r1, r0, #16	; 0x10
        267170:	e8915000 	ldmia	r1, {ip, lr}
        267174:	e88d5000 	stmia	sp, {ip, lr}
        267178:	e1a0100d 	mov	r1, sp
        26717c:	e3a02000 	mov	r2, #0	; 0x0
        267180:	eb658cdf 	bl	1bca504 <TView::$Draw(TRect const &, unsigned char)>
        267184:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TView::DrawHiliting(void)
 * Address: 00267188
 */
TView::DrawHiliting(void) {
    /*
        267188:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::CopyProtection( const(void))
 * Address: 0026718c
 */
TView::CopyProtection( const(void)) {
    /*
        26718c:	e1a0c00d 	mov	ip, sp
        267190:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        267194:	e24cb004 	sub	fp, ip, #4	; 0x4
        267198:	e3a05000 	mov	r5, #0	; 0x0
        26719c:	e59f1038 	ldr	r1, [pc, #38]	; 2671dc <TView::CopyProtection( const(void))+0x50>
        2671a0:	eb658cec 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        2671a4:	eb656be8 	bl	1bc214c <$AllocateRefHandle(long)>
        2671a8:	e1a04000 	mov	r4, r0
        2671ac:	e5900000 	ldr	r0, [r0]
        2671b0:	e3300002 	teq	r0, #2	; 0x2
        2671b4:	0a000004 	beq	2671cc <TView::CopyProtection( const(void))+0x40>
        2671b8:	e3100003 	tst	r0, #3	; 0x3
        2671bc:	01a00140 	moveq	r0, r0, asr #2
        2671c0:	0a000000 	beq	2671c8 <TView::CopyProtection( const(void))+0x3c>
        2671c4:	eb656bd4 	bl	1bc211c <$_RINTError(long)>
        2671c8:	e1a05000 	mov	r5, r0
        2671cc:	e1a00004 	mov	r0, r4
        2671d0:	eb656ff9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2671d4:	e1a00005 	mov	r0, r5
        2671d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2671dc:	00682648 	rsbeq	r2, r8, r8, asr #12
    */
}

/**
 * Symbol: TView::TransferCopyProtection(RefVar const &)
 * Address: 002671e0
 */
TView::TransferCopyProtection(RefVar const &) {
    /*
        2671e0:	e1a0c00d 	mov	ip, sp
        2671e4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2671e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2671ec:	e1a04001 	mov	r4, r1
        2671f0:	eb6588b9 	bl	1bc94dc <TView::$CopyProtection( const(void))>
        2671f4:	e1a06000 	mov	r6, r0
        2671f8:	e3a07000 	mov	r7, #0	; 0x0
        2671fc:	e3100002 	tst	r0, #2	; 0x2
        267200:	0a00004e 	beq	267340 <TView::TransferCopyProtection(RefVar const &)+0x160>
        267204:	e3a09000 	mov	r9, #0	; 0x0
        267208:	e59f1174 	ldr	r1, [pc, #174]	; 267384 <TView::TransferCopyProtection(RefVar const &)+0x1a4>
        26720c:	e1a08001 	mov	r8, r1
        267210:	e1a00004 	mov	r0, r4
        267214:	e3a02000 	mov	r2, #0	; 0x0
        267218:	eb657412 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        26721c:	eb656bca 	bl	1bc214c <$AllocateRefHandle(long)>
        267220:	e1a05000 	mov	r5, r0
        267224:	e5900000 	ldr	r0, [r0]
        267228:	e3300002 	teq	r0, #2	; 0x2
        26722c:	1a00002c 	bne	2672e4 <TView::TransferCopyProtection(RefVar const &)+0x104>
        267230:	e24dd004 	sub	sp, sp, #4	; 0x4
        267234:	e59f114c 	ldr	r1, [pc, #14c]	; 267388 <TView::TransferCopyProtection(RefVar const &)+0x1a8>
        267238:	e1a00004 	mov	r0, r4
        26723c:	e3a02000 	mov	r2, #0	; 0x0
        267240:	eb657408 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        267244:	eb656bc0 	bl	1bc214c <$AllocateRefHandle(long)>
        267248:	e58d0000 	str	r0, [sp]
        26724c:	e5900000 	ldr	r0, [r0]
        267250:	e3300002 	teq	r0, #2	; 0x2
        267254:	0a00001f 	beq	2672d8 <TView::TransferCopyProtection(RefVar const &)+0xf8>
        267258:	e24dd004 	sub	sp, sp, #4	; 0x4
        26725c:	e59f0128 	ldr	r0, [pc, #128]	; 26738c <TView::TransferCopyProtection(RefVar const &)+0x1ac>
        267260:	e5900000 	ldr	r0, [r0]
        267264:	eb656bb8 	bl	1bc214c <$AllocateRefHandle(long)>
        267268:	e1a07000 	mov	r7, r0
        26726c:	e59f011c 	ldr	r0, [pc, #11c]	; 267390 <TView::TransferCopyProtection(RefVar const &)+0x1b0>
        267270:	e5900000 	ldr	r0, [r0]
        267274:	e5901000 	ldr	r1, [r0]
        267278:	e5970000 	ldr	r0, [r7]
        26727c:	eb6573f7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        267280:	eb656bb1 	bl	1bc214c <$AllocateRefHandle(long)>
        267284:	e58d0000 	str	r0, [sp]
        267288:	e1a0000d 	mov	r0, sp
        26728c:	e28d1004 	add	r1, sp, #4	; 0x4
        267290:	e3a02000 	mov	r2, #0	; 0x0
        267294:	eb6573f3 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        267298:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        26729c:	e5810000 	str	r0, [r1]
        2672a0:	e59d0000 	ldr	r0, [sp]
        2672a4:	eb656fc4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2672a8:	e1a00007 	mov	r0, r7
        2672ac:	eb656fc2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2672b0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2672b4:	e5900000 	ldr	r0, [r0]
        2672b8:	e3300002 	teq	r0, #2	; 0x2
        2672bc:	0a000004 	beq	2672d4 <TView::TransferCopyProtection(RefVar const &)+0xf4>
        2672c0:	e1a01008 	mov	r1, r8
        2672c4:	e28d0004 	add	r0, sp, #4	; 0x4
        2672c8:	e3a02000 	mov	r2, #0	; 0x0
        2672cc:	eb6573e5 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        2672d0:	e5850000 	str	r0, [r5]
        2672d4:	e28dd004 	add	sp, sp, #4	; 0x4
        2672d8:	e59d0000 	ldr	r0, [sp]
        2672dc:	eb656fb6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2672e0:	e28dd004 	add	sp, sp, #4	; 0x4
        2672e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2672e8:	e5950000 	ldr	r0, [r5]
        2672ec:	e3300002 	teq	r0, #2	; 0x2
        2672f0:	0a000004 	beq	267308 <TView::TransferCopyProtection(RefVar const &)+0x128>
        2672f4:	e3100003 	tst	r0, #3	; 0x3
        2672f8:	01a00140 	moveq	r0, r0, asr #2
        2672fc:	0a000000 	beq	267304 <TView::TransferCopyProtection(RefVar const &)+0x124>
        267300:	eb656b85 	bl	1bc211c <$_RINTError(long)>
        267304:	e1a09000 	mov	r9, r0
        267308:	e3890002 	orr	r0, r9, #2	; 0x2
        26730c:	e1a00100 	mov	r0, r0, lsl #2
        267310:	eb656b8d 	bl	1bc214c <$AllocateRefHandle(long)>
        267314:	e58d0000 	str	r0, [sp]
        267318:	e1a0200d 	mov	r2, sp
        26731c:	e1a01008 	mov	r1, r8
        267320:	e1a00004 	mov	r0, r4
        267324:	eb657c0f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        267328:	e59d0000 	ldr	r0, [sp]
        26732c:	eb656fa2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        267330:	e3a07002 	mov	r7, #2	; 0x2
        267334:	e28dd004 	add	sp, sp, #4	; 0x4
        267338:	e1a00005 	mov	r0, r5
        26733c:	eb656f9e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        267340:	e3160004 	tst	r6, #4	; 0x4
        267344:	13877001 	orrne	r7, r7, #1	; 0x1
        267348:	e3160008 	tst	r6, #8	; 0x8
        26734c:	13877008 	orrne	r7, r7, #8	; 0x8
        267350:	e3370000 	teq	r7, #0	; 0x0
        267354:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        267358:	e24dd004 	sub	sp, sp, #4	; 0x4
        26735c:	e1a00107 	mov	r0, r7, lsl #2
        267360:	eb656b79 	bl	1bc214c <$AllocateRefHandle(long)>
        267364:	e58d0000 	str	r0, [sp]
        267368:	e1a0200d 	mov	r2, sp
        26736c:	e59f1020 	ldr	r1, [pc, #20]	; 267394 <TView::TransferCopyProtection(RefVar const &)+0x1b4>	; fField20
        267370:	e1a00004 	mov	r0, r4
        267374:	eb657bfb 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        267378:	e59d0000 	ldr	r0, [sp]
        26737c:	eb656f8e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        267380:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        267384:	00684fc0 	rsbeq	r4, r8, r0, asr #31
        267388:	006850d8 	ldreqd	r5, [r8], -#8	; fField8
        26738c:	0c10180c 	ldceq	8, cr1, [r0], -#48
        267390:	00684840 	rsbeq	r4, r8, r0, asr #16
        267394:	00682648 	rsbeq	r2, r8, r8, asr #12
    */
}

/**
 * Symbol: TView::FindID(long)
 * Address: 00267398
 */
TView::FindID(long) {
    /*
        267398:	e1a0c00d 	mov	ip, sp
        26739c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2673a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2673a4:	e1a04001 	mov	r4, r1
        2673a8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2673ac:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        2673b0:	e1a0000d 	mov	r0, sp
        2673b4:	eb60841e 	bl	1a88434 <TListLoop::$__ct(CList *)>
        2673b8:	e1a0000d 	mov	r0, sp
        2673bc:	eb60d697 	bl	1a9ce20 <TListLoop::$Next(void)>
        2673c0:	e3300000 	teq	r0, #0	; 0x0
        2673c4:	0a000006 	beq	2673e4 <TView::FindID(long)+0x4c>
        2673c8:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2673cc:	e1310004 	teq	r1, r4
        2673d0:	0a000003 	beq	2673e4 <TView::FindID(long)+0x4c>
        2673d4:	e1a0000d 	mov	r0, sp
        2673d8:	eb60d690 	bl	1a9ce20 <TListLoop::$Next(void)>
        2673dc:	e3300000 	teq	r0, #0	; 0x0
        2673e0:	1afffff8 	bne	2673c8 <TView::FindID(long)+0x30>
        2673e4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::DoMoveCommand(TPoint)
 * Address: 002673e8
 */
TView::DoMoveCommand(TPoint) {
    /*
        2673e8:	e1a0c00d 	mov	ip, sp
        2673ec:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
        2673f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2673f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2673f8:	e1a01000 	mov	r1, r0
        2673fc:	e3a02302 	mov	r2, #134217728	; 0x8000000
        267400:	e3a00040 	mov	r0, #64	; 0x40
        267404:	eb60fbcd 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        267408:	eb656b4f 	bl	1bc214c <$AllocateRefHandle(long)>
        26740c:	e58d0000 	str	r0, [sp]
        267410:	e51b200e 	ldr	r2, [fp, -#14]
        267414:	e1a02842 	mov	r2, r2, asr #16
        267418:	e1a0000d 	mov	r0, sp
        26741c:	e3a01000 	mov	r1, #0	; 0x0
        267420:	eb60fbd0 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        267424:	e51b2010 	ldr	r2, [fp, -#16]	; fField16
        267428:	e1a02842 	mov	r2, r2, asr #16
        26742c:	e1a0000d 	mov	r0, sp
        267430:	e3a01001 	mov	r1, #1	; 0x1
        267434:	eb60fbcb 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        267438:	e59f0014 	ldr	r0, [pc, #14]	; 267454 <TView::DoMoveCommand(TPoint)+0x6c>
        26743c:	e5900000 	ldr	r0, [r0]
        267440:	e1a0100d 	mov	r1, sp
        267444:	eb60a4fb 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        267448:	e59d0000 	ldr	r0, [sp]
        26744c:	eb656f5a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        267450:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        267454:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TView::GetChildOrigin(TPoint *)
 * Address: 00267458
 */
TView::GetChildOrigin(TPoint *) {
    /*
        267458:	e1a0c00d 	mov	ip, sp
        26745c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        267460:	e24cb004 	sub	fp, ip, #4	; 0x4
        267464:	e1a05000 	mov	r5, r0
        267468:	e1a04001 	mov	r4, r1
        26746c:	e3a01008 	mov	r1, #8	; 0x8
        267470:	eb658c30 	bl	1bca538 <TView::$GetCacheProto(long)>
        267474:	eb656b34 	bl	1bc214c <$AllocateRefHandle(long)>
        267478:	e1a06000 	mov	r6, r0
        26747c:	e5900000 	ldr	r0, [r0]
        267480:	e3300002 	teq	r0, #2	; 0x2
        267484:	03a00000 	moveq	r0, #0	; 0x0
        267488:	0a000005 	beq	2674a4 <TView::GetChildOrigin(TPoint *)+0x4c>
        26748c:	e3100003 	tst	r0, #3	; 0x3
        267490:	01a00140 	moveq	r0, r0, asr #2
        267494:	0a000000 	beq	26749c <TView::GetChildOrigin(TPoint *)+0x44>
        267498:	eb656b1f 	bl	1bc211c <$_RINTError(long)>
        26749c:	e1a00800 	mov	r0, r0, lsl #16
        2674a0:	e1a00840 	mov	r0, r0, asr #16
        2674a4:	e5c40003 	strb	r0, [r4, #3]
        2674a8:	e1a00440 	mov	r0, r0, asr #8
        2674ac:	e5c40002 	strb	r0, [r4, #2]	; fField2
        2674b0:	e1a00005 	mov	r0, r5
        2674b4:	e3a01007 	mov	r1, #7	; 0x7
        2674b8:	eb658c1e 	bl	1bca538 <TView::$GetCacheProto(long)>
        2674bc:	e5860000 	str	r0, [r6]
        2674c0:	e1a01000 	mov	r1, r0
        2674c4:	e3300002 	teq	r0, #2	; 0x2
        2674c8:	03a00000 	moveq	r0, #0	; 0x0
        2674cc:	0a000006 	beq	2674ec <TView::GetChildOrigin(TPoint *)+0x94>
        2674d0:	e1a00001 	mov	r0, r1
        2674d4:	e3110003 	tst	r1, #3	; 0x3
        2674d8:	01a00140 	moveq	r0, r0, asr #2
        2674dc:	0a000000 	beq	2674e4 <TView::GetChildOrigin(TPoint *)+0x8c>
        2674e0:	eb656b0d 	bl	1bc211c <$_RINTError(long)>
        2674e4:	e1a00800 	mov	r0, r0, lsl #16
        2674e8:	e1a00840 	mov	r0, r0, asr #16
        2674ec:	e5c40001 	strb	r0, [r4, #1]
        2674f0:	e1a00440 	mov	r0, r0, asr #8
        2674f4:	e5c40000 	strb	r0, [r4]
        2674f8:	e1a00006 	mov	r0, r6
        2674fc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        267500:	ea656f2d 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: TView::ContentsOrigin(void)
 * Address: 00267504
 */
TView::ContentsOrigin(void) {
    /*
        267504:	e1a0c00d 	mov	ip, sp
        267508:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26750c:	e24cb004 	sub	fp, ip, #4	; 0x4
        267510:	e1a05000 	mov	r5, r0
        267514:	e1a04001 	mov	r4, r1
        267518:	e24dd004 	sub	sp, sp, #4	; 0x4
        26751c:	e1a0100d 	mov	r1, sp
        267520:	e1a00004 	mov	r0, r4
        267524:	eb658c05 	bl	1bca540 <TView::$GetChildOrigin(TPoint *)>
        267528:	e24dd004 	sub	sp, sp, #4	; 0x4
        26752c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        267530:	e58d0000 	str	r0, [sp]
        267534:	e59d1000 	ldr	r1, [sp]
        267538:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        26753c:	e0410000 	sub	r0, r1, r0
        267540:	e1a00800 	mov	r0, r0, lsl #16
        267544:	e1a00840 	mov	r0, r0, asr #16
        267548:	e41d2004 	ldr	r2, [sp], -#4	; fField4
        26754c:	e1a02822 	mov	r2, r2, lsr #16
        267550:	e59d100a 	ldr	r1, [sp, #10]
        267554:	e0421001 	sub	r1, r2, r1
        267558:	e1a01801 	mov	r1, r1, lsl #16
        26755c:	e1a01841 	mov	r1, r1, asr #16
        267560:	e5cd0003 	strb	r0, [sp, #3]
        267564:	e1a00440 	mov	r0, r0, asr #8
        267568:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        26756c:	e5cd1001 	strb	r1, [sp, #1]
        267570:	e1a00441 	mov	r0, r1, asr #8
        267574:	e5cd0000 	strb	r0, [sp]
        267578:	e59d0000 	ldr	r0, [sp]
        26757c:	e5850000 	str	r0, [r5]
        267580:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::Delete(void)
 * Address: 00267584
 */
TView::Delete(void) {
    /*
        267584:	e1a0c00d 	mov	ip, sp
        267588:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        26758c:	e24cb004 	sub	fp, ip, #4	; 0x4
        267590:	e1a04000 	mov	r4, r0
        267594:	e3a01209 	mov	r1, #-1879048192	; 0x90000000
        267598:	eb659017 	bl	1bcb5fc <TView::$SetFlags(unsigned long)>
        26759c:	e1a00004 	mov	r0, r4
        2675a0:	e5941000 	ldr	r1, [r4]
        2675a4:	e1a0e00f 	mov	lr, pc
        2675a8:	e281f0ac 	add	pc, r1, #172	; 0xac
        2675ac:	e3a07000 	mov	r7, #0	; 0x0
        2675b0:	e3a08000 	mov	r8, #0	; 0x0
        2675b4:	e52d8070 	str	r8, [sp, -#112]!
        2675b8:	e28d0008 	add	r0, sp, #8	; 0x8
        2675bc:	eb652cec 	bl	1bb2974 <$setjmp>
        2675c0:	e59f5078 	ldr	r5, [pc, #78]	; 267640 <TView::Delete(void)+0xbc>
        2675c4:	e3a06002 	mov	r6, #2	; 0x2
        2675c8:	e3300000 	teq	r0, #0	; 0x0
        2675cc:	1a00001e 	bne	26764c <TView::Delete(void)+0xc8>
        2675d0:	e1a0000d 	mov	r0, sp
        2675d4:	eb65e2a8 	bl	1be007c <$AddExceptionHandler>
        2675d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2675dc:	e3a03000 	mov	r3, #0	; 0x0
        2675e0:	e92d0008 	stmdb	sp!, {r3}
        2675e4:	e1a00006 	mov	r0, r6
        2675e8:	eb656ad7 	bl	1bc214c <$AllocateRefHandle(long)>
        2675ec:	e58d0004 	str	r0, [sp, #4]	; fField4
        2675f0:	e28d2004 	add	r2, sp, #4	; 0x4
        2675f4:	e59f1048 	ldr	r1, [pc, #48]	; 267644 <TView::Delete(void)+0xc0>
        2675f8:	e1a00004 	mov	r0, r4
        2675fc:	e3a03000 	mov	r3, #0	; 0x0
        267600:	eb658ff6 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        267604:	e28dd004 	add	sp, sp, #4	; 0x4
        267608:	eb656acf 	bl	1bc214c <$AllocateRefHandle(long)>
        26760c:	e1a09000 	mov	r9, r0
        267610:	e59f0030 	ldr	r0, [pc, #30]	; 267648 <TView::Delete(void)+0xc4>
        267614:	e5900000 	ldr	r0, [r0]
        267618:	e5901000 	ldr	r1, [r0]
        26761c:	e5990000 	ldr	r0, [r9]
        267620:	eb657302 	bl	1bc4230 <$EQRef__FlT1>
        267624:	e20070ff 	and	r7, r0, #255	; 0xff
        267628:	e1a00009 	mov	r0, r9
        26762c:	eb656ee2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        267630:	e59d0000 	ldr	r0, [sp]
        267634:	eb656ee0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        267638:	e28dd004 	add	sp, sp, #4	; 0x4
        26763c:	ea000008 	b	267664 <TView::Delete(void)+0xe0>
        267640:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        267644:	00685088 	rsbeq	r5, r8, r8, lsl #1
        267648:	00683f68 	rsbeq	r3, r8, r8, ror #30
        26764c:	e59d0060 	ldr	r0, [sp, #96]
        267650:	e5951000 	ldr	r1, [r5]
        267654:	eb65eece 	bl	1be3194 <$Subexception>
        267658:	e3300000 	teq	r0, #0	; 0x0
        26765c:	01a0000d 	moveq	r0, sp
        267660:	0b65eabb 	bleq	1be2154 <$NextHandler>
        267664:	e1a0000d 	mov	r0, sp
        267668:	eb65e692 	bl	1be10b8 <$ExitHandler>
        26766c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        267670:	e1a00006 	mov	r0, r6
        267674:	eb656ab4 	bl	1bc214c <$AllocateRefHandle(long)>
        267678:	e58d0000 	str	r0, [sp]
        26767c:	e1a0200d 	mov	r2, sp
        267680:	e59f1098 	ldr	r1, [pc, #98]	; 267720 <TView::Delete(void)+0x19c>
        267684:	e1a00004 	mov	r0, r4
        267688:	eb61d5e3 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        26768c:	e59d0000 	ldr	r0, [sp]
        267690:	eb656ec9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        267694:	e5940020 	ldr	r0, [r4, #32]	; fField32
        267698:	e59f1084 	ldr	r1, [pc, #84]	; 267724 <TView::Delete(void)+0x1a0>
        26769c:	e5911000 	ldr	r1, [r1]
        2676a0:	e0509001 	subs	r9, r0, r1
        2676a4:	13a09001 	movne	r9, #1	; 0x1
        2676a8:	e3390000 	teq	r9, #0	; 0x0
        2676ac:	0a000003 	beq	2676c0 <TView::Delete(void)+0x13c>
        2676b0:	e1a00004 	mov	r0, r4
        2676b4:	e5941000 	ldr	r1, [r4]
        2676b8:	e1a0e00f 	mov	lr, pc
        2676bc:	e281f07c 	add	pc, r1, #124	; 0x7c
        2676c0:	e3370000 	teq	r7, #0	; 0x0
        2676c4:	0a000021 	beq	267750 <TView::Delete(void)+0x1cc>
        2676c8:	e52d806c 	str	r8, [sp, -#108]!
        2676cc:	e28d0008 	add	r0, sp, #8	; 0x8
        2676d0:	eb652ca7 	bl	1bb2974 <$setjmp>
        2676d4:	e3300000 	teq	r0, #0	; 0x0
        2676d8:	1a000013 	bne	26772c <TView::Delete(void)+0x1a8>
        2676dc:	e1a0000d 	mov	r0, sp
        2676e0:	eb65e265 	bl	1be007c <$AddExceptionHandler>
        2676e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2676e8:	e3a03000 	mov	r3, #0	; 0x0
        2676ec:	e92d0008 	stmdb	sp!, {r3}
        2676f0:	e1a00006 	mov	r0, r6
        2676f4:	eb656a94 	bl	1bc214c <$AllocateRefHandle(long)>
        2676f8:	e58d0004 	str	r0, [sp, #4]	; fField4
        2676fc:	e28d2004 	add	r2, sp, #4	; 0x4
        267700:	e59f1020 	ldr	r1, [pc, #20]	; 267728 <TView::Delete(void)+0x1a4>	; fField20
        267704:	e1a00004 	mov	r0, r4
        267708:	e3a03000 	mov	r3, #0	; 0x0
        26770c:	eb658fb3 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        267710:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        267714:	eb656ea8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        267718:	e28dd004 	add	sp, sp, #4	; 0x4
        26771c:	ea000008 	b	267744 <TView::Delete(void)+0x1c0>
        267720:	00684f48 	rsbeq	r4, r8, r8, asr #30
        267724:	0c101930 	ldceq	9, cr1, [r0], -#192
        267728:	00685080 	rsbeq	r5, r8, r0, lsl #1
        26772c:	e59d0060 	ldr	r0, [sp, #96]
        267730:	e5951000 	ldr	r1, [r5]
        267734:	eb65ee96 	bl	1be3194 <$Subexception>
        267738:	e3300000 	teq	r0, #0	; 0x0
        26773c:	01a0000d 	moveq	r0, sp
        267740:	0b65ea83 	bleq	1be2154 <$NextHandler>
        267744:	e1a0000d 	mov	r0, sp
        267748:	eb65e65a 	bl	1be10b8 <$ExitHandler>
        26774c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        267750:	e1b00009 	movs	r0, r9
        267754:	e2849024 	add	r9, r4, #36	; 0x24
        267758:	1594001c 	ldrne	r0, [r4, #28]	; fField28
        26775c:	15900008 	ldrne	r0, [r0, #8]	; fField8
        267760:	12000209 	andne	r0, r0, #-1879048192	; 0x90000000
        267764:	13300209 	teqne	r0, #-1879048192	; 0x90000000
        267768:	0a000012 	beq	2677b8 <TView::Delete(void)+0x234>
        26776c:	e24dd004 	sub	sp, sp, #4	; 0x4
        267770:	e59f11f0 	ldr	r1, [pc, #1f0]	; 267968 <TView::Delete(void)+0x3e4>
        267774:	e5911000 	ldr	r1, [r1]
        267778:	e5911000 	ldr	r1, [r1]
        26777c:	e5990000 	ldr	r0, [r9]
        267780:	e5900000 	ldr	r0, [r0]
        267784:	eb6572af 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        267788:	e3300000 	teq	r0, #0	; 0x0
        26778c:	0a000008 	beq	2677b4 <TView::Delete(void)+0x230>
        267790:	e1a00006 	mov	r0, r6
        267794:	eb656a6c 	bl	1bc214c <$AllocateRefHandle(long)>
        267798:	e58d0000 	str	r0, [sp]
        26779c:	e1a0200d 	mov	r2, sp
        2677a0:	e59f11c0 	ldr	r1, [pc, #1c0]	; 267968 <TView::Delete(void)+0x3e4>
        2677a4:	e1a00004 	mov	r0, r4
        2677a8:	eb61d59b 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        2677ac:	e59d0000 	ldr	r0, [sp]
        2677b0:	eb656e81 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2677b4:	e28dd004 	add	sp, sp, #4	; 0x4
        2677b8:	e1a00004 	mov	r0, r4
        2677bc:	e3a01017 	mov	r1, #23	; 0x17
        2677c0:	eb658b5c 	bl	1bca538 <TView::$GetCacheProto(long)>
        2677c4:	eb656a60 	bl	1bc214c <$AllocateRefHandle(long)>
        2677c8:	e1a07000 	mov	r7, r0
        2677cc:	e5900000 	ldr	r0, [r0]
        2677d0:	e3300002 	teq	r0, #2	; 0x2
        2677d4:	0a00001a 	beq	267844 <TView::Delete(void)+0x2c0>
        2677d8:	eb6576b3 	bl	1bc52ac <$Length(long)>
        2677dc:	e1a0a000 	mov	sl, r0
        2677e0:	e3a08000 	mov	r8, #0	; 0x0
        2677e4:	e3500000 	cmp	r0, #0	; 0x0
        2677e8:	da000015 	ble	267844 <TView::Delete(void)+0x2c0>
        2677ec:	e24dd008 	sub	sp, sp, #8	; 0x8
        2677f0:	e1a00006 	mov	r0, r6
        2677f4:	eb656a54 	bl	1bc214c <$AllocateRefHandle(long)>
        2677f8:	e58d0000 	str	r0, [sp]
        2677fc:	e1a0500d 	mov	r5, sp
        267800:	e1a01008 	mov	r1, r8
        267804:	e5970000 	ldr	r0, [r7]
        267808:	eb657291 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        26780c:	eb656a4e 	bl	1bc214c <$AllocateRefHandle(long)>
        267810:	e58d0004 	str	r0, [sp, #4]	; fField4
        267814:	e28d1004 	add	r1, sp, #4	; 0x4
        267818:	e1a00004 	mov	r0, r4
        26781c:	e1a02005 	mov	r2, r5
        267820:	eb61d57d 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        267824:	e59d0000 	ldr	r0, [sp]
        267828:	eb656e63 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26782c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        267830:	eb656e61 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        267834:	e28dd008 	add	sp, sp, #8	; 0x8
        267838:	e2888002 	add	r8, r8, #2	; 0x2
        26783c:	e158000a 	cmp	r8, sl
        267840:	baffffe9 	blt	2677ec <TView::Delete(void)+0x268>
        267844:	e1a00004 	mov	r0, r4
        267848:	e3a0101c 	mov	r1, #28	; 0x1c
        26784c:	eb658b39 	bl	1bca538 <TView::$GetCacheProto(long)>
        267850:	e5870000 	str	r0, [r7]
        267854:	e3300002 	teq	r0, #2	; 0x2
        267858:	0a00001a 	beq	2678c8 <TView::Delete(void)+0x344>
        26785c:	eb657692 	bl	1bc52ac <$Length(long)>
        267860:	e1a0a000 	mov	sl, r0
        267864:	e3a08000 	mov	r8, #0	; 0x0
        267868:	e3500000 	cmp	r0, #0	; 0x0
        26786c:	da000015 	ble	2678c8 <TView::Delete(void)+0x344>
        267870:	e24dd008 	sub	sp, sp, #8	; 0x8
        267874:	e1a00006 	mov	r0, r6
        267878:	eb656a33 	bl	1bc214c <$AllocateRefHandle(long)>
        26787c:	e58d0000 	str	r0, [sp]
        267880:	e1a0500d 	mov	r5, sp
        267884:	e1a01008 	mov	r1, r8
        267888:	e5970000 	ldr	r0, [r7]
        26788c:	eb657270 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        267890:	eb656a2d 	bl	1bc214c <$AllocateRefHandle(long)>
        267894:	e58d0004 	str	r0, [sp, #4]	; fField4
        267898:	e28d1004 	add	r1, sp, #4	; 0x4
        26789c:	e1a00004 	mov	r0, r4
        2678a0:	e1a02005 	mov	r2, r5
        2678a4:	eb61d55c 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        2678a8:	e59d0000 	ldr	r0, [sp]
        2678ac:	eb656e42 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2678b0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2678b4:	eb656e40 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2678b8:	e28dd008 	add	sp, sp, #8	; 0x8
        2678bc:	e2888002 	add	r8, r8, #2	; 0x2
        2678c0:	e158000a 	cmp	r8, sl
        2678c4:	baffffe9 	blt	267870 <TView::Delete(void)+0x2ec>
        2678c8:	e1a00004 	mov	r0, r4
        2678cc:	eb658700 	bl	1bc94d4 <TView::$Clipper( const(void))>
        2678d0:	e3300000 	teq	r0, #0	; 0x0
        2678d4:	0a000013 	beq	267928 <TView::Delete(void)+0x3a4>
        2678d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2678dc:	e1a05000 	mov	r5, r0
        2678e0:	e2800004 	add	r0, r0, #4	; 0x4
        2678e4:	e3a01000 	mov	r1, #0	; 0x0
        2678e8:	eb6082da 	bl	1a88458 <TRegionStruct::$__dt(void)>
        2678ec:	e1a00005 	mov	r0, r5
        2678f0:	e3a01000 	mov	r1, #0	; 0x0
        2678f4:	eb6082d7 	bl	1a88458 <TRegionStruct::$__dt(void)>
        2678f8:	e1a00005 	mov	r0, r5
        2678fc:	eb659777 	bl	1bcd6e0 <$__dl(void *)>
        267900:	e1a00006 	mov	r0, r6
        267904:	eb656a10 	bl	1bc214c <$AllocateRefHandle(long)>
        267908:	e58d0000 	str	r0, [sp]
        26790c:	e1a0200d 	mov	r2, sp
        267910:	e1a00009 	mov	r0, r9
        267914:	e59f1050 	ldr	r1, [pc, #50]	; 26796c <TView::Delete(void)+0x3e8>
        267918:	eb657a92 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        26791c:	e59d0000 	ldr	r0, [sp]
        267920:	eb656e25 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        267924:	e28dd004 	add	sp, sp, #4	; 0x4
        267928:	e1a01004 	mov	r1, r4
        26792c:	e59f003c 	ldr	r0, [pc, #3c]	; 267970 <TView::Delete(void)+0x3ec>
        267930:	e5900000 	ldr	r0, [r0]
        267934:	eb60b449 	bl	1a94a60 <TRootView::$ForgetAboutView(TView *)>
        267938:	e594002c 	ldr	r0, [r4, #44]	; fField44
        26793c:	e3800801 	orr	r0, r0, #65536	; 0x10000
        267940:	e584002c 	str	r0, [r4, #44]	; fField44
        267944:	e1b00004 	movs	r0, r4
        267948:	0a000003 	beq	26795c <TView::Delete(void)+0x3d8>
        26794c:	e3a01001 	mov	r1, #1	; 0x1
        267950:	e5902000 	ldr	r2, [r0]
        267954:	e1a0e00f 	mov	lr, pc
        267958:	e282f008 	add	pc, r2, #8	; 0x8
        26795c:	e1a00007 	mov	r0, r7
        267960:	eb656e15 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        267964:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        267968:	00684f28 	rsbeq	r4, r8, r8, lsr #30
        26796c:	00684f40 	rsbeq	r4, r8, r0, asr #30
        267970:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TView::SetupVisRgn( const(void))
 * Address: 00267974
 */
TView::SetupVisRgn( const(void)) {
    /*
        267974:	e1a0c00d 	mov	ip, sp
        267978:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        26797c:	e24cb004 	sub	fp, ip, #4	; 0x4
        267980:	e1a04000 	mov	r4, r0
        267984:	e1a07001 	mov	r7, r1
        267988:	e24dd018 	sub	sp, sp, #24	; 0x18
        26798c:	e28d0004 	add	r0, sp, #4	; 0x4
        267990:	eb607e92 	bl	1a873e0 <TRegionVar::$__ct(void)>
        267994:	e24dd004 	sub	sp, sp, #4	; 0x4
        267998:	e1a0000d 	mov	r0, sp
        26799c:	eb661f80 	bl	1bef7a4 <$GetPort(GrafPort **)>
        2679a0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        2679a4:	e5900024 	ldr	r0, [r0, #36]	; fField36
        2679a8:	e58d0000 	str	r0, [sp]
        2679ac:	e1a06000 	mov	r6, r0
        2679b0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2679b4:	eb63973e 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        2679b8:	e59f8034 	ldr	r8, [pc, #34]	; 2679f4 <TView::SetupVisRgn( const(void))+0x80>
        2679bc:	e5980000 	ldr	r0, [r8]
        2679c0:	e1370000 	teq	r7, r0
        2679c4:	0a000029 	beq	267a70 <TView::SetupVisRgn( const(void))+0xfc>
        2679c8:	e1a00007 	mov	r0, r7
        2679cc:	eb6586c0 	bl	1bc94d4 <TView::$Clipper( const(void))>
        2679d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2679d4:	e3300000 	teq	r0, #0	; 0x0
        2679d8:	0a000006 	beq	2679f8 <TView::SetupVisRgn( const(void))+0x84>
        2679dc:	e1a02006 	mov	r2, r6
        2679e0:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        2679e4:	e1a00006 	mov	r0, r6
        2679e8:	eb63aff8 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        2679ec:	e28dd004 	add	sp, sp, #4	; 0x4
        2679f0:	ea00001e 	b	267a70 <TView::SetupVisRgn( const(void))+0xfc>
        2679f4:	0c101934 	ldceq	9, cr1, [r0], -#208
        2679f8:	e5970008 	ldr	r0, [r7, #8]	; fField8
        2679fc:	e3100020 	tst	r0, #32	; 0x20
        267a00:	0a00000a 	beq	267a30 <TView::SetupVisRgn( const(void))+0xbc>
        267a04:	e24dd014 	sub	sp, sp, #20	; 0x14
        267a08:	e2871010 	add	r1, r7, #16	; 0x10
        267a0c:	e28d0004 	add	r0, sp, #4	; 0x4
        267a10:	eb60827e 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        267a14:	e28d0004 	add	r0, sp, #4	; 0x4
        267a18:	e58d0000 	str	r0, [sp]
        267a1c:	e1a01000 	mov	r1, r0
        267a20:	e1a02006 	mov	r2, r6
        267a24:	e1a00006 	mov	r0, r6
        267a28:	eb63afe8 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        267a2c:	e28dd014 	add	sp, sp, #20	; 0x14
        267a30:	e1a05006 	mov	r5, r6
        267a34:	e1a01007 	mov	r1, r7
        267a38:	e1a0000d 	mov	r0, sp
        267a3c:	eb658ac0 	bl	1bca544 <TView::$GetFrontMask( const(void))>
        267a40:	e1a00006 	mov	r0, r6
        267a44:	e1a02005 	mov	r2, r5
        267a48:	e59d1000 	ldr	r1, [sp]
        267a4c:	eb63971e 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
        267a50:	e1a0000d 	mov	r0, sp
        267a54:	e3a01000 	mov	r1, #0	; 0x0
        267a58:	eb608689 	bl	1a89484 <TRegion::$__dt(void)>
        267a5c:	e597701c 	ldr	r7, [r7, #28]	; fField28
        267a60:	e28dd004 	add	sp, sp, #4	; 0x4
        267a64:	e5980000 	ldr	r0, [r8]
        267a68:	e1370000 	teq	r7, r0
        267a6c:	1affffd5 	bne	2679c8 <TView::SetupVisRgn( const(void))+0x54>
        267a70:	e28d1004 	add	r1, sp, #4	; 0x4
        267a74:	e1a00004 	mov	r0, r4
        267a78:	eb608269 	bl	1a88424 <TRegion::$__ct(TRegionVar &)>
        267a7c:	e28d0004 	add	r0, sp, #4	; 0x4
        267a80:	e3a01000 	mov	r1, #0	; 0x0
        267a84:	eb60826e 	bl	1a88444 <TRegionVar::$__dt(void)>
        267a88:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TView::Draw(TRect const &, unsigned char)
 * Address: 00267a8c
 */
TView::Draw(TRect const &, unsigned char) {
    /*
        267a8c:	e1a0c00d 	mov	ip, sp
        267a90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        267a94:	e24cb004 	sub	fp, ip, #4	; 0x4
        267a98:	e1a04000 	mov	r4, r0
        267a9c:	e20250ff 	and	r5, r2, #255	; 0xff
        267aa0:	e24dd014 	sub	sp, sp, #20	; 0x14
        267aa4:	e28d0004 	add	r0, sp, #4	; 0x4
        267aa8:	eb608258 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        267aac:	e28d0004 	add	r0, sp, #4	; 0x4
        267ab0:	e1a02005 	mov	r2, r5
        267ab4:	e58d0000 	str	r0, [sp]
        267ab8:	e1a00004 	mov	r0, r4
        267abc:	e49d1004 	ldr	r1, [sp], #4	; fField4
        267ac0:	eb668ec7 	bl	1c0b5e4 <TView::$Draw(TBaseRegion, unsigned char)>
        267ac4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::Draw(TBaseRegion, unsigned char)
 * Address: 00267ac8
 */
TView::Draw(TBaseRegion, unsigned char) {
    /*
        267ac8:	e1a0c00d 	mov	ip, sp
        267acc:	e92dd9f7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, fp, ip, lr, pc}
        267ad0:	e24cb004 	sub	fp, ip, #4	; 0x4
        267ad4:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
        267ad8:	e20020ff 	and	r2, r0, #255	; 0xff
        267adc:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        267ae0:	e5901008 	ldr	r1, [r0, #8]	; fField8
        267ae4:	e3110001 	tst	r1, #1	; 0x1
        267ae8:	e3a07000 	mov	r7, #0	; 0x0
        267aec:	e3a04001 	mov	r4, #1	; 0x1
        267af0:	0a000001 	beq	267afc <TView::Draw(TBaseRegion, unsigned char)+0x34>
        267af4:	e3110102 	tst	r1, #-2147483648	; 0x80000000
        267af8:	0a000001 	beq	267b04 <TView::Draw(TBaseRegion, unsigned char)+0x3c>
        267afc:	e3320000 	teq	r2, #0	; 0x0
        267b00:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        267b04:	e24dd010 	sub	sp, sp, #16	; 0x10
        267b08:	e51b1028 	ldr	r1, [fp, -#40]	; fField40
        267b0c:	e5911000 	ldr	r1, [r1]
        267b10:	e2811004 	add	r1, r1, #4	; 0x4
        267b14:	e28d2008 	add	r2, sp, #8	; 0x8
        267b18:	e8911008 	ldmia	r1, {r3, ip}
        267b1c:	e8821008 	stmia	r2, {r3, ip}
        267b20:	e1a0100d 	mov	r1, sp
        267b24:	e5902000 	ldr	r2, [r0]
        267b28:	e1a0e00f 	mov	lr, pc
        267b2c:	e282f024 	add	pc, r2, #36	; 0x24
        267b30:	e1a0100d 	mov	r1, sp
        267b34:	e28d0008 	add	r0, sp, #8	; 0x8
        267b38:	eb60d4c6 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
        267b3c:	e3300000 	teq	r0, #0	; 0x0
        267b40:	0a0000fe 	beq	267f40 <TView::Draw(TBaseRegion, unsigned char)+0x478>
        267b44:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        267b48:	eb658661 	bl	1bc94d4 <TView::$Clipper( const(void))>
        267b4c:	e1b06000 	movs	r6, r0
        267b50:	e59f5060 	ldr	r5, [pc, #60]	; 267bb8 <TView::Draw(TBaseRegion, unsigned char)+0xf0>
        267b54:	0a00001a 	beq	267bc4 <TView::Draw(TBaseRegion, unsigned char)+0xfc>
        267b58:	e5d50008 	ldrb	r0, [r5, #8]	; fField8
        267b5c:	e3300000 	teq	r0, #0	; 0x0
        267b60:	1a000017 	bne	267bc4 <TView::Draw(TBaseRegion, unsigned char)+0xfc>
        267b64:	e5950014 	ldr	r0, [r5, #20]	; fField20
        267b68:	e3300000 	teq	r0, #0	; 0x0
        267b6c:	1a000006 	bne	267b8c <TView::Draw(TBaseRegion, unsigned char)+0xc4>
        267b70:	e5854014 	str	r4, [r5, #20]	; fField20
        267b74:	e59f0040 	ldr	r0, [pc, #40]	; 267bbc <TView::Draw(TBaseRegion, unsigned char)+0xf4>	; fField40
        267b78:	e1a04000 	mov	r4, r0
        267b7c:	eb607e1c 	bl	1a873f4 <TRegionStruct::$__ct(void)>
        267b80:	e59f0038 	ldr	r0, [pc, #38]	; 267bc0 <TView::Draw(TBaseRegion, unsigned char)+0xf8>
        267b84:	eb5e71bb 	bl	1a04278 <$__push_ddtor(void (*)(void))>
        267b88:	e585400c 	str	r4, [r5, #12]	; fField12
        267b8c:	e59f4028 	ldr	r4, [pc, #28]	; 267bbc <TView::Draw(TBaseRegion, unsigned char)+0xf4>	; fField28
        267b90:	e5942000 	ldr	r2, [r4]
        267b94:	e51b1028 	ldr	r1, [fp, -#40]	; fField40
        267b98:	e5960004 	ldr	r0, [r6, #4]	; fField4
        267b9c:	eb63af8b 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        267ba0:	e5940000 	ldr	r0, [r4]
        267ba4:	eb639adc 	bl	1b4e71c <$EmptyRgn(Region **)>
        267ba8:	e3300000 	teq	r0, #0	; 0x0
        267bac:	13a00000 	movne	r0, #0	; 0x0
        267bb0:	03a00001 	moveq	r0, #1	; 0x1
        267bb4:	ea000005 	b	267bd0 <TView::Draw(TBaseRegion, unsigned char)+0x108>
        267bb8:	0c104f58 	ldceq	15, cr4, [r0], -#352
        267bbc:	0c104f68 	ldceq	15, cr4, [r0], -#416
        267bc0:	0001a24c 	andeq	sl, r1, ip, asr #4
        267bc4:	e1a0000d 	mov	r0, sp
        267bc8:	e51b1028 	ldr	r1, [fp, -#40]	; fField40
        267bcc:	eb63af71 	bl	1b53998 <$RectInRgn(Rect *, Region **)>
        267bd0:	e3300000 	teq	r0, #0	; 0x0
        267bd4:	0a0000d9 	beq	267f40 <TView::Draw(TBaseRegion, unsigned char)+0x478>
        267bd8:	e1a04007 	mov	r4, r7
        267bdc:	e52d7004 	str	r7, [sp, -#4]!	; fField4
        267be0:	e52d7004 	str	r7, [sp, -#4]!	; fField4
        267be4:	e5d50008 	ldrb	r0, [r5, #8]	; fField8
        267be8:	e3300000 	teq	r0, #0	; 0x0
        267bec:	1a00000e 	bne	267c2c <TView::Draw(TBaseRegion, unsigned char)+0x164>
        267bf0:	e24dd004 	sub	sp, sp, #4	; 0x4
        267bf4:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        267bf8:	eb658a5c 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        267bfc:	e3300000 	teq	r0, #0	; 0x0
        267c00:	0a000008 	beq	267c28 <TView::Draw(TBaseRegion, unsigned char)+0x160>
        267c04:	e1a0000d 	mov	r0, sp
        267c08:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
        267c0c:	eb65927f 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
        267c10:	e1a0000d 	mov	r0, sp
        267c14:	eb60ed6e 	bl	1aa31d4 <TRegion::$StealRegion(void)>
        267c18:	e58d0008 	str	r0, [sp, #8]	; fField8
        267c1c:	e1a0000d 	mov	r0, sp
        267c20:	e3a01000 	mov	r1, #0	; 0x0
        267c24:	eb608616 	bl	1a89484 <TRegion::$__dt(void)>
        267c28:	e28dd004 	add	sp, sp, #4	; 0x4
        267c2c:	e3a07000 	mov	r7, #0	; 0x0
        267c30:	e52d406c 	str	r4, [sp, -#108]!
        267c34:	e28d0008 	add	r0, sp, #8	; 0x8
        267c38:	eb652b4d 	bl	1bb2974 <$setjmp>
        267c3c:	e3300000 	teq	r0, #0	; 0x0
        267c40:	1a000099 	bne	267eac <TView::Draw(TBaseRegion, unsigned char)+0x3e4>
        267c44:	e1a0000d 	mov	r0, sp
        267c48:	eb65e10b 	bl	1be007c <$AddExceptionHandler>
        267c4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        267c50:	e59d0074 	ldr	r0, [sp, #116]
        267c54:	e3300000 	teq	r0, #0	; 0x0
        267c58:	0a000008 	beq	267c80 <TView::Draw(TBaseRegion, unsigned char)+0x1b8>
        267c5c:	e24dd004 	sub	sp, sp, #4	; 0x4
        267c60:	e1a0000d 	mov	r0, sp
        267c64:	eb661ece 	bl	1bef7a4 <$GetPort(GrafPort **)>
        267c68:	e49d0004 	ldr	r0, [sp], #4	; fField4
        267c6c:	e5900024 	ldr	r0, [r0, #36]	; fField36
        267c70:	e58d0000 	str	r0, [sp]
        267c74:	eb639aa8 	bl	1b4e71c <$EmptyRgn(Region **)>
        267c78:	e3300000 	teq	r0, #0	; 0x0
        267c7c:	1a000085 	bne	267e98 <TView::Draw(TBaseRegion, unsigned char)+0x3d0>
        267c80:	e59f613c 	ldr	r6, [pc, #13c]	; 267dc4 <TView::Draw(TBaseRegion, unsigned char)+0x2fc>
        267c84:	e5960000 	ldr	r0, [r6]
        267c88:	e59f5138 	ldr	r5, [pc, #138]	; 267dc8 <TView::Draw(TBaseRegion, unsigned char)+0x300>
        267c8c:	e3300000 	teq	r0, #0	; 0x0
        267c90:	0a000006 	beq	267cb0 <TView::Draw(TBaseRegion, unsigned char)+0x1e8>
        267c94:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        267c98:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        267c9c:	e5950000 	ldr	r0, [r5]
        267ca0:	e1310000 	teq	r1, r0
        267ca4:	03a01000 	moveq	r1, #0	; 0x0
        267ca8:	03a00000 	moveq	r0, #0	; 0x0
        267cac:	0b639259 	bleq	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        267cb0:	e28d1080 	add	r1, sp, #128	; 0x80
        267cb4:	e51b202c 	ldr	r2, [fp, -#44]	; fField44
        267cb8:	e1a00002 	mov	r0, r2
        267cbc:	e5922000 	ldr	r2, [r2]
        267cc0:	e1a0e00f 	mov	lr, pc
        267cc4:	e282f0fc 	add	pc, r2, #252	; 0xfc
        267cc8:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        267ccc:	e5900008 	ldr	r0, [r0, #8]	; fField8
        267cd0:	e3100020 	tst	r0, #32	; 0x20
        267cd4:	0a00001b 	beq	267d48 <TView::Draw(TBaseRegion, unsigned char)+0x280>
        267cd8:	e24dd018 	sub	sp, sp, #24	; 0x18
        267cdc:	eb60d44a 	bl	1a9ce0c <$NewCachedRgn(void)>
        267ce0:	e58d0088 	str	r0, [sp, #136]
        267ce4:	e24dd004 	sub	sp, sp, #4	; 0x4
        267ce8:	e1a0000d 	mov	r0, sp
        267cec:	eb661eac 	bl	1bef7a4 <$GetPort(GrafPort **)>
        267cf0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        267cf4:	e5900024 	ldr	r0, [r0, #36]	; fField36
        267cf8:	e58d0000 	str	r0, [sp]
        267cfc:	e59d1088 	ldr	r1, [sp, #136]
        267d00:	eb63966b 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        267d04:	e24dd008 	sub	sp, sp, #8	; 0x8
        267d08:	e1a0000d 	mov	r0, sp
        267d0c:	eb661ea4 	bl	1bef7a4 <$GetPort(GrafPort **)>
        267d10:	e49d0004 	ldr	r0, [sp], #4	; fField4
        267d14:	e5900024 	ldr	r0, [r0, #36]	; fField36
        267d18:	e58d0008 	str	r0, [sp, #8]	; fField8
        267d1c:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        267d20:	e2801010 	add	r1, r0, #16	; 0x10
        267d24:	e28d000c 	add	r0, sp, #12	; 0xc
        267d28:	eb6081b8 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        267d2c:	e28d000c 	add	r0, sp, #12	; 0xc
        267d30:	e58d0000 	str	r0, [sp]
        267d34:	e1a01000 	mov	r1, r0
        267d38:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        267d3c:	e1a00002 	mov	r0, r2
        267d40:	eb63af22 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        267d44:	e28dd01c 	add	sp, sp, #28	; 0x1c
        267d48:	e28d1080 	add	r1, sp, #128	; 0x80
        267d4c:	e51b202c 	ldr	r2, [fp, -#44]	; fField44
        267d50:	e1a00002 	mov	r0, r2
        267d54:	e5922000 	ldr	r2, [r2]
        267d58:	e1a0e00f 	mov	lr, pc
        267d5c:	e282ff41 	add	pc, r2, #260	; 0x104
        267d60:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        267d64:	e5900018 	ldr	r0, [r0, #24]	; fField24
        267d68:	e3100b02 	tst	r0, #2048	; 0x800
        267d6c:	0a000020 	beq	267df4 <TView::Draw(TBaseRegion, unsigned char)+0x32c>
        267d70:	e52d406c 	str	r4, [sp, -#108]!
        267d74:	e24dd004 	sub	sp, sp, #4	; 0x4
        267d78:	e28d000c 	add	r0, sp, #12	; 0xc
        267d7c:	eb652afc 	bl	1bb2974 <$setjmp>
        267d80:	e3300000 	teq	r0, #0	; 0x0
        267d84:	1a000010 	bne	267dcc <TView::Draw(TBaseRegion, unsigned char)+0x304>
        267d88:	e28d0004 	add	r0, sp, #4	; 0x4
        267d8c:	eb65e0ba 	bl	1be007c <$AddExceptionHandler>
        267d90:	e3a03000 	mov	r3, #0	; 0x0
        267d94:	e92d0008 	stmdb	sp!, {r3}
        267d98:	e3a00002 	mov	r0, #2	; 0x2
        267d9c:	eb6568ea 	bl	1bc214c <$AllocateRefHandle(long)>
        267da0:	e58d0004 	str	r0, [sp, #4]	; fField4
        267da4:	e28d2004 	add	r2, sp, #4	; 0x4
        267da8:	e3a03000 	mov	r3, #0	; 0x0
        267dac:	e3a0100b 	mov	r1, #11	; 0xb
        267db0:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        267db4:	eb658e08 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        267db8:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        267dbc:	eb656cfe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        267dc0:	ea000008 	b	267de8 <TView::Draw(TBaseRegion, unsigned char)+0x320>
        267dc4:	0c101940 	ldceq	9, cr1, [r0], -#256
        267dc8:	0c101930 	ldceq	9, cr1, [r0], -#192
        267dcc:	e59d0064 	ldr	r0, [sp, #100]
        267dd0:	e59f10d0 	ldr	r1, [pc, #d0]	; 267ea8 <TView::Draw(TBaseRegion, unsigned char)+0x3e0>
        267dd4:	e5911000 	ldr	r1, [r1]
        267dd8:	eb65eced 	bl	1be3194 <$Subexception>
        267ddc:	e3300000 	teq	r0, #0	; 0x0
        267de0:	028d0004 	addeq	r0, sp, #4	; 0x4
        267de4:	0b65e8da 	bleq	1be2154 <$NextHandler>
        267de8:	e28d0004 	add	r0, sp, #4	; 0x4
        267dec:	eb65e4b1 	bl	1be10b8 <$ExitHandler>
        267df0:	e28dd070 	add	sp, sp, #112	; 0x70
        267df4:	e3a02000 	mov	r2, #0	; 0x0
        267df8:	e24b102c 	sub	r1, fp, #44	; 0x2c
        267dfc:	e8910003 	ldmia	r1, {r0, r1}
        267e00:	eb6664ba 	bl	1c010f0 <TView::$DrawChildren(TBaseRegion, TView *)>
        267e04:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        267e08:	e5900008 	ldr	r0, [r0, #8]	; fField8
        267e0c:	e3100020 	tst	r0, #32	; 0x20
        267e10:	0a00000d 	beq	267e4c <TView::Draw(TBaseRegion, unsigned char)+0x384>
        267e14:	e59d8070 	ldr	r8, [sp, #112]
        267e18:	e24dd008 	sub	sp, sp, #8	; 0x8
        267e1c:	e1a0000d 	mov	r0, sp
        267e20:	eb661e5f 	bl	1bef7a4 <$GetPort(GrafPort **)>
        267e24:	e49d0004 	ldr	r0, [sp], #4	; fField4
        267e28:	e5900024 	ldr	r0, [r0, #36]	; fField36
        267e2c:	e58d0000 	str	r0, [sp]
        267e30:	e1a00008 	mov	r0, r8
        267e34:	e59d1000 	ldr	r1, [sp]
        267e38:	eb63961d 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        267e3c:	e28dd004 	add	sp, sp, #4	; 0x4
        267e40:	e59d0070 	ldr	r0, [sp, #112]
        267e44:	eb60a27c 	bl	1a9083c <$DisposeCachedRgn(Region **)>
        267e48:	e58d4070 	str	r4, [sp, #112]
        267e4c:	e28d1080 	add	r1, sp, #128	; 0x80
        267e50:	e51b202c 	ldr	r2, [fp, -#44]	; fField44
        267e54:	e1a00002 	mov	r0, r2
        267e58:	e5922000 	ldr	r2, [r2]
        267e5c:	e1a0e00f 	mov	lr, pc
        267e60:	e282fc01 	add	pc, r2, #256	; 0x100
        267e64:	e5960000 	ldr	r0, [r6]
        267e68:	e3300000 	teq	r0, #0	; 0x0
        267e6c:	0a000009 	beq	267e98 <TView::Draw(TBaseRegion, unsigned char)+0x3d0>
        267e70:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        267e74:	e5900020 	ldr	r0, [r0, #32]	; fField32
        267e78:	e5951000 	ldr	r1, [r5]
        267e7c:	e1300001 	teq	r0, r1
        267e80:	1a000004 	bne	267e98 <TView::Draw(TBaseRegion, unsigned char)+0x3d0>
        267e84:	e3a01000 	mov	r1, #0	; 0x0
        267e88:	e3a00000 	mov	r0, #0	; 0x0
        267e8c:	eb6391e3 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        267e90:	e5960000 	ldr	r0, [r6]
        267e94:	eb60f517 	bl	1aa52f8 <$Wait(unsigned long)>
        267e98:	e28dd004 	add	sp, sp, #4	; 0x4
        267e9c:	e1a0000d 	mov	r0, sp
        267ea0:	eb65e484 	bl	1be10b8 <$ExitHandler>
        267ea4:	ea000001 	b	267eb0 <TView::Draw(TBaseRegion, unsigned char)+0x3e8>
        267ea8:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        267eac:	e3a07001 	mov	r7, #1	; 0x1
        267eb0:	e59d0070 	ldr	r0, [sp, #112]
        267eb4:	e3300000 	teq	r0, #0	; 0x0
        267eb8:	0a00000c 	beq	267ef0 <TView::Draw(TBaseRegion, unsigned char)+0x428>
        267ebc:	e59d4070 	ldr	r4, [sp, #112]
        267ec0:	e24dd008 	sub	sp, sp, #8	; 0x8
        267ec4:	e1a0000d 	mov	r0, sp
        267ec8:	eb661e35 	bl	1bef7a4 <$GetPort(GrafPort **)>
        267ecc:	e49d0004 	ldr	r0, [sp], #4	; fField4
        267ed0:	e5900024 	ldr	r0, [r0, #36]	; fField36
        267ed4:	e58d0000 	str	r0, [sp]
        267ed8:	e1a00004 	mov	r0, r4
        267edc:	e59d1000 	ldr	r1, [sp]
        267ee0:	eb6395f3 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        267ee4:	e28dd004 	add	sp, sp, #4	; 0x4
        267ee8:	e59d0070 	ldr	r0, [sp, #112]
        267eec:	eb60a252 	bl	1a9083c <$DisposeCachedRgn(Region **)>
        267ef0:	e59d006c 	ldr	r0, [sp, #108]
        267ef4:	e3300000 	teq	r0, #0	; 0x0
        267ef8:	0a00000c 	beq	267f30 <TView::Draw(TBaseRegion, unsigned char)+0x468>
        267efc:	e59d406c 	ldr	r4, [sp, #108]
        267f00:	e24dd008 	sub	sp, sp, #8	; 0x8
        267f04:	e1a0000d 	mov	r0, sp
        267f08:	eb661e25 	bl	1bef7a4 <$GetPort(GrafPort **)>
        267f0c:	e49d0004 	ldr	r0, [sp], #4	; fField4
        267f10:	e5900024 	ldr	r0, [r0, #36]	; fField36
        267f14:	e58d0000 	str	r0, [sp]
        267f18:	e1a00004 	mov	r0, r4
        267f1c:	e59d1000 	ldr	r1, [sp]
        267f20:	eb6395e3 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        267f24:	e28dd004 	add	sp, sp, #4	; 0x4
        267f28:	e59d006c 	ldr	r0, [sp, #108]
        267f2c:	eb60a242 	bl	1a9083c <$DisposeCachedRgn(Region **)>
        267f30:	e3370000 	teq	r7, #0	; 0x0
        267f34:	11a0000d 	movne	r0, sp
        267f38:	1b65e885 	blne	1be2154 <$NextHandler>
        267f3c:	e28dd074 	add	sp, sp, #116	; 0x74
        267f40:	e59f003c 	ldr	r0, [pc, #3c]	; 267f84 <TView::Draw(TBaseRegion, unsigned char)+0x4bc>
        267f44:	e5d00000 	ldrb	r0, [r0]
        267f48:	e3300000 	teq	r0, #0	; 0x0
        267f4c:	0a00000b 	beq	267f80 <TView::Draw(TBaseRegion, unsigned char)+0x4b8>
        267f50:	e24dd010 	sub	sp, sp, #16	; 0x10
        267f54:	e1a0000d 	mov	r0, sp
        267f58:	eb639e1c 	bl	1b4f7d0 <$GetPenState(PenState *)>
        267f5c:	e3a00002 	mov	r0, #2	; 0x2
        267f60:	eb639e1e 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        267f64:	eb63aea1 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        267f68:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        267f6c:	e2800010 	add	r0, r0, #16	; 0x10
        267f70:	eb639e09 	bl	1b4f79c <$FrameRect(Rect *)>
        267f74:	e1a0000d 	mov	r0, sp
        267f78:	eb63ae9e 	bl	1b539f8 <$SetPenState(PenState *)>
        267f7c:	e28dd010 	add	sp, sp, #16	; 0x10
        267f80:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        267f84:	0c10193c 	ldceq	9, cr1, [r0], -#240
    */
}

/**
 * Symbol: TView::Update(TBaseRegion, TView *)
 * Address: 00267f88
 */
TView::Update(TBaseRegion, TView *) {
    /*
        267f88:	e1a0c00d 	mov	ip, sp
        267f8c:	e92dd877 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, fp, ip, lr, pc}
        267f90:	e24cb004 	sub	fp, ip, #4	; 0x4
        267f94:	e24dd018 	sub	sp, sp, #24	; 0x18
        267f98:	e28d0004 	add	r0, sp, #4	; 0x4
        267f9c:	eb607d0f 	bl	1a873e0 <TRegionVar::$__ct(void)>
        267fa0:	e24dd004 	sub	sp, sp, #4	; 0x4
        267fa4:	e1a0000d 	mov	r0, sp
        267fa8:	eb661dfd 	bl	1bef7a4 <$GetPort(GrafPort **)>
        267fac:	e49d0004 	ldr	r0, [sp], #4	; fField4
        267fb0:	e5900024 	ldr	r0, [r0, #36]	; fField36
        267fb4:	e58d0000 	str	r0, [sp]
        267fb8:	e1a04000 	mov	r4, r0
        267fbc:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        267fc0:	eb6395bb 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        267fc4:	e3a00000 	mov	r0, #0	; 0x0
        267fc8:	e52d006c 	str	r0, [sp, -#108]!
        267fcc:	e28d0008 	add	r0, sp, #8	; 0x8
        267fd0:	eb652a67 	bl	1bb2974 <$setjmp>
        267fd4:	e3300000 	teq	r0, #0	; 0x0
        267fd8:	1a00003c 	bne	2680d0 <TView::Update(TBaseRegion, TView *)+0x148>
        267fdc:	e1a0000d 	mov	r0, sp
        267fe0:	eb65e025 	bl	1be007c <$AddExceptionHandler>
        267fe4:	e1a02004 	mov	r2, r4
        267fe8:	e1a00004 	mov	r0, r4
        267fec:	e51b1020 	ldr	r1, [fp, -#32]	; fField32
        267ff0:	eb63ae76 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        267ff4:	e24dd008 	sub	sp, sp, #8	; 0x8
        267ff8:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        267ffc:	e5900000 	ldr	r0, [r0]
        268000:	e2800004 	add	r0, r0, #4	; 0x4
        268004:	e8905000 	ldmia	r0, {ip, lr}
        268008:	e88d5000 	stmia	sp, {ip, lr}
        26800c:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        268010:	e3300000 	teq	r0, #0	; 0x0
        268014:	051b0024 	ldreq	r0, [fp, -#36]	; fField36
        268018:	e590000c 	ldr	r0, [r0, #12]	; fField12
        26801c:	e310000f 	tst	r0, #15	; 0xf
        268020:	01a00004 	moveq	r0, r4
        268024:	0b6399c9 	bleq	1b4e750 <$EraseRgn(Region **)>
        268028:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        26802c:	e3300000 	teq	r0, #0	; 0x0
        268030:	159f601c 	ldrne	r6, [pc, #1c]	; 268054 <TView::Update(TBaseRegion, TView *)+0xcc>
        268034:	15961000 	ldrne	r1, [r6]
        268038:	11300001 	teqne	r0, r1
        26803c:	1a000005 	bne	268058 <TView::Update(TBaseRegion, TView *)+0xd0>
        268040:	e3a02000 	mov	r2, #0	; 0x0
        268044:	e24b1024 	sub	r1, fp, #36	; 0x24
        268048:	e8910003 	ldmia	r1, {r0, r1}
        26804c:	eb668d64 	bl	1c0b5e4 <TView::$Draw(TBaseRegion, unsigned char)>
        268050:	ea00001c 	b	2680c8 <TView::Update(TBaseRegion, TView *)+0x140>
        268054:	0c101934 	ldceq	9, cr1, [r0], -#208
        268058:	e5b0401c 	ldr	r4, [r0, #28]!	; fField28
        26805c:	e51b201c 	ldr	r2, [fp, -#28]	; fField28
        268060:	e3320000 	teq	r2, #0	; 0x0
        268064:	11a00004 	movne	r0, r4
        268068:	151b1020 	ldrne	r1, [fp, -#32]	; fField32
        26806c:	1b66641f 	blne	1c010f0 <TView::$DrawChildren(TBaseRegion, TView *)>
        268070:	e1a0100d 	mov	r1, sp
        268074:	e1a00004 	mov	r0, r4
        268078:	e5942000 	ldr	r2, [r4]
        26807c:	e1a0e00f 	mov	lr, pc
        268080:	e282fc01 	add	pc, r2, #256	; 0x100
        268084:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
        268088:	e1340000 	teq	r4, r0
        26808c:	15960000 	ldrne	r0, [r6]
        268090:	11340000 	teqne	r4, r0
        268094:	0a00000b 	beq	2680c8 <TView::Update(TBaseRegion, TView *)+0x140>
        268098:	e1a00004 	mov	r0, r4
        26809c:	e50b401c 	str	r4, [fp, -#28]	; fField28
        2680a0:	e594401c 	ldr	r4, [r4, #28]	; fField28
        2680a4:	e1a01000 	mov	r1, r0
        2680a8:	e5945020 	ldr	r5, [r4, #32]	; fField32
        2680ac:	e1a00005 	mov	r0, r5
        2680b0:	eb6600df 	bl	1be8434 <CList::$GetIdentityIndex(void *)>
        2680b4:	e2801001 	add	r1, r0, #1	; 0x1
        2680b8:	e1a00005 	mov	r0, r5
        2680bc:	eb65f8a0 	bl	1be6344 <CList::$At(long)>
        2680c0:	e50b001c 	str	r0, [fp, -#28]	; fField28
        2680c4:	eaffffe4 	b	26805c <TView::Update(TBaseRegion, TView *)+0xd4>
        2680c8:	e28dd008 	add	sp, sp, #8	; 0x8
        2680cc:	ea000006 	b	2680ec <TView::Update(TBaseRegion, TView *)+0x164>
        2680d0:	e59d0060 	ldr	r0, [sp, #96]
        2680d4:	e59f1058 	ldr	r1, [pc, #58]	; 268134 <TView::Update(TBaseRegion, TView *)+0x1ac>
        2680d8:	e5911000 	ldr	r1, [r1]
        2680dc:	eb65ec2c 	bl	1be3194 <$Subexception>
        2680e0:	e3300000 	teq	r0, #0	; 0x0
        2680e4:	01a0000d 	moveq	r0, sp
        2680e8:	0b65e819 	bleq	1be2154 <$NextHandler>
        2680ec:	e1a0000d 	mov	r0, sp
        2680f0:	eb65e3f0 	bl	1be10b8 <$ExitHandler>
        2680f4:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2680f8:	e59d4004 	ldr	r4, [sp, #4]	; fField4
        2680fc:	e24dd008 	sub	sp, sp, #8	; 0x8
        268100:	e1a0000d 	mov	r0, sp
        268104:	eb661da6 	bl	1bef7a4 <$GetPort(GrafPort **)>
        268108:	e49d0004 	ldr	r0, [sp], #4	; fField4
        26810c:	e5900024 	ldr	r0, [r0, #36]	; fField36
        268110:	e58d0000 	str	r0, [sp]
        268114:	e1a00004 	mov	r0, r4
        268118:	e59d1000 	ldr	r1, [sp]
        26811c:	eb639564 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        268120:	e28dd004 	add	sp, sp, #4	; 0x4
        268124:	e28d0004 	add	r0, sp, #4	; 0x4
        268128:	e3a01000 	mov	r1, #0	; 0x0
        26812c:	eb6080c4 	bl	1a88444 <TRegionVar::$__dt(void)>
        268130:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        268134:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TView::DrawChildren(TRect const &, TView *)
 * Address: 00268138
 */
TView::DrawChildren(TRect const &, TView *) {
    /*
        268138:	e1a0c00d 	mov	ip, sp
        26813c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        268140:	e24cb004 	sub	fp, ip, #4	; 0x4
        268144:	e1a05000 	mov	r5, r0
        268148:	e1a04002 	mov	r4, r2
        26814c:	e24dd014 	sub	sp, sp, #20	; 0x14
        268150:	e28d0004 	add	r0, sp, #4	; 0x4
        268154:	eb6080ad 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        268158:	e28d0004 	add	r0, sp, #4	; 0x4
        26815c:	e1a02004 	mov	r2, r4
        268160:	e58d0000 	str	r0, [sp]
        268164:	e1a00005 	mov	r0, r5
        268168:	e49d1004 	ldr	r1, [sp], #4	; fField4
        26816c:	eb6663df 	bl	1c010f0 <TView::$DrawChildren(TBaseRegion, TView *)>
        268170:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::DrawChildren(TBaseRegion, TView *)
 * Address: 00268174
 */
TView::DrawChildren(TBaseRegion, TView *) {
    /*
        268174:	e1a0c00d 	mov	ip, sp
        268178:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26817c:	e24cb004 	sub	fp, ip, #4	; 0x4
        268180:	e1a06001 	mov	r6, r1
        268184:	e1a05000 	mov	r5, r0
        268188:	e1a04002 	mov	r4, r2
        26818c:	e5900020 	ldr	r0, [r0, #32]	; fField32
        268190:	e5900000 	ldr	r0, [r0]
        268194:	e3300000 	teq	r0, #0	; 0x0
        268198:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        26819c:	e3a00000 	mov	r0, #0	; 0x0
        2681a0:	e52d006c 	str	r0, [sp, -#108]!
        2681a4:	e28d0008 	add	r0, sp, #8	; 0x8
        2681a8:	eb6529f1 	bl	1bb2974 <$setjmp>
        2681ac:	e3300000 	teq	r0, #0	; 0x0
        2681b0:	1a000017 	bne	268214 <TView::DrawChildren(TBaseRegion, TView *)+0xa0>
        2681b4:	e1a0000d 	mov	r0, sp
        2681b8:	eb65dfaf 	bl	1be007c <$AddExceptionHandler>
        2681bc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2681c0:	e1a0000d 	mov	r0, sp
        2681c4:	e5b51020 	ldr	r1, [r5, #32]!	; fField32
        2681c8:	eb608099 	bl	1a88434 <TListLoop::$__ct(CList *)>
        2681cc:	e1a0000d 	mov	r0, sp
        2681d0:	eb60d312 	bl	1a9ce20 <TListLoop::$Next(void)>
        2681d4:	e3300000 	teq	r0, #0	; 0x0
        2681d8:	0a00000b 	beq	26820c <TView::DrawChildren(TBaseRegion, TView *)+0x98>
        2681dc:	e3340000 	teq	r4, #0	; 0x0
        2681e0:	0a000002 	beq	2681f0 <TView::DrawChildren(TBaseRegion, TView *)+0x7c>
        2681e4:	e1340000 	teq	r4, r0
        2681e8:	1a000003 	bne	2681fc <TView::DrawChildren(TBaseRegion, TView *)+0x88>
        2681ec:	e3a04000 	mov	r4, #0	; 0x0
        2681f0:	e3a02000 	mov	r2, #0	; 0x0
        2681f4:	e1a01006 	mov	r1, r6
        2681f8:	eb668cf9 	bl	1c0b5e4 <TView::$Draw(TBaseRegion, unsigned char)>
        2681fc:	e1a0000d 	mov	r0, sp
        268200:	eb60d306 	bl	1a9ce20 <TListLoop::$Next(void)>
        268204:	e3300000 	teq	r0, #0	; 0x0
        268208:	1afffff3 	bne	2681dc <TView::DrawChildren(TBaseRegion, TView *)+0x68>
        26820c:	e28dd00c 	add	sp, sp, #12	; 0xc
        268210:	ea000006 	b	268230 <TView::DrawChildren(TBaseRegion, TView *)+0xbc>
        268214:	e59d0060 	ldr	r0, [sp, #96]
        268218:	e59f101c 	ldr	r1, [pc, #1c]	; 26823c <TView::DrawChildren(TBaseRegion, TView *)+0xc8>
        26821c:	e5911000 	ldr	r1, [r1]
        268220:	eb65ebdb 	bl	1be3194 <$Subexception>
        268224:	e3300000 	teq	r0, #0	; 0x0
        268228:	01a0000d 	moveq	r0, sp
        26822c:	0b65e7c8 	bleq	1be2154 <$NextHandler>
        268230:	e1a0000d 	mov	r0, sp
        268234:	eb65e39f 	bl	1be10b8 <$ExitHandler>
        268238:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        26823c:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TView::SetCustomPattern(RefVar const &)
 * Address: 00268240
 */
TView::SetCustomPattern(RefVar const &) {
    /*
        268240:	e1a0c00d 	mov	ip, sp
        268244:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        268248:	e24cb004 	sub	fp, ip, #4	; 0x4
        26824c:	e24dd004 	sub	sp, sp, #4	; 0x4
        268250:	eb6588c0 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        268254:	eb6567bc 	bl	1bc214c <$AllocateRefHandle(long)>
        268258:	e58d0000 	str	r0, [sp]
        26825c:	e1a0000d 	mov	r0, sp
        268260:	e59d1000 	ldr	r1, [sp]
        268264:	e5911000 	ldr	r1, [r1]
        268268:	e3310002 	teq	r1, #2	; 0x2
        26826c:	0a000008 	beq	268294 <TView::SetCustomPattern(RefVar const &)+0x54>
        268270:	e24dd008 	sub	sp, sp, #8	; 0x8
        268274:	e1a0200d 	mov	r2, sp
        268278:	e28d1004 	add	r1, sp, #4	; 0x4
        26827c:	e3a03001 	mov	r3, #1	; 0x1
        268280:	eb61df73 	bl	1ae0054 <$GetPattern(RefVar const &, unsigned char *, PixelMap ***, unsigned char)>
        268284:	e3300000 	teq	r0, #0	; 0x0
        268288:	159d0000 	ldrne	r0, [sp]
        26828c:	1b63add7 	blne	1b539f0 <$SetFgPattern(PixelMap **)>
        268290:	e28dd008 	add	sp, sp, #8	; 0x8
        268294:	e3a04001 	mov	r4, #1	; 0x1
        268298:	e59d0000 	ldr	r0, [sp]
        26829c:	eb656bc6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2682a0:	e1a00004 	mov	r0, r4
        2682a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::PreDraw(TRect &)
 * Address: 002682a8
 */
TView::PreDraw(TRect &) {
    /*
        2682a8:	e1a0c00d 	mov	ip, sp
        2682ac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2682b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2682b4:	e1a04000 	mov	r4, r0
        2682b8:	e1a0a001 	mov	sl, r1
        2682bc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2682c0:	e59f9270 	ldr	r9, [pc, #270]	; 268538 <TView::PreDraw(TRect &)+0x290>
        2682c4:	e5990000 	ldr	r0, [r9]
        2682c8:	e59f126c 	ldr	r1, [pc, #26c]	; 26853c <TView::PreDraw(TRect &)+0x294>
        2682cc:	e3300000 	teq	r0, #0	; 0x0
        2682d0:	e58d1008 	str	r1, [sp, #8]	; fField8
        2682d4:	15940020 	ldrne	r0, [r4, #32]	; fField32
        2682d8:	159d1008 	ldrne	r1, [sp, #8]	; fField8
        2682dc:	15911000 	ldrne	r1, [r1]
        2682e0:	11300001 	teqne	r0, r1
        2682e4:	13a01000 	movne	r1, #0	; 0x0
        2682e8:	13a00000 	movne	r0, #0	; 0x0
        2682ec:	1b6390c9 	blne	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        2682f0:	e594500c 	ldr	r5, [r4, #12]	; fField12
        2682f4:	e1a00805 	mov	r0, r5, lsl #16
        2682f8:	e1a00820 	mov	r0, r0, lsr #16
        2682fc:	e3d00eff 	bics	r0, r0, #4080	; 0xff0
        268300:	0a0000ae 	beq	2685c0 <TView::PreDraw(TRect &)+0x318>
        268304:	e24dd008 	sub	sp, sp, #8	; 0x8
        268308:	e2840010 	add	r0, r4, #16	; 0x10
        26830c:	e58d000c 	str	r0, [sp, #12]	; fField12
        268310:	e8901008 	ldmia	r0, {r3, ip}
        268314:	e88d1008 	stmia	sp, {r3, ip}
        268318:	e21500f0 	ands	r0, r5, #240	; 0xf0
        26831c:	12050c0f 	andne	r0, r5, #3840	; 0xf00
        268320:	11a00420 	movne	r0, r0, lsr #8
        268324:	e2051803 	and	r1, r5, #196608	; 0x30000
        268328:	e0800821 	add	r0, r0, r1, lsr #16
        26832c:	e2601000 	rsb	r1, r0, #0	; 0x0
        268330:	e1a02001 	mov	r2, r1
        268334:	e1a0000d 	mov	r0, sp
        268338:	eb63a140 	bl	1b50840 <$InsetRect__FP4RectlT2>
        26833c:	e205040f 	and	r0, r5, #251658240	; 0xf000000
        268340:	e1a00c20 	mov	r0, r0, lsr #24
        268344:	e1a07080 	mov	r7, r0, lsl #1
        268348:	e205000f 	and	r0, r5, #15	; 0xf
        26834c:	e1a06000 	mov	r6, r0
        268350:	eb6590ac 	bl	1bcc608 <$SetPattern(long)>
        268354:	e3300000 	teq	r0, #0	; 0x0
        268358:	0a000009 	beq	268384 <TView::PreDraw(TRect &)+0xdc>
        26835c:	e336000e 	teq	r6, #14	; 0xe
        268360:	059f11d8 	ldreq	r1, [pc, #1d8]	; 268540 <TView::PreDraw(TRect &)+0x298>
        268364:	01a00004 	moveq	r0, r4
        268368:	0b658ca1 	bleq	1bcb5f4 <TView::$SetCustomPattern(RefVar const &)>
        26836c:	e1a02007 	mov	r2, r7
        268370:	e1a01007 	mov	r1, r7
        268374:	e1a0000d 	mov	r0, sp
        268378:	eb63a966 	bl	1b52918 <$PaintRoundRect__FP4RectlT2>
        26837c:	e336000e 	teq	r6, #14	; 0xe
        268380:	0b65845a 	bleq	1bc94f0 <$DisposeFgPattern(void)>
        268384:	e2050a0f 	and	r0, r5, #61440	; 0xf000
        268388:	e1a00620 	mov	r0, r0, lsr #12
        26838c:	e1a08000 	mov	r8, r0
        268390:	eb65909c 	bl	1bcc608 <$SetPattern(long)>
        268394:	e3300000 	teq	r0, #0	; 0x0
        268398:	0a000086 	beq	2685b8 <TView::PreDraw(TRect &)+0x310>
        26839c:	e59f11a0 	ldr	r1, [pc, #1a0]	; 268544 <TView::PreDraw(TRect &)+0x29c>
        2683a0:	e1a00004 	mov	r0, r4
        2683a4:	eb658867 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        2683a8:	eb656767 	bl	1bc214c <$AllocateRefHandle(long)>
        2683ac:	e1a07000 	mov	r7, r0
        2683b0:	e5900000 	ldr	r0, [r0]
        2683b4:	e3300002 	teq	r0, #2	; 0x2
        2683b8:	0a00007c 	beq	2685b0 <TView::PreDraw(TRect &)+0x308>
        2683bc:	e3100003 	tst	r0, #3	; 0x3
        2683c0:	01a00140 	moveq	r0, r0, asr #2
        2683c4:	0a000000 	beq	2683cc <TView::PreDraw(TRect &)+0x124>
        2683c8:	eb656753 	bl	1bc211c <$_RINTError(long)>
        2683cc:	e1a06000 	mov	r6, r0
        2683d0:	e3500000 	cmp	r0, #0	; 0x0
        2683d4:	da000075 	ble	2685b0 <TView::PreDraw(TRect &)+0x308>
        2683d8:	e338000e 	teq	r8, #14	; 0xe
        2683dc:	059f1164 	ldreq	r1, [pc, #164]	; 268548 <TView::PreDraw(TRect &)+0x2a0>
        2683e0:	01a00004 	moveq	r0, r4
        2683e4:	0b658c82 	bleq	1bcb5f4 <TView::$SetCustomPattern(RefVar const &)>
        2683e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2683ec:	e1a0100d 	mov	r1, sp
        2683f0:	e1a00004 	mov	r0, r4
        2683f4:	eb658851 	bl	1bca540 <TView::$GetChildOrigin(TPoint *)>
        2683f8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2683fc:	e0865840 	add	r5, r6, r0, asr #16
        268400:	e59d0000 	ldr	r0, [sp]
        268404:	e1b00840 	movs	r0, r0, asr #16
        268408:	0a000004 	beq	268420 <TView::PreDraw(TRect &)+0x178>
        26840c:	e59d1000 	ldr	r1, [sp]
        268410:	e1a01841 	mov	r1, r1, asr #16
        268414:	e1a00006 	mov	r0, r6
        268418:	eb652948 	bl	1bb2940 <$__rt_sdiv>
        26841c:	e0455001 	sub	r5, r5, r1
        268420:	e3a01001 	mov	r1, #1	; 0x1
        268424:	e3a00001 	mov	r0, #1	; 0x1
        268428:	eb63a93e 	bl	1b52928 <$PenSize__FlT1>
        26842c:	e3a00009 	mov	r0, #9	; 0x9
        268430:	eb63a93a 	bl	1b52920 <$PenMode(long)>
        268434:	e24dd008 	sub	sp, sp, #8	; 0x8
        268438:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        26843c:	e8905000 	ldmia	r0, {ip, lr}
        268440:	e88d5000 	stmia	sp, {ip, lr}
        268444:	e1a0200d 	mov	r2, sp
        268448:	e1a0100d 	mov	r1, sp
        26844c:	e1a0000a 	mov	r0, sl
        268450:	eb63ad5d 	bl	1b539cc <$SectRect__FP4RectN21>
        268454:	e59f10f0 	ldr	r1, [pc, #f0]	; 26854c <TView::PreDraw(TRect &)+0x2a4>
        268458:	e1a00004 	mov	r0, r4
        26845c:	eb658839 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        268460:	e5870000 	str	r0, [r7]
        268464:	e59f10e4 	ldr	r1, [pc, #e4]	; 268550 <TView::PreDraw(TRect &)+0x2a8>
        268468:	e5911000 	ldr	r1, [r1]
        26846c:	e5911000 	ldr	r1, [r1]
        268470:	eb656f6e 	bl	1bc4230 <$EQRef__FlT1>
        268474:	e3300000 	teq	r0, #0	; 0x0
        268478:	0a000035 	beq	268554 <TView::PreDraw(TRect &)+0x2ac>
        26847c:	e0855006 	add	r5, r5, r6
        268480:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        268484:	e1550840 	cmp	r5, r0, asr #16
        268488:	ca000013 	bgt	2684dc <TView::PreDraw(TRect &)+0x234>
        26848c:	e1a00086 	mov	r0, r6, lsl #1
        268490:	e58d0014 	str	r0, [sp, #20]	; fField20
        268494:	e59d0000 	ldr	r0, [sp]
        268498:	e1550840 	cmp	r5, r0, asr #16
        26849c:	ba000009 	blt	2684c8 <TView::PreDraw(TRect &)+0x220>
        2684a0:	e2851001 	add	r1, r5, #1	; 0x1
        2684a4:	e1a0a001 	mov	sl, r1
        2684a8:	e5940012 	ldr	r0, [r4, #18]	; fField18
        2684ac:	e1a00840 	mov	r0, r0, asr #16
        2684b0:	eb63a502 	bl	1b518c0 <$MoveTo__FlT1>
        2684b4:	e1a0100a 	mov	r1, sl
        2684b8:	e5940016 	ldr	r0, [r4, #22]	; fField22
        2684bc:	e1a00840 	mov	r0, r0, asr #16
        2684c0:	e2400001 	sub	r0, r0, #1	; 0x1
        2684c4:	eb63a0ec 	bl	1b5087c <$LineTo__FlT1>
        2684c8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2684cc:	e0805005 	add	r5, r0, r5
        2684d0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2684d4:	e1550840 	cmp	r5, r0, asr #16
        2684d8:	daffffed 	ble	268494 <TView::PreDraw(TRect &)+0x1ec>
        2684dc:	e5940012 	ldr	r0, [r4, #18]	; fField18
        2684e0:	e0865840 	add	r5, r6, r0, asr #16
        2684e4:	e59d0006 	ldr	r0, [sp, #6]
        2684e8:	e1550840 	cmp	r5, r0, asr #16
        2684ec:	ca00002c 	bgt	2685a4 <TView::PreDraw(TRect &)+0x2fc>
        2684f0:	e1a06086 	mov	r6, r6, lsl #1
        2684f4:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        2684f8:	e1550840 	cmp	r5, r0, asr #16
        2684fc:	ba000008 	blt	268524 <TView::PreDraw(TRect &)+0x27c>
        268500:	e5941010 	ldr	r1, [r4, #16]	; fField16
        268504:	e1a01841 	mov	r1, r1, asr #16
        268508:	e1a00005 	mov	r0, r5
        26850c:	eb63a4eb 	bl	1b518c0 <$MoveTo__FlT1>
        268510:	e5940014 	ldr	r0, [r4, #20]	; fField20
        268514:	e1a00840 	mov	r0, r0, asr #16
        268518:	e2401001 	sub	r1, r0, #1	; 0x1
        26851c:	e1a00005 	mov	r0, r5
        268520:	eb63a0d5 	bl	1b5087c <$LineTo__FlT1>
        268524:	e0865005 	add	r5, r6, r5
        268528:	e59d0006 	ldr	r0, [sp, #6]
        26852c:	e1550840 	cmp	r5, r0, asr #16
        268530:	daffffef 	ble	2684f4 <TView::PreDraw(TRect &)+0x24c>
        268534:	ea00001a 	b	2685a4 <TView::PreDraw(TRect &)+0x2fc>
        268538:	0c101940 	ldceq	9, cr1, [r0], -#256
        26853c:	0c101930 	ldceq	9, cr1, [r0], -#192
        268540:	00684fa8 	rsbeq	r4, r8, r8, lsr #31
        268544:	00685058 	rsbeq	r5, r8, r8, asr r0
        268548:	00685050 	rsbeq	r5, r8, r0, asr r0
        26854c:	00685018 	rsbeq	r5, r8, r8, lsl r0
        268550:	006847e8 	rsbeq	r4, r8, r8, ror #15
        268554:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        268558:	e1550840 	cmp	r5, r0, asr #16
        26855c:	ca000010 	bgt	2685a4 <TView::PreDraw(TRect &)+0x2fc>
        268560:	e59d0000 	ldr	r0, [sp]
        268564:	e1550840 	cmp	r5, r0, asr #16
        268568:	ba000009 	blt	268594 <TView::PreDraw(TRect &)+0x2ec>
        26856c:	e2451001 	sub	r1, r5, #1	; 0x1
        268570:	e1a0a001 	mov	sl, r1
        268574:	e5940012 	ldr	r0, [r4, #18]	; fField18
        268578:	e1a00840 	mov	r0, r0, asr #16
        26857c:	eb63a4cf 	bl	1b518c0 <$MoveTo__FlT1>
        268580:	e1a0100a 	mov	r1, sl
        268584:	e5940016 	ldr	r0, [r4, #22]	; fField22
        268588:	e1a00840 	mov	r0, r0, asr #16
        26858c:	e2400001 	sub	r0, r0, #1	; 0x1
        268590:	eb63a0b9 	bl	1b5087c <$LineTo__FlT1>
        268594:	e0855006 	add	r5, r5, r6
        268598:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        26859c:	e1550840 	cmp	r5, r0, asr #16
        2685a0:	daffffee 	ble	268560 <TView::PreDraw(TRect &)+0x2b8>
        2685a4:	e338000e 	teq	r8, #14	; 0xe
        2685a8:	0b6583d0 	bleq	1bc94f0 <$DisposeFgPattern(void)>
        2685ac:	e28dd00c 	add	sp, sp, #12	; 0xc
        2685b0:	e1a00007 	mov	r0, r7
        2685b4:	eb656b00 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2685b8:	eb63a8d9 	bl	1b52924 <$PenNormal(void)>
        2685bc:	e28dd008 	add	sp, sp, #8	; 0x8
        2685c0:	e5990000 	ldr	r0, [r9]
        2685c4:	e3300000 	teq	r0, #0	; 0x0
        2685c8:	15b40020 	ldrne	r0, [r4, #32]!	; fField32
        2685cc:	159d1008 	ldrne	r1, [sp, #8]	; fField8
        2685d0:	15911000 	ldrne	r1, [r1]
        2685d4:	11300001 	teqne	r0, r1
        2685d8:	0a000004 	beq	2685f0 <TView::PreDraw(TRect &)+0x348>
        2685dc:	e3a01000 	mov	r1, #0	; 0x0
        2685e0:	e3a00000 	mov	r0, #0	; 0x0
        2685e4:	eb63900d 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        2685e8:	e5990000 	ldr	r0, [r9]
        2685ec:	eb60f341 	bl	1aa52f8 <$Wait(unsigned long)>
        2685f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::RealDraw(TRect &)
 * Address: 002685f4
 */
TView::RealDraw(TRect &) {
    /*
        2685f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::PostDraw(TRect &)
 * Address: 002685f8
 */
TView::PostDraw(TRect &) {
    /*
        2685f8:	e1a0c00d 	mov	ip, sp
        2685fc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        268600:	e24cb004 	sub	fp, ip, #4	; 0x4
        268604:	e1a04000 	mov	r4, r0
        268608:	e24dd008 	sub	sp, sp, #8	; 0x8
        26860c:	e3a0a000 	mov	sl, #0	; 0x0
        268610:	e59f90f4 	ldr	r9, [pc, #f4]	; 26870c <TView::PostDraw(TRect &)+0x114>
        268614:	e5990000 	ldr	r0, [r9]
        268618:	e59f80f0 	ldr	r8, [pc, #f0]	; 268710 <TView::PostDraw(TRect &)+0x118>
        26861c:	e3300000 	teq	r0, #0	; 0x0
        268620:	15941020 	ldrne	r1, [r4, #32]	; fField32
        268624:	15980000 	ldrne	r0, [r8]
        268628:	11310000 	teqne	r1, r0
        26862c:	13a01000 	movne	r1, #0	; 0x0
        268630:	13a00000 	movne	r0, #0	; 0x0
        268634:	1b638ff7 	blne	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        268638:	e5940008 	ldr	r0, [r4, #8]	; fField8
        26863c:	e3100402 	tst	r0, #33554432	; 0x2000000
        268640:	0a000004 	beq	268658 <TView::PostDraw(TRect &)+0x60>
        268644:	e1a00004 	mov	r0, r4
        268648:	e3a01001 	mov	r1, #1	; 0x1
        26864c:	e5942000 	ldr	r2, [r4]
        268650:	e1a0e00f 	mov	lr, pc
        268654:	e282f058 	add	pc, r2, #88	; 0x58
        268658:	e24dd008 	sub	sp, sp, #8	; 0x8
        26865c:	e594700c 	ldr	r7, [r4, #12]	; fField12
        268660:	e2840010 	add	r0, r4, #16	; 0x10
        268664:	e58d000c 	str	r0, [sp, #12]	; fField12
        268668:	e8901008 	ldmia	r0, {r3, ip}
        26866c:	e88d1008 	stmia	sp, {r3, ip}
        268670:	e3c704ff 	bic	r0, r7, #-16777216	; 0xff000000
        268674:	e3c008f3 	bic	r0, r0, #15925248	; 0xf30000
        268678:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        26867c:	e3d0000f 	bics	r0, r0, #15	; 0xf
        268680:	e59f108c 	ldr	r1, [pc, #8c]	; 268714 <TView::PostDraw(TRect &)+0x11c>	; fField8
        268684:	e58d1008 	str	r1, [sp, #8]	; fField8
        268688:	0a0000ae 	beq	268948 <TView::PostDraw(TRect &)+0x350>
        26868c:	e21750f0 	ands	r5, r7, #240	; 0xf0
        268690:	03a00000 	moveq	r0, #0	; 0x0
        268694:	12070c0f 	andne	r0, r7, #3840	; 0xf00
        268698:	11a00420 	movne	r0, r0, lsr #8
        26869c:	e2071803 	and	r1, r7, #196608	; 0x30000
        2686a0:	e0800821 	add	r0, r0, r1, lsr #16
        2686a4:	e2601000 	rsb	r1, r0, #0	; 0x0
        2686a8:	e1a02001 	mov	r2, r1
        2686ac:	e1a0000d 	mov	r0, sp
        2686b0:	eb63a062 	bl	1b50840 <$InsetRect__FP4RectlT2>
        2686b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2686b8:	e207040f 	and	r0, r7, #251658240	; 0xf000000
        2686bc:	e1a00c20 	mov	r0, r0, lsr #24
        2686c0:	e1a06080 	mov	r6, r0, lsl #1
        2686c4:	e1a05225 	mov	r5, r5, lsr #4
        2686c8:	eb639c3e 	bl	1b4f7c8 <$GetFgPattern(void)>
        2686cc:	e58d0000 	str	r0, [sp]
        2686d0:	e1a00005 	mov	r0, r5
        2686d4:	eb658fcb 	bl	1bcc608 <$SetPattern(long)>
        2686d8:	e3300000 	teq	r0, #0	; 0x0
        2686dc:	0a00007b 	beq	2688d0 <TView::PostDraw(TRect &)+0x2d8>
        2686e0:	e2070c0f 	and	r0, r7, #3840	; 0xf00
        2686e4:	e1a00420 	mov	r0, r0, lsr #8
        2686e8:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2686ec:	e1a01000 	mov	r1, r0
        2686f0:	eb63a88c 	bl	1b52928 <$PenSize__FlT1>
        2686f4:	e335000e 	teq	r5, #14	; 0xe
        2686f8:	1a000007 	bne	26871c <TView::PostDraw(TRect &)+0x124>
        2686fc:	e59f1014 	ldr	r1, [pc, #14]	; 268718 <TView::PostDraw(TRect &)+0x120>
        268700:	e1a00004 	mov	r0, r4
        268704:	eb658bba 	bl	1bcb5f4 <TView::$SetCustomPattern(RefVar const &)>
        268708:	ea000018 	b	268770 <TView::PostDraw(TRect &)+0x178>
        26870c:	0c101940 	ldceq	9, cr1, [r0], -#256
        268710:	0c101930 	ldceq	9, cr1, [r0], -#192
        268714:	0c101934 	ldceq	9, cr1, [r0], -#208
        268718:	00684fd8 	ldreqd	r4, [r8], -#248
        26871c:	e335000f 	teq	r5, #15	; 0xf
        268720:	1335000d 	teqne	r5, #13	; 0xd
        268724:	1a000011 	bne	268770 <TView::PostDraw(TRect &)+0x178>
        268728:	e59d0000 	ldr	r0, [sp]
        26872c:	e3300002 	teq	r0, #2	; 0x2
        268730:	0a00000e 	beq	268770 <TView::PostDraw(TRect &)+0x178>
        268734:	e24dd004 	sub	sp, sp, #4	; 0x4
        268738:	e1a0000d 	mov	r0, sp
        26873c:	eb661c18 	bl	1bef7a4 <$GetPort(GrafPort **)>
        268740:	e49d0004 	ldr	r0, [sp], #4	; fField4
        268744:	e5900010 	ldr	r0, [r0, #16]	; fField16
        268748:	e20000ff 	and	r0, r0, #255	; 0xff
        26874c:	e3500001 	cmp	r0, #1	; 0x1
        268750:	da000006 	ble	268770 <TView::PostDraw(TRect &)+0x178>
        268754:	e3a0a001 	mov	sl, #1	; 0x1
        268758:	e3a02099 	mov	r2, #153	; 0x99
        26875c:	e2822c99 	add	r2, r2, #39168	; 0x9900
        268760:	e1a01002 	mov	r1, r2
        268764:	e1a00002 	mov	r0, r2
        268768:	eb63b4df 	bl	1b55aec <$GetStdGrayPattern__FUlN21>
        26876c:	eb63ac9f 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        268770:	e3360000 	teq	r6, #0	; 0x0
        268774:	1a000002 	bne	268784 <TView::PostDraw(TRect &)+0x18c>
        268778:	e28d0008 	add	r0, sp, #8	; 0x8
        26877c:	eb639c06 	bl	1b4f79c <$FrameRect(Rect *)>
        268780:	ea000003 	b	268794 <TView::PostDraw(TRect &)+0x19c>
        268784:	e1a02006 	mov	r2, r6
        268788:	e1a01006 	mov	r1, r6
        26878c:	e28d0008 	add	r0, sp, #8	; 0x8
        268790:	eb639c03 	bl	1b4f7a4 <$FrameRoundRect__FP4RectlT2>
        268794:	e335000f 	teq	r5, #15	; 0xf
        268798:	1335000d 	teqne	r5, #13	; 0xd
        26879c:	1a000046 	bne	2688bc <TView::PostDraw(TRect &)+0x2c4>
        2687a0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2687a4:	e5900000 	ldr	r0, [r0]
        2687a8:	e5900078 	ldr	r0, [r0, #120]
        2687ac:	e1300004 	teq	r0, r4
        2687b0:	13a01002 	movne	r1, #2	; 0x2
        2687b4:	13a00002 	movne	r0, #2	; 0x2
        2687b8:	03a01004 	moveq	r1, #4	; 0x4
        2687bc:	03a00004 	moveq	r0, #4	; 0x4
        2687c0:	eb63a858 	bl	1b52928 <$PenSize__FlT1>
        2687c4:	e33a0000 	teq	sl, #0	; 0x0
        2687c8:	1b658348 	blne	1bc94f0 <$DisposeFgPattern(void)>
        2687cc:	e3a00005 	mov	r0, #5	; 0x5
        2687d0:	eb658f8c 	bl	1bcc608 <$SetPattern(long)>
        2687d4:	e3360000 	teq	r6, #0	; 0x0
        2687d8:	1a000002 	bne	2687e8 <TView::PostDraw(TRect &)+0x1f0>
        2687dc:	e28d0008 	add	r0, sp, #8	; 0x8
        2687e0:	eb639bed 	bl	1b4f79c <$FrameRect(Rect *)>
        2687e4:	ea000003 	b	2687f8 <TView::PostDraw(TRect &)+0x200>
        2687e8:	e1a02006 	mov	r2, r6
        2687ec:	e1a01006 	mov	r1, r6
        2687f0:	e28d0008 	add	r0, sp, #8	; 0x8
        2687f4:	eb639bea 	bl	1b4f7a4 <$FrameRoundRect__FP4RectlT2>
        2687f8:	e335000d 	teq	r5, #13	; 0xd
        2687fc:	1a00002e 	bne	2688bc <TView::PostDraw(TRect &)+0x2c4>
        268800:	e24dd00c 	sub	sp, sp, #12	; 0xc
        268804:	e59f00a8 	ldr	r0, [pc, #a8]	; 2688b4 <TView::PostDraw(TRect &)+0x2bc>
        268808:	e5900000 	ldr	r0, [r0]
        26880c:	e5900000 	ldr	r0, [r0]
        268810:	eb65664d 	bl	1bc214c <$AllocateRefHandle(long)>
        268814:	e1a05000 	mov	r5, r0
        268818:	e59f0098 	ldr	r0, [pc, #98]	; 2688b8 <TView::PostDraw(TRect &)+0x2c0>
        26881c:	e5900000 	ldr	r0, [r0]
        268820:	e5901000 	ldr	r1, [r0]
        268824:	e5950000 	ldr	r0, [r5]
        268828:	eb656e8c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        26882c:	eb656646 	bl	1bc214c <$AllocateRefHandle(long)>
        268830:	e58d0000 	str	r0, [sp]
        268834:	e1a0000d 	mov	r0, sp
        268838:	e28d1004 	add	r1, sp, #4	; 0x4
        26883c:	eb60b08d 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        268840:	e59d0000 	ldr	r0, [sp]
        268844:	eb656a5c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        268848:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        26884c:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        268850:	e0400001 	sub	r0, r0, r1
        268854:	e1a00800 	mov	r0, r0, lsl #16
        268858:	e1a00840 	mov	r0, r0, asr #16
        26885c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        268860:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        268864:	e0411002 	sub	r1, r1, r2
        268868:	e1a01801 	mov	r1, r1, lsl #16
        26886c:	e0400841 	sub	r0, r0, r1, asr #16
        268870:	e59d1016 	ldr	r1, [sp, #22]	; fField22
        268874:	e1a01841 	mov	r1, r1, asr #16
        268878:	e08110c0 	add	r1, r1, r0, asr #1
        26887c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        268880:	e1a00840 	mov	r0, r0, asr #16
        268884:	e2802002 	add	r2, r0, #2	; 0x2
        268888:	e28d0004 	add	r0, sp, #4	; 0x4
        26888c:	eb63a415 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        268890:	e28d1004 	add	r1, sp, #4	; 0x4
        268894:	e59f0018 	ldr	r0, [pc, #18]	; 2688b4 <TView::PostDraw(TRect &)+0x2bc>	; fField18
        268898:	e3a03008 	mov	r3, #8	; 0x8
        26889c:	e3a02000 	mov	r2, #0	; 0x0
        2688a0:	eb60a81f 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
        2688a4:	e1a00005 	mov	r0, r5
        2688a8:	eb656a43 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2688ac:	e28dd00c 	add	sp, sp, #12	; 0xc
        2688b0:	ea000003 	b	2688c4 <TView::PostDraw(TRect &)+0x2cc>
        2688b4:	00680268 	rsbeq	r0, r8, r8, ror #4
        2688b8:	00682190 	streqb	r2, [r8], -#16	; fField16
        2688bc:	e335000e 	teq	r5, #14	; 0xe
        2688c0:	0b65830a 	bleq	1bc94f0 <$DisposeFgPattern(void)>
        2688c4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2688c8:	eb63ac48 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        2688cc:	e28dd004 	add	sp, sp, #4	; 0x4
        2688d0:	e2070703 	and	r0, r7, #786432	; 0xc0000
        2688d4:	e1b05920 	movs	r5, r0, lsr #18
        2688d8:	0a000019 	beq	268944 <TView::PostDraw(TRect &)+0x34c>
        2688dc:	eb63a810 	bl	1b52924 <$PenNormal(void)>
        2688e0:	e1a01005 	mov	r1, r5
        2688e4:	e1a00005 	mov	r0, r5
        2688e8:	eb63a80e 	bl	1b52928 <$PenSize__FlT1>
        2688ec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2688f0:	e0850840 	add	r0, r5, r0, asr #16
        2688f4:	e0801006 	add	r1, r0, r6
        2688f8:	e59d000a 	ldr	r0, [sp, #10]
        2688fc:	e1a00840 	mov	r0, r0, asr #16
        268900:	eb63a3ee 	bl	1b518c0 <$MoveTo__FlT1>
        268904:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        268908:	e1a01841 	mov	r1, r1, asr #16
        26890c:	e59d000a 	ldr	r0, [sp, #10]
        268910:	e1a00840 	mov	r0, r0, asr #16
        268914:	eb639fd8 	bl	1b5087c <$LineTo__FlT1>
        268918:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        26891c:	e1a01841 	mov	r1, r1, asr #16
        268920:	e59d0006 	ldr	r0, [sp, #6]
        268924:	e0850840 	add	r0, r5, r0, asr #16
        268928:	e0800006 	add	r0, r0, r6
        26892c:	eb63a3e3 	bl	1b518c0 <$MoveTo__FlT1>
        268930:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        268934:	e1a01841 	mov	r1, r1, asr #16
        268938:	e59d000a 	ldr	r0, [sp, #10]
        26893c:	e1a00840 	mov	r0, r0, asr #16
        268940:	eb639fcd 	bl	1b5087c <$LineTo__FlT1>
        268944:	e28dd004 	add	sp, sp, #4	; 0x4
        268948:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        26894c:	e5900000 	ldr	r0, [r0]
        268950:	e5900074 	ldr	r0, [r0, #116]
        268954:	e1300004 	teq	r0, r4
        268958:	1a000058 	bne	268ac0 <TView::PostDraw(TRect &)+0x4c8>
        26895c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        268960:	e28d1004 	add	r1, sp, #4	; 0x4
        268964:	e28d000c 	add	r0, sp, #12	; 0xc
        268968:	e8905000 	ldmia	r0, {ip, lr}
        26896c:	e8815000 	stmia	r1, {ip, lr}
        268970:	e59f1178 	ldr	r1, [pc, #178]	; 268af0 <TView::PostDraw(TRect &)+0x4f8>
        268974:	e1a00004 	mov	r0, r4
        268978:	eb6586f2 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        26897c:	eb6565f2 	bl	1bc214c <$AllocateRefHandle(long)>
        268980:	e58d0000 	str	r0, [sp]
        268984:	e5900000 	ldr	r0, [r0]
        268988:	e3300002 	teq	r0, #2	; 0x2
        26898c:	0a000009 	beq	2689b8 <TView::PostDraw(TRect &)+0x3c0>
        268990:	e28d1004 	add	r1, sp, #4	; 0x4
        268994:	e1a0000d 	mov	r0, sp
        268998:	eb60b036 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        26899c:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2689a0:	e5901002 	ldr	r1, [r0, #2]	; fField2
        2689a4:	e1a01841 	mov	r1, r1, asr #16
        2689a8:	e5902000 	ldr	r2, [r0]
        2689ac:	e1a02842 	mov	r2, r2, asr #16
        2689b0:	e28d0004 	add	r0, sp, #4	; 0x4
        2689b4:	eb63a3cb 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        2689b8:	e28d0004 	add	r0, sp, #4	; 0x4
        2689bc:	e3a02000 	mov	r2, #0	; 0x0
        2689c0:	e3a01002 	mov	r1, #2	; 0x2
        2689c4:	eb639f9d 	bl	1b50840 <$InsetRect__FP4RectlT2>
        2689c8:	e3a00005 	mov	r0, #5	; 0x5
        2689cc:	eb658f0d 	bl	1bcc608 <$SetPattern(long)>
        2689d0:	e3a01001 	mov	r1, #1	; 0x1
        2689d4:	e3a00001 	mov	r0, #1	; 0x1
        2689d8:	eb63a7d2 	bl	1b52928 <$PenSize__FlT1>
        2689dc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2689e0:	e1a00840 	mov	r0, r0, asr #16
        2689e4:	e2401002 	sub	r1, r0, #2	; 0x2
        2689e8:	e59d0006 	ldr	r0, [sp, #6]
        2689ec:	e1a00840 	mov	r0, r0, asr #16
        2689f0:	eb63a3b2 	bl	1b518c0 <$MoveTo__FlT1>
        2689f4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2689f8:	e1a00840 	mov	r0, r0, asr #16
        2689fc:	e2401002 	sub	r1, r0, #2	; 0x2
        268a00:	e59d000a 	ldr	r0, [sp, #10]
        268a04:	e1a00840 	mov	r0, r0, asr #16
        268a08:	e2400001 	sub	r0, r0, #1	; 0x1
        268a0c:	eb639f9a 	bl	1b5087c <$LineTo__FlT1>
        268a10:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        268a14:	e1a00840 	mov	r0, r0, asr #16
        268a18:	e2401003 	sub	r1, r0, #3	; 0x3
        268a1c:	e59d0006 	ldr	r0, [sp, #6]
        268a20:	e1a00840 	mov	r0, r0, asr #16
        268a24:	e2800001 	add	r0, r0, #1	; 0x1
        268a28:	eb63a3a4 	bl	1b518c0 <$MoveTo__FlT1>
        268a2c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        268a30:	e1a00840 	mov	r0, r0, asr #16
        268a34:	e2401003 	sub	r1, r0, #3	; 0x3
        268a38:	e59d000a 	ldr	r0, [sp, #10]
        268a3c:	e1a00840 	mov	r0, r0, asr #16
        268a40:	e2400002 	sub	r0, r0, #2	; 0x2
        268a44:	eb639f8c 	bl	1b5087c <$LineTo__FlT1>
        268a48:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        268a4c:	e1a00840 	mov	r0, r0, asr #16
        268a50:	e2801001 	add	r1, r0, #1	; 0x1
        268a54:	e59d0006 	ldr	r0, [sp, #6]
        268a58:	e1a00840 	mov	r0, r0, asr #16
        268a5c:	eb63a397 	bl	1b518c0 <$MoveTo__FlT1>
        268a60:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        268a64:	e1a00840 	mov	r0, r0, asr #16
        268a68:	e2801001 	add	r1, r0, #1	; 0x1
        268a6c:	e59d000a 	ldr	r0, [sp, #10]
        268a70:	e1a00840 	mov	r0, r0, asr #16
        268a74:	e2400001 	sub	r0, r0, #1	; 0x1
        268a78:	eb639f7f 	bl	1b5087c <$LineTo__FlT1>
        268a7c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        268a80:	e1a00840 	mov	r0, r0, asr #16
        268a84:	e2801002 	add	r1, r0, #2	; 0x2
        268a88:	e59d0006 	ldr	r0, [sp, #6]
        268a8c:	e1a00840 	mov	r0, r0, asr #16
        268a90:	e2800001 	add	r0, r0, #1	; 0x1
        268a94:	eb63a389 	bl	1b518c0 <$MoveTo__FlT1>
        268a98:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        268a9c:	e1a00840 	mov	r0, r0, asr #16
        268aa0:	e2801002 	add	r1, r0, #2	; 0x2
        268aa4:	e59d000a 	ldr	r0, [sp, #10]
        268aa8:	e1a00840 	mov	r0, r0, asr #16
        268aac:	e2400002 	sub	r0, r0, #2	; 0x2
        268ab0:	eb639f71 	bl	1b5087c <$LineTo__FlT1>
        268ab4:	e59d0000 	ldr	r0, [sp]
        268ab8:	eb6569bf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        268abc:	e28dd00c 	add	sp, sp, #12	; 0xc
        268ac0:	e5990000 	ldr	r0, [r9]
        268ac4:	e3300000 	teq	r0, #0	; 0x0
        268ac8:	15b40020 	ldrne	r0, [r4, #32]!	; fField32
        268acc:	15981000 	ldrne	r1, [r8]
        268ad0:	11300001 	teqne	r0, r1
        268ad4:	0a000004 	beq	268aec <TView::PostDraw(TRect &)+0x4f4>
        268ad8:	e3a01000 	mov	r1, #0	; 0x0
        268adc:	e3a00000 	mov	r0, #0	; 0x0
        268ae0:	eb638ece 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        268ae4:	e5990000 	ldr	r0, [r9]
        268ae8:	eb60f202 	bl	1aa52f8 <$Wait(unsigned long)>
        268aec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        268af0:	006852f8 	streqd	r5, [r8], -#40	; fField40
    */
}

/**
 * Symbol: TView::__dt(void)
 * Address: 00268af4
 */
TView::~TView(void) {
    /*
        268af4:	e1a0c00d 	mov	ip, sp
        268af8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        268afc:	e24cb004 	sub	fp, ip, #4	; 0x4
        268b00:	e1a04000 	mov	r4, r0
        268b04:	e1a05001 	mov	r5, r1
        268b08:	e59f0028 	ldr	r0, [pc, #28]	; 268b38 <TView::__dt(void)+0x44>	; fField28
        268b0c:	e5840000 	str	r0, [r4]
        268b10:	e5940024 	ldr	r0, [r4, #36]	; fField36
        268b14:	eb6569a8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        268b18:	e1a00004 	mov	r0, r4
        268b1c:	e3a01000 	mov	r1, #0	; 0x0
        268b20:	eb60825b 	bl	1a89494 <TxObject::$__dt(void)>
        268b24:	e3150001 	tst	r5, #1	; 0x1
        268b28:	11a00004 	movne	r0, r4
        268b2c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        268b30:	1a607e41 	bne	1a8843c <$__dl__8TxObjectSFPv>
        268b34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        268b38:	0001f750 	andeq	pc, r1, r0, asr r7
    */
}

/**
 * Symbol: TView::Idle(long)
 * Address: 00268b3c
 */
TView::Idle(long) {
    /*
        268b3c:	e1a0c00d 	mov	ip, sp
        268b40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        268b44:	e24cb004 	sub	fp, ip, #4	; 0x4
        268b48:	e1a04000 	mov	r4, r0
        268b4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        268b50:	e3a06000 	mov	r6, #0	; 0x0
        268b54:	e3a00002 	mov	r0, #2	; 0x2
        268b58:	eb65657b 	bl	1bc214c <$AllocateRefHandle(long)>
        268b5c:	e1a05000 	mov	r5, r0
        268b60:	e3a03000 	mov	r3, #0	; 0x0
        268b64:	e92d0008 	stmdb	sp!, {r3}
        268b68:	e3a00002 	mov	r0, #2	; 0x2
        268b6c:	eb656576 	bl	1bc214c <$AllocateRefHandle(long)>
        268b70:	e58d0004 	str	r0, [sp, #4]	; fField4
        268b74:	e28d2004 	add	r2, sp, #4	; 0x4
        268b78:	e1a00004 	mov	r0, r4
        268b7c:	e3a03000 	mov	r3, #0	; 0x0
        268b80:	e3a0100c 	mov	r1, #12	; 0xc
        268b84:	eb658a94 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        268b88:	e5850000 	str	r0, [r5]
        268b8c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        268b90:	eb656989 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        268b94:	e5950000 	ldr	r0, [r5]
        268b98:	e3300002 	teq	r0, #2	; 0x2
        268b9c:	0a000006 	beq	268bbc <TView::Idle(long)+0x80>
        268ba0:	e2001003 	and	r1, r0, #3	; 0x3
        268ba4:	e3510000 	cmp	r1, #0	; 0x0
        268ba8:	1a000003 	bne	268bbc <TView::Idle(long)+0x80>
        268bac:	01a00140 	moveq	r0, r0, asr #2
        268bb0:	0a000000 	beq	268bb8 <TView::Idle(long)+0x7c>
        268bb4:	eb656558 	bl	1bc211c <$_RINTError(long)>
        268bb8:	e1a06000 	mov	r6, r0
        268bbc:	e1a00005 	mov	r0, r5
        268bc0:	eb65697d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        268bc4:	e1a00006 	mov	r0, r6
        268bc8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TView::DoCommand(RefVar const &)
 * Address: 00268bcc
 */
TView::DoCommand(RefVar const &) {
    /*
        268bcc:	e1a0c00d 	mov	ip, sp
        268bd0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        268bd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        268bd8:	e1a04000 	mov	r4, r0
        268bdc:	e1a05001 	mov	r5, r1
        268be0:	e5902000 	ldr	r2, [r0]
        268be4:	e1a0e00f 	mov	lr, pc
        268be8:	e282f01c 	add	pc, r2, #28	; 0x1c
        268bec:	e3300000 	teq	r0, #0	; 0x0
        268bf0:	1a000008 	bne	268c18 <TView::DoCommand(RefVar const &)+0x4c>
        268bf4:	e594101c 	ldr	r1, [r4, #28]	; fField28
        268bf8:	e1310004 	teq	r1, r4
        268bfc:	0a000005 	beq	268c18 <TView::DoCommand(RefVar const &)+0x4c>
        268c00:	e1a02001 	mov	r2, r1
        268c04:	e1a01005 	mov	r1, r5
        268c08:	e1a00002 	mov	r0, r2
        268c0c:	e5922000 	ldr	r2, [r2]
        268c10:	e1a0e00f 	mov	lr, pc
        268c14:	e282f010 	add	pc, r2, #16	; 0x10
        268c18:	e3300002 	teq	r0, #2	; 0x2
        268c1c:	03a00000 	moveq	r0, #0	; 0x0
        268c20:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::RealDoCommand(RefVar const &)
 * Address: 00268d38
 */
TView::RealDoCommand(RefVar const &) {
    /*
        268d38:	e1a0c00d 	mov	ip, sp
        268d3c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        268d40:	e24cb004 	sub	fp, ip, #4	; 0x4
        268d44:	e1a05000 	mov	r5, r0
        268d48:	e1a04001 	mov	r4, r1
        268d4c:	e3a01000 	mov	r1, #0	; 0x0
        268d50:	e56d1004 	strb	r1, [sp, -#4]!	; fField4
        268d54:	e1a00004 	mov	r0, r4
        268d58:	eb60f57a 	bl	1aa6348 <$CommandID(RefVar const &)>
        268d5c:	e1a0a000 	mov	sl, r0
        268d60:	e59f70e0 	ldr	r7, [pc, #e0]	; 268e48 <TView::RealDoCommand(RefVar const &)+0x110>
        268d64:	e59f60e0 	ldr	r6, [pc, #e0]	; 268e4c <TView::RealDoCommand(RefVar const &)+0x114>
        268d68:	e350002d 	cmp	r0, #45	; 0x2d
        268d6c:	0a0002ef 	beq	269930 <TView::RealDoCommand(RefVar const &)+0xbf8>
        268d70:	e59f80d8 	ldr	r8, [pc, #d8]	; 268e50 <TView::RealDoCommand(RefVar const &)+0x118>
        268d74:	e59f90d8 	ldr	r9, [pc, #d8]	; 268e54 <TView::RealDoCommand(RefVar const &)+0x11c>
        268d78:	ca00005c 	bgt	268ef0 <TView::RealDoCommand(RefVar const &)+0x1b8>
        268d7c:	e350001f 	cmp	r0, #31	; 0x1f
        268d80:	0a00039e 	beq	269c00 <TView::RealDoCommand(RefVar const &)+0xec8>
        268d84:	ca000033 	bgt	268e58 <TView::RealDoCommand(RefVar const &)+0x120>
        268d88:	e240000b 	sub	r0, r0, #11	; 0xb
        268d8c:	e350000d 	cmp	r0, #13	; 0xd
        268d90:	908ff100 	addls	pc, pc, r0, lsl #2
        268d94:	ea000397 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268d98:	ea00012a 	b	269248 <TView::RealDoCommand(RefVar const &)+0x510>
        268d9c:	ea0000f6 	b	26917c <TView::RealDoCommand(RefVar const &)+0x444>
        268da0:	ea00029f 	b	269824 <TView::RealDoCommand(RefVar const &)+0xaec>
        268da4:	ea000393 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268da8:	ea00029d 	b	269824 <TView::RealDoCommand(RefVar const &)+0xaec>
        268dac:	ea00029c 	b	269824 <TView::RealDoCommand(RefVar const &)+0xaec>
        268db0:	ea000390 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268db4:	ea00033d 	b	269ab0 <TView::RealDoCommand(RefVar const &)+0xd78>
        268db8:	ea00038e 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268dbc:	ea00038d 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268dc0:	ea00036c 	b	269b78 <TView::RealDoCommand(RefVar const &)+0xe40>
        268dc4:	ea00038b 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268dc8:	ea00038a 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268dcc:	e24dd028 	sub	sp, sp, #40	; 0x28
        268dd0:	e3a00001 	mov	r0, #1	; 0x1
        268dd4:	eb60cbf0 	bl	1a9bd9c <$MakeArray(long)>
        268dd8:	eb6564db 	bl	1bc214c <$AllocateRefHandle(long)>
        268ddc:	e58d0000 	str	r0, [sp]
        268de0:	e1a00004 	mov	r0, r4
        268de4:	eb61cbf8 	bl	1adbdcc <$GetStrokeBundleFromCommand(RefVar const &)>
        268de8:	eb6564d7 	bl	1bc214c <$AllocateRefHandle(long)>
        268dec:	e1a06000 	mov	r6, r0
        268df0:	e5902000 	ldr	r2, [r0]
        268df4:	e59d0000 	ldr	r0, [sp]
        268df8:	e5900000 	ldr	r0, [r0]
        268dfc:	e3a01000 	mov	r1, #0	; 0x0
        268e00:	eb657554 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        268e04:	e1a00006 	mov	r0, r6
        268e08:	eb6568eb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        268e0c:	e3a03000 	mov	r3, #0	; 0x0
        268e10:	e92d0008 	stmdb	sp!, {r3}
        268e14:	e28d2004 	add	r2, sp, #4	; 0x4
        268e18:	e1a00005 	mov	r0, r5
        268e1c:	e3a0101f 	mov	r1, #31	; 0x1f
        268e20:	eb6589ed 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        268e24:	e28dd004 	add	sp, sp, #4	; 0x4
        268e28:	e2500002 	subs	r0, r0, #2	; 0x2
        268e2c:	13a00001 	movne	r0, #1	; 0x1
        268e30:	e20010ff 	and	r1, r0, #255	; 0xff
        268e34:	e5cd1028 	strb	r1, [sp, #40]	; fField40
        268e38:	e1a00004 	mov	r0, r4
        268e3c:	eb60f544 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        268e40:	e59d0000 	ldr	r0, [sp]
        268e44:	ea000369 	b	269bf0 <TView::RealDoCommand(RefVar const &)+0xeb8>
        268e48:	0c10180c 	ldceq	8, cr1, [r0], -#48
        268e4c:	00683498 	streqb	r3, [r8], -#72
        268e50:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        268e54:	0c101934 	ldceq	9, cr1, [r0], -#208
        268e58:	e2400020 	sub	r0, r0, #32	; 0x20
        268e5c:	e350000c 	cmp	r0, #12	; 0xc
        268e60:	908ff100 	addls	pc, pc, r0, lsl #2
        268e64:	ea000363 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268e68:	ea000364 	b	269c00 <TView::RealDoCommand(RefVar const &)+0xec8>
        268e6c:	ea000361 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268e70:	ea000362 	b	269c00 <TView::RealDoCommand(RefVar const &)+0xec8>
        268e74:	ea000361 	b	269c00 <TView::RealDoCommand(RefVar const &)+0xec8>
        268e78:	ea00035e 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268e7c:	ea00035d 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268e80:	ea00035c 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268e84:	ea00035b 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268e88:	ea00035a 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268e8c:	ea00007f 	b	269090 <TView::RealDoCommand(RefVar const &)+0x358>
        268e90:	ea00009d 	b	26910c <TView::RealDoCommand(RefVar const &)+0x3d4>
        268e94:	ea0000b3 	b	269168 <TView::RealDoCommand(RefVar const &)+0x430>
        268e98:	e59f004c 	ldr	r0, [pc, #4c]	; 268eec <TView::RealDoCommand(RefVar const &)+0x1b4>	; fField4
        268e9c:	e5900000 	ldr	r0, [r0]
        268ea0:	e3300000 	teq	r0, #0	; 0x0
        268ea4:	0a0000aa 	beq	269154 <TView::RealDoCommand(RefVar const &)+0x41c>
        268ea8:	e1a00004 	mov	r0, r4
        268eac:	eb60f529 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        268eb0:	e3300842 	teq	r0, #4325376	; 0x420000
        268eb4:	0a0000a6 	beq	269154 <TView::RealDoCommand(RefVar const &)+0x41c>
        268eb8:	e3a01000 	mov	r1, #0	; 0x0
        268ebc:	e1a00005 	mov	r0, r5
        268ec0:	e595201c 	ldr	r2, [r5, #28]	; fField28
        268ec4:	e5993000 	ldr	r3, [r9]
        268ec8:	e1320003 	teq	r2, r3
        268ecc:	1a000004 	bne	268ee4 <TView::RealDoCommand(RefVar const &)+0x1ac>
        268ed0:	e1300003 	teq	r0, r3
        268ed4:	0a000099 	beq	269140 <TView::RealDoCommand(RefVar const &)+0x408>
        268ed8:	e5902028 	ldr	r2, [r0, #40]	; fField40
        268edc:	e3120101 	tst	r2, #1073741824	; 0x40000000
        268ee0:	0a000093 	beq	269134 <TView::RealDoCommand(RefVar const &)+0x3fc>
        268ee4:	e3a01001 	mov	r1, #1	; 0x1
        268ee8:	ea000094 	b	269140 <TView::RealDoCommand(RefVar const &)+0x408>
        268eec:	0c105524 	ldceq	5, cr5, [r0], -#144
        268ef0:	e350003f 	cmp	r0, #63	; 0x3f
        268ef4:	0a0001d8 	beq	26965c <TView::RealDoCommand(RefVar const &)+0x924>
        268ef8:	ca000034 	bgt	268fd0 <TView::RealDoCommand(RefVar const &)+0x298>
        268efc:	e3500031 	cmp	r0, #49	; 0x31
        268f00:	0a000247 	beq	269824 <TView::RealDoCommand(RefVar const &)+0xaec>
        268f04:	ca00000b 	bgt	268f38 <TView::RealDoCommand(RefVar const &)+0x200>
        268f08:	e330002e 	teq	r0, #46	; 0x2e
        268f0c:	0a0002c4 	beq	269a24 <TView::RealDoCommand(RefVar const &)+0xcec>
        268f10:	e330002f 	teq	r0, #47	; 0x2f
        268f14:	0a000242 	beq	269824 <TView::RealDoCommand(RefVar const &)+0xaec>
        268f18:	e3300030 	teq	r0, #48	; 0x30
        268f1c:	1a000335 	bne	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268f20:	e24dd024 	sub	sp, sp, #36	; 0x24
        268f24:	e1a00005 	mov	r0, r5
        268f28:	e5951000 	ldr	r1, [r5]
        268f2c:	e1a0e00f 	mov	lr, pc
        268f30:	e281f0ac 	add	pc, r1, #172	; 0xac
        268f34:	ea0002d8 	b	269a9c <TView::RealDoCommand(RefVar const &)+0xd64>
        268f38:	e3300032 	teq	r0, #50	; 0x32
        268f3c:	0a000238 	beq	269824 <TView::RealDoCommand(RefVar const &)+0xaec>
        268f40:	e3300033 	teq	r0, #51	; 0x33
        268f44:	0a000297 	beq	2699a8 <TView::RealDoCommand(RefVar const &)+0xc70>
        268f48:	e330003d 	teq	r0, #61	; 0x3d
        268f4c:	1a000329 	bne	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268f50:	e24dd028 	sub	sp, sp, #40	; 0x28
        268f54:	e1a00004 	mov	r0, r4
        268f58:	eb60f500 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        268f5c:	eb65647a 	bl	1bc214c <$AllocateRefHandle(long)>
        268f60:	e58d0000 	str	r0, [sp]
        268f64:	e1a0100d 	mov	r1, sp
        268f68:	e1a00005 	mov	r0, r5
        268f6c:	eb658149 	bl	1bc9498 <TView::$AddToSoup(RefVar const &)>
        268f70:	e1a09000 	mov	r9, r0
        268f74:	e59d0000 	ldr	r0, [sp]
        268f78:	eb65688f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        268f7c:	e24dd008 	sub	sp, sp, #8	; 0x8
        268f80:	e3390000 	teq	r9, #0	; 0x0
        268f84:	e1a00004 	mov	r0, r4
        268f88:	0a00019e 	beq	269608 <TView::RealDoCommand(RefVar const &)+0x8d0>
        268f8c:	eb60f4f1 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        268f90:	e3300302 	teq	r0, #134217728	; 0x8000000
        268f94:	15890004 	strne	r0, [r9, #4]	; fField4
        268f98:	e1a01009 	mov	r1, r9
        268f9c:	e1a00004 	mov	r0, r4
        268fa0:	eb60f4ed 	bl	1aa635c <$CommandSetParameter(RefVar const &, long)>
        268fa4:	e1a02005 	mov	r2, r5
        268fa8:	e5993004 	ldr	r3, [r9, #4]	; fField4
        268fac:	e3a0103f 	mov	r1, #63	; 0x3f
        268fb0:	e5980000 	ldr	r0, [r8]
        268fb4:	eb60d7d1 	bl	1a9ef00 <TApplication::$PostUndoCommand(unsigned long, TResponder *, long)>
        268fb8:	e1a00009 	mov	r0, r9
        268fbc:	e3a01000 	mov	r1, #0	; 0x0
        268fc0:	e5992000 	ldr	r2, [r9]
        268fc4:	e1a0e00f 	mov	lr, pc
        268fc8:	e282f054 	add	pc, r2, #84	; 0x54
        268fcc:	ea00018f 	b	269610 <TView::RealDoCommand(RefVar const &)+0x8d8>
        268fd0:	e2400040 	sub	r0, r0, #64	; 0x40
        268fd4:	e350000c 	cmp	r0, #12	; 0xc
        268fd8:	908ff100 	addls	pc, pc, r0, lsl #2
        268fdc:	ea000305 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268fe0:	ea0001d4 	b	269738 <TView::RealDoCommand(RefVar const &)+0xa00>
        268fe4:	ea000303 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268fe8:	ea0000ce 	b	269328 <TView::RealDoCommand(RefVar const &)+0x5f0>
        268fec:	ea000301 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268ff0:	ea000300 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268ff4:	ea0002ff 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268ff8:	ea0002fe 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        268ffc:	ea000117 	b	269460 <TView::RealDoCommand(RefVar const &)+0x728>
        269000:	ea000107 	b	269424 <TView::RealDoCommand(RefVar const &)+0x6ec>
        269004:	ea000135 	b	2694e0 <TView::RealDoCommand(RefVar const &)+0x7a8>
        269008:	ea0002fa 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        26900c:	ea000148 	b	269534 <TView::RealDoCommand(RefVar const &)+0x7fc>
        269010:	e24dd024 	sub	sp, sp, #36	; 0x24
        269014:	e1a00004 	mov	r0, r4
        269018:	eb60f4ce 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        26901c:	e1a01000 	mov	r1, r0
        269020:	e1a00005 	mov	r0, r5
        269024:	eb65853e 	bl	1bca524 <TView::$FindID(long)>
        269028:	e1b05000 	movs	r5, r0
        26902c:	e24dd008 	sub	sp, sp, #8	; 0x8
        269030:	0a000007 	beq	269054 <TView::RealDoCommand(RefVar const &)+0x31c>
        269034:	e1a00004 	mov	r0, r4
        269038:	e3a01040 	mov	r1, #64	; 0x40
        26903c:	eb60f4c2 	bl	1aa634c <$CommandSetID(RefVar const &, unsigned long)>
        269040:	e1a01004 	mov	r1, r4
        269044:	e1a00005 	mov	r0, r5
        269048:	e5952000 	ldr	r2, [r5]
        26904c:	e1a0e00f 	mov	lr, pc
        269050:	e282f01c 	add	pc, r2, #28	; 0x1c
        269054:	e3a00002 	mov	r0, #2	; 0x2
        269058:	eb65643b 	bl	1bc214c <$AllocateRefHandle(long)>
        26905c:	e58d0000 	str	r0, [sp]
        269060:	e1a0400d 	mov	r4, sp
        269064:	e5970000 	ldr	r0, [r7]
        269068:	eb656437 	bl	1bc214c <$AllocateRefHandle(long)>
        26906c:	e58d0004 	str	r0, [sp, #4]	; fField4
        269070:	e28d0004 	add	r0, sp, #4	; 0x4
        269074:	e1a01006 	mov	r1, r6
        269078:	e1a02004 	mov	r2, r4
        26907c:	eb6574b9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        269080:	e59d0000 	ldr	r0, [sp]
        269084:	eb65684c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269088:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        26908c:	ea0001a4 	b	269724 <TView::RealDoCommand(RefVar const &)+0x9ec>
        269090:	e24dd004 	sub	sp, sp, #4	; 0x4
        269094:	e1a00004 	mov	r0, r4
        269098:	eb60f4b0 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        26909c:	eb65642a 	bl	1bc214c <$AllocateRefHandle(long)>
        2690a0:	e58d0000 	str	r0, [sp]
        2690a4:	e1a0100d 	mov	r1, sp
        2690a8:	e1a00005 	mov	r0, r5
        2690ac:	eb6580f8 	bl	1bc9494 <TView::$AddChild(RefVar const &)>
        2690b0:	e1a05000 	mov	r5, r0
        2690b4:	e59d0000 	ldr	r0, [sp]
        2690b8:	eb65683f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2690bc:	e1a00004 	mov	r0, r4
        2690c0:	eb60f4a4 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        2690c4:	e1a02000 	mov	r2, r0
        2690c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2690cc:	e1a01005 	mov	r1, r5
        2690d0:	e3a0002c 	mov	r0, #44	; 0x2c
        2690d4:	e5984000 	ldr	r4, [r8]
        2690d8:	eb60f498 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        2690dc:	eb65641a 	bl	1bc214c <$AllocateRefHandle(long)>
        2690e0:	e58d0000 	str	r0, [sp]
        2690e4:	e1a0100d 	mov	r1, sp
        2690e8:	e1a00004 	mov	r0, r4
        2690ec:	eb609dd1 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        2690f0:	e59d0000 	ldr	r0, [sp]
        2690f4:	eb656830 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2690f8:	e28dd004 	add	sp, sp, #4	; 0x4
        2690fc:	e3a08001 	mov	r8, #1	; 0x1
        269100:	e5cd8004 	strb	r8, [sp, #4]	; fField4
        269104:	e28dd004 	add	sp, sp, #4	; 0x4
        269108:	ea0002ba 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        26910c:	e1a00004 	mov	r0, r4
        269110:	eb60f490 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        269114:	e1a04000 	mov	r4, r0
        269118:	e5901000 	ldr	r1, [r0]
        26911c:	e1a0e00f 	mov	lr, pc
        269120:	e281f03c 	add	pc, r1, #60	; 0x3c
        269124:	e1a01004 	mov	r1, r4
        269128:	e1a00005 	mov	r0, r5
        26912c:	eb658925 	bl	1bcb5c8 <TView::$RemoveChildView(TView *)>
        269130:	ea000009 	b	26915c <TView::RealDoCommand(RefVar const &)+0x424>
        269134:	e590001c 	ldr	r0, [r0, #28]	; fField28
        269138:	e1300003 	teq	r0, r3
        26913c:	1affff65 	bne	268ed8 <TView::RealDoCommand(RefVar const &)+0x1a0>
        269140:	e3310000 	teq	r1, #0	; 0x0
        269144:	1a000002 	bne	269154 <TView::RealDoCommand(RefVar const &)+0x41c>
        269148:	e1a00005 	mov	r0, r5
        26914c:	eb61a5f6 	bl	1ad292c <$ModalSafeShow(TView *)>
        269150:	ea000001 	b	26915c <TView::RealDoCommand(RefVar const &)+0x424>
        269154:	e1a00005 	mov	r0, r5
        269158:	eb658d2e 	bl	1bcc618 <TView::$Show(void)>
        26915c:	e3a08001 	mov	r8, #1	; 0x1
        269160:	e5cd8000 	strb	r8, [sp]
        269164:	ea0002a3 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        269168:	e1a00005 	mov	r0, r5
        26916c:	e5951000 	ldr	r1, [r5]
        269170:	e1a0e00f 	mov	lr, pc
        269174:	e281f03c 	add	pc, r1, #60	; 0x3c
        269178:	eafffff7 	b	26915c <TView::RealDoCommand(RefVar const &)+0x424>
        26917c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        269180:	e3a00001 	mov	r0, #1	; 0x1
        269184:	eb60cb04 	bl	1a9bd9c <$MakeArray(long)>
        269188:	eb6563ef 	bl	1bc214c <$AllocateRefHandle(long)>
        26918c:	e58d0008 	str	r0, [sp, #8]	; fField8
        269190:	e1a00004 	mov	r0, r4
        269194:	eb60f46f 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        269198:	eb6080d3 	bl	1a894ec <$AddressToRef(void *)>
        26919c:	eb6563ea 	bl	1bc214c <$AllocateRefHandle(long)>
        2691a0:	e1a08000 	mov	r8, r0
        2691a4:	e5902000 	ldr	r2, [r0]
        2691a8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2691ac:	e5900000 	ldr	r0, [r0]
        2691b0:	e3a01000 	mov	r1, #0	; 0x0
        2691b4:	eb657467 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2691b8:	e1a00008 	mov	r0, r8
        2691bc:	eb6567fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2691c0:	e3a03000 	mov	r3, #0	; 0x0
        2691c4:	e92d0008 	stmdb	sp!, {r3}
        2691c8:	e28d200c 	add	r2, sp, #12	; 0xc
        2691cc:	e59f1070 	ldr	r1, [pc, #70]	; 269244 <TView::RealDoCommand(RefVar const &)+0x50c>
        2691d0:	e1a00005 	mov	r0, r5
        2691d4:	e3a03001 	mov	r3, #1	; 0x1
        2691d8:	eb658900 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        2691dc:	e28dd004 	add	sp, sp, #4	; 0x4
        2691e0:	e2500002 	subs	r0, r0, #2	; 0x2
        2691e4:	13a00001 	movne	r0, #1	; 0x1
        2691e8:	e20010ff 	and	r1, r0, #255	; 0xff
        2691ec:	e5cd100c 	strb	r1, [sp, #12]	; fField12
        2691f0:	e1a00004 	mov	r0, r4
        2691f4:	eb60f456 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        2691f8:	e3a00002 	mov	r0, #2	; 0x2
        2691fc:	eb6563d2 	bl	1bc214c <$AllocateRefHandle(long)>
        269200:	e58d0000 	str	r0, [sp]
        269204:	e1a0400d 	mov	r4, sp
        269208:	e5970000 	ldr	r0, [r7]
        26920c:	eb6563ce 	bl	1bc214c <$AllocateRefHandle(long)>
        269210:	e58d0004 	str	r0, [sp, #4]	; fField4
        269214:	e28d0004 	add	r0, sp, #4	; 0x4
        269218:	e1a01006 	mov	r1, r6
        26921c:	e1a02004 	mov	r2, r4
        269220:	eb657450 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        269224:	e59d0000 	ldr	r0, [sp]
        269228:	eb6567e3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26922c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        269230:	eb6567e1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269234:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        269238:	eb6567df 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26923c:	e28dd00c 	add	sp, sp, #12	; 0xc
        269240:	ea00026c 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        269244:	006850e8 	rsbeq	r5, r8, r8, ror #1
        269248:	e24dd024 	sub	sp, sp, #36	; 0x24
        26924c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        269250:	e3100c02 	tst	r0, #512	; 0x200
        269254:	0a000212 	beq	269aa4 <TView::RealDoCommand(RefVar const &)+0xd6c>
        269258:	e24dd004 	sub	sp, sp, #4	; 0x4
        26925c:	e3a00001 	mov	r0, #1	; 0x1
        269260:	eb60cacd 	bl	1a9bd9c <$MakeArray(long)>
        269264:	eb6563b8 	bl	1bc214c <$AllocateRefHandle(long)>
        269268:	e58d0000 	str	r0, [sp]
        26926c:	e1a00004 	mov	r0, r4
        269270:	eb60f438 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        269274:	eb60809c 	bl	1a894ec <$AddressToRef(void *)>
        269278:	eb6563b3 	bl	1bc214c <$AllocateRefHandle(long)>
        26927c:	e1a06000 	mov	r6, r0
        269280:	e5902000 	ldr	r2, [r0]
        269284:	e59d0000 	ldr	r0, [sp]
        269288:	e5900000 	ldr	r0, [r0]
        26928c:	e3a01000 	mov	r1, #0	; 0x0
        269290:	eb657430 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        269294:	e1a00006 	mov	r0, r6
        269298:	eb6567c7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26929c:	e3a03000 	mov	r3, #0	; 0x0
        2692a0:	e92d0008 	stmdb	sp!, {r3}
        2692a4:	e28d2004 	add	r2, sp, #4	; 0x4
        2692a8:	e1a00005 	mov	r0, r5
        2692ac:	e3a03001 	mov	r3, #1	; 0x1
        2692b0:	e3a01010 	mov	r1, #16	; 0x10
        2692b4:	eb6588c8 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        2692b8:	e5bd1004 	ldr	r1, [sp, #4]!	; fField4
        2692bc:	e5810000 	str	r0, [r1]
        2692c0:	e59f1040 	ldr	r1, [pc, #40]	; 269308 <TView::RealDoCommand(RefVar const &)+0x5d0>	; fField40
        2692c4:	e5911000 	ldr	r1, [r1]
        2692c8:	e5911000 	ldr	r1, [r1]
        2692cc:	eb656bd7 	bl	1bc4230 <$EQRef__FlT1>
        2692d0:	e3300000 	teq	r0, #0	; 0x0
        2692d4:	13a00002 	movne	r0, #2	; 0x2
        2692d8:	15cd0028 	strneb	r0, [sp, #40]	; fField40
        2692dc:	1a000007 	bne	269300 <TView::RealDoCommand(RefVar const &)+0x5c8>
        2692e0:	e59d0000 	ldr	r0, [sp]
        2692e4:	e5900000 	ldr	r0, [r0]
        2692e8:	e2500002 	subs	r0, r0, #2	; 0x2
        2692ec:	13a00001 	movne	r0, #1	; 0x1
        2692f0:	e5cd0028 	strb	r0, [sp, #40]	; fField40
        2692f4:	e20000ff 	and	r0, r0, #255	; 0xff
        2692f8:	e3300002 	teq	r0, #2	; 0x2
        2692fc:	1a000002 	bne	26930c <TView::RealDoCommand(RefVar const &)+0x5d4>
        269300:	e3a01000 	mov	r1, #0	; 0x0
        269304:	ea000001 	b	269310 <TView::RealDoCommand(RefVar const &)+0x5d8>
        269308:	006846b0 	streqh	r4, [r8], -#96
        26930c:	e5dd1028 	ldrb	r1, [sp, #40]	; fField40
        269310:	e1a00004 	mov	r0, r4
        269314:	eb60f40e 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        269318:	e59d0000 	ldr	r0, [sp]
        26931c:	eb6567a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269320:	e28dd004 	add	sp, sp, #4	; 0x4
        269324:	ea0001de 	b	269aa4 <TView::RealDoCommand(RefVar const &)+0xd6c>
        269328:	e24dd024 	sub	sp, sp, #36	; 0x24
        26932c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        269330:	e3100082 	tst	r0, #130	; 0x82
        269334:	1a0001d8 	bne	269a9c <TView::RealDoCommand(RefVar const &)+0xd64>
        269338:	e24dd008 	sub	sp, sp, #8	; 0x8
        26933c:	e1a00004 	mov	r0, r4
        269340:	e3a01000 	mov	r1, #0	; 0x0
        269344:	eb60f408 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        269348:	e58d0000 	str	r0, [sp]
        26934c:	e1a00004 	mov	r0, r4
        269350:	e3a01001 	mov	r1, #1	; 0x1
        269354:	eb60f404 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        269358:	e58d0004 	str	r0, [sp, #4]	; fField4
        26935c:	e24dd008 	sub	sp, sp, #8	; 0x8
        269360:	e1a00004 	mov	r0, r4
        269364:	e3a01002 	mov	r1, #2	; 0x2
        269368:	eb60f3ff 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        26936c:	e58d0000 	str	r0, [sp]
        269370:	e1a00004 	mov	r0, r4
        269374:	e3a01003 	mov	r1, #3	; 0x3
        269378:	eb60f3fb 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        26937c:	e58d0004 	str	r0, [sp, #4]	; fField4
        269380:	e1a0200d 	mov	r2, sp
        269384:	e28d1008 	add	r1, sp, #8	; 0x8
        269388:	e1a00005 	mov	r0, r5
        26938c:	e5953000 	ldr	r3, [r5]
        269390:	e1a0e00f 	mov	lr, pc
        269394:	e283ff42 	add	pc, r3, #264	; 0x108
        269398:	e24dd004 	sub	sp, sp, #4	; 0x4
        26939c:	e1a01005 	mov	r1, r5
        2693a0:	e3a02302 	mov	r2, #134217728	; 0x8000000
        2693a4:	e3a00042 	mov	r0, #66	; 0x42
        2693a8:	eb60f3e4 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        2693ac:	eb656366 	bl	1bc214c <$AllocateRefHandle(long)>
        2693b0:	e58d0000 	str	r0, [sp]
        2693b4:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        2693b8:	e1a0000d 	mov	r0, sp
        2693bc:	e3a01000 	mov	r1, #0	; 0x0
        2693c0:	eb60f3e8 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        2693c4:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        2693c8:	e1a0000d 	mov	r0, sp
        2693cc:	e3a01001 	mov	r1, #1	; 0x1
        2693d0:	eb60f3e4 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        2693d4:	e59d200c 	ldr	r2, [sp, #12]	; fField12
        2693d8:	e1a0000d 	mov	r0, sp
        2693dc:	e3a01002 	mov	r1, #2	; 0x2
        2693e0:	eb60f3e0 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        2693e4:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        2693e8:	e1a0000d 	mov	r0, sp
        2693ec:	e3a01003 	mov	r1, #3	; 0x3
        2693f0:	eb60f3dc 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        2693f4:	e1a0100d 	mov	r1, sp
        2693f8:	e5980000 	ldr	r0, [r8]
        2693fc:	eb60d2be 	bl	1a9defc <TApplication::$PostUndoCommand(RefVar const &)>
        269400:	e3a01000 	mov	r1, #0	; 0x0
        269404:	e5b5001c 	ldr	r0, [r5, #28]!	; fField28
        269408:	e5902000 	ldr	r2, [r0]
        26940c:	e1a0e00f 	mov	lr, pc
        269410:	e282f054 	add	pc, r2, #84	; 0x54
        269414:	e59d0000 	ldr	r0, [sp]
        269418:	eb656767 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26941c:	e28dd014 	add	sp, sp, #20	; 0x14
        269420:	ea00019d 	b	269a9c <TView::RealDoCommand(RefVar const &)+0xd64>
        269424:	e24dd028 	sub	sp, sp, #40	; 0x28
        269428:	e1a00004 	mov	r0, r4
        26942c:	eb60f3cb 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        269430:	eb656345 	bl	1bc214c <$AllocateRefHandle(long)>
        269434:	e58d0000 	str	r0, [sp]
        269438:	e1a0100d 	mov	r1, sp
        26943c:	e1a00005 	mov	r0, r5
        269440:	e5952000 	ldr	r2, [r5]
        269444:	e1a0e00f 	mov	lr, pc
        269448:	e282f0a8 	add	pc, r2, #168	; 0xa8
        26944c:	e59d0000 	ldr	r0, [sp]
        269450:	eb656759 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269454:	e3a08001 	mov	r8, #1	; 0x1
        269458:	e5cd8028 	strb	r8, [sp, #40]	; fField40
        26945c:	ea0001e4 	b	269bf4 <TView::RealDoCommand(RefVar const &)+0xebc>
        269460:	e24dd028 	sub	sp, sp, #40	; 0x28
        269464:	e1a00004 	mov	r0, r4
        269468:	eb60f3bc 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        26946c:	eb656336 	bl	1bc214c <$AllocateRefHandle(long)>
        269470:	e58d0000 	str	r0, [sp]
        269474:	e1a0000d 	mov	r0, sp
        269478:	eb662944 	bl	1bf3990 <$IsFrame(RefVar const &)>
        26947c:	e3300000 	teq	r0, #0	; 0x0
        269480:	0a000007 	beq	2694a4 <TView::RealDoCommand(RefVar const &)+0x76c>
        269484:	e59f004c 	ldr	r0, [pc, #4c]	; 2694d8 <TView::RealDoCommand(RefVar const &)+0x7a0>	; fField4
        269488:	e5900000 	ldr	r0, [r0]
        26948c:	e5901000 	ldr	r1, [r0]
        269490:	e59d0000 	ldr	r0, [sp]
        269494:	e5900000 	ldr	r0, [r0]
        269498:	eb656b70 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        26949c:	e59d1000 	ldr	r1, [sp]
        2694a0:	e5810000 	str	r0, [r1]
        2694a4:	e2850024 	add	r0, r5, #36	; 0x24
        2694a8:	e1a0200d 	mov	r2, sp
        2694ac:	e59f1028 	ldr	r1, [pc, #28]	; 2694dc <TView::RealDoCommand(RefVar const &)+0x7a4>	; fField28
        2694b0:	eb608423 	bl	1a8a544 <$ArrayAppend__FRC6RefVarN21>
        2694b4:	e1a00005 	mov	r0, r5
        2694b8:	e3a01000 	mov	r1, #0	; 0x0
        2694bc:	e5952000 	ldr	r2, [r5]
        2694c0:	e1a0e00f 	mov	lr, pc
        2694c4:	e282f054 	add	pc, r2, #84	; 0x54
        2694c8:	e3a08001 	mov	r8, #1	; 0x1
        2694cc:	e5cd8028 	strb	r8, [sp, #40]	; fField40
        2694d0:	e59d0000 	ldr	r0, [sp]
        2694d4:	ea0001c5 	b	269bf0 <TView::RealDoCommand(RefVar const &)+0xeb8>
        2694d8:	00683100 	rsbeq	r3, r8, r0, lsl #2
        2694dc:	00683110 	rsbeq	r3, r8, r0, lsl r1
        2694e0:	e24dd030 	sub	sp, sp, #48	; 0x30
        2694e4:	e1a0000d 	mov	r0, sp
        2694e8:	e5b51020 	ldr	r1, [r5, #32]!	; fField32
        2694ec:	eb607bd0 	bl	1a88434 <TListLoop::$__ct(CList *)>
        2694f0:	e1a0000d 	mov	r0, sp
        2694f4:	eb60ce49 	bl	1a9ce20 <TListLoop::$Next(void)>
        2694f8:	e3300000 	teq	r0, #0	; 0x0
        2694fc:	0a000007 	beq	269520 <TView::RealDoCommand(RefVar const &)+0x7e8>
        269500:	e1a01004 	mov	r1, r4
        269504:	e5902000 	ldr	r2, [r0]
        269508:	e1a0e00f 	mov	lr, pc
        26950c:	e282f01c 	add	pc, r2, #28	; 0x1c
        269510:	e1a0000d 	mov	r0, sp
        269514:	eb60ce41 	bl	1a9ce20 <TListLoop::$Next(void)>
        269518:	e3300000 	teq	r0, #0	; 0x0
        26951c:	1afffff7 	bne	269500 <TView::RealDoCommand(RefVar const &)+0x7c8>
        269520:	e3a08001 	mov	r8, #1	; 0x1
        269524:	e5990000 	ldr	r0, [r9]
        269528:	e5c0805c 	strb	r8, [r0, #92]
        26952c:	e5cd8030 	strb	r8, [sp, #48]
        269530:	ea00018d 	b	269b6c <TView::RealDoCommand(RefVar const &)+0xe34>
        269534:	e24dd024 	sub	sp, sp, #36	; 0x24
        269538:	eb04858a 	bl	38ab68 <C$$dtorvec$$Limit+0x1f4>
        26953c:	e1b06000 	movs	r6, r0
        269540:	0a00002c 	beq	2695f8 <TView::RealDoCommand(RefVar const &)+0x8c0>
        269544:	e24dd00c 	sub	sp, sp, #12	; 0xc
        269548:	e1a0000d 	mov	r0, sp
        26954c:	e5b51020 	ldr	r1, [r5, #32]!	; fField32
        269550:	eb607bb7 	bl	1a88434 <TListLoop::$__ct(CList *)>
        269554:	e1a0000d 	mov	r0, sp
        269558:	eb60ce30 	bl	1a9ce20 <TListLoop::$Next(void)>
        26955c:	e1b05000 	movs	r5, r0
        269560:	0a00000d 	beq	26959c <TView::RealDoCommand(RefVar const &)+0x864>
        269564:	e1a00005 	mov	r0, r5
        269568:	e5951000 	ldr	r1, [r5]
        26956c:	e1a0e00f 	mov	lr, pc
        269570:	e281f094 	add	pc, r1, #148	; 0x94
        269574:	e3300000 	teq	r0, #0	; 0x0
        269578:	0a000003 	beq	26958c <TView::RealDoCommand(RefVar const &)+0x854>
        26957c:	e1a02005 	mov	r2, r5
        269580:	e5961000 	ldr	r1, [r6]
        269584:	e1a00006 	mov	r0, r6
        269588:	eb65ffd7 	bl	1be94ec <CList::$InsertAt(long, void *)>
        26958c:	e1a0000d 	mov	r0, sp
        269590:	eb60ce22 	bl	1a9ce20 <TListLoop::$Next(void)>
        269594:	e1b05000 	movs	r5, r0
        269598:	1afffff1 	bne	269564 <TView::RealDoCommand(RefVar const &)+0x82c>
        26959c:	e1a01006 	mov	r1, r6
        2695a0:	e1a0000d 	mov	r0, sp
        2695a4:	eb607ba2 	bl	1a88434 <TListLoop::$__ct(CList *)>
        2695a8:	e1a0000d 	mov	r0, sp
        2695ac:	eb60ce1b 	bl	1a9ce20 <TListLoop::$Next(void)>
        2695b0:	e3300000 	teq	r0, #0	; 0x0
        2695b4:	0a000007 	beq	2695d8 <TView::RealDoCommand(RefVar const &)+0x8a0>
        2695b8:	e1a01004 	mov	r1, r4
        2695bc:	e5902000 	ldr	r2, [r0]
        2695c0:	e1a0e00f 	mov	lr, pc
        2695c4:	e282f01c 	add	pc, r2, #28	; 0x1c
        2695c8:	e1a0000d 	mov	r0, sp
        2695cc:	eb60ce13 	bl	1a9ce20 <TListLoop::$Next(void)>
        2695d0:	e3300000 	teq	r0, #0	; 0x0
        2695d4:	1afffff7 	bne	2695b8 <TView::RealDoCommand(RefVar const &)+0x880>
        2695d8:	e28dd00c 	add	sp, sp, #12	; 0xc
        2695dc:	e3360000 	teq	r6, #0	; 0x0
        2695e0:	0a000004 	beq	2695f8 <TView::RealDoCommand(RefVar const &)+0x8c0>
        2695e4:	e1a00006 	mov	r0, r6
        2695e8:	e3a01000 	mov	r1, #0	; 0x0
        2695ec:	eb65ef24 	bl	1be5284 <CList::$__dt(void)>
        2695f0:	e1a00006 	mov	r0, r6
        2695f4:	eb659039 	bl	1bcd6e0 <$__dl(void *)>
        2695f8:	e3a08001 	mov	r8, #1	; 0x1
        2695fc:	e5990000 	ldr	r0, [r9]
        269600:	e5c0805c 	strb	r8, [r0, #92]
        269604:	ea000125 	b	269aa0 <TView::RealDoCommand(RefVar const &)+0xd68>
        269608:	e3a01000 	mov	r1, #0	; 0x0
        26960c:	eb60f352 	bl	1aa635c <$CommandSetParameter(RefVar const &, long)>
        269610:	e3a08001 	mov	r8, #1	; 0x1
        269614:	e5cd8030 	strb	r8, [sp, #48]
        269618:	e3a00002 	mov	r0, #2	; 0x2
        26961c:	eb6562ca 	bl	1bc214c <$AllocateRefHandle(long)>
        269620:	e58d0000 	str	r0, [sp]
        269624:	e1a0400d 	mov	r4, sp
        269628:	e5970000 	ldr	r0, [r7]
        26962c:	eb6562c6 	bl	1bc214c <$AllocateRefHandle(long)>
        269630:	e58d0004 	str	r0, [sp, #4]	; fField4
        269634:	e28d0004 	add	r0, sp, #4	; 0x4
        269638:	e1a01006 	mov	r1, r6
        26963c:	e1a02004 	mov	r2, r4
        269640:	eb657348 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        269644:	e59d0000 	ldr	r0, [sp]
        269648:	eb6566db 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26964c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        269650:	eb6566d9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269654:	e28dd008 	add	sp, sp, #8	; 0x8
        269658:	eaffff30 	b	269320 <TView::RealDoCommand(RefVar const &)+0x5e8>
        26965c:	e24dd024 	sub	sp, sp, #36	; 0x24
        269660:	e1a00004 	mov	r0, r4
        269664:	eb60f33b 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        269668:	e1a01000 	mov	r1, r0
        26966c:	e1a00005 	mov	r0, r5
        269670:	eb6583ab 	bl	1bca524 <TView::$FindID(long)>
        269674:	e1b04000 	movs	r4, r0
        269678:	e24dd008 	sub	sp, sp, #8	; 0x8
        26967c:	0a00001a 	beq	2696ec <TView::RealDoCommand(RefVar const &)+0x9b4>
        269680:	e24dd004 	sub	sp, sp, #4	; 0x4
        269684:	e5949004 	ldr	r9, [r4, #4]	; fField4
        269688:	e1a00004 	mov	r0, r4
        26968c:	eb657f95 	bl	1bc94e8 <TView::$DataFrame(void)>
        269690:	eb6562ad 	bl	1bc214c <$AllocateRefHandle(long)>
        269694:	e1a01004 	mov	r1, r4
        269698:	e58d0000 	str	r0, [sp]
        26969c:	e1a00005 	mov	r0, r5
        2696a0:	eb6587c9 	bl	1bcb5cc <TView::$RemoveFromSoup(TView *)>
        2696a4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2696a8:	e1a02009 	mov	r2, r9
        2696ac:	e1a01005 	mov	r1, r5
        2696b0:	e3a0003d 	mov	r0, #61	; 0x3d
        2696b4:	eb60f321 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        2696b8:	eb6562a3 	bl	1bc214c <$AllocateRefHandle(long)>
        2696bc:	e58d0000 	str	r0, [sp]
        2696c0:	e28d1004 	add	r1, sp, #4	; 0x4
        2696c4:	e1a0000d 	mov	r0, sp
        2696c8:	eb60f325 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        2696cc:	e1a0100d 	mov	r1, sp
        2696d0:	e5980000 	ldr	r0, [r8]
        2696d4:	eb60d208 	bl	1a9defc <TApplication::$PostUndoCommand(RefVar const &)>
        2696d8:	e59d0000 	ldr	r0, [sp]
        2696dc:	eb6566b6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2696e0:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2696e4:	eb6566b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2696e8:	e28dd004 	add	sp, sp, #4	; 0x4
        2696ec:	e3a00002 	mov	r0, #2	; 0x2
        2696f0:	eb656295 	bl	1bc214c <$AllocateRefHandle(long)>
        2696f4:	e58d0000 	str	r0, [sp]
        2696f8:	e1a0400d 	mov	r4, sp
        2696fc:	e5970000 	ldr	r0, [r7]
        269700:	eb656291 	bl	1bc214c <$AllocateRefHandle(long)>
        269704:	e58d0004 	str	r0, [sp, #4]	; fField4
        269708:	e28d0004 	add	r0, sp, #4	; 0x4
        26970c:	e1a01006 	mov	r1, r6
        269710:	e1a02004 	mov	r2, r4
        269714:	eb657313 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        269718:	e59d0000 	ldr	r0, [sp]
        26971c:	eb6566a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269720:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        269724:	eb6566a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269728:	e3a08001 	mov	r8, #1	; 0x1
        26972c:	e5cd802c 	strb	r8, [sp, #44]	; fField44
        269730:	e28dd008 	add	sp, sp, #8	; 0x8
        269734:	ea0000da 	b	269aa4 <TView::RealDoCommand(RefVar const &)+0xd6c>
        269738:	e24dd028 	sub	sp, sp, #40	; 0x28
        26973c:	e1a00004 	mov	r0, r4
        269740:	e3a01000 	mov	r1, #0	; 0x0
        269744:	eb60f308 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        269748:	e5cd0003 	strb	r0, [sp, #3]
        26974c:	e1a00440 	mov	r0, r0, asr #8
        269750:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        269754:	e1a00004 	mov	r0, r4
        269758:	e3a01001 	mov	r1, #1	; 0x1
        26975c:	eb60f302 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        269760:	e5cd0001 	strb	r0, [sp, #1]
        269764:	e1a00440 	mov	r0, r0, asr #8
        269768:	e5cd0000 	strb	r0, [sp]
        26976c:	e1a0100d 	mov	r1, sp
        269770:	e1a00005 	mov	r0, r5
        269774:	eb658786 	bl	1bcb594 <TView::$Move(TPoint const &)>
        269778:	e24dd00c 	sub	sp, sp, #12	; 0xc
        26977c:	e3a0004c 	mov	r0, #76	; 0x4c
        269780:	e5b52004 	ldr	r2, [r5, #4]!	; fField4
        269784:	e5951018 	ldr	r1, [r5, #24]	; fField24
        269788:	eb60f2ec 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        26978c:	eb65626e 	bl	1bc214c <$AllocateRefHandle(long)>
        269790:	e58d0008 	str	r0, [sp, #8]	; fField8
        269794:	e59d000e 	ldr	r0, [sp, #14]
        269798:	e1a00840 	mov	r0, r0, asr #16
        26979c:	e2602000 	rsb	r2, r0, #0	; 0x0
        2697a0:	e28d0008 	add	r0, sp, #8	; 0x8
        2697a4:	e3a01000 	mov	r1, #0	; 0x0
        2697a8:	eb60f2ee 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        2697ac:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2697b0:	e1a00840 	mov	r0, r0, asr #16
        2697b4:	e2602000 	rsb	r2, r0, #0	; 0x0
        2697b8:	e28d0008 	add	r0, sp, #8	; 0x8
        2697bc:	e3a01001 	mov	r1, #1	; 0x1
        2697c0:	eb60f2e8 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        2697c4:	e28d1008 	add	r1, sp, #8	; 0x8
        2697c8:	e5980000 	ldr	r0, [r8]
        2697cc:	eb60d1ca 	bl	1a9defc <TApplication::$PostUndoCommand(RefVar const &)>
        2697d0:	e3a08001 	mov	r8, #1	; 0x1
        2697d4:	e5cd8034 	strb	r8, [sp, #52]
        2697d8:	e3a00002 	mov	r0, #2	; 0x2
        2697dc:	eb65625a 	bl	1bc214c <$AllocateRefHandle(long)>
        2697e0:	e58d0000 	str	r0, [sp]
        2697e4:	e1a0400d 	mov	r4, sp
        2697e8:	e5970000 	ldr	r0, [r7]
        2697ec:	eb656256 	bl	1bc214c <$AllocateRefHandle(long)>
        2697f0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2697f4:	e28d0004 	add	r0, sp, #4	; 0x4
        2697f8:	e1a01006 	mov	r1, r6
        2697fc:	e1a02004 	mov	r2, r4
        269800:	eb6572d8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        269804:	e59d0000 	ldr	r0, [sp]
        269808:	eb65666b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26980c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        269810:	eb656669 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269814:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        269818:	eb656667 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26981c:	e28dd034 	add	sp, sp, #52	; 0x34
        269820:	ea0000f4 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        269824:	e3a06000 	mov	r6, #0	; 0x0
        269828:	e52d6090 	str	r6, [sp, -#144]!
        26982c:	e28d0008 	add	r0, sp, #8	; 0x8
        269830:	eb65244f 	bl	1bb2974 <$setjmp>
        269834:	e3300000 	teq	r0, #0	; 0x0
        269838:	1a000033 	bne	26990c <TView::RealDoCommand(RefVar const &)+0xbd4>
        26983c:	e1a0000d 	mov	r0, sp
        269840:	eb65da0d 	bl	1be007c <$AddExceptionHandler>
        269844:	e3a08001 	mov	r8, #1	; 0x1
        269848:	e24dd004 	sub	sp, sp, #4	; 0x4
        26984c:	e3a00002 	mov	r0, #2	; 0x2
        269850:	eb60c951 	bl	1a9bd9c <$MakeArray(long)>
        269854:	eb65623c 	bl	1bc214c <$AllocateRefHandle(long)>
        269858:	e58d0000 	str	r0, [sp]
        26985c:	e1a00004 	mov	r0, r4
        269860:	eb60f2bc 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        269864:	eb607f20 	bl	1a894ec <$AddressToRef(void *)>
        269868:	eb656237 	bl	1bc214c <$AllocateRefHandle(long)>
        26986c:	e1a07000 	mov	r7, r0
        269870:	e5902000 	ldr	r2, [r0]
        269874:	e59d0000 	ldr	r0, [sp]
        269878:	e5900000 	ldr	r0, [r0]
        26987c:	e1a01006 	mov	r1, r6
        269880:	eb6572b4 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        269884:	e1a00007 	mov	r0, r7
        269888:	eb65664b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26988c:	e1a0010a 	mov	r0, sl, lsl #2
        269890:	eb65622d 	bl	1bc214c <$AllocateRefHandle(long)>
        269894:	e1a06000 	mov	r6, r0
        269898:	e5902000 	ldr	r2, [r0]
        26989c:	e59d0000 	ldr	r0, [sp]
        2698a0:	e5900000 	ldr	r0, [r0]
        2698a4:	e1a01008 	mov	r1, r8
        2698a8:	eb6572aa 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2698ac:	e1a00006 	mov	r0, r6
        2698b0:	eb656641 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2698b4:	e3a03000 	mov	r3, #0	; 0x0
        2698b8:	e92d0008 	stmdb	sp!, {r3}
        2698bc:	e28d2004 	add	r2, sp, #4	; 0x4
        2698c0:	e59f1040 	ldr	r1, [pc, #40]	; 269908 <TView::RealDoCommand(RefVar const &)+0xbd0>	; fField40
        2698c4:	e1a00005 	mov	r0, r5
        2698c8:	e3a03001 	mov	r3, #1	; 0x1
        2698cc:	eb658743 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        2698d0:	e28dd004 	add	sp, sp, #4	; 0x4
        2698d4:	e2500002 	subs	r0, r0, #2	; 0x2
        2698d8:	13a00001 	movne	r0, #1	; 0x1
        2698dc:	e21000ff 	ands	r0, r0, #255	; 0xff
        2698e0:	e5cd0094 	strb	r0, [sp, #148]
        2698e4:	15990000 	ldrne	r0, [r9]
        2698e8:	15c0805c 	strneb	r8, [r0, #92]
        2698ec:	e5dd1094 	ldrb	r1, [sp, #148]
        2698f0:	e1a00004 	mov	r0, r4
        2698f4:	eb60f296 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        2698f8:	e59d0000 	ldr	r0, [sp]
        2698fc:	eb65662e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269900:	e28dd004 	add	sp, sp, #4	; 0x4
        269904:	ea000005 	b	269920 <TView::RealDoCommand(RefVar const &)+0xbe8>
        269908:	00685000 	rsbeq	r5, r8, r0
        26990c:	e1a00004 	mov	r0, r4
        269910:	e3a01001 	mov	r1, #1	; 0x1
        269914:	eb60f28e 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        269918:	e3a08001 	mov	r8, #1	; 0x1
        26991c:	e5cd8090 	strb	r8, [sp, #144]
        269920:	e1a0000d 	mov	r0, sp
        269924:	eb65dde3 	bl	1be10b8 <$ExitHandler>
        269928:	e28dd06c 	add	sp, sp, #108	; 0x6c
        26992c:	ea00005c 	b	269aa4 <TView::RealDoCommand(RefVar const &)+0xd6c>
        269930:	e24dd024 	sub	sp, sp, #36	; 0x24
        269934:	e3a03000 	mov	r3, #0	; 0x0
        269938:	e92d0008 	stmdb	sp!, {r3}
        26993c:	e3a04002 	mov	r4, #2	; 0x2
        269940:	e1a00004 	mov	r0, r4
        269944:	eb656200 	bl	1bc214c <$AllocateRefHandle(long)>
        269948:	e58d0004 	str	r0, [sp, #4]	; fField4
        26994c:	e28d2004 	add	r2, sp, #4	; 0x4
        269950:	e59f104c 	ldr	r1, [pc, #4c]	; 2699a4 <TView::RealDoCommand(RefVar const &)+0xc6c>	; fField4
        269954:	e1a00005 	mov	r0, r5
        269958:	e3a03001 	mov	r3, #1	; 0x1
        26995c:	eb65871f 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        269960:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        269964:	eb656614 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269968:	e1a00004 	mov	r0, r4
        26996c:	eb6561f6 	bl	1bc214c <$AllocateRefHandle(long)>
        269970:	e58d0004 	str	r0, [sp, #4]	; fField4
        269974:	e28d4004 	add	r4, sp, #4	; 0x4
        269978:	e5970000 	ldr	r0, [r7]
        26997c:	eb6561f2 	bl	1bc214c <$AllocateRefHandle(long)>
        269980:	e58d0008 	str	r0, [sp, #8]	; fField8
        269984:	e28d0008 	add	r0, sp, #8	; 0x8
        269988:	e1a01006 	mov	r1, r6
        26998c:	e1a02004 	mov	r2, r4
        269990:	eb657274 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        269994:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        269998:	eb656607 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26999c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2699a0:	ea00003c 	b	269a98 <TView::RealDoCommand(RefVar const &)+0xd60>
        2699a4:	006850a0 	rsbeq	r5, r8, r0, lsr #1
        2699a8:	e24dd024 	sub	sp, sp, #36	; 0x24
        2699ac:	e3a03000 	mov	r3, #0	; 0x0
        2699b0:	e92d0008 	stmdb	sp!, {r3}
        2699b4:	e3a04002 	mov	r4, #2	; 0x2
        2699b8:	e1a00004 	mov	r0, r4
        2699bc:	eb6561e2 	bl	1bc214c <$AllocateRefHandle(long)>
        2699c0:	e58d0010 	str	r0, [sp, #16]	; fField16
        2699c4:	e28d2010 	add	r2, sp, #16	; 0x10
        2699c8:	e59f1050 	ldr	r1, [pc, #50]	; 269a20 <TView::RealDoCommand(RefVar const &)+0xce8>
        2699cc:	e1a00005 	mov	r0, r5
        2699d0:	e3a03001 	mov	r3, #1	; 0x1
        2699d4:	eb658701 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        2699d8:	e28dd004 	add	sp, sp, #4	; 0x4
        2699dc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2699e0:	eb6565f5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2699e4:	e1a00004 	mov	r0, r4
        2699e8:	eb6561d7 	bl	1bc214c <$AllocateRefHandle(long)>
        2699ec:	e58d0010 	str	r0, [sp, #16]	; fField16
        2699f0:	e28d4010 	add	r4, sp, #16	; 0x10
        2699f4:	e5970000 	ldr	r0, [r7]
        2699f8:	eb6561d3 	bl	1bc214c <$AllocateRefHandle(long)>
        2699fc:	e58d0014 	str	r0, [sp, #20]	; fField20
        269a00:	e28d0014 	add	r0, sp, #20	; 0x14
        269a04:	e1a01006 	mov	r1, r6
        269a08:	e1a02004 	mov	r2, r4
        269a0c:	eb657255 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        269a10:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        269a14:	eb6565e8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269a18:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        269a1c:	ea00001d 	b	269a98 <TView::RealDoCommand(RefVar const &)+0xd60>
        269a20:	00685078 	rsbeq	r5, r8, r8, ror r0
        269a24:	e24dd024 	sub	sp, sp, #36	; 0x24
        269a28:	e3a03000 	mov	r3, #0	; 0x0
        269a2c:	e92d0008 	stmdb	sp!, {r3}
        269a30:	e3a04002 	mov	r4, #2	; 0x2
        269a34:	e1a00004 	mov	r0, r4
        269a38:	eb6561c3 	bl	1bc214c <$AllocateRefHandle(long)>
        269a3c:	e58d001c 	str	r0, [sp, #28]	; fField28
        269a40:	e28d201c 	add	r2, sp, #28	; 0x1c
        269a44:	e59f1060 	ldr	r1, [pc, #60]	; 269aac <TView::RealDoCommand(RefVar const &)+0xd74>
        269a48:	e1a00005 	mov	r0, r5
        269a4c:	e3a03001 	mov	r3, #1	; 0x1
        269a50:	eb6586e2 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        269a54:	e28dd004 	add	sp, sp, #4	; 0x4
        269a58:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        269a5c:	eb6565d6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269a60:	e1a00004 	mov	r0, r4
        269a64:	eb6561b8 	bl	1bc214c <$AllocateRefHandle(long)>
        269a68:	e58d001c 	str	r0, [sp, #28]	; fField28
        269a6c:	e28d401c 	add	r4, sp, #28	; 0x1c
        269a70:	e5970000 	ldr	r0, [r7]
        269a74:	eb6561b4 	bl	1bc214c <$AllocateRefHandle(long)>
        269a78:	e58d0020 	str	r0, [sp, #32]	; fField32
        269a7c:	e28d0020 	add	r0, sp, #32	; 0x20
        269a80:	e1a01006 	mov	r1, r6
        269a84:	e1a02004 	mov	r2, r4
        269a88:	eb657236 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        269a8c:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        269a90:	eb6565c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269a94:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        269a98:	eb6565c7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269a9c:	e3a08001 	mov	r8, #1	; 0x1
        269aa0:	e5cd8024 	strb	r8, [sp, #36]	; fField36
        269aa4:	e28dd024 	add	sp, sp, #36	; 0x24
        269aa8:	ea000052 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        269aac:	00685098 	streqb	r5, [r8], -#8	; fField8
        269ab0:	e24dd030 	sub	sp, sp, #48	; 0x30
        269ab4:	e3a00001 	mov	r0, #1	; 0x1
        269ab8:	eb60c8b7 	bl	1a9bd9c <$MakeArray(long)>
        269abc:	eb6561a2 	bl	1bc214c <$AllocateRefHandle(long)>
        269ac0:	e58d0008 	str	r0, [sp, #8]	; fField8
        269ac4:	e1a00004 	mov	r0, r4
        269ac8:	eb60f222 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        269acc:	eb607e86 	bl	1a894ec <$AddressToRef(void *)>
        269ad0:	eb65619d 	bl	1bc214c <$AllocateRefHandle(long)>
        269ad4:	e1a08000 	mov	r8, r0
        269ad8:	e5902000 	ldr	r2, [r0]
        269adc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        269ae0:	e5900000 	ldr	r0, [r0]
        269ae4:	e3a01000 	mov	r1, #0	; 0x0
        269ae8:	eb65721a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        269aec:	e1a00008 	mov	r0, r8
        269af0:	eb6565b1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269af4:	e3a03000 	mov	r3, #0	; 0x0
        269af8:	e92d0008 	stmdb	sp!, {r3}
        269afc:	e28d200c 	add	r2, sp, #12	; 0xc
        269b00:	e59f106c 	ldr	r1, [pc, #6c]	; 269b74 <TView::RealDoCommand(RefVar const &)+0xe3c>
        269b04:	e1a00005 	mov	r0, r5
        269b08:	eb6586b4 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        269b0c:	e28dd004 	add	sp, sp, #4	; 0x4
        269b10:	e2500002 	subs	r0, r0, #2	; 0x2
        269b14:	13a00001 	movne	r0, #1	; 0x1
        269b18:	e20010ff 	and	r1, r0, #255	; 0xff
        269b1c:	e5cd1030 	strb	r1, [sp, #48]
        269b20:	e1a00004 	mov	r0, r4
        269b24:	eb60f20a 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        269b28:	e3a00002 	mov	r0, #2	; 0x2
        269b2c:	eb656186 	bl	1bc214c <$AllocateRefHandle(long)>
        269b30:	e58d0000 	str	r0, [sp]
        269b34:	e1a0400d 	mov	r4, sp
        269b38:	e5970000 	ldr	r0, [r7]
        269b3c:	eb656182 	bl	1bc214c <$AllocateRefHandle(long)>
        269b40:	e58d0004 	str	r0, [sp, #4]	; fField4
        269b44:	e28d0004 	add	r0, sp, #4	; 0x4
        269b48:	e1a01006 	mov	r1, r6
        269b4c:	e1a02004 	mov	r2, r4
        269b50:	eb657204 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        269b54:	e59d0000 	ldr	r0, [sp]
        269b58:	eb656597 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269b5c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        269b60:	eb656595 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269b64:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        269b68:	eb656593 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269b6c:	e28dd030 	add	sp, sp, #48	; 0x30
        269b70:	ea000020 	b	269bf8 <TView::RealDoCommand(RefVar const &)+0xec0>
        269b74:	00685110 	rsbeq	r5, r8, r0, lsl r1
        269b78:	e24dd028 	sub	sp, sp, #40	; 0x28
        269b7c:	e3a00001 	mov	r0, #1	; 0x1
        269b80:	eb60c885 	bl	1a9bd9c <$MakeArray(long)>
        269b84:	eb656170 	bl	1bc214c <$AllocateRefHandle(long)>
        269b88:	e58d0000 	str	r0, [sp]
        269b8c:	e1a00004 	mov	r0, r4
        269b90:	eb61c88d 	bl	1adbdcc <$GetStrokeBundleFromCommand(RefVar const &)>
        269b94:	eb65616c 	bl	1bc214c <$AllocateRefHandle(long)>
        269b98:	e1a06000 	mov	r6, r0
        269b9c:	e5902000 	ldr	r2, [r0]
        269ba0:	e59d0000 	ldr	r0, [sp]
        269ba4:	e5900000 	ldr	r0, [r0]
        269ba8:	e3a01000 	mov	r1, #0	; 0x0
        269bac:	eb6571e9 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        269bb0:	e1a00006 	mov	r0, r6
        269bb4:	eb656580 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269bb8:	e3a03000 	mov	r3, #0	; 0x0
        269bbc:	e92d0008 	stmdb	sp!, {r3}
        269bc0:	e28d2004 	add	r2, sp, #4	; 0x4
        269bc4:	e1a00005 	mov	r0, r5
        269bc8:	e3a0101e 	mov	r1, #30	; 0x1e
        269bcc:	eb658682 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        269bd0:	e28dd004 	add	sp, sp, #4	; 0x4
        269bd4:	e2500002 	subs	r0, r0, #2	; 0x2
        269bd8:	13a00001 	movne	r0, #1	; 0x1
        269bdc:	e20010ff 	and	r1, r0, #255	; 0xff
        269be0:	e5cd1028 	strb	r1, [sp, #40]	; fField40
        269be4:	e1a00004 	mov	r0, r4
        269be8:	eb60f1d9 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        269bec:	e59d0000 	ldr	r0, [sp]
        269bf0:	eb656571 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269bf4:	e28dd028 	add	sp, sp, #40	; 0x28
        269bf8:	e4dd0004 	ldrb	r0, [sp], #4	; fField4
        269bfc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        269c00:	e24dd024 	sub	sp, sp, #36	; 0x24
        269c04:	e1a0200a 	mov	r2, sl
        269c08:	e1a01004 	mov	r1, r4
        269c0c:	e1a00005 	mov	r0, r5
        269c10:	e3a03000 	mov	r3, #0	; 0x0
        269c14:	eb61fe2f 	bl	1ae94d8 <TView::$HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)>
        269c18:	eaffff9f 	b	269a9c <TView::RealDoCommand(RefVar const &)+0xd64>
    */
}

/**
 * Symbol: TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)
 * Address: 00269c38
 */
TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *) {
    /*
        269c38:	e1a0c00d 	mov	ip, sp
        269c3c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        269c40:	e24cb004 	sub	fp, ip, #4	; 0x4
        269c44:	e1a04000 	mov	r4, r0
        269c48:	e1a06001 	mov	r6, r1
        269c4c:	e1a05002 	mov	r5, r2
        269c50:	e24dd004 	sub	sp, sp, #4	; 0x4
        269c54:	e3a00002 	mov	r0, #2	; 0x2
        269c58:	eb65613b 	bl	1bc214c <$AllocateRefHandle(long)>
        269c5c:	e3350022 	teq	r5, #34	; 0x22
        269c60:	e58d0000 	str	r0, [sp]
        269c64:	1a00001c 	bne	269cdc <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0xa4>
        269c68:	e3a00001 	mov	r0, #1	; 0x1
        269c6c:	eb60c84a 	bl	1a9bd9c <$MakeArray(long)>
        269c70:	e59d1000 	ldr	r1, [sp]
        269c74:	e5810000 	str	r0, [r1]
        269c78:	e1a00006 	mov	r0, r6
        269c7c:	eb60f1b7 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        269c80:	eb656131 	bl	1bc214c <$AllocateRefHandle(long)>
        269c84:	e1a05000 	mov	r5, r0
        269c88:	e5902000 	ldr	r2, [r0]
        269c8c:	e59d0000 	ldr	r0, [sp]
        269c90:	e5900000 	ldr	r0, [r0]
        269c94:	e3a01000 	mov	r1, #0	; 0x0
        269c98:	eb6571ae 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        269c9c:	e1a00005 	mov	r0, r5
        269ca0:	eb656545 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269ca4:	e3a03000 	mov	r3, #0	; 0x0
        269ca8:	e92d0008 	stmdb	sp!, {r3}
        269cac:	e28d2004 	add	r2, sp, #4	; 0x4
        269cb0:	e1a00004 	mov	r0, r4
        269cb4:	e3a01020 	mov	r1, #32	; 0x20
        269cb8:	eb658647 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        269cbc:	e28dd004 	add	sp, sp, #4	; 0x4
        269cc0:	e2500002 	subs	r0, r0, #2	; 0x2
        269cc4:	13a00001 	movne	r0, #1	; 0x1
        269cc8:	e20040ff 	and	r4, r0, #255	; 0xff
        269ccc:	e59d0000 	ldr	r0, [sp]
        269cd0:	eb656539 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269cd4:	e1a00004 	mov	r0, r4
        269cd8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        269cdc:	e24dd004 	sub	sp, sp, #4	; 0x4
        269ce0:	e1a00006 	mov	r0, r6
        269ce4:	eb60f19b 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        269ce8:	e1a09000 	mov	r9, r0
        269cec:	e1a07800 	mov	r7, r0, lsl #16
        269cf0:	e1a07827 	mov	r7, r7, lsr #16
        269cf4:	e1a08007 	mov	r8, r7
        269cf8:	e20008ff 	and	r0, r0, #16711680	; 0xff0000
        269cfc:	e1a00820 	mov	r0, r0, lsr #16
        269d00:	e3350020 	teq	r5, #32	; 0x20
        269d04:	e58d0000 	str	r0, [sp]
        269d08:	13350023 	teqne	r5, #35	; 0x23
        269d0c:	03a00001 	moveq	r0, #1	; 0x1
        269d10:	13a00000 	movne	r0, #0	; 0x0
        269d14:	e20060ff 	and	r6, r0, #255	; 0xff
        269d18:	e59d0000 	ldr	r0, [sp]
        269d1c:	e3300000 	teq	r0, #0	; 0x0
        269d20:	1a000007 	bne	269d44 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x10c>
        269d24:	e3360000 	teq	r6, #0	; 0x0
        269d28:	0a000005 	beq	269d44 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x10c>
        269d2c:	e258ccf7 	subs	ip, r8, #63232	; 0xf700
        269d30:	a35c0021 	cmpge	ip, #33	; 0x21
        269d34:	ba000002 	blt	269d44 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x10c>
        269d38:	e258ccf7 	subs	ip, r8, #63232	; 0xf700
        269d3c:	a35c002f 	cmpge	ip, #47	; 0x2f
        269d40:	da000001 	ble	269d4c <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x114>
        269d44:	e338001b 	teq	r8, #27	; 0x1b
        269d48:	1a000001 	bne	269d54 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x11c>
        269d4c:	e1a0a008 	mov	sl, r8
        269d50:	ea000008 	b	269d78 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x140>
        269d54:	e3a00000 	mov	r0, #0	; 0x0
        269d58:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        269d5c:	e1a0300d 	mov	r3, sp
        269d60:	e1a01006 	mov	r1, r6
        269d64:	e3a02000 	mov	r2, #0	; 0x0
        269d68:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        269d6c:	eb60e940 	bl	1aa4274 <$TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)>
        269d70:	e1a0a000 	mov	sl, r0
        269d74:	e28dd004 	add	sp, sp, #4	; 0x4
        269d78:	e3a00002 	mov	r0, #2	; 0x2
        269d7c:	eb60c806 	bl	1a9bd9c <$MakeArray(long)>
        269d80:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        269d84:	e5810000 	str	r0, [r1]
        269d88:	e3a00001 	mov	r0, #1	; 0x1
        269d8c:	e1800107 	orr	r0, r0, r7, lsl #2
        269d90:	e3a01002 	mov	r1, #2	; 0x2
        269d94:	e1810100 	orr	r0, r1, r0, lsl #2
        269d98:	eb6560eb 	bl	1bc214c <$AllocateRefHandle(long)>
        269d9c:	e1a07000 	mov	r7, r0
        269da0:	e5902000 	ldr	r2, [r0]
        269da4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        269da8:	e5900000 	ldr	r0, [r0]
        269dac:	e3a01000 	mov	r1, #0	; 0x0
        269db0:	eb657168 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        269db4:	e1a00007 	mov	r0, r7
        269db8:	eb6564ff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269dbc:	e1a00829 	mov	r0, r9, lsr #16
        269dc0:	e18a0800 	orr	r0, sl, r0, lsl #16
        269dc4:	e1a00100 	mov	r0, r0, lsl #2
        269dc8:	eb6560df 	bl	1bc214c <$AllocateRefHandle(long)>
        269dcc:	e1a07000 	mov	r7, r0
        269dd0:	e5902000 	ldr	r2, [r0]
        269dd4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        269dd8:	e5900000 	ldr	r0, [r0]
        269ddc:	e3a01001 	mov	r1, #1	; 0x1
        269de0:	eb65715c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        269de4:	e1a00007 	mov	r0, r7
        269de8:	eb6564f3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269dec:	e3a00000 	mov	r0, #0	; 0x0
        269df0:	e56d0004 	strb	r0, [sp, -#4]!	; fField4
        269df4:	e3350023 	teq	r5, #35	; 0x23
        269df8:	1a00000d 	bne	269e34 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x1fc>
        269dfc:	e1a0300d 	mov	r3, sp
        269e00:	e92d0008 	stmdb	sp!, {r3}
        269e04:	e28d200c 	add	r2, sp, #12	; 0xc
        269e08:	e1a00004 	mov	r0, r4
        269e0c:	e3a03000 	mov	r3, #0	; 0x0
        269e10:	e3a0101b 	mov	r1, #27	; 0x1b
        269e14:	eb6585f0 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        269e18:	e28dd004 	add	sp, sp, #4	; 0x4
        269e1c:	e2500002 	subs	r0, r0, #2	; 0x2
        269e20:	13a00001 	movne	r0, #1	; 0x1
        269e24:	e20070ff 	and	r7, r0, #255	; 0xff
        269e28:	e5dd0000 	ldrb	r0, [sp]
        269e2c:	e3300000 	teq	r0, #0	; 0x0
        269e30:	1a00000c 	bne	269e68 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x230>
        269e34:	e3a03000 	mov	r3, #0	; 0x0
        269e38:	e92d0008 	stmdb	sp!, {r3}
        269e3c:	e3360000 	teq	r6, #0	; 0x0
        269e40:	03a01019 	moveq	r1, #25	; 0x19
        269e44:	13a0101a 	movne	r1, #26	; 0x1a
        269e48:	e28d200c 	add	r2, sp, #12	; 0xc
        269e4c:	e1a00004 	mov	r0, r4
        269e50:	e3a03000 	mov	r3, #0	; 0x0
        269e54:	eb6585e0 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        269e58:	e28dd004 	add	sp, sp, #4	; 0x4
        269e5c:	e2500002 	subs	r0, r0, #2	; 0x2
        269e60:	13a00001 	movne	r0, #1	; 0x1
        269e64:	e20070ff 	and	r7, r0, #255	; 0xff
        269e68:	e24dd004 	sub	sp, sp, #4	; 0x4
        269e6c:	e3360000 	teq	r6, #0	; 0x0
        269e70:	0a000005 	beq	269e8c <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x254>
        269e74:	e1a01009 	mov	r1, r9
        269e78:	e1a0000a 	mov	r0, sl
        269e7c:	eb61f96e 	bl	1ae843c <$IsCommandKeystroke(unsigned short, unsigned long)>
        269e80:	e3300000 	teq	r0, #0	; 0x0
        269e84:	13a00001 	movne	r0, #1	; 0x1
        269e88:	1a000000 	bne	269e90 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x258>
        269e8c:	e3a00000 	mov	r0, #0	; 0x0
        269e90:	e20000ff 	and	r0, r0, #255	; 0xff
        269e94:	e58d0000 	str	r0, [sp]
        269e98:	e51b302c 	ldr	r3, [fp, -#44]	; fField44
        269e9c:	e3330000 	teq	r3, #0	; 0x0
        269ea0:	159d0000 	ldrne	r0, [sp]
        269ea4:	151b302c 	ldrne	r3, [fp, -#44]	; fField44
        269ea8:	15c30000 	strneb	r0, [r3]
        269eac:	e3360000 	teq	r6, #0	; 0x0
        269eb0:	0a00004e 	beq	269ff0 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x3b8>
        269eb4:	e3370000 	teq	r7, #0	; 0x0
        269eb8:	1a00004c 	bne	269ff0 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x3b8>
        269ebc:	e3380000 	teq	r8, #0	; 0x0
        269ec0:	0a00004c 	beq	269ff8 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x3c0>
        269ec4:	e1a00004 	mov	r0, r4
        269ec8:	e5941000 	ldr	r1, [r4]
        269ecc:	e1a0e00f 	mov	lr, pc
        269ed0:	e281f020 	add	pc, r1, #32	; 0x20
        269ed4:	e3100a01 	tst	r0, #4096	; 0x1000
        269ed8:	059d0000 	ldreq	r0, [sp]
        269edc:	03300000 	teqeq	r0, #0	; 0x0
        269ee0:	13a00001 	movne	r0, #1	; 0x1
        269ee4:	03a00000 	moveq	r0, #0	; 0x0
        269ee8:	e31000ff 	tst	r0, #255	; 0xff
        269eec:	0a00003f 	beq	269ff0 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x3b8>
        269ef0:	e24dd004 	sub	sp, sp, #4	; 0x4
        269ef4:	e209243e 	and	r2, r9, #1040187392	; 0x3e000000
        269ef8:	e1a0100a 	mov	r1, sl
        269efc:	e1a00004 	mov	r0, r4
        269f00:	eb61f941 	bl	1ae840c <$FindKeyCommand(TView *, unsigned short, unsigned long)>
        269f04:	eb656090 	bl	1bc214c <$AllocateRefHandle(long)>
        269f08:	e58d0000 	str	r0, [sp]
        269f0c:	e5900000 	ldr	r0, [r0]
        269f10:	e3300002 	teq	r0, #2	; 0x2
        269f14:	0a000032 	beq	269fe4 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x3ac>
        269f18:	e24dd004 	sub	sp, sp, #4	; 0x4
        269f1c:	e59f1078 	ldr	r1, [pc, #78]	; 269f9c <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x364>
        269f20:	e5911000 	ldr	r1, [r1]
        269f24:	e5911000 	ldr	r1, [r1]
        269f28:	eb6568cc 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        269f2c:	eb656086 	bl	1bc214c <$AllocateRefHandle(long)>
        269f30:	e58d0000 	str	r0, [sp]
        269f34:	e5900000 	ldr	r0, [r0]
        269f38:	e3300002 	teq	r0, #2	; 0x2
        269f3c:	0a000025 	beq	269fd8 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x3a0>
        269f40:	e3a07000 	mov	r7, #0	; 0x0
        269f44:	e59f8054 	ldr	r8, [pc, #54]	; 269fa0 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x368>
        269f48:	e3350023 	teq	r5, #35	; 0x23
        269f4c:	1a00001b 	bne	269fc0 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x388>
        269f50:	e59f004c 	ldr	r0, [pc, #4c]	; 269fa4 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x36c>	; fField4
        269f54:	e5900000 	ldr	r0, [r0]
        269f58:	e5901000 	ldr	r1, [r0]
        269f5c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        269f60:	e5900000 	ldr	r0, [r0]
        269f64:	eb6568bd 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        269f68:	eb656077 	bl	1bc214c <$AllocateRefHandle(long)>
        269f6c:	e1a05000 	mov	r5, r0
        269f70:	e5900000 	ldr	r0, [r0]
        269f74:	e3300002 	teq	r0, #2	; 0x2
        269f78:	0a000005 	beq	269f94 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x35c>
        269f7c:	e3100003 	tst	r0, #3	; 0x3
        269f80:	01a00140 	moveq	r0, r0, asr #2
        269f84:	0a000000 	beq	269f8c <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x354>
        269f88:	eb656063 	bl	1bc211c <$_RINTError(long)>
        269f8c:	e3100004 	tst	r0, #4	; 0x4
        269f90:	1a000004 	bne	269fa8 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x370>
        269f94:	e3a07001 	mov	r7, #1	; 0x1
        269f98:	ea000004 	b	269fb0 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x378>
        269f9c:	006833b0 	streqh	r3, [r8], -#48
        269fa0:	0c104f58 	ldceq	15, cr4, [r0], -#352
        269fa4:	00683900 	rsbeq	r3, r8, r0, lsl #18
        269fa8:	e3a01001 	mov	r1, #1	; 0x1
        269fac:	e5c81018 	strb	r1, [r8, #24]	; fField24
        269fb0:	e1a00005 	mov	r0, r5
        269fb4:	eb656480 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269fb8:	e3370000 	teq	r7, #0	; 0x0
        269fbc:	1a000002 	bne	269fcc <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x394>
        269fc0:	e1a0100d 	mov	r1, sp
        269fc4:	e1a00004 	mov	r0, r4
        269fc8:	eb61f911 	bl	1ae8414 <$SendKeyMessage(TView *, RefVar const &)>
        269fcc:	e3a07001 	mov	r7, #1	; 0x1
        269fd0:	e3a00000 	mov	r0, #0	; 0x0
        269fd4:	e5c80018 	strb	r0, [r8, #24]	; fField24
        269fd8:	e59d0000 	ldr	r0, [sp]
        269fdc:	eb656476 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269fe0:	e28dd004 	add	sp, sp, #4	; 0x4
        269fe4:	e59d0000 	ldr	r0, [sp]
        269fe8:	eb656473 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        269fec:	e28dd004 	add	sp, sp, #4	; 0x4
        269ff0:	e3370000 	teq	r7, #0	; 0x0
        269ff4:	1a000047 	bne	26a118 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x4e0>
        269ff8:	e3360000 	teq	r6, #0	; 0x0
        269ffc:	0a000045 	beq	26a118 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x4e0>
        26a000:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        26a004:	e3300039 	teq	r0, #57	; 0x39
        26a008:	02090401 	andeq	r0, r9, #16777216	; 0x1000000
        26a00c:	03300000 	teqeq	r0, #0	; 0x0
        26a010:	1a000040 	bne	26a118 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x4e0>
        26a014:	e24dd004 	sub	sp, sp, #4	; 0x4
        26a018:	e3a00002 	mov	r0, #2	; 0x2
        26a01c:	eb65604a 	bl	1bc214c <$AllocateRefHandle(long)>
        26a020:	e58d0000 	str	r0, [sp]
        26a024:	e1a0000d 	mov	r0, sp
        26a028:	eb616cab 	bl	1ac52dc <$FClicker>
        26a02c:	e59d0000 	ldr	r0, [sp]
        26a030:	eb656461 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a034:	e24dd004 	sub	sp, sp, #4	; 0x4
        26a038:	e59f00e8 	ldr	r0, [pc, #e8]	; 26a128 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x4f0>
        26a03c:	e5900000 	ldr	r0, [r0]
        26a040:	eb656041 	bl	1bc214c <$AllocateRefHandle(long)>
        26a044:	e1a04000 	mov	r4, r0
        26a048:	e59f00dc 	ldr	r0, [pc, #dc]	; 26a12c <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x4f4>
        26a04c:	e5900000 	ldr	r0, [r0]
        26a050:	e5901000 	ldr	r1, [r0]
        26a054:	e5940000 	ldr	r0, [r4]
        26a058:	eb656880 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        26a05c:	eb65603a 	bl	1bc214c <$AllocateRefHandle(long)>
        26a060:	e58d0000 	str	r0, [sp]
        26a064:	e1a00004 	mov	r0, r4
        26a068:	eb656453 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a06c:	e1a0000d 	mov	r0, sp
        26a070:	eb662645 	bl	1bf398c <$IsArray(RefVar const &)>
        26a074:	e3300000 	teq	r0, #0	; 0x0
        26a078:	0a000022 	beq	26a108 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x4d0>
        26a07c:	e59d0000 	ldr	r0, [sp]
        26a080:	e5900000 	ldr	r0, [r0]
        26a084:	eb656c88 	bl	1bc52ac <$Length(long)>
        26a088:	e1a06000 	mov	r6, r0
        26a08c:	e24dd008 	sub	sp, sp, #8	; 0x8
        26a090:	e3a05000 	mov	r5, #0	; 0x0
        26a094:	e3500000 	cmp	r0, #0	; 0x0
        26a098:	da000019 	ble	26a104 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x4cc>
        26a09c:	e59f808c 	ldr	r8, [pc, #8c]	; 26a130 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x4f8>	; fField8
        26a0a0:	e59f708c 	ldr	r7, [pc, #8c]	; 26a134 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x4fc>	; fField8
        26a0a4:	e5d80000 	ldrb	r0, [r8]
        26a0a8:	e3300000 	teq	r0, #0	; 0x0
        26a0ac:	03a00002 	moveq	r0, #2	; 0x2
        26a0b0:	13a0001a 	movne	r0, #26	; 0x1a
        26a0b4:	eb656024 	bl	1bc214c <$AllocateRefHandle(long)>
        26a0b8:	e58d0000 	str	r0, [sp]
        26a0bc:	e1a0400d 	mov	r4, sp
        26a0c0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        26a0c4:	e5900000 	ldr	r0, [r0]
        26a0c8:	e1a01005 	mov	r1, r5
        26a0cc:	eb656860 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        26a0d0:	eb65601d 	bl	1bc214c <$AllocateRefHandle(long)>
        26a0d4:	e58d0004 	str	r0, [sp, #4]	; fField4
        26a0d8:	e28d0004 	add	r0, sp, #4	; 0x4
        26a0dc:	e1a01007 	mov	r1, r7
        26a0e0:	e1a02004 	mov	r2, r4
        26a0e4:	eb6657d6 	bl	1c00044 <$NSSend__FRC6RefVarN21>
        26a0e8:	e59d0000 	ldr	r0, [sp]
        26a0ec:	eb656432 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a0f0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        26a0f4:	eb656430 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a0f8:	e2855001 	add	r5, r5, #1	; 0x1
        26a0fc:	e1550006 	cmp	r5, r6
        26a100:	baffffe7 	blt	26a0a4 <TView::HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)+0x46c>
        26a104:	e28dd008 	add	sp, sp, #8	; 0x8
        26a108:	e3a07001 	mov	r7, #1	; 0x1
        26a10c:	e59d0000 	ldr	r0, [sp]
        26a110:	eb656429 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a114:	e28dd008 	add	sp, sp, #8	; 0x8
        26a118:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        26a11c:	eb656426 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a120:	e1a00007 	mov	r0, r7
        26a124:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        26a128:	0c10180c 	ldceq	8, cr1, [r0], -#48
        26a12c:	00685338 	rsbeq	r5, r8, r8, lsr r3
        26a130:	0c105508 	ldceq	5, cr5, [r0], -#32	; fField32
        26a134:	00684568 	rsbeq	r4, r8, r8, ror #10
    */
}

/**
 * Symbol: TView::ProtoedFrom(RefVar const &)
 * Address: 0026a138
 */
TView::ProtoedFrom(RefVar const &) {
    /*
        26a138:	e1a0c00d 	mov	ip, sp
        26a13c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26a140:	e24cb004 	sub	fp, ip, #4	; 0x4
        26a144:	e1a04001 	mov	r4, r1
        26a148:	e5900024 	ldr	r0, [r0, #36]	; fField36
        26a14c:	e5900000 	ldr	r0, [r0]
        26a150:	eb655ffd 	bl	1bc214c <$AllocateRefHandle(long)>
        26a154:	e1a05000 	mov	r5, r0
        26a158:	e5900000 	ldr	r0, [r0]
        26a15c:	e3a07000 	mov	r7, #0	; 0x0
        26a160:	e3300002 	teq	r0, #2	; 0x2
        26a164:	0a000013 	beq	26a1b8 <TView::ProtoedFrom(RefVar const &)+0x80>
        26a168:	e59f6028 	ldr	r6, [pc, #28]	; 26a198 <TView::ProtoedFrom(RefVar const &)+0x60>	; fField28
        26a16c:	e5940000 	ldr	r0, [r4]
        26a170:	e5901000 	ldr	r1, [r0]
        26a174:	e5950000 	ldr	r0, [r5]
        26a178:	eb65682c 	bl	1bc4230 <$EQRef__FlT1>
        26a17c:	e3300000 	teq	r0, #0	; 0x0
        26a180:	0a000005 	beq	26a19c <TView::ProtoedFrom(RefVar const &)+0x64>
        26a184:	e3a04001 	mov	r4, #1	; 0x1
        26a188:	e1a00005 	mov	r0, r5
        26a18c:	eb65640a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a190:	e1a00004 	mov	r0, r4
        26a194:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        26a198:	00685390 	streqb	r5, [r8], -#48
        26a19c:	e5960000 	ldr	r0, [r6]
        26a1a0:	e5901000 	ldr	r1, [r0]
        26a1a4:	e5950000 	ldr	r0, [r5]
        26a1a8:	eb65682c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        26a1ac:	e5850000 	str	r0, [r5]
        26a1b0:	e3300002 	teq	r0, #2	; 0x2
        26a1b4:	1affffec 	bne	26a16c <TView::ProtoedFrom(RefVar const &)+0x34>
        26a1b8:	e1a00005 	mov	r0, r5
        26a1bc:	eb6563fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a1c0:	e1a00007 	mov	r0, r7
        26a1c4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TView::BuildKeyChildList(TViewList *, long, long)
 * Address: 0026a1c8
 */
TView::BuildKeyChildList(TViewList *, long, long) {
    /*
        26a1c8:	e1a0c00d 	mov	ip, sp
        26a1cc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        26a1d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26a1d4:	e1a05001 	mov	r5, r1
        26a1d8:	e1a06002 	mov	r6, r2
        26a1dc:	e1a04003 	mov	r4, r3
        26a1e0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        26a1e4:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        26a1e8:	e1a0000d 	mov	r0, sp
        26a1ec:	eb607890 	bl	1a88434 <TListLoop::$__ct(CList *)>
        26a1f0:	e1a0000d 	mov	r0, sp
        26a1f4:	eb60cb09 	bl	1a9ce20 <TListLoop::$Next(void)>
        26a1f8:	e1b07000 	movs	r7, r0
        26a1fc:	0a000034 	beq	26a2d4 <TView::BuildKeyChildList(TViewList *, long, long)+0x10c>
        26a200:	e59f906c 	ldr	r9, [pc, #6c]	; 26a274 <TView::BuildKeyChildList(TViewList *, long, long)+0xac>
        26a204:	e59f806c 	ldr	r8, [pc, #6c]	; 26a278 <TView::BuildKeyChildList(TViewList *, long, long)+0xb0>
        26a208:	e5970008 	ldr	r0, [r7, #8]	; fField8
        26a20c:	e3100001 	tst	r0, #1	; 0x1
        26a210:	0a00002b 	beq	26a2c4 <TView::BuildKeyChildList(TViewList *, long, long)+0xfc>
        26a214:	e1a03004 	mov	r3, r4
        26a218:	e1a02006 	mov	r2, r6
        26a21c:	e1a01005 	mov	r1, r5
        26a220:	e1a00007 	mov	r0, r7
        26a224:	e597c000 	ldr	ip, [r7]
        26a228:	e1a0e00f 	mov	lr, pc
        26a22c:	e28cf0f4 	add	pc, ip, #244	; 0xf4
        26a230:	e5970008 	ldr	r0, [r7, #8]	; fField8
        26a234:	e3100002 	tst	r0, #2	; 0x2
        26a238:	1a000021 	bne	26a2c4 <TView::BuildKeyChildList(TViewList *, long, long)+0xfc>
        26a23c:	e3340000 	teq	r4, #0	; 0x0
        26a240:	1a00000d 	bne	26a27c <TView::BuildKeyChildList(TViewList *, long, long)+0xb4>
        26a244:	e1a00007 	mov	r0, r7
        26a248:	e5971000 	ldr	r1, [r7]
        26a24c:	e1a0e00f 	mov	lr, pc
        26a250:	e281f020 	add	pc, r1, #32	; 0x20
        26a254:	e3100902 	tst	r0, #32768	; 0x8000
        26a258:	1a000015 	bne	26a2b4 <TView::BuildKeyChildList(TViewList *, long, long)+0xec>
        26a25c:	e1a01009 	mov	r1, r9
        26a260:	e1a00007 	mov	r0, r7
        26a264:	eb61cae6 	bl	1adce04 <TView::$ProtoedFrom(RefVar const &)>
        26a268:	e3300000 	teq	r0, #0	; 0x0
        26a26c:	0a000014 	beq	26a2c4 <TView::BuildKeyChildList(TViewList *, long, long)+0xfc>
        26a270:	ea00000f 	b	26a2b4 <TView::BuildKeyChildList(TViewList *, long, long)+0xec>
        26a274:	00681698 	streqb	r1, [r8], -#104
        26a278:	006806b8 	streqh	r0, [r8], -#104
        26a27c:	e3340001 	teq	r4, #1	; 0x1
        26a280:	1a00000f 	bne	26a2c4 <TView::BuildKeyChildList(TViewList *, long, long)+0xfc>
        26a284:	e1a00007 	mov	r0, r7
        26a288:	e3a01051 	mov	r1, #81	; 0x51
        26a28c:	e5972000 	ldr	r2, [r7]
        26a290:	e1a0e00f 	mov	lr, pc
        26a294:	e282f004 	add	pc, r2, #4	; 0x4
        26a298:	e3300000 	teq	r0, #0	; 0x0
        26a29c:	0a000008 	beq	26a2c4 <TView::BuildKeyChildList(TViewList *, long, long)+0xfc>
        26a2a0:	e1a01008 	mov	r1, r8
        26a2a4:	e1a00007 	mov	r0, r7
        26a2a8:	eb61cad5 	bl	1adce04 <TView::$ProtoedFrom(RefVar const &)>
        26a2ac:	e3300000 	teq	r0, #0	; 0x0
        26a2b0:	1a000003 	bne	26a2c4 <TView::BuildKeyChildList(TViewList *, long, long)+0xfc>
        26a2b4:	e1a02007 	mov	r2, r7
        26a2b8:	e5951000 	ldr	r1, [r5]
        26a2bc:	e1a00005 	mov	r0, r5
        26a2c0:	eb65fc89 	bl	1be94ec <CList::$InsertAt(long, void *)>
        26a2c4:	e1a0000d 	mov	r0, sp
        26a2c8:	eb60cad4 	bl	1a9ce20 <TListLoop::$Next(void)>
        26a2cc:	e1b07000 	movs	r7, r0
        26a2d0:	1affffcc 	bne	26a208 <TView::BuildKeyChildList(TViewList *, long, long)+0x40>
        26a2d4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TView::NextKeyView(TView *, long, long)
 * Address: 0026a2d8
 */
TView::NextKeyView(TView *, long, long) {
    /*
        26a2d8:	e1a0c00d 	mov	ip, sp
        26a2dc:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        26a2e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26a2e4:	e1a05000 	mov	r5, r0
        26a2e8:	e1a04002 	mov	r4, r2
        26a2ec:	e24dd00c 	sub	sp, sp, #12	; 0xc
        26a2f0:	e1a09000 	mov	r9, r0
        26a2f4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        26a2f8:	e3100004 	tst	r0, #4	; 0x4
        26a2fc:	e59f1074 	ldr	r1, [pc, #74]	; 26a378 <TView::NextKeyView(TView *, long, long)+0xa0>
        26a300:	e58d1008 	str	r1, [sp, #8]	; fField8
        26a304:	e59f1070 	ldr	r1, [pc, #70]	; 26a37c <TView::NextKeyView(TView *, long, long)+0xa4>
        26a308:	e58d1004 	str	r1, [sp, #4]	; fField4
        26a30c:	e59f706c 	ldr	r7, [pc, #6c]	; 26a380 <TView::NextKeyView(TView *, long, long)+0xa8>
        26a310:	1a00000e 	bne	26a350 <TView::NextKeyView(TView *, long, long)+0x78>
        26a314:	e1a00005 	mov	r0, r5
        26a318:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        26a31c:	eb61cab8 	bl	1adce04 <TView::$ProtoedFrom(RefVar const &)>
        26a320:	e3300000 	teq	r0, #0	; 0x0
        26a324:	1a000009 	bne	26a350 <TView::NextKeyView(TView *, long, long)+0x78>
        26a328:	e1a00005 	mov	r0, r5
        26a32c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        26a330:	eb658084 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        26a334:	e3300002 	teq	r0, #2	; 0x2
        26a338:	1a000004 	bne	26a350 <TView::NextKeyView(TView *, long, long)+0x78>
        26a33c:	e5970000 	ldr	r0, [r7]
        26a340:	e1350000 	teq	r5, r0
        26a344:	15b5101c 	ldrne	r1, [r5, #28]!	; fField28
        26a348:	11310000 	teqne	r1, r0
        26a34c:	11a09001 	movne	r9, r1
        26a350:	e24dd004 	sub	sp, sp, #4	; 0x4
        26a354:	e1a06009 	mov	r6, r9
        26a358:	e3a00002 	mov	r0, #2	; 0x2
        26a35c:	eb655f7a 	bl	1bc214c <$AllocateRefHandle(long)>
        26a360:	e58d0000 	str	r0, [sp]
        26a364:	e51b302c 	ldr	r3, [fp, -#44]	; fField44
        26a368:	e3330001 	teq	r3, #1	; 0x1
        26a36c:	159f5010 	ldrne	r5, [pc, #10]	; 26a384 <TView::NextKeyView(TView *, long, long)+0xac>
        26a370:	1a000005 	bne	26a38c <TView::NextKeyView(TView *, long, long)+0xb4>
        26a374:	ea000077 	b	26a558 <TView::NextKeyView(TView *, long, long)+0x280>
        26a378:	00680c60 	rsbeq	r0, r8, r0, ror #24
        26a37c:	006853c8 	rsbeq	r5, r8, r8, asr #7
        26a380:	0c101934 	ldceq	9, cr1, [r0], -#208
        26a384:	006853c0 	rsbeq	r5, r8, r0, asr #7
        26a388:	e596601c 	ldr	r6, [r6, #28]	; fField28
        26a38c:	e1a01005 	mov	r1, r5
        26a390:	e1a00006 	mov	r0, r6
        26a394:	eb65806b 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        26a398:	e59d1000 	ldr	r1, [sp]
        26a39c:	e5810000 	str	r0, [r1]
        26a3a0:	e3300002 	teq	r0, #2	; 0x2
        26a3a4:	1a000003 	bne	26a3b8 <TView::NextKeyView(TView *, long, long)+0xe0>
        26a3a8:	e5970000 	ldr	r0, [r7]
        26a3ac:	e1360000 	teq	r6, r0
        26a3b0:	1afffff4 	bne	26a388 <TView::NextKeyView(TView *, long, long)+0xb0>
        26a3b4:	ea000045 	b	26a4d0 <TView::NextKeyView(TView *, long, long)+0x1f8>
        26a3b8:	e59d0000 	ldr	r0, [sp]
        26a3bc:	e5900000 	ldr	r0, [r0]
        26a3c0:	e3300002 	teq	r0, #2	; 0x2
        26a3c4:	151b302c 	ldrne	r3, [fp, -#44]	; fField44
        26a3c8:	13330001 	teqne	r3, #1	; 0x1
        26a3cc:	0a00003f 	beq	26a4d0 <TView::NextKeyView(TView *, long, long)+0x1f8>
        26a3d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        26a3d4:	eb656bb4 	bl	1bc52ac <$Length(long)>
        26a3d8:	e1a05000 	mov	r5, r0
        26a3dc:	e3a00000 	mov	r0, #0	; 0x0
        26a3e0:	e58d0004 	str	r0, [sp, #4]	; fField4
        26a3e4:	e51b1034 	ldr	r1, [fp, -#52]
        26a3e8:	e5910024 	ldr	r0, [r1, #36]	; fField36
        26a3ec:	e5900000 	ldr	r0, [r0]
        26a3f0:	eb655f55 	bl	1bc214c <$AllocateRefHandle(long)>
        26a3f4:	e1a08000 	mov	r8, r0
        26a3f8:	e2860024 	add	r0, r6, #36	; 0x24
        26a3fc:	e58d000c 	str	r0, [sp, #12]	; fField12
        26a400:	e5900000 	ldr	r0, [r0]
        26a404:	e5900000 	ldr	r0, [r0]
        26a408:	eb655f4f 	bl	1bc214c <$AllocateRefHandle(long)>
        26a40c:	e3a06000 	mov	r6, #0	; 0x0
        26a410:	e3550000 	cmp	r5, #0	; 0x0
        26a414:	e58d0000 	str	r0, [sp]
        26a418:	da000021 	ble	26a4a4 <TView::NextKeyView(TView *, long, long)+0x1cc>
        26a41c:	e24dd008 	sub	sp, sp, #8	; 0x8
        26a420:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        26a424:	e5900000 	ldr	r0, [r0]
        26a428:	e1a01006 	mov	r1, r6
        26a42c:	eb656788 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        26a430:	eb655f45 	bl	1bc214c <$AllocateRefHandle(long)>
        26a434:	e58d0004 	str	r0, [sp, #4]	; fField4
        26a438:	e28d1004 	add	r1, sp, #4	; 0x4
        26a43c:	e28d0008 	add	r0, sp, #8	; 0x8
        26a440:	eb656785 	bl	1bc425c <$GetFramePath__FRC6RefVarT1>
        26a444:	eb655f40 	bl	1bc214c <$AllocateRefHandle(long)>
        26a448:	e1a0a000 	mov	sl, r0
        26a44c:	e5901000 	ldr	r1, [r0]
        26a450:	e5980000 	ldr	r0, [r8]
        26a454:	eb656775 	bl	1bc4230 <$EQRef__FlT1>
        26a458:	e3300000 	teq	r0, #0	; 0x0
        26a45c:	13a00001 	movne	r0, #1	; 0x1
        26a460:	e58d0000 	str	r0, [sp]
        26a464:	e1a0000a 	mov	r0, sl
        26a468:	eb656353 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a46c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        26a470:	eb656351 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a474:	e49d0004 	ldr	r0, [sp], #4	; fField4
        26a478:	e3300000 	teq	r0, #0	; 0x0
        26a47c:	0a000001 	beq	26a488 <TView::NextKeyView(TView *, long, long)+0x1b0>
        26a480:	e28dd004 	add	sp, sp, #4	; 0x4
        26a484:	ea000014 	b	26a4dc <TView::NextKeyView(TView *, long, long)+0x204>
        26a488:	e28dd004 	add	sp, sp, #4	; 0x4
        26a48c:	e2866001 	add	r6, r6, #1	; 0x1
        26a490:	e1560005 	cmp	r6, r5
        26a494:	baffffe0 	blt	26a41c <TView::NextKeyView(TView *, long, long)+0x144>
        26a498:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        26a49c:	e3300000 	teq	r0, #0	; 0x0
        26a4a0:	1a00000d 	bne	26a4dc <TView::NextKeyView(TView *, long, long)+0x204>
        26a4a4:	e59f002c 	ldr	r0, [pc, #2c]	; 26a4d8 <TView::NextKeyView(TView *, long, long)+0x200>	; fField2
        26a4a8:	e5900000 	ldr	r0, [r0]
        26a4ac:	e3a02000 	mov	r2, #0	; 0x0
        26a4b0:	e3e01033 	mvn	r1, #51	; 0x33
        26a4b4:	e2411c21 	sub	r1, r1, #8448	; 0x2100
        26a4b8:	eb65e337 	bl	1be319c <$Throw>
        26a4bc:	e59d0000 	ldr	r0, [sp]
        26a4c0:	eb65633d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a4c4:	e1a00008 	mov	r0, r8
        26a4c8:	eb65633b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a4cc:	e28dd008 	add	sp, sp, #8	; 0x8
        26a4d0:	e1a06009 	mov	r6, r9
        26a4d4:	ea00001f 	b	26a558 <TView::NextKeyView(TView *, long, long)+0x280>
        26a4d8:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        26a4dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        26a4e0:	e0850006 	add	r0, r5, r6
        26a4e4:	e0801004 	add	r1, r0, r4
        26a4e8:	e1a00005 	mov	r0, r5
        26a4ec:	eb652113 	bl	1bb2940 <$__rt_sdiv>
        26a4f0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        26a4f4:	e5900000 	ldr	r0, [r0]
        26a4f8:	eb656755 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        26a4fc:	eb655f12 	bl	1bc214c <$AllocateRefHandle(long)>
        26a500:	e58d0004 	str	r0, [sp, #4]	; fField4
        26a504:	e28d1004 	add	r1, sp, #4	; 0x4
        26a508:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        26a50c:	eb656752 	bl	1bc425c <$GetFramePath__FRC6RefVarT1>
        26a510:	eb655f0d 	bl	1bc214c <$AllocateRefHandle(long)>
        26a514:	e58d0000 	str	r0, [sp]
        26a518:	e1a0000d 	mov	r0, sp
        26a51c:	eb65800e 	bl	1bca55c <$GetView(RefVar const &)>
        26a520:	e1a04000 	mov	r4, r0
        26a524:	e59d0000 	ldr	r0, [sp]
        26a528:	eb656323 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a52c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        26a530:	eb656321 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a534:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        26a538:	eb65631f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a53c:	e1a00008 	mov	r0, r8
        26a540:	eb65631d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a544:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        26a548:	eb65631b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a54c:	e1a00004 	mov	r0, r4
        26a550:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        26a554:	e1a06000 	mov	r6, r0
        26a558:	e5960008 	ldr	r0, [r6, #8]	; fField8
        26a55c:	e3100004 	tst	r0, #4	; 0x4
        26a560:	1a00000e 	bne	26a5a0 <TView::NextKeyView(TView *, long, long)+0x2c8>
        26a564:	e1a00006 	mov	r0, r6
        26a568:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        26a56c:	eb61ca24 	bl	1adce04 <TView::$ProtoedFrom(RefVar const &)>
        26a570:	e3300000 	teq	r0, #0	; 0x0
        26a574:	1a000009 	bne	26a5a0 <TView::NextKeyView(TView *, long, long)+0x2c8>
        26a578:	e1a00006 	mov	r0, r6
        26a57c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        26a580:	eb657ff0 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        26a584:	e3300002 	teq	r0, #2	; 0x2
        26a588:	1a000004 	bne	26a5a0 <TView::NextKeyView(TView *, long, long)+0x2c8>
        26a58c:	e5971000 	ldr	r1, [r7]
        26a590:	e1360001 	teq	r6, r1
        26a594:	1596001c 	ldrne	r0, [r6, #28]	; fField28
        26a598:	11300001 	teqne	r0, r1
        26a59c:	1affffec 	bne	26a554 <TView::NextKeyView(TView *, long, long)+0x27c>
        26a5a0:	e3a07000 	mov	r7, #0	; 0x0
        26a5a4:	e3a08000 	mov	r8, #0	; 0x0
        26a5a8:	e3a09000 	mov	r9, #0	; 0x0
        26a5ac:	eb04816d 	bl	38ab68 <C$$dtorvec$$Limit+0x1f4>
        26a5b0:	e1a05000 	mov	r5, r0
        26a5b4:	e1a02004 	mov	r2, r4
        26a5b8:	e1a01000 	mov	r1, r0
        26a5bc:	e1a00006 	mov	r0, r6
        26a5c0:	e51b302c 	ldr	r3, [fp, -#44]	; fField44
        26a5c4:	e596c000 	ldr	ip, [r6]
        26a5c8:	e1a0e00f 	mov	lr, pc
        26a5cc:	e28cf0f4 	add	pc, ip, #244	; 0xf4
        26a5d0:	e5950000 	ldr	r0, [r5]
        26a5d4:	e3500001 	cmp	r0, #1	; 0x1
        26a5d8:	da000003 	ble	26a5ec <TView::NextKeyView(TView *, long, long)+0x314>
        26a5dc:	e2401001 	sub	r1, r0, #1	; 0x1
        26a5e0:	e1a00005 	mov	r0, r5
        26a5e4:	eb65ef56 	bl	1be6344 <CList::$At(long)>
        26a5e8:	e1a08000 	mov	r8, r0
        26a5ec:	e24dd00c 	sub	sp, sp, #12	; 0xc
        26a5f0:	e1a01005 	mov	r1, r5
        26a5f4:	e1a0000d 	mov	r0, sp
        26a5f8:	eb60778d 	bl	1a88434 <TListLoop::$__ct(CList *)>
        26a5fc:	e1a0000d 	mov	r0, sp
        26a600:	eb60ca06 	bl	1a9ce20 <TListLoop::$Next(void)>
        26a604:	e3300000 	teq	r0, #0	; 0x0
        26a608:	0a000010 	beq	26a650 <TView::NextKeyView(TView *, long, long)+0x378>
        26a60c:	e51b1034 	ldr	r1, [fp, -#52]
        26a610:	e1300001 	teq	r0, r1
        26a614:	1a000003 	bne	26a628 <TView::NextKeyView(TView *, long, long)+0x350>
        26a618:	e3740001 	cmn	r4, #1	; 0x1
        26a61c:	13a09001 	movne	r9, #1	; 0x1
        26a620:	1a000006 	bne	26a640 <TView::NextKeyView(TView *, long, long)+0x368>
        26a624:	ea000009 	b	26a650 <TView::NextKeyView(TView *, long, long)+0x378>
        26a628:	e3390000 	teq	r9, #0	; 0x0
        26a62c:	11a07000 	movne	r7, r0
        26a630:	1a000006 	bne	26a650 <TView::NextKeyView(TView *, long, long)+0x378>
        26a634:	e3370000 	teq	r7, #0	; 0x0
        26a638:	01a07000 	moveq	r7, r0
        26a63c:	e1a08000 	mov	r8, r0
        26a640:	e1a0000d 	mov	r0, sp
        26a644:	eb60c9f5 	bl	1a9ce20 <TListLoop::$Next(void)>
        26a648:	e3300000 	teq	r0, #0	; 0x0
        26a64c:	1affffee 	bne	26a60c <TView::NextKeyView(TView *, long, long)+0x334>
        26a650:	e3350000 	teq	r5, #0	; 0x0
        26a654:	0a000004 	beq	26a66c <TView::NextKeyView(TView *, long, long)+0x394>
        26a658:	e1a00005 	mov	r0, r5
        26a65c:	e3a01000 	mov	r1, #0	; 0x0
        26a660:	eb65eb07 	bl	1be5284 <CList::$__dt(void)>
        26a664:	e1a00005 	mov	r0, r5
        26a668:	eb658c1c 	bl	1bcd6e0 <$__dl(void *)>
        26a66c:	e3540000 	cmp	r4, #0	; 0x0
        26a670:	b1a04008 	movlt	r4, r8
        26a674:	a1a04007 	movge	r4, r7
        26a678:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        26a67c:	eb6562ce 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a680:	e1a00004 	mov	r0, r4
        26a684:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TView::GetSelection(void)
 * Address: 0026a688
 */
TView::GetSelection(void) {
    /*
        26a688:	e3a00002 	mov	r0, #2	; 0x2
        26a68c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::Children(void)
 * Address: 0026a690
 */
TView::Children(void) {
    /*
        26a690:	e59f1000 	ldr	r1, [pc, #0]	; 26a698 <TView::Children(void)+0x8>
        26a694:	ea657fab 	b	1bca548 <TView::$GetProto( const(RefVar const &))>
        26a698:	00684f28 	rsbeq	r4, r8, r8, lsr #30
    */
}

/**
 * Symbol: TView::SetSelection(RefVar const &, long *, long *)
 * Address: 0026a69c
 */
TView::SetSelection(RefVar const &, long *, long *) {
    /*
        26a69c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::SetCaretOffset(long *, long *)
 * Address: 0026a6a0
 */
TView::SetCaretOffset(long *, long *) {
    /*
        26a6a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::ActivateSelection(unsigned char)
 * Address: 0026a6a4
 */
TView::ActivateSelection(unsigned char) {
    /*
        26a6a4:	e1a0c00d 	mov	ip, sp
        26a6a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26a6ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        26a6b0:	e1a04000 	mov	r4, r0
        26a6b4:	e20150ff 	and	r5, r1, #255	; 0xff
        26a6b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        26a6bc:	e59f0060 	ldr	r0, [pc, #60]	; 26a724 <TView::ActivateSelection(unsigned char)+0x80>
        26a6c0:	e3a01001 	mov	r1, #1	; 0x1
        26a6c4:	eb655e9b 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        26a6c8:	eb655e9f 	bl	1bc214c <$AllocateRefHandle(long)>
        26a6cc:	e3350000 	teq	r5, #0	; 0x0
        26a6d0:	e58d0000 	str	r0, [sp]
        26a6d4:	03a00002 	moveq	r0, #2	; 0x2
        26a6d8:	13a0001a 	movne	r0, #26	; 0x1a
        26a6dc:	eb655e9a 	bl	1bc214c <$AllocateRefHandle(long)>
        26a6e0:	e1a05000 	mov	r5, r0
        26a6e4:	e5902000 	ldr	r2, [r0]
        26a6e8:	e59d0000 	ldr	r0, [sp]
        26a6ec:	e5900000 	ldr	r0, [r0]
        26a6f0:	e3a01000 	mov	r1, #0	; 0x0
        26a6f4:	eb656f17 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        26a6f8:	e1a00005 	mov	r0, r5
        26a6fc:	eb6562ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a700:	e3a03000 	mov	r3, #0	; 0x0
        26a704:	e92d0008 	stmdb	sp!, {r3}
        26a708:	e28d2004 	add	r2, sp, #4	; 0x4
        26a70c:	e1a00004 	mov	r0, r4
        26a710:	e3a01021 	mov	r1, #33	; 0x21
        26a714:	eb6583b0 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        26a718:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        26a71c:	eb6562a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a720:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        26a724:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: TView::PointToCaret(TPoint &, TRect *, TRect *)
 * Address: 0026a728
 */
TView::PointToCaret(TPoint &, TRect *, TRect *) {
    /*
        26a728:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
        26a72c:	e2411501 	sub	r1, r1, #4194304	; 0x400000
        26a730:	e5c21005 	strb	r1, [r2, #5]
        26a734:	e3e0007f 	mvn	r0, #127	; 0x7f
        26a738:	e5c20004 	strb	r0, [r2, #4]	; fField4
        26a73c:	e5c21001 	strb	r1, [r2, #1]
        26a740:	e5c20000 	strb	r0, [r2]
        26a744:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::OffsetToCaret(long, TRect *)
 * Address: 0026a748
 */
TView::OffsetToCaret(long, TRect *) {
    /*
        26a748:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
        26a74c:	e2411501 	sub	r1, r1, #4194304	; 0x400000
        26a750:	e5c21005 	strb	r1, [r2, #5]
        26a754:	e3e0007f 	mvn	r0, #127	; 0x7f
        26a758:	e5c20004 	strb	r0, [r2, #4]	; fField4
        26a75c:	e5c21001 	strb	r1, [r2, #1]
        26a760:	e5c20000 	strb	r0, [r2]
        26a764:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::Clipper( const(void))
 * Address: 0026a768
 */
TView::Clipper( const(void)) {
    /*
        26a768:	e1a0c00d 	mov	ip, sp
        26a76c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26a770:	e24cb004 	sub	fp, ip, #4	; 0x4
        26a774:	e1a04000 	mov	r4, r0
        26a778:	e3a05000 	mov	r5, #0	; 0x0
        26a77c:	eb657f7b 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        26a780:	e3300000 	teq	r0, #0	; 0x0
        26a784:	0a00000e 	beq	26a7c4 <TView::Clipper( const(void))+0x5c>
        26a788:	e59f103c 	ldr	r1, [pc, #3c]	; 26a7cc <TView::Clipper( const(void))+0x64>
        26a78c:	e5911000 	ldr	r1, [r1]
        26a790:	e5911000 	ldr	r1, [r1]
        26a794:	e5940024 	ldr	r0, [r4, #36]	; fField36
        26a798:	e5900000 	ldr	r0, [r0]
        26a79c:	eb6566af 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        26a7a0:	eb655e69 	bl	1bc214c <$AllocateRefHandle(long)>
        26a7a4:	e1a04000 	mov	r4, r0
        26a7a8:	e5900000 	ldr	r0, [r0]
        26a7ac:	e3300002 	teq	r0, #2	; 0x2
        26a7b0:	0a000001 	beq	26a7bc <TView::Clipper( const(void))+0x54>
        26a7b4:	eb60d609 	bl	1a9ffe0 <$RefToAddress(long)>
        26a7b8:	e1a05000 	mov	r5, r0
        26a7bc:	e1a00004 	mov	r0, r4
        26a7c0:	eb65627d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a7c4:	e1a00005 	mov	r0, r5
        26a7c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        26a7cc:	00684f40 	rsbeq	r4, r8, r0, asr #30
    */
}

/**
 * Symbol: TView::HasVisRgn( const(void))
 * Address: 0026a7d0
 */
TView::HasVisRgn( const(void)) {
    /*
        26a7d0:	e590201c 	ldr	r2, [r0, #28]	; fField28
        26a7d4:	e59f1020 	ldr	r1, [pc, #20]	; 26a7fc <TView::HasVisRgn( const(void))+0x2c>	; fField20
        26a7d8:	e5911000 	ldr	r1, [r1]
        26a7dc:	e1320001 	teq	r2, r1
        26a7e0:	1a000002 	bne	26a7f0 <TView::HasVisRgn( const(void))+0x20>
        26a7e4:	e1300001 	teq	r0, r1
        26a7e8:	13a00001 	movne	r0, #1	; 0x1
        26a7ec:	1a000000 	bne	26a7f4 <TView::HasVisRgn( const(void))+0x24>
        26a7f0:	e3a00000 	mov	r0, #0	; 0x0
        26a7f4:	e20000ff 	and	r0, r0, #255	; 0xff
        26a7f8:	e1a0f00e 	mov	pc, lr
        26a7fc:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TView::GetRangeText(long, long)
 * Address: 0026a800
 */
TView::GetRangeText(long, long) {
    /*
        26a800:	e3a00002 	mov	r0, #2	; 0x2
        26a804:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TView::GetValue(RefVar const &, RefVar const &)
 * Address: 0026a808
 */
TView::GetValue(RefVar const &, RefVar const &) {
    /*
        26a808:	e1a0c00d 	mov	ip, sp
        26a80c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26a810:	e24cb004 	sub	fp, ip, #4	; 0x4
        26a814:	e1a06000 	mov	r6, r0
        26a818:	e1a05001 	mov	r5, r1
        26a81c:	e1a04002 	mov	r4, r2
        26a820:	e59f010c 	ldr	r0, [pc, #10c]	; 26a934 <TView::GetValue(RefVar const &, RefVar const &)+0x12c>
        26a824:	e5900000 	ldr	r0, [r0]
        26a828:	e5901000 	ldr	r1, [r0]
        26a82c:	e5950000 	ldr	r0, [r5]
        26a830:	e5900000 	ldr	r0, [r0]
        26a834:	eb65667d 	bl	1bc4230 <$EQRef__FlT1>
        26a838:	e3a07002 	mov	r7, #2	; 0x2
        26a83c:	e3300000 	teq	r0, #0	; 0x0
        26a840:	0a000008 	beq	26a868 <TView::GetValue(RefVar const &, RefVar const &)+0x60>
        26a844:	e59f00ec 	ldr	r0, [pc, #ec]	; 26a938 <TView::GetValue(RefVar const &, RefVar const &)+0x130>
        26a848:	e5900000 	ldr	r0, [r0]
        26a84c:	e5901000 	ldr	r1, [r0]
        26a850:	e5940000 	ldr	r0, [r4]
        26a854:	e5900000 	ldr	r0, [r0]
        26a858:	eb656674 	bl	1bc4230 <$EQRef__FlT1>
        26a85c:	e3300000 	teq	r0, #0	; 0x0
        26a860:	11a00007 	movne	r0, r7
        26a864:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        26a868:	e24dd004 	sub	sp, sp, #4	; 0x4
        26a86c:	e3a00002 	mov	r0, #2	; 0x2
        26a870:	eb655e35 	bl	1bc214c <$AllocateRefHandle(long)>
        26a874:	e58d0000 	str	r0, [sp]
        26a878:	e59f00bc 	ldr	r0, [pc, #bc]	; 26a93c <TView::GetValue(RefVar const &, RefVar const &)+0x134>
        26a87c:	e5900000 	ldr	r0, [r0]
        26a880:	e5901000 	ldr	r1, [r0]
        26a884:	e5950000 	ldr	r0, [r5]
        26a888:	e5900000 	ldr	r0, [r0]
        26a88c:	eb656667 	bl	1bc4230 <$EQRef__FlT1>
        26a890:	e3300000 	teq	r0, #0	; 0x0
        26a894:	0a000004 	beq	26a8ac <TView::GetValue(RefVar const &, RefVar const &)+0xa4>
        26a898:	e5960008 	ldr	r0, [r6, #8]	; fField8
        26a89c:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
        26a8a0:	e1a00100 	mov	r0, r0, lsl #2
        26a8a4:	e59d1000 	ldr	r1, [sp]
        26a8a8:	e5810000 	str	r0, [r1]
        26a8ac:	e59d0000 	ldr	r0, [sp]
        26a8b0:	e5900000 	ldr	r0, [r0]
        26a8b4:	e3300002 	teq	r0, #2	; 0x2
        26a8b8:	1a000004 	bne	26a8d0 <TView::GetValue(RefVar const &, RefVar const &)+0xc8>
        26a8bc:	e1a01005 	mov	r1, r5
        26a8c0:	e1a00006 	mov	r0, r6
        26a8c4:	eb657f23 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        26a8c8:	e59d1000 	ldr	r1, [sp]
        26a8cc:	e5810000 	str	r0, [r1]
        26a8d0:	e5940000 	ldr	r0, [r4]
        26a8d4:	e5900000 	ldr	r0, [r0]
        26a8d8:	e3300002 	teq	r0, #2	; 0x2
        26a8dc:	0a00003d 	beq	26a9d8 <TView::GetValue(RefVar const &, RefVar const &)+0x1d0>
        26a8e0:	e1a0000d 	mov	r0, sp
        26a8e4:	eb655e1f 	bl	1bc2168 <$ClassOf(RefVar const &)>
        26a8e8:	eb655e17 	bl	1bc214c <$AllocateRefHandle(long)>
        26a8ec:	e1a05000 	mov	r5, r0
        26a8f0:	e5940000 	ldr	r0, [r4]
        26a8f4:	e5901000 	ldr	r1, [r0]
        26a8f8:	e5950000 	ldr	r0, [r5]
        26a8fc:	eb656a67 	bl	1bc52a0 <$IsSubclassRef__FlT1>
        26a900:	e3300000 	teq	r0, #0	; 0x0
        26a904:	1a000031 	bne	26a9d0 <TView::GetValue(RefVar const &, RefVar const &)+0x1c8>
        26a908:	e59f0030 	ldr	r0, [pc, #30]	; 26a940 <TView::GetValue(RefVar const &, RefVar const &)+0x138>
        26a90c:	e5900000 	ldr	r0, [r0]
        26a910:	e5901000 	ldr	r1, [r0]
        26a914:	e5940000 	ldr	r0, [r4]
        26a918:	e5900000 	ldr	r0, [r0]
        26a91c:	eb656643 	bl	1bc4230 <$EQRef__FlT1>
        26a920:	e3300000 	teq	r0, #0	; 0x0
        26a924:	0a000006 	beq	26a944 <TView::GetValue(RefVar const &, RefVar const &)+0x13c>
        26a928:	e1a0000d 	mov	r0, sp
        26a92c:	eb60e223 	bl	1aa31c0 <$SPrintObject(RefVar const &)>
        26a930:	ea00001f 	b	26a9b4 <TView::GetValue(RefVar const &, RefVar const &)+0x1ac>
        26a934:	00683110 	rsbeq	r3, r8, r0, lsl r1
        26a938:	00683b30 	rsbeq	r3, r8, r0, lsr fp
        26a93c:	00684fc0 	rsbeq	r4, r8, r0, asr #31
        26a940:	006848d0 	ldreqd	r4, [r8], -#128
        26a944:	e59f0074 	ldr	r0, [pc, #74]	; 26a9c0 <TView::GetValue(RefVar const &, RefVar const &)+0x1b8>
        26a948:	e5900000 	ldr	r0, [r0]
        26a94c:	e5901000 	ldr	r1, [r0]
        26a950:	e5940000 	ldr	r0, [r4]
        26a954:	e5900000 	ldr	r0, [r0]
        26a958:	eb656634 	bl	1bc4230 <$EQRef__FlT1>
        26a95c:	e3300000 	teq	r0, #0	; 0x0
        26a960:	0a00001a 	beq	26a9d0 <TView::GetValue(RefVar const &, RefVar const &)+0x1c8>
        26a964:	e59f0058 	ldr	r0, [pc, #58]	; 26a9c4 <TView::GetValue(RefVar const &, RefVar const &)+0x1bc>
        26a968:	e5900000 	ldr	r0, [r0]
        26a96c:	e5901000 	ldr	r1, [r0]
        26a970:	e5950000 	ldr	r0, [r5]
        26a974:	eb65662d 	bl	1bc4230 <$EQRef__FlT1>
        26a978:	e3300000 	teq	r0, #0	; 0x0
        26a97c:	1a000013 	bne	26a9d0 <TView::GetValue(RefVar const &, RefVar const &)+0x1c8>
        26a980:	e59f0040 	ldr	r0, [pc, #40]	; 26a9c8 <TView::GetValue(RefVar const &, RefVar const &)+0x1c0>	; fField40
        26a984:	e5900000 	ldr	r0, [r0]
        26a988:	e5901000 	ldr	r1, [r0]
        26a98c:	e5950000 	ldr	r0, [r5]
        26a990:	eb656626 	bl	1bc4230 <$EQRef__FlT1>
        26a994:	e3300000 	teq	r0, #0	; 0x0
        26a998:	e59d0000 	ldr	r0, [sp]
        26a99c:	0a00000a 	beq	26a9cc <TView::GetValue(RefVar const &, RefVar const &)+0x1c4>
        26a9a0:	e5900000 	ldr	r0, [r0]
        26a9a4:	e3300002 	teq	r0, #2	; 0x2
        26a9a8:	13a00001 	movne	r0, #1	; 0x1
        26a9ac:	03a00000 	moveq	r0, #0	; 0x0
        26a9b0:	e1a00100 	mov	r0, r0, lsl #2
        26a9b4:	e59d1000 	ldr	r1, [sp]
        26a9b8:	e5810000 	str	r0, [r1]
        26a9bc:	ea000003 	b	26a9d0 <TView::GetValue(RefVar const &, RefVar const &)+0x1c8>
        26a9c0:	006832b8 	streqh	r3, [r8], -#40	; fField40
        26a9c4:	00682390 	streqb	r2, [r8], -#48
        26a9c8:	00682180 	rsbeq	r2, r8, r0, lsl #3
        26a9cc:	e5807000 	str	r7, [r0]
        26a9d0:	e1a00005 	mov	r0, r5
        26a9d4:	eb6561f8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a9d8:	e59d0000 	ldr	r0, [sp]
        26a9dc:	e5904000 	ldr	r4, [r0]
        26a9e0:	eb6561f5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26a9e4:	e1a00004 	mov	r0, r4
        26a9e8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TView::SetValue(RefVar const &, RefVar const &)
 * Address: 0026a9ec
 */
TView::SetValue(RefVar const &, RefVar const &) {
    /*
        26a9ec:	e1a0c00d 	mov	ip, sp
        26a9f0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26a9f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        26a9f8:	e1a05000 	mov	r5, r0
        26a9fc:	e1a04001 	mov	r4, r1
        26aa00:	e1a06002 	mov	r6, r2
        26aa04:	e59f004c 	ldr	r0, [pc, #4c]	; 26aa58 <TView::SetValue(RefVar const &, RefVar const &)+0x6c>	; fField4
        26aa08:	e5900000 	ldr	r0, [r0]
        26aa0c:	e5901000 	ldr	r1, [r0]
        26aa10:	e5940000 	ldr	r0, [r4]
        26aa14:	e5900000 	ldr	r0, [r0]
        26aa18:	eb656604 	bl	1bc4230 <$EQRef__FlT1>
        26aa1c:	e59f7038 	ldr	r7, [pc, #38]	; 26aa5c <TView::SetValue(RefVar const &, RefVar const &)+0x70>
        26aa20:	e3300000 	teq	r0, #0	; 0x0
        26aa24:	0a00000d 	beq	26aa60 <TView::SetValue(RefVar const &, RefVar const &)+0x74>
        26aa28:	e5960000 	ldr	r0, [r6]
        26aa2c:	e5900000 	ldr	r0, [r0]
        26aa30:	e3100003 	tst	r0, #3	; 0x3
        26aa34:	01a00140 	moveq	r0, r0, asr #2
        26aa38:	0a000000 	beq	26aa40 <TView::SetValue(RefVar const &, RefVar const &)+0x54>
        26aa3c:	eb655db6 	bl	1bc211c <$_RINTError(long)>
        26aa40:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
        26aa44:	e5951008 	ldr	r1, [r5, #8]	; fField8
        26aa48:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
        26aa4c:	e1800001 	orr	r0, r0, r1
        26aa50:	e5850008 	str	r0, [r5, #8]	; fField8
        26aa54:	ea000011 	b	26aaa0 <TView::SetValue(RefVar const &, RefVar const &)+0xb4>
        26aa58:	00684fc0 	rsbeq	r4, r8, r0, asr #31
        26aa5c:	00684fd0 	ldreqd	r4, [r8], -#240
        26aa60:	e59f0040 	ldr	r0, [pc, #40]	; 26aaa8 <TView::SetValue(RefVar const &, RefVar const &)+0xbc>	; fField40
        26aa64:	e5900000 	ldr	r0, [r0]
        26aa68:	e5901000 	ldr	r1, [r0]
        26aa6c:	e5940000 	ldr	r0, [r4]
        26aa70:	e5900000 	ldr	r0, [r0]
        26aa74:	eb6565ed 	bl	1bc4230 <$EQRef__FlT1>
        26aa78:	e3300000 	teq	r0, #0	; 0x0
        26aa7c:	1a000007 	bne	26aaa0 <TView::SetValue(RefVar const &, RefVar const &)+0xb4>
        26aa80:	e59f0024 	ldr	r0, [pc, #24]	; 26aaac <TView::SetValue(RefVar const &, RefVar const &)+0xc0>	; fField24
        26aa84:	e5900000 	ldr	r0, [r0]
        26aa88:	e5901000 	ldr	r1, [r0]
        26aa8c:	e5940000 	ldr	r0, [r4]
        26aa90:	e5900000 	ldr	r0, [r0]
        26aa94:	eb6565e5 	bl	1bc4230 <$EQRef__FlT1>
        26aa98:	e3300000 	teq	r0, #0	; 0x0
        26aa9c:	0a000003 	beq	26aab0 <TView::SetValue(RefVar const &, RefVar const &)+0xc4>
        26aaa0:	eb60d120 	bl	1a9ef28 <$PurgeAreaCache(void)>
        26aaa4:	ea00000f 	b	26aae8 <TView::SetValue(RefVar const &, RefVar const &)+0xfc>
        26aaa8:	00684138 	rsbeq	r4, r8, r8, lsr r1
        26aaac:	00682960 	rsbeq	r2, r8, r0, ror #18
        26aab0:	e5970000 	ldr	r0, [r7]
        26aab4:	e5901000 	ldr	r1, [r0]
        26aab8:	e5940000 	ldr	r0, [r4]
        26aabc:	e5900000 	ldr	r0, [r0]
        26aac0:	eb6565da 	bl	1bc4230 <$EQRef__FlT1>
        26aac4:	e3300000 	teq	r0, #0	; 0x0
        26aac8:	0a000006 	beq	26aae8 <TView::SetValue(RefVar const &, RefVar const &)+0xfc>
        26aacc:	e5960000 	ldr	r0, [r6]
        26aad0:	e5900000 	ldr	r0, [r0]
        26aad4:	e3100003 	tst	r0, #3	; 0x3
        26aad8:	01a00140 	moveq	r0, r0, asr #2
        26aadc:	0a000000 	beq	26aae4 <TView::SetValue(RefVar const &, RefVar const &)+0xf8>
        26aae0:	eb655d8d 	bl	1bc211c <$_RINTError(long)>
        26aae4:	e585000c 	str	r0, [r5, #12]	; fField12
        26aae8:	e1a02006 	mov	r2, r6
        26aaec:	e1a01004 	mov	r1, r4
        26aaf0:	e1a00005 	mov	r0, r5
        26aaf4:	eb61c8c8 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        26aaf8:	e59f00a4 	ldr	r0, [pc, #a4]	; 26aba4 <TView::SetValue(RefVar const &, RefVar const &)+0x1b8>
        26aafc:	e5900000 	ldr	r0, [r0]
        26ab00:	e5901000 	ldr	r1, [r0]
        26ab04:	e5940000 	ldr	r0, [r4]
        26ab08:	e5900000 	ldr	r0, [r0]
        26ab0c:	eb6565c7 	bl	1bc4230 <$EQRef__FlT1>
        26ab10:	e3300000 	teq	r0, #0	; 0x0
        26ab14:	1a00001b 	bne	26ab88 <TView::SetValue(RefVar const &, RefVar const &)+0x19c>
        26ab18:	e5970000 	ldr	r0, [r7]
        26ab1c:	e5901000 	ldr	r1, [r0]
        26ab20:	e5940000 	ldr	r0, [r4]
        26ab24:	e5900000 	ldr	r0, [r0]
        26ab28:	eb6565c0 	bl	1bc4230 <$EQRef__FlT1>
        26ab2c:	e3300000 	teq	r0, #0	; 0x0
        26ab30:	1a000014 	bne	26ab88 <TView::SetValue(RefVar const &, RefVar const &)+0x19c>
        26ab34:	e59f006c 	ldr	r0, [pc, #6c]	; 26aba8 <TView::SetValue(RefVar const &, RefVar const &)+0x1bc>
        26ab38:	e5900000 	ldr	r0, [r0]
        26ab3c:	e5901000 	ldr	r1, [r0]
        26ab40:	e5940000 	ldr	r0, [r4]
        26ab44:	e5900000 	ldr	r0, [r0]
        26ab48:	eb6565b8 	bl	1bc4230 <$EQRef__FlT1>
        26ab4c:	e3300000 	teq	r0, #0	; 0x0
        26ab50:	0a000004 	beq	26ab68 <TView::SetValue(RefVar const &, RefVar const &)+0x17c>
        26ab54:	e1a00005 	mov	r0, r5
        26ab58:	e3a01009 	mov	r1, #9	; 0x9
        26ab5c:	eb61f213 	bl	1ae73b0 <TView::$InvalidateSlotCache(long)>
        26ab60:	e3300000 	teq	r0, #0	; 0x0
        26ab64:	1a000007 	bne	26ab88 <TView::SetValue(RefVar const &, RefVar const &)+0x19c>
        26ab68:	e59f003c 	ldr	r0, [pc, #3c]	; 26abac <TView::SetValue(RefVar const &, RefVar const &)+0x1c0>
        26ab6c:	e5900000 	ldr	r0, [r0]
        26ab70:	e5901000 	ldr	r1, [r0]
        26ab74:	e5940000 	ldr	r0, [r4]
        26ab78:	e5900000 	ldr	r0, [r0]
        26ab7c:	eb6565ab 	bl	1bc4230 <$EQRef__FlT1>
        26ab80:	e3300000 	teq	r0, #0	; 0x0
        26ab84:	0a000001 	beq	26ab90 <TView::SetValue(RefVar const &, RefVar const &)+0x1a4>
        26ab88:	e1a00005 	mov	r0, r5
        26ab8c:	eb6586a5 	bl	1bcc628 <TView::$Sync(void)>
        26ab90:	e1a01004 	mov	r1, r4
        26ab94:	e1a00005 	mov	r0, r5
        26ab98:	e5952000 	ldr	r2, [r5]
        26ab9c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        26aba0:	e282f04c 	add	pc, r2, #76	; 0x4c
        26aba4:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        26aba8:	00685048 	rsbeq	r5, r8, r8, asr #32
        26abac:	00684fc8 	rsbeq	r4, r8, r8, asr #31
    */
}

/**
 * Symbol: TView::ClearFlags(unsigned long)
 * Address: 0026abb0
 */
TView::ClearFlags(unsigned long) {
    /*
        26abb0:	e1a0c00d 	mov	ip, sp
        26abb4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26abb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        26abbc:	e1a04000 	mov	r4, r0
        26abc0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        26abc4:	e1e05001 	mvn	r5, r1
        26abc8:	e0000005 	and	r0, r0, r5
        26abcc:	e5840008 	str	r0, [r4, #8]	; fField8
        26abd0:	e3c104fd 	bic	r0, r1, #-50331648	; 0xfd000000
        26abd4:	e3c008ff 	bic	r0, r0, #16711680	; 0xff0000
        26abd8:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        26abdc:	e3d000fe 	bics	r0, r0, #254	; 0xfe
        26abe0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        26abe4:	e24dd004 	sub	sp, sp, #4	; 0x4
        26abe8:	e1a00004 	mov	r0, r4
        26abec:	e3a0100a 	mov	r1, #10	; 0xa
        26abf0:	eb657e50 	bl	1bca538 <TView::$GetCacheProto(long)>
        26abf4:	e3100003 	tst	r0, #3	; 0x3
        26abf8:	01a00140 	moveq	r0, r0, asr #2
        26abfc:	0a000000 	beq	26ac04 <TView::ClearFlags(unsigned long)+0x54>
        26ac00:	eb655d45 	bl	1bc211c <$_RINTError(long)>
        26ac04:	e0000005 	and	r0, r0, r5
        26ac08:	e1a00100 	mov	r0, r0, lsl #2
        26ac0c:	eb655d4e 	bl	1bc214c <$AllocateRefHandle(long)>
        26ac10:	e58d0000 	str	r0, [sp]
        26ac14:	e1a0200d 	mov	r2, sp
        26ac18:	e59f1010 	ldr	r1, [pc, #10]	; 26ac30 <TView::ClearFlags(unsigned long)+0x80>
        26ac1c:	e1a00004 	mov	r0, r4
        26ac20:	eb61c87d 	bl	1adce1c <TView::$SetContextSlot(RefVar const &, RefVar const &)>
        26ac24:	e59d0000 	ldr	r0, [sp]
        26ac28:	eb656163 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26ac2c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        26ac30:	00684fc0 	rsbeq	r4, r8, r0, asr #31
    */
}

/**
 * Symbol: TView::Changed(RefVar const &)
 * Address: 0026ac34
 */
TView::Changed(RefVar const &) {
    /*
        26ac34:	e2802024 	add	r2, r0, #36	; 0x24
        26ac38:	e5903000 	ldr	r3, [r0]
        26ac3c:	e283f050 	add	pc, r3, #80	; 0x50
    */
}

/**
 * Symbol: TView::Changed(RefVar const &, RefVar const &)
 * Address: 0026ac40
 */
TView::Changed(RefVar const &, RefVar const &) {
    /*
        26ac40:	e1a0c00d 	mov	ip, sp
        26ac44:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        26ac48:	e24cb004 	sub	fp, ip, #4	; 0x4
        26ac4c:	e1a04000 	mov	r4, r0
        26ac50:	e1a05001 	mov	r5, r1
        26ac54:	e1a07002 	mov	r7, r2
        26ac58:	e2800024 	add	r0, r0, #36	; 0x24
        26ac5c:	e1a06000 	mov	r6, r0
        26ac60:	e59f81b4 	ldr	r8, [pc, #1b4]	; 26ae1c <TView::Changed(RefVar const &, RefVar const &)+0x1dc>
        26ac64:	e5981000 	ldr	r1, [r8]
        26ac68:	e5911000 	ldr	r1, [r1]
        26ac6c:	e5900000 	ldr	r0, [r0]
        26ac70:	e5900000 	ldr	r0, [r0]
        26ac74:	eb656573 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        26ac78:	e3300000 	teq	r0, #0	; 0x0
        26ac7c:	0a00003a 	beq	26ad6c <TView::Changed(RefVar const &, RefVar const &)+0x12c>
        26ac80:	e24dd004 	sub	sp, sp, #4	; 0x4
        26ac84:	e5981000 	ldr	r1, [r8]
        26ac88:	e5911000 	ldr	r1, [r1]
        26ac8c:	e5960000 	ldr	r0, [r6]
        26ac90:	e5900000 	ldr	r0, [r0]
        26ac94:	eb656571 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        26ac98:	eb655d2b 	bl	1bc214c <$AllocateRefHandle(long)>
        26ac9c:	e1a09000 	mov	r9, r0
        26aca0:	e5900000 	ldr	r0, [r0]
        26aca4:	eb656980 	bl	1bc52ac <$Length(long)>
        26aca8:	e1a0a000 	mov	sl, r0
        26acac:	e3a00002 	mov	r0, #2	; 0x2
        26acb0:	eb60c439 	bl	1a9bd9c <$MakeArray(long)>
        26acb4:	eb655d24 	bl	1bc214c <$AllocateRefHandle(long)>
        26acb8:	e58d0000 	str	r0, [sp]
        26acbc:	e5960000 	ldr	r0, [r6]
        26acc0:	e3a01000 	mov	r1, #0	; 0x0
        26acc4:	e5902000 	ldr	r2, [r0]
        26acc8:	e59d0000 	ldr	r0, [sp]
        26accc:	e5900000 	ldr	r0, [r0]
        26acd0:	eb656da0 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        26acd4:	e5950000 	ldr	r0, [r5]
        26acd8:	e3a01001 	mov	r1, #1	; 0x1
        26acdc:	e5902000 	ldr	r2, [r0]
        26ace0:	e59d0000 	ldr	r0, [sp]
        26ace4:	e5900000 	ldr	r0, [r0]
        26ace8:	eb656d9a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        26acec:	e3a08000 	mov	r8, #0	; 0x0
        26acf0:	e35a0000 	cmp	sl, #0	; 0x0
        26acf4:	da000017 	ble	26ad58 <TView::Changed(RefVar const &, RefVar const &)+0x118>
        26acf8:	e24dd008 	sub	sp, sp, #8	; 0x8
        26acfc:	e2881001 	add	r1, r8, #1	; 0x1
        26ad00:	e5990000 	ldr	r0, [r9]
        26ad04:	eb656552 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        26ad08:	eb655d0f 	bl	1bc214c <$AllocateRefHandle(long)>
        26ad0c:	e58d0000 	str	r0, [sp]
        26ad10:	e1a0600d 	mov	r6, sp
        26ad14:	e1a01008 	mov	r1, r8
        26ad18:	e5990000 	ldr	r0, [r9]
        26ad1c:	eb65654c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        26ad20:	eb655d09 	bl	1bc214c <$AllocateRefHandle(long)>
        26ad24:	e58d0004 	str	r0, [sp, #4]	; fField4
        26ad28:	e28d0004 	add	r0, sp, #4	; 0x4
        26ad2c:	e28d2008 	add	r2, sp, #8	; 0x8
        26ad30:	e1a01006 	mov	r1, r6
        26ad34:	eb656126 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        26ad38:	e59d0000 	ldr	r0, [sp]
        26ad3c:	eb65611e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26ad40:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        26ad44:	eb65611c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26ad48:	e28dd008 	add	sp, sp, #8	; 0x8
        26ad4c:	e2888002 	add	r8, r8, #2	; 0x2
        26ad50:	e158000a 	cmp	r8, sl
        26ad54:	baffffe7 	blt	26acf8 <TView::Changed(RefVar const &, RefVar const &)+0xb8>
        26ad58:	e59d0000 	ldr	r0, [sp]
        26ad5c:	eb656116 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26ad60:	e1a00009 	mov	r0, r9
        26ad64:	eb656114 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26ad68:	e28dd004 	add	sp, sp, #4	; 0x4
        26ad6c:	e24dd004 	sub	sp, sp, #4	; 0x4
        26ad70:	e3a00002 	mov	r0, #2	; 0x2
        26ad74:	eb60c408 	bl	1a9bd9c <$MakeArray(long)>
        26ad78:	eb655cf3 	bl	1bc214c <$AllocateRefHandle(long)>
        26ad7c:	e58d0000 	str	r0, [sp]
        26ad80:	e5950000 	ldr	r0, [r5]
        26ad84:	e5902000 	ldr	r2, [r0]
        26ad88:	e59d0000 	ldr	r0, [sp]
        26ad8c:	e5900000 	ldr	r0, [r0]
        26ad90:	e3a01000 	mov	r1, #0	; 0x0
        26ad94:	eb656d6f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        26ad98:	e5970000 	ldr	r0, [r7]
        26ad9c:	e5902000 	ldr	r2, [r0]
        26ada0:	e59d0000 	ldr	r0, [sp]
        26ada4:	e5900000 	ldr	r0, [r0]
        26ada8:	e3a01001 	mov	r1, #1	; 0x1
        26adac:	eb656d69 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        26adb0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        26adb4:	e2100302 	ands	r0, r0, #134217728	; 0x8000000
        26adb8:	13a00001 	movne	r0, #1	; 0x1
        26adbc:	e20050ff 	and	r5, r0, #255	; 0xff
        26adc0:	e1a00004 	mov	r0, r4
        26adc4:	e3a01302 	mov	r1, #134217728	; 0x8000000
        26adc8:	eb6579bf 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        26adcc:	e3a03000 	mov	r3, #0	; 0x0
        26add0:	e92d0008 	stmdb	sp!, {r3}
        26add4:	e28d2004 	add	r2, sp, #4	; 0x4
        26add8:	e1a00004 	mov	r0, r4
        26addc:	e3a03001 	mov	r3, #1	; 0x1
        26ade0:	e3a0101d 	mov	r1, #29	; 0x1d
        26ade4:	eb6581fc 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
        26ade8:	e28dd004 	add	sp, sp, #4	; 0x4
        26adec:	e3350000 	teq	r5, #0	; 0x0
        26adf0:	11a00004 	movne	r0, r4
        26adf4:	13a01302 	movne	r1, #134217728	; 0x8000000
        26adf8:	1b6581ff 	blne	1bcb5fc <TView::$SetFlags(unsigned long)>
        26adfc:	e1a00004 	mov	r0, r4
        26ae00:	e3a01000 	mov	r1, #0	; 0x0
        26ae04:	e5942000 	ldr	r2, [r4]
        26ae08:	e1a0e00f 	mov	lr, pc
        26ae0c:	e282f054 	add	pc, r2, #84	; 0x54
        26ae10:	e59d0000 	ldr	r0, [sp]
        26ae14:	eb6560e8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26ae18:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        26ae1c:	006850f0 	streqd	r5, [r8]
    */
}

/**
 * Symbol: TView::Dirty(TRect const *)
 * Address: 0026ae20
 */
TView::Dirty(TRect const *) {
    /*
        26ae20:	e1a0c00d 	mov	ip, sp
        26ae24:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26ae28:	e24cb004 	sub	fp, ip, #4	; 0x4
        26ae2c:	e1a06000 	mov	r6, r0
        26ae30:	e1a04001 	mov	r4, r1
        26ae34:	eb658602 	bl	1bcc644 <TView::$VisibleDeep( const(void))>
        26ae38:	e3300000 	teq	r0, #0	; 0x0
        26ae3c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        26ae40:	e24dd008 	sub	sp, sp, #8	; 0x8
        26ae44:	e1a0100d 	mov	r1, sp
        26ae48:	e1a00006 	mov	r0, r6
        26ae4c:	e5962000 	ldr	r2, [r6]
        26ae50:	e1a0e00f 	mov	lr, pc
        26ae54:	e282f024 	add	pc, r2, #36	; 0x24
        26ae58:	e3340000 	teq	r4, #0	; 0x0
        26ae5c:	0a000003 	beq	26ae70 <TView::Dirty(TRect const *)+0x50>
        26ae60:	e1a0200d 	mov	r2, sp
        26ae64:	e1a0100d 	mov	r1, sp
        26ae68:	e1a00004 	mov	r0, r4
        26ae6c:	eb63a2d6 	bl	1b539cc <$SectRect__FP4RectN21>
        26ae70:	e1a0000d 	mov	r0, sp
        26ae74:	eb638e27 	bl	1b4e718 <$EmptyRect(Rect *)>
        26ae78:	e3300000 	teq	r0, #0	; 0x0
        26ae7c:	1a000016 	bne	26aedc <TView::Dirty(TRect const *)+0xbc>
        26ae80:	e3a07000 	mov	r7, #0	; 0x0
        26ae84:	e1a00006 	mov	r0, r6
        26ae88:	eb657db8 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        26ae8c:	e3300000 	teq	r0, #0	; 0x0
        26ae90:	1a000016 	bne	26aef0 <TView::Dirty(TRect const *)+0xd0>
        26ae94:	ea000001 	b	26aea0 <TView::Dirty(TRect const *)+0x80>
        26ae98:	e3370000 	teq	r7, #0	; 0x0
        26ae9c:	1a000002 	bne	26aeac <TView::Dirty(TRect const *)+0x8c>
        26aea0:	e596000c 	ldr	r0, [r6, #12]	; fField12
        26aea4:	e310000f 	tst	r0, #15	; 0xf
        26aea8:	11a07006 	movne	r7, r6
        26aeac:	e596601c 	ldr	r6, [r6, #28]	; fField28
        26aeb0:	e5960008 	ldr	r0, [r6, #8]	; fField8
        26aeb4:	e3100020 	tst	r0, #32	; 0x20
        26aeb8:	0a000003 	beq	26aecc <TView::Dirty(TRect const *)+0xac>
        26aebc:	e2860010 	add	r0, r6, #16	; 0x10
        26aec0:	e1a0200d 	mov	r2, sp
        26aec4:	e1a0100d 	mov	r1, sp
        26aec8:	eb63a2bf 	bl	1b539cc <$SectRect__FP4RectN21>
        26aecc:	e1a0000d 	mov	r0, sp
        26aed0:	eb638e10 	bl	1b4e718 <$EmptyRect(Rect *)>
        26aed4:	e3300000 	teq	r0, #0	; 0x0
        26aed8:	0a000000 	beq	26aee0 <TView::Dirty(TRect const *)+0xc0>
        26aedc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        26aee0:	e1a00006 	mov	r0, r6
        26aee4:	eb657da1 	bl	1bca570 <TView::$HasVisRgn( const(void))>
        26aee8:	e3300000 	teq	r0, #0	; 0x0
        26aeec:	0affffe9 	beq	26ae98 <TView::Dirty(TRect const *)+0x78>
        26aef0:	e1a00006 	mov	r0, r6
        26aef4:	eb657976 	bl	1bc94d4 <TView::$Clipper( const(void))>
        26aef8:	e1a04000 	mov	r4, r0
        26aefc:	e24dd024 	sub	sp, sp, #36	; 0x24
        26af00:	e28d0010 	add	r0, sp, #16	; 0x10
        26af04:	eb607135 	bl	1a873e0 <TRegionVar::$__ct(void)>
        26af08:	e59d5010 	ldr	r5, [sp, #16]	; fField16
        26af0c:	e5944004 	ldr	r4, [r4, #4]	; fField4
        26af10:	e28d1024 	add	r1, sp, #36	; 0x24
        26af14:	e1a0000d 	mov	r0, sp
        26af18:	eb60753c 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        26af1c:	e1a0000d 	mov	r0, sp
        26af20:	e1a01004 	mov	r1, r4
        26af24:	e1a02005 	mov	r2, r5
        26af28:	eb63a2a8 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        26af2c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        26af30:	eb638df9 	bl	1b4e71c <$EmptyRgn(Region **)>
        26af34:	e3300000 	teq	r0, #0	; 0x0
        26af38:	1a000006 	bne	26af58 <TView::Dirty(TRect const *)+0x138>
        26af3c:	e3370000 	teq	r7, #0	; 0x0
        26af40:	01a02006 	moveq	r2, r6
        26af44:	11a02007 	movne	r2, r7
        26af48:	e59f001c 	ldr	r0, [pc, #1c]	; 26af6c <TView::Dirty(TRect const *)+0x14c>
        26af4c:	e5900000 	ldr	r0, [r0]
        26af50:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        26af54:	eb60bf76 	bl	1a9ad34 <TRootView::$Invalidate(TBaseRegion const, TView *)>
        26af58:	e28d0010 	add	r0, sp, #16	; 0x10
        26af5c:	e3a01000 	mov	r1, #0	; 0x0
        26af60:	eb607537 	bl	1a88444 <TRegionVar::$__dt(void)>
        26af64:	e28dd024 	add	sp, sp, #36	; 0x24
        26af68:	eaffffdb 	b	26aedc <TView::Dirty(TRect const *)+0xbc>
        26af6c:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TView::DataFrame(void)
 * Address: 0026af70
 */
TView::DataFrame(void) {
    /*
        26af70:	e1a0c00d 	mov	ip, sp
        26af74:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26af78:	e24cb004 	sub	fp, ip, #4	; 0x4
        26af7c:	e1a04000 	mov	r4, r0
        26af80:	e3a01003 	mov	r1, #3	; 0x3
        26af84:	eb657d6b 	bl	1bca538 <TView::$GetCacheProto(long)>
        26af88:	eb655c6f 	bl	1bc214c <$AllocateRefHandle(long)>
        26af8c:	e5901000 	ldr	r1, [r0]
        26af90:	e3310002 	teq	r1, #2	; 0x2
        26af94:	05941024 	ldreq	r1, [r4, #36]	; fField36
        26af98:	05914000 	ldreq	r4, [r1]
        26af9c:	11a04001 	movne	r4, r1
        26afa0:	eb656085 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26afa4:	e1a00004 	mov	r0, r4
        26afa8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TView::GetProto( const(RefVar const &))
 * Address: 0026afac
 */
TView::GetProto( const(RefVar const &)) {
    /*
        26afac:	e2800024 	add	r0, r0, #36	; 0x24
        26afb0:	e3a02000 	mov	r2, #0	; 0x0
        26afb4:	ea6564ab 	b	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
    */
}

/**
 * Symbol: TView::GetVar( const(RefVar const &))
 * Address: 0026afb8
 */
TView::GetVar( const(RefVar const &)) {
    /*
        26afb8:	e2800024 	add	r0, r0, #36	; 0x24
        26afbc:	e3a03000 	mov	r3, #0	; 0x0
        26afc0:	e3a02000 	mov	r2, #0	; 0x0
        26afc4:	ea6564aa 	b	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
    */
}

/**
 * Symbol: TView::GetWriteableProtoVariable(RefVar const &)
 * Address: 0026afc8
 */
TView::GetWriteableProtoVariable(RefVar const &) {
    /*
        26afc8:	e1a0c00d 	mov	ip, sp
        26afcc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26afd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26afd4:	e1a05000 	mov	r5, r0
        26afd8:	e1a04001 	mov	r4, r1
        26afdc:	e24dd004 	sub	sp, sp, #4	; 0x4
        26afe0:	eb657940 	bl	1bc94e8 <TView::$DataFrame(void)>
        26afe4:	eb655c58 	bl	1bc214c <$AllocateRefHandle(long)>
        26afe8:	e1a06000 	mov	r6, r0
        26afec:	e5940000 	ldr	r0, [r4]
        26aff0:	e5901000 	ldr	r1, [r0]
        26aff4:	e5960000 	ldr	r0, [r6]
        26aff8:	eb656498 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        26affc:	eb655c52 	bl	1bc214c <$AllocateRefHandle(long)>
        26b000:	e58d0000 	str	r0, [sp]
        26b004:	e1a00006 	mov	r0, r6
        26b008:	eb65606b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26b00c:	e59d0000 	ldr	r0, [sp]
        26b010:	e5900000 	ldr	r0, [r0]
        26b014:	e3300002 	teq	r0, #2	; 0x2
        26b018:	1a00000e 	bne	26b058 <TView::GetWriteableProtoVariable(RefVar const &)+0x90>
        26b01c:	e1a01004 	mov	r1, r4
        26b020:	e1a00005 	mov	r0, r5
        26b024:	eb657d47 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        26b028:	e59d1000 	ldr	r1, [sp]
        26b02c:	e5810000 	str	r0, [r1]
        26b030:	e3300002 	teq	r0, #2	; 0x2
        26b034:	0a000007 	beq	26b058 <TView::GetWriteableProtoVariable(RefVar const &)+0x90>
        26b038:	e1a0000d 	mov	r0, sp
        26b03c:	eb655c4a 	bl	1bc216c <$Clone(RefVar const &)>
        26b040:	e59d1000 	ldr	r1, [sp]
        26b044:	e1a0200d 	mov	r2, sp
        26b048:	e5810000 	str	r0, [r1]
        26b04c:	e1a01004 	mov	r1, r4
        26b050:	e1a00005 	mov	r0, r5
        26b054:	eb61c771 	bl	1adce20 <TView::$SetDataSlot(RefVar const &, RefVar const &)>
        26b058:	e59d0000 	ldr	r0, [sp]
        26b05c:	e5904000 	ldr	r4, [r0]
        26b060:	eb656055 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26b064:	e1a00004 	mov	r0, r4
        26b068:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TView::GetWriteableVariable(RefVar const &)
 * Address: 0026b06c
 */
TView::GetWriteableVariable(RefVar const &) {
    /*
        26b06c:	e1a0c00d 	mov	ip, sp
        26b070:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26b074:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b078:	e1a04000 	mov	r4, r0
        26b07c:	e1a05001 	mov	r5, r1
        26b080:	e24dd004 	sub	sp, sp, #4	; 0x4
        26b084:	eb657d37 	bl	1bca568 <TView::$GetWriteableProtoVariable(RefVar const &)>
        26b088:	eb655c2f 	bl	1bc214c <$AllocateRefHandle(long)>
        26b08c:	e58d0000 	str	r0, [sp]
        26b090:	e5900000 	ldr	r0, [r0]
        26b094:	e3300002 	teq	r0, #2	; 0x2
        26b098:	1a00000e 	bne	26b0d8 <TView::GetWriteableVariable(RefVar const &)+0x6c>
        26b09c:	e1a01005 	mov	r1, r5
        26b0a0:	e1a00004 	mov	r0, r4
        26b0a4:	eb657d2b 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        26b0a8:	e59d1000 	ldr	r1, [sp]
        26b0ac:	e5810000 	str	r0, [r1]
        26b0b0:	e3300002 	teq	r0, #2	; 0x2
        26b0b4:	0a000007 	beq	26b0d8 <TView::GetWriteableVariable(RefVar const &)+0x6c>
        26b0b8:	e1a0000d 	mov	r0, sp
        26b0bc:	eb655c2a 	bl	1bc216c <$Clone(RefVar const &)>
        26b0c0:	e59d1000 	ldr	r1, [sp]
        26b0c4:	e1a0200d 	mov	r2, sp
        26b0c8:	e5810000 	str	r0, [r1]
        26b0cc:	e1a01005 	mov	r1, r5
        26b0d0:	e1a00004 	mov	r0, r4
        26b0d4:	eb61c751 	bl	1adce20 <TView::$SetDataSlot(RefVar const &, RefVar const &)>
        26b0d8:	e59d0000 	ldr	r0, [sp]
        26b0dc:	e5904000 	ldr	r4, [r0]
        26b0e0:	eb656035 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26b0e4:	e1a00004 	mov	r0, r4
        26b0e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TView::SetContextSlot(RefVar const &, RefVar const &)
 * Address: 0026b0ec
 */
TView::SetContextSlot(RefVar const &, RefVar const &) {
    /*
        26b0ec:	e2800024 	add	r0, r0, #36	; 0x24
        26b0f0:	ea656c9c 	b	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
    */
}

/**
 * Symbol: TView::SetDataSlot(RefVar const &, RefVar const &)
 * Address: 0026b0f4
 */
TView::SetDataSlot(RefVar const &, RefVar const &) {
    /*
        26b0f4:	e1a0c00d 	mov	ip, sp
        26b0f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26b0fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b100:	e1a05001 	mov	r5, r1
        26b104:	e1a04002 	mov	r4, r2
        26b108:	e24dd004 	sub	sp, sp, #4	; 0x4
        26b10c:	eb6578f5 	bl	1bc94e8 <TView::$DataFrame(void)>
        26b110:	eb655c0d 	bl	1bc214c <$AllocateRefHandle(long)>
        26b114:	e58d0000 	str	r0, [sp]
        26b118:	e1a0000d 	mov	r0, sp
        26b11c:	e1a02004 	mov	r2, r4
        26b120:	e1a01005 	mov	r1, r5
        26b124:	eb656c8f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        26b128:	e59d0000 	ldr	r0, [sp]
        26b12c:	eb656022 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        26b130:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

