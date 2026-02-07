#include "include/TStreamingEndpointClient.h"

/**
 * Symbol: TStreamingEndpointClient::__ct(void)
 * Address: 00139614
 */
TStreamingEndpointClient::TStreamingEndpointClient(void) {
    /*
        139614:	e1a0c00d 	mov	ip, sp
        139618:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        13961c:	e24cb004 	sub	fp, ip, #4	; 0x4
        139620:	e1b04000 	movs	r4, r0
        139624:	1a000003 	bne	139638 <TStreamingEndpointClient::__ct(void)+0x24>
        139628:	e3a000dc 	mov	r0, #220	; 0xdc
        13962c:	eb6a5441 	bl	1bce738 <$__nw(unsigned int)>
        139630:	e1b04000 	movs	r4, r0
        139634:	0a000006 	beq	139654 <TStreamingEndpointClient::__ct(void)+0x40>
        139638:	e1a00004 	mov	r0, r4
        13963c:	eb660e05 	bl	1abce58 <TNewScriptEndpointClient::$__ct(void)>
        139640:	e59f0014 	ldr	r0, [pc, #14]	; 13965c <TStreamingEndpointClient::__ct(void)+0x48>
        139644:	e5840000 	str	r0, [r4]
        139648:	e3a00000 	mov	r0, #0	; 0x0
        13964c:	e58400d4 	str	r0, [r4, #212]	; fField212
        139650:	e58400d8 	str	r0, [r4, #216]	; fField216
        139654:	e1a00004 	mov	r0, r4
        139658:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        13965c:	0001f2b8 	streqh	pc, [r1], -r8
    */
}

/**
 * Symbol: TStreamingEndpointClient::__dt(void)
 * Address: 00139660
 */
TStreamingEndpointClient::~TStreamingEndpointClient(void) {
    /*
        139660:	e1a0c00d 	mov	ip, sp
        139664:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        139668:	e24cb004 	sub	fp, ip, #4	; 0x4
        13966c:	e1a04000 	mov	r4, r0
        139670:	e1a05001 	mov	r5, r1
        139674:	e59f0020 	ldr	r0, [pc, #20]	; 13969c <TStreamingEndpointClient::__dt(void)+0x3c>
        139678:	e5840000 	str	r0, [r4]
        13967c:	e1a00004 	mov	r0, r4
        139680:	e3a01000 	mov	r1, #0	; 0x0
        139684:	eb660dfa 	bl	1abce74 <TNewScriptEndpointClient::$__dt(void)>
        139688:	e3150001 	tst	r5, #1	; 0x1
        13968c:	11a00004 	movne	r0, r4
        139690:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        139694:	1a6a5011 	bne	1bcd6e0 <$__dl(void *)>
        139698:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        13969c:	0001f2b8 	streqh	pc, [r1], -r8
    */
}

/**
 * Symbol: TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)
 * Address: 001396a0
 */
TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long) {
    /*
        1396a0:	e1a0c00d 	mov	ip, sp
        1396a4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1396a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1396ac:	e1a06000 	mov	r6, r0
        1396b0:	e1a05001 	mov	r5, r1
        1396b4:	e1a04003 	mov	r4, r3
        1396b8:	e20270ff 	and	r7, r2, #255	; 0xff
        1396bc:	e59b9004 	ldr	r9, [fp, #4]
        1396c0:	eb65c7af 	bl	1aab584 <TNewScriptEndpointClient::$ClearInputSpec(void)>
        1396c4:	e3a00002 	mov	r0, #2	; 0x2
        1396c8:	e5951000 	ldr	r1, [r5]
        1396cc:	e5810000 	str	r0, [r1]
        1396d0:	e5960014 	ldr	r0, [r6, #20]
        1396d4:	e5850004 	str	r0, [r5, #4]
        1396d8:	e3a00000 	mov	r0, #0	; 0x0
        1396dc:	e5850008 	str	r0, [r5, #8]	; fField8
        1396e0:	e5c5000c 	strb	r0, [r5, #12]	; fField12
        1396e4:	e3a08000 	mov	r8, #0	; 0x0
        1396e8:	e5940000 	ldr	r0, [r4]
        1396ec:	e5900000 	ldr	r0, [r0]
        1396f0:	e3300002 	teq	r0, #2	; 0x2
        1396f4:	0a00006a 	beq	1398a4 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x204>
        1396f8:	e1a00004 	mov	r0, r4
        1396fc:	eb6ae8a3 	bl	1bf3990 <$IsFrame(RefVar const &)>
        139700:	e3300000 	teq	r0, #0	; 0x0
        139704:	0a000066 	beq	1398a4 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x204>
        139708:	e24dd004 	sub	sp, sp, #4	; 0x4
        13970c:	e59f1198 	ldr	r1, [pc, #198]	; 1398ac <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x20c>
        139710:	e1a00004 	mov	r0, r4
        139714:	e3a03000 	mov	r3, #0	; 0x0
        139718:	e3a02000 	mov	r2, #0	; 0x0
        13971c:	eb6a2ad4 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        139720:	eb6a2289 	bl	1bc214c <$AllocateRefHandle(long)>
        139724:	e58d0000 	str	r0, [sp]
        139728:	e5900000 	ldr	r0, [r0]
        13972c:	e3300002 	teq	r0, #2	; 0x2
        139730:	0a000005 	beq	13974c <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0xac>
        139734:	e59f1174 	ldr	r1, [pc, #174]	; 1398b0 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x210>
        139738:	e5911000 	ldr	r1, [r1]
        13973c:	e5911000 	ldr	r1, [r1]
        139740:	eb6a2aba 	bl	1bc4230 <$EQRef__FlT1>
        139744:	e3300000 	teq	r0, #0	; 0x0
        139748:	059f8164 	ldreq	r8, [pc, #164]	; 1398b4 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x214>
        13974c:	e3370000 	teq	r7, #0	; 0x0
        139750:	0a000013 	beq	1397a4 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x104>
        139754:	e59f115c 	ldr	r1, [pc, #15c]	; 1398b8 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x218>
        139758:	e1a00004 	mov	r0, r4
        13975c:	e3a03000 	mov	r3, #0	; 0x0
        139760:	e3a02000 	mov	r2, #0	; 0x0
        139764:	eb6a2ac2 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        139768:	e59d1000 	ldr	r1, [sp]
        13976c:	e5810000 	str	r0, [r1]
        139770:	e3300002 	teq	r0, #2	; 0x2
        139774:	0a00000a 	beq	1397a4 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x104>
        139778:	e1a0000d 	mov	r0, sp
        13977c:	eb6ae883 	bl	1bf3990 <$IsFrame(RefVar const &)>
        139780:	e3300000 	teq	r0, #0	; 0x0
        139784:	0a000006 	beq	1397a4 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x104>
        139788:	e59f112c 	ldr	r1, [pc, #12c]	; 1398bc <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x21c>	; fField12
        13978c:	e1a0000d 	mov	r0, sp
        139790:	e3a03000 	mov	r3, #0	; 0x0
        139794:	e3a02000 	mov	r2, #0	; 0x0
        139798:	eb6a2ab5 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        13979c:	e5951000 	ldr	r1, [r5]
        1397a0:	e5810000 	str	r0, [r1]
        1397a4:	e3380000 	teq	r8, #0	; 0x0
        1397a8:	1a00003a 	bne	139898 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x1f8>
        1397ac:	e59f110c 	ldr	r1, [pc, #10c]	; 1398c0 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x220>
        1397b0:	e1a00004 	mov	r0, r4
        1397b4:	e3a03000 	mov	r3, #0	; 0x0
        1397b8:	e3a02000 	mov	r2, #0	; 0x0
        1397bc:	eb6a2aac 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1397c0:	e59d1000 	ldr	r1, [sp]
        1397c4:	e5810000 	str	r0, [r1]
        1397c8:	e1a01000 	mov	r1, r0
        1397cc:	e2000003 	and	r0, r0, #3	; 0x3
        1397d0:	e3500000 	cmp	r0, #0	; 0x0
        1397d4:	1a000007 	bne	1397f8 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x158>
        1397d8:	e1a00001 	mov	r0, r1
        1397dc:	01a00140 	moveq	r0, r0, asr #2
        1397e0:	0a000000 	beq	1397e8 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x148>
        1397e4:	eb6a224c 	bl	1bc211c <$_RINTError(long)>
        1397e8:	e3a0c066 	mov	ip, #102	; 0x66
        1397ec:	e28ccc0e 	add	ip, ip, #3584	; 0xe00
        1397f0:	e000009c 	mul	r0, ip, r0
        1397f4:	e5850008 	str	r0, [r5, #8]	; fField8
        1397f8:	e3370000 	teq	r7, #0	; 0x0
        1397fc:	059f10c0 	ldreq	r1, [pc, #c0]	; 1398c4 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x224>
        139800:	159f10c0 	ldrne	r1, [pc, #c0]	; 1398c8 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x228>
        139804:	e1a00004 	mov	r0, r4
        139808:	e3a03000 	mov	r3, #0	; 0x0
        13980c:	e3a02000 	mov	r2, #0	; 0x0
        139810:	eb6a2a97 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        139814:	e59d1000 	ldr	r1, [sp]
        139818:	e5810000 	str	r0, [r1]
        13981c:	e59d0000 	ldr	r0, [sp]
        139820:	e5900000 	ldr	r0, [r0]
        139824:	e2001003 	and	r1, r0, #3	; 0x3
        139828:	e3510000 	cmp	r1, #0	; 0x0
        13982c:	1a000005 	bne	139848 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x1a8>
        139830:	01a00140 	moveq	r0, r0, asr #2
        139834:	0a000000 	beq	13983c <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x19c>
        139838:	eb6a2237 	bl	1bc211c <$_RINTError(long)>
        13983c:	e3100002 	tst	r0, #2	; 0x2
        139840:	13a00001 	movne	r0, #1	; 0x1
        139844:	15c5000c 	strneb	r0, [r5, #12]	; fField12
        139848:	e59f107c 	ldr	r1, [pc, #7c]	; 1398cc <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x22c>
        13984c:	e1a00004 	mov	r0, r4
        139850:	e3a03000 	mov	r3, #0	; 0x0
        139854:	e3a02000 	mov	r2, #0	; 0x0
        139858:	eb6a2a85 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        13985c:	e59d1000 	ldr	r1, [sp]
        139860:	e5810000 	str	r0, [r1]
        139864:	e3300002 	teq	r0, #2	; 0x2
        139868:	0a00000a 	beq	139898 <TStreamingEndpointClient::ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)+0x1f8>
        13986c:	e3a00000 	mov	r0, #0	; 0x0
        139870:	eb660d77 	bl	1abce54 <TStreamingCallBack::$__ct(void)>
        139874:	e5943000 	ldr	r3, [r4]
        139878:	e5933000 	ldr	r3, [r3]
        13987c:	e590200c 	ldr	r2, [r0, #12]	; fField12
        139880:	e5823000 	str	r3, [r2]
        139884:	e5c07010 	strb	r7, [r0, #16]	; fField16
        139888:	e3370000 	teq	r7, #0	; 0x0
        13988c:	05809008 	streq	r9, [r0, #8]	; fField8
        139890:	05a600d8 	streq	r0, [r6, #216]!	; fField216
        139894:	15a600d4 	strne	r0, [r6, #212]!	; fField212
        139898:	e59d0000 	ldr	r0, [sp]
        13989c:	eb6a2646 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1398a0:	e28dd004 	add	sp, sp, #4	; 0x4
        1398a4:	e1a00008 	mov	r0, r8
        1398a8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1398ac:	00682e68 	rsbeq	r2, r8, r8, ror #28
        1398b0:	00682ee8 	rsbeq	r2, r8, r8, ror #29
        1398b4:	ffff2d0f 	swinv	0x00ff2d0f
        1398b8:	00684a60 	rsbeq	r4, r8, r0, ror #20
        1398bc:	00684868 	rsbeq	r4, r8, r8, ror #16
        1398c0:	00684310 	rsbeq	r4, r8, r0, lsl r3
        1398c4:	00684510 	rsbeq	r4, r8, r0, lsl r5
        1398c8:	00684100 	rsbeq	r4, r8, r0, lsl #2
        1398cc:	00684058 	rsbeq	r4, r8, r8, asr r0
    */
}

