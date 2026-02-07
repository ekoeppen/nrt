#include "include/TOldWordHintsHandler.h"

/**
 * Symbol: TOldWordHintsHandler::SetHints(long *, unsigned short *, long)
 * Address: 002e043c
 */
TOldWordHintsHandler::SetHints(long *, unsigned short *, long) {
    /*
        2e043c:	e1a0c00d 	mov	ip, sp
        2e0440:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e0444:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e0448:	e1a06001 	mov	r6, r1
        2e044c:	e1a04002 	mov	r4, r2
        2e0450:	e1a05003 	mov	r5, r3
        2e0454:	e5920002 	ldr	r0, [r2, #2]
        2e0458:	e1a00820 	mov	r0, r0, lsr #16
        2e045c:	ebfff489 	bl	2dd688 <CanonicalCharacter(unsigned short)>
        2e0460:	e1a07000 	mov	r7, r0
        2e0464:	e5940000 	ldr	r0, [r4]
        2e0468:	e1a00820 	mov	r0, r0, lsr #16
        2e046c:	ebfff485 	bl	2dd688 <CanonicalCharacter(unsigned short)>
        2e0470:	e1870400 	orr	r0, r7, r0, lsl #8
        2e0474:	e3808602 	orr	r8, r0, #2097152	; 0x200000
        2e0478:	e3a07002 	mov	r7, #2	; 0x2
        2e047c:	e3550002 	cmp	r5, #2	; 0x2
        2e0480:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e0484:	e3a0901f 	mov	r9, #31	; 0x1f
        2e0488:	e3a0a001 	mov	sl, #1	; 0x1
        2e048c:	e7940087 	ldr	r0, [r4, r7, lsl #1]
        2e0490:	e1a00820 	mov	r0, r0, lsr #16
        2e0494:	ebfff47b 	bl	2dd688 <CanonicalCharacter(unsigned short)>
        2e0498:	e1808408 	orr	r8, r0, r8, lsl #8
        2e049c:	e1a01007 	mov	r1, r7
        2e04a0:	e1a00008 	mov	r0, r8
        2e04a4:	eb5d7ecd 	bl	1a3ffe0 <$HashQuadgram(unsigned long, long)>
        2e04a8:	e1a00d20 	mov	r0, r0, lsr #26
        2e04ac:	e1a012c0 	mov	r1, r0, asr #5
        2e04b0:	e7962101 	ldr	r2, [r6, r1, lsl #2]
        2e04b4:	e200001f 	and	r0, r0, #31	; 0x1f
        2e04b8:	e0490000 	sub	r0, r9, r0
        2e04bc:	e182001a 	orr	r0, r2, sl, lsl r0
        2e04c0:	e7860101 	str	r0, [r6, r1, lsl #2]
        2e04c4:	e2877001 	add	r7, r7, #1	; 0x1
        2e04c8:	e1570005 	cmp	r7, r5
        2e04cc:	baffffee 	blt	2e048c <TOldWordHintsHandler::SetHints(long *, unsigned short *, long)+0x50>
        2e04d0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

