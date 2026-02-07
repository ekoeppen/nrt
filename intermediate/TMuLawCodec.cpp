#include "include/TMuLawCodec.h"

/**
 * Symbol: Sizeof__11TMuLawCodecSFv
 * Address: 00122f6c
 */
void TMuLawCodec::Sizeof() {
    /*
        122f6c:	e3a00028 	mov	r0, #40	; 0x28
        122f70:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuLawCodec::New(void)
 * Address: 00122f74
 */
TMuLawCodec::New(void) {
    /*
        122f74:	e3a01000 	mov	r1, #0	; 0x0
        122f78:	e5801018 	str	r1, [r0, #24]	; fField24
        122f7c:	e5801010 	str	r1, [r0, #16]	; fField16
        122f80:	e5801014 	str	r1, [r0, #20]	; fField20
        122f84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuLawCodec::BlockConvertMuLawToLin16(void *, void *, long)
 * Address: 00122f88
 */
TMuLawCodec::BlockConvertMuLawToLin16(void *, void *, long) {
    /*
        122f88:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        122f8c:	e1a0e002 	mov	lr, r2
        122f90:	e1a02001 	mov	r2, r1
        122f94:	e3a01000 	mov	r1, #0	; 0x0
        122f98:	e3530000 	cmp	r3, #0	; 0x0
        122f9c:	d8bd8070 	ldmleia	sp!, {r4, r5, r6, pc}
        122fa0:	e3a05007 	mov	r5, #7	; 0x7
        122fa4:	e3a04021 	mov	r4, #33	; 0x21
        122fa8:	e4de0001 	ldrb	r0, [lr], #1
        122fac:	e1e00000 	mvn	r0, r0
        122fb0:	e1a00800 	mov	r0, r0, lsl #16
        122fb4:	e1a00820 	mov	r0, r0, lsr #16
        122fb8:	e005c240 	and	ip, r5, r0, asr #4
        122fbc:	e1a0c80c 	mov	ip, ip, lsl #16
        122fc0:	e1a0c82c 	mov	ip, ip, lsr #16
        122fc4:	e200600f 	and	r6, r0, #15	; 0xf
        122fc8:	e1846086 	orr	r6, r4, r6, lsl #1
        122fcc:	e1a06806 	mov	r6, r6, lsl #16
        122fd0:	e1a06826 	mov	r6, r6, lsr #16
        122fd4:	e1a0cc16 	mov	ip, r6, lsl ip
        122fd8:	e24cc021 	sub	ip, ip, #33	; 0x21
        122fdc:	e1a0c80c 	mov	ip, ip, lsl #16
        122fe0:	e1a0c84c 	mov	ip, ip, asr #16
        122fe4:	e3100080 	tst	r0, #128	; 0x80
        122fe8:	126c0000 	rsbne	r0, ip, #0	; 0x0
        122fec:	11a0c800 	movne	ip, r0, lsl #16
        122ff0:	11a0c84c 	movne	ip, ip, asr #16
        122ff4:	e1a0010c 	mov	r0, ip, lsl #2
        122ff8:	e5c20001 	strb	r0, [r2, #1]
        122ffc:	e1a00440 	mov	r0, r0, asr #8
        123000:	e4c20002 	strb	r0, [r2], #2
        123004:	e2811001 	add	r1, r1, #1	; 0x1
        123008:	e1510003 	cmp	r1, r3
        12300c:	baffffe5 	blt	122fa8 <TMuLawCodec::BlockConvertMuLawToLin16(void *, void *, long)+0x20>
        123010:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: TMuLawCodec::BlockConvertLin16ToMuLaw(void *, void const *, long)
 * Address: 00123014
 */
TMuLawCodec::BlockConvertLin16ToMuLaw(void *, void const *, long) {
    /*
        123014:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        123018:	e1a06002 	mov	r6, r2
        12301c:	e1a0e001 	mov	lr, r1
        123020:	e3a01000 	mov	r1, #0	; 0x0
        123024:	e3530000 	cmp	r3, #0	; 0x0
        123028:	d8bd80f0 	ldmleia	sp!, {r4, r5, r6, r7, pc}
        12302c:	e3a04001 	mov	r4, #1	; 0x1
        123030:	e5960000 	ldr	r0, [r6]
        123034:	e1a00840 	mov	r0, r0, asr #16
        123038:	e2866002 	add	r6, r6, #2	; 0x2
        12303c:	e1b00140 	movs	r0, r0, asr #2
        123040:	e3a02000 	mov	r2, #0	; 0x0
        123044:	42600000 	rsbmi	r0, r0, #0	; 0x0
        123048:	43a02080 	movmi	r2, #128	; 0x80
        12304c:	e2805021 	add	r5, r0, #33	; 0x21
        123050:	e1a0c2c5 	mov	ip, r5, asr #5
        123054:	e3a00007 	mov	r0, #7	; 0x7
        123058:	e11c0014 	tst	ip, r4, lsl r0
        12305c:	1a000001 	bne	123068 <TMuLawCodec::BlockConvertLin16ToMuLaw(void *, void const *, long)+0x54>
        123060:	e2500001 	subs	r0, r0, #1	; 0x1
        123064:	5afffffb 	bpl	123058 <TMuLawCodec::BlockConvertLin16ToMuLaw(void *, void const *, long)+0x44>
        123068:	e1a0c0c5 	mov	ip, r5, asr #1
        12306c:	e1a0c05c 	mov	ip, ip, asr r0
        123070:	e20cc00f 	and	ip, ip, #15	; 0xf
        123074:	e18c0200 	orr	r0, ip, r0, lsl #4
        123078:	e1800002 	orr	r0, r0, r2
        12307c:	e1e00000 	mvn	r0, r0
        123080:	e4ce0001 	strb	r0, [lr], #1
        123084:	e2811001 	add	r1, r1, #1	; 0x1
        123088:	e1510003 	cmp	r1, r3
        12308c:	baffffe7 	blt	123030 <TMuLawCodec::BlockConvertLin16ToMuLaw(void *, void const *, long)+0x1c>
        123090:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: TMuLawCodec::Delete(void)
 * Address: 00123094
 */
TMuLawCodec::Delete(void) {
    /*
        123094:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuLawCodec::Init(CodecBlock *)
 * Address: 00123098
 */
TMuLawCodec::Init(CodecBlock *) {
    /*
        123098:	e3a00000 	mov	r0, #0	; 0x0
        12309c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuLawCodec::Reset(CodecBlock *)
 * Address: 001230a0
 */
TMuLawCodec::Reset(CodecBlock *) {
    /*
        1230a0:	e5912004 	ldr	r2, [r1, #4]
        1230a4:	e5802010 	str	r2, [r0, #16]	; fField16
        1230a8:	e5912010 	ldr	r2, [r1, #16]	; fField16
        1230ac:	e580201c 	str	r2, [r0, #28]	; fField28
        1230b0:	e5912014 	ldr	r2, [r1, #20]	; fField20
        1230b4:	e5802024 	str	r2, [r0, #36]	; fField36
        1230b8:	e591200c 	ldr	r2, [r1, #12]
        1230bc:	e5802020 	str	r2, [r0, #32]	; fField32
        1230c0:	e5911008 	ldr	r1, [r1, #8]
        1230c4:	e5801014 	str	r1, [r0, #20]	; fField20
        1230c8:	e3a01000 	mov	r1, #0	; 0x0
        1230cc:	e5a01018 	str	r1, [r0, #24]!	; fField24
        1230d0:	e1a00001 	mov	r0, r1
        1230d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuLawCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)
 * Address: 001230d8
 */
TMuLawCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *) {
    /*
        1230d8:	e1a0c00d 	mov	ip, sp
        1230dc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1230e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1230e4:	e1a04000 	mov	r4, r0
        1230e8:	e1a07001 	mov	r7, r1
        1230ec:	e1a05002 	mov	r5, r2
        1230f0:	e1a06003 	mov	r6, r3
        1230f4:	e3a09000 	mov	r9, #0	; 0x0
        1230f8:	e59ba004 	ldr	sl, [fp, #4]
        1230fc:	e5900020 	ldr	r0, [r0, #32]	; fField32
        123100:	e3500000 	cmp	r0, #0	; 0x0
        123104:	b2800007 	addlt	r0, r0, #7	; 0x7
        123108:	e1a001c0 	mov	r0, r0, asr #3
        12310c:	e5951000 	ldr	r1, [r5]
        123110:	eb6a3e0c 	bl	1bb2948 <$__rt_udiv>
        123114:	e1a08000 	mov	r8, r0
        123118:	e3a00000 	mov	r0, #0	; 0x0
        12311c:	e5850000 	str	r0, [r5]
        123120:	e5860000 	str	r0, [r6]
        123124:	e5941010 	ldr	r1, [r4, #16]	; fField16
        123128:	e3310000 	teq	r1, #0	; 0x0
        12312c:	0a00001c 	beq	1231a4 <TMuLawCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xcc>
        123130:	e5940018 	ldr	r0, [r4, #24]	; fField24
        123134:	e0812000 	add	r2, r1, r0
        123138:	e1a01007 	mov	r1, r7
        12313c:	e5943014 	ldr	r3, [r4, #20]	; fField20
        123140:	e0430000 	sub	r0, r3, r0
        123144:	e1580000 	cmp	r8, r0
        123148:	c1a08000 	movgt	r8, r0
        12314c:	e3580000 	cmp	r8, #0	; 0x0
        123150:	da00000c 	ble	123188 <TMuLawCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xb0>
        123154:	e1a03008 	mov	r3, r8
        123158:	e1a00004 	mov	r0, r4
        12315c:	eb696745 	bl	1b7ce78 <TMuLawCodec::$BlockConvertMuLawToLin16(void *, void *, long)>
        123160:	e5940018 	ldr	r0, [r4, #24]	; fField24
        123164:	e0800008 	add	r0, r0, r8
        123168:	e5840018 	str	r0, [r4, #24]	; fField24
        12316c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        123170:	e3500000 	cmp	r0, #0	; 0x0
        123174:	b2800007 	addlt	r0, r0, #7	; 0x7
        123178:	e1a001c0 	mov	r0, r0, asr #3
        12317c:	e0000098 	mul	r0, r8, r0
        123180:	e5850000 	str	r0, [r5]
        123184:	e5868000 	str	r8, [r6]
        123188:	e3a00006 	mov	r0, #6	; 0x6
        12318c:	e58a0010 	str	r0, [sl, #16]	; fField16
        123190:	e3a00010 	mov	r0, #16	; 0x10
        123194:	e58a000c 	str	r0, [sl, #12]
        123198:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        12319c:	e5aa0014 	str	r0, [sl, #20]!	; fField20
        1231a0:	ea000001 	b	1231ac <TMuLawCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xd4>
        1231a4:	e3a09fb2 	mov	r9, #712	; 0x2c8
        1231a8:	e2499b1e 	sub	r9, r9, #30720	; 0x7800
        1231ac:	e1a00009 	mov	r0, r9
        1231b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TMuLawCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)
 * Address: 001231b4
 */
TMuLawCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *) {
    /*
        1231b4:	e1a0c00d 	mov	ip, sp
        1231b8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1231bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1231c0:	e1a04000 	mov	r4, r0
        1231c4:	e1a07001 	mov	r7, r1
        1231c8:	e1a05002 	mov	r5, r2
        1231cc:	e1a06003 	mov	r6, r3
        1231d0:	e3a09000 	mov	r9, #0	; 0x0
        1231d4:	e5900020 	ldr	r0, [r0, #32]	; fField32
        1231d8:	e3500000 	cmp	r0, #0	; 0x0
        1231dc:	b2800007 	addlt	r0, r0, #7	; 0x7
        1231e0:	e1a001c0 	mov	r0, r0, asr #3
        1231e4:	e5951000 	ldr	r1, [r5]
        1231e8:	eb6a3dd6 	bl	1bb2948 <$__rt_udiv>
        1231ec:	e1a08000 	mov	r8, r0
        1231f0:	e3a00000 	mov	r0, #0	; 0x0
        1231f4:	e5850000 	str	r0, [r5]
        1231f8:	e5860000 	str	r0, [r6]
        1231fc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        123200:	e3300000 	teq	r0, #0	; 0x0
        123204:	0a000017 	beq	123268 <TMuLawCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)+0xb4>
        123208:	e1a02007 	mov	r2, r7
        12320c:	e1a01000 	mov	r1, r0
        123210:	e5940018 	ldr	r0, [r4, #24]	; fField24
        123214:	e0811000 	add	r1, r1, r0
        123218:	e5943014 	ldr	r3, [r4, #20]	; fField20
        12321c:	e0430000 	sub	r0, r3, r0
        123220:	e1580000 	cmp	r8, r0
        123224:	c1a08000 	movgt	r8, r0
        123228:	e3580000 	cmp	r8, #0	; 0x0
        12322c:	da00000f 	ble	123270 <TMuLawCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)+0xbc>
        123230:	e1a03008 	mov	r3, r8
        123234:	e1a00004 	mov	r0, r4
        123238:	eb697bb3 	bl	1b8210c <TMuLawCodec::$BlockConvertLin16ToMuLaw(void *, void const *, long)>
        12323c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        123240:	e0800008 	add	r0, r0, r8
        123244:	e5840018 	str	r0, [r4, #24]	; fField24
        123248:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        12324c:	e3500000 	cmp	r0, #0	; 0x0
        123250:	b2800007 	addlt	r0, r0, #7	; 0x7
        123254:	e1a001c0 	mov	r0, r0, asr #3
        123258:	e0000098 	mul	r0, r8, r0
        12325c:	e5850000 	str	r0, [r5]
        123260:	e5868000 	str	r8, [r6]
        123264:	ea000001 	b	123270 <TMuLawCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)+0xbc>
        123268:	e3a09fb2 	mov	r9, #712	; 0x2c8
        12326c:	e2499b1e 	sub	r9, r9, #30720	; 0x7800
        123270:	e1a00009 	mov	r0, r9
        123274:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TMuLawCodec::Start(void)
 * Address: 00123278
 */
TMuLawCodec::Start(void) {
    /*
        123278:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuLawCodec::Stop(int)
 * Address: 0012327c
 */
TMuLawCodec::Stop(int) {
    /*
        12327c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMuLawCodec::BufferCompleted(void)
 * Address: 00123280
 */
TMuLawCodec::BufferCompleted(void) {
    /*
        123280:	e2801014 	add	r1, r0, #20	; 0x14
        123284:	e8910003 	ldmia	r1, {r0, r1}
        123288:	e1310000 	teq	r1, r0
        12328c:	13a00000 	movne	r0, #0	; 0x0
        123290:	03a00001 	moveq	r0, #1	; 0x1
        123294:	e20000ff 	and	r0, r0, #255	; 0xff
        123298:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__11TMuLawCodecSFv
 * Address: 00388e80
 */
void TMuLawCodec::ClassInfo() {
    /*
        388e80:	e24f0044 	sub	r0, pc, #68	; 0x44
        388e84:	e1a0f00e 	mov	pc, lr
        388e88:	e3a00000 	mov	r0, #0	; 0x0
        388e8c:	e1a0f00e 	mov	pc, lr
        388e90:	544d754c 	strplb	r7, [sp], -#1356
        388e94:	6177436f 	cmnvs	r7, pc, ror #6
        388e98:	64656300 	strvsbt	r6, [r5], -#768
        388e9c:	54536f75 	ldrplb	r6, [r3], -#3957
        388ea0:	6e64436f 	cdpvs	3, 6, cr4, cr4, cr15, {3}
        388ea4:	64656300 	strvsbt	r6, [r5], -#768
        388eb0:	eafffff2 	b	388e80 <ClassInfo__11TMuLawCodecSFv>
        388eb4:	ea5fcfe6 	b	1b7ce54 <TMuLawCodec::$New(void)>
        388eb8:	ea5fcfe6 	b	1b7ce58 <TMuLawCodec::$Delete(void)>
        388ebc:	ea5fcfe6 	b	1b7ce5c <TMuLawCodec::$Init(CodecBlock *)>
        388ec0:	ea5fcfe6 	b	1b7ce60 <TMuLawCodec::$Reset(CodecBlock *)>
        388ec4:	ea5fcfe6 	b	1b7ce64 <TMuLawCodec::$Produce(void *, unsigned long *, unsigned long *, CodecBlock *)>
        388ec8:	ea5fcfe6 	b	1b7ce68 <TMuLawCodec::$Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)>
        388ecc:	ea5fcfe6 	b	1b7ce6c <TMuLawCodec::$Start(void)>
        388ed0:	ea5fcfe6 	b	1b7ce70 <TMuLawCodec::$Stop(int)>
        388ed4:	ea5fcfe6 	b	1b7ce74 <TMuLawCodec::$BufferCompleted(void)>
        388ed8:	00000000 	andeq	r0, r0, r0
        388edc:	00000048 	andeq	r0, r0, r8, asr #32
        388ee0:	0000004e 	andeq	r0, r0, lr, asr #32
        388ee4:	00000056 	andeq	r0, r0, r6, asr r0
        388ee8:	00000054 	andeq	r0, r0, r4, asr r0
        388eec:	0000007c 	andeq	r0, r0, ip, ror r0
        388ef0:	ea5fcfc9 	b	1b7ce1c <$Sizeof__9TIMACodecSFv>
        388efc:	ea5fcfc7 	b	1b7ce20 <TIMACodec::$New(void)>
        388f00:	ea5fcfc7 	b	1b7ce24 <TIMACodec::$Delete(void)>
        388f10:	ea000001 	b	388f1c <ClassInfo__9TIMACodecSFv+0x8>
    */
}

