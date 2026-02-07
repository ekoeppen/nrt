#include "Newton.h"

/**
 * Symbol: QDHideBusyBox(PixelMap *)
 * Address: 00047ad4
 */
QDHideBusyBox(PixelMap *) {
    /*
         47ad4:	e1a0c00d 	mov	ip, sp
         47ad8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         47adc:	e24cb004 	sub	fp, ip, #4	; 0x4
         47ae0:	e1a04000 	mov	r4, r0
         47ae4:	e3a00001 	mov	r0, #1	; 0x1
         47ae8:	eb6c067c 	bl	1b494e0 <$BlockLCDActivity(unsigned char)>
         47aec:	e59f0018 	ldr	r0, [pc, #18]	; 47b0c <QDHideBusyBox(PixelMap *)+0x38>
         47af0:	e2842008 	add	r2, r4, #8	; 0x8
         47af4:	e1a01002 	mov	r1, r2
         47af8:	e3a03000 	mov	r3, #0	; 0x0
         47afc:	eb6c12d4 	bl	1b4c654 <$BlitToScreens__FP8PixelMapP4RectT2l>
         47b00:	e3a00000 	mov	r0, #0	; 0x0
         47b04:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         47b08:	ea6c0674 	b	1b494e0 <$BlockLCDActivity(unsigned char)>
         47b0c:	0c107d8c 	ldceq	13, cr7, [r0], -#560
    */
}

/**
 * Symbol: QDShowBusyBox(PixelMap *)
 * Address: 00047b10
 */
