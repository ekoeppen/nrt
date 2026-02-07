#include "include/TXFrames.h"

/**
 * Symbol: TXFrames::FreeData(void)
 * Address: 00239ecc
 */
TXFrames::FreeData(void) {
    /*
        239ecc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        239ed0:	e5901000 	ldr	r1, [r0]
        239ed4:	e281f008 	add	pc, r1, #8	; 0x8
    */
}

/**
 * Symbol: TXFrames::InvalFramePart(long, int, long, Region **)
 * Address: 00239ed8
 */
TXFrames::InvalFramePart(long, int, long, Region **) {
    /*
        239ed8:	e1a0c00d 	mov	ip, sp
        239edc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        239ee0:	e24cb004 	sub	fp, ip, #4	; 0x4
        239ee4:	e3120001 	tst	r2, #1	; 0x1
        239ee8:	e59b4004 	ldr	r4, [fp, #4]	; fField4
        239eec:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        239ef0:	e24dd008 	sub	sp, sp, #8	; 0x8
        239ef4:	e1a0200d 	mov	r2, sp
        239ef8:	eb655625 	bl	1b8f794 <TXFrames::$GetFrameBounds( const(long, Rect *))>
        239efc:	e1a01004 	mov	r1, r4
        239f00:	e1a0000d 	mov	r0, sp
        239f04:	eb653d6b 	bl	1b894b8 <$TXInvalSectRect(Rect *, Region **)>
        239f08:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::HAbsToDraw( const(long))
 * Address: 00239f0c
 */
TXFrames::HAbsToDraw( const(long)) {
    /*
        239f0c:	e1a0c00d 	mov	ip, sp
        239f10:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        239f14:	e24cb004 	sub	fp, ip, #4	; 0x4
        239f18:	e590200c 	ldr	r2, [r0, #12]	; fField12
        239f1c:	e0412002 	sub	r2, r1, r2
        239f20:	e5901014 	ldr	r1, [r0, #20]	; fField20
        239f24:	e0421001 	sub	r1, r2, r1
        239f28:	e590001c 	ldr	r0, [r0, #28]	; fField28
        239f2c:	e0810000 	add	r0, r1, r0
        239f30:	e3a02902 	mov	r2, #32768	; 0x8000
        239f34:	e2422001 	sub	r2, r2, #1	; 0x1
        239f38:	e3a01001 	mov	r1, #1	; 0x1
        239f3c:	e2411902 	sub	r1, r1, #32768	; 0x8000
        239f40:	ebffe7ef 	bl	233f04 <TXClipValue__FlN21>
        239f44:	e1a00800 	mov	r0, r0, lsl #16
        239f48:	e1a00840 	mov	r0, r0, asr #16
        239f4c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::VAbsToDraw( const(long))
 * Address: 00239f50
 */
TXFrames::VAbsToDraw( const(long)) {
    /*
        239f50:	e1a0c00d 	mov	ip, sp
        239f54:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        239f58:	e24cb004 	sub	fp, ip, #4	; 0x4
        239f5c:	e5902008 	ldr	r2, [r0, #8]	; fField8
        239f60:	e0412002 	sub	r2, r1, r2
        239f64:	e5901010 	ldr	r1, [r0, #16]	; fField16
        239f68:	e0421001 	sub	r1, r2, r1
        239f6c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        239f70:	e0810000 	add	r0, r1, r0
        239f74:	e3a02902 	mov	r2, #32768	; 0x8000
        239f78:	e2422001 	sub	r2, r2, #1	; 0x1
        239f7c:	e3a01001 	mov	r1, #1	; 0x1
        239f80:	e2411902 	sub	r1, r1, #32768	; 0x8000
        239f84:	ebffe7de 	bl	233f04 <TXClipValue__FlN21>
        239f88:	e1a00800 	mov	r0, r0, lsl #16
        239f8c:	e1a00840 	mov	r0, r0, asr #16
        239f90:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::HDrawToAbs( const(long))
 * Address: 00239f94
 */
TXFrames::HDrawToAbs( const(long)) {
    /*
        239f94:	e590200c 	ldr	r2, [r0, #12]	; fField12
        239f98:	e0821001 	add	r1, r2, r1
        239f9c:	e5902014 	ldr	r2, [r0, #20]	; fField20
        239fa0:	e0811002 	add	r1, r1, r2
        239fa4:	e590001c 	ldr	r0, [r0, #28]	; fField28
        239fa8:	e0410000 	sub	r0, r1, r0
        239fac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFrames::VDrawToAbs( const(long))
 * Address: 00239fb0
 */
TXFrames::VDrawToAbs( const(long)) {
    /*
        239fb0:	e5902008 	ldr	r2, [r0, #8]	; fField8
        239fb4:	e0821001 	add	r1, r2, r1
        239fb8:	e5902010 	ldr	r2, [r0, #16]	; fField16
        239fbc:	e0811002 	add	r1, r1, r2
        239fc0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        239fc4:	e0410000 	sub	r0, r1, r0
        239fc8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFrames::AbsToDraw( const(TXLongRect const &, Rect *))
 * Address: 00239fcc
 */
TXFrames::AbsToDraw( const(TXLongRect const &, Rect *)) {
    /*
        239fcc:	e1a0c00d 	mov	ip, sp
        239fd0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        239fd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        239fd8:	e1a06000 	mov	r6, r0
        239fdc:	e1a05001 	mov	r5, r1
        239fe0:	e1a04002 	mov	r4, r2
        239fe4:	e5911000 	ldr	r1, [r1]
        239fe8:	ebffffd8 	bl	239f50 <TXFrames::VAbsToDraw( const(long))>
        239fec:	e5c40001 	strb	r0, [r4, #1]
        239ff0:	e1a00440 	mov	r0, r0, asr #8
        239ff4:	e5c40000 	strb	r0, [r4]
        239ff8:	e1a00006 	mov	r0, r6
        239ffc:	e5951008 	ldr	r1, [r5, #8]	; fField8
        23a000:	ebffffd2 	bl	239f50 <TXFrames::VAbsToDraw( const(long))>
        23a004:	e5c40005 	strb	r0, [r4, #5]
        23a008:	e1a00440 	mov	r0, r0, asr #8
        23a00c:	e5c40004 	strb	r0, [r4, #4]	; fField4
        23a010:	e1a00006 	mov	r0, r6
        23a014:	e5951004 	ldr	r1, [r5, #4]	; fField4
        23a018:	ebffffbb 	bl	239f0c <TXFrames::HAbsToDraw( const(long))>
        23a01c:	e5c40003 	strb	r0, [r4, #3]
        23a020:	e1a00440 	mov	r0, r0, asr #8
        23a024:	e5c40002 	strb	r0, [r4, #2]
        23a028:	e1a00006 	mov	r0, r6
        23a02c:	e5b5100c 	ldr	r1, [r5, #12]!	; fField12
        23a030:	ebffffb5 	bl	239f0c <TXFrames::HAbsToDraw( const(long))>
        23a034:	e5c40007 	strb	r0, [r4, #7]
        23a038:	e1a00440 	mov	r0, r0, asr #8
        23a03c:	e5c40006 	strb	r0, [r4, #6]
        23a040:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::DrawToAbs( const(Rect const &, TXLongRect *))
 * Address: 0023a044
 */
TXFrames::DrawToAbs( const(Rect const &, TXLongRect *)) {
    /*
        23a044:	e1a0c00d 	mov	ip, sp
        23a048:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23a04c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a050:	e1a06000 	mov	r6, r0
        23a054:	e1a05001 	mov	r5, r1
        23a058:	e1a04002 	mov	r4, r2
        23a05c:	e5911000 	ldr	r1, [r1]
        23a060:	e1a01841 	mov	r1, r1, asr #16
        23a064:	ebffffd1 	bl	239fb0 <TXFrames::VDrawToAbs( const(long))>
        23a068:	e5840000 	str	r0, [r4]
        23a06c:	e5951004 	ldr	r1, [r5, #4]	; fField4
        23a070:	e1a01841 	mov	r1, r1, asr #16
        23a074:	e1a00006 	mov	r0, r6
        23a078:	ebffffcc 	bl	239fb0 <TXFrames::VDrawToAbs( const(long))>
        23a07c:	e5840008 	str	r0, [r4, #8]	; fField8
        23a080:	e5951002 	ldr	r1, [r5, #2]
        23a084:	e1a01841 	mov	r1, r1, asr #16
        23a088:	e1a00006 	mov	r0, r6
        23a08c:	ebffffc0 	bl	239f94 <TXFrames::HDrawToAbs( const(long))>
        23a090:	e5840004 	str	r0, [r4, #4]	; fField4
        23a094:	e5951006 	ldr	r1, [r5, #6]
        23a098:	e1a01841 	mov	r1, r1, asr #16
        23a09c:	e1a00006 	mov	r0, r6
        23a0a0:	ebffffbb 	bl	239f94 <TXFrames::HDrawToAbs( const(long))>
        23a0a4:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        23a0a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::AbsToDraw( const(TXLongPoint const &))
 * Address: 0023a0ac
 */
TXFrames::AbsToDraw( const(TXLongPoint const &)) {
    /*
        23a0ac:	e1a0c00d 	mov	ip, sp
        23a0b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23a0b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a0b8:	e1a06000 	mov	r6, r0
        23a0bc:	e1a05001 	mov	r5, r1
        23a0c0:	e1a04002 	mov	r4, r2
        23a0c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        23a0c8:	e1a00005 	mov	r0, r5
        23a0cc:	e5921004 	ldr	r1, [r2, #4]	; fField4
        23a0d0:	ebffff8d 	bl	239f0c <TXFrames::HAbsToDraw( const(long))>
        23a0d4:	e5cd0003 	strb	r0, [sp, #3]
        23a0d8:	e1a00440 	mov	r0, r0, asr #8
        23a0dc:	e5cd0002 	strb	r0, [sp, #2]
        23a0e0:	e1a00005 	mov	r0, r5
        23a0e4:	e5941000 	ldr	r1, [r4]
        23a0e8:	ebffff98 	bl	239f50 <TXFrames::VAbsToDraw( const(long))>
        23a0ec:	e5cd0001 	strb	r0, [sp, #1]
        23a0f0:	e1a00440 	mov	r0, r0, asr #8
        23a0f4:	e5cd0000 	strb	r0, [sp]
        23a0f8:	e59d0000 	ldr	r0, [sp]
        23a0fc:	e5860000 	str	r0, [r6]
        23a100:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::DrawToAbs( const(Point, TXLongPoint *))
 * Address: 0023a104
 */
TXFrames::DrawToAbs( const(Point, TXLongPoint *)) {
    /*
        23a104:	e1a0c00d 	mov	ip, sp
        23a108:	e92dd837 	stmdb	sp!, {r0, r1, r2, r4, r5, fp, ip, lr, pc}
        23a10c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a110:	e1a05000 	mov	r5, r0
        23a114:	e1a04002 	mov	r4, r2
        23a118:	e51b101c 	ldr	r1, [fp, -#28]	; fField28
        23a11c:	e1a01841 	mov	r1, r1, asr #16
        23a120:	ebffffa2 	bl	239fb0 <TXFrames::VDrawToAbs( const(long))>
        23a124:	e5840000 	str	r0, [r4]
        23a128:	e51b101a 	ldr	r1, [fp, -#26]
        23a12c:	e1a01841 	mov	r1, r1, asr #16
        23a130:	e1a00005 	mov	r0, r5
        23a134:	ebffff96 	bl	239f94 <TXFrames::HDrawToAbs( const(long))>
        23a138:	e5a40004 	str	r0, [r4, #4]!	; fField4
        23a13c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::SetFramesMargins(Rect const &, TXDisplayChanges *)
 * Address: 0023a140
 */
TXFrames::SetFramesMargins(Rect const &, TXDisplayChanges *) {
    /*
        23a140:	e1a0c00d 	mov	ip, sp
        23a144:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23a148:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a14c:	e1a05001 	mov	r5, r1
        23a150:	e1a04002 	mov	r4, r2
        23a154:	e2801020 	add	r1, r0, #32	; 0x20
        23a158:	e1a06001 	mov	r6, r1
        23a15c:	e1a00005 	mov	r0, r5
        23a160:	eb645171 	bl	1b4e72c <$EqualRect__FP4RectT1>
        23a164:	e3300000 	teq	r0, #0	; 0x0
        23a168:	08955000 	ldmeqia	r5, {ip, lr}
        23a16c:	08865000 	stmeqia	r6, {ip, lr}
        23a170:	03a00018 	moveq	r0, #24	; 0x18
        23a174:	13a00000 	movne	r0, #0	; 0x0
        23a178:	e3340000 	teq	r4, #0	; 0x0
        23a17c:	15941000 	ldrne	r1, [r4]
        23a180:	11810000 	orrne	r0, r1, r0
        23a184:	15840000 	strne	r0, [r4]
        23a188:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::GetFramesMargins( const(Rect *))
 * Address: 0023a18c
 */
TXFrames::GetFramesMargins( const(Rect *)) {
    /*
        23a18c:	e2800020 	add	r0, r0, #32	; 0x20
        23a190:	e8901008 	ldmia	r0, {r3, ip}
        23a194:	e8811008 	stmia	r1, {r3, ip}
        23a198:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFrames::GetAbsFrameBounds( const(long, TXLongRect *))
 * Address: 0023a19c
 */
TXFrames::GetAbsFrameBounds( const(long, TXLongRect *)) {
    /*
        23a19c:	e1a0c00d 	mov	ip, sp
        23a1a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23a1a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a1a8:	e1a05000 	mov	r5, r0
        23a1ac:	e1a04002 	mov	r4, r2
        23a1b0:	e5903000 	ldr	r3, [r0]
        23a1b4:	e1a0e00f 	mov	lr, pc
        23a1b8:	e283f010 	add	pc, r3, #16	; 0x10
        23a1bc:	e24dd008 	sub	sp, sp, #8	; 0x8
        23a1c0:	e1a0100d 	mov	r1, sp
        23a1c4:	e1a00005 	mov	r0, r5
        23a1c8:	e5952000 	ldr	r2, [r5]
        23a1cc:	e1a0e00f 	mov	lr, pc
        23a1d0:	e282f018 	add	pc, r2, #24	; 0x18
        23a1d4:	e5940000 	ldr	r0, [r4]
        23a1d8:	e59d1000 	ldr	r1, [sp]
        23a1dc:	e0400841 	sub	r0, r0, r1, asr #16
        23a1e0:	e5840000 	str	r0, [r4]
        23a1e4:	e5941004 	ldr	r1, [r4, #4]	; fField4
        23a1e8:	e59d0002 	ldr	r0, [sp, #2]
        23a1ec:	e0410840 	sub	r0, r1, r0, asr #16
        23a1f0:	e5840004 	str	r0, [r4, #4]	; fField4
        23a1f4:	e5941008 	ldr	r1, [r4, #8]	; fField8
        23a1f8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        23a1fc:	e0810840 	add	r0, r1, r0, asr #16
        23a200:	e5840008 	str	r0, [r4, #8]	; fField8
        23a204:	e594000c 	ldr	r0, [r4, #12]	; fField12
        23a208:	e59d1006 	ldr	r1, [sp, #6]
        23a20c:	e0800841 	add	r0, r0, r1, asr #16
        23a210:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        23a214:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::GetAbsTextBounds( const(long, TXLongRect *))
 * Address: 0023a218
 */
TXFrames::GetAbsTextBounds( const(long, TXLongRect *)) {
    /*
        23a218:	e1a0c00d 	mov	ip, sp
        23a21c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23a220:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a224:	e1a05000 	mov	r5, r0
        23a228:	e1a04002 	mov	r4, r2
        23a22c:	e24dd008 	sub	sp, sp, #8	; 0x8
        23a230:	e1a02001 	mov	r2, r1
        23a234:	e1a0100d 	mov	r1, sp
        23a238:	e5903000 	ldr	r3, [r0]
        23a23c:	e1a0e00f 	mov	lr, pc
        23a240:	e283f008 	add	pc, r3, #8	; 0x8
        23a244:	e24dd008 	sub	sp, sp, #8	; 0x8
        23a248:	e1a0100d 	mov	r1, sp
        23a24c:	e1a00005 	mov	r0, r5
        23a250:	e5952000 	ldr	r2, [r5]
        23a254:	e1a0e00f 	mov	lr, pc
        23a258:	e282f018 	add	pc, r2, #24	; 0x18
        23a25c:	e59d1000 	ldr	r1, [sp]
        23a260:	e1a01841 	mov	r1, r1, asr #16
        23a264:	e5841000 	str	r1, [r4]
        23a268:	e59d0002 	ldr	r0, [sp, #2]
        23a26c:	e1a00840 	mov	r0, r0, asr #16
        23a270:	e5840004 	str	r0, [r4, #4]	; fField4
        23a274:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        23a278:	e0811002 	add	r1, r1, r2
        23a27c:	e5841008 	str	r1, [r4, #8]	; fField8
        23a280:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        23a284:	e0800001 	add	r0, r0, r1
        23a288:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        23a28c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::GetTextBounds( const(long, Rect *))
 * Address: 0023a290
 */
TXFrames::GetTextBounds( const(long, Rect *)) {
    /*
        23a290:	e1a0c00d 	mov	ip, sp
        23a294:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23a298:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a29c:	e1a04000 	mov	r4, r0
        23a2a0:	e1a05002 	mov	r5, r2
        23a2a4:	e24dd010 	sub	sp, sp, #16	; 0x10
        23a2a8:	e1a0200d 	mov	r2, sp
        23a2ac:	e5903000 	ldr	r3, [r0]
        23a2b0:	e1a0e00f 	mov	lr, pc
        23a2b4:	e283f010 	add	pc, r3, #16	; 0x10
        23a2b8:	e1a02005 	mov	r2, r5
        23a2bc:	e1a0100d 	mov	r1, sp
        23a2c0:	e1a00004 	mov	r0, r4
        23a2c4:	ebffff40 	bl	239fcc <TXFrames::AbsToDraw( const(TXLongRect const &, Rect *))>
        23a2c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::GetFrameBounds( const(long, Rect *))
 * Address: 0023a2cc
 */
TXFrames::GetFrameBounds( const(long, Rect *)) {
    /*
        23a2cc:	e1a0c00d 	mov	ip, sp
        23a2d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23a2d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a2d8:	e1a04000 	mov	r4, r0
        23a2dc:	e1a05002 	mov	r5, r2
        23a2e0:	e24dd010 	sub	sp, sp, #16	; 0x10
        23a2e4:	e1a0200d 	mov	r2, sp
        23a2e8:	eb655526 	bl	1b8f788 <TXFrames::$GetAbsFrameBounds( const(long, TXLongRect *))>
        23a2ec:	e1a02005 	mov	r2, r5
        23a2f0:	e1a0100d 	mov	r1, sp
        23a2f4:	e1a00004 	mov	r0, r4
        23a2f8:	ebffff33 	bl	239fcc <TXFrames::AbsToDraw( const(TXLongRect const &, Rect *))>
        23a2fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::FramesScrolled(long, long)
 * Address: 0023a300
 */
TXFrames::FramesScrolled(long, long) {
    /*
        23a300:	e590300c 	ldr	r3, [r0, #12]	; fField12
        23a304:	e0431001 	sub	r1, r3, r1
        23a308:	e580100c 	str	r1, [r0, #12]	; fField12
        23a30c:	e5901008 	ldr	r1, [r0, #8]	; fField8
        23a310:	e0411002 	sub	r1, r1, r2
        23a314:	e5a01008 	str	r1, [r0, #8]!	; fField8
        23a318:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFrames::SetDrawOrigin(long, long)
 * Address: 0023a31c
 */
TXFrames::SetDrawOrigin(long, long) {
    /*
        23a31c:	e2800010 	add	r0, r0, #16	; 0x10
        23a320:	e5801004 	str	r1, [r0, #4]	; fField4
        23a324:	e5802000 	str	r2, [r0]
        23a328:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFrames::SetFramesOrigin(long, long)
 * Address: 0023a32c
 */
TXFrames::SetFramesOrigin(long, long) {
    /*
        23a32c:	e2800018 	add	r0, r0, #24	; 0x18
        23a330:	e5801004 	str	r1, [r0, #4]	; fField4
        23a334:	e5802000 	str	r2, [r0]
        23a338:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFrames::Draw( const(long))
 * Address: 0023a33c
 */
TXFrames::Draw( const(long)) {
    /*
        23a33c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PointToLine__8TXFramesCF5PointPUcT2
 * Address: 0023a340
 */
void TXFrames::PointToLine() {
    /*
        23a340:	e1a0c00d 	mov	ip, sp
        23a344:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23a348:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a34c:	e1a04000 	mov	r4, r0
        23a350:	e1a06002 	mov	r6, r2
        23a354:	e1a05003 	mov	r5, r3
        23a358:	e24dd008 	sub	sp, sp, #8	; 0x8
        23a35c:	e1a0200d 	mov	r2, sp
        23a360:	ebffff67 	bl	23a104 <TXFrames::DrawToAbs( const(Point, TXLongPoint *))>
        23a364:	e1a02006 	mov	r2, r6
        23a368:	e1a0100d 	mov	r1, sp
        23a36c:	e1a00004 	mov	r0, r4
        23a370:	eb65550f 	bl	1b8f7b4 <TXFrames::$PointToFrame( const(TXLongPoint const &, unsigned char *))>
        23a374:	e1b07000 	movs	r7, r0
        23a378:	e5d60000 	ldrb	r0, [r6]
        23a37c:	e5c50000 	strb	r0, [r5]
        23a380:	e24dd008 	sub	sp, sp, #8	; 0x8
        23a384:	4a000008 	bmi	23a3ac <PointToLine__8TXFramesCF5PointPUcT2+0x6c>
        23a388:	e1a0200d 	mov	r2, sp
        23a38c:	e1a01007 	mov	r1, r7
        23a390:	e5943004 	ldr	r3, [r4, #4]	; fField4
        23a394:	e1a00003 	mov	r0, r3
        23a398:	e5933000 	ldr	r3, [r3]
        23a39c:	e1a0e00f 	mov	lr, pc
        23a3a0:	e283f030 	add	pc, r3, #48	; 0x30
        23a3a4:	e3300000 	teq	r0, #0	; 0x0
        23a3a8:	1a000001 	bne	23a3b4 <PointToLine__8TXFramesCF5PointPUcT2+0x74>
        23a3ac:	e3e00000 	mvn	r0, #0	; 0x0
        23a3b0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23a3b4:	e24dd010 	sub	sp, sp, #16	; 0x10
        23a3b8:	e1a0200d 	mov	r2, sp
        23a3bc:	e1a01007 	mov	r1, r7
        23a3c0:	e1a00004 	mov	r0, r4
        23a3c4:	e5943000 	ldr	r3, [r4]
        23a3c8:	e1a0e00f 	mov	lr, pc
        23a3cc:	e283f010 	add	pc, r3, #16	; 0x10
        23a3d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        23a3d4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        23a3d8:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        23a3dc:	e0510000 	subs	r0, r1, r0
        23a3e0:	e3a06001 	mov	r6, #1	; 0x1
        23a3e4:	e58d0000 	str	r0, [sp]
        23a3e8:	5a00000c 	bpl	23a420 <PointToLine__8TXFramesCF5PointPUcT2+0xe0>
        23a3ec:	e3370000 	teq	r7, #0	; 0x0
        23a3f0:	0a000008 	beq	23a418 <PointToLine__8TXFramesCF5PointPUcT2+0xd8>
        23a3f4:	e5c56000 	strb	r6, [r5]
        23a3f8:	e2471001 	sub	r1, r7, #1	; 0x1
        23a3fc:	e28d2014 	add	r2, sp, #20	; 0x14
        23a400:	e5b43004 	ldr	r3, [r4, #4]!	; fField4
        23a404:	e1a00003 	mov	r0, r3
        23a408:	e5933000 	ldr	r3, [r3]
        23a40c:	e1a0e00f 	mov	lr, pc
        23a410:	e283f030 	add	pc, r3, #48	; 0x30
        23a414:	ea00000c 	b	23a44c <PointToLine__8TXFramesCF5PointPUcT2+0x10c>
        23a418:	e3a00000 	mov	r0, #0	; 0x0
        23a41c:	e58d0000 	str	r0, [sp]
        23a420:	e3a03000 	mov	r3, #0	; 0x0
        23a424:	e92d0008 	stmdb	sp!, {r3}
        23a428:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        23a42c:	e59d2018 	ldr	r2, [sp, #24]	; fField24
        23a430:	e28d1004 	add	r1, sp, #4	; 0x4
        23a434:	eb654ca3 	bl	1b8d6c8 <$PixelToLine__14TXLinesHeightsCFPllPP17TXLineHeightGroupT1>
        23a438:	e28dd004 	add	sp, sp, #4	; 0x4
        23a43c:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        23a440:	e1510000 	cmp	r1, r0
        23a444:	aa000001 	bge	23a450 <PointToLine__8TXFramesCF5PointPUcT2+0x110>
        23a448:	e5c56000 	strb	r6, [r5]
        23a44c:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        23a450:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::GetLineBounds( const(long, TXLongRect *))
 * Address: 0023a454
 */
TXFrames::GetLineBounds( const(long, TXLongRect *)) {
    /*
        23a454:	e1a0c00d 	mov	ip, sp
        23a458:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        23a45c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a460:	e1a06000 	mov	r6, r0
        23a464:	e1a05001 	mov	r5, r1
        23a468:	e1a04002 	mov	r4, r2
        23a46c:	e24dd008 	sub	sp, sp, #8	; 0x8
        23a470:	e3a08000 	mov	r8, #0	; 0x0
        23a474:	e5903004 	ldr	r3, [r0, #4]	; fField4
        23a478:	e58d1000 	str	r1, [sp]
        23a47c:	e5cd8004 	strb	r8, [sp, #4]	; fField4
        23a480:	e1a00003 	mov	r0, r3
        23a484:	e89d0006 	ldmia	sp, {r1, r2}
        23a488:	e5933000 	ldr	r3, [r3]
        23a48c:	e1a0e00f 	mov	lr, pc
        23a490:	e283f034 	add	pc, r3, #52	; 0x34
        23a494:	e1b07000 	movs	r7, r0
        23a498:	41a00008 	movmi	r0, r8
        23a49c:	491ba9f0 	ldmmidb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        23a4a0:	e1a02004 	mov	r2, r4
        23a4a4:	e1a01007 	mov	r1, r7
        23a4a8:	e1a00006 	mov	r0, r6
        23a4ac:	e5963000 	ldr	r3, [r6]
        23a4b0:	e1a0e00f 	mov	lr, pc
        23a4b4:	e283f010 	add	pc, r3, #16	; 0x10
        23a4b8:	e24dd008 	sub	sp, sp, #8	; 0x8
        23a4bc:	e1a0200d 	mov	r2, sp
        23a4c0:	e1a01007 	mov	r1, r7
        23a4c4:	e5963004 	ldr	r3, [r6, #4]	; fField4
        23a4c8:	e1a00003 	mov	r0, r3
        23a4cc:	e5933000 	ldr	r3, [r3]
        23a4d0:	e1a0e00f 	mov	lr, pc
        23a4d4:	e283f030 	add	pc, r3, #48	; 0x30
        23a4d8:	e59d0000 	ldr	r0, [sp]
        23a4dc:	e1550000 	cmp	r5, r0
        23a4e0:	da000006 	ble	23a500 <TXFrames::GetLineBounds( const(long, TXLongRect *))+0xac>
        23a4e4:	e2452001 	sub	r2, r5, #1	; 0x1
        23a4e8:	e5960004 	ldr	r0, [r6, #4]	; fField4
        23a4ec:	e59d1000 	ldr	r1, [sp]
        23a4f0:	eb654c75 	bl	1b8d6cc <$GetLinesHeight__14TXLinesHeightsCFlT1>
        23a4f4:	e5941000 	ldr	r1, [r4]
        23a4f8:	e0800001 	add	r0, r0, r1
        23a4fc:	e5840000 	str	r0, [r4]
        23a500:	e1a02005 	mov	r2, r5
        23a504:	e1a01005 	mov	r1, r5
        23a508:	e5b60004 	ldr	r0, [r6, #4]!	; fField4
        23a50c:	eb654c6e 	bl	1b8d6cc <$GetLinesHeight__14TXLinesHeightsCFlT1>
        23a510:	e5941000 	ldr	r1, [r4]
        23a514:	e0800001 	add	r0, r0, r1
        23a518:	e5a40008 	str	r0, [r4, #8]!	; fField8
        23a51c:	e3a00001 	mov	r0, #1	; 0x1
        23a520:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::GetLineBounds( const(long, Rect *))
 * Address: 0023a524
 */
TXFrames::GetLineBounds( const(long, Rect *)) {
    /*
        23a524:	e1a0c00d 	mov	ip, sp
        23a528:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23a52c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a530:	e1a04000 	mov	r4, r0
        23a534:	e1a05002 	mov	r5, r2
        23a538:	e24dd010 	sub	sp, sp, #16	; 0x10
        23a53c:	e1a0200d 	mov	r2, sp
        23a540:	eb655499 	bl	1b8f7ac <TXFrames::$GetLineBounds( const(long, TXLongRect *))>
        23a544:	e3300000 	teq	r0, #0	; 0x0
        23a548:	0a000004 	beq	23a560 <TXFrames::GetLineBounds( const(long, Rect *))+0x3c>
        23a54c:	e1a02005 	mov	r2, r5
        23a550:	e1a0100d 	mov	r1, sp
        23a554:	e1a00004 	mov	r0, r4
        23a558:	ebfffe9b 	bl	239fcc <TXFrames::AbsToDraw( const(TXLongRect const &, Rect *))>
        23a55c:	e3a00001 	mov	r0, #1	; 0x1
        23a560:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::PointToFrame( const(TXLongPoint const &, unsigned char *))
 * Address: 0023a564
 */
TXFrames::PointToFrame( const(TXLongPoint const &, unsigned char *)) {
    /*
        23a564:	e1a0c00d 	mov	ip, sp
        23a568:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23a56c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a570:	e1a06000 	mov	r6, r0
        23a574:	e1a05001 	mov	r5, r1
        23a578:	e1a04002 	mov	r4, r2
        23a57c:	e5902000 	ldr	r2, [r0]
        23a580:	e1a0e00f 	mov	lr, pc
        23a584:	e282f038 	add	pc, r2, #56	; 0x38
        23a588:	e1b07000 	movs	r7, r0
        23a58c:	4a00000f 	bmi	23a5d0 <TXFrames::PointToFrame( const(TXLongPoint const &, unsigned char *))+0x6c>
        23a590:	e24dd010 	sub	sp, sp, #16	; 0x10
        23a594:	e1a0200d 	mov	r2, sp
        23a598:	e1a01007 	mov	r1, r7
        23a59c:	e1a00006 	mov	r0, r6
        23a5a0:	e5963000 	ldr	r3, [r6]
        23a5a4:	e1a0e00f 	mov	lr, pc
        23a5a8:	e283f010 	add	pc, r3, #16	; 0x10
        23a5ac:	e1a01005 	mov	r1, r5
        23a5b0:	e1a0000d 	mov	r0, sp
        23a5b4:	ebffe872 	bl	234784 <TXLongRect::IsPointInside( const(TXLongPoint const &))>
        23a5b8:	e3300000 	teq	r0, #0	; 0x0
        23a5bc:	13a00000 	movne	r0, #0	; 0x0
        23a5c0:	03a00001 	moveq	r0, #1	; 0x1
        23a5c4:	e5c40000 	strb	r0, [r4]
        23a5c8:	e28dd010 	add	sp, sp, #16	; 0x10
        23a5cc:	ea000001 	b	23a5d8 <TXFrames::PointToFrame( const(TXLongPoint const &, unsigned char *))+0x74>
        23a5d0:	e3a00001 	mov	r0, #1	; 0x1
        23a5d4:	e5c40000 	strb	r0, [r4]
        23a5d8:	e1a00007 	mov	r0, r7
        23a5dc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::PointToFrame( const(Point, unsigned char *))
 * Address: 0023a5e0
 */
TXFrames::PointToFrame( const(Point, unsigned char *)) {
    /*
        23a5e0:	e1a0c00d 	mov	ip, sp
        23a5e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23a5e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a5ec:	e1a04000 	mov	r4, r0
        23a5f0:	e1a05002 	mov	r5, r2
        23a5f4:	e24dd008 	sub	sp, sp, #8	; 0x8
        23a5f8:	e1a0200d 	mov	r2, sp
        23a5fc:	ebfffec0 	bl	23a104 <TXFrames::DrawToAbs( const(Point, TXLongPoint *))>
        23a600:	e1a02005 	mov	r2, r5
        23a604:	e1a0100d 	mov	r1, sp
        23a608:	e1a00004 	mov	r0, r4
        23a60c:	eb655468 	bl	1b8f7b4 <TXFrames::$PointToFrame( const(TXLongPoint const &, unsigned char *))>
        23a610:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: SectLines__8TXFramesCFP4RectlPlT3P7TXArray
 * Address: 0023a614
 */
void TXFrames::SectLines() {
    /*
        23a614:	e1a0c00d 	mov	ip, sp
        23a618:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23a61c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a620:	e1a04000 	mov	r4, r0
        23a624:	e1a05001 	mov	r5, r1
        23a628:	e1a07002 	mov	r7, r2
        23a62c:	e1a06003 	mov	r6, r3
        23a630:	e59b9008 	ldr	r9, [fp, #8]	; fField8
        23a634:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        23a638:	e24dd010 	sub	sp, sp, #16	; 0x10
        23a63c:	e1a0200d 	mov	r2, sp
        23a640:	e1a01007 	mov	r1, r7
        23a644:	e5903000 	ldr	r3, [r0]
        23a648:	e1a0e00f 	mov	lr, pc
        23a64c:	e283f010 	add	pc, r3, #16	; 0x10
        23a650:	e24dd010 	sub	sp, sp, #16	; 0x10
        23a654:	e1a0200d 	mov	r2, sp
        23a658:	e1a01005 	mov	r1, r5
        23a65c:	e1a00004 	mov	r0, r4
        23a660:	ebfffe77 	bl	23a044 <TXFrames::DrawToAbs( const(Rect const &, TXLongRect *))>
        23a664:	e24dd008 	sub	sp, sp, #8	; 0x8
        23a668:	e28d2008 	add	r2, sp, #8	; 0x8
        23a66c:	e28d1008 	add	r1, sp, #8	; 0x8
        23a670:	e28d0018 	add	r0, sp, #24	; 0x18
        23a674:	eb653b90 	bl	1b894bc <TXLongRect::$Sect( const(TXLongRect const &, TXLongRect *))>
        23a678:	e3a08000 	mov	r8, #0	; 0x0
        23a67c:	e3300000 	teq	r0, #0	; 0x0
        23a680:	01a00008 	moveq	r0, r8
        23a684:	0a00001a 	beq	23a6f4 <SectLines__8TXFramesCFP4RectlPlT3P7TXArray+0xe0>
        23a688:	e1a00009 	mov	r0, r9
        23a68c:	e3a01000 	mov	r1, #0	; 0x0
        23a690:	e58a8000 	str	r8, [sl]
        23a694:	ebffd894 	bl	2308ec <TXArray::SetCount(long)>
        23a698:	e1a02005 	mov	r2, r5
        23a69c:	e28d1008 	add	r1, sp, #8	; 0x8
        23a6a0:	e1a00004 	mov	r0, r4
        23a6a4:	ebfffe48 	bl	239fcc <TXFrames::AbsToDraw( const(TXLongRect const &, Rect *))>
        23a6a8:	e1a0200d 	mov	r2, sp
        23a6ac:	e1a01007 	mov	r1, r7
        23a6b0:	e5943004 	ldr	r3, [r4, #4]	; fField4
        23a6b4:	e1a00003 	mov	r0, r3
        23a6b8:	e5933000 	ldr	r3, [r3]
        23a6bc:	e1a0e00f 	mov	lr, pc
        23a6c0:	e283f030 	add	pc, r3, #48	; 0x30
        23a6c4:	e3300000 	teq	r0, #0	; 0x0
        23a6c8:	1a00000a 	bne	23a6f8 <SectLines__8TXFramesCFP4RectlPlT3P7TXArray+0xe4>
        23a6cc:	e1a00009 	mov	r0, r9
        23a6d0:	e3e03000 	mvn	r3, #0	; 0x0
        23a6d4:	e3a02001 	mov	r2, #1	; 0x1
        23a6d8:	e3a01000 	mov	r1, #0	; 0x0
        23a6dc:	eb652aff 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        23a6e0:	e580800c 	str	r8, [r0, #12]	; fField12
        23a6e4:	e2800004 	add	r0, r0, #4	; 0x4
        23a6e8:	e8955000 	ldmia	r5, {ip, lr}
        23a6ec:	e8805000 	stmia	r0, {ip, lr}
        23a6f0:	e3a00001 	mov	r0, #1	; 0x1
        23a6f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23a6f8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        23a6fc:	e59d0024 	ldr	r0, [sp, #36]
        23a700:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        23a704:	e0410000 	sub	r0, r1, r0
        23a708:	e58d0008 	str	r0, [sp, #8]	; fField8
        23a70c:	e1a0300d 	mov	r3, sp
        23a710:	e92d0008 	stmdb	sp!, {r3}
        23a714:	e28d3008 	add	r3, sp, #8	; 0x8
        23a718:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23a71c:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        23a720:	e28d100c 	add	r1, sp, #12	; 0xc
        23a724:	eb654be7 	bl	1b8d6c8 <$PixelToLine__14TXLinesHeightsCFPllPP17TXLineHeightGroupT1>
        23a728:	e28dd004 	add	sp, sp, #4	; 0x4
        23a72c:	e5860000 	str	r0, [r6]
        23a730:	e1a07000 	mov	r7, r0
        23a734:	e3a01000 	mov	r1, #0	; 0x0
        23a738:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23a73c:	ebffd8e7 	bl	230ae0 <TXArray::Lock(unsigned char)>
        23a740:	e24dd008 	sub	sp, sp, #8	; 0x8
        23a744:	e1a00004 	mov	r0, r4
        23a748:	e59d1030 	ldr	r1, [sp, #48]
        23a74c:	ebfffdee 	bl	239f0c <TXFrames::HAbsToDraw( const(long))>
        23a750:	e5cd0003 	strb	r0, [sp, #3]
        23a754:	e1a00440 	mov	r0, r0, asr #8
        23a758:	e5cd0002 	strb	r0, [sp, #2]
        23a75c:	e1a00004 	mov	r0, r4
        23a760:	e59d1038 	ldr	r1, [sp, #56]
        23a764:	ebfffde8 	bl	239f0c <TXFrames::HAbsToDraw( const(long))>
        23a768:	e5cd0007 	strb	r0, [sp, #7]
        23a76c:	e1a00440 	mov	r0, r0, asr #8
        23a770:	e5cd0006 	strb	r0, [sp, #6]
        23a774:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        23a778:	e59d102c 	ldr	r1, [sp, #44]
        23a77c:	e0811000 	add	r1, r1, r0
        23a780:	e1a06001 	mov	r6, r1
        23a784:	e1a00004 	mov	r0, r4
        23a788:	ebfffdf0 	bl	239f50 <TXFrames::VAbsToDraw( const(long))>
        23a78c:	e5cd0001 	strb	r0, [sp, #1]
        23a790:	e1a00440 	mov	r0, r0, asr #8
        23a794:	e44d0004 	strb	r0, [sp], -#4	; fField4
        23a798:	e59d0028 	ldr	r0, [sp, #40]
        23a79c:	e0400006 	sub	r0, r0, r6
        23a7a0:	e58d0000 	str	r0, [sp]
        23a7a4:	e1a00009 	mov	r0, r9
        23a7a8:	e3e03000 	mvn	r3, #0	; 0x0
        23a7ac:	e3a02001 	mov	r2, #1	; 0x1
        23a7b0:	e3a01000 	mov	r1, #0	; 0x0
        23a7b4:	eb652ac9 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        23a7b8:	e1a06000 	mov	r6, r0
        23a7bc:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        23a7c0:	e1500007 	cmp	r0, r7
        23a7c4:	aa00000a 	bge	23a7f4 <SectLines__8TXFramesCFP4RectlPlT3P7TXArray+0x1e0>
        23a7c8:	e586800c 	str	r8, [r6, #12]	; fField12
        23a7cc:	e5950004 	ldr	r0, [r5, #4]	; fField4
        23a7d0:	e1a00820 	mov	r0, r0, lsr #16
        23a7d4:	e5cd0009 	strb	r0, [sp, #9]
        23a7d8:	e1a00440 	mov	r0, r0, asr #8
        23a7dc:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        23a7e0:	e2861004 	add	r1, r6, #4	; 0x4
        23a7e4:	e28d0004 	add	r0, sp, #4	; 0x4
        23a7e8:	e8905000 	ldmia	r0, {ip, lr}
        23a7ec:	e8815000 	stmia	r1, {ip, lr}
        23a7f0:	ea000037 	b	23a8d4 <SectLines__8TXFramesCFP4RectlPlT3P7TXArray+0x2c0>
        23a7f4:	e1a0300d 	mov	r3, sp
        23a7f8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23a7fc:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        23a800:	e59d200c 	ldr	r2, [sp, #12]	; fField12
        23a804:	eb654bae 	bl	1b8d6c4 <TXLinesHeights::$HeightToCountLines( const(TXLineHeightGroup const &, long, long *))>
        23a808:	e0800007 	add	r0, r0, r7
        23a80c:	e2400001 	sub	r0, r0, #1	; 0x1
        23a810:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        23a814:	e1510000 	cmp	r1, r0
        23a818:	aa000005 	bge	23a834 <SectLines__8TXFramesCFP4RectlPlT3P7TXArray+0x220>
        23a81c:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        23a820:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        23a824:	e5911004 	ldr	r1, [r1, #4]	; fField4
        23a828:	e59d2000 	ldr	r2, [sp]
        23a82c:	e0811002 	add	r1, r1, r2
        23a830:	e58d1000 	str	r1, [sp]
        23a834:	e0400007 	sub	r0, r0, r7
        23a838:	e2800001 	add	r0, r0, #1	; 0x1
        23a83c:	e586000c 	str	r0, [r6, #12]	; fField12
        23a840:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        23a844:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        23a848:	e59d0006 	ldr	r0, [sp, #6]
        23a84c:	e0810000 	add	r0, r1, r0
        23a850:	e5cd0009 	strb	r0, [sp, #9]
        23a854:	e1a00440 	mov	r0, r0, asr #8
        23a858:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        23a85c:	e2861004 	add	r1, r6, #4	; 0x4
        23a860:	e28d0004 	add	r0, sp, #4	; 0x4
        23a864:	e8901008 	ldmia	r0, {r3, ip}
        23a868:	e8811008 	stmia	r1, {r3, ip}
        23a86c:	e5867000 	str	r7, [r6]
        23a870:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        23a874:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23a878:	e5860010 	str	r0, [r6, #16]	; fField16
        23a87c:	e596000c 	ldr	r0, [r6, #12]	; fField12
        23a880:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        23a884:	e5911004 	ldr	r1, [r1, #4]	; fField4
        23a888:	e0000091 	mul	r0, r1, r0
        23a88c:	e59d1006 	ldr	r1, [sp, #6]
        23a890:	e0800001 	add	r0, r0, r1
        23a894:	e5cd0005 	strb	r0, [sp, #5]
        23a898:	e1a00440 	mov	r0, r0, asr #8
        23a89c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        23a8a0:	e5b6000c 	ldr	r0, [r6, #12]!	; fField12
        23a8a4:	e0807007 	add	r7, r0, r7
        23a8a8:	e59a1000 	ldr	r1, [sl]
        23a8ac:	e0800001 	add	r0, r0, r1
        23a8b0:	e58a0000 	str	r0, [sl]
        23a8b4:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        23a8b8:	e280000c 	add	r0, r0, #12	; 0xc
        23a8bc:	e58d0010 	str	r0, [sp, #16]	; fField16
        23a8c0:	e3a00000 	mov	r0, #0	; 0x0
        23a8c4:	e58d000c 	str	r0, [sp, #12]	; fField12
        23a8c8:	e59d0000 	ldr	r0, [sp]
        23a8cc:	e3500000 	cmp	r0, #0	; 0x0
        23a8d0:	caffffb3 	bgt	23a7a4 <SectLines__8TXFramesCFP4RectlPlT3P7TXArray+0x190>
        23a8d4:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        23a8d8:	ebffd920 	bl	230d60 <TXArray::Unlock(void)>
        23a8dc:	e3a00001 	mov	r0, #1	; 0x1
        23a8e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrames::__ct(void)
 * Address: 0023ab90
 */
TXFrames::TXFrames(void) {
    /*
        23ab90:	e1a0c00d 	mov	ip, sp
        23ab94:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23ab98:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ab9c:	e1b04000 	movs	r4, r0
        23aba0:	1a000003 	bne	23abb4 <TXFrames::__ct(void)+0x24>
        23aba4:	e3a00028 	mov	r0, #40	; 0x28
        23aba8:	eb664ee2 	bl	1bce738 <$__nw(unsigned int)>
        23abac:	e1b04000 	movs	r4, r0
        23abb0:	0a000011 	beq	23abfc <TXFrames::__ct(void)+0x6c>
        23abb4:	e59f0048 	ldr	r0, [pc, #48]	; 23ac04 <TXFrames::__ct(void)+0x74>
        23abb8:	e3a05000 	mov	r5, #0	; 0x0
        23abbc:	e3a03000 	mov	r3, #0	; 0x0
        23abc0:	e8840021 	stmia	r4, {r0, r5}
        23abc4:	e92d0008 	stmdb	sp!, {r3}
        23abc8:	e2840020 	add	r0, r4, #32	; 0x20
        23abcc:	e3a02000 	mov	r2, #0	; 0x0
        23abd0:	e3a01000 	mov	r1, #0	; 0x0
        23abd4:	eb64678c 	bl	1b54a0c <$SetRect__FP4RectlN32>
        23abd8:	e28dd004 	add	sp, sp, #4	; 0x4
        23abdc:	e5845008 	str	r5, [r4, #8]	; fField8
        23abe0:	e584500c 	str	r5, [r4, #12]	; fField12
        23abe4:	e2840010 	add	r0, r4, #16	; 0x10
        23abe8:	e5805004 	str	r5, [r0, #4]	; fField4
        23abec:	e5805000 	str	r5, [r0]
        23abf0:	e2840018 	add	r0, r4, #24	; 0x18
        23abf4:	e5805004 	str	r5, [r0, #4]	; fField4
        23abf8:	e5805000 	str	r5, [r0]
        23abfc:	e1a00004 	mov	r0, r4
        23ac00:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        23ac04:	000205c8 	andeq	r0, r2, r8, asr #11
    */
}

/**
 * Symbol: TXFrames::__dt(void)
 * Address: 0023ac08
 */
TXFrames::~TXFrames(void) {
    /*
        23ac08:	e1a0c00d 	mov	ip, sp
        23ac0c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23ac10:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ac14:	e1a04000 	mov	r4, r0
        23ac18:	e1a05001 	mov	r5, r1
        23ac1c:	e59f002c 	ldr	r0, [pc, #2c]	; 23ac50 <TXFrames::__dt(void)+0x48>
        23ac20:	e5840000 	str	r0, [r4]
        23ac24:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23ac28:	e3300000 	teq	r0, #0	; 0x0
        23ac2c:	0a000002 	beq	23ac3c <TXFrames::__dt(void)+0x34>
        23ac30:	e3a01001 	mov	r1, #1	; 0x1
        23ac34:	e1a0e00f 	mov	lr, pc
        23ac38:	e590f000 	ldr	pc, [r0]
        23ac3c:	e3150001 	tst	r5, #1	; 0x1
        23ac40:	11a00004 	movne	r0, r4
        23ac44:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        23ac48:	1a664aa4 	bne	1bcd6e0 <$__dl(void *)>
        23ac4c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        23ac50:	000205c8 	andeq	r0, r2, r8, asr #11
    */
}

