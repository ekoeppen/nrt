#include "include/TMNP.h"

/**
 * Symbol: TMNP::InitConnectParms(void)
 * Address: 001174e8
 */
TMNP::InitConnectParms(void) {
    /*
        1174e8:	e1a0c00d 	mov	ip, sp
        1174ec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1174f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1174f4:	e1a04000 	mov	r4, r0
        1174f8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1174fc:	e3c00202 	bic	r0, r0, #536870912	; 0x20000000
        117500:	e5840018 	str	r0, [r4, #24]	; fField24
        117504:	e5d4057b 	ldrb	r0, [r4, #1403]	; fField1403
        117508:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        11750c:	e5c1009a 	strb	r0, [r1, #154]	; fField154
        117510:	e5d41579 	ldrb	r1, [r4, #1401]	; fField1401
        117514:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117518:	e5c0109b 	strb	r1, [r0, #155]
        11751c:	e594057c 	ldr	r0, [r4, #1404]	; fField1404
        117520:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        117524:	e5a1009c 	str	r0, [r1, #156]!
        117528:	e5d4057a 	ldrb	r0, [r4, #1402]	; fField1402
        11752c:	e3300000 	teq	r0, #0	; 0x0
        117530:	0a000003 	beq	117544 <TMNP::InitConnectParms(void)+0x5c>
        117534:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117538:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        11753c:	e3811004 	orr	r1, r1, #4	; 0x4
        117540:	e5801000 	str	r1, [r0]
        117544:	e5d40578 	ldrb	r0, [r4, #1400]	; fField1400
        117548:	e3300000 	teq	r0, #0	; 0x0
        11754c:	03a010fa 	moveq	r1, #250	; 0xfa
        117550:	0a000004 	beq	117568 <TMNP::InitConnectParms(void)+0x80>
        117554:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117558:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        11755c:	e3811003 	orr	r1, r1, #3	; 0x3
        117560:	e5801000 	str	r1, [r0]
        117564:	e3a01020 	mov	r1, #32	; 0x20
        117568:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11756c:	e5c01015 	strb	r1, [r0, #21]
        117570:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117574:	e5901004 	ldr	r1, [r0, #4]	; fField4
        117578:	e3110001 	tst	r1, #1	; 0x1
        11757c:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        117580:	03c11002 	biceq	r1, r1, #2	; 0x2
        117584:	13811002 	orrne	r1, r1, #2	; 0x2
        117588:	e5801000 	str	r1, [r0]
        11758c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117590:	e5901000 	ldr	r1, [r0]
        117594:	e3c1120e 	bic	r1, r1, #-536870912	; 0xe0000000
        117598:	e3c11603 	bic	r1, r1, #3145728	; 0x300000
        11759c:	e3c11a03 	bic	r1, r1, #12288	; 0x3000
        1175a0:	e3c11033 	bic	r1, r1, #51	; 0x33
        1175a4:	e5801000 	str	r1, [r0]
        1175a8:	e24dd04c 	sub	sp, sp, #76	; 0x4c
        1175ac:	e1a0000d 	mov	r0, sp
        1175b0:	eb6a920a 	bl	1bbbde0 <TCMOMNPStatistics::$__ct(void)>
        1175b4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1175b8:	e2400fb6 	sub	r0, r0, #728	; 0x2d8
        1175bc:	e2800a01 	add	r0, r0, #4096	; 0x1000
        1175c0:	e1a0e00d 	mov	lr, sp
        1175c4:	e3a0c006 	mov	ip, #6	; 0x6
        1175c8:	e8be000e 	ldmia	lr!, {r1, r2, r3}
        1175cc:	e8a0000e 	stmia	r0!, {r1, r2, r3}
        1175d0:	e25cc001 	subs	ip, ip, #1	; 0x1
        1175d4:	1afffffb 	bne	1175c8 <TMNP::InitConnectParms(void)+0xe0>
        1175d8:	e89e0008 	ldmia	lr, {r3}
        1175dc:	e8800008 	stmia	r0, {r3}
        1175e0:	e3a00000 	mov	r0, #0	; 0x0
        1175e4:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        1175e8:	e5c10099 	strb	r0, [r1, #153]
        1175ec:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        1175f0:	e5c10098 	strb	r0, [r1, #152]
        1175f4:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        1175f8:	e5810000 	str	r0, [r1]
        1175fc:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        117600:	e5c10008 	strb	r0, [r1, #8]	; fField8
        117604:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        117608:	e591209c 	ldr	r2, [r1, #156]
        11760c:	e5a120a0 	str	r2, [r1, #160]!	; fField160
        117610:	e3a01003 	mov	r1, #3	; 0x3
        117614:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        117618:	e5c21014 	strb	r1, [r2, #20]
        11761c:	e3a02000 	mov	r2, #0	; 0x0
        117620:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        117624:	e5c32019 	strb	r2, [r3, #25]
        117628:	e3a02004 	mov	r2, #4	; 0x4
        11762c:	e5c32018 	strb	r2, [r3, #24]	; fField24
        117630:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        117634:	e592300c 	ldr	r3, [r2, #12]	; fField12
        117638:	e5a23034 	str	r3, [r2, #52]!
        11763c:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        117640:	e5a24020 	str	r4, [r2, #32]!
        117644:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        117648:	e5a24024 	str	r4, [r2, #36]!
        11764c:	e59f2078 	ldr	r2, [pc, #78]	; 1176cc <TMNP::InitConnectParms(void)+0x1e4>
        117650:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        117654:	e5a32028 	str	r2, [r3, #40]!	; fField40
        117658:	e59f3070 	ldr	r3, [pc, #70]	; 1176d0 <TMNP::InitConnectParms(void)+0x1e8>
        11765c:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        117660:	e5a2302c 	str	r3, [r2, #44]!
        117664:	e59f3068 	ldr	r3, [pc, #68]	; 1176d4 <TMNP::InitConnectParms(void)+0x1ec>	; fField68
        117668:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        11766c:	e5a23030 	str	r3, [r2, #48]!
        117670:	e3a02001 	mov	r2, #1	; 0x1
        117674:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        117678:	e5a32038 	str	r2, [r3, #56]!
        11767c:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        117680:	e5a3203c 	str	r2, [r3, #60]!	; fField60
        117684:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        117688:	e5a300bc 	str	r0, [r3, #188]!
        11768c:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        117690:	e5a30c68 	str	r0, [r3, #3176]!
        117694:	e594355c 	ldr	r3, [r4, #1372]	; fField1372
        117698:	e3530e4b 	cmp	r3, #1200	; 0x4b0
        11769c:	93a0c007 	movls	ip, #7	; 0x7
        1176a0:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        1176a4:	95a3ccf8 	strls	ip, [r3, #3320]!	; fField3320
        1176a8:	85a31cf8 	strhi	r1, [r3, #3320]!	; fField3320
        1176ac:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        1176b0:	e5a31cf4 	str	r1, [r3, #3316]!	; fField3316
        1176b4:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        1176b8:	e5a120a8 	str	r2, [r1, #168]!
        1176bc:	e5840568 	str	r0, [r4, #1384]	; fField1384
        1176c0:	e594055c 	ldr	r0, [r4, #1372]	; fField1372
        1176c4:	e5a40560 	str	r0, [r4, #1376]!	; fField1376
        1176c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1176cc:	01a14a54 	moveq	r4, r4, asr sl
        1176d0:	01a14a5c 	moveq	r4, ip, asr sl
        1176d4:	01a14a58 	moveq	r4, r8, asr sl
    */
}

/**
 * Symbol: TMNP::ResetLink(void)
 * Address: 001176d8
 */
