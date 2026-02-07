#include "include/TBitsPort.h"

/**
 * Symbol: TBitsPort::Constructor(TBits *, TPoint, unsigned char)
 * Address: 00042484
 */
TBitsPort::Constructor(TBits *, TPoint, unsigned char) {
    /*
         42484:	e1a0c00d 	mov	ip, sp
         42488:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         4248c:	e24cb004 	sub	fp, ip, #4	; 0x4
         42490:	e1a05002 	mov	r5, r2
         42494:	e1a04000 	mov	r4, r0
         42498:	e20360ff 	and	r6, r3, #255	; 0xff
         4249c:	e5801000 	str	r1, [r0]
         424a0:	e24dd004 	sub	sp, sp, #4	; 0x4
         424a4:	e1a0000d 	mov	r0, sp
         424a8:	eb6eb4bd 	bl	1bef7a4 <$GetPort(GrafPort **)>
         424ac:	e49d0004 	ldr	r0, [sp], #4	; fField4
         424b0:	e5840008 	str	r0, [r4, #8]	; fField8
         424b4:	e3a00054 	mov	r0, #84	; 0x54
         424b8:	eb6e309e 	bl	1bce738 <$__nw(unsigned int)>
         424bc:	e5840004 	str	r0, [r4, #4]	; fField4
         424c0:	e24dd004 	sub	sp, sp, #4	; 0x4
         424c4:	e3300000 	teq	r0, #0	; 0x0
         424c8:	1a000005 	bne	424e4 <TBitsPort::Constructor(TBits *, TPoint, unsigned char)+0x60>
         424cc:	e59f0094 	ldr	r0, [pc, #94]	; 42568 <TBitsPort::Constructor(TBits *, TPoint, unsigned char)+0xe4>
         424d0:	e5900000 	ldr	r0, [r0]
         424d4:	e3a02000 	mov	r2, #0	; 0x0
         424d8:	e3a010e9 	mov	r1, #233	; 0xe9
         424dc:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         424e0:	eb6e832d 	bl	1be319c <$Throw>
         424e4:	e5940004 	ldr	r0, [r4, #4]	; fField4
         424e8:	eb6eb4ae 	bl	1bef7a8 <$OpenPort(GrafPort *)>
         424ec:	e5940004 	ldr	r0, [r4, #4]	; fField4
         424f0:	eb6eb4ad 	bl	1bef7ac <$SetPort(GrafPort *)>
         424f4:	e5940000 	ldr	r0, [r4]
         424f8:	eb6c453f 	bl	1b539fc <$SetPortBits(PixelMap *)>
         424fc:	e5940004 	ldr	r0, [r4, #4]	; fField4
         42500:	e280001c 	add	r0, r0, #28	; 0x1c
         42504:	e5941000 	ldr	r1, [r4]
         42508:	e2811008 	add	r1, r1, #8	; 0x8
         4250c:	e8915000 	ldmia	r1, {ip, lr}
         42510:	e8805000 	stmia	r0, {ip, lr}
         42514:	e24dd004 	sub	sp, sp, #4	; 0x4
         42518:	e1a0000d 	mov	r0, sp
         4251c:	eb6eb4a0 	bl	1bef7a4 <$GetPort(GrafPort **)>
         42520:	e49d0004 	ldr	r0, [sp], #4	; fField4
         42524:	e5900024 	ldr	r0, [r0, #36]
         42528:	e58d0000 	str	r0, [sp]
         4252c:	e5940000 	ldr	r0, [r4]
         42530:	e2801008 	add	r1, r0, #8	; 0x8
         42534:	e59d0000 	ldr	r0, [sp]
         42538:	eb6c4517 	bl	1b5399c <$RectRgn(Region **, Rect *)>
         4253c:	e3360000 	teq	r6, #0	; 0x0
         42540:	13a01000 	movne	r1, #0	; 0x0
         42544:	15940000 	ldrne	r0, [r4]
         42548:	1b69451b 	blne	1a939bc <TBits::$Fill(long)>
         4254c:	e52d5004 	str	r5, [sp, -#4]!	; fField4
         42550:	e59d0002 	ldr	r0, [sp, #2]
         42554:	e1a00840 	mov	r0, r0, asr #16
         42558:	e59d1000 	ldr	r1, [sp]
         4255c:	e1a01841 	mov	r1, r1, asr #16
         42560:	eb6c4523 	bl	1b539f4 <$SetOrigin__FlT1>
         42564:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         42568:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TBitsPort::__dt(void)
 * Address: 0004256c
 */
TBitsPort::~TBitsPort(void) {
    /*
         4256c:	e1a0c00d 	mov	ip, sp
         42570:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         42574:	e24cb004 	sub	fp, ip, #4	; 0x4
         42578:	e1a04000 	mov	r4, r0
         4257c:	e1a05001 	mov	r5, r1
         42580:	e5900008 	ldr	r0, [r0, #8]	; fField8
         42584:	eb6eb488 	bl	1bef7ac <$SetPort(GrafPort *)>
         42588:	e5940004 	ldr	r0, [r4, #4]	; fField4
         4258c:	eb6c2c44 	bl	1b4d6a4 <$ClosePort(GrafPort *)>
         42590:	e5940004 	ldr	r0, [r4, #4]	; fField4
         42594:	eb6e2c51 	bl	1bcd6e0 <$__dl(void *)>
         42598:	e3150001 	tst	r5, #1	; 0x1
         4259c:	11a00004 	movne	r0, r4
         425a0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         425a4:	1a6e2c4d 	bne	1bcd6e0 <$__dl(void *)>
         425a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

