#include "include/CTaskPipe.h"

/**
 * Symbol: CTaskPipe::__ct(void)
 * Address: 002508a4
 */
CTaskPipe::CTaskPipe(void) {
    /*
        2508a4:	e1a0c00d 	mov	ip, sp
        2508a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2508ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2508b0:	e1b04000 	movs	r4, r0
        2508b4:	1a000003 	bne	2508c8 <CTaskPipe::__ct(void)+0x24>
        2508b8:	e3a00010 	mov	r0, #16	; 0x10
        2508bc:	eb65f79d 	bl	1bce738 <$__nw(unsigned int)>
        2508c0:	e1b04000 	movs	r4, r0
        2508c4:	0a000005 	beq	2508e0 <CTaskPipe::__ct(void)+0x3c>
        2508c8:	e1a00004 	mov	r0, r4
        2508cc:	eb664e5b 	bl	1be4240 <CRingPipe::$__ct(void)>
        2508d0:	e59f0010 	ldr	r0, [pc, #10]	; 2508e8 <CTaskPipe::__ct(void)+0x44>
        2508d4:	e5840000 	str	r0, [r4]
        2508d8:	e3a00000 	mov	r0, #0	; 0x0
        2508dc:	e584000c 	str	r0, [r4, #12]	; fField12
        2508e0:	e1a00004 	mov	r0, r4
        2508e4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2508e8:	000206f8 	streqd	r0, [r2], -r8
    */
}

/**
 * Symbol: CTaskPipe::__dt(void)
 * Address: 002508ec
 */
CTaskPipe::~CTaskPipe(void) {
    /*
        2508ec:	e1a0c00d 	mov	ip, sp
        2508f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2508f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2508f8:	e1a04000 	mov	r4, r0
        2508fc:	e1a05001 	mov	r5, r1
        250900:	e59f0040 	ldr	r0, [pc, #40]	; 250948 <CTaskPipe::__dt(void)+0x5c>
        250904:	e5840000 	str	r0, [r4]
        250908:	e594600c 	ldr	r6, [r4, #12]	; fField12
        25090c:	e3360000 	teq	r6, #0	; 0x0
        250910:	0a000004 	beq	250928 <CTaskPipe::__dt(void)+0x3c>
        250914:	e1a00006 	mov	r0, r6
        250918:	e3a01000 	mov	r1, #0	; 0x0
        25091c:	eb65f780 	bl	1bce724 <TUObject::$__dt(void)>
        250920:	e1a00006 	mov	r0, r6
        250924:	eb65f36d 	bl	1bcd6e0 <$__dl(void *)>
        250928:	e1a00004 	mov	r0, r4
        25092c:	e3a01000 	mov	r1, #0	; 0x0
        250930:	eb665257 	bl	1be5294 <CRingPipe::$__dt(void)>
        250934:	e3150001 	tst	r5, #1	; 0x1
        250938:	11a00004 	movne	r0, r4
        25093c:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        250940:	1a65f366 	bne	1bcd6e0 <$__dl(void *)>
        250944:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        250948:	000206f8 	streqd	r0, [r2], -r8
    */
}

/**
 * Symbol: CTaskPipe::Init(unsigned long, CBaseRingBuffer *, unsigned char)
 * Address: 0025094c
 */
