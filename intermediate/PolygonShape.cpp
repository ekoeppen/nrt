#include "include/PolygonShape.h"

/**
 * Symbol: PolygonShape::Scale(TRect const &, TRect const &)
 * Address: 001911b4
 */
PolygonShape::Scale(TRect const &, TRect const &) {
    /*
        1911b4:	e1a0c00d 	mov	ip, sp
        1911b8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1911bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1911c0:	e1a04000 	mov	r4, r0
        1911c4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1911c8:	e1a0000d 	mov	r0, sp
        1911cc:	e3a03000 	mov	r3, #0	; 0x0
        1911d0:	eb6443e1 	bl	1aa215c <TTransform::$Setup(TRect const *, TRect const *, unsigned char)>
        1911d4:	e2845004 	add	r5, r4, #4	; 0x4
        1911d8:	e3a06000 	mov	r6, #0	; 0x0
        1911dc:	e5940002 	ldr	r0, [r4, #2]	; fField2
        1911e0:	e1a00840 	mov	r0, r0, asr #16
        1911e4:	e3500000 	cmp	r0, #0	; 0x0
        1911e8:	da000007 	ble	19120c <PolygonShape::Scale(TRect const &, TRect const &)+0x58>
        1911ec:	e1a0100d 	mov	r1, sp
        1911f0:	e1a00005 	mov	r0, r5
        1911f4:	eb643fa7 	bl	1aa1098 <TPoint::$Scale(TTransform const &)>
        1911f8:	e2866001 	add	r6, r6, #1	; 0x1
        1911fc:	e2855004 	add	r5, r5, #4	; 0x4
        191200:	e5940002 	ldr	r0, [r4, #2]	; fField2
        191204:	e1560840 	cmp	r6, r0, asr #16
        191208:	bafffff7 	blt	1911ec <PolygonShape::Scale(TRect const &, TRect const &)+0x38>
        19120c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PolygonShape::Offset(long, long)
 * Address: 00191210
 */
PolygonShape::Offset(long, long) {
    /*
        191210:	e92d4000 	stmdb	sp!, {lr}
        191214:	e2803004 	add	r3, r0, #4	; 0x4
        191218:	e590c002 	ldr	ip, [r0, #2]	; fField2
        19121c:	e1a0c84c 	mov	ip, ip, asr #16
        191220:	e3a00000 	mov	r0, #0	; 0x0
        191224:	e35c0000 	cmp	ip, #0	; 0x0
        191228:	d8bd8000 	ldmleia	sp!, {pc}
        19122c:	e1a0e801 	mov	lr, r1, lsl #16
        191230:	e1a0e84e 	mov	lr, lr, asr #16
        191234:	e1a01802 	mov	r1, r2, lsl #16
        191238:	e1a01841 	mov	r1, r1, asr #16
        19123c:	e5932002 	ldr	r2, [r3, #2]	; fField2
        191240:	e1a02822 	mov	r2, r2, lsr #16
        191244:	e082200e 	add	r2, r2, lr
        191248:	e5c32003 	strb	r2, [r3, #3]
        19124c:	e1a02442 	mov	r2, r2, asr #8
        191250:	e5c32002 	strb	r2, [r3, #2]	; fField2
        191254:	e5932000 	ldr	r2, [r3]
        191258:	e1a02822 	mov	r2, r2, lsr #16
        19125c:	e0822001 	add	r2, r2, r1
        191260:	e5c32001 	strb	r2, [r3, #1]
        191264:	e1a02442 	mov	r2, r2, asr #8
        191268:	e4c32004 	strb	r2, [r3], #4
        19126c:	e2800001 	add	r0, r0, #1	; 0x1
        191270:	e150000c 	cmp	r0, ip
        191274:	bafffff0 	blt	19123c <PolygonShape::Offset(long, long)+0x2c>
        191278:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: PolygonShape::CalcBounds(TRect *)
 * Address: 0019127c
 */
PolygonShape::CalcBounds(TRect *) {
    /*
        19127c:	e1a0c00d 	mov	ip, sp
        191280:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        191284:	e24cb004 	sub	fp, ip, #4	; 0x4
        191288:	e1a04001 	mov	r4, r1
        19128c:	e2806004 	add	r6, r0, #4	; 0x4
        191290:	e5907002 	ldr	r7, [r0, #2]	; fField2
        191294:	e1a07847 	mov	r7, r7, asr #16
        191298:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
        19129c:	e2411501 	sub	r1, r1, #4194304	; 0x400000
        1912a0:	e5c41005 	strb	r1, [r4, #5]
        1912a4:	e3e0007f 	mvn	r0, #127	; 0x7f
        1912a8:	e5c40004 	strb	r0, [r4, #4]
        1912ac:	e5c41001 	strb	r1, [r4, #1]
        1912b0:	e5c40000 	strb	r0, [r4]
        1912b4:	e3a05000 	mov	r5, #0	; 0x0
        1912b8:	e3570000 	cmp	r7, #0	; 0x0
        1912bc:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1912c0:	e1a00004 	mov	r0, r4
        1912c4:	e5961000 	ldr	r1, [r6]
        1912c8:	eb644fef 	bl	1aa528c <TRect::$Union(TPoint)>
        1912cc:	e2855001 	add	r5, r5, #1	; 0x1
        1912d0:	e2866004 	add	r6, r6, #4	; 0x4
        1912d4:	e1550007 	cmp	r5, r7
        1912d8:	bafffff8 	blt	1912c0 <PolygonShape::CalcBounds(TRect *)+0x44>
        1912dc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: PolygonShape::IsCurvy(void)
 * Address: 001912e0
 */
PolygonShape::IsCurvy(void) {
    /*
        1912e0:	e5900000 	ldr	r0, [r0]
        1912e4:	e1a00840 	mov	r0, r0, asr #16
        1912e8:	ea63f938 	b	1a8f7d0 <$Curvy(long)>
    */
}

/**
 * Symbol: PolygonShape::IsOval(void)
 * Address: 00191348
 */
PolygonShape::IsOval(void) {
    /*
        191348:	e5900000 	ldr	r0, [r0]
        19134c:	e1b00840 	movs	r0, r0, asr #16
        191350:	1330000d 	teqne	r0, #13	; 0xd
        191354:	03a00001 	moveq	r0, #1	; 0x1
        191358:	13a00000 	movne	r0, #0	; 0x0
        19135c:	e20000ff 	and	r0, r0, #255	; 0xff
        191360:	e1a0f00e 	mov	pc, lr
    */
}

