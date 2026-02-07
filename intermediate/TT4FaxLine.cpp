#include "include/TT4FaxLine.h"

/**
 * Symbol: TT4FaxLine::__ct(void)
 * Address: 00204698
 */
TT4FaxLine::TT4FaxLine(void) {
    /*
        204698:	e1a0c00d 	mov	ip, sp
        20469c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2046a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2046a4:	e3300000 	teq	r0, #0	; 0x0
        2046a8:	1a000003 	bne	2046bc <TT4FaxLine::__ct(void)+0x24>
        2046ac:	e3a00034 	mov	r0, #52	; 0x34
        2046b0:	eb672820 	bl	1bce738 <$__nw(unsigned int)>
        2046b4:	e3300000 	teq	r0, #0	; 0x0
        2046b8:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2046bc:	e59f102c 	ldr	r1, [pc, #2c]	; 2046f0 <TT4FaxLine::__ct(void)+0x58>
        2046c0:	e5801000 	str	r1, [r0]
        2046c4:	e3a01000 	mov	r1, #0	; 0x0
        2046c8:	e580100c 	str	r1, [r0, #12]	; fField12
        2046cc:	e5801020 	str	r1, [r0, #32]	; fField32
        2046d0:	e5801030 	str	r1, [r0, #48]	; fField48
        2046d4:	e5801024 	str	r1, [r0, #36]	; fField36
        2046d8:	e5801010 	str	r1, [r0, #16]	; fField16
        2046dc:	e5801004 	str	r1, [r0, #4]	; fField4
        2046e0:	e5801028 	str	r1, [r0, #40]	; fField40
        2046e4:	e5801018 	str	r1, [r0, #24]	; fField24
        2046e8:	e5801008 	str	r1, [r0, #8]	; fField8
        2046ec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2046f0:	0001af04 	andeq	sl, r1, r4, lsl #30
    */
}

/**
 * Symbol: TT4FaxLine::__dt(void)
 * Address: 002046f4
 */
TT4FaxLine::~TT4FaxLine(void) {
    /*
        2046f4:	e59f200c 	ldr	r2, [pc, #c]	; 204708 <TT4FaxLine::__dt(void)+0x14>
        2046f8:	e3110001 	tst	r1, #1	; 0x1
        2046fc:	e5802000 	str	r2, [r0]
        204700:	1a6723f6 	bne	1bcd6e0 <$__dl(void *)>
        204704:	e1a0f00e 	mov	pc, lr
        204708:	0001af04 	andeq	sl, r1, r4, lsl #30
    */
}

/**
 * Symbol: TT4FaxLine::EmitBits(TT4FaxLine::RunColor, int, int *)
 * Address: 0020470c
 */
