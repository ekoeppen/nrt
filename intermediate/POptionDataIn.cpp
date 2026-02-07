#include "include/POptionDataIn.h"

/**
 * Symbol: Sizeof__13POptionDataInSFv
 * Address: 0014b9f4
 */
void POptionDataIn::Sizeof() {
    /*
        14b9f4:	e3a00010 	mov	r0, #16	; 0x10
        14b9f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: POptionDataIn::New(void)
 * Address: 0014b9fc
 */
POptionDataIn::New(void) {
    /*
        14b9fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: POptionDataIn::Delete(void)
 * Address: 0014ba00
 */
POptionDataIn::Delete(void) {
    /*
        14ba00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: POptionDataIn::Translate(void *, PipeCallBack *)
 * Address: 0014ba04
 */
POptionDataIn::Translate(void *, PipeCallBack *) {
    /*
        14ba04:	e1a0c00d 	mov	ip, sp
        14ba08:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14ba0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14ba10:	e3310000 	teq	r1, #0	; 0x0
        14ba14:	03a00002 	moveq	r0, #2	; 0x2
        14ba18:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        14ba1c:	e1a02001 	mov	r2, r1
        14ba20:	e5913008 	ldr	r3, [r1, #8]
        14ba24:	e2811004 	add	r1, r1, #4	; 0x4
        14ba28:	e1a04001 	mov	r4, r1
        14ba2c:	e5922000 	ldr	r2, [r2]
        14ba30:	eb696a3c 	bl	1ba6328 <POptionDataIn::$ConvertFromOptionArray(RefVar const &, TOptionArray *, PFrameSource *)>
        14ba34:	e3300000 	teq	r0, #0	; 0x0
        14ba38:	0a000004 	beq	14ba50 <POptionDataIn::Translate(void *, PipeCallBack *)+0x4c>
        14ba3c:	e1a01000 	mov	r1, r0
        14ba40:	e59f0014 	ldr	r0, [pc, #14]	; 14ba5c <POptionDataIn::Translate(void *, PipeCallBack *)+0x58>
        14ba44:	e5900000 	ldr	r0, [r0]
        14ba48:	e3a02000 	mov	r2, #0	; 0x0
        14ba4c:	eb6a5dd2 	bl	1be319c <$Throw>
        14ba50:	e5940000 	ldr	r0, [r4]
        14ba54:	e5900000 	ldr	r0, [r0]
        14ba58:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        14ba5c:	00371328 	eoreqs	r1, r7, r8, lsr #6
    */
}

/**
 * Symbol: POptionDataIn::ConvertFromOptionArray(RefVar const &, TOptionArray *, PFrameSource *)
 * Address: 0014ba60
 */
POptionDataIn::ConvertFromOptionArray(RefVar const &, TOptionArray *, PFrameSource *) {
    /*
        14ba60:	e1a0c00d 	mov	ip, sp
        14ba64:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        14ba68:	e24cb004 	sub	fp, ip, #4	; 0x4
        14ba6c:	e1a06000 	mov	r6, r0
        14ba70:	e1a04001 	mov	r4, r1
        14ba74:	e1b08002 	movs	r8, r2
        14ba78:	e1a05003 	mov	r5, r3
        14ba7c:	e3a07000 	mov	r7, #0	; 0x0
        14ba80:	0a00003a 	beq	14bb70 <POptionDataIn::ConvertFromOptionArray(RefVar const &, TOptionArray *, PFrameSource *)+0x110>
        14ba84:	e1a00004 	mov	r0, r4
        14ba88:	eb6a9fbf 	bl	1bf398c <$IsArray(RefVar const &)>
        14ba8c:	e3300000 	teq	r0, #0	; 0x0
        14ba90:	0a00002d 	beq	14bb4c <POptionDataIn::ConvertFromOptionArray(RefVar const &, TOptionArray *, PFrameSource *)+0xec>
        14ba94:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        14ba98:	e1a01008 	mov	r1, r8
        14ba9c:	e1a0000d 	mov	r0, sp
        14baa0:	eb69a814 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
        14baa4:	e3a09000 	mov	r9, #0	; 0x0
        14baa8:	e1a0000d 	mov	r0, sp
        14baac:	eb69b45a 	bl	1bb8c1c <TOptionIterator::$FirstOption(void)>
        14bab0:	e1a08000 	mov	r8, r0
        14bab4:	e1a0000d 	mov	r0, sp
        14bab8:	eb69b880 	bl	1bb9cc0 <TOptionIterator::$More(void)>
        14babc:	e3300000 	teq	r0, #0	; 0x0
        14bac0:	0a00001c 	beq	14bb38 <POptionDataIn::ConvertFromOptionArray(RefVar const &, TOptionArray *, PFrameSource *)+0xd8>
        14bac4:	e3380000 	teq	r8, #0	; 0x0
        14bac8:	0a000012 	beq	14bb18 <POptionDataIn::ConvertFromOptionArray(RefVar const &, TOptionArray *, PFrameSource *)+0xb8>
        14bacc:	e24dd004 	sub	sp, sp, #4	; 0x4
        14bad0:	e1a01009 	mov	r1, r9
        14bad4:	e5940000 	ldr	r0, [r4]
        14bad8:	e5900000 	ldr	r0, [r0]
        14badc:	eb69e1dc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14bae0:	eb69d999 	bl	1bc214c <$AllocateRefHandle(long)>
        14bae4:	e58d0000 	str	r0, [sp]
        14bae8:	e1a0100d 	mov	r1, sp
        14baec:	e1a03005 	mov	r3, r5
        14baf0:	e1a02008 	mov	r2, r8
        14baf4:	e1a00006 	mov	r0, r6
        14baf8:	eb696a0b 	bl	1ba632c <POptionDataIn::$ConvertFromOption(RefVar const &, TOption *, PFrameSource *)>
        14bafc:	e1a07000 	mov	r7, r0
        14bb00:	e59d0000 	ldr	r0, [sp]
        14bb04:	eb69ddac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14bb08:	e3370000 	teq	r7, #0	; 0x0
        14bb0c:	e28dd004 	add	sp, sp, #4	; 0x4
        14bb10:	0a000000 	beq	14bb18 <POptionDataIn::ConvertFromOptionArray(RefVar const &, TOptionArray *, PFrameSource *)+0xb8>
        14bb14:	ea000007 	b	14bb38 <POptionDataIn::ConvertFromOptionArray(RefVar const &, TOptionArray *, PFrameSource *)+0xd8>
        14bb18:	e2899001 	add	r9, r9, #1	; 0x1
        14bb1c:	e1a0000d 	mov	r0, sp
        14bb20:	eb69b869 	bl	1bb9ccc <TOptionIterator::$NextOption(void)>
        14bb24:	e1a08000 	mov	r8, r0
        14bb28:	e1a0000d 	mov	r0, sp
        14bb2c:	eb69b863 	bl	1bb9cc0 <TOptionIterator::$More(void)>
        14bb30:	e3300000 	teq	r0, #0	; 0x0
        14bb34:	1affffe2 	bne	14bac4 <POptionDataIn::ConvertFromOptionArray(RefVar const &, TOptionArray *, PFrameSource *)+0x64>
        14bb38:	e1a0000d 	mov	r0, sp
        14bb3c:	e3a01000 	mov	r1, #0	; 0x0
        14bb40:	eb69abfd 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
        14bb44:	e28dd01c 	add	sp, sp, #28	; 0x1c
        14bb48:	ea000008 	b	14bb70 <POptionDataIn::ConvertFromOptionArray(RefVar const &, TOptionArray *, PFrameSource *)+0x110>
        14bb4c:	e1a00008 	mov	r0, r8
        14bb50:	e3a01000 	mov	r1, #0	; 0x0
        14bb54:	eb69b85e 	bl	1bb9cd4 <TOptionArray::$OptionAt(long)>
        14bb58:	e1a02000 	mov	r2, r0
        14bb5c:	e1a03005 	mov	r3, r5
        14bb60:	e1a01004 	mov	r1, r4
        14bb64:	e1a00006 	mov	r0, r6
        14bb68:	eb6969ef 	bl	1ba632c <POptionDataIn::$ConvertFromOption(RefVar const &, TOption *, PFrameSource *)>
        14bb6c:	e1a07000 	mov	r7, r0
        14bb70:	e1a00007 	mov	r0, r7
        14bb74:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)
 * Address: 0014bb78
 */
POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *) {
    /*
        14bb78:	e1a0c00d 	mov	ip, sp
        14bb7c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14bb80:	e24cb004 	sub	fp, ip, #4	; 0x4
        14bb84:	e1a07000 	mov	r7, r0
        14bb88:	e1a04001 	mov	r4, r1
        14bb8c:	e1a05002 	mov	r5, r2
        14bb90:	e1a06003 	mov	r6, r3
        14bb94:	e3a00000 	mov	r0, #0	; 0x0
        14bb98:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        14bb9c:	e52d006c 	str	r0, [sp, -#108]!
        14bba0:	e28d0008 	add	r0, sp, #8	; 0x8
        14bba4:	eb699b72 	bl	1bb2974 <$setjmp>
        14bba8:	e3300000 	teq	r0, #0	; 0x0
        14bbac:	1a00007d 	bne	14bda8 <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x230>
        14bbb0:	e1a0000d 	mov	r0, sp
        14bbb4:	eb6a5130 	bl	1be007c <$AddExceptionHandler>
        14bbb8:	e24dd004 	sub	sp, sp, #4	; 0x4
        14bbbc:	e5950008 	ldr	r0, [r5, #8]
        14bbc0:	e1a00c00 	mov	r0, r0, lsl #24
        14bbc4:	e1b00c40 	movs	r0, r0, asr #24
        14bbc8:	12400fc1 	subne	r0, r0, #772	; 0x304
        14bbcc:	12400a0d 	subne	r0, r0, #53248	; 0xd000
        14bbd0:	11a00100 	movne	r0, r0, lsl #2
        14bbd4:	03a00002 	moveq	r0, #2	; 0x2
        14bbd8:	eb69d95b 	bl	1bc214c <$AllocateRefHandle(long)>
        14bbdc:	e58d0000 	str	r0, [sp]
        14bbe0:	e1a0200d 	mov	r2, sp
        14bbe4:	e59f1120 	ldr	r1, [pc, #120]	; 14bd0c <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x194>
        14bbe8:	e1a00004 	mov	r0, r4
        14bbec:	eb69e9dd 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        14bbf0:	e59d0000 	ldr	r0, [sp]
        14bbf4:	eb69dd70 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14bbf8:	e24dd004 	sub	sp, sp, #4	; 0x4
        14bbfc:	e59f110c 	ldr	r1, [pc, #10c]	; 14bd10 <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x198>
        14bc00:	e1a00004 	mov	r0, r4
        14bc04:	e3a03000 	mov	r3, #0	; 0x0
        14bc08:	e3a02000 	mov	r2, #0	; 0x0
        14bc0c:	eb69e198 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14bc10:	eb69d94d 	bl	1bc214c <$AllocateRefHandle(long)>
        14bc14:	e58d0000 	str	r0, [sp]
        14bc18:	e1a0000d 	mov	r0, sp
        14bc1c:	e3a01000 	mov	r1, #0	; 0x0
        14bc20:	eb65d52c 	bl	1ac10d8 <$GetDataForm(RefVar const &, FormUser)>
        14bc24:	e1a08000 	mov	r8, r0
        14bc28:	e59d0000 	ldr	r0, [sp]
        14bc2c:	eb69dd62 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14bc30:	e3380000 	teq	r8, #0	; 0x0
        14bc34:	059f00d8 	ldreq	r0, [pc, #d8]	; 14bd14 <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x19c>
        14bc38:	058d0074 	streq	r0, [sp, #116]
        14bc3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        14bc40:	e3a00002 	mov	r0, #2	; 0x2
        14bc44:	eb69d940 	bl	1bc214c <$AllocateRefHandle(long)>
        14bc48:	e58d0000 	str	r0, [sp]
        14bc4c:	e59d0078 	ldr	r0, [sp, #120]
        14bc50:	e3300000 	teq	r0, #0	; 0x0
        14bc54:	1a000037 	bne	14bd38 <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x1c0>
        14bc58:	e285a00c 	add	sl, r5, #12	; 0xc
        14bc5c:	e59f90b4 	ldr	r9, [pc, #b4]	; 14bd18 <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x1a0>
        14bc60:	e3380008 	teq	r8, #8	; 0x8
        14bc64:	1a000037 	bne	14bd48 <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x1d0>
        14bc68:	e1a01009 	mov	r1, r9
        14bc6c:	e1a00004 	mov	r0, r4
        14bc70:	e3a03000 	mov	r3, #0	; 0x0
        14bc74:	e3a02000 	mov	r2, #0	; 0x0
        14bc78:	eb69e17d 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14bc7c:	e59d1000 	ldr	r1, [sp]
        14bc80:	e5810000 	str	r0, [r1]
        14bc84:	e3300002 	teq	r0, #2	; 0x2
        14bc88:	0a00002a 	beq	14bd38 <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x1c0>
        14bc8c:	e24dd004 	sub	sp, sp, #4	; 0x4
        14bc90:	e59f1084 	ldr	r1, [pc, #84]	; 14bd1c <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x1a4>
        14bc94:	e28d0004 	add	r0, sp, #4	; 0x4
        14bc98:	e3a03000 	mov	r3, #0	; 0x0
        14bc9c:	e3a02000 	mov	r2, #0	; 0x0
        14bca0:	eb69e173 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14bca4:	eb69d928 	bl	1bc214c <$AllocateRefHandle(long)>
        14bca8:	e58d0000 	str	r0, [sp]
        14bcac:	e5900000 	ldr	r0, [r0]
        14bcb0:	e3300002 	teq	r0, #2	; 0x2
        14bcb4:	0a000019 	beq	14bd20 <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x1a8>
        14bcb8:	e1a0000d 	mov	r0, sp
        14bcbc:	eb6a9f32 	bl	1bf398c <$IsArray(RefVar const &)>
        14bcc0:	e3300000 	teq	r0, #0	; 0x0
        14bcc4:	0a000015 	beq	14bd20 <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x1a8>
        14bcc8:	e28d307c 	add	r3, sp, #124	; 0x7c
        14bccc:	e1a0200d 	mov	r2, sp
        14bcd0:	e1a0100a 	mov	r1, sl
        14bcd4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        14bcd8:	e1a02008 	mov	r2, r8
        14bcdc:	e1a01006 	mov	r1, r6
        14bce0:	e1a00007 	mov	r0, r7
        14bce4:	e5b53004 	ldr	r3, [r5, #4]!	; fField4
        14bce8:	eb696dbc 	bl	1ba73e0 <POptionDataIn::$ParseInput(PFrameSource *, FormType, long, unsigned char *, RefVar const &, long *)>
        14bcec:	e28dd00c 	add	sp, sp, #12	; 0xc
        14bcf0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        14bcf4:	e28d2004 	add	r2, sp, #4	; 0x4
        14bcf8:	e5810000 	str	r0, [r1]
        14bcfc:	e1a01009 	mov	r1, r9
        14bd00:	e1a00004 	mov	r0, r4
        14bd04:	eb69e997 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        14bd08:	ea000007 	b	14bd2c <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x1b4>
        14bd0c:	00684330 	rsbeq	r4, r8, r0, lsr r3
        14bd10:	00682e68 	rsbeq	r2, r8, r8, ror #28
        14bd14:	ffff2d0f 	swinv	0x00ff2d0f
        14bd18:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        14bd1c:	00684cb8 	streqh	r4, [r8], -#200
        14bd20:	e3a00005 	mov	r0, #5	; 0x5
        14bd24:	e2400cd3 	sub	r0, r0, #54016	; 0xd300
        14bd28:	e58d007c 	str	r0, [sp, #124]
        14bd2c:	e59d0000 	ldr	r0, [sp]
        14bd30:	eb69dd21 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14bd34:	e28dd004 	add	sp, sp, #4	; 0x4
        14bd38:	e59d0000 	ldr	r0, [sp]
        14bd3c:	eb69dd1e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14bd40:	e28dd00c 	add	sp, sp, #12	; 0xc
        14bd44:	ea000019 	b	14bdb0 <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x238>
        14bd48:	e24dd004 	sub	sp, sp, #4	; 0x4
        14bd4c:	e28d307c 	add	r3, sp, #124	; 0x7c
        14bd50:	e92d0008 	stmdb	sp!, {r3}
        14bd54:	e3a00002 	mov	r0, #2	; 0x2
        14bd58:	eb69d8fb 	bl	1bc214c <$AllocateRefHandle(long)>
        14bd5c:	e58d0004 	str	r0, [sp, #4]	; fField4
        14bd60:	e28d3004 	add	r3, sp, #4	; 0x4
        14bd64:	e1a0200a 	mov	r2, sl
        14bd68:	e92d000c 	stmdb	sp!, {r2, r3}
        14bd6c:	e1a02008 	mov	r2, r8
        14bd70:	e1a01006 	mov	r1, r6
        14bd74:	e1a00007 	mov	r0, r7
        14bd78:	e5b53004 	ldr	r3, [r5, #4]!	; fField4
        14bd7c:	eb696d97 	bl	1ba73e0 <POptionDataIn::$ParseInput(PFrameSource *, FormType, long, unsigned char *, RefVar const &, long *)>
        14bd80:	e28dd00c 	add	sp, sp, #12	; 0xc
        14bd84:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        14bd88:	e5810000 	str	r0, [r1]
        14bd8c:	e59d0000 	ldr	r0, [sp]
        14bd90:	eb69dd09 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14bd94:	e28d2004 	add	r2, sp, #4	; 0x4
        14bd98:	e1a01009 	mov	r1, r9
        14bd9c:	e1a00004 	mov	r0, r4
        14bda0:	eb69e970 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        14bda4:	eaffffe2 	b	14bd34 <POptionDataIn::ConvertFromOption(RefVar const &, TOption *, PFrameSource *)+0x1bc>
        14bda8:	e59d0064 	ldr	r0, [sp, #100]
        14bdac:	e58d006c 	str	r0, [sp, #108]
        14bdb0:	e1a0000d 	mov	r0, sp
        14bdb4:	eb6a54bf 	bl	1be10b8 <$ExitHandler>
        14bdb8:	e5bd006c 	ldr	r0, [sp, #108]!
        14bdbc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: POptionDataIn::ParseInput(PFrameSource *, FormType, long, unsigned char *, RefVar const &, long *)
 * Address: 0014bdc0
 */
POptionDataIn::ParseInput(PFrameSource *, FormType, long, unsigned char *, RefVar const &, long *) {
    /*
        14bdc0:	e1a0c00d 	mov	ip, sp
        14bdc4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14bdc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        14bdcc:	e1a06001 	mov	r6, r1
        14bdd0:	e1a05002 	mov	r5, r2
        14bdd4:	e1a04003 	mov	r4, r3
        14bdd8:	e59b800c 	ldr	r8, [fp, #12]
        14bddc:	e59b9008 	ldr	r9, [fp, #8]
        14bde0:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        14bde4:	e24dd014 	sub	sp, sp, #20	; 0x14
        14bde8:	e3a00002 	mov	r0, #2	; 0x2
        14bdec:	eb69d8d6 	bl	1bc214c <$AllocateRefHandle(long)>
        14bdf0:	e58d0010 	str	r0, [sp, #16]
        14bdf4:	e3a00002 	mov	r0, #2	; 0x2
        14bdf8:	eb69d8d3 	bl	1bc214c <$AllocateRefHandle(long)>
        14bdfc:	e1a07000 	mov	r7, r0
        14be00:	e3a00001 	mov	r0, #1	; 0x1
        14be04:	e58d000c 	str	r0, [sp, #12]
        14be08:	e98d0030 	stmib	sp, {r4, r5}
        14be0c:	e40da06c 	str	sl, [sp], -#108
        14be10:	e5990000 	ldr	r0, [r9]
        14be14:	e5900000 	ldr	r0, [r0]
        14be18:	e59d107c 	ldr	r1, [sp, #124]
        14be1c:	e5810000 	str	r0, [r1]
        14be20:	e3a00000 	mov	r0, #0	; 0x0
        14be24:	e58d0000 	str	r0, [sp]
        14be28:	e28d0008 	add	r0, sp, #8	; 0x8
        14be2c:	eb699ad0 	bl	1bb2974 <$setjmp>
        14be30:	e3300000 	teq	r0, #0	; 0x0
        14be34:	1a000007 	bne	14be58 <POptionDataIn::ParseInput(PFrameSource *, FormType, long, unsigned char *, RefVar const &, long *)+0x98>
        14be38:	e1a0000d 	mov	r0, sp
        14be3c:	eb6a508e 	bl	1be007c <$AddExceptionHandler>
        14be40:	e28d106c 	add	r1, sp, #108	; 0x6c
        14be44:	e1a00006 	mov	r0, r6
        14be48:	e3a02000 	mov	r2, #0	; 0x0
        14be4c:	eb697171 	bl	1ba8418 <PFrameSource::$Translate(void *, PipeCallBack *)>
        14be50:	e5870000 	str	r0, [r7]
        14be54:	ea000001 	b	14be60 <POptionDataIn::ParseInput(PFrameSource *, FormType, long, unsigned char *, RefVar const &, long *)+0xa0>
        14be58:	e59d0064 	ldr	r0, [sp, #100]
        14be5c:	e5880000 	str	r0, [r8]
        14be60:	e1a0000d 	mov	r0, sp
        14be64:	eb6a5493 	bl	1be10b8 <$ExitHandler>
        14be68:	e28dd06c 	add	sp, sp, #108	; 0x6c
        14be6c:	e5974000 	ldr	r4, [r7]
        14be70:	e1a00007 	mov	r0, r7
        14be74:	eb69dcd0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14be78:	e59d0010 	ldr	r0, [sp, #16]
        14be7c:	eb69dcce 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14be80:	e1a00004 	mov	r0, r4
        14be84:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__13POptionDataInSFv
 * Address: 0038a464
 */
void POptionDataIn::ClassInfo() {
    /*
        38a464:	e24f0044 	sub	r0, pc, #68	; 0x44
        38a468:	e1a0f00e 	mov	pc, lr
        38a46c:	e3a00000 	mov	r0, #0	; 0x0
        38a470:	e1a0f00e 	mov	pc, lr
        38a474:	504f7074 	subpl	r7, pc, r4, ror r0
        38a478:	696f6e44 	stmvsdb	pc!, {r2, r6, r9, sl, fp, sp, lr}^
        38a47c:	61746149 	cmnvs	r4, r9, asr #2
        38a480:	6e005046 	cdpvs	0, 0, cr5, cr0, cr6, {2}
        38a484:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        38a488:	536f7572 	cmnpl	pc, #478150656	; 0x1c800000
        38a48c:	63650000 	cmnvs	r5, #0	; 0x0
        38a490:	00000000 	andeq	r0, r0, r0
        38a494:	eafffff2 	b	38a464 <ClassInfo__13POptionDataInSFv>
        38a498:	ea6073c7 	b	1ba73bc <POptionDataIn::$New(void)>
        38a49c:	ea606fab 	b	1ba6350 <POptionDataIn::$Delete(void)>
        38a4a0:	ea6077de 	b	1ba8420 <POptionDataIn::$Translate(void *, PipeCallBack *)>
        38a4a4:	e59f0000 	ldr	r0, [pc, #0]	; 38a4ac <ClassInfo__13POptionDataInSFv+0x48>
        38a4a8:	ea61ce87 	b	1bfdecc <TDelayTimer::$__ct(void)>
        38a4ac:	0c100ec4 	ldceq	14, cr0, [r0], -#784
        38a4b0:	e1a0f00e 	mov	pc, lr
        38a4b4:	e1a0f00e 	mov	pc, lr
        38a4b8:	e59f0000 	ldr	r0, [pc, #0]	; 38a4c0 <ClassInfo__13POptionDataInSFv+0x5c>
        38a4bc:	ea5bf3c9 	b	1a873e8 <StrokeCentral::$__ct(void)>
        38a4c0:	0c1018cc 	ldceq	8, cr1, [r0], -#816
        38a4c4:	e3a00000 	mov	r0, #0	; 0x0
        38a4c8:	e59f1008 	ldr	r1, [pc, #8]	; 38a4d8 <ClassInfo__13POptionDataInSFv+0x74>
        38a4cc:	e5810004 	str	r0, [r1, #4]	; fField4
        38a4d0:	e5810000 	str	r0, [r1]
        38a4d4:	e1a0f00e 	mov	pc, lr
        38a4d8:	0c101690 	ldceq	6, cr1, [r0], -#576
        38a4dc:	e1a0f00e 	mov	pc, lr
        38a4e0:	e59f1050 	ldr	r1, [pc, #50]	; 38a538 <ClassInfo__13POptionDataInSFv+0xd4>
        38a4e4:	e3a029fe 	mov	r2, #4161536	; 0x3f8000
        38a4e8:	e2422501 	sub	r2, r2, #4194304	; 0x400000
        38a4ec:	e5c12001 	strb	r2, [r1, #1]
        38a4f0:	e3e0007f 	mvn	r0, #127	; 0x7f
        38a4f4:	e5c10000 	strb	r0, [r1]
        38a4f8:	e5c12003 	strb	r2, [r1, #3]
        38a4fc:	e5c10002 	strb	r0, [r1, #2]
        38a500:	e5c12005 	strb	r2, [r1, #5]
        38a504:	e5c10004 	strb	r0, [r1, #4]	; fField4
        38a508:	e5c12007 	strb	r2, [r1, #7]
        38a50c:	e5c10006 	strb	r0, [r1, #6]
        38a510:	e24dd004 	sub	sp, sp, #4	; 0x4
        38a514:	e5cd2003 	strb	r2, [sp, #3]
        38a518:	e5cd0002 	strb	r0, [sp, #2]
        38a51c:	e5cd2001 	strb	r2, [sp, #1]
        38a520:	e5cd0000 	strb	r0, [sp]
        38a524:	e59f0010 	ldr	r0, [pc, #10]	; 38a53c <ClassInfo__13POptionDataInSFv+0xd8>
        38a528:	e59d1000 	ldr	r1, [sp]
        38a52c:	e5801000 	str	r1, [r0]
        38a530:	e28dd004 	add	sp, sp, #4	; 0x4
        38a534:	e1a0f00e 	mov	pc, lr
        38a538:	0c101718 	ldceq	7, cr1, [r0], -#96
        38a53c:	0c101728 	ldceq	7, cr1, [r0], -#160
        38a540:	e59f0000 	ldr	r0, [pc, #0]	; 38a548 <ClassInfo__13POptionDataInSFv+0xe4>
        38a544:	ea610c58 	b	1bcd6ac <TUAsyncMessage::$__ct(void)>
        38a548:	0c100b18 	ldceq	11, cr0, [r0], -#96
        38a54c:	e1a0c00d 	mov	ip, sp
        38a550:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        38a554:	e24cb004 	sub	fp, ip, #4	; 0x4
        38a558:	e59f0018 	ldr	r0, [pc, #18]	; 38a578 <ClassInfo__13POptionDataInSFv+0x114>
        38a55c:	e3a01000 	mov	r1, #0	; 0x0
        38a560:	eb610c5d 	bl	1bcd6dc <TUMonitor::$__ct(unsigned long)>
        38a564:	e3a00000 	mov	r0, #0	; 0x0
        38a568:	e59f100c 	ldr	r1, [pc, #c]	; 38a57c <ClassInfo__13POptionDataInSFv+0x118>
        38a56c:	e5c10004 	strb	r0, [r1, #4]	; fField4
        38a570:	e5810000 	str	r0, [r1]
        38a574:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        38a578:	0c100954 	ldceq	9, cr0, [r0], -#336
        38a57c:	0c10095c 	ldceq	9, cr0, [r0], -#368
        38a580:	e1a0c00d 	mov	ip, sp
        38a584:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        38a588:	e24cb004 	sub	fp, ip, #4	; 0x4
        38a58c:	e59f000c 	ldr	r0, [pc, #c]	; 38a5a0 <ClassInfo__13POptionDataInSFv+0x13c>
        38a590:	eb610c45 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        38a594:	e59f0008 	ldr	r0, [pc, #8]	; 38a5a4 <ClassInfo__13POptionDataInSFv+0x140>
        38a598:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        38a59c:	ea616725 	b	1be4238 <TAEvent::$__ct(void)>
        38a5a0:	0c101060 	ldceq	0, cr1, [r0], -#384
        38a5a4:	0c101070 	ldceq	0, cr1, [r0], -#448
        38a5a8:	e59f0000 	ldr	r0, [pc, #0]	; 38a5b0 <ClassInfo__13POptionDataInSFv+0x14c>
        38a5ac:	ea5d948f 	b	1aef7f0 <TSharedMemMsg::$__ct(void)>
        38a5b0:	0c101578 	ldceq	5, cr1, [r0], -#480
        38a5b4:	e59f0004 	ldr	r0, [pc, #4]	; 38a5c0 <ClassInfo__13POptionDataInSFv+0x15c>	; fField4
        38a5b8:	e3a01000 	mov	r1, #0	; 0x0
        38a5bc:	ea610c46 	b	1bcd6dc <TUMonitor::$__ct(unsigned long)>
        38a5c0:	0c1016ec 	ldceq	6, cr1, [r0], -#944
        38a5c4:	e59f0004 	ldr	r0, [pc, #4]	; 38a5d0 <ClassInfo__13POptionDataInSFv+0x16c>	; fField4
        38a5c8:	e3a01000 	mov	r1, #0	; 0x0
        38a5cc:	ea610c42 	b	1bcd6dc <TUMonitor::$__ct(unsigned long)>
        38a5d0:	0c101700 	ldceq	7, cr1, [r0]
        38a5d4:	e59f0000 	ldr	r0, [pc, #0]	; 38a5dc <ClassInfo__13POptionDataInSFv+0x178>
        38a5d8:	eaf448bc 	b	9c8d0 <TDoubleQContainer::__ct(void)>
        38a5dc:	0c101968 	ldceq	9, cr1, [r0], -#416
        38a5e0:	e59f0000 	ldr	r0, [pc, #0]	; 38a5e8 <ClassInfo__13POptionDataInSFv+0x184>
        38a5e4:	ea5d9481 	b	1aef7f0 <TSharedMemMsg::$__ct(void)>
        38a5e8:	0c101984 	ldceq	9, cr1, [r0], -#528
        38a5ec:	e3a00000 	mov	r0, #0	; 0x0
        38a5f0:	e59f1020 	ldr	r1, [pc, #20]	; 38a618 <ClassInfo__13POptionDataInSFv+0x1b4>
        38a5f4:	e5810004 	str	r0, [r1, #4]	; fField4
        38a5f8:	e5810000 	str	r0, [r1]
        38a5fc:	e59f1018 	ldr	r1, [pc, #18]	; 38a61c <ClassInfo__13POptionDataInSFv+0x1b8>
        38a600:	e5810004 	str	r0, [r1, #4]	; fField4
        38a604:	e5810000 	str	r0, [r1]
        38a608:	e59f1010 	ldr	r1, [pc, #10]	; 38a620 <ClassInfo__13POptionDataInSFv+0x1bc>
        38a60c:	e5810004 	str	r0, [r1, #4]	; fField4
        38a610:	e5810000 	str	r0, [r1]
        38a614:	e1a0f00e 	mov	pc, lr
        38a618:	0c104eb0 	ldceq	14, cr4, [r0], -#704
        38a61c:	0c104eb8 	ldceq	14, cr4, [r0], -#736
        38a620:	0c104ec0 	ldceq	14, cr4, [r0], -#768
        38a624:	e1a0c00d 	mov	ip, sp
        38a628:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        38a62c:	e24cb004 	sub	fp, ip, #4	; 0x4
        38a630:	e59f0014 	ldr	r0, [pc, #14]	; 38a64c <ClassInfo__13POptionDataInSFv+0x1e8>
        38a634:	e3a01000 	mov	r1, #0	; 0x0
        38a638:	eb610c27 	bl	1bcd6dc <TUMonitor::$__ct(unsigned long)>
        38a63c:	e59f000c 	ldr	r0, [pc, #c]	; 38a650 <ClassInfo__13POptionDataInSFv+0x1ec>
        38a640:	e3a01000 	mov	r1, #0	; 0x0
        38a644:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        38a648:	ea610c23 	b	1bcd6dc <TUMonitor::$__ct(unsigned long)>
        38a64c:	0c104eec 	ldceq	14, cr4, [r0], -#944
        38a650:	0c104ef4 	ldceq	14, cr4, [r0], -#976
        38a654:	e3a00000 	mov	r0, #0	; 0x0
        38a658:	e59f1044 	ldr	r1, [pc, #44]	; 38a6a4 <ClassInfo__13POptionDataInSFv+0x240>
        38a65c:	e5c10004 	strb	r0, [r1, #4]	; fField4
        38a660:	e5810000 	str	r0, [r1]
        38a664:	e59f103c 	ldr	r1, [pc, #3c]	; 38a6a8 <ClassInfo__13POptionDataInSFv+0x244>
        38a668:	e5c10004 	strb	r0, [r1, #4]	; fField4
        38a66c:	e5810000 	str	r0, [r1]
        38a670:	e59f1034 	ldr	r1, [pc, #34]	; 38a6ac <ClassInfo__13POptionDataInSFv+0x248>
        38a674:	e5c10004 	strb	r0, [r1, #4]	; fField4
        38a678:	e5810000 	str	r0, [r1]
        38a67c:	e59f102c 	ldr	r1, [pc, #2c]	; 38a6b0 <ClassInfo__13POptionDataInSFv+0x24c>
        38a680:	e5c10004 	strb	r0, [r1, #4]	; fField4
        38a684:	e5810000 	str	r0, [r1]
        38a688:	e59f1024 	ldr	r1, [pc, #24]	; 38a6b4 <ClassInfo__13POptionDataInSFv+0x250>
        38a68c:	e5c10004 	strb	r0, [r1, #4]	; fField4
        38a690:	e5810000 	str	r0, [r1]
        38a694:	e59f101c 	ldr	r1, [pc, #1c]	; 38a6b8 <ClassInfo__13POptionDataInSFv+0x254>
        38a698:	e5c10004 	strb	r0, [r1, #4]	; fField4
        38a69c:	e5810000 	str	r0, [r1]
        38a6a0:	e1a0f00e 	mov	pc, lr
        38a6a4:	0c104f0c 	ldceq	15, cr4, [r0], -#48
        38a6a8:	0c104f14 	ldceq	15, cr4, [r0], -#80
        38a6ac:	0c104f1c 	ldceq	15, cr4, [r0], -#112
        38a6b0:	0c104f24 	ldceq	15, cr4, [r0], -#144
        38a6b4:	0c104f2c 	ldceq	15, cr4, [r0], -#176
        38a6b8:	0c104f34 	ldceq	15, cr4, [r0], -#208
        38a6bc:	e59f0000 	ldr	r0, [pc, #0]	; 38a6c4 <ClassInfo__13POptionDataInSFv+0x260>
        38a6c0:	ea61cdfb 	b	1bfdeb4 <TPCMCIA20Parser::$__ct(void)>
        38a6c4:	0c100a88 	ldceq	10, cr0, [r0], -#544
        38a6c8:	e1a0c00d 	mov	ip, sp
        38a6cc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        38a6d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        38a6d4:	e59f000c 	ldr	r0, [pc, #c]	; 38a6e8 <ClassInfo__13POptionDataInSFv+0x284>
        38a6d8:	eb6166d6 	bl	1be4238 <TAEvent::$__ct(void)>
        38a6dc:	e59f0008 	ldr	r0, [pc, #8]	; 38a6ec <ClassInfo__13POptionDataInSFv+0x288>
        38a6e0:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        38a6e4:	ea610bf0 	b	1bcd6ac <TUAsyncMessage::$__ct(void)>
        38a6e8:	0c101770 	ldceq	7, cr1, [r0], -#448
        38a6ec:	0c10177c 	ldceq	7, cr1, [r0], -#496
        38a6f0:	e1a0c00d 	mov	ip, sp
        38a6f4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        38a6f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        38a6fc:	e3a01000 	mov	r1, #0	; 0x0
        38a700:	e59f0018 	ldr	r0, [pc, #18]	; 38a720 <ClassInfo__13POptionDataInSFv+0x2bc>
        38a704:	e5c01004 	strb	r1, [r0, #4]	; fField4
        38a708:	e5801000 	str	r1, [r0]
        38a70c:	e59f0010 	ldr	r0, [pc, #10]	; 38a724 <ClassInfo__13POptionDataInSFv+0x2c0>
        38a710:	eb610be5 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        38a714:	e59f000c 	ldr	r0, [pc, #c]	; 38a728 <ClassInfo__13POptionDataInSFv+0x2c4>
        38a718:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        38a71c:	ea6107d4 	b	1bcc674 <TCardMessage::$__ct(void)>
        38a720:	0c10099c 	ldceq	9, cr0, [r0], -#624
        38a724:	0c1009a4 	ldceq	9, cr0, [r0], -#656
        38a728:	0c1009b4 	ldceq	9, cr0, [r0], -#720
        38a72c:	e1a0f00e 	mov	pc, lr
        38a730:	e3a00000 	mov	r0, #0	; 0x0
        38a734:	e59f1004 	ldr	r1, [pc, #4]	; 38a740 <ClassInfo__13POptionDataInSFv+0x2dc>	; fField4
        38a738:	e5810000 	str	r0, [r1]
        38a73c:	e1a0f00e 	mov	pc, lr
        38a740:	0c104d98 	ldceq	13, cr4, [r0], -#608
    */
}

