#include "include/TTransform.h"

/**
 * Symbol: TTransform::Setup(TRect const *, TRect const *, unsigned char)
 * Address: 001973e8
 */
TTransform::Setup(TRect const *, TRect const *, unsigned char) {
    /*
        1973e8:	e1a0c00d 	mov	ip, sp
        1973ec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1973f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1973f4:	e1a04000 	mov	r4, r0
        1973f8:	e20370ff 	and	r7, r3, #255	; 0xff
        1973fc:	e3310000 	teq	r1, #0	; 0x0
        197400:	05940018 	ldreq	r0, [r4, #24]	; fField24
        197404:	03c00102 	biceq	r0, r0, #-2147483648	; 0x80000000
        197408:	0a000053 	beq	19755c <TTransform::Setup(TRect const *, TRect const *, unsigned char)+0x174>
        19740c:	e2845008 	add	r5, r4, #8	; 0x8
        197410:	e8911008 	ldmia	r1, {r3, ip}
        197414:	e8851008 	stmia	r5, {r3, ip}
        197418:	e2846010 	add	r6, r4, #16	; 0x10
        19741c:	e8921008 	ldmia	r2, {r3, ip}
        197420:	e8861008 	stmia	r6, {r3, ip}
        197424:	e5951006 	ldr	r1, [r5, #6]
        197428:	e1a01821 	mov	r1, r1, lsr #16
        19742c:	e5950002 	ldr	r0, [r5, #2]
        197430:	e1a00820 	mov	r0, r0, lsr #16
        197434:	e0410000 	sub	r0, r1, r0
        197438:	e1a01800 	mov	r1, r0, lsl #16
        19743c:	e5962006 	ldr	r2, [r6, #6]
        197440:	e1a02822 	mov	r2, r2, lsr #16
        197444:	e5960002 	ldr	r0, [r6, #2]
        197448:	e1a00820 	mov	r0, r0, lsr #16
        19744c:	e0420000 	sub	r0, r2, r0
        197450:	e1a00800 	mov	r0, r0, lsl #16
        197454:	eb692719 	bl	1be10c0 <$FixedDivide>
        197458:	e5840000 	str	r0, [r4]
        19745c:	e5951004 	ldr	r1, [r5, #4]	; fField4
        197460:	e1a01821 	mov	r1, r1, lsr #16
        197464:	e5950000 	ldr	r0, [r5]
        197468:	e1a00820 	mov	r0, r0, lsr #16
        19746c:	e0410000 	sub	r0, r1, r0
        197470:	e1a01800 	mov	r1, r0, lsl #16
        197474:	e5960004 	ldr	r0, [r6, #4]	; fField4
        197478:	e1a00820 	mov	r0, r0, lsr #16
        19747c:	e5962000 	ldr	r2, [r6]
        197480:	e1a02822 	mov	r2, r2, lsr #16
        197484:	e0400002 	sub	r0, r0, r2
        197488:	e1a00800 	mov	r0, r0, lsl #16
        19748c:	eb69270b 	bl	1be10c0 <$FixedDivide>
        197490:	e3370000 	teq	r7, #0	; 0x0
        197494:	e5840004 	str	r0, [r4, #4]	; fField4
        197498:	0a000023 	beq	19752c <TTransform::Setup(TRect const *, TRect const *, unsigned char)+0x144>
        19749c:	e5941000 	ldr	r1, [r4]
        1974a0:	e1500001 	cmp	r0, r1
        1974a4:	da000010 	ble	1974ec <TTransform::Setup(TRect const *, TRect const *, unsigned char)+0x104>
        1974a8:	e5841004 	str	r1, [r4, #4]	; fField4
        1974ac:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1974b0:	e1a00820 	mov	r0, r0, lsr #16
        1974b4:	e5952000 	ldr	r2, [r5]
        1974b8:	e1a02822 	mov	r2, r2, lsr #16
        1974bc:	e0400002 	sub	r0, r0, r2
        1974c0:	e1a00800 	mov	r0, r0, lsl #16
        1974c4:	e1a00840 	mov	r0, r0, asr #16
        1974c8:	e0000091 	mul	r0, r1, r0
        1974cc:	e2800902 	add	r0, r0, #32768	; 0x8000
        1974d0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1974d4:	e1a01821 	mov	r1, r1, lsr #16
        1974d8:	e0810840 	add	r0, r1, r0, asr #16
        1974dc:	e5c40015 	strb	r0, [r4, #21]	; fField21
        1974e0:	e1a00440 	mov	r0, r0, asr #8
        1974e4:	e5c40014 	strb	r0, [r4, #20]	; fField20
        1974e8:	ea00000f 	b	19752c <TTransform::Setup(TRect const *, TRect const *, unsigned char)+0x144>
        1974ec:	e5840000 	str	r0, [r4]
        1974f0:	e5951006 	ldr	r1, [r5, #6]
        1974f4:	e1a01821 	mov	r1, r1, lsr #16
        1974f8:	e5952002 	ldr	r2, [r5, #2]
        1974fc:	e1a02822 	mov	r2, r2, lsr #16
        197500:	e0411002 	sub	r1, r1, r2
        197504:	e1a01801 	mov	r1, r1, lsl #16
        197508:	e1a01841 	mov	r1, r1, asr #16
        19750c:	e0010190 	mul	r1, r0, r1
        197510:	e2810902 	add	r0, r1, #32768	; 0x8000
        197514:	e5941012 	ldr	r1, [r4, #18]	; fField18
        197518:	e1a01821 	mov	r1, r1, lsr #16
        19751c:	e0810840 	add	r0, r1, r0, asr #16
        197520:	e5c40017 	strb	r0, [r4, #23]	; fField23
        197524:	e1a00440 	mov	r0, r0, asr #8
        197528:	e5c40016 	strb	r0, [r4, #22]	; fField22
        19752c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        197530:	e3801102 	orr	r1, r0, #-2147483648	; 0x80000000
        197534:	e5841018 	str	r1, [r4, #24]	; fField24
        197538:	e5940000 	ldr	r0, [r4]
        19753c:	e3300801 	teq	r0, #65536	; 0x10000
        197540:	05940004 	ldreq	r0, [r4, #4]	; fField4
        197544:	03300801 	teqeq	r0, #65536	; 0x10000
        197548:	13a00000 	movne	r0, #0	; 0x0
        19754c:	03a00001 	moveq	r0, #1	; 0x1
        197550:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
        197554:	e2000001 	and	r0, r0, #1	; 0x1
        197558:	e1810f00 	orr	r0, r1, r0, lsl #30
        19755c:	e5a40018 	str	r0, [r4, #24]!	; fField24
        197560:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

