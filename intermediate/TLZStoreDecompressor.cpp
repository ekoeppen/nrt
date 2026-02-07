#include "include/TLZStoreDecompressor.h"

/**
 * Symbol: Sizeof__20TLZStoreDecompressorSFv
 * Address: 001f9d1c
 */
void TLZStoreDecompressor::Sizeof() {
    /*
        1f9d1c:	e3a0001c 	mov	r0, #28	; 0x1c
        1f9d20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZStoreDecompressor::New(void)
 * Address: 001f9d24
 */
TLZStoreDecompressor::New(void) {
    /*
        1f9d24:	e3a01000 	mov	r1, #0	; 0x0
        1f9d28:	e5801010 	str	r1, [r0, #16]	; fField16
        1f9d2c:	e5801014 	str	r1, [r0, #20]	; fField20
        1f9d30:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZStoreDecompressor::Delete(void)
 * Address: 001fa024
 */
TLZStoreDecompressor::Delete(void) {
    /*
        1fa024:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1fa028:	e3300000 	teq	r0, #0	; 0x0
        1fa02c:	1a063d9b 	bne	3896a0 <TDecompressor::Delete(void)>
        1fa030:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZStoreDecompressor::Init(TStore *, unsigned long)
 * Address: 001fa38c
 */
TLZStoreDecompressor::Init(TStore *, unsigned long) {
    /*
        1fa38c:	e1a0c00d 	mov	ip, sp
        1fa390:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1fa394:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fa398:	e1a04000 	mov	r4, r0
        1fa39c:	e3a05000 	mov	r5, #0	; 0x0
        1fa3a0:	e3a060e9 	mov	r6, #233	; 0xe9
        1fa3a4:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        1fa3a8:	e5802010 	str	r2, [r0, #16]	; fField16
        1fa3ac:	e3320000 	teq	r2, #0	; 0x0
        1fa3b0:	e5801018 	str	r1, [r0, #24]	; fField24
        1fa3b4:	0a000005 	beq	1fa3d0 <TLZStoreDecompressor::Init(TStore *, unsigned long)+0x44>
        1fa3b8:	e28f1f07 	add	r1, pc, #28	; 0x1c
        1fa3bc:	e28f0f0a 	add	r0, pc, #40	; 0x28
        1fa3c0:	eb6775f1 	bl	1bd7b8c <$NewByName__FPCcT1>
        1fa3c4:	e5a40014 	str	r0, [r4, #20]!	; fField20
        1fa3c8:	e3300000 	teq	r0, #0	; 0x0
        1fa3cc:	1a000000 	bne	1fa3d4 <TLZStoreDecompressor::Init(TStore *, unsigned long)+0x48>
        1fa3d0:	e1a05006 	mov	r5, r6
        1fa3d4:	e1a00005 	mov	r0, r5
        1fa3d8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1fa3dc:	544c5a44 	strplb	r5, [ip], -#2628
        1fa3e0:	65636f6d 	strvsb	r6, [r3, -#3949]!
        1fa3e4:	70726573 	rsbvcs	r6, r2, r3, ror r5
        1fa3e8:	736f7200 	cmnvc	pc, #0	; 0x0
        1fa3ec:	54446563 	strplb	r6, [r4], -#1379	; fField1379
        1fa3f0:	6f6d7072 	swivs	0x006d7072
        1fa3f4:	6573736f 	ldrvsb	r7, [r3, -#879]!
        1fa3f8:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

/**
 * Symbol: TLZStoreDecompressor::Read(unsigned long, char *, long, unsigned long)
 * Address: 001fa5dc
 */
TLZStoreDecompressor::Read(unsigned long, char *, long, unsigned long) {
    /*
        1fa5dc:	e1a0c00d 	mov	ip, sp
        1fa5e0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1fa5e4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1fa5e8:	e24cb014 	sub	fp, ip, #20	; 0x14
        1fa5ec:	e24dd008 	sub	sp, sp, #8	; 0x8
        1fa5f0:	e3a03004 	mov	r3, #4	; 0x4
        1fa5f4:	e92d0008 	stmdb	sp!, {r3}
        1fa5f8:	e59b0004 	ldr	r0, [fp, #4]
        1fa5fc:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1fa600:	e08d3003 	add	r3, sp, r3
        1fa604:	e3a02000 	mov	r2, #0	; 0x0
        1fa608:	e59b1008 	ldr	r1, [fp, #8]
        1fa60c:	eb641ecb 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fa610:	e28dd004 	add	sp, sp, #4	; 0x4
        1fa614:	e1b04000 	movs	r4, r0
        1fa618:	1a000021 	bne	1fa6a4 <TLZStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0xc8>
        1fa61c:	e59b0004 	ldr	r0, [fp, #4]
        1fa620:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1fa624:	e28d2004 	add	r2, sp, #4	; 0x4
        1fa628:	e59b1008 	ldr	r1, [fp, #8]
        1fa62c:	eb6401b3 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1fa630:	e1b04000 	movs	r4, r0
        1fa634:	1a00001a 	bne	1fa6a4 <TLZStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0xc8>
        1fa638:	e59d0004 	ldr	r0, [sp, #4]
        1fa63c:	e2403004 	sub	r3, r0, #4	; 0x4
        1fa640:	e58b3010 	str	r3, [fp, #16]	; fField16
        1fa644:	e92d0008 	stmdb	sp!, {r3}
        1fa648:	e59b0004 	ldr	r0, [fp, #4]
        1fa64c:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1fa650:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1fa654:	e3a02004 	mov	r2, #4	; 0x4
        1fa658:	e59b1008 	ldr	r1, [fp, #8]
        1fa65c:	eb641eb7 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fa660:	e28dd004 	add	sp, sp, #4	; 0x4
        1fa664:	e1b04000 	movs	r4, r0
        1fa668:	1a00000d 	bne	1fa6a4 <TLZStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0xc8>
        1fa66c:	e59b0004 	ldr	r0, [fp, #4]
        1fa670:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1fa674:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1fa678:	e92d000c 	stmdb	sp!, {r2, r3}
        1fa67c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1fa680:	e59b200c 	ldr	r2, [fp, #12]
        1fa684:	e28b1010 	add	r1, fp, #16	; 0x10
        1fa688:	e3a03b01 	mov	r3, #1024	; 0x400
        1fa68c:	eb063c0d 	bl	3896c8 <TDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        1fa690:	e28dd008 	add	sp, sp, #8	; 0x8
        1fa694:	e1a0000d 	mov	r0, sp
        1fa698:	e59b100c 	ldr	r1, [fp, #12]
        1fa69c:	e59b2014 	ldr	r2, [fp, #20]	; fField20
        1fa6a0:	eb67d437 	bl	1bef784 <$RelocateFramesInPage(FrameRelocationHeader *, char *, long)>
        1fa6a4:	e1a00004 	mov	r0, r4
        1fa6a8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__20TLZStoreDecompressorSFv
 * Address: 00387588
 */
void TLZStoreDecompressor::ClassInfo() {
    /*
        387588:	e24f0044 	sub	r0, pc, #68	; 0x44
        38758c:	e1a0f00e 	mov	pc, lr
        387590:	e3a00000 	mov	r0, #0	; 0x0
        387594:	e1a0f00e 	mov	pc, lr
        387598:	544c5a53 	strplb	r5, [ip], -#2643
        38759c:	746f7265 	strvcbt	r7, [pc], #265	; 3875a4 <ClassInfo__20TLZStoreDecompressorSFv+0x1c>
        3875a0:	4465636f 	strmibt	r6, [r5], -#879
        3875a4:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        3875a8:	73736f72 	cmnvc	r3, #456	; 0x1c8
        3875ac:	00545374 	subeqs	r5, r4, r4, ror r3
        3875b0:	6f726544 	swivs	0x00726544
        3875b4:	65636f6d 	strvsb	r6, [r3, -#3949]!
        3875b8:	70726573 	rsbvcs	r6, r2, r3, ror r5
        3875bc:	736f7200 	cmnvc	pc, #0	; 0x0
        3875c8:	eaffffee 	b	387588 <ClassInfo__20TLZStoreDecompressorSFv>
        3875cc:	ea5de286 	b	1afffec <TLZStoreDecompressor::$New(void)>
        3875d0:	ea5dbd4d 	b	1af6b0c <TLZStoreDecompressor::$Delete(void)>
        3875d4:	ea5dd612 	b	1afce24 <TLZStoreDecompressor::$Init(TStore *, unsigned long)>
        3875d8:	ea5dead6 	b	1b02138 <TLZStoreDecompressor::$Read(unsigned long, char *, long, unsigned long)>
        3875dc:	00000000 	andeq	r0, r0, r0
        3875e0:	00000048 	andeq	r0, r0, r8, asr #32
        3875e4:	0000005c 	andeq	r0, r0, ip, asr r0
        3875e8:	0000006b 	andeq	r0, r0, fp, rrx
        3875ec:	00000068 	andeq	r0, r0, r8, rrx
        3875f0:	0000007c 	andeq	r0, r0, ip, ror r0
        3875f4:	ea5e2cc7 	b	1b12918 <$Sizeof__23TZippyStoreDecompressorSFv>
        387600:	ea5e28a6 	b	1b118a0 <TZippyStoreDecompressor::$New(void)>
        387604:	ea5e1c59 	b	1b0e770 <TZippyStoreDecompressor::$Delete(void)>
        387614:	ea000001 	b	387620 <ClassInfo__23TZippyStoreDecompressorSFv+0x8>
    */
}

