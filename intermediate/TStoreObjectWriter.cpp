#include "include/TStoreObjectWriter.h"

/**
 * Symbol: TStoreObjectWriter::__ct(RefVar const &, TStoreWrapper *, unsigned long)
 * Address: 002dd7b8
 */
TStoreObjectWriter::TStoreObjectWriter(RefVar const &, TStoreWrapper *, unsigned long) {
    /*
        2dd7b8:	e1a0c00d 	mov	ip, sp
        2dd7bc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2dd7c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd7c4:	e1b04000 	movs	r4, r0
        2dd7c8:	e1a05001 	mov	r5, r1
        2dd7cc:	e1a07002 	mov	r7, r2
        2dd7d0:	e1a06003 	mov	r6, r3
        2dd7d4:	1a000005 	bne	2dd7f0 <TStoreObjectWriter::__ct(RefVar const &, TStoreWrapper *, unsigned long)+0x38>
        2dd7d8:	e3a00e4b 	mov	r0, #1200	; 0x4b0
        2dd7dc:	eb63c3d5 	bl	1bce738 <$__nw(unsigned int)>
        2dd7e0:	e1b04000 	movs	r4, r0
        2dd7e4:	1a000001 	bne	2dd7f0 <TStoreObjectWriter::__ct(RefVar const &, TStoreWrapper *, unsigned long)+0x38>
        2dd7e8:	e1a00004 	mov	r0, r4
        2dd7ec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2dd7f0:	e3a00002 	mov	r0, #2	; 0x2
        2dd7f4:	eb639254 	bl	1bc214c <$AllocateRefHandle(long)>
        2dd7f8:	e5840000 	str	r0, [r4]
        2dd7fc:	e2840004 	add	r0, r4, #4	; 0x4
        2dd800:	eb5d797b 	bl	1a3bdf4 <TRefStack::$__ct(void)>
        2dd804:	e5950000 	ldr	r0, [r5]
        2dd808:	e5900000 	ldr	r0, [r0]
        2dd80c:	eb63924e 	bl	1bc214c <$AllocateRefHandle(long)>
        2dd810:	e5840018 	str	r0, [r4, #24]	; fField24
        2dd814:	e2840024 	add	r0, r4, #36	; 0x24
        2dd818:	eb5dc7ed 	bl	1a4f7d4 <TStoreWritePipe::$__ct(void)>
        2dd81c:	e2840f95 	add	r0, r4, #596	; 0x254
        2dd820:	eb5dc7eb 	bl	1a4f7d4 <TStoreWritePipe::$__ct(void)>
        2dd824:	e5950000 	ldr	r0, [r5]
        2dd828:	e5900000 	ldr	r0, [r0]
        2dd82c:	e5941000 	ldr	r1, [r4]
        2dd830:	e5810000 	str	r0, [r1]
        2dd834:	e3a05000 	mov	r5, #0	; 0x0
        2dd838:	e5845488 	str	r5, [r4, #1160]	; fField1160
        2dd83c:	e5847014 	str	r7, [r4, #20]	; fField20
        2dd840:	e5845490 	str	r5, [r4, #1168]	; fField1168
        2dd844:	e58454a0 	str	r5, [r4, #1184]	; fField1184
        2dd848:	e584601c 	str	r6, [r4, #28]	; fField28
        2dd84c:	e584548c 	str	r5, [r4, #1164]	; fField1164
        2dd850:	e59f0038 	ldr	r0, [pc, #38]	; 2dd890 <TStoreObjectWriter::__ct(RefVar const &, TStoreWrapper *, unsigned long)+0xd8>
        2dd854:	e5d01000 	ldrb	r1, [r0]
        2dd858:	e3310000 	teq	r1, #0	; 0x0
        2dd85c:	0a00000d 	beq	2dd898 <TStoreObjectWriter::__ct(RefVar const &, TStoreWrapper *, unsigned long)+0xe0>
        2dd860:	e3a00000 	mov	r0, #0	; 0x0
        2dd864:	eb5dc3b0 	bl	1a4e72c <TPrecedentsForWriting::$__ct(void)>
        2dd868:	e5840484 	str	r0, [r4, #1156]	; fField1156
        2dd86c:	e3300000 	teq	r0, #0	; 0x0
        2dd870:	1a00000d 	bne	2dd8ac <TStoreObjectWriter::__ct(RefVar const &, TStoreWrapper *, unsigned long)+0xf4>
        2dd874:	e59f0018 	ldr	r0, [pc, #18]	; 2dd894 <TStoreObjectWriter::__ct(RefVar const &, TStoreWrapper *, unsigned long)+0xdc>
        2dd878:	e5900000 	ldr	r0, [r0]
        2dd87c:	e3a02000 	mov	r2, #0	; 0x0
        2dd880:	e3a010e9 	mov	r1, #233	; 0xe9
        2dd884:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2dd888:	eb641643 	bl	1be319c <$Throw>
        2dd88c:	ea000006 	b	2dd8ac <TStoreObjectWriter::__ct(RefVar const &, TStoreWrapper *, unsigned long)+0xf4>
        2dd890:	0c105988 	ldceq	9, cr5, [r0], -#544
        2dd894:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2dd898:	e59f1020 	ldr	r1, [pc, #20]	; 2dd8c0 <TStoreObjectWriter::__ct(RefVar const &, TStoreWrapper *, unsigned long)+0x108>	; fField20
        2dd89c:	e5911000 	ldr	r1, [r1]
        2dd8a0:	e5841484 	str	r1, [r4, #1156]	; fField1156
        2dd8a4:	e3a01001 	mov	r1, #1	; 0x1
        2dd8a8:	e5c01000 	strb	r1, [r0]
        2dd8ac:	e58454a8 	str	r5, [r4, #1192]	; fField1192
        2dd8b0:	e5c454ac 	strb	r5, [r4, #1196]
        2dd8b4:	e5c454ad 	strb	r5, [r4, #1197]	; fField1197
        2dd8b8:	e5c454ae 	strb	r5, [r4, #1198]	; fField1198
        2dd8bc:	eaffffc9 	b	2dd7e8 <TStoreObjectWriter::__ct(RefVar const &, TStoreWrapper *, unsigned long)+0x30>
        2dd8c0:	0c105980 	ldceq	9, cr5, [r0], -#512
    */
}

/**
 * Symbol: TStoreObjectWriter::__dt(void)
 * Address: 002dd8c4
 */
