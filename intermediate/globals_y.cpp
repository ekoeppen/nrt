#include "Newton.h"

/**
 * Symbol: Yield(unsigned long)
 * Address: 0025bb94
 */
Yield(unsigned long) {
    /*
        25bb94:	e1a01000 	mov	r1, r0
        25bb98:	e3a0001b 	mov	r0, #27	; 0x1b
        25bb9c:	ea054974 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: yMinMax__FiT1PsN23
 * Address: 003073cc
 */
void globals::yMinMax() {
    /*
        3073cc:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        3073d0:	e3a0c902 	mov	ip, #32768	; 0x8000
        3073d4:	e24cc001 	sub	ip, ip, #1	; 0x1
        3073d8:	e3a0e000 	mov	lr, #0	; 0x0
        3073dc:	e1a05000 	mov	r5, r0
        3073e0:	e1500001 	cmp	r0, r1
        3073e4:	e59d400c 	ldr	r4, [sp, #12]
        3073e8:	ca00000a 	bgt	307418 <yMinMax__FiT1PsN23+0x4c>
        3073ec:	e7920085 	ldr	r0, [r2, r5, lsl #1]
        3073f0:	e1a00840 	mov	r0, r0, asr #16
        3073f4:	e3700001 	cmn	r0, #1	; 0x1
        3073f8:	0a000003 	beq	30740c <yMinMax__FiT1PsN23+0x40>
        3073fc:	e150000e 	cmp	r0, lr
        307400:	c1a0e000 	movgt	lr, r0
        307404:	e150000c 	cmp	r0, ip
        307408:	b1a0c000 	movlt	ip, r0
        30740c:	e2855001 	add	r5, r5, #1	; 0x1
        307410:	e1550001 	cmp	r5, r1
        307414:	dafffff4 	ble	3073ec <yMinMax__FiT1PsN23+0x20>
        307418:	e5c4e001 	strb	lr, [r4, #1]
        30741c:	e1a0044e 	mov	r0, lr, asr #8
        307420:	e5c40000 	strb	r0, [r4]
        307424:	e5c3c001 	strb	ip, [r3, #1]
        307428:	e1a0044c 	mov	r0, ip, asr #8
        30742c:	e5c30000 	strb	r0, [r3]
        307430:	e3a00001 	mov	r0, #1	; 0x1
        307434:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: yHardOverlapRect__FP5_RECTT1Ui
 * Address: 00307f60
 */
void globals::yHardOverlapRect() {
    /*
        307f60:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        307f64:	e590e002 	ldr	lr, [r0, #2]
        307f68:	e1a0e84e 	mov	lr, lr, asr #16
        307f6c:	e5916002 	ldr	r6, [r1, #2]
        307f70:	e1a06846 	mov	r6, r6, asr #16
        307f74:	e15e0006 	cmp	lr, r6
        307f78:	b3a0c000 	movlt	ip, #0	; 0x0
        307f7c:	a3a0c001 	movge	ip, #1	; 0x1
        307f80:	e5903006 	ldr	r3, [r0, #6]
        307f84:	e1a03843 	mov	r3, r3, asr #16
        307f88:	e5911006 	ldr	r1, [r1, #6]
        307f8c:	e1a01841 	mov	r1, r1, asr #16
        307f90:	e1530001 	cmp	r3, r1
        307f94:	c3a04000 	movgt	r4, #0	; 0x0
        307f98:	d3a04001 	movle	r4, #1	; 0x1
        307f9c:	e3a00001 	mov	r0, #1	; 0x1
        307fa0:	e13c0004 	teq	ip, r4
        307fa4:	08bd8070 	ldmeqia	sp!, {r4, r5, r6, pc}
        307fa8:	e08ec003 	add	ip, lr, r3
        307fac:	e1a0c0cc 	mov	ip, ip, asr #1
        307fb0:	e1a0480c 	mov	r4, ip, lsl #16
        307fb4:	e1a04844 	mov	r4, r4, asr #16
        307fb8:	e086c001 	add	ip, r6, r1
        307fbc:	e1a0c0cc 	mov	ip, ip, asr #1
        307fc0:	e1a0c80c 	mov	ip, ip, lsl #16
        307fc4:	e1a0c84c 	mov	ip, ip, asr #16
        307fc8:	e3a05000 	mov	r5, #0	; 0x0
        307fcc:	e1560004 	cmp	r6, r4
        307fd0:	aa000004 	bge	307fe8 <yHardOverlapRect__FP5_RECTT1Ui+0x88>
        307fd4:	e1510004 	cmp	r1, r4
        307fd8:	da000002 	ble	307fe8 <yHardOverlapRect__FP5_RECTT1Ui+0x88>
        307fdc:	e3320000 	teq	r2, #0	; 0x0
        307fe0:	08bd8070 	ldmeqia	sp!, {r4, r5, r6, pc}
        307fe4:	ea000001 	b	307ff0 <yHardOverlapRect__FP5_RECTT1Ui+0x90>
        307fe8:	e3320000 	teq	r2, #0	; 0x0
        307fec:	1a000003 	bne	308000 <yHardOverlapRect__FP5_RECTT1Ui+0xa0>
        307ff0:	e15e000c 	cmp	lr, ip
        307ff4:	aa000001 	bge	308000 <yHardOverlapRect__FP5_RECTT1Ui+0xa0>
        307ff8:	e153000c 	cmp	r3, ip
        307ffc:	c8bd8070 	ldmgtia	sp!, {r4, r5, r6, pc}
        308000:	e1a00005 	mov	r0, r5
        308004:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)
 * Address: 0032bacc
 */
YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *) {
    /*
        32bacc:	e1a0c00d 	mov	ip, sp
        32bad0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        32bad4:	e24cb004 	sub	fp, ip, #4	; 0x4
        32bad8:	e1a05000 	mov	r5, r0
        32badc:	e1a04001 	mov	r4, r1
        32bae0:	e24dd028 	sub	sp, sp, #40	; 0x28
        32bae4:	e5906038 	ldr	r6, [r0, #56]
        32bae8:	e5907034 	ldr	r7, [r0, #52]
        32baec:	e5d20001 	ldrb	r0, [r2, #1]
        32baf0:	e1a01800 	mov	r1, r0, lsl #16
        32baf4:	e1a01841 	mov	r1, r1, asr #16
        32baf8:	e5d20002 	ldrb	r0, [r2, #2]
        32bafc:	e1a00800 	mov	r0, r0, lsl #16
        32bb00:	e1a00840 	mov	r0, r0, asr #16
        32bb04:	e3a09000 	mov	r9, #0	; 0x0
        32bb08:	e5943012 	ldr	r3, [r4, #18]
        32bb0c:	e1a03843 	mov	r3, r3, asr #16
        32bb10:	e3530030 	cmp	r3, #48	; 0x30
        32bb14:	ca000097 	bgt	32bd78 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x2ac>
        32bb18:	e353000f 	cmp	r3, #15	; 0xf
        32bb1c:	ba000095 	blt	32bd78 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x2ac>
        32bb20:	e5943024 	ldr	r3, [r4, #36]
        32bb24:	e1a03843 	mov	r3, r3, asr #16
        32bb28:	e3530012 	cmp	r3, #18	; 0x12
        32bb2c:	d3510006 	cmple	r1, #6	; 0x6
        32bb30:	ca000090 	bgt	32bd78 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x2ac>
        32bb34:	e3510005 	cmp	r1, #5	; 0x5
        32bb38:	ba00008e 	blt	32bd78 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x2ac>
        32bb3c:	e3500004 	cmp	r0, #4	; 0x4
        32bb40:	ca00008c 	bgt	32bd78 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x2ac>
        32bb44:	e3500003 	cmp	r0, #3	; 0x3
        32bb48:	ba00008a 	blt	32bd78 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x2ac>
        32bb4c:	e5921004 	ldr	r1, [r2, #4]
        32bb50:	e1a01841 	mov	r1, r1, asr #16
        32bb54:	e1a00005 	mov	r0, r5
        32bb58:	eb5fd12d 	bl	1b20014 <$GetGroupNumber(low_type *, int)>
        32bb5c:	e1a00800 	mov	r0, r0, lsl #16
        32bb60:	e1a00840 	mov	r0, r0, asr #16
        32bb64:	e5951064 	ldr	r1, [r5, #100]
        32bb68:	e1a01821 	mov	r1, r1, lsr #16
        32bb6c:	e2411001 	sub	r1, r1, #1	; 0x1
        32bb70:	e1a08801 	mov	r8, r1, lsl #16
        32bb74:	e1b08848 	movs	r8, r8, asr #16
        32bb78:	4a00007e 	bmi	32bd78 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x2ac>
        32bb7c:	e2801001 	add	r1, r0, #1	; 0x1
        32bb80:	e240a001 	sub	sl, r0, #1	; 0x1
        32bb84:	e58d1024 	str	r1, [sp, #36]
        32bb88:	e0880088 	add	r0, r8, r8, lsl #1
        32bb8c:	e5951068 	ldr	r1, [r5, #104]
        32bb90:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        32bb94:	e1a01821 	mov	r1, r1, lsr #16
        32bb98:	e5cd1009 	strb	r1, [sp, #9]
        32bb9c:	e1a01441 	mov	r1, r1, asr #8
        32bba0:	e5cd1008 	strb	r1, [sp, #8]
        32bba4:	e5951068 	ldr	r1, [r5, #104]
        32bba8:	e0810100 	add	r0, r1, r0, lsl #2
        32bbac:	e5900002 	ldr	r0, [r0, #2]
        32bbb0:	e1a00820 	mov	r0, r0, lsr #16
        32bbb4:	e5cd000b 	strb	r0, [sp, #11]
        32bbb8:	e1a00440 	mov	r0, r0, asr #8
        32bbbc:	e5cd000a 	strb	r0, [sp, #10]
        32bbc0:	e59d1008 	ldr	r1, [sp, #8]
        32bbc4:	e1a01841 	mov	r1, r1, asr #16
        32bbc8:	e1a00005 	mov	r0, r5
        32bbcc:	eb5fd110 	bl	1b20014 <$GetGroupNumber(low_type *, int)>
        32bbd0:	e1a00800 	mov	r0, r0, lsl #16
        32bbd4:	e1a00840 	mov	r0, r0, asr #16
        32bbd8:	e15a0000 	cmp	sl, r0
        32bbdc:	ca000065 	bgt	32bd78 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x2ac>
        32bbe0:	e59d1024 	ldr	r1, [sp, #36]
        32bbe4:	e1310000 	teq	r1, r0
        32bbe8:	113a0000 	teqne	sl, r0
        32bbec:	1a00005d 	bne	32bd68 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x29c>
        32bbf0:	e28d3004 	add	r3, sp, #4	; 0x4
        32bbf4:	e92d0008 	stmdb	sp!, {r3}
        32bbf8:	e59d100e 	ldr	r1, [sp, #14]
        32bbfc:	e1a01841 	mov	r1, r1, asr #16
        32bc00:	e28d3004 	add	r3, sp, #4	; 0x4
        32bc04:	e1a02006 	mov	r2, r6
        32bc08:	e59d000c 	ldr	r0, [sp, #12]
        32bc0c:	e1a00840 	mov	r0, r0, asr #16
        32bc10:	eb5fe9d2 	bl	1b26360 <$yMinMax__FiT1PsN23>
        32bc14:	e28dd004 	add	sp, sp, #4	; 0x4
        32bc18:	e59d0004 	ldr	r0, [sp, #4]
        32bc1c:	e1a00840 	mov	r0, r0, asr #16
        32bc20:	e250cd9f 	subs	ip, r0, #10176	; 0x27c0
        32bc24:	a35c0026 	cmpge	ip, #38	; 0x26
        32bc28:	ba000052 	blt	32bd78 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x2ac>
        32bc2c:	e5940002 	ldr	r0, [r4, #2]
        32bc30:	e1a00820 	mov	r0, r0, lsr #16
        32bc34:	e5cd0015 	strb	r0, [sp, #21]
        32bc38:	e1a00440 	mov	r0, r0, asr #8
        32bc3c:	e5cd0014 	strb	r0, [sp, #20]
        32bc40:	e5940004 	ldr	r0, [r4, #4]
        32bc44:	e1a00820 	mov	r0, r0, lsr #16
        32bc48:	e5cd0017 	strb	r0, [sp, #23]
        32bc4c:	e1a00440 	mov	r0, r0, asr #8
        32bc50:	e5cd0016 	strb	r0, [sp, #22]
        32bc54:	e28d3008 	add	r3, sp, #8	; 0x8
        32bc58:	e28d2014 	add	r2, sp, #20	; 0x14
        32bc5c:	e28d1020 	add	r1, sp, #32	; 0x20
        32bc60:	e1a00005 	mov	r0, r5
        32bc64:	eb5fccbc 	bl	1b1ef5c <$Find_Cross__FP8low_typeP13PS_point_typeP12POINTS_GROUPT3>
        32bc68:	e3300001 	teq	r0, #1	; 0x1
        32bc6c:	1a00003d 	bne	32bd68 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x29c>
        32bc70:	e5941004 	ldr	r1, [r4, #4]
        32bc74:	e1a01841 	mov	r1, r1, asr #16
        32bc78:	e5940002 	ldr	r0, [r4, #2]
        32bc7c:	e1a00840 	mov	r0, r0, asr #16
        32bc80:	e1a03006 	mov	r3, r6
        32bc84:	e1a02007 	mov	r2, r7
        32bc88:	eb5fe598 	bl	1b252f0 <$ixMin__FiT1PsT3>
        32bc8c:	e1a05800 	mov	r5, r0, lsl #16
        32bc90:	e1a05845 	mov	r5, r5, asr #16
        32bc94:	e5941004 	ldr	r1, [r4, #4]
        32bc98:	e1a01841 	mov	r1, r1, asr #16
        32bc9c:	e5940002 	ldr	r0, [r4, #2]
        32bca0:	e1a00840 	mov	r0, r0, asr #16
        32bca4:	e1a03006 	mov	r3, r6
        32bca8:	e1a02007 	mov	r2, r7
        32bcac:	eb5fe58e 	bl	1b252ec <$ixMax__FiT1PsT3>
        32bcb0:	e1a04800 	mov	r4, r0, lsl #16
        32bcb4:	e1a04844 	mov	r4, r4, asr #16
        32bcb8:	e7971085 	ldr	r1, [r7, r5, lsl #1]
        32bcbc:	e1a01821 	mov	r1, r1, lsr #16
        32bcc0:	e59d0022 	ldr	r0, [sp, #34]
        32bcc4:	e0400001 	sub	r0, r0, r1
        32bcc8:	e1a00800 	mov	r0, r0, lsl #16
        32bccc:	e1a00840 	mov	r0, r0, asr #16
        32bcd0:	e59d1020 	ldr	r1, [sp, #32]
        32bcd4:	e7962085 	ldr	r2, [r6, r5, lsl #1]
        32bcd8:	e1a02822 	mov	r2, r2, lsr #16
        32bcdc:	e0411002 	sub	r1, r1, r2
        32bce0:	e1a01801 	mov	r1, r1, lsl #16
        32bce4:	e1a01841 	mov	r1, r1, asr #16
        32bce8:	e0020090 	mul	r2, r0, r0
        32bcec:	e0202191 	mla	r0, r1, r1, r2
        32bcf0:	eb5fbc0d 	bl	1b1ad2c <$HWRMathILSqrt(long)>
        32bcf4:	e1a05000 	mov	r5, r0
        32bcf8:	e7971084 	ldr	r1, [r7, r4, lsl #1]
        32bcfc:	e1a01821 	mov	r1, r1, lsr #16
        32bd00:	e59d0022 	ldr	r0, [sp, #34]
        32bd04:	e0400001 	sub	r0, r0, r1
        32bd08:	e1a00800 	mov	r0, r0, lsl #16
        32bd0c:	e1a00840 	mov	r0, r0, asr #16
        32bd10:	e59d1020 	ldr	r1, [sp, #32]
        32bd14:	e7962084 	ldr	r2, [r6, r4, lsl #1]
        32bd18:	e1a02822 	mov	r2, r2, lsr #16
        32bd1c:	e0411002 	sub	r1, r1, r2
        32bd20:	e1a01801 	mov	r1, r1, lsl #16
        32bd24:	e1a01841 	mov	r1, r1, asr #16
        32bd28:	e0020090 	mul	r2, r0, r0
        32bd2c:	e0202191 	mla	r0, r1, r1, r2
        32bd30:	eb5fbbfd 	bl	1b1ad2c <$HWRMathILSqrt(long)>
        32bd34:	e3300000 	teq	r0, #0	; 0x0
        32bd38:	0a000006 	beq	32bd58 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x28c>
        32bd3c:	e0851185 	add	r1, r5, r5, lsl #3
        32bd40:	e0811205 	add	r1, r1, r5, lsl #4
        32bd44:	e1a01101 	mov	r1, r1, lsl #2
        32bd48:	eb621afc 	bl	1bb2940 <$__rt_sdiv>
        32bd4c:	e35000fa 	cmp	r0, #250	; 0xfa
        32bd50:	ba000008 	blt	32bd78 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x2ac>
        32bd54:	ea000001 	b	32bd60 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x294>
        32bd58:	e355000f 	cmp	r5, #15	; 0xf
        32bd5c:	da000005 	ble	32bd78 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x2ac>
        32bd60:	e3a09001 	mov	r9, #1	; 0x1
        32bd64:	ea000003 	b	32bd78 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0x2ac>
        32bd68:	e2480001 	sub	r0, r8, #1	; 0x1
        32bd6c:	e1a08800 	mov	r8, r0, lsl #16
        32bd70:	e1b08848 	movs	r8, r8, asr #16
        32bd74:	5affff83 	bpl	32bb88 <YFilter(low_type *, _SDS_TYPE *, SPEC_TYPE *)+0xbc>
        32bd78:	e1a00009 	mov	r0, r9
        32bd7c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: yylhs
 * Address: 0037aed0
 */
void globals::yylhs() {
    /*
        37aed0:	ffff0000 	swinv	0x00ff0000
        37aed4:	00000001 	andeq	r0, r0, r1
        37aed8:	002d0001 	eoreq	r0, sp, r1
        37aedc:	00020002 	andeq	r0, r2, r2
        37aee0:	00030003 	andeq	r0, r3, r3
        37aee4:	00030003 	andeq	r0, r3, r3
        37aee8:	00030003 	andeq	r0, r3, r3
        37aeec:	00030003 	andeq	r0, r3, r3
        37aef0:	00030003 	andeq	r0, r3, r3
        37aef4:	00030003 	andeq	r0, r3, r3
        37aef8:	00030003 	andeq	r0, r3, r3
        37aefc:	00030003 	andeq	r0, r3, r3
        37af00:	00030003 	andeq	r0, r3, r3
        37af04:	00030003 	andeq	r0, r3, r3
        37af08:	00030003 	andeq	r0, r3, r3
        37af0c:	00030003 	andeq	r0, r3, r3
        37af10:	00030003 	andeq	r0, r3, r3
        37af14:	00030003 	andeq	r0, r3, r3
        37af18:	00030003 	andeq	r0, r3, r3
        37af1c:	00030003 	andeq	r0, r3, r3
        37af20:	00030003 	andeq	r0, r3, r3
        37af24:	00030003 	andeq	r0, r3, r3
        37af28:	00030003 	andeq	r0, r3, r3
        37af2c:	00030004 	andeq	r0, r3, r4
        37af30:	00040004 	andeq	r0, r4, r4
        37af34:	00040004 	andeq	r0, r4, r4
        37af38:	00050005 	andeq	r0, r5, r5
        37af3c:	00050005 	andeq	r0, r5, r5
        37af40:	00060007 	andeq	r0, r6, r7
        37af44:	00170008 	andeqs	r0, r7, r8
        37af48:	00080008 	andeq	r0, r8, r8
        37af4c:	00080009 	andeq	r0, r8, r9
        37af50:	0009000a 	andeq	r0, r9, sl
        37af54:	000a000b 	andeq	r0, sl, fp
        37af58:	000b000d 	andeq	r0, fp, sp
        37af5c:	000d000c 	andeq	r0, sp, ip
        37af60:	000c000c 	andeq	r0, ip, ip
        37af64:	000c000c 	andeq	r0, ip, ip
        37af68:	000c000e 	andeq	r0, ip, lr
        37af6c:	000e000f 	andeq	r0, lr, pc
        37af70:	000f000f 	andeq	r0, pc, pc
        37af74:	000f000f 	andeq	r0, pc, pc
        37af78:	00100012 	andeqs	r0, r0, r2, lsl r0
        37af7c:	00120011 	andeqs	r0, r2, r1, lsl r0
        37af80:	00110019 	andeqs	r0, r1, r9, lsl r0
        37af84:	00190018 	andeqs	r0, r9, r8, lsl r0
        37af88:	00180013 	andeqs	r0, r8, r3, lsl r0
        37af8c:	0014001b 	andeqs	r0, r4, fp, lsl r0
        37af90:	001b001b 	andeqs	r0, fp, fp, lsl r0
        37af94:	0015001d 	andeqs	r0, r5, sp, lsl r0
        37af98:	001d0016 	andeqs	r0, sp, r6, lsl r0
        37af9c:	001c001c 	andeqs	r0, ip, ip, lsl r0
        37afa0:	001c001f 	andeqs	r0, ip, pc, lsl r0
        37afa4:	001f0020 	andeqs	r0, pc, r0, lsr #32
        37afa8:	0020001e 	eoreq	r0, r0, lr, lsl r0
        37afac:	001e001e 	andeqs	r0, lr, lr, lsl r0
        37afb0:	00230023 	eoreq	r0, r3, r3, lsr #32
        37afb4:	00240024 	eoreq	r0, r4, r4, lsr #32
        37afb8:	00240024 	eoreq	r0, r4, r4, lsr #32
        37afbc:	00210021 	eoreq	r0, r1, r1, lsr #32
        37afc0:	00210021 	eoreq	r0, r1, r1, lsr #32
        37afc4:	001a001a 	andeqs	r0, sl, sl, lsl r0
        37afc8:	001a0022 	andeqs	r0, sl, r2, lsr #32
        37afcc:	00220025 	eoreq	r0, r2, r5, lsr #32
        37afd0:	00250026 	eoreq	r0, r5, r6, lsr #32
        37afd4:	00260027 	eoreq	r0, r6, r7, lsr #32
        37afd8:	00270027 	eoreq	r0, r7, r7, lsr #32
        37afdc:	00270027 	eoreq	r0, r7, r7, lsr #32
        37afe0:	00270027 	eoreq	r0, r7, r7, lsr #32
        37afe4:	00270027 	eoreq	r0, r7, r7, lsr #32
        37afe8:	00270028 	eoreq	r0, r7, r8, lsr #32
        37afec:	00280029 	eoreq	r0, r8, r9, lsr #32
        37aff0:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37aff4:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37aff8:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37affc:	002c0000 	eoreq	r0, ip, r0
    */
}

/**
 * Symbol: yylen
 * Address: 0037b000
 */
void globals::yylen() {
    /*
        37b000:	00020000 	andeq	r0, r2, r0
        37b004:	00010001 	andeq	r0, r1, r1
        37b008:	00000004 	andeq	r0, r0, r4
        37b00c:	00010001 	andeq	r0, r1, r1
        37b010:	00010001 	andeq	r0, r1, r1
        37b014:	00010001 	andeq	r0, r1, r1
        37b018:	00030003 	andeq	r0, r3, r3
        37b01c:	00030003 	andeq	r0, r3, r3
        37b020:	00030003 	andeq	r0, r3, r3
        37b024:	00030003 	andeq	r0, r3, r3
        37b028:	00030003 	andeq	r0, r3, r3
        37b02c:	00020003 	andeq	r0, r2, r3
        37b030:	00030003 	andeq	r0, r3, r3
        37b034:	00030003 	andeq	r0, r3, r3
        37b038:	00030003 	andeq	r0, r3, r3
        37b03c:	00030003 	andeq	r0, r3, r3
        37b040:	00030002 	andeq	r0, r3, r2
        37b044:	00020002 	andeq	r0, r2, r2
        37b048:	00010001 	andeq	r0, r1, r1
        37b04c:	00010001 	andeq	r0, r1, r1
        37b050:	00010001 	andeq	r0, r1, r1
        37b054:	00010001 	andeq	r0, r1, r1
        37b058:	00010001 	andeq	r0, r1, r1
        37b05c:	00010001 	andeq	r0, r1, r1
        37b060:	00010001 	andeq	r0, r1, r1
        37b064:	00020001 	andeq	r0, r2, r1
        37b068:	00010005 	andeq	r0, r1, r5
        37b06c:	00030004 	andeq	r0, r3, r4
        37b070:	00030002 	andeq	r0, r3, r2
        37b074:	00020002 	andeq	r0, r2, r2
        37b078:	00040006 	andeq	r0, r4, r6
        37b07c:	00060002 	andeq	r0, r6, r2
        37b080:	00010002 	andeq	r0, r1, r2
        37b084:	00010004 	andeq	r0, r1, r4
        37b088:	00060003 	andeq	r0, r6, r3
        37b08c:	00020006 	andeq	r0, r2, r6
        37b090:	00060005 	andeq	r0, r6, r5
        37b094:	00060006 	andeq	r0, r6, r6
        37b098:	00050006 	andeq	r0, r5, r6
        37b09c:	00040001 	andeq	r0, r4, r1
        37b0a0:	00010001 	andeq	r0, r1, r1
        37b0a4:	00010001 	andeq	r0, r1, r1
        37b0a8:	00020008 	andeq	r0, r2, r8
        37b0ac:	000a0009 	andeq	r0, sl, r9
        37b0b0:	00070000 	andeq	r0, r7, r0
        37b0b4:	00010001 	andeq	r0, r1, r1
        37b0b8:	00010004 	andeq	r0, r1, r4
        37b0bc:	00040005 	andeq	r0, r4, r5
        37b0c0:	00060006 	andeq	r0, r6, r6
        37b0c4:	00030001 	andeq	r0, r3, r1
        37b0c8:	00020004 	andeq	r0, r2, r4
        37b0cc:	00030005 	andeq	r0, r3, r5
        37b0d0:	00030000 	andeq	r0, r3, r0
        37b0d4:	00010001 	andeq	r0, r1, r1
        37b0d8:	00030000 	andeq	r0, r3, r0
        37b0dc:	00010003 	andeq	r0, r1, r3
        37b0e0:	00000001 	andeq	r0, r0, r1
        37b0e4:	00010002 	andeq	r0, r1, r2
        37b0e8:	00030004 	andeq	r0, r3, r4
        37b0ec:	00020003 	andeq	r0, r2, r3
        37b0f0:	00030005 	andeq	r0, r3, r5
        37b0f4:	00000001 	andeq	r0, r0, r1
        37b0f8:	00030003 	andeq	r0, r3, r3
        37b0fc:	00050000 	andeq	r0, r5, r0
        37b100:	00010003 	andeq	r0, r1, r3
        37b104:	00050001 	andeq	r0, r5, r1
        37b108:	00010002 	andeq	r0, r1, r2
        37b10c:	00010002 	andeq	r0, r1, r2
        37b110:	00010001 	andeq	r0, r1, r1
        37b114:	00030005 	andeq	r0, r3, r5
        37b118:	00030001 	andeq	r0, r3, r1
        37b11c:	00030000 	andeq	r0, r3, r0
        37b120:	00010001 	andeq	r0, r1, r1
        37b124:	00030000 	andeq	r0, r3, r0
        37b128:	00010003 	andeq	r0, r1, r3
        37b12c:	00050000 	andeq	r0, r5, r0
    */
}

/**
 * Symbol: yydefred
 * Address: 0037b130
 */
void globals::yydefred() {
    /*
        37b130:	0000002f 	andeq	r0, r0, pc, lsr #32
        37b134:	00000030 	andeq	r0, r0, r0, lsr r0
        37b138:	00310033 	eoreqs	r0, r1, r3, lsr r0
        37b154:	0000000b 	andeq	r0, r0, fp
        37b170:	00000003 	andeq	r0, r0, r3
        37b174:	00000008 	andeq	r0, r0, r8
        37b178:	0000000a 	andeq	r0, r0, sl
        37b17c:	002b0007 	eoreq	r0, fp, r7
        37b180:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37b184:	00240025 	eoreq	r0, r4, r5, lsr #32
        37b188:	00000026 	andeq	r0, r0, r6, lsr #32
        37b18c:	0027004f 	eoreq	r0, r7, pc, asr #32
        37b190:	00510050 	subeqs	r0, r1, r0, asr r0
        37b194:	00520053 	subeqs	r0, r2, r3, asr r0
        37b198:	0029002c 	eoreq	r0, r9, ip, lsr #32
        37b19c:	0028002a 	eoreq	r0, r8, sl, lsr #32
        37b1e4:	0083008d 	addeq	r0, r3, sp, lsl #1
        37b1e8:	00840086 	addeq	r0, r4, r6, lsl #1
        37b1ec:	00880000 	addeq	r0, r8, r0
        37b1f0:	00000000 	andeq	r0, r0, r0
        37b1f4:	00320000 	eoreqs	r0, r2, r0
        37b1f8:	00000000 	andeq	r0, r0, r0
        37b1fc:	00000004 	andeq	r0, r0, r4
        37b22c:	00000022 	andeq	r0, r0, r2, lsr #32
        37b230:	00230000 	eoreq	r0, r3, r0
        37b234:	000c0000 	andeq	r0, ip, r0
        37b250:	00630000 	rsbeq	r0, r3, r0
        37b254:	00000000 	andeq	r0, r0, r0
        37b258:	00760000 	rsbeqs	r0, r6, r0
        37b264:	005a0000 	subeqs	r0, sl, r0
        37b270:	00660000 	rsbeq	r0, r6, r0
        37b274:	00000000 	andeq	r0, r0, r0
        37b278:	000d0085 	andeq	r0, sp, r5, lsl #1
        37b27c:	00870000 	addeq	r0, r7, r0
        37b280:	00910000 	addeqs	r0, r1, r0
        37b290:	00680000 	rsbeq	r0, r8, r0
        37b2c0:	00360000 	eoreqs	r0, r6, r0
        37b2c4:	00000043 	andeq	r0, r0, r3, asr #32
        37b2d0:	00730000 	rsbeqs	r0, r3, r0
        37b2e0:	00000064 	andeq	r0, r0, r4, rrx
        37b304:	008a0000 	addeq	r0, sl, r0
        37b308:	0000008c 	andeq	r0, r0, ip, lsl #1
        37b30c:	0000008e 	andeq	r0, r0, lr, lsl #1
        37b310:	00000000 	andeq	r0, r0, r0
        37b314:	00050037 	andeq	r0, r5, r7, lsr r0
        37b340:	00670049 	rsbeq	r0, r7, r9, asr #32
        37b344:	004c0000 	subeq	r0, ip, r0
        37b348:	00920095 	umulleqs	r0, r2, r5, r0
        37b354:	00350000 	eoreqs	r0, r5, r0
        37b358:	00000000 	andeq	r0, r0, r0
        37b35c:	00750000 	rsbeqs	r0, r5, r0
        37b360:	007e0000 	rsbeqs	r0, lr, r0
        37b364:	00000000 	andeq	r0, r0, r0
        37b368:	00000044 	andeq	r0, r0, r4, asr #32
        37b36c:	0000005c 	andeq	r0, r0, ip, asr r0
        37b370:	005b0000 	subeqs	r0, fp, r0
        37b374:	0048004b 	subeq	r0, r8, fp, asr #32
        37b378:	008b0000 	addeq	r0, fp, r0
        37b37c:	00000047 	andeq	r0, r0, r7, asr #32
        37b380:	004a0000 	subeq	r0, sl, r0
        37b384:	00000000 	andeq	r0, r0, r0
        37b388:	00000096 	muleq	r0, r6, r0
    */
}

/**
 * Symbol: yydgoto
 * Address: 0037b398
 */
void globals::yydgoto() {
    /*
        37b398:	001f0020 	andeqs	r0, pc, r0, lsr #32
        37b39c:	00210054 	eoreq	r0, r1, r4, asr r0
        37b3a0:	00230024 	eoreq	r0, r3, r4, lsr #32
        37b3a4:	00250026 	eoreq	r0, r5, r6, lsr #32
        37b3a8:	00270028 	eoreq	r0, r7, r8, lsr #32
        37b3ac:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37b3b0:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37b3b4:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37b3b8:	002f0030 	eoreq	r0, pc, r0, lsr r0
        37b3bc:	00310032 	eoreqs	r0, r1, r2, lsr r0
        37b3c0:	00330034 	eoreqs	r0, r3, r4, lsr r0
        37b3c4:	00900035 	addeqs	r0, r0, r5, lsr r0
        37b3c8:	0121009c 	streqb	r0, [r1, -ip]!
        37b3cc:	00940036 	addeqs	r0, r4, r6, lsr r0
        37b3d0:	00370091 	mlaeqs	r7, r1, r0, r0
        37b3d4:	003b0055 	eoreqs	r0, fp, r5, asr r0
        37b3d8:	00560046 	subeqs	r0, r6, r6, asr #32
        37b3dc:	00420088 	subeq	r0, r2, r8, lsl #1
        37b3e0:	00890065 	addeq	r0, r9, r5, rrx
        37b3e4:	006600a8 	rsbeq	r0, r6, r8, lsr #1
        37b3e8:	006300a9 	rsbeq	r0, r3, r9, lsr #1
        37b3ec:	00aa00ac 	adceq	r0, sl, ip, lsr #1
        37b3f0:	00ad00b2 	streqh	r0, [sp], r2
    */
}

/**
 * Symbol: yysindex
 * Address: 0037b3f4
 */
void globals::yysindex() {
    /*
        37b3f4:	0ef70000 	cdpeq	0, 15, cr0, cr7, cr0, {0}
        37b3f8:	fff10000 	swinv	0x00f10000
        37b3fc:	00000000 	andeq	r0, r0, r0
        37b400:	0fc9ffdf 	swieq	0x00c9ffdf
        37b404:	ff1aff1f 	swinv	0x001aff1f
        37b408:	0fc90fc9 	swieq	0x00c90fc9
        37b40c:	ff260fc9 	swinv	0x00260fc9
        37b410:	ff3d0fc9 	swinv	0x003d0fc9
        37b414:	0fc90fc9 	swieq	0x00c90fc9
        37b418:	ff410000 	swinv	0x00410000
        37b41c:	ffcb0fc9 	swinv	0x00cb0fc9
        37b420:	0fc90fc9 	swieq	0x00c90fc9
        37b424:	0fc90ff9 	swieq	0x00c90ff9
        37b428:	ff44ff47 	swinv	0x0044ff47
        37b42c:	0fc900ac 	swieq	0x00c900ac
        37b430:	ff480000 	swinv	0x00480000
        37b434:	00160000 	andeqs	r0, r6, r0
        37b438:	0f720000 	swieq	0x00720000
        37b43c:	ff090000 	swinv	0x00090000
        37b44c:	ff270000 	swinv	0x00270000
        37b464:	0fc9ffde 	swieq	0x00c9ffde
        37b468:	0f72ffcd 	swieq	0x0072ffcd
        37b46c:	00320033 	eoreqs	r0, r2, r3, lsr r0
        37b470:	0040ff67 	subeq	pc, r0, r7, ror #30
        37b474:	ffd8ff42 	swinv	0x00d8ff42
        37b478:	00420dc6 	subeq	r0, r2, r6, asr #27
        37b47c:	ffe4ff19 	swinv	0x00e4ff19
        37b480:	00430f72 	subeq	r0, r3, r2, ror pc
        37b484:	ff430d9e 	swinv	0x00430d9e
        37b488:	ffd20de0 	swinv	0x00d20de0
        37b48c:	ffd7ff6d 	swinv	0x00d7ff6d
        37b490:	ff760f72 	swinv	0x00760f72
        37b494:	0f720f87 	swieq	0x00720f87
        37b498:	ffddfff9 	swinv	0x00ddfff9
        37b49c:	0f72001e 	swieq	0x0072001e
        37b4a0:	004e0054 	subeq	r0, lr, r4, asr r0
        37b4a4:	00570e00 	subeqs	r0, r7, r0, lsl #28
        37b4b0:	0000ff31 	andeq	pc, r0, r1, lsr pc
        37b4b4:	00f7ff7f 	rsceqs	pc, r7, pc, ror pc
        37b4b8:	00000055 	andeq	r0, r0, r5, asr r0
        37b4bc:	004a000a 	subeq	r0, sl, sl
        37b4c0:	005f0000 	subeqs	r0, pc, r0
        37b4c4:	0fc90fc9 	swieq	0x00c90fc9
        37b4c8:	0fc90fc9 	swieq	0x00c90fc9
        37b4cc:	0fc90fc9 	swieq	0x00c90fc9
        37b4d0:	0fc90fc9 	swieq	0x00c90fc9
        37b4d4:	0fc90fc9 	swieq	0x00c90fc9
        37b4d8:	0fc90fc9 	swieq	0x00c90fc9
        37b4dc:	0fc90fc9 	swieq	0x00c90fc9
        37b4e0:	0fc90fc9 	swieq	0x00c90fc9
        37b4e4:	0fc90fc9 	swieq	0x00c90fc9
        37b4e8:	0fc9ff89 	swieq	0x00c9ff89
        37b4ec:	ff8affda 	swinv	0x008affda
        37b4f0:	0fc90000 	swieq	0x00c90000
        37b4f4:	00000065 	andeq	r0, r0, r5, rrx
        37b4f8:	00000fc9 	andeq	r0, r0, r9, asr #31
        37b4fc:	ff67ff67 	swinv	0x0067ff67
        37b500:	ff67ff8c 	swinv	0x0067ff8c
        37b504:	00670071 	rsbeq	r0, r7, r1, ror r0
        37b508:	0fc9ff67 	swieq	0x00c9ff67
        37b50c:	0fc9ff8e 	swieq	0x00c9ff8e
        37b510:	0fc9ff9b 	swieq	0x00c9ff9b
        37b514:	0000ff8d 	andeq	pc, r0, sp, lsl #31
        37b518:	ff770fc9 	swinv	0x00770fc9
        37b51c:	0000ff9e 	muleq	r0, lr, pc
        37b520:	0fc90fc9 	swieq	0x00c90fc9
        37b524:	0fc9007a 	swieq	0x00c9007a
        37b528:	0000ffa0 	andeq	pc, r0, r0, lsr #31
        37b52c:	ff82007e 	swinv	0x0082007e
        37b530:	00820fc9 	addeq	r0, r2, r9, asr #31
        37b534:	00000fc9 	andeq	r0, r0, r9, asr #31
        37b538:	0fc90fc9 	swieq	0x00c90fc9
        37b53c:	00000000 	andeq	r0, r0, r0
        37b540:	00000072 	andeq	r0, r0, r2, ror r0
        37b544:	00000050 	andeq	r0, r0, r0, asr r0
        37b548:	00830074 	addeq	r0, r3, r4, ror r0
        37b54c:	00340084 	eoreqs	r0, r4, r4, lsl #1
        37b550:	ffaf0fc9 	swinv	0x00af0fc9
        37b554:	0000ffb0 	streqh	pc, [r0], -r0
        37b558:	0ef70f87 	cdpeq	15, 15, cr0, cr7, cr7, {4}
        37b55c:	0f87005b 	swieq	0x0087005b
        37b560:	005b005b 	subeqs	r0, fp, fp, asr r0
        37b564:	005b005b 	subeqs	r0, fp, fp, asr r0
        37b568:	005b0025 	subeqs	r0, fp, r5, lsr #32
        37b56c:	00250092 	mlaeq	r5, r2, r0, r0
        37b570:	0092ffd6 	ldreqsb	pc, [r2], r6
        37b574:	ffd6ffd6 	swinv	0x00d6ffd6
        37b578:	ffd6ffdd 	swinv	0x00d6ffdd
        37b57c:	ffdd0e37 	swinv	0x00dd0e37
        37b580:	008d008f 	addeq	r0, sp, pc, lsl #1
        37b584:	00000fc9 	andeq	r0, r0, r9, asr #31
        37b588:	0f720000 	swieq	0x00720000
        37b58c:	0f720090 	swieq	0x00720090
        37b590:	00910094 	umulleqs	r0, r1, r4, r0
        37b594:	00000fc9 	andeq	r0, r0, r9, asr #31
        37b598:	ffb50f72 	swinv	0x00b50f72
        37b59c:	00950f72 	addeqs	r0, r5, r2, ror pc
        37b5a0:	ff920e4c 	swinv	0x00920e4c
        37b5a4:	ffa20000 	swinv	0x00a20000
        37b5a8:	0fc90f72 	swieq	0x00c90f72
        37b5ac:	ff990eb1 	swinv	0x00990eb1
        37b5b0:	0f720f72 	swieq	0x00720f72
        37b5b4:	0fc9ffa1 	swieq	0x00c9ffa1
        37b5b8:	0fc90fc9 	swieq	0x00c90fc9
        37b5bc:	0fc90066 	swieq	0x00c90066
        37b5c0:	0f72009c 	swieq	0x0072009c
        37b5c4:	009d00ac 	addeqs	r0, sp, ip, lsr #1
        37b5c8:	000000ac 	andeq	r0, r0, ip, lsr #1
        37b5cc:	00ac0000 	adceq	r0, ip, r0
        37b5d0:	ffc40000 	swinv	0x00c40000
        37b5d4:	0f720093 	swieq	0x00720093
        37b5d8:	00000000 	andeq	r0, r0, r0
        37b5dc:	0fc90fc9 	swieq	0x00c90fc9
        37b5e0:	0f130fc9 	swieq	0x00130fc9
        37b5e4:	0fc90fc9 	swieq	0x00c90fc9
        37b5e8:	0f72ffc6 	swieq	0x0072ffc6
        37b5ec:	0fc9ffee 	swieq	0x00c9ffee
        37b5f0:	0fc90fc9 	swieq	0x00c90fc9
        37b5f4:	0f720fc9 	swieq	0x00720fc9
        37b5f8:	0fc900ad 	swieq	0x00c900ad
        37b5fc:	ffb60d24 	swinv	0x00b60d24
        37b600:	00ae00b5 	streqh	r0, [lr], r5
        37b604:	00000000 	andeq	r0, r0, r0
        37b608:	00000087 	andeq	r0, r0, r7, lsl #1
        37b60c:	00000000 	andeq	r0, r0, r0
        37b610:	00ab0fc9 	adceq	r0, fp, r9, asr #31
        37b614:	00be00c3 	adceqs	r0, lr, r3, asr #1
        37b618:	00000f72 	andeq	r0, r0, r2, ror pc
        37b61c:	0f720f72 	swieq	0x00720f72
        37b620:	00000f72 	andeq	r0, r0, r2, ror pc
        37b624:	00000f72 	andeq	r0, r0, r2, ror pc
        37b628:	0f720f72 	swieq	0x00720f72
        37b62c:	0d7e0000 	ldceql	0, cr0, [lr]
        37b630:	0fc90000 	swieq	0x00c90000
        37b634:	00000fc9 	andeq	r0, r0, r9, asr #31
        37b638:	00000000 	andeq	r0, r0, r0
        37b63c:	000000ac 	andeq	r0, r0, ip, lsr #1
        37b640:	0f720000 	swieq	0x00720000
        37b644:	00000fc9 	andeq	r0, r0, r9, asr #31
        37b648:	0fc90d24 	swieq	0x00c90d24
        37b64c:	0f720000 	swieq	0x00720000
        37b650:	0f5d0f72 	swieq	0x005d0f72
        37b654:	0fc90fc9 	swieq	0x00c90fc9
        37b658:	0f720f72 	swieq	0x00720f72
    */
}

/**
 * Symbol: yyrindex
 * Address: 0037b65c
 */
void globals::yyrindex() {
    /*
        37b65c:	00f80000 	rsceqs	r0, r8, r0
        37b660:	00010000 	andeq	r0, r1, r0
        37b664:	00000000 	andeq	r0, r0, r0
        37b668:	ffd40000 	swinv	0x00d40000
        37b66c:	00000000 	andeq	r0, r0, r0
        37b670:	0000ffe5 	andeq	pc, r0, r5, ror #31
        37b67c:	ffd30000 	swinv	0x00d30000
        37b680:	00000000 	andeq	r0, r0, r0
        37b684:	0000051d 	andeq	r0, r0, sp, lsl r5
        37b688:	054d0000 	streqb	r0, [sp]
        37b68c:	0000009f 	muleq	r0, pc, r0
        37b698:	007c0000 	rsbeqs	r0, ip, r0
        37b69c:	00fd0000 	rsceqs	r0, sp, r0
        37b6a0:	00110000 	andeqs	r0, r1, r0
        37b6a4:	00370000 	eoreqs	r0, r7, r0
        37b6cc:	00d50000 	sbceqs	r0, r5, r0
        37b6d0:	ffe30000 	swinv	0x00e30000
        37b6d4:	00000000 	andeq	r0, r0, r0
        37b6d8:	000000dd 	ldreqd	r0, [r0], -sp
        37b6dc:	00120000 	andeqs	r0, r2, r0
        37b6e0:	01b60000 	moveqs	r0, r0
        37b6e4:	000001ec 	andeq	r0, r0, ip, ror #3
        37b6e8:	022200e6 	eoreq	r0, r2, #230	; 0xe6
        37b6f4:	ffe60000 	swinv	0x00e60000
        37b6f8:	0000011c 	andeq	r0, r0, ip, lsl r1
        37b6fc:	029b0a2b 	addeqs	r0, fp, #176128	; 0x2b000
        37b700:	03a105e0 	moveq	r0, #939524096	; 0x38000000
        37b704:	fffa0000 	swinv	0x00fa0000
        37b708:	ffebffd9 	swinv	0x00ebffd9
        37b71c:	00b00099 	umlaleqs	r0, r0, r9, r0
        37b720:	0000025a 	andeq	r0, r0, sl, asr r2
        37b724:	00000000 	andeq	r0, r0, r0
        37b728:	009a0000 	addeqs	r0, sl, r0
        37b764:	00dd00dd 	ldreqsb	r0, [sp], #13
        37b768:	00dd0015 	sbceqs	r0, sp, r5, lsl r0
        37b76c:	000000ef 	andeq	r0, r0, pc, ror #1
        37b770:	000000dd 	ldreqd	r0, [r0], -sp
        37b77c:	0000036b 	andeq	r0, r0, fp, ror #6
        37b780:	006d0000 	rsbeq	r0, sp, r0
        37b798:	0000009f 	muleq	r0, pc, r0
        37b79c:	00000000 	andeq	r0, r0, r0
        37b7a0:	00d500d5 	ldreqsb	r0, [r5], #5
        37b7a4:	00000000 	andeq	r0, r0, r0
        37b7a8:	00000017 	andeq	r0, r0, r7, lsl r0
        37b7ac:	00000000 	andeq	r0, r0, r0
        37b7b0:	00c20000 	sbceq	r0, r2, r0
        37b7b4:	0000009e 	muleq	r0, lr, r0
        37b7c0:	00000a4f 	andeq	r0, r0, pc, asr #20
        37b7c4:	0a850810 	beq	fe4bd80c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc8acfb4>
        37b7c8:	089c0953 	ldmeqia	ip, {r0, r1, r4, r6, r8, fp}
        37b7cc:	099709cf 	ldmeqib	r7, {r0, r1, r2, r3, r6, r7, r8, fp}
        37b7d0:	09fd0789 	ldmeqib	sp!, {r0, r3, r7, r8, r9, sl}^
        37b7d4:	07c3072b 	streqb	r0, [r3, fp, lsr #14]
        37b7d8:	07590582 	ldreqb	r0, [r9, -r2, lsl #11]
        37b7dc:	05b706c8 	ldreq	r0, [r7, #1736]!
        37b7e0:	06fd03d6 	undefined
        37b7e4:	040c0000 	streq	r0, [ip]
        37b7e8:	fff40000 	swinv	0x00f40000
        37b7ec:	00000000 	andeq	r0, r0, r0
        37b7f0:	02d10000 	sbceqs	r0, r1, #0	; 0x0
        37b7f4:	ffe90000 	swinv	0x00e90000
        37b800:	00000013 	andeq	r0, r0, r3, lsl r0
        37b804:	00000ab7 	streqh	r0, [r0], -r7
        37b808:	0000044b 	andeq	r0, r0, fp, asr #8
        37b80c:	00000000 	andeq	r0, r0, r0
        37b810:	00000ae5 	andeq	r0, r0, r5, ror #21
        37b814:	00a50000 	adceq	r0, r5, r0
        37b818:	0b060b46 	bleq	4fe538 <SYMiamkey+0x284>
        37b81c:	00d5ffe6 	sbceqs	pc, r5, r6, ror #31
        37b820:	000000d5 	ldreqd	r0, [r0], -r5
        37b824:	00d50000 	sbceqs	r0, r5, r0
        37b828:	fffc0000 	swinv	0x00fc0000
        37b82c:	000000b0 	streqh	r0, [r0], -r0
        37b83c:	ffea0000 	swinv	0x00ea0000
        37b840:	00000000 	andeq	r0, r0, r0
        37b844:	00d500d5 	ldreqsb	r0, [r5], #5
        37b850:	0b65001d 	bleq	1cbb8cc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xab074>
        37b85c:	0b7d0000 	bleq	22bb864 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x6ab00c>
        37b880:	0000001a 	andeq	r0, r0, sl, lsl r0
        37b884:	0b9c0bb4 	bleq	fea7e75c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfce6df04>
        37b888:	0000001b 	andeq	r0, r0, fp, lsl r0
        37b88c:	00000bdc 	ldreqd	r0, [r0], -ip
        37b890:	0bff0c26 	bleq	33e930 <vsprintf+0x230>
        37b8a8:	ffec0000 	swinv	0x00ec0000
        37b8b4:	0c4d0000 	mareq	acc0, r0, sp
        37b8b8:	00000c6b 	andeq	r0, r0, fp, ror #24
        37b8bc:	00000000 	andeq	r0, r0, r0
        37b8c0:	0c860cce 	stceq	12, cr0, [r6], #824
    */
}

/**
 * Symbol: yygindex
 * Address: 0037b8c4
 */
void globals::yygindex() {
    /*
        37b8c4:	00000000 	andeq	r0, r0, r0
        37b8c8:	007608f4 	ldreqsh	r0, [r6], -#132
        37b8cc:	00260000 	eoreq	r0, r6, r0
        37b8f0:	00980000 	addeqs	r0, r8, r0
        37b8f4:	fffb004c 	swinv	0x00fb004c
        37b900:	0029019e 	mlaeq	r9, lr, r1, r0
        37b904:	00000000 	andeq	r0, r0, r0
        37b908:	0000fff2 	streqd	pc, [r0], -r2
        37b90c:	00000000 	andeq	r0, r0, r0
        37b910:	0000ffef 	andeq	pc, r0, pc, ror #31
        37b914:	0000004f 	andeq	r0, r0, pc, asr #32
    */
}

/**
 * Symbol: yytable
 * Address: 0037b920
 */
void globals::yytable() {
    /*
        37b920:	008b0034 	addeq	r0, fp, r4, lsr r0
        37b924:	00c9009b 	smulleq	r0, r9, fp, r0
        37b928:	007d004d 	rsbeqs	r0, sp, sp, asr #32
        37b92c:	003f003f 	eoreqs	r0, pc, pc, lsr r0
        37b930:	0083003e 	addeq	r0, r3, lr, lsr r0
        37b934:	003e007d 	eoreqs	r0, lr, sp, ror r0
        37b938:	00620083 	rsbeq	r0, r2, r3, lsl #1
        37b93c:	006d006d 	rsbeq	r0, sp, sp, rrx
        37b940:	007b0006 	rsbeqs	r0, fp, r6
        37b944:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37b948:	006a001d 	rsbeq	r0, sl, sp, lsl r0
        37b94c:	0081007b 	addeq	r0, r1, fp, ror r0
        37b950:	00820038 	addeq	r0, r2, r8, lsr r0
        37b954:	003e003d 	eoreqs	r0, lr, sp, lsr r0
        37b958:	00920040 	addeqs	r0, r2, r0, asr #32
        37b95c:	006e0083 	rsbeq	r0, lr, r3, lsl #1
        37b960:	006d0038 	rsbeq	r0, sp, r8, lsr r0
        37b964:	0041006b 	subeq	r0, r1, fp, rrx
        37b968:	006f006c 	rsbeq	r0, pc, ip, rrx
        37b96c:	006b0034 	rsbeq	r0, fp, r4, lsr r0
        37b970:	006c0045 	rsbeq	r0, ip, r5, asr #32
        37b974:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37b978:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37b97c:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37b980:	0034007a 	eoreqs	r0, r4, sl, ror r0
        37b984:	007e009f 	ldreqb	r0, [lr], -#15
        37b988:	004400a5 	subeq	r0, r4, r5, lsr #1
        37b98c:	00a60009 	adceq	r0, r6, r9
        37b990:	007a004a 	rsbeqs	r0, sl, sl, asr #32
        37b994:	007f0034 	rsbeqs	r0, pc, r4, lsr r0
        37b998:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37b99c:	00720034 	rsbeqs	r0, r2, r4, lsr r0
        37b9a0:	00480072 	subeq	r0, r8, r2, ror r0
        37b9a4:	0093008d 	addeqs	r0, r3, sp, lsl #1
        37b9a8:	004c008d 	subeq	r0, ip, sp, lsl #1
        37b9ac:	00740057 	rsbeqs	r0, r4, r7, asr r0
        37b9b0:	006a0074 	rsbeq	r0, sl, r4, ror r0
        37b9b4:	00580064 	subeqs	r0, r8, r4, rrx
        37b9b8:	0006003b 	andeq	r0, r6, fp, lsr r0
        37b9bc:	003c0074 	eoreqs	r0, ip, r4, ror r0
        37b9c0:	00720067 	rsbeqs	r0, r2, r7, rrx
        37b9c4:	0073007d 	rsbeqs	r0, r3, sp, ror r0
        37b9c8:	0075003e 	rsbeqs	r0, r5, lr, lsr r0
        37b9cc:	003d006b 	eoreqs	r0, sp, fp, rrx
        37b9d0:	0080006c 	addeq	r0, r0, ip, rrx
        37b9d4:	00840085 	addeq	r0, r4, r5, lsl #1
        37b9d8:	00340009 	eoreqs	r0, r4, r9
        37b9dc:	0034007b 	eoreqs	r0, r4, fp, ror r0
        37b9e0:	00090009 	andeq	r0, r9, r9
        37b9e4:	00090009 	andeq	r0, r9, r9
        37b9e8:	00090009 	andeq	r0, r9, r9
        37b9ec:	00090081 	andeq	r0, r9, r1, lsl #1
        37b9f0:	00860082 	addeq	r0, r6, r2, lsl #1
        37b9f4:	0087008c 	addeq	r0, r7, ip, lsl #1
        37b9f8:	0096007b 	addeqs	r0, r6, fp, ror r0
        37b9fc:	008d0095 	umulleq	r0, sp, r5, r0
        37ba00:	009d0009 	addeqs	r0, sp, r9
        37ba04:	00090009 	andeq	r0, r9, r9
        37ba08:	008d0009 	addeq	r0, sp, r9
        37ba0c:	00cd00ce 	sbceq	r0, sp, lr, asr #1
        37ba10:	00cf009e 	smulleq	r0, pc, lr, r0
        37ba14:	00a100a0 	adceq	r0, r1, r0, lsr #1
        37ba18:	00a200d4 	ldreqd	r0, [r2], r4
        37ba1c:	003400a3 	eoreqs	r0, r4, r3, lsr #1
        37ba20:	007a0070 	rsbeqs	r0, sl, r0, ror r0
        37ba24:	00ab00ae 	adceq	r0, fp, lr, lsr #1
        37ba28:	00af0074 	adceq	r0, pc, r4, ror r0
        37ba2c:	007200b0 	ldreqh	r0, [r2]
        37ba30:	0073007d 	rsbeqs	r0, r3, sp, ror r0
        37ba34:	007500b1 	ldreqh	r0, [r5], -#1
        37ba38:	00c600c7 	sbceq	r0, r6, r7, asr #1
        37ba3c:	00cb00d0 	ldreqd	r0, [fp]
        37ba40:	00d100d6 	ldreqsb	r0, [r1], #6
        37ba44:	0009007b 	andeq	r0, r9, fp, ror r0
        37ba48:	0009007b 	andeq	r0, r9, fp, ror r0
        37ba4c:	007b007b 	rsbeqs	r0, fp, fp, ror r0
        37ba50:	007b007b 	rsbeqs	r0, fp, fp, ror r0
        37ba54:	007b007b 	rsbeqs	r0, fp, fp, ror r0
        37ba58:	007b00d2 	ldreqsb	r0, [fp], -#2
        37ba5c:	00d8008f 	sbceqs	r0, r8, pc, lsl #1
        37ba60:	00da00dc 	ldreqsb	r0, [sl], #12
        37ba64:	00e000e1 	rsceq	r0, r0, r1, ror #1
        37ba68:	00e20078 	rsceq	r0, r2, r8, ror r0
        37ba6c:	00e3007b 	rsceq	r0, r3, fp, ror r0
        37ba70:	007b007b 	rsbeqs	r0, fp, fp, ror r0
        37ba74:	00e4007b 	rsceq	r0, r4, fp, ror r0
        37ba78:	00e900ea 	rsceq	r0, r9, sl, ror #1
        37ba7c:	00ec00eb 	rsceq	r0, ip, fp, ror #1
        37ba80:	00ee00ed 	rsceq	r0, lr, sp, ror #1
        37ba84:	00ef00f1 	streqd	r0, [pc, #1]	; 37ba8d <yytable+0x16d>
        37ba88:	000900f4 	streqd	r0, [r9], -r4
        37ba8c:	007a00f5 	ldreqsh	r0, [sl], -#5
        37ba90:	00fb00f7 	ldreqsh	r0, [fp], #7
        37ba94:	00f800fd 	ldreqsh	r0, [r8], #13
        37ba98:	007400f9 	ldreqsh	r0, [r4], -#9
        37ba9c:	00fc00ff 	ldreqsh	r0, [ip], #15
        37baa0:	007d0075 	rsbeqs	r0, sp, r5, ror r0
        37baa4:	01010108 	tsteq	r1, r8, lsl #2
        37baa8:	009a0109 	addeqs	r0, sl, r9, lsl #2
        37baac:	010a010e 	tsteq	sl, lr, lsl #2
        37bab0:	007b0116 	rsbeqs	r0, fp, r6, lsl r1
        37bab4:	007b0078 	rsbeqs	r0, fp, r8, ror r0
        37bab8:	007b010f 	rsbeqs	r0, fp, pc, lsl #2
        37babc:	00780078 	rsbeqs	r0, r8, r8, ror r0
        37bac0:	00780078 	rsbeqs	r0, r8, r8, ror r0
        37bac4:	00780078 	rsbeqs	r0, r8, r8, ror r0
        37bac8:	00780082 	rsbeqs	r0, r8, r2, lsl #1
        37bacc:	011d0122 	tsteq	sp, r2, lsr #2
        37bad0:	011e005f 	tsteq	lr, pc, asr r0
        37bad4:	010c010d 	tsteq	ip, sp, lsl #2
        37bad8:	006d00c8 	rsbeq	r0, sp, r8, asr #1
        37badc:	01230078 	teqeq	r3, r8, ror r0
        37bae0:	00780078 	rsbeqs	r0, r8, r8, ror r0
        37bae4:	003c0078 	eoreqs	r0, ip, r8, ror r0
        37bae8:	01240125 	teqeq	r4, r5, lsr #2
        37baec:	00540127 	subeqs	r0, r4, r7, lsr #2
        37baf0:	003d003d 	eoreqs	r0, sp, sp, lsr r0
        37baf4:	007b006e 	rsbeqs	r0, fp, lr, rrx
        37baf8:	0128007a 	teqeq	r8, sl, ror r0
        37bafc:	0098006d 	addeqs	r0, r8, sp, rrx
        37bb00:	0001006f 	andeq	r0, r1, pc, rrx
        37bb04:	00030004 	andeq	r0, r3, r4
        37bb08:	0005006e 	andeq	r0, r5, lr, rrx
        37bb0c:	008f006d 	addeq	r0, pc, sp, rrx
        37bb10:	0001007f 	andeq	r0, r1, pc, ror r0
        37bb14:	009a006f 	addeqs	r0, sl, pc, rrx
        37bb18:	00690002 	rsbeq	r0, r9, r2
        37bb1c:	0069006e 	rsbeq	r0, r9, lr, rrx
        37bb20:	0078008a 	rsbeqs	r0, r8, sl, lsl #1
        37bb24:	0078004e 	rsbeqs	r0, r8, lr, asr #32
        37bb28:	0034006f 	eoreqs	r0, r4, pc, rrx
        37bb2c:	00700060 	rsbeqs	r0, r0, r0, rrx
        37bb30:	00590034 	subeqs	r0, r9, r4, lsr r0
        37bb34:	00460078 	subeq	r0, r6, r8, ror r0
        37bb38:	0079008f 	rsbeqs	r0, r9, pc, lsl #1
        37bb3c:	007c0054 	rsbeqs	r0, ip, r4, asr r0
        37bb40:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37bb44:	00540034 	subeqs	r0, r4, r4, lsr r0
        37bb48:	012d007c 	teqeq	sp, ip, ror r0
        37bb4c:	00930080 	addeqs	r0, r3, r0, lsl #1
        37bb50:	00710034 	rsbeqs	r0, r1, r4, lsr r0
        37bb54:	00340094 	mlaeqs	r4, r4, r0, r0
        37bb58:	00410034 	subeq	r0, r1, r4, lsr r0
        37bb5c:	00340090 	mlaeqs	r4, r0, r0, r0
        37bb60:	00340054 	eoreqs	r0, r4, r4, asr r0
        37bb64:	00780118 	rsbeqs	r0, r8, r8, lsl r1
        37bb68:	005f0045 	subeqs	r0, pc, r5, asr #32
        37bb6c:	01300061 	teqeq	r0, r1, rrx
        37bb70:	00f200d9 	ldreqsb	r0, [r2], #9
        37bb74:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37bb78:	00340104 	eoreqs	r0, r4, r4, lsl #2
        37bb7c:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37bb80:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37bb84:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37bb88:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37bb8c:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37bb90:	010b0034 	tsteq	fp, r4, lsr r0
        37bb94:	00090000 	andeq	r0, r9, r0
        37bb98:	00000000 	andeq	r0, r0, r0
        37bb9c:	00000009 	andeq	r0, r0, r9
        37bba0:	00000000 	andeq	r0, r0, r0
        37bba4:	00000054 	andeq	r0, r0, r4, asr r0
        37bba8:	00000041 	andeq	r0, r0, r1, asr #32
        37bbac:	00090009 	andeq	r0, r9, r9
        37bbb0:	00410009 	subeq	r0, r1, r9
        37bbbc:	00000009 	andeq	r0, r0, r9
        37bbc0:	00090000 	andeq	r0, r9, r0
        37bbc4:	00600009 	rsbeq	r0, r0, r9
        37bbc8:	00090000 	andeq	r0, r9, r0
        37bbcc:	00090041 	andeq	r0, r9, r1, asr #32
        37bbd0:	00760077 	rsbeqs	r0, r6, r7, ror r0
        37bbd4:	00780079 	rsbeqs	r0, r8, r9, ror r0
        37bbd8:	0000007c 	andeq	r0, r0, ip, ror r0
        37bbdc:	00000000 	andeq	r0, r0, r0
        37bbe0:	00000009 	andeq	r0, r0, r9
        37bbe4:	00090054 	andeq	r0, r9, r4, asr r0
        37bbe8:	00090009 	andeq	r0, r9, r9
        37bbec:	00090009 	andeq	r0, r9, r9
        37bbf0:	00000009 	andeq	r0, r0, r9
        37bbf4:	00090009 	andeq	r0, r9, r9
        37bbf8:	00090009 	andeq	r0, r9, r9
        37bbfc:	00000009 	andeq	r0, r0, r9
        37bc00:	007b0000 	rsbeqs	r0, fp, r0
        37bc04:	00610000 	rsbeq	r0, r1, r0
        37bc08:	0000007b 	andeq	r0, r0, fp, ror r0
        37bc0c:	00000000 	andeq	r0, r0, r0
        37bc10:	00000041 	andeq	r0, r0, r1, asr #32
        37bc14:	00000000 	andeq	r0, r0, r0
        37bc18:	007b007b 	rsbeqs	r0, fp, fp, ror r0
        37bc1c:	0000007b 	andeq	r0, r0, fp, ror r0
        37bc28:	0000007b 	andeq	r0, r0, fp, ror r0
        37bc2c:	007b0000 	rsbeqs	r0, fp, r0
        37bc30:	0000007b 	andeq	r0, r0, fp, ror r0
        37bc34:	007b0000 	rsbeqs	r0, fp, r0
        37bc38:	007b0071 	rsbeqs	r0, fp, r1, ror r0
        37bc3c:	00760077 	rsbeqs	r0, r6, r7, ror r0
        37bc40:	00780079 	rsbeqs	r0, r8, r9, ror r0
        37bc44:	0000007c 	andeq	r0, r0, ip, ror r0
        37bc48:	00000000 	andeq	r0, r0, r0
        37bc4c:	0000007b 	andeq	r0, r0, fp, ror r0
        37bc50:	007b0041 	rsbeqs	r0, fp, r1, asr #32
        37bc54:	007b007b 	rsbeqs	r0, fp, fp, ror r0
        37bc58:	007b007b 	rsbeqs	r0, fp, fp, ror r0
        37bc5c:	0000007b 	andeq	r0, r0, fp, ror r0
        37bc60:	007b007b 	rsbeqs	r0, fp, fp, ror r0
        37bc64:	007b007b 	rsbeqs	r0, fp, fp, ror r0
        37bc68:	0000007b 	andeq	r0, r0, fp, ror r0
        37bc6c:	00000000 	andeq	r0, r0, r0
        37bc70:	00780000 	rsbeqs	r0, r8, r0
        37bc74:	00000000 	andeq	r0, r0, r0
        37bc78:	00000078 	andeq	r0, r0, r8, ror r0
        37bc7c:	005a005b 	subeqs	r0, sl, fp, asr r0
        37bc80:	005c005d 	subeqs	r0, ip, sp, asr r0
        37bc84:	005e0000 	subeqs	r0, lr, r0
        37bc88:	00780078 	rsbeqs	r0, r8, r8, ror r0
        37bc8c:	003a0078 	eoreqs	r0, sl, r8, ror r0
        37bc98:	00000078 	andeq	r0, r0, r8, ror r0
        37bc9c:	00780000 	rsbeqs	r0, r8, r0
        37bca0:	00000078 	andeq	r0, r0, r8, ror r0
        37bca4:	00780000 	rsbeqs	r0, r8, r0
        37bca8:	00780076 	rsbeqs	r0, r8, r6, ror r0
        37bcac:	00770078 	rsbeqs	r0, r7, r8, ror r0
        37bcb0:	00790000 	rsbeqs	r0, r9, r0
        37bcb4:	007c0000 	rsbeqs	r0, ip, r0
        37bcb8:	00000000 	andeq	r0, r0, r0
        37bcbc:	00000078 	andeq	r0, r0, r8, ror r0
        37bcc0:	00780000 	rsbeqs	r0, r8, r0
        37bcc4:	00780078 	rsbeqs	r0, r8, r8, ror r0
        37bcc8:	00780078 	rsbeqs	r0, r8, r8, ror r0
        37bccc:	00810078 	addeq	r0, r1, r8, ror r0
        37bcd0:	00780078 	rsbeqs	r0, r8, r8, ror r0
        37bcd4:	00780078 	rsbeqs	r0, r8, r8, ror r0
        37bcd8:	003a0078 	eoreqs	r0, sl, r8, ror r0
        37bcdc:	0000003a 	andeq	r0, r0, sl, lsr r0
        37bce0:	003a003a 	eoreqs	r0, sl, sl, lsr r0
        37bce4:	0000003a 	andeq	r0, r0, sl, lsr r0
        37bce8:	003a003a 	eoreqs	r0, sl, sl, lsr r0
        37bcec:	00000000 	andeq	r0, r0, r0
        37bcf0:	00000054 	andeq	r0, r0, r4, asr r0
        37bcf4:	00000000 	andeq	r0, r0, r0
        37bcf8:	007a0000 	rsbeqs	r0, sl, r0
        37bcfc:	00540000 	subeqs	r0, r4, r0
        37bd00:	003a003a 	eoreqs	r0, sl, sl, lsr r0
        37bd04:	003a0000 	eoreqs	r0, sl, r0
        37bd08:	003a0054 	eoreqs	r0, sl, r4, asr r0
        37bd0c:	00540000 	subeqs	r0, r4, r0
        37bd10:	0054005a 	subeqs	r0, r4, sl, asr r0
        37bd14:	00a7005c 	adceq	r0, r7, ip, asr r0
        37bd18:	005d005e 	subeqs	r0, sp, lr, asr r0
        37bd1c:	00540054 	subeqs	r0, r4, r4, asr r0
        37bd20:	00000000 	andeq	r0, r0, r0
        37bd24:	00540054 	subeqs	r0, r4, r4, asr r0
        37bd28:	00000054 	andeq	r0, r0, r4, asr r0
        37bd40:	0000003a 	andeq	r0, r0, sl, lsr r0
        37bd44:	007a003a 	rsbeqs	r0, sl, sl, lsr r0
        37bd48:	0000007a 	andeq	r0, r0, sl, ror r0
        37bd4c:	007a007a 	rsbeqs	r0, sl, sl, ror r0
        37bd50:	007a007a 	rsbeqs	r0, sl, sl, ror r0
        37bd54:	007a007a 	rsbeqs	r0, sl, sl, ror r0
        37bd58:	00000000 	andeq	r0, r0, r0
        37bd5c:	00000041 	andeq	r0, r0, r1, asr #32
        37bd60:	00000000 	andeq	r0, r0, r0
        37bd64:	00390000 	eoreqs	r0, r9, r0
        37bd68:	00410000 	subeq	r0, r1, r0
        37bd6c:	007a007a 	rsbeqs	r0, sl, sl, ror r0
        37bd70:	007a0000 	rsbeqs	r0, sl, r0
        37bd74:	007a0041 	rsbeqs	r0, sl, r1, asr #32
        37bd78:	00410000 	subeq	r0, r1, r0
        37bd7c:	00410000 	subeq	r0, r1, r0
        37bd80:	00000000 	andeq	r0, r0, r0
        37bd84:	0000003a 	andeq	r0, r0, sl, lsr r0
        37bd88:	00410041 	subeq	r0, r1, r1, asr #32
        37bd8c:	00000000 	andeq	r0, r0, r0
        37bd90:	00410041 	subeq	r0, r1, r1, asr #32
        37bd94:	00000041 	andeq	r0, r0, r1, asr #32
        37bd98:	000000e5 	andeq	r0, r0, r5, ror #1
        37bd9c:	00000000 	andeq	r0, r0, r0
        37bda0:	00e700e8 	rsceq	r0, r7, r8, ror #1
        37bdac:	0000007a 	andeq	r0, r0, sl, ror r0
        37bdb0:	0039007a 	eoreqs	r0, r9, sl, ror r0
        37bdb4:	00000039 	andeq	r0, r0, r9, lsr r0
        37bdb8:	00390039 	eoreqs	r0, r9, r9, lsr r0
        37bdbc:	00000039 	andeq	r0, r0, r9, lsr r0
        37bdc0:	00390039 	eoreqs	r0, r9, r9, lsr r0
        37bdd4:	00890000 	addeq	r0, r9, r0
        37bdd8:	00390039 	eoreqs	r0, r9, r9, lsr r0
        37bddc:	00390000 	eoreqs	r0, r9, r0
        37bde0:	00390000 	eoreqs	r0, r9, r0
        37bdf0:	0000007a 	andeq	r0, r0, sl, ror r0
        37be18:	00000039 	andeq	r0, r0, r9, lsr r0
        37be1c:	01030039 	tsteq	r3, r9, lsr r0
        37be20:	00890106 	addeq	r0, r9, r6, lsl #2
        37be24:	01070089 	smlabbeq	r7, r9, r0, r0
        37be28:	00890089 	addeq	r0, r9, r9, lsl #1
        37be2c:	00890089 	addeq	r0, r9, r9, lsl #1
        37be30:	00000089 	andeq	r0, r0, r9, lsl #1
        37be44:	01100111 	tsteq	r0, r1, lsl r1
        37be48:	00890089 	addeq	r0, r9, r9, lsl #1
        37be4c:	00890000 	addeq	r0, r9, r0
        37be50:	00890000 	addeq	r0, r9, r0
        37be54:	0000003f 	andeq	r0, r0, pc, lsr r0
        37be58:	00000000 	andeq	r0, r0, r0
        37be5c:	00000039 	andeq	r0, r0, r9, lsr r0
        37be88:	00000089 	andeq	r0, r0, r9, lsl #1
        37be8c:	00000089 	andeq	r0, r0, r9, lsl #1
        37be90:	0000003a 	andeq	r0, r0, sl, lsr r0
        37be9c:	003a0000 	eoreqs	r0, sl, r0
        37bea8:	003f003a 	eoreqs	r0, pc, sl, lsr r0
        37beac:	003a003f 	eoreqs	r0, sl, pc, lsr r0
        37beb0:	003a0000 	eoreqs	r0, sl, r0
        37bebc:	003a003a 	eoreqs	r0, sl, sl, lsr r0
        37bec0:	00000038 	andeq	r0, r0, r8, lsr r0
        37bec4:	003a003a 	eoreqs	r0, sl, sl, lsr r0
        37bec8:	0000003a 	andeq	r0, r0, sl, lsr r0
        37becc:	003f0089 	eoreqs	r0, pc, r9, lsl #1
        37bee0:	003a003a 	eoreqs	r0, sl, sl, lsr r0
        37bee4:	0000003a 	andeq	r0, r0, sl, lsr r0
        37bee8:	003a003a 	eoreqs	r0, sl, sl, lsr r0
        37beec:	003a0000 	eoreqs	r0, sl, r0
        37bef0:	003a003a 	eoreqs	r0, sl, sl, lsr r0
        37bef4:	003a003a 	eoreqs	r0, sl, sl, lsr r0
        37bef8:	003a0000 	eoreqs	r0, sl, r0
        37befc:	003a0000 	eoreqs	r0, sl, r0
        37bf08:	007a0000 	rsbeqs	r0, sl, r0
        37bf0c:	00000000 	andeq	r0, r0, r0
        37bf10:	003f0000 	eoreqs	r0, pc, r0
        37bf14:	0038007a 	eoreqs	r0, r8, sl, ror r0
        37bf18:	007a0038 	rsbeqs	r0, sl, r8, lsr r0
        37bf1c:	007a0000 	rsbeqs	r0, sl, r0
        37bf28:	007a007a 	rsbeqs	r0, sl, sl, ror r0
        37bf2c:	00000000 	andeq	r0, r0, r0
        37bf30:	007a007a 	rsbeqs	r0, sl, sl, ror r0
        37bf34:	0000007a 	andeq	r0, r0, sl, ror r0
        37bf38:	00380000 	eoreqs	r0, r8, r0
        37bf4c:	007a007a 	rsbeqs	r0, sl, sl, ror r0
        37bf50:	003f007a 	eoreqs	r0, pc, sl, ror r0
        37bf54:	007a007a 	rsbeqs	r0, sl, sl, ror r0
        37bf58:	007a0000 	rsbeqs	r0, sl, r0
        37bf5c:	007a007a 	rsbeqs	r0, sl, sl, ror r0
        37bf60:	007a007a 	rsbeqs	r0, sl, sl, ror r0
        37bf64:	007a0000 	rsbeqs	r0, sl, r0
        37bf68:	007a0039 	rsbeqs	r0, sl, r9, lsr r0
        37bf74:	00390000 	eoreqs	r0, r9, r0
        37bf78:	00000000 	andeq	r0, r0, r0
        37bf7c:	00380000 	eoreqs	r0, r8, r0
        37bf80:	00000039 	andeq	r0, r0, r9, lsr r0
        37bf84:	00390000 	eoreqs	r0, r9, r0
        37bf88:	00390000 	eoreqs	r0, r9, r0
        37bf94:	00390039 	eoreqs	r0, r9, r9, lsr r0
        37bf98:	00000000 	andeq	r0, r0, r0
        37bf9c:	00390039 	eoreqs	r0, r9, r9, lsr r0
        37bfa0:	00000039 	andeq	r0, r0, r9, lsr r0
        37bfb8:	00390039 	eoreqs	r0, r9, r9, lsr r0
        37bfbc:	00380039 	eoreqs	r0, r8, r9, lsr r0
        37bfc0:	00390039 	eoreqs	r0, r9, r9, lsr r0
        37bfc4:	00390000 	eoreqs	r0, r9, r0
        37bfc8:	00390039 	eoreqs	r0, r9, r9, lsr r0
        37bfcc:	00390039 	eoreqs	r0, r9, r9, lsr r0
        37bfd0:	00390000 	eoreqs	r0, r9, r0
        37bfd4:	00390000 	eoreqs	r0, r9, r0
        37bfd8:	00000089 	andeq	r0, r0, r9, lsl #1
        37bfe4:	00890000 	addeq	r0, r9, r0
        37bff0:	00000089 	andeq	r0, r0, r9, lsl #1
        37bff4:	00890062 	addeq	r0, r9, r2, rrx
        37bff8:	00890000 	addeq	r0, r9, r0
        37c004:	00890089 	addeq	r0, r9, r9, lsl #1
        37c008:	00000000 	andeq	r0, r0, r0
        37c00c:	00890089 	addeq	r0, r9, r9, lsl #1
        37c010:	00000089 	andeq	r0, r0, r9, lsl #1
        37c028:	00890089 	addeq	r0, r9, r9, lsl #1
        37c02c:	00000089 	andeq	r0, r0, r9, lsl #1
        37c030:	00890089 	addeq	r0, r9, r9, lsl #1
        37c034:	00890000 	addeq	r0, r9, r0
        37c038:	00890089 	addeq	r0, r9, r9, lsl #1
        37c03c:	00890089 	addeq	r0, r9, r9, lsl #1
        37c040:	00890062 	addeq	r0, r9, r2, rrx
        37c044:	00890000 	addeq	r0, r9, r0
        37c048:	00620062 	rsbeq	r0, r2, r2, rrx
        37c04c:	00620062 	rsbeq	r0, r2, r2, rrx
        37c050:	00620062 	rsbeq	r0, r2, r2, rrx
        37c054:	00620000 	rsbeq	r0, r2, r0
        37c058:	00000000 	andeq	r0, r0, r0
        37c05c:	003f0000 	eoreqs	r0, pc, r0
        37c060:	00000016 	andeq	r0, r0, r6, lsl r0
        37c064:	0000003f 	andeq	r0, r0, pc, lsr r0
        37c068:	00000062 	andeq	r0, r0, r2, rrx
        37c06c:	00620062 	rsbeq	r0, r2, r2, rrx
        37c070:	00000062 	andeq	r0, r0, r2, rrx
        37c074:	003f003f 	eoreqs	r0, pc, pc, lsr r0
        37c078:	0000003f 	andeq	r0, r0, pc, lsr r0
        37c084:	0000003f 	andeq	r0, r0, pc, lsr r0
        37c088:	003f0000 	eoreqs	r0, pc, r0
        37c08c:	0000003f 	andeq	r0, r0, pc, lsr r0
        37c090:	003f0000 	eoreqs	r0, pc, r0
        37c094:	003f0000 	eoreqs	r0, pc, r0
        37c0ac:	00620016 	rsbeq	r0, r2, r6, lsl r0
        37c0b0:	00620000 	rsbeq	r0, r2, r0
        37c0b4:	00160016 	andeqs	r0, r6, r6, lsl r0
        37c0b8:	00160016 	andeqs	r0, r6, r6, lsl r0
        37c0bc:	00160000 	andeqs	r0, r6, r0
        37c0c0:	00160000 	andeqs	r0, r6, r0
        37c0c4:	00000000 	andeq	r0, r0, r0
        37c0c8:	00380000 	eoreqs	r0, r8, r0
        37c0cc:	00170000 	andeqs	r0, r7, r0
        37c0d0:	00000038 	andeq	r0, r0, r8, lsr r0
        37c0d4:	00000000 	andeq	r0, r0, r0
        37c0d8:	00160016 	andeqs	r0, r6, r6, lsl r0
        37c0dc:	00000016 	andeq	r0, r0, r6, lsl r0
        37c0e0:	00380038 	eoreqs	r0, r8, r8, lsr r0
        37c0e4:	00000038 	andeq	r0, r0, r8, lsr r0
        37c0f0:	00620038 	rsbeq	r0, r2, r8, lsr r0
        37c0f4:	00380000 	eoreqs	r0, r8, r0
        37c0f8:	00000038 	andeq	r0, r0, r8, lsr r0
        37c0fc:	00380000 	eoreqs	r0, r8, r0
        37c100:	00380000 	eoreqs	r0, r8, r0
        37c118:	00170000 	andeqs	r0, r7, r0
        37c11c:	00160017 	andeqs	r0, r6, r7, lsl r0
        37c120:	00170017 	andeqs	r0, r7, r7, lsl r0
        37c124:	00170017 	andeqs	r0, r7, r7, lsl r0
        37c128:	00000017 	andeq	r0, r0, r7, lsl r0
        37c138:	00180000 	andeqs	r0, r8, r0
        37c13c:	00000000 	andeq	r0, r0, r0
        37c140:	00000017 	andeq	r0, r0, r7, lsl r0
        37c144:	00170000 	andeqs	r0, r7, r0
        37c148:	00170000 	andeqs	r0, r7, r0
        37c15c:	00160000 	andeqs	r0, r6, r0
        37c184:	00180017 	andeqs	r0, r8, r7, lsl r0
        37c188:	00000018 	andeq	r0, r0, r8, lsl r0
        37c18c:	00180018 	andeqs	r0, r8, r8, lsl r0
        37c190:	00180018 	andeqs	r0, r8, r8, lsl r0
        37c194:	00000018 	andeq	r0, r0, r8, lsl r0
        37c1ac:	00000018 	andeq	r0, r0, r8, lsl r0
        37c1b0:	00180000 	andeqs	r0, r8, r0
        37c1b4:	0018004e 	andeqs	r0, r8, lr, asr #32
        37c1c4:	00000017 	andeq	r0, r0, r7, lsl r0
        37c1f0:	00000018 	andeq	r0, r0, r8, lsl r0
        37c1fc:	00620000 	rsbeq	r0, r2, r0
        37c200:	00000000 	andeq	r0, r0, r0
        37c204:	00000062 	andeq	r0, r0, r2, rrx
        37c208:	004e0000 	subeq	r0, lr, r0
        37c20c:	0000004e 	andeq	r0, r0, lr, asr #32
        37c210:	00000000 	andeq	r0, r0, r0
        37c214:	00620062 	rsbeq	r0, r2, r2, rrx
        37c224:	00000062 	andeq	r0, r0, r2, rrx
        37c228:	00620000 	rsbeq	r0, r2, r0
        37c22c:	004e0062 	subeq	r0, lr, r2, rrx
        37c230:	00620018 	rsbeq	r0, r2, r8, lsl r0
        37c234:	00620000 	rsbeq	r0, r2, r0
        37c248:	00000062 	andeq	r0, r0, r2, rrx
        37c24c:	00620000 	rsbeq	r0, r2, r0
        37c250:	00620062 	rsbeq	r0, r2, r2, rrx
        37c254:	00620062 	rsbeq	r0, r2, r2, rrx
        37c258:	00000062 	andeq	r0, r0, r2, rrx
        37c25c:	00620062 	rsbeq	r0, r2, r2, rrx
        37c260:	00620062 	rsbeq	r0, r2, r2, rrx
        37c264:	00000062 	andeq	r0, r0, r2, rrx
        37c268:	00160000 	andeqs	r0, r6, r0
        37c26c:	00000000 	andeq	r0, r0, r0
        37c270:	004e0016 	subeq	r0, lr, r6, lsl r0
        37c280:	00160016 	andeqs	r0, r6, r6, lsl r0
        37c284:	00000016 	andeq	r0, r0, r6, lsl r0
        37c290:	00000016 	andeq	r0, r0, r6, lsl r0
        37c294:	00160000 	andeqs	r0, r6, r0
        37c298:	00000016 	andeq	r0, r0, r6, lsl r0
        37c29c:	00160000 	andeqs	r0, r6, r0
        37c2a0:	00160000 	andeqs	r0, r6, r0
        37c2b0:	004e0000 	subeq	r0, lr, r0
        37c2b4:	00000016 	andeq	r0, r0, r6, lsl r0
        37c2b8:	00160000 	andeqs	r0, r6, r0
        37c2bc:	00160016 	andeqs	r0, r6, r6, lsl r0
        37c2c0:	00160016 	andeqs	r0, r6, r6, lsl r0
        37c2c4:	00000016 	andeq	r0, r0, r6, lsl r0
        37c2c8:	00160016 	andeqs	r0, r6, r6, lsl r0
        37c2cc:	00160016 	andeqs	r0, r6, r6, lsl r0
        37c2d0:	00000017 	andeq	r0, r0, r7, lsl r0
        37c2dc:	00170000 	andeqs	r0, r7, r0
        37c2e8:	00000017 	andeq	r0, r0, r7, lsl r0
        37c2ec:	00170000 	andeqs	r0, r7, r0
        37c2f0:	00170000 	andeqs	r0, r7, r0
        37c2fc:	00170017 	andeqs	r0, r7, r7, lsl r0
        37c300:	00000000 	andeq	r0, r0, r0
        37c304:	00170017 	andeqs	r0, r7, r7, lsl r0
        37c308:	00000017 	andeq	r0, r0, r7, lsl r0
        37c320:	00170017 	andeqs	r0, r7, r7, lsl r0
        37c324:	00000017 	andeq	r0, r0, r7, lsl r0
        37c328:	00170017 	andeqs	r0, r7, r7, lsl r0
        37c32c:	00170000 	andeqs	r0, r7, r0
        37c330:	00170017 	andeqs	r0, r7, r7, lsl r0
        37c334:	00170017 	andeqs	r0, r7, r7, lsl r0
        37c338:	00170000 	andeqs	r0, r7, r0
        37c33c:	00000018 	andeq	r0, r0, r8, lsl r0
        37c348:	00180000 	andeqs	r0, r8, r0
        37c354:	00000018 	andeq	r0, r0, r8, lsl r0
        37c358:	00180042 	andeqs	r0, r8, r2, asr #32
        37c35c:	00180000 	andeqs	r0, r8, r0
        37c368:	00180018 	andeqs	r0, r8, r8, lsl r0
        37c36c:	00000000 	andeq	r0, r0, r0
        37c370:	00180018 	andeqs	r0, r8, r8, lsl r0
        37c374:	00000018 	andeq	r0, r0, r8, lsl r0
        37c38c:	00180018 	andeqs	r0, r8, r8, lsl r0
        37c390:	00000018 	andeq	r0, r0, r8, lsl r0
        37c394:	00180018 	andeqs	r0, r8, r8, lsl r0
        37c398:	00180000 	andeqs	r0, r8, r0
        37c39c:	00180018 	andeqs	r0, r8, r8, lsl r0
        37c3a0:	00180018 	andeqs	r0, r8, r8, lsl r0
        37c3a4:	00180042 	andeqs	r0, r8, r2, asr #32
        37c3a8:	00000000 	andeq	r0, r0, r0
        37c3ac:	00420042 	subeq	r0, r2, r2, asr #32
        37c3b0:	00420042 	subeq	r0, r2, r2, asr #32
        37c3b4:	00000042 	andeq	r0, r0, r2, asr #32
        37c3b8:	00420040 	subeq	r0, r2, r0, asr #32
        37c3bc:	004e0000 	subeq	r0, lr, r0
        37c3c0:	00000000 	andeq	r0, r0, r0
        37c3c4:	0000004e 	andeq	r0, r0, lr, asr #32
        37c3d0:	00420042 	subeq	r0, r2, r2, asr #32
        37c3d4:	004e0042 	subeq	r0, lr, r2, asr #32
        37c3d8:	0000004e 	andeq	r0, r0, lr, asr #32
        37c3e4:	0000004e 	andeq	r0, r0, lr, asr #32
        37c3e8:	004e0000 	subeq	r0, lr, r0
        37c3ec:	0000004e 	andeq	r0, r0, lr, asr #32
        37c3f0:	004e0000 	subeq	r0, lr, r0
        37c3f4:	004e0000 	subeq	r0, lr, r0
        37c404:	00000040 	andeq	r0, r0, r0, asr #32
        37c408:	00000000 	andeq	r0, r0, r0
        37c40c:	00400040 	subeq	r0, r0, r0, asr #32
        37c410:	00400040 	subeq	r0, r0, r0, asr #32
        37c414:	00420040 	subeq	r0, r2, r0, asr #32
        37c418:	00400000 	subeq	r0, r0, r0
        37c424:	00100000 	andeqs	r0, r0, r0
        37c430:	00400040 	subeq	r0, r0, r0, asr #32
        37c434:	00000040 	andeq	r0, r0, r0, asr #32
        37c454:	00420000 	subeq	r0, r2, r0
        37c470:	00100000 	andeqs	r0, r0, r0
        37c474:	00400010 	subeq	r0, r0, r0, lsl r0
        37c478:	00100010 	andeqs	r0, r0, r0, lsl r0
        37c47c:	00100010 	andeqs	r0, r0, r0, lsl r0
        37c480:	00000010 	andeq	r0, r0, r0, lsl r0
        37c48c:	00000011 	andeq	r0, r0, r1, lsl r0
        37c498:	00000010 	andeq	r0, r0, r0, lsl r0
        37c49c:	00100000 	andeqs	r0, r0, r0
        37c4a0:	00100000 	andeqs	r0, r0, r0
        37c4b4:	00400000 	subeq	r0, r0, r0
        37c4d8:	00000011 	andeq	r0, r0, r1, lsl r0
        37c4dc:	00000010 	andeq	r0, r0, r0, lsl r0
        37c4e0:	00110011 	andeqs	r0, r1, r1, lsl r0
        37c4e4:	00110011 	andeqs	r0, r1, r1, lsl r0
        37c4e8:	00110000 	andeqs	r0, r1, r0
        37c4ec:	00110000 	andeqs	r0, r1, r0
        37c504:	00110011 	andeqs	r0, r1, r1, lsl r0
        37c508:	00000011 	andeq	r0, r0, r1, lsl r0
        37c51c:	00000010 	andeq	r0, r0, r0, lsl r0
        37c52c:	00340000 	eoreqs	r0, r4, r0
        37c530:	00000000 	andeq	r0, r0, r0
        37c534:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37c538:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37c53c:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37c548:	00110000 	andeqs	r0, r1, r0
        37c558:	00340000 	eoreqs	r0, r4, r0
        37c55c:	00340000 	eoreqs	r0, r4, r0
        37c568:	00000042 	andeq	r0, r0, r2, asr #32
        37c578:	00420042 	subeq	r0, r2, r2, asr #32
        37c57c:	00000042 	andeq	r0, r0, r2, asr #32
        37c588:	00110042 	andeqs	r0, r1, r2, asr #32
        37c58c:	00420000 	subeq	r0, r2, r0
        37c590:	00000042 	andeq	r0, r0, r2, asr #32
        37c594:	00420034 	subeq	r0, r2, r4, lsr r0
        37c598:	00420034 	subeq	r0, r2, r4, lsr r0
        37c5ac:	00000042 	andeq	r0, r0, r2, asr #32
        37c5b0:	00420000 	subeq	r0, r2, r0
        37c5b4:	00420042 	subeq	r0, r2, r2, asr #32
        37c5b8:	00420042 	subeq	r0, r2, r2, asr #32
        37c5bc:	00000042 	andeq	r0, r0, r2, asr #32
        37c5c0:	00420042 	subeq	r0, r2, r2, asr #32
        37c5c4:	00420042 	subeq	r0, r2, r2, asr #32
        37c5c8:	00000040 	andeq	r0, r0, r0, asr #32
        37c5d8:	00400040 	subeq	r0, r0, r0, asr #32
        37c5dc:	00000040 	andeq	r0, r0, r0, asr #32
        37c5e8:	00000040 	andeq	r0, r0, r0, asr #32
        37c5ec:	00400000 	subeq	r0, r0, r0
        37c5f0:	00000040 	andeq	r0, r0, r0, asr #32
        37c5f4:	00400000 	subeq	r0, r0, r0
        37c5f8:	00400000 	subeq	r0, r0, r0
        37c60c:	00000040 	andeq	r0, r0, r0, asr #32
        37c610:	00400000 	subeq	r0, r0, r0
        37c614:	00400040 	subeq	r0, r0, r0, asr #32
        37c618:	00400040 	subeq	r0, r0, r0, asr #32
        37c61c:	00000040 	andeq	r0, r0, r0, asr #32
        37c620:	00400040 	subeq	r0, r0, r0, asr #32
        37c624:	00400040 	subeq	r0, r0, r0, asr #32
        37c628:	00000010 	andeq	r0, r0, r0, lsl r0
        37c634:	00100000 	andeqs	r0, r0, r0
        37c640:	00000010 	andeq	r0, r0, r0, lsl r0
        37c644:	00100000 	andeqs	r0, r0, r0
        37c648:	00100000 	andeqs	r0, r0, r0
        37c654:	00100010 	andeqs	r0, r0, r0, lsl r0
        37c658:	00000000 	andeq	r0, r0, r0
        37c65c:	00100010 	andeqs	r0, r0, r0, lsl r0
        37c660:	00000010 	andeq	r0, r0, r0, lsl r0
        37c678:	00100010 	andeqs	r0, r0, r0, lsl r0
        37c67c:	00000010 	andeq	r0, r0, r0, lsl r0
        37c680:	00100010 	andeqs	r0, r0, r0, lsl r0
        37c684:	00100000 	andeqs	r0, r0, r0
        37c688:	00100010 	andeqs	r0, r0, r0, lsl r0
        37c68c:	00100000 	andeqs	r0, r0, r0
        37c690:	00000000 	andeq	r0, r0, r0
        37c694:	00110000 	andeqs	r0, r1, r0
        37c698:	00000000 	andeq	r0, r0, r0
        37c69c:	00000011 	andeq	r0, r0, r1, lsl r0
        37c6ac:	00110011 	andeqs	r0, r1, r1, lsl r0
        37c6b0:	00120011 	andeqs	r0, r2, r1, lsl r0
        37c6bc:	00000011 	andeq	r0, r0, r1, lsl r0
        37c6c0:	00110000 	andeqs	r0, r1, r0
        37c6c4:	00000011 	andeq	r0, r0, r1, lsl r0
        37c6c8:	00110000 	andeqs	r0, r1, r0
        37c6cc:	00110000 	andeqs	r0, r1, r0
        37c6e0:	00000011 	andeq	r0, r0, r1, lsl r0
        37c6e4:	00110000 	andeqs	r0, r1, r0
        37c6e8:	00110011 	andeqs	r0, r1, r1, lsl r0
        37c6ec:	00110011 	andeqs	r0, r1, r1, lsl r0
        37c6f0:	00000011 	andeq	r0, r0, r1, lsl r0
        37c6f4:	00110011 	andeqs	r0, r1, r1, lsl r0
        37c6f8:	00000000 	andeq	r0, r0, r0
        37c6fc:	00120000 	andeqs	r0, r2, r0
        37c700:	00000012 	andeq	r0, r0, r2, lsl r0
        37c704:	00120012 	andeqs	r0, r2, r2, lsl r0
        37c708:	00120012 	andeqs	r0, r2, r2, lsl r0
        37c70c:	00000012 	andeq	r0, r0, r2, lsl r0
        37c718:	00000015 	andeq	r0, r0, r5, lsl r0
        37c724:	00000012 	andeq	r0, r0, r2, lsl r0
        37c728:	00120000 	andeqs	r0, r2, r0
        37c72c:	00120000 	andeqs	r0, r2, r0
        37c730:	00000034 	andeq	r0, r0, r4, lsr r0
        37c734:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37c738:	00000034 	andeq	r0, r0, r4, lsr r0
        37c73c:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37c740:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37c744:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37c748:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37c74c:	00340000 	eoreqs	r0, r4, r0
        37c750:	00340000 	eoreqs	r0, r4, r0
        37c764:	00000015 	andeq	r0, r0, r5, lsl r0
        37c768:	00000012 	andeq	r0, r0, r2, lsl r0
        37c76c:	00150015 	andeqs	r0, r5, r5, lsl r0
        37c770:	00150015 	andeqs	r0, r5, r5, lsl r0
        37c774:	0015000e 	andeqs	r0, r5, lr
        37c778:	00150000 	andeqs	r0, r5, r0
        37c790:	00150015 	andeqs	r0, r5, r5, lsl r0
        37c794:	00000015 	andeq	r0, r0, r5, lsl r0
        37c7a8:	00000012 	andeq	r0, r0, r2, lsl r0
        37c7c0:	0000000e 	andeq	r0, r0, lr
        37c7c4:	00000000 	andeq	r0, r0, r0
        37c7c8:	000e0000 	andeq	r0, lr, r0
        37c7cc:	000e000e 	andeq	r0, lr, lr
        37c7d0:	000e000f 	andeq	r0, lr, pc
        37c7d4:	00150000 	andeqs	r0, r5, r0
        37c7ec:	000e000e 	andeq	r0, lr, lr
        37c7f0:	0000000e 	andeq	r0, r0, lr
        37c814:	00150000 	andeqs	r0, r5, r0
        37c818:	00000000 	andeq	r0, r0, r0
        37c81c:	0000000f 	andeq	r0, r0, pc
        37c820:	00000000 	andeq	r0, r0, r0
        37c824:	000f0000 	andeq	r0, pc, r0
        37c828:	000f000f 	andeq	r0, pc, pc
        37c82c:	000f0000 	andeq	r0, pc, r0
        37c830:	000e0013 	andeq	r0, lr, r3, lsl r0
        37c848:	000f000f 	andeq	r0, pc, pc
        37c84c:	0000000f 	andeq	r0, r0, pc
        37c870:	000e0000 	andeq	r0, lr, r0
        37c87c:	00000013 	andeq	r0, r0, r3, lsl r0
        37c880:	00000000 	andeq	r0, r0, r0
        37c884:	00130000 	andeqs	r0, r3, r0
        37c888:	00000013 	andeq	r0, r0, r3, lsl r0
        37c88c:	000f0000 	andeq	r0, pc, r0
        37c8a4:	00000014 	andeq	r0, r0, r4, lsl r0
        37c8a8:	00130013 	andeqs	r0, r3, r3, lsl r0
        37c8ac:	00000013 	andeq	r0, r0, r3, lsl r0
        37c8b0:	00000000 	andeq	r0, r0, r0
        37c8b4:	00000012 	andeq	r0, r0, r2, lsl r0
        37c8c0:	00120000 	andeqs	r0, r2, r0
        37c8cc:	000f0012 	andeq	r0, pc, r2, lsl r0
        37c8d0:	00120000 	andeqs	r0, r2, r0
        37c8d4:	00120000 	andeqs	r0, r2, r0
        37c8e0:	00120012 	andeqs	r0, r2, r2, lsl r0
        37c8e4:	00000000 	andeq	r0, r0, r0
        37c8e8:	00120012 	andeqs	r0, r2, r2, lsl r0
        37c8ec:	00130012 	andeqs	r0, r3, r2, lsl r0
        37c8f0:	00000014 	andeq	r0, r0, r4, lsl r0
        37c8f4:	00000000 	andeq	r0, r0, r0
        37c8f8:	00140000 	andeqs	r0, r4, r0
        37c8fc:	00000014 	andeq	r0, r0, r4, lsl r0
        37c900:	00000000 	andeq	r0, r0, r0
        37c904:	00120012 	andeqs	r0, r2, r2, lsl r0
        37c908:	00000012 	andeq	r0, r0, r2, lsl r0
        37c90c:	00120012 	andeqs	r0, r2, r2, lsl r0
        37c910:	00120000 	andeqs	r0, r2, r0
        37c914:	00120012 	andeqs	r0, r2, r2, lsl r0
        37c918:	00120000 	andeqs	r0, r2, r0
        37c91c:	00140014 	andeqs	r0, r4, r4, lsl r0
        37c920:	00150014 	andeqs	r0, r5, r4, lsl r0
        37c924:	00000000 	andeq	r0, r0, r0
        37c928:	00000015 	andeq	r0, r0, r5, lsl r0
        37c92c:	00130000 	andeqs	r0, r3, r0
        37c938:	00150015 	andeqs	r0, r5, r5, lsl r0
        37c93c:	00000015 	andeq	r0, r0, r5, lsl r0
        37c940:	00190000 	andeqs	r0, r9, r0
        37c944:	00000000 	andeq	r0, r0, r0
        37c948:	00000015 	andeq	r0, r0, r5, lsl r0
        37c94c:	00150000 	andeqs	r0, r5, r0
        37c950:	00000015 	andeq	r0, r0, r5, lsl r0
        37c954:	00150000 	andeqs	r0, r5, r0
        37c958:	00150000 	andeqs	r0, r5, r0
        37c95c:	00000000 	andeq	r0, r0, r0
        37c960:	00140000 	andeqs	r0, r4, r0
        37c96c:	00000015 	andeq	r0, r0, r5, lsl r0
        37c970:	00150000 	andeqs	r0, r5, r0
        37c974:	00150015 	andeqs	r0, r5, r5, lsl r0
        37c978:	00150015 	andeqs	r0, r5, r5, lsl r0
        37c97c:	000e0015 	andeq	r0, lr, r5, lsl r0
        37c980:	00150015 	andeqs	r0, r5, r5, lsl r0
        37c984:	0000000e 	andeq	r0, r0, lr
        37c990:	00000019 	andeq	r0, r0, r9, lsl r0
        37c994:	000e000e 	andeq	r0, lr, lr
        37c998:	0019000e 	andeqs	r0, r9, lr
        37c99c:	00000000 	andeq	r0, r0, r0
        37c9a0:	00140000 	andeqs	r0, r4, r0
        37c9a4:	0000000e 	andeq	r0, r0, lr
        37c9a8:	000e0000 	andeq	r0, lr, r0
        37c9ac:	0000000e 	andeq	r0, r0, lr
        37c9b0:	000e0000 	andeq	r0, lr, r0
        37c9b4:	000e0019 	andeq	r0, lr, r9, lsl r0
        37c9b8:	00190000 	andeqs	r0, r9, r0
        37c9bc:	00190000 	andeqs	r0, r9, r0
        37c9c8:	0000000e 	andeq	r0, r0, lr
        37c9cc:	000e0000 	andeq	r0, lr, r0
        37c9d0:	000e000e 	andeq	r0, lr, lr
        37c9d4:	000e000e 	andeq	r0, lr, lr
        37c9d8:	000f000e 	andeq	r0, pc, lr
        37c9dc:	00000000 	andeq	r0, r0, r0
        37c9e0:	0000000f 	andeq	r0, r0, pc
        37c9f0:	000f000f 	andeq	r0, pc, pc
        37c9f4:	0000000f 	andeq	r0, r0, pc
        37c9f8:	00000019 	andeq	r0, r0, r9, lsl r0
        37c9fc:	00000000 	andeq	r0, r0, r0
        37ca00:	0000000f 	andeq	r0, r0, pc
        37ca04:	000f0000 	andeq	r0, pc, r0
        37ca08:	0000000f 	andeq	r0, r0, pc
        37ca0c:	000f0000 	andeq	r0, pc, r0
        37ca10:	000f0000 	andeq	r0, pc, r0
        37ca24:	0000000f 	andeq	r0, r0, pc
        37ca28:	000f0000 	andeq	r0, pc, r0
        37ca2c:	000f000f 	andeq	r0, pc, pc
        37ca30:	000f000f 	andeq	r0, pc, pc
        37ca34:	0000000f 	andeq	r0, r0, pc
        37ca38:	00130019 	andeqs	r0, r3, r9, lsl r0
        37ca3c:	00000000 	andeq	r0, r0, r0
        37ca40:	00000013 	andeq	r0, r0, r3, lsl r0
        37ca50:	00130013 	andeqs	r0, r3, r3, lsl r0
        37ca54:	00000013 	andeq	r0, r0, r3, lsl r0
        37ca58:	001a0000 	andeqs	r0, sl, r0
        37ca5c:	00000000 	andeq	r0, r0, r0
        37ca60:	00000013 	andeq	r0, r0, r3, lsl r0
        37ca64:	00130000 	andeqs	r0, r3, r0
        37ca68:	00000013 	andeq	r0, r0, r3, lsl r0
        37ca6c:	00130000 	andeqs	r0, r3, r0
        37ca70:	00130000 	andeqs	r0, r3, r0
        37ca84:	00000013 	andeq	r0, r0, r3, lsl r0
        37ca88:	00130000 	andeqs	r0, r3, r0
        37ca8c:	00130013 	andeqs	r0, r3, r3, lsl r0
        37ca90:	00130013 	andeqs	r0, r3, r3, lsl r0
        37ca94:	00000013 	andeq	r0, r0, r3, lsl r0
        37caa8:	0000001a 	andeq	r0, r0, sl, lsl r0
        37caac:	00140000 	andeqs	r0, r4, r0
        37cab0:	001a0000 	andeqs	r0, sl, r0
        37cab4:	00000014 	andeq	r0, r0, r4, lsl r0
        37cac4:	00140014 	andeqs	r0, r4, r4, lsl r0
        37cac8:	00000014 	andeq	r0, r0, r4, lsl r0
        37cacc:	0000001a 	andeq	r0, r0, sl, lsl r0
        37cad0:	001a0000 	andeqs	r0, sl, r0
        37cad4:	001a0014 	andeqs	r0, sl, r4, lsl r0
        37cad8:	00140000 	andeqs	r0, r4, r0
        37cadc:	00000014 	andeq	r0, r0, r4, lsl r0
        37cae0:	00140000 	andeqs	r0, r4, r0
        37cae4:	00140000 	andeqs	r0, r4, r0
        37caf8:	00000014 	andeq	r0, r0, r4, lsl r0
        37cafc:	00140000 	andeqs	r0, r4, r0
        37cb00:	00140014 	andeqs	r0, r4, r4, lsl r0
        37cb04:	00140014 	andeqs	r0, r4, r4, lsl r0
        37cb08:	00220014 	eoreq	r0, r2, r4, lsl r0
        37cb0c:	00000000 	andeq	r0, r0, r0
        37cb10:	0000001a 	andeq	r0, r0, sl, lsl r0
        37cb14:	003a0000 	eoreqs	r0, sl, r0
        37cb18:	00000000 	andeq	r0, r0, r0
        37cb1c:	0043003a 	subeq	r0, r3, sl, lsr r0
        37cb20:	00000047 	andeq	r0, r0, r7, asr #32
        37cb24:	00000049 	andeq	r0, r0, r9, asr #32
        37cb28:	003a004b 	eoreqs	r0, sl, fp, asr #32
        37cb2c:	00000000 	andeq	r0, r0, r0
        37cb30:	0000004f 	andeq	r0, r0, pc, asr #32
        37cb34:	00500051 	subeqs	r0, r0, r1, asr r0
        37cb38:	00520000 	subeqs	r0, r2, r0
        37cb3c:	00000000 	andeq	r0, r0, r0
        37cb40:	00590000 	subeqs	r0, r9, r0
        37cb44:	00000019 	andeq	r0, r0, r9, lsl r0
        37cb50:	0019001a 	andeqs	r0, r9, sl, lsl r0
        37cb5c:	00000019 	andeq	r0, r0, r9, lsl r0
        37cb60:	00190000 	andeqs	r0, r9, r0
        37cb64:	00190000 	andeqs	r0, r9, r0
        37cb70:	00190019 	andeqs	r0, r9, r9, lsl r0
        37cb74:	00000000 	andeq	r0, r0, r0
        37cb78:	00190019 	andeqs	r0, r9, r9, lsl r0
        37cb7c:	00000019 	andeq	r0, r0, r9, lsl r0
        37cb94:	00190019 	andeqs	r0, r9, r9, lsl r0
        37cb98:	00000019 	andeq	r0, r0, r9, lsl r0
        37cb9c:	00190019 	andeqs	r0, r9, r9, lsl r0
        37cba0:	00190000 	andeqs	r0, r9, r0
        37cbc4:	0000001b 	andeq	r0, r0, fp, lsl r0
        37cbd8:	00b300b4 	ldreqh	r0, [r3], r4
        37cbdc:	00b500b6 	ldreqh	r0, [r5], r6
        37cbe0:	00b700b8 	ldreqh	r0, [r7], r8
        37cbe4:	00b900ba 	ldreqh	r0, [r9], sl
        37cbe8:	00bb00bc 	ldreqh	r0, [fp], ip
        37cbec:	00bd00be 	ldreqh	r0, [sp], lr
        37cbf0:	00bf00c0 	adceqs	r0, pc, r0, asr #1
        37cbf4:	00c100c2 	sbceq	r0, r1, r2, asr #1
        37cbf8:	00c300c4 	sbceq	r0, r3, r4, asr #1
        37cbfc:	00c50000 	sbceq	r0, r5, r0
        37cc00:	00000000 	andeq	r0, r0, r0
        37cc04:	00ca0000 	sbceq	r0, sl, r0
        37cc08:	00000000 	andeq	r0, r0, r0
        37cc0c:	000000cc 	andeq	r0, r0, ip, asr #1
        37cc18:	001b0000 	andeqs	r0, fp, r0
        37cc1c:	00d3001b 	sbceqs	r0, r3, fp, lsl r0
        37cc20:	00d50000 	sbceqs	r0, r5, r0
        37cc24:	00d70000 	sbceqs	r0, r7, r0
        37cc28:	00000000 	andeq	r0, r0, r0
        37cc2c:	000000db 	ldreqd	r0, [r0], -fp
        37cc30:	00000000 	andeq	r0, r0, r0
        37cc34:	00dd00de 	ldreqsb	r0, [sp], #14
        37cc38:	00df0000 	sbceqs	r0, pc, r0
        37cc3c:	001b001b 	andeqs	r0, fp, fp, lsl r0
        37cc40:	0000001b 	andeq	r0, r0, fp, lsl r0
        37cc44:	00000000 	andeq	r0, r0, r0
        37cc48:	000000e6 	andeq	r0, r0, r6, ror #1
        37cc4c:	0000001c 	andeq	r0, r0, ip, lsl r0
        37cc5c:	0000001a 	andeq	r0, r0, sl, lsl r0
        37cc60:	00000000 	andeq	r0, r0, r0
        37cc64:	000000f0 	streqd	r0, [r0], -r0
        37cc68:	001a0000 	andeqs	r0, sl, r0
        37cc6c:	00220000 	eoreq	r0, r2, r0
        37cc70:	00000000 	andeq	r0, r0, r0
        37cc74:	0000001a 	andeq	r0, r0, sl, lsl r0
        37cc78:	001a0000 	andeqs	r0, sl, r0
        37cc7c:	001a0000 	andeqs	r0, sl, r0
        37cc80:	001b0000 	andeqs	r0, fp, r0
        37cc84:	00000000 	andeq	r0, r0, r0
        37cc88:	001a001a 	andeqs	r0, sl, sl, lsl r0
        37cc8c:	00000000 	andeq	r0, r0, r0
        37cc90:	001a001a 	andeqs	r0, sl, sl, lsl r0
        37cc94:	0000001a 	andeq	r0, r0, sl, lsl r0
        37cc98:	000000f6 	streqd	r0, [r0], -r6
        37cc9c:	00000000 	andeq	r0, r0, r0
        37cca0:	001c0000 	andeqs	r0, ip, r0
        37cca4:	0000001c 	andeq	r0, r0, ip, lsl r0
        37cca8:	000000fa 	streqd	r0, [r0], -sl
        37ccac:	001a001a 	andeqs	r0, sl, sl, lsl r0
        37ccb0:	0000001a 	andeq	r0, r0, sl, lsl r0
        37ccb4:	001a001a 	andeqs	r0, sl, sl, lsl r0
        37ccb8:	001a0000 	andeqs	r0, sl, r0
        37ccbc:	0100001d 	tsteq	r0, sp, lsl r0
        37ccc0:	001b0000 	andeqs	r0, fp, r0
        37ccc4:	001c001c 	andeqs	r0, ip, ip, lsl r0
        37ccc8:	0000001c 	andeq	r0, r0, ip, lsl r0
        37cccc:	01050000 	tsteq	r5, r0
        37ccf4:	00000113 	andeq	r0, r0, r3, lsl r1
        37ccf8:	01140115 	tsteq	r4, r5, lsl r1
        37ccfc:	00000000 	andeq	r0, r0, r0
        37cd00:	01170000 	tsteq	r7, r0
        37cd04:	0119011a 	tsteq	r9, sl, lsl r1
        37cd08:	001c011b 	andeqs	r0, ip, fp, lsl r1
        37cd0c:	011c0000 	tsteq	ip, r0
        37cd10:	001d0000 	andeqs	r0, sp, r0
        37cd14:	0000001d 	andeq	r0, r0, sp, lsl r0
        37cd18:	0000001e 	andeq	r0, r0, lr, lsl r0
        37cd24:	00000126 	andeq	r0, r0, r6, lsr #2
        37cd34:	001d001d 	andeqs	r0, sp, sp, lsl r0
        37cd38:	0000001d 	andeq	r0, r0, sp, lsl r0
        37cd44:	012b0000 	teqeq	fp, r0
        37cd48:	001c012c 	andeqs	r0, ip, ip, lsr #2
        37cd58:	0000012e 	andeq	r0, r0, lr, lsr #2
        37cd5c:	012f0000 	teqeq	pc, r0
        37cd68:	01320133 	teqeq	r2, r3, lsr r1
        37cd6c:	001e0000 	andeqs	r0, lr, r0
        37cd70:	0000001e 	andeq	r0, r0, lr, lsl r0
        37cd74:	00000021 	andeq	r0, r0, r1, lsr #32
        37cd78:	001d0000 	andeqs	r0, sp, r0
        37cd90:	001e001e 	andeqs	r0, lr, lr, lsl r0
        37cd94:	0000001e 	andeq	r0, r0, lr, lsl r0
        37cdb8:	001d0000 	andeqs	r0, sp, r0
        37cdbc:	0000001f 	andeq	r0, r0, pc, lsl r0
        37cdc8:	00210000 	eoreq	r0, r1, r0
        37cdcc:	001b0021 	andeqs	r0, fp, r1, lsr #32
        37cdd0:	00000000 	andeq	r0, r0, r0
        37cdd4:	001e001b 	andeqs	r0, lr, fp, lsl r0
        37cde4:	001b001b 	andeqs	r0, fp, fp, lsl r0
        37cde8:	0000001b 	andeq	r0, r0, fp, lsl r0
        37cdec:	00210000 	eoreq	r0, r1, r0
        37cdf0:	00000000 	andeq	r0, r0, r0
        37cdf4:	0000001b 	andeq	r0, r0, fp, lsl r0
        37cdf8:	001b0000 	andeqs	r0, fp, r0
        37cdfc:	0000001b 	andeq	r0, r0, fp, lsl r0
        37ce00:	001b0000 	andeqs	r0, fp, r0
        37ce04:	001b0000 	andeqs	r0, fp, r0
        37ce10:	001f0000 	andeqs	r0, pc, r0
        37ce14:	001e001f 	andeqs	r0, lr, pc, lsl r0
        37ce18:	0000001b 	andeq	r0, r0, fp, lsl r0
        37ce1c:	001b0000 	andeqs	r0, fp, r0
        37ce20:	001b001b 	andeqs	r0, fp, fp, lsl r0
        37ce24:	001b001b 	andeqs	r0, fp, fp, lsl r0
        37ce28:	00000020 	andeq	r0, r0, r0, lsr #32
        37ce2c:	00000000 	andeq	r0, r0, r0
        37ce30:	00210000 	eoreq	r0, r1, r0
        37ce34:	001f0000 	andeqs	r0, pc, r0
        37ce54:	001c0000 	andeqs	r0, ip, r0
        37ce58:	00000000 	andeq	r0, r0, r0
        37ce5c:	0000001c 	andeq	r0, r0, ip, lsl r0
        37ce6c:	001c001c 	andeqs	r0, ip, ip, lsl r0
        37ce70:	0021001c 	eoreq	r0, r1, ip, lsl r0
        37ce74:	00000000 	andeq	r0, r0, r0
        37ce78:	001f0000 	andeqs	r0, pc, r0
        37ce7c:	0020001c 	eoreq	r0, r0, ip, lsl r0
        37ce80:	001c0020 	andeqs	r0, ip, r0, lsr #32
        37ce84:	0000001c 	andeq	r0, r0, ip, lsl r0
        37ce88:	001c0000 	andeqs	r0, ip, r0
        37ce8c:	001c007d 	andeqs	r0, ip, sp, ror r0
        37cea0:	0020001c 	eoreq	r0, r0, ip, lsl r0
        37cea4:	001c0000 	andeqs	r0, ip, r0
        37cea8:	001c001c 	andeqs	r0, ip, ip, lsl r0
        37ceac:	001c001c 	andeqs	r0, ip, ip, lsl r0
        37ceb8:	001f0000 	andeqs	r0, pc, r0
        37cec4:	001d0000 	andeqs	r0, sp, r0
        37cec8:	00000000 	andeq	r0, r0, r0
        37cecc:	0000001d 	andeq	r0, r0, sp, lsl r0
        37cedc:	001d001d 	andeqs	r0, sp, sp, lsl r0
        37cee0:	007d001d 	rsbeqs	r0, sp, sp, lsl r0
        37cee4:	0020007d 	eoreq	r0, r0, sp, ror r0
        37cee8:	00000077 	andeq	r0, r0, r7, ror r0
        37ceec:	0000001d 	andeq	r0, r0, sp, lsl r0
        37cef0:	001d0000 	andeqs	r0, sp, r0
        37cef4:	0000001d 	andeq	r0, r0, sp, lsl r0
        37cef8:	001d0000 	andeqs	r0, sp, r0
        37cefc:	001d0000 	andeqs	r0, sp, r0
        37cf00:	00000000 	andeq	r0, r0, r0
        37cf04:	007d0000 	rsbeqs	r0, sp, r0
        37cf10:	0000001d 	andeq	r0, r0, sp, lsl r0
        37cf14:	001d0000 	andeqs	r0, sp, r0
        37cf18:	001d001d 	andeqs	r0, sp, sp, lsl r0
        37cf1c:	001d001d 	andeqs	r0, sp, sp, lsl r0
        37cf20:	001e0000 	andeqs	r0, lr, r0
        37cf24:	00200000 	eoreq	r0, r0, r0
        37cf28:	0000001e 	andeq	r0, r0, lr, lsl r0
        37cf2c:	005d0000 	subeqs	r0, sp, r0
        37cf38:	001e001e 	andeqs	r0, lr, lr, lsl r0
        37cf3c:	0077001e 	rsbeqs	r0, r7, lr, lsl r0
        37cf40:	00000077 	andeq	r0, r0, r7, ror r0
        37cf44:	00000000 	andeq	r0, r0, r0
        37cf48:	007d001e 	rsbeqs	r0, sp, lr, lsl r0
        37cf4c:	001e0000 	andeqs	r0, lr, r0
        37cf50:	0000001e 	andeq	r0, r0, lr, lsl r0
        37cf54:	001e0000 	andeqs	r0, lr, r0
        37cf58:	001e0000 	andeqs	r0, lr, r0
        37cf5c:	00000000 	andeq	r0, r0, r0
        37cf60:	00770000 	rsbeqs	r0, r7, r0
        37cf6c:	0000001e 	andeq	r0, r0, lr, lsl r0
        37cf70:	001e0000 	andeqs	r0, lr, r0
        37cf74:	001e001e 	andeqs	r0, lr, lr, lsl r0
        37cf78:	001e001e 	andeqs	r0, lr, lr, lsl r0
        37cf7c:	0021005d 	eoreq	r0, r1, sp, asr r0
        37cf80:	00000000 	andeq	r0, r0, r0
        37cf84:	005d0021 	subeqs	r0, sp, r1, lsr #32
        37cf88:	007d0000 	rsbeqs	r0, sp, r0
        37cf94:	00210021 	eoreq	r0, r1, r1, lsr #32
        37cf98:	00000021 	andeq	r0, r0, r1, lsr #32
        37cf9c:	00000000 	andeq	r0, r0, r0
        37cfa0:	0000005d 	andeq	r0, r0, sp, asr r0
        37cfa4:	00770021 	rsbeqs	r0, r7, r1, lsr #32
        37cfa8:	00210000 	eoreq	r0, r1, r0
        37cfac:	005e0021 	subeqs	r0, lr, r1, lsr #32
        37cfb0:	00210000 	eoreq	r0, r1, r0
        37cfb4:	00210000 	eoreq	r0, r1, r0
        37cfc4:	001f0000 	andeqs	r0, pc, r0
        37cfc8:	00000021 	andeq	r0, r0, r1, lsr #32
        37cfcc:	0021001f 	eoreq	r0, r1, pc, lsl r0
        37cfdc:	001f001f 	andeqs	r0, pc, pc, lsl r0
        37cfe0:	0000001f 	andeq	r0, r0, pc, lsl r0
        37cfe4:	0077005d 	rsbeqs	r0, r7, sp, asr r0
        37cfe8:	0000005f 	andeq	r0, r0, pc, asr r0
        37cfec:	0000001f 	andeq	r0, r0, pc, lsl r0
        37cff0:	001f0000 	andeqs	r0, pc, r0
        37cff4:	0000001f 	andeq	r0, r0, pc, lsl r0
        37cff8:	001f0000 	andeqs	r0, pc, r0
        37cffc:	001f005e 	andeqs	r0, pc, lr, asr r0
        37d000:	00000000 	andeq	r0, r0, r0
        37d004:	005e0000 	subeqs	r0, lr, r0
        37d010:	0000001f 	andeq	r0, r0, pc, lsl r0
        37d014:	001f0000 	andeqs	r0, pc, r0
        37d018:	0000007c 	andeq	r0, r0, ip, ror r0
        37d01c:	00000000 	andeq	r0, r0, r0
        37d020:	0000005e 	andeq	r0, r0, lr, asr r0
        37d024:	0000005d 	andeq	r0, r0, sp, asr r0
        37d030:	00200000 	eoreq	r0, r0, r0
        37d034:	00000000 	andeq	r0, r0, r0
        37d038:	00000020 	andeq	r0, r0, r0, lsr #32
        37d03c:	005f0000 	subeqs	r0, pc, r0
        37d040:	0000005f 	andeq	r0, r0, pc, asr r0
        37d044:	00000000 	andeq	r0, r0, r0
        37d048:	00200020 	eoreq	r0, r0, r0, lsr #32
        37d04c:	00000020 	andeq	r0, r0, r0, lsr #32
        37d058:	00600020 	rsbeq	r0, r0, r0, lsr #32
        37d05c:	00200000 	eoreq	r0, r0, r0
        37d060:	005f0020 	subeqs	r0, pc, r0, lsr #32
        37d064:	0020005e 	eoreq	r0, r0, lr, asr r0
        37d068:	00200000 	eoreq	r0, r0, r0
        37d06c:	007c0000 	rsbeqs	r0, ip, r0
        37d070:	0000007c 	andeq	r0, r0, ip, ror r0
        37d07c:	00000020 	andeq	r0, r0, r0, lsr #32
        37d080:	00200000 	eoreq	r0, r0, r0
        37d084:	00000000 	andeq	r0, r0, r0
        37d088:	00610000 	rsbeq	r0, r1, r0
        37d08c:	00000000 	andeq	r0, r0, r0
        37d090:	007c0000 	rsbeqs	r0, ip, r0
        37d094:	007d0000 	rsbeqs	r0, sp, r0
        37d098:	00000000 	andeq	r0, r0, r0
        37d09c:	0000007d 	andeq	r0, r0, sp, ror r0
        37d0a0:	00000000 	andeq	r0, r0, r0
        37d0a4:	005f005e 	subeqs	r0, pc, lr, asr r0
        37d0a8:	00000060 	andeq	r0, r0, r0, rrx
        37d0ac:	007d007d 	rsbeqs	r0, sp, sp, ror r0
        37d0b0:	0060007d 	rsbeq	r0, r0, sp, ror r0
        37d0bc:	0000007d 	andeq	r0, r0, sp, ror r0
        37d0c0:	007d0000 	rsbeqs	r0, sp, r0
        37d0c4:	0000007d 	andeq	r0, r0, sp, ror r0
        37d0c8:	007d0000 	rsbeqs	r0, sp, r0
        37d0cc:	007d0060 	rsbeqs	r0, sp, r0, rrx
        37d0d0:	00000000 	andeq	r0, r0, r0
        37d0d4:	007c0000 	rsbeqs	r0, ip, r0
        37d0d8:	004d0061 	subeq	r0, sp, r1, rrx
        37d0dc:	00000000 	andeq	r0, r0, r0
        37d0e0:	00610000 	rsbeq	r0, r1, r0
        37d0e4:	005f0000 	subeqs	r0, pc, r0
        37d0f0:	00770000 	rsbeqs	r0, r7, r0
        37d0f4:	00000000 	andeq	r0, r0, r0
        37d0f8:	00000077 	andeq	r0, r0, r7, ror r0
        37d0fc:	00000061 	andeq	r0, r0, r1, rrx
        37d108:	00770077 	rsbeqs	r0, r7, r7, ror r0
        37d10c:	00000077 	andeq	r0, r0, r7, ror r0
        37d110:	00000060 	andeq	r0, r0, r0, rrx
        37d114:	007c0000 	rsbeqs	r0, ip, r0
        37d118:	00000077 	andeq	r0, r0, r7, ror r0
        37d11c:	00770065 	rsbeqs	r0, r7, r5, rrx
        37d120:	00000077 	andeq	r0, r0, r7, ror r0
        37d124:	00770000 	rsbeqs	r0, r7, r0
        37d128:	0077004d 	rsbeqs	r0, r7, sp, asr #32
        37d12c:	00000000 	andeq	r0, r0, r0
        37d130:	004d005d 	subeq	r0, sp, sp, asr r0
        37d13c:	005d0000 	subeqs	r0, sp, r0
        37d140:	00000061 	andeq	r0, r0, r1, rrx
        37d144:	00000000 	andeq	r0, r0, r0
        37d148:	0000005d 	andeq	r0, r0, sp, asr r0
        37d14c:	005d004d 	subeqs	r0, sp, sp, asr #32
        37d150:	005d0060 	subeqs	r0, sp, r0, rrx
        37d15c:	005d005d 	subeqs	r0, sp, sp, asr r0
        37d160:	00000000 	andeq	r0, r0, r0
        37d164:	005d005d 	subeqs	r0, sp, sp, asr r0
        37d168:	0000005d 	andeq	r0, r0, sp, asr r0
        37d16c:	00790000 	rsbeqs	r0, r9, r0
        37d170:	00650000 	rsbeq	r0, r5, r0
        37d174:	00000065 	andeq	r0, r0, r5, rrx
        37d180:	00000061 	andeq	r0, r0, r1, rrx
        37d190:	0000004d 	andeq	r0, r0, sp, asr #32
        37d194:	00650000 	rsbeq	r0, r5, r0
        37d1b0:	0000005e 	andeq	r0, r0, lr, asr r0
        37d1b4:	00000000 	andeq	r0, r0, r0
        37d1b8:	00000058 	andeq	r0, r0, r8, asr r0
        37d1bc:	005e0079 	subeqs	r0, lr, r9, ror r0
        37d1c0:	00000000 	andeq	r0, r0, r0
        37d1c4:	00790000 	rsbeqs	r0, r9, r0
        37d1c8:	0000005e 	andeq	r0, r0, lr, asr r0
        37d1cc:	005e0000 	subeqs	r0, lr, r0
        37d1d0:	005e004d 	subeqs	r0, lr, sp, asr #32
        37d1d4:	00000000 	andeq	r0, r0, r0
        37d1d8:	00650000 	rsbeq	r0, r5, r0
        37d1dc:	005e005e 	subeqs	r0, lr, lr, asr r0
        37d1e0:	00000079 	andeq	r0, r0, r9, ror r0
        37d1e4:	005e005e 	subeqs	r0, lr, lr, asr r0
        37d1e8:	0000005e 	andeq	r0, r0, lr, asr r0
        37d1ec:	00000000 	andeq	r0, r0, r0
        37d1f0:	005f0000 	subeqs	r0, pc, r0
        37d1f4:	00000055 	andeq	r0, r0, r5, asr r0
        37d1f8:	0000005f 	andeq	r0, r0, pc, asr r0
        37d208:	005f005f 	subeqs	r0, pc, pc, asr r0
        37d20c:	0058005f 	subeqs	r0, r8, pc, asr r0
        37d210:	00000058 	andeq	r0, r0, r8, asr r0
        37d214:	00000000 	andeq	r0, r0, r0
        37d218:	0065005f 	rsbeq	r0, r5, pc, asr r0
        37d21c:	005f0000 	subeqs	r0, pc, r0
        37d220:	007c005f 	rsbeqs	r0, ip, pc, asr r0
        37d224:	005f0079 	subeqs	r0, pc, r9, ror r0
        37d228:	005f007c 	subeqs	r0, pc, ip, ror r0
        37d22c:	00570000 	subeqs	r0, r7, r0
        37d230:	00580000 	subeqs	r0, r8, r0
        37d234:	00000000 	andeq	r0, r0, r0
        37d238:	007c007c 	rsbeqs	r0, ip, ip, ror r0
        37d23c:	0000007c 	andeq	r0, r0, ip, ror r0
        37d248:	0055007c 	subeqs	r0, r5, ip, ror r0
        37d24c:	007c0055 	rsbeqs	r0, ip, r5, asr r0
        37d250:	0000007c 	andeq	r0, r0, ip, ror r0
        37d254:	007c0000 	rsbeqs	r0, ip, r0
        37d258:	007c0000 	rsbeqs	r0, ip, r0
        37d25c:	00000060 	andeq	r0, r0, r0, rrx
        37d260:	00000000 	andeq	r0, r0, r0
        37d264:	00000079 	andeq	r0, r0, r9, ror r0
        37d268:	00600000 	rsbeq	r0, r0, r0
        37d26c:	00550000 	subeqs	r0, r5, r0
        37d270:	00000000 	andeq	r0, r0, r0
        37d274:	00580060 	subeqs	r0, r8, r0, rrx
        37d278:	00600000 	rsbeq	r0, r0, r0
        37d27c:	00600057 	rsbeq	r0, r0, r7, asr r0
        37d280:	00000000 	andeq	r0, r0, r0
        37d284:	00570000 	subeqs	r0, r7, r0
        37d288:	00600060 	rsbeq	r0, r0, r0, rrx
        37d28c:	00000061 	andeq	r0, r0, r1, rrx
        37d290:	00600060 	rsbeq	r0, r0, r0, rrx
        37d294:	00000060 	andeq	r0, r0, r0, rrx
        37d298:	00610000 	rsbeq	r0, r1, r0
        37d29c:	00000000 	andeq	r0, r0, r0
        37d2a0:	00000057 	andeq	r0, r0, r7, asr r0
        37d2a4:	00000061 	andeq	r0, r0, r1, rrx
        37d2a8:	00610000 	rsbeq	r0, r1, r0
        37d2ac:	00610000 	rsbeq	r0, r1, r0
        37d2b0:	00550000 	subeqs	r0, r5, r0
        37d2b4:	00580000 	subeqs	r0, r8, r0
        37d2b8:	00610061 	rsbeq	r0, r1, r1, rrx
        37d2bc:	00560000 	subeqs	r0, r6, r0
        37d2c0:	00610061 	rsbeq	r0, r1, r1, rrx
        37d2c4:	00000061 	andeq	r0, r0, r1, rrx
        37d2dc:	0000004d 	andeq	r0, r0, sp, asr #32
        37d2e0:	00000000 	andeq	r0, r0, r0
        37d2e4:	00000057 	andeq	r0, r0, r7, asr r0
        37d2e8:	004d0000 	subeq	r0, sp, r0
        37d2ec:	00000000 	andeq	r0, r0, r0
        37d2f0:	00550000 	subeqs	r0, r5, r0
        37d2f4:	0000004d 	andeq	r0, r0, sp, asr #32
        37d2f8:	004d0000 	subeq	r0, sp, r0
        37d2fc:	004d0000 	subeq	r0, sp, r0
        37d308:	004d004d 	subeq	r0, sp, sp, asr #32
        37d30c:	00000056 	andeq	r0, r0, r6, asr r0
        37d310:	004d004d 	subeq	r0, sp, sp, asr #32
        37d314:	0056004d 	subeqs	r0, r6, sp, asr #32
        37d324:	00650057 	rsbeq	r0, r5, r7, asr r0
        37d328:	00000000 	andeq	r0, r0, r0
        37d32c:	00000065 	andeq	r0, r0, r5, rrx
        37d330:	00000056 	andeq	r0, r0, r6, asr r0
        37d33c:	00650065 	rsbeq	r0, r5, r5, rrx
        37d340:	00000065 	andeq	r0, r0, r5, rrx
        37d34c:	00000065 	andeq	r0, r0, r5, rrx
        37d350:	00650000 	rsbeq	r0, r5, r0
        37d354:	00000065 	andeq	r0, r0, r5, rrx
        37d358:	00650000 	rsbeq	r0, r5, r0
        37d35c:	00650000 	rsbeq	r0, r5, r0
        37d370:	00000079 	andeq	r0, r0, r9, ror r0
        37d374:	00000056 	andeq	r0, r0, r6, asr r0
        37d378:	00000000 	andeq	r0, r0, r0
        37d37c:	00790000 	rsbeqs	r0, r9, r0
        37d388:	00000079 	andeq	r0, r0, r9, ror r0
        37d38c:	00790000 	rsbeqs	r0, r9, r0
        37d390:	00790000 	rsbeqs	r0, r9, r0
        37d39c:	00790079 	rsbeqs	r0, r9, r9, ror r0
        37d3a0:	00000000 	andeq	r0, r0, r0
        37d3a4:	00790079 	rsbeqs	r0, r9, r9, ror r0
        37d3a8:	00000079 	andeq	r0, r0, r9, ror r0
        37d3b4:	00700056 	rsbeqs	r0, r0, r6, asr r0
        37d3b8:	00000000 	andeq	r0, r0, r0
        37d3bc:	00740072 	rsbeqs	r0, r4, r2, ror r0
        37d3c0:	00580073 	subeqs	r0, r8, r3, ror r0
        37d3c4:	007d0075 	rsbeqs	r0, sp, r5, ror r0
        37d3c8:	00000058 	andeq	r0, r0, r8, asr r0
        37d3d8:	00580058 	subeqs	r0, r8, r8, asr r0
        37d3dc:	007b0058 	rsbeqs	r0, fp, r8, asr r0
        37d3e0:	006a0000 	rsbeq	r0, sl, r0
        37d3e4:	006b0000 	rsbeq	r0, fp, r0
        37d3e8:	00000058 	andeq	r0, r0, r8, asr r0
        37d3ec:	00580000 	subeqs	r0, r8, r0
        37d3f0:	00000058 	andeq	r0, r0, r8, asr r0
        37d3f4:	00580000 	subeqs	r0, r8, r0
        37d3f8:	00580000 	subeqs	r0, r8, r0
        37d3fc:	00550000 	subeqs	r0, r5, r0
        37d400:	00000000 	andeq	r0, r0, r0
        37d404:	00000055 	andeq	r0, r0, r5, asr r0
        37d414:	00550055 	subeqs	r0, r5, r5, asr r0
        37d418:	00000055 	andeq	r0, r0, r5, asr r0
        37d41c:	0000007a 	andeq	r0, r0, sl, ror r0
        37d420:	00000000 	andeq	r0, r0, r0
        37d424:	00000055 	andeq	r0, r0, r5, asr r0
        37d428:	00550000 	subeqs	r0, r5, r0
        37d42c:	00000055 	andeq	r0, r0, r5, asr r0
        37d430:	00550057 	subeqs	r0, r5, r7, asr r0
        37d434:	00550000 	subeqs	r0, r5, r0
        37d438:	00000000 	andeq	r0, r0, r0
        37d43c:	00570000 	subeqs	r0, r7, r0
        37d448:	00000057 	andeq	r0, r0, r7, asr r0
        37d44c:	00570000 	subeqs	r0, r7, r0
        37d450:	00570000 	subeqs	r0, r7, r0
        37d45c:	00570057 	subeqs	r0, r7, r7, asr r0
        37d460:	00000000 	andeq	r0, r0, r0
        37d464:	00570057 	subeqs	r0, r7, r7, asr r0
        37d468:	00700057 	rsbeqs	r0, r0, r7, asr r0
        37d46c:	00000000 	andeq	r0, r0, r0
        37d470:	00740072 	rsbeqs	r0, r4, r2, ror r0
        37d474:	00000073 	andeq	r0, r0, r3, ror r0
        37d478:	007d0075 	rsbeqs	r0, sp, r5, ror r0
        37d490:	007b0000 	rsbeqs	r0, fp, r0
        37d494:	006a0000 	rsbeq	r0, sl, r0
        37d498:	006b0000 	rsbeq	r0, fp, r0
        37d4a8:	00700000 	rsbeqs	r0, r0, r0
        37d4ac:	00000000 	andeq	r0, r0, r0
        37d4b0:	00740072 	rsbeqs	r0, r4, r2, ror r0
        37d4b4:	00000073 	andeq	r0, r0, r3, ror r0
        37d4b8:	007d0075 	rsbeqs	r0, sp, r5, ror r0
        37d4bc:	00000000 	andeq	r0, r0, r0
        37d4c0:	00000056 	andeq	r0, r0, r6, asr r0
        37d4cc:	00560000 	subeqs	r0, r6, r0
        37d4d0:	007b007a 	rsbeqs	r0, fp, sl, ror r0
        37d4d4:	006a0000 	rsbeq	r0, sl, r0
        37d4d8:	006b0056 	rsbeq	r0, fp, r6, asr r0
        37d4dc:	00560000 	subeqs	r0, r6, r0
        37d4e0:	00560000 	subeqs	r0, r6, r0
        37d4ec:	00560056 	subeqs	r0, r6, r6, asr r0
        37d4f0:	00000000 	andeq	r0, r0, r0
        37d4f4:	00560056 	subeqs	r0, r6, r6, asr r0
        37d4f8:	00700056 	rsbeqs	r0, r0, r6, asr r0
        37d4fc:	00000000 	andeq	r0, r0, r0
        37d500:	00740072 	rsbeqs	r0, r4, r2, ror r0
        37d504:	00000073 	andeq	r0, r0, r3, ror r0
        37d508:	007d0075 	rsbeqs	r0, sp, r5, ror r0
        37d50c:	00000000 	andeq	r0, r0, r0
        37d510:	0000007a 	andeq	r0, r0, sl, ror r0
        37d520:	007b0000 	rsbeqs	r0, fp, r0
        37d524:	006a0000 	rsbeq	r0, sl, r0
        37d528:	006b0000 	rsbeq	r0, fp, r0
        37d52c:	00700000 	rsbeqs	r0, r0, r0
        37d530:	00000000 	andeq	r0, r0, r0
        37d534:	00740072 	rsbeqs	r0, r4, r2, ror r0
        37d538:	00000073 	andeq	r0, r0, r3, ror r0
        37d53c:	007d0075 	rsbeqs	r0, sp, r5, ror r0
        37d554:	007b0000 	rsbeqs	r0, fp, r0
        37d558:	006a0000 	rsbeq	r0, sl, r0
        37d55c:	006b0000 	rsbeq	r0, fp, r0
        37d560:	0000007a 	andeq	r0, r0, sl, ror r0
        37d56c:	0070011f 	rsbeqs	r0, r0, pc, lsl r1
        37d570:	000000a4 	andeq	r0, r0, r4, lsr #1
        37d574:	00740072 	rsbeqs	r0, r4, r2, ror r0
        37d578:	00000073 	andeq	r0, r0, r3, ror r0
        37d57c:	007d0075 	rsbeqs	r0, sp, r5, ror r0
        37d594:	007b007a 	rsbeqs	r0, fp, sl, ror r0
        37d598:	006a0000 	rsbeq	r0, sl, r0
        37d59c:	006b0000 	rsbeq	r0, fp, r0
        37d5a0:	00000120 	andeq	r0, r0, r0, lsr #2
        37d5bc:	00680069 	rsbeq	r0, r8, r9, rrx
        37d5c0:	0000006c 	andeq	r0, r0, ip, rrx
        37d5c4:	006d006e 	rsbeq	r0, sp, lr, rrx
        37d5c8:	006f0000 	rsbeq	r0, pc, r0
        37d5cc:	00710076 	rsbeqs	r0, r1, r6, ror r0
        37d5d0:	00770078 	rsbeqs	r0, r7, r8, ror r0
        37d5d4:	0079007a 	rsbeqs	r0, r9, sl, ror r0
        37d5d8:	007c0070 	rsbeqs	r0, ip, r0, ror r0
        37d5dc:	00000000 	andeq	r0, r0, r0
        37d5e0:	00000074 	andeq	r0, r0, r4, ror r0
        37d5e4:	00720000 	rsbeqs	r0, r2, r0
        37d5e8:	0073007d 	rsbeqs	r0, r3, sp, ror r0
        37d5ec:	00750000 	rsbeqs	r0, r5, r0
        37d600:	0000007b 	andeq	r0, r0, fp, ror r0
        37d604:	0070006a 	rsbeqs	r0, r0, sl, rrx
        37d608:	0000006b 	andeq	r0, r0, fp, rrx
        37d60c:	00740072 	rsbeqs	r0, r4, r2, ror r0
        37d610:	00000073 	andeq	r0, r0, r3, ror r0
        37d614:	007d0075 	rsbeqs	r0, sp, r5, ror r0
        37d62c:	007b0000 	rsbeqs	r0, fp, r0
        37d630:	006a0000 	rsbeq	r0, sl, r0
        37d634:	006b0000 	rsbeq	r0, fp, r0
        37d644:	007a0000 	rsbeqs	r0, sl, r0
        37d648:	00f30000 	rsceqs	r0, r3, r0
        37d64c:	00000129 	andeq	r0, r0, r9, lsr #2
        37d650:	00000000 	andeq	r0, r0, r0
        37d654:	0000012a 	andeq	r0, r0, sl, lsr #2
        37d66c:	0000007a 	andeq	r0, r0, sl, ror r0
        37d670:	00680069 	rsbeq	r0, r8, r9, rrx
        37d674:	0000006c 	andeq	r0, r0, ip, rrx
        37d678:	006d006e 	rsbeq	r0, sp, lr, rrx
        37d67c:	006f0000 	rsbeq	r0, pc, r0
        37d680:	00710076 	rsbeqs	r0, r1, r6, ror r0
        37d684:	00770078 	rsbeqs	r0, r7, r8, ror r0
        37d688:	00790000 	rsbeqs	r0, r9, r0
        37d68c:	007c0000 	rsbeqs	r0, ip, r0
        37d690:	00000000 	andeq	r0, r0, r0
        37d694:	00000097 	muleq	r0, r7, r0
        37d6b0:	00680069 	rsbeq	r0, r8, r9, rrx
        37d6b4:	0000006c 	andeq	r0, r0, ip, rrx
        37d6b8:	006d006e 	rsbeq	r0, sp, lr, rrx
        37d6bc:	006f0000 	rsbeq	r0, pc, r0
        37d6c0:	00710076 	rsbeqs	r0, r1, r6, ror r0
        37d6c4:	00770078 	rsbeqs	r0, r7, r8, ror r0
        37d6c8:	0079008e 	rsbeqs	r0, r9, lr, lsl #1
        37d6cc:	007c0070 	rsbeqs	r0, ip, r0, ror r0
        37d6d0:	00000000 	andeq	r0, r0, r0
        37d6d4:	00000074 	andeq	r0, r0, r4, ror r0
        37d6d8:	00720000 	rsbeqs	r0, r2, r0
        37d6dc:	0073007d 	rsbeqs	r0, r3, sp, ror r0
        37d6e0:	00750000 	rsbeqs	r0, r5, r0
        37d6f4:	0000007b 	andeq	r0, r0, fp, ror r0
        37d6f8:	0000006a 	andeq	r0, r0, sl, rrx
        37d6fc:	0000006b 	andeq	r0, r0, fp, rrx
        37d700:	00680069 	rsbeq	r0, r8, r9, rrx
        37d704:	0000006c 	andeq	r0, r0, ip, rrx
        37d708:	006d006e 	rsbeq	r0, sp, lr, rrx
        37d70c:	006f0000 	rsbeq	r0, pc, r0
        37d710:	00710076 	rsbeqs	r0, r1, r6, ror r0
        37d714:	00770078 	rsbeqs	r0, r7, r8, ror r0
        37d718:	00790000 	rsbeqs	r0, r9, r0
        37d71c:	007c0099 	ldreqb	r0, [ip], -#9
        37d734:	00680069 	rsbeq	r0, r8, r9, rrx
        37d738:	007a006c 	rsbeqs	r0, sl, ip, rrx
        37d73c:	006d006e 	rsbeq	r0, sp, lr, rrx
        37d740:	006f0000 	rsbeq	r0, pc, r0
        37d744:	00710076 	rsbeqs	r0, r1, r6, ror r0
        37d748:	00770078 	rsbeqs	r0, r7, r8, ror r0
        37d74c:	00790000 	rsbeqs	r0, r9, r0
        37d750:	007c0000 	rsbeqs	r0, ip, r0
        37d75c:	001d001c 	andeqs	r0, sp, ip, lsl r0
        37d768:	00180000 	andeqs	r0, r8, r0
        37d774:	00680069 	rsbeq	r0, r8, r9, rrx
        37d778:	0000006c 	andeq	r0, r0, ip, rrx
        37d77c:	006d006e 	rsbeq	r0, sp, lr, rrx
        37d780:	006f001a 	rsbeq	r0, pc, sl, lsl r0
        37d784:	00710076 	rsbeqs	r0, r1, r6, ror r0
        37d788:	00770078 	rsbeqs	r0, r7, r8, ror r0
        37d78c:	00790000 	rsbeqs	r0, r9, r0
        37d790:	007c0070 	rsbeqs	r0, ip, r0, ror r0
        37d794:	00000000 	andeq	r0, r0, r0
        37d798:	01120074 	tsteq	r2, r4, ror r0
        37d79c:	00720000 	rsbeqs	r0, r2, r0
        37d7a0:	0073007d 	rsbeqs	r0, r3, sp, ror r0
        37d7a4:	00750000 	rsbeqs	r0, r5, r0
        37d7b8:	0000007b 	andeq	r0, r0, fp, ror r0
        37d7bc:	0000006a 	andeq	r0, r0, sl, rrx
        37d7c0:	0000006b 	andeq	r0, r0, fp, rrx
        37d7c4:	00190000 	andeqs	r0, r9, r0
        37d7d8:	00fe0000 	rsceqs	r0, lr, r0
        37d7dc:	00000000 	andeq	r0, r0, r0
        37d7e0:	00000068 	andeq	r0, r0, r8, rrx
        37d7e4:	00690000 	rsbeq	r0, r9, r0
        37d7e8:	006c006d 	rsbeq	r0, ip, sp, rrx
        37d7ec:	006e006f 	rsbeq	r0, lr, pc, rrx
        37d7f0:	00000071 	andeq	r0, r0, r1, ror r0
        37d7f4:	00760077 	rsbeqs	r0, r6, r7, ror r0
        37d7f8:	00780079 	rsbeqs	r0, r8, r9, ror r0
        37d7fc:	007a007c 	rsbeqs	r0, sl, ip, ror r0
        37d800:	00000000 	andeq	r0, r0, r0
        37d804:	001e0000 	andeqs	r0, lr, r0
        37d808:	00000000 	andeq	r0, r0, r0
        37d80c:	00680069 	rsbeq	r0, r8, r9, rrx
        37d810:	0000006c 	andeq	r0, r0, ip, rrx
        37d814:	006d006e 	rsbeq	r0, sp, lr, rrx
        37d818:	006f0000 	rsbeq	r0, pc, r0
        37d81c:	00710076 	rsbeqs	r0, r1, r6, ror r0
        37d820:	00770078 	rsbeqs	r0, r7, r8, ror r0
        37d824:	00790070 	rsbeqs	r0, r9, r0, ror r0
        37d828:	007c0000 	rsbeqs	r0, ip, r0
        37d82c:	00000074 	andeq	r0, r0, r4, ror r0
        37d830:	00720000 	rsbeqs	r0, r2, r0
        37d834:	0073007d 	rsbeqs	r0, r3, sp, ror r0
        37d838:	00750000 	rsbeqs	r0, r5, r0
        37d84c:	0000007b 	andeq	r0, r0, fp, ror r0
        37d850:	0070006a 	rsbeqs	r0, r0, sl, rrx
        37d854:	0000006b 	andeq	r0, r0, fp, rrx
        37d858:	00740072 	rsbeqs	r0, r4, r2, ror r0
        37d85c:	00000073 	andeq	r0, r0, r3, ror r0
        37d860:	007d0075 	rsbeqs	r0, sp, r5, ror r0
        37d878:	007b0070 	rsbeqs	r0, fp, r0, ror r0
        37d87c:	006a0000 	rsbeq	r0, sl, r0
        37d880:	006b0074 	rsbeq	r0, fp, r4, ror r0
        37d884:	00720000 	rsbeqs	r0, r2, r0
        37d888:	0073007d 	rsbeqs	r0, r3, sp, ror r0
        37d88c:	00750000 	rsbeqs	r0, r5, r0
        37d890:	007a0000 	rsbeqs	r0, sl, r0
        37d8a0:	0000007b 	andeq	r0, r0, fp, ror r0
        37d8a4:	0000006a 	andeq	r0, r0, sl, rrx
        37d8a8:	0000006b 	andeq	r0, r0, fp, rrx
        37d8ac:	00000000 	andeq	r0, r0, r0
        37d8b0:	00000102 	andeq	r0, r0, r2, lsl #2
        37d8b4:	00000000 	andeq	r0, r0, r0
        37d8b8:	0000007a 	andeq	r0, r0, sl, ror r0
        37d8d4:	00000068 	andeq	r0, r0, r8, rrx
        37d8d8:	00690000 	rsbeq	r0, r9, r0
        37d8dc:	006c006d 	rsbeq	r0, ip, sp, rrx
        37d8e0:	006e006f 	rsbeq	r0, lr, pc, rrx
        37d8e4:	007a0071 	rsbeqs	r0, sl, r1, ror r0
        37d8e8:	00760077 	rsbeqs	r0, r6, r7, ror r0
        37d8ec:	00780079 	rsbeqs	r0, r8, r9, ror r0
        37d8f0:	0000007c 	andeq	r0, r0, ip, ror r0
        37d900:	001d001c 	andeqs	r0, sp, ip, lsl r0
        37d90c:	00180000 	andeqs	r0, r8, r0
        37d910:	00000001 	andeq	r0, r0, r1
        37d914:	00020003 	andeq	r0, r2, r3
        37d918:	00040005 	andeq	r0, r4, r5
        37d91c:	00060000 	andeq	r0, r6, r0
        37d920:	00070000 	andeq	r0, r7, r0
        37d924:	0008001a 	andeq	r0, r8, sl, lsl r0
        37d928:	0009000a 	andeq	r0, r9, sl
        37d92c:	00000000 	andeq	r0, r0, r0
        37d930:	000b0000 	andeq	r0, fp, r0
        37d934:	00000000 	andeq	r0, r0, r0
        37d938:	000c000d 	andeq	r0, ip, sp
        37d93c:	000e0000 	andeq	r0, lr, r0
        37d940:	0000000f 	andeq	r0, r0, pc
        37d944:	00100000 	andeqs	r0, r0, r0
        37d948:	00000011 	andeq	r0, r0, r1, lsl r0
        37d94c:	00000000 	andeq	r0, r0, r0
        37d950:	00120000 	andeqs	r0, r2, r0
        37d954:	00000013 	andeq	r0, r0, r3, lsl r0
        37d958:	00140015 	andeqs	r0, r4, r5, lsl r0
        37d95c:	00160000 	andeqs	r0, r6, r0
        37d960:	001d001c 	andeqs	r0, sp, ip, lsl r0
        37d964:	00000017 	andeq	r0, r0, r7, lsl r0
        37d968:	00190000 	andeqs	r0, r9, r0
        37d96c:	00180000 	andeqs	r0, r8, r0
        37d97c:	0000001b 	andeq	r0, r0, fp, lsl r0
        37d980:	00000000 	andeq	r0, r0, r0
        37d984:	0000001a 	andeq	r0, r0, sl, lsl r0
        37d998:	00000068 	andeq	r0, r0, r8, rrx
        37d99c:	00690000 	rsbeq	r0, r9, r0
        37d9a0:	006c006d 	rsbeq	r0, ip, sp, rrx
        37d9a4:	006e006f 	rsbeq	r0, lr, pc, rrx
        37d9a8:	001e0071 	andeqs	r0, lr, r1, ror r0
        37d9ac:	00760077 	rsbeqs	r0, r6, r7, ror r0
        37d9b0:	00780079 	rsbeqs	r0, r8, r9, ror r0
        37d9b4:	0000007c 	andeq	r0, r0, ip, ror r0
        37d9c8:	00190000 	andeqs	r0, r9, r0
        37da08:	001e0000 	andeqs	r0, lr, r0
        37da14:	01310000 	teqeq	r1, r0
        37da2c:	00000068 	andeq	r0, r0, r8, rrx
        37da30:	00690000 	rsbeq	r0, r9, r0
        37da34:	006c006d 	rsbeq	r0, ip, sp, rrx
        37da38:	006e006f 	rsbeq	r0, lr, pc, rrx
        37da3c:	00000071 	andeq	r0, r0, r1, ror r0
        37da40:	00760077 	rsbeqs	r0, r6, r7, ror r0
        37da44:	00780079 	rsbeqs	r0, r8, r9, ror r0
        37da48:	0000007c 	andeq	r0, r0, ip, ror r0
        37da58:	00680069 	rsbeq	r0, r8, r9, rrx
        37da5c:	0000006c 	andeq	r0, r0, ip, rrx
        37da60:	006d006e 	rsbeq	r0, sp, lr, rrx
        37da64:	006f0000 	rsbeq	r0, pc, r0
        37da68:	00710076 	rsbeqs	r0, r1, r6, ror r0
        37da6c:	00770078 	rsbeqs	r0, r7, r8, ror r0
        37da70:	00790000 	rsbeqs	r0, r9, r0
        37da74:	007c0000 	rsbeqs	r0, ip, r0
        37da88:	006c006d 	rsbeq	r0, ip, sp, rrx
        37da8c:	006e006f 	rsbeq	r0, lr, pc, rrx
        37da90:	00000071 	andeq	r0, r0, r1, ror r0
        37da94:	00760077 	rsbeqs	r0, r6, r7, ror r0
        37da98:	00780079 	rsbeqs	r0, r8, r9, ror r0
        37da9c:	0000007c 	andeq	r0, r0, ip, ror r0
        37dab4:	00000001 	andeq	r0, r0, r1
        37dab8:	00020003 	andeq	r0, r2, r3
        37dabc:	00040005 	andeq	r0, r4, r5
        37dac0:	00060000 	andeq	r0, r6, r0
        37dac4:	00390000 	eoreqs	r0, r9, r0
        37dac8:	00000000 	andeq	r0, r0, r0
        37dacc:	0009000a 	andeq	r0, r9, sl
        37dad0:	00000000 	andeq	r0, r0, r0
        37dad4:	000b0000 	andeq	r0, fp, r0
        37dad8:	00000000 	andeq	r0, r0, r0
        37dadc:	000c000d 	andeq	r0, ip, sp
        37dae0:	000e0000 	andeq	r0, lr, r0
        37dae4:	0000000f 	andeq	r0, r0, pc
        37dae8:	00100000 	andeqs	r0, r0, r0
        37daec:	00000011 	andeq	r0, r0, r1, lsl r0
        37daf0:	00000000 	andeq	r0, r0, r0
        37daf4:	00120000 	andeqs	r0, r2, r0
        37daf8:	00000013 	andeq	r0, r0, r3, lsl r0
        37dafc:	00140015 	andeqs	r0, r4, r5, lsl r0
        37db00:	00160000 	andeqs	r0, r6, r0
        37db04:	00000000 	andeq	r0, r0, r0
        37db08:	00000017 	andeq	r0, r0, r7, lsl r0
        37db14:	00000001 	andeq	r0, r0, r1
        37db18:	00530003 	subeqs	r0, r3, r3
        37db1c:	00040005 	andeq	r0, r4, r5
        37db20:	0006001b 	andeq	r0, r6, fp, lsl r0
        37db24:	00390000 	eoreqs	r0, r9, r0
        37db28:	00000000 	andeq	r0, r0, r0
        37db2c:	0009000a 	andeq	r0, r9, sl
        37db30:	00000000 	andeq	r0, r0, r0
        37db34:	000b0000 	andeq	r0, fp, r0
        37db38:	00000000 	andeq	r0, r0, r0
        37db3c:	000c000d 	andeq	r0, ip, sp
        37db40:	000e0000 	andeq	r0, lr, r0
        37db44:	0000000f 	andeq	r0, r0, pc
        37db48:	00100000 	andeqs	r0, r0, r0
        37db4c:	00000011 	andeq	r0, r0, r1, lsl r0
        37db50:	00000000 	andeq	r0, r0, r0
        37db54:	00120000 	andeqs	r0, r2, r0
        37db58:	00000013 	andeq	r0, r0, r3, lsl r0
        37db5c:	00140015 	andeqs	r0, r4, r5, lsl r0
        37db60:	00160000 	andeqs	r0, r6, r0
        37db64:	00000000 	andeq	r0, r0, r0
        37db68:	00000017 	andeq	r0, r0, r7, lsl r0
        37db80:	0000001b 	andeq	r0, r0, fp, lsl r0
    */
}

/**
 * Symbol: yycheck
 * Address: 0037db84
 */
void globals::yycheck() {
    /*
        37db84:	00280000 	eoreq	r0, r8, r0
        37db88:	0028002c 	eoreq	r0, r8, ip, lsr #32
        37db8c:	002e003a 	eoreq	r0, lr, sl, lsr r0
        37db90:	00280028 	eoreq	r0, r8, r8, lsr #32
        37db94:	003b002b 	eoreqs	r0, fp, fp, lsr #32
        37db98:	002b002e 	eoreq	r0, fp, lr, lsr #32
        37db9c:	001d003b 	andeqs	r0, sp, fp, lsr r0
        37dba0:	003b003b 	eoreqs	r0, fp, fp, lsr r0
        37dba4:	003a0000 	eoreqs	r0, sl, r0
        37dba8:	00000000 	andeq	r0, r0, r0
        37dbac:	00290027 	eoreq	r0, r9, r7, lsr #32
        37dbb0:	002c003a 	eoreq	r0, ip, sl, lsr r0
        37dbb4:	002c0028 	eoreq	r0, ip, r8, lsr #32
        37dbb8:	00000000 	andeq	r0, r0, r0
        37dbbc:	01030103 	tsteq	r3, r3, lsl #2
        37dbc0:	003b003b 	eoreqs	r0, fp, fp, lsr r0
        37dbc4:	003b0028 	eoreqs	r0, fp, r8, lsr #32
        37dbc8:	01030029 	tsteq	r3, r9, lsr #32
        37dbcc:	003b0029 	eoreqs	r0, fp, r9, lsr #32
        37dbd0:	002c0026 	eoreq	r0, ip, r6, lsr #32
        37dbd4:	002c0103 	eoreq	r0, ip, r3, lsl #2
        37dbd8:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37dbdc:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37dbe0:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37dbe4:	002f005b 	eoreq	r0, pc, fp, asr r0
        37dbe8:	0129003a 	teqeq	r9, sl, lsr r0
        37dbec:	000b0104 	andeq	r0, fp, r4, lsl #2
        37dbf0:	01050000 	tsteq	r5, r0
        37dbf4:	005b0010 	subeqs	r0, fp, r0, lsl r0
        37dbf8:	0131003a 	teqeq	r1, sl, lsr r0
        37dbfc:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37dc00:	0029003e 	eoreq	r0, r9, lr, lsr r0
        37dc04:	0103002c 	tsteq	r3, ip, lsr #32
        37dc08:	0129002c 	teqeq	r9, ip, lsr #32
        37dc0c:	0103002e 	tsteq	r3, lr, lsr #32
        37dc10:	00290103 	eoreq	r0, r9, r3, lsl #2
        37dc14:	005d002c 	subeqs	r0, sp, ip, lsr #32
        37dc18:	01030103 	tsteq	r3, r3, lsl #2
        37dc1c:	003b003b 	eoreqs	r0, fp, fp, lsr r0
        37dc20:	003b002a 	eoreqs	r0, fp, sl, lsr #32
        37dc24:	002b003b 	eoreq	r0, fp, fp, lsr r0
        37dc28:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37dc2c:	002f003b 	eoreq	r0, pc, fp, lsr r0
        37dc30:	003b005d 	eoreqs	r0, fp, sp, asr r0
        37dc34:	0131005d 	teqeq	r1, sp, asr r0
        37dc38:	00280028 	eoreq	r0, r8, r8, lsr #32
        37dc3c:	005b0026 	subeqs	r0, fp, r6, lsr #32
        37dc40:	005d003a 	subeqs	r0, sp, sl, lsr r0
        37dc44:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37dc48:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37dc4c:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37dc50:	002f007d 	eoreq	r0, pc, sp, ror r0
        37dc54:	0028007d 	eoreq	r0, r8, sp, ror r0
        37dc58:	01030129 	tsteq	r3, r9, lsr #2
        37dc5c:	01290000 	teqeq	r9, r0
        37dc60:	002c002c 	eoreq	r0, ip, ip, lsr #32
        37dc64:	0103003a 	tsteq	r3, sl, lsr r0
        37dc68:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37dc6c:	005d003e 	subeqs	r0, sp, lr, lsr r0
        37dc70:	00840085 	addeq	r0, r4, r5, lsl #1
        37dc74:	00860103 	addeq	r0, r6, r3, lsl #2
        37dc78:	002c005d 	eoreq	r0, ip, sp, asr r0
        37dc7c:	0028008b 	eoreq	r0, r8, fp, lsl #1
        37dc80:	007d0028 	rsbeqs	r0, sp, r8, lsr #32
        37dc84:	005b0026 	subeqs	r0, fp, r6, lsr #32
        37dc88:	0103002e 	tsteq	r3, lr, lsr #32
        37dc8c:	003a002a 	eoreqs	r0, sl, sl, lsr #32
        37dc90:	002b007d 	eoreq	r0, fp, sp, ror r0
        37dc94:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37dc98:	002f002c 	eoreq	r0, pc, ip, lsr #32
        37dc9c:	01030103 	tsteq	r3, r3, lsl #2
        37dca0:	00290103 	eoreq	r0, r9, r3, lsl #2
        37dca4:	00290103 	eoreq	r0, r9, r3, lsl #2
        37dca8:	005b0026 	subeqs	r0, fp, r6, lsr #32
        37dcac:	005d003a 	subeqs	r0, sp, sl, lsr r0
        37dcb0:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37dcb4:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37dcb8:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37dcbc:	002f002c 	eoreq	r0, pc, ip, lsr #32
        37dcc0:	01030112 	tsteq	r3, r2, lsl r1
        37dcc4:	01290103 	teqeq	r9, r3, lsl #2
        37dcc8:	00280103 	eoreq	r0, r8, r3, lsl #2
        37dccc:	01220000 	teqeq	r2, r0
        37dcd0:	0028003a 	eoreq	r0, r8, sl, lsr r0
        37dcd4:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37dcd8:	0028003e 	eoreq	r0, r8, lr, lsr r0
        37dcdc:	003a005d 	eoreqs	r0, sl, sp, asr r0
        37dce0:	003a002c 	eoreqs	r0, sl, ip, lsr #32
        37dce4:	002c007d 	eoreq	r0, ip, sp, ror r0
        37dce8:	01030103 	tsteq	r3, r3, lsl #2
        37dcec:	007d0028 	rsbeqs	r0, sp, r8, lsr #32
        37dcf0:	005b0028 	subeqs	r0, fp, r8, lsr #32
        37dcf4:	01030029 	tsteq	r3, r9, lsr #32
        37dcf8:	00290129 	eoreq	r0, r9, r9, lsr #2
        37dcfc:	002a0029 	eoreq	r0, sl, r9, lsr #32
        37dd00:	0029011d 	eoreq	r0, r9, sp, lsl r1
        37dd04:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37dd08:	0129005d 	qsubeq	r0, sp, r9
        37dd0c:	01230029 	teqeq	r3, r9, lsr #32
        37dd10:	00290103 	eoreq	r0, r9, r3, lsl #2
        37dd14:	005b0103 	subeqs	r0, fp, r3, lsl #2
        37dd18:	005d0026 	subeqs	r0, sp, r6, lsr #32
        37dd1c:	003a003a 	eoreqs	r0, sl, sl, lsr r0
        37dd20:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37dd24:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37dd28:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37dd2c:	002f0108 	eoreq	r0, pc, r8, lsl #2
        37dd30:	00290029 	eoreq	r0, r9, r9, lsr #32
        37dd34:	0122002d 	teqeq	r2, sp, lsr #32
        37dd38:	00eb00ec 	rsceq	r0, fp, ip, ror #1
        37dd3c:	01080103 	tsteq	r8, r3, lsl #2
        37dd40:	0029003a 	eoreq	r0, r9, sl, lsr r0
        37dd44:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37dd48:	0103003e 	tsteq	r3, lr, lsr r0
        37dd4c:	005d003a 	subeqs	r0, sp, sl, lsr r0
        37dd50:	00000029 	andeq	r0, r0, r9, lsr #32
        37dd54:	010a010a 	tsteq	sl, sl, lsl #2
        37dd58:	007d0108 	rsbeqs	r0, sp, r8, lsl #2
        37dd5c:	0029005b 	eoreq	r0, r9, fp, asr r0
        37dd60:	011c011c 	tsteq	ip, ip, lsl r1
        37dd64:	01020108 	tsteq	r2, r8, lsl #2
        37dd68:	01040105 	tsteq	r4, r5, lsl #2
        37dd6c:	01060112 	tsteq	r6, r2, lsl r1
        37dd70:	01120112 	tsteq	r2, r2, lsl r1
        37dd74:	0000007d 	andeq	r0, r0, sp, ror r0
        37dd78:	01230112 	teqeq	r3, r2, lsl r1
        37dd7c:	005d0000 	subeqs	r0, sp, r0
        37dd80:	0029011c 	eoreq	r0, r9, ip, lsl r1
        37dd84:	005b0129 	subeqs	r0, fp, r9, lsr #2
        37dd88:	005d0138 	subeqs	r0, sp, r8, lsr r1
        37dd8c:	0103011c 	tsteq	r3, ip, lsl r1
        37dd90:	0029005b 	eoreq	r0, r9, fp, asr r0
        37dd94:	01220108 	teqeq	r2, r8, lsl #2
        37dd98:	01310135 	teqeq	r1, r5, lsr r1
        37dd9c:	0136005d 	teqeq	r6, sp, asr r0
        37dda0:	01380029 	teqeq	r8, r9, lsr #32
        37dda4:	010f0110 	tsteq	pc, r0, lsl r1
        37dda8:	002c0112 	eoreq	r0, ip, r2, lsl r1
        37ddac:	01250138 	teqeq	r5, r8, lsr r1
        37ddb0:	007d007d 	rsbeqs	r0, sp, sp, ror r0
        37ddb4:	00290118 	eoreq	r0, r9, r8, lsl r1
        37ddb8:	0119007d 	tsteq	r9, sp, ror r0
        37ddbc:	0000011c 	andeq	r0, r0, ip, lsl r1
        37ddc0:	011d005d 	tsteq	sp, sp, asr r0
        37ddc4:	011f003b 	tsteq	pc, fp, lsr r0
        37ddc8:	007d00fd 	ldreqsh	r0, [sp], -#13
        37ddcc:	002d0131 	eoreq	r0, sp, r1, lsr r1
        37ddd0:	012b007b 	teqeq	fp, fp, ror r0
        37ddd4:	00b20091 	umlaleqs	r0, r2, r1, r0
        37ddd8:	0129012a 	teqeq	r9, sl, lsr #2
        37dddc:	012b00e1 	smulwteq	fp, r1, r0
        37dde0:	012d012e 	teqeq	sp, lr, lsr #2
        37dde4:	012f0130 	teqeq	pc, r0, lsr r1
        37dde8:	01310132 	teqeq	r1, r2, lsr r1
        37ddec:	01330134 	teqeq	r3, r4, lsr r1
        37ddf0:	01350136 	teqeq	r5, r6, lsr r1
        37ddf4:	00e90138 	rsceq	r0, r9, r8, lsr r1
        37ddf8:	0103ffff 	streqd	pc, [r3, -pc]
        37ddfc:	ffffffff 	swinv	0x00ffffff
        37de00:	ffff0108 	swinv	0x00ff0108
        37de04:	ffffffff 	swinv	0x00ffffff
        37de08:	ffff005d 	swinv	0x00ff005d
        37de0c:	ffff0029 	swinv	0x00ff0029
        37de10:	010f0110 	tsteq	pc, r0, lsl r1
        37de14:	002c0112 	eoreq	r0, ip, r2, lsl r1
        37de18:	ffffffff 	swinv	0x00ffffff
        37de1c:	ffffffff 	swinv	0x00ffffff
        37de20:	ffff0118 	swinv	0x00ff0118
        37de24:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37de28:	005b011c 	subeqs	r0, fp, ip, lsl r1
        37de2c:	011dffff 	ldreqsh	pc, [sp, -pc]
        37de30:	011f003b 	tsteq	pc, fp, lsr r0
        37de34:	01330134 	teqeq	r3, r4, lsr r1
        37de38:	01350136 	teqeq	r5, r6, lsr r1
        37de3c:	ffff0138 	swinv	0x00ff0138
        37de40:	ffffffff 	swinv	0x00ffffff
        37de44:	ffff012a 	swinv	0x00ff012a
        37de48:	012b007d 	teqeq	fp, sp, ror r0
        37de4c:	012d012e 	teqeq	sp, lr, lsr #2
        37de50:	012f0130 	teqeq	pc, r0, lsr r1
        37de54:	ffff0132 	swinv	0x00ff0132
        37de58:	01330134 	teqeq	r3, r4, lsr r1
        37de5c:	01350136 	teqeq	r5, r6, lsr r1
        37de60:	ffff0138 	swinv	0x00ff0138
        37de64:	0103ffff 	streqd	pc, [r3, -pc]
        37de68:	007bffff 	ldreqsh	pc, [fp], -#255
        37de6c:	ffff0108 	swinv	0x00ff0108
        37de70:	ffffffff 	swinv	0x00ffffff
        37de74:	ffff005d 	swinv	0x00ff005d
        37de78:	ffffffff 	swinv	0x00ffffff
        37de7c:	010f0110 	tsteq	pc, r0, lsl r1
        37de80:	ffff0112 	swinv	0x00ff0112
        37de84:	ffffffff 	swinv	0x00ffffff
        37de88:	ffffffff 	swinv	0x00ffffff
        37de8c:	ffff0118 	swinv	0x00ff0118
        37de90:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37de94:	ffff011c 	swinv	0x00ff011c
        37de98:	011dffff 	ldreqsh	pc, [sp, -pc]
        37de9c:	011f0132 	tsteq	pc, r2, lsr r1
        37dea0:	01330134 	teqeq	r3, r4, lsr r1
        37dea4:	01350136 	teqeq	r5, r6, lsr r1
        37dea8:	ffff0138 	swinv	0x00ff0138
        37deac:	ffffffff 	swinv	0x00ffffff
        37deb0:	ffff012a 	swinv	0x00ff012a
        37deb4:	012b007d 	teqeq	fp, sp, ror r0
        37deb8:	012d012e 	teqeq	sp, lr, lsr #2
        37debc:	012f0130 	teqeq	pc, r0, lsr r1
        37dec0:	ffff0132 	swinv	0x00ff0132
        37dec4:	01330134 	teqeq	r3, r4, lsr r1
        37dec8:	01350136 	teqeq	r5, r6, lsr r1
        37decc:	ffff0138 	swinv	0x00ff0138
        37ded0:	ffffffff 	swinv	0x00ffffff
        37ded4:	0103ffff 	streqd	pc, [r3, -pc]
        37ded8:	ffffffff 	swinv	0x00ffffff
        37dedc:	ffff0108 	swinv	0x00ff0108
        37dee0:	01020103 	tsteq	r2, r3, lsl #2
        37dee4:	01040105 	tsteq	r4, r5, lsl #2
        37dee8:	0106ffff 	streqd	pc, [r6, -pc]
        37deec:	010f0110 	tsteq	pc, r0, lsl r1
        37def0:	00000112 	andeq	r0, r0, r2, lsl r1
        37def4:	ffffffff 	swinv	0x00ffffff
        37def8:	ffffffff 	swinv	0x00ffffff
        37defc:	ffff0118 	swinv	0x00ff0118
        37df00:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37df04:	ffff011c 	swinv	0x00ff011c
        37df08:	011dffff 	ldreqsh	pc, [sp, -pc]
        37df0c:	011f0133 	tsteq	pc, r3, lsr r1
        37df10:	01340135 	teqeq	r4, r5, lsr r1
        37df14:	0136ffff 	ldreqsh	pc, [r6, -pc]!
        37df18:	0138ffff 	ldreqsh	pc, [r8, -pc]!
        37df1c:	ffffffff 	swinv	0x00ffffff
        37df20:	ffff012a 	swinv	0x00ff012a
        37df24:	012bffff 	streqd	pc, [fp, -pc]!
        37df28:	012d012e 	teqeq	sp, lr, lsr #2
        37df2c:	012f0130 	teqeq	pc, r0, lsr r1
        37df30:	00380132 	eoreqs	r0, r8, r2, lsr r1
        37df34:	01330134 	teqeq	r3, r4, lsr r1
        37df38:	01350136 	teqeq	r5, r6, lsr r1
        37df3c:	00260138 	eoreq	r0, r6, r8, lsr r1
        37df40:	ffff0029 	swinv	0x00ff0029
        37df44:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37df48:	ffff002d 	swinv	0x00ff002d
        37df4c:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37df50:	ffffffff 	swinv	0x00ffffff
        37df54:	ffff0103 	swinv	0x00ff0103
        37df58:	ffffffff 	swinv	0x00ffffff
        37df5c:	0000ffff 	streqd	pc, [r0], -pc
        37df60:	0108ffff 	streqd	pc, [r8, -pc]
        37df64:	003a003b 	eoreqs	r0, sl, fp, lsr r0
        37df68:	003cffff 	ldreqsh	pc, [ip], -pc
        37df6c:	003e010f 	eoreqs	r0, lr, pc, lsl #2
        37df70:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37df74:	01120102 	tsteq	r2, r2, lsl #2
        37df78:	01030104 	tsteq	r3, r4, lsl #2
        37df7c:	01050106 	tsteq	r5, r6, lsl #2
        37df80:	01180119 	tsteq	r8, r9, lsl r1
        37df84:	ffffffff 	swinv	0x00ffffff
        37df88:	011c011d 	tsteq	ip, sp, lsl r1
        37df8c:	ffff011f 	swinv	0x00ff011f
        37df90:	ffffffff 	swinv	0x00ffffff
        37df94:	ffffffff 	swinv	0x00ffffff
        37df98:	ffffffff 	swinv	0x00ffffff
        37df9c:	ffffffff 	swinv	0x00ffffff
        37dfa0:	ffffffff 	swinv	0x00ffffff
        37dfa4:	ffff005b 	swinv	0x00ff005b
        37dfa8:	0026005d 	eoreq	r0, r6, sp, asr r0
        37dfac:	ffff0029 	swinv	0x00ff0029
        37dfb0:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37dfb4:	002c002d 	eoreq	r0, ip, sp, lsr #32
        37dfb8:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37dfbc:	ffffffff 	swinv	0x00ffffff
        37dfc0:	ffff0103 	swinv	0x00ff0103
        37dfc4:	ffffffff 	swinv	0x00ffffff
        37dfc8:	0000ffff 	streqd	pc, [r0], -pc
        37dfcc:	0108ffff 	streqd	pc, [r8, -pc]
        37dfd0:	003a003b 	eoreqs	r0, sl, fp, lsr r0
        37dfd4:	003cffff 	ldreqsh	pc, [ip], -pc
        37dfd8:	003e010f 	eoreqs	r0, lr, pc, lsl #2
        37dfdc:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37dfe0:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37dfe4:	ffffffff 	swinv	0x00ffffff
        37dfe8:	ffff007d 	swinv	0x00ff007d
        37dfec:	01180119 	tsteq	r8, r9, lsl r1
        37dff0:	ffffffff 	swinv	0x00ffffff
        37dff4:	011c011d 	tsteq	ip, sp, lsl r1
        37dff8:	ffff011f 	swinv	0x00ff011f
        37dffc:	ffff009f 	swinv	0x00ff009f
        37e000:	ffffffff 	swinv	0x00ffffff
        37e004:	00a200a3 	adceq	r0, r2, r3, lsr #1
        37e008:	ffffffff 	swinv	0x00ffffff
        37e00c:	ffffffff 	swinv	0x00ffffff
        37e010:	ffff005b 	swinv	0x00ff005b
        37e014:	0026005d 	eoreq	r0, r6, sp, asr r0
        37e018:	ffff0029 	swinv	0x00ff0029
        37e01c:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37e020:	ffff002d 	swinv	0x00ff002d
        37e024:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37e028:	ffffffff 	swinv	0x00ffffff
        37e02c:	ffffffff 	swinv	0x00ffffff
        37e030:	ffffffff 	swinv	0x00ffffff
        37e034:	ffffffff 	swinv	0x00ffffff
        37e038:	0000ffff 	streqd	pc, [r0], -pc
        37e03c:	003a003b 	eoreqs	r0, sl, fp, lsr r0
        37e040:	003cffff 	ldreqsh	pc, [ip], -pc
        37e044:	003effff 	ldreqsh	pc, [lr], -pc
        37e048:	ffffffff 	swinv	0x00ffffff
        37e04c:	ffffffff 	swinv	0x00ffffff
        37e050:	ffffffff 	swinv	0x00ffffff
        37e054:	ffff007d 	swinv	0x00ff007d
        37e058:	ffffffff 	swinv	0x00ffffff
        37e05c:	ffffffff 	swinv	0x00ffffff
        37e060:	ffffffff 	swinv	0x00ffffff
        37e064:	ffffffff 	swinv	0x00ffffff
        37e068:	ffffffff 	swinv	0x00ffffff
        37e06c:	ffffffff 	swinv	0x00ffffff
        37e070:	ffffffff 	swinv	0x00ffffff
        37e074:	ffffffff 	swinv	0x00ffffff
        37e078:	ffffffff 	swinv	0x00ffffff
        37e07c:	ffff005b 	swinv	0x00ff005b
        37e080:	00e0005d 	rsceq	r0, r0, sp, asr r0
        37e084:	002600e3 	eoreq	r0, r6, r3, ror #1
        37e088:	00e40029 	rsceq	r0, r4, r9, lsr #32
        37e08c:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37e090:	002c002d 	eoreq	r0, ip, sp, lsr #32
        37e094:	ffff002f 	swinv	0x00ff002f
        37e098:	ffffffff 	swinv	0x00ffffff
        37e09c:	ffffffff 	swinv	0x00ffffff
        37e0a0:	ffffffff 	swinv	0x00ffffff
        37e0a4:	ffffffff 	swinv	0x00ffffff
        37e0a8:	00f400f5 	ldreqsh	r0, [r4], #5
        37e0ac:	003a003b 	eoreqs	r0, sl, fp, lsr r0
        37e0b0:	003cffff 	ldreqsh	pc, [ip], -pc
        37e0b4:	003effff 	ldreqsh	pc, [lr], -pc
        37e0b8:	ffff0000 	swinv	0x00ff0000
        37e0bc:	ffffffff 	swinv	0x00ffffff
        37e0c0:	ffff007d 	swinv	0x00ff007d
        37e0c4:	ffffffff 	swinv	0x00ffffff
        37e0c8:	ffffffff 	swinv	0x00ffffff
        37e0cc:	ffffffff 	swinv	0x00ffffff
        37e0d0:	ffffffff 	swinv	0x00ffffff
        37e0d4:	ffffffff 	swinv	0x00ffffff
        37e0d8:	ffffffff 	swinv	0x00ffffff
        37e0dc:	ffffffff 	swinv	0x00ffffff
        37e0e0:	ffffffff 	swinv	0x00ffffff
        37e0e4:	ffffffff 	swinv	0x00ffffff
        37e0e8:	ffffffff 	swinv	0x00ffffff
        37e0ec:	ffff005b 	swinv	0x00ff005b
        37e0f0:	ffff005d 	swinv	0x00ff005d
        37e0f4:	ffff0103 	swinv	0x00ff0103
        37e0f8:	ffffffff 	swinv	0x00ffffff
        37e0fc:	ffffffff 	swinv	0x00ffffff
        37e100:	0108ffff 	streqd	pc, [r8, -pc]
        37e104:	ffffffff 	swinv	0x00ffffff
        37e108:	ffffffff 	swinv	0x00ffffff
        37e10c:	0029010f 	eoreq	r0, r9, pc, lsl #2
        37e110:	0110002c 	tsteq	r0, ip, lsr #32
        37e114:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37e118:	ffffffff 	swinv	0x00ffffff
        37e11c:	ffffffff 	swinv	0x00ffffff
        37e120:	01180119 	tsteq	r8, r9, lsl r1
        37e124:	ffff0000 	swinv	0x00ff0000
        37e128:	011c011d 	tsteq	ip, sp, lsl r1
        37e12c:	ffff011f 	swinv	0x00ff011f
        37e130:	003b007d 	eoreqs	r0, fp, sp, ror r0
        37e134:	ffffffff 	swinv	0x00ffffff
        37e138:	ffffffff 	swinv	0x00ffffff
        37e13c:	ffffffff 	swinv	0x00ffffff
        37e140:	ffffffff 	swinv	0x00ffffff
        37e144:	012a012b 	teqeq	sl, fp, lsr #2
        37e148:	ffff012d 	swinv	0x00ff012d
        37e14c:	012e012f 	teqeq	lr, pc, lsr #2
        37e150:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37e154:	01320133 	teqeq	r2, r3, lsr r1
        37e158:	01340135 	teqeq	r4, r5, lsr r1
        37e15c:	0136ffff 	ldreqsh	pc, [r6, -pc]!
        37e160:	0138ffff 	ldreqsh	pc, [r8, -pc]!
        37e164:	ffffffff 	swinv	0x00ffffff
        37e168:	ffffffff 	swinv	0x00ffffff
        37e16c:	0108ffff 	streqd	pc, [r8, -pc]
        37e170:	ffffffff 	swinv	0x00ffffff
        37e174:	005dffff 	ldreqsh	pc, [sp], -#255
        37e178:	0029010f 	eoreq	r0, r9, pc, lsl #2
        37e17c:	0110002c 	tsteq	r0, ip, lsr #32
        37e180:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37e184:	ffffffff 	swinv	0x00ffffff
        37e188:	ffffffff 	swinv	0x00ffffff
        37e18c:	01180119 	tsteq	r8, r9, lsl r1
        37e190:	ffffffff 	swinv	0x00ffffff
        37e194:	011c011d 	tsteq	ip, sp, lsl r1
        37e198:	ffff011f 	swinv	0x00ff011f
        37e19c:	003bffff 	ldreqsh	pc, [fp], -pc
        37e1a0:	ffffffff 	swinv	0x00ffffff
        37e1a4:	ffffffff 	swinv	0x00ffffff
        37e1a8:	ffffffff 	swinv	0x00ffffff
        37e1ac:	ffffffff 	swinv	0x00ffffff
        37e1b0:	012a012b 	teqeq	sl, fp, lsr #2
        37e1b4:	007d012d 	rsbeqs	r0, sp, sp, lsr #2
        37e1b8:	012e012f 	teqeq	lr, pc, lsr #2
        37e1bc:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37e1c0:	01320133 	teqeq	r2, r3, lsr r1
        37e1c4:	01340135 	teqeq	r4, r5, lsr r1
        37e1c8:	0136ffff 	ldreqsh	pc, [r6, -pc]!
        37e1cc:	01380103 	teqeq	r8, r3, lsl #2
        37e1d0:	ffffffff 	swinv	0x00ffffff
        37e1d4:	ffffffff 	swinv	0x00ffffff
        37e1d8:	0108ffff 	streqd	pc, [r8, -pc]
        37e1dc:	ffffffff 	swinv	0x00ffffff
        37e1e0:	005dffff 	ldreqsh	pc, [sp], -#255
        37e1e4:	ffff010f 	swinv	0x00ff010f
        37e1e8:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37e1ec:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37e1f0:	ffffffff 	swinv	0x00ffffff
        37e1f4:	ffffffff 	swinv	0x00ffffff
        37e1f8:	01180119 	tsteq	r8, r9, lsl r1
        37e1fc:	ffffffff 	swinv	0x00ffffff
        37e200:	011c011d 	tsteq	ip, sp, lsl r1
        37e204:	ffff011f 	swinv	0x00ff011f
        37e208:	ffffffff 	swinv	0x00ffffff
        37e20c:	ffffffff 	swinv	0x00ffffff
        37e210:	ffffffff 	swinv	0x00ffffff
        37e214:	ffffffff 	swinv	0x00ffffff
        37e218:	ffffffff 	swinv	0x00ffffff
        37e21c:	012a012b 	teqeq	sl, fp, lsr #2
        37e220:	007d012d 	rsbeqs	r0, sp, sp, lsr #2
        37e224:	012e012f 	teqeq	lr, pc, lsr #2
        37e228:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37e22c:	01320133 	teqeq	r2, r3, lsr r1
        37e230:	01340135 	teqeq	r4, r5, lsr r1
        37e234:	0136ffff 	ldreqsh	pc, [r6, -pc]!
        37e238:	0138ffff 	ldreqsh	pc, [r8, -pc]!
        37e23c:	ffff0103 	swinv	0x00ff0103
        37e240:	ffffffff 	swinv	0x00ffffff
        37e244:	ffffffff 	swinv	0x00ffffff
        37e248:	0108ffff 	streqd	pc, [r8, -pc]
        37e24c:	ffffffff 	swinv	0x00ffffff
        37e250:	ffffffff 	swinv	0x00ffffff
        37e254:	ffff010f 	swinv	0x00ff010f
        37e258:	01100000 	tsteq	r0, r0
        37e25c:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37e260:	ffffffff 	swinv	0x00ffffff
        37e264:	ffffffff 	swinv	0x00ffffff
        37e268:	01180119 	tsteq	r8, r9, lsl r1
        37e26c:	ffffffff 	swinv	0x00ffffff
        37e270:	011c011d 	tsteq	ip, sp, lsl r1
        37e274:	ffff011f 	swinv	0x00ff011f
        37e278:	ffffffff 	swinv	0x00ffffff
        37e27c:	ffffffff 	swinv	0x00ffffff
        37e280:	ffffffff 	swinv	0x00ffffff
        37e284:	ffffffff 	swinv	0x00ffffff
        37e288:	ffffffff 	swinv	0x00ffffff
        37e28c:	012a012b 	teqeq	sl, fp, lsr #2
        37e290:	ffff012d 	swinv	0x00ff012d
        37e294:	012e012f 	teqeq	lr, pc, lsr #2
        37e298:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37e29c:	01320133 	teqeq	r2, r3, lsr r1
        37e2a0:	01340135 	teqeq	r4, r5, lsr r1
        37e2a4:	01360026 	teqeq	r6, r6, lsr #32
        37e2a8:	0138ffff 	ldreqsh	pc, [r8, -pc]!
        37e2ac:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37e2b0:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37e2b4:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37e2b8:	002fffff 	streqd	pc, [pc], -pc
        37e2bc:	ffffffff 	swinv	0x00ffffff
        37e2c0:	0103ffff 	streqd	pc, [r3, -pc]
        37e2c4:	ffff0000 	swinv	0x00ff0000
        37e2c8:	ffff0108 	swinv	0x00ff0108
        37e2cc:	ffff003a 	swinv	0x00ff003a
        37e2d0:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37e2d4:	ffff003e 	swinv	0x00ff003e
        37e2d8:	010f0110 	tsteq	pc, r0, lsl r1
        37e2dc:	ffff0112 	swinv	0x00ff0112
        37e2e0:	ffffffff 	swinv	0x00ffffff
        37e2e4:	ffffffff 	swinv	0x00ffffff
        37e2e8:	ffff0118 	swinv	0x00ff0118
        37e2ec:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37e2f0:	ffff011c 	swinv	0x00ff011c
        37e2f4:	011dffff 	ldreqsh	pc, [sp, -pc]
        37e2f8:	011fffff 	ldreqsh	pc, [pc, -pc]
        37e2fc:	ffffffff 	swinv	0x00ffffff
        37e300:	ffffffff 	swinv	0x00ffffff
        37e304:	ffffffff 	swinv	0x00ffffff
        37e308:	ffffffff 	swinv	0x00ffffff
        37e30c:	ffffffff 	swinv	0x00ffffff
        37e310:	005b0026 	subeqs	r0, fp, r6, lsr #32
        37e314:	005dffff 	ldreqsh	pc, [sp], -#255
        37e318:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37e31c:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37e320:	002dffff 	streqd	pc, [sp], -pc
        37e324:	002fffff 	streqd	pc, [pc], -pc
        37e328:	ffffffff 	swinv	0x00ffffff
        37e32c:	0103ffff 	streqd	pc, [r3, -pc]
        37e330:	0000ffff 	streqd	pc, [r0], -pc
        37e334:	ffff0108 	swinv	0x00ff0108
        37e338:	ffffffff 	swinv	0x00ffffff
        37e33c:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37e340:	ffff003e 	swinv	0x00ff003e
        37e344:	010f0110 	tsteq	pc, r0, lsl r1
        37e348:	ffff0112 	swinv	0x00ff0112
        37e34c:	ffffffff 	swinv	0x00ffffff
        37e350:	ffffffff 	swinv	0x00ffffff
        37e354:	007d0118 	rsbeqs	r0, sp, r8, lsl r1
        37e358:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37e35c:	ffff011c 	swinv	0x00ff011c
        37e360:	011dffff 	ldreqsh	pc, [sp, -pc]
        37e364:	011fffff 	ldreqsh	pc, [pc, -pc]
        37e368:	ffffffff 	swinv	0x00ffffff
        37e36c:	ffffffff 	swinv	0x00ffffff
        37e370:	ffffffff 	swinv	0x00ffffff
        37e374:	ffffffff 	swinv	0x00ffffff
        37e378:	ffffffff 	swinv	0x00ffffff
        37e37c:	0026ffff 	streqd	pc, [r6], -pc
        37e380:	005d0029 	subeqs	r0, sp, r9, lsr #32
        37e384:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37e388:	002c002d 	eoreq	r0, ip, sp, lsr #32
        37e38c:	ffff002f 	swinv	0x00ff002f
        37e390:	ffffffff 	swinv	0x00ffffff
        37e394:	ffffffff 	swinv	0x00ffffff
        37e398:	ffffffff 	swinv	0x00ffffff
        37e39c:	0000ffff 	streqd	pc, [r0], -pc
        37e3a0:	ffffffff 	swinv	0x00ffffff
        37e3a4:	ffff003b 	swinv	0x00ff003b
        37e3a8:	003cffff 	ldreqsh	pc, [ip], -pc
        37e3ac:	003effff 	ldreqsh	pc, [lr], -pc
        37e3b0:	ffffffff 	swinv	0x00ffffff
        37e3b4:	ffffffff 	swinv	0x00ffffff
        37e3b8:	ffffffff 	swinv	0x00ffffff
        37e3bc:	ffffffff 	swinv	0x00ffffff
        37e3c0:	007dffff 	ldreqsh	pc, [sp], -#255
        37e3c4:	ffffffff 	swinv	0x00ffffff
        37e3c8:	ffffffff 	swinv	0x00ffffff
        37e3cc:	ffffffff 	swinv	0x00ffffff
        37e3d0:	ffffffff 	swinv	0x00ffffff
        37e3d4:	ffffffff 	swinv	0x00ffffff
        37e3d8:	ffffffff 	swinv	0x00ffffff
        37e3dc:	ffffffff 	swinv	0x00ffffff
        37e3e0:	ffffffff 	swinv	0x00ffffff
        37e3e4:	ffffffff 	swinv	0x00ffffff
        37e3e8:	0026005d 	eoreq	r0, r6, sp, asr r0
        37e3ec:	ffff0029 	swinv	0x00ff0029
        37e3f0:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37e3f4:	002c002d 	eoreq	r0, ip, sp, lsr #32
        37e3f8:	ffff002f 	swinv	0x00ff002f
        37e3fc:	ffffffff 	swinv	0x00ffffff
        37e400:	ffffffff 	swinv	0x00ffffff
        37e404:	ffffffff 	swinv	0x00ffffff
        37e408:	ffffffff 	swinv	0x00ffffff
        37e40c:	ffffffff 	swinv	0x00ffffff
        37e410:	ffff003b 	swinv	0x00ff003b
        37e414:	003cffff 	ldreqsh	pc, [ip], -pc
        37e418:	003e0000 	eoreqs	r0, lr, r0
        37e41c:	ffffffff 	swinv	0x00ffffff
        37e420:	ffffffff 	swinv	0x00ffffff
        37e424:	ffffffff 	swinv	0x00ffffff
        37e428:	ffff007d 	swinv	0x00ff007d
        37e42c:	ffffffff 	swinv	0x00ffffff
        37e430:	ffffffff 	swinv	0x00ffffff
        37e434:	ffffffff 	swinv	0x00ffffff
        37e438:	ffffffff 	swinv	0x00ffffff
        37e43c:	ffffffff 	swinv	0x00ffffff
        37e440:	ffffffff 	swinv	0x00ffffff
        37e444:	ffffffff 	swinv	0x00ffffff
        37e448:	ffffffff 	swinv	0x00ffffff
        37e44c:	ffffffff 	swinv	0x00ffffff
        37e450:	ffffffff 	swinv	0x00ffffff
        37e454:	ffff005d 	swinv	0x00ff005d
        37e458:	ffffffff 	swinv	0x00ffffff
        37e45c:	ffffffff 	swinv	0x00ffffff
        37e460:	0103ffff 	streqd	pc, [r3, -pc]
        37e464:	ffffffff 	swinv	0x00ffffff
        37e468:	ffff0108 	swinv	0x00ff0108
        37e46c:	0029ffff 	streqd	pc, [r9], -pc
        37e470:	ffff002c 	swinv	0x00ff002c
        37e474:	ffffffff 	swinv	0x00ffffff
        37e478:	010f0110 	tsteq	pc, r0, lsl r1
        37e47c:	ffffffff 	swinv	0x00ffffff
        37e480:	ffffffff 	swinv	0x00ffffff
        37e484:	ffffffff 	swinv	0x00ffffff
        37e488:	ffff0118 	swinv	0x00ff0118
        37e48c:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37e490:	003b011c 	eoreqs	r0, fp, ip, lsl r1
        37e494:	011d007d 	tsteq	sp, sp, ror r0
        37e498:	011fffff 	ldreqsh	pc, [pc, -pc]
        37e49c:	ffffffff 	swinv	0x00ffffff
        37e4a0:	ffffffff 	swinv	0x00ffffff
        37e4a4:	ffffffff 	swinv	0x00ffffff
        37e4a8:	ffffffff 	swinv	0x00ffffff
        37e4ac:	ffff012a 	swinv	0x00ff012a
        37e4b0:	012bffff 	streqd	pc, [fp, -pc]!
        37e4b4:	012d012e 	teqeq	sp, lr, lsr #2
        37e4b8:	012f0130 	teqeq	pc, r0, lsr r1
        37e4bc:	ffff0132 	swinv	0x00ff0132
        37e4c0:	01330134 	teqeq	r3, r4, lsr r1
        37e4c4:	01350136 	teqeq	r5, r6, lsr r1
        37e4c8:	ffff0138 	swinv	0x00ff0138
        37e4cc:	0103ffff 	streqd	pc, [r3, -pc]
        37e4d0:	ffffffff 	swinv	0x00ffffff
        37e4d4:	005d0108 	subeqs	r0, sp, r8, lsl #2
        37e4d8:	ffffffff 	swinv	0x00ffffff
        37e4dc:	ffffffff 	swinv	0x00ffffff
        37e4e0:	ffffffff 	swinv	0x00ffffff
        37e4e4:	010f0110 	tsteq	pc, r0, lsl r1
        37e4e8:	ffff0112 	swinv	0x00ff0112
        37e4ec:	ffffffff 	swinv	0x00ffffff
        37e4f0:	ffffffff 	swinv	0x00ffffff
        37e4f4:	ffff0118 	swinv	0x00ff0118
        37e4f8:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37e4fc:	ffff011c 	swinv	0x00ff011c
        37e500:	011dffff 	ldreqsh	pc, [sp, -pc]
        37e504:	011fffff 	ldreqsh	pc, [pc, -pc]
        37e508:	ffffffff 	swinv	0x00ffffff
        37e50c:	ffffffff 	swinv	0x00ffffff
        37e510:	ffffffff 	swinv	0x00ffffff
        37e514:	007dffff 	ldreqsh	pc, [sp], -#255
        37e518:	ffff012a 	swinv	0x00ff012a
        37e51c:	012bffff 	streqd	pc, [fp, -pc]!
        37e520:	012d012e 	teqeq	sp, lr, lsr #2
        37e524:	012f0130 	teqeq	pc, r0, lsr r1
        37e528:	ffff0132 	swinv	0x00ff0132
        37e52c:	01330134 	teqeq	r3, r4, lsr r1
        37e530:	01350136 	teqeq	r5, r6, lsr r1
        37e534:	ffff0103 	swinv	0x00ff0103
        37e538:	ffffffff 	swinv	0x00ffffff
        37e53c:	ffffffff 	swinv	0x00ffffff
        37e540:	0108ffff 	streqd	pc, [r8, -pc]
        37e544:	ffffffff 	swinv	0x00ffffff
        37e548:	ffffffff 	swinv	0x00ffffff
        37e54c:	ffff010f 	swinv	0x00ff010f
        37e550:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37e554:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37e558:	ffffffff 	swinv	0x00ffffff
        37e55c:	ffffffff 	swinv	0x00ffffff
        37e560:	01180119 	tsteq	r8, r9, lsl r1
        37e564:	ffffffff 	swinv	0x00ffffff
        37e568:	011c011d 	tsteq	ip, sp, lsl r1
        37e56c:	ffff011f 	swinv	0x00ff011f
        37e570:	ffffffff 	swinv	0x00ffffff
        37e574:	ffffffff 	swinv	0x00ffffff
        37e578:	ffffffff 	swinv	0x00ffffff
        37e57c:	ffffffff 	swinv	0x00ffffff
        37e580:	ffffffff 	swinv	0x00ffffff
        37e584:	012a012b 	teqeq	sl, fp, lsr #2
        37e588:	ffff012d 	swinv	0x00ff012d
        37e58c:	012e012f 	teqeq	lr, pc, lsr #2
        37e590:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37e594:	01320133 	teqeq	r2, r3, lsr r1
        37e598:	01340135 	teqeq	r4, r5, lsr r1
        37e59c:	0136ffff 	ldreqsh	pc, [r6, -pc]!
        37e5a0:	ffff0103 	swinv	0x00ff0103
        37e5a4:	ffffffff 	swinv	0x00ffffff
        37e5a8:	ffffffff 	swinv	0x00ffffff
        37e5ac:	0108ffff 	streqd	pc, [r8, -pc]
        37e5b0:	ffffffff 	swinv	0x00ffffff
        37e5b4:	ffffffff 	swinv	0x00ffffff
        37e5b8:	ffff010f 	swinv	0x00ff010f
        37e5bc:	01100000 	tsteq	r0, r0
        37e5c0:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37e5c4:	ffffffff 	swinv	0x00ffffff
        37e5c8:	ffffffff 	swinv	0x00ffffff
        37e5cc:	01180119 	tsteq	r8, r9, lsl r1
        37e5d0:	ffffffff 	swinv	0x00ffffff
        37e5d4:	011c011d 	tsteq	ip, sp, lsl r1
        37e5d8:	ffff011f 	swinv	0x00ff011f
        37e5dc:	ffffffff 	swinv	0x00ffffff
        37e5e0:	ffffffff 	swinv	0x00ffffff
        37e5e4:	ffffffff 	swinv	0x00ffffff
        37e5e8:	ffffffff 	swinv	0x00ffffff
        37e5ec:	ffffffff 	swinv	0x00ffffff
        37e5f0:	012a012b 	teqeq	sl, fp, lsr #2
        37e5f4:	ffff012d 	swinv	0x00ff012d
        37e5f8:	012e012f 	teqeq	lr, pc, lsr #2
        37e5fc:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37e600:	01320133 	teqeq	r2, r3, lsr r1
        37e604:	01340135 	teqeq	r4, r5, lsr r1
        37e608:	01360026 	teqeq	r6, r6, lsr #32
        37e60c:	ffffffff 	swinv	0x00ffffff
        37e610:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37e614:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37e618:	ffff002e 	swinv	0x00ff002e
        37e61c:	002f0000 	eoreq	r0, pc, r0
        37e620:	0103ffff 	streqd	pc, [r3, -pc]
        37e624:	ffffffff 	swinv	0x00ffffff
        37e628:	ffff0108 	swinv	0x00ff0108
        37e62c:	ffffffff 	swinv	0x00ffffff
        37e630:	ffffffff 	swinv	0x00ffffff
        37e634:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37e638:	010f003e 	tsteq	pc, lr, lsr r0
        37e63c:	ffff0112 	swinv	0x00ff0112
        37e640:	ffffffff 	swinv	0x00ffffff
        37e644:	ffffffff 	swinv	0x00ffffff
        37e648:	ffff0118 	swinv	0x00ff0118
        37e64c:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37e650:	ffff011c 	swinv	0x00ff011c
        37e654:	011dffff 	ldreqsh	pc, [sp, -pc]
        37e658:	011fffff 	ldreqsh	pc, [pc, -pc]
        37e65c:	ffffffff 	swinv	0x00ffffff
        37e660:	ffffffff 	swinv	0x00ffffff
        37e664:	ffffffff 	swinv	0x00ffffff
        37e668:	ffff0026 	swinv	0x00ff0026
        37e66c:	ffffffff 	swinv	0x00ffffff
        37e670:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37e674:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37e678:	005d002e 	subeqs	r0, sp, lr, lsr #32
        37e67c:	002fffff 	streqd	pc, [pc], -pc
        37e680:	ffffffff 	swinv	0x00ffffff
        37e684:	ffffffff 	swinv	0x00ffffff
        37e688:	0000ffff 	streqd	pc, [r0], -pc
        37e68c:	ffffffff 	swinv	0x00ffffff
        37e690:	ffffffff 	swinv	0x00ffffff
        37e694:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37e698:	ffff003e 	swinv	0x00ff003e
        37e69c:	ffffffff 	swinv	0x00ffffff
        37e6a0:	ffffffff 	swinv	0x00ffffff
        37e6a4:	ffffffff 	swinv	0x00ffffff
        37e6a8:	ffffffff 	swinv	0x00ffffff
        37e6ac:	ffffffff 	swinv	0x00ffffff
        37e6b0:	ffffffff 	swinv	0x00ffffff
        37e6b4:	ffffffff 	swinv	0x00ffffff
        37e6b8:	007dffff 	ldreqsh	pc, [sp], -#255
        37e6bc:	ffffffff 	swinv	0x00ffffff
        37e6c0:	ffffffff 	swinv	0x00ffffff
        37e6c4:	ffffffff 	swinv	0x00ffffff
        37e6c8:	ffffffff 	swinv	0x00ffffff
        37e6cc:	ffffffff 	swinv	0x00ffffff
        37e6d0:	ffffffff 	swinv	0x00ffffff
        37e6d4:	0026ffff 	streqd	pc, [r6], -pc
        37e6d8:	005d0029 	subeqs	r0, sp, r9, lsr #32
        37e6dc:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37e6e0:	002c002d 	eoreq	r0, ip, sp, lsr #32
        37e6e4:	ffff002f 	swinv	0x00ff002f
        37e6e8:	ffffffff 	swinv	0x00ffffff
        37e6ec:	ffffffff 	swinv	0x00ffffff
        37e6f0:	ffff0000 	swinv	0x00ff0000
        37e6f4:	ffffffff 	swinv	0x00ffffff
        37e6f8:	ffffffff 	swinv	0x00ffffff
        37e6fc:	ffff003b 	swinv	0x00ff003b
        37e700:	003cffff 	ldreqsh	pc, [ip], -pc
        37e704:	003effff 	ldreqsh	pc, [lr], -pc
        37e708:	ffffffff 	swinv	0x00ffffff
        37e70c:	ffffffff 	swinv	0x00ffffff
        37e710:	ffffffff 	swinv	0x00ffffff
        37e714:	ffffffff 	swinv	0x00ffffff
        37e718:	007dffff 	ldreqsh	pc, [sp], -#255
        37e71c:	ffffffff 	swinv	0x00ffffff
        37e720:	ffffffff 	swinv	0x00ffffff
        37e724:	ffffffff 	swinv	0x00ffffff
        37e728:	ffffffff 	swinv	0x00ffffff
        37e72c:	ffffffff 	swinv	0x00ffffff
        37e730:	ffffffff 	swinv	0x00ffffff
        37e734:	ffffffff 	swinv	0x00ffffff
        37e738:	ffffffff 	swinv	0x00ffffff
        37e73c:	ffff0026 	swinv	0x00ff0026
        37e740:	ffff005d 	swinv	0x00ff005d
        37e744:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37e748:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37e74c:	002dffff 	streqd	pc, [sp], -pc
        37e750:	002fffff 	streqd	pc, [pc], -pc
        37e754:	ffffffff 	swinv	0x00ffffff
        37e758:	ffffffff 	swinv	0x00ffffff
        37e75c:	ffffffff 	swinv	0x00ffffff
        37e760:	ffffffff 	swinv	0x00ffffff
        37e764:	ffffffff 	swinv	0x00ffffff
        37e768:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37e76c:	ffff003e 	swinv	0x00ff003e
        37e770:	ffffffff 	swinv	0x00ffffff
        37e774:	ffffffff 	swinv	0x00ffffff
        37e778:	ffffffff 	swinv	0x00ffffff
        37e77c:	ffffffff 	swinv	0x00ffffff
        37e780:	ffff007d 	swinv	0x00ff007d
        37e784:	ffffffff 	swinv	0x00ffffff
        37e788:	ffffffff 	swinv	0x00ffffff
        37e78c:	ffffffff 	swinv	0x00ffffff
        37e790:	0026ffff 	streqd	pc, [r6], -pc
        37e794:	ffffffff 	swinv	0x00ffffff
        37e798:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37e79c:	002c002d 	eoreq	r0, ip, sp, lsr #32
        37e7a0:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37e7a4:	ffffffff 	swinv	0x00ffffff
        37e7a8:	ffffffff 	swinv	0x00ffffff
        37e7ac:	005dffff 	ldreqsh	pc, [sp], -#255
        37e7b0:	ffffffff 	swinv	0x00ffffff
        37e7b4:	ffffffff 	swinv	0x00ffffff
        37e7b8:	ffffffff 	swinv	0x00ffffff
        37e7bc:	003cffff 	ldreqsh	pc, [ip], -pc
        37e7c0:	003effff 	ldreqsh	pc, [lr], -pc
        37e7c4:	ffffffff 	swinv	0x00ffffff
        37e7c8:	ffffffff 	swinv	0x00ffffff
        37e7cc:	ffff0108 	swinv	0x00ff0108
        37e7d0:	ffffffff 	swinv	0x00ffffff
        37e7d4:	ffffffff 	swinv	0x00ffffff
        37e7d8:	ffffffff 	swinv	0x00ffffff
        37e7dc:	010f0110 	tsteq	pc, r0, lsl r1
        37e7e0:	ffff0112 	swinv	0x00ff0112
        37e7e4:	ffffffff 	swinv	0x00ffffff
        37e7e8:	ffffffff 	swinv	0x00ffffff
        37e7ec:	007d0118 	rsbeqs	r0, sp, r8, lsl r1
        37e7f0:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37e7f4:	ffff011c 	swinv	0x00ff011c
        37e7f8:	011d005b 	tsteq	sp, fp, asr r0
        37e7fc:	011f005d 	tsteq	pc, sp, asr r0
        37e800:	ffffffff 	swinv	0x00ffffff
        37e804:	ffffffff 	swinv	0x00ffffff
        37e808:	ffffffff 	swinv	0x00ffffff
        37e80c:	ffffffff 	swinv	0x00ffffff
        37e810:	ffff012a 	swinv	0x00ff012a
        37e814:	012bffff 	streqd	pc, [fp, -pc]!
        37e818:	012d012e 	teqeq	sp, lr, lsr #2
        37e81c:	012f0130 	teqeq	pc, r0, lsr r1
        37e820:	ffff0132 	swinv	0x00ff0132
        37e824:	01330134 	teqeq	r3, r4, lsr r1
        37e828:	01350136 	teqeq	r5, r6, lsr r1
        37e82c:	ffff0108 	swinv	0x00ff0108
        37e830:	ffffffff 	swinv	0x00ffffff
        37e834:	ffffffff 	swinv	0x00ffffff
        37e838:	ffffffff 	swinv	0x00ffffff
        37e83c:	010f0110 	tsteq	pc, r0, lsl r1
        37e840:	ffff0112 	swinv	0x00ff0112
        37e844:	ffffffff 	swinv	0x00ffffff
        37e848:	ffffffff 	swinv	0x00ffffff
        37e84c:	ffff0118 	swinv	0x00ff0118
        37e850:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37e854:	ffff011c 	swinv	0x00ff011c
        37e858:	011dffff 	ldreqsh	pc, [sp, -pc]
        37e85c:	011fffff 	ldreqsh	pc, [pc, -pc]
        37e860:	ffffffff 	swinv	0x00ffffff
        37e864:	ffffffff 	swinv	0x00ffffff
        37e868:	ffffffff 	swinv	0x00ffffff
        37e86c:	ffffffff 	swinv	0x00ffffff
        37e870:	ffff012a 	swinv	0x00ff012a
        37e874:	012bffff 	streqd	pc, [fp, -pc]!
        37e878:	012d012e 	teqeq	sp, lr, lsr #2
        37e87c:	012f0130 	teqeq	pc, r0, lsr r1
        37e880:	ffff0132 	swinv	0x00ff0132
        37e884:	01330134 	teqeq	r3, r4, lsr r1
        37e888:	01350136 	teqeq	r5, r6, lsr r1
        37e88c:	ffff0103 	swinv	0x00ff0103
        37e890:	ffffffff 	swinv	0x00ffffff
        37e894:	ffffffff 	swinv	0x00ffffff
        37e898:	0108ffff 	streqd	pc, [r8, -pc]
        37e89c:	ffffffff 	swinv	0x00ffffff
        37e8a0:	ffffffff 	swinv	0x00ffffff
        37e8a4:	ffff010f 	swinv	0x00ff010f
        37e8a8:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37e8ac:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37e8b0:	ffffffff 	swinv	0x00ffffff
        37e8b4:	ffffffff 	swinv	0x00ffffff
        37e8b8:	01180119 	tsteq	r8, r9, lsl r1
        37e8bc:	ffffffff 	swinv	0x00ffffff
        37e8c0:	011c011d 	tsteq	ip, sp, lsl r1
        37e8c4:	ffff011f 	swinv	0x00ff011f
        37e8c8:	ffffffff 	swinv	0x00ffffff
        37e8cc:	ffffffff 	swinv	0x00ffffff
        37e8d0:	ffffffff 	swinv	0x00ffffff
        37e8d4:	ffffffff 	swinv	0x00ffffff
        37e8d8:	ffffffff 	swinv	0x00ffffff
        37e8dc:	012a012b 	teqeq	sl, fp, lsr #2
        37e8e0:	ffff012d 	swinv	0x00ff012d
        37e8e4:	012e012f 	teqeq	lr, pc, lsr #2
        37e8e8:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37e8ec:	01320133 	teqeq	r2, r3, lsr r1
        37e8f0:	0134ffff 	ldreqsh	pc, [r4, -pc]!
        37e8f4:	ffffffff 	swinv	0x00ffffff
        37e8f8:	0103ffff 	streqd	pc, [r3, -pc]
        37e8fc:	ffffffff 	swinv	0x00ffffff
        37e900:	ffff0108 	swinv	0x00ff0108
        37e904:	ffffffff 	swinv	0x00ffffff
        37e908:	ffffffff 	swinv	0x00ffffff
        37e90c:	ffffffff 	swinv	0x00ffffff
        37e910:	010f0110 	tsteq	pc, r0, lsl r1
        37e914:	00000112 	andeq	r0, r0, r2, lsl r1
        37e918:	ffffffff 	swinv	0x00ffffff
        37e91c:	ffffffff 	swinv	0x00ffffff
        37e920:	ffff0118 	swinv	0x00ff0118
        37e924:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37e928:	ffff011c 	swinv	0x00ff011c
        37e92c:	011dffff 	ldreqsh	pc, [sp, -pc]
        37e930:	011fffff 	ldreqsh	pc, [pc, -pc]
        37e934:	ffffffff 	swinv	0x00ffffff
        37e938:	ffffffff 	swinv	0x00ffffff
        37e93c:	ffffffff 	swinv	0x00ffffff
        37e940:	ffffffff 	swinv	0x00ffffff
        37e944:	ffff012a 	swinv	0x00ff012a
        37e948:	012bffff 	streqd	pc, [fp, -pc]!
        37e94c:	012d012e 	teqeq	sp, lr, lsr #2
        37e950:	012f0130 	teqeq	pc, r0, lsr r1
        37e954:	ffff0132 	swinv	0x00ff0132
        37e958:	01330134 	teqeq	r3, r4, lsr r1
        37e95c:	ffffffff 	swinv	0x00ffffff
        37e960:	0026ffff 	streqd	pc, [r6], -pc
        37e964:	ffff0029 	swinv	0x00ff0029
        37e968:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37e96c:	002c002d 	eoreq	r0, ip, sp, lsr #32
        37e970:	ffff002f 	swinv	0x00ff002f
        37e974:	ffffffff 	swinv	0x00ffffff
        37e978:	ffffffff 	swinv	0x00ffffff
        37e97c:	ffff0000 	swinv	0x00ff0000
        37e980:	ffffffff 	swinv	0x00ffffff
        37e984:	ffffffff 	swinv	0x00ffffff
        37e988:	ffff003b 	swinv	0x00ff003b
        37e98c:	003cffff 	ldreqsh	pc, [ip], -pc
        37e990:	003effff 	ldreqsh	pc, [lr], -pc
        37e994:	ffff0129 	swinv	0x00ff0129
        37e998:	012a012b 	teqeq	sl, fp, lsr #2
        37e99c:	ffff012d 	swinv	0x00ff012d
        37e9a0:	012e012f 	teqeq	lr, pc, lsr #2
        37e9a4:	01300131 	teqeq	r0, r1, lsr r1
        37e9a8:	01320133 	teqeq	r2, r3, lsr r1
        37e9ac:	01340135 	teqeq	r4, r5, lsr r1
        37e9b0:	0136ffff 	ldreqsh	pc, [r6, -pc]!
        37e9b4:	0138ffff 	ldreqsh	pc, [r8, -pc]!
        37e9b8:	ffffffff 	swinv	0x00ffffff
        37e9bc:	ffffffff 	swinv	0x00ffffff
        37e9c0:	ffffffff 	swinv	0x00ffffff
        37e9c4:	ffffffff 	swinv	0x00ffffff
        37e9c8:	ffff0026 	swinv	0x00ff0026
        37e9cc:	ffff005d 	swinv	0x00ff005d
        37e9d0:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37e9d4:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37e9d8:	002d0000 	eoreq	r0, sp, r0
        37e9dc:	002fffff 	streqd	pc, [pc], -pc
        37e9e0:	ffffffff 	swinv	0x00ffffff
        37e9e4:	ffffffff 	swinv	0x00ffffff
        37e9e8:	ffffffff 	swinv	0x00ffffff
        37e9ec:	ffffffff 	swinv	0x00ffffff
        37e9f0:	ffffffff 	swinv	0x00ffffff
        37e9f4:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37e9f8:	ffff003e 	swinv	0x00ff003e
        37e9fc:	ffffffff 	swinv	0x00ffffff
        37ea00:	ffffffff 	swinv	0x00ffffff
        37ea04:	ffffffff 	swinv	0x00ffffff
        37ea08:	ffffffff 	swinv	0x00ffffff
        37ea0c:	ffff007d 	swinv	0x00ff007d
        37ea10:	ffffffff 	swinv	0x00ffffff
        37ea14:	ffffffff 	swinv	0x00ffffff
        37ea18:	ffffffff 	swinv	0x00ffffff
        37ea1c:	ffffffff 	swinv	0x00ffffff
        37ea20:	ffffffff 	swinv	0x00ffffff
        37ea24:	ffff0026 	swinv	0x00ff0026
        37ea28:	ffffffff 	swinv	0x00ffffff
        37ea2c:	0029ffff 	streqd	pc, [r9], -pc
        37ea30:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37ea34:	002d0000 	eoreq	r0, sp, r0
        37ea38:	005dffff 	ldreqsh	pc, [sp], -#255
        37ea3c:	ffffffff 	swinv	0x00ffffff
        37ea40:	ffffffff 	swinv	0x00ffffff
        37ea44:	ffffffff 	swinv	0x00ffffff
        37ea48:	ffffffff 	swinv	0x00ffffff
        37ea4c:	ffffffff 	swinv	0x00ffffff
        37ea50:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37ea54:	ffff003e 	swinv	0x00ff003e
        37ea58:	ffffffff 	swinv	0x00ffffff
        37ea5c:	ffffffff 	swinv	0x00ffffff
        37ea60:	ffffffff 	swinv	0x00ffffff
        37ea64:	ffffffff 	swinv	0x00ffffff
        37ea68:	ffffffff 	swinv	0x00ffffff
        37ea6c:	ffffffff 	swinv	0x00ffffff
        37ea70:	ffffffff 	swinv	0x00ffffff
        37ea74:	ffffffff 	swinv	0x00ffffff
        37ea78:	007dffff 	ldreqsh	pc, [sp], -#255
        37ea7c:	ffffffff 	swinv	0x00ffffff
        37ea80:	ffff0026 	swinv	0x00ff0026
        37ea84:	ffffffff 	swinv	0x00ffffff
        37ea88:	0029ffff 	streqd	pc, [r9], -pc
        37ea8c:	002b002c 	eoreq	r0, fp, ip, lsr #32
        37ea90:	002dffff 	streqd	pc, [sp], -pc
        37ea94:	005d0000 	subeqs	r0, sp, r0
        37ea98:	ffffffff 	swinv	0x00ffffff
        37ea9c:	ffffffff 	swinv	0x00ffffff
        37eaa0:	ffffffff 	swinv	0x00ffffff
        37eaa4:	ffffffff 	swinv	0x00ffffff
        37eaa8:	ffffffff 	swinv	0x00ffffff
        37eaac:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37eab0:	ffff003e 	swinv	0x00ff003e
        37eab4:	ffffffff 	swinv	0x00ffffff
        37eab8:	ffffffff 	swinv	0x00ffffff
        37eabc:	ffffffff 	swinv	0x00ffffff
        37eac0:	ffffffff 	swinv	0x00ffffff
        37eac4:	ffffffff 	swinv	0x00ffffff
        37eac8:	ffffffff 	swinv	0x00ffffff
        37eacc:	ffffffff 	swinv	0x00ffffff
        37ead0:	ffffffff 	swinv	0x00ffffff
        37ead4:	007dffff 	ldreqsh	pc, [sp], -#255
        37ead8:	ffffffff 	swinv	0x00ffffff
        37eadc:	ffffffff 	swinv	0x00ffffff
        37eae0:	ffff0026 	swinv	0x00ff0026
        37eae4:	ffffffff 	swinv	0x00ffffff
        37eae8:	0029ffff 	streqd	pc, [r9], -pc
        37eaec:	ffff002c 	swinv	0x00ff002c
        37eaf0:	005dffff 	ldreqsh	pc, [sp], -#255
        37eaf4:	ffffffff 	swinv	0x00ffffff
        37eaf8:	ffffffff 	swinv	0x00ffffff
        37eafc:	ffffffff 	swinv	0x00ffffff
        37eb00:	ffffffff 	swinv	0x00ffffff
        37eb04:	ffffffff 	swinv	0x00ffffff
        37eb08:	ffff0000 	swinv	0x00ff0000
        37eb0c:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37eb10:	ffff003e 	swinv	0x00ff003e
        37eb14:	ffffffff 	swinv	0x00ffffff
        37eb18:	ffff0103 	swinv	0x00ff0103
        37eb1c:	ffffffff 	swinv	0x00ffffff
        37eb20:	ffffffff 	swinv	0x00ffffff
        37eb24:	0108ffff 	streqd	pc, [r8, -pc]
        37eb28:	ffffffff 	swinv	0x00ffffff
        37eb2c:	ffffffff 	swinv	0x00ffffff
        37eb30:	007d010f 	rsbeqs	r0, sp, pc, lsl #2
        37eb34:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37eb38:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37eb3c:	ffffffff 	swinv	0x00ffffff
        37eb40:	ffffffff 	swinv	0x00ffffff
        37eb44:	01180119 	tsteq	r8, r9, lsl r1
        37eb48:	ffffffff 	swinv	0x00ffffff
        37eb4c:	011c011d 	tsteq	ip, sp, lsl r1
        37eb50:	005d011f 	subeqs	r0, sp, pc, lsl r1
        37eb54:	ffff0026 	swinv	0x00ff0026
        37eb58:	ffffffff 	swinv	0x00ffffff
        37eb5c:	0029ffff 	streqd	pc, [r9], -pc
        37eb60:	ffff002c 	swinv	0x00ff002c
        37eb64:	ffffffff 	swinv	0x00ffffff
        37eb68:	012a012b 	teqeq	sl, fp, lsr #2
        37eb6c:	ffff012d 	swinv	0x00ff012d
        37eb70:	012e012f 	teqeq	lr, pc, lsr #2
        37eb74:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37eb78:	01320133 	teqeq	r2, r3, lsr r1
        37eb7c:	0134ffff 	ldreqsh	pc, [r4, -pc]!
        37eb80:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37eb84:	0103003e 	tsteq	r3, lr, lsr r0
        37eb88:	ffffffff 	swinv	0x00ffffff
        37eb8c:	ffff0108 	swinv	0x00ff0108
        37eb90:	007dffff 	ldreqsh	pc, [sp], -#255
        37eb94:	ffffffff 	swinv	0x00ffffff
        37eb98:	ffffffff 	swinv	0x00ffffff
        37eb9c:	010f0110 	tsteq	pc, r0, lsl r1
        37eba0:	ffff0112 	swinv	0x00ff0112
        37eba4:	0000ffff 	streqd	pc, [r0], -pc
        37eba8:	ffffffff 	swinv	0x00ffffff
        37ebac:	ffff0118 	swinv	0x00ff0118
        37ebb0:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37ebb4:	ffff011c 	swinv	0x00ff011c
        37ebb8:	011dffff 	ldreqsh	pc, [sp, -pc]
        37ebbc:	011fffff 	ldreqsh	pc, [pc, -pc]
        37ebc0:	ffffffff 	swinv	0x00ffffff
        37ebc4:	005dffff 	ldreqsh	pc, [sp], -#255
        37ebc8:	ffffffff 	swinv	0x00ffffff
        37ebcc:	ffffffff 	swinv	0x00ffffff
        37ebd0:	ffff012a 	swinv	0x00ff012a
        37ebd4:	012bffff 	streqd	pc, [fp, -pc]!
        37ebd8:	012d012e 	teqeq	sp, lr, lsr #2
        37ebdc:	012f0130 	teqeq	pc, r0, lsr r1
        37ebe0:	01030132 	tsteq	r3, r2, lsr r1
        37ebe4:	01330134 	teqeq	r3, r4, lsr r1
        37ebe8:	ffff0108 	swinv	0x00ff0108
        37ebec:	ffffffff 	swinv	0x00ffffff
        37ebf0:	ffffffff 	swinv	0x00ffffff
        37ebf4:	ffff0029 	swinv	0x00ff0029
        37ebf8:	010f0110 	tsteq	pc, r0, lsl r1
        37ebfc:	002c0112 	eoreq	r0, ip, r2, lsl r1
        37ec00:	ffffffff 	swinv	0x00ffffff
        37ec04:	007dffff 	ldreqsh	pc, [sp], -#255
        37ec08:	ffff0118 	swinv	0x00ff0118
        37ec0c:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37ec10:	ffff011c 	swinv	0x00ff011c
        37ec14:	011dffff 	ldreqsh	pc, [sp, -pc]
        37ec18:	011f003b 	tsteq	pc, fp, lsr r0
        37ec1c:	003cffff 	ldreqsh	pc, [ip], -pc
        37ec20:	003effff 	ldreqsh	pc, [lr], -pc
        37ec24:	ffffffff 	swinv	0x00ffffff
        37ec28:	ffffffff 	swinv	0x00ffffff
        37ec2c:	ffff012a 	swinv	0x00ff012a
        37ec30:	012bffff 	streqd	pc, [fp, -pc]!
        37ec34:	012d012e 	teqeq	sp, lr, lsr #2
        37ec38:	012f0130 	teqeq	pc, r0, lsr r1
        37ec3c:	01030132 	tsteq	r3, r2, lsr r1
        37ec40:	ffffffff 	swinv	0x00ffffff
        37ec44:	ffff0108 	swinv	0x00ff0108
        37ec48:	ffffffff 	swinv	0x00ffffff
        37ec4c:	ffffffff 	swinv	0x00ffffff
        37ec50:	ffffffff 	swinv	0x00ffffff
        37ec54:	010f0110 	tsteq	pc, r0, lsl r1
        37ec58:	ffff0112 	swinv	0x00ff0112
        37ec5c:	ffff005d 	swinv	0x00ff005d
        37ec60:	ffffffff 	swinv	0x00ffffff
        37ec64:	ffff0118 	swinv	0x00ff0118
        37ec68:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37ec6c:	ffff011c 	swinv	0x00ff011c
        37ec70:	011dffff 	ldreqsh	pc, [sp, -pc]
        37ec74:	011fffff 	ldreqsh	pc, [pc, -pc]
        37ec78:	ffffffff 	swinv	0x00ffffff
        37ec7c:	ffffffff 	swinv	0x00ffffff
        37ec80:	ffffffff 	swinv	0x00ffffff
        37ec84:	ffffffff 	swinv	0x00ffffff
        37ec88:	ffff012a 	swinv	0x00ff012a
        37ec8c:	012bffff 	streqd	pc, [fp, -pc]!
        37ec90:	012d012e 	teqeq	sp, lr, lsr #2
        37ec94:	012f0130 	teqeq	pc, r0, lsr r1
        37ec98:	ffff0132 	swinv	0x00ff0132
        37ec9c:	0103007d 	tsteq	r3, sp, ror r0
        37eca0:	ffffffff 	swinv	0x00ffffff
        37eca4:	ffff0108 	swinv	0x00ff0108
        37eca8:	ffffffff 	swinv	0x00ffffff
        37ecac:	ffffffff 	swinv	0x00ffffff
        37ecb0:	ffffffff 	swinv	0x00ffffff
        37ecb4:	010f0110 	tsteq	pc, r0, lsl r1
        37ecb8:	ffff0112 	swinv	0x00ff0112
        37ecbc:	0000ffff 	streqd	pc, [r0], -pc
        37ecc0:	ffffffff 	swinv	0x00ffffff
        37ecc4:	ffff0118 	swinv	0x00ff0118
        37ecc8:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37eccc:	ffff011c 	swinv	0x00ff011c
        37ecd0:	011dffff 	ldreqsh	pc, [sp, -pc]
        37ecd4:	011fffff 	ldreqsh	pc, [pc, -pc]
        37ecd8:	ffffffff 	swinv	0x00ffffff
        37ecdc:	ffffffff 	swinv	0x00ffffff
        37ece0:	ffffffff 	swinv	0x00ffffff
        37ece4:	ffffffff 	swinv	0x00ffffff
        37ece8:	ffff012a 	swinv	0x00ff012a
        37ecec:	012bffff 	streqd	pc, [fp, -pc]!
        37ecf0:	012d012e 	teqeq	sp, lr, lsr #2
        37ecf4:	012f0130 	teqeq	pc, r0, lsr r1
        37ecf8:	ffff0132 	swinv	0x00ff0132
        37ecfc:	ffffffff 	swinv	0x00ffffff
        37ed00:	ffffffff 	swinv	0x00ffffff
        37ed04:	ffffffff 	swinv	0x00ffffff
        37ed08:	ffffffff 	swinv	0x00ffffff
        37ed0c:	ffff0029 	swinv	0x00ff0029
        37ed10:	0103ffff 	streqd	pc, [r3, -pc]
        37ed14:	002cffff 	streqd	pc, [ip], -pc
        37ed18:	ffff0108 	swinv	0x00ff0108
        37ed1c:	ffffffff 	swinv	0x00ffffff
        37ed20:	ffffffff 	swinv	0x00ffffff
        37ed24:	ffffffff 	swinv	0x00ffffff
        37ed28:	010f0110 	tsteq	pc, r0, lsl r1
        37ed2c:	ffff0112 	swinv	0x00ff0112
        37ed30:	ffff003b 	swinv	0x00ff003b
        37ed34:	003cffff 	ldreqsh	pc, [ip], -pc
        37ed38:	003e0118 	eoreqs	r0, lr, r8, lsl r1
        37ed3c:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37ed40:	ffff011c 	swinv	0x00ff011c
        37ed44:	011dffff 	ldreqsh	pc, [sp, -pc]
        37ed48:	011fffff 	ldreqsh	pc, [pc, -pc]
        37ed4c:	ffffffff 	swinv	0x00ffffff
        37ed50:	ffffffff 	swinv	0x00ffffff
        37ed54:	ffffffff 	swinv	0x00ffffff
        37ed58:	ffffffff 	swinv	0x00ffffff
        37ed5c:	ffff012a 	swinv	0x00ff012a
        37ed60:	012bffff 	streqd	pc, [fp, -pc]!
        37ed64:	012d012e 	teqeq	sp, lr, lsr #2
        37ed68:	012f0130 	teqeq	pc, r0, lsr r1
        37ed6c:	00000132 	andeq	r0, r0, r2, lsr r1
        37ed70:	ffffffff 	swinv	0x00ffffff
        37ed74:	ffff005d 	swinv	0x00ff005d
        37ed78:	0006ffff 	streqd	pc, [r6], -pc
        37ed7c:	ffffffff 	swinv	0x00ffffff
        37ed80:	000a000b 	andeq	r0, sl, fp
        37ed84:	ffff000d 	swinv	0x00ff000d
        37ed88:	ffff000f 	swinv	0x00ff000f
        37ed8c:	00100011 	andeqs	r0, r0, r1, lsl r0
        37ed90:	ffffffff 	swinv	0x00ffffff
        37ed94:	ffff0015 	swinv	0x00ff0015
        37ed98:	00160017 	andeqs	r0, r6, r7, lsl r0
        37ed9c:	0018ffff 	ldreqsh	pc, [r8], -pc
        37eda0:	ffffffff 	swinv	0x00ffffff
        37eda4:	001cffff 	ldreqsh	pc, [ip], -pc
        37eda8:	ffff0103 	swinv	0x00ff0103
        37edac:	ffffffff 	swinv	0x00ffffff
        37edb0:	ffffffff 	swinv	0x00ffffff
        37edb4:	0108007d 	tsteq	r8, sp, ror r0
        37edb8:	ffffffff 	swinv	0x00ffffff
        37edbc:	ffffffff 	swinv	0x00ffffff
        37edc0:	ffff010f 	swinv	0x00ff010f
        37edc4:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37edc8:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37edcc:	ffffffff 	swinv	0x00ffffff
        37edd0:	ffffffff 	swinv	0x00ffffff
        37edd4:	01180119 	tsteq	r8, r9, lsl r1
        37edd8:	ffffffff 	swinv	0x00ffffff
        37eddc:	011c011d 	tsteq	ip, sp, lsl r1
        37ede0:	ffff011f 	swinv	0x00ff011f
        37ede4:	ffffffff 	swinv	0x00ffffff
        37ede8:	ffffffff 	swinv	0x00ffffff
        37edec:	ffffffff 	swinv	0x00ffffff
        37edf0:	ffffffff 	swinv	0x00ffffff
        37edf4:	ffffffff 	swinv	0x00ffffff
        37edf8:	012a012b 	teqeq	sl, fp, lsr #2
        37edfc:	ffff012d 	swinv	0x00ff012d
        37ee00:	012e012f 	teqeq	lr, pc, lsr #2
        37ee04:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37ee08:	ffffffff 	swinv	0x00ffffff
        37ee0c:	ffffffff 	swinv	0x00ffffff
        37ee10:	ffffffff 	swinv	0x00ffffff
        37ee14:	ffffffff 	swinv	0x00ffffff
        37ee18:	ffffffff 	swinv	0x00ffffff
        37ee1c:	ffffffff 	swinv	0x00ffffff
        37ee20:	ffffffff 	swinv	0x00ffffff
        37ee24:	ffffffff 	swinv	0x00ffffff
        37ee28:	ffff0000 	swinv	0x00ff0000
        37ee2c:	ffffffff 	swinv	0x00ffffff
        37ee30:	ffffffff 	swinv	0x00ffffff
        37ee34:	ffffffff 	swinv	0x00ffffff
        37ee38:	ffffffff 	swinv	0x00ffffff
        37ee3c:	00680069 	rsbeq	r0, r8, r9, rrx
        37ee40:	006a006b 	rsbeq	r0, sl, fp, rrx
        37ee44:	006c006d 	rsbeq	r0, ip, sp, rrx
        37ee48:	006e006f 	rsbeq	r0, lr, pc, rrx
        37ee4c:	00700071 	rsbeqs	r0, r0, r1, ror r0
        37ee50:	00720073 	rsbeqs	r0, r2, r3, ror r0
        37ee54:	00740075 	rsbeqs	r0, r4, r5, ror r0
        37ee58:	00760077 	rsbeqs	r0, r6, r7, ror r0
        37ee5c:	00780079 	rsbeqs	r0, r8, r9, ror r0
        37ee60:	007affff 	ldreqsh	pc, [sl], -#255
        37ee64:	ffffffff 	swinv	0x00ffffff
        37ee68:	007effff 	ldreqsh	pc, [lr], -#255
        37ee6c:	ffffffff 	swinv	0x00ffffff
        37ee70:	ffff0083 	swinv	0x00ff0083
        37ee74:	ffffffff 	swinv	0x00ffffff
        37ee78:	ffffffff 	swinv	0x00ffffff
        37ee7c:	0029ffff 	streqd	pc, [r9], -pc
        37ee80:	008a002c 	addeq	r0, sl, ip, lsr #32
        37ee84:	008cffff 	streqd	pc, [ip], pc
        37ee88:	008effff 	streqd	pc, [lr], pc
        37ee8c:	ffffffff 	swinv	0x00ffffff
        37ee90:	ffff0093 	swinv	0x00ff0093
        37ee94:	ffffffff 	swinv	0x00ffffff
        37ee98:	00960097 	umulleqs	r0, r6, r7, r0
        37ee9c:	0098ffff 	ldreqsh	pc, [r8], pc
        37eea0:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37eea4:	ffff003e 	swinv	0x00ff003e
        37eea8:	ffffffff 	swinv	0x00ffffff
        37eeac:	ffff00a1 	swinv	0x00ff00a1
        37eeb0:	ffff0000 	swinv	0x00ff0000
        37eeb4:	ffffffff 	swinv	0x00ffffff
        37eeb8:	ffffffff 	swinv	0x00ffffff
        37eebc:	ffffffff 	swinv	0x00ffffff
        37eec0:	ffff0103 	swinv	0x00ff0103
        37eec4:	ffffffff 	swinv	0x00ffffff
        37eec8:	ffff00af 	swinv	0x00ff00af
        37eecc:	0108ffff 	streqd	pc, [r8, -pc]
        37eed0:	00b2ffff 	ldreqsh	pc, [r2], pc
        37eed4:	ffffffff 	swinv	0x00ffffff
        37eed8:	ffff010f 	swinv	0x00ff010f
        37eedc:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37eee0:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37eee4:	005dffff 	ldreqsh	pc, [sp], -#255
        37eee8:	ffffffff 	swinv	0x00ffffff
        37eeec:	01180119 	tsteq	r8, r9, lsl r1
        37eef0:	ffffffff 	swinv	0x00ffffff
        37eef4:	011c011d 	tsteq	ip, sp, lsl r1
        37eef8:	ffff011f 	swinv	0x00ff011f
        37eefc:	ffff00c9 	swinv	0x00ff00c9
        37ef00:	ffffffff 	swinv	0x00ffffff
        37ef04:	0029ffff 	streqd	pc, [r9], -pc
        37ef08:	ffff002c 	swinv	0x00ff002c
        37ef0c:	ffff00d1 	swinv	0x00ff00d1
        37ef10:	012a012b 	teqeq	sl, fp, lsr #2
        37ef14:	ffff012d 	swinv	0x00ff012d
        37ef18:	012e012f 	teqeq	lr, pc, lsr #2
        37ef1c:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37ef20:	00da0000 	sbceqs	r0, sl, r0
        37ef24:	007dffff 	ldreqsh	pc, [sp], -#255
        37ef28:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37ef2c:	ffff003e 	swinv	0x00ff003e
        37ef30:	00e2ffff 	streqd	pc, [r2], #255
        37ef34:	ffffffff 	swinv	0x00ffffff
        37ef38:	ffffffff 	swinv	0x00ffffff
        37ef3c:	ffffffff 	swinv	0x00ffffff
        37ef40:	ffffffff 	swinv	0x00ffffff
        37ef44:	ffffffff 	swinv	0x00ffffff
        37ef48:	ffffffff 	swinv	0x00ffffff
        37ef4c:	ffffffff 	swinv	0x00ffffff
        37ef50:	ffffffff 	swinv	0x00ffffff
        37ef54:	ffffffff 	swinv	0x00ffffff
        37ef58:	ffff00f7 	swinv	0x00ff00f7
        37ef5c:	00f800f9 	ldreqsh	r0, [r8], #9
        37ef60:	ffffffff 	swinv	0x00ffffff
        37ef64:	00fcffff 	ldreqsh	pc, [ip], #255
        37ef68:	00fe00ff 	ldreqsh	r0, [lr], #15
        37ef6c:	005d0101 	subeqs	r0, sp, r1, lsl #2
        37ef70:	0102ffff 	streqd	pc, [r2, -pc]
        37ef74:	0029ffff 	streqd	pc, [r9], -pc
        37ef78:	ffff002c 	swinv	0x00ff002c
        37ef7c:	ffff0000 	swinv	0x00ff0000
        37ef80:	ffffffff 	swinv	0x00ffffff
        37ef84:	ffffffff 	swinv	0x00ffffff
        37ef88:	ffff010f 	swinv	0x00ff010f
        37ef8c:	ffffffff 	swinv	0x00ffffff
        37ef90:	ffffffff 	swinv	0x00ffffff
        37ef94:	ffffffff 	swinv	0x00ffffff
        37ef98:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37ef9c:	ffff003e 	swinv	0x00ff003e
        37efa0:	ffffffff 	swinv	0x00ffffff
        37efa4:	ffffffff 	swinv	0x00ffffff
        37efa8:	011effff 	ldreqsh	pc, [lr, -pc]
        37efac:	007d0121 	rsbeqs	r0, sp, r1, lsr #2
        37efb0:	ffffffff 	swinv	0x00ffffff
        37efb4:	ffffffff 	swinv	0x00ffffff
        37efb8:	ffffffff 	swinv	0x00ffffff
        37efbc:	ffff0129 	swinv	0x00ff0129
        37efc0:	012affff 	streqd	pc, [sl, -pc]!
        37efc4:	ffffffff 	swinv	0x00ffffff
        37efc8:	ffffffff 	swinv	0x00ffffff
        37efcc:	01300131 	teqeq	r0, r1, lsr r1
        37efd0:	0029ffff 	streqd	pc, [r9], -pc
        37efd4:	ffff002c 	swinv	0x00ff002c
        37efd8:	ffff0000 	swinv	0x00ff0000
        37efdc:	005dffff 	ldreqsh	pc, [sp], -#255
        37efe0:	ffffffff 	swinv	0x00ffffff
        37efe4:	ffffffff 	swinv	0x00ffffff
        37efe8:	ffffffff 	swinv	0x00ffffff
        37efec:	ffffffff 	swinv	0x00ffffff
        37eff0:	ffffffff 	swinv	0x00ffffff
        37eff4:	003b003c 	eoreqs	r0, fp, ip, lsr r0
        37eff8:	ffff003e 	swinv	0x00ff003e
        37effc:	ffffffff 	swinv	0x00ffffff
        37f000:	ffffffff 	swinv	0x00ffffff
        37f004:	ffffffff 	swinv	0x00ffffff
        37f008:	ffffffff 	swinv	0x00ffffff
        37f00c:	ffffffff 	swinv	0x00ffffff
        37f010:	ffffffff 	swinv	0x00ffffff
        37f014:	ffffffff 	swinv	0x00ffffff
        37f018:	ffffffff 	swinv	0x00ffffff
        37f01c:	007dffff 	ldreqsh	pc, [sp], -#255
        37f020:	ffff0000 	swinv	0x00ff0000
        37f024:	ffffffff 	swinv	0x00ffffff
        37f028:	ffffffff 	swinv	0x00ffffff
        37f02c:	0029ffff 	streqd	pc, [r9], -pc
        37f030:	0103002c 	tsteq	r3, ip, lsr #32
        37f034:	ffffffff 	swinv	0x00ffffff
        37f038:	005d0108 	subeqs	r0, sp, r8, lsl #2
        37f03c:	ffffffff 	swinv	0x00ffffff
        37f040:	ffffffff 	swinv	0x00ffffff
        37f044:	ffffffff 	swinv	0x00ffffff
        37f048:	010f0110 	tsteq	pc, r0, lsl r1
        37f04c:	ffff0112 	swinv	0x00ff0112
        37f050:	003bffff 	ldreqsh	pc, [fp], -pc
        37f054:	ffffffff 	swinv	0x00ffffff
        37f058:	ffff0118 	swinv	0x00ff0118
        37f05c:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37f060:	ffff011c 	swinv	0x00ff011c
        37f064:	011dffff 	ldreqsh	pc, [sp, -pc]
        37f068:	011fffff 	ldreqsh	pc, [pc, -pc]
        37f06c:	ffffffff 	swinv	0x00ffffff
        37f070:	ffffffff 	swinv	0x00ffffff
        37f074:	0029ffff 	streqd	pc, [r9], -pc
        37f078:	007d002c 	rsbeqs	r0, sp, ip, lsr #32
        37f07c:	ffff012a 	swinv	0x00ff012a
        37f080:	012bffff 	streqd	pc, [fp, -pc]!
        37f084:	012d012e 	teqeq	sp, lr, lsr #2
        37f088:	012f0130 	teqeq	pc, r0, lsr r1
        37f08c:	ffff0000 	swinv	0x00ff0000
        37f090:	ffffffff 	swinv	0x00ffffff
        37f094:	005dffff 	ldreqsh	pc, [sp], -#255
        37f098:	003bffff 	ldreqsh	pc, [fp], -pc
        37f09c:	ffffffff 	swinv	0x00ffffff
        37f0a0:	ffffffff 	swinv	0x00ffffff
        37f0a4:	ffffffff 	swinv	0x00ffffff
        37f0a8:	ffffffff 	swinv	0x00ffffff
        37f0ac:	ffffffff 	swinv	0x00ffffff
        37f0b0:	ffffffff 	swinv	0x00ffffff
        37f0b4:	ffffffff 	swinv	0x00ffffff
        37f0b8:	0103ffff 	streqd	pc, [r3, -pc]
        37f0bc:	ffffffff 	swinv	0x00ffffff
        37f0c0:	ffff0108 	swinv	0x00ff0108
        37f0c4:	ffffffff 	swinv	0x00ffffff
        37f0c8:	ffffffff 	swinv	0x00ffffff
        37f0cc:	ffffffff 	swinv	0x00ffffff
        37f0d0:	010f0110 	tsteq	pc, r0, lsl r1
        37f0d4:	007d0112 	rsbeqs	r0, sp, r2, lsl r1
        37f0d8:	ffffffff 	swinv	0x00ffffff
        37f0dc:	005dffff 	ldreqsh	pc, [sp], -#255
        37f0e0:	00290118 	eoreq	r0, r9, r8, lsl r1
        37f0e4:	0119002c 	tsteq	r9, ip, lsr #32
        37f0e8:	ffff011c 	swinv	0x00ff011c
        37f0ec:	011dffff 	ldreqsh	pc, [sp, -pc]
        37f0f0:	011f0000 	tsteq	pc, r0
        37f0f4:	ffffffff 	swinv	0x00ffffff
        37f0f8:	ffffffff 	swinv	0x00ffffff
        37f0fc:	ffffffff 	swinv	0x00ffffff
        37f100:	ffffffff 	swinv	0x00ffffff
        37f104:	003b012a 	eoreqs	r0, fp, sl, lsr #2
        37f108:	012bffff 	streqd	pc, [fp, -pc]!
        37f10c:	012d012e 	teqeq	sp, lr, lsr #2
        37f110:	012f0130 	teqeq	pc, r0, lsr r1
        37f114:	ffffffff 	swinv	0x00ffffff
        37f118:	ffffffff 	swinv	0x00ffffff
        37f11c:	007dffff 	ldreqsh	pc, [sp], -#255
        37f120:	ffffffff 	swinv	0x00ffffff
        37f124:	ffffffff 	swinv	0x00ffffff
        37f128:	0103ffff 	streqd	pc, [r3, -pc]
        37f12c:	ffffffff 	swinv	0x00ffffff
        37f130:	ffff0108 	swinv	0x00ff0108
        37f134:	ffffffff 	swinv	0x00ffffff
        37f138:	ffffffff 	swinv	0x00ffffff
        37f13c:	ffffffff 	swinv	0x00ffffff
        37f140:	010f0110 	tsteq	pc, r0, lsl r1
        37f144:	00290112 	eoreq	r0, r9, r2, lsl r1
        37f148:	005d002c 	subeqs	r0, sp, ip, lsr #32
        37f14c:	ffff0000 	swinv	0x00ff0000
        37f150:	ffff0118 	swinv	0x00ff0118
        37f154:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37f158:	ffff011c 	swinv	0x00ff011c
        37f15c:	011dffff 	ldreqsh	pc, [sp, -pc]
        37f160:	011fffff 	ldreqsh	pc, [pc, -pc]
        37f164:	ffffffff 	swinv	0x00ffffff
        37f168:	003bffff 	ldreqsh	pc, [fp], -pc
        37f16c:	ffffffff 	swinv	0x00ffffff
        37f170:	ffffffff 	swinv	0x00ffffff
        37f174:	ffff012a 	swinv	0x00ff012a
        37f178:	012bffff 	streqd	pc, [fp, -pc]!
        37f17c:	012d012e 	teqeq	sp, lr, lsr #2
        37f180:	012f0130 	teqeq	pc, r0, lsr r1
        37f184:	0103ffff 	streqd	pc, [r3, -pc]
        37f188:	007dffff 	ldreqsh	pc, [sp], -#255
        37f18c:	ffff0108 	swinv	0x00ff0108
        37f190:	0000ffff 	streqd	pc, [r0], -pc
        37f194:	ffffffff 	swinv	0x00ffffff
        37f198:	ffffffff 	swinv	0x00ffffff
        37f19c:	010f0110 	tsteq	pc, r0, lsl r1
        37f1a0:	00290112 	eoreq	r0, r9, r2, lsl r1
        37f1a4:	ffff002c 	swinv	0x00ff002c
        37f1a8:	ffffffff 	swinv	0x00ffffff
        37f1ac:	005d0118 	subeqs	r0, sp, r8, lsl r1
        37f1b0:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37f1b4:	ffff011c 	swinv	0x00ff011c
        37f1b8:	011dffff 	ldreqsh	pc, [sp, -pc]
        37f1bc:	011fffff 	ldreqsh	pc, [pc, -pc]
        37f1c0:	ffffffff 	swinv	0x00ffffff
        37f1c4:	003bffff 	ldreqsh	pc, [fp], -pc
        37f1c8:	ffffffff 	swinv	0x00ffffff
        37f1cc:	ffffffff 	swinv	0x00ffffff
        37f1d0:	ffff012a 	swinv	0x00ff012a
        37f1d4:	012bffff 	streqd	pc, [fp, -pc]!
        37f1d8:	012d012e 	teqeq	sp, lr, lsr #2
        37f1dc:	012f0130 	teqeq	pc, r0, lsr r1
        37f1e0:	01030029 	tsteq	r3, r9, lsr #32
        37f1e4:	ffffffff 	swinv	0x00ffffff
        37f1e8:	002c0108 	eoreq	r0, ip, r8, lsl #2
        37f1ec:	007dffff 	ldreqsh	pc, [sp], -#255
        37f1f0:	ffffffff 	swinv	0x00ffffff
        37f1f4:	ffffffff 	swinv	0x00ffffff
        37f1f8:	010f0110 	tsteq	pc, r0, lsl r1
        37f1fc:	ffff0112 	swinv	0x00ff0112
        37f200:	ffffffff 	swinv	0x00ffffff
        37f204:	ffff003b 	swinv	0x00ff003b
        37f208:	005d0118 	subeqs	r0, sp, r8, lsl r1
        37f20c:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37f210:	0000011c 	andeq	r0, r0, ip, lsl r1
        37f214:	011dffff 	ldreqsh	pc, [sp, -pc]
        37f218:	011fffff 	ldreqsh	pc, [pc, -pc]
        37f21c:	ffffffff 	swinv	0x00ffffff
        37f220:	ffffffff 	swinv	0x00ffffff
        37f224:	ffffffff 	swinv	0x00ffffff
        37f228:	0103ffff 	streqd	pc, [r3, -pc]
        37f22c:	ffff012a 	swinv	0x00ff012a
        37f230:	012b0108 	teqeq	fp, r8, lsl #2
        37f234:	ffffffff 	swinv	0x00ffffff
        37f238:	ffffffff 	swinv	0x00ffffff
        37f23c:	ffffffff 	swinv	0x00ffffff
        37f240:	010f0110 	tsteq	pc, r0, lsl r1
        37f244:	ffff0112 	swinv	0x00ff0112
        37f248:	007d005d 	rsbeqs	r0, sp, sp, asr r0
        37f24c:	ffff0000 	swinv	0x00ff0000
        37f250:	ffff0118 	swinv	0x00ff0118
        37f254:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37f258:	ffff011c 	swinv	0x00ff011c
        37f25c:	011dffff 	ldreqsh	pc, [sp, -pc]
        37f260:	011f0029 	tsteq	pc, r9, lsr #32
        37f264:	ffffffff 	swinv	0x00ffffff
        37f268:	002cffff 	streqd	pc, [ip], -pc
        37f26c:	ffffffff 	swinv	0x00ffffff
        37f270:	ffffffff 	swinv	0x00ffffff
        37f274:	ffff012a 	swinv	0x00ff012a
        37f278:	012bffff 	streqd	pc, [fp, -pc]!
        37f27c:	ffff0000 	swinv	0x00ff0000
        37f280:	ffffffff 	swinv	0x00ffffff
        37f284:	ffff003b 	swinv	0x00ff003b
        37f288:	ffff007d 	swinv	0x00ff007d
        37f28c:	ffffffff 	swinv	0x00ffffff
        37f290:	ffffffff 	swinv	0x00ffffff
        37f294:	0103ffff 	streqd	pc, [r3, -pc]
        37f298:	ffffffff 	swinv	0x00ffffff
        37f29c:	ffff0108 	swinv	0x00ff0108
        37f2a0:	0029ffff 	streqd	pc, [r9], -pc
        37f2a4:	ffff002c 	swinv	0x00ff002c
        37f2a8:	ffffffff 	swinv	0x00ffffff
        37f2ac:	010f0110 	tsteq	pc, r0, lsl r1
        37f2b0:	ffff0112 	swinv	0x00ff0112
        37f2b4:	ffffffff 	swinv	0x00ffffff
        37f2b8:	ffffffff 	swinv	0x00ffffff
        37f2bc:	00000118 	andeq	r0, r0, r8, lsl r1
        37f2c0:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37f2c4:	003b011c 	eoreqs	r0, fp, ip, lsl r1
        37f2c8:	011d005d 	tsteq	sp, sp, asr r0
        37f2cc:	011fffff 	ldreqsh	pc, [pc, -pc]
        37f2d0:	0029ffff 	streqd	pc, [r9], -pc
        37f2d4:	ffff002c 	swinv	0x00ff002c
        37f2d8:	ffffffff 	swinv	0x00ffffff
        37f2dc:	ffffffff 	swinv	0x00ffffff
        37f2e0:	ffff012a 	swinv	0x00ff012a
        37f2e4:	012bffff 	streqd	pc, [fp, -pc]!
        37f2e8:	ffffffff 	swinv	0x00ffffff
        37f2ec:	0000ffff 	streqd	pc, [r0], -pc
        37f2f0:	ffffffff 	swinv	0x00ffffff
        37f2f4:	003bffff 	ldreqsh	pc, [fp], -pc
        37f2f8:	0103ffff 	streqd	pc, [r3, -pc]
        37f2fc:	ffffffff 	swinv	0x00ffffff
        37f300:	ffff0108 	swinv	0x00ff0108
        37f304:	ffffffff 	swinv	0x00ffffff
        37f308:	005d007d 	subeqs	r0, sp, sp, ror r0
        37f30c:	ffff0029 	swinv	0x00ff0029
        37f310:	010f0110 	tsteq	pc, r0, lsl r1
        37f314:	002c0112 	eoreq	r0, ip, r2, lsl r1
        37f318:	ffffffff 	swinv	0x00ffffff
        37f31c:	ffffffff 	swinv	0x00ffffff
        37f320:	ffff0118 	swinv	0x00ff0118
        37f324:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37f328:	ffff011c 	swinv	0x00ff011c
        37f32c:	011dffff 	ldreqsh	pc, [sp, -pc]
        37f330:	011f003b 	tsteq	pc, fp, lsr r0
        37f334:	ffffffff 	swinv	0x00ffffff
        37f338:	005dffff 	ldreqsh	pc, [sp], -#255
        37f33c:	00000029 	andeq	r0, r0, r9, lsr #32
        37f340:	ffffffff 	swinv	0x00ffffff
        37f344:	002cffff 	streqd	pc, [ip], -pc
        37f348:	007dffff 	ldreqsh	pc, [sp], -#255
        37f34c:	ffffffff 	swinv	0x00ffffff
        37f350:	ffffffff 	swinv	0x00ffffff
        37f354:	0103ffff 	streqd	pc, [r3, -pc]
        37f358:	ffffffff 	swinv	0x00ffffff
        37f35c:	ffff0108 	swinv	0x00ff0108
        37f360:	ffff003b 	swinv	0x00ff003b
        37f364:	ffffffff 	swinv	0x00ffffff
        37f368:	ffffffff 	swinv	0x00ffffff
        37f36c:	010f0110 	tsteq	pc, r0, lsl r1
        37f370:	ffff0112 	swinv	0x00ff0112
        37f374:	ffff005d 	swinv	0x00ff005d
        37f378:	007dffff 	ldreqsh	pc, [sp], -#255
        37f37c:	ffff0118 	swinv	0x00ff0118
        37f380:	01190000 	tsteq	r9, r0
        37f384:	ffff011c 	swinv	0x00ff011c
        37f388:	011dffff 	ldreqsh	pc, [sp, -pc]
        37f38c:	011f0029 	tsteq	pc, r9, lsr #32
        37f390:	ffffffff 	swinv	0x00ffffff
        37f394:	002c0103 	eoreq	r0, ip, r3, lsl #2
        37f398:	ffffffff 	swinv	0x00ffffff
        37f39c:	ffffffff 	swinv	0x00ffffff
        37f3a0:	0108ffff 	streqd	pc, [r8, -pc]
        37f3a4:	ffff005d 	swinv	0x00ff005d
        37f3a8:	ffffffff 	swinv	0x00ffffff
        37f3ac:	ffff010f 	swinv	0x00ff010f
        37f3b0:	0110003b 	tsteq	r0, fp, lsr r0
        37f3b4:	0112007d 	tsteq	r2, sp, ror r0
        37f3b8:	ffffffff 	swinv	0x00ffffff
        37f3bc:	ffffffff 	swinv	0x00ffffff
        37f3c0:	01180119 	tsteq	r8, r9, lsl r1
        37f3c4:	ffffffff 	swinv	0x00ffffff
        37f3c8:	011c011d 	tsteq	ip, sp, lsl r1
        37f3cc:	ffff011f 	swinv	0x00ff011f
        37f3d0:	0000ffff 	streqd	pc, [r0], -pc
        37f3d4:	0029ffff 	streqd	pc, [r9], -pc
        37f3d8:	ffff002c 	swinv	0x00ff002c
        37f3dc:	ffffffff 	swinv	0x00ffffff
        37f3e0:	ffffffff 	swinv	0x00ffffff
        37f3e4:	ffff007d 	swinv	0x00ff007d
        37f3e8:	ffffffff 	swinv	0x00ffffff
        37f3ec:	ffffffff 	swinv	0x00ffffff
        37f3f0:	ffffffff 	swinv	0x00ffffff
        37f3f4:	ffff005d 	swinv	0x00ff005d
        37f3f8:	003bffff 	ldreqsh	pc, [fp], -pc
        37f3fc:	ffffffff 	swinv	0x00ffffff
        37f400:	ffffffff 	swinv	0x00ffffff
        37f404:	ffffffff 	swinv	0x00ffffff
        37f408:	ffffffff 	swinv	0x00ffffff
        37f40c:	ffffffff 	swinv	0x00ffffff
        37f410:	ffffffff 	swinv	0x00ffffff
        37f414:	ffff0103 	swinv	0x00ff0103
        37f418:	ffffffff 	swinv	0x00ffffff
        37f41c:	ffff0000 	swinv	0x00ff0000
        37f420:	01080029 	tsteq	r8, r9, lsr #32
        37f424:	ffffffff 	swinv	0x00ffffff
        37f428:	002cffff 	streqd	pc, [ip], -pc
        37f42c:	ffff010f 	swinv	0x00ff010f
        37f430:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37f434:	0112007d 	tsteq	r2, sp, ror r0
        37f438:	ffffffff 	swinv	0x00ffffff
        37f43c:	005dffff 	ldreqsh	pc, [sp], -#255
        37f440:	01180119 	tsteq	r8, r9, lsl r1
        37f444:	ffff003b 	swinv	0x00ff003b
        37f448:	011c011d 	tsteq	ip, sp, lsl r1
        37f44c:	ffff011f 	swinv	0x00ff011f
        37f450:	ffffffff 	swinv	0x00ffffff
        37f454:	0103ffff 	streqd	pc, [r3, -pc]
        37f458:	ffff0000 	swinv	0x00ff0000
        37f45c:	ffff0108 	swinv	0x00ff0108
        37f460:	ffffffff 	swinv	0x00ffffff
        37f464:	ffffffff 	swinv	0x00ffffff
        37f468:	ffffffff 	swinv	0x00ffffff
        37f46c:	010f0110 	tsteq	pc, r0, lsl r1
        37f470:	00290112 	eoreq	r0, r9, r2, lsl r1
        37f474:	ffff002c 	swinv	0x00ff002c
        37f478:	ffffffff 	swinv	0x00ffffff
        37f47c:	007d0118 	rsbeqs	r0, sp, r8, lsl r1
        37f480:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37f484:	0103011c 	tsteq	r3, ip, lsl r1
        37f488:	011d005d 	tsteq	sp, sp, asr r0
        37f48c:	011f0108 	tsteq	pc, r8, lsl #2
        37f490:	0000ffff 	streqd	pc, [r0], -pc
        37f494:	003bffff 	ldreqsh	pc, [fp], -pc
        37f498:	ffffffff 	swinv	0x00ffffff
        37f49c:	010f0110 	tsteq	pc, r0, lsl r1
        37f4a0:	ffff0112 	swinv	0x00ff0112
        37f4a4:	ffffffff 	swinv	0x00ffffff
        37f4a8:	ffffffff 	swinv	0x00ffffff
        37f4ac:	00290118 	eoreq	r0, r9, r8, lsl r1
        37f4b0:	0119002c 	tsteq	r9, ip, lsr #32
        37f4b4:	ffff011c 	swinv	0x00ff011c
        37f4b8:	011dffff 	ldreqsh	pc, [sp, -pc]
        37f4bc:	011fffff 	ldreqsh	pc, [pc, -pc]
        37f4c0:	ffff0103 	swinv	0x00ff0103
        37f4c4:	ffffffff 	swinv	0x00ffffff
        37f4c8:	ffff007d 	swinv	0x00ff007d
        37f4cc:	0108ffff 	streqd	pc, [r8, -pc]
        37f4d0:	003bffff 	ldreqsh	pc, [fp], -pc
        37f4d4:	ffffffff 	swinv	0x00ffffff
        37f4d8:	005d010f 	subeqs	r0, sp, pc, lsl #2
        37f4dc:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37f4e0:	01120029 	tsteq	r2, r9, lsr #32
        37f4e4:	ffffffff 	swinv	0x00ffffff
        37f4e8:	002cffff 	streqd	pc, [ip], -pc
        37f4ec:	01180119 	tsteq	r8, r9, lsl r1
        37f4f0:	ffff0103 	swinv	0x00ff0103
        37f4f4:	011c011d 	tsteq	ip, sp, lsl r1
        37f4f8:	ffff011f 	swinv	0x00ff011f
        37f4fc:	0108ffff 	streqd	pc, [r8, -pc]
        37f500:	ffffffff 	swinv	0x00ffffff
        37f504:	ffff003b 	swinv	0x00ff003b
        37f508:	ffff010f 	swinv	0x00ff010f
        37f50c:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37f510:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37f514:	005dffff 	ldreqsh	pc, [sp], -#255
        37f518:	007dffff 	ldreqsh	pc, [sp], -#255
        37f51c:	01180119 	tsteq	r8, r9, lsl r1
        37f520:	0000ffff 	streqd	pc, [r0], -pc
        37f524:	011c011d 	tsteq	ip, sp, lsl r1
        37f528:	ffff011f 	swinv	0x00ff011f
        37f52c:	ffffffff 	swinv	0x00ffffff
        37f530:	ffffffff 	swinv	0x00ffffff
        37f534:	ffffffff 	swinv	0x00ffffff
        37f538:	ffffffff 	swinv	0x00ffffff
        37f53c:	ffffffff 	swinv	0x00ffffff
        37f540:	ffff0103 	swinv	0x00ff0103
        37f544:	ffffffff 	swinv	0x00ffffff
        37f548:	ffff005d 	swinv	0x00ff005d
        37f54c:	0108ffff 	streqd	pc, [r8, -pc]
        37f550:	ffffffff 	swinv	0x00ffffff
        37f554:	007dffff 	ldreqsh	pc, [sp], -#255
        37f558:	ffff010f 	swinv	0x00ff010f
        37f55c:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37f560:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37f564:	ffffffff 	swinv	0x00ffffff
        37f568:	ffffffff 	swinv	0x00ffffff
        37f56c:	01180119 	tsteq	r8, r9, lsl r1
        37f570:	ffff0029 	swinv	0x00ff0029
        37f574:	011c011d 	tsteq	ip, sp, lsl r1
        37f578:	002c011f 	eoreq	r0, ip, pc, lsl r1
        37f57c:	ffffffff 	swinv	0x00ffffff
        37f580:	ffffffff 	swinv	0x00ffffff
        37f584:	ffffffff 	swinv	0x00ffffff
        37f588:	0103007d 	tsteq	r3, sp, ror r0
        37f58c:	ffffffff 	swinv	0x00ffffff
        37f590:	ffff0108 	swinv	0x00ff0108
        37f594:	ffff003b 	swinv	0x00ff003b
        37f598:	ffffffff 	swinv	0x00ffffff
        37f59c:	ffffffff 	swinv	0x00ffffff
        37f5a0:	010f0110 	tsteq	pc, r0, lsl r1
        37f5a4:	ffff0112 	swinv	0x00ff0112
        37f5a8:	ffffffff 	swinv	0x00ffffff
        37f5ac:	ffffffff 	swinv	0x00ffffff
        37f5b0:	ffff0118 	swinv	0x00ff0118
        37f5b4:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37f5b8:	ffff011c 	swinv	0x00ff011c
        37f5bc:	011dffff 	ldreqsh	pc, [sp, -pc]
        37f5c0:	011fffff 	ldreqsh	pc, [pc, -pc]
        37f5c4:	ffffffff 	swinv	0x00ffffff
        37f5c8:	ffffffff 	swinv	0x00ffffff
        37f5cc:	ffffffff 	swinv	0x00ffffff
        37f5d0:	ffffffff 	swinv	0x00ffffff
        37f5d4:	ffff0103 	swinv	0x00ff0103
        37f5d8:	ffff005d 	swinv	0x00ff005d
        37f5dc:	ffffffff 	swinv	0x00ffffff
        37f5e0:	0108ffff 	streqd	pc, [r8, -pc]
        37f5e4:	ffffffff 	swinv	0x00ffffff
        37f5e8:	ffffffff 	swinv	0x00ffffff
        37f5ec:	ffff010f 	swinv	0x00ff010f
        37f5f0:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37f5f4:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37f5f8:	ffffffff 	swinv	0x00ffffff
        37f5fc:	ffffffff 	swinv	0x00ffffff
        37f600:	01180119 	tsteq	r8, r9, lsl r1
        37f604:	ffffffff 	swinv	0x00ffffff
        37f608:	011c011d 	tsteq	ip, sp, lsl r1
        37f60c:	ffff011f 	swinv	0x00ff011f
        37f610:	ffffffff 	swinv	0x00ffffff
        37f614:	ffffffff 	swinv	0x00ffffff
        37f618:	0026007d 	eoreq	r0, r6, sp, ror r0
        37f61c:	ffffffff 	swinv	0x00ffffff
        37f620:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37f624:	0103002d 	tsteq	r3, sp, lsr #32
        37f628:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37f62c:	ffff0108 	swinv	0x00ff0108
        37f630:	ffffffff 	swinv	0x00ffffff
        37f634:	ffffffff 	swinv	0x00ffffff
        37f638:	ffffffff 	swinv	0x00ffffff
        37f63c:	010f0110 	tsteq	pc, r0, lsl r1
        37f640:	003a0112 	eoreqs	r0, sl, r2, lsl r1
        37f644:	003cffff 	ldreqsh	pc, [ip], -pc
        37f648:	003effff 	ldreqsh	pc, [lr], -pc
        37f64c:	ffff0118 	swinv	0x00ff0118
        37f650:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37f654:	ffff011c 	swinv	0x00ff011c
        37f658:	011dffff 	ldreqsh	pc, [sp, -pc]
        37f65c:	011fffff 	ldreqsh	pc, [pc, -pc]
        37f660:	0103ffff 	streqd	pc, [r3, -pc]
        37f664:	ffffffff 	swinv	0x00ffffff
        37f668:	ffff0108 	swinv	0x00ff0108
        37f66c:	ffffffff 	swinv	0x00ffffff
        37f670:	ffffffff 	swinv	0x00ffffff
        37f674:	ffffffff 	swinv	0x00ffffff
        37f678:	010f0110 	tsteq	pc, r0, lsl r1
        37f67c:	ffff0112 	swinv	0x00ff0112
        37f680:	ffff005b 	swinv	0x00ff005b
        37f684:	ffffffff 	swinv	0x00ffffff
        37f688:	ffff0118 	swinv	0x00ff0118
        37f68c:	0119ffff 	ldreqsh	pc, [r9, -pc]
        37f690:	ffff011c 	swinv	0x00ff011c
        37f694:	011d0103 	tsteq	sp, r3, lsl #2
        37f698:	011fffff 	ldreqsh	pc, [pc, -pc]
        37f69c:	ffffffff 	swinv	0x00ffffff
        37f6a0:	0108ffff 	streqd	pc, [r8, -pc]
        37f6a4:	ffffffff 	swinv	0x00ffffff
        37f6a8:	ffffffff 	swinv	0x00ffffff
        37f6ac:	ffff010f 	swinv	0x00ff010f
        37f6b0:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37f6b4:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37f6b8:	ffffffff 	swinv	0x00ffffff
        37f6bc:	ffffffff 	swinv	0x00ffffff
        37f6c0:	01180119 	tsteq	r8, r9, lsl r1
        37f6c4:	ffffffff 	swinv	0x00ffffff
        37f6c8:	011c011d 	tsteq	ip, sp, lsl r1
        37f6cc:	0026011f 	eoreq	r0, r6, pc, lsl r1
        37f6d0:	ffffffff 	swinv	0x00ffffff
        37f6d4:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37f6d8:	ffff002d 	swinv	0x00ff002d
        37f6dc:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37f6e0:	ffffffff 	swinv	0x00ffffff
        37f6e4:	ffffffff 	swinv	0x00ffffff
        37f6e8:	ffffffff 	swinv	0x00ffffff
        37f6ec:	ffffffff 	swinv	0x00ffffff
        37f6f0:	ffffffff 	swinv	0x00ffffff
        37f6f4:	003affff 	ldreqsh	pc, [sl], -pc
        37f6f8:	003cffff 	ldreqsh	pc, [ip], -pc
        37f6fc:	003effff 	ldreqsh	pc, [lr], -pc
        37f700:	ffffffff 	swinv	0x00ffffff
        37f704:	ffffffff 	swinv	0x00ffffff
        37f708:	ffffffff 	swinv	0x00ffffff
        37f70c:	0026ffff 	streqd	pc, [r6], -pc
        37f710:	ffffffff 	swinv	0x00ffffff
        37f714:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37f718:	ffff002d 	swinv	0x00ff002d
        37f71c:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37f720:	ffffffff 	swinv	0x00ffffff
        37f724:	ffff0103 	swinv	0x00ff0103
        37f728:	ffffffff 	swinv	0x00ffffff
        37f72c:	ffffffff 	swinv	0x00ffffff
        37f730:	0108ffff 	streqd	pc, [r8, -pc]
        37f734:	003a005b 	eoreqs	r0, sl, fp, asr r0
        37f738:	003cffff 	ldreqsh	pc, [ip], -pc
        37f73c:	003e010f 	eoreqs	r0, lr, pc, lsl #2
        37f740:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37f744:	0112ffff 	ldreqsh	pc, [r2, -pc]
        37f748:	ffffffff 	swinv	0x00ffffff
        37f74c:	ffffffff 	swinv	0x00ffffff
        37f750:	01180119 	tsteq	r8, r9, lsl r1
        37f754:	ffffffff 	swinv	0x00ffffff
        37f758:	011c011d 	tsteq	ip, sp, lsl r1
        37f75c:	0026011f 	eoreq	r0, r6, pc, lsl r1
        37f760:	ffffffff 	swinv	0x00ffffff
        37f764:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37f768:	ffff002d 	swinv	0x00ff002d
        37f76c:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37f770:	ffffffff 	swinv	0x00ffffff
        37f774:	ffff005b 	swinv	0x00ff005b
        37f778:	ffffffff 	swinv	0x00ffffff
        37f77c:	ffffffff 	swinv	0x00ffffff
        37f780:	ffffffff 	swinv	0x00ffffff
        37f784:	003affff 	ldreqsh	pc, [sl], -pc
        37f788:	003cffff 	ldreqsh	pc, [ip], -pc
        37f78c:	003effff 	ldreqsh	pc, [lr], -pc
        37f790:	0026ffff 	streqd	pc, [r6], -pc
        37f794:	ffffffff 	swinv	0x00ffffff
        37f798:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37f79c:	ffff002d 	swinv	0x00ff002d
        37f7a0:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37f7a4:	ffffffff 	swinv	0x00ffffff
        37f7a8:	ffffffff 	swinv	0x00ffffff
        37f7ac:	ffffffff 	swinv	0x00ffffff
        37f7b0:	ffffffff 	swinv	0x00ffffff
        37f7b4:	ffffffff 	swinv	0x00ffffff
        37f7b8:	003affff 	ldreqsh	pc, [sl], -pc
        37f7bc:	003cffff 	ldreqsh	pc, [ip], -pc
        37f7c0:	003effff 	ldreqsh	pc, [lr], -pc
        37f7c4:	ffff005b 	swinv	0x00ff005b
        37f7c8:	ffffffff 	swinv	0x00ffffff
        37f7cc:	ffffffff 	swinv	0x00ffffff
        37f7d0:	00260103 	eoreq	r0, r6, r3, lsl #2
        37f7d4:	ffff0029 	swinv	0x00ff0029
        37f7d8:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37f7dc:	ffff002d 	swinv	0x00ff002d
        37f7e0:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37f7e4:	ffffffff 	swinv	0x00ffffff
        37f7e8:	ffffffff 	swinv	0x00ffffff
        37f7ec:	ffffffff 	swinv	0x00ffffff
        37f7f0:	ffffffff 	swinv	0x00ffffff
        37f7f4:	ffffffff 	swinv	0x00ffffff
        37f7f8:	003a005b 	eoreqs	r0, sl, fp, asr r0
        37f7fc:	003cffff 	ldreqsh	pc, [ip], -pc
        37f800:	003effff 	ldreqsh	pc, [lr], -pc
        37f804:	ffff011d 	swinv	0x00ff011d
        37f808:	ffffffff 	swinv	0x00ffffff
        37f80c:	ffffffff 	swinv	0x00ffffff
        37f810:	ffffffff 	swinv	0x00ffffff
        37f814:	ffffffff 	swinv	0x00ffffff
        37f818:	ffffffff 	swinv	0x00ffffff
        37f81c:	ffffffff 	swinv	0x00ffffff
        37f820:	012a012b 	teqeq	sl, fp, lsr #2
        37f824:	ffff012d 	swinv	0x00ff012d
        37f828:	012e012f 	teqeq	lr, pc, lsr #2
        37f82c:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37f830:	01320133 	teqeq	r2, r3, lsr r1
        37f834:	01340135 	teqeq	r4, r5, lsr r1
        37f838:	0136005b 	teqeq	r6, fp, asr r0
        37f83c:	01380026 	teqeq	r8, r6, lsr #32
        37f840:	ffffffff 	swinv	0x00ffffff
        37f844:	ffff002a 	swinv	0x00ff002a
        37f848:	002bffff 	streqd	pc, [fp], -pc
        37f84c:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37f850:	002fffff 	streqd	pc, [pc], -pc
        37f854:	ffffffff 	swinv	0x00ffffff
        37f858:	ffffffff 	swinv	0x00ffffff
        37f85c:	ffffffff 	swinv	0x00ffffff
        37f860:	ffffffff 	swinv	0x00ffffff
        37f864:	ffff003a 	swinv	0x00ff003a
        37f868:	0026003c 	eoreq	r0, r6, ip, lsr r0
        37f86c:	ffff003e 	swinv	0x00ff003e
        37f870:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37f874:	ffff002d 	swinv	0x00ff002d
        37f878:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37f87c:	ffffffff 	swinv	0x00ffffff
        37f880:	ffffffff 	swinv	0x00ffffff
        37f884:	ffffffff 	swinv	0x00ffffff
        37f888:	ffffffff 	swinv	0x00ffffff
        37f88c:	ffffffff 	swinv	0x00ffffff
        37f890:	003affff 	ldreqsh	pc, [sl], -pc
        37f894:	003cffff 	ldreqsh	pc, [ip], -pc
        37f898:	003effff 	ldreqsh	pc, [lr], -pc
        37f89c:	ffffffff 	swinv	0x00ffffff
        37f8a0:	ffffffff 	swinv	0x00ffffff
        37f8a4:	ffffffff 	swinv	0x00ffffff
        37f8a8:	005bffff 	ldreqsh	pc, [fp], -#255
        37f8ac:	005dffff 	ldreqsh	pc, [sp], -#255
        37f8b0:	ffff0119 	swinv	0x00ff0119
        37f8b4:	ffffffff 	swinv	0x00ffffff
        37f8b8:	ffff011d 	swinv	0x00ff011d
        37f8bc:	ffffffff 	swinv	0x00ffffff
        37f8c0:	ffffffff 	swinv	0x00ffffff
        37f8c4:	ffffffff 	swinv	0x00ffffff
        37f8c8:	ffffffff 	swinv	0x00ffffff
        37f8cc:	ffffffff 	swinv	0x00ffffff
        37f8d0:	ffff005b 	swinv	0x00ff005b
        37f8d4:	012a012b 	teqeq	sl, fp, lsr #2
        37f8d8:	ffff012d 	swinv	0x00ff012d
        37f8dc:	012e012f 	teqeq	lr, pc, lsr #2
        37f8e0:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37f8e4:	01320133 	teqeq	r2, r3, lsr r1
        37f8e8:	01340135 	teqeq	r4, r5, lsr r1
        37f8ec:	0136ffff 	ldreqsh	pc, [r6, -pc]!
        37f8f0:	0138ffff 	ldreqsh	pc, [r8, -pc]!
        37f8f4:	ffffffff 	swinv	0x00ffffff
        37f8f8:	ffff011d 	swinv	0x00ff011d
        37f8fc:	ffffffff 	swinv	0x00ffffff
        37f900:	ffffffff 	swinv	0x00ffffff
        37f904:	ffffffff 	swinv	0x00ffffff
        37f908:	ffffffff 	swinv	0x00ffffff
        37f90c:	ffffffff 	swinv	0x00ffffff
        37f910:	ffffffff 	swinv	0x00ffffff
        37f914:	012a012b 	teqeq	sl, fp, lsr #2
        37f918:	ffff012d 	swinv	0x00ff012d
        37f91c:	012e012f 	teqeq	lr, pc, lsr #2
        37f920:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37f924:	01320133 	teqeq	r2, r3, lsr r1
        37f928:	01340135 	teqeq	r4, r5, lsr r1
        37f92c:	0136010f 	teqeq	r6, pc, lsl #2
        37f930:	01380026 	teqeq	r8, r6, lsr #32
        37f934:	ffffffff 	swinv	0x00ffffff
        37f938:	ffff002a 	swinv	0x00ff002a
        37f93c:	002bffff 	streqd	pc, [fp], -pc
        37f940:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37f944:	002fffff 	streqd	pc, [pc], -pc
        37f948:	ffffffff 	swinv	0x00ffffff
        37f94c:	ffffffff 	swinv	0x00ffffff
        37f950:	ffffffff 	swinv	0x00ffffff
        37f954:	ffffffff 	swinv	0x00ffffff
        37f958:	ffff003a 	swinv	0x00ff003a
        37f95c:	ffff003c 	swinv	0x00ff003c
        37f960:	ffff003e 	swinv	0x00ff003e
        37f964:	012a012b 	teqeq	sl, fp, lsr #2
        37f968:	ffff012d 	swinv	0x00ff012d
        37f96c:	012e012f 	teqeq	lr, pc, lsr #2
        37f970:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37f974:	01320133 	teqeq	r2, r3, lsr r1
        37f978:	01340135 	teqeq	r4, r5, lsr r1
        37f97c:	0136ffff 	ldreqsh	pc, [r6, -pc]!
        37f980:	0138011f 	teqeq	r8, pc, lsl r1
        37f984:	ffffffff 	swinv	0x00ffffff
        37f988:	ffffffff 	swinv	0x00ffffff
        37f98c:	ffffffff 	swinv	0x00ffffff
        37f990:	ffffffff 	swinv	0x00ffffff
        37f994:	ffffffff 	swinv	0x00ffffff
        37f998:	012a012b 	teqeq	sl, fp, lsr #2
        37f99c:	005b012d 	subeqs	r0, fp, sp, lsr #2
        37f9a0:	012e012f 	teqeq	lr, pc, lsr #2
        37f9a4:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37f9a8:	01320133 	teqeq	r2, r3, lsr r1
        37f9ac:	01340135 	teqeq	r4, r5, lsr r1
        37f9b0:	0136ffff 	ldreqsh	pc, [r6, -pc]!
        37f9b4:	0138ffff 	ldreqsh	pc, [r8, -pc]!
        37f9b8:	ffffffff 	swinv	0x00ffffff
        37f9bc:	ffffffff 	swinv	0x00ffffff
        37f9c0:	00270028 	eoreq	r0, r7, r8, lsr #32
        37f9c4:	ffffffff 	swinv	0x00ffffff
        37f9c8:	ffffffff 	swinv	0x00ffffff
        37f9cc:	002dffff 	streqd	pc, [sp], -pc
        37f9d0:	ffffffff 	swinv	0x00ffffff
        37f9d4:	ffffffff 	swinv	0x00ffffff
        37f9d8:	012a012b 	teqeq	sl, fp, lsr #2
        37f9dc:	ffff012d 	swinv	0x00ff012d
        37f9e0:	012e012f 	teqeq	lr, pc, lsr #2
        37f9e4:	0130003a 	teqeq	r0, sl, lsr r0
        37f9e8:	01320133 	teqeq	r2, r3, lsr r1
        37f9ec:	01340135 	teqeq	r4, r5, lsr r1
        37f9f0:	0136ffff 	ldreqsh	pc, [r6, -pc]!
        37f9f4:	01380026 	teqeq	r8, r6, lsr #32
        37f9f8:	ffffffff 	swinv	0x00ffffff
        37f9fc:	0029002a 	eoreq	r0, r9, sl, lsr #32
        37fa00:	002bffff 	streqd	pc, [fp], -pc
        37fa04:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37fa08:	002fffff 	streqd	pc, [pc], -pc
        37fa0c:	ffffffff 	swinv	0x00ffffff
        37fa10:	ffffffff 	swinv	0x00ffffff
        37fa14:	ffffffff 	swinv	0x00ffffff
        37fa18:	ffffffff 	swinv	0x00ffffff
        37fa1c:	ffff003a 	swinv	0x00ff003a
        37fa20:	ffff003c 	swinv	0x00ff003c
        37fa24:	ffff003e 	swinv	0x00ff003e
        37fa28:	005bffff 	ldreqsh	pc, [fp], -#255
        37fa2c:	ffffffff 	swinv	0x00ffffff
        37fa30:	ffffffff 	swinv	0x00ffffff
        37fa34:	ffffffff 	swinv	0x00ffffff
        37fa38:	ffffffff 	swinv	0x00ffffff
        37fa3c:	0110ffff 	ldreqsh	pc, [r0, -pc]
        37fa40:	ffffffff 	swinv	0x00ffffff
        37fa44:	ffff012a 	swinv	0x00ff012a
        37fa48:	012bffff 	streqd	pc, [fp, -pc]!
        37fa4c:	012d012e 	teqeq	sp, lr, lsr #2
        37fa50:	012f0130 	teqeq	pc, r0, lsr r1
        37fa54:	ffff0132 	swinv	0x00ff0132
        37fa58:	01330134 	teqeq	r3, r4, lsr r1
        37fa5c:	01350136 	teqeq	r5, r6, lsr r1
        37fa60:	005b0138 	subeqs	r0, fp, r8, lsr r1
        37fa64:	ffffffff 	swinv	0x00ffffff
        37fa68:	007bffff 	ldreqsh	pc, [fp], -#255
        37fa6c:	ffffffff 	swinv	0x00ffffff
        37fa70:	012a012b 	teqeq	sl, fp, lsr #2
        37fa74:	ffff012d 	swinv	0x00ff012d
        37fa78:	012e012f 	teqeq	lr, pc, lsr #2
        37fa7c:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37fa80:	01320133 	teqeq	r2, r3, lsr r1
        37fa84:	01340135 	teqeq	r4, r5, lsr r1
        37fa88:	01360026 	teqeq	r6, r6, lsr #32
        37fa8c:	0138ffff 	ldreqsh	pc, [r8, -pc]!
        37fa90:	ffff002a 	swinv	0x00ff002a
        37fa94:	002bffff 	streqd	pc, [fp], -pc
        37fa98:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37fa9c:	002fffff 	streqd	pc, [pc], -pc
        37faa0:	ffffffff 	swinv	0x00ffffff
        37faa4:	ffffffff 	swinv	0x00ffffff
        37faa8:	ffffffff 	swinv	0x00ffffff
        37faac:	ffffffff 	swinv	0x00ffffff
        37fab0:	ffff003a 	swinv	0x00ff003a
        37fab4:	0026003c 	eoreq	r0, r6, ip, lsr r0
        37fab8:	ffff003e 	swinv	0x00ff003e
        37fabc:	002a002b 	eoreq	r0, sl, fp, lsr #32
        37fac0:	ffff002d 	swinv	0x00ff002d
        37fac4:	002e002f 	eoreq	r0, lr, pc, lsr #32
        37fac8:	ffffffff 	swinv	0x00ffffff
        37facc:	ffffffff 	swinv	0x00ffffff
        37fad0:	ffffffff 	swinv	0x00ffffff
        37fad4:	ffffffff 	swinv	0x00ffffff
        37fad8:	ffffffff 	swinv	0x00ffffff
        37fadc:	003a0026 	eoreqs	r0, sl, r6, lsr #32
        37fae0:	003cffff 	ldreqsh	pc, [ip], -pc
        37fae4:	003e002a 	eoreqs	r0, lr, sl, lsr #32
        37fae8:	002bffff 	streqd	pc, [fp], -pc
        37faec:	002d002e 	eoreq	r0, sp, lr, lsr #32
        37faf0:	002fffff 	streqd	pc, [pc], -pc
        37faf4:	005bffff 	ldreqsh	pc, [fp], -#255
        37faf8:	ffffffff 	swinv	0x00ffffff
        37fafc:	ffffffff 	swinv	0x00ffffff
        37fb00:	ffffffff 	swinv	0x00ffffff
        37fb04:	ffff003a 	swinv	0x00ff003a
        37fb08:	ffff003c 	swinv	0x00ff003c
        37fb0c:	ffff003e 	swinv	0x00ff003e
        37fb10:	ffffffff 	swinv	0x00ffffff
        37fb14:	ffff0118 	swinv	0x00ff0118
        37fb18:	ffffffff 	swinv	0x00ffffff
        37fb1c:	ffff005b 	swinv	0x00ff005b
        37fb20:	ffffffff 	swinv	0x00ffffff
        37fb24:	ffffffff 	swinv	0x00ffffff
        37fb28:	ffffffff 	swinv	0x00ffffff
        37fb2c:	ffffffff 	swinv	0x00ffffff
        37fb30:	ffffffff 	swinv	0x00ffffff
        37fb34:	ffffffff 	swinv	0x00ffffff
        37fb38:	ffff012a 	swinv	0x00ff012a
        37fb3c:	012bffff 	streqd	pc, [fp, -pc]!
        37fb40:	012d012e 	teqeq	sp, lr, lsr #2
        37fb44:	012f0130 	teqeq	pc, r0, lsr r1
        37fb48:	005b0132 	subeqs	r0, fp, r2, lsr r1
        37fb4c:	01330134 	teqeq	r3, r4, lsr r1
        37fb50:	01350136 	teqeq	r5, r6, lsr r1
        37fb54:	ffff0138 	swinv	0x00ff0138
        37fb58:	ffffffff 	swinv	0x00ffffff
        37fb5c:	ffffffff 	swinv	0x00ffffff
        37fb60:	ffffffff 	swinv	0x00ffffff
        37fb64:	00270028 	eoreq	r0, r7, r8, lsr #32
        37fb68:	ffffffff 	swinv	0x00ffffff
        37fb6c:	ffffffff 	swinv	0x00ffffff
        37fb70:	002dffff 	streqd	pc, [sp], -pc
        37fb74:	ffff0102 	swinv	0x00ff0102
        37fb78:	01030104 	tsteq	r3, r4, lsl #2
        37fb7c:	01050106 	tsteq	r5, r6, lsl #2
        37fb80:	0107ffff 	streqd	pc, [r7, -pc]
        37fb84:	0109ffff 	streqd	pc, [r9, -pc]
        37fb88:	010b003a 	tsteq	fp, sl, lsr r0
        37fb8c:	010d010e 	tsteq	sp, lr, lsl #2
        37fb90:	ffffffff 	swinv	0x00ffffff
        37fb94:	0111ffff 	ldreqsh	pc, [r1, -pc]
        37fb98:	ffffffff 	swinv	0x00ffffff
        37fb9c:	01150116 	tsteq	r5, r6, lsl r1
        37fba0:	0117ffff 	ldreqsh	pc, [r7, -pc]
        37fba4:	ffff011a 	swinv	0x00ff011a
        37fba8:	011bffff 	ldreqsh	pc, [fp, -pc]
        37fbac:	ffff011e 	swinv	0x00ff011e
        37fbb0:	ffffffff 	swinv	0x00ffffff
        37fbb4:	0121ffff 	streqd	pc, [r1, -pc]!
        37fbb8:	ffff0124 	swinv	0x00ff0124
        37fbbc:	01250126 	teqeq	r5, r6, lsr #2
        37fbc0:	0127ffff 	streqd	pc, [r7, -pc]!
        37fbc4:	00270028 	eoreq	r0, r7, r8, lsr #32
        37fbc8:	ffff012c 	swinv	0x00ff012c
        37fbcc:	005bffff 	ldreqsh	pc, [fp], -#255
        37fbd0:	002dffff 	streqd	pc, [sp], -pc
        37fbd4:	ffffffff 	swinv	0x00ffffff
        37fbd8:	ffffffff 	swinv	0x00ffffff
        37fbdc:	ffffffff 	swinv	0x00ffffff
        37fbe0:	ffff0138 	swinv	0x00ff0138
        37fbe4:	ffffffff 	swinv	0x00ffffff
        37fbe8:	ffff003a 	swinv	0x00ff003a
        37fbec:	ffffffff 	swinv	0x00ffffff
        37fbf0:	ffffffff 	swinv	0x00ffffff
        37fbf4:	ffffffff 	swinv	0x00ffffff
        37fbf8:	ffffffff 	swinv	0x00ffffff
        37fbfc:	ffff012a 	swinv	0x00ff012a
        37fc00:	012bffff 	streqd	pc, [fp, -pc]!
        37fc04:	012d012e 	teqeq	sp, lr, lsr #2
        37fc08:	012f0130 	teqeq	pc, r0, lsr r1
        37fc0c:	007b0132 	rsbeqs	r0, fp, r2, lsr r1
        37fc10:	01330134 	teqeq	r3, r4, lsr r1
        37fc14:	01350136 	teqeq	r5, r6, lsr r1
        37fc18:	ffff0138 	swinv	0x00ff0138
        37fc1c:	ffffffff 	swinv	0x00ffffff
        37fc20:	ffffffff 	swinv	0x00ffffff
        37fc24:	ffffffff 	swinv	0x00ffffff
        37fc28:	ffffffff 	swinv	0x00ffffff
        37fc2c:	005bffff 	ldreqsh	pc, [fp], -#255
        37fc30:	ffffffff 	swinv	0x00ffffff
        37fc34:	ffffffff 	swinv	0x00ffffff
        37fc38:	ffffffff 	swinv	0x00ffffff
        37fc3c:	ffffffff 	swinv	0x00ffffff
        37fc40:	ffffffff 	swinv	0x00ffffff
        37fc44:	ffffffff 	swinv	0x00ffffff
        37fc48:	ffffffff 	swinv	0x00ffffff
        37fc4c:	ffffffff 	swinv	0x00ffffff
        37fc50:	ffffffff 	swinv	0x00ffffff
        37fc54:	ffffffff 	swinv	0x00ffffff
        37fc58:	ffffffff 	swinv	0x00ffffff
        37fc5c:	ffffffff 	swinv	0x00ffffff
        37fc60:	ffffffff 	swinv	0x00ffffff
        37fc64:	ffffffff 	swinv	0x00ffffff
        37fc68:	ffffffff 	swinv	0x00ffffff
        37fc6c:	007bffff 	ldreqsh	pc, [fp], -#255
        37fc70:	ffffffff 	swinv	0x00ffffff
        37fc74:	ffffffff 	swinv	0x00ffffff
        37fc78:	011dffff 	ldreqsh	pc, [sp, -pc]
        37fc7c:	ffffffff 	swinv	0x00ffffff
        37fc80:	ffffffff 	swinv	0x00ffffff
        37fc84:	ffffffff 	swinv	0x00ffffff
        37fc88:	ffffffff 	swinv	0x00ffffff
        37fc8c:	ffffffff 	swinv	0x00ffffff
        37fc90:	ffff012a 	swinv	0x00ff012a
        37fc94:	012bffff 	streqd	pc, [fp, -pc]!
        37fc98:	012d012e 	teqeq	sp, lr, lsr #2
        37fc9c:	012f0130 	teqeq	pc, r0, lsr r1
        37fca0:	ffff0132 	swinv	0x00ff0132
        37fca4:	01330134 	teqeq	r3, r4, lsr r1
        37fca8:	01350136 	teqeq	r5, r6, lsr r1
        37fcac:	ffff0138 	swinv	0x00ff0138
        37fcb0:	ffffffff 	swinv	0x00ffffff
        37fcb4:	ffffffff 	swinv	0x00ffffff
        37fcb8:	ffffffff 	swinv	0x00ffffff
        37fcbc:	012a012b 	teqeq	sl, fp, lsr #2
        37fcc0:	ffff012d 	swinv	0x00ff012d
        37fcc4:	012e012f 	teqeq	lr, pc, lsr #2
        37fcc8:	0130ffff 	ldreqsh	pc, [r0, -pc]!
        37fccc:	01320133 	teqeq	r2, r3, lsr r1
        37fcd0:	01340135 	teqeq	r4, r5, lsr r1
        37fcd4:	0136ffff 	ldreqsh	pc, [r6, -pc]!
        37fcd8:	0138ffff 	ldreqsh	pc, [r8, -pc]!
        37fcdc:	ffffffff 	swinv	0x00ffffff
        37fce0:	ffffffff 	swinv	0x00ffffff
        37fce4:	ffffffff 	swinv	0x00ffffff
        37fce8:	ffffffff 	swinv	0x00ffffff
        37fcec:	012d012e 	teqeq	sp, lr, lsr #2
        37fcf0:	012f0130 	teqeq	pc, r0, lsr r1
        37fcf4:	ffff0132 	swinv	0x00ff0132
        37fcf8:	01330134 	teqeq	r3, r4, lsr r1
        37fcfc:	01350136 	teqeq	r5, r6, lsr r1
        37fd00:	ffff0138 	swinv	0x00ff0138
        37fd04:	ffffffff 	swinv	0x00ffffff
        37fd08:	ffffffff 	swinv	0x00ffffff
        37fd0c:	ffffffff 	swinv	0x00ffffff
        37fd10:	ffffffff 	swinv	0x00ffffff
        37fd14:	ffffffff 	swinv	0x00ffffff
        37fd18:	ffff0102 	swinv	0x00ff0102
        37fd1c:	01030104 	tsteq	r3, r4, lsl #2
        37fd20:	01050106 	tsteq	r5, r6, lsl #2
        37fd24:	0107ffff 	streqd	pc, [r7, -pc]
        37fd28:	0109ffff 	streqd	pc, [r9, -pc]
        37fd2c:	ffffffff 	swinv	0x00ffffff
        37fd30:	010d010e 	tsteq	sp, lr, lsl #2
        37fd34:	ffffffff 	swinv	0x00ffffff
        37fd38:	0111ffff 	ldreqsh	pc, [r1, -pc]
        37fd3c:	ffffffff 	swinv	0x00ffffff
        37fd40:	01150116 	tsteq	r5, r6, lsl r1
        37fd44:	0117ffff 	ldreqsh	pc, [r7, -pc]
        37fd48:	ffff011a 	swinv	0x00ff011a
        37fd4c:	011bffff 	ldreqsh	pc, [fp, -pc]
        37fd50:	ffff011e 	swinv	0x00ff011e
        37fd54:	ffffffff 	swinv	0x00ffffff
        37fd58:	0121ffff 	streqd	pc, [r1, -pc]!
        37fd5c:	ffff0124 	swinv	0x00ff0124
        37fd60:	01250126 	teqeq	r5, r6, lsr #2
        37fd64:	0127ffff 	streqd	pc, [r7, -pc]!
        37fd68:	ffffffff 	swinv	0x00ffffff
        37fd6c:	ffff012c 	swinv	0x00ff012c
        37fd70:	ffffffff 	swinv	0x00ffffff
        37fd74:	ffffffff 	swinv	0x00ffffff
        37fd78:	ffff0102 	swinv	0x00ff0102
        37fd7c:	01030104 	tsteq	r3, r4, lsl #2
        37fd80:	01050106 	tsteq	r5, r6, lsl #2
        37fd84:	01070138 	tsteq	r7, r8, lsr r1
        37fd88:	0109ffff 	streqd	pc, [r9, -pc]
        37fd8c:	ffffffff 	swinv	0x00ffffff
        37fd90:	010d010e 	tsteq	sp, lr, lsl #2
        37fd94:	ffffffff 	swinv	0x00ffffff
        37fd98:	0111ffff 	ldreqsh	pc, [r1, -pc]
        37fd9c:	ffffffff 	swinv	0x00ffffff
        37fda0:	01150116 	tsteq	r5, r6, lsl r1
        37fda4:	0117ffff 	ldreqsh	pc, [r7, -pc]
        37fda8:	ffff011a 	swinv	0x00ff011a
        37fdac:	011bffff 	ldreqsh	pc, [fp, -pc]
        37fdb0:	ffff011e 	swinv	0x00ff011e
        37fdb4:	ffffffff 	swinv	0x00ffffff
        37fdb8:	0121ffff 	streqd	pc, [r1, -pc]!
        37fdbc:	ffff0124 	swinv	0x00ff0124
        37fdc0:	01250126 	teqeq	r5, r6, lsr #2
        37fdc4:	0127ffff 	streqd	pc, [r7, -pc]!
        37fdc8:	ffffffff 	swinv	0x00ffffff
        37fdcc:	ffff012c 	swinv	0x00ff012c
        37fdd0:	ffffffff 	swinv	0x00ffffff
        37fdd4:	ffffffff 	swinv	0x00ffffff
        37fdd8:	ffffffff 	swinv	0x00ffffff
        37fddc:	ffffffff 	swinv	0x00ffffff
        37fde0:	ffffffff 	swinv	0x00ffffff
        37fde4:	ffff0138 	swinv	0x00ff0138
    */
}

/**
 * Symbol: yyname
 * Address: 0037fde8
 */
void globals::yyname() {
    /*
        37fde8:	002c22c0 	eoreq	r2, ip, r0, asr #5
        37fe80:	002c22cc 	eoreq	r2, ip, ip, asr #5
        37fe84:	002c22d0 	ldreqd	r2, [ip], -r0
        37fe88:	002c22d8 	ldreqd	r2, [ip], -r8
        37fe8c:	002c22dc 	ldreqd	r2, [ip], -ip
        37fe90:	002c22e0 	eoreq	r2, ip, r0, ror #5
        37fe94:	002c22e4 	eoreq	r2, ip, r4, ror #5
        37fe98:	002c22e8 	eoreq	r2, ip, r8, ror #5
        37fe9c:	002c22ec 	eoreq	r2, ip, ip, ror #5
        37fea0:	002c22f0 	streqd	r2, [ip], -r0
        37fea4:	002c22f4 	streqd	r2, [ip], -r4
        37fed0:	002c22f8 	streqd	r2, [ip], -r8
        37fed4:	002c22fc 	streqd	r2, [ip], -ip
        37fed8:	002c2300 	eoreq	r2, ip, r0, lsl #6
        37fedc:	00000000 	andeq	r0, r0, r0
        37fee0:	002c2304 	eoreq	r2, ip, r4, lsl #6
        37ff54:	002c2308 	eoreq	r2, ip, r8, lsl #6
        37ff58:	00000000 	andeq	r0, r0, r0
        37ff5c:	002c230c 	eoreq	r2, ip, ip, lsl #6
        37ffd4:	002c2310 	eoreq	r2, ip, r0, lsl r3
        37ffd8:	00000000 	andeq	r0, r0, r0
        37ffdc:	002c2314 	eoreq	r2, ip, r4, lsl r3
        3801ec:	002c2318 	eoreq	r2, ip, r8, lsl r3
        3801f0:	002c232c 	eoreq	r2, ip, ip, lsr #6
        3801f4:	002c2338 	eoreq	r2, ip, r8, lsr r3
        3801f8:	002c2344 	eoreq	r2, ip, r4, asr #6
        3801fc:	002c2354 	eoreq	r2, ip, r4, asr r3
        380200:	002c2360 	eoreq	r2, ip, r0, ror #6
        380204:	002c2370 	eoreq	r2, ip, r0, ror r3
        380208:	002c237c 	eoreq	r2, ip, ip, ror r3
        38020c:	002c2388 	eoreq	r2, ip, r8, lsl #7
        380210:	002c2394 	mlaeq	ip, r4, r3, r2
        380214:	002c23a0 	eoreq	r2, ip, r0, lsr #7
        380218:	002c23ac 	eoreq	r2, ip, ip, lsr #7
        38021c:	002c23bc 	streqh	r2, [ip], -ip
        380220:	002c23cc 	eoreq	r2, ip, ip, asr #7
        380224:	002c23d4 	ldreqd	r2, [ip], -r4
        380228:	002c23e0 	eoreq	r2, ip, r0, ror #7
        38022c:	002c23ec 	eoreq	r2, ip, ip, ror #7
        380230:	002c23f8 	streqd	r2, [ip], -r8
        380234:	002c240c 	eoreq	r2, ip, ip, lsl #8
        380238:	002c241c 	eoreq	r2, ip, ip, lsl r4
        38023c:	002c242c 	eoreq	r2, ip, ip, lsr #8
        380240:	002c2438 	eoreq	r2, ip, r8, lsr r4
        380244:	002c2444 	eoreq	r2, ip, r4, asr #8
        380248:	002c2450 	eoreq	r2, ip, r0, asr r4
        38024c:	002c2458 	eoreq	r2, ip, r8, asr r4
        380250:	002c2460 	eoreq	r2, ip, r0, ror #8
        380254:	002c246c 	eoreq	r2, ip, ip, ror #8
        380258:	002c2478 	eoreq	r2, ip, r8, ror r4
        38025c:	002c2484 	eoreq	r2, ip, r4, lsl #9
        380260:	002c248c 	eoreq	r2, ip, ip, lsl #9
        380264:	002c2498 	mlaeq	ip, r8, r4, r2
        380268:	002c24a4 	eoreq	r2, ip, r4, lsr #9
        38026c:	002c24b0 	streqh	r2, [ip], -r0
        380270:	002c24c0 	eoreq	r2, ip, r0, asr #9
        380274:	002c24c8 	eoreq	r2, ip, r8, asr #9
        380278:	002c24d4 	ldreqd	r2, [ip], -r4
        38027c:	002c24e0 	eoreq	r2, ip, r0, ror #9
        380280:	002c24f0 	streqd	r2, [ip], -r0
        380284:	002c24fc 	streqd	r2, [ip], -ip
        380288:	002c2508 	eoreq	r2, ip, r8, lsl #10
        38028c:	002c2518 	eoreq	r2, ip, r8, lsl r5
        380290:	002c2524 	eoreq	r2, ip, r4, lsr #10
        380294:	002c2530 	eoreq	r2, ip, r0, lsr r5
        380298:	002c2538 	eoreq	r2, ip, r8, lsr r5
        38029c:	002c2544 	eoreq	r2, ip, r4, asr #10
        3802a0:	002c2550 	eoreq	r2, ip, r0, asr r5
        3802a4:	002c255c 	eoreq	r2, ip, ip, asr r5
        3802a8:	002c2568 	eoreq	r2, ip, r8, ror #10
        3802ac:	002c2574 	eoreq	r2, ip, r4, ror r5
        3802b0:	002c2580 	eoreq	r2, ip, r0, lsl #11
        3802b4:	002c2590 	mlaeq	ip, r0, r5, r2
        3802b8:	002c259c 	mlaeq	ip, ip, r5, r2
        3802bc:	002c25a8 	eoreq	r2, ip, r8, lsr #11
        3802c0:	002c25b4 	streqh	r2, [ip], -r4
        3802c4:	002c25c0 	eoreq	r2, ip, r0, asr #11
        3802c8:	002c25cc 	eoreq	r2, ip, ip, asr #11
    */
}

/**
 * Symbol: yyrule
 * Address: 003802cc
 */
void globals::yyrule() {
    /*
        3802cc:	002c25e0 	eoreq	r2, ip, r0, ror #11
        3802d0:	002c25f0 	streqd	r2, [ip], -r0
        3802d4:	002c25f8 	streqd	r2, [ip], -r8
        3802d8:	002c2610 	eoreq	r2, ip, r0, lsl r6
        3802dc:	002c2628 	eoreq	r2, ip, r8, lsr #12
        3802e0:	002c2630 	eoreq	r2, ip, r0, lsr r6
        3802e4:	002c265c 	eoreq	r2, ip, ip, asr r6
        3802e8:	002c266c 	eoreq	r2, ip, ip, ror #12
        3802ec:	002c2684 	eoreq	r2, ip, r4, lsl #13
        3802f0:	002c2694 	mlaeq	ip, r4, r6, r2
        3802f4:	002c26a4 	eoreq	r2, ip, r4, lsr #13
        3802f8:	002c26b8 	streqh	r2, [ip], -r8
        3802fc:	002c26cc 	eoreq	r2, ip, ip, asr #13
        380300:	002c26f0 	streqd	r2, [ip], -r0
        380304:	002c2704 	eoreq	r2, ip, r4, lsl #14
        380308:	002c271c 	eoreq	r2, ip, ip, lsl r7
        38030c:	002c2734 	eoreq	r2, ip, r4, lsr r7
        380310:	002c274c 	eoreq	r2, ip, ip, asr #14
        380314:	002c2764 	eoreq	r2, ip, r4, ror #14
        380318:	002c2780 	eoreq	r2, ip, r0, lsl #15
        38031c:	002c2798 	mlaeq	ip, r8, r7, r2
        380320:	002c27bc 	streqh	r2, [ip], -ip
        380324:	002c27d8 	ldreqd	r2, [ip], -r8
        380328:	002c27e8 	eoreq	r2, ip, r8, ror #15
        38032c:	002c2808 	eoreq	r2, ip, r8, lsl #16
        380330:	002c2828 	eoreq	r2, ip, r8, lsr #16
        380334:	002c2840 	eoreq	r2, ip, r0, asr #16
        380338:	002c2858 	eoreq	r2, ip, r8, asr r8
        38033c:	002c2874 	eoreq	r2, ip, r4, ror r8
        380340:	002c2890 	mlaeq	ip, r0, r8, r2
        380344:	002c28ac 	eoreq	r2, ip, ip, lsr #17
        380348:	002c28c8 	eoreq	r2, ip, r8, asr #17
        38034c:	002c28e4 	eoreq	r2, ip, r4, ror #17
        380350:	002c2900 	eoreq	r2, ip, r0, lsl #18
        380354:	002c2918 	eoreq	r2, ip, r8, lsl r9
        380358:	002c2934 	eoreq	r2, ip, r4, lsr r9
        38035c:	002c2958 	eoreq	r2, ip, r8, asr r9
        380360:	002c296c 	eoreq	r2, ip, ip, ror #18
        380364:	002c2980 	eoreq	r2, ip, r0, lsl #19
        380368:	002c2990 	mlaeq	ip, r0, r9, r2
        38036c:	002c29a4 	eoreq	r2, ip, r4, lsr #19
        380370:	002c29b8 	streqh	r2, [ip], -r8
        380374:	002c29c8 	eoreq	r2, ip, r8, asr #19
        380378:	002c29dc 	ldreqd	r2, [ip], -ip
        38037c:	002c29f0 	streqd	r2, [ip], -r0
        380380:	002c2a08 	eoreq	r2, ip, r8, lsl #20
        380384:	002c2a1c 	eoreq	r2, ip, ip, lsl sl
        380388:	002c2a30 	eoreq	r2, ip, r0, lsr sl
        38038c:	002c2a48 	eoreq	r2, ip, r8, asr #20
        380390:	002c2a60 	eoreq	r2, ip, r0, ror #20
        380394:	002c2a78 	eoreq	r2, ip, r8, ror sl
        380398:	002c2a90 	mlaeq	ip, r0, sl, r2
        38039c:	002c2aac 	eoreq	r2, ip, ip, lsr #21
        3803a0:	002c2ac4 	eoreq	r2, ip, r4, asr #21
        3803a4:	002c2ae4 	eoreq	r2, ip, r4, ror #21
        3803a8:	002c2b04 	eoreq	r2, ip, r4, lsl #22
        3803ac:	002c2b20 	eoreq	r2, ip, r0, lsr #22
        3803b0:	002c2b48 	eoreq	r2, ip, r8, asr #22
        3803b4:	002c2b6c 	eoreq	r2, ip, ip, ror #22
        3803b8:	002c2ba0 	eoreq	r2, ip, r0, lsr #23
        3803bc:	002c2bc8 	eoreq	r2, ip, r8, asr #23
        3803c0:	002c2c00 	eoreq	r2, ip, r0, lsl #24
        3803c4:	002c2c40 	eoreq	r2, ip, r0, asr #24
        3803c8:	002c2c80 	eoreq	r2, ip, r0, lsl #25
        3803cc:	002c2ca0 	eoreq	r2, ip, r0, lsr #25
        3803d0:	002c2cb8 	streqh	r2, [ip], -r8
        3803d4:	002c2cd8 	ldreqd	r2, [ip], -r8
        3803d8:	002c2cf4 	streqd	r2, [ip], -r4
        3803dc:	002c2d24 	eoreq	r2, ip, r4, lsr #26
        3803e0:	002c2d60 	eoreq	r2, ip, r0, ror #26
        3803e4:	002c2d88 	eoreq	r2, ip, r8, lsl #27
        3803e8:	002c2dac 	eoreq	r2, ip, ip, lsr #27
        3803ec:	002c2de0 	eoreq	r2, ip, r0, ror #27
        3803f0:	002c2e20 	eoreq	r2, ip, r0, lsr #28
        3803f4:	002c2e50 	eoreq	r2, ip, r0, asr lr
        3803f8:	002c2e94 	mlaeq	ip, r4, lr, r2
        3803fc:	002c2ee0 	eoreq	r2, ip, r0, ror #29
        380400:	002c2f20 	eoreq	r2, ip, r0, lsr #30
        380404:	002c2f58 	eoreq	r2, ip, r8, asr pc
        380408:	002c2f80 	eoreq	r2, ip, r0, lsl #31
        38040c:	002c2f9c 	mlaeq	ip, ip, pc, r2
        380410:	002c2fb4 	streqh	r2, [ip], -r4
        380414:	002c2fcc 	eoreq	r2, ip, ip, asr #31
        380418:	002c2fe4 	eoreq	r2, ip, r4, ror #31
        38041c:	002c2ffc 	streqd	r2, [ip], -ip
        380420:	002c301c 	eoreq	r3, ip, ip, lsl r0
        380424:	002c3068 	eoreq	r3, ip, r8, rrx
        380428:	002c30c0 	eoreq	r3, ip, r0, asr #1
        38042c:	002c3120 	eoreq	r3, ip, r0, lsr #2
        380430:	002c3170 	eoreq	r3, ip, r0, ror r1
        380434:	002c3184 	eoreq	r3, ip, r4, lsl #3
        380438:	002c31a4 	eoreq	r3, ip, r4, lsr #3
        38043c:	002c31b8 	streqh	r3, [ip], -r8
        380440:	002c31d0 	ldreqd	r3, [ip], -r0
        380444:	002c31fc 	streqd	r3, [ip], -ip
        380448:	002c3230 	eoreq	r3, ip, r0, lsr r2
        38044c:	002c3264 	eoreq	r3, ip, r4, ror #4
        380450:	002c32a4 	eoreq	r3, ip, r4, lsr #5
        380454:	002c32dc 	ldreqd	r3, [ip], -ip
        380458:	002c3308 	eoreq	r3, ip, r8, lsl #6
        38045c:	002c3324 	eoreq	r3, ip, r4, lsr #6
        380460:	002c334c 	eoreq	r3, ip, ip, asr #6
        380464:	002c3384 	eoreq	r3, ip, r4, lsl #7
        380468:	002c33a4 	eoreq	r3, ip, r4, lsr #7
        38046c:	002c33d4 	ldreqd	r3, [ip], -r4
        380470:	002c33fc 	streqd	r3, [ip], -ip
        380474:	002c3408 	eoreq	r3, ip, r8, lsl #8
        380478:	002c3420 	eoreq	r3, ip, r0, lsr #8
        38047c:	002c3434 	eoreq	r3, ip, r4, lsr r4
        380480:	002c3454 	eoreq	r3, ip, r4, asr r4
        380484:	002c3460 	eoreq	r3, ip, r0, ror #8
        380488:	002c3470 	eoreq	r3, ip, r0, ror r4
        38048c:	002c3490 	mlaeq	ip, r0, r4, r3
        380490:	002c34a0 	eoreq	r3, ip, r0, lsr #9
        380494:	002c34b8 	streqh	r3, [ip], -r8
        380498:	002c34d0 	ldreqd	r3, [ip], -r0
        38049c:	002c34f4 	streqd	r3, [ip], -r4
        3804a0:	002c3518 	eoreq	r3, ip, r8, lsl r5
        3804a4:	002c3548 	eoreq	r3, ip, r8, asr #10
        3804a8:	002c3570 	eoreq	r3, ip, r0, ror r5
        3804ac:	002c359c 	mlaeq	ip, ip, r5, r3
        3804b0:	002c35c4 	eoreq	r3, ip, r4, asr #11
        3804b4:	002c3600 	eoreq	r3, ip, r0, lsl #12
        3804b8:	002c3610 	eoreq	r3, ip, r0, lsl r6
        3804bc:	002c362c 	eoreq	r3, ip, ip, lsr #12
        3804c0:	002c3658 	eoreq	r3, ip, r8, asr r6
        3804c4:	002c368c 	eoreq	r3, ip, ip, lsl #13
        3804c8:	002c36dc 	ldreqd	r3, [ip], -ip
        3804cc:	002c36f0 	streqd	r3, [ip], -r0
        3804d0:	002c3714 	eoreq	r3, ip, r4, lsl r7
        3804d4:	002c373c 	eoreq	r3, ip, ip, lsr r7
        3804d8:	002c3778 	eoreq	r3, ip, r8, ror r7
        3804dc:	002c378c 	eoreq	r3, ip, ip, lsl #15
        3804e0:	002c37a4 	eoreq	r3, ip, r4, lsr #15
        3804e4:	002c37c0 	eoreq	r3, ip, r0, asr #15
        3804e8:	002c37d4 	ldreqd	r3, [ip], -r4
        3804ec:	002c37ec 	eoreq	r3, ip, ip, ror #15
        3804f0:	002c3804 	eoreq	r3, ip, r4, lsl #16
        3804f4:	002c3818 	eoreq	r3, ip, r8, lsl r8
        3804f8:	002c3834 	eoreq	r3, ip, r4, lsr r8
        3804fc:	002c3860 	eoreq	r3, ip, r0, ror #16
        380500:	002c3888 	eoreq	r3, ip, r8, lsl #17
        380504:	002c38a0 	eoreq	r3, ip, r0, lsr #17
        380508:	002c38c8 	eoreq	r3, ip, r8, asr #17
        38050c:	002c38d8 	ldreqd	r3, [ip], -r8
        380510:	002c38f0 	streqd	r3, [ip], -r0
        380514:	002c3904 	eoreq	r3, ip, r4, lsl #18
        380518:	002c3928 	eoreq	r3, ip, r8, lsr #18
        38051c:	002c3940 	eoreq	r3, ip, r0, asr #18
        380520:	002c3970 	eoreq	r3, ip, r0, ror r9
        380524:	002c39a0 	eoreq	r3, ip, r0, lsr #19
        380528:	7ff00000 	swivc	0x00f00000	; IMB
        38052c:	00000000 	andeq	r0, r0, r0
        380530:	7ff80026 	swivc	0x00f80026
    */
}

