#include "include/TLookupNames.h"

/**
 * Symbol: TLookupNames::__ct(void)
 * Address: 00126354
 */
TLookupNames::TLookupNames(void) {
    /*
        126354:	e1a0c00d 	mov	ip, sp
        126358:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12635c:	e24cb004 	sub	fp, ip, #4	; 0x4
        126360:	e1b04000 	movs	r4, r0
        126364:	1a000003 	bne	126378 <TLookupNames::__ct(void)+0x24>
        126368:	e3a000e0 	mov	r0, #224	; 0xe0
        12636c:	eb6aa0f1 	bl	1bce738 <$__nw(unsigned int)>
        126370:	e1b04000 	movs	r4, r0
        126374:	0a000011 	beq	1263c0 <TLookupNames::__ct(void)+0x6c>
        126378:	e3a05000 	mov	r5, #0	; 0x0
        12637c:	e5c45010 	strb	r5, [r4, #16]	; fField16
        126380:	e584500c 	str	r5, [r4, #12]	; fField12
        126384:	e2840014 	add	r0, r4, #20	; 0x14
        126388:	eb65315c 	bl	1a72900 <TNBPReplyBuffer::$__ct(void)>
        12638c:	e2840074 	add	r0, r4, #116	; 0x74
        126390:	eb652d41 	bl	1a7189c <TAsyncEvent::$__ct(void)>
        126394:	e2840090 	add	r0, r4, #144	; 0x90
        126398:	eb6b3585 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        12639c:	e28400b4 	add	r0, r4, #180	; 0xb4
        1263a0:	eb6af388 	bl	1be31c8 <CRingBuffer::$__ct(void)>
        1263a4:	e59f001c 	ldr	r0, [pc, #1c]	; 1263c8 <TLookupNames::__ct(void)+0x74>
        1263a8:	e5840000 	str	r0, [r4]
        1263ac:	e5c45009 	strb	r5, [r4, #9]	; fField9
        1263b0:	e5c4500a 	strb	r5, [r4, #10]	; fField10
        1263b4:	e58450dc 	str	r5, [r4, #220]	; fField220
        1263b8:	e5845004 	str	r5, [r4, #4]	; fField4
        1263bc:	e5c450d9 	strb	r5, [r4, #217]	; fField217
        1263c0:	e1a00004 	mov	r0, r4
        1263c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1263c8:	0001bd10 	andeq	fp, r1, r0, lsl sp
    */
}

/**
 * Symbol: TLookupNames::__dt(void)
 * Address: 001263cc
 */
TLookupNames::~TLookupNames(void) {
    /*
        1263cc:	e1a0c00d 	mov	ip, sp
        1263d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1263d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1263d8:	e1a04000 	mov	r4, r0
        1263dc:	e1a05001 	mov	r5, r1
        1263e0:	e59f0068 	ldr	r0, [pc, #68]	; 126450 <TLookupNames::__dt(void)+0x84>
        1263e4:	e5840000 	str	r0, [r4]
        1263e8:	e1a00004 	mov	r0, r4
        1263ec:	eb6545ed 	bl	1a77ba8 <TLookupNames::$Close(void)>
        1263f0:	e1a00004 	mov	r0, r4
        1263f4:	eb6562cd 	bl	1a7ef30 <TLookupNames::$RemoveEventHandler(void)>
        1263f8:	e1a00004 	mov	r0, r4
        1263fc:	eb6562cf 	bl	1a7ef40 <TLookupNames::$Reset(void)>
        126400:	e28400b4 	add	r0, r4, #180	; 0xb4
        126404:	e3a01000 	mov	r1, #0	; 0x0
        126408:	eb6af792 	bl	1be4258 <CRingBuffer::$__dt(void)>
        12640c:	e2840090 	add	r0, r4, #144	; 0x90
        126410:	e3a01000 	mov	r1, #0	; 0x0
        126414:	eb6b3568 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        126418:	e2840074 	add	r0, r4, #116	; 0x74
        12641c:	e3a01000 	mov	r1, #0	; 0x0
        126420:	eb653558 	bl	1a73988 <TAsyncEvent::$__dt(void)>
        126424:	e2840020 	add	r0, r4, #32	; 0x20
        126428:	e3a01000 	mov	r1, #0	; 0x0
        12642c:	eb6b3562 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        126430:	e284000c 	add	r0, r4, #12	; 0xc
        126434:	e3a01000 	mov	r1, #0	; 0x0
        126438:	eb6aa0b9 	bl	1bce724 <TUObject::$__dt(void)>
        12643c:	e3150001 	tst	r5, #1	; 0x1
        126440:	11a00004 	movne	r0, r4
        126444:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        126448:	1a6a9ca4 	bne	1bcd6e0 <$__dl(void *)>
        12644c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        126450:	0001bd10 	andeq	fp, r1, r0, lsl sp
    */
}

/**
 * Symbol: TLookupNames::Close(void)
 * Address: 001264a8
 */
