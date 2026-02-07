#include "include/TIMACodec.h"

/**
 * Symbol: Sizeof__9TIMACodecSFv
 * Address: 000e82c0
 */
void TIMACodec::Sizeof() {
    /*
         e82c0:	e3a0003c 	mov	r0, #60	; 0x3c
         e82c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIMACodec::New(void)
 * Address: 000e82c8
 */
TIMACodec::New(void) {
    /*
         e82c8:	e3a01000 	mov	r1, #0	; 0x0
         e82cc:	e5801010 	str	r1, [r0, #16]	; fField16
         e82d0:	e5c01015 	strb	r1, [r0, #21]	; fField21
         e82d4:	e5c01014 	strb	r1, [r0, #20]	; fField20
         e82d8:	e5801018 	str	r1, [r0, #24]	; fField24
         e82dc:	e5801020 	str	r1, [r0, #32]	; fField32
         e82e0:	e5801030 	str	r1, [r0, #48]	; fField48
         e82e4:	e3a01c0a 	mov	r1, #2560	; 0xa00
         e82e8:	e5801034 	str	r1, [r0, #52]	; fField52
         e82ec:	e3a01003 	mov	r1, #3	; 0x3
         e82f0:	e5801038 	str	r1, [r0, #56]	; fField56
         e82f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIMACodec::Delete(void)
 * Address: 000e86d0
 */
TIMACodec::Delete(void) {
    /*
         e86d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIMACodec::Init(CodecBlock *)
 * Address: 000e86d4
 */
TIMACodec::Init(CodecBlock *) {
    /*
         e86d4:	e3a00000 	mov	r0, #0	; 0x0
         e86d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIMACodec::Reset(CodecBlock *)
 * Address: 000e86dc
 */
TIMACodec::Reset(CodecBlock *) {
    /*
         e86dc:	e3a02000 	mov	r2, #0	; 0x0
         e86e0:	e5802010 	str	r2, [r0, #16]	; fField16
         e86e4:	e5c02015 	strb	r2, [r0, #21]	; fField21
         e86e8:	e5c02014 	strb	r2, [r0, #20]	; fField20
         e86ec:	e5913004 	ldr	r3, [r1, #4]
         e86f0:	e5803018 	str	r3, [r0, #24]	; fField24
         e86f4:	e5913010 	ldr	r3, [r1, #16]	; fField16
         e86f8:	e5803024 	str	r3, [r0, #36]	; fField36
         e86fc:	e5913014 	ldr	r3, [r1, #20]	; fField20
         e8700:	e5803028 	str	r3, [r0, #40]	; fField40
         e8704:	e591300c 	ldr	r3, [r1, #12]
         e8708:	e580302c 	str	r3, [r0, #44]	; fField44
         e870c:	e5911008 	ldr	r1, [r1, #8]
         e8710:	e2800018 	add	r0, r0, #24	; 0x18
         e8714:	e9a00006 	stmib	r0!, {r1, r2}
         e8718:	e1a00002 	mov	r0, r2
         e871c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIMACodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)
 * Address: 000e8720
 */
TIMACodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *) {
    /*
         e8720:	e1a0c00d 	mov	ip, sp
         e8724:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         e8728:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         e872c:	e24cb014 	sub	fp, ip, #20	; 0x14
         e8730:	e1a04000 	mov	r4, r0
         e8734:	e1a05002 	mov	r5, r2
         e8738:	e59b8014 	ldr	r8, [fp, #20]	; fField20
         e873c:	e24dd008 	sub	sp, sp, #8	; 0x8
         e8740:	e3a07000 	mov	r7, #0	; 0x0
         e8744:	e5900018 	ldr	r0, [r0, #24]	; fField24
         e8748:	e3300000 	teq	r0, #0	; 0x0
         e874c:	0a000039 	beq	e8838 <TIMACodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x118>
         e8750:	e5942020 	ldr	r2, [r4, #32]	; fField32
         e8754:	e58d2004 	str	r2, [sp, #4]
         e8758:	e080a002 	add	sl, r0, r2
         e875c:	e1a09001 	mov	r9, r1
         e8760:	e24dd004 	sub	sp, sp, #4	; 0x4
         e8764:	e594102c 	ldr	r1, [r4, #44]	; fField44
         e8768:	e58d1004 	str	r1, [sp, #4]
         e876c:	e3310008 	teq	r1, #8	; 0x8
         e8770:	13a00002 	movne	r0, #2	; 0x2
         e8774:	03a00001 	moveq	r0, #1	; 0x1
         e8778:	e58d0000 	str	r0, [sp]
         e877c:	e1a00300 	mov	r0, r0, lsl #6
         e8780:	e5951000 	ldr	r1, [r5]
         e8784:	eb6b286f 	bl	1bb2948 <$__rt_udiv>
         e8788:	e1a06000 	mov	r6, r0
         e878c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         e8790:	e59d1008 	ldr	r1, [sp, #8]
         e8794:	e0401001 	sub	r1, r0, r1
         e8798:	e3a00022 	mov	r0, #34	; 0x22
         e879c:	eb6b2867 	bl	1bb2940 <$__rt_sdiv>
         e87a0:	e1500006 	cmp	r0, r6
         e87a4:	31a06000 	movcc	r6, r0
         e87a8:	e3a00000 	mov	r0, #0	; 0x0
         e87ac:	e59d1004 	ldr	r1, [sp, #4]
         e87b0:	e3310008 	teq	r1, #8	; 0x8
         e87b4:	13a01002 	movne	r1, #2	; 0x2
         e87b8:	03a01000 	moveq	r1, #0	; 0x0
         e87bc:	e1813000 	orr	r3, r1, r0
         e87c0:	e3a02001 	mov	r2, #1	; 0x1
         e87c4:	e92d000c 	stmdb	sp!, {r2, r3}
         e87c8:	e2842010 	add	r2, r4, #16	; 0x10
         e87cc:	e1a03006 	mov	r3, r6
         e87d0:	e1a01009 	mov	r1, r9
         e87d4:	e1a0000a 	mov	r0, sl
         e87d8:	eb6a519b 	bl	1b7ce4c <$ExpandIMA__FPScT1P8IMAStateUlN24>
         e87dc:	e0860206 	add	r0, r6, r6, lsl #4
         e87e0:	e5941020 	ldr	r1, [r4, #32]	; fField32
         e87e4:	e0810080 	add	r0, r1, r0, lsl #1
         e87e8:	e5840020 	str	r0, [r4, #32]	; fField32
         e87ec:	e5bd0008 	ldr	r0, [sp, #8]!
         e87f0:	e0010690 	mul	r1, r0, r6
         e87f4:	e1a00301 	mov	r0, r1, lsl #6
         e87f8:	e5850000 	str	r0, [r5]
         e87fc:	e0860206 	add	r0, r6, r6, lsl #4
         e8800:	e1a00080 	mov	r0, r0, lsl #1
         e8804:	e59b3010 	ldr	r3, [fp, #16]	; fField16
         e8808:	e5830000 	str	r0, [r3]
         e880c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         e8810:	e588000c 	str	r0, [r8, #12]
         e8814:	e594002c 	ldr	r0, [r4, #44]	; fField44
         e8818:	e3300008 	teq	r0, #8	; 0x8
         e881c:	13a00006 	movne	r0, #6	; 0x6
         e8820:	03a00000 	moveq	r0, #0	; 0x0
         e8824:	e5880010 	str	r0, [r8, #16]	; fField16
         e8828:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
         e882c:	e5a80014 	str	r0, [r8, #20]!	; fField20
         e8830:	e28dd004 	add	sp, sp, #4	; 0x4
         e8834:	ea000001 	b	e8840 <TIMACodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x120>
         e8838:	e3a07fb2 	mov	r7, #712	; 0x2c8
         e883c:	e2477b1e 	sub	r7, r7, #30720	; 0x7800
         e8840:	e1a00007 	mov	r0, r7
         e8844:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TIMACodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)
 * Address: 000e8848
 */
TIMACodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *) {
    /*
         e8848:	e1a0c00d 	mov	ip, sp
         e884c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         e8850:	e24cb004 	sub	fp, ip, #4	; 0x4
         e8854:	e1a04000 	mov	r4, r0
         e8858:	e1a07001 	mov	r7, r1
         e885c:	e1a05002 	mov	r5, r2
         e8860:	e1a06003 	mov	r6, r3
         e8864:	e3a09000 	mov	r9, #0	; 0x0
         e8868:	e5901018 	ldr	r1, [r0, #24]	; fField24
         e886c:	e3310000 	teq	r1, #0	; 0x0
         e8870:	0a00001e 	beq	e88f0 <TIMACodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)+0xa8>
         e8874:	e5940020 	ldr	r0, [r4, #32]	; fField32
         e8878:	e081a000 	add	sl, r1, r0
         e887c:	e5951000 	ldr	r1, [r5]
         e8880:	e1a010a1 	mov	r1, r1, lsr #1
         e8884:	e1a08321 	mov	r8, r1, lsr #6
         e8888:	e594101c 	ldr	r1, [r4, #28]	; fField28
         e888c:	e0411000 	sub	r1, r1, r0
         e8890:	e3a00022 	mov	r0, #34	; 0x22
         e8894:	eb6b2829 	bl	1bb2940 <$__rt_sdiv>
         e8898:	e1500008 	cmp	r0, r8
         e889c:	31a08000 	movcc	r8, r0
         e88a0:	e1a00308 	mov	r0, r8, lsl #6
         e88a4:	e3a03001 	mov	r3, #1	; 0x1
         e88a8:	e3a02001 	mov	r2, #1	; 0x1
         e88ac:	e92d000c 	stmdb	sp!, {r2, r3}
         e88b0:	e2843010 	add	r3, r4, #16	; 0x10
         e88b4:	e1a02000 	mov	r2, r0
         e88b8:	e1a0100a 	mov	r1, sl
         e88bc:	e1a00007 	mov	r0, r7
         e88c0:	eb6a515f 	bl	1b7ce44 <$CompressIMA(short *, signed char *, unsigned long, IMAState *, IMAState *, IMAState *)>
         e88c4:	e28dd008 	add	sp, sp, #8	; 0x8
         e88c8:	e0881208 	add	r1, r8, r8, lsl #4
         e88cc:	e5940020 	ldr	r0, [r4, #32]	; fField32
         e88d0:	e0800081 	add	r0, r0, r1, lsl #1
         e88d4:	e5a40020 	str	r0, [r4, #32]!	; fField32
         e88d8:	e1a00388 	mov	r0, r8, lsl #7
         e88dc:	e5850000 	str	r0, [r5]
         e88e0:	e0880208 	add	r0, r8, r8, lsl #4
         e88e4:	e1a00080 	mov	r0, r0, lsl #1
         e88e8:	e5860000 	str	r0, [r6]
         e88ec:	ea000001 	b	e88f8 <TIMACodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)+0xb0>
         e88f0:	e3a09fb2 	mov	r9, #712	; 0x2c8
         e88f4:	e2499b1e 	sub	r9, r9, #30720	; 0x7800
         e88f8:	e1a00009 	mov	r0, r9
         e88fc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TIMACodec::Start(void)
 * Address: 000e8900
 */
TIMACodec::Start(void) {
    /*
         e8900:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIMACodec::Stop(int)
 * Address: 000e8904
 */
TIMACodec::Stop(int) {
    /*
         e8904:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIMACodec::BufferCompleted(void)
 * Address: 000e8908
 */
TIMACodec::BufferCompleted(void) {
    /*
         e8908:	e280101c 	add	r1, r0, #28	; 0x1c
         e890c:	e8910003 	ldmia	r1, {r0, r1}
         e8910:	e1310000 	teq	r1, r0
         e8914:	13a00000 	movne	r0, #0	; 0x0
         e8918:	03a00001 	moveq	r0, #1	; 0x1
         e891c:	e20000ff 	and	r0, r0, #255	; 0xff
         e8920:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__9TIMACodecSFv
 * Address: 00388f14
 */
void TIMACodec::ClassInfo() {
    /*
        388f14:	e24f0044 	sub	r0, pc, #68	; 0x44
        388f18:	e1a0f00e 	mov	pc, lr
        388f1c:	e3a00000 	mov	r0, #0	; 0x0
        388f20:	e1a0f00e 	mov	pc, lr
        388f24:	54494d41 	strplb	r4, [r9], -#3393
        388f28:	436f6465 	cmnmi	pc, #1694498816	; 0x65000000
        388f2c:	63005453 	tstvs	r0, #1392508928	; 0x53000000
        388f30:	6f756e64 	swivs	0x00756e64
        388f34:	436f6465 	cmnmi	pc, #1694498816	; 0x65000000
        388f38:	63000000 	tstvs	r0, #0	; 0x0
        388f3c:	00000000 	andeq	r0, r0, r0
        388f40:	eafffff3 	b	388f14 <ClassInfo__9TIMACodecSFv>
        388f44:	ea5fcfb5 	b	1b7ce20 <TIMACodec::$New(void)>
        388f48:	ea5fcfb5 	b	1b7ce24 <TIMACodec::$Delete(void)>
        388f4c:	ea5fcfb5 	b	1b7ce28 <TIMACodec::$Init(CodecBlock *)>
        388f50:	ea5fcfb5 	b	1b7ce2c <TIMACodec::$Reset(CodecBlock *)>
        388f54:	ea5fcfb5 	b	1b7ce30 <TIMACodec::$Produce(void *, unsigned long *, unsigned long *, CodecBlock *)>
        388f58:	ea5fcfb5 	b	1b7ce34 <TIMACodec::$Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)>
        388f5c:	ea5fcfb5 	b	1b7ce38 <TIMACodec::$Start(void)>
        388f60:	ea5fcfb5 	b	1b7ce3c <TIMACodec::$Stop(int)>
        388f64:	ea5fcfb5 	b	1b7ce40 <TIMACodec::$BufferCompleted(void)>
        388f68:	00000000 	andeq	r0, r0, r0
        388f6c:	00000048 	andeq	r0, r0, r8, asr #32
        388f70:	0000004f 	andeq	r0, r0, pc, asr #32
        388f74:	00000057 	andeq	r0, r0, r7, asr r0
        388f78:	00000054 	andeq	r0, r0, r4, asr r0
        388f7c:	0000007c 	andeq	r0, r0, ip, ror r0
        388f80:	ea5fcb8e 	b	1b7bdc0 <$Sizeof__10TDTMFCodecSFv>
        388f8c:	ea5fcb8c 	b	1b7bdc4 <TDTMFCodec::$New(void)>
        388f90:	ea5fcb8c 	b	1b7bdc8 <TDTMFCodec::$Delete(void)>
        388fa0:	ea000001 	b	388fac <ClassInfo__10TDTMFCodecSFv+0x8>
    */
}

