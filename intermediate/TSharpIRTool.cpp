#include "include/TSharpIRTool.h"

/**
 * Symbol: TSharpIRTool::__ct(unsigned long)
 * Address: 001e07b4
 */
TSharpIRTool::TSharpIRTool(unsigned long) {
    /*
        1e07b4:	e1a0c00d 	mov	ip, sp
        1e07b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e07bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e07c0:	e1b04000 	movs	r4, r0
        1e07c4:	e1a05001 	mov	r5, r1
        1e07c8:	1a000003 	bne	1e07dc <TSharpIRTool::__ct(unsigned long)+0x28>
        1e07cc:	e3a00e79 	mov	r0, #1936	; 0x790
        1e07d0:	eb67b7d8 	bl	1bce738 <$__nw(unsigned int)>
        1e07d4:	e1b04000 	movs	r4, r0
        1e07d8:	0a000016 	beq	1e0838 <TSharpIRTool::__ct(unsigned long)+0x84>
        1e07dc:	e1a01005 	mov	r1, r5
        1e07e0:	e1a00004 	mov	r0, r4
        1e07e4:	eb60a33a 	bl	1a094d4 <TAsyncSerTool::$__ct(unsigned long)>
        1e07e8:	e2840fb7 	add	r0, r4, #732	; 0x2dc
        1e07ec:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e07f0:	eb67b3ad 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        1e07f4:	e2840e6f 	add	r0, r4, #1776	; 0x6f0
        1e07f8:	eb680e8e 	bl	1be4238 <TAEvent::$__ct(void)>
        1e07fc:	e2840c07 	add	r0, r4, #1792	; 0x700
        1e0800:	eb67b3a9 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        1e0804:	e2840fc5 	add	r0, r4, #788	; 0x314
        1e0808:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e080c:	eb680e89 	bl	1be4238 <TAEvent::$__ct(void)>
        1e0810:	e2840fcd 	add	r0, r4, #820	; 0x334
        1e0814:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e0818:	eb677184 	bl	1bbce30 <TCMOSlowIRProtocolType::$__ct(void)>
        1e081c:	e2840fd2 	add	r0, r4, #840	; 0x348
        1e0820:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e0824:	eb676d62 	bl	1bbbdb4 <TCMOSlowIRStats::$__ct(void)>
        1e0828:	e2840e77 	add	r0, r4, #1904	; 0x770
        1e082c:	eb688e8d 	bl	1c04268 <TCMOSlowIRConnect::$__ct(void)>
        1e0830:	e59f0008 	ldr	r0, [pc, #8]	; 1e0840 <TSharpIRTool::__ct(unsigned long)+0x8c>
        1e0834:	e5840000 	str	r0, [r4]
        1e0838:	e1a00004 	mov	r0, r4
        1e083c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1e0840:	0001c27c 	andeq	ip, r1, ip, ror r2
    */
}

/**
 * Symbol: TSharpIRTool::__dt(void)
 * Address: 001e0844
 */
TSharpIRTool::~TSharpIRTool(void) {
    /*
        1e0844:	e1a0c00d 	mov	ip, sp
        1e0848:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e084c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0850:	e1a04000 	mov	r4, r0
        1e0854:	e1a05001 	mov	r5, r1
        1e0858:	e59f003c 	ldr	r0, [pc, #3c]	; 1e089c <TSharpIRTool::__dt(void)+0x58>
        1e085c:	e5840000 	str	r0, [r4]
        1e0860:	e2840c07 	add	r0, r4, #1792	; 0x700
        1e0864:	e3a01000 	mov	r1, #0	; 0x0
        1e0868:	eb67b7a8 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1e086c:	e2840fb7 	add	r0, r4, #732	; 0x2dc
        1e0870:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e0874:	e3a01000 	mov	r1, #0	; 0x0
        1e0878:	eb67b7a4 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1e087c:	e1a00004 	mov	r0, r4
        1e0880:	e3a01000 	mov	r1, #0	; 0x0
        1e0884:	eb60a721 	bl	1a0a510 <TAsyncSerTool::$__dt(void)>
        1e0888:	e3150001 	tst	r5, #1	; 0x1
        1e088c:	11a00004 	movne	r0, r4
        1e0890:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1e0894:	1a67b391 	bne	1bcd6e0 <$__dl(void *)>
        1e0898:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1e089c:	0001c27c 	andeq	ip, r1, ip, ror r2
    */
}

/**
 * Symbol: TSharpIRTool::HandleRequest(TUMsgToken &, unsigned long)
 * Address: 001e08a0
 */
TSharpIRTool::HandleRequest(TUMsgToken &, unsigned long) {
    /*
        1e08a0:	e92d4000 	stmdb	sp!, {lr}
        1e08a4:	e5913000 	ldr	r3, [r1]
        1e08a8:	e3a0c000 	mov	ip, #0	; 0x0
        1e08ac:	e590e6ec 	ldr	lr, [r0, #1772]	; fField1772
        1e08b0:	e13e0003 	teq	lr, r3
        1e08b4:	059026fc 	ldreq	r2, [r0, #1788]	; fField1788
        1e08b8:	0580c6fc 	streq	ip, [r0, #1788]	; fField1788
        1e08bc:	0a000005 	beq	1e08d8 <TSharpIRTool::HandleRequest(TUMsgToken &, unsigned long)+0x38>
        1e08c0:	e590e710 	ldr	lr, [r0, #1808]	; fField1808
        1e08c4:	e13e0003 	teq	lr, r3
        1e08c8:	18bd4000 	ldmneia	sp!, {lr}
        1e08cc:	1a60c81f 	bne	1a12950 <TSerTool::$HandleRequest(TUMsgToken &, unsigned long)>
        1e08d0:	e5902720 	ldr	r2, [r0, #1824]	; fField1824
        1e08d4:	e580c720 	str	ip, [r0, #1824]	; fField1824
        1e08d8:	e3e01e47 	mvn	r1, #1136	; 0x470
        1e08dc:	e2411a09 	sub	r1, r1, #36864	; 0x9000
        1e08e0:	e3320001 	teq	r2, #1	; 0x1
        1e08e4:	08bd4000 	ldmeqia	sp!, {lr}
        1e08e8:	0a60c807 	beq	1a1290c <TSharpIRTool::$HandleControl(long)>
        1e08ec:	e3320002 	teq	r2, #2	; 0x2
        1e08f0:	08bd4000 	ldmeqia	sp!, {lr}
        1e08f4:	0a60c806 	beq	1a12914 <TSharpIRTool::$HandleData(long)>
        1e08f8:	e3320003 	teq	r2, #3	; 0x3
        1e08fc:	08bd4000 	ldmeqia	sp!, {lr}
        1e0900:	0a60c807 	beq	1a12924 <TSharpIRTool::$HandleNegotiate(long)>
        1e0904:	e3320004 	teq	r2, #4	; 0x4
        1e0908:	03a0100d 	moveq	r1, #13	; 0xd
        1e090c:	0a000002 	beq	1e091c <TSharpIRTool::HandleRequest(TUMsgToken &, unsigned long)+0x7c>
        1e0910:	e3320005 	teq	r2, #5	; 0x5
        1e0914:	18bd8000 	ldmneia	sp!, {pc}
        1e0918:	e3a0101c 	mov	r1, #28	; 0x1c
        1e091c:	e8bd4000 	ldmia	sp!, {lr}
        1e0920:	ea60d45a 	b	1a15a90 <TSharpIRTool::$NextState(IREvent)>
    */
}

/**
 * Symbol: TSharpIRTool::StartTimer1(unsigned long, int)
 * Address: 001e0924
 */
