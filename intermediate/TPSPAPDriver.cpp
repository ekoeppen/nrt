#include "include/TPSPAPDriver.h"

/**
 * Symbol: Sizeof__12TPSPAPDriverSFv
 * Address: 0021a348
 */
void TPSPAPDriver::Sizeof() {
    /*
        21a348:	e3a00f8a 	mov	r0, #552	; 0x228
        21a34c:	e1a0f00e 	mov	pc, lr
        21a350:	6c696d69 	stcvsl	13, cr6, [r9], -#420
        21a354:	74636865 	strvcbt	r6, [r3], -#2149
        21a358:	636b0000 	cmnvs	fp, #0	; 0x0
        21a35c:	64696374 	strvsbt	r6, [r9], -#884
        21a360:	66756c6c 	ldrvsbt	r6, [r5], -ip, ror #24	; fField24
        21a364:	00000000 	andeq	r0, r0, r0
        21a368:	466c7573 	undefined
        21a36c:	68696e67 	stmvsda	r9!, {r0, r1, r2, r5, r6, r9, sl, fp, sp, lr}^
        21a370:	3a207265 	bcc	a36d0c <ROM$$Size+0x3170c0>
        21a374:	7374206f 	cmnvc	r4, #111	; 0x6f
        21a378:	66206a6f 	strvst	r6, [r0], -pc, ror #20	; fField20
        21a37c:	62000000 	andvs	r0, r0, #0	; 0x0
        21a380:	6f757420 	swivs	0x00757420
        21a384:	6f662070 	swivs	0x00662070
        21a388:	61706572 	cmnvs	r0, r2, ror r5
        21a38c:	00000000 	andeq	r0, r0, r0
        21a390:	6e6f2070 	mcrvs	0, 3, r2, cr15, cr0, {3}
        21a394:	61706572 	cmnvs	r0, r2, ror r5
        21a398:	20747261 	rsbcss	r7, r4, r1, ror #4
        21a39c:	79000000 	stmvcdb	r0, {}
        21a3a0:	72696e74 	rsbvc	r6, r9, #1856	; 0x740
        21a3a4:	65722072 	ldrvsb	r2, [r2, -#114]!
        21a3a8:	65736574 	ldrvsb	r6, [r3, -#1396]!
        21a3ac:	74696e67 	strvcbt	r6, [r9], -#3687
        21a3b0:	00000000 	andeq	r0, r0, r0
        21a3b4:	74696d65 	strvcbt	r6, [r9], -#3429
        21a3b8:	6f757400 	swivs	0x00757400
        21a3bc:	61726d69 	cmnvs	r2, r9, ror #26
        21a3c0:	6e672075 	mcrvs	0, 3, r2, cr7, cr5, {3}
        21a3c4:	70000000 	andvc	r0, r0, r0
        21a3c8:	6f766572 	swivs	0x00766572
        21a3cc:	206f7065 	rsbcs	r7, pc, r5, rrx
        21a3d0:	6e000000 	cdpvs	0, 0, cr0, cr0, cr0, {0}
        21a3d4:	6a616d00 	bvs	1a757dc <TRTMP::$ATLKAttachLink(TAppleTalkMessage *)+0xd60>
        21a3d8:	6e6f2074 	mcrvs	0, 3, r2, cr15, cr4, {3}
        21a3dc:	6f6e6572 	swivs	0x006e6572
        21a3e0:	00000000 	andeq	r0, r0, r0
        21a3e4:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        21a3e8:	00000000 	andeq	r0, r0, r0
        21a3ec:	62757379 	rsbvss	r7, r5, #-469762047	; 0xe4000001
        21a3f0:	00000000 	andeq	r0, r0, r0
        21a3f4:	77616974 	undefined
        21a3f8:	696e6700 	stmvsdb	lr!, {r8, r9, sl, sp, lr}^
        21a3fc:	7072696e 	rsbvcs	r6, r2, lr, ror #18
        21a400:	74696e67 	strvcbt	r6, [r9], -#3687
        21a404:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPSPAPDriver::CancelJob(unsigned char)
 * Address: 0021a408
 */
TPSPAPDriver::CancelJob(unsigned char) {
    /*
        21a408:	e31100ff 	tst	r1, #255	; 0xff
        21a40c:	03a0101c 	moveq	r1, #28	; 0x1c
        21a410:	02411b2b 	subeq	r1, r1, #44032	; 0xac00
        21a414:	05a0101c 	streq	r1, [r0, #28]!	; fField28
        21a418:	13a01001 	movne	r1, #1	; 0x1
        21a41c:	15c01225 	strneb	r1, [r0, #549]	; fField549
        21a420:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPSPAPDriver::Open(void)
 * Address: 0021a424
 */
TPSPAPDriver::Open(void) {
    /*
        21a424:	e1a0c00d 	mov	ip, sp
        21a428:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        21a42c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a430:	e1a04000 	mov	r4, r0
        21a434:	e3a08000 	mov	r8, #0	; 0x0
        21a438:	e580801c 	str	r8, [r0, #28]	; fField28
        21a43c:	e5808018 	str	r8, [r0, #24]	; fField24
        21a440:	e5808020 	str	r8, [r0, #32]	; fField32
        21a444:	e5c08224 	strb	r8, [r0, #548]	; fField548
        21a448:	e5c08225 	strb	r8, [r0, #549]	; fField549
        21a44c:	e5900010 	ldr	r0, [r0, #16]
        21a450:	e5900004 	ldr	r0, [r0, #4]
        21a454:	e5900000 	ldr	r0, [r0]
        21a458:	eb669f3b 	bl	1bc214c <$AllocateRefHandle(long)>
        21a45c:	e1a06000 	mov	r6, r0
        21a460:	e59f5024 	ldr	r5, [pc, #24]	; 21a48c <TPSPAPDriver::Open(void)+0x68>	; fField24
        21a464:	e1a00005 	mov	r0, r5
        21a468:	eb67654c 	bl	1bf39a0 <$OpenAppleTalk(unsigned long)>
        21a46c:	e584001c 	str	r0, [r4, #28]	; fField28
        21a470:	e59f7018 	ldr	r7, [pc, #18]	; 21a490 <TPSPAPDriver::Open(void)+0x6c>
        21a474:	e3300000 	teq	r0, #0	; 0x0
        21a478:	0a000005 	beq	21a494 <TPSPAPDriver::Open(void)+0x70>
        21a47c:	e1a00006 	mov	r0, r6
        21a480:	eb66a34d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21a484:	e1a00007 	mov	r0, r7
        21a488:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        21a48c:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
        21a490:	ffff541f 	swinv	0x00ff541f
        21a494:	e3a00000 	mov	r0, #0	; 0x0
        21a498:	eb615d0f 	bl	1a718dc <TPAPInterface::$__ct(void)>
        21a49c:	e5840018 	str	r0, [r4, #24]	; fField24
        21a4a0:	e3300000 	teq	r0, #0	; 0x0
        21a4a4:	1a000007 	bne	21a4c8 <TPSPAPDriver::Open(void)+0xa4>
        21a4a8:	e1a00005 	mov	r0, r5
        21a4ac:	eb67654a 	bl	1bf39dc <$CloseAppleTalk(unsigned long)>
        21a4b0:	e5a4701c 	str	r7, [r4, #28]!	; fField28
        21a4b4:	e1a04007 	mov	r4, r7
        21a4b8:	e1a00006 	mov	r0, r6
        21a4bc:	eb66a33e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21a4c0:	e1a00004 	mov	r0, r4
        21a4c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        21a4c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        21a4cc:	e59f007c 	ldr	r0, [pc, #7c]	; 21a550 <TPSPAPDriver::Open(void)+0x12c>
        21a4d0:	e5900000 	ldr	r0, [r0]
        21a4d4:	e5901000 	ldr	r1, [r0]
        21a4d8:	e5960000 	ldr	r0, [r6]
        21a4dc:	eb66a75f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        21a4e0:	eb669f19 	bl	1bc214c <$AllocateRefHandle(long)>
        21a4e4:	e1a09000 	mov	r9, r0
        21a4e8:	e59f0064 	ldr	r0, [pc, #64]	; 21a554 <TPSPAPDriver::Open(void)+0x130>
        21a4ec:	e5900000 	ldr	r0, [r0]
        21a4f0:	e5901000 	ldr	r1, [r0]
        21a4f4:	e5990000 	ldr	r0, [r9]
        21a4f8:	eb66a758 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        21a4fc:	eb669f12 	bl	1bc214c <$AllocateRefHandle(long)>
        21a500:	e58d0000 	str	r0, [sp]
        21a504:	e1a00009 	mov	r0, r9
        21a508:	eb66a32b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21a50c:	e59d0000 	ldr	r0, [sp]
        21a510:	e5900000 	ldr	r0, [r0]
        21a514:	e3a0901e 	mov	r9, #30	; 0x1e
        21a518:	e2499b2b 	sub	r9, r9, #44032	; 0xac00
        21a51c:	e3300002 	teq	r0, #2	; 0x2
        21a520:	1a00000c 	bne	21a558 <TPSPAPDriver::Open(void)+0x134>
        21a524:	e584901c 	str	r9, [r4, #28]	; fField28
        21a528:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21a52c:	e3300000 	teq	r0, #0	; 0x0
        21a530:	0a000002 	beq	21a540 <TPSPAPDriver::Open(void)+0x11c>
        21a534:	e3a01001 	mov	r1, #1	; 0x1
        21a538:	e1a0e00f 	mov	lr, pc
        21a53c:	e590f000 	ldr	pc, [r0]
        21a540:	e1a00005 	mov	r0, r5
        21a544:	e5848018 	str	r8, [r4, #24]	; fField24
        21a548:	eb676523 	bl	1bf39dc <$CloseAppleTalk(unsigned long)>
        21a54c:	ea000039 	b	21a638 <TPSPAPDriver::Open(void)+0x214>
        21a550:	00683fc8 	rsbeq	r3, r8, r8, asr #31
        21a554:	00683fd0 	ldreqd	r3, [r8], -#240
        21a558:	e24dd008 	sub	sp, sp, #8	; 0x8
        21a55c:	e28d1008 	add	r1, sp, #8	; 0x8
        21a560:	e1a0000d 	mov	r0, sp
        21a564:	eb669adb 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        21a568:	e1a0100d 	mov	r1, sp
        21a56c:	e28d0004 	add	r0, sp, #4	; 0x4
        21a570:	eb669ad7 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        21a574:	e1a0000d 	mov	r0, sp
        21a578:	e3a01000 	mov	r1, #0	; 0x0
        21a57c:	eb669edf 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        21a580:	e28d0004 	add	r0, sp, #4	; 0x4
        21a584:	eb669ee2 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        21a588:	e1a0a000 	mov	sl, r0
        21a58c:	e24ddc01 	sub	sp, sp, #256	; 0x100
        21a590:	e1a0000d 	mov	r0, sp
        21a594:	eb615cbe 	bl	1a71894 <TString255::$__ct(void)>
        21a598:	e1a0300d 	mov	r3, sp
        21a59c:	e1a0100a 	mov	r1, sl
        21a5a0:	e3a02004 	mov	r2, #4	; 0x4
        21a5a4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21a5a8:	eb61a730 	bl	1a84270 <TPAPInterface::$Open(unsigned short *, unsigned char, TString255 *)>
        21a5ac:	e584001c 	str	r0, [r4, #28]	; fField28
        21a5b0:	e3300000 	teq	r0, #0	; 0x0
        21a5b4:	0a00001a 	beq	21a624 <TPSPAPDriver::Open(void)+0x200>
        21a5b8:	e280cdc6 	add	ip, r0, #12672	; 0x3180
        21a5bc:	e37c0021 	cmn	ip, #33	; 0x21
        21a5c0:	1a00000a 	bne	21a5f0 <TPSPAPDriver::Open(void)+0x1cc>
        21a5c4:	e5dd0000 	ldrb	r0, [sp]
        21a5c8:	e3300000 	teq	r0, #0	; 0x0
        21a5cc:	03a0001d 	moveq	r0, #29	; 0x1d
        21a5d0:	02400b2b 	subeq	r0, r0, #44032	; 0xac00
        21a5d4:	0a000003 	beq	21a5e8 <TPSPAPDriver::Open(void)+0x1c4>
        21a5d8:	e1a0100d 	mov	r1, sp
        21a5dc:	e1a00004 	mov	r0, r4
        21a5e0:	e3a02000 	mov	r2, #0	; 0x0
        21a5e4:	eb649ac4 	bl	1b410fc <TPSPAPDriver::$InterpretPAPStatusString(TString255 *, unsigned char)>
        21a5e8:	e584001c 	str	r0, [r4, #28]	; fField28
        21a5ec:	ea000003 	b	21a600 <TPSPAPDriver::Open(void)+0x1dc>
        21a5f0:	e280cdc6 	add	ip, r0, #12672	; 0x3180
        21a5f4:	e37c0028 	cmn	ip, #40	; 0x28
        21a5f8:	1584701c 	strne	r7, [r4, #28]	; fField28
        21a5fc:	0584901c 	streq	r9, [r4, #28]	; fField28
        21a600:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21a604:	e3300000 	teq	r0, #0	; 0x0
        21a608:	0a000002 	beq	21a618 <TPSPAPDriver::Open(void)+0x1f4>
        21a60c:	e3a01001 	mov	r1, #1	; 0x1
        21a610:	e1a0e00f 	mov	lr, pc
        21a614:	e590f000 	ldr	pc, [r0]
        21a618:	e1a00005 	mov	r0, r5
        21a61c:	e5848018 	str	r8, [r4, #24]	; fField24
        21a620:	eb6764ed 	bl	1bf39dc <$CloseAppleTalk(unsigned long)>
        21a624:	e28ddc01 	add	sp, sp, #256	; 0x100
        21a628:	e28d0004 	add	r0, sp, #4	; 0x4
        21a62c:	e3a01000 	mov	r1, #0	; 0x0
        21a630:	eb669eb2 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        21a634:	e28dd008 	add	sp, sp, #8	; 0x8
        21a638:	e594401c 	ldr	r4, [r4, #28]	; fField28
        21a63c:	e59d0000 	ldr	r0, [sp]
        21a640:	eb66a2dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21a644:	e1a00006 	mov	r0, r6
        21a648:	eb66a2db 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21a64c:	e1a00004 	mov	r0, r4
        21a650:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPAPDriver::OpenPage(void)
 * Address: 0021a654
 */
TPSPAPDriver::OpenPage(void) {
    /*
        21a654:	e1a0c00d 	mov	ip, sp
        21a658:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21a65c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a660:	e1a04000 	mov	r4, r0
        21a664:	eb649a91 	bl	1b410b0 <TPSPAPDriver::$GetStatus(void)>
        21a668:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        21a66c:	e3a00000 	mov	r0, #0	; 0x0
        21a670:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPAPDriver::RepeatPSPage(void)
 * Address: 0021a674
 */
TPSPAPDriver::RepeatPSPage(void) {
    /*
        21a674:	e3a00000 	mov	r0, #0	; 0x0
        21a678:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPSPAPDriver::SendPSText(char *, unsigned long &, unsigned char)
 * Address: 0021a67c
 */
TPSPAPDriver::SendPSText(char *, unsigned long &, unsigned char) {
    /*
        21a67c:	e1a0c00d 	mov	ip, sp
        21a680:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21a684:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a688:	e1a04000 	mov	r4, r0
        21a68c:	e1a05001 	mov	r5, r1
        21a690:	e1a06002 	mov	r6, r2
        21a694:	e20370ff 	and	r7, r3, #255	; 0xff
        21a698:	e5d00225 	ldrb	r0, [r0, #549]	; fField549
        21a69c:	e3300000 	teq	r0, #0	; 0x0
        21a6a0:	13a0001c 	movne	r0, #28	; 0x1c
        21a6a4:	12400b2b 	subne	r0, r0, #44032	; 0xac00
        21a6a8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        21a6ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        21a6b0:	e1a00005 	mov	r0, r5
        21a6b4:	eb666cfd 	bl	1bb5ab0 <$strlen>
        21a6b8:	e3a0382f 	mov	r3, #3080192	; 0x2f0000
        21a6bc:	e283340d 	add	r3, r3, #218103808	; 0xd000000
        21a6c0:	e58d0000 	str	r0, [sp]
        21a6c4:	e92d0008 	stmdb	sp!, {r3}
        21a6c8:	e1a03007 	mov	r3, r7
        21a6cc:	e28d2004 	add	r2, sp, #4	; 0x4
        21a6d0:	e1a01005 	mov	r1, r5
        21a6d4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21a6d8:	eb618dfc 	bl	1a7ded0 <TPAPInterface::$PutData(char *, unsigned long *, unsigned char, unsigned long)>
        21a6dc:	e28dd004 	add	sp, sp, #4	; 0x4
        21a6e0:	e1b05000 	movs	r5, r0
        21a6e4:	0a00000f 	beq	21a728 <TPSPAPDriver::SendPSText(char *, unsigned long &, unsigned char)+0xac>
        21a6e8:	e285cdc6 	add	ip, r5, #12672	; 0x3180
        21a6ec:	e37c002c 	cmn	ip, #44	; 0x2c
        21a6f0:	1a000005 	bne	21a70c <TPSPAPDriver::SendPSText(char *, unsigned long &, unsigned char)+0x90>
        21a6f4:	e1a00004 	mov	r0, r4
        21a6f8:	eb649a6c 	bl	1b410b0 <TPSPAPDriver::$GetStatus(void)>
        21a6fc:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        21a700:	e3300000 	teq	r0, #0	; 0x0
        21a704:	11a05000 	movne	r5, r0
        21a708:	ea00000f 	b	21a74c <TPSPAPDriver::SendPSText(char *, unsigned long &, unsigned char)+0xd0>
        21a70c:	e285cdc6 	add	ip, r5, #12672	; 0x3180
        21a710:	e37c0024 	cmn	ip, #36	; 0x24
        21a714:	159f5004 	ldrne	r5, [pc, #4]	; 21a720 <TPSPAPDriver::SendPSText(char *, unsigned long &, unsigned char)+0xa4>
        21a718:	059f5004 	ldreq	r5, [pc, #4]	; 21a724 <TPSPAPDriver::SendPSText(char *, unsigned long &, unsigned char)+0xa8>
        21a71c:	ea00000a 	b	21a74c <TPSPAPDriver::SendPSText(char *, unsigned long &, unsigned char)+0xd0>
        21a720:	ffff541f 	swinv	0x00ff541f
        21a724:	ffff541b 	swinv	0x00ff541b
        21a728:	e5940020 	ldr	r0, [r4, #32]	; fField32
        21a72c:	e2800001 	add	r0, r0, #1	; 0x1
        21a730:	e5840020 	str	r0, [r4, #32]	; fField32
        21a734:	e2000007 	and	r0, r0, #7	; 0x7
        21a738:	e3300007 	teq	r0, #7	; 0x7
        21a73c:	1a000002 	bne	21a74c <TPSPAPDriver::SendPSText(char *, unsigned long &, unsigned char)+0xd0>
        21a740:	e1a00004 	mov	r0, r4
        21a744:	eb649a59 	bl	1b410b0 <TPSPAPDriver::$GetStatus(void)>
        21a748:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        21a74c:	e59d0000 	ldr	r0, [sp]
        21a750:	e5860000 	str	r0, [r6]
        21a754:	e1a00005 	mov	r0, r5
        21a758:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPAPDriver::SendPSBinary(char *, unsigned long, unsigned long &)
 * Address: 0021a75c
 */
TPSPAPDriver::SendPSBinary(char *, unsigned long, unsigned long &) {
    /*
        21a75c:	e1a0c00d 	mov	ip, sp
        21a760:	e92dd81f 	stmdb	sp!, {r0, r1, r2, r3, r4, fp, ip, lr, pc}
        21a764:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a768:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        21a76c:	e5d01225 	ldrb	r1, [r0, #549]	; fField549
        21a770:	e3310000 	teq	r1, #0	; 0x0
        21a774:	13a0001c 	movne	r0, #28	; 0x1c
        21a778:	12400b2b 	subne	r0, r0, #44032	; 0xac00
        21a77c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        21a780:	e3a0382f 	mov	r3, #3080192	; 0x2f0000
        21a784:	e283340d 	add	r3, r3, #218103808	; 0xd000000
        21a788:	e92d0008 	stmdb	sp!, {r3}
        21a78c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        21a790:	e24b2018 	sub	r2, fp, #24	; 0x18
        21a794:	e3a03000 	mov	r3, #0	; 0x0
        21a798:	e51b101c 	ldr	r1, [fp, -#28]	; fField28
        21a79c:	eb618dcb 	bl	1a7ded0 <TPAPInterface::$PutData(char *, unsigned long *, unsigned char, unsigned long)>
        21a7a0:	e28dd004 	add	sp, sp, #4	; 0x4
        21a7a4:	e1b04000 	movs	r4, r0
        21a7a8:	0a000010 	beq	21a7f0 <TPSPAPDriver::SendPSBinary(char *, unsigned long, unsigned long &)+0x94>
        21a7ac:	e284cdc6 	add	ip, r4, #12672	; 0x3180
        21a7b0:	e37c002c 	cmn	ip, #44	; 0x2c
        21a7b4:	1a000006 	bne	21a7d4 <TPSPAPDriver::SendPSBinary(char *, unsigned long, unsigned long &)+0x78>
        21a7b8:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        21a7bc:	eb649a3b 	bl	1b410b0 <TPSPAPDriver::$GetStatus(void)>
        21a7c0:	e51b1020 	ldr	r1, [fp, -#32]	; fField32
        21a7c4:	e5a1001c 	str	r0, [r1, #28]!	; fField28
        21a7c8:	e3300000 	teq	r0, #0	; 0x0
        21a7cc:	11a04000 	movne	r4, r0
        21a7d0:	ea000011 	b	21a81c <TPSPAPDriver::SendPSBinary(char *, unsigned long, unsigned long &)+0xc0>
        21a7d4:	e284cdc6 	add	ip, r4, #12672	; 0x3180
        21a7d8:	e37c0024 	cmn	ip, #36	; 0x24
        21a7dc:	159f4004 	ldrne	r4, [pc, #4]	; 21a7e8 <TPSPAPDriver::SendPSBinary(char *, unsigned long, unsigned long &)+0x8c>
        21a7e0:	059f4004 	ldreq	r4, [pc, #4]	; 21a7ec <TPSPAPDriver::SendPSBinary(char *, unsigned long, unsigned long &)+0x90>
        21a7e4:	ea00000c 	b	21a81c <TPSPAPDriver::SendPSBinary(char *, unsigned long, unsigned long &)+0xc0>
        21a7e8:	ffff541f 	swinv	0x00ff541f
        21a7ec:	ffff541b 	swinv	0x00ff541b
        21a7f0:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        21a7f4:	e5901020 	ldr	r1, [r0, #32]	; fField32
        21a7f8:	e2811001 	add	r1, r1, #1	; 0x1
        21a7fc:	e5a01020 	str	r1, [r0, #32]!	; fField32
        21a800:	e2011007 	and	r1, r1, #7	; 0x7
        21a804:	e3310007 	teq	r1, #7	; 0x7
        21a808:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        21a80c:	1a000002 	bne	21a81c <TPSPAPDriver::SendPSBinary(char *, unsigned long, unsigned long &)+0xc0>
        21a810:	eb649a26 	bl	1b410b0 <TPSPAPDriver::$GetStatus(void)>
        21a814:	e51b1020 	ldr	r1, [fp, -#32]	; fField32
        21a818:	e5a1001c 	str	r0, [r1, #28]!	; fField28
        21a81c:	e24b1018 	sub	r1, fp, #24	; 0x18
        21a820:	e8910003 	ldmia	r1, {r0, r1}
        21a824:	e5810000 	str	r0, [r1]
        21a828:	e1a00004 	mov	r0, r4
        21a82c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPAPDriver::RecvPSText(char *, unsigned long &)
 * Address: 0021a830
 */
TPSPAPDriver::RecvPSText(char *, unsigned long &) {
    /*
        21a830:	e1a0c00d 	mov	ip, sp
        21a834:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21a838:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a83c:	e1a04000 	mov	r4, r0
        21a840:	e1a06001 	mov	r6, r1
        21a844:	e1a05002 	mov	r5, r2
        21a848:	e3a00c02 	mov	r0, #512	; 0x200
        21a84c:	e2841024 	add	r1, r4, #36	; 0x24
        21a850:	e52d0004 	str	r0, [sp, -#4]!
        21a854:	e1a0200d 	mov	r2, sp
        21a858:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21a85c:	eb617d24 	bl	1a79cf4 <TPAPInterface::$GetData(char *, unsigned long *)>
        21a860:	e1b07000 	movs	r7, r0
        21a864:	0a000001 	beq	21a870 <TPSPAPDriver::RecvPSText(char *, unsigned long &)+0x40>
        21a868:	e1a00007 	mov	r0, r7
        21a86c:	ea000006 	b	21a88c <TPSPAPDriver::RecvPSText(char *, unsigned long &)+0x5c>
        21a870:	e59d0000 	ldr	r0, [sp]
        21a874:	e2400004 	sub	r0, r0, #4	; 0x4
        21a878:	e5951000 	ldr	r1, [r5]
        21a87c:	e1500001 	cmp	r0, r1
        21a880:	9a000002 	bls	21a890 <TPSPAPDriver::RecvPSText(char *, unsigned long &)+0x60>
        21a884:	e3a00055 	mov	r0, #85	; 0x55
        21a888:	e2400c32 	sub	r0, r0, #12800	; 0x3200
        21a88c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        21a890:	e5850000 	str	r0, [r5]
        21a894:	e5c40027 	strb	r0, [r4, #39]	; fField39
        21a898:	e2840027 	add	r0, r4, #39	; 0x27
        21a89c:	e1a01006 	mov	r1, r6
        21a8a0:	eb62119f 	bl	1a9ef24 <$PToCString__FPUcT1>
        21a8a4:	eaffffef 	b	21a868 <TPSPAPDriver::RecvPSText(char *, unsigned long &)+0x38>
    */
}

/**
 * Symbol: TPSPAPDriver::Close(unsigned char)
 * Address: 0021a8a8
 */
TPSPAPDriver::Close(unsigned char) {
    /*
        21a8a8:	e1a0c00d 	mov	ip, sp
        21a8ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21a8b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a8b4:	e1a04000 	mov	r4, r0
        21a8b8:	e20110ff 	and	r1, r1, #255	; 0xff
        21a8bc:	e5900018 	ldr	r0, [r0, #24]	; fField24
        21a8c0:	eb6174ba 	bl	1a77bb0 <TPAPInterface::$Close(unsigned char)>
        21a8c4:	e1b05000 	movs	r5, r0
        21a8c8:	e59f6030 	ldr	r6, [pc, #30]	; 21a900 <TPSPAPDriver::Close(unsigned char)+0x58>
        21a8cc:	0a000010 	beq	21a914 <TPSPAPDriver::Close(unsigned char)+0x6c>
        21a8d0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21a8d4:	e3300000 	teq	r0, #0	; 0x0
        21a8d8:	1a00000d 	bne	21a914 <TPSPAPDriver::Close(unsigned char)+0x6c>
        21a8dc:	e285cdc6 	add	ip, r5, #12672	; 0x3180
        21a8e0:	e37c002c 	cmn	ip, #44	; 0x2c
        21a8e4:	1a000006 	bne	21a904 <TPSPAPDriver::Close(unsigned char)+0x5c>
        21a8e8:	e1a00004 	mov	r0, r4
        21a8ec:	eb6499ef 	bl	1b410b0 <TPSPAPDriver::$GetStatus(void)>
        21a8f0:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        21a8f4:	e3300000 	teq	r0, #0	; 0x0
        21a8f8:	11a05000 	movne	r5, r0
        21a8fc:	ea000011 	b	21a948 <TPSPAPDriver::Close(unsigned char)+0xa0>
        21a900:	ffff541f 	swinv	0x00ff541f
        21a904:	e285cdc6 	add	ip, r5, #12672	; 0x3180
        21a908:	e37c0024 	cmn	ip, #36	; 0x24
        21a90c:	11a05006 	movne	r5, r6
        21a910:	059f5038 	ldreq	r5, [pc, #38]	; 21a950 <TPSPAPDriver::Close(unsigned char)+0xa8>
        21a914:	e5d40224 	ldrb	r0, [r4, #548]	; fField548
        21a918:	e3300000 	teq	r0, #0	; 0x0
        21a91c:	1a000009 	bne	21a948 <TPSPAPDriver::Close(unsigned char)+0xa0>
        21a920:	e59f002c 	ldr	r0, [pc, #2c]	; 21a954 <TPSPAPDriver::Close(unsigned char)+0xac>
        21a924:	eb67642c 	bl	1bf39dc <$CloseAppleTalk(unsigned long)>
        21a928:	e1b05000 	movs	r5, r0
        21a92c:	e3a00001 	mov	r0, #1	; 0x1
        21a930:	e5c40224 	strb	r0, [r4, #548]	; fField548
        21a934:	0a000003 	beq	21a948 <TPSPAPDriver::Close(unsigned char)+0xa0>
        21a938:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21a93c:	e3300000 	teq	r0, #0	; 0x0
        21a940:	05a4601c 	streq	r6, [r4, #28]!	; fField28
        21a944:	01a05006 	moveq	r5, r6
        21a948:	e1a00005 	mov	r0, r5
        21a94c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        21a950:	ffff541b 	swinv	0x00ff541b
        21a954:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
    */
}

/**
 * Symbol: TPSPAPDriver::ClosePage(void)
 * Address: 0021a958
 */
TPSPAPDriver::ClosePage(void) {
    /*
        21a958:	e1a0c00d 	mov	ip, sp
        21a95c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21a960:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a964:	e1a04000 	mov	r4, r0
        21a968:	e590001c 	ldr	r0, [r0, #28]	; fField28
        21a96c:	e3300000 	teq	r0, #0	; 0x0
        21a970:	1a000002 	bne	21a980 <TPSPAPDriver::ClosePage(void)+0x28>
        21a974:	e1a00004 	mov	r0, r4
        21a978:	eb6499cc 	bl	1b410b0 <TPSPAPDriver::$GetStatus(void)>
        21a97c:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        21a980:	e3a00000 	mov	r0, #0	; 0x0
        21a984:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPAPDriver::Delete(void)
 * Address: 0021a988
 */
TPSPAPDriver::Delete(void) {
    /*
        21a988:	e5900018 	ldr	r0, [r0, #24]	; fField24
        21a98c:	e3300000 	teq	r0, #0	; 0x0
        21a990:	01a0f00e 	moveq	pc, lr
        21a994:	e3a01001 	mov	r1, #1	; 0x1
        21a998:	e590f000 	ldr	pc, [r0]
    */
}

/**
 * Symbol: TPSPAPDriver::GetPAPStatus(void)
 * Address: 0021a99c
 */
TPSPAPDriver::GetPAPStatus(void) {
    /*
        21a99c:	e1a0c00d 	mov	ip, sp
        21a9a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21a9a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a9a8:	e1a04000 	mov	r4, r0
        21a9ac:	e24ddc01 	sub	sp, sp, #256	; 0x100
        21a9b0:	e1a0000d 	mov	r0, sp
        21a9b4:	eb615bb6 	bl	1a71894 <TString255::$__ct(void)>
        21a9b8:	e1a0100d 	mov	r1, sp
        21a9bc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21a9c0:	eb6180dd 	bl	1a7ad3c <TPAPInterface::$GetStatus(TString255 *)>
        21a9c4:	e3300000 	teq	r0, #0	; 0x0
        21a9c8:	159f0014 	ldrne	r0, [pc, #14]	; 21a9e4 <TPSPAPDriver::GetPAPStatus(void)+0x48>
        21a9cc:	1a000003 	bne	21a9e0 <TPSPAPDriver::GetPAPStatus(void)+0x44>
        21a9d0:	e1a0100d 	mov	r1, sp
        21a9d4:	e1a00004 	mov	r0, r4
        21a9d8:	e3a02001 	mov	r2, #1	; 0x1
        21a9dc:	eb6499c6 	bl	1b410fc <TPSPAPDriver::$InterpretPAPStatusString(TString255 *, unsigned char)>
        21a9e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        21a9e4:	ffff541f 	swinv	0x00ff541f
    */
}

/**
 * Symbol: TPSPAPDriver::GetStatus(void)
 * Address: 0021a9e8
 */
TPSPAPDriver::GetStatus(void) {
    /*
        21a9e8:	e1a0c00d 	mov	ip, sp
        21a9ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21a9f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a9f4:	e1a04000 	mov	r4, r0
        21a9f8:	e3a00c02 	mov	r0, #512	; 0x200
        21a9fc:	e52d0204 	str	r0, [sp, -#516]!
        21aa00:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21aa04:	e3300000 	teq	r0, #0	; 0x0
        21aa08:	0a000002 	beq	21aa18 <TPSPAPDriver::GetStatus(void)+0x30>
        21aa0c:	e1a00004 	mov	r0, r4
        21aa10:	eb6499a1 	bl	1b4109c <TPSPAPDriver::$GetPAPStatus(void)>
        21aa14:	ea000019 	b	21aa80 <TPSPAPDriver::GetStatus(void)+0x98>
        21aa18:	e2841024 	add	r1, r4, #36	; 0x24
        21aa1c:	e1a0200d 	mov	r2, sp
        21aa20:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21aa24:	eb617cb2 	bl	1a79cf4 <TPAPInterface::$GetData(char *, unsigned long *)>
        21aa28:	e3a05056 	mov	r5, #86	; 0x56
        21aa2c:	e2455c32 	sub	r5, r5, #12800	; 0x3200
        21aa30:	e3300000 	teq	r0, #0	; 0x0
        21aa34:	0a000004 	beq	21aa4c <TPSPAPDriver::GetStatus(void)+0x64>
        21aa38:	e1300005 	teq	r0, r5
        21aa3c:	159f0004 	ldrne	r0, [pc, #4]	; 21aa48 <TPSPAPDriver::GetStatus(void)+0x60>
        21aa40:	1a00000e 	bne	21aa80 <TPSPAPDriver::GetStatus(void)+0x98>
        21aa44:	ea00000c 	b	21aa7c <TPSPAPDriver::GetStatus(void)+0x94>
        21aa48:	ffff541f 	swinv	0x00ff541f
        21aa4c:	e59d0000 	ldr	r0, [sp]
        21aa50:	e2400004 	sub	r0, r0, #4	; 0x4
        21aa54:	e5c40027 	strb	r0, [r4, #39]	; fField39
        21aa58:	e2840027 	add	r0, r4, #39	; 0x27
        21aa5c:	e28d1004 	add	r1, sp, #4	; 0x4
        21aa60:	eb62112f 	bl	1a9ef24 <$PToCString__FPUcT1>
        21aa64:	e28d1004 	add	r1, sp, #4	; 0x4
        21aa68:	e1a00004 	mov	r0, r4
        21aa6c:	e3a02001 	mov	r2, #1	; 0x1
        21aa70:	eb649da2 	bl	1b42100 <TPSPAPDriver::$InterpretPAPString(char *, unsigned char)>
        21aa74:	e1300005 	teq	r0, r5
        21aa78:	1a000000 	bne	21aa80 <TPSPAPDriver::GetStatus(void)+0x98>
        21aa7c:	e3a00000 	mov	r0, #0	; 0x0
        21aa80:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPAPDriver::InterpretPAPStatusString(TString255 *, unsigned char)
 * Address: 0021aa84
 */
TPSPAPDriver::InterpretPAPStatusString(TString255 *, unsigned char) {
    /*
        21aa84:	e1a0c00d 	mov	ip, sp
        21aa88:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21aa8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21aa90:	e1a04000 	mov	r4, r0
        21aa94:	e20250ff 	and	r5, r2, #255	; 0xff
        21aa98:	e24ddc01 	sub	sp, sp, #256	; 0x100
        21aa9c:	e1a00001 	mov	r0, r1
        21aaa0:	e1a0100d 	mov	r1, sp
        21aaa4:	eb62111e 	bl	1a9ef24 <$PToCString__FPUcT1>
        21aaa8:	e1a02005 	mov	r2, r5
        21aaac:	e1a0100d 	mov	r1, sp
        21aab0:	e1a00004 	mov	r0, r4
        21aab4:	eb649d91 	bl	1b42100 <TPSPAPDriver::$InterpretPAPString(char *, unsigned char)>
        21aab8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPAPDriver::InterpretPAPString(char *, unsigned char)
 * Address: 0021aabc
 */
TPSPAPDriver::InterpretPAPString(char *, unsigned char) {
    /*
        21aabc:	e1a0c00d 	mov	ip, sp
        21aac0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        21aac4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21aac8:	e1a05000 	mov	r5, r0
        21aacc:	e1a04001 	mov	r4, r1
        21aad0:	e20290ff 	and	r9, r2, #255	; 0xff
        21aad4:	e3a06e42 	mov	r6, #1056	; 0x420
        21aad8:	e2466a0b 	sub	r6, r6, #45056	; 0xb000
        21aadc:	e1a0a001 	mov	sl, r1
        21aae0:	e28f0f2b 	add	r0, pc, #172	; 0xac
        21aae4:	e1a07000 	mov	r7, r0
        21aae8:	eb666bf0 	bl	1bb5ab0 <$strlen>
        21aaec:	e1a08000 	mov	r8, r0
        21aaf0:	e1a01007 	mov	r1, r7
        21aaf4:	e1a00004 	mov	r0, r4
        21aaf8:	eb666bf0 	bl	1bb5ac0 <$strstr>
        21aafc:	e3300000 	teq	r0, #0	; 0x0
        21ab00:	0a000005 	beq	21ab1c <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0x60>
        21ab04:	e0804008 	add	r4, r0, r8
        21ab08:	e1a01007 	mov	r1, r7
        21ab0c:	e1a00004 	mov	r0, r4
        21ab10:	eb666bea 	bl	1bb5ac0 <$strstr>
        21ab14:	e3300000 	teq	r0, #0	; 0x0
        21ab18:	1afffff9 	bne	21ab04 <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0x48>
        21ab1c:	e13a0004 	teq	sl, r4
        21ab20:	128f0f1d 	addne	r0, pc, #116	; 0x74
        21ab24:	028f0f20 	addeq	r0, pc, #128	; 0x80
        21ab28:	e1a07000 	mov	r7, r0
        21ab2c:	eb666bdf 	bl	1bb5ab0 <$strlen>
        21ab30:	e1a08000 	mov	r8, r0
        21ab34:	e1a01007 	mov	r1, r7
        21ab38:	e1a00004 	mov	r0, r4
        21ab3c:	eb666bdf 	bl	1bb5ac0 <$strstr>
        21ab40:	e3300000 	teq	r0, #0	; 0x0
        21ab44:	0a000005 	beq	21ab60 <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0xa4>
        21ab48:	e0804008 	add	r4, r0, r8
        21ab4c:	e1a01007 	mov	r1, r7
        21ab50:	e1a00004 	mov	r0, r4
        21ab54:	eb666bd9 	bl	1bb5ac0 <$strstr>
        21ab58:	e3300000 	teq	r0, #0	; 0x0
        21ab5c:	1afffff9 	bne	21ab48 <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0x8c>
        21ab60:	e59f704c 	ldr	r7, [pc, #4c]	; 21abb4 <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0xf8>
        21ab64:	e59f804c 	ldr	r8, [pc, #4c]	; 21abb8 <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0xfc>
        21ab68:	e5980000 	ldr	r0, [r8]
        21ab6c:	e1570000 	cmp	r7, r0
        21ab70:	2a000014 	bcs	21abc8 <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0x10c>
        21ab74:	e1a00004 	mov	r0, r4
        21ab78:	e5971004 	ldr	r1, [r7, #4]
        21ab7c:	eb666bcf 	bl	1bb5ac0 <$strstr>
        21ab80:	e3300000 	teq	r0, #0	; 0x0
        21ab84:	02877008 	addeq	r7, r7, #8	; 0x8
        21ab88:	0a00000b 	beq	21abbc <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0x100>
        21ab8c:	e5976000 	ldr	r6, [r7]
        21ab90:	ea00000c 	b	21abc8 <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0x10c>
        21ab94:	73746174 	cmnvc	r4, #29	; 0x1d
        21ab98:	75733a00 	ldrvcb	r3, [r3, -#2560]!
        21ab9c:	5072696e 	rsbpls	r6, r2, lr, ror #18
        21aba0:	74657245 	strvcbt	r7, [r5], -#581	; fField581
        21aba4:	72726f72 	rsbvcs	r6, r2, #456	; 0x1c8
        21aba8:	3a000000 	bcc	21abb0 <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0xf4>
        21abac:	4572726f 	ldrmib	r7, [r2, -#623]!
        21abb0:	723a0000 	eorvcs	r0, sl, #0	; 0x0
        21abb4:	00378c20 	eoreqs	r8, r7, r0, lsr #24
        21abb8:	00378c98 	mlaeqs	r7, r8, ip, r8
        21abbc:	e5980000 	ldr	r0, [r8]
        21abc0:	e1570000 	cmp	r7, r0
        21abc4:	3affffea 	bcc	21ab74 <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0xb8>
        21abc8:	e286ccab 	add	ip, r6, #43776	; 0xab00
        21abcc:	e37c00e3 	cmn	ip, #227	; 0xe3
        21abd0:	1a000002 	bne	21abe0 <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0x124>
        21abd4:	e3390000 	teq	r9, #0	; 0x0
        21abd8:	13a06000 	movne	r6, #0	; 0x0
        21abdc:	ea000001 	b	21abe8 <TPSPAPDriver::InterpretPAPString(char *, unsigned char)+0x12c>
        21abe0:	e3360000 	teq	r6, #0	; 0x0
        21abe4:	05b5601c 	ldreq	r6, [r5, #28]!	; fField28
        21abe8:	e1a00006 	mov	r0, r6
        21abec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPAPDriver::IsProblemResolved(void)
 * Address: 0021abf0
 */
TPSPAPDriver::IsProblemResolved(void) {
    /*
        21abf0:	e1a0c00d 	mov	ip, sp
        21abf4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21abf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21abfc:	e1a04000 	mov	r4, r0
        21ac00:	eb64992a 	bl	1b410b0 <TPSPAPDriver::$GetStatus(void)>
        21ac04:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        21ac08:	e3300000 	teq	r0, #0	; 0x0
        21ac0c:	13a00001 	movne	r0, #1	; 0x1
        21ac10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__12TPSPAPDriverSFv
 * Address: 00388520
 */
void TPSPAPDriver::ClassInfo() {
    /*
        388520:	e24f0044 	sub	r0, pc, #68	; 0x44
        388524:	e1a0f00e 	mov	pc, lr
        388528:	e3a00000 	mov	r0, #0	; 0x0
        38852c:	e1a0f00e 	mov	pc, lr
        388530:	54505350 	ldrplb	r5, [r0], -#848	; fField848
        388534:	41504472 	cmpmi	r0, r2, ror r4
        388538:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        38853c:	00545053 	subeqs	r5, r4, r3, asr r0
        388540:	5072696e 	rsbpls	r6, r2, lr, ror #18
        388544:	74657244 	strvcbt	r7, [r5], -#580
        388548:	72697665 	rsbvc	r7, r9, #105906176	; 0x6500000
        38854c:	72000000 	andvc	r0, r0, #0	; 0x0
        388550:	00000000 	andeq	r0, r0, r0
        388554:	eafffff1 	b	388520 <ClassInfo__12TPSPAPDriverSFv>
        388558:	ea5ede9b 	b	1b3ffcc <TPSPAPDriver::$Delete(void)>
        38855c:	ea5ee6fa 	b	1b4214c <TPSPAPDriver::$Open(void)>
        388560:	ea5eda7a 	b	1b3ef50 <TPSPAPDriver::$Close(unsigned char)>
        388564:	ea5ee700 	b	1b4216c <TPSPAPDriver::$OpenPage(void)>
        388568:	ea5eda80 	b	1b3ef70 <TPSPAPDriver::$ClosePage(void)>
        38856c:	ea5eda63 	b	1b3ef00 <TPSPAPDriver::$CancelJob(unsigned char)>
        388570:	ea5ee6e6 	b	1b42110 <TPSPAPDriver::$IsProblemResolved(void)>
        388574:	ea5ee2cd 	b	1b410b0 <TPSPAPDriver::$GetStatus(void)>
        388578:	ea5effad 	b	1b48434 <TPSPAPDriver::$SendPSText(char *, unsigned long &, unsigned char)>
        38857c:	ea5eef1f 	b	1b44200 <TPSPAPDriver::$RepeatPSPage(void)>
        388580:	ea5ef769 	b	1b4632c <TPSPAPDriver::$SendPSBinary(char *, unsigned long, unsigned long &)>
        388584:	ea5effab 	b	1b48438 <TPSPAPDriver::$RecvPSText(char *, unsigned long &)>
        388588:	e1a0000f 	mov	r0, pc
        38858c:	e1a0f00e 	mov	pc, lr
        388590:	54536372 	ldrplb	r6, [r3], -#882
        388594:	65656e44 	strvsb	r6, [r5, -#3652]!
        388598:	72697665 	rsbvc	r7, r9, #105906176	; 0x6500000
        38859c:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

