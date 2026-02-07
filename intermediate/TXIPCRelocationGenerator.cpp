#include "include/TXIPCRelocationGenerator.h"

/**
 * Symbol: TXIPCRelocationGenerator::__ct(void)
 * Address: 00278bac
 */
TXIPCRelocationGenerator::TXIPCRelocationGenerator(void) {
    /*
        278bac:	e1a0c00d 	mov	ip, sp
        278bb0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        278bb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        278bb8:	e3300000 	teq	r0, #0	; 0x0
        278bbc:	1a000003 	bne	278bd0 <TXIPCRelocationGenerator::__ct(void)+0x24>
        278bc0:	e3a0001c 	mov	r0, #28	; 0x1c
        278bc4:	eb6556db 	bl	1bce738 <$__nw(unsigned int)>
        278bc8:	e3300000 	teq	r0, #0	; 0x0
        278bcc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        278bd0:	e3a01000 	mov	r1, #0	; 0x0
        278bd4:	e5801000 	str	r1, [r0]
        278bd8:	e5801004 	str	r1, [r0, #4]	; fField4
        278bdc:	e5801008 	str	r1, [r0, #8]	; fField8
        278be0:	e580100c 	str	r1, [r0, #12]	; fField12
        278be4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXIPCRelocationGenerator::__dt(void)
 * Address: 00278be8
 */
TXIPCRelocationGenerator::~TXIPCRelocationGenerator(void) {
    /*
        278be8:	e3110001 	tst	r1, #1	; 0x1
        278bec:	1a6552bb 	bne	1bcd6e0 <$__dl(void *)>
        278bf0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXIPCRelocationGenerator::Init(TStore *, RelocationHeader *, RelocationEntry *, unsigned long, unsigned long *)
 * Address: 00278bf4
 */
TXIPCRelocationGenerator::Init(TStore *, RelocationHeader *, RelocationEntry *, unsigned long, unsigned long *) {
    /*
        278bf4:	e1a0c00d 	mov	ip, sp
        278bf8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        278bfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        278c00:	e1a04000 	mov	r4, r0
        278c04:	e1a06001 	mov	r6, r1
        278c08:	e1a05002 	mov	r5, r2
        278c0c:	e3a00000 	mov	r0, #0	; 0x0
        278c10:	e3a02000 	mov	r2, #0	; 0x0
        278c14:	e59b7008 	ldr	r7, [fp, #8]	; fField8
        278c18:	e59be004 	ldr	lr, [fp, #4]	; fField4
        278c1c:	e5872000 	str	r2, [r7]
        278c20:	e5845000 	str	r5, [r4]
        278c24:	e1b0c005 	movs	ip, r5
        278c28:	e584e008 	str	lr, [r4, #8]	; fField8
        278c2c:	0a000020 	beq	278cb4 <TXIPCRelocationGenerator::Init(TStore *, RelocationHeader *, RelocationEntry *, unsigned long, unsigned long *)+0xc0>
        278c30:	e5843004 	str	r3, [r4, #4]	; fField4
        278c34:	e3330000 	teq	r3, #0	; 0x0
        278c38:	03e00e8a 	mvneq	r0, #2208	; 0x8a0
        278c3c:	02400a02 	subeq	r0, r0, #8192	; 0x2000
        278c40:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        278c44:	e284200c 	add	r2, r4, #12	; 0xc
        278c48:	e5bc0004 	ldr	r0, [ip, #4]!	; fField4
        278c4c:	e2401014 	sub	r1, r0, #20	; 0x14
        278c50:	e1a00006 	mov	r0, r6
        278c54:	eb0437d4 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        278c58:	e3300000 	teq	r0, #0	; 0x0
        278c5c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        278c60:	e5940000 	ldr	r0, [r4]
        278c64:	e5900004 	ldr	r0, [r0, #4]	; fField4
        278c68:	e2403014 	sub	r3, r0, #20	; 0x14
        278c6c:	e92d0008 	stmdb	sp!, {r3}
        278c70:	e1a00006 	mov	r0, r6
        278c74:	e3a02000 	mov	r2, #0	; 0x0
        278c78:	e594100c 	ldr	r1, [r4, #12]	; fField12
        278c7c:	e5943004 	ldr	r3, [r4, #4]	; fField4
        278c80:	eb62461e 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        278c84:	e28dd004 	add	sp, sp, #4	; 0x4
        278c88:	e3300000 	teq	r0, #0	; 0x0
        278c8c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        278c90:	e594100c 	ldr	r1, [r4, #12]	; fField12
        278c94:	e5871000 	str	r1, [r7]
        278c98:	e594100c 	ldr	r1, [r4, #12]	; fField12
        278c9c:	e5841010 	str	r1, [r4, #16]	; fField16
        278ca0:	e5951000 	ldr	r1, [r5]
        278ca4:	e5841014 	str	r1, [r4, #20]	; fField20
        278ca8:	e5b51010 	ldr	r1, [r5, #16]!	; fField16
        278cac:	e5a41018 	str	r1, [r4, #24]!	; fField24
        278cb0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        278cb4:	e3e01000 	mvn	r1, #0	; 0x0
        278cb8:	e5841014 	str	r1, [r4, #20]	; fField20
        278cbc:	e5842010 	str	r2, [r4, #16]	; fField16
        278cc0:	e5a42018 	str	r2, [r4, #24]!	; fField24
        278cc4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXIPCRelocationGenerator::GetCRelocBlockHeader(void)
 * Address: 00278cc8
 */
TXIPCRelocationGenerator::GetCRelocBlockHeader(void) {
    /*
        278cc8:	e2800010 	add	r0, r0, #16	; 0x10
        278ccc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXIPCRelocationGenerator::GetRelocDataForBlock(unsigned long, XIPCRelocationEntry *)
 * Address: 00278cd0
 */
TXIPCRelocationGenerator::GetRelocDataForBlock(unsigned long, XIPCRelocationEntry *) {
    /*
        278cd0:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        278cd4:	e3a0c0ff 	mov	ip, #255	; 0xff
        278cd8:	e5903004 	ldr	r3, [r0, #4]	; fField4
        278cdc:	e5c2c001 	strb	ip, [r2, #1]
        278ce0:	e5c2c000 	strb	ip, [r2]
        278ce4:	e3a04000 	mov	r4, #0	; 0x0
        278ce8:	e5c24003 	strb	r4, [r2, #3]
        278cec:	e5c24002 	strb	r4, [r2, #2]
        278cf0:	e590c000 	ldr	ip, [r0]
        278cf4:	e33c0000 	teq	ip, #0	; 0x0
        278cf8:	1590c000 	ldrne	ip, [r0]
        278cfc:	15bce004 	ldrne	lr, [ip, #4]!	; fField4
        278d00:	1a00001b 	bne	278d74 <TXIPCRelocationGenerator::GetRelocDataForBlock(unsigned long, XIPCRelocationEntry *)+0xa4>
        278d04:	ea00001e 	b	278d84 <TXIPCRelocationGenerator::GetRelocDataForBlock(unsigned long, XIPCRelocationEntry *)+0xb4>
        278d08:	e593c002 	ldr	ip, [r3, #2]
        278d0c:	e1a0c82c 	mov	ip, ip, lsr #16
        278d10:	e28cc003 	add	ip, ip, #3	; 0x3
        278d14:	e1a0c12c 	mov	ip, ip, lsr #2
        278d18:	e1a0c10c 	mov	ip, ip, lsl #2
        278d1c:	e5935000 	ldr	r5, [r3]
        278d20:	e1510825 	cmp	r1, r5, lsr #16
        278d24:	8a00000f 	bhi	278d68 <TXIPCRelocationGenerator::GetRelocDataForBlock(unsigned long, XIPCRelocationEntry *)+0x98>
        278d28:	e593c000 	ldr	ip, [r3]
        278d2c:	e1a0c82c 	mov	ip, ip, lsr #16
        278d30:	e13c0001 	teq	ip, r1
        278d34:	1a000012 	bne	278d84 <TXIPCRelocationGenerator::GetRelocDataForBlock(unsigned long, XIPCRelocationEntry *)+0xb4>
        278d38:	e5900004 	ldr	r0, [r0, #4]	; fField4
        278d3c:	e0430000 	sub	r0, r3, r0
        278d40:	e2800004 	add	r0, r0, #4	; 0x4
        278d44:	e5c20001 	strb	r0, [r2, #1]
        278d48:	e1a00440 	mov	r0, r0, asr #8
        278d4c:	e5c20000 	strb	r0, [r2]
        278d50:	e5930002 	ldr	r0, [r3, #2]
        278d54:	e1a00820 	mov	r0, r0, lsr #16
        278d58:	e5c20003 	strb	r0, [r2, #3]
        278d5c:	e1a00440 	mov	r0, r0, asr #8
        278d60:	e5c20002 	strb	r0, [r2, #2]
        278d64:	ea000006 	b	278d84 <TXIPCRelocationGenerator::GetRelocDataForBlock(unsigned long, XIPCRelocationEntry *)+0xb4>
        278d68:	e083300c 	add	r3, r3, ip
        278d6c:	e33c0000 	teq	ip, #0	; 0x0
        278d70:	0a000003 	beq	278d84 <TXIPCRelocationGenerator::GetRelocDataForBlock(unsigned long, XIPCRelocationEntry *)+0xb4>
        278d74:	e08ec003 	add	ip, lr, r3
        278d78:	e24cc014 	sub	ip, ip, #20	; 0x14
        278d7c:	e15c0003 	cmp	ip, r3
        278d80:	8affffe0 	bhi	278d08 <TXIPCRelocationGenerator::GetRelocDataForBlock(unsigned long, XIPCRelocationEntry *)+0x38>
        278d84:	e1a00004 	mov	r0, r4
        278d88:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

