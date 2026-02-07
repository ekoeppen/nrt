#include "include/TZippyRelocStoreDecompressor.h"

/**
 * Symbol: Sizeof__28TZippyRelocStoreDecompressorSFv
 * Address: 001faab8
 */
void TZippyRelocStoreDecompressor::Sizeof() {
    /*
        1faab8:	e3a0001c 	mov	r0, #28	; 0x1c
        1faabc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyRelocStoreDecompressor::New(void)
 * Address: 001faac0
 */
TZippyRelocStoreDecompressor::New(void) {
    /*
        1faac0:	e3a01000 	mov	r1, #0	; 0x0
        1faac4:	e5801010 	str	r1, [r0, #16]	; fField16
        1faac8:	e5801014 	str	r1, [r0, #20]	; fField20
        1faacc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyRelocStoreDecompressor::Delete(void)
 * Address: 001faad0
 */
TZippyRelocStoreDecompressor::Delete(void) {
    /*
        1faad0:	e1a0c00d 	mov	ip, sp
        1faad4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1faad8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1faadc:	e1a04000 	mov	r4, r0
        1faae0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1faae4:	e3300000 	teq	r0, #0	; 0x0
        1faae8:	1b063aec 	blne	3896a0 <TDecompressor::Delete(void)>
        1faaec:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        1faaf0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1faaf4:	ea674af9 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: TZippyRelocStoreDecompressor::Init(TStore *, unsigned long)
 * Address: 001faaf8
 */
TZippyRelocStoreDecompressor::Init(TStore *, unsigned long) {
    /*
        1faaf8:	e1a0c00d 	mov	ip, sp
        1faafc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1fab00:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fab04:	e1a04000 	mov	r4, r0
        1fab08:	e3a05000 	mov	r5, #0	; 0x0
        1fab0c:	e5801018 	str	r1, [r0, #24]	; fField24
        1fab10:	e3a00008 	mov	r0, #8	; 0x8
        1fab14:	e2800b01 	add	r0, r0, #1024	; 0x400
        1fab18:	eb674f06 	bl	1bce738 <$__nw(unsigned int)>
        1fab1c:	e3a060e9 	mov	r6, #233	; 0xe9
        1fab20:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        1fab24:	e5840010 	str	r0, [r4, #16]	; fField16
        1fab28:	e3300000 	teq	r0, #0	; 0x0
        1fab2c:	0a000005 	beq	1fab48 <TZippyRelocStoreDecompressor::Init(TStore *, unsigned long)+0x50>
        1fab30:	e28f1f07 	add	r1, pc, #28	; 0x1c
        1fab34:	e28f0f0b 	add	r0, pc, #44	; 0x2c
        1fab38:	eb677413 	bl	1bd7b8c <$NewByName__FPCcT1>
        1fab3c:	e5a40014 	str	r0, [r4, #20]!	; fField20
        1fab40:	e3300000 	teq	r0, #0	; 0x0
        1fab44:	1a000000 	bne	1fab4c <TZippyRelocStoreDecompressor::Init(TStore *, unsigned long)+0x54>
        1fab48:	e1a05006 	mov	r5, r6
        1fab4c:	e1a00005 	mov	r0, r5
        1fab50:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1fab54:	545a6970 	ldrplb	r6, [sl], -#2416
        1fab58:	70794465 	rsbvcs	r4, r9, r5, ror #8
        1fab5c:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        1fab60:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        1fab64:	6f720000 	swivs	0x00720000
        1fab68:	54446563 	strplb	r6, [r4], -#1379	; fField1379
        1fab6c:	6f6d7072 	swivs	0x006d7072
        1fab70:	6573736f 	ldrvsb	r7, [r3, -#879]!
        1fab74:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

/**
 * Symbol: TZippyRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)
 * Address: 001fab78
 */
TZippyRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long) {
    /*
        1fab78:	e1a0c00d 	mov	ip, sp
        1fab7c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1fab80:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1fab84:	e24cb014 	sub	fp, ip, #20	; 0x14
        1fab88:	e24ddd05 	sub	sp, sp, #320	; 0x140
        1fab8c:	e28d0008 	add	r0, sp, #8	; 0x8
        1fab90:	eb645f70 	bl	1b12958 <TSimpleCRelocator::$__ct(void)>
        1fab94:	e59b0004 	ldr	r0, [fp, #4]
        1fab98:	e28d3004 	add	r3, sp, #4	; 0x4
        1fab9c:	e5b01018 	ldr	r1, [r0, #24]!	; fField24
        1faba0:	e28d0008 	add	r0, sp, #8	; 0x8
        1faba4:	e59b2008 	ldr	r2, [fp, #8]
        1faba8:	eb645715 	bl	1b10804 <TSimpleCRelocator::$Init(TStore *, unsigned long, long *)>
        1fabac:	e1b04000 	movs	r4, r0
        1fabb0:	1a000009 	bne	1fabdc <TZippyRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0x64>
        1fabb4:	e3a03004 	mov	r3, #4	; 0x4
        1fabb8:	e92d0008 	stmdb	sp!, {r3}
        1fabbc:	e59b0004 	ldr	r0, [fp, #4]
        1fabc0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1fabc4:	e08d3003 	add	r3, sp, r3
        1fabc8:	e59d2008 	ldr	r2, [sp, #8]
        1fabcc:	e59b1008 	ldr	r1, [fp, #8]
        1fabd0:	eb641d5a 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fabd4:	e28dd004 	add	sp, sp, #4	; 0x4
        1fabd8:	e1a04000 	mov	r4, r0
        1fabdc:	e3340000 	teq	r4, #0	; 0x0
        1fabe0:	1a000005 	bne	1fabfc <TZippyRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0x84>
        1fabe4:	e59b0004 	ldr	r0, [fp, #4]
        1fabe8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1fabec:	e28d2f4f 	add	r2, sp, #316	; 0x13c
        1fabf0:	e59b1008 	ldr	r1, [fp, #8]
        1fabf4:	eb640041 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1fabf8:	e1a04000 	mov	r4, r0
        1fabfc:	e3340000 	teq	r4, #0	; 0x0
        1fac00:	1a000023 	bne	1fac94 <TZippyRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0x11c>
        1fac04:	e59d013c 	ldr	r0, [sp, #316]
        1fac08:	e2400004 	sub	r0, r0, #4	; 0x4
        1fac0c:	e59d1004 	ldr	r1, [sp, #4]
        1fac10:	e0403001 	sub	r3, r0, r1
        1fac14:	e58b3010 	str	r3, [fp, #16]	; fField16
        1fac18:	e92d0008 	stmdb	sp!, {r3}
        1fac1c:	e59b0004 	ldr	r0, [fp, #4]
        1fac20:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1fac24:	e59d1008 	ldr	r1, [sp, #8]
        1fac28:	e2812004 	add	r2, r1, #4	; 0x4
        1fac2c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1fac30:	e59b1008 	ldr	r1, [fp, #8]
        1fac34:	eb641d41 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fac38:	e28dd004 	add	sp, sp, #4	; 0x4
        1fac3c:	e1b04000 	movs	r4, r0
        1fac40:	1a000013 	bne	1fac94 <TZippyRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0x11c>
        1fac44:	e59b0004 	ldr	r0, [fp, #4]
        1fac48:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1fac4c:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1fac50:	e92d000c 	stmdb	sp!, {r2, r3}
        1fac54:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1fac58:	e59b200c 	ldr	r2, [fp, #12]
        1fac5c:	e28b1010 	add	r1, fp, #16	; 0x10
        1fac60:	e3a03b01 	mov	r3, #1024	; 0x400
        1fac64:	eb063a97 	bl	3896c8 <TDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        1fac68:	e28dd008 	add	sp, sp, #8	; 0x8
        1fac6c:	e28d0008 	add	r0, sp, #8	; 0x8
        1fac70:	e59b100c 	ldr	r1, [fp, #12]
        1fac74:	e59b2014 	ldr	r2, [fp, #20]	; fField20
        1fac78:	e1a0e00f 	mov	lr, pc
        1fac7c:	e59df008 	ldr	pc, [sp, #8]
        1fac80:	e28d3008 	add	r3, sp, #8	; 0x8
        1fac84:	e1a0000d 	mov	r0, sp
        1fac88:	e59b100c 	ldr	r1, [fp, #12]
        1fac8c:	e59b2014 	ldr	r2, [fp, #20]	; fField20
        1fac90:	eb616fb5 	bl	1a56b6c <$RelocateFramesInPage(FrameRelocationHeader *, char *, long, TCRelocator *)>
        1fac94:	e28d0008 	add	r0, sp, #8	; 0x8
        1fac98:	e3a01000 	mov	r1, #0	; 0x0
        1fac9c:	e59d2008 	ldr	r2, [sp, #8]
        1faca0:	e1a0e00f 	mov	lr, pc
        1faca4:	e282f008 	add	pc, r2, #8	; 0x8
        1faca8:	e1a00004 	mov	r0, r4
        1facac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__28TZippyRelocStoreDecompressorSFv
 * Address: 003877d4
 */
void TZippyRelocStoreDecompressor::ClassInfo() {
    /*
        3877d4:	e24f0044 	sub	r0, pc, #68	; 0x44
        3877d8:	e1a0f00e 	mov	pc, lr
        3877dc:	e3a00000 	mov	r0, #0	; 0x0
        3877e0:	e1a0f00e 	mov	pc, lr
        3877e4:	545a6970 	ldrplb	r6, [sl], -#2416
        3877e8:	70795265 	rsbvcs	r5, r9, r5, ror #4
        3877ec:	6c6f6353 	stcvsl	3, cr6, [pc], -#332
        3877f0:	746f7265 	strvcbt	r7, [pc], #265	; 3877f8 <ClassInfo__28TZippyRelocStoreDecompressorSFv+0x24>
        3877f4:	4465636f 	strmibt	r6, [r5], -#879
        3877f8:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        3877fc:	73736f72 	cmnvc	r3, #456	; 0x1c8
        387800:	00545374 	subeqs	r5, r4, r4, ror r3
        387804:	6f726544 	swivs	0x00726544
        387808:	65636f6d 	strvsb	r6, [r3, -#3949]!
        38780c:	70726573 	rsbvcs	r6, r2, r3, ror r5
        387810:	736f7200 	cmnvc	pc, #0	; 0x0
        38781c:	eaffffec 	b	3877d4 <ClassInfo__28TZippyRelocStoreDecompressorSFv>
        387820:	ea5e2820 	b	1b118a8 <TZippyRelocStoreDecompressor::$New(void)>
        387824:	ea5e1bd3 	b	1b0e778 <TZippyRelocStoreDecompressor::$Delete(void)>
        387828:	ea5e23fd 	b	1b10824 <TZippyRelocStoreDecompressor::$Init(TStore *, unsigned long)>
        38782c:	ea5e2826 	b	1b118cc <TZippyRelocStoreDecompressor::$Read(unsigned long, char *, long, unsigned long)>
        387830:	00000000 	andeq	r0, r0, r0
        387834:	00000048 	andeq	r0, r0, r8, asr #32
        387838:	0000005b 	andeq	r0, r0, fp, asr r0
        38783c:	00000067 	andeq	r0, r0, r7, rrx
        387840:	00000064 	andeq	r0, r0, r4, rrx
        387844:	00000088 	andeq	r0, r0, r8, lsl #1
        387848:	ea5e2c31 	b	1b12914 <$Sizeof__22TStoreCompanderWrapperSFv>
        387854:	ea5e2810 	b	1b1189c <TStoreCompanderWrapper::$New(void)>
        387858:	ea5e1385 	b	1b0c674 <TStoreCompanderWrapper::$Delete(void)>
        387868:	ea000001 	b	387874 <ClassInfo__22TStoreCompanderWrapperSFv+0x8>
    */
}