/**
 * Symbol: TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)
 * Address: 001398d0
 */
TStreamingEndpointClient::DoStreamIn(RefVar const &, long &) {
    /*
        1398d0:	e1a0c00d 	mov	ip, sp
        1398d4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1398d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1398dc:	e1a05000 	mov	r5, r0
        1398e0:	e1a06001 	mov	r6, r1
        1398e4:	e1a04002 	mov	r4, r2
        1398e8:	e3a08000 	mov	r8, #0	; 0x0
        1398ec:	e5828000 	str	r8, [r2]
        1398f0:	e24dd010 	sub	sp, sp, #16	; 0x10
        1398f4:	e3a00002 	mov	r0, #2	; 0x2
        1398f8:	eb6a2213 	bl	1bc214c <$AllocateRefHandle(long)>
        1398fc:	e1a07000 	mov	r7, r0
        139900:	e3a00002 	mov	r0, #2	; 0x2
        139904:	eb6a2210 	bl	1bc214c <$AllocateRefHandle(long)>
        139908:	e58d0000 	str	r0, [sp]
        13990c:	e5960000 	ldr	r0, [r6]
        139910:	e5900000 	ldr	r0, [r0]
        139914:	e3300002 	teq	r0, #2	; 0x2
        139918:	03a0000d 	moveq	r0, #13	; 0xd
        13991c:	02400cd3 	subeq	r0, r0, #54016	; 0xd300
        139920:	0a00004e 	beq	139a60 <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x190>
        139924:	e5d500b0 	ldrb	r0, [r5, #176]	; fField176
        139928:	e3300000 	teq	r0, #0	; 0x0
        13992c:	13a00f41 	movne	r0, #260	; 0x104
        139930:	12400b35 	subne	r0, r0, #54272	; 0xd400
        139934:	1a000049 	bne	139a60 <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x190>
        139938:	e3e03000 	mvn	r3, #0	; 0x0
        13993c:	e92d0008 	stmdb	sp!, {r3}
        139940:	e1a03006 	mov	r3, r6
        139944:	e28d1004 	add	r1, sp, #4	; 0x4
        139948:	e1a00005 	mov	r0, r5
        13994c:	e3a02001 	mov	r2, #1	; 0x1
        139950:	eb65fcaa 	bl	1ab8c00 <TStreamingEndpointClient::$ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)>
        139954:	e28dd004 	add	sp, sp, #4	; 0x4
        139958:	e5840000 	str	r0, [r4]
        13995c:	e3300000 	teq	r0, #0	; 0x0
        139960:	1a00003f 	bne	139a64 <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x194>
        139964:	e28f1f1a 	add	r1, pc, #104	; 0x68
        139968:	e28f0f1d 	add	r0, pc, #116	; 0x74
        13996c:	eb6a7886 	bl	1bd7b8c <$NewByName__FPCcT1>
        139970:	e1b06000 	movs	r6, r0
        139974:	0a000035 	beq	139a50 <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x180>
        139978:	e52d806c 	str	r8, [sp, -#108]!
        13997c:	e28d0008 	add	r0, sp, #8	; 0x8
        139980:	eb69e3fb 	bl	1bb2974 <$setjmp>
        139984:	e3300000 	teq	r0, #0	; 0x0
        139988:	1a000021 	bne	139a14 <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x144>
        13998c:	e1a0000d 	mov	r0, sp
        139990:	eb6a99b9 	bl	1be007c <$AddExceptionHandler>
        139994:	e3a04000 	mov	r4, #0	; 0x0
        139998:	e52d806c 	str	r8, [sp, -#108]!
        13999c:	e28d0008 	add	r0, sp, #8	; 0x8
        1399a0:	eb69e3f3 	bl	1bb2974 <$setjmp>
        1399a4:	e3300000 	teq	r0, #0	; 0x0
        1399a8:	1a000011 	bne	1399f4 <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x124>
        1399ac:	e1a0000d 	mov	r0, sp
        1399b0:	eb6a99b1 	bl	1be007c <$AddExceptionHandler>
        1399b4:	e28d10d8 	add	r1, sp, #216	; 0xd8
        1399b8:	e1a00006 	mov	r0, r6
        1399bc:	e59520d4 	ldr	r2, [r5, #212]	; fField212
        1399c0:	eb69ba94 	bl	1ba8418 <PFrameSource::$Translate(void *, PipeCallBack *)>
        1399c4:	e5870000 	str	r0, [r7]
        1399c8:	e1a0000d 	mov	r0, sp
        1399cc:	eb6a9db9 	bl	1be10b8 <$ExitHandler>
        1399d0:	ea000008 	b	1399f8 <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x128>
        1399d4:	50537472 	subpls	r7, r3, r2, ror r4
        1399d8:	65616d49 	strvsb	r6, [r1, -#3401]!
        1399dc:	6e526566 	cdpvs	5, 5, cr6, cr2, cr6, {3}
        1399e0:	00000000 	andeq	r0, r0, r0
        1399e4:	50467261 	subpl	r7, r6, r1, ror #4
        1399e8:	6d65536f 	stcvsl	3, cr5, [r5, -#444]!
        1399ec:	75726365 	ldrvcb	r6, [r2, -#869]!
        1399f0:	00000000 	andeq	r0, r0, r0
        1399f4:	e3a04001 	mov	r4, #1	; 0x1
        1399f8:	e1a00006 	mov	r0, r6
        1399fc:	eb69b250 	bl	1ba6344 <PFrameSource::$Delete(void)>
        139a00:	e3340000 	teq	r4, #0	; 0x0
        139a04:	11a0000d 	movne	r0, sp
        139a08:	1b6aa1d1 	blne	1be2154 <$NextHandler>
        139a0c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        139a10:	ea000009 	b	139a3c <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x16c>
        139a14:	e59d0060 	ldr	r0, [sp, #96]
        139a18:	e59f102c 	ldr	r1, [pc, #2c]	; 139a4c <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x17c>
        139a1c:	e5911000 	ldr	r1, [r1]
        139a20:	eb6aa5db 	bl	1be3194 <$Subexception>
        139a24:	e3300000 	teq	r0, #0	; 0x0
        139a28:	159d0064 	ldrne	r0, [sp, #100]
        139a2c:	15840000 	strne	r0, [r4]
        139a30:	1a000001 	bne	139a3c <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x16c>
        139a34:	e1a0000d 	mov	r0, sp
        139a38:	eb6aa1c5 	bl	1be2154 <$NextHandler>
        139a3c:	e1a0000d 	mov	r0, sp
        139a40:	eb6a9d9c 	bl	1be10b8 <$ExitHandler>
        139a44:	e28dd06c 	add	sp, sp, #108	; 0x6c
        139a48:	ea000005 	b	139a64 <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x194>
        139a4c:	00371328 	eoreqs	r1, r7, r8, lsr #6
        139a50:	e5940000 	ldr	r0, [r4]
        139a54:	e3300000 	teq	r0, #0	; 0x0
        139a58:	1a000001 	bne	139a64 <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x194>
        139a5c:	eb6aa1af 	bl	1be2120 <$MemError>
        139a60:	e5840000 	str	r0, [r4]
        139a64:	e59500d4 	ldr	r0, [r5, #212]	; fField212
        139a68:	e3300000 	teq	r0, #0	; 0x0
        139a6c:	0a000003 	beq	139a80 <TStreamingEndpointClient::DoStreamIn(RefVar const &, long &)+0x1b0>
        139a70:	e3a01001 	mov	r1, #1	; 0x1
        139a74:	e1a0e00f 	mov	lr, pc
        139a78:	e590f000 	ldr	pc, [r0]
        139a7c:	e5a580d4 	str	r8, [r5, #212]!	; fField212
        139a80:	e5974000 	ldr	r4, [r7]
        139a84:	e59d0000 	ldr	r0, [sp]
        139a88:	eb6a25cb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139a8c:	e1a00007 	mov	r0, r7
        139a90:	eb6a25c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139a94:	e1a00004 	mov	r0, r4
        139a98:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &)
 * Address: 00139a9c
 */
TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &) {
    /*
        139a9c:	e1a0c00d 	mov	ip, sp
        139aa0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        139aa4:	e24cb004 	sub	fp, ip, #4	; 0x4
        139aa8:	e1a04000 	mov	r4, r0
        139aac:	e1a06001 	mov	r6, r1
        139ab0:	e1a05002 	mov	r5, r2
        139ab4:	e24dd014 	sub	sp, sp, #20	; 0x14
        139ab8:	e3a00002 	mov	r0, #2	; 0x2
        139abc:	eb6a21a2 	bl	1bc214c <$AllocateRefHandle(long)>
        139ac0:	e58d0010 	str	r0, [sp, #16]	; fField16
        139ac4:	e3a00002 	mov	r0, #2	; 0x2
        139ac8:	eb6a219f 	bl	1bc214c <$AllocateRefHandle(long)>
        139acc:	e58d0000 	str	r0, [sp]
        139ad0:	e5960000 	ldr	r0, [r6]
        139ad4:	e5900000 	ldr	r0, [r0]
        139ad8:	e3a08000 	mov	r8, #0	; 0x0
        139adc:	e3300002 	teq	r0, #2	; 0x2
        139ae0:	03a0500e 	moveq	r5, #14	; 0xe
        139ae4:	02455cd3 	subeq	r5, r5, #54016	; 0xd300
        139ae8:	0a000048 	beq	139c10 <TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &)+0x174>
        139aec:	eb6a2dee 	bl	1bc52ac <$Length(long)>
        139af0:	e1a03000 	mov	r3, r0
        139af4:	e92d0008 	stmdb	sp!, {r3}
        139af8:	e1a03005 	mov	r3, r5
        139afc:	e28d1004 	add	r1, sp, #4	; 0x4
        139b00:	e1a00004 	mov	r0, r4
        139b04:	e3a02000 	mov	r2, #0	; 0x0
        139b08:	eb65fc3c 	bl	1ab8c00 <TStreamingEndpointClient::$ReadStreamParms(StreamRefParms *, unsigned char, RefVar const &, long)>
        139b0c:	e28dd004 	add	sp, sp, #4	; 0x4
        139b10:	e1b05000 	movs	r5, r0
        139b14:	1a00003d 	bne	139c10 <TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &)+0x174>
        139b18:	e5960000 	ldr	r0, [r6]
        139b1c:	e5901000 	ldr	r1, [r0]
        139b20:	e59d0000 	ldr	r0, [sp]
        139b24:	e5801000 	str	r1, [r0]
        139b28:	e28f1f19 	add	r1, pc, #100	; 0x64
        139b2c:	e28f0f1c 	add	r0, pc, #112	; 0x70
        139b30:	eb6a7815 	bl	1bd7b8c <$NewByName__FPCcT1>
        139b34:	e1b06000 	movs	r6, r0
        139b38:	0a000032 	beq	139c08 <TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &)+0x16c>
        139b3c:	e52d806c 	str	r8, [sp, -#108]!
        139b40:	e28d0008 	add	r0, sp, #8	; 0x8
        139b44:	eb69e38a 	bl	1bb2974 <$setjmp>
        139b48:	e3300000 	teq	r0, #0	; 0x0
        139b4c:	1a00001f 	bne	139bd0 <TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &)+0x134>
        139b50:	e1a0000d 	mov	r0, sp
        139b54:	eb6a9948 	bl	1be007c <$AddExceptionHandler>
        139b58:	e3a07000 	mov	r7, #0	; 0x0
        139b5c:	e52d806c 	str	r8, [sp, -#108]!
        139b60:	e28d0008 	add	r0, sp, #8	; 0x8
        139b64:	eb69e382 	bl	1bb2974 <$setjmp>
        139b68:	e3300000 	teq	r0, #0	; 0x0
        139b6c:	1a00000f 	bne	139bb0 <TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &)+0x114>
        139b70:	e1a0000d 	mov	r0, sp
        139b74:	eb6a9940 	bl	1be007c <$AddExceptionHandler>
        139b78:	e28d10d8 	add	r1, sp, #216	; 0xd8
        139b7c:	e1a00006 	mov	r0, r6
        139b80:	e59420d8 	ldr	r2, [r4, #216]	; fField216
        139b84:	eb69ba20 	bl	1ba840c <PFrameSink::$Translate(void *, PipeCallBack *)>
        139b88:	e1a0000d 	mov	r0, sp
        139b8c:	eb6a9d49 	bl	1be10b8 <$ExitHandler>
        139b90:	ea000007 	b	139bb4 <TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &)+0x118>
        139b94:	50537472 	subpls	r7, r3, r2, ror r4
        139b98:	65616d4f 	strvsb	r6, [r1, -#3407]!
        139b9c:	75745265 	ldrvcb	r5, [r4, -#613]!	; fField613
        139ba0:	66000000 	strvs	r0, [r0], -r0
        139ba4:	50467261 	subpl	r7, r6, r1, ror #4
        139ba8:	6d655369 	stcvsl	3, cr5, [r5, -#420]!
        139bac:	6e6b0000 	cdpvs	0, 6, cr0, cr11, cr0, {0}
        139bb0:	e3a07001 	mov	r7, #1	; 0x1
        139bb4:	e1a00006 	mov	r0, r6
        139bb8:	eb69b1de 	bl	1ba6338 <PFrameSink::$Delete(void)>
        139bbc:	e3370000 	teq	r7, #0	; 0x0
        139bc0:	11a0000d 	movne	r0, sp
        139bc4:	1b6aa162 	blne	1be2154 <$NextHandler>
        139bc8:	e28dd06c 	add	sp, sp, #108	; 0x6c
        139bcc:	ea000008 	b	139bf4 <TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &)+0x158>
        139bd0:	e59d0060 	ldr	r0, [sp, #96]
        139bd4:	e59f1028 	ldr	r1, [pc, #28]	; 139c04 <TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &)+0x168>
        139bd8:	e5911000 	ldr	r1, [r1]
        139bdc:	eb6aa56c 	bl	1be3194 <$Subexception>
        139be0:	e3300000 	teq	r0, #0	; 0x0
        139be4:	159d5064 	ldrne	r5, [sp, #100]
        139be8:	1a000001 	bne	139bf4 <TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &)+0x158>
        139bec:	e1a0000d 	mov	r0, sp
        139bf0:	eb6aa157 	bl	1be2154 <$NextHandler>
        139bf4:	e1a0000d 	mov	r0, sp
        139bf8:	eb6a9d2e 	bl	1be10b8 <$ExitHandler>
        139bfc:	e28dd06c 	add	sp, sp, #108	; 0x6c
        139c00:	ea000002 	b	139c10 <TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &)+0x174>
        139c04:	00371328 	eoreqs	r1, r7, r8, lsr #6
        139c08:	eb6aa144 	bl	1be2120 <$MemError>
        139c0c:	e1a05000 	mov	r5, r0
        139c10:	e59400d8 	ldr	r0, [r4, #216]	; fField216
        139c14:	e3300000 	teq	r0, #0	; 0x0
        139c18:	0a000003 	beq	139c2c <TStreamingEndpointClient::DoStreamOut(RefVar const &, RefVar const &)+0x190>
        139c1c:	e3a01001 	mov	r1, #1	; 0x1
        139c20:	e1a0e00f 	mov	lr, pc
        139c24:	e590f000 	ldr	pc, [r0]
        139c28:	e5a480d8 	str	r8, [r4, #216]!	; fField216
        139c2c:	e59d0000 	ldr	r0, [sp]
        139c30:	eb6a2561 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139c34:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        139c38:	eb6a255f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139c3c:	e1a00005 	mov	r0, r5
        139c40:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

