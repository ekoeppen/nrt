#include "include/TCommTool.h"

/**
 * Symbol: TCommTool::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)
 * Address: 0006d4cc
 */
TCommTool::ProcessOptionsCleanUp(long, TCommToolOptionInfo *) {
    /*
         6d4cc:	e1a0c00d 	mov	ip, sp
         6d4d0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         6d4d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         6d4d8:	e1a05000 	mov	r5, r0
         6d4dc:	e1a06001 	mov	r6, r1
         6d4e0:	e1a04002 	mov	r4, r2
         6d4e4:	e5920000 	ldr	r0, [r2]
         6d4e8:	e3100020 	tst	r0, #32	; 0x20
         6d4ec:	1594000c 	ldrne	r0, [r4, #12]
         6d4f0:	13300000 	teqne	r0, #0	; 0x0
         6d4f4:	0a000003 	beq	6d508 <TCommTool::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0x3c>
         6d4f8:	e3360000 	teq	r6, #0	; 0x0
         6d4fc:	1a000001 	bne	6d508 <TCommTool::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0x3c>
         6d500:	eb6d3611 	bl	1bbad4c <TOptionArray::$ShadowCopyBack(void)>
         6d504:	e1a06000 	mov	r6, r0
         6d508:	e5940000 	ldr	r0, [r4]
         6d50c:	e3c0003b 	bic	r0, r0, #59	; 0x3b
         6d510:	e5840000 	str	r0, [r4]
         6d514:	e3100004 	tst	r0, #4	; 0x4
         6d518:	0a000006 	beq	6d538 <TCommTool::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0x6c>
         6d51c:	e594000c 	ldr	r0, [r4, #12]
         6d520:	e3300000 	teq	r0, #0	; 0x0
         6d524:	13a01001 	movne	r1, #1	; 0x1
         6d528:	1b6d257f 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         6d52c:	e5940000 	ldr	r0, [r4]
         6d530:	e3c00004 	bic	r0, r0, #4	; 0x4
         6d534:	e5840000 	str	r0, [r4]
         6d538:	e3a07000 	mov	r7, #0	; 0x0
         6d53c:	e584700c 	str	r7, [r4, #12]
         6d540:	e5940014 	ldr	r0, [r4, #20]
         6d544:	e3300000 	teq	r0, #0	; 0x0
         6d548:	0a000002 	beq	6d558 <TCommTool::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0x8c>
         6d54c:	e3a01001 	mov	r1, #1	; 0x1
         6d550:	eb6d2579 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         6d554:	e5847014 	str	r7, [r4, #20]
         6d558:	e5b40004 	ldr	r0, [r4, #4]!
         6d55c:	e3300002 	teq	r0, #2	; 0x2
         6d560:	1a00000f 	bne	6d5a4 <TCommTool::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0xd8>
         6d564:	e595020c 	ldr	r0, [r5, #524]	; fField524
         6d568:	e3300000 	teq	r0, #0	; 0x0
         6d56c:	0a000001 	beq	6d578 <TCommTool::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0xac>
         6d570:	eb6d805a 	bl	1bcd6e0 <$__dl(void *)>
         6d574:	e585720c 	str	r7, [r5, #524]	; fField524
         6d578:	e5950210 	ldr	r0, [r5, #528]	; fField528
         6d57c:	e3300000 	teq	r0, #0	; 0x0
         6d580:	0a000002 	beq	6d590 <TCommTool::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0xc4>
         6d584:	e3a01001 	mov	r1, #1	; 0x1
         6d588:	eb6d8460 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         6d58c:	e5857210 	str	r7, [r5, #528]	; fField528
         6d590:	e5950214 	ldr	r0, [r5, #532]	; fField532
         6d594:	e3300000 	teq	r0, #0	; 0x0
         6d598:	0a000001 	beq	6d5a4 <TCommTool::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0xd8>
         6d59c:	eb6d804f 	bl	1bcd6e0 <$__dl(void *)>
         6d5a0:	e5a57214 	str	r7, [r5, #532]!	; fField532
         6d5a4:	e1a00006 	mov	r0, r6
         6d5a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::ForwardOptions(void)
 * Address: 0006d5ac
 */
TCommTool::ForwardOptions(void) {
    /*
         6d5ac:	e3a00000 	mov	r0, #0	; 0x0
         6d5b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 0006d5b4
 */
TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         6d5b4:	e1a0c00d 	mov	ip, sp
         6d5b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6d5bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         6d5c0:	e1a04001 	mov	r4, r1
         6d5c4:	e3a05000 	mov	r5, #0	; 0x0
         6d5c8:	e59fc050 	ldr	ip, [pc, #50]	; 6d620 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6c>
         6d5cc:	e132000c 	teq	r2, ip
         6d5d0:	0a000023 	beq	6d664 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xb0>
         6d5d4:	e59fc048 	ldr	ip, [pc, #48]	; 6d624 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x70>
         6d5d8:	e132000c 	teq	r2, ip
         6d5dc:	0a000013 	beq	6d630 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x7c>
         6d5e0:	e59fc040 	ldr	ip, [pc, #40]	; 6d628 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x74>	; fField40
         6d5e4:	e132000c 	teq	r2, ip
         6d5e8:	0a000031 	beq	6d6b4 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x100>
         6d5ec:	e59fc038 	ldr	ip, [pc, #38]	; 6d62c <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x78>
         6d5f0:	e132000c 	teq	r2, ip
         6d5f4:	1a00003d 	bne	6d6f0 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x13c>
         6d5f8:	e3330c01 	teq	r3, #256	; 0x100
         6d5fc:	13330c02 	teqne	r3, #512	; 0x200
         6d600:	03e05002 	mvneq	r5, #2	; 0x2
         6d604:	0a00003a 	beq	6d6f4 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         6d608:	e3330b01 	teq	r3, #1024	; 0x400
         6d60c:	1a00001c 	bne	6d684 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xd0>
         6d610:	e2801f52 	add	r1, r0, #328	; 0x148
         6d614:	e1a00004 	mov	r0, r4
         6d618:	eb6d296c 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         6d61c:	ea000034 	b	6d6f4 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         6d620:	6370636d 	cmnvs	r0, #-1275068415	; 0xb4000001
         6d624:	63707374 	cmnvs	r0, #-805306367	; 0xd0000001
         6d628:	73696420 	cmnvc	r9, #536870912	; 0x20000000
         6d62c:	74696e66 	strvcbt	r6, [r9], -#3686
         6d630:	e3330c01 	teq	r3, #256	; 0x100
         6d634:	13330c02 	teqne	r3, #512	; 0x200
         6d638:	05d4100c 	ldreqb	r1, [r4, #12]
         6d63c:	05c011d1 	streqb	r1, [r0, #465]	; fField465
         6d640:	0a00002b 	beq	6d6f4 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         6d644:	e3330c03 	teq	r3, #768	; 0x300
         6d648:	15d001d1 	ldrneb	r0, [r0, #465]	; fField465
         6d64c:	1a000016 	bne	6d6ac <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xf8>
         6d650:	e24dd010 	sub	sp, sp, #16	; 0x10
         6d654:	e1a0000d 	mov	r0, sp
         6d658:	eb6e5afe 	bl	1c04258 <TCMOPassiveState::$__ct(void)>
         6d65c:	e1a0100d 	mov	r1, sp
         6d660:	ea000019 	b	6d6cc <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x118>
         6d664:	e3330c01 	teq	r3, #256	; 0x100
         6d668:	13330c02 	teqne	r3, #512	; 0x200
         6d66c:	1a000006 	bne	6d68c <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xd8>
         6d670:	e5901018 	ldr	r1, [r0, #24]	; fField24
         6d674:	e3110c01 	tst	r1, #256	; 0x100
         6d678:	05d4100c 	ldreqb	r1, [r4, #12]
         6d67c:	05c011d0 	streqb	r1, [r0, #464]	; fField464
         6d680:	0a00001b 	beq	6d6f4 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         6d684:	e3e05000 	mvn	r5, #0	; 0x0
         6d688:	ea000019 	b	6d6f4 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         6d68c:	e3330c03 	teq	r3, #768	; 0x300
         6d690:	1a000004 	bne	6d6a8 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xf4>
         6d694:	e24dd010 	sub	sp, sp, #16	; 0x10
         6d698:	e1a0000d 	mov	r0, sp
         6d69c:	eb6e5aec 	bl	1c04254 <TCMOPassiveClaim::$__ct(void)>
         6d6a0:	e1a0100d 	mov	r1, sp
         6d6a4:	ea000008 	b	6d6cc <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x118>
         6d6a8:	e5d001d0 	ldrb	r0, [r0, #464]	; fField464
         6d6ac:	e5c4000c 	strb	r0, [r4, #12]
         6d6b0:	ea00000f 	b	6d6f4 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         6d6b4:	e3330c03 	teq	r3, #768	; 0x300
         6d6b8:	1a000007 	bne	6d6dc <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x128>
         6d6bc:	e24dd010 	sub	sp, sp, #16	; 0x10
         6d6c0:	e1a0000d 	mov	r0, sp
         6d6c4:	eb6e5ae2 	bl	1c04254 <TCMOPassiveClaim::$__ct(void)>
         6d6c8:	e1a0100d 	mov	r1, sp
         6d6cc:	e1a00004 	mov	r0, r4
         6d6d0:	eb6d293e 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         6d6d4:	e28dd010 	add	sp, sp, #16	; 0x10
         6d6d8:	ea000005 	b	6d6f4 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         6d6dc:	e5901204 	ldr	r1, [r0, #516]	; fField516
         6d6e0:	e584100c 	str	r1, [r4, #12]
         6d6e4:	e590008c 	ldr	r0, [r0, #140]	; fField140
         6d6e8:	e5a40010 	str	r0, [r4, #16]!	; fField16
         6d6ec:	ea000000 	b	6d6f4 <TCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         6d6f0:	e3e05005 	mvn	r5, #5	; 0x5
         6d6f4:	e1a00005 	mov	r0, r5
         6d6f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 0006d6fc
 */
TCommTool::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         6d6fc:	e590c000 	ldr	ip, [r0]
         6d700:	e28cf0a4 	add	pc, ip, #164	; 0xa4
    */
}

/**
 * Symbol: TCommTool::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 0006d704
 */
TCommTool::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         6d704:	e590c000 	ldr	ip, [r0]
         6d708:	e28cf0a4 	add	pc, ip, #164	; 0xa4
    */
}

/**
 * Symbol: TCommTool::ProcessOption(TOption *, unsigned long, unsigned long)
 * Address: 0006d70c
 */
TCommTool::ProcessOption(TOption *, unsigned long, unsigned long) {
    /*
         6d70c:	ea66f381 	b	1a2a518 <TCommTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TCommTool::ProcessOptionComplete(unsigned long)
 * Address: 0006d710
 */
TCommTool::ProcessOptionComplete(unsigned long) {
    /*
         6d710:	e2802f5e 	add	r2, r0, #376	; 0x178
         6d714:	e5903000 	ldr	r3, [r0]
         6d718:	e283f0a0 	add	pc, r3, #160	; 0xa0
    */
}

/**
 * Symbol: TCommTool::ProcessGetBytesOptionComplete(unsigned long)
 * Address: 0006d71c
 */
TCommTool::ProcessGetBytesOptionComplete(unsigned long) {
    /*
         6d71c:	e2802e19 	add	r2, r0, #400	; 0x190
         6d720:	e5903000 	ldr	r3, [r0]
         6d724:	e283f0a0 	add	pc, r3, #160	; 0xa0
    */
}

/**
 * Symbol: TCommTool::ProcessPutBytesOptionComplete(unsigned long)
 * Address: 0006d728
 */
TCommTool::ProcessPutBytesOptionComplete(unsigned long) {
    /*
         6d728:	e2802f6a 	add	r2, r0, #424	; 0x1a8
         6d72c:	e5903000 	ldr	r3, [r0]
         6d730:	e283f0a0 	add	pc, r3, #160	; 0xa0
    */
}

/**
 * Symbol: TCommTool::ProcessCommOptionComplete(unsigned long, TCommToolOptionInfo *)
 * Address: 0006d734
 */
TCommTool::ProcessCommOptionComplete(unsigned long, TCommToolOptionInfo *) {
    /*
         6d734:	e1a03000 	mov	r3, r0
         6d738:	e3710006 	cmn	r1, #6	; 0x6
         6d73c:	0a000008 	beq	6d764 <TCommTool::ProcessCommOptionComplete(unsigned long, TCommToolOptionInfo *)+0x30>
         6d740:	e5920010 	ldr	r0, [r2, #16]	; fField16
         6d744:	e590c008 	ldr	ip, [r0, #8]	; fField8
         6d748:	e3ccc0ff 	bic	ip, ip, #255	; 0xff
         6d74c:	e20110ff 	and	r1, r1, #255	; 0xff
         6d750:	e18c1001 	orr	r1, ip, r1
         6d754:	e5a01008 	str	r1, [r0, #8]!	; fField8
         6d758:	e3811102 	orr	r1, r1, #-2147483648	; 0x80000000
         6d75c:	e5920010 	ldr	r0, [r2, #16]	; fField16
         6d760:	ea000006 	b	6d780 <TCommTool::ProcessCommOptionComplete(unsigned long, TCommToolOptionInfo *)+0x4c>
         6d764:	e5920000 	ldr	r0, [r2]
         6d768:	e3800002 	orr	r0, r0, #2	; 0x2
         6d76c:	e5820000 	str	r0, [r2]
         6d770:	e5920010 	ldr	r0, [r2, #16]	; fField16
         6d774:	e5901008 	ldr	r1, [r0, #8]	; fField8
         6d778:	e3c110ff 	bic	r1, r1, #255	; 0xff
         6d77c:	e38110fc 	orr	r1, r1, #252	; 0xfc
         6d780:	e5a01008 	str	r1, [r0, #8]!	; fField8
         6d784:	e1a01002 	mov	r1, r2
         6d788:	e1a00003 	mov	r0, r3
         6d78c:	e5932000 	ldr	r2, [r3]
         6d790:	e282f094 	add	pc, r2, #148	; 0x94
    */
}

/**
 * Symbol: TCommTool::GetProtAddr(void)
 * Address: 0006d7e4
 */
TCommTool::GetProtAddr(void) {
    /*
         6d7e4:	e3a0207e 	mov	r2, #126	; 0x7e
         6d7e8:	e2422c3f 	sub	r2, r2, #16128	; 0x3f00
         6d7ec:	e3a01002 	mov	r1, #2	; 0x2
         6d7f0:	ea6d3d9e 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::GetConnectState(void)
 * Address: 0006d7f4
 */
TCommTool::GetConnectState(void) {
    /*
         6d7f4:	e1a0c00d 	mov	ip, sp
         6d7f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6d7fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         6d800:	e1a04000 	mov	r4, r0
         6d804:	e3a00000 	mov	r0, #0	; 0x0
         6d808:	eb6dd669 	bl	1be31b4 <CMemObject::$__ct(void)>
         6d80c:	e1b05000 	movs	r5, r0
         6d810:	e3a000e9 	mov	r0, #233	; 0xe9
         6d814:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         6d818:	e5941058 	ldr	r1, [r4, #88]	; fField88
         6d81c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         6d820:	e3a00000 	mov	r0, #0	; 0x0
         6d824:	e3310000 	teq	r1, #0	; 0x0
         6d828:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         6d82c:	e1a00005 	mov	r0, r5
         6d830:	e3a02000 	mov	r2, #0	; 0x0
         6d834:	eb6df347 	bl	1bea558 <CMemObject::$Make(unsigned long, TUMsgToken *)>
         6d838:	e3300000 	teq	r0, #0	; 0x0
         6d83c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         6d840:	e2841018 	add	r1, r4, #24	; 0x18
         6d844:	e1a00005 	mov	r0, r5
         6d848:	e3a03000 	mov	r3, #0	; 0x0
         6d84c:	e3a02004 	mov	r2, #4	; 0x4
         6d850:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6d854:	ea6de6d7 	b	1be73b8 <CMemObject::$CopyTo(void *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TCommTool::FlushChannel(CommToolRequestType, long)
 * Address: 0006d858
 */
TCommTool::FlushChannel(CommToolRequestType, long) {
    /*
         6d858:	e1a0c00d 	mov	ip, sp
         6d85c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         6d860:	e24cb004 	sub	fp, ip, #4	; 0x4
         6d864:	e1a06000 	mov	r6, r0
         6d868:	e1a05001 	mov	r5, r1
         6d86c:	e1a04002 	mov	r4, r2
         6d870:	e24dd030 	sub	sp, sp, #48	; 0x30
         6d874:	e3a07001 	mov	r7, #1	; 0x1
         6d878:	e3a08000 	mov	r8, #0	; 0x0
         6d87c:	e58d801c 	str	r8, [sp, #28]	; fField28
         6d880:	e58d8028 	str	r8, [sp, #40]	; fField40
         6d884:	e58d8020 	str	r8, [sp, #32]	; fField32
         6d888:	e58d8024 	str	r8, [sp, #36]	; fField36
         6d88c:	e28d0010 	add	r0, sp, #16	; 0x10
         6d890:	eb6e07ce 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         6d894:	e1a0000d 	mov	r0, sp
         6d898:	eb6e07c5 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         6d89c:	e58d4008 	str	r4, [sp, #8]	; fField8
         6d8a0:	e286408c 	add	r4, r6, #140	; 0x8c
         6d8a4:	e3a03000 	mov	r3, #0	; 0x0
         6d8a8:	e3a02001 	mov	r2, #1	; 0x1
         6d8ac:	e1a01005 	mov	r1, r5
         6d8b0:	e3a00000 	mov	r0, #0	; 0x0
         6d8b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         6d8b8:	e28d202c 	add	r2, sp, #44	; 0x2c
         6d8bc:	e92d000c 	stmdb	sp!, {r2, r3}
         6d8c0:	e1a00004 	mov	r0, r4
         6d8c4:	e28d2028 	add	r2, sp, #40	; 0x28
         6d8c8:	e28d1044 	add	r1, sp, #68	; 0x44
         6d8cc:	e3a0300c 	mov	r3, #12	; 0xc
         6d8d0:	eb6dacd8 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
         6d8d4:	e28dd018 	add	sp, sp, #24	; 0x18
         6d8d8:	e3300000 	teq	r0, #0	; 0x0
         6d8dc:	1a000009 	bne	6d908 <TCommTool::FlushChannel(CommToolRequestType, long)+0xb0>
         6d8e0:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         6d8e4:	e3300000 	teq	r0, #0	; 0x0
         6d8e8:	0a000004 	beq	6d900 <TCommTool::FlushChannel(CommToolRequestType, long)+0xa8>
         6d8ec:	e1a0100d 	mov	r1, sp
         6d8f0:	e28d001c 	add	r0, sp, #28	; 0x1c
         6d8f4:	e3a03000 	mov	r3, #0	; 0x0
         6d8f8:	e3a02010 	mov	r2, #16	; 0x10
         6d8fc:	eb6db0fa 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         6d900:	e3370000 	teq	r7, #0	; 0x0
         6d904:	1affffe6 	bne	6d8a4 <TCommTool::FlushChannel(CommToolRequestType, long)+0x4c>
         6d908:	e1a00008 	mov	r0, r8
         6d90c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::CompleteRequest(TUMsgToken &, long)
 * Address: 0006d910
 */
TCommTool::CompleteRequest(TUMsgToken &, long) {
    /*
         6d910:	e1a0c00d 	mov	ip, sp
         6d914:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6d918:	e24cb004 	sub	fp, ip, #4	; 0x4
         6d91c:	e1a04001 	mov	r4, r1
         6d920:	e1a05002 	mov	r5, r2
         6d924:	e5910004 	ldr	r0, [r1, #4]
         6d928:	e3300000 	teq	r0, #0	; 0x0
         6d92c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         6d930:	e24dd010 	sub	sp, sp, #16	; 0x10
         6d934:	e1a0000d 	mov	r0, sp
         6d938:	eb6e079d 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         6d93c:	e58d5008 	str	r5, [sp, #8]	; fField8
         6d940:	e59d200c 	ldr	r2, [sp, #12]
         6d944:	e1a0100d 	mov	r1, sp
         6d948:	e1a00004 	mov	r0, r4
         6d94c:	e3a03000 	mov	r3, #0	; 0x0
         6d950:	eb6db0e5 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         6d954:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::CompleteRequest(TUMsgToken &, long, TCommToolReply &)
 * Address: 0006d958
 */
TCommTool::CompleteRequest(TUMsgToken &, long, TCommToolReply &) {
    /*
         6d958:	e5910004 	ldr	r0, [r1, #4]
         6d95c:	e3300000 	teq	r0, #0	; 0x0
         6d960:	01a0f00e 	moveq	pc, lr
         6d964:	e5832008 	str	r2, [r3, #8]	; fField8
         6d968:	e593200c 	ldr	r2, [r3, #12]
         6d96c:	e1a0c003 	mov	ip, r3
         6d970:	e1a00001 	mov	r0, r1
         6d974:	e3a03000 	mov	r3, #0	; 0x0
         6d978:	e1a0100c 	mov	r1, ip
         6d97c:	ea6db0da 	b	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
    */
}

/**
 * Symbol: TCommTool::CompleteRequest(CommToolChannelNumber, long)
 * Address: 0006d980
 */
TCommTool::CompleteRequest(CommToolChannelNumber, long) {
    /*
         6d980:	e1a0c00d 	mov	ip, sp
         6d984:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6d988:	e24cb004 	sub	fp, ip, #4	; 0x4
         6d98c:	e1a04000 	mov	r4, r0
         6d990:	e1a05002 	mov	r5, r2
         6d994:	e0810081 	add	r0, r1, r1, lsl #1
         6d998:	e0846180 	add	r6, r4, r0, lsl #3
         6d99c:	e5d60094 	ldrb	r0, [r6, #148]	; fField148
         6d9a0:	e3300000 	teq	r0, #0	; 0x0
         6d9a4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         6d9a8:	e3a00000 	mov	r0, #0	; 0x0
         6d9ac:	e5c60094 	strb	r0, [r6, #148]	; fField148
         6d9b0:	e1a00001 	mov	r0, r1
         6d9b4:	eb0c741f 	bl	38aa38 <C$$dtorvec$$Limit+0xc4>
         6d9b8:	e1a01000 	mov	r1, r0
         6d9bc:	e1a00004 	mov	r0, r4
         6d9c0:	e3a02001 	mov	r2, #1	; 0x1
         6d9c4:	e5943000 	ldr	r3, [r4]
         6d9c8:	e1a0e00f 	mov	lr, pc
         6d9cc:	e283ff49 	add	pc, r3, #292	; 0x124
         6d9d0:	e286009c 	add	r0, r6, #156	; 0x9c
         6d9d4:	e1a04000 	mov	r4, r0
         6d9d8:	e5900004 	ldr	r0, [r0, #4]
         6d9dc:	e3300000 	teq	r0, #0	; 0x0
         6d9e0:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         6d9e4:	e24dd010 	sub	sp, sp, #16	; 0x10
         6d9e8:	e1a0000d 	mov	r0, sp
         6d9ec:	eb6e0770 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         6d9f0:	e58d5008 	str	r5, [sp, #8]	; fField8
         6d9f4:	e1a00004 	mov	r0, r4
         6d9f8:	e59d200c 	ldr	r2, [sp, #12]
         6d9fc:	e1a0100d 	mov	r1, sp
         6da00:	e3a03000 	mov	r3, #0	; 0x0
         6da04:	eb6db0b8 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         6da08:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)
 * Address: 0006da0c
 */
TCommTool::CompleteRequest(CommToolChannelNumber, long, TCommToolReply &) {
    /*
         6da0c:	e1a0c00d 	mov	ip, sp
         6da10:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         6da14:	e24cb004 	sub	fp, ip, #4	; 0x4
         6da18:	e1a05000 	mov	r5, r0
         6da1c:	e1a06002 	mov	r6, r2
         6da20:	e1a04003 	mov	r4, r3
         6da24:	e0810081 	add	r0, r1, r1, lsl #1
         6da28:	e0857180 	add	r7, r5, r0, lsl #3
         6da2c:	e5d70094 	ldrb	r0, [r7, #148]	; fField148
         6da30:	e3300000 	teq	r0, #0	; 0x0
         6da34:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         6da38:	e3a00000 	mov	r0, #0	; 0x0
         6da3c:	e5c70094 	strb	r0, [r7, #148]	; fField148
         6da40:	e1a00001 	mov	r0, r1
         6da44:	eb0c73fb 	bl	38aa38 <C$$dtorvec$$Limit+0xc4>
         6da48:	e1a01000 	mov	r1, r0
         6da4c:	e1a00005 	mov	r0, r5
         6da50:	e3a02001 	mov	r2, #1	; 0x1
         6da54:	e5953000 	ldr	r3, [r5]
         6da58:	e1a0e00f 	mov	lr, pc
         6da5c:	e283ff49 	add	pc, r3, #292	; 0x124
         6da60:	e287009c 	add	r0, r7, #156	; 0x9c
         6da64:	e5901004 	ldr	r1, [r0, #4]
         6da68:	e3310000 	teq	r1, #0	; 0x0
         6da6c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         6da70:	e5846008 	str	r6, [r4, #8]	; fField8
         6da74:	e594200c 	ldr	r2, [r4, #12]
         6da78:	e1a01004 	mov	r1, r4
         6da7c:	e3a03000 	mov	r3, #0	; 0x0
         6da80:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         6da84:	ea6db098 	b	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
    */
}

/**
 * Symbol: TCommTool::PutComplete(long, unsigned long)
 * Address: 0006da88
 */
TCommTool::PutComplete(long, unsigned long) {
    /*
         6da88:	e1a0c00d 	mov	ip, sp
         6da8c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6da90:	e24cb004 	sub	fp, ip, #4	; 0x4
         6da94:	e1a04000 	mov	r4, r0
         6da98:	e1a05001 	mov	r5, r1
         6da9c:	e1a06002 	mov	r6, r2
         6daa0:	e24dd014 	sub	sp, sp, #20	; 0x14
         6daa4:	e1a0000d 	mov	r0, sp
         6daa8:	eb6e0742 	bl	1bef7b8 <TCommToolPutReply::$__ct(void)>
         6daac:	e2842f6a 	add	r2, r4, #424	; 0x1a8
         6dab0:	e1a01005 	mov	r1, r5
         6dab4:	e1a00004 	mov	r0, r4
         6dab8:	e58d6010 	str	r6, [sp, #16]	; fField16
         6dabc:	e5943000 	ldr	r3, [r4]
         6dac0:	e1a0e00f 	mov	lr, pc
         6dac4:	e283f09c 	add	pc, r3, #156	; 0x9c
         6dac8:	e1a05000 	mov	r5, r0
         6dacc:	e1a0300d 	mov	r3, sp
         6dad0:	e1a02000 	mov	r2, r0
         6dad4:	e1a00004 	mov	r0, r4
         6dad8:	e3a01001 	mov	r1, #1	; 0x1
         6dadc:	eb6d3ce4 	bl	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         6dae0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         6dae4:	e3100008 	tst	r0, #8	; 0x8
         6dae8:	0a000003 	beq	6dafc <TCommTool::PutComplete(long, unsigned long)+0x74>
         6daec:	e1a00004 	mov	r0, r4
         6daf0:	e5941000 	ldr	r1, [r4]
         6daf4:	e1a0e00f 	mov	lr, pc
         6daf8:	e281f06c 	add	pc, r1, #108	; 0x6c
         6dafc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::KillPutComplete(long)
 * Address: 0006db00
 */
TCommTool::KillPutComplete(long) {
    /*
         6db00:	e1a0c00d 	mov	ip, sp
         6db04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6db08:	e24cb004 	sub	fp, ip, #4	; 0x4
         6db0c:	e1a04000 	mov	r4, r0
         6db10:	e1a05001 	mov	r5, r1
         6db14:	e59f2018 	ldr	r2, [pc, #18]	; 6db34 <TCommTool::KillPutComplete(long)+0x34>
         6db18:	e3a01001 	mov	r1, #1	; 0x1
         6db1c:	eb6d3cd3 	bl	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
         6db20:	e1a02005 	mov	r2, r5
         6db24:	e1a00004 	mov	r0, r4
         6db28:	e3a01002 	mov	r1, #2	; 0x2
         6db2c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6db30:	ea6d4937 	b	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
         6db34:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TCommTool::GetComplete(long, unsigned char, unsigned long)
 * Address: 0006db38
 */
TCommTool::GetComplete(long, unsigned char, unsigned long) {
    /*
         6db38:	e1a0c00d 	mov	ip, sp
         6db3c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         6db40:	e24cb004 	sub	fp, ip, #4	; 0x4
         6db44:	e1a04000 	mov	r4, r0
         6db48:	e1a05001 	mov	r5, r1
         6db4c:	e1a06003 	mov	r6, r3
         6db50:	e20270ff 	and	r7, r2, #255	; 0xff
         6db54:	e24dd018 	sub	sp, sp, #24	; 0x18
         6db58:	e1a0000d 	mov	r0, sp
         6db5c:	eb6e0716 	bl	1bef7bc <TCommToolGetReply::$__ct(void)>
         6db60:	e3370000 	teq	r7, #0	; 0x0
         6db64:	e58d6014 	str	r6, [sp, #20]
         6db68:	13a00001 	movne	r0, #1	; 0x1
         6db6c:	15cd0010 	strneb	r0, [sp, #16]	; fField16
         6db70:	e2842e19 	add	r2, r4, #400	; 0x190
         6db74:	e1a01005 	mov	r1, r5
         6db78:	e1a00004 	mov	r0, r4
         6db7c:	e5943000 	ldr	r3, [r4]
         6db80:	e1a0e00f 	mov	lr, pc
         6db84:	e283f09c 	add	pc, r3, #156	; 0x9c
         6db88:	e1a05000 	mov	r5, r0
         6db8c:	e1a0300d 	mov	r3, sp
         6db90:	e1a02000 	mov	r2, r0
         6db94:	e1a00004 	mov	r0, r4
         6db98:	e3a01000 	mov	r1, #0	; 0x0
         6db9c:	eb6d3cb4 	bl	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         6dba0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::KillGetComplete(long)
 * Address: 0006dbf0
 */
TCommTool::KillGetComplete(long) {
    /*
         6dbf0:	e1a0c00d 	mov	ip, sp
         6dbf4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6dbf8:	e24cb004 	sub	fp, ip, #4	; 0x4
         6dbfc:	e1a04000 	mov	r4, r0
         6dc00:	e1a05001 	mov	r5, r1
         6dc04:	e24dd018 	sub	sp, sp, #24	; 0x18
         6dc08:	e1a0000d 	mov	r0, sp
         6dc0c:	eb6e06ea 	bl	1bef7bc <TCommToolGetReply::$__ct(void)>
         6dc10:	e1a0300d 	mov	r3, sp
         6dc14:	e1a00004 	mov	r0, r4
         6dc18:	e59f2018 	ldr	r2, [pc, #18]	; 6dc38 <TCommTool::KillGetComplete(long)+0x48>
         6dc1c:	e3a01000 	mov	r1, #0	; 0x0
         6dc20:	eb6d3c93 	bl	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         6dc24:	e1a02005 	mov	r2, r5
         6dc28:	e1a00004 	mov	r0, r4
         6dc2c:	e3a01001 	mov	r1, #1	; 0x1
         6dc30:	eb6d48f7 	bl	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
         6dc34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         6dc38:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TCommTool::HoldAbort(void)
 * Address: 0006dc3c
 */
TCommTool::HoldAbort(void) {
    /*
         6dc3c:	e590102c 	ldr	r1, [r0, #44]	; fField44
         6dc40:	e2811001 	add	r1, r1, #1	; 0x1
         6dc44:	e5a0102c 	str	r1, [r0, #44]!	; fField44
         6dc48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::AllowAbort(void)
 * Address: 0006dc4c
 */
TCommTool::AllowAbort(void) {
    /*
         6dc4c:	e1a01000 	mov	r1, r0
         6dc50:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6dc54:	e3100004 	tst	r0, #4	; 0x4
         6dc58:	0a000007 	beq	6dc7c <TCommTool::AllowAbort(void)+0x30>
         6dc5c:	e591202c 	ldr	r2, [r1, #44]	; fField44
         6dc60:	e3320001 	teq	r2, #1	; 0x1
         6dc64:	1a000004 	bne	6dc7c <TCommTool::AllowAbort(void)+0x30>
         6dc68:	e3800080 	orr	r0, r0, #128	; 0x80
         6dc6c:	e5810018 	str	r0, [r1, #24]	; fField24
         6dc70:	e1a00001 	mov	r0, r1
         6dc74:	e5911000 	ldr	r1, [r1]
         6dc78:	e281ff46 	add	pc, r1, #280	; 0x118
         6dc7c:	e591002c 	ldr	r0, [r1, #44]	; fField44
         6dc80:	e2400001 	sub	r0, r0, #1	; 0x1
         6dc84:	e5a1002c 	str	r0, [r1, #44]!	; fField44
         6dc88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::StartAbort(long)
 * Address: 0006dc8c
 */
TCommTool::StartAbort(long) {
    /*
         6dc8c:	e1a0c00d 	mov	ip, sp
         6dc90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6dc94:	e24cb004 	sub	fp, ip, #4	; 0x4
         6dc98:	e1a04000 	mov	r4, r0
         6dc9c:	e1a05001 	mov	r5, r1
         6dca0:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6dca4:	e3100004 	tst	r0, #4	; 0x4
         6dca8:	15b40024 	ldrne	r0, [r4, #36]!	; fField36
         6dcac:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         6dcb0:	e3100003 	tst	r0, #3	; 0x3
         6dcb4:	059f0028 	ldreq	r0, [pc, #28]	; 6dce4 <TCommTool::StartAbort(long)+0x58>	; fField28
         6dcb8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         6dcbc:	e1a00004 	mov	r0, r4
         6dcc0:	eb6d48ce 	bl	1bc0000 <TCommTool::$HoldAbort(void)>
         6dcc4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         6dcc8:	e3800004 	orr	r0, r0, #4	; 0x4
         6dccc:	e5840018 	str	r0, [r4, #24]	; fField24
         6dcd0:	e5845024 	str	r5, [r4, #36]	; fField36
         6dcd4:	e1a00004 	mov	r0, r4
         6dcd8:	eb6d3c60 	bl	1bbce60 <TCommTool::$AllowAbort(void)>
         6dcdc:	e3a00000 	mov	r0, #0	; 0x0
         6dce0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         6dce4:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TCommTool::ShouldAbort(unsigned long, long)
 * Address: 0006dce8
 */
TCommTool::ShouldAbort(unsigned long, long) {
    /*
         6dce8:	e1a0c00d 	mov	ip, sp
         6dcec:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         6dcf0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6dcf4:	e3a03000 	mov	r3, #0	; 0x0
         6dcf8:	e590c018 	ldr	ip, [r0, #24]	; fField24
         6dcfc:	e1cc1001 	bic	r1, ip, r1
         6dd00:	e3320000 	teq	r2, #0	; 0x0
         6dd04:	e5801018 	str	r1, [r0, #24]	; fField24
         6dd08:	0a000006 	beq	6dd28 <TCommTool::ShouldAbort(unsigned long, long)+0x40>
         6dd0c:	e5901028 	ldr	r1, [r0, #40]	; fField40
         6dd10:	e3310000 	teq	r1, #0	; 0x0
         6dd14:	03a01002 	moveq	r1, #2	; 0x2
         6dd18:	05801028 	streq	r1, [r0, #40]	; fField40
         6dd1c:	e1a01002 	mov	r1, r2
         6dd20:	eb6d4cda 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         6dd24:	ea000001 	b	6dd30 <TCommTool::ShouldAbort(unsigned long, long)+0x48>
         6dd28:	e3110004 	tst	r1, #4	; 0x4
         6dd2c:	0a000000 	beq	6dd34 <TCommTool::ShouldAbort(unsigned long, long)+0x4c>
         6dd30:	e3a03001 	mov	r3, #1	; 0x1
         6dd34:	e1a00003 	mov	r0, r3
         6dd38:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::TerminateConnection(void)
 * Address: 0006dd3c
 */
TCommTool::TerminateConnection(void) {
    /*
         6dd3c:	e1a0c00d 	mov	ip, sp
         6dd40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6dd44:	e24cb004 	sub	fp, ip, #4	; 0x4
         6dd48:	e1a04000 	mov	r4, r0
         6dd4c:	e24dd004 	sub	sp, sp, #4	; 0x4
         6dd50:	e3a05001 	mov	r5, #1	; 0x1
         6dd54:	e280601c 	add	r6, r0, #28	; 0x1c
         6dd58:	e1a02006 	mov	r2, r6
         6dd5c:	e1a0300d 	mov	r3, sp
         6dd60:	e5941020 	ldr	r1, [r4, #32]	; fField32
         6dd64:	e1a00004 	mov	r0, r4
         6dd68:	e594c000 	ldr	ip, [r4]
         6dd6c:	e1a0e00f 	mov	lr, pc
         6dd70:	e28cfe12 	add	pc, ip, #288	; 0x120
         6dd74:	e5940020 	ldr	r0, [r4, #32]	; fField32
         6dd78:	e2800001 	add	r0, r0, #1	; 0x1
         6dd7c:	e5840020 	str	r0, [r4, #32]	; fField32
         6dd80:	e594001c 	ldr	r0, [r4, #28]	; fField28
         6dd84:	e3300000 	teq	r0, #0	; 0x0
         6dd88:	0a000009 	beq	6ddb4 <TCommTool::TerminateConnection(void)+0x78>
         6dd8c:	e5941018 	ldr	r1, [r4, #24]	; fField24
         6dd90:	e1110000 	tst	r1, r0
         6dd94:	0a000003 	beq	6dda8 <TCommTool::TerminateConnection(void)+0x6c>
         6dd98:	e1a00004 	mov	r0, r4
         6dd9c:	e1a0e00f 	mov	lr, pc
         6dda0:	e59df000 	ldr	pc, [sp]
         6dda4:	e1a05000 	mov	r5, r0
         6dda8:	e3350000 	teq	r5, #0	; 0x0
         6ddac:	1affffe9 	bne	6dd58 <TCommTool::TerminateConnection(void)+0x1c>
         6ddb0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         6ddb4:	e1a00004 	mov	r0, r4
         6ddb8:	e5941000 	ldr	r1, [r4]
         6ddbc:	e1a0e00f 	mov	lr, pc
         6ddc0:	e281ff47 	add	pc, r1, #284	; 0x11c
         6ddc4:	eafffff9 	b	6ddb0 <TCommTool::TerminateConnection(void)+0x74>
    */
}

/**
 * Symbol: TCommTool::TerminateComplete(void)
 * Address: 0006ddc8
 */
TCommTool::TerminateComplete(void) {
    /*
         6ddc8:	e1a0c00d 	mov	ip, sp
         6ddcc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6ddd0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6ddd4:	e1a04000 	mov	r4, r0
         6ddd8:	e5905024 	ldr	r5, [r0, #36]	; fField36
         6dddc:	e3a00000 	mov	r0, #0	; 0x0
         6dde0:	e5840024 	str	r0, [r4, #36]	; fField36
         6dde4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         6dde8:	e3c000c7 	bic	r0, r0, #199	; 0xc7
         6ddec:	e5840018 	str	r0, [r4, #24]	; fField24
         6ddf0:	e5d40094 	ldrb	r0, [r4, #148]	; fField148
         6ddf4:	e3300000 	teq	r0, #0	; 0x0
         6ddf8:	0a000004 	beq	6de10 <TCommTool::TerminateComplete(void)+0x48>
         6ddfc:	e1a01005 	mov	r1, r5
         6de00:	e1a00004 	mov	r0, r4
         6de04:	e3a03000 	mov	r3, #0	; 0x0
         6de08:	e3a02000 	mov	r2, #0	; 0x0
         6de0c:	eb6d4874 	bl	1bbffe4 <TCommTool::$GetComplete(long, unsigned char, unsigned long)>
         6de10:	e5d400ac 	ldrb	r0, [r4, #172]	; fField172
         6de14:	e3300000 	teq	r0, #0	; 0x0
         6de18:	0a000003 	beq	6de2c <TCommTool::TerminateComplete(void)+0x64>
         6de1c:	e1a01005 	mov	r1, r5
         6de20:	e1a00004 	mov	r0, r4
         6de24:	e3a02000 	mov	r2, #0	; 0x0
         6de28:	eb6d488a 	bl	1bc0058 <TCommTool::$PutComplete(long, unsigned long)>
         6de2c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         6de30:	e3100010 	tst	r0, #16	; 0x10
         6de34:	0a000004 	beq	6de4c <TCommTool::TerminateComplete(void)+0x84>
         6de38:	e1a00004 	mov	r0, r4
         6de3c:	e3a01000 	mov	r1, #0	; 0x0
         6de40:	e5942000 	ldr	r2, [r4]
         6de44:	e282204c 	add	r2, r2, #76	; 0x4c
         6de48:	ea00002b 	b	6defc <TCommTool::TerminateComplete(void)+0x134>
         6de4c:	e5d400c4 	ldrb	r0, [r4, #196]	; fField196
         6de50:	e3300000 	teq	r0, #0	; 0x0
         6de54:	0a00002f 	beq	6df18 <TCommTool::TerminateComplete(void)+0x150>
         6de58:	e59401d4 	ldr	r0, [r4, #468]	; fField468
         6de5c:	e2400003 	sub	r0, r0, #3	; 0x3
         6de60:	e3500007 	cmp	r0, #7	; 0x7
         6de64:	908ff100 	addls	pc, pc, r0, lsl #2
         6de68:	ea000026 	b	6df08 <TCommTool::TerminateComplete(void)+0x140>
         6de6c:	ea00000a 	b	6de9c <TCommTool::TerminateComplete(void)+0xd4>
         6de70:	ea00000e 	b	6deb0 <TCommTool::TerminateComplete(void)+0xe8>
         6de74:	ea000012 	b	6dec4 <TCommTool::TerminateComplete(void)+0xfc>
         6de78:	ea000016 	b	6ded8 <TCommTool::TerminateComplete(void)+0x110>
         6de7c:	ea00001a 	b	6deec <TCommTool::TerminateComplete(void)+0x124>
         6de80:	ea000020 	b	6df08 <TCommTool::TerminateComplete(void)+0x140>
         6de84:	ea00001f 	b	6df08 <TCommTool::TerminateComplete(void)+0x140>
         6de88:	e1a01005 	mov	r1, r5
         6de8c:	e1a00004 	mov	r0, r4
         6de90:	e5942000 	ldr	r2, [r4]
         6de94:	e282208c 	add	r2, r2, #140	; 0x8c
         6de98:	ea000017 	b	6defc <TCommTool::TerminateComplete(void)+0x134>
         6de9c:	e1a01005 	mov	r1, r5
         6dea0:	e1a00004 	mov	r0, r4
         6dea4:	e5942000 	ldr	r2, [r4]
         6dea8:	e2822054 	add	r2, r2, #84	; 0x54
         6deac:	ea000012 	b	6defc <TCommTool::TerminateComplete(void)+0x134>
         6deb0:	e1a01005 	mov	r1, r5
         6deb4:	e1a00004 	mov	r0, r4
         6deb8:	e5942000 	ldr	r2, [r4]
         6debc:	e282205c 	add	r2, r2, #92	; 0x5c
         6dec0:	ea00000d 	b	6defc <TCommTool::TerminateComplete(void)+0x134>
         6dec4:	e1a01005 	mov	r1, r5
         6dec8:	e1a00004 	mov	r0, r4
         6decc:	e5942000 	ldr	r2, [r4]
         6ded0:	e2822064 	add	r2, r2, #100	; 0x64
         6ded4:	ea000008 	b	6defc <TCommTool::TerminateComplete(void)+0x134>
         6ded8:	e1a00004 	mov	r0, r4
         6dedc:	e3a01000 	mov	r1, #0	; 0x0
         6dee0:	e5942000 	ldr	r2, [r4]
         6dee4:	e2822068 	add	r2, r2, #104	; 0x68
         6dee8:	ea000003 	b	6defc <TCommTool::TerminateComplete(void)+0x134>
         6deec:	e1a00004 	mov	r0, r4
         6def0:	e3a01000 	mov	r1, #0	; 0x0
         6def4:	e5942000 	ldr	r2, [r4]
         6def8:	e2822070 	add	r2, r2, #112	; 0x70
         6defc:	e1a0e00f 	mov	lr, pc
         6df00:	e1a0f002 	mov	pc, r2
         6df04:	ea000003 	b	6df18 <TCommTool::TerminateComplete(void)+0x150>
         6df08:	e1a02005 	mov	r2, r5
         6df0c:	e1a00004 	mov	r0, r4
         6df10:	e3a01002 	mov	r1, #2	; 0x2
         6df14:	eb6d3bd5 	bl	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
         6df18:	e1a00004 	mov	r0, r4
         6df1c:	e3a02000 	mov	r2, #0	; 0x0
         6df20:	e3a01004 	mov	r1, #4	; 0x4
         6df24:	eb6d483a 	bl	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
         6df28:	e5940028 	ldr	r0, [r4, #40]	; fField40
         6df2c:	e3300002 	teq	r0, #2	; 0x2
         6df30:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         6df34:	e3a00002 	mov	r0, #2	; 0x2
         6df38:	e58401e8 	str	r0, [r4, #488]	; fField488
         6df3c:	e2840f7b 	add	r0, r4, #492	; 0x1ec
         6df40:	eb6d96a4 	bl	1bd39d8 <$GetGlobalTime>
         6df44:	e5940028 	ldr	r0, [r4, #40]	; fField40
         6df48:	e58401f4 	str	r0, [r4, #500]	; fField500
         6df4c:	e5940204 	ldr	r0, [r4, #516]	; fField516
         6df50:	e58401f8 	str	r0, [r4, #504]	; fField504
         6df54:	e2841f76 	add	r1, r4, #472	; 0x1d8
         6df58:	e1a00004 	mov	r0, r4
         6df5c:	e3a02000 	mov	r2, #0	; 0x0
         6df60:	e5943000 	ldr	r3, [r4]
         6df64:	e1a0e00f 	mov	lr, pc
         6df68:	e283f03c 	add	pc, r3, #60	; 0x3c
         6df6c:	e5a401e0 	str	r0, [r4, #480]!	; fField480
         6df70:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))
 * Address: 0006df74
 */
TCommTool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *)) {
    /*
         6df74:	e3a00000 	mov	r0, #0	; 0x0
         6df78:	e5820000 	str	r0, [r2]
         6df7c:	e5830000 	str	r0, [r3]
         6df80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::CreatePort(unsigned long, TUPort &)
 * Address: 0006df84
 */
TCommTool::CreatePort(unsigned long, TUPort &) {
    /*
         6df84:	e1a0c00d 	mov	ip, sp
         6df88:	e92dd817 	stmdb	sp!, {r0, r1, r2, r4, fp, ip, lr, pc}
         6df8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6df90:	e51b0014 	ldr	r0, [fp, -#20]
         6df94:	eb6d9ec9 	bl	1bd5ac0 <TUPort::$Init(void)>
         6df98:	e1b04000 	movs	r4, r0
         6df9c:	124dd018 	subne	sp, sp, #24	; 0x18
         6dfa0:	1a000020 	bne	6e028 <TCommTool::CreatePort(unsigned long, TUPort &)+0xa4>
         6dfa4:	e24dd008 	sub	sp, sp, #8	; 0x8
         6dfa8:	e1a0100d 	mov	r1, sp
         6dfac:	e24b0018 	sub	r0, fp, #24	; 0x18
         6dfb0:	e3a02004 	mov	r2, #4	; 0x4
         6dfb4:	eb6dc3e6 	bl	1bdef54 <$BlockMove>
         6dfb8:	e3a00000 	mov	r0, #0	; 0x0
         6dfbc:	e5cd0004 	strb	r0, [sp, #4]
         6dfc0:	e24dd010 	sub	sp, sp, #16	; 0x10
         6dfc4:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
         6dfc8:	e5b02010 	ldr	r2, [r0, #16]!	; fField16
         6dfcc:	e1a0000d 	mov	r0, sp
         6dfd0:	e28f1f16 	add	r1, pc, #88	; 0x58
         6dfd4:	eb6d1eae 	bl	1bb5a94 <$sprintf>
         6dfd8:	e24dd010 	sub	sp, sp, #16	; 0x10
         6dfdc:	e1a0000d 	mov	r0, sp
         6dfe0:	eb6d7da8 	bl	1bcd688 <TUNameServer::$__ct(void)>
         6dfe4:	e3a03000 	mov	r3, #0	; 0x0
         6dfe8:	e92d0008 	stmdb	sp!, {r3}
         6dfec:	e51b0014 	ldr	r0, [fp, -#20]
         6dff0:	e28d2024 	add	r2, sp, #36	; 0x24
         6dff4:	e28d1014 	add	r1, sp, #20	; 0x14
         6dff8:	e5903000 	ldr	r3, [r0]
         6dffc:	e28d0004 	add	r0, sp, #4	; 0x4
         6e000:	eb6dab1a 	bl	1bd8c70 <TUNameServer::$RegisterName(char *, char *, unsigned long, unsigned long)>
         6e004:	e28dd004 	add	sp, sp, #4	; 0x4
         6e008:	e1b04000 	movs	r4, r0
         6e00c:	03a01001 	moveq	r1, #1	; 0x1
         6e010:	051b001c 	ldreq	r0, [fp, -#28]	; fField28
         6e014:	05c01201 	streqb	r1, [r0, #513]	; fField513
         6e018:	e1a0000d 	mov	r0, sp
         6e01c:	e3a01000 	mov	r1, #0	; 0x0
         6e020:	eb6d81b7 	bl	1bce704 <TUNameServer::$__dt(void)>
         6e024:	e28dd010 	add	sp, sp, #16	; 0x10
         6e028:	e1a00004 	mov	r0, r4
         6e02c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6e030:	25640000 	strcsb	r0, [r4]!
    */
}

/**
 * Symbol: TCommTool::__ct(unsigned long)
 * Address: 0006e2fc
 */
TCommTool::TCommTool(unsigned long) {
    /*
         6e2fc:	e1a0c00d 	mov	ip, sp
         6e300:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6e304:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e308:	e1b04000 	movs	r4, r0
         6e30c:	e1a05001 	mov	r5, r1
         6e310:	1a000003 	bne	6e324 <TCommTool::__ct(unsigned long)+0x28>
         6e314:	e3a00f9b 	mov	r0, #620	; 0x26c
         6e318:	eb6d8106 	bl	1bce738 <$__nw(unsigned int)>
         6e31c:	e1b04000 	movs	r4, r0
         6e320:	0a000020 	beq	6e3a8 <TCommTool::__ct(unsigned long)+0xac>
         6e324:	e1a00004 	mov	r0, r4
         6e328:	eb6d78d0 	bl	1bcc670 <TUTaskWorld::$__ct(void)>
         6e32c:	e2840030 	add	r0, r4, #48	; 0x30
         6e330:	eb6d36a9 	bl	1bbbddc <TCMOCTConnectInfo::$__ct(void)>
         6e334:	e3a06000 	mov	r6, #0	; 0x0
         6e338:	e5c46090 	strb	r6, [r4, #144]
         6e33c:	e584608c 	str	r6, [r4, #140]	; fField140
         6e340:	e2841f4f 	add	r1, r4, #316	; 0x13c
         6e344:	e2840094 	add	r0, r4, #148	; 0x94
         6e348:	e59f3060 	ldr	r3, [pc, #60]	; 6e3b0 <TCommTool::__ct(unsigned long)+0xb4>
         6e34c:	e3a02018 	mov	r2, #24	; 0x18
         6e350:	eb665bcb 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         6e354:	e2840f52 	add	r0, r4, #328	; 0x148
         6e358:	eb6d21ec 	bl	1bb6b10 <TCMOTransportInfo::$__ct(void)>
         6e35c:	e2840f5e 	add	r0, r4, #376	; 0x178
         6e360:	eb6e4723 	bl	1bffff4 <TCommToolOptionInfo::$__ct(void)>
         6e364:	e2840e19 	add	r0, r4, #400	; 0x190
         6e368:	eb6e4721 	bl	1bffff4 <TCommToolOptionInfo::$__ct(void)>
         6e36c:	e2840f6a 	add	r0, r4, #424	; 0x1a8
         6e370:	eb6e471f 	bl	1bffff4 <TCommToolOptionInfo::$__ct(void)>
         6e374:	e2840f76 	add	r0, r4, #472	; 0x1d8
         6e378:	eb6e0512 	bl	1bef7c8 <TCommToolGetEventReply::$__ct(void)>
         6e37c:	e2840e22 	add	r0, r4, #544	; 0x220
         6e380:	eb6dd7a8 	bl	1be4228 <CShadowBufferSegment::$__ct(void)>
         6e384:	e2840f8f 	add	r0, r4, #572	; 0x23c
         6e388:	eb6dd7a6 	bl	1be4228 <CShadowBufferSegment::$__ct(void)>
         6e38c:	e59f0020 	ldr	r0, [pc, #20]	; 6e3b4 <TCommTool::__ct(unsigned long)+0xb8>
         6e390:	e5840000 	str	r0, [r4]
         6e394:	e3a00e35 	mov	r0, #848	; 0x350
         6e398:	e2800903 	add	r0, r0, #49152	; 0xc000
         6e39c:	e5840260 	str	r0, [r4, #608]	; fField608
         6e3a0:	e5845204 	str	r5, [r4, #516]	; fField516
         6e3a4:	e584625c 	str	r6, [r4, #604]	; fField604
         6e3a8:	e1a00004 	mov	r0, r4
         6e3ac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         6e3b0:	01a094ec 	moveq	r9, ip, ror #9
         6e3b4:	00020810 	andeq	r0, r2, r0, lsl r8
    */
}

/**
 * Symbol: TCommTool::__ct(unsigned long, long)
 * Address: 0006e3b8
 */
TCommTool::TCommTool(unsigned long, long) {
    /*
         6e3b8:	e1a0c00d 	mov	ip, sp
         6e3bc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         6e3c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e3c4:	e1b04000 	movs	r4, r0
         6e3c8:	e1a06001 	mov	r6, r1
         6e3cc:	e1a05002 	mov	r5, r2
         6e3d0:	1a000003 	bne	6e3e4 <TCommTool::__ct(unsigned long, long)+0x2c>
         6e3d4:	e3a00f9b 	mov	r0, #620	; 0x26c
         6e3d8:	eb6d80d6 	bl	1bce738 <$__nw(unsigned int)>
         6e3dc:	e1b04000 	movs	r4, r0
         6e3e0:	0a00001e 	beq	6e460 <TCommTool::__ct(unsigned long, long)+0xa8>
         6e3e4:	e1a00004 	mov	r0, r4
         6e3e8:	eb6d78a0 	bl	1bcc670 <TUTaskWorld::$__ct(void)>
         6e3ec:	e2840030 	add	r0, r4, #48	; 0x30
         6e3f0:	eb6d3679 	bl	1bbbddc <TCMOCTConnectInfo::$__ct(void)>
         6e3f4:	e3a07000 	mov	r7, #0	; 0x0
         6e3f8:	e5c47090 	strb	r7, [r4, #144]
         6e3fc:	e584708c 	str	r7, [r4, #140]	; fField140
         6e400:	e2841f4f 	add	r1, r4, #316	; 0x13c
         6e404:	e2840094 	add	r0, r4, #148	; 0x94
         6e408:	e59f3058 	ldr	r3, [pc, #58]	; 6e468 <TCommTool::__ct(unsigned long, long)+0xb0>
         6e40c:	e3a02018 	mov	r2, #24	; 0x18
         6e410:	eb665b9b 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         6e414:	e2840f52 	add	r0, r4, #328	; 0x148
         6e418:	eb6d21bc 	bl	1bb6b10 <TCMOTransportInfo::$__ct(void)>
         6e41c:	e2840f5e 	add	r0, r4, #376	; 0x178
         6e420:	eb6e46f3 	bl	1bffff4 <TCommToolOptionInfo::$__ct(void)>
         6e424:	e2840e19 	add	r0, r4, #400	; 0x190
         6e428:	eb6e46f1 	bl	1bffff4 <TCommToolOptionInfo::$__ct(void)>
         6e42c:	e2840f6a 	add	r0, r4, #424	; 0x1a8
         6e430:	eb6e46ef 	bl	1bffff4 <TCommToolOptionInfo::$__ct(void)>
         6e434:	e2840f76 	add	r0, r4, #472	; 0x1d8
         6e438:	eb6e04e2 	bl	1bef7c8 <TCommToolGetEventReply::$__ct(void)>
         6e43c:	e2840e22 	add	r0, r4, #544	; 0x220
         6e440:	eb6dd778 	bl	1be4228 <CShadowBufferSegment::$__ct(void)>
         6e444:	e2840f8f 	add	r0, r4, #572	; 0x23c
         6e448:	eb6dd776 	bl	1be4228 <CShadowBufferSegment::$__ct(void)>
         6e44c:	e59f0018 	ldr	r0, [pc, #18]	; 6e46c <TCommTool::__ct(unsigned long, long)+0xb4>
         6e450:	e5840000 	str	r0, [r4]
         6e454:	e5845260 	str	r5, [r4, #608]	; fField608
         6e458:	e5846204 	str	r6, [r4, #516]	; fField516
         6e45c:	e584725c 	str	r7, [r4, #604]	; fField604
         6e460:	e1a00004 	mov	r0, r4
         6e464:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         6e468:	01a094ec 	moveq	r9, ip, ror #9
         6e46c:	00020810 	andeq	r0, r2, r0, lsl r8
    */
}

/**
 * Symbol: TCommTool::__dt(void)
 * Address: 0006e470
 */
TCommTool::~TCommTool(void) {
    /*
         6e470:	e1a0c00d 	mov	ip, sp
         6e474:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6e478:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e47c:	e1a04000 	mov	r4, r0
         6e480:	e1a05001 	mov	r5, r1
         6e484:	e59f0068 	ldr	r0, [pc, #68]	; 6e4f4 <TCommTool::__dt(void)+0x84>
         6e488:	e5840000 	str	r0, [r4]
         6e48c:	e3a06000 	mov	r6, #0	; 0x0
         6e490:	e594025c 	ldr	r0, [r4, #604]	; fField604
         6e494:	e3300000 	teq	r0, #0	; 0x0
         6e498:	0a000004 	beq	6e4b0 <TCommTool::__dt(void)+0x40>
         6e49c:	e5940258 	ldr	r0, [r4, #600]	; fField600
         6e4a0:	eb6dd336 	bl	1be3180 <$SetHeap>
         6e4a4:	e594025c 	ldr	r0, [r4, #604]	; fField604
         6e4a8:	eb6dcafe 	bl	1be10a8 <$DestroyVMHeap>
         6e4ac:	e584625c 	str	r6, [r4, #604]	; fField604
         6e4b0:	e2840f8f 	add	r0, r4, #572	; 0x23c
         6e4b4:	e3a01000 	mov	r1, #0	; 0x0
         6e4b8:	eb6ddb70 	bl	1be5280 <CShadowBufferSegment::$__dt(void)>
         6e4bc:	e2840e22 	add	r0, r4, #544	; 0x220
         6e4c0:	e3a01000 	mov	r1, #0	; 0x0
         6e4c4:	eb6ddb6d 	bl	1be5280 <CShadowBufferSegment::$__dt(void)>
         6e4c8:	e284008c 	add	r0, r4, #140	; 0x8c
         6e4cc:	e3a01000 	mov	r1, #0	; 0x0
         6e4d0:	eb6d8093 	bl	1bce724 <TUObject::$__dt(void)>
         6e4d4:	e1a00004 	mov	r0, r4
         6e4d8:	e3a01000 	mov	r1, #0	; 0x0
         6e4dc:	eb6d7c84 	bl	1bcd6f4 <TUTaskWorld::$__dt(void)>
         6e4e0:	e3150001 	tst	r5, #1	; 0x1
         6e4e4:	11a00004 	movne	r0, r4
         6e4e8:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         6e4ec:	1a6d7c7b 	bne	1bcd6e0 <$__dl(void *)>
         6e4f0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         6e4f4:	00020810 	andeq	r0, r2, r0, lsl r8
    */
}

/**
 * Symbol: TCommTool::TaskConstructor(void)
 * Address: 0006e4f8
 */
TCommTool::TaskConstructor(void) {
    /*
         6e4f8:	e1a0c00d 	mov	ip, sp
         6e4fc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6e500:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e504:	e1a04000 	mov	r4, r0
         6e508:	e3e00000 	mvn	r0, #0	; 0x0
         6e50c:	e3a06000 	mov	r6, #0	; 0x0
         6e510:	e5840208 	str	r0, [r4, #520]	; fField520
         6e514:	e5c46200 	strb	r6, [r4, #512]	; fField512
         6e518:	e5c46201 	strb	r6, [r4, #513]	; fField513
         6e51c:	e5846018 	str	r6, [r4, #24]	; fField24
         6e520:	e5846218 	str	r6, [r4, #536]	; fField536
         6e524:	e584621c 	str	r6, [r4, #540]	; fField540
         6e528:	e5846174 	str	r6, [r4, #372]	; fField372
         6e52c:	e5c461d0 	strb	r6, [r4, #464]	; fField464
         6e530:	e5c461d1 	strb	r6, [r4, #465]	; fField465
         6e534:	e5c461d2 	strb	r6, [r4, #466]	; fField466
         6e538:	e584620c 	str	r6, [r4, #524]	; fField524
         6e53c:	e5846210 	str	r6, [r4, #528]	; fField528
         6e540:	e3a00002 	mov	r0, #2	; 0x2
         6e544:	e584017c 	str	r0, [r4, #380]	; fField380
         6e548:	e5846214 	str	r6, [r4, #532]	; fField532
         6e54c:	e3a00001 	mov	r0, #1	; 0x1
         6e550:	e58401ac 	str	r0, [r4, #428]	; fField428
         6e554:	e5846194 	str	r6, [r4, #404]	; fField404
         6e558:	e584613c 	str	r6, [r4, #316]	; fField316
         6e55c:	e5846264 	str	r6, [r4, #612]	; fField612
         6e560:	e5846268 	str	r6, [r4, #616]	; fField616
         6e564:	eb6dcae0 	bl	1be10ec <$GetHeap>
         6e568:	e5840258 	str	r0, [r4, #600]	; fField600
         6e56c:	e2842f97 	add	r2, r4, #604	; 0x25c
         6e570:	e3a03000 	mov	r3, #0	; 0x0
         6e574:	e3a00000 	mov	r0, #0	; 0x0
         6e578:	e5941260 	ldr	r1, [r4, #608]	; fField608
         6e57c:	eb6dcef2 	bl	1be214c <$NewVMHeap>
         6e580:	e1b05000 	movs	r5, r0
         6e584:	1a000026 	bne	6e624 <TCommTool::TaskConstructor(void)+0x12c>
         6e588:	e594025c 	ldr	r0, [r4, #604]	; fField604
         6e58c:	eb6dd2fb 	bl	1be3180 <$SetHeap>
         6e590:	e284208c 	add	r2, r4, #140	; 0x8c
         6e594:	e5941204 	ldr	r1, [r4, #516]	; fField516
         6e598:	e1a00004 	mov	r0, r4
         6e59c:	eb6d3e3d 	bl	1bbde98 <TCommTool::$CreatePort(unsigned long, TUPort &)>
         6e5a0:	e1b05000 	movs	r5, r0
         6e5a4:	1a00001e 	bne	6e624 <TCommTool::TaskConstructor(void)+0x12c>
         6e5a8:	e3a00000 	mov	r0, #0	; 0x0
         6e5ac:	eb6dd303 	bl	1be31c0 <CBufferList::$__ct(void)>
         6e5b0:	e5840218 	str	r0, [r4, #536]	; fField536
         6e5b4:	e3300000 	teq	r0, #0	; 0x0
         6e5b8:	0a000004 	beq	6e5d0 <TCommTool::TaskConstructor(void)+0xd8>
         6e5bc:	e3a00000 	mov	r0, #0	; 0x0
         6e5c0:	eb6dd2fe 	bl	1be31c0 <CBufferList::$__ct(void)>
         6e5c4:	e584021c 	str	r0, [r4, #540]	; fField540
         6e5c8:	e3300000 	teq	r0, #0	; 0x0
         6e5cc:	1a000002 	bne	6e5dc <TCommTool::TaskConstructor(void)+0xe4>
         6e5d0:	eb6dced2 	bl	1be2120 <$MemError>
         6e5d4:	e1a05000 	mov	r5, r0
         6e5d8:	ea000011 	b	6e624 <TCommTool::TaskConstructor(void)+0x12c>
         6e5dc:	e3a01000 	mov	r1, #0	; 0x0
         6e5e0:	e5940218 	ldr	r0, [r4, #536]	; fField536
         6e5e4:	eb6deba8 	bl	1be948c <CBufferList::$Init(unsigned char)>
         6e5e8:	e1b05000 	movs	r5, r0
         6e5ec:	1a00000c 	bne	6e624 <TCommTool::TaskConstructor(void)+0x12c>
         6e5f0:	e3a01000 	mov	r1, #0	; 0x0
         6e5f4:	e594021c 	ldr	r0, [r4, #540]	; fField540
         6e5f8:	eb6deba3 	bl	1be948c <CBufferList::$Init(unsigned char)>
         6e5fc:	e1b05000 	movs	r5, r0
         6e600:	1a000007 	bne	6e624 <TCommTool::TaskConstructor(void)+0x12c>
         6e604:	e2841e22 	add	r1, r4, #544	; 0x220
         6e608:	e5940218 	ldr	r0, [r4, #536]	; fField536
         6e60c:	eb6debb3 	bl	1be94e0 <CBufferList::$Insert(CBuffer *)>
         6e610:	e2841f8f 	add	r1, r4, #572	; 0x23c
         6e614:	e5b4021c 	ldr	r0, [r4, #540]!	; fField540
         6e618:	eb6debb0 	bl	1be94e0 <CBufferList::$Insert(CBuffer *)>
         6e61c:	e1a00006 	mov	r0, r6
         6e620:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         6e624:	e1a00004 	mov	r0, r4
         6e628:	eb6d4a9c 	bl	1bc10a0 <TCommTool::$TaskDestructor(void)>
         6e62c:	e1a00005 	mov	r0, r5
         6e630:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::TaskDestructor(void)
 * Address: 0006e634
 */
TCommTool::TaskDestructor(void) {
    /*
         6e634:	e1a0c00d 	mov	ip, sp
         6e638:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6e63c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e640:	e1a04000 	mov	r4, r0
         6e644:	eb6d4a9a 	bl	1bc10b4 <TCommTool::$UnRegisterPort(void)>
         6e648:	e3a05000 	mov	r5, #0	; 0x0
         6e64c:	e5940218 	ldr	r0, [r4, #536]	; fField536
         6e650:	e3300000 	teq	r0, #0	; 0x0
         6e654:	0a000003 	beq	6e668 <TCommTool::TaskDestructor(void)+0x34>
         6e658:	e3a01001 	mov	r1, #1	; 0x1
         6e65c:	e1a0e00f 	mov	lr, pc
         6e660:	e590f000 	ldr	pc, [r0]
         6e664:	e5845218 	str	r5, [r4, #536]	; fField536
         6e668:	e594021c 	ldr	r0, [r4, #540]	; fField540
         6e66c:	e3300000 	teq	r0, #0	; 0x0
         6e670:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         6e674:	e3a01001 	mov	r1, #1	; 0x1
         6e678:	e1a0e00f 	mov	lr, pc
         6e67c:	e590f000 	ldr	pc, [r0]
         6e680:	e5a4521c 	str	r5, [r4, #540]!	; fField540
         6e684:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::UnRegisterPort(void)
 * Address: 0006e688
 */
TCommTool::UnRegisterPort(void) {
    /*
         6e688:	e1a0c00d 	mov	ip, sp
         6e68c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6e690:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e694:	e1a04000 	mov	r4, r0
         6e698:	e5d00201 	ldrb	r0, [r0, #513]	; fField513
         6e69c:	e3300000 	teq	r0, #0	; 0x0
         6e6a0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         6e6a4:	e24dd008 	sub	sp, sp, #8	; 0x8
         6e6a8:	e2840f81 	add	r0, r4, #516	; 0x204
         6e6ac:	e1a0100d 	mov	r1, sp
         6e6b0:	e3a02004 	mov	r2, #4	; 0x4
         6e6b4:	eb6dc226 	bl	1bdef54 <$BlockMove>
         6e6b8:	e3a05000 	mov	r5, #0	; 0x0
         6e6bc:	e5cd5004 	strb	r5, [sp, #4]
         6e6c0:	e24dd010 	sub	sp, sp, #16	; 0x10
         6e6c4:	e1a0000d 	mov	r0, sp
         6e6c8:	e5942010 	ldr	r2, [r4, #16]	; fField16
         6e6cc:	e28f1f0c 	add	r1, pc, #48	; 0x30
         6e6d0:	eb6d1cef 	bl	1bb5a94 <$sprintf>
         6e6d4:	e24dd010 	sub	sp, sp, #16	; 0x10
         6e6d8:	e1a0000d 	mov	r0, sp
         6e6dc:	eb6d7be9 	bl	1bcd688 <TUNameServer::$__ct(void)>
         6e6e0:	e28d2020 	add	r2, sp, #32	; 0x20
         6e6e4:	e28d1010 	add	r1, sp, #16	; 0x10
         6e6e8:	e1a0000d 	mov	r0, sp
         6e6ec:	eb6dbdef 	bl	1bddeb0 <TUNameServer::$UnRegisterName(char *, char *)>
         6e6f0:	e1a0000d 	mov	r0, sp
         6e6f4:	e3a01000 	mov	r1, #0	; 0x0
         6e6f8:	eb6d8001 	bl	1bce704 <TUNameServer::$__dt(void)>
         6e6fc:	e5c45201 	strb	r5, [r4, #513]	; fField513
         6e700:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         6e704:	25640000 	strcsb	r0, [r4]!
    */
}

/**
 * Symbol: TCommTool::SetChannelFilter(CommToolRequestType, unsigned char)
 * Address: 0006e708
 */
TCommTool::SetChannelFilter(CommToolRequestType, unsigned char) {
    /*
         6e708:	e31200ff 	tst	r2, #255	; 0xff
         6e70c:	e5902208 	ldr	r2, [r0, #520]	; fField520
         6e710:	01c21001 	biceq	r1, r2, r1
         6e714:	11821001 	orrne	r1, r2, r1
         6e718:	e5a01208 	str	r1, [r0, #520]!	; fField520
         6e71c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::RequestTypeToChannelNumber(CommToolRequestType)
 * Address: 0006e720
 */
TCommTool::RequestTypeToChannelNumber(CommToolRequestType) {
    /*
         6e720:	e3a00000 	mov	r0, #0	; 0x0
         6e724:	ea000000 	b	6e72c <TCommTool::RequestTypeToChannelNumber(CommToolRequestType)+0xc>
         6e728:	e2800001 	add	r0, r0, #1	; 0x1
         6e72c:	e1b010c1 	movs	r1, r1, asr #1
         6e730:	1afffffc 	bne	6e728 <TCommTool::RequestTypeToChannelNumber(CommToolRequestType)+0x8>
         6e734:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::GetToolPort(unsigned long, TUPort &)
 * Address: 0006e784
 */
TCommTool::GetToolPort(unsigned long, TUPort &) {
    /*
         6e784:	e1a0c00d 	mov	ip, sp
         6e788:	e92dd817 	stmdb	sp!, {r0, r1, r2, r4, fp, ip, lr, pc}
         6e78c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e790:	e24dd010 	sub	sp, sp, #16	; 0x10
         6e794:	e1a0100d 	mov	r1, sp
         6e798:	e24b0018 	sub	r0, fp, #24	; 0x18
         6e79c:	e3a02004 	mov	r2, #4	; 0x4
         6e7a0:	eb6dc1eb 	bl	1bdef54 <$BlockMove>
         6e7a4:	e3a00000 	mov	r0, #0	; 0x0
         6e7a8:	e5cd0004 	strb	r0, [sp, #4]
         6e7ac:	e24dd010 	sub	sp, sp, #16	; 0x10
         6e7b0:	e1a0000d 	mov	r0, sp
         6e7b4:	eb6d7bb3 	bl	1bcd688 <TUNameServer::$__ct(void)>
         6e7b8:	e28d3018 	add	r3, sp, #24	; 0x18
         6e7bc:	e92d0008 	stmdb	sp!, {r3}
         6e7c0:	e28d3020 	add	r3, sp, #32	; 0x20
         6e7c4:	e28d2014 	add	r2, sp, #20	; 0x14
         6e7c8:	e28d1014 	add	r1, sp, #20	; 0x14
         6e7cc:	e28d0004 	add	r0, sp, #4	; 0x4
         6e7d0:	eb6da0e1 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
         6e7d4:	e28dd004 	add	sp, sp, #4	; 0x4
         6e7d8:	e1b04000 	movs	r4, r0
         6e7dc:	e1a0000d 	mov	r0, sp
         6e7e0:	e3a01000 	mov	r1, #0	; 0x0
         6e7e4:	0a000002 	beq	6e7f4 <TCommTool::GetToolPort(unsigned long, TUPort &)+0x70>
         6e7e8:	eb6d7fc5 	bl	1bce704 <TUNameServer::$__dt(void)>
         6e7ec:	e28dd010 	add	sp, sp, #16	; 0x10
         6e7f0:	ea000004 	b	6e808 <TCommTool::GetToolPort(unsigned long, TUPort &)+0x84>
         6e7f4:	eb6d7fc2 	bl	1bce704 <TUNameServer::$__dt(void)>
         6e7f8:	e28dd010 	add	sp, sp, #16	; 0x10
         6e7fc:	e51b0014 	ldr	r0, [fp, -#20]
         6e800:	e59d100c 	ldr	r1, [sp, #12]
         6e804:	eb6d880f 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         6e808:	e1a00004 	mov	r0, r4
         6e80c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)
 * Address: 0006e810
 */
TCommTool::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long) {
    /*
         6e810:	e1a0c00d 	mov	ip, sp
         6e814:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6e818:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e81c:	e1a06000 	mov	r6, r0
         6e820:	e1a04001 	mov	r4, r1
         6e824:	e1a05002 	mov	r5, r2
         6e828:	e1a00001 	mov	r0, r1
         6e82c:	e3a01001 	mov	r1, #1	; 0x1
         6e830:	eb6d9c97 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         6e834:	e3300000 	teq	r0, #0	; 0x0
         6e838:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         6e83c:	e1a01005 	mov	r1, r5
         6e840:	e1a00004 	mov	r0, r4
         6e844:	eb6db971 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
         6e848:	e3300000 	teq	r0, #0	; 0x0
         6e84c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         6e850:	e1a00004 	mov	r0, r4
         6e854:	e596108c 	ldr	r1, [r6, #140]	; fField140
         6e858:	eb6db54c 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         6e85c:	e3300000 	teq	r0, #0	; 0x0
         6e860:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::HandleInternalEvent(void)
 * Address: 0006e864
 */
TCommTool::HandleInternalEvent(void) {
    /*
         6e864:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::TaskMain(void)
 * Address: 0006e868
 */
TCommTool::TaskMain(void) {
    /*
         6e868:	e1a0c00d 	mov	ip, sp
         6e86c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         6e870:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e874:	e1a04000 	mov	r4, r0
         6e878:	e24dd018 	sub	sp, sp, #24	; 0x18
         6e87c:	e3a00000 	mov	r0, #0	; 0x0
         6e880:	e58d0004 	str	r0, [sp, #4]
         6e884:	e58d0010 	str	r0, [sp, #16]	; fField16
         6e888:	e58d0008 	str	r0, [sp, #8]	; fField8
         6e88c:	e3a06000 	mov	r6, #0	; 0x0
         6e890:	e58d000c 	str	r0, [sp, #12]
         6e894:	e5d40200 	ldrb	r0, [r4, #512]	; fField512
         6e898:	e3300000 	teq	r0, #0	; 0x0
         6e89c:	1a000099 	bne	6eb08 <TCommTool::TaskMain(void)+0x2a0>
         6e8a0:	e284904c 	add	r9, r4, #76	; 0x4c
         6e8a4:	e2848048 	add	r8, r4, #72	; 0x48
         6e8a8:	e284008c 	add	r0, r4, #140	; 0x8c
         6e8ac:	e58d0014 	str	r0, [sp, #20]
         6e8b0:	e24dd008 	sub	sp, sp, #8	; 0x8
         6e8b4:	e1a0000d 	mov	r0, sp
         6e8b8:	eb6d9446 	bl	1bd39d8 <$GetGlobalTime>
         6e8bc:	e3a03000 	mov	r3, #0	; 0x0
         6e8c0:	e3a02000 	mov	r2, #0	; 0x0
         6e8c4:	e59da004 	ldr	sl, [sp, #4]
         6e8c8:	e5940268 	ldr	r0, [r4, #616]	; fField616
         6e8cc:	e5941208 	ldr	r1, [r4, #520]	; fField520
         6e8d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         6e8d4:	e28d3018 	add	r3, sp, #24	; 0x18
         6e8d8:	e28d201c 	add	r2, sp, #28	; 0x1c
         6e8dc:	e92d000c 	stmdb	sp!, {r2, r3}
         6e8e0:	e1a02009 	mov	r2, r9
         6e8e4:	e1a01008 	mov	r1, r8
         6e8e8:	e3a03040 	mov	r3, #64	; 0x40
         6e8ec:	e59d0034 	ldr	r0, [sp, #52]
         6e8f0:	eb6da8d0 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
         6e8f4:	e28dd018 	add	sp, sp, #24	; 0x18
         6e8f8:	e280cc27 	add	ip, r0, #9984	; 0x2700
         6e8fc:	e37c0025 	cmn	ip, #37	; 0x25
         6e900:	1a000007 	bne	6e924 <TCommTool::TaskMain(void)+0xbc>
         6e904:	e1a00004 	mov	r0, r4
         6e908:	e5941000 	ldr	r1, [r4]
         6e90c:	e1a0e00f 	mov	lr, pc
         6e910:	e281f024 	add	pc, r1, #36	; 0x24
         6e914:	e5940264 	ldr	r0, [r4, #612]	; fField612
         6e918:	e3a06001 	mov	r6, #1	; 0x1
         6e91c:	e5840268 	str	r0, [r4, #616]	; fField616
         6e920:	ea00005a 	b	6ea90 <TCommTool::TaskMain(void)+0x228>
         6e924:	e3300000 	teq	r0, #0	; 0x0
         6e928:	1a000058 	bne	6ea90 <TCommTool::TaskMain(void)+0x228>
         6e92c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         6e930:	e1a02000 	mov	r2, r0
         6e934:	e1a05480 	mov	r5, r0, lsl #9
         6e938:	e1a054a5 	mov	r5, r5, lsr #9
         6e93c:	e3100402 	tst	r0, #33554432	; 0x2000000
         6e940:	0a00000d 	beq	6e97c <TCommTool::TaskMain(void)+0x114>
         6e944:	e24dd004 	sub	sp, sp, #4	; 0x4
         6e948:	e1a0100d 	mov	r1, sp
         6e94c:	e28d0010 	add	r0, sp, #16	; 0x10
         6e950:	eb6d983e 	bl	1bd4a50 <TUMsgToken::$GetUserRefCon(unsigned long *)>
         6e954:	e3300000 	teq	r0, #0	; 0x0
         6e958:	1a000005 	bne	6e974 <TCommTool::TaskMain(void)+0x10c>
         6e95c:	e1a00004 	mov	r0, r4
         6e960:	e59d1000 	ldr	r1, [sp]
         6e964:	e59d200c 	ldr	r2, [sp, #12]
         6e968:	e5943000 	ldr	r3, [r4]
         6e96c:	e1a0e00f 	mov	lr, pc
         6e970:	e283f020 	add	pc, r3, #32	; 0x20
         6e974:	e28dd004 	add	sp, sp, #4	; 0x4
         6e978:	ea000044 	b	6ea90 <TCommTool::TaskMain(void)+0x228>
         6e97c:	e3550040 	cmp	r5, #64	; 0x40
         6e980:	8a00003c 	bhi	6ea78 <TCommTool::TaskMain(void)+0x210>
         6e984:	e3350000 	teq	r5, #0	; 0x0
         6e988:	0a00003a 	beq	6ea78 <TCommTool::TaskMain(void)+0x210>
         6e98c:	e1a01005 	mov	r1, r5
         6e990:	e1a00004 	mov	r0, r4
         6e994:	eb6d45b3 	bl	1bc0068 <TCommTool::$RequestTypeToChannelNumber(CommToolRequestType)>
         6e998:	e1a07000 	mov	r7, r0
         6e99c:	e0800080 	add	r0, r0, r0, lsl #1
         6e9a0:	e5941048 	ldr	r1, [r4, #72]
         6e9a4:	e0840180 	add	r0, r4, r0, lsl #3
         6e9a8:	e5801098 	str	r1, [r0, #152]	; fField152
         6e9ac:	e280109c 	add	r1, r0, #156	; 0x9c
         6e9b0:	e28d200c 	add	r2, sp, #12	; 0xc
         6e9b4:	e892500c 	ldmia	r2, {r2, r3, ip, lr}
         6e9b8:	e881500c 	stmia	r1, {r2, r3, ip, lr}
         6e9bc:	e3a01001 	mov	r1, #1	; 0x1
         6e9c0:	e5c01094 	strb	r1, [r0, #148]	; fField148
         6e9c4:	e1a01005 	mov	r1, r5
         6e9c8:	e1a00004 	mov	r0, r4
         6e9cc:	e3a02000 	mov	r2, #0	; 0x0
         6e9d0:	e5943000 	ldr	r3, [r4]
         6e9d4:	e1a0e00f 	mov	lr, pc
         6e9d8:	e283ff49 	add	pc, r3, #292	; 0x124
         6e9dc:	e3570006 	cmp	r7, #6	; 0x6
         6e9e0:	908ff107 	addls	pc, pc, r7, lsl #2
         6e9e4:	ea000029 	b	6ea90 <TCommTool::TaskMain(void)+0x228>
         6e9e8:	ea000007 	b	6ea0c <TCommTool::TaskMain(void)+0x1a4>
         6e9ec:	ea00000a 	b	6ea1c <TCommTool::TaskMain(void)+0x1b4>
         6e9f0:	ea00000d 	b	6ea2c <TCommTool::TaskMain(void)+0x1c4>
         6e9f4:	ea000016 	b	6ea54 <TCommTool::TaskMain(void)+0x1ec>
         6e9f8:	ea00001b 	b	6ea6c <TCommTool::TaskMain(void)+0x204>
         6e9fc:	ea00000e 	b	6ea3c <TCommTool::TaskMain(void)+0x1d4>
         6ea00:	e1a00004 	mov	r0, r4
         6ea04:	eb66eaad 	bl	1a294c0 <TCommTool::$PrepResArbRequest(void)>
         6ea08:	ea000020 	b	6ea90 <TCommTool::TaskMain(void)+0x228>
         6ea0c:	e1a00004 	mov	r0, r4
         6ea10:	e5941000 	ldr	r1, [r4]
         6ea14:	e28110f8 	add	r1, r1, #248	; 0xf8
         6ea18:	ea000010 	b	6ea60 <TCommTool::TaskMain(void)+0x1f8>
         6ea1c:	e1a00004 	mov	r0, r4
         6ea20:	e5941000 	ldr	r1, [r4]
         6ea24:	e2811c01 	add	r1, r1, #256	; 0x100
         6ea28:	ea00000c 	b	6ea60 <TCommTool::TaskMain(void)+0x1f8>
         6ea2c:	e1a01005 	mov	r1, r5
         6ea30:	e1a00004 	mov	r0, r4
         6ea34:	eb6d4581 	bl	1bc0040 <TCommTool::$PrepControlRequest(unsigned long)>
         6ea38:	ea000014 	b	6ea90 <TCommTool::TaskMain(void)+0x228>
         6ea3c:	e1a02005 	mov	r2, r5
         6ea40:	e5941054 	ldr	r1, [r4, #84]	; fField84
         6ea44:	e1a00004 	mov	r0, r4
         6ea48:	e5943000 	ldr	r3, [r4]
         6ea4c:	e2833030 	add	r3, r3, #48	; 0x30
         6ea50:	ea00000c 	b	6ea88 <TCommTool::TaskMain(void)+0x220>
         6ea54:	e1a00004 	mov	r0, r4
         6ea58:	e5941000 	ldr	r1, [r4]
         6ea5c:	e2811034 	add	r1, r1, #52	; 0x34
         6ea60:	e1a0e00f 	mov	lr, pc
         6ea64:	e1a0f001 	mov	pc, r1
         6ea68:	ea000008 	b	6ea90 <TCommTool::TaskMain(void)+0x228>
         6ea6c:	e1a00004 	mov	r0, r4
         6ea70:	eb6d4574 	bl	1bc0048 <TCommTool::$PrepKillRequest(void)>
         6ea74:	ea000005 	b	6ea90 <TCommTool::TaskMain(void)+0x228>
         6ea78:	e28d100c 	add	r1, sp, #12	; 0xc
         6ea7c:	e1a00004 	mov	r0, r4
         6ea80:	e5943000 	ldr	r3, [r4]
         6ea84:	e283301c 	add	r3, r3, #28	; 0x1c
         6ea88:	e1a0e00f 	mov	lr, pc
         6ea8c:	e1a0f003 	mov	pc, r3
         6ea90:	e5940264 	ldr	r0, [r4, #612]	; fField612
         6ea94:	e3300000 	teq	r0, #0	; 0x0
         6ea98:	0a000011 	beq	6eae4 <TCommTool::TaskMain(void)+0x27c>
         6ea9c:	e3360000 	teq	r6, #0	; 0x0
         6eaa0:	1a00000f 	bne	6eae4 <TCommTool::TaskMain(void)+0x27c>
         6eaa4:	e24dd008 	sub	sp, sp, #8	; 0x8
         6eaa8:	e1a0000d 	mov	r0, sp
         6eaac:	eb6d93c9 	bl	1bd39d8 <$GetGlobalTime>
         6eab0:	e59d0004 	ldr	r0, [sp, #4]
         6eab4:	e040000a 	sub	r0, r0, sl
         6eab8:	e5941268 	ldr	r1, [r4, #616]	; fField616
         6eabc:	e1510000 	cmp	r1, r0
         6eac0:	20410000 	subcs	r0, r1, r0
         6eac4:	2a000004 	bcs	6eadc <TCommTool::TaskMain(void)+0x274>
         6eac8:	e1a00004 	mov	r0, r4
         6eacc:	e5941000 	ldr	r1, [r4]
         6ead0:	e1a0e00f 	mov	lr, pc
         6ead4:	e281f024 	add	pc, r1, #36	; 0x24
         6ead8:	e5940264 	ldr	r0, [r4, #612]	; fField612
         6eadc:	e5840268 	str	r0, [r4, #616]	; fField616
         6eae0:	e28dd008 	add	sp, sp, #8	; 0x8
         6eae4:	e3a06000 	mov	r6, #0	; 0x0
         6eae8:	e1a00004 	mov	r0, r4
         6eaec:	e5941000 	ldr	r1, [r4]
         6eaf0:	e1a0e00f 	mov	lr, pc
         6eaf4:	e281f018 	add	pc, r1, #24	; 0x18
         6eaf8:	e28dd008 	add	sp, sp, #8	; 0x8
         6eafc:	e5d40200 	ldrb	r0, [r4, #512]	; fField512
         6eb00:	e3300000 	teq	r0, #0	; 0x0
         6eb04:	0affff69 	beq	6e8b0 <TCommTool::TaskMain(void)+0x48>
         6eb08:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::HandleReply(unsigned long, unsigned long)
 * Address: 0006eb0c
 */
TCommTool::HandleReply(unsigned long, unsigned long) {
    /*
         6eb0c:	e241cc4e 	sub	ip, r1, #19968	; 0x4e00
         6eb10:	e33c0020 	teq	ip, #32	; 0x20
         6eb14:	11a0f00e 	movne	pc, lr
         6eb18:	e1a03000 	mov	r3, r0
         6eb1c:	e5900178 	ldr	r0, [r0, #376]	; fField376
         6eb20:	e3c0000a 	bic	r0, r0, #10	; 0xa
         6eb24:	e5830178 	str	r0, [r3, #376]	; fField376
         6eb28:	e2832f5e 	add	r2, r3, #376	; 0x178
         6eb2c:	e5930214 	ldr	r0, [r3, #532]	; fField532
         6eb30:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
         6eb34:	e1a00003 	mov	r0, r3
         6eb38:	e5933000 	ldr	r3, [r3]
         6eb3c:	e283f098 	add	pc, r3, #152	; 0x98
    */
}

/**
 * Symbol: TCommTool::HandleRequest(TUMsgToken &, unsigned long)
 * Address: 0006eb40
 */
TCommTool::HandleRequest(TUMsgToken &, unsigned long) {
    /*
         6eb40:	e1a00001 	mov	r0, r1
         6eb44:	e3a030ea 	mov	r3, #234	; 0xea
         6eb48:	e2433b0a 	sub	r3, r3, #10240	; 0x2800
         6eb4c:	e3a02000 	mov	r2, #0	; 0x0
         6eb50:	e3a01000 	mov	r1, #0	; 0x0
         6eb54:	ea6dac64 	b	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
    */
}

/**
 * Symbol: TCommTool::HandleTimerTick(void)
 * Address: 0006eb58
 */
TCommTool::HandleTimerTick(void) {
    /*
         6eb58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::PrepGetRequest(void)
 * Address: 0006eb5c
 */
TCommTool::PrepGetRequest(void) {
    /*
         6eb5c:	e1a0c00d 	mov	ip, sp
         6eb60:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6eb64:	e24cb004 	sub	fp, ip, #4	; 0x4
         6eb68:	e1a04000 	mov	r4, r0
         6eb6c:	e59f20dc 	ldr	r2, [pc, #dc]	; 6ec50 <TCommTool::PrepGetRequest(void)+0xf4>
         6eb70:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6eb74:	e3100002 	tst	r0, #2	; 0x2
         6eb78:	0a000030 	beq	6ec40 <TCommTool::PrepGetRequest(void)+0xe4>
         6eb7c:	e3a02f5b 	mov	r2, #364	; 0x16c
         6eb80:	e2422901 	sub	r2, r2, #16384	; 0x4000
         6eb84:	e3100008 	tst	r0, #8	; 0x8
         6eb88:	1a00002c 	bne	6ec40 <TCommTool::PrepGetRequest(void)+0xe4>
         6eb8c:	e284504c 	add	r5, r4, #76	; 0x4c
         6eb90:	e5d50012 	ldrb	r0, [r5, #18]
         6eb94:	e3300000 	teq	r0, #0	; 0x0
         6eb98:	0a00000c 	beq	6ebd0 <TCommTool::PrepGetRequest(void)+0x74>
         6eb9c:	e2840e22 	add	r0, r4, #544	; 0x220
         6eba0:	e3e03000 	mvn	r3, #0	; 0x0
         6eba4:	e3a02000 	mov	r2, #0	; 0x0
         6eba8:	e5951008 	ldr	r1, [r5, #8]	; fField8
         6ebac:	eb6dea44 	bl	1be94c4 <CShadowBufferSegment::$Init(unsigned long, long, long)>
         6ebb0:	e1b02000 	movs	r2, r0
         6ebb4:	1a000021 	bne	6ec40 <TCommTool::PrepGetRequest(void)+0xe4>
         6ebb8:	e5940218 	ldr	r0, [r4, #536]	; fField536
         6ebbc:	e5901000 	ldr	r1, [r0]
         6ebc0:	e1a0e00f 	mov	lr, pc
         6ebc4:	e281f028 	add	pc, r1, #40	; 0x28
         6ebc8:	e5940218 	ldr	r0, [r4, #536]	; fField536
         6ebcc:	e5850008 	str	r0, [r5, #8]	; fField8
         6ebd0:	e5940098 	ldr	r0, [r4, #152]	; fField152
         6ebd4:	e330001c 	teq	r0, #28	; 0x1c
         6ebd8:	1a00000b 	bne	6ec0c <TCommTool::PrepGetRequest(void)+0xb0>
         6ebdc:	e3a00000 	mov	r0, #0	; 0x0
         6ebe0:	e5840190 	str	r0, [r4, #400]	; fField400
         6ebe4:	e5d51012 	ldrb	r1, [r5, #18]
         6ebe8:	e3310000 	teq	r1, #0	; 0x0
         6ebec:	0a000003 	beq	6ec00 <TCommTool::PrepGetRequest(void)+0xa4>
         6ebf0:	e3a01020 	mov	r1, #32	; 0x20
         6ebf4:	e5841190 	str	r1, [r4, #400]	; fField400
         6ebf8:	e5951018 	ldr	r1, [r5, #24]	; fField24
         6ebfc:	e5841198 	str	r1, [r4, #408]	; fField408
         6ec00:	e5840194 	str	r0, [r4, #404]	; fField404
         6ec04:	e5950014 	ldr	r0, [r5, #20]
         6ec08:	e584019c 	str	r0, [r4, #412]	; fField412
         6ec0c:	e5950008 	ldr	r0, [r5, #8]	; fField8
         6ec10:	e58401c8 	str	r0, [r4, #456]	; fField456
         6ec14:	e5d50010 	ldrb	r0, [r5, #16]	; fField16
         6ec18:	e5c401c6 	strb	r0, [r4, #454]	; fField454
         6ec1c:	e5d50011 	ldrb	r0, [r5, #17]
         6ec20:	e5c401c7 	strb	r0, [r4, #455]	; fField455
         6ec24:	e5b5000c 	ldr	r0, [r5, #12]!
         6ec28:	e58401cc 	str	r0, [r4, #460]	; fField460
         6ec2c:	e2841e19 	add	r1, r4, #400	; 0x190
         6ec30:	e1a00004 	mov	r0, r4
         6ec34:	e5942000 	ldr	r2, [r4]
         6ec38:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6ec3c:	e282f090 	add	pc, r2, #144	; 0x90
         6ec40:	e1a00004 	mov	r0, r4
         6ec44:	e3a01000 	mov	r1, #0	; 0x0
         6ec48:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6ec4c:	ea6d3887 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
         6ec50:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TCommTool::GetOptionsComplete(long)
 * Address: 0006ec54
 */
TCommTool::GetOptionsComplete(long) {
    /*
         6ec54:	e1a0c000 	mov	ip, r0
         6ec58:	e3310000 	teq	r1, #0	; 0x0
         6ec5c:	1a000014 	bne	6ecb4 <TCommTool::GetOptionsComplete(long)+0x60>
         6ec60:	e5dc01c7 	ldrb	r0, [ip, #455]	; fField455
         6ec64:	e3300000 	teq	r0, #0	; 0x0
         6ec68:	0a000004 	beq	6ec80 <TCommTool::GetOptionsComplete(long)+0x2c>
         6ec6c:	e59c11c8 	ldr	r1, [ip, #456]	; fField456
         6ec70:	e1a0000c 	mov	r0, ip
         6ec74:	e59c2000 	ldr	r2, [ip]
         6ec78:	e28220e4 	add	r2, r2, #228	; 0xe4
         6ec7c:	ea00000b 	b	6ecb0 <TCommTool::GetOptionsComplete(long)+0x5c>
         6ec80:	e5dc01c6 	ldrb	r0, [ip, #454]	; fField454
         6ec84:	e3300000 	teq	r0, #0	; 0x0
         6ec88:	0a000004 	beq	6eca0 <TCommTool::GetOptionsComplete(long)+0x4c>
         6ec8c:	e28c2f72 	add	r2, ip, #456	; 0x1c8
         6ec90:	e8920006 	ldmia	r2, {r1, r2}
         6ec94:	e1a0000c 	mov	r0, ip
         6ec98:	e59c3000 	ldr	r3, [ip]
         6ec9c:	e283f0e8 	add	pc, r3, #232	; 0xe8
         6eca0:	e59c11c8 	ldr	r1, [ip, #456]	; fField456
         6eca4:	e1a0000c 	mov	r0, ip
         6eca8:	e59c2000 	ldr	r2, [ip]
         6ecac:	e28220e0 	add	r2, r2, #224	; 0xe0
         6ecb0:	e282f000 	add	pc, r2, #0	; 0x0
         6ecb4:	e1a0000c 	mov	r0, ip
         6ecb8:	e3a03000 	mov	r3, #0	; 0x0
         6ecbc:	e3a02000 	mov	r2, #0	; 0x0
         6ecc0:	e59cc000 	ldr	ip, [ip]
         6ecc4:	e28cf0ec 	add	pc, ip, #236	; 0xec
    */
}

/**
 * Symbol: TCommTool::GetBytesImmediate(CBufferList *, long)
 * Address: 0006ed0c
 */
TCommTool::GetBytesImmediate(CBufferList *, long) {
    /*
         6ed0c:	e5902000 	ldr	r2, [r0]
         6ed10:	e282f0e0 	add	pc, r2, #224	; 0xe0
    */
}

/**
 * Symbol: TCommTool::PrepPutRequest(void)
 * Address: 0006ed14
 */
TCommTool::PrepPutRequest(void) {
    /*
         6ed14:	e1a0c00d 	mov	ip, sp
         6ed18:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6ed1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6ed20:	e1a04000 	mov	r4, r0
         6ed24:	e59f20e0 	ldr	r2, [pc, #e0]	; 6ee0c <TCommTool::PrepPutRequest(void)+0xf8>
         6ed28:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6ed2c:	e3100002 	tst	r0, #2	; 0x2
         6ed30:	0a000031 	beq	6edfc <TCommTool::PrepPutRequest(void)+0xe8>
         6ed34:	e3a02f5b 	mov	r2, #364	; 0x16c
         6ed38:	e2422901 	sub	r2, r2, #16384	; 0x4000
         6ed3c:	e3100008 	tst	r0, #8	; 0x8
         6ed40:	1a00002d 	bne	6edfc <TCommTool::PrepPutRequest(void)+0xe8>
         6ed44:	e284504c 	add	r5, r4, #76	; 0x4c
         6ed48:	e5d50010 	ldrb	r0, [r5, #16]	; fField16
         6ed4c:	e3300000 	teq	r0, #0	; 0x0
         6ed50:	0a00000e 	beq	6ed90 <TCommTool::PrepPutRequest(void)+0x7c>
         6ed54:	e2840f8f 	add	r0, r4, #572	; 0x23c
         6ed58:	e3a02000 	mov	r2, #0	; 0x0
         6ed5c:	e2853008 	add	r3, r5, #8	; 0x8
         6ed60:	e893000a 	ldmia	r3, {r1, r3}
         6ed64:	eb6de9d6 	bl	1be94c4 <CShadowBufferSegment::$Init(unsigned long, long, long)>
         6ed68:	e1b02000 	movs	r2, r0
         6ed6c:	1a000022 	bne	6edfc <TCommTool::PrepPutRequest(void)+0xe8>
         6ed70:	e3e02000 	mvn	r2, #0	; 0x0
         6ed74:	e3a01000 	mov	r1, #0	; 0x0
         6ed78:	e594021c 	ldr	r0, [r4, #540]	; fField540
         6ed7c:	e5903000 	ldr	r3, [r0]
         6ed80:	e1a0e00f 	mov	lr, pc
         6ed84:	e283f038 	add	pc, r3, #56	; 0x38
         6ed88:	e594021c 	ldr	r0, [r4, #540]	; fField540
         6ed8c:	e5850008 	str	r0, [r5, #8]	; fField8
         6ed90:	e59400b0 	ldr	r0, [r4, #176]	; fField176
         6ed94:	e330001c 	teq	r0, #28	; 0x1c
         6ed98:	1a00000c 	bne	6edd0 <TCommTool::PrepPutRequest(void)+0xbc>
         6ed9c:	e3a00000 	mov	r0, #0	; 0x0
         6eda0:	e58401a8 	str	r0, [r4, #424]	; fField424
         6eda4:	e5d50010 	ldrb	r0, [r5, #16]	; fField16
         6eda8:	e3300000 	teq	r0, #0	; 0x0
         6edac:	0a000003 	beq	6edc0 <TCommTool::PrepPutRequest(void)+0xac>
         6edb0:	e3a00020 	mov	r0, #32	; 0x20
         6edb4:	e58401a8 	str	r0, [r4, #424]	; fField424
         6edb8:	e5950018 	ldr	r0, [r5, #24]	; fField24
         6edbc:	e58401b0 	str	r0, [r4, #432]	; fField432
         6edc0:	e3a00001 	mov	r0, #1	; 0x1
         6edc4:	e58401ac 	str	r0, [r4, #428]	; fField428
         6edc8:	e5950014 	ldr	r0, [r5, #20]
         6edcc:	e58401b4 	str	r0, [r4, #436]	; fField436
         6edd0:	e5950008 	ldr	r0, [r5, #8]	; fField8
         6edd4:	e58401c0 	str	r0, [r4, #448]	; fField448
         6edd8:	e5d50011 	ldrb	r0, [r5, #17]
         6eddc:	e5c401c4 	strb	r0, [r4, #452]	; fField452
         6ede0:	e5d50012 	ldrb	r0, [r5, #18]
         6ede4:	e5c401c5 	strb	r0, [r4, #453]	; fField453
         6ede8:	e2841f6a 	add	r1, r4, #424	; 0x1a8
         6edec:	e1a00004 	mov	r0, r4
         6edf0:	e5942000 	ldr	r2, [r4]
         6edf4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6edf8:	e282f090 	add	pc, r2, #144	; 0x90
         6edfc:	e1a00004 	mov	r0, r4
         6ee00:	e3a01001 	mov	r1, #1	; 0x1
         6ee04:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6ee08:	ea6d3818 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
         6ee0c:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TCommTool::PutOptionsComplete(long)
 * Address: 0006ee10
 */
TCommTool::PutOptionsComplete(long) {
    /*
         6ee10:	e1a03000 	mov	r3, r0
         6ee14:	e3310000 	teq	r1, #0	; 0x0
         6ee18:	1a00000c 	bne	6ee50 <TCommTool::PutOptionsComplete(long)+0x40>
         6ee1c:	e5d301c4 	ldrb	r0, [r3, #452]	; fField452
         6ee20:	e3300000 	teq	r0, #0	; 0x0
         6ee24:	0a000005 	beq	6ee40 <TCommTool::PutOptionsComplete(long)+0x30>
         6ee28:	e5d321c5 	ldrb	r2, [r3, #453]	; fField453
         6ee2c:	e59311c0 	ldr	r1, [r3, #448]	; fField448
         6ee30:	e1a00003 	mov	r0, r3
         6ee34:	e5933000 	ldr	r3, [r3]
         6ee38:	e28330d0 	add	r3, r3, #208	; 0xd0
         6ee3c:	ea000007 	b	6ee60 <TCommTool::PutOptionsComplete(long)+0x50>
         6ee40:	e59311c0 	ldr	r1, [r3, #448]	; fField448
         6ee44:	e1a00003 	mov	r0, r3
         6ee48:	e5932000 	ldr	r2, [r3]
         6ee4c:	e282f0cc 	add	pc, r2, #204	; 0xcc
         6ee50:	e1a00003 	mov	r0, r3
         6ee54:	e3a02000 	mov	r2, #0	; 0x0
         6ee58:	e5933000 	ldr	r3, [r3]
         6ee5c:	e28330d4 	add	r3, r3, #212	; 0xd4
         6ee60:	e283f000 	add	pc, r3, #0	; 0x0
    */
}

/**
 * Symbol: TCommTool::PrepControlRequest(unsigned long)
 * Address: 0006ee64
 */
TCommTool::PrepControlRequest(unsigned long) {
    /*
         6ee64:	e1a02001 	mov	r2, r1
         6ee68:	e5901054 	ldr	r1, [r0, #84]	; fField84
         6ee6c:	e5903000 	ldr	r3, [r0]
         6ee70:	e283f028 	add	pc, r3, #40	; 0x28
    */
}

/**
 * Symbol: TCommTool::PrepKillRequest(void)
 * Address: 0006ee74
 */
TCommTool::PrepKillRequest(void) {
    /*
         6ee74:	e1a0c00d 	mov	ip, sp
         6ee78:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         6ee7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6ee80:	e1a04000 	mov	r4, r0
         6ee84:	e24dd004 	sub	sp, sp, #4	; 0x4
         6ee88:	e5900054 	ldr	r0, [r0, #84]	; fField84
         6ee8c:	e3a06000 	mov	r6, #0	; 0x0
         6ee90:	e5840174 	str	r0, [r4, #372]	; fField372
         6ee94:	e3100001 	tst	r0, #1	; 0x1
         6ee98:	e58461fc 	str	r6, [r4, #508]	; fField508
         6ee9c:	e59f51d8 	ldr	r5, [pc, #1d8]	; 6f07c <TCommTool::PrepKillRequest(void)+0x208>
         6eea0:	0a00000f 	beq	6eee4 <TCommTool::PrepKillRequest(void)+0x70>
         6eea4:	e1a00004 	mov	r0, r4
         6eea8:	e1a02005 	mov	r2, r5
         6eeac:	e3a01001 	mov	r1, #1	; 0x1
         6eeb0:	eb6d4448 	bl	1bbffd8 <TCommTool::$FlushChannel(CommToolRequestType, long)>
         6eeb4:	e3300000 	teq	r0, #0	; 0x0
         6eeb8:	1a000070 	bne	6f080 <TCommTool::PrepKillRequest(void)+0x20c>
         6eebc:	e5d40094 	ldrb	r0, [r4, #148]	; fField148
         6eec0:	e3300000 	teq	r0, #0	; 0x0
         6eec4:	05940174 	ldreq	r0, [r4, #372]	; fField372
         6eec8:	03c00001 	biceq	r0, r0, #1	; 0x1
         6eecc:	05840174 	streq	r0, [r4, #372]	; fField372
         6eed0:	0a000003 	beq	6eee4 <TCommTool::PrepKillRequest(void)+0x70>
         6eed4:	e1a00004 	mov	r0, r4
         6eed8:	e5941000 	ldr	r1, [r4]
         6eedc:	e1a0e00f 	mov	lr, pc
         6eee0:	e281f0f0 	add	pc, r1, #240	; 0xf0
         6eee4:	e5940174 	ldr	r0, [r4, #372]	; fField372
         6eee8:	e3100002 	tst	r0, #2	; 0x2
         6eeec:	0a00000f 	beq	6ef30 <TCommTool::PrepKillRequest(void)+0xbc>
         6eef0:	e1a00004 	mov	r0, r4
         6eef4:	e1a02005 	mov	r2, r5
         6eef8:	e3a01002 	mov	r1, #2	; 0x2
         6eefc:	eb6d4435 	bl	1bbffd8 <TCommTool::$FlushChannel(CommToolRequestType, long)>
         6ef00:	e3300000 	teq	r0, #0	; 0x0
         6ef04:	1a00005d 	bne	6f080 <TCommTool::PrepKillRequest(void)+0x20c>
         6ef08:	e5d400ac 	ldrb	r0, [r4, #172]	; fField172
         6ef0c:	e3300000 	teq	r0, #0	; 0x0
         6ef10:	05940174 	ldreq	r0, [r4, #372]	; fField372
         6ef14:	03c00002 	biceq	r0, r0, #2	; 0x2
         6ef18:	05840174 	streq	r0, [r4, #372]	; fField372
         6ef1c:	0a000003 	beq	6ef30 <TCommTool::PrepKillRequest(void)+0xbc>
         6ef20:	e1a00004 	mov	r0, r4
         6ef24:	e5941000 	ldr	r1, [r4]
         6ef28:	e1a0e00f 	mov	lr, pc
         6ef2c:	e281f0d8 	add	pc, r1, #216	; 0xd8
         6ef30:	e5940174 	ldr	r0, [r4, #372]	; fField372
         6ef34:	e3100004 	tst	r0, #4	; 0x4
         6ef38:	0a000036 	beq	6f018 <TCommTool::PrepKillRequest(void)+0x1a4>
         6ef3c:	e1a00004 	mov	r0, r4
         6ef40:	e1a02005 	mov	r2, r5
         6ef44:	e3a01004 	mov	r1, #4	; 0x4
         6ef48:	eb6d4422 	bl	1bbffd8 <TCommTool::$FlushChannel(CommToolRequestType, long)>
         6ef4c:	e3300000 	teq	r0, #0	; 0x0
         6ef50:	1a00004a 	bne	6f080 <TCommTool::PrepKillRequest(void)+0x20c>
         6ef54:	e5d400c4 	ldrb	r0, [r4, #196]	; fField196
         6ef58:	e3300000 	teq	r0, #0	; 0x0
         6ef5c:	05940174 	ldreq	r0, [r4, #372]	; fField372
         6ef60:	03c00004 	biceq	r0, r0, #4	; 0x4
         6ef64:	05840174 	streq	r0, [r4, #372]	; fField372
         6ef68:	0a00002a 	beq	6f018 <TCommTool::PrepKillRequest(void)+0x1a4>
         6ef6c:	e1a00004 	mov	r0, r4
         6ef70:	e5941000 	ldr	r1, [r4]
         6ef74:	e1a0e00f 	mov	lr, pc
         6ef78:	e281f0b0 	add	pc, r1, #176	; 0xb0
         6ef7c:	e1b07000 	movs	r7, r0
         6ef80:	15940178 	ldrne	r0, [r4, #376]	; fField376
         6ef84:	12001001 	andne	r1, r0, #1	; 0x1
         6ef88:	13310000 	teqne	r1, #0	; 0x0
         6ef8c:	12000008 	andne	r0, r0, #8	; 0x8
         6ef90:	13300000 	teqne	r0, #0	; 0x0
         6ef94:	0a00001a 	beq	6f004 <TCommTool::PrepKillRequest(void)+0x190>
         6ef98:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         6ef9c:	e28d0010 	add	r0, sp, #16	; 0x10
         6efa0:	eb6e0213 	bl	1bef7f4 <TCommToolKillRequest::$__ct(void)>
         6efa4:	e1a0000d 	mov	r0, sp
         6efa8:	eb6e0201 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         6efac:	e3a00004 	mov	r0, #4	; 0x4
         6efb0:	e58d0018 	str	r0, [sp, #24]	; fField24
         6efb4:	e1a0000d 	mov	r0, sp
         6efb8:	e3a01010 	mov	r1, #16	; 0x10
         6efbc:	e3a02000 	mov	r2, #0	; 0x0
         6efc0:	e3a0c010 	mov	ip, #16	; 0x10
         6efc4:	e3a03000 	mov	r3, #0	; 0x0
         6efc8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         6efcc:	e1a03006 	mov	r3, r6
         6efd0:	e1a0100c 	mov	r1, ip
         6efd4:	e3a0000c 	mov	r0, #12	; 0xc
         6efd8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         6efdc:	e28d3030 	add	r3, sp, #48	; 0x30
         6efe0:	e92d0008 	stmdb	sp!, {r3}
         6efe4:	e28d3040 	add	r3, sp, #64	; 0x40
         6efe8:	e1a00007 	mov	r0, r7
         6efec:	e3a02002 	mov	r2, #2	; 0x2
         6eff0:	e3a01001 	mov	r1, #1	; 0x1
         6eff4:	eb6daf54 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         6eff8:	e3300000 	teq	r0, #0	; 0x0
         6effc:	e28dd040 	add	sp, sp, #64	; 0x40
         6f000:	1a00001e 	bne	6f080 <TCommTool::PrepKillRequest(void)+0x20c>
         6f004:	e1a00004 	mov	r0, r4
         6f008:	e3a01010 	mov	r1, #16	; 0x10
         6f00c:	e5942000 	ldr	r2, [r4]
         6f010:	e1a0e00f 	mov	lr, pc
         6f014:	e282f02c 	add	pc, r2, #44	; 0x2c
         6f018:	e5940174 	ldr	r0, [r4, #372]	; fField372
         6f01c:	e3100008 	tst	r0, #8	; 0x8
         6f020:	0a00000f 	beq	6f064 <TCommTool::PrepKillRequest(void)+0x1f0>
         6f024:	e1a00004 	mov	r0, r4
         6f028:	e1a02005 	mov	r2, r5
         6f02c:	e3a01008 	mov	r1, #8	; 0x8
         6f030:	eb6d43e8 	bl	1bbffd8 <TCommTool::$FlushChannel(CommToolRequestType, long)>
         6f034:	e3300000 	teq	r0, #0	; 0x0
         6f038:	1a000010 	bne	6f080 <TCommTool::PrepKillRequest(void)+0x20c>
         6f03c:	e5d400dc 	ldrb	r0, [r4, #220]	; fField220
         6f040:	e3300000 	teq	r0, #0	; 0x0
         6f044:	05940174 	ldreq	r0, [r4, #372]	; fField372
         6f048:	03c00008 	biceq	r0, r0, #8	; 0x8
         6f04c:	05840174 	streq	r0, [r4, #372]	; fField372
         6f050:	0a000003 	beq	6f064 <TCommTool::PrepKillRequest(void)+0x1f0>
         6f054:	e1a00004 	mov	r0, r4
         6f058:	e5941000 	ldr	r1, [r4]
         6f05c:	e1a0e00f 	mov	lr, pc
         6f060:	e281f038 	add	pc, r1, #56	; 0x38
         6f064:	e5940174 	ldr	r0, [r4, #372]	; fField372
         6f068:	e3300000 	teq	r0, #0	; 0x0
         6f06c:	01a00004 	moveq	r0, r4
         6f070:	03a02000 	moveq	r2, #0	; 0x0
         6f074:	0a000003 	beq	6f088 <TCommTool::PrepKillRequest(void)+0x214>
         6f078:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         6f07c:	ffffc17b 	swinv	0x00ffc17b
         6f080:	e1a02000 	mov	r2, r0
         6f084:	e1a00004 	mov	r0, r4
         6f088:	e3a01004 	mov	r1, #4	; 0x4
         6f08c:	eb6d3777 	bl	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
         6f090:	eafffff8 	b	6f078 <TCommTool::PrepKillRequest(void)+0x204>
    */
}

/**
 * Symbol: TCommTool::KillRequestComplete(CommToolRequestType, long)
 * Address: 0006f094
 */
TCommTool::KillRequestComplete(CommToolRequestType, long) {
    /*
         6f094:	e5903174 	ldr	r3, [r0, #372]	; fField372
         6f098:	e1c31001 	bic	r1, r3, r1
         6f09c:	e3320000 	teq	r2, #0	; 0x0
         6f0a0:	e5801174 	str	r1, [r0, #372]	; fField372
         6f0a4:	0a000002 	beq	6f0b4 <TCommTool::KillRequestComplete(CommToolRequestType, long)+0x20>
         6f0a8:	e59031fc 	ldr	r3, [r0, #508]	; fField508
         6f0ac:	e3330000 	teq	r3, #0	; 0x0
         6f0b0:	058021fc 	streq	r2, [r0, #508]	; fField508
         6f0b4:	e3310000 	teq	r1, #0	; 0x0
         6f0b8:	03a01004 	moveq	r1, #4	; 0x4
         6f0bc:	059021fc 	ldreq	r2, [r0, #508]	; fField508
         6f0c0:	0a6d376a 	beq	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
         6f0c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::PrepResArbRequest(void)
 * Address: 0006f0c8
 */
TCommTool::PrepResArbRequest(void) {
    /*
         6f0c8:	e1a03000 	mov	r3, r0
         6f0cc:	e280004c 	add	r0, r0, #76	; 0x4c
         6f0d0:	e5901008 	ldr	r1, [r0, #8]	; fField8
         6f0d4:	e3310001 	teq	r1, #1	; 0x1
         6f0d8:	0a000007 	beq	6f0fc <TCommTool::PrepResArbRequest(void)+0x34>
         6f0dc:	e3310002 	teq	r1, #2	; 0x2
         6f0e0:	11a0f00e 	movne	pc, lr
         6f0e4:	e2800008 	add	r0, r0, #8	; 0x8
         6f0e8:	e9b00006 	ldmib	r0!, {r1, r2}
         6f0ec:	e1a00003 	mov	r0, r3
         6f0f0:	e5933000 	ldr	r3, [r3]
         6f0f4:	e2833f45 	add	r3, r3, #276	; 0x114
         6f0f8:	ea000004 	b	6f110 <TCommTool::PrepResArbRequest(void)+0x48>
         6f0fc:	e2800008 	add	r0, r0, #8	; 0x8
         6f100:	e9b00006 	ldmib	r0!, {r1, r2}
         6f104:	e1a00003 	mov	r0, r3
         6f108:	e5933000 	ldr	r3, [r3]
         6f10c:	e2833f42 	add	r3, r3, #264	; 0x108
         6f110:	e283f000 	add	pc, r3, #0	; 0x0
    */
}

/**
 * Symbol: TCommTool::DoControl(unsigned long, unsigned long)
 * Address: 0006f114
 */
TCommTool::DoControl(unsigned long, unsigned long) {
    /*
         6f114:	e1a02000 	mov	r2, r0
         6f118:	e58011d4 	str	r1, [r0, #468]	; fField468
         6f11c:	e351000b 	cmp	r1, #11	; 0xb
         6f120:	908ff101 	addls	pc, pc, r1, lsl #2
         6f124:	ea000026 	b	6f1c4 <TCommTool::DoControl(unsigned long, unsigned long)+0xb0>
         6f128:	ea000025 	b	6f1c4 <TCommTool::DoControl(unsigned long, unsigned long)+0xb0>
         6f12c:	ea00000c 	b	6f164 <TCommTool::DoControl(unsigned long, unsigned long)+0x50>
         6f130:	ea00000d 	b	6f16c <TCommTool::DoControl(unsigned long, unsigned long)+0x58>
         6f134:	ea000010 	b	6f17c <TCommTool::DoControl(unsigned long, unsigned long)+0x68>
         6f138:	ea000011 	b	6f184 <TCommTool::DoControl(unsigned long, unsigned long)+0x70>
         6f13c:	ea000012 	b	6f18c <TCommTool::DoControl(unsigned long, unsigned long)+0x78>
         6f140:	ea000013 	b	6f194 <TCommTool::DoControl(unsigned long, unsigned long)+0x80>
         6f144:	ea000014 	b	6f19c <TCommTool::DoControl(unsigned long, unsigned long)+0x88>
         6f148:	ea000015 	b	6f1a4 <TCommTool::DoControl(unsigned long, unsigned long)+0x90>
         6f14c:	ea000016 	b	6f1ac <TCommTool::DoControl(unsigned long, unsigned long)+0x98>
         6f150:	ea000017 	b	6f1b4 <TCommTool::DoControl(unsigned long, unsigned long)+0xa0>
         6f154:	e1a00002 	mov	r0, r2
         6f158:	e5921000 	ldr	r1, [r2]
         6f15c:	e2811084 	add	r1, r1, #132	; 0x84
         6f160:	ea000004 	b	6f178 <TCommTool::DoControl(unsigned long, unsigned long)+0x64>
         6f164:	e1a00002 	mov	r0, r2
         6f168:	ea6d43ad 	b	1bc0024 <TCommTool::$Open(void)>
         6f16c:	e1a00002 	mov	r0, r2
         6f170:	e5921000 	ldr	r1, [r2]
         6f174:	e2811048 	add	r1, r1, #72	; 0x48
         6f178:	e281f000 	add	pc, r1, #0	; 0x0
         6f17c:	e1a00002 	mov	r0, r2
         6f180:	ea6d3b3f 	b	1bbde84 <TCommTool::$Connect(void)>
         6f184:	e1a00002 	mov	r0, r2
         6f188:	ea6d43a2 	b	1bc0018 <TCommTool::$Listen(void)>
         6f18c:	e1a00002 	mov	r0, r2
         6f190:	ea6d372d 	b	1bbce4c <TCommTool::$Accept(void)>
         6f194:	e1a00002 	mov	r0, r2
         6f198:	ea6d4388 	b	1bbffc0 <TCommTool::$Disconnect(void)>
         6f19c:	e1a00002 	mov	r0, r2
         6f1a0:	ea6d43ad 	b	1bc005c <TCommTool::$Release(void)>
         6f1a4:	e1a00002 	mov	r0, r2
         6f1a8:	ea6d372d 	b	1bbce64 <TCommTool::$Bind(void)>
         6f1ac:	e1a00002 	mov	r0, r2
         6f1b0:	ea6d47be 	b	1bc10b0 <TCommTool::$Unbind(void)>
         6f1b4:	e282104c 	add	r1, r2, #76	; 0x4c
         6f1b8:	e1a00002 	mov	r0, r2
         6f1bc:	e5922000 	ldr	r2, [r2]
         6f1c0:	e282f088 	add	pc, r2, #136	; 0x88
         6f1c4:	e1a00002 	mov	r0, r2
         6f1c8:	e3a0207e 	mov	r2, #126	; 0x7e
         6f1cc:	e2422c3f 	sub	r2, r2, #16128	; 0x3f00
         6f1d0:	e3a01002 	mov	r1, #2	; 0x2
         6f1d4:	ea6d3725 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::DoStatus(unsigned long, unsigned long)
 * Address: 0006f1d8
 */
TCommTool::DoStatus(unsigned long, unsigned long) {
    /*
         6f1d8:	e1a0c00d 	mov	ip, sp
         6f1dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6f1e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f1e4:	e1a04000 	mov	r4, r0
         6f1e8:	e3a0207e 	mov	r2, #126	; 0x7e
         6f1ec:	e2422c3f 	sub	r2, r2, #16128	; 0x3f00
         6f1f0:	e3310001 	teq	r1, #1	; 0x1
         6f1f4:	1a000002 	bne	6f204 <TCommTool::DoStatus(unsigned long, unsigned long)+0x2c>
         6f1f8:	e1a00004 	mov	r0, r4
         6f1fc:	eb6d4379 	bl	1bbffe8 <TCommTool::$GetConnectState(void)>
         6f200:	e1a02000 	mov	r2, r0
         6f204:	e1a00004 	mov	r0, r4
         6f208:	e3a01005 	mov	r1, #5	; 0x5
         6f20c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6f210:	ea6d3716 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::DoKillControl(unsigned long)
 * Address: 0006f214
 */
TCommTool::DoKillControl(unsigned long) {
    /*
         6f214:	e5901018 	ldr	r1, [r0, #24]	; fField24
         6f218:	e3110001 	tst	r1, #1	; 0x1
         6f21c:	02011008 	andeq	r1, r1, #8	; 0x8
         6f220:	03310000 	teqeq	r1, #0	; 0x0
         6f224:	03a0207e 	moveq	r2, #126	; 0x7e
         6f228:	02422c3f 	subeq	r2, r2, #16128	; 0x3f00
         6f22c:	03a01004 	moveq	r1, #4	; 0x4
         6f230:	0a6d4377 	beq	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
         6f234:	e5901028 	ldr	r1, [r0, #40]	; fField40
         6f238:	e3310000 	teq	r1, #0	; 0x0
         6f23c:	03a01002 	moveq	r1, #2	; 0x2
         6f240:	05801028 	streq	r1, [r0, #40]	; fField40
         6f244:	e59f1000 	ldr	r1, [pc, #0]	; 6f24c <TCommTool::DoKillControl(unsigned long)+0x38>
         6f248:	ea6d4790 	b	1bc1090 <TCommTool::$StartAbort(long)>
         6f24c:	ffffc173 	swinv	0x00ffc173
    */
}

/**
 * Symbol: TCommTool::GetCommEvent(void)
 * Address: 0006f29c
 */
TCommTool::GetCommEvent(void) {
    /*
         6f29c:	e1a0c00d 	mov	ip, sp
         6f2a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6f2a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f2a8:	e1a04000 	mov	r4, r0
         6f2ac:	e59001e0 	ldr	r0, [r0, #480]	; fField480
         6f2b0:	e3a05e17 	mov	r5, #368	; 0x170
         6f2b4:	e2455901 	sub	r5, r5, #16384	; 0x4000
         6f2b8:	e1300005 	teq	r0, r5
         6f2bc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         6f2c0:	e2841f76 	add	r1, r4, #472	; 0x1d8
         6f2c4:	e1a00004 	mov	r0, r4
         6f2c8:	e3a02000 	mov	r2, #0	; 0x0
         6f2cc:	e5943000 	ldr	r3, [r4]
         6f2d0:	e1a0e00f 	mov	lr, pc
         6f2d4:	e283f03c 	add	pc, r3, #60	; 0x3c
         6f2d8:	e5a451e0 	str	r5, [r4, #480]!	; fField480
         6f2dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::DoKillGetCommEvent(void)
 * Address: 0006f2e0
 */
TCommTool::DoKillGetCommEvent(void) {
    /*
         6f2e0:	e1a0c00d 	mov	ip, sp
         6f2e4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6f2e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f2ec:	e1a04000 	mov	r4, r0
         6f2f0:	e24dd024 	sub	sp, sp, #36	; 0x24
         6f2f4:	e1a0000d 	mov	r0, sp
         6f2f8:	eb6e0132 	bl	1bef7c8 <TCommToolGetEventReply::$__ct(void)>
         6f2fc:	e1a0300d 	mov	r3, sp
         6f300:	e1a00004 	mov	r0, r4
         6f304:	e59f2018 	ldr	r2, [pc, #18]	; 6f324 <TCommTool::DoKillGetCommEvent(void)+0x44>
         6f308:	e3a01003 	mov	r1, #3	; 0x3
         6f30c:	eb6d36d8 	bl	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         6f310:	e1a00004 	mov	r0, r4
         6f314:	e3a02000 	mov	r2, #0	; 0x0
         6f318:	e3a01008 	mov	r1, #8	; 0x8
         6f31c:	eb6d433c 	bl	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
         6f320:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6f324:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TCommTool::PostCommEvent(TCommToolGetEventReply &, long)
 * Address: 0006f328
 */
TCommTool::PostCommEvent(TCommToolGetEventReply &, long) {
    /*
         6f328:	e1a0c00d 	mov	ip, sp
         6f32c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6f330:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f334:	e3a04000 	mov	r4, #0	; 0x0
         6f338:	e5d030dc 	ldrb	r3, [r0, #220]	; fField220
         6f33c:	e3330000 	teq	r3, #0	; 0x0
         6f340:	0a000003 	beq	6f354 <TCommTool::PostCommEvent(TCommToolGetEventReply &, long)+0x2c>
         6f344:	e1a03001 	mov	r3, r1
         6f348:	e3a01003 	mov	r1, #3	; 0x3
         6f34c:	eb6d36c8 	bl	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         6f350:	ea000001 	b	6f35c <TCommTool::PostCommEvent(TCommToolGetEventReply &, long)+0x34>
         6f354:	e3a04071 	mov	r4, #113	; 0x71
         6f358:	e2444c3f 	sub	r4, r4, #16128	; 0x3f00
         6f35c:	e1a00004 	mov	r0, r4
         6f360:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::Open(void)
 * Address: 0006f364
 */
TCommTool::Open(void) {
    /*
         6f364:	e280104c 	add	r1, r0, #76	; 0x4c
         6f368:	e281300c 	add	r3, r1, #12	; 0xc
         6f36c:	e893000c 	ldmia	r3, {r2, r3}
         6f370:	e5d11014 	ldrb	r1, [r1, #20]
         6f374:	ea66e856 	b	1a294d4 <TCommTool::$ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)>
    */
}

/**
 * Symbol: TCommTool::OpenOptionsComplete(long)
 * Address: 0006f378
 */
TCommTool::OpenOptionsComplete(long) {
    /*
         6f378:	e1a0c00d 	mov	ip, sp
         6f37c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6f380:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f384:	e1a04000 	mov	r4, r0
         6f388:	e1a05001 	mov	r5, r1
         6f38c:	e24dd014 	sub	sp, sp, #20	; 0x14
         6f390:	e1a0000d 	mov	r0, sp
         6f394:	eb66f8c1 	bl	1a2d6a0 <TCommToolOpenReply::$__ct(void)>
         6f398:	e3350000 	teq	r5, #0	; 0x0
         6f39c:	1a000009 	bne	6f3c8 <TCommTool::OpenOptionsComplete(long)+0x50>
         6f3a0:	e5941184 	ldr	r1, [r4, #388]	; fField388
         6f3a4:	e1a00004 	mov	r0, r4
         6f3a8:	e5942000 	ldr	r2, [r4]
         6f3ac:	e1a0e00f 	mov	lr, pc
         6f3b0:	e282f040 	add	pc, r2, #64	; 0x40
         6f3b4:	e1b05000 	movs	r5, r0
         6f3b8:	1a000002 	bne	6f3c8 <TCommTool::OpenOptionsComplete(long)+0x50>
         6f3bc:	e1a00004 	mov	r0, r4
         6f3c0:	eb6d431a 	bl	1bc0030 <TCommTool::$OpenContinue(void)>
         6f3c4:	ea00000e 	b	6f404 <TCommTool::OpenOptionsComplete(long)+0x8c>
         6f3c8:	e2842f5e 	add	r2, r4, #376	; 0x178
         6f3cc:	e1a01005 	mov	r1, r5
         6f3d0:	e1a00004 	mov	r0, r4
         6f3d4:	e5943000 	ldr	r3, [r4]
         6f3d8:	e1a0e00f 	mov	lr, pc
         6f3dc:	e283f09c 	add	pc, r3, #156	; 0x9c
         6f3e0:	e1a0300d 	mov	r3, sp
         6f3e4:	e1a02005 	mov	r2, r5
         6f3e8:	e1a00004 	mov	r0, r4
         6f3ec:	e3a01002 	mov	r1, #2	; 0x2
         6f3f0:	eb6d369f 	bl	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         6f3f4:	e1a00004 	mov	r0, r4
         6f3f8:	e5941000 	ldr	r1, [r4]
         6f3fc:	e1a0e00f 	mov	lr, pc
         6f400:	e281f048 	add	pc, r1, #72	; 0x48
         6f404:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::OpenContinue(void)
 * Address: 0006f408
 */
TCommTool::OpenContinue(void) {
    /*
         6f408:	e1a0c00d 	mov	ip, sp
         6f40c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6f410:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f414:	e1a04000 	mov	r4, r0
         6f418:	e24dd014 	sub	sp, sp, #20	; 0x14
         6f41c:	e1a0000d 	mov	r0, sp
         6f420:	eb66f89e 	bl	1a2d6a0 <TCommToolOpenReply::$__ct(void)>
         6f424:	e1a00004 	mov	r0, r4
         6f428:	e5941000 	ldr	r1, [r4]
         6f42c:	e1a0e00f 	mov	lr, pc
         6f430:	e281f044 	add	pc, r1, #68	; 0x44
         6f434:	e1a05000 	mov	r5, r0
         6f438:	e3300001 	teq	r0, #1	; 0x1
         6f43c:	0a000014 	beq	6f494 <TCommTool::OpenContinue(void)+0x8c>
         6f440:	e2842f5e 	add	r2, r4, #376	; 0x178
         6f444:	e1a01005 	mov	r1, r5
         6f448:	e1a00004 	mov	r0, r4
         6f44c:	e5943000 	ldr	r3, [r4]
         6f450:	e1a0e00f 	mov	lr, pc
         6f454:	e283f09c 	add	pc, r3, #156	; 0x9c
         6f458:	e3350000 	teq	r5, #0	; 0x0
         6f45c:	01a05000 	moveq	r5, r0
         6f460:	e594008c 	ldr	r0, [r4, #140]	; fField140
         6f464:	e58d0010 	str	r0, [sp, #16]	; fField16
         6f468:	e1a0300d 	mov	r3, sp
         6f46c:	e1a02005 	mov	r2, r5
         6f470:	e1a00004 	mov	r0, r4
         6f474:	e3a01002 	mov	r1, #2	; 0x2
         6f478:	eb6d367d 	bl	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         6f47c:	e3350000 	teq	r5, #0	; 0x0
         6f480:	0a000003 	beq	6f494 <TCommTool::OpenContinue(void)+0x8c>
         6f484:	e1a00004 	mov	r0, r4
         6f488:	e5941000 	ldr	r1, [r4]
         6f48c:	e1a0e00f 	mov	lr, pc
         6f490:	e281f048 	add	pc, r1, #72	; 0x48
         6f494:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::OpenStart(TOptionArray *)
 * Address: 0006f498
 */
TCommTool::OpenStart(TOptionArray *) {
    /*
         6f498:	e3a00000 	mov	r0, #0	; 0x0
         6f49c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::OpenComplete(void)
 * Address: 0006f4a0
 */
TCommTool::OpenComplete(void) {
    /*
         6f4a0:	e3a00000 	mov	r0, #0	; 0x0
         6f4a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::Close(void)
 * Address: 0006f4a8
 */
TCommTool::Close(void) {
    /*
         6f4a8:	e1a0c00d 	mov	ip, sp
         6f4ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6f4b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f4b4:	e1a04000 	mov	r4, r0
         6f4b8:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6f4bc:	e3800010 	orr	r0, r0, #16	; 0x10
         6f4c0:	e5840018 	str	r0, [r4, #24]	; fField24
         6f4c4:	e3100003 	tst	r0, #3	; 0x3
         6f4c8:	1a000010 	bne	6f510 <TCommTool::Close(void)+0x68>
         6f4cc:	e3a06001 	mov	r6, #1	; 0x1
         6f4d0:	e3a0507d 	mov	r5, #125	; 0x7d
         6f4d4:	e2455c3f 	sub	r5, r5, #16128	; 0x3f00
         6f4d8:	e1a01006 	mov	r1, r6
         6f4dc:	e1a00004 	mov	r0, r4
         6f4e0:	e1a02005 	mov	r2, r5
         6f4e4:	eb6d42bb 	bl	1bbffd8 <TCommTool::$FlushChannel(CommToolRequestType, long)>
         6f4e8:	e1a06086 	mov	r6, r6, lsl #1
         6f4ec:	e3560010 	cmp	r6, #16	; 0x10
         6f4f0:	dafffff8 	ble	6f4d8 <TCommTool::Close(void)+0x30>
         6f4f4:	e1a00004 	mov	r0, r4
         6f4f8:	e3a01000 	mov	r1, #0	; 0x0
         6f4fc:	e5942000 	ldr	r2, [r4]
         6f500:	e1a0e00f 	mov	lr, pc
         6f504:	e282f04c 	add	pc, r2, #76	; 0x4c
         6f508:	e3a00001 	mov	r0, #1	; 0x1
         6f50c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         6f510:	e5940028 	ldr	r0, [r4, #40]	; fField40
         6f514:	e3300000 	teq	r0, #0	; 0x0
         6f518:	03a00002 	moveq	r0, #2	; 0x2
         6f51c:	05840028 	streq	r0, [r4, #40]	; fField40
         6f520:	e1a00004 	mov	r0, r4
         6f524:	e59f1008 	ldr	r1, [pc, #8]	; 6f534 <TCommTool::Close(void)+0x8c>	; fField8
         6f528:	eb6d46d8 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         6f52c:	e3a00000 	mov	r0, #0	; 0x0
         6f530:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         6f534:	ffffc173 	swinv	0x00ffc173
    */
}

/**
 * Symbol: TCommTool::CloseComplete(long)
 * Address: 0006f538
 */
TCommTool::CloseComplete(long) {
    /*
         6f538:	e1a0c00d 	mov	ip, sp
         6f53c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6f540:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f544:	e1a04000 	mov	r4, r0
         6f548:	e1a05001 	mov	r5, r1
         6f54c:	e3a00001 	mov	r0, #1	; 0x1
         6f550:	e5c40200 	strb	r0, [r4, #512]	; fField512
         6f554:	e5940018 	ldr	r0, [r4, #24]	; fField24
         6f558:	e3c00010 	bic	r0, r0, #16	; 0x10
         6f55c:	e5840018 	str	r0, [r4, #24]	; fField24
         6f560:	e1a00004 	mov	r0, r4
         6f564:	eb6d46d2 	bl	1bc10b4 <TCommTool::$UnRegisterPort(void)>
         6f568:	e1a02005 	mov	r2, r5
         6f56c:	e1a00004 	mov	r0, r4
         6f570:	e3a01002 	mov	r1, #2	; 0x2
         6f574:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6f578:	ea6d363c 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::ImportConnectPB(TCommToolConnectRequest *)
 * Address: 0006f5c4
 */
TCommTool::ImportConnectPB(TCommToolConnectRequest *) {
    /*
         6f5c4:	e1a0c00d 	mov	ip, sp
         6f5c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6f5cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f5d0:	e1a04000 	mov	r4, r0
         6f5d4:	e1a05001 	mov	r5, r1
         6f5d8:	e3a00000 	mov	r0, #0	; 0x0
         6f5dc:	e5911020 	ldr	r1, [r1, #32]	; fField32
         6f5e0:	e5841140 	str	r1, [r4, #320]	; fField320
         6f5e4:	e5d51024 	ldrb	r1, [r5, #36]	; fField36
         6f5e8:	e5c41144 	strb	r1, [r4, #324]	; fField324
         6f5ec:	e3310000 	teq	r1, #0	; 0x0
         6f5f0:	05b5101c 	ldreq	r1, [r5, #28]!	; fField28
         6f5f4:	05a4113c 	streq	r1, [r4, #316]!	; fField316
         6f5f8:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         6f5fc:	e595101c 	ldr	r1, [r5, #28]	; fField28
         6f600:	e3310000 	teq	r1, #0	; 0x0
         6f604:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         6f608:	e3a00000 	mov	r0, #0	; 0x0
         6f60c:	eb6dd305 	bl	1be4228 <CShadowBufferSegment::$__ct(void)>
         6f610:	e1a06000 	mov	r6, r0
         6f614:	e594013c 	ldr	r0, [r4, #316]	; fField316
         6f618:	e3300000 	teq	r0, #0	; 0x0
         6f61c:	03a000e9 	moveq	r0, #233	; 0xe9
         6f620:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         6f624:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         6f628:	e1a00006 	mov	r0, r6
         6f62c:	e3e03000 	mvn	r3, #0	; 0x0
         6f630:	e3a02000 	mov	r2, #0	; 0x0
         6f634:	e5b5101c 	ldr	r1, [r5, #28]!	; fField28
         6f638:	eb6de7a1 	bl	1be94c4 <CShadowBufferSegment::$Init(unsigned long, long, long)>
         6f63c:	e3300000 	teq	r0, #0	; 0x0
         6f640:	05a4613c 	streq	r6, [r4, #316]!	; fField316
         6f644:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::CopyBackConnectPB(long)
 * Address: 0006f648
 */
TCommTool::CopyBackConnectPB(long) {
    /*
         6f648:	e1a0c00d 	mov	ip, sp
         6f64c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6f650:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f654:	e1a04000 	mov	r4, r0
         6f658:	e1a05001 	mov	r5, r1
         6f65c:	e5d00144 	ldrb	r0, [r0, #324]	; fField324
         6f660:	e3300000 	teq	r0, #0	; 0x0
         6f664:	1594013c 	ldrne	r0, [r4, #316]	; fField316
         6f668:	13300000 	teqne	r0, #0	; 0x0
         6f66c:	0a000002 	beq	6f67c <TCommTool::CopyBackConnectPB(long)+0x34>
         6f670:	e3a01001 	mov	r1, #1	; 0x1
         6f674:	e1a0e00f 	mov	lr, pc
         6f678:	e590f000 	ldr	pc, [r0]
         6f67c:	e3a00000 	mov	r0, #0	; 0x0
         6f680:	e584013c 	str	r0, [r4, #316]	; fField316
         6f684:	e2842f5e 	add	r2, r4, #376	; 0x178
         6f688:	e1a01005 	mov	r1, r5
         6f68c:	e1a00004 	mov	r0, r4
         6f690:	e5943000 	ldr	r3, [r4]
         6f694:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6f698:	e283f09c 	add	pc, r3, #156	; 0x9c
    */
}

/**
 * Symbol: TCommTool::ConnectCheck(void)
 * Address: 0006f69c
 */
TCommTool::ConnectCheck(void) {
    /*
         6f69c:	e3a02f5e 	mov	r2, #376	; 0x178
         6f6a0:	e2422901 	sub	r2, r2, #16384	; 0x4000
         6f6a4:	e5901018 	ldr	r1, [r0, #24]	; fField24
         6f6a8:	e3110003 	tst	r1, #3	; 0x3
         6f6ac:	1a000008 	bne	6f6d4 <TCommTool::ConnectCheck(void)+0x38>
         6f6b0:	e3a02000 	mov	r2, #0	; 0x0
         6f6b4:	e3811001 	orr	r1, r1, #1	; 0x1
         6f6b8:	e5801018 	str	r1, [r0, #24]	; fField24
         6f6bc:	e3a01000 	mov	r1, #0	; 0x0
         6f6c0:	e580101c 	str	r1, [r0, #28]	; fField28
         6f6c4:	e5801020 	str	r1, [r0, #32]	; fField32
         6f6c8:	e5801028 	str	r1, [r0, #40]	; fField40
         6f6cc:	e580102c 	str	r1, [r0, #44]	; fField44
         6f6d0:	e5a011e0 	str	r1, [r0, #480]!	; fField480
         6f6d4:	e1a00002 	mov	r0, r2
         6f6d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::Connect(void)
 * Address: 0006f6dc
 */
TCommTool::Connect(void) {
    /*
         6f6dc:	e1a0c00d 	mov	ip, sp
         6f6e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6f6e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f6e8:	e1a04000 	mov	r4, r0
         6f6ec:	e280504c 	add	r5, r0, #76	; 0x4c
         6f6f0:	eb6d39e4 	bl	1bbde88 <TCommTool::$ConnectCheck(void)>
         6f6f4:	e3300000 	teq	r0, #0	; 0x0
         6f6f8:	1a00000f 	bne	6f73c <TCommTool::Connect(void)+0x60>
         6f6fc:	e1a01005 	mov	r1, r5
         6f700:	e1a00004 	mov	r0, r4
         6f704:	eb6d423e 	bl	1bc0004 <TCommTool::$ImportConnectPB(TCommToolConnectRequest *)>
         6f708:	e3300000 	teq	r0, #0	; 0x0
         6f70c:	1a000005 	bne	6f728 <TCommTool::Connect(void)+0x4c>
         6f710:	e2853014 	add	r3, r5, #20	; 0x14
         6f714:	e893000c 	ldmia	r3, {r2, r3}
         6f718:	e5d51024 	ldrb	r1, [r5, #36]	; fField36
         6f71c:	e1a00004 	mov	r0, r4
         6f720:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6f724:	ea66e76a 	b	1a294d4 <TCommTool::$ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)>
         6f728:	e1a01000 	mov	r1, r0
         6f72c:	e1a00004 	mov	r0, r4
         6f730:	e5942000 	ldr	r2, [r4]
         6f734:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6f738:	e282f054 	add	pc, r2, #84	; 0x54
         6f73c:	e1a02000 	mov	r2, r0
         6f740:	e1a00004 	mov	r0, r4
         6f744:	e3a01002 	mov	r1, #2	; 0x2
         6f748:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6f74c:	ea6d35c7 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::ConnectOptionsComplete(long)
 * Address: 0006f750
 */
TCommTool::ConnectOptionsComplete(long) {
    /*
         6f750:	e1a02000 	mov	r2, r0
         6f754:	e3310000 	teq	r1, #0	; 0x0
         6f758:	05921000 	ldreq	r1, [r2]
         6f75c:	0281f050 	addeq	pc, r1, #80	; 0x50
         6f760:	15922000 	ldrne	r2, [r2]
         6f764:	1282f054 	addne	pc, r2, #84	; 0x54
    */
}

/**
 * Symbol: TCommTool::ConnectStart(void)
 * Address: 0006f768
 */
TCommTool::ConnectStart(void) {
    /*
         6f768:	e3a01000 	mov	r1, #0	; 0x0
         6f76c:	e5902000 	ldr	r2, [r0]
         6f770:	e282f054 	add	pc, r2, #84	; 0x54
    */
}

/**
 * Symbol: TCommTool::ConnectComplete(long)
 * Address: 0006f774
 */
TCommTool::ConnectComplete(long) {
    /*
         6f774:	e1a0c00d 	mov	ip, sp
         6f778:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6f77c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f780:	e1a04000 	mov	r4, r0
         6f784:	e1b05001 	movs	r5, r1
         6f788:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6f78c:	e3c00001 	bic	r0, r0, #1	; 0x1
         6f790:	e5840018 	str	r0, [r4, #24]	; fField24
         6f794:	03800002 	orreq	r0, r0, #2	; 0x2
         6f798:	05840018 	streq	r0, [r4, #24]	; fField24
         6f79c:	e5940184 	ldr	r0, [r4, #388]	; fField388
         6f7a0:	e3300000 	teq	r0, #0	; 0x0
         6f7a4:	0a000014 	beq	6f7fc <TCommTool::ConnectComplete(long)+0x88>
         6f7a8:	e3350000 	teq	r5, #0	; 0x0
         6f7ac:	1a000012 	bne	6f7fc <TCommTool::ConnectComplete(long)+0x88>
         6f7b0:	e594018c 	ldr	r0, [r4, #396]	; fField396
         6f7b4:	e59f107c 	ldr	r1, [pc, #7c]	; 6f838 <TCommTool::ConnectComplete(long)+0xc4>
         6f7b8:	eb6d2515 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         6f7bc:	e1b06000 	movs	r6, r0
         6f7c0:	0a00000d 	beq	6f7fc <TCommTool::ConnectComplete(long)+0x88>
         6f7c4:	e5960008 	ldr	r0, [r6, #8]	; fField8
         6f7c8:	e2001cff 	and	r1, r0, #65280	; 0xff00
         6f7cc:	e3310b01 	teq	r1, #1024	; 0x400
         6f7d0:	138000ff 	orrne	r0, r0, #255	; 0xff
         6f7d4:	1a000004 	bne	6f7ec <TCommTool::ConnectComplete(long)+0x78>
         6f7d8:	e2841030 	add	r1, r4, #48	; 0x30
         6f7dc:	e1a00006 	mov	r0, r6
         6f7e0:	eb6d20fa 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         6f7e4:	e5960008 	ldr	r0, [r6, #8]	; fField8
         6f7e8:	e3c000ff 	bic	r0, r0, #255	; 0xff
         6f7ec:	e5860008 	str	r0, [r6, #8]	; fField8
         6f7f0:	e5960008 	ldr	r0, [r6, #8]	; fField8
         6f7f4:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         6f7f8:	e5a60008 	str	r0, [r6, #8]!	; fField8
         6f7fc:	e24dd014 	sub	sp, sp, #20	; 0x14
         6f800:	e1a0000d 	mov	r0, sp
         6f804:	eb6dffed 	bl	1bef7c0 <TCommToolConnectReply::$__ct(void)>
         6f808:	e5940140 	ldr	r0, [r4, #320]	; fField320
         6f80c:	e1a01005 	mov	r1, r5
         6f810:	e58d0010 	str	r0, [sp, #16]	; fField16
         6f814:	e1a00004 	mov	r0, r4
         6f818:	eb6d399d 	bl	1bbde94 <TCommTool::$CopyBackConnectPB(long)>
         6f81c:	e1a05000 	mov	r5, r0
         6f820:	e1a0300d 	mov	r3, sp
         6f824:	e1a02000 	mov	r2, r0
         6f828:	e1a00004 	mov	r0, r4
         6f82c:	e3a01002 	mov	r1, #2	; 0x2
         6f830:	eb6d358f 	bl	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         6f834:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         6f838:	63746369 	cmnvs	r4, #-1543503871	; 0xa4000001
    */
}

/**
 * Symbol: TCommTool::Listen(void)
 * Address: 0006f83c
 */
TCommTool::Listen(void) {
    /*
         6f83c:	e1a0c00d 	mov	ip, sp
         6f840:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6f844:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f848:	e1a04000 	mov	r4, r0
         6f84c:	e280504c 	add	r5, r0, #76	; 0x4c
         6f850:	eb6d398c 	bl	1bbde88 <TCommTool::$ConnectCheck(void)>
         6f854:	e3300000 	teq	r0, #0	; 0x0
         6f858:	1a00000f 	bne	6f89c <TCommTool::Listen(void)+0x60>
         6f85c:	e1a01005 	mov	r1, r5
         6f860:	e1a00004 	mov	r0, r4
         6f864:	eb6d41e6 	bl	1bc0004 <TCommTool::$ImportConnectPB(TCommToolConnectRequest *)>
         6f868:	e3300000 	teq	r0, #0	; 0x0
         6f86c:	1a000005 	bne	6f888 <TCommTool::Listen(void)+0x4c>
         6f870:	e2853014 	add	r3, r5, #20	; 0x14
         6f874:	e893000c 	ldmia	r3, {r2, r3}
         6f878:	e5d51024 	ldrb	r1, [r5, #36]	; fField36
         6f87c:	e1a00004 	mov	r0, r4
         6f880:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6f884:	ea66e712 	b	1a294d4 <TCommTool::$ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)>
         6f888:	e1a01000 	mov	r1, r0
         6f88c:	e1a00004 	mov	r0, r4
         6f890:	e5942000 	ldr	r2, [r4]
         6f894:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6f898:	e282f05c 	add	pc, r2, #92	; 0x5c
         6f89c:	e1a02000 	mov	r2, r0
         6f8a0:	e1a00004 	mov	r0, r4
         6f8a4:	e3a01002 	mov	r1, #2	; 0x2
         6f8a8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6f8ac:	ea6d356f 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::ListenOptionsComplete(long)
 * Address: 0006f8b0
 */
TCommTool::ListenOptionsComplete(long) {
    /*
         6f8b0:	e1a02000 	mov	r2, r0
         6f8b4:	e3310000 	teq	r1, #0	; 0x0
         6f8b8:	1a000005 	bne	6f8d4 <TCommTool::ListenOptionsComplete(long)+0x24>
         6f8bc:	e5920018 	ldr	r0, [r2, #24]	; fField24
         6f8c0:	e3800040 	orr	r0, r0, #64	; 0x40
         6f8c4:	e5820018 	str	r0, [r2, #24]	; fField24
         6f8c8:	e1a00002 	mov	r0, r2
         6f8cc:	e5921000 	ldr	r1, [r2]
         6f8d0:	e281f058 	add	pc, r1, #88	; 0x58
         6f8d4:	e1a00002 	mov	r0, r2
         6f8d8:	e5922000 	ldr	r2, [r2]
         6f8dc:	e282f05c 	add	pc, r2, #92	; 0x5c
    */
}

/**
 * Symbol: TCommTool::ListenStart(void)
 * Address: 0006f8e0
 */
TCommTool::ListenStart(void) {
    /*
         6f8e0:	e3a01000 	mov	r1, #0	; 0x0
         6f8e4:	e5902000 	ldr	r2, [r0]
         6f8e8:	e282f05c 	add	pc, r2, #92	; 0x5c
    */
}

/**
 * Symbol: TCommTool::ListenComplete(long)
 * Address: 0006f938
 */
TCommTool::ListenComplete(long) {
    /*
         6f938:	e1a0c00d 	mov	ip, sp
         6f93c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6f940:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f944:	e1a04000 	mov	r4, r0
         6f948:	e1a05001 	mov	r5, r1
         6f94c:	e24dd014 	sub	sp, sp, #20	; 0x14
         6f950:	e1a0000d 	mov	r0, sp
         6f954:	eb6dff99 	bl	1bef7c0 <TCommToolConnectReply::$__ct(void)>
         6f958:	e3350000 	teq	r5, #0	; 0x0
         6f95c:	15940018 	ldrne	r0, [r4, #24]	; fField24
         6f960:	13c00041 	bicne	r0, r0, #65	; 0x41
         6f964:	15840018 	strne	r0, [r4, #24]	; fField24
         6f968:	e5940140 	ldr	r0, [r4, #320]	; fField320
         6f96c:	e1a01005 	mov	r1, r5
         6f970:	e58d0010 	str	r0, [sp, #16]	; fField16
         6f974:	e1a00004 	mov	r0, r4
         6f978:	eb6d3945 	bl	1bbde94 <TCommTool::$CopyBackConnectPB(long)>
         6f97c:	e1a05000 	mov	r5, r0
         6f980:	e1a0300d 	mov	r3, sp
         6f984:	e1a02000 	mov	r2, r0
         6f988:	e1a00004 	mov	r0, r4
         6f98c:	e3a01002 	mov	r1, #2	; 0x2
         6f990:	eb6d3537 	bl	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         6f994:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::Accept(void)
 * Address: 0006f998
 */
TCommTool::Accept(void) {
    /*
         6f998:	e1a0c00d 	mov	ip, sp
         6f99c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6f9a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6f9a4:	e1a04000 	mov	r4, r0
         6f9a8:	e280504c 	add	r5, r0, #76	; 0x4c
         6f9ac:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6f9b0:	e3100040 	tst	r0, #64	; 0x40
         6f9b4:	0a00000f 	beq	6f9f8 <TCommTool::Accept(void)+0x60>
         6f9b8:	e1a01005 	mov	r1, r5
         6f9bc:	e1a00004 	mov	r0, r4
         6f9c0:	eb6d418f 	bl	1bc0004 <TCommTool::$ImportConnectPB(TCommToolConnectRequest *)>
         6f9c4:	e3300000 	teq	r0, #0	; 0x0
         6f9c8:	1a000005 	bne	6f9e4 <TCommTool::Accept(void)+0x4c>
         6f9cc:	e2853014 	add	r3, r5, #20	; 0x14
         6f9d0:	e893000c 	ldmia	r3, {r2, r3}
         6f9d4:	e5d51024 	ldrb	r1, [r5, #36]	; fField36
         6f9d8:	e1a00004 	mov	r0, r4
         6f9dc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6f9e0:	ea66e6bb 	b	1a294d4 <TCommTool::$ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)>
         6f9e4:	e1a01000 	mov	r1, r0
         6f9e8:	e1a00004 	mov	r0, r4
         6f9ec:	e5942000 	ldr	r2, [r4]
         6f9f0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6f9f4:	e282f064 	add	pc, r2, #100	; 0x64
         6f9f8:	e1a00004 	mov	r0, r4
         6f9fc:	e59f2008 	ldr	r2, [pc, #8]	; 6fa0c <TCommTool::Accept(void)+0x74>	; fField8
         6fa00:	e3a01002 	mov	r1, #2	; 0x2
         6fa04:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         6fa08:	ea6d3518 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
         6fa0c:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TCommTool::AcceptOptionsComplete(long)
 * Address: 0006fa10
 */
TCommTool::AcceptOptionsComplete(long) {
    /*
         6fa10:	e1a02000 	mov	r2, r0
         6fa14:	e3310000 	teq	r1, #0	; 0x0
         6fa18:	05921000 	ldreq	r1, [r2]
         6fa1c:	0281f060 	addeq	pc, r1, #96	; 0x60
         6fa20:	15922000 	ldrne	r2, [r2]
         6fa24:	1282f064 	addne	pc, r2, #100	; 0x64
    */
}

/**
 * Symbol: TCommTool::AcceptStart(void)
 * Address: 0006fa28
 */
TCommTool::AcceptStart(void) {
    /*
         6fa28:	e3a01000 	mov	r1, #0	; 0x0
         6fa2c:	e5902000 	ldr	r2, [r0]
         6fa30:	e282f064 	add	pc, r2, #100	; 0x64
    */
}

/**
 * Symbol: TCommTool::AcceptComplete(long)
 * Address: 0006fa34
 */
TCommTool::AcceptComplete(long) {
    /*
         6fa34:	e1a02000 	mov	r2, r0
         6fa38:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6fa3c:	e3c00040 	bic	r0, r0, #64	; 0x40
         6fa40:	e5820018 	str	r0, [r2, #24]	; fField24
         6fa44:	e1a00002 	mov	r0, r2
         6fa48:	e5922000 	ldr	r2, [r2]
         6fa4c:	e282f054 	add	pc, r2, #84	; 0x54
    */
}

/**
 * Symbol: TCommTool::Disconnect(void)
 * Address: 0006fa50
 */
TCommTool::Disconnect(void) {
    /*
         6fa50:	e1a02000 	mov	r2, r0
         6fa54:	e59f1038 	ldr	r1, [pc, #38]	; 6fa94 <TCommTool::Disconnect(void)+0x44>
         6fa58:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6fa5c:	e3100003 	tst	r0, #3	; 0x3
         6fa60:	0a000008 	beq	6fa88 <TCommTool::Disconnect(void)+0x38>
         6fa64:	e3800020 	orr	r0, r0, #32	; 0x20
         6fa68:	e5820018 	str	r0, [r2, #24]	; fField24
         6fa6c:	e5920028 	ldr	r0, [r2, #40]	; fField40
         6fa70:	e3300000 	teq	r0, #0	; 0x0
         6fa74:	03a00002 	moveq	r0, #2	; 0x2
         6fa78:	05820028 	streq	r0, [r2, #40]	; fField40
         6fa7c:	e1a00002 	mov	r0, r2
         6fa80:	e59f1010 	ldr	r1, [pc, #10]	; 6fa98 <TCommTool::Disconnect(void)+0x48>
         6fa84:	ea6d4581 	b	1bc1090 <TCommTool::$StartAbort(long)>
         6fa88:	e1a00002 	mov	r0, r2
         6fa8c:	e5922000 	ldr	r2, [r2]
         6fa90:	e282f068 	add	pc, r2, #104	; 0x68
         6fa94:	ffffc177 	swinv	0x00ffc177
         6fa98:	ffffc173 	swinv	0x00ffc173
    */
}

/**
 * Symbol: TCommTool::DisconnectComplete(long)
 * Address: 0006fa9c
 */
TCommTool::DisconnectComplete(long) {
    /*
         6fa9c:	e5902018 	ldr	r2, [r0, #24]	; fField24
         6faa0:	e3c22020 	bic	r2, r2, #32	; 0x20
         6faa4:	e5802018 	str	r2, [r0, #24]	; fField24
         6faa8:	e1a02001 	mov	r2, r1
         6faac:	e3a01002 	mov	r1, #2	; 0x2
         6fab0:	ea6d34ee 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::Release(void)
 * Address: 0006fab4
 */
TCommTool::Release(void) {
    /*
         6fab4:	e1a0c00d 	mov	ip, sp
         6fab8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6fabc:	e24cb004 	sub	fp, ip, #4	; 0x4
         6fac0:	e1a04000 	mov	r4, r0
         6fac4:	e59f2054 	ldr	r2, [pc, #54]	; 6fb20 <TCommTool::Release(void)+0x6c>
         6fac8:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6facc:	e3100003 	tst	r0, #3	; 0x3
         6fad0:	e1a00004 	mov	r0, r4
         6fad4:	03a01002 	moveq	r1, #2	; 0x2
         6fad8:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         6fadc:	0a6d34e3 	beq	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
         6fae0:	e3a02000 	mov	r2, #0	; 0x0
         6fae4:	e3a01000 	mov	r1, #0	; 0x0
         6fae8:	eb6d4567 	bl	1bc108c <TCommTool::$ShouldAbort(unsigned long, long)>
         6faec:	e3300000 	teq	r0, #0	; 0x0
         6faf0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         6faf4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         6faf8:	e3800008 	orr	r0, r0, #8	; 0x8
         6fafc:	e5840018 	str	r0, [r4, #24]	; fField24
         6fb00:	e5940028 	ldr	r0, [r4, #40]	; fField40
         6fb04:	e3300000 	teq	r0, #0	; 0x0
         6fb08:	03a00003 	moveq	r0, #3	; 0x3
         6fb0c:	05840028 	streq	r0, [r4, #40]	; fField40
         6fb10:	e1a00004 	mov	r0, r4
         6fb14:	e5941000 	ldr	r1, [r4]
         6fb18:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6fb1c:	e281f06c 	add	pc, r1, #108	; 0x6c
         6fb20:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TCommTool::ReleaseStart(void)
 * Address: 0006fb24
 */
TCommTool::ReleaseStart(void) {
    /*
         6fb24:	e5d010ac 	ldrb	r1, [r0, #172]	; fField172
         6fb28:	e3310000 	teq	r1, #0	; 0x0
         6fb2c:	059f1004 	ldreq	r1, [pc, #4]	; 6fb38 <TCommTool::ReleaseStart(void)+0x14>
         6fb30:	0a6d4556 	beq	1bc1090 <TCommTool::$StartAbort(long)>
         6fb34:	e1a0f00e 	mov	pc, lr
         6fb38:	ffffc173 	swinv	0x00ffc173
    */
}

/**
 * Symbol: TCommTool::ReleaseComplete(long)
 * Address: 0006fb3c
 */
TCommTool::ReleaseComplete(long) {
    /*
         6fb3c:	e5902018 	ldr	r2, [r0, #24]	; fField24
         6fb40:	e3c22008 	bic	r2, r2, #8	; 0x8
         6fb44:	e5802018 	str	r2, [r0, #24]	; fField24
         6fb48:	e1a02001 	mov	r2, r1
         6fb4c:	e3a01002 	mov	r1, #2	; 0x2
         6fb50:	ea6d34c6 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::Bind(void)
 * Address: 0006fb98
 */
TCommTool::Bind(void) {
    /*
         6fb98:	e92d4000 	stmdb	sp!, {lr}
         6fb9c:	e3a01f5e 	mov	r1, #376	; 0x178
         6fba0:	e2411901 	sub	r1, r1, #16384	; 0x4000
         6fba4:	e3a02000 	mov	r2, #0	; 0x0
         6fba8:	e3a03000 	mov	r3, #0	; 0x0
         6fbac:	e590c018 	ldr	ip, [r0, #24]	; fField24
         6fbb0:	e31c0003 	tst	ip, #3	; 0x3
         6fbb4:	1a00000a 	bne	6fbe4 <TCommTool::Bind(void)+0x4c>
         6fbb8:	e31c0c01 	tst	ip, #256	; 0x100
         6fbbc:	1a000006 	bne	6fbdc <TCommTool::Bind(void)+0x44>
         6fbc0:	e59010c8 	ldr	r1, [r0, #200]	; fField200
         6fbc4:	e3310020 	teq	r1, #32	; 0x20
         6fbc8:	02803064 	addeq	r3, r0, #100	; 0x64
         6fbcc:	0893000c 	ldmeqia	r3, {r2, r3}
         6fbd0:	e5d01060 	ldrb	r1, [r0, #96]	; fField96
         6fbd4:	e8bd4000 	ldmia	sp!, {lr}
         6fbd8:	ea66e63d 	b	1a294d4 <TCommTool::$ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)>
         6fbdc:	e3a0106e 	mov	r1, #110	; 0x6e
         6fbe0:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
         6fbe4:	e1a02001 	mov	r2, r1
         6fbe8:	e3a01002 	mov	r1, #2	; 0x2
         6fbec:	e8bd4000 	ldmia	sp!, {lr}
         6fbf0:	ea6d349e 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::BindOptionsComplete(long)
 * Address: 0006fbf4
 */
TCommTool::BindOptionsComplete(long) {
    /*
         6fbf4:	e1a02000 	mov	r2, r0
         6fbf8:	e3310000 	teq	r1, #0	; 0x0
         6fbfc:	05921000 	ldreq	r1, [r2]
         6fc00:	0281f074 	addeq	pc, r1, #116	; 0x74
         6fc04:	15922000 	ldrne	r2, [r2]
         6fc08:	1282f078 	addne	pc, r2, #120	; 0x78
    */
}

/**
 * Symbol: TCommTool::BindStart(void)
 * Address: 0006fc0c
 */
TCommTool::BindStart(void) {
    /*
         6fc0c:	e3a01000 	mov	r1, #0	; 0x0
         6fc10:	e5902000 	ldr	r2, [r0]
         6fc14:	e282f078 	add	pc, r2, #120	; 0x78
    */
}

/**
 * Symbol: TCommTool::BindComplete(long)
 * Address: 0006fc18
 */
TCommTool::BindComplete(long) {
    /*
         6fc18:	e1a0c00d 	mov	ip, sp
         6fc1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6fc20:	e24cb004 	sub	fp, ip, #4	; 0x4
         6fc24:	e1a04000 	mov	r4, r0
         6fc28:	e2802f5e 	add	r2, r0, #376	; 0x178
         6fc2c:	e5903000 	ldr	r3, [r0]
         6fc30:	e1a0e00f 	mov	lr, pc
         6fc34:	e283f09c 	add	pc, r3, #156	; 0x9c
         6fc38:	e1b01000 	movs	r1, r0
         6fc3c:	05940018 	ldreq	r0, [r4, #24]	; fField24
         6fc40:	03800c01 	orreq	r0, r0, #256	; 0x100
         6fc44:	05840018 	streq	r0, [r4, #24]	; fField24
         6fc48:	e1a02001 	mov	r2, r1
         6fc4c:	e1a00004 	mov	r0, r4
         6fc50:	e3a01002 	mov	r1, #2	; 0x2
         6fc54:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6fc58:	ea6d3484 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::Unbind(void)
 * Address: 0006fc5c
 */
TCommTool::Unbind(void) {
    /*
         6fc5c:	e1a02000 	mov	r2, r0
         6fc60:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6fc64:	e3100003 	tst	r0, #3	; 0x3
         6fc68:	11a00002 	movne	r0, r2
         6fc6c:	13a01f5e 	movne	r1, #376	; 0x178
         6fc70:	12411901 	subne	r1, r1, #16384	; 0x4000
         6fc74:	1a000004 	bne	6fc8c <TCommTool::Unbind(void)+0x30>
         6fc78:	e3100c01 	tst	r0, #256	; 0x100
         6fc7c:	e1a00002 	mov	r0, r2
         6fc80:	15921000 	ldrne	r1, [r2]
         6fc84:	1281f07c 	addne	pc, r1, #124	; 0x7c
         6fc88:	e3a01000 	mov	r1, #0	; 0x0
         6fc8c:	e5922000 	ldr	r2, [r2]
         6fc90:	e282f080 	add	pc, r2, #128	; 0x80
    */
}

/**
 * Symbol: TCommTool::UnbindStart(void)
 * Address: 0006fc94
 */
TCommTool::UnbindStart(void) {
    /*
         6fc94:	e3a01000 	mov	r1, #0	; 0x0
         6fc98:	e5902000 	ldr	r2, [r0]
         6fc9c:	e282f080 	add	pc, r2, #128	; 0x80
    */
}

/**
 * Symbol: TCommTool::UnbindComplete(long)
 * Address: 0006fca0
 */
TCommTool::UnbindComplete(long) {
    /*
         6fca0:	e3310000 	teq	r1, #0	; 0x0
         6fca4:	05902018 	ldreq	r2, [r0, #24]	; fField24
         6fca8:	03c22c01 	biceq	r2, r2, #256	; 0x100
         6fcac:	05802018 	streq	r2, [r0, #24]	; fField24
         6fcb0:	e1a02001 	mov	r2, r1
         6fcb4:	e3a01002 	mov	r1, #2	; 0x2
         6fcb8:	ea6d346c 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::ResArbRelease(unsigned char *, unsigned char *)
 * Address: 0006fcbc
 */
TCommTool::ResArbRelease(unsigned char *, unsigned char *) {
    /*
         6fcbc:	e1a03000 	mov	r3, r0
         6fcc0:	e5d001d0 	ldrb	r0, [r0, #464]	; fField464
         6fcc4:	e3300000 	teq	r0, #0	; 0x0
         6fcc8:	15d301d1 	ldrneb	r0, [r3, #465]	; fField465
         6fccc:	13300000 	teqne	r0, #0	; 0x0
         6fcd0:	e1a00003 	mov	r0, r3
         6fcd4:	15933000 	ldrne	r3, [r3]
         6fcd8:	1283ff43 	addne	pc, r3, #268	; 0x10c
         6fcdc:	e3a010a2 	mov	r1, #162	; 0xa2
         6fce0:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         6fce4:	e5932000 	ldr	r2, [r3]
         6fce8:	e282fe11 	add	pc, r2, #272	; 0x110
    */
}

/**
 * Symbol: TCommTool::ResArbReleaseStart(unsigned char *, unsigned char *)
 * Address: 0006fcec
 */
TCommTool::ResArbReleaseStart(unsigned char *, unsigned char *) {
    /*
         6fcec:	e3a020a2 	mov	r2, #162	; 0xa2
         6fcf0:	e2422b0a 	sub	r2, r2, #10240	; 0x2800
         6fcf4:	e3a01006 	mov	r1, #6	; 0x6
         6fcf8:	ea6d345c 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::ResArbReleaseComplete(long)
 * Address: 0006fcfc
 */
TCommTool::ResArbReleaseComplete(long) {
    /*
         6fcfc:	e1a02001 	mov	r2, r1
         6fd00:	e3a01006 	mov	r1, #6	; 0x6
         6fd04:	ea6d3459 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::ResArbClaimNotification(unsigned char *, unsigned char *)
 * Address: 0006fd64
 */
TCommTool::ResArbClaimNotification(unsigned char *, unsigned char *) {
    /*
         6fd64:	e3a020a1 	mov	r2, #161	; 0xa1
         6fd68:	e2422b0a 	sub	r2, r2, #10240	; 0x2800
         6fd6c:	e3a01006 	mov	r1, #6	; 0x6
         6fd70:	ea6d343e 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)
 * Address: 0006fd74
 */
TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *) {
    /*
         6fd74:	e1a0c00d 	mov	ip, sp
         6fd78:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         6fd7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6fd80:	e1a05000 	mov	r5, r0
         6fd84:	e1a04001 	mov	r4, r1
         6fd88:	e3a06000 	mov	r6, #0	; 0x0
         6fd8c:	e5910014 	ldr	r0, [r1, #20]
         6fd90:	e3300c05 	teq	r0, #1280	; 0x500
         6fd94:	1a000005 	bne	6fdb0 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0x3c>
         6fd98:	e284300c 	add	r3, r4, #12	; 0xc
         6fd9c:	e893000c 	ldmia	r3, {r2, r3}
         6fda0:	e5d41018 	ldrb	r1, [r4, #24]	; fField24
         6fda4:	e1a00005 	mov	r0, r5
         6fda8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         6fdac:	ea66e5c8 	b	1a294d4 <TCommTool::$ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)>
         6fdb0:	e594100c 	ldr	r1, [r4, #12]
         6fdb4:	e3310000 	teq	r1, #0	; 0x0
         6fdb8:	0a000039 	beq	6fea4 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0x130>
         6fdbc:	e3a060e9 	mov	r6, #233	; 0xe9
         6fdc0:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
         6fdc4:	e3300c03 	teq	r0, #768	; 0x300
         6fdc8:	1a000013 	bne	6fe1c <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0xa8>
         6fdcc:	e3a00000 	mov	r0, #0	; 0x0
         6fdd0:	eb6d1743 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         6fdd4:	e1b07000 	movs	r7, r0
         6fdd8:	0a000017 	beq	6fe3c <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0xc8>
         6fddc:	e1a00007 	mov	r0, r7
         6fde0:	eb6d23a5 	bl	1bb8c7c <TOptionArray::$Init(void)>
         6fde4:	e1b06000 	movs	r6, r0
         6fde8:	1a000028 	bne	6fe90 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0x11c>
         6fdec:	e1a01007 	mov	r1, r7
         6fdf0:	e1a00005 	mov	r0, r5
         6fdf4:	e5952000 	ldr	r2, [r5]
         6fdf8:	e1a0e00f 	mov	lr, pc
         6fdfc:	e282f0b4 	add	pc, r2, #180	; 0xb4
         6fe00:	e1a06000 	mov	r6, r0
         6fe04:	e5d40018 	ldrb	r0, [r4, #24]	; fField24
         6fe08:	e3300000 	teq	r0, #0	; 0x0
         6fe0c:	0a00001f 	beq	6fe90 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0x11c>
         6fe10:	e3360000 	teq	r6, #0	; 0x0
         6fe14:	1a00001d 	bne	6fe90 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0x11c>
         6fe18:	ea000018 	b	6fe80 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0x10c>
         6fe1c:	e3300b01 	teq	r0, #1024	; 0x400
         6fe20:	13a0607e 	movne	r6, #126	; 0x7e
         6fe24:	12466c3f 	subne	r6, r6, #16128	; 0x3f00
         6fe28:	1a00001d 	bne	6fea4 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0x130>
         6fe2c:	e3a00000 	mov	r0, #0	; 0x0
         6fe30:	eb6d172b 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         6fe34:	e1b07000 	movs	r7, r0
         6fe38:	1a000001 	bne	6fe44 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0xd0>
         6fe3c:	e1a02006 	mov	r2, r6
         6fe40:	ea000018 	b	6fea8 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0x134>
         6fe44:	e1a00007 	mov	r0, r7
         6fe48:	eb6d238b 	bl	1bb8c7c <TOptionArray::$Init(void)>
         6fe4c:	e1b06000 	movs	r6, r0
         6fe50:	1a00000e 	bne	6fe90 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0x11c>
         6fe54:	e1a01007 	mov	r1, r7
         6fe58:	e1a00005 	mov	r0, r5
         6fe5c:	e5952000 	ldr	r2, [r5]
         6fe60:	e1a0e00f 	mov	lr, pc
         6fe64:	e282f0b8 	add	pc, r2, #184	; 0xb8
         6fe68:	e1a06000 	mov	r6, r0
         6fe6c:	e5d40018 	ldrb	r0, [r4, #24]	; fField24
         6fe70:	e3300000 	teq	r0, #0	; 0x0
         6fe74:	0a000005 	beq	6fe90 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0x11c>
         6fe78:	e3360000 	teq	r6, #0	; 0x0
         6fe7c:	1a000003 	bne	6fe90 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0x11c>
         6fe80:	e1a00007 	mov	r0, r7
         6fe84:	e5b4100c 	ldr	r1, [r4, #12]!
         6fe88:	eb6d1f53 	bl	1bb7bdc <TOptionArray::$CopyToShared(unsigned long)>
         6fe8c:	e1a06000 	mov	r6, r0
         6fe90:	e3370000 	teq	r7, #0	; 0x0
         6fe94:	0a000002 	beq	6fea4 <TCommTool::OptionMgmt(TCommToolOptionMgmtRequest *)+0x130>
         6fe98:	e1a00007 	mov	r0, r7
         6fe9c:	e3a01001 	mov	r1, #1	; 0x1
         6fea0:	eb6d1b21 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         6fea4:	e1a02006 	mov	r2, r6
         6fea8:	e1a00005 	mov	r0, r5
         6feac:	e3a01002 	mov	r1, #2	; 0x2
         6feb0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         6feb4:	ea6d33ed 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::OptionMgmtComplete(long)
 * Address: 0006feb8
 */
TCommTool::OptionMgmtComplete(long) {
    /*
         6feb8:	e1a0c00d 	mov	ip, sp
         6febc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6fec0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6fec4:	e1a04000 	mov	r4, r0
         6fec8:	e2802f5e 	add	r2, r0, #376	; 0x178
         6fecc:	e5903000 	ldr	r3, [r0]
         6fed0:	e1a0e00f 	mov	lr, pc
         6fed4:	e283f09c 	add	pc, r3, #156	; 0x9c
         6fed8:	e1a02000 	mov	r2, r0
         6fedc:	e1a00004 	mov	r0, r4
         6fee0:	e3a01002 	mov	r1, #2	; 0x2
         6fee4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6fee8:	ea6d33e0 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommTool::AddDefaultOptions(TOptionArray *)
 * Address: 0006feec
 */
TCommTool::AddDefaultOptions(TOptionArray *) {
    /*
         6feec:	e3a00000 	mov	r0, #0	; 0x0
         6fef0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::AddCurrentOptions(TOptionArray *)
 * Address: 0006fef4
 */
TCommTool::AddCurrentOptions(TOptionArray *) {
    /*
         6fef4:	e3a00000 	mov	r0, #0	; 0x0
         6fef8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::ProcessOptions(TOptionArray *)
 * Address: 0006fefc
 */
TCommTool::ProcessOptions(TOptionArray *) {
    /*
         6fefc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommTool::ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)
 * Address: 0006ff00
 */
TCommTool::ProcessControlOptions(unsigned char, TOptionArray *, unsigned long) {
    /*
         6ff00:	e1a0c000 	mov	ip, r0
         6ff04:	e31100ff 	tst	r1, #255	; 0xff
         6ff08:	e3a01000 	mov	r1, #0	; 0x0
         6ff0c:	e58c1178 	str	r1, [ip, #376]	; fField376
         6ff10:	13a00020 	movne	r0, #32	; 0x20
         6ff14:	158c0178 	strne	r0, [ip, #376]	; fField376
         6ff18:	158c3180 	strne	r3, [ip, #384]
         6ff1c:	e3a00002 	mov	r0, #2	; 0x2
         6ff20:	e58c017c 	str	r0, [ip, #380]	; fField380
         6ff24:	e58c2184 	str	r2, [ip, #388]	; fField388
         6ff28:	e28c1f5e 	add	r1, ip, #376	; 0x178
         6ff2c:	e1a0000c 	mov	r0, ip
         6ff30:	e59c2000 	ldr	r2, [ip]
         6ff34:	e282f090 	add	pc, r2, #144	; 0x90
    */
}

/**
 * Symbol: TCommTool::ProcessOptions(TCommToolOptionInfo *)
 * Address: 0006ff38
 */
TCommTool::ProcessOptions(TCommToolOptionInfo *) {
    /*
         6ff38:	e1a0c00d 	mov	ip, sp
         6ff3c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         6ff40:	e24cb004 	sub	fp, ip, #4	; 0x4
         6ff44:	e1a05000 	mov	r5, r0
         6ff48:	e1a04001 	mov	r4, r1
         6ff4c:	e3a070e9 	mov	r7, #233	; 0xe9
         6ff50:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
         6ff54:	e1a06007 	mov	r6, r7
         6ff58:	e591800c 	ldr	r8, [r1, #12]
         6ff5c:	e3380000 	teq	r8, #0	; 0x0
         6ff60:	01a02004 	moveq	r2, r4
         6ff64:	01a00005 	moveq	r0, r5
         6ff68:	03a01000 	moveq	r1, #0	; 0x0
         6ff6c:	0a000019 	beq	6ffd8 <TCommTool::ProcessOptions(TCommToolOptionInfo *)+0xa0>
         6ff70:	e5940000 	ldr	r0, [r4]
         6ff74:	e3100020 	tst	r0, #32	; 0x20
         6ff78:	0a00000c 	beq	6ffb0 <TCommTool::ProcessOptions(TCommToolOptionInfo *)+0x78>
         6ff7c:	e3a00000 	mov	r0, #0	; 0x0
         6ff80:	eb6d16d7 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         6ff84:	e584000c 	str	r0, [r4, #12]
         6ff88:	e3300000 	teq	r0, #0	; 0x0
         6ff8c:	0a00000e 	beq	6ffcc <TCommTool::ProcessOptions(TCommToolOptionInfo *)+0x94>
         6ff90:	e5941000 	ldr	r1, [r4]
         6ff94:	e3811004 	orr	r1, r1, #4	; 0x4
         6ff98:	e5841000 	str	r1, [r4]
         6ff9c:	e1a01008 	mov	r1, r8
         6ffa0:	e5942008 	ldr	r2, [r4, #8]	; fField8
         6ffa4:	eb6d2333 	bl	1bb8c78 <TOptionArray::$Init(unsigned long, unsigned long)>
         6ffa8:	e1b06000 	movs	r6, r0
         6ffac:	1a000006 	bne	6ffcc <TCommTool::ProcessOptions(TCommToolOptionInfo *)+0x94>
         6ffb0:	e3a00000 	mov	r0, #0	; 0x0
         6ffb4:	e594100c 	ldr	r1, [r4, #12]
         6ffb8:	eb6d16ce 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         6ffbc:	e5840014 	str	r0, [r4, #20]
         6ffc0:	e3300000 	teq	r0, #0	; 0x0
         6ffc4:	1a000006 	bne	6ffe4 <TCommTool::ProcessOptions(TCommToolOptionInfo *)+0xac>
         6ffc8:	e1a06007 	mov	r6, r7
         6ffcc:	e1a02004 	mov	r2, r4
         6ffd0:	e1a01006 	mov	r1, r6
         6ffd4:	e1a00005 	mov	r0, r5
         6ffd8:	e5953000 	ldr	r3, [r5]
         6ffdc:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         6ffe0:	e283f098 	add	pc, r3, #152	; 0x98
         6ffe4:	e5940000 	ldr	r0, [r4]
         6ffe8:	e3800001 	orr	r0, r0, #1	; 0x1
         6ffec:	e5840000 	str	r0, [r4]
         6fff0:	e1a01004 	mov	r1, r4
         6fff4:	e1a00005 	mov	r0, r5
         6fff8:	e5952000 	ldr	r2, [r5]
         6fffc:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         70000:	e282f094 	add	pc, r2, #148	; 0x94
    */
}

/**
 * Symbol: TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)
 * Address: 00070004
 */
TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *) {
    /*
         70004:	e1a0c00d 	mov	ip, sp
         70008:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         7000c:	e24cb004 	sub	fp, ip, #4	; 0x4
         70010:	e1a05000 	mov	r5, r0
         70014:	e1a04001 	mov	r4, r1
         70018:	e3a06000 	mov	r6, #0	; 0x0
         7001c:	e3a07000 	mov	r7, #0	; 0x0
         70020:	e59f8148 	ldr	r8, [pc, #148]	; 70170 <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0x16c>	; fField148
         70024:	e5940014 	ldr	r0, [r4, #20]
         70028:	eb6d1eed 	bl	1bb7be4 <TOptionIterator::$CurrentOption(void)>
         7002c:	e5840010 	str	r0, [r4, #16]	; fField16
         70030:	e3300000 	teq	r0, #0	; 0x0
         70034:	0a00001a 	beq	700a4 <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0xa0>
         70038:	e5940014 	ldr	r0, [r4, #20]
         7003c:	eb6d2722 	bl	1bb9ccc <TOptionIterator::$NextOption(void)>
         70040:	e5940010 	ldr	r0, [r4, #16]	; fField16
         70044:	e1a01000 	mov	r1, r0
         70048:	e5902000 	ldr	r2, [r0]
         7004c:	e5900008 	ldr	r0, [r0, #8]	; fField8
         70050:	e2003cff 	and	r3, r0, #65280	; 0xff00
         70054:	e200c102 	and	ip, r0, #-2147483648	; 0x80000000
         70058:	e33c0102 	teq	ip, #-2147483648	; 0x80000000
         7005c:	1200e43f 	andne	lr, r0, #1056964608	; 0x3f000000
         70060:	133e0301 	teqne	lr, #67108864	; 0x4000000
         70064:	0a00004a 	beq	70194 <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0x190>
         70068:	e1320008 	teq	r2, r8
         7006c:	1a000012 	bne	700bc <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0xb8>
         70070:	e591300c 	ldr	r3, [r1, #12]
         70074:	e5952204 	ldr	r2, [r5, #516]	; fField516
         70078:	e1330002 	teq	r3, r2
         7007c:	03800102 	orreq	r0, r0, #-2147483648	; 0x80000000
         70080:	05a10008 	streq	r0, [r1, #8]!	; fField8
         70084:	0a000042 	beq	70194 <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0x190>
         70088:	e5940014 	ldr	r0, [r4, #20]
         7008c:	eb6d270b 	bl	1bb9cc0 <TOptionIterator::$More(void)>
         70090:	e3300000 	teq	r0, #0	; 0x0
         70094:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         70098:	e5940000 	ldr	r0, [r4]
         7009c:	e3800002 	orr	r0, r0, #2	; 0x2
         700a0:	e5840000 	str	r0, [r4]
         700a4:	e1a02004 	mov	r2, r4
         700a8:	e1a00005 	mov	r0, r5
         700ac:	e3a01000 	mov	r1, #0	; 0x0
         700b0:	e5953000 	ldr	r3, [r5]
         700b4:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         700b8:	e283f098 	add	pc, r3, #152	; 0x98
         700bc:	e33e0402 	teq	lr, #33554432	; 0x2000000
         700c0:	1a000004 	bne	700d8 <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0xd4>
         700c4:	e591000c 	ldr	r0, [r1, #12]
         700c8:	e595c204 	ldr	ip, [r5, #516]	; fField516
         700cc:	e130000c 	teq	r0, ip
         700d0:	13e06005 	mvnne	r6, #5	; 0x5
         700d4:	1a000026 	bne	70174 <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0x170>
         700d8:	e3330c01 	teq	r3, #256	; 0x100
         700dc:	13330c02 	teqne	r3, #512	; 0x200
         700e0:	13330c03 	teqne	r3, #768	; 0x300
         700e4:	13330b01 	teqne	r3, #1024	; 0x400
         700e8:	13e06004 	mvnne	r6, #4	; 0x4
         700ec:	1a000016 	bne	7014c <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0x148>
         700f0:	e5940004 	ldr	r0, [r4, #4]
         700f4:	e3300000 	teq	r0, #0	; 0x0
         700f8:	01a00005 	moveq	r0, r5
         700fc:	0595c000 	ldreq	ip, [r5]
         70100:	028cc0c4 	addeq	ip, ip, #196	; 0xc4
         70104:	0a000009 	beq	70130 <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0x12c>
         70108:	e3300001 	teq	r0, #1	; 0x1
         7010c:	01a00005 	moveq	r0, r5
         70110:	0595c000 	ldreq	ip, [r5]
         70114:	028cc0bc 	addeq	ip, ip, #188	; 0xbc
         70118:	0a000004 	beq	70130 <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0x12c>
         7011c:	e3300002 	teq	r0, #2	; 0x2
         70120:	1a000005 	bne	7013c <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0x138>
         70124:	e1a00005 	mov	r0, r5
         70128:	e595c000 	ldr	ip, [r5]
         7012c:	e28cc0a4 	add	ip, ip, #164	; 0xa4
         70130:	e1a0e00f 	mov	lr, pc
         70134:	e1a0f00c 	mov	pc, ip
         70138:	e1a06000 	mov	r6, r0
         7013c:	e3360001 	teq	r6, #1	; 0x1
         70140:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         70144:	e3760006 	cmn	r6, #6	; 0x6
         70148:	0a000009 	beq	70174 <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0x170>
         7014c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         70150:	e5901008 	ldr	r1, [r0, #8]	; fField8
         70154:	e3c120ff 	bic	r2, r1, #255	; 0xff
         70158:	e20610ff 	and	r1, r6, #255	; 0xff
         7015c:	e1821001 	orr	r1, r2, r1
         70160:	e5a01008 	str	r1, [r0, #8]!	; fField8
         70164:	e3811102 	orr	r1, r1, #-2147483648	; 0x80000000
         70168:	e5940010 	ldr	r0, [r4, #16]	; fField16
         7016c:	ea000007 	b	70190 <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0x18c>
         70170:	6374736f 	cmnvs	r4, #-1140850687	; 0xbc000001
         70174:	e5940000 	ldr	r0, [r4]
         70178:	e3800002 	orr	r0, r0, #2	; 0x2
         7017c:	e5840000 	str	r0, [r4]
         70180:	e5940010 	ldr	r0, [r4, #16]	; fField16
         70184:	e5901008 	ldr	r1, [r0, #8]	; fField8
         70188:	e3c110ff 	bic	r1, r1, #255	; 0xff
         7018c:	e38110fc 	orr	r1, r1, #252	; 0xfc
         70190:	e5a01008 	str	r1, [r0, #8]!	; fField8
         70194:	e3370000 	teq	r7, #0	; 0x0
         70198:	0affffa1 	beq	70024 <TCommTool::ProcessOptionsContinue(TCommToolOptionInfo *)+0x20>
         7019c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)
 * Address: 000701a0
 */
TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *) {
    /*
         701a0:	e1a0c00d 	mov	ip, sp
         701a4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         701a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         701ac:	e1a04000 	mov	r4, r0
         701b0:	e1b08001 	movs	r8, r1
         701b4:	e1a05002 	mov	r5, r2
         701b8:	e3a06000 	mov	r6, #0	; 0x0
         701bc:	0a000006 	beq	701dc <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x3c>
         701c0:	e1a02005 	mov	r2, r5
         701c4:	e1a01008 	mov	r1, r8
         701c8:	e1a00004 	mov	r0, r4
         701cc:	e5943000 	ldr	r3, [r4]
         701d0:	e1a0e00f 	mov	lr, pc
         701d4:	e283f09c 	add	pc, r3, #156	; 0x9c
         701d8:	ea000052 	b	70328 <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x188>
         701dc:	e5950000 	ldr	r0, [r5]
         701e0:	e3100002 	tst	r0, #2	; 0x2
         701e4:	0a00004f 	beq	70328 <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x188>
         701e8:	e5950004 	ldr	r0, [r5, #4]
         701ec:	e3300002 	teq	r0, #2	; 0x2
         701f0:	1a00004c 	bne	70328 <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x188>
         701f4:	e59401d4 	ldr	r0, [r4, #468]	; fField468
         701f8:	e3300001 	teq	r0, #1	; 0x1
         701fc:	0a000049 	beq	70328 <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x188>
         70200:	e1a00004 	mov	r0, r4
         70204:	e5941000 	ldr	r1, [r4]
         70208:	e1a0e00f 	mov	lr, pc
         7020c:	e281f0b0 	add	pc, r1, #176	; 0xb0
         70210:	e1b07000 	movs	r7, r0
         70214:	0a000041 	beq	70320 <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x180>
         70218:	e5950000 	ldr	r0, [r5]
         7021c:	e3100010 	tst	r0, #16	; 0x10
         70220:	e3a06000 	mov	r6, #0	; 0x0
         70224:	1a000022 	bne	702b4 <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x114>
         70228:	e3a080e9 	mov	r8, #233	; 0xe9
         7022c:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
         70230:	e3a00000 	mov	r0, #0	; 0x0
         70234:	eb6dfd6c 	bl	1bef7ec <TCommToolOptionMgmtRequest::$__ct(void)>
         70238:	e584020c 	str	r0, [r4, #524]	; fField524
         7023c:	e3300000 	teq	r0, #0	; 0x0
         70240:	0a000071 	beq	7040c <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x26c>
         70244:	e3a00000 	mov	r0, #0	; 0x0
         70248:	eb6dfd59 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         7024c:	e5840214 	str	r0, [r4, #532]	; fField532
         70250:	e3300000 	teq	r0, #0	; 0x0
         70254:	0a00006c 	beq	7040c <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x26c>
         70258:	e3a00000 	mov	r0, #0	; 0x0
         7025c:	eb6d7512 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         70260:	e5840210 	str	r0, [r4, #528]	; fField528
         70264:	e3300000 	teq	r0, #0	; 0x0
         70268:	0a000067 	beq	7040c <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x26c>
         7026c:	e1a01000 	mov	r1, r0
         70270:	e1a00004 	mov	r0, r4
         70274:	e3a02ee2 	mov	r2, #3616	; 0xe20
         70278:	e2822901 	add	r2, r2, #16384	; 0x4000
         7027c:	eb6d3f61 	bl	1bc0008 <TCommTool::$InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
         70280:	e1b08000 	movs	r8, r0
         70284:	1a000060 	bne	7040c <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x26c>
         70288:	e595100c 	ldr	r1, [r5, #12]
         7028c:	e594020c 	ldr	r0, [r4, #524]	; fField524
         70290:	e5a0100c 	str	r1, [r0, #12]!
         70294:	e594020c 	ldr	r0, [r4, #524]	; fField524
         70298:	e5c06018 	strb	r6, [r0, #24]	; fField24
         7029c:	e3a00c05 	mov	r0, #1280	; 0x500
         702a0:	e594120c 	ldr	r1, [r4, #524]	; fField524
         702a4:	e5a10014 	str	r0, [r1, #20]!
         702a8:	e5950000 	ldr	r0, [r5]
         702ac:	e3800010 	orr	r0, r0, #16	; 0x10
         702b0:	e5850000 	str	r0, [r5]
         702b4:	e3a01010 	mov	r1, #16	; 0x10
         702b8:	e3a02000 	mov	r2, #0	; 0x0
         702bc:	e3a03000 	mov	r3, #0	; 0x0
         702c0:	e3a0e004 	mov	lr, #4	; 0x4
         702c4:	e5940214 	ldr	r0, [r4, #532]	; fField532
         702c8:	e284cf83 	add	ip, r4, #524	; 0x20c
         702cc:	e89c1100 	ldmia	ip, {r8, ip}
         702d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         702d4:	e1a03006 	mov	r3, r6
         702d8:	e3a02001 	mov	r2, #1	; 0x1
         702dc:	e1a0100e 	mov	r1, lr
         702e0:	e3a0001c 	mov	r0, #28	; 0x1c
         702e4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         702e8:	e1a03008 	mov	r3, r8
         702ec:	e92d0008 	stmdb	sp!, {r3}
         702f0:	e1a00007 	mov	r0, r7
         702f4:	e3a03000 	mov	r3, #0	; 0x0
         702f8:	e49c1008 	ldr	r1, [ip], #8	; fField8
         702fc:	e59c2000 	ldr	r2, [ip]
         70300:	eb6daa91 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         70304:	e28dd024 	add	sp, sp, #36	; 0x24
         70308:	e1b08000 	movs	r8, r0
         7030c:	1a00003e 	bne	7040c <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x26c>
         70310:	e5950000 	ldr	r0, [r5]
         70314:	e3800008 	orr	r0, r0, #8	; 0x8
         70318:	e3a06001 	mov	r6, #1	; 0x1
         7031c:	e5850000 	str	r0, [r5]
         70320:	e3360000 	teq	r6, #0	; 0x0
         70324:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         70328:	e5b50004 	ldr	r0, [r5, #4]!
         7032c:	e3300000 	teq	r0, #0	; 0x0
         70330:	0a000016 	beq	70390 <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x1f0>
         70334:	e3300001 	teq	r0, #1	; 0x1
         70338:	0a000019 	beq	703a4 <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x204>
         7033c:	e3300002 	teq	r0, #2	; 0x2
         70340:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         70344:	e59401d4 	ldr	r0, [r4, #468]	; fField468
         70348:	e350000a 	cmp	r0, #10	; 0xa
         7034c:	908ff100 	addls	pc, pc, r0, lsl #2
         70350:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         70354:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         70358:	ea000017 	b	703bc <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x21c>
         7035c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         70360:	ea000019 	b	703cc <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x22c>
         70364:	ea00001c 	b	703dc <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x23c>
         70368:	ea00001f 	b	703ec <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x24c>
         7036c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         70370:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         70374:	ea000020 	b	703fc <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x25c>
         70378:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         7037c:	e1a01008 	mov	r1, r8
         70380:	e1a00004 	mov	r0, r4
         70384:	e5942000 	ldr	r2, [r4]
         70388:	e282208c 	add	r2, r2, #140	; 0x8c
         7038c:	ea000008 	b	703b4 <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x214>
         70390:	e1a01008 	mov	r1, r8
         70394:	e1a00004 	mov	r0, r4
         70398:	e5942000 	ldr	r2, [r4]
         7039c:	e28220fc 	add	r2, r2, #252	; 0xfc
         703a0:	ea000003 	b	703b4 <TCommTool::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x214>
         703a4:	e1a01008 	mov	r1, r8
         703a8:	e1a00004 	mov	r0, r4
         703ac:	e5942000 	ldr	r2, [r4]
         703b0:	e2822f41 	add	r2, r2, #260	; 0x104
         703b4:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         703b8:	e282f000 	add	pc, r2, #0	; 0x0
         703bc:	e1a01008 	mov	r1, r8
         703c0:	e1a00004 	mov	r0, r4
         703c4:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         703c8:	ea66e01a 	b	1a28438 <TCommTool::$OpenOptionsComplete(long)>
         703cc:	e1a01008 	mov	r1, r8
         703d0:	e1a00004 	mov	r0, r4
         703d4:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         703d8:	ea66d3b4 	b	1a252b0 <TCommTool::$ConnectOptionsComplete(long)>
         703dc:	e1a01008 	mov	r1, r8
         703e0:	e1a00004 	mov	r0, r4
         703e4:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         703e8:	ea66e007 	b	1a2840c <TCommTool::$ListenOptionsComplete(long)>
         703ec:	e1a01008 	mov	r1, r8
         703f0:	e1a00004 	mov	r0, r4
         703f4:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         703f8:	ea66cb6b 	b	1a231ac <TCommTool::$AcceptOptionsComplete(long)>
         703fc:	e1a01008 	mov	r1, r8
         70400:	e1a00004 	mov	r0, r4
         70404:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         70408:	ea66cb79 	b	1a231f4 <TCommTool::$BindOptionsComplete(long)>
         7040c:	e1a02005 	mov	r2, r5
         70410:	e1a01008 	mov	r1, r8
         70414:	e1a00004 	mov	r0, r4
         70418:	e5943000 	ldr	r3, [r4]
         7041c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         70420:	e283f098 	add	pc, r3, #152	; 0x98
    */
}

