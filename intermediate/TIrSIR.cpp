#include "include/TIrSIR.h"

/**
 * Symbol: TIrSIR::__ct(TCircleBuf *, TCircleBuf *)
 * Address: 000f852c
 */
TIrSIR::TIrSIR(TCircleBuf *, TCircleBuf *) {
    /*
         f852c:	e1a0c00d 	mov	ip, sp
         f8530:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f8534:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8538:	e1b04000 	movs	r4, r0
         f853c:	e1a06001 	mov	r6, r1
         f8540:	e1a05002 	mov	r5, r2
         f8544:	1a000003 	bne	f8558 <TIrSIR::__ct(TCircleBuf *, TCircleBuf *)+0x2c>
         f8548:	e3a00060 	mov	r0, #96	; 0x60
         f854c:	eb6b5879 	bl	1bce738 <$__nw(unsigned int)>
         f8550:	e1b04000 	movs	r4, r0
         f8554:	0a000008 	beq	f857c <TIrSIR::__ct(TCircleBuf *, TCircleBuf *)+0x50>
         f8558:	e284002c 	add	r0, r4, #44	; 0x2c
         f855c:	eb64d874 	bl	1a2e734 <TIrCRC16::$Reset(void)>
         f8560:	e2840038 	add	r0, r4, #56	; 0x38
         f8564:	eb6b0e12 	bl	1bbbdb4 <TCMOSlowIRStats::$__ct(void)>
         f8568:	e59f0014 	ldr	r0, [pc, #14]	; f8584 <TIrSIR::__ct(TCircleBuf *, TCircleBuf *)+0x58>
         f856c:	e8840041 	stmia	r4, {r0, r6}
         f8570:	e5845008 	str	r5, [r4, #8]	; fField8
         f8574:	e1a00004 	mov	r0, r4
         f8578:	eb64fd90 	bl	1a37bc0 <TIrSIR::$Reset(void)>
         f857c:	e1a00004 	mov	r0, r4
         f8580:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f8584:	0001f9a4 	andeq	pc, r1, r4, lsr #19
    */
}

/**
 * Symbol: TIrSIR::__dt(void)
 * Address: 000f8588
 */
TIrSIR::~TIrSIR(void) {
    /*
         f8588:	e59f200c 	ldr	r2, [pc, #c]	; f859c <TIrSIR::__dt(void)+0x14>
         f858c:	e3110001 	tst	r1, #1	; 0x1
         f8590:	e5802000 	str	r2, [r0]
         f8594:	1a6b5451 	bne	1bcd6e0 <$__dl(void *)>
         f8598:	e1a0f00e 	mov	pc, lr
         f859c:	0001f9a4 	andeq	pc, r1, r4, lsr #19
    */
}

/**
 * Symbol: TIrSIR::ReceivingInput(void)
 * Address: 000f85a0
 */
