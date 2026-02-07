#include "include/TScriptEndpointClient.h"

/**
 * Symbol: TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00067440
 */
TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         67440:	e1a0c00d 	mov	ip, sp
         67444:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         67448:	e24cb004 	sub	fp, ip, #4	; 0x4
         6744c:	e1a04000 	mov	r4, r0
         67450:	e1a07001 	mov	r7, r1
         67454:	e1a06002 	mov	r6, r2
         67458:	e1a05003 	mov	r5, r3
         6745c:	e59f004c 	ldr	r0, [pc, #4c]	; 674b0 <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x70>	; fField4
         67460:	eb6e20d1 	bl	1bef7ac <$SetPort(GrafPort *)>
         67464:	e1a09000 	mov	r9, r0
         67468:	e3a08000 	mov	r8, #0	; 0x0
         6746c:	e52d806c 	str	r8, [sp, -#108]!
         67470:	e28d0008 	add	r0, sp, #8	; 0x8
         67474:	eb6d2d3e 	bl	1bb2974 <$setjmp>
         67478:	e3300000 	teq	r0, #0	; 0x0
         6747c:	1a00000d 	bne	674b8 <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x78>
         67480:	e1a0000d 	mov	r0, sp
         67484:	eb6de2fc 	bl	1be007c <$AddExceptionHandler>
         67488:	e1a03005 	mov	r3, r5
         6748c:	e1a02006 	mov	r2, r6
         67490:	e1a01007 	mov	r1, r7
         67494:	e1a00004 	mov	r0, r4
         67498:	eb6d3db5 	bl	1bb6b74 <TEndpointClient::$AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)>
         6749c:	e59f0010 	ldr	r0, [pc, #10]	; 674b4 <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x74>
         674a0:	e5900000 	ldr	r0, [r0]
         674a4:	e3a01000 	mov	r1, #0	; 0x0
         674a8:	eb68f77d 	bl	1aa52a4 <TRootView::$Update(TRect *)>
         674ac:	ea00004a 	b	675dc <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x19c>
         674b0:	0c1067cc 	ldceq	7, cr6, [r0], -#816
         674b4:	0c101934 	ldceq	9, cr1, [r0], -#208
         674b8:	e59d0060 	ldr	r0, [sp, #96]
         674bc:	e59f10f4 	ldr	r1, [pc, #f4]	; 675b8 <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x178>
         674c0:	e5911000 	ldr	r1, [r1]
         674c4:	eb6def32 	bl	1be3194 <$Subexception>
         674c8:	e3300000 	teq	r0, #0	; 0x0
         674cc:	0a000040 	beq	675d4 <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x194>
         674d0:	e2840024 	add	r0, r4, #36	; 0x24
         674d4:	e1a04000 	mov	r4, r0
         674d8:	e5900000 	ldr	r0, [r0]
         674dc:	e5900000 	ldr	r0, [r0]
         674e0:	e3300002 	teq	r0, #2	; 0x2
         674e4:	0a000037 	beq	675c8 <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x188>
         674e8:	e59f10cc 	ldr	r1, [pc, #cc]	; 675bc <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x17c>
         674ec:	e5911000 	ldr	r1, [r1]
         674f0:	e5911000 	ldr	r1, [r1]
         674f4:	eb6d7353 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         674f8:	e3300000 	teq	r0, #0	; 0x0
         674fc:	0a000031 	beq	675c8 <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x188>
         67500:	e24dd00c 	sub	sp, sp, #12	; 0xc
         67504:	eb6d6b0d 	bl	1bc2140 <$AllocateFrame(void)>
         67508:	eb6d6b0f 	bl	1bc214c <$AllocateRefHandle(long)>
         6750c:	e58d0008 	str	r0, [sp, #8]	; fField8
         67510:	e59d006c 	ldr	r0, [sp, #108]
         67514:	eb6d7759 	bl	1bc5280 <$Intern(char *)>
         67518:	eb6d6b0b 	bl	1bc214c <$AllocateRefHandle(long)>
         6751c:	e58d0000 	str	r0, [sp]
         67520:	e1a0200d 	mov	r2, sp
         67524:	e59f1094 	ldr	r1, [pc, #94]	; 675c0 <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x180>
         67528:	e28d0008 	add	r0, sp, #8	; 0x8
         6752c:	eb6d7b8d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         67530:	e59d0000 	ldr	r0, [sp]
         67534:	eb6d6f20 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         67538:	e59d0070 	ldr	r0, [sp, #112]	; fField112
         6753c:	e1a00100 	mov	r0, r0, lsl #2
         67540:	eb6d6b01 	bl	1bc214c <$AllocateRefHandle(long)>
         67544:	e58d0004 	str	r0, [sp, #4]	; fField4
         67548:	e28d2004 	add	r2, sp, #4	; 0x4
         6754c:	e59f1070 	ldr	r1, [pc, #70]	; 675c4 <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x184>
         67550:	e28d0008 	add	r0, sp, #8	; 0x8
         67554:	eb6d7b83 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         67558:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         6755c:	eb6d6f16 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         67560:	e24dd004 	sub	sp, sp, #4	; 0x4
         67564:	e3a00001 	mov	r0, #1	; 0x1
         67568:	eb68d20b 	bl	1a9bd9c <$MakeArray(long)>
         6756c:	eb6d6af6 	bl	1bc214c <$AllocateRefHandle(long)>
         67570:	e58d0000 	str	r0, [sp]
         67574:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         67578:	e1a01008 	mov	r1, r8
         6757c:	e5902000 	ldr	r2, [r0]
         67580:	e59d0000 	ldr	r0, [sp]
         67584:	e5900000 	ldr	r0, [r0]
         67588:	eb6d7b72 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         6758c:	e1a00004 	mov	r0, r4
         67590:	e1a0200d 	mov	r2, sp
         67594:	e59f1020 	ldr	r1, [pc, #20]	; 675bc <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x17c>	; fField20
         67598:	eb6d6f0d 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
         6759c:	e59d0000 	ldr	r0, [sp]
         675a0:	eb6d6f05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         675a4:	e28dd004 	add	sp, sp, #4	; 0x4
         675a8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         675ac:	eb6d6f02 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         675b0:	e28dd00c 	add	sp, sp, #12	; 0xc
         675b4:	ea000008 	b	675dc <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x19c>
         675b8:	003712a4 	eoreqs	r1, r7, r4, lsr #5
         675bc:	00682ce0 	rsbeq	r2, r8, r0, ror #25
         675c0:	006839a8 	rsbeq	r3, r8, r8, lsr #19
         675c4:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         675c8:	e28d0060 	add	r0, sp, #96	; 0x60
         675cc:	eb6e30f0 	bl	1bf3994 <$ExceptionNotify(Exception *)>
         675d0:	ea000001 	b	675dc <TScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x19c>
         675d4:	e1a0000d 	mov	r0, sp
         675d8:	eb6deadd 	bl	1be2154 <$NextHandler>
         675dc:	e1a0000d 	mov	r0, sp
         675e0:	eb6de6b4 	bl	1be10b8 <$ExitHandler>
         675e4:	e28dd06c 	add	sp, sp, #108	; 0x6c
         675e8:	e1a00009 	mov	r0, r9
         675ec:	eb6e206e 	bl	1bef7ac <$SetPort(GrafPort *)>
         675f0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoSetOptions(RefVar const &)
 * Address: 000675f4
 */
TScriptEndpointClient::DoSetOptions(RefVar const &) {
    /*
         675f4:	e1a0c00d 	mov	ip, sp
         675f8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         675fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         67600:	e1a04000 	mov	r4, r0
         67604:	e1a05001 	mov	r5, r1
         67608:	e24dd018 	sub	sp, sp, #24	; 0x18
         6760c:	e1a0000d 	mov	r0, sp
         67610:	eb6d3933 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         67614:	e1a0000d 	mov	r0, sp
         67618:	eb6d4597 	bl	1bb8c7c <TOptionArray::$Init(void)>
         6761c:	e1b06000 	movs	r6, r0
         67620:	1a000004 	bne	67638 <TScriptEndpointClient::DoSetOptions(RefVar const &)+0x44>
         67624:	e1a0200d 	mov	r2, sp
         67628:	e1a01005 	mov	r1, r5
         6762c:	e1a00004 	mov	r0, r4
         67630:	eb689c3c 	bl	1a8e728 <TScriptEndpointClient::$ConvertToOptionArray(RefVar const &, TOptionArray *)>
         67634:	e1a06000 	mov	r6, r0
         67638:	e3360000 	teq	r6, #0	; 0x0
         6763c:	1a000005 	bne	67658 <TScriptEndpointClient::DoSetOptions(RefVar const &)+0x64>
         67640:	e3a03000 	mov	r3, #0	; 0x0
         67644:	e1a0200d 	mov	r2, sp
         67648:	e3a01c05 	mov	r1, #1280	; 0x500
         6764c:	e5940014 	ldr	r0, [r4, #20]	; fField20
         67650:	eb6d49a0 	bl	1bb9cd8 <TEndpoint::$OptMgmt(unsigned long, TOptionArray *, unsigned long)>
         67654:	e1a06000 	mov	r6, r0
         67658:	e3360000 	teq	r6, #0	; 0x0
         6765c:	05940014 	ldreq	r0, [r4, #20]	; fField20
         67660:	05d00020 	ldreqb	r0, [r0, #32]
         67664:	03300000 	teqeq	r0, #0	; 0x0
         67668:	01a00004 	moveq	r0, r4
         6766c:	0b68fb2f 	bleq	1aa6330 <TScriptEndpointClient::$Yield(void)>
         67670:	e1a0000d 	mov	r0, sp
         67674:	e3a01000 	mov	r1, #0	; 0x0
         67678:	eb6d3d2b 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         6767c:	e1a00006 	mov	r0, r6
         67680:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoGetOptions(RefVar const &)
 * Address: 00067684
 */
TScriptEndpointClient::DoGetOptions(RefVar const &) {
    /*
         67684:	e1a0c00d 	mov	ip, sp
         67688:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6768c:	e24cb004 	sub	fp, ip, #4	; 0x4
         67690:	e1a04000 	mov	r4, r0
         67694:	e1a05001 	mov	r5, r1
         67698:	e24dd018 	sub	sp, sp, #24	; 0x18
         6769c:	e1a0000d 	mov	r0, sp
         676a0:	eb6d390f 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         676a4:	e3a00002 	mov	r0, #2	; 0x2
         676a8:	eb6d6aa7 	bl	1bc214c <$AllocateRefHandle(long)>
         676ac:	e1a06000 	mov	r6, r0
         676b0:	e1a0000d 	mov	r0, sp
         676b4:	eb6d4570 	bl	1bb8c7c <TOptionArray::$Init(void)>
         676b8:	e3300000 	teq	r0, #0	; 0x0
         676bc:	1a000003 	bne	676d0 <TScriptEndpointClient::DoGetOptions(RefVar const &)+0x4c>
         676c0:	e1a0200d 	mov	r2, sp
         676c4:	e1a01005 	mov	r1, r5
         676c8:	e1a00004 	mov	r0, r4
         676cc:	eb689c15 	bl	1a8e728 <TScriptEndpointClient::$ConvertToOptionArray(RefVar const &, TOptionArray *)>
         676d0:	e3a03000 	mov	r3, #0	; 0x0
         676d4:	e3300000 	teq	r0, #0	; 0x0
         676d8:	1a000003 	bne	676ec <TScriptEndpointClient::DoGetOptions(RefVar const &)+0x68>
         676dc:	e1a0200d 	mov	r2, sp
         676e0:	e3a01c05 	mov	r1, #1280	; 0x500
         676e4:	e5940014 	ldr	r0, [r4, #20]	; fField20
         676e8:	eb6d497a 	bl	1bb9cd8 <TEndpoint::$OptMgmt(unsigned long, TOptionArray *, unsigned long)>
         676ec:	e3300000 	teq	r0, #0	; 0x0
         676f0:	1a000008 	bne	67718 <TScriptEndpointClient::DoGetOptions(RefVar const &)+0x94>
         676f4:	e5940014 	ldr	r0, [r4, #20]	; fField20
         676f8:	e5d00020 	ldrb	r0, [r0, #32]
         676fc:	e3300000 	teq	r0, #0	; 0x0
         67700:	01a00004 	moveq	r0, r4
         67704:	0b68fb09 	bleq	1aa6330 <TScriptEndpointClient::$Yield(void)>
         67708:	e1a0100d 	mov	r1, sp
         6770c:	e1a00004 	mov	r0, r4
         67710:	eb689bff 	bl	1a8e714 <TScriptEndpointClient::$ConvertFromOptionArray(TOptionArray *)>
         67714:	e5860000 	str	r0, [r6]
         67718:	e5964000 	ldr	r4, [r6]
         6771c:	e1a00006 	mov	r0, r6
         67720:	eb6d6ea5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         67724:	e1a0000d 	mov	r0, sp
         67728:	e3a01000 	mov	r1, #0	; 0x0
         6772c:	eb6d3cfe 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         67730:	e1a00004 	mov	r0, r4
         67734:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoGetOption(RefVar const &)
 * Address: 00067738
 */
TScriptEndpointClient::DoGetOption(RefVar const &) {
    /*
         67738:	e3a00002 	mov	r0, #2	; 0x2
         6773c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TScriptEndpointClient::ConvertFromOptionArray(TOptionArray *)
 * Address: 00067740
 */
TScriptEndpointClient::ConvertFromOptionArray(TOptionArray *) {
    /*
         67740:	e1a0c00d 	mov	ip, sp
         67744:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         67748:	e24cb004 	sub	fp, ip, #4	; 0x4
         6774c:	e1a04000 	mov	r4, r0
         67750:	e1a06001 	mov	r6, r1
         67754:	e3a00002 	mov	r0, #2	; 0x2
         67758:	eb6d6a7b 	bl	1bc214c <$AllocateRefHandle(long)>
         6775c:	e1a05000 	mov	r5, r0
         67760:	e3360000 	teq	r6, #0	; 0x0
         67764:	0a000026 	beq	67804 <TScriptEndpointClient::ConvertFromOptionArray(TOptionArray *)+0xc4>
         67768:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         6776c:	e1a01006 	mov	r1, r6
         67770:	e1a0000d 	mov	r0, sp
         67774:	eb6d38df 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         67778:	e5960000 	ldr	r0, [r6]
         6777c:	eb68d186 	bl	1a9bd9c <$MakeArray(long)>
         67780:	e5850000 	str	r0, [r5]
         67784:	e1a0000d 	mov	r0, sp
         67788:	eb6d4523 	bl	1bb8c1c <TOptionIterator::$FirstOption(void)>
         6778c:	e1a06000 	mov	r6, r0
         67790:	e1a0000d 	mov	r0, sp
         67794:	eb6d4949 	bl	1bb9cc0 <TOptionIterator::$More(void)>
         67798:	e3300000 	teq	r0, #0	; 0x0
         6779c:	0a000014 	beq	677f4 <TScriptEndpointClient::ConvertFromOptionArray(TOptionArray *)+0xb4>
         677a0:	e1a0000d 	mov	r0, sp
         677a4:	eb6d410d 	bl	1bb7be0 <TOptionIterator::$CurrentIndex(void)>
         677a8:	e1a07000 	mov	r7, r0
         677ac:	e1a01006 	mov	r1, r6
         677b0:	e1a00004 	mov	r0, r4
         677b4:	eb689bd5 	bl	1a8e710 <TScriptEndpointClient::$ConvertFromOption(TOption *)>
         677b8:	eb6d6a63 	bl	1bc214c <$AllocateRefHandle(long)>
         677bc:	e1a06000 	mov	r6, r0
         677c0:	e1a01007 	mov	r1, r7
         677c4:	e5902000 	ldr	r2, [r0]
         677c8:	e5950000 	ldr	r0, [r5]
         677cc:	eb6d7ae1 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         677d0:	e1a00006 	mov	r0, r6
         677d4:	eb6d6e78 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         677d8:	e1a0000d 	mov	r0, sp
         677dc:	eb6d493a 	bl	1bb9ccc <TOptionIterator::$NextOption(void)>
         677e0:	e1a06000 	mov	r6, r0
         677e4:	e1a0000d 	mov	r0, sp
         677e8:	eb6d4934 	bl	1bb9cc0 <TOptionIterator::$More(void)>
         677ec:	e3300000 	teq	r0, #0	; 0x0
         677f0:	1affffea 	bne	677a0 <TScriptEndpointClient::ConvertFromOptionArray(TOptionArray *)+0x60>
         677f4:	e1a0000d 	mov	r0, sp
         677f8:	e3a01000 	mov	r1, #0	; 0x0
         677fc:	eb6d3cce 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         67800:	e28dd01c 	add	sp, sp, #28	; 0x1c
         67804:	e5954000 	ldr	r4, [r5]
         67808:	e1a00005 	mov	r0, r5
         6780c:	eb6d6e6a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         67810:	e1a00004 	mov	r0, r4
         67814:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)
 * Address: 00067818
 */
TScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *) {
    /*
         67818:	e1a0c00d 	mov	ip, sp
         6781c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         67820:	e24cb004 	sub	fp, ip, #4	; 0x4
         67824:	e1a06000 	mov	r6, r0
         67828:	e1a04001 	mov	r4, r1
         6782c:	e1a05002 	mov	r5, r2
         67830:	e3a07000 	mov	r7, #0	; 0x0
         67834:	e1a00001 	mov	r0, r1
         67838:	eb6e3053 	bl	1bf398c <$IsArray(RefVar const &)>
         6783c:	e3300000 	teq	r0, #0	; 0x0
         67840:	0a00001b 	beq	678b4 <TScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0x9c>
         67844:	e5940000 	ldr	r0, [r4]
         67848:	e5900000 	ldr	r0, [r0]
         6784c:	eb6d7696 	bl	1bc52ac <$Length(long)>
         67850:	e1a09000 	mov	r9, r0
         67854:	e3a08000 	mov	r8, #0	; 0x0
         67858:	e3500000 	cmp	r0, #0	; 0x0
         6785c:	9a000020 	bls	678e4 <TScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0xcc>
         67860:	e24dd004 	sub	sp, sp, #4	; 0x4
         67864:	e1a01008 	mov	r1, r8
         67868:	e5940000 	ldr	r0, [r4]
         6786c:	e5900000 	ldr	r0, [r0]
         67870:	eb6d7277 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         67874:	eb6d6a34 	bl	1bc214c <$AllocateRefHandle(long)>
         67878:	e58d0000 	str	r0, [sp]
         6787c:	e1a0100d 	mov	r1, sp
         67880:	e1a02005 	mov	r2, r5
         67884:	e1a00006 	mov	r0, r6
         67888:	eb689ba6 	bl	1a8e728 <TScriptEndpointClient::$ConvertToOptionArray(RefVar const &, TOptionArray *)>
         6788c:	e1a07000 	mov	r7, r0
         67890:	e59d0000 	ldr	r0, [sp]
         67894:	eb6d6e48 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         67898:	e3370000 	teq	r7, #0	; 0x0
         6789c:	e28dd004 	add	sp, sp, #4	; 0x4
         678a0:	1a00000f 	bne	678e4 <TScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0xcc>
         678a4:	e2888001 	add	r8, r8, #1	; 0x1
         678a8:	e1580009 	cmp	r8, r9
         678ac:	3affffeb 	bcc	67860 <TScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0x48>
         678b0:	ea00000b 	b	678e4 <TScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0xcc>
         678b4:	e1a01004 	mov	r1, r4
         678b8:	e1a00006 	mov	r0, r6
         678bc:	eb689b98 	bl	1a8e724 <TScriptEndpointClient::$ConvertToOption(RefVar const &)>
         678c0:	e1b04000 	movs	r4, r0
         678c4:	0a000006 	beq	678e4 <TScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0xcc>
         678c8:	e1a02004 	mov	r2, r4
         678cc:	e5951000 	ldr	r1, [r5]
         678d0:	e1a00005 	mov	r0, r5
         678d4:	eb6d48f2 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         678d8:	e1a07000 	mov	r7, r0
         678dc:	e1a00004 	mov	r0, r4
         678e0:	eb6d977e 	bl	1bcd6e0 <$__dl(void *)>
         678e4:	e1a00007 	mov	r0, r7
         678e8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::ConvertToAddressParms(RefVar const &)
 * Address: 000678ec
 */
TScriptEndpointClient::ConvertToAddressParms(RefVar const &) {
    /*
         678ec:	e1a0c00d 	mov	ip, sp
         678f0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         678f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         678f8:	e1a00001 	mov	r0, r1
         678fc:	e3a05000 	mov	r5, #0	; 0x0
         67900:	e59f1108 	ldr	r1, [pc, #108]	; 67a10 <TScriptEndpointClient::ConvertToAddressParms(RefVar const &)+0x124>
         67904:	e5911000 	ldr	r1, [r1]
         67908:	e5911000 	ldr	r1, [r1]
         6790c:	e5900000 	ldr	r0, [r0]
         67910:	e5900000 	ldr	r0, [r0]
         67914:	eb6d7251 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67918:	eb6d6a0b 	bl	1bc214c <$AllocateRefHandle(long)>
         6791c:	e1a07000 	mov	r7, r0
         67920:	e5900000 	ldr	r0, [r0]
         67924:	e3300002 	teq	r0, #2	; 0x2
         67928:	0a00005c 	beq	67aa0 <TScriptEndpointClient::ConvertToAddressParms(RefVar const &)+0x1b4>
         6792c:	e24dd004 	sub	sp, sp, #4	; 0x4
         67930:	e59f10dc 	ldr	r1, [pc, #dc]	; 67a14 <TScriptEndpointClient::ConvertToAddressParms(RefVar const &)+0x128>
         67934:	e5911000 	ldr	r1, [r1]
         67938:	e5911000 	ldr	r1, [r1]
         6793c:	eb6d7247 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67940:	eb6d6a01 	bl	1bc214c <$AllocateRefHandle(long)>
         67944:	e1a08000 	mov	r8, r0
         67948:	e59f00c8 	ldr	r0, [pc, #c8]	; 67a18 <TScriptEndpointClient::ConvertToAddressParms(RefVar const &)+0x12c>
         6794c:	e5900000 	ldr	r0, [r0]
         67950:	e5901000 	ldr	r1, [r0]
         67954:	e5970000 	ldr	r0, [r7]
         67958:	eb6d7240 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         6795c:	eb6d69fa 	bl	1bc214c <$AllocateRefHandle(long)>
         67960:	e58d0000 	str	r0, [sp]
         67964:	e5980000 	ldr	r0, [r8]
         67968:	e1a01000 	mov	r1, r0
         6796c:	e2100003 	ands	r0, r0, #3	; 0x3
         67970:	1a000045 	bne	67a8c <TScriptEndpointClient::ConvertToAddressParms(RefVar const &)+0x1a0>
         67974:	e59d2000 	ldr	r2, [sp]
         67978:	e5922000 	ldr	r2, [r2]
         6797c:	e3320002 	teq	r2, #2	; 0x2
         67980:	0a000041 	beq	67a8c <TScriptEndpointClient::ConvertToAddressParms(RefVar const &)+0x1a0>
         67984:	e3300000 	teq	r0, #0	; 0x0
         67988:	01a00141 	moveq	r0, r1, asr #2
         6798c:	0a000001 	beq	67998 <TScriptEndpointClient::ConvertToAddressParms(RefVar const &)+0xac>
         67990:	e1a00001 	mov	r0, r1
         67994:	eb6d69e0 	bl	1bc211c <$_RINTError(long)>
         67998:	e1a09000 	mov	r9, r0
         6799c:	e1a0000d 	mov	r0, sp
         679a0:	eb6d6df7 	bl	1bc3184 <$GetCString(RefVar const &)>
         679a4:	eb6e1b6d 	bl	1bee760 <$Ustrlen>
         679a8:	e1a06000 	mov	r6, r0
         679ac:	e59f4068 	ldr	r4, [pc, #68]	; 67a1c <TScriptEndpointClient::ConvertToAddressParms(RefVar const &)+0x130>
         679b0:	e3390003 	teq	r9, #3	; 0x3
         679b4:	1a000019 	bne	67a20 <TScriptEndpointClient::ConvertToAddressParms(RefVar const &)+0x134>
         679b8:	e2860015 	add	r0, r6, #21	; 0x15
         679bc:	eb6de9e0 	bl	1be2144 <$NewPtrClear>
         679c0:	e1a05000 	mov	r5, r0
         679c4:	e1a01004 	mov	r1, r4
         679c8:	eb6d4cd6 	bl	1bbad28 <TOption::$SetAsAddress(unsigned long)>
         679cc:	e5950008 	ldr	r0, [r5, #8]	; fField8
         679d0:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         679d4:	e3800c01 	orr	r0, r0, #256	; 0x100
         679d8:	e5850008 	str	r0, [r5, #8]	; fField8
         679dc:	e2860008 	add	r0, r6, #8	; 0x8
         679e0:	e5850004 	str	r0, [r5, #4]	; fField4
         679e4:	e3a00003 	mov	r0, #3	; 0x3
         679e8:	e285500c 	add	r5, r5, #12	; 0xc
         679ec:	e8850041 	stmia	r5, {r0, r6}
         679f0:	e245500c 	sub	r5, r5, #12	; 0xc
         679f4:	e1a0000d 	mov	r0, sp
         679f8:	eb6d6de1 	bl	1bc3184 <$GetCString(RefVar const &)>
         679fc:	e2851014 	add	r1, r5, #20	; 0x14
         67a00:	e1a03006 	mov	r3, r6
         67a04:	e3a02001 	mov	r2, #1	; 0x1
         67a08:	eb6dfe5c 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         67a0c:	ea00001e 	b	67a8c <TScriptEndpointClient::ConvertToAddressParms(RefVar const &)+0x1a0>
         67a10:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         67a14:	00681dc0 	rsbeq	r1, r8, r0, asr #27
         67a18:	00681db8 	streqh	r1, [r8], -#216
         67a1c:	726f7574 	rsbvc	r7, pc, #486539264	; 0x1d000000
         67a20:	e3390001 	teq	r9, #1	; 0x1
         67a24:	1a000018 	bne	67a8c <TScriptEndpointClient::ConvertToAddressParms(RefVar const &)+0x1a0>
         67a28:	e3a00002 	mov	r0, #2	; 0x2
         67a2c:	e0806086 	add	r6, r0, r6, lsl #1
         67a30:	e286001c 	add	r0, r6, #28	; 0x1c
         67a34:	eb6de9c2 	bl	1be2144 <$NewPtrClear>
         67a38:	e1a05000 	mov	r5, r0
         67a3c:	e1a01004 	mov	r1, r4
         67a40:	eb6d4cb8 	bl	1bbad28 <TOption::$SetAsAddress(unsigned long)>
         67a44:	e5950008 	ldr	r0, [r5, #8]	; fField8
         67a48:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         67a4c:	e3800c01 	orr	r0, r0, #256	; 0x100
         67a50:	e5850008 	str	r0, [r5, #8]	; fField8
         67a54:	e2860010 	add	r0, r6, #16	; 0x10
         67a58:	e5850004 	str	r0, [r5, #4]	; fField4
         67a5c:	e3a00001 	mov	r0, #1	; 0x1
         67a60:	e585000c 	str	r0, [r5, #12]	; fField12
         67a64:	e5850010 	str	r0, [r5, #16]	; fField16
         67a68:	e59f0040 	ldr	r0, [pc, #40]	; 67ab0 <TScriptEndpointClient::ConvertToAddressParms(RefVar const &)+0x1c4>	; fField40
         67a6c:	e2855014 	add	r5, r5, #20	; 0x14
         67a70:	e8850041 	stmia	r5, {r0, r6}
         67a74:	e2455014 	sub	r5, r5, #20	; 0x14
         67a78:	e1a0000d 	mov	r0, sp
         67a7c:	eb6d6dc0 	bl	1bc3184 <$GetCString(RefVar const &)>
         67a80:	e285101c 	add	r1, r5, #28	; 0x1c
         67a84:	e1a02006 	mov	r2, r6
         67a88:	eb6ddd31 	bl	1bdef54 <$BlockMove>
         67a8c:	e59d0000 	ldr	r0, [sp]
         67a90:	eb6d6dc9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         67a94:	e1a00008 	mov	r0, r8
         67a98:	eb6d6dc7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         67a9c:	e28dd004 	add	sp, sp, #4	; 0x4
         67aa0:	e1a00007 	mov	r0, r7
         67aa4:	eb6d6dc4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         67aa8:	e1a00005 	mov	r0, r5
         67aac:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         67ab0:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
    */
}

/**
 * Symbol: TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)
 * Address: 00067ab4
 */
TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &) {
    /*
         67ab4:	e1a0c00d 	mov	ip, sp
         67ab8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         67abc:	e24cb004 	sub	fp, ip, #4	; 0x4
         67ac0:	e1a04001 	mov	r4, r1
         67ac4:	e3a00000 	mov	r0, #0	; 0x0
         67ac8:	eb6d50c8 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
         67acc:	e1b05000 	movs	r5, r0
         67ad0:	15940000 	ldrne	r0, [r4]
         67ad4:	15900000 	ldrne	r0, [r0]
         67ad8:	13300002 	teqne	r0, #2	; 0x2
         67adc:	0a000057 	beq	67c40 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x18c>
         67ae0:	e59f1160 	ldr	r1, [pc, #160]	; 67c48 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x194>
         67ae4:	e5911000 	ldr	r1, [r1]
         67ae8:	e5911000 	ldr	r1, [r1]
         67aec:	eb6d71db 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67af0:	eb6d6995 	bl	1bc214c <$AllocateRefHandle(long)>
         67af4:	e1a06000 	mov	r6, r0
         67af8:	e5900000 	ldr	r0, [r0]
         67afc:	e2001003 	and	r1, r0, #3	; 0x3
         67b00:	e3510000 	cmp	r1, #0	; 0x0
         67b04:	1a000007 	bne	67b28 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x74>
         67b08:	01a00140 	moveq	r0, r0, asr #2
         67b0c:	0a000000 	beq	67b14 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x60>
         67b10:	eb6d6981 	bl	1bc211c <$_RINTError(long)>
         67b14:	e5951008 	ldr	r1, [r5, #8]	; fField8
         67b18:	e3c11cff 	bic	r1, r1, #65280	; 0xff00
         67b1c:	e2000cff 	and	r0, r0, #65280	; 0xff00
         67b20:	e1810000 	orr	r0, r1, r0
         67b24:	e5850008 	str	r0, [r5, #8]	; fField8
         67b28:	e59f011c 	ldr	r0, [pc, #11c]	; 67c4c <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x198>
         67b2c:	e5900000 	ldr	r0, [r0]
         67b30:	e5901000 	ldr	r1, [r0]
         67b34:	e5940000 	ldr	r0, [r4]
         67b38:	e5900000 	ldr	r0, [r0]
         67b3c:	eb6d71c7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67b40:	eb6d6981 	bl	1bc214c <$AllocateRefHandle(long)>
         67b44:	e1a04000 	mov	r4, r0
         67b48:	e5900000 	ldr	r0, [r0]
         67b4c:	e3300002 	teq	r0, #2	; 0x2
         67b50:	0a000036 	beq	67c30 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x17c>
         67b54:	e59f10f4 	ldr	r1, [pc, #f4]	; 67c50 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x19c>
         67b58:	e5911000 	ldr	r1, [r1]
         67b5c:	e5911000 	ldr	r1, [r1]
         67b60:	eb6d71be 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67b64:	e5860000 	str	r0, [r6]
         67b68:	e1a01000 	mov	r1, r0
         67b6c:	e2000003 	and	r0, r0, #3	; 0x3
         67b70:	e3500000 	cmp	r0, #0	; 0x0
         67b74:	1a000004 	bne	67b8c <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0xd8>
         67b78:	e1a00001 	mov	r0, r1
         67b7c:	01a00140 	moveq	r0, r0, asr #2
         67b80:	0a000000 	beq	67b88 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0xd4>
         67b84:	eb6d6964 	bl	1bc211c <$_RINTError(long)>
         67b88:	e5850018 	str	r0, [r5, #24]	; fField24
         67b8c:	e59f00c0 	ldr	r0, [pc, #c0]	; 67c54 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x1a0>
         67b90:	e5900000 	ldr	r0, [r0]
         67b94:	e5901000 	ldr	r1, [r0]
         67b98:	e5940000 	ldr	r0, [r4]
         67b9c:	eb6d71af 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67ba0:	e5860000 	str	r0, [r6]
         67ba4:	e2001003 	and	r1, r0, #3	; 0x3
         67ba8:	e3510000 	cmp	r1, #0	; 0x0
         67bac:	1a000003 	bne	67bc0 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x10c>
         67bb0:	01a00140 	moveq	r0, r0, asr #2
         67bb4:	0a000000 	beq	67bbc <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x108>
         67bb8:	eb6d6957 	bl	1bc211c <$_RINTError(long)>
         67bbc:	e5850010 	str	r0, [r5, #16]	; fField16
         67bc0:	e59f0090 	ldr	r0, [pc, #90]	; 67c58 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x1a4>
         67bc4:	e5900000 	ldr	r0, [r0]
         67bc8:	e5901000 	ldr	r1, [r0]
         67bcc:	e5940000 	ldr	r0, [r4]
         67bd0:	eb6d71a2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67bd4:	e5860000 	str	r0, [r6]
         67bd8:	e2001003 	and	r1, r0, #3	; 0x3
         67bdc:	e3510000 	cmp	r1, #0	; 0x0
         67be0:	1a000003 	bne	67bf4 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x140>
         67be4:	01a00140 	moveq	r0, r0, asr #2
         67be8:	0a000000 	beq	67bf0 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x13c>
         67bec:	eb6d694a 	bl	1bc211c <$_RINTError(long)>
         67bf0:	e5850014 	str	r0, [r5, #20]	; fField20
         67bf4:	e59f0060 	ldr	r0, [pc, #60]	; 67c5c <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x1a8>
         67bf8:	e5900000 	ldr	r0, [r0]
         67bfc:	e5901000 	ldr	r1, [r0]
         67c00:	e5940000 	ldr	r0, [r4]
         67c04:	eb6d7195 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67c08:	e5860000 	str	r0, [r6]
         67c0c:	e1a01000 	mov	r1, r0
         67c10:	e2000003 	and	r0, r0, #3	; 0x3
         67c14:	e3500000 	cmp	r0, #0	; 0x0
         67c18:	1a000004 	bne	67c30 <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x17c>
         67c1c:	e1a00001 	mov	r0, r1
         67c20:	01a00140 	moveq	r0, r0, asr #2
         67c24:	0a000000 	beq	67c2c <TScriptEndpointClient::ConvertToSerialIOParms(RefVar const &)+0x178>
         67c28:	eb6d693b 	bl	1bc211c <$_RINTError(long)>
         67c2c:	e585000c 	str	r0, [r5, #12]	; fField12
         67c30:	e1a00004 	mov	r0, r4
         67c34:	eb6d6d60 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         67c38:	e1a00006 	mov	r0, r6
         67c3c:	eb6d6d5e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         67c40:	e1a00005 	mov	r0, r5
         67c44:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         67c48:	00683b58 	rsbeq	r3, r8, r8, asr fp
         67c4c:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         67c50:	006821c8 	rsbeq	r2, r8, r8, asr #3
         67c54:	00683ce0 	rsbeq	r3, r8, r0, ror #25
         67c58:	006827a8 	rsbeq	r2, r8, r8, lsr #15
         67c5c:	00684858 	rsbeq	r4, r8, r8, asr r8
    */
}

/**
 * Symbol: TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)
 * Address: 00067c60
 */
TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char) {
    /*
         67c60:	e1a0c00d 	mov	ip, sp
         67c64:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         67c68:	e24cb004 	sub	fp, ip, #4	; 0x4
         67c6c:	e1a04001 	mov	r4, r1
         67c70:	e31200ff 	tst	r2, #255	; 0xff
         67c74:	e3a00000 	mov	r0, #0	; 0x0
         67c78:	0a000001 	beq	67c84 <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x24>
         67c7c:	eb6d546e 	bl	1bbce3c <TCMOInputFlowControlParms::$__ct(void)>
         67c80:	ea000000 	b	67c88 <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x28>
         67c84:	eb6d546d 	bl	1bbce40 <TCMOOutputFlowControlParms::$__ct(void)>
         67c88:	e1b05000 	movs	r5, r0
         67c8c:	15940000 	ldrne	r0, [r4]
         67c90:	15900000 	ldrne	r0, [r0]
         67c94:	13300002 	teqne	r0, #2	; 0x2
         67c98:	0a00004b 	beq	67dcc <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x16c>
         67c9c:	e59f1130 	ldr	r1, [pc, #130]	; 67dd4 <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x174>
         67ca0:	e5911000 	ldr	r1, [r1]
         67ca4:	e5911000 	ldr	r1, [r1]
         67ca8:	eb6d716c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67cac:	eb6d6926 	bl	1bc214c <$AllocateRefHandle(long)>
         67cb0:	e1a06000 	mov	r6, r0
         67cb4:	e5900000 	ldr	r0, [r0]
         67cb8:	e2001003 	and	r1, r0, #3	; 0x3
         67cbc:	e3510000 	cmp	r1, #0	; 0x0
         67cc0:	1a000007 	bne	67ce4 <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x84>
         67cc4:	01a00140 	moveq	r0, r0, asr #2
         67cc8:	0a000000 	beq	67cd0 <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x70>
         67ccc:	eb6d6912 	bl	1bc211c <$_RINTError(long)>
         67cd0:	e5951008 	ldr	r1, [r5, #8]	; fField8
         67cd4:	e3c11cff 	bic	r1, r1, #65280	; 0xff00
         67cd8:	e2000cff 	and	r0, r0, #65280	; 0xff00
         67cdc:	e1810000 	orr	r0, r1, r0
         67ce0:	e5850008 	str	r0, [r5, #8]	; fField8
         67ce4:	e59f00ec 	ldr	r0, [pc, #ec]	; 67dd8 <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x178>
         67ce8:	e5900000 	ldr	r0, [r0]
         67cec:	e5901000 	ldr	r1, [r0]
         67cf0:	e5940000 	ldr	r0, [r4]
         67cf4:	e5900000 	ldr	r0, [r0]
         67cf8:	eb6d7158 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67cfc:	eb6d6912 	bl	1bc214c <$AllocateRefHandle(long)>
         67d00:	e1a04000 	mov	r4, r0
         67d04:	e5900000 	ldr	r0, [r0]
         67d08:	e3300002 	teq	r0, #2	; 0x2
         67d0c:	0a00002a 	beq	67dbc <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x15c>
         67d10:	e59f10c4 	ldr	r1, [pc, #c4]	; 67ddc <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x17c>
         67d14:	e5911000 	ldr	r1, [r1]
         67d18:	e5911000 	ldr	r1, [r1]
         67d1c:	eb6d714f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67d20:	e5860000 	str	r0, [r6]
         67d24:	e2001003 	and	r1, r0, #3	; 0x3
         67d28:	e3510000 	cmp	r1, #0	; 0x0
         67d2c:	1a000003 	bne	67d40 <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0xe0>
         67d30:	01a00140 	moveq	r0, r0, asr #2
         67d34:	0a000000 	beq	67d3c <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0xdc>
         67d38:	eb6d68f7 	bl	1bc211c <$_RINTError(long)>
         67d3c:	e5c5000c 	strb	r0, [r5, #12]	; fField12
         67d40:	e59f0098 	ldr	r0, [pc, #98]	; 67de0 <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x180>
         67d44:	e5900000 	ldr	r0, [r0]
         67d48:	e5901000 	ldr	r1, [r0]
         67d4c:	e5940000 	ldr	r0, [r4]
         67d50:	eb6d7142 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67d54:	e5860000 	str	r0, [r6]
         67d58:	e2001003 	and	r1, r0, #3	; 0x3
         67d5c:	e3510000 	cmp	r1, #0	; 0x0
         67d60:	1a000003 	bne	67d74 <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x114>
         67d64:	01a00140 	moveq	r0, r0, asr #2
         67d68:	0a000000 	beq	67d70 <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x110>
         67d6c:	eb6d68ea 	bl	1bc211c <$_RINTError(long)>
         67d70:	e5c5000d 	strb	r0, [r5, #13]
         67d74:	e59f0068 	ldr	r0, [pc, #68]	; 67de4 <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x184>
         67d78:	e5900000 	ldr	r0, [r0]
         67d7c:	e5901000 	ldr	r1, [r0]
         67d80:	e5940000 	ldr	r0, [r4]
         67d84:	eb6d7135 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67d88:	e5860000 	str	r0, [r6]
         67d8c:	e2500002 	subs	r0, r0, #2	; 0x2
         67d90:	13a00001 	movne	r0, #1	; 0x1
         67d94:	e5c5000e 	strb	r0, [r5, #14]
         67d98:	e59f0048 	ldr	r0, [pc, #48]	; 67de8 <TScriptEndpointClient::ConvertToFlowControlParms(RefVar const &, unsigned char)+0x188>	; fField48
         67d9c:	e5900000 	ldr	r0, [r0]
         67da0:	e5901000 	ldr	r1, [r0]
         67da4:	e5940000 	ldr	r0, [r4]
         67da8:	eb6d712c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67dac:	e5860000 	str	r0, [r6]
         67db0:	e2500002 	subs	r0, r0, #2	; 0x2
         67db4:	13a00001 	movne	r0, #1	; 0x1
         67db8:	e5c5000f 	strb	r0, [r5, #15]
         67dbc:	e1a00004 	mov	r0, r4
         67dc0:	eb6d6cfd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         67dc4:	e1a00006 	mov	r0, r6
         67dc8:	eb6d6cfb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         67dcc:	e1a00005 	mov	r0, r5
         67dd0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         67dd4:	00683b58 	rsbeq	r3, r8, r8, asr fp
         67dd8:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         67ddc:	00685238 	rsbeq	r5, r8, r8, lsr r2
         67de0:	00685230 	rsbeq	r5, r8, r0, lsr r2
         67de4:	00684e60 	rsbeq	r4, r8, r0, ror #28
         67de8:	00684dd0 	ldreqd	r4, [r8], -#208
    */
}

/**
 * Symbol: TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)
 * Address: 00067ed0
 */
TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &) {
    /*
         67ed0:	e1a0c00d 	mov	ip, sp
         67ed4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         67ed8:	e24cb004 	sub	fp, ip, #4	; 0x4
         67edc:	e1a04001 	mov	r4, r1
         67ee0:	e3a00000 	mov	r0, #0	; 0x0
         67ee4:	eb6d4fba 	bl	1bbbdd4 <TCMOModemDialing::$__ct(void)>
         67ee8:	e1b05000 	movs	r5, r0
         67eec:	15940000 	ldrne	r0, [r4]
         67ef0:	15900000 	ldrne	r0, [r0]
         67ef4:	13300002 	teqne	r0, #2	; 0x2
         67ef8:	0a000092 	beq	68148 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x278>
         67efc:	e1a00005 	mov	r0, r5
         67f00:	eb68e882 	bl	1aa2110 <$SetDialingOptionsFromPrefs(TCMOModemDialing *)>
         67f04:	e59f0244 	ldr	r0, [pc, #244]	; 68150 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x280>
         67f08:	e5900000 	ldr	r0, [r0]
         67f0c:	e5901000 	ldr	r1, [r0]
         67f10:	e5940000 	ldr	r0, [r4]
         67f14:	e5900000 	ldr	r0, [r0]
         67f18:	eb6d70d0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67f1c:	eb6d688a 	bl	1bc214c <$AllocateRefHandle(long)>
         67f20:	e1a06000 	mov	r6, r0
         67f24:	e5900000 	ldr	r0, [r0]
         67f28:	e2001003 	and	r1, r0, #3	; 0x3
         67f2c:	e3510000 	cmp	r1, #0	; 0x0
         67f30:	1a000007 	bne	67f54 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x84>
         67f34:	01a00140 	moveq	r0, r0, asr #2
         67f38:	0a000000 	beq	67f40 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x70>
         67f3c:	eb6d6876 	bl	1bc211c <$_RINTError(long)>
         67f40:	e5951008 	ldr	r1, [r5, #8]	; fField8
         67f44:	e3c11cff 	bic	r1, r1, #65280	; 0xff00
         67f48:	e2000cff 	and	r0, r0, #65280	; 0xff00
         67f4c:	e1810000 	orr	r0, r1, r0
         67f50:	e5850008 	str	r0, [r5, #8]	; fField8
         67f54:	e59f01f8 	ldr	r0, [pc, #1f8]	; 68154 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x284>
         67f58:	e5900000 	ldr	r0, [r0]
         67f5c:	e5901000 	ldr	r1, [r0]
         67f60:	e5940000 	ldr	r0, [r4]
         67f64:	e5900000 	ldr	r0, [r0]
         67f68:	eb6d70bc 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67f6c:	eb6d6876 	bl	1bc214c <$AllocateRefHandle(long)>
         67f70:	e1a04000 	mov	r4, r0
         67f74:	e5900000 	ldr	r0, [r0]
         67f78:	e3300002 	teq	r0, #2	; 0x2
         67f7c:	0a00006d 	beq	68138 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x268>
         67f80:	e59f71d0 	ldr	r7, [pc, #1d0]	; 68158 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x288>
         67f84:	e5971000 	ldr	r1, [r7]
         67f88:	e5911000 	ldr	r1, [r1]
         67f8c:	eb6d70ad 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         67f90:	e3300000 	teq	r0, #0	; 0x0
         67f94:	0a000005 	beq	67fb0 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0xe0>
         67f98:	e5970000 	ldr	r0, [r7]
         67f9c:	e5901000 	ldr	r1, [r0]
         67fa0:	e5940000 	ldr	r0, [r4]
         67fa4:	eb6d70ad 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67fa8:	e5860000 	str	r0, [r6]
         67fac:	e5c5000c 	strb	r0, [r5, #12]	; fField12
         67fb0:	e59f71a4 	ldr	r7, [pc, #1a4]	; 6815c <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x28c>
         67fb4:	e5970000 	ldr	r0, [r7]
         67fb8:	e5901000 	ldr	r1, [r0]
         67fbc:	e5940000 	ldr	r0, [r4]
         67fc0:	eb6d70a0 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         67fc4:	e3300000 	teq	r0, #0	; 0x0
         67fc8:	0a000005 	beq	67fe4 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x114>
         67fcc:	e5970000 	ldr	r0, [r7]
         67fd0:	e5901000 	ldr	r1, [r0]
         67fd4:	e5940000 	ldr	r0, [r4]
         67fd8:	eb6d70a0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         67fdc:	e5860000 	str	r0, [r6]
         67fe0:	e5c5000d 	strb	r0, [r5, #13]
         67fe4:	e59f7174 	ldr	r7, [pc, #174]	; 68160 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x290>
         67fe8:	e5970000 	ldr	r0, [r7]
         67fec:	e5901000 	ldr	r1, [r0]
         67ff0:	e5940000 	ldr	r0, [r4]
         67ff4:	eb6d7093 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         67ff8:	e3300000 	teq	r0, #0	; 0x0
         67ffc:	0a000005 	beq	68018 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x148>
         68000:	e5970000 	ldr	r0, [r7]
         68004:	e5901000 	ldr	r1, [r0]
         68008:	e5940000 	ldr	r0, [r4]
         6800c:	eb6d7093 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         68010:	e5860000 	str	r0, [r6]
         68014:	e5c5000e 	strb	r0, [r5, #14]
         68018:	e59f7144 	ldr	r7, [pc, #144]	; 68164 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x294>	; fField144
         6801c:	e5970000 	ldr	r0, [r7]
         68020:	e5901000 	ldr	r1, [r0]
         68024:	e5940000 	ldr	r0, [r4]
         68028:	eb6d7086 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         6802c:	e3300000 	teq	r0, #0	; 0x0
         68030:	0a000005 	beq	6804c <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x17c>
         68034:	e5970000 	ldr	r0, [r7]
         68038:	e5901000 	ldr	r1, [r0]
         6803c:	e5940000 	ldr	r0, [r4]
         68040:	eb6d7086 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         68044:	e5860000 	str	r0, [r6]
         68048:	e5c5000f 	strb	r0, [r5, #15]
         6804c:	e59f7114 	ldr	r7, [pc, #114]	; 68168 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x298>
         68050:	e5970000 	ldr	r0, [r7]
         68054:	e5901000 	ldr	r1, [r0]
         68058:	e5940000 	ldr	r0, [r4]
         6805c:	eb6d7079 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         68060:	e3300000 	teq	r0, #0	; 0x0
         68064:	0a000005 	beq	68080 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x1b0>
         68068:	e5970000 	ldr	r0, [r7]
         6806c:	e5901000 	ldr	r1, [r0]
         68070:	e5940000 	ldr	r0, [r4]
         68074:	eb6d7079 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         68078:	e5860000 	str	r0, [r6]
         6807c:	e5c50010 	strb	r0, [r5, #16]	; fField16
         68080:	e59f00e4 	ldr	r0, [pc, #e4]	; 6816c <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x29c>
         68084:	e5900000 	ldr	r0, [r0]
         68088:	e5901000 	ldr	r1, [r0]
         6808c:	e5940000 	ldr	r0, [r4]
         68090:	eb6d7072 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         68094:	e5860000 	str	r0, [r6]
         68098:	e3100003 	tst	r0, #3	; 0x3
         6809c:	01a00140 	moveq	r0, r0, asr #2
         680a0:	05c50011 	streqb	r0, [r5, #17]
         680a4:	e59f00c4 	ldr	r0, [pc, #c4]	; 68170 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x2a0>
         680a8:	e5900000 	ldr	r0, [r0]
         680ac:	e5901000 	ldr	r1, [r0]
         680b0:	e5940000 	ldr	r0, [r4]
         680b4:	eb6d7069 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         680b8:	e5860000 	str	r0, [r6]
         680bc:	e1a01000 	mov	r1, r0
         680c0:	e3100003 	tst	r0, #3	; 0x3
         680c4:	01a00141 	moveq	r0, r1, asr #2
         680c8:	05c50012 	streqb	r0, [r5, #18]
         680cc:	e59f00a0 	ldr	r0, [pc, #a0]	; 68174 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x2a4>
         680d0:	e5900000 	ldr	r0, [r0]
         680d4:	e5901000 	ldr	r1, [r0]
         680d8:	e5940000 	ldr	r0, [r4]
         680dc:	eb6d705f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         680e0:	e5860000 	str	r0, [r6]
         680e4:	e3100003 	tst	r0, #3	; 0x3
         680e8:	01a00140 	moveq	r0, r0, asr #2
         680ec:	05c50013 	streqb	r0, [r5, #19]
         680f0:	e59f0080 	ldr	r0, [pc, #80]	; 68178 <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x2a8>
         680f4:	e5900000 	ldr	r0, [r0]
         680f8:	e5901000 	ldr	r1, [r0]
         680fc:	e5940000 	ldr	r0, [r4]
         68100:	eb6d7056 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         68104:	e5860000 	str	r0, [r6]
         68108:	e3100003 	tst	r0, #3	; 0x3
         6810c:	01a00140 	moveq	r0, r0, asr #2
         68110:	05c50014 	streqb	r0, [r5, #20]	; fField20
         68114:	e59f0060 	ldr	r0, [pc, #60]	; 6817c <TScriptEndpointClient::ConvertToModemDialingOption(RefVar const &)+0x2ac>
         68118:	e5900000 	ldr	r0, [r0]
         6811c:	e5901000 	ldr	r1, [r0]
         68120:	e5940000 	ldr	r0, [r4]
         68124:	eb6d704d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         68128:	e5860000 	str	r0, [r6]
         6812c:	e3100003 	tst	r0, #3	; 0x3
         68130:	01a00140 	moveq	r0, r0, asr #2
         68134:	05c50015 	streqb	r0, [r5, #21]
         68138:	e1a00004 	mov	r0, r4
         6813c:	eb6d6c1e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         68140:	e1a00006 	mov	r0, r6
         68144:	eb6d6c1c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         68148:	e1a00005 	mov	r0, r5
         6814c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         68150:	00683b58 	rsbeq	r3, r8, r8, asr fp
         68154:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         68158:	006847b0 	streqh	r4, [r8], -#112	; fField112
         6815c:	00682908 	rsbeq	r2, r8, r8, lsl #18
         68160:	00682900 	rsbeq	r2, r8, r0, lsl #18
         68164:	00682ae8 	rsbeq	r2, r8, r8, ror #21
         68168:	00683720 	rsbeq	r3, r8, r0, lsr #14
         6816c:	006847b8 	streqh	r4, [r8], -#120	; fField120
         68170:	00685148 	rsbeq	r5, r8, r8, asr #2
         68174:	00685140 	rsbeq	r5, r8, r0, asr #2
         68178:	00682510 	rsbeq	r2, r8, r0, lsl r5
         6817c:	00684380 	rsbeq	r4, r8, r0, lsl #7
    */
}

/**
 * Symbol: TScriptEndpointClient::ConvertToOption(RefVar const &)
 * Address: 00068180
 */
TScriptEndpointClient::ConvertToOption(RefVar const &) {
    /*
         68180:	e1a0c00d 	mov	ip, sp
         68184:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         68188:	e24cb004 	sub	fp, ip, #4	; 0x4
         6818c:	e1a05000 	mov	r5, r0
         68190:	e1a04001 	mov	r4, r1
         68194:	e1a00001 	mov	r0, r1
         68198:	eb6e2dfc 	bl	1bf3990 <$IsFrame(RefVar const &)>
         6819c:	e3a08000 	mov	r8, #0	; 0x0
         681a0:	e3300000 	teq	r0, #0	; 0x0
         681a4:	0a000123 	beq	68638 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x4b8>
         681a8:	e24dd004 	sub	sp, sp, #4	; 0x4
         681ac:	e59f0098 	ldr	r0, [pc, #98]	; 6824c <TScriptEndpointClient::ConvertToOption(RefVar const &)+0xcc>
         681b0:	e5900000 	ldr	r0, [r0]
         681b4:	e5901000 	ldr	r1, [r0]
         681b8:	e5940000 	ldr	r0, [r4]
         681bc:	e5900000 	ldr	r0, [r0]
         681c0:	eb6d7026 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         681c4:	eb6d67e0 	bl	1bc214c <$AllocateRefHandle(long)>
         681c8:	e58d0000 	str	r0, [sp]
         681cc:	e1a0000d 	mov	r0, sp
         681d0:	eb6d7431 	bl	1bc529c <$IsString(RefVar const &)>
         681d4:	e3300000 	teq	r0, #0	; 0x0
         681d8:	0a000113 	beq	6862c <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x4ac>
         681dc:	e24dd008 	sub	sp, sp, #8	; 0x8
         681e0:	e28d0008 	add	r0, sp, #8	; 0x8
         681e4:	eb6d6be6 	bl	1bc3184 <$GetCString(RefVar const &)>
         681e8:	e1a0100d 	mov	r1, sp
         681ec:	e3a03004 	mov	r3, #4	; 0x4
         681f0:	e3a02001 	mov	r2, #1	; 0x1
         681f4:	eb6dfc61 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         681f8:	e59d6000 	ldr	r6, [sp]
         681fc:	e59fa04c 	ldr	sl, [pc, #4c]	; 68250 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0xd0>	; fField4
         68200:	e59a0000 	ldr	r0, [sl]
         68204:	e5901000 	ldr	r1, [r0]
         68208:	e5940000 	ldr	r0, [r4]
         6820c:	e5900000 	ldr	r0, [r0]
         68210:	eb6d7012 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         68214:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         68218:	e5810000 	str	r0, [r1]
         6821c:	e59f1030 	ldr	r1, [pc, #30]	; 68254 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0xd4>
         68220:	e5911000 	ldr	r1, [r1]
         68224:	e5911000 	ldr	r1, [r1]
         68228:	eb6d7000 	bl	1bc4230 <$EQRef__FlT1>
         6822c:	e3300000 	teq	r0, #0	; 0x0
         68230:	0a000009 	beq	6825c <TScriptEndpointClient::ConvertToOption(RefVar const &)+0xdc>
         68234:	e59fc01c 	ldr	ip, [pc, #1c]	; 68258 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0xd8>
         68238:	e136000c 	teq	r6, ip
         6823c:	0a00002f 	beq	68300 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x180>
         68240:	e1a00006 	mov	r0, r6
         68244:	eb695b4c 	bl	1abef7c <$ConvertToServiceOption(unsigned long)>
         68248:	ea000029 	b	682f4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x174>
         6824c:	00683400 	rsbeq	r3, r8, r0, lsl #8
         68250:	00684cb0 	streqh	r4, [r8], -#192
         68254:	00684540 	rsbeq	r4, r8, r0, asr #10
         68258:	73696420 	cmnvc	r9, #536870912	; 0x20000000
         6825c:	e59fc014 	ldr	ip, [pc, #14]	; 68278 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0xf8>
         68260:	e136000c 	teq	r6, ip
         68264:	1a000004 	bne	6827c <TScriptEndpointClient::ConvertToOption(RefVar const &)+0xfc>
         68268:	e1a01004 	mov	r1, r4
         6826c:	e1a00005 	mov	r0, r5
         68270:	eb689928 	bl	1a8e718 <TScriptEndpointClient::$ConvertToAddressParms(RefVar const &)>
         68274:	ea00001e 	b	682f4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x174>
         68278:	726f7574 	rsbvc	r7, pc, #486539264	; 0x1d000000
         6827c:	e59fc014 	ldr	ip, [pc, #14]	; 68298 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x118>
         68280:	e136000c 	teq	r6, ip
         68284:	1a000004 	bne	6829c <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x11c>
         68288:	e1a01004 	mov	r1, r4
         6828c:	e1a00005 	mov	r0, r5
         68290:	eb689926 	bl	1a8e730 <TScriptEndpointClient::$ConvertToSerialIOParms(RefVar const &)>
         68294:	ea000016 	b	682f4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x174>
         68298:	73696f70 	cmnvc	r9, #448	; 0x1c0
         6829c:	e59fc030 	ldr	ip, [pc, #30]	; 682d4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x154>
         682a0:	e136000c 	teq	r6, ip
         682a4:	01a01004 	moveq	r1, r4
         682a8:	01a00005 	moveq	r0, r5
         682ac:	03a02001 	moveq	r2, #1	; 0x1
         682b0:	0a000005 	beq	682cc <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x14c>
         682b4:	e59fc01c 	ldr	ip, [pc, #1c]	; 682d8 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x158>
         682b8:	e136000c 	teq	r6, ip
         682bc:	1a000006 	bne	682dc <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x15c>
         682c0:	e1a01004 	mov	r1, r4
         682c4:	e1a00005 	mov	r0, r5
         682c8:	e3a02000 	mov	r2, #0	; 0x0
         682cc:	eb689912 	bl	1a8e71c <TScriptEndpointClient::$ConvertToFlowControlParms(RefVar const &, unsigned char)>
         682d0:	ea000007 	b	682f4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x174>
         682d4:	69666c63 	stmvsdb	r6!, {r0, r1, r5, r6, sl, fp, sp, lr}^
         682d8:	6f666c63 	swivs	0x00666c63
         682dc:	e59fc018 	ldr	ip, [pc, #18]	; 682fc <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x17c>
         682e0:	e136000c 	teq	r6, ip
         682e4:	1a000005 	bne	68300 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x180>
         682e8:	e1a01004 	mov	r1, r4
         682ec:	e1a00005 	mov	r0, r5
         682f0:	eb68990a 	bl	1a8e720 <TScriptEndpointClient::$ConvertToModemDialingOption(RefVar const &)>
         682f4:	e1a05000 	mov	r5, r0
         682f8:	ea0000c7 	b	6861c <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x49c>
         682fc:	6d646f20 	stcvsl	15, cr6, [r4, -#128]!
         68300:	e3a09c01 	mov	r9, #256	; 0x100
         68304:	e59f007c 	ldr	r0, [pc, #7c]	; 68388 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x208>
         68308:	e5900000 	ldr	r0, [r0]
         6830c:	e5901000 	ldr	r1, [r0]
         68310:	e5940000 	ldr	r0, [r4]
         68314:	e5900000 	ldr	r0, [r0]
         68318:	eb6d6fd0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         6831c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         68320:	e5810000 	str	r0, [r1]
         68324:	e2001003 	and	r1, r0, #3	; 0x3
         68328:	e3510000 	cmp	r1, #0	; 0x0
         6832c:	1a000003 	bne	68340 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x1c0>
         68330:	01a00140 	moveq	r0, r0, asr #2
         68334:	0a000000 	beq	6833c <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x1bc>
         68338:	eb6d6777 	bl	1bc211c <$_RINTError(long)>
         6833c:	e1a09000 	mov	r9, r0
         68340:	e24dd004 	sub	sp, sp, #4	; 0x4
         68344:	e3a07000 	mov	r7, #0	; 0x0
         68348:	e59f103c 	ldr	r1, [pc, #3c]	; 6838c <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x20c>
         6834c:	e1a00004 	mov	r0, r4
         68350:	e3a03000 	mov	r3, #0	; 0x0
         68354:	e3a02000 	mov	r2, #0	; 0x0
         68358:	eb6d6fc5 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         6835c:	eb6d677a 	bl	1bc214c <$AllocateRefHandle(long)>
         68360:	e58d0000 	str	r0, [sp]
         68364:	e1a0000d 	mov	r0, sp
         68368:	eb6d73cb 	bl	1bc529c <$IsString(RefVar const &)>
         6836c:	e3300000 	teq	r0, #0	; 0x0
         68370:	0a000006 	beq	68390 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x210>
         68374:	e1a0000d 	mov	r0, sp
         68378:	eb6d6b81 	bl	1bc3184 <$GetCString(RefVar const &)>
         6837c:	eb6e18f7 	bl	1bee760 <$Ustrlen>
         68380:	e2807001 	add	r7, r0, #1	; 0x1
         68384:	ea000010 	b	683cc <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x24c>
         68388:	00683b58 	rsbeq	r3, r8, r8, asr fp
         6838c:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         68390:	e59d0000 	ldr	r0, [sp]
         68394:	e5900000 	ldr	r0, [r0]
         68398:	e3100003 	tst	r0, #3	; 0x3
         6839c:	03a07004 	moveq	r7, #4	; 0x4
         683a0:	0a000009 	beq	683cc <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x24c>
         683a4:	e1a0000d 	mov	r0, sp
         683a8:	eb6e2d77 	bl	1bf398c <$IsArray(RefVar const &)>
         683ac:	e3300000 	teq	r0, #0	; 0x0
         683b0:	e59d0000 	ldr	r0, [sp]
         683b4:	e5900000 	ldr	r0, [r0]
         683b8:	1a000001 	bne	683c4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x244>
         683bc:	e3300002 	teq	r0, #2	; 0x2
         683c0:	0a000001 	beq	683cc <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x24c>
         683c4:	eb6d73b8 	bl	1bc52ac <$Length(long)>
         683c8:	e1a07000 	mov	r7, r0
         683cc:	e287000c 	add	r0, r7, #12	; 0xc
         683d0:	eb6de75b 	bl	1be2144 <$NewPtrClear>
         683d4:	e1b05000 	movs	r5, r0
         683d8:	1a000005 	bne	683f4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x274>
         683dc:	e59d0000 	ldr	r0, [sp]
         683e0:	eb6d6b75 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         683e4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         683e8:	eb6d6b73 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         683ec:	e1a00008 	mov	r0, r8
         683f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         683f4:	e5950008 	ldr	r0, [r5, #8]	; fField8
         683f8:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         683fc:	e2091cff 	and	r1, r9, #65280	; 0xff00
         68400:	e1800001 	orr	r0, r0, r1
         68404:	e5850008 	str	r0, [r5, #8]	; fField8
         68408:	e5857004 	str	r7, [r5, #4]	; fField4
         6840c:	e59a0000 	ldr	r0, [sl]
         68410:	e5901000 	ldr	r1, [r0]
         68414:	e5940000 	ldr	r0, [r4]
         68418:	e5900000 	ldr	r0, [r0]
         6841c:	eb6d6f8f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         68420:	e59d100c 	ldr	r1, [sp, #12]	; fField12
         68424:	e5810000 	str	r0, [r1]
         68428:	e51f11dc 	ldr	r1, [pc, #fffffe24]	; 68254 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0xd4>
         6842c:	e5911000 	ldr	r1, [r1]
         68430:	e5911000 	ldr	r1, [r1]
         68434:	eb6d6f7d 	bl	1bc4230 <$EQRef__FlT1>
         68438:	e3300000 	teq	r0, #0	; 0x0
         6843c:	0a000003 	beq	68450 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x2d0>
         68440:	e1a01006 	mov	r1, r6
         68444:	e1a00005 	mov	r0, r5
         68448:	eb6d4a39 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
         6844c:	ea000024 	b	684e4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x364>
         68450:	e59f0028 	ldr	r0, [pc, #28]	; 68480 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x300>
         68454:	e5900000 	ldr	r0, [r0]
         68458:	e5901000 	ldr	r1, [r0]
         6845c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         68460:	e5900000 	ldr	r0, [r0]
         68464:	eb6d6f71 	bl	1bc4230 <$EQRef__FlT1>
         68468:	e3300000 	teq	r0, #0	; 0x0
         6846c:	0a000004 	beq	68484 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x304>
         68470:	e1a01006 	mov	r1, r6
         68474:	e1a00005 	mov	r0, r5
         68478:	eb6d4a2c 	bl	1bbad30 <TOption::$SetAsOption(unsigned long)>
         6847c:	ea000018 	b	684e4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x364>
         68480:	00683b78 	rsbeq	r3, r8, r8, ror fp
         68484:	e59f0028 	ldr	r0, [pc, #28]	; 684b4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x334>
         68488:	e5900000 	ldr	r0, [r0]
         6848c:	e5901000 	ldr	r1, [r0]
         68490:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         68494:	e5900000 	ldr	r0, [r0]
         68498:	eb6d6f64 	bl	1bc4230 <$EQRef__FlT1>
         6849c:	e3300000 	teq	r0, #0	; 0x0
         684a0:	0a000004 	beq	684b8 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x338>
         684a4:	e1a01006 	mov	r1, r6
         684a8:	e1a00005 	mov	r0, r5
         684ac:	eb6d4a1e 	bl	1bbad2c <TOption::$SetAsConfig(unsigned long)>
         684b0:	ea00000b 	b	684e4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x364>
         684b4:	00682568 	rsbeq	r2, r8, r8, ror #10
         684b8:	e59f0050 	ldr	r0, [pc, #50]	; 68510 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x390>
         684bc:	e5900000 	ldr	r0, [r0]
         684c0:	e5901000 	ldr	r1, [r0]
         684c4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         684c8:	e5900000 	ldr	r0, [r0]
         684cc:	eb6d6f57 	bl	1bc4230 <$EQRef__FlT1>
         684d0:	e3300000 	teq	r0, #0	; 0x0
         684d4:	0a00000e 	beq	68514 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x394>
         684d8:	e1a01006 	mov	r1, r6
         684dc:	e1a00005 	mov	r0, r5
         684e0:	eb6d4a10 	bl	1bbad28 <TOption::$SetAsAddress(unsigned long)>
         684e4:	e1a0000d 	mov	r0, sp
         684e8:	eb6d736b 	bl	1bc529c <$IsString(RefVar const &)>
         684ec:	e3300000 	teq	r0, #0	; 0x0
         684f0:	0a00000a 	beq	68520 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x3a0>
         684f4:	e1a0000d 	mov	r0, sp
         684f8:	eb6d6b21 	bl	1bc3184 <$GetCString(RefVar const &)>
         684fc:	e285100c 	add	r1, r5, #12	; 0xc
         68500:	e1a03007 	mov	r3, r7
         68504:	e3a02001 	mov	r2, #1	; 0x1
         68508:	eb6dfb9c 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         6850c:	ea00003f 	b	68610 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x490>
         68510:	00681db0 	streqh	r1, [r8], -#208
         68514:	e1a00005 	mov	r0, r5
         68518:	eb6d9470 	bl	1bcd6e0 <$__dl(void *)>
         6851c:	eaffffae 	b	683dc <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x25c>
         68520:	e59d0000 	ldr	r0, [sp]
         68524:	e5900000 	ldr	r0, [r0]
         68528:	e2001003 	and	r1, r0, #3	; 0x3
         6852c:	e3510000 	cmp	r1, #0	; 0x0
         68530:	1a000004 	bne	68548 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x3c8>
         68534:	01a00140 	moveq	r0, r0, asr #2
         68538:	0a000000 	beq	68540 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x3c0>
         6853c:	eb6d66f6 	bl	1bc211c <$_RINTError(long)>
         68540:	e585000c 	str	r0, [r5, #12]	; fField12
         68544:	ea000031 	b	68610 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x490>
         68548:	e1a0000d 	mov	r0, sp
         6854c:	eb6e2d0e 	bl	1bf398c <$IsArray(RefVar const &)>
         68550:	e3300000 	teq	r0, #0	; 0x0
         68554:	0a00001d 	beq	685d0 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x450>
         68558:	e285800c 	add	r8, r5, #12	; 0xc
         6855c:	e59d0000 	ldr	r0, [sp]
         68560:	e5900000 	ldr	r0, [r0]
         68564:	eb6d7350 	bl	1bc52ac <$Length(long)>
         68568:	e1a07000 	mov	r7, r0
         6856c:	e3a04000 	mov	r4, #0	; 0x0
         68570:	e3500000 	cmp	r0, #0	; 0x0
         68574:	9a000025 	bls	68610 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x490>
         68578:	e1a01004 	mov	r1, r4
         6857c:	e59d0000 	ldr	r0, [sp]
         68580:	e5900000 	ldr	r0, [r0]
         68584:	eb6d6f32 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         68588:	eb6d66ef 	bl	1bc214c <$AllocateRefHandle(long)>
         6858c:	e1a06000 	mov	r6, r0
         68590:	e5900000 	ldr	r0, [r0]
         68594:	e2001003 	and	r1, r0, #3	; 0x3
         68598:	e3510000 	cmp	r1, #0	; 0x0
         6859c:	1a000003 	bne	685b0 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x430>
         685a0:	01a00140 	moveq	r0, r0, asr #2
         685a4:	0a000002 	beq	685b4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x434>
         685a8:	eb6d66db 	bl	1bc211c <$_RINTError(long)>
         685ac:	ea000000 	b	685b4 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x434>
         685b0:	e3a00000 	mov	r0, #0	; 0x0
         685b4:	e4c80001 	strb	r0, [r8], #1
         685b8:	e1a00006 	mov	r0, r6
         685bc:	eb6d6afe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         685c0:	e2844001 	add	r4, r4, #1	; 0x1
         685c4:	e1540007 	cmp	r4, r7
         685c8:	3affffea 	bcc	68578 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x3f8>
         685cc:	ea00000f 	b	68610 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x490>
         685d0:	e1a0000d 	mov	r0, sp
         685d4:	eb68c9e0 	bl	1a9ad5c <$IsRawBinary(RefVar const &)>
         685d8:	e3300000 	teq	r0, #0	; 0x0
         685dc:	0a00000b 	beq	68610 <TScriptEndpointClient::ConvertToOption(RefVar const &)+0x490>
         685e0:	e5940000 	ldr	r0, [r4]
         685e4:	e5900000 	ldr	r0, [r0]
         685e8:	eb6d7331 	bl	1bc52b4 <$LockRef(long)>
         685ec:	e5940000 	ldr	r0, [r4]
         685f0:	e5900000 	ldr	r0, [r0]
         685f4:	eb6d66d8 	bl	1bc215c <$BinaryData(long)>
         685f8:	e285100c 	add	r1, r5, #12	; 0xc
         685fc:	e1a02007 	mov	r2, r7
         68600:	eb6dda53 	bl	1bdef54 <$BlockMove>
         68604:	e5940000 	ldr	r0, [r4]
         68608:	e5900000 	ldr	r0, [r0]
         6860c:	eb6d7f97 	bl	1bc8470 <$UnlockRef(long)>
         68610:	e59d0000 	ldr	r0, [sp]
         68614:	eb6d6ae8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         68618:	e28dd004 	add	sp, sp, #4	; 0x4
         6861c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         68620:	eb6d6ae5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         68624:	e1a00005 	mov	r0, r5
         68628:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         6862c:	e59d0000 	ldr	r0, [sp]
         68630:	eb6d6ae1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         68634:	e28dd004 	add	sp, sp, #4	; 0x4
         68638:	e1a00008 	mov	r0, r8
         6863c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::ConvertFromOption(TOption *)
 * Address: 00068640
 */
TScriptEndpointClient::ConvertFromOption(TOption *) {
    /*
         68640:	e1a0c00d 	mov	ip, sp
         68644:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         68648:	e24cb004 	sub	fp, ip, #4	; 0x4
         6864c:	e1a05001 	mov	r5, r1
         68650:	e24dd004 	sub	sp, sp, #4	; 0x4
         68654:	e3a00002 	mov	r0, #2	; 0x2
         68658:	eb6d66bb 	bl	1bc214c <$AllocateRefHandle(long)>
         6865c:	e3350000 	teq	r5, #0	; 0x0
         68660:	e58d0000 	str	r0, [sp]
         68664:	0a0000df 	beq	689e8 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x3a8>
         68668:	eb6d66b4 	bl	1bc2140 <$AllocateFrame(void)>
         6866c:	e41d1004 	ldr	r1, [sp], -#4	; fField4
         68670:	e5810000 	str	r0, [r1]
         68674:	e5950000 	ldr	r0, [r5]
         68678:	e58d0000 	str	r0, [sp]
         6867c:	e5950008 	ldr	r0, [r5, #8]	; fField8
         68680:	e200043f 	and	r0, r0, #1056964608	; 0x3f000000
         68684:	e59f129c 	ldr	r1, [pc, #29c]	; 68928 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x2e8>
         68688:	e59f429c 	ldr	r4, [pc, #29c]	; 6892c <TScriptEndpointClient::ConvertFromOption(TOption *)+0x2ec>
         6868c:	e3300303 	teq	r0, #201326592	; 0xc000000
         68690:	059f2298 	ldreq	r2, [pc, #298]	; 68930 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x2f0>
         68694:	0a000005 	beq	686b0 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x70>
         68698:	e3300301 	teq	r0, #67108864	; 0x4000000
         6869c:	059f2290 	ldreq	r2, [pc, #290]	; 68934 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x2f4>
         686a0:	0a000002 	beq	686b0 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x70>
         686a4:	e3300302 	teq	r0, #134217728	; 0x8000000
         686a8:	159f2288 	ldrne	r2, [pc, #288]	; 68938 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x2f8>
         686ac:	01a02004 	moveq	r2, r4
         686b0:	e28d0004 	add	r0, sp, #4	; 0x4
         686b4:	eb6d772b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         686b8:	e24dd004 	sub	sp, sp, #4	; 0x4
         686bc:	e59f0278 	ldr	r0, [pc, #278]	; 6893c <TScriptEndpointClient::ConvertFromOption(TOption *)+0x2fc>
         686c0:	e3a0100a 	mov	r1, #10	; 0xa
         686c4:	eb6d669c 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
         686c8:	eb6d669f 	bl	1bc214c <$AllocateRefHandle(long)>
         686cc:	e58d0000 	str	r0, [sp]
         686d0:	e5900000 	ldr	r0, [r0]
         686d4:	eb6d72f6 	bl	1bc52b4 <$LockRef(long)>
         686d8:	e24dd008 	sub	sp, sp, #8	; 0x8
         686dc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         686e0:	e5900000 	ldr	r0, [r0]
         686e4:	eb6d669c 	bl	1bc215c <$BinaryData(long)>
         686e8:	e1a01000 	mov	r1, r0
         686ec:	e28d000c 	add	r0, sp, #12	; 0xc
         686f0:	e3a03004 	mov	r3, #4	; 0x4
         686f4:	e3a02001 	mov	r2, #1	; 0x1
         686f8:	eb6dfb21 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         686fc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         68700:	e5900000 	ldr	r0, [r0]
         68704:	eb6d7f59 	bl	1bc8470 <$UnlockRef(long)>
         68708:	e28d2008 	add	r2, sp, #8	; 0x8
         6870c:	e59f122c 	ldr	r1, [pc, #22c]	; 68940 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x300>
         68710:	e28d0010 	add	r0, sp, #16	; 0x10
         68714:	eb6d7713 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         68718:	e5950008 	ldr	r0, [r5, #8]	; fField8
         6871c:	e2000cff 	and	r0, r0, #65280	; 0xff00
         68720:	e1a00100 	mov	r0, r0, lsl #2
         68724:	eb6d6688 	bl	1bc214c <$AllocateRefHandle(long)>
         68728:	e58d0000 	str	r0, [sp]
         6872c:	e1a0200d 	mov	r2, sp
         68730:	e59f120c 	ldr	r1, [pc, #20c]	; 68944 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x304>	; fField20
         68734:	e28d0010 	add	r0, sp, #16	; 0x10
         68738:	eb6d770a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         6873c:	e59d0000 	ldr	r0, [sp]
         68740:	eb6d6a9d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         68744:	e5950008 	ldr	r0, [r5, #8]	; fField8
         68748:	e1a00c00 	mov	r0, r0, lsl #24
         6874c:	e1a00c40 	mov	r0, r0, asr #24
         68750:	e1a00100 	mov	r0, r0, lsl #2
         68754:	eb6d667c 	bl	1bc214c <$AllocateRefHandle(long)>
         68758:	e58d0004 	str	r0, [sp, #4]	; fField4
         6875c:	e28d2004 	add	r2, sp, #4	; 0x4
         68760:	e59f11e0 	ldr	r1, [pc, #1e0]	; 68948 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x308>
         68764:	e28d0010 	add	r0, sp, #16	; 0x10
         68768:	eb6d76fe 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         6876c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         68770:	eb6d6a91 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         68774:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         68778:	e59f61cc 	ldr	r6, [pc, #1cc]	; 6894c <TScriptEndpointClient::ConvertFromOption(TOption *)+0x30c>
         6877c:	e59fc1cc 	ldr	ip, [pc, #1cc]	; 68950 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x310>
         68780:	e130000c 	teq	r0, ip
         68784:	1a000079 	bne	68970 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x330>
         68788:	e24dd00c 	sub	sp, sp, #12	; 0xc
         6878c:	eb6d666b 	bl	1bc2140 <$AllocateFrame(void)>
         68790:	e59d1014 	ldr	r1, [sp, #20]	; fField20
         68794:	e5810000 	str	r0, [r1]
         68798:	e5d5000c 	ldrb	r0, [r5, #12]	; fField12
         6879c:	e3300000 	teq	r0, #0	; 0x0
         687a0:	03a00002 	moveq	r0, #2	; 0x2
         687a4:	13a0001a 	movne	r0, #26	; 0x1a
         687a8:	eb6d6667 	bl	1bc214c <$AllocateRefHandle(long)>
         687ac:	e58d0000 	str	r0, [sp]
         687b0:	e1a0200d 	mov	r2, sp
         687b4:	e59f1198 	ldr	r1, [pc, #198]	; 68954 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x314>
         687b8:	e28d0014 	add	r0, sp, #20	; 0x14
         687bc:	eb6d76e9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         687c0:	e59d0000 	ldr	r0, [sp]
         687c4:	eb6d6a7c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         687c8:	e5d5000d 	ldrb	r0, [r5, #13]
         687cc:	e3300000 	teq	r0, #0	; 0x0
         687d0:	03a00002 	moveq	r0, #2	; 0x2
         687d4:	13a0001a 	movne	r0, #26	; 0x1a
         687d8:	eb6d665b 	bl	1bc214c <$AllocateRefHandle(long)>
         687dc:	e58d0004 	str	r0, [sp, #4]	; fField4
         687e0:	e28d2004 	add	r2, sp, #4	; 0x4
         687e4:	e59f116c 	ldr	r1, [pc, #16c]	; 68958 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x318>	; fField16
         687e8:	e28d0014 	add	r0, sp, #20	; 0x14
         687ec:	eb6d76dd 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         687f0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         687f4:	eb6d6a70 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         687f8:	e5d5000e 	ldrb	r0, [r5, #14]
         687fc:	e3300000 	teq	r0, #0	; 0x0
         68800:	03a00002 	moveq	r0, #2	; 0x2
         68804:	13a0001a 	movne	r0, #26	; 0x1a
         68808:	eb6d664f 	bl	1bc214c <$AllocateRefHandle(long)>
         6880c:	e58d0008 	str	r0, [sp, #8]	; fField8
         68810:	e28d2008 	add	r2, sp, #8	; 0x8
         68814:	e59f1140 	ldr	r1, [pc, #140]	; 6895c <TScriptEndpointClient::ConvertFromOption(TOption *)+0x31c>	; fField140
         68818:	e28d0014 	add	r0, sp, #20	; 0x14
         6881c:	eb6d76d1 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         68820:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         68824:	eb6d6a64 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         68828:	e24dd004 	sub	sp, sp, #4	; 0x4
         6882c:	e5d5000e 	ldrb	r0, [r5, #14]
         68830:	e3300000 	teq	r0, #0	; 0x0
         68834:	0a00002b 	beq	688e8 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x2a8>
         68838:	e24dd014 	sub	sp, sp, #20	; 0x14
         6883c:	eb6d663f 	bl	1bc2140 <$AllocateFrame(void)>
         68840:	eb6d6641 	bl	1bc214c <$AllocateRefHandle(long)>
         68844:	e58d0010 	str	r0, [sp, #16]	; fField16
         68848:	e5950010 	ldr	r0, [r5, #16]	; fField16
         6884c:	e58d000c 	str	r0, [sp, #12]	; fField12
         68850:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         68854:	e1a00820 	mov	r0, r0, lsr #16
         68858:	e1a00100 	mov	r0, r0, lsl #2
         6885c:	eb6d663a 	bl	1bc214c <$AllocateRefHandle(long)>
         68860:	e58d0000 	str	r0, [sp]
         68864:	e1a0200d 	mov	r2, sp
         68868:	e59f10f0 	ldr	r1, [pc, #f0]	; 68960 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x320>
         6886c:	e28d0010 	add	r0, sp, #16	; 0x10
         68870:	eb6d76bc 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         68874:	e59d0000 	ldr	r0, [sp]
         68878:	eb6d6a4f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6887c:	e5dd000e 	ldrb	r0, [sp, #14]
         68880:	e1a00100 	mov	r0, r0, lsl #2
         68884:	eb6d6630 	bl	1bc214c <$AllocateRefHandle(long)>
         68888:	e58d0004 	str	r0, [sp, #4]	; fField4
         6888c:	e28d2004 	add	r2, sp, #4	; 0x4
         68890:	e59f10cc 	ldr	r1, [pc, #cc]	; 68964 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x324>
         68894:	e28d0010 	add	r0, sp, #16	; 0x10
         68898:	eb6d76b2 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         6889c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         688a0:	eb6d6a45 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         688a4:	e5dd000f 	ldrb	r0, [sp, #15]
         688a8:	e1a00100 	mov	r0, r0, lsl #2
         688ac:	eb6d6626 	bl	1bc214c <$AllocateRefHandle(long)>
         688b0:	e58d0008 	str	r0, [sp, #8]	; fField8
         688b4:	e28d2008 	add	r2, sp, #8	; 0x8
         688b8:	e59f10a8 	ldr	r1, [pc, #a8]	; 68968 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x328>
         688bc:	e28d0010 	add	r0, sp, #16	; 0x10
         688c0:	eb6d76a8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         688c4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         688c8:	eb6d6a3b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         688cc:	e28d2010 	add	r2, sp, #16	; 0x10
         688d0:	e1a01004 	mov	r1, r4
         688d4:	e28d002c 	add	r0, sp, #44	; 0x2c
         688d8:	eb6d76a2 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         688dc:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         688e0:	eb6d6a35 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         688e4:	e28dd014 	add	sp, sp, #20	; 0x14
         688e8:	e5b50014 	ldr	r0, [r5, #20]!	; fField20
         688ec:	e1a00100 	mov	r0, r0, lsl #2
         688f0:	eb6d6615 	bl	1bc214c <$AllocateRefHandle(long)>
         688f4:	e58d0000 	str	r0, [sp]
         688f8:	e1a0200d 	mov	r2, sp
         688fc:	e59f1068 	ldr	r1, [pc, #68]	; 6896c <TScriptEndpointClient::ConvertFromOption(TOption *)+0x32c>
         68900:	e28d0018 	add	r0, sp, #24	; 0x18
         68904:	eb6d7697 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         68908:	e59d0000 	ldr	r0, [sp]
         6890c:	eb6d6a2a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         68910:	e28d2018 	add	r2, sp, #24	; 0x18
         68914:	e1a01006 	mov	r1, r6
         68918:	e28d0020 	add	r0, sp, #32	; 0x20
         6891c:	eb6d7691 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         68920:	e28dd010 	add	sp, sp, #16	; 0x10
         68924:	ea00002c 	b	689dc <TScriptEndpointClient::ConvertFromOption(TOption *)+0x39c>
         68928:	00684cb0 	streqh	r4, [r8], -#192
         6892c:	00681db0 	streqh	r1, [r8], -#208
         68930:	00683b78 	rsbeq	r3, r8, r8, ror fp
         68934:	00684540 	rsbeq	r4, r8, r0, asr #10
         68938:	00682568 	rsbeq	r2, r8, r8, ror #10
         6893c:	006848d0 	ldreqd	r4, [r8], -#128
         68940:	00683400 	rsbeq	r3, r8, r0, lsl #8
         68944:	00683b58 	rsbeq	r3, r8, r8, asr fp
         68948:	00684330 	rsbeq	r4, r8, r0, lsr r3
         6894c:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         68950:	63746369 	cmnvs	r4, #-1543503871	; 0xa4000001
         68954:	00682c98 	streqb	r2, [r8], -#200
         68958:	00684950 	rsbeq	r4, r8, r0, asr r9
         6895c:	00684ee0 	rsbeq	r4, r8, r0, ror #29
         68960:	006839d8 	ldreqd	r3, [r8], -#152
         68964:	00683a38 	rsbeq	r3, r8, r8, lsr sl
         68968:	006846e8 	rsbeq	r4, r8, r8, ror #13
         6896c:	006821c8 	rsbeq	r2, r8, r8, asr #3
         68970:	e5954004 	ldr	r4, [r5, #4]	; fField4
         68974:	e285800c 	add	r8, r5, #12	; 0xc
         68978:	e1a00004 	mov	r0, r4
         6897c:	eb68cd06 	bl	1a9bd9c <$MakeArray(long)>
         68980:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         68984:	e3a05000 	mov	r5, #0	; 0x0
         68988:	e3540000 	cmp	r4, #0	; 0x0
         6898c:	e5810000 	str	r0, [r1]
         68990:	9a00000d 	bls	689cc <TScriptEndpointClient::ConvertFromOption(TOption *)+0x38c>
         68994:	e4d80001 	ldrb	r0, [r8], #1
         68998:	e1a00100 	mov	r0, r0, lsl #2
         6899c:	eb6d65ea 	bl	1bc214c <$AllocateRefHandle(long)>
         689a0:	e1a07000 	mov	r7, r0
         689a4:	e1a01005 	mov	r1, r5
         689a8:	e5902000 	ldr	r2, [r0]
         689ac:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         689b0:	e5900000 	ldr	r0, [r0]
         689b4:	eb6d7667 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         689b8:	e1a00007 	mov	r0, r7
         689bc:	eb6d69fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         689c0:	e2855001 	add	r5, r5, #1	; 0x1
         689c4:	e1550004 	cmp	r5, r4
         689c8:	3afffff1 	bcc	68994 <TScriptEndpointClient::ConvertFromOption(TOption *)+0x354>
         689cc:	e28d2008 	add	r2, sp, #8	; 0x8
         689d0:	e1a01006 	mov	r1, r6
         689d4:	e28d0010 	add	r0, sp, #16	; 0x10
         689d8:	eb6d7662 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         689dc:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
         689e0:	eb6d69f5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         689e4:	e28dd008 	add	sp, sp, #8	; 0x8
         689e8:	e59d0000 	ldr	r0, [sp]
         689ec:	e5904000 	ldr	r4, [r0]
         689f0:	eb6d69f1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         689f4:	e1a00004 	mov	r0, r4
         689f8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoState(void)
 * Address: 000689fc
 */
TScriptEndpointClient::DoState(void) {
    /*
         689fc:	e5900014 	ldr	r0, [r0, #20]	; fField20
         68a00:	e5900010 	ldr	r0, [r0, #16]	; fField16
         68a04:	e1a00100 	mov	r0, r0, lsl #2
         68a08:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)
 * Address: 00068a0c
 */
TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &) {
    /*
         68a0c:	e1a0c00d 	mov	ip, sp
         68a10:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         68a14:	e24cb004 	sub	fp, ip, #4	; 0x4
         68a18:	e1a04000 	mov	r4, r0
         68a1c:	e1a06001 	mov	r6, r1
         68a20:	e1a05002 	mov	r5, r2
         68a24:	e3a09000 	mov	r9, #0	; 0x0
         68a28:	e3a08000 	mov	r8, #0	; 0x0
         68a2c:	e5910000 	ldr	r0, [r1]
         68a30:	e5900000 	ldr	r0, [r0]
         68a34:	e3300002 	teq	r0, #2	; 0x2
         68a38:	0a00000f 	beq	68a7c <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x70>
         68a3c:	e3a00000 	mov	r0, #0	; 0x0
         68a40:	eb6d3427 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         68a44:	e1a09000 	mov	r9, r0
         68a48:	eb6de5b4 	bl	1be2120 <$MemError>
         68a4c:	e1b07000 	movs	r7, r0
         68a50:	1a000049 	bne	68b7c <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x170>
         68a54:	e1a00009 	mov	r0, r9
         68a58:	eb6d4087 	bl	1bb8c7c <TOptionArray::$Init(void)>
         68a5c:	e1b07000 	movs	r7, r0
         68a60:	1a000045 	bne	68b7c <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x170>
         68a64:	e1a02009 	mov	r2, r9
         68a68:	e1a01006 	mov	r1, r6
         68a6c:	e1a00004 	mov	r0, r4
         68a70:	eb68972c 	bl	1a8e728 <TScriptEndpointClient::$ConvertToOptionArray(RefVar const &, TOptionArray *)>
         68a74:	e1b07000 	movs	r7, r0
         68a78:	1a00003f 	bne	68b7c <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x170>
         68a7c:	e5950000 	ldr	r0, [r5]
         68a80:	e5900000 	ldr	r0, [r0]
         68a84:	e3300002 	teq	r0, #2	; 0x2
         68a88:	0a00000f 	beq	68acc <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0xc0>
         68a8c:	e3a00000 	mov	r0, #0	; 0x0
         68a90:	eb6d3413 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         68a94:	e1a08000 	mov	r8, r0
         68a98:	eb6de5a0 	bl	1be2120 <$MemError>
         68a9c:	e1b07000 	movs	r7, r0
         68aa0:	1a000035 	bne	68b7c <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x170>
         68aa4:	e1a00008 	mov	r0, r8
         68aa8:	eb6d4073 	bl	1bb8c7c <TOptionArray::$Init(void)>
         68aac:	e1b07000 	movs	r7, r0
         68ab0:	1a000031 	bne	68b7c <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x170>
         68ab4:	e1a02008 	mov	r2, r8
         68ab8:	e1a01005 	mov	r1, r5
         68abc:	e1a00004 	mov	r0, r4
         68ac0:	eb689718 	bl	1a8e728 <TScriptEndpointClient::$ConvertToOptionArray(RefVar const &, TOptionArray *)>
         68ac4:	e1b07000 	movs	r7, r0
         68ac8:	1a00002b 	bne	68b7c <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x170>
         68acc:	e3a01001 	mov	r1, #1	; 0x1
         68ad0:	e5940014 	ldr	r0, [r4, #20]	; fField20
         68ad4:	eb6d489a 	bl	1bbad44 <TEndpoint::$SetSync(unsigned char)>
         68ad8:	e3a05000 	mov	r5, #0	; 0x0
         68adc:	e1a01005 	mov	r1, r5
         68ae0:	e1a02005 	mov	r2, r5
         68ae4:	e3a03000 	mov	r3, #0	; 0x0
         68ae8:	e5940014 	ldr	r0, [r4, #20]	; fField20
         68aec:	eb6d3c26 	bl	1bb7b8c <TEndpoint::$Bind(TOptionArray *, long *, unsigned long)>
         68af0:	e1b07000 	movs	r7, r0
         68af4:	1a000020 	bne	68b7c <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x170>
         68af8:	e3a02000 	mov	r2, #0	; 0x0
         68afc:	e1a03005 	mov	r3, r5
         68b00:	e92d000c 	stmdb	sp!, {r2, r3}
         68b04:	e3a05000 	mov	r5, #0	; 0x0
         68b08:	e1a03005 	mov	r3, r5
         68b0c:	e1a02008 	mov	r2, r8
         68b10:	e1a01009 	mov	r1, r9
         68b14:	e5940014 	ldr	r0, [r4, #20]	; fField20
         68b18:	eb6d3c2a 	bl	1bb7bc8 <TEndpoint::$Connect(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)>
         68b1c:	e28dd008 	add	sp, sp, #8	; 0x8
         68b20:	e1b07000 	movs	r7, r0
         68b24:	0a000003 	beq	68b38 <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x12c>
         68b28:	e3a01000 	mov	r1, #0	; 0x0
         68b2c:	e5940014 	ldr	r0, [r4, #20]	; fField20
         68b30:	eb6d488a 	bl	1bbad60 <TEndpoint::$UnBind(unsigned long)>
         68b34:	ea000010 	b	68b7c <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x170>
         68b38:	e1a01005 	mov	r1, r5
         68b3c:	e5940014 	ldr	r0, [r4, #20]	; fField20
         68b40:	eb6d487f 	bl	1bbad44 <TEndpoint::$SetSync(unsigned char)>
         68b44:	e24dd004 	sub	sp, sp, #4	; 0x4
         68b48:	e2840024 	add	r0, r4, #36	; 0x24
         68b4c:	e59f1060 	ldr	r1, [pc, #60]	; 68bb4 <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x1a8>
         68b50:	e3a03000 	mov	r3, #0	; 0x0
         68b54:	e3a02000 	mov	r2, #0	; 0x0
         68b58:	eb6d6dc5 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         68b5c:	eb6d657a 	bl	1bc214c <$AllocateRefHandle(long)>
         68b60:	e58d0000 	str	r0, [sp]
         68b64:	e1a0100d 	mov	r1, sp
         68b68:	e1a00004 	mov	r0, r4
         68b6c:	eb68e56b 	bl	1aa2120 <TScriptEndpointClient::$SetInputSpec(RefVar const &)>
         68b70:	e59d0000 	ldr	r0, [sp]
         68b74:	eb6d6990 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         68b78:	e28dd004 	add	sp, sp, #4	; 0x4
         68b7c:	e3390000 	teq	r9, #0	; 0x0
         68b80:	0a000002 	beq	68b90 <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x184>
         68b84:	e1a00009 	mov	r0, r9
         68b88:	e3a01001 	mov	r1, #1	; 0x1
         68b8c:	eb6d37e6 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         68b90:	e3380000 	teq	r8, #0	; 0x0
         68b94:	0a000002 	beq	68ba4 <TScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x198>
         68b98:	e1a00008 	mov	r0, r8
         68b9c:	e3a01001 	mov	r1, #1	; 0x1
         68ba0:	eb6d37e1 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         68ba4:	e1a01007 	mov	r1, r7
         68ba8:	e1a00004 	mov	r0, r4
         68bac:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         68bb0:	ea694c73 	b	1abbd84 <TScriptEndpointClient::$TranslateError(long)>
         68bb4:	00683a10 	rsbeq	r3, r8, r0, lsl sl
    */
}

/**
 * Symbol: TScriptEndpointClient::DoListen(RefVar const &)
 * Address: 00068bb8
 */
TScriptEndpointClient::DoListen(RefVar const &) {
    /*
         68bb8:	e1a0c00d 	mov	ip, sp
         68bbc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         68bc0:	e24cb004 	sub	fp, ip, #4	; 0x4
         68bc4:	e1a04000 	mov	r4, r0
         68bc8:	e1a05001 	mov	r5, r1
         68bcc:	e3a07000 	mov	r7, #0	; 0x0
         68bd0:	e5910000 	ldr	r0, [r1]
         68bd4:	e5900000 	ldr	r0, [r0]
         68bd8:	e3300002 	teq	r0, #2	; 0x2
         68bdc:	0a00000f 	beq	68c20 <TScriptEndpointClient::DoListen(RefVar const &)+0x68>
         68be0:	e3a00000 	mov	r0, #0	; 0x0
         68be4:	eb6d33be 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         68be8:	e1a07000 	mov	r7, r0
         68bec:	eb6de54b 	bl	1be2120 <$MemError>
         68bf0:	e1b06000 	movs	r6, r0
         68bf4:	1a00003e 	bne	68cf4 <TScriptEndpointClient::DoListen(RefVar const &)+0x13c>
         68bf8:	e1a00007 	mov	r0, r7
         68bfc:	eb6d401e 	bl	1bb8c7c <TOptionArray::$Init(void)>
         68c00:	e1b06000 	movs	r6, r0
         68c04:	1a00003a 	bne	68cf4 <TScriptEndpointClient::DoListen(RefVar const &)+0x13c>
         68c08:	e1a02007 	mov	r2, r7
         68c0c:	e1a01005 	mov	r1, r5
         68c10:	e1a00004 	mov	r0, r4
         68c14:	eb6896c3 	bl	1a8e728 <TScriptEndpointClient::$ConvertToOptionArray(RefVar const &, TOptionArray *)>
         68c18:	e1b06000 	movs	r6, r0
         68c1c:	1a000034 	bne	68cf4 <TScriptEndpointClient::DoListen(RefVar const &)+0x13c>
         68c20:	e3a01001 	mov	r1, #1	; 0x1
         68c24:	e5940014 	ldr	r0, [r4, #20]	; fField20
         68c28:	eb6d4845 	bl	1bbad44 <TEndpoint::$SetSync(unsigned char)>
         68c2c:	e3a05000 	mov	r5, #0	; 0x0
         68c30:	e1a01005 	mov	r1, r5
         68c34:	e1a02005 	mov	r2, r5
         68c38:	e3a03000 	mov	r3, #0	; 0x0
         68c3c:	e5940014 	ldr	r0, [r4, #20]	; fField20
         68c40:	eb6d3bd1 	bl	1bb7b8c <TEndpoint::$Bind(TOptionArray *, long *, unsigned long)>
         68c44:	e1b06000 	movs	r6, r0
         68c48:	1a000029 	bne	68cf4 <TScriptEndpointClient::DoListen(RefVar const &)+0x13c>
         68c4c:	e3a02000 	mov	r2, #0	; 0x0
         68c50:	e1a03005 	mov	r3, r5
         68c54:	e92d000c 	stmdb	sp!, {r2, r3}
         68c58:	e3a05000 	mov	r5, #0	; 0x0
         68c5c:	e1a01005 	mov	r1, r5
         68c60:	e1a03005 	mov	r3, r5
         68c64:	e1a02007 	mov	r2, r7
         68c68:	e5940014 	ldr	r0, [r4, #20]	; fField20
         68c6c:	eb6d440f 	bl	1bb9cb0 <TEndpoint::$Listen(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)>
         68c70:	e28dd008 	add	sp, sp, #8	; 0x8
         68c74:	e1b06000 	movs	r6, r0
         68c78:	1a00001d 	bne	68cf4 <TScriptEndpointClient::DoListen(RefVar const &)+0x13c>
         68c7c:	e3a02000 	mov	r2, #0	; 0x0
         68c80:	e1a03005 	mov	r3, r5
         68c84:	e3a05000 	mov	r5, #0	; 0x0
         68c88:	e1a01005 	mov	r1, r5
         68c8c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         68c90:	e5941014 	ldr	r1, [r4, #20]	; fField20
         68c94:	e1a00001 	mov	r0, r1
         68c98:	e1a03005 	mov	r3, r5
         68c9c:	e1a02005 	mov	r2, r5
         68ca0:	eb6d37ab 	bl	1bb6b54 <TEndpoint::$Accept(TEndpoint *, TOptionArray *, TOptionArray *, CBufferSegment *, long, unsigned long)>
         68ca4:	e28dd00c 	add	sp, sp, #12	; 0xc
         68ca8:	e1b06000 	movs	r6, r0
         68cac:	1a000010 	bne	68cf4 <TScriptEndpointClient::DoListen(RefVar const &)+0x13c>
         68cb0:	e1a01005 	mov	r1, r5
         68cb4:	e5940014 	ldr	r0, [r4, #20]	; fField20
         68cb8:	eb6d4821 	bl	1bbad44 <TEndpoint::$SetSync(unsigned char)>
         68cbc:	e24dd004 	sub	sp, sp, #4	; 0x4
         68cc0:	e2840024 	add	r0, r4, #36	; 0x24
         68cc4:	e59f104c 	ldr	r1, [pc, #4c]	; 68d18 <TScriptEndpointClient::DoListen(RefVar const &)+0x160>	; fField4
         68cc8:	e3a03000 	mov	r3, #0	; 0x0
         68ccc:	e3a02000 	mov	r2, #0	; 0x0
         68cd0:	eb6d6d67 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         68cd4:	eb6d651c 	bl	1bc214c <$AllocateRefHandle(long)>
         68cd8:	e58d0000 	str	r0, [sp]
         68cdc:	e1a0100d 	mov	r1, sp
         68ce0:	e1a00004 	mov	r0, r4
         68ce4:	eb68e50d 	bl	1aa2120 <TScriptEndpointClient::$SetInputSpec(RefVar const &)>
         68ce8:	e59d0000 	ldr	r0, [sp]
         68cec:	eb6d6932 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         68cf0:	e28dd004 	add	sp, sp, #4	; 0x4
         68cf4:	e3370000 	teq	r7, #0	; 0x0
         68cf8:	0a000002 	beq	68d08 <TScriptEndpointClient::DoListen(RefVar const &)+0x150>
         68cfc:	e1a00007 	mov	r0, r7
         68d00:	e3a01001 	mov	r1, #1	; 0x1
         68d04:	eb6d3788 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         68d08:	e1a01006 	mov	r1, r6
         68d0c:	e1a00004 	mov	r0, r4
         68d10:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         68d14:	ea694c1a 	b	1abbd84 <TScriptEndpointClient::$TranslateError(long)>
         68d18:	00683a10 	rsbeq	r3, r8, r0, lsl sl
    */
}

/**
 * Symbol: TScriptEndpointClient::DoCaller(void)
 * Address: 00068d1c
 */
TScriptEndpointClient::DoCaller(void) {
    /*
         68d1c:	e3a00002 	mov	r0, #2	; 0x2
         68d20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TScriptEndpointClient::DoAccept(void)
 * Address: 00068d24
 */
TScriptEndpointClient::DoAccept(void) {
    /*
         68d24:	e1a0c00d 	mov	ip, sp
         68d28:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         68d2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         68d30:	e3a02000 	mov	r2, #0	; 0x0
         68d34:	e3a03000 	mov	r3, #0	; 0x0
         68d38:	e3a0c000 	mov	ip, #0	; 0x0
         68d3c:	e1a0100c 	mov	r1, ip
         68d40:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         68d44:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
         68d48:	e1a00001 	mov	r0, r1
         68d4c:	e1a0300c 	mov	r3, ip
         68d50:	e1a0200c 	mov	r2, ip
         68d54:	eb6d377e 	bl	1bb6b54 <TEndpoint::$Accept(TEndpoint *, TOptionArray *, TOptionArray *, CBufferSegment *, long, unsigned long)>
         68d58:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoReject(void)
 * Address: 00068d5c
 */
TScriptEndpointClient::DoReject(void) {
    /*
         68d5c:	e5900014 	ldr	r0, [r0, #20]	; fField20
         68d60:	e3a01000 	mov	r1, #0	; 0x0
         68d64:	e1a03001 	mov	r3, r1
         68d68:	e1a02001 	mov	r2, r1
         68d6c:	ea6d3fa3 	b	1bb8c00 <TEndpoint::$Disconnect(CBufferSegment *, long, long)>
    */
}

/**
 * Symbol: TScriptEndpointClient::DoRelease(void)
 * Address: 00068d70
 */
TScriptEndpointClient::DoRelease(void) {
    /*
         68d70:	e1a0c00d 	mov	ip, sp
         68d74:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         68d78:	e24cb004 	sub	fp, ip, #4	; 0x4
         68d7c:	e1a04000 	mov	r4, r0
         68d80:	eb689ebd 	bl	1a9087c <TScriptEndpointClient::$DoFlushOutput(void)>
         68d84:	e3300000 	teq	r0, #0	; 0x0
         68d88:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         68d8c:	e3a01001 	mov	r1, #1	; 0x1
         68d90:	e5940014 	ldr	r0, [r4, #20]	; fField20
         68d94:	eb6d47ea 	bl	1bbad44 <TEndpoint::$SetSync(unsigned char)>
         68d98:	e3a01000 	mov	r1, #0	; 0x0
         68d9c:	e5940014 	ldr	r0, [r4, #20]	; fField20
         68da0:	eb6d43d3 	bl	1bb9cf4 <TEndpoint::$Release(unsigned long)>
         68da4:	e3300000 	teq	r0, #0	; 0x0
         68da8:	03a01000 	moveq	r1, #0	; 0x0
         68dac:	05940014 	ldreq	r0, [r4, #20]	; fField20
         68db0:	0b6d47ea 	bleq	1bbad60 <TEndpoint::$UnBind(unsigned long)>
         68db4:	e3300000 	teq	r0, #0	; 0x0
         68db8:	05b40014 	ldreq	r0, [r4, #20]!	; fField20
         68dbc:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         68dc0:	0a6d3b75 	beq	1bb7b9c <TEndpoint::$Close(void)>
         68dc4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoDisconnect(void)
 * Address: 00068e18
 */
TScriptEndpointClient::DoDisconnect(void) {
    /*
         68e18:	e1a0c00d 	mov	ip, sp
         68e1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         68e20:	e24cb004 	sub	fp, ip, #4	; 0x4
         68e24:	e5900014 	ldr	r0, [r0, #20]	; fField20
         68e28:	eb6d3f76 	bl	1bb8c08 <TEndpoint::$EasyClose(void)>
         68e2c:	e1b04000 	movs	r4, r0
         68e30:	128f0f02 	addne	r0, pc, #8	; 0x8
         68e34:	1b6de8d9 	blne	1be31a0 <$ThrowMsg>
         68e38:	e1a00004 	mov	r0, r4
         68e3c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         68e40:	456e6470 	strmib	r6, [lr, -#1136]!
         68e44:	6f696e74 	swivs	0x00696e74
         68e48:	20456173 	subcs	r6, r5, r3, ror r1
         68e4c:	79436c6f 	stmvcdb	r3, {r0, r1, r2, r3, r5, r6, sl, fp, sp, lr}^
         68e50:	73652066 	cmnvc	r5, #102	; 0x66
         68e54:	61696c65 	cmnvs	r9, r5, ror #24
         68e58:	64000000 	strvs	r0, [r0]
    */
}

/**
 * Symbol: TScriptEndpointClient::DoAbort(void)
 * Address: 00068e5c
 */
TScriptEndpointClient::DoAbort(void) {
    /*
         68e5c:	e1a0c00d 	mov	ip, sp
         68e60:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         68e64:	e24cb004 	sub	fp, ip, #4	; 0x4
         68e68:	e5900014 	ldr	r0, [r0, #20]	; fField20
         68e6c:	eb6d3737 	bl	1bb6b50 <TEndpoint::$Abort(void)>
         68e70:	e1b04000 	movs	r4, r0
         68e74:	128f0f02 	addne	r0, pc, #8	; 0x8
         68e78:	1b6de8c8 	blne	1be31a0 <$ThrowMsg>
         68e7c:	e1a00004 	mov	r0, r4
         68e80:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         68e84:	456e6470 	strmib	r6, [lr, -#1136]!
         68e88:	6f696e74 	swivs	0x00696e74
         68e8c:	2041626f 	subcs	r6, r1, pc, ror #4
         68e90:	72742066 	rsbvcs	r2, r4, #102	; 0x66
         68e94:	61696c65 	cmnvs	r9, r5, ror #24
         68e98:	64000000 	strvs	r0, [r0]
    */
}

/**
 * Symbol: TScriptEndpointClient::DoOutput(RefVar const &, RefVar const &)
 * Address: 00068e9c
 */
TScriptEndpointClient::DoOutput(RefVar const &, RefVar const &) {
    /*
         68e9c:	e1a0c00d 	mov	ip, sp
         68ea0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         68ea4:	e24cb004 	sub	fp, ip, #4	; 0x4
         68ea8:	e1a04000 	mov	r4, r0
         68eac:	e1a05001 	mov	r5, r1
         68eb0:	e1a06002 	mov	r6, r2
         68eb4:	e24dd004 	sub	sp, sp, #4	; 0x4
         68eb8:	e3a07000 	mov	r7, #0	; 0x0
         68ebc:	e3a02000 	mov	r2, #0	; 0x0
         68ec0:	eb68a27c 	bl	1a918b8 <TScriptEndpointClient::$DoOutputOne(RefVar const &, unsigned char *)>
         68ec4:	e58d0000 	str	r0, [sp]
         68ec8:	e3300000 	teq	r0, #0	; 0x0
         68ecc:	01a00007 	moveq	r0, r7
         68ed0:	0a000037 	beq	68fb4 <TScriptEndpointClient::DoOutput(RefVar const &, RefVar const &)+0x118>
         68ed4:	ea000001 	b	68ee0 <TScriptEndpointClient::DoOutput(RefVar const &, RefVar const &)+0x44>
         68ed8:	e1a00004 	mov	r0, r4
         68edc:	eb68f513 	bl	1aa6330 <TScriptEndpointClient::$Yield(void)>
         68ee0:	e5940028 	ldr	r0, [r4, #40]	; fField40
         68ee4:	e59d1000 	ldr	r1, [sp]
         68ee8:	e0401001 	sub	r1, r0, r1
         68eec:	e3510000 	cmp	r1, #0	; 0x0
         68ef0:	b3500b01 	cmplt	r0, #1024	; 0x400
         68ef4:	bafffff7 	blt	68ed8 <TScriptEndpointClient::DoOutput(RefVar const &, RefVar const &)+0x3c>
         68ef8:	e59d0000 	ldr	r0, [sp]
         68efc:	e2800001 	add	r0, r0, #1	; 0x1
         68f00:	eb6db718 	bl	1bd6b68 <$malloc>
         68f04:	e1b07000 	movs	r7, r0
         68f08:	0a000026 	beq	68fa8 <TScriptEndpointClient::DoOutput(RefVar const &, RefVar const &)+0x10c>
         68f0c:	e1a02007 	mov	r2, r7
         68f10:	e1a01005 	mov	r1, r5
         68f14:	e1a00004 	mov	r0, r4
         68f18:	eb68a266 	bl	1a918b8 <TScriptEndpointClient::$DoOutputOne(RefVar const &, unsigned char *)>
         68f1c:	e5960000 	ldr	r0, [r6]
         68f20:	e5900000 	ldr	r0, [r0]
         68f24:	e2001003 	and	r1, r0, #3	; 0x3
         68f28:	e3510000 	cmp	r1, #0	; 0x0
         68f2c:	1a000004 	bne	68f44 <TScriptEndpointClient::DoOutput(RefVar const &, RefVar const &)+0xa8>
         68f30:	01a00140 	moveq	r0, r0, asr #2
         68f34:	0a000000 	beq	68f3c <TScriptEndpointClient::DoOutput(RefVar const &, RefVar const &)+0xa0>
         68f38:	eb6d6477 	bl	1bc211c <$_RINTError(long)>
         68f3c:	e1a01000 	mov	r1, r0
         68f40:	ea000000 	b	68f48 <TScriptEndpointClient::DoOutput(RefVar const &, RefVar const &)+0xac>
         68f44:	e3a01001 	mov	r1, #1	; 0x1
         68f48:	e3a03000 	mov	r3, #0	; 0x0
         68f4c:	e92d0008 	stmdb	sp!, {r3}
         68f50:	e1a03001 	mov	r3, r1
         68f54:	e28d2004 	add	r2, sp, #4	; 0x4
         68f58:	e1a01007 	mov	r1, r7
         68f5c:	e5940014 	ldr	r0, [r4, #20]	; fField20
         68f60:	eb6d477b 	bl	1bbad54 <TEndpoint::$Snd(unsigned char *, long &, unsigned long, unsigned long)>
         68f64:	e28dd004 	add	sp, sp, #4	; 0x4
         68f68:	e1b05000 	movs	r5, r0
         68f6c:	0a000003 	beq	68f80 <TScriptEndpointClient::DoOutput(RefVar const &, RefVar const &)+0xe4>
         68f70:	e28f0f07 	add	r0, pc, #28	; 0x1c
         68f74:	eb6de889 	bl	1be31a0 <$ThrowMsg>
         68f78:	e3350000 	teq	r5, #0	; 0x0
         68f7c:	1a00000b 	bne	68fb0 <TScriptEndpointClient::DoOutput(RefVar const &, RefVar const &)+0x114>
         68f80:	e5941028 	ldr	r1, [r4, #40]	; fField40
         68f84:	e59d0000 	ldr	r0, [sp]
         68f88:	e0410000 	sub	r0, r1, r0
         68f8c:	e5a40028 	str	r0, [r4, #40]!	; fField40
         68f90:	ea000006 	b	68fb0 <TScriptEndpointClient::DoOutput(RefVar const &, RefVar const &)+0x114>
         68f94:	456e6470 	strmib	r6, [lr, -#1136]!
         68f98:	6f696e74 	swivs	0x00696e74
         68f9c:	20736e64 	rsbcss	r6, r3, r4, ror #28
         68fa0:	20666169 	rsbcs	r6, r6, r9, ror #2
         68fa4:	6c656400 	stcvsl	4, cr6, [r5]
         68fa8:	eb6de45c 	bl	1be2120 <$MemError>
         68fac:	e1a05000 	mov	r5, r0
         68fb0:	e1a00005 	mov	r0, r5
         68fb4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)
 * Address: 00068fb8
 */
TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *) {
    /*
         68fb8:	e1a0c00d 	mov	ip, sp
         68fbc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         68fc0:	e24cb004 	sub	fp, ip, #4	; 0x4
         68fc4:	e1a06000 	mov	r6, r0
         68fc8:	e1a05001 	mov	r5, r1
         68fcc:	e1a04002 	mov	r4, r2
         68fd0:	e3a07000 	mov	r7, #0	; 0x0
         68fd4:	e1a00001 	mov	r0, r1
         68fd8:	eb6d70af 	bl	1bc529c <$IsString(RefVar const &)>
         68fdc:	e3300000 	teq	r0, #0	; 0x0
         68fe0:	0a00000c 	beq	69018 <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0x60>
         68fe4:	e1a00005 	mov	r0, r5
         68fe8:	eb6d6865 	bl	1bc3184 <$GetCString(RefVar const &)>
         68fec:	eb6e15db 	bl	1bee760 <$Ustrlen>
         68ff0:	e1a07000 	mov	r7, r0
         68ff4:	e3340000 	teq	r4, #0	; 0x0
         68ff8:	0a000063 	beq	6918c <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0x1d4>
         68ffc:	e1a00005 	mov	r0, r5
         69000:	eb6d685f 	bl	1bc3184 <$GetCString(RefVar const &)>
         69004:	e1a03007 	mov	r3, r7
         69008:	e1a01004 	mov	r1, r4
         6900c:	e5b6202c 	ldr	r2, [r6, #44]!
         69010:	eb6df8da 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         69014:	ea00005c 	b	6918c <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0x1d4>
         69018:	e5950000 	ldr	r0, [r5]
         6901c:	e5900000 	ldr	r0, [r0]
         69020:	e1a01000 	mov	r1, r0
         69024:	e2000003 	and	r0, r0, #3	; 0x3
         69028:	e3300002 	teq	r0, #2	; 0x2
         6902c:	03a03003 	moveq	r3, #3	; 0x3
         69030:	00032141 	andeq	r2, r3, r1, asr #2
         69034:	03320001 	teqeq	r2, #1	; 0x1
         69038:	1a000010 	bne	69080 <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0xc8>
         6903c:	e3a07001 	mov	r7, #1	; 0x1
         69040:	e3340000 	teq	r4, #0	; 0x0
         69044:	0a000050 	beq	6918c <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0x1d4>
         69048:	e3300002 	teq	r0, #2	; 0x2
         6904c:	03320001 	teqeq	r2, #1	; 0x1
         69050:	01a00141 	moveq	r0, r1, asr #2
         69054:	01a00140 	moveq	r0, r0, asr #2
         69058:	01a00800 	moveq	r0, r0, lsl #16
         6905c:	01a00820 	moveq	r0, r0, lsr #16
         69060:	0a000001 	beq	6906c <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0xb4>
         69064:	e1a00001 	mov	r0, r1
         69068:	eb6d642a 	bl	1bc2118 <$_RCHARError(long)>
         6906c:	e1a00800 	mov	r0, r0, lsl #16
         69070:	e1a00820 	mov	r0, r0, lsr #16
         69074:	e5b6102c 	ldr	r1, [r6, #44]!
         69078:	eb000261 	bl	69a04 <TScriptEndpointClient::DoFlushPartial(void)+0x54>
         6907c:	ea000009 	b	690a8 <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0xf0>
         69080:	e3300000 	teq	r0, #0	; 0x0
         69084:	1a000009 	bne	690b0 <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0xf8>
         69088:	e3a07001 	mov	r7, #1	; 0x1
         6908c:	e3340000 	teq	r4, #0	; 0x0
         69090:	0a00003d 	beq	6918c <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0x1d4>
         69094:	e3300000 	teq	r0, #0	; 0x0
         69098:	01a00141 	moveq	r0, r1, asr #2
         6909c:	0a000001 	beq	690a8 <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0xf0>
         690a0:	e1a00001 	mov	r0, r1
         690a4:	eb6d641c 	bl	1bc211c <$_RINTError(long)>
         690a8:	e5c40000 	strb	r0, [r4]
         690ac:	ea000036 	b	6918c <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0x1d4>
         690b0:	e1a00005 	mov	r0, r5
         690b4:	eb6e2a34 	bl	1bf398c <$IsArray(RefVar const &)>
         690b8:	e3300000 	teq	r0, #0	; 0x0
         690bc:	0a00001c 	beq	69134 <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0x17c>
         690c0:	e5950000 	ldr	r0, [r5]
         690c4:	e5900000 	ldr	r0, [r0]
         690c8:	eb6d7077 	bl	1bc52ac <$Length(long)>
         690cc:	e1a09000 	mov	r9, r0
         690d0:	e3a08000 	mov	r8, #0	; 0x0
         690d4:	e3500000 	cmp	r0, #0	; 0x0
         690d8:	9a00002b 	bls	6918c <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0x1d4>
         690dc:	e24dd004 	sub	sp, sp, #4	; 0x4
         690e0:	e1a01008 	mov	r1, r8
         690e4:	e5950000 	ldr	r0, [r5]
         690e8:	e5900000 	ldr	r0, [r0]
         690ec:	eb6d6c58 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         690f0:	eb6d6415 	bl	1bc214c <$AllocateRefHandle(long)>
         690f4:	e58d0000 	str	r0, [sp]
         690f8:	e1a0100d 	mov	r1, sp
         690fc:	e1a02004 	mov	r2, r4
         69100:	e1a00006 	mov	r0, r6
         69104:	eb68a1eb 	bl	1a918b8 <TScriptEndpointClient::$DoOutputOne(RefVar const &, unsigned char *)>
         69108:	e1a0a000 	mov	sl, r0
         6910c:	e59d0000 	ldr	r0, [sp]
         69110:	eb6d6829 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         69114:	e3340000 	teq	r4, #0	; 0x0
         69118:	1084400a 	addne	r4, r4, sl
         6911c:	e087700a 	add	r7, r7, sl
         69120:	e28dd004 	add	sp, sp, #4	; 0x4
         69124:	e2888001 	add	r8, r8, #1	; 0x1
         69128:	e1580009 	cmp	r8, r9
         6912c:	3affffea 	bcc	690dc <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0x124>
         69130:	ea000015 	b	6918c <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0x1d4>
         69134:	e1a00005 	mov	r0, r5
         69138:	eb68c707 	bl	1a9ad5c <$IsRawBinary(RefVar const &)>
         6913c:	e3300000 	teq	r0, #0	; 0x0
         69140:	0a000011 	beq	6918c <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0x1d4>
         69144:	e5950000 	ldr	r0, [r5]
         69148:	e5900000 	ldr	r0, [r0]
         6914c:	eb6d7056 	bl	1bc52ac <$Length(long)>
         69150:	e1a07000 	mov	r7, r0
         69154:	e3340000 	teq	r4, #0	; 0x0
         69158:	0a00000b 	beq	6918c <TScriptEndpointClient::DoOutputOne(RefVar const &, unsigned char *)+0x1d4>
         6915c:	e5950000 	ldr	r0, [r5]
         69160:	e5900000 	ldr	r0, [r0]
         69164:	eb6d7052 	bl	1bc52b4 <$LockRef(long)>
         69168:	e5950000 	ldr	r0, [r5]
         6916c:	e5900000 	ldr	r0, [r0]
         69170:	eb6d63f9 	bl	1bc215c <$BinaryData(long)>
         69174:	e1a02007 	mov	r2, r7
         69178:	e1a01004 	mov	r1, r4
         6917c:	eb6dd774 	bl	1bdef54 <$BlockMove>
         69180:	e5950000 	ldr	r0, [r5]
         69184:	e5900000 	ldr	r0, [r0]
         69188:	eb6d7cb8 	bl	1bc8470 <$UnlockRef(long)>
         6918c:	e1a00007 	mov	r0, r7
         69190:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoFlushOutput(void)
 * Address: 00069194
 */
TScriptEndpointClient::DoFlushOutput(void) {
    /*
         69194:	e1a0c00d 	mov	ip, sp
         69198:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6919c:	e24cb004 	sub	fp, ip, #4	; 0x4
         691a0:	e1a04000 	mov	r4, r0
         691a4:	e5900028 	ldr	r0, [r0, #40]	; fField40
         691a8:	e3500b01 	cmp	r0, #1024	; 0x400
         691ac:	aa000004 	bge	691c4 <TScriptEndpointClient::DoFlushOutput(void)+0x30>
         691b0:	e1a00004 	mov	r0, r4
         691b4:	eb68f45d 	bl	1aa6330 <TScriptEndpointClient::$Yield(void)>
         691b8:	e5940028 	ldr	r0, [r4, #40]	; fField40
         691bc:	e3500b01 	cmp	r0, #1024	; 0x400
         691c0:	bafffffa 	blt	691b0 <TScriptEndpointClient::DoFlushOutput(void)+0x1c>
         691c4:	e3a00000 	mov	r0, #0	; 0x0
         691c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)
 * Address: 000691cc
 */
TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &) {
    /*
         691cc:	e1a0c00d 	mov	ip, sp
         691d0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         691d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         691d8:	e1a04000 	mov	r4, r0
         691dc:	e1a08001 	mov	r8, r1
         691e0:	e1a05002 	mov	r5, r2
         691e4:	e3a06000 	mov	r6, #0	; 0x0
         691e8:	eb689da3 	bl	1a9087c <TScriptEndpointClient::$DoFlushOutput(void)>
         691ec:	e1b07000 	movs	r7, r0
         691f0:	1a000016 	bne	69250 <TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)+0x84>
         691f4:	e24dd014 	sub	sp, sp, #20	; 0x14
         691f8:	e1a0000d 	mov	r0, sp
         691fc:	e3a01c01 	mov	r1, #256	; 0x100
         69200:	eb6dec0d 	bl	1be423c <CNullPipe::$__ct(long)>
         69204:	e3a00000 	mov	r0, #0	; 0x0
         69208:	eb6debfd 	bl	1be4204 <CBufferSegment::$__ct(void)>
         6920c:	e1a06000 	mov	r6, r0
         69210:	eb6de3c2 	bl	1be2120 <$MemError>
         69214:	e1a07000 	mov	r7, r0
         69218:	e3360000 	teq	r6, #0	; 0x0
         6921c:	0a000006 	beq	6923c <TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)+0x70>
         69220:	e3370000 	teq	r7, #0	; 0x0
         69224:	1a000004 	bne	6923c <TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)+0x70>
         69228:	e1a00006 	mov	r0, r6
         6922c:	e3a01c01 	mov	r1, #256	; 0x100
         69230:	eb6e009c 	bl	1be94a8 <CBufferSegment::$Init(long)>
         69234:	e1b07000 	movs	r7, r0
         69238:	0a00000d 	beq	69274 <TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)+0xa8>
         6923c:	e1a0000d 	mov	r0, sp
         69240:	e3a01000 	mov	r1, #0	; 0x0
         69244:	e1a0e00f 	mov	lr, pc
         69248:	e59df000 	ldr	pc, [sp]
         6924c:	e28dd014 	add	sp, sp, #20	; 0x14
         69250:	e3370000 	teq	r7, #0	; 0x0
         69254:	13360000 	teqne	r6, #0	; 0x0
         69258:	0a000003 	beq	6926c <TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)+0xa0>
         6925c:	e1a00006 	mov	r0, r6
         69260:	e3a01001 	mov	r1, #1	; 0x1
         69264:	e1a0e00f 	mov	lr, pc
         69268:	e596f000 	ldr	pc, [r6]
         6926c:	e1a00007 	mov	r0, r7
         69270:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         69274:	e1a02006 	mov	r2, r6
         69278:	e1a0000d 	mov	r0, sp
         6927c:	e3a03000 	mov	r3, #0	; 0x0
         69280:	e3a01000 	mov	r1, #0	; 0x0
         69284:	eb6e0082 	bl	1be9494 <CBufferPipe::$Init(CBufferSegment *, CBufferSegment *, unsigned char)>
         69288:	e1a0000d 	mov	r0, sp
         6928c:	e3e02000 	mvn	r2, #0	; 0x0
         69290:	e3a01004 	mov	r1, #4	; 0x4
         69294:	e59d3000 	ldr	r3, [sp]
         69298:	e1a0e00f 	mov	lr, pc
         6929c:	e283f00c 	add	pc, r3, #12	; 0xc
         692a0:	e24dd028 	sub	sp, sp, #40	; 0x28
         692a4:	e28d2028 	add	r2, sp, #40	; 0x28
         692a8:	e1a01008 	mov	r1, r8
         692ac:	e1a0000d 	mov	r0, sp
         692b0:	e3a03000 	mov	r3, #0	; 0x0
         692b4:	eb6d5f8c 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
         692b8:	e3a08000 	mov	r8, #0	; 0x0
         692bc:	e52d806c 	str	r8, [sp, -#108]!
         692c0:	e28d0008 	add	r0, sp, #8	; 0x8
         692c4:	eb6d25aa 	bl	1bb2974 <$setjmp>
         692c8:	e3300000 	teq	r0, #0	; 0x0
         692cc:	1a000030 	bne	69394 <TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)+0x1c8>
         692d0:	e1a0000d 	mov	r0, sp
         692d4:	eb6ddb68 	bl	1be007c <$AddExceptionHandler>
         692d8:	e28d006c 	add	r0, sp, #108	; 0x6c
         692dc:	eb6d7c66 	bl	1bc847c <TObjectWriter::$Write(void)>
         692e0:	e1a0000d 	mov	r0, sp
         692e4:	eb6ddf73 	bl	1be10b8 <$ExitHandler>
         692e8:	e28dd06c 	add	sp, sp, #108	; 0x6c
         692ec:	e28d0028 	add	r0, sp, #40	; 0x28
         692f0:	e59d1028 	ldr	r1, [sp, #40]	; fField40
         692f4:	e1a0e00f 	mov	lr, pc
         692f8:	e281f010 	add	pc, r1, #16	; 0x10
         692fc:	e1a09000 	mov	r9, r0
         69300:	e240a004 	sub	sl, r0, #4	; 0x4
         69304:	e35a0000 	cmp	sl, #0	; 0x0
         69308:	da00002f 	ble	693cc <TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)+0x200>
         6930c:	e28d0028 	add	r0, sp, #40	; 0x28
         69310:	e3e02000 	mvn	r2, #0	; 0x0
         69314:	e3a01000 	mov	r1, #0	; 0x0
         69318:	e59d3028 	ldr	r3, [sp, #40]	; fField40
         6931c:	e1a0e00f 	mov	lr, pc
         69320:	e283f00c 	add	pc, r3, #12	; 0xc
         69324:	e1a0100a 	mov	r1, sl
         69328:	e28d0028 	add	r0, sp, #40	; 0x28
         6932c:	eb6defdb 	bl	1be52a0 <CPipe::$__ls(long)>
         69330:	e1a00006 	mov	r0, r6
         69334:	e5961000 	ldr	r1, [r6]
         69338:	e1a0e00f 	mov	lr, pc
         6933c:	e281f028 	add	pc, r1, #40	; 0x28
         69340:	e1a07006 	mov	r7, r6
         69344:	e1a00006 	mov	r0, r6
         69348:	e5961000 	ldr	r1, [r6]
         6934c:	e1a0e00f 	mov	lr, pc
         69350:	e281f02c 	add	pc, r1, #44	; 0x2c
         69354:	e0401009 	sub	r1, r0, r9
         69358:	e1a00007 	mov	r0, r7
         6935c:	e3a02001 	mov	r2, #1	; 0x1
         69360:	e5973000 	ldr	r3, [r7]
         69364:	e1a0e00f 	mov	lr, pc
         69368:	e283f034 	add	pc, r3, #52	; 0x34
         6936c:	e5950000 	ldr	r0, [r5]
         69370:	e5900000 	ldr	r0, [r0]
         69374:	e2001003 	and	r1, r0, #3	; 0x3
         69378:	e3510000 	cmp	r1, #0	; 0x0
         6937c:	1a00000a 	bne	693ac <TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)+0x1e0>
         69380:	01a00140 	moveq	r0, r0, asr #2
         69384:	0a000000 	beq	6938c <TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)+0x1c0>
         69388:	eb6d6363 	bl	1bc211c <$_RINTError(long)>
         6938c:	e1a02000 	mov	r2, r0
         69390:	ea000006 	b	693b0 <TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)+0x1e4>
         69394:	e28d006c 	add	r0, sp, #108	; 0x6c
         69398:	e3a01000 	mov	r1, #0	; 0x0
         6939c:	eb6794f1 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         693a0:	e1a0000d 	mov	r0, sp
         693a4:	eb6de36a 	bl	1be2154 <$NextHandler>
         693a8:	eafffff9 	b	69394 <TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)+0x1c8>
         693ac:	e3a02001 	mov	r2, #1	; 0x1
         693b0:	e1a03008 	mov	r3, r8
         693b4:	e1a01006 	mov	r1, r6
         693b8:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         693bc:	eb6d4663 	bl	1bbad50 <TEndpoint::$Snd(CBufferSegment *, unsigned long, unsigned long)>
         693c0:	e1b07000 	movs	r7, r0
         693c4:	128f0f05 	addne	r0, pc, #20	; 0x14
         693c8:	1b6de774 	blne	1be31a0 <$ThrowMsg>
         693cc:	e1a0000d 	mov	r0, sp
         693d0:	e3a01000 	mov	r1, #0	; 0x0
         693d4:	eb6794e3 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         693d8:	e28dd028 	add	sp, sp, #40	; 0x28
         693dc:	eaffff96 	b	6923c <TScriptEndpointClient::DoOutputFrame(RefVar const &, RefVar const &)+0x70>
         693e0:	456e6470 	strmib	r6, [lr, -#1136]!
         693e4:	6f696e74 	swivs	0x00696e74
         693e8:	20736e64 	rsbcss	r6, r3, r4, ror #28
         693ec:	20666169 	rsbcs	r6, r6, r9, ror #2
         693f0:	6c656400 	stcvsl	4, cr6, [r5]
    */
}

/**
 * Symbol: TScriptEndpointClient::SndComplete(TEndpointEvent *)
 * Address: 000693f4
 */
TScriptEndpointClient::SndComplete(TEndpointEvent *) {
    /*
         693f4:	e1a0c00d 	mov	ip, sp
         693f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         693fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         69400:	e1a04000 	mov	r4, r0
         69404:	e1a05001 	mov	r5, r1
         69408:	e5b10024 	ldr	r0, [r1, #36]!	; fField36
         6940c:	e3300000 	teq	r0, #0	; 0x0
         69410:	0a000003 	beq	69424 <TScriptEndpointClient::SndComplete(TEndpointEvent *)+0x30>
         69414:	e3a01001 	mov	r1, #1	; 0x1
         69418:	e1a0e00f 	mov	lr, pc
         6941c:	e590f000 	ldr	pc, [r0]
         69420:	ea000007 	b	69444 <TScriptEndpointClient::SndComplete(TEndpointEvent *)+0x50>
         69424:	e5950020 	ldr	r0, [r5, #32]
         69428:	e3300000 	teq	r0, #0	; 0x0
         6942c:	0a000004 	beq	69444 <TScriptEndpointClient::SndComplete(TEndpointEvent *)+0x50>
         69430:	eb6da548 	bl	1bd2958 <$free>
         69434:	e5940028 	ldr	r0, [r4, #40]	; fField40
         69438:	e5951028 	ldr	r1, [r5, #40]	; fField40
         6943c:	e0800001 	add	r0, r0, r1
         69440:	e5840028 	str	r0, [r4, #40]	; fField40
         69444:	e1a00004 	mov	r0, r4
         69448:	eb69463e 	bl	1abad48 <TScriptEndpointClient::$StopYielding(void)>
         6944c:	e5b51008 	ldr	r1, [r5, #8]!	; fField8
         69450:	e3310000 	teq	r1, #0	; 0x0
         69454:	11a00004 	movne	r0, r4
         69458:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         6945c:	1a689d04 	bne	1a90874 <TScriptEndpointClient::$DoException(long)>
         69460:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoInputSpec(RefVar const &)
 * Address: 00069464
 */
TScriptEndpointClient::DoInputSpec(RefVar const &) {
    /*
         69464:	ea68e32d 	b	1aa2120 <TScriptEndpointClient::$SetInputSpec(RefVar const &)>
    */
}

/**
 * Symbol: TScriptEndpointClient::SetInputSpec(RefVar const &)
 * Address: 00069468
 */
TScriptEndpointClient::SetInputSpec(RefVar const &) {
    /*
         69468:	e1a0c00d 	mov	ip, sp
         6946c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         69470:	e24cb004 	sub	fp, ip, #4	; 0x4
         69474:	e1a04000 	mov	r4, r0
         69478:	e1a07001 	mov	r7, r1
         6947c:	e2800034 	add	r0, r0, #52	; 0x34
         69480:	e1a09000 	mov	r9, r0
         69484:	e5911000 	ldr	r1, [r1]
         69488:	e5911000 	ldr	r1, [r1]
         6948c:	e5900000 	ldr	r0, [r0]
         69490:	e5801000 	str	r1, [r0]
         69494:	e5990000 	ldr	r0, [r9]
         69498:	e5900000 	ldr	r0, [r0]
         6949c:	e3a06000 	mov	r6, #0	; 0x0
         694a0:	e3300002 	teq	r0, #2	; 0x2
         694a4:	0a000137 	beq	69988 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x520>
         694a8:	e59f1038 	ldr	r1, [pc, #38]	; 694e8 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x80>
         694ac:	e1a00007 	mov	r0, r7
         694b0:	e3a03000 	mov	r3, #0	; 0x0
         694b4:	e3a02000 	mov	r2, #0	; 0x0
         694b8:	eb6d6b6d 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         694bc:	eb6d6322 	bl	1bc214c <$AllocateRefHandle(long)>
         694c0:	e1a05000 	mov	r5, r0
         694c4:	e5900000 	ldr	r0, [r0]
         694c8:	e2001003 	and	r1, r0, #3	; 0x3
         694cc:	e3510000 	cmp	r1, #0	; 0x0
         694d0:	1a000005 	bne	694ec <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x84>
         694d4:	01a00140 	moveq	r0, r0, asr #2
         694d8:	0a000000 	beq	694e0 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x78>
         694dc:	eb6d630e 	bl	1bc211c <$_RINTError(long)>
         694e0:	e5840038 	str	r0, [r4, #56]	; fField56
         694e4:	ea000001 	b	694f0 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x88>
         694e8:	00682250 	rsbeq	r2, r8, r0, asr r2
         694ec:	e5846038 	str	r6, [r4, #56]	; fField56
         694f0:	e59f1030 	ldr	r1, [pc, #30]	; 69528 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0xc0>
         694f4:	e1a00007 	mov	r0, r7
         694f8:	e3a03000 	mov	r3, #0	; 0x0
         694fc:	e3a02000 	mov	r2, #0	; 0x0
         69500:	eb6d6b5b 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         69504:	e5850000 	str	r0, [r5]
         69508:	e2001003 	and	r1, r0, #3	; 0x3
         6950c:	e3510000 	cmp	r1, #0	; 0x0
         69510:	1a000005 	bne	6952c <TScriptEndpointClient::SetInputSpec(RefVar const &)+0xc4>
         69514:	01a00140 	moveq	r0, r0, asr #2
         69518:	0a000000 	beq	69520 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0xb8>
         6951c:	eb6d62fe 	bl	1bc211c <$_RINTError(long)>
         69520:	e5840030 	str	r0, [r4, #48]	; fField48
         69524:	ea000001 	b	69530 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0xc8>
         69528:	006841e8 	rsbeq	r4, r8, r8, ror #3
         6952c:	e5846030 	str	r6, [r4, #48]	; fField48
         69530:	e59f1038 	ldr	r1, [pc, #38]	; 69570 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x108>
         69534:	e1a00007 	mov	r0, r7
         69538:	e3a03000 	mov	r3, #0	; 0x0
         6953c:	e3a02000 	mov	r2, #0	; 0x0
         69540:	eb6d6b4b 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         69544:	e5850000 	str	r0, [r5]
         69548:	e1a01000 	mov	r1, r0
         6954c:	e2000003 	and	r0, r0, #3	; 0x3
         69550:	e3500000 	cmp	r0, #0	; 0x0
         69554:	1a000006 	bne	69574 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x10c>
         69558:	e1a00001 	mov	r0, r1
         6955c:	01a00140 	moveq	r0, r0, asr #2
         69560:	0a000000 	beq	69568 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x100>
         69564:	eb6d62ec 	bl	1bc211c <$_RINTError(long)>
         69568:	e584008c 	str	r0, [r4, #140]	; fField140
         6956c:	ea000001 	b	69578 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x110>
         69570:	00683ab8 	streqh	r3, [r8], -#168
         69574:	e584608c 	str	r6, [r4, #140]	; fField140
         69578:	e59f10d0 	ldr	r1, [pc, #d0]	; 69650 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x1e8>
         6957c:	e1a00007 	mov	r0, r7
         69580:	e3a03000 	mov	r3, #0	; 0x0
         69584:	e3a02000 	mov	r2, #0	; 0x0
         69588:	eb6d6b39 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         6958c:	e5850000 	str	r0, [r5]
         69590:	e2500002 	subs	r0, r0, #2	; 0x2
         69594:	13a00001 	movne	r0, #1	; 0x1
         69598:	e5c40090 	strb	r0, [r4, #144]	; fField144
         6959c:	e59f10b0 	ldr	r1, [pc, #b0]	; 69654 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x1ec>
         695a0:	e1a00007 	mov	r0, r7
         695a4:	e3a03000 	mov	r3, #0	; 0x0
         695a8:	e3a02000 	mov	r2, #0	; 0x0
         695ac:	eb6d6b30 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         695b0:	e5850000 	str	r0, [r5]
         695b4:	e2001003 	and	r1, r0, #3	; 0x3
         695b8:	e3510000 	cmp	r1, #0	; 0x0
         695bc:	13a00b01 	movne	r0, #1024	; 0x400
         695c0:	1a000002 	bne	695d0 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x168>
         695c4:	01a00140 	moveq	r0, r0, asr #2
         695c8:	0a000000 	beq	695d0 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x168>
         695cc:	eb6d62d2 	bl	1bc211c <$_RINTError(long)>
         695d0:	e584003c 	str	r0, [r4, #60]
         695d4:	e59f107c 	ldr	r1, [pc, #7c]	; 69658 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x1f0>
         695d8:	e1a00007 	mov	r0, r7
         695dc:	e3a03000 	mov	r3, #0	; 0x0
         695e0:	e3a02000 	mov	r2, #0	; 0x0
         695e4:	eb6d6b22 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         695e8:	e5850000 	str	r0, [r5]
         695ec:	e2001003 	and	r1, r0, #3	; 0x3
         695f0:	e3310002 	teq	r1, #2	; 0x2
         695f4:	03a01003 	moveq	r1, #3	; 0x3
         695f8:	00010140 	andeq	r0, r1, r0, asr #2
         695fc:	03300001 	teqeq	r0, #1	; 0x1
         69600:	1a000015 	bne	6965c <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x1f4>
         69604:	e3a00001 	mov	r0, #1	; 0x1
         69608:	e5c40040 	strb	r0, [r4, #64]	; fField64
         6960c:	e5950000 	ldr	r0, [r5]
         69610:	e2002003 	and	r2, r0, #3	; 0x3
         69614:	e3320002 	teq	r2, #2	; 0x2
         69618:	00011140 	andeq	r1, r1, r0, asr #2
         6961c:	03310001 	teqeq	r1, #1	; 0x1
         69620:	01a00140 	moveq	r0, r0, asr #2
         69624:	01a00140 	moveq	r0, r0, asr #2
         69628:	01a00800 	moveq	r0, r0, lsl #16
         6962c:	01a00820 	moveq	r0, r0, lsr #16
         69630:	0a000000 	beq	69638 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x1d0>
         69634:	eb6d62b7 	bl	1bc2118 <$_RCHARError(long)>
         69638:	e1a00800 	mov	r0, r0, lsl #16
         6963c:	e1a00820 	mov	r0, r0, lsr #16
         69640:	e594102c 	ldr	r1, [r4, #44]
         69644:	eb0000ee 	bl	69a04 <TScriptEndpointClient::DoFlushPartial(void)+0x54>
         69648:	e5c40041 	strb	r0, [r4, #65]	; fField65
         6964c:	ea000003 	b	69660 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x1f8>
         69650:	006845f8 	streqd	r4, [r8], -#88
         69654:	00682998 	streqb	r2, [r8], -#152
         69658:	00682b70 	rsbeq	r2, r8, r0, ror fp
         6965c:	e5c46040 	strb	r6, [r4, #64]	; fField64
         69660:	e59f1030 	ldr	r1, [pc, #30]	; 69698 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x230>
         69664:	e1a00007 	mov	r0, r7
         69668:	e3a03000 	mov	r3, #0	; 0x0
         6966c:	e3a02000 	mov	r2, #0	; 0x0
         69670:	eb6d6aff 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         69674:	e5850000 	str	r0, [r5]
         69678:	e2001003 	and	r1, r0, #3	; 0x3
         6967c:	e3510000 	cmp	r1, #0	; 0x0
         69680:	1a000005 	bne	6969c <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x234>
         69684:	01a00140 	moveq	r0, r0, asr #2
         69688:	0a000000 	beq	69690 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x228>
         6968c:	eb6d62a2 	bl	1bc211c <$_RINTError(long)>
         69690:	e5840080 	str	r0, [r4, #128]
         69694:	ea000001 	b	696a0 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x238>
         69698:	00683d08 	rsbeq	r3, r8, r8, lsl #26
         6969c:	e5846080 	str	r6, [r4, #128]
         696a0:	e59f10dc 	ldr	r1, [pc, #dc]	; 69784 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x31c>
         696a4:	e1a00007 	mov	r0, r7
         696a8:	e3a03000 	mov	r3, #0	; 0x0
         696ac:	e3a02000 	mov	r2, #0	; 0x0
         696b0:	eb6d6aef 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         696b4:	e5850000 	str	r0, [r5]
         696b8:	e59f10c8 	ldr	r1, [pc, #c8]	; 69788 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x320>
         696bc:	e5911000 	ldr	r1, [r1]
         696c0:	e5911000 	ldr	r1, [r1]
         696c4:	eb6d6ad9 	bl	1bc4230 <$EQRef__FlT1>
         696c8:	e5c40042 	strb	r0, [r4, #66]
         696cc:	e59f00b8 	ldr	r0, [pc, #b8]	; 6978c <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x324>
         696d0:	e5900000 	ldr	r0, [r0]
         696d4:	e5901000 	ldr	r1, [r0]
         696d8:	e5950000 	ldr	r0, [r5]
         696dc:	eb6d6ad3 	bl	1bc4230 <$EQRef__FlT1>
         696e0:	e5c40043 	strb	r0, [r4, #67]	; fField67
         696e4:	e59f00a4 	ldr	r0, [pc, #a4]	; 69790 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x328>
         696e8:	e5900000 	ldr	r0, [r0]
         696ec:	e5901000 	ldr	r1, [r0]
         696f0:	e5950000 	ldr	r0, [r5]
         696f4:	eb6d6acd 	bl	1bc4230 <$EQRef__FlT1>
         696f8:	e5c40044 	strb	r0, [r4, #68]
         696fc:	e5d40043 	ldrb	r0, [r4, #67]	; fField67
         69700:	e59f808c 	ldr	r8, [pc, #8c]	; 69794 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x32c>	; fField8
         69704:	e3300000 	teq	r0, #0	; 0x0
         69708:	0a000037 	beq	697ec <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x384>
         6970c:	e5941070 	ldr	r1, [r4, #112]	; fField112
         69710:	e3310000 	teq	r1, #0	; 0x0
         69714:	0a00001f 	beq	69798 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x330>
         69718:	e5940078 	ldr	r0, [r4, #120]	; fField120
         6971c:	e3500004 	cmp	r0, #4	; 0x4
         69720:	3a00001c 	bcc	69798 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x330>
         69724:	e5912000 	ldr	r2, [r1]
         69728:	e5842038 	str	r2, [r4, #56]	; fField56
         6972c:	e2402004 	sub	r2, r0, #4	; 0x4
         69730:	e2810004 	add	r0, r1, #4	; 0x4
         69734:	e5842078 	str	r2, [r4, #120]	; fField120
         69738:	eb6dd605 	bl	1bdef54 <$BlockMove>
         6973c:	e5c46045 	strb	r6, [r4, #69]	; fField69
         69740:	e5940038 	ldr	r0, [r4, #56]	; fField56
         69744:	e2806040 	add	r6, r0, #64	; 0x40
         69748:	e1a01006 	mov	r1, r6
         6974c:	e5940070 	ldr	r0, [r4, #112]	; fField112
         69750:	eb6de282 	bl	1be2160 <$ReallocPtr>
         69754:	e1a07000 	mov	r7, r0
         69758:	eb6de270 	bl	1be2120 <$MemError>
         6975c:	e3300000 	teq	r0, #0	; 0x0
         69760:	0a000004 	beq	69778 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x310>
         69764:	e3a02000 	mov	r2, #0	; 0x0
         69768:	e3a010e9 	mov	r1, #233	; 0xe9
         6976c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         69770:	e5980000 	ldr	r0, [r8]
         69774:	eb6de688 	bl	1be319c <$Throw>
         69778:	e5846074 	str	r6, [r4, #116]	; fField116
         6977c:	e5847070 	str	r7, [r4, #112]	; fField112
         69780:	ea000016 	b	697e0 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x378>
         69784:	00683260 	rsbeq	r3, r8, r0, ror #4
         69788:	006848d0 	ldreqd	r4, [r8], -#128
         6978c:	00682ee8 	rsbeq	r2, r8, r8, ror #29
         69790:	006840e0 	rsbeq	r4, r8, r0, ror #1
         69794:	00371318 	eoreqs	r1, r7, r8, lsl r3
         69798:	e3a00001 	mov	r0, #1	; 0x1
         6979c:	e5c40045 	strb	r0, [r4, #69]	; fField69
         697a0:	e3310000 	teq	r1, #0	; 0x0
         697a4:	1a00000d 	bne	697e0 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x378>
         697a8:	e3a00044 	mov	r0, #68	; 0x44
         697ac:	e1a07000 	mov	r7, r0
         697b0:	eb6db4ec 	bl	1bd6b68 <$malloc>
         697b4:	e5840070 	str	r0, [r4, #112]	; fField112
         697b8:	eb6de258 	bl	1be2120 <$MemError>
         697bc:	e3300000 	teq	r0, #0	; 0x0
         697c0:	0a000004 	beq	697d8 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x370>
         697c4:	e3a02000 	mov	r2, #0	; 0x0
         697c8:	e3a010e9 	mov	r1, #233	; 0xe9
         697cc:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         697d0:	e5980000 	ldr	r0, [r8]
         697d4:	eb6de670 	bl	1be319c <$Throw>
         697d8:	e5846078 	str	r6, [r4, #120]	; fField120
         697dc:	e5847074 	str	r7, [r4, #116]	; fField116
         697e0:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
         697e4:	e584003c 	str	r0, [r4, #60]
         697e8:	ea000035 	b	698c4 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x45c>
         697ec:	e594003c 	ldr	r0, [r4, #60]
         697f0:	e2807040 	add	r7, r0, #64	; 0x40
         697f4:	e5940070 	ldr	r0, [r4, #112]	; fField112
         697f8:	e3300000 	teq	r0, #0	; 0x0
         697fc:	0a00001f 	beq	69880 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x418>
         69800:	e5940074 	ldr	r0, [r4, #116]	; fField116
         69804:	e1300007 	teq	r0, r7
         69808:	0a00002a 	beq	698b8 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x450>
         6980c:	e1a00007 	mov	r0, r7
         69810:	eb6db4d4 	bl	1bd6b68 <$malloc>
         69814:	e1a0a000 	mov	sl, r0
         69818:	eb6de240 	bl	1be2120 <$MemError>
         6981c:	e3300000 	teq	r0, #0	; 0x0
         69820:	0a000004 	beq	69838 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x3d0>
         69824:	e3a02000 	mov	r2, #0	; 0x0
         69828:	e3a010e9 	mov	r1, #233	; 0xe9
         6982c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         69830:	e5980000 	ldr	r0, [r8]
         69834:	eb6de658 	bl	1be319c <$Throw>
         69838:	e5942078 	ldr	r2, [r4, #120]	; fField120
         6983c:	e1520007 	cmp	r2, r7
         69840:	e5940070 	ldr	r0, [r4, #112]	; fField112
         69844:	da000006 	ble	69864 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x3fc>
         69848:	e0421007 	sub	r1, r2, r7
         6984c:	e0800001 	add	r0, r0, r1
         69850:	e1a02007 	mov	r2, r7
         69854:	e1a0100a 	mov	r1, sl
         69858:	eb6dd5bd 	bl	1bdef54 <$BlockMove>
         6985c:	e5847078 	str	r7, [r4, #120]	; fField120
         69860:	ea000001 	b	6986c <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x404>
         69864:	e1a0100a 	mov	r1, sl
         69868:	eb6dd5b9 	bl	1bdef54 <$BlockMove>
         6986c:	e5940070 	ldr	r0, [r4, #112]	; fField112
         69870:	eb6da438 	bl	1bd2958 <$free>
         69874:	e5847074 	str	r7, [r4, #116]	; fField116
         69878:	e584a070 	str	sl, [r4, #112]	; fField112
         6987c:	ea00000d 	b	698b8 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x450>
         69880:	e1a00007 	mov	r0, r7
         69884:	eb6db4b7 	bl	1bd6b68 <$malloc>
         69888:	e1a0a000 	mov	sl, r0
         6988c:	eb6de223 	bl	1be2120 <$MemError>
         69890:	e3300000 	teq	r0, #0	; 0x0
         69894:	0a000004 	beq	698ac <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x444>
         69898:	e3a02000 	mov	r2, #0	; 0x0
         6989c:	e3a010e9 	mov	r1, #233	; 0xe9
         698a0:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         698a4:	e5980000 	ldr	r0, [r8]
         698a8:	eb6de63b 	bl	1be319c <$Throw>
         698ac:	e5846078 	str	r6, [r4, #120]	; fField120
         698b0:	e5847074 	str	r7, [r4, #116]	; fField116
         698b4:	e584a070 	str	sl, [r4, #112]	; fField112
         698b8:	e584607c 	str	r6, [r4, #124]	; fField124
         698bc:	e5846084 	str	r6, [r4, #132]	; fField132
         698c0:	e5c46088 	strb	r6, [r4, #136]	; fField136
         698c4:	e1a00004 	mov	r0, r4
         698c8:	eb68873d 	bl	1a8b5c4 <TScriptEndpointClient::$CheckForInput(void)>
         698cc:	e24dd004 	sub	sp, sp, #4	; 0x4
         698d0:	e5940030 	ldr	r0, [r4, #48]	; fField48
         698d4:	e58d0000 	str	r0, [sp]
         698d8:	e594007c 	ldr	r0, [r4, #124]	; fField124
         698dc:	e3300000 	teq	r0, #0	; 0x0
         698e0:	1a000018 	bne	69948 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x4e0>
         698e4:	e5990000 	ldr	r0, [r9]
         698e8:	e5900000 	ldr	r0, [r0]
         698ec:	e3300002 	teq	r0, #2	; 0x2
         698f0:	0a000017 	beq	69954 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x4ec>
         698f4:	e5d40089 	ldrb	r0, [r4, #137]	; fField137
         698f8:	e3300000 	teq	r0, #0	; 0x0
         698fc:	05d4008a 	ldreqb	r0, [r4, #138]	; fField138
         69900:	03300000 	teqeq	r0, #0	; 0x0
         69904:	1a000012 	bne	69954 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x4ec>
         69908:	e2840048 	add	r0, r4, #72	; 0x48
         6990c:	e1a06000 	mov	r6, r0
         69910:	e5901000 	ldr	r1, [r0]
         69914:	e1a0e00f 	mov	lr, pc
         69918:	e281f028 	add	pc, r1, #40	; 0x28
         6991c:	e1a01006 	mov	r1, r6
         69920:	e3a03000 	mov	r3, #0	; 0x0
         69924:	e92d0008 	stmdb	sp!, {r3}
         69928:	e28d3004 	add	r3, sp, #4	; 0x4
         6992c:	e3a06001 	mov	r6, #1	; 0x1
         69930:	e1a02006 	mov	r2, r6
         69934:	e5940014 	ldr	r0, [r4, #20]	; fField20
         69938:	eb6d40e9 	bl	1bb9ce4 <TEndpoint::$Rcv(CBufferSegment *, long, unsigned long *, unsigned long)>
         6993c:	e28dd004 	add	sp, sp, #4	; 0x4
         69940:	e3300000 	teq	r0, #0	; 0x0
         69944:	05c46089 	streqb	r6, [r4, #137]	; fField137
         69948:	e594007c 	ldr	r0, [r4, #124]	; fField124
         6994c:	e3300000 	teq	r0, #0	; 0x0
         69950:	1a000007 	bne	69974 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x50c>
         69954:	e5941080 	ldr	r1, [r4, #128]
         69958:	e3510000 	cmp	r1, #0	; 0x0
         6995c:	9a000004 	bls	69974 <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x50c>
         69960:	e1a00004 	mov	r0, r4
         69964:	e3a02066 	mov	r2, #102	; 0x66
         69968:	e2822c0e 	add	r2, r2, #3584	; 0xe00
         6996c:	eb6e0f45 	bl	1bed688 <TAEventHandler::$ResetIdle(unsigned long, TimeUnits)>
         69970:	ea000001 	b	6997c <TScriptEndpointClient::SetInputSpec(RefVar const &)+0x514>
         69974:	e1a00004 	mov	r0, r4
         69978:	eb6e0f5b 	bl	1bed6ec <TAEventHandler::$StopIdle(void)>
         6997c:	e1a00005 	mov	r0, r5
         69980:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         69984:	ea6d660c 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
         69988:	e3a00002 	mov	r0, #2	; 0x2
         6998c:	e584607c 	str	r6, [r4, #124]	; fField124
         69990:	e5991000 	ldr	r1, [r9]
         69994:	e5810000 	str	r0, [r1]
         69998:	e5c46040 	strb	r6, [r4, #64]	; fField64
         6999c:	e5846038 	str	r6, [r4, #56]	; fField56
         699a0:	e5846080 	str	r6, [r4, #128]
         699a4:	e584608c 	str	r6, [r4, #140]	; fField140
         699a8:	e5c46090 	strb	r6, [r4, #144]	; fField144
         699ac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoFlushPartial(void)
 * Address: 000699b0
 */
TScriptEndpointClient::DoFlushPartial(void) {
    /*
         699b0:	e1a0c00d 	mov	ip, sp
         699b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         699b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         699bc:	e1a04000 	mov	r4, r0
         699c0:	e5901078 	ldr	r1, [r0, #120]	; fField120
         699c4:	e5900084 	ldr	r0, [r0, #132]	; fField132
         699c8:	e0415000 	sub	r5, r1, r0
         699cc:	e3550000 	cmp	r5, #0	; 0x0
         699d0:	da000003 	ble	699e4 <TScriptEndpointClient::DoFlushPartial(void)+0x34>
         699d4:	e5941070 	ldr	r1, [r4, #112]	; fField112
         699d8:	e0810000 	add	r0, r1, r0
         699dc:	e1a02005 	mov	r2, r5
         699e0:	eb6dd55b 	bl	1bdef54 <$BlockMove>
         699e4:	e3a00000 	mov	r0, #0	; 0x0
         699e8:	e5840084 	str	r0, [r4, #132]	; fField132
         699ec:	e5845078 	str	r5, [r4, #120]	; fField120
         699f0:	e5c40088 	strb	r0, [r4, #136]	; fField136
         699f4:	e584007c 	str	r0, [r4, #124]	; fField124
         699f8:	e1a00004 	mov	r0, r4
         699fc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         69a00:	ea6886ef 	b	1a8b5c4 <TScriptEndpointClient::$CheckForInput(void)>
         69a04:	e1a0c00d 	mov	ip, sp
         69a08:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         69a0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         69a10:	e24dd004 	sub	sp, sp, #4	; 0x4
         69a14:	e5cd0001 	strb	r0, [sp, #1]
         69a18:	e1a00420 	mov	r0, r0, lsr #8
         69a1c:	e44d0004 	strb	r0, [sp], -#4	; fField4
         69a20:	e1a02001 	mov	r2, r1
         69a24:	e1a0100d 	mov	r1, sp
         69a28:	e28d0004 	add	r0, sp, #4	; 0x4
         69a2c:	e3a03001 	mov	r3, #1	; 0x1
         69a30:	eb6df652 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         69a34:	e4dd0008 	ldrb	r0, [sp], #8	; fField8
         69a38:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoFlushInput(void)
 * Address: 00069a3c
 */
TScriptEndpointClient::DoFlushInput(void) {
    /*
         69a3c:	e3a01000 	mov	r1, #0	; 0x0
         69a40:	e5801078 	str	r1, [r0, #120]	; fField120
         69a44:	e580107c 	str	r1, [r0, #124]	; fField124
         69a48:	e5801084 	str	r1, [r0, #132]	; fField132
         69a4c:	e5c01088 	strb	r1, [r0, #136]	; fField136
         69a50:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TScriptEndpointClient::CheckForInput(void)
 * Address: 00069a54
 */
TScriptEndpointClient::CheckForInput(void) {
    /*
         69a54:	e92d4000 	stmdb	sp!, {lr}
         69a58:	e5901078 	ldr	r1, [r0, #120]	; fField120
         69a5c:	e3510000 	cmp	r1, #0	; 0x0
         69a60:	c3a02001 	movgt	r2, #1	; 0x1
         69a64:	c5c02088 	strgtb	r2, [r0, #136]	; fField136
         69a68:	e5d02043 	ldrb	r2, [r0, #67]	; fField67
         69a6c:	e3320000 	teq	r2, #0	; 0x0
         69a70:	0a000004 	beq	69a88 <TScriptEndpointClient::CheckForInput(void)+0x34>
         69a74:	e5902038 	ldr	r2, [r0, #56]	; fField56
         69a78:	e1510002 	cmp	r1, r2
         69a7c:	ba000001 	blt	69a88 <TScriptEndpointClient::CheckForInput(void)+0x34>
         69a80:	e580207c 	str	r2, [r0, #124]	; fField124
         69a84:	ea00000b 	b	69ab8 <TScriptEndpointClient::CheckForInput(void)+0x64>
         69a88:	e5d02040 	ldrb	r2, [r0, #64]	; fField64
         69a8c:	e3320000 	teq	r2, #0	; 0x0
         69a90:	12412001 	subne	r2, r1, #1	; 0x1
         69a94:	1590c070 	ldrne	ip, [r0, #112]	; fField112
         69a98:	13310000 	teqne	r1, #0	; 0x0
         69a9c:	0a00000a 	beq	69acc <TScriptEndpointClient::CheckForInput(void)+0x78>
         69aa0:	e5d03041 	ldrb	r3, [r0, #65]	; fField65
         69aa4:	e4dce001 	ldrb	lr, [ip], #1
         69aa8:	e13e0003 	teq	lr, r3
         69aac:	1a000003 	bne	69ac0 <TScriptEndpointClient::CheckForInput(void)+0x6c>
         69ab0:	e0411002 	sub	r1, r1, r2
         69ab4:	e580107c 	str	r1, [r0, #124]	; fField124
         69ab8:	e8bd4000 	ldmia	sp!, {lr}
         69abc:	ea68d10b 	b	1a9def0 <TScriptEndpointClient::$PostInput(void)>
         69ac0:	e1b0e002 	movs	lr, r2
         69ac4:	e2422001 	sub	r2, r2, #1	; 0x1
         69ac8:	1afffff5 	bne	69aa4 <TScriptEndpointClient::CheckForInput(void)+0x50>
         69acc:	e5902038 	ldr	r2, [r0, #56]	; fField56
         69ad0:	e3520000 	cmp	r2, #0	; 0x0
         69ad4:	d8bd8000 	ldmleia	sp!, {pc}
         69ad8:	e1510002 	cmp	r1, r2
         69adc:	aaffffe7 	bge	69a80 <TScriptEndpointClient::CheckForInput(void)+0x2c>
         69ae0:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::PostInput(void)
 * Address: 00069ae4
 */
TScriptEndpointClient::PostInput(void) {
    /*
         69ae4:	e1a0c00d 	mov	ip, sp
         69ae8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         69aec:	e24cb004 	sub	fp, ip, #4	; 0x4
         69af0:	e1a04000 	mov	r4, r0
         69af4:	e2800034 	add	r0, r0, #52	; 0x34
         69af8:	e1a05000 	mov	r5, r0
         69afc:	e5900000 	ldr	r0, [r0]
         69b00:	e5900000 	ldr	r0, [r0]
         69b04:	e3300002 	teq	r0, #2	; 0x2
         69b08:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         69b0c:	e24dd004 	sub	sp, sp, #4	; 0x4
         69b10:	eb6d618d 	bl	1bc214c <$AllocateRefHandle(long)>
         69b14:	e58d0000 	str	r0, [sp]
         69b18:	e1a00005 	mov	r0, r5
         69b1c:	e59f10f4 	ldr	r1, [pc, #f4]	; 69c18 <TScriptEndpointClient::PostInput(void)+0x134>
         69b20:	e1a08001 	mov	r8, r1
         69b24:	e3a03000 	mov	r3, #0	; 0x0
         69b28:	e3a02000 	mov	r2, #0	; 0x0
         69b2c:	eb6d69d0 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         69b30:	eb6d6185 	bl	1bc214c <$AllocateRefHandle(long)>
         69b34:	e1a06000 	mov	r6, r0
         69b38:	e5900000 	ldr	r0, [r0]
         69b3c:	e3a09000 	mov	r9, #0	; 0x0
         69b40:	e3300002 	teq	r0, #2	; 0x2
         69b44:	0a00002e 	beq	69c04 <TScriptEndpointClient::PostInput(void)+0x120>
         69b48:	e1a00004 	mov	r0, r4
         69b4c:	eb689f4e 	bl	1a9188c <TScriptEndpointClient::$DoInput(void)>
         69b50:	eb6d617d 	bl	1bc214c <$AllocateRefHandle(long)>
         69b54:	e1a05000 	mov	r5, r0
         69b58:	e5900000 	ldr	r0, [r0]
         69b5c:	e3300002 	teq	r0, #2	; 0x2
         69b60:	0a000025 	beq	69bfc <TScriptEndpointClient::PostInput(void)+0x118>
         69b64:	e24dd004 	sub	sp, sp, #4	; 0x4
         69b68:	e3a00002 	mov	r0, #2	; 0x2
         69b6c:	eb68c88a 	bl	1a9bd9c <$MakeArray(long)>
         69b70:	eb6d6175 	bl	1bc214c <$AllocateRefHandle(long)>
         69b74:	e58d0000 	str	r0, [sp]
         69b78:	e2840024 	add	r0, r4, #36	; 0x24
         69b7c:	e1a07000 	mov	r7, r0
         69b80:	e5900000 	ldr	r0, [r0]
         69b84:	e1a01009 	mov	r1, r9
         69b88:	e5902000 	ldr	r2, [r0]
         69b8c:	e59d0000 	ldr	r0, [sp]
         69b90:	e5900000 	ldr	r0, [r0]
         69b94:	eb6d71ef 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         69b98:	e3a01001 	mov	r1, #1	; 0x1
         69b9c:	e5952000 	ldr	r2, [r5]
         69ba0:	e59d0000 	ldr	r0, [sp]
         69ba4:	e5900000 	ldr	r0, [r0]
         69ba8:	eb6d71ea 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         69bac:	e1a0200d 	mov	r2, sp
         69bb0:	e1a01008 	mov	r1, r8
         69bb4:	e28d0004 	add	r0, sp, #4	; 0x4
         69bb8:	eb6d6585 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
         69bbc:	e24dd004 	sub	sp, sp, #4	; 0x4
         69bc0:	e1a00007 	mov	r0, r7
         69bc4:	e59f1050 	ldr	r1, [pc, #50]	; 69c1c <TScriptEndpointClient::PostInput(void)+0x138>
         69bc8:	e3a03000 	mov	r3, #0	; 0x0
         69bcc:	e3a02000 	mov	r2, #0	; 0x0
         69bd0:	eb6d69a7 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         69bd4:	eb6d615c 	bl	1bc214c <$AllocateRefHandle(long)>
         69bd8:	e58d0000 	str	r0, [sp]
         69bdc:	e1a0100d 	mov	r1, sp
         69be0:	e1a00004 	mov	r0, r4
         69be4:	eb68e14d 	bl	1aa2120 <TScriptEndpointClient::$SetInputSpec(RefVar const &)>
         69be8:	e59d0000 	ldr	r0, [sp]
         69bec:	eb6d6572 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         69bf0:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         69bf4:	eb6d6570 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         69bf8:	e28dd004 	add	sp, sp, #4	; 0x4
         69bfc:	e1a00005 	mov	r0, r5
         69c00:	eb6d656d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         69c04:	e1a00006 	mov	r0, r6
         69c08:	eb6d656b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         69c0c:	e59d0000 	ldr	r0, [sp]
         69c10:	eb6d6569 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         69c14:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         69c18:	00683278 	rsbeq	r3, r8, r8, ror r2
         69c1c:	00683a10 	rsbeq	r3, r8, r0, lsl sl
    */
}

/**
 * Symbol: TScriptEndpointClient::DoInput(void)
 * Address: 00069c20
 */
TScriptEndpointClient::DoInput(void) {
    /*
         69c20:	e1a0c00d 	mov	ip, sp
         69c24:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         69c28:	e24cb004 	sub	fp, ip, #4	; 0x4
         69c2c:	e1a04000 	mov	r4, r0
         69c30:	e3a06002 	mov	r6, #2	; 0x2
         69c34:	e1a00006 	mov	r0, r6
         69c38:	eb6d6143 	bl	1bc214c <$AllocateRefHandle(long)>
         69c3c:	e1a05000 	mov	r5, r0
         69c40:	e3a07000 	mov	r7, #0	; 0x0
         69c44:	e594007c 	ldr	r0, [r4, #124]	; fField124
         69c48:	e3500000 	cmp	r0, #0	; 0x0
         69c4c:	da000021 	ble	69cd8 <TScriptEndpointClient::DoInput(void)+0xb8>
         69c50:	e594103c 	ldr	r1, [r4, #60]
         69c54:	e1500001 	cmp	r0, r1
         69c58:	d1a02000 	movle	r2, r0
         69c5c:	c1a02001 	movgt	r2, r1
         69c60:	e5941070 	ldr	r1, [r4, #112]	; fField112
         69c64:	e0810000 	add	r0, r1, r0
         69c68:	e0401002 	sub	r1, r0, r2
         69c6c:	e1a00004 	mov	r0, r4
         69c70:	eb6892a4 	bl	1a8e708 <TScriptEndpointClient::$ConvertBlock(unsigned char *, long)>
         69c74:	e5850000 	str	r0, [r5]
         69c78:	e594007c 	ldr	r0, [r4, #124]	; fField124
         69c7c:	e5941078 	ldr	r1, [r4, #120]	; fField120
         69c80:	e1500001 	cmp	r0, r1
         69c84:	aa000003 	bge	69c98 <TScriptEndpointClient::DoInput(void)+0x78>
         69c88:	e0412000 	sub	r2, r1, r0
         69c8c:	e5941070 	ldr	r1, [r4, #112]	; fField112
         69c90:	e0810000 	add	r0, r1, r0
         69c94:	eb6dd4ae 	bl	1bdef54 <$BlockMove>
         69c98:	e594007c 	ldr	r0, [r4, #124]	; fField124
         69c9c:	e5941078 	ldr	r1, [r4, #120]	; fField120
         69ca0:	e0410000 	sub	r0, r1, r0
         69ca4:	e2844078 	add	r4, r4, #120	; 0x78
         69ca8:	e8840081 	stmia	r4, {r0, r7}
         69cac:	e2444078 	sub	r4, r4, #120	; 0x78
         69cb0:	e5940034 	ldr	r0, [r4, #52]	; fField52
         69cb4:	e5806000 	str	r6, [r0]
         69cb8:	e5c47040 	strb	r7, [r4, #64]	; fField64
         69cbc:	e5847038 	str	r7, [r4, #56]	; fField56
         69cc0:	e5847080 	str	r7, [r4, #128]
         69cc4:	e5c47042 	strb	r7, [r4, #66]
         69cc8:	e5c47043 	strb	r7, [r4, #67]	; fField67
         69ccc:	e5c47044 	strb	r7, [r4, #68]
         69cd0:	e584708c 	str	r7, [r4, #140]	; fField140
         69cd4:	e5c47090 	strb	r7, [r4, #144]	; fField144
         69cd8:	e5954000 	ldr	r4, [r5]
         69cdc:	e1a00005 	mov	r0, r5
         69ce0:	eb6d6535 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         69ce4:	e1a00004 	mov	r0, r4
         69ce8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::ConvertBlock(unsigned char *, long)
 * Address: 00069cec
 */
TScriptEndpointClient::ConvertBlock(unsigned char *, long) {
    /*
         69cec:	e1a0c00d 	mov	ip, sp
         69cf0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         69cf4:	e24cb004 	sub	fp, ip, #4	; 0x4
         69cf8:	e1a06000 	mov	r6, r0
         69cfc:	e1a05001 	mov	r5, r1
         69d00:	e1a04002 	mov	r4, r2
         69d04:	e24dd004 	sub	sp, sp, #4	; 0x4
         69d08:	e3a07002 	mov	r7, #2	; 0x2
         69d0c:	e1a00007 	mov	r0, r7
         69d10:	eb6d610d 	bl	1bc214c <$AllocateRefHandle(long)>
         69d14:	e58d0000 	str	r0, [sp]
         69d18:	e5d60042 	ldrb	r0, [r6, #66]
         69d1c:	e3300000 	teq	r0, #0	; 0x0
         69d20:	0a000010 	beq	69d68 <TScriptEndpointClient::ConvertBlock(unsigned char *, long)+0x7c>
         69d24:	e2840001 	add	r0, r4, #1	; 0x1
         69d28:	e1a01080 	mov	r1, r0, lsl #1
         69d2c:	e59f0030 	ldr	r0, [pc, #30]	; 69d64 <TScriptEndpointClient::ConvertBlock(unsigned char *, long)+0x78>
         69d30:	eb6d6101 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
         69d34:	e59d1000 	ldr	r1, [sp]
         69d38:	e5810000 	str	r0, [r1]
         69d3c:	e3300002 	teq	r0, #2	; 0x2
         69d40:	0a000074 	beq	69f18 <TScriptEndpointClient::ConvertBlock(unsigned char *, long)+0x22c>
         69d44:	e1a0000d 	mov	r0, sp
         69d48:	eb6d650d 	bl	1bc3184 <$GetCString(RefVar const &)>
         69d4c:	e1a01000 	mov	r1, r0
         69d50:	e1a03004 	mov	r3, r4
         69d54:	e1a00005 	mov	r0, r5
         69d58:	e5b6202c 	ldr	r2, [r6, #44]!
         69d5c:	eb6df588 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         69d60:	ea00006c 	b	69f18 <TScriptEndpointClient::ConvertBlock(unsigned char *, long)+0x22c>
         69d64:	006848d0 	ldreqd	r4, [r8], -#128
         69d68:	e5d60043 	ldrb	r0, [r6, #67]	; fField67
         69d6c:	e3300000 	teq	r0, #0	; 0x0
         69d70:	0a000033 	beq	69e44 <TScriptEndpointClient::ConvertBlock(unsigned char *, long)+0x158>
         69d74:	e24dd028 	sub	sp, sp, #40	; 0x28
         69d78:	e1a0000d 	mov	r0, sp
         69d7c:	eb6de920 	bl	1be4204 <CBufferSegment::$__ct(void)>
         69d80:	e3e03000 	mvn	r3, #0	; 0x0
         69d84:	e3a02000 	mov	r2, #0	; 0x0
         69d88:	e92d000c 	stmdb	sp!, {r2, r3}
         69d8c:	e1a02004 	mov	r2, r4
         69d90:	e1a01005 	mov	r1, r5
         69d94:	e28d0008 	add	r0, sp, #8	; 0x8
         69d98:	e3a03000 	mov	r3, #0	; 0x0
         69d9c:	eb6dfdc2 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         69da0:	e28dd008 	add	sp, sp, #8	; 0x8
         69da4:	e3300000 	teq	r0, #0	; 0x0
         69da8:	1a00001f 	bne	69e2c <TScriptEndpointClient::ConvertBlock(unsigned char *, long)+0x140>
         69dac:	e24dd014 	sub	sp, sp, #20	; 0x14
         69db0:	e1a0000d 	mov	r0, sp
         69db4:	e3a01000 	mov	r1, #0	; 0x0
         69db8:	eb6de91f 	bl	1be423c <CNullPipe::$__ct(long)>
         69dbc:	e28d1014 	add	r1, sp, #20	; 0x14
         69dc0:	e1a0000d 	mov	r0, sp
         69dc4:	e3a03000 	mov	r3, #0	; 0x0
         69dc8:	e3a02000 	mov	r2, #0	; 0x0
         69dcc:	eb6dfdb0 	bl	1be9494 <CBufferPipe::$Init(CBufferSegment *, CBufferSegment *, unsigned char)>
         69dd0:	e1a0000d 	mov	r0, sp
         69dd4:	e3e02000 	mvn	r2, #0	; 0x0
         69dd8:	e3a01000 	mov	r1, #0	; 0x0
         69ddc:	e59d3000 	ldr	r3, [sp]
         69de0:	e1a0e00f 	mov	lr, pc
         69de4:	e283f004 	add	pc, r3, #4	; 0x4
         69de8:	e24dd010 	sub	sp, sp, #16	; 0x10
         69dec:	e28d1010 	add	r1, sp, #16	; 0x10
         69df0:	e1a0000d 	mov	r0, sp
         69df4:	eb6d5cbb 	bl	1bc10e8 <TObjectReader::$__ct(CPipe &)>
         69df8:	e1a0000d 	mov	r0, sp
         69dfc:	eb6d7142 	bl	1bc630c <TObjectReader::$Read(void)>
         69e00:	e59d104c 	ldr	r1, [sp, #76]
         69e04:	e5810000 	str	r0, [r1]
         69e08:	e1a0000d 	mov	r0, sp
         69e0c:	e3a01000 	mov	r1, #0	; 0x0
         69e10:	eb679256 	bl	1a4e770 <TObjectReader::$__dt(void)>
         69e14:	e28dd010 	add	sp, sp, #16	; 0x10
         69e18:	e1a0000d 	mov	r0, sp
         69e1c:	e3a01000 	mov	r1, #0	; 0x0
         69e20:	e1a0e00f 	mov	lr, pc
         69e24:	e59df000 	ldr	pc, [sp]
         69e28:	e28dd014 	add	sp, sp, #20	; 0x14
         69e2c:	e1a0000d 	mov	r0, sp
         69e30:	e3a01000 	mov	r1, #0	; 0x0
         69e34:	e1a0e00f 	mov	lr, pc
         69e38:	e59df000 	ldr	pc, [sp]
         69e3c:	e28dd028 	add	sp, sp, #40	; 0x28
         69e40:	ea000034 	b	69f18 <TScriptEndpointClient::ConvertBlock(unsigned char *, long)+0x22c>
         69e44:	e5d60044 	ldrb	r0, [r6, #68]
         69e48:	e3300000 	teq	r0, #0	; 0x0
         69e4c:	0a000019 	beq	69eb8 <TScriptEndpointClient::ConvertBlock(unsigned char *, long)+0x1cc>
         69e50:	e24dd004 	sub	sp, sp, #4	; 0x4
         69e54:	e1a00007 	mov	r0, r7
         69e58:	eb6d60bb 	bl	1bc214c <$AllocateRefHandle(long)>
         69e5c:	e58d0000 	str	r0, [sp]
         69e60:	e1a0000d 	mov	r0, sp
         69e64:	e1a01004 	mov	r1, r4
         69e68:	eb6d60b3 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
         69e6c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         69e70:	e5810000 	str	r0, [r1]
         69e74:	e59d0000 	ldr	r0, [sp]
         69e78:	eb6d64cf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         69e7c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         69e80:	e5900000 	ldr	r0, [r0]
         69e84:	eb6d6d0a 	bl	1bc52b4 <$LockRef(long)>
         69e88:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         69e8c:	e5900000 	ldr	r0, [r0]
         69e90:	eb6d60b1 	bl	1bc215c <$BinaryData(long)>
         69e94:	e1a01000 	mov	r1, r0
         69e98:	e1a02004 	mov	r2, r4
         69e9c:	e1a00005 	mov	r0, r5
         69ea0:	eb6dd42b 	bl	1bdef54 <$BlockMove>
         69ea4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         69ea8:	e5900000 	ldr	r0, [r0]
         69eac:	eb6d796f 	bl	1bc8470 <$UnlockRef(long)>
         69eb0:	e28dd004 	add	sp, sp, #4	; 0x4
         69eb4:	ea000017 	b	69f18 <TScriptEndpointClient::ConvertBlock(unsigned char *, long)+0x22c>
         69eb8:	e1a00004 	mov	r0, r4
         69ebc:	eb68c7b6 	bl	1a9bd9c <$MakeArray(long)>
         69ec0:	e59d1000 	ldr	r1, [sp]
         69ec4:	e5810000 	str	r0, [r1]
         69ec8:	e3300002 	teq	r0, #2	; 0x2
         69ecc:	0a000011 	beq	69f18 <TScriptEndpointClient::ConvertBlock(unsigned char *, long)+0x22c>
         69ed0:	e3a06000 	mov	r6, #0	; 0x0
         69ed4:	e3540000 	cmp	r4, #0	; 0x0
         69ed8:	9a00000e 	bls	69f18 <TScriptEndpointClient::ConvertBlock(unsigned char *, long)+0x22c>
         69edc:	e1a08006 	mov	r8, r6
         69ee0:	e4d50001 	ldrb	r0, [r5], #1
         69ee4:	e1a00100 	mov	r0, r0, lsl #2
         69ee8:	eb6d6097 	bl	1bc214c <$AllocateRefHandle(long)>
         69eec:	e1a07000 	mov	r7, r0
         69ef0:	e1a01008 	mov	r1, r8
         69ef4:	e5902000 	ldr	r2, [r0]
         69ef8:	e59d0000 	ldr	r0, [sp]
         69efc:	e5900000 	ldr	r0, [r0]
         69f00:	eb6d7114 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         69f04:	e1a00007 	mov	r0, r7
         69f08:	eb6d64ab 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         69f0c:	e2866001 	add	r6, r6, #1	; 0x1
         69f10:	e1560004 	cmp	r6, r4
         69f14:	3afffff0 	bcc	69edc <TScriptEndpointClient::ConvertBlock(unsigned char *, long)+0x1f0>
         69f18:	e59d0000 	ldr	r0, [sp]
         69f1c:	e5904000 	ldr	r4, [r0]
         69f20:	eb6d64a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         69f24:	e1a00004 	mov	r0, r4
         69f28:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::RcvComplete(TEndpointEvent *)
 * Address: 00069f2c
 */
TScriptEndpointClient::RcvComplete(TEndpointEvent *) {
    /*
         69f2c:	e1a0c00d 	mov	ip, sp
         69f30:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         69f34:	e24cb004 	sub	fp, ip, #4	; 0x4
         69f38:	e1a04000 	mov	r4, r0
         69f3c:	e1a05001 	mov	r5, r1
         69f40:	e1a00001 	mov	r0, r1
         69f44:	e3a01000 	mov	r1, #0	; 0x0
         69f48:	e5c41089 	strb	r1, [r4, #137]	; fField137
         69f4c:	e2847048 	add	r7, r4, #72	; 0x48
         69f50:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
         69f54:	e3310000 	teq	r1, #0	; 0x0
         69f58:	1a00007a 	bne	6a148 <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x21c>
         69f5c:	e3a01001 	mov	r1, #1	; 0x1
         69f60:	e5c4108a 	strb	r1, [r4, #138]	; fField138
         69f64:	e594007c 	ldr	r0, [r4, #124]	; fField124
         69f68:	e3300000 	teq	r0, #0	; 0x0
         69f6c:	05c41088 	streqb	r1, [r4, #136]	; fField136
         69f70:	e1a00007 	mov	r0, r7
         69f74:	e5971000 	ldr	r1, [r7]
         69f78:	e1a0e00f 	mov	lr, pc
         69f7c:	e281f010 	add	pc, r1, #16	; 0x10
         69f80:	e1a06000 	mov	r6, r0
         69f84:	e3700001 	cmn	r0, #1	; 0x1
         69f88:	0a00006a 	beq	6a138 <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x20c>
         69f8c:	e59f91b0 	ldr	r9, [pc, #1b0]	; 6a144 <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x218>
         69f90:	e3360000 	teq	r6, #0	; 0x0
         69f94:	1a000002 	bne	69fa4 <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x78>
         69f98:	e594008c 	ldr	r0, [r4, #140]	; fField140
         69f9c:	e3300000 	teq	r0, #0	; 0x0
         69fa0:	11a06000 	movne	r6, r0
         69fa4:	e5d40090 	ldrb	r0, [r4, #144]	; fField144
         69fa8:	e3300000 	teq	r0, #0	; 0x0
         69fac:	1206607f 	andne	r6, r6, #127	; 0x7f
         69fb0:	e5942078 	ldr	r2, [r4, #120]	; fField120
         69fb4:	e2821001 	add	r1, r2, #1	; 0x1
         69fb8:	e5841078 	str	r1, [r4, #120]	; fField120
         69fbc:	e5941070 	ldr	r1, [r4, #112]	; fField112
         69fc0:	e7c16002 	strb	r6, [r1, r2]
         69fc4:	e5d40043 	ldrb	r0, [r4, #67]	; fField67
         69fc8:	e3300000 	teq	r0, #0	; 0x0
         69fcc:	15d40045 	ldrneb	r0, [r4, #69]	; fField69
         69fd0:	13300000 	teqne	r0, #0	; 0x0
         69fd4:	0a00001b 	beq	6a048 <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x11c>
         69fd8:	e5940078 	ldr	r0, [r4, #120]	; fField120
         69fdc:	e3500004 	cmp	r0, #4	; 0x4
         69fe0:	3a000018 	bcc	6a048 <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x11c>
         69fe4:	e5941070 	ldr	r1, [r4, #112]	; fField112
         69fe8:	e5912000 	ldr	r2, [r1]
         69fec:	e5842038 	str	r2, [r4, #56]	; fField56
         69ff0:	e2402004 	sub	r2, r0, #4	; 0x4
         69ff4:	e2810004 	add	r0, r1, #4	; 0x4
         69ff8:	e5842078 	str	r2, [r4, #120]	; fField120
         69ffc:	eb6dd3d4 	bl	1bdef54 <$BlockMove>
         6a000:	e3a00000 	mov	r0, #0	; 0x0
         6a004:	e5c40045 	strb	r0, [r4, #69]	; fField69
         6a008:	e5940038 	ldr	r0, [r4, #56]	; fField56
         6a00c:	e2808040 	add	r8, r0, #64	; 0x40
         6a010:	e1a01008 	mov	r1, r8
         6a014:	e5940070 	ldr	r0, [r4, #112]	; fField112
         6a018:	eb6de050 	bl	1be2160 <$ReallocPtr>
         6a01c:	e1a0a000 	mov	sl, r0
         6a020:	eb6de03e 	bl	1be2120 <$MemError>
         6a024:	e3300000 	teq	r0, #0	; 0x0
         6a028:	0a000004 	beq	6a040 <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x114>
         6a02c:	e3a02000 	mov	r2, #0	; 0x0
         6a030:	e3a010e9 	mov	r1, #233	; 0xe9
         6a034:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         6a038:	e5990000 	ldr	r0, [r9]
         6a03c:	eb6de456 	bl	1be319c <$Throw>
         6a040:	e5848074 	str	r8, [r4, #116]	; fField116
         6a044:	e584a070 	str	sl, [r4, #112]	; fField112
         6a048:	e2841074 	add	r1, r4, #116	; 0x74
         6a04c:	e8910003 	ldmia	r1, {r0, r1}
         6a050:	e1310000 	teq	r1, r0
         6a054:	1a000014 	bne	6a0ac <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x180>
         6a058:	e2402040 	sub	r2, r0, #64	; 0x40
         6a05c:	e5941070 	ldr	r1, [r4, #112]	; fField112
         6a060:	e2810040 	add	r0, r1, #64	; 0x40
         6a064:	eb6dd3ba 	bl	1bdef54 <$BlockMove>
         6a068:	e5940078 	ldr	r0, [r4, #120]	; fField120
         6a06c:	e2400040 	sub	r0, r0, #64	; 0x40
         6a070:	e5840078 	str	r0, [r4, #120]	; fField120
         6a074:	e5940084 	ldr	r0, [r4, #132]	; fField132
         6a078:	e3500000 	cmp	r0, #0	; 0x0
         6a07c:	da000003 	ble	6a090 <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x164>
         6a080:	e2500040 	subs	r0, r0, #64	; 0x40
         6a084:	e5840084 	str	r0, [r4, #132]	; fField132
         6a088:	43a00000 	movmi	r0, #0	; 0x0
         6a08c:	45840084 	strmi	r0, [r4, #132]	; fField132
         6a090:	e594007c 	ldr	r0, [r4, #124]	; fField124
         6a094:	e3500000 	cmp	r0, #0	; 0x0
         6a098:	da000003 	ble	6a0ac <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x180>
         6a09c:	e2500040 	subs	r0, r0, #64	; 0x40
         6a0a0:	e584007c 	str	r0, [r4, #124]	; fField124
         6a0a4:	43a00000 	movmi	r0, #0	; 0x0
         6a0a8:	4584007c 	strmi	r0, [r4, #124]	; fField124
         6a0ac:	e5940038 	ldr	r0, [r4, #56]	; fField56
         6a0b0:	e3500000 	cmp	r0, #0	; 0x0
         6a0b4:	da000002 	ble	6a0c4 <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x198>
         6a0b8:	e5941078 	ldr	r1, [r4, #120]	; fField120
         6a0bc:	e1310000 	teq	r1, r0
         6a0c0:	0a000011 	beq	6a10c <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x1e0>
         6a0c4:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         6a0c8:	e3300000 	teq	r0, #0	; 0x0
         6a0cc:	0a000002 	beq	6a0dc <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x1b0>
         6a0d0:	e5d40041 	ldrb	r0, [r4, #65]	; fField65
         6a0d4:	e1300006 	teq	r0, r6
         6a0d8:	0a00000b 	beq	6a10c <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x1e0>
         6a0dc:	e5940030 	ldr	r0, [r4, #48]	; fField48
         6a0e0:	e3100002 	tst	r0, #2	; 0x2
         6a0e4:	0a00000c 	beq	6a11c <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x1f0>
         6a0e8:	e595002c 	ldr	r0, [r5, #44]
         6a0ec:	e3100001 	tst	r0, #1	; 0x1
         6a0f0:	1a000009 	bne	6a11c <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x1f0>
         6a0f4:	e1a00007 	mov	r0, r7
         6a0f8:	e5971000 	ldr	r1, [r7]
         6a0fc:	e1a0e00f 	mov	lr, pc
         6a100:	e281f004 	add	pc, r1, #4	; 0x4
         6a104:	e3700001 	cmn	r0, #1	; 0x1
         6a108:	1a000003 	bne	6a11c <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x1f0>
         6a10c:	e5940078 	ldr	r0, [r4, #120]	; fField120
         6a110:	e584007c 	str	r0, [r4, #124]	; fField124
         6a114:	e1a00004 	mov	r0, r4
         6a118:	eb68cf74 	bl	1a9def0 <TScriptEndpointClient::$PostInput(void)>
         6a11c:	e1a00007 	mov	r0, r7
         6a120:	e5971000 	ldr	r1, [r7]
         6a124:	e1a0e00f 	mov	lr, pc
         6a128:	e281f010 	add	pc, r1, #16	; 0x10
         6a12c:	e1a06000 	mov	r6, r0
         6a130:	e3700001 	cmn	r0, #1	; 0x1
         6a134:	1affff95 	bne	69f90 <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x64>
         6a138:	e3a01000 	mov	r1, #0	; 0x0
         6a13c:	e5c4108a 	strb	r1, [r4, #138]	; fField138
         6a140:	ea000002 	b	6a150 <TScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x224>
         6a144:	00371318 	eoreqs	r1, r7, r8, lsl r3
         6a148:	e1a00004 	mov	r0, r4
         6a14c:	eb6899c8 	bl	1a90874 <TScriptEndpointClient::$DoException(long)>
         6a150:	e594007c 	ldr	r0, [r4, #124]	; fField124
         6a154:	e3300000 	teq	r0, #0	; 0x0
         6a158:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         6a15c:	e5940034 	ldr	r0, [r4, #52]	; fField52
         6a160:	e5900000 	ldr	r0, [r0]
         6a164:	e3300002 	teq	r0, #2	; 0x2
         6a168:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         6a16c:	e24dd004 	sub	sp, sp, #4	; 0x4
         6a170:	e5940030 	ldr	r0, [r4, #48]	; fField48
         6a174:	e58d0000 	str	r0, [sp]
         6a178:	e1a00007 	mov	r0, r7
         6a17c:	e5971000 	ldr	r1, [r7]
         6a180:	e1a0e00f 	mov	lr, pc
         6a184:	e281f028 	add	pc, r1, #40	; 0x28
         6a188:	e1a01007 	mov	r1, r7
         6a18c:	e3a03000 	mov	r3, #0	; 0x0
         6a190:	e92d0008 	stmdb	sp!, {r3}
         6a194:	e28d3004 	add	r3, sp, #4	; 0x4
         6a198:	e3a05001 	mov	r5, #1	; 0x1
         6a19c:	e1a02005 	mov	r2, r5
         6a1a0:	e5940014 	ldr	r0, [r4, #20]	; fField20
         6a1a4:	eb6d3ece 	bl	1bb9ce4 <TEndpoint::$Rcv(CBufferSegment *, long, unsigned long *, unsigned long)>
         6a1a8:	e28dd004 	add	sp, sp, #4	; 0x4
         6a1ac:	e3300000 	teq	r0, #0	; 0x0
         6a1b0:	05c45089 	streqb	r5, [r4, #137]	; fField137
         6a1b4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::OptMgmtComplete(TEndpointEvent *)
 * Address: 0006a1b8
 */
TScriptEndpointClient::OptMgmtComplete(TEndpointEvent *) {
    /*
         6a1b8:	e1a0c00d 	mov	ip, sp
         6a1bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6a1c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6a1c4:	e1a04000 	mov	r4, r0
         6a1c8:	e1a05001 	mov	r5, r1
         6a1cc:	eb6942dd 	bl	1abad48 <TScriptEndpointClient::$StopYielding(void)>
         6a1d0:	e5b51008 	ldr	r1, [r5, #8]!	; fField8
         6a1d4:	e3310000 	teq	r1, #0	; 0x0
         6a1d8:	11a00004 	movne	r0, r4
         6a1dc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         6a1e0:	1a6899a3 	bne	1a90874 <TScriptEndpointClient::$DoException(long)>
         6a1e4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0006a1e8
 */
TScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         6a1e8:	e1a0c00d 	mov	ip, sp
         6a1ec:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         6a1f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6a1f4:	e1a04000 	mov	r4, r0
         6a1f8:	e5d00088 	ldrb	r0, [r0, #136]	; fField136
         6a1fc:	e3300000 	teq	r0, #0	; 0x0
         6a200:	0a00003e 	beq	6a300 <TScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x118>
         6a204:	e2840034 	add	r0, r4, #52	; 0x34
         6a208:	e1a08000 	mov	r8, r0
         6a20c:	e5900000 	ldr	r0, [r0]
         6a210:	e5900000 	ldr	r0, [r0]
         6a214:	e3300002 	teq	r0, #2	; 0x2
         6a218:	0a000038 	beq	6a300 <TScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x118>
         6a21c:	e1a00008 	mov	r0, r8
         6a220:	e59f1104 	ldr	r1, [pc, #104]	; 6a32c <TScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         6a224:	e1a09001 	mov	r9, r1
         6a228:	e3a03000 	mov	r3, #0	; 0x0
         6a22c:	e3a02000 	mov	r2, #0	; 0x0
         6a230:	eb6d680f 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         6a234:	eb6d5fc4 	bl	1bc214c <$AllocateRefHandle(long)>
         6a238:	e1a07000 	mov	r7, r0
         6a23c:	e5900000 	ldr	r0, [r0]
         6a240:	e3a06000 	mov	r6, #0	; 0x0
         6a244:	e3300002 	teq	r0, #2	; 0x2
         6a248:	0a000029 	beq	6a2f4 <TScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x10c>
         6a24c:	e3a00002 	mov	r0, #2	; 0x2
         6a250:	eb6d5fbd 	bl	1bc214c <$AllocateRefHandle(long)>
         6a254:	e1a05000 	mov	r5, r0
         6a258:	e5942078 	ldr	r2, [r4, #120]	; fField120
         6a25c:	e3520000 	cmp	r2, #0	; 0x0
         6a260:	da000006 	ble	6a280 <TScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x98>
         6a264:	e5941070 	ldr	r1, [r4, #112]	; fField112
         6a268:	e1a00004 	mov	r0, r4
         6a26c:	eb689125 	bl	1a8e708 <TScriptEndpointClient::$ConvertBlock(unsigned char *, long)>
         6a270:	e5850000 	str	r0, [r5]
         6a274:	e5940078 	ldr	r0, [r4, #120]	; fField120
         6a278:	e5840084 	str	r0, [r4, #132]	; fField132
         6a27c:	e5c46088 	strb	r6, [r4, #136]	; fField136
         6a280:	e5950000 	ldr	r0, [r5]
         6a284:	e3300002 	teq	r0, #2	; 0x2
         6a288:	0a000017 	beq	6a2ec <TScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x104>
         6a28c:	e24dd004 	sub	sp, sp, #4	; 0x4
         6a290:	e3a00002 	mov	r0, #2	; 0x2
         6a294:	eb68c6c0 	bl	1a9bd9c <$MakeArray(long)>
         6a298:	eb6d5fab 	bl	1bc214c <$AllocateRefHandle(long)>
         6a29c:	e58d0000 	str	r0, [sp]
         6a2a0:	e5940024 	ldr	r0, [r4, #36]	; fField36
         6a2a4:	e1a01006 	mov	r1, r6
         6a2a8:	e5902000 	ldr	r2, [r0]
         6a2ac:	e59d0000 	ldr	r0, [sp]
         6a2b0:	e5900000 	ldr	r0, [r0]
         6a2b4:	eb6d7027 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         6a2b8:	e3a01001 	mov	r1, #1	; 0x1
         6a2bc:	e5952000 	ldr	r2, [r5]
         6a2c0:	e59d0000 	ldr	r0, [sp]
         6a2c4:	e5900000 	ldr	r0, [r0]
         6a2c8:	eb6d7022 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         6a2cc:	e1a00008 	mov	r0, r8
         6a2d0:	e1a0200d 	mov	r2, sp
         6a2d4:	e1a01009 	mov	r1, r9
         6a2d8:	eb6d63bd 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
         6a2dc:	eb69f441 	bl	1ae73e8 <$CheckForDeferredActions(void)>
         6a2e0:	e59d0000 	ldr	r0, [sp]
         6a2e4:	eb6d63b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6a2e8:	e28dd004 	add	sp, sp, #4	; 0x4
         6a2ec:	e1a00005 	mov	r0, r5
         6a2f0:	eb6d63b1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6a2f4:	e5c46088 	strb	r6, [r4, #136]	; fField136
         6a2f8:	e1a00007 	mov	r0, r7
         6a2fc:	eb6d63ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6a300:	e594007c 	ldr	r0, [r4, #124]	; fField124
         6a304:	e3300000 	teq	r0, #0	; 0x0
         6a308:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         6a30c:	e5941080 	ldr	r1, [r4, #128]
         6a310:	e3510000 	cmp	r1, #0	; 0x0
         6a314:	81a00004 	movhi	r0, r4
         6a318:	83a02066 	movhi	r2, #102	; 0x66
         6a31c:	82822c0e 	addhi	r2, r2, #3584	; 0xe00
         6a320:	891b6bf0 	ldmhidb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         6a324:	8a6e0cd7 	bhi	1bed688 <TAEventHandler::$ResetIdle(unsigned long, TimeUnits)>
         6a328:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         6a32c:	00683d10 	rsbeq	r3, r8, r0, lsl sp
    */
}

/**
 * Symbol: TScriptEndpointClient::Yield(void)
 * Address: 0006a330
 */
TScriptEndpointClient::Yield(void) {
    /*
         6a330:	e1a0c00d 	mov	ip, sp
         6a334:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6a338:	e24cb004 	sub	fp, ip, #4	; 0x4
         6a33c:	e1a04000 	mov	r4, r0
         6a340:	e3a00001 	mov	r0, #1	; 0x1
         6a344:	e5c40018 	strb	r0, [r4, #24]	; fField24
         6a348:	e284001c 	add	r0, r4, #28	; 0x1c
         6a34c:	e3a01000 	mov	r1, #0	; 0x0
         6a350:	eb6d08ab 	bl	1bac604 <TPseudoSyncState::$Block(unsigned long)>
         6a354:	e3a00000 	mov	r0, #0	; 0x0
         6a358:	e5c40018 	strb	r0, [r4, #24]	; fField24
         6a35c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::StopYielding(void)
 * Address: 0006a360
 */
TScriptEndpointClient::StopYielding(void) {
    /*
         6a360:	e5d01018 	ldrb	r1, [r0, #24]	; fField24
         6a364:	e3310000 	teq	r1, #0	; 0x0
         6a368:	1280001c 	addne	r0, r0, #28	; 0x1c
         6a36c:	1a6d151b 	bne	1baf7e0 <TPseudoSyncState::$Unblock(void)>
         6a370:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TScriptEndpointClient::DoInputAvailable(void)
 * Address: 0006a3dc
 */
TScriptEndpointClient::DoInputAvailable(void) {
    /*
         6a3dc:	e590007c 	ldr	r0, [r0, #124]	; fField124
         6a3e0:	e3500000 	cmp	r0, #0	; 0x0
         6a3e4:	d3a00002 	movle	r0, #2	; 0x2
         6a3e8:	c3a0001a 	movgt	r0, #26	; 0x1a
         6a3ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TScriptEndpointClient::DoPartial(void)
 * Address: 0006a3f0
 */
TScriptEndpointClient::DoPartial(void) {
    /*
         6a3f0:	e1a0c00d 	mov	ip, sp
         6a3f4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6a3f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         6a3fc:	e1a04000 	mov	r4, r0
         6a400:	e3a00002 	mov	r0, #2	; 0x2
         6a404:	eb6d5f50 	bl	1bc214c <$AllocateRefHandle(long)>
         6a408:	e1a05000 	mov	r5, r0
         6a40c:	e3a06000 	mov	r6, #0	; 0x0
         6a410:	e5942078 	ldr	r2, [r4, #120]	; fField120
         6a414:	e3520000 	cmp	r2, #0	; 0x0
         6a418:	da000006 	ble	6a438 <TScriptEndpointClient::DoPartial(void)+0x48>
         6a41c:	e5941070 	ldr	r1, [r4, #112]	; fField112
         6a420:	e1a00004 	mov	r0, r4
         6a424:	eb6890b7 	bl	1a8e708 <TScriptEndpointClient::$ConvertBlock(unsigned char *, long)>
         6a428:	e5850000 	str	r0, [r5]
         6a42c:	e5940078 	ldr	r0, [r4, #120]	; fField120
         6a430:	e5840084 	str	r0, [r4, #132]	; fField132
         6a434:	e5c46088 	strb	r6, [r4, #136]	; fField136
         6a438:	e5954000 	ldr	r4, [r5]
         6a43c:	e1a00005 	mov	r0, r5
         6a440:	eb6d635d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6a444:	e1a00004 	mov	r0, r4
         6a448:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoReadyForOutput(RefVar const &)
 * Address: 0006a44c
 */
TScriptEndpointClient::DoReadyForOutput(RefVar const &) {
    /*
         6a44c:	e1a0c00d 	mov	ip, sp
         6a450:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6a454:	e24cb004 	sub	fp, ip, #4	; 0x4
         6a458:	e1a04000 	mov	r4, r0
         6a45c:	e3a02000 	mov	r2, #0	; 0x0
         6a460:	eb689d14 	bl	1a918b8 <TScriptEndpointClient::$DoOutputOne(RefVar const &, unsigned char *)>
         6a464:	e5b41028 	ldr	r1, [r4, #40]!	; fField40
         6a468:	e0410000 	sub	r0, r1, r0
         6a46c:	e3500000 	cmp	r0, #0	; 0x0
         6a470:	b3510b01 	cmplt	r1, #1024	; 0x400
         6a474:	a3a0001a 	movge	r0, #26	; 0x1a
         6a478:	b3a00002 	movlt	r0, #2	; 0x2
         6a47c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoOutputDone(void)
 * Address: 0006a480
 */
TScriptEndpointClient::DoOutputDone(void) {
    /*
         6a480:	e5900028 	ldr	r0, [r0, #40]	; fField40
         6a484:	e3300b01 	teq	r0, #1024	; 0x400
         6a488:	13a00002 	movne	r0, #2	; 0x2
         6a48c:	03a0001a 	moveq	r0, #26	; 0x1a
         6a490:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TScriptEndpointClient::DoBytesAvailable(void)
 * Address: 0006a494
 */
TScriptEndpointClient::DoBytesAvailable(void) {
    /*
         6a494:	e5900078 	ldr	r0, [r0, #120]	; fField120
         6a498:	e3500000 	cmp	r0, #0	; 0x0
         6a49c:	d3a00002 	movle	r0, #2	; 0x2
         6a4a0:	c3a0001a 	movgt	r0, #26	; 0x1a
         6a4a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TScriptEndpointClient::TranslateError(long)
 * Address: 0006a4a8
 */
TScriptEndpointClient::TranslateError(long) {
    /*
         6a4a8:	e1a00001 	mov	r0, r1
         6a4ac:	e281cdfa 	add	ip, r1, #16000	; 0x3e80
         6a4b0:	e37c000d 	cmn	ip, #13	; 0xd
         6a4b4:	1280cdfa 	addne	ip, r0, #16000	; 0x3e80
         6a4b8:	137c0005 	cmnne	ip, #5	; 0x5
         6a4bc:	03a000c9 	moveq	r0, #201	; 0xc9
         6a4c0:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         6a4c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TScriptEndpointClient::__ct(void)
 * Address: 0006a688
 */
TScriptEndpointClient::TScriptEndpointClient(void) {
    /*
         6a688:	e1a0c00d 	mov	ip, sp
         6a68c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6a690:	e24cb004 	sub	fp, ip, #4	; 0x4
         6a694:	e1b04000 	movs	r4, r0
         6a698:	1a000003 	bne	6a6ac <TScriptEndpointClient::__ct(void)+0x24>
         6a69c:	e3a00094 	mov	r0, #148	; 0x94
         6a6a0:	eb6d9024 	bl	1bce738 <$__nw(unsigned int)>
         6a6a4:	e1b04000 	movs	r4, r0
         6a6a8:	0a000022 	beq	6a738 <TScriptEndpointClient::__ct(void)+0xb0>
         6a6ac:	e1a00004 	mov	r0, r4
         6a6b0:	eb6d2d0d 	bl	1bb5aec <TEndpointClient::$__ct(void)>
         6a6b4:	e284001c 	add	r0, r4, #28	; 0x1c
         6a6b8:	eb6d185d 	bl	1bb0834 <TPseudoSyncState::$__ct(void)>
         6a6bc:	e3a00002 	mov	r0, #2	; 0x2
         6a6c0:	eb6d5ea1 	bl	1bc214c <$AllocateRefHandle(long)>
         6a6c4:	e3a05000 	mov	r5, #0	; 0x0
         6a6c8:	e5840024 	str	r0, [r4, #36]	; fField36
         6a6cc:	e5a05004 	str	r5, [r0, #4]!	; fField4
         6a6d0:	e3a00002 	mov	r0, #2	; 0x2
         6a6d4:	eb6d5e9c 	bl	1bc214c <$AllocateRefHandle(long)>
         6a6d8:	e5840034 	str	r0, [r4, #52]	; fField52
         6a6dc:	e5a05004 	str	r5, [r0, #4]!	; fField4
         6a6e0:	e2840048 	add	r0, r4, #72	; 0x48
         6a6e4:	eb6de6c6 	bl	1be4204 <CBufferSegment::$__ct(void)>
         6a6e8:	e59f0050 	ldr	r0, [pc, #50]	; 6a740 <TScriptEndpointClient::__ct(void)+0xb8>
         6a6ec:	e3a01002 	mov	r1, #2	; 0x2
         6a6f0:	e5840000 	str	r0, [r4]
         6a6f4:	e5940024 	ldr	r0, [r4, #36]	; fField36
         6a6f8:	e5801000 	str	r1, [r0]
         6a6fc:	e3a00b01 	mov	r0, #1024	; 0x400
         6a700:	e5840028 	str	r0, [r4, #40]	; fField40
         6a704:	e5940034 	ldr	r0, [r4, #52]	; fField52
         6a708:	e5801000 	str	r1, [r0]
         6a70c:	e5845070 	str	r5, [r4, #112]	; fField112
         6a710:	e5845080 	str	r5, [r4, #128]
         6a714:	e5845014 	str	r5, [r4, #20]	; fField20
         6a718:	e5c45018 	strb	r5, [r4, #24]	; fField24
         6a71c:	e3a00001 	mov	r0, #1	; 0x1
         6a720:	e284402c 	add	r4, r4, #44	; 0x2c
         6a724:	e8840021 	stmia	r4, {r0, r5}
         6a728:	e244402c 	sub	r4, r4, #44	; 0x2c
         6a72c:	e5c45089 	strb	r5, [r4, #137]	; fField137
         6a730:	e5c4508a 	strb	r5, [r4, #138]	; fField138
         6a734:	e584507c 	str	r5, [r4, #124]	; fField124
         6a738:	e1a00004 	mov	r0, r4
         6a73c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         6a740:	0001f100 	andeq	pc, r1, r0, lsl #2
    */
}

/**
 * Symbol: TScriptEndpointClient::__dt(void)
 * Address: 0006a918
 */
TScriptEndpointClient::~TScriptEndpointClient(void) {
    /*
         6a918:	e1a0c00d 	mov	ip, sp
         6a91c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6a920:	e24cb004 	sub	fp, ip, #4	; 0x4
         6a924:	e1a04000 	mov	r4, r0
         6a928:	e1a05001 	mov	r5, r1
         6a92c:	e59f00a4 	ldr	r0, [pc, #a4]	; 6a9d8 <TScriptEndpointClient::__dt(void)+0xc0>
         6a930:	e5840000 	str	r0, [r4]
         6a934:	e5940014 	ldr	r0, [r4, #20]	; fField20
         6a938:	e3300000 	teq	r0, #0	; 0x0
         6a93c:	1b6d34ab 	blne	1bb7bf0 <TEndpoint::$Delete(void)>
         6a940:	e5940070 	ldr	r0, [r4, #112]	; fField112
         6a944:	e3300000 	teq	r0, #0	; 0x0
         6a948:	1b6d8b64 	blne	1bcd6e0 <$__dl(void *)>
         6a94c:	e24dd004 	sub	sp, sp, #4	; 0x4
         6a950:	e2840024 	add	r0, r4, #36	; 0x24
         6a954:	e1a06000 	mov	r6, r0
         6a958:	e5900000 	ldr	r0, [r0]
         6a95c:	e5900000 	ldr	r0, [r0]
         6a960:	e3300000 	teq	r0, #0	; 0x0
         6a964:	0a000008 	beq	6a98c <TScriptEndpointClient::__dt(void)+0x74>
         6a968:	e3a00002 	mov	r0, #2	; 0x2
         6a96c:	eb6d5df6 	bl	1bc214c <$AllocateRefHandle(long)>
         6a970:	e58d0000 	str	r0, [sp]
         6a974:	e1a0200d 	mov	r2, sp
         6a978:	e1a00006 	mov	r0, r6
         6a97c:	e59f1058 	ldr	r1, [pc, #58]	; 6a9dc <TScriptEndpointClient::__dt(void)+0xc4>
         6a980:	eb6d6e78 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         6a984:	e59d0000 	ldr	r0, [sp]
         6a988:	eb6d620b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6a98c:	e28dd004 	add	sp, sp, #4	; 0x4
         6a990:	e2840048 	add	r0, r4, #72	; 0x48
         6a994:	e3a01000 	mov	r1, #0	; 0x0
         6a998:	eb6de633 	bl	1be426c <CBufferSegment::$__dt(void)>
         6a99c:	e5940034 	ldr	r0, [r4, #52]	; fField52
         6a9a0:	eb6d6205 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6a9a4:	e5960000 	ldr	r0, [r6]
         6a9a8:	eb6d6203 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6a9ac:	e284001c 	add	r0, r4, #28	; 0x1c
         6a9b0:	e3a01000 	mov	r1, #0	; 0x0
         6a9b4:	eb6d17aa 	bl	1bb0864 <TPseudoSyncState::$__dt(void)>
         6a9b8:	e1a00004 	mov	r0, r4
         6a9bc:	e3a01000 	mov	r1, #0	; 0x0
         6a9c0:	eb6d305b 	bl	1bb6b34 <TEndpointClient::$__dt(void)>
         6a9c4:	e3150001 	tst	r5, #1	; 0x1
         6a9c8:	11a00004 	movne	r0, r4
         6a9cc:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         6a9d0:	1a6d8b42 	bne	1bcd6e0 <$__dl(void *)>
         6a9d4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         6a9d8:	0001f100 	andeq	pc, r1, r0, lsl #2
         6a9dc:	006823f0 	streqd	r2, [r8], -#48	; fField48
    */
}

/**
 * Symbol: TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)
 * Address: 0006abdc
 */
TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *) {
    /*
         6abdc:	e1a0c00d 	mov	ip, sp
         6abe0:	e92dd87f 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, fp, ip, lr, pc}
         6abe4:	e24cb004 	sub	fp, ip, #4	; 0x4
         6abe8:	e24b1028 	sub	r1, fp, #40	; 0x28
         6abec:	e8910003 	ldmia	r1, {r0, r1}
         6abf0:	e5911000 	ldr	r1, [r1]
         6abf4:	e5911000 	ldr	r1, [r1]
         6abf8:	e5900024 	ldr	r0, [r0, #36]	; fField36
         6abfc:	e5801000 	str	r1, [r0]
         6ac00:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         6ac04:	e5900000 	ldr	r0, [r0]
         6ac08:	e5900000 	ldr	r0, [r0]
         6ac0c:	e3300002 	teq	r0, #2	; 0x2
         6ac10:	028f0f33 	addeq	r0, pc, #204	; 0xcc
         6ac14:	0b6de161 	bleq	1be31a0 <$ThrowMsg>
         6ac18:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         6ac1c:	e280001c 	add	r0, r0, #28	; 0x1c
         6ac20:	eb6d0aae 	bl	1bad6e0 <TPseudoSyncState::$Init(void)>
         6ac24:	e1b04000 	movs	r4, r0
         6ac28:	1a000004 	bne	6ac40 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x64>
         6ac2c:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         6ac30:	e2800048 	add	r0, r0, #72	; 0x48
         6ac34:	e3a01c02 	mov	r1, #512	; 0x200
         6ac38:	eb6dfa1a 	bl	1be94a8 <CBufferSegment::$Init(long)>
         6ac3c:	e1a04000 	mov	r4, r0
         6ac40:	e51b001c 	ldr	r0, [fp, -#28]
         6ac44:	e1b00000 	movs	r0, r0
         6ac48:	13a00001 	movne	r0, #1	; 0x1
         6ac4c:	e21050ff 	ands	r5, r0, #255	; 0xff
         6ac50:	e3a06000 	mov	r6, #0	; 0x0
         6ac54:	03340000 	teqeq	r4, #0	; 0x0
         6ac58:	1a000054 	bne	6adb0 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x1d4>
         6ac5c:	e24dd018 	sub	sp, sp, #24	; 0x18
         6ac60:	e1a0000d 	mov	r0, sp
         6ac64:	eb6d2b9e 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         6ac68:	e1a0000d 	mov	r0, sp
         6ac6c:	eb6d3802 	bl	1bb8c7c <TOptionArray::$Init(void)>
         6ac70:	e1b04000 	movs	r4, r0
         6ac74:	0a000003 	beq	6ac88 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0xac>
         6ac78:	e28f0f25 	add	r0, pc, #148	; 0x94
         6ac7c:	eb6de147 	bl	1be31a0 <$ThrowMsg>
         6ac80:	e3340000 	teq	r4, #0	; 0x0
         6ac84:	1a000045 	bne	6ada0 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x1c4>
         6ac88:	e51b0020 	ldr	r0, [fp, -#32]
         6ac8c:	e1a01000 	mov	r1, r0
         6ac90:	e5900000 	ldr	r0, [r0]
         6ac94:	e5900000 	ldr	r0, [r0]
         6ac98:	e3300002 	teq	r0, #2	; 0x2
         6ac9c:	1a000029 	bne	6ad48 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x16c>
         6aca0:	e24dd004 	sub	sp, sp, #4	; 0x4
         6aca4:	e59f1080 	ldr	r1, [pc, #80]	; 6ad2c <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x150>
         6aca8:	e3a03000 	mov	r3, #0	; 0x0
         6acac:	e3a02000 	mov	r2, #0	; 0x0
         6acb0:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         6acb4:	eb6d656e 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         6acb8:	eb6d5d23 	bl	1bc214c <$AllocateRefHandle(long)>
         6acbc:	e58d0000 	str	r0, [sp]
         6acc0:	e5900000 	ldr	r0, [r0]
         6acc4:	e3300002 	teq	r0, #2	; 0x2
         6acc8:	0a000018 	beq	6ad30 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x154>
         6accc:	e28d2004 	add	r2, sp, #4	; 0x4
         6acd0:	e1a0100d 	mov	r1, sp
         6acd4:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         6acd8:	eb688e92 	bl	1a8e728 <TScriptEndpointClient::$ConvertToOptionArray(RefVar const &, TOptionArray *)>
         6acdc:	e1a04000 	mov	r4, r0
         6ace0:	ea000014 	b	6ad38 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x15c>
         6ace4:	6e696c20 	cdpvs	12, 6, cr6, cr9, cr0, {1}
         6ace8:	656e6470 	strvsb	r6, [lr, -#1136]!
         6acec:	6f696e74 	swivs	0x00696e74
         6acf0:	20706173 	rsbcss	r6, r0, r3, ror r1
         6acf4:	73656420 	cmnvc	r5, #536870912	; 0x20000000
         6acf8:	746f2049 	strvcbt	r2, [pc], #49	; 6ad00 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x124>
         6acfc:	6e697453 	mcrvs	4, 3, r7, cr9, cr3, {2}
         6ad00:	63726970 	cmnvs	r2, #1835008	; 0x1c0000
         6ad04:	74456e64 	strvcb	r6, [r5], -#3684
         6ad08:	706f696e 	rsbvc	r6, pc, lr, ror #18
         6ad0c:	74436c69 	strvcb	r6, [r3], -#3177
         6ad10:	656e7400 	strvsb	r7, [lr, -#1024]!
         6ad14:	6e657720 	cdpvs	7, 6, cr7, cr5, cr0, {1}
         6ad18:	544f7074 	strplb	r7, [pc], #74	; 6ad20 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x144>
         6ad1c:	696f6e41 	stmvsdb	pc!, {r0, r6, r9, sl, fp, sp, lr}^
         6ad20:	72726179 	rsbvcs	r6, r2, #1073741854	; 0x4000001e
         6ad24:	20666169 	rsbcs	r6, r6, r9, ror #2
         6ad28:	6c656400 	stcvsl	4, cr6, [r5]
         6ad2c:	00682570 	rsbeq	r2, r8, r0, ror r5
         6ad30:	e3e04093 	mvn	r4, #147	; 0x93
         6ad34:	e2444c65 	sub	r4, r4, #25856	; 0x6500
         6ad38:	e59d0000 	ldr	r0, [sp]
         6ad3c:	eb6d611e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6ad40:	e28dd004 	add	sp, sp, #4	; 0x4
         6ad44:	ea000003 	b	6ad58 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x17c>
         6ad48:	e1a0200d 	mov	r2, sp
         6ad4c:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         6ad50:	eb688e74 	bl	1a8e728 <TScriptEndpointClient::$ConvertToOptionArray(RefVar const &, TOptionArray *)>
         6ad54:	e1a04000 	mov	r4, r0
         6ad58:	e3340000 	teq	r4, #0	; 0x0
         6ad5c:	1a000006 	bne	6ad7c <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x1a0>
         6ad60:	e1a0000d 	mov	r0, sp
         6ad64:	eb690218 	bl	1aab5cc <$ContainsModemService(TOptionArray *)>
         6ad68:	e3300000 	teq	r0, #0	; 0x0
         6ad6c:	0a000004 	beq	6ad84 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x1a8>
         6ad70:	e1a0000d 	mov	r0, sp
         6ad74:	eb6e1ac9 	bl	1bf18a0 <$RunModemNavigator(TOptionArray *)>
         6ad78:	e1a04000 	mov	r4, r0
         6ad7c:	e3340000 	teq	r4, #0	; 0x0
         6ad80:	1a000006 	bne	6ada0 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x1c4>
         6ad84:	e24b101c 	sub	r1, fp, #28	; 0x1c
         6ad88:	e1a0000d 	mov	r0, sp
         6ad8c:	e3a02000 	mov	r2, #0	; 0x0
         6ad90:	eb6d3382 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
         6ad94:	e1b04000 	movs	r4, r0
         6ad98:	128f0f1a 	addne	r0, pc, #104	; 0x68
         6ad9c:	1b6de0ff 	blne	1be31a0 <$ThrowMsg>
         6ada0:	e1a0000d 	mov	r0, sp
         6ada4:	e3a01000 	mov	r1, #0	; 0x0
         6ada8:	eb6d2f5f 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         6adac:	e28dd018 	add	sp, sp, #24	; 0x18
         6adb0:	e3340000 	teq	r4, #0	; 0x0
         6adb4:	1a000005 	bne	6add0 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x1f4>
         6adb8:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         6adbc:	e51b101c 	ldr	r1, [fp, -#28]
         6adc0:	e59f3058 	ldr	r3, [pc, #58]	; 6ae20 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x244>
         6adc4:	e59f2058 	ldr	r2, [pc, #58]	; 6ae24 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x248>
         6adc8:	eb6d3bad 	bl	1bb9c84 <TEndpointClient::$Init(TEndpoint *, unsigned long, unsigned long)>
         6adcc:	e1a04000 	mov	r4, r0
         6add0:	e24dd004 	sub	sp, sp, #4	; 0x4
         6add4:	e3540000 	cmp	r4, #0	; 0x0
         6add8:	1a000013 	bne	6ae2c <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x250>
         6addc:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         6ade0:	eb6879c1 	bl	1a894ec <$AddressToRef(void *)>
         6ade4:	eb6d5cd8 	bl	1bc214c <$AllocateRefHandle(long)>
         6ade8:	e58d0000 	str	r0, [sp]
         6adec:	e1a0200d 	mov	r2, sp
         6adf0:	e59f1030 	ldr	r1, [pc, #30]	; 6ae28 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x24c>
         6adf4:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         6adf8:	eb6d6d5a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         6adfc:	e59d0000 	ldr	r0, [sp]
         6ae00:	eb6d60ed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6ae04:	ea000009 	b	6ae30 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x254>
         6ae08:	6e657720 	cdpvs	7, 6, cr7, cr5, cr0, {1}
         6ae0c:	54456e64 	strplb	r6, [r5], -#3684
         6ae10:	706f696e 	rsbvc	r6, pc, lr, ror #18
         6ae14:	74206661 	strvct	r6, [r0], -#1633
         6ae18:	696c6564 	stmvsdb	ip!, {r2, r5, r6, r8, sl, sp, lr}^
         6ae1c:	00000000 	andeq	r0, r0, r0
         6ae20:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         6ae24:	656e6470 	strvsb	r6, [lr, -#1136]!
         6ae28:	006823f0 	streqd	r2, [r8], -#48	; fField48
         6ae2c:	1a000013 	bne	6ae80 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x2a4>
         6ae30:	e59f1044 	ldr	r1, [pc, #44]	; 6ae7c <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x2a0>
         6ae34:	e3a03000 	mov	r3, #0	; 0x0
         6ae38:	e3a02000 	mov	r2, #0	; 0x0
         6ae3c:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
         6ae40:	eb6d650b 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         6ae44:	eb6d5cc0 	bl	1bc214c <$AllocateRefHandle(long)>
         6ae48:	e1a04000 	mov	r4, r0
         6ae4c:	e5900000 	ldr	r0, [r0]
         6ae50:	e3300002 	teq	r0, #2	; 0x2
         6ae54:	0a000005 	beq	6ae70 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x294>
         6ae58:	e3100003 	tst	r0, #3	; 0x3
         6ae5c:	01a00140 	moveq	r0, r0, asr #2
         6ae60:	0a000000 	beq	6ae68 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x28c>
         6ae64:	eb6d5cac 	bl	1bc211c <$_RINTError(long)>
         6ae68:	e51b1028 	ldr	r1, [fp, -#40]	; fField40
         6ae6c:	e5a1002c 	str	r0, [r1, #44]!
         6ae70:	e1a00004 	mov	r0, r4
         6ae74:	eb6d60d0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6ae78:	ea000001 	b	6ae84 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x2a8>
         6ae7c:	00682b50 	rsbeq	r2, r8, r0, asr fp
         6ae80:	1a000008 	bne	6aea8 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x2cc>
         6ae84:	e3a03000 	mov	r3, #0	; 0x0
         6ae88:	e92d0008 	stmdb	sp!, {r3}
         6ae8c:	e3a02066 	mov	r2, #102	; 0x66
         6ae90:	e2822c0e 	add	r2, r2, #3584	; 0xe00
         6ae94:	e3a01000 	mov	r1, #0	; 0x0
         6ae98:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         6ae9c:	eb6df98e 	bl	1be94dc <TAEventHandler::$InitIdler(unsigned long, TimeUnits, unsigned long, unsigned char)>
         6aea0:	e28dd004 	add	sp, sp, #4	; 0x4
         6aea4:	e1a04000 	mov	r4, r0
         6aea8:	e3340000 	teq	r4, #0	; 0x0
         6aeac:	1a00001a 	bne	6af1c <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x340>
         6aeb0:	e3350000 	teq	r5, #0	; 0x0
         6aeb4:	0a000014 	beq	6af0c <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x330>
         6aeb8:	e1a01006 	mov	r1, r6
         6aebc:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         6aec0:	e5900014 	ldr	r0, [r0, #20]	; fField20
         6aec4:	eb6d3f9e 	bl	1bbad44 <TEndpoint::$SetSync(unsigned char)>
         6aec8:	e24dd004 	sub	sp, sp, #4	; 0x4
         6aecc:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         6aed0:	e2800024 	add	r0, r0, #36	; 0x24
         6aed4:	e59f102c 	ldr	r1, [pc, #2c]	; 6af08 <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x32c>
         6aed8:	e3a03000 	mov	r3, #0	; 0x0
         6aedc:	e3a02000 	mov	r2, #0	; 0x0
         6aee0:	eb6d64e3 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         6aee4:	eb6d5c98 	bl	1bc214c <$AllocateRefHandle(long)>
         6aee8:	e58d0000 	str	r0, [sp]
         6aeec:	e1a0100d 	mov	r1, sp
         6aef0:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
         6aef4:	eb68dc89 	bl	1aa2120 <TScriptEndpointClient::$SetInputSpec(RefVar const &)>
         6aef8:	e59d0000 	ldr	r0, [sp]
         6aefc:	eb6d60ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6af00:	e28dd004 	add	sp, sp, #4	; 0x4
         6af04:	ea000004 	b	6af1c <TScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x340>
         6af08:	00683a10 	rsbeq	r3, r8, r0, lsl sl
         6af0c:	e51b1028 	ldr	r1, [fp, -#40]	; fField40
         6af10:	e5910014 	ldr	r0, [r1, #20]	; fField20
         6af14:	eb6d3b6d 	bl	1bb9cd0 <TEndpoint::$Open(unsigned long)>
         6af18:	e1a04000 	mov	r4, r0
         6af1c:	e1a00004 	mov	r0, r4
         6af20:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TScriptEndpointClient::DoException(long)
 * Address: 0006b1bc
 */
TScriptEndpointClient::DoException(long) {
    /*
         6b1bc:	e1a0c00d 	mov	ip, sp
         6b1c0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         6b1c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         6b1c8:	e1a04001 	mov	r4, r1
         6b1cc:	e2800024 	add	r0, r0, #36	; 0x24
         6b1d0:	e1a06000 	mov	r6, r0
         6b1d4:	e5900000 	ldr	r0, [r0]
         6b1d8:	e5900000 	ldr	r0, [r0]
         6b1dc:	e59f50d8 	ldr	r5, [pc, #d8]	; 6b2bc <TScriptEndpointClient::DoException(long)+0x100>
         6b1e0:	e3300002 	teq	r0, #2	; 0x2
         6b1e4:	0a000038 	beq	6b2cc <TScriptEndpointClient::DoException(long)+0x110>
         6b1e8:	e1a00006 	mov	r0, r6
         6b1ec:	e59f10cc 	ldr	r1, [pc, #cc]	; 6b2c0 <TScriptEndpointClient::DoException(long)+0x104>
         6b1f0:	e1a07001 	mov	r7, r1
         6b1f4:	e3a03000 	mov	r3, #0	; 0x0
         6b1f8:	e3a02000 	mov	r2, #0	; 0x0
         6b1fc:	eb6d641c 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         6b200:	e3300002 	teq	r0, #2	; 0x2
         6b204:	0a000030 	beq	6b2cc <TScriptEndpointClient::DoException(long)+0x110>
         6b208:	e24dd00c 	sub	sp, sp, #12	; 0xc
         6b20c:	eb6d5bcb 	bl	1bc2140 <$AllocateFrame(void)>
         6b210:	eb6d5bcd 	bl	1bc214c <$AllocateRefHandle(long)>
         6b214:	e58d0008 	str	r0, [sp, #8]	; fField8
         6b218:	e5950000 	ldr	r0, [r5]
         6b21c:	eb6d6817 	bl	1bc5280 <$Intern(char *)>
         6b220:	eb6d5bc9 	bl	1bc214c <$AllocateRefHandle(long)>
         6b224:	e58d0000 	str	r0, [sp]
         6b228:	e1a0200d 	mov	r2, sp
         6b22c:	e59f1090 	ldr	r1, [pc, #90]	; 6b2c4 <TScriptEndpointClient::DoException(long)+0x108>
         6b230:	e28d0008 	add	r0, sp, #8	; 0x8
         6b234:	eb6d6c4b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         6b238:	e59d0000 	ldr	r0, [sp]
         6b23c:	eb6d5fde 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6b240:	e3a05000 	mov	r5, #0	; 0x0
         6b244:	e1a00104 	mov	r0, r4, lsl #2
         6b248:	eb6d5bbf 	bl	1bc214c <$AllocateRefHandle(long)>
         6b24c:	e58d0004 	str	r0, [sp, #4]	; fField4
         6b250:	e28d2004 	add	r2, sp, #4	; 0x4
         6b254:	e59f106c 	ldr	r1, [pc, #6c]	; 6b2c8 <TScriptEndpointClient::DoException(long)+0x10c>
         6b258:	e28d0008 	add	r0, sp, #8	; 0x8
         6b25c:	eb6d6c41 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         6b260:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         6b264:	eb6d5fd4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6b268:	e24dd004 	sub	sp, sp, #4	; 0x4
         6b26c:	e3a00001 	mov	r0, #1	; 0x1
         6b270:	eb68c2c9 	bl	1a9bd9c <$MakeArray(long)>
         6b274:	eb6d5bb4 	bl	1bc214c <$AllocateRefHandle(long)>
         6b278:	e58d0000 	str	r0, [sp]
         6b27c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         6b280:	e1a01005 	mov	r1, r5
         6b284:	e5902000 	ldr	r2, [r0]
         6b288:	e59d0000 	ldr	r0, [sp]
         6b28c:	e5900000 	ldr	r0, [r0]
         6b290:	eb6d6c30 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         6b294:	e1a00006 	mov	r0, r6
         6b298:	e1a0200d 	mov	r2, sp
         6b29c:	e1a01007 	mov	r1, r7
         6b2a0:	eb6d5fcb 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
         6b2a4:	e59d0000 	ldr	r0, [sp]
         6b2a8:	eb6d5fc3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6b2ac:	e28dd004 	add	sp, sp, #4	; 0x4
         6b2b0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         6b2b4:	eb6d5fc0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6b2b8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         6b2bc:	003712e4 	eoreqs	r1, r7, r4, ror #5
         6b2c0:	00682ce0 	rsbeq	r2, r8, r0, ror #25
         6b2c4:	006839a8 	rsbeq	r3, r8, r8, lsr #19
         6b2c8:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         6b2cc:	e1a01004 	mov	r1, r4
         6b2d0:	e3a02000 	mov	r2, #0	; 0x0
         6b2d4:	e5950000 	ldr	r0, [r5]
         6b2d8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         6b2dc:	ea6ddfae 	b	1be319c <$Throw>
    */
}

/**
 * Symbol: TScriptEndpointClient::Default(TEndpointEvent *)
 * Address: 0006b47c
 */
TScriptEndpointClient::Default(TEndpointEvent *) {
    /*
         6b47c:	e1a0c00d 	mov	ip, sp
         6b480:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         6b484:	e24cb004 	sub	fp, ip, #4	; 0x4
         6b488:	e1a04001 	mov	r4, r1
         6b48c:	e2800024 	add	r0, r0, #36	; 0x24
         6b490:	e1a06000 	mov	r6, r0
         6b494:	e5900000 	ldr	r0, [r0]
         6b498:	e5900000 	ldr	r0, [r0]
         6b49c:	e3300002 	teq	r0, #2	; 0x2
         6b4a0:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         6b4a4:	e1a00006 	mov	r0, r6
         6b4a8:	e59f109c 	ldr	r1, [pc, #9c]	; 6b54c <TScriptEndpointClient::Default(TEndpointEvent *)+0xd0>
         6b4ac:	e1a07001 	mov	r7, r1
         6b4b0:	e3a03000 	mov	r3, #0	; 0x0
         6b4b4:	e3a02000 	mov	r2, #0	; 0x0
         6b4b8:	eb6d636d 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         6b4bc:	e3300002 	teq	r0, #2	; 0x2
         6b4c0:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         6b4c4:	e24dd004 	sub	sp, sp, #4	; 0x4
         6b4c8:	e3a00002 	mov	r0, #2	; 0x2
         6b4cc:	eb68c232 	bl	1a9bd9c <$MakeArray(long)>
         6b4d0:	eb6d5b1d 	bl	1bc214c <$AllocateRefHandle(long)>
         6b4d4:	e58d0000 	str	r0, [sp]
         6b4d8:	e5940010 	ldr	r0, [r4, #16]	; fField16
         6b4dc:	e1a00100 	mov	r0, r0, lsl #2
         6b4e0:	eb6d5b19 	bl	1bc214c <$AllocateRefHandle(long)>
         6b4e4:	e1a05000 	mov	r5, r0
         6b4e8:	e3a01000 	mov	r1, #0	; 0x0
         6b4ec:	e5902000 	ldr	r2, [r0]
         6b4f0:	e59d0000 	ldr	r0, [sp]
         6b4f4:	e5900000 	ldr	r0, [r0]
         6b4f8:	eb6d6b96 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         6b4fc:	e1a00005 	mov	r0, r5
         6b500:	eb6d5f2d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6b504:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         6b508:	e1a00100 	mov	r0, r0, lsl #2
         6b50c:	eb6d5b0e 	bl	1bc214c <$AllocateRefHandle(long)>
         6b510:	e1a04000 	mov	r4, r0
         6b514:	e3a01001 	mov	r1, #1	; 0x1
         6b518:	e5902000 	ldr	r2, [r0]
         6b51c:	e59d0000 	ldr	r0, [sp]
         6b520:	e5900000 	ldr	r0, [r0]
         6b524:	eb6d6b8b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         6b528:	e1a00004 	mov	r0, r4
         6b52c:	eb6d5f22 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6b530:	e1a00006 	mov	r0, r6
         6b534:	e1a0200d 	mov	r2, sp
         6b538:	e1a01007 	mov	r1, r7
         6b53c:	eb6d5f24 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
         6b540:	e59d0000 	ldr	r0, [sp]
         6b544:	eb6d5f1c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         6b548:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         6b54c:	00682cc8 	rsbeq	r2, r8, r8, asr #25
    */
}