QDShowBusyBox(PixelMap *) {
    /*
         47b10:	e1a0c00d 	mov	ip, sp
         47b14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         47b18:	e24cb004 	sub	fp, ip, #4	; 0x4
         47b1c:	e1a04000 	mov	r4, r0
         47b20:	e59f008c 	ldr	r0, [pc, #8c]	; 47bb4 <QDShowBusyBox(PixelMap *)+0xa4>
         47b24:	e590100e 	ldr	r1, [r0, #14]
         47b28:	e1a01841 	mov	r1, r1, asr #16
         47b2c:	e590000a 	ldr	r0, [r0, #10]
         47b30:	e0410840 	sub	r0, r1, r0, asr #16
         47b34:	e2400020 	sub	r0, r0, #32	; 0x20
         47b38:	e1a010c0 	mov	r1, r0, asr #1
         47b3c:	e3a03020 	mov	r3, #32	; 0x20
         47b40:	e92d0008 	stmdb	sp!, {r3}
         47b44:	e0813003 	add	r3, r1, r3
         47b48:	e2840008 	add	r0, r4, #8	; 0x8
         47b4c:	e1a05000 	mov	r5, r0
         47b50:	e3a02000 	mov	r2, #0	; 0x0
         47b54:	eb6c33ac 	bl	1b54a0c <$SetRect__FP4RectlN32>
         47b58:	e28dd004 	add	sp, sp, #4	; 0x4
         47b5c:	e5940010 	ldr	r0, [r4, #16]
         47b60:	e20000ff 	and	r0, r0, #255	; 0xff
         47b64:	e3300001 	teq	r0, #1	; 0x1
         47b68:	059f0048 	ldreq	r0, [pc, #48]	; 47bb8 <QDShowBusyBox(PixelMap *)+0xa8>
         47b6c:	0a000005 	beq	47b88 <QDShowBusyBox(PixelMap *)+0x78>
         47b70:	e3300002 	teq	r0, #2	; 0x2
         47b74:	059f0040 	ldreq	r0, [pc, #40]	; 47bbc <QDShowBusyBox(PixelMap *)+0xac>
         47b78:	0a000002 	beq	47b88 <QDShowBusyBox(PixelMap *)+0x78>
         47b7c:	e3300004 	teq	r0, #4	; 0x4
         47b80:	1a000001 	bne	47b8c <QDShowBusyBox(PixelMap *)+0x7c>
         47b84:	e59f0034 	ldr	r0, [pc, #34]	; 47bc0 <QDShowBusyBox(PixelMap *)+0xb0>
         47b88:	e5840000 	str	r0, [r4]
         47b8c:	e3a00001 	mov	r0, #1	; 0x1
         47b90:	eb6c0652 	bl	1b494e0 <$BlockLCDActivity(unsigned char)>
         47b94:	e1a02005 	mov	r2, r5
         47b98:	e1a01005 	mov	r1, r5
         47b9c:	e1a00004 	mov	r0, r4
         47ba0:	e3a03000 	mov	r3, #0	; 0x0
         47ba4:	eb6c12aa 	bl	1b4c654 <$BlitToScreens__FP8PixelMapP4RectT2l>
         47ba8:	e3a00000 	mov	r0, #0	; 0x0
         47bac:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         47bb0:	ea6c064a 	b	1b494e0 <$BlockLCDActivity(unsigned char)>
         47bb4:	0c107d8c 	ldceq	13, cr7, [r0], -#560
         47bb8:	0037ab5c 	eoreqs	sl, r7, ip, asr fp
         47bbc:	0037aa5c 	eoreqs	sl, r7, ip, asr sl
         47bc0:	0037a85c 	eoreqs	sl, r7, ip, asr r8
         47bc4:	50434d43 	subpl	r4, r3, r3, asr #26
         47bc8:	4941204d 	stmmidb	r1, {r0, r2, r3, r6, sp}^
         47bcc:	4f44454d 	swimi	0x0044454d
         47bd0:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: QuickEnableInterrupt
 * Address: 000e57bc
 */
void globals::QuickEnableInterrupt() {
    /*
         e57bc:	e1a0c00d 	mov	ip, sp
         e57c0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         e57c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         e57c8:	e1a04000 	mov	r4, r0
         e57cc:	eb0ab4ef 	bl	392b90 <EnterFIQAtomic>
         e57d0:	e5940008 	ldr	r0, [r4, #8]
         e57d4:	e3800080 	orr	r0, r0, #128	; 0x80
         e57d8:	e5840008 	str	r0, [r4, #8]
         e57dc:	e5941000 	ldr	r1, [r4]
         e57e0:	e3310501 	teq	r1, #4194304	; 0x400000
         e57e4:	13310302 	teqne	r1, #134217728	; 0x8000000
         e57e8:	13310301 	teqne	r1, #67108864	; 0x4000000
         e57ec:	1a000001 	bne	e57f8 <QuickEnableInterrupt+0x3c>
         e57f0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         e57f4:	ea0ab4ed 	b	392bb0 <ExitFIQAtomic>
         e57f8:	e3100001 	tst	r0, #1	; 0x1
         e57fc:	13a02000 	movne	r2, #0	; 0x0
         e5800:	13a00961 	movne	r0, #1589248	; 0x184000
         e5804:	1280040f 	addne	r0, r0, #251658240	; 0xf000000
         e5808:	1b6bd554 	blne	1bdad60 <$SetAndClearBitsAtomic>
         e580c:	e5940008 	ldr	r0, [r4, #8]
         e5810:	e3100002 	tst	r0, #2	; 0x2
         e5814:	0a000003 	beq	e5828 <QuickEnableInterrupt+0x6c>
         e5818:	e3a02000 	mov	r2, #0	; 0x0
         e581c:	e5941000 	ldr	r1, [r4]
         e5820:	e59f0034 	ldr	r0, [pc, #34]	; e585c <QuickEnableInterrupt+0xa0>
         e5824:	eb6bd54d 	bl	1bdad60 <$SetAndClearBitsAtomic>
         e5828:	e5940008 	ldr	r0, [r4, #8]
         e582c:	e3100b01 	tst	r0, #1024	; 0x400
         e5830:	0a000003 	beq	e5844 <QuickEnableInterrupt+0x88>
         e5834:	e3a02000 	mov	r2, #0	; 0x0
         e5838:	e5941000 	ldr	r1, [r4]
         e583c:	e59f001c 	ldr	r0, [pc, #1c]	; e5860 <QuickEnableInterrupt+0xa4>
         e5840:	eb6bd546 	bl	1bdad60 <$SetAndClearBitsAtomic>
         e5844:	e59f0018 	ldr	r0, [pc, #18]	; e5864 <QuickEnableInterrupt+0xa8>
         e5848:	e5901018 	ldr	r1, [r0, #24]
         e584c:	e5942000 	ldr	r2, [r4]
         e5850:	e1811002 	orr	r1, r1, r2
         e5854:	e5a01018 	str	r1, [r0, #24]!
         e5858:	eaffffe4 	b	e57f0 <QuickEnableInterrupt+0x34>
         e585c:	0f184400 	swieq	0x00184400
         e5860:	0f184800 	swieq	0x00184800
         e5864:	0c100e3c 	ldceq	14, cr0, [r0], -#240
    */
}

/**
 * Symbol: QuickDrawPresent(void)
 * Address: 0013d27c
 */
QuickDrawPresent(void) {
    /*
        13d27c:	e59f0010 	ldr	r0, [pc, #10]	; 13d294 <QuickDrawPresent(void)+0x18>
        13d280:	e5900000 	ldr	r0, [r0]
        13d284:	e3300000 	teq	r0, #0	; 0x0
        13d288:	13a00001 	movne	r0, #1	; 0x1
        13d28c:	e20000ff 	and	r0, r0, #255	; 0xff
        13d290:	e1a0f00e 	mov	pc, lr
        13d294:	0c105410 	ldceq	4, cr5, [r0], -#64
    */
}

/**
 * Symbol: QDStartDrawing(PixelMap *, Rect *)
 * Address: 001cce0c
 */
QDStartDrawing(PixelMap *, Rect *) {
    /*
        1cce0c:	e1a0c00d 	mov	ip, sp
        1cce10:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1cce14:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cce18:	e3300000 	teq	r0, #0	; 0x0
        1cce1c:	0b660a66 	bleq	1b4f7bc <$GetCurrentPort(void)>
        1cce20:	eb68fdf8 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        1cce24:	e1a04000 	mov	r4, r0
        1cce28:	e59f001c 	ldr	r0, [pc, #1c]	; 1cce4c <QDStartDrawing(PixelMap *, Rect *)+0x40>
        1cce2c:	eb68fdf5 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        1cce30:	e1340000 	teq	r4, r0
        1cce34:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1cce38:	e59f0010 	ldr	r0, [pc, #10]	; 1cce50 <QDStartDrawing(PixelMap *, Rect *)+0x44>
        1cce3c:	e590003c 	ldr	r0, [r0, #60]
        1cce40:	e3a01000 	mov	r1, #0	; 0x0
        1cce44:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1cce48:	ea680641 	b	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1cce4c:	0c107d8c 	ldceq	13, cr7, [r0], -#560
        1cce50:	0c101a4c 	ldceq	10, cr1, [r0], -#304
    */
}

/**
 * Symbol: QDStopDrawing(PixelMap *, Rect *)
 * Address: 001cce54
 */
QDStopDrawing(PixelMap *, Rect *) {
    /*
        1cce54:	e1a0c00d 	mov	ip, sp
        1cce58:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1cce5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cce60:	e1b05000 	movs	r5, r0
        1cce64:	e1a04001 	mov	r4, r1
        1cce68:	e24dd008 	sub	sp, sp, #8	; 0x8
        1cce6c:	1a000001 	bne	1cce78 <QDStopDrawing(PixelMap *, Rect *)+0x24>
        1cce70:	eb660a51 	bl	1b4f7bc <$GetCurrentPort(void)>
        1cce74:	e1a05000 	mov	r5, r0
        1cce78:	e1a00005 	mov	r0, r5
        1cce7c:	eb68fde1 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        1cce80:	e1a06000 	mov	r6, r0
        1cce84:	e59f0094 	ldr	r0, [pc, #94]	; 1ccf20 <QDStopDrawing(PixelMap *, Rect *)+0xcc>
        1cce88:	eb68fdde 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        1cce8c:	e1360000 	teq	r6, r0
        1cce90:	1a000021 	bne	1ccf1c <QDStopDrawing(PixelMap *, Rect *)+0xc8>
        1cce94:	e3340000 	teq	r4, #0	; 0x0
        1cce98:	0a000009 	beq	1ccec4 <QDStopDrawing(PixelMap *, Rect *)+0x70>
        1cce9c:	e8945000 	ldmia	r4, {ip, lr}
        1ccea0:	e88d5000 	stmia	sp, {ip, lr}
        1ccea4:	e5950008 	ldr	r0, [r5, #8]
        1ccea8:	e1a00840 	mov	r0, r0, asr #16
        1cceac:	e2602000 	rsb	r2, r0, #0	; 0x0
        1cceb0:	e595000a 	ldr	r0, [r5, #10]
        1cceb4:	e1a00840 	mov	r0, r0, asr #16
        1cceb8:	e2601000 	rsb	r1, r0, #0	; 0x0
        1ccebc:	e1a0000d 	mov	r0, sp
        1ccec0:	eb661288 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1ccec4:	e59f0058 	ldr	r0, [pc, #58]	; 1ccf24 <QDStopDrawing(PixelMap *, Rect *)+0xd0>
        1ccec8:	e1a05000 	mov	r5, r0
        1ccecc:	eb660611 	bl	1b4e718 <$EmptyRect(Rect *)>
        1cced0:	e3300000 	teq	r0, #0	; 0x0
        1cced4:	13a00000 	movne	r0, #0	; 0x0
        1cced8:	03a00001 	moveq	r0, #1	; 0x1
        1ccedc:	e20060ff 	and	r6, r0, #255	; 0xff
        1ccee0:	e3340000 	teq	r4, #0	; 0x0
        1ccee4:	0a000003 	beq	1ccef8 <QDStopDrawing(PixelMap *, Rect *)+0xa4>
        1ccee8:	e1a02005 	mov	r2, r5
        1cceec:	e1a01005 	mov	r1, r5
        1ccef0:	e1a0000d 	mov	r0, sp
        1ccef4:	eb6622e2 	bl	1b55a84 <$UnionRect__FP4RectN21>
        1ccef8:	e59f4028 	ldr	r4, [pc, #28]	; 1ccf28 <QDStopDrawing(PixelMap *, Rect *)+0xd4>
        1ccefc:	e3360000 	teq	r6, #0	; 0x0
        1ccf00:	1a000003 	bne	1ccf14 <QDStopDrawing(PixelMap *, Rect *)+0xc0>
        1ccf04:	e3a02000 	mov	r2, #0	; 0x0
        1ccf08:	e5940018 	ldr	r0, [r4, #24]
        1ccf0c:	e594102c 	ldr	r1, [r4, #44]
        1ccf10:	eb683789 	bl	1bdad3c <TUSemaphoreGroup::$SemOp(TUSemaphoreOpList *, SemFlags)>
        1ccf14:	e5b4003c 	ldr	r0, [r4, #60]!
        1ccf18:	eb68335e 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1ccf1c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1ccf20:	0c107d8c 	ldceq	13, cr7, [r0], -#560
        1ccf24:	0c101a58 	ldceq	10, cr1, [r0], -#352
        1ccf28:	0c101a4c 	ldceq	10, cr1, [r0], -#304
    */
}

/**
 * Symbol: QueueNotify(TSharedMemMsg *)
 * Address: 00255d4c
 */
QueueNotify(TSharedMemMsg *) {
    /*
        255d4c:	e3a01001 	mov	r1, #1	; 0x1
        255d50:	e59f2010 	ldr	r2, [pc, #10]	; 255d68 <QueueNotify(TSharedMemMsg *)+0x1c>
        255d54:	e5c21000 	strb	r1, [r2]
        255d58:	e1a01000 	mov	r1, r0
        255d5c:	e59f0008 	ldr	r0, [pc, #8]	; 255d6c <QueueNotify(TSharedMemMsg *)+0x20>
        255d60:	e5900000 	ldr	r0, [r0]
        255d64:	ea65e27e 	b	1bce764 <TDoubleQContainer::$Add(void *)>
        255d68:	0c101028 	ldceq	0, cr1, [r0], -#160
        255d6c:	0c101048 	ldceq	0, cr1, [r0], -#288
    */
}

/**
 * Symbol: QvantUN__FlT1
 * Address: 00282758
 */
void globals::QvantUN() {
    /*
        282758:	e1a0c00d 	mov	ip, sp
        28275c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        282760:	e24cb004 	sub	fp, ip, #4	; 0x4
        282764:	e1a04000 	mov	r4, r0
        282768:	e1a00001 	mov	r0, r1
        28276c:	e1a01084 	mov	r1, r4, lsl #1
        282770:	eb64c072 	bl	1bb2940 <$__rt_sdiv>
        282774:	e3540000 	cmp	r4, #0	; 0x0
        282778:	b2400001 	sublt	r0, r0, #1	; 0x1
        28277c:	a2800001 	addge	r0, r0, #1	; 0x1
        282780:	e1a00800 	mov	r0, r0, lsl #16
        282784:	e1a00840 	mov	r0, r0, asr #16
        282788:	e0800fa0 	add	r0, r0, r0, lsr #31
        28278c:	e1a000c0 	mov	r0, r0, asr #1
        282790:	e1a00800 	mov	r0, r0, lsl #16
        282794:	e1a00840 	mov	r0, r0, asr #16
        282798:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: QDistFromChord__FiN51
 * Address: 00305cec
 */
void globals::QDistFromChord() {
    /*
        305cec:	e1a0c00d 	mov	ip, sp
        305cf0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        305cf4:	e24cb004 	sub	fp, ip, #4	; 0x4
        305cf8:	e59be004 	ldr	lr, [fp, #4]
        305cfc:	e04e8000 	sub	r8, lr, r0
        305d00:	e59bc008 	ldr	ip, [fp, #8]
        305d04:	e04c7001 	sub	r7, ip, r1
        305d08:	e042e000 	sub	lr, r2, r0
        305d0c:	e043c001 	sub	ip, r3, r1
        305d10:	e1300002 	teq	r0, r2
        305d14:	01310003 	teqeq	r1, r3
        305d18:	00000898 	muleq	r0, r8, r8
        305d1c:	00200797 	mlaeq	r0, r7, r7, r0
        305d20:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        305d24:	e001089e 	mul	r1, lr, r8
        305d28:	e02a179c 	mla	sl, ip, r7, r1
        305d2c:	e0000e9e 	mul	r0, lr, lr
        305d30:	e0260c9c 	mla	r6, ip, ip, r0
        305d34:	e1a0100a 	mov	r1, sl
        305d38:	e1a00006 	mov	r0, r6
        305d3c:	eb62b2ff 	bl	1bb2940 <$__rt_sdiv>
        305d40:	e1a09000 	mov	r9, r0
        305d44:	e1a00001 	mov	r0, r1
        305d48:	e1a05001 	mov	r5, r1
        305d4c:	eb5daac6 	bl	1a7086c <$HWRLAbs(long)>
        305d50:	e250cc7f 	subs	ip, r0, #32512	; 0x7f00
        305d54:	a35c00ff 	cmpge	ip, #255	; 0xff
        305d58:	da00001a 	ble	305dc8 <QDistFromChord__FiN51+0xdc>
        305d5c:	e1a00005 	mov	r0, r5
        305d60:	eb5daac1 	bl	1a7086c <$HWRLAbs(long)>
        305d64:	e1a04000 	mov	r4, r0
        305d68:	e1a00006 	mov	r0, r6
        305d6c:	e3a01902 	mov	r1, #32768	; 0x8000
        305d70:	e2411001 	sub	r1, r1, #1	; 0x1
        305d74:	ea000002 	b	305d84 <QDistFromChord__FiN51+0x98>
        305d78:	e1a040c4 	mov	r4, r4, asr #1
        305d7c:	e2800002 	add	r0, r0, #2	; 0x2
        305d80:	e1a00140 	mov	r0, r0, asr #2
        305d84:	e1540001 	cmp	r4, r1
        305d88:	ba000001 	blt	305d94 <QDistFromChord__FiN51+0xa8>
        305d8c:	e3500040 	cmp	r0, #64	; 0x40
        305d90:	cafffff8 	bgt	305d78 <QDistFromChord__FiN51+0x8c>
        305d94:	e3500040 	cmp	r0, #64	; 0x40
        305d98:	ca000004 	bgt	305db0 <QDistFromChord__FiN51+0xc4>
        305d9c:	e08410c0 	add	r1, r4, r0, asr #1
        305da0:	e2611000 	rsb	r1, r1, #0	; 0x0
        305da4:	eb62b2e5 	bl	1bb2940 <$__rt_sdiv>
        305da8:	e0000094 	mul	r0, r4, r0
        305dac:	ea000002 	b	305dbc <QDistFromChord__FiN51+0xd0>
        305db0:	e0010494 	mul	r1, r4, r4
        305db4:	e2611000 	rsb	r1, r1, #0	; 0x0
        305db8:	eb62b2e0 	bl	1bb2940 <$__rt_sdiv>
        305dbc:	e3550000 	cmp	r5, #0	; 0x0
        305dc0:	b2600000 	rsblt	r0, r0, #0	; 0x0
        305dc4:	ea000003 	b	305dd8 <QDistFromChord__FiN51+0xec>
        305dc8:	e0000595 	mul	r0, r5, r5
        305dcc:	e2601000 	rsb	r1, r0, #0	; 0x0
        305dd0:	e1a00006 	mov	r0, r6
        305dd4:	eb62b2d9 	bl	1bb2940 <$__rt_sdiv>
        305dd8:	e0200797 	mla	r0, r7, r7, r0
        305ddc:	e0010a99 	mul	r1, r9, sl
        305de0:	e0400001 	sub	r0, r0, r1
        305de4:	e0200898 	mla	r0, r8, r8, r0
        305de8:	e0010995 	mul	r1, r5, r9
        305dec:	e0400001 	sub	r0, r0, r1
        305df0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: QueryMemoryReservation(void)
 * Address: 003136b0
 */
QueryMemoryReservation(void) {
    /*
        3136b0:	eaffffc5 	b	3135cc <ReserveContiguousMemory(void)>
    */
}

/**
 * Symbol: QSUtil__FPlT1P21TGeneralizedTestFnVar
 * Address: 00313bf4
 */
void globals::QSUtil() {
    /*
        313bf4:	e1a0c00d 	mov	ip, sp
        313bf8:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        313bfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        313c00:	e1a04002 	mov	r4, r2
        313c04:	e24ddf45 	sub	sp, sp, #276	; 0x114
        313c08:	e3a02000 	mov	r2, #0	; 0x0
        313c0c:	e58d2010 	str	r2, [sp, #16]
        313c10:	e51b0034 	ldr	r0, [fp, -#52]
        313c14:	e1a05001 	mov	r5, r1
        313c18:	e58d000c 	str	r0, [sp, #12]
        313c1c:	e3a00002 	mov	r0, #2	; 0x2
        313c20:	eb62b949 	bl	1bc214c <$AllocateRefHandle(long)>
        313c24:	e1a08000 	mov	r8, r0
        313c28:	e3a00002 	mov	r0, #2	; 0x2
        313c2c:	eb62b946 	bl	1bc214c <$AllocateRefHandle(long)>
        313c30:	e58d0008 	str	r0, [sp, #8]
        313c34:	e3a00002 	mov	r0, #2	; 0x2
        313c38:	eb62b943 	bl	1bc214c <$AllocateRefHandle(long)>
        313c3c:	e58d0004 	str	r0, [sp, #4]
        313c40:	e3a00002 	mov	r0, #2	; 0x2
        313c44:	eb62b940 	bl	1bc214c <$AllocateRefHandle(long)>
        313c48:	e58d0000 	str	r0, [sp]
        313c4c:	e3a00002 	mov	r0, #2	; 0x2
        313c50:	eb62b93d 	bl	1bc214c <$AllocateRefHandle(long)>
        313c54:	e1a09000 	mov	r9, r0
        313c58:	e284a01c 	add	sl, r4, #28	; 0x1c
        313c5c:	e59d100c 	ldr	r1, [sp, #12]
        313c60:	e0550001 	subs	r0, r5, r1
        313c64:	42800003 	addmi	r0, r0, #3	; 0x3
        313c68:	e1a00140 	mov	r0, r0, asr #2
        313c6c:	e350000a 	cmp	r0, #10	; 0xa
        313c70:	da000098 	ble	313ed8 <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x2e4>
        313c74:	e2457004 	sub	r7, r5, #4	; 0x4
        313c78:	e59d600c 	ldr	r6, [sp, #12]
        313c7c:	e0550006 	subs	r0, r5, r6
        313c80:	42800007 	addmi	r0, r0, #7	; 0x7
        313c84:	e1a001c0 	mov	r0, r0, asr #3
        313c88:	e59d100c 	ldr	r1, [sp, #12]
        313c8c:	e0810100 	add	r0, r1, r0, lsl #2
        313c90:	e5901000 	ldr	r1, [r0]
        313c94:	e5952000 	ldr	r2, [r5]
        313c98:	e5802000 	str	r2, [r0]
        313c9c:	e5851000 	str	r1, [r5]
        313ca0:	e1a01006 	mov	r1, r6
        313ca4:	e1a00004 	mov	r0, r4
        313ca8:	eb5cf703 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        313cac:	e59d2008 	ldr	r2, [sp, #8]
        313cb0:	e1a01007 	mov	r1, r7
        313cb4:	e5820000 	str	r0, [r2]
        313cb8:	e1a00004 	mov	r0, r4
        313cbc:	eb5cf6fe 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        313cc0:	e59d2004 	ldr	r2, [sp, #4]
        313cc4:	e5820000 	str	r0, [r2]
        313cc8:	e1a00004 	mov	r0, r4
        313ccc:	e59d1008 	ldr	r1, [sp, #8]
        313cd0:	e59d2004 	ldr	r2, [sp, #4]
        313cd4:	e1a0e00f 	mov	lr, pc
        313cd8:	e594f020 	ldr	pc, [r4, #32]
        313cdc:	e3500000 	cmp	r0, #0	; 0x0
        313ce0:	da00000d 	ble	313d1c <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x128>
        313ce4:	e5960000 	ldr	r0, [r6]
        313ce8:	e5971000 	ldr	r1, [r7]
        313cec:	e5861000 	str	r1, [r6]
        313cf0:	e5870000 	str	r0, [r7]
        313cf4:	e59d1008 	ldr	r1, [sp, #8]
        313cf8:	e5910000 	ldr	r0, [r1]
        313cfc:	e5880000 	str	r0, [r8]
        313d00:	e59d2004 	ldr	r2, [sp, #4]
        313d04:	e5920000 	ldr	r0, [r2]
        313d08:	e59d2008 	ldr	r2, [sp, #8]
        313d0c:	e5820000 	str	r0, [r2]
        313d10:	e5980000 	ldr	r0, [r8]
        313d14:	e59d2004 	ldr	r2, [sp, #4]
        313d18:	e5820000 	str	r0, [r2]
        313d1c:	e1a01005 	mov	r1, r5
        313d20:	e1a00004 	mov	r0, r4
        313d24:	eb5cf6e4 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        313d28:	e5880000 	str	r0, [r8]
        313d2c:	e1a01008 	mov	r1, r8
        313d30:	e1a00004 	mov	r0, r4
        313d34:	e59d2004 	ldr	r2, [sp, #4]
        313d38:	e1a0e00f 	mov	lr, pc
        313d3c:	e594f020 	ldr	pc, [r4, #32]
        313d40:	e3500000 	cmp	r0, #0	; 0x0
        313d44:	da000006 	ble	313d64 <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x170>
        313d48:	e5950000 	ldr	r0, [r5]
        313d4c:	e5971000 	ldr	r1, [r7]
        313d50:	e5851000 	str	r1, [r5]
        313d54:	e5870000 	str	r0, [r7]
        313d58:	e59d2004 	ldr	r2, [sp, #4]
        313d5c:	e5920000 	ldr	r0, [r2]
        313d60:	ea00000c 	b	313d98 <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x1a4>
        313d64:	e1a01008 	mov	r1, r8
        313d68:	e1a00004 	mov	r0, r4
        313d6c:	e59d2008 	ldr	r2, [sp, #8]
        313d70:	e1a0e00f 	mov	lr, pc
        313d74:	e594f020 	ldr	pc, [r4, #32]
        313d78:	e3500000 	cmp	r0, #0	; 0x0
        313d7c:	aa000006 	bge	313d9c <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x1a8>
        313d80:	e5950000 	ldr	r0, [r5]
        313d84:	e5961000 	ldr	r1, [r6]
        313d88:	e5851000 	str	r1, [r5]
        313d8c:	e5860000 	str	r0, [r6]
        313d90:	e59d1008 	ldr	r1, [sp, #8]
        313d94:	e5910000 	ldr	r0, [r1]
        313d98:	e5880000 	str	r0, [r8]
        313d9c:	e2866004 	add	r6, r6, #4	; 0x4
        313da0:	e1560007 	cmp	r6, r7
        313da4:	2a00000e 	bcs	313de4 <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x1f0>
        313da8:	e1a01006 	mov	r1, r6
        313dac:	e1a00004 	mov	r0, r4
        313db0:	e52da004 	str	sl, [sp, -#4]!
        313db4:	eb5cf6c0 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        313db8:	e59d1000 	ldr	r1, [sp]
        313dbc:	e5911000 	ldr	r1, [r1]
        313dc0:	e5810000 	str	r0, [r1]
        313dc4:	e1a01008 	mov	r1, r8
        313dc8:	e49d0004 	ldr	r0, [sp], #4
        313dcc:	e5902000 	ldr	r2, [r0]
        313dd0:	e1a00004 	mov	r0, r4
        313dd4:	e1a0e00f 	mov	lr, pc
        313dd8:	e594f020 	ldr	pc, [r4, #32]
        313ddc:	e3500000 	cmp	r0, #0	; 0x0
        313de0:	caffffed 	bgt	313d9c <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x1a8>
        313de4:	e2477004 	sub	r7, r7, #4	; 0x4
        313de8:	e1570006 	cmp	r7, r6
        313dec:	9a00000e 	bls	313e2c <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x238>
        313df0:	e1a01007 	mov	r1, r7
        313df4:	e1a00004 	mov	r0, r4
        313df8:	e52da004 	str	sl, [sp, -#4]!
        313dfc:	eb5cf6ae 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        313e00:	e59d1000 	ldr	r1, [sp]
        313e04:	e5911000 	ldr	r1, [r1]
        313e08:	e5810000 	str	r0, [r1]
        313e0c:	e1a01008 	mov	r1, r8
        313e10:	e49d0004 	ldr	r0, [sp], #4
        313e14:	e5902000 	ldr	r2, [r0]
        313e18:	e1a00004 	mov	r0, r4
        313e1c:	e1a0e00f 	mov	lr, pc
        313e20:	e594f020 	ldr	pc, [r4, #32]
        313e24:	e3500000 	cmp	r0, #0	; 0x0
        313e28:	baffffed 	blt	313de4 <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x1f0>
        313e2c:	e1560007 	cmp	r6, r7
        313e30:	2a000004 	bcs	313e48 <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x254>
        313e34:	e5960000 	ldr	r0, [r6]
        313e38:	e5971000 	ldr	r1, [r7]
        313e3c:	e5861000 	str	r1, [r6]
        313e40:	e5870000 	str	r0, [r7]
        313e44:	eaffffd4 	b	313d9c <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x1a8>
        313e48:	e5950000 	ldr	r0, [r5]
        313e4c:	e5961000 	ldr	r1, [r6]
        313e50:	e5851000 	str	r1, [r5]
        313e54:	e5860000 	str	r0, [r6]
        313e58:	e59d100c 	ldr	r1, [sp, #12]
        313e5c:	e0560001 	subs	r0, r6, r1
        313e60:	42800003 	addmi	r0, r0, #3	; 0x3
        313e64:	e1a00140 	mov	r0, r0, asr #2
        313e68:	e0551006 	subs	r1, r5, r6
        313e6c:	42811003 	addmi	r1, r1, #3	; 0x3
        313e70:	e1500141 	cmp	r0, r1, asr #2
        313e74:	da00000c 	ble	313eac <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x2b8>
        313e78:	e28d200c 	add	r2, sp, #12	; 0xc
        313e7c:	e8920006 	ldmia	r2, {r1, r2}
        313e80:	e2820001 	add	r0, r2, #1	; 0x1
        313e84:	e28d3014 	add	r3, sp, #20	; 0x14
        313e88:	e7831102 	str	r1, [r3, r2, lsl #2]
        313e8c:	e2461004 	sub	r1, r6, #4	; 0x4
        313e90:	e2802001 	add	r2, r0, #1	; 0x1
        313e94:	e58d2010 	str	r2, [sp, #16]
        313e98:	e28d2014 	add	r2, sp, #20	; 0x14
        313e9c:	e7821100 	str	r1, [r2, r0, lsl #2]
        313ea0:	e2861004 	add	r1, r6, #4	; 0x4
        313ea4:	e58d100c 	str	r1, [sp, #12]
        313ea8:	eaffff6b 	b	313c5c <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x68>
        313eac:	e2860004 	add	r0, r6, #4	; 0x4
        313eb0:	e59d2010 	ldr	r2, [sp, #16]
        313eb4:	e2821001 	add	r1, r2, #1	; 0x1
        313eb8:	e28d3014 	add	r3, sp, #20	; 0x14
        313ebc:	e7830102 	str	r0, [r3, r2, lsl #2]
        313ec0:	e2812001 	add	r2, r1, #1	; 0x1
        313ec4:	e58d2010 	str	r2, [sp, #16]
        313ec8:	e28d0014 	add	r0, sp, #20	; 0x14
        313ecc:	e7805101 	str	r5, [r0, r1, lsl #2]
        313ed0:	e2465004 	sub	r5, r6, #4	; 0x4
        313ed4:	eaffff60 	b	313c5c <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x68>
        313ed8:	e2850004 	add	r0, r5, #4	; 0x4
        313edc:	e52d0004 	str	r0, [sp, -#4]!
        313ee0:	e59d6010 	ldr	r6, [sp, #16]
        313ee4:	e1560000 	cmp	r6, r0
        313ee8:	2a000022 	bcs	313f78 <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x384>
        313eec:	e5960000 	ldr	r0, [r6]
        313ef0:	e59d1004 	ldr	r1, [sp, #4]
        313ef4:	e5810000 	str	r0, [r1]
        313ef8:	e28d1004 	add	r1, sp, #4	; 0x4
        313efc:	e1a00004 	mov	r0, r4
        313f00:	eb5cf66e 	bl	1a518c0 <TGeneralizedTestFnVar::$ApplyKey(RefVar const &)>
        313f04:	e2465004 	sub	r5, r6, #4	; 0x4
        313f08:	e5890000 	str	r0, [r9]
        313f0c:	ea000002 	b	313f1c <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x328>
        313f10:	e5950000 	ldr	r0, [r5]
        313f14:	e5850004 	str	r0, [r5, #4]
        313f18:	e2455004 	sub	r5, r5, #4	; 0x4
        313f1c:	e51b0034 	ldr	r0, [fp, -#52]
        313f20:	e1550000 	cmp	r5, r0
        313f24:	3a00000c 	bcc	313f5c <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x368>
        313f28:	e1a0700a 	mov	r7, sl
        313f2c:	e1a01005 	mov	r1, r5
        313f30:	e1a00004 	mov	r0, r4
        313f34:	eb5cf660 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        313f38:	e5971000 	ldr	r1, [r7]
        313f3c:	e5810000 	str	r0, [r1]
        313f40:	e1a01009 	mov	r1, r9
        313f44:	e1a00004 	mov	r0, r4
        313f48:	e5972000 	ldr	r2, [r7]
        313f4c:	e1a0e00f 	mov	lr, pc
        313f50:	e594f020 	ldr	pc, [r4, #32]
        313f54:	e3500000 	cmp	r0, #0	; 0x0
        313f58:	baffffec 	blt	313f10 <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x31c>
        313f5c:	e59d0004 	ldr	r0, [sp, #4]
        313f60:	e5900000 	ldr	r0, [r0]
        313f64:	e2866004 	add	r6, r6, #4	; 0x4
        313f68:	e5a50004 	str	r0, [r5, #4]!
        313f6c:	e59d0000 	ldr	r0, [sp]
        313f70:	e1560000 	cmp	r6, r0
        313f74:	3affffdc 	bcc	313eec <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x2f8>
        313f78:	e59d2014 	ldr	r2, [sp, #20]
        313f7c:	e3520001 	cmp	r2, #1	; 0x1
        313f80:	c59d2014 	ldrgt	r2, [sp, #20]
        313f84:	c2420001 	subgt	r0, r2, #1	; 0x1
        313f88:	c28d1018 	addgt	r1, sp, #24	; 0x18
        313f8c:	c7915100 	ldrgt	r5, [r1, r0, lsl #2]
        313f90:	c2402001 	subgt	r2, r0, #1	; 0x1
        313f94:	c58d2014 	strgt	r2, [sp, #20]
        313f98:	c28d0018 	addgt	r0, sp, #24	; 0x18
        313f9c:	c7901102 	ldrgt	r1, [r0, r2, lsl #2]
        313fa0:	c58d1010 	strgt	r1, [sp, #16]
        313fa4:	ca00000b 	bgt	313fd8 <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x3e4>
        313fa8:	e28dd004 	add	sp, sp, #4	; 0x4
        313fac:	e1a00009 	mov	r0, r9
        313fb0:	eb62bc81 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        313fb4:	e59d0000 	ldr	r0, [sp]
        313fb8:	eb62bc7f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        313fbc:	e59d0004 	ldr	r0, [sp, #4]
        313fc0:	eb62bc7d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        313fc4:	e59d0008 	ldr	r0, [sp, #8]
        313fc8:	eb62bc7b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        313fcc:	e1a00008 	mov	r0, r8
        313fd0:	eb62bc79 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        313fd4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        313fd8:	e28dd004 	add	sp, sp, #4	; 0x4
        313fdc:	eaffff1e 	b	313c5c <QSUtil__FPlT1P21TGeneralizedTestFnVar+0x68>
    */
}

/**
 * Symbol: QSort(RefVar const &, TGeneralizedTestFnVar *)
 * Address: 00313fe0
 */
QSort(RefVar const &, TGeneralizedTestFnVar *) {
    /*
        313fe0:	e1a0c00d 	mov	ip, sp
        313fe4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        313fe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        313fec:	e1a04000 	mov	r4, r0
        313ff0:	e1a05001 	mov	r5, r1
        313ff4:	eb637e64 	bl	1bf398c <$IsArray(RefVar const &)>
        313ff8:	e3300000 	teq	r0, #0	; 0x0
        313ffc:	01a01004 	moveq	r1, r4
        314000:	059f006c 	ldreq	r0, [pc, #6c]	; 314074 <QSort(RefVar const &, TGeneralizedTestFnVar *)+0x94>
        314004:	0b63d114 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        314008:	e5940000 	ldr	r0, [r4]
        31400c:	e5900000 	ldr	r0, [r0]
        314010:	eb62c4a7 	bl	1bc52b4 <$LockRef(long)>
        314014:	e3a00000 	mov	r0, #0	; 0x0
        314018:	e3a07000 	mov	r7, #0	; 0x0
        31401c:	e52d006c 	str	r0, [sp, -#108]!
        314020:	e28d0008 	add	r0, sp, #8	; 0x8
        314024:	eb627a52 	bl	1bb2974 <$setjmp>
        314028:	e3300000 	teq	r0, #0	; 0x0
        31402c:	1a000011 	bne	314078 <QSort(RefVar const &, TGeneralizedTestFnVar *)+0x98>
        314030:	e1a0000d 	mov	r0, sp
        314034:	eb633010 	bl	1be007c <$AddExceptionHandler>
        314038:	e5940000 	ldr	r0, [r4]
        31403c:	e5900000 	ldr	r0, [r0]
        314040:	eb62c8cc 	bl	1bc6378 <$Slots(long)>
        314044:	e1a06000 	mov	r6, r0
        314048:	e5940000 	ldr	r0, [r4]
        31404c:	e5900000 	ldr	r0, [r0]
        314050:	eb62c495 	bl	1bc52ac <$Length(long)>
        314054:	e0860100 	add	r0, r6, r0, lsl #2
        314058:	e2401004 	sub	r1, r0, #4	; 0x4
        31405c:	e1a02005 	mov	r2, r5
        314060:	e1a00006 	mov	r0, r6
        314064:	eb5cf1f9 	bl	1a50850 <$QSUtil__FPlT1P21TGeneralizedTestFnVar>
        314068:	e1a0000d 	mov	r0, sp
        31406c:	eb633411 	bl	1be10b8 <$ExitHandler>
        314070:	ea000001 	b	31407c <QSort(RefVar const &, TGeneralizedTestFnVar *)+0x9c>
        314074:	ffff42ef 	swinv	0x00ff42ef
        314078:	e3a07001 	mov	r7, #1	; 0x1
        31407c:	e5940000 	ldr	r0, [r4]
        314080:	e5900000 	ldr	r0, [r0]
        314084:	eb62d0f9 	bl	1bc8470 <$UnlockRef(long)>
        314088:	e3370000 	teq	r7, #0	; 0x0
        31408c:	11a0000d 	movne	r0, sp
        314090:	1b63382f 	blne	1be2154 <$NextHandler>
        314094:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: QDPatchpoint(void)
 * Address: 0033f548
 */
QDPatchpoint(void) {
    /*
        33f548:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: QDNewTempPtr(long)
 * Address: 0033f554
 */
QDNewTempPtr(long) {
    /*
        33f554:	e1a0c00d 	mov	ip, sp
        33f558:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        33f55c:	e24cb004 	sub	fp, ip, #4	; 0x4
        33f560:	e1a04000 	mov	r4, r0
        33f564:	e3500004 	cmp	r0, #4	; 0x4
        33f568:	b3a04004 	movlt	r4, #4	; 0x4
        33f56c:	ebff3579 	bl	30cb58 <GetNewtGlobals(void)>
        33f570:	e3300000 	teq	r0, #0	; 0x0
        33f574:	0a000010 	beq	33f5bc <QDNewTempPtr(long)+0x68>
        33f578:	ebff3576 	bl	30cb58 <GetNewtGlobals(void)>
        33f57c:	e5900014 	ldr	r0, [r0, #20]
        33f580:	e0805004 	add	r5, r0, r4
        33f584:	ebff3573 	bl	30cb58 <GetNewtGlobals(void)>
        33f588:	e5900010 	ldr	r0, [r0, #16]
        33f58c:	e2800b01 	add	r0, r0, #1024	; 0x400
        33f590:	e1550000 	cmp	r5, r0
        33f594:	2a000008 	bcs	33f5bc <QDNewTempPtr(long)+0x68>
        33f598:	ebff356e 	bl	30cb58 <GetNewtGlobals(void)>
        33f59c:	e5b05014 	ldr	r5, [r0, #20]!
        33f5a0:	ebff356c 	bl	30cb58 <GetNewtGlobals(void)>
        33f5a4:	e2841003 	add	r1, r4, #3	; 0x3
        33f5a8:	e3c12003 	bic	r2, r1, #3	; 0x3
        33f5ac:	e5b01014 	ldr	r1, [r0, #20]!
        33f5b0:	e0821001 	add	r1, r2, r1
        33f5b4:	e5801000 	str	r1, [r0]
        33f5b8:	ea000002 	b	33f5c8 <QDNewTempPtr(long)+0x74>
        33f5bc:	e1a00004 	mov	r0, r4
        33f5c0:	eb628ade 	bl	1be2140 <$NewPtr>
        33f5c4:	e1a05000 	mov	r5, r0
        33f5c8:	e1a00005 	mov	r0, r5
        33f5cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: QDDisposeTempPtr(char *)
 * Address: 0033f5d0
 */
QDDisposeTempPtr(char *) {
    /*
        33f5d0:	e3300000 	teq	r0, #0	; 0x0
        33f5d4:	01a0f00e 	moveq	pc, lr
        33f5d8:	e1a0c00d 	mov	ip, sp
        33f5dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        33f5e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        33f5e4:	e1a04000 	mov	r4, r0
        33f5e8:	ebff355a 	bl	30cb58 <GetNewtGlobals(void)>
        33f5ec:	e3300000 	teq	r0, #0	; 0x0
        33f5f0:	0a000008 	beq	33f618 <QDDisposeTempPtr(char *)+0x48>
        33f5f4:	ebff3557 	bl	30cb58 <GetNewtGlobals(void)>
        33f5f8:	e5900010 	ldr	r0, [r0, #16]
        33f5fc:	e1500004 	cmp	r0, r4
        33f600:	8a000004 	bhi	33f618 <QDDisposeTempPtr(char *)+0x48>
        33f604:	ebff3553 	bl	30cb58 <GetNewtGlobals(void)>
        33f608:	e5900010 	ldr	r0, [r0, #16]
        33f60c:	e2800b01 	add	r0, r0, #1024	; 0x400
        33f610:	e1500004 	cmp	r0, r4
        33f614:	8a000002 	bhi	33f624 <QDDisposeTempPtr(char *)+0x54>
        33f618:	e1a00004 	mov	r0, r4
        33f61c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        33f620:	ea6286a3 	b	1be10b4 <$DisposPtr>
        33f624:	ebff354b 	bl	30cb58 <GetNewtGlobals(void)>
        33f628:	e5a04014 	str	r4, [r0, #20]!
        33f62c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: QDSafeLock(char **)
 * Address: 0033f630
 */
QDSafeLock(char **) {
    /*
        33f630:	e1a0c00d 	mov	ip, sp
        33f634:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        33f638:	e24cb004 	sub	fp, ip, #4	; 0x4
        33f63c:	e1a04000 	mov	r4, r0
        33f640:	eb628ab0 	bl	1be2108 <$HGetState>
        33f644:	e1a05000 	mov	r5, r0
        33f648:	e1a00004 	mov	r0, r4
        33f64c:	eb628aae 	bl	1be210c <$HLock>
        33f650:	e1a00005 	mov	r0, r5
        33f654:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: Query__FRC6RefVarT1
 * Address: 0033fbd8
 */
void globals::Query() {
    /*
        33fbd8:	eafffef3 	b	33f7ac <SoupQuery__FRC6RefVarT1>
    */
}

/**
 * Symbol: QDQuickSort__FP5PointT1
 * Address: 00342a0c
 */
void globals::QDQuickSort() {
    /*
        342a0c:	e1a0c00d 	mov	ip, sp
        342a10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        342a14:	e24cb004 	sub	fp, ip, #4	; 0x4
        342a18:	e1a04001 	mov	r4, r1
        342a1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        342a20:	e1a05000 	mov	r5, r0
        342a24:	e0512000 	subs	r2, r1, r0
        342a28:	42822003 	addmi	r2, r2, #3	; 0x3
        342a2c:	e1a02142 	mov	r2, r2, asr #2
        342a30:	e1a020c2 	mov	r2, r2, asr #1
        342a34:	e0852102 	add	r2, r5, r2, lsl #2
        342a38:	e5922000 	ldr	r2, [r2]
        342a3c:	e58d2000 	str	r2, [sp]
        342a40:	ea000000 	b	342a48 <QDQuickSort__FP5PointT1+0x3c>
        342a44:	e2855004 	add	r5, r5, #4	; 0x4
        342a48:	e5953000 	ldr	r3, [r5]
        342a4c:	e1a03843 	mov	r3, r3, asr #16
        342a50:	e59d2000 	ldr	r2, [sp]
        342a54:	e1530842 	cmp	r3, r2, asr #16
        342a58:	bafffff9 	blt	342a44 <QDQuickSort__FP5PointT1+0x38>
        342a5c:	1a000006 	bne	342a7c <QDQuickSort__FP5PointT1+0x70>
        342a60:	e5952002 	ldr	r2, [r5, #2]
        342a64:	e1a02842 	mov	r2, r2, asr #16
        342a68:	e59d3002 	ldr	r3, [sp, #2]
        342a6c:	e1520843 	cmp	r2, r3, asr #16
        342a70:	bafffff3 	blt	342a44 <QDQuickSort__FP5PointT1+0x38>
        342a74:	ea000000 	b	342a7c <QDQuickSort__FP5PointT1+0x70>
        342a78:	e2411004 	sub	r1, r1, #4	; 0x4
        342a7c:	e59d3000 	ldr	r3, [sp]
        342a80:	e5912000 	ldr	r2, [r1]
        342a84:	e1a02842 	mov	r2, r2, asr #16
        342a88:	e1520843 	cmp	r2, r3, asr #16
        342a8c:	cafffff9 	bgt	342a78 <QDQuickSort__FP5PointT1+0x6c>
        342a90:	e59d3000 	ldr	r3, [sp]
        342a94:	e1320843 	teq	r2, r3, asr #16
        342a98:	1a000004 	bne	342ab0 <QDQuickSort__FP5PointT1+0xa4>
        342a9c:	e59d3002 	ldr	r3, [sp, #2]
        342aa0:	e1a03843 	mov	r3, r3, asr #16
        342aa4:	e5912002 	ldr	r2, [r1, #2]
        342aa8:	e1530842 	cmp	r3, r2, asr #16
        342aac:	bafffff1 	blt	342a78 <QDQuickSort__FP5PointT1+0x6c>
        342ab0:	e1550001 	cmp	r5, r1
        342ab4:	8a000003 	bhi	342ac8 <QDQuickSort__FP5PointT1+0xbc>
        342ab8:	e5952000 	ldr	r2, [r5]
        342abc:	e5913000 	ldr	r3, [r1]
        342ac0:	e4853004 	str	r3, [r5], #4
        342ac4:	e4012004 	str	r2, [r1], -#4
        342ac8:	e1550001 	cmp	r5, r1
        342acc:	9affffdd 	bls	342a48 <QDQuickSort__FP5PointT1+0x3c>
        342ad0:	e1500001 	cmp	r0, r1
        342ad4:	3b6022bd 	blcc	1b4b5d0 <$QDQuickSort__FP5PointT1>
        342ad8:	e1550004 	cmp	r5, r4
        342adc:	31a01004 	movcc	r1, r4
        342ae0:	31a00005 	movcc	r0, r5
        342ae4:	3b6022b9 	blcc	1b4b5d0 <$QDQuickSort__FP5PointT1>
        342ae8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: QueryEntriesWithTags__FRC6RefVarT1
 * Address: 0034a448
 */
void globals::QueryEntriesWithTags() {
    /*
        34a448:	e1a0c00d 	mov	ip, sp
        34a44c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        34a450:	e24cb004 	sub	fp, ip, #4	; 0x4
        34a454:	e1a05000 	mov	r5, r0
        34a458:	e1a04001 	mov	r4, r1
        34a45c:	e24dd004 	sub	sp, sp, #4	; 0x4
        34a460:	eb61df36 	bl	1bc2140 <$AllocateFrame(void)>
        34a464:	eb61df38 	bl	1bc214c <$AllocateRefHandle(long)>
        34a468:	e58d0000 	str	r0, [sp]
        34a46c:	e59f2060 	ldr	r2, [pc, #60]	; 34a4d4 <QueryEntriesWithTags__FRC6RefVarT1+0x8c>
        34a470:	e59f1060 	ldr	r1, [pc, #60]	; 34a4d8 <QueryEntriesWithTags__FRC6RefVarT1+0x90>
        34a474:	e1a0000d 	mov	r0, sp
        34a478:	eb61efba 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        34a47c:	e24dd004 	sub	sp, sp, #4	; 0x4
        34a480:	eb61df2e 	bl	1bc2140 <$AllocateFrame(void)>
        34a484:	eb61df30 	bl	1bc214c <$AllocateRefHandle(long)>
        34a488:	e1a02004 	mov	r2, r4
        34a48c:	e58d0000 	str	r0, [sp]
        34a490:	e59f1044 	ldr	r1, [pc, #44]	; 34a4dc <QueryEntriesWithTags__FRC6RefVarT1+0x94>
        34a494:	e1a0000d 	mov	r0, sp
        34a498:	eb61efb2 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        34a49c:	e1a0200d 	mov	r2, sp
        34a4a0:	e59f1038 	ldr	r1, [pc, #38]	; 34a4e0 <QueryEntriesWithTags__FRC6RefVarT1+0x98>
        34a4a4:	e28d0004 	add	r0, sp, #4	; 0x4
        34a4a8:	eb61efae 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        34a4ac:	e28d1004 	add	r1, sp, #4	; 0x4
        34a4b0:	e1a00005 	mov	r0, r5
        34a4b4:	eb61ef92 	bl	1bc6304 <$Query__FRC6RefVarT1>
        34a4b8:	e1a04000 	mov	r4, r0
        34a4bc:	e59d0000 	ldr	r0, [sp]
        34a4c0:	eb61e33d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34a4c4:	e59d0004 	ldr	r0, [sp, #4]
        34a4c8:	eb61e33b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34a4cc:	e1a00004 	mov	r0, r4
        34a4d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        34a4d4:	006831c0 	rsbeq	r3, r8, r0, asr #3
        34a4d8:	00684cb0 	streqh	r4, [r8], -#192
        34a4dc:	00681e78 	rsbeq	r1, r8, r8, ror lr
        34a4e0:	00684a50 	rsbeq	r4, r8, r0, asr sl
    */
}

/**
 * Symbol: qsort
 * Address: 003508b4
 */
void globals::qsort() {
    /*
        3508b4:	e1a0c00d 	mov	ip, sp
        3508b8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        3508bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        3508c0:	e1a05000 	mov	r5, r0
        3508c4:	e1a08001 	mov	r8, r1
        3508c8:	e1b04002 	movs	r4, r2
        3508cc:	e1a06003 	mov	r6, r3
        3508d0:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        3508d4:	e358000a 	cmp	r8, #10	; 0xa
        3508d8:	9a000004 	bls	3508f0 <qsort+0x3c>
        3508dc:	e1a03006 	mov	r3, r6
        3508e0:	e1a02004 	mov	r2, r4
        3508e4:	e1a01008 	mov	r1, r8
        3508e8:	e1a00005 	mov	r0, r5
        3508ec:	ebffff1b 	bl	350560 <_ANSI_srand+0x10>
        3508f0:	e1a07005 	mov	r7, r5
        3508f4:	e2480001 	sub	r0, r8, #1	; 0x1
        3508f8:	e0295094 	mla	r9, r4, r0, r5
        3508fc:	e1550009 	cmp	r5, r9
        350900:	291babf0 	ldmcsdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        350904:	e1a08007 	mov	r8, r7
        350908:	e0877004 	add	r7, r7, r4
        35090c:	ea000000 	b	350914 <qsort+0x60>
        350910:	e0488004 	sub	r8, r8, r4
        350914:	e1580005 	cmp	r8, r5
        350918:	3a000005 	bcc	350934 <qsort+0x80>
        35091c:	e1a01007 	mov	r1, r7
        350920:	e1a00008 	mov	r0, r8
        350924:	e1a0e00f 	mov	lr, pc
        350928:	e1a0f006 	mov	pc, r6
        35092c:	e3500000 	cmp	r0, #0	; 0x0
        350930:	cafffff6 	bgt	350910 <qsort+0x5c>
        350934:	e0881004 	add	r1, r8, r4
        350938:	e1840007 	orr	r0, r4, r7
        35093c:	e3100003 	tst	r0, #3	; 0x3
        350940:	e3a02000 	mov	r2, #0	; 0x0
        350944:	1a00000f 	bne	350988 <qsort+0xd4>
        350948:	e3540000 	cmp	r4, #0	; 0x0
        35094c:	9a00001c 	bls	3509c4 <qsort+0x110>
        350950:	e0870002 	add	r0, r7, r2
        350954:	e6103004 	ldr	r3, [r0], -r4
        350958:	e1500001 	cmp	r0, r1
        35095c:	3a000004 	bcc	350974 <qsort+0xc0>
        350960:	e590c000 	ldr	ip, [r0]
        350964:	e780c004 	str	ip, [r0, r4]
        350968:	e0400004 	sub	r0, r0, r4
        35096c:	e1500001 	cmp	r0, r1
        350970:	2afffffa 	bcs	350960 <qsort+0xac>
        350974:	e7803004 	str	r3, [r0, r4]
        350978:	e2822004 	add	r2, r2, #4	; 0x4
        35097c:	e1520004 	cmp	r2, r4
        350980:	3afffff2 	bcc	350950 <qsort+0x9c>
        350984:	ea00000e 	b	3509c4 <qsort+0x110>
        350988:	e3540000 	cmp	r4, #0	; 0x0
        35098c:	9a00000c 	bls	3509c4 <qsort+0x110>
        350990:	e0870002 	add	r0, r7, r2
        350994:	e6503004 	ldrb	r3, [r0], -r4
        350998:	e1500001 	cmp	r0, r1
        35099c:	3a000004 	bcc	3509b4 <qsort+0x100>
        3509a0:	e5d0c000 	ldrb	ip, [r0]
        3509a4:	e7c0c004 	strb	ip, [r0, r4]
        3509a8:	e0400004 	sub	r0, r0, r4
        3509ac:	e1500001 	cmp	r0, r1
        3509b0:	2afffffa 	bcs	3509a0 <qsort+0xec>
        3509b4:	e7c03004 	strb	r3, [r0, r4]
        3509b8:	e2822001 	add	r2, r2, #1	; 0x1
        3509bc:	e1520004 	cmp	r2, r4
        3509c0:	3afffff2 	bcc	350990 <qsort+0xdc>
        3509c4:	e1570009 	cmp	r7, r9
        3509c8:	3affffcd 	bcc	350904 <qsort+0x50>
        3509cc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: QSigLu
 * Address: 0036500c
 */
void globals::QSigLu() {
    /*
        36500c:	80818283 	addhi	r8, r1, r3, lsl #5
        365010:	84858687 	strhi	r8, [r5], #1671
        365014:	88898a8b 	stmhiia	r9, {r0, r1, r3, r7, r9, fp, pc}
        365018:	8c8d8e8f 	stchi	14, cr8, [sp], #572
        36501c:	90919293 	umulllss	r9, r1, r3, r2
        365020:	94959697 	ldrls	r9, [r5], #1687
        365024:	98999a9b 	ldmlsia	r9, {r0, r1, r3, r4, r7, r9, fp, ip, pc}
        365028:	9c9c9d9e 	ldcls	13, cr9, [ip], #632
        36502c:	9fa0a1a2 	swils	0x00a0a1a2
        365030:	a3a4a5a6 	movge	sl, #696254464	; 0x29800000
        365034:	a7a8a9a9 	strge	sl, [r8, r9, lsr #19]!
        365038:	aaabacad 	bge	fee502f4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd23fa9c>
        36503c:	aeafb0b0 	mcrge	0, 5, fp, cr15, cr0, {5}
        365040:	b1b2b3b4 	ldrlth	fp, [r2, r4]!
        365044:	b5b5b6b7 	ldrlt	fp, [r5, #1719]!
        365048:	b8b9b9ba 	ldmltia	r9!, {r1, r3, r4, r5, r7, r8, fp, ip, sp, pc}
        36504c:	bbbcbdbd 	bllt	ff294748 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd683ef0>
        365050:	bebfc0c0 	cdplt	0, 11, cr12, cr15, cr0, {6}
        365054:	c1c2c3c3 	bicgt	ip, r2, r3, asr #7
        365058:	c4c5c5c6 	strgtb	ip, [r5], #1478
        36505c:	c7c8c8c9 	strgtb	ip, [r8, r9, asr #17]
        365060:	cacacbcc 	bgt	ff617f98 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfda07740>
        365064:	cccdcdce 	stcgtl	13, cr12, [sp], #824
        365068:	cfcfd0d1 	swigt	0x00cfd0d1
        36506c:	d1d2d2d3 	ldrlesb	sp, [r2, #35]
        365070:	d3d4d5d5 	bicles	sp, r4, #893386752	; 0x35400000
        365074:	d6d6d7d7 	undefined
        365078:	d8d8d9d9 	ldmleia	r8, {r0, r3, r4, r6, r7, r8, fp, ip, lr, pc}^
        36507c:	dadadbdb 	ble	ffa1bff0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfde0b798>
        365080:	dcdcdddd 	ldclel	13, cr13, [ip], #884
        365084:	dededfdf 	mrcle	15, 6, sp, cr14, cr15, {6}
        365088:	dfe0e0e1 	swile	0x00e0e0e1
        36508c:	e1e2e2e2 	mvn	lr, r2, ror #5
        365090:	e3e3e4e4 	mvn	lr, #-469762048	; 0xe4000000
        365094:	e4e5e5e5 	strbt	lr, [r5], #1509
        365098:	e6e6e7e7 	strbt	lr, [r6], r7, ror #15
        36509c:	e7e8e8e8 	strb	lr, [r8, r8, ror #17]!
        3650a0:	e9e9e9ea 	stmib	r9!, {r1, r3, r5, r6, r7, r8, fp, sp, lr, pc}^
        3650a4:	eaeaeaeb 	b	ffe1fc58 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe20f400>
        3650a8:	ebebecec 	bl	ffe60460 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe24fc08>
        3650ac:	ececeded 	stcl	13, cr14, [ip], #948
        3650b0:	edeeeeee 	stcl	14, cr14, [lr, #952]!
        3650b4:	eeefefef 	cdp	15, 14, cr14, cr15, cr15, {7}
        3650b8:	eff0f0f0 	swi	0x00f0f0f0
        3650bc:	f0f0f1f1 	ldrnvsh	pc, [r0], #17
        3650c0:	f1f1f2f2 	ldrnvsh	pc, [r1, #34]!
        3650c4:	f2f2f2f3 	rscnvs	pc, r2, #805306383	; 0x3000000f
        3650c8:	f3f3f3f3 	mvnnvs	pc, #-872415229	; 0xcc000003
        3650cc:	f3f4f4f4 	mvnnvs	pc, #-201326592	; 0xf4000000
        3650d0:	f4f4f4f5 	ldrnvbt	pc, [r4], #1269
        3650d4:	f5f5f5f5 	ldrnvb	pc, [r5, #1525]!
        3650d8:	f5f6f6f6 	ldrnvb	pc, [r6, #1782]!
        3650dc:	f6f6f6f6 	undefined
        3650e0:	f7f7f7f7 	undefined
        3650e4:	f7f7f7f7 	undefined
        3650e8:	f8f8f8f8 	ldmnvia	r8!, {r3, r4, r5, r6, r7, fp, ip, sp, lr, pc}^
        3650ec:	f8f8f8f8 	ldmnvia	r8!, {r3, r4, r5, r6, r7, fp, ip, sp, lr, pc}^
        3650f0:	f8f9f9f9 	ldmnvia	r9!, {r0, r3, r4, r5, r6, r7, r8, fp, ip, sp, lr, pc}^
        3650f4:	f9f9f9f9 	ldmnvib	r9!, {r0, r3, r4, r5, r6, r7, r8, fp, ip, sp, lr, pc}^
        3650f8:	f9f9f9fa 	ldmnvib	r9!, {r1, r3, r4, r5, r6, r7, r8, fp, ip, sp, lr, pc}^
        3650fc:	fafafafa 	blx	223cec <FindEquations(TGeneralShapeUnit *, long *, EqSystem *, GSType *, unsigned long *, EqSystem *)+0xb0c>
        365100:	fafafafa 	blx	223cf0 <FindEquations(TGeneralShapeUnit *, long *, EqSystem *, GSType *, unsigned long *, EqSystem *)+0xb10>
        365104:	fafafafb 	blx	223cf8 <FindEquations(TGeneralShapeUnit *, long *, EqSystem *, GSType *, unsigned long *, EqSystem *)+0xb18>
        365108:	fbfbfbfb 	blx	2640fe <TView::OuterBounds(TRect *)+0x2e>
        36510c:	fbfbfbfb 	blx	264102 <TView::OuterBounds(TRect *)+0x32>
        365110:	fbfbfbfb 	blx	264106 <TView::OuterBounds(TRect *)+0x36>
        365114:	fbfcfcfc 	blx	2a450e <FindPound(tag_CHUNK_STAFF *)+0x616>
        365118:	fcfcfcfc 	ldc2l	12, cr15, [ip], #1008
        36511c:	fcfcfcfc 	ldc2l	12, cr15, [ip], #1008
        365120:	fcfcfcfc 	ldc2l	12, cr15, [ip], #1008
        365124:	fcfcfcfc 	ldc2l	12, cr15, [ip], #1008
        365128:	fdfdfdfd 	ldc2l	13, cr15, [sp, #1012]!
        36512c:	fdfdfdfd 	ldc2l	13, cr15, [sp, #1012]!
        365130:	fdfdfdfd 	ldc2l	13, cr15, [sp, #1012]!
        365134:	fdfdfdfd 	ldc2l	13, cr15, [sp, #1012]!
        365138:	fdfdfdfd 	ldc2l	13, cr15, [sp, #1012]!
        36513c:	fdfdfdfd 	ldc2l	13, cr15, [sp, #1012]!
        365140:	fdfdfefe 	ldc2l	14, cr15, [sp, #1016]!
        365144:	fefefefe 	mrc2	14, 7, pc, cr14, cr14, {7}
        365148:	fefefefe 	mrc2	14, 7, pc, cr14, cr14, {7}
        36514c:	fefefefe 	mrc2	14, 7, pc, cr14, cr14, {7}
        365150:	fefefefe 	mrc2	14, 7, pc, cr14, cr14, {7}
        365154:	fefefefe 	mrc2	14, 7, pc, cr14, cr14, {7}
        365158:	fefefefe 	mrc2	14, 7, pc, cr14, cr14, {7}
        36515c:	fefefefe 	mrc2	14, 7, pc, cr14, cr14, {7}
        365160:	fefefefe 	mrc2	14, 7, pc, cr14, cr14, {7}
        365164:	fefefefe 	mrc2	14, 7, pc, cr14, cr14, {7}
        365168:	fefefefe 	mrc2	14, 7, pc, cr14, cr14, {7}
        36516c:	fefefeff 	mrc2	14, 7, pc, cr14, cr15, {7}
        365170:	ffffffff 	swinv	0x00ffffff
    */
}

/**
 * Symbol: quarterSineWaveTable
 * Address: 00370744
 */
void globals::quarterSineWaveTable() {
    /*
        370744:	00000000 	andeq	r0, r0, r0
        370748:	0023be8b 	eoreq	fp, r3, fp, lsl #29
        37074c:	00477d0b 	subeq	r7, r7, fp, lsl #26
        370750:	006b3b75 	rsbeq	r3, fp, r5, ror fp
        370754:	008ef9be 	streqh	pc, [lr], lr
        370758:	00b2b7da 	ldreqsb	fp, [r2], sl
        37075c:	00d675be 	ldreqh	r7, [r6], #94
        370760:	00fa335f 	rsceqs	r3, sl, pc, asr r3
        370764:	011df0b2 	ldreqh	pc, [sp, -r2]
        370768:	0141adac 	smlaltbeq	sl, r1, ip, sp
        37076c:	01656a42 	cmneq	r5, r2, asr #20
        370770:	01892668 	orreq	r2, r9, r8, ror #12
        370774:	01ace214 	moveq	lr, r4, lsl r2
        370778:	01d09d3a 	biceqs	r9, r0, sl, lsr sp
        37077c:	01f457ce 	mvneqs	r5, lr, asr #15
        370780:	021811c7 	andeqs	r1, r8, #-1073741775	; 0xc0000031
        370784:	023bcb19 	eoreqs	ip, fp, #25600	; 0x6400
        370788:	025f83b8 	subeqs	r8, pc, #-536870910	; 0xe0000002
        37078c:	02833b9a 	addeq	r3, r3, #157696	; 0x26800
        370790:	02a6f2b3 	adceq	pc, r6, #805306379	; 0x3000000b
        370794:	02caa8f8 	sbceq	sl, sl, #16252928	; 0xf80000
        370798:	02ee5e5e 	rsceq	r5, lr, #1504	; 0x5e0
        37079c:	031212db 	tsteq	r2, #-1342177267	; 0xb000000d
        3707a0:	0335c662 	teqeq	r5, #102760448	; 0x6200000
        3707a4:	035978e9 	cmpeq	r9, #15269888	; 0xe90000
        3707a8:	037d2a64 	cmneq	sp, #409600	; 0x64000
        3707ac:	03a0dac9 	moveq	sp, #823296	; 0xc9000
        3707b0:	03c48a0c 	biceq	r8, r4, #49152	; 0xc000
        3707b4:	03e83822 	mvneq	r3, #2228224	; 0x220000
        3707b8:	040be500 	streq	lr, [fp], -#1280
        3707bc:	042f909b 	streqt	r9, [pc], #9b	; 3707c4 <quarterSineWaveTable+0x80>
        3707c0:	04533ae8 	ldreqb	r3, [r3], -#2792
        3707c4:	0476e3db 	ldreqbt	lr, [r6], -#987
        3707c8:	049a8b6a 	ldreq	r8, [sl], #2922
        3707cc:	04be3189 	ldreqt	r3, [lr], #393
        3707d0:	04e1d62d 	streqbt	sp, [r1], #1581
        3707d4:	0505794c 	streq	r7, [r5, -#2380]
        3707d8:	05291ada 	streq	r1, [r9, -#2778]!
        3707dc:	054cbacb 	streqb	fp, [ip, -#2763]
        3707e0:	05705916 	ldreqb	r5, [r0, -#2326]!
        3707e4:	0593f5ae 	ldreq	pc, [r3, #1454]
        3707e8:	05b79088 	ldreq	r9, [r7, #136]!
        3707ec:	05db299a 	ldreqb	r2, [fp, #2458]
        3707f0:	05fec0d9 	ldreqb	ip, [lr, #217]!
        3707f4:	06225639 	undefined
        3707f8:	0645e9af 	streqb	lr, [r5], -pc, lsr #19
        3707fc:	06697b30 	undefined
        370800:	068d0ab0 	undefined
        370804:	06b09826 	ldreqt	r9, [r0], r6, lsr #16
        370808:	06d42386 	ldreqb	r2, [r4], r6, lsl #7
        37080c:	06f7acc4 	ldreqbt	sl, [r7], r4, asr #25
        370810:	071b33d6 	undefined
        370814:	073eb8b1 	undefined
        370818:	07623b49 	streqb	r3, [r2, -r9, asr #22]!
        37081c:	0785bb93 	undefined
        370820:	07a93985 	streq	r3, [r9, r5, lsl #19]!
        370824:	07ccb513 	undefined
        370828:	07f02e32 	undefined
        37082c:	0813a4d7 	ldmeqda	r3, {r0, r1, r2, r4, r6, r7, sl, sp, pc}
        370830:	083718f7 	ldmeqda	r7!, {r0, r1, r2, r4, r5, r6, r7, fp, ip}
        370834:	085a8a87 	ldmeqda	sl, {r0, r1, r2, r7, r9, fp, pc}^
        370838:	087df97c 	ldmeqda	sp!, {r2, r3, r4, r5, r6, r8, fp, ip, sp, lr, pc}^
        37083c:	08a165cb 	stmeqia	r1!, {r0, r1, r3, r6, r7, r8, sl, sp, lr}
        370840:	08c4cf69 	stmeqia	r4, {r0, r3, r5, r6, r8, r9, sl, fp, lr, pc}^
        370844:	08e8364b 	stmeqia	r8!, {r0, r1, r3, r6, r9, sl, ip, sp}^
        370848:	090b9a65 	stmeqdb	fp, {r0, r2, r5, r6, r9, fp, ip, pc}
        37084c:	092efbad 	stmeqdb	lr!, {r0, r2, r3, r5, r7, r8, r9, fp, ip, sp, lr, pc}
        370850:	09525a18 	ldmeqdb	r2, {r3, r4, r9, fp, ip, lr}^
        370854:	0975b59a 	ldmeqdb	r5!, {r1, r3, r4, r7, r8, sl, ip, sp, pc}^
        370858:	09990e29 	ldmeqib	r9, {r0, r3, r5, r9, sl, fp}
        37085c:	09bc63ba 	ldmeqib	ip!, {r1, r3, r4, r5, r7, r8, r9, sp, lr}
        370860:	09dfb641 	ldmeqib	pc, {r0, r6, r9, sl, ip, sp, pc}^
        370864:	0a0305b3 	beq	431f38 <SYMampmbuttons+0x178>
        370868:	0a265206 	beq	d05088 <ROM$$Size+0x5e543c>
        37086c:	0a499b2f 	beq	15d7530 <ROM$$Size+0xeb78e4>
        370870:	0a6ce122 	beq	1ea8d00 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x2984a8>
        370874:	0a9023d5 	beq	fe7797d0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcb68f78>
        370878:	0ab3633c 	beq	ff049570 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd438d18>
        37087c:	0ad69f4d 	beq	ff9185b8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdd07d60>
        370880:	0af9d7fc 	beq	1e6878 <FSoundOpen+0x90>
        370884:	0b1d0d3f 	bleq	ab3d88 <ROM$$Size+0x39413c>
        370888:	0b403f0a 	bleq	13804b8 <ROM$$Size+0xc6086c>
        37088c:	0b636d53 	bleq	1c4bde0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x3b588>
        370890:	0b86980e 	bleq	fe5168d0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc906078>
        370894:	0ba9bf31 	bleq	fede0560 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd1cfd08>
        370898:	0bcce2b1 	bleq	ff6a9364 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfda98b0c>
        37089c:	0bf00282 	bleq	fff712ac <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe360a54>
        3708a0:	0c131e9a 	ldceq	14, cr1, [r3], -#616
        3708a4:	0c3636ee 	ldceq	6, cr3, [r6], -#952
        3708a8:	0c594b73 	mrrceq	11, 7, r4, r9, cr3
        3708ac:	0c7c5c1e 	ldceql	12, cr5, [ip], -#120
        3708b0:	0c9f68e3 	ldceq	8, cr6, [pc], #908
        3708b4:	0cc271b9 	stfeqe	f7, [r2], #740
        3708b8:	0ce57694 	stceql	6, cr7, [r5], #592
        3708bc:	0d087769 	stceq	7, cr7, [r8, -#420]
        3708c0:	0d2b742d 	stceq	4, cr7, [fp, -#180]!
        3708c4:	0d4e6cd6 	stceql	12, cr6, [lr, -#856]
        3708c8:	0d716158 	ldfeqe	f6, [r1, -#352]!
        3708cc:	0d9451a8 	ldfeqs	f5, [r4, #672]
        3708d0:	0db73dbc 	ldceq	13, cr3, [r7, #752]!
        3708d4:	0dda2589 	ldceql	5, cr2, [sl, #548]
        3708d8:	0dfd0904 	ldceql	9, cr0, [sp, #16]!
        3708dc:	0e1fe822 	cdpeq	8, 1, cr14, cr15, cr2, {1}
        3708e0:	0e42c2d8 	mcreq	2, 2, ip, cr2, cr8, {6}
        3708e4:	0e65991b 	mcreq	9, 3, r9, cr5, cr11, {0}
        3708e8:	0e886ae0 	cdpeq	10, 8, cr6, cr8, cr0, {7}
        3708ec:	0eab381d 	mcreq	8, 5, r3, cr11, cr13, {0}
        3708f0:	0ece00c7 	cdpeq	0, 12, cr0, cr14, cr7, {6}
        3708f4:	0ef0c4d2 	mrceq	4, 7, ip, cr0, cr2, {6}
        3708f8:	0f138435 	swieq	0x00138435
        3708fc:	0f363ee3 	swieq	0x00363ee3
        370900:	0f58f4d3 	swieq	0x0058f4d3
        370904:	0f7ba5f9 	swieq	0x007ba5f9
        370908:	0f9e524b 	swieq	0x009e524b
        37090c:	0fc0f9bd 	swieq	0x00c0f9bd
        370910:	0fe39c46 	swieq	0x00e39c46
        370914:	100639da 	ldrned	r3, [r6], -sl
        370918:	1028d26e 	eorne	sp, r8, lr, ror #4
        37091c:	104b65f8 	strned	r6, [fp], -#88
        370920:	106df46c 	rsbne	pc, sp, ip, ror #8
        370924:	10907dc1 	addnes	r7, r0, r1, asr #27
        370928:	10b301eb 	adcnes	r0, r3, fp, ror #3
        37092c:	10d580df 	ldrnesb	r8, [r5], #15
        370930:	10f7fa94 	smlalnes	pc, r7, r4, sl
        370934:	111a6efd 	ldrnesh	r6, [sl, -sp]
        370938:	113cde10 	teqne	ip, r0, lsl lr
        37093c:	115f47c3 	cmpne	pc, r3, asr #15
        370940:	1181ac0b 	orrne	sl, r1, fp, lsl #24
        370944:	11a40add 	ldrned	r0, [r4, sp]!
        370948:	11c6642e 	bicne	r6, r6, lr, lsr #8
        37094c:	11e8b7f3 	strned	fp, [r8, #115]!
        370950:	120b0623 	andne	r0, fp, #36700160	; 0x2300000
        370954:	122d4eb2 	eorne	r4, sp, #2848	; 0xb20
        370958:	124f9195 	subne	r9, pc, #1073741861	; 0x40000025
        37095c:	1271cec2 	rsbnes	ip, r1, #3104	; 0xc20
        370960:	1294062e 	addnes	r0, r4, #48234496	; 0x2e00000
        370964:	12b637cf 	adcnes	r3, r6, #54263808	; 0x33c0000
        370968:	12d86399 	sbcnes	r6, r8, #1677721602	; 0x64000002
        37096c:	12fa8983 	rscnes	r8, sl, #2146304	; 0x20c000
        370970:	131ca981 	tstne	ip, #2113536	; 0x204000
        370974:	133ec389 	teqne	lr, #603979778	; 0x24000002
        370978:	1360d790 	cmnne	r0, #37748736	; 0x2400000
        37097c:	1382e58c 	orrne	lr, r2, #587202560	; 0x23000000
        370980:	13a4ed72 	movne	lr, #7296	; 0x1c80
        370984:	13c6ef37 	bicne	lr, r6, #220	; 0xdc
        370988:	13e8ead0 	mvnne	lr, #851968	; 0xd0000
        37098c:	140ae034 	strne	lr, [sl], -#52
        370990:	142ccf58 	strnet	ip, [ip], -#3928
        370994:	144eb830 	strneb	fp, [lr], -#2096
        370998:	14709ab3 	ldrnebt	r9, [r0], -#2739
        37099c:	149276d5 	ldrne	r7, [r2], #1749
        3709a0:	14b44c8d 	ldrnet	r4, [r4], #3213
        3709a4:	14d61bd0 	ldrneb	r1, [r6], #3024
        3709a8:	14f7e492 	ldrnebt	lr, [r7], #1170
        3709ac:	1519a6ca 	ldrne	sl, [r9, -#1738]
        3709b0:	153b626e 	ldrne	r6, [fp, -#622]!
        3709b4:	155d1771 	ldrneb	r1, [sp, -#1905]
        3709b8:	157ec5cb 	ldrneb	ip, [lr, -#1483]!
        3709bc:	15a06d71 	strne	r6, [r0, #3441]!
        3709c0:	15c20e57 	strneb	r0, [r2, #3671]
        3709c4:	15e3a874 	strneb	sl, [r3, #2164]!
        3709c8:	16053bbd 	undefined
        3709cc:	1626c828 	strnet	ip, [r6], -r8, lsr #16
        3709d0:	16484da9 	strneb	r4, [r8], -r9, lsr #27
        3709d4:	1669cc38 	undefined
        3709d8:	168b43c8 	strne	r4, [fp], r8, asr #7
        3709dc:	16acb451 	undefined
        3709e0:	16ce1dc7 	strneb	r1, [lr], r7, asr #27
        3709e4:	16ef801f 	undefined
        3709e8:	1710db51 	undefined
        3709ec:	17322f50 	undefined
        3709f0:	17537c13 	undefined
        3709f4:	1774c18f 	ldrneb	ip, [r4, -pc, lsl #3]!
        3709f8:	1795ffba 	undefined
        3709fc:	17b7368a 	ldrne	r3, [r7, sl, lsl #13]!
        370a00:	17d865f4 	undefined
        370a04:	17f98dee 	ldrneb	r8, [r9, lr, ror #27]!
        370a08:	181aae6e 	ldmneda	sl, {r1, r2, r3, r5, r6, r9, sl, fp, sp, pc}
        370a0c:	183bc769 	ldmneda	fp!, {r0, r3, r5, r6, r8, r9, sl, lr, pc}
        370a10:	185cd8d4 	ldmneda	ip, {r2, r4, r6, r7, fp, ip, lr, pc}^
        370a14:	187de2a6 	ldmneda	sp!, {r1, r2, r5, r7, r9, sp, lr, pc}^
        370a18:	189ee4d5 	ldmneia	lr, {r0, r2, r4, r6, r7, sl, sp, lr, pc}
        370a1c:	18bfdf55 	ldmneia	pc!, {r0, r2, r4, r6, r8, r9, sl, fp, ip, lr, pc}
        370a20:	18e0d21d 	stmneia	r0!, {r0, r2, r3, r4, r9, ip, lr, pc}^
        370a24:	1901bd22 	stmnedb	r1, {r1, r5, r8, sl, fp, ip, sp, pc}
        370a28:	1922a05b 	stmnedb	r2!, {r0, r1, r3, r4, r6, sp, pc}
        370a2c:	19437bbc 	stmnedb	r3, {r2, r3, r4, r5, r7, r8, r9, fp, ip, sp, lr}^
        370a30:	19644f3c 	stmnedb	r4!, {r2, r3, r4, r5, r8, r9, sl, fp, lr}^
        370a34:	19851ad0 	stmneib	r5, {r4, r6, r7, r9, fp, ip}
        370a38:	19a5de6f 	stmneib	r5!, {r0, r1, r2, r3, r5, r6, r9, sl, fp, ip, lr, pc}
        370a3c:	19c69a0d 	stmneib	r6, {r0, r2, r3, r9, fp, ip, pc}^
        370a40:	19e74da1 	stmneib	r7!, {r0, r5, r7, r8, sl, fp, lr}^
        370a44:	1a07f921 	bne	56eed0 <SYMsolopayoffs+0x140>
        370a48:	1a289c81 	bne	d97c54 <ROM$$Size+0x678008>
        370a4c:	1a4937b9 	bne	15be938 <ROM$$Size+0xe9ecec>
        370a50:	1a69cabe 	bne	1de3550 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x1d2cf8>
        370a54:	1a8a5586 	bne	fe606074 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc9f581c>
        370a58:	1aaad807 	bne	fee26a7c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd216224>
        370a5c:	1acb5236 	bne	ff64533c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfda34ae4>
        370a60:	1aebc409 	bne	ffe61a8c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe251234>
        370a64:	1b0c2d77 	blne	67c048 <MP0872+0x3169f>
        370a68:	1b2c8e75 	blne	e94444 <ROM$$Size+0x7747f8>
        370a6c:	1b4ce6f8 	blne	16aa654 <ROM$$Size+0xf8aa08>
        370a70:	1b6d36f8 	blne	1ebe658 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x2ade00>
        370a74:	1b8d7e6a 	blne	fe6d0424 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcabfbcc>
        370a78:	1badbd43 	blne	feedff8c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd2cf734>
        370a7c:	1bcdf37b 	blne	ff6ed870 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdadd018>
        370a80:	1bee2106 	blne	ffef8ea0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe2e8648>
        370a84:	1c0e45da 	stcne	5, cr4, [lr], -#872
        370a88:	1c2e61ef 	stfnes	f6, [lr], -#956
        370a8c:	1c4e7538 	mcrrne	5, 3, r7, lr, cr8
        370a90:	1c6e7fae 	stcnel	15, cr7, [lr], -#696
        370a94:	1c8e8145 	stfned	f0, [lr], #276
        370a98:	1cae79f4 	stcne	9, cr7, [lr], #976
        370a9c:	1cce69b1 	stcnel	9, cr6, [lr], #708
        370aa0:	1cee5071 	stcnel	0, cr5, [lr], #452
        370aa4:	1d0e2e2b 	stcne	14, cr2, [lr, -#172]
        370aa8:	1d2e02d5 	sfmne	f0, 4, [lr, -#852]!
        370aac:	1d4dce64 	stcnel	14, cr12, [sp, -#400]
        370ab0:	1d6d90d0 	stcnel	0, cr9, [sp, -#832]!
        370ab4:	1d8d4a0e 	stcne	10, cr4, [sp, #56]
        370ab8:	1dacfa14 	stcne	10, cr15, [ip, #80]!
        370abc:	1dcca0d8 	stcnel	0, cr10, [ip, #864]
        370ac0:	1dec3e50 	stcnel	14, cr3, [ip, #320]!
        370ac4:	1e0bd274 	mcrne	2, 0, sp, cr11, cr4, {3}
        370ac8:	1e2b5d38 	mcrne	13, 1, r5, cr11, cr8, {1}
        370acc:	1e4ade92 	mcrne	14, 2, sp, cr10, cr2, {4}
        370ad0:	1e6a567a 	mcrne	6, 3, r5, cr10, cr10, {3}
        370ad4:	1e89c4e5 	cdpne	4, 8, cr12, cr9, cr5, {7}
        370ad8:	1ea929ca 	cdpne	9, 10, cr2, cr9, cr10, {6}
        370adc:	1ec8851e 	mcrne	5, 6, r8, cr8, cr14, {0}
        370ae0:	1ee7d6d7 	mcrne	6, 7, sp, cr7, cr7, {6}
        370ae4:	1f071eed 	swine	0x00071eed
        370ae8:	1f265d56 	swine	0x00265d56
        370aec:	1f459207 	swine	0x00459207
        370af0:	1f64bcf6 	swine	0x0064bcf6
        370af4:	1f83de1b 	swine	0x0083de1b
        370af8:	1fa2f56b 	swine	0x00a2f56b
        370afc:	1fc202dd 	swine	0x00c202dd
        370b00:	1fe10667 	swine	0x00e10667
        370b04:	20000000 	andcs	r0, r0, r0
        370b08:	201eef9c 	mulcss	lr, ip, pc
        370b0c:	203dd534 	eorcss	sp, sp, r4, lsr r5
        370b10:	205cb0be 	ldrcsh	fp, [ip], -#14
        370b14:	207b822f 	rsbcss	r8, fp, pc, lsr #4
        370b18:	209a497e 	addcss	r4, sl, lr, ror r9
        370b1c:	20b906a2 	adccss	r0, r9, r2, lsr #13
        370b20:	20d7b991 	smullcss	fp, r7, r1, r9
        370b24:	20f66241 	rsccss	r6, r6, r1, asr #4
        370b28:	211500aa 	tstcs	r5, sl, lsr #1
        370b2c:	213394c0 	teqcs	r3, r0, asr #9
        370b30:	21521e7b 	cmpcs	r2, fp, ror lr
        370b34:	21709dd1 	ldrcssb	r9, [r0, -#209]!
        370b38:	218f12b9 	strcsh	r1, [pc, r9]
        370b3c:	21ad7d2a 	movcs	r7, sl, lsr #26
        370b40:	21cbdd19 	biccs	sp, fp, r9, lsl sp
        370b44:	21ea327d 	mvncs	r3, sp, ror r2
        370b48:	22087d4d 	andcs	r7, r8, #4928	; 0x1340
        370b4c:	2226bd7f 	eorcs	fp, r6, #8128	; 0x1fc0
        370b50:	2244f30a 	subcs	pc, r4, #671088640	; 0x28000000
        370b54:	22631de5 	rsbcs	r1, r3, #14656	; 0x3940
        370b58:	22813e06 	addcs	r3, r1, #96	; 0x60
        370b5c:	229f5363 	addcss	r5, pc, #-1946157055	; 0x8c000001
        370b60:	22bd5df4 	adccss	r5, sp, #15616	; 0x3d00
        370b64:	22db5dae 	sbccss	r5, fp, #11136	; 0x2b80
        370b68:	22f9528a 	rsccss	r5, r9, #-1610612728	; 0xa0000008
        370b6c:	23173c7c 	tstcs	r7, #31744	; 0x7c00
        370b70:	23351b7c 	teqcs	r5, #126976	; 0x1f000
        370b74:	2352ef81 	cmpcs	r2, #516	; 0x204
        370b78:	2370b881 	cmncs	r0, #8454144	; 0x810000
        370b7c:	238e7673 	orrcs	r7, lr, #120586240	; 0x7300000
        370b80:	23ac294e 	movcs	r2, #1277952	; 0x138000
        370b84:	23c9d108 	biccs	sp, r9, #2	; 0x2
        370b88:	23e76d98 	mvncs	r6, #9728	; 0x2600
        370b8c:	2404fef5 	strcs	pc, [r4], -#3829
        370b90:	24228516 	strcst	r8, [r2], -#1302
        370b94:	243ffff1 	ldrcst	pc, [pc], #ff1	; 370b9c <quarterSineWaveTable+0x458>
        370b98:	245d6f7e 	ldrcsb	r6, [sp], -#3966
        370b9c:	247ad3b3 	ldrcsbt	sp, [sl], -#947
        370ba0:	24982c87 	ldrcs	r2, [r8], #3207
        370ba4:	24b579f0 	ldrcst	r7, [r5], #2544
        370ba8:	24d2bbe7 	ldrcsb	fp, [r2], #3047
        370bac:	24eff261 	strcsbt	pc, [pc], #261	; 370bb4 <quarterSineWaveTable+0x470>
        370bb0:	250d1d55 	strcs	r1, [sp, -#3413]
        370bb4:	252a3cba 	strcs	r3, [sl, -#3258]!
        370bb8:	25475088 	strcsb	r5, [r7, -#136]
        370bbc:	256458b5 	strcsb	r5, [r4, -#2229]!
        370bc0:	25815538 	strcs	r5, [r1, #1336]
        370bc4:	259e4608 	ldrcs	r4, [lr, #1544]
        370bc8:	25bb2b1d 	ldrcs	r2, [fp, #2845]!
        370bcc:	25d8046c 	ldrcsb	r0, [r8, #1132]
        370bd0:	25f4d1ed 	ldrcsb	sp, [r4, #493]!
        370bd4:	26119398 	undefined
        370bd8:	262e4962 	strcst	r4, [lr], -r2, ror #18
        370bdc:	264af343 	strcsb	pc, [sl], -r3, asr #6
        370be0:	26679133 	undefined
        370be4:	26842328 	strcs	r2, [r4], r8, lsr #6
        370be8:	26a0a919 	undefined
        370bec:	26bd22fe 	undefined
        370bf0:	26d990ce 	ldrcsb	r9, [r9], lr, asr #1
        370bf4:	26f5f27f 	undefined
        370bf8:	27124809 	ldrcs	r4, [r2, -r9, lsl #16]
        370bfc:	272e9162 	strcs	r9, [lr, -r2, ror #2]!
        370c00:	274ace84 	strcsb	ip, [sl, -r4, lsl #29]
        370c04:	2766ff63 	strcsb	pc, [r6, -r3, ror #30]!
        370c08:	278323f8 	undefined
        370c0c:	279f3c3a 	undefined
        370c10:	27bb4820 	ldrcs	r4, [fp, r0, lsr #16]!
        370c14:	27d747a1 	ldrcsb	r4, [r7, r1, lsr #15]
        370c18:	27f33ab5 	undefined
        370c1c:	280f2152 	stmcsda	pc, {r1, r4, r6, r8, sp}
        370c20:	282afb71 	stmcsda	sl!, {r0, r4, r5, r6, r8, r9, fp, ip, sp, lr, pc}
        370c24:	2846c908 	stmcsda	r6, {r3, r8, fp, lr, pc}^
        370c28:	28628a0f 	stmcsda	r2!, {r0, r1, r2, r3, r9, fp, pc}^
        370c2c:	287e3e7d 	ldmcsda	lr!, {r0, r2, r3, r4, r5, r6, r9, sl, fp, ip, sp}^
        370c30:	2899e64a 	ldmcsia	r9, {r1, r3, r6, r9, sl, sp, lr, pc}
        370c34:	28b5816c 	ldmcsia	r5!, {r2, r3, r5, r6, r8, pc}
        370c38:	28d10fdc 	ldmcsia	r1, {r2, r3, r4, r6, r7, r8, r9, sl, fp}^
        370c3c:	28ec9190 	stmcsia	ip!, {r4, r7, r8, ip, pc}^
        370c40:	29080680 	stmcsdb	r8, {r7, r9, sl}
        370c44:	29236ea4 	stmcsdb	r3!, {r2, r5, r7, r9, sl, fp, sp, lr}
        370c48:	293ec9f3 	ldmcsdb	lr!, {r0, r1, r4, r5, r6, r7, r8, fp, lr, pc}
        370c4c:	295a1864 	ldmcsdb	sl, {r2, r5, r6, fp, ip}^
        370c50:	297559ef 	ldmcsdb	r5!, {r0, r1, r2, r3, r5, r6, r7, r8, fp, ip, lr}^
        370c54:	29908e8c 	ldmcsib	r0, {r2, r3, r7, r9, sl, fp, pc}
        370c58:	29abb631 	stmcsib	fp!, {r0, r4, r5, r9, sl, ip, sp, pc}
        370c5c:	29c6d0d7 	stmcsib	r6, {r0, r1, r2, r4, r6, r7, ip, lr, pc}^
        370c60:	29e1de75 	stmcsib	r1!, {r0, r2, r4, r5, r6, r9, sl, fp, ip, lr, pc}^
        370c64:	29fcdf02 	ldmcsib	ip!, {r1, r8, r9, sl, fp, ip, lr, pc}^
        370c68:	2a17d276 	bcs	965648 <ROM$$Size+0x2459fc>
        370c6c:	2a32b8ca 	bcs	101ef9c <ROM$$Size+0x8ff350>
        370c70:	2a4d91f3 	bcs	16d5444 <ROM$$Size+0xfb57f8>
        370c74:	2a685deb 	bcs	1d88428 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x177bd0>
        370c78:	2a831ca8 	bcs	fe437f20 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc8276c8>
        370c7c:	2a9dce22 	bcs	feae450c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfced3cb4>
        370c80:	2ab87251 	bcs	ff18d5cc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd57cd74>
        370c84:	2ad3092d 	bcs	ff833140 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdc228e8>
        370c88:	2aed92ad 	bcs	ffed5744 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe2c4eec>
        370c8c:	2b080eca 	blcs	5747bc <SYMautodockprefspanel+0x3b9c>
        370c90:	2b227d7a 	blcs	c10280 <ROM$$Size+0x4f0634>
        370c94:	2b3cdeb5 	blcs	12a8770 <ROM$$Size+0xb88b24>
        370c98:	2b573274 	blcs	193d670 <ROM$$Size+0x121da24>
        370c9c:	2b7178ae 	blcs	1fcef5c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x3be704>
        370ca0:	2b8bb15b 	blcs	fe65d214 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfca4c9bc>
        370ca4:	2ba5dc73 	blcs	fece7e78 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd0d7620>
        370ca8:	2bbff9ed 	blcs	ff36f464 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd75ec0c>
        370cac:	2bda09c1 	blcs	ff9f33b8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdde2b60>
        370cb0:	2bf40be8 	blcs	73c58 <TContainerView::IsCompletelyHilited(RefVar const &)>
        370cb4:	2c0e0059 	stccs	0, cr0, [lr], -#356
        370cb8:	2c27e70c 	stccs	7, cr14, [r7], -#48
        370cbc:	2c41bff9 	mcrrcs	15, 15, fp, r1, cr9
        370cc0:	2c5b8b18 	mrrccs	11, 1, r8, fp, cr8
        370cc4:	2c754861 	ldccsl	8, cr4, [r5], -#388
        370cc8:	2c8ef7cc 	stccs	7, cr15, [lr], #816
        370ccc:	2ca89951 	stccs	9, cr9, [r8], #324
        370cd0:	2cc22ce7 	stccsl	12, cr2, [r2], #924
        370cd4:	2cdbb287 	lfmcs	f3, 3, [fp], #540
        370cd8:	2cf52a2a 	ldccsl	10, cr2, [r5], #168
        370cdc:	2d0e93c6 	stccs	3, cr9, [lr, -#792]
        370ce0:	2d27ef54 	stccs	15, cr14, [r7, -#336]!
        370ce4:	2d413ccc 	stccsl	12, cr3, [r1, -#816]
        370ce8:	2d5a7c27 	ldccsl	12, cr7, [sl, -#156]
        370cec:	2d73ad5c 	ldccsl	13, cr10, [r3, -#368]!
        370cf0:	2d8cd064 	stccs	0, cr13, [ip, #400]
        370cf4:	2da5e536 	stccs	5, cr14, [r5, #216]!
        370cf8:	2dbeebcb 	ldccs	11, cr14, [lr, #812]!
        370cfc:	2dd7e41b 	ldccsl	4, cr14, [r7, #108]
        370d00:	2df0ce1e 	ldccsl	14, cr12, [r0, #120]!
        370d04:	2e09a9cd 	cdpcs	9, 0, cr10, cr9, cr13, {6}
        370d08:	2e22771f 	mcrcs	7, 1, r7, cr2, cr15, {0}
        370d0c:	2e3b360e 	cdpcs	6, 3, cr3, cr11, cr14, {0}
        370d10:	2e53e690 	mrccs	6, 2, lr, cr3, cr0, {4}
        370d14:	2e6c88a0 	cdpcs	8, 6, cr8, cr12, cr0, {5}
        370d18:	2e851c34 	mcrcs	12, 4, r1, cr5, cr4, {1}
        370d1c:	2e9da145 	coscsem	f2, f5
        370d20:	2eb617cc 	cdpcs	7, 11, cr1, cr6, cr12, {6}
        370d24:	2ece7fc1 	cdpcs	15, 12, cr7, cr14, cr1, {6}
        370d28:	2ee6d91c 	mcrcs	9, 7, sp, cr6, cr12, {0}
        370d2c:	2eff23d6 	mrccs	3, 7, r2, cr15, cr6, {6}
        370d30:	2f175fe7 	swics	0x00175fe7
        370d34:	2f2f8d48 	swics	0x002f8d48
        370d38:	2f47abf1 	swics	0x0047abf1
        370d3c:	2f5fbbda 	swics	0x005fbbda
        370d40:	2f77bcfc 	swics	0x0077bcfc
        370d44:	2f8faf50 	swics	0x008faf50
        370d48:	2fa792ce 	swics	0x00a792ce
        370d4c:	2fbf676e 	swics	0x00bf676e
        370d50:	2fd72d2a 	swics	0x00d72d2a
        370d54:	2feee3f9 	swics	0x00eee3f9
        370d58:	30068bd5 	ldrccd	r8, [r6], -r5
        370d5c:	301e24b6 	ldrcch	r2, [lr], -r6
        370d60:	3035ae94 	mlaccs	r5, r4, lr, sl
        370d64:	304d2969 	subcc	r2, sp, r9, ror #18
        370d68:	3064952c 	rsbcc	r9, r4, ip, lsr #10
        370d6c:	307bf1d8 	ldrccsb	pc, [fp], -#24
        370d70:	30933f63 	addccs	r3, r3, r3, ror #30
        370d74:	30aa7dc8 	adccc	r7, sl, r8, asr #27
        370d78:	30c1acff 	strccd	sl, [r1], #207
        370d7c:	30d8cd00 	sbcccs	ip, r8, r0, lsl #26
        370d80:	30efddc4 	rsccc	sp, pc, r4, asr #27
        370d84:	3106df45 	tstcc	r6, r5, asr #30
        370d88:	311dd17b 	tstcc	sp, fp, ror r1
        370d8c:	3134b45f 	teqcc	r4, pc, asr r4
        370d90:	314b87e9 	smlalttcc	r8, fp, r9, r7
        370d94:	31624c13 	cmncc	r2, r3, lsl ip
        370d98:	317900d6 	ldrccsb	r0, [r9, -#6]!
        370d9c:	318fa62a 	orrcc	sl, pc, sl, lsr #12
        370da0:	31a63c08 	movcc	r3, r8, lsl #24
        370da4:	31bcc26a 	movccs	ip, sl, ror #4
        370da8:	31d33948 	bicccs	r3, r3, r8, asr #18
        370dac:	31e9a09b 	strccb	sl, [r9, #11]!
        370db0:	31fff85c 	mvnccs	pc, ip, asr r8
        370db4:	32164085 	andccs	r4, r6, #133	; 0x85
        370db8:	322c790f 	eorcc	r7, ip, #245760	; 0x3c000
        370dbc:	3242a1f1 	subcc	sl, r2, #1073741884	; 0x4000003c
        370dc0:	3258bb27 	subccs	fp, r8, #39936	; 0x9c00
        370dc4:	326ec4a7 	rsbcc	ip, lr, #-1493172224	; 0xa7000000
        370dc8:	3284be6d 	addcc	fp, r4, #1744	; 0x6d0
        370dcc:	329aa871 	addccs	sl, sl, #7405568	; 0x710000
        370dd0:	32b082ab 	adcccs	r8, r0, #-1342177270	; 0xb000000a
        370dd4:	32c64d16 	sbccc	r4, r6, #1408	; 0x580
        370dd8:	32dc07ab 	sbcccs	r0, ip, #44826624	; 0x2ac0000
        370ddc:	32f1b262 	rscccs	fp, r1, #536870918	; 0x20000006
        370de0:	33074d35 	tstcc	r7, #3392	; 0xd40
        370de4:	331cd81d 	tstcc	ip, #1900544	; 0x1d0000
        370de8:	33325313 	teqcc	r2, #1275068416	; 0x4c000000
        370dec:	3347be12 	cmpcc	r7, #288	; 0x120
        370df0:	335d1911 	cmpcc	sp, #278528	; 0x44000
        370df4:	3372640b 	cmncc	r2, #184549376	; 0xb000000
        370df8:	33879ef9 	orrcc	r9, r7, #3984	; 0xf90
        370dfc:	339cc9d4 	orrccs	ip, ip, #3473408	; 0x350000
        370e00:	33b1e495 	movccs	lr, #-1795162112	; 0x95000000
        370e04:	33c6ef37 	biccc	lr, r6, #220	; 0xdc
        370e08:	33dbe9b2 	bicccs	lr, fp, #2916352	; 0x2c8000
        370e0c:	33f0d3ff 	mvnccs	sp, #-67108861	; 0xfc000003
        370e10:	3405ae19 	strcc	sl, [r5], -#3609
        370e14:	341a77f9 	ldrcc	r7, [sl], -#2041
        370e18:	342f3198 	strcct	r3, [pc], #198	; 370e20 <quarterSineWaveTable+0x6dc>
        370e1c:	3443daf0 	strccb	sp, [r3], -#2800
        370e20:	345873fb 	ldrccb	r7, [r8], -#1019
        370e24:	346cfcb2 	strccbt	pc, [ip], -#3250
        370e28:	3481750e 	strcc	r7, [r1], #1294
        370e2c:	3495dd09 	ldrcc	sp, [r5], #3337
        370e30:	34aa349e 	strcct	r3, [sl], #1182
        370e34:	34be7bc4 	ldrcct	r7, [lr], #3012
        370e38:	34d2b278 	ldrccb	fp, [r2], #632
        370e3c:	34e6d8b0 	strccbt	sp, [r6], #2224
        370e40:	34faee69 	ldrccbt	lr, [sl], #3689
        370e44:	350ef39b 	strcc	pc, [lr, -#923]
        370e48:	3522e840 	strcc	lr, [r2, -#2112]!
        370e4c:	3536cc52 	ldrcc	ip, [r6, -#3154]!
        370e50:	354a9fca 	strccb	r9, [sl, -#4042]
        370e54:	355e62a3 	ldrccb	r6, [lr, -#675]
        370e58:	357214d6 	ldrccb	r1, [r2, -#1238]!
        370e5c:	3585b65e 	strcc	fp, [r5, #1630]
        370e60:	35994733 	ldrcc	r4, [r9, #1843]
        370e64:	35acc751 	strcc	ip, [ip, #1873]!
        370e68:	35c036b0 	strccb	r3, [r0, #1712]
        370e6c:	35d3954b 	ldrccb	r9, [r3, #1355]
        370e70:	35e6e31c 	strccb	lr, [r6, #796]!
        370e74:	35fa201d 	ldrccb	r2, [sl, #29]!
        370e78:	360d4c47 	strcc	r4, [sp], -r7, asr #24
        370e7c:	36206795 	undefined
        370e80:	36337201 	ldrcct	r7, [r3], -r1, lsl #4
        370e84:	36466b85 	strccb	r6, [r6], -r5, lsl #23
        370e88:	3659541b 	undefined
        370e8c:	366c2bbd 	undefined
        370e90:	367ef265 	ldrccbt	pc, [lr], -r5, ror #4
        370e94:	3691a80d 	ldrcc	sl, [r1], sp, lsl #16
        370e98:	36a44cb0 	undefined
        370e9c:	36b6e047 	ldrcct	lr, [r6], r7, asr #32
        370ea0:	36c962cd 	strccb	r6, [r9], sp, asr #5
        370ea4:	36dbd43c 	undefined
        370ea8:	36ee348f 	strccbt	r3, [lr], pc, lsl #9
        370eac:	370083bf 	undefined
        370eb0:	3712c1c7 	ldrcc	ip, [r2, -r7, asr #3]
        370eb4:	3724eea2 	strcc	lr, [r4, -r2, lsr #29]!
        370eb8:	37370a49 	ldrcc	r0, [r7, -r9, asr #20]!
        370ebc:	374914b6 	undefined
        370ec0:	375b0de6 	ldrccb	r0, [fp, -r6, ror #27]
        370ec4:	376cf5d0 	undefined
        370ec8:	377ecc71 	undefined
        370ecc:	379091c2 	ldrcc	r9, [r0, r2, asr #3]
        370ed0:	37a245be 	undefined
        370ed4:	37b3e860 	ldrcc	lr, [r3, r0, ror #16]!
        370ed8:	37c579a2 	strccb	r7, [r5, r2, lsr #19]
        370edc:	37d6f97e 	undefined
        370ee0:	37e867ef 	strccb	r6, [r8, pc, ror #15]!
        370ee4:	37f9c4ef 	ldrccb	ip, [r9, pc, ror #9]!
        370ee8:	380b107a 	stmccda	fp, {r1, r3, r4, r5, r6, ip}
        370eec:	381c4a89 	ldmccda	ip, {r0, r3, r7, r9, fp, lr}
        370ef0:	382d7318 	stmccda	sp!, {r3, r4, r8, r9, ip, sp, lr}
        370ef4:	383e8a21 	ldmccda	lr!, {r0, r5, r9, fp, pc}
        370ef8:	384f8f9f 	stmccda	pc, {r0, r1, r2, r3, r4, r7, r8, r9, sl, fp, pc}^
        370efc:	3860838b 	stmccda	r0!, {r0, r1, r3, r7, r8, r9, pc}^
        370f00:	387165e3 	ldmccda	r1!, {r0, r1, r5, r6, r7, r8, sl, sp, lr}^
        370f04:	3882369e 	stmccia	r2, {r1, r2, r3, r4, r7, r9, sl, ip, sp}
        370f08:	3892f5ba 	ldmccia	r2, {r1, r3, r4, r5, r7, r8, sl, ip, sp, lr, pc}
        370f0c:	38a3a330 	stmccia	r3!, {r4, r5, r8, r9, sp, pc}
        370f10:	38b43efb 	ldmccia	r4!, {r0, r1, r3, r4, r5, r6, r7, r9, sl, fp, ip, sp}
        370f14:	38c4c915 	stmccia	r4, {r0, r2, r4, r8, fp, lr, pc}^
        370f18:	38d5417b 	ldmccia	r5, {r0, r1, r3, r4, r5, r6, r8, lr}^
        370f1c:	38e5a827 	stmccia	r5!, {r0, r1, r2, r5, fp, sp, pc}^
        370f20:	38f5fd13 	ldmccia	r5!, {r0, r1, r4, r8, sl, fp, ip, sp, lr, pc}^
        370f24:	3906403a 	stmccdb	r6, {r1, r3, r4, r5, lr}
        370f28:	39167198 	ldmccdb	r6, {r3, r4, r7, r8, ip, sp, lr}
        370f2c:	39269127 	stmccdb	r6!, {r0, r1, r2, r5, r8, ip, pc}
        370f30:	39369ee2 	ldmccdb	r6!, {r1, r5, r6, r7, r9, sl, fp, ip, pc}
        370f34:	39469ac5 	stmccdb	r6, {r0, r2, r6, r7, r9, fp, ip, pc}^
        370f38:	395684ca 	ldmccdb	r6, {r1, r3, r6, r7, sl, pc}^
        370f3c:	39665ced 	stmccdb	r6!, {r0, r2, r3, r5, r6, r7, sl, fp, ip, lr}^
        370f40:	39762328 	ldmccdb	r6!, {r3, r5, r8, r9, sp}^
        370f44:	3985d776 	stmccib	r5, {r1, r2, r4, r5, r6, r8, r9, sl, ip, lr, pc}
        370f48:	399579d3 	ldmccib	r5, {r0, r1, r4, r6, r7, r8, fp, ip, sp, lr}
        370f4c:	39a50a3a 	stmccib	r5!, {r1, r3, r4, r5, r9, fp}
        370f50:	39b488a5 	ldmccib	r4!, {r0, r2, r5, r7, fp, pc}
        370f54:	39c3f511 	stmccib	r3, {r0, r4, r8, sl, ip, sp, lr, pc}^
        370f58:	39d34f78 	ldmccib	r3, {r3, r4, r5, r6, r8, r9, sl, fp, lr}^
        370f5c:	39e297d5 	stmccib	r2!, {r0, r2, r4, r6, r7, r8, r9, sl, ip, pc}^
        370f60:	39f1ce24 	ldmccib	r1!, {r2, r5, r9, sl, fp, lr, pc}^
        370f64:	3a00f260 	bcc	3ad8ec <SWIBoot+0x254>
        370f68:	3a100484 	bcc	772180 <ROM$$Size+0x52534>
        370f6c:	3a1f048b 	bcc	b321a0 <ROM$$Size+0x412554>
        370f70:	3a2df272 	bcc	eed940 <ROM$$Size+0x7cdcf4>
        370f74:	3a3cce32 	bcc	12a4844 <ROM$$Size+0xb84bf8>
        370f78:	3a4b97c8 	bcc	1656ea0 <ROM$$Size+0xf37254>
        370f7c:	3a5a4f2f 	bcc	1a04c40 <$__pvfn(void)+0x9c4>
        370f80:	3a68f462 	bcc	1dae110 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x19d8b8>
        370f84:	3a77875d 	bcc	2152d00 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x5424a8>
        370f88:	3a86081c 	bcc	fe4f3000 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc8e27a8>
        370f8c:	3a947699 	bcc	fe88e9f8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcc7e1a0>
        370f90:	3aa2d2d0 	bcc	fec25ad8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd015280>
        370f94:	3ab11cbc 	bcc	fefb828c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd3a7a34>
        370f98:	3abf545b 	bcc	ff34610c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd7358b4>
        370f9c:	3acd79a5 	bcc	ff6cf638 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdabede0>
        370fa0:	3adb8c99 	bcc	ffa5420c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfde439b4>
        370fa4:	3ae98d30 	bcc	ffdd446c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe1c3c14>
        370fa8:	3af77b67 	bcc	14fd4c <TP3Tool::BindStart(void)+0x30>
        370fac:	3b055739 	blcc	4c6c98 <SYMsetmarginbounds+0x258>
        370fb0:	3b1320a2 	blcc	839240 <ROM$$Size+0x1195f4>
        370fb4:	3b20d79e 	blcc	ba6e34 <ROM$$Size+0x4871e8>
        370fb8:	3b2e7c28 	blcc	f10060 <ROM$$Size+0x7f0414>
        370fbc:	3b3c0e3c 	blcc	12748b4 <ROM$$Size+0xb54c68>
        370fc0:	3b498dd7 	blcc	15d4724 <ROM$$Size+0xeb4ad8>
        370fc4:	3b56faf3 	blcc	192fb98 <ROM$$Size+0x120ff4c>
        370fc8:	3b64558c 	blcc	1c86600 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x75da8>
        370fcc:	3b719d9f 	blcc	1fd8650 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x3c7df8>
        370fd0:	3b7ed327 	blcc	2325c74 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x71541c>
        370fd4:	3b8bf620 	blcc	fe66e85c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfca5e004>
        370fd8:	3b990686 	blcc	fe9b29f8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcda21a0>
        370fdc:	3ba60455 	blcc	fecf2138 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd0e18e0>
        370fe0:	3bb2ef89 	blcc	ff02ce0c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd41c5b4>
        370fe4:	3bbfc81d 	blcc	ff363060 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd752808>
        370fe8:	3bcc8e0f 	blcc	ff69482c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfda83fd4>
        370fec:	3bd94159 	blcc	ff9c1558 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfddb0d00>
        370ff0:	3be5e1f8 	blcc	ffce97d8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe0d8f80>
        370ff4:	3bf26fe8 	blcc	cf9c <Image$$root$$Length+0x7cac>
        370ff8:	3bfeeb26 	blcc	32bc98 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x1cc>
        370ffc:	3c0b53ac 	stccc	3, cr5, [fp], -#688
        371000:	3c17a977 	ldccc	9, cr10, [r7], -#476
        371004:	3c23ec84 	stccc	12, cr14, [r3], -#528
        371008:	3c301ccf 	ldccc	12, cr1, [r0], -#828
        37100c:	3c3c3a53 	ldccc	10, cr3, [ip], -#332
        371010:	3c48450d 	mcrrcc	5, 0, r4, r8, cr13
        371014:	3c543cfa 	mrrccc	12, 15, r3, r4, cr10
        371018:	3c602215 	sfmcc	f2, 2, [r0], -#84
        37101c:	3c6bf45a 	stcccl	4, cr15, [fp], -#360
        371020:	3c77b3c7 	ldcccl	3, cr11, [r7], -#796
        371024:	3c836057 	stccc	0, cr6, [r3], #348
        371028:	3c8efa08 	stccc	10, cr15, [lr], #32
        37102c:	3c9a80d4 	ldccc	0, cr8, [sl], #848
        371030:	3ca5f4b9 	stccc	4, cr15, [r5], #740
        371034:	3cb155b3 	ldccc	5, cr5, [r1], #716
        371038:	3cbca3be 	ldccc	3, cr10, [ip], #760
        37103c:	3cc7ded8 	stcccl	14, cr13, [r7], #864
        371040:	3cd306fb 	ldcccl	6, cr0, [r3], #1004
        371044:	3cde1c26 	ldcccl	12, cr1, [lr], #152
        371048:	3ce91e54 	stcccl	14, cr1, [r9], #336
        37104c:	3cf40d83 	ldcccl	13, cr0, [r4], #524
        371050:	3cfee9ae 	ldcccl	9, cr14, [lr], #696
        371054:	3d09b2d2 	sfmcc	f3, 1, [r9, -#840]
        371058:	3d1468ec 	ldccc	8, cr6, [r4, -#944]
        37105c:	3d1f0bf9 	ldccc	11, cr0, [pc, -#996]
        371060:	3d299bf5 	stccc	11, cr9, [r9, -#980]!
        371064:	3d3418dc 	ldccc	8, cr1, [r4, -#880]!
        371068:	3d3e82ad 	lfmcc	f0, 1, [lr, -#692]!
        37106c:	3d48d963 	stcccl	9, cr13, [r8, -#396]
        371070:	3d531cfb 	ldcccl	12, cr1, [r3, -#1004]
        371074:	3d5d4d73 	ldcccl	13, cr4, [sp, -#460]
        371078:	3d676ac6 	stcccl	10, cr6, [r7, -#792]!
        37107c:	3d7174f1 	ldcccl	4, cr7, [r1, -#964]!
        371080:	3d7b6bf3 	ldcccl	11, cr6, [fp, -#972]!
        371084:	3d854fc6 	stccc	15, cr4, [r5, #792]
        371088:	3d8f2069 	stccc	0, cr2, [pc, #420]
        37108c:	3d98ddd9 	ldccc	13, cr13, [r8, #868]
        371090:	3da28811 	stccc	8, cr8, [r2, #68]!
        371094:	3dac1f10 	stccc	15, cr1, [ip, #64]!
        371098:	3db5a2d2 	lfmcc	f2, 1, [r5, #840]!
        37109c:	3dbf1354 	ldccc	3, cr1, [pc, #336]!
        3710a0:	3dc87094 	stcccl	0, cr7, [r8, #592]
        3710a4:	3dd1ba8e 	ldcccl	10, cr11, [r1, #568]
        3710a8:	3ddaf140 	ldfccp	f7, [sl, #256]
        3710ac:	3de414a6 	stcccl	4, cr1, [r4, #664]!
        3710b0:	3ded24be 	stcccl	4, cr2, [sp, #760]!
        3710b4:	3df62185 	ldfcce	f2, [r6, #532]!
        3710b8:	3dff0af8 	ldcccl	10, cr0, [pc, #992]!
        3710bc:	3e07e114 	mcrcc	1, 0, lr, cr7, cr4, {0}
        3710c0:	3e10a3d7 	mrccc	3, 0, sl, cr0, cr7, {6}
        3710c4:	3e19533e 	mrccc	3, 0, r5, cr9, cr14, {1}
        3710c8:	3e21ef47 	cdpcc	15, 2, cr14, cr1, cr7, {2}
        3710cc:	3e2a77ed 	cdpcc	7, 2, cr7, cr10, cr13, {7}
        3710d0:	3e32ed30 	mrccc	13, 1, lr, cr2, cr0, {1}
        3710d4:	3e3b4f0b 	cdpcc	15, 3, cr4, cr11, cr11, {0}
        3710d8:	3e439d7e 	mcrcc	13, 2, r9, cr3, cr14, {3}
        3710dc:	3e4bd884 	cdpcc	8, 4, cr13, cr11, cr4, {4}
        3710e0:	3e54001c 	mrccc	0, 2, r0, cr4, cr12, {0}
        3710e4:	3e5c1442 	cdpcc	4, 5, cr1, cr12, cr2, {2}
        3710e8:	3e6414f5 	mcrcc	4, 3, r1, cr4, cr5, {7}
        3710ec:	3e6c0232 	mcrcc	2, 3, r0, cr12, cr2, {1}
        3710f0:	3e73dbf6 	mrccc	11, 3, sp, cr3, cr6, {7}
        3710f4:	3e7ba23f 	mrccc	2, 3, sl, cr11, cr15, {1}
        3710f8:	3e83550b 	cdpcc	5, 8, cr5, cr3, cr11, {0}
        3710fc:	3e8af456 	mcrcc	4, 4, pc, cr10, cr6, {2}
        371100:	3e928020 	cdpcc	0, 9, cr8, cr2, cr0, {1}
        371104:	3e99f864 	cdpcc	8, 9, cr15, cr9, cr4, {3}
        371108:	3ea15d22 	cdpcc	13, 10, cr5, cr1, cr2, {1}
        37110c:	3ea8ae57 	mcrcc	14, 5, sl, cr8, cr7, {2}
        371110:	3eafec00 	cdpcc	12, 10, cr14, cr15, cr0, {0}
        371114:	3eb7161b 	mrccc	6, 5, r1, cr7, cr11, {0}
        371118:	3ebe2ca6 	cdpcc	12, 11, cr2, cr14, cr6, {5}
        37111c:	3ec52f9f 	mcrcc	15, 6, r2, cr5, cr15, {4}
        371120:	3ecc1f04 	cdpcc	15, 12, cr1, cr12, cr4, {0}
        371124:	3ed2fad2 	mrccc	10, 6, pc, cr2, cr2, {6}
        371128:	3ed9c307 	cdpcc	3, 13, cr12, cr9, cr7, {0}
        37112c:	3ee077a2 	cdpcc	7, 14, cr7, cr0, cr2, {5}
        371130:	3ee7189f 	mcrcc	8, 7, r1, cr7, cr15, {4}
        371134:	3eeda5fd 	mcrcc	5, 7, sl, cr13, cr13, {7}
        371138:	3ef41fbb 	mrccc	15, 7, r1, cr4, cr11, {5}
        37113c:	3efa85d5 	mrccc	5, 7, r8, cr10, cr5, {6}
        371140:	3f00d84a 	swicc	0x0000d84a
        371144:	3f071719 	swicc	0x00071719
        371148:	3f0d423e 	swicc	0x000d423e
        37114c:	3f1359b8 	swicc	0x001359b8
        371150:	3f195d85 	swicc	0x00195d85
        371154:	3f1f4da4 	swicc	0x001f4da4
        371158:	3f252a13 	swicc	0x00252a13
        37115c:	3f2af2ce 	swicc	0x002af2ce
        371160:	3f30a7d6 	swicc	0x0030a7d6
        371164:	3f364928 	swicc	0x00364928
        371168:	3f3bd6c2 	swicc	0x003bd6c2
        37116c:	3f4150a3 	swicc	0x004150a3
        371170:	3f46b6c8 	swicc	0x0046b6c8
        371174:	3f4c0931 	swicc	0x004c0931
        371178:	3f5147db 	swicc	0x005147db
        37117c:	3f5672c5 	swicc	0x005672c5
        371180:	3f5b89ed 	swicc	0x005b89ed
        371184:	3f608d52 	swicc	0x00608d52
        371188:	3f657cf2 	swicc	0x00657cf2
        37118c:	3f6a58cb 	swicc	0x006a58cb
        371190:	3f6f20dd 	swicc	0x006f20dd
        371194:	3f73d525 	swicc	0x0073d525
        371198:	3f7875a3 	swicc	0x007875a3
        37119c:	3f7d0254 	swicc	0x007d0254
        3711a0:	3f817b37 	swicc	0x00817b37
        3711a4:	3f85e04b 	swicc	0x0085e04b
        3711a8:	3f8a318e 	swicc	0x008a318e
        3711ac:	3f8e6f00 	swicc	0x008e6f00
        3711b0:	3f92989e 	swicc	0x0092989e
        3711b4:	3f96ae68 	swicc	0x0096ae68
        3711b8:	3f9ab05c 	swicc	0x009ab05c
        3711bc:	3f9e9e79 	swicc	0x009e9e79
        3711c0:	3fa278be 	swicc	0x00a278be
        3711c4:	3fa63f29 	swicc	0x00a63f29
        3711c8:	3fa9f1ba 	swicc	0x00a9f1ba
        3711cc:	3fad906f 	swicc	0x00ad906f
        3711d0:	3fb11b47 	swicc	0x00b11b47
        3711d4:	3fb49241 	swicc	0x00b49241
        3711d8:	3fb7f55c 	swicc	0x00b7f55c
        3711dc:	3fbb4497 	swicc	0x00bb4497
        3711e0:	3fbe7ff0 	swicc	0x00be7ff0
        3711e4:	3fc1a768 	swicc	0x00c1a768
        3711e8:	3fc4bafc 	swicc	0x00c4bafc
        3711ec:	3fc7baac 	swicc	0x00c7baac
        3711f0:	3fcaa677 	swicc	0x00caa677
        3711f4:	3fcd7e5c 	swicc	0x00cd7e5c
        3711f8:	3fd0425a 	swicc	0x00d0425a
        3711fc:	3fd2f270 	swicc	0x00d2f270
        371200:	3fd58e9e 	swicc	0x00d58e9e
        371204:	3fd816e2 	swicc	0x00d816e2
        371208:	3fda8b3d 	swicc	0x00da8b3d
        37120c:	3fdcebac 	swicc	0x00dcebac
        371210:	3fdf382f 	swicc	0x00df382f
        371214:	3fe170c7 	swicc	0x00e170c7
        371218:	3fe39571 	swicc	0x00e39571
        37121c:	3fe5a62d 	swicc	0x00e5a62d
        371220:	3fe7a2fb 	swicc	0x00e7a2fb
        371224:	3fe98bda 	swicc	0x00e98bda
        371228:	3feb60c9 	swicc	0x00eb60c9
        37122c:	3fed21c8 	swicc	0x00ed21c8
        371230:	3feeced6 	swicc	0x00eeced6
        371234:	3ff067f3 	swicc	0x00f067f3
        371238:	3ff1ed1e 	swicc	0x00f1ed1e
        37123c:	3ff35e57 	swicc	0x00f35e57
        371240:	3ff4bb9e 	swicc	0x00f4bb9e
        371244:	3ff604f1 	swicc	0x00f604f1
        371248:	3ff73a51 	swicc	0x00f73a51
        37124c:	3ff85bbc 	swicc	0x00f85bbc
        371250:	3ff96934 	swicc	0x00f96934
        371254:	3ffa62b7 	swicc	0x00fa62b7
        371258:	3ffb4845 	swicc	0x00fb4845
        37125c:	3ffc19de 	swicc	0x00fc19de
        371260:	3ffcd782 	swicc	0x00fcd782
        371264:	3ffd812f 	swicc	0x00fd812f
        371268:	3ffe16e7 	swicc	0x00fe16e7
        37126c:	3ffe98a9 	swicc	0x00fe98a9
        371270:	3fff0675 	swicc	0x00ff0675
        371274:	3fff604b 	swicc	0x00ff604b
        371278:	3fffa62a 	swicc	0x00ffa62a
        37127c:	3fffd812 	swicc	0x00ffd812
        371280:	3ffff604 	swicc	0x00fff604
        371284:	40000000 	andmi	r0, r0, r0
    */
}

/**
 * Symbol: quad
 * Address: 00374370
 */
void globals::quad() {
    /*
        374370:	00000001 	andeq	r0, r0, r1
        374374:	00040009 	andeq	r0, r4, r9
        374378:	00100019 	andeqs	r0, r0, r9, lsl r0
        37437c:	00240031 	eoreq	r0, r4, r1, lsr r0
        374380:	00400051 	subeq	r0, r0, r1, asr r0
        374384:	00640079 	rsbeq	r0, r4, r9, ror r0
        374388:	009000a9 	addeqs	r0, r0, r9, lsr #1
        37438c:	00c400e1 	sbceq	r0, r4, r1, ror #1
        374390:	01000121 	tsteq	r0, r1, lsr #2
        374394:	01440169 	cmpeq	r4, r9, ror #2
        374398:	019001b9 	ldreqh	r0, [r0, r9]
        37439c:	01e40211 	mvneq	r0, r1, lsl r2
        3743a0:	02400271 	subeq	r0, r0, #268435463	; 0x10000007
        3743a4:	02a402d9 	adceq	r0, r4, #-1879048179	; 0x9000000d
        3743a8:	03100349 	tsteq	r0, #603979777	; 0x24000001
        3743ac:	038403c1 	orreq	r0, r4, #67108867	; 0x4000003
        3743b0:	04000441 	streq	r0, [r0], -#1089
        3743b4:	048404c9 	streq	r0, [r4], #1225
        3743b8:	05100559 	ldreq	r0, [r0, -#1369]
        3743bc:	05a405f1 	streq	r0, [r4, #1521]!
        3743c0:	06400691 	undefined
        3743c4:	06e40739 	undefined
        3743c8:	079007e9 	ldreq	r0, [r0, r9, ror #15]
        3743cc:	084408a1 	stmeqda	r4, {r0, r5, r7, fp}^
        3743d0:	09000961 	stmeqdb	r0, {r0, r5, r6, r8, fp}
        3743d4:	09c40a29 	stmeqib	r4, {r0, r3, r5, r9, fp}^
        3743d8:	0a900af9 	beq	fe776fc4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcb6676c>
        3743dc:	0b640bd1 	bleq	1c77328 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x66ad0>
        3743e0:	0c400cb1 	mcrreq	12, 11, r0, r0, cr1
        3743e4:	0d240d99 	stceq	13, cr0, [r4, -#612]!
        3743e8:	0e100e89 	cdpeq	14, 1, cr0, cr0, cr9, {4}
        3743ec:	0f040f81 	swieq	0x00040f81
    */
}

/**
 * Symbol: qdConstants
 * Address: 00380bcc
 */
void globals::qdConstants() {
    /*
        380bcc:	01b54a38 	moveqs	r4, r8, lsr sl
        380bd0:	01b54a3c 	moveqs	r4, ip, lsr sl
        380bd4:	01b54a44 	moveqs	r4, r4, asr #20
        380bd8:	01b54a48 	moveqs	r4, r8, asr #20
        380bdc:	01b54a4c 	moveqs	r4, ip, asr #20
        380be0:	01b54a50 	moveqs	r4, r0, asr sl
        380be4:	01b54a54 	moveqs	r4, r4, asr sl
        380be8:	01b54a40 	moveqs	r4, r0, asr #20
        380bec:	01b54a58 	moveqs	r4, r8, asr sl
        380bf0:	01b54a5c 	moveqs	r4, ip, asr sl
        380bf4:	01b54a64 	moveqs	r4, r4, ror #20
        380bf8:	01b54a68 	moveqs	r4, r8, ror #20
        380bfc:	01b54a60 	moveqs	r4, r0, ror #20
        380c00:	01b54a6c 	moveqs	r4, ip, ror #20
        380c04:	003475ec 	eoreqs	r7, r4, ip, ror #11
        380c08:	00347694 	mlaeqs	r4, r4, r6, r7
        380c0c:	0034763c 	eoreqs	r7, r4, ip, lsr r6
        380c10:	00050400 	andeq	r0, r5, r0, lsl #8
        380c14:	03000000 	tsteq	r0, #0	; 0x0
        380c18:	02000000 	andeq	r0, r0, #0	; 0x0
        380c1c:	00000000 	andeq	r0, r0, r0
        380c20:	01000000 	tsteq	r0, r0
        380c30:	00000302 	andeq	r0, r0, r2, lsl #6
        380c34:	00010000 	andeq	r0, r1, r0
        380c38:	00000000 	andeq	r0, r0, r0
        380c3c:	00000001 	andeq	r0, r0, r1
        380c40:	00000003 	andeq	r0, r0, r3
        380c44:	0000000f 	andeq	r0, r0, pc
        380c48:	000000ff 	streqd	r0, [r0], -pc
        380c4c:	0000ffff 	streqd	pc, [r0], -pc
        380c50:	ffffffff 	swinv	0x00ffffff
        380c54:	001f0f00 	andeqs	r0, pc, r0, lsl #30
        380c58:	07000000 	streq	r0, [r0, -r0]
        380c5c:	03000000 	tsteq	r0, #0	; 0x0
        380c60:	00000000 	andeq	r0, r0, r0
        380c64:	01000000 	tsteq	r0, r0
        380c74:	00000001 	andeq	r0, r0, r1
        380c78:	00020000 	andeq	r0, r2, r0
        380c7c:	00030000 	andeq	r0, r3, r0
        380c80:	00000000 	andeq	r0, r0, r0
        380c84:	00040000 	andeq	r0, r4, r0
        380c94:	00050000 	andeq	r0, r5, r0
        380c98:	010202ff 	streqd	r0, [r2, -pc]
        380c9c:	ffff0000 	swinv	0x00ff0000
        380cb0:	00000001 	andeq	r0, r0, r1
        380cbc:	01020202 	tsteq	r2, r2, lsl #4
        380cc0:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        380cc4:	02030303 	andeq	r0, r3, #201326592	; 0xc000000
        380cc8:	03040404 	tsteq	r4, #67108864	; 0x4000000
        380ccc:	05050607 	streq	r0, [r5, -#1543]
        380cd0:	08090b0e 	stmeqda	r9, {r1, r2, r3, r8, r9, fp}
        380cd4:	131c39ff 	tstne	ip, #4177920	; 0x3fc000
        380cd8:	00000478 	andeq	r0, r0, r8, ror r4
        380cdc:	08f10d6b 	ldmeqia	r1!, {r0, r1, r3, r5, r6, r8, sl, fp}^
        380ce0:	11e71666 	mvnne	r1, r6, ror #12
        380ce4:	1ae81f6f 	bne	ffd88aa8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe178250>
        380ce8:	23fa288c 	mvncss	r2, #9175040	; 0x8c0000
        380cec:	2d2431c3 	stfcss	f3, [r4, -#780]!
        380cf0:	366a3b1a 	undefined
        380cf4:	3fd44498 	swicc	0x00d44498
        380cf8:	49684e44 	stmmidb	r8!, {r2, r6, r9, sl, fp, lr}^
        380cfc:	532e5826 	teqpl	lr, #2490368	; 0x260000
        380d00:	5d2d6245 	sfmpl	f6, 4, [sp, -#276]!
        380d04:	676e6caa 	strvsb	r6, [lr, -sl, lsr #25]!
        380d08:	71fb7760 	mvnvcs	r7, r0, ror #14
        380d0c:	7cdc8270 	lfmvc	f0, 3, [ip], #448
        380d10:	881e8de7 	ldmhida	lr, {r0, r1, r2, r5, r6, r7, r8, sl, fp, pc}
        380d14:	93cd99d2 	bicls	r9, sp, #3440640	; 0x348000
        380d18:	9ff7a640 	swils	0x00f7a640
        380d1c:	acadb341 	stcge	3, cr11, [sp], #260
        380d20:	b9ffc0e9 	ldmltib	pc!, {r0, r3, r5, r6, r7, lr, pc}^
        380d24:	c802cf4e 	stmgtda	r2, {r1, r2, r3, r6, r8, r9, sl, fp, lr, pc}
        380d28:	d6cfde8a 	strleb	sp, [pc], sl, lsl #29
        380d2c:	e681eeb9 	undefined
        380d30:	f7370000 	ldrnv	r0, [r7, -r0]!
        380d34:	09191287 	ldmeqdb	r9, {r0, r1, r2, r7, r9, ip}
        380d38:	1c51267f 	mrrcne	6, 7, r2, r1, cr15
        380d3c:	31173c22 	tstcc	r7, r2, lsr #24
        380d40:	47aa53b9 	undefined
        380d44:	605b6d9b 	ldrvsb	r6, [fp], -#219
        380d48:	7b898a35 	blvc	fe5e3624 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc9d2dcc>
        380d4c:	99afaa0e 	stmlsib	pc!, {r1, r2, r3, r9, fp, sp, pc}
        380d50:	bb68cdd6 	bllt	1db44b0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x1a3c58>
        380d54:	e177f66e 	cmnp	r7, lr, ror #12
        380d58:	0ce124fe 	stceql	4, cr2, [r1], #1016
        380d5c:	3efc5b19 	mrccc	11, 7, r5, cr12, cr9, {0}
        380d60:	799f9ae7 	ldmvcib	pc, {r0, r1, r2, r5, r6, r7, r9, fp, ip, pc}
        380d64:	bf5be77a 	swilt	0x005be77a
        380d68:	13e34556 	mvnne	r4, #360710144	; 0x15800000
        380d6c:	7cc7bb68 	stcvcl	11, cr11, [r7], #416
        380d70:	02c254db 	sbceq	r5, r2, #-620756992	; 0xdb000000
        380d74:	b4622501 	strltbt	r2, [r2], -#1281
        380d78:	abd95051 	blge	ff9d4ec4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfddc466c>
        380d7c:	1d8824f3 	stcne	4, cr2, [r8, #972]
        380d80:	83ad6e17 	movhi	r6, #368	; 0x170
        380d84:	4cf514bd 	ldcmil	4, cr1, [r5], #756
        380d88:	a2d74a30 	sbcges	r4, r7, #196608	; 0x30000
        380d8c:	ffff0001 	swinv	0x00ff0001
        380d90:	02030404 	andeq	r0, r3, #67108864	; 0x4000000
        380d94:	05060708 	streq	r0, [r6, -#1800]
        380d98:	090a0b0b 	stmeqdb	sl, {r0, r1, r3, r8, r9, fp}
        380d9c:	0c0d0e0f 	stceq	14, cr0, [sp], -#60
        380da0:	10111112 	andnes	r1, r1, r2, lsl r1
        380da4:	13141515 	tstne	r4, #88080384	; 0x5400000
        380da8:	16171818 	undefined
        380dac:	191a1b1b 	ldmnedb	sl, {r0, r1, r3, r4, r8, r9, fp, ip}
        380db0:	1c1d1d1e 	ldcne	13, cr1, [sp], -#120
        380db4:	1f1f2021 	swine	0x001f2021
        380db8:	21222323 	teqcs	r2, r3, lsr #6
        380dbc:	24242525 	strcst	r2, [r4], -#1317
        380dc0:	26272728 	strcst	r2, [r7], -r8, lsr #14
        380dc4:	2829292a 	stmcsda	r9!, {r1, r3, r5, r8, fp, sp}
        380dc8:	2a2b2b2c 	bcs	e4ba80 <ROM$$Size+0x72be34>
        380dcc:	2c2d0000 	stccs	0, cr0, [sp]
        380dd0:	0000023b 	andeq	r0, r0, fp, lsr r2
        380dd4:	000006b4 	streqh	r0, [r0], -r4
        380dd8:	00000b2d 	andeq	r0, r0, sp, lsr #22
        380ddc:	00000fa8 	andeq	r0, r0, r8, lsr #31
        380de0:	00001425 	andeq	r1, r0, r5, lsr #8
        380de4:	000018a6 	andeq	r1, r0, r6, lsr #17
        380de8:	00001d2a 	andeq	r1, r0, sl, lsr #26
        380dec:	000021b3 	streqh	r2, [r0], -r3
        380df0:	00002642 	andeq	r2, r0, r2, asr #12
        380df4:	00002ad6 	ldreqd	r2, [r0], -r6
        380df8:	00002f72 	andeq	r2, r0, r2, ror pc
        380dfc:	00003415 	andeq	r3, r0, r5, lsl r4
        380e00:	000038c0 	andeq	r3, r0, r0, asr #17
        380e04:	00003d75 	andeq	r3, r0, r5, ror sp
        380e08:	00004234 	andeq	r4, r0, r4, lsr r2
        380e0c:	000046fe 	streqd	r4, [r0], -lr
        380e10:	00004bd4 	ldreqd	r4, [r0], -r4
        380e14:	000050b7 	streqh	r5, [r0], -r7
        380e18:	000055a8 	andeq	r5, r0, r8, lsr #11
        380e1c:	00005aa7 	andeq	r5, r0, r7, lsr #21
        380e20:	00005fb6 	streqh	r5, [r0], -r6
        380e24:	000064d7 	ldreqd	r6, [r0], -r7
        380e28:	00006a09 	andeq	r6, r0, r9, lsl #20
        380e2c:	00006f4f 	andeq	r6, r0, pc, asr #30
        380e30:	000074aa 	andeq	r7, r0, sl, lsr #9
        380e34:	00007a1b 	andeq	r7, r0, fp, lsl sl
        380e38:	00007fa3 	andeq	r7, r0, r3, lsr #31
        380e3c:	00008543 	andeq	r8, r0, r3, asr #10
        380e40:	00008aff 	streqd	r8, [r0], -pc
        380e44:	000090d6 	ldreqd	r9, [r0], -r6
        380e48:	000096cb 	andeq	r9, r0, fp, asr #13
        380e4c:	00009ce0 	andeq	r9, r0, r0, ror #25
        380e50:	0000a317 	andeq	sl, r0, r7, lsl r3
        380e54:	0000a971 	andeq	sl, r0, r1, ror r9
        380e58:	0000aff1 	streqd	sl, [r0], -r1
        380e5c:	0000b69a 	muleq	r0, sl, r6
        380e60:	0000bd6e 	andeq	fp, r0, lr, ror #26
        380e64:	0000c46f 	andeq	ip, r0, pc, ror #8
        380e68:	0000cba1 	andeq	ip, r0, r1, lsr #23
        380e6c:	0000d307 	andeq	sp, r0, r7, lsl #6
        380e70:	0000daa5 	andeq	sp, r0, r5, lsr #21
        380e74:	0000e27d 	andeq	lr, r0, sp, ror r2
        380e78:	0000ea94 	muleq	r0, r4, sl
        380e7c:	0000f2ef 	andeq	pc, r0, pc, ror #5
        380e80:	0000fb92 	muleq	r0, r2, fp
        380e84:	0000ffff 	streqd	pc, [r0], -pc
        380e88:	2d303336 	ldccs	3, cr3, [r0, -#216]!
        380e8c:	383a3c3e 	ldmccda	sl!, {r1, r2, r3, r4, r5, sl, fp, ip, sp}
        380e90:	3f414243 	swicc	0x00414243
        380e94:	44454647 	strmib	r4, [r5], -#1607
        380e98:	48484949 	stmmida	r8, {r0, r3, r6, r8, fp, lr}^
        380e9c:	4a4b4b4c 	bmi	1653bd4 <ROM$$Size+0xf33f88>
        380ea0:	4c4c4d4d 	mcrrmi	13, 4, r4, ip, cr13
        380ea4:	4d4e4e4e 	stcmil	14, cr4, [lr, -#312]
        380ea8:	4f4f4f4f 	swimi	0x004f4f4f
        380eac:	50505050 	subpls	r5, r0, r0, asr r0
        380eb0:	51515151 	cmppl	r1, r1, asr r1
        380eb4:	51515252 	cmppl	r1, r2, asr r2
        380eb8:	52525252 	subpls	r5, r2, #536870917	; 0x20000005
        380ebc:	52535353 	subpls	r5, r3, #1275068417	; 0x4c000001
        380ec0:	00010481 	andeq	r0, r1, r1, lsl #9
        380ec4:	00010dc4 	andeq	r0, r1, r4, asr #27
        380ec8:	0001175f 	andeq	r1, r1, pc, asr r7
        380ecc:	0001215a 	andeq	r2, r1, sl, asr r1
        380ed0:	00012bbc 	streqh	r2, [r1], -ip
        380ed4:	0001368d 	andeq	r3, r1, sp, lsl #13
        380ed8:	000141d6 	ldreqd	r4, [r1], -r6
        380edc:	00014da0 	andeq	r4, r1, r0, lsr #27
        380ee0:	000159f6 	streqd	r5, [r1], -r6
        380ee4:	000166e6 	andeq	r6, r1, r6, ror #13
        380ee8:	0001747b 	andeq	r7, r1, fp, ror r4
        380eec:	000182c6 	andeq	r8, r1, r6, asr #5
        380ef0:	000191d6 	ldreqd	r9, [r1], -r6
        380ef4:	0001a1c1 	andeq	sl, r1, r1, asr #3
        380ef8:	0001b29a 	muleq	r1, sl, r2
        380efc:	0001c47a 	andeq	ip, r1, sl, ror r4
        380f00:	0001d77e 	andeq	sp, r1, lr, ror r7
        380f04:	0001ebc5 	andeq	lr, r1, r5, asr #23
        380f08:	00020174 	andeq	r0, r2, r4, ror r1
        380f0c:	000218b7 	streqh	r1, [r2], -r7
        380f10:	000231bd 	streqh	r3, [r2], -sp
        380f14:	00024cc2 	andeq	r4, r2, r2, asr #25
        380f18:	00026a09 	andeq	r6, r2, r9, lsl #20
        380f1c:	000289e4 	andeq	r8, r2, r4, ror #19
        380f20:	0002acb3 	streqh	sl, [r2], -r3
        380f24:	0002d2eb 	andeq	sp, r2, fp, ror #5
        380f28:	0002fd1a 	andeq	pc, r2, sl, lsl sp
        380f2c:	00032bed 	andeq	r2, r3, sp, ror #23
        380f30:	0003603d 	andeq	r6, r3, sp, lsr r0
        380f34:	00039b1b 	andeq	r9, r3, fp, lsl fp
        380f38:	0003dde0 	andeq	sp, r3, r0, ror #27
        380f3c:	00042a51 	andeq	r2, r4, r1, asr sl
        380f40:	000482bd 	streqh	r8, [r4], -sp
        380f44:	0004ea47 	andeq	lr, r4, r7, asr #20
        380f48:	00056540 	andeq	r6, r5, r0, asr #10
        380f4c:	0005f9cb 	andeq	pc, r5, fp, asr #19
        380f50:	0006b0ef 	andeq	fp, r6, pc, ror #1
        380f54:	00079883 	andeq	r9, r7, r3, lsl #17
        380f58:	0008c6e2 	andeq	ip, r8, r2, ror #13
        380f5c:	000a62a9 	andeq	r6, sl, r9, lsr #5
        380f60:	000cb4c9 	andeq	fp, ip, r9, asr #9
        380f64:	00105990 	muleqs	r0, r0, r9
        380f68:	0016e75d 	andeqs	lr, r6, sp, asr r7
        380f6c:	0026303f 	eoreq	r3, r6, pc, lsr r0
        380f70:	007296b2 	ldreqh	r9, [r2], -#98
        380f74:	ffffffff 	swinv	0x00ffffff
        380f78:	50500001 	subpls	r0, r0, r1
        380f7c:	01010800 	tsteq	r1, r0, lsl #16
        380f80:	00000005 	andeq	r0, r0, r5
        380f84:	01010502 	tsteq	r1, r2, lsl #10
        380f88:	020000ff 	andeq	r0, r0, #255	; 0xff
        380f8c:	00000101 	andeq	r0, r0, r1, lsl #2
        380f90:	01010000 	tsteq	r1, r0
    */
}

