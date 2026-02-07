#include "include/TIASServer.h"

/**
 * Symbol: TIASServer::__ct(void)
 * Address: 000f1340
 */
TIASServer::TIASServer(void) {
    /*
         f1340:	e1a0c00d 	mov	ip, sp
         f1344:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f1348:	e24cb004 	sub	fp, ip, #4	; 0x4
         f134c:	e1b04000 	movs	r4, r0
         f1350:	1a000003 	bne	f1364 <TIASServer::__ct(void)+0x24>
         f1354:	e3a00050 	mov	r0, #80	; 0x50
         f1358:	eb6b74f6 	bl	1bce738 <$__nw(unsigned int)>
         f135c:	e1b04000 	movs	r4, r0
         f1360:	0a000008 	beq	f1388 <TIASServer::__ct(void)+0x48>
         f1364:	e1a00004 	mov	r0, r4
         f1368:	eb651a1b 	bl	1a37bdc <TIrStream::$__ct(void)>
         f136c:	e59f001c 	ldr	r0, [pc, #1c]	; f1390 <TIASServer::__ct(void)+0x50>
         f1370:	e5840000 	str	r0, [r4]
         f1374:	e3a00000 	mov	r0, #0	; 0x0
         f1378:	e5840024 	str	r0, [r4, #36]	; fField36
         f137c:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f1380:	e5c40015 	strb	r0, [r4, #21]	; fField21
         f1384:	e584004c 	str	r0, [r4, #76]	; fField76
         f1388:	e1a00004 	mov	r0, r4
         f138c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f1390:	0001a9ec 	andeq	sl, r1, ip, ror #19
    */
}

/**
 * Symbol: TIASServer::__dt(void)
 * Address: 000f1394
 */
TIASServer::~TIASServer(void) {
    /*
         f1394:	e1a0c00d 	mov	ip, sp
         f1398:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f139c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f13a0:	e1a04000 	mov	r4, r0
         f13a4:	e1a05001 	mov	r5, r1
         f13a8:	e59f0028 	ldr	r0, [pc, #28]	; f13d8 <TIASServer::__dt(void)+0x44>	; fField28
         f13ac:	e5840000 	str	r0, [r4]
         f13b0:	e1a00004 	mov	r0, r4
         f13b4:	eb650555 	bl	1a32910 <TIASServer::$DeInit(void)>
         f13b8:	e1a00004 	mov	r0, r4
         f13bc:	e3a01000 	mov	r1, #0	; 0x0
         f13c0:	eb651a06 	bl	1a37be0 <TIrStream::$__dt(void)>
         f13c4:	e3150001 	tst	r5, #1	; 0x1
         f13c8:	11a00004 	movne	r0, r4
         f13cc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         f13d0:	1a6b70c2 	bne	1bcd6e0 <$__dl(void *)>
         f13d4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f13d8:	0001a9ec 	andeq	sl, r1, ip, ror #19
    */
}

/**
 * Symbol: TIASServer::ListenStart(void)
 * Address: 000f13dc
 */