TT4FaxLine::EmitBits(TT4FaxLine::RunColor, int, int *) {
    /*
        20470c:	e92d43f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, lr}
        204710:	e3a04000 	mov	r4, #0	; 0x0
        204714:	e5905024 	ldr	r5, [r0, #36]	; fField36
        204718:	e590c030 	ldr	ip, [r0, #48]	; fField48
        20471c:	e155000c 	cmp	r5, ip
        204720:	21a00004 	movcs	r0, r4
        204724:	25834000 	strcs	r4, [r3]
        204728:	28bd83f0 	ldmcsia	sp!, {r4, r5, r6, r7, r8, r9, pc}
        20472c:	e3310000 	teq	r1, #0	; 0x0
        204730:	13a0c000 	movne	ip, #0	; 0x0
        204734:	03a0c0ff 	moveq	ip, #255	; 0xff
        204738:	e20c80ff 	and	r8, ip, #255	; 0xff
        20473c:	e590c028 	ldr	ip, [r0, #40]	; fField40
        204740:	e59fe030 	ldr	lr, [pc, #30]	; 204778 <TT4FaxLine::EmitBits(TT4FaxLine::RunColor, int, int *)+0x6c>
        204744:	e15c0002 	cmp	ip, r2
        204748:	da00000b 	ble	20477c <TT4FaxLine::EmitBits(TT4FaxLine::RunColor, int, int *)+0x70>
        20474c:	e04cc002 	sub	ip, ip, r2
        204750:	e580c028 	str	ip, [r0, #40]	; fField40
        204754:	e3310000 	teq	r1, #0	; 0x0
        204758:	1a000003 	bne	20476c <TT4FaxLine::EmitBits(TT4FaxLine::RunColor, int, int *)+0x60>
        20475c:	e7de1002 	ldrb	r1, [lr, r2]
        204760:	e5d0202c 	ldrb	r2, [r0, #44]	; fField44
        204764:	e1821c11 	orr	r1, r2, r1, lsl ip
        204768:	e5c0102c 	strb	r1, [r0, #44]	; fField44
        20476c:	e3a00001 	mov	r0, #1	; 0x1
        204770:	e5834000 	str	r4, [r3]
        204774:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
        204778:	00377c14 	eoreqs	r7, r7, r4, lsl ip
        20477c:	e1a07005 	mov	r7, r5
        204780:	e3a06008 	mov	r6, #8	; 0x8
        204784:	e33c0008 	teq	ip, #8	; 0x8
        204788:	0a00000c 	beq	2047c0 <TT4FaxLine::EmitBits(TT4FaxLine::RunColor, int, int *)+0xb4>
        20478c:	e3310000 	teq	r1, #0	; 0x0
        204790:	1a000003 	bne	2047a4 <TT4FaxLine::EmitBits(TT4FaxLine::RunColor, int, int *)+0x98>
        204794:	e5d0902c 	ldrb	r9, [r0, #44]	; fField44
        204798:	e7dee00c 	ldrb	lr, [lr, ip]
        20479c:	e189e00e 	orr	lr, r9, lr
        2047a0:	e5c0e02c 	strb	lr, [r0, #44]	; fField44
        2047a4:	e042200c 	sub	r2, r2, ip
        2047a8:	e5d0c02c 	ldrb	ip, [r0, #44]	; fField44
        2047ac:	e4c5c001 	strb	ip, [r5], #1
        2047b0:	e2800024 	add	r0, r0, #36	; 0x24
        2047b4:	e8800060 	stmia	r0, {r5, r6}
        2047b8:	e2400024 	sub	r0, r0, #36	; 0x24
        2047bc:	e5c0402c 	strb	r4, [r0, #44]	; fField44
        2047c0:	e1a0c1c2 	mov	ip, r2, asr #3
        2047c4:	e5904024 	ldr	r4, [r0, #36]	; fField36
        2047c8:	e590e030 	ldr	lr, [r0, #48]	; fField48
        2047cc:	e04ee004 	sub	lr, lr, r4
        2047d0:	e15c000e 	cmp	ip, lr
        2047d4:	c1a0c00e 	movgt	ip, lr
        2047d8:	e042218c 	sub	r2, r2, ip, lsl #3
        2047dc:	e24ce001 	sub	lr, ip, #1	; 0x1
        2047e0:	e35c0000 	cmp	ip, #0	; 0x0
        2047e4:	da000006 	ble	204804 <TT4FaxLine::EmitBits(TT4FaxLine::RunColor, int, int *)+0xf8>
        2047e8:	e590c024 	ldr	ip, [r0, #36]	; fField36
        2047ec:	e4cc8001 	strb	r8, [ip], #1
        2047f0:	e580c024 	str	ip, [r0, #36]	; fField36
        2047f4:	e1a0c00e 	mov	ip, lr
        2047f8:	e24ee001 	sub	lr, lr, #1	; 0x1
        2047fc:	e35c0000 	cmp	ip, #0	; 0x0
        204800:	cafffff8 	bgt	2047e8 <TT4FaxLine::EmitBits(TT4FaxLine::RunColor, int, int *)+0xdc>
        204804:	e3520008 	cmp	r2, #8	; 0x8
        204808:	aa000005 	bge	204824 <TT4FaxLine::EmitBits(TT4FaxLine::RunColor, int, int *)+0x118>
        20480c:	e3310000 	teq	r1, #0	; 0x0
        204810:	059f102c 	ldreq	r1, [pc, #2c]	; 204844 <TT4FaxLine::EmitBits(TT4FaxLine::RunColor, int, int *)+0x138>
        204814:	07d11002 	ldreqb	r1, [r1, r2]
        204818:	05c0102c 	streqb	r1, [r0, #44]	; fField44
        20481c:	e0461002 	sub	r1, r6, r2
        204820:	e5801028 	str	r1, [r0, #40]	; fField40
        204824:	e5900024 	ldr	r0, [r0, #36]	; fField36
        204828:	e0400007 	sub	r0, r0, r7
        20482c:	e3520008 	cmp	r2, #8	; 0x8
        204830:	e5830000 	str	r0, [r3]
        204834:	a3a00000 	movge	r0, #0	; 0x0
        204838:	b3a00001 	movlt	r0, #1	; 0x1
        20483c:	e20000ff 	and	r0, r0, #255	; 0xff
        204840:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
        204844:	00377c0c 	eoreqs	r7, r7, ip, lsl #24
    */
}

/**
 * Symbol: TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)
 * Address: 00204848
 */
TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor) {
    /*
        204848:	e1a0c00d 	mov	ip, sp
        20484c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        204850:	e24cb004 	sub	fp, ip, #4	; 0x4
        204854:	e1a04000 	mov	r4, r0
        204858:	e3310001 	teq	r1, #1	; 0x1
        20485c:	1a000004 	bne	204874 <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)+0x2c>
        204860:	e3a01004 	mov	r1, #4	; 0x4
        204864:	eb000065 	bl	204a00 <TT4FaxLine::GetBits(int)>
        204868:	e59f1000 	ldr	r1, [pc, #0]	; 204870 <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)+0x28>
        20486c:	ea00001e 	b	2048ec <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)+0xa4>
        204870:	00377e70 	eoreqs	r7, r7, r0, ror lr
        204874:	eb000031 	bl	204940 <TT4FaxLine::GetNextBit(void)>
        204878:	e3300001 	teq	r0, #1	; 0x1
        20487c:	e1a00004 	mov	r0, r4
        204880:	1a000004 	bne	204898 <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)+0x50>
        204884:	eb00002d 	bl	204940 <TT4FaxLine::GetNextBit(void)>
        204888:	e3300001 	teq	r0, #1	; 0x1
        20488c:	13a00003 	movne	r0, #3	; 0x3
        204890:	03a00002 	moveq	r0, #2	; 0x2
        204894:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        204898:	eb000028 	bl	204940 <TT4FaxLine::GetNextBit(void)>
        20489c:	e3300001 	teq	r0, #1	; 0x1
        2048a0:	e1a00004 	mov	r0, r4
        2048a4:	1a000004 	bne	2048bc <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)+0x74>
        2048a8:	eb000024 	bl	204940 <TT4FaxLine::GetNextBit(void)>
        2048ac:	e3300001 	teq	r0, #1	; 0x1
        2048b0:	13a00001 	movne	r0, #1	; 0x1
        2048b4:	03a00004 	moveq	r0, #4	; 0x4
        2048b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2048bc:	eb00001f 	bl	204940 <TT4FaxLine::GetNextBit(void)>
        2048c0:	e3300001 	teq	r0, #1	; 0x1
        2048c4:	e1a00004 	mov	r0, r4
        2048c8:	1a000004 	bne	2048e0 <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)+0x98>
        2048cc:	eb00001b 	bl	204940 <TT4FaxLine::GetNextBit(void)>
        2048d0:	e3300001 	teq	r0, #1	; 0x1
        2048d4:	13a00006 	movne	r0, #6	; 0x6
        2048d8:	03a00005 	moveq	r0, #5	; 0x5
        2048dc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2048e0:	e3a01002 	mov	r1, #2	; 0x2
        2048e4:	eb000045 	bl	204a00 <TT4FaxLine::GetBits(int)>
        2048e8:	e59f104c 	ldr	r1, [pc, #4c]	; 20493c <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)+0xf4>	; fField4
        2048ec:	e7916100 	ldr	r6, [r1, r0, lsl #2]
        2048f0:	e3a05001 	mov	r5, #1	; 0x1
        2048f4:	e5d60001 	ldrb	r0, [r6, #1]
        2048f8:	e33000ff 	teq	r0, #255	; 0xff
        2048fc:	1a000005 	bne	204918 <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)+0xd0>
        204900:	e1a00004 	mov	r0, r4
        204904:	eb00000d 	bl	204940 <TT4FaxLine::GetNextBit(void)>
        204908:	e0805085 	add	r5, r0, r5, lsl #1
        20490c:	e7d60005 	ldrb	r0, [r6, r5]
        204910:	e33000ff 	teq	r0, #255	; 0xff
        204914:	0afffff9 	beq	204900 <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)+0xb8>
        204918:	e7d65005 	ldrb	r5, [r6, r5]
        20491c:	e3350068 	teq	r5, #104	; 0x68
        204920:	1a000003 	bne	204934 <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)+0xec>
        204924:	e1a00004 	mov	r0, r4
        204928:	eb000004 	bl	204940 <TT4FaxLine::GetNextBit(void)>
        20492c:	e3300000 	teq	r0, #0	; 0x0
        204930:	0afffffb 	beq	204924 <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)+0xdc>
        204934:	e1a00005 	mov	r0, r5
        204938:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        20493c:	00378118 	eoreqs	r8, r7, r8, lsl r1
    */
}

/**
 * Symbol: TT4FaxLine::GetNextBit(void)
 * Address: 00204940
 */
