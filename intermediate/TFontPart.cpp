#include "include/TFontPart.h"

/**
 * Symbol: TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)
 * Address: 002e28b4
 */
TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *) {
    /*
        2e28b4:	e1a0c00d 	mov	ip, sp
        2e28b8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2e28bc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e28c0:	e24cb014 	sub	fp, ip, #20	; 0x14
        2e28c4:	e1a04000 	mov	r4, r0
        2e28c8:	e1a09001 	mov	r9, r1
        2e28cc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2e28d0:	e59f0034 	ldr	r0, [pc, #34]	; 2e290c <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x58>
        2e28d4:	e1a0a000 	mov	sl, r0
        2e28d8:	e3a01000 	mov	r1, #0	; 0x0
        2e28dc:	eb637e15 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2e28e0:	eb637e19 	bl	1bc214c <$AllocateRefHandle(long)>
        2e28e4:	e58d0000 	str	r0, [sp]
        2e28e8:	e5900000 	ldr	r0, [r0]
        2e28ec:	e3300002 	teq	r0, #2	; 0x2
        2e28f0:	1a000006 	bne	2e2910 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x5c>
        2e28f4:	e3a040e9 	mov	r4, #233	; 0xe9
        2e28f8:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        2e28fc:	e59d0000 	ldr	r0, [sp]
        2e2900:	eb63822d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2904:	e1a00004 	mov	r0, r4
        2e2908:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e290c:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2e2910:	e24dd008 	sub	sp, sp, #8	; 0x8
        2e2914:	e3a05000 	mov	r5, #0	; 0x0
        2e2918:	e59f61fc 	ldr	r6, [pc, #1fc]	; 2e2b1c <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x268>
        2e291c:	e5960000 	ldr	r0, [r6]
        2e2920:	eb637e09 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2924:	e1a07000 	mov	r7, r0
        2e2928:	e59f01f0 	ldr	r0, [pc, #1f0]	; 2e2b20 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x26c>
        2e292c:	e5900000 	ldr	r0, [r0]
        2e2930:	e5901000 	ldr	r1, [r0]
        2e2934:	e5970000 	ldr	r0, [r7]
        2e2938:	eb638648 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2e293c:	eb637e02 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2940:	e1a08000 	mov	r8, r0
        2e2944:	e1a00007 	mov	r0, r7
        2e2948:	eb63821b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e294c:	e5960000 	ldr	r0, [r6]
        2e2950:	eb637dfd 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2954:	e1a06000 	mov	r6, r0
        2e2958:	e59f01c4 	ldr	r0, [pc, #1c4]	; 2e2b24 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x270>
        2e295c:	e5900000 	ldr	r0, [r0]
        2e2960:	e5901000 	ldr	r1, [r0]
        2e2964:	e5960000 	ldr	r0, [r6]
        2e2968:	eb63863c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2e296c:	eb637df6 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2970:	e1a07000 	mov	r7, r0
        2e2974:	e1a00006 	mov	r0, r6
        2e2978:	eb63820f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e297c:	e3a00002 	mov	r0, #2	; 0x2
        2e2980:	eb637df1 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2984:	e58d0004 	str	r0, [sp, #4]
        2e2988:	e3a00002 	mov	r0, #2	; 0x2
        2e298c:	eb637dee 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2990:	e58d0000 	str	r0, [sp]
        2e2994:	e3a00002 	mov	r0, #2	; 0x2
        2e2998:	eb637deb 	bl	1bc214c <$AllocateRefHandle(long)>
        2e299c:	e1a06000 	mov	r6, r0
        2e29a0:	e24dd030 	sub	sp, sp, #48	; 0x30
        2e29a4:	e1a01009 	mov	r1, r9
        2e29a8:	e1a0000d 	mov	r0, sp
        2e29ac:	e3a02000 	mov	r2, #0	; 0x0
        2e29b0:	eb6379ce 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        2e29b4:	e1a0000d 	mov	r0, sp
        2e29b8:	eb638207 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2e29bc:	e3300000 	teq	r0, #0	; 0x0
        2e29c0:	1a000075 	bne	2e2b9c <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x2e8>
        2e29c4:	e24d0064 	sub	r0, sp, #100	; 0x64
        2e29c8:	e58d0040 	str	r0, [sp, #64]
        2e29cc:	e28d9008 	add	r9, sp, #8	; 0x8
        2e29d0:	e59f1150 	ldr	r1, [pc, #150]	; 2e2b28 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x274>
        2e29d4:	e58d103c 	str	r1, [sp, #60]
        2e29d8:	e1a00009 	mov	r0, r9
        2e29dc:	eb6443eb 	bl	1bf3990 <$IsFrame(RefVar const &)>
        2e29e0:	e3300000 	teq	r0, #0	; 0x0
        2e29e4:	0a000064 	beq	2e2b7c <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x2c8>
        2e29e8:	e59f013c 	ldr	r0, [pc, #13c]	; 2e2b2c <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x278>
        2e29ec:	e5900000 	ldr	r0, [r0]
        2e29f0:	e5901000 	ldr	r1, [r0]
        2e29f4:	e59d0008 	ldr	r0, [sp, #8]
        2e29f8:	e5900000 	ldr	r0, [r0]
        2e29fc:	eb638617 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2e2a00:	e59d1034 	ldr	r1, [sp, #52]
        2e2a04:	e5810000 	str	r0, [r1]
        2e2a08:	e3300002 	teq	r0, #2	; 0x2
        2e2a0c:	15981000 	ldrne	r1, [r8]
        2e2a10:	159d0030 	ldrne	r0, [sp, #48]
        2e2a14:	15801000 	strne	r1, [r0]
        2e2a18:	1a00000c 	bne	2e2a50 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x19c>
        2e2a1c:	e59f010c 	ldr	r0, [pc, #10c]	; 2e2b30 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x27c>
        2e2a20:	e5900000 	ldr	r0, [r0]
        2e2a24:	e5901000 	ldr	r1, [r0]
        2e2a28:	e59d0008 	ldr	r0, [sp, #8]
        2e2a2c:	e5900000 	ldr	r0, [r0]
        2e2a30:	eb63860a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2e2a34:	e59d1034 	ldr	r1, [sp, #52]
        2e2a38:	e5810000 	str	r0, [r1]
        2e2a3c:	e3300002 	teq	r0, #2	; 0x2
        2e2a40:	0a00004d 	beq	2e2b7c <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x2c8>
        2e2a44:	e5970000 	ldr	r0, [r7]
        2e2a48:	e59d1030 	ldr	r1, [sp, #48]
        2e2a4c:	e5810000 	str	r0, [r1]
        2e2a50:	e59d0034 	ldr	r0, [sp, #52]
        2e2a54:	e5901000 	ldr	r1, [r0]
        2e2a58:	e59d0030 	ldr	r0, [sp, #48]
        2e2a5c:	e5900000 	ldr	r0, [r0]
        2e2a60:	eb6385fe 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2e2a64:	e5860000 	str	r0, [r6]
        2e2a68:	e3300002 	teq	r0, #2	; 0x2
        2e2a6c:	1a000040 	bne	2e2b74 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x2c0>
        2e2a70:	e3a01000 	mov	r1, #0	; 0x0
        2e2a74:	e52d106c 	str	r1, [sp, -#108]!
        2e2a78:	e59d00ac 	ldr	r0, [sp, #172]
        2e2a7c:	eb633fbc 	bl	1bb2974 <$setjmp>
        2e2a80:	e3300000 	teq	r0, #0	; 0x0
        2e2a84:	1a00002a 	bne	2e2b34 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x280>
        2e2a88:	e1a0000d 	mov	r0, sp
        2e2a8c:	eb63f57a 	bl	1be007c <$AddExceptionHandler>
        2e2a90:	e24dd008 	sub	sp, sp, #8	; 0x8
        2e2a94:	e1a0000a 	mov	r0, sl
        2e2a98:	e3a01002 	mov	r1, #2	; 0x2
        2e2a9c:	eb637da5 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2e2aa0:	eb637da9 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2aa4:	e58d0004 	str	r0, [sp, #4]
        2e2aa8:	e28d00a8 	add	r0, sp, #168	; 0xa8
        2e2aac:	eb63966b 	bl	1bc8460 <$TotalClone(RefVar const &)>
        2e2ab0:	eb637da5 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2ab4:	e58d0000 	str	r0, [sp]
        2e2ab8:	e59d00a4 	ldr	r0, [sp, #164]
        2e2abc:	e5902000 	ldr	r2, [r0]
        2e2ac0:	e59d0004 	ldr	r0, [sp, #4]
        2e2ac4:	e5900000 	ldr	r0, [r0]
        2e2ac8:	e3a01000 	mov	r1, #0	; 0x0
        2e2acc:	eb638e21 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2e2ad0:	e59d0000 	ldr	r0, [sp]
        2e2ad4:	e5902000 	ldr	r2, [r0]
        2e2ad8:	e59d0004 	ldr	r0, [sp, #4]
        2e2adc:	e5900000 	ldr	r0, [r0]
        2e2ae0:	e3a01001 	mov	r1, #1	; 0x1
        2e2ae4:	eb638e1b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2e2ae8:	e28d1004 	add	r1, sp, #4	; 0x4
        2e2aec:	e28d00ac 	add	r0, sp, #172	; 0xac
        2e2af0:	eb637d8c 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        2e2af4:	e1a02009 	mov	r2, r9
        2e2af8:	e1a0100d 	mov	r1, sp
        2e2afc:	e28d00a4 	add	r0, sp, #164	; 0xa4
        2e2b00:	eb638e18 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2e2b04:	e59d0000 	ldr	r0, [sp]
        2e2b08:	eb6381ab 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2b0c:	e59d0004 	ldr	r0, [sp, #4]
        2e2b10:	eb6381a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2b14:	e28dd008 	add	sp, sp, #8	; 0x8
        2e2b18:	ea000012 	b	2e2b68 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x2b4>
        2e2b1c:	0c10180c 	ldceq	8, cr1, [r0], -#48
        2e2b20:	00682e48 	rsbeq	r2, r8, r8, asr #28
        2e2b24:	00684080 	rsbeq	r4, r8, r0, lsl #1
        2e2b28:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2e2b2c:	00684498 	streqb	r4, [r8], -#72
        2e2b30:	006840a8 	rsbeq	r4, r8, r8, lsr #1
        2e2b34:	e59d0060 	ldr	r0, [sp, #96]
        2e2b38:	e59d10a8 	ldr	r1, [sp, #168]
        2e2b3c:	e5911000 	ldr	r1, [r1]
        2e2b40:	eb640193 	bl	1be3194 <$Subexception>
        2e2b44:	e3300000 	teq	r0, #0	; 0x0
        2e2b48:	0a000004 	beq	2e2b60 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x2ac>
        2e2b4c:	e1a00004 	mov	r0, r4
        2e2b50:	eb63dc4d 	bl	1bd9c8c <TPartHandler::$RejectPart(void)>
        2e2b54:	e3a050e9 	mov	r5, #233	; 0xe9
        2e2b58:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        2e2b5c:	ea000001 	b	2e2b68 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x2b4>
        2e2b60:	e1a0000d 	mov	r0, sp
        2e2b64:	eb63fd7a 	bl	1be2154 <$NextHandler>
        2e2b68:	e1a0000d 	mov	r0, sp
        2e2b6c:	eb63f951 	bl	1be10b8 <$ExitHandler>
        2e2b70:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e2b74:	e3350000 	teq	r5, #0	; 0x0
        2e2b78:	1a000005 	bne	2e2b94 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x2e0>
        2e2b7c:	e1a0000d 	mov	r0, sp
        2e2b80:	eb6389d8 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        2e2b84:	e1a0000d 	mov	r0, sp
        2e2b88:	eb638193 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2e2b8c:	e3300000 	teq	r0, #0	; 0x0
        2e2b90:	0affff90 	beq	2e29d8 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x124>
        2e2b94:	e3350000 	teq	r5, #0	; 0x0
        2e2b98:	1a000002 	bne	2e2ba8 <TFontPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x2f4>
        2e2b9c:	e28d1038 	add	r1, sp, #56	; 0x38
        2e2ba0:	e1a00004 	mov	r0, r4
        2e2ba4:	eb638dee 	bl	1bc6364 <TFramePartHandler::$SetFrameRemoveObject(RefVar const &)>
        2e2ba8:	e1a0000d 	mov	r0, sp
        2e2bac:	e3a01000 	mov	r1, #0	; 0x0
        2e2bb0:	e1a0e00f 	mov	lr, pc
        2e2bb4:	e59df000 	ldr	pc, [sp]
        2e2bb8:	e1a00006 	mov	r0, r6
        2e2bbc:	eb63817e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2bc0:	e59d0030 	ldr	r0, [sp, #48]
        2e2bc4:	eb63817c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2bc8:	e59d0034 	ldr	r0, [sp, #52]
        2e2bcc:	eb63817a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2bd0:	e1a00007 	mov	r0, r7
        2e2bd4:	eb638178 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2bd8:	e1a00008 	mov	r0, r8
        2e2bdc:	eb638176 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2be0:	e59d0038 	ldr	r0, [sp, #56]
        2e2be4:	eb638174 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2be8:	e1a00005 	mov	r0, r5
        2e2bec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFontPart::RemoveFrame(RefVar const &, PartId const &, unsigned long)
 * Address: 002e2bf0
 */
TFontPart::RemoveFrame(RefVar const &, PartId const &, unsigned long) {
    /*
        2e2bf0:	e1a0c00d 	mov	ip, sp
        2e2bf4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2e2bf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e2bfc:	e1a04001 	mov	r4, r1
        2e2c00:	e24dd008 	sub	sp, sp, #8	; 0x8
        2e2c04:	e3a06000 	mov	r6, #0	; 0x0
        2e2c08:	e3a00002 	mov	r0, #2	; 0x2
        2e2c0c:	eb637d4e 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2c10:	e58d0004 	str	r0, [sp, #4]
        2e2c14:	e3a00002 	mov	r0, #2	; 0x2
        2e2c18:	eb637d4b 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2c1c:	e1a01004 	mov	r1, r4
        2e2c20:	e40d0030 	str	r0, [sp], -#48
        2e2c24:	e1a0000d 	mov	r0, sp
        2e2c28:	e3a02000 	mov	r2, #0	; 0x0
        2e2c2c:	eb63792f 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        2e2c30:	e1a0000d 	mov	r0, sp
        2e2c34:	eb638168 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2e2c38:	e3a05000 	mov	r5, #0	; 0x0
        2e2c3c:	e3300000 	teq	r0, #0	; 0x0
        2e2c40:	1a000019 	bne	2e2cac <TFontPart::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0xbc>
        2e2c44:	e3a07001 	mov	r7, #1	; 0x1
        2e2c48:	e59d0008 	ldr	r0, [sp, #8]
        2e2c4c:	e5900000 	ldr	r0, [r0]
        2e2c50:	eb637d3d 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2c54:	e1a04000 	mov	r4, r0
        2e2c58:	e5900000 	ldr	r0, [r0]
        2e2c5c:	e1a01005 	mov	r1, r5
        2e2c60:	eb63857b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2e2c64:	e59d1030 	ldr	r1, [sp, #48]
        2e2c68:	e5810000 	str	r0, [r1]
        2e2c6c:	e1a01007 	mov	r1, r7
        2e2c70:	e5940000 	ldr	r0, [r4]
        2e2c74:	eb638576 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2e2c78:	e59d1034 	ldr	r1, [sp, #52]
        2e2c7c:	e5810000 	str	r0, [r1]
        2e2c80:	e28d1034 	add	r1, sp, #52	; 0x34
        2e2c84:	e28d0030 	add	r0, sp, #48	; 0x30
        2e2c88:	eb638da5 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
        2e2c8c:	e1a00004 	mov	r0, r4
        2e2c90:	eb638149 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2c94:	e1a0000d 	mov	r0, sp
        2e2c98:	eb638992 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        2e2c9c:	e1a0000d 	mov	r0, sp
        2e2ca0:	eb63814d 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2e2ca4:	e3300000 	teq	r0, #0	; 0x0
        2e2ca8:	0affffe6 	beq	2e2c48 <TFontPart::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0x58>
        2e2cac:	eb61e015 	bl	1b5ad08 <$FlushFontCache(void)>
        2e2cb0:	e1a0000d 	mov	r0, sp
        2e2cb4:	e3a01000 	mov	r1, #0	; 0x0
        2e2cb8:	e1a0e00f 	mov	lr, pc
        2e2cbc:	e59df000 	ldr	pc, [sp]
        2e2cc0:	e59d0030 	ldr	r0, [sp, #48]
        2e2cc4:	eb63813c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2cc8:	e59d0034 	ldr	r0, [sp, #52]
        2e2ccc:	eb63813a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2cd0:	e1a00006 	mov	r0, r6
        2e2cd4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