TStoreObjectWriter::~TStoreObjectWriter(void) {
    /*
        2dd8c4:	e1a0c00d 	mov	ip, sp
        2dd8c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2dd8cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd8d0:	e1a04000 	mov	r4, r0
        2dd8d4:	e1a05001 	mov	r5, r1
        2dd8d8:	e590048c 	ldr	r0, [r0, #1164]	; fField1164
        2dd8dc:	e2846024 	add	r6, r4, #36	; 0x24
        2dd8e0:	e3300000 	teq	r0, #0	; 0x0
        2dd8e4:	0a000006 	beq	2dd904 <TStoreObjectWriter::__dt(void)+0x40>
        2dd8e8:	e1a00006 	mov	r0, r6
        2dd8ec:	e3a01000 	mov	r1, #0	; 0x0
        2dd8f0:	eb5dc7ab 	bl	1a4f7a4 <TStoreWritePipe::$GetDataPtr(long)>
        2dd8f4:	e594148c 	ldr	r1, [r4, #1164]	; fField1164
        2dd8f8:	e1300001 	teq	r0, r1
        2dd8fc:	11a00001 	movne	r0, r1
        2dd900:	1b63bf76 	blne	1bcd6e0 <$__dl(void *)>
        2dd904:	e59404a8 	ldr	r0, [r4, #1192]	; fField1192
        2dd908:	e3300000 	teq	r0, #0	; 0x0
        2dd90c:	13a01001 	movne	r1, #1	; 0x1
        2dd910:	1b641a53 	blne	1be4264 <CDynamicArray::$__dt(void)>
        2dd914:	e5940484 	ldr	r0, [r4, #1156]	; fField1156
        2dd918:	e59f1020 	ldr	r1, [pc, #20]	; 2dd940 <TStoreObjectWriter::__dt(void)+0x7c>	; fField20
        2dd91c:	e5912000 	ldr	r2, [r1]
        2dd920:	e3a01000 	mov	r1, #0	; 0x0
        2dd924:	e1300002 	teq	r0, r2
        2dd928:	1a000006 	bne	2dd948 <TStoreObjectWriter::__dt(void)+0x84>
        2dd92c:	e59f0010 	ldr	r0, [pc, #10]	; 2dd944 <TStoreObjectWriter::__dt(void)+0x80>
        2dd930:	e5c01000 	strb	r1, [r0]
        2dd934:	e5940484 	ldr	r0, [r4, #1156]	; fField1156
        2dd938:	eb5dc37e 	bl	1a4e738 <TPrecedentsForWriting::$Reset(void)>
        2dd93c:	ea000004 	b	2dd954 <TStoreObjectWriter::__dt(void)+0x90>
        2dd940:	0c105980 	ldceq	9, cr5, [r0], -#512
        2dd944:	0c105988 	ldceq	9, cr5, [r0], -#544
        2dd948:	e3300000 	teq	r0, #0	; 0x0
        2dd94c:	13a01001 	movne	r1, #1	; 0x1
        2dd950:	1b5dc376 	blne	1a4e730 <TPrecedentsForWriting::$__dt(void)>
        2dd954:	e2840f95 	add	r0, r4, #596	; 0x254
        2dd958:	e3a01000 	mov	r1, #0	; 0x0
        2dd95c:	eb5d7d29 	bl	1a3ce08 <TStoreWritePipe::$__dt(void)>
        2dd960:	e1a00006 	mov	r0, r6
        2dd964:	e3a01000 	mov	r1, #0	; 0x0
        2dd968:	eb5d7d26 	bl	1a3ce08 <TStoreWritePipe::$__dt(void)>
        2dd96c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2dd970:	eb639611 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2dd974:	e2840004 	add	r0, r4, #4	; 0x4
        2dd978:	e3a01000 	mov	r1, #0	; 0x0
        2dd97c:	eb5df0d4 	bl	1a59cd4 <TRefStack::$__dt(void)>
        2dd980:	e5940000 	ldr	r0, [r4]
        2dd984:	eb63960c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2dd988:	e3150001 	tst	r5, #1	; 0x1
        2dd98c:	11a00004 	movne	r0, r4
        2dd990:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        2dd994:	1a63bf51 	bne	1bcd6e0 <$__dl(void *)>
        2dd998:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreObjectWriter::Write(void)
 * Address: 002dd99c
 */
TStoreObjectWriter::Write(void) {
    /*
        2dd99c:	e1a0c00d 	mov	ip, sp
        2dd9a0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2dd9a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd9a8:	e1a04000 	mov	r4, r0
        2dd9ac:	e5900488 	ldr	r0, [r0, #1160]	; fField1160
        2dd9b0:	e3300000 	teq	r0, #0	; 0x0
        2dd9b4:	01a00004 	moveq	r0, r4
        2dd9b8:	0b5d91e0 	bleq	1a42140 <TStoreObjectWriter::$Prescan(void)>
        2dd9bc:	e59f00b0 	ldr	r0, [pc, #b0]	; 2dda74 <TStoreObjectWriter::Write(void)+0xd8>
        2dd9c0:	e59fa0b0 	ldr	sl, [pc, #b0]	; 2dda78 <TStoreObjectWriter::Write(void)+0xdc>
        2dd9c4:	e59a1004 	ldr	r1, [sl, #4]
        2dd9c8:	e7903101 	ldr	r3, [r0, r1, lsl #2]
        2dd9cc:	e28420a4 	add	r2, r4, #164	; 0xa4
        2dd9d0:	e2822b01 	add	r2, r2, #1024	; 0x400
        2dd9d4:	e5940490 	ldr	r0, [r4, #1168]	; fField1168
        2dd9d8:	e1a010a0 	mov	r1, r0, lsr #1
        2dd9dc:	e1a00003 	mov	r0, r3
        2dd9e0:	e1a0e00f 	mov	lr, pc
        2dd9e4:	e593f000 	ldr	pc, [r3]
        2dd9e8:	e5c40494 	strb	r0, [r4, #1172]	; fField1172
        2dd9ec:	e20000ff 	and	r0, r0, #255	; 0xff
        2dd9f0:	e3a01010 	mov	r1, #16	; 0x10
        2dd9f4:	e0817180 	add	r7, r1, r0, lsl #3
        2dd9f8:	e5940488 	ldr	r0, [r4, #1160]	; fField1160
        2dd9fc:	e0800007 	add	r0, r0, r7
        2dda00:	e5840488 	str	r0, [r4, #1160]	; fField1160
        2dda04:	e3e05000 	mvn	r5, #0	; 0x0
        2dda08:	e594101c 	ldr	r1, [r4, #28]	; fField28
        2dda0c:	e3710001 	cmn	r1, #1	; 0x1
        2dda10:	0a000019 	beq	2dda7c <TStoreObjectWriter::Write(void)+0xe0>
        2dda14:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2dda18:	e2842020 	add	r2, r4, #32	; 0x20
        2dda1c:	e3a03004 	mov	r3, #4	; 0x4
        2dda20:	e92d0008 	stmdb	sp!, {r3}
        2dda24:	e590007c 	ldr	r0, [r0, #124]
        2dda28:	e1a03002 	mov	r3, r2
        2dda2c:	e3a02008 	mov	r2, #8	; 0x8
        2dda30:	eb6091c2 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2dda34:	e28dd004 	add	sp, sp, #4	; 0x4
        2dda38:	e3300000 	teq	r0, #0	; 0x0
        2dda3c:	1b5d7cf9 	blne	1a3ce28 <$_OSErr(long)>
        2dda40:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2dda44:	e3300000 	teq	r0, #0	; 0x0
        2dda48:	0a00000b 	beq	2dda7c <TStoreObjectWriter::Write(void)+0xe0>
        2dda4c:	e5941490 	ldr	r1, [r4, #1168]	; fField1168
        2dda50:	e3310000 	teq	r1, #0	; 0x0
        2dda54:	1a000009 	bne	2dda80 <TStoreObjectWriter::Write(void)+0xe4>
        2dda58:	e1a01000 	mov	r1, r0
        2dda5c:	e5942014 	ldr	r2, [r4, #20]	; fField20
        2dda60:	e5b2007c 	ldr	r0, [r2, #124]!
        2dda64:	eb606433 	bl	1af6b38 <TStore::$DeleteObject(unsigned long)>
        2dda68:	e3300000 	teq	r0, #0	; 0x0
        2dda6c:	1b5d7ced 	blne	1a3ce28 <$_OSErr(long)>
        2dda70:	ea000002 	b	2dda80 <TStoreObjectWriter::Write(void)+0xe4>
        2dda74:	0c107998 	ldceq	9, cr7, [r0], -#608
        2dda78:	0c1053f0 	ldceq	3, cr5, [r0], -#960
        2dda7c:	e5845020 	str	r5, [r4, #32]	; fField32
        2dda80:	e5940484 	ldr	r0, [r4, #1156]	; fField1156
        2dda84:	eb5dc32b 	bl	1a4e738 <TPrecedentsForWriting::$Reset(void)>
        2dda88:	e3a03001 	mov	r3, #1	; 0x1
        2dda8c:	e92d0008 	stmdb	sp!, {r3}
        2dda90:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2dda94:	e594201c 	ldr	r2, [r4, #28]	; fField28
        2dda98:	e5943488 	ldr	r3, [r4, #1160]	; fField1160
        2dda9c:	e2840024 	add	r0, r4, #36	; 0x24
        2ddaa0:	e1a06000 	mov	r6, r0
        2ddaa4:	eb5dae80 	bl	1a494ac <TStoreWritePipe::$Init(TStoreWrapper *, unsigned long, long, CompressionType)>
        2ddaa8:	e28dd004 	add	sp, sp, #4	; 0x4
        2ddaac:	e5940490 	ldr	r0, [r4, #1168]	; fField1168
        2ddab0:	e2845f95 	add	r5, r4, #596	; 0x254
        2ddab4:	e3300000 	teq	r0, #0	; 0x0
        2ddab8:	0a000007 	beq	2ddadc <TStoreObjectWriter::Write(void)+0x140>
        2ddabc:	e3a03002 	mov	r3, #2	; 0x2
        2ddac0:	e92d0008 	stmdb	sp!, {r3}
        2ddac4:	e2803004 	add	r3, r0, #4	; 0x4
        2ddac8:	e1a00005 	mov	r0, r5
        2ddacc:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2ddad0:	e5942020 	ldr	r2, [r4, #32]	; fField32
        2ddad4:	eb5dae74 	bl	1a494ac <TStoreWritePipe::$Init(TStoreWrapper *, unsigned long, long, CompressionType)>
        2ddad8:	e28dd004 	add	sp, sp, #4	; 0x4
        2ddadc:	e1a00006 	mov	r0, r6
        2ddae0:	e3a01000 	mov	r1, #0	; 0x0
        2ddae4:	eb5dc72e 	bl	1a4f7a4 <TStoreWritePipe::$GetDataPtr(long)>
        2ddae8:	e584048c 	str	r0, [r4, #1164]	; fField1164
        2ddaec:	e3300000 	teq	r0, #0	; 0x0
        2ddaf0:	1a00000d 	bne	2ddb2c <TStoreObjectWriter::Write(void)+0x190>
        2ddaf4:	e1a00007 	mov	r0, r7
        2ddaf8:	eb63c30e 	bl	1bce738 <$__nw(unsigned int)>
        2ddafc:	e584048c 	str	r0, [r4, #1164]	; fField1164
        2ddb00:	e3300000 	teq	r0, #0	; 0x0
        2ddb04:	1a000005 	bne	2ddb20 <TStoreObjectWriter::Write(void)+0x184>
        2ddb08:	e59f0018 	ldr	r0, [pc, #18]	; 2ddb28 <TStoreObjectWriter::Write(void)+0x18c>
        2ddb0c:	e5900000 	ldr	r0, [r0]
        2ddb10:	e3a02000 	mov	r2, #0	; 0x0
        2ddb14:	e3a010e9 	mov	r1, #233	; 0xe9
        2ddb18:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2ddb1c:	eb64159e 	bl	1be319c <$Throw>
        2ddb20:	e3a09001 	mov	r9, #1	; 0x1
        2ddb24:	ea000001 	b	2ddb30 <TStoreObjectWriter::Write(void)+0x194>
        2ddb28:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2ddb2c:	e3a09000 	mov	r9, #0	; 0x0
        2ddb30:	e594048c 	ldr	r0, [r4, #1164]	; fField1164
        2ddb34:	e2800010 	add	r0, r0, #16	; 0x10
        2ddb38:	e5840498 	str	r0, [r4, #1176]	; fField1176
        2ddb3c:	e584049c 	str	r0, [r4, #1180]	; fField1180
        2ddb40:	eb5d80d3 	bl	1a3de94 <$ClearHintBits(long *)>
        2ddb44:	e1a00006 	mov	r0, r6
        2ddb48:	e1a01007 	mov	r1, r7
        2ddb4c:	eb5dae57 	bl	1a494b0 <TStoreWritePipe::$SetPosition(long)>
        2ddb50:	e1a00004 	mov	r0, r4
        2ddb54:	eb5d9598 	bl	1a431bc <TStoreObjectWriter::$Scan(void)>
        2ddb58:	e5940490 	ldr	r0, [r4, #1168]	; fField1168
        2ddb5c:	e3300000 	teq	r0, #0	; 0x0
        2ddb60:	0a000004 	beq	2ddb78 <TStoreObjectWriter::Write(void)+0x1dc>
        2ddb64:	e1a00005 	mov	r0, r5
        2ddb68:	eb5d80d0 	bl	1a3deb0 <TStoreWritePipe::$Complete(void)>
        2ddb6c:	e5b50004 	ldr	r0, [r5, #4]!
        2ddb70:	e5840020 	str	r0, [r4, #32]	; fField32
        2ddb74:	ea000001 	b	2ddb80 <TStoreObjectWriter::Write(void)+0x1e4>
        2ddb78:	e3a08000 	mov	r8, #0	; 0x0
        2ddb7c:	e5848020 	str	r8, [r4, #32]	; fField32
        2ddb80:	e5941498 	ldr	r1, [r4, #1176]	; fField1176
        2ddb84:	e5d40494 	ldrb	r0, [r4, #1172]	; fField1172
        2ddb88:	e0810180 	add	r0, r1, r0, lsl #3
        2ddb8c:	e2401008 	sub	r1, r0, #8	; 0x8
        2ddb90:	e594049c 	ldr	r0, [r4, #1180]	; fField1180
        2ddb94:	e1510000 	cmp	r1, r0
        2ddb98:	9a000008 	bls	2ddbc0 <TStoreObjectWriter::Write(void)+0x224>
        2ddb9c:	e1a00004 	mov	r0, r4
        2ddba0:	eb5d9156 	bl	1a42100 <TStoreObjectWriter::$NextHintChunk(void)>
        2ddba4:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
        2ddba8:	e5d41494 	ldrb	r1, [r4, #1172]	; fField1172
        2ddbac:	e0800181 	add	r0, r0, r1, lsl #3
        2ddbb0:	e2401008 	sub	r1, r0, #8	; 0x8
        2ddbb4:	e594049c 	ldr	r0, [r4, #1180]	; fField1180
        2ddbb8:	e1510000 	cmp	r1, r0
        2ddbbc:	8afffff6 	bhi	2ddb9c <TStoreObjectWriter::Write(void)+0x200>
        2ddbc0:	e594548c 	ldr	r5, [r4, #1164]	; fField1164
        2ddbc4:	e2840018 	add	r0, r4, #24	; 0x18
        2ddbc8:	e1a08000 	mov	r8, r0
        2ddbcc:	e5900000 	ldr	r0, [r0]
        2ddbd0:	e5900000 	ldr	r0, [r0]
        2ddbd4:	eb639dc5 	bl	1bc52f0 <$ObjectFlags(long)>
        2ddbd8:	e2000003 	and	r0, r0, #3	; 0x3
        2ddbdc:	e3300003 	teq	r0, #3	; 0x3
        2ddbe0:	1a000020 	bne	2ddc68 <TStoreObjectWriter::Write(void)+0x2cc>
        2ddbe4:	e5980000 	ldr	r0, [r8]
        2ddbe8:	e5900000 	ldr	r0, [r0]
        2ddbec:	e59f1024 	ldr	r1, [pc, #24]	; 2ddc18 <TStoreObjectWriter::Write(void)+0x27c>	; fField24
        2ddbf0:	e5911000 	ldr	r1, [r1]
        2ddbf4:	e5911000 	ldr	r1, [r1]
        2ddbf8:	eb639998 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2ddbfc:	e3300002 	teq	r0, #2	; 0x2
        2ddc00:	0a000005 	beq	2ddc1c <TStoreObjectWriter::Write(void)+0x280>
        2ddc04:	e3100003 	tst	r0, #3	; 0x3
        2ddc08:	01a00140 	moveq	r0, r0, asr #2
        2ddc0c:	0a000003 	beq	2ddc20 <TStoreObjectWriter::Write(void)+0x284>
        2ddc10:	eb639141 	bl	1bc211c <$_RINTError(long)>
        2ddc14:	ea000001 	b	2ddc20 <TStoreObjectWriter::Write(void)+0x284>
        2ddc18:	006853d0 	ldreqd	r5, [r8], -#48
        2ddc1c:	e3e00000 	mvn	r0, #0	; 0x0
        2ddc20:	e5850000 	str	r0, [r5]
        2ddc24:	e5980000 	ldr	r0, [r8]
        2ddc28:	e5900000 	ldr	r0, [r0]
        2ddc2c:	e59f1028 	ldr	r1, [pc, #28]	; 2ddc5c <TStoreObjectWriter::Write(void)+0x2c0>	; fField28
        2ddc30:	e5911000 	ldr	r1, [r1]
        2ddc34:	e5911000 	ldr	r1, [r1]
        2ddc38:	eb639988 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2ddc3c:	e3300002 	teq	r0, #2	; 0x2
        2ddc40:	0a000006 	beq	2ddc60 <TStoreObjectWriter::Write(void)+0x2c4>
        2ddc44:	e3100003 	tst	r0, #3	; 0x3
        2ddc48:	01a00140 	moveq	r0, r0, asr #2
        2ddc4c:	0a000000 	beq	2ddc54 <TStoreObjectWriter::Write(void)+0x2b8>
        2ddc50:	eb639131 	bl	1bc211c <$_RINTError(long)>
        2ddc54:	e3c00103 	bic	r0, r0, #-1073741824	; 0xc0000000
        2ddc58:	ea000001 	b	2ddc64 <TStoreObjectWriter::Write(void)+0x2c8>
        2ddc5c:	00685360 	rsbeq	r5, r8, r0, ror #6
        2ddc60:	e3e00000 	mvn	r0, #0	; 0x0
        2ddc64:	e5850004 	str	r0, [r5, #4]
        2ddc68:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2ddc6c:	e5850008 	str	r0, [r5, #8]	; fField8
        2ddc70:	e5d40494 	ldrb	r0, [r4, #1172]	; fField1172
        2ddc74:	e5c5000c 	strb	r0, [r5, #12]
        2ddc78:	e5940490 	ldr	r0, [r4, #1168]	; fField1168
        2ddc7c:	e5c5000f 	strb	r0, [r5, #15]
        2ddc80:	e1a00440 	mov	r0, r0, asr #8
        2ddc84:	e5c5000e 	strb	r0, [r5, #14]
        2ddc88:	e3a08000 	mov	r8, #0	; 0x0
        2ddc8c:	e5c5800d 	strb	r8, [r5, #13]
        2ddc90:	e1a00005 	mov	r0, r5
        2ddc94:	e5ba1004 	ldr	r1, [sl, #4]!
        2ddc98:	eb5e0d07 	bl	1a610bc <StoreObjectHeader::$SetHintsHandlerId(int)>
        2ddc9c:	e5d404ad 	ldrb	r0, [r4, #1197]	; fField1197
        2ddca0:	e3300000 	teq	r0, #0	; 0x0
        2ddca4:	0a000007 	beq	2ddcc8 <TStoreObjectWriter::Write(void)+0x32c>
        2ddca8:	e5d5000d 	ldrb	r0, [r5, #13]
        2ddcac:	e3800001 	orr	r0, r0, #1	; 0x1
        2ddcb0:	e5c5000d 	strb	r0, [r5, #13]
        2ddcb4:	e5d404ae 	ldrb	r0, [r4, #1198]	; fField1198
        2ddcb8:	e3300000 	teq	r0, #0	; 0x0
        2ddcbc:	15d5000d 	ldrneb	r0, [r5, #13]
        2ddcc0:	13800004 	orrne	r0, r0, #4	; 0x4
        2ddcc4:	15c5000d 	strneb	r0, [r5, #13]
        2ddcc8:	e1a00006 	mov	r0, r6
        2ddccc:	eb5d8077 	bl	1a3deb0 <TStoreWritePipe::$Complete(void)>
        2ddcd0:	e5b61004 	ldr	r1, [r6, #4]!
        2ddcd4:	e3390000 	teq	r9, #0	; 0x0
        2ddcd8:	e584101c 	str	r1, [r4, #28]	; fField28
        2ddcdc:	0a00000a 	beq	2ddd0c <TStoreObjectWriter::Write(void)+0x370>
        2ddce0:	e1a03007 	mov	r3, r7
        2ddce4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2ddce8:	e594248c 	ldr	r2, [r4, #1164]	; fField1164
        2ddcec:	e92d0008 	stmdb	sp!, {r3}
        2ddcf0:	e590007c 	ldr	r0, [r0, #124]
        2ddcf4:	e1a03002 	mov	r3, r2
        2ddcf8:	e1a02008 	mov	r2, r8
        2ddcfc:	eb60b1ff 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        2ddd00:	e28dd004 	add	sp, sp, #4	; 0x4
        2ddd04:	e3300000 	teq	r0, #0	; 0x0
        2ddd08:	1b5d7c46 	blne	1a3ce28 <$_OSErr(long)>
        2ddd0c:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        2ddd10:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreObjectWriter::NextHintChunk(void)
 * Address: 002ddd14
 */
TStoreObjectWriter::NextHintChunk(void) {
    /*
        2ddd14:	e1a0c00d 	mov	ip, sp
        2ddd18:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2ddd1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ddd20:	e1a04000 	mov	r4, r0
        2ddd24:	e5900498 	ldr	r0, [r0, #1176]	; fField1176
        2ddd28:	e5d41494 	ldrb	r1, [r4, #1172]	; fField1172
        2ddd2c:	e1a01081 	mov	r1, r1, lsl #1
        2ddd30:	e0800101 	add	r0, r0, r1, lsl #2
        2ddd34:	e2401008 	sub	r1, r0, #8	; 0x8
        2ddd38:	e594049c 	ldr	r0, [r4, #1180]	; fField1180
        2ddd3c:	e1510000 	cmp	r1, r0
        2ddd40:	8a000004 	bhi	2ddd58 <TStoreObjectWriter::NextHintChunk(void)+0x44>
        2ddd44:	e3e01000 	mvn	r1, #0	; 0x0
        2ddd48:	e5a01004 	str	r1, [r0, #4]!
        2ddd4c:	e594049c 	ldr	r0, [r4, #1180]	; fField1180
        2ddd50:	e5801000 	str	r1, [r0]
        2ddd54:	ea000002 	b	2ddd64 <TStoreObjectWriter::NextHintChunk(void)+0x50>
        2ddd58:	e2800008 	add	r0, r0, #8	; 0x8
        2ddd5c:	e584049c 	str	r0, [r4, #1180]	; fField1180
        2ddd60:	eb5d804b 	bl	1a3de94 <$ClearHintBits(long *)>
        2ddd64:	e3a00000 	mov	r0, #0	; 0x0
        2ddd68:	e5a404a0 	str	r0, [r4, #1184]!	; fField1184
        2ddd6c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreObjectWriter::Prescan(void)
 * Address: 002ddd70
 */
TStoreObjectWriter::Prescan(void) {
    /*
        2ddd70:	ea5dadda 	b	1a494e0 <TStoreObjectWriter::$Prescan1(void)>
    */
}

/**
 * Symbol: TStoreObjectWriter::Prescan1(void)
 * Address: 002ddda4
 */
TStoreObjectWriter::Prescan1(void) {
    /*
        2ddda4:	e1a0c00d 	mov	ip, sp
        2ddda8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2dddac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dddb0:	e1a04000 	mov	r4, r0
        2dddb4:	e2800018 	add	r0, r0, #24	; 0x18
        2dddb8:	e1a05000 	mov	r5, r0
        2dddbc:	e5900000 	ldr	r0, [r0]
        2dddc0:	e5900000 	ldr	r0, [r0]
        2dddc4:	e3100001 	tst	r0, #1	; 0x1
        2dddc8:	e3a09001 	mov	r9, #1	; 0x1
        2dddcc:	e3a08005 	mov	r8, #5	; 0x5
        2dddd0:	0a0000eb 	beq	2de184 <TStoreObjectWriter::Prescan1(void)+0x3e0>
        2dddd4:	e1a01005 	mov	r1, r5
        2dddd8:	e5940484 	ldr	r0, [r4, #1156]	; fField1156
        2ddddc:	eb5dca8f 	bl	1a50820 <TPrecedentsForWriting::$Find(RefVar const &)>
        2ddde0:	e3700001 	cmn	r0, #1	; 0x1
        2ddde4:	0a000009 	beq	2dde10 <TStoreObjectWriter::Prescan1(void)+0x6c>
        2ddde8:	e5941488 	ldr	r1, [r4, #1160]	; fField1160
        2dddec:	e2811001 	add	r1, r1, #1	; 0x1
        2dddf0:	e3500000 	cmp	r0, #0	; 0x0
        2dddf4:	e5841488 	str	r1, [r4, #1160]	; fField1160
        2dddf8:	ba000001 	blt	2dde04 <TStoreObjectWriter::Prescan1(void)+0x60>
        2dddfc:	e35000fe 	cmp	r0, #254	; 0xfe
        2dde00:	da000000 	ble	2dde08 <TStoreObjectWriter::Prescan1(void)+0x64>
        2dde04:	e1a09008 	mov	r9, r8
        2dde08:	e0890001 	add	r0, r9, r1
        2dde0c:	ea00010a 	b	2de23c <TStoreObjectWriter::Prescan1(void)+0x498>
        2dde10:	e1a01005 	mov	r1, r5
        2dde14:	e5940484 	ldr	r0, [r4, #1156]	; fField1156
        2dde18:	eb5dc245 	bl	1a4e734 <TPrecedentsForWriting::$Append(RefVar const &)>
        2dde1c:	e5950000 	ldr	r0, [r5]
        2dde20:	e5900000 	ldr	r0, [r0]
        2dde24:	eb639d31 	bl	1bc52f0 <$ObjectFlags(long)>
        2dde28:	e3100001 	tst	r0, #1	; 0x1
        2dde2c:	e2846004 	add	r6, r4, #4	; 0x4
        2dde30:	0a00009c 	beq	2de0a8 <TStoreObjectWriter::Prescan1(void)+0x304>
        2dde34:	e3100002 	tst	r0, #2	; 0x2
        2dde38:	0a000053 	beq	2ddf8c <TStoreObjectWriter::Prescan1(void)+0x1e8>
        2dde3c:	e5950000 	ldr	r0, [r5]
        2dde40:	e5900000 	ldr	r0, [r0]
        2dde44:	e3a01000 	mov	r1, #0	; 0x0
        2dde48:	eb5d90b7 	bl	1a4212c <$PackSmallRect(long, long *)>
        2dde4c:	e3300000 	teq	r0, #0	; 0x0
        2dde50:	0a000002 	beq	2dde60 <TStoreObjectWriter::Prescan1(void)+0xbc>
        2dde54:	e5940488 	ldr	r0, [r4, #1160]	; fField1160
        2dde58:	e2800005 	add	r0, r0, #5	; 0x5
        2dde5c:	ea0000f6 	b	2de23c <TStoreObjectWriter::Prescan1(void)+0x498>
        2dde60:	e5940488 	ldr	r0, [r4, #1160]	; fField1160
        2dde64:	e2800005 	add	r0, r0, #5	; 0x5
        2dde68:	e5840488 	str	r0, [r4, #1160]	; fField1160
        2dde6c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2dde70:	e5950000 	ldr	r0, [r5]
        2dde74:	e5900000 	ldr	r0, [r0]
        2dde78:	eb639d0b 	bl	1bc52ac <$Length(long)>
        2dde7c:	e1a09000 	mov	r9, r0
        2dde80:	e5950000 	ldr	r0, [r5]
        2dde84:	e5900000 	ldr	r0, [r0]
        2dde88:	eb639d19 	bl	1bc52f4 <$ObjectPtr(long)>
        2dde8c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2dde90:	eb6390ad 	bl	1bc214c <$AllocateRefHandle(long)>
        2dde94:	e1a07000 	mov	r7, r0
        2dde98:	e59f00e0 	ldr	r0, [pc, #e0]	; 2ddf80 <TStoreObjectWriter::Prescan1(void)+0x1dc>
        2dde9c:	e5900000 	ldr	r0, [r0]
        2ddea0:	e5901000 	ldr	r1, [r0]
        2ddea4:	e5970000 	ldr	r0, [r7]
        2ddea8:	eb5d8429 	bl	1a3ef54 <$FindOffset__FlT1>
        2ddeac:	e58d0004 	str	r0, [sp, #4]
        2ddeb0:	e8960003 	ldmia	r6, {r0, r1}
        2ddeb4:	e1310000 	teq	r1, r0
        2ddeb8:	13e08000 	mvnne	r8, #0	; 0x0
        2ddebc:	13e00000 	mvnne	r0, #0	; 0x0
        2ddec0:	1a00000a 	bne	2ddef0 <TStoreObjectWriter::Prescan1(void)+0x14c>
        2ddec4:	e59f00b8 	ldr	r0, [pc, #b8]	; 2ddf84 <TStoreObjectWriter::Prescan1(void)+0x1e0>
        2ddec8:	e5900000 	ldr	r0, [r0]
        2ddecc:	e5901000 	ldr	r1, [r0]
        2dded0:	e5970000 	ldr	r0, [r7]
        2dded4:	eb5d841e 	bl	1a3ef54 <$FindOffset__FlT1>
        2dded8:	e1a08000 	mov	r8, r0
        2ddedc:	e59f00a4 	ldr	r0, [pc, #a4]	; 2ddf88 <TStoreObjectWriter::Prescan1(void)+0x1e4>
        2ddee0:	e5900000 	ldr	r0, [r0]
        2ddee4:	e5901000 	ldr	r1, [r0]
        2ddee8:	e5970000 	ldr	r0, [r7]
        2ddeec:	eb5d8418 	bl	1a3ef54 <$FindOffset__FlT1>
        2ddef0:	e58d0000 	str	r0, [sp]
        2ddef4:	e1a00007 	mov	r0, r7
        2ddef8:	eb6394af 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ddefc:	e3a07000 	mov	r7, #0	; 0x0
        2ddf00:	e3590000 	cmp	r9, #0	; 0x0
        2ddf04:	da00001c 	ble	2ddf7c <TStoreObjectWriter::Prescan1(void)+0x1d8>
        2ddf08:	e59d0004 	ldr	r0, [sp, #4]
        2ddf0c:	e1370000 	teq	r7, r0
        2ddf10:	11370008 	teqne	r7, r8
        2ddf14:	159d0000 	ldrne	r0, [sp]
        2ddf18:	11370000 	teqne	r7, r0
        2ddf1c:	0a000013 	beq	2ddf70 <TStoreObjectWriter::Prescan1(void)+0x1cc>
        2ddf20:	e5951000 	ldr	r1, [r5]
        2ddf24:	e5911000 	ldr	r1, [r1]
        2ddf28:	e5962000 	ldr	r2, [r6]
        2ddf2c:	e4821004 	str	r1, [r2], #4
        2ddf30:	e1a0a005 	mov	sl, r5
        2ddf34:	e1a01007 	mov	r1, r7
        2ddf38:	e5862000 	str	r2, [r6]
        2ddf3c:	e5950000 	ldr	r0, [r5]
        2ddf40:	e5900000 	ldr	r0, [r0]
        2ddf44:	eb6398c2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2ddf48:	e59a1000 	ldr	r1, [sl]
        2ddf4c:	e5810000 	str	r0, [r1]
        2ddf50:	e1a00004 	mov	r0, r4
        2ddf54:	eb5d9079 	bl	1a42140 <TStoreObjectWriter::$Prescan(void)>
        2ddf58:	e5962000 	ldr	r2, [r6]
        2ddf5c:	e2422004 	sub	r2, r2, #4	; 0x4
        2ddf60:	e5862000 	str	r2, [r6]
        2ddf64:	e5920000 	ldr	r0, [r2]
        2ddf68:	e5951000 	ldr	r1, [r5]
        2ddf6c:	e5810000 	str	r0, [r1]
        2ddf70:	e2877001 	add	r7, r7, #1	; 0x1
        2ddf74:	e1570009 	cmp	r7, r9
        2ddf78:	baffffe2 	blt	2ddf08 <TStoreObjectWriter::Prescan1(void)+0x164>
        2ddf7c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ddf80:	00685390 	streqb	r5, [r8], -#48
        2ddf84:	006853d0 	ldreqd	r5, [r8], -#48
        2ddf88:	00685360 	rsbeq	r5, r8, r0, ror #6
        2ddf8c:	e5940488 	ldr	r0, [r4, #1160]	; fField1160
        2ddf90:	e2800001 	add	r0, r0, #1	; 0x1
        2ddf94:	e5840488 	str	r0, [r4, #1160]	; fField1160
        2ddf98:	e5950000 	ldr	r0, [r5]
        2ddf9c:	e5900000 	ldr	r0, [r0]
        2ddfa0:	eb639cc1 	bl	1bc52ac <$Length(long)>
        2ddfa4:	e1b07000 	movs	r7, r0
        2ddfa8:	4a000001 	bmi	2ddfb4 <TStoreObjectWriter::Prescan1(void)+0x210>
        2ddfac:	e35700fe 	cmp	r7, #254	; 0xfe
        2ddfb0:	d1a08009 	movle	r8, r9
        2ddfb4:	e5940488 	ldr	r0, [r4, #1160]	; fField1160
        2ddfb8:	e0880000 	add	r0, r8, r0
        2ddfbc:	e5840488 	str	r0, [r4, #1160]	; fField1160
        2ddfc0:	e5950000 	ldr	r0, [r5]
        2ddfc4:	e5900000 	ldr	r0, [r0]
        2ddfc8:	eb639cc9 	bl	1bc52f4 <$ObjectPtr(long)>
        2ddfcc:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2ddfd0:	e59f10cc 	ldr	r1, [pc, #cc]	; 2de0a4 <TStoreObjectWriter::Prescan1(void)+0x300>
        2ddfd4:	e5911000 	ldr	r1, [r1]
        2ddfd8:	e5911000 	ldr	r1, [r1]
        2ddfdc:	eb639893 	bl	1bc4230 <$EQRef__FlT1>
        2ddfe0:	e3300000 	teq	r0, #0	; 0x0
        2ddfe4:	1a000013 	bne	2de038 <TStoreObjectWriter::Prescan1(void)+0x294>
        2ddfe8:	e5951000 	ldr	r1, [r5]
        2ddfec:	e5911000 	ldr	r1, [r1]
        2ddff0:	e5962000 	ldr	r2, [r6]
        2ddff4:	e4821004 	str	r1, [r2], #4
        2ddff8:	e1a08005 	mov	r8, r5
        2ddffc:	e5862000 	str	r2, [r6]
        2de000:	e5950000 	ldr	r0, [r5]
        2de004:	e5900000 	ldr	r0, [r0]
        2de008:	eb639cb9 	bl	1bc52f4 <$ObjectPtr(long)>
        2de00c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2de010:	e5981000 	ldr	r1, [r8]
        2de014:	e5810000 	str	r0, [r1]
        2de018:	e1a00004 	mov	r0, r4
        2de01c:	eb5d9047 	bl	1a42140 <TStoreObjectWriter::$Prescan(void)>
        2de020:	e5962000 	ldr	r2, [r6]
        2de024:	e2422004 	sub	r2, r2, #4	; 0x4
        2de028:	e5862000 	str	r2, [r6]
        2de02c:	e5920000 	ldr	r0, [r2]
        2de030:	e5951000 	ldr	r1, [r5]
        2de034:	e5810000 	str	r0, [r1]
        2de038:	e3a08000 	mov	r8, #0	; 0x0
        2de03c:	e3570000 	cmp	r7, #0	; 0x0
        2de040:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2de044:	e5951000 	ldr	r1, [r5]
        2de048:	e5911000 	ldr	r1, [r1]
        2de04c:	e5962000 	ldr	r2, [r6]
        2de050:	e4821004 	str	r1, [r2], #4
        2de054:	e1a09005 	mov	r9, r5
        2de058:	e1a01008 	mov	r1, r8
        2de05c:	e5862000 	str	r2, [r6]
        2de060:	e5950000 	ldr	r0, [r5]
        2de064:	e5900000 	ldr	r0, [r0]
        2de068:	eb639879 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2de06c:	e5991000 	ldr	r1, [r9]
        2de070:	e5810000 	str	r0, [r1]
        2de074:	e1a00004 	mov	r0, r4
        2de078:	eb5d9030 	bl	1a42140 <TStoreObjectWriter::$Prescan(void)>
        2de07c:	e5962000 	ldr	r2, [r6]
        2de080:	e2422004 	sub	r2, r2, #4	; 0x4
        2de084:	e5862000 	str	r2, [r6]
        2de088:	e5920000 	ldr	r0, [r2]
        2de08c:	e5951000 	ldr	r1, [r5]
        2de090:	e2888001 	add	r8, r8, #1	; 0x1
        2de094:	e1580007 	cmp	r8, r7
        2de098:	e5810000 	str	r0, [r1]
        2de09c:	baffffe8 	blt	2de044 <TStoreObjectWriter::Prescan1(void)+0x2a0>
        2de0a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2de0a4:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2de0a8:	e2000003 	and	r0, r0, #3	; 0x3
        2de0ac:	e3300002 	teq	r0, #2	; 0x2
        2de0b0:	05940488 	ldreq	r0, [r4, #1160]	; fField1160
        2de0b4:	02800009 	addeq	r0, r0, #9	; 0x9
        2de0b8:	0a00005f 	beq	2de23c <TStoreObjectWriter::Prescan1(void)+0x498>
        2de0bc:	e5950000 	ldr	r0, [r5]
        2de0c0:	e5900000 	ldr	r0, [r0]
        2de0c4:	eb639c76 	bl	1bc52a4 <$IsSymbol(long)>
        2de0c8:	e3300000 	teq	r0, #0	; 0x0
        2de0cc:	1affff60 	bne	2dde54 <TStoreObjectWriter::Prescan1(void)+0xb0>
        2de0d0:	e5940488 	ldr	r0, [r4, #1160]	; fField1160
        2de0d4:	e2800001 	add	r0, r0, #1	; 0x1
        2de0d8:	e5840488 	str	r0, [r4, #1160]	; fField1160
        2de0dc:	e5950000 	ldr	r0, [r5]
        2de0e0:	e5900000 	ldr	r0, [r0]
        2de0e4:	eb639c70 	bl	1bc52ac <$Length(long)>
        2de0e8:	e1b07000 	movs	r7, r0
        2de0ec:	4a000001 	bmi	2de0f8 <TStoreObjectWriter::Prescan1(void)+0x354>
        2de0f0:	e35700fe 	cmp	r7, #254	; 0xfe
        2de0f4:	d1a08009 	movle	r8, r9
        2de0f8:	e5940488 	ldr	r0, [r4, #1160]	; fField1160
        2de0fc:	e0880000 	add	r0, r8, r0
        2de100:	e5840488 	str	r0, [r4, #1160]	; fField1160
        2de104:	e5951000 	ldr	r1, [r5]
        2de108:	e5911000 	ldr	r1, [r1]
        2de10c:	e5962000 	ldr	r2, [r6]
        2de110:	e4821004 	str	r1, [r2], #4
        2de114:	e1a08005 	mov	r8, r5
        2de118:	e5862000 	str	r2, [r6]
        2de11c:	e5950000 	ldr	r0, [r5]
        2de120:	e5900000 	ldr	r0, [r0]
        2de124:	eb639c72 	bl	1bc52f4 <$ObjectPtr(long)>
        2de128:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2de12c:	e5981000 	ldr	r1, [r8]
        2de130:	e5810000 	str	r0, [r1]
        2de134:	e1a00004 	mov	r0, r4
        2de138:	eb5d9000 	bl	1a42140 <TStoreObjectWriter::$Prescan(void)>
        2de13c:	e5961000 	ldr	r1, [r6]
        2de140:	e2411004 	sub	r1, r1, #4	; 0x4
        2de144:	e5861000 	str	r1, [r6]
        2de148:	e5911000 	ldr	r1, [r1]
        2de14c:	e5950000 	ldr	r0, [r5]
        2de150:	e5801000 	str	r1, [r0]
        2de154:	e1a00005 	mov	r0, r5
        2de158:	e59f1020 	ldr	r1, [pc, #20]	; 2de180 <TStoreObjectWriter::Prescan1(void)+0x3dc>	; fField20
        2de15c:	eb639c4b 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
        2de160:	e3300000 	teq	r0, #0	; 0x0
        2de164:	15940490 	ldrne	r0, [r4, #1168]	; fField1168
        2de168:	10800007 	addne	r0, r0, r7
        2de16c:	15a40490 	strne	r0, [r4, #1168]!	; fField1168
        2de170:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2de174:	e5940488 	ldr	r0, [r4, #1160]	; fField1160
        2de178:	e0800007 	add	r0, r0, r7
        2de17c:	ea00002e 	b	2de23c <TStoreObjectWriter::Prescan1(void)+0x498>
        2de180:	006848d0 	ldreqd	r4, [r8], -#128
        2de184:	e3300002 	teq	r0, #2	; 0x2
        2de188:	05940488 	ldreq	r0, [r4, #1160]	; fField1160
        2de18c:	02800001 	addeq	r0, r0, #1	; 0x1
        2de190:	05840488 	streq	r0, [r4, #1160]	; fField1160
        2de194:	e5950000 	ldr	r0, [r5]
        2de198:	e5900000 	ldr	r0, [r0]
        2de19c:	e2001003 	and	r1, r0, #3	; 0x3
        2de1a0:	e3310002 	teq	r1, #2	; 0x2
        2de1a4:	01a01000 	moveq	r1, r0
        2de1a8:	03a00003 	moveq	r0, #3	; 0x3
        2de1ac:	00001141 	andeq	r1, r0, r1, asr #2
        2de1b0:	03310001 	teqeq	r1, #1	; 0x1
        2de1b4:	1a000016 	bne	2de214 <TStoreObjectWriter::Prescan1(void)+0x470>
        2de1b8:	e5941488 	ldr	r1, [r4, #1160]	; fField1160
        2de1bc:	e2811001 	add	r1, r1, #1	; 0x1
        2de1c0:	e5841488 	str	r1, [r4, #1160]	; fField1160
        2de1c4:	e5951000 	ldr	r1, [r5]
        2de1c8:	e5911000 	ldr	r1, [r1]
        2de1cc:	e2012003 	and	r2, r1, #3	; 0x3
        2de1d0:	e3320002 	teq	r2, #2	; 0x2
        2de1d4:	00000141 	andeq	r0, r0, r1, asr #2
        2de1d8:	03300001 	teqeq	r0, #1	; 0x1
        2de1dc:	01a00141 	moveq	r0, r1, asr #2
        2de1e0:	01a00140 	moveq	r0, r0, asr #2
        2de1e4:	01a00800 	moveq	r0, r0, lsl #16
        2de1e8:	01a00820 	moveq	r0, r0, lsr #16
        2de1ec:	0a000001 	beq	2de1f8 <TStoreObjectWriter::Prescan1(void)+0x454>
        2de1f0:	e1a00001 	mov	r0, r1
        2de1f4:	eb638fc7 	bl	1bc2118 <$_RCHARError(long)>
        2de1f8:	e1a00800 	mov	r0, r0, lsl #16
        2de1fc:	e1a00820 	mov	r0, r0, lsr #16
        2de200:	e35000ff 	cmp	r0, #255	; 0xff
        2de204:	e5940488 	ldr	r0, [r4, #1160]	; fField1160
        2de208:	c2800002 	addgt	r0, r0, #2	; 0x2
        2de20c:	d2800001 	addle	r0, r0, #1	; 0x1
        2de210:	ea000009 	b	2de23c <TStoreObjectWriter::Prescan1(void)+0x498>
        2de214:	e5940488 	ldr	r0, [r4, #1160]	; fField1160
        2de218:	e2800001 	add	r0, r0, #1	; 0x1
        2de21c:	e5840488 	str	r0, [r4, #1160]	; fField1160
        2de220:	e5951000 	ldr	r1, [r5]
        2de224:	e5911000 	ldr	r1, [r1]
        2de228:	e3510000 	cmp	r1, #0	; 0x0
        2de22c:	ba000001 	blt	2de238 <TStoreObjectWriter::Prescan1(void)+0x494>
        2de230:	e35100fe 	cmp	r1, #254	; 0xfe
        2de234:	d1a08009 	movle	r8, r9
        2de238:	e0880000 	add	r0, r8, r0
        2de23c:	e5a40488 	str	r0, [r4, #1160]!	; fField1160
        2de240:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreObjectWriter::Scan(void)
 * Address: 002de244
 */
TStoreObjectWriter::Scan(void) {
    /*
        2de244:	ea5daca7 	b	1a494e8 <TStoreObjectWriter::$Scan1(void)>
    */
}

/**
 * Symbol: TStoreObjectWriter::WriteLargeBinary(void)
 * Address: 002de248
 */
TStoreObjectWriter::WriteLargeBinary(void) {
    /*
        2de248:	e1a0c00d 	mov	ip, sp
        2de24c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2de250:	e24cb004 	sub	fp, ip, #4	; 0x4
        2de254:	e1a04000 	mov	r4, r0
        2de258:	e24dd004 	sub	sp, sp, #4	; 0x4
        2de25c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2de260:	e5900000 	ldr	r0, [r0]
        2de264:	eb638fb8 	bl	1bc214c <$AllocateRefHandle(long)>
        2de268:	e3a07001 	mov	r7, #1	; 0x1
        2de26c:	e58d0000 	str	r0, [sp]
        2de270:	e5c474ad 	strb	r7, [r4, #1197]	; fField1197
        2de274:	e59f10fc 	ldr	r1, [pc, #fc]	; 2de378 <TStoreObjectWriter::WriteLargeBinary(void)+0x130>
        2de278:	e1a0000d 	mov	r0, sp
        2de27c:	eb639c03 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
        2de280:	e5c404ae 	strb	r0, [r4, #1198]	; fField1198
        2de284:	e2840024 	add	r0, r4, #36	; 0x24
        2de288:	e1a06000 	mov	r6, r0
        2de28c:	e3a0100c 	mov	r1, #12	; 0xc
        2de290:	eb5dac88 	bl	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2de294:	e59d0000 	ldr	r0, [sp]
        2de298:	e5900000 	ldr	r0, [r0]
        2de29c:	eb639c14 	bl	1bc52f4 <$ObjectPtr(long)>
        2de2a0:	e2800010 	add	r0, r0, #16	; 0x10
        2de2a4:	e1a05000 	mov	r5, r0
        2de2a8:	eb5d9c13 	bl	1a452fc <LBData::$GetStore( const(void))>
        2de2ac:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2de2b0:	e1300001 	teq	r0, r1
        2de2b4:	1a00000b 	bne	2de2e8 <TStoreObjectWriter::WriteLargeBinary(void)+0xa0>
        2de2b8:	e5950008 	ldr	r0, [r5, #8]	; fField8
        2de2bc:	e3300002 	teq	r0, #2	; 0x2
        2de2c0:	0a000010 	beq	2de308 <TStoreObjectWriter::WriteLargeBinary(void)+0xc0>
        2de2c4:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2de2c8:	e3700001 	cmn	r0, #1	; 0x1
        2de2cc:	0a000005 	beq	2de2e8 <TStoreObjectWriter::WriteLargeBinary(void)+0xa0>
        2de2d0:	e5940000 	ldr	r0, [r4]
        2de2d4:	e5901000 	ldr	r1, [r0]
        2de2d8:	e1a00005 	mov	r0, r5
        2de2dc:	eb5da008 	bl	1a46304 <LBData::$IsSameEntry(long)>
        2de2e0:	e3300000 	teq	r0, #0	; 0x0
        2de2e4:	1a000007 	bne	2de308 <TStoreObjectWriter::WriteLargeBinary(void)+0xc0>
        2de2e8:	e1a0000d 	mov	r0, sp
        2de2ec:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2de2f0:	eb5d9bf4 	bl	1a452c8 <$DuplicateLargeBinary(RefVar const &, TStoreWrapper *)>
        2de2f4:	e59d1000 	ldr	r1, [sp]
        2de2f8:	e5810000 	str	r0, [r1]
        2de2fc:	eb639bfc 	bl	1bc52f4 <$ObjectPtr(long)>
        2de300:	e2805010 	add	r5, r0, #16	; 0x10
        2de304:	e5c474ac 	strb	r7, [r4, #1196]
        2de308:	e59404a8 	ldr	r0, [r4, #1192]	; fField1192
        2de30c:	e3300000 	teq	r0, #0	; 0x0
        2de310:	1a000002 	bne	2de320 <TStoreObjectWriter::WriteLargeBinary(void)+0xd8>
        2de314:	e3a00000 	mov	r0, #0	; 0x0
        2de318:	eb6413ae 	bl	1be31d8 <CDynamicArray::$__ct(void)>
        2de31c:	e58404a8 	str	r0, [r4, #1192]	; fField1192
        2de320:	e59404a8 	ldr	r0, [r4, #1192]	; fField1192
        2de324:	e2852004 	add	r2, r5, #4	; 0x4
        2de328:	e1a07002 	mov	r7, r2
        2de32c:	e3a03001 	mov	r3, #1	; 0x1
        2de330:	e5901000 	ldr	r1, [r0]
        2de334:	eb642c6f 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        2de338:	e5940000 	ldr	r0, [r4]
        2de33c:	e5900000 	ldr	r0, [r0]
        2de340:	e1a01007 	mov	r1, r7
        2de344:	e5850008 	str	r0, [r5, #8]	; fField8
        2de348:	e1a00006 	mov	r0, r6
        2de34c:	e3a02004 	mov	r2, #4	; 0x4
        2de350:	eb5d9bd0 	bl	1a45298 <TStoreWritePipe::$Write(char *, long)>
        2de354:	e285100c 	add	r1, r5, #12	; 0xc
        2de358:	e1a00006 	mov	r0, r6
        2de35c:	e3a02004 	mov	r2, #4	; 0x4
        2de360:	eb5d9bcc 	bl	1a45298 <TStoreWritePipe::$Write(char *, long)>
        2de364:	e1a0000d 	mov	r0, sp
        2de368:	eb5d9bdb 	bl	1a452dc <$CommitLargeBinary(RefVar const &)>
        2de36c:	e59d0000 	ldr	r0, [sp]
        2de370:	eb639391 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2de374:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2de378:	006848d0 	ldreqd	r4, [r8], -#128
    */
}

/**
 * Symbol: TStoreObjectWriter::Scan1(void)
 * Address: 002de37c
 */
TStoreObjectWriter::Scan1(void) {
    /*
        2de37c:	e1a0c00d 	mov	ip, sp
        2de380:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2de384:	e24cb004 	sub	fp, ip, #4	; 0x4
        2de388:	e1a04000 	mov	r4, r0
        2de38c:	e2800018 	add	r0, r0, #24	; 0x18
        2de390:	e1a05000 	mov	r5, r0
        2de394:	e5900000 	ldr	r0, [r0]
        2de398:	e5900000 	ldr	r0, [r0]
        2de39c:	e3100001 	tst	r0, #1	; 0x1
        2de3a0:	e2846024 	add	r6, r4, #36	; 0x24
        2de3a4:	0a000130 	beq	2de86c <TStoreObjectWriter::Scan1(void)+0x4f0>
        2de3a8:	e1a01005 	mov	r1, r5
        2de3ac:	e5940484 	ldr	r0, [r4, #1156]	; fField1156
        2de3b0:	eb5dc91a 	bl	1a50820 <TPrecedentsForWriting::$Find(RefVar const &)>
        2de3b4:	e1a07000 	mov	r7, r0
        2de3b8:	e3700001 	cmn	r0, #1	; 0x1
        2de3bc:	0a000005 	beq	2de3d8 <TStoreObjectWriter::Scan1(void)+0x5c>
        2de3c0:	e3a01009 	mov	r1, #9	; 0x9
        2de3c4:	e1a00006 	mov	r0, r6
        2de3c8:	eb5dac3a 	bl	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2de3cc:	e1a00006 	mov	r0, r6
        2de3d0:	e1a01007 	mov	r1, r7
        2de3d4:	ea00014c 	b	2de90c <TStoreObjectWriter::Scan1(void)+0x590>
        2de3d8:	e5950000 	ldr	r0, [r5]
        2de3dc:	e5900000 	ldr	r0, [r0]
        2de3e0:	eb5d979e 	bl	1a44260 <$UndirtyObject(long)>
        2de3e4:	e1a01005 	mov	r1, r5
        2de3e8:	e5940484 	ldr	r0, [r4, #1156]	; fField1156
        2de3ec:	eb5dc0d0 	bl	1a4e734 <TPrecedentsForWriting::$Append(RefVar const &)>
        2de3f0:	e5950000 	ldr	r0, [r5]
        2de3f4:	e5900000 	ldr	r0, [r0]
        2de3f8:	eb639bbc 	bl	1bc52f0 <$ObjectFlags(long)>
        2de3fc:	e3100001 	tst	r0, #1	; 0x1
        2de400:	e2847004 	add	r7, r4, #4	; 0x4
        2de404:	0a000089 	beq	2de630 <TStoreObjectWriter::Scan1(void)+0x2b4>
        2de408:	e3100002 	tst	r0, #2	; 0x2
        2de40c:	0a000040 	beq	2de514 <TStoreObjectWriter::Scan1(void)+0x198>
        2de410:	e24dd004 	sub	sp, sp, #4	; 0x4
        2de414:	e5950000 	ldr	r0, [r5]
        2de418:	e5900000 	ldr	r0, [r0]
        2de41c:	e1a0100d 	mov	r1, sp
        2de420:	eb5d8f41 	bl	1a4212c <$PackSmallRect(long, long *)>
        2de424:	e3300000 	teq	r0, #0	; 0x0
        2de428:	0a000007 	beq	2de44c <TStoreObjectWriter::Scan1(void)+0xd0>
        2de42c:	e3a0100b 	mov	r1, #11	; 0xb
        2de430:	e1a00006 	mov	r0, r6
        2de434:	eb5dac1f 	bl	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2de438:	e1a00006 	mov	r0, r6
        2de43c:	e1a0100d 	mov	r1, sp
        2de440:	e3a02004 	mov	r2, #4	; 0x4
        2de444:	eb5d9b93 	bl	1a45298 <TStoreWritePipe::$Write(char *, long)>
        2de448:	ea000030 	b	2de510 <TStoreObjectWriter::Scan1(void)+0x194>
        2de44c:	e3a01006 	mov	r1, #6	; 0x6
        2de450:	e1a00006 	mov	r0, r6
        2de454:	eb5dac17 	bl	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2de458:	e24dd008 	sub	sp, sp, #8	; 0x8
        2de45c:	e28d3004 	add	r3, sp, #4	; 0x4
        2de460:	e92d0008 	stmdb	sp!, {r3}
        2de464:	e8970003 	ldmia	r7, {r0, r1}
        2de468:	e1310000 	teq	r1, r0
        2de46c:	13a02000 	movne	r2, #0	; 0x0
        2de470:	03a02001 	moveq	r2, #1	; 0x1
        2de474:	e1a01005 	mov	r1, r5
        2de478:	e28d3004 	add	r3, sp, #4	; 0x4
        2de47c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2de480:	eb5dc8e9 	bl	1a5082c <TStoreWrapper::$FrameToMapReference(RefVar const &, unsigned char, long *, long **)>
        2de484:	e1a01000 	mov	r1, r0
        2de488:	e28dd004 	add	sp, sp, #4	; 0x4
        2de48c:	e1a00006 	mov	r0, r6
        2de490:	eb5d9b82 	bl	1a452a0 <$WriteReference(TStoreWritePipe &, long)>
        2de494:	e89d0101 	ldmia	sp, {r0, r8}
        2de498:	e2500001 	subs	r0, r0, #1	; 0x1
        2de49c:	e58d0000 	str	r0, [sp]
        2de4a0:	4a000017 	bmi	2de504 <TStoreObjectWriter::Scan1(void)+0x188>
        2de4a4:	e5951000 	ldr	r1, [r5]
        2de4a8:	e5911000 	ldr	r1, [r1]
        2de4ac:	e5972000 	ldr	r2, [r7]
        2de4b0:	e4821004 	str	r1, [r2], #4
        2de4b4:	e1a06005 	mov	r6, r5
        2de4b8:	e5872000 	str	r2, [r7]
        2de4bc:	e4981004 	ldr	r1, [r8], #4
        2de4c0:	e5950000 	ldr	r0, [r5]
        2de4c4:	e5900000 	ldr	r0, [r0]
        2de4c8:	eb639761 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2de4cc:	e5961000 	ldr	r1, [r6]
        2de4d0:	e5810000 	str	r0, [r1]
        2de4d4:	e1a00004 	mov	r0, r4
        2de4d8:	eb5d9337 	bl	1a431bc <TStoreObjectWriter::$Scan(void)>
        2de4dc:	e5972000 	ldr	r2, [r7]
        2de4e0:	e2422004 	sub	r2, r2, #4	; 0x4
        2de4e4:	e5872000 	str	r2, [r7]
        2de4e8:	e5920000 	ldr	r0, [r2]
        2de4ec:	e5951000 	ldr	r1, [r5]
        2de4f0:	e5810000 	str	r0, [r1]
        2de4f4:	e59d0000 	ldr	r0, [sp]
        2de4f8:	e2500001 	subs	r0, r0, #1	; 0x1
        2de4fc:	e58d0000 	str	r0, [sp]
        2de500:	5affffe7 	bpl	2de4a4 <TStoreObjectWriter::Scan1(void)+0x128>
        2de504:	e59d0004 	ldr	r0, [sp, #4]
        2de508:	eb63bc74 	bl	1bcd6e0 <$__dl(void *)>
        2de50c:	e28dd008 	add	sp, sp, #8	; 0x8
        2de510:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2de514:	e5950000 	ldr	r0, [r5]
        2de518:	e5900000 	ldr	r0, [r0]
        2de51c:	eb639b74 	bl	1bc52f4 <$ObjectPtr(long)>
        2de520:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2de524:	e59f1100 	ldr	r1, [pc, #100]	; 2de62c <TStoreObjectWriter::Scan1(void)+0x2b0>
        2de528:	e5911000 	ldr	r1, [r1]
        2de52c:	e5911000 	ldr	r1, [r1]
        2de530:	eb63973e 	bl	1bc4230 <$EQRef__FlT1>
        2de534:	e1b09000 	movs	r9, r0
        2de538:	03a00004 	moveq	r0, #4	; 0x4
        2de53c:	13a00005 	movne	r0, #5	; 0x5
        2de540:	e20010ff 	and	r1, r0, #255	; 0xff
        2de544:	e1a00006 	mov	r0, r6
        2de548:	eb5dabda 	bl	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2de54c:	e5950000 	ldr	r0, [r5]
        2de550:	e5900000 	ldr	r0, [r0]
        2de554:	eb639b54 	bl	1bc52ac <$Length(long)>
        2de558:	e1a08000 	mov	r8, r0
        2de55c:	e1a00006 	mov	r0, r6
        2de560:	e1a01008 	mov	r1, r8
        2de564:	eb5dabd4 	bl	1a494bc <TStoreWritePipe::$__ls(long)>
        2de568:	e3390000 	teq	r9, #0	; 0x0
        2de56c:	1a000013 	bne	2de5c0 <TStoreObjectWriter::Scan1(void)+0x244>
        2de570:	e5951000 	ldr	r1, [r5]
        2de574:	e5911000 	ldr	r1, [r1]
        2de578:	e5972000 	ldr	r2, [r7]
        2de57c:	e4821004 	str	r1, [r2], #4
        2de580:	e1a06005 	mov	r6, r5
        2de584:	e5872000 	str	r2, [r7]
        2de588:	e5950000 	ldr	r0, [r5]
        2de58c:	e5900000 	ldr	r0, [r0]
        2de590:	eb639b57 	bl	1bc52f4 <$ObjectPtr(long)>
        2de594:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2de598:	e5961000 	ldr	r1, [r6]
        2de59c:	e5810000 	str	r0, [r1]
        2de5a0:	e1a00004 	mov	r0, r4
        2de5a4:	eb5d9304 	bl	1a431bc <TStoreObjectWriter::$Scan(void)>
        2de5a8:	e5972000 	ldr	r2, [r7]
        2de5ac:	e2422004 	sub	r2, r2, #4	; 0x4
        2de5b0:	e5872000 	str	r2, [r7]
        2de5b4:	e5920000 	ldr	r0, [r2]
        2de5b8:	e5951000 	ldr	r1, [r5]
        2de5bc:	e5810000 	str	r0, [r1]
        2de5c0:	e3a06000 	mov	r6, #0	; 0x0
        2de5c4:	e3580000 	cmp	r8, #0	; 0x0
        2de5c8:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2de5cc:	e5951000 	ldr	r1, [r5]
        2de5d0:	e5911000 	ldr	r1, [r1]
        2de5d4:	e5972000 	ldr	r2, [r7]
        2de5d8:	e4821004 	str	r1, [r2], #4
        2de5dc:	e1a09005 	mov	r9, r5
        2de5e0:	e1a01006 	mov	r1, r6
        2de5e4:	e5872000 	str	r2, [r7]
        2de5e8:	e5950000 	ldr	r0, [r5]
        2de5ec:	e5900000 	ldr	r0, [r0]
        2de5f0:	eb639717 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2de5f4:	e5991000 	ldr	r1, [r9]
        2de5f8:	e5810000 	str	r0, [r1]
        2de5fc:	e1a00004 	mov	r0, r4
        2de600:	eb5d92ed 	bl	1a431bc <TStoreObjectWriter::$Scan(void)>
        2de604:	e5972000 	ldr	r2, [r7]
        2de608:	e2422004 	sub	r2, r2, #4	; 0x4
        2de60c:	e5872000 	str	r2, [r7]
        2de610:	e5920000 	ldr	r0, [r2]
        2de614:	e5951000 	ldr	r1, [r5]
        2de618:	e2866001 	add	r6, r6, #1	; 0x1
        2de61c:	e1560008 	cmp	r6, r8
        2de620:	e5810000 	str	r0, [r1]
        2de624:	baffffe8 	blt	2de5cc <TStoreObjectWriter::Scan1(void)+0x250>
        2de628:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2de62c:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2de630:	e2000003 	and	r0, r0, #3	; 0x3
        2de634:	e3300002 	teq	r0, #2	; 0x2
        2de638:	01a00004 	moveq	r0, r4
        2de63c:	091b6ff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        2de640:	0a5daba7 	beq	1a494e4 <TStoreObjectWriter::$WriteLargeBinary(void)>
        2de644:	e5950000 	ldr	r0, [r5]
        2de648:	e5900000 	ldr	r0, [r0]
        2de64c:	eb639b14 	bl	1bc52a4 <$IsSymbol(long)>
        2de650:	e3300000 	teq	r0, #0	; 0x0
        2de654:	0a000009 	beq	2de680 <TStoreObjectWriter::Scan1(void)+0x304>
        2de658:	e3a01007 	mov	r1, #7	; 0x7
        2de65c:	e1a00006 	mov	r0, r6
        2de660:	eb5dab94 	bl	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2de664:	e1a01005 	mov	r1, r5
        2de668:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        2de66c:	eb5d96ed 	bl	1a44228 <TStoreWrapper::$SymbolToReference(RefVar const &)>
        2de670:	e1a01000 	mov	r1, r0
        2de674:	e1a00006 	mov	r0, r6
        2de678:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        2de67c:	ea5d9b07 	b	1a452a0 <$WriteReference(TStoreWritePipe &, long)>
        2de680:	e1a00005 	mov	r0, r5
        2de684:	e59f11b0 	ldr	r1, [pc, #1b0]	; 2de83c <TStoreObjectWriter::Scan1(void)+0x4c0>
        2de688:	eb639b00 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
        2de68c:	e3300000 	teq	r0, #0	; 0x0
        2de690:	03a09003 	moveq	r9, #3	; 0x3
        2de694:	13a09008 	movne	r9, #8	; 0x8
        2de698:	e1a00006 	mov	r0, r6
        2de69c:	e1a01009 	mov	r1, r9
        2de6a0:	eb5dab84 	bl	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2de6a4:	e5950000 	ldr	r0, [r5]
        2de6a8:	e5900000 	ldr	r0, [r0]
        2de6ac:	eb639afe 	bl	1bc52ac <$Length(long)>
        2de6b0:	e1a08000 	mov	r8, r0
        2de6b4:	e1a00006 	mov	r0, r6
        2de6b8:	e1a01008 	mov	r1, r8
        2de6bc:	eb5dab7e 	bl	1a494bc <TStoreWritePipe::$__ls(long)>
        2de6c0:	e5951000 	ldr	r1, [r5]
        2de6c4:	e5911000 	ldr	r1, [r1]
        2de6c8:	e5972000 	ldr	r2, [r7]
        2de6cc:	e4821004 	str	r1, [r2], #4
        2de6d0:	e1a0a005 	mov	sl, r5
        2de6d4:	e5872000 	str	r2, [r7]
        2de6d8:	e5950000 	ldr	r0, [r5]
        2de6dc:	e5900000 	ldr	r0, [r0]
        2de6e0:	eb639b03 	bl	1bc52f4 <$ObjectPtr(long)>
        2de6e4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2de6e8:	e59a1000 	ldr	r1, [sl]
        2de6ec:	e5810000 	str	r0, [r1]
        2de6f0:	e1a00004 	mov	r0, r4
        2de6f4:	eb5d92b0 	bl	1a431bc <TStoreObjectWriter::$Scan(void)>
        2de6f8:	e5971000 	ldr	r1, [r7]
        2de6fc:	e2411004 	sub	r1, r1, #4	; 0x4
        2de700:	e5871000 	str	r1, [r7]
        2de704:	e5911000 	ldr	r1, [r1]
        2de708:	e5950000 	ldr	r0, [r5]
        2de70c:	e3390008 	teq	r9, #8	; 0x8
        2de710:	e5801000 	str	r1, [r0]
        2de714:	1a00004c 	bne	2de84c <TStoreObjectWriter::Scan1(void)+0x4d0>
        2de718:	e5950000 	ldr	r0, [r5]
        2de71c:	e5900000 	ldr	r0, [r0]
        2de720:	eb638e8d 	bl	1bc215c <$BinaryData(long)>
        2de724:	e1a01000 	mov	r1, r0
        2de728:	e2840f95 	add	r0, r4, #596	; 0x254
        2de72c:	e1a02008 	mov	r2, r8
        2de730:	eb5d9ad8 	bl	1a45298 <TStoreWritePipe::$Write(char *, long)>
        2de734:	e1a00005 	mov	r0, r5
        2de738:	eb638e8a 	bl	1bc2168 <$ClassOf(RefVar const &)>
        2de73c:	e59f10fc 	ldr	r1, [pc, #fc]	; 2de840 <TStoreObjectWriter::Scan1(void)+0x4c4>
        2de740:	e5911000 	ldr	r1, [r1]
        2de744:	e5911000 	ldr	r1, [r1]
        2de748:	eb6396b8 	bl	1bc4230 <$EQRef__FlT1>
        2de74c:	e3300000 	teq	r0, #0	; 0x0
        2de750:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2de754:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2de758:	e5950000 	ldr	r0, [r5]
        2de75c:	e5900000 	ldr	r0, [r0]
        2de760:	eb638e7d 	bl	1bc215c <$BinaryData(long)>
        2de764:	e58d0008 	str	r0, [sp, #8]	; fField8
        2de768:	e1a05000 	mov	r5, r0
        2de76c:	e1a000a8 	mov	r0, r8, lsr #1
        2de770:	e2400001 	sub	r0, r0, #1	; 0x1
        2de774:	e58d0000 	str	r0, [sp]
        2de778:	e59f00c4 	ldr	r0, [pc, #c4]	; 2de844 <TStoreObjectWriter::Scan1(void)+0x4c8>
        2de77c:	e59f10c4 	ldr	r1, [pc, #c4]	; 2de848 <TStoreObjectWriter::Scan1(void)+0x4cc>
        2de780:	e5911004 	ldr	r1, [r1, #4]
        2de784:	e7907101 	ldr	r7, [r0, r1, lsl #2]
        2de788:	e1a0300d 	mov	r3, sp
        2de78c:	e28d2004 	add	r2, sp, #4	; 0x4
        2de790:	e28d1008 	add	r1, sp, #8	; 0x8
        2de794:	e1a00007 	mov	r0, r7
        2de798:	e597c000 	ldr	ip, [r7]
        2de79c:	e1a0e00f 	mov	lr, pc
        2de7a0:	e28cf004 	add	pc, ip, #4	; 0x4
        2de7a4:	e3300000 	teq	r0, #0	; 0x0
        2de7a8:	0a000022 	beq	2de838 <TStoreObjectWriter::Scan1(void)+0x4bc>
        2de7ac:	e594149c 	ldr	r1, [r4, #1180]	; fField1180
        2de7b0:	e1a00007 	mov	r0, r7
        2de7b4:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        2de7b8:	e59d3004 	ldr	r3, [sp, #4]
        2de7bc:	e597c000 	ldr	ip, [r7]
        2de7c0:	e1a0e00f 	mov	lr, pc
        2de7c4:	e28cf008 	add	pc, ip, #8	; 0x8
        2de7c8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2de7cc:	e59d1004 	ldr	r1, [sp, #4]
        2de7d0:	e0800081 	add	r0, r0, r1, lsl #1
        2de7d4:	e58d0008 	str	r0, [sp, #8]	; fField8
        2de7d8:	e0400005 	sub	r0, r0, r5
        2de7dc:	e0800fa0 	add	r0, r0, r0, lsr #31
        2de7e0:	e59414a0 	ldr	r1, [r4, #1184]	; fField1184
        2de7e4:	e08160c0 	add	r6, r1, r0, asr #1
        2de7e8:	e58464a0 	str	r6, [r4, #1184]	; fField1184
        2de7ec:	e59d5008 	ldr	r5, [sp, #8]	; fField8
        2de7f0:	e59404a4 	ldr	r0, [r4, #1188]
        2de7f4:	e1500006 	cmp	r0, r6
        2de7f8:	aa000005 	bge	2de814 <TStoreObjectWriter::Scan1(void)+0x498>
        2de7fc:	e1a00004 	mov	r0, r4
        2de800:	eb5d8e3e 	bl	1a42100 <TStoreObjectWriter::$NextHintChunk(void)>
        2de804:	e59404a4 	ldr	r0, [r4, #1188]
        2de808:	e0466000 	sub	r6, r6, r0
        2de80c:	e1500006 	cmp	r0, r6
        2de810:	bafffff9 	blt	2de7fc <TStoreObjectWriter::Scan1(void)+0x480>
        2de814:	e1a0300d 	mov	r3, sp
        2de818:	e28d2004 	add	r2, sp, #4	; 0x4
        2de81c:	e28d1008 	add	r1, sp, #8	; 0x8
        2de820:	e1a00007 	mov	r0, r7
        2de824:	e597c000 	ldr	ip, [r7]
        2de828:	e1a0e00f 	mov	lr, pc
        2de82c:	e28cf004 	add	pc, ip, #4	; 0x4
        2de830:	e3300000 	teq	r0, #0	; 0x0
        2de834:	1affffdc 	bne	2de7ac <TStoreObjectWriter::Scan1(void)+0x430>
        2de838:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2de83c:	006848d0 	ldreqd	r4, [r8], -#128
        2de840:	006848e0 	rsbeq	r4, r8, r0, ror #17
        2de844:	0c107998 	ldceq	9, cr7, [r0], -#608
        2de848:	0c1053f0 	ldceq	3, cr5, [r0], -#960
        2de84c:	e5950000 	ldr	r0, [r5]
        2de850:	e5900000 	ldr	r0, [r0]
        2de854:	eb638e40 	bl	1bc215c <$BinaryData(long)>
        2de858:	e1a01000 	mov	r1, r0
        2de85c:	e1a00006 	mov	r0, r6
        2de860:	e1a02008 	mov	r2, r8
        2de864:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        2de868:	ea5d9a8a 	b	1a45298 <TStoreWritePipe::$Write(char *, long)>
        2de86c:	e3300002 	teq	r0, #2	; 0x2
        2de870:	03a0100a 	moveq	r1, #10	; 0xa
        2de874:	01a00006 	moveq	r0, r6
        2de878:	0a00001b 	beq	2de8ec <TStoreObjectWriter::Scan1(void)+0x570>
        2de87c:	e2001003 	and	r1, r0, #3	; 0x3
        2de880:	e3310002 	teq	r1, #2	; 0x2
        2de884:	03a03003 	moveq	r3, #3	; 0x3
        2de888:	00032140 	andeq	r2, r3, r0, asr #2
        2de88c:	03320001 	teqeq	r2, #1	; 0x1
        2de890:	1a000017 	bne	2de8f4 <TStoreObjectWriter::Scan1(void)+0x578>
        2de894:	e3310002 	teq	r1, #2	; 0x2
        2de898:	03320001 	teqeq	r2, #1	; 0x1
        2de89c:	01a00140 	moveq	r0, r0, asr #2
        2de8a0:	01a00140 	moveq	r0, r0, asr #2
        2de8a4:	01a00800 	moveq	r0, r0, lsl #16
        2de8a8:	01a00820 	moveq	r0, r0, lsr #16
        2de8ac:	0a000000 	beq	2de8b4 <TStoreObjectWriter::Scan1(void)+0x538>
        2de8b0:	eb638e18 	bl	1bc2118 <$_RCHARError(long)>
        2de8b4:	e1a04800 	mov	r4, r0, lsl #16
        2de8b8:	e1a04824 	mov	r4, r4, lsr #16
        2de8bc:	e35400ff 	cmp	r4, #255	; 0xff
        2de8c0:	d3a01001 	movle	r1, #1	; 0x1
        2de8c4:	da000004 	ble	2de8dc <TStoreObjectWriter::Scan1(void)+0x560>
        2de8c8:	e3a01002 	mov	r1, #2	; 0x2
        2de8cc:	e1a00006 	mov	r0, r6
        2de8d0:	eb5daaf8 	bl	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2de8d4:	e1a00444 	mov	r0, r4, asr #8
        2de8d8:	e20010ff 	and	r1, r0, #255	; 0xff
        2de8dc:	e1a00006 	mov	r0, r6
        2de8e0:	eb5daaf4 	bl	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2de8e4:	e1a00006 	mov	r0, r6
        2de8e8:	e20410ff 	and	r1, r4, #255	; 0xff
        2de8ec:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        2de8f0:	ea5daaf0 	b	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2de8f4:	e3a01000 	mov	r1, #0	; 0x0
        2de8f8:	e1a00006 	mov	r0, r6
        2de8fc:	eb5daaed 	bl	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2de900:	e5950000 	ldr	r0, [r5]
        2de904:	e5901000 	ldr	r1, [r0]
        2de908:	e1a00006 	mov	r0, r6
        2de90c:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        2de910:	ea5daae9 	b	1a494bc <TStoreWritePipe::$__ls(long)>
    */
}

