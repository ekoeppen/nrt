#include "include/CNullPipe.h"

/**
 * Symbol: CNullPipe::__ct(long)
 * Address: 00147184
 */
CNullPipe::CNullPipe(long) {
    /*
        147184:	e1a0c00d 	mov	ip, sp
        147188:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14718c:	e24cb004 	sub	fp, ip, #4	; 0x4
        147190:	e1b04000 	movs	r4, r0
        147194:	e1a05001 	mov	r5, r1
        147198:	1a000003 	bne	1471ac <CNullPipe::__ct(long)+0x28>
        14719c:	e3a00014 	mov	r0, #20	; 0x14
        1471a0:	eb6a1d64 	bl	1bce738 <$__nw(unsigned int)>
        1471a4:	e1b04000 	movs	r4, r0
        1471a8:	0a000004 	beq	1471c0 <CNullPipe::__ct(long)+0x3c>
        1471ac:	e1a00004 	mov	r0, r4
        1471b0:	eb6a7003 	bl	1be31c4 <CBufferPipe::$__ct(void)>
        1471b4:	e59f000c 	ldr	r0, [pc, #c]	; 1471c8 <CNullPipe::__ct(long)+0x44>
        1471b8:	e5840000 	str	r0, [r4]
        1471bc:	e5845010 	str	r5, [r4, #16]	; fField16
        1471c0:	e1a00004 	mov	r0, r4
        1471c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1471c8:	00020650 	andeq	r0, r2, r0, asr r6
    */
}

/**
 * Symbol: CNullPipe::__dt(void)
 * Address: 001471cc
 */
CNullPipe::~CNullPipe(void) {
    /*
        1471cc:	e1a0c00d 	mov	ip, sp
        1471d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1471d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1471d8:	e1a04000 	mov	r4, r0
        1471dc:	e1a05001 	mov	r5, r1
        1471e0:	e59f0020 	ldr	r0, [pc, #20]	; 147208 <CNullPipe::__dt(void)+0x3c>
        1471e4:	e5840000 	str	r0, [r4]
        1471e8:	e1a00004 	mov	r0, r4
        1471ec:	e3a01000 	mov	r1, #0	; 0x0
        1471f0:	eb6a7417 	bl	1be4254 <CBufferPipe::$__dt(void)>
        1471f4:	e3150001 	tst	r5, #1	; 0x1
        1471f8:	11a00004 	movne	r0, r4
        1471fc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        147200:	1a6a1936 	bne	1bcd6e0 <$__dl(void *)>
        147204:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        147208:	00020650 	andeq	r0, r2, r0, asr r6
    */
}

/**
 * Symbol: CNullPipe::FlushRead(void)
 * Address: 0014720c
 */
CNullPipe::FlushRead(void) {
    /*
        14720c:	e1a0c00d 	mov	ip, sp
        147210:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        147214:	e24cb004 	sub	fp, ip, #4	; 0x4
        147218:	e1a04000 	mov	r4, r0
        14721c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        147220:	e3300000 	teq	r0, #0	; 0x0
        147224:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        147228:	e5901000 	ldr	r1, [r0]
        14722c:	e1a0e00f 	mov	lr, pc
        147230:	e281f028 	add	pc, r1, #40	; 0x28
        147234:	e3a02001 	mov	r2, #1	; 0x1
        147238:	e3a01000 	mov	r1, #0	; 0x0
        14723c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        147240:	e5903000 	ldr	r3, [r0]
        147244:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        147248:	e283f038 	add	pc, r3, #56	; 0x38
    */
}

/**
 * Symbol: CNullPipe::FlushWrite(void)
 * Address: 0014724c
 */
CNullPipe::FlushWrite(void) {
    /*
        14724c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        147250:	e3300000 	teq	r0, #0	; 0x0
        147254:	15901000 	ldrne	r1, [r0]
        147258:	1281f028 	addne	pc, r1, #40	; 0x28
        14725c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CNullPipe::Overflow(void)
 * Address: 00147260
 */
CNullPipe::Overflow(void) {
    /*
        147260:	e1a0c00d 	mov	ip, sp
        147264:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        147268:	e24cb004 	sub	fp, ip, #4	; 0x4
        14726c:	e1a04000 	mov	r4, r0
        147270:	e5900008 	ldr	r0, [r0, #8]	; fField8
        147274:	e3300000 	teq	r0, #0	; 0x0
        147278:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        14727c:	e5941010 	ldr	r1, [r4, #16]	; fField16
        147280:	e3510000 	cmp	r1, #0	; 0x0
        147284:	d5901000 	ldrle	r1, [r0]
        147288:	d91b6810 	ldmledb	fp, {r4, fp, sp, lr}
        14728c:	d281f028 	addle	pc, r1, #40	; 0x28
        147290:	eb696fd8 	bl	1ba31f8 <CBufferSegment::$GetPhysicalSize(void)>
        147294:	e5941010 	ldr	r1, [r4, #16]	; fField16
        147298:	e0801001 	add	r1, r0, r1
        14729c:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        1472a0:	eb697801 	bl	1ba52ac <CBufferSegment::$SetPhysicalSize(long)>
        1472a4:	e3300000 	teq	r0, #0	; 0x0
        1472a8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1472ac:	e1a01000 	mov	r1, r0
        1472b0:	e59f000c 	ldr	r0, [pc, #c]	; 1472c4 <CNullPipe::Overflow(void)+0x64>
        1472b4:	e5900000 	ldr	r0, [r0]
        1472b8:	e3a02000 	mov	r2, #0	; 0x0
        1472bc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1472c0:	ea6a6fb5 	b	1be319c <$Throw>
        1472c4:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CNullPipe::Underflow(long, unsigned char &)
 * Address: 001472c8
 */
CNullPipe::Underflow(long, unsigned char &) {
    /*
        1472c8:	e3a00000 	mov	r0, #0	; 0x0
        1472cc:	e5c20000 	strb	r0, [r2]
        1472d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CNullPipe::Reset(void)
 * Address: 001472d4
 */
CNullPipe::Reset(void) {
    /*
        1472d4:	e1a0c00d 	mov	ip, sp
        1472d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1472dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1472e0:	e1a04000 	mov	r4, r0
        1472e4:	eb6a94dd 	bl	1bec660 <CBufferPipe::$Reset(void)>
        1472e8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1472ec:	e3300000 	teq	r0, #0	; 0x0
        1472f0:	0a000008 	beq	147318 <CNullPipe::Reset(void)+0x44>
        1472f4:	e5901000 	ldr	r1, [r0]
        1472f8:	e1a0e00f 	mov	lr, pc
        1472fc:	e281f028 	add	pc, r1, #40	; 0x28
        147300:	e3a02001 	mov	r2, #1	; 0x1
        147304:	e3a01000 	mov	r1, #0	; 0x0
        147308:	e5940004 	ldr	r0, [r4, #4]	; fField4
        14730c:	e5903000 	ldr	r3, [r0]
        147310:	e1a0e00f 	mov	lr, pc
        147314:	e283f038 	add	pc, r3, #56	; 0x38
        147318:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        14731c:	e3300000 	teq	r0, #0	; 0x0
        147320:	15901000 	ldrne	r1, [r0]
        147324:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        147328:	1281f028 	addne	pc, r1, #40	; 0x28
        14732c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

