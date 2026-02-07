#include "include/TIrDscInfo.h"

/**
 * Symbol: TIrDscInfo::__ct(void)
 * Address: 000ef35c
 */
TIrDscInfo::TIrDscInfo(void) {
    /*
         ef35c:	e1a0c00d 	mov	ip, sp
         ef360:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ef364:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef368:	e1b04000 	movs	r4, r0
         ef36c:	1a000003 	bne	ef380 <TIrDscInfo::__ct(void)+0x24>
         ef370:	e3a00020 	mov	r0, #32	; 0x20
         ef374:	eb6b7cef 	bl	1bce738 <$__nw(unsigned int)>
         ef378:	e1b04000 	movs	r4, r0
         ef37c:	0a000006 	beq	ef39c <TIrDscInfo::__ct(void)+0x40>
         ef380:	e3a00002 	mov	r0, #2	; 0x2
         ef384:	e5840004 	str	r0, [r4, #4]	; fField4
         ef388:	e3a00000 	mov	r0, #0	; 0x0
         ef38c:	e5c40009 	strb	r0, [r4, #9]	; fField9
         ef390:	e59f100c 	ldr	r1, [pc, #c]	; ef3a4 <TIrDscInfo::__ct(void)+0x48>
         ef394:	e1a00004 	mov	r0, r4
         ef398:	eb000005 	bl	ef3b4 <TIrDscInfo::SetNickname(unsigned char const *)>
         ef39c:	e1a00004 	mov	r0, r4
         ef3a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         ef3a4:	00371784 	eoreqs	r1, r7, r4, lsl #15
    */
}

/**
 * Symbol: TIrDscInfo::__dt(void)
 * Address: 000ef3a8
 */
