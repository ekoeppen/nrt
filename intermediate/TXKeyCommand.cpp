#include "include/TXKeyCommand.h"

/**
 * Symbol: TXKeyCommand::__ct(void)
 * Address: 0023348c
 */
TXKeyCommand::TXKeyCommand(void) {
    /*
        23348c:	e1a0c00d 	mov	ip, sp
        233490:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        233494:	e24cb004 	sub	fp, ip, #4	; 0x4
        233498:	e1b04000 	movs	r4, r0
        23349c:	1a000003 	bne	2334b0 <TXKeyCommand::__ct(void)+0x24>
        2334a0:	e3a00074 	mov	r0, #116	; 0x74
        2334a4:	eb666ca3 	bl	1bce738 <$__nw(unsigned int)>
        2334a8:	e1b04000 	movs	r4, r0
        2334ac:	0a000003 	beq	2334c0 <TXKeyCommand::__ct(void)+0x34>
        2334b0:	e1a00004 	mov	r0, r4
        2334b4:	eb6553da 	bl	1b88424 <TXEditCommand::$__ct(void)>
        2334b8:	e59f0008 	ldr	r0, [pc, #8]	; 2334c8 <TXKeyCommand::__ct(void)+0x3c>
        2334bc:	e5840000 	str	r0, [r4]
        2334c0:	e1a00004 	mov	r0, r4
        2334c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2334c8:	0001c77c 	andeq	ip, r1, ip, ror r7
    */
}

/**
 * Symbol: TXKeyCommand::ITXKeyCommand(Textension *, unsigned short const *, long, unsigned int, unsigned char *)
 * Address: 002334cc
 */
