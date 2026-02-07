#include "include/TADSPEndpoint.h"

/**
 * Symbol: Sizeof__13TADSPEndpointSFv
 * Address: 000222f0
 */
void TADSPEndpoint::Sizeof() {
    /*
         222f0:	e3a00030 	mov	r0, #48	; 0x30
         222f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPEndpoint::Close(void)
 * Address: 00022334
 */
TADSPEndpoint::Close(void) {
    /*
         22334:	e1a0c00d 	mov	ip, sp
         22338:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         2233c:	e24cb004 	sub	fp, ip, #4	; 0x4
         22340:	e1a04000 	mov	r4, r0
         22344:	e3a05000 	mov	r5, #0	; 0x0
         22348:	e3a01001 	mov	r1, #1	; 0x1
         2234c:	eb6983a6 	bl	1a831ec <TADSPEndpoint::$IsPending(unsigned long)>
         22350:	e3300000 	teq	r0, #0	; 0x0
         22354:	13a00042 	movne	r0, #66	; 0x42
         22358:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
         2235c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         22360:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22364:	e5d010b4 	ldrb	r1, [r0, #180]
         22368:	e3310000 	teq	r1, #0	; 0x0
         2236c:	13e000a2 	mvnne	r0, #162	; 0xa2
         22370:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22374:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         22378:	e5941010 	ldr	r1, [r4, #16]	; fField16
         2237c:	e3310001 	teq	r1, #1	; 0x1
         22380:	13e000a5 	mvnne	r0, #165	; 0xa5
         22384:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22388:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         2238c:	e3300000 	teq	r0, #0	; 0x0
         22390:	13a01001 	movne	r1, #1	; 0x1
         22394:	1b69458b 	blne	1a739c8 <TADSPEndpointChunk::$__dt(void)>
         22398:	e3a00000 	mov	r0, #0	; 0x0
         2239c:	e5840024 	str	r0, [r4, #36]	; fField36
         223a0:	e5a40010 	str	r0, [r4, #16]!	; fField16
         223a4:	e1a00005 	mov	r0, r5
         223a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::Abort(void)
 * Address: 000223ac
 */
TADSPEndpoint::Abort(void) {
    /*
         223ac:	e5900024 	ldr	r0, [r0, #36]	; fField36
         223b0:	e3a03001 	mov	r3, #1	; 0x1
         223b4:	e3a02000 	mov	r2, #0	; 0x0
         223b8:	e3a01001 	mov	r1, #1	; 0x1
         223bc:	ea697b41 	b	1a810c8 <TADSPEndpointChunk::$Abort(unsigned char, long, unsigned char)>
    */
}

/**
 * Symbol: TADSPEndpoint::SetSync(unsigned char)
 * Address: 000223c0
 */
TADSPEndpoint::SetSync(unsigned char) {
    /*
         223c0:	e1a0c00d 	mov	ip, sp
         223c4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         223c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         223cc:	e1a04000 	mov	r4, r0
         223d0:	e20150ff 	and	r5, r1, #255	; 0xff
         223d4:	e5d00020 	ldrb	r0, [r0, #32]	; fField32
         223d8:	e1a06000 	mov	r6, r0
         223dc:	e1300005 	teq	r0, r5
         223e0:	0a000007 	beq	22404 <TADSPEndpoint::SetSync(unsigned char)+0x44>
         223e4:	e3350000 	teq	r5, #0	; 0x0
         223e8:	0a000004 	beq	22400 <TADSPEndpoint::SetSync(unsigned char)+0x40>
         223ec:	e1a00004 	mov	r0, r4
         223f0:	e3a01002 	mov	r1, #2	; 0x2
         223f4:	eb69837c 	bl	1a831ec <TADSPEndpoint::$IsPending(unsigned long)>
         223f8:	e3300000 	teq	r0, #0	; 0x0
         223fc:	1a000000 	bne	22404 <TADSPEndpoint::SetSync(unsigned char)+0x44>
         22400:	e5c45020 	strb	r5, [r4, #32]	; fField32
         22404:	e1a00006 	mov	r0, r6
         22408:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::GetProtAddr(TOptionArray *, TOptionArray *, unsigned long)
 * Address: 0002240c
 */
TADSPEndpoint::GetProtAddr(TOptionArray *, TOptionArray *, unsigned long) {
    /*
         2240c:	e3e000b1 	mvn	r0, #177	; 0xb1
         22410:	e2400b23 	sub	r0, r0, #35840	; 0x8c00
         22414:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPEndpoint::OptMgmt(unsigned long, TOptionArray *, unsigned long)
 * Address: 00022418
 */
TADSPEndpoint::OptMgmt(unsigned long, TOptionArray *, unsigned long) {
    /*
         22418:	e1a0c00d 	mov	ip, sp
         2241c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         22420:	e24cb004 	sub	fp, ip, #4	; 0x4
         22424:	e1a0c003 	mov	ip, r3
         22428:	e5d03020 	ldrb	r3, [r0, #32]	; fField32
         2242c:	e92d0008 	stmdb	sp!, {r3}
         22430:	e1a0300c 	mov	r3, ip
         22434:	eb6993dd 	bl	1a873b0 <TADSPEndpoint::$nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)>
         22438:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::Bind(TOptionArray *, long *, unsigned long)
 * Address: 0002243c
 */
TADSPEndpoint::Bind(TOptionArray *, long *, unsigned long) {
    /*
         2243c:	e1a02003 	mov	r2, r3
         22440:	e5d03020 	ldrb	r3, [r0, #32]	; fField32
         22444:	ea6993d5 	b	1a873a0 <TADSPEndpoint::$nBind(TOptionArray *, unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TADSPEndpoint::UnBind(unsigned long)
 * Address: 00022448
 */
TADSPEndpoint::UnBind(unsigned long) {
    /*
         22448:	e5d02020 	ldrb	r2, [r0, #32]	; fField32
         2244c:	ea6993dd 	b	1a873c8 <TADSPEndpoint::$nUnBind(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TADSPEndpoint::Listen(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)
 * Address: 00022450
 */
TADSPEndpoint::Listen(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long) {
    /*
         22450:	e3310000 	teq	r1, #0	; 0x0
         22454:	13e00eca 	mvnne	r0, #3232	; 0xca0
         22458:	12400902 	subne	r0, r0, #32768	; 0x8000
         2245c:	11a0f00e 	movne	pc, lr
         22460:	e1a0c00d 	mov	ip, sp
         22464:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         22468:	e24cb004 	sub	fp, ip, #4	; 0x4
         2246c:	e1a0e002 	mov	lr, r2
         22470:	e1a0c003 	mov	ip, r3
         22474:	e59b2008 	ldr	r2, [fp, #8]	; fField8
         22478:	e59b4004 	ldr	r4, [fp, #4]
         2247c:	e5d03020 	ldrb	r3, [r0, #32]	; fField32
         22480:	e92d000c 	stmdb	sp!, {r2, r3}
         22484:	e1a03004 	mov	r3, r4
         22488:	e1a0200c 	mov	r2, ip
         2248c:	e1a0100e 	mov	r1, lr
         22490:	eb6993c5 	bl	1a873ac <TADSPEndpoint::$nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
         22494:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::Accept(TEndpoint *, TOptionArray *, TOptionArray *, CBufferSegment *, long, unsigned long)
 * Address: 00022498
 */
TADSPEndpoint::Accept(TEndpoint *, TOptionArray *, TOptionArray *, CBufferSegment *, long, unsigned long) {
    /*
         22498:	e3320000 	teq	r2, #0	; 0x0
         2249c:	13e00eca 	mvnne	r0, #3232	; 0xca0
         224a0:	12400902 	subne	r0, r0, #32768	; 0x8000
         224a4:	11a0f00e 	movne	pc, lr
         224a8:	e1a0c00d 	mov	ip, sp
         224ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         224b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         224b4:	e1a0e001 	mov	lr, r1
         224b8:	e1a0c003 	mov	ip, r3
         224bc:	e28b5008 	add	r5, fp, #8	; 0x8
         224c0:	e8950022 	ldmia	r5, {r1, r5}
         224c4:	e59b4004 	ldr	r4, [fp, #4]
         224c8:	e5d03020 	ldrb	r3, [r0, #32]	; fField32
         224cc:	e1a02005 	mov	r2, r5
         224d0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         224d4:	e1a03004 	mov	r3, r4
         224d8:	e1a0200c 	mov	r2, ip
         224dc:	e1a0100e 	mov	r1, lr
         224e0:	eb6993ad 	bl	1a8739c <TADSPEndpoint::$nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)>
         224e4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::Connect(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)
 * Address: 000224e8
 */
TADSPEndpoint::Connect(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long) {
    /*
         224e8:	e3310000 	teq	r1, #0	; 0x0
         224ec:	13e00eca 	mvnne	r0, #3232	; 0xca0
         224f0:	12400902 	subne	r0, r0, #32768	; 0x8000
         224f4:	11a0f00e 	movne	pc, lr
         224f8:	e1a0c00d 	mov	ip, sp
         224fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         22500:	e24cb004 	sub	fp, ip, #4	; 0x4
         22504:	e1a0e002 	mov	lr, r2
         22508:	e1a0c003 	mov	ip, r3
         2250c:	e59b2008 	ldr	r2, [fp, #8]	; fField8
         22510:	e59b4004 	ldr	r4, [fp, #4]
         22514:	e5d03020 	ldrb	r3, [r0, #32]	; fField32
         22518:	e92d000c 	stmdb	sp!, {r2, r3}
         2251c:	e1a03004 	mov	r3, r4
         22520:	e1a0200c 	mov	r2, ip
         22524:	e1a0100e 	mov	r1, lr
         22528:	eb69939d 	bl	1a873a4 <TADSPEndpoint::$nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
         2252c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::Disconnect(CBufferSegment *, long, long)
 * Address: 0002256c
 */
TADSPEndpoint::Disconnect(CBufferSegment *, long, long) {
    /*
         2256c:	e1a0c00d 	mov	ip, sp
         22570:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         22574:	e24cb004 	sub	fp, ip, #4	; 0x4
         22578:	e1a0c002 	mov	ip, r2
         2257c:	e1a0e003 	mov	lr, r3
         22580:	e3a02001 	mov	r2, #1	; 0x1
         22584:	e5c02020 	strb	r2, [r0, #32]	; fField32
         22588:	e3a03001 	mov	r3, #1	; 0x1
         2258c:	e3a02000 	mov	r2, #0	; 0x0
         22590:	e92d000c 	stmdb	sp!, {r2, r3}
         22594:	e1a0300e 	mov	r3, lr
         22598:	e1a0200c 	mov	r2, ip
         2259c:	eb699381 	bl	1a873a8 <TADSPEndpoint::$nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)>
         225a0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::Release(unsigned long)
 * Address: 000225a4
 */
TADSPEndpoint::Release(unsigned long) {
    /*
         225a4:	e5d02020 	ldrb	r2, [r0, #32]	; fField32
         225a8:	ea699383 	b	1a873bc <TADSPEndpoint::$nRelease(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TADSPEndpoint::Snd(unsigned char *, long &, unsigned long, unsigned long)
 * Address: 000225ac
 */
TADSPEndpoint::Snd(unsigned char *, long &, unsigned long, unsigned long) {
    /*
         225ac:	e1a0c00d 	mov	ip, sp
         225b0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         225b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         225b8:	e1a0c001 	mov	ip, r1
         225bc:	e1a04002 	mov	r4, r2
         225c0:	e1a0e003 	mov	lr, r3
         225c4:	e59b1004 	ldr	r1, [fp, #4]
         225c8:	e24dd004 	sub	sp, sp, #4	; 0x4
         225cc:	e5922000 	ldr	r2, [r2]
         225d0:	e3a03000 	mov	r3, #0	; 0x0
         225d4:	e58d2000 	str	r2, [sp]
         225d8:	e5d02020 	ldrb	r2, [r0, #32]	; fField32
         225dc:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         225e0:	e1a0300e 	mov	r3, lr
         225e4:	e28d200c 	add	r2, sp, #12	; 0xc
         225e8:	e1a0100c 	mov	r1, ip
         225ec:	eb699374 	bl	1a873c4 <TADSPEndpoint::$nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
         225f0:	e5bd100c 	ldr	r1, [sp, #12]!
         225f4:	e5841000 	str	r1, [r4]
         225f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::Snd(CBufferSegment *, unsigned long, unsigned long)
 * Address: 000225fc
 */
TADSPEndpoint::Snd(CBufferSegment *, unsigned long, unsigned long) {
    /*
         225fc:	e1a0c00d 	mov	ip, sp
         22600:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         22604:	e24cb004 	sub	fp, ip, #4	; 0x4
         22608:	e1a0c002 	mov	ip, r2
         2260c:	e1a0e003 	mov	lr, r3
         22610:	e3a03000 	mov	r3, #0	; 0x0
         22614:	e5d02020 	ldrb	r2, [r0, #32]	; fField32
         22618:	e92d000c 	stmdb	sp!, {r2, r3}
         2261c:	e1a0300e 	mov	r3, lr
         22620:	e1a0200c 	mov	r2, ip
         22624:	eb699365 	bl	1a873c0 <TADSPEndpoint::$nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
         22628:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::Rcv(unsigned char *, long &, long, unsigned long *, unsigned long)
 * Address: 0002262c
 */
TADSPEndpoint::Rcv(unsigned char *, long &, long, unsigned long *, unsigned long) {
    /*
         2262c:	e1a0c00d 	mov	ip, sp
         22630:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         22634:	e24cb004 	sub	fp, ip, #4	; 0x4
         22638:	e1a0c000 	mov	ip, r0
         2263c:	e1a05001 	mov	r5, r1
         22640:	e1a04002 	mov	r4, r2
         22644:	e1a0e003 	mov	lr, r3
         22648:	e99b0003 	ldmib	fp, {r0, r1}
         2264c:	e24dd004 	sub	sp, sp, #4	; 0x4
         22650:	e5922000 	ldr	r2, [r2]
         22654:	e3a03000 	mov	r3, #0	; 0x0
         22658:	e58d2000 	str	r2, [sp]
         2265c:	e5dc2020 	ldrb	r2, [ip, #32]	; fField32
         22660:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         22664:	e1a0300e 	mov	r3, lr
         22668:	e28d2010 	add	r2, sp, #16	; 0x10
         2266c:	e1a01005 	mov	r1, r5
         22670:	e1a0000c 	mov	r0, ip
         22674:	eb69934f 	bl	1a873b8 <TADSPEndpoint::$nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
         22678:	e5bd1010 	ldr	r1, [sp, #16]!	; fField16
         2267c:	e5841000 	str	r1, [r4]
         22680:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::Rcv(CBufferSegment *, long, unsigned long *, unsigned long)
 * Address: 00022684
 */
TADSPEndpoint::Rcv(CBufferSegment *, long, unsigned long *, unsigned long) {
    /*
         22684:	e1a0c00d 	mov	ip, sp
         22688:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2268c:	e24cb004 	sub	fp, ip, #4	; 0x4
         22690:	e1a0e001 	mov	lr, r1
         22694:	e1a0c002 	mov	ip, r2
         22698:	e1a04003 	mov	r4, r3
         2269c:	e3a03000 	mov	r3, #0	; 0x0
         226a0:	e59b1004 	ldr	r1, [fp, #4]
         226a4:	e5d02020 	ldrb	r2, [r0, #32]	; fField32
         226a8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         226ac:	e1a03004 	mov	r3, r4
         226b0:	e1a0200c 	mov	r2, ip
         226b4:	e1a0100e 	mov	r1, lr
         226b8:	eb69933d 	bl	1a873b4 <TADSPEndpoint::$nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
         226bc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::WaitForEvent(unsigned long)
 * Address: 000226c0
 */
TADSPEndpoint::WaitForEvent(unsigned long) {
    /*
         226c0:	e3e000b1 	mvn	r0, #177	; 0xb1
         226c4:	e2400b23 	sub	r0, r0, #35840	; 0x8c00
         226c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)
 * Address: 000226cc
 */
TADSPEndpoint::nBind(TOptionArray *, unsigned long, unsigned char) {
    /*
         226cc:	e1a0c00d 	mov	ip, sp
         226d0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         226d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         226d8:	e1a04000 	mov	r4, r0
         226dc:	e1a05001 	mov	r5, r1
         226e0:	e20370ff 	and	r7, r3, #255	; 0xff
         226e4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         226e8:	e3300001 	teq	r0, #1	; 0x1
         226ec:	13e000a5 	mvnne	r0, #165	; 0xa5
         226f0:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         226f4:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         226f8:	e3370000 	teq	r7, #0	; 0x0
         226fc:	0a000006 	beq	2271c <TADSPEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x50>
         22700:	e1a00004 	mov	r0, r4
         22704:	e3a01001 	mov	r1, #1	; 0x1
         22708:	eb6982b7 	bl	1a831ec <TADSPEndpoint::$IsPending(unsigned long)>
         2270c:	e3300000 	teq	r0, #0	; 0x0
         22710:	13a00042 	movne	r0, #66	; 0x42
         22714:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
         22718:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         2271c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22720:	e5d000b4 	ldrb	r0, [r0, #180]
         22724:	e3300000 	teq	r0, #0	; 0x0
         22728:	13e000a2 	mvnne	r0, #162	; 0xa2
         2272c:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22730:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         22734:	e5940010 	ldr	r0, [r4, #16]	; fField16
         22738:	e5840028 	str	r0, [r4, #40]	; fField40
         2273c:	e3a00008 	mov	r0, #8	; 0x8
         22740:	e5840010 	str	r0, [r4, #16]	; fField16
         22744:	e59f60f4 	ldr	r6, [pc, #f4]	; 22840 <TADSPEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x174>
         22748:	e3a08000 	mov	r8, #0	; 0x0
         2274c:	e3350000 	teq	r5, #0	; 0x0
         22750:	0a000011 	beq	2279c <TADSPEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0xd0>
         22754:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         22758:	e1a01005 	mov	r1, r5
         2275c:	e1a0000d 	mov	r0, sp
         22760:	eb6e4ce4 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         22764:	e1a0000d 	mov	r0, sp
         22768:	e59f10d4 	ldr	r1, [pc, #d4]	; 22844 <TADSPEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x178>
         2276c:	eb6e5928 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         22770:	e3300000 	teq	r0, #0	; 0x0
         22774:	15b0600c 	ldrne	r6, [r0, #12]!
         22778:	e1a0000d 	mov	r0, sp
         2277c:	e59f10c4 	ldr	r1, [pc, #c4]	; 22848 <TADSPEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x17c>
         22780:	eb6e5923 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         22784:	e3300000 	teq	r0, #0	; 0x0
         22788:	1280800c 	addne	r8, r0, #12	; 0xc
         2278c:	e1a0000d 	mov	r0, sp
         22790:	e3a01000 	mov	r1, #0	; 0x0
         22794:	eb6e50e8 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         22798:	e28dd01c 	add	sp, sp, #28	; 0x1c
         2279c:	e1a01008 	mov	r1, r8
         227a0:	e584602c 	str	r6, [r4, #44]	; fField44
         227a4:	e1a00006 	mov	r0, r6
         227a8:	e3a02001 	mov	r2, #1	; 0x1
         227ac:	eb6986ac 	bl	1a84264 <$OpenAppleTalk(unsigned long, unsigned short *, unsigned char)>
         227b0:	e5940024 	ldr	r0, [r4, #36]	; fField36
         227b4:	e2801008 	add	r1, r0, #8	; 0x8
         227b8:	e3a03001 	mov	r3, #1	; 0x1
         227bc:	e3a02000 	mov	r2, #0	; 0x0
         227c0:	e59f0084 	ldr	r0, [pc, #84]	; 2284c <TADSPEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x180>
         227c4:	eb6986a5 	bl	1a84260 <$OpenAppleTalkPart(unsigned long, TUPort *, unsigned short *, unsigned char)>
         227c8:	e1a06000 	mov	r6, r0
         227cc:	e3500000 	cmp	r0, #0	; 0x0
         227d0:	1a00001e 	bne	22850 <TADSPEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x184>
         227d4:	e3a00001 	mov	r0, #1	; 0x1
         227d8:	e5c40021 	strb	r0, [r4, #33]	; fField33
         227dc:	e3a00002 	mov	r0, #2	; 0x2
         227e0:	e3370000 	teq	r7, #0	; 0x0
         227e4:	e5840010 	str	r0, [r4, #16]	; fField16
         227e8:	1a00001a 	bne	22858 <TADSPEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x18c>
         227ec:	e5942018 	ldr	r2, [r4, #24]	; fField24
         227f0:	e3320000 	teq	r2, #0	; 0x0
         227f4:	0a000017 	beq	22858 <TADSPEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x18c>
         227f8:	e24dd028 	sub	sp, sp, #40	; 0x28
         227fc:	e1a01006 	mov	r1, r6
         22800:	e28d0004 	add	r0, sp, #4	; 0x4
         22804:	e3e03009 	mvn	r3, #9	; 0x9
         22808:	eb679714 	bl	1a08460 <TBindCompleteEvent::$__ct(long, unsigned long, long)>
         2280c:	e3a00024 	mov	r0, #36	; 0x24
         22810:	e58d0000 	str	r0, [sp]
         22814:	e58d5024 	str	r5, [sp, #36]	; fField36
         22818:	e28d3004 	add	r3, sp, #4	; 0x4
         2281c:	e1a0200d 	mov	r2, sp
         22820:	e5b4c018 	ldr	ip, [r4, #24]!	; fField24
         22824:	e1a0000c 	mov	r0, ip
         22828:	e3a01000 	mov	r1, #0	; 0x0
         2282c:	e59cc000 	ldr	ip, [ip]
         22830:	e1a0e00f 	mov	lr, pc
         22834:	e28cf008 	add	pc, ip, #8	; 0x8
         22838:	e28dd028 	add	sp, sp, #40	; 0x28
         2283c:	ea000005 	b	22858 <TADSPEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x18c>
         22840:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
         22844:	6c696e6b 	stcvsl	14, cr6, [r9], -#428
         22848:	7379736e 	cmnvc	r9, #-1207959551	; 0xb8000001
         2284c:	61647370 	cmnvs	r4, r0, ror r3
         22850:	15940028 	ldrne	r0, [r4, #40]	; fField40
         22854:	15a40010 	strne	r0, [r4, #16]!	; fField16
         22858:	e1a00006 	mov	r0, r6
         2285c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)
 * Address: 00022860
 */
TADSPEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char) {
    /*
         22860:	e1a0c00d 	mov	ip, sp
         22864:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         22868:	e24cb004 	sub	fp, ip, #4	; 0x4
         2286c:	e1a04000 	mov	r4, r0
         22870:	e1a05001 	mov	r5, r1
         22874:	e59b0008 	ldr	r0, [fp, #8]	; fField8
         22878:	e20070ff 	and	r7, r0, #255	; 0xff
         2287c:	e59ba004 	ldr	sl, [fp, #4]
         22880:	e5940010 	ldr	r0, [r4, #16]	; fField16
         22884:	e3300002 	teq	r0, #2	; 0x2
         22888:	13e000a5 	mvnne	r0, #165	; 0xa5
         2288c:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22890:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         22894:	e3370000 	teq	r7, #0	; 0x0
         22898:	0a000006 	beq	228b8 <TADSPEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x58>
         2289c:	e1a00004 	mov	r0, r4
         228a0:	e3a01001 	mov	r1, #1	; 0x1
         228a4:	eb698250 	bl	1a831ec <TADSPEndpoint::$IsPending(unsigned long)>
         228a8:	e3300000 	teq	r0, #0	; 0x0
         228ac:	13a00042 	movne	r0, #66	; 0x42
         228b0:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
         228b4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         228b8:	e5940024 	ldr	r0, [r4, #36]	; fField36
         228bc:	e5d010b4 	ldrb	r1, [r0, #180]
         228c0:	e3310000 	teq	r1, #0	; 0x0
         228c4:	13e000a2 	mvnne	r0, #162	; 0xa2
         228c8:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         228cc:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         228d0:	e3a09001 	mov	r9, #1	; 0x1
         228d4:	e5c090bc 	strb	r9, [r0, #188]
         228d8:	e1a01005 	mov	r1, r5
         228dc:	e1a00004 	mov	r0, r4
         228e0:	eb698a73 	bl	1a852b4 <TADSPEndpoint::$RegisterAddress(TOptionArray *)>
         228e4:	e1b06000 	movs	r6, r0
         228e8:	e3a01000 	mov	r1, #0	; 0x0
         228ec:	e5940024 	ldr	r0, [r4, #36]	; fField36
         228f0:	e5c010bc 	strb	r1, [r0, #188]
         228f4:	1a00004d 	bne	22a30 <TADSPEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1d0>
         228f8:	e5940024 	ldr	r0, [r4, #36]	; fField36
         228fc:	e5d010bd 	ldrb	r1, [r0, #189]
         22900:	e3310000 	teq	r1, #0	; 0x0
         22904:	0a00001c 	beq	2297c <TADSPEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x11c>
         22908:	e3a05000 	mov	r5, #0	; 0x0
         2290c:	e5c050bd 	strb	r5, [r0, #189]
         22910:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22914:	eb697e13 	bl	1a82168 <TADSPEndpointChunk::$DeRegisterNBPName(void)>
         22918:	e3a0101d 	mov	r1, #29	; 0x1d
         2291c:	e2411c2f 	sub	r1, r1, #12032	; 0x2f00
         22920:	e3370000 	teq	r7, #0	; 0x0
         22924:	11a00001 	movne	r0, r1
         22928:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         2292c:	e5942018 	ldr	r2, [r4, #24]	; fField24
         22930:	e3320000 	teq	r2, #0	; 0x0
         22934:	0a00000e 	beq	22974 <TADSPEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x114>
         22938:	e24dd034 	sub	sp, sp, #52	; 0x34
         2293c:	e28d0004 	add	r0, sp, #4	; 0x4
         22940:	e3e03004 	mvn	r3, #4	; 0x4
         22944:	eb678a62 	bl	1a052d4 <TConnectCompleteEvent::$__ct(long, unsigned long, long)>
         22948:	e3a00030 	mov	r0, #48	; 0x30
         2294c:	e58d0000 	str	r0, [sp]
         22950:	e28d3004 	add	r3, sp, #4	; 0x4
         22954:	e1a0200d 	mov	r2, sp
         22958:	e5b4c018 	ldr	ip, [r4, #24]!	; fField24
         2295c:	e1a0000c 	mov	r0, ip
         22960:	e3a01000 	mov	r1, #0	; 0x0
         22964:	e59cc000 	ldr	ip, [ip]
         22968:	e1a0e00f 	mov	lr, pc
         2296c:	e28cf008 	add	pc, ip, #8	; 0x8
         22970:	e28dd034 	add	sp, sp, #52	; 0x34
         22974:	e1a00005 	mov	r0, r5
         22978:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         2297c:	e28080c0 	add	r8, r0, #192	; 0xc0
         22980:	e1a02005 	mov	r2, r5
         22984:	e1a01008 	mov	r1, r8
         22988:	e1a00004 	mov	r0, r4
         2298c:	e3a03002 	mov	r3, #2	; 0x2
         22990:	eb698a3b 	bl	1a85284 <TADSPEndpoint::$PrepOpenConnection(TOpenConnection *, TOptionArray *, long)>
         22994:	e1b06000 	movs	r6, r0
         22998:	1a000024 	bne	22a30 <TADSPEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1d0>
         2299c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         229a0:	e5c090b8 	strb	r9, [r0, #184]
         229a4:	e5940010 	ldr	r0, [r4, #16]	; fField16
         229a8:	e5840028 	str	r0, [r4, #40]	; fField40
         229ac:	e3a00009 	mov	r0, #9	; 0x9
         229b0:	e1a03007 	mov	r3, r7
         229b4:	e1a02008 	mov	r2, r8
         229b8:	e1a0100a 	mov	r1, sl
         229bc:	e5840010 	str	r0, [r4, #16]	; fField16
         229c0:	e3a00030 	mov	r0, #48	; 0x30
         229c4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         229c8:	e1a03008 	mov	r3, r8
         229cc:	e1a01008 	mov	r1, r8
         229d0:	e3a02068 	mov	r2, #104	; 0x68
         229d4:	e5940024 	ldr	r0, [r4, #36]	; fField36
         229d8:	eb6979b1 	bl	1a810a4 <TADSPEndpointChunk::$ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
         229dc:	e28dd010 	add	sp, sp, #16	; 0x10
         229e0:	e1a06000 	mov	r6, r0
         229e4:	e3370000 	teq	r7, #0	; 0x0
         229e8:	0a000009 	beq	22a14 <TADSPEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1b4>
         229ec:	e3360000 	teq	r6, #0	; 0x0
         229f0:	0a000003 	beq	22a04 <TADSPEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1a4>
         229f4:	e5940028 	ldr	r0, [r4, #40]	; fField40
         229f8:	e5840010 	str	r0, [r4, #16]	; fField16
         229fc:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22a00:	eb697dd8 	bl	1a82168 <TADSPEndpointChunk::$DeRegisterNBPName(void)>
         22a04:	e3a01000 	mov	r1, #0	; 0x0
         22a08:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         22a0c:	e5c010b8 	strb	r1, [r0, #184]
         22a10:	ea000006 	b	22a30 <TADSPEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1d0>
         22a14:	e3360000 	teq	r6, #0	; 0x0
         22a18:	0a000004 	beq	22a30 <TADSPEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1d0>
         22a1c:	e3a01000 	mov	r1, #0	; 0x0
         22a20:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22a24:	e5c010b8 	strb	r1, [r0, #184]
         22a28:	e5940028 	ldr	r0, [r4, #40]	; fField40
         22a2c:	e5a40010 	str	r0, [r4, #16]!	; fField16
         22a30:	e1a00006 	mov	r0, r6
         22a34:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)
 * Address: 00022a38
 */
TADSPEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char) {
    /*
         22a38:	e1a0c00d 	mov	ip, sp
         22a3c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         22a40:	e24cb004 	sub	fp, ip, #4	; 0x4
         22a44:	e1a04000 	mov	r4, r0
         22a48:	e59b000c 	ldr	r0, [fp, #12]
         22a4c:	e20050ff 	and	r5, r0, #255	; 0xff
         22a50:	e59b7008 	ldr	r7, [fp, #8]	; fField8
         22a54:	e5940010 	ldr	r0, [r4, #16]	; fField16
         22a58:	e3300004 	teq	r0, #4	; 0x4
         22a5c:	13e000a5 	mvnne	r0, #165	; 0xa5
         22a60:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22a64:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         22a68:	e3350000 	teq	r5, #0	; 0x0
         22a6c:	0a000006 	beq	22a8c <TADSPEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x54>
         22a70:	e1a00004 	mov	r0, r4
         22a74:	e3a01001 	mov	r1, #1	; 0x1
         22a78:	eb6981db 	bl	1a831ec <TADSPEndpoint::$IsPending(unsigned long)>
         22a7c:	e3300000 	teq	r0, #0	; 0x0
         22a80:	13a00042 	movne	r0, #66	; 0x42
         22a84:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
         22a88:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         22a8c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22a90:	e5d010b4 	ldrb	r1, [r0, #180]
         22a94:	e3310000 	teq	r1, #0	; 0x0
         22a98:	13e000a2 	mvnne	r0, #162	; 0xa2
         22a9c:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22aa0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         22aa4:	e28010c0 	add	r1, r0, #192	; 0xc0
         22aa8:	e1a06001 	mov	r6, r1
         22aac:	e1a00004 	mov	r0, r4
         22ab0:	e3a03003 	mov	r3, #3	; 0x3
         22ab4:	e3a02000 	mov	r2, #0	; 0x0
         22ab8:	eb6989f1 	bl	1a85284 <TADSPEndpoint::$PrepOpenConnection(TOpenConnection *, TOptionArray *, long)>
         22abc:	e3300000 	teq	r0, #0	; 0x0
         22ac0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         22ac4:	e3a00001 	mov	r0, #1	; 0x1
         22ac8:	e5941024 	ldr	r1, [r4, #36]	; fField36
         22acc:	e5c100b8 	strb	r0, [r1, #184]
         22ad0:	e5940010 	ldr	r0, [r4, #16]	; fField16
         22ad4:	e5840028 	str	r0, [r4, #40]	; fField40
         22ad8:	e3a00008 	mov	r0, #8	; 0x8
         22adc:	e1a03005 	mov	r3, r5
         22ae0:	e1a02006 	mov	r2, r6
         22ae4:	e1a01007 	mov	r1, r7
         22ae8:	e5840010 	str	r0, [r4, #16]	; fField16
         22aec:	e3a00030 	mov	r0, #48	; 0x30
         22af0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         22af4:	e1a03006 	mov	r3, r6
         22af8:	e1a01006 	mov	r1, r6
         22afc:	e3a02068 	mov	r2, #104	; 0x68
         22b00:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22b04:	eb697966 	bl	1a810a4 <TADSPEndpointChunk::$ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
         22b08:	e28dd010 	add	sp, sp, #16	; 0x10
         22b0c:	e3a01000 	mov	r1, #0	; 0x0
         22b10:	e3350000 	teq	r5, #0	; 0x0
         22b14:	0a000005 	beq	22b30 <TADSPEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0xf8>
         22b18:	e3300000 	teq	r0, #0	; 0x0
         22b1c:	15942028 	ldrne	r2, [r4, #40]	; fField40
         22b20:	15842010 	strne	r2, [r4, #16]	; fField16
         22b24:	e5b42024 	ldr	r2, [r4, #36]!	; fField36
         22b28:	e5c210b8 	strb	r1, [r2, #184]
         22b2c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         22b30:	e3300000 	teq	r0, #0	; 0x0
         22b34:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         22b38:	e5942024 	ldr	r2, [r4, #36]	; fField36
         22b3c:	e5c210b8 	strb	r1, [r2, #184]
         22b40:	e5941028 	ldr	r1, [r4, #40]	; fField40
         22b44:	e5a41010 	str	r1, [r4, #16]!	; fField16
         22b48:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::New(void)
 * Address: 00022b4c
 */
TADSPEndpoint::New(void) {
    /*
         22b4c:	e3a01000 	mov	r1, #0	; 0x0
         22b50:	e5801024 	str	r1, [r0, #36]	; fField36
         22b54:	e5c01021 	strb	r1, [r0, #33]	; fField33
         22b58:	e5801014 	str	r1, [r0, #20]	; fField20
         22b5c:	e580101c 	str	r1, [r0, #28]	; fField28
         22b60:	e5801010 	str	r1, [r0, #16]	; fField16
         22b64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)
 * Address: 00022b68
 */
TADSPEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char) {
    /*
         22b68:	e1a0c00d 	mov	ip, sp
         22b6c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         22b70:	e24cb004 	sub	fp, ip, #4	; 0x4
         22b74:	e1a04000 	mov	r4, r0
         22b78:	e1a05001 	mov	r5, r1
         22b7c:	e59b0008 	ldr	r0, [fp, #8]	; fField8
         22b80:	e20070ff 	and	r7, r0, #255	; 0xff
         22b84:	e59b8004 	ldr	r8, [fp, #4]
         22b88:	e5940010 	ldr	r0, [r4, #16]	; fField16
         22b8c:	e3300002 	teq	r0, #2	; 0x2
         22b90:	13e000a5 	mvnne	r0, #165	; 0xa5
         22b94:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22b98:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         22b9c:	e3370000 	teq	r7, #0	; 0x0
         22ba0:	0a000006 	beq	22bc0 <TADSPEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x58>
         22ba4:	e1a00004 	mov	r0, r4
         22ba8:	e3a01001 	mov	r1, #1	; 0x1
         22bac:	eb69818e 	bl	1a831ec <TADSPEndpoint::$IsPending(unsigned long)>
         22bb0:	e3300000 	teq	r0, #0	; 0x0
         22bb4:	13a00042 	movne	r0, #66	; 0x42
         22bb8:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
         22bbc:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         22bc0:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22bc4:	e5d000b4 	ldrb	r0, [r0, #180]
         22bc8:	e3300000 	teq	r0, #0	; 0x0
         22bcc:	13e000a2 	mvnne	r0, #162	; 0xa2
         22bd0:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22bd4:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         22bd8:	e1a01005 	mov	r1, r5
         22bdc:	e1a00004 	mov	r0, r4
         22be0:	eb697d64 	bl	1a82178 <TADSPEndpoint::$ExtractAddress(TOptionArray *)>
         22be4:	e3300000 	teq	r0, #0	; 0x0
         22be8:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         22bec:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22bf0:	e28060c0 	add	r6, r0, #192	; 0xc0
         22bf4:	e1a02005 	mov	r2, r5
         22bf8:	e1a01006 	mov	r1, r6
         22bfc:	e1a00004 	mov	r0, r4
         22c00:	e3a03001 	mov	r3, #1	; 0x1
         22c04:	eb69899e 	bl	1a85284 <TADSPEndpoint::$PrepOpenConnection(TOpenConnection *, TOptionArray *, long)>
         22c08:	e3300000 	teq	r0, #0	; 0x0
         22c0c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         22c10:	e3a00001 	mov	r0, #1	; 0x1
         22c14:	e5941024 	ldr	r1, [r4, #36]	; fField36
         22c18:	e5c100b8 	strb	r0, [r1, #184]
         22c1c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         22c20:	e5840028 	str	r0, [r4, #40]	; fField40
         22c24:	e3a00003 	mov	r0, #3	; 0x3
         22c28:	e1a03007 	mov	r3, r7
         22c2c:	e1a02006 	mov	r2, r6
         22c30:	e1a01008 	mov	r1, r8
         22c34:	e5840010 	str	r0, [r4, #16]	; fField16
         22c38:	e3a00030 	mov	r0, #48	; 0x30
         22c3c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         22c40:	e1a03006 	mov	r3, r6
         22c44:	e1a01006 	mov	r1, r6
         22c48:	e3a02068 	mov	r2, #104	; 0x68
         22c4c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22c50:	eb697913 	bl	1a810a4 <TADSPEndpointChunk::$ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
         22c54:	e28dd010 	add	sp, sp, #16	; 0x10
         22c58:	e3a01000 	mov	r1, #0	; 0x0
         22c5c:	e3370000 	teq	r7, #0	; 0x0
         22c60:	0a000005 	beq	22c7c <TADSPEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x114>
         22c64:	e3300000 	teq	r0, #0	; 0x0
         22c68:	15942028 	ldrne	r2, [r4, #40]	; fField40
         22c6c:	15842010 	strne	r2, [r4, #16]	; fField16
         22c70:	e5b42024 	ldr	r2, [r4, #36]!	; fField36
         22c74:	e5c210b8 	strb	r1, [r2, #184]
         22c78:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         22c7c:	e3300000 	teq	r0, #0	; 0x0
         22c80:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         22c84:	e5942024 	ldr	r2, [r4, #36]	; fField36
         22c88:	e5c210b8 	strb	r1, [r2, #184]
         22c8c:	e5941028 	ldr	r1, [r4, #40]	; fField40
         22c90:	e5a41010 	str	r1, [r4, #16]!	; fField16
         22c94:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)
 * Address: 00022c98
 */
TADSPEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char) {
    /*
         22c98:	e1a0c00d 	mov	ip, sp
         22c9c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         22ca0:	e24cb004 	sub	fp, ip, #4	; 0x4
         22ca4:	e1a04000 	mov	r4, r0
         22ca8:	e59b0008 	ldr	r0, [fp, #8]	; fField8
         22cac:	e20050ff 	and	r5, r0, #255	; 0xff
         22cb0:	e59b6004 	ldr	r6, [fp, #4]
         22cb4:	e5940010 	ldr	r0, [r4, #16]	; fField16
         22cb8:	e3300004 	teq	r0, #4	; 0x4
         22cbc:	13300005 	teqne	r0, #5	; 0x5
         22cc0:	13300007 	teqne	r0, #7	; 0x7
         22cc4:	13e000a5 	mvnne	r0, #165	; 0xa5
         22cc8:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22ccc:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         22cd0:	e3350000 	teq	r5, #0	; 0x0
         22cd4:	0a000006 	beq	22cf4 <TADSPEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)+0x5c>
         22cd8:	e1a00004 	mov	r0, r4
         22cdc:	e3a01001 	mov	r1, #1	; 0x1
         22ce0:	eb698141 	bl	1a831ec <TADSPEndpoint::$IsPending(unsigned long)>
         22ce4:	e3300000 	teq	r0, #0	; 0x0
         22ce8:	13a00042 	movne	r0, #66	; 0x42
         22cec:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
         22cf0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         22cf4:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22cf8:	e5d010b4 	ldrb	r1, [r0, #180]
         22cfc:	e3310000 	teq	r1, #0	; 0x0
         22d00:	13e000a2 	mvnne	r0, #162	; 0xa2
         22d04:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22d08:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         22d0c:	e280c0c0 	add	ip, r0, #192	; 0xc0
         22d10:	e3a01001 	mov	r1, #1	; 0x1
         22d14:	e5c010b8 	strb	r1, [r0, #184]
         22d18:	e5940010 	ldr	r0, [r4, #16]	; fField16
         22d1c:	e5840028 	str	r0, [r4, #40]	; fField40
         22d20:	e3a00008 	mov	r0, #8	; 0x8
         22d24:	e5840010 	str	r0, [r4, #16]	; fField16
         22d28:	e59f0084 	ldr	r0, [pc, #84]	; 22db4 <TADSPEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)+0x11c>
         22d2c:	e58c0000 	str	r0, [ip]
         22d30:	e59f0080 	ldr	r0, [pc, #80]	; 22db8 <TADSPEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)+0x120>
         22d34:	e58c0004 	str	r0, [ip, #4]
         22d38:	e5940014 	ldr	r0, [r4, #20]	; fField20
         22d3c:	e58c000c 	str	r0, [ip, #12]
         22d40:	e3a00001 	mov	r0, #1	; 0x1
         22d44:	e2800b02 	add	r0, r0, #2048	; 0x800
         22d48:	e58c0010 	str	r0, [ip, #16]	; fField16
         22d4c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22d50:	e5900014 	ldr	r0, [r0, #20]	; fField20
         22d54:	e1a03005 	mov	r3, r5
         22d58:	e58c0014 	str	r0, [ip, #20]	; fField20
         22d5c:	e1a0200c 	mov	r2, ip
         22d60:	e1a01006 	mov	r1, r6
         22d64:	e3a00030 	mov	r0, #48	; 0x30
         22d68:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         22d6c:	e1a0300c 	mov	r3, ip
         22d70:	e1a0100c 	mov	r1, ip
         22d74:	e3a02068 	mov	r2, #104	; 0x68
         22d78:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22d7c:	eb6978c8 	bl	1a810a4 <TADSPEndpointChunk::$ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
         22d80:	e28dd010 	add	sp, sp, #16	; 0x10
         22d84:	e280cdc9 	add	ip, r0, #12864	; 0x3240
         22d88:	e37c0028 	cmn	ip, #40	; 0x28
         22d8c:	03a00000 	moveq	r0, #0	; 0x0
         22d90:	e3a01000 	mov	r1, #0	; 0x0
         22d94:	e3350000 	teq	r5, #0	; 0x0
         22d98:	0a000007 	beq	22dbc <TADSPEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)+0x124>
         22d9c:	e3300000 	teq	r0, #0	; 0x0
         22da0:	15942028 	ldrne	r2, [r4, #40]	; fField40
         22da4:	15842010 	strne	r2, [r4, #16]	; fField16
         22da8:	e5b42024 	ldr	r2, [r4, #36]!	; fField36
         22dac:	e5c210b8 	strb	r1, [r2, #184]
         22db0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         22db4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         22db8:	61647370 	cmnvs	r4, r0, ror r3
         22dbc:	e3300000 	teq	r0, #0	; 0x0
         22dc0:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         22dc4:	e5942024 	ldr	r2, [r4, #36]	; fField36
         22dc8:	e5c210b8 	strb	r1, [r2, #184]
         22dcc:	e5941028 	ldr	r1, [r4, #40]	; fField40
         22dd0:	e5a41010 	str	r1, [r4, #16]!	; fField16
         22dd4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::nRelease(unsigned long, unsigned char)
 * Address: 00022dd8
 */
TADSPEndpoint::nRelease(unsigned long, unsigned char) {
    /*
         22dd8:	e1a0c00d 	mov	ip, sp
         22ddc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         22de0:	e24cb004 	sub	fp, ip, #4	; 0x4
         22de4:	e1a04000 	mov	r4, r0
         22de8:	e1a05001 	mov	r5, r1
         22dec:	e20260ff 	and	r6, r2, #255	; 0xff
         22df0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         22df4:	e3300005 	teq	r0, #5	; 0x5
         22df8:	13300007 	teqne	r0, #7	; 0x7
         22dfc:	13e000a5 	mvnne	r0, #165	; 0xa5
         22e00:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22e04:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         22e08:	e3360000 	teq	r6, #0	; 0x0
         22e0c:	0a000006 	beq	22e2c <TADSPEndpoint::nRelease(unsigned long, unsigned char)+0x54>
         22e10:	e1a00004 	mov	r0, r4
         22e14:	e3a01001 	mov	r1, #1	; 0x1
         22e18:	eb6980f3 	bl	1a831ec <TADSPEndpoint::$IsPending(unsigned long)>
         22e1c:	e3300000 	teq	r0, #0	; 0x0
         22e20:	13a00042 	movne	r0, #66	; 0x42
         22e24:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
         22e28:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         22e2c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22e30:	e5d010b4 	ldrb	r1, [r0, #180]
         22e34:	e3310000 	teq	r1, #0	; 0x0
         22e38:	13e000a2 	mvnne	r0, #162	; 0xa2
         22e3c:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22e40:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         22e44:	e280c0c0 	add	ip, r0, #192	; 0xc0
         22e48:	e3a01001 	mov	r1, #1	; 0x1
         22e4c:	e5c010b8 	strb	r1, [r0, #184]
         22e50:	e5940010 	ldr	r0, [r4, #16]	; fField16
         22e54:	e5840028 	str	r0, [r4, #40]	; fField40
         22e58:	e3a00006 	mov	r0, #6	; 0x6
         22e5c:	e5840010 	str	r0, [r4, #16]	; fField16
         22e60:	e59f0084 	ldr	r0, [pc, #84]	; 22eec <TADSPEndpoint::nRelease(unsigned long, unsigned char)+0x114>
         22e64:	e58c0000 	str	r0, [ip]
         22e68:	e59f0080 	ldr	r0, [pc, #80]	; 22ef0 <TADSPEndpoint::nRelease(unsigned long, unsigned char)+0x118>
         22e6c:	e58c0004 	str	r0, [ip, #4]
         22e70:	e5940014 	ldr	r0, [r4, #20]	; fField20
         22e74:	e58c000c 	str	r0, [ip, #12]
         22e78:	e3a00001 	mov	r0, #1	; 0x1
         22e7c:	e2800b02 	add	r0, r0, #2048	; 0x800
         22e80:	e58c0010 	str	r0, [ip, #16]	; fField16
         22e84:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22e88:	e5900014 	ldr	r0, [r0, #20]	; fField20
         22e8c:	e1a03006 	mov	r3, r6
         22e90:	e58c0014 	str	r0, [ip, #20]	; fField20
         22e94:	e1a0200c 	mov	r2, ip
         22e98:	e1a01005 	mov	r1, r5
         22e9c:	e3a00030 	mov	r0, #48	; 0x30
         22ea0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         22ea4:	e1a0300c 	mov	r3, ip
         22ea8:	e1a0100c 	mov	r1, ip
         22eac:	e3a02068 	mov	r2, #104	; 0x68
         22eb0:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22eb4:	eb69787a 	bl	1a810a4 <TADSPEndpointChunk::$ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
         22eb8:	e28dd010 	add	sp, sp, #16	; 0x10
         22ebc:	e280cdc9 	add	ip, r0, #12864	; 0x3240
         22ec0:	e37c0028 	cmn	ip, #40	; 0x28
         22ec4:	03a00000 	moveq	r0, #0	; 0x0
         22ec8:	e3a01000 	mov	r1, #0	; 0x0
         22ecc:	e3360000 	teq	r6, #0	; 0x0
         22ed0:	0a000007 	beq	22ef4 <TADSPEndpoint::nRelease(unsigned long, unsigned char)+0x11c>
         22ed4:	e3300000 	teq	r0, #0	; 0x0
         22ed8:	15942028 	ldrne	r2, [r4, #40]	; fField40
         22edc:	15842010 	strne	r2, [r4, #16]	; fField16
         22ee0:	e5b42024 	ldr	r2, [r4, #36]!	; fField36
         22ee4:	e5c210b8 	strb	r1, [r2, #184]
         22ee8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         22eec:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         22ef0:	61647370 	cmnvs	r4, r0, ror r3
         22ef4:	e3300000 	teq	r0, #0	; 0x0
         22ef8:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         22efc:	e5942024 	ldr	r2, [r4, #36]	; fField36
         22f00:	e5c210b8 	strb	r1, [r2, #184]
         22f04:	e5941028 	ldr	r1, [r4, #40]	; fField40
         22f08:	e5a41010 	str	r1, [r4, #16]!	; fField16
         22f0c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::nUnBind(unsigned long, unsigned char)
 * Address: 00022f10
 */
TADSPEndpoint::nUnBind(unsigned long, unsigned char) {
    /*
         22f10:	e1a0c00d 	mov	ip, sp
         22f14:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         22f18:	e24cb004 	sub	fp, ip, #4	; 0x4
         22f1c:	e1a04000 	mov	r4, r0
         22f20:	e20260ff 	and	r6, r2, #255	; 0xff
         22f24:	e3a05000 	mov	r5, #0	; 0x0
         22f28:	e5900010 	ldr	r0, [r0, #16]	; fField16
         22f2c:	e3300002 	teq	r0, #2	; 0x2
         22f30:	13e000a5 	mvnne	r0, #165	; 0xa5
         22f34:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22f38:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         22f3c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         22f40:	e5d000b4 	ldrb	r0, [r0, #180]
         22f44:	e3300000 	teq	r0, #0	; 0x0
         22f48:	13e000a2 	mvnne	r0, #162	; 0xa2
         22f4c:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         22f50:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         22f54:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
         22f58:	e3300000 	teq	r0, #0	; 0x0
         22f5c:	0a000005 	beq	22f78 <TADSPEndpoint::nUnBind(unsigned long, unsigned char)+0x68>
         22f60:	e59f007c 	ldr	r0, [pc, #7c]	; 22fe4 <TADSPEndpoint::nUnBind(unsigned long, unsigned char)+0xd4>
         22f64:	eb6f429c 	bl	1bf39dc <$CloseAppleTalk(unsigned long)>
         22f68:	e1a05000 	mov	r5, r0
         22f6c:	e280cdc9 	add	ip, r0, #12864	; 0x3240
         22f70:	e37c0028 	cmn	ip, #40	; 0x28
         22f74:	03a05000 	moveq	r5, #0	; 0x0
         22f78:	e3a00000 	mov	r0, #0	; 0x0
         22f7c:	e5c40021 	strb	r0, [r4, #33]	; fField33
         22f80:	e3a00001 	mov	r0, #1	; 0x1
         22f84:	e3360000 	teq	r6, #0	; 0x0
         22f88:	e5840010 	str	r0, [r4, #16]	; fField16
         22f8c:	1a000012 	bne	22fdc <TADSPEndpoint::nUnBind(unsigned long, unsigned char)+0xcc>
         22f90:	e5942018 	ldr	r2, [r4, #24]	; fField24
         22f94:	e3320000 	teq	r2, #0	; 0x0
         22f98:	0a00000f 	beq	22fdc <TADSPEndpoint::nUnBind(unsigned long, unsigned char)+0xcc>
         22f9c:	e24dd028 	sub	sp, sp, #40	; 0x28
         22fa0:	e1a01005 	mov	r1, r5
         22fa4:	e28d0004 	add	r0, sp, #4	; 0x4
         22fa8:	e3e0300a 	mvn	r3, #10	; 0xa
         22fac:	eb67952b 	bl	1a08460 <TBindCompleteEvent::$__ct(long, unsigned long, long)>
         22fb0:	e3a00024 	mov	r0, #36	; 0x24
         22fb4:	e58d0000 	str	r0, [sp]
         22fb8:	e28d3004 	add	r3, sp, #4	; 0x4
         22fbc:	e1a0200d 	mov	r2, sp
         22fc0:	e5b4c018 	ldr	ip, [r4, #24]!	; fField24
         22fc4:	e1a0000c 	mov	r0, ip
         22fc8:	e3a01000 	mov	r1, #0	; 0x0
         22fcc:	e59cc000 	ldr	ip, [ip]
         22fd0:	e1a0e00f 	mov	lr, pc
         22fd4:	e28cf008 	add	pc, ip, #8	; 0x8
         22fd8:	e28dd028 	add	sp, sp, #40	; 0x28
         22fdc:	e1a00005 	mov	r0, r5
         22fe0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         22fe4:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
    */
}

/**
 * Symbol: TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)
 * Address: 00022fe8
 */
TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char) {
    /*
         22fe8:	e1a0c00d 	mov	ip, sp
         22fec:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         22ff0:	e24cb004 	sub	fp, ip, #4	; 0x4
         22ff4:	e1a04000 	mov	r4, r0
         22ff8:	e1a05002 	mov	r5, r2
         22ffc:	e59b0004 	ldr	r0, [fp, #4]
         23000:	e20080ff 	and	r8, r0, #255	; 0xff
         23004:	e3a07000 	mov	r7, #0	; 0x0
         23008:	e5940024 	ldr	r0, [r4, #36]	; fField36
         2300c:	e5d000b4 	ldrb	r0, [r0, #180]
         23010:	e3300000 	teq	r0, #0	; 0x0
         23014:	13e000a2 	mvnne	r0, #162	; 0xa2
         23018:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         2301c:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         23020:	e3310c05 	teq	r1, #1280	; 0x500
         23024:	1a000049 	bne	23150 <TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x168>
         23028:	e3350000 	teq	r5, #0	; 0x0
         2302c:	0a000031 	beq	230f8 <TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x110>
         23030:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         23034:	e1a01005 	mov	r1, r5
         23038:	e1a0000d 	mov	r0, sp
         2303c:	eb6e4aad 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         23040:	e1a0000d 	mov	r0, sp
         23044:	eb6e56f4 	bl	1bb8c1c <TOptionIterator::$FirstOption(void)>
         23048:	e1a06000 	mov	r6, r0
         2304c:	e1a0000d 	mov	r0, sp
         23050:	eb6e5b1a 	bl	1bb9cc0 <TOptionIterator::$More(void)>
         23054:	e3300000 	teq	r0, #0	; 0x0
         23058:	0a000022 	beq	230e8 <TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x100>
         2305c:	e59f9054 	ldr	r9, [pc, #54]	; 230b8 <TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0xd0>
         23060:	e5960008 	ldr	r0, [r6, #8]	; fField8
         23064:	e2003cff 	and	r3, r0, #65280	; 0xff00
         23068:	e2001102 	and	r1, r0, #-2147483648	; 0x80000000
         2306c:	e3310102 	teq	r1, #-2147483648	; 0x80000000
         23070:	e5962000 	ldr	r2, [r6]
         23074:	1200143f 	andne	r1, r0, #1056964608	; 0x3f000000
         23078:	13310301 	teqne	r1, #67108864	; 0x4000000
         2307c:	0a000012 	beq	230cc <TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0xe4>
         23080:	e3330b01 	teq	r3, #1024	; 0x400
         23084:	01320009 	teqeq	r2, r9
         23088:	1a00000b 	bne	230bc <TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0xd4>
         2308c:	e5941024 	ldr	r1, [r4, #36]	; fField36
         23090:	e3310000 	teq	r1, #0	; 0x0
         23094:	0a000008 	beq	230bc <TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0xd4>
         23098:	e2810f79 	add	r0, r1, #484	; 0x1e4
         2309c:	e5901000 	ldr	r1, [r0]
         230a0:	e1a0e00f 	mov	lr, pc
         230a4:	e281f040 	add	pc, r1, #64	; 0x40
         230a8:	e586000c 	str	r0, [r6, #12]
         230ac:	e5960008 	ldr	r0, [r6, #8]	; fField8
         230b0:	e3c000ff 	bic	r0, r0, #255	; 0xff
         230b4:	ea000002 	b	230c4 <TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0xdc>
         230b8:	73626176 	cmnvc	r2, #-2147483619	; 0x8000001d
         230bc:	e3c000ff 	bic	r0, r0, #255	; 0xff
         230c0:	e38000fc 	orr	r0, r0, #252	; 0xfc
         230c4:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         230c8:	e5a60008 	str	r0, [r6, #8]!	; fField8
         230cc:	e1a0000d 	mov	r0, sp
         230d0:	eb6e5afd 	bl	1bb9ccc <TOptionIterator::$NextOption(void)>
         230d4:	e1a06000 	mov	r6, r0
         230d8:	e1a0000d 	mov	r0, sp
         230dc:	eb6e5af7 	bl	1bb9cc0 <TOptionIterator::$More(void)>
         230e0:	e3300000 	teq	r0, #0	; 0x0
         230e4:	1affffdd 	bne	23060 <TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x78>
         230e8:	e1a0000d 	mov	r0, sp
         230ec:	e3a01000 	mov	r1, #0	; 0x0
         230f0:	eb6e4e91 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         230f4:	e28dd01c 	add	sp, sp, #28	; 0x1c
         230f8:	e3380000 	teq	r8, #0	; 0x0
         230fc:	1a000014 	bne	23154 <TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x16c>
         23100:	e5942018 	ldr	r2, [r4, #24]	; fField24
         23104:	e3320000 	teq	r2, #0	; 0x0
         23108:	0a000011 	beq	23154 <TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x16c>
         2310c:	e24dd028 	sub	sp, sp, #40	; 0x28
         23110:	e1a01007 	mov	r1, r7
         23114:	e28d0004 	add	r0, sp, #4	; 0x4
         23118:	eb6e4e7f 	bl	1bb6b1c <TOptMgmtCompleteEvent::$__ct(long, unsigned long)>
         2311c:	e3a00024 	mov	r0, #36	; 0x24
         23120:	e58d0000 	str	r0, [sp]
         23124:	e58d5024 	str	r5, [sp, #36]	; fField36
         23128:	e28d3004 	add	r3, sp, #4	; 0x4
         2312c:	e1a0200d 	mov	r2, sp
         23130:	e5b4c018 	ldr	ip, [r4, #24]!	; fField24
         23134:	e1a0000c 	mov	r0, ip
         23138:	e3a01000 	mov	r1, #0	; 0x0
         2313c:	e59cc000 	ldr	ip, [ip]
         23140:	e1a0e00f 	mov	lr, pc
         23144:	e28cf008 	add	pc, ip, #8	; 0x8
         23148:	e28dd028 	add	sp, sp, #40	; 0x28
         2314c:	ea000000 	b	23154 <TADSPEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x16c>
         23150:	e3e07004 	mvn	r7, #4	; 0x4
         23154:	e1a00007 	mov	r0, r7
         23158:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)
 * Address: 0002315c
 */
TADSPEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *) {
    /*
         2315c:	e1a0c00d 	mov	ip, sp
         23160:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         23164:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         23168:	e24cb014 	sub	fp, ip, #20	; 0x14
         2316c:	e1a04000 	mov	r4, r0
         23170:	e1a06001 	mov	r6, r1
         23174:	e1a05002 	mov	r5, r2
         23178:	e28b9018 	add	r9, fp, #24	; 0x18
         2317c:	e8990201 	ldmia	r9, {r0, r9}
         23180:	e20080ff 	and	r8, r0, #255	; 0xff
         23184:	e59ba014 	ldr	sl, [fp, #20]	; fField20
         23188:	e5940010 	ldr	r0, [r4, #16]	; fField16
         2318c:	e3300005 	teq	r0, #5	; 0x5
         23190:	13e000a5 	mvnne	r0, #165	; 0xa5
         23194:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         23198:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         2319c:	e3380000 	teq	r8, #0	; 0x0
         231a0:	15940024 	ldrne	r0, [r4, #36]	; fField36
         231a4:	15d000b5 	ldrneb	r0, [r0, #181]
         231a8:	13300000 	teqne	r0, #0	; 0x0
         231ac:	13a00042 	movne	r0, #66	; 0x42
         231b0:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
         231b4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         231b8:	e5940024 	ldr	r0, [r4, #36]	; fField36
         231bc:	eb697ff5 	bl	1a83198 <TADSPEndpointChunk::$GetSendPB(void)>
         231c0:	e1b07000 	movs	r7, r0
         231c4:	0a00001e 	beq	23244 <TADSPEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0xe8>
         231c8:	e5950000 	ldr	r0, [r5]
         231cc:	e5870038 	str	r0, [r7, #56]
         231d0:	e3a00000 	mov	r0, #0	; 0x0
         231d4:	e587003c 	str	r0, [r7, #60]
         231d8:	e59b3010 	ldr	r3, [fp, #16]	; fField16
         231dc:	e5873034 	str	r3, [r7, #52]
         231e0:	e5876040 	str	r6, [r7, #64]
         231e4:	e5941018 	ldr	r1, [r4, #24]	; fField24
         231e8:	e3310000 	teq	r1, #0	; 0x0
         231ec:	0a000002 	beq	231fc <TADSPEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0xa0>
         231f0:	e3380000 	teq	r8, #0	; 0x0
         231f4:	03a01001 	moveq	r1, #1	; 0x1
         231f8:	0a000000 	beq	23200 <TADSPEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0xa4>
         231fc:	e3a01000 	mov	r1, #0	; 0x0
         23200:	e5c71044 	strb	r1, [r7, #68]
         23204:	e5c78045 	strb	r8, [r7, #69]
         23208:	e587000c 	str	r0, [r7, #12]
         2320c:	e5d71044 	ldrb	r1, [r7, #68]
         23210:	e3310000 	teq	r1, #0	; 0x0
         23214:	0a000004 	beq	2322c <TADSPEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0xd0>
         23218:	e5870028 	str	r0, [r7, #40]	; fField40
         2321c:	e5876024 	str	r6, [r7, #36]	; fField36
         23220:	e287702c 	add	r7, r7, #44	; 0x2c
         23224:	e8870201 	stmia	r7, {r0, r9}
         23228:	e247702c 	sub	r7, r7, #44	; 0x2c
         2322c:	e1a0200a 	mov	r2, sl
         23230:	e1a01007 	mov	r1, r7
         23234:	e5940024 	ldr	r0, [r4, #36]	; fField36
         23238:	eb69882e 	bl	1a852f8 <TADSPEndpointChunk::$Send(TADSPSendRequest *, unsigned long)>
         2323c:	e1a06000 	mov	r6, r0
         23240:	ea000001 	b	2324c <TADSPEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0xf0>
         23244:	e3e060a7 	mvn	r6, #167	; 0xa7
         23248:	e2466b23 	sub	r6, r6, #35840	; 0x8c00
         2324c:	e3380000 	teq	r8, #0	; 0x0
         23250:	0a000003 	beq	23264 <TADSPEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x108>
         23254:	e3360000 	teq	r6, #0	; 0x0
         23258:	0597600c 	ldreq	r6, [r7, #12]
         2325c:	e597003c 	ldr	r0, [r7, #60]
         23260:	e5850000 	str	r0, [r5]
         23264:	e3370000 	teq	r7, #0	; 0x0
         23268:	0a000006 	beq	23288 <TADSPEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x12c>
         2326c:	e3380000 	teq	r8, #0	; 0x0
         23270:	03360000 	teqeq	r6, #0	; 0x0
         23274:	0a000003 	beq	23288 <TADSPEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x12c>
         23278:	e1a02007 	mov	r2, r7
         2327c:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         23280:	e5b01024 	ldr	r1, [r0, #36]!	; fField36
         23284:	eb6f1898 	bl	1be94ec <CList::$InsertAt(long, void *)>
         23288:	e1a00006 	mov	r0, r6
         2328c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)
 * Address: 00023290
 */
TADSPEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *) {
    /*
         23290:	e1a0c00d 	mov	ip, sp
         23294:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         23298:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2329c:	e24cb014 	sub	fp, ip, #20	; 0x14
         232a0:	e1a04000 	mov	r4, r0
         232a4:	e1a05001 	mov	r5, r1
         232a8:	e1a06002 	mov	r6, r2
         232ac:	e28ba014 	add	sl, fp, #20	; 0x14
         232b0:	e89a0401 	ldmia	sl, {r0, sl}
         232b4:	e20080ff 	and	r8, r0, #255	; 0xff
         232b8:	e1a00001 	mov	r0, r1
         232bc:	e5911000 	ldr	r1, [r1]
         232c0:	e1a0e00f 	mov	lr, pc
         232c4:	e281f02c 	add	pc, r1, #44	; 0x2c
         232c8:	e1a09000 	mov	r9, r0
         232cc:	e3a07000 	mov	r7, #0	; 0x0
         232d0:	e5940010 	ldr	r0, [r4, #16]	; fField16
         232d4:	e3300005 	teq	r0, #5	; 0x5
         232d8:	1a00002b 	bne	2338c <TADSPEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0xfc>
         232dc:	e3380000 	teq	r8, #0	; 0x0
         232e0:	15940024 	ldrne	r0, [r4, #36]	; fField36
         232e4:	15d000b5 	ldrneb	r0, [r0, #181]
         232e8:	13300000 	teqne	r0, #0	; 0x0
         232ec:	13a05042 	movne	r5, #66	; 0x42
         232f0:	12455c8d 	subne	r5, r5, #36096	; 0x8d00
         232f4:	1a000026 	bne	23394 <TADSPEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x104>
         232f8:	e5940024 	ldr	r0, [r4, #36]	; fField36
         232fc:	eb697fa5 	bl	1a83198 <TADSPEndpointChunk::$GetSendPB(void)>
         23300:	e1b07000 	movs	r7, r0
         23304:	03e050a7 	mvneq	r5, #167	; 0xa7
         23308:	02455b23 	subeq	r5, r5, #35840	; 0x8c00
         2330c:	0a000020 	beq	23394 <TADSPEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x104>
         23310:	e3a00000 	mov	r0, #0	; 0x0
         23314:	e587003c 	str	r0, [r7, #60]
         23318:	e2877034 	add	r7, r7, #52	; 0x34
         2331c:	e8870240 	stmia	r7, {r6, r9}
         23320:	e2477034 	sub	r7, r7, #52	; 0x34
         23324:	e5951010 	ldr	r1, [r5, #16]	; fField16
         23328:	e5871040 	str	r1, [r7, #64]
         2332c:	e5941018 	ldr	r1, [r4, #24]	; fField24
         23330:	e3310000 	teq	r1, #0	; 0x0
         23334:	0a000002 	beq	23344 <TADSPEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0xb4>
         23338:	e3380000 	teq	r8, #0	; 0x0
         2333c:	03a01001 	moveq	r1, #1	; 0x1
         23340:	0a000000 	beq	23348 <TADSPEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0xb8>
         23344:	e3a01000 	mov	r1, #0	; 0x0
         23348:	e5c71044 	strb	r1, [r7, #68]
         2334c:	e5c78045 	strb	r8, [r7, #69]
         23350:	e587000c 	str	r0, [r7, #12]
         23354:	e5d71044 	ldrb	r1, [r7, #68]
         23358:	e3310000 	teq	r1, #0	; 0x0
         2335c:	0a000004 	beq	23374 <TADSPEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0xe4>
         23360:	e2877024 	add	r7, r7, #36	; 0x24
         23364:	e8870021 	stmia	r7, {r0, r5}
         23368:	e2877008 	add	r7, r7, #8	; 0x8
         2336c:	e8870401 	stmia	r7, {r0, sl}
         23370:	e247702c 	sub	r7, r7, #44	; 0x2c
         23374:	e5940024 	ldr	r0, [r4, #36]	; fField36
         23378:	e1a01007 	mov	r1, r7
         2337c:	e59b2010 	ldr	r2, [fp, #16]	; fField16
         23380:	eb6987dc 	bl	1a852f8 <TADSPEndpointChunk::$Send(TADSPSendRequest *, unsigned long)>
         23384:	e1a05000 	mov	r5, r0
         23388:	ea000001 	b	23394 <TADSPEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x104>
         2338c:	e3e050a5 	mvn	r5, #165	; 0xa5
         23390:	e2455b23 	sub	r5, r5, #35840	; 0x8c00
         23394:	e3380000 	teq	r8, #0	; 0x0
         23398:	0a000001 	beq	233a4 <TADSPEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x114>
         2339c:	e3350000 	teq	r5, #0	; 0x0
         233a0:	0597500c 	ldreq	r5, [r7, #12]
         233a4:	e3370000 	teq	r7, #0	; 0x0
         233a8:	0a000006 	beq	233c8 <TADSPEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x138>
         233ac:	e3380000 	teq	r8, #0	; 0x0
         233b0:	03350000 	teqeq	r5, #0	; 0x0
         233b4:	0a000003 	beq	233c8 <TADSPEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x138>
         233b8:	e1a02007 	mov	r2, r7
         233bc:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         233c0:	e5b01024 	ldr	r1, [r0, #36]!	; fField36
         233c4:	eb6f1848 	bl	1be94ec <CList::$InsertAt(long, void *)>
         233c8:	e1a00005 	mov	r0, r5
         233cc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)
 * Address: 000233d0
 */
TADSPEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *) {
    /*
         233d0:	e1a0c00d 	mov	ip, sp
         233d4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         233d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         233dc:	e24cb014 	sub	fp, ip, #20	; 0x14
         233e0:	e1a04000 	mov	r4, r0
         233e4:	e1a07001 	mov	r7, r1
         233e8:	e1a05002 	mov	r5, r2
         233ec:	e1a06003 	mov	r6, r3
         233f0:	e59b001c 	ldr	r0, [fp, #28]	; fField28
         233f4:	e20090ff 	and	r9, r0, #255	; 0xff
         233f8:	e3a08000 	mov	r8, #0	; 0x0
         233fc:	e59ba014 	ldr	sl, [fp, #20]	; fField20
         23400:	e5940010 	ldr	r0, [r4, #16]	; fField16
         23404:	e3300005 	teq	r0, #5	; 0x5
         23408:	1a00002f 	bne	234cc <TADSPEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0xfc>
         2340c:	e3390000 	teq	r9, #0	; 0x0
         23410:	15940024 	ldrne	r0, [r4, #36]	; fField36
         23414:	15d000b6 	ldrneb	r0, [r0, #182]
         23418:	13300000 	teqne	r0, #0	; 0x0
         2341c:	13a06042 	movne	r6, #66	; 0x42
         23420:	12466c8d 	subne	r6, r6, #36096	; 0x8d00
         23424:	1a00002a 	bne	234d4 <TADSPEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x104>
         23428:	e5940024 	ldr	r0, [r4, #36]	; fField36
         2342c:	eb697f58 	bl	1a83194 <TADSPEndpointChunk::$GetRecvPB(void)>
         23430:	e1b08000 	movs	r8, r0
         23434:	03e060a7 	mvneq	r6, #167	; 0xa7
         23438:	02466b23 	subeq	r6, r6, #35840	; 0x8c00
         2343c:	0a000024 	beq	234d4 <TADSPEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x104>
         23440:	e5950000 	ldr	r0, [r5]
         23444:	e3560000 	cmp	r6, #0	; 0x0
         23448:	e588003c 	str	r0, [r8, #60]
         2344c:	d5950000 	ldrle	r0, [r5]
         23450:	d5880044 	strle	r0, [r8, #68]
         23454:	c5886044 	strgt	r6, [r8, #68]
         23458:	e3a00000 	mov	r0, #0	; 0x0
         2345c:	e5880040 	str	r0, [r8, #64]
         23460:	e59a1000 	ldr	r1, [sl]
         23464:	e5881038 	str	r1, [r8, #56]
         23468:	e5887048 	str	r7, [r8, #72]
         2346c:	e5941018 	ldr	r1, [r4, #24]	; fField24
         23470:	e3310000 	teq	r1, #0	; 0x0
         23474:	0a000002 	beq	23484 <TADSPEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0xb4>
         23478:	e3390000 	teq	r9, #0	; 0x0
         2347c:	03a01001 	moveq	r1, #1	; 0x1
         23480:	0a000000 	beq	23488 <TADSPEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0xb8>
         23484:	e3a01000 	mov	r1, #0	; 0x0
         23488:	e5c8104c 	strb	r1, [r8, #76]
         2348c:	e5c8904d 	strb	r9, [r8, #77]
         23490:	e5880028 	str	r0, [r8, #40]	; fField40
         23494:	e588000c 	str	r0, [r8, #12]
         23498:	e5d8104c 	ldrb	r1, [r8, #76]
         2349c:	e3310000 	teq	r1, #0	; 0x0
         234a0:	0a000003 	beq	234b4 <TADSPEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0xe4>
         234a4:	e588002c 	str	r0, [r8, #44]	; fField44
         234a8:	e5887024 	str	r7, [r8, #36]	; fField36
         234ac:	e59b0020 	ldr	r0, [fp, #32]	; fField32
         234b0:	e5880034 	str	r0, [r8, #52]
         234b4:	e5940024 	ldr	r0, [r4, #36]	; fField36
         234b8:	e1a01008 	mov	r1, r8
         234bc:	e59b2018 	ldr	r2, [fp, #24]	; fField24
         234c0:	eb69877a 	bl	1a852b0 <TADSPEndpointChunk::$Recv(TADSPRecvRequest *, unsigned long)>
         234c4:	e1a06000 	mov	r6, r0
         234c8:	ea000001 	b	234d4 <TADSPEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x104>
         234cc:	e3e060a5 	mvn	r6, #165	; 0xa5
         234d0:	e2466b23 	sub	r6, r6, #35840	; 0x8c00
         234d4:	e3390000 	teq	r9, #0	; 0x0
         234d8:	0a000005 	beq	234f4 <TADSPEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x124>
         234dc:	e3360000 	teq	r6, #0	; 0x0
         234e0:	0598600c 	ldreq	r6, [r8, #12]
         234e4:	e5980040 	ldr	r0, [r8, #64]
         234e8:	e5850000 	str	r0, [r5]
         234ec:	e5980038 	ldr	r0, [r8, #56]
         234f0:	e58a0000 	str	r0, [sl]
         234f4:	e3380000 	teq	r8, #0	; 0x0
         234f8:	0a000006 	beq	23518 <TADSPEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x148>
         234fc:	e3390000 	teq	r9, #0	; 0x0
         23500:	03360000 	teqeq	r6, #0	; 0x0
         23504:	0a000003 	beq	23518 <TADSPEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x148>
         23508:	e1a02008 	mov	r2, r8
         2350c:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         23510:	e5b01058 	ldr	r1, [r0, #88]!
         23514:	eb6f17f4 	bl	1be94ec <CList::$InsertAt(long, void *)>
         23518:	e1a00006 	mov	r0, r6
         2351c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)
 * Address: 00023520
 */
TADSPEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *) {
    /*
         23520:	e1a0c00d 	mov	ip, sp
         23524:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         23528:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2352c:	e24cb014 	sub	fp, ip, #20	; 0x14
         23530:	e1a04000 	mov	r4, r0
         23534:	e1a05001 	mov	r5, r1
         23538:	e1a07002 	mov	r7, r2
         2353c:	e1a06003 	mov	r6, r3
         23540:	e59b0018 	ldr	r0, [fp, #24]	; fField24
         23544:	e20090ff 	and	r9, r0, #255	; 0xff
         23548:	e1a00001 	mov	r0, r1
         2354c:	e5911000 	ldr	r1, [r1]
         23550:	e1a0e00f 	mov	lr, pc
         23554:	e281f02c 	add	pc, r1, #44	; 0x2c
         23558:	e1a0a000 	mov	sl, r0
         2355c:	e3a08000 	mov	r8, #0	; 0x0
         23560:	e5940010 	ldr	r0, [r4, #16]	; fField16
         23564:	e3300005 	teq	r0, #5	; 0x5
         23568:	1a00002e 	bne	23628 <TADSPEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x108>
         2356c:	e3390000 	teq	r9, #0	; 0x0
         23570:	15940024 	ldrne	r0, [r4, #36]	; fField36
         23574:	15d000b6 	ldrneb	r0, [r0, #182]
         23578:	13300000 	teqne	r0, #0	; 0x0
         2357c:	13a05042 	movne	r5, #66	; 0x42
         23580:	12455c8d 	subne	r5, r5, #36096	; 0x8d00
         23584:	1a000029 	bne	23630 <TADSPEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x110>
         23588:	e5940024 	ldr	r0, [r4, #36]	; fField36
         2358c:	eb697f00 	bl	1a83194 <TADSPEndpointChunk::$GetRecvPB(void)>
         23590:	e1b08000 	movs	r8, r0
         23594:	03e050a7 	mvneq	r5, #167	; 0xa7
         23598:	02455b23 	subeq	r5, r5, #35840	; 0x8c00
         2359c:	0a000023 	beq	23630 <TADSPEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x110>
         235a0:	e3570000 	cmp	r7, #0	; 0x0
         235a4:	e588a03c 	str	sl, [r8, #60]
         235a8:	d588a044 	strle	sl, [r8, #68]
         235ac:	c5887044 	strgt	r7, [r8, #68]
         235b0:	e3a00000 	mov	r0, #0	; 0x0
         235b4:	e5880040 	str	r0, [r8, #64]
         235b8:	e5961000 	ldr	r1, [r6]
         235bc:	e5881038 	str	r1, [r8, #56]
         235c0:	e5951010 	ldr	r1, [r5, #16]	; fField16
         235c4:	e5881048 	str	r1, [r8, #72]
         235c8:	e5941018 	ldr	r1, [r4, #24]	; fField24
         235cc:	e3310000 	teq	r1, #0	; 0x0
         235d0:	0a000002 	beq	235e0 <TADSPEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0xc0>
         235d4:	e3390000 	teq	r9, #0	; 0x0
         235d8:	03a01001 	moveq	r1, #1	; 0x1
         235dc:	0a000000 	beq	235e4 <TADSPEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0xc4>
         235e0:	e3a01000 	mov	r1, #0	; 0x0
         235e4:	e5c8104c 	strb	r1, [r8, #76]
         235e8:	e5c8904d 	strb	r9, [r8, #77]
         235ec:	e588000c 	str	r0, [r8, #12]
         235f0:	e5885028 	str	r5, [r8, #40]	; fField40
         235f4:	e5d8104c 	ldrb	r1, [r8, #76]
         235f8:	e3310000 	teq	r1, #0	; 0x0
         235fc:	0a000003 	beq	23610 <TADSPEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0xf0>
         23600:	e5880024 	str	r0, [r8, #36]	; fField36
         23604:	e588002c 	str	r0, [r8, #44]	; fField44
         23608:	e59b001c 	ldr	r0, [fp, #28]	; fField28
         2360c:	e5880034 	str	r0, [r8, #52]
         23610:	e5940024 	ldr	r0, [r4, #36]	; fField36
         23614:	e1a01008 	mov	r1, r8
         23618:	e59b2014 	ldr	r2, [fp, #20]	; fField20
         2361c:	eb698723 	bl	1a852b0 <TADSPEndpointChunk::$Recv(TADSPRecvRequest *, unsigned long)>
         23620:	e1a05000 	mov	r5, r0
         23624:	ea000001 	b	23630 <TADSPEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x110>
         23628:	e3e050a5 	mvn	r5, #165	; 0xa5
         2362c:	e2455b23 	sub	r5, r5, #35840	; 0x8c00
         23630:	e3390000 	teq	r9, #0	; 0x0
         23634:	0a000003 	beq	23648 <TADSPEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x128>
         23638:	e3350000 	teq	r5, #0	; 0x0
         2363c:	0598500c 	ldreq	r5, [r8, #12]
         23640:	e5980038 	ldr	r0, [r8, #56]
         23644:	e5860000 	str	r0, [r6]
         23648:	e3380000 	teq	r8, #0	; 0x0
         2364c:	0a000006 	beq	2366c <TADSPEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x14c>
         23650:	e3390000 	teq	r9, #0	; 0x0
         23654:	03350000 	teqeq	r5, #0	; 0x0
         23658:	0a000003 	beq	2366c <TADSPEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x14c>
         2365c:	e1a02008 	mov	r2, r8
         23660:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         23664:	e5b01058 	ldr	r1, [r0, #88]!
         23668:	eb6f179f 	bl	1be94ec <CList::$InsertAt(long, void *)>
         2366c:	e1a00005 	mov	r0, r5
         23670:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::nAbort(unsigned char)
 * Address: 00023674
 */
TADSPEndpoint::nAbort(unsigned char) {
    /*
         23674:	e20110ff 	and	r1, r1, #255	; 0xff
         23678:	e5900024 	ldr	r0, [r0, #36]	; fField36
         2367c:	e3a03001 	mov	r3, #1	; 0x1
         23680:	e3a020c9 	mov	r2, #201	; 0xc9
         23684:	e2422b0a 	sub	r2, r2, #10240	; 0x2800
         23688:	ea69768e 	b	1a810c8 <TADSPEndpointChunk::$Abort(unsigned char, long, unsigned char)>
    */
}

/**
 * Symbol: TADSPEndpoint::Delete(void)
 * Address: 0002368c
 */
TADSPEndpoint::Delete(void) {
    /*
         2368c:	e1a0c00d 	mov	ip, sp
         23690:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         23694:	e24cb004 	sub	fp, ip, #4	; 0x4
         23698:	e1a04000 	mov	r4, r0
         2369c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         236a0:	e3300000 	teq	r0, #0	; 0x0
         236a4:	11a00004 	movne	r0, r4
         236a8:	1b69513f 	blne	1a77bac <TADSPEndpoint::$Close(void)>
         236ac:	e1a00004 	mov	r0, r4
         236b0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         236b4:	ea6e514f 	b	1bb7bf8 <TEndpoint::$DestroyBaseEndpoint(void)>
    */
}

/**
 * Symbol: TADSPEndpoint::Timeout(unsigned long)
 * Address: 000236b8
 */
TADSPEndpoint::Timeout(unsigned long) {
    /*
         236b8:	e5900024 	ldr	r0, [r0, #36]	; fField36
         236bc:	ea698b13 	b	1a86310 <TADSPEndpointChunk::$Timeout(unsigned long)>
    */
}

/**
 * Symbol: TADSPEndpoint::IsPending(unsigned long)
 * Address: 000236c0
 */
TADSPEndpoint::IsPending(unsigned long) {
    /*
         236c0:	e5900024 	ldr	r0, [r0, #36]	; fField36
         236c4:	ea697ec9 	b	1a831f0 <TADSPEndpointChunk::$IsPending(unsigned long)>
    */
}

/**
 * Symbol: TADSPEndpoint::ExtractAddress(TOptionArray *)
 * Address: 000236c8
 */
TADSPEndpoint::ExtractAddress(TOptionArray *) {
    /*
         236c8:	e1a0c00d 	mov	ip, sp
         236cc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         236d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         236d4:	e1a04000 	mov	r4, r0
         236d8:	e3a06000 	mov	r6, #0	; 0x0
         236dc:	e3e070a4 	mvn	r7, #164	; 0xa4
         236e0:	e2477b23 	sub	r7, r7, #35840	; 0x8c00
         236e4:	e3310000 	teq	r1, #0	; 0x0
         236e8:	01a00007 	moveq	r0, r7
         236ec:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         236f0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         236f4:	e1a0000d 	mov	r0, sp
         236f8:	eb6e48fe 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         236fc:	e1a0000d 	mov	r0, sp
         23700:	e59f1050 	ldr	r1, [pc, #50]	; 23758 <TADSPEndpoint::ExtractAddress(TOptionArray *)+0x90>
         23704:	eb6e5542 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         23708:	e1b05000 	movs	r5, r0
         2370c:	0a00004f 	beq	23850 <TADSPEndpoint::ExtractAddress(TOptionArray *)+0x188>
         23710:	e5940024 	ldr	r0, [r4, #36]	; fField36
         23714:	e2800018 	add	r0, r0, #24	; 0x18
         23718:	e3a08000 	mov	r8, #0	; 0x0
         2371c:	e5c08001 	strb	r8, [r0, #1]
         23720:	e595000c 	ldr	r0, [r5, #12]
         23724:	e3300002 	teq	r0, #2	; 0x2
         23728:	1a00000b 	bne	2375c <TADSPEndpoint::ExtractAddress(TOptionArray *)+0x94>
         2372c:	e5d53017 	ldrb	r3, [r5, #23]
         23730:	e92d0008 	stmdb	sp!, {r3}
         23734:	e5d53016 	ldrb	r3, [r5, #22]
         23738:	e5952014 	ldr	r2, [r5, #20]	; fField20
         2373c:	e1a02822 	mov	r2, r2, lsr #16
         23740:	e5b51010 	ldr	r1, [r5, #16]!	; fField16
         23744:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         23748:	e2800018 	add	r0, r0, #24	; 0x18
         2374c:	eb6f40a3 	bl	1bf39e0 <TAddress::$SetAddress(unsigned long, unsigned short, unsigned char, unsigned char)>
         23750:	e28dd004 	add	sp, sp, #4	; 0x4
         23754:	ea00003e 	b	23854 <TADSPEndpoint::ExtractAddress(TOptionArray *)+0x18c>
         23758:	726f7574 	rsbvc	r7, pc, #486539264	; 0x1d000000
         2375c:	e3e07eca 	mvn	r7, #3232	; 0xca0
         23760:	e2477902 	sub	r7, r7, #32768	; 0x8000
         23764:	e3300001 	teq	r0, #1	; 0x1
         23768:	1a000038 	bne	23850 <TADSPEndpoint::ExtractAddress(TOptionArray *)+0x188>
         2376c:	e24ddf56 	sub	sp, sp, #344	; 0x158
         23770:	e28d0078 	add	r0, sp, #120	; 0x78
         23774:	eb6f4087 	bl	1bf3998 <TLookupNames::$__ct(void)>
         23778:	e1a0000d 	mov	r0, sp
         2377c:	eb6f4086 	bl	1bf399c <TNBPName::$__ct(void)>
         23780:	e5950014 	ldr	r0, [r5, #20]	; fField20
         23784:	e594102c 	ldr	r1, [r4, #44]	; fField44
         23788:	e1300001 	teq	r0, r1
         2378c:	1a000029 	bne	23838 <TADSPEndpoint::ExtractAddress(TOptionArray *)+0x170>
         23790:	e5950018 	ldr	r0, [r5, #24]	; fField24
         23794:	e3500063 	cmp	r0, #99	; 0x63
         23798:	8a000026 	bhi	23838 <TADSPEndpoint::ExtractAddress(TOptionArray *)+0x170>
         2379c:	e285001c 	add	r0, r5, #28	; 0x1c
         237a0:	e28d2078 	add	r2, sp, #120	; 0x78
         237a4:	e5941024 	ldr	r1, [r4, #36]	; fField36
         237a8:	e3a039c2 	mov	r3, #3178496	; 0x308000
         237ac:	e2833501 	add	r3, r3, #4194304	; 0x400000
         237b0:	e5a120ac 	str	r2, [r1, #172]!
         237b4:	e3a02003 	mov	r2, #3	; 0x3
         237b8:	e5b51014 	ldr	r1, [r5, #20]!	; fField20
         237bc:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         237c0:	e1a01000 	mov	r1, r0
         237c4:	e28d0084 	add	r0, sp, #132	; 0x84
         237c8:	e3a03000 	mov	r3, #0	; 0x0
         237cc:	e3a02001 	mov	r2, #1	; 0x1
         237d0:	eb6f65a4 	bl	1bfce68 <TLookupNames::$LookupNames(unsigned short *, unsigned long, unsigned char, unsigned long, unsigned long, unsigned long)>
         237d4:	e28dd00c 	add	sp, sp, #12	; 0xc
         237d8:	e1b06000 	movs	r6, r0
         237dc:	e5940024 	ldr	r0, [r4, #36]	; fField36
         237e0:	e5a080ac 	str	r8, [r0, #172]!
         237e4:	1a000010 	bne	2382c <TADSPEndpoint::ExtractAddress(TOptionArray *)+0x164>
         237e8:	e1a0100d 	mov	r1, sp
         237ec:	e28d0078 	add	r0, sp, #120	; 0x78
         237f0:	e3a02001 	mov	r2, #1	; 0x1
         237f4:	eb6f406a 	bl	1bf39a4 <TLookupNames::$GetName(TNBPName &, unsigned long)>
         237f8:	e1b06000 	movs	r6, r0
         237fc:	1a00000a 	bne	2382c <TADSPEndpoint::ExtractAddress(TOptionArray *)+0x164>
         23800:	e5dd300b 	ldrb	r3, [sp, #11]
         23804:	e92d0008 	stmdb	sp!, {r3}
         23808:	e5dd300e 	ldrb	r3, [sp, #14]
         2380c:	e59d200c 	ldr	r2, [sp, #12]
         23810:	e1a02822 	mov	r2, r2, lsr #16
         23814:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         23818:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         2381c:	e2800018 	add	r0, r0, #24	; 0x18
         23820:	eb6f406e 	bl	1bf39e0 <TAddress::$SetAddress(unsigned long, unsigned short, unsigned char, unsigned char)>
         23824:	e28dd004 	add	sp, sp, #4	; 0x4
         23828:	ea000003 	b	2383c <TADSPEndpoint::ExtractAddress(TOptionArray *)+0x174>
         2382c:	e286ca03 	add	ip, r6, #12288	; 0x3000
         23830:	e37c000c 	cmn	ip, #12	; 0xc
         23834:	1a000000 	bne	2383c <TADSPEndpoint::ExtractAddress(TOptionArray *)+0x174>
         23838:	e1a06007 	mov	r6, r7
         2383c:	e28d0078 	add	r0, sp, #120	; 0x78
         23840:	e3a01000 	mov	r1, #0	; 0x0
         23844:	eb6f4057 	bl	1bf39a8 <TLookupNames::$__dt(void)>
         23848:	e28ddf56 	add	sp, sp, #344	; 0x158
         2384c:	ea000000 	b	23854 <TADSPEndpoint::ExtractAddress(TOptionArray *)+0x18c>
         23850:	e1a06007 	mov	r6, r7
         23854:	e1a0000d 	mov	r0, sp
         23858:	e3a01000 	mov	r1, #0	; 0x0
         2385c:	eb6e4cb6 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         23860:	e1a00006 	mov	r0, r6
         23864:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::RegisterAddress(TOptionArray *)
 * Address: 00023868
 */
TADSPEndpoint::RegisterAddress(TOptionArray *) {
    /*
         23868:	e1a0c00d 	mov	ip, sp
         2386c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         23870:	e24cb004 	sub	fp, ip, #4	; 0x4
         23874:	e1a04000 	mov	r4, r0
         23878:	e3e050a4 	mvn	r5, #164	; 0xa4
         2387c:	e2455b23 	sub	r5, r5, #35840	; 0x8c00
         23880:	e3310000 	teq	r1, #0	; 0x0
         23884:	01a00005 	moveq	r0, r5
         23888:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         2388c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         23890:	e1a0000d 	mov	r0, sp
         23894:	eb6e4897 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         23898:	e1a0000d 	mov	r0, sp
         2389c:	e59f1038 	ldr	r1, [pc, #38]	; 238dc <TADSPEndpoint::RegisterAddress(TOptionArray *)+0x74>
         238a0:	eb6e54db 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         238a4:	e3300000 	teq	r0, #0	; 0x0
         238a8:	0a000006 	beq	238c8 <TADSPEndpoint::RegisterAddress(TOptionArray *)+0x60>
         238ac:	e590100c 	ldr	r1, [r0, #12]
         238b0:	e3310001 	teq	r1, #1	; 0x1
         238b4:	1a000003 	bne	238c8 <TADSPEndpoint::RegisterAddress(TOptionArray *)+0x60>
         238b8:	e280101c 	add	r1, r0, #28	; 0x1c
         238bc:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         238c0:	eb69867c 	bl	1a852b8 <TADSPEndpointChunk::$RegisterNBPName(unsigned short *)>
         238c4:	e1a05000 	mov	r5, r0
         238c8:	e1a0000d 	mov	r0, sp
         238cc:	e3a01000 	mov	r1, #0	; 0x0
         238d0:	eb6e4c99 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         238d4:	e1a00005 	mov	r0, r5
         238d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         238dc:	726f7574 	rsbvc	r7, pc, #486539264	; 0x1d000000
    */
}

/**
 * Symbol: TADSPEndpoint::DoAttnRecv(TAppleTalkMessage *)
 * Address: 000238e0
 */
TADSPEndpoint::DoAttnRecv(TAppleTalkMessage *) {
    /*
         238e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPEndpoint::DoUpdateConnection(TAppleTalkMessage *)
 * Address: 000238e4
 */
TADSPEndpoint::DoUpdateConnection(TAppleTalkMessage *) {
    /*
         238e4:	e5900024 	ldr	r0, [r0, #36]	; fField36
         238e8:	ea698a8f 	b	1a8632c <TADSPEndpointChunk::$UpdateClient(TUpdateConnection *)>
    */
}

/**
 * Symbol: TADSPEndpoint::DoCloseConnection(TAppleTalkMessage *)
 * Address: 000238ec
 */
TADSPEndpoint::DoCloseConnection(TAppleTalkMessage *) {
    /*
         238ec:	e1a0c00d 	mov	ip, sp
         238f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         238f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         238f8:	e1a05000 	mov	r5, r0
         238fc:	e3a00002 	mov	r0, #2	; 0x2
         23900:	e5850010 	str	r0, [r5, #16]	; fField16
         23904:	e1a00005 	mov	r0, r5
         23908:	e3a01002 	mov	r1, #2	; 0x2
         2390c:	eb697e36 	bl	1a831ec <TADSPEndpoint::$IsPending(unsigned long)>
         23910:	e3a04f66 	mov	r4, #408	; 0x198
         23914:	e2444b0d 	sub	r4, r4, #13312	; 0x3400
         23918:	e3300000 	teq	r0, #0	; 0x0
         2391c:	0a000004 	beq	23934 <TADSPEndpoint::DoCloseConnection(TAppleTalkMessage *)+0x48>
         23920:	e3a03000 	mov	r3, #0	; 0x0
         23924:	e1a02004 	mov	r2, r4
         23928:	e3a01000 	mov	r1, #0	; 0x0
         2392c:	e5950024 	ldr	r0, [r5, #36]	; fField36
         23930:	eb6975e4 	bl	1a810c8 <TADSPEndpointChunk::$Abort(unsigned char, long, unsigned char)>
         23934:	e5950024 	ldr	r0, [r5, #36]	; fField36
         23938:	e5d010a4 	ldrb	r1, [r0, #164]
         2393c:	e3310000 	teq	r1, #0	; 0x0
         23940:	1b697a08 	blne	1a82168 <TADSPEndpointChunk::$DeRegisterNBPName(void)>
         23944:	e1a00005 	mov	r0, r5
         23948:	e3a01001 	mov	r1, #1	; 0x1
         2394c:	eb697e26 	bl	1a831ec <TADSPEndpoint::$IsPending(unsigned long)>
         23950:	e3300000 	teq	r0, #0	; 0x0
         23954:	0a000007 	beq	23978 <TADSPEndpoint::DoCloseConnection(TAppleTalkMessage *)+0x8c>
         23958:	e3a00001 	mov	r0, #1	; 0x1
         2395c:	e5951024 	ldr	r1, [r5, #36]	; fField36
         23960:	e5c100bb 	strb	r0, [r1, #187]
         23964:	e5950024 	ldr	r0, [r5, #36]	; fField36
         23968:	e5a040b0 	str	r4, [r0, #176]!
         2396c:	e5b50014 	ldr	r0, [r5, #20]!	; fField20
         23970:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         23974:	ea6792b4 	b	1a0844c <TEndpointEventHandler::$Unblock(void)>
         23978:	e5950018 	ldr	r0, [r5, #24]	; fField24
         2397c:	e3300000 	teq	r0, #0	; 0x0
         23980:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         23984:	e24dd030 	sub	sp, sp, #48	; 0x30
         23988:	e3a0002c 	mov	r0, #44	; 0x2c
         2398c:	e58d002c 	str	r0, [sp, #44]	; fField44
         23990:	e1a0000d 	mov	r0, sp
         23994:	e1a01004 	mov	r1, r4
         23998:	e5952018 	ldr	r2, [r5, #24]	; fField24
         2399c:	eb6e4c5a 	bl	1bb6b0c <TDisconnectEvent::$__ct(long, unsigned long)>
         239a0:	e1a0300d 	mov	r3, sp
         239a4:	e28d202c 	add	r2, sp, #44	; 0x2c
         239a8:	e5b5c018 	ldr	ip, [r5, #24]!	; fField24
         239ac:	e1a0000c 	mov	r0, ip
         239b0:	e3a01000 	mov	r1, #0	; 0x0
         239b4:	e59cc000 	ldr	ip, [ip]
         239b8:	e1a0e00f 	mov	lr, pc
         239bc:	e28cf008 	add	pc, ip, #8	; 0x8
         239c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::PrepOpenConnection(TOpenConnection *, TOptionArray *, long)
 * Address: 000239c4
 */
TADSPEndpoint::PrepOpenConnection(TOpenConnection *, TOptionArray *, long) {
    /*
         239c4:	e1a0c00d 	mov	ip, sp
         239c8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         239cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         239d0:	e1a05000 	mov	r5, r0
         239d4:	e1a04001 	mov	r4, r1
         239d8:	e1a06003 	mov	r6, r3
         239dc:	e3a07000 	mov	r7, #0	; 0x0
         239e0:	e3320000 	teq	r2, #0	; 0x0
         239e4:	0a000004 	beq	239fc <TADSPEndpoint::PrepOpenConnection(TOpenConnection *, TOptionArray *, long)+0x38>
         239e8:	e1a01002 	mov	r1, r2
         239ec:	e5950024 	ldr	r0, [r5, #36]	; fField36
         239f0:	eb697df0 	bl	1a831b8 <TADSPEndpointChunk::$InitBuffers(TOptionArray *)>
         239f4:	e1b07000 	movs	r7, r0
         239f8:	1a00002d 	bne	23ab4 <TADSPEndpoint::PrepOpenConnection(TOpenConnection *, TOptionArray *, long)+0xf0>
         239fc:	e59f00b8 	ldr	r0, [pc, #b8]	; 23abc <TADSPEndpoint::PrepOpenConnection(TOpenConnection *, TOptionArray *, long)+0xf8>
         23a00:	e5840000 	str	r0, [r4]
         23a04:	e59f00b4 	ldr	r0, [pc, #b4]	; 23ac0 <TADSPEndpoint::PrepOpenConnection(TOpenConnection *, TOptionArray *, long)+0xfc>
         23a08:	e5840004 	str	r0, [r4, #4]
         23a0c:	e5950014 	ldr	r0, [r5, #20]	; fField20
         23a10:	e584000c 	str	r0, [r4, #12]
         23a14:	e3a00002 	mov	r0, #2	; 0x2
         23a18:	e2800b02 	add	r0, r0, #2048	; 0x800
         23a1c:	e2844010 	add	r4, r4, #16	; 0x10
         23a20:	e8840041 	stmia	r4, {r0, r6}
         23a24:	e2444010 	sub	r4, r4, #16	; 0x10
         23a28:	e2846018 	add	r6, r4, #24	; 0x18
         23a2c:	eb6ebfe8 	bl	1bd39d4 <$GetGlobals>
         23a30:	eb6f1281 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         23a34:	e5901000 	ldr	r1, [r0]
         23a38:	e1a00006 	mov	r0, r6
         23a3c:	eb6eb381 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         23a40:	e5950024 	ldr	r0, [r5, #36]	; fField36
         23a44:	e5900014 	ldr	r0, [r0, #20]	; fField20
         23a48:	e3a06000 	mov	r6, #0	; 0x0
         23a4c:	e2844020 	add	r4, r4, #32	; 0x20
         23a50:	e8840041 	stmia	r4, {r0, r6}
         23a54:	e2444020 	sub	r4, r4, #32	; 0x20
         23a58:	e5950024 	ldr	r0, [r5, #36]	; fField36
         23a5c:	e2801018 	add	r1, r0, #24	; 0x18
         23a60:	e2840028 	add	r0, r4, #40	; 0x28
         23a64:	eb6f3fd1 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         23a68:	e3a03000 	mov	r3, #0	; 0x0
         23a6c:	e92d0008 	stmdb	sp!, {r3}
         23a70:	e2840034 	add	r0, r4, #52	; 0x34
         23a74:	e3a02000 	mov	r2, #0	; 0x0
         23a78:	e3a01000 	mov	r1, #0	; 0x0
         23a7c:	eb6f3fd7 	bl	1bf39e0 <TAddress::$SetAddress(unsigned long, unsigned short, unsigned char, unsigned char)>
         23a80:	e28dd004 	add	sp, sp, #4	; 0x4
         23a84:	e5c46040 	strb	r6, [r4, #64]
         23a88:	e5950024 	ldr	r0, [r5, #36]	; fField36
         23a8c:	e2800f76 	add	r0, r0, #472	; 0x1d8
         23a90:	e5840048 	str	r0, [r4, #72]
         23a94:	e5846044 	str	r6, [r4, #68]
         23a98:	e5b50024 	ldr	r0, [r5, #36]!	; fField36
         23a9c:	e2800f5e 	add	r0, r0, #376	; 0x178
         23aa0:	e584004c 	str	r0, [r4, #76]
         23aa4:	e5846060 	str	r6, [r4, #96]
         23aa8:	e5846058 	str	r6, [r4, #88]
         23aac:	e5846064 	str	r6, [r4, #100]
         23ab0:	e5a4605c 	str	r6, [r4, #92]!
         23ab4:	e1a00007 	mov	r0, r7
         23ab8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         23abc:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         23ac0:	61647370 	cmnvs	r4, r0, ror r3
    */
}

/**
 * Symbol: TADSPEndpoint::OpenConnectionComplete(TOpenConnectionReply *)
 * Address: 00023ac4
 */
TADSPEndpoint::OpenConnectionComplete(TOpenConnectionReply *) {
    /*
         23ac4:	e1a0c00d 	mov	ip, sp
         23ac8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         23acc:	e24cb004 	sub	fp, ip, #4	; 0x4
         23ad0:	e1a04000 	mov	r4, r0
         23ad4:	e1a05001 	mov	r5, r1
         23ad8:	e5917008 	ldr	r7, [r1, #8]	; fField8
         23adc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         23ae0:	e3300003 	teq	r0, #3	; 0x3
         23ae4:	03e06006 	mvneq	r6, #6	; 0x6
         23ae8:	0a000002 	beq	23af8 <TADSPEndpoint::OpenConnectionComplete(TOpenConnectionReply *)+0x34>
         23aec:	e3300009 	teq	r0, #9	; 0x9
         23af0:	13e06005 	mvnne	r6, #5	; 0x5
         23af4:	03e06004 	mvneq	r6, #4	; 0x4
         23af8:	e3370000 	teq	r7, #0	; 0x0
         23afc:	1a00000f 	bne	23b40 <TADSPEndpoint::OpenConnectionComplete(TOpenConnectionReply *)+0x7c>
         23b00:	e5951014 	ldr	r1, [r5, #20]	; fField20
         23b04:	e5940024 	ldr	r0, [r4, #36]	; fField36
         23b08:	e5a01014 	str	r1, [r0, #20]!	; fField20
         23b0c:	e5951014 	ldr	r1, [r5, #20]	; fField20
         23b10:	e5940024 	ldr	r0, [r4, #36]	; fField36
         23b14:	e5a01164 	str	r1, [r0, #356]!
         23b18:	e285101c 	add	r1, r5, #28	; 0x1c
         23b1c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         23b20:	e2800018 	add	r0, r0, #24	; 0x18
         23b24:	eb6f3fa1 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         23b28:	e3760007 	cmn	r6, #7	; 0x7
         23b2c:	13760006 	cmnne	r6, #6	; 0x6
         23b30:	03a00005 	moveq	r0, #5	; 0x5
         23b34:	13a00004 	movne	r0, #4	; 0x4
         23b38:	e5840010 	str	r0, [r4, #16]	; fField16
         23b3c:	ea000004 	b	23b54 <TADSPEndpoint::OpenConnectionComplete(TOpenConnectionReply *)+0x90>
         23b40:	e5940028 	ldr	r0, [r4, #40]	; fField40
         23b44:	e3760005 	cmn	r6, #5	; 0x5
         23b48:	e5840010 	str	r0, [r4, #16]	; fField16
         23b4c:	05940024 	ldreq	r0, [r4, #36]	; fField36
         23b50:	0b697984 	bleq	1a82168 <TADSPEndpointChunk::$DeRegisterNBPName(void)>
         23b54:	e5940024 	ldr	r0, [r4, #36]	; fField36
         23b58:	e5d000b7 	ldrb	r0, [r0, #183]
         23b5c:	e3300000 	teq	r0, #0	; 0x0
         23b60:	01a01005 	moveq	r1, r5
         23b64:	05940014 	ldreq	r0, [r4, #20]	; fField20
         23b68:	0b67922b 	bleq	1a0841c <TEndpointEventHandler::$KillTimer(unsigned long)>
         23b6c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         23b70:	e5d010b7 	ldrb	r1, [r0, #183]
         23b74:	e3310000 	teq	r1, #0	; 0x0
         23b78:	0a000003 	beq	23b8c <TADSPEndpoint::OpenConnectionComplete(TOpenConnectionReply *)+0xc8>
         23b7c:	e5a070b0 	str	r7, [r0, #176]!
         23b80:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         23b84:	eb679230 	bl	1a0844c <TEndpointEventHandler::$Unblock(void)>
         23b88:	ea000012 	b	23bd8 <TADSPEndpoint::OpenConnectionComplete(TOpenConnectionReply *)+0x114>
         23b8c:	e5942018 	ldr	r2, [r4, #24]	; fField24
         23b90:	e3320000 	teq	r2, #0	; 0x0
         23b94:	0a00000f 	beq	23bd8 <TADSPEndpoint::OpenConnectionComplete(TOpenConnectionReply *)+0x114>
         23b98:	e24dd034 	sub	sp, sp, #52	; 0x34
         23b9c:	e1a03006 	mov	r3, r6
         23ba0:	e1a01007 	mov	r1, r7
         23ba4:	e28d0004 	add	r0, sp, #4	; 0x4
         23ba8:	eb6785c9 	bl	1a052d4 <TConnectCompleteEvent::$__ct(long, unsigned long, long)>
         23bac:	e3a00030 	mov	r0, #48	; 0x30
         23bb0:	e58d0000 	str	r0, [sp]
         23bb4:	e28d3004 	add	r3, sp, #4	; 0x4
         23bb8:	e1a0200d 	mov	r2, sp
         23bbc:	e5b4c018 	ldr	ip, [r4, #24]!	; fField24
         23bc0:	e1a0000c 	mov	r0, ip
         23bc4:	e3a01000 	mov	r1, #0	; 0x0
         23bc8:	e59cc000 	ldr	ip, [ip]
         23bcc:	e1a0e00f 	mov	lr, pc
         23bd0:	e28cf008 	add	pc, ip, #8	; 0x8
         23bd4:	e28dd034 	add	sp, sp, #52	; 0x34
         23bd8:	e1a00007 	mov	r0, r7
         23bdc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::DoUpdateComplete(TAppleTalkMessage *)
 * Address: 00023be0
 */
TADSPEndpoint::DoUpdateComplete(TAppleTalkMessage *) {
    /*
         23be0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPEndpoint::HandleEvent(unsigned long, TAEvent *, unsigned long)
 * Address: 00023be4
 */
TADSPEndpoint::HandleEvent(unsigned long, TAEvent *, unsigned long) {
    /*
         23be4:	e1a0c00d 	mov	ip, sp
         23be8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         23bec:	e24cb004 	sub	fp, ip, #4	; 0x4
         23bf0:	e1a01002 	mov	r1, r2
         23bf4:	e5922010 	ldr	r2, [r2, #16]	; fField16
         23bf8:	e3320b02 	teq	r2, #2048	; 0x800
         23bfc:	0a000008 	beq	23c24 <TADSPEndpoint::HandleEvent(unsigned long, TAEvent *, unsigned long)+0x40>
         23c00:	e242cb02 	sub	ip, r2, #2048	; 0x800
         23c04:	e33c0001 	teq	ip, #1	; 0x1
         23c08:	0a000003 	beq	23c1c <TADSPEndpoint::HandleEvent(unsigned long, TAEvent *, unsigned long)+0x38>
         23c0c:	e242cb02 	sub	ip, r2, #2048	; 0x800
         23c10:	e33c0004 	teq	ip, #4	; 0x4
         23c14:	0b695820 	bleq	1a79c9c <TADSPEndpoint::$DoUpdateConnection(TAppleTalkMessage *)>
         23c18:	ea000002 	b	23c28 <TADSPEndpoint::HandleEvent(unsigned long, TAEvent *, unsigned long)+0x44>
         23c1c:	eb69540c 	bl	1a78c54 <TADSPEndpoint::$DoCloseConnection(TAppleTalkMessage *)>
         23c20:	ea000000 	b	23c28 <TADSPEndpoint::HandleEvent(unsigned long, TAEvent *, unsigned long)+0x44>
         23c24:	eb695408 	bl	1a78c4c <TADSPEndpoint::$DoAttnRecv(TAppleTalkMessage *)>
         23c28:	e3a00000 	mov	r0, #0	; 0x0
         23c2c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::DoSendAttnComplete(TAppleTalkMessage *)
 * Address: 00023c30
 */
TADSPEndpoint::DoSendAttnComplete(TAppleTalkMessage *) {
    /*
         23c30:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPEndpoint::CloseConnectionComplete(TOpenConnectionReply *)
 * Address: 00023c34
 */
TADSPEndpoint::CloseConnectionComplete(TOpenConnectionReply *) {
    /*
         23c34:	e1a0c00d 	mov	ip, sp
         23c38:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         23c3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         23c40:	e1a04000 	mov	r4, r0
         23c44:	e1b05001 	movs	r5, r1
         23c48:	03a06000 	moveq	r6, #0	; 0x0
         23c4c:	15956008 	ldrne	r6, [r5, #8]	; fField8
         23c50:	e3360000 	teq	r6, #0	; 0x0
         23c54:	1a000004 	bne	23c6c <TADSPEndpoint::CloseConnectionComplete(TOpenConnectionReply *)+0x38>
         23c58:	e3a00002 	mov	r0, #2	; 0x2
         23c5c:	e5840010 	str	r0, [r4, #16]	; fField16
         23c60:	e5940024 	ldr	r0, [r4, #36]	; fField36
         23c64:	eb69793f 	bl	1a82168 <TADSPEndpointChunk::$DeRegisterNBPName(void)>
         23c68:	ea000001 	b	23c74 <TADSPEndpoint::CloseConnectionComplete(TOpenConnectionReply *)+0x40>
         23c6c:	e5940028 	ldr	r0, [r4, #40]	; fField40
         23c70:	e5840010 	str	r0, [r4, #16]	; fField16
         23c74:	e5940024 	ldr	r0, [r4, #36]	; fField36
         23c78:	e5d000b7 	ldrb	r0, [r0, #183]
         23c7c:	e3300000 	teq	r0, #0	; 0x0
         23c80:	01a01005 	moveq	r1, r5
         23c84:	05940014 	ldreq	r0, [r4, #20]	; fField20
         23c88:	0b6791e3 	bleq	1a0841c <TEndpointEventHandler::$KillTimer(unsigned long)>
         23c8c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         23c90:	e5d010b7 	ldrb	r1, [r0, #183]
         23c94:	e3310000 	teq	r1, #0	; 0x0
         23c98:	0a000003 	beq	23cac <TADSPEndpoint::CloseConnectionComplete(TOpenConnectionReply *)+0x78>
         23c9c:	e5a060b0 	str	r6, [r0, #176]!
         23ca0:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         23ca4:	eb6791e8 	bl	1a0844c <TEndpointEventHandler::$Unblock(void)>
         23ca8:	ea00001c 	b	23d20 <TADSPEndpoint::CloseConnectionComplete(TOpenConnectionReply *)+0xec>
         23cac:	e5942018 	ldr	r2, [r4, #24]	; fField24
         23cb0:	e3320000 	teq	r2, #0	; 0x0
         23cb4:	0a000019 	beq	23d20 <TADSPEndpoint::CloseConnectionComplete(TOpenConnectionReply *)+0xec>
         23cb8:	e24dd050 	sub	sp, sp, #80	; 0x50
         23cbc:	e1a01006 	mov	r1, r6
         23cc0:	e28d002c 	add	r0, sp, #44	; 0x2c
         23cc4:	e3e03007 	mvn	r3, #7	; 0x7
         23cc8:	eb678573 	bl	1a0529c <TEndpointEvent::$__ct(long, unsigned long, long)>
         23ccc:	e1a01006 	mov	r1, r6
         23cd0:	e1a0000d 	mov	r0, sp
         23cd4:	e5942018 	ldr	r2, [r4, #24]	; fField24
         23cd8:	eb6e4b8b 	bl	1bb6b0c <TDisconnectEvent::$__ct(long, unsigned long)>
         23cdc:	e3e00008 	mvn	r0, #8	; 0x8
         23ce0:	e58d0010 	str	r0, [sp, #16]	; fField16
         23ce4:	e5940028 	ldr	r0, [r4, #40]	; fField40
         23ce8:	e3300006 	teq	r0, #6	; 0x6
         23cec:	11a0300d 	movne	r3, sp
         23cf0:	13a0002c 	movne	r0, #44	; 0x2c
         23cf4:	028d302c 	addeq	r3, sp, #44	; 0x2c
         23cf8:	03a00020 	moveq	r0, #32	; 0x20
         23cfc:	e58d004c 	str	r0, [sp, #76]
         23d00:	e28d204c 	add	r2, sp, #76	; 0x4c
         23d04:	e5b4c018 	ldr	ip, [r4, #24]!	; fField24
         23d08:	e1a0000c 	mov	r0, ip
         23d0c:	e3a01000 	mov	r1, #0	; 0x0
         23d10:	e59cc000 	ldr	ip, [ip]
         23d14:	e1a0e00f 	mov	lr, pc
         23d18:	e28cf008 	add	pc, ip, #8	; 0x8
         23d1c:	e28dd050 	add	sp, sp, #80	; 0x50
         23d20:	e1a00006 	mov	r0, r6
         23d24:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 000243f4
 */
TADSPEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         243f4:	e1a0c00d 	mov	ip, sp
         243f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         243fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         24400:	e1b01003 	movs	r1, r3
         24404:	e3a02001 	mov	r2, #1	; 0x1
         24408:	e2822b02 	add	r2, r2, #2048	; 0x800
         2440c:	01a03002 	moveq	r3, r2
         24410:	15913010 	ldrne	r3, [r1, #16]	; fField16
         24414:	e3a04000 	mov	r4, #0	; 0x0
         24418:	e590c024 	ldr	ip, [r0, #36]	; fField36
         2441c:	e5cc40b8 	strb	r4, [ip, #184]
         24420:	e1330002 	teq	r3, r2
         24424:	0a000009 	beq	24450 <TADSPEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x5c>
         24428:	e243cb02 	sub	ip, r3, #2048	; 0x800
         2442c:	e33c0002 	teq	ip, #2	; 0x2
         24430:	0a000008 	beq	24458 <TADSPEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x64>
         24434:	e243cb02 	sub	ip, r3, #2048	; 0x800
         24438:	e33c0003 	teq	ip, #3	; 0x3
         2443c:	0a000007 	beq	24460 <TADSPEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x6c>
         24440:	e243cb02 	sub	ip, r3, #2048	; 0x800
         24444:	e33c0004 	teq	ip, #4	; 0x4
         24448:	0b695612 	bleq	1a79c98 <TADSPEndpoint::$DoUpdateComplete(TAppleTalkMessage *)>
         2444c:	ea000004 	b	24464 <TADSPEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x70>
         24450:	eb697731 	bl	1a8211c <TADSPEndpoint::$CloseConnectionComplete(TOpenConnectionReply *)>
         24454:	ea000002 	b	24464 <TADSPEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x70>
         24458:	eb697f82 	bl	1a84268 <TADSPEndpoint::$OpenConnectionComplete(TOpenConnectionReply *)>
         2445c:	ea000000 	b	24464 <TADSPEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x70>
         24460:	eb69560b 	bl	1a79c94 <TADSPEndpoint::$DoSendAttnComplete(TAppleTalkMessage *)>
         24464:	e1a00004 	mov	r0, r4
         24468:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpoint::AddToAppWorld(void)
 * Address: 00024cac
 */
TADSPEndpoint::AddToAppWorld(void) {
    /*
         24cac:	e3e000b1 	mvn	r0, #177	; 0xb1
         24cb0:	e2400b23 	sub	r0, r0, #35840	; 0x8c00
         24cb4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPEndpoint::RemoveFromAppWorld(void)
 * Address: 00025158
 */
TADSPEndpoint::RemoveFromAppWorld(void) {
    /*
         25158:	e3e000b1 	mvn	r0, #177	; 0xb1
         2515c:	e2400b23 	sub	r0, r0, #35840	; 0x8c00
         25160:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPEndpoint::Open(unsigned long)
 * Address: 00025164
 */
TADSPEndpoint::Open(unsigned long) {
    /*
         25164:	e1a0c00d 	mov	ip, sp
         25168:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         2516c:	e24cb004 	sub	fp, ip, #4	; 0x4
         25170:	e1a04000 	mov	r4, r0
         25174:	e1a05001 	mov	r5, r1
         25178:	e5900010 	ldr	r0, [r0, #16]	; fField16
         2517c:	e3300000 	teq	r0, #0	; 0x0
         25180:	13e000a5 	mvnne	r0, #165	; 0xa5
         25184:	12400b23 	subne	r0, r0, #35840	; 0x8c00
         25188:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         2518c:	e3a00000 	mov	r0, #0	; 0x0
         25190:	eb6935e6 	bl	1a72930 <TADSPEndpointChunk::$__ct(void)>
         25194:	e5840024 	str	r0, [r4, #36]	; fField36
         25198:	e3300000 	teq	r0, #0	; 0x0
         2519c:	03e000a7 	mvneq	r0, #167	; 0xa7
         251a0:	02400b23 	subeq	r0, r0, #35840	; 0x8c00
         251a4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         251a8:	e1a03005 	mov	r3, r5
         251ac:	e5942014 	ldr	r2, [r4, #20]	; fField20
         251b0:	e1a01004 	mov	r1, r4
         251b4:	eb697806 	bl	1a831d4 <TADSPEndpointChunk::$Init(TADSPEndpoint *, TEndpointEventHandler *, unsigned long)>
         251b8:	e3300000 	teq	r0, #0	; 0x0
         251bc:	03a01001 	moveq	r1, #1	; 0x1
         251c0:	05a41010 	streq	r1, [r4, #16]!	; fField16
         251c4:	05a45008 	streq	r5, [r4, #8]!	; fField8
         251c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__13TADSPEndpointSFv
 * Address: 00385344
 */
void TADSPEndpoint::ClassInfo() {
    /*
        385344:	e24f0044 	sub	r0, pc, #68	; 0x44
        385348:	e1a0f00e 	mov	pc, lr
        38534c:	e3a00000 	mov	r0, #0	; 0x0
        385350:	e1a0f00e 	mov	pc, lr
        385354:	54414453 	strplb	r4, [r1], -#1107
        385358:	50456e64 	subpl	r6, r5, r4, ror #28
        38535c:	706f696e 	rsbvc	r6, pc, lr, ror #18
        385360:	74005445 	strvc	r5, [r0], -#1093	; fField1093
        385364:	6e64706f 	cdpvs	0, 6, cr7, cr4, cr15, {3}
        385368:	696e7400 	stmvsdb	lr!, {sl, ip, sp, lr}^
        385374:	eafffff2 	b	385344 <ClassInfo__13TADSPEndpointSFv>
        385378:	ea5bdeb9 	b	1a7ce64 <TADSPEndpoint::$New(void)>
        38537c:	ea5bce28 	b	1a78c24 <TADSPEndpoint::$Delete(void)>
        385380:	ea5bd678 	b	1a7ad68 <TADSPEndpoint::$HandleEvent(unsigned long, TAEvent *, unsigned long)>
        385384:	ea5bd676 	b	1a7ad64 <TADSPEndpoint::$HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)>
        385388:	ea5bef54 	b	1a810e0 <TADSPEndpoint::$AddToAppWorld(void)>
        38538c:	ea5bffcf 	b	1a852d0 <TADSPEndpoint::$RemoveFromAppWorld(void)>
        385390:	ea5be2bd 	b	1a7de8c <TADSPEndpoint::$Open(unsigned long)>
        385394:	ea5bca04 	b	1a77bac <TADSPEndpoint::$Close(void)>
        385398:	ea5bbd9a 	b	1a74a08 <TADSPEndpoint::$Abort(void)>
        38539c:	ea5beb07 	b	1a7ffc0 <TADSPEndpoint::$SetSync(unsigned char)>
        3853a0:	ea5bd65e 	b	1a7ad20 <TADSPEndpoint::$GetProtAddr(TOptionArray *, TOptionArray *, unsigned long)>
        3853a4:	ea5be2c0 	b	1a7deac <TADSPEndpoint::$OptMgmt(unsigned long, TOptionArray *, unsigned long)>
        3853a8:	ea5bc5eb 	b	1a76b5c <TADSPEndpoint::$Bind(TOptionArray *, long *, unsigned long)>
        3853ac:	ea5beb28 	b	1a80054 <TADSPEndpoint::$UnBind(unsigned long)>
        3853b0:	ea5bde98 	b	1a7ce18 <TADSPEndpoint::$Listen(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)>
        3853b4:	ea5bbd95 	b	1a74a10 <TADSPEndpoint::$Accept(TEndpoint *, TOptionArray *, TOptionArray *, CBufferSegment *, long, unsigned long)>
        3853b8:	ea5bca0c 	b	1a77bf0 <TADSPEndpoint::$Connect(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)>
        3853bc:	ea5bce21 	b	1a78c48 <TADSPEndpoint::$Disconnect(CBufferSegment *, long, long)>
        3853c0:	ea5be6d5 	b	1a7ef1c <TADSPEndpoint::$Release(unsigned long)>
        3853c4:	ea5beb0a 	b	1a7fff4 <TADSPEndpoint::$Snd(unsigned char *, long &, unsigned long, unsigned long)>
        3853c8:	ea5be2c2 	b	1a7ded8 <TADSPEndpoint::$Rcv(unsigned char *, long &, long, unsigned long *, unsigned long)>
        3853cc:	ea5beb07 	b	1a7fff0 <TADSPEndpoint::$Snd(CBufferSegment *, unsigned long, unsigned long)>
        3853d0:	ea5be2bf 	b	1a7ded4 <TADSPEndpoint::$Rcv(CBufferSegment *, long, unsigned long *, unsigned long)>
        3853d4:	ea5beb25 	b	1a80070 <TADSPEndpoint::$WaitForEvent(unsigned long)>
        3853d8:	ea5c07f0 	b	1a873a0 <TADSPEndpoint::$nBind(TOptionArray *, unsigned long, unsigned char)>
        3853dc:	ea5c07f2 	b	1a873ac <TADSPEndpoint::$nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
        3853e0:	ea5c07ed 	b	1a8739c <TADSPEndpoint::$nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)>
        3853e4:	ea5c07ee 	b	1a873a4 <TADSPEndpoint::$nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
        3853e8:	ea5c07f3 	b	1a873bc <TADSPEndpoint::$nRelease(unsigned long, unsigned char)>
        3853ec:	ea5c07ed 	b	1a873a8 <TADSPEndpoint::$nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)>
        3853f0:	ea5c07f4 	b	1a873c8 <TADSPEndpoint::$nUnBind(unsigned long, unsigned char)>
        3853f4:	ea5c07ed 	b	1a873b0 <TADSPEndpoint::$nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)>
        3853f8:	ea5c07f1 	b	1a873c4 <TADSPEndpoint::$nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        3853fc:	ea5c07ed 	b	1a873b8 <TADSPEndpoint::$nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        385400:	ea5c07ee 	b	1a873c0 <TADSPEndpoint::$nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        385404:	ea5c07ea 	b	1a873b4 <TADSPEndpoint::$nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        385408:	ea5c07e2 	b	1a87398 <TADSPEndpoint::$nAbort(unsigned char)>
        38540c:	ea5c03be 	b	1a8630c <TADSPEndpoint::$Timeout(unsigned long)>
        385410:	ea5bf775 	b	1a831ec <TADSPEndpoint::$IsPending(unsigned long)>
        385414:	e1a0000f 	mov	r0, pc
        385418:	e1a0f00e 	mov	pc, lr
        38541c:	504c696e 	subpl	r6, ip, lr, ror #18
        385420:	6b000000 	blvs	385428 <New__5PLinkSFPc+0x4>
    */
}