TIrSIR::ReceivingInput(void) {
    /*
         f85a0:	e1a0c00d 	mov	ip, sp
         f85a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f85a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f85ac:	e1a04000 	mov	r4, r0
         f85b0:	e5900004 	ldr	r0, [r0, #4]	; fField4
         f85b4:	eb6c375c 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
         f85b8:	e3300000 	teq	r0, #0	; 0x0
         f85bc:	05d40025 	ldreqb	r0, [r4, #37]	; fField37
         f85c0:	03300000 	teqeq	r0, #0	; 0x0
         f85c4:	05d40022 	ldreqb	r0, [r4, #34]	; fField34
         f85c8:	03300000 	teqeq	r0, #0	; 0x0
         f85cc:	05b40028 	ldreq	r0, [r4, #40]!	; fField40
         f85d0:	03300000 	teqeq	r0, #0	; 0x0
         f85d4:	13a00001 	movne	r0, #1	; 0x1
         f85d8:	03a00000 	moveq	r0, #0	; 0x0
         f85dc:	e20000ff 	and	r0, r0, #255	; 0xff
         f85e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrSIR::SetMediaBusy(unsigned char)
 * Address: 000f85e4
 */
TIrSIR::SetMediaBusy(unsigned char) {
    /*
         f85e4:	e5c01025 	strb	r1, [r0, #37]	; fField37
         f85e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrSIR::ValidFrameAddress(unsigned char)
 * Address: 000f85ec
 */
TIrSIR::ValidFrameAddress(unsigned char) {
    /*
         f85ec:	e20110ff 	and	r1, r1, #255	; 0xff
         f85f0:	e3a0207f 	mov	r2, #127	; 0x7f
         f85f4:	e13200c1 	teq	r2, r1, asr #1
         f85f8:	15d00020 	ldrneb	r0, [r0, #32]	; fField32
         f85fc:	113000c1 	teqne	r0, r1, asr #1
         f8600:	03a00001 	moveq	r0, #1	; 0x1
         f8604:	13a00000 	movne	r0, #0	; 0x0
         f8608:	e20000ff 	and	r0, r0, #255	; 0xff
         f860c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrSIR::CopyStatsTo(TCMOSlowIRStats *)
 * Address: 000f8610
 */
TIrSIR::CopyStatsTo(TCMOSlowIRStats *) {
    /*
         f8610:	e5902044 	ldr	r2, [r0, #68]	; fField68
         f8614:	e581200c 	str	r2, [r1, #12]	; fField12
         f8618:	e590204c 	ldr	r2, [r0, #76]	; fField76
         f861c:	e5812014 	str	r2, [r1, #20]	; fField20
         f8620:	e5902048 	ldr	r2, [r0, #72]	; fField72
         f8624:	e5812010 	str	r2, [r1, #16]	; fField16
         f8628:	e5900058 	ldr	r0, [r0, #88]	; fField88
         f862c:	e5a10020 	str	r0, [r1, #32]!	; fField32
         f8630:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrSIR::ResetStats(void)
 * Address: 000f8634
 */
TIrSIR::ResetStats(void) {
    /*
         f8634:	e3a01000 	mov	r1, #0	; 0x0
         f8638:	e5801044 	str	r1, [r0, #68]	; fField68
         f863c:	e580104c 	str	r1, [r0, #76]	; fField76
         f8640:	e5801048 	str	r1, [r0, #72]	; fField72
         f8644:	e5a01058 	str	r1, [r0, #88]!	; fField88
         f8648:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrSIR::Reset(void)
 * Address: 000f864c
 */
TIrSIR::Reset(void) {
    /*
         f864c:	e3a010ff 	mov	r1, #255	; 0xff
         f8650:	e5c01018 	strb	r1, [r0, #24]	; fField24
         f8654:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrSIR::StartTransmit(TIrLAPPutBuffer *, unsigned long)
 * Address: 000f8658
 */
TIrSIR::StartTransmit(TIrLAPPutBuffer *, unsigned long) {
    /*
         f8658:	e1a0c00d 	mov	ip, sp
         f865c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f8660:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8664:	e1a04000 	mov	r4, r0
         f8668:	e1a05002 	mov	r5, r2
         f866c:	e1a00001 	mov	r0, r1
         f8670:	e3e02000 	mvn	r2, #0	; 0x0
         f8674:	e584100c 	str	r1, [r4, #12]	; fField12
         f8678:	e3a01000 	mov	r1, #0	; 0x0
         f867c:	eb64f0fb 	bl	1a34a70 <TIrLAPPutBuffer::$Seek(long, int)>
         f8680:	e3a00000 	mov	r0, #0	; 0x0
         f8684:	e5a45010 	str	r5, [r4, #16]!	; fField16
         f8688:	e5840004 	str	r0, [r4, #4]	; fField4
         f868c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrSIR::FillOutputBuffer(void)
 * Address: 000f8690
 */
TIrSIR::FillOutputBuffer(void) {
    /*
         f8690:	e1a0c00d 	mov	ip, sp
         f8694:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f8698:	e24cb004 	sub	fp, ip, #4	; 0x4
         f869c:	e1a04000 	mov	r4, r0
         f86a0:	e3a05000 	mov	r5, #0	; 0x0
         f86a4:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f86a8:	e284602c 	add	r6, r4, #44	; 0x2c
         f86ac:	e3500006 	cmp	r0, #6	; 0x6
         f86b0:	908ff100 	addls	pc, pc, r0, lsl #2
         f86b4:	ea000059 	b	f8820 <TIrSIR::FillOutputBuffer(void)+0x190>
         f86b8:	ea000008 	b	f86e0 <TIrSIR::FillOutputBuffer(void)+0x50>
         f86bc:	ea000016 	b	f871c <TIrSIR::FillOutputBuffer(void)+0x8c>
         f86c0:	ea00001e 	b	f8740 <TIrSIR::FillOutputBuffer(void)+0xb0>
         f86c4:	ea00003c 	b	f87bc <TIrSIR::FillOutputBuffer(void)+0x12c>
         f86c8:	ea000044 	b	f87e0 <TIrSIR::FillOutputBuffer(void)+0x150>
         f86cc:	ea00004c 	b	f8804 <TIrSIR::FillOutputBuffer(void)+0x174>
         f86d0:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f86d4:	e2800001 	add	r0, r0, #1	; 0x1
         f86d8:	e5a4004c 	str	r0, [r4, #76]!	; fField76
         f86dc:	ea000052 	b	f882c <TIrSIR::FillOutputBuffer(void)+0x19c>
         f86e0:	e5940010 	ldr	r0, [r4, #16]	; fField16
         f86e4:	e3500000 	cmp	r0, #0	; 0x0
         f86e8:	9a000009 	bls	f8714 <TIrSIR::FillOutputBuffer(void)+0x84>
         f86ec:	e5d41018 	ldrb	r1, [r4, #24]	; fField24
         f86f0:	e5940008 	ldr	r0, [r4, #8]	; fField8
         f86f4:	eb6c3f5c 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         f86f8:	e3300000 	teq	r0, #0	; 0x0
         f86fc:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f8700:	e5940010 	ldr	r0, [r4, #16]	; fField16
         f8704:	e2400001 	sub	r0, r0, #1	; 0x1
         f8708:	e5840010 	str	r0, [r4, #16]	; fField16
         f870c:	e3500000 	cmp	r0, #0	; 0x0
         f8710:	8afffff5 	bhi	f86ec <TIrSIR::FillOutputBuffer(void)+0x5c>
         f8714:	e3a00001 	mov	r0, #1	; 0x1
         f8718:	e5840014 	str	r0, [r4, #20]	; fField20
         f871c:	e3a010c0 	mov	r1, #192	; 0xc0
         f8720:	e5940008 	ldr	r0, [r4, #8]	; fField8
         f8724:	eb6c3f50 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         f8728:	e1b05000 	movs	r5, r0
         f872c:	1a00003b 	bne	f8820 <TIrSIR::FillOutputBuffer(void)+0x190>
         f8730:	e1a00006 	mov	r0, r6
         f8734:	eb64d7fe 	bl	1a2e734 <TIrCRC16::$Reset(void)>
         f8738:	e3a00002 	mov	r0, #2	; 0x2
         f873c:	e5840014 	str	r0, [r4, #20]	; fField20
         f8740:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f8744:	eb64f0ca 	bl	1a34a74 <TIrLAPPutBuffer::$AtEOF( const(void))>
         f8748:	e3300000 	teq	r0, #0	; 0x0
         f874c:	1a000016 	bne	f87ac <TIrSIR::FillOutputBuffer(void)+0x11c>
         f8750:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f8754:	eb64f0c4 	bl	1a34a6c <TIrLAPPutBuffer::$Get(void)>
         f8758:	e1a01000 	mov	r1, r0
         f875c:	e1a07000 	mov	r7, r0
         f8760:	e1a00004 	mov	r0, r4
         f8764:	eb64fd18 	bl	1a37bcc <TIrSIR::$EscapePutChar(unsigned char)>
         f8768:	e1b05000 	movs	r5, r0
         f876c:	1a000007 	bne	f8790 <TIrSIR::FillOutputBuffer(void)+0x100>
         f8770:	e1a00006 	mov	r0, r6
         f8774:	e1a01007 	mov	r1, r7
         f8778:	eb64d7ee 	bl	1a2e738 <TIrCRC16::$ComputeCRC(unsigned char)>
         f877c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f8780:	eb64f0bb 	bl	1a34a74 <TIrLAPPutBuffer::$AtEOF( const(void))>
         f8784:	e3300000 	teq	r0, #0	; 0x0
         f8788:	0afffff0 	beq	f8750 <TIrSIR::FillOutputBuffer(void)+0xc0>
         f878c:	ea000006 	b	f87ac <TIrSIR::FillOutputBuffer(void)+0x11c>
         f8790:	e3350000 	teq	r5, #0	; 0x0
         f8794:	0a000004 	beq	f87ac <TIrSIR::FillOutputBuffer(void)+0x11c>
         f8798:	e3a02000 	mov	r2, #0	; 0x0
         f879c:	e3e01000 	mvn	r1, #0	; 0x0
         f87a0:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
         f87a4:	eb64f0b1 	bl	1a34a70 <TIrLAPPutBuffer::$Seek(long, int)>
         f87a8:	ea00001c 	b	f8820 <TIrSIR::FillOutputBuffer(void)+0x190>
         f87ac:	e1a00006 	mov	r0, r6
         f87b0:	eb64d7e1 	bl	1a2e73c <TIrCRC16::$Finalize(void)>
         f87b4:	e3a00003 	mov	r0, #3	; 0x3
         f87b8:	e5840014 	str	r0, [r4, #20]	; fField20
         f87bc:	e1a00006 	mov	r0, r6
         f87c0:	eb64d7de 	bl	1a2e740 <TIrCRC16::$Get(void)>
         f87c4:	e5d01001 	ldrb	r1, [r0, #1]
         f87c8:	e1a00004 	mov	r0, r4
         f87cc:	eb64fcfe 	bl	1a37bcc <TIrSIR::$EscapePutChar(unsigned char)>
         f87d0:	e1b05000 	movs	r5, r0
         f87d4:	1a000011 	bne	f8820 <TIrSIR::FillOutputBuffer(void)+0x190>
         f87d8:	e3a00004 	mov	r0, #4	; 0x4
         f87dc:	e5840014 	str	r0, [r4, #20]	; fField20
         f87e0:	e1a00006 	mov	r0, r6
         f87e4:	eb64d7d5 	bl	1a2e740 <TIrCRC16::$Get(void)>
         f87e8:	e5d01000 	ldrb	r1, [r0]
         f87ec:	e1a00004 	mov	r0, r4
         f87f0:	eb64fcf5 	bl	1a37bcc <TIrSIR::$EscapePutChar(unsigned char)>
         f87f4:	e1b05000 	movs	r5, r0
         f87f8:	1a000008 	bne	f8820 <TIrSIR::FillOutputBuffer(void)+0x190>
         f87fc:	e3a00005 	mov	r0, #5	; 0x5
         f8800:	e5840014 	str	r0, [r4, #20]	; fField20
         f8804:	e3a010c1 	mov	r1, #193	; 0xc1
         f8808:	e5940008 	ldr	r0, [r4, #8]	; fField8
         f880c:	eb6c3f16 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         f8810:	e1b05000 	movs	r5, r0
         f8814:	03a00006 	moveq	r0, #6	; 0x6
         f8818:	05a40014 	streq	r0, [r4, #20]!	; fField20
         f881c:	0a000001 	beq	f8828 <TIrSIR::FillOutputBuffer(void)+0x198>
         f8820:	e3350003 	teq	r5, #3	; 0x3
         f8824:	1a000000 	bne	f882c <TIrSIR::FillOutputBuffer(void)+0x19c>
         f8828:	e3a05001 	mov	r5, #1	; 0x1
         f882c:	e1a00005 	mov	r0, r5
         f8830:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TIrSIR::EscapePutChar(unsigned char)
 * Address: 000f8834
 */
TIrSIR::EscapePutChar(unsigned char) {
    /*
         f8834:	e1a0c00d 	mov	ip, sp
         f8838:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f883c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8840:	e1a04000 	mov	r4, r0
         f8844:	e20150ff 	and	r5, r1, #255	; 0xff
         f8848:	e5900008 	ldr	r0, [r0, #8]	; fField8
         f884c:	eb6c36b8 	bl	1c06334 <TCircleBuf::$BufferSpace(void)>
         f8850:	e3500002 	cmp	r0, #2	; 0x2
         f8854:	33a00003 	movcc	r0, #3	; 0x3
         f8858:	391ba830 	ldmccdb	fp, {r4, r5, fp, sp, pc}
         f885c:	e33500c0 	teq	r5, #192	; 0xc0
         f8860:	133500c1 	teqne	r5, #193	; 0xc1
         f8864:	1335007d 	teqne	r5, #125	; 0x7d
         f8868:	1a000004 	bne	f8880 <TIrSIR::EscapePutChar(unsigned char)+0x4c>
         f886c:	e2250020 	eor	r0, r5, #32	; 0x20
         f8870:	e20050ff 	and	r5, r0, #255	; 0xff
         f8874:	e3a0107d 	mov	r1, #125	; 0x7d
         f8878:	e5940008 	ldr	r0, [r4, #8]	; fField8
         f887c:	eb6c3efa 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         f8880:	e1a01005 	mov	r1, r5
         f8884:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
         f8888:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f888c:	ea6c3ef6 	b	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
    */
}

/**
 * Symbol: TIrSIR::StartReceive(CBufferSegment *, unsigned char, unsigned char)
 * Address: 000f8890
 */
TIrSIR::StartReceive(CBufferSegment *, unsigned char, unsigned char) {
    /*
         f8890:	e1a0c00d 	mov	ip, sp
         f8894:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f8898:	e24cb004 	sub	fp, ip, #4	; 0x4
         f889c:	e1a04000 	mov	r4, r0
         f88a0:	e20200ff 	and	r0, r2, #255	; 0xff
         f88a4:	e584101c 	str	r1, [r4, #28]	; fField28
         f88a8:	e5c40020 	strb	r0, [r4, #32]	; fField32
         f88ac:	e5c43021 	strb	r3, [r4, #33]	; fField33
         f88b0:	e3a05000 	mov	r5, #0	; 0x0
         f88b4:	e5c45022 	strb	r5, [r4, #34]	; fField34
         f88b8:	e1a00004 	mov	r0, r4
         f88bc:	eb64fcc5 	bl	1a37bd8 <TIrSIR::$InitReceiveState(void)>
         f88c0:	e5c45025 	strb	r5, [r4, #37]	; fField37
         f88c4:	e3a000ff 	mov	r0, #255	; 0xff
         f88c8:	e5c40034 	strb	r0, [r4, #52]	; fField52
         f88cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrSIR::EmptyInputBuffer(void)
 * Address: 000f88d0
 */
TIrSIR::EmptyInputBuffer(void) {
    /*
         f88d0:	e1a0c00d 	mov	ip, sp
         f88d4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         f88d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f88dc:	e1a04000 	mov	r4, r0
         f88e0:	e24dd008 	sub	sp, sp, #8	; 0x8
         f88e4:	e3a00001 	mov	r0, #1	; 0x1
         f88e8:	e3a090b8 	mov	r9, #184	; 0xb8
         f88ec:	e2899a0f 	add	r9, r9, #61440	; 0xf000
         f88f0:	e284702c 	add	r7, r4, #44	; 0x2c
         f88f4:	e3a06000 	mov	r6, #0	; 0x0
         f88f8:	e3a05001 	mov	r5, #1	; 0x1
         f88fc:	e3300000 	teq	r0, #0	; 0x0
         f8900:	05dd0004 	ldreqb	r0, [sp, #4]	; fField4
         f8904:	15d40034 	ldrneb	r0, [r4, #52]	; fField52
         f8908:	e20080ff 	and	r8, r0, #255	; 0xff
         f890c:	e1a0200d 	mov	r2, sp
         f8910:	e28d1004 	add	r1, sp, #4	; 0x4
         f8914:	e5940004 	ldr	r0, [r4, #4]	; fField4
         f8918:	eb6c3693 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
         f891c:	e3300002 	teq	r0, #2	; 0x2
         f8920:	05c48034 	streqb	r8, [r4, #52]	; fField52
         f8924:	01a00005 	moveq	r0, r5
         f8928:	0a00004a 	beq	f8a58 <TIrSIR::EmptyInputBuffer(void)+0x188>
         f892c:	e3300001 	teq	r0, #1	; 0x1
         f8930:	05940058 	ldreq	r0, [r4, #88]	; fField88
         f8934:	02800001 	addeq	r0, r0, #1	; 0x1
         f8938:	05840058 	streq	r0, [r4, #88]	; fField88
         f893c:	0a00008b 	beq	f8b70 <TIrSIR::EmptyInputBuffer(void)+0x2a0>
         f8940:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
         f8944:	e330007d 	teq	r0, #125	; 0x7d
         f8948:	0a00004e 	beq	f8a88 <TIrSIR::EmptyInputBuffer(void)+0x1b8>
         f894c:	e33000c0 	teq	r0, #192	; 0xc0
         f8950:	0a000041 	beq	f8a5c <TIrSIR::EmptyInputBuffer(void)+0x18c>
         f8954:	e33000c1 	teq	r0, #193	; 0xc1
         f8958:	e5d40022 	ldrb	r0, [r4, #34]	; fField34
         f895c:	1a000053 	bne	f8ab0 <TIrSIR::EmptyInputBuffer(void)+0x1e0>
         f8960:	e3300000 	teq	r0, #0	; 0x0
         f8964:	0a000082 	beq	f8b74 <TIrSIR::EmptyInputBuffer(void)+0x2a4>
         f8968:	e5c46022 	strb	r6, [r4, #34]	; fField34
         f896c:	e1a00007 	mov	r0, r7
         f8970:	eb64d772 	bl	1a2e740 <TIrCRC16::$Get(void)>
         f8974:	e5900000 	ldr	r0, [r0]
         f8978:	e1390820 	teq	r9, r0, lsr #16
         f897c:	15940048 	ldrne	r0, [r4, #72]	; fField72
         f8980:	12800001 	addne	r0, r0, #1	; 0x1
         f8984:	15840048 	strne	r0, [r4, #72]	; fField72
         f8988:	1a000076 	bne	f8b68 <TIrSIR::EmptyInputBuffer(void)+0x298>
         f898c:	e5d40023 	ldrb	r0, [r4, #35]	; fField35
         f8990:	e3300000 	teq	r0, #0	; 0x0
         f8994:	1a000040 	bne	f8a9c <TIrSIR::EmptyInputBuffer(void)+0x1cc>
         f8998:	e5940028 	ldr	r0, [r4, #40]	; fField40
         f899c:	e3500002 	cmp	r0, #2	; 0x2
         f89a0:	3a00003d 	bcc	f8a9c <TIrSIR::EmptyInputBuffer(void)+0x1cc>
         f89a4:	e5d41026 	ldrb	r1, [r4, #38]	; fField38
         f89a8:	e1a00004 	mov	r0, r4
         f89ac:	eb64fc80 	bl	1a37bb4 <TIrSIR::$ValidFrameAddress(unsigned char)>
         f89b0:	e3300000 	teq	r0, #0	; 0x0
         f89b4:	0a000038 	beq	f8a9c <TIrSIR::EmptyInputBuffer(void)+0x1cc>
         f89b8:	e594001c 	ldr	r0, [r4, #28]	; fField28
         f89bc:	e1a05000 	mov	r5, r0
         f89c0:	e5901000 	ldr	r1, [r0]
         f89c4:	e1a0e00f 	mov	lr, pc
         f89c8:	e281f02c 	add	pc, r1, #44	; 0x2c
         f89cc:	e1a07000 	mov	r7, r0
         f89d0:	e594101c 	ldr	r1, [r4, #28]	; fField28
         f89d4:	e1a00001 	mov	r0, r1
         f89d8:	e5911000 	ldr	r1, [r1]
         f89dc:	e1a0e00f 	mov	lr, pc
         f89e0:	e281f03c 	add	pc, r1, #60	; 0x3c
         f89e4:	e1a01000 	mov	r1, r0
         f89e8:	e5d43024 	ldrb	r3, [r4, #36]	; fField36
         f89ec:	e2632002 	rsb	r2, r3, #2	; 0x2
         f89f0:	e0411002 	sub	r1, r1, r2
         f89f4:	e0471001 	sub	r1, r7, r1
         f89f8:	e1a00005 	mov	r0, r5
         f89fc:	e3a02001 	mov	r2, #1	; 0x1
         f8a00:	e5953000 	ldr	r3, [r5]
         f8a04:	e1a0e00f 	mov	lr, pc
         f8a08:	e283f034 	add	pc, r3, #52	; 0x34
         f8a0c:	e3e02000 	mvn	r2, #0	; 0x0
         f8a10:	e3a01000 	mov	r1, #0	; 0x0
         f8a14:	e594001c 	ldr	r0, [r4, #28]	; fField28
         f8a18:	e5903000 	ldr	r3, [r0]
         f8a1c:	e1a0e00f 	mov	lr, pc
         f8a20:	e283f038 	add	pc, r3, #56	; 0x38
         f8a24:	e1a00006 	mov	r0, r6
         f8a28:	e5c46025 	strb	r6, [r4, #37]	; fField37
         f8a2c:	e5941044 	ldr	r1, [r4, #68]	; fField68
         f8a30:	e2811001 	add	r1, r1, #1	; 0x1
         f8a34:	e5841044 	str	r1, [r4, #68]	; fField68
         f8a38:	e5d41027 	ldrb	r1, [r4, #39]
         f8a3c:	e3310073 	teq	r1, #115	; 0x73
         f8a40:	1a000004 	bne	f8a58 <TIrSIR::EmptyInputBuffer(void)+0x188>
         f8a44:	e5d41035 	ldrb	r1, [r4, #53]
         f8a48:	e33100ff 	teq	r1, #255	; 0xff
         f8a4c:	133100c0 	teqne	r1, #192	; 0xc0
         f8a50:	13a010ff 	movne	r1, #255	; 0xff
         f8a54:	e5c41018 	strb	r1, [r4, #24]	; fField24
         f8a58:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         f8a5c:	e5d40022 	ldrb	r0, [r4, #34]	; fField34
         f8a60:	e3300000 	teq	r0, #0	; 0x0
         f8a64:	0a000002 	beq	f8a74 <TIrSIR::EmptyInputBuffer(void)+0x1a4>
         f8a68:	e5940028 	ldr	r0, [r4, #40]	; fField40
         f8a6c:	e3500000 	cmp	r0, #0	; 0x0
         f8a70:	85c45025 	strhib	r5, [r4, #37]	; fField37
         f8a74:	e5c45022 	strb	r5, [r4, #34]	; fField34
         f8a78:	e1a00004 	mov	r0, r4
         f8a7c:	eb64fc55 	bl	1a37bd8 <TIrSIR::$InitReceiveState(void)>
         f8a80:	e5c48035 	strb	r8, [r4, #53]
         f8a84:	ea00003a 	b	f8b74 <TIrSIR::EmptyInputBuffer(void)+0x2a4>
         f8a88:	e5d40022 	ldrb	r0, [r4, #34]	; fField34
         f8a8c:	e3300000 	teq	r0, #0	; 0x0
         f8a90:	15c45023 	strneb	r5, [r4, #35]	; fField35
         f8a94:	1a000036 	bne	f8b74 <TIrSIR::EmptyInputBuffer(void)+0x2a4>
         f8a98:	ea000034 	b	f8b70 <TIrSIR::EmptyInputBuffer(void)+0x2a0>
         f8a9c:	e5c45025 	strb	r5, [r4, #37]	; fField37
         f8aa0:	e5c46023 	strb	r6, [r4, #35]	; fField35
         f8aa4:	e1a00004 	mov	r0, r4
         f8aa8:	eb64fc4a 	bl	1a37bd8 <TIrSIR::$InitReceiveState(void)>
         f8aac:	ea000030 	b	f8b74 <TIrSIR::EmptyInputBuffer(void)+0x2a4>
         f8ab0:	e3300000 	teq	r0, #0	; 0x0
         f8ab4:	0a00002d 	beq	f8b70 <TIrSIR::EmptyInputBuffer(void)+0x2a0>
         f8ab8:	e5d40023 	ldrb	r0, [r4, #35]	; fField35
         f8abc:	e3300000 	teq	r0, #0	; 0x0
         f8ac0:	0a000003 	beq	f8ad4 <TIrSIR::EmptyInputBuffer(void)+0x204>
         f8ac4:	e5c46023 	strb	r6, [r4, #35]	; fField35
         f8ac8:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
         f8acc:	e2200020 	eor	r0, r0, #32	; 0x20
         f8ad0:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         f8ad4:	e1a00007 	mov	r0, r7
         f8ad8:	e5dd1004 	ldrb	r1, [sp, #4]	; fField4
         f8adc:	eb64d715 	bl	1a2e738 <TIrCRC16::$ComputeCRC(unsigned char)>
         f8ae0:	e5940028 	ldr	r0, [r4, #40]	; fField40
         f8ae4:	e2800001 	add	r0, r0, #1	; 0x1
         f8ae8:	e5840028 	str	r0, [r4, #40]	; fField40
         f8aec:	e3300001 	teq	r0, #1	; 0x1
         f8af0:	05dd0004 	ldreqb	r0, [sp, #4]	; fField4
         f8af4:	05c40026 	streqb	r0, [r4, #38]	; fField38
         f8af8:	0a00001d 	beq	f8b74 <TIrSIR::EmptyInputBuffer(void)+0x2a4>
         f8afc:	e3300002 	teq	r0, #2	; 0x2
         f8b00:	05dd0004 	ldreqb	r0, [sp, #4]	; fField4
         f8b04:	05c40027 	streqb	r0, [r4, #39]
         f8b08:	0a000019 	beq	f8b74 <TIrSIR::EmptyInputBuffer(void)+0x2a4>
         f8b0c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         f8b10:	e5901000 	ldr	r1, [r0]
         f8b14:	e1a0e00f 	mov	lr, pc
         f8b18:	e281f030 	add	pc, r1, #48	; 0x30
         f8b1c:	e3300000 	teq	r0, #0	; 0x0
         f8b20:	1a000006 	bne	f8b40 <TIrSIR::EmptyInputBuffer(void)+0x270>
         f8b24:	e594201c 	ldr	r2, [r4, #28]	; fField28
         f8b28:	e5dd1004 	ldrb	r1, [sp, #4]	; fField4
         f8b2c:	e1a00002 	mov	r0, r2
         f8b30:	e5922000 	ldr	r2, [r2]
         f8b34:	e1a0e00f 	mov	lr, pc
         f8b38:	e282f01c 	add	pc, r2, #28	; 0x1c
         f8b3c:	ea00000c 	b	f8b74 <TIrSIR::EmptyInputBuffer(void)+0x2a4>
         f8b40:	e5d40024 	ldrb	r0, [r4, #36]	; fField36
         f8b44:	e2800001 	add	r0, r0, #1	; 0x1
         f8b48:	e20000ff 	and	r0, r0, #255	; 0xff
         f8b4c:	e5c40024 	strb	r0, [r4, #36]	; fField36
         f8b50:	e3500002 	cmp	r0, #2	; 0x2
         f8b54:	da000006 	ble	f8b74 <TIrSIR::EmptyInputBuffer(void)+0x2a4>
         f8b58:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
         f8b5c:	e3300000 	teq	r0, #0	; 0x0
         f8b60:	1a000003 	bne	f8b74 <TIrSIR::EmptyInputBuffer(void)+0x2a4>
         f8b64:	e5c46022 	strb	r6, [r4, #34]	; fField34
         f8b68:	e1a00004 	mov	r0, r4
         f8b6c:	eb64fc19 	bl	1a37bd8 <TIrSIR::$InitReceiveState(void)>
         f8b70:	e5c45025 	strb	r5, [r4, #37]	; fField37
         f8b74:	e3a00000 	mov	r0, #0	; 0x0
         f8b78:	eaffff5f 	b	f88fc <TIrSIR::EmptyInputBuffer(void)+0x2c>
    */
}

/**
 * Symbol: TIrSIR::InitReceiveState(void)
 * Address: 000f8b7c
 */
TIrSIR::InitReceiveState(void) {
    /*
         f8b7c:	e1a0c00d 	mov	ip, sp
         f8b80:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f8b84:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8b88:	e1a04000 	mov	r4, r0
         f8b8c:	e3a00000 	mov	r0, #0	; 0x0
         f8b90:	e5c40023 	strb	r0, [r4, #35]	; fField35
         f8b94:	e5840028 	str	r0, [r4, #40]	; fField40
         f8b98:	e5c40024 	strb	r0, [r4, #36]	; fField36
         f8b9c:	e284002c 	add	r0, r4, #44	; 0x2c
         f8ba0:	eb64d6e3 	bl	1a2e734 <TIrCRC16::$Reset(void)>
         f8ba4:	e3e02000 	mvn	r2, #0	; 0x0
         f8ba8:	e3a01000 	mov	r1, #0	; 0x0
         f8bac:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
         f8bb0:	e5903000 	ldr	r3, [r0]
         f8bb4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f8bb8:	e283f038 	add	pc, r3, #56	; 0x38
    */
}

/**
 * Symbol: TIrSIR::MediaBusy(void)
 * Address: 000f8bbc
 */
TIrSIR::MediaBusy(void) {
    /*
         f8bbc:	e5d00025 	ldrb	r0, [r0, #37]	; fField37
         f8bc0:	e1a0f00e 	mov	pc, lr
    */
}

