#include "include/TZippyStoreDecompressor.h"

/**
 * Symbol: Sizeof__23TZippyStoreDecompressorSFv
 * Address: 001facb0
 */
void TZippyStoreDecompressor::Sizeof() {
    /*
        1facb0:	e3a0001c 	mov	r0, #28	; 0x1c
        1facb4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyStoreDecompressor::New(void)
 * Address: 001facb8
 */
TZippyStoreDecompressor::New(void) {
    /*
        1facb8:	e3a01000 	mov	r1, #0	; 0x0
        1facbc:	e5801010 	str	r1, [r0, #16]	; fField16
        1facc0:	e5801014 	str	r1, [r0, #20]	; fField20
        1facc4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyStoreDecompressor::Delete(void)
 * Address: 001facc8
 */
TZippyStoreDecompressor::Delete(void) {
    /*
        1facc8:	e1a0c00d 	mov	ip, sp
        1faccc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1facd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1facd4:	e1a04000 	mov	r4, r0
        1facd8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1facdc:	e3300000 	teq	r0, #0	; 0x0
        1face0:	1b063a6e 	blne	3896a0 <TDecompressor::Delete(void)>
        1face4:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        1face8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1facec:	ea674a7b 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: TZippyStoreDecompressor::Init(TStore *, unsigned long)
 * Address: 001facf4
 */
TZippyStoreDecompressor::Init(TStore *, unsigned long) {
    /*
        1facf4:	e1a0c00d 	mov	ip, sp
        1facf8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1facfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fad00:	e1a04000 	mov	r4, r0
        1fad04:	e3a05000 	mov	r5, #0	; 0x0
        1fad08:	e5801018 	str	r1, [r0, #24]	; fField24
        1fad0c:	e3a00008 	mov	r0, #8	; 0x8
        1fad10:	e2800b01 	add	r0, r0, #1024	; 0x400
        1fad14:	eb674e87 	bl	1bce738 <$__nw(unsigned int)>
        1fad18:	e5840010 	str	r0, [r4, #16]	; fField16
        1fad1c:	e3a060e9 	mov	r6, #233	; 0xe9
        1fad20:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        1fad24:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1fad28:	e3300000 	teq	r0, #0	; 0x0
        1fad2c:	0a000005 	beq	1fad48 <TZippyStoreDecompressor::Init(TStore *, unsigned long)+0x54>
        1fad30:	e28f1f07 	add	r1, pc, #28	; 0x1c
        1fad34:	e28f0f0b 	add	r0, pc, #44	; 0x2c
        1fad38:	eb677393 	bl	1bd7b8c <$NewByName__FPCcT1>
        1fad3c:	e5a40014 	str	r0, [r4, #20]!	; fField20
        1fad40:	e3300000 	teq	r0, #0	; 0x0
        1fad44:	1a000000 	bne	1fad4c <TZippyStoreDecompressor::Init(TStore *, unsigned long)+0x58>
        1fad48:	e1a05006 	mov	r5, r6
        1fad4c:	e1a00005 	mov	r0, r5
        1fad50:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1fad54:	545a6970 	ldrplb	r6, [sl], -#2416
        1fad58:	70794465 	rsbvcs	r4, r9, r5, ror #8
        1fad5c:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        1fad60:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        1fad64:	6f720000 	swivs	0x00720000
        1fad68:	54446563 	strplb	r6, [r4], -#1379	; fField1379
        1fad6c:	6f6d7072 	swivs	0x006d7072
        1fad70:	6573736f 	ldrvsb	r7, [r3, -#879]!
        1fad74:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

/**
 * Symbol: TZippyStoreDecompressor::Read(unsigned long, char *, long, unsigned long)
 * Address: 001fad78
 */
TZippyStoreDecompressor::Read(unsigned long, char *, long, unsigned long) {
    /*
        1fad78:	e1a0c00d 	mov	ip, sp
        1fad7c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1fad80:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1fad84:	e24cb014 	sub	fp, ip, #20	; 0x14
        1fad88:	e24dd008 	sub	sp, sp, #8	; 0x8
        1fad8c:	e3a03004 	mov	r3, #4	; 0x4
        1fad90:	e92d0008 	stmdb	sp!, {r3}
        1fad94:	e59b0004 	ldr	r0, [fp, #4]
        1fad98:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1fad9c:	e08d3003 	add	r3, sp, r3
        1fada0:	e3a02000 	mov	r2, #0	; 0x0
        1fada4:	e59b1008 	ldr	r1, [fp, #8]
        1fada8:	eb641ce4 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fadac:	e28dd004 	add	sp, sp, #4	; 0x4
        1fadb0:	e1b04000 	movs	r4, r0
        1fadb4:	1a000021 	bne	1fae40 <TZippyStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0xc8>
        1fadb8:	e59b0004 	ldr	r0, [fp, #4]
        1fadbc:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1fadc0:	e28d2004 	add	r2, sp, #4	; 0x4
        1fadc4:	e59b1008 	ldr	r1, [fp, #8]
        1fadc8:	eb63ffcc 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1fadcc:	e1b04000 	movs	r4, r0
        1fadd0:	1a00001a 	bne	1fae40 <TZippyStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0xc8>
        1fadd4:	e59d0004 	ldr	r0, [sp, #4]
        1fadd8:	e2403004 	sub	r3, r0, #4	; 0x4
        1faddc:	e58b3010 	str	r3, [fp, #16]	; fField16
        1fade0:	e92d0008 	stmdb	sp!, {r3}
        1fade4:	e59b0004 	ldr	r0, [fp, #4]
        1fade8:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1fadec:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1fadf0:	e3a02004 	mov	r2, #4	; 0x4
        1fadf4:	e59b1008 	ldr	r1, [fp, #8]
        1fadf8:	eb641cd0 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fadfc:	e28dd004 	add	sp, sp, #4	; 0x4
        1fae00:	e1b04000 	movs	r4, r0
        1fae04:	1a00000d 	bne	1fae40 <TZippyStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0xc8>
        1fae08:	e59b0004 	ldr	r0, [fp, #4]
        1fae0c:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1fae10:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1fae14:	e92d000c 	stmdb	sp!, {r2, r3}
        1fae18:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1fae1c:	e59b200c 	ldr	r2, [fp, #12]
        1fae20:	e28b1010 	add	r1, fp, #16	; 0x10
        1fae24:	e3a03b01 	mov	r3, #1024	; 0x400
        1fae28:	eb063a26 	bl	3896c8 <TDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        1fae2c:	e28dd008 	add	sp, sp, #8	; 0x8
        1fae30:	e1a0000d 	mov	r0, sp
        1fae34:	e59b100c 	ldr	r1, [fp, #12]
        1fae38:	e59b2014 	ldr	r2, [fp, #20]	; fField20
        1fae3c:	eb67d250 	bl	1bef784 <$RelocateFramesInPage(FrameRelocationHeader *, char *, long)>
        1fae40:	e1a00004 	mov	r0, r4
        1fae44:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__23TZippyStoreDecompressorSFv
 * Address: 00387618
 */
void TZippyStoreDecompressor::ClassInfo() {
    /*
        387618:	e24f0044 	sub	r0, pc, #68	; 0x44
        38761c:	e1a0f00e 	mov	pc, lr
        387620:	e3a00000 	mov	r0, #0	; 0x0
        387624:	e1a0f00e 	mov	pc, lr
        387628:	545a6970 	ldrplb	r6, [sl], -#2416
        38762c:	70795374 	rsbvcs	r5, r9, r4, ror r3
        387630:	6f726544 	swivs	0x00726544
        387634:	65636f6d 	strvsb	r6, [r3, -#3949]!
        387638:	70726573 	rsbvcs	r6, r2, r3, ror r5
        38763c:	736f7200 	cmnvc	pc, #0	; 0x0
        387640:	5453746f 	ldrplb	r7, [r3], -#1135
        387644:	72654465 	rsbvc	r4, r5, #1694498816	; 0x65000000
        387648:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        38764c:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        387650:	6f720000 	swivs	0x00720000
        387654:	00000000 	andeq	r0, r0, r0
        387658:	eaffffee 	b	387618 <ClassInfo__23TZippyStoreDecompressorSFv>
        38765c:	ea5e288f 	b	1b118a0 <TZippyStoreDecompressor::$New(void)>
        387660:	ea5e1c42 	b	1b0e770 <TZippyStoreDecompressor::$Delete(void)>
        387664:	ea5e246c 	b	1b1081c <TZippyStoreDecompressor::$Init(TStore *, unsigned long)>
        387668:	ea5e2896 	b	1b118c8 <TZippyStoreDecompressor::$Read(unsigned long, char *, long, unsigned long)>
        38766c:	00000000 	andeq	r0, r0, r0
        387670:	00000048 	andeq	r0, r0, r8, asr #32
        387674:	00000062 	andeq	r0, r0, r2, rrx
        387678:	00000071 	andeq	r0, r0, r1, ror r0
        38767c:	00000070 	andeq	r0, r0, r0, ror r0
        387680:	00000084 	andeq	r0, r0, r4, lsl #1
        387684:	ea5e2ca6 	b	1b12924 <$Sizeof__29TSimpleRelocStoreDecompressorSFv>
        387690:	ea5e2885 	b	1b118ac <TSimpleRelocStoreDecompressor::$New(void)>
        387694:	ea5e1c38 	b	1b0e77c <TSimpleRelocStoreDecompressor::$Delete(void)>
        3876a4:	ea000001 	b	3876b0 <ClassInfo__29TSimpleRelocStoreDecompressorSFv+0x8>
    */
}

