#include "include/TStringInputStream.h"

/**
 * Symbol: TStringInputStream::__ct(RefVar const &)
 * Address: 000eb478
 */
TStringInputStream::TStringInputStream(RefVar const &) {
    /*
         eb478:	e1a0c00d 	mov	ip, sp
         eb47c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         eb480:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb484:	e1b04000 	movs	r4, r0
         eb488:	e1a05001 	mov	r5, r1
         eb48c:	1a000003 	bne	eb4a0 <TStringInputStream::__ct(RefVar const &)+0x28>
         eb490:	e3a00e11 	mov	r0, #272	; 0x110
         eb494:	eb6b8ca7 	bl	1bce738 <$__nw(unsigned int)>
         eb498:	e1b04000 	movs	r4, r0
         eb49c:	0a00000d 	beq	eb4d8 <TStringInputStream::__ct(RefVar const &)+0x60>
         eb4a0:	e1a00004 	mov	r0, r4
         eb4a4:	eb654247 	bl	1a3bdc8 <TInputStream::$__ct(void)>
         eb4a8:	e3a00002 	mov	r0, #2	; 0x2
         eb4ac:	eb6b5b26 	bl	1bc214c <$AllocateRefHandle(long)>
         eb4b0:	e3a01000 	mov	r1, #0	; 0x0
         eb4b4:	e5840108 	str	r0, [r4, #264]	; fField264
         eb4b8:	e5a01004 	str	r1, [r0, #4]!	; fField4
         eb4bc:	e59f001c 	ldr	r0, [pc, #1c]	; eb4e0 <TStringInputStream::__ct(RefVar const &)+0x68>
         eb4c0:	e5840000 	str	r0, [r4]
         eb4c4:	e5952000 	ldr	r2, [r5]
         eb4c8:	e5922000 	ldr	r2, [r2]
         eb4cc:	e5940108 	ldr	r0, [r4, #264]	; fField264
         eb4d0:	e5802000 	str	r2, [r0]
         eb4d4:	e584110c 	str	r1, [r4, #268]	; fField268
         eb4d8:	e1a00004 	mov	r0, r4
         eb4dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         eb4e0:	0001eb9c 	muleq	r1, ip, fp
    */
}

/**
 * Symbol: TStringInputStream::GetChar(void)
 * Address: 000eb4e4
 */
TStringInputStream::GetChar(void) {
    /*
         eb4e4:	e1a0c00d 	mov	ip, sp
         eb4e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         eb4ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb4f0:	e1a04000 	mov	r4, r0
         eb4f4:	e5901000 	ldr	r1, [r0]
         eb4f8:	e1a0e00f 	mov	lr, pc
         eb4fc:	e281f00c 	add	pc, r1, #12	; 0xc
         eb500:	e3300000 	teq	r0, #0	; 0x0
         eb504:	13a00801 	movne	r0, #65536	; 0x10000
         eb508:	12400001 	subne	r0, r0, #1	; 0x1
         eb50c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         eb510:	e5940108 	ldr	r0, [r4, #264]	; fField264
         eb514:	e5900000 	ldr	r0, [r0]
         eb518:	eb6b5b0f 	bl	1bc215c <$BinaryData(long)>
         eb51c:	e594210c 	ldr	r2, [r4, #268]	; fField268
         eb520:	e2821001 	add	r1, r2, #1	; 0x1
         eb524:	e584110c 	str	r1, [r4, #268]	; fField268
         eb528:	e7900082 	ldr	r0, [r0, r2, lsl #1]
         eb52c:	e1a00820 	mov	r0, r0, lsr #16
         eb530:	e330000d 	teq	r0, #13	; 0xd
         eb534:	05941004 	ldreq	r1, [r4, #4]	; fField4
         eb538:	02811001 	addeq	r1, r1, #1	; 0x1
         eb53c:	05a41004 	streq	r1, [r4, #4]!	; fField4
         eb540:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStringInputStream::UngetChar(unsigned short)
 * Address: 000eb544
 */
TStringInputStream::UngetChar(unsigned short) {
    /*
         eb544:	e1a01801 	mov	r1, r1, lsl #16
         eb548:	e1a01821 	mov	r1, r1, lsr #16
         eb54c:	e241ccff 	sub	ip, r1, #65280	; 0xff00
         eb550:	e33c00ff 	teq	ip, #255	; 0xff
         eb554:	01a0f00e 	moveq	pc, lr
         eb558:	e331000d 	teq	r1, #13	; 0xd
         eb55c:	05901004 	ldreq	r1, [r0, #4]	; fField4
         eb560:	02411001 	subeq	r1, r1, #1	; 0x1
         eb564:	05801004 	streq	r1, [r0, #4]	; fField4
         eb568:	e590110c 	ldr	r1, [r0, #268]	; fField268
         eb56c:	e3510000 	cmp	r1, #0	; 0x0
         eb570:	82411001 	subhi	r1, r1, #1	; 0x1
         eb574:	85a0110c 	strhi	r1, [r0, #268]!	; fField268
         eb578:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStringInputStream::End(void)
 * Address: 000eb57c
 */
TStringInputStream::End(void) {
    /*
         eb57c:	e1a0c00d 	mov	ip, sp
         eb580:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         eb584:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb588:	e1a04000 	mov	r4, r0
         eb58c:	e5900108 	ldr	r0, [r0, #264]	; fField264
         eb590:	e5900000 	ldr	r0, [r0]
         eb594:	eb6b6744 	bl	1bc52ac <$Length(long)>
         eb598:	e5b4110c 	ldr	r1, [r4, #268]!	; fField268
         eb59c:	e2811001 	add	r1, r1, #1	; 0x1
         eb5a0:	e15100a0 	cmp	r1, r0, lsr #1
         eb5a4:	33a00000 	movcc	r0, #0	; 0x0
         eb5a8:	23a00001 	movcs	r0, #1	; 0x1
         eb5ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

