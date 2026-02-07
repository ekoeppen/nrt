#include "include/TOSErrorAlertDialog.h"

/**
 * Symbol: TOSErrorAlertDialog::__ct(void)
 * Address: 0002f8bc
 */
TOSErrorAlertDialog::TOSErrorAlertDialog(void) {
    /*
         2f8bc:	e1a0c00d 	mov	ip, sp
         2f8c0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         2f8c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         2f8c8:	e1b04000 	movs	r4, r0
         2f8cc:	1a000005 	bne	2f8e8 <TOSErrorAlertDialog::__ct(void)+0x2c>
         2f8d0:	e3a00050 	mov	r0, #80	; 0x50
         2f8d4:	eb6e7b97 	bl	1bce738 <$__nw(unsigned int)>
         2f8d8:	e1b04000 	movs	r4, r0
         2f8dc:	1a000001 	bne	2f8e8 <TOSErrorAlertDialog::__ct(void)+0x2c>
         2f8e0:	e1a00004 	mov	r0, r4
         2f8e4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         2f8e8:	e1a00004 	mov	r0, r4
         2f8ec:	eb6affb9 	bl	1aef7d8 <TAlertDialog::$__ct(void)>
         2f8f0:	e284103c 	add	r1, r4, #60	; 0x3c
         2f8f4:	e1a05001 	mov	r5, r1
         2f8f8:	e2840028 	add	r0, r4, #40	; 0x28
         2f8fc:	e1a07000 	mov	r7, r0
         2f900:	e59f62a0 	ldr	r6, [pc, #2a0]	; 2fba8 <TOSErrorAlertDialog::__ct(void)+0x2ec>
         2f904:	e1a03006 	mov	r3, r6
         2f908:	e3a02014 	mov	r2, #20	; 0x14
         2f90c:	eb67565c 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         2f910:	e2841050 	add	r1, r4, #80	; 0x50
         2f914:	e1a00005 	mov	r0, r5
         2f918:	e1a03006 	mov	r3, r6
         2f91c:	e3a02014 	mov	r2, #20	; 0x14
         2f920:	eb675657 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         2f924:	e3a00001 	mov	r0, #1	; 0x1
         2f928:	e5840008 	str	r0, [r4, #8]
         2f92c:	e584000c 	str	r0, [r4, #12]
         2f930:	e0470004 	sub	r0, r7, r4
         2f934:	e5840010 	str	r0, [r4, #16]
         2f938:	e0450004 	sub	r0, r5, r4
         2f93c:	e5840014 	str	r0, [r4, #20]	; fField20
         2f940:	e3a00050 	mov	r0, #80	; 0x50
         2f944:	e5840018 	str	r0, [r4, #24]
         2f948:	e59f725c 	ldr	r7, [pc, #25c]	; 2fbac <TOSErrorAlertDialog::__ct(void)+0x2f0>
         2f94c:	e5970000 	ldr	r0, [r7]
         2f950:	e5901000 	ldr	r1, [r0]
         2f954:	e59f6254 	ldr	r6, [pc, #254]	; 2fbb0 <TOSErrorAlertDialog::__ct(void)+0x2f4>
         2f958:	e5960000 	ldr	r0, [r6]
         2f95c:	e5900000 	ldr	r0, [r0]
         2f960:	eb6e523e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2f964:	e3100003 	tst	r0, #3	; 0x3
         2f968:	01a00140 	moveq	r0, r0, asr #2
         2f96c:	0a000000 	beq	2f974 <TOSErrorAlertDialog::__ct(void)+0xb8>
         2f970:	eb6e49e9 	bl	1bc211c <$_RINTError(long)>
         2f974:	e5c40001 	strb	r0, [r4, #1]
         2f978:	e1a00440 	mov	r0, r0, asr #8
         2f97c:	e5c40000 	strb	r0, [r4]
         2f980:	e59f522c 	ldr	r5, [pc, #22c]	; 2fbb4 <TOSErrorAlertDialog::__ct(void)+0x2f8>
         2f984:	e5950000 	ldr	r0, [r5]
         2f988:	e5901000 	ldr	r1, [r0]
         2f98c:	e5960000 	ldr	r0, [r6]
         2f990:	e5900000 	ldr	r0, [r0]
         2f994:	eb6e5231 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2f998:	e3100003 	tst	r0, #3	; 0x3
         2f99c:	01a00140 	moveq	r0, r0, asr #2
         2f9a0:	0a000000 	beq	2f9a8 <TOSErrorAlertDialog::__ct(void)+0xec>
         2f9a4:	eb6e49dc 	bl	1bc211c <$_RINTError(long)>
         2f9a8:	e5c40003 	strb	r0, [r4, #3]
         2f9ac:	e1a00440 	mov	r0, r0, asr #8
         2f9b0:	e5c40002 	strb	r0, [r4, #2]
         2f9b4:	e59f81fc 	ldr	r8, [pc, #1fc]	; 2fbb8 <TOSErrorAlertDialog::__ct(void)+0x2fc>
         2f9b8:	e5980000 	ldr	r0, [r8]
         2f9bc:	e5901000 	ldr	r1, [r0]
         2f9c0:	e5960000 	ldr	r0, [r6]
         2f9c4:	e5900000 	ldr	r0, [r0]
         2f9c8:	eb6e5224 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2f9cc:	e3100003 	tst	r0, #3	; 0x3
         2f9d0:	01a00140 	moveq	r0, r0, asr #2
         2f9d4:	0a000000 	beq	2f9dc <TOSErrorAlertDialog::__ct(void)+0x120>
         2f9d8:	eb6e49cf 	bl	1bc211c <$_RINTError(long)>
         2f9dc:	e5c40005 	strb	r0, [r4, #5]
         2f9e0:	e1a00440 	mov	r0, r0, asr #8
         2f9e4:	e5c40004 	strb	r0, [r4, #4]
         2f9e8:	e59f91cc 	ldr	r9, [pc, #1cc]	; 2fbbc <TOSErrorAlertDialog::__ct(void)+0x300>
         2f9ec:	e5990000 	ldr	r0, [r9]
         2f9f0:	e5901000 	ldr	r1, [r0]
         2f9f4:	e5960000 	ldr	r0, [r6]
         2f9f8:	e5900000 	ldr	r0, [r0]
         2f9fc:	eb6e5217 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fa00:	e3100003 	tst	r0, #3	; 0x3
         2fa04:	01a00140 	moveq	r0, r0, asr #2
         2fa08:	0a000000 	beq	2fa10 <TOSErrorAlertDialog::__ct(void)+0x154>
         2fa0c:	eb6e49c2 	bl	1bc211c <$_RINTError(long)>
         2fa10:	e5c40007 	strb	r0, [r4, #7]
         2fa14:	e1a00440 	mov	r0, r0, asr #8
         2fa18:	e5c40006 	strb	r0, [r4, #6]
         2fa1c:	e5970000 	ldr	r0, [r7]
         2fa20:	e5901000 	ldr	r1, [r0]
         2fa24:	e59f6194 	ldr	r6, [pc, #194]	; 2fbc0 <TOSErrorAlertDialog::__ct(void)+0x304>
         2fa28:	e5960000 	ldr	r0, [r6]
         2fa2c:	e5900000 	ldr	r0, [r0]
         2fa30:	eb6e520a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fa34:	e3100003 	tst	r0, #3	; 0x3
         2fa38:	01a00140 	moveq	r0, r0, asr #2
         2fa3c:	0a000000 	beq	2fa44 <TOSErrorAlertDialog::__ct(void)+0x188>
         2fa40:	eb6e49b5 	bl	1bc211c <$_RINTError(long)>
         2fa44:	e5c40029 	strb	r0, [r4, #41]
         2fa48:	e1a00440 	mov	r0, r0, asr #8
         2fa4c:	e5c40028 	strb	r0, [r4, #40]
         2fa50:	e5950000 	ldr	r0, [r5]
         2fa54:	e5901000 	ldr	r1, [r0]
         2fa58:	e5960000 	ldr	r0, [r6]
         2fa5c:	e5900000 	ldr	r0, [r0]
         2fa60:	eb6e51fe 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fa64:	e3100003 	tst	r0, #3	; 0x3
         2fa68:	01a00140 	moveq	r0, r0, asr #2
         2fa6c:	0a000000 	beq	2fa74 <TOSErrorAlertDialog::__ct(void)+0x1b8>
         2fa70:	eb6e49a9 	bl	1bc211c <$_RINTError(long)>
         2fa74:	e5c4002b 	strb	r0, [r4, #43]
         2fa78:	e1a00440 	mov	r0, r0, asr #8
         2fa7c:	e5c4002a 	strb	r0, [r4, #42]
         2fa80:	e5980000 	ldr	r0, [r8]
         2fa84:	e5901000 	ldr	r1, [r0]
         2fa88:	e5960000 	ldr	r0, [r6]
         2fa8c:	e5900000 	ldr	r0, [r0]
         2fa90:	eb6e51f2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fa94:	e3100003 	tst	r0, #3	; 0x3
         2fa98:	01a00140 	moveq	r0, r0, asr #2
         2fa9c:	0a000000 	beq	2faa4 <TOSErrorAlertDialog::__ct(void)+0x1e8>
         2faa0:	eb6e499d 	bl	1bc211c <$_RINTError(long)>
         2faa4:	e5c4002d 	strb	r0, [r4, #45]
         2faa8:	e1a00440 	mov	r0, r0, asr #8
         2faac:	e5c4002c 	strb	r0, [r4, #44]
         2fab0:	e5990000 	ldr	r0, [r9]
         2fab4:	e5901000 	ldr	r1, [r0]
         2fab8:	e5960000 	ldr	r0, [r6]
         2fabc:	e5900000 	ldr	r0, [r0]
         2fac0:	eb6e51e6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fac4:	e3100003 	tst	r0, #3	; 0x3
         2fac8:	01a00140 	moveq	r0, r0, asr #2
         2facc:	0a000000 	beq	2fad4 <TOSErrorAlertDialog::__ct(void)+0x218>
         2fad0:	eb6e4991 	bl	1bc211c <$_RINTError(long)>
         2fad4:	e5c4002f 	strb	r0, [r4, #47]
         2fad8:	e1a00440 	mov	r0, r0, asr #8
         2fadc:	e5c4002e 	strb	r0, [r4, #46]
         2fae0:	e5970000 	ldr	r0, [r7]
         2fae4:	e5901000 	ldr	r1, [r0]
         2fae8:	e59f60d4 	ldr	r6, [pc, #d4]	; 2fbc4 <TOSErrorAlertDialog::__ct(void)+0x308>
         2faec:	e5960000 	ldr	r0, [r6]
         2faf0:	e5900000 	ldr	r0, [r0]
         2faf4:	eb6e51d9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2faf8:	e3100003 	tst	r0, #3	; 0x3
         2fafc:	01a00140 	moveq	r0, r0, asr #2
         2fb00:	0a000000 	beq	2fb08 <TOSErrorAlertDialog::__ct(void)+0x24c>
         2fb04:	eb6e4984 	bl	1bc211c <$_RINTError(long)>
         2fb08:	e5c4003d 	strb	r0, [r4, #61]
         2fb0c:	e1a00440 	mov	r0, r0, asr #8
         2fb10:	e5c4003c 	strb	r0, [r4, #60]
         2fb14:	e5950000 	ldr	r0, [r5]
         2fb18:	e5901000 	ldr	r1, [r0]
         2fb1c:	e5960000 	ldr	r0, [r6]
         2fb20:	e5900000 	ldr	r0, [r0]
         2fb24:	eb6e51cd 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fb28:	e3100003 	tst	r0, #3	; 0x3
         2fb2c:	01a00140 	moveq	r0, r0, asr #2
         2fb30:	0a000000 	beq	2fb38 <TOSErrorAlertDialog::__ct(void)+0x27c>
         2fb34:	eb6e4978 	bl	1bc211c <$_RINTError(long)>
         2fb38:	e5c4003f 	strb	r0, [r4, #63]
         2fb3c:	e1a00440 	mov	r0, r0, asr #8
         2fb40:	e5c4003e 	strb	r0, [r4, #62]
         2fb44:	e5980000 	ldr	r0, [r8]
         2fb48:	e5901000 	ldr	r1, [r0]
         2fb4c:	e5960000 	ldr	r0, [r6]
         2fb50:	e5900000 	ldr	r0, [r0]
         2fb54:	eb6e51c1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fb58:	e3100003 	tst	r0, #3	; 0x3
         2fb5c:	01a00140 	moveq	r0, r0, asr #2
         2fb60:	0a000000 	beq	2fb68 <TOSErrorAlertDialog::__ct(void)+0x2ac>
         2fb64:	eb6e496c 	bl	1bc211c <$_RINTError(long)>
         2fb68:	e5c40041 	strb	r0, [r4, #65]
         2fb6c:	e1a00440 	mov	r0, r0, asr #8
         2fb70:	e5c40040 	strb	r0, [r4, #64]
         2fb74:	e5990000 	ldr	r0, [r9]
         2fb78:	e5901000 	ldr	r1, [r0]
         2fb7c:	e5960000 	ldr	r0, [r6]
         2fb80:	e5900000 	ldr	r0, [r0]
         2fb84:	eb6e51b5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fb88:	e3100003 	tst	r0, #3	; 0x3
         2fb8c:	01a00140 	moveq	r0, r0, asr #2
         2fb90:	0a000000 	beq	2fb98 <TOSErrorAlertDialog::__ct(void)+0x2dc>
         2fb94:	eb6e4960 	bl	1bc211c <$_RINTError(long)>
         2fb98:	e5c40043 	strb	r0, [r4, #67]
         2fb9c:	e1a00440 	mov	r0, r0, asr #8
         2fba0:	e5c40042 	strb	r0, [r4, #66]
         2fba4:	eaffff4d 	b	2f8e0 <TOSErrorAlertDialog::__ct(void)+0x24>
         2fba8:	01ba1094 	ldreqb	r1, [sl, r4]!
         2fbac:	00684bc8 	rsbeq	r4, r8, r8, asr #23
         2fbb0:	0067fb38 	rsbeq	pc, r7, r8, lsr fp
         2fbb4:	006834e0 	rsbeq	r3, r8, r0, ror #9
         2fbb8:	00682188 	rsbeq	r2, r8, r8, lsl #3
         2fbbc:	00684360 	rsbeq	r4, r8, r0, ror #6
         2fbc0:	006818f0 	streqd	r1, [r8], -#128
         2fbc4:	00681890 	streqb	r1, [r8], -#128
    */
}

/**
 * Symbol: TOSErrorAlertDialog::Init(unsigned short *, unsigned short *)
 * Address: 0002fbc8
 */
TOSErrorAlertDialog::Init(unsigned short *, unsigned short *) {
    /*
         2fbc8:	e5a01030 	str	r1, [r0, #48]!	; fField48
         2fbcc:	e5a02014 	str	r2, [r0, #20]!	; fField20
         2fbd0:	e1a0f00e 	mov	pc, lr
    */
}

