#include "include/TBeamer.h"

/**
 * Symbol: TBeamer::__dt(void)
 * Address: 0003b6f0
 */
TBeamer::~TBeamer(void) {
    /*
         3b6f0:	e1a0c00d 	mov	ip, sp
         3b6f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3b6f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b6fc:	e1a04000 	mov	r4, r0
         3b700:	e1a05001 	mov	r5, r1
         3b704:	e590003c 	ldr	r0, [r0, #60]
         3b708:	eb6e1eab 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3b70c:	e2840028 	add	r0, r4, #40	; 0x28
         3b710:	e3a01000 	mov	r1, #0	; 0x0
         3b714:	eb6dd44e 	bl	1bb0854 <PipeCallBack::$__dt(void)>
         3b718:	e5940000 	ldr	r0, [r4]
         3b71c:	eb6e1ea6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3b720:	e3150001 	tst	r5, #1	; 0x1
         3b724:	11a00004 	movne	r0, r4
         3b728:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         3b72c:	1a6e47eb 	bne	1bcd6e0 <$__dl(void *)>
         3b730:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TBeamer::Open(unsigned char)
 * Address: 0003b734
 */
TBeamer::Open(unsigned char) {
    /*
         3b734:	e1a0c00d 	mov	ip, sp
         3b738:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         3b73c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b740:	e1a04000 	mov	r4, r0
         3b744:	e21150ff 	ands	r5, r1, #255	; 0xff
         3b748:	e2800028 	add	r0, r0, #40	; 0x28
         3b74c:	e2800008 	add	r0, r0, #8	; 0x8
         3b750:	e9a00030 	stmib	r0!, {r4, r5}
         3b754:	e24dd008 	sub	sp, sp, #8	; 0x8
         3b758:	e3a00002 	mov	r0, #2	; 0x2
         3b75c:	e59f6024 	ldr	r6, [pc, #24]	; 3b788 <TBeamer::Open(unsigned char)+0x54>	; fField24
         3b760:	0a00000a 	beq	3b790 <TBeamer::Open(unsigned char)+0x5c>
         3b764:	eb6e1a78 	bl	1bc214c <$AllocateRefHandle(long)>
         3b768:	e58d0000 	str	r0, [sp]
         3b76c:	e1a0300d 	mov	r3, sp
         3b770:	e59f2014 	ldr	r2, [pc, #14]	; 3b78c <TBeamer::Open(unsigned char)+0x58>
         3b774:	e1a01006 	mov	r1, r6
         3b778:	e1a00004 	mov	r0, r4
         3b77c:	eb6f1231 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3b780:	e59d0000 	ldr	r0, [sp]
         3b784:	ea000009 	b	3b7b0 <TBeamer::Open(unsigned char)+0x7c>
         3b788:	006845c0 	rsbeq	r4, r8, r0, asr #11
         3b78c:	006841f0 	streqd	r4, [r8], -#16	; fField16
         3b790:	eb6e1a6d 	bl	1bc214c <$AllocateRefHandle(long)>
         3b794:	e58d0004 	str	r0, [sp, #4]	; fField4
         3b798:	e28d3004 	add	r3, sp, #4	; 0x4
         3b79c:	e59f2094 	ldr	r2, [pc, #94]	; 3b838 <TBeamer::Open(unsigned char)+0x104>
         3b7a0:	e1a01006 	mov	r1, r6
         3b7a4:	e1a00004 	mov	r0, r4
         3b7a8:	eb6f1226 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3b7ac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         3b7b0:	eb6e1e81 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3b7b4:	e59f0080 	ldr	r0, [pc, #80]	; 3b83c <TBeamer::Open(unsigned char)+0x108>
         3b7b8:	e1a06000 	mov	r6, r0
         3b7bc:	eb696cd0 	bl	1a96b04 <$GetPreference(RefVar const &)>
         3b7c0:	e3300002 	teq	r0, #2	; 0x2
         3b7c4:	0a00001d 	beq	3b840 <TBeamer::Open(unsigned char)+0x10c>
         3b7c8:	e24dd008 	sub	sp, sp, #8	; 0x8
         3b7cc:	e1a00006 	mov	r0, r6
         3b7d0:	eb696ccb 	bl	1a96b04 <$GetPreference(RefVar const &)>
         3b7d4:	eb6e1a5c 	bl	1bc214c <$AllocateRefHandle(long)>
         3b7d8:	e58d0000 	str	r0, [sp]
         3b7dc:	e1a0000d 	mov	r0, sp
         3b7e0:	eb6e1e67 	bl	1bc3184 <$GetCString(RefVar const &)>
         3b7e4:	e28d1004 	add	r1, sp, #4	; 0x4
         3b7e8:	e3a03004 	mov	r3, #4	; 0x4
         3b7ec:	e3a02001 	mov	r2, #1	; 0x1
         3b7f0:	eb6f372c 	bl	1c094a8 <$ConvertUnicodeCharacters__FPUsPclT3>
         3b7f4:	e59d0000 	ldr	r0, [sp]
         3b7f8:	eb6e1e6f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3b7fc:	e3a00000 	mov	r0, #0	; 0x0
         3b800:	e1a02005 	mov	r2, r5
         3b804:	e5840018 	str	r0, [r4, #24]	; fField24
         3b808:	e1a00004 	mov	r0, r4
         3b80c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         3b810:	eb6a9e5e 	bl	1ae3190 <TBeamer::$OpenEndpoint(unsigned long, unsigned char)>
         3b814:	e3300000 	teq	r0, #0	; 0x0
         3b818:	1a000004 	bne	3b830 <TBeamer::Open(unsigned char)+0xfc>
         3b81c:	e1a00004 	mov	r0, r4
         3b820:	eb6a9e5b 	bl	1ae3194 <TBeamer::$IdentifyProtocol(void)>
         3b824:	e3300000 	teq	r0, #0	; 0x0
         3b828:	028dd008 	addeq	sp, sp, #8	; 0x8
         3b82c:	0a000023 	beq	3b8c0 <TBeamer::Open(unsigned char)+0x18c>
         3b830:	e28dd008 	add	sp, sp, #8	; 0x8
         3b834:	ea000024 	b	3b8cc <TBeamer::Open(unsigned char)+0x198>
         3b838:	00684520 	rsbeq	r4, r8, r0, lsr #10
         3b83c:	00685290 	streqb	r5, [r8], -#32	; fField32
         3b840:	e1a02005 	mov	r2, r5
         3b844:	e1a00004 	mov	r0, r4
         3b848:	e59f1048 	ldr	r1, [pc, #48]	; 3b898 <TBeamer::Open(unsigned char)+0x164>
         3b84c:	eb6a9e4f 	bl	1ae3190 <TBeamer::$OpenEndpoint(unsigned long, unsigned char)>
         3b850:	e3300000 	teq	r0, #0	; 0x0
         3b854:	1a00001c 	bne	3b8cc <TBeamer::Open(unsigned char)+0x198>
         3b858:	e1a00004 	mov	r0, r4
         3b85c:	eb6a9e4c 	bl	1ae3194 <TBeamer::$IdentifyProtocol(void)>
         3b860:	e3300000 	teq	r0, #0	; 0x0
         3b864:	1a000018 	bne	3b8cc <TBeamer::Open(unsigned char)+0x198>
         3b868:	e1a00004 	mov	r0, r4
         3b86c:	eb6a226d 	bl	1ac4228 <TBeamer::$CloseEndpoint(void)>
         3b870:	e5940018 	ldr	r0, [r4, #24]	; fField24
         3b874:	e3100008 	tst	r0, #8	; 0x8
         3b878:	e1a02005 	mov	r2, r5
         3b87c:	e1a00004 	mov	r0, r4
         3b880:	0a000006 	beq	3b8a0 <TBeamer::Open(unsigned char)+0x16c>
         3b884:	e59f1010 	ldr	r1, [pc, #10]	; 3b89c <TBeamer::Open(unsigned char)+0x168>
         3b888:	eb6a9e40 	bl	1ae3190 <TBeamer::$OpenEndpoint(unsigned long, unsigned char)>
         3b88c:	e3300000 	teq	r0, #0	; 0x0
         3b890:	1a00000d 	bne	3b8cc <TBeamer::Open(unsigned char)+0x198>
         3b894:	ea000005 	b	3b8b0 <TBeamer::Open(unsigned char)+0x17c>
         3b898:	706b6972 	rsbvc	r6, fp, r2, ror r9
         3b89c:	69726461 	ldmvsdb	r2!, {r0, r5, r6, sl, sp, lr}^
         3b8a0:	e59f1028 	ldr	r1, [pc, #28]	; 3b8d0 <TBeamer::Open(unsigned char)+0x19c>	; fField28
         3b8a4:	eb6a9e39 	bl	1ae3190 <TBeamer::$OpenEndpoint(unsigned long, unsigned char)>
         3b8a8:	e3300000 	teq	r0, #0	; 0x0
         3b8ac:	1a000006 	bne	3b8cc <TBeamer::Open(unsigned char)+0x198>
         3b8b0:	e1a00004 	mov	r0, r4
         3b8b4:	eb6a9e36 	bl	1ae3194 <TBeamer::$IdentifyProtocol(void)>
         3b8b8:	e3300000 	teq	r0, #0	; 0x0
         3b8bc:	1a000002 	bne	3b8cc <TBeamer::Open(unsigned char)+0x198>
         3b8c0:	e1a01005 	mov	r1, r5
         3b8c4:	e1a00004 	mov	r0, r4
         3b8c8:	eb6a32de 	bl	1ac8448 <TBeamer::$OpenPipe(unsigned char)>
         3b8cc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         3b8d0:	736c6972 	cmnvc	ip, #1867776	; 0x1c8000
    */
}

/**
 * Symbol: TBeamer::Close(void)
 * Address: 0003b8d4
 */
TBeamer::Close(void) {
    /*
         3b8d4:	e1a0c00d 	mov	ip, sp
         3b8d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3b8dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b8e0:	e1a04000 	mov	r4, r0
         3b8e4:	eb6a2250 	bl	1ac422c <TBeamer::$ClosePipe(void)>
         3b8e8:	e3300000 	teq	r0, #0	; 0x0
         3b8ec:	01a00004 	moveq	r0, r4
         3b8f0:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         3b8f4:	0a6a224b 	beq	1ac4228 <TBeamer::$CloseEndpoint(void)>
         3b8f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TBeamer::SendSetup(void)
 * Address: 0003b8fc
 */
TBeamer::SendSetup(void) {
    /*
         3b8fc:	e1a0c00d 	mov	ip, sp
         3b900:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3b904:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b908:	e1a04000 	mov	r4, r0
         3b90c:	e3a00000 	mov	r0, #0	; 0x0
         3b910:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         3b914:	e5940018 	ldr	r0, [r4, #24]	; fField24
         3b918:	e3100004 	tst	r0, #4	; 0x4
         3b91c:	02000008 	andeq	r0, r0, #8	; 0x8
         3b920:	03300000 	teqeq	r0, #0	; 0x0
         3b924:	0a00002a 	beq	3b9d4 <TBeamer::SendSetup(void)+0xd8>
         3b928:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         3b92c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         3b930:	e1a00100 	mov	r0, r0, lsl #2
         3b934:	eb6e1a04 	bl	1bc214c <$AllocateRefHandle(long)>
         3b938:	e58d0000 	str	r0, [sp]
         3b93c:	e1a0100d 	mov	r1, sp
         3b940:	e28d0004 	add	r0, sp, #4	; 0x4
         3b944:	e3a03000 	mov	r3, #0	; 0x0
         3b948:	e5942008 	ldr	r2, [r4, #8]	; fField8
         3b94c:	eb6e15e6 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
         3b950:	e59d0000 	ldr	r0, [sp]
         3b954:	eb6e1e18 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3b958:	e3a00000 	mov	r0, #0	; 0x0
         3b95c:	e52d006c 	str	r0, [sp, -#108]!
         3b960:	e28d0008 	add	r0, sp, #8	; 0x8
         3b964:	eb6ddc02 	bl	1bb2974 <$setjmp>
         3b968:	e3300000 	teq	r0, #0	; 0x0
         3b96c:	1a000008 	bne	3b994 <TBeamer::SendSetup(void)+0x98>
         3b970:	e1a0000d 	mov	r0, sp
         3b974:	eb6e91c0 	bl	1be007c <$AddExceptionHandler>
         3b978:	e28d0070 	add	r0, sp, #112	; 0x70
         3b97c:	eb6e32be 	bl	1bc847c <TObjectWriter::$Write(void)>
         3b980:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
         3b984:	e5901000 	ldr	r1, [r0]
         3b988:	e1a0e00f 	mov	lr, pc
         3b98c:	e281f020 	add	pc, r1, #32	; 0x20
         3b990:	ea000008 	b	3b9b8 <TBeamer::SendSetup(void)+0xbc>
         3b994:	e59d0060 	ldr	r0, [sp, #96]
         3b998:	e59f103c 	ldr	r1, [pc, #3c]	; 3b9dc <TBeamer::SendSetup(void)+0xe0>
         3b99c:	e5911000 	ldr	r1, [r1]
         3b9a0:	eb6e9dfb 	bl	1be3194 <$Subexception>
         3b9a4:	e3300000 	teq	r0, #0	; 0x0
         3b9a8:	03e00077 	mvneq	r0, #119	; 0x77
         3b9ac:	02400b25 	subeq	r0, r0, #37888	; 0x9400
         3b9b0:	159d0064 	ldrne	r0, [sp, #100]
         3b9b4:	e58d0098 	str	r0, [sp, #152]
         3b9b8:	e1a0000d 	mov	r0, sp
         3b9bc:	eb6e95bd 	bl	1be10b8 <$ExitHandler>
         3b9c0:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3b9c4:	e28d0004 	add	r0, sp, #4	; 0x4
         3b9c8:	e3a01000 	mov	r1, #0	; 0x0
         3b9cc:	eb684b65 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         3b9d0:	e28dd02c 	add	sp, sp, #44	; 0x2c
         3b9d4:	e49d0004 	ldr	r0, [sp], #4	; fField4
         3b9d8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         3b9dc:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TBeamer::Send(RefVar const &)
 * Address: 0003b9e0
 */
TBeamer::Send(RefVar const &) {
    /*
         3b9e0:	e1a0c00d 	mov	ip, sp
         3b9e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         3b9e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b9ec:	e1a04000 	mov	r4, r0
         3b9f0:	e1a05001 	mov	r5, r1
         3b9f4:	e24dd004 	sub	sp, sp, #4	; 0x4
         3b9f8:	e1a02001 	mov	r2, r1
         3b9fc:	e59f10ac 	ldr	r1, [pc, #ac]	; 3bab0 <TBeamer::Send(RefVar const &)+0xd0>
         3ba00:	eb6f118f 	bl	1c00044 <$NSSend__FRC6RefVarN21>
         3ba04:	e3100003 	tst	r0, #3	; 0x3
         3ba08:	01a00140 	moveq	r0, r0, asr #2
         3ba0c:	0a000000 	beq	3ba14 <TBeamer::Send(RefVar const &)+0x34>
         3ba10:	eb6e19c1 	bl	1bc211c <$_RINTError(long)>
         3ba14:	e5840024 	str	r0, [r4, #36]	; fField36
         3ba18:	e1a00100 	mov	r0, r0, lsl #2
         3ba1c:	eb6e19ca 	bl	1bc214c <$AllocateRefHandle(long)>
         3ba20:	e58d0000 	str	r0, [sp]
         3ba24:	e1a0200d 	mov	r2, sp
         3ba28:	e59f1084 	ldr	r1, [pc, #84]	; 3bab4 <TBeamer::Send(RefVar const &)+0xd4>
         3ba2c:	e1a00004 	mov	r0, r4
         3ba30:	eb6e2a4c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3ba34:	e59d0000 	ldr	r0, [sp]
         3ba38:	eb6e1ddf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3ba3c:	e24dd008 	sub	sp, sp, #8	; 0x8
         3ba40:	e3a00002 	mov	r0, #2	; 0x2
         3ba44:	eb6e19c0 	bl	1bc214c <$AllocateRefHandle(long)>
         3ba48:	e58d0004 	str	r0, [sp, #4]	; fField4
         3ba4c:	e3a00002 	mov	r0, #2	; 0x2
         3ba50:	eb6e19bd 	bl	1bc214c <$AllocateRefHandle(long)>
         3ba54:	e58d0000 	str	r0, [sp]
         3ba58:	e1a00004 	mov	r0, r4
         3ba5c:	eb6a3698 	bl	1ac94c4 <TBeamer::$SendSetup(void)>
         3ba60:	e1b06000 	movs	r6, r0
         3ba64:	1a00006e 	bne	3bc24 <TBeamer::Send(RefVar const &)+0x244>
         3ba68:	e5940018 	ldr	r0, [r4, #24]	; fField24
         3ba6c:	e3100002 	tst	r0, #2	; 0x2
         3ba70:	0a000004 	beq	3ba88 <TBeamer::Send(RefVar const &)+0xa8>
         3ba74:	e59f003c 	ldr	r0, [pc, #3c]	; 3bab8 <TBeamer::Send(RefVar const &)+0xd8>
         3ba78:	e5900000 	ldr	r0, [r0]
         3ba7c:	e5900000 	ldr	r0, [r0]
         3ba80:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         3ba84:	e5810000 	str	r0, [r1]
         3ba88:	e3a00001 	mov	r0, #1	; 0x1
         3ba8c:	e5840020 	str	r0, [r4, #32]	; fField32
         3ba90:	e5940024 	ldr	r0, [r4, #36]	; fField36
         3ba94:	e3500001 	cmp	r0, #1	; 0x1
         3ba98:	ba000061 	blt	3bc24 <TBeamer::Send(RefVar const &)+0x244>
         3ba9c:	e24da064 	sub	sl, sp, #100	; 0x64
         3baa0:	e59f9014 	ldr	r9, [pc, #14]	; 3babc <TBeamer::Send(RefVar const &)+0xdc>
         3baa4:	e59f8014 	ldr	r8, [pc, #14]	; 3bac0 <TBeamer::Send(RefVar const &)+0xe0>
         3baa8:	e59f7014 	ldr	r7, [pc, #14]	; 3bac4 <TBeamer::Send(RefVar const &)+0xe4>
         3baac:	ea000009 	b	3bad8 <TBeamer::Send(RefVar const &)+0xf8>
         3bab0:	00683350 	rsbeq	r3, r8, r0, asr r3
         3bab4:	00682058 	rsbeq	r2, r8, r8, asr r0
         3bab8:	00683b40 	rsbeq	r3, r8, r0, asr #22
         3babc:	00682048 	rsbeq	r2, r8, r8, asr #32
         3bac0:	00682040 	rsbeq	r2, r8, r0, asr #32
         3bac4:	00682038 	rsbeq	r2, r8, r8, lsr r0
         3bac8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         3bacc:	eb6e1dba 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3bad0:	e1a00006 	mov	r0, r6
         3bad4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         3bad8:	e3a00000 	mov	r0, #0	; 0x0
         3badc:	e52d006c 	str	r0, [sp, -#108]!
         3bae0:	e1a0000a 	mov	r0, sl
         3bae4:	eb6ddba2 	bl	1bb2974 <$setjmp>
         3bae8:	e3300000 	teq	r0, #0	; 0x0
         3baec:	1a000009 	bne	3bb18 <TBeamer::Send(RefVar const &)+0x138>
         3baf0:	e1a0000d 	mov	r0, sp
         3baf4:	eb6e9160 	bl	1be007c <$AddExceptionHandler>
         3baf8:	e28d3070 	add	r3, sp, #112	; 0x70
         3bafc:	e1a02005 	mov	r2, r5
         3bb00:	e1a01009 	mov	r1, r9
         3bb04:	e1a00004 	mov	r0, r4
         3bb08:	eb6f114e 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3bb0c:	e59d106c 	ldr	r1, [sp, #108]
         3bb10:	e5810000 	str	r0, [r1]
         3bb14:	ea000001 	b	3bb20 <TBeamer::Send(RefVar const &)+0x140>
         3bb18:	e3e0606e 	mvn	r6, #110	; 0x6e
         3bb1c:	e2466a02 	sub	r6, r6, #8192	; 0x2000
         3bb20:	e1a0000d 	mov	r0, sp
         3bb24:	eb6e9563 	bl	1be10b8 <$ExitHandler>
         3bb28:	e59f008c 	ldr	r0, [pc, #8c]	; 3bbbc <TBeamer::Send(RefVar const &)+0x1dc>	; fField8
         3bb2c:	e5900000 	ldr	r0, [r0]
         3bb30:	e5901000 	ldr	r1, [r0]
         3bb34:	e5bd006c 	ldr	r0, [sp, #108]!
         3bb38:	e5900000 	ldr	r0, [r0]
         3bb3c:	eb6e21bb 	bl	1bc4230 <$EQRef__FlT1>
         3bb40:	e3300000 	teq	r0, #0	; 0x0
         3bb44:	13e06070 	mvnne	r6, #112	; 0x70
         3bb48:	12466a02 	subne	r6, r6, #8192	; 0x2000
         3bb4c:	1a000034 	bne	3bc24 <TBeamer::Send(RefVar const &)+0x244>
         3bb50:	e59d0000 	ldr	r0, [sp]
         3bb54:	e5900000 	ldr	r0, [r0]
         3bb58:	e3300002 	teq	r0, #2	; 0x2
         3bb5c:	03e0606e 	mvneq	r6, #110	; 0x6e
         3bb60:	02466a02 	subeq	r6, r6, #8192	; 0x2000
         3bb64:	0a00002e 	beq	3bc24 <TBeamer::Send(RefVar const &)+0x244>
         3bb68:	e3360000 	teq	r6, #0	; 0x0
         3bb6c:	1a000026 	bne	3bc0c <TBeamer::Send(RefVar const &)+0x22c>
         3bb70:	e24dd004 	sub	sp, sp, #4	; 0x4
         3bb74:	e5940020 	ldr	r0, [r4, #32]	; fField32
         3bb78:	e1a00100 	mov	r0, r0, lsl #2
         3bb7c:	eb6e1972 	bl	1bc214c <$AllocateRefHandle(long)>
         3bb80:	e58d0000 	str	r0, [sp]
         3bb84:	e1a0200d 	mov	r2, sp
         3bb88:	e1a01008 	mov	r1, r8
         3bb8c:	e1a00004 	mov	r0, r4
         3bb90:	eb6e29f4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3bb94:	e59d0000 	ldr	r0, [sp]
         3bb98:	eb6e1d87 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3bb9c:	e24dd004 	sub	sp, sp, #4	; 0x4
         3bba0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         3bba4:	e3100001 	tst	r0, #1	; 0x1
         3bba8:	e28d1008 	add	r1, sp, #8	; 0x8
         3bbac:	e1a00004 	mov	r0, r4
         3bbb0:	0a000002 	beq	3bbc0 <TBeamer::Send(RefVar const &)+0x1e0>
         3bbb4:	eb6a3644 	bl	1ac94cc <TBeamer::$SendWizard(RefVar const &)>
         3bbb8:	ea000001 	b	3bbc4 <TBeamer::Send(RefVar const &)+0x1e4>
         3bbbc:	00683358 	rsbeq	r3, r8, r8, asr r3
         3bbc0:	eb6a363c 	bl	1ac94b8 <TBeamer::$SendNewton(RefVar const &)>
         3bbc4:	e1b06000 	movs	r6, r0
         3bbc8:	03a00002 	moveq	r0, #2	; 0x2
         3bbcc:	11a00106 	movne	r0, r6, lsl #2
         3bbd0:	eb6e195d 	bl	1bc214c <$AllocateRefHandle(long)>
         3bbd4:	e58d0000 	str	r0, [sp]
         3bbd8:	e1a0300d 	mov	r3, sp
         3bbdc:	e28d2008 	add	r2, sp, #8	; 0x8
         3bbe0:	e1a01007 	mov	r1, r7
         3bbe4:	e1a00004 	mov	r0, r4
         3bbe8:	eb6f1116 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3bbec:	e59d0000 	ldr	r0, [sp]
         3bbf0:	eb6e1d71 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3bbf4:	e3360000 	teq	r6, #0	; 0x0
         3bbf8:	028dd008 	addeq	sp, sp, #8	; 0x8
         3bbfc:	0a000002 	beq	3bc0c <TBeamer::Send(RefVar const &)+0x22c>
         3bc00:	e3a06000 	mov	r6, #0	; 0x0
         3bc04:	e28dd008 	add	sp, sp, #8	; 0x8
         3bc08:	ea000005 	b	3bc24 <TBeamer::Send(RefVar const &)+0x244>
         3bc0c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         3bc10:	e2800001 	add	r0, r0, #1	; 0x1
         3bc14:	e5840020 	str	r0, [r4, #32]	; fField32
         3bc18:	e5941024 	ldr	r1, [r4, #36]	; fField36
         3bc1c:	e1500001 	cmp	r0, r1
         3bc20:	daffffac 	ble	3bad8 <TBeamer::Send(RefVar const &)+0xf8>
         3bc24:	e59d0000 	ldr	r0, [sp]
         3bc28:	eb6e1d63 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3bc2c:	eaffffa5 	b	3bac8 <TBeamer::Send(RefVar const &)+0xe8>
    */
}

/**
 * Symbol: TBeamer::ReceiveSetup(void)
 * Address: 0003bc30
 */
TBeamer::ReceiveSetup(void) {
    /*
         3bc30:	e1a0c00d 	mov	ip, sp
         3bc34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3bc38:	e24cb004 	sub	fp, ip, #4	; 0x4
         3bc3c:	e1a04000 	mov	r4, r0
         3bc40:	e3a00000 	mov	r0, #0	; 0x0
         3bc44:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         3bc48:	e5940018 	ldr	r0, [r4, #24]	; fField24
         3bc4c:	e3100004 	tst	r0, #4	; 0x4
         3bc50:	e3a01001 	mov	r1, #1	; 0x1
         3bc54:	02000008 	andeq	r0, r0, #8	; 0x8
         3bc58:	03300000 	teqeq	r0, #0	; 0x0
         3bc5c:	0a00002a 	beq	3bd0c <TBeamer::ReceiveSetup(void)+0xdc>
         3bc60:	e24dd010 	sub	sp, sp, #16	; 0x10
         3bc64:	e1a0000d 	mov	r0, sp
         3bc68:	e5941008 	ldr	r1, [r4, #8]	; fField8
         3bc6c:	eb6e151d 	bl	1bc10e8 <TObjectReader::$__ct(CPipe &)>
         3bc70:	e3a00000 	mov	r0, #0	; 0x0
         3bc74:	e52d006c 	str	r0, [sp, -#108]!
         3bc78:	e28d0008 	add	r0, sp, #8	; 0x8
         3bc7c:	eb6ddb3c 	bl	1bb2974 <$setjmp>
         3bc80:	e3300000 	teq	r0, #0	; 0x0
         3bc84:	1a00000e 	bne	3bcc4 <TBeamer::ReceiveSetup(void)+0x94>
         3bc88:	e1a0000d 	mov	r0, sp
         3bc8c:	eb6e90fa 	bl	1be007c <$AddExceptionHandler>
         3bc90:	e28d006c 	add	r0, sp, #108	; 0x6c
         3bc94:	eb6e299c 	bl	1bc630c <TObjectReader::$Read(void)>
         3bc98:	eb6e192b 	bl	1bc214c <$AllocateRefHandle(long)>
         3bc9c:	e1a05000 	mov	r5, r0
         3bca0:	e5900000 	ldr	r0, [r0]
         3bca4:	e3100003 	tst	r0, #3	; 0x3
         3bca8:	01a00140 	moveq	r0, r0, asr #2
         3bcac:	0a000000 	beq	3bcb4 <TBeamer::ReceiveSetup(void)+0x84>
         3bcb0:	eb6e1919 	bl	1bc211c <$_RINTError(long)>
         3bcb4:	e5a40024 	str	r0, [r4, #36]!	; fField36
         3bcb8:	e1a00005 	mov	r0, r5
         3bcbc:	eb6e1d3e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3bcc0:	ea000008 	b	3bce8 <TBeamer::ReceiveSetup(void)+0xb8>
         3bcc4:	e59d0060 	ldr	r0, [sp, #96]
         3bcc8:	e59f1038 	ldr	r1, [pc, #38]	; 3bd08 <TBeamer::ReceiveSetup(void)+0xd8>
         3bccc:	e5911000 	ldr	r1, [r1]
         3bcd0:	eb6e9d2f 	bl	1be3194 <$Subexception>
         3bcd4:	e3300000 	teq	r0, #0	; 0x0
         3bcd8:	03e00077 	mvneq	r0, #119	; 0x77
         3bcdc:	02400b25 	subeq	r0, r0, #37888	; 0x9400
         3bce0:	159d0064 	ldrne	r0, [sp, #100]
         3bce4:	e58d007c 	str	r0, [sp, #124]
         3bce8:	e1a0000d 	mov	r0, sp
         3bcec:	eb6e94f1 	bl	1be10b8 <$ExitHandler>
         3bcf0:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3bcf4:	e1a0000d 	mov	r0, sp
         3bcf8:	e3a01000 	mov	r1, #0	; 0x0
         3bcfc:	eb684a9b 	bl	1a4e770 <TObjectReader::$__dt(void)>
         3bd00:	e28dd010 	add	sp, sp, #16	; 0x10
         3bd04:	ea000001 	b	3bd10 <TBeamer::ReceiveSetup(void)+0xe0>
         3bd08:	00371324 	eoreqs	r1, r7, r4, lsr #6
         3bd0c:	e5a41024 	str	r1, [r4, #36]!	; fField36
         3bd10:	e49d0004 	ldr	r0, [sp], #4	; fField4
         3bd14:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TBeamer::Receive(void)
 * Address: 0003bd18
 */
TBeamer::Receive(void) {
    /*
         3bd18:	e1a0c00d 	mov	ip, sp
         3bd1c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         3bd20:	e24cb004 	sub	fp, ip, #4	; 0x4
         3bd24:	e1a04000 	mov	r4, r0
         3bd28:	eb6a35d6 	bl	1ac9488 <TBeamer::$ReceiveSetup(void)>
         3bd2c:	e1b05000 	movs	r5, r0
         3bd30:	e24dd004 	sub	sp, sp, #4	; 0x4
         3bd34:	1a00002c 	bne	3bdec <TBeamer::Receive(void)+0xd4>
         3bd38:	e5940024 	ldr	r0, [r4, #36]	; fField36
         3bd3c:	e1a00100 	mov	r0, r0, lsl #2
         3bd40:	eb6e1901 	bl	1bc214c <$AllocateRefHandle(long)>
         3bd44:	e58d0000 	str	r0, [sp]
         3bd48:	e1a0200d 	mov	r2, sp
         3bd4c:	e59f1068 	ldr	r1, [pc, #68]	; 3bdbc <TBeamer::Receive(void)+0xa4>
         3bd50:	e1a00004 	mov	r0, r4
         3bd54:	eb6e2983 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3bd58:	e59d0000 	ldr	r0, [sp]
         3bd5c:	eb6e1d16 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3bd60:	e3a00001 	mov	r0, #1	; 0x1
         3bd64:	e5840020 	str	r0, [r4, #32]	; fField32
         3bd68:	e5940024 	ldr	r0, [r4, #36]	; fField36
         3bd6c:	e3500001 	cmp	r0, #1	; 0x1
         3bd70:	ba00001d 	blt	3bdec <TBeamer::Receive(void)+0xd4>
         3bd74:	e59f6044 	ldr	r6, [pc, #44]	; 3bdc0 <TBeamer::Receive(void)+0xa8>
         3bd78:	e24dd004 	sub	sp, sp, #4	; 0x4
         3bd7c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         3bd80:	e1a00100 	mov	r0, r0, lsl #2
         3bd84:	eb6e18f0 	bl	1bc214c <$AllocateRefHandle(long)>
         3bd88:	e58d0000 	str	r0, [sp]
         3bd8c:	e1a0200d 	mov	r2, sp
         3bd90:	e1a01006 	mov	r1, r6
         3bd94:	e1a00004 	mov	r0, r4
         3bd98:	eb6e2972 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3bd9c:	e59d0000 	ldr	r0, [sp]
         3bda0:	eb6e1d05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3bda4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         3bda8:	e3100001 	tst	r0, #1	; 0x1
         3bdac:	e1a00004 	mov	r0, r4
         3bdb0:	0a000003 	beq	3bdc4 <TBeamer::Receive(void)+0xac>
         3bdb4:	eb6a35b4 	bl	1ac948c <TBeamer::$ReceiveWizard(void)>
         3bdb8:	ea000002 	b	3bdc8 <TBeamer::Receive(void)+0xb0>
         3bdbc:	00682058 	rsbeq	r2, r8, r8, asr r0
         3bdc0:	00682040 	rsbeq	r2, r8, r0, asr #32
         3bdc4:	eb6a35ae 	bl	1ac9484 <TBeamer::$ReceiveNewton(void)>
         3bdc8:	e1b05000 	movs	r5, r0
         3bdcc:	e28dd004 	add	sp, sp, #4	; 0x4
         3bdd0:	1a000005 	bne	3bdec <TBeamer::Receive(void)+0xd4>
         3bdd4:	e5940020 	ldr	r0, [r4, #32]	; fField32
         3bdd8:	e2800001 	add	r0, r0, #1	; 0x1
         3bddc:	e5840020 	str	r0, [r4, #32]	; fField32
         3bde0:	e5941024 	ldr	r1, [r4, #36]	; fField36
         3bde4:	e1500001 	cmp	r0, r1
         3bde8:	daffffe2 	ble	3bd78 <TBeamer::Receive(void)+0x60>
         3bdec:	e1a00005 	mov	r0, r5
         3bdf0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TBeamer::OpenEndpoint(unsigned long, unsigned char)
 * Address: 0003bdf4
 */
TBeamer::OpenEndpoint(unsigned long, unsigned char) {
    /*
         3bdf4:	e1a0c00d 	mov	ip, sp
         3bdf8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         3bdfc:	e24cb004 	sub	fp, ip, #4	; 0x4
         3be00:	e1a04000 	mov	r4, r0
         3be04:	e1a05001 	mov	r5, r1
         3be08:	e20280ff 	and	r8, r2, #255	; 0xff
         3be0c:	e5801014 	str	r1, [r0, #20]	; fField20
         3be10:	eb6e5eef 	bl	1bd39d4 <$GetGlobals>
         3be14:	e3a01000 	mov	r1, #0	; 0x0
         3be18:	eb6dc624 	bl	1bad6b0 <TForkWorld::$Fork(TForkWorld *)>
         3be1c:	e1b06000 	movs	r6, r0
         3be20:	e24dd004 	sub	sp, sp, #4	; 0x4
         3be24:	1a0000c8 	bne	3c14c <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x358>
         3be28:	e24dd018 	sub	sp, sp, #24	; 0x18
         3be2c:	e1a0000d 	mov	r0, sp
         3be30:	eb6de72b 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         3be34:	e1a0000d 	mov	r0, sp
         3be38:	eb6df38f 	bl	1bb8c7c <TOptionArray::$Init(void)>
         3be3c:	e1b06000 	movs	r6, r0
         3be40:	1a000076 	bne	3c020 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x22c>
         3be44:	e24dd00c 	sub	sp, sp, #12	; 0xc
         3be48:	e1a0000d 	mov	r0, sp
         3be4c:	e3a01303 	mov	r1, #201326592	; 0xc000000
         3be50:	eb6deb34 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         3be54:	e1a01005 	mov	r1, r5
         3be58:	e1a0000d 	mov	r0, sp
         3be5c:	eb6dfbb4 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
         3be60:	e1a0200d 	mov	r2, sp
         3be64:	e59d100c 	ldr	r1, [sp, #12]	; fField12
         3be68:	e28d000c 	add	r0, sp, #12	; 0xc
         3be6c:	eb6df78c 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         3be70:	e1b06000 	movs	r6, r0
         3be74:	0a000004 	beq	3be8c <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x98>
         3be78:	e28d000c 	add	r0, sp, #12	; 0xc
         3be7c:	e3a01000 	mov	r1, #0	; 0x0
         3be80:	eb6deb29 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         3be84:	e28dd024 	add	sp, sp, #36	; 0x24
         3be88:	ea0000af 	b	3c14c <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x358>
         3be8c:	e28dd00c 	add	sp, sp, #12	; 0xc
         3be90:	e3a07000 	mov	r7, #0	; 0x0
         3be94:	e59fc078 	ldr	ip, [pc, #78]	; 3bf14 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x120>
         3be98:	e135000c 	teq	r5, ip
         3be9c:	1a00001d 	bne	3bf18 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x124>
         3bea0:	e24dd024 	sub	sp, sp, #36	; 0x24
         3bea4:	e28d0014 	add	r0, sp, #20	; 0x14
         3bea8:	eb6f20ee 	bl	1c04268 <TCMOSlowIRConnect::$__ct(void)>
         3beac:	e1a0000d 	mov	r0, sp
         3beb0:	eb6e03de 	bl	1bbce30 <TCMOSlowIRProtocolType::$__ct(void)>
         3beb4:	e3a00008 	mov	r0, #8	; 0x8
         3beb8:	e58d0020 	str	r0, [sp, #32]	; fField32
         3bebc:	e28d2014 	add	r2, sp, #20	; 0x14
         3bec0:	e59d1024 	ldr	r1, [sp, #36]	; fField36
         3bec4:	e28d0024 	add	r0, sp, #36	; 0x24
         3bec8:	eb6df775 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         3becc:	e1b06000 	movs	r6, r0
         3bed0:	1a00000a 	bne	3bf00 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x10c>
         3bed4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         3bed8:	e58d000c 	str	r0, [sp, #12]	; fField12
         3bedc:	e594001c 	ldr	r0, [r4, #28]	; fField28
         3bee0:	e58d0010 	str	r0, [sp, #16]	; fField16
         3bee4:	e1a0200d 	mov	r2, sp
         3bee8:	e59d1024 	ldr	r1, [sp, #36]	; fField36
         3beec:	e28d0024 	add	r0, sp, #36	; 0x24
         3bef0:	eb6df76b 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         3bef4:	e1b06000 	movs	r6, r0
         3bef8:	028dd024 	addeq	sp, sp, #36	; 0x24
         3befc:	0a000041 	beq	3c008 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x214>
         3bf00:	e28d0024 	add	r0, sp, #36	; 0x24
         3bf04:	e3a01000 	mov	r1, #0	; 0x0
         3bf08:	eb6deb07 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         3bf0c:	e28dd03c 	add	sp, sp, #60	; 0x3c
         3bf10:	ea00008d 	b	3c14c <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x358>
         3bf14:	736c6972 	cmnvc	ip, #1867776	; 0x1c8000
         3bf18:	e59fc0dc 	ldr	ip, [pc, #dc]	; 3bffc <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x208>
         3bf1c:	e135000c 	teq	r5, ip
         3bf20:	1a000038 	bne	3c008 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x214>
         3bf24:	e24dd0a0 	sub	sp, sp, #160	; 0xa0
         3bf28:	e28d0080 	add	r0, sp, #128	; 0x80
         3bf2c:	eb67c9f5 	bl	1a2e708 <TCMOIrDADiscovery::$__ct(void)>
         3bf30:	e28d0024 	add	r0, sp, #36	; 0x24
         3bf34:	eb67c9f6 	bl	1a2e714 <TCMOIrDAConnectionInfo::$__ct(void)>
         3bf38:	e28d0010 	add	r0, sp, #16	; 0x10
         3bf3c:	eb67c9f2 	bl	1a2e70c <TCMOIrDAReceiveBuffers::$__ct(void)>
         3bf40:	e1a0000d 	mov	r0, sp
         3bf44:	eb67c9f1 	bl	1a2e710 <TCMOIrDALinkDisconnect::$__ct(void)>
         3bf48:	e3a05001 	mov	r5, #1	; 0x1
         3bf4c:	e58d508c 	str	r5, [sp, #140]
         3bf50:	e58d709c 	str	r7, [sp, #156]
         3bf54:	e28d2080 	add	r2, sp, #128	; 0x80
         3bf58:	e59d10a0 	ldr	r1, [sp, #160]
         3bf5c:	e28d00a0 	add	r0, sp, #160	; 0xa0
         3bf60:	eb6df74f 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         3bf64:	e1b06000 	movs	r6, r0
         3bf68:	1a00001e 	bne	3bfe8 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x1f4>
         3bf6c:	e58d7030 	str	r7, [sp, #48]
         3bf70:	e3a00003 	mov	r0, #3	; 0x3
         3bf74:	e58d0038 	str	r0, [sp, #56]
         3bf78:	e58d7034 	str	r7, [sp, #52]
         3bf7c:	e58d003c 	str	r0, [sp, #60]
         3bf80:	e59f0078 	ldr	r0, [pc, #78]	; 3c000 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x20c>
         3bf84:	e58d0040 	str	r0, [sp, #64]
         3bf88:	e58d0044 	str	r0, [sp, #68]
         3bf8c:	e28d2024 	add	r2, sp, #36	; 0x24
         3bf90:	e59d10a0 	ldr	r1, [sp, #160]
         3bf94:	e28d00a0 	add	r0, sp, #160	; 0xa0
         3bf98:	eb6df741 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         3bf9c:	e1b06000 	movs	r6, r0
         3bfa0:	1a000010 	bne	3bfe8 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x1f4>
         3bfa4:	e3a00b01 	mov	r0, #1024	; 0x400
         3bfa8:	e58d001c 	str	r0, [sp, #28]	; fField28
         3bfac:	e58d5020 	str	r5, [sp, #32]	; fField32
         3bfb0:	e28d2010 	add	r2, sp, #16	; 0x10
         3bfb4:	e59d10a0 	ldr	r1, [sp, #160]
         3bfb8:	e28d00a0 	add	r0, sp, #160	; 0xa0
         3bfbc:	eb6df738 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         3bfc0:	e1b06000 	movs	r6, r0
         3bfc4:	1a000007 	bne	3bfe8 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x1f4>
         3bfc8:	e3a00014 	mov	r0, #20	; 0x14
         3bfcc:	e58d000c 	str	r0, [sp, #12]	; fField12
         3bfd0:	e1a0200d 	mov	r2, sp
         3bfd4:	e59d10a0 	ldr	r1, [sp, #160]
         3bfd8:	e28d00a0 	add	r0, sp, #160	; 0xa0
         3bfdc:	eb6df730 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         3bfe0:	e1b06000 	movs	r6, r0
         3bfe4:	0a000006 	beq	3c004 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x210>
         3bfe8:	e28d00a0 	add	r0, sp, #160	; 0xa0
         3bfec:	e3a01000 	mov	r1, #0	; 0x0
         3bff0:	eb6deacd 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         3bff4:	e28dd0b8 	add	sp, sp, #184	; 0xb8
         3bff8:	ea000053 	b	3c14c <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x358>
         3bffc:	69726461 	ldmvsdb	r2!, {r0, r5, r6, sl, sp, lr}^
         3c000:	424d5700 	submi	r5, sp, #0	; 0x0
         3c004:	e28dd0a0 	add	sp, sp, #160	; 0xa0
         3c008:	e2841004 	add	r1, r4, #4	; 0x4
         3c00c:	e1a0000d 	mov	r0, sp
         3c010:	e3a02001 	mov	r2, #1	; 0x1
         3c014:	eb6deee1 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
         3c018:	e1b06000 	movs	r6, r0
         3c01c:	0a000004 	beq	3c034 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x240>
         3c020:	e1a0000d 	mov	r0, sp
         3c024:	e3a01000 	mov	r1, #0	; 0x0
         3c028:	eb6deabf 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         3c02c:	e28dd018 	add	sp, sp, #24	; 0x18
         3c030:	ea000045 	b	3c14c <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x358>
         3c034:	e1a0000d 	mov	r0, sp
         3c038:	e3a01000 	mov	r1, #0	; 0x0
         3c03c:	eb6deaba 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         3c040:	e28dd018 	add	sp, sp, #24	; 0x18
         3c044:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3c048:	eb693527 	bl	1a894ec <$AddressToRef(void *)>
         3c04c:	eb6e183e 	bl	1bc214c <$AllocateRefHandle(long)>
         3c050:	e58d0000 	str	r0, [sp]
         3c054:	e1a0200d 	mov	r2, sp
         3c058:	e59f10a0 	ldr	r1, [pc, #a0]	; 3c100 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x30c>
         3c05c:	e1a05001 	mov	r5, r1
         3c060:	e1a00004 	mov	r0, r4
         3c064:	eb6e28bf 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3c068:	e59d0000 	ldr	r0, [sp]
         3c06c:	eb6e1c52 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c070:	e3a01000 	mov	r1, #0	; 0x0
         3c074:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3c078:	eb6df714 	bl	1bb9cd0 <TEndpoint::$Open(unsigned long)>
         3c07c:	e1b06000 	movs	r6, r0
         3c080:	1a00002b 	bne	3c134 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x340>
         3c084:	e3a03001 	mov	r3, #1	; 0x1
         3c088:	e3a02000 	mov	r2, #0	; 0x0
         3c08c:	e3a01000 	mov	r1, #0	; 0x0
         3c090:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3c094:	eb6730f4 	bl	1a0846c <TEndpoint::$nBind(TOptionArray *, unsigned long, unsigned char)>
         3c098:	e1b06000 	movs	r6, r0
         3c09c:	1a000022 	bne	3c12c <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x338>
         3c0a0:	e3380000 	teq	r8, #0	; 0x0
         3c0a4:	e3a03001 	mov	r3, #1	; 0x1
         3c0a8:	e3a02000 	mov	r2, #0	; 0x0
         3c0ac:	e92d000c 	stmdb	sp!, {r2, r3}
         3c0b0:	e3a03000 	mov	r3, #0	; 0x0
         3c0b4:	e3a01000 	mov	r1, #0	; 0x0
         3c0b8:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3c0bc:	0a000010 	beq	3c104 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x310>
         3c0c0:	eb6730ec 	bl	1a08478 <TEndpoint::$nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
         3c0c4:	e28dd008 	add	sp, sp, #8	; 0x8
         3c0c8:	e1b06000 	movs	r6, r0
         3c0cc:	1a000012 	bne	3c11c <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x328>
         3c0d0:	e3a03001 	mov	r3, #1	; 0x1
         3c0d4:	e3a02000 	mov	r2, #0	; 0x0
         3c0d8:	e3a01000 	mov	r1, #0	; 0x0
         3c0dc:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         3c0e0:	e5941004 	ldr	r1, [r4, #4]	; fField4
         3c0e4:	e1a00001 	mov	r0, r1
         3c0e8:	e3a03000 	mov	r3, #0	; 0x0
         3c0ec:	eb6730dd 	bl	1a08468 <TEndpoint::$nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)>
         3c0f0:	e28dd00c 	add	sp, sp, #12	; 0xc
         3c0f4:	e1b06000 	movs	r6, r0
         3c0f8:	1a000007 	bne	3c11c <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x328>
         3c0fc:	ea000004 	b	3c114 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x320>
         3c100:	00682c70 	rsbeq	r2, r8, r0, ror ip
         3c104:	eb6730d9 	bl	1a08470 <TEndpoint::$nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
         3c108:	e28dd008 	add	sp, sp, #8	; 0x8
         3c10c:	e1b06000 	movs	r6, r0
         3c110:	1a000001 	bne	3c11c <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x328>
         3c114:	e1a00007 	mov	r0, r7
         3c118:	ea00000c 	b	3c150 <TBeamer::OpenEndpoint(unsigned long, unsigned char)+0x35c>
         3c11c:	e3a02001 	mov	r2, #1	; 0x1
         3c120:	e3a01000 	mov	r1, #0	; 0x0
         3c124:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3c128:	eb6734d8 	bl	1a09490 <TEndpoint::$nUnBind(unsigned long, unsigned char)>
         3c12c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3c130:	eb6dee99 	bl	1bb7b9c <TEndpoint::$Close(void)>
         3c134:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3c138:	eb6deeac 	bl	1bb7bf0 <TEndpoint::$Delete(void)>
         3c13c:	e1a01005 	mov	r1, r5
         3c140:	e5847004 	str	r7, [r4, #4]	; fField4
         3c144:	e1a00004 	mov	r0, r4
         3c148:	eb6e2875 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
         3c14c:	e1a00006 	mov	r0, r6
         3c150:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TBeamer::OpenPipe(unsigned char)
 * Address: 0003c154
 */
TBeamer::OpenPipe(unsigned char) {
    /*
         3c154:	e1a0c00d 	mov	ip, sp
         3c158:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3c15c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3c160:	e1a04000 	mov	r4, r0
         3c164:	e20100ff 	and	r0, r1, #255	; 0xff
         3c168:	e3a01000 	mov	r1, #0	; 0x0
         3c16c:	e52d1004 	str	r1, [sp, -#4]!	; fField4
         3c170:	e5941018 	ldr	r1, [r4, #24]	; fField24
         3c174:	e3110001 	tst	r1, #1	; 0x1
         3c178:	0a00001f 	beq	3c1fc <TBeamer::OpenPipe(unsigned char)+0xa8>
         3c17c:	e3e05055 	mvn	r5, #85	; 0x55
         3c180:	e2455cc3 	sub	r5, r5, #49920	; 0xc300
         3c184:	e3300000 	teq	r0, #0	; 0x0
         3c188:	0a00000d 	beq	3c1c4 <TBeamer::OpenPipe(unsigned char)+0x70>
         3c18c:	e28f1f05 	add	r1, pc, #20	; 0x14
         3c190:	e28f0f07 	add	r0, pc, #28	; 0x1c
         3c194:	eb6e6e7c 	bl	1bd7b8c <$NewByName__FPCcT1>
         3c198:	e5a40010 	str	r0, [r4, #16]!	; fField16
         3c19c:	e3300000 	teq	r0, #0	; 0x0
         3c1a0:	1a000042 	bne	3c2b0 <TBeamer::OpenPipe(unsigned char)+0x15c>
         3c1a4:	ea00000c 	b	3c1dc <TBeamer::OpenPipe(unsigned char)+0x88>
         3c1a8:	5057697a 	subpls	r6, r7, sl, ror r9
         3c1ac:	61726439 	cmnvs	r2, r9, lsr r4
         3c1b0:	496e0000 	stmmidb	lr!, {}^
         3c1b4:	50467261 	subpl	r7, r6, r1, ror #4
         3c1b8:	6d65536f 	stcvsl	3, cr5, [r5, -#444]!
         3c1bc:	75726365 	ldrvcb	r6, [r2, -#869]!
         3c1c0:	00000000 	andeq	r0, r0, r0
         3c1c4:	e28f1f06 	add	r1, pc, #24	; 0x18
         3c1c8:	e28f0f08 	add	r0, pc, #32	; 0x20
         3c1cc:	eb6e6e6e 	bl	1bd7b8c <$NewByName__FPCcT1>
         3c1d0:	e5a4000c 	str	r0, [r4, #12]!	; fField12
         3c1d4:	e3300000 	teq	r0, #0	; 0x0
         3c1d8:	1a000034 	bne	3c2b0 <TBeamer::OpenPipe(unsigned char)+0x15c>
         3c1dc:	e58d5000 	str	r5, [sp]
         3c1e0:	ea000032 	b	3c2b0 <TBeamer::OpenPipe(unsigned char)+0x15c>
         3c1e4:	5057697a 	subpls	r6, r7, sl, ror r9
         3c1e8:	61726439 	cmnvs	r2, r9, lsr r4
         3c1ec:	4f757400 	swimi	0x00757400
         3c1f0:	50467261 	subpl	r7, r6, r1, ror #4
         3c1f4:	6d655369 	stcvsl	3, cr5, [r5, -#420]!
         3c1f8:	6e6b0000 	cdpvs	0, 6, cr0, cr11, cr0, {0}
         3c1fc:	e3a00000 	mov	r0, #0	; 0x0
         3c200:	eb6de638 	bl	1bb5ae8 <TEndpointPipe::$__ct(void)>
         3c204:	e5840008 	str	r0, [r4, #8]	; fField8
         3c208:	e3300000 	teq	r0, #0	; 0x0
         3c20c:	1a000002 	bne	3c21c <TBeamer::OpenPipe(unsigned char)+0xc8>
         3c210:	eb6e97c2 	bl	1be2120 <$MemError>
         3c214:	e58d0000 	str	r0, [sp]
         3c218:	ea000024 	b	3c2b0 <TBeamer::OpenPipe(unsigned char)+0x15c>
         3c21c:	e3a00000 	mov	r0, #0	; 0x0
         3c220:	e52d006c 	str	r0, [sp, -#108]!
         3c224:	e28d0008 	add	r0, sp, #8	; 0x8
         3c228:	eb6dd9d1 	bl	1bb2974 <$setjmp>
         3c22c:	e3300000 	teq	r0, #0	; 0x0
         3c230:	1a000011 	bne	3c27c <TBeamer::OpenPipe(unsigned char)+0x128>
         3c234:	e1a0000d 	mov	r0, sp
         3c238:	eb6e8f8f 	bl	1be007c <$AddExceptionHandler>
         3c23c:	e2843028 	add	r3, r4, #40	; 0x28
         3c240:	e5940014 	ldr	r0, [r4, #20]	; fField20
         3c244:	e59fc02c 	ldr	ip, [pc, #2c]	; 3c278 <TBeamer::OpenPipe(unsigned char)+0x124>
         3c248:	e130000c 	teq	r0, ip
         3c24c:	13a02000 	movne	r2, #0	; 0x0
         3c250:	03a02001 	moveq	r2, #1	; 0x1
         3c254:	e3a01000 	mov	r1, #0	; 0x0
         3c258:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         3c25c:	e3a03c02 	mov	r3, #512	; 0x200
         3c260:	e3a02c02 	mov	r2, #512	; 0x200
         3c264:	e5b41004 	ldr	r1, [r4, #4]!	; fField4
         3c268:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3c26c:	eb6f0b2a 	bl	1bfef1c <TEndpointPipe::$Init(TEndpoint *, long, long, unsigned long, unsigned char, PipeCallBack *)>
         3c270:	e28dd00c 	add	sp, sp, #12	; 0xc
         3c274:	ea00000a 	b	3c2a4 <TBeamer::OpenPipe(unsigned char)+0x150>
         3c278:	736c6972 	cmnvc	ip, #1867776	; 0x1c8000
         3c27c:	e59d0060 	ldr	r0, [sp, #96]
         3c280:	e59f1030 	ldr	r1, [pc, #30]	; 3c2b8 <TBeamer::OpenPipe(unsigned char)+0x164>
         3c284:	e5911000 	ldr	r1, [r1]
         3c288:	eb6e9bc1 	bl	1be3194 <$Subexception>
         3c28c:	e3300000 	teq	r0, #0	; 0x0
         3c290:	159d0064 	ldrne	r0, [sp, #100]
         3c294:	158d006c 	strne	r0, [sp, #108]
         3c298:	1a000001 	bne	3c2a4 <TBeamer::OpenPipe(unsigned char)+0x150>
         3c29c:	e1a0000d 	mov	r0, sp
         3c2a0:	eb6e97ab 	bl	1be2154 <$NextHandler>
         3c2a4:	e1a0000d 	mov	r0, sp
         3c2a8:	eb6e9382 	bl	1be10b8 <$ExitHandler>
         3c2ac:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3c2b0:	e49d0004 	ldr	r0, [sp], #4	; fField4
         3c2b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         3c2b8:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TBeamer::IdentifyProtocol(void)
 * Address: 0003c2bc
 */
TBeamer::IdentifyProtocol(void) {
    /*
         3c2bc:	e1a0c00d 	mov	ip, sp
         3c2c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3c2c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         3c2c8:	e1a04000 	mov	r4, r0
         3c2cc:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         3c2d0:	e28d0014 	add	r0, sp, #20	; 0x14
         3c2d4:	eb6de602 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         3c2d8:	e1a0000d 	mov	r0, sp
         3c2dc:	eb6e02d3 	bl	1bbce30 <TCMOSlowIRProtocolType::$__ct(void)>
         3c2e0:	e28d0014 	add	r0, sp, #20	; 0x14
         3c2e4:	eb6df264 	bl	1bb8c7c <TOptionArray::$Init(void)>
         3c2e8:	e1b05000 	movs	r5, r0
         3c2ec:	1a000021 	bne	3c378 <TBeamer::IdentifyProtocol(void)+0xbc>
         3c2f0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         3c2f4:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         3c2f8:	e3800b01 	orr	r0, r0, #1024	; 0x400
         3c2fc:	e58d0008 	str	r0, [sp, #8]	; fField8
         3c300:	e1a0200d 	mov	r2, sp
         3c304:	e59d1014 	ldr	r1, [sp, #20]	; fField20
         3c308:	e28d0014 	add	r0, sp, #20	; 0x14
         3c30c:	eb6df664 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         3c310:	e1b05000 	movs	r5, r0
         3c314:	1a000017 	bne	3c378 <TBeamer::IdentifyProtocol(void)+0xbc>
         3c318:	e3a03001 	mov	r3, #1	; 0x1
         3c31c:	e92d0008 	stmdb	sp!, {r3}
         3c320:	e28d2018 	add	r2, sp, #24	; 0x18
         3c324:	e3a03000 	mov	r3, #0	; 0x0
         3c328:	e3a01c05 	mov	r1, #1280	; 0x500
         3c32c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3c330:	eb673051 	bl	1a0847c <TEndpoint::$nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)>
         3c334:	e28dd004 	add	sp, sp, #4	; 0x4
         3c338:	e1b05000 	movs	r5, r0
         3c33c:	1a00000d 	bne	3c378 <TBeamer::IdentifyProtocol(void)+0xbc>
         3c340:	e28d0014 	add	r0, sp, #20	; 0x14
         3c344:	e3a01000 	mov	r1, #0	; 0x0
         3c348:	eb6df661 	bl	1bb9cd4 <TOptionArray::$OptionAt(long)>
         3c34c:	e3300000 	teq	r0, #0	; 0x0
         3c350:	03e05000 	mvneq	r5, #0	; 0x0
         3c354:	0a000007 	beq	3c378 <TBeamer::IdentifyProtocol(void)+0xbc>
         3c358:	e5901008 	ldr	r1, [r0, #8]	; fField8
         3c35c:	e1a05c01 	mov	r5, r1, lsl #24
         3c360:	e1b05c45 	movs	r5, r5, asr #24
         3c364:	1a000003 	bne	3c378 <TBeamer::IdentifyProtocol(void)+0xbc>
         3c368:	e590100c 	ldr	r1, [r0, #12]	; fField12
         3c36c:	e5841018 	str	r1, [r4, #24]	; fField24
         3c370:	e5900010 	ldr	r0, [r0, #16]	; fField16
         3c374:	e5a4001c 	str	r0, [r4, #28]!	; fField28
         3c378:	e28d0014 	add	r0, sp, #20	; 0x14
         3c37c:	e3a01000 	mov	r1, #0	; 0x0
         3c380:	eb6de9e9 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         3c384:	e1a00005 	mov	r0, r5
         3c388:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TBeamer::UpdateProgress(long, int)
 * Address: 0003c3a8
 */
TBeamer::UpdateProgress(long, int) {
    /*
         3c3a8:	e1a0c00d 	mov	ip, sp
         3c3ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         3c3b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         3c3b4:	e1a04000 	mov	r4, r0
         3c3b8:	e1a05002 	mov	r5, r2
         3c3bc:	e280003c 	add	r0, r0, #60	; 0x3c
         3c3c0:	e1a06000 	mov	r6, r0
         3c3c4:	e5900000 	ldr	r0, [r0]
         3c3c8:	e5900000 	ldr	r0, [r0]
         3c3cc:	e3300002 	teq	r0, #2	; 0x2
         3c3d0:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         3c3d4:	e24dd004 	sub	sp, sp, #4	; 0x4
         3c3d8:	e3510000 	cmp	r1, #0	; 0x0
         3c3dc:	da000008 	ble	3c404 <TBeamer::UpdateProgress(long, int)+0x5c>
         3c3e0:	e1a00101 	mov	r0, r1, lsl #2
         3c3e4:	eb6e1758 	bl	1bc214c <$AllocateRefHandle(long)>
         3c3e8:	e58d0000 	str	r0, [sp]
         3c3ec:	e1a0200d 	mov	r2, sp
         3c3f0:	e1a00006 	mov	r0, r6
         3c3f4:	e59f1028 	ldr	r1, [pc, #28]	; 3c424 <TBeamer::UpdateProgress(long, int)+0x7c>	; fField28
         3c3f8:	eb6e27da 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3c3fc:	e59d0000 	ldr	r0, [sp]
         3c400:	eb6e1b6d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c404:	e59f101c 	ldr	r1, [pc, #1c]	; 3c428 <TBeamer::UpdateProgress(long, int)+0x80>
         3c408:	e3350000 	teq	r5, #0	; 0x0
         3c40c:	e1a03006 	mov	r3, r6
         3c410:	059f2014 	ldreq	r2, [pc, #14]	; 3c42c <TBeamer::UpdateProgress(long, int)+0x84>
         3c414:	159f2014 	ldrne	r2, [pc, #14]	; 3c430 <TBeamer::UpdateProgress(long, int)+0x88>
         3c418:	e1a00004 	mov	r0, r4
         3c41c:	eb6f0f09 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3c420:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         3c424:	00682f38 	rsbeq	r2, r8, r8, lsr pc
         3c428:	006845c0 	rsbeq	r4, r8, r0, asr #11
         3c42c:	00684518 	rsbeq	r4, r8, r8, lsl r5
         3c430:	00684158 	rsbeq	r4, r8, r8, asr r1
    */
}

/**
 * Symbol: TBeamer::SendNewton(RefVar const &)
 * Address: 0003c434
 */
TBeamer::SendNewton(RefVar const &) {
    /*
         3c434:	e1a0c00d 	mov	ip, sp
         3c438:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         3c43c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3c440:	e1a04000 	mov	r4, r0
         3c444:	e1a05001 	mov	r5, r1
         3c448:	e3a00000 	mov	r0, #0	; 0x0
         3c44c:	e3a0a000 	mov	sl, #0	; 0x0
         3c450:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         3c454:	e52da06c 	str	sl, [sp, -#108]!
         3c458:	e28d0008 	add	r0, sp, #8	; 0x8
         3c45c:	eb6dd944 	bl	1bb2974 <$setjmp>
         3c460:	e59f6494 	ldr	r6, [pc, #494]	; 3c8fc <TBeamer::SendNewton(RefVar const &)+0x4c8>
         3c464:	e3300000 	teq	r0, #0	; 0x0
         3c468:	1a000165 	bne	3ca04 <TBeamer::SendNewton(RefVar const &)+0x5d0>
         3c46c:	e1a0000d 	mov	r0, sp
         3c470:	eb6e8f01 	bl	1be007c <$AddExceptionHandler>
         3c474:	e24dd004 	sub	sp, sp, #4	; 0x4
         3c478:	e59f0480 	ldr	r0, [pc, #480]	; 3c900 <TBeamer::SendNewton(RefVar const &)+0x4cc>
         3c47c:	e5900000 	ldr	r0, [r0]
         3c480:	e5901000 	ldr	r1, [r0]
         3c484:	e5950000 	ldr	r0, [r5]
         3c488:	e5900000 	ldr	r0, [r0]
         3c48c:	eb6e1f73 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         3c490:	eb6e172d 	bl	1bc214c <$AllocateRefHandle(long)>
         3c494:	e40d0004 	str	r0, [sp], -#4	; fField4
         3c498:	e5940018 	ldr	r0, [r4, #24]	; fField24
         3c49c:	e3100002 	tst	r0, #2	; 0x2
         3c4a0:	e59f745c 	ldr	r7, [pc, #45c]	; 3c904 <TBeamer::SendNewton(RefVar const &)+0x4d0>
         3c4a4:	e3a08002 	mov	r8, #2	; 0x2
         3c4a8:	0a00001c 	beq	3c520 <TBeamer::SendNewton(RefVar const &)+0xec>
         3c4ac:	e5940020 	ldr	r0, [r4, #32]	; fField32
         3c4b0:	e3500001 	cmp	r0, #1	; 0x1
         3c4b4:	da000019 	ble	3c520 <TBeamer::SendNewton(RefVar const &)+0xec>
         3c4b8:	e24dd004 	sub	sp, sp, #4	; 0x4
         3c4bc:	e1a00008 	mov	r0, r8
         3c4c0:	eb6e1721 	bl	1bc214c <$AllocateRefHandle(long)>
         3c4c4:	e58d0000 	str	r0, [sp]
         3c4c8:	e1a0300d 	mov	r3, sp
         3c4cc:	e59f2434 	ldr	r2, [pc, #434]	; 3c908 <TBeamer::SendNewton(RefVar const &)+0x4d4>
         3c4d0:	e1a01007 	mov	r1, r7
         3c4d4:	e1a00004 	mov	r0, r4
         3c4d8:	eb6f0eda 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3c4dc:	e59d0000 	ldr	r0, [sp]
         3c4e0:	eb6e1b35 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c4e4:	e3a03000 	mov	r3, #0	; 0x0
         3c4e8:	e3a02000 	mov	r2, #0	; 0x0
         3c4ec:	e92d000c 	stmdb	sp!, {r2, r3}
         3c4f0:	e3a01000 	mov	r1, #0	; 0x0
         3c4f4:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3c4f8:	eb6dedb2 	bl	1bb7bc8 <TEndpoint::$Connect(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)>
         3c4fc:	e28dd008 	add	sp, sp, #8	; 0x8
         3c500:	e58d0078 	str	r0, [sp, #120]
         3c504:	e3300000 	teq	r0, #0	; 0x0
         3c508:	0a000003 	beq	3c51c <TBeamer::SendNewton(RefVar const &)+0xe8>
         3c50c:	e1a01000 	mov	r1, r0
         3c510:	e3a02000 	mov	r2, #0	; 0x0
         3c514:	e5960000 	ldr	r0, [r6]
         3c518:	eb6e9b1f 	bl	1be319c <$Throw>
         3c51c:	e28dd004 	add	sp, sp, #4	; 0x4
         3c520:	e1a00008 	mov	r0, r8
         3c524:	eb6e1708 	bl	1bc214c <$AllocateRefHandle(long)>
         3c528:	e58d0000 	str	r0, [sp]
         3c52c:	e1a0300d 	mov	r3, sp
         3c530:	e59f23d4 	ldr	r2, [pc, #3d4]	; 3c90c <TBeamer::SendNewton(RefVar const &)+0x4d8>
         3c534:	e1a01007 	mov	r1, r7
         3c538:	e1a00004 	mov	r0, r4
         3c53c:	eb6f0ec1 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3c540:	e59d0000 	ldr	r0, [sp]
         3c544:	eb6e1b1c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c548:	e24dd028 	sub	sp, sp, #40	; 0x28
         3c54c:	e1a01005 	mov	r1, r5
         3c550:	e1a0000d 	mov	r0, sp
         3c554:	e3a03000 	mov	r3, #0	; 0x0
         3c558:	e5942008 	ldr	r2, [r4, #8]	; fField8
         3c55c:	eb6e12e2 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
         3c560:	e52da06c 	str	sl, [sp, -#108]!
         3c564:	e28d0008 	add	r0, sp, #8	; 0x8
         3c568:	eb6dd901 	bl	1bb2974 <$setjmp>
         3c56c:	e3300000 	teq	r0, #0	; 0x0
         3c570:	1a0000f1 	bne	3c93c <TBeamer::SendNewton(RefVar const &)+0x508>
         3c574:	e1a0000d 	mov	r0, sp
         3c578:	eb6e8ebf 	bl	1be007c <$AddExceptionHandler>
         3c57c:	e28d006c 	add	r0, sp, #108	; 0x6c
         3c580:	eb6850b7 	bl	1a50864 <TObjectWriter::$SetCompressLargeBinaries(void)>
         3c584:	e28d006c 	add	r0, sp, #108	; 0x6c
         3c588:	eb6e2779 	bl	1bc6374 <TObjectWriter::$Size(void)>
         3c58c:	e1a09000 	mov	r9, r0
         3c590:	e1a0000d 	mov	r0, sp
         3c594:	eb6e92c7 	bl	1be10b8 <$ExitHandler>
         3c598:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3c59c:	e1a0000d 	mov	r0, sp
         3c5a0:	e3a01000 	mov	r1, #0	; 0x0
         3c5a4:	eb68486f 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         3c5a8:	e28dd018 	add	sp, sp, #24	; 0x18
         3c5ac:	eb6e16e3 	bl	1bc2140 <$AllocateFrame(void)>
         3c5b0:	eb6e16e5 	bl	1bc214c <$AllocateRefHandle(long)>
         3c5b4:	e58d000c 	str	r0, [sp, #12]	; fField12
         3c5b8:	e59f0350 	ldr	r0, [pc, #350]	; 3c910 <TBeamer::SendNewton(RefVar const &)+0x4dc>
         3c5bc:	e5900000 	ldr	r0, [r0]
         3c5c0:	e5901000 	ldr	r1, [r0]
         3c5c4:	e5950000 	ldr	r0, [r5]
         3c5c8:	e5900000 	ldr	r0, [r0]
         3c5cc:	eb6e1f23 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         3c5d0:	eb6e16dd 	bl	1bc214c <$AllocateRefHandle(long)>
         3c5d4:	e58d0000 	str	r0, [sp]
         3c5d8:	e1a0200d 	mov	r2, sp
         3c5dc:	e59f132c 	ldr	r1, [pc, #32c]	; 3c910 <TBeamer::SendNewton(RefVar const &)+0x4dc>	; fField32
         3c5e0:	e28d000c 	add	r0, sp, #12	; 0xc
         3c5e4:	eb6e275f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3c5e8:	e59d0000 	ldr	r0, [sp]
         3c5ec:	eb6e1af2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c5f0:	e28d2014 	add	r2, sp, #20	; 0x14
         3c5f4:	e59f1304 	ldr	r1, [pc, #304]	; 3c900 <TBeamer::SendNewton(RefVar const &)+0x4cc>
         3c5f8:	e28d000c 	add	r0, sp, #12	; 0xc
         3c5fc:	eb6e2759 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3c600:	e59f030c 	ldr	r0, [pc, #30c]	; 3c914 <TBeamer::SendNewton(RefVar const &)+0x4e0>
         3c604:	e1a07000 	mov	r7, r0
         3c608:	eb69693d 	bl	1a96b04 <$GetPreference(RefVar const &)>
         3c60c:	eb6e16ce 	bl	1bc214c <$AllocateRefHandle(long)>
         3c610:	e58d0004 	str	r0, [sp, #4]	; fField4
         3c614:	e28d2004 	add	r2, sp, #4	; 0x4
         3c618:	e1a01007 	mov	r1, r7
         3c61c:	e28d000c 	add	r0, sp, #12	; 0xc
         3c620:	eb6e2750 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3c624:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         3c628:	eb6e1ae3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c62c:	e1a0700a 	mov	r7, sl
         3c630:	e1a00109 	mov	r0, r9, lsl #2
         3c634:	eb6e16c4 	bl	1bc214c <$AllocateRefHandle(long)>
         3c638:	e58d0008 	str	r0, [sp, #8]	; fField8
         3c63c:	e28d2008 	add	r2, sp, #8	; 0x8
         3c640:	e59f12d0 	ldr	r1, [pc, #2d0]	; 3c918 <TBeamer::SendNewton(RefVar const &)+0x4e4>
         3c644:	e28d000c 	add	r0, sp, #12	; 0xc
         3c648:	eb6e2746 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3c64c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         3c650:	eb6e1ad9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c654:	e24dd004 	sub	sp, sp, #4	; 0x4
         3c658:	e59f02bc 	ldr	r0, [pc, #2bc]	; 3c91c <TBeamer::SendNewton(RefVar const &)+0x4e8>
         3c65c:	e5900000 	ldr	r0, [r0]
         3c660:	e5901000 	ldr	r1, [r0]
         3c664:	e5950000 	ldr	r0, [r5]
         3c668:	e5900000 	ldr	r0, [r0]
         3c66c:	eb6e1efb 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         3c670:	eb6e16b5 	bl	1bc214c <$AllocateRefHandle(long)>
         3c674:	e58d0000 	str	r0, [sp]
         3c678:	e5900000 	ldr	r0, [r0]
         3c67c:	e3300002 	teq	r0, #2	; 0x2
         3c680:	1a000007 	bne	3c6a4 <TBeamer::SendNewton(RefVar const &)+0x270>
         3c684:	e59f0294 	ldr	r0, [pc, #294]	; 3c920 <TBeamer::SendNewton(RefVar const &)+0x4ec>
         3c688:	e5900000 	ldr	r0, [r0]
         3c68c:	e5901000 	ldr	r1, [r0]
         3c690:	e5950000 	ldr	r0, [r5]
         3c694:	e5900000 	ldr	r0, [r0]
         3c698:	eb6e1ef0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         3c69c:	e59d1000 	ldr	r1, [sp]
         3c6a0:	e5810000 	str	r0, [r1]
         3c6a4:	e1a0200d 	mov	r2, sp
         3c6a8:	e59f126c 	ldr	r1, [pc, #26c]	; 3c91c <TBeamer::SendNewton(RefVar const &)+0x4e8>
         3c6ac:	e28d0010 	add	r0, sp, #16	; 0x10
         3c6b0:	eb6e272c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3c6b4:	e24dd028 	sub	sp, sp, #40	; 0x28
         3c6b8:	e28d1038 	add	r1, sp, #56	; 0x38
         3c6bc:	e1a0000d 	mov	r0, sp
         3c6c0:	e3a03000 	mov	r3, #0	; 0x0
         3c6c4:	e5942008 	ldr	r2, [r4, #8]	; fField8
         3c6c8:	eb6e1287 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
         3c6cc:	e52d706c 	str	r7, [sp, -#108]!
         3c6d0:	e28d0008 	add	r0, sp, #8	; 0x8
         3c6d4:	eb6dd8a6 	bl	1bb2974 <$setjmp>
         3c6d8:	e3300000 	teq	r0, #0	; 0x0
         3c6dc:	1a00009c 	bne	3c954 <TBeamer::SendNewton(RefVar const &)+0x520>
         3c6e0:	e1a0000d 	mov	r0, sp
         3c6e4:	eb6e8e64 	bl	1be007c <$AddExceptionHandler>
         3c6e8:	e28d006c 	add	r0, sp, #108	; 0x6c
         3c6ec:	eb6e2f62 	bl	1bc847c <TObjectWriter::$Write(void)>
         3c6f0:	e1a0000d 	mov	r0, sp
         3c6f4:	eb6e926f 	bl	1be10b8 <$ExitHandler>
         3c6f8:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3c6fc:	e1a0000d 	mov	r0, sp
         3c700:	e3a01000 	mov	r1, #0	; 0x0
         3c704:	eb684817 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         3c708:	e28dd028 	add	sp, sp, #40	; 0x28
         3c70c:	e5940008 	ldr	r0, [r4, #8]	; fField8
         3c710:	e5901000 	ldr	r1, [r0]
         3c714:	e1a0e00f 	mov	lr, pc
         3c718:	e281f020 	add	pc, r1, #32	; 0x20
         3c71c:	e59d0000 	ldr	r0, [sp]
         3c720:	eb6e1aa5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c724:	e28dd004 	add	sp, sp, #4	; 0x4
         3c728:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         3c72c:	eb6e1aa2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c730:	e1a0000d 	mov	r0, sp
         3c734:	e5941008 	ldr	r1, [r4, #8]	; fField8
         3c738:	eb6e126a 	bl	1bc10e8 <TObjectReader::$__ct(CPipe &)>
         3c73c:	e3a07000 	mov	r7, #0	; 0x0
         3c740:	e52d706c 	str	r7, [sp, -#108]!
         3c744:	e28d0008 	add	r0, sp, #8	; 0x8
         3c748:	eb6dd889 	bl	1bb2974 <$setjmp>
         3c74c:	e3300000 	teq	r0, #0	; 0x0
         3c750:	1a000085 	bne	3c96c <TBeamer::SendNewton(RefVar const &)+0x538>
         3c754:	e1a0000d 	mov	r0, sp
         3c758:	eb6e8e47 	bl	1be007c <$AddExceptionHandler>
         3c75c:	e28d006c 	add	r0, sp, #108	; 0x6c
         3c760:	eb6e26e9 	bl	1bc630c <TObjectReader::$Read(void)>
         3c764:	eb6e1678 	bl	1bc214c <$AllocateRefHandle(long)>
         3c768:	e1a07000 	mov	r7, r0
         3c76c:	e5900000 	ldr	r0, [r0]
         3c770:	e3100003 	tst	r0, #3	; 0x3
         3c774:	01a00140 	moveq	r0, r0, asr #2
         3c778:	0a000000 	beq	3c780 <TBeamer::SendNewton(RefVar const &)+0x34c>
         3c77c:	eb6e1666 	bl	1bc211c <$_RINTError(long)>
         3c780:	e3300000 	teq	r0, #0	; 0x0
         3c784:	13a00001 	movne	r0, #1	; 0x1
         3c788:	e200a0ff 	and	sl, r0, #255	; 0xff
         3c78c:	e1a00007 	mov	r0, r7
         3c790:	eb6e1a89 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c794:	e3a07000 	mov	r7, #0	; 0x0
         3c798:	e1a0000d 	mov	r0, sp
         3c79c:	eb6e9245 	bl	1be10b8 <$ExitHandler>
         3c7a0:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3c7a4:	e1a0000d 	mov	r0, sp
         3c7a8:	e3a01000 	mov	r1, #0	; 0x0
         3c7ac:	eb6847ef 	bl	1a4e770 <TObjectReader::$__dt(void)>
         3c7b0:	e28dd010 	add	sp, sp, #16	; 0x10
         3c7b4:	e33a0000 	teq	sl, #0	; 0x0
         3c7b8:	0a000077 	beq	3c99c <TBeamer::SendNewton(RefVar const &)+0x568>
         3c7bc:	e24dd008 	sub	sp, sp, #8	; 0x8
         3c7c0:	e2840028 	add	r0, r4, #40	; 0x28
         3c7c4:	e5a09008 	str	r9, [r0, #8]!	; fField8
         3c7c8:	e284903c 	add	r9, r4, #60	; 0x3c
         3c7cc:	e1a0a009 	mov	sl, r9
         3c7d0:	eb6e165a 	bl	1bc2140 <$AllocateFrame(void)>
         3c7d4:	e59a1000 	ldr	r1, [sl]
         3c7d8:	e5810000 	str	r0, [r1]
         3c7dc:	e1a00007 	mov	r0, r7
         3c7e0:	eb6e1659 	bl	1bc214c <$AllocateRefHandle(long)>
         3c7e4:	e58d0000 	str	r0, [sp]
         3c7e8:	e1a0200d 	mov	r2, sp
         3c7ec:	e1a00009 	mov	r0, r9
         3c7f0:	e59f112c 	ldr	r1, [pc, #12c]	; 3c924 <TBeamer::SendNewton(RefVar const &)+0x4f0>	; fField12
         3c7f4:	eb6e26db 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3c7f8:	e59d0000 	ldr	r0, [sp]
         3c7fc:	eb6e1a6e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c800:	e1a00009 	mov	r0, r9
         3c804:	e28d200c 	add	r2, sp, #12	; 0xc
         3c808:	e59f1118 	ldr	r1, [pc, #118]	; 3c928 <TBeamer::SendNewton(RefVar const &)+0x4f4>
         3c80c:	eb6e26d5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3c810:	e5940008 	ldr	r0, [r4, #8]	; fField8
         3c814:	e5901000 	ldr	r1, [r0]
         3c818:	e1a0e00f 	mov	lr, pc
         3c81c:	e281f02c 	add	pc, r1, #44	; 0x2c
         3c820:	e1a03009 	mov	r3, r9
         3c824:	e92d0008 	stmdb	sp!, {r3}
         3c828:	e59f30fc 	ldr	r3, [pc, #fc]	; 3c92c <TBeamer::SendNewton(RefVar const &)+0x4f8>
         3c82c:	e59f20fc 	ldr	r2, [pc, #fc]	; 3c930 <TBeamer::SendNewton(RefVar const &)+0x4fc>
         3c830:	e1a0a002 	mov	sl, r2
         3c834:	e59f10f8 	ldr	r1, [pc, #f8]	; 3c934 <TBeamer::SendNewton(RefVar const &)+0x500>
         3c838:	e1a07001 	mov	r7, r1
         3c83c:	e1a00004 	mov	r0, r4
         3c840:	eb6f0e01 	bl	1c0004c <$NSSend__FRC6RefVarN41>
         3c844:	e24dd024 	sub	sp, sp, #36	; 0x24
         3c848:	e1a01005 	mov	r1, r5
         3c84c:	e1a0000d 	mov	r0, sp
         3c850:	e3a03000 	mov	r3, #0	; 0x0
         3c854:	e5942008 	ldr	r2, [r4, #8]	; fField8
         3c858:	eb6e1223 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
         3c85c:	e3a00000 	mov	r0, #0	; 0x0
         3c860:	e52d006c 	str	r0, [sp, -#108]!
         3c864:	e28d0008 	add	r0, sp, #8	; 0x8
         3c868:	eb6dd841 	bl	1bb2974 <$setjmp>
         3c86c:	e3300000 	teq	r0, #0	; 0x0
         3c870:	1a000043 	bne	3c984 <TBeamer::SendNewton(RefVar const &)+0x550>
         3c874:	e1a0000d 	mov	r0, sp
         3c878:	eb6e8dff 	bl	1be007c <$AddExceptionHandler>
         3c87c:	e28d006c 	add	r0, sp, #108	; 0x6c
         3c880:	eb684ff7 	bl	1a50864 <TObjectWriter::$SetCompressLargeBinaries(void)>
         3c884:	e28d006c 	add	r0, sp, #108	; 0x6c
         3c888:	eb6e2efb 	bl	1bc847c <TObjectWriter::$Write(void)>
         3c88c:	e1a0000d 	mov	r0, sp
         3c890:	eb6e9208 	bl	1be10b8 <$ExitHandler>
         3c894:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3c898:	e1a0000d 	mov	r0, sp
         3c89c:	e3a01000 	mov	r1, #0	; 0x0
         3c8a0:	eb6847b0 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         3c8a4:	e28dd028 	add	sp, sp, #40	; 0x28
         3c8a8:	e5940008 	ldr	r0, [r4, #8]	; fField8
         3c8ac:	e5901000 	ldr	r1, [r0]
         3c8b0:	e1a0e00f 	mov	lr, pc
         3c8b4:	e281f020 	add	pc, r1, #32	; 0x20
         3c8b8:	e1a00008 	mov	r0, r8
         3c8bc:	eb6e1622 	bl	1bc214c <$AllocateRefHandle(long)>
         3c8c0:	e58d0004 	str	r0, [sp, #4]	; fField4
         3c8c4:	e28d3004 	add	r3, sp, #4	; 0x4
         3c8c8:	e92d0008 	stmdb	sp!, {r3}
         3c8cc:	e59f3064 	ldr	r3, [pc, #64]	; 3c938 <TBeamer::SendNewton(RefVar const &)+0x504>
         3c8d0:	e1a0200a 	mov	r2, sl
         3c8d4:	e1a01007 	mov	r1, r7
         3c8d8:	e1a00004 	mov	r0, r4
         3c8dc:	eb6f0dda 	bl	1c0004c <$NSSend__FRC6RefVarN41>
         3c8e0:	e28dd004 	add	sp, sp, #4	; 0x4
         3c8e4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         3c8e8:	eb6e1a33 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c8ec:	e5990000 	ldr	r0, [r9]
         3c8f0:	e5808000 	str	r8, [r0]
         3c8f4:	e28dd008 	add	sp, sp, #8	; 0x8
         3c8f8:	ea00002a 	b	3c9a8 <TBeamer::SendNewton(RefVar const &)+0x574>
         3c8fc:	00371324 	eoreqs	r1, r7, r4, lsr #6
         3c900:	00684b90 	streqb	r4, [r8], -#176
         3c904:	006845c0 	rsbeq	r4, r8, r0, asr #11
         3c908:	00684520 	rsbeq	r4, r8, r0, lsr #10
         3c90c:	00682588 	rsbeq	r2, r8, r8, lsl #11
         3c910:	00681ed8 	ldreqd	r1, [r8], -#232
         3c914:	006839a8 	rsbeq	r3, r8, r8, lsr #19
         3c918:	006846a8 	rsbeq	r4, r8, r8, lsr #13
         3c91c:	00684cb0 	streqh	r4, [r8], -#192
         3c920:	00682740 	rsbeq	r2, r8, r0, asr #14
         3c924:	00682f38 	rsbeq	r2, r8, r8, lsr pc
         3c928:	00684b98 	streqb	r4, [r8], -#184
         3c92c:	00684ed8 	ldreqd	r4, [r8], -#232
         3c930:	00684518 	rsbeq	r4, r8, r8, lsl r5
         3c934:	006845c8 	rsbeq	r4, r8, r8, asr #11
         3c938:	00685138 	rsbeq	r5, r8, r8, lsr r1
         3c93c:	e28d006c 	add	r0, sp, #108	; 0x6c
         3c940:	e3a01000 	mov	r1, #0	; 0x0
         3c944:	eb684787 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         3c948:	e1a0000d 	mov	r0, sp
         3c94c:	eb6e9600 	bl	1be2154 <$NextHandler>
         3c950:	eafffff9 	b	3c93c <TBeamer::SendNewton(RefVar const &)+0x508>
         3c954:	e28d006c 	add	r0, sp, #108	; 0x6c
         3c958:	e3a01000 	mov	r1, #0	; 0x0
         3c95c:	eb684781 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         3c960:	e1a0000d 	mov	r0, sp
         3c964:	eb6e95fa 	bl	1be2154 <$NextHandler>
         3c968:	eafffff9 	b	3c954 <TBeamer::SendNewton(RefVar const &)+0x520>
         3c96c:	e28d006c 	add	r0, sp, #108	; 0x6c
         3c970:	e3a01000 	mov	r1, #0	; 0x0
         3c974:	eb68477d 	bl	1a4e770 <TObjectReader::$__dt(void)>
         3c978:	e1a0000d 	mov	r0, sp
         3c97c:	eb6e95f4 	bl	1be2154 <$NextHandler>
         3c980:	eafffff9 	b	3c96c <TBeamer::SendNewton(RefVar const &)+0x538>
         3c984:	e28d006c 	add	r0, sp, #108	; 0x6c
         3c988:	e3a01000 	mov	r1, #0	; 0x0
         3c98c:	eb684775 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         3c990:	e1a0000d 	mov	r0, sp
         3c994:	eb6e95ee 	bl	1be2154 <$NextHandler>
         3c998:	eafffff9 	b	3c984 <TBeamer::SendNewton(RefVar const &)+0x550>
         3c99c:	e3e00071 	mvn	r0, #113	; 0x71
         3c9a0:	e2400b25 	sub	r0, r0, #37888	; 0x9400
         3c9a4:	e58d0074 	str	r0, [sp, #116]
         3c9a8:	e5940018 	ldr	r0, [r4, #24]	; fField24
         3c9ac:	e3100002 	tst	r0, #2	; 0x2
         3c9b0:	0a00000f 	beq	3c9f4 <TBeamer::SendNewton(RefVar const &)+0x5c0>
         3c9b4:	e2841020 	add	r1, r4, #32	; 0x20
         3c9b8:	e8910003 	ldmia	r1, {r0, r1}
         3c9bc:	e1500001 	cmp	r0, r1
         3c9c0:	aa00000b 	bge	3c9f4 <TBeamer::SendNewton(RefVar const &)+0x5c0>
         3c9c4:	e3a03000 	mov	r3, #0	; 0x0
         3c9c8:	e3a02000 	mov	r2, #0	; 0x0
         3c9cc:	e3a01000 	mov	r1, #0	; 0x0
         3c9d0:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         3c9d4:	eb6df089 	bl	1bb8c00 <TEndpoint::$Disconnect(CBufferSegment *, long, long)>
         3c9d8:	e58d0074 	str	r0, [sp, #116]
         3c9dc:	e3300000 	teq	r0, #0	; 0x0
         3c9e0:	0a000003 	beq	3c9f4 <TBeamer::SendNewton(RefVar const &)+0x5c0>
         3c9e4:	e1a01000 	mov	r1, r0
         3c9e8:	e3a02000 	mov	r2, #0	; 0x0
         3c9ec:	e5960000 	ldr	r0, [r6]
         3c9f0:	eb6e99e9 	bl	1be319c <$Throw>
         3c9f4:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         3c9f8:	eb6e19ef 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3c9fc:	e28dd004 	add	sp, sp, #4	; 0x4
         3ca00:	ea000007 	b	3ca24 <TBeamer::SendNewton(RefVar const &)+0x5f0>
         3ca04:	e59d0060 	ldr	r0, [sp, #96]
         3ca08:	e5961000 	ldr	r1, [r6]
         3ca0c:	eb6e99e0 	bl	1be3194 <$Subexception>
         3ca10:	e3300000 	teq	r0, #0	; 0x0
         3ca14:	03e00077 	mvneq	r0, #119	; 0x77
         3ca18:	02400b25 	subeq	r0, r0, #37888	; 0x9400
         3ca1c:	159d0064 	ldrne	r0, [sp, #100]
         3ca20:	e58d006c 	str	r0, [sp, #108]
         3ca24:	e1a0000d 	mov	r0, sp
         3ca28:	eb6e91a2 	bl	1be10b8 <$ExitHandler>
         3ca2c:	e5bd006c 	ldr	r0, [sp, #108]!
         3ca30:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TBeamer::SendWizard(RefVar const &)
 * Address: 0003ca34
 */
TBeamer::SendWizard(RefVar const &) {
    /*
         3ca34:	e1a0c00d 	mov	ip, sp
         3ca38:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         3ca3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3ca40:	e1a04000 	mov	r4, r0
         3ca44:	e1a05001 	mov	r5, r1
         3ca48:	e3a00000 	mov	r0, #0	; 0x0
         3ca4c:	e3a06000 	mov	r6, #0	; 0x0
         3ca50:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         3ca54:	e52d606c 	str	r6, [sp, -#108]!
         3ca58:	e28d0008 	add	r0, sp, #8	; 0x8
         3ca5c:	eb6dd7c4 	bl	1bb2974 <$setjmp>
         3ca60:	e3300000 	teq	r0, #0	; 0x0
         3ca64:	1a000022 	bne	3caf4 <TBeamer::SendWizard(RefVar const &)+0xc0>
         3ca68:	e1a0000d 	mov	r0, sp
         3ca6c:	eb6e8d82 	bl	1be007c <$AddExceptionHandler>
         3ca70:	e24dd004 	sub	sp, sp, #4	; 0x4
         3ca74:	e3a00002 	mov	r0, #2	; 0x2
         3ca78:	eb6e15b3 	bl	1bc214c <$AllocateRefHandle(long)>
         3ca7c:	e58d0000 	str	r0, [sp]
         3ca80:	e1a0300d 	mov	r3, sp
         3ca84:	e59f2060 	ldr	r2, [pc, #60]	; 3caec <TBeamer::SendWizard(RefVar const &)+0xb8>
         3ca88:	e59f1060 	ldr	r1, [pc, #60]	; 3caf0 <TBeamer::SendWizard(RefVar const &)+0xbc>
         3ca8c:	e1a00004 	mov	r0, r4
         3ca90:	eb6f0d6c 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3ca94:	e59d0000 	ldr	r0, [sp]
         3ca98:	eb6e19c7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3ca9c:	e24dd008 	sub	sp, sp, #8	; 0x8
         3caa0:	e3a00002 	mov	r0, #2	; 0x2
         3caa4:	eb6e15a8 	bl	1bc214c <$AllocateRefHandle(long)>
         3caa8:	e58d0004 	str	r0, [sp, #4]	; fField4
         3caac:	e5a06004 	str	r6, [r0, #4]!	; fField4
         3cab0:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3cab4:	e58d0000 	str	r0, [sp]
         3cab8:	e5950000 	ldr	r0, [r5]
         3cabc:	e5900000 	ldr	r0, [r0]
         3cac0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         3cac4:	e5810000 	str	r0, [r1]
         3cac8:	e1a0100d 	mov	r1, sp
         3cacc:	e3a02000 	mov	r2, #0	; 0x0
         3cad0:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
         3cad4:	eb6dae4c 	bl	1ba840c <PFrameSink::$Translate(void *, PipeCallBack *)>
         3cad8:	e58d0078 	str	r0, [sp, #120]
         3cadc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         3cae0:	eb6e19b5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3cae4:	e28dd00c 	add	sp, sp, #12	; 0xc
         3cae8:	ea000011 	b	3cb34 <TBeamer::SendWizard(RefVar const &)+0x100>
         3caec:	00684518 	rsbeq	r4, r8, r8, lsl r5
         3caf0:	006845c0 	rsbeq	r4, r8, r0, asr #11
         3caf4:	e59d0060 	ldr	r0, [sp, #96]
         3caf8:	e59f1044 	ldr	r1, [pc, #44]	; 3cb44 <TBeamer::SendWizard(RefVar const &)+0x110>
         3cafc:	e5911000 	ldr	r1, [r1]
         3cb00:	eb6e99a3 	bl	1be3194 <$Subexception>
         3cb04:	e3300000 	teq	r0, #0	; 0x0
         3cb08:	1a000007 	bne	3cb2c <TBeamer::SendWizard(RefVar const &)+0xf8>
         3cb0c:	e59d0060 	ldr	r0, [sp, #96]
         3cb10:	e59f1030 	ldr	r1, [pc, #30]	; 3cb48 <TBeamer::SendWizard(RefVar const &)+0x114>
         3cb14:	e5911000 	ldr	r1, [r1]
         3cb18:	eb6e999d 	bl	1be3194 <$Subexception>
         3cb1c:	e3300000 	teq	r0, #0	; 0x0
         3cb20:	03e00e35 	mvneq	r0, #848	; 0x350
         3cb24:	02400903 	subeq	r0, r0, #49152	; 0xc000
         3cb28:	0a000000 	beq	3cb30 <TBeamer::SendWizard(RefVar const &)+0xfc>
         3cb2c:	e59d0064 	ldr	r0, [sp, #100]
         3cb30:	e58d006c 	str	r0, [sp, #108]
         3cb34:	e1a0000d 	mov	r0, sp
         3cb38:	eb6e915e 	bl	1be10b8 <$ExitHandler>
         3cb3c:	e5bd006c 	ldr	r0, [sp, #108]!
         3cb40:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         3cb44:	00371324 	eoreqs	r1, r7, r4, lsr #6
         3cb48:	00371328 	eoreqs	r1, r7, r8, lsr #6
    */
}

/**
 * Symbol: TBeamer::ReceiveNewton(void)
 * Address: 0003cb4c
 */
TBeamer::ReceiveNewton(void) {
    /*
         3cb4c:	e1a0c00d 	mov	ip, sp
         3cb50:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         3cb54:	e24cb004 	sub	fp, ip, #4	; 0x4
         3cb58:	e1a04000 	mov	r4, r0
         3cb5c:	e3a00000 	mov	r0, #0	; 0x0
         3cb60:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         3cb64:	e24dd008 	sub	sp, sp, #8	; 0x8
         3cb68:	e3a00002 	mov	r0, #2	; 0x2
         3cb6c:	eb6e1576 	bl	1bc214c <$AllocateRefHandle(long)>
         3cb70:	e58d0004 	str	r0, [sp, #4]	; fField4
         3cb74:	e3a00002 	mov	r0, #2	; 0x2
         3cb78:	eb6e1573 	bl	1bc214c <$AllocateRefHandle(long)>
         3cb7c:	e58d0000 	str	r0, [sp]
         3cb80:	e5940018 	ldr	r0, [r4, #24]	; fField24
         3cb84:	e3100002 	tst	r0, #2	; 0x2
         3cb88:	0a000004 	beq	3cba0 <TBeamer::ReceiveNewton(void)+0x54>
         3cb8c:	e59f02b4 	ldr	r0, [pc, #2b4]	; 3ce48 <TBeamer::ReceiveNewton(void)+0x2fc>
         3cb90:	e5900000 	ldr	r0, [r0]
         3cb94:	e5901000 	ldr	r1, [r0]
         3cb98:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         3cb9c:	e5801000 	str	r1, [r0]
         3cba0:	e3a08000 	mov	r8, #0	; 0x0
         3cba4:	e52d806c 	str	r8, [sp, -#108]!
         3cba8:	e28d0008 	add	r0, sp, #8	; 0x8
         3cbac:	eb6dd770 	bl	1bb2974 <$setjmp>
         3cbb0:	e3300000 	teq	r0, #0	; 0x0
         3cbb4:	1a000128 	bne	3d05c <TBeamer::ReceiveNewton(void)+0x510>
         3cbb8:	e1a0000d 	mov	r0, sp
         3cbbc:	eb6e8d2e 	bl	1be007c <$AddExceptionHandler>
         3cbc0:	e24dd008 	sub	sp, sp, #8	; 0x8
         3cbc4:	e59f1280 	ldr	r1, [pc, #280]	; 3ce4c <TBeamer::ReceiveNewton(void)+0x300>
         3cbc8:	e1a00004 	mov	r0, r4
         3cbcc:	eb6f0d1b 	bl	1c00040 <$NSSend__FRC6RefVarT1>
         3cbd0:	eb6e155d 	bl	1bc214c <$AllocateRefHandle(long)>
         3cbd4:	e3a05001 	mov	r5, #1	; 0x1
         3cbd8:	e3a06000 	mov	r6, #0	; 0x0
         3cbdc:	e3a0a002 	mov	sl, #2	; 0x2
         3cbe0:	e58d0004 	str	r0, [sp, #4]	; fField4
         3cbe4:	e1a0000a 	mov	r0, sl
         3cbe8:	eb6e1557 	bl	1bc214c <$AllocateRefHandle(long)>
         3cbec:	e58d0000 	str	r0, [sp]
         3cbf0:	e1a0300d 	mov	r3, sp
         3cbf4:	e59f2254 	ldr	r2, [pc, #254]	; 3ce50 <TBeamer::ReceiveNewton(void)+0x304>
         3cbf8:	e59f1254 	ldr	r1, [pc, #254]	; 3ce54 <TBeamer::ReceiveNewton(void)+0x308>
         3cbfc:	e1a00004 	mov	r0, r4
         3cc00:	eb6f0d10 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3cc04:	e59d0000 	ldr	r0, [sp]
         3cc08:	eb6e196b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3cc0c:	e24dd010 	sub	sp, sp, #16	; 0x10
         3cc10:	e1a0000d 	mov	r0, sp
         3cc14:	e5941008 	ldr	r1, [r4, #8]	; fField8
         3cc18:	eb6e1132 	bl	1bc10e8 <TObjectReader::$__ct(CPipe &)>
         3cc1c:	e52d806c 	str	r8, [sp, -#108]!
         3cc20:	e28d0008 	add	r0, sp, #8	; 0x8
         3cc24:	eb6dd752 	bl	1bb2974 <$setjmp>
         3cc28:	e3300000 	teq	r0, #0	; 0x0
         3cc2c:	1a000093 	bne	3ce80 <TBeamer::ReceiveNewton(void)+0x334>
         3cc30:	e1a0000d 	mov	r0, sp
         3cc34:	eb6e8d10 	bl	1be007c <$AddExceptionHandler>
         3cc38:	e28d006c 	add	r0, sp, #108	; 0x6c
         3cc3c:	eb6e25b2 	bl	1bc630c <TObjectReader::$Read(void)>
         3cc40:	e59d10f0 	ldr	r1, [sp, #240]
         3cc44:	e5810000 	str	r0, [r1]
         3cc48:	e1a0000d 	mov	r0, sp
         3cc4c:	eb6e9119 	bl	1be10b8 <$ExitHandler>
         3cc50:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3cc54:	e1a0000d 	mov	r0, sp
         3cc58:	e3a01000 	mov	r1, #0	; 0x0
         3cc5c:	eb6846c3 	bl	1a4e770 <TObjectReader::$__dt(void)>
         3cc60:	e28dd010 	add	sp, sp, #16	; 0x10
         3cc64:	e59f01ec 	ldr	r0, [pc, #1ec]	; 3ce58 <TBeamer::ReceiveNewton(void)+0x30c>
         3cc68:	e5900000 	ldr	r0, [r0]
         3cc6c:	e5901000 	ldr	r1, [r0]
         3cc70:	e59d0074 	ldr	r0, [sp, #116]
         3cc74:	e5900000 	ldr	r0, [r0]
         3cc78:	eb6e1d78 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         3cc7c:	eb6e1532 	bl	1bc214c <$AllocateRefHandle(long)>
         3cc80:	e1a07000 	mov	r7, r0
         3cc84:	e5900000 	ldr	r0, [r0]
         3cc88:	e3300002 	teq	r0, #2	; 0x2
         3cc8c:	0a000018 	beq	3ccf4 <TBeamer::ReceiveNewton(void)+0x1a8>
         3cc90:	e3100003 	tst	r0, #3	; 0x3
         3cc94:	01a00140 	moveq	r0, r0, asr #2
         3cc98:	0a000000 	beq	3cca0 <TBeamer::ReceiveNewton(void)+0x154>
         3cc9c:	eb6e151e 	bl	1bc211c <$_RINTError(long)>
         3cca0:	e1a06000 	mov	r6, r0
         3cca4:	e59f11b0 	ldr	r1, [pc, #1b0]	; 3ce5c <TBeamer::ReceiveNewton(void)+0x310>
         3cca8:	e28d0004 	add	r0, sp, #4	; 0x4
         3ccac:	eb6f0ce3 	bl	1c00040 <$NSSend__FRC6RefVarT1>
         3ccb0:	e3100003 	tst	r0, #3	; 0x3
         3ccb4:	01a00140 	moveq	r0, r0, asr #2
         3ccb8:	0a000000 	beq	3ccc0 <TBeamer::ReceiveNewton(void)+0x174>
         3ccbc:	eb6e1516 	bl	1bc211c <$_RINTError(long)>
         3ccc0:	e1a09000 	mov	r9, r0
         3ccc4:	e59f1194 	ldr	r1, [pc, #194]	; 3ce60 <TBeamer::ReceiveNewton(void)+0x314>
         3ccc8:	e28d0004 	add	r0, sp, #4	; 0x4
         3cccc:	eb6f0cdb 	bl	1c00040 <$NSSend__FRC6RefVarT1>
         3ccd0:	e3100003 	tst	r0, #3	; 0x3
         3ccd4:	01a00140 	moveq	r0, r0, asr #2
         3ccd8:	0a000000 	beq	3cce0 <TBeamer::ReceiveNewton(void)+0x194>
         3ccdc:	eb6e150e 	bl	1bc211c <$_RINTError(long)>
         3cce0:	e0490000 	sub	r0, r9, r0
         3cce4:	e1500006 	cmp	r0, r6
         3cce8:	b3a05000 	movlt	r5, #0	; 0x0
         3ccec:	e3350000 	teq	r5, #0	; 0x0
         3ccf0:	0a000003 	beq	3cd04 <TBeamer::ReceiveNewton(void)+0x1b8>
         3ccf4:	e28d2074 	add	r2, sp, #116	; 0x74
         3ccf8:	e59f1164 	ldr	r1, [pc, #164]	; 3ce64 <TBeamer::ReceiveNewton(void)+0x318>
         3ccfc:	e1a00004 	mov	r0, r4
         3cd00:	eb6f0ccf 	bl	1c00044 <$NSSend__FRC6RefVarN21>
         3cd04:	e1a00007 	mov	r0, r7
         3cd08:	eb6e192b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3cd0c:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         3cd10:	e1b00005 	movs	r0, r5
         3cd14:	13a00004 	movne	r0, #4	; 0x4
         3cd18:	eb6e150b 	bl	1bc214c <$AllocateRefHandle(long)>
         3cd1c:	e58d0000 	str	r0, [sp]
         3cd20:	e1a0100d 	mov	r1, sp
         3cd24:	e28d0004 	add	r0, sp, #4	; 0x4
         3cd28:	e3a03000 	mov	r3, #0	; 0x0
         3cd2c:	e5942008 	ldr	r2, [r4, #8]	; fField8
         3cd30:	eb6e10ed 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
         3cd34:	e59d0000 	ldr	r0, [sp]
         3cd38:	eb6e191f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3cd3c:	e1a09008 	mov	r9, r8
         3cd40:	e52d806c 	str	r8, [sp, -#108]!
         3cd44:	e28d0008 	add	r0, sp, #8	; 0x8
         3cd48:	eb6dd709 	bl	1bb2974 <$setjmp>
         3cd4c:	e3300000 	teq	r0, #0	; 0x0
         3cd50:	1a000050 	bne	3ce98 <TBeamer::ReceiveNewton(void)+0x34c>
         3cd54:	e1a0000d 	mov	r0, sp
         3cd58:	eb6e8cc7 	bl	1be007c <$AddExceptionHandler>
         3cd5c:	e28d0070 	add	r0, sp, #112	; 0x70
         3cd60:	eb6e2dc5 	bl	1bc847c <TObjectWriter::$Write(void)>
         3cd64:	e1a0000d 	mov	r0, sp
         3cd68:	eb6e90d2 	bl	1be10b8 <$ExitHandler>
         3cd6c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3cd70:	e28d0004 	add	r0, sp, #4	; 0x4
         3cd74:	e3a01000 	mov	r1, #0	; 0x0
         3cd78:	eb68467a 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         3cd7c:	e28dd02c 	add	sp, sp, #44	; 0x2c
         3cd80:	e5940008 	ldr	r0, [r4, #8]	; fField8
         3cd84:	e5901000 	ldr	r1, [r0]
         3cd88:	e1a0e00f 	mov	lr, pc
         3cd8c:	e281f020 	add	pc, r1, #32	; 0x20
         3cd90:	e3350000 	teq	r5, #0	; 0x0
         3cd94:	0a0000a9 	beq	3d040 <TBeamer::ReceiveNewton(void)+0x4f4>
         3cd98:	e24dd004 	sub	sp, sp, #4	; 0x4
         3cd9c:	e284503c 	add	r5, r4, #60	; 0x3c
         3cda0:	e1a07005 	mov	r7, r5
         3cda4:	eb6e14e5 	bl	1bc2140 <$AllocateFrame(void)>
         3cda8:	e5971000 	ldr	r1, [r7]
         3cdac:	e5810000 	str	r0, [r1]
         3cdb0:	e59f00b0 	ldr	r0, [pc, #b0]	; 3ce68 <TBeamer::ReceiveNewton(void)+0x31c>
         3cdb4:	e5900000 	ldr	r0, [r0]
         3cdb8:	e5901000 	ldr	r1, [r0]
         3cdbc:	e59d0078 	ldr	r0, [sp, #120]
         3cdc0:	e5900000 	ldr	r0, [r0]
         3cdc4:	eb6e1d25 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         3cdc8:	eb6e14df 	bl	1bc214c <$AllocateRefHandle(long)>
         3cdcc:	e58d0000 	str	r0, [sp]
         3cdd0:	e1a0200d 	mov	r2, sp
         3cdd4:	e1a00005 	mov	r0, r5
         3cdd8:	e59f108c 	ldr	r1, [pc, #8c]	; 3ce6c <TBeamer::ReceiveNewton(void)+0x320>	; fField8
         3cddc:	eb6e2561 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3cde0:	e59d0000 	ldr	r0, [sp]
         3cde4:	eb6e18f4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3cde8:	e5940008 	ldr	r0, [r4, #8]	; fField8
         3cdec:	e5901000 	ldr	r1, [r0]
         3cdf0:	e1a0e00f 	mov	lr, pc
         3cdf4:	e281f028 	add	pc, r1, #40	; 0x28
         3cdf8:	e2840028 	add	r0, r4, #40	; 0x28
         3cdfc:	e59f806c 	ldr	r8, [pc, #6c]	; 3ce70 <TBeamer::ReceiveNewton(void)+0x324>
         3ce00:	e59f706c 	ldr	r7, [pc, #6c]	; 3ce74 <TBeamer::ReceiveNewton(void)+0x328>
         3ce04:	e3560000 	cmp	r6, #0	; 0x0
         3ce08:	e24dd004 	sub	sp, sp, #4	; 0x4
         3ce0c:	da000027 	ble	3ceb0 <TBeamer::ReceiveNewton(void)+0x364>
         3ce10:	e5a06004 	str	r6, [r0, #4]!	; fField4
         3ce14:	e1a00009 	mov	r0, r9
         3ce18:	eb6e14cb 	bl	1bc214c <$AllocateRefHandle(long)>
         3ce1c:	e58d0000 	str	r0, [sp]
         3ce20:	e1a0200d 	mov	r2, sp
         3ce24:	e1a00005 	mov	r0, r5
         3ce28:	e59f1048 	ldr	r1, [pc, #48]	; 3ce78 <TBeamer::ReceiveNewton(void)+0x32c>
         3ce2c:	eb6e254d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3ce30:	e59d0000 	ldr	r0, [sp]
         3ce34:	eb6e18e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3ce38:	e1a03005 	mov	r3, r5
         3ce3c:	e92d0008 	stmdb	sp!, {r3}
         3ce40:	e59f3034 	ldr	r3, [pc, #34]	; 3ce7c <TBeamer::ReceiveNewton(void)+0x330>
         3ce44:	ea000027 	b	3cee8 <TBeamer::ReceiveNewton(void)+0x39c>
         3ce48:	00683b40 	rsbeq	r3, r8, r0, asr #22
         3ce4c:	00682f88 	rsbeq	r2, r8, r8, lsl #31
         3ce50:	00682588 	rsbeq	r2, r8, r8, lsl #11
         3ce54:	006845c0 	rsbeq	r4, r8, r0, asr #11
         3ce58:	006846a8 	rsbeq	r4, r8, r8, lsr #13
         3ce5c:	00684c20 	rsbeq	r4, r8, r0, lsr #24
         3ce60:	00684da0 	rsbeq	r4, r8, r0, lsr #27
         3ce64:	00682050 	rsbeq	r2, r8, r0, asr r0
         3ce68:	00684b90 	streqb	r4, [r8], -#176
         3ce6c:	00684b98 	streqb	r4, [r8], -#184
         3ce70:	00684158 	rsbeq	r4, r8, r8, asr r1
         3ce74:	006845c8 	rsbeq	r4, r8, r8, asr #11
         3ce78:	00682f38 	rsbeq	r2, r8, r8, lsr pc
         3ce7c:	00684ed8 	ldreqd	r4, [r8], -#232
         3ce80:	e28d006c 	add	r0, sp, #108	; 0x6c
         3ce84:	e3a01000 	mov	r1, #0	; 0x0
         3ce88:	eb684638 	bl	1a4e770 <TObjectReader::$__dt(void)>
         3ce8c:	e1a0000d 	mov	r0, sp
         3ce90:	eb6e94af 	bl	1be2154 <$NextHandler>
         3ce94:	eafffff9 	b	3ce80 <TBeamer::ReceiveNewton(void)+0x334>
         3ce98:	e28d0070 	add	r0, sp, #112	; 0x70
         3ce9c:	e3a01000 	mov	r1, #0	; 0x0
         3cea0:	eb684630 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         3cea4:	e1a0000d 	mov	r0, sp
         3cea8:	eb6e94a9 	bl	1be2154 <$NextHandler>
         3ceac:	eafffff9 	b	3ce98 <TBeamer::ReceiveNewton(void)+0x34c>
         3ceb0:	e3e01000 	mvn	r1, #0	; 0x0
         3ceb4:	e5a01004 	str	r1, [r0, #4]!	; fField4
         3ceb8:	e3a0001a 	mov	r0, #26	; 0x1a
         3cebc:	eb6e14a2 	bl	1bc214c <$AllocateRefHandle(long)>
         3cec0:	e58d0000 	str	r0, [sp]
         3cec4:	e1a0200d 	mov	r2, sp
         3cec8:	e1a00005 	mov	r0, r5
         3cecc:	e59f111c 	ldr	r1, [pc, #11c]	; 3cff0 <TBeamer::ReceiveNewton(void)+0x4a4>
         3ced0:	eb6e2524 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3ced4:	e59d0000 	ldr	r0, [sp]
         3ced8:	eb6e18b7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3cedc:	e1a03005 	mov	r3, r5
         3cee0:	e92d0008 	stmdb	sp!, {r3}
         3cee4:	e59f3108 	ldr	r3, [pc, #108]	; 3cff4 <TBeamer::ReceiveNewton(void)+0x4a8>
         3cee8:	e1a02008 	mov	r2, r8
         3ceec:	e1a01007 	mov	r1, r7
         3cef0:	e1a00004 	mov	r0, r4
         3cef4:	eb6f0c54 	bl	1c0004c <$NSSend__FRC6RefVarN41>
         3cef8:	e3a00002 	mov	r0, #2	; 0x2
         3cefc:	eb6e1492 	bl	1bc214c <$AllocateRefHandle(long)>
         3cf00:	e58d0004 	str	r0, [sp, #4]	; fField4
         3cf04:	e24dd010 	sub	sp, sp, #16	; 0x10
         3cf08:	e28d2020 	add	r2, sp, #32	; 0x20
         3cf0c:	e1a0000d 	mov	r0, sp
         3cf10:	e5941008 	ldr	r1, [r4, #8]	; fField8
         3cf14:	eb684616 	bl	1a4e774 <TObjectReader::$__ct(CPipe &, RefVar const &)>
         3cf18:	e52d906c 	str	r9, [sp, -#108]!
         3cf1c:	e28d0008 	add	r0, sp, #8	; 0x8
         3cf20:	eb6dd693 	bl	1bb2974 <$setjmp>
         3cf24:	e3300000 	teq	r0, #0	; 0x0
         3cf28:	1a000034 	bne	3d000 <TBeamer::ReceiveNewton(void)+0x4b4>
         3cf2c:	e1a0000d 	mov	r0, sp
         3cf30:	eb6e8c51 	bl	1be007c <$AddExceptionHandler>
         3cf34:	e28d006c 	add	r0, sp, #108	; 0x6c
         3cf38:	eb6e24f3 	bl	1bc630c <TObjectReader::$Read(void)>
         3cf3c:	e59d1080 	ldr	r1, [sp, #128]
         3cf40:	e5810000 	str	r0, [r1]
         3cf44:	e1a0000d 	mov	r0, sp
         3cf48:	eb6e905a 	bl	1be10b8 <$ExitHandler>
         3cf4c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3cf50:	e1a0000d 	mov	r0, sp
         3cf54:	e3a01000 	mov	r1, #0	; 0x0
         3cf58:	eb684604 	bl	1a4e770 <TObjectReader::$__dt(void)>
         3cf5c:	e28dd010 	add	sp, sp, #16	; 0x10
         3cf60:	e1a0000a 	mov	r0, sl
         3cf64:	eb6e1478 	bl	1bc214c <$AllocateRefHandle(long)>
         3cf68:	e58d0000 	str	r0, [sp]
         3cf6c:	e1a0300d 	mov	r3, sp
         3cf70:	e92d0008 	stmdb	sp!, {r3}
         3cf74:	e59f307c 	ldr	r3, [pc, #7c]	; 3cff8 <TBeamer::ReceiveNewton(void)+0x4ac>
         3cf78:	e1a02008 	mov	r2, r8
         3cf7c:	e1a01007 	mov	r1, r7
         3cf80:	e1a00004 	mov	r0, r4
         3cf84:	eb6f0c30 	bl	1c0004c <$NSSend__FRC6RefVarN41>
         3cf88:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         3cf8c:	eb6e188a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3cf90:	e5950000 	ldr	r0, [r5]
         3cf94:	e580a000 	str	sl, [r0]
         3cf98:	e52d906c 	str	r9, [sp, -#108]!
         3cf9c:	e28d0008 	add	r0, sp, #8	; 0x8
         3cfa0:	eb6dd673 	bl	1bb2974 <$setjmp>
         3cfa4:	e3300000 	teq	r0, #0	; 0x0
         3cfa8:	1a00001a 	bne	3d018 <TBeamer::ReceiveNewton(void)+0x4cc>
         3cfac:	e1a0000d 	mov	r0, sp
         3cfb0:	eb6e8c31 	bl	1be007c <$AddExceptionHandler>
         3cfb4:	e24dd004 	sub	sp, sp, #4	; 0x4
         3cfb8:	e1a0000a 	mov	r0, sl
         3cfbc:	eb6e1462 	bl	1bc214c <$AllocateRefHandle(long)>
         3cfc0:	e58d0000 	str	r0, [sp]
         3cfc4:	e1a0300d 	mov	r3, sp
         3cfc8:	e92d0008 	stmdb	sp!, {r3}
         3cfcc:	e28d30f8 	add	r3, sp, #248	; 0xf8
         3cfd0:	e28d2078 	add	r2, sp, #120	; 0x78
         3cfd4:	e59f1020 	ldr	r1, [pc, #20]	; 3cffc <TBeamer::ReceiveNewton(void)+0x4b0>	; fField20
         3cfd8:	e1a00004 	mov	r0, r4
         3cfdc:	eb6f0c1a 	bl	1c0004c <$NSSend__FRC6RefVarN41>
         3cfe0:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         3cfe4:	eb6e1874 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3cfe8:	e28dd004 	add	sp, sp, #4	; 0x4
         3cfec:	ea00000c 	b	3d024 <TBeamer::ReceiveNewton(void)+0x4d8>
         3cff0:	00681fd0 	ldreqd	r1, [r8], -#240
         3cff4:	00684eb0 	streqh	r4, [r8], -#224
         3cff8:	00685138 	rsbeq	r5, r8, r8, lsr r1
         3cffc:	00682030 	rsbeq	r2, r8, r0, lsr r0
         3d000:	e28d006c 	add	r0, sp, #108	; 0x6c
         3d004:	e3a01000 	mov	r1, #0	; 0x0
         3d008:	eb6845d8 	bl	1a4e770 <TObjectReader::$__dt(void)>
         3d00c:	e1a0000d 	mov	r0, sp
         3d010:	eb6e944f 	bl	1be2154 <$NextHandler>
         3d014:	eafffff9 	b	3d000 <TBeamer::ReceiveNewton(void)+0x4b4>
         3d018:	e3e0006e 	mvn	r0, #110	; 0x6e
         3d01c:	e2400a02 	sub	r0, r0, #8192	; 0x2000
         3d020:	e58d00f4 	str	r0, [sp, #244]
         3d024:	e1a0000d 	mov	r0, sp
         3d028:	eb6e9022 	bl	1be10b8 <$ExitHandler>
         3d02c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3d030:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         3d034:	eb6e1860 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3d038:	e28dd00c 	add	sp, sp, #12	; 0xc
         3d03c:	ea000001 	b	3d048 <TBeamer::ReceiveNewton(void)+0x4fc>
         3d040:	e59f0010 	ldr	r0, [pc, #10]	; 3d058 <TBeamer::ReceiveNewton(void)+0x50c>
         3d044:	e58d007c 	str	r0, [sp, #124]
         3d048:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         3d04c:	eb6e185a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3d050:	e28dd008 	add	sp, sp, #8	; 0x8
         3d054:	ea000009 	b	3d080 <TBeamer::ReceiveNewton(void)+0x534>
         3d058:	ffffd687 	swinv	0x00ffd687
         3d05c:	e59d0060 	ldr	r0, [sp, #96]
         3d060:	e59f1040 	ldr	r1, [pc, #40]	; 3d0a8 <TBeamer::ReceiveNewton(void)+0x55c>
         3d064:	e5911000 	ldr	r1, [r1]
         3d068:	eb6e9849 	bl	1be3194 <$Subexception>
         3d06c:	e3300000 	teq	r0, #0	; 0x0
         3d070:	03e00077 	mvneq	r0, #119	; 0x77
         3d074:	02400b25 	subeq	r0, r0, #37888	; 0x9400
         3d078:	159d0064 	ldrne	r0, [sp, #100]
         3d07c:	e58d0074 	str	r0, [sp, #116]
         3d080:	e1a0000d 	mov	r0, sp
         3d084:	eb6e900b 	bl	1be10b8 <$ExitHandler>
         3d088:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3d08c:	e59d0000 	ldr	r0, [sp]
         3d090:	e59d4008 	ldr	r4, [sp, #8]	; fField8
         3d094:	eb6e1848 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3d098:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         3d09c:	eb6e1846 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3d0a0:	e1a00004 	mov	r0, r4
         3d0a4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         3d0a8:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TBeamer::ReceiveWizard(void)
 * Address: 0003d0ac
 */
TBeamer::ReceiveWizard(void) {
    /*
         3d0ac:	e1a0c00d 	mov	ip, sp
         3d0b0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3d0b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         3d0b8:	e1a04000 	mov	r4, r0
         3d0bc:	e3a00000 	mov	r0, #0	; 0x0
         3d0c0:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         3d0c4:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         3d0c8:	e1a0000d 	mov	r0, sp
         3d0cc:	eb6de285 	bl	1bb5ae8 <TEndpointPipe::$__ct(void)>
         3d0d0:	e3a00000 	mov	r0, #0	; 0x0
         3d0d4:	e52d006c 	str	r0, [sp, -#108]!
         3d0d8:	e28d0008 	add	r0, sp, #8	; 0x8
         3d0dc:	eb6dd624 	bl	1bb2974 <$setjmp>
         3d0e0:	e3300000 	teq	r0, #0	; 0x0
         3d0e4:	1a000029 	bne	3d190 <TBeamer::ReceiveWizard(void)+0xe4>
         3d0e8:	e1a0000d 	mov	r0, sp
         3d0ec:	eb6e8be2 	bl	1be007c <$AddExceptionHandler>
         3d0f0:	e3a03000 	mov	r3, #0	; 0x0
         3d0f4:	e3a02001 	mov	r2, #1	; 0x1
         3d0f8:	e3a01000 	mov	r1, #0	; 0x0
         3d0fc:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         3d100:	e28d0078 	add	r0, sp, #120	; 0x78
         3d104:	e3a03c02 	mov	r3, #512	; 0x200
         3d108:	e3a02c02 	mov	r2, #512	; 0x200
         3d10c:	e5941004 	ldr	r1, [r4, #4]	; fField4
         3d110:	eb6f0781 	bl	1bfef1c <TEndpointPipe::$Init(TEndpoint *, long, long, unsigned long, unsigned char, PipeCallBack *)>
         3d114:	e28dd004 	add	sp, sp, #4	; 0x4
         3d118:	e28d0074 	add	r0, sp, #116	; 0x74
         3d11c:	e58d0004 	str	r0, [sp, #4]	; fField4
         3d120:	e3a00002 	mov	r0, #2	; 0x2
         3d124:	eb6e1408 	bl	1bc214c <$AllocateRefHandle(long)>
         3d128:	e58d0000 	str	r0, [sp]
         3d12c:	e1a0300d 	mov	r3, sp
         3d130:	e59f204c 	ldr	r2, [pc, #4c]	; 3d184 <TBeamer::ReceiveWizard(void)+0xd8>	; fField4
         3d134:	e59f104c 	ldr	r1, [pc, #4c]	; 3d188 <TBeamer::ReceiveWizard(void)+0xdc>	; fField4
         3d138:	e1a00004 	mov	r0, r4
         3d13c:	eb6f0bc1 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3d140:	e59d0000 	ldr	r0, [sp]
         3d144:	eb6e181c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3d148:	e24dd004 	sub	sp, sp, #4	; 0x4
         3d14c:	e28d1008 	add	r1, sp, #8	; 0x8
         3d150:	e3a02000 	mov	r2, #0	; 0x0
         3d154:	e5940010 	ldr	r0, [r4, #16]	; fField16
         3d158:	eb6dacae 	bl	1ba8418 <PFrameSource::$Translate(void *, PipeCallBack *)>
         3d15c:	eb6e13fa 	bl	1bc214c <$AllocateRefHandle(long)>
         3d160:	e58d0000 	str	r0, [sp]
         3d164:	e1a0200d 	mov	r2, sp
         3d168:	e59f101c 	ldr	r1, [pc, #1c]	; 3d18c <TBeamer::ReceiveWizard(void)+0xe0>
         3d16c:	e1a00004 	mov	r0, r4
         3d170:	eb6f0bb3 	bl	1c00044 <$NSSend__FRC6RefVarN21>
         3d174:	e59d0000 	ldr	r0, [sp]
         3d178:	eb6e180f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3d17c:	e28dd00c 	add	sp, sp, #12	; 0xc
         3d180:	ea000012 	b	3d1d0 <TBeamer::ReceiveWizard(void)+0x124>
         3d184:	00684158 	rsbeq	r4, r8, r8, asr r1
         3d188:	006845c0 	rsbeq	r4, r8, r0, asr #11
         3d18c:	006851c8 	rsbeq	r5, r8, r8, asr #3
         3d190:	e59d0060 	ldr	r0, [sp, #96]
         3d194:	e59f105c 	ldr	r1, [pc, #5c]	; 3d1f8 <TBeamer::ReceiveWizard(void)+0x14c>
         3d198:	e5911000 	ldr	r1, [r1]
         3d19c:	eb6e97fc 	bl	1be3194 <$Subexception>
         3d1a0:	e3300000 	teq	r0, #0	; 0x0
         3d1a4:	1a000007 	bne	3d1c8 <TBeamer::ReceiveWizard(void)+0x11c>
         3d1a8:	e59d0060 	ldr	r0, [sp, #96]
         3d1ac:	e59f1048 	ldr	r1, [pc, #48]	; 3d1fc <TBeamer::ReceiveWizard(void)+0x150>
         3d1b0:	e5911000 	ldr	r1, [r1]
         3d1b4:	eb6e97f6 	bl	1be3194 <$Subexception>
         3d1b8:	e3300000 	teq	r0, #0	; 0x0
         3d1bc:	03e00e35 	mvneq	r0, #848	; 0x350
         3d1c0:	02400903 	subeq	r0, r0, #49152	; 0xc000
         3d1c4:	0a000000 	beq	3d1cc <TBeamer::ReceiveWizard(void)+0x120>
         3d1c8:	e59d0064 	ldr	r0, [sp, #100]
         3d1cc:	e58d0098 	str	r0, [sp, #152]
         3d1d0:	e1a0000d 	mov	r0, sp
         3d1d4:	eb6e8fb7 	bl	1be10b8 <$ExitHandler>
         3d1d8:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3d1dc:	e59d402c 	ldr	r4, [sp, #44]
         3d1e0:	e1a0000d 	mov	r0, sp
         3d1e4:	e3a01000 	mov	r1, #0	; 0x0
         3d1e8:	e1a0e00f 	mov	lr, pc
         3d1ec:	e59df000 	ldr	pc, [sp]
         3d1f0:	e1a00004 	mov	r0, r4
         3d1f4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         3d1f8:	00371324 	eoreqs	r1, r7, r4, lsr #6
         3d1fc:	00371328 	eoreqs	r1, r7, r8, lsr #6
    */
}

/**
 * Symbol: TBeamer::CloseEndpoint(void)
 * Address: 0003d200
 */
TBeamer::CloseEndpoint(void) {
    /*
         3d200:	e1a0c00d 	mov	ip, sp
         3d204:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3d208:	e24cb004 	sub	fp, ip, #4	; 0x4
         3d20c:	e1a04000 	mov	r4, r0
         3d210:	e3a05000 	mov	r5, #0	; 0x0
         3d214:	e5900004 	ldr	r0, [r0, #4]	; fField4
         3d218:	e3300000 	teq	r0, #0	; 0x0
         3d21c:	0a000015 	beq	3d278 <TBeamer::CloseEndpoint(void)+0x78>
         3d220:	e59f1058 	ldr	r1, [pc, #58]	; 3d280 <TBeamer::CloseEndpoint(void)+0x80>
         3d224:	e1a00004 	mov	r0, r4
         3d228:	eb6e243d 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
         3d22c:	e3a03001 	mov	r3, #1	; 0x1
         3d230:	e3a02000 	mov	r2, #0	; 0x0
         3d234:	e92d000c 	stmdb	sp!, {r2, r3}
         3d238:	e3a03000 	mov	r3, #0	; 0x0
         3d23c:	e3a01000 	mov	r1, #0	; 0x0
         3d240:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3d244:	eb672c8a 	bl	1a08474 <TEndpoint::$nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)>
         3d248:	e28dd008 	add	sp, sp, #8	; 0x8
         3d24c:	e3a02001 	mov	r2, #1	; 0x1
         3d250:	e3a01000 	mov	r1, #0	; 0x0
         3d254:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3d258:	eb67308c 	bl	1a09490 <TEndpoint::$nUnBind(unsigned long, unsigned char)>
         3d25c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3d260:	eb6dea4d 	bl	1bb7b9c <TEndpoint::$Close(void)>
         3d264:	e1a05000 	mov	r5, r0
         3d268:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3d26c:	eb6dea5f 	bl	1bb7bf0 <TEndpoint::$Delete(void)>
         3d270:	e3a00000 	mov	r0, #0	; 0x0
         3d274:	e5a40004 	str	r0, [r4, #4]!	; fField4
         3d278:	e1a00005 	mov	r0, r5
         3d27c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         3d280:	00682c70 	rsbeq	r2, r8, r0, ror ip
    */
}

/**
 * Symbol: TBeamer::ClosePipe(void)
 * Address: 0003d284
 */
TBeamer::ClosePipe(void) {
    /*
         3d284:	e1a0c00d 	mov	ip, sp
         3d288:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3d28c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3d290:	e1a04000 	mov	r4, r0
         3d294:	e5900008 	ldr	r0, [r0, #8]	; fField8
         3d298:	e3a05000 	mov	r5, #0	; 0x0
         3d29c:	e3300000 	teq	r0, #0	; 0x0
         3d2a0:	0a000004 	beq	3d2b8 <TBeamer::ClosePipe(void)+0x34>
         3d2a4:	e3a01001 	mov	r1, #1	; 0x1
         3d2a8:	e1a0e00f 	mov	lr, pc
         3d2ac:	e590f000 	ldr	pc, [r0]
         3d2b0:	e5a45008 	str	r5, [r4, #8]!	; fField8
         3d2b4:	ea00000a 	b	3d2e4 <TBeamer::ClosePipe(void)+0x60>
         3d2b8:	e594000c 	ldr	r0, [r4, #12]	; fField12
         3d2bc:	e3300000 	teq	r0, #0	; 0x0
         3d2c0:	0a000002 	beq	3d2d0 <TBeamer::ClosePipe(void)+0x4c>
         3d2c4:	eb6da41b 	bl	1ba6338 <PFrameSink::$Delete(void)>
         3d2c8:	e5a4500c 	str	r5, [r4, #12]!	; fField12
         3d2cc:	ea000004 	b	3d2e4 <TBeamer::ClosePipe(void)+0x60>
         3d2d0:	e5940010 	ldr	r0, [r4, #16]	; fField16
         3d2d4:	e3300000 	teq	r0, #0	; 0x0
         3d2d8:	0a000001 	beq	3d2e4 <TBeamer::ClosePipe(void)+0x60>
         3d2dc:	eb6da418 	bl	1ba6344 <PFrameSource::$Delete(void)>
         3d2e0:	e5a45010 	str	r5, [r4, #16]!	; fField16
         3d2e4:	e1a00005 	mov	r0, r5
         3d2e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TBeamer::__ct(RefVar const &)
 * Address: 0003db74
 */
TBeamer::TBeamer(RefVar const &) {
    /*
         3db74:	e1a0c00d 	mov	ip, sp
         3db78:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         3db7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3db80:	e1b04000 	movs	r4, r0
         3db84:	e1a05001 	mov	r5, r1
         3db88:	1a000003 	bne	3db9c <TBeamer::__ct(RefVar const &)+0x28>
         3db8c:	e3a00040 	mov	r0, #64	; 0x40
         3db90:	eb6e42e8 	bl	1bce738 <$__nw(unsigned int)>
         3db94:	e1b04000 	movs	r4, r0
         3db98:	0a00001a 	beq	3dc08 <TBeamer::__ct(RefVar const &)+0x94>
         3db9c:	e3a00002 	mov	r0, #2	; 0x2
         3dba0:	eb6e1169 	bl	1bc214c <$AllocateRefHandle(long)>
         3dba4:	e3a06000 	mov	r6, #0	; 0x0
         3dba8:	e5840000 	str	r0, [r4]
         3dbac:	e5a06004 	str	r6, [r0, #4]!	; fField4
         3dbb0:	e2840028 	add	r0, r4, #40	; 0x28
         3dbb4:	eb6daa24 	bl	1ba844c <PipeCallBack::$__ct(void)>
         3dbb8:	e59f0050 	ldr	r0, [pc, #50]	; 3dc10 <TBeamer::__ct(RefVar const &)+0x9c>
         3dbbc:	e5840028 	str	r0, [r4, #40]
         3dbc0:	e3a00001 	mov	r0, #1	; 0x1
         3dbc4:	e5840038 	str	r0, [r4, #56]
         3dbc8:	e3a00002 	mov	r0, #2	; 0x2
         3dbcc:	e5846034 	str	r6, [r4, #52]
         3dbd0:	eb6e115d 	bl	1bc214c <$AllocateRefHandle(long)>
         3dbd4:	e584003c 	str	r0, [r4, #60]
         3dbd8:	e5a06004 	str	r6, [r0, #4]!	; fField4
         3dbdc:	e5950000 	ldr	r0, [r5]
         3dbe0:	e5900000 	ldr	r0, [r0]
         3dbe4:	e5941000 	ldr	r1, [r4]
         3dbe8:	e5810000 	str	r0, [r1]
         3dbec:	e5846004 	str	r6, [r4, #4]	; fField4
         3dbf0:	e5846008 	str	r6, [r4, #8]	; fField8
         3dbf4:	e5846010 	str	r6, [r4, #16]	; fField16
         3dbf8:	e584600c 	str	r6, [r4, #12]	; fField12
         3dbfc:	e5846018 	str	r6, [r4, #24]	; fField24
         3dc00:	e584601c 	str	r6, [r4, #28]	; fField28
         3dc04:	e5846014 	str	r6, [r4, #20]	; fField20
         3dc08:	e1a00004 	mov	r0, r4
         3dc0c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         3dc10:	0001df84 	andeq	sp, r1, r4, lsl #31
         3dc14:	53686172 	cmnpl	r8, #-2147483620	; 0x8000001c
         3dc18:	65644174 	strvsb	r4, [r4, -#372]!
         3dc1c:	7472436f 	ldrvcbt	r4, [r2], -#879
         3dc20:	6d6d6f6e 	stcvsl	15, cr6, [sp, -#440]!
         3dc24:	00000000 	andeq	r0, r0, r0
         3dc28:	656e6470 	strvsb	r6, [lr, -#1136]!
         3dc2c:	756e6374 	strvcb	r6, [lr, -#884]!
         3dc30:	00000000 	andeq	r0, r0, r0
         3dc34:	636c6f73 	cmnvs	ip, #460	; 0x1cc
         3dc38:	6571756f 	ldrvsb	r7, [r1, -#1391]!
         3dc3c:	74650000 	strvcbt	r0, [r5]
         3dc40:	68797068 	ldmvsda	r9!, {r3, r5, r6, ip, sp, lr}^
         3dc44:	656e0000 	strvsb	r0, [lr]!
         3dc48:	53756666 	cmnpl	r5, #106954752	; 0x6600000
         3dc4c:	69786573 	ldmvsdb	r8!, {r0, r1, r4, r5, r6, r8, sl, sp, lr}^
         3dc50:	00000000 	andeq	r0, r0, r0
         3dc54:	53686172 	cmnpl	r8, #-2147483620	; 0x8000001c
         3dc58:	6564436f 	strvsb	r4, [r4, -#879]!
         3dc5c:	6d6d6f6e 	stcvsl	15, cr6, [sp, -#440]!
         3dc60:	73000000 	tstvc	r0, #0	; 0x0
         3dc64:	5370656c 	cmnpl	r0, #452984832	; 0x1b000000
         3dc68:	6c436865 	mcrrvs	8, 6, r6, r3, cr5
         3dc6c:	636b4967 	cmnvs	fp, #1687552	; 0x19c000
         3dc70:	6e6f7265 	cdpvs	2, 6, cr7, cr15, cr5, {3}
         3dc74:	00000000 	andeq	r0, r0, r0
         3dc78:	7e757365 	cdpvc	3, 7, cr7, cr5, cr5, {3}
         3dc7c:	72000000 	andvc	r0, r0, #0	; 0x0
         3dc80:	7e6e756c 	cdpvc	5, 6, cr7, cr14, cr12, {3}
         3dc84:	6c310000 	ldcvs	0, cr0, [r1]
         3dc88:	7e6e756c 	cdpvc	5, 6, cr7, cr14, cr12, {3}
         3dc8c:	6c320000 	ldcvs	0, cr0, [r2]
         3dc90:	7e6e756c 	cdpvc	5, 6, cr7, cr14, cr12, {3}
         3dc94:	6c330000 	ldcvs	0, cr0, [r3]
         3dc98:	7e6e756c 	cdpvc	5, 6, cr7, cr14, cr12, {3}
         3dc9c:	6c340000 	ldcvs	0, cr0, [r4]
         3dca0:	7e6e756c 	cdpvc	5, 6, cr7, cr14, cr12, {3}
         3dca4:	6c350000 	ldcvs	0, cr0, [r5]
         3dca8:	6e756d62 	cdpvs	13, 7, cr6, cr5, cr2, {3}
         3dcac:	65727300 	ldrvsb	r7, [r2, -#768]!
         3dcb0:	50726566 	rsbpls	r6, r2, r6, ror #10
         3dcb4:	69786573 	ldmvsdb	r8!, {r0, r1, r4, r5, r6, r8, sl, sp, lr}^
         3dcb8:	00000000 	andeq	r0, r0, r0
         3dcbc:	6d6f6e65 	stcvsl	14, cr6, [pc, -#404]!
         3dcc0:	79000000 	stmvcdb	r0, {}
         3dcc4:	54696d65 	strplbt	r6, [r9], -#3429
         3dcc8:	525f5553 	subpls	r5, pc, #348127232	; 0x14c00000
         3dccc:	5f425f43 	swipl	0x00425f43
         3dcd0:	5f580000 	swipl	0x00580000
         3dcd4:	44617465 	strmibt	r7, [r1], -#1125
         3dcd8:	525f5553 	subpls	r5, pc, #348127232	; 0x14c00000
         3dcdc:	00000000 	andeq	r0, r0, r0
         3dce0:	50686f6e 	rsbpl	r6, r8, lr, ror #30
         3dce4:	65525f55 	ldrvsb	r5, [r2, -#3925]
         3dce8:	535f4300 	cmppl	pc, #0	; 0x0
         3dcec:	506f7374 	rsbpl	r7, pc, r4, ror r3
         3dcf0:	616c436f 	cmnvs	ip, pc, ror #6
         3dcf4:	64650000 	strvsbt	r0, [r5]
         3dcf8:	49444e75 	stmmidb	r4, {r0, r2, r4, r5, r6, r9, sl, fp, lr}^
         3dcfc:	6d626572 	stcvsl	5, cr6, [r2, -#456]!
         3dd00:	73000000 	tstvc	r0, #0	; 0x0
         3dd04:	6f70656e 	swivs	0x0070656e
         3dd08:	71756f74 	cmnvc	r5, r4, ror pc
         3dd0c:	65000000 	strvs	r0, [r0]
         3dd10:	776f7264 	strvcb	r7, [pc, -r4, ror #4]!	; fField4
         3dd14:	6c696b65 	stcvsl	11, cr6, [r9], -#404
         3dd18:	00000000 	andeq	r0, r0, r0
         3dd1c:	4c657869 	stcmil	8, cr7, [r5], -#420
         3dd20:	63616c53 	cmnvs	r1, #21248	; 0x5300
         3dd24:	796d626f 	stmvcdb	sp!, {r0, r1, r2, r3, r5, r6, r9, sp, lr}^
         3dd28:	6c733100 	ldfvse	f3, [r3]
         3dd2c:	4c657869 	stcmil	8, cr7, [r5], -#420
         3dd30:	63616c53 	cmnvs	r1, #21248	; 0x5300
         3dd34:	796d626f 	stmvcdb	sp!, {r0, r1, r2, r3, r5, r6, r9, sp, lr}^
         3dd38:	6c733200 	lfmvs	f3, 2, [r3]
         3dd3c:	47656e65 	strmib	r6, [r5, -r5, ror #28]!	; fField28
         3dd40:	72616c00 	rsbvc	r6, r1, #0	; 0x0
         3dd44:	44617465 	strmibt	r7, [r1], -#1125
         3dd48:	525f5553 	subpls	r5, pc, #348127232	; 0x14c00000
         3dd4c:	00000000 	andeq	r0, r0, r0
         3dd50:	656e6470 	strvsb	r6, [lr, -#1136]!
         3dd54:	756e6374 	strvcb	r6, [lr, -#884]!
         3dd58:	00000000 	andeq	r0, r0, r0
         3dd5c:	6461796d 	strvsbt	r7, [r1], -#2413
         3dd60:	6f6e7468 	swivs	0x006e7468
         3dd64:	00000000 	andeq	r0, r0, r0
         3dd68:	4c657869 	stcmil	8, cr7, [r5], -#420
         3dd6c:	63616c53 	cmnvs	r1, #21248	; 0x5300
         3dd70:	796d626f 	stmvcdb	sp!, {r0, r1, r2, r3, r5, r6, r9, sp, lr}^
         3dd74:	6c730000 	ldcvsl	0, cr0, [r3]
         3dd78:	44617465 	strmibt	r7, [r1], -#1125
         3dd7c:	00000000 	andeq	r0, r0, r0
         3dd80:	6e756d62 	cdpvs	13, 7, cr6, cr5, cr2, {3}
         3dd84:	65727300 	ldrvsb	r7, [r2, -#768]!
         3dd88:	6d6f6e65 	stcvsl	14, cr6, [pc, -#404]!
         3dd8c:	79000000 	stmvcdb	r0, {}
         3dd90:	4c657869 	stcmil	8, cr7, [r5], -#420
         3dd94:	63616c53 	cmnvs	r1, #21248	; 0x5300
         3dd98:	796d626f 	stmvcdb	sp!, {r0, r1, r2, r3, r5, r6, r9, sp, lr}^
         3dd9c:	6c730000 	ldcvsl	0, cr0, [r3]
         3dda0:	4e756d62 	cdpmi	13, 7, cr6, cr5, cr2, {3}
         3dda4:	65727326 	ldrvsb	r7, [r2, -#806]!
         3dda8:	4d6f6e65 	stcmil	14, cr6, [pc, -#404]!
         3ddac:	79000000 	stmvcdb	r0, {}
         3ddb0:	6e756d62 	cdpvs	13, 7, cr6, cr5, cr2, {3}
         3ddb4:	65727300 	ldrvsb	r7, [r2, -#768]!
         3ddb8:	4c657869 	stcmil	8, cr7, [r5], -#420
         3ddbc:	63616c53 	cmnvs	r1, #21248	; 0x5300
         3ddc0:	796d626f 	stmvcdb	sp!, {r0, r1, r2, r3, r5, r6, r9, sp, lr}^
         3ddc4:	6c730000 	ldcvsl	0, cr0, [r3]
         3ddc8:	4e756d62 	cdpmi	13, 7, cr6, cr5, cr2, {3}
         3ddcc:	65727300 	ldrvsb	r7, [r2, -#768]!
         3ddd0:	50686f6e 	rsbpl	r6, r8, lr, ror #30
         3ddd4:	65525f55 	ldrvsb	r5, [r2, -#3925]
         3ddd8:	535f4300 	cmppl	pc, #0	; 0x0
         3dddc:	68797068 	ldmvsda	r9!, {r3, r5, r6, ip, sp, lr}^
         3dde0:	656e0000 	strvsb	r0, [lr]!
         3dde4:	576f726c 	strplb	r7, [pc, -ip, ror #4]!	; fField4
         3dde8:	6450686f 	ldrvsb	r6, [r0], -#2159	; fField2159
         3ddec:	6e650000 	cdpvs	0, 6, cr0, cr5, cr0, {0}
         3ddf0:	46756e6e 	ldrmibt	r6, [r5], -lr, ror #28	; fField28
         3ddf4:	7950686f 	ldmvcdb	r0, {r0, r1, r2, r3, r5, r6, fp, sp, lr}^
         3ddf8:	6e650000 	cdpvs	0, 6, cr0, cr5, cr0, {0}
         3ddfc:	4c657869 	stcmil	8, cr7, [r5], -#420
         3de00:	63616c53 	cmnvs	r1, #21248	; 0x5300
         3de04:	796d626f 	stmvcdb	sp!, {r0, r1, r2, r3, r5, r6, r9, sp, lr}^
         3de08:	6c730000 	ldcvsl	0, cr0, [r3]
         3de0c:	50686f6e 	rsbpl	r6, r8, lr, ror #30
         3de10:	65000000 	strvs	r0, [r0]
         3de14:	54696d65 	strplbt	r6, [r9], -#3429
         3de18:	525f5553 	subpls	r5, pc, #348127232	; 0x14c00000
         3de1c:	5f425f43 	swipl	0x00425f43
         3de20:	5f580000 	swipl	0x00580000
         3de24:	4c657869 	stcmil	8, cr7, [r5], -#420
         3de28:	63616c53 	cmnvs	r1, #21248	; 0x5300
         3de2c:	796d626f 	stmvcdb	sp!, {r0, r1, r2, r3, r5, r6, r9, sp, lr}^
         3de30:	6c730000 	ldcvsl	0, cr0, [r3]
         3de34:	54696d65 	strplbt	r6, [r9], -#3429
         3de38:	00000000 	andeq	r0, r0, r0
         3de3c:	6d6f6e65 	stcvsl	14, cr6, [pc, -#404]!
         3de40:	79000000 	stmvcdb	r0, {}
         3de44:	4c657869 	stcmil	8, cr7, [r5], -#420
         3de48:	63616c53 	cmnvs	r1, #21248	; 0x5300
         3de4c:	796d626f 	stmvcdb	sp!, {r0, r1, r2, r3, r5, r6, r9, sp, lr}^
         3de50:	6c730000 	ldcvsl	0, cr0, [r3]
         3de54:	4d6f6e65 	stcmil	14, cr6, [pc, -#404]!
         3de58:	79000000 	stmvcdb	r0, {}
         3de5c:	6e756d62 	cdpvs	13, 7, cr6, cr5, cr2, {3}
         3de60:	65727300 	ldrvsb	r7, [r2, -#768]!
         3de64:	506f7374 	rsbpl	r7, pc, r4, ror r3
         3de68:	616c436f 	cmnvs	ip, pc, ror #6
         3de6c:	64650000 	strvsbt	r0, [r5]
         3de70:	4c657869 	stcmil	8, cr7, [r5], -#420
         3de74:	63616c53 	cmnvs	r1, #21248	; 0x5300
         3de78:	796d626f 	stmvcdb	sp!, {r0, r1, r2, r3, r5, r6, r9, sp, lr}^
         3de7c:	6c730000 	ldcvsl	0, cr0, [r3]
         3de80:	506f7374 	rsbpl	r7, pc, r4, ror r3
         3de84:	616c436f 	cmnvs	ip, pc, ror #6
         3de88:	64650000 	strvsbt	r0, [r5]
    */
}

