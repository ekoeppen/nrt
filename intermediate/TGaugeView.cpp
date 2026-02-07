#include "include/TGaugeView.h"

/**
 * Symbol: TGaugeView::ClassID( const(void))
 * Address: 00188d74
 */
TGaugeView::ClassID( const(void)) {
    /*
        188d74:	e3a0005c 	mov	r0, #92	; 0x5c
        188d78:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGaugeView::DerivedFrom( const(long))
 * Address: 00188d7c
 */
TGaugeView::DerivedFrom( const(long)) {
    /*
        188d7c:	e1a0c00d 	mov	ip, sp
        188d80:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        188d84:	e24cb004 	sub	fp, ip, #4	; 0x4
        188d88:	e331005c 	teq	r1, #92	; 0x5c
        188d8c:	0a000002 	beq	188d9c <TGaugeView::DerivedFrom( const(long))+0x20>
        188d90:	eb036a0a 	bl	2635c0 <TView::DerivedFrom( const(long))>
        188d94:	e3300000 	teq	r0, #0	; 0x0
        188d98:	0a000001 	beq	188da4 <TGaugeView::DerivedFrom( const(long))+0x28>
        188d9c:	e3a00001 	mov	r0, #1	; 0x1
        188da0:	ea000000 	b	188da8 <TGaugeView::DerivedFrom( const(long))+0x2c>
        188da4:	e3a00000 	mov	r0, #0	; 0x0
        188da8:	e20000ff 	and	r0, r0, #255	; 0xff
        188dac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TGaugeView::Constructor(RefVar const &, TView *)
 * Address: 00188db0
 */
TGaugeView::Constructor(RefVar const &, TView *) {
    /*
        188db0:	e1a0c00d 	mov	ip, sp
        188db4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        188db8:	e24cb004 	sub	fp, ip, #4	; 0x4
        188dbc:	e1a04000 	mov	r4, r0
        188dc0:	eb6901c4 	bl	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
        188dc4:	e3a00064 	mov	r0, #100	; 0x64
        188dc8:	e5840030 	str	r0, [r4, #48]	; fField48
        188dcc:	e24dd004 	sub	sp, sp, #4	; 0x4
        188dd0:	e1a05004 	mov	r5, r4
        188dd4:	e3a07002 	mov	r7, #2	; 0x2
        188dd8:	e1a00007 	mov	r0, r7
        188ddc:	eb68e4da 	bl	1bc214c <$AllocateRefHandle(long)>
        188de0:	e58d0000 	str	r0, [sp]
        188de4:	e1a0200d 	mov	r2, sp
        188de8:	e59f10ac 	ldr	r1, [pc, #ac]	; 188e9c <TGaugeView::Constructor(RefVar const &, TView *)+0xec>
        188dec:	e1a00005 	mov	r0, r5
        188df0:	e5953000 	ldr	r3, [r5]
        188df4:	e1a0e00f 	mov	lr, pc
        188df8:	e283f044 	add	pc, r3, #68	; 0x44
        188dfc:	eb68e4d2 	bl	1bc214c <$AllocateRefHandle(long)>
        188e00:	e1a05000 	mov	r5, r0
        188e04:	e59d0000 	ldr	r0, [sp]
        188e08:	eb68e8eb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188e0c:	e3a06000 	mov	r6, #0	; 0x0
        188e10:	e24dd004 	sub	sp, sp, #4	; 0x4
        188e14:	e5950000 	ldr	r0, [r5]
        188e18:	e3300002 	teq	r0, #2	; 0x2
        188e1c:	0a000004 	beq	188e34 <TGaugeView::Constructor(RefVar const &, TView *)+0x84>
        188e20:	e3100003 	tst	r0, #3	; 0x3
        188e24:	01a00140 	moveq	r0, r0, asr #2
        188e28:	0a000000 	beq	188e30 <TGaugeView::Constructor(RefVar const &, TView *)+0x80>
        188e2c:	eb68e4ba 	bl	1bc211c <$_RINTError(long)>
        188e30:	e5840030 	str	r0, [r4, #48]	; fField48
        188e34:	e5846034 	str	r6, [r4, #52]	; fField52
        188e38:	e1a06004 	mov	r6, r4
        188e3c:	e1a00007 	mov	r0, r7
        188e40:	eb68e4c1 	bl	1bc214c <$AllocateRefHandle(long)>
        188e44:	e58d0000 	str	r0, [sp]
        188e48:	e1a0200d 	mov	r2, sp
        188e4c:	e59f104c 	ldr	r1, [pc, #4c]	; 188ea0 <TGaugeView::Constructor(RefVar const &, TView *)+0xf0>
        188e50:	e1a00006 	mov	r0, r6
        188e54:	e5963000 	ldr	r3, [r6]
        188e58:	e1a0e00f 	mov	lr, pc
        188e5c:	e283f044 	add	pc, r3, #68	; 0x44
        188e60:	e5850000 	str	r0, [r5]
        188e64:	e59d0000 	ldr	r0, [sp]
        188e68:	eb68e8d3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188e6c:	e5950000 	ldr	r0, [r5]
        188e70:	e3300002 	teq	r0, #2	; 0x2
        188e74:	0a000004 	beq	188e8c <TGaugeView::Constructor(RefVar const &, TView *)+0xdc>
        188e78:	e3100003 	tst	r0, #3	; 0x3
        188e7c:	01a00140 	moveq	r0, r0, asr #2
        188e80:	0a000000 	beq	188e88 <TGaugeView::Constructor(RefVar const &, TView *)+0xd8>
        188e84:	eb68e4a4 	bl	1bc211c <$_RINTError(long)>
        188e88:	e5a40034 	str	r0, [r4, #52]!	; fField52
        188e8c:	e28dd004 	add	sp, sp, #4	; 0x4
        188e90:	e1a00005 	mov	r0, r5
        188e94:	eb68e8c8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188e98:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        188e9c:	006837f8 	streqd	r3, [r8], -#120
        188ea0:	006838b0 	streqh	r3, [r8], -#128
    */
}

/**
 * Symbol: TGaugeView::SetValue(RefVar const &, RefVar const &)
 * Address: 00188ea4
 */
TGaugeView::SetValue(RefVar const &, RefVar const &) {
    /*
        188ea4:	e1a0c00d 	mov	ip, sp
        188ea8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        188eac:	e24cb004 	sub	fp, ip, #4	; 0x4
        188eb0:	e1a06000 	mov	r6, r0
        188eb4:	e1a05001 	mov	r5, r1
        188eb8:	e1a04002 	mov	r4, r2
        188ebc:	e59f0038 	ldr	r0, [pc, #38]	; 188efc <TGaugeView::SetValue(RefVar const &, RefVar const &)+0x58>
        188ec0:	e5900000 	ldr	r0, [r0]
        188ec4:	e5901000 	ldr	r1, [r0]
        188ec8:	e5950000 	ldr	r0, [r5]
        188ecc:	e5900000 	ldr	r0, [r0]
        188ed0:	eb68ecd6 	bl	1bc4230 <$EQRef__FlT1>
        188ed4:	e3300000 	teq	r0, #0	; 0x0
        188ed8:	0a000008 	beq	188f00 <TGaugeView::SetValue(RefVar const &, RefVar const &)+0x5c>
        188edc:	e5940000 	ldr	r0, [r4]
        188ee0:	e5900000 	ldr	r0, [r0]
        188ee4:	e3100003 	tst	r0, #3	; 0x3
        188ee8:	01a00140 	moveq	r0, r0, asr #2
        188eec:	0a000000 	beq	188ef4 <TGaugeView::SetValue(RefVar const &, RefVar const &)+0x50>
        188ef0:	eb68e489 	bl	1bc211c <$_RINTError(long)>
        188ef4:	e5860030 	str	r0, [r6, #48]	; fField48
        188ef8:	ea00000f 	b	188f3c <TGaugeView::SetValue(RefVar const &, RefVar const &)+0x98>
        188efc:	006837f8 	streqd	r3, [r8], -#120
        188f00:	e59f0048 	ldr	r0, [pc, #48]	; 188f50 <TGaugeView::SetValue(RefVar const &, RefVar const &)+0xac>	; fField48
        188f04:	e5900000 	ldr	r0, [r0]
        188f08:	e5901000 	ldr	r1, [r0]
        188f0c:	e5950000 	ldr	r0, [r5]
        188f10:	e5900000 	ldr	r0, [r0]
        188f14:	eb68ecc5 	bl	1bc4230 <$EQRef__FlT1>
        188f18:	e3300000 	teq	r0, #0	; 0x0
        188f1c:	0a000006 	beq	188f3c <TGaugeView::SetValue(RefVar const &, RefVar const &)+0x98>
        188f20:	e5940000 	ldr	r0, [r4]
        188f24:	e5900000 	ldr	r0, [r0]
        188f28:	e3100003 	tst	r0, #3	; 0x3
        188f2c:	01a00140 	moveq	r0, r0, asr #2
        188f30:	0a000000 	beq	188f38 <TGaugeView::SetValue(RefVar const &, RefVar const &)+0x94>
        188f34:	eb68e478 	bl	1bc211c <$_RINTError(long)>
        188f38:	e5860034 	str	r0, [r6, #52]	; fField52
        188f3c:	e1a02004 	mov	r2, r4
        188f40:	e1a01005 	mov	r1, r5
        188f44:	e1a00006 	mov	r0, r6
        188f48:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        188f4c:	ea690db0 	b	1bcc614 <TView::$SetValue(RefVar const &, RefVar const &)>
        188f50:	006838b0 	streqh	r3, [r8], -#128
    */
}

/**
 * Symbol: TGaugeView::RealDraw(TRect &)
 * Address: 00188f54
 */
TGaugeView::RealDraw(TRect &) {
    /*
        188f54:	e1a0c00d 	mov	ip, sp
        188f58:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        188f5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        188f60:	e1a04000 	mov	r4, r0
        188f64:	e24dd004 	sub	sp, sp, #4	; 0x4
        188f68:	e1a05000 	mov	r5, r0
        188f6c:	e3a07002 	mov	r7, #2	; 0x2
        188f70:	e1a00007 	mov	r0, r7
        188f74:	eb68e474 	bl	1bc214c <$AllocateRefHandle(long)>
        188f78:	e58d0000 	str	r0, [sp]
        188f7c:	e1a0200d 	mov	r2, sp
        188f80:	e59f1174 	ldr	r1, [pc, #174]	; 1890fc <TGaugeView::RealDraw(TRect &)+0x1a8>
        188f84:	e1a00005 	mov	r0, r5
        188f88:	e5953000 	ldr	r3, [r5]
        188f8c:	e1a0e00f 	mov	lr, pc
        188f90:	e283f044 	add	pc, r3, #68	; 0x44
        188f94:	eb68e46c 	bl	1bc214c <$AllocateRefHandle(long)>
        188f98:	e1a06000 	mov	r6, r0
        188f9c:	e59d0000 	ldr	r0, [sp]
        188fa0:	eb68e885 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188fa4:	e3a0a000 	mov	sl, #0	; 0x0
        188fa8:	e5960000 	ldr	r0, [r6]
        188fac:	e3100003 	tst	r0, #3	; 0x3
        188fb0:	01a00140 	moveq	r0, r0, asr #2
        188fb4:	0a000000 	beq	188fbc <TGaugeView::RealDraw(TRect &)+0x68>
        188fb8:	eb68e457 	bl	1bc211c <$_RINTError(long)>
        188fbc:	e5941034 	ldr	r1, [r4, #52]	; fField52
        188fc0:	e1500001 	cmp	r0, r1
        188fc4:	d1a00001 	movle	r0, r1
        188fc8:	e1a01000 	mov	r1, r0
        188fcc:	e5940030 	ldr	r0, [r4, #48]	; fField48
        188fd0:	e1510000 	cmp	r1, r0
        188fd4:	b1a00001 	movlt	r0, r1
        188fd8:	e24dd008 	sub	sp, sp, #8	; 0x8
        188fdc:	e2841010 	add	r1, r4, #16	; 0x10
        188fe0:	e1a08001 	mov	r8, r1
        188fe4:	e8911008 	ldmia	r1, {r3, ip}
        188fe8:	e88d1008 	stmia	sp, {r3, ip}
        188fec:	e59d2006 	ldr	r2, [sp, #6]
        188ff0:	e59d1002 	ldr	r1, [sp, #2]
        188ff4:	e0421001 	sub	r1, r2, r1
        188ff8:	e1a05801 	mov	r5, r1, lsl #16
        188ffc:	e1a05845 	mov	r5, r5, asr #16
        189000:	e3150001 	tst	r5, #1	; 0x1
        189004:	1a000005 	bne	189020 <TGaugeView::RealDraw(TRect &)+0xcc>
        189008:	e2455001 	sub	r5, r5, #1	; 0x1
        18900c:	e59d1006 	ldr	r1, [sp, #6]
        189010:	e2411001 	sub	r1, r1, #1	; 0x1
        189014:	e5cd1005 	strb	r1, [sp, #5]
        189018:	e1a01441 	mov	r1, r1, asr #8
        18901c:	e5cd1004 	strb	r1, [sp, #4]
        189020:	e5941008 	ldr	r1, [r4, #8]	; fField8
        189024:	e3110002 	tst	r1, #2	; 0x2
        189028:	03a01001 	moveq	r1, #1	; 0x1
        18902c:	13a01000 	movne	r1, #0	; 0x0
        189030:	e21190ff 	ands	r9, r1, #255	; 0xff
        189034:	03a07000 	moveq	r7, #0	; 0x0
        189038:	11a07005 	movne	r7, r5
        18903c:	e59d1004 	ldr	r1, [sp, #4]
        189040:	e59d2000 	ldr	r2, [sp]
        189044:	e0411002 	sub	r1, r1, r2
        189048:	e1a01801 	mov	r1, r1, lsl #16
        18904c:	e0671841 	rsb	r1, r7, r1, asr #16
        189050:	e5942034 	ldr	r2, [r4, #52]	; fField52
        189054:	e0400002 	sub	r0, r0, r2
        189058:	e0010190 	mul	r1, r0, r1
        18905c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        189060:	e0400002 	sub	r0, r0, r2
        189064:	eb68a635 	bl	1bb2940 <$__rt_sdiv>
        189068:	e59d1000 	ldr	r1, [sp]
        18906c:	e0877fa7 	add	r7, r7, r7, lsr #31
        189070:	e08110c7 	add	r1, r1, r7, asr #1
        189074:	e0800001 	add	r0, r0, r1
        189078:	e5cd0007 	strb	r0, [sp, #7]
        18907c:	e1a00440 	mov	r0, r0, asr #8
        189080:	e5cd0006 	strb	r0, [sp, #6]
        189084:	e1a0000d 	mov	r0, sp
        189088:	e3a02002 	mov	r2, #2	; 0x2
        18908c:	e1a0100a 	mov	r1, sl
        189090:	eb671dea 	bl	1b50840 <$InsetRect__FP4RectlT2>
        189094:	eb672622 	bl	1b52924 <$PenNormal(void)>
        189098:	e1a0000d 	mov	r0, sp
        18909c:	eb67261b 	bl	1b52910 <$PaintRect(Rect *)>
        1890a0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1890a4:	e59f1054 	ldr	r1, [pc, #54]	; 189100 <TGaugeView::RealDraw(TRect &)+0x1ac>
        1890a8:	e1a00004 	mov	r0, r4
        1890ac:	eb690525 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        1890b0:	e3300002 	teq	r0, #2	; 0x2
        1890b4:	0a00002b 	beq	189168 <TGaugeView::RealDraw(TRect &)+0x214>
        1890b8:	e3a04000 	mov	r4, #0	; 0x0
        1890bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1890c0:	e1a0000d 	mov	r0, sp
        1890c4:	eb6999b6 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1890c8:	e49d0004 	ldr	r0, [sp], #4
        1890cc:	e5900010 	ldr	r0, [r0, #16]
        1890d0:	e20000ff 	and	r0, r0, #255	; 0xff
        1890d4:	e3500001 	cmp	r0, #1	; 0x1
        1890d8:	da000009 	ble	189104 <TGaugeView::RealDraw(TRect &)+0x1b0>
        1890dc:	e3a04001 	mov	r4, #1	; 0x1
        1890e0:	e3a020aa 	mov	r2, #170	; 0xaa
        1890e4:	e2822caa 	add	r2, r2, #43520	; 0xaa00
        1890e8:	e1a01002 	mov	r1, r2
        1890ec:	e1a00002 	mov	r0, r2
        1890f0:	eb67327d 	bl	1b55aec <$GetStdGrayPattern__FUlN21>
        1890f4:	eb672a3d 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        1890f8:	ea000003 	b	18910c <TGaugeView::RealDraw(TRect &)+0x1b8>
        1890fc:	00685108 	rsbeq	r5, r8, r8, lsl #2
        189100:	00682f40 	rsbeq	r2, r8, r0, asr #30
        189104:	e3a00002 	mov	r0, #2	; 0x2
        189108:	eb690d3e 	bl	1bcc608 <$SetPattern(long)>
        18910c:	e59d000a 	ldr	r0, [sp, #10]
        189110:	e2800001 	add	r0, r0, #1	; 0x1
        189114:	e5cd0001 	strb	r0, [sp, #1]
        189118:	e1a00440 	mov	r0, r0, asr #8
        18911c:	e5cd0000 	strb	r0, [sp]
        189120:	e59d000e 	ldr	r0, [sp, #14]
        189124:	e2400001 	sub	r0, r0, #1	; 0x1
        189128:	e5cd0005 	strb	r0, [sp, #5]
        18912c:	e1a00440 	mov	r0, r0, asr #8
        189130:	e5cd0004 	strb	r0, [sp, #4]
        189134:	e59d000c 	ldr	r0, [sp, #12]
        189138:	e5cd0003 	strb	r0, [sp, #3]
        18913c:	e1a00440 	mov	r0, r0, asr #8
        189140:	e5cd0002 	strb	r0, [sp, #2]
        189144:	e5980006 	ldr	r0, [r8, #6]
        189148:	e1a00820 	mov	r0, r0, lsr #16
        18914c:	e5cd0007 	strb	r0, [sp, #7]
        189150:	e1a00440 	mov	r0, r0, asr #8
        189154:	e5cd0006 	strb	r0, [sp, #6]
        189158:	e1a0000d 	mov	r0, sp
        18915c:	eb6725eb 	bl	1b52910 <$PaintRect(Rect *)>
        189160:	e3340000 	teq	r4, #0	; 0x0
        189164:	1b6900e1 	blne	1bc94f0 <$DisposeFgPattern(void)>
        189168:	eb6725ed 	bl	1b52924 <$PenNormal(void)>
        18916c:	e3390000 	teq	r9, #0	; 0x0
        189170:	0a000044 	beq	189288 <TGaugeView::RealDraw(TRect &)+0x334>
        189174:	e59d000a 	ldr	r0, [sp, #10]
        189178:	e2400002 	sub	r0, r0, #2	; 0x2
        18917c:	e5cd0001 	strb	r0, [sp, #1]
        189180:	e1a00440 	mov	r0, r0, asr #8
        189184:	e5cd0000 	strb	r0, [sp]
        189188:	e59d000e 	ldr	r0, [sp, #14]
        18918c:	e2800002 	add	r0, r0, #2	; 0x2
        189190:	e5cd0005 	strb	r0, [sp, #5]
        189194:	e1a00440 	mov	r0, r0, asr #8
        189198:	e5cd0004 	strb	r0, [sp, #4]
        18919c:	e59d100c 	ldr	r1, [sp, #12]
        1891a0:	e0850fa5 	add	r0, r5, r5, lsr #31
        1891a4:	e04100c0 	sub	r0, r1, r0, asr #1
        1891a8:	e5cd0003 	strb	r0, [sp, #3]
        1891ac:	e1a00440 	mov	r0, r0, asr #8
        1891b0:	e5cd0002 	strb	r0, [sp, #2]
        1891b4:	e59d0000 	ldr	r0, [sp]
        1891b8:	e0800005 	add	r0, r0, r5
        1891bc:	e5cd0007 	strb	r0, [sp, #7]
        1891c0:	e1a00440 	mov	r0, r0, asr #8
        1891c4:	e5cd0006 	strb	r0, [sp, #6]
        1891c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1891cc:	e28d1004 	add	r1, sp, #4	; 0x4
        1891d0:	e1a0000d 	mov	r0, sp
        1891d4:	eb0039aa 	bl	197884 <TRect::MidPoint( const(void))>
        1891d8:	e24dd014 	sub	sp, sp, #20	; 0x14
        1891dc:	e1a0000d 	mov	r0, sp
        1891e0:	eb63f87e 	bl	1a873e0 <TRegionVar::$__ct(void)>
        1891e4:	eb6721c2 	bl	1b518f4 <$OpenRgn(void)>
        1891e8:	e59d0016 	ldr	r0, [sp, #22]
        1891ec:	e1a00840 	mov	r0, r0, asr #16
        1891f0:	e59d1018 	ldr	r1, [sp, #24]
        1891f4:	e1a01841 	mov	r1, r1, asr #16
        1891f8:	eb6721b0 	bl	1b518c0 <$MoveTo__FlT1>
        1891fc:	e59d001e 	ldr	r0, [sp, #30]
        189200:	e1a00840 	mov	r0, r0, asr #16
        189204:	e59d1014 	ldr	r1, [sp, #20]
        189208:	e1a01841 	mov	r1, r1, asr #16
        18920c:	eb671d9a 	bl	1b5087c <$LineTo__FlT1>
        189210:	e59d101c 	ldr	r1, [sp, #28]
        189214:	e1a01841 	mov	r1, r1, asr #16
        189218:	e59d0016 	ldr	r0, [sp, #22]
        18921c:	e1a00840 	mov	r0, r0, asr #16
        189220:	eb671d95 	bl	1b5087c <$LineTo__FlT1>
        189224:	e59d001a 	ldr	r0, [sp, #26]
        189228:	e1a00840 	mov	r0, r0, asr #16
        18922c:	e2400001 	sub	r0, r0, #1	; 0x1
        189230:	e59d1014 	ldr	r1, [sp, #20]
        189234:	e1a01841 	mov	r1, r1, asr #16
        189238:	eb671d8f 	bl	1b5087c <$LineTo__FlT1>
        18923c:	e59d0016 	ldr	r0, [sp, #22]
        189240:	e1a00840 	mov	r0, r0, asr #16
        189244:	e59d1018 	ldr	r1, [sp, #24]
        189248:	e1a01841 	mov	r1, r1, asr #16
        18924c:	eb671d8a 	bl	1b5087c <$LineTo__FlT1>
        189250:	e59d0000 	ldr	r0, [sp]
        189254:	eb671113 	bl	1b4d6a8 <$CloseRgn(Region **)>
        189258:	e59d0000 	ldr	r0, [sp]
        18925c:	eb6725ac 	bl	1b52914 <$PaintRgn(Region **)>
        189260:	e3a02001 	mov	r2, #1	; 0x1
        189264:	e3a01001 	mov	r1, #1	; 0x1
        189268:	e59d0000 	ldr	r0, [sp]
        18926c:	eb671d74 	bl	1b50844 <$InsetRgn__FPP6RegionlT2>
        189270:	e59d0000 	ldr	r0, [sp]
        189274:	eb671535 	bl	1b4e750 <$EraseRgn(Region **)>
        189278:	e1a0000d 	mov	r0, sp
        18927c:	e3a01000 	mov	r1, #0	; 0x0
        189280:	eb63fc6f 	bl	1a88444 <TRegionVar::$__dt(void)>
        189284:	e28dd018 	add	sp, sp, #24	; 0x18
        189288:	e3a00005 	mov	r0, #5	; 0x5
        18928c:	eb690cdd 	bl	1bcc608 <$SetPattern(long)>
        189290:	e28dd010 	add	sp, sp, #16	; 0x10
        189294:	e1a00006 	mov	r0, r6
        189298:	eb68e7c7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18929c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TGaugeView::RealDoCommand(RefVar const &)
 * Address: 001892a0
 */
TGaugeView::RealDoCommand(RefVar const &) {
    /*
        1892a0:	e1a0c00d 	mov	ip, sp
        1892a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1892a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1892ac:	e1a05000 	mov	r5, r0
        1892b0:	e1a04001 	mov	r4, r1
        1892b4:	e1a00001 	mov	r0, r1
        1892b8:	eb647422 	bl	1aa6348 <$CommandID(RefVar const &)>
        1892bc:	e330000b 	teq	r0, #11	; 0xb
        1892c0:	05950008 	ldreq	r0, [r5, #8]	; fField8
        1892c4:	02000002 	andeq	r0, r0, #2	; 0x2
        1892c8:	03300000 	teqeq	r0, #0	; 0x0
        1892cc:	1a00000a 	bne	1892fc <TGaugeView::RealDoCommand(RefVar const &)+0x5c>
        1892d0:	e1a00004 	mov	r0, r4
        1892d4:	eb64741f 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        1892d8:	e1a01000 	mov	r1, r0
        1892dc:	e1a00005 	mov	r0, r5
        1892e0:	eb646be1 	bl	1aa426c <TGaugeView::$TrackSetValue(TUnitPublic *)>
        1892e4:	e1a01000 	mov	r1, r0
        1892e8:	e1a06000 	mov	r6, r0
        1892ec:	e1a00004 	mov	r0, r4
        1892f0:	eb647417 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        1892f4:	e3360000 	teq	r6, #0	; 0x0
        1892f8:	1a000003 	bne	18930c <TGaugeView::RealDoCommand(RefVar const &)+0x6c>
        1892fc:	e1a01004 	mov	r1, r4
        189300:	e1a00005 	mov	r0, r5
        189304:	eb645718 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
        189308:	e1a06000 	mov	r6, r0
        18930c:	e1a00006 	mov	r0, r6
        189310:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TGaugeView::TrackSetValue(TUnitPublic *)
 * Address: 00189314
 */
TGaugeView::TrackSetValue(TUnitPublic *) {
    /*
        189314:	e1a0c00d 	mov	ip, sp
        189318:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        18931c:	e24cb004 	sub	fp, ip, #4	; 0x4
        189320:	e1a04000 	mov	r4, r0
        189324:	e1a05001 	mov	r5, r1
        189328:	e24dd010 	sub	sp, sp, #16	; 0x10
        18932c:	e3a00035 	mov	r0, #53	; 0x35
        189330:	eb64ebb3 	bl	1ac4204 <$BusyBoxSend(long)>
        189334:	e1a00005 	mov	r0, r5
        189338:	eb6467ac 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        18933c:	e1a0a000 	mov	sl, r0
        189340:	e3a01001 	mov	r1, #1	; 0x1
        189344:	eb64426c 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        189348:	e24dd004 	sub	sp, sp, #4	; 0x4
        18934c:	e1a05004 	mov	r5, r4
        189350:	e3a00002 	mov	r0, #2	; 0x2
        189354:	eb68e37c 	bl	1bc214c <$AllocateRefHandle(long)>
        189358:	e58d0000 	str	r0, [sp]
        18935c:	e1a0200d 	mov	r2, sp
        189360:	e59f1180 	ldr	r1, [pc, #180]	; 1894e8 <TGaugeView::TrackSetValue(TUnitPublic *)+0x1d4>
        189364:	e1a00005 	mov	r0, r5
        189368:	e58d1010 	str	r1, [sp, #16]
        18936c:	e5953000 	ldr	r3, [r5]
        189370:	e1a0e00f 	mov	lr, pc
        189374:	e283f044 	add	pc, r3, #68	; 0x44
        189378:	e3100003 	tst	r0, #3	; 0x3
        18937c:	01a00140 	moveq	r0, r0, asr #2
        189380:	0a000000 	beq	189388 <TGaugeView::TrackSetValue(TUnitPublic *)+0x74>
        189384:	eb68e364 	bl	1bc211c <$_RINTError(long)>
        189388:	e1a06000 	mov	r6, r0
        18938c:	e1a08000 	mov	r8, r0
        189390:	e59d0000 	ldr	r0, [sp]
        189394:	eb68e788 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        189398:	e3a05000 	mov	r5, #0	; 0x0
        18939c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1893a0:	e59f1144 	ldr	r1, [pc, #144]	; 1894ec <TGaugeView::TrackSetValue(TUnitPublic *)+0x1d8>
        1893a4:	e1a00004 	mov	r0, r4
        1893a8:	eb690466 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        1893ac:	eb68e366 	bl	1bc214c <$AllocateRefHandle(long)>
        1893b0:	e58d0004 	str	r0, [sp, #4]
        1893b4:	e2840010 	add	r0, r4, #16	; 0x10
        1893b8:	e58d0014 	str	r0, [sp, #20]
        1893bc:	e5901006 	ldr	r1, [r0, #6]
        1893c0:	e1a01821 	mov	r1, r1, lsr #16
        1893c4:	e5900002 	ldr	r0, [r0, #2]
        1893c8:	e1a00820 	mov	r0, r0, lsr #16
        1893cc:	e0410000 	sub	r0, r1, r0
        1893d0:	e1a09800 	mov	r9, r0, lsl #16
        1893d4:	e1a09849 	mov	r9, r9, asr #16
        1893d8:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1893dc:	e5941030 	ldr	r1, [r4, #48]	; fField48
        1893e0:	e0417000 	sub	r7, r1, r0
        1893e4:	e1a01009 	mov	r1, r9
        1893e8:	e1a00007 	mov	r0, r7
        1893ec:	eb68a553 	bl	1bb2940 <$__rt_sdiv>
        1893f0:	e0800fa0 	add	r0, r0, r0, lsr #31
        1893f4:	e1a000c0 	mov	r0, r0, asr #1
        1893f8:	e58d0000 	str	r0, [sp]
        1893fc:	e2840024 	add	r0, r4, #36	; 0x24
        189400:	e58d0010 	str	r0, [sp, #16]
        189404:	e59f00e4 	ldr	r0, [pc, #e4]	; 1894f0 <TGaugeView::TrackSetValue(TUnitPublic *)+0x1dc>
        189408:	e58d000c 	str	r0, [sp, #12]
        18940c:	e24dd004 	sub	sp, sp, #4	; 0x4
        189410:	e1a0100a 	mov	r1, sl
        189414:	e1a0000d 	mov	r0, sp
        189418:	eb642969 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
        18941c:	e24dd004 	sub	sp, sp, #4	; 0x4
        189420:	e59d001c 	ldr	r0, [sp, #28]
        189424:	e5900000 	ldr	r0, [r0]
        189428:	e58d0000 	str	r0, [sp]
        18942c:	e59d0002 	ldr	r0, [sp, #2]
        189430:	e59d1006 	ldr	r1, [sp, #6]
        189434:	e1a01841 	mov	r1, r1, asr #16
        189438:	e0410840 	sub	r0, r1, r0, asr #16
        18943c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        189440:	e0800001 	add	r0, r0, r1
        189444:	e0010097 	mul	r1, r7, r0
        189448:	e1a00009 	mov	r0, r9
        18944c:	eb68a53b 	bl	1bb2940 <$__rt_sdiv>
        189450:	e5941034 	ldr	r1, [r4, #52]	; fField52
        189454:	e1a02001 	mov	r2, r1
        189458:	e0805001 	add	r5, r0, r1
        18945c:	e28dd004 	add	sp, sp, #4	; 0x4
        189460:	e1510005 	cmp	r1, r5
        189464:	c1a05002 	movgt	r5, r2
        189468:	ca000002 	bgt	189478 <TGaugeView::TrackSetValue(TUnitPublic *)+0x164>
        18946c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        189470:	e1500005 	cmp	r0, r5
        189474:	b1a05000 	movlt	r5, r0
        189478:	e1350006 	teq	r5, r6
        18947c:	0a00001c 	beq	1894f4 <TGaugeView::TrackSetValue(TUnitPublic *)+0x1e0>
        189480:	e24dd004 	sub	sp, sp, #4	; 0x4
        189484:	e59d000c 	ldr	r0, [sp, #12]
        189488:	e5900000 	ldr	r0, [r0]
        18948c:	e3300002 	teq	r0, #2	; 0x2
        189490:	159d0018 	ldrne	r0, [sp, #24]
        189494:	128d100c 	addne	r1, sp, #12	; 0xc
        189498:	1b69a10b 	blne	1bf18cc <$FPlaySound__FRC6RefVarT1>
        18949c:	e1a06005 	mov	r6, r5
        1894a0:	e1a05004 	mov	r5, r4
        1894a4:	e1a00106 	mov	r0, r6, lsl #2
        1894a8:	eb68e327 	bl	1bc214c <$AllocateRefHandle(long)>
        1894ac:	e58d0000 	str	r0, [sp]
        1894b0:	e1a0200d 	mov	r2, sp
        1894b4:	e1a00005 	mov	r0, r5
        1894b8:	e59d1020 	ldr	r1, [sp, #32]
        1894bc:	e5953000 	ldr	r3, [r5]
        1894c0:	e1a0e00f 	mov	lr, pc
        1894c4:	e283f048 	add	pc, r3, #72	; 0x48
        1894c8:	e59d0000 	ldr	r0, [sp]
        1894cc:	eb68e73a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1894d0:	e59d0014 	ldr	r0, [sp, #20]
        1894d4:	e5900000 	ldr	r0, [r0]
        1894d8:	e3a01000 	mov	r1, #0	; 0x0
        1894dc:	eb646f70 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        1894e0:	e28dd004 	add	sp, sp, #4	; 0x4
        1894e4:	ea000004 	b	1894fc <TGaugeView::TrackSetValue(TUnitPublic *)+0x1e8>
        1894e8:	00685108 	rsbeq	r5, r8, r8, lsl #2
        1894ec:	006853b8 	streqh	r5, [r8], -#56
        1894f0:	0c101934 	ldceq	9, cr1, [r0], -#208
        1894f4:	e3a00001 	mov	r0, #1	; 0x1
        1894f8:	eb646f7e 	bl	1aa52f8 <$Wait(unsigned long)>
        1894fc:	e28dd004 	add	sp, sp, #4	; 0x4
        189500:	e1a0000a 	mov	r0, sl
        189504:	eb6420e6 	bl	1a918a4 <TStrokePublic::$Done(void)>
        189508:	e3300000 	teq	r0, #0	; 0x0
        18950c:	0affffbe 	beq	18940c <TGaugeView::TrackSetValue(TUnitPublic *)+0xf8>
        189510:	e1360008 	teq	r6, r8
        189514:	0a000021 	beq	1895a0 <TGaugeView::TrackSetValue(TUnitPublic *)+0x28c>
        189518:	e24dd004 	sub	sp, sp, #4	; 0x4
        18951c:	e3a00002 	mov	r0, #2	; 0x2
        189520:	eb644a1d 	bl	1a9bd9c <$MakeArray(long)>
        189524:	eb68e308 	bl	1bc214c <$AllocateRefHandle(long)>
        189528:	e58d0000 	str	r0, [sp]
        18952c:	e1a00108 	mov	r0, r8, lsl #2
        189530:	eb68e305 	bl	1bc214c <$AllocateRefHandle(long)>
        189534:	e1a05000 	mov	r5, r0
        189538:	e5902000 	ldr	r2, [r0]
        18953c:	e59d0000 	ldr	r0, [sp]
        189540:	e5900000 	ldr	r0, [r0]
        189544:	e3a01000 	mov	r1, #0	; 0x0
        189548:	eb68f382 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        18954c:	e1a00005 	mov	r0, r5
        189550:	eb68e719 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        189554:	e1a00106 	mov	r0, r6, lsl #2
        189558:	eb68e2fb 	bl	1bc214c <$AllocateRefHandle(long)>
        18955c:	e1a05000 	mov	r5, r0
        189560:	e5902000 	ldr	r2, [r0]
        189564:	e59d0000 	ldr	r0, [sp]
        189568:	e5900000 	ldr	r0, [r0]
        18956c:	e3a01001 	mov	r1, #1	; 0x1
        189570:	eb68f378 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        189574:	e1a00005 	mov	r0, r5
        189578:	eb68e70f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18957c:	e3a03000 	mov	r3, #0	; 0x0
        189580:	e92d0008 	stmdb	sp!, {r3}
        189584:	e28d2004 	add	r2, sp, #4	; 0x4
        189588:	e59f102c 	ldr	r1, [pc, #2c]	; 1895bc <TGaugeView::TrackSetValue(TUnitPublic *)+0x2a8>
        18958c:	e1a00004 	mov	r0, r4
        189590:	eb690812 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        189594:	e5bd0004 	ldr	r0, [sp, #4]!
        189598:	eb68e707 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18959c:	e28dd004 	add	sp, sp, #4	; 0x4
        1895a0:	e3a00036 	mov	r0, #54	; 0x36
        1895a4:	eb64eb16 	bl	1ac4204 <$BusyBoxSend(long)>
        1895a8:	e3a04001 	mov	r4, #1	; 0x1
        1895ac:	e59d0004 	ldr	r0, [sp, #4]
        1895b0:	eb68e701 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1895b4:	e1a00004 	mov	r0, r4
        1895b8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1895bc:	00684fb0 	streqh	r4, [r8], -#240
    */
}