TT4FaxLine::GetNextBit(void) {
    /*
        204940:	e1a0c00d 	mov	ip, sp
        204944:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        204948:	e24cb004 	sub	fp, ip, #4	; 0x4
        20494c:	e1a04000 	mov	r4, r0
        204950:	e5900018 	ldr	r0, [r0, #24]	; fField24
        204954:	e3300000 	teq	r0, #0	; 0x0
        204958:	1a00001f 	bne	2049dc <TT4FaxLine::GetNextBit(void)+0x9c>
        20495c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        204960:	e5941010 	ldr	r1, [r4, #16]	; fField16
        204964:	e1310000 	teq	r1, r0
        204968:	05d4201c 	ldreqb	r2, [r4, #28]	; fField28
        20496c:	03320000 	teqeq	r2, #0	; 0x0
        204970:	12811001 	addne	r1, r1, #1	; 0x1
        204974:	15841010 	strne	r1, [r4, #16]	; fField16
        204978:	e284200c 	add	r2, r4, #12	; 0xc
        20497c:	e8920006 	ldmia	r2, {r1, r2}
        204980:	e1320001 	teq	r2, r1
        204984:	1a000004 	bne	20499c <TT4FaxLine::GetNextBit(void)+0x5c>
        204988:	e5941004 	ldr	r1, [r4, #4]	; fField4
        20498c:	e5841010 	str	r1, [r4, #16]	; fField16
        204990:	e5d4101c 	ldrb	r1, [r4, #28]	; fField28
        204994:	e2211001 	eor	r1, r1, #1	; 0x1
        204998:	e5c4101c 	strb	r1, [r4, #28]	; fField28
        20499c:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2049a0:	e1310000 	teq	r1, r0
        2049a4:	05d4001c 	ldreqb	r0, [r4, #28]	; fField28
        2049a8:	03300000 	teqeq	r0, #0	; 0x0
        2049ac:	1a000005 	bne	2049c8 <TT4FaxLine::GetNextBit(void)+0x88>
        2049b0:	e59f0044 	ldr	r0, [pc, #44]	; 2049fc <TT4FaxLine::GetNextBit(void)+0xbc>	; fField44
        2049b4:	e5900000 	ldr	r0, [r0]
        2049b8:	e3a02000 	mov	r2, #0	; 0x0
        2049bc:	e3a01f82 	mov	r1, #520	; 0x208
        2049c0:	e2411b16 	sub	r1, r1, #22528	; 0x5800
        2049c4:	eb6779f4 	bl	1be319c <$Throw>
        2049c8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2049cc:	e5d00000 	ldrb	r0, [r0]
        2049d0:	e5c40014 	strb	r0, [r4, #20]	; fField20
        2049d4:	e3a00008 	mov	r0, #8	; 0x8
        2049d8:	e5840018 	str	r0, [r4, #24]	; fField24
        2049dc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2049e0:	e2400001 	sub	r0, r0, #1	; 0x1
        2049e4:	e5840018 	str	r0, [r4, #24]	; fField24
        2049e8:	e5d41014 	ldrb	r1, [r4, #20]	; fField20
        2049ec:	e2010001 	and	r0, r1, #1	; 0x1
        2049f0:	e1a010a1 	mov	r1, r1, lsr #1
        2049f4:	e5c41014 	strb	r1, [r4, #20]	; fField20
        2049f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2049fc:	003712f0 	ldreqsh	r1, [r7], -r0
    */
}

/**
 * Symbol: TT4FaxLine::GetBits(int)
 * Address: 00204a00
 */