TLookupNames::Close(void) {
    /*
        1264a8:	e1a0c00d 	mov	ip, sp
        1264ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1264b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1264b4:	e1a04000 	mov	r4, r0
        1264b8:	e3a05000 	mov	r5, #0	; 0x0
        1264bc:	e5d0000a 	ldrb	r0, [r0, #10]	; fField10
        1264c0:	e3300000 	teq	r0, #0	; 0x0
        1264c4:	0a000006 	beq	1264e4 <TLookupNames::Close(void)+0x3c>
        1264c8:	e2001001 	and	r1, r0, #1	; 0x1
        1264cc:	e59f000c 	ldr	r0, [pc, #c]	; 1264e0 <TLookupNames::Close(void)+0x38>
        1264d0:	eb656f10 	bl	1a82118 <$CloseAppleTalk(unsigned long, unsigned char)>
        1264d4:	e3a00000 	mov	r0, #0	; 0x0
        1264d8:	e5c4000a 	strb	r0, [r4, #10]	; fField10
        1264dc:	ea000002 	b	1264ec <TLookupNames::Close(void)+0x44>
        1264e0:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
        1264e4:	e3a05f45 	mov	r5, #276	; 0x114
        1264e8:	e2455a03 	sub	r5, r5, #12288	; 0x3000
        1264ec:	e1a00005 	mov	r0, r5
        1264f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLookupNames::LookupNames(unsigned short *, unsigned long, unsigned char, unsigned long, unsigned long, unsigned long)
 * Address: 001264f4
 */
TLookupNames::LookupNames(unsigned short *, unsigned long, unsigned char, unsigned long, unsigned long, unsigned long) {
    /*
        1264f4:	e1a0c00d 	mov	ip, sp
        1264f8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1264fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        126500:	e1a06000 	mov	r6, r0
        126504:	e1a05001 	mov	r5, r1
        126508:	e1a04002 	mov	r4, r2
        12650c:	e20370ff 	and	r7, r3, #255	; 0xff
        126510:	e28b2008 	add	r2, fp, #8	; 0x8
        126514:	e8920006 	ldmia	r2, {r1, r2}
        126518:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        12651c:	e24dd010 	sub	sp, sp, #16	; 0x10
        126520:	e1a0000d 	mov	r0, sp
        126524:	eb6530fa 	bl	1a72914 <TLookupRetryInfo::$__ct(unsigned long, unsigned long)>
        126528:	e1a0300d 	mov	r3, sp
        12652c:	e1a02008 	mov	r2, r8
        126530:	e92d000c 	stmdb	sp!, {r2, r3}
        126534:	e1a03007 	mov	r3, r7
        126538:	e1a02004 	mov	r2, r4
        12653c:	e1a01005 	mov	r1, r5
        126540:	e1a00006 	mov	r0, r6
        126544:	eb6b5a46 	bl	1bfce64 <TLookupNames::$LookupNames(unsigned short *, unsigned long, unsigned char, unsigned long, TLookupRetryInfo *)>
        126548:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TLookupNames::LookupNamesAsyncFromTask(unsigned short *, unsigned long, TUPort *, unsigned char, unsigned long, unsigned long, unsigned long)
 * Address: 0012654c
 */
TLookupNames::LookupNamesAsyncFromTask(unsigned short *, unsigned long, TUPort *, unsigned char, unsigned long, unsigned long, unsigned long) {
    /*
        12654c:	e1a0c00d 	mov	ip, sp
        126550:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        126554:	e24cb004 	sub	fp, ip, #4	; 0x4
        126558:	e1a07000 	mov	r7, r0
        12655c:	e1a06001 	mov	r6, r1
        126560:	e1a05002 	mov	r5, r2
        126564:	e1a04003 	mov	r4, r3
        126568:	e99b0201 	ldmib	fp, {r0, r9}
        12656c:	e20080ff 	and	r8, r0, #255	; 0xff
        126570:	e28b200c 	add	r2, fp, #12	; 0xc
        126574:	e8920006 	ldmia	r2, {r1, r2}
        126578:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        12657c:	e28d000c 	add	r0, sp, #12	; 0xc
        126580:	eb6530e3 	bl	1a72914 <TLookupRetryInfo::$__ct(unsigned long, unsigned long)>
        126584:	e1a0000d 	mov	r0, sp
        126588:	e3a01001 	mov	r1, #1	; 0x1
        12658c:	eb6b3506 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        126590:	e3a00002 	mov	r0, #2	; 0x2
        126594:	e5cd000b 	strb	r0, [sp, #11]	; fField11
        126598:	e1a0000d 	mov	r0, sp
        12659c:	eb656689 	bl	1a7ffc8 <TAddress::$SetToBroadcast(void)>
        1265a0:	e3a03000 	mov	r3, #0	; 0x0
        1265a4:	e3a02000 	mov	r2, #0	; 0x0
        1265a8:	e1a01004 	mov	r1, r4
        1265ac:	e58d9004 	str	r9, [sp, #4]	; fField4
        1265b0:	e1a0000d 	mov	r0, sp
        1265b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1265b8:	e28d301c 	add	r3, sp, #28	; 0x1c
        1265bc:	e1a02008 	mov	r2, r8
        1265c0:	e92d000c 	stmdb	sp!, {r2, r3}
        1265c4:	e1a03005 	mov	r3, r5
        1265c8:	e1a02006 	mov	r2, r6
        1265cc:	e1a00007 	mov	r0, r7
        1265d0:	e3a01001 	mov	r1, #1	; 0x1
        1265d4:	eb657303 	bl	1a831e8 <TLookupNames::$InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)>
        1265d8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TLookupNames::LookupNamesAsync(unsigned short *, unsigned long, unsigned char, unsigned long, TLookupRetryInfo *)
 * Address: 001265dc
 */
TLookupNames::LookupNamesAsync(unsigned short *, unsigned long, unsigned char, unsigned long, TLookupRetryInfo *) {
    /*
        1265dc:	e1a0c00d 	mov	ip, sp
        1265e0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1265e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1265e8:	e1a06000 	mov	r6, r0
        1265ec:	e1a05001 	mov	r5, r1
        1265f0:	e1a04002 	mov	r4, r2
        1265f4:	e20370ff 	and	r7, r3, #255	; 0xff
        1265f8:	e59b8008 	ldr	r8, [fp, #8]	; fField8
        1265fc:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        126600:	e24dd00c 	sub	sp, sp, #12	; 0xc
        126604:	e1a0000d 	mov	r0, sp
        126608:	e3a01001 	mov	r1, #1	; 0x1
        12660c:	eb6b34e6 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        126610:	e3a00002 	mov	r0, #2	; 0x2
        126614:	e5cd000b 	strb	r0, [sp, #11]	; fField11
        126618:	e1a0000d 	mov	r0, sp
        12661c:	eb656669 	bl	1a7ffc8 <TAddress::$SetToBroadcast(void)>
        126620:	e3a03001 	mov	r3, #1	; 0x1
        126624:	e3a02000 	mov	r2, #0	; 0x0
        126628:	e3a01000 	mov	r1, #0	; 0x0
        12662c:	e58d9004 	str	r9, [sp, #4]	; fField4
        126630:	e1a0000d 	mov	r0, sp
        126634:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        126638:	e1a03008 	mov	r3, r8
        12663c:	e1a02007 	mov	r2, r7
        126640:	e92d000c 	stmdb	sp!, {r2, r3}
        126644:	e1a03004 	mov	r3, r4
        126648:	e1a02005 	mov	r2, r5
        12664c:	e1a00006 	mov	r0, r6
        126650:	e3a01001 	mov	r1, #1	; 0x1
        126654:	eb6572e3 	bl	1a831e8 <TLookupNames::$InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)>
        126658:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TLookupNames::LookupNames(unsigned short *, unsigned long, unsigned char, unsigned long, TLookupRetryInfo *)
 * Address: 0012665c
 */
TLookupNames::LookupNames(unsigned short *, unsigned long, unsigned char, unsigned long, TLookupRetryInfo *) {
    /*
        12665c:	e1a0c00d 	mov	ip, sp
        126660:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        126664:	e24cb004 	sub	fp, ip, #4	; 0x4
        126668:	e1a04000 	mov	r4, r0
        12666c:	e1a06001 	mov	r6, r1
        126670:	e1a05002 	mov	r5, r2
        126674:	e20370ff 	and	r7, r3, #255	; 0xff
        126678:	e59b8008 	ldr	r8, [fp, #8]	; fField8
        12667c:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        126680:	e24dd00c 	sub	sp, sp, #12	; 0xc
        126684:	e1a0000d 	mov	r0, sp
        126688:	e3a01001 	mov	r1, #1	; 0x1
        12668c:	eb6b34c6 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        126690:	e3a00002 	mov	r0, #2	; 0x2
        126694:	e5cd000b 	strb	r0, [sp, #11]	; fField11
        126698:	e1a0000d 	mov	r0, sp
        12669c:	eb656649 	bl	1a7ffc8 <TAddress::$SetToBroadcast(void)>
        1266a0:	e3a03001 	mov	r3, #1	; 0x1
        1266a4:	e3a02000 	mov	r2, #0	; 0x0
        1266a8:	e3a01000 	mov	r1, #0	; 0x0
        1266ac:	e58d9004 	str	r9, [sp, #4]	; fField4
        1266b0:	e1a0000d 	mov	r0, sp
        1266b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1266b8:	e1a03008 	mov	r3, r8
        1266bc:	e1a02007 	mov	r2, r7
        1266c0:	e92d000c 	stmdb	sp!, {r2, r3}
        1266c4:	e1a03005 	mov	r3, r5
        1266c8:	e1a02006 	mov	r2, r6
        1266cc:	e1a00004 	mov	r0, r4
        1266d0:	eb6572c4 	bl	1a831e8 <TLookupNames::$InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)>
        1266d4:	e28dd018 	add	sp, sp, #24	; 0x18
        1266d8:	e1b05000 	movs	r5, r0
        1266dc:	1a000008 	bne	126704 <TLookupNames::LookupNames(unsigned short *, unsigned long, unsigned char, unsigned long, TLookupRetryInfo *)+0xa8>
        1266e0:	e59400dc 	ldr	r0, [r4, #220]	; fField220
        1266e4:	e2800018 	add	r0, r0, #24	; 0x18
        1266e8:	e3a01000 	mov	r1, #0	; 0x0
        1266ec:	eb6a17c4 	bl	1bac604 <TPseudoSyncState::$Block(unsigned long)>
        1266f0:	e1b05000 	movs	r5, r0
        1266f4:	05945004 	ldreq	r5, [r4, #4]	; fField4
        1266f8:	03350000 	teqeq	r5, #0	; 0x0
        1266fc:	01a00004 	moveq	r0, r4
        126700:	0b654526 	bleq	1a77ba0 <TLookupNames::$CleanUp(void)>
        126704:	e1a00005 	mov	r0, r5
        126708:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TLookupNames::CleanUp(void)
 * Address: 0012670c
 */
TLookupNames::CleanUp(void) {
    /*
        12670c:	e1a0c00d 	mov	ip, sp
        126710:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        126714:	e24cb004 	sub	fp, ip, #4	; 0x4
        126718:	e3a04000 	mov	r4, #0	; 0x0
        12671c:	e5c04009 	strb	r4, [r0, #9]	; fField9
        126720:	e2800090 	add	r0, r0, #144	; 0x90
        126724:	eb654941 	bl	1a78c30 <TMemoryObject::$Destroy(void)>
        126728:	e1a00004 	mov	r0, r4
        12672c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLookupNames::Reset(void)
 * Address: 00126730
 */
TLookupNames::Reset(void) {
    /*
        126730:	e3a01000 	mov	r1, #0	; 0x0
        126734:	e5c01009 	strb	r1, [r0, #9]	; fField9
        126738:	e2800014 	add	r0, r0, #20	; 0x14
        12673c:	ea656203 	b	1a7ef50 <TNBPReplyBuffer::$Reset(void)>
    */
}

/**
 * Symbol: TLookupNames::Cancel(void)
 * Address: 00126740
 */
TLookupNames::Cancel(void) {
    /*
        126740:	e3a01001 	mov	r1, #1	; 0x1
        126744:	e5c0100b 	strb	r1, [r0, #11]	; fField11
        126748:	e2800074 	add	r0, r0, #116	; 0x74
        12674c:	e3a03000 	mov	r3, #0	; 0x0
        126750:	e3a02002 	mov	r2, #2	; 0x2
        126754:	e2822b01 	add	r2, r2, #1024	; 0x400
        126758:	e59f1000 	ldr	r1, [pc, #0]	; 126760 <TLookupNames::Cancel(void)+0x20>
        12675c:	ea654103 	b	1a76b70 <TAsyncEvent::$Cancel(unsigned long, unsigned long, unsigned char)>
        126760:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
    */
}

/**
 * Symbol: TLookupNames::RemoveEventHandler(void)
 * Address: 00126794
 */
TLookupNames::RemoveEventHandler(void) {
    /*
        126794:	e1a0c00d 	mov	ip, sp
        126798:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12679c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1267a0:	e1a04000 	mov	r4, r0
        1267a4:	e59000dc 	ldr	r0, [r0, #220]	; fField220
        1267a8:	e3300000 	teq	r0, #0	; 0x0
        1267ac:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1267b0:	e3a01001 	mov	r1, #1	; 0x1
        1267b4:	e1a0e00f 	mov	lr, pc
        1267b8:	e590f000 	ldr	pc, [r0]
        1267bc:	e3a00000 	mov	r0, #0	; 0x0
        1267c0:	e5a400dc 	str	r0, [r4, #220]!	; fField220
        1267c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLookupNames::NamesFound(unsigned long *)
 * Address: 001267c8
 */
TLookupNames::NamesFound(unsigned long *) {
    /*
        1267c8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1267cc:	e5810000 	str	r0, [r1]
        1267d0:	e3a00000 	mov	r0, #0	; 0x0
        1267d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLookupNames::GetName(TNBPName &, unsigned long)
 * Address: 001267d8
 */
TLookupNames::GetName(TNBPName &, unsigned long) {
    /*
        1267d8:	e1a0c00d 	mov	ip, sp
        1267dc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1267e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1267e4:	e1a05000 	mov	r5, r0
        1267e8:	e1a06001 	mov	r6, r1
        1267ec:	e1a04002 	mov	r4, r2
        1267f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1267f4:	e1a0100d 	mov	r1, sp
        1267f8:	eb655998 	bl	1a7ce60 <TLookupNames::$NamesFound(unsigned long *)>
        1267fc:	e1b07000 	movs	r7, r0
        126800:	1a00002e 	bne	1268c0 <TLookupNames::GetName(TNBPName &, unsigned long)+0xe8>
        126804:	e59d0000 	ldr	r0, [sp]
        126808:	e3300000 	teq	r0, #0	; 0x0
        12680c:	03e07019 	mvneq	r7, #25	; 0x19
        126810:	02477a03 	subeq	r7, r7, #12288	; 0x3000
        126814:	0a000029 	beq	1268c0 <TLookupNames::GetName(TNBPName &, unsigned long)+0xe8>
        126818:	e3540001 	cmp	r4, #1	; 0x1
        12681c:	3a000001 	bcc	126828 <TLookupNames::GetName(TNBPName &, unsigned long)+0x50>
        126820:	e1540000 	cmp	r4, r0
        126824:	9a000002 	bls	126834 <TLookupNames::GetName(TNBPName &, unsigned long)+0x5c>
        126828:	e3e07016 	mvn	r7, #22	; 0x16
        12682c:	e2477a03 	sub	r7, r7, #12288	; 0x3000
        126830:	ea000022 	b	1268c0 <TLookupNames::GetName(TNBPName &, unsigned long)+0xe8>
        126834:	e24dd010 	sub	sp, sp, #16	; 0x10
        126838:	e2850014 	add	r0, r5, #20	; 0x14
        12683c:	e1a02004 	mov	r2, r4
        126840:	e1a0100d 	mov	r1, sp
        126844:	eb655971 	bl	1a7ce10 <TNBPReplyBuffer::$Ith(TNBPReplyItem *, unsigned long)>
        126848:	e24dd00c 	sub	sp, sp, #12	; 0xc
        12684c:	e1a0000d 	mov	r0, sp
        126850:	e3a01001 	mov	r1, #1	; 0x1
        126854:	eb6b3454 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        126858:	e28d000c 	add	r0, sp, #12	; 0xc
        12685c:	eb655135 	bl	1a7ad38 <TNBPReplyItem::$GetSocket(void)>
        126860:	e1a03000 	mov	r3, r0
        126864:	e92d0008 	stmdb	sp!, {r3}
        126868:	e28d0010 	add	r0, sp, #16	; 0x10
        12686c:	eb65512a 	bl	1a7ad1c <TNBPReplyItem::$GetNode(void)>
        126870:	e1a05000 	mov	r5, r0
        126874:	e28d0010 	add	r0, sp, #16	; 0x10
        126878:	eb655126 	bl	1a7ad18 <TNBPReplyItem::$GetNetwork(void)>
        12687c:	e1a04000 	mov	r4, r0
        126880:	e28d0010 	add	r0, sp, #16	; 0x10
        126884:	eb65511d 	bl	1a7ad00 <TNBPReplyItem::$GetLinkId(void)>
        126888:	e1a01000 	mov	r1, r0
        12688c:	e28d0004 	add	r0, sp, #4	; 0x4
        126890:	e1a02004 	mov	r2, r4
        126894:	e1a03005 	mov	r3, r5
        126898:	eb6b3450 	bl	1bf39e0 <TAddress::$SetAddress(unsigned long, unsigned short, unsigned char, unsigned char)>
        12689c:	e28dd004 	add	sp, sp, #4	; 0x4
        1268a0:	e59d3018 	ldr	r3, [sp, #24]	; fField24
        1268a4:	e92d0008 	stmdb	sp!, {r3}
        1268a8:	e28d3014 	add	r3, sp, #20	; 0x14
        1268ac:	e893000c 	ldmia	r3, {r2, r3}
        1268b0:	e28d1004 	add	r1, sp, #4	; 0x4
        1268b4:	e1a00006 	mov	r0, r6
        1268b8:	eb6565b5 	bl	1a7ff94 <TNBPName::$Set(TAddress &, TNBPString &, TNBPString &, TNBPString &)>
        1268bc:	e28dd020 	add	sp, sp, #32	; 0x20
        1268c0:	e1a00007 	mov	r0, r7
        1268c4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TLookupNames::Completion(long)
 * Address: 001268c8
 */
TLookupNames::Completion(long) {
    /*
        1268c8:	e5d010d9 	ldrb	r1, [r0, #217]	; fField217
        1268cc:	e3310000 	teq	r1, #0	; 0x0
        1268d0:	0a656196 	beq	1a7ef30 <TLookupNames::$RemoveEventHandler(void)>
        1268d4:	e3300000 	teq	r0, #0	; 0x0
        1268d8:	13a01001 	movne	r1, #1	; 0x1
        1268dc:	1a6b3431 	bne	1bf39a8 <TLookupNames::$__dt(void)>
        1268e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLookupNames::GetId(void)
 * Address: 001268e4
 */
TLookupNames::GetId(void) {
    /*
        1268e4:	e5900074 	ldr	r0, [r0, #116]	; fField116
        1268e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)
 * Address: 001268ec
 */
TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char) {
    /*
        1268ec:	e1a0c00d 	mov	ip, sp
        1268f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1268f4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1268f8:	e24cb014 	sub	fp, ip, #20	; 0x14
        1268fc:	e1a04000 	mov	r4, r0
        126900:	e1a0a002 	mov	sl, r2
        126904:	e20110ff 	and	r1, r1, #255	; 0xff
        126908:	e59b0028 	ldr	r0, [fp, #40]
        12690c:	e59b2024 	ldr	r2, [fp, #36]
        126910:	e28b9014 	add	r9, fp, #20	; 0x14
        126914:	e8990208 	ldmia	r9, {r3, r9}
        126918:	e59b8020 	ldr	r8, [fp, #32]
        12691c:	e20330ff 	and	r3, r3, #255	; 0xff
        126920:	e24dd010 	sub	sp, sp, #16	; 0x10
        126924:	e92d000a 	stmdb	sp!, {r1, r3}
        126928:	e20210ff 	and	r1, r2, #255	; 0xff
        12692c:	e20020ff 	and	r2, r0, #255	; 0xff
        126930:	e3a06000 	mov	r6, #0	; 0x0
        126934:	e3a07000 	mov	r7, #0	; 0x0
        126938:	e58d1008 	str	r1, [sp, #8]	; fField8
        12693c:	e58d200c 	str	r2, [sp, #12]	; fField12
        126940:	e5d40009 	ldrb	r0, [r4, #9]	; fField9
        126944:	e3300000 	teq	r0, #0	; 0x0
        126948:	13e05015 	mvnne	r5, #21	; 0x15
        12694c:	12455a03 	subne	r5, r5, #12288	; 0x3000
        126950:	1a000116 	bne	126db0 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4c4>
        126954:	e59b101c 	ldr	r1, [fp, #28]
        126958:	e5b10004 	ldr	r0, [r1, #4]!	; fField4
        12695c:	e3a01000 	mov	r1, #0	; 0x0
        126960:	e59d200c 	ldr	r2, [sp, #12]	; fField12
        126964:	eb65763e 	bl	1a84264 <$OpenAppleTalk(unsigned long, unsigned short *, unsigned char)>
        126968:	e1b05000 	movs	r5, r0
        12696c:	1a00010d 	bne	126da8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4bc>
        126970:	e59d300c 	ldr	r3, [sp, #12]	; fField12
        126974:	e3330000 	teq	r3, #0	; 0x0
        126978:	0a000012 	beq	1269c8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0xdc>
        12697c:	e3a00001 	mov	r0, #1	; 0x1
        126980:	e5c4000a 	strb	r0, [r4, #10]	; fField10
        126984:	eb6ab412 	bl	1bd39d4 <$GetGlobals>
        126988:	eb6b06ab 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        12698c:	e1a08000 	mov	r8, r0
        126990:	e1a01004 	mov	r1, r4
        126994:	e3a00000 	mov	r0, #0	; 0x0
        126998:	eb652fe9 	bl	1a72944 <TNBPLookupEventHandler::$__ct(TLookupNames *)>
        12699c:	e58400dc 	str	r0, [r4, #220]	; fField220
        1269a0:	e3300000 	teq	r0, #0	; 0x0
        1269a4:	0a00000b 	beq	1269d8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0xec>
        1269a8:	e59f2010 	ldr	r2, [pc, #10]	; 1269c0 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0xd4>	; fField10
        1269ac:	e59f1010 	ldr	r1, [pc, #10]	; 1269c4 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0xd8>	; fField10
        1269b0:	eb657208 	bl	1a831d8 <TNBPLookupEventHandler::$Init(unsigned long, unsigned long)>
        1269b4:	e1b05000 	movs	r5, r0
        1269b8:	1a0000fa 	bne	126da8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4bc>
        1269bc:	ea000008 	b	1269e4 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0xf8>
        1269c0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1269c4:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
        1269c8:	e3a01002 	mov	r1, #2	; 0x2
        1269cc:	e5c4100a 	strb	r1, [r4, #10]	; fField10
        1269d0:	e3380000 	teq	r8, #0	; 0x0
        1269d4:	1a000002 	bne	1269e4 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0xf8>
        1269d8:	e3a050a8 	mov	r5, #168	; 0xa8
        1269dc:	e2455b07 	sub	r5, r5, #7168	; 0x1c00
        1269e0:	ea0000f2 	b	126db0 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4c4>
        1269e4:	e28400b4 	add	r0, r4, #180	; 0xb4
        1269e8:	e3a01e49 	mov	r1, #1168	; 0x490
        1269ec:	e58d0014 	str	r0, [sp, #20]
        1269f0:	eb6b0aa8 	bl	1be9498 <CRingBuffer::$Init(long)>
        1269f4:	e1b05000 	movs	r5, r0
        1269f8:	1a0000ea 	bne	126da8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4bc>
        1269fc:	e3a01000 	mov	r1, #0	; 0x0
        126a00:	e59d0014 	ldr	r0, [sp, #20]
        126a04:	eb6b0ed7 	bl	1bea568 <CRingBuffer::$MakeShared(unsigned long)>
        126a08:	e1b05000 	movs	r5, r0
        126a0c:	1a0000e5 	bne	126da8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4bc>
        126a10:	e3a00000 	mov	r0, #0	; 0x0
        126a14:	e5c400d8 	strb	r0, [r4, #216]	; fField216
        126a18:	e2840014 	add	r0, r4, #20	; 0x14
        126a1c:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        126a20:	e1a0100a 	mov	r1, sl
        126a24:	e59b2010 	ldr	r2, [fp, #16]	; fField16
        126a28:	eb6571e7 	bl	1a831cc <TNBPReplyBuffer::$Init(unsigned short *, unsigned long, unsigned char)>
        126a2c:	e1b05000 	movs	r5, r0
        126a30:	1a0000dc 	bne	126da8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4bc>
        126a34:	e24dd004 	sub	sp, sp, #4	; 0x4
        126a38:	e1a0000a 	mov	r0, sl
        126a3c:	eb6b1f47 	bl	1bee760 <$Ustrlen>
        126a40:	e3a01002 	mov	r1, #2	; 0x2
        126a44:	e0811080 	add	r1, r1, r0, lsl #1
        126a48:	e58d1000 	str	r1, [sp]
        126a4c:	e2841090 	add	r1, r4, #144	; 0x90
        126a50:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        126a54:	e3300000 	teq	r0, #0	; 0x0
        126a58:	e58d1014 	str	r1, [sp, #20]
        126a5c:	0a00000e 	beq	126a9c <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x1b0>
        126a60:	e3a03001 	mov	r3, #1	; 0x1
        126a64:	e3a02001 	mov	r2, #1	; 0x1
        126a68:	e59d0014 	ldr	r0, [sp, #20]
        126a6c:	e59d1000 	ldr	r1, [sp]
        126a70:	eb6b33d0 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        126a74:	e1b05000 	movs	r5, r0
        126a78:	1a000010 	bne	126ac0 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x1d4>
        126a7c:	e1a0100a 	mov	r1, sl
        126a80:	e3a03000 	mov	r3, #0	; 0x0
        126a84:	e59d0014 	ldr	r0, [sp, #20]
        126a88:	e59d2000 	ldr	r2, [sp]
        126a8c:	eb65485d 	bl	1a78c08 <TMemoryObject::$CopyTo(void *, unsigned long, unsigned long)>
        126a90:	e1b05000 	movs	r5, r0
        126a94:	0a00000b 	beq	126ac8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x1dc>
        126a98:	ea000008 	b	126ac0 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x1d4>
        126a9c:	e3a03001 	mov	r3, #1	; 0x1
        126aa0:	e92d0008 	stmdb	sp!, {r3}
        126aa4:	e1a0200a 	mov	r2, sl
        126aa8:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        126aac:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        126ab0:	eb6554be 	bl	1a7bdb0 <TMemoryObject::$Init(unsigned long, char *, unsigned char, unsigned long)>
        126ab4:	e28dd004 	add	sp, sp, #4	; 0x4
        126ab8:	e1b05000 	movs	r5, r0
        126abc:	0a000001 	beq	126ac8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x1dc>
        126ac0:	e28dd004 	add	sp, sp, #4	; 0x4
        126ac4:	ea0000b7 	b	126da8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4bc>
        126ac8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        126acc:	e5c40008 	strb	r0, [r4, #8]	; fField8
        126ad0:	e24dd008 	sub	sp, sp, #8	; 0x8
        126ad4:	e3a00000 	mov	r0, #0	; 0x0
        126ad8:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        126adc:	e58d0000 	str	r0, [sp]
        126ae0:	e59d3018 	ldr	r3, [sp, #24]	; fField24
        126ae4:	e1a0100d 	mov	r1, sp
        126ae8:	e3a02000 	mov	r2, #0	; 0x0
        126aec:	e51f0130 	ldr	r0, [pc, #fffffed0]	; 1269c4 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0xd8>
        126af0:	eb6575da 	bl	1a84260 <$OpenAppleTalkPart(unsigned long, TUPort *, unsigned short *, unsigned char)>
        126af4:	e1b05000 	movs	r5, r0
        126af8:	1a00000d 	bne	126b34 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x248>
        126afc:	e5d4000a 	ldrb	r0, [r4, #10]	; fField10
        126b00:	e3800004 	orr	r0, r0, #4	; 0x4
        126b04:	e5c4000a 	strb	r0, [r4, #10]	; fField10
        126b08:	e284000c 	add	r0, r4, #12	; 0xc
        126b0c:	e1a05000 	mov	r5, r0
        126b10:	e5981000 	ldr	r1, [r8]
        126b14:	eb6aa74b 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        126b18:	e5951000 	ldr	r1, [r5]
        126b1c:	e59420dc 	ldr	r2, [r4, #220]	; fField220
        126b20:	e2840074 	add	r0, r4, #116	; 0x74
        126b24:	e1a0a000 	mov	sl, r0
        126b28:	eb65549c 	bl	1a7bda0 <TAsyncEvent::$Init(unsigned long, TAEventHandler *)>
        126b2c:	e1b05000 	movs	r5, r0
        126b30:	0a000004 	beq	126b48 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x25c>
        126b34:	e1a0000d 	mov	r0, sp
        126b38:	e3a01000 	mov	r1, #0	; 0x0
        126b3c:	eb6a9ef8 	bl	1bce724 <TUObject::$__dt(void)>
        126b40:	e28dd00c 	add	sp, sp, #12	; 0xc
        126b44:	ea000097 	b	126da8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4bc>
        126b48:	e3a00040 	mov	r0, #64	; 0x40
        126b4c:	eb6a9ef9 	bl	1bce738 <$__nw(unsigned int)>
        126b50:	e1b05000 	movs	r5, r0
        126b54:	0a000010 	beq	126b9c <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x2b0>
        126b58:	e1a00005 	mov	r0, r5
        126b5c:	eb6af5b5 	bl	1be4238 <TAEvent::$__ct(void)>
        126b60:	e51f21a8 	ldr	r2, [pc, #fffffe58]	; 1269c0 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0xd4>
        126b64:	e3a00000 	mov	r0, #0	; 0x0
        126b68:	e585000c 	str	r0, [r5, #12]	; fField12
        126b6c:	e5852000 	str	r2, [r5]
        126b70:	e5850008 	str	r0, [r5, #8]	; fField8
        126b74:	e285001c 	add	r0, r5, #28	; 0x1c
        126b78:	e3a01001 	mov	r1, #1	; 0x1
        126b7c:	eb6b338a 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        126b80:	e2850028 	add	r0, r5, #40	; 0x28
        126b84:	eb652b52 	bl	1a718d4 <TNBPRetryInfo::$__ct(void)>
        126b88:	e51f01cc 	ldr	r0, [pc, #fffffe34]	; 1269c4 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0xd8>
        126b8c:	e5850004 	str	r0, [r5, #4]	; fField4
        126b90:	e3a00002 	mov	r0, #2	; 0x2
        126b94:	e2800b01 	add	r0, r0, #1024	; 0x400
        126b98:	e5850010 	str	r0, [r5, #16]	; fField16
        126b9c:	e1a06005 	mov	r6, r5
        126ba0:	e3a00014 	mov	r0, #20	; 0x14
        126ba4:	eb6a9ee3 	bl	1bce738 <$__nw(unsigned int)>
        126ba8:	e1b05000 	movs	r5, r0
        126bac:	0a000006 	beq	126bcc <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x2e0>
        126bb0:	e1a00005 	mov	r0, r5
        126bb4:	eb6af59f 	bl	1be4238 <TAEvent::$__ct(void)>
        126bb8:	e51f2200 	ldr	r2, [pc, #fffffe00]	; 1269c0 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0xd4>
        126bbc:	e3a00000 	mov	r0, #0	; 0x0
        126bc0:	e585000c 	str	r0, [r5, #12]	; fField12
        126bc4:	e5852000 	str	r2, [r5]
        126bc8:	e5850008 	str	r0, [r5, #8]	; fField8
        126bcc:	e1a07005 	mov	r7, r5
        126bd0:	e3360000 	teq	r6, #0	; 0x0
        126bd4:	13370000 	teqne	r7, #0	; 0x0
        126bd8:	1a000006 	bne	126bf8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x30c>
        126bdc:	e3a050a8 	mov	r5, #168	; 0xa8
        126be0:	e2455b07 	sub	r5, r5, #7168	; 0x1c00
        126be4:	e1a0000d 	mov	r0, sp
        126be8:	e3a01000 	mov	r1, #0	; 0x0
        126bec:	eb6a9ecc 	bl	1bce724 <TUObject::$__dt(void)>
        126bf0:	e28dd00c 	add	sp, sp, #12	; 0xc
        126bf4:	ea00006d 	b	126db0 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4c4>
        126bf8:	e24dd010 	sub	sp, sp, #16	; 0x10
        126bfc:	e1a0000d 	mov	r0, sp
        126c00:	eb652b33 	bl	1a718d4 <TNBPRetryInfo::$__ct(void)>
        126c04:	e3390000 	teq	r9, #0	; 0x0
        126c08:	0a000007 	beq	126c2c <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x340>
        126c0c:	e5990000 	ldr	r0, [r9]
        126c10:	e58d0000 	str	r0, [sp]
        126c14:	e5990004 	ldr	r0, [r9, #4]	; fField4
        126c18:	e58d0004 	str	r0, [sp, #4]	; fField4
        126c1c:	e5990008 	ldr	r0, [r9, #8]	; fField8
        126c20:	e58d0008 	str	r0, [sp, #8]	; fField8
        126c24:	e5b9000c 	ldr	r0, [r9, #12]!	; fField12
        126c28:	e58d000c 	str	r0, [sp, #12]	; fField12
        126c2c:	e3a00a09 	mov	r0, #36864	; 0x9000
        126c30:	e2400004 	sub	r0, r0, #4	; 0x4
        126c34:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        126c38:	e1510000 	cmp	r1, r0
        126c3c:	259d1008 	ldrcs	r1, [sp, #8]	; fField8
        126c40:	21510000 	cmpcs	r1, r0
        126c44:	2a000006 	bcs	126c64 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x378>
        126c48:	e3a05011 	mov	r5, #17	; 0x11
        126c4c:	e2455c2f 	sub	r5, r5, #12032	; 0x2f00
        126c50:	e28d0010 	add	r0, sp, #16	; 0x10
        126c54:	e3a01000 	mov	r1, #0	; 0x0
        126c58:	eb6a9eb1 	bl	1bce724 <TUObject::$__dt(void)>
        126c5c:	e28dd01c 	add	sp, sp, #28	; 0x1c
        126c60:	ea000052 	b	126db0 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4c4>
        126c64:	e59d0024 	ldr	r0, [sp, #36]
        126c68:	e3300000 	teq	r0, #0	; 0x0
        126c6c:	13a00005 	movne	r0, #5	; 0x5
        126c70:	12800b01 	addne	r0, r0, #1024	; 0x400
        126c74:	15860010 	strne	r0, [r6, #16]	; fField16
        126c78:	e1a00004 	mov	r0, r4
        126c7c:	eb654c1e 	bl	1a79cfc <TLookupNames::$GetId(void)>
        126c80:	e586000c 	str	r0, [r6, #12]	; fField12
        126c84:	e59b2010 	ldr	r2, [fp, #16]	; fField16
        126c88:	e5862014 	str	r2, [r6, #20]
        126c8c:	e59d002c 	ldr	r0, [sp, #44]
        126c90:	eb6b334c 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        126c94:	e5860018 	str	r0, [r6, #24]	; fField24
        126c98:	e2860028 	add	r0, r6, #40	; 0x28
        126c9c:	e89d500c 	ldmia	sp, {r2, r3, ip, lr}
        126ca0:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        126ca4:	e5980000 	ldr	r0, [r8]
        126ca8:	e5860038 	str	r0, [r6, #56]
        126cac:	e286001c 	add	r0, r6, #28	; 0x1c
        126cb0:	e59b101c 	ldr	r1, [fp, #28]
        126cb4:	eb6b333d 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        126cb8:	e59d0030 	ldr	r0, [sp, #48]
        126cbc:	e5900018 	ldr	r0, [r0, #24]	; fField24
        126cc0:	e586003c 	str	r0, [r6, #60]
        126cc4:	e58a6010 	str	r6, [sl, #16]	; fField16
        126cc8:	e1a0000a 	mov	r0, sl
        126ccc:	e1a01007 	mov	r1, r7
        126cd0:	eb6564b8 	bl	1a7ffb8 <TAsyncEvent::$SetReply(TAppleTalkMessage *)>
        126cd4:	e24dd008 	sub	sp, sp, #8	; 0x8
        126cd8:	e3a09000 	mov	r9, #0	; 0x0
        126cdc:	e5cd9004 	strb	r9, [sp, #4]	; fField4
        126ce0:	e58d9000 	str	r9, [sp]
        126ce4:	e1a0000d 	mov	r0, sp
        126ce8:	eb65375a 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
        126cec:	e1b05000 	movs	r5, r0
        126cf0:	1a000025 	bne	126d8c <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4a0>
        126cf4:	e1a0000a 	mov	r0, sl
        126cf8:	e5981000 	ldr	r1, [r8]
        126cfc:	eb6ad423 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        126d00:	e1b05000 	movs	r5, r0
        126d04:	1a000020 	bne	126d8c <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4a0>
        126d08:	e59d2030 	ldr	r2, [sp, #48]
        126d0c:	e3320000 	teq	r2, #0	; 0x0
        126d10:	159400dc 	ldrne	r0, [r4, #220]	; fField220
        126d14:	1a000001 	bne	126d20 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x434>
        126d18:	e1a00004 	mov	r0, r4
        126d1c:	eb654bf6 	bl	1a79cfc <TLookupNames::$GetId(void)>
        126d20:	e1a01000 	mov	r1, r0
        126d24:	e1a0000a 	mov	r0, sl
        126d28:	eb6ad838 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
        126d2c:	e1b05000 	movs	r5, r0
        126d30:	1a000015 	bne	126d8c <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4a0>
        126d34:	e1a0c00a 	mov	ip, sl
        126d38:	e1a00007 	mov	r0, r7
        126d3c:	e3a01014 	mov	r1, #20	; 0x14
        126d40:	e3a02000 	mov	r2, #0	; 0x0
        126d44:	e3a03000 	mov	r3, #0	; 0x0
        126d48:	e3a0e000 	mov	lr, #0	; 0x0
        126d4c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        126d50:	e1a03009 	mov	r3, r9
        126d54:	e3a02001 	mov	r2, #1	; 0x1
        126d58:	e1a0100e 	mov	r1, lr
        126d5c:	e3a00040 	mov	r0, #64	; 0x40
        126d60:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        126d64:	e1a03006 	mov	r3, r6
        126d68:	e92d0008 	stmdb	sp!, {r3}
        126d6c:	e28d0024 	add	r0, sp, #36	; 0x24
        126d70:	e3a03000 	mov	r3, #0	; 0x0
        126d74:	e49c1008 	ldr	r1, [ip], #8	; fField8
        126d78:	e59c2000 	ldr	r2, [ip]
        126d7c:	eb6acff2 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        126d80:	e28dd024 	add	sp, sp, #36	; 0x24
        126d84:	e1b05000 	movs	r5, r0
        126d88:	0a000010 	beq	126dd0 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4e4>
        126d8c:	e1a0000d 	mov	r0, sp
        126d90:	e3a01000 	mov	r1, #0	; 0x0
        126d94:	eb6a9e62 	bl	1bce724 <TUObject::$__dt(void)>
        126d98:	e28d0018 	add	r0, sp, #24	; 0x18
        126d9c:	e3a01000 	mov	r1, #0	; 0x0
        126da0:	eb6a9e5f 	bl	1bce724 <TUObject::$__dt(void)>
        126da4:	e28dd024 	add	sp, sp, #36	; 0x24
        126da8:	e3350000 	teq	r5, #0	; 0x0
        126dac:	0a000005 	beq	126dc8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4dc>
        126db0:	e1a00006 	mov	r0, r6
        126db4:	eb6a9a49 	bl	1bcd6e0 <$__dl(void *)>
        126db8:	e1a00007 	mov	r0, r7
        126dbc:	eb6a9a47 	bl	1bcd6e0 <$__dl(void *)>
        126dc0:	e1a00004 	mov	r0, r4
        126dc4:	eb656059 	bl	1a7ef30 <TLookupNames::$RemoveEventHandler(void)>
        126dc8:	e1a00005 	mov	r0, r5
        126dcc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        126dd0:	e3a00001 	mov	r0, #1	; 0x1
        126dd4:	e5c40009 	strb	r0, [r4, #9]	; fField9
        126dd8:	e5c4900b 	strb	r9, [r4, #11]	; fField11
        126ddc:	e1a0000d 	mov	r0, sp
        126de0:	e3a01000 	mov	r1, #0	; 0x0
        126de4:	eb6a9e4e 	bl	1bce724 <TUObject::$__dt(void)>
        126de8:	e28dd018 	add	sp, sp, #24	; 0x18
        126dec:	e1a0000d 	mov	r0, sp
        126df0:	e3a01000 	mov	r1, #0	; 0x0
        126df4:	eb6a9e4a 	bl	1bce724 <TUObject::$__dt(void)>
        126df8:	e28dd00c 	add	sp, sp, #12	; 0xc
        126dfc:	eafffff1 	b	126dc8 <TLookupNames::InitiateLookup(unsigned char, unsigned short *, unsigned long, unsigned char, TLookupRetryInfo *, TAddress &, TUPort *, unsigned char, unsigned char)+0x4dc>
    */
}

/**
 * Symbol: TLookupNames::HandleLookupReply(TAppleTalkMessage *, TUMsgToken *)
 * Address: 00126e00
 */
TLookupNames::HandleLookupReply(TAppleTalkMessage *, TUMsgToken *) {
    /*
        126e00:	e1a0c00d 	mov	ip, sp
        126e04:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        126e08:	e24cb004 	sub	fp, ip, #4	; 0x4
        126e0c:	e1a04000 	mov	r4, r0
        126e10:	e1a05001 	mov	r5, r1
        126e14:	e24dd004 	sub	sp, sp, #4	; 0x4
        126e18:	e1a06001 	mov	r6, r1
        126e1c:	e3a07000 	mov	r7, #0	; 0x0
        126e20:	e3a08000 	mov	r8, #0	; 0x0
        126e24:	e591a018 	ldr	sl, [r1, #24]	; fField24
        126e28:	e5d0000b 	ldrb	r0, [r0, #11]	; fField11
        126e2c:	e2849014 	add	r9, r4, #20	; 0x14
        126e30:	e3300000 	teq	r0, #0	; 0x0
        126e34:	1a000012 	bne	126e84 <TLookupNames::HandleLookupReply(TAppleTalkMessage *, TUMsgToken *)+0x84>
        126e38:	e28420b4 	add	r2, r4, #180	; 0xb4
        126e3c:	e58d2000 	str	r2, [sp]
        126e40:	e1a00002 	mov	r0, r2
        126e44:	e5961024 	ldr	r1, [r6, #36]
        126e48:	e5922000 	ldr	r2, [r2]
        126e4c:	e1a0e00f 	mov	lr, pc
        126e50:	e282f044 	add	pc, r2, #68	; 0x44
        126e54:	e5d410d8 	ldrb	r1, [r4, #216]	; fField216
        126e58:	e5d6001c 	ldrb	r0, [r6, #28]
        126e5c:	e0810000 	add	r0, r1, r0
        126e60:	e5c400d8 	strb	r0, [r4, #216]	; fField216
        126e64:	e2868020 	add	r8, r6, #32	; 0x20
        126e68:	e8980108 	ldmia	r8, {r3, r8}
        126e6c:	e20010ff 	and	r1, r0, #255	; 0xff
        126e70:	e1a00009 	mov	r0, r9
        126e74:	e59d2000 	ldr	r2, [sp]
        126e78:	eb6557e3 	bl	1a7ce0c <TNBPReplyBuffer::$InsertLookupTuples(unsigned char, CRingBuffer *, unsigned long)>
        126e7c:	e3a00000 	mov	r0, #0	; 0x0
        126e80:	e5c400d8 	strb	r0, [r4, #216]	; fField216
        126e84:	e59f0048 	ldr	r0, [pc, #48]	; 126ed4 <TLookupNames::HandleLookupReply(TAppleTalkMessage *, TUMsgToken *)+0xd4>
        126e88:	e5850000 	str	r0, [r5]
        126e8c:	e5b60014 	ldr	r0, [r6, #20]!
        126e90:	e5850004 	str	r0, [r5, #4]	; fField4
        126e94:	e3a00006 	mov	r0, #6	; 0x6
        126e98:	e2800b01 	add	r0, r0, #1024	; 0x400
        126e9c:	e2855010 	add	r5, r5, #16	; 0x10
        126ea0:	e8850401 	stmia	r5, {r0, sl}
        126ea4:	e5858008 	str	r8, [r5, #8]	; fField8
        126ea8:	e2455010 	sub	r5, r5, #16	; 0x10
        126eac:	e5d4000a 	ldrb	r0, [r4, #10]	; fField10
        126eb0:	e3100001 	tst	r0, #1	; 0x1
        126eb4:	0a000007 	beq	126ed8 <TLookupNames::HandleLookupReply(TAppleTalkMessage *, TUMsgToken *)+0xd8>
        126eb8:	eb6ab2c5 	bl	1bd39d4 <$GetGlobals>
        126ebc:	e1a02005 	mov	r2, r5
        126ec0:	e3a0101c 	mov	r1, #28	; 0x1c
        126ec4:	eb6afd16 	bl	1be6324 <TAppWorld::$AESetReply(unsigned long, TAEvent *)>
        126ec8:	eb6ab2c1 	bl	1bd39d4 <$GetGlobals>
        126ecc:	eb6afd10 	bl	1be6314 <TAppWorld::$AEReplyImmed(void)>
        126ed0:	ea000005 	b	126eec <TLookupNames::HandleLookupReply(TAppleTalkMessage *, TUMsgToken *)+0xec>
        126ed4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        126ed8:	e1a01005 	mov	r1, r5
        126edc:	e3a03000 	mov	r3, #0	; 0x0
        126ee0:	e3a0201c 	mov	r2, #28	; 0x1c
        126ee4:	e51b002c 	ldr	r0, [fp, -#44]
        126ee8:	eb6acb7f 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        126eec:	e5d4000b 	ldrb	r0, [r4, #11]	; fField11
        126ef0:	e3300000 	teq	r0, #0	; 0x0
        126ef4:	1a000013 	bne	126f48 <TLookupNames::HandleLookupReply(TAppleTalkMessage *, TUMsgToken *)+0x148>
        126ef8:	e5990004 	ldr	r0, [r9, #4]	; fField4
        126efc:	e5991000 	ldr	r1, [r9]
        126f00:	e1500001 	cmp	r0, r1
        126f04:	3a00000f 	bcc	126f48 <TLookupNames::HandleLookupReply(TAppleTalkMessage *, TUMsgToken *)+0x148>
        126f08:	e1a00004 	mov	r0, r4
        126f0c:	eb653f18 	bl	1a76b74 <TLookupNames::$Cancel(void)>
        126f10:	e1a07000 	mov	r7, r0
        126f14:	e5d40008 	ldrb	r0, [r4, #8]	; fField8
        126f18:	e3300000 	teq	r0, #0	; 0x0
        126f1c:	1a000005 	bne	126f38 <TLookupNames::HandleLookupReply(TAppleTalkMessage *, TUMsgToken *)+0x138>
        126f20:	e5847004 	str	r7, [r4, #4]	; fField4
        126f24:	e5b400dc 	ldr	r0, [r4, #220]!	; fField220
        126f28:	e3300000 	teq	r0, #0	; 0x0
        126f2c:	12800018 	addne	r0, r0, #24	; 0x18
        126f30:	1b6a222a 	blne	1baf7e0 <TPseudoSyncState::$Unblock(void)>
        126f34:	ea000003 	b	126f48 <TLookupNames::HandleLookupReply(TAppleTalkMessage *, TUMsgToken *)+0x148>
        126f38:	e1a01007 	mov	r1, r7
        126f3c:	e1a00004 	mov	r0, r4
        126f40:	e1a0e00f 	mov	lr, pc
        126f44:	e594f000 	ldr	pc, [r4]
        126f48:	e1a00007 	mov	r0, r7
        126f4c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLookupNames::CancelLookup(void)
 * Address: 00126f50
 */
TLookupNames::CancelLookup(void) {
    /*
        126f50:	e3a01000 	mov	r1, #0	; 0x0
        126f54:	ea656865 	b	1a810f0 <TLookupNames::$CancelLookup(unsigned char)>
    */
}

/**
 * Symbol: TLookupNames::CancelLookup(unsigned char)
 * Address: 00126f58
 */
TLookupNames::CancelLookup(unsigned char) {
    /*
        126f58:	e1a0c00d 	mov	ip, sp
        126f5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        126f60:	e24cb004 	sub	fp, ip, #4	; 0x4
        126f64:	e1a04000 	mov	r4, r0
        126f68:	e5c010d9 	strb	r1, [r0, #217]	; fField217
        126f6c:	eb653f00 	bl	1a76b74 <TLookupNames::$Cancel(void)>
        126f70:	e1a05000 	mov	r5, r0
        126f74:	e1a00004 	mov	r0, r4
        126f78:	eb654308 	bl	1a77ba0 <TLookupNames::$CleanUp(void)>
        126f7c:	e1a00004 	mov	r0, r4
        126f80:	eb655fee 	bl	1a7ef40 <TLookupNames::$Reset(void)>
        126f84:	e5d400d9 	ldrb	r0, [r4, #217]	; fField217
        126f88:	e3300000 	teq	r0, #0	; 0x0
        126f8c:	0a000005 	beq	126fa8 <TLookupNames::CancelLookup(unsigned char)+0x50>
        126f90:	e59400dc 	ldr	r0, [r4, #220]	; fField220
        126f94:	e3300000 	teq	r0, #0	; 0x0
        126f98:	1a000002 	bne	126fa8 <TLookupNames::CancelLookup(unsigned char)+0x50>
        126f9c:	e1b00004 	movs	r0, r4
        126fa0:	13a01001 	movne	r1, #1	; 0x1
        126fa4:	1b6b327f 	blne	1bf39a8 <TLookupNames::$__dt(void)>
        126fa8:	e1a00005 	mov	r0, r5
        126fac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