TMNP::ResetLink(void) {
    /*
        1176d8:	e3a01000 	mov	r1, #0	; 0x0
        1176dc:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        1176e0:	e5a21d38 	str	r1, [r2, #3384]!
        1176e4:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        1176e8:	e5a21d3c 	str	r1, [r2, #3388]!
        1176ec:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        1176f0:	e5a210ac 	str	r1, [r2, #172]!	; fField172
        1176f4:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        1176f8:	e5923000 	ldr	r3, [r2]
        1176fc:	e3c33576 	bic	r3, r3, #494927872	; 0x1d800000
        117700:	e3c33004 	bic	r3, r3, #4	; 0x4
        117704:	e5823000 	str	r3, [r2]
        117708:	e3a02001 	mov	r2, #1	; 0x1
        11770c:	e5903588 	ldr	r3, [r0, #1416]	; fField1416
        117710:	e5c320b1 	strb	r2, [r3, #177]
        117714:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        117718:	e5d2309a 	ldrb	r3, [r2, #154]	; fField154
        11771c:	e2833001 	add	r3, r3, #1	; 0x1
        117720:	e5c230b0 	strb	r3, [r2, #176]
        117724:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        117728:	e5c210b2 	strb	r1, [r2, #178]
        11772c:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        117730:	e5a210b4 	str	r1, [r2, #180]!
        117734:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        117738:	e5a210b8 	str	r1, [r2, #184]!
        11773c:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        117740:	e2823f8b 	add	r3, r2, #556	; 0x22c
        117744:	e5a230c0 	str	r3, [r2, #192]!
        117748:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        11774c:	e2823f8b 	add	r3, r2, #556	; 0x22c
        117750:	e5a230a4 	str	r3, [r2, #164]!
        117754:	e3a03000 	mov	r3, #0	; 0x0
        117758:	e590c588 	ldr	ip, [r0, #1416]	; fField1416
        11775c:	e0632203 	rsb	r2, r3, r3, lsl #4
        117760:	e0822082 	add	r2, r2, r2, lsl #1
        117764:	e08cc182 	add	ip, ip, r2, lsl #3
        117768:	e5ac10cc 	str	r1, [ip, #204]!
        11776c:	e590c588 	ldr	ip, [r0, #1416]	; fField1416
        117770:	e08cc182 	add	ip, ip, r2, lsl #3
        117774:	e5cc10d4 	strb	r1, [ip, #212]
        117778:	e590c588 	ldr	ip, [r0, #1416]	; fField1416
        11777c:	e08cc182 	add	ip, ip, r2, lsl #3
        117780:	e5cc10d5 	strb	r1, [ip, #213]
        117784:	e590c588 	ldr	ip, [r0, #1416]	; fField1416
        117788:	e08c2182 	add	r2, ip, r2, lsl #3
        11778c:	e5c210d6 	strb	r1, [r2, #214]
        117790:	e2833001 	add	r3, r3, #1	; 0x1
        117794:	e3530008 	cmp	r3, #8	; 0x8
        117798:	baffffee 	blt	117758 <TMNP::ResetLink(void)+0x80>
        11779c:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        1177a0:	e5c21c60 	strb	r1, [r2, #3168]
        1177a4:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        1177a8:	e5c21c61 	strb	r1, [r2, #3169]
        1177ac:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        1177b0:	e5a21cfc 	str	r1, [r2, #3324]!
        1177b4:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        1177b8:	e5a21d00 	str	r1, [r2, #3328]!
        1177bc:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        1177c0:	e5a21d04 	str	r1, [r2, #3332]!	; fField3332
        1177c4:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        1177c8:	e5a21d08 	str	r1, [r2, #3336]!
        1177cc:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        1177d0:	e5a21d0c 	str	r1, [r2, #3340]!	; fField3340
        1177d4:	e5901018 	ldr	r1, [r0, #24]	; fField24
        1177d8:	e3110002 	tst	r1, #2	; 0x2
        1177dc:	0a000008 	beq	117804 <TMNP::ResetLink(void)+0x12c>
        1177e0:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        1177e4:	e5912cec 	ldr	r2, [r1, #3308]	; fField3308
        1177e8:	e5a12d08 	str	r2, [r1, #3336]!
        1177ec:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        1177f0:	e5d0109a 	ldrb	r1, [r0, #154]	; fField154
        1177f4:	e3510001 	cmp	r1, #1	; 0x1
        1177f8:	c5901cf8 	ldrgt	r1, [r0, #3320]	; fField3320
        1177fc:	c5a01d04 	strgt	r1, [r0, #3332]!	; fField3332
        117800:	e1a0f00e 	mov	pc, lr
        117804:	e3110001 	tst	r1, #1	; 0x1
        117808:	15900588 	ldrne	r0, [r0, #1416]	; fField1416
        11780c:	15901000 	ldrne	r1, [r0]
        117810:	12011002 	andne	r1, r1, #2	; 0x2
        117814:	13310000 	teqne	r1, #0	; 0x0
        117818:	15901cf0 	ldrne	r1, [r0, #3312]	; fField3312
        11781c:	15a01d0c 	strne	r1, [r0, #3340]!	; fField3340
        117820:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNP::InactiveTimeOut(void)
 * Address: 00117824
 */
TMNP::InactiveTimeOut(void) {
    /*
        117824:	e3a02005 	mov	r2, #5	; 0x5
        117828:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11782c:	e5c12098 	strb	r2, [r1, #152]
        117830:	e5901028 	ldr	r1, [r0, #40]	; fField40
        117834:	e3310000 	teq	r1, #0	; 0x0
        117838:	03a0100c 	moveq	r1, #12	; 0xc
        11783c:	05801028 	streq	r1, [r0, #40]	; fField40
        117840:	e3e01022 	mvn	r1, #34	; 0x22
        117844:	e2411c4e 	sub	r1, r1, #19968	; 0x4e00
        117848:	ea6aa610 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TMNP::AcceptorTimeOut(void)
 * Address: 0011784c
 */
TMNP::AcceptorTimeOut(void) {
    /*
        11784c:	e5901028 	ldr	r1, [r0, #40]	; fField40
        117850:	e3310000 	teq	r1, #0	; 0x0
        117854:	03a01012 	moveq	r1, #18	; 0x12
        117858:	05801028 	streq	r1, [r0, #40]	; fField40
        11785c:	e3a010ff 	mov	r1, #255	; 0xff
        117860:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        117864:	e5c21098 	strb	r1, [r2, #152]
        117868:	e3e01021 	mvn	r1, #33	; 0x21
        11786c:	e2411c4e 	sub	r1, r1, #19968	; 0x4e00
        117870:	ea6aa606 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TMNP::KillWrite(void)
 * Address: 00117874
 */
TMNP::KillWrite(void) {
    /*
        117874:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        117878:	e5912000 	ldr	r2, [r1]
        11787c:	e3822a02 	orr	r2, r2, #8192	; 0x2000
        117880:	e5812000 	str	r2, [r1]
        117884:	ea63f45f 	b	1a14a08 <TFramedAsyncSerTool::$KillPut(void)>
    */
}

/**
 * Symbol: TMNP::CancelTimer(void)
 * Address: 00117888
 */
TMNP::CancelTimer(void) {
    /*
        117888:	e1a0c00d 	mov	ip, sp
        11788c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        117890:	e24cb004 	sub	fp, ip, #4	; 0x4
        117894:	e1a04000 	mov	r4, r0
        117898:	e2800f65 	add	r0, r0, #404	; 0x194
        11789c:	e2800b01 	add	r0, r0, #1024	; 0x400
        1178a0:	eb6adba9 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        1178a4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1178a8:	e3c00301 	bic	r0, r0, #67108864	; 0x4000000
        1178ac:	e5a40018 	str	r0, [r4, #24]!	; fField24
        1178b0:	e3a00001 	mov	r0, #1	; 0x1
        1178b4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::CancelXmit(void)
 * Address: 001178b8
 */
TMNP::CancelXmit(void) {
    /*
        1178b8:	e1a0c00d 	mov	ip, sp
        1178bc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1178c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1178c4:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        1178c8:	e5911000 	ldr	r1, [r1]
        1178cc:	e3110101 	tst	r1, #1073741824	; 0x40000000
        1178d0:	0a000002 	beq	1178e0 <TMNP::CancelXmit(void)+0x28>
        1178d4:	eb63f453 	bl	1a14a28 <TMNP::$KillWrite(void)>
        1178d8:	e3a00001 	mov	r0, #1	; 0x1
        1178dc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1178e0:	eb6408fd 	bl	1a19cdc <TMNP::$SetXmitAbortTimer(void)>
        1178e4:	e3a00000 	mov	r0, #0	; 0x0
        1178e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::CancelXmitAbortTimer(void)
 * Address: 001178ec
 */
TMNP::CancelXmitAbortTimer(void) {
    /*
        1178ec:	e1a0c00d 	mov	ip, sp
        1178f0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1178f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1178f8:	e5901018 	ldr	r1, [r0, #24]	; fField24
        1178fc:	e3c11201 	bic	r1, r1, #268435456	; 0x10000000
        117900:	e5801018 	str	r1, [r0, #24]	; fField24
        117904:	eb63d76a 	bl	1a0d6b4 <TMNP::$CancelTimer(void)>
        117908:	e3a00001 	mov	r0, #1	; 0x1
        11790c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::CancelRcv(void)
 * Address: 00117910
 */
TMNP::CancelRcv(void) {
    /*
        117910:	e1a0c00d 	mov	ip, sp
        117914:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        117918:	e24cb004 	sub	fp, ip, #4	; 0x4
        11791c:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        117920:	e5912000 	ldr	r2, [r1]
        117924:	e3822a01 	orr	r2, r2, #4096	; 0x1000
        117928:	e5812000 	str	r2, [r1]
        11792c:	eb63f02a 	bl	1a139dc <TFramedAsyncSerTool::$KillGet(void)>
        117930:	e3a00001 	mov	r0, #1	; 0x1
        117934:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::CleanupCCB(void)
 * Address: 00117938
 */
TMNP::CleanupCCB(void) {
    /*
        117938:	e1a0c00d 	mov	ip, sp
        11793c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        117940:	e24cb004 	sub	fp, ip, #4	; 0x4
        117944:	e1a04000 	mov	r4, r0
        117948:	e5900018 	ldr	r0, [r0, #24]	; fField24
        11794c:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
        117950:	e5840018 	str	r0, [r4, #24]	; fField24
        117954:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117958:	e2401fbb 	sub	r1, r0, #748	; 0x2ec
        11795c:	e2811a01 	add	r1, r1, #4096	; 0x1000
        117960:	e1a00004 	mov	r0, r4
        117964:	eb6408ce 	bl	1a19ca4 <TFramedAsyncSerTool::$SetFramingCtl(TCMOFramingParms *)>
        117968:	e1a00004 	mov	r0, r4
        11796c:	eb643a6d 	bl	1a26328 <TMNP::$FreeCCB(void)>
        117970:	e3a00001 	mov	r0, #1	; 0x1
        117974:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))
 * Address: 00117978
 */
TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *)) {
    /*
        117978:	e3a0c201 	mov	ip, #268435456	; 0x10000000
        11797c:	e59f0030 	ldr	r0, [pc, #30]	; 1179b4 <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x3c>
        117980:	e3510006 	cmp	r1, #6	; 0x6
        117984:	908ff101 	addls	pc, pc, r1, lsl #2
        117988:	ea000021 	b	117a14 <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x9c>
        11798c:	ea00000a 	b	1179bc <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x44>
        117990:	ea00000e 	b	1179d0 <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x58>
        117994:	ea000012 	b	1179e4 <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x6c>
        117998:	ea000013 	b	1179ec <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x74>
        11799c:	ea000010 	b	1179e4 <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x6c>
        1179a0:	ea000016 	b	117a00 <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x88>
        1179a4:	e3a00102 	mov	r0, #-2147483648	; 0x80000000
        1179a8:	e5820000 	str	r0, [r2]
        1179ac:	e59f0004 	ldr	r0, [pc, #4]	; 1179b8 <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x40>	; fField4
        1179b0:	ea000019 	b	117a1c <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0xa4>
        1179b4:	01a0d6c4 	moveq	sp, r4, asr #13
        1179b8:	01a24254 	moveq	r4, r4, asr r2
        1179bc:	e3a00301 	mov	r0, #67108864	; 0x4000000
        1179c0:	e5820000 	str	r0, [r2]
        1179c4:	e59f0000 	ldr	r0, [pc, #0]	; 1179cc <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x54>
        1179c8:	ea000013 	b	117a1c <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0xa4>
        1179cc:	01a0d6b4 	streqh	sp, [r0, r4]!
        1179d0:	e3a00302 	mov	r0, #134217728	; 0x8000000
        1179d4:	e5820000 	str	r0, [r2]
        1179d8:	e59f0000 	ldr	r0, [pc, #0]	; 1179e0 <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x68>
        1179dc:	ea00000e 	b	117a1c <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0xa4>
        1179e0:	01a0d6c0 	moveq	sp, r0, asr #13
        1179e4:	e582c000 	str	ip, [r2]
        1179e8:	ea00000b 	b	117a1c <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0xa4>
        1179ec:	e3a00202 	mov	r0, #536870912	; 0x20000000
        1179f0:	e5820000 	str	r0, [r2]
        1179f4:	e59f0000 	ldr	r0, [pc, #0]	; 1179fc <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x84>
        1179f8:	ea000007 	b	117a1c <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0xa4>
        1179fc:	01a1ce18 	moveq	ip, r8, lsl lr
        117a00:	e3a00101 	mov	r0, #1073741824	; 0x40000000
        117a04:	e5820000 	str	r0, [r2]
        117a08:	e59f0000 	ldr	r0, [pc, #0]	; 117a10 <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x98>
        117a0c:	ea000002 	b	117a1c <TMNP::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0xa4>
        117a10:	01a0d6b0 	streqh	sp, [r0, r0]!
        117a14:	e3a00000 	mov	r0, #0	; 0x0
        117a18:	e5820000 	str	r0, [r2]
        117a1c:	e5830000 	str	r0, [r3]
        117a20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNP::InitFrameBufs(void)
 * Address: 00117a24
 */
TMNP::InitFrameBufs(void) {
    /*
        117a24:	e92d4000 	stmdb	sp!, {lr}
        117a28:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        117a2c:	e5d1109b 	ldrb	r1, [r1, #155]
        117a30:	e3a0c004 	mov	ip, #4	; 0x4
        117a34:	e3310000 	teq	r1, #0	; 0x0
        117a38:	e3a01000 	mov	r1, #0	; 0x0
        117a3c:	0a00000e 	beq	117a7c <TMNP::InitFrameBufs(void)+0x58>
        117a40:	e3a03002 	mov	r3, #2	; 0x2
        117a44:	e0612201 	rsb	r2, r1, r1, lsl #4
        117a48:	e0822082 	add	r2, r2, r2, lsl #1
        117a4c:	e590e588 	ldr	lr, [r0, #1416]	; fField1416
        117a50:	e08ee182 	add	lr, lr, r2, lsl #3
        117a54:	e5ce3120 	strb	r3, [lr, #288]
        117a58:	e590e588 	ldr	lr, [r0, #1416]	; fField1416
        117a5c:	e08e2182 	add	r2, lr, r2, lsl #3
        117a60:	e5c2c121 	strb	ip, [r2, #289]
        117a64:	e2811001 	add	r1, r1, #1	; 0x1
        117a68:	e3510008 	cmp	r1, #8	; 0x8
        117a6c:	bafffff4 	blt	117a44 <TMNP::InitFrameBufs(void)+0x20>
        117a70:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        117a74:	e5a03c58 	str	r3, [r0, #3160]!	; fField3160
        117a78:	e8bd8000 	ldmia	sp!, {pc}
        117a7c:	e3a03001 	mov	r3, #1	; 0x1
        117a80:	e0612201 	rsb	r2, r1, r1, lsl #4
        117a84:	e0822082 	add	r2, r2, r2, lsl #1
        117a88:	e590e588 	ldr	lr, [r0, #1416]	; fField1416
        117a8c:	e08ee182 	add	lr, lr, r2, lsl #3
        117a90:	e5cec120 	strb	ip, [lr, #288]
        117a94:	e590e588 	ldr	lr, [r0, #1416]	; fField1416
        117a98:	e08ee182 	add	lr, lr, r2, lsl #3
        117a9c:	e5cec121 	strb	ip, [lr, #289]
        117aa0:	e590e588 	ldr	lr, [r0, #1416]	; fField1416
        117aa4:	e08ee182 	add	lr, lr, r2, lsl #3
        117aa8:	e5ce3122 	strb	r3, [lr, #290]
        117aac:	e590e588 	ldr	lr, [r0, #1416]	; fField1416
        117ab0:	e08e2182 	add	r2, lr, r2, lsl #3
        117ab4:	e5c23123 	strb	r3, [r2, #291]
        117ab8:	e2811001 	add	r1, r1, #1	; 0x1
        117abc:	e3510008 	cmp	r1, #8	; 0x8
        117ac0:	baffffee 	blt	117a80 <TMNP::InitFrameBufs(void)+0x5c>
        117ac4:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        117ac8:	e5a0cc58 	str	ip, [r0, #3160]!	; fField3160
        117acc:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TMNP::EnterConnectedState(void)
 * Address: 00117ad0
 */
TMNP::EnterConnectedState(void) {
    /*
        117ad0:	e1a0c00d 	mov	ip, sp
        117ad4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        117ad8:	e24cb004 	sub	fp, ip, #4	; 0x4
        117adc:	e1a04000 	mov	r4, r0
        117ae0:	e3a00000 	mov	r0, #0	; 0x0
        117ae4:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        117ae8:	e5a10cfc 	str	r0, [r1, #3324]!
        117aec:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        117af0:	e5a10d3c 	str	r0, [r1, #3388]!
        117af4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117af8:	e5901cec 	ldr	r1, [r0, #3308]	; fField3308
        117afc:	e5a01d08 	str	r1, [r0, #3336]!
        117b00:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117b04:	e5d0109a 	ldrb	r1, [r0, #154]	; fField154
        117b08:	e3510001 	cmp	r1, #1	; 0x1
        117b0c:	c5901cf8 	ldrgt	r1, [r0, #3320]	; fField3320
        117b10:	c5a01d04 	strgt	r1, [r0, #3332]!	; fField3332
        117b14:	e1a00004 	mov	r0, r4
        117b18:	eb63efa2 	bl	1a139a8 <TMNP::$InitFrameBufs(void)>
        117b1c:	e1a00004 	mov	r0, r4
        117b20:	eb640869 	bl	1a19ccc <TMNP::$SetRetransTimer(void)>
        117b24:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        117b28:	e5910000 	ldr	r0, [r1]
        117b2c:	e3100002 	tst	r0, #2	; 0x2
        117b30:	0a000006 	beq	117b50 <TMNP::EnterConnectedState(void)+0x80>
        117b34:	e3c00003 	bic	r0, r0, #3	; 0x3
        117b38:	e5810000 	str	r0, [r1]
        117b3c:	e1a00004 	mov	r0, r4
        117b40:	e3a01000 	mov	r1, #0	; 0x0
        117b44:	e5942000 	ldr	r2, [r4]
        117b48:	e2822064 	add	r2, r2, #100	; 0x64
        117b4c:	ea000003 	b	117b60 <TMNP::EnterConnectedState(void)+0x90>
        117b50:	e1a00004 	mov	r0, r4
        117b54:	e3a01000 	mov	r1, #0	; 0x0
        117b58:	e5942000 	ldr	r2, [r4]
        117b5c:	e2822054 	add	r2, r2, #84	; 0x54
        117b60:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        117b64:	e282f000 	add	pc, r2, #0	; 0x0
    */
}

/**
 * Symbol: TMNP::SetRetransTimer(void)
 * Address: 00117b68
 */
TMNP::SetRetransTimer(void) {
    /*
        117b68:	e3a01002 	mov	r1, #2	; 0x2
        117b6c:	e590255c 	ldr	r2, [r0, #1372]	; fField1372
        117b70:	e3520c96 	cmp	r2, #38400	; 0x9600
        117b74:	25900588 	ldrcs	r0, [r0, #1416]	; fField1416
        117b78:	2a00003e 	bcs	117c78 <TMNP::SetRetransTimer(void)+0x110>
        117b7c:	e3a03003 	mov	r3, #3	; 0x3
        117b80:	e3520c4b 	cmp	r2, #19200	; 0x4b00
        117b84:	3a000007 	bcc	117ba8 <TMNP::SetRetransTimer(void)+0x40>
        117b88:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        117b8c:	e59020a0 	ldr	r2, [r0, #160]	; fField160
        117b90:	e3520040 	cmp	r2, #64	; 0x40
        117b94:	9a000037 	bls	117c78 <TMNP::SetRetransTimer(void)+0x110>
        117b98:	e5d0209a 	ldrb	r2, [r0, #154]	; fField154
        117b9c:	e3520004 	cmp	r2, #4	; 0x4
        117ba0:	da000034 	ble	117c78 <TMNP::SetRetransTimer(void)+0x110>
        117ba4:	ea000022 	b	117c34 <TMNP::SetRetransTimer(void)+0xcc>
        117ba8:	e3a0c004 	mov	ip, #4	; 0x4
        117bac:	e3520d96 	cmp	r2, #9600	; 0x2580
        117bb0:	3a000007 	bcc	117bd4 <TMNP::SetRetransTimer(void)+0x6c>
        117bb4:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        117bb8:	e59020a0 	ldr	r2, [r0, #160]	; fField160
        117bbc:	e3520040 	cmp	r2, #64	; 0x40
        117bc0:	9a00002c 	bls	117c78 <TMNP::SetRetransTimer(void)+0x110>
        117bc4:	e5d0209a 	ldrb	r2, [r0, #154]	; fField154
        117bc8:	e3520004 	cmp	r2, #4	; 0x4
        117bcc:	da000029 	ble	117c78 <TMNP::SetRetransTimer(void)+0x110>
        117bd0:	ea000023 	b	117c64 <TMNP::SetRetransTimer(void)+0xfc>
        117bd4:	e3520d4b 	cmp	r2, #4800	; 0x12c0
        117bd8:	3a00000c 	bcc	117c10 <TMNP::SetRetransTimer(void)+0xa8>
        117bdc:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        117be0:	e59020a0 	ldr	r2, [r0, #160]	; fField160
        117be4:	e3520040 	cmp	r2, #64	; 0x40
        117be8:	8a000003 	bhi	117bfc <TMNP::SetRetransTimer(void)+0x94>
        117bec:	e5d0209a 	ldrb	r2, [r0, #154]	; fField154
        117bf0:	e3520004 	cmp	r2, #4	; 0x4
        117bf4:	da00001f 	ble	117c78 <TMNP::SetRetransTimer(void)+0x110>
        117bf8:	ea00000d 	b	117c34 <TMNP::SetRetransTimer(void)+0xcc>
        117bfc:	e5d0109a 	ldrb	r1, [r0, #154]	; fField154
        117c00:	e3510004 	cmp	r1, #4	; 0x4
        117c04:	c3a01006 	movgt	r1, #6	; 0x6
        117c08:	ca00001a 	bgt	117c78 <TMNP::SetRetransTimer(void)+0x110>
        117c0c:	ea000008 	b	117c34 <TMNP::SetRetransTimer(void)+0xcc>
        117c10:	e3520e96 	cmp	r2, #2400	; 0x960
        117c14:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        117c18:	e59010a0 	ldr	r1, [r0, #160]	; fField160
        117c1c:	3a00000a 	bcc	117c4c <TMNP::SetRetransTimer(void)+0xe4>
        117c20:	e3510040 	cmp	r1, #64	; 0x40
        117c24:	e5d0109a 	ldrb	r1, [r0, #154]	; fField154
        117c28:	8a000003 	bhi	117c3c <TMNP::SetRetransTimer(void)+0xd4>
        117c2c:	e3510004 	cmp	r1, #4	; 0x4
        117c30:	ca00000b 	bgt	117c64 <TMNP::SetRetransTimer(void)+0xfc>
        117c34:	e5a03cf4 	str	r3, [r0, #3316]!	; fField3316
        117c38:	e1a0f00e 	mov	pc, lr
        117c3c:	e3510004 	cmp	r1, #4	; 0x4
        117c40:	d3a01005 	movle	r1, #5	; 0x5
        117c44:	c3a0100a 	movgt	r1, #10	; 0xa
        117c48:	ea00000a 	b	117c78 <TMNP::SetRetransTimer(void)+0x110>
        117c4c:	e3510040 	cmp	r1, #64	; 0x40
        117c50:	e5d0109a 	ldrb	r1, [r0, #154]	; fField154
        117c54:	8a000004 	bhi	117c6c <TMNP::SetRetransTimer(void)+0x104>
        117c58:	e3510004 	cmp	r1, #4	; 0x4
        117c5c:	c3a01007 	movgt	r1, #7	; 0x7
        117c60:	ca000004 	bgt	117c78 <TMNP::SetRetransTimer(void)+0x110>
        117c64:	e5a0ccf4 	str	ip, [r0, #3316]!	; fField3316
        117c68:	e1a0f00e 	mov	pc, lr
        117c6c:	e3510004 	cmp	r1, #4	; 0x4
        117c70:	d3a0100b 	movle	r1, #11	; 0xb
        117c74:	c3a01013 	movgt	r1, #19	; 0x13
        117c78:	e5a01cf4 	str	r1, [r0, #3316]!	; fField3316
        117c7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNP::ParamNegotiation(unsigned char)
 * Address: 00117c80
 */
TMNP::ParamNegotiation(unsigned char) {
    /*
        117c80:	e1a0c00d 	mov	ip, sp
        117c84:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        117c88:	e24cb004 	sub	fp, ip, #4	; 0x4
        117c8c:	e1a04000 	mov	r4, r0
        117c90:	e20190ff 	and	r9, r1, #255	; 0xff
        117c94:	e24dd028 	sub	sp, sp, #40	; 0x28
        117c98:	e3a05001 	mov	r5, #1	; 0x1
        117c9c:	e3a00000 	mov	r0, #0	; 0x0
        117ca0:	e58d0008 	str	r0, [sp, #8]	; fField8
        117ca4:	e58d0014 	str	r0, [sp, #20]
        117ca8:	e58d0018 	str	r0, [sp, #24]	; fField24
        117cac:	e58d001c 	str	r0, [sp, #28]
        117cb0:	e58d0020 	str	r0, [sp, #32]
        117cb4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117cb8:	e5b01c78 	ldr	r1, [r0, #3192]!
        117cbc:	e1a0e00f 	mov	lr, pc
        117cc0:	e281f010 	add	pc, r1, #16	; 0x10
        117cc4:	ea000038 	b	117dac <TMNP::ParamNegotiation(unsigned char)+0x12c>
        117cc8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117ccc:	e5b01c78 	ldr	r1, [r0, #3192]!
        117cd0:	e1a0e00f 	mov	lr, pc
        117cd4:	e281f010 	add	pc, r1, #16	; 0x10
        117cd8:	e20080ff 	and	r8, r0, #255	; 0xff
        117cdc:	e3560008 	cmp	r6, #8	; 0x8
        117ce0:	0a00006a 	beq	117e90 <TMNP::ParamNegotiation(unsigned char)+0x210>
        117ce4:	ca00001d 	bgt	117d60 <TMNP::ParamNegotiation(unsigned char)+0xe0>
        117ce8:	e3360001 	teq	r6, #1	; 0x1
        117cec:	0a000040 	beq	117df4 <TMNP::ParamNegotiation(unsigned char)+0x174>
        117cf0:	e3360002 	teq	r6, #2	; 0x2
        117cf4:	0a000045 	beq	117e10 <TMNP::ParamNegotiation(unsigned char)+0x190>
        117cf8:	e3360003 	teq	r6, #3	; 0x3
        117cfc:	0a000053 	beq	117e50 <TMNP::ParamNegotiation(unsigned char)+0x1d0>
        117d00:	e3360004 	teq	r6, #4	; 0x4
        117d04:	1a00001c 	bne	117d7c <TMNP::ParamNegotiation(unsigned char)+0xfc>
        117d08:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117d0c:	e5b01c78 	ldr	r1, [r0, #3192]!
        117d10:	e1a0e00f 	mov	lr, pc
        117d14:	e281f010 	add	pc, r1, #16	; 0x10
        117d18:	e5cd0005 	strb	r0, [sp, #5]
        117d1c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117d20:	e5b01c78 	ldr	r1, [r0, #3192]!
        117d24:	e1a0e00f 	mov	lr, pc
        117d28:	e281f010 	add	pc, r1, #16	; 0x10
        117d2c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        117d30:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        117d34:	e592009c 	ldr	r0, [r2, #156]
        117d38:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        117d3c:	e1a01821 	mov	r1, r1, lsr #16
        117d40:	e1500001 	cmp	r0, r1
        117d44:	a1a00001 	movge	r0, r1
        117d48:	e3a01001 	mov	r1, #1	; 0x1
        117d4c:	e5a2009c 	str	r0, [r2, #156]!
        117d50:	e58d1018 	str	r1, [sp, #24]	; fField24
        117d54:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        117d58:	e5a100a0 	str	r0, [r1, #160]!	; fField160
        117d5c:	ea000012 	b	117dac <TMNP::ParamNegotiation(unsigned char)+0x12c>
        117d60:	e3360009 	teq	r6, #9	; 0x9
        117d64:	0a000052 	beq	117eb4 <TMNP::ParamNegotiation(unsigned char)+0x234>
        117d68:	e336000e 	teq	r6, #14	; 0xe
        117d6c:	0a000092 	beq	117fbc <TMNP::ParamNegotiation(unsigned char)+0x33c>
        117d70:	e33600c5 	teq	r6, #197	; 0xc5
        117d74:	03a06000 	moveq	r6, #0	; 0x0
        117d78:	0a000116 	beq	1181d8 <TMNP::ParamNegotiation(unsigned char)+0x558>
        117d7c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117d80:	e2403fe2 	sub	r3, r0, #904	; 0x388
        117d84:	e2833a01 	add	r3, r3, #4096	; 0x1000
        117d88:	e1a01008 	mov	r1, r8
        117d8c:	e1a00003 	mov	r0, r3
        117d90:	e3a02000 	mov	r2, #0	; 0x0
        117d94:	e5933000 	ldr	r3, [r3]
        117d98:	e1a0e00f 	mov	lr, pc
        117d9c:	e283f038 	add	pc, r3, #56	; 0x38
        117da0:	e3390000 	teq	r9, #0	; 0x0
        117da4:	1a000000 	bne	117dac <TMNP::ParamNegotiation(unsigned char)+0x12c>
        117da8:	e3a05000 	mov	r5, #0	; 0x0
        117dac:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117db0:	e5b01c78 	ldr	r1, [r0, #3192]!
        117db4:	e1a0e00f 	mov	lr, pc
        117db8:	e281f010 	add	pc, r1, #16	; 0x10
        117dbc:	e1a06000 	mov	r6, r0
        117dc0:	e3700001 	cmn	r0, #1	; 0x1
        117dc4:	13350000 	teqne	r5, #0	; 0x0
        117dc8:	1affffbe 	bne	117cc8 <TMNP::ParamNegotiation(unsigned char)+0x48>
        117dcc:	e3a07001 	mov	r7, #1	; 0x1
        117dd0:	e3a06000 	mov	r6, #0	; 0x0
        117dd4:	e59d0020 	ldr	r0, [sp, #32]
        117dd8:	e3300000 	teq	r0, #0	; 0x0
        117ddc:	0a000002 	beq	117dec <TMNP::ParamNegotiation(unsigned char)+0x16c>
        117de0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        117de4:	e3300002 	teq	r0, #2	; 0x2
        117de8:	0a0000ff 	beq	1181ec <TMNP::ParamNegotiation(unsigned char)+0x56c>
        117dec:	e3a05000 	mov	r5, #0	; 0x0
        117df0:	ea0001a3 	b	118484 <TMNP::ParamNegotiation(unsigned char)+0x804>
        117df4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117df8:	e2400fe2 	sub	r0, r0, #904	; 0x388
        117dfc:	e2800a01 	add	r0, r0, #4096	; 0x1000
        117e00:	e1a03000 	mov	r3, r0
        117e04:	e3a02000 	mov	r2, #0	; 0x0
        117e08:	e3a01006 	mov	r1, #6	; 0x6
        117e0c:	ea0000c2 	b	11811c <TMNP::ParamNegotiation(unsigned char)+0x49c>
        117e10:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117e14:	e2401fe2 	sub	r1, r0, #904	; 0x388
        117e18:	e2811a01 	add	r1, r1, #4096	; 0x1000
        117e1c:	e1a00001 	mov	r0, r1
        117e20:	e5911000 	ldr	r1, [r1]
        117e24:	e1a0e00f 	mov	lr, pc
        117e28:	e281f010 	add	pc, r1, #16	; 0x10
        117e2c:	e20000ff 	and	r0, r0, #255	; 0xff
        117e30:	e3a01002 	mov	r1, #2	; 0x2
        117e34:	e3500002 	cmp	r0, #2	; 0x2
        117e38:	c1a00001 	movgt	r0, r1
        117e3c:	e20000ff 	and	r0, r0, #255	; 0xff
        117e40:	e58d000c 	str	r0, [sp, #12]	; fField12
        117e44:	e3a00001 	mov	r0, #1	; 0x1
        117e48:	e58d0020 	str	r0, [sp, #32]
        117e4c:	eaffffd6 	b	117dac <TMNP::ParamNegotiation(unsigned char)+0x12c>
        117e50:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117e54:	e5d0609a 	ldrb	r6, [r0, #154]	; fField154
        117e58:	e2401fe2 	sub	r1, r0, #904	; 0x388
        117e5c:	e2811a01 	add	r1, r1, #4096	; 0x1000
        117e60:	e1a00001 	mov	r0, r1
        117e64:	e5911000 	ldr	r1, [r1]
        117e68:	e1a0e00f 	mov	lr, pc
        117e6c:	e281f010 	add	pc, r1, #16	; 0x10
        117e70:	e20000ff 	and	r0, r0, #255	; 0xff
        117e74:	e1560000 	cmp	r6, r0
        117e78:	b1a00006 	movlt	r0, r6
        117e7c:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        117e80:	e5c1009a 	strb	r0, [r1, #154]	; fField154
        117e84:	e3a00001 	mov	r0, #1	; 0x1
        117e88:	e58d001c 	str	r0, [sp, #28]
        117e8c:	eaffffc6 	b	117dac <TMNP::ParamNegotiation(unsigned char)+0x12c>
        117e90:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117e94:	e5b01c78 	ldr	r1, [r0, #3192]!
        117e98:	e1a0e00f 	mov	lr, pc
        117e9c:	e281f010 	add	pc, r1, #16	; 0x10
        117ea0:	e20000ff 	and	r0, r0, #255	; 0xff
        117ea4:	e58d0010 	str	r0, [sp, #16]
        117ea8:	e3a00001 	mov	r0, #1	; 0x1
        117eac:	e58d0014 	str	r0, [sp, #20]
        117eb0:	eaffffbd 	b	117dac <TMNP::ParamNegotiation(unsigned char)+0x12c>
        117eb4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117eb8:	e5b01c78 	ldr	r1, [r0, #3192]!
        117ebc:	e1a0e00f 	mov	lr, pc
        117ec0:	e281f010 	add	pc, r1, #16	; 0x10
        117ec4:	e1a01000 	mov	r1, r0
        117ec8:	e310001c 	tst	r0, #28	; 0x1c
        117ecc:	15940588 	ldrne	r0, [r4, #1416]	; fField1416
        117ed0:	1590200c 	ldrne	r2, [r0, #12]	; fField12
        117ed4:	12022008 	andne	r2, r2, #8	; 0x8
        117ed8:	13320000 	teqne	r2, #0	; 0x0
        117edc:	0a000022 	beq	117f6c <TMNP::ParamNegotiation(unsigned char)+0x2ec>
        117ee0:	e3110010 	tst	r1, #16	; 0x10
        117ee4:	0a000006 	beq	117f04 <TMNP::ParamNegotiation(unsigned char)+0x284>
        117ee8:	e5902018 	ldr	r2, [r0, #24]	; fField24
        117eec:	e1a02822 	mov	r2, r2, lsr #16
        117ef0:	e3520b02 	cmp	r2, #2048	; 0x800
        117ef4:	a3a01000 	movge	r1, #0	; 0x0
        117ef8:	a5c01019 	strgeb	r1, [r0, #25]
        117efc:	a3a01008 	movge	r1, #8	; 0x8
        117f00:	aa000011 	bge	117f4c <TMNP::ParamNegotiation(unsigned char)+0x2cc>
        117f04:	e3110008 	tst	r1, #8	; 0x8
        117f08:	0a000006 	beq	117f28 <TMNP::ParamNegotiation(unsigned char)+0x2a8>
        117f0c:	e5902018 	ldr	r2, [r0, #24]	; fField24
        117f10:	e1a02822 	mov	r2, r2, lsr #16
        117f14:	e3520b01 	cmp	r2, #1024	; 0x400
        117f18:	a3a01000 	movge	r1, #0	; 0x0
        117f1c:	a5c01019 	strgeb	r1, [r0, #25]
        117f20:	a3a01004 	movge	r1, #4	; 0x4
        117f24:	aa000008 	bge	117f4c <TMNP::ParamNegotiation(unsigned char)+0x2cc>
        117f28:	e3110004 	tst	r1, #4	; 0x4
        117f2c:	0a000007 	beq	117f50 <TMNP::ParamNegotiation(unsigned char)+0x2d0>
        117f30:	e5901018 	ldr	r1, [r0, #24]	; fField24
        117f34:	e1a01821 	mov	r1, r1, lsr #16
        117f38:	e3510c02 	cmp	r1, #512	; 0x200
        117f3c:	ba000003 	blt	117f50 <TMNP::ParamNegotiation(unsigned char)+0x2d0>
        117f40:	e3a01000 	mov	r1, #0	; 0x0
        117f44:	e5c01019 	strb	r1, [r0, #25]
        117f48:	e3a01002 	mov	r1, #2	; 0x2
        117f4c:	e5c01018 	strb	r1, [r0, #24]	; fField24
        117f50:	e3a01020 	mov	r1, #32	; 0x20
        117f54:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117f58:	e5c01015 	strb	r1, [r0, #21]
        117f5c:	e3a01003 	mov	r1, #3	; 0x3
        117f60:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117f64:	e5c01014 	strb	r1, [r0, #20]
        117f68:	ea000062 	b	1180f8 <TMNP::ParamNegotiation(unsigned char)+0x478>
        117f6c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        117f70:	e3500000 	cmp	r0, #0	; 0x0
        117f74:	1a000007 	bne	117f98 <TMNP::ParamNegotiation(unsigned char)+0x318>
        117f78:	e3110002 	tst	r1, #2	; 0x2
        117f7c:	15940588 	ldrne	r0, [r4, #1416]	; fField1416
        117f80:	1590000c 	ldrne	r0, [r0, #12]	; fField12
        117f84:	12000004 	andne	r0, r0, #4	; 0x4
        117f88:	13300000 	teqne	r0, #0	; 0x0
        117f8c:	13a00004 	movne	r0, #4	; 0x4
        117f90:	1a000059 	bne	1180fc <TMNP::ParamNegotiation(unsigned char)+0x47c>
        117f94:	ea000000 	b	117f9c <TMNP::ParamNegotiation(unsigned char)+0x31c>
        117f98:	1affff83 	bne	117dac <TMNP::ParamNegotiation(unsigned char)+0x12c>
        117f9c:	e3110001 	tst	r1, #1	; 0x1
        117fa0:	15940588 	ldrne	r0, [r4, #1416]	; fField1416
        117fa4:	1590000c 	ldrne	r0, [r0, #12]	; fField12
        117fa8:	12000002 	andne	r0, r0, #2	; 0x2
        117fac:	13300000 	teqne	r0, #0	; 0x0
        117fb0:	0affff7d 	beq	117dac <TMNP::ParamNegotiation(unsigned char)+0x12c>
        117fb4:	e3a00002 	mov	r0, #2	; 0x2
        117fb8:	ea00004f 	b	1180fc <TMNP::ParamNegotiation(unsigned char)+0x47c>
        117fbc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117fc0:	e5b01c78 	ldr	r1, [r0, #3192]!
        117fc4:	e1a0e00f 	mov	lr, pc
        117fc8:	e281f010 	add	pc, r1, #16	; 0x10
        117fcc:	e3300000 	teq	r0, #0	; 0x0
        117fd0:	15941588 	ldrne	r1, [r4, #1416]	; fField1416
        117fd4:	1591200c 	ldrne	r2, [r1, #12]	; fField12
        117fd8:	12022008 	andne	r2, r2, #8	; 0x8
        117fdc:	13320000 	teqne	r2, #0	; 0x0
        117fe0:	0a000047 	beq	118104 <TMNP::ParamNegotiation(unsigned char)+0x484>
        117fe4:	e5c10014 	strb	r0, [r1, #20]
        117fe8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        117fec:	e5b01c78 	ldr	r1, [r0, #3192]!
        117ff0:	e1a0e00f 	mov	lr, pc
        117ff4:	e281f010 	add	pc, r1, #16	; 0x10
        117ff8:	e5cd0000 	strb	r0, [sp]
        117ffc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118000:	e5b01c78 	ldr	r1, [r0, #3192]!
        118004:	e1a0e00f 	mov	lr, pc
        118008:	e281f010 	add	pc, r1, #16	; 0x10
        11800c:	e5cd0001 	strb	r0, [sp, #1]
        118010:	e59d0000 	ldr	r0, [sp]
        118014:	e1a00820 	mov	r0, r0, lsr #16
        118018:	e3500c02 	cmp	r0, #512	; 0x200
        11801c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118020:	aa000019 	bge	11808c <TMNP::ParamNegotiation(unsigned char)+0x40c>
        118024:	e5900004 	ldr	r0, [r0, #4]	; fField4
        118028:	e3100002 	tst	r0, #2	; 0x2
        11802c:	0affff5d 	beq	117da8 <TMNP::ParamNegotiation(unsigned char)+0x128>
        118030:	e59d0000 	ldr	r0, [sp]
        118034:	e1a00820 	mov	r0, r0, lsr #16
        118038:	e3300008 	teq	r0, #8	; 0x8
        11803c:	1affff59 	bne	117da8 <TMNP::ParamNegotiation(unsigned char)+0x128>
        118040:	e3a01000 	mov	r1, #0	; 0x0
        118044:	e5cd1001 	strb	r1, [sp, #1]
        118048:	e3a00008 	mov	r0, #8	; 0x8
        11804c:	e5cd0000 	strb	r0, [sp]
        118050:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118054:	e5b01c78 	ldr	r1, [r0, #3192]!
        118058:	e1a0e00f 	mov	lr, pc
        11805c:	e281f010 	add	pc, r1, #16	; 0x10
        118060:	e20000ff 	and	r0, r0, #255	; 0xff
        118064:	e3500006 	cmp	r0, #6	; 0x6
        118068:	baffff4e 	blt	117da8 <TMNP::ParamNegotiation(unsigned char)+0x128>
        11806c:	e35000fa 	cmp	r0, #250	; 0xfa
        118070:	caffff4c 	bgt	117da8 <TMNP::ParamNegotiation(unsigned char)+0x128>
        118074:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        118078:	e5d21015 	ldrb	r1, [r2, #21]
        11807c:	e1510000 	cmp	r1, r0
        118080:	a1a01000 	movge	r1, r0
        118084:	e5c21015 	strb	r1, [r2, #21]
        118088:	ea00001a 	b	1180f8 <TMNP::ParamNegotiation(unsigned char)+0x478>
        11808c:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        118090:	e3c11002 	bic	r1, r1, #2	; 0x2
        118094:	e5801000 	str	r1, [r0]
        118098:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        11809c:	e5920018 	ldr	r0, [r2, #24]	; fField24
        1180a0:	e1a00820 	mov	r0, r0, lsr #16
        1180a4:	e59d1000 	ldr	r1, [sp]
        1180a8:	e1a01821 	mov	r1, r1, lsr #16
        1180ac:	e1500001 	cmp	r0, r1
        1180b0:	a1a00001 	movge	r0, r1
        1180b4:	e5c20019 	strb	r0, [r2, #25]
        1180b8:	e1a00440 	mov	r0, r0, asr #8
        1180bc:	e5c20018 	strb	r0, [r2, #24]	; fField24
        1180c0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1180c4:	e5b01c78 	ldr	r1, [r0, #3192]!
        1180c8:	e1a0e00f 	mov	lr, pc
        1180cc:	e281f010 	add	pc, r1, #16	; 0x10
        1180d0:	e20000ff 	and	r0, r0, #255	; 0xff
        1180d4:	e3500006 	cmp	r0, #6	; 0x6
        1180d8:	baffff32 	blt	117da8 <TMNP::ParamNegotiation(unsigned char)+0x128>
        1180dc:	e35000fa 	cmp	r0, #250	; 0xfa
        1180e0:	caffff30 	bgt	117da8 <TMNP::ParamNegotiation(unsigned char)+0x128>
        1180e4:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        1180e8:	e5d12015 	ldrb	r2, [r1, #21]
        1180ec:	e1520000 	cmp	r2, r0
        1180f0:	b1a00002 	movlt	r0, r2
        1180f4:	e5c10015 	strb	r0, [r1, #21]
        1180f8:	e3a00008 	mov	r0, #8	; 0x8
        1180fc:	e58d0008 	str	r0, [sp, #8]	; fField8
        118100:	eaffff29 	b	117dac <TMNP::ParamNegotiation(unsigned char)+0x12c>
        118104:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118108:	e2400fe2 	sub	r0, r0, #904	; 0x388
        11810c:	e2800a01 	add	r0, r0, #4096	; 0x1000
        118110:	e1a03000 	mov	r3, r0
        118114:	e3a02000 	mov	r2, #0	; 0x0
        118118:	e3a01003 	mov	r1, #3	; 0x3
        11811c:	e5933000 	ldr	r3, [r3]
        118120:	e1a0e00f 	mov	lr, pc
        118124:	e283f038 	add	pc, r3, #56	; 0x38
        118128:	eaffff1f 	b	117dac <TMNP::ParamNegotiation(unsigned char)+0x12c>
        11812c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118130:	e5b01c78 	ldr	r1, [r0, #3192]!
        118134:	e1a0e00f 	mov	lr, pc
        118138:	e281f010 	add	pc, r1, #16	; 0x10
        11813c:	e1a07000 	mov	r7, r0
        118140:	e3700001 	cmn	r0, #1	; 0x1
        118144:	0a000021 	beq	1181d0 <TMNP::ParamNegotiation(unsigned char)+0x550>
        118148:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11814c:	e5b01c78 	ldr	r1, [r0, #3192]!
        118150:	e1a0e00f 	mov	lr, pc
        118154:	e281f010 	add	pc, r1, #16	; 0x10
        118158:	e20000ff 	and	r0, r0, #255	; 0xff
        11815c:	e3370001 	teq	r7, #1	; 0x1
        118160:	e58d0024 	str	r0, [sp, #36]
        118164:	1a000016 	bne	1181c4 <TMNP::ParamNegotiation(unsigned char)+0x544>
        118168:	e24dd004 	sub	sp, sp, #4	; 0x4
        11816c:	e3a07000 	mov	r7, #0	; 0x0
        118170:	e1a0a00d 	mov	sl, sp
        118174:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118178:	e5b01c78 	ldr	r1, [r0, #3192]!
        11817c:	e1a0e00f 	mov	lr, pc
        118180:	e281f010 	add	pc, r1, #16	; 0x10
        118184:	e7ca0007 	strb	r0, [sl, r7]
        118188:	e2877001 	add	r7, r7, #1	; 0x1
        11818c:	e3570004 	cmp	r7, #4	; 0x4
        118190:	3afffff7 	bcc	118174 <TMNP::ParamNegotiation(unsigned char)+0x4f4>
        118194:	e5941564 	ldr	r1, [r4, #1380]	; fField1380
        118198:	e59d0000 	ldr	r0, [sp]
        11819c:	e1510000 	cmp	r1, r0
        1181a0:	31a00001 	movcc	r0, r1
        1181a4:	e3390000 	teq	r9, #0	; 0x0
        1181a8:	e5840568 	str	r0, [r4, #1384]	; fField1384
        1181ac:	1a000003 	bne	1181c0 <TMNP::ParamNegotiation(unsigned char)+0x540>
        1181b0:	e1a01000 	mov	r1, r0
        1181b4:	e1a00004 	mov	r0, r4
        1181b8:	eb63d543 	bl	1a0d6cc <TSerTool::$ChangeSpeed(unsigned long)>
        1181bc:	e584055c 	str	r0, [r4, #1372]	; fField1372
        1181c0:	e28dd004 	add	sp, sp, #4	; 0x4
        1181c4:	e59d0024 	ldr	r0, [sp, #36]
        1181c8:	e0866000 	add	r6, r6, r0
        1181cc:	ea000000 	b	1181d4 <TMNP::ParamNegotiation(unsigned char)+0x554>
        1181d0:	e3a05000 	mov	r5, #0	; 0x0
        1181d4:	e2866002 	add	r6, r6, #2	; 0x2
        1181d8:	e1560008 	cmp	r6, r8
        1181dc:	aafffef2 	bge	117dac <TMNP::ParamNegotiation(unsigned char)+0x12c>
        1181e0:	e3350000 	teq	r5, #0	; 0x0
        1181e4:	0afffef0 	beq	117dac <TMNP::ParamNegotiation(unsigned char)+0x12c>
        1181e8:	eaffffcf 	b	11812c <TMNP::ParamNegotiation(unsigned char)+0x4ac>
        1181ec:	e3350000 	teq	r5, #0	; 0x0
        1181f0:	0a0000a3 	beq	118484 <TMNP::ParamNegotiation(unsigned char)+0x804>
        1181f4:	e59d001c 	ldr	r0, [sp, #28]
        1181f8:	e3300000 	teq	r0, #0	; 0x0
        1181fc:	05940588 	ldreq	r0, [r4, #1416]	; fField1416
        118200:	05c0709a 	streqb	r7, [r0, #154]	; fField154
        118204:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118208:	e5d010b1 	ldrb	r1, [r0, #177]
        11820c:	e5d0209a 	ldrb	r2, [r0, #154]	; fField154
        118210:	e0811002 	add	r1, r1, r2
        118214:	e5c010b0 	strb	r1, [r0, #176]
        118218:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        11821c:	e3300000 	teq	r0, #0	; 0x0
        118220:	0a00001c 	beq	118298 <TMNP::ParamNegotiation(unsigned char)+0x618>
        118224:	e59d0014 	ldr	r0, [sp, #20]
        118228:	e3300000 	teq	r0, #0	; 0x0
        11822c:	159d0010 	ldrne	r0, [sp, #16]
        118230:	12000001 	andne	r0, r0, #1	; 0x1
        118234:	13300000 	teqne	r0, #0	; 0x0
        118238:	0a000005 	beq	118254 <TMNP::ParamNegotiation(unsigned char)+0x5d4>
        11823c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118240:	e590109c 	ldr	r1, [r0, #156]
        118244:	e3310040 	teq	r1, #64	; 0x40
        118248:	03a01c01 	moveq	r1, #256	; 0x100
        11824c:	05a010a0 	streq	r1, [r0, #160]!	; fField160
        118250:	0a000003 	beq	118264 <TMNP::ParamNegotiation(unsigned char)+0x5e4>
        118254:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118258:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        11825c:	e3c11004 	bic	r1, r1, #4	; 0x4
        118260:	e5801000 	str	r1, [r0]
        118264:	e59d0014 	ldr	r0, [sp, #20]
        118268:	e3300000 	teq	r0, #0	; 0x0
        11826c:	0a00000f 	beq	1182b0 <TMNP::ParamNegotiation(unsigned char)+0x630>
        118270:	e59d0010 	ldr	r0, [sp, #16]
        118274:	e3100002 	tst	r0, #2	; 0x2
        118278:	05940588 	ldreq	r0, [r4, #1416]	; fField1416
        11827c:	05c0609b 	streqb	r6, [r0, #155]
        118280:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118284:	e5901004 	ldr	r1, [r0, #4]	; fField4
        118288:	e3110004 	tst	r1, #4	; 0x4
        11828c:	059010a0 	ldreq	r1, [r0, #160]	; fField160
        118290:	05a01d34 	streq	r1, [r0, #3380]!
        118294:	ea000007 	b	1182b8 <TMNP::ParamNegotiation(unsigned char)+0x638>
        118298:	e3a00f41 	mov	r0, #260	; 0x104
        11829c:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        1182a0:	e5a1009c 	str	r0, [r1, #156]!
        1182a4:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        1182a8:	e5a100a0 	str	r0, [r1, #160]!	; fField160
        1182ac:	eaffffe8 	b	118254 <TMNP::ParamNegotiation(unsigned char)+0x5d4>
        1182b0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1182b4:	e5c0609b 	strb	r6, [r0, #155]
        1182b8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1182bc:	e3300000 	teq	r0, #0	; 0x0
        1182c0:	05940588 	ldreq	r0, [r4, #1416]	; fField1416
        1182c4:	05a07034 	streq	r7, [r0, #52]!
        1182c8:	0a000061 	beq	118454 <TMNP::ParamNegotiation(unsigned char)+0x7d4>
        1182cc:	e59f205c 	ldr	r2, [pc, #5c]	; 118330 <TMNP::ParamNegotiation(unsigned char)+0x6b0>
        1182d0:	e59f105c 	ldr	r1, [pc, #5c]	; 118334 <TMNP::ParamNegotiation(unsigned char)+0x6b4>
        1182d4:	e3300002 	teq	r0, #2	; 0x2
        1182d8:	0a000041 	beq	1183e4 <TMNP::ParamNegotiation(unsigned char)+0x764>
        1182dc:	e3300004 	teq	r0, #4	; 0x4
        1182e0:	03a01004 	moveq	r1, #4	; 0x4
        1182e4:	05940588 	ldreq	r0, [r4, #1416]	; fField1416
        1182e8:	05a01034 	streq	r1, [r0, #52]!
        1182ec:	0a000058 	beq	118454 <TMNP::ParamNegotiation(unsigned char)+0x7d4>
        1182f0:	e3300008 	teq	r0, #8	; 0x8
        1182f4:	1a000056 	bne	118454 <TMNP::ParamNegotiation(unsigned char)+0x7d4>
        1182f8:	e3a00008 	mov	r0, #8	; 0x8
        1182fc:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        118300:	e5a30034 	str	r0, [r3, #52]!
        118304:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118308:	e5d03014 	ldrb	r3, [r0, #20]
        11830c:	e3330003 	teq	r3, #3	; 0x3
        118310:	03a0c003 	moveq	ip, #3	; 0x3
        118314:	0a00000c 	beq	11834c <TMNP::ParamNegotiation(unsigned char)+0x6cc>
        118318:	e590c000 	ldr	ip, [r0]
        11831c:	e31c0002 	tst	ip, #2	; 0x2
        118320:	0a000004 	beq	118338 <TMNP::ParamNegotiation(unsigned char)+0x6b8>
        118324:	e3330001 	teq	r3, #1	; 0x1
        118328:	0a000006 	beq	118348 <TMNP::ParamNegotiation(unsigned char)+0x6c8>
        11832c:	ea000003 	b	118340 <TMNP::ParamNegotiation(unsigned char)+0x6c0>
        118330:	01a14a58 	moveq	r4, r8, asr sl
        118334:	01a14a54 	moveq	r4, r4, asr sl
        118338:	e3330001 	teq	r3, #1	; 0x1
        11833c:	1a000001 	bne	118348 <TMNP::ParamNegotiation(unsigned char)+0x6c8>
        118340:	e3a0c001 	mov	ip, #1	; 0x1
        118344:	ea000000 	b	11834c <TMNP::ParamNegotiation(unsigned char)+0x6cc>
        118348:	e3a0c002 	mov	ip, #2	; 0x2
        11834c:	e31c0001 	tst	ip, #1	; 0x1
        118350:	0a00000a 	beq	118380 <TMNP::ParamNegotiation(unsigned char)+0x700>
        118354:	e5903010 	ldr	r3, [r0, #16]
        118358:	e5a03020 	str	r3, [r0, #32]!
        11835c:	e59f0074 	ldr	r0, [pc, #74]	; 1183d8 <TMNP::ParamNegotiation(unsigned char)+0x758>
        118360:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        118364:	e5a30028 	str	r0, [r3, #40]!	; fField40
        118368:	e59f306c 	ldr	r3, [pc, #6c]	; 1183dc <TMNP::ParamNegotiation(unsigned char)+0x75c>
        11836c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118370:	e5a0302c 	str	r3, [r0, #44]!
        118374:	e3a03006 	mov	r3, #6	; 0x6
        118378:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11837c:	e5a03038 	str	r3, [r0, #56]!
        118380:	e31c0002 	tst	ip, #2	; 0x2
        118384:	0a000008 	beq	1183ac <TMNP::ParamNegotiation(unsigned char)+0x72c>
        118388:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11838c:	e5903010 	ldr	r3, [r0, #16]
        118390:	e5a03024 	str	r3, [r0, #36]!
        118394:	e59f0044 	ldr	r0, [pc, #44]	; 1183e0 <TMNP::ParamNegotiation(unsigned char)+0x760>
        118398:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        11839c:	e5a30030 	str	r0, [r3, #48]!
        1183a0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1183a4:	e5d03015 	ldrb	r3, [r0, #21]
        1183a8:	e5a0303c 	str	r3, [r0, #60]!	; fField60
        1183ac:	e1a03004 	mov	r3, r4
        1183b0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1183b4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1183b8:	e5d03015 	ldrb	r3, [r0, #21]
        1183bc:	e5902018 	ldr	r2, [r0, #24]	; fField24
        1183c0:	e1a02822 	mov	r2, r2, lsr #16
        1183c4:	e5900010 	ldr	r0, [r0, #16]
        1183c8:	e1a0100c 	mov	r1, ip
        1183cc:	eb640e87 	bl	1a1bdf0 <$V42InitCompress__FP13TCompressVarsUiN22PFUlUc_vT5l>
        1183d0:	e28dd00c 	add	sp, sp, #12	; 0xc
        1183d4:	ea00001e 	b	118454 <TMNP::ParamNegotiation(unsigned char)+0x7d4>
        1183d8:	01a0b5e0 	moveq	fp, r0, ror #11
        1183dc:	01a0b5e4 	moveq	fp, r4, ror #11
        1183e0:	01a0b5dc 	ldreqd	fp, [r0, ip]!
        1183e4:	e3a00002 	mov	r0, #2	; 0x2
        1183e8:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        1183ec:	e5a30034 	str	r0, [r3, #52]!
        1183f0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1183f4:	e590301c 	ldr	r3, [r0, #28]
        1183f8:	e5a03020 	str	r3, [r0, #32]!
        1183fc:	e59f0074 	ldr	r0, [pc, #74]	; 118478 <TMNP::ParamNegotiation(unsigned char)+0x7f8>
        118400:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        118404:	e5a30028 	str	r0, [r3, #40]!	; fField40
        118408:	e59f306c 	ldr	r3, [pc, #6c]	; 11847c <TMNP::ParamNegotiation(unsigned char)+0x7fc>
        11840c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118410:	e5a0302c 	str	r3, [r0, #44]!
        118414:	e3a03003 	mov	r3, #3	; 0x3
        118418:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11841c:	e5a03038 	str	r3, [r0, #56]!
        118420:	e3a000fa 	mov	r0, #250	; 0xfa
        118424:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        118428:	e5a3003c 	str	r0, [r3, #60]!	; fField60
        11842c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118430:	e590301c 	ldr	r3, [r0, #28]
        118434:	e5a03024 	str	r3, [r0, #36]!
        118438:	e59f3040 	ldr	r3, [pc, #40]	; 118480 <TMNP::ParamNegotiation(unsigned char)+0x800>	; fField40
        11843c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118440:	e5a03030 	str	r3, [r0, #48]!
        118444:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118448:	e590001c 	ldr	r0, [r0, #28]
        11844c:	e1a03004 	mov	r3, r4
        118450:	eb63f17d 	bl	1a14a4c <$MNPC5Init__FP14TMNPClass5VarsPFUlUc_vT2l>
        118454:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118458:	e1a01000 	mov	r1, r0
        11845c:	e590200c 	ldr	r2, [r0, #12]	; fField12
        118460:	e5900034 	ldr	r0, [r0, #52]
        118464:	e1120000 	tst	r2, r0
        118468:	03a05000 	moveq	r5, #0	; 0x0
        11846c:	03a03003 	moveq	r3, #3	; 0x3
        118470:	05c13098 	streqb	r3, [r1, #152]
        118474:	ea000005 	b	118490 <TMNP::ParamNegotiation(unsigned char)+0x810>
        118478:	01a14a40 	moveq	r4, r0, asr #20
        11847c:	01a14a48 	moveq	r4, r8, asr #20
        118480:	01a14a44 	moveq	r4, r4, asr #20
        118484:	e3a01003 	mov	r1, #3	; 0x3
        118488:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11848c:	e5c01098 	strb	r1, [r0, #152]
        118490:	e5941184 	ldr	r1, [r4, #388]	; fField388
        118494:	e3310000 	teq	r1, #0	; 0x0
        118498:	0a000015 	beq	1184f4 <TMNP::ParamNegotiation(unsigned char)+0x874>
        11849c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1184a0:	e1a0000d 	mov	r0, sp
        1184a4:	eb6a7593 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
        1184a8:	e1a0000d 	mov	r0, sp
        1184ac:	e59f1070 	ldr	r1, [pc, #70]	; 118524 <TMNP::ParamNegotiation(unsigned char)+0x8a4>
        1184b0:	eb6a81d7 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
        1184b4:	e3300000 	teq	r0, #0	; 0x0
        1184b8:	0a000009 	beq	1184e4 <TMNP::ParamNegotiation(unsigned char)+0x864>
        1184bc:	e59d1024 	ldr	r1, [sp, #36]
        1184c0:	e580100c 	str	r1, [r0, #12]	; fField12
        1184c4:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        1184c8:	e591200c 	ldr	r2, [r1, #12]	; fField12
        1184cc:	e5911034 	ldr	r1, [r1, #52]
        1184d0:	e1120001 	tst	r2, r1
        1184d4:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1184d8:	e3c110ff 	bic	r1, r1, #255	; 0xff
        1184dc:	138110ff 	orrne	r1, r1, #255	; 0xff
        1184e0:	e5a01008 	str	r1, [r0, #8]!	; fField8
        1184e4:	e1a0000d 	mov	r0, sp
        1184e8:	e3a01000 	mov	r1, #0	; 0x0
        1184ec:	eb6a7992 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
        1184f0:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1184f4:	e5c4703c 	strb	r7, [r4, #60]	; fField60
        1184f8:	e5c4703d 	strb	r7, [r4, #61]	; fField61
        1184fc:	e5c4603e 	strb	r6, [r4, #62]	; fField62
        118500:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118504:	e5900034 	ldr	r0, [r0, #52]
        118508:	e310000a 	tst	r0, #10	; 0xa
        11850c:	e594055c 	ldr	r0, [r4, #1372]	; fField1372
        118510:	10800080 	addne	r0, r0, r0, lsl #1
        118514:	11a000a0 	movne	r0, r0, lsr #1
        118518:	e5a40044 	str	r0, [r4, #68]!	; fField68
        11851c:	e1a00005 	mov	r0, r5
        118520:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        118524:	6d6e7063 	stcvsl	0, cr7, [lr, -#396]!
    */
}

/**
 * Symbol: TMNP::ReceiveCredit(void)
 * Address: 00118528
 */
TMNP::ReceiveCredit(void) {
    /*
        118528:	e1a0c00d 	mov	ip, sp
        11852c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        118530:	e24cb004 	sub	fp, ip, #4	; 0x4
        118534:	e1a04000 	mov	r4, r0
        118538:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11853c:	e2800d33 	add	r0, r0, #3264	; 0xcc0
        118540:	eb6bb77b 	bl	1c06334 <TCircleBuf::$BufferSpace(void)>
        118544:	e1a01000 	mov	r1, r0
        118548:	e5944588 	ldr	r4, [r4, #1416]	; fField1416
        11854c:	e59400a0 	ldr	r0, [r4, #160]	; fField160
        118550:	eb6a68fc 	bl	1bb2948 <$__rt_udiv>
        118554:	e5d4109a 	ldrb	r1, [r4, #154]	; fField154
        118558:	e1510000 	cmp	r1, r0
        11855c:	31a00001 	movcc	r0, r1
        118560:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::RetransTimeOut(void)
 * Address: 00118564
 */
TMNP::RetransTimeOut(void) {
    /*
        118564:	e1a0c00d 	mov	ip, sp
        118568:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11856c:	e24cb004 	sub	fp, ip, #4	; 0x4
        118570:	e1a04000 	mov	r4, r0
        118574:	e5900018 	ldr	r0, [r0, #24]	; fField24
        118578:	e3100001 	tst	r0, #1	; 0x1
        11857c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118580:	0a000018 	beq	1185e8 <TMNP::RetransTimeOut(void)+0x84>
        118584:	e5901d3c 	ldr	r1, [r0, #3388]
        118588:	e3510003 	cmp	r1, #3	; 0x3
        11858c:	8a00000b 	bhi	1185c0 <TMNP::RetransTimeOut(void)+0x5c>
        118590:	e5900000 	ldr	r0, [r0]
        118594:	e3100002 	tst	r0, #2	; 0x2
        118598:	15940568 	ldrne	r0, [r4, #1384]	; fField1384
        11859c:	13300000 	teqne	r0, #0	; 0x0
        1185a0:	0a000003 	beq	1185b4 <TMNP::RetransTimeOut(void)+0x50>
        1185a4:	e5941560 	ldr	r1, [r4, #1376]	; fField1376
        1185a8:	e1a00004 	mov	r0, r4
        1185ac:	eb63d446 	bl	1a0d6cc <TSerTool::$ChangeSpeed(unsigned long)>
        1185b0:	e584055c 	str	r0, [r4, #1372]	; fField1372
        1185b4:	e1a00004 	mov	r0, r4
        1185b8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1185bc:	ea641217 	b	1a1ce20 <TMNP::$XmitLR(void)>
        1185c0:	e3a01001 	mov	r1, #1	; 0x1
        1185c4:	e5c01098 	strb	r1, [r0, #152]
        1185c8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1185cc:	e3300000 	teq	r0, #0	; 0x0
        1185d0:	03a00011 	moveq	r0, #17	; 0x11
        1185d4:	05840028 	streq	r0, [r4, #40]	; fField40
        1185d8:	e1a00004 	mov	r0, r4
        1185dc:	e3e01025 	mvn	r1, #37	; 0x25
        1185e0:	e2411c4e 	sub	r1, r1, #19968	; 0x4e00
        1185e4:	ea00000b 	b	118618 <TMNP::RetransTimeOut(void)+0xb4>
        1185e8:	e5901d38 	ldr	r1, [r0, #3384]
        1185ec:	e351000b 	cmp	r1, #11	; 0xb
        1185f0:	3a00000a 	bcc	118620 <TMNP::RetransTimeOut(void)+0xbc>
        1185f4:	e3a01004 	mov	r1, #4	; 0x4
        1185f8:	e5c01098 	strb	r1, [r0, #152]
        1185fc:	e5940028 	ldr	r0, [r4, #40]	; fField40
        118600:	e3300000 	teq	r0, #0	; 0x0
        118604:	03a0000b 	moveq	r0, #11	; 0xb
        118608:	05840028 	streq	r0, [r4, #40]	; fField40
        11860c:	e1a00004 	mov	r0, r4
        118610:	e3e01022 	mvn	r1, #34	; 0x22
        118614:	e2411c4e 	sub	r1, r1, #19968	; 0x4e00
        118618:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        11861c:	ea6aa29b 	b	1bc1090 <TCommTool::$StartAbort(long)>
        118620:	e5901000 	ldr	r1, [r0]
        118624:	e3110502 	tst	r1, #8388608	; 0x800000
        118628:	e5d010b1 	ldrb	r1, [r0, #177]
        11862c:	e2011007 	and	r1, r1, #7	; 0x7
        118630:	e0611201 	rsb	r1, r1, r1, lsl #4
        118634:	e0811081 	add	r1, r1, r1, lsl #1
        118638:	e0801181 	add	r1, r0, r1, lsl #3
        11863c:	e28110c4 	add	r1, r1, #196	; 0xc4
        118640:	05a010a4 	streq	r1, [r0, #164]!
        118644:	15a010ac 	strne	r1, [r0, #172]!	; fField172
        118648:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11864c:	e5901000 	ldr	r1, [r0]
        118650:	e3811401 	orr	r1, r1, #16777216	; 0x1000000
        118654:	e5801000 	str	r1, [r0]
        118658:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11865c:	e5d0109b 	ldrb	r1, [r0, #155]
        118660:	e3310000 	teq	r1, #0	; 0x0
        118664:	0a000005 	beq	118680 <TMNP::RetransTimeOut(void)+0x11c>
        118668:	e5901d34 	ldr	r1, [r0, #3380]
        11866c:	e3510020 	cmp	r1, #32	; 0x20
        118670:	9a000002 	bls	118680 <TMNP::RetransTimeOut(void)+0x11c>
        118674:	e5b01d34 	ldr	r1, [r0, #3380]!
        118678:	e2411018 	sub	r1, r1, #24	; 0x18
        11867c:	e5801000 	str	r1, [r0]
        118680:	e1a00004 	mov	r0, r4
        118684:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        118688:	ea6411e5 	b	1a1ce24 <TMNP::$XmitLT(void)>
    */
}

/**
 * Symbol: TMNP::AckTimeOut(void)
 * Address: 0011868c
 */
TMNP::AckTimeOut(void) {
    /*
        11868c:	e5901018 	ldr	r1, [r0, #24]	; fField24
        118690:	e3110002 	tst	r1, #2	; 0x2
        118694:	13a01302 	movne	r1, #134217728	; 0x8000000
        118698:	1a6411dd 	bne	1a1ce14 <TMNP::$XmitLA(unsigned long)>
        11869c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNP::WindowTimeOut(void)
 * Address: 001186a0
 */
TMNP::WindowTimeOut(void) {
    /*
        1186a0:	e5901018 	ldr	r1, [r0, #24]	; fField24
        1186a4:	e3110002 	tst	r1, #2	; 0x2
        1186a8:	13a01302 	movne	r1, #134217728	; 0x8000000
        1186ac:	1a6411d8 	bne	1a1ce14 <TMNP::$XmitLA(unsigned long)>
        1186b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNP::RcvInit(void)
 * Address: 00118900
 */
TMNP::RcvInit(void) {
    /*
        118900:	e1a0c00d 	mov	ip, sp
        118904:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        118908:	e24cb004 	sub	fp, ip, #4	; 0x4
        11890c:	e1a04000 	mov	r4, r0
        118910:	e3a01000 	mov	r1, #0	; 0x0
        118914:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        118918:	e5a01d10 	str	r1, [r0, #3344]!
        11891c:	e3a01001 	mov	r1, #1	; 0x1
        118920:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118924:	e5a01c5c 	str	r1, [r0, #3164]!
        118928:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11892c:	e2800d33 	add	r0, r0, #3264	; 0xcc0
        118930:	eb6bbecb 	bl	1c08464 <TCircleBuf::$FlushBytes(void)>
        118934:	e1a00004 	mov	r0, r4
        118938:	eb63dfc0 	bl	1a10840 <TAsyncSerTool::$FlushInputBytes(void)>
        11893c:	e1a00004 	mov	r0, r4
        118940:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        118944:	ea63fc99 	b	1a17bb0 <TMNP::$RcvFrame(void)>
    */
}

/**
 * Symbol: TMNP::RcvFrame(void)
 * Address: 00118948
 */
TMNP::RcvFrame(void) {
    /*
        118948:	e1a0c00d 	mov	ip, sp
        11894c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        118950:	e24cb004 	sub	fp, ip, #4	; 0x4
        118954:	e1a04000 	mov	r4, r0
        118958:	e5900018 	ldr	r0, [r0, #24]	; fField24
        11895c:	e3100004 	tst	r0, #4	; 0x4
        118960:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        118964:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118968:	e5b01c78 	ldr	r1, [r0, #3192]!
        11896c:	e1a0e00f 	mov	lr, pc
        118970:	e281f028 	add	pc, r1, #40	; 0x28
        118974:	e5940018 	ldr	r0, [r4, #24]	; fField24
        118978:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
        11897c:	e5840018 	str	r0, [r4, #24]	; fField24
        118980:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118984:	e2401fe2 	sub	r1, r0, #904	; 0x388
        118988:	e2811a01 	add	r1, r1, #4096	; 0x1000
        11898c:	e1a00004 	mov	r0, r4
        118990:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        118994:	ea63e3c3 	b	1a118a8 <TSerTool::$GetFramedBytes(CBufferList *)>
    */
}

/**
 * Symbol: TMNP::RcvLN(void)
 * Address: 00118998
 */
TMNP::RcvLN(void) {
    /*
        118998:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNP::RcvLNA(void)
 * Address: 0011899c
 */
TMNP::RcvLNA(void) {
    /*
        11899c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNP::RcvStartBuffer(void)
 * Address: 001189a0
 */
TMNP::RcvStartBuffer(void) {
    /*
        1189a0:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        1189a4:	e5912000 	ldr	r2, [r1]
        1189a8:	e3c22020 	bic	r2, r2, #32	; 0x20
        1189ac:	e5812000 	str	r2, [r1]
        1189b0:	e3120202 	tst	r2, #536870912	; 0x20000000
        1189b4:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        1189b8:	11a0f00e 	movne	pc, lr
        1189bc:	e5913c68 	ldr	r3, [r1, #3176]
        1189c0:	e3330000 	teq	r3, #0	; 0x0
        1189c4:	13822202 	orrne	r2, r2, #536870912	; 0x20000000
        1189c8:	15812000 	strne	r2, [r1]
        1189cc:	1a63fc76 	bne	1a17bac <TMNP::$RcvBuffer(void)>
        1189d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNP::RcvBuffer(void)
 * Address: 001189d4
 */
TMNP::RcvBuffer(void) {
    /*
        1189d4:	e1a0c00d 	mov	ip, sp
        1189d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1189dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1189e0:	e1a04000 	mov	r4, r0
        1189e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1189e8:	e3a06001 	mov	r6, #1	; 0x1
        1189ec:	e3a07000 	mov	r7, #0	; 0x0
        1189f0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1189f4:	e2800040 	add	r0, r0, #64	; 0x40
        1189f8:	eb6bb64b 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
        1189fc:	e1a05000 	mov	r5, r0
        118a00:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118a04:	e5901c70 	ldr	r1, [r0, #3184]
        118a08:	e1510005 	cmp	r1, r5
        118a0c:	8a000012 	bhi	118a5c <TMNP::RcvBuffer(void)+0x88>
        118a10:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        118a14:	e5911c70 	ldr	r1, [r1, #3184]
        118a18:	e3310000 	teq	r1, #0	; 0x0
        118a1c:	0a000004 	beq	118a34 <TMNP::RcvBuffer(void)+0x60>
        118a20:	e2802ec7 	add	r2, r0, #3184	; 0xc70
        118a24:	e3a03000 	mov	r3, #0	; 0x0
        118a28:	e5901c68 	ldr	r1, [r0, #3176]
        118a2c:	e2800040 	add	r0, r0, #64	; 0x40
        118a30:	eb6bb642 	bl	1c06340 <TCircleBuf::$CopyOut(CBufferList *, unsigned long *, unsigned long *)>
        118a34:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        118a38:	e2410fa5 	sub	r0, r1, #660	; 0x294
        118a3c:	e2800a01 	add	r0, r0, #4096	; 0x1000
        118a40:	e5b12c6c 	ldr	r2, [r1, #3180]!
        118a44:	e5901000 	ldr	r1, [r0]
        118a48:	e0821001 	add	r1, r2, r1
        118a4c:	e5801000 	str	r1, [r0]
        118a50:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118a54:	e5b03c6c 	ldr	r3, [r0, #3180]!
        118a58:	ea000032 	b	118b28 <TMNP::RcvBuffer(void)+0x154>
        118a5c:	e2800040 	add	r0, r0, #64	; 0x40
        118a60:	eb6bb633 	bl	1c06334 <TCircleBuf::$BufferSpace(void)>
        118a64:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        118a68:	e593103c 	ldr	r1, [r3, #60]	; fField60
        118a6c:	e1500001 	cmp	r0, r1
        118a70:	8a000005 	bhi	118a8c <TMNP::RcvBuffer(void)+0xb8>
        118a74:	e2832ec7 	add	r2, r3, #3184	; 0xc70
        118a78:	e5931c68 	ldr	r1, [r3, #3176]
        118a7c:	e2830040 	add	r0, r3, #64	; 0x40
        118a80:	e3a03000 	mov	r3, #0	; 0x0
        118a84:	eb6bb62d 	bl	1c06340 <TCircleBuf::$CopyOut(CBufferList *, unsigned long *, unsigned long *)>
        118a88:	e3a05000 	mov	r5, #0	; 0x0
        118a8c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118a90:	e2800d33 	add	r0, r0, #3264	; 0xcc0
        118a94:	e1a0100d 	mov	r1, sp
        118a98:	eb6bb632 	bl	1c06368 <TCircleBuf::$GetNextByte(unsigned char *)>
        118a9c:	e3300002 	teq	r0, #2	; 0x2
        118aa0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118aa4:	1a00002a 	bne	118b54 <TMNP::RcvBuffer(void)+0x180>
        118aa8:	e5901000 	ldr	r1, [r0]
        118aac:	e3110040 	tst	r1, #64	; 0x40
        118ab0:	0a000031 	beq	118b7c <TMNP::RcvBuffer(void)+0x1a8>
        118ab4:	e5901c70 	ldr	r1, [r0, #3184]
        118ab8:	e5902c6c 	ldr	r2, [r0, #3180]
        118abc:	e0421001 	sub	r1, r2, r1
        118ac0:	e0811005 	add	r1, r1, r5
        118ac4:	e5902c74 	ldr	r2, [r0, #3188]
        118ac8:	e1510002 	cmp	r1, r2
        118acc:	3a00002a 	bcc	118b7c <TMNP::RcvBuffer(void)+0x1a8>
        118ad0:	e3350000 	teq	r5, #0	; 0x0
        118ad4:	0a000004 	beq	118aec <TMNP::RcvBuffer(void)+0x118>
        118ad8:	e2802ec7 	add	r2, r0, #3184	; 0xc70
        118adc:	e3a03000 	mov	r3, #0	; 0x0
        118ae0:	e5901c68 	ldr	r1, [r0, #3176]
        118ae4:	e2800040 	add	r0, r0, #64	; 0x40
        118ae8:	eb6bb614 	bl	1c06340 <TCircleBuf::$CopyOut(CBufferList *, unsigned long *, unsigned long *)>
        118aec:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118af0:	e5b03c68 	ldr	r3, [r0, #3176]!
        118af4:	e5901008 	ldr	r1, [r0, #8]	; fField8
        118af8:	e1a00003 	mov	r0, r3
        118afc:	e3a02001 	mov	r2, #1	; 0x1
        118b00:	e5933000 	ldr	r3, [r3]
        118b04:	e1a0e00f 	mov	lr, pc
        118b08:	e283f034 	add	pc, r3, #52	; 0x34
        118b0c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118b10:	e5901c70 	ldr	r1, [r0, #3184]
        118b14:	e5902c6c 	ldr	r2, [r0, #3180]
        118b18:	e0423001 	sub	r3, r2, r1
        118b1c:	e5b01d6c 	ldr	r1, [r0, #3436]!
        118b20:	e0811003 	add	r1, r1, r3
        118b24:	e5801000 	str	r1, [r0]
        118b28:	e1a00004 	mov	r0, r4
        118b2c:	e3a02000 	mov	r2, #0	; 0x0
        118b30:	e3a01000 	mov	r1, #0	; 0x0
        118b34:	eb6a9d2a 	bl	1bbffe4 <TCommTool::$GetComplete(long, unsigned char, unsigned long)>
        118b38:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118b3c:	e5a07c68 	str	r7, [r0, #3176]!
        118b40:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118b44:	e5a07c6c 	str	r7, [r0, #3180]!
        118b48:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118b4c:	e5a07c70 	str	r7, [r0, #3184]!
        118b50:	ea000009 	b	118b7c <TMNP::RcvBuffer(void)+0x1a8>
        118b54:	e5b01d68 	ldr	r1, [r0, #3432]!
        118b58:	e2811001 	add	r1, r1, #1	; 0x1
        118b5c:	e5801000 	str	r1, [r0]
        118b60:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        118b64:	e5920024 	ldr	r0, [r2, #36]
        118b68:	e5dd1000 	ldrb	r1, [sp]
        118b6c:	e1a0e00f 	mov	lr, pc
        118b70:	e592f030 	ldr	pc, [r2, #48]
        118b74:	e3360000 	teq	r6, #0	; 0x0
        118b78:	1affff9c 	bne	1189f0 <TMNP::RcvBuffer(void)+0x1c>
        118b7c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118b80:	e5901000 	ldr	r1, [r0]
        118b84:	e3c11202 	bic	r1, r1, #536870912	; 0x20000000
        118b88:	e5801000 	str	r1, [r0]
        118b8c:	e3110301 	tst	r1, #67108864	; 0x4000000
        118b90:	0a000005 	beq	118bac <TMNP::RcvBuffer(void)+0x1d8>
        118b94:	e1a00004 	mov	r0, r4
        118b98:	eb63fc13 	bl	1a17bec <TMNP::$ReceiveCredit(void)>
        118b9c:	e3300000 	teq	r0, #0	; 0x0
        118ba0:	11a00004 	movne	r0, r4
        118ba4:	13a01302 	movne	r1, #134217728	; 0x8000000
        118ba8:	1b641099 	blne	1a1ce14 <TMNP::$XmitLA(unsigned long)>
        118bac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::MNPDecompressOut(unsigned char)
 * Address: 00118bb0
 */
TMNP::MNPDecompressOut(unsigned char) {
    /*
        118bb0:	e20110ff 	and	r1, r1, #255	; 0xff
        118bb4:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        118bb8:	e2800040 	add	r0, r0, #64	; 0x40
        118bbc:	ea6bbe2a 	b	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
    */
}

/**
 * Symbol: TMNP::RcvFrameComplete(long, unsigned char)
 * Address: 00118bc0
 */
TMNP::RcvFrameComplete(long, unsigned char) {
    /*
        118bc0:	e1a0c00d 	mov	ip, sp
        118bc4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        118bc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        118bcc:	e1a04000 	mov	r4, r0
        118bd0:	e1a05001 	mov	r5, r1
        118bd4:	e20200ff 	and	r0, r2, #255	; 0xff
        118bd8:	e3a02000 	mov	r2, #0	; 0x0
        118bdc:	e3a06001 	mov	r6, #1	; 0x1
        118be0:	e281cc46 	add	ip, r1, #17920	; 0x4600
        118be4:	e37c0054 	cmn	ip, #84	; 0x54
        118be8:	0a000006 	beq	118c08 <TMNP::RcvFrameComplete(long, unsigned char)+0x48>
        118bec:	e285cc46 	add	ip, r5, #17920	; 0x4600
        118bf0:	e37c0053 	cmn	ip, #83	; 0x53
        118bf4:	0a000005 	beq	118c10 <TMNP::RcvFrameComplete(long, unsigned char)+0x50>
        118bf8:	e3350000 	teq	r5, #0	; 0x0
        118bfc:	1a000009 	bne	118c28 <TMNP::RcvFrameComplete(long, unsigned char)+0x68>
        118c00:	e3300000 	teq	r0, #0	; 0x0
        118c04:	1a000008 	bne	118c2c <TMNP::RcvFrameComplete(long, unsigned char)+0x6c>
        118c08:	e3a06000 	mov	r6, #0	; 0x0
        118c0c:	ea000006 	b	118c2c <TMNP::RcvFrameComplete(long, unsigned char)+0x6c>
        118c10:	e3a06000 	mov	r6, #0	; 0x0
        118c14:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118c18:	e5b01d4c 	ldr	r1, [r0, #3404]!
        118c1c:	e2811001 	add	r1, r1, #1	; 0x1
        118c20:	e5801000 	str	r1, [r0]
        118c24:	ea000000 	b	118c2c <TMNP::RcvFrameComplete(long, unsigned char)+0x6c>
        118c28:	e1a02005 	mov	r2, r5
        118c2c:	e1a00004 	mov	r0, r4
        118c30:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        118c34:	eb6aa114 	bl	1bc108c <TCommTool::$ShouldAbort(unsigned long, long)>
        118c38:	e3300000 	teq	r0, #0	; 0x0
        118c3c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        118c40:	e3360000 	teq	r6, #0	; 0x0
        118c44:	0a000002 	beq	118c54 <TMNP::RcvFrameComplete(long, unsigned char)+0x94>
        118c48:	e1a00004 	mov	r0, r4
        118c4c:	eb63fbe0 	bl	1a17bd4 <TMNP::$RcvProcessFrame(void)>
        118c50:	ea000002 	b	118c60 <TMNP::RcvFrameComplete(long, unsigned char)+0xa0>
        118c54:	e1a01005 	mov	r1, r5
        118c58:	e1a00004 	mov	r0, r4
        118c5c:	eb63fbd1 	bl	1a17ba8 <TMNP::$RcvBrokenFrame(long)>
        118c60:	e1a00004 	mov	r0, r4
        118c64:	eb63fbd1 	bl	1a17bb0 <TMNP::$RcvFrame(void)>
        118c68:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118c6c:	e5900000 	ldr	r0, [r0]
        118c70:	e3100010 	tst	r0, #16	; 0x10
        118c74:	11a00004 	movne	r0, r4
        118c78:	1b63f7b4 	blne	1a16b50 <TMNP::$ProcessLA(void)>
        118c7c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118c80:	e5900000 	ldr	r0, [r0]
        118c84:	e3100020 	tst	r0, #32	; 0x20
        118c88:	11a00004 	movne	r0, r4
        118c8c:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        118c90:	1a63fbd0 	bne	1a17bd8 <TMNP::$RcvStartBuffer(void)>
        118c94:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::RcvBrokenFrame(long)
 * Address: 00118c98
 */
TMNP::RcvBrokenFrame(long) {
    /*
        118c98:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        118c9c:	e5b12d44 	ldr	r2, [r1, #3396]!
        118ca0:	e2822001 	add	r2, r2, #1	; 0x1
        118ca4:	e5812000 	str	r2, [r1]
        118ca8:	e5901018 	ldr	r1, [r0, #24]	; fField24
        118cac:	e3110001 	tst	r1, #1	; 0x1
        118cb0:	0a000011 	beq	118cfc <TMNP::RcvBrokenFrame(long)+0x64>
        118cb4:	e3811202 	orr	r1, r1, #536870912	; 0x20000000
        118cb8:	e5801018 	str	r1, [r0, #24]	; fField24
        118cbc:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        118cc0:	e5912000 	ldr	r2, [r1]
        118cc4:	e3120002 	tst	r2, #2	; 0x2
        118cc8:	11a0f00e 	movne	pc, lr
        118ccc:	e5912d3c 	ldr	r2, [r1, #3388]
        118cd0:	e3520003 	cmp	r2, #3	; 0x3
        118cd4:	9a641051 	bls	1a1ce20 <TMNP::$XmitLR(void)>
        118cd8:	e3a02004 	mov	r2, #4	; 0x4
        118cdc:	e5c12098 	strb	r2, [r1, #152]
        118ce0:	e5901028 	ldr	r1, [r0, #40]	; fField40
        118ce4:	e3310000 	teq	r1, #0	; 0x0
        118ce8:	03a01011 	moveq	r1, #17	; 0x11
        118cec:	05801028 	streq	r1, [r0, #40]	; fField40
        118cf0:	e3e01025 	mvn	r1, #37	; 0x25
        118cf4:	e2411c4e 	sub	r1, r1, #19968	; 0x4e00
        118cf8:	ea6aa0e4 	b	1bc1090 <TCommTool::$StartAbort(long)>
        118cfc:	e3110002 	tst	r1, #2	; 0x2
        118d00:	1a641049 	bne	1a1ce2c <TMNP::$XmitNAck(void)>
        118d04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNP::RcvProcessFrame(void)
 * Address: 00118d08
 */
TMNP::RcvProcessFrame(void) {
    /*
        118d08:	e1a0c00d 	mov	ip, sp
        118d0c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        118d10:	e24cb004 	sub	fp, ip, #4	; 0x4
        118d14:	e1a04000 	mov	r4, r0
        118d18:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        118d1c:	e5b01d50 	ldr	r1, [r0, #3408]!
        118d20:	e2811001 	add	r1, r1, #1	; 0x1
        118d24:	e5801000 	str	r1, [r0]
        118d28:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118d2c:	e5901cec 	ldr	r1, [r0, #3308]	; fField3308
        118d30:	e5a01d08 	str	r1, [r0, #3336]!
        118d34:	e5940018 	ldr	r0, [r4, #24]	; fField24
        118d38:	e3100001 	tst	r0, #1	; 0x1
        118d3c:	13800202 	orrne	r0, r0, #536870912	; 0x20000000
        118d40:	15840018 	strne	r0, [r4, #24]	; fField24
        118d44:	e3e02000 	mvn	r2, #0	; 0x0
        118d48:	e3a01000 	mov	r1, #0	; 0x0
        118d4c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118d50:	e5b03c78 	ldr	r3, [r0, #3192]!
        118d54:	e1a0e00f 	mov	lr, pc
        118d58:	e283f038 	add	pc, r3, #56	; 0x38
        118d5c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118d60:	e5b01c78 	ldr	r1, [r0, #3192]!
        118d64:	e1a0e00f 	mov	lr, pc
        118d68:	e281f010 	add	pc, r1, #16	; 0x10
        118d6c:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        118d70:	e5c10c62 	strb	r0, [r1, #3170]
        118d74:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118d78:	e5b01c78 	ldr	r1, [r0, #3192]!
        118d7c:	e1a0e00f 	mov	lr, pc
        118d80:	e281f010 	add	pc, r1, #16	; 0x10
        118d84:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        118d88:	e5c10c63 	strb	r0, [r1, #3171]
        118d8c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118d90:	e5d01c63 	ldrb	r1, [r0, #3171]
        118d94:	e3510007 	cmp	r1, #7	; 0x7
        118d98:	908ff101 	addls	pc, pc, r1, lsl #2
        118d9c:	ea000018 	b	118e04 <TMNP::RcvProcessFrame(void)+0xfc>
        118da0:	ea000017 	b	118e04 <TMNP::RcvProcessFrame(void)+0xfc>
        118da4:	ea000007 	b	118dc8 <TMNP::RcvProcessFrame(void)+0xc0>
        118da8:	ea000009 	b	118dd4 <TMNP::RcvProcessFrame(void)+0xcc>
        118dac:	ea000014 	b	118e04 <TMNP::RcvProcessFrame(void)+0xfc>
        118db0:	ea00000a 	b	118de0 <TMNP::RcvProcessFrame(void)+0xd8>
        118db4:	ea00000c 	b	118dec <TMNP::RcvProcessFrame(void)+0xe4>
        118db8:	ea00000e 	b	118df8 <TMNP::RcvProcessFrame(void)+0xf0>
        118dbc:	e1a00004 	mov	r0, r4
        118dc0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        118dc4:	ea63fb7f 	b	1a17bc8 <TMNP::$RcvLNA(void)>
        118dc8:	e1a00004 	mov	r0, r4
        118dcc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        118dd0:	ea63fb7d 	b	1a17bcc <TMNP::$RcvLR(void)>
        118dd4:	e1a00004 	mov	r0, r4
        118dd8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        118ddc:	ea63fb77 	b	1a17bc0 <TMNP::$RcvLD(void)>
        118de0:	e1a00004 	mov	r0, r4
        118de4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        118de8:	ea63fb78 	b	1a17bd0 <TMNP::$RcvLT(void)>
        118dec:	e1a00004 	mov	r0, r4
        118df0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        118df4:	ea63fb70 	b	1a17bbc <TMNP::$RcvLA(void)>
        118df8:	e1a00004 	mov	r0, r4
        118dfc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        118e00:	ea63fb6f 	b	1a17bc4 <TMNP::$RcvLN(void)>
        118e04:	e3a010fe 	mov	r1, #254	; 0xfe
        118e08:	e5c01098 	strb	r1, [r0, #152]
        118e0c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        118e10:	e3300000 	teq	r0, #0	; 0x0
        118e14:	03a0000e 	moveq	r0, #14	; 0xe
        118e18:	05840028 	streq	r0, [r4, #40]	; fField40
        118e1c:	e1a00004 	mov	r0, r4
        118e20:	e3e01022 	mvn	r1, #34	; 0x22
        118e24:	e2411c4e 	sub	r1, r1, #19968	; 0x4e00
        118e28:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        118e2c:	ea6aa097 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TMNP::RcvLR(void)
 * Address: 00118e30
 */
TMNP::RcvLR(void) {
    /*
        118e30:	e1a0c00d 	mov	ip, sp
        118e34:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        118e38:	e24cb004 	sub	fp, ip, #4	; 0x4
        118e3c:	e1a04000 	mov	r4, r0
        118e40:	e5900018 	ldr	r0, [r0, #24]	; fField24
        118e44:	e3100001 	tst	r0, #1	; 0x1
        118e48:	0a000033 	beq	118f1c <TMNP::RcvLR(void)+0xec>
        118e4c:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        118e50:	e5910000 	ldr	r0, [r1]
        118e54:	e3100002 	tst	r0, #2	; 0x2
        118e58:	e3a06014 	mov	r6, #20	; 0x14
        118e5c:	e3e05ee2 	mvn	r5, #3616	; 0xe20
        118e60:	e2455901 	sub	r5, r5, #16384	; 0x4000
        118e64:	0a000014 	beq	118ebc <TMNP::RcvLR(void)+0x8c>
        118e68:	e3100001 	tst	r0, #1	; 0x1
        118e6c:	11a00004 	movne	r0, r4
        118e70:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        118e74:	1a63ff70 	bne	1a18c3c <TMNP::$RetransTimeOut(void)>
        118e78:	e3a00000 	mov	r0, #0	; 0x0
        118e7c:	e5a10d0c 	str	r0, [r1, #3340]!	; fField3340
        118e80:	e1a00004 	mov	r0, r4
        118e84:	e3a01001 	mov	r1, #1	; 0x1
        118e88:	eb63f30d 	bl	1a15ac4 <TMNP::$ParamNegotiation(unsigned char)>
        118e8c:	e3300000 	teq	r0, #0	; 0x0
        118e90:	0a000004 	beq	118ea8 <TMNP::RcvLR(void)+0x78>
        118e94:	e1a00004 	mov	r0, r4
        118e98:	e3a01000 	mov	r1, #0	; 0x0
        118e9c:	e5942000 	ldr	r2, [r4]
        118ea0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        118ea4:	e282f05c 	add	pc, r2, #92	; 0x5c
        118ea8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        118eac:	e3300000 	teq	r0, #0	; 0x0
        118eb0:	1a000015 	bne	118f0c <TMNP::RcvLR(void)+0xdc>
        118eb4:	e5846028 	str	r6, [r4, #40]	; fField40
        118eb8:	ea000013 	b	118f0c <TMNP::RcvLR(void)+0xdc>
        118ebc:	e1a00004 	mov	r0, r4
        118ec0:	e3a01000 	mov	r1, #0	; 0x0
        118ec4:	eb63f2fe 	bl	1a15ac4 <TMNP::$ParamNegotiation(unsigned char)>
        118ec8:	e3300000 	teq	r0, #0	; 0x0
        118ecc:	0a00000b 	beq	118f00 <TMNP::RcvLR(void)+0xd0>
        118ed0:	e5941568 	ldr	r1, [r4, #1384]	; fField1384
        118ed4:	e3310000 	teq	r1, #0	; 0x0
        118ed8:	0a000002 	beq	118ee8 <TMNP::RcvLR(void)+0xb8>
        118edc:	e1a00004 	mov	r0, r4
        118ee0:	eb63d1f9 	bl	1a0d6cc <TSerTool::$ChangeSpeed(unsigned long)>
        118ee4:	e584055c 	str	r0, [r4, #1372]	; fField1372
        118ee8:	e1a00004 	mov	r0, r4
        118eec:	eb63de4d 	bl	1a10828 <TMNP::$EnterConnectedState(void)>
        118ef0:	e1a00004 	mov	r0, r4
        118ef4:	e3a01302 	mov	r1, #134217728	; 0x8000000
        118ef8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        118efc:	ea640fc4 	b	1a1ce14 <TMNP::$XmitLA(unsigned long)>
        118f00:	e5940028 	ldr	r0, [r4, #40]	; fField40
        118f04:	e3300000 	teq	r0, #0	; 0x0
        118f08:	0affffe9 	beq	118eb4 <TMNP::RcvLR(void)+0x84>
        118f0c:	e1a00004 	mov	r0, r4
        118f10:	e1a01005 	mov	r1, r5
        118f14:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        118f18:	ea6aa05c 	b	1bc1090 <TCommTool::$StartAbort(long)>
        118f1c:	e3100002 	tst	r0, #2	; 0x2
        118f20:	11a00004 	movne	r0, r4
        118f24:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        118f28:	1a640fbf 	bne	1a1ce2c <TMNP::$XmitNAck(void)>
        118f2c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::RcvLD(void)
 * Address: 00118f30
 */
TMNP::RcvLD(void) {
    /*
        118f30:	e1a0c00d 	mov	ip, sp
        118f34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        118f38:	e24cb004 	sub	fp, ip, #4	; 0x4
        118f3c:	e1a04000 	mov	r4, r0
        118f40:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        118f44:	e5b01c78 	ldr	r1, [r0, #3192]!
        118f48:	e1a0e00f 	mov	lr, pc
        118f4c:	e281f010 	add	pc, r1, #16	; 0x10
        118f50:	e1a05000 	mov	r5, r0
        118f54:	e3700001 	cmn	r0, #1	; 0x1
        118f58:	0a000024 	beq	118ff0 <TMNP::RcvLD(void)+0xc0>
        118f5c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118f60:	e5b01c78 	ldr	r1, [r0, #3192]!
        118f64:	e1a0e00f 	mov	lr, pc
        118f68:	e281f010 	add	pc, r1, #16	; 0x10
        118f6c:	e1a01000 	mov	r1, r0
        118f70:	e3350001 	teq	r5, #1	; 0x1
        118f74:	0a000008 	beq	118f9c <TMNP::RcvLD(void)+0x6c>
        118f78:	e3350002 	teq	r5, #2	; 0x2
        118f7c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118f80:	1a00000c 	bne	118fb8 <TMNP::RcvLD(void)+0x88>
        118f84:	e5b01c78 	ldr	r1, [r0, #3192]!
        118f88:	e1a0e00f 	mov	lr, pc
        118f8c:	e281f010 	add	pc, r1, #16	; 0x10
        118f90:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        118f94:	e5c10099 	strb	r0, [r1, #153]
        118f98:	ea00000d 	b	118fd4 <TMNP::RcvLD(void)+0xa4>
        118f9c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118fa0:	e5b01c78 	ldr	r1, [r0, #3192]!
        118fa4:	e1a0e00f 	mov	lr, pc
        118fa8:	e281f010 	add	pc, r1, #16	; 0x10
        118fac:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        118fb0:	e5c10098 	strb	r0, [r1, #152]
        118fb4:	ea000006 	b	118fd4 <TMNP::RcvLD(void)+0xa4>
        118fb8:	e2403fe2 	sub	r3, r0, #904	; 0x388
        118fbc:	e2833a01 	add	r3, r3, #4096	; 0x1000
        118fc0:	e1a00003 	mov	r0, r3
        118fc4:	e3a02000 	mov	r2, #0	; 0x0
        118fc8:	e5933000 	ldr	r3, [r3]
        118fcc:	e1a0e00f 	mov	lr, pc
        118fd0:	e283f038 	add	pc, r3, #56	; 0x38
        118fd4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118fd8:	e5b01c78 	ldr	r1, [r0, #3192]!
        118fdc:	e1a0e00f 	mov	lr, pc
        118fe0:	e281f010 	add	pc, r1, #16	; 0x10
        118fe4:	e1a05000 	mov	r5, r0
        118fe8:	e3700001 	cmn	r0, #1	; 0x1
        118fec:	1affffda 	bne	118f5c <TMNP::RcvLD(void)+0x2c>
        118ff0:	e3e01022 	mvn	r1, #34	; 0x22
        118ff4:	e2411c4e 	sub	r1, r1, #19968	; 0x4e00
        118ff8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        118ffc:	e5902000 	ldr	r2, [r0]
        119000:	e3822101 	orr	r2, r2, #1073741824	; 0x40000000
        119004:	e5802000 	str	r2, [r0]
        119008:	e5940028 	ldr	r0, [r4, #40]	; fField40
        11900c:	e3300000 	teq	r0, #0	; 0x0
        119010:	1a000026 	bne	1190b0 <TMNP::RcvLD(void)+0x180>
        119014:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119018:	e5d00098 	ldrb	r0, [r0, #152]
        11901c:	e3500005 	cmp	r0, #5	; 0x5
        119020:	03a00006 	moveq	r0, #6	; 0x6
        119024:	0a000020 	beq	1190ac <TMNP::RcvLD(void)+0x17c>
        119028:	ca000015 	bgt	119084 <TMNP::RcvLD(void)+0x154>
        11902c:	e3300001 	teq	r0, #1	; 0x1
        119030:	03a00002 	moveq	r0, #2	; 0x2
        119034:	03e01029 	mvneq	r1, #41	; 0x29
        119038:	02411c4e 	subeq	r1, r1, #19968	; 0x4e00
        11903c:	05840028 	streq	r0, [r4, #40]	; fField40
        119040:	0a00001a 	beq	1190b0 <TMNP::RcvLD(void)+0x180>
        119044:	e3300002 	teq	r0, #2	; 0x2
        119048:	03a00003 	moveq	r0, #3	; 0x3
        11904c:	03e01f8a 	mvneq	r1, #552	; 0x228
        119050:	02411b13 	subeq	r1, r1, #19456	; 0x4c00
        119054:	05840028 	streq	r0, [r4, #40]	; fField40
        119058:	0a000014 	beq	1190b0 <TMNP::RcvLD(void)+0x180>
        11905c:	e3300003 	teq	r0, #3	; 0x3
        119060:	03a00004 	moveq	r0, #4	; 0x4
        119064:	03e01ee2 	mvneq	r1, #3616	; 0xe20
        119068:	02411901 	subeq	r1, r1, #16384	; 0x4000
        11906c:	05840028 	streq	r0, [r4, #40]	; fField40
        119070:	0a00000e 	beq	1190b0 <TMNP::RcvLD(void)+0x180>
        119074:	e3300004 	teq	r0, #4	; 0x4
        119078:	03a00005 	moveq	r0, #5	; 0x5
        11907c:	0a00000a 	beq	1190ac <TMNP::RcvLD(void)+0x17c>
        119080:	ea000008 	b	1190a8 <TMNP::RcvLD(void)+0x178>
        119084:	e3300006 	teq	r0, #6	; 0x6
        119088:	03a00007 	moveq	r0, #7	; 0x7
        11908c:	0a000006 	beq	1190ac <TMNP::RcvLD(void)+0x17c>
        119090:	e33000fe 	teq	r0, #254	; 0xfe
        119094:	03a00008 	moveq	r0, #8	; 0x8
        119098:	0a000003 	beq	1190ac <TMNP::RcvLD(void)+0x17c>
        11909c:	e33000ff 	teq	r0, #255	; 0xff
        1190a0:	03a00009 	moveq	r0, #9	; 0x9
        1190a4:	0a000000 	beq	1190ac <TMNP::RcvLD(void)+0x17c>
        1190a8:	e3a00001 	mov	r0, #1	; 0x1
        1190ac:	e5840028 	str	r0, [r4, #40]	; fField40
        1190b0:	e1a00004 	mov	r0, r4
        1190b4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1190b8:	ea6a9ff4 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TMNP::RcvLT(void)
 * Address: 001190bc
 */
TMNP::RcvLT(void) {
    /*
        1190bc:	e1a0c00d 	mov	ip, sp
        1190c0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1190c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1190c8:	e1a04000 	mov	r4, r0
        1190cc:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1190d0:	e3100001 	tst	r0, #1	; 0x1
        1190d4:	15940588 	ldrne	r0, [r4, #1416]	; fField1416
        1190d8:	15900000 	ldrne	r0, [r0]
        1190dc:	12000001 	andne	r0, r0, #1	; 0x1
        1190e0:	13300000 	teqne	r0, #0	; 0x0
        1190e4:	0a000003 	beq	1190f8 <TMNP::RcvLT(void)+0x3c>
        1190e8:	e1a00004 	mov	r0, r4
        1190ec:	eb63ddcd 	bl	1a10828 <TMNP::$EnterConnectedState(void)>
        1190f0:	e1a00004 	mov	r0, r4
        1190f4:	eb640f4a 	bl	1a1ce24 <TMNP::$XmitLT(void)>
        1190f8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1190fc:	e3100002 	tst	r0, #2	; 0x2
        119100:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        119104:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119108:	e5d0109b 	ldrb	r1, [r0, #155]
        11910c:	e3a090fe 	mov	r9, #254	; 0xfe
        119110:	e3a0800e 	mov	r8, #14	; 0xe
        119114:	e3310000 	teq	r1, #0	; 0x0
        119118:	0a000004 	beq	119130 <TMNP::RcvLT(void)+0x74>
        11911c:	e5b01c78 	ldr	r1, [r0, #3192]!
        119120:	e1a0e00f 	mov	lr, pc
        119124:	e281f010 	add	pc, r1, #16	; 0x10
        119128:	e20060ff 	and	r6, r0, #255	; 0xff
        11912c:	ea00002d 	b	1191e8 <TMNP::RcvLT(void)+0x12c>
        119130:	e3a07000 	mov	r7, #0	; 0x0
        119134:	e3a05001 	mov	r5, #1	; 0x1
        119138:	e5d00c62 	ldrb	r0, [r0, #3170]
        11913c:	e3500001 	cmp	r0, #1	; 0x1
        119140:	ba000021 	blt	1191cc <TMNP::RcvLT(void)+0x110>
        119144:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119148:	e5b01c78 	ldr	r1, [r0, #3192]!
        11914c:	e1a0e00f 	mov	lr, pc
        119150:	e281f010 	add	pc, r1, #16	; 0x10
        119154:	e1a0a000 	mov	sl, r0
        119158:	e2855001 	add	r5, r5, #1	; 0x1
        11915c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119160:	e5b01c78 	ldr	r1, [r0, #3192]!
        119164:	e1a0e00f 	mov	lr, pc
        119168:	e281f010 	add	pc, r1, #16	; 0x10
        11916c:	e1a01000 	mov	r1, r0
        119170:	e0855000 	add	r5, r5, r0
        119174:	e33a0001 	teq	sl, #1	; 0x1
        119178:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11917c:	1a000005 	bne	119198 <TMNP::RcvLT(void)+0xdc>
        119180:	e5b01c78 	ldr	r1, [r0, #3192]!
        119184:	e1a0e00f 	mov	lr, pc
        119188:	e281f010 	add	pc, r1, #16	; 0x10
        11918c:	e20060ff 	and	r6, r0, #255	; 0xff
        119190:	e3a07001 	mov	r7, #1	; 0x1
        119194:	ea000006 	b	1191b4 <TMNP::RcvLT(void)+0xf8>
        119198:	e2403fe2 	sub	r3, r0, #904	; 0x388
        11919c:	e2833a01 	add	r3, r3, #4096	; 0x1000
        1191a0:	e1a00003 	mov	r0, r3
        1191a4:	e3a02000 	mov	r2, #0	; 0x0
        1191a8:	e5933000 	ldr	r3, [r3]
        1191ac:	e1a0e00f 	mov	lr, pc
        1191b0:	e283f038 	add	pc, r3, #56	; 0x38
        1191b4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1191b8:	e5d00c62 	ldrb	r0, [r0, #3170]
        1191bc:	e1500005 	cmp	r0, r5
        1191c0:	aaffffdf 	bge	119144 <TMNP::RcvLT(void)+0x88>
        1191c4:	e3370000 	teq	r7, #0	; 0x0
        1191c8:	1a000006 	bne	1191e8 <TMNP::RcvLT(void)+0x12c>
        1191cc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1191d0:	e5c09098 	strb	r9, [r0, #152]
        1191d4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1191d8:	e3300000 	teq	r0, #0	; 0x0
        1191dc:	1a000030 	bne	1192a4 <TMNP::RcvLT(void)+0x1e8>
        1191e0:	e5848028 	str	r8, [r4, #40]	; fField40
        1191e4:	ea00002e 	b	1192a4 <TMNP::RcvLT(void)+0x1e8>
        1191e8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1191ec:	e2403fe2 	sub	r3, r0, #904	; 0x388
        1191f0:	e2833a01 	add	r3, r3, #4096	; 0x1000
        1191f4:	e5d00c62 	ldrb	r0, [r0, #3170]
        1191f8:	e2801001 	add	r1, r0, #1	; 0x1
        1191fc:	e1a00003 	mov	r0, r3
        119200:	e3e02000 	mvn	r2, #0	; 0x0
        119204:	e5933000 	ldr	r3, [r3]
        119208:	e1a0e00f 	mov	lr, pc
        11920c:	e283f034 	add	pc, r3, #52	; 0x34
        119210:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119214:	e5b01c78 	ldr	r1, [r0, #3192]!
        119218:	e1a0e00f 	mov	lr, pc
        11921c:	e281f02c 	add	pc, r1, #44	; 0x2c
        119220:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119224:	e5a10c64 	str	r0, [r1, #3172]!
        119228:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11922c:	e5d01c60 	ldrb	r1, [r0, #3168]
        119230:	e2812001 	add	r2, r1, #1	; 0x1
        119234:	e20220ff 	and	r2, r2, #255	; 0xff
        119238:	e1360002 	teq	r6, r2
        11923c:	0a00000b 	beq	119270 <TMNP::RcvLT(void)+0x1b4>
        119240:	e1310006 	teq	r1, r6
        119244:	05901000 	ldreq	r1, [r0]
        119248:	02012004 	andeq	r2, r1, #4	; 0x4
        11924c:	03320000 	teqeq	r2, #0	; 0x0
        119250:	03811004 	orreq	r1, r1, #4	; 0x4
        119254:	0a000050 	beq	11939c <TMNP::RcvLT(void)+0x2e0>
        119258:	e5901000 	ldr	r1, [r0]
        11925c:	e3c11004 	bic	r1, r1, #4	; 0x4
        119260:	e5801000 	str	r1, [r0]
        119264:	e1a00004 	mov	r0, r4
        119268:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        11926c:	ea640eee 	b	1a1ce2c <TMNP::$XmitNAck(void)>
        119270:	e1a00004 	mov	r0, r4
        119274:	eb63fa5c 	bl	1a17bec <TMNP::$ReceiveCredit(void)>
        119278:	e3300000 	teq	r0, #0	; 0x0
        11927c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119280:	0afffff4 	beq	119258 <TMNP::RcvLT(void)+0x19c>
        119284:	e59010a0 	ldr	r1, [r0, #160]	; fField160
        119288:	e5902c64 	ldr	r2, [r0, #3172]
        11928c:	e1520001 	cmp	r2, r1
        119290:	9a000008 	bls	1192b8 <TMNP::RcvLT(void)+0x1fc>
        119294:	e5c09098 	strb	r9, [r0, #152]
        119298:	e5940028 	ldr	r0, [r4, #40]	; fField40
        11929c:	e3300000 	teq	r0, #0	; 0x0
        1192a0:	0affffce 	beq	1191e0 <TMNP::RcvLT(void)+0x124>
        1192a4:	e1a00004 	mov	r0, r4
        1192a8:	e3e01022 	mvn	r1, #34	; 0x22
        1192ac:	e2411c4e 	sub	r1, r1, #19968	; 0x4e00
        1192b0:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1192b4:	ea6a9f75 	b	1bc1090 <TCommTool::$StartAbort(long)>
        1192b8:	e5901000 	ldr	r1, [r0]
        1192bc:	e3c11004 	bic	r1, r1, #4	; 0x4
        1192c0:	e5801000 	str	r1, [r0]
        1192c4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1192c8:	e5f01c60 	ldrb	r1, [r0, #3168]!
        1192cc:	e2811001 	add	r1, r1, #1	; 0x1
        1192d0:	e5c01000 	strb	r1, [r0]
        1192d4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1192d8:	e5f01c61 	ldrb	r1, [r0, #3169]!
        1192dc:	e2811001 	add	r1, r1, #1	; 0x1
        1192e0:	e5c01000 	strb	r1, [r0]
        1192e4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1192e8:	e5901d10 	ldr	r1, [r0, #3344]
        1192ec:	e3310000 	teq	r1, #0	; 0x0
        1192f0:	0a000006 	beq	119310 <TMNP::RcvLT(void)+0x254>
        1192f4:	e3a01000 	mov	r1, #0	; 0x0
        1192f8:	e5a01d10 	str	r1, [r0, #3344]!
        1192fc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119300:	e5d0109a 	ldrb	r1, [r0, #154]	; fField154
        119304:	e3510001 	cmp	r1, #1	; 0x1
        119308:	c5901cf8 	ldrgt	r1, [r0, #3320]	; fField3320
        11930c:	c5a01d04 	strgt	r1, [r0, #3332]!	; fField3332
        119310:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119314:	e2410faa 	sub	r0, r1, #680	; 0x2a8
        119318:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11931c:	e5b12c64 	ldr	r2, [r1, #3172]!
        119320:	e5901000 	ldr	r1, [r0]
        119324:	e0821001 	add	r1, r2, r1
        119328:	e5801000 	str	r1, [r0]
        11932c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119330:	e2402fe7 	sub	r2, r0, #924	; 0x39c
        119334:	e2822a01 	add	r2, r2, #4096	; 0x1000
        119338:	e2401fe2 	sub	r1, r0, #904	; 0x388
        11933c:	e2811a01 	add	r1, r1, #4096	; 0x1000
        119340:	e2800d33 	add	r0, r0, #3264	; 0xcc0
        119344:	eb6bb3fb 	bl	1c06338 <TCircleBuf::$CopyIn(CBufferList *, unsigned long *)>
        119348:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11934c:	e5d01c61 	ldrb	r1, [r0, #3169]
        119350:	e5d0009a 	ldrb	r0, [r0, #154]	; fField154
        119354:	e15100c0 	cmp	r1, r0, asr #1
        119358:	e1a00004 	mov	r0, r4
        11935c:	ba000002 	blt	11936c <TMNP::RcvLT(void)+0x2b0>
        119360:	e3a01302 	mov	r1, #134217728	; 0x8000000
        119364:	eb640eaa 	bl	1a1ce14 <TMNP::$XmitLA(unsigned long)>
        119368:	ea000008 	b	119390 <TMNP::RcvLT(void)+0x2d4>
        11936c:	e3a01201 	mov	r1, #268435456	; 0x10000000
        119370:	eb640ea7 	bl	1a1ce14 <TMNP::$XmitLA(unsigned long)>
        119374:	e3300000 	teq	r0, #0	; 0x0
        119378:	05940588 	ldreq	r0, [r4, #1416]	; fField1416
        11937c:	05901d00 	ldreq	r1, [r0, #3328]
        119380:	03310000 	teqeq	r1, #0	; 0x0
        119384:	05901cf4 	ldreq	r1, [r0, #3316]	; fField3316
        119388:	01a010a1 	moveq	r1, r1, lsr #1
        11938c:	05a01d00 	streq	r1, [r0, #3328]!
        119390:	e5b40588 	ldr	r0, [r4, #1416]!	; fField1416
        119394:	e5901000 	ldr	r1, [r0]
        119398:	e3811020 	orr	r1, r1, #32	; 0x20
        11939c:	e5801000 	str	r1, [r0]
        1193a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::RcvLA(void)
 * Address: 001193a4
 */
TMNP::RcvLA(void) {
    /*
        1193a4:	e1a0c00d 	mov	ip, sp
        1193a8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1193ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1193b0:	e1a04000 	mov	r4, r0
        1193b4:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        1193b8:	e5900000 	ldr	r0, [r0]
        1193bc:	e3100001 	tst	r0, #1	; 0x1
        1193c0:	0a000003 	beq	1193d4 <TMNP::RcvLA(void)+0x30>
        1193c4:	e1a00004 	mov	r0, r4
        1193c8:	eb63dd16 	bl	1a10828 <TMNP::$EnterConnectedState(void)>
        1193cc:	e1a00004 	mov	r0, r4
        1193d0:	eb640e93 	bl	1a1ce24 <TMNP::$XmitLT(void)>
        1193d4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1193d8:	e3100002 	tst	r0, #2	; 0x2
        1193dc:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1193e0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1193e4:	e5d0109b 	ldrb	r1, [r0, #155]
        1193e8:	e3310000 	teq	r1, #0	; 0x0
        1193ec:	0a00000b 	beq	119420 <TMNP::RcvLA(void)+0x7c>
        1193f0:	e5b01c78 	ldr	r1, [r0, #3192]!
        1193f4:	e1a0e00f 	mov	lr, pc
        1193f8:	e281f010 	add	pc, r1, #16	; 0x10
        1193fc:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119400:	e5c10ce9 	strb	r0, [r1, #3305]
        119404:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119408:	e5b01c78 	ldr	r1, [r0, #3192]!
        11940c:	e1a0e00f 	mov	lr, pc
        119410:	e281f010 	add	pc, r1, #16	; 0x10
        119414:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119418:	e5c10ce8 	strb	r0, [r1, #3304]
        11941c:	ea00003d 	b	119518 <TMNP::RcvLA(void)+0x174>
        119420:	e3a06000 	mov	r6, #0	; 0x0
        119424:	e3a05000 	mov	r5, #0	; 0x0
        119428:	e5b01c78 	ldr	r1, [r0, #3192]!
        11942c:	e1a0e00f 	mov	lr, pc
        119430:	e281f010 	add	pc, r1, #16	; 0x10
        119434:	e1a07000 	mov	r7, r0
        119438:	e3700001 	cmn	r0, #1	; 0x1
        11943c:	0a000029 	beq	1194e8 <TMNP::RcvLA(void)+0x144>
        119440:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119444:	e5b01c78 	ldr	r1, [r0, #3192]!
        119448:	e1a0e00f 	mov	lr, pc
        11944c:	e281f010 	add	pc, r1, #16	; 0x10
        119450:	e1a01000 	mov	r1, r0
        119454:	e3370001 	teq	r7, #1	; 0x1
        119458:	0a000009 	beq	119484 <TMNP::RcvLA(void)+0xe0>
        11945c:	e3370002 	teq	r7, #2	; 0x2
        119460:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119464:	1a00000e 	bne	1194a4 <TMNP::RcvLA(void)+0x100>
        119468:	e5b01c78 	ldr	r1, [r0, #3192]!
        11946c:	e1a0e00f 	mov	lr, pc
        119470:	e281f010 	add	pc, r1, #16	; 0x10
        119474:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119478:	e5c10ce8 	strb	r0, [r1, #3304]
        11947c:	e3a06001 	mov	r6, #1	; 0x1
        119480:	ea00000e 	b	1194c0 <TMNP::RcvLA(void)+0x11c>
        119484:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119488:	e5b01c78 	ldr	r1, [r0, #3192]!
        11948c:	e1a0e00f 	mov	lr, pc
        119490:	e281f010 	add	pc, r1, #16	; 0x10
        119494:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119498:	e5c10ce9 	strb	r0, [r1, #3305]
        11949c:	e3a05001 	mov	r5, #1	; 0x1
        1194a0:	ea000006 	b	1194c0 <TMNP::RcvLA(void)+0x11c>
        1194a4:	e2403fe2 	sub	r3, r0, #904	; 0x388
        1194a8:	e2833a01 	add	r3, r3, #4096	; 0x1000
        1194ac:	e1a00003 	mov	r0, r3
        1194b0:	e3a02000 	mov	r2, #0	; 0x0
        1194b4:	e5933000 	ldr	r3, [r3]
        1194b8:	e1a0e00f 	mov	lr, pc
        1194bc:	e283f038 	add	pc, r3, #56	; 0x38
        1194c0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1194c4:	e5b01c78 	ldr	r1, [r0, #3192]!
        1194c8:	e1a0e00f 	mov	lr, pc
        1194cc:	e281f010 	add	pc, r1, #16	; 0x10
        1194d0:	e1a07000 	mov	r7, r0
        1194d4:	e3700001 	cmn	r0, #1	; 0x1
        1194d8:	1affffd8 	bne	119440 <TMNP::RcvLA(void)+0x9c>
        1194dc:	e3360000 	teq	r6, #0	; 0x0
        1194e0:	13350000 	teqne	r5, #0	; 0x0
        1194e4:	1a00000b 	bne	119518 <TMNP::RcvLA(void)+0x174>
        1194e8:	e3a010fe 	mov	r1, #254	; 0xfe
        1194ec:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1194f0:	e5c01098 	strb	r1, [r0, #152]
        1194f4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1194f8:	e3300000 	teq	r0, #0	; 0x0
        1194fc:	03a0000e 	moveq	r0, #14	; 0xe
        119500:	05840028 	streq	r0, [r4, #40]	; fField40
        119504:	e1a00004 	mov	r0, r4
        119508:	e3e01022 	mvn	r1, #34	; 0x22
        11950c:	e2411c4e 	sub	r1, r1, #19968	; 0x4e00
        119510:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        119514:	ea6a9edd 	b	1bc1090 <TCommTool::$StartAbort(long)>
        119518:	e5b40588 	ldr	r0, [r4, #1416]!	; fField1416
        11951c:	e5901000 	ldr	r1, [r0]
        119520:	e3811010 	orr	r1, r1, #16	; 0x10
        119524:	e5801000 	str	r1, [r0]
        119528:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::ProcessLA(void)
 * Address: 0011952c
 */
TMNP::ProcessLA(void) {
    /*
        11952c:	e1a0c00d 	mov	ip, sp
        119530:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        119534:	e24cb004 	sub	fp, ip, #4	; 0x4
        119538:	e1a04000 	mov	r4, r0
        11953c:	e3a05000 	mov	r5, #0	; 0x0
        119540:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        119544:	e5901000 	ldr	r1, [r0]
        119548:	e3c12010 	bic	r2, r1, #16	; 0x10
        11954c:	e5802000 	str	r2, [r0]
        119550:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119554:	e5d060b2 	ldrb	r6, [r0, #178]
        119558:	e5d010b1 	ldrb	r1, [r0, #177]
        11955c:	e0463001 	sub	r3, r6, r1
        119560:	e2833001 	add	r3, r3, #1	; 0x1
        119564:	e21380ff 	ands	r8, r3, #255	; 0xff
        119568:	0a000083 	beq	11977c <TMNP::ProcessLA(void)+0x250>
        11956c:	e5d0cce9 	ldrb	ip, [r0, #3305]
        119570:	e28c7001 	add	r7, ip, #1	; 0x1
        119574:	e0473001 	sub	r3, r7, r1
        119578:	e20350ff 	and	r5, r3, #255	; 0xff
        11957c:	e3a0e004 	mov	lr, #4	; 0x4
        119580:	e3a03000 	mov	r3, #0	; 0x0
        119584:	e1550008 	cmp	r5, r8
        119588:	ca000001 	bgt	119594 <TMNP::ProcessLA(void)+0x68>
        11958c:	e3350000 	teq	r5, #0	; 0x0
        119590:	1a000033 	bne	119664 <TMNP::ProcessLA(void)+0x138>
        119594:	e2011007 	and	r1, r1, #7	; 0x7
        119598:	e0611201 	rsb	r1, r1, r1, lsl #4
        11959c:	e0811081 	add	r1, r1, r1, lsl #1
        1195a0:	e0801181 	add	r1, r0, r1, lsl #3
        1195a4:	e28110c4 	add	r1, r1, #196	; 0xc4
        1195a8:	e3120401 	tst	r2, #16777216	; 0x1000000
        1195ac:	0a000007 	beq	1195d0 <TMNP::ProcessLA(void)+0xa4>
        1195b0:	e59020ac 	ldr	r2, [r0, #172]	; fField172
        1195b4:	e1320001 	teq	r2, r1
        1195b8:	159020a4 	ldrne	r2, [r0, #164]
        1195bc:	11320001 	teqne	r2, r1
        1195c0:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1195c4:	e5b02d38 	ldr	r2, [r0, #3384]!
        1195c8:	e2822001 	add	r2, r2, #1	; 0x1
        1195cc:	e5802000 	str	r2, [r0]
        1195d0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1195d4:	e5902d38 	ldr	r2, [r0, #3384]
        1195d8:	e352000b 	cmp	r2, #11	; 0xb
        1195dc:	3a000009 	bcc	119608 <TMNP::ProcessLA(void)+0xdc>
        1195e0:	e5c0e098 	strb	lr, [r0, #152]
        1195e4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1195e8:	e3300000 	teq	r0, #0	; 0x0
        1195ec:	03a0000b 	moveq	r0, #11	; 0xb
        1195f0:	05840028 	streq	r0, [r4, #40]	; fField40
        1195f4:	e1a00004 	mov	r0, r4
        1195f8:	e3e01022 	mvn	r1, #34	; 0x22
        1195fc:	e2411c4e 	sub	r1, r1, #19968	; 0x4e00
        119600:	eb6a9ea2 	bl	1bc1090 <TCommTool::$StartAbort(long)>
        119604:	ea00005c 	b	11977c <TMNP::ProcessLA(void)+0x250>
        119608:	e5a03cfc 	str	r3, [r0, #3324]!
        11960c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119610:	e5902000 	ldr	r2, [r0]
        119614:	e3120502 	tst	r2, #8388608	; 0x800000
        119618:	05a010a4 	streq	r1, [r0, #164]!
        11961c:	15a010ac 	strne	r1, [r0, #172]!	; fField172
        119620:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119624:	e5901000 	ldr	r1, [r0]
        119628:	e3811401 	orr	r1, r1, #16777216	; 0x1000000
        11962c:	e5801000 	str	r1, [r0]
        119630:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119634:	e5d0109b 	ldrb	r1, [r0, #155]
        119638:	e3310000 	teq	r1, #0	; 0x0
        11963c:	0a000005 	beq	119658 <TMNP::ProcessLA(void)+0x12c>
        119640:	e5901d34 	ldr	r1, [r0, #3380]
        119644:	e3510020 	cmp	r1, #32	; 0x20
        119648:	9a000002 	bls	119658 <TMNP::ProcessLA(void)+0x12c>
        11964c:	e5b01d34 	ldr	r1, [r0, #3380]!
        119650:	e2411018 	sub	r1, r1, #24	; 0x18
        119654:	e5801000 	str	r1, [r0]
        119658:	e1a00004 	mov	r0, r4
        11965c:	eb640df0 	bl	1a1ce24 <TMNP::$XmitLT(void)>
        119660:	ea000045 	b	11977c <TMNP::ProcessLA(void)+0x250>
        119664:	e3120401 	tst	r2, #16777216	; 0x1000000
        119668:	0a000014 	beq	1196c0 <TMNP::ProcessLA(void)+0x194>
        11966c:	e59080ac 	ldr	r8, [r0, #172]	; fField172
        119670:	e3380000 	teq	r8, #0	; 0x0
        119674:	059080a4 	ldreq	r8, [r0, #164]
        119678:	e5d88010 	ldrb	r8, [r8, #16]
        11967c:	e0481001 	sub	r1, r8, r1
        119680:	e20110ff 	and	r1, r1, #255	; 0xff
        119684:	e1550001 	cmp	r5, r1
        119688:	da00000c 	ble	1196c0 <TMNP::ProcessLA(void)+0x194>
        11968c:	e2071007 	and	r1, r7, #7	; 0x7
        119690:	e0611201 	rsb	r1, r1, r1, lsl #4
        119694:	e0811081 	add	r1, r1, r1, lsl #1
        119698:	e0801181 	add	r1, r0, r1, lsl #3
        11969c:	e28110c4 	add	r1, r1, #196	; 0xc4
        1196a0:	e13c0006 	teq	ip, r6
        1196a4:	03c22401 	biceq	r2, r2, #16777216	; 0x1000000
        1196a8:	05802000 	streq	r2, [r0]
        1196ac:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        1196b0:	e5902000 	ldr	r2, [r0]
        1196b4:	e3120502 	tst	r2, #8388608	; 0x800000
        1196b8:	05a010a4 	streq	r1, [r0, #164]!
        1196bc:	15a010ac 	strne	r1, [r0, #172]!	; fField172
        1196c0:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        1196c4:	e5d100b1 	ldrb	r0, [r1, #177]
        1196c8:	e0802005 	add	r2, r0, r5
        1196cc:	e5c120b1 	strb	r2, [r1, #177]
        1196d0:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        1196d4:	e59120b4 	ldr	r2, [r1, #180]
        1196d8:	e0522005 	subs	r2, r2, r5
        1196dc:	e5a120b4 	str	r2, [r1, #180]!
        1196e0:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        1196e4:	05a13cfc 	streq	r3, [r1, #3324]!
        1196e8:	15912cf4 	ldrne	r2, [r1, #3316]	; fField3316
        1196ec:	15a12cfc 	strne	r2, [r1, #3324]!
        1196f0:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        1196f4:	e5a13d38 	str	r3, [r1, #3384]!
        1196f8:	e2000007 	and	r0, r0, #7	; 0x7
        1196fc:	e0600200 	rsb	r0, r0, r0, lsl #4
        119700:	e0800080 	add	r0, r0, r0, lsl #1
        119704:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119708:	e0810180 	add	r0, r1, r0, lsl #3
        11970c:	e28000c4 	add	r0, r0, #196	; 0xc4
        119710:	e1a01005 	mov	r1, r5
        119714:	e3550000 	cmp	r5, #0	; 0x0
        119718:	da000010 	ble	119760 <TMNP::ProcessLA(void)+0x234>
        11971c:	e5d02012 	ldrb	r2, [r0, #18]
        119720:	e3320000 	teq	r2, #0	; 0x0
        119724:	15942588 	ldrne	r2, [r4, #1416]	; fField1416
        119728:	1592c000 	ldrne	ip, [r2]
        11972c:	120cc502 	andne	ip, ip, #8388608	; 0x800000
        119730:	133c0000 	teqne	ip, #0	; 0x0
        119734:	0a000003 	beq	119748 <TMNP::ProcessLA(void)+0x21c>
        119738:	e59220a4 	ldr	r2, [r2, #164]
        11973c:	e1320000 	teq	r2, r0
        119740:	05c0e011 	streqb	lr, [r0, #17]	; fField17
        119744:	0a000000 	beq	11974c <TMNP::ProcessLA(void)+0x220>
        119748:	e5c03011 	strb	r3, [r0, #17]	; fField17
        11974c:	e5900000 	ldr	r0, [r0]
        119750:	e2411001 	sub	r1, r1, #1	; 0x1
        119754:	e20110ff 	and	r1, r1, #255	; 0xff
        119758:	e3510000 	cmp	r1, #0	; 0x0
        11975c:	caffffee 	bgt	11971c <TMNP::ProcessLA(void)+0x1f0>
        119760:	e5940018 	ldr	r0, [r4, #24]	; fField24
        119764:	e3100008 	tst	r0, #8	; 0x8
        119768:	0a000003 	beq	11977c <TMNP::ProcessLA(void)+0x250>
        11976c:	e1a00004 	mov	r0, r4
        119770:	e5941000 	ldr	r1, [r4]
        119774:	e1a0e00f 	mov	lr, pc
        119778:	e281f06c 	add	pc, r1, #108	; 0x6c
        11977c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119780:	e5d010b1 	ldrb	r1, [r0, #177]
        119784:	e5d02ce8 	ldrb	r2, [r0, #3304]
        119788:	e0811002 	add	r1, r1, r2
        11978c:	e5c010b0 	strb	r1, [r0, #176]
        119790:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119794:	e5d01ce8 	ldrb	r1, [r0, #3304]
        119798:	e3310000 	teq	r1, #0	; 0x0
        11979c:	159000a4 	ldrne	r0, [r0, #164]
        1197a0:	15d00011 	ldrneb	r0, [r0, #17]	; fField17
        1197a4:	13300000 	teqne	r0, #0	; 0x0
        1197a8:	0a000003 	beq	1197bc <TMNP::ProcessLA(void)+0x290>
        1197ac:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1197b0:	e3100302 	tst	r0, #134217728	; 0x8000000
        1197b4:	01a00004 	moveq	r0, r4
        1197b8:	0b640d99 	bleq	1a1ce24 <TMNP::$XmitLT(void)>
        1197bc:	e3350000 	teq	r5, #0	; 0x0
        1197c0:	11a00004 	movne	r0, r4
        1197c4:	191b69f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        1197c8:	1a640d99 	bne	1a1ce34 <TMNP::$XmitStartBuffer(void)>
        1197cc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::XmitLR(void)
 * Address: 00119858
 */
TMNP::XmitLR(void) {
    /*
        119858:	e1a0c00d 	mov	ip, sp
        11985c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        119860:	e24cb004 	sub	fp, ip, #4	; 0x4
        119864:	e1a04000 	mov	r4, r0
        119868:	e24dd004 	sub	sp, sp, #4	; 0x4
        11986c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        119870:	e3100001 	tst	r0, #1	; 0x1
        119874:	0a0000e4 	beq	119c0c <TMNP::XmitLR(void)+0x3b4>
        119878:	e3100302 	tst	r0, #134217728	; 0x8000000
        11987c:	1a0000e2 	bne	119c0c <TMNP::XmitLR(void)+0x3b4>
        119880:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119884:	e2805e12 	add	r5, r0, #288	; 0x120
        119888:	e5b010d8 	ldr	r1, [r0, #216]!
        11988c:	e1a0e00f 	mov	lr, pc
        119890:	e281f028 	add	pc, r1, #40	; 0x28
        119894:	e3a00014 	mov	r0, #20	; 0x14
        119898:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        11989c:	e5d2109b 	ldrb	r1, [r2, #155]
        1198a0:	e3310000 	teq	r1, #0	; 0x0
        1198a4:	13a00017 	movne	r0, #23	; 0x17
        1198a8:	e5921034 	ldr	r1, [r2, #52]
        1198ac:	e3310000 	teq	r1, #0	; 0x0
        1198b0:	0a00000d 	beq	1198ec <TMNP::XmitLR(void)+0x94>
        1198b4:	e5922004 	ldr	r2, [r2, #4]	; fField4
        1198b8:	e3120002 	tst	r2, #2	; 0x2
        1198bc:	0a000003 	beq	1198d0 <TMNP::XmitLR(void)+0x78>
        1198c0:	e311000e 	tst	r1, #14	; 0xe
        1198c4:	12800003 	addne	r0, r0, #3	; 0x3
        1198c8:	1a000006 	bne	1198e8 <TMNP::XmitLR(void)+0x90>
        1198cc:	ea000006 	b	1198ec <TMNP::XmitLR(void)+0x94>
        1198d0:	e3110006 	tst	r1, #6	; 0x6
        1198d4:	12800003 	addne	r0, r0, #3	; 0x3
        1198d8:	120000ff 	andne	r0, r0, #255	; 0xff
        1198dc:	e3110008 	tst	r1, #8	; 0x8
        1198e0:	0a000001 	beq	1198ec <TMNP::XmitLR(void)+0x94>
        1198e4:	e2800006 	add	r0, r0, #6	; 0x6
        1198e8:	e20000ff 	and	r0, r0, #255	; 0xff
        1198ec:	e5c50000 	strb	r0, [r5]
        1198f0:	e3a01001 	mov	r1, #1	; 0x1
        1198f4:	e5c51001 	strb	r1, [r5, #1]
        1198f8:	e3a08002 	mov	r8, #2	; 0x2
        1198fc:	e5c58002 	strb	r8, [r5, #2]
        119900:	e5c51003 	strb	r1, [r5, #3]
        119904:	e3a07006 	mov	r7, #6	; 0x6
        119908:	e5c57004 	strb	r7, [r5, #4]	; fField4
        11990c:	e5c51005 	strb	r1, [r5, #5]
        119910:	e3a0c000 	mov	ip, #0	; 0x0
        119914:	e5c5c006 	strb	ip, [r5, #6]
        119918:	e5c5c007 	strb	ip, [r5, #7]
        11991c:	e5c5c008 	strb	ip, [r5, #8]	; fField8
        119920:	e5c5c009 	strb	ip, [r5, #9]
        119924:	e3a000ff 	mov	r0, #255	; 0xff
        119928:	e5c5000a 	strb	r0, [r5, #10]
        11992c:	e5c5800b 	strb	r8, [r5, #11]
        119930:	e5c5100c 	strb	r1, [r5, #12]	; fField12
        119934:	e5c5800d 	strb	r8, [r5, #13]
        119938:	e3a02003 	mov	r2, #3	; 0x3
        11993c:	e5c5200e 	strb	r2, [r5, #14]
        119940:	e5c5100f 	strb	r1, [r5, #15]
        119944:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        119948:	e5d2209a 	ldrb	r2, [r2, #154]	; fField154
        11994c:	e5c52010 	strb	r2, [r5, #16]
        119950:	e3a02004 	mov	r2, #4	; 0x4
        119954:	e5c52011 	strb	r2, [r5, #17]	; fField17
        119958:	e5c58012 	strb	r8, [r5, #18]
        11995c:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        119960:	e593309c 	ldr	r3, [r3, #156]
        119964:	e5c53013 	strb	r3, [r5, #19]
        119968:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        11996c:	e593309c 	ldr	r3, [r3, #156]
        119970:	e0003423 	and	r3, r0, r3, lsr #8
        119974:	e3a00015 	mov	r0, #21	; 0x15
        119978:	e5c53014 	strb	r3, [r5, #20]
        11997c:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        119980:	e5d3309b 	ldrb	r3, [r3, #155]
        119984:	e3a06008 	mov	r6, #8	; 0x8
        119988:	e3330000 	teq	r3, #0	; 0x0
        11998c:	0a000008 	beq	1199b4 <TMNP::XmitLR(void)+0x15c>
        119990:	e5c56015 	strb	r6, [r5, #21]
        119994:	e5c51016 	strb	r1, [r5, #22]
        119998:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11999c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1199a0:	e2100004 	ands	r0, r0, #4	; 0x4
        1199a4:	13a00001 	movne	r0, #1	; 0x1
        1199a8:	e3803002 	orr	r3, r0, #2	; 0x2
        1199ac:	e3a00018 	mov	r0, #24	; 0x18
        1199b0:	e5c53017 	strb	r3, [r5, #23]
        1199b4:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        1199b8:	e593e004 	ldr	lr, [r3, #4]	; fField4
        1199bc:	e31e0002 	tst	lr, #2	; 0x2
        1199c0:	e3a0e009 	mov	lr, #9	; 0x9
        1199c4:	e5933034 	ldr	r3, [r3, #52]
        1199c8:	0a000026 	beq	119a68 <TMNP::XmitLR(void)+0x210>
        1199cc:	e313000e 	tst	r3, #14	; 0xe
        1199d0:	0a000050 	beq	119b18 <TMNP::XmitLR(void)+0x2c0>
        1199d4:	e2803001 	add	r3, r0, #1	; 0x1
        1199d8:	e7c5e000 	strb	lr, [r5, r0]
        1199dc:	e2830001 	add	r0, r3, #1	; 0x1
        1199e0:	e7c51003 	strb	r1, [r5, r3]
        1199e4:	e7c5c000 	strb	ip, [r5, r0]
        1199e8:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        1199ec:	e593c034 	ldr	ip, [r3, #52]
        1199f0:	e31c0008 	tst	ip, #8	; 0x8
        1199f4:	0a00000d 	beq	119a30 <TMNP::XmitLR(void)+0x1d8>
        1199f8:	e5d3c014 	ldrb	ip, [r3, #20]
        1199fc:	e33c0003 	teq	ip, #3	; 0x3
        119a00:	1a00000a 	bne	119a30 <TMNP::XmitLR(void)+0x1d8>
        119a04:	e5933018 	ldr	r3, [r3, #24]	; fField24
        119a08:	e1a03823 	mov	r3, r3, lsr #16
        119a0c:	e3330c02 	teq	r3, #512	; 0x200
        119a10:	07c52000 	streqb	r2, [r5, r0]
        119a14:	0a000005 	beq	119a30 <TMNP::XmitLR(void)+0x1d8>
        119a18:	e3330b01 	teq	r3, #1024	; 0x400
        119a1c:	07c56000 	streqb	r6, [r5, r0]
        119a20:	0a000002 	beq	119a30 <TMNP::XmitLR(void)+0x1d8>
        119a24:	e3330b02 	teq	r3, #2048	; 0x800
        119a28:	03a03010 	moveq	r3, #16	; 0x10
        119a2c:	07c53000 	streqb	r3, [r5, r0]
        119a30:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        119a34:	e5933034 	ldr	r3, [r3, #52]
        119a38:	e3130004 	tst	r3, #4	; 0x4
        119a3c:	17d53000 	ldrneb	r3, [r5, r0]
        119a40:	13833002 	orrne	r3, r3, #2	; 0x2
        119a44:	17c53000 	strneb	r3, [r5, r0]
        119a48:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        119a4c:	e5933034 	ldr	r3, [r3, #52]
        119a50:	e3130002 	tst	r3, #2	; 0x2
        119a54:	17d53000 	ldrneb	r3, [r5, r0]
        119a58:	13833001 	orrne	r3, r3, #1	; 0x1
        119a5c:	17c53000 	strneb	r3, [r5, r0]
        119a60:	e2800001 	add	r0, r0, #1	; 0x1
        119a64:	ea00002b 	b	119b18 <TMNP::XmitLR(void)+0x2c0>
        119a68:	e3130006 	tst	r3, #6	; 0x6
        119a6c:	0a00000f 	beq	119ab0 <TMNP::XmitLR(void)+0x258>
        119a70:	e2803001 	add	r3, r0, #1	; 0x1
        119a74:	e7c5e000 	strb	lr, [r5, r0]
        119a78:	e2830001 	add	r0, r3, #1	; 0x1
        119a7c:	e7c51003 	strb	r1, [r5, r3]
        119a80:	e7c5c000 	strb	ip, [r5, r0]
        119a84:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        119a88:	e5933034 	ldr	r3, [r3, #52]
        119a8c:	e3130004 	tst	r3, #4	; 0x4
        119a90:	17c58000 	strneb	r8, [r5, r0]
        119a94:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        119a98:	e5933034 	ldr	r3, [r3, #52]
        119a9c:	e3130002 	tst	r3, #2	; 0x2
        119aa0:	17d53000 	ldrneb	r3, [r5, r0]
        119aa4:	13833001 	orrne	r3, r3, #1	; 0x1
        119aa8:	17c53000 	strneb	r3, [r5, r0]
        119aac:	e2800001 	add	r0, r0, #1	; 0x1
        119ab0:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        119ab4:	e5933034 	ldr	r3, [r3, #52]
        119ab8:	e3130008 	tst	r3, #8	; 0x8
        119abc:	0a000015 	beq	119b18 <TMNP::XmitLR(void)+0x2c0>
        119ac0:	e3a0300e 	mov	r3, #14	; 0xe
        119ac4:	e280c001 	add	ip, r0, #1	; 0x1
        119ac8:	e7c53000 	strb	r3, [r5, r0]
        119acc:	e28c3001 	add	r3, ip, #1	; 0x1
        119ad0:	e7c5200c 	strb	r2, [r5, ip]
        119ad4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119ad8:	e5d0c014 	ldrb	ip, [r0, #20]
        119adc:	e2830001 	add	r0, r3, #1	; 0x1
        119ae0:	e7c5c003 	strb	ip, [r5, r3]
        119ae4:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        119ae8:	e5d33018 	ldrb	r3, [r3, #24]	; fField24
        119aec:	e1a0c000 	mov	ip, r0
        119af0:	e2800001 	add	r0, r0, #1	; 0x1
        119af4:	e7c5300c 	strb	r3, [r5, ip]
        119af8:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        119afc:	e5d3c019 	ldrb	ip, [r3, #25]
        119b00:	e2803001 	add	r3, r0, #1	; 0x1
        119b04:	e7c5c000 	strb	ip, [r5, r0]
        119b08:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119b0c:	e5d0c015 	ldrb	ip, [r0, #21]
        119b10:	e2830001 	add	r0, r3, #1	; 0x1
        119b14:	e7c5c003 	strb	ip, [r5, r3]
        119b18:	e3a03000 	mov	r3, #0	; 0x0
        119b1c:	e58d3000 	str	r3, [sp]
        119b20:	e5943588 	ldr	r3, [r4, #1416]	; fField1416
        119b24:	e5933000 	ldr	r3, [r3]
        119b28:	e3130002 	tst	r3, #2	; 0x2
        119b2c:	05943564 	ldreq	r3, [r4, #1380]	; fField1380
        119b30:	15943568 	ldrne	r3, [r4, #1384]	; fField1384
        119b34:	e58d3000 	str	r3, [sp]
        119b38:	e3330000 	teq	r3, #0	; 0x0
        119b3c:	0a000019 	beq	119ba8 <TMNP::XmitLR(void)+0x350>
        119b40:	e5d53000 	ldrb	r3, [r5]
        119b44:	e2833006 	add	r3, r3, #6	; 0x6
        119b48:	e5c53000 	strb	r3, [r5]
        119b4c:	e3a030c5 	mov	r3, #197	; 0xc5
        119b50:	e280c001 	add	ip, r0, #1	; 0x1
        119b54:	e7c53000 	strb	r3, [r5, r0]
        119b58:	e28c0001 	add	r0, ip, #1	; 0x1
        119b5c:	e7c5700c 	strb	r7, [r5, ip]
        119b60:	e2803001 	add	r3, r0, #1	; 0x1
        119b64:	e7c51000 	strb	r1, [r5, r0]
        119b68:	e2830001 	add	r0, r3, #1	; 0x1
        119b6c:	e7c52003 	strb	r2, [r5, r3]
        119b70:	e5dd1000 	ldrb	r1, [sp]
        119b74:	e1a02000 	mov	r2, r0
        119b78:	e2800001 	add	r0, r0, #1	; 0x1
        119b7c:	e7c51002 	strb	r1, [r5, r2]
        119b80:	e5dd2001 	ldrb	r2, [sp, #1]
        119b84:	e2801001 	add	r1, r0, #1	; 0x1
        119b88:	e7c52000 	strb	r2, [r5, r0]
        119b8c:	e5dd2002 	ldrb	r2, [sp, #2]
        119b90:	e2810001 	add	r0, r1, #1	; 0x1
        119b94:	e7c52001 	strb	r2, [r5, r1]
        119b98:	e5dd1003 	ldrb	r1, [sp, #3]
        119b9c:	e1a02000 	mov	r2, r0
        119ba0:	e2800001 	add	r0, r0, #1	; 0x1
        119ba4:	e7c51002 	strb	r1, [r5, r2]
        119ba8:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119bac:	e28130d8 	add	r3, r1, #216	; 0xd8
        119bb0:	e260100a 	rsb	r1, r0, #10	; 0xa
        119bb4:	e2811c01 	add	r1, r1, #256	; 0x100
        119bb8:	e1a00003 	mov	r0, r3
        119bbc:	e3a02001 	mov	r2, #1	; 0x1
        119bc0:	e5933000 	ldr	r3, [r3]
        119bc4:	e1a0e00f 	mov	lr, pc
        119bc8:	e283f034 	add	pc, r3, #52	; 0x34
        119bcc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119bd0:	e5901000 	ldr	r1, [r0]
        119bd4:	e3811601 	orr	r1, r1, #1048576	; 0x100000
        119bd8:	e5801000 	str	r1, [r0]
        119bdc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119be0:	e28010d8 	add	r1, r0, #216	; 0xd8
        119be4:	e1a00004 	mov	r0, r4
        119be8:	e3a02001 	mov	r2, #1	; 0x1
        119bec:	eb640c8f 	bl	1a1ce30 <TMNP::$XmitPostRequest(CBufferList *, unsigned char)>
        119bf0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119bf4:	e5b01d3c 	ldr	r1, [r0, #3388]!
        119bf8:	e2811001 	add	r1, r1, #1	; 0x1
        119bfc:	e5801000 	str	r1, [r0]
        119c00:	e5b40588 	ldr	r0, [r4, #1416]!	; fField1416
        119c04:	e5901cf4 	ldr	r1, [r0, #3316]	; fField3316
        119c08:	e5a01cfc 	str	r1, [r0, #3324]!
        119c0c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::XmitLD(void)
 * Address: 00119c10
 */
TMNP::XmitLD(void) {
    /*
        119c10:	e1a0c00d 	mov	ip, sp
        119c14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        119c18:	e24cb004 	sub	fp, ip, #4	; 0x4
        119c1c:	e1a04000 	mov	r4, r0
        119c20:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        119c24:	e5901000 	ldr	r1, [r0]
        119c28:	e3110101 	tst	r1, #1073741824	; 0x40000000
        119c2c:	1a00002a 	bne	119cdc <TMNP::XmitLD(void)+0xcc>
        119c30:	e3a05001 	mov	r5, #1	; 0x1
        119c34:	e5c05008 	strb	r5, [r0, #8]	; fField8
        119c38:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119c3c:	e5b01c2c 	ldr	r1, [r0, #3116]!
        119c40:	e1a0e00f 	mov	lr, pc
        119c44:	e281f028 	add	pc, r1, #40	; 0x28
        119c48:	e3a01007 	mov	r1, #7	; 0x7
        119c4c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119c50:	e5c01c4c 	strb	r1, [r0, #3148]
        119c54:	e3a01002 	mov	r1, #2	; 0x2
        119c58:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119c5c:	e2800001 	add	r0, r0, #1	; 0x1
        119c60:	e5c01c4c 	strb	r1, [r0, #3148]
        119c64:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119c68:	e0800001 	add	r0, r0, r1
        119c6c:	e5c05c4c 	strb	r5, [r0, #3148]
        119c70:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119c74:	e2800003 	add	r0, r0, #3	; 0x3
        119c78:	e5c05c4c 	strb	r5, [r0, #3148]
        119c7c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119c80:	e5d02098 	ldrb	r2, [r0, #152]
        119c84:	e2800004 	add	r0, r0, #4	; 0x4
        119c88:	e5c02c4c 	strb	r2, [r0, #3148]
        119c8c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119c90:	e2800005 	add	r0, r0, #5	; 0x5
        119c94:	e5c01c4c 	strb	r1, [r0, #3148]
        119c98:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119c9c:	e2800006 	add	r0, r0, #6	; 0x6
        119ca0:	e5c05c4c 	strb	r5, [r0, #3148]
        119ca4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119ca8:	e5d01099 	ldrb	r1, [r0, #153]
        119cac:	e2800007 	add	r0, r0, #7	; 0x7
        119cb0:	e5c01c4c 	strb	r1, [r0, #3148]
        119cb4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119cb8:	e2401ff5 	sub	r1, r0, #980	; 0x3d4
        119cbc:	e2811a01 	add	r1, r1, #4096	; 0x1000
        119cc0:	e1a00004 	mov	r0, r4
        119cc4:	e3a02001 	mov	r2, #1	; 0x1
        119cc8:	eb640c58 	bl	1a1ce30 <TMNP::$XmitPostRequest(CBufferList *, unsigned char)>
        119ccc:	e1a00004 	mov	r0, r4
        119cd0:	eb640001 	bl	1a19cdc <TMNP::$SetXmitAbortTimer(void)>
        119cd4:	e3a00000 	mov	r0, #0	; 0x0
        119cd8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        119cdc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        119ce0:	e3c00202 	bic	r0, r0, #536870912	; 0x20000000
        119ce4:	e5a40018 	str	r0, [r4, #24]!	; fField24
        119ce8:	e3a00001 	mov	r0, #1	; 0x1
        119cec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::XmitLT(void)
 * Address: 00119cf0
 */
TMNP::XmitLT(void) {
    /*
        119cf0:	e1a0c00d 	mov	ip, sp
        119cf4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        119cf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        119cfc:	e1a04000 	mov	r4, r0
        119d00:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        119d04:	e59050a4 	ldr	r5, [r0, #164]
        119d08:	e5941018 	ldr	r1, [r4, #24]	; fField24
        119d0c:	e3110302 	tst	r1, #134217728	; 0x8000000
        119d10:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        119d14:	e5d51011 	ldrb	r1, [r5, #17]	; fField17
        119d18:	e3310000 	teq	r1, #0	; 0x0
        119d1c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        119d20:	e3310003 	teq	r1, #3	; 0x3
        119d24:	1a000018 	bne	119d8c <TMNP::XmitLT(void)+0x9c>
        119d28:	e5901000 	ldr	r1, [r0]
        119d2c:	e3110401 	tst	r1, #16777216	; 0x1000000
        119d30:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        119d34:	e5d51010 	ldrb	r1, [r5, #16]
        119d38:	e5d000b0 	ldrb	r0, [r0, #176]
        119d3c:	e0412000 	sub	r2, r1, r0
        119d40:	e20220ff 	and	r2, r2, #255	; 0xff
        119d44:	e3520008 	cmp	r2, #8	; 0x8
        119d48:	aa000001 	bge	119d54 <TMNP::XmitLT(void)+0x64>
        119d4c:	e1310000 	teq	r1, r0
        119d50:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        119d54:	e3a00001 	mov	r0, #1	; 0x1
        119d58:	e5c50012 	strb	r0, [r5, #18]
        119d5c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119d60:	e5b01d40 	ldr	r1, [r0, #3392]!
        119d64:	e2811001 	add	r1, r1, #1	; 0x1
        119d68:	e5801000 	str	r1, [r0]
        119d6c:	e5d52010 	ldrb	r2, [r5, #16]
        119d70:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119d74:	e5d010b2 	ldrb	r1, [r0, #178]
        119d78:	e1320001 	teq	r2, r1
        119d7c:	02400fb2 	subeq	r0, r0, #712	; 0x2c8
        119d80:	02800a01 	addeq	r0, r0, #4096	; 0x1000
        119d84:	0a000008 	beq	119dac <TMNP::XmitLT(void)+0xbc>
        119d88:	ea00000a 	b	119db8 <TMNP::XmitLT(void)+0xc8>
        119d8c:	e5d020b0 	ldrb	r2, [r0, #176]
        119d90:	e5d010b1 	ldrb	r1, [r0, #177]
        119d94:	e0421001 	sub	r1, r2, r1
        119d98:	e20120ff 	and	r2, r1, #255	; 0xff
        119d9c:	e59010b4 	ldr	r1, [r0, #180]
        119da0:	e1520001 	cmp	r2, r1
        119da4:	991ba870 	ldmlsdb	fp, {r4, r5, r6, fp, sp, pc}
        119da8:	e28000b4 	add	r0, r0, #180	; 0xb4
        119dac:	e5901000 	ldr	r1, [r0]
        119db0:	e2811001 	add	r1, r1, #1	; 0x1
        119db4:	e5801000 	str	r1, [r0]
        119db8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119dbc:	e5901000 	ldr	r1, [r0]
        119dc0:	e3811502 	orr	r1, r1, #8388608	; 0x800000
        119dc4:	e5801000 	str	r1, [r0]
        119dc8:	e3a01000 	mov	r1, #0	; 0x0
        119dcc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119dd0:	e5a010b8 	str	r1, [r0, #184]!
        119dd4:	e2850014 	add	r0, r5, #20	; 0x14
        119dd8:	e1a06000 	mov	r6, r0
        119ddc:	e5901000 	ldr	r1, [r0]
        119de0:	e1a0e00f 	mov	lr, pc
        119de4:	e281f028 	add	pc, r1, #40	; 0x28
        119de8:	e5d51010 	ldrb	r1, [r5, #16]
        119dec:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119df0:	e5900c58 	ldr	r0, [r0, #3160]	; fField3160
        119df4:	e0800005 	add	r0, r0, r5
        119df8:	e5c0105c 	strb	r1, [r0, #92]
        119dfc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119e00:	e5900c58 	ldr	r0, [r0, #3160]	; fField3160
        119e04:	e2801001 	add	r1, r0, #1	; 0x1
        119e08:	e261100a 	rsb	r1, r1, #10	; 0xa
        119e0c:	e2811c01 	add	r1, r1, #256	; 0x100
        119e10:	e1a00006 	mov	r0, r6
        119e14:	e3a02001 	mov	r2, #1	; 0x1
        119e18:	e5963000 	ldr	r3, [r6]
        119e1c:	e1a0e00f 	mov	lr, pc
        119e20:	e283f034 	add	pc, r3, #52	; 0x34
        119e24:	e3a01002 	mov	r1, #2	; 0x2
        119e28:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119e2c:	e5a010a8 	str	r1, [r0, #168]!
        119e30:	e1a01006 	mov	r1, r6
        119e34:	e1a00004 	mov	r0, r4
        119e38:	e3a02000 	mov	r2, #0	; 0x0
        119e3c:	eb640bfb 	bl	1a1ce30 <TMNP::$XmitPostRequest(CBufferList *, unsigned char)>
        119e40:	e5b40588 	ldr	r0, [r4, #1416]!	; fField1416
        119e44:	e5901cfc 	ldr	r1, [r0, #3324]
        119e48:	e3310000 	teq	r1, #0	; 0x0
        119e4c:	05901cf4 	ldreq	r1, [r0, #3316]	; fField3316
        119e50:	05a01cfc 	streq	r1, [r0, #3324]!
        119e54:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::XmitFrameComplete(long, unsigned long)
 * Address: 00119e58
 */
TMNP::XmitFrameComplete(long, unsigned long) {
    /*
        119e58:	e1a0c00d 	mov	ip, sp
        119e5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        119e60:	e24cb004 	sub	fp, ip, #4	; 0x4
        119e64:	e1a04000 	mov	r4, r0
        119e68:	e3a05000 	mov	r5, #0	; 0x0
        119e6c:	e3310000 	teq	r1, #0	; 0x0
        119e70:	1a000008 	bne	119e98 <TMNP::XmitFrameComplete(long, unsigned long)+0x40>
        119e74:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119e78:	e59020a8 	ldr	r2, [r0, #168]
        119e7c:	e3320002 	teq	r2, #2	; 0x2
        119e80:	01a00004 	moveq	r0, r4
        119e84:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        119e88:	0a640be6 	beq	1a1ce28 <TMNP::$XmitLTContinue(void)>
        119e8c:	e5b02d54 	ldr	r2, [r0, #3412]!	; fField3412
        119e90:	e2822001 	add	r2, r2, #1	; 0x1
        119e94:	e5802000 	str	r2, [r0]
        119e98:	e1a02001 	mov	r2, r1
        119e9c:	e1a00004 	mov	r0, r4
        119ea0:	e3a01302 	mov	r1, #134217728	; 0x8000000
        119ea4:	eb6a9c78 	bl	1bc108c <TCommTool::$ShouldAbort(unsigned long, long)>
        119ea8:	e3300000 	teq	r0, #0	; 0x0
        119eac:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        119eb0:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119eb4:	e5910000 	ldr	r0, [r1]
        119eb8:	e3100502 	tst	r0, #8388608	; 0x800000
        119ebc:	0a00002c 	beq	119f74 <TMNP::XmitFrameComplete(long, unsigned long)+0x11c>
        119ec0:	e3a02001 	mov	r2, #1	; 0x1
        119ec4:	e59100a4 	ldr	r0, [r1, #164]
        119ec8:	e5a120a8 	str	r2, [r1, #168]!
        119ecc:	e5d01011 	ldrb	r1, [r0, #17]	; fField17
        119ed0:	e3a03000 	mov	r3, #0	; 0x0
        119ed4:	e3310004 	teq	r1, #4	; 0x4
        119ed8:	13a01003 	movne	r1, #3	; 0x3
        119edc:	15c01011 	strneb	r1, [r0, #17]	; fField17
        119ee0:	05c03011 	streqb	r3, [r0, #17]	; fField17
        119ee4:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119ee8:	e5912000 	ldr	r2, [r1]
        119eec:	e3c22502 	bic	r2, r2, #8388608	; 0x800000
        119ef0:	e5812000 	str	r2, [r1]
        119ef4:	e5d01012 	ldrb	r1, [r0, #18]
        119ef8:	e3310000 	teq	r1, #0	; 0x0
        119efc:	1a000008 	bne	119f24 <TMNP::XmitFrameComplete(long, unsigned long)+0xcc>
        119f00:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119f04:	e5f120b2 	ldrb	r2, [r1, #178]!
        119f08:	e2822001 	add	r2, r2, #1	; 0x1
        119f0c:	e5c12000 	strb	r2, [r1]
        119f10:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119f14:	e590c008 	ldr	ip, [r0, #8]	; fField8
        119f18:	e5b12d5c 	ldr	r2, [r1, #3420]!
        119f1c:	e08c2002 	add	r2, ip, r2
        119f20:	ea000007 	b	119f44 <TMNP::XmitFrameComplete(long, unsigned long)+0xec>
        119f24:	e5d0c010 	ldrb	ip, [r0, #16]
        119f28:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119f2c:	e5d1e0b2 	ldrb	lr, [r1, #178]
        119f30:	e13c000e 	teq	ip, lr
        119f34:	0591c0ac 	ldreq	ip, [r1, #172]	; fField172
        119f38:	033c0000 	teqeq	ip, #0	; 0x0
        119f3c:	1a000001 	bne	119f48 <TMNP::XmitFrameComplete(long, unsigned long)+0xf0>
        119f40:	e3c22401 	bic	r2, r2, #16777216	; 0x1000000
        119f44:	e5812000 	str	r2, [r1]
        119f48:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        119f4c:	e59120ac 	ldr	r2, [r1, #172]	; fField172
        119f50:	e3320000 	teq	r2, #0	; 0x0
        119f54:	05900000 	ldreq	r0, [r0]
        119f58:	05a100a4 	streq	r0, [r1, #164]!
        119f5c:	0a00000f 	beq	119fa0 <TMNP::XmitFrameComplete(long, unsigned long)+0x148>
        119f60:	e5a120a4 	str	r2, [r1, #164]!
        119f64:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119f68:	e3a05001 	mov	r5, #1	; 0x1
        119f6c:	e5a030ac 	str	r3, [r0, #172]!	; fField172
        119f70:	ea00000a 	b	119fa0 <TMNP::XmitFrameComplete(long, unsigned long)+0x148>
        119f74:	e3100601 	tst	r0, #1048576	; 0x100000
        119f78:	13c00601 	bicne	r0, r0, #1048576	; 0x100000
        119f7c:	15810000 	strne	r0, [r1]
        119f80:	12000002 	andne	r0, r0, #2	; 0x2
        119f84:	13300000 	teqne	r0, #0	; 0x0
        119f88:	15941568 	ldrne	r1, [r4, #1384]	; fField1384
        119f8c:	13310000 	teqne	r1, #0	; 0x0
        119f90:	0a000002 	beq	119fa0 <TMNP::XmitFrameComplete(long, unsigned long)+0x148>
        119f94:	e1a00004 	mov	r0, r4
        119f98:	eb63cdcb 	bl	1a0d6cc <TSerTool::$ChangeSpeed(unsigned long)>
        119f9c:	e584055c 	str	r0, [r4, #1372]	; fField1372
        119fa0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119fa4:	e5900000 	ldr	r0, [r0]
        119fa8:	e3100302 	tst	r0, #134217728	; 0x8000000
        119fac:	11a00004 	movne	r0, r4
        119fb0:	13a01302 	movne	r1, #134217728	; 0x8000000
        119fb4:	1b640b96 	blne	1a1ce14 <TMNP::$XmitLA(unsigned long)>
        119fb8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        119fbc:	e3100002 	tst	r0, #2	; 0x2
        119fc0:	0a000008 	beq	119fe8 <TMNP::XmitFrameComplete(long, unsigned long)+0x190>
        119fc4:	e3350000 	teq	r5, #0	; 0x0
        119fc8:	0a000004 	beq	119fe0 <TMNP::XmitFrameComplete(long, unsigned long)+0x188>
        119fcc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119fd0:	e5900000 	ldr	r0, [r0]
        119fd4:	e3100401 	tst	r0, #16777216	; 0x1000000
        119fd8:	01a00004 	moveq	r0, r4
        119fdc:	0b640b94 	bleq	1a1ce34 <TMNP::$XmitStartBuffer(void)>
        119fe0:	e1a00004 	mov	r0, r4
        119fe4:	eb640b8e 	bl	1a1ce24 <TMNP::$XmitLT(void)>
        119fe8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        119fec:	e5900000 	ldr	r0, [r0]
        119ff0:	e3100201 	tst	r0, #268435456	; 0x10000000
        119ff4:	11a00004 	movne	r0, r4
        119ff8:	13a01201 	movne	r1, #268435456	; 0x10000000
        119ffc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        11a000:	1a640b83 	bne	1a1ce14 <TMNP::$XmitLA(unsigned long)>
        11a004:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::XmitLDComplete(long, unsigned long)
 * Address: 0011a008
 */
TMNP::XmitLDComplete(long, unsigned long) {
    /*
        11a008:	e1a02000 	mov	r2, r0
        11a00c:	e3310000 	teq	r1, #0	; 0x0
        11a010:	1a000003 	bne	11a024 <TMNP::XmitLDComplete(long, unsigned long)+0x1c>
        11a014:	e5920588 	ldr	r0, [r2, #1416]	; fField1416
        11a018:	e5b01d54 	ldr	r1, [r0, #3412]!	; fField3412
        11a01c:	e2811001 	add	r1, r1, #1	; 0x1
        11a020:	e5801000 	str	r1, [r0]
        11a024:	e5920018 	ldr	r0, [r2, #24]	; fField24
        11a028:	e3c0030a 	bic	r0, r0, #671088640	; 0x28000000
        11a02c:	e5820018 	str	r0, [r2, #24]	; fField24
        11a030:	e1a00002 	mov	r0, r2
        11a034:	e5921000 	ldr	r1, [r2]
        11a038:	e281ff46 	add	pc, r1, #280	; 0x118
    */
}

/**
 * Symbol: TMNP::XmitPostRequest(CBufferList *, unsigned char)
 * Address: 0011a03c
 */
TMNP::XmitPostRequest(CBufferList *, unsigned char) {
    /*
        11a03c:	e20220ff 	and	r2, r2, #255	; 0xff
        11a040:	e5903018 	ldr	r3, [r0, #24]	; fField24
        11a044:	e3833302 	orr	r3, r3, #134217728	; 0x8000000
        11a048:	e5803018 	str	r3, [r0, #24]	; fField24
        11a04c:	ea63f6d0 	b	1a17b94 <TSerTool::$PutFramedBytes(CBufferList *, unsigned char)>
    */
}

/**
 * Symbol: TMNP::XmitLA(unsigned long)
 * Address: 0011a050
 */
TMNP::XmitLA(unsigned long) {
    /*
        11a050:	e1a0c00d 	mov	ip, sp
        11a054:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11a058:	e24cb004 	sub	fp, ip, #4	; 0x4
        11a05c:	e1a04000 	mov	r4, r0
        11a060:	e5900018 	ldr	r0, [r0, #24]	; fField24
        11a064:	e3100302 	tst	r0, #134217728	; 0x8000000
        11a068:	e3a00000 	mov	r0, #0	; 0x0
        11a06c:	0a000004 	beq	11a084 <TMNP::XmitLA(unsigned long)+0x34>
        11a070:	e5b42588 	ldr	r2, [r4, #1416]!	; fField1416
        11a074:	e5923000 	ldr	r3, [r2]
        11a078:	e1831001 	orr	r1, r3, r1
        11a07c:	e5821000 	str	r1, [r2]
        11a080:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        11a084:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        11a088:	e5912000 	ldr	r2, [r1]
        11a08c:	e3c22306 	bic	r2, r2, #402653184	; 0x18000000
        11a090:	e5812000 	str	r2, [r1]
        11a094:	e1a01000 	mov	r1, r0
        11a098:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a09c:	e5a01d00 	str	r1, [r0, #3328]!
        11a0a0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a0a4:	e5d0209a 	ldrb	r2, [r0, #154]	; fField154
        11a0a8:	e3520001 	cmp	r2, #1	; 0x1
        11a0ac:	da000004 	ble	11a0c4 <TMNP::XmitLA(unsigned long)+0x74>
        11a0b0:	e5902cf8 	ldr	r2, [r0, #3320]	; fField3320
        11a0b4:	e5903d10 	ldr	r3, [r0, #3344]
        11a0b8:	e1520003 	cmp	r2, r3
        11a0bc:	95a03d04 	strls	r3, [r0, #3332]!	; fField3332
        11a0c0:	85a02d04 	strhi	r2, [r0, #3332]!	; fField3332
        11a0c4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a0c8:	e5c01c61 	strb	r1, [r0, #3169]
        11a0cc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a0d0:	e5b01c2c 	ldr	r1, [r0, #3116]!
        11a0d4:	e1a0e00f 	mov	lr, pc
        11a0d8:	e281f028 	add	pc, r1, #40	; 0x28
        11a0dc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a0e0:	e5d0209b 	ldrb	r2, [r0, #155]
        11a0e4:	e3a01005 	mov	r1, #5	; 0x5
        11a0e8:	e3a06001 	mov	r6, #1	; 0x1
        11a0ec:	e3320000 	teq	r2, #0	; 0x0
        11a0f0:	0a000006 	beq	11a110 <TMNP::XmitLA(unsigned long)+0xc0>
        11a0f4:	e3a02003 	mov	r2, #3	; 0x3
        11a0f8:	e5c02c4c 	strb	r2, [r0, #3148]
        11a0fc:	e3a00002 	mov	r0, #2	; 0x2
        11a100:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        11a104:	e2822001 	add	r2, r2, #1	; 0x1
        11a108:	e5c21c4c 	strb	r1, [r2, #3148]
        11a10c:	ea00000b 	b	11a140 <TMNP::XmitLA(unsigned long)+0xf0>
        11a110:	e3a02007 	mov	r2, #7	; 0x7
        11a114:	e5c02c4c 	strb	r2, [r0, #3148]
        11a118:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a11c:	e2800001 	add	r0, r0, #1	; 0x1
        11a120:	e5c01c4c 	strb	r1, [r0, #3148]
        11a124:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a128:	e2800002 	add	r0, r0, #2	; 0x2
        11a12c:	e5c06c4c 	strb	r6, [r0, #3148]
        11a130:	e3a00004 	mov	r0, #4	; 0x4
        11a134:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        11a138:	e2811003 	add	r1, r1, #3	; 0x3
        11a13c:	e5c16c4c 	strb	r6, [r1, #3148]
        11a140:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        11a144:	e5d12c60 	ldrb	r2, [r1, #3168]
        11a148:	e2805001 	add	r5, r0, #1	; 0x1
        11a14c:	e0810000 	add	r0, r1, r0
        11a150:	e5c02c4c 	strb	r2, [r0, #3148]
        11a154:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a158:	e5d0109b 	ldrb	r1, [r0, #155]
        11a15c:	e3310000 	teq	r1, #0	; 0x0
        11a160:	1a000007 	bne	11a184 <TMNP::XmitLA(unsigned long)+0x134>
        11a164:	e3a01002 	mov	r1, #2	; 0x2
        11a168:	e2852001 	add	r2, r5, #1	; 0x1
        11a16c:	e0800005 	add	r0, r0, r5
        11a170:	e5c01c4c 	strb	r1, [r0, #3148]
        11a174:	e2825001 	add	r5, r2, #1	; 0x1
        11a178:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a17c:	e0800002 	add	r0, r0, r2
        11a180:	e5c06c4c 	strb	r6, [r0, #3148]
        11a184:	e1a00004 	mov	r0, r4
        11a188:	eb63f697 	bl	1a17bec <TMNP::$ReceiveCredit(void)>
        11a18c:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        11a190:	e0811005 	add	r1, r1, r5
        11a194:	e5c10c4c 	strb	r0, [r1, #3148]
        11a198:	e2851001 	add	r1, r5, #1	; 0x1
        11a19c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a1a0:	e0802005 	add	r2, r0, r5
        11a1a4:	e5d22c4c 	ldrb	r2, [r2, #3148]
        11a1a8:	e3320000 	teq	r2, #0	; 0x0
        11a1ac:	e5902000 	ldr	r2, [r0]
        11a1b0:	13c22301 	bicne	r2, r2, #67108864	; 0x4000000
        11a1b4:	03822301 	orreq	r2, r2, #67108864	; 0x4000000
        11a1b8:	e5802000 	str	r2, [r0]
        11a1bc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a1c0:	e2403ff5 	sub	r3, r0, #980	; 0x3d4
        11a1c4:	e2833a01 	add	r3, r3, #4096	; 0x1000
        11a1c8:	e261100a 	rsb	r1, r1, #10	; 0xa
        11a1cc:	e1a00003 	mov	r0, r3
        11a1d0:	e3a02001 	mov	r2, #1	; 0x1
        11a1d4:	e5933000 	ldr	r3, [r3]
        11a1d8:	e1a0e00f 	mov	lr, pc
        11a1dc:	e283f034 	add	pc, r3, #52	; 0x34
        11a1e0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a1e4:	e2401ff5 	sub	r1, r0, #980	; 0x3d4
        11a1e8:	e2811a01 	add	r1, r1, #4096	; 0x1000
        11a1ec:	e1a00004 	mov	r0, r4
        11a1f0:	e3a02001 	mov	r2, #1	; 0x1
        11a1f4:	eb640b0d 	bl	1a1ce30 <TMNP::$XmitPostRequest(CBufferList *, unsigned char)>
        11a1f8:	e1a00006 	mov	r0, r6
        11a1fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::XmitNAck(void)
 * Address: 0011a200
 */
TMNP::XmitNAck(void) {
    /*
        11a200:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11a204:	e5912d10 	ldr	r2, [r1, #3344]
        11a208:	e3520000 	cmp	r2, #0	; 0x0
        11a20c:	9a000016 	bls	11a26c <TMNP::XmitNAck(void)+0x6c>
        11a210:	e5913d00 	ldr	r3, [r1, #3328]
        11a214:	e3530000 	cmp	r3, #0	; 0x0
        11a218:	81a0f00e 	movhi	pc, lr
        11a21c:	e5a12d00 	str	r2, [r1, #3328]!
        11a220:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11a224:	e5b12d48 	ldr	r2, [r1, #3400]!
        11a228:	e2822001 	add	r2, r2, #1	; 0x1
        11a22c:	e5812000 	str	r2, [r1]
        11a230:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11a234:	e1a02001 	mov	r2, r1
        11a238:	e5913d10 	ldr	r3, [r1, #3344]
        11a23c:	e5911cf4 	ldr	r1, [r1, #3316]	; fField3316
        11a240:	e1530081 	cmp	r3, r1, lsl #1
        11a244:	21a0f00e 	movcs	pc, lr
        11a248:	e1a01083 	mov	r1, r3, lsl #1
        11a24c:	e5a21d10 	str	r1, [r2, #3344]!
        11a250:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11a254:	e1a02000 	mov	r2, r0
        11a258:	e5900cf4 	ldr	r0, [r0, #3316]	; fField3316
        11a25c:	e1510080 	cmp	r1, r0, lsl #1
        11a260:	81a00080 	movhi	r0, r0, lsl #1
        11a264:	85a20d10 	strhi	r0, [r2, #3344]!
        11a268:	e1a0f00e 	mov	pc, lr
        11a26c:	e5b12d48 	ldr	r2, [r1, #3400]!
        11a270:	e2822001 	add	r2, r2, #1	; 0x1
        11a274:	e5812000 	str	r2, [r1]
        11a278:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11a27c:	e5912cf4 	ldr	r2, [r1, #3316]	; fField3316
        11a280:	e1b021a2 	movs	r2, r2, lsr #3
        11a284:	e5a12d10 	str	r2, [r1, #3344]!
        11a288:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11a28c:	03a02001 	moveq	r2, #1	; 0x1
        11a290:	05a12d10 	streq	r2, [r1, #3344]!
        11a294:	e3a01302 	mov	r1, #134217728	; 0x8000000
        11a298:	ea640add 	b	1a1ce14 <TMNP::$XmitLA(unsigned long)>
    */
}

/**
 * Symbol: TMNP::MNPCompressOut(unsigned char)
 * Address: 0011a29c
 */
TMNP::MNPCompressOut(unsigned char) {
    /*
        11a29c:	e1a0c00d 	mov	ip, sp
        11a2a0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11a2a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11a2a8:	e1a04000 	mov	r4, r0
        11a2ac:	e20160ff 	and	r6, r1, #255	; 0xff
        11a2b0:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11a2b4:	e5b01d64 	ldr	r1, [r0, #3428]!
        11a2b8:	e2811001 	add	r1, r1, #1	; 0x1
        11a2bc:	e5801000 	str	r1, [r0]
        11a2c0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a2c4:	e59000c0 	ldr	r0, [r0, #192]
        11a2c8:	e1a01000 	mov	r1, r0
        11a2cc:	e1a05000 	mov	r5, r0
        11a2d0:	e5d00011 	ldrb	r0, [r0, #17]	; fField17
        11a2d4:	e3300000 	teq	r0, #0	; 0x0
        11a2d8:	01a00004 	moveq	r0, r4
        11a2dc:	0b640acb 	bleq	1a1ce10 <TMNP::$XmitInitBuffer(TXmitBufDscrptr *)>
        11a2e0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a2e4:	e5b01c58 	ldr	r1, [r0, #3160]!	; fField3160
        11a2e8:	e5950008 	ldr	r0, [r5, #8]	; fField8
        11a2ec:	e0810000 	add	r0, r1, r0
        11a2f0:	e0800005 	add	r0, r0, r5
        11a2f4:	e5e0605d 	strb	r6, [r0, #93]!
        11a2f8:	e5950008 	ldr	r0, [r5, #8]	; fField8
        11a2fc:	e2800001 	add	r0, r0, #1	; 0x1
        11a300:	e5850008 	str	r0, [r5, #8]	; fField8
        11a304:	e595100c 	ldr	r1, [r5, #12]	; fField12
        11a308:	e1500001 	cmp	r0, r1
        11a30c:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
        11a310:	e3a00002 	mov	r0, #2	; 0x2
        11a314:	e5c50011 	strb	r0, [r5, #17]	; fField17
        11a318:	e5950000 	ldr	r0, [r5]
        11a31c:	e5b41588 	ldr	r1, [r4, #1416]!	; fField1416
        11a320:	e5a100c0 	str	r0, [r1, #192]!
        11a324:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::MNPNilFlush(void)
 * Address: 0011a328
 */
TMNP::MNPNilFlush(void) {
    /*
        11a328:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNP::XmitStartBuffer(void)
 * Address: 0011a32c
 */
TMNP::XmitStartBuffer(void) {
    /*
        11a32c:	e1a0c00d 	mov	ip, sp
        11a330:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11a334:	e24cb004 	sub	fp, ip, #4	; 0x4
        11a338:	e1a04000 	mov	r4, r0
        11a33c:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11a340:	e5901000 	ldr	r1, [r0]
        11a344:	e3110602 	tst	r1, #2097152	; 0x200000
        11a348:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        11a34c:	e5d410ac 	ldrb	r1, [r4, #172]	; fField172
        11a350:	e3310000 	teq	r1, #0	; 0x0
        11a354:	1a000003 	bne	11a368 <TMNP::XmitStartBuffer(void)+0x3c>
        11a358:	e2800068 	add	r0, r0, #104	; 0x68
        11a35c:	eb6baff2 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
        11a360:	e3300000 	teq	r0, #0	; 0x0
        11a364:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        11a368:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a36c:	e5901000 	ldr	r1, [r0]
        11a370:	e3811602 	orr	r1, r1, #2097152	; 0x200000
        11a374:	e5801000 	str	r1, [r0]
        11a378:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a37c:	e5b010c0 	ldr	r1, [r0, #192]!
        11a380:	e5d10011 	ldrb	r0, [r1, #17]	; fField17
        11a384:	e3300000 	teq	r0, #0	; 0x0
        11a388:	01a00004 	moveq	r0, r4
        11a38c:	0b640a9f 	bleq	1a1ce10 <TMNP::$XmitInitBuffer(TXmitBufDscrptr *)>
        11a390:	e1a00004 	mov	r0, r4
        11a394:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        11a398:	ea640a9a 	b	1a1ce08 <TMNP::$XmitBufferLT(void)>
    */
}

/**
 * Symbol: TMNP::XmitInitBuffer(TXmitBufDscrptr *)
 * Address: 0011a39c
 */
TMNP::XmitInitBuffer(TXmitBufDscrptr *) {
    /*
        11a39c:	e1a0c00d 	mov	ip, sp
        11a3a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11a3a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11a3a8:	e1a05000 	mov	r5, r0
        11a3ac:	e1a04001 	mov	r4, r1
        11a3b0:	e3a00000 	mov	r0, #0	; 0x0
        11a3b4:	e5810008 	str	r0, [r1, #8]	; fField8
        11a3b8:	e5911004 	ldr	r1, [r1, #4]	; fField4
        11a3bc:	e5d11010 	ldrb	r1, [r1, #16]
        11a3c0:	e2811001 	add	r1, r1, #1	; 0x1
        11a3c4:	e5c41010 	strb	r1, [r4, #16]
        11a3c8:	e5c40012 	strb	r0, [r4, #18]
        11a3cc:	e3a00001 	mov	r0, #1	; 0x1
        11a3d0:	e5c40011 	strb	r0, [r4, #17]	; fField17
        11a3d4:	e1a00005 	mov	r0, r5
        11a3d8:	eb640a91 	bl	1a1ce24 <TMNP::$XmitLT(void)>
        11a3dc:	e5950588 	ldr	r0, [r5, #1416]	; fField1416
        11a3e0:	e5d0109b 	ldrb	r1, [r0, #155]
        11a3e4:	e3310000 	teq	r1, #0	; 0x0
        11a3e8:	059000a0 	ldreq	r0, [r0, #160]	; fField160
        11a3ec:	0a000011 	beq	11a438 <TMNP::XmitInitBuffer(TXmitBufDscrptr *)+0x9c>
        11a3f0:	e5901d34 	ldr	r1, [r0, #3380]
        11a3f4:	e59020a0 	ldr	r2, [r0, #160]	; fField160
        11a3f8:	e1510002 	cmp	r1, r2
        11a3fc:	2a000002 	bcs	11a40c <TMNP::XmitInitBuffer(TXmitBufDscrptr *)+0x70>
        11a400:	e5b01d34 	ldr	r1, [r0, #3380]!
        11a404:	e2811001 	add	r1, r1, #1	; 0x1
        11a408:	e5801000 	str	r1, [r0]
        11a40c:	e5b51588 	ldr	r1, [r5, #1416]!	; fField1416
        11a410:	e5910d34 	ldr	r0, [r1, #3380]
        11a414:	e3500020 	cmp	r0, #32	; 0x20
        11a418:	93a00020 	movls	r0, #32	; 0x20
        11a41c:	9a000005 	bls	11a438 <TMNP::XmitInitBuffer(TXmitBufDscrptr *)+0x9c>
        11a420:	e3500040 	cmp	r0, #64	; 0x40
        11a424:	93a00040 	movls	r0, #64	; 0x40
        11a428:	9a000002 	bls	11a438 <TMNP::XmitInitBuffer(TXmitBufDscrptr *)+0x9c>
        11a42c:	e3500080 	cmp	r0, #128	; 0x80
        11a430:	85b100a0 	ldrhi	r0, [r1, #160]!	; fField160
        11a434:	93a00080 	movls	r0, #128	; 0x80
        11a438:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        11a43c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::XmitBufferLT(void)
 * Address: 0011a440
 */
TMNP::XmitBufferLT(void) {
    /*
        11a440:	e1a0c00d 	mov	ip, sp
        11a444:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11a448:	e24cb004 	sub	fp, ip, #4	; 0x4
        11a44c:	e1a04000 	mov	r4, r0
        11a450:	e24dd004 	sub	sp, sp, #4	; 0x4
        11a454:	e3a05001 	mov	r5, #1	; 0x1
        11a458:	e3a06000 	mov	r6, #0	; 0x0
        11a45c:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        11a460:	e59200c0 	ldr	r0, [r2, #192]
        11a464:	e5d01011 	ldrb	r1, [r0, #17]	; fField17
        11a468:	e3310001 	teq	r1, #1	; 0x1
        11a46c:	13310000 	teqne	r1, #0	; 0x0
        11a470:	1a000040 	bne	11a578 <TMNP::XmitBufferLT(void)+0x138>
        11a474:	e5903000 	ldr	r3, [r0]
        11a478:	e5d33011 	ldrb	r3, [r3, #17]	; fField17
        11a47c:	e3330000 	teq	r3, #0	; 0x0
        11a480:	13310000 	teqne	r1, #0	; 0x0
        11a484:	0a000005 	beq	11a4a0 <TMNP::XmitBufferLT(void)+0x60>
        11a488:	e2801008 	add	r1, r0, #8	; 0x8
        11a48c:	e8910003 	ldmia	r1, {r0, r1}
        11a490:	e0410000 	sub	r0, r1, r0
        11a494:	e5921038 	ldr	r1, [r2, #56]
        11a498:	e1500001 	cmp	r0, r1
        11a49c:	3a000035 	bcc	11a578 <TMNP::XmitBufferLT(void)+0x138>
        11a4a0:	e2820068 	add	r0, r2, #104	; 0x68
        11a4a4:	e1a0100d 	mov	r1, sp
        11a4a8:	eb6bafae 	bl	1c06368 <TCircleBuf::$GetNextByte(unsigned char *)>
        11a4ac:	e3300002 	teq	r0, #2	; 0x2
        11a4b0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a4b4:	1a000022 	bne	11a544 <TMNP::XmitBufferLT(void)+0x104>
        11a4b8:	e59000bc 	ldr	r0, [r0, #188]
        11a4bc:	e3300000 	teq	r0, #0	; 0x0
        11a4c0:	0a000015 	beq	11a51c <TMNP::XmitBufferLT(void)+0xdc>
        11a4c4:	e3a00000 	mov	r0, #0	; 0x0
        11a4c8:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        11a4cc:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a4d0:	e1a0200d 	mov	r2, sp
        11a4d4:	e59010bc 	ldr	r1, [r0, #188]
        11a4d8:	e2800068 	add	r0, r0, #104	; 0x68
        11a4dc:	eb6baf95 	bl	1c06338 <TCircleBuf::$CopyIn(CBufferList *, unsigned long *)>
        11a4e0:	e3300005 	teq	r0, #5	; 0x5
        11a4e4:	1a00000a 	bne	11a514 <TMNP::XmitBufferLT(void)+0xd4>
        11a4e8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a4ec:	e59000bc 	ldr	r0, [r0, #188]
        11a4f0:	e5901000 	ldr	r1, [r0]
        11a4f4:	e1a0e00f 	mov	lr, pc
        11a4f8:	e281f02c 	add	pc, r1, #44	; 0x2c
        11a4fc:	e1a02000 	mov	r2, r0
        11a500:	e1a00004 	mov	r0, r4
        11a504:	e3a01000 	mov	r1, #0	; 0x0
        11a508:	eb6a96d2 	bl	1bc0058 <TCommTool::$PutComplete(long, unsigned long)>
        11a50c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a510:	e5a060bc 	str	r6, [r0, #188]!
        11a514:	e28dd004 	add	sp, sp, #4	; 0x4
        11a518:	ea000014 	b	11a570 <TMNP::XmitBufferLT(void)+0x130>
        11a51c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a520:	e5b01d70 	ldr	r1, [r0, #3440]!
        11a524:	e2811001 	add	r1, r1, #1	; 0x1
        11a528:	e5801000 	str	r1, [r0]
        11a52c:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        11a530:	e3a01000 	mov	r1, #0	; 0x0
        11a534:	e5920020 	ldr	r0, [r2, #32]
        11a538:	e1a0e00f 	mov	lr, pc
        11a53c:	e592f02c 	ldr	pc, [r2, #44]
        11a540:	ea00000c 	b	11a578 <TMNP::XmitBufferLT(void)+0x138>
        11a544:	e5b01d60 	ldr	r1, [r0, #3424]!
        11a548:	e2811001 	add	r1, r1, #1	; 0x1
        11a54c:	e5801000 	str	r1, [r0]
        11a550:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        11a554:	e5920020 	ldr	r0, [r2, #32]
        11a558:	e5dd1000 	ldrb	r1, [sp]
        11a55c:	e1a0e00f 	mov	lr, pc
        11a560:	e592f028 	ldr	pc, [r2, #40]	; fField40
        11a564:	e5940018 	ldr	r0, [r4, #24]	; fField24
        11a568:	e3100004 	tst	r0, #4	; 0x4
        11a56c:	1a000001 	bne	11a578 <TMNP::XmitBufferLT(void)+0x138>
        11a570:	e3350000 	teq	r5, #0	; 0x0
        11a574:	1affffb8 	bne	11a45c <TMNP::XmitBufferLT(void)+0x1c>
        11a578:	e5b40588 	ldr	r0, [r4, #1416]!	; fField1416
        11a57c:	e5901000 	ldr	r1, [r0]
        11a580:	e3c11602 	bic	r1, r1, #2097152	; 0x200000
        11a584:	e5801000 	str	r1, [r0]
        11a588:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::XmitLTContinue(void)
 * Address: 0011a58c
 */
TMNP::XmitLTContinue(void) {
    /*
        11a58c:	e1a0c00d 	mov	ip, sp
        11a590:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        11a594:	e24cb004 	sub	fp, ip, #4	; 0x4
        11a598:	e1a04000 	mov	r4, r0
        11a59c:	e3a06000 	mov	r6, #0	; 0x0
        11a5a0:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11a5a4:	e59050a4 	ldr	r5, [r0, #164]
        11a5a8:	e5952008 	ldr	r2, [r5, #8]	; fField8
        11a5ac:	e59010b8 	ldr	r1, [r0, #184]
        11a5b0:	e0427001 	sub	r7, r2, r1
        11a5b4:	e5900c58 	ldr	r0, [r0, #3160]	; fField3160
        11a5b8:	e0800001 	add	r0, r0, r1
        11a5bc:	e2809001 	add	r9, r0, #1	; 0x1
        11a5c0:	e2850014 	add	r0, r5, #20	; 0x14
        11a5c4:	e1a0a000 	mov	sl, r0
        11a5c8:	e1a08000 	mov	r8, r0
        11a5cc:	e5901000 	ldr	r1, [r0]
        11a5d0:	e1a0e00f 	mov	lr, pc
        11a5d4:	e281f028 	add	pc, r1, #40	; 0x28
        11a5d8:	e1a01009 	mov	r1, r9
        11a5dc:	e1a00008 	mov	r0, r8
        11a5e0:	e3e02000 	mvn	r2, #0	; 0x0
        11a5e4:	e5983000 	ldr	r3, [r8]
        11a5e8:	e1a0e00f 	mov	lr, pc
        11a5ec:	e283f034 	add	pc, r3, #52	; 0x34
        11a5f0:	e0891007 	add	r1, r9, r7
        11a5f4:	e261100a 	rsb	r1, r1, #10	; 0xa
        11a5f8:	e2811c01 	add	r1, r1, #256	; 0x100
        11a5fc:	e1a00008 	mov	r0, r8
        11a600:	e3a02001 	mov	r2, #1	; 0x1
        11a604:	e5983000 	ldr	r3, [r8]
        11a608:	e1a0e00f 	mov	lr, pc
        11a60c:	e283f034 	add	pc, r3, #52	; 0x34
        11a610:	e3370000 	teq	r7, #0	; 0x0
        11a614:	0a000004 	beq	11a62c <TMNP::XmitLTContinue(void)+0xa0>
        11a618:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a61c:	e5b010b8 	ldr	r1, [r0, #184]!
        11a620:	e0811007 	add	r1, r1, r7
        11a624:	e5801000 	str	r1, [r0]
        11a628:	ea00000b 	b	11a65c <TMNP::XmitLTContinue(void)+0xd0>
        11a62c:	e5d51011 	ldrb	r1, [r5, #17]	; fField17
        11a630:	e3a00003 	mov	r0, #3	; 0x3
        11a634:	e3310001 	teq	r1, #1	; 0x1
        11a638:	1a000004 	bne	11a650 <TMNP::XmitLTContinue(void)+0xc4>
        11a63c:	e5951000 	ldr	r1, [r5]
        11a640:	e5942588 	ldr	r2, [r4, #1416]	; fField1416
        11a644:	e5a210c0 	str	r1, [r2, #192]!
        11a648:	e3a01002 	mov	r1, #2	; 0x2
        11a64c:	e5c51011 	strb	r1, [r5, #17]	; fField17
        11a650:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        11a654:	e3a06001 	mov	r6, #1	; 0x1
        11a658:	e5a100a8 	str	r0, [r1, #168]!
        11a65c:	e1a0100a 	mov	r1, sl
        11a660:	e1a02006 	mov	r2, r6
        11a664:	e1a00004 	mov	r0, r4
        11a668:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        11a66c:	ea6409ef 	b	1a1ce30 <TMNP::$XmitPostRequest(CBufferList *, unsigned char)>
    */
}

/**
 * Symbol: TMNP::GetToolName(void)
 * Address: 0011a6b0
 */
TMNP::GetToolName(void) {
    /*
        11a6b0:	e28f0f00 	add	r0, pc, #0	; 0x0
        11a6b4:	e1a0f00e 	mov	pc, lr
        11a6b8:	4d4e5020 	stcmil	0, cr5, [lr, -#128]
        11a6bc:	546f6f6c 	strplbt	r6, [pc], #f6c	; 11a6c4 <TMNP::HandleRequest(TUMsgToken &, unsigned long)>
        11a6c0:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TMNP::HandleRequest(TUMsgToken &, unsigned long)
 * Address: 0011a6c4
 */
TMNP::HandleRequest(TUMsgToken &, unsigned long) {
    /*
        11a6c4:	e5913000 	ldr	r3, [r1]
        11a6c8:	e590c5ac 	ldr	ip, [r0, #1452]	; fField1452
        11a6cc:	e13c0003 	teq	ip, r3
        11a6d0:	1a63e09e 	bne	1a12950 <TSerTool::$HandleRequest(TUMsgToken &, unsigned long)>
        11a6d4:	e590204c 	ldr	r2, [r0, #76]	; fField76
        11a6d8:	e3320001 	teq	r2, #1	; 0x1
        11a6dc:	0a63e09c 	beq	1a12954 <TMNP::$HandleTickTimer(void)>
        11a6e0:	e3320002 	teq	r2, #2	; 0x2
        11a6e4:	13a0207e 	movne	r2, #126	; 0x7e
        11a6e8:	12422c3f 	subne	r2, r2, #16128	; 0x3f00
        11a6ec:	1a6a89e1 	bne	1bbce78 <TCommTool::$CompleteRequest(TUMsgToken &, long)>
        11a6f0:	0a63e098 	beq	1a12958 <TMNP::$HandleXmitAbortTimer(void)>
    */
}

/**
 * Symbol: TMNP::DoControl(unsigned long, unsigned long)
 * Address: 0011a6f4
 */
TMNP::DoControl(unsigned long, unsigned long) {
    /*
        11a6f4:	e3310c01 	teq	r1, #256	; 0x100
        11a6f8:	0a63d42b 	beq	1a0f7ac <TMNP::$DoCompressFile(void)>
        11a6fc:	e241cc01 	sub	ip, r1, #256	; 0x100
        11a700:	e33c0001 	teq	ip, #1	; 0x1
        11a704:	03a0207e 	moveq	r2, #126	; 0x7e
        11a708:	02422c3f 	subeq	r2, r2, #16128	; 0x3f00
        11a70c:	03a01002 	moveq	r1, #2	; 0x2
        11a710:	0a6a89d6 	beq	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
        11a714:	1a63d428 	bne	1a0f7bc <TSerTool::$DoControl(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TMNP::PutBytes(CBufferList *)
 * Address: 0011a718
 */
TMNP::PutBytes(CBufferList *) {
    /*
        11a718:	e1a0c00d 	mov	ip, sp
        11a71c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11a720:	e24cb004 	sub	fp, ip, #4	; 0x4
        11a724:	e1a04000 	mov	r4, r0
        11a728:	e1a05001 	mov	r5, r1
        11a72c:	e1a00001 	mov	r0, r1
        11a730:	e5911000 	ldr	r1, [r1]
        11a734:	e1a0e00f 	mov	lr, pc
        11a738:	e281f02c 	add	pc, r1, #44	; 0x2c
        11a73c:	e3300000 	teq	r0, #0	; 0x0
        11a740:	1a000004 	bne	11a758 <TMNP::PutBytes(CBufferList *)+0x40>
        11a744:	e1a00004 	mov	r0, r4
        11a748:	e3a02000 	mov	r2, #0	; 0x0
        11a74c:	e3a01000 	mov	r1, #0	; 0x0
        11a750:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        11a754:	ea6a963f 	b	1bc0058 <TCommTool::$PutComplete(long, unsigned long)>
        11a758:	e5940018 	ldr	r0, [r4, #24]	; fField24
        11a75c:	e3100004 	tst	r0, #4	; 0x4
        11a760:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        11a764:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a768:	e5a050bc 	str	r5, [r0, #188]!
        11a76c:	e1a00004 	mov	r0, r4
        11a770:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        11a774:	ea6409ae 	b	1a1ce34 <TMNP::$XmitStartBuffer(void)>
    */
}

/**
 * Symbol: TMNP::PutFramedBytes(CBufferList *, unsigned char)
 * Address: 0011a778
 */
TMNP::PutFramedBytes(CBufferList *, unsigned char) {
    /*
        11a778:	e3a02000 	mov	r2, #0	; 0x0
        11a77c:	e3a0107e 	mov	r1, #126	; 0x7e
        11a780:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
        11a784:	ea6a9633 	b	1bc0058 <TCommTool::$PutComplete(long, unsigned long)>
    */
}

/**
 * Symbol: TMNP::PutComplete(long, unsigned long)
 * Address: 0011a788
 */
TMNP::PutComplete(long, unsigned long) {
    /*
        11a788:	e1a0c00d 	mov	ip, sp
        11a78c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11a790:	e24cb004 	sub	fp, ip, #4	; 0x4
        11a794:	e1a04000 	mov	r4, r0
        11a798:	e1a06001 	mov	r6, r1
        11a79c:	e1a05002 	mov	r5, r2
        11a7a0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        11a7a4:	e3100302 	tst	r0, #134217728	; 0x8000000
        11a7a8:	0a000014 	beq	11a800 <TMNP::PutComplete(long, unsigned long)+0x78>
        11a7ac:	e3a01000 	mov	r1, #0	; 0x0
        11a7b0:	e5841270 	str	r1, [r4, #624]	; fField624
        11a7b4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a7b8:	e5d02008 	ldrb	r2, [r0, #8]	; fField8
        11a7bc:	e3320000 	teq	r2, #0	; 0x0
        11a7c0:	0a000005 	beq	11a7dc <TMNP::PutComplete(long, unsigned long)+0x54>
        11a7c4:	e5c01008 	strb	r1, [r0, #8]	; fField8
        11a7c8:	e1a02005 	mov	r2, r5
        11a7cc:	e1a01006 	mov	r1, r6
        11a7d0:	e1a00004 	mov	r0, r4
        11a7d4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        11a7d8:	ea64098f 	b	1a1ce1c <TMNP::$XmitLDComplete(long, unsigned long)>
        11a7dc:	e1a00004 	mov	r0, r4
        11a7e0:	eb6a9606 	bl	1bc0000 <TCommTool::$HoldAbort(void)>
        11a7e4:	e1a02005 	mov	r2, r5
        11a7e8:	e1a01006 	mov	r1, r6
        11a7ec:	e1a00004 	mov	r0, r4
        11a7f0:	eb640985 	bl	1a1ce0c <TMNP::$XmitFrameComplete(long, unsigned long)>
        11a7f4:	e1a00004 	mov	r0, r4
        11a7f8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        11a7fc:	ea6a8997 	b	1bbce60 <TCommTool::$AllowAbort(void)>
        11a800:	e1a02005 	mov	r2, r5
        11a804:	e1a01006 	mov	r1, r6
        11a808:	e1a00004 	mov	r0, r4
        11a80c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        11a810:	ea63f0d9 	b	1a16b7c <TSerTool::$PutComplete(long, unsigned long)>
    */
}

/**
 * Symbol: TMNP::KillPut(void)
 * Address: 0011a814
 */
TMNP::KillPut(void) {
    /*
        11a814:	e1a0c00d 	mov	ip, sp
        11a818:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11a81c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11a820:	e1a04000 	mov	r4, r0
        11a824:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11a828:	e59000bc 	ldr	r0, [r0, #188]
        11a82c:	e5901000 	ldr	r1, [r0]
        11a830:	e1a0e00f 	mov	lr, pc
        11a834:	e281f03c 	add	pc, r1, #60	; 0x3c
        11a838:	e1a02000 	mov	r2, r0
        11a83c:	e1a00004 	mov	r0, r4
        11a840:	e59f101c 	ldr	r1, [pc, #1c]	; 11a864 <TMNP::KillPut(void)+0x50>
        11a844:	eb6a9603 	bl	1bc0058 <TCommTool::$PutComplete(long, unsigned long)>
        11a848:	e3a01000 	mov	r1, #0	; 0x0
        11a84c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a850:	e5a010bc 	str	r1, [r0, #188]!
        11a854:	e1a00004 	mov	r0, r4
        11a858:	e5942000 	ldr	r2, [r4]
        11a85c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        11a860:	e282f0dc 	add	pc, r2, #220	; 0xdc
        11a864:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TMNP::KillPutComplete(long)
 * Address: 0011a868
 */
TMNP::KillPutComplete(long) {
    /*
        11a868:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        11a86c:	e3320000 	teq	r2, #0	; 0x0
        11a870:	15923000 	ldrne	r3, [r2]
        11a874:	1203ca01 	andne	ip, r3, #4096	; 0x1000
        11a878:	133c0000 	teqne	ip, #0	; 0x0
        11a87c:	0a6a95e3 	beq	1bc0010 <TCommTool::$KillPutComplete(long)>
        11a880:	13c30a01 	bicne	r0, r3, #4096	; 0x1000
        11a884:	15820000 	strne	r0, [r2]
        11a888:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNP::GetBytes(CBufferList *)
 * Address: 0011a88c
 */
TMNP::GetBytes(CBufferList *) {
    /*
        11a88c:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        11a890:	e5923000 	ldr	r3, [r2]
        11a894:	e3c33040 	bic	r3, r3, #64	; 0x40
        11a898:	e5823000 	str	r3, [r2]
        11a89c:	e3a02000 	mov	r2, #0	; 0x0
        11a8a0:	e5903588 	ldr	r3, [r0, #1416]	; fField1416
        11a8a4:	e5a32c74 	str	r2, [r3, #3188]!
        11a8a8:	ea63d7f1 	b	1a10874 <TMNP::$GetBytesStart(CBufferList *)>
    */
}

/**
 * Symbol: TMNP::GetFramedBytes(CBufferList *)
 * Address: 0011a990
 */
TMNP::GetFramedBytes(CBufferList *) {
    /*
        11a990:	e3a03000 	mov	r3, #0	; 0x0
        11a994:	e3a02000 	mov	r2, #0	; 0x0
        11a998:	e3a0107e 	mov	r1, #126	; 0x7e
        11a99c:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
        11a9a0:	ea6a958f 	b	1bbffe4 <TCommTool::$GetComplete(long, unsigned char, unsigned long)>
    */
}

/**
 * Symbol: TMNP::GetBytesImmediate(CBufferList *, long)
 * Address: 0011a9a4
 */
TMNP::GetBytesImmediate(CBufferList *, long) {
    /*
        11a9a4:	e5903588 	ldr	r3, [r0, #1416]	; fField1416
        11a9a8:	e593c000 	ldr	ip, [r3]
        11a9ac:	e38cc040 	orr	ip, ip, #64	; 0x40
        11a9b0:	e583c000 	str	ip, [r3]
        11a9b4:	e5903588 	ldr	r3, [r0, #1416]	; fField1416
        11a9b8:	e5a32c74 	str	r2, [r3, #3188]!
        11a9bc:	ea63d7ac 	b	1a10874 <TMNP::$GetBytesStart(CBufferList *)>
    */
}

/**
 * Symbol: TMNP::GetBytesStart(CBufferList *)
 * Address: 0011a9c0
 */
TMNP::GetBytesStart(CBufferList *) {
    /*
        11a9c0:	e1a0c00d 	mov	ip, sp
        11a9c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11a9c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        11a9cc:	e1a04000 	mov	r4, r0
        11a9d0:	e1a05001 	mov	r5, r1
        11a9d4:	e1a00001 	mov	r0, r1
        11a9d8:	e5911000 	ldr	r1, [r1]
        11a9dc:	e1a0e00f 	mov	lr, pc
        11a9e0:	e281f02c 	add	pc, r1, #44	; 0x2c
        11a9e4:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        11a9e8:	e5a10c6c 	str	r0, [r1, #3180]!
        11a9ec:	e1a01000 	mov	r1, r0
        11a9f0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a9f4:	e5a01c70 	str	r1, [r0, #3184]!
        11a9f8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11a9fc:	e5901c6c 	ldr	r1, [r0, #3180]
        11aa00:	e3310000 	teq	r1, #0	; 0x0
        11aa04:	1a000005 	bne	11aa20 <TMNP::GetBytesStart(CBufferList *)+0x60>
        11aa08:	e1a00004 	mov	r0, r4
        11aa0c:	e3a03000 	mov	r3, #0	; 0x0
        11aa10:	e3a02000 	mov	r2, #0	; 0x0
        11aa14:	e3a01000 	mov	r1, #0	; 0x0
        11aa18:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        11aa1c:	ea6a9570 	b	1bbffe4 <TCommTool::$GetComplete(long, unsigned char, unsigned long)>
        11aa20:	e5941018 	ldr	r1, [r4, #24]	; fField24
        11aa24:	e3110004 	tst	r1, #4	; 0x4
        11aa28:	05a05c68 	streq	r5, [r0, #3176]!
        11aa2c:	01a00004 	moveq	r0, r4
        11aa30:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        11aa34:	0a63f467 	beq	1a17bd8 <TMNP::$RcvStartBuffer(void)>
        11aa38:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::GetComplete(long, unsigned char, unsigned long)
 * Address: 0011aa3c
 */
TMNP::GetComplete(long, unsigned char, unsigned long) {
    /*
        11aa3c:	e1a0c00d 	mov	ip, sp
        11aa40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11aa44:	e24cb004 	sub	fp, ip, #4	; 0x4
        11aa48:	e1a04000 	mov	r4, r0
        11aa4c:	e1a05001 	mov	r5, r1
        11aa50:	e20260ff 	and	r6, r2, #255	; 0xff
        11aa54:	e5900018 	ldr	r0, [r0, #24]	; fField24
        11aa58:	e3100101 	tst	r0, #1073741824	; 0x40000000
        11aa5c:	0a000011 	beq	11aaa8 <TMNP::GetComplete(long, unsigned char, unsigned long)+0x6c>
        11aa60:	e594327c 	ldr	r3, [r4, #636]	; fField636
        11aa64:	e1a00003 	mov	r0, r3
        11aa68:	e3a02001 	mov	r2, #1	; 0x1
        11aa6c:	e5941280 	ldr	r1, [r4, #640]	; fField640
        11aa70:	e5933000 	ldr	r3, [r3]
        11aa74:	e1a0e00f 	mov	lr, pc
        11aa78:	e283f034 	add	pc, r3, #52	; 0x34
        11aa7c:	e3a00000 	mov	r0, #0	; 0x0
        11aa80:	e584027c 	str	r0, [r4, #636]	; fField636
        11aa84:	e1a00004 	mov	r0, r4
        11aa88:	eb6a955c 	bl	1bc0000 <TCommTool::$HoldAbort(void)>
        11aa8c:	e1a02006 	mov	r2, r6
        11aa90:	e1a01005 	mov	r1, r5
        11aa94:	e1a00004 	mov	r0, r4
        11aa98:	eb63f445 	bl	1a17bb4 <TMNP::$RcvFrameComplete(long, unsigned char)>
        11aa9c:	e1a00004 	mov	r0, r4
        11aaa0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        11aaa4:	ea6a88ed 	b	1bbce60 <TCommTool::$AllowAbort(void)>
        11aaa8:	e1a02006 	mov	r2, r6
        11aaac:	e1a01005 	mov	r1, r5
        11aab0:	e1a00004 	mov	r0, r4
        11aab4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        11aab8:	ea63db74 	b	1a11890 <TSerTool::$GetComplete(long, unsigned char, unsigned long)>
    */
}

/**
 * Symbol: TMNP::KillGet(void)
 * Address: 0011aabc
 */
TMNP::KillGet(void) {
    /*
        11aabc:	e1a0c00d 	mov	ip, sp
        11aac0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11aac4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11aac8:	e1a04000 	mov	r4, r0
        11aacc:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11aad0:	e5900c68 	ldr	r0, [r0, #3176]
        11aad4:	e5901000 	ldr	r1, [r0]
        11aad8:	e1a0e00f 	mov	lr, pc
        11aadc:	e281f03c 	add	pc, r1, #60	; 0x3c
        11aae0:	e1a03000 	mov	r3, r0
        11aae4:	e1a00004 	mov	r0, r4
        11aae8:	e3a02000 	mov	r2, #0	; 0x0
        11aaec:	e59f1030 	ldr	r1, [pc, #30]	; 11ab24 <TMNP::KillGet(void)+0x68>
        11aaf0:	eb6a953b 	bl	1bbffe4 <TCommTool::$GetComplete(long, unsigned char, unsigned long)>
        11aaf4:	e3a00000 	mov	r0, #0	; 0x0
        11aaf8:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        11aafc:	e5a10c68 	str	r0, [r1, #3176]!
        11ab00:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        11ab04:	e5a10c6c 	str	r0, [r1, #3180]!
        11ab08:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        11ab0c:	e5a10c70 	str	r0, [r1, #3184]!
        11ab10:	e1a00004 	mov	r0, r4
        11ab14:	e3a01000 	mov	r1, #0	; 0x0
        11ab18:	e5942000 	ldr	r2, [r4]
        11ab1c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        11ab20:	e282f0f4 	add	pc, r2, #244	; 0xf4
        11ab24:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TMNP::KillGetComplete(long)
 * Address: 0011ab28
 */
TMNP::KillGetComplete(long) {
    /*
        11ab28:	e5902588 	ldr	r2, [r0, #1416]	; fField1416
        11ab2c:	e3320000 	teq	r2, #0	; 0x0
        11ab30:	15923000 	ldrne	r3, [r2]
        11ab34:	1203ca02 	andne	ip, r3, #8192	; 0x2000
        11ab38:	133c0000 	teqne	ip, #0	; 0x0
        11ab3c:	0a6a9532 	beq	1bc000c <TCommTool::$KillGetComplete(long)>
        11ab40:	13c30a02 	bicne	r0, r3, #8192	; 0x2000
        11ab44:	15820000 	strne	r0, [r2]
        11ab48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNP::OpenAlloc(void)
 * Address: 0011ab4c
 */
TMNP::OpenAlloc(void) {
    /*
        11ab4c:	e1a0c00d 	mov	ip, sp
        11ab50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11ab54:	e24cb004 	sub	fp, ip, #4	; 0x4
        11ab58:	e1a04000 	mov	r4, r0
        11ab5c:	e3a05000 	mov	r5, #0	; 0x0
        11ab60:	e3a00000 	mov	r0, #0	; 0x0
        11ab64:	eb63ba64 	bl	1a094fc <TMNP_CCB::$__ct(void)>
        11ab68:	e5840588 	str	r0, [r4, #1416]	; fField1416
        11ab6c:	e3300000 	teq	r0, #0	; 0x0
        11ab70:	0a000044 	beq	11ac88 <TMNP::OpenAlloc(void)+0x13c>
        11ab74:	eb63e386 	bl	1a13994 <TMNP_CCB::$Init(void)>
        11ab78:	e1b05000 	movs	r5, r0
        11ab7c:	1a000041 	bne	11ac88 <TMNP::OpenAlloc(void)+0x13c>
        11ab80:	e5940558 	ldr	r0, [r4, #1368]	; fField1368
        11ab84:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        11ab88:	e5a1000c 	str	r0, [r1, #12]!	; fField12
        11ab8c:	e3100008 	tst	r0, #8	; 0x8
        11ab90:	e5941588 	ldr	r1, [r4, #1416]	; fField1416
        11ab94:	0a000003 	beq	11aba8 <TMNP::OpenAlloc(void)+0x5c>
        11ab98:	e2810010 	add	r0, r1, #16	; 0x10
        11ab9c:	eb640491 	bl	1a1bde8 <$V42CreateCompressVars(TCompressVars **)>
        11aba0:	e1b05000 	movs	r5, r0
        11aba4:	1a000037 	bne	11ac88 <TMNP::OpenAlloc(void)+0x13c>
        11aba8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11abac:	e590100c 	ldr	r1, [r0, #12]	; fField12
        11abb0:	e3110002 	tst	r1, #2	; 0x2
        11abb4:	0a000003 	beq	11abc8 <TMNP::OpenAlloc(void)+0x7c>
        11abb8:	e280001c 	add	r0, r0, #28	; 0x1c
        11abbc:	eb63e7a3 	bl	1a14a50 <$MNPC5Open(TMNPClass5Vars **)>
        11abc0:	e1b05000 	movs	r5, r0
        11abc4:	1a00002f 	bne	11ac88 <TMNP::OpenAlloc(void)+0x13c>
        11abc8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11abcc:	e2400fe2 	sub	r0, r0, #904	; 0x388
        11abd0:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11abd4:	e3a01000 	mov	r1, #0	; 0x0
        11abd8:	eb6b3a2b 	bl	1be948c <CBufferList::$Init(unsigned char)>
        11abdc:	e1b05000 	movs	r5, r0
        11abe0:	1a000028 	bne	11ac88 <TMNP::OpenAlloc(void)+0x13c>
        11abe4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11abe8:	e2400fda 	sub	r0, r0, #872	; 0x368
        11abec:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11abf0:	e3a0100a 	mov	r1, #10	; 0xa
        11abf4:	e2811c01 	add	r1, r1, #256	; 0x100
        11abf8:	eb6b3a2a 	bl	1be94a8 <CBufferSegment::$Init(long)>
        11abfc:	e1b05000 	movs	r5, r0
        11ac00:	1a000020 	bne	11ac88 <TMNP::OpenAlloc(void)+0x13c>
        11ac04:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11ac08:	e2401fda 	sub	r1, r0, #872	; 0x368
        11ac0c:	e2811a01 	add	r1, r1, #4096	; 0x1000
        11ac10:	e2400fe2 	sub	r0, r0, #904	; 0x388
        11ac14:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11ac18:	eb6b3e39 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
        11ac1c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11ac20:	e2800d33 	add	r0, r0, #3264	; 0xcc0
        11ac24:	e3a01e82 	mov	r1, #2080	; 0x820
        11ac28:	eb6badbc 	bl	1c06320 <TCircleBuf::$Allocate(unsigned long)>
        11ac2c:	e1b05000 	movs	r5, r0
        11ac30:	1a000014 	bne	11ac88 <TMNP::OpenAlloc(void)+0x13c>
        11ac34:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11ac38:	e2800040 	add	r0, r0, #64	; 0x40
        11ac3c:	e3a01002 	mov	r1, #2	; 0x2
        11ac40:	e2811c03 	add	r1, r1, #768	; 0x300
        11ac44:	eb6badb5 	bl	1c06320 <TCircleBuf::$Allocate(unsigned long)>
        11ac48:	e1b05000 	movs	r5, r0
        11ac4c:	1a00000d 	bne	11ac88 <TMNP::OpenAlloc(void)+0x13c>
        11ac50:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11ac54:	e2800068 	add	r0, r0, #104	; 0x68
        11ac58:	e3a01f41 	mov	r1, #260	; 0x104
        11ac5c:	eb6badaf 	bl	1c06320 <TCircleBuf::$Allocate(unsigned long)>
        11ac60:	e1b05000 	movs	r5, r0
        11ac64:	1a000007 	bne	11ac88 <TMNP::OpenAlloc(void)+0x13c>
        11ac68:	e2841d16 	add	r1, r4, #1408	; 0x580
        11ac6c:	e9910003 	ldmib	r1, {r0, r1}
        11ac70:	e5a10cf0 	str	r0, [r1, #3312]!	; fField3312
        11ac74:	e5b40580 	ldr	r0, [r4, #1408]!	; fField1408
        11ac78:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
        11ac7c:	e5a10cec 	str	r0, [r1, #3308]!	; fField3308
        11ac80:	e3a00000 	mov	r0, #0	; 0x0
        11ac84:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        11ac88:	e1a00004 	mov	r0, r4
        11ac8c:	eb642da5 	bl	1a26328 <TMNP::$FreeCCB(void)>
        11ac90:	e1a00005 	mov	r0, r5
        11ac94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::ConnectStart(void)
 * Address: 0011ac98
 */
TMNP::ConnectStart(void) {
    /*
        11ac98:	e1a0c00d 	mov	ip, sp
        11ac9c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11aca0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11aca4:	e1a04000 	mov	r4, r0
        11aca8:	eb642981 	bl	1a252b4 <TMNP::$ConnectPreflight(void)>
        11acac:	e3300000 	teq	r0, #0	; 0x0
        11acb0:	11a01000 	movne	r1, r0
        11acb4:	11a00004 	movne	r0, r4
        11acb8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        11acbc:	1a6a98f3 	bne	1bc1090 <TCommTool::$StartAbort(long)>
        11acc0:	e1a00004 	mov	r0, r4
        11acc4:	eb6a94cd 	bl	1bc0000 <TCommTool::$HoldAbort(void)>
        11acc8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11accc:	e5901cf4 	ldr	r1, [r0, #3316]	; fField3316
        11acd0:	e5a01cfc 	str	r1, [r0, #3324]!
        11acd4:	e1a00004 	mov	r0, r4
        11acd8:	eb640850 	bl	1a1ce20 <TMNP::$XmitLR(void)>
        11acdc:	e1a00004 	mov	r0, r4
        11ace0:	e3a02001 	mov	r2, #1	; 0x1
        11ace4:	e3a01001 	mov	r1, #1	; 0x1
        11ace8:	eb63fbf9 	bl	1a19cd4 <TMNP::$SetTimer(unsigned long, unsigned long)>
        11acec:	e1a00004 	mov	r0, r4
        11acf0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        11acf4:	ea6a8859 	b	1bbce60 <TCommTool::$AllowAbort(void)>
    */
}

/**
 * Symbol: TMNP::ListenStart(void)
 * Address: 0011acf8
 */
TMNP::ListenStart(void) {
    /*
        11acf8:	e1a0c00d 	mov	ip, sp
        11acfc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11ad00:	e24cb004 	sub	fp, ip, #4	; 0x4
        11ad04:	e1a04000 	mov	r4, r0
        11ad08:	eb642969 	bl	1a252b4 <TMNP::$ConnectPreflight(void)>
        11ad0c:	e3300000 	teq	r0, #0	; 0x0
        11ad10:	11a01000 	movne	r1, r0
        11ad14:	11a00004 	movne	r0, r4
        11ad18:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        11ad1c:	1a6a98db 	bne	1bc1090 <TCommTool::$StartAbort(long)>
        11ad20:	e1a00004 	mov	r0, r4
        11ad24:	eb6a94b5 	bl	1bc0000 <TCommTool::$HoldAbort(void)>
        11ad28:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11ad2c:	e5901000 	ldr	r1, [r0]
        11ad30:	e3811002 	orr	r1, r1, #2	; 0x2
        11ad34:	e5801000 	str	r1, [r0]
        11ad38:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11ad3c:	e5901cf0 	ldr	r1, [r0, #3312]	; fField3312
        11ad40:	e5a01d0c 	str	r1, [r0, #3340]!	; fField3340
        11ad44:	e1a00004 	mov	r0, r4
        11ad48:	e3a02001 	mov	r2, #1	; 0x1
        11ad4c:	e3a01001 	mov	r1, #1	; 0x1
        11ad50:	eb63fbdf 	bl	1a19cd4 <TMNP::$SetTimer(unsigned long, unsigned long)>
        11ad54:	e1a00004 	mov	r0, r4
        11ad58:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        11ad5c:	ea6a883f 	b	1bbce60 <TCommTool::$AllowAbort(void)>
    */
}

/**
 * Symbol: TMNP::ConnectPreflight(void)
 * Address: 0011ad60
 */
TMNP::ConnectPreflight(void) {
    /*
        11ad60:	e1a0c00d 	mov	ip, sp
        11ad64:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11ad68:	e24cb004 	sub	fp, ip, #4	; 0x4
        11ad6c:	e1a04000 	mov	r4, r0
        11ad70:	e24dd014 	sub	sp, sp, #20	; 0x14
        11ad74:	e1a0000d 	mov	r0, sp
        11ad78:	eb6a8414 	bl	1bbbdd0 <TCMOFramingParms::$__ct(void)>
        11ad7c:	e1a00004 	mov	r0, r4
        11ad80:	e5941000 	ldr	r1, [r4]
        11ad84:	e1a0e00f 	mov	lr, pc
        11ad88:	e281fe15 	add	pc, r1, #336	; 0x150
        11ad8c:	e1b05000 	movs	r5, r0
        11ad90:	1a00001c 	bne	11ae08 <TMNP::ConnectPreflight(void)+0xa8>
        11ad94:	e1a00004 	mov	r0, r4
        11ad98:	eb63eb41 	bl	1a15aa4 <TMNP::$OpenAlloc(void)>
        11ad9c:	e1b05000 	movs	r5, r0
        11ada0:	1a000018 	bne	11ae08 <TMNP::ConnectPreflight(void)+0xa8>
        11ada4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        11ada8:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
        11adac:	e5840018 	str	r0, [r4, #24]	; fField24
        11adb0:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11adb4:	e2401fbb 	sub	r1, r0, #748	; 0x2ec
        11adb8:	e2811a01 	add	r1, r1, #4096	; 0x1000
        11adbc:	e1a00004 	mov	r0, r4
        11adc0:	eb63dab9 	bl	1a118ac <TFramedAsyncSerTool::$GetFramingCtl(TCMOFramingParms *)>
        11adc4:	e3a00001 	mov	r0, #1	; 0x1
        11adc8:	e5cd000e 	strb	r0, [sp, #14]
        11adcc:	e5cd000f 	strb	r0, [sp, #15]
        11add0:	e5cd0010 	strb	r0, [sp, #16]
        11add4:	e3a00010 	mov	r0, #16	; 0x10
        11add8:	e5cd000c 	strb	r0, [sp, #12]	; fField12
        11addc:	e3a00003 	mov	r0, #3	; 0x3
        11ade0:	e5cd000d 	strb	r0, [sp, #13]
        11ade4:	e1a0100d 	mov	r1, sp
        11ade8:	e1a00004 	mov	r0, r4
        11adec:	eb63fbac 	bl	1a19ca4 <TFramedAsyncSerTool::$SetFramingCtl(TCMOFramingParms *)>
        11adf0:	e1a00004 	mov	r0, r4
        11adf4:	eb63e2e9 	bl	1a139a0 <TMNP::$InitConnectParms(void)>
        11adf8:	e1a00004 	mov	r0, r4
        11adfc:	eb63f789 	bl	1a18c28 <TMNP::$ResetLink(void)>
        11ae00:	e1a00004 	mov	r0, r4
        11ae04:	eb63f36b 	bl	1a17bb8 <TMNP::$RcvInit(void)>
        11ae08:	e1a00005 	mov	r0, r5
        11ae0c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::AcceptStart(void)
 * Address: 0011af38
 */
TMNP::AcceptStart(void) {
    /*
        11af38:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11af3c:	e5912cf4 	ldr	r2, [r1, #3316]	; fField3316
        11af40:	e5a12cfc 	str	r2, [r1, #3324]!
        11af44:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11af48:	e5912000 	ldr	r2, [r1]
        11af4c:	e3822001 	orr	r2, r2, #1	; 0x1
        11af50:	e5812000 	str	r2, [r1]
        11af54:	ea6407b1 	b	1a1ce20 <TMNP::$XmitLR(void)>
    */
}

/**
 * Symbol: TMNP::Disconnect(void)
 * Address: 0011af58
 */
TMNP::Disconnect(void) {
    /*
        11af58:	e5901018 	ldr	r1, [r0, #24]	; fField24
        11af5c:	e3110004 	tst	r1, #4	; 0x4
        11af60:	1a000008 	bne	11af88 <TMNP::Disconnect(void)+0x30>
        11af64:	e3110003 	tst	r1, #3	; 0x3
        11af68:	15901588 	ldrne	r1, [r0, #1416]	; fField1416
        11af6c:	13310000 	teqne	r1, #0	; 0x0
        11af70:	0a000004 	beq	11af88 <TMNP::Disconnect(void)+0x30>
        11af74:	e3a02000 	mov	r2, #0	; 0x0
        11af78:	e5c12099 	strb	r2, [r1, #153]
        11af7c:	e3a020ff 	mov	r2, #255	; 0xff
        11af80:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11af84:	e5c12098 	strb	r2, [r1, #152]
        11af88:	ea6a940c 	b	1bbffc0 <TCommTool::$Disconnect(void)>
    */
}

/**
 * Symbol: TMNP::ReleaseStart(void)
 * Address: 0011af8c
 */
TMNP::ReleaseStart(void) {
    /*
        11af8c:	e5d010ac 	ldrb	r1, [r0, #172]	; fField172
        11af90:	e3310000 	teq	r1, #0	; 0x0
        11af94:	05901588 	ldreq	r1, [r0, #1416]	; fField1416
        11af98:	059120b4 	ldreq	r2, [r1, #180]
        11af9c:	03320000 	teqeq	r2, #0	; 0x0
        11afa0:	11a0f00e 	movne	pc, lr
        11afa4:	e59110a4 	ldr	r1, [r1, #164]
        11afa8:	e5d11011 	ldrb	r1, [r1, #17]	; fField17
        11afac:	e3310000 	teq	r1, #0	; 0x0
        11afb0:	13310004 	teqne	r1, #4	; 0x4
        11afb4:	059f1004 	ldreq	r1, [pc, #4]	; 11afc0 <TMNP::ReleaseStart(void)+0x34>	; fField4
        11afb8:	0a6a9834 	beq	1bc1090 <TCommTool::$StartAbort(long)>
        11afbc:	e1a0f00e 	mov	pc, lr
        11afc0:	ffffc173 	swinv	0x00ffc173
    */
}

/**
 * Symbol: TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 0011afc4
 */
TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        11afc4:	e1a0c00d 	mov	ip, sp
        11afc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11afcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        11afd0:	e1a04001 	mov	r4, r1
        11afd4:	e3a05000 	mov	r5, #0	; 0x0
        11afd8:	e59fc068 	ldr	ip, [pc, #68]	; 11b048 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x84>	; fField68
        11afdc:	e152000c 	cmp	r2, ip
        11afe0:	0a000042 	beq	11b0f0 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x12c>
        11afe4:	e3a01000 	mov	r1, #0	; 0x0
        11afe8:	ca00002f 	bgt	11b0ac <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xe8>
        11afec:	e59fc058 	ldr	ip, [pc, #58]	; 11b04c <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x88>
        11aff0:	e152000c 	cmp	r2, ip
        11aff4:	0a00004c 	beq	11b12c <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x168>
        11aff8:	ca000016 	bgt	11b058 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x94>
        11affc:	e59fc04c 	ldr	ip, [pc, #4c]	; 11b050 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x8c>	; fField4
        11b000:	e132000c 	teq	r2, ip
        11b004:	0a000073 	beq	11b1d8 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x214>
        11b008:	e59fc044 	ldr	ip, [pc, #44]	; 11b054 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x90>
        11b00c:	e132000c 	teq	r2, ip
        11b010:	1a0000d0 	bne	11b358 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x394>
        11b014:	e3330c01 	teq	r3, #256	; 0x100
        11b018:	13330c02 	teqne	r3, #512	; 0x200
        11b01c:	1a00007e 	bne	11b21c <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x258>
        11b020:	e5b4200c 	ldr	r2, [r4, #12]!	; fField12
        11b024:	e5802584 	str	r2, [r0, #1412]	; fField1412
        11b028:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11b02c:	e3310000 	teq	r1, #0	; 0x0
        11b030:	15a12cf0 	strne	r2, [r1, #3312]!	; fField3312
        11b034:	15900588 	ldrne	r0, [r0, #1416]	; fField1416
        11b038:	15901d0c 	ldrne	r1, [r0, #3340]	; fField3340
        11b03c:	13310000 	teqne	r1, #0	; 0x0
        11b040:	15a02d0c 	strne	r2, [r0, #3340]!	; fField3340
        11b044:	ea0000c6 	b	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b048:	6d6e7063 	stcvsl	0, cr7, [lr, -#396]!
        11b04c:	65746572 	ldrvsb	r6, [r4, -#1394]!
        11b050:	63697472 	cmnvs	r9, #1912602624	; 0x72000000
        11b054:	636c7472 	cmnvs	ip, #1912602624	; 0x72000000
        11b058:	e59fc044 	ldr	ip, [pc, #44]	; 11b0a4 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xe0>
        11b05c:	e132000c 	teq	r2, ip
        11b060:	0a000082 	beq	11b270 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2ac>
        11b064:	e59fc03c 	ldr	ip, [pc, #3c]	; 11b0a8 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xe4>
        11b068:	e132000c 	teq	r2, ip
        11b06c:	1a0000b9 	bne	11b358 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x394>
        11b070:	e3330c01 	teq	r3, #256	; 0x100
        11b074:	13330c02 	teqne	r3, #512	; 0x200
        11b078:	05d4100c 	ldreqb	r1, [r4, #12]	; fField12
        11b07c:	05c0158c 	streqb	r1, [r0, #1420]	; fField1420
        11b080:	0a0000b7 	beq	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b084:	e3330c03 	teq	r3, #768	; 0x300
        11b088:	15d0058c 	ldrneb	r0, [r0, #1420]	; fField1420
        11b08c:	1a00009d 	bne	11b308 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x344>
        11b090:	e24dd010 	sub	sp, sp, #16	; 0x10
        11b094:	e1a0000d 	mov	r0, sp
        11b098:	eb6a8340 	bl	1bbbda0 <TCMOMNPAllocate::$__ct(void)>
        11b09c:	e1a0100d 	mov	r1, sp
        11b0a0:	ea0000a5 	b	11b33c <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x378>
        11b0a4:	6d646374 	stcvsl	3, cr6, [r4, -#464]!
        11b0a8:	6d6e7061 	stcvsl	0, cr7, [lr, -#388]!	; fField388
        11b0ac:	e59fc02c 	ldr	ip, [pc, #2c]	; 11b0e0 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x11c>
        11b0b0:	e132000c 	teq	r2, ip
        11b0b4:	0a000095 	beq	11b310 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x34c>
        11b0b8:	e59fc024 	ldr	ip, [pc, #24]	; 11b0e4 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x120>	; fField24
        11b0bc:	e132000c 	teq	r2, ip
        11b0c0:	0a000022 	beq	11b150 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x18c>
        11b0c4:	e59fc01c 	ldr	ip, [pc, #1c]	; 11b0e8 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x124>
        11b0c8:	e132000c 	teq	r2, ip
        11b0cc:	0a00005a 	beq	11b23c <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x278>
        11b0d0:	e59fc014 	ldr	ip, [pc, #14]	; 11b0ec <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x128>
        11b0d4:	e132000c 	teq	r2, ip
        11b0d8:	1a00009e 	bne	11b358 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x394>
        11b0dc:	ea00006b 	b	11b290 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2cc>
        11b0e0:	6d6e706e 	stcvsl	0, cr7, [lr, -#440]!
        11b0e4:	6d6e7073 	stcvsl	0, cr7, [lr, -#460]!
        11b0e8:	73626176 	cmnvc	r2, #-2147483619	; 0x8000001d
        11b0ec:	73647363 	cmnvc	r4, #-1946157055	; 0x8c000001
        11b0f0:	e2800f53 	add	r0, r0, #332	; 0x14c
        11b0f4:	e2800b01 	add	r0, r0, #1024	; 0x400
        11b0f8:	e3330c01 	teq	r3, #256	; 0x100
        11b0fc:	13330c02 	teqne	r3, #512	; 0x200
        11b100:	1a000001 	bne	11b10c <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x148>
        11b104:	e1a01004 	mov	r1, r4
        11b108:	ea000030 	b	11b1d0 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x20c>
        11b10c:	e3330c03 	teq	r3, #768	; 0x300
        11b110:	11a01000 	movne	r1, r0
        11b114:	1a00002c 	bne	11b1cc <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x208>
        11b118:	e24dd010 	sub	sp, sp, #16	; 0x10
        11b11c:	e1a0000d 	mov	r0, sp
        11b120:	eb6a8738 	bl	1bbce08 <TCMOMNPCompression::$__ct(void)>
        11b124:	e1a0100d 	mov	r1, sp
        11b128:	ea000083 	b	11b33c <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x378>
        11b12c:	e3330c01 	teq	r3, #256	; 0x100
        11b130:	13330c02 	teqne	r3, #512	; 0x200
        11b134:	05b4100c 	ldreq	r1, [r4, #12]!	; fField12
        11b138:	05a0155c 	streq	r1, [r0, #1372]!	; fField1372
        11b13c:	0a000088 	beq	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b140:	e3330c03 	teq	r3, #768	; 0x300
        11b144:	1590055c 	ldrne	r0, [r0, #1372]	; fField1372
        11b148:	03a00e96 	moveq	r0, #2400	; 0x960
        11b14c:	ea00007f 	b	11b350 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x38c>
        11b150:	e3330c01 	teq	r3, #256	; 0x100
        11b154:	13330c02 	teqne	r3, #512	; 0x200
        11b158:	1a00000c 	bne	11b190 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1cc>
        11b15c:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11b160:	e3300000 	teq	r0, #0	; 0x0
        11b164:	0a000049 	beq	11b290 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2cc>
        11b168:	e2400fb6 	sub	r0, r0, #728	; 0x2d8
        11b16c:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11b170:	e3a0c006 	mov	ip, #6	; 0x6
        11b174:	e8b4000e 	ldmia	r4!, {r1, r2, r3}
        11b178:	e8a0000e 	stmia	r0!, {r1, r2, r3}
        11b17c:	e25cc001 	subs	ip, ip, #1	; 0x1
        11b180:	1afffffb 	bne	11b174 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1b0>
        11b184:	e8940008 	ldmia	r4, {r3}
        11b188:	e8800008 	stmia	r0, {r3}
        11b18c:	ea000074 	b	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b190:	e3330c03 	teq	r3, #768	; 0x300
        11b194:	1a000007 	bne	11b1b8 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1f4>
        11b198:	e24dd04c 	sub	sp, sp, #76	; 0x4c
        11b19c:	e1a0000d 	mov	r0, sp
        11b1a0:	eb6a830e 	bl	1bbbde0 <TCMOMNPStatistics::$__ct(void)>
        11b1a4:	e1a0100d 	mov	r1, sp
        11b1a8:	e1a00004 	mov	r0, r4
        11b1ac:	eb6a7287 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        11b1b0:	e28dd04c 	add	sp, sp, #76	; 0x4c
        11b1b4:	ea00006a 	b	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b1b8:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11b1bc:	e3300000 	teq	r0, #0	; 0x0
        11b1c0:	0a000032 	beq	11b290 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2cc>
        11b1c4:	e2401fb6 	sub	r1, r0, #728	; 0x2d8
        11b1c8:	e2811a01 	add	r1, r1, #4096	; 0x1000
        11b1cc:	e1a00004 	mov	r0, r4
        11b1d0:	eb6a727e 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        11b1d4:	ea000062 	b	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b1d8:	e3330c01 	teq	r3, #256	; 0x100
        11b1dc:	13330c02 	teqne	r3, #512	; 0x200
        11b1e0:	1a000005 	bne	11b1fc <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x238>
        11b1e4:	e5b4100c 	ldr	r1, [r4, #12]!	; fField12
        11b1e8:	e5801580 	str	r1, [r0, #1408]	; fField1408
        11b1ec:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11b1f0:	e3300000 	teq	r0, #0	; 0x0
        11b1f4:	15a01cec 	strne	r1, [r0, #3308]!	; fField3308
        11b1f8:	ea000059 	b	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b1fc:	e3330c03 	teq	r3, #768	; 0x300
        11b200:	15900580 	ldrne	r0, [r0, #1408]	; fField1408
        11b204:	1a000051 	bne	11b350 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x38c>
        11b208:	e24dd010 	sub	sp, sp, #16	; 0x10
        11b20c:	e1a0000d 	mov	r0, sp
        11b210:	eb6a82dc 	bl	1bbbd88 <TCMOIdleTimer::$__ct(void)>
        11b214:	e1a0100d 	mov	r1, sp
        11b218:	ea000047 	b	11b33c <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x378>
        11b21c:	e3330c03 	teq	r3, #768	; 0x300
        11b220:	15900584 	ldrne	r0, [r0, #1412]	; fField1412
        11b224:	1a000049 	bne	11b350 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x38c>
        11b228:	e24dd010 	sub	sp, sp, #16	; 0x10
        11b22c:	e1a0000d 	mov	r0, sp
        11b230:	eb6a82d9 	bl	1bbbd9c <TCMOListenTimer::$__ct(void)>
        11b234:	e1a0100d 	mov	r1, sp
        11b238:	ea00003f 	b	11b33c <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x378>
        11b23c:	e3330c01 	teq	r3, #256	; 0x100
        11b240:	13330c02 	teqne	r3, #512	; 0x200
        11b244:	03e05002 	mvneq	r5, #2	; 0x2
        11b248:	0a000045 	beq	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b24c:	e5902018 	ldr	r2, [r0, #24]	; fField24
        11b250:	e3120002 	tst	r2, #2	; 0x2
        11b254:	15900588 	ldrne	r0, [r0, #1416]	; fField1416
        11b258:	13300000 	teqne	r0, #0	; 0x0
        11b25c:	05a4100c 	streq	r1, [r4, #12]!	; fField12
        11b260:	0a00003f 	beq	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b264:	e2800d33 	add	r0, r0, #3264	; 0xcc0
        11b268:	eb6bac2f 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
        11b26c:	ea000037 	b	11b350 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x38c>
        11b270:	e3330c01 	teq	r3, #256	; 0x100
        11b274:	13330c02 	teqne	r3, #512	; 0x200
        11b278:	1a000006 	bne	11b298 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2d4>
        11b27c:	e5901018 	ldr	r1, [r0, #24]	; fField24
        11b280:	e3110002 	tst	r1, #2	; 0x2
        11b284:	02800f5b 	addeq	r0, r0, #364	; 0x16c
        11b288:	02800b01 	addeq	r0, r0, #1024	; 0x400
        11b28c:	0affff9c 	beq	11b104 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
        11b290:	e3e05000 	mvn	r5, #0	; 0x0
        11b294:	ea000032 	b	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b298:	e3330c03 	teq	r3, #768	; 0x300
        11b29c:	1a000007 	bne	11b2c0 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2fc>
        11b2a0:	e24dd014 	sub	sp, sp, #20	; 0x14
        11b2a4:	e1a0000d 	mov	r0, sp
        11b2a8:	eb6ba3f2 	bl	1c04278 <TCMOMNPDebugConnect::$__ct(void)>
        11b2ac:	e1a0100d 	mov	r1, sp
        11b2b0:	e1a00004 	mov	r0, r4
        11b2b4:	eb6a7245 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        11b2b8:	e28dd014 	add	sp, sp, #20	; 0x14
        11b2bc:	ea000028 	b	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b2c0:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11b2c4:	e5d1109a 	ldrb	r1, [r1, #154]	; fField154
        11b2c8:	e5c4100f 	strb	r1, [r4, #15]
        11b2cc:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11b2d0:	e5d1109b 	ldrb	r1, [r1, #155]
        11b2d4:	e5c4100d 	strb	r1, [r4, #13]
        11b2d8:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11b2dc:	e591109c 	ldr	r1, [r1, #156]
        11b2e0:	e5841010 	str	r1, [r4, #16]
        11b2e4:	e5901588 	ldr	r1, [r0, #1416]	; fField1416
        11b2e8:	e5911004 	ldr	r1, [r1, #4]	; fField4
        11b2ec:	e2111004 	ands	r1, r1, #4	; 0x4
        11b2f0:	13a01001 	movne	r1, #1	; 0x1
        11b2f4:	e5c4100e 	strb	r1, [r4, #14]
        11b2f8:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11b2fc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        11b300:	e2100002 	ands	r0, r0, #2	; 0x2
        11b304:	13a00001 	movne	r0, #1	; 0x1
        11b308:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        11b30c:	ea000014 	b	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b310:	e3330c01 	teq	r3, #256	; 0x100
        11b314:	13330c02 	teqne	r3, #512	; 0x200
        11b318:	05b4100c 	ldreq	r1, [r4, #12]!	; fField12
        11b31c:	05a01564 	streq	r1, [r0, #1380]!	; fField1380
        11b320:	0a00000f 	beq	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b324:	e3330c03 	teq	r3, #768	; 0x300
        11b328:	1a000007 	bne	11b34c <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x388>
        11b32c:	e24dd010 	sub	sp, sp, #16	; 0x10
        11b330:	e1a0000d 	mov	r0, sp
        11b334:	eb6ba7d7 	bl	1c05298 <TCMOMNPSpeedNegotiation::$__ct(void)>
        11b338:	e1a0100d 	mov	r1, sp
        11b33c:	e1a00004 	mov	r0, r4
        11b340:	eb6a7222 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        11b344:	e28dd010 	add	sp, sp, #16	; 0x10
        11b348:	ea000005 	b	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b34c:	e5900564 	ldr	r0, [r0, #1380]	; fField1380
        11b350:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        11b354:	ea000002 	b	11b364 <TMNP::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        11b358:	e1a01004 	mov	r1, r4
        11b35c:	eb64133e 	bl	1a2005c <TFramedAsyncSerTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
        11b360:	e1a05000 	mov	r5, r0
        11b364:	e1a00005 	mov	r0, r5
        11b368:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::SetTimer(unsigned long, unsigned long)
 * Address: 0011b36c
 */
TMNP::SetTimer(unsigned long, unsigned long) {
    /*
        11b36c:	e1a0c00d 	mov	ip, sp
        11b370:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11b374:	e24cb004 	sub	fp, ip, #4	; 0x4
        11b378:	e1a04000 	mov	r4, r0
        11b37c:	e24dd010 	sub	sp, sp, #16	; 0x10
        11b380:	e5802590 	str	r2, [r0, #1424]
        11b384:	e2805f69 	add	r5, r0, #420	; 0x1a4
        11b388:	e2855b01 	add	r5, r5, #1024	; 0x400
        11b38c:	e1a06005 	mov	r6, r5
        11b390:	e28d0008 	add	r0, sp, #8	; 0x8
        11b394:	e3a029e1 	mov	r2, #3686400	; 0x384000
        11b398:	eb6ac8ca 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
        11b39c:	e1a0000d 	mov	r0, sp
        11b3a0:	eb6ae18c 	bl	1bd39d8 <$GetGlobalTime>
        11b3a4:	e24dd008 	sub	sp, sp, #8	; 0x8
        11b3a8:	e28d0008 	add	r0, sp, #8	; 0x8
        11b3ac:	e8905000 	ldmia	r0, {ip, lr}
        11b3b0:	e88d5000 	stmia	sp, {ip, lr}
        11b3b4:	e1a0100d 	mov	r1, sp
        11b3b8:	e28d0010 	add	r0, sp, #16	; 0x10
        11b3bc:	eb6b1730 	bl	1be1084 <$CompAdd>
        11b3c0:	e1b00006 	movs	r0, r6
        11b3c4:	1a000003 	bne	11b3d8 <TMNP::SetTimer(unsigned long, unsigned long)+0x6c>
        11b3c8:	e3a00008 	mov	r0, #8	; 0x8
        11b3cc:	eb6accd9 	bl	1bce738 <$__nw(unsigned int)>
        11b3d0:	e3300000 	teq	r0, #0	; 0x0
        11b3d4:	0a000001 	beq	11b3e0 <TMNP::SetTimer(unsigned long, unsigned long)+0x74>
        11b3d8:	e89d1008 	ldmia	sp, {r3, ip}
        11b3dc:	e8801008 	stmia	r0, {r3, ip}
        11b3e0:	e28dd008 	add	sp, sp, #8	; 0x8
        11b3e4:	e284c08c 	add	ip, r4, #140	; 0x8c
        11b3e8:	e284ef65 	add	lr, r4, #404	; 0x194
        11b3ec:	e28eeb01 	add	lr, lr, #1024	; 0x400
        11b3f0:	e2846e59 	add	r6, r4, #1424	; 0x590
        11b3f4:	e3a02000 	mov	r2, #0	; 0x0
        11b3f8:	e1a03005 	mov	r3, r5
        11b3fc:	e3a05000 	mov	r5, #0	; 0x0
        11b400:	e3a01000 	mov	r1, #0	; 0x0
        11b404:	e3a00001 	mov	r0, #1	; 0x1
        11b408:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        11b40c:	e1a03005 	mov	r3, r5
        11b410:	e3a02004 	mov	r2, #4	; 0x4
        11b414:	e92d000c 	stmdb	sp!, {r2, r3}
        11b418:	e1a03006 	mov	r3, r6
        11b41c:	e1a0000c 	mov	r0, ip
        11b420:	e3a02000 	mov	r2, #0	; 0x0
        11b424:	e59e1000 	ldr	r1, [lr]
        11b428:	eb6afe46 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        11b42c:	e28dd018 	add	sp, sp, #24	; 0x18
        11b430:	e1b01000 	movs	r1, r0
        11b434:	0a000006 	beq	11b454 <TMNP::SetTimer(unsigned long, unsigned long)+0xe8>
        11b438:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b43c:	e5902000 	ldr	r2, [r0]
        11b440:	e3822102 	orr	r2, r2, #-2147483648	; 0x80000000
        11b444:	e5802000 	str	r2, [r0]
        11b448:	e1a00004 	mov	r0, r4
        11b44c:	eb6a970f 	bl	1bc1090 <TCommTool::$StartAbort(long)>
        11b450:	ea000002 	b	11b460 <TMNP::SetTimer(unsigned long, unsigned long)+0xf4>
        11b454:	e5940018 	ldr	r0, [r4, #24]	; fField24
        11b458:	e3800301 	orr	r0, r0, #67108864	; 0x4000000
        11b45c:	e5a40018 	str	r0, [r4, #24]!	; fField24
        11b460:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::SetXmitAbortTimer(void)
 * Address: 0011b464
 */
TMNP::SetXmitAbortTimer(void) {
    /*
        11b464:	e1a0c00d 	mov	ip, sp
        11b468:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11b46c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11b470:	e1a04000 	mov	r4, r0
        11b474:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11b478:	e5b01cf4 	ldr	r1, [r0, #3316]!	; fField3316
        11b47c:	e1a00004 	mov	r0, r4
        11b480:	e3a02002 	mov	r2, #2	; 0x2
        11b484:	eb63fa12 	bl	1a19cd4 <TMNP::$SetTimer(unsigned long, unsigned long)>
        11b488:	e5940018 	ldr	r0, [r4, #24]	; fField24
        11b48c:	e3800201 	orr	r0, r0, #268435456	; 0x10000000
        11b490:	e5a40018 	str	r0, [r4, #24]!	; fField24
        11b494:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::HandleXmitAbortTimer(void)
 * Address: 0011b498
 */
TMNP::HandleXmitAbortTimer(void) {
    /*
        11b498:	e1a0c00d 	mov	ip, sp
        11b49c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11b4a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11b4a4:	e1a04000 	mov	r4, r0
        11b4a8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        11b4ac:	e3c00201 	bic	r0, r0, #268435456	; 0x10000000
        11b4b0:	e5840018 	str	r0, [r4, #24]	; fField24
        11b4b4:	e1a00004 	mov	r0, r4
        11b4b8:	eb63e55a 	bl	1a14a28 <TMNP::$KillWrite(void)>
        11b4bc:	e1a00004 	mov	r0, r4
        11b4c0:	e5941000 	ldr	r1, [r4]
        11b4c4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        11b4c8:	e281ff46 	add	pc, r1, #280	; 0x118
    */
}

/**
 * Symbol: TMNP::HandleTickTimer(void)
 * Address: 0011b4cc
 */
TMNP::HandleTickTimer(void) {
    /*
        11b4cc:	e1a0c00d 	mov	ip, sp
        11b4d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11b4d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11b4d8:	e1a04000 	mov	r4, r0
        11b4dc:	e3a02000 	mov	r2, #0	; 0x0
        11b4e0:	e3a01301 	mov	r1, #67108864	; 0x4000000
        11b4e4:	eb6a96e8 	bl	1bc108c <TCommTool::$ShouldAbort(unsigned long, long)>
        11b4e8:	e3300000 	teq	r0, #0	; 0x0
        11b4ec:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        11b4f0:	e1a00004 	mov	r0, r4
        11b4f4:	eb6a92c1 	bl	1bc0000 <TCommTool::$HoldAbort(void)>
        11b4f8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b4fc:	e5901cfc 	ldr	r1, [r0, #3324]
        11b500:	e3510000 	cmp	r1, #0	; 0x0
        11b504:	9a000007 	bls	11b528 <TMNP::HandleTickTimer(void)+0x5c>
        11b508:	e5b01cfc 	ldr	r1, [r0, #3324]!
        11b50c:	e2411001 	sub	r1, r1, #1	; 0x1
        11b510:	e5801000 	str	r1, [r0]
        11b514:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b518:	e5900cfc 	ldr	r0, [r0, #3324]
        11b51c:	e3300000 	teq	r0, #0	; 0x0
        11b520:	01a00004 	moveq	r0, r4
        11b524:	0b63f5c4 	bleq	1a18c3c <TMNP::$RetransTimeOut(void)>
        11b528:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b52c:	e5901d00 	ldr	r1, [r0, #3328]
        11b530:	e3510000 	cmp	r1, #0	; 0x0
        11b534:	9a000007 	bls	11b558 <TMNP::HandleTickTimer(void)+0x8c>
        11b538:	e5b01d00 	ldr	r1, [r0, #3328]!
        11b53c:	e2411001 	sub	r1, r1, #1	; 0x1
        11b540:	e5801000 	str	r1, [r0]
        11b544:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b548:	e5900d00 	ldr	r0, [r0, #3328]
        11b54c:	e3300000 	teq	r0, #0	; 0x0
        11b550:	01a00004 	moveq	r0, r4
        11b554:	0b63bbff 	bleq	1a0a558 <TMNP::$AckTimeOut(void)>
        11b558:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b55c:	e5901d04 	ldr	r1, [r0, #3332]	; fField3332
        11b560:	e3510000 	cmp	r1, #0	; 0x0
        11b564:	9a000007 	bls	11b588 <TMNP::HandleTickTimer(void)+0xbc>
        11b568:	e5b01d04 	ldr	r1, [r0, #3332]!	; fField3332
        11b56c:	e2411001 	sub	r1, r1, #1	; 0x1
        11b570:	e5801000 	str	r1, [r0]
        11b574:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b578:	e5900d04 	ldr	r0, [r0, #3332]	; fField3332
        11b57c:	e3300000 	teq	r0, #0	; 0x0
        11b580:	01a00004 	moveq	r0, r4
        11b584:	0b64021c 	bleq	1a1bdfc <TMNP::$WindowTimeOut(void)>
        11b588:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b58c:	e5901d08 	ldr	r1, [r0, #3336]
        11b590:	e3510000 	cmp	r1, #0	; 0x0
        11b594:	9a000007 	bls	11b5b8 <TMNP::HandleTickTimer(void)+0xec>
        11b598:	e5b01d08 	ldr	r1, [r0, #3336]!
        11b59c:	e2411001 	sub	r1, r1, #1	; 0x1
        11b5a0:	e5801000 	str	r1, [r0]
        11b5a4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b5a8:	e5900d08 	ldr	r0, [r0, #3336]
        11b5ac:	e3300000 	teq	r0, #0	; 0x0
        11b5b0:	01a00004 	moveq	r0, r4
        11b5b4:	0b63e0f2 	bleq	1a13984 <TMNP::$InactiveTimeOut(void)>
        11b5b8:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b5bc:	e5901d0c 	ldr	r1, [r0, #3340]	; fField3340
        11b5c0:	e3510000 	cmp	r1, #0	; 0x0
        11b5c4:	9a000007 	bls	11b5e8 <TMNP::HandleTickTimer(void)+0x11c>
        11b5c8:	e5b01d0c 	ldr	r1, [r0, #3340]!	; fField3340
        11b5cc:	e2411001 	sub	r1, r1, #1	; 0x1
        11b5d0:	e5801000 	str	r1, [r0]
        11b5d4:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b5d8:	e5900d0c 	ldr	r0, [r0, #3340]	; fField3340
        11b5dc:	e3300000 	teq	r0, #0	; 0x0
        11b5e0:	01a00004 	moveq	r0, r4
        11b5e4:	0b63bbd7 	bleq	1a0a548 <TMNP::$AcceptorTimeOut(void)>
        11b5e8:	e1a00004 	mov	r0, r4
        11b5ec:	e3a02001 	mov	r2, #1	; 0x1
        11b5f0:	e3a01001 	mov	r1, #1	; 0x1
        11b5f4:	eb63f9b6 	bl	1a19cd4 <TMNP::$SetTimer(unsigned long, unsigned long)>
        11b5f8:	e1a00004 	mov	r0, r4
        11b5fc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        11b600:	ea6a8616 	b	1bbce60 <TCommTool::$AllowAbort(void)>
    */
}

/**
 * Symbol: TMNP::DoCompressFile(void)
 * Address: 0011b604
 */
TMNP::DoCompressFile(void) {
    /*
        11b604:	e3a02000 	mov	r2, #0	; 0x0
        11b608:	e3a01002 	mov	r1, #2	; 0x2
        11b60c:	ea6a8617 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TMNP::__ct(unsigned long)
 * Address: 0011b610
 */
TMNP::TMNP(unsigned long) {
    /*
        11b610:	e1a0c00d 	mov	ip, sp
        11b614:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11b618:	e24cb004 	sub	fp, ip, #4	; 0x4
        11b61c:	e1b04000 	movs	r4, r0
        11b620:	e1a05001 	mov	r5, r1
        11b624:	1a000003 	bne	11b638 <TMNP::__ct(unsigned long)+0x28>
        11b628:	e3a00e5b 	mov	r0, #1456	; 0x5b0
        11b62c:	eb6acc41 	bl	1bce738 <$__nw(unsigned int)>
        11b630:	e1b04000 	movs	r4, r0
        11b634:	0a00000d 	beq	11b670 <TMNP::__ct(unsigned long)+0x60>
        11b638:	e1a01005 	mov	r1, r5
        11b63c:	e1a00004 	mov	r0, r4
        11b640:	eb63b7a8 	bl	1a094e8 <TFramedAsyncSerTool::$__ct(unsigned long)>
        11b644:	e2840f53 	add	r0, r4, #332	; 0x14c
        11b648:	e2800b01 	add	r0, r0, #1024	; 0x400
        11b64c:	eb6a85ed 	bl	1bbce08 <TCMOMNPCompression::$__ct(void)>
        11b650:	e2840f5b 	add	r0, r4, #364	; 0x16c
        11b654:	e2800b01 	add	r0, r0, #1024	; 0x400
        11b658:	eb6ba306 	bl	1c04278 <TCMOMNPDebugConnect::$__ct(void)>
        11b65c:	e2840f65 	add	r0, r4, #404	; 0x194
        11b660:	e2800b01 	add	r0, r0, #1024	; 0x400
        11b664:	eb6ac810 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        11b668:	e59f0008 	ldr	r0, [pc, #8]	; 11b678 <TMNP::__ct(unsigned long)+0x68>	; fField8
        11b66c:	e5840000 	str	r0, [r4]
        11b670:	e1a00004 	mov	r0, r4
        11b674:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        11b678:	0001f418 	andeq	pc, r1, r8, lsl r4
    */
}

/**
 * Symbol: TMNP::__dt(void)
 * Address: 0011b67c
 */
TMNP::~TMNP(void) {
    /*
        11b67c:	e1a0c00d 	mov	ip, sp
        11b680:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11b684:	e24cb004 	sub	fp, ip, #4	; 0x4
        11b688:	e1a04000 	mov	r4, r0
        11b68c:	e1a05001 	mov	r5, r1
        11b690:	e59f0030 	ldr	r0, [pc, #30]	; 11b6c8 <TMNP::__dt(void)+0x4c>
        11b694:	e5840000 	str	r0, [r4]
        11b698:	e2840f65 	add	r0, r4, #404	; 0x194
        11b69c:	e2800b01 	add	r0, r0, #1024	; 0x400
        11b6a0:	e3a01000 	mov	r1, #0	; 0x0
        11b6a4:	eb6acc19 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        11b6a8:	e1a00004 	mov	r0, r4
        11b6ac:	e3a01000 	mov	r1, #0	; 0x0
        11b6b0:	eb63bb9a 	bl	1a0a520 <TFramedAsyncSerTool::$__dt(void)>
        11b6b4:	e3150001 	tst	r5, #1	; 0x1
        11b6b8:	11a00004 	movne	r0, r4
        11b6bc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        11b6c0:	1a6ac806 	bne	1bcd6e0 <$__dl(void *)>
        11b6c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        11b6c8:	0001f418 	andeq	pc, r1, r8, lsl r4
    */
}

/**
 * Symbol: TMNP::TaskConstructor(void)
 * Address: 0011b6cc
 */
TMNP::TaskConstructor(void) {
    /*
        11b6cc:	e1a0c00d 	mov	ip, sp
        11b6d0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11b6d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11b6d8:	e1a04000 	mov	r4, r0
        11b6dc:	eb63fda4 	bl	1a1ad74 <TFramedAsyncSerTool::$TaskConstructor(void)>
        11b6e0:	e3300000 	teq	r0, #0	; 0x0
        11b6e4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        11b6e8:	e3a05000 	mov	r5, #0	; 0x0
        11b6ec:	e3a00e96 	mov	r0, #2400	; 0x960
        11b6f0:	e584055c 	str	r0, [r4, #1372]	; fField1372
        11b6f4:	e5845588 	str	r5, [r4, #1416]	; fField1416
        11b6f8:	e5845564 	str	r5, [r4, #1380]	; fField1380
        11b6fc:	e3a00001 	mov	r0, #1	; 0x1
        11b700:	e5845568 	str	r5, [r4, #1384]	; fField1384
        11b704:	e5c4058c 	strb	r0, [r4, #1420]	; fField1420
        11b708:	e3a00b01 	mov	r0, #1024	; 0x400
        11b70c:	e58403e4 	str	r0, [r4, #996]	; fField996
        11b710:	e3a00f41 	mov	r0, #260	; 0x104
        11b714:	e5840524 	str	r0, [r4, #1316]	; fField1316
        11b718:	e2840f65 	add	r0, r4, #404	; 0x194
        11b71c:	e2800b01 	add	r0, r0, #1024	; 0x400
        11b720:	e1a06000 	mov	r6, r0
        11b724:	e3a01000 	mov	r1, #0	; 0x0
        11b728:	eb6ae8d9 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        11b72c:	e3300000 	teq	r0, #0	; 0x0
        11b730:	05960000 	ldreq	r0, [r6]
        11b734:	05a405ac 	streq	r0, [r4, #1452]!	; fField1452
        11b738:	01a00005 	moveq	r0, r5
        11b73c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMNP::TaskDestructor(void)
 * Address: 0011b740
 */
TMNP::TaskDestructor(void) {
    /*
        11b740:	ea640193 	b	1a1bd94 <TFramedAsyncSerTool::$TaskDestructor(void)>
    */
}

/**
 * Symbol: TMNP::FreeCCB(void)
 * Address: 0011b744
 */
TMNP::FreeCCB(void) {
    /*
        11b744:	e1a0c00d 	mov	ip, sp
        11b748:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11b74c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11b750:	e1a04000 	mov	r4, r0
        11b754:	e5900588 	ldr	r0, [r0, #1416]	; fField1416
        11b758:	e3300000 	teq	r0, #0	; 0x0
        11b75c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        11b760:	e5900010 	ldr	r0, [r0, #16]
        11b764:	e3a06000 	mov	r6, #0	; 0x0
        11b768:	e3300000 	teq	r0, #0	; 0x0
        11b76c:	0a000002 	beq	11b77c <TMNP::FreeCCB(void)+0x38>
        11b770:	eb64019d 	bl	1a1bdec <$V42DisposeCompressVars(TCompressVars *)>
        11b774:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b778:	e5a06010 	str	r6, [r0, #16]!
        11b77c:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b780:	e590001c 	ldr	r0, [r0, #28]
        11b784:	e3300000 	teq	r0, #0	; 0x0
        11b788:	0a000002 	beq	11b798 <TMNP::FreeCCB(void)+0x54>
        11b78c:	eb63e4aa 	bl	1a14a3c <$MNPC5Close(TMNPClass5Vars *)>
        11b790:	e5940588 	ldr	r0, [r4, #1416]	; fField1416
        11b794:	e5a0601c 	str	r6, [r0, #28]!
        11b798:	e5945588 	ldr	r5, [r4, #1416]	; fField1416
        11b79c:	e3350000 	teq	r5, #0	; 0x0
        11b7a0:	0a000021 	beq	11b82c <TMNP::FreeCCB(void)+0xe8>
        11b7a4:	e2850d33 	add	r0, r5, #3264	; 0xcc0
        11b7a8:	e3a01000 	mov	r1, #0	; 0x0
        11b7ac:	eb6bb733 	bl	1c09480 <TCircleBuf::$__dt(void)>
        11b7b0:	e2450fda 	sub	r0, r5, #872	; 0x368
        11b7b4:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11b7b8:	e3a01000 	mov	r1, #0	; 0x0
        11b7bc:	eb6b22aa 	bl	1be426c <CBufferSegment::$__dt(void)>
        11b7c0:	e2450fe2 	sub	r0, r5, #904	; 0x388
        11b7c4:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11b7c8:	e3a01000 	mov	r1, #0	; 0x0
        11b7cc:	eb6b229f 	bl	1be4250 <CBufferList::$__dt(void)>
        11b7d0:	e2450ff5 	sub	r0, r5, #980	; 0x3d4
        11b7d4:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11b7d8:	e3a01000 	mov	r1, #0	; 0x0
        11b7dc:	eb6b229b 	bl	1be4250 <CBufferList::$__dt(void)>
        11b7e0:	e2450fff 	sub	r0, r5, #1020	; 0x3fc
        11b7e4:	e2800a01 	add	r0, r0, #4096	; 0x1000
        11b7e8:	e3a01000 	mov	r1, #0	; 0x0
        11b7ec:	eb6b229e 	bl	1be426c <CBufferSegment::$__dt(void)>
        11b7f0:	e24510a4 	sub	r1, r5, #164	; 0xa4
        11b7f4:	e2850fa7 	add	r0, r5, #668	; 0x29c
        11b7f8:	e2800b02 	add	r0, r0, #2048	; 0x800
        11b7fc:	e59f3030 	ldr	r3, [pc, #30]	; 11b834 <TMNP::FreeCCB(void)+0xf0>
        11b800:	e3a02fa6 	mov	r2, #664	; 0x298
        11b804:	e2422b01 	sub	r2, r2, #1024	; 0x400
        11b808:	eb63a69e 	bl	1a05288 <$__vc__FPvT1iPFPvi_v>
        11b80c:	e2850068 	add	r0, r5, #104	; 0x68
        11b810:	e3a01000 	mov	r1, #0	; 0x0
        11b814:	eb6bb719 	bl	1c09480 <TCircleBuf::$__dt(void)>
        11b818:	e2850040 	add	r0, r5, #64	; 0x40
        11b81c:	e3a01000 	mov	r1, #0	; 0x0
        11b820:	eb6bb716 	bl	1c09480 <TCircleBuf::$__dt(void)>
        11b824:	e1a00005 	mov	r0, r5
        11b828:	eb6ac7ac 	bl	1bcd6e0 <$__dl(void *)>
        11b82c:	e5a46588 	str	r6, [r4, #1416]!	; fField1416
        11b830:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        11b834:	01a0a518 	moveq	sl, r8, lsl r5
    */
}

/**
 * Symbol: TMNP::GetSizeOf(void)
 * Address: 0011b838
 */
TMNP::GetSizeOf(void) {
    /*
        11b838:	e3a00e5b 	mov	r0, #1456	; 0x5b0
        11b83c:	e1a0f00e 	mov	pc, lr
    */
}

