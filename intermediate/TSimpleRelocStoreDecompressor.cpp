#include "include/TSimpleRelocStoreDecompressor.h"

/**
 * Symbol: Sizeof__29TSimpleRelocStoreDecompressorSFv
 * Address: 001f9f04
 */
void TSimpleRelocStoreDecompressor::Sizeof() {
    /*
        1f9f04:	e3a00014 	mov	r0, #20	; 0x14
        1f9f08:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSimpleRelocStoreDecompressor::New(void)
 * Address: 001f9f0c
 */
TSimpleRelocStoreDecompressor::New(void) {
    /*
        1f9f0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSimpleRelocStoreDecompressor::Delete(void)
 * Address: 001f9f10
 */
TSimpleRelocStoreDecompressor::Delete(void) {
    /*
        1f9f10:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSimpleRelocStoreDecompressor::Init(TStore *, unsigned long)
 * Address: 001f9f14
 */
TSimpleRelocStoreDecompressor::Init(TStore *, unsigned long) {
    /*
        1f9f14:	e5a01010 	str	r1, [r0, #16]!	; fField16
        1f9f18:	e3a00000 	mov	r0, #0	; 0x0
        1f9f1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSimpleRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)
 * Address: 001f9f20
 */
TSimpleRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long) {
    /*
        1f9f20:	e1a0c00d 	mov	ip, sp
        1f9f24:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1f9f28:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9f2c:	e1a05000 	mov	r5, r0
        1f9f30:	e1a04001 	mov	r4, r1
        1f9f34:	e1a06002 	mov	r6, r2
        1f9f38:	e59b8004 	ldr	r8, [fp, #4]
        1f9f3c:	e24ddd05 	sub	sp, sp, #320	; 0x140
        1f9f40:	e28d0008 	add	r0, sp, #8	; 0x8
        1f9f44:	eb646283 	bl	1b12958 <TSimpleCRelocator::$__ct(void)>
        1f9f48:	e28d3004 	add	r3, sp, #4	; 0x4
        1f9f4c:	e1a02004 	mov	r2, r4
        1f9f50:	e28d0008 	add	r0, sp, #8	; 0x8
        1f9f54:	e5951010 	ldr	r1, [r5, #16]	; fField16
        1f9f58:	eb645a29 	bl	1b10804 <TSimpleCRelocator::$Init(TStore *, unsigned long, long *)>
        1f9f5c:	e1b07000 	movs	r7, r0
        1f9f60:	1a000008 	bne	1f9f88 <TSimpleRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0x68>
        1f9f64:	e3a03004 	mov	r3, #4	; 0x4
        1f9f68:	e92d0008 	stmdb	sp!, {r3}
        1f9f6c:	e08d3003 	add	r3, sp, r3
        1f9f70:	e5950010 	ldr	r0, [r5, #16]	; fField16
        1f9f74:	e1a01004 	mov	r1, r4
        1f9f78:	e59d2008 	ldr	r2, [sp, #8]
        1f9f7c:	eb64206f 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1f9f80:	e28dd004 	add	sp, sp, #4	; 0x4
        1f9f84:	e1a07000 	mov	r7, r0
        1f9f88:	e3370000 	teq	r7, #0	; 0x0
        1f9f8c:	1a000004 	bne	1f9fa4 <TSimpleRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0x84>
        1f9f90:	e28d2f4f 	add	r2, sp, #316	; 0x13c
        1f9f94:	e1a01004 	mov	r1, r4
        1f9f98:	e5950010 	ldr	r0, [r5, #16]	; fField16
        1f9f9c:	eb640357 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1f9fa0:	e1a07000 	mov	r7, r0
        1f9fa4:	e3370000 	teq	r7, #0	; 0x0
        1f9fa8:	1a000016 	bne	1fa008 <TSimpleRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0xe8>
        1f9fac:	e59d013c 	ldr	r0, [sp, #316]
        1f9fb0:	e2401004 	sub	r1, r0, #4	; 0x4
        1f9fb4:	e59d0004 	ldr	r0, [sp, #4]
        1f9fb8:	e0413000 	sub	r3, r1, r0
        1f9fbc:	e92d0008 	stmdb	sp!, {r3}
        1f9fc0:	e2802004 	add	r2, r0, #4	; 0x4
        1f9fc4:	e1a03006 	mov	r3, r6
        1f9fc8:	e1a01004 	mov	r1, r4
        1f9fcc:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
        1f9fd0:	eb64205a 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1f9fd4:	e28dd004 	add	sp, sp, #4	; 0x4
        1f9fd8:	e1b07000 	movs	r7, r0
        1f9fdc:	1a000009 	bne	1fa008 <TSimpleRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0xe8>
        1f9fe0:	e28d0008 	add	r0, sp, #8	; 0x8
        1f9fe4:	e1a02008 	mov	r2, r8
        1f9fe8:	e1a01006 	mov	r1, r6
        1f9fec:	e1a0e00f 	mov	lr, pc
        1f9ff0:	e59df008 	ldr	pc, [sp, #8]
        1f9ff4:	e28d3008 	add	r3, sp, #8	; 0x8
        1f9ff8:	e1a02008 	mov	r2, r8
        1f9ffc:	e1a01006 	mov	r1, r6
        1fa000:	e1a0000d 	mov	r0, sp
        1fa004:	eb6172d8 	bl	1a56b6c <$RelocateFramesInPage(FrameRelocationHeader *, char *, long, TCRelocator *)>
        1fa008:	e28d0008 	add	r0, sp, #8	; 0x8
        1fa00c:	e3a01000 	mov	r1, #0	; 0x0
        1fa010:	e59d2008 	ldr	r2, [sp, #8]
        1fa014:	e1a0e00f 	mov	lr, pc
        1fa018:	e282f008 	add	pc, r2, #8	; 0x8
        1fa01c:	e1a00007 	mov	r0, r7
        1fa020:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__29TSimpleRelocStoreDecompressorSFv
 * Address: 003876a8
 */
void TSimpleRelocStoreDecompressor::ClassInfo() {
    /*
        3876a8:	e24f0044 	sub	r0, pc, #68	; 0x44
        3876ac:	e1a0f00e 	mov	pc, lr
        3876b0:	e3a00000 	mov	r0, #0	; 0x0
        3876b4:	e1a0f00e 	mov	pc, lr
        3876b8:	5453696d 	ldrplb	r6, [r3], -#2413
        3876bc:	706c6552 	rsbvc	r6, ip, r2, asr r5
        3876c0:	656c6f63 	strvsb	r6, [ip, -#3939]!
        3876c4:	53746f72 	cmnpl	r4, #456	; 0x1c8
        3876c8:	65446563 	strvsb	r6, [r4, -#1379]
        3876cc:	6f6d7072 	swivs	0x006d7072
        3876d0:	6573736f 	ldrvsb	r7, [r3, -#879]!
        3876d4:	72005453 	andvc	r5, r0, #1392508928	; 0x53000000
        3876d8:	746f7265 	strvcbt	r7, [pc], #265	; 3876e0 <ClassInfo__29TSimpleRelocStoreDecompressorSFv+0x38>
        3876dc:	4465636f 	strmibt	r6, [r5], -#879
        3876e0:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        3876e4:	73736f72 	cmnvc	r3, #456	; 0x1c8
        3876f0:	eaffffec 	b	3876a8 <ClassInfo__29TSimpleRelocStoreDecompressorSFv>
        3876f4:	ea5e286c 	b	1b118ac <TSimpleRelocStoreDecompressor::$New(void)>
        3876f8:	ea5e1c1f 	b	1b0e77c <TSimpleRelocStoreDecompressor::$Delete(void)>
        3876fc:	eaf9ca04 	b	1f9f14 <TSimpleRelocStoreDecompressor::Init(TStore *, unsigned long)>
        387700:	ea5e13d4 	b	1b0c658 <TSimpleRelocStoreDecompressor::$Read(unsigned long, char *, long, unsigned long)>
        387704:	00000000 	andeq	r0, r0, r0
        387708:	00000048 	andeq	r0, r0, r8, asr #32
        38770c:	0000005e 	andeq	r0, r0, lr, asr r0
        387710:	0000006d 	andeq	r0, r0, sp, rrx
        387714:	0000006c 	andeq	r0, r0, ip, rrx
        387718:	00000080 	andeq	r0, r0, r0, lsl #1
        38771c:	ea5e2c7e 	b	1b1291c <$Sizeof__25TLZRelocStoreDecompressorSFv>
        387728:	ea5e285d 	b	1b118a4 <TLZRelocStoreDecompressor::$New(void)>
        38772c:	ea5e1c10 	b	1b0e774 <TLZRelocStoreDecompressor::$Delete(void)>
        38773c:	ea000001 	b	387748 <ClassInfo__25TLZRelocStoreDecompressorSFv+0x8>
    */
}