TT4FaxLine::GetBits(int) {
    /*
        204a00:	e1a0c00d 	mov	ip, sp
        204a04:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        204a08:	e24cb004 	sub	fp, ip, #4	; 0x4
        204a0c:	e1a05000 	mov	r5, r0
        204a10:	e3a06000 	mov	r6, #0	; 0x0
        204a14:	e2414001 	sub	r4, r1, #1	; 0x1
        204a18:	e3510000 	cmp	r1, #0	; 0x0
        204a1c:	da000006 	ble	204a3c <TT4FaxLine::GetBits(int)+0x3c>
        204a20:	e1a00005 	mov	r0, r5
        204a24:	ebffffc5 	bl	204940 <TT4FaxLine::GetNextBit(void)>
        204a28:	e1806086 	orr	r6, r0, r6, lsl #1
        204a2c:	e1a00004 	mov	r0, r4
        204a30:	e2444001 	sub	r4, r4, #1	; 0x1
        204a34:	e3500000 	cmp	r0, #0	; 0x0
        204a38:	cafffff8 	bgt	204a20 <TT4FaxLine::GetBits(int)+0x20>
        204a3c:	e1a00006 	mov	r0, r6
        204a40:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TT4FaxLine::Init(unsigned char *, int)
 * Address: 00204a44
 */
TT4FaxLine::Init(unsigned char *, int) {
    /*
        204a44:	e9800006 	stmib	r0, {r1, r2}
        204a48:	e0811002 	add	r1, r1, r2
        204a4c:	e580100c 	str	r1, [r0, #12]	; fField12
        204a50:	ea609ae3 	b	1a2b5e4 <TT4FaxLine::$Reset(void)>
    */
}

/**
 * Symbol: TT4FaxLine::Reset(void)
 * Address: 00204a54
 */
TT4FaxLine::Reset(void) {
    /*
        204a54:	e5901004 	ldr	r1, [r0, #4]	; fField4
        204a58:	e5801020 	str	r1, [r0, #32]	; fField32
        204a5c:	e5801010 	str	r1, [r0, #16]	; fField16
        204a60:	e3a01000 	mov	r1, #0	; 0x0
        204a64:	e5801018 	str	r1, [r0, #24]	; fField24
        204a68:	e5c0101c 	strb	r1, [r0, #28]	; fField28
        204a6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TT4FaxLine::AppendTo(unsigned char **, int *, int *)
 * Address: 00204a70
 */
TT4FaxLine::AppendTo(unsigned char **, int *, int *) {
    /*
        204a70:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        204a74:	e591e000 	ldr	lr, [r1]
        204a78:	e3a04000 	mov	r4, #0	; 0x0
        204a7c:	e3a05000 	mov	r5, #0	; 0x0
        204a80:	e592c000 	ldr	ip, [r2]
        204a84:	ea000012 	b	204ad4 <TT4FaxLine::AppendTo(unsigned char **, int *, int *)+0x64>
        204a88:	e5de6000 	ldrb	r6, [lr]
        204a8c:	e3360000 	teq	r6, #0	; 0x0
        204a90:	02855001 	addeq	r5, r5, #1	; 0x1
        204a94:	13a05000 	movne	r5, #0	; 0x0
        204a98:	e3550003 	cmp	r5, #3	; 0x3
        204a9c:	2a00000a 	bcs	204acc <TT4FaxLine::AppendTo(unsigned char **, int *, int *)+0x5c>
        204aa0:	e4c76001 	strb	r6, [r7], #1
        204aa4:	e2844001 	add	r4, r4, #1	; 0x1
        204aa8:	e5807020 	str	r7, [r0, #32]	; fField32
        204aac:	e590600c 	ldr	r6, [r0, #12]	; fField12
        204ab0:	e1370006 	teq	r7, r6
        204ab4:	1a000004 	bne	204acc <TT4FaxLine::AppendTo(unsigned char **, int *, int *)+0x5c>
        204ab8:	e5906004 	ldr	r6, [r0, #4]	; fField4
        204abc:	e5806020 	str	r6, [r0, #32]	; fField32
        204ac0:	e5d0601c 	ldrb	r6, [r0, #28]	; fField28
        204ac4:	e2266001 	eor	r6, r6, #1	; 0x1
        204ac8:	e5c0601c 	strb	r6, [r0, #28]	; fField28
        204acc:	e28ee001 	add	lr, lr, #1	; 0x1
        204ad0:	e24cc001 	sub	ip, ip, #1	; 0x1
        204ad4:	e5906010 	ldr	r6, [r0, #16]	; fField16
        204ad8:	e5907020 	ldr	r7, [r0, #32]	; fField32
        204adc:	e1360007 	teq	r6, r7
        204ae0:	05d0601c 	ldreqb	r6, [r0, #28]	; fField28
        204ae4:	03360001 	teqeq	r6, #1	; 0x1
        204ae8:	0a000001 	beq	204af4 <TT4FaxLine::AppendTo(unsigned char **, int *, int *)+0x84>
        204aec:	e33c0000 	teq	ip, #0	; 0x0
        204af0:	1affffe4 	bne	204a88 <TT4FaxLine::AppendTo(unsigned char **, int *, int *)+0x18>
        204af4:	e581e000 	str	lr, [r1]
        204af8:	e582c000 	str	ip, [r2]
        204afc:	e5834000 	str	r4, [r3]
        204b00:	e5901010 	ldr	r1, [r0, #16]	; fField16
        204b04:	e5902020 	ldr	r2, [r0, #32]	; fField32
        204b08:	e1310002 	teq	r1, r2
        204b0c:	05d0001c 	ldreqb	r0, [r0, #28]	; fField28
        204b10:	03300001 	teqeq	r0, #1	; 0x1
        204b14:	13a00001 	movne	r0, #1	; 0x1
        204b18:	03a00000 	moveq	r0, #0	; 0x0
        204b1c:	e20000ff 	and	r0, r0, #255	; 0xff
        204b20:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: TT4FaxLine::SkipPastEOL(void)
 * Address: 00204b24
 */
TT4FaxLine::SkipPastEOL(void) {
    /*
        204b24:	e1a0c00d 	mov	ip, sp
        204b28:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        204b2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        204b30:	e1a04000 	mov	r4, r0
        204b34:	e3a06001 	mov	r6, #1	; 0x1
        204b38:	e3a00000 	mov	r0, #0	; 0x0
        204b3c:	e52d006c 	str	r0, [sp, -#108]!
        204b40:	e28d0008 	add	r0, sp, #8	; 0x8
        204b44:	eb66b78a 	bl	1bb2974 <$setjmp>
        204b48:	e3300000 	teq	r0, #0	; 0x0
        204b4c:	1a00000e 	bne	204b8c <TT4FaxLine::SkipPastEOL(void)+0x68>
        204b50:	e1a0000d 	mov	r0, sp
        204b54:	eb676d48 	bl	1be007c <$AddExceptionHandler>
        204b58:	e3a05000 	mov	r5, #0	; 0x0
        204b5c:	e1a00004 	mov	r0, r4
        204b60:	ebffff76 	bl	204940 <TT4FaxLine::GetNextBit(void)>
        204b64:	e3300000 	teq	r0, #0	; 0x0
        204b68:	1afffffa 	bne	204b58 <TT4FaxLine::SkipPastEOL(void)+0x34>
        204b6c:	e2855001 	add	r5, r5, #1	; 0x1
        204b70:	e1a00004 	mov	r0, r4
        204b74:	ebffff71 	bl	204940 <TT4FaxLine::GetNextBit(void)>
        204b78:	e3300000 	teq	r0, #0	; 0x0
        204b7c:	0afffffa 	beq	204b6c <TT4FaxLine::SkipPastEOL(void)+0x48>
        204b80:	e355000b 	cmp	r5, #11	; 0xb
        204b84:	bafffff3 	blt	204b58 <TT4FaxLine::SkipPastEOL(void)+0x34>
        204b88:	ea000008 	b	204bb0 <TT4FaxLine::SkipPastEOL(void)+0x8c>
        204b8c:	e59d0060 	ldr	r0, [sp, #96]
        204b90:	e59f1028 	ldr	r1, [pc, #28]	; 204bc0 <TT4FaxLine::SkipPastEOL(void)+0x9c>	; fField28
        204b94:	e5911000 	ldr	r1, [r1]
        204b98:	eb67797d 	bl	1be3194 <$Subexception>
        204b9c:	e3300000 	teq	r0, #0	; 0x0
        204ba0:	13a06000 	movne	r6, #0	; 0x0
        204ba4:	1a000001 	bne	204bb0 <TT4FaxLine::SkipPastEOL(void)+0x8c>
        204ba8:	e1a0000d 	mov	r0, sp
        204bac:	eb677568 	bl	1be2154 <$NextHandler>
        204bb0:	e1a0000d 	mov	r0, sp
        204bb4:	eb67713f 	bl	1be10b8 <$ExitHandler>
        204bb8:	e1a00006 	mov	r0, r6
        204bbc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        204bc0:	003712f0 	ldreqsh	r1, [r7], -r0
    */
}

/**
 * Symbol: TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)
 * Address: 00204bc4
 */
TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long) {
    /*
        204bc4:	e1a0c00d 	mov	ip, sp
        204bc8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        204bcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        204bd0:	e1a06000 	mov	r6, r0
        204bd4:	e1a07001 	mov	r7, r1
        204bd8:	e1a05002 	mov	r5, r2
        204bdc:	e1a04003 	mov	r4, r3
        204be0:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        204be4:	e24dd008 	sub	sp, sp, #8	; 0x8
        204be8:	e3a09000 	mov	r9, #0	; 0x0
        204bec:	e24d0064 	sub	r0, sp, #100	; 0x64
        204bf0:	e58d0004 	str	r0, [sp, #4]	; fField4
        204bf4:	e59f1024 	ldr	r1, [pc, #24]	; 204c20 <TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)+0x5c>	; fField24
        204bf8:	e58d1000 	str	r1, [sp]
        204bfc:	e33a0000 	teq	sl, #0	; 0x0
        204c00:	1a000007 	bne	204c24 <TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)+0x60>
        204c04:	e1a03004 	mov	r3, r4
        204c08:	e1a02005 	mov	r2, r5
        204c0c:	e1a01007 	mov	r1, r7
        204c10:	e1a00006 	mov	r0, r6
        204c14:	eb6081b7 	bl	1a252f8 <TT4FaxLine::$DoMHDecodeLine(unsigned char *, int, int &)>
        204c18:	e1a08000 	mov	r8, r0
        204c1c:	ea00001b 	b	204c90 <TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)+0xcc>
        204c20:	003712f0 	ldreqsh	r1, [r7], -r0
        204c24:	e3a00000 	mov	r0, #0	; 0x0
        204c28:	e52d006c 	str	r0, [sp, -#108]!
        204c2c:	e59d0070 	ldr	r0, [sp, #112]
        204c30:	eb66b74f 	bl	1bb2974 <$setjmp>
        204c34:	e3300000 	teq	r0, #0	; 0x0
        204c38:	1a000008 	bne	204c60 <TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)+0x9c>
        204c3c:	e1a0000d 	mov	r0, sp
        204c40:	eb676d0d 	bl	1be007c <$AddExceptionHandler>
        204c44:	e1a03004 	mov	r3, r4
        204c48:	e1a02005 	mov	r2, r5
        204c4c:	e1a01007 	mov	r1, r7
        204c50:	e1a00006 	mov	r0, r6
        204c54:	eb6081a7 	bl	1a252f8 <TT4FaxLine::$DoMHDecodeLine(unsigned char *, int, int &)>
        204c58:	e1a08000 	mov	r8, r0
        204c5c:	ea000008 	b	204c84 <TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)+0xc0>
        204c60:	e59d0060 	ldr	r0, [sp, #96]
        204c64:	e59d106c 	ldr	r1, [sp, #108]
        204c68:	e5911000 	ldr	r1, [r1]
        204c6c:	eb677948 	bl	1be3194 <$Subexception>
        204c70:	e3300000 	teq	r0, #0	; 0x0
        204c74:	13a08000 	movne	r8, #0	; 0x0
        204c78:	1a000001 	bne	204c84 <TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)+0xc0>
        204c7c:	e1a0000d 	mov	r0, sp
        204c80:	eb677533 	bl	1be2154 <$NextHandler>
        204c84:	e1a0000d 	mov	r0, sp
        204c88:	eb67710a 	bl	1be10b8 <$ExitHandler>
        204c8c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        204c90:	e5940000 	ldr	r0, [r4]
        204c94:	e3300000 	teq	r0, #0	; 0x0
        204c98:	03380001 	teqeq	r8, #1	; 0x1
        204c9c:	1a000004 	bne	204cb4 <TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)+0xf0>
        204ca0:	e1a00009 	mov	r0, r9
        204ca4:	e2899001 	add	r9, r9, #1	; 0x1
        204ca8:	e3500006 	cmp	r0, #6	; 0x6
        204cac:	baffffd2 	blt	204bfc <TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)+0x38>
        204cb0:	ea000002 	b	204cc0 <TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)+0xfc>
        204cb4:	e3380000 	teq	r8, #0	; 0x0
        204cb8:	01a00006 	moveq	r0, r6
        204cbc:	0b609e50 	bleq	1a2c604 <TT4FaxLine::$SkipPastEOL(void)>
        204cc0:	e5940000 	ldr	r0, [r4]
        204cc4:	e1300005 	teq	r0, r5
        204cc8:	0a000005 	beq	204ce4 <TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)+0x120>
        204ccc:	e3590006 	cmp	r9, #6	; 0x6
        204cd0:	ba000002 	blt	204ce0 <TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)+0x11c>
        204cd4:	e3350000 	teq	r5, #0	; 0x0
        204cd8:	03a08001 	moveq	r8, #1	; 0x1
        204cdc:	0a000000 	beq	204ce4 <TT4FaxLine::DecodeLine(unsigned char *, int, int &, unsigned long)+0x120>
        204ce0:	e3a08000 	mov	r8, #0	; 0x0
        204ce4:	e1a00008 	mov	r0, r8
        204ce8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TT4FaxLine::GetLength(void)
 * Address: 00204cec
 */
TT4FaxLine::GetLength(void) {
    /*
        204cec:	e5d0301c 	ldrb	r3, [r0, #28]	; fField28
        204cf0:	e3330001 	teq	r3, #1	; 0x1
        204cf4:	e5901010 	ldr	r1, [r0, #16]	; fField16
        204cf8:	e5902020 	ldr	r2, [r0, #32]	; fField32
        204cfc:	10421001 	subne	r1, r2, r1
        204d00:	1a000004 	bne	204d18 <TT4FaxLine::GetLength(void)+0x2c>
        204d04:	e590300c 	ldr	r3, [r0, #12]	; fField12
        204d08:	e0431001 	sub	r1, r3, r1
        204d0c:	e5903004 	ldr	r3, [r0, #4]	; fField4
        204d10:	e0422003 	sub	r2, r2, r3
        204d14:	e0811002 	add	r1, r1, r2
        204d18:	e3310000 	teq	r1, #0	; 0x0
        204d1c:	1a000002 	bne	204d2c <TT4FaxLine::GetLength(void)+0x40>
        204d20:	e5900018 	ldr	r0, [r0, #24]	; fField24
        204d24:	e3300000 	teq	r0, #0	; 0x0
        204d28:	13a01001 	movne	r1, #1	; 0x1
        204d2c:	e1a00001 	mov	r0, r1
        204d30:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TT4FaxLine::DoMHDecodeLine(unsigned char *, int, int &)
 * Address: 00204d34
 */
TT4FaxLine::DoMHDecodeLine(unsigned char *, int, int &) {
    /*
        204d34:	e1a0c00d 	mov	ip, sp
        204d38:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        204d3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        204d40:	e1a04000 	mov	r4, r0
        204d44:	e1a05003 	mov	r5, r3
        204d48:	e24dd004 	sub	sp, sp, #4	; 0x4
        204d4c:	e3a07001 	mov	r7, #1	; 0x1
        204d50:	e3a08000 	mov	r8, #0	; 0x0
        204d54:	e5838000 	str	r8, [r3]
        204d58:	e5801024 	str	r1, [r0, #36]	; fField36
        204d5c:	e3a00008 	mov	r0, #8	; 0x8
        204d60:	e5840028 	str	r0, [r4, #40]	; fField40
        204d64:	e5c4802c 	strb	r8, [r4, #44]	; fField44
        204d68:	e0810002 	add	r0, r1, r2
        204d6c:	e1a01007 	mov	r1, r7
        204d70:	e5840030 	str	r0, [r4, #48]	; fField48
        204d74:	e1a00004 	mov	r0, r4
        204d78:	ebfffeb2 	bl	204848 <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)>
        204d7c:	e1a06000 	mov	r6, r0
        204d80:	e3300068 	teq	r0, #104	; 0x68
        204d84:	0a000028 	beq	204e2c <TT4FaxLine::DoMHDecodeLine(unsigned char *, int, int &)+0xf8>
        204d88:	e33600fe 	teq	r6, #254	; 0xfe
        204d8c:	1a000001 	bne	204d98 <TT4FaxLine::DoMHDecodeLine(unsigned char *, int, int &)+0x64>
        204d90:	e1a00008 	mov	r0, r8
        204d94:	ea000025 	b	204e30 <TT4FaxLine::DoMHDecodeLine(unsigned char *, int, int &)+0xfc>
        204d98:	e3560040 	cmp	r6, #64	; 0x40
        204d9c:	ba000009 	blt	204dc8 <TT4FaxLine::DoMHDecodeLine(unsigned char *, int, int &)+0x94>
        204da0:	e1a01007 	mov	r1, r7
        204da4:	e1a00004 	mov	r0, r4
        204da8:	ebfffea6 	bl	204848 <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)>
        204dac:	e3300068 	teq	r0, #104	; 0x68
        204db0:	0afffff6 	beq	204d90 <TT4FaxLine::DoMHDecodeLine(unsigned char *, int, int &)+0x5c>
        204db4:	e3500040 	cmp	r0, #64	; 0x40
        204db8:	aafffff4 	bge	204d90 <TT4FaxLine::DoMHDecodeLine(unsigned char *, int, int &)+0x5c>
        204dbc:	e0800306 	add	r0, r0, r6, lsl #6
        204dc0:	e2402d3f 	sub	r2, r0, #4032	; 0xfc0
        204dc4:	ea000000 	b	204dcc <TT4FaxLine::DoMHDecodeLine(unsigned char *, int, int &)+0x98>
        204dc8:	e1a02006 	mov	r2, r6
        204dcc:	e1a0300d 	mov	r3, sp
        204dd0:	e1a01007 	mov	r1, r7
        204dd4:	e1a00004 	mov	r0, r4
        204dd8:	ebfffe4b 	bl	20470c <TT4FaxLine::EmitBits(TT4FaxLine::RunColor, int, int *)>
        204ddc:	e3300001 	teq	r0, #1	; 0x1
        204de0:	0a000004 	beq	204df8 <TT4FaxLine::DoMHDecodeLine(unsigned char *, int, int &)+0xc4>
        204de4:	e5951000 	ldr	r1, [r5]
        204de8:	e59d0000 	ldr	r0, [sp]
        204dec:	e0810000 	add	r0, r1, r0
        204df0:	e5850000 	str	r0, [r5]
        204df4:	eaffffe5 	b	204d90 <TT4FaxLine::DoMHDecodeLine(unsigned char *, int, int &)+0x5c>
        204df8:	e5951000 	ldr	r1, [r5]
        204dfc:	e59d2000 	ldr	r2, [sp]
        204e00:	e0811002 	add	r1, r1, r2
        204e04:	e3370000 	teq	r7, #0	; 0x0
        204e08:	e5851000 	str	r1, [r5]
        204e0c:	13a01000 	movne	r1, #0	; 0x0
        204e10:	03a01001 	moveq	r1, #1	; 0x1
        204e14:	e1a07001 	mov	r7, r1
        204e18:	e1a00004 	mov	r0, r4
        204e1c:	ebfffe89 	bl	204848 <TT4FaxLine::MHGetNextCode(TT4FaxLine::RunColor)>
        204e20:	e1a06000 	mov	r6, r0
        204e24:	e3300068 	teq	r0, #104	; 0x68
        204e28:	1affffd6 	bne	204d88 <TT4FaxLine::DoMHDecodeLine(unsigned char *, int, int &)+0x54>
        204e2c:	e3a00001 	mov	r0, #1	; 0x1
        204e30:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

