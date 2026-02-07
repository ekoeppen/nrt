#include "include/TWordHintsHandler.h"

/**
 * Symbol: TWordHintsHandler::GetNumHintChunks(long, int *)
 * Address: 002ddd74
 */
TWordHintsHandler::GetNumHintChunks(long, int *) {
    /*
        2ddd74:	e3a00020 	mov	r0, #32	; 0x20
        2ddd78:	e251cd7f 	subs	ip, r1, #8128	; 0x1fc0
        2ddd7c:	a35c0020 	cmpge	ip, #32	; 0x20
        2ddd80:	e5820000 	str	r0, [r2]
        2ddd84:	a3a00001 	movge	r0, #1	; 0x1
        2ddd88:	a1a0f00e 	movge	pc, lr
        2ddd8c:	e3510000 	cmp	r1, #0	; 0x0
        2ddd90:	b281101f 	addlt	r1, r1, #31	; 0x1f
        2ddd94:	e1a012c1 	mov	r1, r1, asr #5
        2ddd98:	e2810001 	add	r0, r1, #1	; 0x1
        2ddd9c:	e20000ff 	and	r0, r0, #255	; 0xff
        2ddda0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWordHintsHandler::FindHintWord(unsigned short *&, long &, long &)
 * Address: 002df358
 */
TWordHintsHandler::FindHintWord(unsigned short *&, long &, long &) {
    /*
        2df358:	e1a0c00d 	mov	ip, sp
        2df35c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2df360:	e24cb004 	sub	fp, ip, #4	; 0x4
        2df364:	e1a07000 	mov	r7, r0
        2df368:	e1a04001 	mov	r4, r1
        2df36c:	e1a06002 	mov	r6, r2
        2df370:	e1a05003 	mov	r5, r3
        2df374:	e3a08000 	mov	r8, #0	; 0x0
        2df378:	ea000008 	b	2df3a0 <TWordHintsHandler::FindHintWord(unsigned short *&, long &, long &)+0x48>
        2df37c:	e5940000 	ldr	r0, [r4]
        2df380:	e5901000 	ldr	r1, [r0]
        2df384:	e1b01821 	movs	r1, r1, lsr #16
        2df388:	0a000011 	beq	2df3d4 <TWordHintsHandler::FindHintWord(unsigned short *&, long &, long &)+0x7c>
        2df38c:	e2800002 	add	r0, r0, #2	; 0x2
        2df390:	e5840000 	str	r0, [r4]
        2df394:	e5951000 	ldr	r1, [r5]
        2df398:	e2411001 	sub	r1, r1, #1	; 0x1
        2df39c:	e5851000 	str	r1, [r5]
        2df3a0:	e5950000 	ldr	r0, [r5]
        2df3a4:	e3300000 	teq	r0, #0	; 0x0
        2df3a8:	0a000009 	beq	2df3d4 <TWordHintsHandler::FindHintWord(unsigned short *&, long &, long &)+0x7c>
        2df3ac:	e5940000 	ldr	r0, [r4]
        2df3b0:	e5900000 	ldr	r0, [r0]
        2df3b4:	e1a00820 	mov	r0, r0, lsr #16
        2df3b8:	eb642c5a 	bl	1bea528 <$IsDelimiter(unsigned short)>
        2df3bc:	e3300000 	teq	r0, #0	; 0x0
        2df3c0:	1affffed 	bne	2df37c <TWordHintsHandler::FindHintWord(unsigned short *&, long &, long &)+0x24>
        2df3c4:	e5950000 	ldr	r0, [r5]
        2df3c8:	e3300000 	teq	r0, #0	; 0x0
        2df3cc:	15948000 	ldrne	r8, [r4]
        2df3d0:	1a000005 	bne	2df3ec <TWordHintsHandler::FindHintWord(unsigned short *&, long &, long &)+0x94>
        2df3d4:	e1a00008 	mov	r0, r8
        2df3d8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2df3dc:	e2888002 	add	r8, r8, #2	; 0x2
        2df3e0:	e5951000 	ldr	r1, [r5]
        2df3e4:	e2411001 	sub	r1, r1, #1	; 0x1
        2df3e8:	e5851000 	str	r1, [r5]
        2df3ec:	e5950000 	ldr	r0, [r5]
        2df3f0:	e3300000 	teq	r0, #0	; 0x0
        2df3f4:	0a000004 	beq	2df40c <TWordHintsHandler::FindHintWord(unsigned short *&, long &, long &)+0xb4>
        2df3f8:	e5980000 	ldr	r0, [r8]
        2df3fc:	e1a00820 	mov	r0, r0, lsr #16
        2df400:	eb642c48 	bl	1bea528 <$IsDelimiter(unsigned short)>
        2df404:	e3300000 	teq	r0, #0	; 0x0
        2df408:	0afffff3 	beq	2df3dc <TWordHintsHandler::FindHintWord(unsigned short *&, long &, long &)+0x84>
        2df40c:	e5940000 	ldr	r0, [r4]
        2df410:	e0480000 	sub	r0, r8, r0
        2df414:	e0800fa0 	add	r0, r0, r0, lsr #31
        2df418:	e1a000c0 	mov	r0, r0, asr #1
        2df41c:	e5860000 	str	r0, [r6]
        2df420:	e3500002 	cmp	r0, #2	; 0x2
        2df424:	c3a00001 	movgt	r0, #1	; 0x1
        2df428:	c91ba9f0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2df42c:	e5942000 	ldr	r2, [r4]
        2df430:	e0820080 	add	r0, r2, r0, lsl #1
        2df434:	e1a03005 	mov	r3, r5
        2df438:	e1a02006 	mov	r2, r6
        2df43c:	e5840000 	str	r0, [r4]
        2df440:	e1a01004 	mov	r1, r4
        2df444:	e1a00007 	mov	r0, r7
        2df448:	e597c000 	ldr	ip, [r7]
        2df44c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2df450:	e28cf004 	add	pc, ip, #4	; 0x4
    */
}

/**
 * Symbol: TWordHintsHandler::SetHints(long *, unsigned short *, long)
 * Address: 002dfc64
 */
TWordHintsHandler::SetHints(long *, unsigned short *, long) {
    /*
        2dfc64:	e1a0c00d 	mov	ip, sp
        2dfc68:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2dfc6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dfc70:	e1a04001 	mov	r4, r1
        2dfc74:	e1a05002 	mov	r5, r2
        2dfc78:	e1a06003 	mov	r6, r3
        2dfc7c:	e5920002 	ldr	r0, [r2, #2]
        2dfc80:	e1a00820 	mov	r0, r0, lsr #16
        2dfc84:	ebfff67f 	bl	2dd688 <CanonicalCharacter(unsigned short)>
        2dfc88:	e1a07000 	mov	r7, r0
        2dfc8c:	e5950000 	ldr	r0, [r5]
        2dfc90:	e1a00820 	mov	r0, r0, lsr #16
        2dfc94:	ebfff67b 	bl	2dd688 <CanonicalCharacter(unsigned short)>
        2dfc98:	e1870400 	orr	r0, r7, r0, lsl #8
        2dfc9c:	e3808602 	orr	r8, r0, #2097152	; 0x200000
        2dfca0:	e3a07002 	mov	r7, #2	; 0x2
        2dfca4:	e3560002 	cmp	r6, #2	; 0x2
        2dfca8:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2dfcac:	e3a0a01f 	mov	sl, #31	; 0x1f
        2dfcb0:	e3a09001 	mov	r9, #1	; 0x1
        2dfcb4:	e7950087 	ldr	r0, [r5, r7, lsl #1]
        2dfcb8:	e1a00820 	mov	r0, r0, lsr #16
        2dfcbc:	ebfff671 	bl	2dd688 <CanonicalCharacter(unsigned short)>
        2dfcc0:	e1808408 	orr	r8, r0, r8, lsl #8
        2dfcc4:	e1a01007 	mov	r1, r7
        2dfcc8:	e1a00008 	mov	r0, r8
        2dfccc:	eb5d80c3 	bl	1a3ffe0 <$HashQuadgram(unsigned long, long)>
        2dfcd0:	e1a03d20 	mov	r3, r0, lsr #26
        2dfcd4:	e1a012c3 	mov	r1, r3, asr #5
        2dfcd8:	e7942101 	ldr	r2, [r4, r1, lsl #2]
        2dfcdc:	e203301f 	and	r3, r3, #31	; 0x1f
        2dfce0:	e04a3003 	sub	r3, sl, r3
        2dfce4:	e1822319 	orr	r2, r2, r9, lsl r3
        2dfce8:	e7842101 	str	r2, [r4, r1, lsl #2]
        2dfcec:	e3570003 	cmp	r7, #3	; 0x3
        2dfcf0:	ca00001c 	bgt	2dfd68 <TWordHintsHandler::SetHints(long *, unsigned short *, long)+0x104>
        2dfcf4:	e1a01007 	mov	r1, r7
        2dfcf8:	eb5d80b8 	bl	1a3ffe0 <$HashQuadgram(unsigned long, long)>
        2dfcfc:	e1a03d20 	mov	r3, r0, lsr #26
        2dfd00:	e1a012c3 	mov	r1, r3, asr #5
        2dfd04:	e7942101 	ldr	r2, [r4, r1, lsl #2]
        2dfd08:	e203301f 	and	r3, r3, #31	; 0x1f
        2dfd0c:	e04a3003 	sub	r3, sl, r3
        2dfd10:	e1822319 	orr	r2, r2, r9, lsl r3
        2dfd14:	e7842101 	str	r2, [r4, r1, lsl #2]
        2dfd18:	e1a01007 	mov	r1, r7
        2dfd1c:	eb5d80af 	bl	1a3ffe0 <$HashQuadgram(unsigned long, long)>
        2dfd20:	e1a01d20 	mov	r1, r0, lsr #26
        2dfd24:	e1a022c1 	mov	r2, r1, asr #5
        2dfd28:	e7943102 	ldr	r3, [r4, r2, lsl #2]
        2dfd2c:	e201101f 	and	r1, r1, #31	; 0x1f
        2dfd30:	e04a1001 	sub	r1, sl, r1
        2dfd34:	e1831119 	orr	r1, r3, r9, lsl r1
        2dfd38:	e7841102 	str	r1, [r4, r2, lsl #2]
        2dfd3c:	e3370002 	teq	r7, #2	; 0x2
        2dfd40:	1a000008 	bne	2dfd68 <TWordHintsHandler::SetHints(long *, unsigned short *, long)+0x104>
        2dfd44:	e1a01007 	mov	r1, r7
        2dfd48:	eb5d80a4 	bl	1a3ffe0 <$HashQuadgram(unsigned long, long)>
        2dfd4c:	e1a00d20 	mov	r0, r0, lsr #26
        2dfd50:	e1a012c0 	mov	r1, r0, asr #5
        2dfd54:	e7942101 	ldr	r2, [r4, r1, lsl #2]
        2dfd58:	e200001f 	and	r0, r0, #31	; 0x1f
        2dfd5c:	e04a0000 	sub	r0, sl, r0
        2dfd60:	e1820019 	orr	r0, r2, r9, lsl r0
        2dfd64:	e7840101 	str	r0, [r4, r1, lsl #2]
        2dfd68:	e2877001 	add	r7, r7, #1	; 0x1
        2dfd6c:	e1570006 	cmp	r7, r6
        2dfd70:	baffffcf 	blt	2dfcb4 <TWordHintsHandler::SetHints(long *, unsigned short *, long)+0x50>
        2dfd74:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

