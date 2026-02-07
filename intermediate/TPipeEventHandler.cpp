#include "include/TPipeEventHandler.h"

/**
 * Symbol: TPipeEventHandler::__ct(PipeInfo *)
 * Address: 00182a2c
 */
TPipeEventHandler::TPipeEventHandler(PipeInfo *) {
    /*
        182a2c:	e1a0c00d 	mov	ip, sp
        182a30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        182a34:	e24cb004 	sub	fp, ip, #4	; 0x4
        182a38:	e1b04000 	movs	r4, r0
        182a3c:	e1a05001 	mov	r5, r1
        182a40:	1a000003 	bne	182a54 <TPipeEventHandler::__ct(PipeInfo *)+0x28>
        182a44:	e3a00020 	mov	r0, #32	; 0x20
        182a48:	eb692f3a 	bl	1bce738 <$__nw(unsigned int)>
        182a4c:	e1b04000 	movs	r4, r0
        182a50:	0a000008 	beq	182a78 <TPipeEventHandler::__ct(PipeInfo *)+0x4c>
        182a54:	e1a00004 	mov	r0, r4
        182a58:	eb6985ea 	bl	1be4208 <TAEventHandler::$__ct(void)>
        182a5c:	e59f001c 	ldr	r0, [pc, #1c]	; 182a80 <TPipeEventHandler::__ct(PipeInfo *)+0x54>
        182a60:	e5840000 	str	r0, [r4]
        182a64:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        182a68:	e5840018 	str	r0, [r4, #24]	; fField24
        182a6c:	e3a00000 	mov	r0, #0	; 0x0
        182a70:	e5845014 	str	r5, [r4, #20]	; fField20
        182a74:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        182a78:	e1a00004 	mov	r0, r4
        182a7c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        182a80:	0001e950 	andeq	lr, r1, r0, asr r9
    */
}

/**
 * Symbol: TPipeEventHandler::AETestEvent(TAEvent *)
 * Address: 00182a84
 */
