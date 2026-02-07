#include "include/TCRelocationGenerator.h"

/**
 * Symbol: TCRelocationGenerator::__ct(void)
 * Address: 00049e44
 */
TCRelocationGenerator::TCRelocationGenerator(void) {
    /*
         49e44:	e1a0c00d 	mov	ip, sp
         49e48:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         49e4c:	e24cb004 	sub	fp, ip, #4	; 0x4
         49e50:	e3300000 	teq	r0, #0	; 0x0
         49e54:	1a000003 	bne	49e68 <TCRelocationGenerator::__ct(void)+0x24>
         49e58:	e3a00018 	mov	r0, #24	; 0x18
         49e5c:	eb6e1235 	bl	1bce738 <$__nw(unsigned int)>
         49e60:	e3300000 	teq	r0, #0	; 0x0
         49e64:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         49e68:	e3a01000 	mov	r1, #0	; 0x0
         49e6c:	e5801000 	str	r1, [r0]
         49e70:	e3e02000 	mvn	r2, #0	; 0x0
         49e74:	e9800006 	stmib	r0, {r1, r2}
         49e78:	e5801014 	str	r1, [r0, #20]	; fField20
         49e7c:	e5c0100d 	strb	r1, [r0, #13]	; fField13
         49e80:	e5c0100c 	strb	r1, [r0, #12]	; fField12
         49e84:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCRelocationGenerator::__dt(void)
 * Address: 00049e88
 */
TCRelocationGenerator::~TCRelocationGenerator(void) {
    /*
         49e88:	e3110001 	tst	r1, #1	; 0x1
         49e8c:	1a6e0e13 	bne	1bcd6e0 <$__dl(void *)>
         49e90:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCRelocationGenerator::Init(RelocationHeader *, RelocationEntry *)
 * Address: 00049e94
 */
TCRelocationGenerator::Init(RelocationHeader *, RelocationEntry *) {
    /*
         49e94:	e5801000 	str	r1, [r0]
         49e98:	e3510000 	cmp	r1, #0	; 0x0
         49e9c:	0a000008 	beq	49ec4 <TCRelocationGenerator::Init(RelocationHeader *, RelocationEntry *)+0x30>
         49ea0:	e5802004 	str	r2, [r0, #4]	; fField4
         49ea4:	0a000006 	beq	49ec4 <TCRelocationGenerator::Init(RelocationHeader *, RelocationEntry *)+0x30>
         49ea8:	e5912000 	ldr	r2, [r1]
         49eac:	e5802008 	str	r2, [r0, #8]	; fField8
         49eb0:	0a000003 	beq	49ec4 <TCRelocationGenerator::Init(RelocationHeader *, RelocationEntry *)+0x30>
         49eb4:	e5912010 	ldr	r2, [r1, #16]	; fField16
         49eb8:	e5802014 	str	r2, [r0, #20]	; fField20
         49ebc:	15911008 	ldrne	r1, [r1, #8]	; fField8
         49ec0:	15a01010 	strne	r1, [r0, #16]!	; fField16
         49ec4:	e3a00000 	mov	r0, #0	; 0x0
         49ec8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCRelocationGenerator::GetRelocDataSizeForBlock(unsigned long)
 * Address: 00049ecc
 */
TCRelocationGenerator::GetRelocDataSizeForBlock(unsigned long) {
    /*
         49ecc:	e92d4000 	stmdb	sp!, {lr}
         49ed0:	e3a03001 	mov	r3, #1	; 0x1
         49ed4:	e3a0c000 	mov	ip, #0	; 0x0
         49ed8:	e590e000 	ldr	lr, [r0]
         49edc:	e33e0000 	teq	lr, #0	; 0x0
         49ee0:	e5902004 	ldr	r2, [r0, #4]	; fField4
         49ee4:	03a00000 	moveq	r0, #0	; 0x0
         49ee8:	08bd8000 	ldmeqia	sp!, {pc}
         49eec:	e5900000 	ldr	r0, [r0]
         49ef0:	e5900004 	ldr	r0, [r0, #4]	; fField4
         49ef4:	ea000010 	b	49f3c <TCRelocationGenerator::GetRelocDataSizeForBlock(unsigned long)+0x70>
         49ef8:	e5923002 	ldr	r3, [r2, #2]
         49efc:	e1a03823 	mov	r3, r3, lsr #16
         49f00:	e2833003 	add	r3, r3, #3	; 0x3
         49f04:	e1a03123 	mov	r3, r3, lsr #2
         49f08:	e1a03103 	mov	r3, r3, lsl #2
         49f0c:	e592e000 	ldr	lr, [r2]
         49f10:	e151082e 	cmp	r1, lr, lsr #16
         49f14:	8a000004 	bhi	49f2c <TCRelocationGenerator::GetRelocDataSizeForBlock(unsigned long)+0x60>
         49f18:	e5920000 	ldr	r0, [r2]
         49f1c:	e1a00820 	mov	r0, r0, lsr #16
         49f20:	e1300001 	teq	r0, r1
         49f24:	0a00000b 	beq	49f58 <TCRelocationGenerator::GetRelocDataSizeForBlock(unsigned long)+0x8c>
         49f28:	ea000007 	b	49f4c <TCRelocationGenerator::GetRelocDataSizeForBlock(unsigned long)+0x80>
         49f2c:	e0822003 	add	r2, r2, r3
         49f30:	e2822004 	add	r2, r2, #4	; 0x4
         49f34:	e3330000 	teq	r3, #0	; 0x0
         49f38:	0a000003 	beq	49f4c <TCRelocationGenerator::GetRelocDataSizeForBlock(unsigned long)+0x80>
         49f3c:	e080e002 	add	lr, r0, r2
         49f40:	e24ee014 	sub	lr, lr, #20	; 0x14
         49f44:	e15e0002 	cmp	lr, r2
         49f48:	8affffea 	bhi	49ef8 <TCRelocationGenerator::GetRelocDataSizeForBlock(unsigned long)+0x2c>
         49f4c:	e33c0000 	teq	ip, #0	; 0x0
         49f50:	03a00010 	moveq	r0, #16	; 0x10
         49f54:	08bd8000 	ldmeqia	sp!, {pc}
         49f58:	e2830010 	add	r0, r3, #16	; 0x10
         49f5c:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TCRelocationGenerator::GetRelocDataForBlock(unsigned long, char **, long *, char **)
 * Address: 00049f60
 */
TCRelocationGenerator::GetRelocDataForBlock(unsigned long, char **, long *, char **) {
    /*
         49f60:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
         49f64:	e59d4010 	ldr	r4, [sp, #16]	; fField16
         49f68:	e3a05000 	mov	r5, #0	; 0x0
         49f6c:	e3a0e000 	mov	lr, #0	; 0x0
         49f70:	e8901040 	ldmia	r0, {r6, ip}
         49f74:	e3360000 	teq	r6, #0	; 0x0
         49f78:	0a000006 	beq	49f98 <TCRelocationGenerator::GetRelocDataForBlock(unsigned long, char **, long *, char **)+0x38>
         49f7c:	e2806008 	add	r6, r0, #8	; 0x8
         49f80:	e5826000 	str	r6, [r2]
         49f84:	e3a02010 	mov	r2, #16	; 0x10
         49f88:	e5832000 	str	r2, [r3]
         49f8c:	e5902000 	ldr	r2, [r0]
         49f90:	e5b23004 	ldr	r3, [r2, #4]!	; fField4
         49f94:	ea000015 	b	49ff0 <TCRelocationGenerator::GetRelocDataForBlock(unsigned long, char **, long *, char **)+0x90>
         49f98:	e1a0000e 	mov	r0, lr
         49f9c:	e582e000 	str	lr, [r2]
         49fa0:	e583e000 	str	lr, [r3]
         49fa4:	e584e000 	str	lr, [r4]
         49fa8:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
         49fac:	e59c2002 	ldr	r2, [ip, #2]
         49fb0:	e1a02822 	mov	r2, r2, lsr #16
         49fb4:	e2822003 	add	r2, r2, #3	; 0x3
         49fb8:	e1a02122 	mov	r2, r2, lsr #2
         49fbc:	e1a02102 	mov	r2, r2, lsl #2
         49fc0:	e59c6000 	ldr	r6, [ip]
         49fc4:	e1510826 	cmp	r1, r6, lsr #16
         49fc8:	8a000004 	bhi	49fe0 <TCRelocationGenerator::GetRelocDataForBlock(unsigned long, char **, long *, char **)+0x80>
         49fcc:	e59c2000 	ldr	r2, [ip]
         49fd0:	e1a02822 	mov	r2, r2, lsr #16
         49fd4:	e1320001 	teq	r2, r1
         49fd8:	0a00000a 	beq	4a008 <TCRelocationGenerator::GetRelocDataForBlock(unsigned long, char **, long *, char **)+0xa8>
         49fdc:	ea000007 	b	4a000 <TCRelocationGenerator::GetRelocDataForBlock(unsigned long, char **, long *, char **)+0xa0>
         49fe0:	e08cc002 	add	ip, ip, r2
         49fe4:	e28cc004 	add	ip, ip, #4	; 0x4
         49fe8:	e3320000 	teq	r2, #0	; 0x0
         49fec:	0a000003 	beq	4a000 <TCRelocationGenerator::GetRelocDataForBlock(unsigned long, char **, long *, char **)+0xa0>
         49ff0:	e083200c 	add	r2, r3, ip
         49ff4:	e2422014 	sub	r2, r2, #20	; 0x14
         49ff8:	e152000c 	cmp	r2, ip
         49ffc:	8affffea 	bhi	49fac <TCRelocationGenerator::GetRelocDataForBlock(unsigned long, char **, long *, char **)+0x4c>
         4a000:	e3350000 	teq	r5, #0	; 0x0
         4a004:	0a000007 	beq	4a028 <TCRelocationGenerator::GetRelocDataForBlock(unsigned long, char **, long *, char **)+0xc8>
         4a008:	e28c1004 	add	r1, ip, #4	; 0x4
         4a00c:	e5841000 	str	r1, [r4]
         4a010:	e59c1002 	ldr	r1, [ip, #2]
         4a014:	e1a01821 	mov	r1, r1, lsr #16
         4a018:	e5c0100d 	strb	r1, [r0, #13]	; fField13
         4a01c:	e1a01441 	mov	r1, r1, asr #8
         4a020:	e5c0100c 	strb	r1, [r0, #12]	; fField12
         4a024:	ea000002 	b	4a034 <TCRelocationGenerator::GetRelocDataForBlock(unsigned long, char **, long *, char **)+0xd4>
         4a028:	e584e000 	str	lr, [r4]
         4a02c:	e5c0e00d 	strb	lr, [r0, #13]	; fField13
         4a030:	e5c0e00c 	strb	lr, [r0, #12]	; fField12
         4a034:	e1a0000e 	mov	r0, lr
         4a038:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

