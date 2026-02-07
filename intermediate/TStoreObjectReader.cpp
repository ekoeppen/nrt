#include "include/TStoreObjectReader.h"

/**
 * Symbol: TStoreObjectReader::__ct(TStoreWrapper *, unsigned long, CDynamicArray **)
 * Address: 002de914
 */
TStoreObjectReader::TStoreObjectReader(TStoreWrapper *, unsigned long, CDynamicArray **) {
    /*
        2de914:	e1a0c00d 	mov	ip, sp
        2de918:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2de91c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2de920:	e1b04000 	movs	r4, r0
        2de924:	e1a05001 	mov	r5, r1
        2de928:	e1a07002 	mov	r7, r2
        2de92c:	e1a06003 	mov	r6, r3
        2de930:	1a000005 	bne	2de94c <TStoreObjectReader::__ct(TStoreWrapper *, unsigned long, CDynamicArray **)+0x38>
        2de934:	e3a00f96 	mov	r0, #600	; 0x258
        2de938:	eb63bf7e 	bl	1bce738 <$__nw(unsigned int)>
        2de93c:	e1b04000 	movs	r4, r0
        2de940:	1a000001 	bne	2de94c <TStoreObjectReader::__ct(TStoreWrapper *, unsigned long, CDynamicArray **)+0x38>
        2de944:	e1a00004 	mov	r0, r4
        2de948:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2de94c:	e2840008 	add	r0, r4, #8	; 0x8
        2de950:	e1a09000 	mov	r9, r0
        2de954:	e1a01005 	mov	r1, r5
        2de958:	e3a02001 	mov	r2, #1	; 0x1
        2de95c:	eb5d751d 	bl	1a3bdd8 <TStoreReadPipe::$__ct(TStoreWrapper *, CompressionType)>
        2de960:	e2840f4a 	add	r0, r4, #296	; 0x128
        2de964:	e1a0a000 	mov	sl, r0
        2de968:	e1a01005 	mov	r1, r5
        2de96c:	e3a02002 	mov	r2, #2	; 0x2
        2de970:	eb5d7518 	bl	1a3bdd8 <TStoreReadPipe::$__ct(TStoreWrapper *, CompressionType)>
        2de974:	e3a00002 	mov	r0, #2	; 0x2
        2de978:	eb638df3 	bl	1bc214c <$AllocateRefHandle(long)>
        2de97c:	e3a08000 	mov	r8, #0	; 0x0
        2de980:	e5840254 	str	r0, [r4, #596]	; fField596
        2de984:	e5a08004 	str	r8, [r0, #4]!	; fField4
        2de988:	e2844f93 	add	r4, r4, #588	; 0x24c
        2de98c:	e8840060 	stmia	r4, {r5, r6}
        2de990:	e2444f93 	sub	r4, r4, #588	; 0x24c
        2de994:	e3360000 	teq	r6, #0	; 0x0
        2de998:	15868000 	strne	r8, [r6]
        2de99c:	e3a01002 	mov	r1, #2	; 0x2
        2de9a0:	e5940254 	ldr	r0, [r4, #596]	; fField596
        2de9a4:	e5801000 	str	r1, [r0]
        2de9a8:	e1a00009 	mov	r0, r9
        2de9ac:	e1a01007 	mov	r1, r7
        2de9b0:	eb5d920a 	bl	1a431e0 <TStoreReadPipe::$SetPSSID(unsigned long)>
        2de9b4:	e24dd010 	sub	sp, sp, #16	; 0x10
        2de9b8:	e3a03010 	mov	r3, #16	; 0x10
        2de9bc:	e92d0008 	stmdb	sp!, {r3}
        2de9c0:	e28d3004 	add	r3, sp, #4	; 0x4
        2de9c4:	e1a02008 	mov	r2, r8
        2de9c8:	e1a01007 	mov	r1, r7
        2de9cc:	e5b5007c 	ldr	r0, [r5, #124]!
        2de9d0:	eb608dda 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2de9d4:	e28dd004 	add	sp, sp, #4	; 0x4
        2de9d8:	e3300000 	teq	r0, #0	; 0x0
        2de9dc:	1b5d7911 	blne	1a3ce28 <$_OSErr(long)>
        2de9e0:	e59d0000 	ldr	r0, [sp]
        2de9e4:	e5840000 	str	r0, [r4]
        2de9e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2de9ec:	e5840004 	str	r0, [r4, #4]	; fField4
        2de9f0:	e5dd000c 	ldrb	r0, [sp, #12]
        2de9f4:	e3a01010 	mov	r1, #16	; 0x10
        2de9f8:	e0811180 	add	r1, r1, r0, lsl #3
        2de9fc:	e1a00009 	mov	r0, r9
        2dea00:	eb5d91f5 	bl	1a431dc <TStoreReadPipe::$SetPosition(long)>
        2dea04:	e59d0008 	ldr	r0, [sp, #8]
        2dea08:	e3300000 	teq	r0, #0	; 0x0
        2dea0c:	11a0000a 	movne	r0, sl
        2dea10:	159d1008 	ldrne	r1, [sp, #8]
        2dea14:	1b5d91f1 	blne	1a431e0 <TStoreReadPipe::$SetPSSID(unsigned long)>
        2dea18:	e59f0038 	ldr	r0, [pc, #38]	; 2dea58 <TStoreObjectReader::__ct(TStoreWrapper *, unsigned long, CDynamicArray **)+0x144>
        2dea1c:	e5d01000 	ldrb	r1, [r0]
        2dea20:	e3310000 	teq	r1, #0	; 0x0
        2dea24:	0a00000d 	beq	2dea60 <TStoreObjectReader::__ct(TStoreWrapper *, unsigned long, CDynamicArray **)+0x14c>
        2dea28:	e3a00000 	mov	r0, #0	; 0x0
        2dea2c:	eb5dbf48 	bl	1a4e754 <TPrecedentsForReading::$__ct(void)>
        2dea30:	e5840248 	str	r0, [r4, #584]	; fField584
        2dea34:	e3300000 	teq	r0, #0	; 0x0
        2dea38:	1a00000d 	bne	2dea74 <TStoreObjectReader::__ct(TStoreWrapper *, unsigned long, CDynamicArray **)+0x160>
        2dea3c:	e59f0018 	ldr	r0, [pc, #18]	; 2dea5c <TStoreObjectReader::__ct(TStoreWrapper *, unsigned long, CDynamicArray **)+0x148>
        2dea40:	e5900000 	ldr	r0, [r0]
        2dea44:	e3a02000 	mov	r2, #0	; 0x0
        2dea48:	e3a010e9 	mov	r1, #233	; 0xe9
        2dea4c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2dea50:	eb6411d1 	bl	1be319c <$Throw>
        2dea54:	ea000006 	b	2dea74 <TStoreObjectReader::__ct(TStoreWrapper *, unsigned long, CDynamicArray **)+0x160>
        2dea58:	0c10598c 	ldceq	9, cr5, [r0], -#560
        2dea5c:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2dea60:	e59f1014 	ldr	r1, [pc, #14]	; 2dea7c <TStoreObjectReader::__ct(TStoreWrapper *, unsigned long, CDynamicArray **)+0x168>
        2dea64:	e5911000 	ldr	r1, [r1]
        2dea68:	e5841248 	str	r1, [r4, #584]	; fField584
        2dea6c:	e3a01001 	mov	r1, #1	; 0x1
        2dea70:	e5c01000 	strb	r1, [r0]
        2dea74:	e28dd010 	add	sp, sp, #16	; 0x10
        2dea78:	eaffffb1 	b	2de944 <TStoreObjectReader::__ct(TStoreWrapper *, unsigned long, CDynamicArray **)+0x30>
        2dea7c:	0c105984 	ldceq	9, cr5, [r0], -#528
    */
}

