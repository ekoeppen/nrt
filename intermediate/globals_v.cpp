#include "Newton.h"

/**
 * Symbol: VerifyStart(AirusAParmBlock **)
 * Address: 0002c760
 */
VerifyStart(AirusAParmBlock **) {
    /*
         2c760:	e3a03000 	mov	r3, #0	; 0x0
         2c764:	e3a02000 	mov	r2, #0	; 0x0
         2c768:	e3a01000 	mov	r1, #0	; 0x0
         2c76c:	ea675245 	b	1a01088 <$NewVerifyReset>
    */
}

/**
 * Symbol: VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3
 * Address: 0002c7ac
 */
void globals::VerifyCharacter() {
    /*
         2c7ac:	e1a0c00d 	mov	ip, sp
         2c7b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         2c7b4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2c7b8:	e24cb014 	sub	fp, ip, #20	; 0x14
         2c7bc:	e59b0018 	ldr	r0, [fp, #24]
         2c7c0:	e20010ff 	and	r1, r0, #255	; 0xff
         2c7c4:	e52d1014 	str	r1, [sp, -#20]!
         2c7c8:	e24dd028 	sub	sp, sp, #40	; 0x28
         2c7cc:	e59b0004 	ldr	r0, [fp, #4]
         2c7d0:	e5900000 	ldr	r0, [r0]
         2c7d4:	e5b04040 	ldr	r4, [r0, #64]!
         2c7d8:	e5940000 	ldr	r0, [r4]
         2c7dc:	e5901008 	ldr	r1, [r0, #8]
         2c7e0:	e5911000 	ldr	r1, [r1]
         2c7e4:	e5d11001 	ldrb	r1, [r1, #1]
         2c7e8:	e2011007 	and	r1, r1, #7	; 0x7
         2c7ec:	e3310005 	teq	r1, #5	; 0x5
         2c7f0:	13310002 	teqne	r1, #2	; 0x2
         2c7f4:	03a01001 	moveq	r1, #1	; 0x1
         2c7f8:	13a01000 	movne	r1, #0	; 0x0
         2c7fc:	e20190ff 	and	r9, r1, #255	; 0xff
         2c800:	e3590000 	cmp	r9, #0	; 0x0
         2c804:	059f608c 	ldreq	r6, [pc, #8c]	; 2c898 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0xec>
         2c808:	159f808c 	ldrne	r8, [pc, #8c]	; 2c89c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0xf0>
         2c80c:	e59f108c 	ldr	r1, [pc, #8c]	; 2c8a0 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0xf4>
         2c810:	e58d1008 	str	r1, [sp, #8]
         2c814:	e59f1088 	ldr	r1, [pc, #88]	; 2c8a4 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0xf8>
         2c818:	e58d1004 	str	r1, [sp, #4]
         2c81c:	e59f5084 	ldr	r5, [pc, #84]	; 2c8a8 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0xfc>
         2c820:	e5951018 	ldr	r1, [r5, #24]
         2c824:	e58d1000 	str	r1, [sp]
         2c828:	e5902020 	ldr	r2, [r0, #32]
         2c82c:	e58d2014 	str	r2, [sp, #20]
         2c830:	e590003c 	ldr	r0, [r0, #60]
         2c834:	e3a01000 	mov	r1, #0	; 0x0
         2c838:	e3a07000 	mov	r7, #0	; 0x0
         2c83c:	e3a0a000 	mov	sl, #0	; 0x0
         2c840:	e58d0020 	str	r0, [sp, #32]
         2c844:	e58d101c 	str	r1, [sp, #28]
         2c848:	e58d7018 	str	r7, [sp, #24]
         2c84c:	e59b0008 	ldr	r0, [fp, #8]
         2c850:	0a000016 	beq	2c8b0 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x104>
         2c854:	eb674e01 	bl	1a00060 <$Ashortstrlen(unsigned short *)>
         2c858:	e0800fa0 	add	r0, r0, r0, lsr #31
         2c85c:	e1a000c0 	mov	r0, r0, asr #1
         2c860:	e58d0010 	str	r0, [sp, #16]
         2c864:	e59f0040 	ldr	r0, [pc, #40]	; 2c8ac <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x100>
         2c868:	e58d0038 	str	r0, [sp, #56]
         2c86c:	e59d2014 	ldr	r2, [sp, #20]
         2c870:	e0800082 	add	r0, r0, r2, lsl #1
         2c874:	e59b1008 	ldr	r1, [fp, #8]
         2c878:	eb674df7 	bl	1a0005c <$Ashortstrcpy__FPUsT1>
         2c87c:	e59d0038 	ldr	r0, [sp, #56]
         2c880:	eb674df6 	bl	1a00060 <$Ashortstrlen(unsigned short *)>
         2c884:	e0800fa0 	add	r0, r0, r0, lsr #31
         2c888:	e1a000c0 	mov	r0, r0, asr #1
         2c88c:	e58d000c 	str	r0, [sp, #12]
         2c890:	e59d0038 	ldr	r0, [sp, #56]
         2c894:	ea000011 	b	2c8e0 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x134>
         2c898:	0c100818 	ldceq	8, cr0, [r0], -#96
         2c89c:	0c10081c 	ldceq	8, cr0, [r0], -#112
         2c8a0:	0c100820 	ldceq	8, cr0, [r0], -#128
         2c8a4:	0c100824 	ldceq	8, cr0, [r0], -#144
         2c8a8:	0c100810 	ldceq	8, cr0, [r0], -#64
         2c8ac:	0c105bf4 	ldceq	11, cr5, [r0], -#976
         2c8b0:	eb674ded 	bl	1a0006c <$Astrlen(char *)>
         2c8b4:	e58d0010 	str	r0, [sp, #16]
         2c8b8:	e59f00a8 	ldr	r0, [pc, #a8]	; 2c968 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x1bc>
         2c8bc:	e58d0034 	str	r0, [sp, #52]
         2c8c0:	e59d2014 	ldr	r2, [sp, #20]
         2c8c4:	e0800002 	add	r0, r0, r2
         2c8c8:	e59b1008 	ldr	r1, [fp, #8]
         2c8cc:	eb674de5 	bl	1a00068 <$Astrcpy__FPcT1>
         2c8d0:	e59d0034 	ldr	r0, [sp, #52]
         2c8d4:	eb674de4 	bl	1a0006c <$Astrlen(char *)>
         2c8d8:	e58d000c 	str	r0, [sp, #12]
         2c8dc:	e59d0034 	ldr	r0, [sp, #52]
         2c8e0:	e5941000 	ldr	r1, [r4]
         2c8e4:	e5a1001c 	str	r0, [r1, #28]!
         2c8e8:	e5940000 	ldr	r0, [r4]
         2c8ec:	e5b01038 	ldr	r1, [r0, #56]!
         2c8f0:	e59d0008 	ldr	r0, [sp, #8]
         2c8f4:	e5801000 	str	r1, [r0]
         2c8f8:	e3a00000 	mov	r0, #0	; 0x0
         2c8fc:	e5850000 	str	r0, [r5]
         2c900:	e58d1024 	str	r1, [sp, #36]
         2c904:	e59d0020 	ldr	r0, [sp, #32]
         2c908:	e1510000 	cmp	r1, r0
         2c90c:	2a0000d2 	bcs	2cc5c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x4b0>
         2c910:	e59d000c 	ldr	r0, [sp, #12]
         2c914:	e2401001 	sub	r1, r0, #1	; 0x1
         2c918:	e58d1030 	str	r1, [sp, #48]
         2c91c:	e59d1010 	ldr	r1, [sp, #16]
         2c920:	e2411001 	sub	r1, r1, #1	; 0x1
         2c924:	e58d102c 	str	r1, [sp, #44]
         2c928:	e5940000 	ldr	r0, [r4]
         2c92c:	e5901020 	ldr	r1, [r0, #32]
         2c930:	e59d2014 	ldr	r2, [sp, #20]
         2c934:	e1310002 	teq	r1, r2
         2c938:	0a00000b 	beq	2c96c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x1c0>
         2c93c:	e59d1028 	ldr	r1, [sp, #40]
         2c940:	e3310000 	teq	r1, #0	; 0x0
         2c944:	1a00001d 	bne	2c9c0 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x214>
         2c948:	e59d100c 	ldr	r1, [sp, #12]
         2c94c:	e3510001 	cmp	r1, #1	; 0x1
         2c950:	9a00000d 	bls	2c98c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x1e0>
         2c954:	e5901028 	ldr	r1, [r0, #40]
         2c958:	e3310000 	teq	r1, #0	; 0x0
         2c95c:	059d1030 	ldreq	r1, [sp, #48]
         2c960:	0a000008 	beq	2c988 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x1dc>
         2c964:	ea000008 	b	2c98c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x1e0>
         2c968:	0c105af4 	ldceq	10, cr5, [r0], -#976
         2c96c:	e59d1010 	ldr	r1, [sp, #16]
         2c970:	e3510001 	cmp	r1, #1	; 0x1
         2c974:	9a000004 	bls	2c98c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x1e0>
         2c978:	e5901028 	ldr	r1, [r0, #40]
         2c97c:	e3310000 	teq	r1, #0	; 0x0
         2c980:	1a000001 	bne	2c98c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x1e0>
         2c984:	e59d102c 	ldr	r1, [sp, #44]
         2c988:	e5a01020 	str	r1, [r0, #32]!
         2c98c:	e1a00004 	mov	r0, r4
         2c990:	e3a01002 	mov	r1, #2	; 0x2
         2c994:	eb674db5 	bl	1a00070 <$CallAirusA>
         2c998:	e5940000 	ldr	r0, [r4]
         2c99c:	e590002c 	ldr	r0, [r0, #44]
         2c9a0:	e3300000 	teq	r0, #0	; 0x0
         2c9a4:	0a000014 	beq	2c9fc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x250>
         2c9a8:	e3300001 	teq	r0, #1	; 0x1
         2c9ac:	0a000036 	beq	2ca8c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x2e0>
         2c9b0:	e3300002 	teq	r0, #2	; 0x2
         2c9b4:	0a000023 	beq	2ca48 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x29c>
         2c9b8:	e3300003 	teq	r0, #3	; 0x3
         2c9bc:	1a000096 	bne	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2c9c0:	e5950000 	ldr	r0, [r5]
         2c9c4:	e2800006 	add	r0, r0, #6	; 0x6
         2c9c8:	e3500009 	cmp	r0, #9	; 0x9
         2c9cc:	908ff100 	addls	pc, pc, r0, lsl #2
         2c9d0:	ea000091 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2c9d4:	ea000090 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2c9d8:	ea00008f 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2c9dc:	ea00008e 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2c9e0:	ea00008d 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2c9e4:	ea00008c 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2c9e8:	ea00008b 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2c9ec:	ea000088 	b	2cc14 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x468>
         2c9f0:	ea000089 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2c9f4:	ea000088 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2c9f8:	ea000087 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2c9fc:	e5950000 	ldr	r0, [r5]
         2ca00:	e2800006 	add	r0, r0, #6	; 0x6
         2ca04:	e3500009 	cmp	r0, #9	; 0x9
         2ca08:	908ff100 	addls	pc, pc, r0, lsl #2
         2ca0c:	ea00000d 	b	2ca48 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x29c>
         2ca10:	ea000009 	b	2ca3c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x290>
         2ca14:	ea00000b 	b	2ca48 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x29c>
         2ca18:	ea00000a 	b	2ca48 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x29c>
         2ca1c:	ea000009 	b	2ca48 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x29c>
         2ca20:	ea000008 	b	2ca48 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x29c>
         2ca24:	ea000007 	b	2ca48 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x29c>
         2ca28:	ea000003 	b	2ca3c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x290>
         2ca2c:	ea00003d 	b	2cb28 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x37c>
         2ca30:	ea00003c 	b	2cb28 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x37c>
         2ca34:	e3a00002 	mov	r0, #2	; 0x2
         2ca38:	ea000000 	b	2ca40 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x294>
         2ca3c:	e3a00001 	mov	r0, #1	; 0x1
         2ca40:	e5850000 	str	r0, [r5]
         2ca44:	ea000037 	b	2cb28 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x37c>
         2ca48:	e5950000 	ldr	r0, [r5]
         2ca4c:	e2800006 	add	r0, r0, #6	; 0x6
         2ca50:	e3500009 	cmp	r0, #9	; 0x9
         2ca54:	908ff100 	addls	pc, pc, r0, lsl #2
         2ca58:	ea00001b 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2ca5c:	ea000008 	b	2ca84 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x2d8>
         2ca60:	ea000019 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2ca64:	ea000018 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2ca68:	ea000017 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2ca6c:	ea000016 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2ca70:	ea000015 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2ca74:	ea000002 	b	2ca84 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x2d8>
         2ca78:	ea000011 	b	2cac4 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x318>
         2ca7c:	ea000012 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2ca80:	ea000011 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2ca84:	e3a00003 	mov	r0, #3	; 0x3
         2ca88:	ea00000e 	b	2cac8 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x31c>
         2ca8c:	e5950000 	ldr	r0, [r5]
         2ca90:	e2800006 	add	r0, r0, #6	; 0x6
         2ca94:	e3500009 	cmp	r0, #9	; 0x9
         2ca98:	908ff100 	addls	pc, pc, r0, lsl #2
         2ca9c:	ea00000a 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2caa0:	ea000007 	b	2cac4 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x318>
         2caa4:	ea000008 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2caa8:	ea000007 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2caac:	ea000006 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2cab0:	ea000005 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2cab4:	ea000004 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2cab8:	ea000001 	b	2cac4 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x318>
         2cabc:	ea000000 	b	2cac4 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x318>
         2cac0:	ea000001 	b	2cacc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x320>
         2cac4:	e3a00002 	mov	r0, #2	; 0x2
         2cac8:	e5850000 	str	r0, [r5]
         2cacc:	e59d0018 	ldr	r0, [sp, #24]
         2cad0:	e3300000 	teq	r0, #0	; 0x0
         2cad4:	1a000013 	bne	2cb28 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x37c>
         2cad8:	e3a00001 	mov	r0, #1	; 0x1
         2cadc:	e58d0018 	str	r0, [sp, #24]
         2cae0:	e5940000 	ldr	r0, [r4]
         2cae4:	e5900038 	ldr	r0, [r0, #56]
         2cae8:	e59d1008 	ldr	r1, [sp, #8]
         2caec:	e3370000 	teq	r7, #0	; 0x0
         2caf0:	e5810000 	str	r0, [r1]
         2caf4:	1a00000b 	bne	2cb28 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x37c>
         2caf8:	e1a00004 	mov	r0, r4
         2cafc:	eb67558c 	bl	1a02134 <$HasActualOrImpliedAtr(AirusAParmBlock **)>
         2cb00:	e3300000 	teq	r0, #0	; 0x0
         2cb04:	0a000007 	beq	2cb28 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x37c>
         2cb08:	e3a07001 	mov	r7, #1	; 0x1
         2cb0c:	e5940000 	ldr	r0, [r4]
         2cb10:	e5900024 	ldr	r0, [r0, #36]
         2cb14:	e59d1004 	ldr	r1, [sp, #4]
         2cb18:	e5810000 	str	r0, [r1]
         2cb1c:	e5940000 	ldr	r0, [r4]
         2cb20:	e5900048 	ldr	r0, [r0, #72]
         2cb24:	e58d0000 	str	r0, [sp]
         2cb28:	e33a0000 	teq	sl, #0	; 0x0
         2cb2c:	1a000011 	bne	2cb78 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x3cc>
         2cb30:	e3a0a001 	mov	sl, #1	; 0x1
         2cb34:	e59b0004 	ldr	r0, [fp, #4]
         2cb38:	e5900000 	ldr	r0, [r0]
         2cb3c:	e3370000 	teq	r7, #0	; 0x0
         2cb40:	e5a04040 	str	r4, [r0, #64]!
         2cb44:	1a00000b 	bne	2cb78 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x3cc>
         2cb48:	e1a00004 	mov	r0, r4
         2cb4c:	eb675578 	bl	1a02134 <$HasActualOrImpliedAtr(AirusAParmBlock **)>
         2cb50:	e3300000 	teq	r0, #0	; 0x0
         2cb54:	0a000007 	beq	2cb78 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x3cc>
         2cb58:	e3a07001 	mov	r7, #1	; 0x1
         2cb5c:	e5940000 	ldr	r0, [r4]
         2cb60:	e5900024 	ldr	r0, [r0, #36]
         2cb64:	e59d1004 	ldr	r1, [sp, #4]
         2cb68:	e5810000 	str	r0, [r1]
         2cb6c:	e5940000 	ldr	r0, [r4]
         2cb70:	e5900048 	ldr	r0, [r0, #72]
         2cb74:	e58d0000 	str	r0, [sp]
         2cb78:	e3360000 	teq	r6, #0	; 0x0
         2cb7c:	0a000026 	beq	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2cb80:	e5941000 	ldr	r1, [r4]
         2cb84:	e5910030 	ldr	r0, [r1, #48]
         2cb88:	e3700001 	cmn	r0, #1	; 0x1
         2cb8c:	0a000017 	beq	2cbf0 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x444>
         2cb90:	e59d101c 	ldr	r1, [sp, #28]
         2cb94:	e3310000 	teq	r1, #0	; 0x0
         2cb98:	0a00000c 	beq	2cbd0 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x424>
         2cb9c:	e3390000 	teq	r9, #0	; 0x0
         2cba0:	0a000005 	beq	2cbbc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x410>
         2cba4:	e1a01800 	mov	r1, r0, lsl #16
         2cba8:	e1a01821 	mov	r1, r1, lsr #16
         2cbac:	e5980000 	ldr	r0, [r8]
         2cbb0:	e1310820 	teq	r1, r0, lsr #16
         2cbb4:	0a000018 	beq	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2cbb8:	ea000011 	b	2cc04 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x458>
         2cbbc:	e20000ff 	and	r0, r0, #255	; 0xff
         2cbc0:	e5d61000 	ldrb	r1, [r6]
         2cbc4:	e1300001 	teq	r0, r1
         2cbc8:	0a000013 	beq	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2cbcc:	ea00000e 	b	2cc0c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x460>
         2cbd0:	e3a01001 	mov	r1, #1	; 0x1
         2cbd4:	e3390000 	teq	r9, #0	; 0x0
         2cbd8:	e58d101c 	str	r1, [sp, #28]
         2cbdc:	05c60000 	streqb	r0, [r6]
         2cbe0:	15c80001 	strneb	r0, [r8, #1]
         2cbe4:	11a00440 	movne	r0, r0, asr #8
         2cbe8:	15c80000 	strneb	r0, [r8]
         2cbec:	ea00000a 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2cbf0:	e5b1002c 	ldr	r0, [r1, #44]!
         2cbf4:	e3300002 	teq	r0, #2	; 0x2
         2cbf8:	0a000007 	beq	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2cbfc:	e3390000 	teq	r9, #0	; 0x0
         2cc00:	0a000001 	beq	2cc0c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x460>
         2cc04:	e3a08000 	mov	r8, #0	; 0x0
         2cc08:	ea000003 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2cc0c:	e3a06000 	mov	r6, #0	; 0x0
         2cc10:	ea000001 	b	2cc1c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x470>
         2cc14:	e3e00005 	mvn	r0, #5	; 0x5
         2cc18:	e5850000 	str	r0, [r5]
         2cc1c:	e59d1028 	ldr	r1, [sp, #40]
         2cc20:	e3310000 	teq	r1, #0	; 0x0
         2cc24:	1a000001 	bne	2cc30 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x484>
         2cc28:	e33a0000 	teq	sl, #0	; 0x0
         2cc2c:	1a000007 	bne	2cc50 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x4a4>
         2cc30:	e5940000 	ldr	r0, [r4]
         2cc34:	e5b04044 	ldr	r4, [r0, #68]!
         2cc38:	e59d1024 	ldr	r1, [sp, #36]
         2cc3c:	e2811001 	add	r1, r1, #1	; 0x1
         2cc40:	e58d1024 	str	r1, [sp, #36]
         2cc44:	e59d0020 	ldr	r0, [sp, #32]
         2cc48:	e1510000 	cmp	r1, r0
         2cc4c:	3affff35 	bcc	2c928 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x17c>
         2cc50:	e59d0018 	ldr	r0, [sp, #24]
         2cc54:	e3300000 	teq	r0, #0	; 0x0
         2cc58:	1a000001 	bne	2cc64 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x4b8>
         2cc5c:	e3a00000 	mov	r0, #0	; 0x0
         2cc60:	e58d0008 	str	r0, [sp, #8]
         2cc64:	e59d101c 	ldr	r1, [sp, #28]
         2cc68:	e3310000 	teq	r1, #0	; 0x0
         2cc6c:	03a06000 	moveq	r6, #0	; 0x0
         2cc70:	e3570000 	cmp	r7, #0	; 0x0
         2cc74:	03a01000 	moveq	r1, #0	; 0x0
         2cc78:	058d1004 	streq	r1, [sp, #4]
         2cc7c:	0a000000 	beq	2cc84 <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x4d8>
         2cc80:	1a000001 	bne	2cc8c <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x4e0>
         2cc84:	e3a00000 	mov	r0, #0	; 0x0
         2cc88:	e58d0000 	str	r0, [sp]
         2cc8c:	e59b3010 	ldr	r3, [fp, #16]
         2cc90:	e3330000 	teq	r3, #0	; 0x0
         2cc94:	159d0008 	ldrne	r0, [sp, #8]
         2cc98:	159b3010 	ldrne	r3, [fp, #16]
         2cc9c:	15830000 	strne	r0, [r3]
         2cca0:	e59b200c 	ldr	r2, [fp, #12]
         2cca4:	e3320000 	teq	r2, #0	; 0x0
         2cca8:	0a000003 	beq	2ccbc <VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3+0x510>
         2ccac:	e3390000 	teq	r9, #0	; 0x0
         2ccb0:	e59b200c 	ldr	r2, [fp, #12]
         2ccb4:	05826000 	streq	r6, [r2]
         2ccb8:	15828000 	strne	r8, [r2]
         2ccbc:	e59b0014 	ldr	r0, [fp, #20]
         2ccc0:	e3300000 	teq	r0, #0	; 0x0
         2ccc4:	159d1004 	ldrne	r1, [sp, #4]
         2ccc8:	159b0014 	ldrne	r0, [fp, #20]
         2cccc:	15801000 	strne	r1, [r0]
         2ccd0:	e59b101c 	ldr	r1, [fp, #28]
         2ccd4:	e3310000 	teq	r1, #0	; 0x0
         2ccd8:	159d0000 	ldrne	r0, [sp]
         2ccdc:	159b101c 	ldrne	r1, [fp, #28]
         2cce0:	15810000 	strne	r0, [r1]
         2cce4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: VerifyWord__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3
 * Address: 0002cce8
 */
void globals::VerifyWord() {
    /*
         2cce8:	e1a0c00d 	mov	ip, sp
         2ccec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2ccf0:	e24cb004 	sub	fp, ip, #4	; 0x4
         2ccf4:	e1a0e001 	mov	lr, r1
         2ccf8:	e1a0c002 	mov	ip, r2
         2ccfc:	e1a04003 	mov	r4, r3
         2cd00:	e99b000e 	ldmib	fp, {r1, r2, r3}
         2cd04:	e20220ff 	and	r2, r2, #255	; 0xff
         2cd08:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         2cd0c:	e1a03004 	mov	r3, r4
         2cd10:	e1a0200c 	mov	r2, ip
         2cd14:	e1a0100e 	mov	r1, lr
         2cd18:	eb67591a 	bl	1a03188 <$VerifyCharacter__FPP15AirusAParmBlockPUcPPUcPPUlT4UcT3>
         2cd1c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: VerifyString
 * Address: 0002cd20
 */
void globals::VerifyString() {
    /*
         2cd20:	e1a0c00d 	mov	ip, sp
         2cd24:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         2cd28:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2cd2c:	e24cb014 	sub	fp, ip, #20	; 0x14
         2cd30:	e1a04000 	mov	r4, r0
         2cd34:	e1a05002 	mov	r5, r2
         2cd38:	e24dd00c 	sub	sp, sp, #12	; 0xc
         2cd3c:	e5900000 	ldr	r0, [r0]
         2cd40:	e5900008 	ldr	r0, [r0, #8]
         2cd44:	e5900000 	ldr	r0, [r0]
         2cd48:	e5d00001 	ldrb	r0, [r0, #1]
         2cd4c:	e2000007 	and	r0, r0, #7	; 0x7
         2cd50:	e3300005 	teq	r0, #5	; 0x5
         2cd54:	13300002 	teqne	r0, #2	; 0x2
         2cd58:	03a00001 	moveq	r0, #1	; 0x1
         2cd5c:	13a00000 	movne	r0, #0	; 0x0
         2cd60:	e20000ff 	and	r0, r0, #255	; 0xff
         2cd64:	e58d0000 	str	r0, [sp]
         2cd68:	e3500000 	cmp	r0, #0	; 0x0
         2cd6c:	059fa03c 	ldreq	sl, [pc, #3c]	; 2cdb0 <VerifyString+0x90>
         2cd70:	159f903c 	ldrne	r9, [pc, #3c]	; 2cdb4 <VerifyString+0x94>
         2cd74:	e59f603c 	ldr	r6, [pc, #3c]	; 2cdb8 <VerifyString+0x98>
         2cd78:	e59f803c 	ldr	r8, [pc, #3c]	; 2cdbc <VerifyString+0x9c>
         2cd7c:	e5987018 	ldr	r7, [r8, #24]
         2cd80:	0a00000f 	beq	2cdc4 <VerifyString+0xa4>
         2cd84:	e59f0034 	ldr	r0, [pc, #34]	; 2cdc0 <VerifyString+0xa0>
         2cd88:	e58d0008 	str	r0, [sp, #8]
         2cd8c:	eb674cb2 	bl	1a0005c <$Ashortstrcpy__FPUsT1>
         2cd90:	e59d1008 	ldr	r1, [sp, #8]
         2cd94:	e5940000 	ldr	r0, [r4]
         2cd98:	e5a0101c 	str	r1, [r0, #28]!
         2cd9c:	e59d0008 	ldr	r0, [sp, #8]
         2cda0:	eb674cae 	bl	1a00060 <$Ashortstrlen(unsigned short *)>
         2cda4:	e0800fa0 	add	r0, r0, r0, lsr #31
         2cda8:	e1a000c0 	mov	r0, r0, asr #1
         2cdac:	ea00000c 	b	2cde4 <VerifyString+0xc4>
         2cdb0:	0c100818 	ldceq	8, cr0, [r0], -#96
         2cdb4:	0c10081c 	ldceq	8, cr0, [r0], -#112
         2cdb8:	0c100824 	ldceq	8, cr0, [r0], -#144
         2cdbc:	0c100810 	ldceq	8, cr0, [r0], -#64
         2cdc0:	0c105bf4 	ldceq	11, cr5, [r0], -#976
         2cdc4:	e59f0068 	ldr	r0, [pc, #68]	; 2ce34 <VerifyString+0x114>
         2cdc8:	e58d0004 	str	r0, [sp, #4]
         2cdcc:	eb674ca5 	bl	1a00068 <$Astrcpy__FPcT1>
         2cdd0:	e59d1004 	ldr	r1, [sp, #4]
         2cdd4:	e5940000 	ldr	r0, [r4]
         2cdd8:	e5a0101c 	str	r1, [r0, #28]!
         2cddc:	e59d0004 	ldr	r0, [sp, #4]
         2cde0:	eb674ca1 	bl	1a0006c <$Astrlen(char *)>
         2cde4:	e2400001 	sub	r0, r0, #1	; 0x1
         2cde8:	e5941000 	ldr	r1, [r4]
         2cdec:	e5a10020 	str	r0, [r1, #32]!
         2cdf0:	e3a01000 	mov	r1, #0	; 0x0
         2cdf4:	e5940000 	ldr	r0, [r4]
         2cdf8:	e5a01028 	str	r1, [r0, #40]!
         2cdfc:	e1a00004 	mov	r0, r4
         2ce00:	e3a01002 	mov	r1, #2	; 0x2
         2ce04:	eb674c99 	bl	1a00070 <$CallAirusA>
         2ce08:	e59d0000 	ldr	r0, [sp]
         2ce0c:	e3300000 	teq	r0, #0	; 0x0
         2ce10:	e5940000 	ldr	r0, [r4]
         2ce14:	e5900030 	ldr	r0, [r0, #48]
         2ce18:	0a000006 	beq	2ce38 <VerifyString+0x118>
         2ce1c:	e3700001 	cmn	r0, #1	; 0x1
         2ce20:	03a09000 	moveq	r9, #0	; 0x0
         2ce24:	15c90001 	strneb	r0, [r9, #1]
         2ce28:	11a00440 	movne	r0, r0, asr #8
         2ce2c:	15c90000 	strneb	r0, [r9]
         2ce30:	ea000003 	b	2ce44 <VerifyString+0x124>
         2ce34:	0c105af4 	ldceq	10, cr5, [r0], -#976
         2ce38:	e3700001 	cmn	r0, #1	; 0x1
         2ce3c:	03a0a000 	moveq	sl, #0	; 0x0
         2ce40:	15ca0000 	strneb	r0, [sl]
         2ce44:	e5940000 	ldr	r0, [r4]
         2ce48:	e590002c 	ldr	r0, [r0, #44]
         2ce4c:	e3300000 	teq	r0, #0	; 0x0
         2ce50:	03a00001 	moveq	r0, #1	; 0x1
         2ce54:	03a06000 	moveq	r6, #0	; 0x0
         2ce58:	05880000 	streq	r0, [r8]
         2ce5c:	0a000018 	beq	2cec4 <VerifyString+0x1a4>
         2ce60:	e3300001 	teq	r0, #1	; 0x1
         2ce64:	03a00002 	moveq	r0, #2	; 0x2
         2ce68:	0a000007 	beq	2ce8c <VerifyString+0x16c>
         2ce6c:	e3300002 	teq	r0, #2	; 0x2
         2ce70:	0a000004 	beq	2ce88 <VerifyString+0x168>
         2ce74:	e3300003 	teq	r0, #3	; 0x3
         2ce78:	03e00005 	mvneq	r0, #5	; 0x5
         2ce7c:	03a06000 	moveq	r6, #0	; 0x0
         2ce80:	05880000 	streq	r0, [r8]
         2ce84:	ea00000f 	b	2cec8 <VerifyString+0x1a8>
         2ce88:	e3a00003 	mov	r0, #3	; 0x3
         2ce8c:	e5880000 	str	r0, [r8]
         2ce90:	e1a00004 	mov	r0, r4
         2ce94:	eb6754a6 	bl	1a02134 <$HasActualOrImpliedAtr(AirusAParmBlock **)>
         2ce98:	e3300000 	teq	r0, #0	; 0x0
         2ce9c:	03a06000 	moveq	r6, #0	; 0x0
         2cea0:	15940000 	ldrne	r0, [r4]
         2cea4:	15900024 	ldrne	r0, [r0, #36]
         2cea8:	15860000 	strne	r0, [r6]
         2ceac:	e1a00004 	mov	r0, r4
         2ceb0:	eb67549f 	bl	1a02134 <$HasActualOrImpliedAtr(AirusAParmBlock **)>
         2ceb4:	e3300000 	teq	r0, #0	; 0x0
         2ceb8:	15940000 	ldrne	r0, [r4]
         2cebc:	15b07048 	ldrne	r7, [r0, #72]!
         2cec0:	1a000000 	bne	2cec8 <VerifyString+0x1a8>
         2cec4:	e3a07000 	mov	r7, #0	; 0x0
         2cec8:	e59d0000 	ldr	r0, [sp]
         2cecc:	e3300000 	teq	r0, #0	; 0x0
         2ced0:	0a000002 	beq	2cee0 <VerifyString+0x1c0>
         2ced4:	e3350000 	teq	r5, #0	; 0x0
         2ced8:	15859000 	strne	r9, [r5]
         2cedc:	ea000001 	b	2cee8 <VerifyString+0x1c8>
         2cee0:	e3350000 	teq	r5, #0	; 0x0
         2cee4:	1585a000 	strne	sl, [r5]
         2cee8:	e59b3010 	ldr	r3, [fp, #16]
         2ceec:	e3330000 	teq	r3, #0	; 0x0
         2cef0:	159b3010 	ldrne	r3, [fp, #16]
         2cef4:	15836000 	strne	r6, [r3]
         2cef8:	e59b0014 	ldr	r0, [fp, #20]
         2cefc:	e3300000 	teq	r0, #0	; 0x0
         2cf00:	159b0014 	ldrne	r0, [fp, #20]
         2cf04:	15807000 	strne	r7, [r0]
         2cf08:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: VppOn(int, unsigned char)
 * Address: 00050510
 */
VppOn(int, unsigned char) {
    /*
         50510:	e1a0c00d 	mov	ip, sp
         50514:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         50518:	e24cb004 	sub	fp, ip, #4	; 0x4
         5051c:	e1a04000 	mov	r4, r0
         50520:	e20170ff 	and	r7, r1, #255	; 0xff
         50524:	e3a05001 	mov	r5, #1	; 0x1
         50528:	e3a08001 	mov	r8, #1	; 0x1
         5052c:	e3700001 	cmn	r0, #1	; 0x1
         50530:	1a000002 	bne	50540 <VppOn(int, unsigned char)+0x30>
         50534:	eb6ba5e2 	bl	1b39cc4 <$InternalVppOn(void)>
         50538:	e1a00008 	mov	r0, r8
         5053c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         50540:	e1a01007 	mov	r1, r7
         50544:	e1a00004 	mov	r0, r4
         50548:	eb6e3662 	bl	1bdded8 <$VccOn(int, unsigned char)>
         5054c:	e59f6088 	ldr	r6, [pc, #88]	; 505dc <VppOn(int, unsigned char)+0xcc>
         50550:	e7960104 	ldr	r0, [r6, r4, lsl #2]
         50554:	e3a01000 	mov	r1, #0	; 0x0
         50558:	eb6df87d 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
         5055c:	e59f007c 	ldr	r0, [pc, #7c]	; 505e0 <VppOn(int, unsigned char)+0xd0>
         50560:	e3370000 	teq	r7, #0	; 0x0
         50564:	0a000003 	beq	50578 <VppOn(int, unsigned char)+0x68>
         50568:	e7901104 	ldr	r1, [r0, r4, lsl #2]
         5056c:	e3310000 	teq	r1, #0	; 0x0
         50570:	03a05000 	moveq	r5, #0	; 0x0
         50574:	0a000014 	beq	505cc <VppOn(int, unsigned char)+0xbc>
         50578:	e7901104 	ldr	r1, [r0, r4, lsl #2]
         5057c:	e2811001 	add	r1, r1, #1	; 0x1
         50580:	e7801104 	str	r1, [r0, r4, lsl #2]
         50584:	e59f7058 	ldr	r7, [pc, #58]	; 505e4 <VppOn(int, unsigned char)+0xd4>
         50588:	e7d70004 	ldrb	r0, [r7, r4]
         5058c:	e3300000 	teq	r0, #0	; 0x0
         50590:	1a00000d 	bne	505cc <VppOn(int, unsigned char)+0xbc>
         50594:	e59f904c 	ldr	r9, [pc, #4c]	; 505e8 <VppOn(int, unsigned char)+0xd8>
         50598:	e7990104 	ldr	r0, [r9, r4, lsl #2]
         5059c:	eb6e3a5e 	bl	1bdef1c <TCardSocket::$VppOn(void)>
         505a0:	e7c78004 	strb	r8, [r7, r4]
         505a4:	e7990104 	ldr	r0, [r9, r4, lsl #2]
         505a8:	eb6e3a5d 	bl	1bdef24 <TCardSocket::$VppRisingTime(void)>
         505ac:	e1a01000 	mov	r1, r0
         505b0:	e3a00d09 	mov	r0, #576	; 0x240
         505b4:	e280093d 	add	r0, r0, #999424	; 0xf4000
         505b8:	eb6d88e2 	bl	1bb2948 <$__rt_udiv>
         505bc:	e3a0c066 	mov	ip, #102	; 0x66
         505c0:	e28ccc0e 	add	ip, ip, #3584	; 0xe00
         505c4:	e000009c 	mul	r0, ip, r0
         505c8:	eb6e3217 	bl	1bdce2c <$Sleep(unsigned long)>
         505cc:	e7960104 	ldr	r0, [r6, r4, lsl #2]
         505d0:	eb6e25b0 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
         505d4:	e1a00005 	mov	r0, r5
         505d8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         505dc:	0c105f54 	ldceq	15, cr5, [r0], -#336
         505e0:	0c105f84 	ldceq	15, cr5, [r0], -#528
         505e4:	0c100988 	ldceq	9, cr0, [r0], -#544
         505e8:	0c105fd4 	ldceq	15, cr5, [r0], -#848
    */
}

/**
 * Symbol: VccIdleOff(unsigned long)
 * Address: 000505ec
 */
VccIdleOff(unsigned long) {
    /*
         505ec:	e1a0c00d 	mov	ip, sp
         505f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         505f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         505f8:	e1a04000 	mov	r4, r0
         505fc:	e59f5024 	ldr	r5, [pc, #24]	; 50628 <VccIdleOff(unsigned long)+0x3c>
         50600:	e7950100 	ldr	r0, [r5, r0, lsl #2]
         50604:	eb6e04a9 	bl	1bd18b0 <TCardSocket::$DisableBus(void)>
         50608:	e7950104 	ldr	r0, [r5, r4, lsl #2]
         5060c:	eb6e362d 	bl	1bddec8 <TCardSocket::$VccOff(void)>
         50610:	e59f0014 	ldr	r0, [pc, #14]	; 5062c <VccIdleOff(unsigned long)+0x40>
         50614:	e59000ec 	ldr	r0, [r0, #236]
         50618:	e3300000 	teq	r0, #0	; 0x0
         5061c:	1b6ba18c 	blne	1b38c54 <$VccOffNotify(void)>
         50620:	e3a00000 	mov	r0, #0	; 0x0
         50624:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         50628:	0c105fd4 	ldceq	15, cr5, [r0], -#848
         5062c:	0c100980 	ldceq	9, cr0, [r0], -#512
    */
}

/**
 * Symbol: VccOffNotify(void)
 * Address: 000509b0
 */
VccOffNotify(void) {
    /*
         509b0:	e1a0c00d 	mov	ip, sp
         509b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         509b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         509bc:	e59f0030 	ldr	r0, [pc, #30]	; 509f4 <VccOffNotify(void)+0x44>
         509c0:	e5900000 	ldr	r0, [r0]
         509c4:	e59f402c 	ldr	r4, [pc, #2c]	; 509f8 <VccOffNotify(void)+0x48>
         509c8:	e2505001 	subs	r5, r0, #1	; 0x1
         509cc:	491ba830 	ldmmidb	fp, {r4, r5, fp, sp, pc}
         509d0:	e5941000 	ldr	r1, [r4]
         509d4:	e3310000 	teq	r1, #0	; 0x0
         509d8:	15940004 	ldrne	r0, [r4, #4]
         509dc:	11a0e00f 	movne	lr, pc
         509e0:	11a0f001 	movne	pc, r1
         509e4:	e2844008 	add	r4, r4, #8	; 0x8
         509e8:	e2555001 	subs	r5, r5, #1	; 0x1
         509ec:	5afffff7 	bpl	509d0 <VccOffNotify(void)+0x20>
         509f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         509f4:	0c100ab4 	ldceq	10, cr0, [r0], -#720
         509f8:	0c105fa4 	ldceq	15, cr5, [r0], -#656
    */
}

/**
 * Symbol: VccOn(int, unsigned char)
 * Address: 00050a78
 */
VccOn(int, unsigned char) {
    /*
         50a78:	e1a0c00d 	mov	ip, sp
         50a7c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         50a80:	e24cb004 	sub	fp, ip, #4	; 0x4
         50a84:	e1a04000 	mov	r4, r0
         50a88:	e20150ff 	and	r5, r1, #255	; 0xff
         50a8c:	e3a06001 	mov	r6, #1	; 0x1
         50a90:	e59f80e8 	ldr	r8, [pc, #e8]	; 50b80 <VccOn(int, unsigned char)+0x108>
         50a94:	e7980100 	ldr	r0, [r8, r0, lsl #2]
         50a98:	e3a01000 	mov	r1, #0	; 0x0
         50a9c:	eb6df72c 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
         50aa0:	e59f00dc 	ldr	r0, [pc, #dc]	; 50b84 <VccOn(int, unsigned char)+0x10c>
         50aa4:	e3350000 	teq	r5, #0	; 0x0
         50aa8:	0a000003 	beq	50abc <VccOn(int, unsigned char)+0x44>
         50aac:	e7901104 	ldr	r1, [r0, r4, lsl #2]
         50ab0:	e3310000 	teq	r1, #0	; 0x0
         50ab4:	03a06000 	moveq	r6, #0	; 0x0
         50ab8:	0a00002c 	beq	50b70 <VccOn(int, unsigned char)+0xf8>
         50abc:	e7901104 	ldr	r1, [r0, r4, lsl #2]
         50ac0:	e2811001 	add	r1, r1, #1	; 0x1
         50ac4:	e7801104 	str	r1, [r0, r4, lsl #2]
         50ac8:	e59f70b8 	ldr	r7, [pc, #b8]	; 50b88 <VccOn(int, unsigned char)+0x110>
         50acc:	e7d70004 	ldrb	r0, [r7, r4]
         50ad0:	e3300000 	teq	r0, #0	; 0x0
         50ad4:	1a000025 	bne	50b70 <VccOn(int, unsigned char)+0xf8>
         50ad8:	e59f50ac 	ldr	r5, [pc, #ac]	; 50b8c <VccOn(int, unsigned char)+0x114>
         50adc:	e7950104 	ldr	r0, [r5, r4, lsl #2]
         50ae0:	eb6e34fb 	bl	1bdded4 <TCardSocket::$VccOn(void)>
         50ae4:	e1a02004 	mov	r2, r4
         50ae8:	e59f00a0 	ldr	r0, [pc, #a0]	; 50b90 <VccOn(int, unsigned char)+0x118>
         50aec:	e3a03000 	mov	r3, #0	; 0x0
         50af0:	e3a01050 	mov	r1, #80	; 0x50
         50af4:	eb6e181c 	bl	1bd6b6c <TCardMessage::$MessageStuff(unsigned long, unsigned long, unsigned long)>
         50af8:	e3a02000 	mov	r2, #0	; 0x0
         50afc:	e3a03000 	mov	r3, #0	; 0x0
         50b00:	e3a0c000 	mov	ip, #0	; 0x0
         50b04:	e3a01000 	mov	r1, #0	; 0x0
         50b08:	e3a00001 	mov	r0, #1	; 0x1
         50b0c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         50b10:	e1a0300c 	mov	r3, ip
         50b14:	e3a020b8 	mov	r2, #184	; 0xb8
         50b18:	e92d000c 	stmdb	sp!, {r2, r3}
         50b1c:	e59f0070 	ldr	r0, [pc, #70]	; 50b94 <VccOn(int, unsigned char)+0x11c>
         50b20:	e5901000 	ldr	r1, [r0]
         50b24:	e59f3064 	ldr	r3, [pc, #64]	; 50b90 <VccOn(int, unsigned char)+0x118>
         50b28:	e59f0068 	ldr	r0, [pc, #68]	; 50b98 <VccOn(int, unsigned char)+0x120>
         50b2c:	e3a02000 	mov	r2, #0	; 0x0
         50b30:	eb6e2884 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
         50b34:	e28dd018 	add	sp, sp, #24	; 0x18
         50b38:	e3a00001 	mov	r0, #1	; 0x1
         50b3c:	e7c70004 	strb	r0, [r7, r4]
         50b40:	e7950104 	ldr	r0, [r5, r4, lsl #2]
         50b44:	eb6e34e4 	bl	1bddedc <TCardSocket::$VccRisingTime(void)>
         50b48:	e1a01000 	mov	r1, r0
         50b4c:	e3a00d09 	mov	r0, #576	; 0x240
         50b50:	e280093d 	add	r0, r0, #999424	; 0xf4000
         50b54:	eb6d877b 	bl	1bb2948 <$__rt_udiv>
         50b58:	e3a0c066 	mov	ip, #102	; 0x66
         50b5c:	e28ccc0e 	add	ip, ip, #3584	; 0xe00
         50b60:	e000009c 	mul	r0, ip, r0
         50b64:	eb6e30b0 	bl	1bdce2c <$Sleep(unsigned long)>
         50b68:	e7950104 	ldr	r0, [r5, r4, lsl #2]
         50b6c:	eb6e0356 	bl	1bd18cc <TCardSocket::$EnableBus(void)>
         50b70:	e7980104 	ldr	r0, [r8, r4, lsl #2]
         50b74:	eb6e2447 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
         50b78:	e1a00006 	mov	r0, r6
         50b7c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         50b80:	0c105f54 	ldceq	15, cr5, [r0], -#336
         50b84:	0c105f64 	ldceq	15, cr5, [r0], -#400
         50b88:	0c100984 	ldceq	9, cr0, [r0], -#528
         50b8c:	0c105fd4 	ldceq	15, cr5, [r0], -#848
         50b90:	0c1009b4 	ldceq	9, cr0, [r0], -#720
         50b94:	0c1009a4 	ldceq	9, cr0, [r0], -#656
         50b98:	0c10099c 	ldceq	9, cr0, [r0], -#624
    */
}

/**
 * Symbol: VppOff(int)
 * Address: 00050c44
 */
VppOff(int) {
    /*
         50c44:	e3a018c2 	mov	r1, #12713984	; 0xc20000
         50c48:	e2811401 	add	r1, r1, #16777216	; 0x1000000
         50c4c:	ea6e38b1 	b	1bdef18 <$VppOff(int, unsigned long)>
    */
}

/**
 * Symbol: VppOff(int, unsigned long)
 * Address: 00050c50
 */
VppOff(int, unsigned long) {
    /*
         50c50:	e3700001 	cmn	r0, #1	; 0x1
         50c54:	0a6ba419 	beq	1b39cc0 <$InternalVppOff(void)>
         50c58:	e1a0c00d 	mov	ip, sp
         50c5c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         50c60:	e24cb004 	sub	fp, ip, #4	; 0x4
         50c64:	e1a04000 	mov	r4, r0
         50c68:	e1a05001 	mov	r5, r1
         50c6c:	eb6e3496 	bl	1bddecc <$VccOff(int)>
         50c70:	e59f608c 	ldr	r6, [pc, #8c]	; 50d04 <VppOff(int, unsigned long)+0xb4>
         50c74:	e7960104 	ldr	r0, [r6, r4, lsl #2]
         50c78:	e3a01000 	mov	r1, #0	; 0x0
         50c7c:	eb6df6b4 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
         50c80:	e59f3080 	ldr	r3, [pc, #80]	; 50d08 <VppOff(int, unsigned long)+0xb8>
         50c84:	e7d30004 	ldrb	r0, [r3, r4]
         50c88:	e3300001 	teq	r0, #1	; 0x1
         50c8c:	1a000019 	bne	50cf8 <VppOff(int, unsigned long)+0xa8>
         50c90:	e3a02000 	mov	r2, #0	; 0x0
         50c94:	e59f0070 	ldr	r0, [pc, #70]	; 50d0c <VppOff(int, unsigned long)+0xbc>
         50c98:	e59f1070 	ldr	r1, [pc, #70]	; 50d10 <VppOff(int, unsigned long)+0xc0>
         50c9c:	e3750005 	cmn	r5, #5	; 0x5
         50ca0:	07812104 	streq	r2, [r1, r4, lsl #2]
         50ca4:	07802104 	streq	r2, [r0, r4, lsl #2]
         50ca8:	0a00000e 	beq	50ce8 <VppOff(int, unsigned long)+0x98>
         50cac:	e3350000 	teq	r5, #0	; 0x0
         50cb0:	07802104 	streq	r2, [r0, r4, lsl #2]
         50cb4:	0a000002 	beq	50cc4 <VppOff(int, unsigned long)+0x74>
         50cb8:	e790c104 	ldr	ip, [r0, r4, lsl #2]
         50cbc:	e15c0005 	cmp	ip, r5
         50cc0:	37805104 	strcc	r5, [r0, r4, lsl #2]
         50cc4:	e791c104 	ldr	ip, [r1, r4, lsl #2]
         50cc8:	e35c0000 	cmp	ip, #0	; 0x0
         50ccc:	824cc001 	subhi	ip, ip, #1	; 0x1
         50cd0:	8781c104 	strhi	ip, [r1, r4, lsl #2]
         50cd4:	e7911104 	ldr	r1, [r1, r4, lsl #2]
         50cd8:	e3310000 	teq	r1, #0	; 0x0
         50cdc:	07900104 	ldreq	r0, [r0, r4, lsl #2]
         50ce0:	03300000 	teqeq	r0, #0	; 0x0
         50ce4:	1a000003 	bne	50cf8 <VppOff(int, unsigned long)+0xa8>
         50ce8:	e7c32004 	strb	r2, [r3, r4]
         50cec:	e59f0020 	ldr	r0, [pc, #20]	; 50d14 <VppOff(int, unsigned long)+0xc4>
         50cf0:	e7900104 	ldr	r0, [r0, r4, lsl #2]
         50cf4:	eb6e3885 	bl	1bdef10 <TCardSocket::$VppOff(void)>
         50cf8:	e7960104 	ldr	r0, [r6, r4, lsl #2]
         50cfc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         50d00:	ea6e23e4 	b	1bd9c98 <TULockingSemaphore::$Release(void)>
         50d04:	0c105f54 	ldceq	15, cr5, [r0], -#336
         50d08:	0c100988 	ldceq	9, cr0, [r0], -#544
         50d0c:	0c105f94 	ldceq	15, cr5, [r0], -#592
         50d10:	0c105f84 	ldceq	15, cr5, [r0], -#528
         50d14:	0c105fd4 	ldceq	15, cr5, [r0], -#848
    */
}

/**
 * Symbol: VccOff(int)
 * Address: 00050d18
 */
VccOff(int) {
    /*
         50d18:	e59f1004 	ldr	r1, [pc, #4]	; 50d24 <VccOff(int)+0xc>
         50d1c:	e59110f0 	ldr	r1, [r1, #240]
         50d20:	ea6e346a 	b	1bdded0 <$VccOff(int, unsigned long)>
         50d24:	0c100980 	ldceq	9, cr0, [r0], -#512
    */
}

/**
 * Symbol: VccOff(int, unsigned long)
 * Address: 00050d28
 */
VccOff(int, unsigned long) {
    /*
         50d28:	e1a0c00d 	mov	ip, sp
         50d2c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         50d30:	e24cb004 	sub	fp, ip, #4	; 0x4
         50d34:	e1a04000 	mov	r4, r0
         50d38:	e1a05001 	mov	r5, r1
         50d3c:	e59f90b4 	ldr	r9, [pc, #b4]	; 50df8 <VccOff(int, unsigned long)+0xd0>
         50d40:	e7990100 	ldr	r0, [r9, r0, lsl #2]
         50d44:	e3a01000 	mov	r1, #0	; 0x0
         50d48:	eb6df681 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
         50d4c:	e3a07000 	mov	r7, #0	; 0x0
         50d50:	e59f80a4 	ldr	r8, [pc, #a4]	; 50dfc <VccOff(int, unsigned long)+0xd4>
         50d54:	e7d80004 	ldrb	r0, [r8, r4]
         50d58:	e3300001 	teq	r0, #1	; 0x1
         50d5c:	1a00001c 	bne	50dd4 <VccOff(int, unsigned long)+0xac>
         50d60:	e3a06000 	mov	r6, #0	; 0x0
         50d64:	e59f0094 	ldr	r0, [pc, #94]	; 50e00 <VccOff(int, unsigned long)+0xd8>
         50d68:	e59f1094 	ldr	r1, [pc, #94]	; 50e04 <VccOff(int, unsigned long)+0xdc>
         50d6c:	e3750005 	cmn	r5, #5	; 0x5
         50d70:	07816104 	streq	r6, [r1, r4, lsl #2]
         50d74:	07806104 	streq	r6, [r0, r4, lsl #2]
         50d78:	0a00000e 	beq	50db8 <VccOff(int, unsigned long)+0x90>
         50d7c:	e3350000 	teq	r5, #0	; 0x0
         50d80:	07806104 	streq	r6, [r0, r4, lsl #2]
         50d84:	0a000002 	beq	50d94 <VccOff(int, unsigned long)+0x6c>
         50d88:	e7902104 	ldr	r2, [r0, r4, lsl #2]
         50d8c:	e1520005 	cmp	r2, r5
         50d90:	37805104 	strcc	r5, [r0, r4, lsl #2]
         50d94:	e7912104 	ldr	r2, [r1, r4, lsl #2]
         50d98:	e3520000 	cmp	r2, #0	; 0x0
         50d9c:	82422001 	subhi	r2, r2, #1	; 0x1
         50da0:	87812104 	strhi	r2, [r1, r4, lsl #2]
         50da4:	e7911104 	ldr	r1, [r1, r4, lsl #2]
         50da8:	e3310000 	teq	r1, #0	; 0x0
         50dac:	07900104 	ldreq	r0, [r0, r4, lsl #2]
         50db0:	03300000 	teqeq	r0, #0	; 0x0
         50db4:	1a000006 	bne	50dd4 <VccOff(int, unsigned long)+0xac>
         50db8:	e59f5048 	ldr	r5, [pc, #48]	; 50e08 <VccOff(int, unsigned long)+0xe0>
         50dbc:	e7950104 	ldr	r0, [r5, r4, lsl #2]
         50dc0:	eb6e02ba 	bl	1bd18b0 <TCardSocket::$DisableBus(void)>
         50dc4:	e7c86004 	strb	r6, [r8, r4]
         50dc8:	e7950104 	ldr	r0, [r5, r4, lsl #2]
         50dcc:	eb6e343d 	bl	1bddec8 <TCardSocket::$VccOff(void)>
         50dd0:	e3a07001 	mov	r7, #1	; 0x1
         50dd4:	e7990104 	ldr	r0, [r9, r4, lsl #2]
         50dd8:	eb6e23ae 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
         50ddc:	e3370000 	teq	r7, #0	; 0x0
         50de0:	159f0024 	ldrne	r0, [pc, #24]	; 50e0c <VccOff(int, unsigned long)+0xe4>
         50de4:	159000ec 	ldrne	r0, [r0, #236]
         50de8:	13300000 	teqne	r0, #0	; 0x0
         50dec:	191b6bf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         50df0:	1a6b9f97 	bne	1b38c54 <$VccOffNotify(void)>
         50df4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         50df8:	0c105f54 	ldceq	15, cr5, [r0], -#336
         50dfc:	0c100984 	ldceq	9, cr0, [r0], -#528
         50e00:	0c105f74 	ldceq	15, cr5, [r0], -#464
         50e04:	0c105f64 	ldceq	15, cr5, [r0], -#400
         50e08:	0c105fd4 	ldceq	15, cr5, [r0], -#848
         50e0c:	0c100980 	ldceq	9, cr0, [r0], -#512
    */
}

/**
 * Symbol: VppIdleOff(unsigned char)
 * Address: 00050e10
 */
VppIdleOff(unsigned char) {
    /*
         50e10:	e1a0c00d 	mov	ip, sp
         50e14:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         50e18:	e24cb004 	sub	fp, ip, #4	; 0x4
         50e1c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         50e20:	e200a0ff 	and	sl, r0, #255	; 0xff
         50e24:	e3a09000 	mov	r9, #0	; 0x0
         50e28:	e3a04000 	mov	r4, #0	; 0x0
         50e2c:	e59f0040 	ldr	r0, [pc, #40]	; 50e74 <VppIdleOff(unsigned char)+0x64>
         50e30:	e58d0008 	str	r0, [sp, #8]
         50e34:	e5900000 	ldr	r0, [r0]
         50e38:	e3500000 	cmp	r0, #0	; 0x0
         50e3c:	9a000036 	bls	50f1c <VppIdleOff(unsigned char)+0x10c>
         50e40:	e59f0030 	ldr	r0, [pc, #30]	; 50e78 <VppIdleOff(unsigned char)+0x68>
         50e44:	e58d0004 	str	r0, [sp, #4]
         50e48:	e59f802c 	ldr	r8, [pc, #2c]	; 50e7c <VppIdleOff(unsigned char)+0x6c>
         50e4c:	e59f702c 	ldr	r7, [pc, #2c]	; 50e80 <VppIdleOff(unsigned char)+0x70>
         50e50:	e59f602c 	ldr	r6, [pc, #2c]	; 50e84 <VppIdleOff(unsigned char)+0x74>
         50e54:	e59f002c 	ldr	r0, [pc, #2c]	; 50e88 <VppIdleOff(unsigned char)+0x78>
         50e58:	e58d0000 	str	r0, [sp]
         50e5c:	e59f5028 	ldr	r5, [pc, #28]	; 50e8c <VppIdleOff(unsigned char)+0x7c>
         50e60:	e33a0000 	teq	sl, #0	; 0x0
         50e64:	0a000009 	beq	50e90 <VppIdleOff(unsigned char)+0x80>
         50e68:	e7980104 	ldr	r0, [r8, r4, lsl #2]
         50e6c:	eb6e3827 	bl	1bdef10 <TCardSocket::$VppOff(void)>
         50e70:	ea000024 	b	50f08 <VppIdleOff(unsigned char)+0xf8>
         50e74:	0c100ab4 	ldceq	10, cr0, [r0], -#720
         50e78:	0c105f84 	ldceq	15, cr5, [r0], -#528
         50e7c:	0c105fd4 	ldceq	15, cr5, [r0], -#848
         50e80:	0c100988 	ldceq	9, cr0, [r0], -#544
         50e84:	0c105f54 	ldceq	15, cr5, [r0], -#336
         50e88:	0c100984 	ldceq	9, cr0, [r0], -#528
         50e8c:	0c105f94 	ldceq	15, cr5, [r0], -#592
         50e90:	e7960104 	ldr	r0, [r6, r4, lsl #2]
         50e94:	e3a01001 	mov	r1, #1	; 0x1
         50e98:	eb6df62d 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
         50e9c:	e3300000 	teq	r0, #0	; 0x0
         50ea0:	1a000014 	bne	50ef8 <VppIdleOff(unsigned char)+0xe8>
         50ea4:	e7d70004 	ldrb	r0, [r7, r4]
         50ea8:	e3300001 	teq	r0, #1	; 0x1
         50eac:	059d0004 	ldreq	r0, [sp, #4]
         50eb0:	07900104 	ldreq	r0, [r0, r4, lsl #2]
         50eb4:	03300000 	teqeq	r0, #0	; 0x0
         50eb8:	1a00000c 	bne	50ef0 <VppIdleOff(unsigned char)+0xe0>
         50ebc:	e7950104 	ldr	r0, [r5, r4, lsl #2]
         50ec0:	e250c607 	subs	ip, r0, #7340032	; 0x700000
         50ec4:	235c0902 	cmpcs	ip, #32768	; 0x8000
         50ec8:	2a000005 	bcs	50ee4 <VppIdleOff(unsigned char)+0xd4>
         50ecc:	e3a00000 	mov	r0, #0	; 0x0
         50ed0:	e7850104 	str	r0, [r5, r4, lsl #2]
         50ed4:	e7c70004 	strb	r0, [r7, r4]
         50ed8:	e7980104 	ldr	r0, [r8, r4, lsl #2]
         50edc:	eb6e380b 	bl	1bdef10 <TCardSocket::$VppOff(void)>
         50ee0:	ea000002 	b	50ef0 <VppIdleOff(unsigned char)+0xe0>
         50ee4:	e280093e 	add	r0, r0, #1015808	; 0xf8000
         50ee8:	e2400502 	sub	r0, r0, #8388608	; 0x800000
         50eec:	e7850104 	str	r0, [r5, r4, lsl #2]
         50ef0:	e7960104 	ldr	r0, [r6, r4, lsl #2]
         50ef4:	eb6e2367 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
         50ef8:	e59d0000 	ldr	r0, [sp]
         50efc:	e7d00004 	ldrb	r0, [r0, r4]
         50f00:	e3300001 	teq	r0, #1	; 0x1
         50f04:	03a09001 	moveq	r9, #1	; 0x1
         50f08:	e2844001 	add	r4, r4, #1	; 0x1
         50f0c:	e59d0008 	ldr	r0, [sp, #8]
         50f10:	e5900000 	ldr	r0, [r0]
         50f14:	e1540000 	cmp	r4, r0
         50f18:	3affffd0 	bcc	50e60 <VppIdleOff(unsigned char)+0x50>
         50f1c:	e1a00009 	mov	r0, r9
         50f20:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: VccIdleOff(unsigned char)
 * Address: 00050f24
 */
VccIdleOff(unsigned char) {
    /*
         50f24:	e1a0c00d 	mov	ip, sp
         50f28:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         50f2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         50f30:	e20000ff 	and	r0, r0, #255	; 0xff
         50f34:	e3a0a000 	mov	sl, #0	; 0x0
         50f38:	e3a09000 	mov	r9, #0	; 0x0
         50f3c:	e3a04000 	mov	r4, #0	; 0x0
         50f40:	e52d000c 	str	r0, [sp, -#12]!
         50f44:	e59f0044 	ldr	r0, [pc, #44]	; 50f90 <VccIdleOff(unsigned char)+0x6c>
         50f48:	e58d0008 	str	r0, [sp, #8]
         50f4c:	e5900000 	ldr	r0, [r0]
         50f50:	e3500000 	cmp	r0, #0	; 0x0
         50f54:	9a00003d 	bls	51050 <VccIdleOff(unsigned char)+0x12c>
         50f58:	e59f0034 	ldr	r0, [pc, #34]	; 50f94 <VccIdleOff(unsigned char)+0x70>
         50f5c:	e58d0004 	str	r0, [sp, #4]
         50f60:	e59f8030 	ldr	r8, [pc, #30]	; 50f98 <VccIdleOff(unsigned char)+0x74>
         50f64:	e59f7030 	ldr	r7, [pc, #30]	; 50f9c <VccIdleOff(unsigned char)+0x78>
         50f68:	e59f6030 	ldr	r6, [pc, #30]	; 50fa0 <VccIdleOff(unsigned char)+0x7c>
         50f6c:	e59f5030 	ldr	r5, [pc, #30]	; 50fa4 <VccIdleOff(unsigned char)+0x80>
         50f70:	e59d0000 	ldr	r0, [sp]
         50f74:	e3300000 	teq	r0, #0	; 0x0
         50f78:	0a00000a 	beq	50fa8 <VccIdleOff(unsigned char)+0x84>
         50f7c:	e7950104 	ldr	r0, [r5, r4, lsl #2]
         50f80:	eb6e024a 	bl	1bd18b0 <TCardSocket::$DisableBus(void)>
         50f84:	e7950104 	ldr	r0, [r5, r4, lsl #2]
         50f88:	eb6e33ce 	bl	1bddec8 <TCardSocket::$VccOff(void)>
         50f8c:	ea000022 	b	5101c <VccIdleOff(unsigned char)+0xf8>
         50f90:	0c100ab4 	ldceq	10, cr0, [r0], -#720
         50f94:	0c105f64 	ldceq	15, cr5, [r0], -#400
         50f98:	0c105f54 	ldceq	15, cr5, [r0], -#336
         50f9c:	0c100984 	ldceq	9, cr0, [r0], -#528
         50fa0:	0c105f74 	ldceq	15, cr5, [r0], -#464
         50fa4:	0c105fd4 	ldceq	15, cr5, [r0], -#848
         50fa8:	e7980104 	ldr	r0, [r8, r4, lsl #2]
         50fac:	e3a01001 	mov	r1, #1	; 0x1
         50fb0:	eb6df5e7 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
         50fb4:	e3300000 	teq	r0, #0	; 0x0
         50fb8:	1a000017 	bne	5101c <VccIdleOff(unsigned char)+0xf8>
         50fbc:	e7d70004 	ldrb	r0, [r7, r4]
         50fc0:	e3300001 	teq	r0, #1	; 0x1
         50fc4:	059d0004 	ldreq	r0, [sp, #4]
         50fc8:	07900104 	ldreq	r0, [r0, r4, lsl #2]
         50fcc:	03300000 	teqeq	r0, #0	; 0x0
         50fd0:	1a00000f 	bne	51014 <VccIdleOff(unsigned char)+0xf0>
         50fd4:	e7960104 	ldr	r0, [r6, r4, lsl #2]
         50fd8:	e250c607 	subs	ip, r0, #7340032	; 0x700000
         50fdc:	235c0902 	cmpcs	ip, #32768	; 0x8000
         50fe0:	2a000008 	bcs	51008 <VccIdleOff(unsigned char)+0xe4>
         50fe4:	e7950104 	ldr	r0, [r5, r4, lsl #2]
         50fe8:	eb6e0230 	bl	1bd18b0 <TCardSocket::$DisableBus(void)>
         50fec:	e3a00000 	mov	r0, #0	; 0x0
         50ff0:	e7860104 	str	r0, [r6, r4, lsl #2]
         50ff4:	e7c70004 	strb	r0, [r7, r4]
         50ff8:	e7950104 	ldr	r0, [r5, r4, lsl #2]
         50ffc:	eb6e33b1 	bl	1bddec8 <TCardSocket::$VccOff(void)>
         51000:	e3a09001 	mov	r9, #1	; 0x1
         51004:	ea000002 	b	51014 <VccIdleOff(unsigned char)+0xf0>
         51008:	e280093e 	add	r0, r0, #1015808	; 0xf8000
         5100c:	e2400502 	sub	r0, r0, #8388608	; 0x800000
         51010:	e7860104 	str	r0, [r6, r4, lsl #2]
         51014:	e7980104 	ldr	r0, [r8, r4, lsl #2]
         51018:	eb6e231e 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
         5101c:	e7d70004 	ldrb	r0, [r7, r4]
         51020:	e3300001 	teq	r0, #1	; 0x1
         51024:	03a0a001 	moveq	sl, #1	; 0x1
         51028:	e2844001 	add	r4, r4, #1	; 0x1
         5102c:	e59d0008 	ldr	r0, [sp, #8]
         51030:	e5900000 	ldr	r0, [r0]
         51034:	e1540000 	cmp	r4, r0
         51038:	3affffcc 	bcc	50f70 <VccIdleOff(unsigned char)+0x4c>
         5103c:	e3390000 	teq	r9, #0	; 0x0
         51040:	159f0010 	ldrne	r0, [pc, #10]	; 51058 <VccIdleOff(unsigned char)+0x134>
         51044:	159000ec 	ldrne	r0, [r0, #236]
         51048:	13300000 	teqne	r0, #0	; 0x0
         5104c:	1b6b9f00 	blne	1b38c54 <$VccOffNotify(void)>
         51050:	e1a0000a 	mov	r0, sl
         51054:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         51058:	0c100980 	ldceq	9, cr0, [r0], -#512
    */
}

/**
 * Symbol: ValidTextEditCaret(TUnitPublic *)
 * Address: 000ab490
 */
ValidTextEditCaret(TUnitPublic *) {
    /*
         ab490:	e1a0c00d 	mov	ip, sp
         ab494:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ab498:	e24cb004 	sub	fp, ip, #4	; 0x4
         ab49c:	e1a04000 	mov	r4, r0
         ab4a0:	eb678042 	bl	1a8b5b0 <TUnitPublic::$CaretType(void)>
         ab4a4:	e1a05000 	mov	r5, r0
         ab4a8:	e1a00004 	mov	r0, r4
         ab4ac:	eb67a977 	bl	1a95a90 <TUnitPublic::$GestureAngle(void)>
         ab4b0:	e1a01000 	mov	r1, r0
         ab4b4:	e3350002 	teq	r5, #2	; 0x2
         ab4b8:	13350003 	teqne	r5, #3	; 0x3
         ab4bc:	13350005 	teqne	r5, #5	; 0x5
         ab4c0:	13350006 	teqne	r5, #6	; 0x6
         ab4c4:	1a000015 	bne	ab520 <ValidTextEditCaret(TUnitPublic *)+0x90>
         ab4c8:	e3a00001 	mov	r0, #1	; 0x1
         ab4cc:	e3350002 	teq	r5, #2	; 0x2
         ab4d0:	0a000007 	beq	ab4f4 <ValidTextEditCaret(TUnitPublic *)+0x64>
         ab4d4:	e3350003 	teq	r5, #3	; 0x3
         ab4d8:	0a00000a 	beq	ab508 <ValidTextEditCaret(TUnitPublic *)+0x78>
         ab4dc:	e3350005 	teq	r5, #5	; 0x5
         ab4e0:	0a00000c 	beq	ab518 <ValidTextEditCaret(TUnitPublic *)+0x88>
         ab4e4:	e3350006 	teq	r5, #6	; 0x6
         ab4e8:	03310087 	teqeq	r1, #135	; 0x87
         ab4ec:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         ab4f0:	ea00000a 	b	ab520 <ValidTextEditCaret(TUnitPublic *)+0x90>
         ab4f4:	e3310000 	teq	r1, #0	; 0x0
         ab4f8:	1331005a 	teqne	r1, #90	; 0x5a
         ab4fc:	133100b4 	teqne	r1, #180	; 0xb4
         ab500:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         ab504:	ea000005 	b	ab520 <ValidTextEditCaret(TUnitPublic *)+0x90>
         ab508:	e3310000 	teq	r1, #0	; 0x0
         ab50c:	1331005a 	teqne	r1, #90	; 0x5a
         ab510:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         ab514:	ea000001 	b	ab520 <ValidTextEditCaret(TUnitPublic *)+0x90>
         ab518:	e3310000 	teq	r1, #0	; 0x0
         ab51c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         ab520:	e3a00000 	mov	r0, #0	; 0x0
         ab524:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ValidLineGesture(TUnitPublic *)
 * Address: 000ab6dc
 */
ValidLineGesture(TUnitPublic *) {
    /*
         ab6dc:	e1a0c00d 	mov	ip, sp
         ab6e0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         ab6e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         ab6e8:	eb67a8e8 	bl	1a95a90 <TUnitPublic::$GestureAngle(void)>
         ab6ec:	e3300000 	teq	r0, #0	; 0x0
         ab6f0:	133000b4 	teqne	r0, #180	; 0xb4
         ab6f4:	1330005a 	teqne	r0, #90	; 0x5a
         ab6f8:	1370005a 	cmnne	r0, #90	; 0x5a
         ab6fc:	03a00001 	moveq	r0, #1	; 0x1
         ab700:	13a00000 	movne	r0, #0	; 0x0
         ab704:	e20000ff 	and	r0, r0, #255	; 0xff
         ab708:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ValidFixedRect
 * Address: 000bda98
 */
void globals::ValidFixedRect() {
    /*
         bda98:	e5901004 	ldr	r1, [r0, #4]
         bda9c:	e590200c 	ldr	r2, [r0, #12]
         bdaa0:	e1510002 	cmp	r1, r2
         bdaa4:	ca000004 	bgt	bdabc <ValidFixedRect+0x24>
         bdaa8:	e5901008 	ldr	r1, [r0, #8]
         bdaac:	e5900000 	ldr	r0, [r0]
         bdab0:	e1510000 	cmp	r1, r0
         bdab4:	a3a00001 	movge	r0, #1	; 0x1
         bdab8:	aa000000 	bge	bdac0 <ValidFixedRect+0x28>
         bdabc:	e3a00000 	mov	r0, #0	; 0x0
         bdac0:	e20000ff 	and	r0, r0, #255	; 0xff
         bdac4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: VccOffXIPNotify(void *)
 * Address: 000caafc
 */
VccOffXIPNotify(void *) {
    /*
         caafc:	e1a0c00d 	mov	ip, sp
         cab00:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         cab04:	e24cb004 	sub	fp, ip, #4	; 0x4
         cab08:	e1a04000 	mov	r4, r0
         cab0c:	e5900000 	ldr	r0, [r0]
         cab10:	eb6927c5 	bl	1b14a2c <$XIPInvalidateStore(TStore *)>
         cab14:	e2840004 	add	r0, r4, #4	; 0x4
         cab18:	eb6c23ae 	bl	1bd39d8 <$GetGlobalTime>
         cab1c:	e5d4000c 	ldrb	r0, [r4, #12]
         cab20:	e3300000 	teq	r0, #0	; 0x0
         cab24:	03a00001 	moveq	r0, #1	; 0x1
         cab28:	05c4000c 	streqb	r0, [r4, #12]
         cab2c:	13a01000 	movne	r1, #0	; 0x0
         cab30:	15b40010 	ldrne	r0, [r4, #16]!
         cab34:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         cab38:	1a6cd969 	bne	1c010e4 <$SetVccTimeout(int, unsigned long)>
         cab3c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: VToP(unsigned long)
 * Address: 000d96d0
 */
VToP(unsigned long) {
    /*
         d96d0:	e1a0c00d 	mov	ip, sp
         d96d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d96d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         d96dc:	e1a04000 	mov	r4, r0
         d96e0:	eb0aeb4a 	bl	394410 <IsSuperMode>
         d96e4:	e3300000 	teq	r0, #0	; 0x0
         d96e8:	01a01004 	moveq	r1, r4
         d96ec:	03a0002a 	moveq	r0, #42	; 0x2a
         d96f0:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         d96f4:	0a0b529e 	beq	3ae174 <GenericSWI>
         d96f8:	11a00004 	movne	r0, r4
         d96fc:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         d9700:	1a020970 	bne	15bcc8 <PrimVToP(unsigned long)>
    */
}

/**
 * Symbol: VAddrToStore(TStore **, unsigned long *, unsigned long)
 * Address: 001031ec
 */
VAddrToStore(TStore **, unsigned long *, unsigned long) {
    /*
        1031ec:	e1a0c00d 	mov	ip, sp
        1031f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1031f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1031f8:	e1a05000 	mov	r5, r0
        1031fc:	e1a04001 	mov	r4, r1
        103200:	e1a06002 	mov	r6, r2
        103204:	e24dd024 	sub	sp, sp, #36	; 0x24
        103208:	e28d0008 	add	r0, sp, #8	; 0x8
        10320c:	eb684e46 	bl	1b16b2c <RDMParams::$__ct(void)>
        103210:	eb684e4a 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        103214:	e3a01000 	mov	r1, #0	; 0x0
        103218:	e5cd1004 	strb	r1, [sp, #4]
        10321c:	e5900000 	ldr	r0, [r0]
        103220:	e58d0000 	str	r0, [sp]
        103224:	e58d6010 	str	r6, [sp, #16]
        103228:	e28d2008 	add	r2, sp, #8	; 0x8
        10322c:	e3a0100d 	mov	r1, #13	; 0xd
        103230:	eb0aac3a 	bl	3ae320 <MonitorDispatchSWI>
        103234:	e59d1008 	ldr	r1, [sp, #8]
        103238:	e5851000 	str	r1, [r5]
        10323c:	e59d100c 	ldr	r1, [sp, #12]
        103240:	e5841000 	str	r1, [r4]
        103244:	e1a04000 	mov	r4, r0
        103248:	e1a0000d 	mov	r0, sp
        10324c:	e3a01000 	mov	r1, #0	; 0x0
        103250:	eb6b2d36 	bl	1bce730 <TUMonitor::$__dt(void)>
        103254:	e1a00004 	mov	r0, r4
        103258:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: VAddrToId(unsigned long *, unsigned long)
 * Address: 00103a04
 */
VAddrToId(unsigned long *, unsigned long) {
    /*
        103a04:	e1a0c00d 	mov	ip, sp
        103a08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        103a0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        103a10:	e1a04000 	mov	r4, r0
        103a14:	e1a05001 	mov	r5, r1
        103a18:	e24dd024 	sub	sp, sp, #36	; 0x24
        103a1c:	e28d0008 	add	r0, sp, #8	; 0x8
        103a20:	eb684c41 	bl	1b16b2c <RDMParams::$__ct(void)>
        103a24:	eb684c45 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        103a28:	e3a01000 	mov	r1, #0	; 0x0
        103a2c:	e5cd1004 	strb	r1, [sp, #4]
        103a30:	e5900000 	ldr	r0, [r0]
        103a34:	e58d0000 	str	r0, [sp]
        103a38:	e58d5010 	str	r5, [sp, #16]
        103a3c:	e28d2008 	add	r2, sp, #8	; 0x8
        103a40:	e3a0100f 	mov	r1, #15	; 0xf
        103a44:	eb0aaa35 	bl	3ae320 <MonitorDispatchSWI>
        103a48:	e3300000 	teq	r0, #0	; 0x0
        103a4c:	059d1014 	ldreq	r1, [sp, #20]
        103a50:	13a01000 	movne	r1, #0	; 0x0
        103a54:	e5841000 	str	r1, [r4]
        103a58:	e1a04000 	mov	r4, r0
        103a5c:	e1a0000d 	mov	r0, sp
        103a60:	e3a01000 	mov	r1, #0	; 0x0
        103a64:	eb6b2b31 	bl	1bce730 <TUMonitor::$__dt(void)>
        103a68:	e1a00004 	mov	r0, r4
        103a6c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: VAddrToBase(unsigned long *, unsigned long)
 * Address: 00103a70
 */
VAddrToBase(unsigned long *, unsigned long) {
    /*
        103a70:	e1a0c00d 	mov	ip, sp
        103a74:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        103a78:	e24cb004 	sub	fp, ip, #4	; 0x4
        103a7c:	e1a04000 	mov	r4, r0
        103a80:	e1a05001 	mov	r5, r1
        103a84:	e24dd024 	sub	sp, sp, #36	; 0x24
        103a88:	e28d0008 	add	r0, sp, #8	; 0x8
        103a8c:	eb684c26 	bl	1b16b2c <RDMParams::$__ct(void)>
        103a90:	eb684c2a 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        103a94:	e3a01000 	mov	r1, #0	; 0x0
        103a98:	e5cd1004 	strb	r1, [sp, #4]
        103a9c:	e5900000 	ldr	r0, [r0]
        103aa0:	e58d0000 	str	r0, [sp]
        103aa4:	e58d5010 	str	r5, [sp, #16]
        103aa8:	e28d2008 	add	r2, sp, #8	; 0x8
        103aac:	e3a0100f 	mov	r1, #15	; 0xf
        103ab0:	eb0aaa1a 	bl	3ae320 <MonitorDispatchSWI>
        103ab4:	e3300000 	teq	r0, #0	; 0x0
        103ab8:	059d1010 	ldreq	r1, [sp, #16]
        103abc:	13a01000 	movne	r1, #0	; 0x0
        103ac0:	e5841000 	str	r1, [r4]
        103ac4:	e1a04000 	mov	r4, r0
        103ac8:	e1a0000d 	mov	r0, sp
        103acc:	e3a01000 	mov	r1, #0	; 0x0
        103ad0:	eb6b2b16 	bl	1bce730 <TUMonitor::$__dt(void)>
        103ad4:	e1a00004 	mov	r0, r4
        103ad8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: VisibleTopicIndex(RefVar const &, long)
 * Address: 00112b64
 */
VisibleTopicIndex(RefVar const &, long) {
    /*
        112b64:	e1a0c00d 	mov	ip, sp
        112b68:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        112b6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        112b70:	e1a05000 	mov	r5, r0
        112b74:	e1a04001 	mov	r4, r1
        112b78:	e59f10a0 	ldr	r1, [pc, #a0]	; 112c20 <VisibleTopicIndex(RefVar const &, long)+0xbc>
        112b7c:	e3a03000 	mov	r3, #0	; 0x0
        112b80:	e3a02000 	mov	r2, #0	; 0x0
        112b84:	eb6ac5ba 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        112b88:	eb6abd6f 	bl	1bc214c <$AllocateRefHandle(long)>
        112b8c:	e1a08000 	mov	r8, r0
        112b90:	e3e06000 	mvn	r6, #0	; 0x0
        112b94:	e3a07000 	mov	r7, #0	; 0x0
        112b98:	e3540000 	cmp	r4, #0	; 0x0
        112b9c:	ba000011 	blt	112be8 <VisibleTopicIndex(RefVar const &, long)+0x84>
        112ba0:	e24dd004 	sub	sp, sp, #4	; 0x4
        112ba4:	e1a01007 	mov	r1, r7
        112ba8:	e5980000 	ldr	r0, [r8]
        112bac:	eb6ac5a8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        112bb0:	eb6abd65 	bl	1bc214c <$AllocateRefHandle(long)>
        112bb4:	e58d0000 	str	r0, [sp]
        112bb8:	e1a0000d 	mov	r0, sp
        112bbc:	eb66e69b 	bl	1acc630 <$TopicVisible(RefVar const &)>
        112bc0:	e1b09000 	movs	r9, r0
        112bc4:	13a09001 	movne	r9, #1	; 0x1
        112bc8:	e59d0000 	ldr	r0, [sp]
        112bcc:	eb6ac17a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112bd0:	e3390000 	teq	r9, #0	; 0x0
        112bd4:	12866001 	addne	r6, r6, #1	; 0x1
        112bd8:	e28dd004 	add	sp, sp, #4	; 0x4
        112bdc:	e2877001 	add	r7, r7, #1	; 0x1
        112be0:	e1570004 	cmp	r7, r4
        112be4:	daffffed 	ble	112ba0 <VisibleTopicIndex(RefVar const &, long)+0x3c>
        112be8:	e59f1034 	ldr	r1, [pc, #34]	; 112c24 <VisibleTopicIndex(RefVar const &, long)+0xc0>
        112bec:	e1a00005 	mov	r0, r5
        112bf0:	e3a03000 	mov	r3, #0	; 0x0
        112bf4:	e3a02000 	mov	r2, #0	; 0x0
        112bf8:	eb6ac59d 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        112bfc:	e3100003 	tst	r0, #3	; 0x3
        112c00:	01a00140 	moveq	r0, r0, asr #2
        112c04:	0a000000 	beq	112c0c <VisibleTopicIndex(RefVar const &, long)+0xa8>
        112c08:	eb6abd43 	bl	1bc211c <$_RINTError(long)>
        112c0c:	e0464000 	sub	r4, r6, r0
        112c10:	e1a00008 	mov	r0, r8
        112c14:	eb6ac168 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112c18:	e1a00004 	mov	r0, r4
        112c1c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        112c20:	00684bf0 	streqd	r4, [r8], -#176
        112c24:	00682dd0 	ldreqd	r2, [r8], -#208
    */
}

/**
 * Symbol: VerifyPhysMappingParams__FUlN41
 * Address: 0011c240
 */
void globals::VerifyPhysMappingParams() {
    /*
        11c240:	e1a0c00d 	mov	ip, sp
        11c244:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        11c248:	e24cb004 	sub	fp, ip, #4	; 0x4
        11c24c:	e1a06000 	mov	r6, r0
        11c250:	e1a05001 	mov	r5, r1
        11c254:	e1a04003 	mov	r4, r3
        11c258:	e59b7004 	ldr	r7, [fp, #4]
        11c25c:	e24dd004 	sub	sp, sp, #4	; 0x4
        11c260:	e1a0100d 	mov	r1, sp
        11c264:	e1a00002 	mov	r0, r2
        11c268:	eb6ae1ea 	bl	1bd4a18 <$GetPhys(unsigned long, TPhys *&)>
        11c26c:	e3300000 	teq	r0, #0	; 0x0
        11c270:	03a000e1 	moveq	r0, #225	; 0xe1
        11c274:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        11c278:	0a000017 	beq	11c2dc <VerifyPhysMappingParams__FUlN41+0x9c>
        11c27c:	e59d0000 	ldr	r0, [sp]
        11c280:	e5901010 	ldr	r1, [r0, #16]
        11c284:	e3110c02 	tst	r1, #512	; 0x200
        11c288:	05900014 	ldreq	r0, [r0, #20]
        11c28c:	120100ff 	andne	r0, r1, #255	; 0xff
        11c290:	11a00600 	movne	r0, r0, lsl #12
        11c294:	e0871004 	add	r1, r7, r4
        11c298:	e3a080ea 	mov	r8, #234	; 0xea
        11c29c:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        11c2a0:	e1510000 	cmp	r1, r0
        11c2a4:	9a000001 	bls	11c2b0 <VerifyPhysMappingParams__FUlN41+0x70>
        11c2a8:	e1a00008 	mov	r0, r8
        11c2ac:	ea00000a 	b	11c2dc <VerifyPhysMappingParams__FUlN41+0x9c>
        11c2b0:	e3370000 	teq	r7, #0	; 0x0
        11c2b4:	11a01007 	movne	r1, r7
        11c2b8:	01a01000 	moveq	r1, r0
        11c2bc:	e0850004 	add	r0, r5, r4
        11c2c0:	eb6761e0 	bl	1af4a48 <$CheckVAddrRange__FUlT1>
        11c2c4:	e3500000 	cmp	r0, #0	; 0x0
        11c2c8:	3afffff6 	bcc	11c2a8 <VerifyPhysMappingParams__FUlN41+0x68>
        11c2cc:	eb67767f 	bl	1af9cd0 <$GetDomainFromDomainNumber>
        11c2d0:	e1300006 	teq	r0, r6
        11c2d4:	1afffff3 	bne	11c2a8 <VerifyPhysMappingParams__FUlN41+0x68>
        11c2d8:	e3a00000 	mov	r0, #0	; 0x0
        11c2dc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: VoidStarToHeap
 * Address: 00142d98
 */
void globals::VoidStarToHeap() {
    /*
        142d98:	e2800010 	add	r0, r0, #16	; 0x10
        142d9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: VersionString(TGestaltSystemInfo *, unsigned short *)
 * Address: 00146cb8
 */
VersionString(TGestaltSystemInfo *, unsigned short *) {
    /*
        146cb8:	e1a0c00d 	mov	ip, sp
        146cbc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        146cc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        146cc4:	e1a04001 	mov	r4, r1
        146cc8:	e5901008 	ldr	r1, [r0, #8]
        146ccc:	e241c802 	sub	ip, r1, #131072	; 0x20000
        146cd0:	e33c0002 	teq	ip, #2	; 0x2
        146cd4:	0590100c 	ldreq	r1, [r0, #12]
        146cd8:	03310902 	teqeq	r1, #32768	; 0x8000
        146cdc:	1a000005 	bne	146cf8 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x40>
        146ce0:	e1a01004 	mov	r1, r4
        146ce4:	e28f0f1c 	add	r0, pc, #112	; 0x70
        146ce8:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        146cec:	e3a02001 	mov	r2, #1	; 0x1
        146cf0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        146cf4:	ea6a81a2 	b	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        146cf8:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        146cfc:	e3a02000 	mov	r2, #0	; 0x0
        146d00:	e3a01000 	mov	r1, #0	; 0x0
        146d04:	e1a03101 	mov	r3, r1, lsl #2
        146d08:	e590c008 	ldr	ip, [r0, #8]
        146d0c:	e1a0333c 	mov	r3, ip, lsr r3
        146d10:	e203c00f 	and	ip, r3, #15	; 0xf
        146d14:	e78dc101 	str	ip, [sp, r1, lsl #2]
        146d18:	e2811001 	add	r1, r1, #1	; 0x1
        146d1c:	e3510007 	cmp	r1, #7	; 0x7
        146d20:	bafffff7 	blt	146d04 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x4c>
        146d24:	e59d1018 	ldr	r1, [sp, #24]
        146d28:	e3310000 	teq	r1, #0	; 0x0
        146d2c:	0a00000e 	beq	146d6c <VersionString(TGestaltSystemInfo *, unsigned short *)+0xb4>
        146d30:	e59d1018 	ldr	r1, [sp, #24]
        146d34:	e2811030 	add	r1, r1, #48	; 0x30
        146d38:	e2823001 	add	r3, r2, #1	; 0x1
        146d3c:	e0842082 	add	r2, r4, r2, lsl #1
        146d40:	e5c21001 	strb	r1, [r2, #1]
        146d44:	e1a01441 	mov	r1, r1, asr #8
        146d48:	e5c21000 	strb	r1, [r2]
        146d4c:	e59d1014 	ldr	r1, [sp, #20]
        146d50:	e2811030 	add	r1, r1, #48	; 0x30
        146d54:	e1a02003 	mov	r2, r3
        146d58:	ea000008 	b	146d80 <VersionString(TGestaltSystemInfo *, unsigned short *)+0xc8>
        146d5c:	322e3120 	eorcc	r3, lr, #8	; 0x8
        146d60:	28373137 	ldmcsda	r7!, {r0, r1, r2, r4, r5, r8, ip, sp}
        146d64:	30303629 	eorccs	r3, r0, r9, lsr #12
        146d68:	00000000 	andeq	r0, r0, r0
        146d6c:	e59d1014 	ldr	r1, [sp, #20]
        146d70:	e3310000 	teq	r1, #0	; 0x0
        146d74:	0a00000e 	beq	146db4 <VersionString(TGestaltSystemInfo *, unsigned short *)+0xfc>
        146d78:	e59d1014 	ldr	r1, [sp, #20]
        146d7c:	e2811030 	add	r1, r1, #48	; 0x30
        146d80:	e2823001 	add	r3, r2, #1	; 0x1
        146d84:	e0842082 	add	r2, r4, r2, lsl #1
        146d88:	e5c21001 	strb	r1, [r2, #1]
        146d8c:	e1a01441 	mov	r1, r1, asr #8
        146d90:	e5c21000 	strb	r1, [r2]
        146d94:	e59d1010 	ldr	r1, [sp, #16]
        146d98:	e2812030 	add	r2, r1, #48	; 0x30
        146d9c:	e2831001 	add	r1, r3, #1	; 0x1
        146da0:	e0843083 	add	r3, r4, r3, lsl #1
        146da4:	e5c32001 	strb	r2, [r3, #1]
        146da8:	e1a02442 	mov	r2, r2, asr #8
        146dac:	e5c32000 	strb	r2, [r3]
        146db0:	ea000006 	b	146dd0 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x118>
        146db4:	e59d1010 	ldr	r1, [sp, #16]
        146db8:	e2813030 	add	r3, r1, #48	; 0x30
        146dbc:	e2821001 	add	r1, r2, #1	; 0x1
        146dc0:	e0842082 	add	r2, r4, r2, lsl #1
        146dc4:	e5c23001 	strb	r3, [r2, #1]
        146dc8:	e1a03443 	mov	r3, r3, asr #8
        146dcc:	e5c23000 	strb	r3, [r2]
        146dd0:	e5902008 	ldr	r2, [r0, #8]
        146dd4:	e1b02802 	movs	r2, r2, lsl #16
        146dd8:	e3a0302e 	mov	r3, #46	; 0x2e
        146ddc:	e3a05000 	mov	r5, #0	; 0x0
        146de0:	0a00001b 	beq	146e54 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x19c>
        146de4:	e1a02001 	mov	r2, r1
        146de8:	e2811001 	add	r1, r1, #1	; 0x1
        146dec:	e0842082 	add	r2, r4, r2, lsl #1
        146df0:	e5c23001 	strb	r3, [r2, #1]
        146df4:	e5c25000 	strb	r5, [r2]
        146df8:	e59d200c 	ldr	r2, [sp, #12]
        146dfc:	e3320000 	teq	r2, #0	; 0x0
        146e00:	13a02003 	movne	r2, #3	; 0x3
        146e04:	1a000006 	bne	146e24 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x16c>
        146e08:	e59d2008 	ldr	r2, [sp, #8]
        146e0c:	e3320000 	teq	r2, #0	; 0x0
        146e10:	13a02002 	movne	r2, #2	; 0x2
        146e14:	1a000002 	bne	146e24 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x16c>
        146e18:	e59d2004 	ldr	r2, [sp, #4]
        146e1c:	e3320000 	teq	r2, #0	; 0x0
        146e20:	13a02001 	movne	r2, #1	; 0x1
        146e24:	e3520000 	cmp	r2, #0	; 0x0
        146e28:	ba000009 	blt	146e54 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x19c>
        146e2c:	e79dc102 	ldr	ip, [sp, r2, lsl #2]
        146e30:	e28ce030 	add	lr, ip, #48	; 0x30
        146e34:	e1a0c001 	mov	ip, r1
        146e38:	e2811001 	add	r1, r1, #1	; 0x1
        146e3c:	e084c08c 	add	ip, r4, ip, lsl #1
        146e40:	e5cce001 	strb	lr, [ip, #1]
        146e44:	e1a0e44e 	mov	lr, lr, asr #8
        146e48:	e5cce000 	strb	lr, [ip]
        146e4c:	e2522001 	subs	r2, r2, #1	; 0x1
        146e50:	5afffff5 	bpl	146e2c <VersionString(TGestaltSystemInfo *, unsigned short *)+0x174>
        146e54:	e3a020ff 	mov	r2, #255	; 0xff
        146e58:	e590c00c 	ldr	ip, [r0, #12]
        146e5c:	e002242c 	and	r2, r2, ip, lsr #8
        146e60:	e3320080 	teq	r2, #128	; 0x80
        146e64:	0a00002c 	beq	146f1c <VersionString(TGestaltSystemInfo *, unsigned short *)+0x264>
        146e68:	e3320000 	teq	r2, #0	; 0x0
        146e6c:	0a00000a 	beq	146e9c <VersionString(TGestaltSystemInfo *, unsigned short *)+0x1e4>
        146e70:	e3320020 	teq	r2, #32	; 0x20
        146e74:	03a0c064 	moveq	ip, #100	; 0x64
        146e78:	0a000005 	beq	146e94 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x1dc>
        146e7c:	e3320040 	teq	r2, #64	; 0x40
        146e80:	03a0c061 	moveq	ip, #97	; 0x61
        146e84:	0a000002 	beq	146e94 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x1dc>
        146e88:	e3320060 	teq	r2, #96	; 0x60
        146e8c:	1a00000c 	bne	146ec4 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x20c>
        146e90:	e3a0c062 	mov	ip, #98	; 0x62
        146e94:	e1a02001 	mov	r2, r1
        146e98:	ea000005 	b	146eb4 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x1fc>
        146e9c:	e3a0c041 	mov	ip, #65	; 0x41
        146ea0:	e2812001 	add	r2, r1, #1	; 0x1
        146ea4:	e0841081 	add	r1, r4, r1, lsl #1
        146ea8:	e5c1c001 	strb	ip, [r1, #1]
        146eac:	e5c15000 	strb	r5, [r1]
        146eb0:	e3a0c053 	mov	ip, #83	; 0x53
        146eb4:	e2821001 	add	r1, r2, #1	; 0x1
        146eb8:	e0842082 	add	r2, r4, r2, lsl #1
        146ebc:	e5c2c001 	strb	ip, [r2, #1]
        146ec0:	e5c25000 	strb	r5, [r2]
        146ec4:	e590200c 	ldr	r2, [r0, #12]
        146ec8:	e31200ff 	tst	r2, #255	; 0xff
        146ecc:	0a000012 	beq	146f1c <VersionString(TGestaltSystemInfo *, unsigned short *)+0x264>
        146ed0:	e3a0c00f 	mov	ip, #15	; 0xf
        146ed4:	e01c2222 	ands	r2, ip, r2, lsr #4
        146ed8:	0a000006 	beq	146ef8 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x240>
        146edc:	e2822030 	add	r2, r2, #48	; 0x30
        146ee0:	e1a0c001 	mov	ip, r1
        146ee4:	e2811001 	add	r1, r1, #1	; 0x1
        146ee8:	e084c08c 	add	ip, r4, ip, lsl #1
        146eec:	e5cc2001 	strb	r2, [ip, #1]
        146ef0:	e1a02422 	mov	r2, r2, lsr #8
        146ef4:	e5cc2000 	strb	r2, [ip]
        146ef8:	e590200c 	ldr	r2, [r0, #12]
        146efc:	e202200f 	and	r2, r2, #15	; 0xf
        146f00:	e2822030 	add	r2, r2, #48	; 0x30
        146f04:	e1a0c001 	mov	ip, r1
        146f08:	e2811001 	add	r1, r1, #1	; 0x1
        146f0c:	e084c08c 	add	ip, r4, ip, lsl #1
        146f10:	e5cc2001 	strb	r2, [ip, #1]
        146f14:	e1a02442 	mov	r2, r2, asr #8
        146f18:	e5cc2000 	strb	r2, [ip]
        146f1c:	e2816001 	add	r6, r1, #1	; 0x1
        146f20:	e0841081 	add	r1, r4, r1, lsl #1
        146f24:	e5c13001 	strb	r3, [r1, #1]
        146f28:	e5c15000 	strb	r5, [r1]
        146f2c:	e590001c 	ldr	r0, [r0, #28]
        146f30:	e3500063 	cmp	r0, #99	; 0x63
        146f34:	c3a00063 	movgt	r0, #99	; 0x63
        146f38:	eb69ae81 	bl	1bb2944 <$__rt_sdiv10>
        146f3c:	e2802030 	add	r2, r0, #48	; 0x30
        146f40:	e2860001 	add	r0, r6, #1	; 0x1
        146f44:	e0843086 	add	r3, r4, r6, lsl #1
        146f48:	e5c32001 	strb	r2, [r3, #1]
        146f4c:	e1a02422 	mov	r2, r2, lsr #8
        146f50:	e5c32000 	strb	r2, [r3]
        146f54:	e2811030 	add	r1, r1, #48	; 0x30
        146f58:	e2802001 	add	r2, r0, #1	; 0x1
        146f5c:	e0840080 	add	r0, r4, r0, lsl #1
        146f60:	e5c01001 	strb	r1, [r0, #1]
        146f64:	e1a01421 	mov	r1, r1, lsr #8
        146f68:	e5c01000 	strb	r1, [r0]
        146f6c:	e0840082 	add	r0, r4, r2, lsl #1
        146f70:	e5c05001 	strb	r5, [r0, #1]
        146f74:	e5c05000 	strb	r5, [r0]
        146f78:	e28f1f09 	add	r1, pc, #36	; 0x24
        146f7c:	e28f0f0d 	add	r0, pc, #52	; 0x34
        146f80:	eb6a4301 	bl	1bd7b8c <$NewByName__FPCcT1>
        146f84:	e1b05000 	movs	r5, r0
        146f88:	0a000004 	beq	146fa0 <VersionString(TGestaltSystemInfo *, unsigned short *)+0x2e8>
        146f8c:	e1a01004 	mov	r1, r4
        146f90:	e1a00005 	mov	r0, r5
        146f94:	eb65f08a 	bl	1ac31c4 <TVersionString::$VersionString(unsigned short *)>
        146f98:	e1a00005 	mov	r0, r5
        146f9c:	eb65e3fd 	bl	1abff98 <TVersionString::$Delete(void)>
        146fa0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        146fa4:	544d6169 	strplb	r6, [sp], -#361
        146fa8:	6e566572 	mrcvs	5, 2, r6, cr6, cr2, {3}
        146fac:	73696f6e 	cmnvc	r9, #440	; 0x1b8
        146fb0:	53747269 	cmnpl	r4, #-1879048186	; 0x90000006
        146fb4:	6e670000 	cdpvs	0, 6, cr0, cr7, cr0, {0}
        146fb8:	54566572 	ldrplb	r6, [r6], -#1394
        146fbc:	73696f6e 	cmnvc	r9, #440	; 0x1b8
        146fc0:	53747269 	cmnpl	r4, #-1879048186	; 0x90000006
        146fc4:	6e670000 	cdpvs	0, 6, cr0, cr7, cr0, {0}
    */
}

/**
 * Symbol: VToDomain(unsigned long)
 * Address: 0015a2d0
 */
VToDomain(unsigned long) {
    /*
        15a2d0:	e1a0c00d 	mov	ip, sp
        15a2d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        15a2d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        15a2dc:	e1a00a20 	mov	r0, r0, lsr #20
        15a2e0:	e59f1024 	ldr	r1, [pc, #24]	; 15a30c <VToDomain(unsigned long)+0x3c>
        15a2e4:	e5911000 	ldr	r1, [r1]
        15a2e8:	e0814100 	add	r4, r1, r0, lsl #2
        15a2ec:	eb08e227 	bl	392b90 <EnterFIQAtomic>
        15a2f0:	e1a00004 	mov	r0, r4
        15a2f4:	ebfafa6a 	bl	18ca4 <LoadFromPhysAddress>
        15a2f8:	e1a04000 	mov	r4, r0
        15a2fc:	eb08e22b 	bl	392bb0 <ExitFIQAtomic>
        15a300:	e3a0000f 	mov	r0, #15	; 0xf
        15a304:	e00002a4 	and	r0, r0, r4, lsr #5
        15a308:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        15a30c:	0c1016d8 	ldceq	6, cr1, [r0], -#864
    */
}

/**
 * Symbol: VToUnit(unsigned long)
 * Address: 0015bc30
 */
VToUnit(unsigned long) {
    /*
        15bc30:	e1a0c00d 	mov	ip, sp
        15bc34:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        15bc38:	e24cb004 	sub	fp, ip, #4	; 0x4
        15bc3c:	e1a04000 	mov	r4, r0
        15bc40:	eb08dbd2 	bl	392b90 <EnterFIQAtomic>
        15bc44:	e1a00a24 	mov	r0, r4, lsr #20
        15bc48:	e59f1028 	ldr	r1, [pc, #28]	; 15bc78 <VToUnit(unsigned long)+0x48>
        15bc4c:	e5911000 	ldr	r1, [r1]
        15bc50:	e0810100 	add	r0, r1, r0, lsl #2
        15bc54:	ebfaf412 	bl	18ca4 <LoadFromPhysAddress>
        15bc58:	e2001003 	and	r1, r0, #3	; 0x3
        15bc5c:	e3310001 	teq	r1, #1	; 0x1
        15bc60:	0a000005 	beq	15bc7c <VToUnit(unsigned long)+0x4c>
        15bc64:	e3310002 	teq	r1, #2	; 0x2
        15bc68:	1a000013 	bne	15bcbc <VToUnit(unsigned long)+0x8c>
        15bc6c:	eb08dbcf 	bl	392bb0 <ExitFIQAtomic>
        15bc70:	e3a00000 	mov	r0, #0	; 0x0
        15bc74:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        15bc78:	0c1016d8 	ldceq	6, cr1, [r0], -#864
        15bc7c:	e1a00520 	mov	r0, r0, lsr #10
        15bc80:	e1a00500 	mov	r0, r0, lsl #10
        15bc84:	e3a010ff 	mov	r1, #255	; 0xff
        15bc88:	e0011624 	and	r1, r1, r4, lsr #12
        15bc8c:	e0800101 	add	r0, r0, r1, lsl #2
        15bc90:	ebfaf403 	bl	18ca4 <LoadFromPhysAddress>
        15bc94:	e1a04000 	mov	r4, r0
        15bc98:	eb08dbc4 	bl	392bb0 <ExitFIQAtomic>
        15bc9c:	e2040003 	and	r0, r4, #3	; 0x3
        15bca0:	e3300001 	teq	r0, #1	; 0x1
        15bca4:	03a00001 	moveq	r0, #1	; 0x1
        15bca8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        15bcac:	e3300002 	teq	r0, #2	; 0x2
        15bcb0:	03a00003 	moveq	r0, #3	; 0x3
        15bcb4:	13a00006 	movne	r0, #6	; 0x6
        15bcb8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        15bcbc:	eb08dbbb 	bl	392bb0 <ExitFIQAtomic>
        15bcc0:	e3a00005 	mov	r0, #5	; 0x5
        15bcc4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: VToSizeWithP(unsigned long, unsigned long &)
 * Address: 0015bd84
 */
VToSizeWithP(unsigned long, unsigned long &) {
    /*
        15bd84:	e1a0c00d 	mov	ip, sp
        15bd88:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        15bd8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        15bd90:	e1a05000 	mov	r5, r0
        15bd94:	e1a04001 	mov	r4, r1
        15bd98:	eb08db7c 	bl	392b90 <EnterFIQAtomic>
        15bd9c:	e1a00a25 	mov	r0, r5, lsr #20
        15bda0:	e59f104c 	ldr	r1, [pc, #4c]	; 15bdf4 <VToSizeWithP(unsigned long, unsigned long &)+0x70>
        15bda4:	e5911000 	ldr	r1, [r1]
        15bda8:	e0810100 	add	r0, r1, r0, lsl #2
        15bdac:	ebfaf3bc 	bl	18ca4 <LoadFromPhysAddress>
        15bdb0:	e1a06000 	mov	r6, r0
        15bdb4:	e2000003 	and	r0, r0, #3	; 0x3
        15bdb8:	e3a076ff 	mov	r7, #267386880	; 0xff00000
        15bdbc:	e287720f 	add	r7, r7, #-268435456	; 0xf0000000
        15bdc0:	e3300001 	teq	r0, #1	; 0x1
        15bdc4:	0a00000b 	beq	15bdf8 <VToSizeWithP(unsigned long, unsigned long &)+0x74>
        15bdc8:	e3a08601 	mov	r8, #1048576	; 0x100000
        15bdcc:	e3300002 	teq	r0, #2	; 0x2
        15bdd0:	1a000025 	bne	15be6c <VToSizeWithP(unsigned long, unsigned long &)+0xe8>
        15bdd4:	eb08db75 	bl	392bb0 <ExitFIQAtomic>
        15bdd8:	e1a00605 	mov	r0, r5, lsl #12
        15bddc:	e1a00620 	mov	r0, r0, lsr #12
        15bde0:	e1a01a26 	mov	r1, r6, lsr #20
        15bde4:	e0801a01 	add	r1, r0, r1, lsl #20
        15bde8:	e0480000 	sub	r0, r8, r0
        15bdec:	e5841000 	str	r1, [r4]
        15bdf0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        15bdf4:	0c1016d8 	ldceq	6, cr1, [r0], -#864
        15bdf8:	e1a00526 	mov	r0, r6, lsr #10
        15bdfc:	e1a00500 	mov	r0, r0, lsl #10
        15be00:	e3a010ff 	mov	r1, #255	; 0xff
        15be04:	e0011625 	and	r1, r1, r5, lsr #12
        15be08:	e0800101 	add	r0, r0, r1, lsl #2
        15be0c:	ebfaf3a4 	bl	18ca4 <LoadFromPhysAddress>
        15be10:	e1a06000 	mov	r6, r0
        15be14:	eb08db65 	bl	392bb0 <ExitFIQAtomic>
        15be18:	e2061003 	and	r1, r6, #3	; 0x3
        15be1c:	e3310001 	teq	r1, #1	; 0x1
        15be20:	0a00000a 	beq	15be50 <VToSizeWithP(unsigned long, unsigned long &)+0xcc>
        15be24:	e3a00a01 	mov	r0, #4096	; 0x1000
        15be28:	e3310002 	teq	r1, #2	; 0x2
        15be2c:	15847000 	strne	r7, [r4]
        15be30:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        15be34:	e1a01a05 	mov	r1, r5, lsl #20
        15be38:	e1a01a21 	mov	r1, r1, lsr #20
        15be3c:	e1a02626 	mov	r2, r6, lsr #12
        15be40:	e0812602 	add	r2, r1, r2, lsl #12
        15be44:	e0400001 	sub	r0, r0, r1
        15be48:	e5842000 	str	r2, [r4]
        15be4c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        15be50:	e1a00805 	mov	r0, r5, lsl #16
        15be54:	e1a00820 	mov	r0, r0, lsr #16
        15be58:	e1a01626 	mov	r1, r6, lsr #12
        15be5c:	e0801601 	add	r1, r0, r1, lsl #12
        15be60:	e2600801 	rsb	r0, r0, #65536	; 0x10000
        15be64:	e5841000 	str	r1, [r4]
        15be68:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        15be6c:	eb08db4f 	bl	392bb0 <ExitFIQAtomic>
        15be70:	e1a00008 	mov	r0, r8
        15be74:	e5847000 	str	r7, [r4]
        15be78:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: VerifyWordSymbols(unsigned short *)
 * Address: 0016836c
 */
VerifyWordSymbols(unsigned short *) {
    /*
        16836c:	e1a0c00d 	mov	ip, sp
        168370:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        168374:	e24cb004 	sub	fp, ip, #4	; 0x4
        168378:	e1a04000 	mov	r4, r0
        16837c:	e24dd040 	sub	sp, sp, #64	; 0x40
        168380:	e3a05000 	mov	r5, #0	; 0x0
        168384:	eb6a18f5 	bl	1bee760 <$Ustrlen>
        168388:	e350003f 	cmp	r0, #63	; 0x3f
        16838c:	2a000015 	bcs	1683e8 <VerifyWordSymbols(unsigned short *)+0x7c>
        168390:	e1a0100d 	mov	r1, sp
        168394:	e1a00004 	mov	r0, r4
        168398:	e3a0303f 	mov	r3, #63	; 0x3f
        16839c:	e3a02001 	mov	r2, #1	; 0x1
        1683a0:	eb69fbf6 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        1683a4:	ebfe7753 	bl	1060f8 <LIBeginWeights(void)>
        1683a8:	e1a04000 	mov	r4, r0
        1683ac:	e59f003c 	ldr	r0, [pc, #3c]	; 1683f0 <VerifyWordSymbols(unsigned short *)+0x84>
        1683b0:	e5900000 	ldr	r0, [r0]
        1683b4:	e59f1038 	ldr	r1, [pc, #38]	; 1683f4 <VerifyWordSymbols(unsigned short *)+0x88>
        1683b8:	eb67def9 	bl	1b5ffa4 <TController::$GetTypedDomain(unsigned long)>
        1683bc:	e1a03004 	mov	r3, r4
        1683c0:	e1a0200d 	mov	r2, sp
        1683c4:	e3a01018 	mov	r1, #24	; 0x18
        1683c8:	e2811802 	add	r1, r1, #131072	; 0x20000
        1683cc:	e590c000 	ldr	ip, [r0]
        1683d0:	e1a0e00f 	mov	lr, pc
        1683d4:	e28cf02c 	add	pc, ip, #44	; 0x2c
        1683d8:	e3300000 	teq	r0, #0	; 0x0
        1683dc:	03a05001 	moveq	r5, #1	; 0x1
        1683e0:	e1a00004 	mov	r0, r4
        1683e4:	ebfe7b1f 	bl	107068 <LIEndWeights(char **)>
        1683e8:	e1a00005 	mov	r0, r5
        1683ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1683f0:	0c10187c 	ldceq	8, cr1, [r0], -#496
        1683f4:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
    */
}

/**
 * Symbol: voc_unload(void **)
 * Address: 00169058
 */
voc_unload(void **) {
    /*
        169058:	e1a0c00d 	mov	ip, sp
        16905c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        169060:	e24cb004 	sub	fp, ip, #4	; 0x4
        169064:	e1a04000 	mov	r4, r0
        169068:	e5900000 	ldr	r0, [r0]
        16906c:	e3a05000 	mov	r5, #0	; 0x0
        169070:	e3300000 	teq	r0, #0	; 0x0
        169074:	0a00000b 	beq	1690a8 <voc_unload(void **)+0x50>
        169078:	eb6419cc 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        16907c:	e3300000 	teq	r0, #0	; 0x0
        169080:	e5940000 	ldr	r0, [r4]
        169084:	0a000005 	beq	1690a0 <voc_unload(void **)+0x48>
        169088:	eb6419c9 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        16908c:	e5940000 	ldr	r0, [r4]
        169090:	eb6419c8 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        169094:	e1a00005 	mov	r0, r5
        169098:	e5845000 	str	r5, [r4]
        16909c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1690a0:	e3300000 	teq	r0, #0	; 0x0
        1690a4:	1b6419c3 	blne	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        1690a8:	e3a00001 	mov	r0, #1	; 0x1
        1690ac:	e5845000 	str	r5, [r4]
        1690b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ValidateCaretPoint__FP6TPointPP8LineInfolT3Pl
 * Address: 001756a4
 */
void globals::ValidateCaretPoint() {
    /*
        1756a4:	e1a0c00d 	mov	ip, sp
        1756a8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1756ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1756b0:	e1a04000 	mov	r4, r0
        1756b4:	e1a06002 	mov	r6, r2
        1756b8:	e1a05003 	mov	r5, r3
        1756bc:	e3a08000 	mov	r8, #0	; 0x0
        1756c0:	e1a07001 	mov	r7, r1
        1756c4:	e59ba004 	ldr	sl, [fp, #4]
        1756c8:	e5910000 	ldr	r0, [r1]
        1756cc:	e3300000 	teq	r0, #0	; 0x0
        1756d0:	0a000058 	beq	175838 <ValidateCaretPoint__FP6TPointPP8LineInfolT3Pl+0x194>
        1756d4:	e24dd010 	sub	sp, sp, #16	; 0x10
        1756d8:	e5970000 	ldr	r0, [r7]
        1756dc:	e280001c 	add	r0, r0, #28	; 0x1c
        1756e0:	e28d1008 	add	r1, sp, #8	; 0x8
        1756e4:	e8901008 	ldmia	r0, {r3, ip}
        1756e8:	e8811008 	stmia	r1, {r3, ip}
        1756ec:	e2879004 	add	r9, r7, #4	; 0x4
        1756f0:	e5990000 	ldr	r0, [r9]
        1756f4:	e3300000 	teq	r0, #0	; 0x0
        1756f8:	059d000e 	ldreq	r0, [sp, #14]
        1756fc:	059d100a 	ldreq	r1, [sp, #10]
        175700:	00400001 	subeq	r0, r0, r1
        175704:	0a000005 	beq	175720 <ValidateCaretPoint__FP6TPointPP8LineInfolT3Pl+0x7c>
        175708:	e280001c 	add	r0, r0, #28	; 0x1c
        17570c:	e5901004 	ldr	r1, [r0, #4]
        175710:	e1a01821 	mov	r1, r1, lsr #16
        175714:	e5900000 	ldr	r0, [r0]
        175718:	e1a00820 	mov	r0, r0, lsr #16
        17571c:	e0410000 	sub	r0, r1, r0
        175720:	e1a00800 	mov	r0, r0, lsl #16
        175724:	e28d2008 	add	r2, sp, #8	; 0x8
        175728:	e8925000 	ldmia	r2, {ip, lr}
        17572c:	e88d5000 	stmia	sp, {ip, lr}
        175730:	e59d1006 	ldr	r1, [sp, #6]
        175734:	e08108c0 	add	r0, r1, r0, asr #17
        175738:	e5cd0005 	strb	r0, [sp, #5]
        17573c:	e1a00440 	mov	r0, r0, asr #8
        175740:	e5cd0004 	strb	r0, [sp, #4]
        175744:	e5940000 	ldr	r0, [r4]
        175748:	e52d0004 	str	r0, [sp, -#4]!
        17574c:	e28d1004 	add	r1, sp, #4	; 0x4
        175750:	e28dd004 	add	sp, sp, #4	; 0x4
        175754:	eb677478 	bl	1b5293c <$PtInRect(Point, Rect *)>
        175758:	e3300000 	teq	r0, #0	; 0x0
        17575c:	0a000029 	beq	175808 <ValidateCaretPoint__FP6TPointPP8LineInfolT3Pl+0x164>
        175760:	e59d000e 	ldr	r0, [sp, #14]
        175764:	e5971000 	ldr	r1, [r7]
        175768:	e5911018 	ldr	r1, [r1, #24]
        17576c:	e0400001 	sub	r0, r0, r1
        175770:	e1a00800 	mov	r0, r0, lsl #16
        175774:	e1a00840 	mov	r0, r0, asr #16
        175778:	e1a02805 	mov	r2, r5, lsl #16
        17577c:	e1a02842 	mov	r2, r2, asr #16
        175780:	e59d1006 	ldr	r1, [sp, #6]
        175784:	e0411000 	sub	r1, r1, r0
        175788:	e1a01801 	mov	r1, r1, lsl #16
        17578c:	e1a01841 	mov	r1, r1, asr #16
        175790:	e1520001 	cmp	r2, r1
        175794:	c1a01002 	movgt	r1, r2
        175798:	e1a02801 	mov	r2, r1, lsl #16
        17579c:	e1a02842 	mov	r2, r2, asr #16
        1757a0:	e5941000 	ldr	r1, [r4]
        1757a4:	e1a01841 	mov	r1, r1, asr #16
        1757a8:	e0403001 	sub	r3, r0, r1
        1757ac:	e1530006 	cmp	r3, r6
        1757b0:	d0410000 	suble	r0, r1, r0
        1757b4:	d1500002 	cmple	r0, r2
        1757b8:	ca000017 	bgt	17581c <ValidateCaretPoint__FP6TPointPP8LineInfolT3Pl+0x178>
        1757bc:	e33a0000 	teq	sl, #0	; 0x0
        1757c0:	0a000005 	beq	1757dc <ValidateCaretPoint__FP6TPointPP8LineInfolT3Pl+0x138>
        1757c4:	e59d000e 	ldr	r0, [sp, #14]
        1757c8:	e59d100a 	ldr	r1, [sp, #10]
        1757cc:	e0400001 	sub	r0, r0, r1
        1757d0:	e1a00800 	mov	r0, r0, lsl #16
        1757d4:	e1a00840 	mov	r0, r0, asr #16
        1757d8:	e58a0000 	str	r0, [sl]
        1757dc:	e59d000e 	ldr	r0, [sp, #14]
        1757e0:	e59d100a 	ldr	r1, [sp, #10]
        1757e4:	e0400001 	sub	r0, r0, r1
        1757e8:	e1a00800 	mov	r0, r0, lsl #16
        1757ec:	e59d100a 	ldr	r1, [sp, #10]
        1757f0:	e08108c0 	add	r0, r1, r0, asr #17
        1757f4:	e5c40001 	strb	r0, [r4, #1]
        1757f8:	e1a00440 	mov	r0, r0, asr #8
        1757fc:	e5c40000 	strb	r0, [r4]
        175800:	e3a08001 	mov	r8, #1	; 0x1
        175804:	ea000004 	b	17581c <ValidateCaretPoint__FP6TPointPP8LineInfolT3Pl+0x178>
        175808:	e59d0008 	ldr	r0, [sp, #8]
        17580c:	e1a00840 	mov	r0, r0, asr #16
        175810:	e5941000 	ldr	r1, [r4]
        175814:	e1500841 	cmp	r0, r1, asr #16
        175818:	da000001 	ble	175824 <ValidateCaretPoint__FP6TPointPP8LineInfolT3Pl+0x180>
        17581c:	e28dd010 	add	sp, sp, #16	; 0x10
        175820:	ea000004 	b	175838 <ValidateCaretPoint__FP6TPointPP8LineInfolT3Pl+0x194>
        175824:	e1a07009 	mov	r7, r9
        175828:	e28dd010 	add	sp, sp, #16	; 0x10
        17582c:	e5990000 	ldr	r0, [r9]
        175830:	e3300000 	teq	r0, #0	; 0x0
        175834:	1affffa6 	bne	1756d4 <ValidateCaretPoint__FP6TPointPP8LineInfolT3Pl+0x30>
        175838:	e1a00008 	mov	r0, r8
        17583c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ViewExpectsNumbers(TView *)
 * Address: 0017fb04
 */
ViewExpectsNumbers(TView *) {
    /*
        17fb04:	e1a0c00d 	mov	ip, sp
        17fb08:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        17fb0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        17fb10:	e1a04000 	mov	r4, r0
        17fb14:	eb64cb93 	bl	1ab2968 <$GetRecognitionView(TView *)>
        17fb18:	e1a04000 	mov	r4, r0
        17fb1c:	e5901000 	ldr	r1, [r0]
        17fb20:	e1a0e00f 	mov	lr, pc
        17fb24:	e281f020 	add	pc, r1, #32	; 0x20
        17fb28:	e3100c02 	tst	r0, #512	; 0x200
        17fb2c:	e3a00001 	mov	r0, #1	; 0x1
        17fb30:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        17fb34:	e5941008 	ldr	r1, [r4, #8]
        17fb38:	e3c114fe 	bic	r1, r1, #-33554432	; 0xfe000000
        17fb3c:	e3c11c0f 	bic	r1, r1, #3840	; 0xf00
        17fb40:	e3c110ff 	bic	r1, r1, #255	; 0xff
        17fb44:	e3c12611 	bic	r2, r1, #17825792	; 0x1100000
        17fb48:	e3d22a42 	bics	r2, r2, #270336	; 0x42000
        17fb4c:	e3a05000 	mov	r5, #0	; 0x0
        17fb50:	1a000030 	bne	17fc18 <ViewExpectsNumbers(TView *)+0x114>
        17fb54:	e3310a02 	teq	r1, #8192	; 0x2000
        17fb58:	13310601 	teqne	r1, #1048576	; 0x100000
        17fb5c:	13310701 	teqne	r1, #262144	; 0x40000
        17fb60:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        17fb64:	e3310401 	teq	r1, #16777216	; 0x1000000
        17fb68:	1a00002a 	bne	17fc18 <ViewExpectsNumbers(TView *)+0x114>
        17fb6c:	e24dd004 	sub	sp, sp, #4	; 0x4
        17fb70:	e59f1090 	ldr	r1, [pc, #90]	; 17fc08 <ViewExpectsNumbers(TView *)+0x104>
        17fb74:	e1a00004 	mov	r0, r4
        17fb78:	eb692a72 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        17fb7c:	eb690972 	bl	1bc214c <$AllocateRefHandle(long)>
        17fb80:	e58d0000 	str	r0, [sp]
        17fb84:	e1a0000d 	mov	r0, sp
        17fb88:	eb69cf7f 	bl	1bf398c <$IsArray(RefVar const &)>
        17fb8c:	e3300000 	teq	r0, #0	; 0x0
        17fb90:	0a00000a 	beq	17fbc0 <ViewExpectsNumbers(TView *)+0xbc>
        17fb94:	e59d0000 	ldr	r0, [sp]
        17fb98:	e5900000 	ldr	r0, [r0]
        17fb9c:	eb6915c2 	bl	1bc52ac <$Length(long)>
        17fba0:	e3300001 	teq	r0, #1	; 0x1
        17fba4:	1a000005 	bne	17fbc0 <ViewExpectsNumbers(TView *)+0xbc>
        17fba8:	e59d0000 	ldr	r0, [sp]
        17fbac:	e5900000 	ldr	r0, [r0]
        17fbb0:	e1a01005 	mov	r1, r5
        17fbb4:	eb6911a6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        17fbb8:	e59d1000 	ldr	r1, [sp]
        17fbbc:	e5810000 	str	r0, [r1]
        17fbc0:	e3a00f75 	mov	r0, #468	; 0x1d4
        17fbc4:	eb690960 	bl	1bc214c <$AllocateRefHandle(long)>
        17fbc8:	e1a04000 	mov	r4, r0
        17fbcc:	e5901000 	ldr	r1, [r0]
        17fbd0:	e59d0000 	ldr	r0, [sp]
        17fbd4:	e5900000 	ldr	r0, [r0]
        17fbd8:	eb691194 	bl	1bc4230 <$EQRef__FlT1>
        17fbdc:	e1b06000 	movs	r6, r0
        17fbe0:	13a06001 	movne	r6, #1	; 0x1
        17fbe4:	e1a00004 	mov	r0, r4
        17fbe8:	eb690d73 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17fbec:	e3360000 	teq	r6, #0	; 0x0
        17fbf0:	0a000005 	beq	17fc0c <ViewExpectsNumbers(TView *)+0x108>
        17fbf4:	e3a04001 	mov	r4, #1	; 0x1
        17fbf8:	e59d0000 	ldr	r0, [sp]
        17fbfc:	eb690d6e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17fc00:	e1a00004 	mov	r0, r4
        17fc04:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        17fc08:	00682960 	rsbeq	r2, r8, r0, ror #18
        17fc0c:	e59d0000 	ldr	r0, [sp]
        17fc10:	eb690d69 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17fc14:	e28dd004 	add	sp, sp, #4	; 0x4
        17fc18:	e1a00005 	mov	r0, r5
        17fc1c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ValidatePoly(DataPtr, TRect const &)
 * Address: 0018b2c8
 */
ValidatePoly(DataPtr, TRect const &) {
    /*
        18b2c8:	e1a0c00d 	mov	ip, sp
        18b2cc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        18b2d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        18b2d4:	e1a04001 	mov	r4, r1
        18b2d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        18b2dc:	e1a01000 	mov	r1, r0
        18b2e0:	e1a0000d 	mov	r0, sp
        18b2e4:	eb68d77a 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18b2e8:	e3a07000 	mov	r7, #0	; 0x0
        18b2ec:	e1a0000d 	mov	r0, sp
        18b2f0:	eb68db87 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18b2f4:	e1a05000 	mov	r5, r0
        18b2f8:	e5900002 	ldr	r0, [r0, #2]
        18b2fc:	e1a00840 	mov	r0, r0, asr #16
        18b300:	e3a06000 	mov	r6, #0	; 0x0
        18b304:	e3500000 	cmp	r0, #0	; 0x0
        18b308:	b5c56003 	strltb	r6, [r5, #3]
        18b30c:	b5c56002 	strltb	r6, [r5, #2]
        18b310:	ba000089 	blt	18b53c <ValidatePoly(DataPtr, TRect const &)+0x274>
        18b314:	1a000007 	bne	18b338 <ValidatePoly(DataPtr, TRect const &)+0x70>
        18b318:	e5950000 	ldr	r0, [r5]
        18b31c:	e1a00840 	mov	r0, r0, asr #16
        18b320:	e330000f 	teq	r0, #15	; 0xf
        18b324:	1330000e 	teqne	r0, #14	; 0xe
        18b328:	13a0000f 	movne	r0, #15	; 0xf
        18b32c:	15c50001 	strneb	r0, [r5, #1]
        18b330:	15c56000 	strneb	r6, [r5]
        18b334:	ea000080 	b	18b53c <ValidatePoly(DataPtr, TRect const &)+0x274>
        18b338:	e24dd008 	sub	sp, sp, #8	; 0x8
        18b33c:	e1a0100d 	mov	r1, sp
        18b340:	e1a00005 	mov	r0, r5
        18b344:	eb640095 	bl	1a8b5a0 <PolygonShape::$CalcBounds(TRect *)>
        18b348:	e24dd004 	sub	sp, sp, #4	; 0x4
        18b34c:	e5940000 	ldr	r0, [r4]
        18b350:	e58d0000 	str	r0, [sp]
        18b354:	e28d0004 	add	r0, sp, #4	; 0x4
        18b358:	e59d1002 	ldr	r1, [sp, #2]
        18b35c:	e1a01841 	mov	r1, r1, asr #16
        18b360:	e59d2000 	ldr	r2, [sp]
        18b364:	e1a02842 	mov	r2, r2, asr #16
        18b368:	eb67195e 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18b36c:	e28dd004 	add	sp, sp, #4	; 0x4
        18b370:	e1a0100d 	mov	r1, sp
        18b374:	e1a00004 	mov	r0, r4
        18b378:	eb670ceb 	bl	1b4e72c <$EqualRect__FP4RectT1>
        18b37c:	e3300000 	teq	r0, #0	; 0x0
        18b380:	1a000003 	bne	18b394 <ValidatePoly(DataPtr, TRect const &)+0xcc>
        18b384:	e1a00004 	mov	r0, r4
        18b388:	eb670ce2 	bl	1b4e718 <$EmptyRect(Rect *)>
        18b38c:	e3300000 	teq	r0, #0	; 0x0
        18b390:	03a07000 	moveq	r7, #0	; 0x0
        18b394:	e5950002 	ldr	r0, [r5, #2]
        18b398:	e1a00840 	mov	r0, r0, asr #16
        18b39c:	e0852100 	add	r2, r5, r0, lsl #2
        18b3a0:	e5951004 	ldr	r1, [r5, #4]
        18b3a4:	e5922000 	ldr	r2, [r2]
        18b3a8:	e1310002 	teq	r1, r2
        18b3ac:	13a01000 	movne	r1, #0	; 0x0
        18b3b0:	03a01001 	moveq	r1, #1	; 0x1
        18b3b4:	e20110ff 	and	r1, r1, #255	; 0xff
        18b3b8:	e5952000 	ldr	r2, [r5]
        18b3bc:	e1a02842 	mov	r2, r2, asr #16
        18b3c0:	e352000c 	cmp	r2, #12	; 0xc
        18b3c4:	908ff102 	addls	pc, pc, r2, lsl #2
        18b3c8:	ea00001a 	b	18b438 <ValidatePoly(DataPtr, TRect const &)+0x170>
        18b3cc:	ea000016 	b	18b42c <ValidatePoly(DataPtr, TRect const &)+0x164>
        18b3d0:	ea000018 	b	18b438 <ValidatePoly(DataPtr, TRect const &)+0x170>
        18b3d4:	ea000017 	b	18b438 <ValidatePoly(DataPtr, TRect const &)+0x170>
        18b3d8:	ea00000a 	b	18b408 <ValidatePoly(DataPtr, TRect const &)+0x140>
        18b3dc:	ea000015 	b	18b438 <ValidatePoly(DataPtr, TRect const &)+0x170>
        18b3e0:	ea000014 	b	18b438 <ValidatePoly(DataPtr, TRect const &)+0x170>
        18b3e4:	ea000013 	b	18b438 <ValidatePoly(DataPtr, TRect const &)+0x170>
        18b3e8:	ea000012 	b	18b438 <ValidatePoly(DataPtr, TRect const &)+0x170>
        18b3ec:	ea000008 	b	18b414 <ValidatePoly(DataPtr, TRect const &)+0x14c>
        18b3f0:	ea00000a 	b	18b420 <ValidatePoly(DataPtr, TRect const &)+0x158>
        18b3f4:	ea000000 	b	18b3fc <ValidatePoly(DataPtr, TRect const &)+0x134>
        18b3f8:	eaffffff 	b	18b3fc <ValidatePoly(DataPtr, TRect const &)+0x134>
        18b3fc:	e3300005 	teq	r0, #5	; 0x5
        18b400:	0a000014 	beq	18b458 <ValidatePoly(DataPtr, TRect const &)+0x190>
        18b404:	ea00000d 	b	18b440 <ValidatePoly(DataPtr, TRect const &)+0x178>
        18b408:	e3300001 	teq	r0, #1	; 0x1
        18b40c:	0a000011 	beq	18b458 <ValidatePoly(DataPtr, TRect const &)+0x190>
        18b410:	ea00000a 	b	18b440 <ValidatePoly(DataPtr, TRect const &)+0x178>
        18b414:	e3300002 	teq	r0, #2	; 0x2
        18b418:	0a00000e 	beq	18b458 <ValidatePoly(DataPtr, TRect const &)+0x190>
        18b41c:	ea000007 	b	18b440 <ValidatePoly(DataPtr, TRect const &)+0x178>
        18b420:	e3300004 	teq	r0, #4	; 0x4
        18b424:	0a00000b 	beq	18b458 <ValidatePoly(DataPtr, TRect const &)+0x190>
        18b428:	ea000004 	b	18b440 <ValidatePoly(DataPtr, TRect const &)+0x178>
        18b42c:	e3300019 	teq	r0, #25	; 0x19
        18b430:	0a000008 	beq	18b458 <ValidatePoly(DataPtr, TRect const &)+0x190>
        18b434:	ea000001 	b	18b440 <ValidatePoly(DataPtr, TRect const &)+0x178>
        18b438:	e3370000 	teq	r7, #0	; 0x0
        18b43c:	0a000005 	beq	18b458 <ValidatePoly(DataPtr, TRect const &)+0x190>
        18b440:	e3310000 	teq	r1, #0	; 0x0
        18b444:	03a02005 	moveq	r2, #5	; 0x5
        18b448:	13a02004 	movne	r2, #4	; 0x4
        18b44c:	e5c52001 	strb	r2, [r5, #1]
        18b450:	e1a02442 	mov	r2, r2, asr #8
        18b454:	e5c52000 	strb	r2, [r5]
        18b458:	e3300001 	teq	r0, #1	; 0x1
        18b45c:	0a00000a 	beq	18b48c <ValidatePoly(DataPtr, TRect const &)+0x1c4>
        18b460:	e3300002 	teq	r0, #2	; 0x2
        18b464:	0a00000e 	beq	18b4a4 <ValidatePoly(DataPtr, TRect const &)+0x1dc>
        18b468:	e3300004 	teq	r0, #4	; 0x4
        18b46c:	1a000014 	bne	18b4c4 <ValidatePoly(DataPtr, TRect const &)+0x1fc>
        18b470:	e5950000 	ldr	r0, [r5]
        18b474:	e1a00840 	mov	r0, r0, asr #16
        18b478:	e3300009 	teq	r0, #9	; 0x9
        18b47c:	13310000 	teqne	r1, #0	; 0x0
        18b480:	13a00009 	movne	r0, #9	; 0x9
        18b484:	1a00000c 	bne	18b4bc <ValidatePoly(DataPtr, TRect const &)+0x1f4>
        18b488:	ea00000d 	b	18b4c4 <ValidatePoly(DataPtr, TRect const &)+0x1fc>
        18b48c:	e5950000 	ldr	r0, [r5]
        18b490:	e1a00840 	mov	r0, r0, asr #16
        18b494:	e3300003 	teq	r0, #3	; 0x3
        18b498:	13a00003 	movne	r0, #3	; 0x3
        18b49c:	1a000006 	bne	18b4bc <ValidatePoly(DataPtr, TRect const &)+0x1f4>
        18b4a0:	ea000007 	b	18b4c4 <ValidatePoly(DataPtr, TRect const &)+0x1fc>
        18b4a4:	e5950000 	ldr	r0, [r5]
        18b4a8:	e1a00840 	mov	r0, r0, asr #16
        18b4ac:	e3300008 	teq	r0, #8	; 0x8
        18b4b0:	1330000d 	teqne	r0, #13	; 0xd
        18b4b4:	0a000002 	beq	18b4c4 <ValidatePoly(DataPtr, TRect const &)+0x1fc>
        18b4b8:	e3a00008 	mov	r0, #8	; 0x8
        18b4bc:	e5c50001 	strb	r0, [r5, #1]
        18b4c0:	e5c56000 	strb	r6, [r5]
        18b4c4:	e5950000 	ldr	r0, [r5]
        18b4c8:	e1a00840 	mov	r0, r0, asr #16
        18b4cc:	e350000f 	cmp	r0, #15	; 0xf
        18b4d0:	908ff100 	addls	pc, pc, r0, lsl #2
        18b4d4:	ea000017 	b	18b538 <ValidatePoly(DataPtr, TRect const &)+0x270>
        18b4d8:	ea00000e 	b	18b518 <ValidatePoly(DataPtr, TRect const &)+0x250>
        18b4dc:	ea00000d 	b	18b518 <ValidatePoly(DataPtr, TRect const &)+0x250>
        18b4e0:	ea000014 	b	18b538 <ValidatePoly(DataPtr, TRect const &)+0x270>
        18b4e4:	ea000013 	b	18b538 <ValidatePoly(DataPtr, TRect const &)+0x270>
        18b4e8:	ea00000a 	b	18b518 <ValidatePoly(DataPtr, TRect const &)+0x250>
        18b4ec:	ea000011 	b	18b538 <ValidatePoly(DataPtr, TRect const &)+0x270>
        18b4f0:	ea000008 	b	18b518 <ValidatePoly(DataPtr, TRect const &)+0x250>
        18b4f4:	ea00000f 	b	18b538 <ValidatePoly(DataPtr, TRect const &)+0x270>
        18b4f8:	ea00000e 	b	18b538 <ValidatePoly(DataPtr, TRect const &)+0x270>
        18b4fc:	ea000005 	b	18b518 <ValidatePoly(DataPtr, TRect const &)+0x250>
        18b500:	ea000004 	b	18b518 <ValidatePoly(DataPtr, TRect const &)+0x250>
        18b504:	ea000003 	b	18b518 <ValidatePoly(DataPtr, TRect const &)+0x250>
        18b508:	ea000002 	b	18b518 <ValidatePoly(DataPtr, TRect const &)+0x250>
        18b50c:	ea000009 	b	18b538 <ValidatePoly(DataPtr, TRect const &)+0x270>
        18b510:	ea000008 	b	18b538 <ValidatePoly(DataPtr, TRect const &)+0x270>
        18b514:	ea000007 	b	18b538 <ValidatePoly(DataPtr, TRect const &)+0x270>
        18b518:	e3310000 	teq	r1, #0	; 0x0
        18b51c:	1a000005 	bne	18b538 <ValidatePoly(DataPtr, TRect const &)+0x270>
        18b520:	e3300006 	teq	r0, #6	; 0x6
        18b524:	13a00005 	movne	r0, #5	; 0x5
        18b528:	03a00007 	moveq	r0, #7	; 0x7
        18b52c:	e5c50001 	strb	r0, [r5, #1]
        18b530:	e1a00440 	mov	r0, r0, asr #8
        18b534:	e5c50000 	strb	r0, [r5]
        18b538:	e28dd008 	add	sp, sp, #8	; 0x8
        18b53c:	e1a0000d 	mov	r0, sp
        18b540:	e3a01000 	mov	r1, #0	; 0x0
        18b544:	eb68daed 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18b548:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: ViewAllowsInk(TView *)
 * Address: 001a293c
 */
ViewAllowsInk(TView *) {
    /*
        1a293c:	e1a0c00d 	mov	ip, sp
        1a2940:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1a2944:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a2948:	e3a05000 	mov	r5, #0	; 0x0
        1a294c:	eb644005 	bl	1ab2968 <$GetRecognitionView(TView *)>
        1a2950:	e5901008 	ldr	r1, [r0, #8]
        1a2954:	e3c114fe 	bic	r1, r1, #-33554432	; 0xfe000000
        1a2958:	e3c110ff 	bic	r1, r1, #255	; 0xff
        1a295c:	e3c124fe 	bic	r2, r1, #-33554432	; 0xfe000000
        1a2960:	e3c22c01 	bic	r2, r2, #256	; 0x100
        1a2964:	e3c220ff 	bic	r2, r2, #255	; 0xff
        1a2968:	e242c77f 	sub	ip, r2, #33292288	; 0x1fc0000
        1a296c:	e24ccbff 	sub	ip, ip, #261120	; 0x3fc00
        1a2970:	e33c0c02 	teq	ip, #512	; 0x200
        1a2974:	03a05001 	moveq	r5, #1	; 0x1
        1a2978:	0a000017 	beq	1a29dc <ViewAllowsInk(TView *)+0xa0>
        1a297c:	eb641ac8 	bl	1aa94a4 <$BuildRecConfig(TView *, unsigned long)>
        1a2980:	eb687df1 	bl	1bc214c <$AllocateRefHandle(long)>
        1a2984:	e1a04000 	mov	r4, r0
        1a2988:	e59f0054 	ldr	r0, [pc, #54]	; 1a29e4 <ViewAllowsInk(TView *)+0xa8>
        1a298c:	e5900000 	ldr	r0, [r0]
        1a2990:	e5901000 	ldr	r1, [r0]
        1a2994:	e5940000 	ldr	r0, [r4]
        1a2998:	eb688630 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1a299c:	e5840000 	str	r0, [r4]
        1a29a0:	e59f6040 	ldr	r6, [pc, #40]	; 1a29e8 <ViewAllowsInk(TView *)+0xac>
        1a29a4:	e5961000 	ldr	r1, [r6]
        1a29a8:	e5911000 	ldr	r1, [r1]
        1a29ac:	eb688625 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        1a29b0:	e3300000 	teq	r0, #0	; 0x0
        1a29b4:	0a000005 	beq	1a29d0 <ViewAllowsInk(TView *)+0x94>
        1a29b8:	e5960000 	ldr	r0, [r6]
        1a29bc:	e5901000 	ldr	r1, [r0]
        1a29c0:	e5940000 	ldr	r0, [r4]
        1a29c4:	eb688625 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1a29c8:	e3300002 	teq	r0, #2	; 0x2
        1a29cc:	0a000000 	beq	1a29d4 <ViewAllowsInk(TView *)+0x98>
        1a29d0:	e3a05001 	mov	r5, #1	; 0x1
        1a29d4:	e1a00004 	mov	r0, r4
        1a29d8:	eb6881f7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a29dc:	e1a00005 	mov	r0, r5
        1a29e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1a29e4:	00685390 	streqb	r5, [r8], -#48
        1a29e8:	00682a58 	rsbeq	r2, r8, r8, asr sl
    */
}

/**
 * Symbol: ViewAllowsInkWords(TView *)
 * Address: 001a29ec
 */
ViewAllowsInkWords(TView *) {
    /*
        1a29ec:	e1a0c00d 	mov	ip, sp
        1a29f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a29f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a29f8:	e3a04000 	mov	r4, #0	; 0x0
        1a29fc:	eb643fd9 	bl	1ab2968 <$GetRecognitionView(TView *)>
        1a2a00:	e5901008 	ldr	r1, [r0, #8]
        1a2a04:	e3c114fe 	bic	r1, r1, #-33554432	; 0xfe000000
        1a2a08:	e3c110ff 	bic	r1, r1, #255	; 0xff
        1a2a0c:	e3c124fe 	bic	r2, r1, #-33554432	; 0xfe000000
        1a2a10:	e3c22c01 	bic	r2, r2, #256	; 0x100
        1a2a14:	e3c220ff 	bic	r2, r2, #255	; 0xff
        1a2a18:	e242c77f 	sub	ip, r2, #33292288	; 0x1fc0000
        1a2a1c:	e24ccbff 	sub	ip, ip, #261120	; 0x3fc00
        1a2a20:	e33c0c02 	teq	ip, #512	; 0x200
        1a2a24:	03a04001 	moveq	r4, #1	; 0x1
        1a2a28:	0a00000e 	beq	1a2a68 <ViewAllowsInkWords(TView *)+0x7c>
        1a2a2c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a2a30:	eb641a9b 	bl	1aa94a4 <$BuildRecConfig(TView *, unsigned long)>
        1a2a34:	eb687dc4 	bl	1bc214c <$AllocateRefHandle(long)>
        1a2a38:	e58d0000 	str	r0, [sp]
        1a2a3c:	e59f102c 	ldr	r1, [pc, #2c]	; 1a2a70 <ViewAllowsInkWords(TView *)+0x84>
        1a2a40:	e1a0000d 	mov	r0, sp
        1a2a44:	e3a02000 	mov	r2, #0	; 0x0
        1a2a48:	eb688606 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1a2a4c:	e59d1000 	ldr	r1, [sp]
        1a2a50:	e5810000 	str	r0, [r1]
        1a2a54:	e3300002 	teq	r0, #2	; 0x2
        1a2a58:	13a04001 	movne	r4, #1	; 0x1
        1a2a5c:	e59d0000 	ldr	r0, [sp]
        1a2a60:	eb6881d5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2a64:	e28dd004 	add	sp, sp, #4	; 0x4
        1a2a68:	e1a00004 	mov	r0, r4
        1a2a6c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1a2a70:	00682a38 	rsbeq	r2, r8, r8, lsr sl
    */
}

/**
 * Symbol: ViewAllowsText(TView *)
 * Address: 001a2a74
 */
ViewAllowsText(TView *) {
    /*
        1a2a74:	e1a0c00d 	mov	ip, sp
        1a2a78:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1a2a7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a2a80:	eb643fb8 	bl	1ab2968 <$GetRecognitionView(TView *)>
        1a2a84:	e5900008 	ldr	r0, [r0, #8]
        1a2a88:	e3c004fe 	bic	r0, r0, #-33554432	; 0xfe000000
        1a2a8c:	e3c00881 	bic	r0, r0, #8454144	; 0x810000
        1a2a90:	e3c00c0f 	bic	r0, r0, #3840	; 0xf00
        1a2a94:	e3d000ff 	bics	r0, r0, #255	; 0xff
        1a2a98:	13a00001 	movne	r0, #1	; 0x1
        1a2a9c:	e20000ff 	and	r0, r0, #255	; 0xff
        1a2aa0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: VolumeToDecibels(long)
 * Address: 001e6194
 */
VolumeToDecibels(long) {
    /*
        1e6194:	e3500000 	cmp	r0, #0	; 0x0
        1e6198:	ba00000a 	blt	1e61c8 <VolumeToDecibels(long)+0x34>
        1e619c:	e3500004 	cmp	r0, #4	; 0x4
        1e61a0:	ca000006 	bgt	1e61c0 <VolumeToDecibels(long)+0x2c>
        1e61a4:	e3500004 	cmp	r0, #4	; 0x4
        1e61a8:	908ff100 	addls	pc, pc, r0, lsl #2
        1e61ac:	ea000010 	b	1e61f4 <VolumeToDecibels(long)+0x60>
        1e61b0:	ea000004 	b	1e61c8 <VolumeToDecibels(long)+0x34>
        1e61b4:	ea000005 	b	1e61d0 <VolumeToDecibels(long)+0x3c>
        1e61b8:	ea000007 	b	1e61dc <VolumeToDecibels(long)+0x48>
        1e61bc:	ea000009 	b	1e61e8 <VolumeToDecibels(long)+0x54>
        1e61c0:	e3a00000 	mov	r0, #0	; 0x0
        1e61c4:	e1a0f00e 	mov	pc, lr
        1e61c8:	e3a00102 	mov	r0, #-2147483648	; 0x80000000
        1e61cc:	e1a0f00e 	mov	pc, lr
        1e61d0:	e59f0000 	ldr	r0, [pc, #0]	; 1e61d8 <VolumeToDecibels(long)+0x44>
        1e61d4:	e1a0f00e 	mov	pc, lr
        1e61d8:	ffedf02e 	swinv	0x00edf02e
        1e61dc:	e59f0000 	ldr	r0, [pc, #0]	; 1e61e4 <VolumeToDecibels(long)+0x50>
        1e61e0:	e1a0f00e 	mov	pc, lr
        1e61e4:	fff9faba 	swinv	0x00f9faba
        1e61e8:	e59f0000 	ldr	r0, [pc, #0]	; 1e61f0 <VolumeToDecibels(long)+0x5c>
        1e61ec:	e1a0f00e 	mov	pc, lr
        1e61f0:	fffcfd5d 	swinv	0x00fcfd5d
        1e61f4:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        1e61f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ValidateWordInChain(char *, unsigned long *, unsigned char)
 * Address: 001f4bcc
 */
ValidateWordInChain(char *, unsigned long *, unsigned char) {
    /*
        1f4bcc:	e1a0c00d 	mov	ip, sp
        1f4bd0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1f4bd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f4bd8:	e1a05000 	mov	r5, r0
        1f4bdc:	e1a04001 	mov	r4, r1
        1f4be0:	e31200ff 	tst	r2, #255	; 0xff
        1f4be4:	e3e00000 	mvn	r0, #0	; 0x0
        1f4be8:	e59f1074 	ldr	r1, [pc, #74]	; 1f4c64 <ValidateWordInChain(char *, unsigned long *, unsigned char)+0x98>
        1f4bec:	e5911000 	ldr	r1, [r1]
        1f4bf0:	e5917038 	ldr	r7, [r1, #56]
        1f4bf4:	15911040 	ldrne	r1, [r1, #64]
        1f4bf8:	13310000 	teqne	r1, #0	; 0x0
        1f4bfc:	0a000005 	beq	1f4c18 <ValidateWordInChain(char *, unsigned long *, unsigned char)+0x4c>
        1f4c00:	e1a00001 	mov	r0, r1
        1f4c04:	e1a02004 	mov	r2, r4
        1f4c08:	e1a01005 	mov	r1, r5
        1f4c0c:	eb63b541 	bl	1ae2118 <$ValidateWord(AirusAParmBlock **, char *, unsigned long *)>
        1f4c10:	e3700001 	cmn	r0, #1	; 0x1
        1f4c14:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1f4c18:	e3a06000 	mov	r6, #0	; 0x0
        1f4c1c:	e597800c 	ldr	r8, [r7, #12]
        1f4c20:	e3580000 	cmp	r8, #0	; 0x0
        1f4c24:	991ba9f0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1f4c28:	e1a01006 	mov	r1, r6
        1f4c2c:	e1a00007 	mov	r0, r7
        1f4c30:	e5972000 	ldr	r2, [r7]
        1f4c34:	e1a0e00f 	mov	lr, pc
        1f4c38:	e282f01c 	add	pc, r2, #28	; 0x1c
        1f4c3c:	e5900000 	ldr	r0, [r0]
        1f4c40:	e1a02004 	mov	r2, r4
        1f4c44:	e1a01005 	mov	r1, r5
        1f4c48:	eb63b532 	bl	1ae2118 <$ValidateWord(AirusAParmBlock **, char *, unsigned long *)>
        1f4c4c:	e3700001 	cmn	r0, #1	; 0x1
        1f4c50:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1f4c54:	e2866001 	add	r6, r6, #1	; 0x1
        1f4c58:	e1560008 	cmp	r6, r8
        1f4c5c:	3afffff1 	bcc	1f4c28 <ValidateWordInChain(char *, unsigned long *, unsigned char)+0x5c>
        1f4c60:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1f4c64:	0c101b20 	ldceq	11, cr1, [r0], -#128
    */
}

/**
 * Symbol: ValidateWordInNumberChain(char *)
 * Address: 001f4c68
 */
ValidateWordInNumberChain(char *) {
    /*
        1f4c68:	e1a0c00d 	mov	ip, sp
        1f4c6c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1f4c70:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f4c74:	e1a04000 	mov	r4, r0
        1f4c78:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f4c7c:	e3e00000 	mvn	r0, #0	; 0x0
        1f4c80:	e59f1050 	ldr	r1, [pc, #50]	; 1f4cd8 <ValidateWordInNumberChain(char *)+0x70>
        1f4c84:	e5911000 	ldr	r1, [r1]
        1f4c88:	e5b17034 	ldr	r7, [r1, #52]!
        1f4c8c:	e3a05000 	mov	r5, #0	; 0x0
        1f4c90:	e597600c 	ldr	r6, [r7, #12]
        1f4c94:	e3560000 	cmp	r6, #0	; 0x0
        1f4c98:	9a00000d 	bls	1f4cd4 <ValidateWordInNumberChain(char *)+0x6c>
        1f4c9c:	e1a01005 	mov	r1, r5
        1f4ca0:	e1a00007 	mov	r0, r7
        1f4ca4:	e5972000 	ldr	r2, [r7]
        1f4ca8:	e1a0e00f 	mov	lr, pc
        1f4cac:	e282f01c 	add	pc, r2, #28	; 0x1c
        1f4cb0:	e5900000 	ldr	r0, [r0]
        1f4cb4:	e1a0200d 	mov	r2, sp
        1f4cb8:	e1a01004 	mov	r1, r4
        1f4cbc:	eb63b515 	bl	1ae2118 <$ValidateWord(AirusAParmBlock **, char *, unsigned long *)>
        1f4cc0:	e3700001 	cmn	r0, #1	; 0x1
        1f4cc4:	1a000002 	bne	1f4cd4 <ValidateWordInNumberChain(char *)+0x6c>
        1f4cc8:	e2855001 	add	r5, r5, #1	; 0x1
        1f4ccc:	e1550006 	cmp	r5, r6
        1f4cd0:	3afffff1 	bcc	1f4c9c <ValidateWordInNumberChain(char *)+0x34>
        1f4cd4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1f4cd8:	0c101b20 	ldceq	11, cr1, [r0], -#128
    */
}

/**
 * Symbol: ValidateWord(AirusAParmBlock **, char *, unsigned long *)
 * Address: 001f4dc8
 */
ValidateWord(AirusAParmBlock **, char *, unsigned long *) {
    /*
        1f4dc8:	e1a0c00d 	mov	ip, sp
        1f4dcc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f4dd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f4dd4:	e1a05000 	mov	r5, r0
        1f4dd8:	e1a04002 	mov	r4, r2
        1f4ddc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1f4de0:	e3e06000 	mvn	r6, #0	; 0x0
        1f4de4:	e28d0004 	add	r0, sp, #4	; 0x4
        1f4de8:	e58d0000 	str	r0, [sp]
        1f4dec:	e3a00000 	mov	r0, #0	; 0x0
        1f4df0:	e3a03000 	mov	r3, #0	; 0x0
        1f4df4:	e5820000 	str	r0, [r2]
        1f4df8:	e92d0008 	stmdb	sp!, {r3}
        1f4dfc:	e28d3004 	add	r3, sp, #4	; 0x4
        1f4e00:	e1a00005 	mov	r0, r5
        1f4e04:	e3a02000 	mov	r2, #0	; 0x0
        1f4e08:	eb6030a2 	bl	1a01098 <$VerifyString>
        1f4e0c:	e28dd004 	add	sp, sp, #4	; 0x4
        1f4e10:	e59f002c 	ldr	r0, [pc, #2c]	; 1f4e44 <ValidateWord(AirusAParmBlock **, char *, unsigned long *)+0x7c>
        1f4e14:	e5900000 	ldr	r0, [r0]
        1f4e18:	e3300002 	teq	r0, #2	; 0x2
        1f4e1c:	13300003 	teqne	r0, #3	; 0x3
        1f4e20:	1a000005 	bne	1f4e3c <ValidateWord(AirusAParmBlock **, char *, unsigned long *)+0x74>
        1f4e24:	e5950000 	ldr	r0, [r5]
        1f4e28:	e5b06004 	ldr	r6, [r0, #4]!
        1f4e2c:	e59d0000 	ldr	r0, [sp]
        1f4e30:	e3300000 	teq	r0, #0	; 0x0
        1f4e34:	15900000 	ldrne	r0, [r0]
        1f4e38:	15840000 	strne	r0, [r4]
        1f4e3c:	e1a00006 	mov	r0, r6
        1f4e40:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1f4e44:	0c100810 	ldceq	8, cr0, [r0], -#64
    */
}

/**
 * Symbol: ValidateWord2(AirusAParmBlock **, char *, unsigned long *)
 * Address: 001f4e48
 */
ValidateWord2(AirusAParmBlock **, char *, unsigned long *) {
    /*
        1f4e48:	e1a0c00d 	mov	ip, sp
        1f4e4c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f4e50:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f4e54:	e1a06000 	mov	r6, r0
        1f4e58:	e1a04001 	mov	r4, r1
        1f4e5c:	e1a05002 	mov	r5, r2
        1f4e60:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1f4e64:	e3e08000 	mvn	r8, #0	; 0x0
        1f4e68:	e5d17000 	ldrb	r7, [r1]
        1f4e6c:	e59f0068 	ldr	r0, [pc, #68]	; 1f4edc <ValidateWord2(AirusAParmBlock **, char *, unsigned long *)+0x94>
        1f4e70:	e7d00007 	ldrb	r0, [r0, r7]
        1f4e74:	e200a010 	and	sl, r0, #16	; 0x10
        1f4e78:	e2009008 	and	r9, r0, #8	; 0x8
        1f4e7c:	e28d0004 	add	r0, sp, #4	; 0x4
        1f4e80:	e58d0000 	str	r0, [sp]
        1f4e84:	e3a00000 	mov	r0, #0	; 0x0
        1f4e88:	e3a03000 	mov	r3, #0	; 0x0
        1f4e8c:	e5850000 	str	r0, [r5]
        1f4e90:	e92d0008 	stmdb	sp!, {r3}
        1f4e94:	e28d3004 	add	r3, sp, #4	; 0x4
        1f4e98:	e1a01004 	mov	r1, r4
        1f4e9c:	e1a00006 	mov	r0, r6
        1f4ea0:	e3a02000 	mov	r2, #0	; 0x0
        1f4ea4:	eb60307b 	bl	1a01098 <$VerifyString>
        1f4ea8:	e28dd004 	add	sp, sp, #4	; 0x4
        1f4eac:	e59f002c 	ldr	r0, [pc, #2c]	; 1f4ee0 <ValidateWord2(AirusAParmBlock **, char *, unsigned long *)+0x98>
        1f4eb0:	e58d0008 	str	r0, [sp, #8]
        1f4eb4:	e5900000 	ldr	r0, [r0]
        1f4eb8:	e3300002 	teq	r0, #2	; 0x2
        1f4ebc:	13300003 	teqne	r0, #3	; 0x3
        1f4ec0:	1a000007 	bne	1f4ee4 <ValidateWord2(AirusAParmBlock **, char *, unsigned long *)+0x9c>
        1f4ec4:	e5960000 	ldr	r0, [r6]
        1f4ec8:	e5b08004 	ldr	r8, [r0, #4]!
        1f4ecc:	e1b0000a 	movs	r0, sl
        1f4ed0:	13a00080 	movne	r0, #128	; 0x80
        1f4ed4:	e5850000 	str	r0, [r5]
        1f4ed8:	ea000025 	b	1f4f74 <ValidateWord2(AirusAParmBlock **, char *, unsigned long *)+0x12c>
        1f4edc:	0038053c 	eoreqs	r0, r8, ip, lsr r5
        1f4ee0:	0c100810 	ldceq	8, cr0, [r0], -#64
        1f4ee4:	e33a0000 	teq	sl, #0	; 0x0
        1f4ee8:	0a000002 	beq	1f4ef8 <ValidateWord2(AirusAParmBlock **, char *, unsigned long *)+0xb0>
        1f4eec:	e1a00007 	mov	r0, r7
        1f4ef0:	eb0011ff 	bl	1f96f4 <DownShift(char)>
        1f4ef4:	ea000003 	b	1f4f08 <ValidateWord2(AirusAParmBlock **, char *, unsigned long *)+0xc0>
        1f4ef8:	e3390000 	teq	r9, #0	; 0x0
        1f4efc:	0a000002 	beq	1f4f0c <ValidateWord2(AirusAParmBlock **, char *, unsigned long *)+0xc4>
        1f4f00:	e1a00007 	mov	r0, r7
        1f4f04:	eb0011ef 	bl	1f96c8 <UpShift(char)>
        1f4f08:	e5c40000 	strb	r0, [r4]
        1f4f0c:	e5d40000 	ldrb	r0, [r4]
        1f4f10:	e1370000 	teq	r7, r0
        1f4f14:	0a000016 	beq	1f4f74 <ValidateWord2(AirusAParmBlock **, char *, unsigned long *)+0x12c>
        1f4f18:	e28d0004 	add	r0, sp, #4	; 0x4
        1f4f1c:	e58d0000 	str	r0, [sp]
        1f4f20:	e3a00000 	mov	r0, #0	; 0x0
        1f4f24:	e3a03000 	mov	r3, #0	; 0x0
        1f4f28:	e5850000 	str	r0, [r5]
        1f4f2c:	e92d0008 	stmdb	sp!, {r3}
        1f4f30:	e28d3004 	add	r3, sp, #4	; 0x4
        1f4f34:	e1a01004 	mov	r1, r4
        1f4f38:	e1a00006 	mov	r0, r6
        1f4f3c:	e3a02000 	mov	r2, #0	; 0x0
        1f4f40:	eb603054 	bl	1a01098 <$VerifyString>
        1f4f44:	e28dd004 	add	sp, sp, #4	; 0x4
        1f4f48:	e59d0008 	ldr	r0, [sp, #8]
        1f4f4c:	e5900000 	ldr	r0, [r0]
        1f4f50:	e3300002 	teq	r0, #2	; 0x2
        1f4f54:	13300003 	teqne	r0, #3	; 0x3
        1f4f58:	1a000004 	bne	1f4f70 <ValidateWord2(AirusAParmBlock **, char *, unsigned long *)+0x128>
        1f4f5c:	e5960000 	ldr	r0, [r6]
        1f4f60:	e5b08004 	ldr	r8, [r0, #4]!
        1f4f64:	e1b00009 	movs	r0, r9
        1f4f68:	13a00080 	movne	r0, #128	; 0x80
        1f4f6c:	e5850000 	str	r0, [r5]
        1f4f70:	e5c47000 	strb	r7, [r4]
        1f4f74:	e1a00008 	mov	r0, r8
        1f4f78:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ValidTurnSequence(TurnData *)
 * Address: 0021f218
 */
ValidTurnSequence(TurnData *) {
    /*
        21f218:	e1a0c00d 	mov	ip, sp
        21f21c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21f220:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f224:	e1a04000 	mov	r4, r0
        21f228:	e3a07000 	mov	r7, #0	; 0x0
        21f22c:	e3a06000 	mov	r6, #0	; 0x0
        21f230:	e3a05001 	mov	r5, #1	; 0x1
        21f234:	e5900000 	ldr	r0, [r0]
        21f238:	e3500001 	cmp	r0, #1	; 0x1
        21f23c:	9a00000c 	bls	21f274 <ValidTurnSequence(TurnData *)+0x5c>
        21f240:	e0840105 	add	r0, r4, r5, lsl #2
        21f244:	e5b01004 	ldr	r1, [r0, #4]!
        21f248:	e5940004 	ldr	r0, [r4, #4]
        21f24c:	eb64fb0b 	bl	1b5de80 <$DeltaAngle>
        21f250:	e1570000 	cmp	r7, r0
        21f254:	c1a07000 	movgt	r7, r0
        21f258:	ca000001 	bgt	21f264 <ValidTurnSequence(TurnData *)+0x4c>
        21f25c:	e1560000 	cmp	r6, r0
        21f260:	b1a06000 	movlt	r6, r0
        21f264:	e2855001 	add	r5, r5, #1	; 0x1
        21f268:	e5940000 	ldr	r0, [r4]
        21f26c:	e1550000 	cmp	r5, r0
        21f270:	3afffff2 	bcc	21f240 <ValidTurnSequence(TurnData *)+0x28>
        21f274:	e0460007 	sub	r0, r6, r7
        21f278:	e350072d 	cmp	r0, #11796480	; 0xb40000
        21f27c:	a3a00000 	movge	r0, #0	; 0x0
        21f280:	b3a00001 	movlt	r0, #1	; 0x1
        21f284:	e20000ff 	and	r0, r0, #255	; 0xff
        21f288:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: VarStretch(long)
 * Address: 0022bde0
 */
VarStretch(long) {
    /*
        22bde0:	e3500002 	cmp	r0, #2	; 0x2
        22bde4:	d3a00000 	movle	r0, #0	; 0x0
        22bde8:	d1a0f00e 	movle	pc, lr
        22bdec:	e0800fa0 	add	r0, r0, r0, lsr #31
        22bdf0:	e1a000c0 	mov	r0, r0, asr #1
        22bdf4:	e2800001 	add	r0, r0, #1	; 0x1
        22bdf8:	e1a01800 	mov	r1, r0, lsl #16
        22bdfc:	e3a00801 	mov	r0, #65536	; 0x10000
        22be00:	ea66d4ae 	b	1be10c0 <$FixedDivide>
    */
}

/**
 * Symbol: V42CreateCompressVars(TCompressVars **)
 * Address: 0025ce1c
 */
V42CreateCompressVars(TCompressVars **) {
    /*
        25ce1c:	e1a0c00d 	mov	ip, sp
        25ce20:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25ce24:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ce28:	e1a04000 	mov	r4, r0
        25ce2c:	e3a00f75 	mov	r0, #468	; 0x1d4
        25ce30:	e2800b0e 	add	r0, r0, #14336	; 0x3800
        25ce34:	eb65e74b 	bl	1bd6b68 <$malloc>
        25ce38:	e5840000 	str	r0, [r4]
        25ce3c:	e3300000 	teq	r0, #0	; 0x0
        25ce40:	13a00000 	movne	r0, #0	; 0x0
        25ce44:	03a000e9 	moveq	r0, #233	; 0xe9
        25ce48:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        25ce4c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: V42DisposeCompressVars(TCompressVars *)
 * Address: 0025ce50
 */
V42DisposeCompressVars(TCompressVars *) {
    /*
        25ce50:	e3300000 	teq	r0, #0	; 0x0
        25ce54:	1a65d6bf 	bne	1bd2958 <$free>
        25ce58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: V42InitCompress__FP13TCompressVarsUiN22PFUlUc_vT5l
 * Address: 0025dab0
 */
void globals::V42InitCompress() {
    /*
        25dab0:	e1a0c00d 	mov	ip, sp
        25dab4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25dab8:	e24cb004 	sub	fp, ip, #4	; 0x4
        25dabc:	e1a04000 	mov	r4, r0
        25dac0:	e2845a03 	add	r5, r4, #12288	; 0x3000
        25dac4:	e99b4001 	ldmib	fp, {r0, lr}
        25dac8:	e59bc00c 	ldr	ip, [fp, #12]
        25dacc:	e3300000 	teq	r0, #0	; 0x0
        25dad0:	12855d27 	addne	r5, r5, #2496	; 0x9c0
        25dad4:	19854001 	stmneib	r5, {r0, lr}
        25dad8:	1585c00c 	strne	ip, [r5, #12]
        25dadc:	12455d27 	subne	r5, r5, #2496	; 0x9c0
        25dae0:	1a000005 	bne	25dafc <V42InitCompress__FP13TCompressVarsUiN22PFUlUc_vT5l+0x4c>
        25dae4:	e59f0120 	ldr	r0, [pc, #120]	; 25dc0c <V42InitCompress__FP13TCompressVarsUiN22PFUlUc_vT5l+0x15c>
        25dae8:	e58509c4 	str	r0, [r5, #2500]
        25daec:	e59f011c 	ldr	r0, [pc, #11c]	; 25dc10 <V42InitCompress__FP13TCompressVarsUiN22PFUlUc_vT5l+0x160>
        25daf0:	e2855e9d 	add	r5, r5, #2512	; 0x9d0
        25daf4:	e9050011 	stmdb	r5, {r0, r4}
        25daf8:	e2455e9d 	sub	r5, r5, #2512	; 0x9d0
        25dafc:	e884000e 	stmia	r4, {r1, r2, r3}
        25db00:	e3a06000 	mov	r6, #0	; 0x0
        25db04:	e5842014 	str	r2, [r4, #20]
        25db08:	e58569b4 	str	r6, [r5, #2484]
        25db0c:	e58569b8 	str	r6, [r5, #2488]
        25db10:	e58569bc 	str	r6, [r5, #2492]
        25db14:	e58569c0 	str	r6, [r5, #2496]
        25db18:	e5c4602d 	strb	r6, [r4, #45]
        25db1c:	e5c4602c 	strb	r6, [r4, #44]
        25db20:	e3a00001 	mov	r0, #1	; 0x1
        25db24:	e5c4002f 	strb	r0, [r4, #47]
        25db28:	e5c4602e 	strb	r6, [r4, #46]
        25db2c:	e3a02003 	mov	r2, #3	; 0x3
        25db30:	e5c42031 	strb	r2, [r4, #49]
        25db34:	e5c46030 	strb	r6, [r4, #48]
        25db38:	e3a00007 	mov	r0, #7	; 0x7
        25db3c:	e5c40033 	strb	r0, [r4, #51]
        25db40:	e5c46032 	strb	r6, [r4, #50]
        25db44:	e3a0000f 	mov	r0, #15	; 0xf
        25db48:	e5c40035 	strb	r0, [r4, #53]
        25db4c:	e5c46034 	strb	r6, [r4, #52]
        25db50:	e3a0001f 	mov	r0, #31	; 0x1f
        25db54:	e5c40037 	strb	r0, [r4, #55]
        25db58:	e5c46036 	strb	r6, [r4, #54]
        25db5c:	e3a0003f 	mov	r0, #63	; 0x3f
        25db60:	e5c40039 	strb	r0, [r4, #57]
        25db64:	e5c46038 	strb	r6, [r4, #56]
        25db68:	e3a0007f 	mov	r0, #127	; 0x7f
        25db6c:	e5c4003b 	strb	r0, [r4, #59]
        25db70:	e5c4603a 	strb	r6, [r4, #58]
        25db74:	e3a000ff 	mov	r0, #255	; 0xff
        25db78:	e5c4003d 	strb	r0, [r4, #61]
        25db7c:	e5c4603c 	strb	r6, [r4, #60]
        25db80:	e3a00c02 	mov	r0, #512	; 0x200
        25db84:	e3a0c009 	mov	ip, #9	; 0x9
        25db88:	e584c010 	str	ip, [r4, #16]
        25db8c:	e594c014 	ldr	ip, [r4, #20]
        25db90:	e35c0c02 	cmp	ip, #512	; 0x200
        25db94:	9a000005 	bls	25dbb0 <V42InitCompress__FP13TCompressVarsUiN22PFUlUc_vT5l+0x100>
        25db98:	e1a00080 	mov	r0, r0, lsl #1
        25db9c:	e594e010 	ldr	lr, [r4, #16]
        25dba0:	e28ee001 	add	lr, lr, #1	; 0x1
        25dba4:	e15c0000 	cmp	ip, r0
        25dba8:	e584e010 	str	lr, [r4, #16]
        25dbac:	8afffff9 	bhi	25db98 <V42InitCompress__FP13TCompressVarsUiN22PFUlUc_vT5l+0xe8>
        25dbb0:	e3a00008 	mov	r0, #8	; 0x8
        25dbb4:	e5840018 	str	r0, [r4, #24]
        25dbb8:	e3a00c01 	mov	r0, #256	; 0x100
        25dbbc:	e584001c 	str	r0, [r4, #28]
        25dbc0:	e3a00003 	mov	r0, #3	; 0x3
        25dbc4:	e2800c01 	add	r0, r0, #256	; 0x100
        25dbc8:	e3310003 	teq	r1, #3	; 0x3
        25dbcc:	e2844020 	add	r4, r4, #32	; 0x20
        25dbd0:	e884000d 	stmia	r4, {r0, r2, r3}
        25dbd4:	e5246014 	str	r6, [r4, -#20]!
        25dbd8:	e244400c 	sub	r4, r4, #12	; 0xc
        25dbdc:	05940004 	ldreq	r0, [r4, #4]
        25dbe0:	0584000c 	streq	r0, [r4, #12]
        25dbe4:	e58569b4 	str	r6, [r5, #2484]
        25dbe8:	e58569b8 	str	r6, [r5, #2488]
        25dbec:	e58569bc 	str	r6, [r5, #2492]
        25dbf0:	e1a00004 	mov	r0, r4
        25dbf4:	e58569c0 	str	r6, [r5, #2496]
        25dbf8:	eb5eb67b 	bl	1a0b5ec <$BTInitEn(TCompressVars *)>
        25dbfc:	e1a00004 	mov	r0, r4
        25dc00:	eb5eb678 	bl	1a0b5e8 <$BTInitDe(TCompressVars *)>
        25dc04:	e5a569d0 	str	r6, [r5, #2512]!
        25dc08:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        25dc0c:	01a139cc 	moveq	r3, ip, asr #19
        25dc10:	01a139c8 	moveq	r3, r8, asr #19
    */
}

/**
 * Symbol: VMemInit(void)
 * Address: 0025ddb4
 */
VMemInit(void) {
    /*
        25ddb4:	e1a0c00d 	mov	ip, sp
        25ddb8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        25ddbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ddc0:	e24dd008 	sub	sp, sp, #8	; 0x8
        25ddc4:	eb65db14 	bl	1bd4a1c <$GetRAMSize>
        25ddc8:	e3a01000 	mov	r1, #0	; 0x0
        25ddcc:	e58d1004 	str	r1, [sp, #4]
        25ddd0:	e58d1000 	str	r1, [sp]
        25ddd4:	e59f7210 	ldr	r7, [pc, #210]	; 25dfec <VMemInit(void)+0x238>
        25ddd8:	e5971000 	ldr	r1, [r7]
        25dddc:	e1a02a01 	mov	r2, r1, lsl #20
        25dde0:	e1b02a22 	movs	r2, r2, lsr #20
        25dde4:	e3a03a01 	mov	r3, #4096	; 0x1000
        25dde8:	0a000003 	beq	25ddfc <VMemInit(void)+0x48>
        25ddec:	e0432002 	sub	r2, r3, r2
        25ddf0:	e58d1004 	str	r1, [sp, #4]
        25ddf4:	e0811002 	add	r1, r1, r2
        25ddf8:	e5871000 	str	r1, [r7]
        25ddfc:	e5971000 	ldr	r1, [r7]
        25de00:	e59f61e8 	ldr	r6, [pc, #1e8]	; 25dff0 <VMemInit(void)+0x23c>
        25de04:	e5861000 	str	r1, [r6]
        25de08:	e1a01620 	mov	r1, r0, lsr #12
        25de0c:	e59f41e0 	ldr	r4, [pc, #1e0]	; 25dff4 <VMemInit(void)+0x240>
        25de10:	e5940000 	ldr	r0, [r4]
        25de14:	e0410000 	sub	r0, r1, r0
        25de18:	e1a05000 	mov	r5, r0
        25de1c:	eb04b336 	bl	38aafc <C$$dtorvec$$Limit+0x188>
        25de20:	e1a00620 	mov	r0, r0, lsr #12
        25de24:	e2808001 	add	r8, r0, #1	; 0x1
        25de28:	e0450008 	sub	r0, r5, r8
        25de2c:	e1a05000 	mov	r5, r0
        25de30:	eb04b331 	bl	38aafc <C$$dtorvec$$Limit+0x188>
        25de34:	e1b00a00 	movs	r0, r0, lsl #20
        25de38:	0a000006 	beq	25de58 <VMemInit(void)+0xa4>
        25de3c:	e1a00005 	mov	r0, r5
        25de40:	eb04b32d 	bl	38aafc <C$$dtorvec$$Limit+0x188>
        25de44:	e5971000 	ldr	r1, [r7]
        25de48:	e0800001 	add	r0, r0, r1
        25de4c:	e58d0000 	str	r0, [sp]
        25de50:	e1a00005 	mov	r0, r5
        25de54:	eb04b328 	bl	38aafc <C$$dtorvec$$Limit+0x188>
        25de58:	e59f9198 	ldr	r9, [pc, #198]	; 25dff8 <VMemInit(void)+0x244>
        25de5c:	e3380000 	teq	r8, #0	; 0x0
        25de60:	0a00000f 	beq	25dea4 <VMemInit(void)+0xf0>
        25de64:	e1a01009 	mov	r1, r9
        25de68:	e5940000 	ldr	r0, [r4]
        25de6c:	ebfb034d 	bl	11eba8 <GetPPage__9TRAMTableSFUlP9SBankInfo>
        25de70:	e1a02000 	mov	r2, r0
        25de74:	e3a03001 	mov	r3, #1	; 0x1
        25de78:	e3a010ff 	mov	r1, #255	; 0xff
        25de7c:	e5970000 	ldr	r0, [r7]
        25de80:	ebfb046a 	bl	11f030 <RememberMappingUsingPAddr>
        25de84:	e5970000 	ldr	r0, [r7]
        25de88:	e2800a01 	add	r0, r0, #4096	; 0x1000
        25de8c:	e2588001 	subs	r8, r8, #1	; 0x1
        25de90:	e5870000 	str	r0, [r7]
        25de94:	e5940000 	ldr	r0, [r4]
        25de98:	e2800001 	add	r0, r0, #1	; 0x1
        25de9c:	e5840000 	str	r0, [r4]
        25dea0:	1affffef 	bne	25de64 <VMemInit(void)+0xb0>
        25dea4:	e5940000 	ldr	r0, [r4]
        25dea8:	e586000c 	str	r0, [r6, #12]
        25deac:	e24dd008 	sub	sp, sp, #8	; 0x8
        25deb0:	e0800005 	add	r0, r0, r5
        25deb4:	e5840000 	str	r0, [r4]
        25deb8:	e3a00000 	mov	r0, #0	; 0x0
        25debc:	e5967000 	ldr	r7, [r6]
        25dec0:	e5870008 	str	r0, [r7, #8]
        25dec4:	eb04b2f8 	bl	38aaac <C$$dtorvec$$Limit+0x138>
        25dec8:	e1a01000 	mov	r1, r0
        25decc:	e1a00007 	mov	r0, r7
        25ded0:	eb627bd0 	bl	1afce18 <TSingleQContainer::$Init(unsigned long)>
        25ded4:	e3a07000 	mov	r7, #0	; 0x0
        25ded8:	e28d2004 	add	r2, sp, #4	; 0x4
        25dedc:	e1a0100d 	mov	r1, sp
        25dee0:	e1a00007 	mov	r0, r7
        25dee4:	eb65daca 	bl	1bd4a14 <$GetPersistentRef__13MemObjManagerSFUlPP17PersistentDBEntryPl>
        25dee8:	e3300000 	teq	r0, #0	; 0x0
        25deec:	0a00000b 	beq	25df20 <VMemInit(void)+0x16c>
        25def0:	eb04b2ed 	bl	38aaac <C$$dtorvec$$Limit+0x138>
        25def4:	e1a01000 	mov	r1, r0
        25def8:	e59d0000 	ldr	r0, [sp]
        25defc:	e2800014 	add	r0, r0, #20	; 0x14
        25df00:	eb627bc4 	bl	1afce18 <TSingleQContainer::$Init(unsigned long)>
        25df04:	e2877001 	add	r7, r7, #1	; 0x1
        25df08:	e28d2004 	add	r2, sp, #4	; 0x4
        25df0c:	e1a0100d 	mov	r1, sp
        25df10:	e1a00007 	mov	r0, r7
        25df14:	eb65dabe 	bl	1bd4a14 <$GetPersistentRef__13MemObjManagerSFUlPP17PersistentDBEntryPl>
        25df18:	e3300000 	teq	r0, #0	; 0x0
        25df1c:	1afffff3 	bne	25def0 <VMemInit(void)+0x13c>
        25df20:	e3a08000 	mov	r8, #0	; 0x0
        25df24:	e3550000 	cmp	r5, #0	; 0x0
        25df28:	9a000025 	bls	25dfc4 <VMemInit(void)+0x210>
        25df2c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        25df30:	e1a01009 	mov	r1, r9
        25df34:	e5940000 	ldr	r0, [r4]
        25df38:	e2400001 	sub	r0, r0, #1	; 0x1
        25df3c:	e5840000 	str	r0, [r4]
        25df40:	ebfb0318 	bl	11eba8 <GetPPage__9TRAMTableSFUlP9SBankInfo>
        25df44:	e1a0a000 	mov	sl, r0
        25df48:	e0681188 	rsb	r1, r8, r8, lsl #3
        25df4c:	e5960000 	ldr	r0, [r6]
        25df50:	e0800101 	add	r0, r0, r1, lsl #2
        25df54:	e280700c 	add	r7, r0, #12	; 0xc
        25df58:	e1a0000d 	mov	r0, sp
        25df5c:	eb62461c 	bl	1aef7d4 <TLittlePhys::$__ct(void)>
        25df60:	e1a00007 	mov	r0, r7
        25df64:	e1a0e00d 	mov	lr, sp
        25df68:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        25df6c:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        25df70:	e89e100c 	ldmia	lr, {r2, r3, ip}
        25df74:	e880100c 	stmia	r0, {r2, r3, ip}
        25df78:	e3a03001 	mov	r3, #1	; 0x1
        25df7c:	e92d0008 	stmdb	sp!, {r3}
        25df80:	e1a0100a 	mov	r1, sl
        25df84:	e1a00007 	mov	r0, r7
        25df88:	e3a03000 	mov	r3, #0	; 0x0
        25df8c:	e3a02a01 	mov	r2, #4096	; 0x1000
        25df90:	eb627ba8 	bl	1afce38 <TPhys::$Init(unsigned long, unsigned long, unsigned char, unsigned char)>
        25df94:	e28dd004 	add	sp, sp, #4	; 0x4
        25df98:	e5970010 	ldr	r0, [r7, #16]
        25df9c:	e1a00620 	mov	r0, r0, lsr #12
        25dfa0:	e1a00600 	mov	r0, r0, lsl #12
        25dfa4:	eb62b163 	bl	1b0a538 <$ZeroPhysPage(unsigned long)>
        25dfa8:	e1a01007 	mov	r1, r7
        25dfac:	e5960000 	ldr	r0, [r6]
        25dfb0:	eb629052 	bl	1b02100 <TPageTracker::$Put(TLittlePhys *)>
        25dfb4:	e28dd01c 	add	sp, sp, #28	; 0x1c
        25dfb8:	e2888001 	add	r8, r8, #1	; 0x1
        25dfbc:	e1580005 	cmp	r8, r5
        25dfc0:	3affffd9 	bcc	25df2c <VMemInit(void)+0x178>
        25dfc4:	e59f0030 	ldr	r0, [pc, #30]	; 25dffc <VMemInit(void)+0x248>
        25dfc8:	e1a04000 	mov	r4, r0
        25dfcc:	eb627fb7 	bl	1afdeb0 <$InitSafeHeap(SSafeHeapPage **)>
        25dfd0:	e5941000 	ldr	r1, [r4]
        25dfd4:	e59d000c 	ldr	r0, [sp, #12]
        25dfd8:	eb62524f 	bl	1af291c <$AddPartialPageToSafeHeap(void *, SSafeHeapPage *)>
        25dfdc:	e5941000 	ldr	r1, [r4]
        25dfe0:	e59d0008 	ldr	r0, [sp, #8]
        25dfe4:	eb62524c 	bl	1af291c <$AddPartialPageToSafeHeap(void *, SSafeHeapPage *)>
        25dfe8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        25dfec:	0c101168 	ldfeqs	f1, [r0], -#416
        25dff0:	0c104f48 	ldceq	15, cr4, [r0], -#288
        25dff4:	0c10116c 	ldfeqs	f1, [r0], -#432
        25dff8:	0c1063e4 	ldceq	3, cr6, [r0], -#912
        25dffc:	0c101080 	ldceq	0, cr1, [r0], -#512
    */
}

/**
 * Symbol: ViewContainsCaretView(TView *)
 * Address: 00265508
 */
ViewContainsCaretView(TView *) {
    /*
        265508:	e59f101c 	ldr	r1, [pc, #1c]	; 26552c <ViewContainsCaretView(TView *)+0x24>
        26550c:	e5911000 	ldr	r1, [r1]
        265510:	e1a03001 	mov	r3, r1
        265514:	e5911068 	ldr	r1, [r1, #104]
        265518:	e3310000 	teq	r1, #0	; 0x0
        26551c:	03a00000 	moveq	r0, #0	; 0x0
        265520:	01a0f00e 	moveq	pc, lr
        265524:	e3a02000 	mov	r2, #0	; 0x0
        265528:	ea000007 	b	26554c <ViewContainsCaretView(TView *)+0x44>
        26552c:	0c101934 	ldceq	9, cr1, [r0], -#208
        265530:	e1310000 	teq	r1, r0
        265534:	1591101c 	ldrne	r1, [r1, #28]
        265538:	1a000001 	bne	265544 <ViewContainsCaretView(TView *)+0x3c>
        26553c:	e3a02001 	mov	r2, #1	; 0x1
        265540:	ea000003 	b	265554 <ViewContainsCaretView(TView *)+0x4c>
        265544:	e3320000 	teq	r2, #0	; 0x0
        265548:	1a000001 	bne	265554 <ViewContainsCaretView(TView *)+0x4c>
        26554c:	e1310003 	teq	r1, r3
        265550:	1afffff6 	bne	265530 <ViewContainsCaretView(TView *)+0x28>
        265554:	e1a00002 	mov	r0, r2
        265558:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: VetHeap
 * Address: 00271e34
 */
void globals::VetHeap() {
    /*
        271e34:	e1a0c00d 	mov	ip, sp
        271e38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        271e3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        271e40:	e1a04000 	mov	r4, r0
        271e44:	e1a05001 	mov	r5, r1
        271e48:	eb641762 	bl	1b77bd8 <$BasicVetHeap>
        271e4c:	e3300000 	teq	r0, #0	; 0x0
        271e50:	1a000004 	bne	271e68 <VetHeap+0x34>
        271e54:	e1a01005 	mov	r1, r5
        271e58:	e1a00004 	mov	r0, r4
        271e5c:	e3a03000 	mov	r3, #0	; 0x0
        271e60:	e3a02000 	mov	r2, #0	; 0x0
        271e64:	eb641f9e 	bl	1b79ce4 <$WalkEachBlock>
        271e68:	e3300000 	teq	r0, #0	; 0x0
        271e6c:	01a01005 	moveq	r1, r5
        271e70:	01a00004 	moveq	r0, r4
        271e74:	0b641f98 	bleq	1b79cdc <$VetFreeList>
        271e78:	e3300000 	teq	r0, #0	; 0x0
        271e7c:	01a01005 	moveq	r1, r5
        271e80:	01a00004 	moveq	r0, r4
        271e84:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        271e88:	0a641f94 	beq	1b79ce0 <$VetHandles>
        271e8c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: VetDynBlock
 * Address: 00271e90
 */
void globals::VetDynBlock() {
    /*
        271e90:	e1a0c00d 	mov	ip, sp
        271e94:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        271e98:	e24cb004 	sub	fp, ip, #4	; 0x4
        271e9c:	e1a06000 	mov	r6, r0
        271ea0:	e1a04001 	mov	r4, r1
        271ea4:	e1a05002 	mov	r5, r2
        271ea8:	e1a07001 	mov	r7, r1
        271eac:	eb641f87 	bl	1b79cd0 <$VetBlock>
        271eb0:	e3300000 	teq	r0, #0	; 0x0
        271eb4:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        271eb8:	e5971008 	ldr	r1, [r7, #8]
        271ebc:	e3a02000 	mov	r2, #0	; 0x0
        271ec0:	e5b60098 	ldr	r0, [r6, #152]!
        271ec4:	eb641744 	bl	1b77bdc <$CheckPointer>
        271ec8:	e3500000 	cmp	r0, #0	; 0x0
        271ecc:	1a000007 	bne	271ef0 <VetDynBlock+0x60>
        271ed0:	e5b71008 	ldr	r1, [r7, #8]!
        271ed4:	e5911000 	ldr	r1, [r1]
        271ed8:	e2842010 	add	r2, r4, #16	; 0x10
        271edc:	e1310002 	teq	r1, r2
        271ee0:	13e000de 	mvnne	r0, #222	; 0xde
        271ee4:	12400b21 	subne	r0, r0, #33792	; 0x8400
        271ee8:	1a000001 	bne	271ef4 <VetDynBlock+0x64>
        271eec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        271ef0:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        271ef4:	e3350000 	teq	r5, #0	; 0x0
        271ef8:	15854000 	strne	r4, [r5]
        271efc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: VetFreeList
 * Address: 0027250c
 */
void globals::VetFreeList() {
    /*
        27250c:	e1a0c00d 	mov	ip, sp
        272510:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        272514:	e24cb004 	sub	fp, ip, #4	; 0x4
        272518:	e1a04000 	mov	r4, r0
        27251c:	e3a00000 	mov	r0, #0	; 0x0
        272520:	e52d0004 	str	r0, [sp, -#4]!
        272524:	e1a0300d 	mov	r3, sp
        272528:	e59f2050 	ldr	r2, [pc, #50]	; 272580 <VetFreeList+0x74>
        27252c:	e1a00004 	mov	r0, r4
        272530:	e3a01000 	mov	r1, #0	; 0x0
        272534:	eb641dea 	bl	1b79ce4 <$WalkEachBlock>
        272538:	e3a00000 	mov	r0, #0	; 0x0
        27253c:	e58d0000 	str	r0, [sp]
        272540:	e5940020 	ldr	r0, [r4, #32]
        272544:	e3300000 	teq	r0, #0	; 0x0
        272548:	0a000006 	beq	272568 <VetFreeList+0x5c>
        27254c:	e59d1000 	ldr	r1, [sp]
        272550:	e5902000 	ldr	r2, [r0]
        272554:	e0811002 	add	r1, r1, r2
        272558:	e58d1000 	str	r1, [sp]
        27255c:	e5900004 	ldr	r0, [r0, #4]
        272560:	e3300000 	teq	r0, #0	; 0x0
        272564:	1afffff8 	bne	27254c <VetFreeList+0x40>
        272568:	e5b4101c 	ldr	r1, [r4, #28]!
        27256c:	e59d0000 	ldr	r0, [sp]
        272570:	e0510000 	subs	r0, r1, r0
        272574:	13e000dd 	mvnne	r0, #221	; 0xdd
        272578:	12400b21 	subne	r0, r0, #33792	; 0x8400
        27257c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        272580:	002724ec 	eoreq	r2, r7, ip, ror #9
    */
}

/**
 * Symbol: VetHandles
 * Address: 00272584
 */
void globals::VetHandles() {
    /*
        272584:	e3a00000 	mov	r0, #0	; 0x0
        272588:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: VetBlock
 * Address: 0027258c
 */
void globals::VetBlock() {
    /*
        27258c:	e3a00000 	mov	r0, #0	; 0x0
        272590:	e5913004 	ldr	r3, [r1, #4]
        272594:	e3530010 	cmp	r3, #16	; 0x10
        272598:	33e000d8 	mvncc	r0, #216	; 0xd8
        27259c:	32400b21 	subcc	r0, r0, #33792	; 0x8400
        2725a0:	3a000007 	bcc	2725c4 <VetBlock+0x38>
        2725a4:	e3130003 	tst	r3, #3	; 0x3
        2725a8:	13e000d7 	mvnne	r0, #215	; 0xd7
        2725ac:	12400b21 	subne	r0, r0, #33792	; 0x8400
        2725b0:	1a000003 	bne	2725c4 <VetBlock+0x38>
        2725b4:	e3530201 	cmp	r3, #268435456	; 0x10000000
        2725b8:	d1a0f00e 	movle	pc, lr
        2725bc:	e3e000d9 	mvn	r0, #217	; 0xd9
        2725c0:	e2400b21 	sub	r0, r0, #33792	; 0x8400
        2725c4:	e3320000 	teq	r2, #0	; 0x0
        2725c8:	15821000 	strne	r1, [r2]
        2725cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: VetDirBlock
 * Address: 002725d0
 */
void globals::VetDirBlock() {
    /*
        2725d0:	ea641dbe 	b	1b79cd0 <$VetBlock>
    */
}

/**
 * Symbol: v_MostFarFromChord__FP14tag_WORD_TRACEiT2
 * Address: 0028686c
 */
void globals::v_MostFarFromChord() {
    /*
        28686c:	e92d43f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, lr}
        286870:	e7903182 	ldr	r3, [r0, r2, lsl #3]
        286874:	e1a03843 	mov	r3, r3, asr #16
        286878:	e790c181 	ldr	ip, [r0, r1, lsl #3]
        28687c:	e1a0c84c 	mov	ip, ip, asr #16
        286880:	e043600c 	sub	r6, r3, ip
        286884:	e0803182 	add	r3, r0, r2, lsl #3
        286888:	e593e002 	ldr	lr, [r3, #2]
        28688c:	e0803181 	add	r3, r0, r1, lsl #3
        286890:	e5933002 	ldr	r3, [r3, #2]
        286894:	e1a03843 	mov	r3, r3, asr #16
        286898:	e063484e 	rsb	r4, r3, lr, asr #16
        28689c:	e00c0c94 	mul	ip, r4, ip
        2868a0:	e0030396 	mul	r3, r6, r3
        2868a4:	e04c7003 	sub	r7, ip, r3
        2868a8:	e3a0c001 	mov	ip, #1	; 0x1
        2868ac:	e081300c 	add	r3, r1, ip
        2868b0:	e3a0e000 	mov	lr, #0	; 0x0
        2868b4:	e1530002 	cmp	r3, r2
        2868b8:	ca000021 	bgt	286944 <v_MostFarFromChord__FP14tag_WORD_TRACEiT2+0xd8>
        2868bc:	e0808183 	add	r8, r0, r3, lsl #3
        2868c0:	e5988002 	ldr	r8, [r8, #2]
        2868c4:	e1a08848 	mov	r8, r8, asr #16
        2868c8:	e3780001 	cmn	r8, #1	; 0x1
        2868cc:	0a000018 	beq	286934 <v_MostFarFromChord__FP14tag_WORD_TRACEiT2+0xc8>
        2868d0:	e0090896 	mul	r9, r6, r8
        2868d4:	e7908183 	ldr	r8, [r0, r3, lsl #3]
        2868d8:	e1a08848 	mov	r8, r8, asr #16
        2868dc:	e0080894 	mul	r8, r4, r8
        2868e0:	e0498008 	sub	r8, r9, r8
        2868e4:	e0988007 	adds	r8, r8, r7
        2868e8:	42688000 	rsbmi	r8, r8, #0	; 0x0
        2868ec:	e158000e 	cmp	r8, lr
        2868f0:	da000004 	ble	286908 <v_MostFarFromChord__FP14tag_WORD_TRACEiT2+0x9c>
        2868f4:	e1a0e008 	mov	lr, r8
        2868f8:	e1a01003 	mov	r1, r3
        2868fc:	e3a05000 	mov	r5, #0	; 0x0
        286900:	e3a0c001 	mov	ip, #1	; 0x1
        286904:	ea00000b 	b	286938 <v_MostFarFromChord__FP14tag_WORD_TRACEiT2+0xcc>
        286908:	e33c0000 	teq	ip, #0	; 0x0
        28690c:	0a000008 	beq	286934 <v_MostFarFromChord__FP14tag_WORD_TRACEiT2+0xc8>
        286910:	e138000e 	teq	r8, lr
        286914:	1a000006 	bne	286934 <v_MostFarFromChord__FP14tag_WORD_TRACEiT2+0xc8>
        286918:	e3550000 	cmp	r5, #0	; 0x0
        28691c:	0a000002 	beq	28692c <v_MostFarFromChord__FP14tag_WORD_TRACEiT2+0xc0>
        286920:	e2811001 	add	r1, r1, #1	; 0x1
        286924:	13a05000 	movne	r5, #0	; 0x0
        286928:	1a000002 	bne	286938 <v_MostFarFromChord__FP14tag_WORD_TRACEiT2+0xcc>
        28692c:	e3a05001 	mov	r5, #1	; 0x1
        286930:	ea000000 	b	286938 <v_MostFarFromChord__FP14tag_WORD_TRACEiT2+0xcc>
        286934:	e3a0c000 	mov	ip, #0	; 0x0
        286938:	e2833001 	add	r3, r3, #1	; 0x1
        28693c:	e1530002 	cmp	r3, r2
        286940:	daffffdd 	ble	2868bc <v_MostFarFromChord__FP14tag_WORD_TRACEiT2+0x50>
        286944:	e1a00001 	mov	r0, r1
        286948:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
    */
}

/**
 * Symbol: v_QDistFromChord__FiN51
 * Address: 0028694c
 */
void globals::v_QDistFromChord() {
    /*
        28694c:	e1a0c00d 	mov	ip, sp
        286950:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        286954:	e24cb004 	sub	fp, ip, #4	; 0x4
        286958:	e59be004 	ldr	lr, [fp, #4]
        28695c:	e04e8000 	sub	r8, lr, r0
        286960:	e59bc008 	ldr	ip, [fp, #8]
        286964:	e04c7001 	sub	r7, ip, r1
        286968:	e042e000 	sub	lr, r2, r0
        28696c:	e043c001 	sub	ip, r3, r1
        286970:	e1300002 	teq	r0, r2
        286974:	01310003 	teqeq	r1, r3
        286978:	00000898 	muleq	r0, r8, r8
        28697c:	00200797 	mlaeq	r0, r7, r7, r0
        286980:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        286984:	e001089e 	mul	r1, lr, r8
        286988:	e02a179c 	mla	sl, ip, r7, r1
        28698c:	e0000e9e 	mul	r0, lr, lr
        286990:	e0260c9c 	mla	r6, ip, ip, r0
        286994:	e1a0100a 	mov	r1, sl
        286998:	e1a00006 	mov	r0, r6
        28699c:	eb64afe7 	bl	1bb2940 <$__rt_sdiv>
        2869a0:	e1a09000 	mov	r9, r0
        2869a4:	e1a00001 	mov	r0, r1
        2869a8:	e1a05001 	mov	r5, r1
        2869ac:	eb5fa7ae 	bl	1a7086c <$HWRLAbs(long)>
        2869b0:	e250cc7f 	subs	ip, r0, #32512	; 0x7f00
        2869b4:	a35c00ff 	cmpge	ip, #255	; 0xff
        2869b8:	da00001a 	ble	286a28 <v_QDistFromChord__FiN51+0xdc>
        2869bc:	e1a00005 	mov	r0, r5
        2869c0:	eb5fa7a9 	bl	1a7086c <$HWRLAbs(long)>
        2869c4:	e1a04000 	mov	r4, r0
        2869c8:	e1a00006 	mov	r0, r6
        2869cc:	e3a01902 	mov	r1, #32768	; 0x8000
        2869d0:	e2411001 	sub	r1, r1, #1	; 0x1
        2869d4:	ea000002 	b	2869e4 <v_QDistFromChord__FiN51+0x98>
        2869d8:	e1a040c4 	mov	r4, r4, asr #1
        2869dc:	e2800002 	add	r0, r0, #2	; 0x2
        2869e0:	e1a00140 	mov	r0, r0, asr #2
        2869e4:	e1540001 	cmp	r4, r1
        2869e8:	ba000001 	blt	2869f4 <v_QDistFromChord__FiN51+0xa8>
        2869ec:	e3500040 	cmp	r0, #64	; 0x40
        2869f0:	cafffff8 	bgt	2869d8 <v_QDistFromChord__FiN51+0x8c>
        2869f4:	e3500040 	cmp	r0, #64	; 0x40
        2869f8:	ca000004 	bgt	286a10 <v_QDistFromChord__FiN51+0xc4>
        2869fc:	e08410c0 	add	r1, r4, r0, asr #1
        286a00:	e2611000 	rsb	r1, r1, #0	; 0x0
        286a04:	eb64afcd 	bl	1bb2940 <$__rt_sdiv>
        286a08:	e0000094 	mul	r0, r4, r0
        286a0c:	ea000002 	b	286a1c <v_QDistFromChord__FiN51+0xd0>
        286a10:	e0010494 	mul	r1, r4, r4
        286a14:	e2611000 	rsb	r1, r1, #0	; 0x0
        286a18:	eb64afc8 	bl	1bb2940 <$__rt_sdiv>
        286a1c:	e3550000 	cmp	r5, #0	; 0x0
        286a20:	b2600000 	rsblt	r0, r0, #0	; 0x0
        286a24:	ea000003 	b	286a38 <v_QDistFromChord__FiN51+0xec>
        286a28:	e0000595 	mul	r0, r5, r5
        286a2c:	e2601000 	rsb	r1, r0, #0	; 0x0
        286a30:	e1a00006 	mov	r0, r6
        286a34:	eb64afc1 	bl	1bb2940 <$__rt_sdiv>
        286a38:	e0200797 	mla	r0, r7, r7, r0
        286a3c:	e0010a99 	mul	r1, r9, sl
        286a40:	e0400001 	sub	r0, r0, r1
        286a44:	e0200898 	mla	r0, r8, r8, r0
        286a48:	e0010995 	mul	r1, r5, r9
        286a4c:	e0400001 	sub	r0, r0, r1
        286a50:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: vozvrat_move__FPsT1P9SPEC_TYPEN23sN26
 * Address: 002bd530
 */
void globals::vozvrat_move() {
    /*
        2bd530:	e1a0c00d 	mov	ip, sp
        2bd534:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2bd538:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2bd53c:	e24cb014 	sub	fp, ip, #20	; 0x14
        2bd540:	e1a05000 	mov	r5, r0
        2bd544:	e1a04001 	mov	r4, r1
        2bd548:	e1a06003 	mov	r6, r3
        2bd54c:	e59b0018 	ldr	r0, [fp, #24]
        2bd550:	e59b1020 	ldr	r1, [fp, #32]
        2bd554:	e59b8014 	ldr	r8, [fp, #20]
        2bd558:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2bd55c:	e1a00800 	mov	r0, r0, lsl #16
        2bd560:	e1a00840 	mov	r0, r0, asr #16
        2bd564:	e59b201c 	ldr	r2, [fp, #28]
        2bd568:	e1a0a802 	mov	sl, r2, lsl #16
        2bd56c:	e1a0a84a 	mov	sl, sl, asr #16
        2bd570:	e1a01801 	mov	r1, r1, lsl #16
        2bd574:	e1a01841 	mov	r1, r1, asr #16
        2bd578:	e58d1000 	str	r1, [sp]
        2bd57c:	e598700c 	ldr	r7, [r8, #12]
        2bd580:	e5d71000 	ldrb	r1, [r7]
        2bd584:	e331000b 	teq	r1, #11	; 0xb
        2bd588:	0597700c 	ldreq	r7, [r7, #12]
        2bd58c:	e5d71000 	ldrb	r1, [r7]
        2bd590:	e3310020 	teq	r1, #32	; 0x20
        2bd594:	0a000006 	beq	2bd5b4 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x84>
        2bd598:	e5972004 	ldr	r2, [r7, #4]
        2bd59c:	e1a02842 	mov	r2, r2, asr #16
        2bd5a0:	e58d2008 	str	r2, [sp, #8]
        2bd5a4:	e2421001 	sub	r1, r2, #1	; 0x1
        2bd5a8:	e5982006 	ldr	r2, [r8, #6]
        2bd5ac:	e1510842 	cmp	r1, r2, asr #16
        2bd5b0:	ca00000d 	bgt	2bd5ec <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0xbc>
        2bd5b4:	e5960010 	ldr	r0, [r6, #16]
        2bd5b8:	e5d00000 	ldrb	r0, [r0]
        2bd5bc:	e3300010 	teq	r0, #16	; 0x10
        2bd5c0:	0a000007 	beq	2bd5e4 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0xb4>
        2bd5c4:	e1a02006 	mov	r2, r6
        2bd5c8:	e1a01004 	mov	r1, r4
        2bd5cc:	e1a00005 	mov	r0, r5
        2bd5d0:	e59b300c 	ldr	r3, [fp, #12]
        2bd5d4:	eb619f41 	bl	1b252e0 <$is_narrow_prev__FPsT1P9SPEC_TYPET3>
        2bd5d8:	e3300000 	teq	r0, #0	; 0x0
        2bd5dc:	13a0002c 	movne	r0, #44	; 0x2c
        2bd5e0:	1a0000ae 	bne	2bd8a0 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x370>
        2bd5e4:	e3a00004 	mov	r0, #4	; 0x4
        2bd5e8:	ea0000ac 	b	2bd8a0 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x370>
        2bd5ec:	e597900c 	ldr	r9, [r7, #12]
        2bd5f0:	e5d91000 	ldrb	r1, [r9]
        2bd5f4:	e331000b 	teq	r1, #11	; 0xb
        2bd5f8:	0599900c 	ldreq	r9, [r9, #12]
        2bd5fc:	e5961008 	ldr	r1, [r6, #8]
        2bd600:	e1a01841 	mov	r1, r1, asr #16
        2bd604:	e7941081 	ldr	r1, [r4, r1, lsl #1]
        2bd608:	e1a01841 	mov	r1, r1, asr #16
        2bd60c:	e1510000 	cmp	r1, r0
        2bd610:	da000007 	ble	2bd634 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x104>
        2bd614:	e0412000 	sub	r2, r1, r0
        2bd618:	e1a0100a 	mov	r1, sl
        2bd61c:	e3a00006 	mov	r0, #6	; 0x6
        2bd620:	e52d2004 	str	r2, [sp, -#4]!
        2bd624:	eb63d4c5 	bl	1bb2940 <$__rt_sdiv>
        2bd628:	e49d2004 	ldr	r2, [sp], #4
        2bd62c:	e1520000 	cmp	r2, r0
        2bd630:	aa000001 	bge	2bd63c <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x10c>
        2bd634:	e3a00003 	mov	r0, #3	; 0x3
        2bd638:	ea000098 	b	2bd8a0 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x370>
        2bd63c:	e59d2008 	ldr	r2, [sp, #8]
        2bd640:	e7942082 	ldr	r2, [r4, r2, lsl #1]
        2bd644:	e1a02842 	mov	r2, r2, asr #16
        2bd648:	e5981004 	ldr	r1, [r8, #4]
        2bd64c:	e1a01841 	mov	r1, r1, asr #16
        2bd650:	e7941081 	ldr	r1, [r4, r1, lsl #1]
        2bd654:	e1a01841 	mov	r1, r1, asr #16
        2bd658:	e1520001 	cmp	r2, r1
        2bd65c:	aa000001 	bge	2bd668 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x138>
        2bd660:	e3a00000 	mov	r0, #0	; 0x0
        2bd664:	ea00008d 	b	2bd8a0 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x370>
        2bd668:	e59b300c 	ldr	r3, [fp, #12]
        2bd66c:	e5933004 	ldr	r3, [r3, #4]
        2bd670:	e1a03843 	mov	r3, r3, asr #16
        2bd674:	e7943083 	ldr	r3, [r4, r3, lsl #1]
        2bd678:	e1a03843 	mov	r3, r3, asr #16
        2bd67c:	e0433002 	sub	r3, r3, r2
        2bd680:	e08a2faa 	add	r2, sl, sl, lsr #31
        2bd684:	e15300c2 	cmp	r3, r2, asr #1
        2bd688:	caffffd5 	bgt	2bd5e4 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0xb4>
        2bd68c:	e5962004 	ldr	r2, [r6, #4]
        2bd690:	e1a02842 	mov	r2, r2, asr #16
        2bd694:	e7942082 	ldr	r2, [r4, r2, lsl #1]
        2bd698:	e1a02842 	mov	r2, r2, asr #16
        2bd69c:	e0421001 	sub	r1, r2, r1
        2bd6a0:	e1510000 	cmp	r1, r0
        2bd6a4:	caffffed 	bgt	2bd660 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x130>
        2bd6a8:	e5d90000 	ldrb	r0, [r9]
        2bd6ac:	e59b101c 	ldr	r1, [fp, #28]
        2bd6b0:	e1a01801 	mov	r1, r1, lsl #16
        2bd6b4:	e1a01841 	mov	r1, r1, asr #16
        2bd6b8:	e2811003 	add	r1, r1, #3	; 0x3
        2bd6bc:	e3300001 	teq	r0, #1	; 0x1
        2bd6c0:	e58d1004 	str	r1, [sp, #4]
        2bd6c4:	1a000021 	bne	2bd750 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x220>
        2bd6c8:	e5971006 	ldr	r1, [r7, #6]
        2bd6cc:	e1a01841 	mov	r1, r1, asr #16
        2bd6d0:	e7950081 	ldr	r0, [r5, r1, lsl #1]
        2bd6d4:	e1a00840 	mov	r0, r0, asr #16
        2bd6d8:	e59d2008 	ldr	r2, [sp, #8]
        2bd6dc:	e7952082 	ldr	r2, [r5, r2, lsl #1]
        2bd6e0:	e1a02842 	mov	r2, r2, asr #16
        2bd6e4:	e1500002 	cmp	r0, r2
        2bd6e8:	da000018 	ble	2bd750 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x220>
        2bd6ec:	e5992004 	ldr	r2, [r9, #4]
        2bd6f0:	e1a02842 	mov	r2, r2, asr #16
        2bd6f4:	e7953082 	ldr	r3, [r5, r2, lsl #1]
        2bd6f8:	e1a03843 	mov	r3, r3, asr #16
        2bd6fc:	e5992006 	ldr	r2, [r9, #6]
        2bd700:	e1a02842 	mov	r2, r2, asr #16
        2bd704:	e7952082 	ldr	r2, [r5, r2, lsl #1]
        2bd708:	e1a02842 	mov	r2, r2, asr #16
        2bd70c:	e1530002 	cmp	r3, r2
        2bd710:	da00000e 	ble	2bd750 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x220>
        2bd714:	e1520000 	cmp	r2, r0
        2bd718:	ca00000c 	bgt	2bd750 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x220>
        2bd71c:	e7941081 	ldr	r1, [r4, r1, lsl #1]
        2bd720:	e1a01841 	mov	r1, r1, asr #16
        2bd724:	e5960006 	ldr	r0, [r6, #6]
        2bd728:	e1a00840 	mov	r0, r0, asr #16
        2bd72c:	e7940080 	ldr	r0, [r4, r0, lsl #1]
        2bd730:	e1a00840 	mov	r0, r0, asr #16
        2bd734:	e0410000 	sub	r0, r1, r0
        2bd738:	eb5ec821 	bl	1a6f7c4 <$HWRAbs(int)>
        2bd73c:	e1b0100a 	movs	r1, sl
        2bd740:	459d1004 	ldrmi	r1, [sp, #4]
        2bd744:	e1500141 	cmp	r0, r1, asr #2
        2bd748:	b3a0000d 	movlt	r0, #13	; 0xd
        2bd74c:	ba000053 	blt	2bd8a0 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x370>
        2bd750:	e59b200c 	ldr	r2, [fp, #12]
        2bd754:	e5920004 	ldr	r0, [r2, #4]
        2bd758:	e1a00840 	mov	r0, r0, asr #16
        2bd75c:	e7941080 	ldr	r1, [r4, r0, lsl #1]
        2bd760:	e1a01841 	mov	r1, r1, asr #16
        2bd764:	e5972004 	ldr	r2, [r7, #4]
        2bd768:	e1a02842 	mov	r2, r2, asr #16
        2bd76c:	e7942082 	ldr	r2, [r4, r2, lsl #1]
        2bd770:	e1a02842 	mov	r2, r2, asr #16
        2bd774:	e0412002 	sub	r2, r1, r2
        2bd778:	e1b0100a 	movs	r1, sl
        2bd77c:	459d1004 	ldrmi	r1, [sp, #4]
        2bd780:	e1520141 	cmp	r2, r1, asr #2
        2bd784:	caffffb5 	bgt	2bd660 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x130>
        2bd788:	e5981006 	ldr	r1, [r8, #6]
        2bd78c:	e1a01841 	mov	r1, r1, asr #16
        2bd790:	e7951081 	ldr	r1, [r5, r1, lsl #1]
        2bd794:	e1a01841 	mov	r1, r1, asr #16
        2bd798:	e7950080 	ldr	r0, [r5, r0, lsl #1]
        2bd79c:	e1a00840 	mov	r0, r0, asr #16
        2bd7a0:	e1510000 	cmp	r1, r0
        2bd7a4:	baffffad 	blt	2bd660 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x130>
        2bd7a8:	e0412000 	sub	r2, r1, r0
        2bd7ac:	e59b300c 	ldr	r3, [fp, #12]
        2bd7b0:	e5930006 	ldr	r0, [r3, #6]
        2bd7b4:	e1a00840 	mov	r0, r0, asr #16
        2bd7b8:	e7950080 	ldr	r0, [r5, r0, lsl #1]
        2bd7bc:	e1a00840 	mov	r0, r0, asr #16
        2bd7c0:	e0410000 	sub	r0, r1, r0
        2bd7c4:	e1520000 	cmp	r2, r0
        2bd7c8:	baffffa4 	blt	2bd660 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x130>
        2bd7cc:	e5980004 	ldr	r0, [r8, #4]
        2bd7d0:	e1a00840 	mov	r0, r0, asr #16
        2bd7d4:	e7950080 	ldr	r0, [r5, r0, lsl #1]
        2bd7d8:	e1a00840 	mov	r0, r0, asr #16
        2bd7dc:	e0410000 	sub	r0, r1, r0
        2bd7e0:	eb5ec7f7 	bl	1a6f7c4 <$HWRAbs(int)>
        2bd7e4:	e1a00800 	mov	r0, r0, lsl #16
        2bd7e8:	e1a00840 	mov	r0, r0, asr #16
        2bd7ec:	e0800100 	add	r0, r0, r0, lsl #2
        2bd7f0:	e3a07002 	mov	r7, #2	; 0x2
        2bd7f4:	e59d1000 	ldr	r1, [sp]
        2bd7f8:	e1500081 	cmp	r0, r1, lsl #1
        2bd7fc:	ba00000e 	blt	2bd83c <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x30c>
        2bd800:	e5980006 	ldr	r0, [r8, #6]
        2bd804:	e1a00840 	mov	r0, r0, asr #16
        2bd808:	e7952080 	ldr	r2, [r5, r0, lsl #1]
        2bd80c:	e1a02842 	mov	r2, r2, asr #16
        2bd810:	e5981004 	ldr	r1, [r8, #4]
        2bd814:	e1a01841 	mov	r1, r1, asr #16
        2bd818:	e7950081 	ldr	r0, [r5, r1, lsl #1]
        2bd81c:	e1a00840 	mov	r0, r0, asr #16
        2bd820:	e1520000 	cmp	r2, r0
        2bd824:	c0851081 	addgt	r1, r5, r1, lsl #1
        2bd828:	c5911002 	ldrgt	r1, [r1, #2]
        2bd82c:	c1500841 	cmpgt	r0, r1, asr #16
        2bd830:	ca00000a 	bgt	2bd860 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x330>
        2bd834:	e1a00007 	mov	r0, r7
        2bd838:	ea000018 	b	2bd8a0 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x370>
        2bd83c:	e1a02006 	mov	r2, r6
        2bd840:	e1a01004 	mov	r1, r4
        2bd844:	e1a00005 	mov	r0, r5
        2bd848:	e59b300c 	ldr	r3, [fp, #12]
        2bd84c:	eb619ea3 	bl	1b252e0 <$is_narrow_prev__FPsT1P9SPEC_TYPET3>
        2bd850:	e3300000 	teq	r0, #0	; 0x0
        2bd854:	15d90000 	ldrneb	r0, [r9]
        2bd858:	13300020 	teqne	r0, #32	; 0x20
        2bd85c:	1afffff4 	bne	2bd834 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x304>
        2bd860:	e5980004 	ldr	r0, [r8, #4]
        2bd864:	e1a00840 	mov	r0, r0, asr #16
        2bd868:	e7940080 	ldr	r0, [r4, r0, lsl #1]
        2bd86c:	e1a00840 	mov	r0, r0, asr #16
        2bd870:	e5961004 	ldr	r1, [r6, #4]
        2bd874:	e1a01841 	mov	r1, r1, asr #16
        2bd878:	e7941081 	ldr	r1, [r4, r1, lsl #1]
        2bd87c:	e1a01841 	mov	r1, r1, asr #16
        2bd880:	e0404001 	sub	r4, r0, r1
        2bd884:	e1a0100a 	mov	r1, sl
        2bd888:	e3a00003 	mov	r0, #3	; 0x3
        2bd88c:	eb63d42b 	bl	1bb2940 <$__rt_sdiv>
        2bd890:	e2800005 	add	r0, r0, #5	; 0x5
        2bd894:	e1540000 	cmp	r4, r0
        2bd898:	daffff70 	ble	2bd660 <vozvrat_move__FPsT1P9SPEC_TYPEN23sN26+0x130>
        2bd89c:	e3a00001 	mov	r0, #1	; 0x1
        2bd8a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ValidateHeap
 * Address: 00310898
 */
void globals::ValidateHeap() {
    /*
        310898:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ValidateDirectBlock
 * Address: 0031089c
 */
void globals::ValidateDirectBlock() {
    /*
        31089c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ValidateIndirectBlock
 * Address: 003108a0
 */
void globals::ValidateIndirectBlock() {
    /*
        3108a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ValidateMasterPointer
 * Address: 003108a4
 */
void globals::ValidateMasterPointer() {
    /*
        3108a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ValidateBlockRange
 * Address: 003108a8
 */
void globals::ValidateBlockRange() {
    /*
        3108a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)
 * Address: 0032d1c0
 */
VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *) {
    /*
        32d1c0:	e1a0c00d 	mov	ip, sp
        32d1c4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        32d1c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        32d1cc:	e1a05001 	mov	r5, r1
        32d1d0:	e1a04002 	mov	r4, r2
        32d1d4:	e24dd034 	sub	sp, sp, #52	; 0x34
        32d1d8:	e3a07001 	mov	r7, #1	; 0x1
        32d1dc:	e2816014 	add	r6, r1, #20	; 0x14
        32d1e0:	e5b09034 	ldr	r9, [r0, #52]!
        32d1e4:	e5908004 	ldr	r8, [r0, #4]
        32d1e8:	e5d60000 	ldrb	r0, [r6]
        32d1ec:	e3300001 	teq	r0, #1	; 0x1
        32d1f0:	13300003 	teqne	r0, #3	; 0x3
        32d1f4:	1a000092 	bne	32d444 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x284>
        32d1f8:	e1a0000d 	mov	r0, sp
        32d1fc:	eb5fcfa1 	bl	1b21088 <$Init_SDS_Element(_SDS_TYPE *)>
        32d200:	e3300000 	teq	r0, #0	; 0x0
        32d204:	0a00008e 	beq	32d444 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x284>
        32d208:	e5950008 	ldr	r0, [r5, #8]
        32d20c:	e1a00820 	mov	r0, r0, lsr #16
        32d210:	e5cd0003 	strb	r0, [sp, #3]
        32d214:	e1a00440 	mov	r0, r0, asr #8
        32d218:	e5cd0002 	strb	r0, [sp, #2]
        32d21c:	e5960008 	ldr	r0, [r6, #8]
        32d220:	e1a00820 	mov	r0, r0, lsr #16
        32d224:	e5cd0005 	strb	r0, [sp, #5]
        32d228:	e1a00440 	mov	r0, r0, asr #8
        32d22c:	e5cd0004 	strb	r0, [sp, #4]
        32d230:	e3a03001 	mov	r3, #1	; 0x1
        32d234:	e28d202c 	add	r2, sp, #44	; 0x2c
        32d238:	e92d000c 	stmdb	sp!, {r2, r3}
        32d23c:	e28d3038 	add	r3, sp, #56	; 0x38
        32d240:	e28d2008 	add	r2, sp, #8	; 0x8
        32d244:	e1a01008 	mov	r1, r8
        32d248:	e1a00009 	mov	r0, r9
        32d24c:	eb5fec86 	bl	1b2846c <$iMostFarDoubleSide__FPsT1P9_SDS_TYPEN21Ui>
        32d250:	e28dd008 	add	sp, sp, #8	; 0x8
        32d254:	e59d0012 	ldr	r0, [sp, #18]
        32d258:	e1a00840 	mov	r0, r0, asr #16
        32d25c:	eb5d0958 	bl	1a6f7c4 <$HWRAbs(int)>
        32d260:	e350005a 	cmp	r0, #90	; 0x5a
        32d264:	da000012 	ble	32d2b4 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0xf4>
        32d268:	e59d0024 	ldr	r0, [sp, #36]
        32d26c:	e1a00840 	mov	r0, r0, asr #16
        32d270:	e350000c 	cmp	r0, #12	; 0xc
        32d274:	aa00000e 	bge	32d2b4 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0xf4>
        32d278:	e59d0010 	ldr	r0, [sp, #16]
        32d27c:	e1a00840 	mov	r0, r0, asr #16
        32d280:	e350000a 	cmp	r0, #10	; 0xa
        32d284:	da00000a 	ble	32d2b4 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0xf4>
        32d288:	e5950008 	ldr	r0, [r5, #8]
        32d28c:	e1a00820 	mov	r0, r0, lsr #16
        32d290:	e5c40001 	strb	r0, [r4, #1]
        32d294:	e1a00440 	mov	r0, r0, asr #8
        32d298:	e5c40000 	strb	r0, [r4]
        32d29c:	e5960008 	ldr	r0, [r6, #8]
        32d2a0:	e1a00820 	mov	r0, r0, lsr #16
        32d2a4:	e5c40003 	strb	r0, [r4, #3]
        32d2a8:	e1a00440 	mov	r0, r0, asr #8
        32d2ac:	e5c40002 	strb	r0, [r4, #2]
        32d2b0:	ea000064 	b	32d448 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x288>
        32d2b4:	e5d50000 	ldrb	r0, [r5]
        32d2b8:	e3300001 	teq	r0, #1	; 0x1
        32d2bc:	0595000c 	ldreq	r0, [r5, #12]
        32d2c0:	0a000004 	beq	32d2d8 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x118>
        32d2c4:	e3300003 	teq	r0, #3	; 0x3
        32d2c8:	0595000c 	ldreq	r0, [r5, #12]
        32d2cc:	0a000060 	beq	32d454 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x294>
        32d2d0:	ea00005b 	b	32d444 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x284>
        32d2d4:	e590000c 	ldr	r0, [r0, #12]
        32d2d8:	e5d01000 	ldrb	r1, [r0]
        32d2dc:	e3310021 	teq	r1, #33	; 0x21
        32d2e0:	13310033 	teqne	r1, #51	; 0x33
        32d2e4:	0a000005 	beq	32d300 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x140>
        32d2e8:	e1300006 	teq	r0, r6
        32d2ec:	1afffff8 	bne	32d2d4 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x114>
        32d2f0:	e5d02000 	ldrb	r2, [r0]
        32d2f4:	e3320021 	teq	r2, #33	; 0x21
        32d2f8:	13310033 	teqne	r1, #51	; 0x33
        32d2fc:	1a000008 	bne	32d324 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x164>
        32d300:	e5901006 	ldr	r1, [r0, #6]
        32d304:	e1a01841 	mov	r1, r1, asr #16
        32d308:	e5900008 	ldr	r0, [r0, #8]
        32d30c:	e0810840 	add	r0, r1, r0, asr #16
        32d310:	e5951006 	ldr	r1, [r5, #6]
        32d314:	e1a01841 	mov	r1, r1, asr #16
        32d318:	e15100c0 	cmp	r1, r0, asr #1
        32d31c:	d1a000c0 	movle	r0, r0, asr #1
        32d320:	da000001 	ble	32d32c <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x16c>
        32d324:	e5950006 	ldr	r0, [r5, #6]
        32d328:	e1a00820 	mov	r0, r0, lsr #16
        32d32c:	e5c40001 	strb	r0, [r4, #1]
        32d330:	e1a00440 	mov	r0, r0, asr #8
        32d334:	e5c40000 	strb	r0, [r4]
        32d338:	e5960010 	ldr	r0, [r6, #16]
        32d33c:	ea000000 	b	32d344 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x184>
        32d340:	e5900010 	ldr	r0, [r0, #16]
        32d344:	e5d01000 	ldrb	r1, [r0]
        32d348:	e3310023 	teq	r1, #35	; 0x23
        32d34c:	13310031 	teqne	r1, #49	; 0x31
        32d350:	0a000005 	beq	32d36c <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x1ac>
        32d354:	e1300005 	teq	r0, r5
        32d358:	1afffff8 	bne	32d340 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x180>
        32d35c:	e5d02000 	ldrb	r2, [r0]
        32d360:	e3320023 	teq	r2, #35	; 0x23
        32d364:	13310031 	teqne	r1, #49	; 0x31
        32d368:	1a00000a 	bne	32d398 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x1d8>
        32d36c:	e5901004 	ldr	r1, [r0, #4]
        32d370:	e1a01841 	mov	r1, r1, asr #16
        32d374:	e5900008 	ldr	r0, [r0, #8]
        32d378:	e0810840 	add	r0, r1, r0, asr #16
        32d37c:	e2800001 	add	r0, r0, #1	; 0x1
        32d380:	e5961004 	ldr	r1, [r6, #4]
        32d384:	e1a01841 	mov	r1, r1, asr #16
        32d388:	e15100c0 	cmp	r1, r0, asr #1
        32d38c:	ba000001 	blt	32d398 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x1d8>
        32d390:	e1a000c0 	mov	r0, r0, asr #1
        32d394:	ea000001 	b	32d3a0 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x1e0>
        32d398:	e5960004 	ldr	r0, [r6, #4]
        32d39c:	e1a00820 	mov	r0, r0, lsr #16
        32d3a0:	e5c40003 	strb	r0, [r4, #3]
        32d3a4:	e1a00440 	mov	r0, r0, asr #8
        32d3a8:	e5c40002 	strb	r0, [r4, #2]
        32d3ac:	e5941002 	ldr	r1, [r4, #2]
        32d3b0:	e5940000 	ldr	r0, [r4]
        32d3b4:	e1a00840 	mov	r0, r0, asr #16
        32d3b8:	e1500841 	cmp	r0, r1, asr #16
        32d3bc:	aa000020 	bge	32d444 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x284>
        32d3c0:	e3370000 	teq	r7, #0	; 0x0
        32d3c4:	0a00001f 	beq	32d448 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x288>
        32d3c8:	e5cd0003 	strb	r0, [sp, #3]
        32d3cc:	e1a00440 	mov	r0, r0, asr #8
        32d3d0:	e5cd0002 	strb	r0, [sp, #2]
        32d3d4:	e5940002 	ldr	r0, [r4, #2]
        32d3d8:	e1a00820 	mov	r0, r0, lsr #16
        32d3dc:	e5cd0005 	strb	r0, [sp, #5]
        32d3e0:	e1a00440 	mov	r0, r0, asr #8
        32d3e4:	e5cd0004 	strb	r0, [sp, #4]
        32d3e8:	e3a03001 	mov	r3, #1	; 0x1
        32d3ec:	e28d202c 	add	r2, sp, #44	; 0x2c
        32d3f0:	e92d000c 	stmdb	sp!, {r2, r3}
        32d3f4:	e28d3038 	add	r3, sp, #56	; 0x38
        32d3f8:	e28d2008 	add	r2, sp, #8	; 0x8
        32d3fc:	e1a01008 	mov	r1, r8
        32d400:	e1a00009 	mov	r0, r9
        32d404:	eb5fec18 	bl	1b2846c <$iMostFarDoubleSide__FPsT1P9_SDS_TYPEN21Ui>
        32d408:	e28dd008 	add	sp, sp, #8	; 0x8
        32d40c:	e59d0012 	ldr	r0, [sp, #18]
        32d410:	e1a00840 	mov	r0, r0, asr #16
        32d414:	eb5d08ea 	bl	1a6f7c4 <$HWRAbs(int)>
        32d418:	e350005a 	cmp	r0, #90	; 0x5a
        32d41c:	da000008 	ble	32d444 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x284>
        32d420:	e59d0024 	ldr	r0, [sp, #36]
        32d424:	e1a00840 	mov	r0, r0, asr #16
        32d428:	e3500023 	cmp	r0, #35	; 0x23
        32d42c:	aa000004 	bge	32d444 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x284>
        32d430:	e59d0010 	ldr	r0, [sp, #16]
        32d434:	e1a00840 	mov	r0, r0, asr #16
        32d438:	e350000a 	cmp	r0, #10	; 0xa
        32d43c:	c3a07001 	movgt	r7, #1	; 0x1
        32d440:	ca000000 	bgt	32d448 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x288>
        32d444:	e3a07000 	mov	r7, #0	; 0x0
        32d448:	e1a00007 	mov	r0, r7
        32d44c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        32d450:	e590000c 	ldr	r0, [r0, #12]
        32d454:	e5d01000 	ldrb	r1, [r0]
        32d458:	e3310023 	teq	r1, #35	; 0x23
        32d45c:	13310031 	teqne	r1, #49	; 0x31
        32d460:	0a000005 	beq	32d47c <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x2bc>
        32d464:	e1300006 	teq	r0, r6
        32d468:	1afffff8 	bne	32d450 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x290>
        32d46c:	e5d02000 	ldrb	r2, [r0]
        32d470:	e3320023 	teq	r2, #35	; 0x23
        32d474:	13310031 	teqne	r1, #49	; 0x31
        32d478:	1a000008 	bne	32d4a0 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x2e0>
        32d47c:	e5901006 	ldr	r1, [r0, #6]
        32d480:	e1a01841 	mov	r1, r1, asr #16
        32d484:	e5900008 	ldr	r0, [r0, #8]
        32d488:	e0810840 	add	r0, r1, r0, asr #16
        32d48c:	e5951006 	ldr	r1, [r5, #6]
        32d490:	e1a01841 	mov	r1, r1, asr #16
        32d494:	e15100c0 	cmp	r1, r0, asr #1
        32d498:	d1a000c0 	movle	r0, r0, asr #1
        32d49c:	da000001 	ble	32d4a8 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x2e8>
        32d4a0:	e5950006 	ldr	r0, [r5, #6]
        32d4a4:	e1a00820 	mov	r0, r0, lsr #16
        32d4a8:	e5c40001 	strb	r0, [r4, #1]
        32d4ac:	e1a00440 	mov	r0, r0, asr #8
        32d4b0:	e5c40000 	strb	r0, [r4]
        32d4b4:	e5960010 	ldr	r0, [r6, #16]
        32d4b8:	ea000000 	b	32d4c0 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x300>
        32d4bc:	e5900010 	ldr	r0, [r0, #16]
        32d4c0:	e5d01000 	ldrb	r1, [r0]
        32d4c4:	e3310021 	teq	r1, #33	; 0x21
        32d4c8:	13310033 	teqne	r1, #51	; 0x33
        32d4cc:	0a000005 	beq	32d4e8 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x328>
        32d4d0:	e1300005 	teq	r0, r5
        32d4d4:	1afffff8 	bne	32d4bc <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x2fc>
        32d4d8:	e5d02000 	ldrb	r2, [r0]
        32d4dc:	e3320021 	teq	r2, #33	; 0x21
        32d4e0:	13310033 	teqne	r1, #51	; 0x33
        32d4e4:	1affffab 	bne	32d398 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x1d8>
        32d4e8:	e5901004 	ldr	r1, [r0, #4]
        32d4ec:	e1a01841 	mov	r1, r1, asr #16
        32d4f0:	e5900008 	ldr	r0, [r0, #8]
        32d4f4:	e0810840 	add	r0, r1, r0, asr #16
        32d4f8:	e2800001 	add	r0, r0, #1	; 0x1
        32d4fc:	e5961004 	ldr	r1, [r6, #4]
        32d500:	e1a01841 	mov	r1, r1, asr #16
        32d504:	e15100c0 	cmp	r1, r0, asr #1
        32d508:	baffffa2 	blt	32d398 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x1d8>
        32d50c:	eaffff9f 	b	32d390 <VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)+0x1d0>
    */
}

/**
 * Symbol: VertSticksSelector(low_type *)
 * Address: 0032da64
 */
VertSticksSelector(low_type *) {
    /*
        32da64:	e1a0c00d 	mov	ip, sp
        32da68:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        32da6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        32da70:	e1a04000 	mov	r4, r0
        32da74:	e24dd00c 	sub	sp, sp, #12	; 0xc
        32da78:	e5908040 	ldr	r8, [r0, #64]
        32da7c:	e5909068 	ldr	r9, [r0, #104]
        32da80:	e5907046 	ldr	r7, [r0, #70]
        32da84:	e1a07847 	mov	r7, r7, asr #16
        32da88:	e3a06002 	mov	r6, #2	; 0x2
        32da8c:	e3a05000 	mov	r5, #0	; 0x0
        32da90:	e3570002 	cmp	r7, #2	; 0x2
        32da94:	da000018 	ble	32dafc <VertSticksSelector(low_type *)+0x98>
        32da98:	e0860106 	add	r0, r6, r6, lsl #2
        32da9c:	e0881100 	add	r1, r8, r0, lsl #2
        32daa0:	e5d10000 	ldrb	r0, [r1]
        32daa4:	e3300001 	teq	r0, #1	; 0x1
        32daa8:	13300003 	teqne	r0, #3	; 0x3
        32daac:	1a00000d 	bne	32dae8 <VertSticksSelector(low_type *)+0x84>
        32dab0:	e3550050 	cmp	r5, #80	; 0x50
        32dab4:	aa000010 	bge	32dafc <VertSticksSelector(low_type *)+0x98>
        32dab8:	e1a0200d 	mov	r2, sp
        32dabc:	e1a00004 	mov	r0, r4
        32dac0:	eb5fd5c2 	bl	1b231d0 <$VertStickBorders(low_type *, SPEC_TYPE *, POINTS_GROUP *)>
        32dac4:	e3300001 	teq	r0, #1	; 0x1
        32dac8:	1a000006 	bne	32dae8 <VertSticksSelector(low_type *)+0x84>
        32dacc:	e0850085 	add	r0, r5, r5, lsl #1
        32dad0:	e0891100 	add	r1, r9, r0, lsl #2
        32dad4:	e89d5008 	ldmia	sp, {r3, ip, lr}
        32dad8:	e8815008 	stmia	r1, {r3, ip, lr}
        32dadc:	e2850001 	add	r0, r5, #1	; 0x1
        32dae0:	e1a05800 	mov	r5, r0, lsl #16
        32dae4:	e1a05845 	mov	r5, r5, asr #16
        32dae8:	e2860001 	add	r0, r6, #1	; 0x1
        32daec:	e1a06800 	mov	r6, r0, lsl #16
        32daf0:	e1a06846 	mov	r6, r6, asr #16
        32daf4:	e1560007 	cmp	r6, r7
        32daf8:	baffffe6 	blt	32da98 <VertSticksSelector(low_type *)+0x34>
        32dafc:	e5c45065 	strb	r5, [r4, #101]
        32db00:	e1a00445 	mov	r0, r5, asr #8
        32db04:	e5c40064 	strb	r0, [r4, #100]
        32db08:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: vy3__FlN21PiP13PS_point_typesPsT7P8ppd_typeUiP11xrdata_type
 * Address: 003395c8
 */
void globals::vy3() {
    /*
        3395c8:	e1a00800 	mov	r0, r0, lsl #16
        3395cc:	e1a00840 	mov	r0, r0, asr #16
        3395d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: vy4__FlN21PiP13PS_point_typesPsT7P8ppd_typeUiP11xrdata_type
 * Address: 003395d4
 */
void globals::vy4() {
    /*
        3395d4:	e1a00800 	mov	r0, r0, lsl #16
        3395d8:	e1a00840 	mov	r0, r0, asr #16
        3395dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: vy5__FlN21PiP13PS_point_typesPsT7P8ppd_typeUiP11xrdata_type
 * Address: 003395e0
 */
void globals::vy5() {
    /*
        3395e0:	e1a00800 	mov	r0, r0, lsl #16
        3395e4:	e1a00840 	mov	r0, r0, asr #16
        3395e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: vy6__FlN21PiP13PS_point_typesPsT7P8ppd_typeUiP11xrdata_type
 * Address: 003395ec
 */
void globals::vy6() {
    /*
        3395ec:	e1a00800 	mov	r0, r0, lsl #16
        3395f0:	e1a00840 	mov	r0, r0, asr #16
        3395f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: vfprintf
 * Address: 0033e5a4
 */
void globals::vfprintf() {
    /*
        33e5a4:	e59f3000 	ldr	r3, [pc, #0]	; 33e5ac <vfprintf+0x8>
        33e5a8:	eafffd9e 	b	33dc28 <__vfprintf>
        33e5ac:	0033ea1c 	eoreqs	lr, r3, ip, lsl sl
    */
}

/**
 * Symbol: vsprintf
 * Address: 0033e700
 */
void globals::vsprintf() {
    /*
        33e700:	e1a0c00d 	mov	ip, sp
        33e704:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        33e708:	e24cb004 	sub	fp, ip, #4	; 0x4
        33e70c:	e1a06000 	mov	r6, r0
        33e710:	e1a05001 	mov	r5, r1
        33e714:	e1a04002 	mov	r4, r2
        33e718:	e24dd040 	sub	sp, sp, #64	; 0x40
        33e71c:	e1a0000d 	mov	r0, sp
        33e720:	e3a02040 	mov	r2, #64	; 0x40
        33e724:	e3a01000 	mov	r1, #0	; 0x0
        33e728:	eb61d8ca 	bl	1bb4a58 <$memset>
        33e72c:	e3a0000a 	mov	r0, #10	; 0xa
        33e730:	e58d000c 	str	r0, [sp, #12]
        33e734:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        33e738:	e58d0008 	str	r0, [sp, #8]
        33e73c:	e58d6004 	str	r6, [sp, #4]
        33e740:	e59f3024 	ldr	r3, [pc, #24]	; 33e76c <vsprintf+0x6c>
        33e744:	e1a02004 	mov	r2, r4
        33e748:	e1a01005 	mov	r1, r5
        33e74c:	e1a0000d 	mov	r0, sp
        33e750:	ebfffd34 	bl	33dc28 <__vfprintf>
        33e754:	e1a04000 	mov	r4, r0
        33e758:	e1a0100d 	mov	r1, sp
        33e75c:	e3a00000 	mov	r0, #0	; 0x0
        33e760:	eb62cc47 	bl	1bf1884 <$putc>
        33e764:	e1a00004 	mov	r0, r4
        33e768:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        33e76c:	0033ea1c 	eoreqs	lr, r3, ip, lsl sl
        33e770:	e92d4000 	stmdb	sp!, {lr}
        33e774:	e0802001 	add	r2, r0, r1
        33e778:	e5d2c000 	ldrb	ip, [r2]
        33e77c:	e3a03000 	mov	r3, #0	; 0x0
        33e780:	e33c0000 	teq	ip, #0	; 0x0
        33e784:	0a00001d 	beq	33e800 <vsprintf+0x100>
        33e788:	e35c0035 	cmp	ip, #53	; 0x35
        33e78c:	ba00001b 	blt	33e800 <vsprintf+0x100>
        33e790:	0a000001 	beq	33e79c <vsprintf+0x9c>
        33e794:	e3a0e030 	mov	lr, #48	; 0x30
        33e798:	ea000006 	b	33e7b8 <vsprintf+0xb8>
        33e79c:	e1a0c002 	mov	ip, r2
        33e7a0:	e5fce001 	ldrb	lr, [ip, #1]!
        33e7a4:	e33e0030 	teq	lr, #48	; 0x30
        33e7a8:	0afffffc 	beq	33e7a0 <vsprintf+0xa0>
        33e7ac:	e33e0000 	teq	lr, #0	; 0x0
        33e7b0:	1afffff7 	bne	33e794 <vsprintf+0x94>
        33e7b4:	ea000011 	b	33e800 <vsprintf+0x100>
        33e7b8:	e572c001 	ldrb	ip, [r2, -#1]!
        33e7bc:	e33c0039 	teq	ip, #57	; 0x39
        33e7c0:	05c2e000 	streqb	lr, [r2]
        33e7c4:	0afffffb 	beq	33e7b8 <vsprintf+0xb8>
        33e7c8:	e28cc001 	add	ip, ip, #1	; 0x1
        33e7cc:	e5c2c000 	strb	ip, [r2]
        33e7d0:	e5d02000 	ldrb	r2, [r0]
        33e7d4:	e3320030 	teq	r2, #48	; 0x30
        33e7d8:	0a000008 	beq	33e800 <vsprintf+0x100>
        33e7dc:	e3510000 	cmp	r1, #0	; 0x0
        33e7e0:	ba000004 	blt	33e7f8 <vsprintf+0xf8>
        33e7e4:	e7d02001 	ldrb	r2, [r0, r1]
        33e7e8:	e0803001 	add	r3, r0, r1
        33e7ec:	e5c32001 	strb	r2, [r3, #1]
        33e7f0:	e2511001 	subs	r1, r1, #1	; 0x1
        33e7f4:	5afffffa 	bpl	33e7e4 <vsprintf+0xe4>
        33e7f8:	e3a00001 	mov	r0, #1	; 0x1
        33e7fc:	e8bd8000 	ldmia	sp!, {pc}
        33e800:	e1a00003 	mov	r0, r3
        33e804:	e8bd8000 	ldmia	sp!, {pc}
        33e808:	e1a0c00d 	mov	ip, sp
        33e80c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        33e810:	e24cb004 	sub	fp, ip, #4	; 0x4
        33e814:	e1a04000 	mov	r4, r0
        33e818:	e92d0006 	stmdb	sp!, {r1, r2}
        33e81c:	ecbd8102 	ldfd	f0, [sp], #8
        33e820:	e24dd00c 	sub	sp, sp, #12	; 0xc
        33e824:	e1a0200d 	mov	r2, sp
        33e828:	ed2d8102 	stfd	f0, [sp, -#8]!
        33e82c:	e8bd0003 	ldmia	sp!, {r0, r1}
        33e830:	eb010efe 	bl	382430 <_stfp>
        33e834:	e59d0000 	ldr	r0, [sp]
        33e838:	e3c0220f 	bic	r2, r0, #-268435456	; 0xf0000000
        33e83c:	e3c22c0f 	bic	r2, r2, #3840	; 0xf00
        33e840:	e3c220ff 	bic	r2, r2, #255	; 0xff
        33e844:	e3a01030 	mov	r1, #48	; 0x30
        33e848:	e242c6ff 	sub	ip, r2, #267386880	; 0xff00000
        33e84c:	e33c0aff 	teq	ip, #1044480	; 0xff000
        33e850:	1a000009 	bne	33e87c <vsprintf+0x17c>
        33e854:	e3a020e7 	mov	r2, #231	; 0xe7
        33e858:	e2822c03 	add	r2, r2, #768	; 0x300
        33e85c:	e3a00000 	mov	r0, #0	; 0x0
        33e860:	e7c41000 	strb	r1, [r4, r0]
        33e864:	e2800001 	add	r0, r0, #1	; 0x1
        33e868:	e3500014 	cmp	r0, #20	; 0x14
        33e86c:	bafffffb 	blt	33e860 <vsprintf+0x160>
        33e870:	e3a00031 	mov	r0, #49	; 0x31
        33e874:	e5c40001 	strb	r0, [r4, #1]
        33e878:	ea00002d 	b	33e934 <vsprintf+0x234>
        33e87c:	e3a0200f 	mov	r2, #15	; 0xf
        33e880:	e002ec20 	and	lr, r2, r0, lsr #24
        33e884:	e002ca20 	and	ip, r2, r0, lsr #20
        33e888:	e0023820 	and	r3, r2, r0, lsr #16
        33e88c:	e0022620 	and	r2, r2, r0, lsr #12
        33e890:	e08ee10e 	add	lr, lr, lr, lsl #2
        33e894:	e08cc08e 	add	ip, ip, lr, lsl #1
        33e898:	e08cc10c 	add	ip, ip, ip, lsl #2
        33e89c:	e083308c 	add	r3, r3, ip, lsl #1
        33e8a0:	e0833103 	add	r3, r3, r3, lsl #2
        33e8a4:	e0822083 	add	r2, r2, r3, lsl #1
        33e8a8:	e3100101 	tst	r0, #1073741824	; 0x40000000
        33e8ac:	12622000 	rsbne	r2, r2, #0	; 0x0
        33e8b0:	e5c41000 	strb	r1, [r4]
        33e8b4:	e3a01001 	mov	r1, #1	; 0x1
        33e8b8:	e3a0300c 	mov	r3, #12	; 0xc
        33e8bc:	e043c101 	sub	ip, r3, r1, lsl #2
        33e8c0:	e1a0cc30 	mov	ip, r0, lsr ip
        33e8c4:	e20cc00f 	and	ip, ip, #15	; 0xf
        33e8c8:	e28cc030 	add	ip, ip, #48	; 0x30
        33e8cc:	e7c4c001 	strb	ip, [r4, r1]
        33e8d0:	e2811001 	add	r1, r1, #1	; 0x1
        33e8d4:	e3510004 	cmp	r1, #4	; 0x4
        33e8d8:	bafffff7 	blt	33e8bc <vsprintf+0x1bc>
        33e8dc:	e3a00004 	mov	r0, #4	; 0x4
        33e8e0:	e3a0302c 	mov	r3, #44	; 0x2c
        33e8e4:	e59d1004 	ldr	r1, [sp, #4]
        33e8e8:	e043c100 	sub	ip, r3, r0, lsl #2
        33e8ec:	e1a0cc31 	mov	ip, r1, lsr ip
        33e8f0:	e20cc00f 	and	ip, ip, #15	; 0xf
        33e8f4:	e28cc030 	add	ip, ip, #48	; 0x30
        33e8f8:	e7c4c000 	strb	ip, [r4, r0]
        33e8fc:	e2800001 	add	r0, r0, #1	; 0x1
        33e900:	e350000c 	cmp	r0, #12	; 0xc
        33e904:	bafffff7 	blt	33e8e8 <vsprintf+0x1e8>
        33e908:	e3a0000c 	mov	r0, #12	; 0xc
        33e90c:	e3a0304c 	mov	r3, #76	; 0x4c
        33e910:	e59d1008 	ldr	r1, [sp, #8]
        33e914:	e043c100 	sub	ip, r3, r0, lsl #2
        33e918:	e1a0cc31 	mov	ip, r1, lsr ip
        33e91c:	e20cc00f 	and	ip, ip, #15	; 0xf
        33e920:	e28cc030 	add	ip, ip, #48	; 0x30
        33e924:	e7c4c000 	strb	ip, [r4, r0]
        33e928:	e2800001 	add	r0, r0, #1	; 0x1
        33e92c:	e3500014 	cmp	r0, #20	; 0x14
        33e930:	bafffff7 	blt	33e914 <vsprintf+0x214>
        33e934:	e3a00000 	mov	r0, #0	; 0x0
        33e938:	e5c40014 	strb	r0, [r4, #20]
        33e93c:	e1a00082 	mov	r0, r2, lsl #1
        33e940:	e59d1000 	ldr	r1, [sp]
        33e944:	e3110102 	tst	r1, #-2147483648	; 0x80000000
        33e948:	13800001 	orrne	r0, r0, #1	; 0x1
        33e94c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        33e950:	e1a0c00d 	mov	ip, sp
        33e954:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        33e958:	e24cb004 	sub	fp, ip, #4	; 0x4
        33e95c:	e1a06000 	mov	r6, r0
        33e960:	e1b05002 	movs	r5, r2
        33e964:	e2814001 	add	r4, r1, #1	; 0x1
        33e968:	e7c03001 	strb	r3, [r0, r1]
        33e96c:	53a0102b 	movpl	r1, #43	; 0x2b
        33e970:	42655000 	rsbmi	r5, r5, #0	; 0x0
        33e974:	43a0102d 	movmi	r1, #45	; 0x2d
        33e978:	e1a00004 	mov	r0, r4
        33e97c:	e2844001 	add	r4, r4, #1	; 0x1
        33e980:	e7c61000 	strb	r1, [r6, r0]
        33e984:	e3550ffa 	cmp	r5, #1000	; 0x3e8
        33e988:	ba000009 	blt	33e9b4 <vsprintf+0x2b4>
        33e98c:	e1a01005 	mov	r1, r5
        33e990:	e3a00ffa 	mov	r0, #1000	; 0x3e8
        33e994:	eb61cfe9 	bl	1bb2940 <$__rt_sdiv>
        33e998:	e2802030 	add	r2, r0, #48	; 0x30
        33e99c:	e1a01004 	mov	r1, r4
        33e9a0:	e2844001 	add	r4, r4, #1	; 0x1
        33e9a4:	e7c62001 	strb	r2, [r6, r1]
        33e9a8:	e080c080 	add	ip, r0, r0, lsl #1
        33e9ac:	e06c0380 	rsb	r0, ip, r0, lsl #7
        33e9b0:	e0455180 	sub	r5, r5, r0, lsl #3
        33e9b4:	e3550064 	cmp	r5, #100	; 0x64
        33e9b8:	ba000009 	blt	33e9e4 <vsprintf+0x2e4>
        33e9bc:	e1a01005 	mov	r1, r5
        33e9c0:	e3a00064 	mov	r0, #100	; 0x64
        33e9c4:	eb61cfdd 	bl	1bb2940 <$__rt_sdiv>
        33e9c8:	e2802030 	add	r2, r0, #48	; 0x30
        33e9cc:	e1a01004 	mov	r1, r4
        33e9d0:	e2844001 	add	r4, r4, #1	; 0x1
        33e9d4:	e7c62001 	strb	r2, [r6, r1]
        33e9d8:	e080c180 	add	ip, r0, r0, lsl #3
        33e9dc:	e08c0200 	add	r0, ip, r0, lsl #4
        33e9e0:	e0455100 	sub	r5, r5, r0, lsl #2
        33e9e4:	e1a00005 	mov	r0, r5
        33e9e8:	eb61cfd5 	bl	1bb2944 <$__rt_sdiv10>
        33e9ec:	e2802030 	add	r2, r0, #48	; 0x30
        33e9f0:	e1a01004 	mov	r1, r4
        33e9f4:	e2844001 	add	r4, r4, #1	; 0x1
        33e9f8:	e7c62001 	strb	r2, [r6, r1]
        33e9fc:	e2851030 	add	r1, r5, #48	; 0x30
        33ea00:	e0800100 	add	r0, r0, r0, lsl #2
        33ea04:	e0411080 	sub	r1, r1, r0, lsl #1
        33ea08:	e1a00004 	mov	r0, r4
        33ea0c:	e2844001 	add	r4, r4, #1	; 0x1
        33ea10:	e7c61000 	strb	r1, [r6, r0]
        33ea14:	e1a00004 	mov	r0, r4
        33ea18:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

