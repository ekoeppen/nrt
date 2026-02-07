#include "include/TZippyCallbackCompressor.h"

/**
 * Symbol: Sizeof__24TZippyCallbackCompressorSFv
 * Address: 00284760
 */
void TZippyCallbackCompressor::Sizeof() {
    /*
        284760:	e3a00028 	mov	r0, #40	; 0x28
        284764:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyCallbackCompressor::New(void)
 * Address: 00284768
 */
TZippyCallbackCompressor::New(void) {
    /*
        284768:	e3a01000 	mov	r1, #0	; 0x0
        28476c:	e580101c 	str	r1, [r0, #28]	; fField28
        284770:	e5801020 	str	r1, [r0, #32]	; fField32
        284774:	e5801024 	str	r1, [r0, #36]	; fField36
        284778:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyCallbackCompressor::Delete(void)
 * Address: 0028477c
 */
TZippyCallbackCompressor::Delete(void) {
    /*
        28477c:	e1a0c00d 	mov	ip, sp
        284780:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        284784:	e24cb004 	sub	fp, ip, #4	; 0x4
        284788:	e1a04000 	mov	r4, r0
        28478c:	e590001c 	ldr	r0, [r0, #28]	; fField28
        284790:	eb6523d2 	bl	1bcd6e0 <$__dl(void *)>
        284794:	e5940020 	ldr	r0, [r4, #32]	; fField32
        284798:	eb6523d0 	bl	1bcd6e0 <$__dl(void *)>
        28479c:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        2847a0:	e3300000 	teq	r0, #0	; 0x0
        2847a4:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2847a8:	1a041376 	bne	389588 <TCompressor::Delete(void)>
        2847ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TZippyCallbackCompressor::Init(void *)
 * Address: 002847b0
 */
TZippyCallbackCompressor::Init(void *) {
    /*
        2847b0:	e1a0c00d 	mov	ip, sp
        2847b4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2847b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2847bc:	e1a04000 	mov	r4, r0
        2847c0:	e3a05000 	mov	r5, #0	; 0x0
        2847c4:	e28f1f13 	add	r1, pc, #76	; 0x4c
        2847c8:	e28f0f17 	add	r0, pc, #92	; 0x5c
        2847cc:	eb654cee 	bl	1bd7b8c <$NewByName__FPCcT1>
        2847d0:	e3a060e9 	mov	r6, #233	; 0xe9
        2847d4:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        2847d8:	e5840024 	str	r0, [r4, #36]	; fField36
        2847dc:	e3300000 	teq	r0, #0	; 0x0
        2847e0:	0a00000a 	beq	284810 <TZippyCallbackCompressor::Init(void *)+0x60>
        2847e4:	e3a00b01 	mov	r0, #1024	; 0x400
        2847e8:	eb6527d2 	bl	1bce738 <$__nw(unsigned int)>
        2847ec:	e584001c 	str	r0, [r4, #28]	; fField28
        2847f0:	e3a00f77 	mov	r0, #476	; 0x1dc
        2847f4:	e2800b01 	add	r0, r0, #1024	; 0x400
        2847f8:	eb6527ce 	bl	1bce738 <$__nw(unsigned int)>
        2847fc:	e5840020 	str	r0, [r4, #32]	; fField32
        284800:	e594101c 	ldr	r1, [r4, #28]	; fField28
        284804:	e3310000 	teq	r1, #0	; 0x0
        284808:	13300000 	teqne	r0, #0	; 0x0
        28480c:	1a000009 	bne	284838 <TZippyCallbackCompressor::Init(void *)+0x88>
        284810:	e1a05006 	mov	r5, r6
        284814:	ea000009 	b	284840 <TZippyCallbackCompressor::Init(void *)+0x90>
        284818:	545a6970 	ldrplb	r6, [sl], -#2416
        28481c:	7079436f 	rsbvcs	r4, r9, pc, ror #6
        284820:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        284824:	73736f72 	cmnvc	r3, #456	; 0x1c8
        284828:	00000000 	andeq	r0, r0, r0
        28482c:	54436f6d 	strplb	r6, [r3], -#3949
        284830:	70726573 	rsbvcs	r6, r2, r3, ror r5
        284834:	736f7200 	cmnvc	pc, #0	; 0x0
        284838:	e1a00004 	mov	r0, r4
        28483c:	eb649b5d 	bl	1bab5b8 <TZippyCallbackCompressor::$Reset(void)>
        284840:	e1a00005 	mov	r0, r5
        284844:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TZippyCallbackCompressor::Reset(void)
 * Address: 00284848
 */
TZippyCallbackCompressor::Reset(void) {
    /*
        284848:	e3a01000 	mov	r1, #0	; 0x0
        28484c:	e5a01018 	str	r1, [r0, #24]!	; fField24
        284850:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyCallbackCompressor::WriteChunk(void *, long)
 * Address: 00284854
 */
TZippyCallbackCompressor::WriteChunk(void *, long) {
    /*
        284854:	e1a0c00d 	mov	ip, sp
        284858:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        28485c:	e24cb004 	sub	fp, ip, #4	; 0x4
        284860:	e1a04000 	mov	r4, r0
        284864:	e1a06001 	mov	r6, r1
        284868:	e1b05002 	movs	r5, r2
        28486c:	e24dd004 	sub	sp, sp, #4	; 0x4
        284870:	e3a08000 	mov	r8, #0	; 0x0
        284874:	e3a09000 	mov	r9, #0	; 0x0
        284878:	0a000029 	beq	284924 <TZippyCallbackCompressor::WriteChunk(void *, long)+0xd0>
        28487c:	e3a0ab01 	mov	sl, #1024	; 0x400
        284880:	e5940018 	ldr	r0, [r4, #24]	; fField24
        284884:	e04a1000 	sub	r1, sl, r0
        284888:	e1550001 	cmp	r5, r1
        28488c:	b1a01005 	movlt	r1, r5
        284890:	e1a07001 	mov	r7, r1
        284894:	e594101c 	ldr	r1, [r4, #28]	; fField28
        284898:	e0811000 	add	r1, r1, r0
        28489c:	e0860009 	add	r0, r6, r9
        2848a0:	e1a02007 	mov	r2, r7
        2848a4:	eb6569aa 	bl	1bdef54 <$BlockMove>
        2848a8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2848ac:	e0800007 	add	r0, r0, r7
        2848b0:	e5840018 	str	r0, [r4, #24]	; fField24
        2848b4:	e3300b01 	teq	r0, #1024	; 0x400
        2848b8:	1a000016 	bne	284918 <TZippyCallbackCompressor::WriteChunk(void *, long)+0xc4>
        2848bc:	e3a03b01 	mov	r3, #1024	; 0x400
        2848c0:	e594201c 	ldr	r2, [r4, #28]	; fField28
        2848c4:	e92d000c 	stmdb	sp!, {r2, r3}
        2848c8:	e28d1008 	add	r1, sp, #8	; 0x8
        2848cc:	e3a03f77 	mov	r3, #476	; 0x1dc
        2848d0:	e2833b01 	add	r3, r3, #1024	; 0x400
        2848d4:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2848d8:	e5942020 	ldr	r2, [r4, #32]	; fField32
        2848dc:	eb041333 	bl	3895b0 <TCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        2848e0:	e28dd008 	add	sp, sp, #8	; 0x8
        2848e4:	e1b08000 	movs	r8, r0
        2848e8:	1a000006 	bne	284908 <TZippyCallbackCompressor::WriteChunk(void *, long)+0xb4>
        2848ec:	e5941020 	ldr	r1, [r4, #32]	; fField32
        2848f0:	e3a03000 	mov	r3, #0	; 0x0
        2848f4:	e59d2000 	ldr	r2, [sp]
        2848f8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2848fc:	e1a0e00f 	mov	lr, pc
        284900:	e594f010 	ldr	pc, [r4, #16]	; fField16
        284904:	e1a08000 	mov	r8, r0
        284908:	e3380000 	teq	r8, #0	; 0x0
        28490c:	1a000004 	bne	284924 <TZippyCallbackCompressor::WriteChunk(void *, long)+0xd0>
        284910:	e3a03000 	mov	r3, #0	; 0x0
        284914:	e5843018 	str	r3, [r4, #24]	; fField24
        284918:	e0555007 	subs	r5, r5, r7
        28491c:	e0899007 	add	r9, r9, r7
        284920:	1affffd6 	bne	284880 <TZippyCallbackCompressor::WriteChunk(void *, long)+0x2c>
        284924:	e1a00008 	mov	r0, r8
        284928:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TZippyCallbackCompressor::Flush(void)
 * Address: 0028492c
 */
TZippyCallbackCompressor::Flush(void) {
    /*
        28492c:	e1a0c00d 	mov	ip, sp
        284930:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        284934:	e24cb004 	sub	fp, ip, #4	; 0x4
        284938:	e1a04000 	mov	r4, r0
        28493c:	e3a00000 	mov	r0, #0	; 0x0
        284940:	e5943018 	ldr	r3, [r4, #24]	; fField24
        284944:	e3330000 	teq	r3, #0	; 0x0
        284948:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        28494c:	e24dd004 	sub	sp, sp, #4	; 0x4
        284950:	e594201c 	ldr	r2, [r4, #28]	; fField28
        284954:	e92d000c 	stmdb	sp!, {r2, r3}
        284958:	e28d1008 	add	r1, sp, #8	; 0x8
        28495c:	e3a03f77 	mov	r3, #476	; 0x1dc
        284960:	e2833b01 	add	r3, r3, #1024	; 0x400
        284964:	e5940024 	ldr	r0, [r4, #36]	; fField36
        284968:	e5942020 	ldr	r2, [r4, #32]	; fField32
        28496c:	eb04130f 	bl	3895b0 <TCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        284970:	e28dd008 	add	sp, sp, #8	; 0x8
        284974:	e3300000 	teq	r0, #0	; 0x0
        284978:	1a000005 	bne	284994 <TZippyCallbackCompressor::Flush(void)+0x68>
        28497c:	e5941020 	ldr	r1, [r4, #32]	; fField32
        284980:	e3a03001 	mov	r3, #1	; 0x1
        284984:	e59d2000 	ldr	r2, [sp]
        284988:	e5940014 	ldr	r0, [r4, #20]	; fField20
        28498c:	e1a0e00f 	mov	lr, pc
        284990:	e594f010 	ldr	pc, [r4, #16]	; fField16
        284994:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__24TZippyCallbackCompressorSFv
 * Address: 003899f4
 */
void TZippyCallbackCompressor::ClassInfo() {
    /*
        3899f4:	e24f0044 	sub	r0, pc, #68	; 0x44
        3899f8:	e1a0f00e 	mov	pc, lr
        3899fc:	e3a00000 	mov	r0, #0	; 0x0
        389a00:	e1a0f00e 	mov	pc, lr
        389a04:	545a6970 	ldrplb	r6, [sl], -#2416
        389a08:	70794361 	rsbvcs	r4, r9, r1, ror #6
        389a0c:	6c6c6261 	sfmvs	f6, 2, [ip], -#388
        389a10:	636b436f 	cmnvs	fp, #-1140850687	; 0xbc000001
        389a14:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        389a18:	73736f72 	cmnvc	r3, #456	; 0x1c8
        389a1c:	00544361 	subeqs	r4, r4, r1, ror #6
        389a20:	6c6c6261 	sfmvs	f6, 2, [ip], -#388
        389a24:	636b436f 	cmnvs	fp, #-1140850687	; 0xbc000001
        389a28:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        389a2c:	73736f72 	cmnvc	r3, #456	; 0x1c8
        389a30:	00545a69 	subeqs	r5, r4, r9, ror #20
        389a34:	70707952 	rsbvcs	r7, r0, r2, asr r9
        389a38:	656c6f63 	strvsb	r6, [ip, -#3939]!
        389a3c:	53746f72 	cmnpl	r4, #456	; 0x1c8
        389a40:	65446563 	strvsb	r6, [r4, -#1379]
        389a44:	6f6d7072 	swivs	0x006d7072
        389a48:	6573736f 	ldrvsb	r7, [r3, -#879]!
        389a4c:	72000054 	andvc	r0, r0, #84	; 0x54
        389a50:	5a697070 	bpl	1de5c18 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x1d53c0>
        389a54:	7953746f 	ldmvcdb	r3, {r0, r1, r2, r3, r5, r6, sl, ip, sp, lr}^
        389a58:	72654465 	rsbvc	r4, r5, #1694498816	; 0x65000000
        389a5c:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        389a60:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        389a64:	6f720000 	swivs	0x00720000
        389a70:	eaffffdf 	b	3899f4 <ClassInfo__24TZippyCallbackCompressorSFv>
        389a74:	ea6086cd 	b	1bab5b0 <TZippyCallbackCompressor::$New(void)>
        389a78:	ea6082a6 	b	1baa518 <TZippyCallbackCompressor::$Delete(void)>
        389a7c:	ea6086c1 	b	1bab588 <TZippyCallbackCompressor::$Init(void *)>
        389a80:	ea6086cc 	b	1bab5b8 <TZippyCallbackCompressor::$Reset(void)>
        389a84:	ea6086d7 	b	1bab5e8 <TZippyCallbackCompressor::$WriteChunk(void *, long)>
        389a88:	ea6082b4 	b	1baa560 <TZippyCallbackCompressor::$Flush(void)>
        389a8c:	00000000 	andeq	r0, r0, r0
        389a90:	00000048 	andeq	r0, r0, r8, asr #32
        389a94:	00000057 	andeq	r0, r0, r7, asr r0
        389a98:	00000061 	andeq	r0, r0, r1, rrx
        389a9c:	00000060 	andeq	r0, r0, r0, rrx
        389aa0:	00000074 	andeq	r0, r0, r4, ror r0
        389aa4:	ea6086c7 	b	1bab5c8 <$Sizeof__18TZippyDecompressorSFv>
        389ab0:	ea6086bd 	b	1bab5ac <TZippyDecompressor::$New(void)>
        389ab4:	ea608296 	b	1baa514 <TZippyDecompressor::$Delete(void)>
        389ac4:	ea000001 	b	389ad0 <ClassInfo__18TZippyDecompressorSFv+0x8>
    */
}

