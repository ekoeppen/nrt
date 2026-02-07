#include "include/TSerTool.h"

/**
 * Symbol: TSerTool::__ct(unsigned long)
 * Address: 001b8574
 */
TSerTool::TSerTool(unsigned long) {
    /*
        1b8574:	e1a0c00d 	mov	ip, sp
        1b8578:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b857c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8580:	e1b04000 	movs	r4, r0
        1b8584:	e1a05001 	mov	r5, r1
        1b8588:	1a000003 	bne	1b859c <TSerTool::__ct(unsigned long)+0x28>
        1b858c:	e3a00d0e 	mov	r0, #896	; 0x380
        1b8590:	eb685868 	bl	1bce738 <$__nw(unsigned int)>
        1b8594:	e1b04000 	movs	r4, r0
        1b8598:	0a000016 	beq	1b85f8 <TSerTool::__ct(unsigned long)+0x84>
        1b859c:	e1a01005 	mov	r1, r5
        1b85a0:	e1a00004 	mov	r0, r4
        1b85a4:	eb681226 	bl	1bbce44 <TCommTool::$__ct(unsigned long)>
        1b85a8:	e2840fa5 	add	r0, r4, #660	; 0x294
        1b85ac:	eb61d44b 	bl	1a2d6e0 <TSerToolReply::$__ct(void)>
        1b85b0:	e2840fb6 	add	r0, r4, #728	; 0x2d8
        1b85b4:	eb68543c 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        1b85b8:	e2840fbb 	add	r0, r4, #748	; 0x2ec
        1b85bc:	eb68af1d 	bl	1be4238 <TAEvent::$__ct(void)>
        1b85c0:	e2840e31 	add	r0, r4, #784	; 0x310
        1b85c4:	eb692f29 	bl	1c04270 <TCMOSerialChipSpec::$__ct(void)>
        1b85c8:	e2840fce 	add	r0, r4, #824	; 0x338
        1b85cc:	eb69163e 	bl	1bfdecc <TDelayTimer::$__ct(void)>
        1b85d0:	e2840fd1 	add	r0, r4, #836	; 0x344
        1b85d4:	eb680e05 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
        1b85d8:	e2840e36 	add	r0, r4, #864	; 0x360
        1b85dc:	eb685432 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        1b85e0:	e2840fdd 	add	r0, r4, #884	; 0x374
        1b85e4:	eb68af13 	bl	1be4238 <TAEvent::$__ct(void)>
        1b85e8:	e59f0010 	ldr	r0, [pc, #10]	; 1b8600 <TSerTool::__ct(unsigned long)+0x8c>
        1b85ec:	e5840000 	str	r0, [r4]
        1b85f0:	e3a00003 	mov	r0, #3	; 0x3
        1b85f4:	e584026c 	str	r0, [r4, #620]	; fField620
        1b85f8:	e1a00004 	mov	r0, r4
        1b85fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1b8600:	0002043c 	andeq	r0, r2, ip, lsr r4
    */
}

/**
 * Symbol: TSerTool::UnbindToSerChip(void)
 * Address: 001b8604
 */
