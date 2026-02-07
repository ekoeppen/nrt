#include "include/TSimpleStoreDecompressor.h"

/**
 * Symbol: Sizeof__24TSimpleStoreDecompressorSFv
 * Address: 001fa9b0
 */
void TSimpleStoreDecompressor::Sizeof() {
    /*
        1fa9b0:	e3a00014 	mov	r0, #20	; 0x14
        1fa9b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSimpleStoreDecompressor::New(void)
 * Address: 001facf0
 */
TSimpleStoreDecompressor::New(void) {
    /*
        1facf0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSimpleStoreDecompressor::Delete(void)
 * Address: 001fae48
 */
TSimpleStoreDecompressor::Delete(void) {
    /*
        1fae48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSimpleStoreDecompressor::Init(TStore *, unsigned long)
 * Address: 001fae4c
 */
TSimpleStoreDecompressor::Init(TStore *, unsigned long) {
    /*
        1fae4c:	e5a01010 	str	r1, [r0, #16]!	; fField16
        1fae50:	e3a00000 	mov	r0, #0	; 0x0
        1fae54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSimpleStoreDecompressor::Read(unsigned long, char *, long, unsigned long)
 * Address: 001fae58
 */
TSimpleStoreDecompressor::Read(unsigned long, char *, long, unsigned long) {
    /*
        1fae58:	e1a0c00d 	mov	ip, sp
        1fae5c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1fae60:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fae64:	e1a05000 	mov	r5, r0
        1fae68:	e1a04001 	mov	r4, r1
        1fae6c:	e1a07002 	mov	r7, r2
        1fae70:	e1a06003 	mov	r6, r3
        1fae74:	e59b9004 	ldr	r9, [fp, #4]
        1fae78:	e24dd008 	sub	sp, sp, #8	; 0x8
        1fae7c:	e3a03004 	mov	r3, #4	; 0x4
        1fae80:	e92d0008 	stmdb	sp!, {r3}
        1fae84:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1fae88:	e08d3003 	add	r3, sp, r3
        1fae8c:	e3a02000 	mov	r2, #0	; 0x0
        1fae90:	eb641caa 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fae94:	e28dd004 	add	sp, sp, #4	; 0x4
        1fae98:	e1b08000 	movs	r8, r0
        1fae9c:	1a000017 	bne	1faf00 <TSimpleStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0xa8>
        1faea0:	e28d2004 	add	r2, sp, #4	; 0x4
        1faea4:	e1a01004 	mov	r1, r4
        1faea8:	e5950010 	ldr	r0, [r5, #16]	; fField16
        1faeac:	eb63ff93 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1faeb0:	e1b08000 	movs	r8, r0
        1faeb4:	1a000011 	bne	1faf00 <TSimpleStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0xa8>
        1faeb8:	e59d0004 	ldr	r0, [sp, #4]
        1faebc:	e2400004 	sub	r0, r0, #4	; 0x4
        1faec0:	e1500006 	cmp	r0, r6
        1faec4:	a1a03006 	movge	r3, r6
        1faec8:	b1a03000 	movlt	r3, r0
        1faecc:	e92d0008 	stmdb	sp!, {r3}
        1faed0:	e1a03007 	mov	r3, r7
        1faed4:	e1a01004 	mov	r1, r4
        1faed8:	e3a02004 	mov	r2, #4	; 0x4
        1faedc:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
        1faee0:	eb641c96 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1faee4:	e28dd004 	add	sp, sp, #4	; 0x4
        1faee8:	e1b08000 	movs	r8, r0
        1faeec:	1a000003 	bne	1faf00 <TSimpleStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0xa8>
        1faef0:	e1a02009 	mov	r2, r9
        1faef4:	e1a01007 	mov	r1, r7
        1faef8:	e1a0000d 	mov	r0, sp
        1faefc:	eb67d220 	bl	1bef784 <$RelocateFramesInPage(FrameRelocationHeader *, char *, long)>
        1faf00:	e1a00008 	mov	r0, r8
        1faf04:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__24TSimpleStoreDecompressorSFv
 * Address: 003874f4
 */
void TSimpleStoreDecompressor::ClassInfo() {
    /*
        3874f4:	e24f0044 	sub	r0, pc, #68	; 0x44
        3874f8:	e1a0f00e 	mov	pc, lr
        3874fc:	e3a00000 	mov	r0, #0	; 0x0
        387500:	e1a0f00e 	mov	pc, lr
        387504:	5453696d 	ldrplb	r6, [r3], -#2413
        387508:	706c6553 	rsbvc	r6, ip, r3, asr r5
        38750c:	746f7265 	strvcbt	r7, [pc], #265	; 387514 <ClassInfo__24TSimpleStoreDecompressorSFv+0x20>
        387510:	4465636f 	strmibt	r6, [r5], -#879
        387514:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        387518:	73736f72 	cmnvc	r3, #456	; 0x1c8
        38751c:	00545374 	subeqs	r5, r4, r4, ror r3
        387520:	6f726544 	swivs	0x00726544
        387524:	65636f6d 	strvsb	r6, [r3, -#3949]!
        387528:	70726573 	rsbvcs	r6, r2, r3, ror r5
        38752c:	736f7200 	cmnvc	pc, #0	; 0x0
        387538:	eaffffed 	b	3874f4 <ClassInfo__24TSimpleStoreDecompressorSFv>
        38753c:	ea5de2ac 	b	1affff4 <TSimpleStoreDecompressor::$New(void)>
        387540:	ea5dbd73 	b	1af6b14 <TSimpleStoreDecompressor::$Delete(void)>
        387544:	ea5dd63a 	b	1afce34 <TSimpleStoreDecompressor::$Init(TStore *, unsigned long)>
        387548:	ea5deafb 	b	1b0213c <TSimpleStoreDecompressor::$Read(unsigned long, char *, long, unsigned long)>
        38754c:	00000000 	andeq	r0, r0, r0
        387550:	00000048 	andeq	r0, r0, r8, asr #32
        387554:	00000059 	andeq	r0, r0, r9, asr r0
        387558:	00000068 	andeq	r0, r0, r8, rrx
        38755c:	00000068 	andeq	r0, r0, r8, rrx
        387560:	0000007c 	andeq	r0, r0, ip, ror r0
        387564:	ea5dfb83 	b	1b06378 <$Sizeof__20TLZStoreDecompressorSFv>
        387570:	ea5de29d 	b	1afffec <TLZStoreDecompressor::$New(void)>
        387574:	ea5dbd64 	b	1af6b0c <TLZStoreDecompressor::$Delete(void)>
        387584:	ea000001 	b	387590 <ClassInfo__20TLZStoreDecompressorSFv+0x8>
    */
}