TIrDscInfo::~TIrDscInfo(void) {
    /*
         ef3a8:	e3110001 	tst	r1, #1	; 0x1
         ef3ac:	1a6b78cb 	bne	1bcd6e0 <$__dl(void *)>
         ef3b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrDscInfo::SetNickname(unsigned char const *)
 * Address: 000ef3b4
 */
TIrDscInfo::SetNickname(unsigned char const *) {
    /*
         ef3b4:	e1a0c00d 	mov	ip, sp
         ef3b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ef3bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef3c0:	e1a05000 	mov	r5, r0
         ef3c4:	e1a04001 	mov	r4, r1
         ef3c8:	e1a00001 	mov	r0, r1
         ef3cc:	eb6b19b7 	bl	1bb5ab0 <$strlen>
         ef3d0:	e3500015 	cmp	r0, #21	; 0x15
         ef3d4:	83a0007a 	movhi	r0, #122	; 0x7a
         ef3d8:	82400c3f 	subhi	r0, r0, #16128	; 0x3f00
         ef3dc:	891ba830 	ldmhidb	fp, {r4, r5, fp, sp, pc}
         ef3e0:	e285000a 	add	r0, r5, #10	; 0xa
         ef3e4:	e1a01004 	mov	r1, r4
         ef3e8:	eb6b19af 	bl	1bb5aac <$strcpy>
         ef3ec:	e3a00000 	mov	r0, #0	; 0x0
         ef3f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDscInfo::AddDevInfoToBuffer(unsigned char *, unsigned long)
 * Address: 000ef3f4
 */
TIrDscInfo::AddDevInfoToBuffer(unsigned char *, unsigned long) {
    /*
         ef3f4:	e1a0c00d 	mov	ip, sp
         ef3f8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         ef3fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef400:	e1a04001 	mov	r4, r1
         ef404:	e3a02000 	mov	r2, #0	; 0x0
         ef408:	e3a0c000 	mov	ip, #0	; 0x0
         ef40c:	e5901004 	ldr	r1, [r0, #4]	; fField4
         ef410:	e20130ff 	and	r3, r1, #255	; 0xff
         ef414:	e1a01421 	mov	r1, r1, lsr #8
         ef418:	e3510000 	cmp	r1, #0	; 0x0
         ef41c:	120330ff 	andne	r3, r3, #255	; 0xff
         ef420:	13833080 	orrne	r3, r3, #128	; 0x80
         ef424:	e4c43001 	strb	r3, [r4], #1
         ef428:	e2822001 	add	r2, r2, #1	; 0x1
         ef42c:	0a000002 	beq	ef43c <TIrDscInfo::AddDevInfoToBuffer(unsigned char *, unsigned long)+0x48>
         ef430:	e28cc001 	add	ip, ip, #1	; 0x1
         ef434:	e35c0004 	cmp	ip, #4	; 0x4
         ef438:	3afffff4 	bcc	ef410 <TIrDscInfo::AddDevInfoToBuffer(unsigned char *, unsigned long)+0x1c>
         ef43c:	e5d01009 	ldrb	r1, [r0, #9]	; fField9
         ef440:	e4c41001 	strb	r1, [r4], #1
         ef444:	e2825001 	add	r5, r2, #1	; 0x1
         ef448:	e280000a 	add	r0, r0, #10	; 0xa
         ef44c:	e1a07000 	mov	r7, r0
         ef450:	eb6b1996 	bl	1bb5ab0 <$strlen>
         ef454:	e2452002 	sub	r2, r5, #2	; 0x2
         ef458:	e2621015 	rsb	r1, r2, #21	; 0x15
         ef45c:	e1500001 	cmp	r0, r1
         ef460:	a1a00001 	movge	r0, r1
         ef464:	e1a06000 	mov	r6, r0
         ef468:	e1a01007 	mov	r1, r7
         ef46c:	e1a02000 	mov	r2, r0
         ef470:	e1a00004 	mov	r0, r4
         ef474:	eb6b1575 	bl	1bb4a50 <$memcpy>
         ef478:	e0850006 	add	r0, r5, r6
         ef47c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDscInfo::ExtractDevInfoFromBuffer(CBufferSegment *)
 * Address: 000ef480
 */
TIrDscInfo::ExtractDevInfoFromBuffer(CBufferSegment *) {
    /*
         ef480:	e1a0c00d 	mov	ip, sp
         ef484:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ef488:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef48c:	e1a04000 	mov	r4, r0
         ef490:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         ef494:	e3a05000 	mov	r5, #0	; 0x0
         ef498:	e5805004 	str	r5, [r0, #4]	; fField4
         ef49c:	e5c0500a 	strb	r5, [r0, #10]
         ef4a0:	e1a03001 	mov	r3, r1
         ef4a4:	e1a0100d 	mov	r1, sp
         ef4a8:	e1a00003 	mov	r0, r3
         ef4ac:	e3a0201a 	mov	r2, #26	; 0x1a
         ef4b0:	e5933000 	ldr	r3, [r3]
         ef4b4:	e1a0e00f 	mov	lr, pc
         ef4b8:	e283f014 	add	pc, r3, #20	; 0x14
         ef4bc:	e1a01000 	mov	r1, r0
         ef4c0:	e3a00000 	mov	r0, #0	; 0x0
         ef4c4:	e3510000 	cmp	r1, #0	; 0x0
         ef4c8:	9a00000b 	bls	ef4fc <TIrDscInfo::ExtractDevInfoFromBuffer(CBufferSegment *)+0x7c>
         ef4cc:	e7dd2000 	ldrb	r2, [sp, r0]
         ef4d0:	e3c23080 	bic	r3, r2, #128	; 0x80
         ef4d4:	e1a0c180 	mov	ip, r0, lsl #3
         ef4d8:	e1a0cc13 	mov	ip, r3, lsl ip
         ef4dc:	e5943004 	ldr	r3, [r4, #4]	; fField4
         ef4e0:	e18c3003 	orr	r3, ip, r3
         ef4e4:	e2800001 	add	r0, r0, #1	; 0x1
         ef4e8:	e3120080 	tst	r2, #128	; 0x80
         ef4ec:	e5843004 	str	r3, [r4, #4]	; fField4
         ef4f0:	0a000001 	beq	ef4fc <TIrDscInfo::ExtractDevInfoFromBuffer(CBufferSegment *)+0x7c>
         ef4f4:	e1500001 	cmp	r0, r1
         ef4f8:	3afffff3 	bcc	ef4cc <TIrDscInfo::ExtractDevInfoFromBuffer(CBufferSegment *)+0x4c>
         ef4fc:	e1500001 	cmp	r0, r1
         ef500:	2a000003 	bcs	ef514 <TIrDscInfo::ExtractDevInfoFromBuffer(CBufferSegment *)+0x94>
         ef504:	e1a02000 	mov	r2, r0
         ef508:	e2800001 	add	r0, r0, #1	; 0x1
         ef50c:	e7dd2002 	ldrb	r2, [sp, r2]
         ef510:	e5c42009 	strb	r2, [r4, #9]	; fField9
         ef514:	e0412000 	sub	r2, r1, r0
         ef518:	e1a06002 	mov	r6, r2
         ef51c:	e08d1000 	add	r1, sp, r0
         ef520:	e284000a 	add	r0, r4, #10	; 0xa
         ef524:	eb6b1549 	bl	1bb4a50 <$memcpy>
         ef528:	e1a00005 	mov	r0, r5
         ef52c:	e0861004 	add	r1, r6, r4
         ef530:	e5c1500a 	strb	r5, [r1, #10]
         ef534:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