TSharpIRTool::StartTimer1(unsigned long, int) {
    /*
        1e0924:	e1a0c00d 	mov	ip, sp
        1e0928:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e092c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0930:	e1a04000 	mov	r4, r0
        1e0934:	e58026fc 	str	r2, [r0, #1788]	; fField1788
        1e0938:	e24dd010 	sub	sp, sp, #16	; 0x10
        1e093c:	e1a0000d 	mov	r0, sp
        1e0940:	eb67f552 	bl	1bdde90 <$TimeFromNow>
        1e0944:	e28d0008 	add	r0, sp, #8	; 0x8
        1e0948:	e89d5000 	ldmia	sp, {ip, lr}
        1e094c:	e8805000 	stmia	r0, {ip, lr}
        1e0950:	e284c08c 	add	ip, r4, #140	; 0x8c
        1e0954:	e284efb7 	add	lr, r4, #732	; 0x2dc
        1e0958:	e28eeb01 	add	lr, lr, #1024	; 0x400
        1e095c:	e2844e6f 	add	r4, r4, #1776	; 0x6f0
        1e0960:	e3a02000 	mov	r2, #0	; 0x0
        1e0964:	e28d3008 	add	r3, sp, #8	; 0x8
        1e0968:	e3a05000 	mov	r5, #0	; 0x0
        1e096c:	e3a01000 	mov	r1, #0	; 0x0
        1e0970:	e3a00001 	mov	r0, #1	; 0x1
        1e0974:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1e0978:	e1a03005 	mov	r3, r5
        1e097c:	e3a02010 	mov	r2, #16	; 0x10
        1e0980:	e92d000c 	stmdb	sp!, {r2, r3}
        1e0984:	e1a03004 	mov	r3, r4
        1e0988:	e1a0000c 	mov	r0, ip
        1e098c:	e3a02000 	mov	r2, #0	; 0x0
        1e0990:	e59e1000 	ldr	r1, [lr]
        1e0994:	eb67e8eb 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        1e0998:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::StopTimer1(void)
 * Address: 001e099c
 */
TSharpIRTool::StopTimer1(void) {
    /*
        1e099c:	e1a0c00d 	mov	ip, sp
        1e09a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e09a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e09a8:	e1a04000 	mov	r4, r0
        1e09ac:	e59006fc 	ldr	r0, [r0, #1788]	; fField1788
        1e09b0:	e3300000 	teq	r0, #0	; 0x0
        1e09b4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1e09b8:	e2840fb7 	add	r0, r4, #732	; 0x2dc
        1e09bc:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e09c0:	eb67b761 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        1e09c4:	e3a00000 	mov	r0, #0	; 0x0
        1e09c8:	e5a406fc 	str	r0, [r4, #1788]!	; fField1788
        1e09cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::StartTimer2(unsigned long, int)
 * Address: 001e09d0
 */
TSharpIRTool::StartTimer2(unsigned long, int) {
    /*
        1e09d0:	e1a0c00d 	mov	ip, sp
        1e09d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e09d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e09dc:	e1a04000 	mov	r4, r0
        1e09e0:	e5802720 	str	r2, [r0, #1824]	; fField1824
        1e09e4:	e24dd010 	sub	sp, sp, #16	; 0x10
        1e09e8:	e1a0000d 	mov	r0, sp
        1e09ec:	eb67f527 	bl	1bdde90 <$TimeFromNow>
        1e09f0:	e28d0008 	add	r0, sp, #8	; 0x8
        1e09f4:	e89d5000 	ldmia	sp, {ip, lr}
        1e09f8:	e8805000 	stmia	r0, {ip, lr}
        1e09fc:	e284c08c 	add	ip, r4, #140	; 0x8c
        1e0a00:	e284ec07 	add	lr, r4, #1792	; 0x700
        1e0a04:	e2844fc5 	add	r4, r4, #788	; 0x314
        1e0a08:	e2844b01 	add	r4, r4, #1024	; 0x400
        1e0a0c:	e3a02000 	mov	r2, #0	; 0x0
        1e0a10:	e28d3008 	add	r3, sp, #8	; 0x8
        1e0a14:	e3a05000 	mov	r5, #0	; 0x0
        1e0a18:	e3a01000 	mov	r1, #0	; 0x0
        1e0a1c:	e3a00001 	mov	r0, #1	; 0x1
        1e0a20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1e0a24:	e1a03005 	mov	r3, r5
        1e0a28:	e3a02010 	mov	r2, #16	; 0x10
        1e0a2c:	e92d000c 	stmdb	sp!, {r2, r3}
        1e0a30:	e1a03004 	mov	r3, r4
        1e0a34:	e1a0000c 	mov	r0, ip
        1e0a38:	e3a02000 	mov	r2, #0	; 0x0
        1e0a3c:	e59e1000 	ldr	r1, [lr]
        1e0a40:	eb67e8c0 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        1e0a44:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::StopTimer2(void)
 * Address: 001e0a48
 */
TSharpIRTool::StopTimer2(void) {
    /*
        1e0a48:	e1a0c00d 	mov	ip, sp
        1e0a4c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e0a50:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0a54:	e1a04000 	mov	r4, r0
        1e0a58:	e5900720 	ldr	r0, [r0, #1824]	; fField1824
        1e0a5c:	e3300000 	teq	r0, #0	; 0x0
        1e0a60:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1e0a64:	e2840c07 	add	r0, r4, #1792	; 0x700
        1e0a68:	eb67b737 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        1e0a6c:	e3a00000 	mov	r0, #0	; 0x0
        1e0a70:	e5a40720 	str	r0, [r4, #1824]!	; fField1824
        1e0a74:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::StartTransmit(IRPacketType)
 * Address: 001e0a78
 */
TSharpIRTool::StartTransmit(IRPacketType) {
    /*
        1e0a78:	e1a0c00d 	mov	ip, sp
        1e0a7c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e0a80:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0a84:	e1a04000 	mov	r4, r0
        1e0a88:	e1a05001 	mov	r5, r1
        1e0a8c:	e590030c 	ldr	r0, [r0, #780]	; fField780
        1e0a90:	e3100040 	tst	r0, #64	; 0x40
        1e0a94:	13a01001 	movne	r1, #1	; 0x1
        1e0a98:	15940304 	ldrne	r0, [r4, #772]	; fField772
        1e0a9c:	1b06908f 	blne	384ce0 <TSerialChip::ConfigureForOutput(unsigned char)>
        1e0aa0:	e5940270 	ldr	r0, [r4, #624]	; fField624
        1e0aa4:	e3300000 	teq	r0, #0	; 0x0
        1e0aa8:	03e00000 	mvneq	r0, #0	; 0x0
        1e0aac:	05840270 	streq	r0, [r4, #624]	; fField624
        1e0ab0:	e1a00004 	mov	r0, r4
        1e0ab4:	eb60bf62 	bl	1a10844 <TAsyncSerTool::$FlushOutputBytes(void)>
        1e0ab8:	e5845780 	str	r5, [r4, #1920]	; fField1920
        1e0abc:	e1a00004 	mov	r0, r4
        1e0ac0:	e5941000 	ldr	r1, [r4]
        1e0ac4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e0ac8:	e281fe17 	add	pc, r1, #368	; 0x170
    */
}

/**
 * Symbol: TSharpIRTool::StopTransmit(void)
 * Address: 001e0acc
 */
TSharpIRTool::StopTransmit(void) {
    /*
        1e0acc:	e5901498 	ldr	r1, [r0, #1176]	; fField1176
        1e0ad0:	e3c11202 	bic	r1, r1, #536870912	; 0x20000000
        1e0ad4:	e5801498 	str	r1, [r0, #1176]	; fField1176
        1e0ad8:	e5901270 	ldr	r1, [r0, #624]	; fField624
        1e0adc:	e3710001 	cmn	r1, #1	; 0x1
        1e0ae0:	03a01000 	moveq	r1, #0	; 0x0
        1e0ae4:	05801270 	streq	r1, [r0, #624]	; fField624
        1e0ae8:	e590130c 	ldr	r1, [r0, #780]	; fField780
        1e0aec:	e3110040 	tst	r1, #64	; 0x40
        1e0af0:	15900304 	ldrne	r0, [r0, #772]	; fField772
        1e0af4:	13a01000 	movne	r1, #0	; 0x0
        1e0af8:	1a069078 	bne	384ce0 <TSerialChip::ConfigureForOutput(unsigned char)>
        1e0afc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSharpIRTool::StartOutput(CBufferList *)
 * Address: 001e0b00
 */
TSharpIRTool::StartOutput(CBufferList *) {
    /*
        1e0b00:	e1a0c00d 	mov	ip, sp
        1e0b04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e0b08:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0b0c:	e1a04000 	mov	r4, r0
        1e0b10:	e1a05001 	mov	r5, r1
        1e0b14:	e5d0028e 	ldrb	r0, [r0, #654]
        1e0b18:	e3300000 	teq	r0, #0	; 0x0
        1e0b1c:	03e01f97 	mvneq	r1, #604	; 0x25c
        1e0b20:	02411b11 	subeq	r1, r1, #17408	; 0x4400
        1e0b24:	0a000004 	beq	1e0b3c <TSharpIRTool::StartOutput(CBufferList *)+0x3c>
        1e0b28:	e5940728 	ldr	r0, [r4, #1832]	; fField1832
        1e0b2c:	e330000d 	teq	r0, #13	; 0xd
        1e0b30:	1a000005 	bne	1e0b4c <TSharpIRTool::StartOutput(CBufferList *)+0x4c>
        1e0b34:	e3a01f5f 	mov	r1, #380	; 0x17c
        1e0b38:	e2411901 	sub	r1, r1, #16384	; 0x4000
        1e0b3c:	e1a00004 	mov	r0, r4
        1e0b40:	e5942000 	ldr	r2, [r4]
        1e0b44:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e0b48:	e282ff63 	add	pc, r2, #396	; 0x18c
        1e0b4c:	e1a00005 	mov	r0, r5
        1e0b50:	e3e02000 	mvn	r2, #0	; 0x0
        1e0b54:	e3a01000 	mov	r1, #0	; 0x0
        1e0b58:	e5845270 	str	r5, [r4, #624]	; fField624
        1e0b5c:	e5953000 	ldr	r3, [r5]
        1e0b60:	e1a0e00f 	mov	lr, pc
        1e0b64:	e283f038 	add	pc, r3, #56	; 0x38
        1e0b68:	e1a00005 	mov	r0, r5
        1e0b6c:	e5951000 	ldr	r1, [r5]
        1e0b70:	e1a0e00f 	mov	lr, pc
        1e0b74:	e281f02c 	add	pc, r1, #44	; 0x2c
        1e0b78:	e5840274 	str	r0, [r4, #628]	; fField628
        1e0b7c:	e1a00004 	mov	r0, r4
        1e0b80:	e3a0100a 	mov	r1, #10	; 0xa
        1e0b84:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e0b88:	ea60d3c0 	b	1a15a90 <TSharpIRTool::$NextState(IREvent)>
    */
}

/**
 * Symbol: TSharpIRTool::DoOutput(void)
 * Address: 001e0b8c
 */
TSharpIRTool::DoOutput(void) {
    /*
        1e0b8c:	e1a0c00d 	mov	ip, sp
        1e0b90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e0b94:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0b98:	e1a04000 	mov	r4, r0
        1e0b9c:	e5901000 	ldr	r1, [r0]
        1e0ba0:	e1a0e00f 	mov	lr, pc
        1e0ba4:	e281fe19 	add	pc, r1, #400	; 0x190
        1e0ba8:	e1a05000 	mov	r5, r0
        1e0bac:	e3300001 	teq	r0, #1	; 0x1
        1e0bb0:	1a000006 	bne	1e0bd0 <TSharpIRTool::DoOutput(void)+0x44>
        1e0bb4:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
        1e0bb8:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
        1e0bbc:	e5840498 	str	r0, [r4, #1176]	; fField1176
        1e0bc0:	e1a00004 	mov	r0, r4
        1e0bc4:	e3a01001 	mov	r1, #1	; 0x1
        1e0bc8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e0bcc:	ea60b6e0 	b	1a0e754 <TAsyncSerTool::$ContinueOutputST(unsigned char)>
        1e0bd0:	e1a00004 	mov	r0, r4
        1e0bd4:	eb60e861 	bl	1a1ad60 <TSharpIRTool::$StopTransmit(void)>
        1e0bd8:	e5940780 	ldr	r0, [r4, #1920]	; fField1920
        1e0bdc:	e3700001 	cmn	r0, #1	; 0x1
        1e0be0:	01a01005 	moveq	r1, r5
        1e0be4:	01a00004 	moveq	r0, r4
        1e0be8:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        1e0bec:	0a60c746 	beq	1a1290c <TSharpIRTool::$HandleControl(long)>
        1e0bf0:	e3300000 	teq	r0, #0	; 0x0
        1e0bf4:	e1a01005 	mov	r1, r5
        1e0bf8:	e1a00004 	mov	r0, r4
        1e0bfc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1e0c00:	1a60c747 	bne	1a12924 <TSharpIRTool::$HandleNegotiate(long)>
        1e0c04:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        1e0c08:	0a60c741 	beq	1a12914 <TSharpIRTool::$HandleData(long)>
    */
}

/**
 * Symbol: TSharpIRTool::FillOutputBuffer(void)
 * Address: 001e0c0c
 */
TSharpIRTool::FillOutputBuffer(void) {
    /*
        1e0c0c:	e1a0c00d 	mov	ip, sp
        1e0c10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e0c14:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0c18:	e1a04000 	mov	r4, r0
        1e0c1c:	e3a00000 	mov	r0, #0	; 0x0
        1e0c20:	e2842e6d 	add	r2, r4, #1744	; 0x6d0
        1e0c24:	e8920006 	ldmia	r2, {r1, r2}
        1e0c28:	e1320001 	teq	r2, r1
        1e0c2c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1e0c30:	e59406c0 	ldr	r0, [r4, #1728]	; fField1728
        1e0c34:	e2845fe1 	add	r5, r4, #900	; 0x384
        1e0c38:	e3500000 	cmp	r0, #0	; 0x0
        1e0c3c:	9a000009 	bls	1e0c68 <TSharpIRTool::FillOutputBuffer(void)+0x5c>
        1e0c40:	e5d416d8 	ldrb	r1, [r4, #1752]	; fField1752
        1e0c44:	e1a00005 	mov	r0, r5
        1e0c48:	eb689e07 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
        1e0c4c:	e3300000 	teq	r0, #0	; 0x0
        1e0c50:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1e0c54:	e59406c0 	ldr	r0, [r4, #1728]	; fField1728
        1e0c58:	e2400001 	sub	r0, r0, #1	; 0x1
        1e0c5c:	e58406c0 	str	r0, [r4, #1728]	; fField1728
        1e0c60:	e3500000 	cmp	r0, #0	; 0x0
        1e0c64:	8afffff5 	bhi	1e0c40 <TSharpIRTool::FillOutputBuffer(void)+0x34>
        1e0c68:	e5940780 	ldr	r0, [r4, #1920]	; fField1920
        1e0c6c:	e3700001 	cmn	r0, #1	; 0x1
        1e0c70:	1a000016 	bne	1e0cd0 <TSharpIRTool::FillOutputBuffer(void)+0xc4>
        1e0c74:	e59416d4 	ldr	r1, [r4, #1748]	; fField1748
        1e0c78:	e2810001 	add	r0, r1, #1	; 0x1
        1e0c7c:	e58406d4 	str	r0, [r4, #1748]	; fField1748
        1e0c80:	e0810004 	add	r0, r1, r4
        1e0c84:	e5d014b0 	ldrb	r1, [r0, #1200]	; fField1200
        1e0c88:	e1a00005 	mov	r0, r5
        1e0c8c:	eb689df6 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
        1e0c90:	e3300000 	teq	r0, #0	; 0x0
        1e0c94:	1a000004 	bne	1e0cac <TSharpIRTool::FillOutputBuffer(void)+0xa0>
        1e0c98:	e59406d4 	ldr	r0, [r4, #1748]	; fField1748
        1e0c9c:	e59416d0 	ldr	r1, [r4, #1744]	; fField1744
        1e0ca0:	e1500001 	cmp	r0, r1
        1e0ca4:	3afffff2 	bcc	1e0c74 <TSharpIRTool::FillOutputBuffer(void)+0x68>
        1e0ca8:	ea00002f 	b	1e0d6c <TSharpIRTool::FillOutputBuffer(void)+0x160>
        1e0cac:	e3300003 	teq	r0, #3	; 0x3
        1e0cb0:	1a000003 	bne	1e0cc4 <TSharpIRTool::FillOutputBuffer(void)+0xb8>
        1e0cb4:	e59406d4 	ldr	r0, [r4, #1748]	; fField1748
        1e0cb8:	e2400001 	sub	r0, r0, #1	; 0x1
        1e0cbc:	e5a406d4 	str	r0, [r4, #1748]!	; fField1748
        1e0cc0:	ea000029 	b	1e0d6c <TSharpIRTool::FillOutputBuffer(void)+0x160>
        1e0cc4:	e3300000 	teq	r0, #0	; 0x0
        1e0cc8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1e0ccc:	ea000026 	b	1e0d6c <TSharpIRTool::FillOutputBuffer(void)+0x160>
        1e0cd0:	e3300000 	teq	r0, #0	; 0x0
        1e0cd4:	1a000012 	bne	1e0d24 <TSharpIRTool::FillOutputBuffer(void)+0x118>
        1e0cd8:	e59416d4 	ldr	r1, [r4, #1748]	; fField1748
        1e0cdc:	e2810001 	add	r0, r1, #1	; 0x1
        1e0ce0:	e58406d4 	str	r0, [r4, #1748]	; fField1748
        1e0ce4:	e0810004 	add	r0, r1, r4
        1e0ce8:	e5d014b4 	ldrb	r1, [r0, #1204]
        1e0cec:	e1a00005 	mov	r0, r5
        1e0cf0:	eb689ddd 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
        1e0cf4:	e3300000 	teq	r0, #0	; 0x0
        1e0cf8:	1a000004 	bne	1e0d10 <TSharpIRTool::FillOutputBuffer(void)+0x104>
        1e0cfc:	e59406d4 	ldr	r0, [r4, #1748]	; fField1748
        1e0d00:	e59416d0 	ldr	r1, [r4, #1744]	; fField1744
        1e0d04:	e1500001 	cmp	r0, r1
        1e0d08:	3afffff2 	bcc	1e0cd8 <TSharpIRTool::FillOutputBuffer(void)+0xcc>
        1e0d0c:	ea000016 	b	1e0d6c <TSharpIRTool::FillOutputBuffer(void)+0x160>
        1e0d10:	e3300003 	teq	r0, #3	; 0x3
        1e0d14:	0affffe6 	beq	1e0cb4 <TSharpIRTool::FillOutputBuffer(void)+0xa8>
        1e0d18:	e3300000 	teq	r0, #0	; 0x0
        1e0d1c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1e0d20:	ea000011 	b	1e0d6c <TSharpIRTool::FillOutputBuffer(void)+0x160>
        1e0d24:	e59416d4 	ldr	r1, [r4, #1748]	; fField1748
        1e0d28:	e2810001 	add	r0, r1, #1	; 0x1
        1e0d2c:	e58406d4 	str	r0, [r4, #1748]	; fField1748
        1e0d30:	e0810004 	add	r0, r1, r4
        1e0d34:	e5d014b0 	ldrb	r1, [r0, #1200]	; fField1200
        1e0d38:	e1a00005 	mov	r0, r5
        1e0d3c:	eb689dca 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
        1e0d40:	e3300000 	teq	r0, #0	; 0x0
        1e0d44:	1a000004 	bne	1e0d5c <TSharpIRTool::FillOutputBuffer(void)+0x150>
        1e0d48:	e59406d4 	ldr	r0, [r4, #1748]	; fField1748
        1e0d4c:	e59416d0 	ldr	r1, [r4, #1744]	; fField1744
        1e0d50:	e1500001 	cmp	r0, r1
        1e0d54:	3afffff2 	bcc	1e0d24 <TSharpIRTool::FillOutputBuffer(void)+0x118>
        1e0d58:	ea000003 	b	1e0d6c <TSharpIRTool::FillOutputBuffer(void)+0x160>
        1e0d5c:	e3300003 	teq	r0, #3	; 0x3
        1e0d60:	0affffd3 	beq	1e0cb4 <TSharpIRTool::FillOutputBuffer(void)+0xa8>
        1e0d64:	e3300000 	teq	r0, #0	; 0x0
        1e0d68:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1e0d6c:	e3a00001 	mov	r0, #1	; 0x1
        1e0d70:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::GetToolName(void)
 * Address: 001e0d74
 */
TSharpIRTool::GetToolName(void) {
    /*
        1e0d74:	e28f0f00 	add	r0, pc, #0	; 0x0
        1e0d78:	e1a0f00e 	mov	pc, lr
        1e0d7c:	536c6f77 	cmnpl	ip, #476	; 0x1dc
        1e0d80:	49520000 	ldmmidb	r2, {}^
    */
}

/**
 * Symbol: TSharpIRTool::PrepLeadIn(void)
 * Address: 001e0d84
 */
TSharpIRTool::PrepLeadIn(void) {
    /*
        1e0d84:	e3a02000 	mov	r2, #0	; 0x0
        1e0d88:	e3a01005 	mov	r1, #5	; 0x5
        1e0d8c:	e5903740 	ldr	r3, [r0, #1856]	; fField1856
        1e0d90:	e3330002 	teq	r3, #2	; 0x2
        1e0d94:	0a000003 	beq	1e0da8 <TSharpIRTool::PrepLeadIn(void)+0x24>
        1e0d98:	e3330004 	teq	r3, #4	; 0x4
        1e0d9c:	15c026d8 	strneb	r2, [r0, #1752]	; fField1752
        1e0da0:	1a00000a 	bne	1e0dd0 <TSharpIRTool::PrepLeadIn(void)+0x4c>
        1e0da4:	e3a020ff 	mov	r2, #255	; 0xff
        1e0da8:	e5c026d8 	strb	r2, [r0, #1752]	; fField1752
        1e0dac:	e5902744 	ldr	r2, [r0, #1860]	; fField1860
        1e0db0:	e3320001 	teq	r2, #1	; 0x1
        1e0db4:	0a000005 	beq	1e0dd0 <TSharpIRTool::PrepLeadIn(void)+0x4c>
        1e0db8:	e3320002 	teq	r2, #2	; 0x2
        1e0dbc:	03a0100a 	moveq	r1, #10	; 0xa
        1e0dc0:	0a000002 	beq	1e0dd0 <TSharpIRTool::PrepLeadIn(void)+0x4c>
        1e0dc4:	e3320004 	teq	r2, #4	; 0x4
        1e0dc8:	11a0f00e 	movne	pc, lr
        1e0dcc:	e3a01028 	mov	r1, #40	; 0x28
        1e0dd0:	e5a016c0 	str	r1, [r0, #1728]!	; fField1728
        1e0dd4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSharpIRTool::PrepDataPacket(void)
 * Address: 001e0dd8
 */
TSharpIRTool::PrepDataPacket(void) {
    /*
        1e0dd8:	e1a0c00d 	mov	ip, sp
        1e0ddc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e0de0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0de4:	e1a04000 	mov	r4, r0
        1e0de8:	e3a05000 	mov	r5, #0	; 0x0
        1e0dec:	e58056d4 	str	r5, [r0, #1748]	; fField1748
        1e0df0:	eb60fc90 	bl	1a20038 <TSharpIRTool::$PrepLeadIn(void)>
        1e0df4:	e5d40784 	ldrb	r0, [r4, #1924]	; fField1924
        1e0df8:	e3300000 	teq	r0, #0	; 0x0
        1e0dfc:	159406cc 	ldrne	r0, [r4, #1740]	; fField1740
        1e0e00:	1280000c 	addne	r0, r0, #12	; 0xc
        1e0e04:	15a406d0 	strne	r0, [r4, #1744]!	; fField1744
        1e0e08:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1e0e0c:	e3a00003 	mov	r0, #3	; 0x3
        1e0e10:	e5840724 	str	r0, [r4, #1828]	; fField1828
        1e0e14:	e5940274 	ldr	r0, [r4, #628]	; fField628
        1e0e18:	e3500c02 	cmp	r0, #512	; 0x200
        1e0e1c:	8a00004c 	bhi	1e0f54 <TSharpIRTool::PrepDataPacket(void)+0x17c>
        1e0e20:	e58406cc 	str	r0, [r4, #1740]	; fField1740
        1e0e24:	e5845274 	str	r5, [r4, #628]	; fField628
        1e0e28:	e5d40278 	ldrb	r0, [r4, #632]	; fField632
        1e0e2c:	e3300000 	teq	r0, #0	; 0x0
        1e0e30:	13a00801 	movne	r0, #65536	; 0x10000
        1e0e34:	12400001 	subne	r0, r0, #1	; 0x1
        1e0e38:	1a000001 	bne	1e0e44 <TSharpIRTool::PrepDataPacket(void)+0x6c>
        1e0e3c:	e59406c4 	ldr	r0, [r4, #1732]	; fField1732
        1e0e40:	e2800001 	add	r0, r0, #1	; 0x1
        1e0e44:	e58406c4 	str	r0, [r4, #1732]	; fField1732
        1e0e48:	e59406cc 	ldr	r0, [r4, #1740]	; fField1740
        1e0e4c:	e280000c 	add	r0, r0, #12	; 0xc
        1e0e50:	e58406d0 	str	r0, [r4, #1744]	; fField1744
        1e0e54:	e28400b4 	add	r0, r4, #180	; 0xb4
        1e0e58:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e0e5c:	e5942740 	ldr	r2, [r4, #1856]	; fField1856
        1e0e60:	e28410b5 	add	r1, r4, #181	; 0xb5
        1e0e64:	e2811b01 	add	r1, r1, #1024	; 0x400
        1e0e68:	e3320002 	teq	r2, #2	; 0x2
        1e0e6c:	13320004 	teqne	r2, #4	; 0x4
        1e0e70:	03a0209b 	moveq	r2, #155	; 0x9b
        1e0e74:	0a000002 	beq	1e0e84 <TSharpIRTool::PrepDataPacket(void)+0xac>
        1e0e78:	e3320001 	teq	r2, #1	; 0x1
        1e0e7c:	1a000002 	bne	1e0e8c <TSharpIRTool::PrepDataPacket(void)+0xb4>
        1e0e80:	e3a02096 	mov	r2, #150	; 0x96
        1e0e84:	e5c02000 	strb	r2, [r0]
        1e0e88:	e1a00001 	mov	r0, r1
        1e0e8c:	e3a01081 	mov	r1, #129	; 0x81
        1e0e90:	e4c01001 	strb	r1, [r0], #1	; fField1
        1e0e94:	e3a02010 	mov	r2, #16	; 0x10
        1e0e98:	e5c02000 	strb	r2, [r0]
        1e0e9c:	e2801001 	add	r1, r0, #1	; 0x1
        1e0ea0:	e59406c4 	ldr	r0, [r4, #1732]	; fField1732
        1e0ea4:	e4c10001 	strb	r0, [r1], #1	; fField1
        1e0ea8:	e1a00001 	mov	r0, r1
        1e0eac:	e3a060ff 	mov	r6, #255	; 0xff
        1e0eb0:	e59416c4 	ldr	r1, [r4, #1732]	; fField1732
        1e0eb4:	e0061421 	and	r1, r6, r1, lsr #8
        1e0eb8:	e4c01001 	strb	r1, [r0], #1	; fField1
        1e0ebc:	e3a01001 	mov	r1, #1	; 0x1
        1e0ec0:	e4c01001 	strb	r1, [r0], #1	; fField1
        1e0ec4:	e3a01040 	mov	r1, #64	; 0x40
        1e0ec8:	e4c01001 	strb	r1, [r0], #1	; fField1
        1e0ecc:	e3a010fe 	mov	r1, #254	; 0xfe
        1e0ed0:	e4c01001 	strb	r1, [r0], #1	; fField1
        1e0ed4:	e59416cc 	ldr	r1, [r4, #1740]	; fField1740
        1e0ed8:	e4c01001 	strb	r1, [r0], #1	; fField1
        1e0edc:	e59416cc 	ldr	r1, [r4, #1740]	; fField1740
        1e0ee0:	e0061421 	and	r1, r6, r1, lsr #8
        1e0ee4:	e4c01001 	strb	r1, [r0], #1	; fField1
        1e0ee8:	e1a05000 	mov	r5, r0
        1e0eec:	e24dd004 	sub	sp, sp, #4	; 0x4
        1e0ef0:	e59406cc 	ldr	r0, [r4, #1740]	; fField1740
        1e0ef4:	e58d0000 	str	r0, [sp]
        1e0ef8:	e1a0200d 	mov	r2, sp
        1e0efc:	e1a01005 	mov	r1, r5
        1e0f00:	e5943270 	ldr	r3, [r4, #624]	; fField624
        1e0f04:	e1a00003 	mov	r0, r3
        1e0f08:	e5933000 	ldr	r3, [r3]
        1e0f0c:	e1a0e00f 	mov	lr, pc
        1e0f10:	e283f018 	add	pc, r3, #24	; 0x18
        1e0f14:	e3a00000 	mov	r0, #0	; 0x0
        1e0f18:	e3a01000 	mov	r1, #0	; 0x0
        1e0f1c:	e5b426cc 	ldr	r2, [r4, #1740]!	; fField1740
        1e0f20:	e3520000 	cmp	r2, #0	; 0x0
        1e0f24:	9a000004 	bls	1e0f3c <TSharpIRTool::PrepDataPacket(void)+0x164>
        1e0f28:	e4d53001 	ldrb	r3, [r5], #1	; fField1
        1e0f2c:	e0830000 	add	r0, r3, r0
        1e0f30:	e2811001 	add	r1, r1, #1	; 0x1
        1e0f34:	e1520001 	cmp	r2, r1
        1e0f38:	8afffffa 	bhi	1e0f28 <TSharpIRTool::PrepDataPacket(void)+0x150>
        1e0f3c:	e1a00800 	mov	r0, r0, lsl #16
        1e0f40:	e1a00820 	mov	r0, r0, lsr #16
        1e0f44:	e4c50001 	strb	r0, [r5], #1	; fField1
        1e0f48:	e0060420 	and	r0, r6, r0, lsr #8
        1e0f4c:	e5c50000 	strb	r0, [r5]
        1e0f50:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1e0f54:	e3a01c02 	mov	r1, #512	; 0x200
        1e0f58:	e2400c02 	sub	r0, r0, #512	; 0x200
        1e0f5c:	e5840274 	str	r0, [r4, #628]	; fField628
        1e0f60:	e58416cc 	str	r1, [r4, #1740]	; fField1740
        1e0f64:	eaffffb4 	b	1e0e3c <TSharpIRTool::PrepDataPacket(void)+0x64>
    */
}

/**
 * Symbol: TSharpIRTool::PrepControlPacket(unsigned char)
 * Address: 001e0f68
 */
TSharpIRTool::PrepControlPacket(unsigned char) {
    /*
        1e0f68:	e1a0c00d 	mov	ip, sp
        1e0f6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e0f70:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0f74:	e1a04000 	mov	r4, r0
        1e0f78:	e20150ff 	and	r5, r1, #255	; 0xff
        1e0f7c:	eb60fc2d 	bl	1a20038 <TSharpIRTool::$PrepLeadIn(void)>
        1e0f80:	e2840e4b 	add	r0, r4, #1200	; 0x4b0
        1e0f84:	e5941740 	ldr	r1, [r4, #1856]	; fField1856
        1e0f88:	e28420b1 	add	r2, r4, #177	; 0xb1
        1e0f8c:	e2822b01 	add	r2, r2, #1024	; 0x400
        1e0f90:	e3310002 	teq	r1, #2	; 0x2
        1e0f94:	13310004 	teqne	r1, #4	; 0x4
        1e0f98:	03a0109b 	moveq	r1, #155	; 0x9b
        1e0f9c:	0a000003 	beq	1e0fb0 <TSharpIRTool::PrepControlPacket(unsigned char)+0x48>
        1e0fa0:	e3310001 	teq	r1, #1	; 0x1
        1e0fa4:	13310000 	teqne	r1, #0	; 0x0
        1e0fa8:	1a000002 	bne	1e0fb8 <TSharpIRTool::PrepControlPacket(unsigned char)+0x50>
        1e0fac:	e3a01096 	mov	r1, #150	; 0x96
        1e0fb0:	e5c01000 	strb	r1, [r0]
        1e0fb4:	e1a00002 	mov	r0, r2
        1e0fb8:	e3a01082 	mov	r1, #130	; 0x82
        1e0fbc:	e4c01001 	strb	r1, [r0], #1	; fField1
        1e0fc0:	e5c05000 	strb	r5, [r0]
        1e0fc4:	e3a00000 	mov	r0, #0	; 0x0
        1e0fc8:	e58406d4 	str	r0, [r4, #1748]	; fField1748
        1e0fcc:	e3a00003 	mov	r0, #3	; 0x3
        1e0fd0:	e5a406d0 	str	r0, [r4, #1744]!	; fField1744
        1e0fd4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::PrepNegotiatePacket(unsigned char, unsigned char, unsigned char)
 * Address: 001e0fd8
 */
TSharpIRTool::PrepNegotiatePacket(unsigned char, unsigned char, unsigned char) {
    /*
        1e0fd8:	e92d4010 	stmdb	sp!, {r4, lr}
        1e0fdc:	e202c0ff 	and	ip, r2, #255	; 0xff
        1e0fe0:	e203e0ff 	and	lr, r3, #255	; 0xff
        1e0fe4:	e3a02005 	mov	r2, #5	; 0x5
        1e0fe8:	e58026c0 	str	r2, [r0, #1728]	; fField1728
        1e0fec:	e3a02000 	mov	r2, #0	; 0x0
        1e0ff0:	e5c026d8 	strb	r2, [r0, #1752]	; fField1752
        1e0ff4:	e2803e4b 	add	r3, r0, #1200	; 0x4b0
        1e0ff8:	e3a04090 	mov	r4, #144	; 0x90
        1e0ffc:	e4c34001 	strb	r4, [r3], #1	; fField1
        1e1000:	e4c31001 	strb	r1, [r3], #1	; fField1
        1e1004:	e4c3c001 	strb	ip, [r3], #1	; fField1
        1e1008:	e5c3e000 	strb	lr, [r3]
        1e100c:	e3a01004 	mov	r1, #4	; 0x4
        1e1010:	e2800fb3 	add	r0, r0, #716	; 0x2cc
        1e1014:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e1018:	e9a00006 	stmib	r0!, {r1, r2}
        1e101c:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TSharpIRTool::StartReceive(IRPacketType)
 * Address: 001e1020
 */
TSharpIRTool::StartReceive(IRPacketType) {
    /*
        1e1020:	e1a0c00d 	mov	ip, sp
        1e1024:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e1028:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e102c:	e1a04000 	mov	r4, r0
        1e1030:	e1a05001 	mov	r5, r1
        1e1034:	eb60be01 	bl	1a10840 <TAsyncSerTool::$FlushInputBytes(void)>
        1e1038:	e594027c 	ldr	r0, [r4, #636]	; fField636
        1e103c:	e3300000 	teq	r0, #0	; 0x0
        1e1040:	03e00000 	mvneq	r0, #0	; 0x0
        1e1044:	0584027c 	streq	r0, [r4, #636]	; fField636
        1e1048:	e3a00001 	mov	r0, #1	; 0x1
        1e104c:	e584072c 	str	r0, [r4, #1836]	; fField1836
        1e1050:	e3a00000 	mov	r0, #0	; 0x0
        1e1054:	e58406d4 	str	r0, [r4, #1748]	; fField1748
        1e1058:	e58406d0 	str	r0, [r4, #1744]	; fField1744
        1e105c:	e5845780 	str	r5, [r4, #1920]	; fField1920
        1e1060:	e1a00004 	mov	r0, r4
        1e1064:	e5941000 	ldr	r1, [r4]
        1e1068:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e106c:	e281ff5e 	add	pc, r1, #376	; 0x178
    */
}

/**
 * Symbol: TSharpIRTool::StopReceive(void)
 * Address: 001e1070
 */
TSharpIRTool::StopReceive(void) {
    /*
        1e1070:	e5901498 	ldr	r1, [r0, #1176]	; fField1176
        1e1074:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
        1e1078:	e5801498 	str	r1, [r0, #1176]	; fField1176
        1e107c:	e3a01000 	mov	r1, #0	; 0x0
        1e1080:	e590227c 	ldr	r2, [r0, #636]	; fField636
        1e1084:	e3720001 	cmn	r2, #1	; 0x1
        1e1088:	0580127c 	streq	r1, [r0, #636]	; fField636
        1e108c:	e5a0172c 	str	r1, [r0, #1836]!	; fField1836
        1e1090:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSharpIRTool::StartInput(CBufferList *)
 * Address: 001e1094
 */
TSharpIRTool::StartInput(CBufferList *) {
    /*
        1e1094:	e1a0c00d 	mov	ip, sp
        1e1098:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e109c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e10a0:	e1a04000 	mov	r4, r0
        1e10a4:	e1a05001 	mov	r5, r1
        1e10a8:	e59006c4 	ldr	r0, [r0, #1732]	; fField1732
        1e10ac:	e3500001 	cmp	r0, #1	; 0x1
        1e10b0:	33a00001 	movcc	r0, #1	; 0x1
        1e10b4:	358406c4 	strcc	r0, [r4, #1732]	; fField1732
        1e10b8:	e1a00005 	mov	r0, r5
        1e10bc:	e3e02000 	mvn	r2, #0	; 0x0
        1e10c0:	e3a01000 	mov	r1, #0	; 0x0
        1e10c4:	e584527c 	str	r5, [r4, #636]	; fField636
        1e10c8:	e5953000 	ldr	r3, [r5]
        1e10cc:	e1a0e00f 	mov	lr, pc
        1e10d0:	e283f038 	add	pc, r3, #56	; 0x38
        1e10d4:	e1a00005 	mov	r0, r5
        1e10d8:	e5951000 	ldr	r1, [r5]
        1e10dc:	e1a0e00f 	mov	lr, pc
        1e10e0:	e281f02c 	add	pc, r1, #44	; 0x2c
        1e10e4:	e5840280 	str	r0, [r4, #640]	; fField640
        1e10e8:	e5940728 	ldr	r0, [r4, #1832]	; fField1832
        1e10ec:	e330000d 	teq	r0, #13	; 0xd
        1e10f0:	1a000005 	bne	1e110c <TSharpIRTool::StartInput(CBufferList *)+0x78>
        1e10f4:	e1a00004 	mov	r0, r4
        1e10f8:	eb60b175 	bl	1a0d6d4 <TSharpIRTool::$CheckReceiveDone(void)>
        1e10fc:	e3300000 	teq	r0, #0	; 0x0
        1e1100:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1e1104:	e3a00000 	mov	r0, #0	; 0x0
        1e1108:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e110c:	e1a00004 	mov	r0, r4
        1e1110:	e3a01001 	mov	r1, #1	; 0x1
        1e1114:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e1118:	ea60d25c 	b	1a15a90 <TSharpIRTool::$NextState(IREvent)>
    */
}

/**
 * Symbol: TSharpIRTool::DoInput(void)
 * Address: 001e111c
 */
TSharpIRTool::DoInput(void) {
    /*
        1e111c:	e1a0c00d 	mov	ip, sp
        1e1120:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e1124:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e1128:	e1a04000 	mov	r4, r0
        1e112c:	e5900498 	ldr	r0, [r0, #1176]	; fField1176
        1e1130:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
        1e1134:	e5840498 	str	r0, [r4, #1176]	; fField1176
        1e1138:	e1a00004 	mov	r0, r4
        1e113c:	eb6103f2 	bl	1a2210c <TAsyncSerTool::$SyncInputBuffer(void)>
        1e1140:	e1a00004 	mov	r0, r4
        1e1144:	e3a01000 	mov	r1, #0	; 0x0
        1e1148:	e5942000 	ldr	r2, [r4]
        1e114c:	e1a0e00f 	mov	lr, pc
        1e1150:	e282ff66 	add	pc, r2, #408	; 0x198
        1e1154:	e1a05000 	mov	r5, r0
        1e1158:	e3300001 	teq	r0, #1	; 0x1
        1e115c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1e1160:	e1a00004 	mov	r0, r4
        1e1164:	eb60e6fa 	bl	1a1ad54 <TSharpIRTool::$StopReceive(void)>
        1e1168:	e5940780 	ldr	r0, [r4, #1920]	; fField1920
        1e116c:	e3700001 	cmn	r0, #1	; 0x1
        1e1170:	01a01005 	moveq	r1, r5
        1e1174:	01a00004 	moveq	r0, r4
        1e1178:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        1e117c:	0a60c5e2 	beq	1a1290c <TSharpIRTool::$HandleControl(long)>
        1e1180:	e3300000 	teq	r0, #0	; 0x0
        1e1184:	e1a01005 	mov	r1, r5
        1e1188:	e1a00004 	mov	r0, r4
        1e118c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1e1190:	1a60c5e3 	bne	1a12924 <TSharpIRTool::$HandleNegotiate(long)>
        1e1194:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        1e1198:	0a60c5dd 	beq	1a12914 <TSharpIRTool::$HandleData(long)>
    */
}

/**
 * Symbol: TSharpIRTool::EmptyInputBuffer(unsigned long *)
 * Address: 001e119c
 */
TSharpIRTool::EmptyInputBuffer(unsigned long *) {
    /*
        1e119c:	e1a0c00d 	mov	ip, sp
        1e11a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e11a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e11a8:	e1a04000 	mov	r4, r0
        1e11ac:	e3a00000 	mov	r0, #0	; 0x0
        1e11b0:	e594172c 	ldr	r1, [r4, #1836]	; fField1836
        1e11b4:	e3310001 	teq	r1, #1	; 0x1
        1e11b8:	13310002 	teqne	r1, #2	; 0x2
        1e11bc:	13310003 	teqne	r1, #3	; 0x3
        1e11c0:	1a000003 	bne	1e11d4 <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0x38>
        1e11c4:	e1a00004 	mov	r0, r4
        1e11c8:	eb60da89 	bl	1a17bf4 <TSharpIRTool::$ReceiveLeadIn(void)>
        1e11cc:	e3300000 	teq	r0, #0	; 0x0
        1e11d0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1e11d4:	e5941740 	ldr	r1, [r4, #1856]	; fField1856
        1e11d8:	e3310002 	teq	r1, #2	; 0x2
        1e11dc:	13310004 	teqne	r1, #4	; 0x4
        1e11e0:	1a000002 	bne	1e11f0 <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0x54>
        1e11e4:	e5d424b0 	ldrb	r2, [r4, #1200]	; fField1200
        1e11e8:	e332009b 	teq	r2, #155	; 0x9b
        1e11ec:	1a00000b 	bne	1e1220 <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0x84>
        1e11f0:	e3310001 	teq	r1, #1	; 0x1
        1e11f4:	1a000003 	bne	1e1208 <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0x6c>
        1e11f8:	e5d414b0 	ldrb	r1, [r4, #1200]	; fField1200
        1e11fc:	e3310096 	teq	r1, #150	; 0x96
        1e1200:	0a00000c 	beq	1e1238 <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0x9c>
        1e1204:	ea000005 	b	1e1220 <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0x84>
        1e1208:	e3310000 	teq	r1, #0	; 0x0
        1e120c:	1a000009 	bne	1e1238 <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0x9c>
        1e1210:	e5d414b0 	ldrb	r1, [r4, #1200]	; fField1200
        1e1214:	e3310090 	teq	r1, #144	; 0x90
        1e1218:	13310096 	teqne	r1, #150	; 0x96
        1e121c:	0a000005 	beq	1e1238 <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0x9c>
        1e1220:	e594076c 	ldr	r0, [r4, #1900]	; fField1900
        1e1224:	e2800001 	add	r0, r0, #1	; 0x1
        1e1228:	e5a4076c 	str	r0, [r4, #1900]!	; fField1900
        1e122c:	e3e00072 	mvn	r0, #114	; 0x72
        1e1230:	e2400b25 	sub	r0, r0, #37888	; 0x9400
        1e1234:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1e1238:	e5941728 	ldr	r1, [r4, #1832]	; fField1832
        1e123c:	e351000c 	cmp	r1, #12	; 0xc
        1e1240:	01a00004 	moveq	r0, r4
        1e1244:	03a01006 	moveq	r1, #6	; 0x6
        1e1248:	0a000010 	beq	1e1290 <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0xf4>
        1e124c:	ca000011 	bgt	1e1298 <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0xfc>
        1e1250:	e3510004 	cmp	r1, #4	; 0x4
        1e1254:	01a00004 	moveq	r0, r4
        1e1258:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        1e125c:	0a60da63 	beq	1a17bf0 <TSharpIRTool::$ReceiveData(void)>
        1e1260:	ca000005 	bgt	1e127c <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0xe0>
        1e1264:	e3310001 	teq	r1, #1	; 0x1
        1e1268:	13310002 	teqne	r1, #2	; 0x2
        1e126c:	01a00004 	moveq	r0, r4
        1e1270:	03a01005 	moveq	r1, #5	; 0x5
        1e1274:	0a000005 	beq	1e1290 <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0xf4>
        1e1278:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1e127c:	e3310009 	teq	r1, #9	; 0x9
        1e1280:	1331000a 	teqne	r1, #10	; 0xa
        1e1284:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1e1288:	e1a00004 	mov	r0, r4
        1e128c:	e3a01016 	mov	r1, #22	; 0x16
        1e1290:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e1294:	ea60da53 	b	1a17be8 <TSharpIRTool::$ReceiveControl(unsigned char)>
        1e1298:	e331000e 	teq	r1, #14	; 0xe
        1e129c:	1331000f 	teqne	r1, #15	; 0xf
        1e12a0:	01a00004 	moveq	r0, r4
        1e12a4:	03a01085 	moveq	r1, #133	; 0x85
        1e12a8:	0a000004 	beq	1e12c0 <TSharpIRTool::EmptyInputBuffer(unsigned long *)+0x124>
        1e12ac:	e3310015 	teq	r1, #21	; 0x15
        1e12b0:	13310016 	teqne	r1, #22	; 0x16
        1e12b4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1e12b8:	e1a00004 	mov	r0, r4
        1e12bc:	e3a01086 	mov	r1, #134	; 0x86
        1e12c0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e12c4:	ea60da4b 	b	1a17bf8 <TSharpIRTool::$ReceiveNegotiate(unsigned char)>
    */
}

/**
 * Symbol: TSharpIRTool::ReceiveLeadIn(void)
 * Address: 001e12c8
 */
TSharpIRTool::ReceiveLeadIn(void) {
    /*
        1e12c8:	e1a0c00d 	mov	ip, sp
        1e12cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e12d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e12d4:	e1a04000 	mov	r4, r0
        1e12d8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1e12dc:	e2805feb 	add	r5, r0, #940	; 0x3ac
        1e12e0:	e3a00000 	mov	r0, #0	; 0x0
        1e12e4:	e58d0000 	str	r0, [sp]
        1e12e8:	e1a00005 	mov	r0, r5
        1e12ec:	e1a0200d 	mov	r2, sp
        1e12f0:	e28d1004 	add	r1, sp, #4	; 0x4
        1e12f4:	eb68941c 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
        1e12f8:	e3300002 	teq	r0, #2	; 0x2
        1e12fc:	03a00001 	moveq	r0, #1	; 0x1
        1e1300:	0a00000d 	beq	1e133c <TSharpIRTool::ReceiveLeadIn(void)+0x74>
        1e1304:	e3300001 	teq	r0, #1	; 0x1
        1e1308:	0afffff4 	beq	1e12e0 <TSharpIRTool::ReceiveLeadIn(void)+0x18>
        1e130c:	e5dd0004 	ldrb	r0, [sp, #4]
        1e1310:	e3300096 	teq	r0, #150	; 0x96
        1e1314:	15dd0004 	ldrneb	r0, [sp, #4]
        1e1318:	1330009b 	teqne	r0, #155	; 0x9b
        1e131c:	15dd0004 	ldrneb	r0, [sp, #4]
        1e1320:	13300090 	teqne	r0, #144	; 0x90
        1e1324:	1affffed 	bne	1e12e0 <TSharpIRTool::ReceiveLeadIn(void)+0x18>
        1e1328:	e5dd0004 	ldrb	r0, [sp, #4]
        1e132c:	e5c404b0 	strb	r0, [r4, #1200]	; fField1200
        1e1330:	e3a00004 	mov	r0, #4	; 0x4
        1e1334:	e5a4072c 	str	r0, [r4, #1836]!	; fField1836
        1e1338:	e3a00000 	mov	r0, #0	; 0x0
        1e133c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::TaskConstructor(void)
 * Address: 001e1340
 */
TSharpIRTool::TaskConstructor(void) {
    /*
        1e1340:	e1a0c00d 	mov	ip, sp
        1e1344:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e1348:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e134c:	e1a04000 	mov	r4, r0
        1e1350:	eb60e685 	bl	1a1ad6c <TAsyncSerTool::$TaskConstructor(void)>
        1e1354:	e3300000 	teq	r0, #0	; 0x0
        1e1358:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1e135c:	e3a00002 	mov	r0, #2	; 0x2
        1e1360:	e5840300 	str	r0, [r4, #768]	; fField768
        1e1364:	e2840fb7 	add	r0, r4, #732	; 0x2dc
        1e1368:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e136c:	e1a05000 	mov	r5, r0
        1e1370:	e3a01001 	mov	r1, #1	; 0x1
        1e1374:	eb67d1c6 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        1e1378:	e3300000 	teq	r0, #0	; 0x0
        1e137c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1e1380:	e5950000 	ldr	r0, [r5]
        1e1384:	e58406ec 	str	r0, [r4, #1772]	; fField1772
        1e1388:	e59f70ac 	ldr	r7, [pc, #ac]	; 1e143c <TSharpIRTool::TaskConstructor(void)+0xfc>
        1e138c:	e3a06000 	mov	r6, #0	; 0x0
        1e1390:	e58466f8 	str	r6, [r4, #1784]
        1e1394:	e58476f4 	str	r7, [r4, #1780]
        1e1398:	e58466fc 	str	r6, [r4, #1788]	; fField1788
        1e139c:	e2840c07 	add	r0, r4, #1792	; 0x700
        1e13a0:	e1a05000 	mov	r5, r0
        1e13a4:	e3a01001 	mov	r1, #1	; 0x1
        1e13a8:	eb67d1b9 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        1e13ac:	e3300000 	teq	r0, #0	; 0x0
        1e13b0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1e13b4:	e5951000 	ldr	r1, [r5]
        1e13b8:	e5841710 	str	r1, [r4, #1808]	; fField1808
        1e13bc:	e584671c 	str	r6, [r4, #1820]
        1e13c0:	e5847718 	str	r7, [r4, #1816]
        1e13c4:	e5846720 	str	r6, [r4, #1824]	; fField1824
        1e13c8:	e58466c0 	str	r6, [r4, #1728]	; fField1728
        1e13cc:	e5c466d8 	strb	r6, [r4, #1752]	; fField1752
        1e13d0:	e58466c4 	str	r6, [r4, #1732]	; fField1732
        1e13d4:	e58466c8 	str	r6, [r4, #1736]	; fField1736
        1e13d8:	e58466cc 	str	r6, [r4, #1740]	; fField1740
        1e13dc:	e58466d0 	str	r6, [r4, #1744]	; fField1744
        1e13e0:	e58466d4 	str	r6, [r4, #1748]	; fField1748
        1e13e4:	e5846724 	str	r6, [r4, #1828]	; fField1828
        1e13e8:	e5846728 	str	r6, [r4, #1832]	; fField1832
        1e13ec:	e3a01001 	mov	r1, #1	; 0x1
        1e13f0:	e5841780 	str	r1, [r4, #1920]	; fField1920
        1e13f4:	e584672c 	str	r6, [r4, #1836]	; fField1836
        1e13f8:	e5c46784 	strb	r6, [r4, #1924]	; fField1924
        1e13fc:	e5846788 	str	r6, [r4, #1928]
        1e1400:	e5841154 	str	r1, [r4, #340]
        1e1404:	e3a0101a 	mov	r1, #26	; 0x1a
        1e1408:	e5841158 	str	r1, [r4, #344]
        1e140c:	e3a01402 	mov	r1, #33554432	; 0x2000000
        1e1410:	e2411c02 	sub	r1, r1, #512	; 0x200
        1e1414:	e584115c 	str	r1, [r4, #348]
        1e1418:	e3e01001 	mvn	r1, #1	; 0x1
        1e141c:	e5841160 	str	r1, [r4, #352]
        1e1420:	e584678c 	str	r6, [r4, #1932]
        1e1424:	e5841164 	str	r1, [r4, #356]
        1e1428:	e5841168 	str	r1, [r4, #360]
        1e142c:	e584116c 	str	r1, [r4, #364]
        1e1430:	e3e01000 	mvn	r1, #0	; 0x0
        1e1434:	e5a41170 	str	r1, [r4, #368]!
        1e1438:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1e143c:	736c6972 	cmnvc	ip, #1867776	; 0x1c8000
    */
}

/**
 * Symbol: TSharpIRTool::ReceiveControl(unsigned char)
 * Address: 001e1440
 */
TSharpIRTool::ReceiveControl(unsigned char) {
    /*
        1e1440:	e1a0c00d 	mov	ip, sp
        1e1444:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e1448:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e144c:	e1a04000 	mov	r4, r0
        1e1450:	e20150ff 	and	r5, r1, #255	; 0xff
        1e1454:	e24dd008 	sub	sp, sp, #8	; 0x8
        1e1458:	e3e08076 	mvn	r8, #118	; 0x76
        1e145c:	e2488b25 	sub	r8, r8, #37888	; 0x9400
        1e1460:	e2887004 	add	r7, r8, #4	; 0x4
        1e1464:	e590172c 	ldr	r1, [r0, #1836]	; fField1836
        1e1468:	e2806feb 	add	r6, r0, #940	; 0x3ac
        1e146c:	e3310004 	teq	r1, #4	; 0x4
        1e1470:	1a000011 	bne	1e14bc <TSharpIRTool::ReceiveControl(unsigned char)+0x7c>
        1e1474:	e1a00006 	mov	r0, r6
        1e1478:	e1a0200d 	mov	r2, sp
        1e147c:	e28d1004 	add	r1, sp, #4	; 0x4
        1e1480:	eb6893b9 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
        1e1484:	e3300002 	teq	r0, #2	; 0x2
        1e1488:	0a000013 	beq	1e14dc <TSharpIRTool::ReceiveControl(unsigned char)+0x9c>
        1e148c:	e3300001 	teq	r0, #1	; 0x1
        1e1490:	0a000015 	beq	1e14ec <TSharpIRTool::ReceiveControl(unsigned char)+0xac>
        1e1494:	e3300000 	teq	r0, #0	; 0x0
        1e1498:	1a000033 	bne	1e156c <TSharpIRTool::ReceiveControl(unsigned char)+0x12c>
        1e149c:	e5dd0004 	ldrb	r0, [sp, #4]
        1e14a0:	e3300082 	teq	r0, #130	; 0x82
        1e14a4:	1a00002c 	bne	1e155c <TSharpIRTool::ReceiveControl(unsigned char)+0x11c>
        1e14a8:	e5dd0004 	ldrb	r0, [sp, #4]
        1e14ac:	e5c404b1 	strb	r0, [r4, #1201]	; fField1201
        1e14b0:	e3a00005 	mov	r0, #5	; 0x5
        1e14b4:	e584072c 	str	r0, [r4, #1836]	; fField1836
        1e14b8:	ea000001 	b	1e14c4 <TSharpIRTool::ReceiveControl(unsigned char)+0x84>
        1e14bc:	e3310005 	teq	r1, #5	; 0x5
        1e14c0:	1a000029 	bne	1e156c <TSharpIRTool::ReceiveControl(unsigned char)+0x12c>
        1e14c4:	e1a00006 	mov	r0, r6
        1e14c8:	e1a0200d 	mov	r2, sp
        1e14cc:	e28d1004 	add	r1, sp, #4	; 0x4
        1e14d0:	eb6893a5 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
        1e14d4:	e3300002 	teq	r0, #2	; 0x2
        1e14d8:	1a000001 	bne	1e14e4 <TSharpIRTool::ReceiveControl(unsigned char)+0xa4>
        1e14dc:	e3a00001 	mov	r0, #1	; 0x1
        1e14e0:	ea000021 	b	1e156c <TSharpIRTool::ReceiveControl(unsigned char)+0x12c>
        1e14e4:	e3300001 	teq	r0, #1	; 0x1
        1e14e8:	1a000004 	bne	1e1500 <TSharpIRTool::ReceiveControl(unsigned char)+0xc0>
        1e14ec:	e5940768 	ldr	r0, [r4, #1896]	; fField1896
        1e14f0:	e2800001 	add	r0, r0, #1	; 0x1
        1e14f4:	e5a40768 	str	r0, [r4, #1896]!	; fField1896
        1e14f8:	e1a00008 	mov	r0, r8
        1e14fc:	ea00001a 	b	1e156c <TSharpIRTool::ReceiveControl(unsigned char)+0x12c>
        1e1500:	e3300000 	teq	r0, #0	; 0x0
        1e1504:	1a000018 	bne	1e156c <TSharpIRTool::ReceiveControl(unsigned char)+0x12c>
        1e1508:	e5dd1004 	ldrb	r1, [sp, #4]
        1e150c:	e5c414b2 	strb	r1, [r4, #1202]	; fField1202
        1e1510:	e5dd1004 	ldrb	r1, [sp, #4]
        1e1514:	e1310005 	teq	r1, r5
        1e1518:	03a01000 	moveq	r1, #0	; 0x0
        1e151c:	05a4172c 	streq	r1, [r4, #1836]!	; fField1836
        1e1520:	0a000011 	beq	1e156c <TSharpIRTool::ReceiveControl(unsigned char)+0x12c>
        1e1524:	e3350016 	teq	r5, #22	; 0x16
        1e1528:	1a000005 	bne	1e1544 <TSharpIRTool::ReceiveControl(unsigned char)+0x104>
        1e152c:	e5dd0004 	ldrb	r0, [sp, #4]
        1e1530:	e3300018 	teq	r0, #24	; 0x18
        1e1534:	03e00071 	mvneq	r0, #113	; 0x71
        1e1538:	02400b25 	subeq	r0, r0, #37888	; 0x9400
        1e153c:	0a00000a 	beq	1e156c <TSharpIRTool::ReceiveControl(unsigned char)+0x12c>
        1e1540:	ea000005 	b	1e155c <TSharpIRTool::ReceiveControl(unsigned char)+0x11c>
        1e1544:	e3350006 	teq	r5, #6	; 0x6
        1e1548:	05dd0004 	ldreqb	r0, [sp, #4]
        1e154c:	03300015 	teqeq	r0, #21	; 0x15
        1e1550:	03e00074 	mvneq	r0, #116	; 0x74
        1e1554:	02400b25 	subeq	r0, r0, #37888	; 0x9400
        1e1558:	0a000003 	beq	1e156c <TSharpIRTool::ReceiveControl(unsigned char)+0x12c>
        1e155c:	e594076c 	ldr	r0, [r4, #1900]	; fField1900
        1e1560:	e2800001 	add	r0, r0, #1	; 0x1
        1e1564:	e5a4076c 	str	r0, [r4, #1900]!	; fField1900
        1e1568:	e1a00007 	mov	r0, r7
        1e156c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::HandleControl(long)
 * Address: 001e1570
 */
TSharpIRTool::HandleControl(long) {
    /*
        1e1570:	e3310001 	teq	r1, #1	; 0x1
        1e1574:	01a0f00e 	moveq	pc, lr
        1e1578:	e1a0c00d 	mov	ip, sp
        1e157c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e1580:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e1584:	e1a04000 	mov	r4, r0
        1e1588:	e3e02072 	mvn	r2, #114	; 0x72
        1e158c:	e2422b25 	sub	r2, r2, #37888	; 0x9400
        1e1590:	e5903728 	ldr	r3, [r0, #1832]	; fField1832
        1e1594:	e2420004 	sub	r0, r2, #4	; 0x4
        1e1598:	e353000c 	cmp	r3, #12	; 0xc
        1e159c:	908ff103 	addls	pc, pc, r3, lsl #2
        1e15a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1e15a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1e15a8:	ea00001d 	b	1e1624 <TSharpIRTool::HandleControl(long)+0xb4>
        1e15ac:	ea000027 	b	1e1650 <TSharpIRTool::HandleControl(long)+0xe0>
        1e15b0:	ea00002e 	b	1e1670 <TSharpIRTool::HandleControl(long)+0x100>
        1e15b4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1e15b8:	ea000031 	b	1e1684 <TSharpIRTool::HandleControl(long)+0x114>
        1e15bc:	ea000035 	b	1e1698 <TSharpIRTool::HandleControl(long)+0x128>
        1e15c0:	ea00003b 	b	1e16b4 <TSharpIRTool::HandleControl(long)+0x144>
        1e15c4:	ea00003f 	b	1e16c8 <TSharpIRTool::HandleControl(long)+0x158>
        1e15c8:	ea000043 	b	1e16dc <TSharpIRTool::HandleControl(long)+0x16c>
        1e15cc:	ea00004d 	b	1e1708 <TSharpIRTool::HandleControl(long)+0x198>
        1e15d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1e15d4:	e291cb25 	adds	ip, r1, #37888	; 0x9400
        1e15d8:	d37c0072 	cmnle	ip, #114	; 0x72
        1e15dc:	0a00000d 	beq	1e1618 <TSharpIRTool::HandleControl(long)+0xa8>
        1e15e0:	ca000050 	bgt	1e1728 <TSharpIRTool::HandleControl(long)+0x1b8>
        1e15e4:	e1310000 	teq	r1, r0
        1e15e8:	0a000006 	beq	1e1608 <TSharpIRTool::HandleControl(long)+0x98>
        1e15ec:	e281cb25 	add	ip, r1, #37888	; 0x9400
        1e15f0:	e37c0075 	cmn	ip, #117	; 0x75
        1e15f4:	01a00004 	moveq	r0, r4
        1e15f8:	03a01013 	moveq	r1, #19	; 0x13
        1e15fc:	0a000050 	beq	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e1600:	e1310002 	teq	r1, r2
        1e1604:	1a000050 	bne	1e174c <TSharpIRTool::HandleControl(long)+0x1dc>
        1e1608:	e1a00004 	mov	r0, r4
        1e160c:	eb60e5d1 	bl	1a1ad58 <TSharpIRTool::$StopTimer1(void)>
        1e1610:	e1a00004 	mov	r0, r4
        1e1614:	eb60e5ce 	bl	1a1ad54 <TSharpIRTool::$StopReceive(void)>
        1e1618:	e1a00004 	mov	r0, r4
        1e161c:	e3a01014 	mov	r1, #20	; 0x14
        1e1620:	ea000047 	b	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e1624:	e3310000 	teq	r1, #0	; 0x0
        1e1628:	1a000002 	bne	1e1638 <TSharpIRTool::HandleControl(long)+0xc8>
        1e162c:	e1a00004 	mov	r0, r4
        1e1630:	e3a01004 	mov	r1, #4	; 0x4
        1e1634:	ea000042 	b	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e1638:	e1310002 	teq	r1, r2
        1e163c:	11310000 	teqne	r1, r0
        1e1640:	01a00004 	moveq	r0, r4
        1e1644:	03a01002 	moveq	r1, #2	; 0x2
        1e1648:	0a00003d 	beq	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e164c:	ea000015 	b	1e16a8 <TSharpIRTool::HandleControl(long)+0x138>
        1e1650:	e3310000 	teq	r1, #0	; 0x0
        1e1654:	0afffff4 	beq	1e162c <TSharpIRTool::HandleControl(long)+0xbc>
        1e1658:	e1310002 	teq	r1, r2
        1e165c:	11310000 	teqne	r1, r0
        1e1660:	01a00004 	moveq	r0, r4
        1e1664:	03a01003 	moveq	r1, #3	; 0x3
        1e1668:	0a000035 	beq	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e166c:	ea00000d 	b	1e16a8 <TSharpIRTool::HandleControl(long)+0x138>
        1e1670:	e3310000 	teq	r1, #0	; 0x0
        1e1674:	01a00004 	moveq	r0, r4
        1e1678:	03a01005 	moveq	r1, #5	; 0x5
        1e167c:	0a000030 	beq	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e1680:	ea000008 	b	1e16a8 <TSharpIRTool::HandleControl(long)+0x138>
        1e1684:	e3310000 	teq	r1, #0	; 0x0
        1e1688:	01a00004 	moveq	r0, r4
        1e168c:	03a01008 	moveq	r1, #8	; 0x8
        1e1690:	0a00002b 	beq	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e1694:	ea000003 	b	1e16a8 <TSharpIRTool::HandleControl(long)+0x138>
        1e1698:	e3310000 	teq	r1, #0	; 0x0
        1e169c:	01a00004 	moveq	r0, r4
        1e16a0:	03a01009 	moveq	r1, #9	; 0x9
        1e16a4:	0a000026 	beq	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e16a8:	e1a00004 	mov	r0, r4
        1e16ac:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e16b0:	ea60a3a1 	b	1a0a53c <TSharpIRTool::$AbortReceive(long)>
        1e16b4:	e3310000 	teq	r1, #0	; 0x0
        1e16b8:	01a00004 	moveq	r0, r4
        1e16bc:	03a0100b 	moveq	r1, #11	; 0xb
        1e16c0:	0a00001f 	beq	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e16c4:	ea000020 	b	1e174c <TSharpIRTool::HandleControl(long)+0x1dc>
        1e16c8:	e3310000 	teq	r1, #0	; 0x0
        1e16cc:	01a00004 	moveq	r0, r4
        1e16d0:	03a0100c 	moveq	r1, #12	; 0xc
        1e16d4:	0a00001a 	beq	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e16d8:	ea00001b 	b	1e174c <TSharpIRTool::HandleControl(long)+0x1dc>
        1e16dc:	e3310000 	teq	r1, #0	; 0x0
        1e16e0:	1a000002 	bne	1e16f0 <TSharpIRTool::HandleControl(long)+0x180>
        1e16e4:	e1a00004 	mov	r0, r4
        1e16e8:	e3a01010 	mov	r1, #16	; 0x10
        1e16ec:	ea000014 	b	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e16f0:	e1310002 	teq	r1, r2
        1e16f4:	11310000 	teqne	r1, r0
        1e16f8:	01a00004 	moveq	r0, r4
        1e16fc:	03a0100e 	moveq	r1, #14	; 0xe
        1e1700:	0a00000f 	beq	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e1704:	ea000010 	b	1e174c <TSharpIRTool::HandleControl(long)+0x1dc>
        1e1708:	e3310000 	teq	r1, #0	; 0x0
        1e170c:	0afffff4 	beq	1e16e4 <TSharpIRTool::HandleControl(long)+0x174>
        1e1710:	e1310002 	teq	r1, r2
        1e1714:	11310000 	teqne	r1, r0
        1e1718:	01a00004 	moveq	r0, r4
        1e171c:	03a0100f 	moveq	r1, #15	; 0xf
        1e1720:	0a000007 	beq	1e1744 <TSharpIRTool::HandleControl(long)+0x1d4>
        1e1724:	ea000008 	b	1e174c <TSharpIRTool::HandleControl(long)+0x1dc>
        1e1728:	e281cb25 	add	ip, r1, #37888	; 0x9400
        1e172c:	e37c0071 	cmn	ip, #113	; 0x71
        1e1730:	0affffb6 	beq	1e1610 <TSharpIRTool::HandleControl(long)+0xa0>
        1e1734:	e3310000 	teq	r1, #0	; 0x0
        1e1738:	1a000003 	bne	1e174c <TSharpIRTool::HandleControl(long)+0x1dc>
        1e173c:	e1a00004 	mov	r0, r4
        1e1740:	e3a01012 	mov	r1, #18	; 0x12
        1e1744:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e1748:	ea60d0d0 	b	1a15a90 <TSharpIRTool::$NextState(IREvent)>
        1e174c:	e1a00004 	mov	r0, r4
        1e1750:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e1754:	ea60a379 	b	1a0a540 <TSharpIRTool::$AbortSend(long)>
    */
}

/**
 * Symbol: TSharpIRTool::ReceiveData(void)
 * Address: 001e1758
 */
TSharpIRTool::ReceiveData(void) {
    /*
        1e1758:	e1a0c00d 	mov	ip, sp
        1e175c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1e1760:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e1764:	e1a04000 	mov	r4, r0
        1e1768:	e24dd008 	sub	sp, sp, #8	; 0x8
        1e176c:	e3e08076 	mvn	r8, #118	; 0x76
        1e1770:	e2488b25 	sub	r8, r8, #37888	; 0x9400
        1e1774:	e2886004 	add	r6, r8, #4	; 0x4
        1e1778:	e590172c 	ldr	r1, [r0, #1836]	; fField1836
        1e177c:	e28070b4 	add	r7, r0, #180	; 0xb4
        1e1780:	e2877b01 	add	r7, r7, #1024	; 0x400
        1e1784:	e2805feb 	add	r5, r0, #940	; 0x3ac
        1e1788:	e3a09801 	mov	r9, #65536	; 0x10000
        1e178c:	e2499001 	sub	r9, r9, #1	; 0x1
        1e1790:	e3310004 	teq	r1, #4	; 0x4
        1e1794:	1a000015 	bne	1e17f0 <TSharpIRTool::ReceiveData(void)+0x98>
        1e1798:	e1a00005 	mov	r0, r5
        1e179c:	e1a0200d 	mov	r2, sp
        1e17a0:	e28d1004 	add	r1, sp, #4	; 0x4
        1e17a4:	eb6892f0 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
        1e17a8:	e3300002 	teq	r0, #2	; 0x2
        1e17ac:	1a000001 	bne	1e17b8 <TSharpIRTool::ReceiveData(void)+0x60>
        1e17b0:	e3a00001 	mov	r0, #1	; 0x1
        1e17b4:	ea000092 	b	1e1a04 <TSharpIRTool::ReceiveData(void)+0x2ac>
        1e17b8:	e3300001 	teq	r0, #1	; 0x1
        1e17bc:	0a000062 	beq	1e194c <TSharpIRTool::ReceiveData(void)+0x1f4>
        1e17c0:	e3300000 	teq	r0, #0	; 0x0
        1e17c4:	1a00008e 	bne	1e1a04 <TSharpIRTool::ReceiveData(void)+0x2ac>
        1e17c8:	e5dd0004 	ldrb	r0, [sp, #4]
        1e17cc:	e3300081 	teq	r0, #129	; 0x81
        1e17d0:	1a000034 	bne	1e18a8 <TSharpIRTool::ReceiveData(void)+0x150>
        1e17d4:	e3a00002 	mov	r0, #2	; 0x2
        1e17d8:	e58406d4 	str	r0, [r4, #1748]	; fField1748
        1e17dc:	e3a0000a 	mov	r0, #10	; 0xa
        1e17e0:	e58406d0 	str	r0, [r4, #1744]	; fField1744
        1e17e4:	e3a00006 	mov	r0, #6	; 0x6
        1e17e8:	e584072c 	str	r0, [r4, #1836]	; fField1836
        1e17ec:	ea000001 	b	1e17f8 <TSharpIRTool::ReceiveData(void)+0xa0>
        1e17f0:	e3310006 	teq	r1, #6	; 0x6
        1e17f4:	1a000039 	bne	1e18e0 <TSharpIRTool::ReceiveData(void)+0x188>
        1e17f8:	e59416d4 	ldr	r1, [r4, #1748]	; fField1748
        1e17fc:	e2810001 	add	r0, r1, #1	; 0x1
        1e1800:	e58406d4 	str	r0, [r4, #1748]	; fField1748
        1e1804:	e0810004 	add	r0, r1, r4
        1e1808:	e28010b4 	add	r1, r0, #180	; 0xb4
        1e180c:	e2811b01 	add	r1, r1, #1024	; 0x400
        1e1810:	e1a00005 	mov	r0, r5
        1e1814:	e1a0200d 	mov	r2, sp
        1e1818:	eb6892d3 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
        1e181c:	e3300000 	teq	r0, #0	; 0x0
        1e1820:	1a000004 	bne	1e1838 <TSharpIRTool::ReceiveData(void)+0xe0>
        1e1824:	e59406d4 	ldr	r0, [r4, #1748]	; fField1748
        1e1828:	e59416d0 	ldr	r1, [r4, #1744]	; fField1744
        1e182c:	e1500001 	cmp	r0, r1
        1e1830:	3afffff0 	bcc	1e17f8 <TSharpIRTool::ReceiveData(void)+0xa0>
        1e1834:	ea000005 	b	1e1850 <TSharpIRTool::ReceiveData(void)+0xf8>
        1e1838:	e3300002 	teq	r0, #2	; 0x2
        1e183c:	0a00003c 	beq	1e1934 <TSharpIRTool::ReceiveData(void)+0x1dc>
        1e1840:	e3300001 	teq	r0, #1	; 0x1
        1e1844:	0a000040 	beq	1e194c <TSharpIRTool::ReceiveData(void)+0x1f4>
        1e1848:	e3500000 	cmp	r0, #0	; 0x0
        1e184c:	1a000022 	bne	1e18dc <TSharpIRTool::ReceiveData(void)+0x184>
        1e1850:	e1a01007 	mov	r1, r7
        1e1854:	e5d70002 	ldrb	r0, [r7, #2]
        1e1858:	e20000f0 	and	r0, r0, #240	; 0xf0
        1e185c:	e3300010 	teq	r0, #16	; 0x10
        1e1860:	1a000010 	bne	1e18a8 <TSharpIRTool::ReceiveData(void)+0x150>
        1e1864:	e5d10009 	ldrb	r0, [r1, #9]
        1e1868:	e58406cc 	str	r0, [r4, #1740]	; fField1740
        1e186c:	e5d12008 	ldrb	r2, [r1, #8]
        1e1870:	e0820400 	add	r0, r2, r0, lsl #8
        1e1874:	e58406cc 	str	r0, [r4, #1740]	; fField1740
        1e1878:	e3500c02 	cmp	r0, #512	; 0x200
        1e187c:	8a000009 	bhi	1e18a8 <TSharpIRTool::ReceiveData(void)+0x150>
        1e1880:	e5d12004 	ldrb	r2, [r1, #4]
        1e1884:	e58426c8 	str	r2, [r4, #1736]	; fField1736
        1e1888:	e5d11003 	ldrb	r1, [r1, #3]
        1e188c:	e0811402 	add	r1, r1, r2, lsl #8
        1e1890:	e58416c8 	str	r1, [r4, #1736]	; fField1736
        1e1894:	e1a02001 	mov	r2, r1
        1e1898:	e59436c4 	ldr	r3, [r4, #1732]	; fField1732
        1e189c:	e1330001 	teq	r3, r1
        1e18a0:	11320009 	teqne	r2, r9
        1e18a4:	0a000004 	beq	1e18bc <TSharpIRTool::ReceiveData(void)+0x164>
        1e18a8:	e594076c 	ldr	r0, [r4, #1900]	; fField1900
        1e18ac:	e2800001 	add	r0, r0, #1	; 0x1
        1e18b0:	e5a4076c 	str	r0, [r4, #1900]!	; fField1900
        1e18b4:	e1a00006 	mov	r0, r6
        1e18b8:	ea000051 	b	1e1a04 <TSharpIRTool::ReceiveData(void)+0x2ac>
        1e18bc:	e3a01000 	mov	r1, #0	; 0x0
        1e18c0:	e2800002 	add	r0, r0, #2	; 0x2
        1e18c4:	e2844e6d 	add	r4, r4, #1744	; 0x6d0
        1e18c8:	e8840003 	stmia	r4, {r0, r1}
        1e18cc:	e2444e6d 	sub	r4, r4, #1744	; 0x6d0
        1e18d0:	e3a00007 	mov	r0, #7	; 0x7
        1e18d4:	e584072c 	str	r0, [r4, #1836]	; fField1836
        1e18d8:	ea000003 	b	1e18ec <TSharpIRTool::ReceiveData(void)+0x194>
        1e18dc:	1a000048 	bne	1e1a04 <TSharpIRTool::ReceiveData(void)+0x2ac>
        1e18e0:	e594172c 	ldr	r1, [r4, #1836]	; fField1836
        1e18e4:	e3310007 	teq	r1, #7	; 0x7
        1e18e8:	1a000045 	bne	1e1a04 <TSharpIRTool::ReceiveData(void)+0x2ac>
        1e18ec:	e59416d4 	ldr	r1, [r4, #1748]	; fField1748
        1e18f0:	e2810001 	add	r0, r1, #1	; 0x1
        1e18f4:	e58406d4 	str	r0, [r4, #1748]	; fField1748
        1e18f8:	e0810004 	add	r0, r1, r4
        1e18fc:	e28010b4 	add	r1, r0, #180	; 0xb4
        1e1900:	e2811b01 	add	r1, r1, #1024	; 0x400
        1e1904:	e1a00005 	mov	r0, r5
        1e1908:	e1a0200d 	mov	r2, sp
        1e190c:	eb689296 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
        1e1910:	e3300000 	teq	r0, #0	; 0x0
        1e1914:	1a000004 	bne	1e192c <TSharpIRTool::ReceiveData(void)+0x1d4>
        1e1918:	e59406d4 	ldr	r0, [r4, #1748]	; fField1748
        1e191c:	e59416d0 	ldr	r1, [r4, #1744]	; fField1744
        1e1920:	e1500001 	cmp	r0, r1
        1e1924:	3afffff0 	bcc	1e18ec <TSharpIRTool::ReceiveData(void)+0x194>
        1e1928:	ea00000e 	b	1e1968 <TSharpIRTool::ReceiveData(void)+0x210>
        1e192c:	e3300002 	teq	r0, #2	; 0x2
        1e1930:	1a000003 	bne	1e1944 <TSharpIRTool::ReceiveData(void)+0x1ec>
        1e1934:	e59406d4 	ldr	r0, [r4, #1748]	; fField1748
        1e1938:	e2400001 	sub	r0, r0, #1	; 0x1
        1e193c:	e5a406d4 	str	r0, [r4, #1748]!	; fField1748
        1e1940:	eaffff9a 	b	1e17b0 <TSharpIRTool::ReceiveData(void)+0x58>
        1e1944:	e3300001 	teq	r0, #1	; 0x1
        1e1948:	1a000004 	bne	1e1960 <TSharpIRTool::ReceiveData(void)+0x208>
        1e194c:	e5940768 	ldr	r0, [r4, #1896]	; fField1896
        1e1950:	e2800001 	add	r0, r0, #1	; 0x1
        1e1954:	e5a40768 	str	r0, [r4, #1896]!	; fField1896
        1e1958:	e1a00008 	mov	r0, r8
        1e195c:	ea000028 	b	1e1a04 <TSharpIRTool::ReceiveData(void)+0x2ac>
        1e1960:	e3300000 	teq	r0, #0	; 0x0
        1e1964:	1a000026 	bne	1e1a04 <TSharpIRTool::ReceiveData(void)+0x2ac>
        1e1968:	e59426cc 	ldr	r2, [r4, #1740]	; fField1740
        1e196c:	e1a03002 	mov	r3, r2
        1e1970:	e0820004 	add	r0, r2, r4
        1e1974:	e5d014b5 	ldrb	r1, [r0, #1205]
        1e1978:	e5d004b4 	ldrb	r0, [r0, #1204]
        1e197c:	e0801401 	add	r1, r0, r1, lsl #8
        1e1980:	e3a00000 	mov	r0, #0	; 0x0
        1e1984:	e3a0c000 	mov	ip, #0	; 0x0
        1e1988:	e3520000 	cmp	r2, #0	; 0x0
        1e198c:	9a000004 	bls	1e19a4 <TSharpIRTool::ReceiveData(void)+0x24c>
        1e1990:	e4d72001 	ldrb	r2, [r7], #1	; fField1
        1e1994:	e0820000 	add	r0, r2, r0
        1e1998:	e28cc001 	add	ip, ip, #1	; 0x1
        1e199c:	e153000c 	cmp	r3, ip
        1e19a0:	8afffffa 	bhi	1e1990 <TSharpIRTool::ReceiveData(void)+0x238>
        1e19a4:	e1a00800 	mov	r0, r0, lsl #16
        1e19a8:	e1a00820 	mov	r0, r0, lsr #16
        1e19ac:	e1300001 	teq	r0, r1
        1e19b0:	0a000005 	beq	1e19cc <TSharpIRTool::ReceiveData(void)+0x274>
        1e19b4:	e5940758 	ldr	r0, [r4, #1880]	; fField1880
        1e19b8:	e2800001 	add	r0, r0, #1	; 0x1
        1e19bc:	e5a40758 	str	r0, [r4, #1880]!	; fField1880
        1e19c0:	e3e00073 	mvn	r0, #115	; 0x73
        1e19c4:	e2400b25 	sub	r0, r0, #37888	; 0x9400
        1e19c8:	ea00000d 	b	1e1a04 <TSharpIRTool::ReceiveData(void)+0x2ac>
        1e19cc:	e59406c8 	ldr	r0, [r4, #1736]	; fField1736
        1e19d0:	e3a02801 	mov	r2, #65536	; 0x10000
        1e19d4:	e2422001 	sub	r2, r2, #1	; 0x1
        1e19d8:	e2844e79 	add	r4, r4, #1936	; 0x790
        1e19dc:	e9040003 	stmdb	r4, {r0, r1}
        1e19e0:	e2444e79 	sub	r4, r4, #1936	; 0x790
        1e19e4:	e1300002 	teq	r0, r2
        1e19e8:	12800001 	addne	r0, r0, #1	; 0x1
        1e19ec:	158406c4 	strne	r0, [r4, #1732]	; fField1732
        1e19f0:	058426c4 	streq	r2, [r4, #1732]	; fField1732
        1e19f4:	e3a00000 	mov	r0, #0	; 0x0
        1e19f8:	e5941754 	ldr	r1, [r4, #1876]	; fField1876
        1e19fc:	e2811001 	add	r1, r1, #1	; 0x1
        1e1a00:	e5a41754 	str	r1, [r4, #1876]!	; fField1876
        1e1a04:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::CheckReceiveDone(void)
 * Address: 001e1a08
 */
TSharpIRTool::CheckReceiveDone(void) {
    /*
        1e1a08:	e1a0c00d 	mov	ip, sp
        1e1a0c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e1a10:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e1a14:	e1a04000 	mov	r4, r0
        1e1a18:	e3a05000 	mov	r5, #0	; 0x0
        1e1a1c:	e59026cc 	ldr	r2, [r0, #1740]	; fField1740
        1e1a20:	e590327c 	ldr	r3, [r0, #636]	; fField636
        1e1a24:	e59006d4 	ldr	r0, [r0, #1748]	; fField1748
        1e1a28:	e0800004 	add	r0, r0, r4
        1e1a2c:	e28010b4 	add	r1, r0, #180	; 0xb4
        1e1a30:	e2811b01 	add	r1, r1, #1024	; 0x400
        1e1a34:	e1a00003 	mov	r0, r3
        1e1a38:	e5933000 	ldr	r3, [r3]
        1e1a3c:	e1a0e00f 	mov	lr, pc
        1e1a40:	e283f020 	add	pc, r3, #32	; 0x20
        1e1a44:	e5941280 	ldr	r1, [r4, #640]	; fField640
        1e1a48:	e0411000 	sub	r1, r1, r0
        1e1a4c:	e5841280 	str	r1, [r4, #640]	; fField640
        1e1a50:	e59416cc 	ldr	r1, [r4, #1740]	; fField1740
        1e1a54:	e0411000 	sub	r1, r1, r0
        1e1a58:	e58416cc 	str	r1, [r4, #1740]	; fField1740
        1e1a5c:	e59416d4 	ldr	r1, [r4, #1748]	; fField1748
        1e1a60:	e0810000 	add	r0, r1, r0
        1e1a64:	e58406d4 	str	r0, [r4, #1748]	; fField1748
        1e1a68:	e594027c 	ldr	r0, [r4, #636]	; fField636
        1e1a6c:	e5901000 	ldr	r1, [r0]
        1e1a70:	e1a0e00f 	mov	lr, pc
        1e1a74:	e281f02c 	add	pc, r1, #44	; 0x2c
        1e1a78:	e5941280 	ldr	r1, [r4, #640]	; fField640
        1e1a7c:	e0403001 	sub	r3, r0, r1
        1e1a80:	e3a00801 	mov	r0, #65536	; 0x10000
        1e1a84:	e2400001 	sub	r0, r0, #1	; 0x1
        1e1a88:	e3310000 	teq	r1, #0	; 0x0
        1e1a8c:	1a000020 	bne	1e1b14 <TSharpIRTool::CheckReceiveDone(void)+0x10c>
        1e1a90:	e3a05000 	mov	r5, #0	; 0x0
        1e1a94:	e59406cc 	ldr	r0, [r4, #1740]	; fField1740
        1e1a98:	e3300000 	teq	r0, #0	; 0x0
        1e1a9c:	1a000011 	bne	1e1ae8 <TSharpIRTool::CheckReceiveDone(void)+0xe0>
        1e1aa0:	e3a06801 	mov	r6, #65536	; 0x10000
        1e1aa4:	e2466001 	sub	r6, r6, #1	; 0x1
        1e1aa8:	e59406c4 	ldr	r0, [r4, #1732]	; fField1732
        1e1aac:	e1300006 	teq	r0, r6
        1e1ab0:	13a02000 	movne	r2, #0	; 0x0
        1e1ab4:	03a02001 	moveq	r2, #1	; 0x1
        1e1ab8:	e1a00004 	mov	r0, r4
        1e1abc:	e3a01000 	mov	r1, #0	; 0x0
        1e1ac0:	e594c000 	ldr	ip, [r4]
        1e1ac4:	e1a0e00f 	mov	lr, pc
        1e1ac8:	e28cf0ec 	add	pc, ip, #236	; 0xec
        1e1acc:	e59406c4 	ldr	r0, [r4, #1732]	; fField1732
        1e1ad0:	e1300006 	teq	r0, r6
        1e1ad4:	15845728 	strne	r5, [r4, #1832]	; fField1832
        1e1ad8:	1a00000a 	bne	1e1b08 <TSharpIRTool::CheckReceiveDone(void)+0x100>
        1e1adc:	e1a00004 	mov	r0, r4
        1e1ae0:	eb60dc52 	bl	1a18c30 <TSharpIRTool::$ResetStateMachine(void)>
        1e1ae4:	ea000008 	b	1e1b0c <TSharpIRTool::CheckReceiveDone(void)+0x104>
        1e1ae8:	e1a00004 	mov	r0, r4
        1e1aec:	e3a02000 	mov	r2, #0	; 0x0
        1e1af0:	e3a01000 	mov	r1, #0	; 0x0
        1e1af4:	e594c000 	ldr	ip, [r4]
        1e1af8:	e1a0e00f 	mov	lr, pc
        1e1afc:	e28cf0ec 	add	pc, ip, #236	; 0xec
        1e1b00:	e3a0000d 	mov	r0, #13	; 0xd
        1e1b04:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e1b08:	e5a4572c 	str	r5, [r4, #1836]!	; fField1836
        1e1b0c:	e3a05001 	mov	r5, #1	; 0x1
        1e1b10:	ea00000b 	b	1e1b44 <TSharpIRTool::CheckReceiveDone(void)+0x13c>
        1e1b14:	e59416cc 	ldr	r1, [r4, #1740]	; fField1740
        1e1b18:	e3310000 	teq	r1, #0	; 0x0
        1e1b1c:	059416c4 	ldreq	r1, [r4, #1732]	; fField1732
        1e1b20:	01310000 	teqeq	r1, r0
        1e1b24:	1a000006 	bne	1e1b44 <TSharpIRTool::CheckReceiveDone(void)+0x13c>
        1e1b28:	e1a00004 	mov	r0, r4
        1e1b2c:	e3a02001 	mov	r2, #1	; 0x1
        1e1b30:	e3a01000 	mov	r1, #0	; 0x0
        1e1b34:	e594c000 	ldr	ip, [r4]
        1e1b38:	e1a0e00f 	mov	lr, pc
        1e1b3c:	e28cf0ec 	add	pc, ip, #236	; 0xec
        1e1b40:	eaffffe5 	b	1e1adc <TSharpIRTool::CheckReceiveDone(void)+0xd4>
        1e1b44:	e1a00005 	mov	r0, r5
        1e1b48:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::HandleData(long)
 * Address: 001e1b4c
 */
TSharpIRTool::HandleData(long) {
    /*
        1e1b4c:	e3310001 	teq	r1, #1	; 0x1
        1e1b50:	01a0f00e 	moveq	pc, lr
        1e1b54:	e1a0c00d 	mov	ip, sp
        1e1b58:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e1b5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e1b60:	e1a04000 	mov	r4, r0
        1e1b64:	e5900728 	ldr	r0, [r0, #1832]	; fField1832
        1e1b68:	e3300004 	teq	r0, #4	; 0x4
        1e1b6c:	1a00001b 	bne	1e1be0 <TSharpIRTool::HandleData(long)+0x94>
        1e1b70:	e291cb25 	adds	ip, r1, #37888	; 0x9400
        1e1b74:	d37c0073 	cmnle	ip, #115	; 0x73
        1e1b78:	0a000015 	beq	1e1bd4 <TSharpIRTool::HandleData(long)+0x88>
        1e1b7c:	ca000008 	bgt	1e1ba4 <TSharpIRTool::HandleData(long)+0x58>
        1e1b80:	e281cb25 	add	ip, r1, #37888	; 0x9400
        1e1b84:	e37c0077 	cmn	ip, #119	; 0x77
        1e1b88:	0a000011 	beq	1e1bd4 <TSharpIRTool::HandleData(long)+0x88>
        1e1b8c:	e281cb25 	add	ip, r1, #37888	; 0x9400
        1e1b90:	e37c0074 	cmn	ip, #116	; 0x74
        1e1b94:	01a00004 	moveq	r0, r4
        1e1b98:	03a01007 	moveq	r1, #7	; 0x7
        1e1b9c:	0a000016 	beq	1e1bfc <TSharpIRTool::HandleData(long)+0xb0>
        1e1ba0:	ea000006 	b	1e1bc0 <TSharpIRTool::HandleData(long)+0x74>
        1e1ba4:	e281cb25 	add	ip, r1, #37888	; 0x9400
        1e1ba8:	e37c0071 	cmn	ip, #113	; 0x71
        1e1bac:	0a000006 	beq	1e1bcc <TSharpIRTool::HandleData(long)+0x80>
        1e1bb0:	e3310000 	teq	r1, #0	; 0x0
        1e1bb4:	01a00004 	moveq	r0, r4
        1e1bb8:	03a01006 	moveq	r1, #6	; 0x6
        1e1bbc:	0a00000e 	beq	1e1bfc <TSharpIRTool::HandleData(long)+0xb0>
        1e1bc0:	e1a00004 	mov	r0, r4
        1e1bc4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e1bc8:	ea60a25b 	b	1a0a53c <TSharpIRTool::$AbortReceive(long)>
        1e1bcc:	e1a00004 	mov	r0, r4
        1e1bd0:	eb60e45f 	bl	1a1ad54 <TSharpIRTool::$StopReceive(void)>
        1e1bd4:	e1a00004 	mov	r0, r4
        1e1bd8:	e3a01002 	mov	r1, #2	; 0x2
        1e1bdc:	ea000006 	b	1e1bfc <TSharpIRTool::HandleData(long)+0xb0>
        1e1be0:	e330000b 	teq	r0, #11	; 0xb
        1e1be4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1e1be8:	e3310000 	teq	r1, #0	; 0x0
        1e1bec:	e1a00004 	mov	r0, r4
        1e1bf0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        1e1bf4:	1a60a251 	bne	1a0a540 <TSharpIRTool::$AbortSend(long)>
        1e1bf8:	e3a01011 	mov	r1, #17	; 0x11
        1e1bfc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e1c00:	ea60cfa2 	b	1a15a90 <TSharpIRTool::$NextState(IREvent)>
    */
}

/**
 * Symbol: TSharpIRTool::ReceiveNegotiate(unsigned char)
 * Address: 001e1c04
 */
TSharpIRTool::ReceiveNegotiate(unsigned char) {
    /*
        1e1c04:	e1a0c00d 	mov	ip, sp
        1e1c08:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e1c0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e1c10:	e1a04000 	mov	r4, r0
        1e1c14:	e20160ff 	and	r6, r1, #255	; 0xff
        1e1c18:	e24dd008 	sub	sp, sp, #8	; 0x8
        1e1c1c:	e5d014b0 	ldrb	r1, [r0, #1200]	; fField1200
        1e1c20:	e3310096 	teq	r1, #150	; 0x96
        1e1c24:	1a000005 	bne	1e1c40 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x3c>
        1e1c28:	e3360085 	teq	r6, #133	; 0x85
        1e1c2c:	e1a00004 	mov	r0, r4
        1e1c30:	13a01016 	movne	r1, #22	; 0x16
        1e1c34:	03a01005 	moveq	r1, #5	; 0x5
        1e1c38:	eb60d7ea 	bl	1a17be8 <TSharpIRTool::$ReceiveControl(unsigned char)>
        1e1c3c:	ea00004f 	b	1e1d80 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x17c>
        1e1c40:	e3e07076 	mvn	r7, #118	; 0x76
        1e1c44:	e2477b25 	sub	r7, r7, #37888	; 0x9400
        1e1c48:	e594172c 	ldr	r1, [r4, #1836]	; fField1836
        1e1c4c:	e2845feb 	add	r5, r4, #940	; 0x3ac
        1e1c50:	e3310004 	teq	r1, #4	; 0x4
        1e1c54:	1a000024 	bne	1e1cec <TSharpIRTool::ReceiveNegotiate(unsigned char)+0xe8>
        1e1c58:	e1a00005 	mov	r0, r5
        1e1c5c:	e1a0200d 	mov	r2, sp
        1e1c60:	e28d1004 	add	r1, sp, #4	; 0x4
        1e1c64:	eb6891c0 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
        1e1c68:	e3300002 	teq	r0, #2	; 0x2
        1e1c6c:	0a000037 	beq	1e1d50 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x14c>
        1e1c70:	e3300001 	teq	r0, #1	; 0x1
        1e1c74:	0a000039 	beq	1e1d60 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x15c>
        1e1c78:	e3300000 	teq	r0, #0	; 0x0
        1e1c7c:	1a00003f 	bne	1e1d80 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x17c>
        1e1c80:	e5dd0004 	ldrb	r0, [sp, #4]
        1e1c84:	e1300006 	teq	r0, r6
        1e1c88:	13a00000 	movne	r0, #0	; 0x0
        1e1c8c:	03a00001 	moveq	r0, #1	; 0x1
        1e1c90:	e20000ff 	and	r0, r0, #255	; 0xff
        1e1c94:	e594177c 	ldr	r1, [r4, #1916]	; fField1916
        1e1c98:	e3110001 	tst	r1, #1	; 0x1
        1e1c9c:	0a000005 	beq	1e1cb8 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0xb4>
        1e1ca0:	e3360086 	teq	r6, #134	; 0x86
        1e1ca4:	05dd1004 	ldreqb	r1, [sp, #4]
        1e1ca8:	03310085 	teqeq	r1, #133	; 0x85
        1e1cac:	03a00001 	moveq	r0, #1	; 0x1
        1e1cb0:	05c40785 	streqb	r0, [r4, #1925]	; fField1925
        1e1cb4:	0a000007 	beq	1e1cd8 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0xd4>
        1e1cb8:	e3300000 	teq	r0, #0	; 0x0
        1e1cbc:	1a000005 	bne	1e1cd8 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0xd4>
        1e1cc0:	e594076c 	ldr	r0, [r4, #1900]	; fField1900
        1e1cc4:	e2800001 	add	r0, r0, #1	; 0x1
        1e1cc8:	e5a4076c 	str	r0, [r4, #1900]!	; fField1900
        1e1ccc:	e3e00072 	mvn	r0, #114	; 0x72
        1e1cd0:	e2400b25 	sub	r0, r0, #37888	; 0x9400
        1e1cd4:	ea000029 	b	1e1d80 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x17c>
        1e1cd8:	e5dd0004 	ldrb	r0, [sp, #4]
        1e1cdc:	e5c404b1 	strb	r0, [r4, #1201]	; fField1201
        1e1ce0:	e3a00008 	mov	r0, #8	; 0x8
        1e1ce4:	e584072c 	str	r0, [r4, #1836]	; fField1836
        1e1ce8:	ea000001 	b	1e1cf4 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0xf0>
        1e1cec:	e3310008 	teq	r1, #8	; 0x8
        1e1cf0:	1a00000e 	bne	1e1d30 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x12c>
        1e1cf4:	e1a00005 	mov	r0, r5
        1e1cf8:	e1a0200d 	mov	r2, sp
        1e1cfc:	e28d1004 	add	r1, sp, #4	; 0x4
        1e1d00:	eb689199 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
        1e1d04:	e3300002 	teq	r0, #2	; 0x2
        1e1d08:	0a000010 	beq	1e1d50 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x14c>
        1e1d0c:	e3300001 	teq	r0, #1	; 0x1
        1e1d10:	0a000012 	beq	1e1d60 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x15c>
        1e1d14:	e3300000 	teq	r0, #0	; 0x0
        1e1d18:	1a000018 	bne	1e1d80 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x17c>
        1e1d1c:	e5dd0004 	ldrb	r0, [sp, #4]
        1e1d20:	e5c404b2 	strb	r0, [r4, #1202]	; fField1202
        1e1d24:	e3a00009 	mov	r0, #9	; 0x9
        1e1d28:	e584072c 	str	r0, [r4, #1836]	; fField1836
        1e1d2c:	ea000001 	b	1e1d38 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x134>
        1e1d30:	e3310009 	teq	r1, #9	; 0x9
        1e1d34:	1a000011 	bne	1e1d80 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x17c>
        1e1d38:	e1a00005 	mov	r0, r5
        1e1d3c:	e1a0200d 	mov	r2, sp
        1e1d40:	e28d1004 	add	r1, sp, #4	; 0x4
        1e1d44:	eb689188 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
        1e1d48:	e3300002 	teq	r0, #2	; 0x2
        1e1d4c:	1a000001 	bne	1e1d58 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x154>
        1e1d50:	e3a00001 	mov	r0, #1	; 0x1
        1e1d54:	ea000009 	b	1e1d80 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x17c>
        1e1d58:	e3300001 	teq	r0, #1	; 0x1
        1e1d5c:	1a000004 	bne	1e1d74 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x170>
        1e1d60:	e5940768 	ldr	r0, [r4, #1896]	; fField1896
        1e1d64:	e2800001 	add	r0, r0, #1	; 0x1
        1e1d68:	e5a40768 	str	r0, [r4, #1896]!	; fField1896
        1e1d6c:	e1a00007 	mov	r0, r7
        1e1d70:	ea000002 	b	1e1d80 <TSharpIRTool::ReceiveNegotiate(unsigned char)+0x17c>
        1e1d74:	e3300000 	teq	r0, #0	; 0x0
        1e1d78:	05dd1004 	ldreqb	r1, [sp, #4]
        1e1d7c:	05c414b3 	streqb	r1, [r4, #1203]	; fField1203
        1e1d80:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::HandleNegotiate(long)
 * Address: 001e1d84
 */
TSharpIRTool::HandleNegotiate(long) {
    /*
        1e1d84:	e3310001 	teq	r1, #1	; 0x1
        1e1d88:	01a0f00e 	moveq	pc, lr
        1e1d8c:	e1a0c00d 	mov	ip, sp
        1e1d90:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e1d94:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e1d98:	e1a04000 	mov	r4, r0
        1e1d9c:	e5d004b0 	ldrb	r0, [r0, #1200]	; fField1200
        1e1da0:	e3300090 	teq	r0, #144	; 0x90
        1e1da4:	05d424b1 	ldreqb	r2, [r4, #1201]	; fField1201
        1e1da8:	03320085 	teqeq	r2, #133	; 0x85
        1e1dac:	13a02000 	movne	r2, #0	; 0x0
        1e1db0:	03a02001 	moveq	r2, #1	; 0x1
        1e1db4:	e20230ff 	and	r3, r2, #255	; 0xff
        1e1db8:	e3300090 	teq	r0, #144	; 0x90
        1e1dbc:	05d424b1 	ldreqb	r2, [r4, #1201]	; fField1201
        1e1dc0:	03320086 	teqeq	r2, #134	; 0x86
        1e1dc4:	13a02000 	movne	r2, #0	; 0x0
        1e1dc8:	03a02001 	moveq	r2, #1	; 0x1
        1e1dcc:	e202e0ff 	and	lr, r2, #255	; 0xff
        1e1dd0:	e3300096 	teq	r0, #150	; 0x96
        1e1dd4:	05d424b2 	ldreqb	r2, [r4, #1202]	; fField1202
        1e1dd8:	03320005 	teqeq	r2, #5	; 0x5
        1e1ddc:	13a02000 	movne	r2, #0	; 0x0
        1e1de0:	03a02001 	moveq	r2, #1	; 0x1
        1e1de4:	e20250ff 	and	r5, r2, #255	; 0xff
        1e1de8:	e3300096 	teq	r0, #150	; 0x96
        1e1dec:	05d424b2 	ldreqb	r2, [r4, #1202]	; fField1202
        1e1df0:	03320016 	teqeq	r2, #22	; 0x16
        1e1df4:	13a02000 	movne	r2, #0	; 0x0
        1e1df8:	03a02001 	moveq	r2, #1	; 0x1
        1e1dfc:	e202c0ff 	and	ip, r2, #255	; 0xff
        1e1e00:	e3300090 	teq	r0, #144	; 0x90
        1e1e04:	05d404b2 	ldreqb	r0, [r4, #1202]	; fField1202
        1e1e08:	e5940728 	ldr	r0, [r4, #1832]	; fField1832
        1e1e0c:	e240600e 	sub	r6, r0, #14	; 0xe
        1e1e10:	e3e02076 	mvn	r2, #118	; 0x76
        1e1e14:	e2422b25 	sub	r2, r2, #37888	; 0x9400
        1e1e18:	e2820004 	add	r0, r2, #4	; 0x4
        1e1e1c:	e3560008 	cmp	r6, #8	; 0x8
        1e1e20:	908ff106 	addls	pc, pc, r6, lsl #2
        1e1e24:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1e1e28:	ea00001d 	b	1e1ea4 <TSharpIRTool::HandleNegotiate(long)+0x120>
        1e1e2c:	ea00001c 	b	1e1ea4 <TSharpIRTool::HandleNegotiate(long)+0x120>
        1e1e30:	ea000032 	b	1e1f00 <TSharpIRTool::HandleNegotiate(long)+0x17c>
        1e1e34:	ea00002c 	b	1e1eec <TSharpIRTool::HandleNegotiate(long)+0x168>
        1e1e38:	ea00003a 	b	1e1f28 <TSharpIRTool::HandleNegotiate(long)+0x1a4>
        1e1e3c:	ea00003d 	b	1e1f38 <TSharpIRTool::HandleNegotiate(long)+0x1b4>
        1e1e40:	ea00003c 	b	1e1f38 <TSharpIRTool::HandleNegotiate(long)+0x1b4>
        1e1e44:	eaffffff 	b	1e1e48 <TSharpIRTool::HandleNegotiate(long)+0xc4>
        1e1e48:	e3310000 	teq	r1, #0	; 0x0
        1e1e4c:	1a00003e 	bne	1e1f4c <TSharpIRTool::HandleNegotiate(long)+0x1c8>
        1e1e50:	e33e0000 	teq	lr, #0	; 0x0
        1e1e54:	11a00004 	movne	r0, r4
        1e1e58:	13a0101d 	movne	r1, #29	; 0x1d
        1e1e5c:	1a00003f 	bne	1e1f60 <TSharpIRTool::HandleNegotiate(long)+0x1dc>
        1e1e60:	e33c0000 	teq	ip, #0	; 0x0
        1e1e64:	11a00004 	movne	r0, r4
        1e1e68:	13a0101e 	movne	r1, #30	; 0x1e
        1e1e6c:	1a00003b 	bne	1e1f60 <TSharpIRTool::HandleNegotiate(long)+0x1dc>
        1e1e70:	e3330000 	teq	r3, #0	; 0x0
        1e1e74:	15d40785 	ldrneb	r0, [r4, #1925]	; fField1925
        1e1e78:	13300000 	teqne	r0, #0	; 0x0
        1e1e7c:	13a0000e 	movne	r0, #14	; 0xe
        1e1e80:	15840728 	strne	r0, [r4, #1832]	; fField1832
        1e1e84:	1a00000a 	bne	1e1eb4 <TSharpIRTool::HandleNegotiate(long)+0x130>
        1e1e88:	e1a00004 	mov	r0, r4
        1e1e8c:	eb60e3b2 	bl	1a1ad5c <TSharpIRTool::$StopTimer2(void)>
        1e1e90:	e3a00016 	mov	r0, #22	; 0x16
        1e1e94:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e1e98:	e1a00004 	mov	r0, r4
        1e1e9c:	e3a0101c 	mov	r1, #28	; 0x1c
        1e1ea0:	ea00002e 	b	1e1f60 <TSharpIRTool::HandleNegotiate(long)+0x1dc>
        1e1ea4:	e3310000 	teq	r1, #0	; 0x0
        1e1ea8:	1a000009 	bne	1e1ed4 <TSharpIRTool::HandleNegotiate(long)+0x150>
        1e1eac:	e3330000 	teq	r3, #0	; 0x0
        1e1eb0:	0a000002 	beq	1e1ec0 <TSharpIRTool::HandleNegotiate(long)+0x13c>
        1e1eb4:	e1a00004 	mov	r0, r4
        1e1eb8:	e3a01017 	mov	r1, #23	; 0x17
        1e1ebc:	ea000027 	b	1e1f60 <TSharpIRTool::HandleNegotiate(long)+0x1dc>
        1e1ec0:	e3350000 	teq	r5, #0	; 0x0
        1e1ec4:	11a00004 	movne	r0, r4
        1e1ec8:	13a01018 	movne	r1, #24	; 0x18
        1e1ecc:	1a000023 	bne	1e1f60 <TSharpIRTool::HandleNegotiate(long)+0x1dc>
        1e1ed0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1e1ed4:	e1310002 	teq	r1, r2
        1e1ed8:	11310000 	teqne	r1, r0
        1e1edc:	01a00004 	moveq	r0, r4
        1e1ee0:	03a01016 	moveq	r1, #22	; 0x16
        1e1ee4:	0a00001d 	beq	1e1f60 <TSharpIRTool::HandleNegotiate(long)+0x1dc>
        1e1ee8:	ea00000b 	b	1e1f1c <TSharpIRTool::HandleNegotiate(long)+0x198>
        1e1eec:	e3310000 	teq	r1, #0	; 0x0
        1e1ef0:	01a00004 	moveq	r0, r4
        1e1ef4:	03a01019 	moveq	r1, #25	; 0x19
        1e1ef8:	0a000018 	beq	1e1f60 <TSharpIRTool::HandleNegotiate(long)+0x1dc>
        1e1efc:	ea000006 	b	1e1f1c <TSharpIRTool::HandleNegotiate(long)+0x198>
        1e1f00:	e5d404b2 	ldrb	r0, [r4, #1202]	; fField1202
        1e1f04:	e5840740 	str	r0, [r4, #1856]	; fField1856
        1e1f08:	e3a00003 	mov	r0, #3	; 0x3
        1e1f0c:	e5840744 	str	r0, [r4, #1860]	; fField1860
        1e1f10:	e5d40785 	ldrb	r0, [r4, #1925]	; fField1925
        1e1f14:	e3300000 	teq	r0, #0	; 0x0
        1e1f18:	1a000012 	bne	1e1f68 <TSharpIRTool::HandleNegotiate(long)+0x1e4>
        1e1f1c:	e1a00004 	mov	r0, r4
        1e1f20:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1e1f24:	ea60b62c 	b	1a0f7dc <TSharpIRTool::$DoListenComplete(long)>
        1e1f28:	e3a00001 	mov	r0, #1	; 0x1
        1e1f2c:	e5840740 	str	r0, [r4, #1856]	; fField1856
        1e1f30:	e5840744 	str	r0, [r4, #1860]	; fField1860
        1e1f34:	eafffff8 	b	1e1f1c <TSharpIRTool::HandleNegotiate(long)+0x198>
        1e1f38:	e3310000 	teq	r1, #0	; 0x0
        1e1f3c:	01a00004 	moveq	r0, r4
        1e1f40:	03a0101b 	moveq	r1, #27	; 0x1b
        1e1f44:	0a000005 	beq	1e1f60 <TSharpIRTool::HandleNegotiate(long)+0x1dc>
        1e1f48:	ea000006 	b	1e1f68 <TSharpIRTool::HandleNegotiate(long)+0x1e4>
        1e1f4c:	e1310000 	teq	r1, r0
        1e1f50:	11310002 	teqne	r1, r2
        1e1f54:	1a000003 	bne	1e1f68 <TSharpIRTool::HandleNegotiate(long)+0x1e4>
        1e1f58:	e1a00004 	mov	r0, r4
        1e1f5c:	e3a0101f 	mov	r1, #31	; 0x1f
        1e1f60:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1e1f64:	ea60cec9 	b	1a15a90 <TSharpIRTool::$NextState(IREvent)>
        1e1f68:	e1a00004 	mov	r0, r4
        1e1f6c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1e1f70:	ea60b60e 	b	1a0f7b0 <TSharpIRTool::$DoConnectComplete(long)>
    */
}

/**
 * Symbol: TSharpIRTool::NextState(IREvent)
 * Address: 001e1f74
 */
TSharpIRTool::NextState(IREvent) {
    /*
        1e1f74:	e1a0c00d 	mov	ip, sp
        1e1f78:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e1f7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e1f80:	e1a04000 	mov	r4, r0
        1e1f84:	e1a00001 	mov	r0, r1
        1e1f88:	e3a0a014 	mov	sl, #20	; 0x14
        1e1f8c:	e3a05013 	mov	r5, #19	; 0x13
        1e1f90:	e3a0900a 	mov	r9, #10	; 0xa
        1e1f94:	e3a08008 	mov	r8, #8	; 0x8
        1e1f98:	e3a07007 	mov	r7, #7	; 0x7
        1e1f9c:	e3a06002 	mov	r6, #2	; 0x2
        1e1fa0:	e59f10b0 	ldr	r1, [pc, #b0]	; 1e2058 <TSharpIRTool::NextState(IREvent)+0xe4>
        1e1fa4:	e350001f 	cmp	r0, #31	; 0x1f
        1e1fa8:	908ff100 	addls	pc, pc, r0, lsl #2
        1e1fac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1e1fb0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1e1fb4:	ea000028 	b	1e205c <TSharpIRTool::NextState(IREvent)+0xe8>
        1e1fb8:	ea000031 	b	1e2084 <TSharpIRTool::NextState(IREvent)+0x110>
        1e1fbc:	ea000036 	b	1e209c <TSharpIRTool::NextState(IREvent)+0x128>
        1e1fc0:	ea000038 	b	1e20a8 <TSharpIRTool::NextState(IREvent)+0x134>
        1e1fc4:	ea00003e 	b	1e20c4 <TSharpIRTool::NextState(IREvent)+0x150>
        1e1fc8:	ea000045 	b	1e20e4 <TSharpIRTool::NextState(IREvent)+0x170>
        1e1fcc:	ea00004b 	b	1e2100 <TSharpIRTool::NextState(IREvent)+0x18c>
        1e1fd0:	ea000051 	b	1e211c <TSharpIRTool::NextState(IREvent)+0x1a8>
        1e1fd4:	ea000056 	b	1e2134 <TSharpIRTool::NextState(IREvent)+0x1c0>
        1e1fd8:	ea00005a 	b	1e2148 <TSharpIRTool::NextState(IREvent)+0x1d4>
        1e1fdc:	ea00005d 	b	1e2158 <TSharpIRTool::NextState(IREvent)+0x1e4>
        1e1fe0:	ea000063 	b	1e2174 <TSharpIRTool::NextState(IREvent)+0x200>
        1e1fe4:	ea00006a 	b	1e2194 <TSharpIRTool::NextState(IREvent)+0x220>
        1e1fe8:	ea00006f 	b	1e21ac <TSharpIRTool::NextState(IREvent)+0x238>
        1e1fec:	ea000074 	b	1e21c4 <TSharpIRTool::NextState(IREvent)+0x250>
        1e1ff0:	ea000075 	b	1e21cc <TSharpIRTool::NextState(IREvent)+0x258>
        1e1ff4:	ea00007f 	b	1e21f8 <TSharpIRTool::NextState(IREvent)+0x284>
        1e1ff8:	ea000086 	b	1e2218 <TSharpIRTool::NextState(IREvent)+0x2a4>
        1e1ffc:	ea00009d 	b	1e2278 <TSharpIRTool::NextState(IREvent)+0x304>
        1e2000:	ea00009e 	b	1e2280 <TSharpIRTool::NextState(IREvent)+0x30c>
        1e2004:	ea0000b7 	b	1e22e8 <TSharpIRTool::NextState(IREvent)+0x374>
        1e2008:	ea0000ee 	b	1e23c8 <TSharpIRTool::NextState(IREvent)+0x454>
        1e200c:	ea0000bc 	b	1e2304 <TSharpIRTool::NextState(IREvent)+0x390>
        1e2010:	ea0000bd 	b	1e230c <TSharpIRTool::NextState(IREvent)+0x398>
        1e2014:	ea0000d1 	b	1e2360 <TSharpIRTool::NextState(IREvent)+0x3ec>
        1e2018:	ea0000d3 	b	1e236c <TSharpIRTool::NextState(IREvent)+0x3f8>
        1e201c:	ea0000e0 	b	1e23a4 <TSharpIRTool::NextState(IREvent)+0x430>
        1e2020:	ea0000ec 	b	1e23d8 <TSharpIRTool::NextState(IREvent)+0x464>
        1e2024:	ea0000ef 	b	1e23e8 <TSharpIRTool::NextState(IREvent)+0x474>
        1e2028:	ea0000f9 	b	1e2414 <TSharpIRTool::NextState(IREvent)+0x4a0>
        1e202c:	e1a00004 	mov	r0, r4
        1e2030:	eb60e349 	bl	1a1ad5c <TSharpIRTool::$StopTimer2(void)>
        1e2034:	e1a00004 	mov	r0, r4
        1e2038:	eb60e345 	bl	1a1ad54 <TSharpIRTool::$StopReceive(void)>
        1e203c:	e5940728 	ldr	r0, [r4, #1832]	; fField1832
        1e2040:	e3300015 	teq	r0, #21	; 0x15
        1e2044:	1a000100 	bne	1e244c <TSharpIRTool::NextState(IREvent)+0x4d8>
        1e2048:	e584a728 	str	sl, [r4, #1832]	; fField1832
        1e204c:	e1a00004 	mov	r0, r4
        1e2050:	e3a01005 	mov	r1, #5	; 0x5
        1e2054:	ea0000bf 	b	1e2358 <TSharpIRTool::NextState(IREvent)+0x3e4>
        1e2058:	00383e70 	eoreqs	r3, r8, r0, ror lr
        1e205c:	e3a00001 	mov	r0, #1	; 0x1
        1e2060:	e3a05000 	mov	r5, #0	; 0x0
        1e2064:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e2068:	e58456cc 	str	r5, [r4, #1740]	; fField1740
        1e206c:	e58456d4 	str	r5, [r4, #1748]	; fField1748
        1e2070:	e1a00004 	mov	r0, r4
        1e2074:	e3a02001 	mov	r2, #1	; 0x1
        1e2078:	e59f1000 	ldr	r1, [pc, #0]	; 1e2080 <TSharpIRTool::NextState(IREvent)+0x10c>
        1e207c:	ea000061 	b	1e2208 <TSharpIRTool::NextState(IREvent)+0x294>
        1e2080:	1a5d4480 	bne	1933288 <ROM$$Size+0x121363c>
        1e2084:	e1a00004 	mov	r0, r4
        1e2088:	eb60e332 	bl	1a1ad58 <TSharpIRTool::$StopTimer1(void)>
        1e208c:	e1a00004 	mov	r0, r4
        1e2090:	e3a02001 	mov	r2, #1	; 0x1
        1e2094:	e59f1008 	ldr	r1, [pc, #8]	; 1e20a4 <TSharpIRTool::NextState(IREvent)+0x130>
        1e2098:	eb60e32a 	bl	1a1ad48 <TSharpIRTool::$StartTimer1(unsigned long, int)>
        1e209c:	e5846728 	str	r6, [r4, #1832]	; fField1832
        1e20a0:	ea000059 	b	1e220c <TSharpIRTool::NextState(IREvent)+0x298>
        1e20a4:	02327060 	eoreqs	r7, r2, #96	; 0x60
        1e20a8:	e1a00004 	mov	r0, r4
        1e20ac:	eb60e329 	bl	1a1ad58 <TSharpIRTool::$StopTimer1(void)>
        1e20b0:	e3a00003 	mov	r0, #3	; 0x3
        1e20b4:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e20b8:	e1a00004 	mov	r0, r4
        1e20bc:	e3a01016 	mov	r1, #22	; 0x16
        1e20c0:	ea000084 	b	1e22d8 <TSharpIRTool::NextState(IREvent)+0x364>
        1e20c4:	e3a00004 	mov	r0, #4	; 0x4
        1e20c8:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e20cc:	e1a00004 	mov	r0, r4
        1e20d0:	e3a02002 	mov	r2, #2	; 0x2
        1e20d4:	eb60e31b 	bl	1a1ad48 <TSharpIRTool::$StartTimer1(unsigned long, int)>
        1e20d8:	e1a00004 	mov	r0, r4
        1e20dc:	e3a01000 	mov	r1, #0	; 0x0
        1e20e0:	ea0000ba 	b	1e23d0 <TSharpIRTool::NextState(IREvent)+0x45c>
        1e20e4:	e1a00004 	mov	r0, r4
        1e20e8:	eb60e31a 	bl	1a1ad58 <TSharpIRTool::$StopTimer1(void)>
        1e20ec:	e3a00005 	mov	r0, #5	; 0x5
        1e20f0:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e20f4:	e1a00004 	mov	r0, r4
        1e20f8:	e3a01006 	mov	r1, #6	; 0x6
        1e20fc:	ea000075 	b	1e22d8 <TSharpIRTool::NextState(IREvent)+0x364>
        1e2100:	e1a00004 	mov	r0, r4
        1e2104:	eb60e313 	bl	1a1ad58 <TSharpIRTool::$StopTimer1(void)>
        1e2108:	e3a00006 	mov	r0, #6	; 0x6
        1e210c:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e2110:	e1a00004 	mov	r0, r4
        1e2114:	e3a01015 	mov	r1, #21	; 0x15
        1e2118:	ea00006e 	b	1e22d8 <TSharpIRTool::NextState(IREvent)+0x364>
        1e211c:	e3a05000 	mov	r5, #0	; 0x0
        1e2120:	e58456d4 	str	r5, [r4, #1748]	; fField1748
        1e2124:	e1a00004 	mov	r0, r4
        1e2128:	eb60ad69 	bl	1a0d6d4 <TSharpIRTool::$CheckReceiveDone(void)>
        1e212c:	e3300000 	teq	r0, #0	; 0x0
        1e2130:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1e2134:	e5846728 	str	r6, [r4, #1832]	; fField1832
        1e2138:	e1a00004 	mov	r0, r4
        1e213c:	e3a02001 	mov	r2, #1	; 0x1
        1e2140:	e51f10a4 	ldr	r1, [pc, #ffffff5c]	; 1e20a4 <TSharpIRTool::NextState(IREvent)+0x130>
        1e2144:	ea00002f 	b	1e2208 <TSharpIRTool::NextState(IREvent)+0x294>
        1e2148:	e3a05000 	mov	r5, #0	; 0x0
        1e214c:	e5847728 	str	r7, [r4, #1832]	; fField1832
        1e2150:	e5c45784 	strb	r5, [r4, #1924]	; fField1924
        1e2154:	ea00005d 	b	1e22d0 <TSharpIRTool::NextState(IREvent)+0x35c>
        1e2158:	e3a00009 	mov	r0, #9	; 0x9
        1e215c:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e2160:	e1a00004 	mov	r0, r4
        1e2164:	e3a02001 	mov	r2, #1	; 0x1
        1e2168:	e51f10f0 	ldr	r1, [pc, #ffffff10]	; 1e2080 <TSharpIRTool::NextState(IREvent)+0x10c>
        1e216c:	eb60e2f5 	bl	1a1ad48 <TSharpIRTool::$StartTimer1(unsigned long, int)>
        1e2170:	ea000001 	b	1e217c <TSharpIRTool::NextState(IREvent)+0x208>
        1e2174:	e5940730 	ldr	r0, [r4, #1840]	; fField1840
        1e2178:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e217c:	e1a00004 	mov	r0, r4
        1e2180:	e3a02004 	mov	r2, #4	; 0x4
        1e2184:	e59f1004 	ldr	r1, [pc, #4]	; 1e2190 <TSharpIRTool::NextState(IREvent)+0x21c>
        1e2188:	eb60e2ef 	bl	1a1ad4c <TSharpIRTool::$StartTimer2(unsigned long, int)>
        1e218c:	ea00001e 	b	1e220c <TSharpIRTool::NextState(IREvent)+0x298>
        1e2190:	001c1f38 	andeqs	r1, ip, r8, lsr pc
        1e2194:	e5940728 	ldr	r0, [r4, #1832]	; fField1832
        1e2198:	e5840730 	str	r0, [r4, #1840]	; fField1840
        1e219c:	e5848728 	str	r8, [r4, #1832]	; fField1832
        1e21a0:	e1a00004 	mov	r0, r4
        1e21a4:	eb60e2ea 	bl	1a1ad54 <TSharpIRTool::$StopReceive(void)>
        1e21a8:	ea000048 	b	1e22d0 <TSharpIRTool::NextState(IREvent)+0x35c>
        1e21ac:	e1a00004 	mov	r0, r4
        1e21b0:	eb60e2e8 	bl	1a1ad58 <TSharpIRTool::$StopTimer1(void)>
        1e21b4:	e1a00004 	mov	r0, r4
        1e21b8:	e3a02001 	mov	r2, #1	; 0x1
        1e21bc:	e51f1120 	ldr	r1, [pc, #fffffee0]	; 1e20a4 <TSharpIRTool::NextState(IREvent)+0x130>
        1e21c0:	eb60e2e0 	bl	1a1ad48 <TSharpIRTool::$StartTimer1(unsigned long, int)>
        1e21c4:	e5849728 	str	r9, [r4, #1832]	; fField1832
        1e21c8:	ea00000f 	b	1e220c <TSharpIRTool::NextState(IREvent)+0x298>
        1e21cc:	e1a00004 	mov	r0, r4
        1e21d0:	eb60e2e0 	bl	1a1ad58 <TSharpIRTool::$StopTimer1(void)>
        1e21d4:	e1a00004 	mov	r0, r4
        1e21d8:	eb60e2df 	bl	1a1ad5c <TSharpIRTool::$StopTimer2(void)>
        1e21dc:	e3a0000b 	mov	r0, #11	; 0xb
        1e21e0:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e21e4:	e1a00004 	mov	r0, r4
        1e21e8:	eb60d255 	bl	1a16b44 <TSharpIRTool::$PrepDataPacket(void)>
        1e21ec:	e1a00004 	mov	r0, r4
        1e21f0:	e3a01000 	mov	r1, #0	; 0x0
        1e21f4:	ea000068 	b	1e239c <TSharpIRTool::NextState(IREvent)+0x428>
        1e21f8:	e3a0000c 	mov	r0, #12	; 0xc
        1e21fc:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e2200:	e1a00004 	mov	r0, r4
        1e2204:	e3a02001 	mov	r2, #1	; 0x1
        1e2208:	eb60e2ce 	bl	1a1ad48 <TSharpIRTool::$StartTimer1(unsigned long, int)>
        1e220c:	e1a00004 	mov	r0, r4
        1e2210:	e3e01000 	mvn	r1, #0	; 0x0
        1e2214:	ea00006d 	b	1e23d0 <TSharpIRTool::NextState(IREvent)+0x45c>
        1e2218:	e1a00004 	mov	r0, r4
        1e221c:	eb60e2cd 	bl	1a1ad58 <TSharpIRTool::$StopTimer1(void)>
        1e2220:	e3a05000 	mov	r5, #0	; 0x0
        1e2224:	e5c45784 	strb	r5, [r4, #1924]	; fField1924
        1e2228:	e594075c 	ldr	r0, [r4, #1884]	; fField1884
        1e222c:	e2800001 	add	r0, r0, #1	; 0x1
        1e2230:	e584075c 	str	r0, [r4, #1884]	; fField1884
        1e2234:	e5940274 	ldr	r0, [r4, #628]	; fField628
        1e2238:	e3300000 	teq	r0, #0	; 0x0
        1e223c:	15847728 	strne	r7, [r4, #1832]	; fField1832
        1e2240:	1a000022 	bne	1e22d0 <TSharpIRTool::NextState(IREvent)+0x35c>
        1e2244:	e1a00004 	mov	r0, r4
        1e2248:	e3a01000 	mov	r1, #0	; 0x0
        1e224c:	e5942000 	ldr	r2, [r4]
        1e2250:	e1a0e00f 	mov	lr, pc
        1e2254:	e282ff63 	add	pc, r2, #396	; 0x18c
        1e2258:	e5d40278 	ldrb	r0, [r4, #632]	; fField632
        1e225c:	e3300000 	teq	r0, #0	; 0x0
        1e2260:	05845728 	streq	r5, [r4, #1832]	; fField1832
        1e2264:	05a4572c 	streq	r5, [r4, #1836]!	; fField1836
        1e2268:	11a00004 	movne	r0, r4
        1e226c:	191b6ff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1e2270:	1a60da6e 	bne	1a18c30 <TSharpIRTool::$ResetStateMachine(void)>
        1e2274:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1e2278:	e1a00004 	mov	r0, r4
        1e227c:	eb60e2b5 	bl	1a1ad58 <TSharpIRTool::$StopTimer1(void)>
        1e2280:	e5940724 	ldr	r0, [r4, #1828]	; fField1828
        1e2284:	e2400001 	sub	r0, r0, #1	; 0x1
        1e2288:	e5840724 	str	r0, [r4, #1828]	; fField1828
        1e228c:	e3500000 	cmp	r0, #0	; 0x0
        1e2290:	d1a00004 	movle	r0, r4
        1e2294:	d3e01075 	mvnle	r1, #117	; 0x75
        1e2298:	d2411b25 	suble	r1, r1, #37888	; 0x9400
        1e229c:	d91b6ff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1e22a0:	da60a0a6 	ble	1a0a540 <TSharpIRTool::$AbortSend(long)>
        1e22a4:	e5940760 	ldr	r0, [r4, #1888]	; fField1888
        1e22a8:	e2800001 	add	r0, r0, #1	; 0x1
        1e22ac:	e5840760 	str	r0, [r4, #1888]	; fField1888
        1e22b0:	e3a00001 	mov	r0, #1	; 0x1
        1e22b4:	e5c40784 	strb	r0, [r4, #1924]	; fField1924
        1e22b8:	e5848728 	str	r8, [r4, #1832]	; fField1832
        1e22bc:	e5849730 	str	r9, [r4, #1840]	; fField1840
        1e22c0:	e1a00004 	mov	r0, r4
        1e22c4:	e3a02001 	mov	r2, #1	; 0x1
        1e22c8:	e51f122c 	ldr	r1, [pc, #fffffdd4]	; 1e20a4 <TSharpIRTool::NextState(IREvent)+0x130>
        1e22cc:	eb60e29d 	bl	1a1ad48 <TSharpIRTool::$StartTimer1(unsigned long, int)>
        1e22d0:	e1a00004 	mov	r0, r4
        1e22d4:	e3a01005 	mov	r1, #5	; 0x5
        1e22d8:	eb60d218 	bl	1a16b40 <TSharpIRTool::$PrepControlPacket(unsigned char)>
        1e22dc:	e1a00004 	mov	r0, r4
        1e22e0:	e3e01000 	mvn	r1, #0	; 0x0
        1e22e4:	ea00002c 	b	1e239c <TSharpIRTool::NextState(IREvent)+0x428>
        1e22e8:	e3a0000e 	mov	r0, #14	; 0xe
        1e22ec:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e22f0:	e1a00004 	mov	r0, r4
        1e22f4:	e3a02003 	mov	r2, #3	; 0x3
        1e22f8:	e51f1280 	ldr	r1, [pc, #fffffd80]	; 1e2080 <TSharpIRTool::NextState(IREvent)+0x10c>
        1e22fc:	eb60e291 	bl	1a1ad48 <TSharpIRTool::$StartTimer1(unsigned long, int)>
        1e2300:	ea000030 	b	1e23c8 <TSharpIRTool::NextState(IREvent)+0x454>
        1e2304:	e3a00010 	mov	r0, #16	; 0x10
        1e2308:	ea000003 	b	1e231c <TSharpIRTool::NextState(IREvent)+0x3a8>
        1e230c:	e5940728 	ldr	r0, [r4, #1832]	; fField1832
        1e2310:	e330000e 	teq	r0, #14	; 0xe
        1e2314:	1a00000b 	bne	1e2348 <TSharpIRTool::NextState(IREvent)+0x3d4>
        1e2318:	e3a00011 	mov	r0, #17	; 0x11
        1e231c:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e2320:	e5d414b2 	ldrb	r1, [r4, #1202]	; fField1202
        1e2324:	e5d40786 	ldrb	r0, [r4, #1926]	; fField1926
        1e2328:	e0010000 	and	r0, r1, r0
        1e232c:	e20020ff 	and	r2, r0, #255	; 0xff
        1e2330:	e5d404b3 	ldrb	r0, [r4, #1203]	; fField1203
        1e2334:	e2003003 	and	r3, r0, #3	; 0x3
        1e2338:	e1a00004 	mov	r0, r4
        1e233c:	e3a01086 	mov	r1, #134	; 0x86
        1e2340:	eb60d200 	bl	1a16b48 <TSharpIRTool::$PrepNegotiatePacket(unsigned char, unsigned char, unsigned char)>
        1e2344:	ea000012 	b	1e2394 <TSharpIRTool::NextState(IREvent)+0x420>
        1e2348:	e3a00012 	mov	r0, #18	; 0x12
        1e234c:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e2350:	e1a00004 	mov	r0, r4
        1e2354:	e3a01016 	mov	r1, #22	; 0x16
        1e2358:	eb60d1f8 	bl	1a16b40 <TSharpIRTool::$PrepControlPacket(unsigned char)>
        1e235c:	ea00000c 	b	1e2394 <TSharpIRTool::NextState(IREvent)+0x420>
        1e2360:	e3a0000f 	mov	r0, #15	; 0xf
        1e2364:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e2368:	ea000016 	b	1e23c8 <TSharpIRTool::NextState(IREvent)+0x454>
        1e236c:	e5845728 	str	r5, [r4, #1832]	; fField1832
        1e2370:	e5d42786 	ldrb	r2, [r4, #1926]	; fField1926
        1e2374:	e1a00004 	mov	r0, r4
        1e2378:	e3a03003 	mov	r3, #3	; 0x3
        1e237c:	e3a01085 	mov	r1, #133	; 0x85
        1e2380:	eb60d1f0 	bl	1a16b48 <TSharpIRTool::$PrepNegotiatePacket(unsigned char, unsigned char, unsigned char)>
        1e2384:	e1a00004 	mov	r0, r4
        1e2388:	e3a02003 	mov	r2, #3	; 0x3
        1e238c:	e51f1314 	ldr	r1, [pc, #fffffcec]	; 1e2080 <TSharpIRTool::NextState(IREvent)+0x10c>
        1e2390:	eb60e26c 	bl	1a1ad48 <TSharpIRTool::$StartTimer1(unsigned long, int)>
        1e2394:	e1a00004 	mov	r0, r4
        1e2398:	e3a01001 	mov	r1, #1	; 0x1
        1e239c:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1e23a0:	ea60e26a 	b	1a1ad50 <TSharpIRTool::$StartTransmit(IRPacketType)>
        1e23a4:	e5940728 	ldr	r0, [r4, #1832]	; fField1832
        1e23a8:	e3300013 	teq	r0, #19	; 0x13
        1e23ac:	13a00016 	movne	r0, #22	; 0x16
        1e23b0:	03a00015 	moveq	r0, #21	; 0x15
        1e23b4:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e23b8:	e1a00004 	mov	r0, r4
        1e23bc:	e3a02005 	mov	r2, #5	; 0x5
        1e23c0:	e51f1238 	ldr	r1, [pc, #fffffdc8]	; 1e2190 <TSharpIRTool::NextState(IREvent)+0x21c>
        1e23c4:	eb60e260 	bl	1a1ad4c <TSharpIRTool::$StartTimer2(unsigned long, int)>
        1e23c8:	e1a00004 	mov	r0, r4
        1e23cc:	e3a01001 	mov	r1, #1	; 0x1
        1e23d0:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1e23d4:	ea60e25a 	b	1a1ad44 <TSharpIRTool::$StartReceive(IRPacketType)>
        1e23d8:	e5940728 	ldr	r0, [r4, #1832]	; fField1832
        1e23dc:	e3300015 	teq	r0, #21	; 0x15
        1e23e0:	0affff18 	beq	1e2048 <TSharpIRTool::NextState(IREvent)+0xd4>
        1e23e4:	ea000018 	b	1e244c <TSharpIRTool::NextState(IREvent)+0x4d8>
        1e23e8:	e1a00004 	mov	r0, r4
        1e23ec:	eb60e25a 	bl	1a1ad5c <TSharpIRTool::$StopTimer2(void)>
        1e23f0:	e5940728 	ldr	r0, [r4, #1832]	; fField1832
        1e23f4:	e3300015 	teq	r0, #21	; 0x15
        1e23f8:	1a000013 	bne	1e244c <TSharpIRTool::NextState(IREvent)+0x4d8>
        1e23fc:	e1a00004 	mov	r0, r4
        1e2400:	eb60e254 	bl	1a1ad58 <TSharpIRTool::$StopTimer1(void)>
        1e2404:	e5d404b2 	ldrb	r0, [r4, #1202]	; fField1202
        1e2408:	e5840740 	str	r0, [r4, #1856]	; fField1856
        1e240c:	e5d404b3 	ldrb	r0, [r4, #1203]	; fField1203
        1e2410:	ea000008 	b	1e2438 <TSharpIRTool::NextState(IREvent)+0x4c4>
        1e2414:	e1a00004 	mov	r0, r4
        1e2418:	eb60e24f 	bl	1a1ad5c <TSharpIRTool::$StopTimer2(void)>
        1e241c:	e5940728 	ldr	r0, [r4, #1832]	; fField1832
        1e2420:	e3300015 	teq	r0, #21	; 0x15
        1e2424:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1e2428:	e1a00004 	mov	r0, r4
        1e242c:	eb60e249 	bl	1a1ad58 <TSharpIRTool::$StopTimer1(void)>
        1e2430:	e3a00001 	mov	r0, #1	; 0x1
        1e2434:	e5840740 	str	r0, [r4, #1856]	; fField1856
        1e2438:	e5840744 	str	r0, [r4, #1860]	; fField1860
        1e243c:	e1a00004 	mov	r0, r4
        1e2440:	e3a01000 	mov	r1, #0	; 0x0
        1e2444:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1e2448:	ea60b4d8 	b	1a0f7b0 <TSharpIRTool::$DoConnectComplete(long)>
        1e244c:	e5845728 	str	r5, [r4, #1832]	; fField1832
        1e2450:	e5d42786 	ldrb	r2, [r4, #1926]	; fField1926
        1e2454:	e1a00004 	mov	r0, r4
        1e2458:	e3a03003 	mov	r3, #3	; 0x3
        1e245c:	e3a01085 	mov	r1, #133	; 0x85
        1e2460:	eaffffb6 	b	1e2340 <TSharpIRTool::NextState(IREvent)+0x3cc>
    */
}

/**
 * Symbol: TSharpIRTool::KillGet(void)
 * Address: 001e2464
 */
TSharpIRTool::KillGet(void) {
    /*
        1e2464:	e1a0c00d 	mov	ip, sp
        1e2468:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e246c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2470:	e1a04000 	mov	r4, r0
        1e2474:	e59f1014 	ldr	r1, [pc, #14]	; 1e2490 <TSharpIRTool::KillGet(void)+0x2c>
        1e2478:	eb60a02f 	bl	1a0a53c <TSharpIRTool::$AbortReceive(long)>
        1e247c:	e1a00004 	mov	r0, r4
        1e2480:	e3a01000 	mov	r1, #0	; 0x0
        1e2484:	e5942000 	ldr	r2, [r4]
        1e2488:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e248c:	e282f0f4 	add	pc, r2, #244	; 0xf4
        1e2490:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TSharpIRTool::AbortReceive(long)
 * Address: 001e2494
 */
TSharpIRTool::AbortReceive(long) {
    /*
        1e2494:	e1a0c00d 	mov	ip, sp
        1e2498:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e249c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e24a0:	e1a04000 	mov	r4, r0
        1e24a4:	e1a05001 	mov	r5, r1
        1e24a8:	eb60d9e0 	bl	1a18c30 <TSharpIRTool::$ResetStateMachine(void)>
        1e24ac:	e1a01005 	mov	r1, r5
        1e24b0:	e1a00004 	mov	r0, r4
        1e24b4:	e3a02000 	mov	r2, #0	; 0x0
        1e24b8:	e5943000 	ldr	r3, [r4]
        1e24bc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e24c0:	e283ff65 	add	pc, r3, #404	; 0x194
    */
}

/**
 * Symbol: TSharpIRTool::TaskDestructor(void)
 * Address: 001e24c4
 */
TSharpIRTool::TaskDestructor(void) {
    /*
        1e24c4:	ea60e630 	b	1a1bd8c <TAsyncSerTool::$TaskDestructor(void)>
    */
}

/**
 * Symbol: TSharpIRTool::KillPut(void)
 * Address: 001e24c8
 */
TSharpIRTool::KillPut(void) {
    /*
        1e24c8:	e1a0c00d 	mov	ip, sp
        1e24cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e24d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e24d4:	e1a04000 	mov	r4, r0
        1e24d8:	e59f1014 	ldr	r1, [pc, #14]	; 1e24f4 <TSharpIRTool::KillPut(void)+0x2c>
        1e24dc:	eb60a017 	bl	1a0a540 <TSharpIRTool::$AbortSend(long)>
        1e24e0:	e1a00004 	mov	r0, r4
        1e24e4:	e3a01000 	mov	r1, #0	; 0x0
        1e24e8:	e5942000 	ldr	r2, [r4]
        1e24ec:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e24f0:	e282f0dc 	add	pc, r2, #220	; 0xdc
        1e24f4:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TSharpIRTool::AbortSend(long)
 * Address: 001e24f8
 */
TSharpIRTool::AbortSend(long) {
    /*
        1e24f8:	e1a0c00d 	mov	ip, sp
        1e24fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e2500:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2504:	e1a04000 	mov	r4, r0
        1e2508:	e1a05001 	mov	r5, r1
        1e250c:	eb60d9c7 	bl	1a18c30 <TSharpIRTool::$ResetStateMachine(void)>
        1e2510:	e1a01005 	mov	r1, r5
        1e2514:	e1a00004 	mov	r0, r4
        1e2518:	e5942000 	ldr	r2, [r4]
        1e251c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e2520:	e282ff63 	add	pc, r2, #396	; 0x18c
    */
}

/**
 * Symbol: TSharpIRTool::StartAbort(long)
 * Address: 001e2524
 */
TSharpIRTool::StartAbort(long) {
    /*
        1e2524:	e1a0c00d 	mov	ip, sp
        1e2528:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e252c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2530:	e1a04000 	mov	r4, r0
        1e2534:	e1a05001 	mov	r5, r1
        1e2538:	eb60d9bc 	bl	1a18c30 <TSharpIRTool::$ResetStateMachine(void)>
        1e253c:	e1a01005 	mov	r1, r5
        1e2540:	e1a00004 	mov	r0, r4
        1e2544:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e2548:	ea677ad0 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TSharpIRTool::TerminateComplete(void)
 * Address: 001e254c
 */
TSharpIRTool::TerminateComplete(void) {
    /*
        1e254c:	e1a0c00d 	mov	ip, sp
        1e2550:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e2554:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2558:	e1a04000 	mov	r4, r0
        1e255c:	eb60d9b3 	bl	1a18c30 <TSharpIRTool::$ResetStateMachine(void)>
        1e2560:	e1a00004 	mov	r0, r4
        1e2564:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e2568:	ea60e612 	b	1a1bdb8 <TSerTool::$TerminateComplete(void)>
    */
}

/**
 * Symbol: TSharpIRTool::OpenStart(TOptionArray *)
 * Address: 001e256c
 */
TSharpIRTool::OpenStart(TOptionArray *) {
    /*
        1e256c:	ea6776b0 	b	1bc0034 <TCommTool::$OpenStart(TOptionArray *)>
    */
}

/**
 * Symbol: TSharpIRTool::ListenStart(void)
 * Address: 001e2570
 */
TSharpIRTool::ListenStart(void) {
    /*
        1e2570:	e1a0c00d 	mov	ip, sp
        1e2574:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e2578:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e257c:	e1a04000 	mov	r4, r0
        1e2580:	e5901000 	ldr	r1, [r0]
        1e2584:	e1a0e00f 	mov	lr, pc
        1e2588:	e281fe15 	add	pc, r1, #336	; 0x150
        1e258c:	e3300000 	teq	r0, #0	; 0x0
        1e2590:	0a000004 	beq	1e25a8 <TSharpIRTool::ListenStart(void)+0x38>
        1e2594:	e1a01000 	mov	r1, r0
        1e2598:	e1a00004 	mov	r0, r4
        1e259c:	e5942000 	ldr	r2, [r4]
        1e25a0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e25a4:	e282f05c 	add	pc, r2, #92	; 0x5c
        1e25a8:	e3a00000 	mov	r0, #0	; 0x0
        1e25ac:	e5c40785 	strb	r0, [r4, #1925]	; fField1925
        1e25b0:	e3a00007 	mov	r0, #7	; 0x7
        1e25b4:	e5c40786 	strb	r0, [r4, #1926]	; fField1926
        1e25b8:	e1a00004 	mov	r0, r4
        1e25bc:	e3a01001 	mov	r1, #1	; 0x1
        1e25c0:	eb60d9a5 	bl	1a18c5c <TSharpIRTool::$SelectProtocol(unsigned char)>
        1e25c4:	e1a00004 	mov	r0, r4
        1e25c8:	e3a01015 	mov	r1, #21	; 0x15
        1e25cc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e25d0:	ea60cd2e 	b	1a15a90 <TSharpIRTool::$NextState(IREvent)>
    */
}

/**
 * Symbol: TSharpIRTool::DoListenComplete(long)
 * Address: 001e25d4
 */
TSharpIRTool::DoListenComplete(long) {
    /*
        1e25d4:	e1a0c00d 	mov	ip, sp
        1e25d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e25dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e25e0:	e1a04000 	mov	r4, r0
        1e25e4:	e1a05001 	mov	r5, r1
        1e25e8:	eb60d990 	bl	1a18c30 <TSharpIRTool::$ResetStateMachine(void)>
        1e25ec:	e3350000 	teq	r5, #0	; 0x0
        1e25f0:	0a000004 	beq	1e2608 <TSharpIRTool::DoListenComplete(long)+0x34>
        1e25f4:	e1a01005 	mov	r1, r5
        1e25f8:	e1a00004 	mov	r0, r4
        1e25fc:	e5942000 	ldr	r2, [r4]
        1e2600:	e2822f6d 	add	r2, r2, #436	; 0x1b4
        1e2604:	ea000006 	b	1e2624 <TSharpIRTool::DoListenComplete(long)+0x50>
        1e2608:	e594077c 	ldr	r0, [r4, #1916]	; fField1916
        1e260c:	e3c00002 	bic	r0, r0, #2	; 0x2
        1e2610:	e1a01005 	mov	r1, r5
        1e2614:	e584077c 	str	r0, [r4, #1916]	; fField1916
        1e2618:	e1a00004 	mov	r0, r4
        1e261c:	e5942000 	ldr	r2, [r4]
        1e2620:	e282205c 	add	r2, r2, #92	; 0x5c
        1e2624:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e2628:	e282f000 	add	pc, r2, #0	; 0x0
    */
}

/**
 * Symbol: TSharpIRTool::AcceptStart(void)
 * Address: 001e262c
 */
TSharpIRTool::AcceptStart(void) {
    /*
        1e262c:	e1a0c00d 	mov	ip, sp
        1e2630:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e2634:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2638:	e1a04000 	mov	r4, r0
        1e263c:	e3a01000 	mov	r1, #0	; 0x0
        1e2640:	eb60d985 	bl	1a18c5c <TSharpIRTool::$SelectProtocol(unsigned char)>
        1e2644:	e1a00004 	mov	r0, r4
        1e2648:	e3a01000 	mov	r1, #0	; 0x0
        1e264c:	e5942000 	ldr	r2, [r4]
        1e2650:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e2654:	e282f064 	add	pc, r2, #100	; 0x64
    */
}

/**
 * Symbol: TSharpIRTool::ConnectStart(void)
 * Address: 001e2658
 */
TSharpIRTool::ConnectStart(void) {
    /*
        1e2658:	e1a0c00d 	mov	ip, sp
        1e265c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e2660:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2664:	e1a04000 	mov	r4, r0
        1e2668:	e5901000 	ldr	r1, [r0]
        1e266c:	e1a0e00f 	mov	lr, pc
        1e2670:	e281fe15 	add	pc, r1, #336	; 0x150
        1e2674:	e3300000 	teq	r0, #0	; 0x0
        1e2678:	0a000004 	beq	1e2690 <TSharpIRTool::ConnectStart(void)+0x38>
        1e267c:	e1a01000 	mov	r1, r0
        1e2680:	e1a00004 	mov	r0, r4
        1e2684:	e5942000 	ldr	r2, [r4]
        1e2688:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e268c:	e282f054 	add	pc, r2, #84	; 0x54
        1e2690:	e3a00000 	mov	r0, #0	; 0x0
        1e2694:	e5c40785 	strb	r0, [r4, #1925]	; fField1925
        1e2698:	e594077c 	ldr	r0, [r4, #1916]	; fField1916
        1e269c:	e3100008 	tst	r0, #8	; 0x8
        1e26a0:	15940740 	ldrne	r0, [r4, #1856]	; fField1856
        1e26a4:	13300000 	teqne	r0, #0	; 0x0
        1e26a8:	11a00004 	movne	r0, r4
        1e26ac:	13a01000 	movne	r1, #0	; 0x0
        1e26b0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        1e26b4:	1a60b43d 	bne	1a0f7b0 <TSharpIRTool::$DoConnectComplete(long)>
        1e26b8:	e3a00007 	mov	r0, #7	; 0x7
        1e26bc:	e5c40786 	strb	r0, [r4, #1926]	; fField1926
        1e26c0:	e1a00004 	mov	r0, r4
        1e26c4:	e3a01001 	mov	r1, #1	; 0x1
        1e26c8:	eb60d963 	bl	1a18c5c <TSharpIRTool::$SelectProtocol(unsigned char)>
        1e26cc:	e1a00004 	mov	r0, r4
        1e26d0:	e3a0101a 	mov	r1, #26	; 0x1a
        1e26d4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e26d8:	ea60ccec 	b	1a15a90 <TSharpIRTool::$NextState(IREvent)>
    */
}

/**
 * Symbol: TSharpIRTool::DoConnectComplete(long)
 * Address: 001e26dc
 */
TSharpIRTool::DoConnectComplete(long) {
    /*
        1e26dc:	e1a0c00d 	mov	ip, sp
        1e26e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e26e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e26e8:	e1a04000 	mov	r4, r0
        1e26ec:	e1a05001 	mov	r5, r1
        1e26f0:	eb60d94e 	bl	1a18c30 <TSharpIRTool::$ResetStateMachine(void)>
        1e26f4:	e3350000 	teq	r5, #0	; 0x0
        1e26f8:	0a000004 	beq	1e2710 <TSharpIRTool::DoConnectComplete(long)+0x34>
        1e26fc:	e1a01005 	mov	r1, r5
        1e2700:	e1a00004 	mov	r0, r4
        1e2704:	e5942000 	ldr	r2, [r4]
        1e2708:	e2822f6d 	add	r2, r2, #436	; 0x1b4
        1e270c:	ea00000c 	b	1e2744 <TSharpIRTool::DoConnectComplete(long)+0x68>
        1e2710:	e1a00004 	mov	r0, r4
        1e2714:	e3a01000 	mov	r1, #0	; 0x0
        1e2718:	eb60d94f 	bl	1a18c5c <TSharpIRTool::$SelectProtocol(unsigned char)>
        1e271c:	e5d40785 	ldrb	r0, [r4, #1925]	; fField1925
        1e2720:	e3300000 	teq	r0, #0	; 0x0
        1e2724:	e594077c 	ldr	r0, [r4, #1916]	; fField1916
        1e2728:	03800002 	orreq	r0, r0, #2	; 0x2
        1e272c:	13c00002 	bicne	r0, r0, #2	; 0x2
        1e2730:	e1a01005 	mov	r1, r5
        1e2734:	e584077c 	str	r0, [r4, #1916]	; fField1916
        1e2738:	e1a00004 	mov	r0, r4
        1e273c:	e5942000 	ldr	r2, [r4]
        1e2740:	e2822054 	add	r2, r2, #84	; 0x54
        1e2744:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e2748:	e282f000 	add	pc, r2, #0	; 0x0
    */
}

/**
 * Symbol: TSharpIRTool::GetSizeOf(void)
 * Address: 001e274c
 */
TSharpIRTool::GetSizeOf(void) {
    /*
        1e274c:	e3a00e79 	mov	r0, #1936	; 0x790
        1e2750:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSharpIRTool::SelectSpeed(unsigned char)
 * Address: 001e2754
 */
TSharpIRTool::SelectSpeed(unsigned char) {
    /*
        1e2754:	e31100ff 	tst	r1, #255	; 0xff
        1e2758:	e3a01001 	mov	r1, #1	; 0x1
        1e275c:	1a00000e 	bne	1e279c <TSharpIRTool::SelectSpeed(unsigned char)+0x48>
        1e2760:	e5902740 	ldr	r2, [r0, #1856]	; fField1856
        1e2764:	e3320002 	teq	r2, #2	; 0x2
        1e2768:	13320004 	teqne	r2, #4	; 0x4
        1e276c:	1a00000a 	bne	1e279c <TSharpIRTool::SelectSpeed(unsigned char)+0x48>
        1e2770:	e5902744 	ldr	r2, [r0, #1860]	; fField1860
        1e2774:	e3120004 	tst	r2, #4	; 0x4
        1e2778:	13a01004 	movne	r1, #4	; 0x4
        1e277c:	15801744 	strne	r1, [r0, #1860]	; fField1860
        1e2780:	13a01c96 	movne	r1, #38400	; 0x9600
        1e2784:	1a000006 	bne	1e27a4 <TSharpIRTool::SelectSpeed(unsigned char)+0x50>
        1e2788:	e3120002 	tst	r2, #2	; 0x2
        1e278c:	13a01002 	movne	r1, #2	; 0x2
        1e2790:	15801744 	strne	r1, [r0, #1860]	; fField1860
        1e2794:	13a01c4b 	movne	r1, #19200	; 0x4b00
        1e2798:	1a000001 	bne	1e27a4 <TSharpIRTool::SelectSpeed(unsigned char)+0x50>
        1e279c:	e5801744 	str	r1, [r0, #1860]	; fField1860
        1e27a0:	e3a01d96 	mov	r1, #9600	; 0x2580
        1e27a4:	ea60abc8 	b	1a0d6cc <TSerTool::$ChangeSpeed(unsigned long)>
    */
}

/**
 * Symbol: TSharpIRTool::SelectProtocol(unsigned char)
 * Address: 001e27a8
 */
TSharpIRTool::SelectProtocol(unsigned char) {
    /*
        1e27a8:	e21120ff 	ands	r2, r1, #255	; 0xff
        1e27ac:	13a01000 	movne	r1, #0	; 0x0
        1e27b0:	1a000006 	bne	1e27d0 <TSharpIRTool::SelectProtocol(unsigned char)+0x28>
        1e27b4:	e5901740 	ldr	r1, [r0, #1856]	; fField1856
        1e27b8:	e3110004 	tst	r1, #4	; 0x4
        1e27bc:	13a01004 	movne	r1, #4	; 0x4
        1e27c0:	1a000002 	bne	1e27d0 <TSharpIRTool::SelectProtocol(unsigned char)+0x28>
        1e27c4:	e3110002 	tst	r1, #2	; 0x2
        1e27c8:	03a01001 	moveq	r1, #1	; 0x1
        1e27cc:	13a01002 	movne	r1, #2	; 0x2
        1e27d0:	e5801740 	str	r1, [r0, #1856]	; fField1856
        1e27d4:	e1a01002 	mov	r1, r2
        1e27d8:	ea60fa2d 	b	1a21094 <TSharpIRTool::$SelectSpeed(unsigned char)>
    */
}

/**
 * Symbol: TSharpIRTool::AddDefaultOptions(TOptionArray *)
 * Address: 001e27dc
 */
TSharpIRTool::AddDefaultOptions(TOptionArray *) {
    /*
        1e27dc:	e1a0c00d 	mov	ip, sp
        1e27e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e27e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e27e8:	e1a05000 	mov	r5, r0
        1e27ec:	e1a04001 	mov	r4, r1
        1e27f0:	e24dd014 	sub	sp, sp, #20	; 0x14
        1e27f4:	e1a0000d 	mov	r0, sp
        1e27f8:	eb67698c 	bl	1bbce30 <TCMOSlowIRProtocolType::$__ct(void)>
        1e27fc:	e1a0200d 	mov	r2, sp
        1e2800:	e5941000 	ldr	r1, [r4]
        1e2804:	e1a00004 	mov	r0, r4
        1e2808:	eb675d25 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1e280c:	e3300000 	teq	r0, #0	; 0x0
        1e2810:	01a01004 	moveq	r1, r4
        1e2814:	01a00005 	moveq	r0, r5
        1e2818:	0b60a35d 	bleq	1a0b594 <TAsyncSerTool::$AddDefaultOptions(TOptionArray *)>
        1e281c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::AddCurrentOptions(TOptionArray *)
 * Address: 001e2820
 */
TSharpIRTool::AddCurrentOptions(TOptionArray *) {
    /*
        1e2820:	e1a0c00d 	mov	ip, sp
        1e2824:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e2828:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e282c:	e1a05000 	mov	r5, r0
        1e2830:	e1a04001 	mov	r4, r1
        1e2834:	e2802fcd 	add	r2, r0, #820	; 0x334
        1e2838:	e2822b01 	add	r2, r2, #1024	; 0x400
        1e283c:	e5911000 	ldr	r1, [r1]
        1e2840:	e1a00004 	mov	r0, r4
        1e2844:	eb675d16 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1e2848:	e3300000 	teq	r0, #0	; 0x0
        1e284c:	1a000004 	bne	1e2864 <TSharpIRTool::AddCurrentOptions(TOptionArray *)+0x44>
        1e2850:	e2852fd2 	add	r2, r5, #840	; 0x348
        1e2854:	e2822b01 	add	r2, r2, #1024	; 0x400
        1e2858:	e5941000 	ldr	r1, [r4]
        1e285c:	e1a00004 	mov	r0, r4
        1e2860:	eb675d0f 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1e2864:	e3300000 	teq	r0, #0	; 0x0
        1e2868:	1a000003 	bne	1e287c <TSharpIRTool::AddCurrentOptions(TOptionArray *)+0x5c>
        1e286c:	e2852e77 	add	r2, r5, #1904	; 0x770
        1e2870:	e5941000 	ldr	r1, [r4]
        1e2874:	e1a00004 	mov	r0, r4
        1e2878:	eb675d09 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1e287c:	e3300000 	teq	r0, #0	; 0x0
        1e2880:	01a01004 	moveq	r1, r4
        1e2884:	01a00005 	moveq	r0, r5
        1e2888:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        1e288c:	0a60a33c 	beq	1a0b584 <TAsyncSerTool::$AddCurrentOptions(TOptionArray *)>
        1e2890:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 001e2894
 */
TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        1e2894:	e1a0c00d 	mov	ip, sp
        1e2898:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e289c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e28a0:	e1a05000 	mov	r5, r0
        1e28a4:	e1a04001 	mov	r4, r1
        1e28a8:	e3a06000 	mov	r6, #0	; 0x0
        1e28ac:	e59fc070 	ldr	ip, [pc, #70]	; 1e2924 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x90>
        1e28b0:	e132000c 	teq	r2, ip
        1e28b4:	0a000059 	beq	1e2a20 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x18c>
        1e28b8:	e59fc068 	ldr	ip, [pc, #68]	; 1e2928 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x94>
        1e28bc:	e132000c 	teq	r2, ip
        1e28c0:	0a00001b 	beq	1e2934 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xa0>
        1e28c4:	e59fc060 	ldr	ip, [pc, #60]	; 1e292c <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x98>
        1e28c8:	e132000c 	teq	r2, ip
        1e28cc:	0a000039 	beq	1e29b8 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x124>
        1e28d0:	e59fc058 	ldr	ip, [pc, #58]	; 1e2930 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x9c>
        1e28d4:	e132000c 	teq	r2, ip
        1e28d8:	11a01004 	movne	r1, r4
        1e28dc:	11a00005 	movne	r0, r5
        1e28e0:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1e28e4:	1a60f5d9 	bne	1a20050 <TAsyncSerTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
        1e28e8:	e2850ff5 	add	r0, r5, #980	; 0x3d4
        1e28ec:	e3a07f83 	mov	r7, #524	; 0x20c
        1e28f0:	e3330c01 	teq	r3, #256	; 0x100
        1e28f4:	13330c02 	teqne	r3, #512	; 0x200
        1e28f8:	1a000022 	bne	1e2988 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xf4>
        1e28fc:	e5d5128c 	ldrb	r1, [r5, #652]	; fField652
        1e2900:	e3310000 	teq	r1, #0	; 0x0
        1e2904:	1a000043 	bne	1e2a18 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x184>
        1e2908:	e1a01004 	mov	r1, r4
        1e290c:	eb6754af 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1e2910:	e58573e4 	str	r7, [r5, #996]	; fField996
        1e2914:	e59503e0 	ldr	r0, [r5, #992]	; fField992
        1e2918:	e3500f83 	cmp	r0, #524	; 0x20c
        1e291c:	35a573e0 	strcc	r7, [r5, #992]!	; fField992
        1e2920:	ea00004b 	b	1e2a54 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c0>
        1e2924:	6972636f 	ldmvsdb	r2!, {r0, r1, r2, r3, r5, r6, r8, r9, sp, lr}^
        1e2928:	69727074 	ldmvsdb	r2!, {r2, r4, r5, r6, ip, sp, lr}^
        1e292c:	69727374 	ldmvsdb	r2!, {r2, r4, r5, r6, r8, r9, ip, sp, lr}^
        1e2930:	73627566 	cmnvc	r2, #427819008	; 0x19800000
        1e2934:	e2850fcd 	add	r0, r5, #820	; 0x334
        1e2938:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e293c:	e3330c01 	teq	r3, #256	; 0x100
        1e2940:	13330c02 	teqne	r3, #512	; 0x200
        1e2944:	1a000001 	bne	1e2950 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xbc>
        1e2948:	e1a01004 	mov	r1, r4
        1e294c:	ea00000b 	b	1e2980 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xec>
        1e2950:	e3330c03 	teq	r3, #768	; 0x300
        1e2954:	1a000007 	bne	1e2978 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xe4>
        1e2958:	e24dd014 	sub	sp, sp, #20	; 0x14
        1e295c:	e1a0000d 	mov	r0, sp
        1e2960:	eb676932 	bl	1bbce30 <TCMOSlowIRProtocolType::$__ct(void)>
        1e2964:	e1a0100d 	mov	r1, sp
        1e2968:	e1a00004 	mov	r0, r4
        1e296c:	eb675497 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1e2970:	e28dd014 	add	sp, sp, #20	; 0x14
        1e2974:	ea000036 	b	1e2a54 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c0>
        1e2978:	e1a01000 	mov	r1, r0
        1e297c:	e1a00004 	mov	r0, r4
        1e2980:	eb675492 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1e2984:	ea000032 	b	1e2a54 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c0>
        1e2988:	e3330c03 	teq	r3, #768	; 0x300
        1e298c:	1afffff9 	bne	1e2978 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xe4>
        1e2990:	e24dd018 	sub	sp, sp, #24	; 0x18
        1e2994:	e1a0000d 	mov	r0, sp
        1e2998:	eb676512 	bl	1bbbde8 <TCMOSerialBuffers::$__ct(void)>
        1e299c:	e58d7010 	str	r7, [sp, #16]
        1e29a0:	e58d700c 	str	r7, [sp, #12]
        1e29a4:	e1a0100d 	mov	r1, sp
        1e29a8:	e1a00004 	mov	r0, r4
        1e29ac:	eb675487 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1e29b0:	e28dd018 	add	sp, sp, #24	; 0x18
        1e29b4:	ea000026 	b	1e2a54 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c0>
        1e29b8:	e3330c01 	teq	r3, #256	; 0x100
        1e29bc:	13330c02 	teqne	r3, #512	; 0x200
        1e29c0:	03e06002 	mvneq	r6, #2	; 0x2
        1e29c4:	0a000022 	beq	1e2a54 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c0>
        1e29c8:	e3330b01 	teq	r3, #1024	; 0x400
        1e29cc:	1a000011 	bne	1e2a18 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x184>
        1e29d0:	e2851fd2 	add	r1, r5, #840	; 0x348
        1e29d4:	e2811b01 	add	r1, r1, #1024	; 0x400
        1e29d8:	e1a05001 	mov	r5, r1
        1e29dc:	e1a00004 	mov	r0, r4
        1e29e0:	eb67547a 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1e29e4:	e5940008 	ldr	r0, [r4, #8]
        1e29e8:	e3c000ff 	bic	r0, r0, #255	; 0xff
        1e29ec:	e5a40008 	str	r0, [r4, #8]!
        1e29f0:	e24dd028 	sub	sp, sp, #40	; 0x28
        1e29f4:	e1a0000d 	mov	r0, sp
        1e29f8:	eb6764ed 	bl	1bbbdb4 <TCMOSlowIRStats::$__ct(void)>
        1e29fc:	e1a0000d 	mov	r0, sp
        1e2a00:	e8b0500e 	ldmia	r0!, {r1, r2, r3, ip, lr}
        1e2a04:	e8a5500e 	stmia	r5!, {r1, r2, r3, ip, lr}
        1e2a08:	e890500e 	ldmia	r0, {r1, r2, r3, ip, lr}
        1e2a0c:	e885500e 	stmia	r5, {r1, r2, r3, ip, lr}
        1e2a10:	e28dd028 	add	sp, sp, #40	; 0x28
        1e2a14:	ea00000e 	b	1e2a54 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c0>
        1e2a18:	e3e06000 	mvn	r6, #0	; 0x0
        1e2a1c:	ea00000c 	b	1e2a54 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c0>
        1e2a20:	e2850e77 	add	r0, r5, #1904	; 0x770
        1e2a24:	e3330c01 	teq	r3, #256	; 0x100
        1e2a28:	13330c02 	teqne	r3, #512	; 0x200
        1e2a2c:	0affffc5 	beq	1e2948 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xb4>
        1e2a30:	e3330c03 	teq	r3, #768	; 0x300
        1e2a34:	1affffcf 	bne	1e2978 <TSharpIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xe4>
        1e2a38:	e24dd010 	sub	sp, sp, #16	; 0x10
        1e2a3c:	e1a0000d 	mov	r0, sp
        1e2a40:	eb688608 	bl	1c04268 <TCMOSlowIRConnect::$__ct(void)>
        1e2a44:	e1a0100d 	mov	r1, sp
        1e2a48:	e1a00004 	mov	r0, r4
        1e2a4c:	eb67545f 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1e2a50:	e28dd010 	add	sp, sp, #16	; 0x10
        1e2a54:	e1a00006 	mov	r0, r6
        1e2a58:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::ResetStateMachine(void)
 * Address: 001e2a5c
 */
TSharpIRTool::ResetStateMachine(void) {
    /*
        1e2a5c:	e1a0c00d 	mov	ip, sp
        1e2a60:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e2a64:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2a68:	e1a04000 	mov	r4, r0
        1e2a6c:	eb60e0bb 	bl	1a1ad60 <TSharpIRTool::$StopTransmit(void)>
        1e2a70:	e1a00004 	mov	r0, r4
        1e2a74:	eb60e0b6 	bl	1a1ad54 <TSharpIRTool::$StopReceive(void)>
        1e2a78:	e1a00004 	mov	r0, r4
        1e2a7c:	eb60e0b5 	bl	1a1ad58 <TSharpIRTool::$StopTimer1(void)>
        1e2a80:	e1a00004 	mov	r0, r4
        1e2a84:	eb60e0b4 	bl	1a1ad5c <TSharpIRTool::$StopTimer2(void)>
        1e2a88:	e3a00000 	mov	r0, #0	; 0x0
        1e2a8c:	e5840728 	str	r0, [r4, #1832]	; fField1832
        1e2a90:	e584072c 	str	r0, [r4, #1836]	; fField1836
        1e2a94:	e5c40784 	strb	r0, [r4, #1924]	; fField1924
        1e2a98:	e58406c0 	str	r0, [r4, #1728]	; fField1728
        1e2a9c:	e58406c4 	str	r0, [r4, #1732]	; fField1732
        1e2aa0:	e58406c8 	str	r0, [r4, #1736]	; fField1736
        1e2aa4:	e58406cc 	str	r0, [r4, #1740]	; fField1740
        1e2aa8:	e58406d0 	str	r0, [r4, #1744]	; fField1744
        1e2aac:	e58406d4 	str	r0, [r4, #1748]	; fField1748
        1e2ab0:	e5a40724 	str	r0, [r4, #1828]!	; fField1828
        1e2ab4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::SetChannelFilter(CommToolRequestType, unsigned char)
 * Address: 001e2ab8
 */
TSharpIRTool::SetChannelFilter(CommToolRequestType, unsigned char) {
    /*
        1e2ab8:	e20220ff 	and	r2, r2, #255	; 0xff
        1e2abc:	e3110003 	tst	r1, #3	; 0x3
        1e2ac0:	13811003 	orrne	r1, r1, #3	; 0x3
        1e2ac4:	ea67796e 	b	1bc1084 <TCommTool::$SetChannelFilter(CommToolRequestType, unsigned char)>
    */
}

/**
 * Symbol: TSharpIRTool::AllocateBuffers(void)
 * Address: 001e2ac8
 */
TSharpIRTool::AllocateBuffers(void) {
    /*
        1e2ac8:	e1a0c00d 	mov	ip, sp
        1e2acc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e2ad0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2ad4:	e1a04000 	mov	r4, r0
        1e2ad8:	e59013e4 	ldr	r1, [r0, #996]	; fField996
        1e2adc:	e3a00f8d 	mov	r0, #564	; 0x234
        1e2ae0:	e3510f8d 	cmp	r1, #564	; 0x234
        1e2ae4:	358403e4 	strcc	r0, [r4, #996]	; fField996
        1e2ae8:	e59413e0 	ldr	r1, [r4, #992]	; fField992
        1e2aec:	e3510f8d 	cmp	r1, #564	; 0x234
        1e2af0:	358403e0 	strcc	r0, [r4, #992]	; fField992
        1e2af4:	e24dd010 	sub	sp, sp, #16	; 0x10
        1e2af8:	e1a0000d 	mov	r0, sp
        1e2afc:	ebfc0da3 	bl	e6190 <THMOSerIRLinkConfig::__ct(void)>
        1e2b00:	e59d0008 	ldr	r0, [sp, #8]
        1e2b04:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        1e2b08:	e3800c02 	orr	r0, r0, #512	; 0x200
        1e2b0c:	e58d0008 	str	r0, [sp, #8]
        1e2b10:	e3a00000 	mov	r0, #0	; 0x0
        1e2b14:	e5cd000c 	strb	r0, [sp, #12]
        1e2b18:	e1a0100d 	mov	r1, sp
        1e2b1c:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1e2b20:	eb068859 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
        1e2b24:	e1a00004 	mov	r0, r4
        1e2b28:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e2b2c:	ea60a2a2 	b	1a0b5bc <TAsyncSerTool::$AllocateBuffers(void)>
    */
}

/**
 * Symbol: TSharpIRTool::SetIOParms(TCMOSerialIOParms *)
 * Address: 001e2b30
 */
TSharpIRTool::SetIOParms(TCMOSerialIOParms *) {
    /*
        1e2b30:	e1a0c00d 	mov	ip, sp
        1e2b34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e2b38:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2b3c:	e1a05000 	mov	r5, r0
        1e2b40:	e1a04001 	mov	r4, r1
        1e2b44:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1e2b48:	e1a0000d 	mov	r0, sp
        1e2b4c:	eb6764a7 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
        1e2b50:	e3a00000 	mov	r0, #0	; 0x0
        1e2b54:	e58d000c 	str	r0, [sp, #12]
        1e2b58:	e3a00001 	mov	r0, #1	; 0x1
        1e2b5c:	e58d0010 	str	r0, [sp, #16]
        1e2b60:	e3a00008 	mov	r0, #8	; 0x8
        1e2b64:	e58d0014 	str	r0, [sp, #20]
        1e2b68:	e3a00d96 	mov	r0, #9600	; 0x2580
        1e2b6c:	e58d0018 	str	r0, [sp, #24]
        1e2b70:	e1a0100d 	mov	r1, sp
        1e2b74:	e1a00005 	mov	r0, r5
        1e2b78:	eb60dc4e 	bl	1a19cb8 <TSerTool::$SetIOParms(TCMOSerialIOParms *)>
        1e2b7c:	e1a0100d 	mov	r1, sp
        1e2b80:	e1a00004 	mov	r0, r4
        1e2b84:	eb675411 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1e2b88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSharpIRTool::SetSerialChipSelect(TCMOSerialHardware *)
 * Address: 001e2b8c
 */
TSharpIRTool::SetSerialChipSelect(TCMOSerialHardware *) {
    /*
        1e2b8c:	e1a0c00d 	mov	ip, sp
        1e2b90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e2b94:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2b98:	e1a04000 	mov	r4, r0
        1e2b9c:	e1a05001 	mov	r5, r1
        1e2ba0:	eb60f948 	bl	1a210c8 <TSerTool::$SetSerialChipSelect(TCMOSerialHardware *)>
        1e2ba4:	e5941300 	ldr	r1, [r4, #768]	; fField768
        1e2ba8:	e3310000 	teq	r1, #0	; 0x0
        1e2bac:	03a01002 	moveq	r1, #2	; 0x2
        1e2bb0:	05a51014 	streq	r1, [r5, #20]!
        1e2bb4:	05a41300 	streq	r1, [r4, #768]!	; fField768
        1e2bb8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