CTaskPipe::Init(unsigned long, CBaseRingBuffer *, unsigned char) {
    /*
        25094c:	e1a0c00d 	mov	ip, sp
        250950:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        250954:	e24cb004 	sub	fp, ip, #4	; 0x4
        250958:	e1a04000 	mov	r4, r0
        25095c:	e1a05001 	mov	r5, r1
        250960:	e1a01002 	mov	r1, r2
        250964:	e20320ff 	and	r2, r3, #255	; 0xff
        250968:	eb6662d7 	bl	1be94cc <CRingPipe::$Init(CBaseRingBuffer *, unsigned char)>
        25096c:	e3350000 	teq	r5, #0	; 0x0
        250970:	0a000004 	beq	250988 <CTaskPipe::Init(unsigned long, CBaseRingBuffer *, unsigned char)+0x3c>
        250974:	e1a01005 	mov	r1, r5
        250978:	e3a00000 	mov	r0, #0	; 0x0
        25097c:	eb65f352 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        250980:	e584000c 	str	r0, [r4, #12]	; fField12
        250984:	ea000007 	b	2509a8 <CTaskPipe::Init(unsigned long, CBaseRingBuffer *, unsigned char)+0x5c>
        250988:	e3a00008 	mov	r0, #8	; 0x8
        25098c:	eb65f769 	bl	1bce738 <$__nw(unsigned int)>
        250990:	e3300000 	teq	r0, #0	; 0x0
        250994:	13a01000 	movne	r1, #0	; 0x0
        250998:	15c01004 	strneb	r1, [r0, #4]	; fField4
        25099c:	15801000 	strne	r1, [r0]
        2509a0:	e584000c 	str	r0, [r4, #12]	; fField12
        2509a4:	eb661445 	bl	1bd5ac0 <TUPort::$Init(void)>
        2509a8:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        2509ac:	e3300000 	teq	r0, #0	; 0x0
        2509b0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        2509b4:	e3a01001 	mov	r1, #1	; 0x1
        2509b8:	e59f000c 	ldr	r0, [pc, #c]	; 2509cc <CTaskPipe::Init(unsigned long, CBaseRingBuffer *, unsigned char)+0x80>
        2509bc:	e5900000 	ldr	r0, [r0]
        2509c0:	e3a02000 	mov	r2, #0	; 0x0
        2509c4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2509c8:	ea6649f3 	b	1be319c <$Throw>
        2509cc:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CTaskPipe::Init(unsigned long, long)
 * Address: 002509d0
 */
CTaskPipe::Init(unsigned long, long) {
    /*
        2509d0:	e1a0c00d 	mov	ip, sp
        2509d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2509d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2509dc:	e1a04000 	mov	r4, r0
        2509e0:	e1a05001 	mov	r5, r1
        2509e4:	e1a01002 	mov	r1, r2
        2509e8:	eb6662b6 	bl	1be94c8 <CRingPipe::$Init(long)>
        2509ec:	e3350000 	teq	r5, #0	; 0x0
        2509f0:	0a000004 	beq	250a08 <CTaskPipe::Init(unsigned long, long)+0x38>
        2509f4:	e1a01005 	mov	r1, r5
        2509f8:	e3a00000 	mov	r0, #0	; 0x0
        2509fc:	eb65f332 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        250a00:	e584000c 	str	r0, [r4, #12]	; fField12
        250a04:	ea000007 	b	250a28 <CTaskPipe::Init(unsigned long, long)+0x58>
        250a08:	e3a00008 	mov	r0, #8	; 0x8
        250a0c:	eb65f749 	bl	1bce738 <$__nw(unsigned int)>
        250a10:	e3300000 	teq	r0, #0	; 0x0
        250a14:	13a01000 	movne	r1, #0	; 0x0
        250a18:	15c01004 	strneb	r1, [r0, #4]	; fField4
        250a1c:	15801000 	strne	r1, [r0]
        250a20:	e584000c 	str	r0, [r4, #12]	; fField12
        250a24:	eb661425 	bl	1bd5ac0 <TUPort::$Init(void)>
        250a28:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        250a2c:	e3300000 	teq	r0, #0	; 0x0
        250a30:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        250a34:	e3a01001 	mov	r1, #1	; 0x1
        250a38:	e59f000c 	ldr	r0, [pc, #c]	; 250a4c <CTaskPipe::Init(unsigned long, long)+0x7c>
        250a3c:	e5900000 	ldr	r0, [r0]
        250a40:	e3a02000 	mov	r2, #0	; 0x0
        250a44:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        250a48:	ea6649d3 	b	1be319c <$Throw>
        250a4c:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CTaskPipe::Overflow(void)
 * Address: 00250a50
 */
CTaskPipe::Overflow(void) {
    /*
        250a50:	e1a0c00d 	mov	ip, sp
        250a54:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        250a58:	e24cb004 	sub	fp, ip, #4	; 0x4
        250a5c:	e1a04000 	mov	r4, r0
        250a60:	e24dd024 	sub	sp, sp, #36	; 0x24
        250a64:	e28d0014 	add	r0, sp, #20	; 0x14
        250a68:	eb664df2 	bl	1be4238 <TAEvent::$__ct(void)>
        250a6c:	e3a07000 	mov	r7, #0	; 0x0
        250a70:	e58d7000 	str	r7, [sp]
        250a74:	e58d700c 	str	r7, [sp, #12]	; fField12
        250a78:	e58d7004 	str	r7, [sp, #4]	; fField4
        250a7c:	e3a03000 	mov	r3, #0	; 0x0
        250a80:	e3a02000 	mov	r2, #0	; 0x0
        250a84:	e3e01000 	mvn	r1, #0	; 0x0
        250a88:	e3a059ca 	mov	r5, #3309568	; 0x328000
        250a8c:	e2855402 	add	r5, r5, #33554432	; 0x2000000
        250a90:	e1a00005 	mov	r0, r5
        250a94:	e58d7008 	str	r7, [sp, #8]
        250a98:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        250a9c:	e28d2010 	add	r2, sp, #16	; 0x10
        250aa0:	e92d000c 	stmdb	sp!, {r2, r3}
        250aa4:	e28d1028 	add	r1, sp, #40	; 0x28
        250aa8:	e3a02000 	mov	r2, #0	; 0x0
        250aac:	e594000c 	ldr	r0, [r4, #12]	; fField12
        250ab0:	eb662060 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
        250ab4:	e28dd018 	add	sp, sp, #24	; 0x18
        250ab8:	e1b01000 	movs	r1, r0
        250abc:	e59f60f4 	ldr	r6, [pc, #f4]	; 250bb8 <CTaskPipe::Overflow(void)+0x168>
        250ac0:	13a02000 	movne	r2, #0	; 0x0
        250ac4:	15960000 	ldrne	r0, [r6]
        250ac8:	1b6649b3 	blne	1be319c <$Throw>
        250acc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        250ad0:	e5901000 	ldr	r1, [r0]
        250ad4:	e1a0e00f 	mov	lr, pc
        250ad8:	e281f040 	add	pc, r1, #64	; 0x40
        250adc:	e58d0020 	str	r0, [sp, #32]
        250ae0:	e28d1014 	add	r1, sp, #20	; 0x14
        250ae4:	e1a0000d 	mov	r0, sp
        250ae8:	e3a03000 	mov	r3, #0	; 0x0
        250aec:	e3a02010 	mov	r2, #16	; 0x10
        250af0:	eb66247d 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        250af4:	e3300000 	teq	r0, #0	; 0x0
        250af8:	0a000003 	beq	250b0c <CTaskPipe::Overflow(void)+0xbc>
        250afc:	e1a01000 	mov	r1, r0
        250b00:	e3a02000 	mov	r2, #0	; 0x0
        250b04:	e5960000 	ldr	r0, [r6]
        250b08:	eb6649a3 	bl	1be319c <$Throw>
        250b0c:	e3a03000 	mov	r3, #0	; 0x0
        250b10:	e3a02000 	mov	r2, #0	; 0x0
        250b14:	e3e01000 	mvn	r1, #0	; 0x0
        250b18:	e1a00005 	mov	r0, r5
        250b1c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        250b20:	e28d2010 	add	r2, sp, #16	; 0x10
        250b24:	e92d000c 	stmdb	sp!, {r2, r3}
        250b28:	e28d1028 	add	r1, sp, #40	; 0x28
        250b2c:	e3a02000 	mov	r2, #0	; 0x0
        250b30:	e594000c 	ldr	r0, [r4, #12]	; fField12
        250b34:	eb66203f 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
        250b38:	e28dd018 	add	sp, sp, #24	; 0x18
        250b3c:	e3300000 	teq	r0, #0	; 0x0
        250b40:	0a000003 	beq	250b54 <CTaskPipe::Overflow(void)+0x104>
        250b44:	e1a01000 	mov	r1, r0
        250b48:	e3a02000 	mov	r2, #0	; 0x0
        250b4c:	e5960000 	ldr	r0, [r6]
        250b50:	eb664991 	bl	1be319c <$Throw>
        250b54:	e3a00010 	mov	r0, #16	; 0x10
        250b58:	e58d001c 	str	r0, [sp, #28]
        250b5c:	e58d7020 	str	r7, [sp, #32]
        250b60:	e28d1014 	add	r1, sp, #20	; 0x14
        250b64:	e1a0000d 	mov	r0, sp
        250b68:	e3a03000 	mov	r3, #0	; 0x0
        250b6c:	e3a02010 	mov	r2, #16	; 0x10
        250b70:	eb66245d 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        250b74:	e3300000 	teq	r0, #0	; 0x0
        250b78:	0a000003 	beq	250b8c <CTaskPipe::Overflow(void)+0x13c>
        250b7c:	e1a01000 	mov	r1, r0
        250b80:	e3a02000 	mov	r2, #0	; 0x0
        250b84:	e5960000 	ldr	r0, [r6]
        250b88:	eb664983 	bl	1be319c <$Throw>
        250b8c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        250b90:	e1a04000 	mov	r4, r0
        250b94:	e5901000 	ldr	r1, [r0]
        250b98:	e1a0e00f 	mov	lr, pc
        250b9c:	e281f040 	add	pc, r1, #64	; 0x40
        250ba0:	e1a01000 	mov	r1, r0
        250ba4:	e1a00004 	mov	r0, r4
        250ba8:	e5942000 	ldr	r2, [r4]
        250bac:	e1a0e00f 	mov	lr, pc
        250bb0:	e282f048 	add	pc, r2, #72	; 0x48
        250bb4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        250bb8:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CTaskPipe::Underflow(long, unsigned char &)
 * Address: 00250bbc
 */
CTaskPipe::Underflow(long, unsigned char &) {
    /*
        250bbc:	e1a0c00d 	mov	ip, sp
        250bc0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        250bc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        250bc8:	e1a04000 	mov	r4, r0
        250bcc:	e1a05002 	mov	r5, r2
        250bd0:	e24dd014 	sub	sp, sp, #20	; 0x14
        250bd4:	e28d0004 	add	r0, sp, #4	; 0x4
        250bd8:	eb664d96 	bl	1be4238 <TAEvent::$__ct(void)>
        250bdc:	e3a06000 	mov	r6, #0	; 0x0
        250be0:	e3a09000 	mov	r9, #0	; 0x0
        250be4:	e3a089ca 	mov	r8, #3309568	; 0x328000
        250be8:	e2888402 	add	r8, r8, #33554432	; 0x2000000
        250bec:	e59f7098 	ldr	r7, [pc, #98]	; 250c8c <CTaskPipe::Underflow(long, unsigned char &)+0xd0>
        250bf0:	e28d0004 	add	r0, sp, #4	; 0x4
        250bf4:	e3a01010 	mov	r1, #16	; 0x10
        250bf8:	e1a02008 	mov	r2, r8
        250bfc:	e3a0e000 	mov	lr, #0	; 0x0
        250c00:	e3a03000 	mov	r3, #0	; 0x0
        250c04:	e594c00c 	ldr	ip, [r4, #12]	; fField12
        250c08:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        250c0c:	e1a03009 	mov	r3, r9
        250c10:	e3a02000 	mov	r2, #0	; 0x0
        250c14:	e1a0100e 	mov	r1, lr
        250c18:	e1a00009 	mov	r0, r9
        250c1c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        250c20:	e1a03009 	mov	r3, r9
        250c24:	e92d0008 	stmdb	sp!, {r3}
        250c28:	e28d3024 	add	r3, sp, #36	; 0x24
        250c2c:	e1a0000c 	mov	r0, ip
        250c30:	e3a02002 	mov	r2, #2	; 0x2
        250c34:	e3a01001 	mov	r1, #1	; 0x1
        250c38:	eb662843 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        250c3c:	e28dd024 	add	sp, sp, #36	; 0x24
        250c40:	e1b01000 	movs	r1, r0
        250c44:	13a02000 	movne	r2, #0	; 0x0
        250c48:	15970000 	ldrne	r0, [r7]
        250c4c:	1b664952 	blne	1be319c <$Throw>
        250c50:	e59d0010 	ldr	r0, [sp, #16]
        250c54:	e3300000 	teq	r0, #0	; 0x0
        250c58:	0a00000c 	beq	250c90 <CTaskPipe::Underflow(long, unsigned char &)+0xd4>
        250c5c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        250c60:	e1a04000 	mov	r4, r0
        250c64:	e5901000 	ldr	r1, [r0]
        250c68:	e1a0e00f 	mov	lr, pc
        250c6c:	e281f040 	add	pc, r1, #64	; 0x40
        250c70:	e59d1010 	ldr	r1, [sp, #16]
        250c74:	e0411000 	sub	r1, r1, r0
        250c78:	e1a00004 	mov	r0, r4
        250c7c:	e5942000 	ldr	r2, [r4]
        250c80:	e1a0e00f 	mov	lr, pc
        250c84:	e282f044 	add	pc, r2, #68	; 0x44
        250c88:	ea000008 	b	250cb0 <CTaskPipe::Underflow(long, unsigned char &)+0xf4>
        250c8c:	00371324 	eoreqs	r1, r7, r4, lsr #6
        250c90:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        250c94:	e3300012 	teq	r0, #18	; 0x12
        250c98:	13a00000 	movne	r0, #0	; 0x0
        250c9c:	03a00001 	moveq	r0, #1	; 0x1
        250ca0:	e5c50000 	strb	r0, [r5]
        250ca4:	e2866001 	add	r6, r6, #1	; 0x1
        250ca8:	e3560002 	cmp	r6, #2	; 0x2
        250cac:	baffffcf 	blt	250bf0 <CTaskPipe::Underflow(long, unsigned char &)+0x34>
        250cb0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: CTaskPipe::FlushRead(void)
 * Address: 00250cb4
 */
CTaskPipe::FlushRead(void) {
    /*
        250cb4:	e1a0c00d 	mov	ip, sp
        250cb8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        250cbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        250cc0:	e1a04000 	mov	r4, r0
        250cc4:	e24dd014 	sub	sp, sp, #20	; 0x14
        250cc8:	e28d0004 	add	r0, sp, #4	; 0x4
        250ccc:	eb664d59 	bl	1be4238 <TAEvent::$__ct(void)>
        250cd0:	e28d0004 	add	r0, sp, #4	; 0x4
        250cd4:	e3a01010 	mov	r1, #16	; 0x10
        250cd8:	e3a029ca 	mov	r2, #3309568	; 0x328000
        250cdc:	e2822402 	add	r2, r2, #33554432	; 0x2000000
        250ce0:	e3a05000 	mov	r5, #0	; 0x0
        250ce4:	e3a0c000 	mov	ip, #0	; 0x0
        250ce8:	e3a03000 	mov	r3, #0	; 0x0
        250cec:	e594e00c 	ldr	lr, [r4, #12]	; fField12
        250cf0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        250cf4:	e1a0300c 	mov	r3, ip
        250cf8:	e3a02000 	mov	r2, #0	; 0x0
        250cfc:	e1a01005 	mov	r1, r5
        250d00:	e1a0000c 	mov	r0, ip
        250d04:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        250d08:	e1a0300c 	mov	r3, ip
        250d0c:	e92d0008 	stmdb	sp!, {r3}
        250d10:	e28d3024 	add	r3, sp, #36	; 0x24
        250d14:	e1a0000e 	mov	r0, lr
        250d18:	e3a02002 	mov	r2, #2	; 0x2
        250d1c:	e3a01001 	mov	r1, #1	; 0x1
        250d20:	eb662809 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        250d24:	e28dd024 	add	sp, sp, #36	; 0x24
        250d28:	e1b01000 	movs	r1, r0
        250d2c:	0a000003 	beq	250d40 <CTaskPipe::FlushRead(void)+0x8c>
        250d30:	e59f001c 	ldr	r0, [pc, #1c]	; 250d54 <CTaskPipe::FlushRead(void)+0xa0>
        250d34:	e5900000 	ldr	r0, [r0]
        250d38:	e3a02000 	mov	r2, #0	; 0x0
        250d3c:	eb664916 	bl	1be319c <$Throw>
        250d40:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        250d44:	e5901000 	ldr	r1, [r0]
        250d48:	e1a0e00f 	mov	lr, pc
        250d4c:	e281f028 	add	pc, r1, #40	; 0x28
        250d50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        250d54:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CTaskPipe::FlushWrite(void)
 * Address: 00250d58
 */
CTaskPipe::FlushWrite(void) {
    /*
        250d58:	e1a0c00d 	mov	ip, sp
        250d5c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        250d60:	e24cb004 	sub	fp, ip, #4	; 0x4
        250d64:	e1a04000 	mov	r4, r0
        250d68:	e24dd024 	sub	sp, sp, #36	; 0x24
        250d6c:	e28d0014 	add	r0, sp, #20	; 0x14
        250d70:	eb664d30 	bl	1be4238 <TAEvent::$__ct(void)>
        250d74:	e3a08000 	mov	r8, #0	; 0x0
        250d78:	e58d8000 	str	r8, [sp]
        250d7c:	e58d800c 	str	r8, [sp, #12]	; fField12
        250d80:	e58d8004 	str	r8, [sp, #4]	; fField4
        250d84:	e58d8008 	str	r8, [sp, #8]
        250d88:	e5940004 	ldr	r0, [r4, #4]	; fField4
        250d8c:	e5901000 	ldr	r1, [r0]
        250d90:	e1a0e00f 	mov	lr, pc
        250d94:	e281f040 	add	pc, r1, #64	; 0x40
        250d98:	e3300000 	teq	r0, #0	; 0x0
        250d9c:	0a000043 	beq	250eb0 <CTaskPipe::FlushWrite(void)+0x158>
        250da0:	e3a03000 	mov	r3, #0	; 0x0
        250da4:	e3a02000 	mov	r2, #0	; 0x0
        250da8:	e3e01000 	mvn	r1, #0	; 0x0
        250dac:	e3a059ca 	mov	r5, #3309568	; 0x328000
        250db0:	e2855402 	add	r5, r5, #33554432	; 0x2000000
        250db4:	e1a00005 	mov	r0, r5
        250db8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        250dbc:	e28d2010 	add	r2, sp, #16	; 0x10
        250dc0:	e92d000c 	stmdb	sp!, {r2, r3}
        250dc4:	e28d1028 	add	r1, sp, #40	; 0x28
        250dc8:	e3a02000 	mov	r2, #0	; 0x0
        250dcc:	e594000c 	ldr	r0, [r4, #12]	; fField12
        250dd0:	eb661f98 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
        250dd4:	e28dd018 	add	sp, sp, #24	; 0x18
        250dd8:	e1b01000 	movs	r1, r0
        250ddc:	e59f60e0 	ldr	r6, [pc, #e0]	; 250ec4 <CTaskPipe::FlushWrite(void)+0x16c>
        250de0:	13a02000 	movne	r2, #0	; 0x0
        250de4:	15960000 	ldrne	r0, [r6]
        250de8:	1b6648eb 	blne	1be319c <$Throw>
        250dec:	e3a07012 	mov	r7, #18	; 0x12
        250df0:	e58d701c 	str	r7, [sp, #28]
        250df4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        250df8:	e5901000 	ldr	r1, [r0]
        250dfc:	e1a0e00f 	mov	lr, pc
        250e00:	e281f040 	add	pc, r1, #64	; 0x40
        250e04:	e58d0020 	str	r0, [sp, #32]
        250e08:	e28d1014 	add	r1, sp, #20	; 0x14
        250e0c:	e1a0000d 	mov	r0, sp
        250e10:	e3a03000 	mov	r3, #0	; 0x0
        250e14:	e3a02010 	mov	r2, #16	; 0x10
        250e18:	eb6623b3 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        250e1c:	e3300000 	teq	r0, #0	; 0x0
        250e20:	0a000003 	beq	250e34 <CTaskPipe::FlushWrite(void)+0xdc>
        250e24:	e1a01000 	mov	r1, r0
        250e28:	e3a02000 	mov	r2, #0	; 0x0
        250e2c:	e5960000 	ldr	r0, [r6]
        250e30:	eb6648d9 	bl	1be319c <$Throw>
        250e34:	e3a03000 	mov	r3, #0	; 0x0
        250e38:	e3a02000 	mov	r2, #0	; 0x0
        250e3c:	e3e01000 	mvn	r1, #0	; 0x0
        250e40:	e1a00005 	mov	r0, r5
        250e44:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        250e48:	e28d2010 	add	r2, sp, #16	; 0x10
        250e4c:	e92d000c 	stmdb	sp!, {r2, r3}
        250e50:	e28d1028 	add	r1, sp, #40	; 0x28
        250e54:	e3a02000 	mov	r2, #0	; 0x0
        250e58:	e594000c 	ldr	r0, [r4, #12]	; fField12
        250e5c:	eb661f75 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
        250e60:	e28dd018 	add	sp, sp, #24	; 0x18
        250e64:	e3300000 	teq	r0, #0	; 0x0
        250e68:	0a000003 	beq	250e7c <CTaskPipe::FlushWrite(void)+0x124>
        250e6c:	e1a01000 	mov	r1, r0
        250e70:	e3a02000 	mov	r2, #0	; 0x0
        250e74:	e5960000 	ldr	r0, [r6]
        250e78:	eb6648c7 	bl	1be319c <$Throw>
        250e7c:	e58d701c 	str	r7, [sp, #28]
        250e80:	e58d8020 	str	r8, [sp, #32]
        250e84:	e28d1014 	add	r1, sp, #20	; 0x14
        250e88:	e1a0000d 	mov	r0, sp
        250e8c:	e3a03000 	mov	r3, #0	; 0x0
        250e90:	e3a02010 	mov	r2, #16	; 0x10
        250e94:	eb662394 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        250e98:	e3300000 	teq	r0, #0	; 0x0
        250e9c:	0a000003 	beq	250eb0 <CTaskPipe::FlushWrite(void)+0x158>
        250ea0:	e1a01000 	mov	r1, r0
        250ea4:	e3a02000 	mov	r2, #0	; 0x0
        250ea8:	e5960000 	ldr	r0, [r6]
        250eac:	eb6648ba 	bl	1be319c <$Throw>
        250eb0:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        250eb4:	e5901000 	ldr	r1, [r0]
        250eb8:	e1a0e00f 	mov	lr, pc
        250ebc:	e281f028 	add	pc, r1, #40	; 0x28
        250ec0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        250ec4:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

