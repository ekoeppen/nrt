#include "include/TZippyCompressor.h"

/**
 * Symbol: Sizeof__16TZippyCompressorSFv
 * Address: 00284744
 */
void TZippyCompressor::Sizeof() {
    /*
        284744:	e3a00094 	mov	r0, #148	; 0x94
        284748:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyCompressor::New(void)
 * Address: 0028474c
 */
TZippyCompressor::New(void) {
    /*
        28474c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyCompressor::EstimatedCompressedSize(void *, unsigned long)
 * Address: 00284750
 */
TZippyCompressor::EstimatedCompressedSize(void *, unsigned long) {
    /*
        284750:	e2820008 	add	r0, r2, #8	; 0x8
        284754:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyCompressor::HeaderSize(void)
 * Address: 00284758
 */
TZippyCompressor::HeaderSize(void) {
    /*
        284758:	e3a00008 	mov	r0, #8	; 0x8
        28475c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyCompressor::Delete(void)
 * Address: 002849bc
 */
TZippyCompressor::Delete(void) {
    /*
        2849bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyCompressor::Init(void *)
 * Address: 002849c0
 */
TZippyCompressor::Init(void *) {
    /*
        2849c0:	e3a00000 	mov	r0, #0	; 0x0
        2849c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyCompressor::Finish(void *, unsigned long)
 * Address: 002849c8
 */
TZippyCompressor::Finish(void *, unsigned long) {
    /*
        2849c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyCompressor::InitCache(void)
 * Address: 002849cc
 */
TZippyCompressor::InitCache(void) {
    /*
        2849cc:	e3a03000 	mov	r3, #0	; 0x0
        2849d0:	e3a01000 	mov	r1, #0	; 0x0
        2849d4:	e3e0c000 	mvn	ip, #0	; 0x0
        2849d8:	e5803010 	str	r3, [r0, #16]	; fField16
        2849dc:	e0802101 	add	r2, r0, r1, lsl #2
        2849e0:	e2811001 	add	r1, r1, #1	; 0x1
        2849e4:	e5a2c014 	str	ip, [r2, #20]!	; fField20
        2849e8:	e5823040 	str	r3, [r2, #64]
        2849ec:	e3510010 	cmp	r1, #16	; 0x10
        2849f0:	bafffff9 	blt	2849dc <TZippyCompressor::InitCache(void)+0x10>
        2849f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyCompressor::CacheAndCompress(unsigned long, ByteAccessor *)
 * Address: 002849f8
 */
TZippyCompressor::CacheAndCompress(unsigned long, ByteAccessor *) {
    /*
        2849f8:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        2849fc:	e3e0e102 	mvn	lr, #-2147483648	; 0x80000000
        284a00:	e3a03000 	mov	r3, #0	; 0x0
        284a04:	e3310000 	teq	r1, #0	; 0x0
        284a08:	e5823004 	str	r3, [r2, #4]	; fField4
        284a0c:	03a00002 	moveq	r0, #2	; 0x2
        284a10:	05823000 	streq	r3, [r2]
        284a14:	08bd80f0 	ldmeqia	sp!, {r4, r5, r6, r7, pc}
        284a18:	e5903010 	ldr	r3, [r0, #16]	; fField16
        284a1c:	e2835001 	add	r5, r3, #1	; 0x1
        284a20:	e3a03000 	mov	r3, #0	; 0x0
        284a24:	e3c14b0f 	bic	r4, r1, #15360	; 0x3c00
        284a28:	e3c44ffe 	bic	r4, r4, #1016	; 0x3f8
        284a2c:	e5805010 	str	r5, [r0, #16]	; fField16
        284a30:	e080c103 	add	ip, r0, r3, lsl #2
        284a34:	e59c7014 	ldr	r7, [ip, #20]	; fField20
        284a38:	e157000e 	cmp	r7, lr
        284a3c:	b1a06003 	movlt	r6, r3
        284a40:	b1a0e007 	movlt	lr, r7
        284a44:	e59c7054 	ldr	r7, [ip, #84]
        284a48:	e1370001 	teq	r7, r1
        284a4c:	1a000008 	bne	284a74 <TZippyCompressor::CacheAndCompress(unsigned long, ByteAccessor *)+0x7c>
        284a50:	e0800103 	add	r0, r0, r3, lsl #2
        284a54:	e5a05014 	str	r5, [r0, #20]!	; fField20
        284a58:	e3a00102 	mov	r0, #-2147483648	; 0x80000000
        284a5c:	e5820000 	str	r0, [r2]
        284a60:	e5d20000 	ldrb	r0, [r2]
        284a64:	e1800103 	orr	r0, r0, r3, lsl #2
        284a68:	e5c20000 	strb	r0, [r2]
        284a6c:	e3a00006 	mov	r0, #6	; 0x6
        284a70:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        284a74:	e3c77b0f 	bic	r7, r7, #15360	; 0x3c00
        284a78:	e3c77ffe 	bic	r7, r7, #1016	; 0x3f8
        284a7c:	e1340007 	teq	r4, r7
        284a80:	1a000019 	bne	284aec <TZippyCompressor::CacheAndCompress(unsigned long, ByteAccessor *)+0xf4>
        284a84:	e080e103 	add	lr, r0, r3, lsl #2
        284a88:	e5ae1054 	str	r1, [lr, #84]!
        284a8c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        284a90:	e5ac0014 	str	r0, [ip, #20]!	; fField20
        284a94:	e1a00901 	mov	r0, r1, lsl #18
        284a98:	e1a00920 	mov	r0, r0, lsr #18
        284a9c:	e3c00007 	bic	r0, r0, #7	; 0x7
        284aa0:	e52d0008 	str	r0, [sp, -#8]!
        284aa4:	e5dd0003 	ldrb	r0, [sp, #3]
        284aa8:	e1a00200 	mov	r0, r0, lsl #4
        284aac:	e20000ff 	and	r0, r0, #255	; 0xff
        284ab0:	e59d1000 	ldr	r1, [sp]
        284ab4:	e1a01221 	mov	r1, r1, lsr #4
        284ab8:	e58d1000 	str	r1, [sp]
        284abc:	e5dd1002 	ldrb	r1, [sp, #2]	; fField2
        284ac0:	e3811040 	orr	r1, r1, #64	; 0x40
        284ac4:	e5c21000 	strb	r1, [r2]
        284ac8:	e5d21000 	ldrb	r1, [r2]
        284acc:	e1811103 	orr	r1, r1, r3, lsl #2
        284ad0:	e5c21000 	strb	r1, [r2]
        284ad4:	e5dd1003 	ldrb	r1, [sp, #3]
        284ad8:	e5c21001 	strb	r1, [r2, #1]	; fField1
        284adc:	e5c20002 	strb	r0, [r2, #2]	; fField2
        284ae0:	e28dd008 	add	sp, sp, #8	; 0x8
        284ae4:	e3a00011 	mov	r0, #17	; 0x11
        284ae8:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        284aec:	e2833001 	add	r3, r3, #1	; 0x1
        284af0:	e3530010 	cmp	r3, #16	; 0x10
        284af4:	baffffcd 	blt	284a30 <TZippyCompressor::CacheAndCompress(unsigned long, ByteAccessor *)+0x38>
        284af8:	e0803106 	add	r3, r0, r6, lsl #2
        284afc:	e5831054 	str	r1, [r3, #84]
        284b00:	e5900010 	ldr	r0, [r0, #16]	; fField16
        284b04:	e5a30014 	str	r0, [r3, #20]!	; fField20
        284b08:	e24dd008 	sub	sp, sp, #8	; 0x8
        284b0c:	e1a00121 	mov	r0, r1, lsr #2
        284b10:	e3800103 	orr	r0, r0, #-1073741824	; 0xc0000000
        284b14:	e5820000 	str	r0, [r2]
        284b18:	e1a00301 	mov	r0, r1, lsl #6
        284b1c:	e58d0000 	str	r0, [sp]
        284b20:	e5dd0003 	ldrb	r0, [sp, #3]
        284b24:	e5c20004 	strb	r0, [r2, #4]	; fField4
        284b28:	e28dd008 	add	sp, sp, #8	; 0x8
        284b2c:	e3a00022 	mov	r0, #34	; 0x22
        284b30:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: TZippyCompressor::StuffBits(unsigned char **, long *, long, ByteAccessor)
 * Address: 00284b34
 */
TZippyCompressor::StuffBits(unsigned char **, long *, long, ByteAccessor) {
    /*
        284b34:	e1a0c00d 	mov	ip, sp
        284b38:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        284b3c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        284b40:	e24cb014 	sub	fp, ip, #20	; 0x14
        284b44:	e24dd008 	sub	sp, sp, #8	; 0x8
        284b48:	e3a00000 	mov	r0, #0	; 0x0
        284b4c:	e592c000 	ldr	ip, [r2]
        284b50:	e33c0000 	teq	ip, #0	; 0x0
        284b54:	0591c000 	ldreq	ip, [r1]
        284b58:	05cc0000 	streqb	r0, [ip]
        284b5c:	e3530006 	cmp	r3, #6	; 0x6
        284b60:	ca00001c 	bgt	284bd8 <TZippyCompressor::StuffBits(unsigned char **, long *, long, ByteAccessor)+0xa4>
        284b64:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        284b68:	e592c000 	ldr	ip, [r2]
        284b6c:	e1a00c30 	mov	r0, r0, lsr ip
        284b70:	e58d0000 	str	r0, [sp]
        284b74:	e5910000 	ldr	r0, [r1]
        284b78:	e5d0e000 	ldrb	lr, [r0]
        284b7c:	e5ddc000 	ldrb	ip, [sp]
        284b80:	e18ec00c 	orr	ip, lr, ip
        284b84:	e5c0c000 	strb	ip, [r0]
        284b88:	e2630008 	rsb	r0, r3, #8	; 0x8
        284b8c:	e592c000 	ldr	ip, [r2]
        284b90:	e150000c 	cmp	r0, ip
        284b94:	ba000008 	blt	284bbc <TZippyCompressor::StuffBits(unsigned char **, long *, long, ByteAccessor)+0x88>
        284b98:	e09c0003 	adds	r0, ip, r3
        284b9c:	e5820000 	str	r0, [r2]
        284ba0:	e1a03000 	mov	r3, r0
        284ba4:	42800007 	addmi	r0, r0, #7	; 0x7
        284ba8:	e1a001c0 	mov	r0, r0, asr #3
        284bac:	e3500000 	cmp	r0, #0	; 0x0
        284bb0:	c2430008 	subgt	r0, r3, #8	; 0x8
        284bb4:	ca000005 	bgt	284bd0 <TZippyCompressor::StuffBits(unsigned char **, long *, long, ByteAccessor)+0x9c>
        284bb8:	ea000061 	b	284d44 <TZippyCompressor::StuffBits(unsigned char **, long *, long, ByteAccessor)+0x210>
        284bbc:	e5dd3001 	ldrb	r3, [sp, #1]	; fField1
        284bc0:	e591c000 	ldr	ip, [r1]
        284bc4:	e5cc3001 	strb	r3, [ip, #1]	; fField1
        284bc8:	e5923000 	ldr	r3, [r2]
        284bcc:	e0430000 	sub	r0, r3, r0
        284bd0:	e5820000 	str	r0, [r2]
        284bd4:	ea00001b 	b	284c48 <TZippyCompressor::StuffBits(unsigned char **, long *, long, ByteAccessor)+0x114>
        284bd8:	e3330011 	teq	r3, #17	; 0x11
        284bdc:	1a00001c 	bne	284c54 <TZippyCompressor::StuffBits(unsigned char **, long *, long, ByteAccessor)+0x120>
        284be0:	e59b3014 	ldr	r3, [fp, #20]	; fField20
        284be4:	e5920000 	ldr	r0, [r2]
        284be8:	e1a00033 	mov	r0, r3, lsr r0
        284bec:	e58d0000 	str	r0, [sp]
        284bf0:	e5910000 	ldr	r0, [r1]
        284bf4:	e5d03000 	ldrb	r3, [r0]
        284bf8:	e5ddc000 	ldrb	ip, [sp]
        284bfc:	e183300c 	orr	r3, r3, ip
        284c00:	e5c03000 	strb	r3, [r0]
        284c04:	e5dd3001 	ldrb	r3, [sp, #1]	; fField1
        284c08:	e5910000 	ldr	r0, [r1]
        284c0c:	e5c03001 	strb	r3, [r0, #1]	; fField1
        284c10:	e5dd0002 	ldrb	r0, [sp, #2]	; fField2
        284c14:	e5913000 	ldr	r3, [r1]
        284c18:	e5c30002 	strb	r0, [r3, #2]	; fField2
        284c1c:	e5910000 	ldr	r0, [r1]
        284c20:	e2800002 	add	r0, r0, #2	; 0x2
        284c24:	e5810000 	str	r0, [r1]
        284c28:	e5920000 	ldr	r0, [r2]
        284c2c:	e2900011 	adds	r0, r0, #17	; 0x11
        284c30:	42600000 	rsbmi	r0, r0, #0	; 0x0
        284c34:	e2000007 	and	r0, r0, #7	; 0x7
        284c38:	42600000 	rsbmi	r0, r0, #0	; 0x0
        284c3c:	e5820000 	str	r0, [r2]
        284c40:	e3300000 	teq	r0, #0	; 0x0
        284c44:	1a00003e 	bne	284d44 <TZippyCompressor::StuffBits(unsigned char **, long *, long, ByteAccessor)+0x210>
        284c48:	e5910000 	ldr	r0, [r1]
        284c4c:	e2800001 	add	r0, r0, #1	; 0x1
        284c50:	ea00002d 	b	284d0c <TZippyCompressor::StuffBits(unsigned char **, long *, long, ByteAccessor)+0x1d8>
        284c54:	e5dbc017 	ldrb	ip, [fp, #23]
        284c58:	e5cdc000 	strb	ip, [sp]
        284c5c:	e5dbc018 	ldrb	ip, [fp, #24]
        284c60:	e5cdc001 	strb	ip, [sp, #1]	; fField1
        284c64:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        284c68:	e59d0000 	ldr	r0, [sp]
        284c6c:	e592c000 	ldr	ip, [r2]
        284c70:	e1a00c30 	mov	r0, r0, lsr ip
        284c74:	e58d0000 	str	r0, [sp]
        284c78:	e5dd0001 	ldrb	r0, [sp, #1]	; fField1
        284c7c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        284c80:	e5dd0002 	ldrb	r0, [sp, #2]	; fField2
        284c84:	e5cd0005 	strb	r0, [sp, #5]	; fField5
        284c88:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        284c8c:	e592c000 	ldr	ip, [r2]
        284c90:	e1a00c30 	mov	r0, r0, lsr ip
        284c94:	e58d0000 	str	r0, [sp]
        284c98:	e5910000 	ldr	r0, [r1]
        284c9c:	e5d0e000 	ldrb	lr, [r0]
        284ca0:	e5ddc000 	ldrb	ip, [sp]
        284ca4:	e18ec00c 	orr	ip, lr, ip
        284ca8:	e5c0c000 	strb	ip, [r0]
        284cac:	e5dd0001 	ldrb	r0, [sp, #1]	; fField1
        284cb0:	e591c000 	ldr	ip, [r1]
        284cb4:	e5cc0001 	strb	r0, [ip, #1]	; fField1
        284cb8:	e5dd0002 	ldrb	r0, [sp, #2]	; fField2
        284cbc:	e591c000 	ldr	ip, [r1]
        284cc0:	e5cc0002 	strb	r0, [ip, #2]	; fField2
        284cc4:	e5dd0003 	ldrb	r0, [sp, #3]
        284cc8:	e591c000 	ldr	ip, [r1]
        284ccc:	e5cc0003 	strb	r0, [ip, #3]
        284cd0:	e5ddc004 	ldrb	ip, [sp, #4]	; fField4
        284cd4:	e5910000 	ldr	r0, [r1]
        284cd8:	e5c0c004 	strb	ip, [r0, #4]	; fField4
        284cdc:	e5920000 	ldr	r0, [r2]
        284ce0:	e3500006 	cmp	r0, #6	; 0x6
        284ce4:	ca00000a 	bgt	284d14 <TZippyCompressor::StuffBits(unsigned char **, long *, long, ByteAccessor)+0x1e0>
        284ce8:	e0900003 	adds	r0, r0, r3
        284cec:	42600000 	rsbmi	r0, r0, #0	; 0x0
        284cf0:	e2000007 	and	r0, r0, #7	; 0x7
        284cf4:	42600000 	rsbmi	r0, r0, #0	; 0x0
        284cf8:	e5820000 	str	r0, [r2]
        284cfc:	e3300000 	teq	r0, #0	; 0x0
        284d00:	e5910000 	ldr	r0, [r1]
        284d04:	12800004 	addne	r0, r0, #4	; 0x4
        284d08:	02800005 	addeq	r0, r0, #5	; 0x5
        284d0c:	e5810000 	str	r0, [r1]
        284d10:	ea00000b 	b	284d44 <TZippyCompressor::StuffBits(unsigned char **, long *, long, ByteAccessor)+0x210>
        284d14:	e5ddc005 	ldrb	ip, [sp, #5]	; fField5
        284d18:	e5910000 	ldr	r0, [r1]
        284d1c:	e5c0c005 	strb	ip, [r0, #5]	; fField5
        284d20:	e5910000 	ldr	r0, [r1]
        284d24:	e2800005 	add	r0, r0, #5	; 0x5
        284d28:	e5810000 	str	r0, [r1]
        284d2c:	e5920000 	ldr	r0, [r2]
        284d30:	e0900003 	adds	r0, r0, r3
        284d34:	42600000 	rsbmi	r0, r0, #0	; 0x0
        284d38:	e2000007 	and	r0, r0, #7	; 0x7
        284d3c:	42600000 	rsbmi	r0, r0, #0	; 0x0
        284d40:	e5820000 	str	r0, [r2]
        284d44:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TZippyCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)
 * Address: 00284d48
 */
TZippyCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long) {
    /*
        284d48:	e1a0c00d 	mov	ip, sp
        284d4c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        284d50:	e24cb004 	sub	fp, ip, #4	; 0x4
        284d54:	e1a06000 	mov	r6, r0
        284d58:	e1a05001 	mov	r5, r1
        284d5c:	e1a04002 	mov	r4, r2
        284d60:	e59b9008 	ldr	r9, [fp, #8]
        284d64:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        284d68:	e24dd020 	sub	sp, sp, #32	; 0x20
        284d6c:	e3a07000 	mov	r7, #0	; 0x0
        284d70:	e3a08040 	mov	r8, #64	; 0x40
        284d74:	e3a00000 	mov	r0, #0	; 0x0
        284d78:	e58d0008 	str	r0, [sp, #8]
        284d7c:	e58da00c 	str	sl, [sp, #12]
        284d80:	e1a00006 	mov	r0, r6
        284d84:	eb6495f8 	bl	1baa56c <TZippyCompressor::$InitCache(void)>
        284d88:	e2840008 	add	r0, r4, #8	; 0x8
        284d8c:	e58d001c 	str	r0, [sp, #28]
        284d90:	e3a01000 	mov	r1, #0	; 0x0
        284d94:	e58d0010 	str	r0, [sp, #16]	; fField16
        284d98:	e5c01000 	strb	r1, [r0]
        284d9c:	e1a00129 	mov	r0, r9, lsr #2
        284da0:	e58d0018 	str	r0, [sp, #24]
        284da4:	e3500000 	cmp	r0, #0	; 0x0
        284da8:	9a000023 	bls	284e3c <TZippyCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0xf4>
        284dac:	e3a00040 	mov	r0, #64	; 0x40
        284db0:	e0801189 	add	r1, r0, r9, lsl #3
        284db4:	e58d1014 	str	r1, [sp, #20]	; fField20
        284db8:	e59d000c 	ldr	r0, [sp, #12]
        284dbc:	e7901107 	ldr	r1, [r0, r7, lsl #2]	; fField2
        284dc0:	e1a0200d 	mov	r2, sp
        284dc4:	e1a00006 	mov	r0, r6
        284dc8:	eb6491c2 	bl	1ba94d8 <TZippyCompressor::$CacheAndCompress(unsigned long, ByteAccessor *)>
        284dcc:	e0888000 	add	r8, r8, r0
        284dd0:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        284dd4:	e1510008 	cmp	r1, r8
        284dd8:	2a000009 	bcs	284e04 <TZippyCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0xbc>
        284ddc:	e2890008 	add	r0, r9, #8	; 0x8
        284de0:	e5850000 	str	r0, [r5]
        284de4:	e5840000 	str	r0, [r4]
        284de8:	e3a00401 	mov	r0, #16777216	; 0x1000000
        284dec:	e5a40004 	str	r0, [r4, #4]!	; fField4
        284df0:	e1a02009 	mov	r2, r9
        284df4:	e1a0000a 	mov	r0, sl
        284df8:	e59d101c 	ldr	r1, [sp, #28]
        284dfc:	eb6478e8 	bl	1ba31a4 <$fast_copy__FPUcT1l>
        284e00:	ea000020 	b	284e88 <TZippyCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0x140>
        284e04:	e24dd008 	sub	sp, sp, #8	; 0x8
        284e08:	e28d2008 	add	r2, sp, #8	; 0x8
        284e0c:	e8925000 	ldmia	r2, {ip, lr}
        284e10:	e88d5000 	stmia	sp, {ip, lr}
        284e14:	e1a03000 	mov	r3, r0
        284e18:	e28d2010 	add	r2, sp, #16	; 0x10
        284e1c:	e28d1018 	add	r1, sp, #24	; 0x18
        284e20:	e1a00006 	mov	r0, r6
        284e24:	eb6499e9 	bl	1bab5d0 <TZippyCompressor::$StuffBits(unsigned char **, long *, long, ByteAccessor)>
        284e28:	e28dd008 	add	sp, sp, #8	; 0x8
        284e2c:	e2877001 	add	r7, r7, #1	; 0x1
        284e30:	e59d0018 	ldr	r0, [sp, #24]
        284e34:	e1500007 	cmp	r0, r7
        284e38:	8affffde 	bhi	284db8 <TZippyCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0x70>
        284e3c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        284e40:	e0400004 	sub	r0, r0, r4
        284e44:	e5850000 	str	r0, [r5]
        284e48:	e59d0008 	ldr	r0, [sp, #8]
        284e4c:	e3300000 	teq	r0, #0	; 0x0
        284e50:	0a000008 	beq	284e78 <TZippyCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0x130>
        284e54:	e3a010ff 	mov	r1, #255	; 0xff
        284e58:	e1a01031 	mov	r1, r1, lsr r0
        284e5c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        284e60:	e5d02000 	ldrb	r2, [r0]
        284e64:	e1811002 	orr	r1, r1, r2
        284e68:	e5c01000 	strb	r1, [r0]
        284e6c:	e5950000 	ldr	r0, [r5]
        284e70:	e2800001 	add	r0, r0, #1	; 0x1
        284e74:	e5850000 	str	r0, [r5]
        284e78:	e5950000 	ldr	r0, [r5]
        284e7c:	e5840000 	str	r0, [r4]
        284e80:	e3a00801 	mov	r0, #65536	; 0x10000
        284e84:	e5a40004 	str	r0, [r4, #4]!	; fField4
        284e88:	e3a00000 	mov	r0, #0	; 0x0
        284e8c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TZippyCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long)
 * Address: 00284e90
 */
TZippyCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long) {
    /*
        284e90:	e1a0c00d 	mov	ip, sp
        284e94:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        284e98:	e24cb004 	sub	fp, ip, #4	; 0x4
        284e9c:	e1a04000 	mov	r4, r0
        284ea0:	e1a07001 	mov	r7, r1
        284ea4:	e1a06002 	mov	r6, r2
        284ea8:	e1a05003 	mov	r5, r3
        284eac:	e3a01000 	mov	r1, #0	; 0x0
        284eb0:	e59b8008 	ldr	r8, [fp, #8]
        284eb4:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        284eb8:	eb6495af 	bl	1baa57c <TZippyCompressor::$Init(void *)>
        284ebc:	e3300000 	teq	r0, #0	; 0x0
        284ec0:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        284ec4:	e1a03008 	mov	r3, r8
        284ec8:	e1a02009 	mov	r2, r9
        284ecc:	e92d000c 	stmdb	sp!, {r2, r3}
        284ed0:	e1a03005 	mov	r3, r5
        284ed4:	e1a02006 	mov	r2, r6
        284ed8:	e1a01007 	mov	r1, r7
        284edc:	e1a00004 	mov	r0, r4
        284ee0:	eb649183 	bl	1ba94f4 <TZippyCompressor::$CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)>
        284ee4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__16TZippyCompressorSFv
 * Address: 0038996c
 */
void TZippyCompressor::ClassInfo() {
    /*
        38996c:	e24f0044 	sub	r0, pc, #68	; 0x44
        389970:	e1a0f00e 	mov	pc, lr
        389974:	e3a00000 	mov	r0, #0	; 0x0
        389978:	e1a0f00e 	mov	pc, lr
        38997c:	545a6970 	ldrplb	r6, [sl], -#2416
        389980:	7079436f 	rsbvcs	r4, r9, pc, ror #6
        389984:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        389988:	73736f72 	cmnvc	r3, #456	; 0x1c8
        38998c:	0054436f 	subeqs	r4, r4, pc, ror #6
        389990:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        389994:	73736f72 	cmnvc	r3, #456	; 0x1c8
        3899a0:	eafffff1 	b	38996c <ClassInfo__16TZippyCompressorSFv>
        3899a4:	ea6086fe 	b	1bab5a4 <TZippyCompressor::$New(void)>
        3899a8:	ea6082d7 	b	1baa50c <TZippyCompressor::$Delete(void)>
        3899ac:	ea6082f2 	b	1baa57c <TZippyCompressor::$Init(void *)>
        3899b0:	ea607ed0 	b	1ba94f8 <TZippyCompressor::$Compress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        3899b4:	ea6082d8 	b	1baa51c <TZippyCompressor::$EstimatedCompressedSize(void *, unsigned long)>
        3899b8:	00000000 	andeq	r0, r0, r0
        3899bc:	00000048 	andeq	r0, r0, r8, asr #32
        3899c0:	0000005d 	andeq	r0, r0, sp, asr r0
        3899c4:	0000006d 	andeq	r0, r0, sp, rrx
        3899c8:	000000a4 	andeq	r0, r0, r4, lsr #1
        3899cc:	000000c0 	andeq	r0, r0, r0, asr #1
        3899d0:	ea6086fd 	b	1bab5cc <$Sizeof__24TZippyCallbackCompressorSFv>
        3899dc:	ea6086f3 	b	1bab5b0 <TZippyCallbackCompressor::$New(void)>
        3899e0:	ea6082cc 	b	1baa518 <TZippyCallbackCompressor::$Delete(void)>
        3899f0:	ea000001 	b	3899fc <ClassInfo__24TZippyCallbackCompressorSFv+0x8>
    */
}

