#include "include/TPoint.h"

/**
 * Symbol: TPoint::PinTo(TRect const &)
 * Address: 001978f0
 */
TPoint::PinTo(TRect const &) {
    /*
        1978f0:	e5903002 	ldr	r3, [r0, #2]	; fField2
        1978f4:	e5912002 	ldr	r2, [r1, #2]	; fField2
        1978f8:	e1a02842 	mov	r2, r2, asr #16
        1978fc:	e1520843 	cmp	r2, r3, asr #16
        197900:	c5c02003 	strgtb	r2, [r0, #3]	; fField3
        197904:	c1a02442 	movgt	r2, r2, asr #8
        197908:	c5c02002 	strgtb	r2, [r0, #2]	; fField2
        19790c:	e5903002 	ldr	r3, [r0, #2]	; fField2
        197910:	e5912006 	ldr	r2, [r1, #6]
        197914:	e1a02842 	mov	r2, r2, asr #16
        197918:	e1520843 	cmp	r2, r3, asr #16
        19791c:	b5c02003 	strltb	r2, [r0, #3]	; fField3
        197920:	b1a02442 	movlt	r2, r2, asr #8
        197924:	b5c02002 	strltb	r2, [r0, #2]	; fField2
        197928:	e5903000 	ldr	r3, [r0]
        19792c:	e5912000 	ldr	r2, [r1]
        197930:	e1a02842 	mov	r2, r2, asr #16
        197934:	e1520843 	cmp	r2, r3, asr #16
        197938:	c5c02001 	strgtb	r2, [r0, #1]	; fField1
        19793c:	c1a02442 	movgt	r2, r2, asr #8
        197940:	c5c02000 	strgtb	r2, [r0]
        197944:	e5911004 	ldr	r1, [r1, #4]
        197948:	e1a01841 	mov	r1, r1, asr #16
        19794c:	e5902000 	ldr	r2, [r0]
        197950:	e1510842 	cmp	r1, r2, asr #16
        197954:	b5c01001 	strltb	r1, [r0, #1]	; fField1
        197958:	b1a01441 	movlt	r1, r1, asr #8
        19795c:	b5c01000 	strltb	r1, [r0]
        197960:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPoint::Scale(TTransform const &)
 * Address: 00197bcc
 */
TPoint::Scale(TTransform const &) {
    /*
        197bcc:	e5912018 	ldr	r2, [r1, #24]
        197bd0:	e3120102 	tst	r2, #-2147483648	; 0x80000000
        197bd4:	01a0f00e 	moveq	pc, lr
        197bd8:	e5903002 	ldr	r3, [r0, #2]	; fField2
        197bdc:	e1a03843 	mov	r3, r3, asr #16
        197be0:	e591200a 	ldr	r2, [r1, #10]
        197be4:	e0433842 	sub	r3, r3, r2, asr #16
        197be8:	e5912000 	ldr	r2, [r1]
        197bec:	e0030392 	mul	r3, r2, r3
        197bf0:	e2832902 	add	r2, r3, #32768	; 0x8000
        197bf4:	e5913012 	ldr	r3, [r1, #18]
        197bf8:	e1a03823 	mov	r3, r3, lsr #16
        197bfc:	e0832842 	add	r2, r3, r2, asr #16
        197c00:	e5c02003 	strb	r2, [r0, #3]	; fField3
        197c04:	e1a02442 	mov	r2, r2, asr #8
        197c08:	e5c02002 	strb	r2, [r0, #2]	; fField2
        197c0c:	e5912008 	ldr	r2, [r1, #8]
        197c10:	e5903000 	ldr	r3, [r0]
        197c14:	e1a03843 	mov	r3, r3, asr #16
        197c18:	e0432842 	sub	r2, r3, r2, asr #16
        197c1c:	e5913004 	ldr	r3, [r1, #4]
        197c20:	e0020293 	mul	r2, r3, r2
        197c24:	e2822902 	add	r2, r2, #32768	; 0x8000
        197c28:	e5911010 	ldr	r1, [r1, #16]
        197c2c:	e1a01821 	mov	r1, r1, lsr #16
        197c30:	e0811842 	add	r1, r1, r2, asr #16
        197c34:	e5c01001 	strb	r1, [r0, #1]	; fField1
        197c38:	e1a01441 	mov	r1, r1, asr #8
        197c3c:	e5c01000 	strb	r1, [r0]
        197c40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPoint::InverseScale(TTransform const &)
 * Address: 001982e8
 */
TPoint::InverseScale(TTransform const &) {
    /*
        1982e8:	e1a0c00d 	mov	ip, sp
        1982ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1982f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1982f4:	e1a05000 	mov	r5, r0
        1982f8:	e1a04001 	mov	r4, r1
        1982fc:	e5910018 	ldr	r0, [r1, #24]
        198300:	e3100102 	tst	r0, #-2147483648	; 0x80000000
        198304:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        198308:	e5950002 	ldr	r0, [r5, #2]	; fField2
        19830c:	e1a00840 	mov	r0, r0, asr #16
        198310:	e5941012 	ldr	r1, [r4, #18]
        198314:	e0400841 	sub	r0, r0, r1, asr #16
        198318:	e5941000 	ldr	r1, [r4]
        19831c:	eb692367 	bl	1be10c0 <$FixedDivide>
        198320:	e594100a 	ldr	r1, [r4, #10]
        198324:	e1a01821 	mov	r1, r1, lsr #16
        198328:	e0800001 	add	r0, r0, r1
        19832c:	e5c50003 	strb	r0, [r5, #3]	; fField3
        198330:	e1a00440 	mov	r0, r0, asr #8
        198334:	e5c50002 	strb	r0, [r5, #2]	; fField2
        198338:	e5941004 	ldr	r1, [r4, #4]
        19833c:	e5940010 	ldr	r0, [r4, #16]
        198340:	e5952000 	ldr	r2, [r5]
        198344:	e1a02842 	mov	r2, r2, asr #16
        198348:	e0420840 	sub	r0, r2, r0, asr #16
        19834c:	eb69235b 	bl	1be10c0 <$FixedDivide>
        198350:	e5941008 	ldr	r1, [r4, #8]
        198354:	e1a01821 	mov	r1, r1, lsr #16
        198358:	e0800001 	add	r0, r0, r1
        19835c:	e5c50001 	strb	r0, [r5, #1]	; fField1
        198360:	e1a00440 	mov	r0, r0, asr #8
        198364:	e5c50000 	strb	r0, [r5]
        198368:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: Aligned__6TPointCFRC6TPointT1
 * Address: 00198df0
 */
void TPoint::Aligned() {
    /*
        198df0:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        198df4:	e590e002 	ldr	lr, [r0, #2]	; fField2
        198df8:	e1a0e84e 	mov	lr, lr, asr #16
        198dfc:	e5913002 	ldr	r3, [r1, #2]	; fField2
        198e00:	e1a03843 	mov	r3, r3, asr #16
        198e04:	e04e4003 	sub	r4, lr, r3
        198e08:	e592c000 	ldr	ip, [r2]
        198e0c:	e1a0c84c 	mov	ip, ip, asr #16
        198e10:	e5911000 	ldr	r1, [r1]
        198e14:	e1a01841 	mov	r1, r1, asr #16
        198e18:	e04c5001 	sub	r5, ip, r1
        198e1c:	e0060495 	mul	r6, r5, r4
        198e20:	e5922002 	ldr	r2, [r2, #2]	; fField2
        198e24:	e1a02842 	mov	r2, r2, asr #16
        198e28:	e0424003 	sub	r4, r2, r3
        198e2c:	e5907000 	ldr	r7, [r0]
        198e30:	e1a07847 	mov	r7, r7, asr #16
        198e34:	e0470001 	sub	r0, r7, r1
        198e38:	e0080490 	mul	r8, r0, r4
        198e3c:	e0560008 	subs	r0, r6, r8
        198e40:	51a06000 	movpl	r6, r0
        198e44:	42606000 	rsbmi	r6, r0, #0	; 0x0
        198e48:	e3540000 	cmp	r4, #0	; 0x0
        198e4c:	a1a00004 	movge	r0, r4
        198e50:	b2640000 	rsblt	r0, r4, #0	; 0x0
        198e54:	e3550000 	cmp	r5, #0	; 0x0
        198e58:	b2655000 	rsblt	r5, r5, #0	; 0x0
        198e5c:	e0800005 	add	r0, r0, r5
        198e60:	e0804100 	add	r4, r0, r0, lsl #2
        198e64:	e3a00000 	mov	r0, #0	; 0x0
        198e68:	e1560084 	cmp	r6, r4, lsl #1
        198e6c:	a8bd81f0 	ldmgeia	sp!, {r4, r5, r6, r7, r8, pc}
        198e70:	e1a04003 	mov	r4, r3
        198e74:	e1a0500e 	mov	r5, lr
        198e78:	e3a00001 	mov	r0, #1	; 0x1
        198e7c:	e1520003 	cmp	r2, r3
        198e80:	b1540005 	cmplt	r4, r5
        198e84:	b8bd81f0 	ldmltia	sp!, {r4, r5, r6, r7, r8, pc}
        198e88:	e1a04001 	mov	r4, r1
        198e8c:	e1a06007 	mov	r6, r7
        198e90:	e15c0001 	cmp	ip, r1
        198e94:	b1540006 	cmplt	r4, r6
        198e98:	b8bd81f0 	ldmltia	sp!, {r4, r5, r6, r7, r8, pc}
        198e9c:	e1a04003 	mov	r4, r3
        198ea0:	e1a05002 	mov	r5, r2
        198ea4:	e15e0003 	cmp	lr, r3
        198ea8:	b1540005 	cmplt	r4, r5
        198eac:	b8bd81f0 	ldmltia	sp!, {r4, r5, r6, r7, r8, pc}
        198eb0:	e1a04001 	mov	r4, r1
        198eb4:	e1a0600c 	mov	r6, ip
        198eb8:	e1570001 	cmp	r7, r1
        198ebc:	b1540006 	cmplt	r4, r6
        198ec0:	b8bd81f0 	ldmltia	sp!, {r4, r5, r6, r7, r8, pc}
        198ec4:	e1a04002 	mov	r4, r2
        198ec8:	e1a0500e 	mov	r5, lr
        198ecc:	e3a00002 	mov	r0, #2	; 0x2
        198ed0:	e1530002 	cmp	r3, r2
        198ed4:	b1540005 	cmplt	r4, r5
        198ed8:	b8bd81f0 	ldmltia	sp!, {r4, r5, r6, r7, r8, pc}
        198edc:	e1a0400c 	mov	r4, ip
        198ee0:	e1a06007 	mov	r6, r7
        198ee4:	e151000c 	cmp	r1, ip
        198ee8:	b1540006 	cmplt	r4, r6
        198eec:	b8bd81f0 	ldmltia	sp!, {r4, r5, r6, r7, r8, pc}
        198ef0:	e15e0002 	cmp	lr, r2
        198ef4:	b1520003 	cmplt	r2, r3
        198ef8:	b8bd81f0 	ldmltia	sp!, {r4, r5, r6, r7, r8, pc}
        198efc:	e157000c 	cmp	r7, ip
        198f00:	b15c0001 	cmplt	ip, r1
        198f04:	a3a00003 	movge	r0, #3	; 0x3
        198f08:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: DistanceFromLine__6TPointCFRC6TPointT1
 * Address: 00198f0c
 */
void TPoint::DistanceFromLine() {
    /*
        198f0c:	e1a0c00d 	mov	ip, sp
        198f10:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        198f14:	e24cb004 	sub	fp, ip, #4	; 0x4
        198f18:	e5923002 	ldr	r3, [r2, #2]	; fField2
        198f1c:	e591c002 	ldr	ip, [r1, #2]	; fField2
        198f20:	e1a0c84c 	mov	ip, ip, asr #16
        198f24:	e06c4843 	rsb	r4, ip, r3, asr #16
        198f28:	e590e000 	ldr	lr, [r0]
        198f2c:	e5913000 	ldr	r3, [r1]
        198f30:	e1a03843 	mov	r3, r3, asr #16
        198f34:	e063e84e 	rsb	lr, r3, lr, asr #16
        198f38:	e004049e 	mul	r4, lr, r4
        198f3c:	e5900002 	ldr	r0, [r0, #2]	; fField2
        198f40:	e06cc840 	rsb	ip, ip, r0, asr #16
        198f44:	e5920000 	ldr	r0, [r2]
        198f48:	e0630840 	rsb	r0, r3, r0, asr #16
        198f4c:	e0030c90 	mul	r3, r0, ip
        198f50:	e0444003 	sub	r4, r4, r3
        198f54:	e1a00001 	mov	r0, r1
        198f58:	e1a01002 	mov	r1, r2
        198f5c:	eb000098 	bl	1991c4 <CheapDistance__FRC6TPointT1>
        198f60:	e1a01004 	mov	r1, r4
        198f64:	eb686675 	bl	1bb2940 <$__rt_sdiv>
        198f68:	e3500000 	cmp	r0, #0	; 0x0
        198f6c:	b2600000 	rsblt	r0, r0, #0	; 0x0
        198f70:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LineHitRatio__6TPointCFRC6TPointT1l
 * Address: 00198f74
 */
void TPoint::LineHitRatio() {
    /*
        198f74:	e1a0c00d 	mov	ip, sp
        198f78:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        198f7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        198f80:	e1a05000 	mov	r5, r0
        198f84:	e1a06001 	mov	r6, r1
        198f88:	e1a07002 	mov	r7, r2
        198f8c:	e1a04003 	mov	r4, r3
        198f90:	e24dd008 	sub	sp, sp, #8	; 0x8
        198f94:	e3a08102 	mov	r8, #-2147483648	; 0x80000000
        198f98:	e5929000 	ldr	r9, [r2]
        198f9c:	e1a09849 	mov	r9, r9, asr #16
        198fa0:	e591c000 	ldr	ip, [r1]
        198fa4:	e1a0c84c 	mov	ip, ip, asr #16
        198fa8:	e059200c 	subs	r2, r9, ip
        198fac:	e58d2004 	str	r2, [sp, #4]
        198fb0:	e5971002 	ldr	r1, [r7, #2]	; fField2
        198fb4:	e1a01841 	mov	r1, r1, asr #16
        198fb8:	e5963002 	ldr	r3, [r6, #2]	; fField2
        198fbc:	e1a03843 	mov	r3, r3, asr #16
        198fc0:	e0410003 	sub	r0, r1, r3
        198fc4:	e58d0000 	str	r0, [sp]
        198fc8:	51a0a002 	movpl	sl, r2
        198fcc:	4262a000 	rsbmi	sl, r2, #0	; 0x0
        198fd0:	e3500000 	cmp	r0, #0	; 0x0
        198fd4:	a1a0e000 	movge	lr, r0
        198fd8:	b260e000 	rsblt	lr, r0, #0	; 0x0
        198fdc:	e15a000e 	cmp	sl, lr
        198fe0:	da00003b 	ble	1990d4 <LineHitRatio__6TPointCFRC6TPointT1l+0x160>
        198fe4:	e04c1004 	sub	r1, ip, r4
        198fe8:	e595e000 	ldr	lr, [r5]
        198fec:	e1a0e84e 	mov	lr, lr, asr #16
        198ff0:	e151000e 	cmp	r1, lr
        198ff4:	ca000002 	bgt	199004 <LineHitRatio__6TPointCFRC6TPointT1l+0x90>
        198ff8:	e0891004 	add	r1, r9, r4
        198ffc:	e151000e 	cmp	r1, lr
        199000:	aa000005 	bge	19901c <LineHitRatio__6TPointCFRC6TPointT1l+0xa8>
        199004:	e08c1004 	add	r1, ip, r4
        199008:	e151000e 	cmp	r1, lr
        19900c:	ba00006a 	blt	1991bc <LineHitRatio__6TPointCFRC6TPointT1l+0x248>
        199010:	e0491004 	sub	r1, r9, r4
        199014:	e151000e 	cmp	r1, lr
        199018:	ca000067 	bgt	1991bc <LineHitRatio__6TPointCFRC6TPointT1l+0x248>
        19901c:	e3320000 	teq	r2, #0	; 0x0
        199020:	1a00000e 	bne	199060 <LineHitRatio__6TPointCFRC6TPointT1l+0xec>
        199024:	e3300000 	teq	r0, #0	; 0x0
        199028:	0a000063 	beq	1991bc <LineHitRatio__6TPointCFRC6TPointT1l+0x248>
        19902c:	e5950002 	ldr	r0, [r5, #2]	; fField2
        199030:	e0530840 	subs	r0, r3, r0, asr #16
        199034:	42600000 	rsbmi	r0, r0, #0	; 0x0
        199038:	e1500004 	cmp	r0, r4
        19903c:	aa00005e 	bge	1991bc <LineHitRatio__6TPointCFRC6TPointT1l+0x248>
        199040:	e59d0004 	ldr	r0, [sp, #4]
        199044:	e3500000 	cmp	r0, #0	; 0x0
        199048:	b2600000 	rsblt	r0, r0, #0	; 0x0
        19904c:	e1a01800 	mov	r1, r0, lsl #16
        199050:	e05e000c 	subs	r0, lr, ip
        199054:	4a00003b 	bmi	199148 <LineHitRatio__6TPointCFRC6TPointT1l+0x1d4>
        199058:	e1a00800 	mov	r0, r0, lsl #16
        19905c:	ea000019 	b	1990c8 <LineHitRatio__6TPointCFRC6TPointT1l+0x154>
        199060:	e1a01802 	mov	r1, r2, lsl #16
        199064:	e1a00800 	mov	r0, r0, lsl #16
        199068:	eb692014 	bl	1be10c0 <$FixedDivide>
        19906c:	e5952000 	ldr	r2, [r5]
        199070:	e5961000 	ldr	r1, [r6]
        199074:	e1a01841 	mov	r1, r1, asr #16
        199078:	e0612842 	rsb	r2, r1, r2, asr #16
        19907c:	e0000092 	mul	r0, r2, r0
        199080:	e2800902 	add	r0, r0, #32768	; 0x8000
        199084:	e1a00840 	mov	r0, r0, asr #16
        199088:	e1a00800 	mov	r0, r0, lsl #16
        19908c:	e1a00840 	mov	r0, r0, asr #16
        199090:	e5963002 	ldr	r3, [r6, #2]	; fField2
        199094:	e0800843 	add	r0, r0, r3, asr #16
        199098:	e5953002 	ldr	r3, [r5, #2]	; fField2
        19909c:	e0500843 	subs	r0, r0, r3, asr #16
        1990a0:	42600000 	rsbmi	r0, r0, #0	; 0x0
        1990a4:	e1500004 	cmp	r0, r4
        1990a8:	aa000043 	bge	1991bc <LineHitRatio__6TPointCFRC6TPointT1l+0x248>
        1990ac:	e5970000 	ldr	r0, [r7]
        1990b0:	e0710840 	rsbs	r0, r1, r0, asr #16
        1990b4:	42600000 	rsbmi	r0, r0, #0	; 0x0
        1990b8:	e1a01800 	mov	r1, r0, lsl #16
        1990bc:	e3520000 	cmp	r2, #0	; 0x0
        1990c0:	ba00003b 	blt	1991b4 <LineHitRatio__6TPointCFRC6TPointT1l+0x240>
        1990c4:	e1a00802 	mov	r0, r2, lsl #16
        1990c8:	eb691ffc 	bl	1be10c0 <$FixedDivide>
        1990cc:	e1a08000 	mov	r8, r0
        1990d0:	ea000039 	b	1991bc <LineHitRatio__6TPointCFRC6TPointT1l+0x248>
        1990d4:	e595e002 	ldr	lr, [r5, #2]	; fField2
        1990d8:	e1a0e84e 	mov	lr, lr, asr #16
        1990dc:	e0439004 	sub	r9, r3, r4
        1990e0:	e15e0009 	cmp	lr, r9
        1990e4:	ba000002 	blt	1990f4 <LineHitRatio__6TPointCFRC6TPointT1l+0x180>
        1990e8:	e0819004 	add	r9, r1, r4
        1990ec:	e15e0009 	cmp	lr, r9
        1990f0:	da000005 	ble	19910c <LineHitRatio__6TPointCFRC6TPointT1l+0x198>
        1990f4:	e0839004 	add	r9, r3, r4
        1990f8:	e15e0009 	cmp	lr, r9
        1990fc:	ca00002e 	bgt	1991bc <LineHitRatio__6TPointCFRC6TPointT1l+0x248>
        199100:	e0411004 	sub	r1, r1, r4
        199104:	e15e0001 	cmp	lr, r1
        199108:	ba00002b 	blt	1991bc <LineHitRatio__6TPointCFRC6TPointT1l+0x248>
        19910c:	e3300000 	teq	r0, #0	; 0x0
        199110:	1a00000e 	bne	199150 <LineHitRatio__6TPointCFRC6TPointT1l+0x1dc>
        199114:	e3320000 	teq	r2, #0	; 0x0
        199118:	0a000027 	beq	1991bc <LineHitRatio__6TPointCFRC6TPointT1l+0x248>
        19911c:	e5950000 	ldr	r0, [r5]
        199120:	e05c0840 	subs	r0, ip, r0, asr #16
        199124:	42600000 	rsbmi	r0, r0, #0	; 0x0
        199128:	e1500004 	cmp	r0, r4
        19912c:	aa000022 	bge	1991bc <LineHitRatio__6TPointCFRC6TPointT1l+0x248>
        199130:	e59d0000 	ldr	r0, [sp]
        199134:	e3500000 	cmp	r0, #0	; 0x0
        199138:	b2600000 	rsblt	r0, r0, #0	; 0x0
        19913c:	e1a01800 	mov	r1, r0, lsl #16
        199140:	e05e0003 	subs	r0, lr, r3
        199144:	5affffc3 	bpl	199058 <LineHitRatio__6TPointCFRC6TPointT1l+0xe4>
        199148:	e2600000 	rsb	r0, r0, #0	; 0x0
        19914c:	eaffffc1 	b	199058 <LineHitRatio__6TPointCFRC6TPointT1l+0xe4>
        199150:	e1a01800 	mov	r1, r0, lsl #16
        199154:	e1a00802 	mov	r0, r2, lsl #16
        199158:	eb691fd8 	bl	1be10c0 <$FixedDivide>
        19915c:	e5952002 	ldr	r2, [r5, #2]	; fField2
        199160:	e5961002 	ldr	r1, [r6, #2]	; fField2
        199164:	e1a01841 	mov	r1, r1, asr #16
        199168:	e0612842 	rsb	r2, r1, r2, asr #16
        19916c:	e0000092 	mul	r0, r2, r0
        199170:	e2800902 	add	r0, r0, #32768	; 0x8000
        199174:	e1a00840 	mov	r0, r0, asr #16
        199178:	e1a00800 	mov	r0, r0, lsl #16
        19917c:	e1a00840 	mov	r0, r0, asr #16
        199180:	e5963000 	ldr	r3, [r6]
        199184:	e0800843 	add	r0, r0, r3, asr #16
        199188:	e5953000 	ldr	r3, [r5]
        19918c:	e0500843 	subs	r0, r0, r3, asr #16
        199190:	42600000 	rsbmi	r0, r0, #0	; 0x0
        199194:	e1500004 	cmp	r0, r4
        199198:	aa000007 	bge	1991bc <LineHitRatio__6TPointCFRC6TPointT1l+0x248>
        19919c:	e5970002 	ldr	r0, [r7, #2]	; fField2
        1991a0:	e0710840 	rsbs	r0, r1, r0, asr #16
        1991a4:	42600000 	rsbmi	r0, r0, #0	; 0x0
        1991a8:	e1a01800 	mov	r1, r0, lsl #16
        1991ac:	e3520000 	cmp	r2, #0	; 0x0
        1991b0:	aaffffc3 	bge	1990c4 <LineHitRatio__6TPointCFRC6TPointT1l+0x150>
        1991b4:	e2622000 	rsb	r2, r2, #0	; 0x0
        1991b8:	eaffffc1 	b	1990c4 <LineHitRatio__6TPointCFRC6TPointT1l+0x150>
        1991bc:	e1a00008 	mov	r0, r8
        1991c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