TXKeyCommand::ITXKeyCommand(Textension *, unsigned short const *, long, unsigned int, unsigned char *) {
    /*
        2334cc:	e1a0c00d 	mov	ip, sp
        2334d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2334d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2334d8:	e1a04000 	mov	r4, r0
        2334dc:	e99b0021 	ldmib	fp, {r0, r5}
        2334e0:	e3100010 	tst	r0, #16	; 0x10
        2334e4:	03e00000 	mvneq	r0, #0	; 0x0
        2334e8:	13e00102 	mvnne	r0, #-2147483648	; 0x80000000
        2334ec:	e1a03005 	mov	r3, r5
        2334f0:	e584006c 	str	r0, [r4, #108]	; fField108
        2334f4:	e1a00004 	mov	r0, r4
        2334f8:	e3a02001 	mov	r2, #1	; 0x1
        2334fc:	eb6553c9 	bl	1b88428 <TXEditCommand::$ITXEditCommand(Textension *, int, unsigned char *)>
        233500:	e5d51000 	ldrb	r1, [r5]
        233504:	e3310000 	teq	r1, #0	; 0x0
        233508:	03a01001 	moveq	r1, #1	; 0x1
        23350c:	13a01004 	movne	r1, #4	; 0x4
        233510:	e5c4100d 	strb	r1, [r4, #13]	; fField13
        233514:	e3a01001 	mov	r1, #1	; 0x1
        233518:	e5c41068 	strb	r1, [r4, #104]	; fField104
        23351c:	e3a01000 	mov	r1, #0	; 0x0
        233520:	e5c41069 	strb	r1, [r4, #105]	; fField105
        233524:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXKeyCommand::AcceptKey(unsigned int)
 * Address: 00233528
 */
TXKeyCommand::AcceptKey(unsigned int) {
    /*
        233528:	e1a0c00d 	mov	ip, sp
        23352c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        233530:	e24cb004 	sub	fp, ip, #4	; 0x4
        233534:	e1a04000 	mov	r4, r0
        233538:	e1a05001 	mov	r5, r1
        23353c:	e5d00069 	ldrb	r0, [r0, #105]	; fField105
        233540:	e3a06000 	mov	r6, #0	; 0x0
        233544:	e3300000 	teq	r0, #0	; 0x0
        233548:	11a00006 	movne	r0, r6
        23354c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        233550:	e5d40068 	ldrb	r0, [r4, #104]	; fField104
        233554:	e3300000 	teq	r0, #0	; 0x0
        233558:	1a000014 	bne	2335b0 <TXKeyCommand::AcceptKey(unsigned int)+0x88>
        23355c:	e24dd010 	sub	sp, sp, #16	; 0x10
        233560:	e5940004 	ldr	r0, [r4, #4]	; fField4
        233564:	e5900014 	ldr	r0, [r0, #20]
        233568:	e1a0100d 	mov	r1, sp
        23356c:	eb6574c2 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        233570:	e59d0008 	ldr	r0, [sp, #8]
        233574:	e59d1000 	ldr	r1, [sp]
        233578:	e0500001 	subs	r0, r0, r1
        23357c:	059d1008 	ldreq	r1, [sp, #8]
        233580:	05940048 	ldreq	r0, [r4, #72]	; fField72
        233584:	01310000 	teqeq	r1, r0
        233588:	1a000005 	bne	2335a4 <TXKeyCommand::AcceptKey(unsigned int)+0x7c>
        23358c:	e3150010 	tst	r5, #16	; 0x10
        233590:	0a000005 	beq	2335ac <TXKeyCommand::AcceptKey(unsigned int)+0x84>
        233594:	e5940018 	ldr	r0, [r4, #24]	; fField24
        233598:	e59d1008 	ldr	r1, [sp, #8]
        23359c:	e1300001 	teq	r0, r1
        2335a0:	1a000001 	bne	2335ac <TXKeyCommand::AcceptKey(unsigned int)+0x84>
        2335a4:	e1a00006 	mov	r0, r6
        2335a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2335ac:	e28dd010 	add	sp, sp, #16	; 0x10
        2335b0:	e3a00001 	mov	r0, #1	; 0x1
        2335b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXKeyCommand::AddKey(unsigned short const *, long, long, unsigned int, void *)
 * Address: 002335b8
 */
TXKeyCommand::AddKey(unsigned short const *, long, long, unsigned int, void *) {
    /*
        2335b8:	e1a0c00d 	mov	ip, sp
        2335bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2335c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2335c4:	e1a04000 	mov	r4, r0
        2335c8:	e1a0c003 	mov	ip, r3
        2335cc:	e59b3004 	ldr	r3, [fp, #4]	; fField4
        2335d0:	e92d0008 	stmdb	sp!, {r3}
        2335d4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2335d8:	e1a0300c 	mov	r3, ip
        2335dc:	eb65b27d 	bl	1b9ffd8 <Textension::$KeyDown(unsigned short const *, long, long, unsigned int)>
        2335e0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2335e4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2335e8:	e5900014 	ldr	r0, [r0, #20]
        2335ec:	e1a0100d 	mov	r1, sp
        2335f0:	eb6574a1 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        2335f4:	e2840048 	add	r0, r4, #72	; 0x48
        2335f8:	e28d1008 	add	r1, sp, #8	; 0x8
        2335fc:	e8915000 	ldmia	r1, {ip, lr}
        233600:	e8805000 	stmia	r0, {ip, lr}
        233604:	e59d1000 	ldr	r1, [sp]
        233608:	e3a00000 	mov	r0, #0	; 0x0
        23360c:	e594206c 	ldr	r2, [r4, #108]	; fField108
        233610:	e1520001 	cmp	r2, r1
        233614:	c59d2000 	ldrgt	r2, [sp]
        233618:	c584206c 	strgt	r2, [r4, #108]	; fField108
        23361c:	c5c40070 	strgtb	r0, [r4, #112]	; fField112
        233620:	e5942018 	ldr	r2, [r4, #24]	; fField24
        233624:	e1320001 	teq	r2, r1
        233628:	1a000002 	bne	233638 <TXKeyCommand::AddKey(unsigned short const *, long, long, unsigned int, void *)+0x80>
        23362c:	e5d41058 	ldrb	r1, [r4, #88]	; fField88
        233630:	e3310000 	teq	r1, #0	; 0x0
        233634:	13a00001 	movne	r0, #1	; 0x1
        233638:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXKeyCommand::NewKey(unsigned short const *, long, long, unsigned int, void *)
 * Address: 0023363c
 */
TXKeyCommand::NewKey(unsigned short const *, long, long, unsigned int, void *) {
    /*
        23363c:	e1a0c00d 	mov	ip, sp
        233640:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        233644:	e24cb004 	sub	fp, ip, #4	; 0x4
        233648:	e1a04000 	mov	r4, r0
        23364c:	e1a07001 	mov	r7, r1
        233650:	e1a06002 	mov	r6, r2
        233654:	e1a05003 	mov	r5, r3
        233658:	e99b0300 	ldmib	fp, {r8, r9}
        23365c:	e1a01008 	mov	r1, r8
        233660:	e5902000 	ldr	r2, [r0]
        233664:	e1a0e00f 	mov	lr, pc
        233668:	e282f034 	add	pc, r2, #52	; 0x34
        23366c:	e3300000 	teq	r0, #0	; 0x0
        233670:	03a00003 	moveq	r0, #3	; 0x3
        233674:	0a00000a 	beq	2336a4 <TXKeyCommand::NewKey(unsigned short const *, long, long, unsigned int, void *)+0x68>
        233678:	e1a03009 	mov	r3, r9
        23367c:	e1a02008 	mov	r2, r8
        233680:	e92d000c 	stmdb	sp!, {r2, r3}
        233684:	e1a03005 	mov	r3, r5
        233688:	e1a02006 	mov	r2, r6
        23368c:	e1a01007 	mov	r1, r7
        233690:	e1a00004 	mov	r0, r4
        233694:	e594c000 	ldr	ip, [r4]
        233698:	e1a0e00f 	mov	lr, pc
        23369c:	e28cf038 	add	pc, ip, #56	; 0x38
        2336a0:	e28dd008 	add	sp, sp, #8	; 0x8
        2336a4:	e3a01000 	mov	r1, #0	; 0x0
        2336a8:	e5c41068 	strb	r1, [r4, #104]	; fField104
        2336ac:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXKeyCommand::SaveUndoContainer(unsigned char)
 * Address: 002336b0
 */
TXKeyCommand::SaveUndoContainer(unsigned char) {
    /*
        2336b0:	e1a0c00d 	mov	ip, sp
        2336b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2336b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2336bc:	e1a04000 	mov	r4, r0
        2336c0:	e20150ff 	and	r5, r1, #255	; 0xff
        2336c4:	e590006c 	ldr	r0, [r0, #108]	; fField108
        2336c8:	e2841018 	add	r1, r4, #24	; 0x18
        2336cc:	e3500000 	cmp	r0, #0	; 0x0
        2336d0:	ba00000f 	blt	233714 <TXKeyCommand::SaveUndoContainer(unsigned char)+0x64>
        2336d4:	e1a02001 	mov	r2, r1
        2336d8:	e3a03000 	mov	r3, #0	; 0x0
        2336dc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2336e0:	e5911000 	ldr	r1, [r1]
        2336e4:	e5922004 	ldr	r2, [r2, #4]	; fField4
        2336e8:	eb65b230 	bl	1b9ffb0 <Textension::$CharToLine( const(TXOffset, TXOffsetRange *))>
        2336ec:	e1b01000 	movs	r1, r0
        2336f0:	12411001 	subne	r1, r1, #1	; 0x1
        2336f4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2336f8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2336fc:	e5900014 	ldr	r0, [r0, #20]
        233700:	eb654b03 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        233704:	e5840018 	str	r0, [r4, #24]	; fField24
        233708:	e3a00000 	mov	r0, #0	; 0x0
        23370c:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        233710:	ea000001 	b	23371c <TXKeyCommand::SaveUndoContainer(unsigned char)+0x6c>
        233714:	e5940004 	ldr	r0, [r4, #4]	; fField4
        233718:	eb65b232 	bl	1b9ffe8 <Textension::$GetHiliteRangeWithoutSpaces(TXOffsetRange *)>
        23371c:	e1a01005 	mov	r1, r5
        233720:	e1a00004 	mov	r0, r4
        233724:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        233728:	ea655345 	b	1b88444 <TXEditCommand::$SaveUndoContainer(unsigned char)>
    */
}

/**
 * Symbol: TXKeyCommand::DoIt(int *)
 * Address: 0023372c
 */
TXKeyCommand::DoIt(int *) {
    /*
        23372c:	e3a00000 	mov	r0, #0	; 0x0
        233730:	e5810000 	str	r0, [r1]
        233734:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXKeyCommand::UndoIt(int *)
 * Address: 00233738
 */
TXKeyCommand::UndoIt(int *) {
    /*
        233738:	e3a02001 	mov	r2, #1	; 0x1
        23373c:	e5c02069 	strb	r2, [r0, #105]	; fField105
        233740:	ea655345 	b	1b8845c <TXEditCommand::$UndoIt(int *)>
    */
}

/**
 * Symbol: TXKeyCommand::UndoHilite(unsigned char)
 * Address: 00233744
 */
TXKeyCommand::UndoHilite(unsigned char) {
    /*
        233744:	e1a0c00d 	mov	ip, sp
        233748:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23374c:	e24cb004 	sub	fp, ip, #4	; 0x4
        233750:	e1a04000 	mov	r4, r0
        233754:	e20150ff 	and	r5, r1, #255	; 0xff
        233758:	e590006c 	ldr	r0, [r0, #108]	; fField108
        23375c:	e3500000 	cmp	r0, #0	; 0x0
        233760:	b1a01005 	movlt	r1, r5
        233764:	b1a00004 	movlt	r0, r4
        233768:	b91b6830 	ldmltdb	fp, {r4, r5, fp, sp, lr}
        23376c:	ba655338 	blt	1b88454 <TXEditCommand::$UndoHilite(unsigned char)>
        233770:	e24dd010 	sub	sp, sp, #16	; 0x10
        233774:	e2842020 	add	r2, r4, #32	; 0x20
        233778:	e284106c 	add	r1, r4, #108	; 0x6c
        23377c:	e1a0000d 	mov	r0, sp
        233780:	eb00021c 	bl	233ff8 <TXOffsetRange::__ct(TXOffset const &, TXOffset const &)>
        233784:	e1a02005 	mov	r2, r5
        233788:	e1a0100d 	mov	r1, sp
        23378c:	e5b4c004 	ldr	ip, [r4, #4]!	; fField4
        233790:	e1a0000c 	mov	r0, ip
        233794:	e3a03001 	mov	r3, #1	; 0x1
        233798:	e59cc000 	ldr	ip, [ip]
        23379c:	e1a0e00f 	mov	lr, pc
        2337a0:	e28cf008 	add	pc, ip, #8	; 0x8
        2337a4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXKeyCommand::RedoHilite(unsigned char)
 * Address: 002337a8
 */
TXKeyCommand::RedoHilite(unsigned char) {
    /*
        2337a8:	e1a0c00d 	mov	ip, sp
        2337ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2337b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2337b4:	e1a04000 	mov	r4, r0
        2337b8:	e20150ff 	and	r5, r1, #255	; 0xff
        2337bc:	e590006c 	ldr	r0, [r0, #108]	; fField108
        2337c0:	e3500000 	cmp	r0, #0	; 0x0
        2337c4:	b1a01005 	movlt	r1, r5
        2337c8:	b1a00004 	movlt	r0, r4
        2337cc:	b91b6830 	ldmltdb	fp, {r4, r5, fp, sp, lr}
        2337d0:	ba655320 	blt	1b88458 <TXEditCommand::$RedoHilite(unsigned char)>
        2337d4:	e24dd010 	sub	sp, sp, #16	; 0x10
        2337d8:	e2842048 	add	r2, r4, #72	; 0x48
        2337dc:	e284106c 	add	r1, r4, #108	; 0x6c
        2337e0:	e1a0000d 	mov	r0, sp
        2337e4:	eb000203 	bl	233ff8 <TXOffsetRange::__ct(TXOffset const &, TXOffset const &)>
        2337e8:	e1a02005 	mov	r2, r5
        2337ec:	e1a0100d 	mov	r1, sp
        2337f0:	e5b4c004 	ldr	ip, [r4, #4]!	; fField4
        2337f4:	e1a0000c 	mov	r0, ip
        2337f8:	e3a03001 	mov	r3, #1	; 0x1
        2337fc:	e59cc000 	ldr	ip, [ip]
        233800:	e1a0e00f 	mov	lr, pc
        233804:	e28cf008 	add	pc, ip, #8	; 0x8
        233808:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