TPipeEventHandler::AETestEvent(TAEvent *) {
    /*
        182a84:	e3a00001 	mov	r0, #1	; 0x1
        182a88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00182a8c
 */
TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        182a8c:	e1a0c00d 	mov	ip, sp
        182a90:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        182a94:	e24cb004 	sub	fp, ip, #4	; 0x4
        182a98:	e1a04000 	mov	r4, r0
        182a9c:	e1a06003 	mov	r6, r3
        182aa0:	e1a05003 	mov	r5, r3
        182aa4:	e5930008 	ldr	r0, [r3, #8]
        182aa8:	e3300000 	teq	r0, #0	; 0x0
        182aac:	0a000018 	beq	182b14 <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x88>
        182ab0:	e3a07000 	mov	r7, #0	; 0x0
        182ab4:	e3300001 	teq	r0, #1	; 0x1
        182ab8:	0a00001d 	beq	182b34 <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xa8>
        182abc:	e3a05001 	mov	r5, #1	; 0x1
        182ac0:	e3300002 	teq	r0, #2	; 0x2
        182ac4:	0a00005e 	beq	182c44 <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1b8>
        182ac8:	e3300003 	teq	r0, #3	; 0x3
        182acc:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        182ad0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        182ad4:	e5d0000c 	ldrb	r0, [r0, #12]
        182ad8:	e3300000 	teq	r0, #0	; 0x0
        182adc:	0a000093 	beq	182d30 <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2a4>
        182ae0:	e3a00000 	mov	r0, #0	; 0x0
        182ae4:	e52d0004 	str	r0, [sp, -#4]!
        182ae8:	e52d706c 	str	r7, [sp, -#108]!
        182aec:	e28d0008 	add	r0, sp, #8	; 0x8
        182af0:	eb68bf9f 	bl	1bb2974 <$setjmp>
        182af4:	e3300000 	teq	r0, #0	; 0x0
        182af8:	1a00007f 	bne	182cfc <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x270>
        182afc:	e1a0000d 	mov	r0, sp
        182b00:	eb69755d 	bl	1be007c <$AddExceptionHandler>
        182b04:	e5940014 	ldr	r0, [r4, #20]	; fField20
        182b08:	e5900000 	ldr	r0, [r0]
        182b0c:	eb68e07b 	bl	1bbad00 <TEndpointPipe::$RemoveFromAppWorld(void)>
        182b10:	ea000083 	b	182d24 <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x298>
        182b14:	e5b5000c 	ldr	r0, [r5, #12]!
        182b18:	e5840018 	str	r0, [r4, #24]	; fField24
        182b1c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        182b20:	e5900008 	ldr	r0, [r0, #8]
        182b24:	e5901000 	ldr	r1, [r0]
        182b28:	e1a0e00f 	mov	lr, pc
        182b2c:	e281f028 	add	pc, r1, #40	; 0x28
        182b30:	ea00006e 	b	182cf0 <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x264>
        182b34:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
        182b38:	e3e080a3 	mvn	r8, #163	; 0xa3
        182b3c:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        182b40:	e3300000 	teq	r0, #0	; 0x0
        182b44:	1285500c 	addne	r5, r5, #12	; 0xc
        182b48:	18850180 	stmneia	r5, {r7, r8}
        182b4c:	1245500c 	subne	r5, r5, #12	; 0xc
        182b50:	1a000036 	bne	182c30 <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1a4>
        182b54:	e5940014 	ldr	r0, [r4, #20]	; fField20
        182b58:	e5900008 	ldr	r0, [r0, #8]
        182b5c:	e1a06000 	mov	r6, r0
        182b60:	e5901000 	ldr	r1, [r0]
        182b64:	e1a0e00f 	mov	lr, pc
        182b68:	e281f040 	add	pc, r1, #64	; 0x40
        182b6c:	e1a01000 	mov	r1, r0
        182b70:	e1a00006 	mov	r0, r6
        182b74:	e5962000 	ldr	r2, [r6]
        182b78:	e1a0e00f 	mov	lr, pc
        182b7c:	e282f048 	add	pc, r2, #72	; 0x48
        182b80:	e5940014 	ldr	r0, [r4, #20]	; fField20
        182b84:	e5900008 	ldr	r0, [r0, #8]
        182b88:	e5901000 	ldr	r1, [r0]
        182b8c:	e1a0e00f 	mov	lr, pc
        182b90:	e281f03c 	add	pc, r1, #60	; 0x3c
        182b94:	e1a01000 	mov	r1, r0
        182b98:	e5940018 	ldr	r0, [r4, #24]	; fField24
        182b9c:	e3700106 	cmn	r0, #-2147483647	; 0x80000001
        182ba0:	1a000004 	bne	182bb8 <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x12c>
        182ba4:	e595000c 	ldr	r0, [r5, #12]
        182ba8:	e1500001 	cmp	r0, r1
        182bac:	a1a00001 	movge	r0, r1
        182bb0:	e1a06000 	mov	r6, r0
        182bb4:	ea000008 	b	182bdc <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x150>
        182bb8:	e1a02000 	mov	r2, r0
        182bbc:	e1500001 	cmp	r0, r1
        182bc0:	b1a01002 	movlt	r1, r2
        182bc4:	e595200c 	ldr	r2, [r5, #12]
        182bc8:	e1510002 	cmp	r1, r2
        182bcc:	a1a01002 	movge	r1, r2
        182bd0:	e1a06001 	mov	r6, r1
        182bd4:	e0400001 	sub	r0, r0, r1
        182bd8:	e5840018 	str	r0, [r4, #24]	; fField24
        182bdc:	e285500c 	add	r5, r5, #12	; 0xc
        182be0:	e88500c0 	stmia	r5, {r6, r7}
        182be4:	e245500c 	sub	r5, r5, #12	; 0xc
        182be8:	e52d6004 	str	r6, [sp, -#4]!
        182bec:	e5940014 	ldr	r0, [r4, #20]	; fField20
        182bf0:	e1a0200d 	mov	r2, sp
        182bf4:	e4901008 	ldr	r1, [r0], #8
        182bf8:	e5903000 	ldr	r3, [r0]
        182bfc:	e1a00003 	mov	r0, r3
        182c00:	e5933000 	ldr	r3, [r3]
        182c04:	e1a0e00f 	mov	lr, pc
        182c08:	e283f054 	add	pc, r3, #84	; 0x54
        182c0c:	e3300000 	teq	r0, #0	; 0x0
        182c10:	13700001 	cmnne	r0, #1	; 0x1
        182c14:	0a000004 	beq	182c2c <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1a0>
        182c18:	e59d0000 	ldr	r0, [sp]
        182c1c:	e0460000 	sub	r0, r6, r0
        182c20:	e285500c 	add	r5, r5, #12	; 0xc
        182c24:	e8850101 	stmia	r5, {r0, r8}
        182c28:	e245500c 	sub	r5, r5, #12	; 0xc
        182c2c:	e28dd004 	add	sp, sp, #4	; 0x4
        182c30:	e1a02005 	mov	r2, r5
        182c34:	e1a00004 	mov	r0, r4
        182c38:	e3a01014 	mov	r1, #20	; 0x14
        182c3c:	eb69aa9f 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        182c40:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        182c44:	e5940014 	ldr	r0, [r4, #20]	; fField20
        182c48:	e5900008 	ldr	r0, [r0, #8]
        182c4c:	e5901000 	ldr	r1, [r0]
        182c50:	e1a0e00f 	mov	lr, pc
        182c54:	e281f028 	add	pc, r1, #40	; 0x28
        182c58:	e5940018 	ldr	r0, [r4, #24]	; fField24
        182c5c:	e3500000 	cmp	r0, #0	; 0x0
        182c60:	9a000020 	bls	182ce8 <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x25c>
        182c64:	e5940014 	ldr	r0, [r4, #20]	; fField20
        182c68:	e5900008 	ldr	r0, [r0, #8]
        182c6c:	e5901000 	ldr	r1, [r0]
        182c70:	e1a0e00f 	mov	lr, pc
        182c74:	e281f03c 	add	pc, r1, #60	; 0x3c
        182c78:	e5941018 	ldr	r1, [r4, #24]	; fField24
        182c7c:	e1510000 	cmp	r1, r0
        182c80:	b1a00001 	movlt	r0, r1
        182c84:	e1a06000 	mov	r6, r0
        182c88:	e52d0004 	str	r0, [sp, -#4]!
        182c8c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        182c90:	e1a0200d 	mov	r2, sp
        182c94:	e4901008 	ldr	r1, [r0], #8
        182c98:	e5903000 	ldr	r3, [r0]
        182c9c:	e1a00003 	mov	r0, r3
        182ca0:	e5933000 	ldr	r3, [r3]
        182ca4:	e1a0e00f 	mov	lr, pc
        182ca8:	e283f054 	add	pc, r3, #84	; 0x54
        182cac:	e3300000 	teq	r0, #0	; 0x0
        182cb0:	13700001 	cmnne	r0, #1	; 0x1
        182cb4:	15c4501c 	strneb	r5, [r4, #28]	; fField28
        182cb8:	15847018 	strne	r7, [r4, #24]	; fField24
        182cbc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        182cc0:	e5900008 	ldr	r0, [r0, #8]
        182cc4:	e5901000 	ldr	r1, [r0]
        182cc8:	e1a0e00f 	mov	lr, pc
        182ccc:	e281f028 	add	pc, r1, #40	; 0x28
        182cd0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        182cd4:	e0400006 	sub	r0, r0, r6
        182cd8:	e5840018 	str	r0, [r4, #24]	; fField24
        182cdc:	e28dd004 	add	sp, sp, #4	; 0x4
        182ce0:	e3500000 	cmp	r0, #0	; 0x0
        182ce4:	8affffde 	bhi	182c64 <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1d8>
        182ce8:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        182cec:	e5840018 	str	r0, [r4, #24]	; fField24
        182cf0:	e1a00004 	mov	r0, r4
        182cf4:	eb6991b4 	bl	1be73cc <TAEventHandler::$DeferReply(void)>
        182cf8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        182cfc:	e59d0060 	ldr	r0, [sp, #96]
        182d00:	e59f104c 	ldr	r1, [pc, #4c]	; 182d54 <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2c8>
        182d04:	e5911000 	ldr	r1, [r1]
        182d08:	eb698121 	bl	1be3194 <$Subexception>
        182d0c:	e3300000 	teq	r0, #0	; 0x0
        182d10:	159d0064 	ldrne	r0, [sp, #100]
        182d14:	158d006c 	strne	r0, [sp, #108]
        182d18:	1a000001 	bne	182d24 <TPipeEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x298>
        182d1c:	e1a0000d 	mov	r0, sp
        182d20:	eb697d0b 	bl	1be2154 <$NextHandler>
        182d24:	e1a0000d 	mov	r0, sp
        182d28:	eb6978e2 	bl	1be10b8 <$ExitHandler>
        182d2c:	e28dd070 	add	sp, sp, #112	; 0x70
        182d30:	e1a02006 	mov	r2, r6
        182d34:	e1a00004 	mov	r0, r4
        182d38:	e3a01014 	mov	r1, #20	; 0x14
        182d3c:	eb69aa5f 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        182d40:	e1a00004 	mov	r0, r4
        182d44:	eb69a641 	bl	1bec650 <TAEventHandler::$ReplyImmed(void)>
        182d48:	eb694321 	bl	1bd39d4 <$GetGlobals>
        182d4c:	eb698d75 	bl	1be6328 <TAppWorld::$AETerminateLoop(void)>
        182d50:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        182d54:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