TIASServer::ListenStart(void) {
    /*
         f13dc:	e2801028 	add	r1, r0, #40	; 0x28
         f13e0:	e3a02007 	mov	r2, #7	; 0x7
         f13e4:	e5c12000 	strb	r2, [r1]
         f13e8:	e3a02000 	mov	r2, #0	; 0x0
         f13ec:	e5812004 	str	r2, [r1, #4]
         f13f0:	e581200c 	str	r2, [r1, #12]	; fField12
         f13f4:	e5c12010 	strb	r2, [r1, #16]
         f13f8:	e5903018 	ldr	r3, [r0, #24]	; fField24
         f13fc:	e2833070 	add	r3, r3, #112	; 0x70
         f1400:	e5813014 	str	r3, [r1, #20]	; fField20
         f1404:	e5903018 	ldr	r3, [r0, #24]	; fField24
         f1408:	e2833078 	add	r3, r3, #120	; 0x78
         f140c:	e581201c 	str	r2, [r1, #28]	; fField28
         f1410:	e5813018 	str	r3, [r1, #24]	; fField24
         f1414:	e5900024 	ldr	r0, [r0, #36]	; fField36
         f1418:	ea6519f2 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIASServer::GetStart(void)
 * Address: 000f141c
 */
TIASServer::GetStart(void) {
    /*
         f141c:	e1a0c00d 	mov	ip, sp
         f1420:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f1424:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1428:	e1a04000 	mov	r4, r0
         f142c:	e2805028 	add	r5, r0, #40	; 0x28
         f1430:	e3a0000b 	mov	r0, #11	; 0xb
         f1434:	e5c50000 	strb	r0, [r5]
         f1438:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f143c:	e585000c 	str	r0, [r5, #12]	; fField12
         f1440:	e3a00000 	mov	r0, #0	; 0x0
         f1444:	e5850010 	str	r0, [r5, #16]
         f1448:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f144c:	e5901000 	ldr	r1, [r0]
         f1450:	e1a0e00f 	mov	lr, pc
         f1454:	e281f02c 	add	pc, r1, #44	; 0x2c
         f1458:	e5850014 	str	r0, [r5, #20]	; fField20
         f145c:	e1a01005 	mov	r1, r5
         f1460:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         f1464:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f1468:	ea6519de 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIASServer::PutStart(void)
 * Address: 000f146c
 */
TIASServer::PutStart(void) {
    /*
         f146c:	e1a0c00d 	mov	ip, sp
         f1470:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f1474:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1478:	e1a04000 	mov	r4, r0
         f147c:	e2805028 	add	r5, r0, #40	; 0x28
         f1480:	e3a0000d 	mov	r0, #13	; 0xd
         f1484:	e5c50000 	strb	r0, [r5]
         f1488:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f148c:	e585000c 	str	r0, [r5, #12]	; fField12
         f1490:	e3a00000 	mov	r0, #0	; 0x0
         f1494:	e5850010 	str	r0, [r5, #16]
         f1498:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f149c:	e5901000 	ldr	r1, [r0]
         f14a0:	e1a0e00f 	mov	lr, pc
         f14a4:	e281f03c 	add	pc, r1, #60	; 0x3c
         f14a8:	e5850014 	str	r0, [r5, #20]	; fField20
         f14ac:	e1a01005 	mov	r1, r5
         f14b0:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         f14b4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f14b8:	ea6519ca 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIASServer::Init(TIrGlue *, TIrLMP *, TIrStream *)
 * Address: 000f14bc
 */
TIASServer::Init(TIrGlue *, TIrLMP *, TIrStream *) {
    /*
         f14bc:	e1a0c00d 	mov	ip, sp
         f14c0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         f14c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f14c8:	e1a04000 	mov	r4, r0
         f14cc:	e1a05001 	mov	r5, r1
         f14d0:	e1a06002 	mov	r6, r2
         f14d4:	e2800018 	add	r0, r0, #24	; 0x18
         f14d8:	e880000a 	stmia	r0, {r1, r3}
         f14dc:	e2400018 	sub	r0, r0, #24	; 0x18
         f14e0:	eb6519bf 	bl	1a37be4 <TIrStream::$Init(TIrGlue *)>
         f14e4:	e1b07000 	movs	r7, r0
         f14e8:	1a00001e 	bne	f1568 <TIASServer::Init(TIrGlue *, TIrLMP *, TIrStream *)+0xac>
         f14ec:	e3a080a8 	mov	r8, #168	; 0xa8
         f14f0:	e2488b07 	sub	r8, r8, #7168	; 0x1c00
         f14f4:	e1a07008 	mov	r7, r8
         f14f8:	e3a00000 	mov	r0, #0	; 0x0
         f14fc:	eb6bcb40 	bl	1be4204 <CBufferSegment::$__ct(void)>
         f1500:	e584004c 	str	r0, [r4, #76]	; fField76
         f1504:	e3300000 	teq	r0, #0	; 0x0
         f1508:	0a000016 	beq	f1568 <TIASServer::Init(TIrGlue *, TIrLMP *, TIrStream *)+0xac>
         f150c:	e3a01080 	mov	r1, #128	; 0x80
         f1510:	eb6bdfe4 	bl	1be94a8 <CBufferSegment::$Init(long)>
         f1514:	e1b07000 	movs	r7, r0
         f1518:	1a000012 	bne	f1568 <TIASServer::Init(TIrGlue *, TIrLMP *, TIrStream *)+0xac>
         f151c:	e1a07008 	mov	r7, r8
         f1520:	e3a00000 	mov	r0, #0	; 0x0
         f1524:	eb65115d 	bl	1a35aa0 <TLSAPConn::$__ct(void)>
         f1528:	e5840024 	str	r0, [r4, #36]	; fField36
         f152c:	e3300000 	teq	r0, #0	; 0x0
         f1530:	0a00000c 	beq	f1568 <TIASServer::Init(TIrGlue *, TIrLMP *, TIrStream *)+0xac>
         f1534:	e1a03004 	mov	r3, r4
         f1538:	e1a02006 	mov	r2, r6
         f153c:	e1a01005 	mov	r1, r5
         f1540:	eb651164 	bl	1a35ad8 <TLSAPConn::$Init(TIrGlue *, TIrLMP *, TIrStream *)>
         f1544:	e1b07000 	movs	r7, r0
         f1548:	1a000006 	bne	f1568 <TIASServer::Init(TIrGlue *, TIrLMP *, TIrStream *)+0xac>
         f154c:	e3a01000 	mov	r1, #0	; 0x0
         f1550:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f1554:	eb001596 	bl	f6bb4 <TLSAPConn::AssignId(unsigned long)>
         f1558:	e1a00004 	mov	r0, r4
         f155c:	eb6504e7 	bl	1a32900 <TIASServer::$ListenStart(void)>
         f1560:	e3a00000 	mov	r0, #0	; 0x0
         f1564:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         f1568:	e1a00004 	mov	r0, r4
         f156c:	eb6504e7 	bl	1a32910 <TIASServer::$DeInit(void)>
         f1570:	e1a00007 	mov	r0, r7
         f1574:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TIASServer::DeInit(void)
 * Address: 000f1578
 */
TIASServer::DeInit(void) {
    /*
         f1578:	e1a0c00d 	mov	ip, sp
         f157c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f1580:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1584:	e1a04000 	mov	r4, r0
         f1588:	e5900024 	ldr	r0, [r0, #36]	; fField36
         f158c:	e3a05000 	mov	r5, #0	; 0x0
         f1590:	e3300000 	teq	r0, #0	; 0x0
         f1594:	0a000003 	beq	f15a8 <TIASServer::DeInit(void)+0x30>
         f1598:	e3a01001 	mov	r1, #1	; 0x1
         f159c:	e1a0e00f 	mov	lr, pc
         f15a0:	e590f000 	ldr	pc, [r0]
         f15a4:	e5845024 	str	r5, [r4, #36]	; fField36
         f15a8:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f15ac:	e3300000 	teq	r0, #0	; 0x0
         f15b0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f15b4:	e3a01001 	mov	r1, #1	; 0x1
         f15b8:	e1a0e00f 	mov	lr, pc
         f15bc:	e590f000 	ldr	pc, [r0]
         f15c0:	e5a4504c 	str	r5, [r4, #76]!	; fField76
         f15c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIASServer::SetNameService(TIASService *)
 * Address: 000f15c8
 */
TIASServer::SetNameService(TIASService *) {
    /*
         f15c8:	e5a01020 	str	r1, [r0, #32]!	; fField32
         f15cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIASServer::NextState(unsigned long)
 * Address: 000f15d0
 */
TIASServer::NextState(unsigned long) {
    /*
         f15d0:	e590200c 	ldr	r2, [r0, #12]	; fField12
         f15d4:	e1a03002 	mov	r3, r2
         f15d8:	e5d2c000 	ldrb	ip, [r2]
         f15dc:	e33c0017 	teq	ip, #23	; 0x17
         f15e0:	01a01002 	moveq	r1, r2
         f15e4:	0a00001a 	beq	f1654 <TIASServer::NextState(unsigned long)+0x84>
         f15e8:	e33c0018 	teq	ip, #24	; 0x18
         f15ec:	01a01002 	moveq	r1, r2
         f15f0:	0590001c 	ldreq	r0, [r0, #28]	; fField28
         f15f4:	0a000017 	beq	f1658 <TIASServer::NextState(unsigned long)+0x88>
         f15f8:	e5933004 	ldr	r3, [r3, #4]
         f15fc:	e3330000 	teq	r3, #0	; 0x0
         f1600:	13a01007 	movne	r1, #7	; 0x7
         f1604:	e5903018 	ldr	r3, [r0, #24]	; fField24
         f1608:	e5d33035 	ldrb	r3, [r3, #53]
         f160c:	e3330000 	teq	r3, #0	; 0x0
         f1610:	11a0f00e 	movne	pc, lr
         f1614:	e2411007 	sub	r1, r1, #7	; 0x7
         f1618:	e3510007 	cmp	r1, #7	; 0x7
         f161c:	908ff101 	addls	pc, pc, r1, lsl #2
         f1620:	e1a0f00e 	mov	pc, lr
         f1624:	ea000006 	b	f1644 <TIASServer::NextState(unsigned long)+0x74>
         f1628:	ea000006 	b	f1648 <TIASServer::NextState(unsigned long)+0x78>
         f162c:	e1a0f00e 	mov	pc, lr
         f1630:	ea000002 	b	f1640 <TIASServer::NextState(unsigned long)+0x70>
         f1634:	e1a0f00e 	mov	pc, lr
         f1638:	ea000007 	b	f165c <TIASServer::NextState(unsigned long)+0x8c>
         f163c:	e1a0f00e 	mov	pc, lr
         f1640:	ea6504af 	b	1a32904 <TIASServer::$GetStart(void)>
         f1644:	ea6504ad 	b	1a32900 <TIASServer::$ListenStart(void)>
         f1648:	e1a01002 	mov	r1, r2
         f164c:	e3a02009 	mov	r2, #9	; 0x9
         f1650:	e5c12000 	strb	r2, [r1]
         f1654:	e5900024 	ldr	r0, [r0, #36]	; fField36
         f1658:	ea651962 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f165c:	ea6504ad 	b	1a32918 <TIASServer::$ParseInput(void)>
    */
}

/**
 * Symbol: TIASServer::ParseInput(void)
 * Address: 000f1660
 */
TIASServer::ParseInput(void) {
    /*
         f1660:	e1a0c00d 	mov	ip, sp
         f1664:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f1668:	e24cb004 	sub	fp, ip, #4	; 0x4
         f166c:	e1a04000 	mov	r4, r0
         f1670:	e24dd004 	sub	sp, sp, #4	; 0x4
         f1674:	e590004c 	ldr	r0, [r0, #76]	; fField76
         f1678:	e3e02000 	mvn	r2, #0	; 0x0
         f167c:	e3a01000 	mov	r1, #0	; 0x0
         f1680:	e5903000 	ldr	r3, [r0]
         f1684:	e1a0e00f 	mov	lr, pc
         f1688:	e283f038 	add	pc, r3, #56	; 0x38
         f168c:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f1690:	e5901000 	ldr	r1, [r0]
         f1694:	e1a0e00f 	mov	lr, pc
         f1698:	e281f010 	add	pc, r1, #16	; 0x10
         f169c:	e20000ff 	and	r0, r0, #255	; 0xff
         f16a0:	e2007080 	and	r7, r0, #128	; 0x80
         f16a4:	e2006040 	and	r6, r0, #64	; 0x40
         f16a8:	e5d41015 	ldrb	r1, [r4, #21]	; fField21
         f16ac:	e3310000 	teq	r1, #0	; 0x0
         f16b0:	0a00000a 	beq	f16e0 <TIASServer::ParseInput(void)+0x80>
         f16b4:	e3310001 	teq	r1, #1	; 0x1
         f16b8:	1a00001b 	bne	f172c <TIASServer::ParseInput(void)+0xcc>
         f16bc:	e3370000 	teq	r7, #0	; 0x0
         f16c0:	0a000028 	beq	f1768 <TIASServer::ParseInput(void)+0x108>
         f16c4:	e3a06000 	mov	r6, #0	; 0x0
         f16c8:	e3a05000 	mov	r5, #0	; 0x0
         f16cc:	e5d40014 	ldrb	r0, [r4, #20]	; fField20
         f16d0:	e3300004 	teq	r0, #4	; 0x4
         f16d4:	03a00001 	moveq	r0, #1	; 0x1
         f16d8:	0a000012 	beq	f1728 <TIASServer::ParseInput(void)+0xc8>
         f16dc:	ea000010 	b	f1724 <TIASServer::ParseInput(void)+0xc4>
         f16e0:	e3360000 	teq	r6, #0	; 0x0
         f16e4:	1a000010 	bne	f172c <TIASServer::ParseInput(void)+0xcc>
         f16e8:	e200003f 	and	r0, r0, #63	; 0x3f
         f16ec:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f16f0:	e3370000 	teq	r7, #0	; 0x0
         f16f4:	03a00001 	moveq	r0, #1	; 0x1
         f16f8:	05c40015 	streqb	r0, [r4, #21]	; fField21
         f16fc:	0a000019 	beq	f1768 <TIASServer::ParseInput(void)+0x108>
         f1700:	e5d40014 	ldrb	r0, [r4, #20]	; fField20
         f1704:	e3300004 	teq	r0, #4	; 0x4
         f1708:	1a000004 	bne	f1720 <TIASServer::ParseInput(void)+0xc0>
         f170c:	e1a0100d 	mov	r1, sp
         f1710:	e1a00004 	mov	r0, r4
         f1714:	eb650480 	bl	1a3291c <TIASServer::$ParseRequest(unsigned char &)>
         f1718:	e1a05000 	mov	r5, r0
         f171c:	ea000002 	b	f172c <TIASServer::ParseInput(void)+0xcc>
         f1720:	e3a05000 	mov	r5, #0	; 0x0
         f1724:	e3a000ff 	mov	r0, #255	; 0xff
         f1728:	e5cd0000 	strb	r0, [sp]
         f172c:	e3370000 	teq	r7, #0	; 0x0
         f1730:	0a000009 	beq	f175c <TIASServer::ParseInput(void)+0xfc>
         f1734:	e3360000 	teq	r6, #0	; 0x0
         f1738:	1a000007 	bne	f175c <TIASServer::ParseInput(void)+0xfc>
         f173c:	e1a02005 	mov	r2, r5
         f1740:	e5dd1000 	ldrb	r1, [sp]
         f1744:	e1a00004 	mov	r0, r4
         f1748:	eb65006b 	bl	1a318fc <TIASServer::$SendResponse(unsigned char, TIASAttribute *)>
         f174c:	e3a00000 	mov	r0, #0	; 0x0
         f1750:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f1754:	e5c40015 	strb	r0, [r4, #21]	; fField21
         f1758:	ea000014 	b	f17b0 <TIASServer::ParseInput(void)+0x150>
         f175c:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         f1760:	e3300001 	teq	r0, #1	; 0x1
         f1764:	1a00000f 	bne	f17a8 <TIASServer::ParseInput(void)+0x148>
         f1768:	e3e02000 	mvn	r2, #0	; 0x0
         f176c:	e3a01000 	mov	r1, #0	; 0x0
         f1770:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f1774:	e5903000 	ldr	r3, [r0]
         f1778:	e1a0e00f 	mov	lr, pc
         f177c:	e283f038 	add	pc, r3, #56	; 0x38
         f1780:	e594204c 	ldr	r2, [r4, #76]	; fField76
         f1784:	e5d40014 	ldrb	r0, [r4, #20]	; fField20
         f1788:	e3801040 	orr	r1, r0, #64	; 0x40
         f178c:	e1a00002 	mov	r0, r2
         f1790:	e5922000 	ldr	r2, [r2]
         f1794:	e1a0e00f 	mov	lr, pc
         f1798:	e282f01c 	add	pc, r2, #28	; 0x1c
         f179c:	e1a00004 	mov	r0, r4
         f17a0:	eb650458 	bl	1a32908 <TIASServer::$PutStart(void)>
         f17a4:	ea000001 	b	f17b0 <TIASServer::ParseInput(void)+0x150>
         f17a8:	e1a00004 	mov	r0, r4
         f17ac:	eb650454 	bl	1a32904 <TIASServer::$GetStart(void)>
         f17b0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TIASServer::ParseRequest(unsigned char &)
 * Address: 000f17b4
 */
TIASServer::ParseRequest(unsigned char &) {
    /*
         f17b4:	e1a0c00d 	mov	ip, sp
         f17b8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f17bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         f17c0:	e1a05000 	mov	r5, r0
         f17c4:	e1a04001 	mov	r4, r1
         f17c8:	e24dd040 	sub	sp, sp, #64	; 0x40
         f17cc:	e3a00001 	mov	r0, #1	; 0x1
         f17d0:	e5c10000 	strb	r0, [r1]
         f17d4:	e1a0100d 	mov	r1, sp
         f17d8:	e1a00005 	mov	r0, r5
         f17dc:	eb65044f 	bl	1a32920 <TIASServer::$GotAValidString(unsigned char *)>
         f17e0:	e3a06000 	mov	r6, #0	; 0x0
         f17e4:	e3300000 	teq	r0, #0	; 0x0
         f17e8:	0a000011 	beq	f1834 <TIASServer::ParseRequest(unsigned char &)+0x80>
         f17ec:	e1a0100d 	mov	r1, sp
         f17f0:	e5950020 	ldr	r0, [r5, #32]	; fField32
         f17f4:	eb65044b 	bl	1a32928 <TIASService::$FindClass(unsigned char const *)>
         f17f8:	e1b07000 	movs	r7, r0
         f17fc:	0a00000c 	beq	f1834 <TIASServer::ParseRequest(unsigned char &)+0x80>
         f1800:	e3a00002 	mov	r0, #2	; 0x2
         f1804:	e5c40000 	strb	r0, [r4]
         f1808:	e1a0100d 	mov	r1, sp
         f180c:	e1a00005 	mov	r0, r5
         f1810:	eb650442 	bl	1a32920 <TIASServer::$GotAValidString(unsigned char *)>
         f1814:	e3300000 	teq	r0, #0	; 0x0
         f1818:	0a000005 	beq	f1834 <TIASServer::ParseRequest(unsigned char &)+0x80>
         f181c:	e1a0100d 	mov	r1, sp
         f1820:	e1a00007 	mov	r0, r7
         f1824:	eb650442 	bl	1a32934 <TIASClass::$FindAttribute(unsigned char const *)>
         f1828:	e3300000 	teq	r0, #0	; 0x0
         f182c:	15c46000 	strneb	r6, [r4]
         f1830:	1a000000 	bne	f1838 <TIASServer::ParseRequest(unsigned char &)+0x84>
         f1834:	e1a00006 	mov	r0, r6
         f1838:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TIASServer::GotAValidString(unsigned char *)
 * Address: 000f183c
 */
TIASServer::GotAValidString(unsigned char *) {
    /*
         f183c:	e1a0c00d 	mov	ip, sp
         f1840:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f1844:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1848:	e1a05000 	mov	r5, r0
         f184c:	e1a04001 	mov	r4, r1
         f1850:	e590004c 	ldr	r0, [r0, #76]	; fField76
         f1854:	e5901000 	ldr	r1, [r0]
         f1858:	e1a0e00f 	mov	lr, pc
         f185c:	e281f010 	add	pc, r1, #16	; 0x10
         f1860:	e20060ff 	and	r6, r0, #255	; 0xff
         f1864:	e3a07000 	mov	r7, #0	; 0x0
         f1868:	e356003c 	cmp	r6, #60	; 0x3c
         f186c:	ca00000a 	bgt	f189c <TIASServer::GotAValidString(unsigned char *)+0x60>
         f1870:	e1a02006 	mov	r2, r6
         f1874:	e1a01004 	mov	r1, r4
         f1878:	e5b5304c 	ldr	r3, [r5, #76]!	; fField76
         f187c:	e1a00003 	mov	r0, r3
         f1880:	e5933000 	ldr	r3, [r3]
         f1884:	e1a0e00f 	mov	lr, pc
         f1888:	e283f014 	add	pc, r3, #20	; 0x14
         f188c:	e1300006 	teq	r0, r6
         f1890:	07c47006 	streqb	r7, [r4, r6]
         f1894:	03a00001 	moveq	r0, #1	; 0x1
         f1898:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f189c:	e1a00007 	mov	r0, r7
         f18a0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TIASServer::SendResponse(unsigned char, TIASAttribute *)
 * Address: 000f18a4
 */
TIASServer::SendResponse(unsigned char, TIASAttribute *) {
    /*
         f18a4:	e1a0c00d 	mov	ip, sp
         f18a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f18ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         f18b0:	e1a04000 	mov	r4, r0
         f18b4:	e1a05002 	mov	r5, r2
         f18b8:	e20160ff 	and	r6, r1, #255	; 0xff
         f18bc:	e590004c 	ldr	r0, [r0, #76]	; fField76
         f18c0:	e3e02000 	mvn	r2, #0	; 0x0
         f18c4:	e3a01000 	mov	r1, #0	; 0x0
         f18c8:	e5903000 	ldr	r3, [r0]
         f18cc:	e1a0e00f 	mov	lr, pc
         f18d0:	e283f038 	add	pc, r3, #56	; 0x38
         f18d4:	e594204c 	ldr	r2, [r4, #76]	; fField76
         f18d8:	e5d40014 	ldrb	r0, [r4, #20]	; fField20
         f18dc:	e3801080 	orr	r1, r0, #128	; 0x80
         f18e0:	e1a00002 	mov	r0, r2
         f18e4:	e5922000 	ldr	r2, [r2]
         f18e8:	e1a0e00f 	mov	lr, pc
         f18ec:	e282f01c 	add	pc, r2, #28	; 0x1c
         f18f0:	e1a01006 	mov	r1, r6
         f18f4:	e594204c 	ldr	r2, [r4, #76]	; fField76
         f18f8:	e1a00002 	mov	r0, r2
         f18fc:	e5922000 	ldr	r2, [r2]
         f1900:	e1a0e00f 	mov	lr, pc
         f1904:	e282f01c 	add	pc, r2, #28	; 0x1c
         f1908:	e3360000 	teq	r6, #0	; 0x0
         f190c:	01a00005 	moveq	r0, r5
         f1910:	0594104c 	ldreq	r1, [r4, #76]	; fField76
         f1914:	0b65040a 	bleq	1a32944 <TIASAttribute::$AddInfoToBuffer(CBuffer *)>
         f1918:	e1a00004 	mov	r0, r4
         f191c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f1920:	ea6503f8 	b	1a32908 <TIASServer::$PutStart(void)>
    */
}