TSerTool::UnbindToSerChip(void) {
    /*
        1b8604:	e1a0c00d 	mov	ip, sp
        1b8608:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b860c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8610:	e1a04000 	mov	r4, r0
        1b8614:	e5d0028c 	ldrb	r0, [r0, #652]	; fField652
        1b8618:	e3300000 	teq	r0, #0	; 0x0
        1b861c:	0a000003 	beq	1b8630 <TSerTool::UnbindToSerChip(void)+0x2c>
        1b8620:	e1a00004 	mov	r0, r4
        1b8624:	e5941000 	ldr	r1, [r4]
        1b8628:	e1a0e00f 	mov	lr, pc
        1b862c:	e281ff52 	add	pc, r1, #328	; 0x148
        1b8630:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1b8634:	e3300000 	teq	r0, #0	; 0x0
        1b8638:	11a01004 	movne	r1, r4
        1b863c:	1b073147 	blne	384b60 <TSerialChip::RemoveChipHandler(void *)>
        1b8640:	e3a00000 	mov	r0, #0	; 0x0
        1b8644:	e5c4028d 	strb	r0, [r4, #653]	; fField653
        1b8648:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::BindToSerChip(void)
 * Address: 001b864c
 */
TSerTool::BindToSerChip(void) {
    /*
        1b864c:	e1a0c00d 	mov	ip, sp
        1b8650:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b8654:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8658:	e1a04000 	mov	r4, r0
        1b865c:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b8660:	e5901308 	ldr	r1, [r0, #776]	; fField776
        1b8664:	e5900334 	ldr	r0, [r0, #820]	; fField820
        1b8668:	eb07320f 	bl	384eac <PSerialChipRegistry::GetChipPtr(unsigned long)>
        1b866c:	e5840304 	str	r0, [r4, #772]	; fField772
        1b8670:	e3300000 	teq	r0, #0	; 0x0
        1b8674:	03a0006a 	moveq	r0, #106	; 0x6a
        1b8678:	02400c3f 	subeq	r0, r0, #16128	; 0x3f00
        1b867c:	0a000012 	beq	1b86cc <TSerTool::BindToSerChip(void)+0x80>
        1b8680:	e1a0100d 	mov	r1, sp
        1b8684:	e1a00004 	mov	r0, r4
        1b8688:	e5942000 	ldr	r2, [r4]
        1b868c:	e1a0e00f 	mov	lr, pc
        1b8690:	e282ff5f 	add	pc, r2, #380	; 0x17c
        1b8694:	e1a0200d 	mov	r2, sp
        1b8698:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1b869c:	e1a01004 	mov	r1, r4
        1b86a0:	eb07312b 	bl	384b54 <TSerialChip::InstallChipHandler(void *, SCCChannelInts *)>
        1b86a4:	e3300000 	teq	r0, #0	; 0x0
        1b86a8:	03a01001 	moveq	r1, #1	; 0x1
        1b86ac:	05c4128d 	streqb	r1, [r4, #653]	; fField653
        1b86b0:	05d4128c 	ldreqb	r1, [r4, #652]	; fField652
        1b86b4:	03310000 	teqeq	r1, #0	; 0x0
        1b86b8:	1a000003 	bne	1b86cc <TSerTool::BindToSerChip(void)+0x80>
        1b86bc:	e1a00004 	mov	r0, r4
        1b86c0:	e5941000 	ldr	r1, [r4]
        1b86c4:	e1a0e00f 	mov	lr, pc
        1b86c8:	e281ff4d 	add	pc, r1, #308	; 0x134
        1b86cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::UnclaimSerialChip(void)
 * Address: 001b86d0
 */
TSerTool::UnclaimSerialChip(void) {
    /*
        1b86d0:	e1a0c00d 	mov	ip, sp
        1b86d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b86d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b86dc:	e1a04000 	mov	r4, r0
        1b86e0:	e5d0028b 	ldrb	r0, [r0, #651]	; fField651
        1b86e4:	e3300000 	teq	r0, #0	; 0x0
        1b86e8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1b86ec:	e5d421d0 	ldrb	r2, [r4, #464]	; fField464
        1b86f0:	e3a03000 	mov	r3, #0	; 0x0
        1b86f4:	e5940334 	ldr	r0, [r4, #820]	; fField820
        1b86f8:	e5941308 	ldr	r1, [r4, #776]	; fField776
        1b86fc:	eb0731f9 	bl	384ee8 <PSerialChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long)>
        1b8700:	e3a00000 	mov	r0, #0	; 0x0
        1b8704:	e5c4028b 	strb	r0, [r4, #651]	; fField651
        1b8708:	e5840304 	str	r0, [r4, #772]	; fField772
        1b870c:	e5840308 	str	r0, [r4, #776]	; fField776
        1b8710:	e5a4030c 	str	r0, [r4, #780]!	; fField780
        1b8714:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::LookUpSerialChip(unsigned long)
 * Address: 001b8718
 */
TSerTool::LookUpSerialChip(unsigned long) {
    /*
        1b8718:	e1a0c00d 	mov	ip, sp
        1b871c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b8720:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8724:	e1a04000 	mov	r4, r0
        1b8728:	e1a05001 	mov	r5, r1
        1b872c:	e5900334 	ldr	r0, [r0, #820]	; fField820
        1b8730:	eb0731e9 	bl	384edc <PSerialChipRegistry::FindByLocation(unsigned long)>
        1b8734:	e1b06000 	movs	r6, r0
        1b8738:	03a0006a 	moveq	r0, #106	; 0x6a
        1b873c:	02400c3f 	subeq	r0, r0, #16128	; 0x3f00
        1b8740:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1b8744:	e5846308 	str	r6, [r4, #776]	; fField776
        1b8748:	e1a01006 	mov	r1, r6
        1b874c:	e5940334 	ldr	r0, [r4, #820]	; fField820
        1b8750:	eb0731d5 	bl	384eac <PSerialChipRegistry::GetChipPtr(unsigned long)>
        1b8754:	e5840304 	str	r0, [r4, #772]	; fField772
        1b8758:	e59fc01c 	ldr	ip, [pc, #1c]	; 1b877c <TSerTool::LookUpSerialChip(unsigned long)+0x64>
        1b875c:	e135000c 	teq	r5, ip
        1b8760:	1a000003 	bne	1b8774 <TSerTool::LookUpSerialChip(unsigned long)+0x5c>
        1b8764:	e1a01006 	mov	r1, r6
        1b8768:	e5940334 	ldr	r0, [r4, #820]	; fField820
        1b876c:	eb0731d1 	bl	384eb8 <PSerialChipRegistry::GetChipLocation(unsigned long)>
        1b8770:	e5a4031c 	str	r0, [r4, #796]!	; fField796
        1b8774:	e3a00000 	mov	r0, #0	; 0x0
        1b8778:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1b877c:	736c6f74 	cmnvc	ip, #464	; 0x1d0
    */
}

/**
 * Symbol: TSerTool::ResArbClaimNotification(unsigned char *, unsigned char *)
 * Address: 001b8780
 */
TSerTool::ResArbClaimNotification(unsigned char *, unsigned char *) {
    /*
        1b8780:	e1a0c00d 	mov	ip, sp
        1b8784:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b8788:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b878c:	e1a04000 	mov	r4, r0
        1b8790:	e3a00000 	mov	r0, #0	; 0x0
        1b8794:	e5c401d2 	strb	r0, [r4, #466]	; fField466
        1b8798:	e5d400c4 	ldrb	r0, [r4, #196]	; fField196
        1b879c:	e3300000 	teq	r0, #0	; 0x0
        1b87a0:	0a000007 	beq	1b87c4 <TSerTool::ResArbClaimNotification(unsigned char *, unsigned char *)+0x44>
        1b87a4:	e59401d4 	ldr	r0, [r4, #468]	; fField468
        1b87a8:	e3300008 	teq	r0, #8	; 0x8
        1b87ac:	1a000004 	bne	1b87c4 <TSerTool::ResArbClaimNotification(unsigned char *, unsigned char *)+0x44>
        1b87b0:	e1a00004 	mov	r0, r4
        1b87b4:	e3a01000 	mov	r1, #0	; 0x0
        1b87b8:	e5942000 	ldr	r2, [r4]
        1b87bc:	e1a0e00f 	mov	lr, pc
        1b87c0:	e282f078 	add	pc, r2, #120	; 0x78
        1b87c4:	e1a00004 	mov	r0, r4
        1b87c8:	e3a02000 	mov	r2, #0	; 0x0
        1b87cc:	e3a01006 	mov	r1, #6	; 0x6
        1b87d0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b87d4:	ea6811a5 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TSerTool::ResArbReleaseStart(unsigned char *, unsigned char *)
 * Address: 001b87d8
 */
TSerTool::ResArbReleaseStart(unsigned char *, unsigned char *) {
    /*
        1b87d8:	e1a0c00d 	mov	ip, sp
        1b87dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b87e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b87e4:	e1a04000 	mov	r4, r0
        1b87e8:	e5901000 	ldr	r1, [r0]
        1b87ec:	e1a0e00f 	mov	lr, pc
        1b87f0:	e281ff55 	add	pc, r1, #340	; 0x154
        1b87f4:	e3a00001 	mov	r0, #1	; 0x1
        1b87f8:	e5c401d2 	strb	r0, [r4, #466]	; fField466
        1b87fc:	e1a00004 	mov	r0, r4
        1b8800:	e3a01000 	mov	r1, #0	; 0x0
        1b8804:	e5942000 	ldr	r2, [r4]
        1b8808:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b880c:	e282fe11 	add	pc, r2, #272	; 0x110
    */
}

/**
 * Symbol: TSerTool::ClaimSerialChip(void)
 * Address: 001b8810
 */
TSerTool::ClaimSerialChip(void) {
    /*
        1b8810:	e1a0c00d 	mov	ip, sp
        1b8814:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b8818:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b881c:	e1a04000 	mov	r4, r0
        1b8820:	e5d0028b 	ldrb	r0, [r0, #651]	; fField651
        1b8824:	e3300000 	teq	r0, #0	; 0x0
        1b8828:	13a00000 	movne	r0, #0	; 0x0
        1b882c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1b8830:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b8834:	e5d4028f 	ldrb	r0, [r4, #655]	; fField655
        1b8838:	e3a0706a 	mov	r7, #106	; 0x6a
        1b883c:	e2477c3f 	sub	r7, r7, #16128	; 0x3f00
        1b8840:	e2846e31 	add	r6, r4, #784	; 0x310
        1b8844:	e3300000 	teq	r0, #0	; 0x0
        1b8848:	0a00000a 	beq	1b8878 <TSerTool::ClaimSerialChip(void)+0x68>
        1b884c:	e1a01006 	mov	r1, r6
        1b8850:	e5940334 	ldr	r0, [r4, #820]	; fField820
        1b8854:	eb07319d 	bl	384ed0 <PSerialChipRegistry::FindByOption(TCMOSerialChipSpec *)>
        1b8858:	e1b01000 	movs	r1, r0
        1b885c:	0a000002 	beq	1b886c <TSerTool::ClaimSerialChip(void)+0x5c>
        1b8860:	e5940334 	ldr	r0, [r4, #820]	; fField820
        1b8864:	eb073193 	bl	384eb8 <PSerialChipRegistry::GetChipLocation(unsigned long)>
        1b8868:	e584031c 	str	r0, [r4, #796]	; fField796
        1b886c:	e594131c 	ldr	r1, [r4, #796]	; fField796
        1b8870:	e1a00004 	mov	r0, r4
        1b8874:	ea000023 	b	1b8908 <TSerTool::ClaimSerialChip(void)+0xf8>
        1b8878:	e59402f8 	ldr	r0, [r4, #760]	; fField760
        1b887c:	e59f50c4 	ldr	r5, [pc, #c4]	; 1b8948 <TSerTool::ClaimSerialChip(void)+0x138>
        1b8880:	e3300002 	teq	r0, #2	; 0x2
        1b8884:	01a00004 	moveq	r0, r4
        1b8888:	01a01005 	moveq	r1, r5
        1b888c:	0a000007 	beq	1b88b0 <TSerTool::ClaimSerialChip(void)+0xa0>
        1b8890:	e1a0200d 	mov	r2, sp
        1b8894:	e5940334 	ldr	r0, [r4, #820]	; fField820
        1b8898:	e5941204 	ldr	r1, [r4, #516]	; fField516
        1b889c:	eb073194 	bl	384ef4 <PSerialChipRegistry::GetDefaultChip(unsigned long, unsigned long *)>
        1b88a0:	e3300000 	teq	r0, #0	; 0x0
        1b88a4:	1a000002 	bne	1b88b4 <TSerTool::ClaimSerialChip(void)+0xa4>
        1b88a8:	e1a00004 	mov	r0, r4
        1b88ac:	e59d1000 	ldr	r1, [sp]
        1b88b0:	eb619dd6 	bl	1a20010 <TSerTool::$LookUpSerialChip(unsigned long)>
        1b88b4:	e3300000 	teq	r0, #0	; 0x0
        1b88b8:	0a000015 	beq	1b8914 <TSerTool::ClaimSerialChip(void)+0x104>
        1b88bc:	e5940300 	ldr	r0, [r4, #768]	; fField768
        1b88c0:	e3300002 	teq	r0, #2	; 0x2
        1b88c4:	01a00004 	moveq	r0, r4
        1b88c8:	01a01005 	moveq	r1, r5
        1b88cc:	0a000008 	beq	1b88f4 <TSerTool::ClaimSerialChip(void)+0xe4>
        1b88d0:	e3300003 	teq	r0, #3	; 0x3
        1b88d4:	1a000009 	bne	1b8900 <TSerTool::ClaimSerialChip(void)+0xf0>
        1b88d8:	e1a00004 	mov	r0, r4
        1b88dc:	e59f1068 	ldr	r1, [pc, #68]	; 1b894c <TSerTool::ClaimSerialChip(void)+0x13c>
        1b88e0:	eb619dca 	bl	1a20010 <TSerTool::$LookUpSerialChip(unsigned long)>
        1b88e4:	e3300000 	teq	r0, #0	; 0x0
        1b88e8:	0a000009 	beq	1b8914 <TSerTool::ClaimSerialChip(void)+0x104>
        1b88ec:	e1a00004 	mov	r0, r4
        1b88f0:	e59f1058 	ldr	r1, [pc, #58]	; 1b8950 <TSerTool::ClaimSerialChip(void)+0x140>
        1b88f4:	eb619dc5 	bl	1a20010 <TSerTool::$LookUpSerialChip(unsigned long)>
        1b88f8:	e3300000 	teq	r0, #0	; 0x0
        1b88fc:	0a000004 	beq	1b8914 <TSerTool::ClaimSerialChip(void)+0x104>
        1b8900:	e1a00004 	mov	r0, r4
        1b8904:	e59f1048 	ldr	r1, [pc, #48]	; 1b8954 <TSerTool::ClaimSerialChip(void)+0x144>
        1b8908:	eb619dc0 	bl	1a20010 <TSerTool::$LookUpSerialChip(unsigned long)>
        1b890c:	e1b05000 	movs	r5, r0
        1b8910:	1a00000a 	bne	1b8940 <TSerTool::ClaimSerialChip(void)+0x130>
        1b8914:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1b8918:	e3300000 	teq	r0, #0	; 0x0
        1b891c:	01a05007 	moveq	r5, r7
        1b8920:	0a000006 	beq	1b8940 <TSerTool::ClaimSerialChip(void)+0x130>
        1b8924:	e594308c 	ldr	r3, [r4, #140]	; fField140
        1b8928:	e5d421d0 	ldrb	r2, [r4, #464]	; fField464
        1b892c:	e5940334 	ldr	r0, [r4, #820]	; fField820
        1b8930:	e5941308 	ldr	r1, [r4, #776]	; fField776
        1b8934:	eb07316b 	bl	384ee8 <PSerialChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long)>
        1b8938:	e1b05000 	movs	r5, r0
        1b893c:	0a000005 	beq	1b8958 <TSerTool::ClaimSerialChip(void)+0x148>
        1b8940:	e1a00005 	mov	r0, r5
        1b8944:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1b8948:	696e6672 	stmvsdb	lr!, {r1, r4, r5, r6, r9, sl, sp, lr}^
        1b894c:	736c7431 	cmnvc	ip, #822083584	; 0x31000000
        1b8950:	736c7432 	cmnvc	ip, #838860800	; 0x32000000
        1b8954:	65787472 	ldrvsb	r7, [r8, -#1138]!
        1b8958:	e3a07001 	mov	r7, #1	; 0x1
        1b895c:	e5c4728b 	strb	r7, [r4, #651]	; fField651
        1b8960:	e5d401d0 	ldrb	r0, [r4, #464]	; fField464
        1b8964:	e5c401d2 	strb	r0, [r4, #466]	; fField466
        1b8968:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1b896c:	eb685ba1 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        1b8970:	e3300000 	teq	r0, #0	; 0x0
        1b8974:	0a000011 	beq	1b89c0 <TSerTool::ClaimSerialChip(void)+0x1b0>
        1b8978:	e59f103c 	ldr	r1, [pc, #3c]	; 1b89bc <TSerTool::ClaimSerialChip(void)+0x1ac>
        1b897c:	eb6867fe 	bl	1bd297c <TClassInfo::$GetCapability( const(long))>
        1b8980:	e3300000 	teq	r0, #0	; 0x0
        1b8984:	0a00000d 	beq	1b89c0 <TSerTool::ClaimSerialChip(void)+0x1b0>
        1b8988:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1b898c:	eb0730b8 	bl	384c74 <TSerialChip::GetFeatures(void)>
        1b8990:	e584030c 	str	r0, [r4, #780]	; fField780
        1b8994:	e1a00006 	mov	r0, r6
        1b8998:	eb6808df 	bl	1bbad1c <TOption::$Reset(void)>
        1b899c:	e5961008 	ldr	r1, [r6, #8]
        1b89a0:	e3c11cff 	bic	r1, r1, #65280	; 0xff00
        1b89a4:	e3811b01 	orr	r1, r1, #1024	; 0x400
        1b89a8:	e5861008 	str	r1, [r6, #8]
        1b89ac:	e1a01006 	mov	r1, r6
        1b89b0:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1b89b4:	eb0730b4 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
        1b89b8:	ea000001 	b	1b89c4 <TSerTool::ClaimSerialChip(void)+0x1b4>
        1b89bc:	76322e30 	undefined
        1b89c0:	e584730c 	str	r7, [r4, #780]	; fField780
        1b89c4:	e594030c 	ldr	r0, [r4, #780]	; fField780
        1b89c8:	e2100040 	ands	r0, r0, #64	; 0x40
        1b89cc:	13a00001 	movne	r0, #1	; 0x1
        1b89d0:	e5c40291 	strb	r0, [r4, #657]	; fField657
        1b89d4:	e5d40291 	ldrb	r0, [r4, #657]	; fField657
        1b89d8:	e5c40292 	strb	r0, [r4, #658]	; fField658
        1b89dc:	eaffffd7 	b	1b8940 <TSerTool::ClaimSerialChip(void)+0x130>
    */
}

/**
 * Symbol: TSerTool::ConnectStart(void)
 * Address: 001b89e0
 */
TSerTool::ConnectStart(void) {
    /*
        1b89e0:	e1a0c00d 	mov	ip, sp
        1b89e4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b89e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b89ec:	e1a04000 	mov	r4, r0
        1b89f0:	e5901000 	ldr	r1, [r0]
        1b89f4:	e1a0e00f 	mov	lr, pc
        1b89f8:	e281fe15 	add	pc, r1, #336	; 0x150
        1b89fc:	e1a01000 	mov	r1, r0
        1b8a00:	e1a00004 	mov	r0, r4
        1b8a04:	e5942000 	ldr	r2, [r4]
        1b8a08:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b8a0c:	e282f054 	add	pc, r2, #84	; 0x54
    */
}

/**
 * Symbol: TSerTool::ListenStart(void)
 * Address: 001b8a10
 */
TSerTool::ListenStart(void) {
    /*
        1b8a10:	e1a0c00d 	mov	ip, sp
        1b8a14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b8a18:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8a1c:	e1a04000 	mov	r4, r0
        1b8a20:	e5901000 	ldr	r1, [r0]
        1b8a24:	e1a0e00f 	mov	lr, pc
        1b8a28:	e281fe15 	add	pc, r1, #336	; 0x150
        1b8a2c:	e1a01000 	mov	r1, r0
        1b8a30:	e1a00004 	mov	r0, r4
        1b8a34:	e5942000 	ldr	r2, [r4]
        1b8a38:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b8a3c:	e282f05c 	add	pc, r2, #92	; 0x5c
    */
}

/**
 * Symbol: TSerTool::TerminateComplete(void)
 * Address: 001b8a40
 */
TSerTool::TerminateComplete(void) {
    /*
        1b8a40:	e1a0c00d 	mov	ip, sp
        1b8a44:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b8a48:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8a4c:	e1a04000 	mov	r4, r0
        1b8a50:	e5901000 	ldr	r1, [r0]
        1b8a54:	e1a0e00f 	mov	lr, pc
        1b8a58:	e281ff55 	add	pc, r1, #340	; 0x154
        1b8a5c:	e1a00004 	mov	r0, r4
        1b8a60:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b8a64:	ea68218f 	b	1bc10a8 <TCommTool::$TerminateComplete(void)>
    */
}

/**
 * Symbol: TSerTool::__dt(void)
 * Address: 001b8a68
 */
TSerTool::~TSerTool(void) {
    /*
        1b8a68:	e1a0c00d 	mov	ip, sp
        1b8a6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b8a70:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8a74:	e1a04000 	mov	r4, r0
        1b8a78:	e1a05001 	mov	r5, r1
        1b8a7c:	e59f0038 	ldr	r0, [pc, #38]	; 1b8abc <TSerTool::__dt(void)+0x54>
        1b8a80:	e5840000 	str	r0, [r4]
        1b8a84:	e2840e36 	add	r0, r4, #864	; 0x360
        1b8a88:	e3a01000 	mov	r1, #0	; 0x0
        1b8a8c:	eb68571f 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1b8a90:	e2840fb6 	add	r0, r4, #728	; 0x2d8
        1b8a94:	e3a01000 	mov	r1, #0	; 0x0
        1b8a98:	eb68571c 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1b8a9c:	e1a00004 	mov	r0, r4
        1b8aa0:	e3a01000 	mov	r1, #0	; 0x0
        1b8aa4:	eb6810e7 	bl	1bbce48 <TCommTool::$__dt(void)>
        1b8aa8:	e3150001 	tst	r5, #1	; 0x1
        1b8aac:	11a00004 	movne	r0, r4
        1b8ab0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1b8ab4:	1a685309 	bne	1bcd6e0 <$__dl(void *)>
        1b8ab8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1b8abc:	0002043c 	andeq	r0, r2, ip, lsr r4
    */
}

/**
 * Symbol: TSerTool::DoKillControl(unsigned long)
 * Address: 001b8ac0
 */
TSerTool::DoKillControl(unsigned long) {
    /*
        1b8ac0:	e1a0c00d 	mov	ip, sp
        1b8ac4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b8ac8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8acc:	e1a04000 	mov	r4, r0
        1b8ad0:	e5d000c4 	ldrb	r0, [r0, #196]	; fField196
        1b8ad4:	e3300000 	teq	r0, #0	; 0x0
        1b8ad8:	0a000015 	beq	1b8b34 <TSerTool::DoKillControl(unsigned long)+0x74>
        1b8adc:	e59401d4 	ldr	r0, [r4, #468]	; fField468
        1b8ae0:	e3300008 	teq	r0, #8	; 0x8
        1b8ae4:	1a000012 	bne	1b8b34 <TSerTool::DoKillControl(unsigned long)+0x74>
        1b8ae8:	e5d401d2 	ldrb	r0, [r4, #466]	; fField466
        1b8aec:	e3300000 	teq	r0, #0	; 0x0
        1b8af0:	0a00000f 	beq	1b8b34 <TSerTool::DoKillControl(unsigned long)+0x74>
        1b8af4:	e1a00004 	mov	r0, r4
        1b8af8:	e5941000 	ldr	r1, [r4]
        1b8afc:	e1a0e00f 	mov	lr, pc
        1b8b00:	e281ff53 	add	pc, r1, #332	; 0x14c
        1b8b04:	e3a00000 	mov	r0, #0	; 0x0
        1b8b08:	e5c401d2 	strb	r0, [r4, #466]	; fField466
        1b8b0c:	e1a00004 	mov	r0, r4
        1b8b10:	e59f1028 	ldr	r1, [pc, #28]	; 1b8b40 <TSerTool::DoKillControl(unsigned long)+0x80>
        1b8b14:	e5942000 	ldr	r2, [r4]
        1b8b18:	e1a0e00f 	mov	lr, pc
        1b8b1c:	e282f078 	add	pc, r2, #120	; 0x78
        1b8b20:	e1a00004 	mov	r0, r4
        1b8b24:	e3a02000 	mov	r2, #0	; 0x0
        1b8b28:	e3a01004 	mov	r1, #4	; 0x4
        1b8b2c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b8b30:	ea681d37 	b	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
        1b8b34:	e1a00004 	mov	r0, r4
        1b8b38:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b8b3c:	ea681d22 	b	1bbffcc <TCommTool::$DoKillControl(unsigned long)>
        1b8b40:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TSerTool::TurnOn(void)
 * Address: 001b8b44
 */
TSerTool::TurnOn(void) {
    /*
        1b8b44:	e1a0c00d 	mov	ip, sp
        1b8b48:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b8b4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8b50:	e1a04000 	mov	r4, r0
        1b8b54:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b8b58:	e5d0128c 	ldrb	r1, [r0, #652]	; fField652
        1b8b5c:	e3a00000 	mov	r0, #0	; 0x0
        1b8b60:	e3310000 	teq	r1, #0	; 0x0
        1b8b64:	15d4128d 	ldrneb	r1, [r4, #653]	; fField653
        1b8b68:	13310000 	teqne	r1, #0	; 0x0
        1b8b6c:	15d4128e 	ldrneb	r1, [r4, #654]	; fField654
        1b8b70:	13310000 	teqne	r1, #0	; 0x0
        1b8b74:	1a000017 	bne	1b8bd8 <TSerTool::TurnOn(void)+0x94>
        1b8b78:	e58402cc 	str	r0, [r4, #716]	; fField716
        1b8b7c:	e58d0004 	str	r0, [sp, #4]
        1b8b80:	e2841fb1 	add	r1, r4, #708	; 0x2c4
        1b8b84:	e58d0000 	str	r0, [sp]
        1b8b88:	e89d1008 	ldmia	sp, {r3, ip}
        1b8b8c:	e8811008 	stmia	r1, {r3, ip}
        1b8b90:	e5d4028b 	ldrb	r0, [r4, #651]	; fField651
        1b8b94:	e3300000 	teq	r0, #0	; 0x0
        1b8b98:	03a0006a 	moveq	r0, #106	; 0x6a
        1b8b9c:	02400c3f 	subeq	r0, r0, #16128	; 0x3f00
        1b8ba0:	0a00000c 	beq	1b8bd8 <TSerTool::TurnOn(void)+0x94>
        1b8ba4:	e5d4028d 	ldrb	r0, [r4, #653]	; fField653
        1b8ba8:	e3300000 	teq	r0, #0	; 0x0
        1b8bac:	1a000005 	bne	1b8bc8 <TSerTool::TurnOn(void)+0x84>
        1b8bb0:	e1a00004 	mov	r0, r4
        1b8bb4:	e5941000 	ldr	r1, [r4]
        1b8bb8:	e1a0e00f 	mov	lr, pc
        1b8bbc:	e281ff4e 	add	pc, r1, #312	; 0x138
        1b8bc0:	e3300000 	teq	r0, #0	; 0x0
        1b8bc4:	1a000003 	bne	1b8bd8 <TSerTool::TurnOn(void)+0x94>
        1b8bc8:	e1a00004 	mov	r0, r4
        1b8bcc:	e5941000 	ldr	r1, [r4]
        1b8bd0:	e1a0e00f 	mov	lr, pc
        1b8bd4:	e281ff4f 	add	pc, r1, #316	; 0x13c
        1b8bd8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::TurnOff(void)
 * Address: 001b8bdc
 */
TSerTool::TurnOff(void) {
    /*
        1b8bdc:	e1a0c00d 	mov	ip, sp
        1b8be0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b8be4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8be8:	e1a04000 	mov	r4, r0
        1b8bec:	e5901000 	ldr	r1, [r0]
        1b8bf0:	e1a0e00f 	mov	lr, pc
        1b8bf4:	e281fd05 	add	pc, r1, #320	; 0x140
        1b8bf8:	e1a00004 	mov	r0, r4
        1b8bfc:	e5941000 	ldr	r1, [r4]
        1b8c00:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b8c04:	e281ff51 	add	pc, r1, #324	; 0x144
    */
}

/**
 * Symbol: TSerTool::AddDefaultOptions(TOptionArray *)
 * Address: 001b8c08
 */
TSerTool::AddDefaultOptions(TOptionArray *) {
    /*
        1b8c08:	e1a0c00d 	mov	ip, sp
        1b8c0c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b8c10:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8c14:	e1a05000 	mov	r5, r0
        1b8c18:	e1a04001 	mov	r4, r1
        1b8c1c:	e24dd040 	sub	sp, sp, #64	; 0x40
        1b8c20:	e28d0024 	add	r0, sp, #36	; 0x24
        1b8c24:	eb680c71 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
        1b8c28:	e28d0010 	add	r0, sp, #16	; 0x10
        1b8c2c:	eb692d92 	bl	1c0427c <TCMOSerialHWChipLoc::$__ct(void)>
        1b8c30:	e1a0000d 	mov	r0, sp
        1b8c34:	eb693191 	bl	1c05280 <TCMOSerialHalfDuplex::$__ct(void)>
        1b8c38:	e28d2024 	add	r2, sp, #36	; 0x24
        1b8c3c:	e5941000 	ldr	r1, [r4]
        1b8c40:	e1a00004 	mov	r0, r4
        1b8c44:	eb680416 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1b8c48:	e3300000 	teq	r0, #0	; 0x0
        1b8c4c:	1a000003 	bne	1b8c60 <TSerTool::AddDefaultOptions(TOptionArray *)+0x58>
        1b8c50:	e28d2010 	add	r2, sp, #16	; 0x10
        1b8c54:	e5941000 	ldr	r1, [r4]
        1b8c58:	e1a00004 	mov	r0, r4
        1b8c5c:	eb680410 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1b8c60:	e3300000 	teq	r0, #0	; 0x0
        1b8c64:	1a000003 	bne	1b8c78 <TSerTool::AddDefaultOptions(TOptionArray *)+0x70>
        1b8c68:	e1a0200d 	mov	r2, sp
        1b8c6c:	e5941000 	ldr	r1, [r4]
        1b8c70:	e1a00004 	mov	r0, r4
        1b8c74:	eb68040a 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1b8c78:	e3300000 	teq	r0, #0	; 0x0
        1b8c7c:	01a01004 	moveq	r1, r4
        1b8c80:	01a00005 	moveq	r0, r5
        1b8c84:	0b681074 	bleq	1bbce5c <TCommTool::$AddDefaultOptions(TOptionArray *)>
        1b8c88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::AddCurrentOptions(TOptionArray *)
 * Address: 001b8c8c
 */
TSerTool::AddCurrentOptions(TOptionArray *) {
    /*
        1b8c8c:	e1a0c00d 	mov	ip, sp
        1b8c90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b8c94:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8c98:	e1a05000 	mov	r5, r0
        1b8c9c:	e1a04001 	mov	r4, r1
        1b8ca0:	e2802fd1 	add	r2, r0, #836	; 0x344
        1b8ca4:	e5911000 	ldr	r1, [r1]
        1b8ca8:	e1a00004 	mov	r0, r4
        1b8cac:	eb6803fc 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1b8cb0:	e3300000 	teq	r0, #0	; 0x0
        1b8cb4:	1a000003 	bne	1b8cc8 <TSerTool::AddCurrentOptions(TOptionArray *)+0x3c>
        1b8cb8:	e2852e31 	add	r2, r5, #784	; 0x310
        1b8cbc:	e5941000 	ldr	r1, [r4]
        1b8cc0:	e1a00004 	mov	r0, r4
        1b8cc4:	eb6803f6 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1b8cc8:	e3300000 	teq	r0, #0	; 0x0
        1b8ccc:	1a000009 	bne	1b8cf8 <TSerTool::AddCurrentOptions(TOptionArray *)+0x6c>
        1b8cd0:	e24dd014 	sub	sp, sp, #20	; 0x14
        1b8cd4:	e1a0000d 	mov	r0, sp
        1b8cd8:	eb692d67 	bl	1c0427c <TCMOSerialHWChipLoc::$__ct(void)>
        1b8cdc:	e595031c 	ldr	r0, [r5, #796]	; fField796
        1b8ce0:	e58d000c 	str	r0, [sp, #12]
        1b8ce4:	e1a0200d 	mov	r2, sp
        1b8ce8:	e5941000 	ldr	r1, [r4]
        1b8cec:	e1a00004 	mov	r0, r4
        1b8cf0:	eb6803eb 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1b8cf4:	e28dd014 	add	sp, sp, #20	; 0x14
        1b8cf8:	e3300000 	teq	r0, #0	; 0x0
        1b8cfc:	1a000009 	bne	1b8d28 <TSerTool::AddCurrentOptions(TOptionArray *)+0x9c>
        1b8d00:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b8d04:	e1a0000d 	mov	r0, sp
        1b8d08:	eb69315c 	bl	1c05280 <TCMOSerialHalfDuplex::$__ct(void)>
        1b8d0c:	e5d50291 	ldrb	r0, [r5, #657]	; fField657
        1b8d10:	e5cd000c 	strb	r0, [sp, #12]
        1b8d14:	e1a0200d 	mov	r2, sp
        1b8d18:	e5941000 	ldr	r1, [r4]
        1b8d1c:	e1a00004 	mov	r0, r4
        1b8d20:	eb6803df 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1b8d24:	e28dd010 	add	sp, sp, #16	; 0x10
        1b8d28:	e3300000 	teq	r0, #0	; 0x0
        1b8d2c:	01a01004 	moveq	r1, r4
        1b8d30:	01a00005 	moveq	r0, r5
        1b8d34:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        1b8d38:	0a681046 	beq	1bbce58 <TCommTool::$AddCurrentOptions(TOptionArray *)>
        1b8d3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 001b8d40
 */
TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        1b8d40:	e1a0c00d 	mov	ip, sp
        1b8d44:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1b8d48:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b8d4c:	e1a04000 	mov	r4, r0
        1b8d50:	e1a06001 	mov	r6, r1
        1b8d54:	e1a05003 	mov	r5, r3
        1b8d58:	e3a07000 	mov	r7, #0	; 0x0
        1b8d5c:	e59fc074 	ldr	ip, [pc, #74]	; 1b8dd8 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x98>
        1b8d60:	e152000c 	cmp	r2, ip
        1b8d64:	0a000060 	beq	1b8eec <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1ac>
        1b8d68:	ca00001f 	bgt	1b8dec <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xac>
        1b8d6c:	e59fc068 	ldr	ip, [pc, #68]	; 1b8ddc <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x9c>
        1b8d70:	e132000c 	teq	r2, ip
        1b8d74:	0a0000a7 	beq	1b9018 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2d8>
        1b8d78:	e59fc060 	ldr	ip, [pc, #60]	; 1b8de0 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xa0>
        1b8d7c:	e132000c 	teq	r2, ip
        1b8d80:	0a0000c5 	beq	1b909c <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x35c>
        1b8d84:	e59fc058 	ldr	ip, [pc, #58]	; 1b8de4 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xa4>
        1b8d88:	e132000c 	teq	r2, ip
        1b8d8c:	0a00007f 	beq	1b8f90 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x250>
        1b8d90:	e59fc050 	ldr	ip, [pc, #50]	; 1b8de8 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xa8>
        1b8d94:	e132000c 	teq	r2, ip
        1b8d98:	1a0000d2 	bne	1b90e8 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a8>
        1b8d9c:	e3350c01 	teq	r5, #256	; 0x100
        1b8da0:	13350c02 	teqne	r5, #512	; 0x200
        1b8da4:	1a0000cd 	bne	1b90e0 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        1b8da8:	e5d4028e 	ldrb	r0, [r4, #654]	; fField654
        1b8dac:	e3300000 	teq	r0, #0	; 0x0
        1b8db0:	0a0000ca 	beq	1b90e0 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        1b8db4:	e1a00004 	mov	r0, r4
        1b8db8:	e5b6100c 	ldr	r1, [r6, #12]!
        1b8dbc:	eb617fad 	bl	1a18c78 <TSerTool::$SendWakeUp(unsigned long)>
        1b8dc0:	e3300000 	teq	r0, #0	; 0x0
        1b8dc4:	1a0000c5 	bne	1b90e0 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        1b8dc8:	e1a00004 	mov	r0, r4
        1b8dcc:	e3a01001 	mov	r1, #1	; 0x1
        1b8dd0:	eb61a0b6 	bl	1a210b0 <TSerTool::$SetBreak(unsigned char)>
        1b8dd4:	ea0000d2 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b8dd8:	73636320 	cmnvc	r3, #-2147483648	; 0x80000000
        1b8ddc:	31776179 	cmncc	r7, r9, ror r1
        1b8de0:	73626176 	cmnvc	r2, #-2147483619	; 0x8000001d
        1b8de4:	73627073 	cmnvc	r2, #115	; 0x73
        1b8de8:	7362726b 	cmnvc	r2, #-1342177274	; 0xb0000006
        1b8dec:	e59fc050 	ldr	ip, [pc, #50]	; 1b8e44 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x104>
        1b8df0:	e132000c 	teq	r2, ip
        1b8df4:	0a000029 	beq	1b8ea0 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x160>
        1b8df8:	e59fc048 	ldr	ip, [pc, #48]	; 1b8e48 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x108>
        1b8dfc:	e132000c 	teq	r2, ip
        1b8e00:	0a000073 	beq	1b8fd4 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x294>
        1b8e04:	e59fc040 	ldr	ip, [pc, #40]	; 1b8e4c <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x10c>
        1b8e08:	e132000c 	teq	r2, ip
        1b8e0c:	0a000010 	beq	1b8e54 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x114>
        1b8e10:	e59fc038 	ldr	ip, [pc, #38]	; 1b8e50 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x110>
        1b8e14:	e132000c 	teq	r2, ip
        1b8e18:	1a0000b2 	bne	1b90e8 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a8>
        1b8e1c:	e2848fd1 	add	r8, r4, #836	; 0x344
        1b8e20:	e3350c01 	teq	r5, #256	; 0x100
        1b8e24:	13350c02 	teqne	r5, #512	; 0x200
        1b8e28:	1a00004a 	bne	1b8f58 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x218>
        1b8e2c:	e1a01006 	mov	r1, r6
        1b8e30:	e1a00004 	mov	r0, r4
        1b8e34:	e5942000 	ldr	r2, [r4]
        1b8e38:	e1a0e00f 	mov	lr, pc
        1b8e3c:	e282ff56 	add	pc, r2, #344	; 0x158
        1b8e40:	ea00004e 	b	1b8f80 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x240>
        1b8e44:	73636870 	cmnvc	r3, #7340032	; 0x700000
        1b8e48:	7363746c 	cmnvc	r3, #1811939328	; 0x6c000000
        1b8e4c:	73657273 	cmnvc	r5, #805306375	; 0x30000007
        1b8e50:	73696f70 	cmnvc	r9, #448	; 0x1c0
        1b8e54:	e3350c01 	teq	r5, #256	; 0x100
        1b8e58:	13350c02 	teqne	r5, #512	; 0x200
        1b8e5c:	1a000004 	bne	1b8e74 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x134>
        1b8e60:	e1a01006 	mov	r1, r6
        1b8e64:	e1a00004 	mov	r0, r4
        1b8e68:	e5942000 	ldr	r2, [r4]
        1b8e6c:	e2822f59 	add	r2, r2, #356	; 0x164
        1b8e70:	ea000024 	b	1b8f08 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c8>
        1b8e74:	e3350c03 	teq	r5, #768	; 0x300
        1b8e78:	12841e31 	addne	r1, r4, #784	; 0x310
        1b8e7c:	1a000040 	bne	1b8f84 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x244>
        1b8e80:	e24dd020 	sub	sp, sp, #32	; 0x20
        1b8e84:	e1a0000d 	mov	r0, sp
        1b8e88:	eb692cf8 	bl	1c04270 <TCMOSerialChipSpec::$__ct(void)>
        1b8e8c:	e1a0100d 	mov	r1, sp
        1b8e90:	e1a00006 	mov	r0, r6
        1b8e94:	eb67fb4d 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1b8e98:	e28dd020 	add	sp, sp, #32	; 0x20
        1b8e9c:	ea0000a0 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b8ea0:	e3350c01 	teq	r5, #256	; 0x100
        1b8ea4:	13350c02 	teqne	r5, #512	; 0x200
        1b8ea8:	1a000004 	bne	1b8ec0 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x180>
        1b8eac:	e1a01006 	mov	r1, r6
        1b8eb0:	e1a00004 	mov	r0, r4
        1b8eb4:	e5942000 	ldr	r2, [r4]
        1b8eb8:	e2822e16 	add	r2, r2, #352	; 0x160
        1b8ebc:	ea000011 	b	1b8f08 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c8>
        1b8ec0:	e3350c03 	teq	r5, #768	; 0x300
        1b8ec4:	15b4031c 	ldrne	r0, [r4, #796]!	; fField796
        1b8ec8:	1a00003f 	bne	1b8fcc <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x28c>
        1b8ecc:	e24dd014 	sub	sp, sp, #20	; 0x14
        1b8ed0:	e1a0000d 	mov	r0, sp
        1b8ed4:	eb692ce8 	bl	1c0427c <TCMOSerialHWChipLoc::$__ct(void)>
        1b8ed8:	e1a0100d 	mov	r1, sp
        1b8edc:	e1a00006 	mov	r0, r6
        1b8ee0:	eb67fb3a 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1b8ee4:	e28dd014 	add	sp, sp, #20	; 0x14
        1b8ee8:	ea00008d 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b8eec:	e3350c01 	teq	r5, #256	; 0x100
        1b8ef0:	13350c02 	teqne	r5, #512	; 0x200
        1b8ef4:	1a000006 	bne	1b8f14 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1d4>
        1b8ef8:	e1a01006 	mov	r1, r6
        1b8efc:	e1a00004 	mov	r0, r4
        1b8f00:	e5942000 	ldr	r2, [r4]
        1b8f04:	e2822f57 	add	r2, r2, #348	; 0x15c
        1b8f08:	e1a0e00f 	mov	lr, pc
        1b8f0c:	e1a0f002 	mov	pc, r2
        1b8f10:	ea000082 	b	1b9120 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e0>
        1b8f14:	e3350c03 	teq	r5, #768	; 0x300
        1b8f18:	1a000007 	bne	1b8f3c <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1fc>
        1b8f1c:	e24dd018 	sub	sp, sp, #24	; 0x18
        1b8f20:	e1a0000d 	mov	r0, sp
        1b8f24:	eb680fb8 	bl	1bbce0c <TCMOSerialHardware::$__ct(void)>
        1b8f28:	e1a0100d 	mov	r1, sp
        1b8f2c:	e1a00006 	mov	r0, r6
        1b8f30:	eb67fb26 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1b8f34:	e28dd018 	add	sp, sp, #24	; 0x18
        1b8f38:	ea000079 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b8f3c:	e59402fc 	ldr	r0, [r4, #764]	; fField764
        1b8f40:	e5860010 	str	r0, [r6, #16]
        1b8f44:	e59402f8 	ldr	r0, [r4, #760]	; fField760
        1b8f48:	e586000c 	str	r0, [r6, #12]
        1b8f4c:	e5b40300 	ldr	r0, [r4, #768]!	; fField768
        1b8f50:	e5a60014 	str	r0, [r6, #20]!
        1b8f54:	ea000072 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b8f58:	e3350c03 	teq	r5, #768	; 0x300
        1b8f5c:	1a000007 	bne	1b8f80 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x240>
        1b8f60:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1b8f64:	e1a0000d 	mov	r0, sp
        1b8f68:	eb680ba0 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
        1b8f6c:	e1a0100d 	mov	r1, sp
        1b8f70:	e1a00006 	mov	r0, r6
        1b8f74:	eb67fb15 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1b8f78:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1b8f7c:	ea000068 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b8f80:	e1a01008 	mov	r1, r8
        1b8f84:	e1a00006 	mov	r0, r6
        1b8f88:	eb67fb10 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1b8f8c:	ea000064 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b8f90:	e3350c01 	teq	r5, #256	; 0x100
        1b8f94:	13350c02 	teqne	r5, #512	; 0x200
        1b8f98:	1a000003 	bne	1b8fac <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x26c>
        1b8f9c:	e1a00004 	mov	r0, r4
        1b8fa0:	e596100c 	ldr	r1, [r6, #12]
        1b8fa4:	eb6151c8 	bl	1a0d6cc <TSerTool::$ChangeSpeed(unsigned long)>
        1b8fa8:	ea000007 	b	1b8fcc <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x28c>
        1b8fac:	e3350c03 	teq	r5, #768	; 0x300
        1b8fb0:	1a000004 	bne	1b8fc8 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x288>
        1b8fb4:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b8fb8:	e1a0000d 	mov	r0, sp
        1b8fbc:	eb680b88 	bl	1bbbde4 <TCMOSerialBitRate::$__ct(void)>
        1b8fc0:	e1a0100d 	mov	r1, sp
        1b8fc4:	ea000030 	b	1b908c <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x34c>
        1b8fc8:	e5b4035c 	ldr	r0, [r4, #860]!	; fField860
        1b8fcc:	e5a6000c 	str	r0, [r6, #12]!
        1b8fd0:	ea000053 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b8fd4:	e5d4028e 	ldrb	r0, [r4, #654]	; fField654
        1b8fd8:	e3300000 	teq	r0, #0	; 0x0
        1b8fdc:	13350c03 	teqne	r5, #768	; 0x300
        1b8fe0:	0a00003e 	beq	1b90e0 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        1b8fe4:	e3350c01 	teq	r5, #256	; 0x100
        1b8fe8:	13350c02 	teqne	r5, #512	; 0x200
        1b8fec:	1a000003 	bne	1b9000 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2c0>
        1b8ff0:	e5d6200d 	ldrb	r2, [r6, #13]
        1b8ff4:	e5d6100c 	ldrb	r1, [r6, #12]
        1b8ff8:	e1a00004 	mov	r0, r4
        1b8ffc:	eb61a033 	bl	1a210d0 <TSerTool::$SetSerialOutputs(unsigned long, unsigned long)>
        1b9000:	e1a00004 	mov	r0, r4
        1b9004:	eb619bea 	bl	1a1ffb4 <TSerTool::$GetSerialOutputs(void)>
        1b9008:	e5c6000e 	strb	r0, [r6, #14]
        1b900c:	e5d4037c 	ldrb	r0, [r4, #892]	; fField892
        1b9010:	e5c6000f 	strb	r0, [r6, #15]
        1b9014:	ea000042 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b9018:	e5d4028d 	ldrb	r0, [r4, #653]	; fField653
        1b901c:	e3300000 	teq	r0, #0	; 0x0
        1b9020:	0a00002e 	beq	1b90e0 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        1b9024:	e3350c01 	teq	r5, #256	; 0x100
        1b9028:	13350c02 	teqne	r5, #512	; 0x200
        1b902c:	1a00000f 	bne	1b9070 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x330>
        1b9030:	e5d6000c 	ldrb	r0, [r6, #12]
        1b9034:	e3300000 	teq	r0, #0	; 0x0
        1b9038:	0a000006 	beq	1b9058 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x318>
        1b903c:	e3a00001 	mov	r0, #1	; 0x1
        1b9040:	e5c40291 	strb	r0, [r4, #657]	; fField657
        1b9044:	e594130c 	ldr	r1, [r4, #780]	; fField780
        1b9048:	e3110002 	tst	r1, #2	; 0x2
        1b904c:	0a000034 	beq	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b9050:	e5c40292 	strb	r0, [r4, #658]	; fField658
        1b9054:	ea000032 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b9058:	e594030c 	ldr	r0, [r4, #780]	; fField780
        1b905c:	e3100040 	tst	r0, #64	; 0x40
        1b9060:	03a00000 	moveq	r0, #0	; 0x0
        1b9064:	05c40291 	streqb	r0, [r4, #657]	; fField657
        1b9068:	0afffff8 	beq	1b9050 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x310>
        1b906c:	ea00001b 	b	1b90e0 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        1b9070:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b9074:	e1a0000d 	mov	r0, sp
        1b9078:	eb693080 	bl	1c05280 <TCMOSerialHalfDuplex::$__ct(void)>
        1b907c:	e3350b01 	teq	r5, #1024	; 0x400
        1b9080:	05d40291 	ldreqb	r0, [r4, #657]	; fField657
        1b9084:	05cd000c 	streqb	r0, [sp, #12]
        1b9088:	e1a0100d 	mov	r1, sp
        1b908c:	e1a00006 	mov	r0, r6
        1b9090:	eb67face 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1b9094:	e28dd010 	add	sp, sp, #16	; 0x10
        1b9098:	ea000021 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b909c:	e3350c01 	teq	r5, #256	; 0x100
        1b90a0:	13350c02 	teqne	r5, #512	; 0x200
        1b90a4:	03e07002 	mvneq	r7, #2	; 0x2
        1b90a8:	0a00001d 	beq	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b90ac:	e5d4028e 	ldrb	r0, [r4, #654]	; fField654
        1b90b0:	e3300000 	teq	r0, #0	; 0x0
        1b90b4:	0a000009 	beq	1b90e0 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3a0>
        1b90b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b90bc:	e1a0100d 	mov	r1, sp
        1b90c0:	e1a00004 	mov	r0, r4
        1b90c4:	e5942000 	ldr	r2, [r4]
        1b90c8:	e1a0e00f 	mov	lr, pc
        1b90cc:	e282ff5a 	add	pc, r2, #360	; 0x168
        1b90d0:	e59d0000 	ldr	r0, [sp]
        1b90d4:	e5a6000c 	str	r0, [r6, #12]!
        1b90d8:	e28dd004 	add	sp, sp, #4	; 0x4
        1b90dc:	ea000010 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b90e0:	e3e07000 	mvn	r7, #0	; 0x0
        1b90e4:	ea00000e 	b	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b90e8:	e1a03005 	mov	r3, r5
        1b90ec:	e1a01006 	mov	r1, r6
        1b90f0:	e1a00004 	mov	r0, r4
        1b90f4:	eb61c507 	bl	1a2a518 <TCommTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
        1b90f8:	e1a07000 	mov	r7, r0
        1b90fc:	e3700006 	cmn	r0, #6	; 0x6
        1b9100:	13770004 	cmnne	r7, #4	; 0x4
        1b9104:	1a000006 	bne	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b9108:	e594030c 	ldr	r0, [r4, #780]	; fField780
        1b910c:	e3100002 	tst	r0, #2	; 0x2
        1b9110:	0a000003 	beq	1b9124 <TSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
        1b9114:	e1a01006 	mov	r1, r6
        1b9118:	e5b40304 	ldr	r0, [r4, #772]!	; fField772
        1b911c:	eb072eda 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
        1b9120:	e1a07000 	mov	r7, r0
        1b9124:	e1a00007 	mov	r0, r7
        1b9128:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::SetSerialChipSpec(TCMOSerialChipSpec *)
 * Address: 001b912c
 */
TSerTool::SetSerialChipSpec(TCMOSerialChipSpec *) {
    /*
        1b912c:	e1a0c00d 	mov	ip, sp
        1b9130:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b9134:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9138:	e1a04000 	mov	r4, r0
        1b913c:	e3a05000 	mov	r5, #0	; 0x0
        1b9140:	e5900304 	ldr	r0, [r0, #772]	; fField772
        1b9144:	e3300000 	teq	r0, #0	; 0x0
        1b9148:	1a000004 	bne	1b9160 <TSerTool::SetSerialChipSpec(TCMOSerialChipSpec *)+0x34>
        1b914c:	e2840e31 	add	r0, r4, #784	; 0x310
        1b9150:	eb67fa9e 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1b9154:	e3a00001 	mov	r0, #1	; 0x1
        1b9158:	e5c4028f 	strb	r0, [r4, #655]	; fField655
        1b915c:	ea000000 	b	1b9164 <TSerTool::SetSerialChipSpec(TCMOSerialChipSpec *)+0x38>
        1b9160:	e3e05000 	mvn	r5, #0	; 0x0
        1b9164:	e1a00005 	mov	r0, r5
        1b9168:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::SetSerialChipLocation(TCMOSerialHWChipLoc *)
 * Address: 001b916c
 */
TSerTool::SetSerialChipLocation(TCMOSerialHWChipLoc *) {
    /*
        1b916c:	e3a02000 	mov	r2, #0	; 0x0
        1b9170:	e5903304 	ldr	r3, [r0, #772]	; fField772
        1b9174:	e3330000 	teq	r3, #0	; 0x0
        1b9178:	1a000009 	bne	1b91a4 <TSerTool::SetSerialChipLocation(TCMOSerialHWChipLoc *)+0x38>
        1b917c:	e591300c 	ldr	r3, [r1, #12]
        1b9180:	e5911010 	ldr	r1, [r1, #16]
        1b9184:	e580331c 	str	r3, [r0, #796]	; fField796
        1b9188:	e3330000 	teq	r3, #0	; 0x0
        1b918c:	13a01001 	movne	r1, #1	; 0x1
        1b9190:	15c0128f 	strneb	r1, [r0, #655]	; fField655
        1b9194:	1a000003 	bne	1b91a8 <TSerTool::SetSerialChipLocation(TCMOSerialHWChipLoc *)+0x3c>
        1b9198:	e3310000 	teq	r1, #0	; 0x0
        1b919c:	15a01300 	strne	r1, [r0, #768]!	; fField768
        1b91a0:	ea000000 	b	1b91a8 <TSerTool::SetSerialChipLocation(TCMOSerialHWChipLoc *)+0x3c>
        1b91a4:	e3e02000 	mvn	r2, #0	; 0x0
        1b91a8:	e1a00002 	mov	r0, r2
        1b91ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerTool::SetSerialChipSelect(TCMOSerialHardware *)
 * Address: 001b91b0
 */
TSerTool::SetSerialChipSelect(TCMOSerialHardware *) {
    /*
        1b91b0:	e3a02000 	mov	r2, #0	; 0x0
        1b91b4:	e5903304 	ldr	r3, [r0, #772]	; fField772
        1b91b8:	e3330000 	teq	r3, #0	; 0x0
        1b91bc:	1a000006 	bne	1b91dc <TSerTool::SetSerialChipSelect(TCMOSerialHardware *)+0x2c>
        1b91c0:	e5913010 	ldr	r3, [r1, #16]
        1b91c4:	e58032fc 	str	r3, [r0, #764]	; fField764
        1b91c8:	e591300c 	ldr	r3, [r1, #12]
        1b91cc:	e58032f8 	str	r3, [r0, #760]	; fField760
        1b91d0:	e5911014 	ldr	r1, [r1, #20]
        1b91d4:	e5a01300 	str	r1, [r0, #768]!	; fField768
        1b91d8:	ea000000 	b	1b91e0 <TSerTool::SetSerialChipSelect(TCMOSerialHardware *)+0x30>
        1b91dc:	e3e02000 	mvn	r2, #0	; 0x0
        1b91e0:	e1a00002 	mov	r0, r2
        1b91e4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerTool::SetIOParms(TCMOSerialIOParms *)
 * Address: 001b91e8
 */
TSerTool::SetIOParms(TCMOSerialIOParms *) {
    /*
        1b91e8:	e1a0c00d 	mov	ip, sp
        1b91ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b91f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b91f4:	e1a04000 	mov	r4, r0
        1b91f8:	e1a05001 	mov	r5, r1
        1b91fc:	e2800fd1 	add	r0, r0, #836	; 0x344
        1b9200:	e1a06000 	mov	r6, r0
        1b9204:	eb67fa71 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1b9208:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1b920c:	e3300000 	teq	r0, #0	; 0x0
        1b9210:	11a01006 	movne	r1, r6
        1b9214:	1b072e8a 	blne	384c44 <TSerialChip::SetIOParms(TCMOSerialIOParms *)>
        1b9218:	e1a00004 	mov	r0, r4
        1b921c:	e5b51018 	ldr	r1, [r5, #24]!
        1b9220:	eb615129 	bl	1a0d6cc <TSerTool::$ChangeSpeed(unsigned long)>
        1b9224:	e5940358 	ldr	r0, [r4, #856]	; fField856
        1b9228:	e2600008 	rsb	r0, r0, #8	; 0x8
        1b922c:	e3a010ff 	mov	r1, #255	; 0xff
        1b9230:	e1a00031 	mov	r0, r1, lsr r0
        1b9234:	e5c4028a 	strb	r0, [r4, #650]	; fField650
        1b9238:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::TaskConstructor(void)
 * Address: 001b923c
 */
TSerTool::TaskConstructor(void) {
    /*
        1b923c:	e1a0c00d 	mov	ip, sp
        1b9240:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b9244:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9248:	e1a04000 	mov	r4, r0
        1b924c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b9250:	e3a05000 	mov	r5, #0	; 0x0
        1b9254:	e5805270 	str	r5, [r0, #624]	; fField624
        1b9258:	e580527c 	str	r5, [r0, #636]	; fField636
        1b925c:	e59f0110 	ldr	r0, [pc, #110]	; 1b9374 <TSerTool::TaskConstructor(void)+0x138>
        1b9260:	e5900000 	ldr	r0, [r0]
        1b9264:	e58402fc 	str	r0, [r4, #764]	; fField764
        1b9268:	e3a00001 	mov	r0, #1	; 0x1
        1b926c:	e58402f8 	str	r0, [r4, #760]	; fField760
        1b9270:	e5845300 	str	r5, [r4, #768]	; fField768
        1b9274:	e5c4528f 	strb	r5, [r4, #655]	; fField655
        1b9278:	e5845304 	str	r5, [r4, #772]	; fField772
        1b927c:	e5845308 	str	r5, [r4, #776]	; fField776
        1b9280:	e3a000ff 	mov	r0, #255	; 0xff
        1b9284:	e584530c 	str	r5, [r4, #780]	; fField780
        1b9288:	e5c4028a 	strb	r0, [r4, #650]	; fField650
        1b928c:	eb616180 	bl	1a11894 <$GetFIQTimerObject(void)>
        1b9290:	e5840330 	str	r0, [r4, #816]	; fField816
        1b9294:	eb69239d 	bl	1c02110 <$GetSerialChipRegistry(void)>
        1b9298:	e5840334 	str	r0, [r4, #820]	; fField820
        1b929c:	e5c4528b 	strb	r5, [r4, #651]	; fField651
        1b92a0:	e5c4528c 	strb	r5, [r4, #652]	; fField652
        1b92a4:	e5c4528d 	strb	r5, [r4, #653]	; fField653
        1b92a8:	e5c4528e 	strb	r5, [r4, #654]	; fField654
        1b92ac:	e5c45290 	strb	r5, [r4, #656]	; fField656
        1b92b0:	e5c45291 	strb	r5, [r4, #657]	; fField657
        1b92b4:	e58452cc 	str	r5, [r4, #716]	; fField716
        1b92b8:	e58d5004 	str	r5, [sp, #4]
        1b92bc:	e2841fb1 	add	r1, r4, #708	; 0x2c4
        1b92c0:	e58d5000 	str	r5, [sp]
        1b92c4:	e89d5000 	ldmia	sp, {ip, lr}
        1b92c8:	e8815000 	stmia	r1, {ip, lr}
        1b92cc:	e1a00004 	mov	r0, r4
        1b92d0:	eb681f71 	bl	1bc109c <TCommTool::$TaskConstructor(void)>
        1b92d4:	e1b05000 	movs	r5, r0
        1b92d8:	1a00004d 	bne	1b9414 <TSerTool::TaskConstructor(void)+0x1d8>
        1b92dc:	e594026c 	ldr	r0, [r4, #620]	; fField620
        1b92e0:	e3100003 	tst	r0, #3	; 0x3
        1b92e4:	0a000029 	beq	1b9390 <TSerTool::TaskConstructor(void)+0x154>
        1b92e8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1b92ec:	e1a0000d 	mov	r0, sp
        1b92f0:	e3a01000 	mov	r1, #0	; 0x0
        1b92f4:	eb6850e2 	bl	1bcd684 <TSystemEvent::$__ct(unsigned long)>
        1b92f8:	e594026c 	ldr	r0, [r4, #620]	; fField620
        1b92fc:	e3100002 	tst	r0, #2	; 0x2
        1b9300:	0a000009 	beq	1b932c <TSerTool::TaskConstructor(void)+0xf0>
        1b9304:	e1a0000d 	mov	r0, sp
        1b9308:	e59f1068 	ldr	r1, [pc, #68]	; 1b9378 <TSerTool::TaskConstructor(void)+0x13c>
        1b930c:	eb688aa9 	bl	1bdbdb8 <TSystemEvent::$SetEvent(unsigned long)>
        1b9310:	e1a0000d 	mov	r0, sp
        1b9314:	e3a03000 	mov	r3, #0	; 0x0
        1b9318:	e3a02000 	mov	r2, #0	; 0x0
        1b931c:	e594108c 	ldr	r1, [r4, #140]	; fField140
        1b9320:	eb687e4f 	bl	1bd8c64 <TSystemEvent::$RegisterForSystemEvent(unsigned long, unsigned long, unsigned long)>
        1b9324:	e1b05000 	movs	r5, r0
        1b9328:	1a00000c 	bne	1b9360 <TSerTool::TaskConstructor(void)+0x124>
        1b932c:	e594026c 	ldr	r0, [r4, #620]	; fField620
        1b9330:	e3100001 	tst	r0, #1	; 0x1
        1b9334:	0a000011 	beq	1b9380 <TSerTool::TaskConstructor(void)+0x144>
        1b9338:	e1a0000d 	mov	r0, sp
        1b933c:	e59f1038 	ldr	r1, [pc, #38]	; 1b937c <TSerTool::TaskConstructor(void)+0x140>
        1b9340:	eb688a9c 	bl	1bdbdb8 <TSystemEvent::$SetEvent(unsigned long)>
        1b9344:	e1a0000d 	mov	r0, sp
        1b9348:	e3a03000 	mov	r3, #0	; 0x0
        1b934c:	e3a02000 	mov	r2, #0	; 0x0
        1b9350:	e594108c 	ldr	r1, [r4, #140]	; fField140
        1b9354:	eb687e42 	bl	1bd8c64 <TSystemEvent::$RegisterForSystemEvent(unsigned long, unsigned long, unsigned long)>
        1b9358:	e1b05000 	movs	r5, r0
        1b935c:	0a000007 	beq	1b9380 <TSerTool::TaskConstructor(void)+0x144>
        1b9360:	e1a0000d 	mov	r0, sp
        1b9364:	e3a01000 	mov	r1, #0	; 0x0
        1b9368:	eb6854ed 	bl	1bce724 <TUObject::$__dt(void)>
        1b936c:	e28dd00c 	add	sp, sp, #12	; 0xc
        1b9370:	ea000027 	b	1b9414 <TSerTool::TaskConstructor(void)+0x1d8>
        1b9374:	0037772c 	eoreqs	r7, r7, ip, lsr #14
        1b9378:	70776f6e 	rsbvcs	r6, r7, lr, ror #30
        1b937c:	70776f66 	rsbvcs	r6, r7, r6, ror #30
        1b9380:	e1a0000d 	mov	r0, sp
        1b9384:	e3a01000 	mov	r1, #0	; 0x0
        1b9388:	eb6854e5 	bl	1bce724 <TUObject::$__dt(void)>
        1b938c:	e28dd00c 	add	sp, sp, #12	; 0xc
        1b9390:	e2840e36 	add	r0, r4, #864	; 0x360
        1b9394:	e1a06000 	mov	r6, r0
        1b9398:	e3a01001 	mov	r1, #1	; 0x1
        1b939c:	eb6871bc 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        1b93a0:	e1b05000 	movs	r5, r0
        1b93a4:	1a00001a 	bne	1b9414 <TSerTool::TaskConstructor(void)+0x1d8>
        1b93a8:	e5960000 	ldr	r0, [r6]
        1b93ac:	e5840370 	str	r0, [r4, #880]	; fField880
        1b93b0:	e59f6064 	ldr	r6, [pc, #64]	; 1b941c <TSerTool::TaskConstructor(void)+0x1e0>
        1b93b4:	e5846378 	str	r6, [r4, #888]	; fField888
        1b93b8:	e2840fb6 	add	r0, r4, #728	; 0x2d8
        1b93bc:	e1a07000 	mov	r7, r0
        1b93c0:	e3a01001 	mov	r1, #1	; 0x1
        1b93c4:	eb6871b2 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        1b93c8:	e1b05000 	movs	r5, r0
        1b93cc:	1a000010 	bne	1b9414 <TSerTool::TaskConstructor(void)+0x1d8>
        1b93d0:	e5970000 	ldr	r0, [r7]
        1b93d4:	e58402e8 	str	r0, [r4, #744]	; fField744
        1b93d8:	e58462f0 	str	r6, [r4, #752]	; fField752
        1b93dc:	e2840e2d 	add	r0, r4, #720	; 0x2d0
        1b93e0:	e3a01b01 	mov	r1, #1024	; 0x400
        1b93e4:	eb6875db 	bl	1bd6b58 <$LockStack>
        1b93e8:	e1b05000 	movs	r5, r0
        1b93ec:	1a000008 	bne	1b9414 <TSerTool::TaskConstructor(void)+0x1d8>
        1b93f0:	e1a00004 	mov	r0, r4
        1b93f4:	e5941000 	ldr	r1, [r4]
        1b93f8:	e1a0e00f 	mov	lr, pc
        1b93fc:	e281f004 	add	pc, r1, #4	; 0x4
        1b9400:	e0801004 	add	r1, r0, r4
        1b9404:	e1a00004 	mov	r0, r4
        1b9408:	e3a02001 	mov	r2, #1	; 0x1
        1b940c:	eb6875d0 	bl	1bd6b54 <$LockHeapRange>
        1b9410:	e1a05000 	mov	r5, r0
        1b9414:	e1a00005 	mov	r0, r5
        1b9418:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1b941c:	61736572 	cmnvs	r3, r2, ror r5
    */
}

/**
 * Symbol: TSerTool::ChangeSpeed(unsigned long)
 * Address: 001b9420
 */
TSerTool::ChangeSpeed(unsigned long) {
    /*
        1b9420:	e1a0c00d 	mov	ip, sp
        1b9424:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b9428:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b942c:	e1a04000 	mov	r4, r0
        1b9430:	e580135c 	str	r1, [r0, #860]	; fField860
        1b9434:	e5900304 	ldr	r0, [r0, #772]	; fField772
        1b9438:	e3300000 	teq	r0, #0	; 0x0
        1b943c:	03a00000 	moveq	r0, #0	; 0x0
        1b9440:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1b9444:	eb072dfb 	bl	384c38 <TSerialChip::SetSpeed(unsigned long)>
        1b9448:	e1a05000 	mov	r5, r0
        1b944c:	e584035c 	str	r0, [r4, #860]	; fField860
        1b9450:	e5d4028e 	ldrb	r0, [r4, #654]	; fField654
        1b9454:	e3300000 	teq	r0, #0	; 0x0
        1b9458:	0a000008 	beq	1b9480 <TSerTool::ChangeSpeed(unsigned long)+0x60>
        1b945c:	e594030c 	ldr	r0, [r4, #780]	; fField780
        1b9460:	e3100601 	tst	r0, #1048576	; 0x100000
        1b9464:	15940304 	ldrne	r0, [r4, #772]	; fField772
        1b9468:	1b072e3a 	blne	384d58 <TSerialChip::WaitForAllSent(void)>
        1b946c:	eb0765c7 	bl	392b90 <EnterFIQAtomic>
        1b9470:	e5b40304 	ldr	r0, [r4, #772]!	; fField772
        1b9474:	e3300000 	teq	r0, #0	; 0x0
        1b9478:	1b072df4 	blne	384c50 <TSerialChip::Reconfigure(void)>
        1b947c:	eb0765cb 	bl	392bb0 <ExitFIQAtomic>
        1b9480:	e1a00005 	mov	r0, r5
        1b9484:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::SendWakeUp(unsigned long)
 * Address: 001b9488
 */
TSerTool::SendWakeUp(unsigned long) {
    /*
        1b9488:	e1a0c00d 	mov	ip, sp
        1b948c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b9490:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9494:	e1a04000 	mov	r4, r0
        1b9498:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b949c:	e1a0000d 	mov	r0, sp
        1b94a0:	eb68927a 	bl	1bdde90 <$TimeFromNow>
        1b94a4:	e28d0008 	add	r0, sp, #8	; 0x8
        1b94a8:	e89d5000 	ldmia	sp, {ip, lr}
        1b94ac:	e8805000 	stmia	r0, {ip, lr}
        1b94b0:	e284c08c 	add	ip, r4, #140	; 0x8c
        1b94b4:	e284efb6 	add	lr, r4, #728	; 0x2d8
        1b94b8:	e2844fbb 	add	r4, r4, #748	; 0x2ec
        1b94bc:	e3a02000 	mov	r2, #0	; 0x0
        1b94c0:	e28d3008 	add	r3, sp, #8	; 0x8
        1b94c4:	e3a05000 	mov	r5, #0	; 0x0
        1b94c8:	e3a01000 	mov	r1, #0	; 0x0
        1b94cc:	e3a00001 	mov	r0, #1	; 0x1
        1b94d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1b94d4:	e1a03005 	mov	r3, r5
        1b94d8:	e3a02008 	mov	r2, #8	; 0x8
        1b94dc:	e92d000c 	stmdb	sp!, {r2, r3}
        1b94e0:	e1a03004 	mov	r3, r4
        1b94e4:	e1a0000c 	mov	r0, ip
        1b94e8:	e3a02000 	mov	r2, #0	; 0x0
        1b94ec:	e59e1000 	ldr	r1, [lr]
        1b94f0:	eb688614 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        1b94f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::KillWakeUp(void)
 * Address: 001b94f8
 */
TSerTool::KillWakeUp(void) {
    /*
        1b94f8:	e1a0c00d 	mov	ip, sp
        1b94fc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1b9500:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9504:	e2800fb6 	add	r0, r0, #728	; 0x2d8
        1b9508:	eb68548f 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        1b950c:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1b9510:	e37c0037 	cmn	ip, #55	; 0x37
        1b9514:	03a00000 	moveq	r0, #0	; 0x0
        1b9518:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::WakeUpHandler(void)
 * Address: 001b951c
 */
TSerTool::WakeUpHandler(void) {
    /*
        1b951c:	e3a01000 	mov	r1, #0	; 0x0
        1b9520:	ea619ee2 	b	1a210b0 <TSerTool::$SetBreak(unsigned char)>
    */
}

/**
 * Symbol: TSerTool::SetBreak(unsigned char)
 * Address: 001b9524
 */
TSerTool::SetBreak(unsigned char) {
    /*
        1b9524:	e1a0c00d 	mov	ip, sp
        1b9528:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b952c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9530:	e1a04000 	mov	r4, r0
        1b9534:	e20150ff 	and	r5, r1, #255	; 0xff
        1b9538:	eb076594 	bl	392b90 <EnterFIQAtomic>
        1b953c:	e5b40304 	ldr	r0, [r4, #772]!	; fField772
        1b9540:	e3300000 	teq	r0, #0	; 0x0
        1b9544:	11a01005 	movne	r1, r5
        1b9548:	1b072db7 	blne	384c2c <TSerialChip::SetBreak(unsigned char)>
        1b954c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1b9550:	ea076596 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TSerTool::SetTxDTransceiverEnable(unsigned char)
 * Address: 001b9554
 */
TSerTool::SetTxDTransceiverEnable(unsigned char) {
    /*
        1b9554:	e1a0c00d 	mov	ip, sp
        1b9558:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b955c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9560:	e1a04000 	mov	r4, r0
        1b9564:	e20150ff 	and	r5, r1, #255	; 0xff
        1b9568:	eb076588 	bl	392b90 <EnterFIQAtomic>
        1b956c:	e594030c 	ldr	r0, [r4, #780]	; fField780
        1b9570:	e3100004 	tst	r0, #4	; 0x4
        1b9574:	11a01005 	movne	r1, r5
        1b9578:	15b40304 	ldrne	r0, [r4, #772]!	; fField772
        1b957c:	1b072dcb 	blne	384cb0 <TSerialChip::SetTxDTransceiverEnable(unsigned char)>
        1b9580:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1b9584:	ea076589 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TSerTool::SetHSKo(unsigned char)
 * Address: 001b9588
 */
TSerTool::SetHSKo(unsigned char) {
    /*
        1b9588:	e1a0c00d 	mov	ip, sp
        1b958c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b9590:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9594:	e1a04000 	mov	r4, r0
        1b9598:	e20150ff 	and	r5, r1, #255	; 0xff
        1b959c:	eb07657b 	bl	392b90 <EnterFIQAtomic>
        1b95a0:	e5b40304 	ldr	r0, [r4, #772]!	; fField772
        1b95a4:	e3300000 	teq	r0, #0	; 0x0
        1b95a8:	0a000005 	beq	1b95c4 <TSerTool::SetHSKo(unsigned char)+0x3c>
        1b95ac:	e3350000 	teq	r5, #0	; 0x0
        1b95b0:	e3a01002 	mov	r1, #2	; 0x2
        1b95b4:	0a000001 	beq	1b95c0 <TSerTool::SetHSKo(unsigned char)+0x38>
        1b95b8:	eb072d83 	bl	384bcc <TSerialChip::SetSerialOutputs(unsigned long)>
        1b95bc:	ea000000 	b	1b95c4 <TSerTool::SetHSKo(unsigned char)+0x3c>
        1b95c0:	eb072d84 	bl	384bd8 <TSerialChip::ClearSerialOutputs(unsigned long)>
        1b95c4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1b95c8:	ea076578 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TSerTool::SetSerialOutputs(unsigned long, unsigned long)
 * Address: 001b95cc
 */
TSerTool::SetSerialOutputs(unsigned long, unsigned long) {
    /*
        1b95cc:	e1a0c00d 	mov	ip, sp
        1b95d0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b95d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b95d8:	e1a05000 	mov	r5, r0
        1b95dc:	e1a06001 	mov	r6, r1
        1b95e0:	e1a04002 	mov	r4, r2
        1b95e4:	eb076569 	bl	392b90 <EnterFIQAtomic>
        1b95e8:	e5950304 	ldr	r0, [r5, #772]	; fField772
        1b95ec:	e3300000 	teq	r0, #0	; 0x0
        1b95f0:	0a000006 	beq	1b9610 <TSerTool::SetSerialOutputs(unsigned long, unsigned long)+0x44>
        1b95f4:	e3360000 	teq	r6, #0	; 0x0
        1b95f8:	11a01006 	movne	r1, r6
        1b95fc:	1b072d72 	blne	384bcc <TSerialChip::SetSerialOutputs(unsigned long)>
        1b9600:	e3340000 	teq	r4, #0	; 0x0
        1b9604:	11a01004 	movne	r1, r4
        1b9608:	15b50304 	ldrne	r0, [r5, #772]!	; fField772
        1b960c:	1b072d71 	blne	384bd8 <TSerialChip::ClearSerialOutputs(unsigned long)>
        1b9610:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1b9614:	ea076565 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TSerTool::GetSerialOutputs(void)
 * Address: 001b9618
 */
TSerTool::GetSerialOutputs(void) {
    /*
        1b9618:	e1a0c00d 	mov	ip, sp
        1b961c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b9620:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9624:	e1a04000 	mov	r4, r0
        1b9628:	e3a05000 	mov	r5, #0	; 0x0
        1b962c:	eb076557 	bl	392b90 <EnterFIQAtomic>
        1b9630:	e5b40304 	ldr	r0, [r4, #772]!	; fField772
        1b9634:	e3300000 	teq	r0, #0	; 0x0
        1b9638:	0a000001 	beq	1b9644 <TSerTool::GetSerialOutputs(void)+0x2c>
        1b963c:	eb072d68 	bl	384be4 <TSerialChip::GetSerialOutputs(void)>
        1b9640:	e1a05000 	mov	r5, r0
        1b9644:	eb076559 	bl	392bb0 <ExitFIQAtomic>
        1b9648:	e1a00005 	mov	r0, r5
        1b964c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::TaskDestructor(void)
 * Address: 001b9650
 */
TSerTool::TaskDestructor(void) {
    /*
        1b9650:	e1a0c00d 	mov	ip, sp
        1b9654:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b9658:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b965c:	e1a04000 	mov	r4, r0
        1b9660:	e5900330 	ldr	r0, [r0, #816]	; fField816
        1b9664:	e1a01004 	mov	r1, r4
        1b9668:	eb617d66 	bl	1a18c08 <TFIQTimer::$ReleaseFIQTimers(void *)>
        1b966c:	e1a00004 	mov	r0, r4
        1b9670:	ebffffa0 	bl	1b94f8 <TSerTool::KillWakeUp(void)>
        1b9674:	e594026c 	ldr	r0, [r4, #620]	; fField620
        1b9678:	e3100003 	tst	r0, #3	; 0x3
        1b967c:	0a000019 	beq	1b96e8 <TSerTool::TaskDestructor(void)+0x98>
        1b9680:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1b9684:	e1a0000d 	mov	r0, sp
        1b9688:	e3a01000 	mov	r1, #0	; 0x0
        1b968c:	eb684ffc 	bl	1bcd684 <TSystemEvent::$__ct(unsigned long)>
        1b9690:	e594026c 	ldr	r0, [r4, #620]	; fField620
        1b9694:	e3100002 	tst	r0, #2	; 0x2
        1b9698:	0a000005 	beq	1b96b4 <TSerTool::TaskDestructor(void)+0x64>
        1b969c:	e1a0000d 	mov	r0, sp
        1b96a0:	e59f1054 	ldr	r1, [pc, #54]	; 1b96fc <TSerTool::TaskDestructor(void)+0xac>
        1b96a4:	eb6889c3 	bl	1bdbdb8 <TSystemEvent::$SetEvent(unsigned long)>
        1b96a8:	e1a0000d 	mov	r0, sp
        1b96ac:	e594108c 	ldr	r1, [r4, #140]	; fField140
        1b96b0:	eb6891fd 	bl	1bddeac <TSystemEvent::$UnRegisterForSystemEvent(unsigned long)>
        1b96b4:	e594026c 	ldr	r0, [r4, #620]	; fField620
        1b96b8:	e3100001 	tst	r0, #1	; 0x1
        1b96bc:	0a000005 	beq	1b96d8 <TSerTool::TaskDestructor(void)+0x88>
        1b96c0:	e1a0000d 	mov	r0, sp
        1b96c4:	e59f1034 	ldr	r1, [pc, #34]	; 1b9700 <TSerTool::TaskDestructor(void)+0xb0>
        1b96c8:	eb6889ba 	bl	1bdbdb8 <TSystemEvent::$SetEvent(unsigned long)>
        1b96cc:	e1a0000d 	mov	r0, sp
        1b96d0:	e594108c 	ldr	r1, [r4, #140]	; fField140
        1b96d4:	eb6891f4 	bl	1bddeac <TSystemEvent::$UnRegisterForSystemEvent(unsigned long)>
        1b96d8:	e1a0000d 	mov	r0, sp
        1b96dc:	e3a01000 	mov	r1, #0	; 0x0
        1b96e0:	eb68540f 	bl	1bce724 <TUObject::$__dt(void)>
        1b96e4:	e28dd00c 	add	sp, sp, #12	; 0xc
        1b96e8:	e1a00004 	mov	r0, r4
        1b96ec:	eb61961b 	bl	1a1ef60 <TSerTool::$CleanUp(void)>
        1b96f0:	e1a00004 	mov	r0, r4
        1b96f4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b96f8:	ea681e68 	b	1bc10a0 <TCommTool::$TaskDestructor(void)>
        1b96fc:	70776f6e 	rsbvcs	r6, r7, lr, ror #30
        1b9700:	70776f66 	rsbvcs	r6, r7, r6, ror #30
    */
}

/**
 * Symbol: TSerTool::DoControl(unsigned long, unsigned long)
 * Address: 001b9704
 */
TSerTool::DoControl(unsigned long, unsigned long) {
    /*
        1b9704:	e1a0c00d 	mov	ip, sp
        1b9708:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b970c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9710:	e1a04000 	mov	r4, r0
        1b9714:	e3a05000 	mov	r5, #0	; 0x0
        1b9718:	e3310c01 	teq	r1, #256	; 0x100
        1b971c:	11a00004 	movne	r0, r4
        1b9720:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1b9724:	1a681a27 	bne	1bbffc8 <TCommTool::$DoControl(unsigned long, unsigned long)>
        1b9728:	e5d40058 	ldrb	r0, [r4, #88]	; fField88
        1b972c:	e3300000 	teq	r0, #0	; 0x0
        1b9730:	e1a00004 	mov	r0, r4
        1b9734:	e5941000 	ldr	r1, [r4]
        1b9738:	02811f55 	addeq	r1, r1, #340	; 0x154
        1b973c:	12811e15 	addne	r1, r1, #336	; 0x150
        1b9740:	e1a0e00f 	mov	lr, pc
        1b9744:	e1a0f001 	mov	pc, r1
        1b9748:	e584529c 	str	r5, [r4, #668]	; fField668
        1b974c:	e2841fa5 	add	r1, r4, #660	; 0x294
        1b9750:	e1a00004 	mov	r0, r4
        1b9754:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1b9758:	ea6153fe 	b	1a0e758 <TSerTool::$ControlComplete(TCommToolReply &)>
    */
}

/**
 * Symbol: TSerTool::PutBytes(CBufferList *)
 * Address: 001b975c
 */
TSerTool::PutBytes(CBufferList *) {
    /*
        1b975c:	e1a02000 	mov	r2, r0
        1b9760:	e3a00000 	mov	r0, #0	; 0x0
        1b9764:	e5c20279 	strb	r0, [r2, #633]
        1b9768:	e5c20278 	strb	r0, [r2, #632]	; fField632
        1b976c:	e1a00002 	mov	r0, r2
        1b9770:	e5922000 	ldr	r2, [r2]
        1b9774:	e282ff5b 	add	pc, r2, #364	; 0x16c
    */
}

/**
 * Symbol: TSerTool::PutFramedBytes(CBufferList *, unsigned char)
 * Address: 001b9778
 */
TSerTool::PutFramedBytes(CBufferList *, unsigned char) {
    /*
        1b9778:	e1a03000 	mov	r3, r0
        1b977c:	e5c02278 	strb	r2, [r0, #632]	; fField632
        1b9780:	e3a00001 	mov	r0, #1	; 0x1
        1b9784:	e5c30279 	strb	r0, [r3, #633]
        1b9788:	e1a00003 	mov	r0, r3
        1b978c:	e5932000 	ldr	r2, [r3]
        1b9790:	e282ff5b 	add	pc, r2, #364	; 0x16c
    */
}

/**
 * Symbol: TSerTool::StartOutput(CBufferList *)
 * Address: 001b9794
 */
TSerTool::StartOutput(CBufferList *) {
    /*
        1b9794:	e1a0c00d 	mov	ip, sp
        1b9798:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b979c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b97a0:	e1a04000 	mov	r4, r0
        1b97a4:	e1a05001 	mov	r5, r1
        1b97a8:	e5d0028e 	ldrb	r0, [r0, #654]	; fField654
        1b97ac:	e3300000 	teq	r0, #0	; 0x0
        1b97b0:	0a000011 	beq	1b97fc <TSerTool::StartOutput(CBufferList *)+0x68>
        1b97b4:	e1a00005 	mov	r0, r5
        1b97b8:	e3e02000 	mvn	r2, #0	; 0x0
        1b97bc:	e3a01000 	mov	r1, #0	; 0x0
        1b97c0:	e5845270 	str	r5, [r4, #624]	; fField624
        1b97c4:	e5953000 	ldr	r3, [r5]
        1b97c8:	e1a0e00f 	mov	lr, pc
        1b97cc:	e283f038 	add	pc, r3, #56	; 0x38
        1b97d0:	e1a00005 	mov	r0, r5
        1b97d4:	e5951000 	ldr	r1, [r5]
        1b97d8:	e1a0e00f 	mov	lr, pc
        1b97dc:	e281f02c 	add	pc, r1, #44	; 0x2c
        1b97e0:	e5840274 	str	r0, [r4, #628]	; fField628
        1b97e4:	e3a00001 	mov	r0, #1	; 0x1
        1b97e8:	e5c4027a 	strb	r0, [r4, #634]	; fField634
        1b97ec:	e1a00004 	mov	r0, r4
        1b97f0:	e5941000 	ldr	r1, [r4]
        1b97f4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1b97f8:	e281fe17 	add	pc, r1, #368	; 0x170
        1b97fc:	e1a00004 	mov	r0, r4
        1b9800:	e3a02000 	mov	r2, #0	; 0x0
        1b9804:	e3e01f97 	mvn	r1, #604	; 0x25c
        1b9808:	e2411b11 	sub	r1, r1, #17408	; 0x4400
        1b980c:	e5943000 	ldr	r3, [r4]
        1b9810:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1b9814:	e283f0d4 	add	pc, r3, #212	; 0xd4
    */
}

/**
 * Symbol: TSerTool::PutComplete(long, unsigned long)
 * Address: 001b9818
 */
TSerTool::PutComplete(long, unsigned long) {
    /*
        1b9818:	e3a03000 	mov	r3, #0	; 0x0
        1b981c:	e5803270 	str	r3, [r0, #624]	; fField624
        1b9820:	ea681a0c 	b	1bc0058 <TCommTool::$PutComplete(long, unsigned long)>
    */
}

/**
 * Symbol: TSerTool::GetBytes(CBufferList *)
 * Address: 001b9824
 */
TSerTool::GetBytes(CBufferList *) {
    /*
        1b9824:	e1a02000 	mov	r2, r0
        1b9828:	e3a00000 	mov	r0, #0	; 0x0
        1b982c:	e5c20288 	strb	r0, [r2, #648]
        1b9830:	e5c20289 	strb	r0, [r2, #649]
        1b9834:	e1a00002 	mov	r0, r2
        1b9838:	e5922000 	ldr	r2, [r2]
        1b983c:	e282ff5d 	add	pc, r2, #372	; 0x174
    */
}

/**
 * Symbol: TSerTool::GetBytesImmediate(CBufferList *, long)
 * Address: 001b9840
 */
TSerTool::GetBytesImmediate(CBufferList *, long) {
    /*
        1b9840:	e1a03000 	mov	r3, r0
        1b9844:	e3a00000 	mov	r0, #0	; 0x0
        1b9848:	e5c30288 	strb	r0, [r3, #648]
        1b984c:	e3a00001 	mov	r0, #1	; 0x1
        1b9850:	e5c30289 	strb	r0, [r3, #649]
        1b9854:	e5832284 	str	r2, [r3, #644]
        1b9858:	e1a00003 	mov	r0, r3
        1b985c:	e5932000 	ldr	r2, [r3]
        1b9860:	e282ff5d 	add	pc, r2, #372	; 0x174
    */
}

/**
 * Symbol: TSerTool::GetFramedBytes(CBufferList *)
 * Address: 001b9864
 */
TSerTool::GetFramedBytes(CBufferList *) {
    /*
        1b9864:	e1a02000 	mov	r2, r0
        1b9868:	e3a00001 	mov	r0, #1	; 0x1
        1b986c:	e5c20288 	strb	r0, [r2, #648]
        1b9870:	e3a00000 	mov	r0, #0	; 0x0
        1b9874:	e5c20289 	strb	r0, [r2, #649]
        1b9878:	e1a00002 	mov	r0, r2
        1b987c:	e5922000 	ldr	r2, [r2]
        1b9880:	e282ff5d 	add	pc, r2, #372	; 0x174
    */
}

/**
 * Symbol: TSerTool::StartInput(CBufferList *)
 * Address: 001b9884
 */
TSerTool::StartInput(CBufferList *) {
    /*
        1b9884:	e1a0c00d 	mov	ip, sp
        1b9888:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b988c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9890:	e1a04000 	mov	r4, r0
        1b9894:	e1a05001 	mov	r5, r1
        1b9898:	e1a00001 	mov	r0, r1
        1b989c:	e584127c 	str	r1, [r4, #636]	; fField636
        1b98a0:	e1a03001 	mov	r3, r1
        1b98a4:	e3e02000 	mvn	r2, #0	; 0x0
        1b98a8:	e3a01000 	mov	r1, #0	; 0x0
        1b98ac:	e5933000 	ldr	r3, [r3]
        1b98b0:	e1a0e00f 	mov	lr, pc
        1b98b4:	e283f038 	add	pc, r3, #56	; 0x38
        1b98b8:	e1a00005 	mov	r0, r5
        1b98bc:	e5951000 	ldr	r1, [r5]
        1b98c0:	e1a0e00f 	mov	lr, pc
        1b98c4:	e281f02c 	add	pc, r1, #44	; 0x2c
        1b98c8:	e5840280 	str	r0, [r4, #640]	; fField640
        1b98cc:	e5d4028e 	ldrb	r0, [r4, #654]	; fField654
        1b98d0:	e3300000 	teq	r0, #0	; 0x0
        1b98d4:	e1a00004 	mov	r0, r4
        1b98d8:	15941000 	ldrne	r1, [r4]
        1b98dc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1b98e0:	1281ff5e 	addne	pc, r1, #376	; 0x178
        1b98e4:	e3a03000 	mov	r3, #0	; 0x0
        1b98e8:	e3a02000 	mov	r2, #0	; 0x0
        1b98ec:	e3e01f97 	mvn	r1, #604	; 0x25c
        1b98f0:	e2411b11 	sub	r1, r1, #17408	; 0x4400
        1b98f4:	e594c000 	ldr	ip, [r4]
        1b98f8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1b98fc:	e28cf0ec 	add	pc, ip, #236	; 0xec
    */
}

/**
 * Symbol: TSerTool::CleanUp(void)
 * Address: 001b9900
 */
TSerTool::CleanUp(void) {
    /*
        1b9900:	e1a0c00d 	mov	ip, sp
        1b9904:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b9908:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b990c:	e1a04000 	mov	r4, r0
        1b9910:	e5d0028e 	ldrb	r0, [r0, #654]	; fField654
        1b9914:	e3300000 	teq	r0, #0	; 0x0
        1b9918:	0a000003 	beq	1b992c <TSerTool::CleanUp(void)+0x2c>
        1b991c:	e1a00004 	mov	r0, r4
        1b9920:	e5941000 	ldr	r1, [r4]
        1b9924:	e1a0e00f 	mov	lr, pc
        1b9928:	e281fd05 	add	pc, r1, #320	; 0x140
        1b992c:	e5d4028d 	ldrb	r0, [r4, #653]	; fField653
        1b9930:	e3300000 	teq	r0, #0	; 0x0
        1b9934:	0a000003 	beq	1b9948 <TSerTool::CleanUp(void)+0x48>
        1b9938:	e1a00004 	mov	r0, r4
        1b993c:	e5941000 	ldr	r1, [r4]
        1b9940:	e1a0e00f 	mov	lr, pc
        1b9944:	e281ff51 	add	pc, r1, #324	; 0x144
        1b9948:	e5d4028b 	ldrb	r0, [r4, #651]	; fField651
        1b994c:	e3300000 	teq	r0, #0	; 0x0
        1b9950:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1b9954:	e1a00004 	mov	r0, r4
        1b9958:	e5941000 	ldr	r1, [r4]
        1b995c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b9960:	e281ff53 	add	pc, r1, #332	; 0x14c
    */
}

/**
 * Symbol: TSerTool::GetComplete(long, unsigned char, unsigned long)
 * Address: 001b9964
 */
TSerTool::GetComplete(long, unsigned char, unsigned long) {
    /*
        1b9964:	e1a0c00d 	mov	ip, sp
        1b9968:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b996c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9970:	e1a04000 	mov	r4, r0
        1b9974:	e1a06001 	mov	r6, r1
        1b9978:	e1a05003 	mov	r5, r3
        1b997c:	e20270ff 	and	r7, r2, #255	; 0xff
        1b9980:	e5901280 	ldr	r1, [r0, #640]	; fField640
        1b9984:	e590327c 	ldr	r3, [r0, #636]	; fField636
        1b9988:	e1a00003 	mov	r0, r3
        1b998c:	e3a02001 	mov	r2, #1	; 0x1
        1b9990:	e5933000 	ldr	r3, [r3]
        1b9994:	e1a0e00f 	mov	lr, pc
        1b9998:	e283f034 	add	pc, r3, #52	; 0x34
        1b999c:	e3a00000 	mov	r0, #0	; 0x0
        1b99a0:	e1a03005 	mov	r3, r5
        1b99a4:	e1a02007 	mov	r2, r7
        1b99a8:	e1a01006 	mov	r1, r6
        1b99ac:	e584027c 	str	r0, [r4, #636]	; fField636
        1b99b0:	e1a00004 	mov	r0, r4
        1b99b4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1b99b8:	ea681989 	b	1bbffe4 <TCommTool::$GetComplete(long, unsigned char, unsigned long)>
    */
}

/**
 * Symbol: TSerTool::ControlComplete(TCommToolReply &)
 * Address: 001b99bc
 */
TSerTool::ControlComplete(TCommToolReply &) {
    /*
        1b99bc:	e5912008 	ldr	r2, [r1, #8]
        1b99c0:	e1a03001 	mov	r3, r1
        1b99c4:	e3a01002 	mov	r1, #2	; 0x2
        1b99c8:	ea680d29 	b	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
    */
}

/**
 * Symbol: TSerTool::GetCommEvent(void)
 * Address: 001b99cc
 */
TSerTool::GetCommEvent(void) {
    /*
        1b99cc:	e1a0c00d 	mov	ip, sp
        1b99d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b99d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b99d8:	e1a04000 	mov	r4, r0
        1b99dc:	eb617452 	bl	1a16b2c <TSerTool::$PostSerialEvent(void)>
        1b99e0:	e280cdfa 	add	ip, r0, #16000	; 0x3e80
        1b99e4:	e37c0010 	cmn	ip, #16	; 0x10
        1b99e8:	01a00004 	moveq	r0, r4
        1b99ec:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        1b99f0:	0a68197a 	beq	1bbffe0 <TCommTool::$GetCommEvent(void)>
        1b99f4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::PostSerialEvent(void)
 * Address: 001b99f8
 */
TSerTool::PostSerialEvent(void) {
    /*
        1b99f8:	e1a0c00d 	mov	ip, sp
        1b99fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b9a00:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9a04:	e1a04000 	mov	r4, r0
        1b9a08:	e3a00e17 	mov	r0, #368	; 0x170
        1b9a0c:	e2400901 	sub	r0, r0, #16384	; 0x4000
        1b9a10:	e59412cc 	ldr	r1, [r4, #716]	; fField716
        1b9a14:	e3310000 	teq	r1, #0	; 0x0
        1b9a18:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1b9a1c:	e24dd024 	sub	sp, sp, #36	; 0x24
        1b9a20:	e1a0000d 	mov	r0, sp
        1b9a24:	eb68d767 	bl	1bef7c8 <TCommToolGetEventReply::$__ct(void)>
        1b9a28:	e3a00001 	mov	r0, #1	; 0x1
        1b9a2c:	e58d0010 	str	r0, [sp, #16]
        1b9a30:	e28d0014 	add	r0, sp, #20	; 0x14
        1b9a34:	e2845fb1 	add	r5, r4, #708	; 0x2c4
        1b9a38:	e8955000 	ldmia	r5, {ip, lr}
        1b9a3c:	e8805000 	stmia	r0, {ip, lr}
        1b9a40:	e59402cc 	ldr	r0, [r4, #716]	; fField716
        1b9a44:	e58d001c 	str	r0, [sp, #28]
        1b9a48:	e5940204 	ldr	r0, [r4, #516]	; fField516
        1b9a4c:	e58d0020 	str	r0, [sp, #32]
        1b9a50:	e5d4037c 	ldrb	r0, [r4, #892]	; fField892
        1b9a54:	e200003f 	and	r0, r0, #63	; 0x3f
        1b9a58:	e59d101c 	ldr	r1, [sp, #28]
        1b9a5c:	e1810c00 	orr	r0, r1, r0, lsl #24
        1b9a60:	e58d001c 	str	r0, [sp, #28]
        1b9a64:	e1a0100d 	mov	r1, sp
        1b9a68:	e1a00004 	mov	r0, r4
        1b9a6c:	e3a02000 	mov	r2, #0	; 0x0
        1b9a70:	e5943000 	ldr	r3, [r4]
        1b9a74:	e1a0e00f 	mov	lr, pc
        1b9a78:	e283f03c 	add	pc, r3, #60	; 0x3c
        1b9a7c:	e3300000 	teq	r0, #0	; 0x0
        1b9a80:	1a000006 	bne	1b9aa0 <TSerTool::PostSerialEvent(void)+0xa8>
        1b9a84:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b9a88:	e3a00000 	mov	r0, #0	; 0x0
        1b9a8c:	e5a402cc 	str	r0, [r4, #716]!	; fField716
        1b9a90:	e58d0004 	str	r0, [sp, #4]
        1b9a94:	e58d0000 	str	r0, [sp]
        1b9a98:	e8bd5000 	ldmia	sp!, {ip, lr}
        1b9a9c:	e8855000 	stmia	r5, {ip, lr}
        1b9aa0:	e3a00000 	mov	r0, #0	; 0x0
        1b9aa4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::PowerOnEvent(unsigned long)
 * Address: 001b9aa8
 */
TSerTool::PowerOnEvent(unsigned long) {
    /*
        1b9aa8:	e1a01000 	mov	r1, r0
        1b9aac:	e5d0028e 	ldrb	r0, [r0, #654]	; fField654
        1b9ab0:	e3300000 	teq	r0, #0	; 0x0
        1b9ab4:	05d10290 	ldreqb	r0, [r1, #656]	; fField656
        1b9ab8:	03300000 	teqeq	r0, #0	; 0x0
        1b9abc:	01a0f00e 	moveq	pc, lr
        1b9ac0:	e3a00000 	mov	r0, #0	; 0x0
        1b9ac4:	e5c1028e 	strb	r0, [r1, #654]	; fField654
        1b9ac8:	e1a00001 	mov	r0, r1
        1b9acc:	e5911000 	ldr	r1, [r1]
        1b9ad0:	e281ff4f 	add	pc, r1, #316	; 0x13c
    */
}

/**
 * Symbol: TSerTool::PowerOffEvent(unsigned long)
 * Address: 001b9ad4
 */
TSerTool::PowerOffEvent(unsigned long) {
    /*
        1b9ad4:	e1a01000 	mov	r1, r0
        1b9ad8:	e5d0028e 	ldrb	r0, [r0, #654]	; fField654
        1b9adc:	e3300000 	teq	r0, #0	; 0x0
        1b9ae0:	01a0f00e 	moveq	pc, lr
        1b9ae4:	e3a00001 	mov	r0, #1	; 0x1
        1b9ae8:	e5c10290 	strb	r0, [r1, #656]	; fField656
        1b9aec:	e1a00001 	mov	r0, r1
        1b9af0:	e5911000 	ldr	r1, [r1]
        1b9af4:	e281fd05 	add	pc, r1, #320	; 0x140
    */
}

/**
 * Symbol: TSerTool::HandleRequest(TUMsgToken &, unsigned long)
 * Address: 001b9af8
 */
TSerTool::HandleRequest(TUMsgToken &, unsigned long) {
    /*
        1b9af8:	e1a0c00d 	mov	ip, sp
        1b9afc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b9b00:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9b04:	e1a04000 	mov	r4, r0
        1b9b08:	e1a05001 	mov	r5, r1
        1b9b0c:	e3a06000 	mov	r6, #0	; 0x0
        1b9b10:	e5910000 	ldr	r0, [r1]
        1b9b14:	e5941370 	ldr	r1, [r4, #880]	; fField880
        1b9b18:	e1310000 	teq	r1, r0
        1b9b1c:	01a00004 	moveq	r0, r4
        1b9b20:	05941000 	ldreq	r1, [r4]
        1b9b24:	02811f61 	addeq	r1, r1, #388	; 0x184
        1b9b28:	0a000005 	beq	1b9b44 <TSerTool::HandleRequest(TUMsgToken &, unsigned long)+0x4c>
        1b9b2c:	e59412e8 	ldr	r1, [r4, #744]	; fField744
        1b9b30:	e1310000 	teq	r1, r0
        1b9b34:	1a000009 	bne	1b9b60 <TSerTool::HandleRequest(TUMsgToken &, unsigned long)+0x68>
        1b9b38:	e1a00004 	mov	r0, r4
        1b9b3c:	e5941000 	ldr	r1, [r4]
        1b9b40:	e2811f62 	add	r1, r1, #392	; 0x188
        1b9b44:	e1a0e00f 	mov	lr, pc
        1b9b48:	e1a0f001 	mov	pc, r1
        1b9b4c:	e1a02006 	mov	r2, r6
        1b9b50:	e1a01005 	mov	r1, r5
        1b9b54:	e1a00004 	mov	r0, r4
        1b9b58:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1b9b5c:	ea680cc5 	b	1bbce78 <TCommTool::$CompleteRequest(TUMsgToken &, long)>
        1b9b60:	e284604c 	add	r6, r4, #76	; 0x4c
        1b9b64:	e5967008 	ldr	r7, [r6, #8]
        1b9b68:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1b9b6c:	e350000c 	cmp	r0, #12	; 0xc
        1b9b70:	3a00001e 	bcc	1b9bf0 <TSerTool::HandleRequest(TUMsgToken &, unsigned long)+0xf8>
        1b9b74:	e5960004 	ldr	r0, [r6, #4]
        1b9b78:	e59fc080 	ldr	ip, [pc, #80]	; 1b9c00 <TSerTool::HandleRequest(TUMsgToken &, unsigned long)+0x108>
        1b9b7c:	e130000c 	teq	r0, ip
        1b9b80:	1a00001a 	bne	1b9bf0 <TSerTool::HandleRequest(TUMsgToken &, unsigned long)+0xf8>
        1b9b84:	e59fc078 	ldr	ip, [pc, #78]	; 1b9c04 <TSerTool::HandleRequest(TUMsgToken &, unsigned long)+0x10c>
        1b9b88:	e137000c 	teq	r7, ip
        1b9b8c:	1a000004 	bne	1b9ba4 <TSerTool::HandleRequest(TUMsgToken &, unsigned long)+0xac>
        1b9b90:	e1a00004 	mov	r0, r4
        1b9b94:	e596100c 	ldr	r1, [r6, #12]
        1b9b98:	e5942000 	ldr	r2, [r4]
        1b9b9c:	e1a0e00f 	mov	lr, pc
        1b9ba0:	e282ff4b 	add	pc, r2, #300	; 0x12c
        1b9ba4:	e594030c 	ldr	r0, [r4, #780]	; fField780
        1b9ba8:	e3100002 	tst	r0, #2	; 0x2
        1b9bac:	11a01007 	movne	r1, r7
        1b9bb0:	15940304 	ldrne	r0, [r4, #772]	; fField772
        1b9bb4:	1b072c3a 	blne	384ca4 <TSerialChip::SysEventNotify(unsigned long)>
        1b9bb8:	e59fc048 	ldr	ip, [pc, #48]	; 1b9c08 <TSerTool::HandleRequest(TUMsgToken &, unsigned long)+0x110>
        1b9bbc:	e137000c 	teq	r7, ip
        1b9bc0:	1a000004 	bne	1b9bd8 <TSerTool::HandleRequest(TUMsgToken &, unsigned long)+0xe0>
        1b9bc4:	e1a00004 	mov	r0, r4
        1b9bc8:	e5b6100c 	ldr	r1, [r6, #12]!
        1b9bcc:	e5942000 	ldr	r2, [r4]
        1b9bd0:	e1a0e00f 	mov	lr, pc
        1b9bd4:	e282ff4a 	add	pc, r2, #296	; 0x128
        1b9bd8:	e1a00005 	mov	r0, r5
        1b9bdc:	e3a03000 	mov	r3, #0	; 0x0
        1b9be0:	e3a02000 	mov	r2, #0	; 0x0
        1b9be4:	e3a01000 	mov	r1, #0	; 0x0
        1b9be8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1b9bec:	ea68803e 	b	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        1b9bf0:	e1a01005 	mov	r1, r5
        1b9bf4:	e1a00004 	mov	r0, r4
        1b9bf8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1b9bfc:	ea6818fe 	b	1bbfffc <TCommTool::$HandleRequest(TUMsgToken &, unsigned long)>
        1b9c00:	7379736d 	cmnvc	r9, #-1275068415	; 0xb4000001
        1b9c04:	70776f66 	rsbvcs	r6, r7, r6, ror #30
        1b9c08:	70776f6e 	rsbvcs	r6, r7, lr, ror #30
    */
}

/**
 * Symbol: TSerTool::IHRequest(unsigned long)
 * Address: 001b9c0c
 */
TSerTool::IHRequest(unsigned long) {
    /*
        1b9c0c:	e1a0c00d 	mov	ip, sp
        1b9c10:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b9c14:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9c18:	e1a04000 	mov	r4, r0
        1b9c1c:	e3310000 	teq	r1, #0	; 0x0
        1b9c20:	0a000011 	beq	1b9c6c <TSerTool::IHRequest(unsigned long)+0x60>
        1b9c24:	e24dd010 	sub	sp, sp, #16	; 0x10
        1b9c28:	e1a0000d 	mov	r0, sp
        1b9c2c:	eb689097 	bl	1bdde90 <$TimeFromNow>
        1b9c30:	e28d1008 	add	r1, sp, #8	; 0x8
        1b9c34:	e89d5000 	ldmia	sp, {ip, lr}
        1b9c38:	e8815000 	stmia	r1, {ip, lr}
        1b9c3c:	e3a03001 	mov	r3, #1	; 0x1
        1b9c40:	e28d2008 	add	r2, sp, #8	; 0x8
        1b9c44:	e3a01000 	mov	r1, #0	; 0x0
        1b9c48:	e3a00301 	mov	r0, #67108864	; 0x4000000
        1b9c4c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1b9c50:	e3a03000 	mov	r3, #0	; 0x0
        1b9c54:	e92d0008 	stmdb	sp!, {r3}
        1b9c58:	e3a02000 	mov	r2, #0	; 0x0
        1b9c5c:	e5b4008c 	ldr	r0, [r4, #140]!	; fField140
        1b9c60:	e5b412e4 	ldr	r1, [r4, #740]!	; fField740
        1b9c64:	eb688436 	bl	1bdad44 <$SendForInterrupt__FUlN21PvN31P5TTimeUc>
        1b9c68:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1b9c6c:	e3a03001 	mov	r3, #1	; 0x1
        1b9c70:	e3a02000 	mov	r2, #0	; 0x0
        1b9c74:	e3a01000 	mov	r1, #0	; 0x0
        1b9c78:	e3a00301 	mov	r0, #67108864	; 0x4000000
        1b9c7c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1b9c80:	e3a03000 	mov	r3, #0	; 0x0
        1b9c84:	e92d0008 	stmdb	sp!, {r3}
        1b9c88:	e5b4008c 	ldr	r0, [r4, #140]!	; fField140
        1b9c8c:	e5b412e4 	ldr	r1, [r4, #740]!	; fField740
        1b9c90:	eb68842b 	bl	1bdad44 <$SendForInterrupt__FUlN21PvN31P5TTimeUc>
        1b9c94:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerTool::BindStart(void)
 * Address: 001b9c98
 */
TSerTool::BindStart(void) {
    /*
        1b9c98:	e1a0c00d 	mov	ip, sp
        1b9c9c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b9ca0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9ca4:	e1a04000 	mov	r4, r0
        1b9ca8:	e5901000 	ldr	r1, [r0]
        1b9cac:	e1a0e00f 	mov	lr, pc
        1b9cb0:	e281fe13 	add	pc, r1, #304	; 0x130
        1b9cb4:	e1b01000 	movs	r1, r0
        1b9cb8:	1a000002 	bne	1b9cc8 <TSerTool::BindStart(void)+0x30>
        1b9cbc:	e5d401d2 	ldrb	r0, [r4, #466]	; fField466
        1b9cc0:	e3300000 	teq	r0, #0	; 0x0
        1b9cc4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1b9cc8:	e1a00004 	mov	r0, r4
        1b9ccc:	e5942000 	ldr	r2, [r4]
        1b9cd0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b9cd4:	e282f078 	add	pc, r2, #120	; 0x78
    */
}

/**
 * Symbol: TSerTool::UnbindStart(void)
 * Address: 001b9cd8
 */
TSerTool::UnbindStart(void) {
    /*
        1b9cd8:	e1a0c00d 	mov	ip, sp
        1b9cdc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b9ce0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9ce4:	e1a04000 	mov	r4, r0
        1b9ce8:	e5901000 	ldr	r1, [r0]
        1b9cec:	e1a0e00f 	mov	lr, pc
        1b9cf0:	e281ff53 	add	pc, r1, #332	; 0x14c
        1b9cf4:	e1a00004 	mov	r0, r4
        1b9cf8:	e3a01000 	mov	r1, #0	; 0x0
        1b9cfc:	e5942000 	ldr	r2, [r4]
        1b9d00:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1b9d04:	e282f080 	add	pc, r2, #128	; 0x80
    */
}

