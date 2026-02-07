#include "include/TXTempReferences.h"

/**
 * Symbol: TXTempReferences::__ct(void)
 * Address: 00234134
 */
TXTempReferences::TXTempReferences(void) {
    /*
        234134:	e1a0c00d 	mov	ip, sp
        234138:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23413c:	e24cb004 	sub	fp, ip, #4	; 0x4
        234140:	e3300000 	teq	r0, #0	; 0x0
        234144:	1a000003 	bne	234158 <TXTempReferences::__ct(void)+0x24>
        234148:	e3a0002c 	mov	r0, #44	; 0x2c
        23414c:	eb666979 	bl	1bce738 <$__nw(unsigned int)>
        234150:	e3300000 	teq	r0, #0	; 0x0
        234154:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        234158:	e59f102c 	ldr	r1, [pc, #2c]	; 23418c <TXTempReferences::__ct(void)+0x58>
        23415c:	e5801000 	str	r1, [r0]
        234160:	e280202c 	add	r2, r0, #44	; 0x2c
        234164:	e2801004 	add	r1, r0, #4	; 0x4
        234168:	e3a03000 	mov	r3, #0	; 0x0
        23416c:	e1510002 	cmp	r1, r2
        234170:	291ba800 	ldmcsdb	fp, {fp, sp, pc}
        234174:	e5813000 	str	r3, [r1]
        234178:	e5c13004 	strb	r3, [r1, #4]
        23417c:	e2811008 	add	r1, r1, #8	; 0x8
        234180:	e1510002 	cmp	r1, r2
        234184:	3afffffa 	bcc	234174 <TXTempReferences::__ct(void)+0x40>
        234188:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        23418c:	0001e728 	andeq	lr, r1, r8, lsr #14
    */
}

/**
 * Symbol: TXTempReferences::Get(void)
 * Address: 00234190
 */
TXTempReferences::Get(void) {
    /*
        234190:	e1a0c00d 	mov	ip, sp
        234194:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        234198:	e24cb004 	sub	fp, ip, #4	; 0x4
        23419c:	e280102c 	add	r1, r0, #44	; 0x2c
        2341a0:	e2804004 	add	r4, r0, #4	; 0x4
        2341a4:	e1540001 	cmp	r4, r1
        2341a8:	2a00000f 	bcs	2341ec <TXTempReferences::Get(void)+0x5c>
        2341ac:	e5d42004 	ldrb	r2, [r4, #4]
        2341b0:	e3320000 	teq	r2, #0	; 0x0
        2341b4:	1a000009 	bne	2341e0 <TXTempReferences::Get(void)+0x50>
        2341b8:	e3a01001 	mov	r1, #1	; 0x1
        2341bc:	e5c41004 	strb	r1, [r4, #4]
        2341c0:	e5941000 	ldr	r1, [r4]
        2341c4:	e3310000 	teq	r1, #0	; 0x0
        2341c8:	1a000002 	bne	2341d8 <TXTempReferences::Get(void)+0x48>
        2341cc:	e1a0e00f 	mov	lr, pc
        2341d0:	e590f000 	ldr	pc, [r0]
        2341d4:	e5840000 	str	r0, [r4]
        2341d8:	e5940000 	ldr	r0, [r4]
        2341dc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2341e0:	e2844008 	add	r4, r4, #8	; 0x8
        2341e4:	e1540001 	cmp	r4, r1
        2341e8:	3affffef 	bcc	2341ac <TXTempReferences::Get(void)+0x1c>
        2341ec:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2341f0:	e590f000 	ldr	pc, [r0]
    */
}

/**
 * Symbol: TXTempReferences::Done(void *)
 * Address: 002341f4
 */
TXTempReferences::Done(void *) {
    /*
        2341f4:	e280302c 	add	r3, r0, #44	; 0x2c
        2341f8:	e2802004 	add	r2, r0, #4	; 0x4
        2341fc:	e1520003 	cmp	r2, r3
        234200:	2a000007 	bcs	234224 <TXTempReferences::Done(void *)+0x30>
        234204:	e592c000 	ldr	ip, [r2]
        234208:	e13c0001 	teq	ip, r1
        23420c:	03a00000 	moveq	r0, #0	; 0x0
        234210:	05c20004 	streqb	r0, [r2, #4]
        234214:	01a0f00e 	moveq	pc, lr
        234218:	e2822008 	add	r2, r2, #8	; 0x8
        23421c:	e1520003 	cmp	r2, r3
        234220:	3afffff7 	bcc	234204 <TXTempReferences::Done(void *)+0x10>
        234224:	e5902000 	ldr	r2, [r0]
        234228:	e282f004 	add	pc, r2, #4	; 0x4
    */
}