/**
 * Symbol: TStoreObjectReader::__dt(void)
 * Address: 002dea80
 */
TStoreObjectReader::~TStoreObjectReader(void) {
    /*
        2dea80:	e1a0c00d 	mov	ip, sp
        2dea84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dea88:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dea8c:	e1a04000 	mov	r4, r0
        2dea90:	e1a05001 	mov	r5, r1
        2dea94:	e5900248 	ldr	r0, [r0, #584]	; fField584
        2dea98:	e59f1020 	ldr	r1, [pc, #20]	; 2deac0 <TStoreObjectReader::__dt(void)+0x40>
        2dea9c:	e5912000 	ldr	r2, [r1]
        2deaa0:	e3a01000 	mov	r1, #0	; 0x0
        2deaa4:	e1300002 	teq	r0, r2
        2deaa8:	1a000006 	bne	2deac8 <TStoreObjectReader::__dt(void)+0x48>
        2deaac:	e59f0010 	ldr	r0, [pc, #10]	; 2deac4 <TStoreObjectReader::__dt(void)+0x44>
        2deab0:	e5c01000 	strb	r1, [r0]
        2deab4:	e5940248 	ldr	r0, [r4, #584]	; fField584
        2deab8:	eb5dc767 	bl	1a5085c <TPrecedentsForReading::$Reset(void)>
        2deabc:	ea000004 	b	2dead4 <TStoreObjectReader::__dt(void)+0x54>
        2deac0:	0c105984 	ldceq	9, cr5, [r0], -#528
        2deac4:	0c10598c 	ldceq	9, cr5, [r0], -#560
        2deac8:	e3300000 	teq	r0, #0	; 0x0
        2deacc:	13a01001 	movne	r1, #1	; 0x1
        2dead0:	1b5dbf20 	blne	1a4e758 <TPrecedentsForReading::$__dt(void)>
        2dead4:	e5940254 	ldr	r0, [r4, #596]	; fField596
        2dead8:	eb6391b7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2deadc:	e2840f4a 	add	r0, r4, #296	; 0x128
        2deae0:	e3a01000 	mov	r1, #0	; 0x0
        2deae4:	eb5d78c6 	bl	1a3ce04 <TStoreReadPipe::$__dt(void)>
        2deae8:	e2840008 	add	r0, r4, #8	; 0x8
        2deaec:	e3a01000 	mov	r1, #0	; 0x0
        2deaf0:	eb5d78c3 	bl	1a3ce04 <TStoreReadPipe::$__dt(void)>
        2deaf4:	e3150001 	tst	r5, #1	; 0x1
        2deaf8:	11a00004 	movne	r0, r4
        2deafc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2deb00:	1a63baf6 	bne	1bcd6e0 <$__dl(void *)>
        2deb04:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreObjectReader::Read(void)
 * Address: 002deb08
 */
TStoreObjectReader::Read(void) {
    /*
        2deb08:	e1a0c00d 	mov	ip, sp
        2deb0c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2deb10:	e24cb004 	sub	fp, ip, #4	; 0x4
        2deb14:	e1a04000 	mov	r4, r0
        2deb18:	e24dd004 	sub	sp, sp, #4	; 0x4
        2deb1c:	eb5d91a5 	bl	1a431b8 <TStoreObjectReader::$Scan(void)>
        2deb20:	eb638d89 	bl	1bc214c <$AllocateRefHandle(long)>
        2deb24:	e58d0000 	str	r0, [sp]
        2deb28:	e5900000 	ldr	r0, [r0]
        2deb2c:	eb6399ef 	bl	1bc52f0 <$ObjectFlags(long)>
        2deb30:	e2000003 	and	r0, r0, #3	; 0x3
        2deb34:	e3300003 	teq	r0, #3	; 0x3
        2deb38:	1a00001a 	bne	2deba8 <TStoreObjectReader::Read(void)+0xa0>
        2deb3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2deb40:	e5940000 	ldr	r0, [r4]
        2deb44:	e3700001 	cmn	r0, #1	; 0x1
        2deb48:	0a000008 	beq	2deb70 <TStoreObjectReader::Read(void)+0x68>
        2deb4c:	e1a00100 	mov	r0, r0, lsl #2
        2deb50:	eb638d7d 	bl	1bc214c <$AllocateRefHandle(long)>
        2deb54:	e58d0000 	str	r0, [sp]
        2deb58:	e1a0200d 	mov	r2, sp
        2deb5c:	e59f1064 	ldr	r1, [pc, #64]	; 2debc8 <TStoreObjectReader::Read(void)+0xc0>
        2deb60:	e28d0004 	add	r0, sp, #4	; 0x4
        2deb64:	eb639dff 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2deb68:	e59d0000 	ldr	r0, [sp]
        2deb6c:	eb639192 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2deb70:	e24dd004 	sub	sp, sp, #4	; 0x4
        2deb74:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        2deb78:	e3700001 	cmn	r0, #1	; 0x1
        2deb7c:	0a000008 	beq	2deba4 <TStoreObjectReader::Read(void)+0x9c>
        2deb80:	e1a00100 	mov	r0, r0, lsl #2
        2deb84:	eb638d70 	bl	1bc214c <$AllocateRefHandle(long)>
        2deb88:	e58d0000 	str	r0, [sp]
        2deb8c:	e1a0200d 	mov	r2, sp
        2deb90:	e59f1034 	ldr	r1, [pc, #34]	; 2debcc <TStoreObjectReader::Read(void)+0xc4>
        2deb94:	e28d0008 	add	r0, sp, #8	; 0x8
        2deb98:	eb639df2 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2deb9c:	e59d0000 	ldr	r0, [sp]
        2deba0:	eb639185 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2deba4:	e28dd008 	add	sp, sp, #8	; 0x8
        2deba8:	e59d0000 	ldr	r0, [sp]
        2debac:	e5900000 	ldr	r0, [r0]
        2debb0:	eb5d95aa 	bl	1a44260 <$UndirtyObject(long)>
        2debb4:	e59d0000 	ldr	r0, [sp]
        2debb8:	e5904000 	ldr	r4, [r0]
        2debbc:	eb63917e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2debc0:	e1a00004 	mov	r0, r4
        2debc4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2debc8:	006853d0 	ldreqd	r5, [r8], -#48
        2debcc:	00685360 	rsbeq	r5, r8, r0, ror #6
    */
}

/**
 * Symbol: TStoreObjectReader::Scan(void)
 * Address: 002debd0
 */
TStoreObjectReader::Scan(void) {
    /*
        2debd0:	ea5daa46 	b	1a494f0 <TStoreObjectReader::$Scan1(void)>
    */
}

/**
 * Symbol: TStoreObjectReader::Scan1(void)
 * Address: 002debd4
 */
TStoreObjectReader::Scan1(void) {
    /*
        2debd4:	e1a0c00d 	mov	ip, sp
        2debd8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2debdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2debe0:	e1a04000 	mov	r4, r0
        2debe4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2debe8:	e3a00002 	mov	r0, #2	; 0x2
        2debec:	eb638d56 	bl	1bc214c <$AllocateRefHandle(long)>
        2debf0:	e58d0000 	str	r0, [sp]
        2debf4:	e2840008 	add	r0, r4, #8	; 0x8
        2debf8:	e1a05000 	mov	r5, r0
        2debfc:	e28d1004 	add	r1, sp, #4	; 0x4
        2dec00:	eb5daa31 	bl	1a494cc <TStoreReadPipe::$__rs(unsigned char &)>
        2dec04:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        2dec08:	e3a06002 	mov	r6, #2	; 0x2
        2dec0c:	e3a08001 	mov	r8, #1	; 0x1
        2dec10:	e2847f95 	add	r7, r4, #596	; 0x254
        2dec14:	e350000c 	cmp	r0, #12	; 0xc
        2dec18:	908ff100 	addls	pc, pc, r0, lsl #2
        2dec1c:	ea000130 	b	2df0e4 <TStoreObjectReader::Scan1(void)+0x510>
        2dec20:	ea000027 	b	2decc4 <TStoreObjectReader::Scan1(void)+0xf0>
        2dec24:	ea00002c 	b	2decdc <TStoreObjectReader::Scan1(void)+0x108>
        2dec28:	ea000031 	b	2decf4 <TStoreObjectReader::Scan1(void)+0x120>
        2dec2c:	ea000040 	b	2ded34 <TStoreObjectReader::Scan1(void)+0x160>
        2dec30:	ea000075 	b	2dee0c <TStoreObjectReader::Scan1(void)+0x238>
        2dec34:	ea000074 	b	2dee0c <TStoreObjectReader::Scan1(void)+0x238>
        2dec38:	ea0000b2 	b	2def08 <TStoreObjectReader::Scan1(void)+0x334>
        2dec3c:	ea0000eb 	b	2deff0 <TStoreObjectReader::Scan1(void)+0x41c>
        2dec40:	ea00003b 	b	2ded34 <TStoreObjectReader::Scan1(void)+0x160>
        2dec44:	ea0000f8 	b	2df02c <TStoreObjectReader::Scan1(void)+0x458>
        2dec48:	ea000103 	b	2df05c <TStoreObjectReader::Scan1(void)+0x488>
        2dec4c:	ea000106 	b	2df06c <TStoreObjectReader::Scan1(void)+0x498>
        2dec50:	e24dd008 	sub	sp, sp, #8	; 0x8
        2dec54:	e1a00005 	mov	r0, r5
        2dec58:	e28d1004 	add	r1, sp, #4	; 0x4
        2dec5c:	e3a02004 	mov	r2, #4	; 0x4
        2dec60:	eb5d8d3d 	bl	1a4215c <TStoreReadPipe::$Read(char *, long)>
        2dec64:	e1a00005 	mov	r0, r5
        2dec68:	e1a0100d 	mov	r1, sp
        2dec6c:	e3a02004 	mov	r2, #4	; 0x4
        2dec70:	eb5d8d39 	bl	1a4215c <TStoreReadPipe::$Read(char *, long)>
        2dec74:	e5940250 	ldr	r0, [r4, #592]
        2dec78:	e3300000 	teq	r0, #0	; 0x0
        2dec7c:	0a000107 	beq	2df0a0 <TStoreObjectReader::Scan1(void)+0x4cc>
        2dec80:	e59d0008 	ldr	r0, [sp, #8]
        2dec84:	e5806000 	str	r6, [r0]
        2dec88:	e5940250 	ldr	r0, [r4, #592]
        2dec8c:	e5900000 	ldr	r0, [r0]
        2dec90:	e3300000 	teq	r0, #0	; 0x0
        2dec94:	1a000003 	bne	2deca8 <TStoreObjectReader::Scan1(void)+0xd4>
        2dec98:	e3a00000 	mov	r0, #0	; 0x0
        2dec9c:	eb64114d 	bl	1be31d8 <CDynamicArray::$__ct(void)>
        2deca0:	e5941250 	ldr	r1, [r4, #592]
        2deca4:	e5810000 	str	r0, [r1]
        2deca8:	e5940250 	ldr	r0, [r4, #592]
        2decac:	e5900000 	ldr	r0, [r0]
        2decb0:	e28d2004 	add	r2, sp, #4	; 0x4
        2decb4:	e3a03001 	mov	r3, #1	; 0x1
        2decb8:	e5901000 	ldr	r1, [r0]
        2decbc:	eb642a0d 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        2decc0:	ea000101 	b	2df0cc <TStoreObjectReader::Scan1(void)+0x4f8>
        2decc4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2decc8:	e1a00005 	mov	r0, r5
        2deccc:	e1a0100d 	mov	r1, sp
        2decd0:	eb5da9fe 	bl	1a494d0 <TStoreReadPipe::$__rs(long &)>
        2decd4:	e59d4000 	ldr	r4, [sp]
        2decd8:	ea0000db 	b	2df04c <TStoreObjectReader::Scan1(void)+0x478>
        2decdc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2dece0:	e1a00005 	mov	r0, r5
        2dece4:	e1a0100d 	mov	r1, sp
        2dece8:	eb5da9f7 	bl	1a494cc <TStoreReadPipe::$__rs(unsigned char &)>
        2decec:	e5dd0000 	ldrb	r0, [sp]
        2decf0:	ea00000c 	b	2ded28 <TStoreObjectReader::Scan1(void)+0x154>
        2decf4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2decf8:	e1a00005 	mov	r0, r5
        2decfc:	e1a0100d 	mov	r1, sp
        2ded00:	eb5da9f1 	bl	1a494cc <TStoreReadPipe::$__rs(unsigned char &)>
        2ded04:	e5dd0000 	ldrb	r0, [sp]
        2ded08:	e1a00400 	mov	r0, r0, lsl #8
        2ded0c:	e1a04800 	mov	r4, r0, lsl #16
        2ded10:	e1a04824 	mov	r4, r4, lsr #16
        2ded14:	e1a00005 	mov	r0, r5
        2ded18:	e1a0100d 	mov	r1, sp
        2ded1c:	eb5da9ea 	bl	1a494cc <TStoreReadPipe::$__rs(unsigned char &)>
        2ded20:	e5dd0000 	ldrb	r0, [sp]
        2ded24:	e1840000 	orr	r0, r4, r0
        2ded28:	e1880100 	orr	r0, r8, r0, lsl #2
        2ded2c:	e1864100 	orr	r4, r6, r0, lsl #2
        2ded30:	ea0000c5 	b	2df04c <TStoreObjectReader::Scan1(void)+0x478>
        2ded34:	e24dd008 	sub	sp, sp, #8	; 0x8
        2ded38:	e1a00005 	mov	r0, r5
        2ded3c:	e28d1004 	add	r1, sp, #4	; 0x4
        2ded40:	eb5da9e2 	bl	1a494d0 <TStoreReadPipe::$__rs(long &)>
        2ded44:	e1a00006 	mov	r0, r6
        2ded48:	eb638cff 	bl	1bc214c <$AllocateRefHandle(long)>
        2ded4c:	e58d0000 	str	r0, [sp]
        2ded50:	e1a0000d 	mov	r0, sp
        2ded54:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2ded58:	eb638cf7 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        2ded5c:	e59d1008 	ldr	r1, [sp, #8]
        2ded60:	e5810000 	str	r0, [r1]
        2ded64:	e59d0000 	ldr	r0, [sp]
        2ded68:	eb639113 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ded6c:	e28d1008 	add	r1, sp, #8	; 0x8
        2ded70:	e5940248 	ldr	r0, [r4, #584]	; fField584
        2ded74:	eb5dbe78 	bl	1a4e75c <TPrecedentsForReading::$Append(RefVar const &)>
        2ded78:	e1a00004 	mov	r0, r4
        2ded7c:	eb5d910d 	bl	1a431b8 <TStoreObjectReader::$Scan(void)>
        2ded80:	eb638cf1 	bl	1bc214c <$AllocateRefHandle(long)>
        2ded84:	e1a06000 	mov	r6, r0
        2ded88:	e59d0008 	ldr	r0, [sp, #8]
        2ded8c:	e5900000 	ldr	r0, [r0]
        2ded90:	eb639947 	bl	1bc52b4 <$LockRef(long)>
        2ded94:	e59d0008 	ldr	r0, [sp, #8]
        2ded98:	e5900000 	ldr	r0, [r0]
        2ded9c:	eb639954 	bl	1bc52f4 <$ObjectPtr(long)>
        2deda0:	e5961000 	ldr	r1, [r6]
        2deda4:	e5a01008 	str	r1, [r0, #8]!
        2deda8:	e5dd000c 	ldrb	r0, [sp, #12]
        2dedac:	e3300008 	teq	r0, #8	; 0x8
        2dedb0:	e59d0008 	ldr	r0, [sp, #8]
        2dedb4:	e5900000 	ldr	r0, [r0]
        2dedb8:	1a000003 	bne	2dedcc <TStoreObjectReader::Scan1(void)+0x1f8>
        2dedbc:	eb638ce6 	bl	1bc215c <$BinaryData(long)>
        2dedc0:	e1a01000 	mov	r1, r0
        2dedc4:	e2840f4a 	add	r0, r4, #296	; 0x128
        2dedc8:	ea000002 	b	2dedd8 <TStoreObjectReader::Scan1(void)+0x204>
        2dedcc:	eb638ce2 	bl	1bc215c <$BinaryData(long)>
        2dedd0:	e1a01000 	mov	r1, r0
        2dedd4:	e1a00005 	mov	r0, r5
        2dedd8:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        2deddc:	eb5d8cde 	bl	1a4215c <TStoreReadPipe::$Read(char *, long)>
        2dede0:	e59d0008 	ldr	r0, [sp, #8]
        2dede4:	e5900000 	ldr	r0, [r0]
        2dede8:	eb63a5a0 	bl	1bc8470 <$UnlockRef(long)>
        2dedec:	e59d0008 	ldr	r0, [sp, #8]
        2dedf0:	e5904000 	ldr	r4, [r0]
        2dedf4:	e1a00006 	mov	r0, r6
        2dedf8:	eb6390ef 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2dedfc:	e59d0008 	ldr	r0, [sp, #8]
        2dee00:	eb6390ed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2dee04:	e1a00004 	mov	r0, r4
        2dee08:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2dee0c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2dee10:	e1a00005 	mov	r0, r5
        2dee14:	e28d1004 	add	r1, sp, #4	; 0x4
        2dee18:	eb5da9ac 	bl	1a494d0 <TStoreReadPipe::$__rs(long &)>
        2dee1c:	e1a00006 	mov	r0, r6
        2dee20:	eb638cc9 	bl	1bc214c <$AllocateRefHandle(long)>
        2dee24:	e58d0000 	str	r0, [sp]
        2dee28:	e1a0000d 	mov	r0, sp
        2dee2c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2dee30:	eb638cc0 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2dee34:	e59d1008 	ldr	r1, [sp, #8]
        2dee38:	e5810000 	str	r0, [r1]
        2dee3c:	e59d0000 	ldr	r0, [sp]
        2dee40:	eb6390dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2dee44:	e28d1008 	add	r1, sp, #8	; 0x8
        2dee48:	e5940248 	ldr	r0, [r4, #584]	; fField584
        2dee4c:	eb5dbe42 	bl	1a4e75c <TPrecedentsForReading::$Append(RefVar const &)>
        2dee50:	e5dd000c 	ldrb	r0, [sp, #12]
        2dee54:	e3300005 	teq	r0, #5	; 0x5
        2dee58:	1a000008 	bne	2dee80 <TStoreObjectReader::Scan1(void)+0x2ac>
        2dee5c:	e59f0018 	ldr	r0, [pc, #18]	; 2dee7c <TStoreObjectReader::Scan1(void)+0x2a8>
        2dee60:	e5900000 	ldr	r0, [r0]
        2dee64:	e5905000 	ldr	r5, [r0]
        2dee68:	e59d0008 	ldr	r0, [sp, #8]
        2dee6c:	e5900000 	ldr	r0, [r0]
        2dee70:	eb63991f 	bl	1bc52f4 <$ObjectPtr(long)>
        2dee74:	e5a05008 	str	r5, [r0, #8]!
        2dee78:	ea00000b 	b	2deeac <TStoreObjectReader::Scan1(void)+0x2d8>
        2dee7c:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2dee80:	e1a00004 	mov	r0, r4
        2dee84:	eb5d90cb 	bl	1a431b8 <TStoreObjectReader::$Scan(void)>
        2dee88:	eb638caf 	bl	1bc214c <$AllocateRefHandle(long)>
        2dee8c:	e1a05000 	mov	r5, r0
        2dee90:	e5906000 	ldr	r6, [r0]
        2dee94:	e59d0008 	ldr	r0, [sp, #8]
        2dee98:	e5900000 	ldr	r0, [r0]
        2dee9c:	eb639914 	bl	1bc52f4 <$ObjectPtr(long)>
        2deea0:	e5a06008 	str	r6, [r0, #8]!
        2deea4:	e1a00005 	mov	r0, r5
        2deea8:	eb6390c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2deeac:	e3a05000 	mov	r5, #0	; 0x0
        2deeb0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2deeb4:	e3500000 	cmp	r0, #0	; 0x0
        2deeb8:	da00000e 	ble	2deef8 <TStoreObjectReader::Scan1(void)+0x324>
        2deebc:	e1a00004 	mov	r0, r4
        2deec0:	eb5d90bc 	bl	1a431b8 <TStoreObjectReader::$Scan(void)>
        2deec4:	eb638ca0 	bl	1bc214c <$AllocateRefHandle(long)>
        2deec8:	e1a06000 	mov	r6, r0
        2deecc:	e1a01005 	mov	r1, r5
        2deed0:	e5902000 	ldr	r2, [r0]
        2deed4:	e59d0008 	ldr	r0, [sp, #8]
        2deed8:	e5900000 	ldr	r0, [r0]
        2deedc:	eb639d1d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2deee0:	e1a00006 	mov	r0, r6
        2deee4:	eb6390b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2deee8:	e2855001 	add	r5, r5, #1	; 0x1
        2deeec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2deef0:	e1550000 	cmp	r5, r0
        2deef4:	bafffff0 	blt	2deebc <TStoreObjectReader::Scan1(void)+0x2e8>
        2deef8:	e59d0008 	ldr	r0, [sp, #8]
        2deefc:	e5900000 	ldr	r0, [r0]
        2def00:	eb5d94d6 	bl	1a44260 <$UndirtyObject(long)>
        2def04:	ea000073 	b	2df0d8 <TStoreObjectReader::Scan1(void)+0x504>
        2def08:	e24dd004 	sub	sp, sp, #4	; 0x4
        2def0c:	e1a00005 	mov	r0, r5
        2def10:	eb5d8c96 	bl	1a42170 <$ReadReference(TStoreReadPipe &)>
        2def14:	e1a05000 	mov	r5, r0
        2def18:	e1a00006 	mov	r0, r6
        2def1c:	eb638c8a 	bl	1bc214c <$AllocateRefHandle(long)>
        2def20:	e58d0000 	str	r0, [sp]
        2def24:	e1a0100d 	mov	r1, sp
        2def28:	e5940248 	ldr	r0, [r4, #584]	; fField584
        2def2c:	eb5dbe0a 	bl	1a4e75c <TPrecedentsForReading::$Append(RefVar const &)>
        2def30:	e1a06000 	mov	r6, r0
        2def34:	e59d0000 	ldr	r0, [sp]
        2def38:	eb63909f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2def3c:	e1a01005 	mov	r1, r5
        2def40:	e594024c 	ldr	r0, [r4, #588]	; fField588
        2def44:	eb5d8863 	bl	1a410d8 <TStoreWrapper::$ReferenceToMap(long)>
        2def48:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2def4c:	e5810000 	str	r0, [r1]
        2def50:	e28d0004 	add	r0, sp, #4	; 0x4
        2def54:	eb638c7a 	bl	1bc2144 <$AllocateFrameWithMap(RefVar const &)>
        2def58:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2def5c:	e5810000 	str	r0, [r1]
        2def60:	e28d2004 	add	r2, sp, #4	; 0x4
        2def64:	e1a01006 	mov	r1, r6
        2def68:	e5940248 	ldr	r0, [r4, #584]	; fField584
        2def6c:	eb5dc639 	bl	1a50858 <TPrecedentsForReading::$Replace(long, RefVar const &)>
        2def70:	e5970000 	ldr	r0, [r7]
        2def74:	e5901000 	ldr	r1, [r0]
        2def78:	e3310002 	teq	r1, #2	; 0x2
        2def7c:	059d1004 	ldreq	r1, [sp, #4]	; fField4
        2def80:	05911000 	ldreq	r1, [r1]
        2def84:	05801000 	streq	r1, [r0]
        2def88:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2def8c:	e5900000 	ldr	r0, [r0]
        2def90:	eb6398c5 	bl	1bc52ac <$Length(long)>
        2def94:	e1a07000 	mov	r7, r0
        2def98:	e3a05000 	mov	r5, #0	; 0x0
        2def9c:	e3500000 	cmp	r0, #0	; 0x0
        2defa0:	da00000d 	ble	2defdc <TStoreObjectReader::Scan1(void)+0x408>
        2defa4:	e1a00004 	mov	r0, r4
        2defa8:	eb5d9082 	bl	1a431b8 <TStoreObjectReader::$Scan(void)>
        2defac:	eb638c66 	bl	1bc214c <$AllocateRefHandle(long)>
        2defb0:	e1a06000 	mov	r6, r0
        2defb4:	e1a01005 	mov	r1, r5
        2defb8:	e5902000 	ldr	r2, [r0]
        2defbc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2defc0:	e5900000 	ldr	r0, [r0]
        2defc4:	eb639ce3 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2defc8:	e1a00006 	mov	r0, r6
        2defcc:	eb63907a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2defd0:	e2855001 	add	r5, r5, #1	; 0x1
        2defd4:	e1550007 	cmp	r5, r7
        2defd8:	bafffff1 	blt	2defa4 <TStoreObjectReader::Scan1(void)+0x3d0>
        2defdc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2defe0:	e5900000 	ldr	r0, [r0]
        2defe4:	eb5d949d 	bl	1a44260 <$UndirtyObject(long)>
        2defe8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2defec:	ea000015 	b	2df048 <TStoreObjectReader::Scan1(void)+0x474>
        2deff0:	e1a00005 	mov	r0, r5
        2deff4:	eb5d8c5d 	bl	1a42170 <$ReadReference(TStoreReadPipe &)>
        2deff8:	e1a01000 	mov	r1, r0
        2deffc:	e594024c 	ldr	r0, [r4, #588]	; fField588
        2df000:	eb5d8c5c 	bl	1a42178 <TStoreWrapper::$ReferenceToSymbol(long)>
        2df004:	e59d1000 	ldr	r1, [sp]
        2df008:	e5810000 	str	r0, [r1]
        2df00c:	e1a0100d 	mov	r1, sp
        2df010:	e5b40248 	ldr	r0, [r4, #584]!	; fField584
        2df014:	eb5dbdd0 	bl	1a4e75c <TPrecedentsForReading::$Append(RefVar const &)>
        2df018:	e59d0000 	ldr	r0, [sp]
        2df01c:	e5904000 	ldr	r4, [r0]
        2df020:	eb639065 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2df024:	e1a00004 	mov	r0, r4
        2df028:	ea00000e 	b	2df068 <TStoreObjectReader::Scan1(void)+0x494>
        2df02c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2df030:	e1a00005 	mov	r0, r5
        2df034:	e1a0100d 	mov	r1, sp
        2df038:	eb5da924 	bl	1a494d0 <TStoreReadPipe::$__rs(long &)>
        2df03c:	e5b40248 	ldr	r0, [r4, #584]!	; fField584
        2df040:	e59d1000 	ldr	r1, [sp]
        2df044:	eb01dafe 	bl	355c44 <TBucketArray::ElementAt(long)>
        2df048:	e5904000 	ldr	r4, [r0]
        2df04c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2df050:	eb639059 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2df054:	e1a00004 	mov	r0, r4
        2df058:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2df05c:	e59d0000 	ldr	r0, [sp]
        2df060:	eb639055 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2df064:	e1a00006 	mov	r0, r6
        2df068:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2df06c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2df070:	e1a00005 	mov	r0, r5
        2df074:	e1a0100d 	mov	r1, sp
        2df078:	e3a02004 	mov	r2, #4	; 0x4
        2df07c:	eb5d8c36 	bl	1a4215c <TStoreReadPipe::$Read(char *, long)>
        2df080:	e59d0000 	ldr	r0, [sp]
        2df084:	eb5d9479 	bl	1a44270 <$UnpackSmallRect(long)>
        2df088:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2df08c:	e5810000 	str	r0, [r1]
        2df090:	e28d1004 	add	r1, sp, #4	; 0x4
        2df094:	e5b40248 	ldr	r0, [r4, #584]!	; fField584
        2df098:	eb5dbdaf 	bl	1a4e75c <TPrecedentsForReading::$Append(RefVar const &)>
        2df09c:	eaffffce 	b	2defdc <TStoreObjectReader::Scan1(void)+0x408>
        2df0a0:	e594024c 	ldr	r0, [r4, #588]	; fField588
        2df0a4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2df0a8:	e59d2000 	ldr	r2, [sp]
        2df0ac:	eb5d9884 	bl	1a452c4 <$LoadLargeBinary(TStoreWrapper *, unsigned long, long)>
        2df0b0:	e59d1008 	ldr	r1, [sp, #8]
        2df0b4:	e5810000 	str	r0, [r1]
        2df0b8:	eb63988d 	bl	1bc52f4 <$ObjectPtr(long)>
        2df0bc:	e2800010 	add	r0, r0, #16	; 0x10
        2df0c0:	e5971000 	ldr	r1, [r7]
        2df0c4:	e5911000 	ldr	r1, [r1]
        2df0c8:	e5a01008 	str	r1, [r0, #8]!
        2df0cc:	e28d1008 	add	r1, sp, #8	; 0x8
        2df0d0:	e5b40248 	ldr	r0, [r4, #584]!	; fField584
        2df0d4:	eb5dbda0 	bl	1a4e75c <TPrecedentsForReading::$Append(RefVar const &)>
        2df0d8:	e59d0008 	ldr	r0, [sp, #8]
        2df0dc:	e5904000 	ldr	r4, [r0]
        2df0e0:	eaffff45 	b	2dedfc <TStoreObjectReader::Scan1(void)+0x228>
        2df0e4:	e59f1010 	ldr	r1, [pc, #10]	; 2df0fc <TStoreObjectReader::Scan1(void)+0x528>
        2df0e8:	e59f0010 	ldr	r0, [pc, #10]	; 2df100 <TStoreObjectReader::Scan1(void)+0x52c>
        2df0ec:	e5900000 	ldr	r0, [r0]
        2df0f0:	e3a02000 	mov	r2, #0	; 0x0
        2df0f4:	eb641028 	bl	1be319c <$Throw>
        2df0f8:	eaffffd7 	b	2df05c <TStoreObjectReader::Scan1(void)+0x488>
        2df0fc:	ffff447b 	swinv	0x00ff447b
        2df100:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)
 * Address: 002df104
 */
TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *) {
    /*
        2df104:	e1a0c00d 	mov	ip, sp
        2df108:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2df10c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2df110:	e1a04000 	mov	r4, r0
        2df114:	e1a06001 	mov	r6, r1
        2df118:	e1a05002 	mov	r5, r2
        2df11c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2df120:	e2800008 	add	r0, r0, #8	; 0x8
        2df124:	e1a08000 	mov	r8, r0
        2df128:	e1a0100d 	mov	r1, sp
        2df12c:	eb5da8e6 	bl	1a494cc <TStoreReadPipe::$__rs(unsigned char &)>
        2df130:	e5dd0000 	ldrb	r0, [sp]
        2df134:	e3a07001 	mov	r7, #1	; 0x1
        2df138:	e350000c 	cmp	r0, #12	; 0xc
        2df13c:	908ff100 	addls	pc, pc, r0, lsl #2
        2df140:	ea00007b 	b	2df334 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x230>
        2df144:	ea00001e 	b	2df1c4 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0xc0>
        2df148:	ea000027 	b	2df1ec <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0xe8>
        2df14c:	ea000029 	b	2df1f8 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0xf4>
        2df150:	ea00002b 	b	2df204 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x100>
        2df154:	ea000039 	b	2df240 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x13c>
        2df158:	ea000038 	b	2df240 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x13c>
        2df15c:	ea000053 	b	2df2b0 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x1ac>
        2df160:	ea000067 	b	2df304 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x200>
        2df164:	ea000026 	b	2df204 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x100>
        2df168:	ea000068 	b	2df310 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x20c>
        2df16c:	ea000075 	b	2df348 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x244>
        2df170:	ea00006b 	b	2df324 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x220>
        2df174:	e24dd008 	sub	sp, sp, #8	; 0x8
        2df178:	e1a00008 	mov	r0, r8
        2df17c:	e28d1004 	add	r1, sp, #4	; 0x4
        2df180:	e3a02004 	mov	r2, #4	; 0x4
        2df184:	eb5d8bf4 	bl	1a4215c <TStoreReadPipe::$Read(char *, long)>
        2df188:	e1a00008 	mov	r0, r8
        2df18c:	e1a0100d 	mov	r1, sp
        2df190:	e3a02004 	mov	r2, #4	; 0x4
        2df194:	eb5d8bf0 	bl	1a4215c <TStoreReadPipe::$Read(char *, long)>
        2df198:	e1a03005 	mov	r3, r5
        2df19c:	e5b4024c 	ldr	r0, [r4, #588]!	; fField588
        2df1a0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2df1a4:	e59d2000 	ldr	r2, [sp]
        2df1a8:	e1a0e00f 	mov	lr, pc
        2df1ac:	e1a0f006 	mov	pc, r6
        2df1b0:	e3300000 	teq	r0, #0	; 0x0
        2df1b4:	11a00007 	movne	r0, r7
        2df1b8:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2df1bc:	e28dd008 	add	sp, sp, #8	; 0x8
        2df1c0:	ea000060 	b	2df348 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x244>
        2df1c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2df1c8:	e1a0100d 	mov	r1, sp
        2df1cc:	e1a00008 	mov	r0, r8
        2df1d0:	eb5da8bd 	bl	1a494cc <TStoreReadPipe::$__rs(unsigned char &)>
        2df1d4:	e5dd0000 	ldrb	r0, [sp]
        2df1d8:	e33000ff 	teq	r0, #255	; 0xff
        2df1dc:	01a00008 	moveq	r0, r8
        2df1e0:	03a01004 	moveq	r1, #4	; 0x4
        2df1e4:	0a000013 	beq	2df238 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x134>
        2df1e8:	ea00002e 	b	2df2a8 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x1a4>
        2df1ec:	e1a00008 	mov	r0, r8
        2df1f0:	eb5da8b7 	bl	1a494d4 <TStoreReadPipe::$SkipUByte(void)>
        2df1f4:	ea000053 	b	2df348 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x244>
        2df1f8:	e1a00008 	mov	r0, r8
        2df1fc:	e3a01002 	mov	r1, #2	; 0x2
        2df200:	ea000049 	b	2df32c <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x228>
        2df204:	e24dd004 	sub	sp, sp, #4	; 0x4
        2df208:	e1a00008 	mov	r0, r8
        2df20c:	e1a0100d 	mov	r1, sp
        2df210:	eb5da8ae 	bl	1a494d0 <TStoreReadPipe::$__rs(long &)>
        2df214:	e1a02005 	mov	r2, r5
        2df218:	e1a01006 	mov	r1, r6
        2df21c:	e1a00004 	mov	r0, r4
        2df220:	eb5da8b3 	bl	1a494f4 <TStoreObjectReader::$EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)>
        2df224:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        2df228:	e3300008 	teq	r0, #8	; 0x8
        2df22c:	0a00001d 	beq	2df2a8 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x1a4>
        2df230:	e1a00008 	mov	r0, r8
        2df234:	e59d1000 	ldr	r1, [sp]
        2df238:	eb5da8a2 	bl	1a494c8 <TStoreReadPipe::$Skip(long)>
        2df23c:	ea000019 	b	2df2a8 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x1a4>
        2df240:	e24dd004 	sub	sp, sp, #4	; 0x4
        2df244:	e1a00008 	mov	r0, r8
        2df248:	e1a0100d 	mov	r1, sp
        2df24c:	eb5da89f 	bl	1a494d0 <TStoreReadPipe::$__rs(long &)>
        2df250:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        2df254:	e3300005 	teq	r0, #5	; 0x5
        2df258:	0a000003 	beq	2df26c <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x168>
        2df25c:	e1a02005 	mov	r2, r5
        2df260:	e1a01006 	mov	r1, r6
        2df264:	e1a00004 	mov	r0, r4
        2df268:	eb5da8a1 	bl	1a494f4 <TStoreObjectReader::$EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)>
        2df26c:	e3a08000 	mov	r8, #0	; 0x0
        2df270:	e59d0000 	ldr	r0, [sp]
        2df274:	e3500000 	cmp	r0, #0	; 0x0
        2df278:	da00000a 	ble	2df2a8 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x1a4>
        2df27c:	e1a02005 	mov	r2, r5
        2df280:	e1a01006 	mov	r1, r6
        2df284:	e1a00004 	mov	r0, r4
        2df288:	eb5da899 	bl	1a494f4 <TStoreObjectReader::$EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)>
        2df28c:	e3300000 	teq	r0, #0	; 0x0
        2df290:	11a00007 	movne	r0, r7
        2df294:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2df298:	e2888001 	add	r8, r8, #1	; 0x1
        2df29c:	e59d0000 	ldr	r0, [sp]
        2df2a0:	e1580000 	cmp	r8, r0
        2df2a4:	bafffff4 	blt	2df27c <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x178>
        2df2a8:	e28dd004 	add	sp, sp, #4	; 0x4
        2df2ac:	ea000025 	b	2df348 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x244>
        2df2b0:	e1a00008 	mov	r0, r8
        2df2b4:	eb5d8bad 	bl	1a42170 <$ReadReference(TStoreReadPipe &)>
        2df2b8:	e1a01000 	mov	r1, r0
        2df2bc:	e594024c 	ldr	r0, [r4, #588]	; fField588
        2df2c0:	eb5d8784 	bl	1a410d8 <TStoreWrapper::$ReferenceToMap(long)>
        2df2c4:	eb6397f8 	bl	1bc52ac <$Length(long)>
        2df2c8:	e2409001 	sub	r9, r0, #1	; 0x1
        2df2cc:	e3a08000 	mov	r8, #0	; 0x0
        2df2d0:	e3590000 	cmp	r9, #0	; 0x0
        2df2d4:	da00001b 	ble	2df348 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x244>
        2df2d8:	e1a02005 	mov	r2, r5
        2df2dc:	e1a01006 	mov	r1, r6
        2df2e0:	e1a00004 	mov	r0, r4
        2df2e4:	eb5da882 	bl	1a494f4 <TStoreObjectReader::$EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)>
        2df2e8:	e3300000 	teq	r0, #0	; 0x0
        2df2ec:	11a00007 	movne	r0, r7
        2df2f0:	1a000015 	bne	2df34c <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x248>
        2df2f4:	e2888001 	add	r8, r8, #1	; 0x1
        2df2f8:	e1580009 	cmp	r8, r9
        2df2fc:	bafffff5 	blt	2df2d8 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x1d4>
        2df300:	ea000010 	b	2df348 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x244>
        2df304:	e1a00008 	mov	r0, r8
        2df308:	e3a01003 	mov	r1, #3	; 0x3
        2df30c:	ea000006 	b	2df32c <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x228>
        2df310:	e24dd004 	sub	sp, sp, #4	; 0x4
        2df314:	e1a00008 	mov	r0, r8
        2df318:	e1a0100d 	mov	r1, sp
        2df31c:	eb5da86b 	bl	1a494d0 <TStoreReadPipe::$__rs(long &)>
        2df320:	eaffffe0 	b	2df2a8 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x1a4>
        2df324:	e1a00008 	mov	r0, r8
        2df328:	e3a01004 	mov	r1, #4	; 0x4
        2df32c:	eb5da865 	bl	1a494c8 <TStoreReadPipe::$Skip(long)>
        2df330:	ea000004 	b	2df348 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x244>
        2df334:	e59f1014 	ldr	r1, [pc, #14]	; 2df350 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x24c>
        2df338:	e59f0014 	ldr	r0, [pc, #14]	; 2df354 <TStoreObjectReader::EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)+0x250>
        2df33c:	e5900000 	ldr	r0, [r0]
        2df340:	e3a02000 	mov	r2, #0	; 0x0
        2df344:	eb640f94 	bl	1be319c <$Throw>
        2df348:	e3a00000 	mov	r0, #0	; 0x0
        2df34c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2df350:	ffff447b 	swinv	0x00ff447b
        2df354:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

