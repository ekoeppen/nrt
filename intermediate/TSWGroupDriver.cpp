#include "include/TSWGroupDriver.h"

/**
 * Symbol: Sizeof__14TSWGroupDriverSFv
 * Address: 0021dbf4
 */
void TSWGroupDriver::Sizeof() {
    /*
        21dbf4:	e3a00030 	mov	r0, #48	; 0x30
        21dbf8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSWGroupDriver::CancelJob(unsigned char)
 * Address: 0021dbfc
 */
TSWGroupDriver::CancelJob(unsigned char) {
    /*
        21dbfc:	e31100ff 	tst	r1, #255	; 0xff
        21dc00:	13a01001 	movne	r1, #1	; 0x1
        21dc04:	15c0102d 	strneb	r1, [r0, #45]	; fField45
        21dc08:	03a0101c 	moveq	r1, #28	; 0x1c
        21dc0c:	02411b2b 	subeq	r1, r1, #44032	; 0xac00
        21dc10:	05a01028 	streq	r1, [r0, #40]!	; fField40
        21dc14:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSWGroupDriver::GetPageInfo(PrPageInfo *)
 * Address: 0021dc18
 */
TSWGroupDriver::GetPageInfo(PrPageInfo *) {
    /*
        21dc18:	e1a0c00d 	mov	ip, sp
        21dc1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21dc20:	e24cb004 	sub	fp, ip, #4	; 0x4
        21dc24:	e24dd018 	sub	sp, sp, #24	; 0x18
        21dc28:	e28d200c 	add	r2, sp, #12	; 0xc
        21dc2c:	e59fe048 	ldr	lr, [pc, #48]	; 21dc7c <TSWGroupDriver::GetPageInfo(PrPageInfo *)+0x64>
        21dc30:	e89e5008 	ldmia	lr, {r3, ip, lr}
        21dc34:	e8825008 	stmia	r2, {r3, ip, lr}
        21dc38:	e59fe040 	ldr	lr, [pc, #40]	; 21dc80 <TSWGroupDriver::GetPageInfo(PrPageInfo *)+0x68>	; fField40
        21dc3c:	e89e100c 	ldmia	lr, {r2, r3, ip}
        21dc40:	e88d100c 	stmia	sp, {r2, r3, ip}
        21dc44:	e1a04001 	mov	r4, r1
        21dc48:	e5900010 	ldr	r0, [r0, #16]	; fField16
        21dc4c:	e59f1030 	ldr	r1, [pc, #30]	; 21dc84 <TSWGroupDriver::GetPageInfo(PrPageInfo *)+0x6c>
        21dc50:	e5911000 	ldr	r1, [r1]
        21dc54:	e5911000 	ldr	r1, [r1]
        21dc58:	e5900008 	ldr	r0, [r0, #8]	; fField8
        21dc5c:	e5900000 	ldr	r0, [r0]
        21dc60:	eb669972 	bl	1bc4230 <$EQRef__FlT1>
        21dc64:	e3300000 	teq	r0, #0	; 0x0
        21dc68:	028d000c 	addeq	r0, sp, #12	; 0xc
        21dc6c:	11a0000d 	movne	r0, sp
        21dc70:	e8901009 	ldmia	r0, {r0, r3, ip}
        21dc74:	e8841009 	stmia	r4, {r0, r3, ip}
        21dc78:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        21dc7c:	0037a6e8 	eoreqs	sl, r7, r8, ror #13
        21dc80:	0037a6f4 	ldreqsh	sl, [r7], -r4
        21dc84:	00681d08 	rsbeq	r1, r8, r8, lsl #26
    */
}

/**
 * Symbol: TSWGroupDriver::GetStatus(void)
 * Address: 0021dc88
 */
TSWGroupDriver::GetStatus(void) {
    /*
        21dc88:	e1a0c00d 	mov	ip, sp
        21dc8c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21dc90:	e24cb004 	sub	fp, ip, #4	; 0x4
        21dc94:	e1a04000 	mov	r4, r0
        21dc98:	e24dd008 	sub	sp, sp, #8	; 0x8
        21dc9c:	eb64a1ad 	bl	1b46358 <TSWGroupDriver::$ContinueIO(void)>
        21dca0:	e3300000 	teq	r0, #0	; 0x0
        21dca4:	0a000045 	beq	21ddc0 <TSWGroupDriver::GetStatus(void)+0x138>
        21dca8:	e3a0001e 	mov	r0, #30	; 0x1e
        21dcac:	e2400b2b 	sub	r0, r0, #44032	; 0xac00
        21dcb0:	e5840028 	str	r0, [r4, #40]	; fField40
        21dcb4:	e1a00004 	mov	r0, r4
        21dcb8:	e3a01031 	mov	r1, #49	; 0x31
        21dcbc:	eb64a5af 	bl	1b47380 <TSWGroupDriver::$SendImmediateCommand(char)>
        21dcc0:	e28d1004 	add	r1, sp, #4	; 0x4
        21dcc4:	e1a00004 	mov	r0, r4
        21dcc8:	e3a02001 	mov	r2, #1	; 0x1
        21dccc:	eb64a5b0 	bl	1b47394 <TSWGroupDriver::$Receive(char *, long)>
        21dcd0:	e3300000 	teq	r0, #0	; 0x0
        21dcd4:	0a000039 	beq	21ddc0 <TSWGroupDriver::GetStatus(void)+0x138>
        21dcd8:	e1a00004 	mov	r0, r4
        21dcdc:	e3a01032 	mov	r1, #50	; 0x32
        21dce0:	eb64a5a6 	bl	1b47380 <TSWGroupDriver::$SendImmediateCommand(char)>
        21dce4:	e1a0100d 	mov	r1, sp
        21dce8:	e1a00004 	mov	r0, r4
        21dcec:	e3a02001 	mov	r2, #1	; 0x1
        21dcf0:	eb64a5a7 	bl	1b47394 <TSWGroupDriver::$Receive(char *, long)>
        21dcf4:	e3300000 	teq	r0, #0	; 0x0
        21dcf8:	0a000030 	beq	21ddc0 <TSWGroupDriver::GetStatus(void)+0x138>
        21dcfc:	e3a00000 	mov	r0, #0	; 0x0
        21dd00:	e5840028 	str	r0, [r4, #40]	; fField40
        21dd04:	e5dd0004 	ldrb	r0, [sp, #4]
        21dd08:	e3100001 	tst	r0, #1	; 0x1
        21dd0c:	03a00fed 	moveq	r0, #948	; 0x3b4
        21dd10:	02400a0b 	subeq	r0, r0, #45056	; 0xb000
        21dd14:	05840028 	streq	r0, [r4, #40]	; fField40
        21dd18:	e5dd0000 	ldrb	r0, [sp]
        21dd1c:	e3100001 	tst	r0, #1	; 0x1
        21dd20:	e3a000b6 	mov	r0, #182	; 0xb6
        21dd24:	e2400cad 	sub	r0, r0, #44288	; 0xad00
        21dd28:	15840028 	strne	r0, [r4, #40]	; fField40
        21dd2c:	e5dd1000 	ldrb	r1, [sp]
        21dd30:	e3110008 	tst	r1, #8	; 0x8
        21dd34:	15840028 	strne	r0, [r4, #40]	; fField40
        21dd38:	e5dd0000 	ldrb	r0, [sp]
        21dd3c:	e3100020 	tst	r0, #32	; 0x20
        21dd40:	159f007c 	ldrne	r0, [pc, #7c]	; 21ddc4 <TSWGroupDriver::GetStatus(void)+0x13c>
        21dd44:	15840028 	strne	r0, [r4, #40]	; fField40
        21dd48:	e5dd0000 	ldrb	r0, [sp]
        21dd4c:	e3100004 	tst	r0, #4	; 0x4
        21dd50:	13a00fee 	movne	r0, #952	; 0x3b8
        21dd54:	12400a0b 	subne	r0, r0, #45056	; 0xb000
        21dd58:	15840028 	strne	r0, [r4, #40]	; fField40
        21dd5c:	e5dd0004 	ldrb	r0, [sp, #4]
        21dd60:	e3100040 	tst	r0, #64	; 0x40
        21dd64:	13a000b5 	movne	r0, #181	; 0xb5
        21dd68:	12400cad 	subne	r0, r0, #44288	; 0xad00
        21dd6c:	15840028 	strne	r0, [r4, #40]	; fField40
        21dd70:	e5dd0000 	ldrb	r0, [sp]
        21dd74:	e3100010 	tst	r0, #16	; 0x10
        21dd78:	e3a00e42 	mov	r0, #1056	; 0x420
        21dd7c:	e2400a0b 	sub	r0, r0, #45056	; 0xb000
        21dd80:	15840028 	strne	r0, [r4, #40]	; fField40
        21dd84:	e5dd1000 	ldrb	r1, [sp]
        21dd88:	e3110040 	tst	r1, #64	; 0x40
        21dd8c:	15840028 	strne	r0, [r4, #40]	; fField40
        21dd90:	e5dd1000 	ldrb	r1, [sp]
        21dd94:	e3110080 	tst	r1, #128	; 0x80
        21dd98:	15840028 	strne	r0, [r4, #40]	; fField40
        21dd9c:	e5dd1004 	ldrb	r1, [sp, #4]
        21dda0:	e3110002 	tst	r1, #2	; 0x2
        21dda4:	15840028 	strne	r0, [r4, #40]	; fField40
        21dda8:	e5dd1004 	ldrb	r1, [sp, #4]
        21ddac:	e3110004 	tst	r1, #4	; 0x4
        21ddb0:	15840028 	strne	r0, [r4, #40]	; fField40
        21ddb4:	e5dd1004 	ldrb	r1, [sp, #4]
        21ddb8:	e3110080 	tst	r1, #128	; 0x80
        21ddbc:	15a40028 	strne	r0, [r4, #40]!	; fField40
        21ddc0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        21ddc4:	ffff53b7 	swinv	0x00ff53b7
    */
}

/**
 * Symbol: TSWGroupDriver::GetPrinterID(void)
 * Address: 0021ddc8
 */
TSWGroupDriver::GetPrinterID(void) {
    /*
        21ddc8:	e1a0c00d 	mov	ip, sp
        21ddcc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21ddd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ddd4:	e1a04000 	mov	r4, r0
        21ddd8:	e24dd010 	sub	sp, sp, #16	; 0x10
        21dddc:	eb64a15d 	bl	1b46358 <TSWGroupDriver::$ContinueIO(void)>
        21dde0:	e3a07000 	mov	r7, #0	; 0x0
        21dde4:	e3300000 	teq	r0, #0	; 0x0
        21dde8:	0a000042 	beq	21def8 <TSWGroupDriver::GetPrinterID(void)+0x130>
        21ddec:	e5847028 	str	r7, [r4, #40]	; fField40
        21ddf0:	e1a00004 	mov	r0, r4
        21ddf4:	e3a0103f 	mov	r1, #63	; 0x3f
        21ddf8:	eb64a159 	bl	1b46364 <TSWGroupDriver::$SendCommand(char)>
        21ddfc:	e1a0100d 	mov	r1, sp
        21de00:	e1a00004 	mov	r0, r4
        21de04:	e3a02003 	mov	r2, #3	; 0x3
        21de08:	eb64a561 	bl	1b47394 <TSWGroupDriver::$Receive(char *, long)>
        21de0c:	e3300000 	teq	r0, #0	; 0x0
        21de10:	0a000035 	beq	21deec <TSWGroupDriver::GetPrinterID(void)+0x124>
        21de14:	e1a0000d 	mov	r0, sp
        21de18:	e28f1f1a 	add	r1, pc, #104	; 0x68
        21de1c:	e3a02003 	mov	r2, #3	; 0x3
        21de20:	eb67044f 	bl	1bdef64 <$EqualBytes>
        21de24:	e3a05001 	mov	r5, #1	; 0x1
        21de28:	e3a06901 	mov	r6, #16384	; 0x4000
        21de2c:	e3300000 	teq	r0, #0	; 0x0
        21de30:	11a00005 	movne	r0, r5
        21de34:	15a4501c 	strne	r5, [r4, #28]!	; fField28
        21de38:	15a46008 	strne	r6, [r4, #8]!	; fField8
        21de3c:	1a00002e 	bne	21defc <TSWGroupDriver::GetPrinterID(void)+0x134>
        21de40:	e1a0000d 	mov	r0, sp
        21de44:	e28f1f10 	add	r1, pc, #64	; 0x40
        21de48:	e3a02003 	mov	r2, #3	; 0x3
        21de4c:	eb670444 	bl	1bdef64 <$EqualBytes>
        21de50:	e3300000 	teq	r0, #0	; 0x0
        21de54:	13a00002 	movne	r0, #2	; 0x2
        21de58:	1a000006 	bne	21de78 <TSWGroupDriver::GetPrinterID(void)+0xb0>
        21de5c:	e1a0000d 	mov	r0, sp
        21de60:	e28f1f0b 	add	r1, pc, #44	; 0x2c
        21de64:	e3a02003 	mov	r2, #3	; 0x3
        21de68:	eb67043d 	bl	1bdef64 <$EqualBytes>
        21de6c:	e3300000 	teq	r0, #0	; 0x0
        21de70:	0a000008 	beq	21de98 <TSWGroupDriver::GetPrinterID(void)+0xd0>
        21de74:	e3a00003 	mov	r0, #3	; 0x3
        21de78:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        21de7c:	e5a46008 	str	r6, [r4, #8]!	; fField8
        21de80:	e1a00005 	mov	r0, r5
        21de84:	ea00001c 	b	21defc <TSWGroupDriver::GetPrinterID(void)+0x134>
        21de88:	53570d00 	cmppl	r7, #0	; 0x0
        21de8c:	5357330d 	cmppl	r7, #872415232	; 0x34000000
        21de90:	00000000 	andeq	r0, r0, r0
        21de94:	43530d00 	cmpmi	r3, #0	; 0x0
        21de98:	e1a0000d 	mov	r0, sp
        21de9c:	e28f1f17 	add	r1, pc, #92	; 0x5c
        21dea0:	e3a02003 	mov	r2, #3	; 0x3
        21dea4:	eb67042e 	bl	1bdef64 <$EqualBytes>
        21dea8:	e3300000 	teq	r0, #0	; 0x0
        21deac:	0a00000e 	beq	21deec <TSWGroupDriver::GetPrinterID(void)+0x124>
        21deb0:	e28d1003 	add	r1, sp, #3	; 0x3
        21deb4:	e1a00004 	mov	r0, r4
        21deb8:	e3a02002 	mov	r2, #2	; 0x2
        21debc:	eb64a534 	bl	1b47394 <TSWGroupDriver::$Receive(char *, long)>
        21dec0:	e3300000 	teq	r0, #0	; 0x0
        21dec4:	0a000008 	beq	21deec <TSWGroupDriver::GetPrinterID(void)+0x124>
        21dec8:	e1a0000d 	mov	r0, sp
        21decc:	e28f1f0b 	add	r1, pc, #44	; 0x2c
        21ded0:	e3a02005 	mov	r2, #5	; 0x5
        21ded4:	eb670422 	bl	1bdef64 <$EqualBytes>
        21ded8:	e3300000 	teq	r0, #0	; 0x0
        21dedc:	13a00b02 	movne	r0, #2048	; 0x800
        21dee0:	15a4701c 	strne	r7, [r4, #28]!	; fField28
        21dee4:	15840008 	strne	r0, [r4, #8]	; fField8
        21dee8:	1affffe4 	bne	21de80 <TSWGroupDriver::GetPrinterID(void)+0xb8>
        21deec:	e3a0001e 	mov	r0, #30	; 0x1e
        21def0:	e2400b2b 	sub	r0, r0, #44032	; 0xac00
        21def4:	e5a40028 	str	r0, [r4, #40]!	; fField40
        21def8:	e1a00007 	mov	r0, r7
        21defc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        21df00:	494a3130 	stmmidb	sl, {r4, r5, r8, ip, sp}^
        21df04:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TSWGroupDriver::ImageBand(PixelMap *, Rect const *)
 * Address: 0021df08
 */
TSWGroupDriver::ImageBand(PixelMap *, Rect const *) {
    /*
        21df08:	e1a0c00d 	mov	ip, sp
        21df0c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        21df10:	e24cb004 	sub	fp, ip, #4	; 0x4
        21df14:	e1a04000 	mov	r4, r0
        21df18:	e1a05001 	mov	r5, r1
        21df1c:	e1a06002 	mov	r6, r2
        21df20:	e24ddfbd 	sub	sp, sp, #756	; 0x2f4
        21df24:	e5921004 	ldr	r1, [r2, #4]
        21df28:	e1a01841 	mov	r1, r1, asr #16
        21df2c:	e5920000 	ldr	r0, [r2]
        21df30:	e0510840 	subs	r0, r1, r0, asr #16
        21df34:	e3a09000 	mov	r9, #0	; 0x0
        21df38:	01a00009 	moveq	r0, r9
        21df3c:	0a000004 	beq	21df54 <TSWGroupDriver::ImageBand(PixelMap *, Rect const *)+0x4c>
        21df40:	e1a00004 	mov	r0, r4
        21df44:	eb64a103 	bl	1b46358 <TSWGroupDriver::$ContinueIO(void)>
        21df48:	e3300000 	teq	r0, #0	; 0x0
        21df4c:	1a000001 	bne	21df58 <TSWGroupDriver::ImageBand(PixelMap *, Rect const *)+0x50>
        21df50:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        21df54:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        21df58:	e3a00052 	mov	r0, #82	; 0x52
        21df5c:	e5cd0004 	strb	r0, [sp, #4]
        21df60:	e5960002 	ldr	r0, [r6, #2]
        21df64:	e1a00820 	mov	r0, r0, lsr #16
        21df68:	e5cd0005 	strb	r0, [sp, #5]
        21df6c:	e5960002 	ldr	r0, [r6, #2]
        21df70:	e1a00820 	mov	r0, r0, lsr #16
        21df74:	e1a00440 	mov	r0, r0, asr #8
        21df78:	e5cd0006 	strb	r0, [sp, #6]
        21df7c:	e5960000 	ldr	r0, [r6]
        21df80:	e1a00820 	mov	r0, r0, lsr #16
        21df84:	e5cd0007 	strb	r0, [sp, #7]
        21df88:	e5960000 	ldr	r0, [r6]
        21df8c:	e1a00820 	mov	r0, r0, lsr #16
        21df90:	e1a00440 	mov	r0, r0, asr #8
        21df94:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        21df98:	e5960006 	ldr	r0, [r6, #6]
        21df9c:	e1a00820 	mov	r0, r0, lsr #16
        21dfa0:	e2400001 	sub	r0, r0, #1	; 0x1
        21dfa4:	e5cd0009 	strb	r0, [sp, #9]
        21dfa8:	e5960006 	ldr	r0, [r6, #6]
        21dfac:	e1a00820 	mov	r0, r0, lsr #16
        21dfb0:	e2400001 	sub	r0, r0, #1	; 0x1
        21dfb4:	e1a00440 	mov	r0, r0, asr #8
        21dfb8:	e5cd000a 	strb	r0, [sp, #10]
        21dfbc:	e5960004 	ldr	r0, [r6, #4]
        21dfc0:	e1a00820 	mov	r0, r0, lsr #16
        21dfc4:	e2400001 	sub	r0, r0, #1	; 0x1
        21dfc8:	e5cd000b 	strb	r0, [sp, #11]
        21dfcc:	e5960004 	ldr	r0, [r6, #4]
        21dfd0:	e1a00820 	mov	r0, r0, lsr #16
        21dfd4:	e2400001 	sub	r0, r0, #1	; 0x1
        21dfd8:	e1a00440 	mov	r0, r0, asr #8
        21dfdc:	e5cd000c 	strb	r0, [sp, #12]
        21dfe0:	e3a02009 	mov	r2, #9	; 0x9
        21dfe4:	e5950000 	ldr	r0, [r5]
        21dfe8:	e5953008 	ldr	r3, [r5, #8]	; fField8
        21dfec:	e5961000 	ldr	r1, [r6]
        21dff0:	e1a01841 	mov	r1, r1, asr #16
        21dff4:	e041c843 	sub	ip, r1, r3, asr #16
        21dff8:	e5953004 	ldr	r3, [r5, #4]
        21dffc:	e1a03843 	mov	r3, r3, asr #16
        21e000:	e023039c 	mla	r3, ip, r3, r0
        21e004:	e5960002 	ldr	r0, [r6, #2]
        21e008:	e1a00840 	mov	r0, r0, asr #16
        21e00c:	e595c00a 	ldr	ip, [r5, #10]
        21e010:	e040c84c 	sub	ip, r0, ip, asr #16
        21e014:	e08371cc 	add	r7, r3, ip, asr #3
        21e018:	e5963004 	ldr	r3, [r6, #4]
        21e01c:	e061a843 	rsb	sl, r1, r3, asr #16
        21e020:	e5961006 	ldr	r1, [r6, #6]
        21e024:	e0600841 	rsb	r0, r0, r1, asr #16
        21e028:	e1a081c0 	mov	r8, r0, asr #3
        21e02c:	e3a06000 	mov	r6, #0	; 0x0
        21e030:	e2881020 	add	r1, r8, #32	; 0x20
        21e034:	e2610e2f 	rsb	r0, r1, #752	; 0x2f0
        21e038:	e35a0000 	cmp	sl, #0	; 0x0
        21e03c:	e58d0000 	str	r0, [sp]
        21e040:	da000038 	ble	21e128 <TSWGroupDriver::ImageBand(PixelMap *, Rect const *)+0x220>
        21e044:	e59d0000 	ldr	r0, [sp]
        21e048:	e1520000 	cmp	r2, r0
        21e04c:	ba000003 	blt	21e060 <TSWGroupDriver::ImageBand(PixelMap *, Rect const *)+0x158>
        21e050:	e28d1004 	add	r1, sp, #4	; 0x4
        21e054:	e1a00004 	mov	r0, r4
        21e058:	eb64a4cf 	bl	1b4739c <TSWGroupDriver::$SendData(char *, long)>
        21e05c:	e3a02000 	mov	r2, #0	; 0x0
        21e060:	e3a00047 	mov	r0, #71	; 0x47
        21e064:	e2829001 	add	r9, r2, #1	; 0x1
        21e068:	e28d1004 	add	r1, sp, #4	; 0x4
        21e06c:	e7c10002 	strb	r0, [r1, r2]
        21e070:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21e074:	e3300000 	teq	r0, #0	; 0x0
        21e078:	1a000006 	bne	21e098 <TSWGroupDriver::ImageBand(PixelMap *, Rect const *)+0x190>
        21e07c:	e28d0004 	add	r0, sp, #4	; 0x4
        21e080:	e0800009 	add	r0, r0, r9
        21e084:	e2802002 	add	r2, r0, #2	; 0x2
        21e088:	e1a03006 	mov	r3, r6
        21e08c:	e1a01007 	mov	r1, r7
        21e090:	e1a00008 	mov	r0, r8
        21e094:	ea00000e 	b	21e0d4 <TSWGroupDriver::ImageBand(PixelMap *, Rect const *)+0x1cc>
        21e098:	e3360000 	teq	r6, #0	; 0x0
        21e09c:	0a000005 	beq	21e0b8 <TSWGroupDriver::ImageBand(PixelMap *, Rect const *)+0x1b0>
        21e0a0:	e1a03008 	mov	r3, r8
        21e0a4:	e1a02006 	mov	r2, r6
        21e0a8:	e1a01006 	mov	r1, r6
        21e0ac:	e1a00007 	mov	r0, r7
        21e0b0:	eb6707d8 	bl	1be0018 <$XORBytes>
        21e0b4:	ea000000 	b	21e0bc <TSWGroupDriver::ImageBand(PixelMap *, Rect const *)+0x1b4>
        21e0b8:	e1a06007 	mov	r6, r7
        21e0bc:	e28d0004 	add	r0, sp, #4	; 0x4
        21e0c0:	e0800009 	add	r0, r0, r9
        21e0c4:	e2802002 	add	r2, r0, #2	; 0x2
        21e0c8:	e1a01006 	mov	r1, r6
        21e0cc:	e1a00008 	mov	r0, r8
        21e0d0:	e3a03000 	mov	r3, #0	; 0x0
        21e0d4:	eb6745ab 	bl	1bef788 <$EncodeLine__FlPcN22>
        21e0d8:	e2892001 	add	r2, r9, #1	; 0x1
        21e0dc:	e28d3004 	add	r3, sp, #4	; 0x4
        21e0e0:	e7c30009 	strb	r0, [r3, r9]
        21e0e4:	e1a03440 	mov	r3, r0, asr #8
        21e0e8:	e2821001 	add	r1, r2, #1	; 0x1
        21e0ec:	e28dc004 	add	ip, sp, #4	; 0x4
        21e0f0:	e7cc3002 	strb	r3, [ip, r2]
        21e0f4:	e0810000 	add	r0, r1, r0
        21e0f8:	e3a09000 	mov	r9, #0	; 0x0
        21e0fc:	e2802001 	add	r2, r0, #1	; 0x1
        21e100:	e28d1004 	add	r1, sp, #4	; 0x4
        21e104:	e7c19000 	strb	r9, [r1, r0]
        21e108:	e1a06007 	mov	r6, r7
        21e10c:	e5950004 	ldr	r0, [r5, #4]
        21e110:	e0877840 	add	r7, r7, r0, asr #16
        21e114:	e24aa001 	sub	sl, sl, #1	; 0x1
        21e118:	e35a0000 	cmp	sl, #0	; 0x0
        21e11c:	caffffc8 	bgt	21e044 <TSWGroupDriver::ImageBand(PixelMap *, Rect const *)+0x13c>
        21e120:	e3320000 	teq	r2, #0	; 0x0
        21e124:	0a000002 	beq	21e134 <TSWGroupDriver::ImageBand(PixelMap *, Rect const *)+0x22c>
        21e128:	e28d1004 	add	r1, sp, #4	; 0x4
        21e12c:	e1a00004 	mov	r0, r4
        21e130:	eb64a499 	bl	1b4739c <TSWGroupDriver::$SendData(char *, long)>
        21e134:	e1a00004 	mov	r0, r4
        21e138:	eb64a088 	bl	1b46360 <TSWGroupDriver::$PrinterCanPrint(void)>
        21e13c:	eaffff83 	b	21df50 <TSWGroupDriver::ImageBand(PixelMap *, Rect const *)+0x48>
    */
}

/**
 * Symbol: TSWGroupDriver::InitializeConnection(void)
 * Address: 0021e140
 */
TSWGroupDriver::InitializeConnection(void) {
    /*
        21e140:	e1a0c00d 	mov	ip, sp
        21e144:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21e148:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e14c:	e1a04000 	mov	r4, r0
        21e150:	e24dd018 	sub	sp, sp, #24	; 0x18
        21e154:	e1a0000d 	mov	r0, sp
        21e158:	eb665e61 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        21e15c:	e1a0000d 	mov	r0, sp
        21e160:	eb666ac5 	bl	1bb8c7c <TOptionArray::$Init(void)>
        21e164:	e5840028 	str	r0, [r4, #40]	; fField40
        21e168:	e3300000 	teq	r0, #0	; 0x0
        21e16c:	0a000005 	beq	21e188 <TSWGroupDriver::InitializeConnection(void)+0x48>
        21e170:	e3a04000 	mov	r4, #0	; 0x0
        21e174:	e1a0000d 	mov	r0, sp
        21e178:	e3a01000 	mov	r1, #0	; 0x0
        21e17c:	eb66626a 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        21e180:	e1a00004 	mov	r0, r4
        21e184:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        21e188:	e24dd00c 	sub	sp, sp, #12	; 0xc
        21e18c:	e1a0000d 	mov	r0, sp
        21e190:	e3a01303 	mov	r1, #201326592	; 0xc000000
        21e194:	eb666263 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        21e198:	e1a0000d 	mov	r0, sp
        21e19c:	e59f1034 	ldr	r1, [pc, #34]	; 21e1d8 <TSWGroupDriver::InitializeConnection(void)+0x98>
        21e1a0:	eb6672e3 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
        21e1a4:	e1a0200d 	mov	r2, sp
        21e1a8:	e59d100c 	ldr	r1, [sp, #12]
        21e1ac:	e28d000c 	add	r0, sp, #12	; 0xc
        21e1b0:	eb666ebb 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        21e1b4:	e5840028 	str	r0, [r4, #40]	; fField40
        21e1b8:	e3300000 	teq	r0, #0	; 0x0
        21e1bc:	0a000006 	beq	21e1dc <TSWGroupDriver::InitializeConnection(void)+0x9c>
        21e1c0:	e3a04000 	mov	r4, #0	; 0x0
        21e1c4:	e28d000c 	add	r0, sp, #12	; 0xc
        21e1c8:	e3a01000 	mov	r1, #0	; 0x0
        21e1cc:	eb666256 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        21e1d0:	e1a00004 	mov	r0, r4
        21e1d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        21e1d8:	61736572 	cmnvs	r3, r2, ror r5
        21e1dc:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        21e1e0:	e1a0000d 	mov	r0, sp
        21e1e4:	eb667701 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
        21e1e8:	e3a00ce1 	mov	r0, #57600	; 0xe100
        21e1ec:	e58d0018 	str	r0, [sp, #24]	; fField24
        21e1f0:	e1a0200d 	mov	r2, sp
        21e1f4:	e59d1028 	ldr	r1, [sp, #40]	; fField40
        21e1f8:	e28d0028 	add	r0, sp, #40	; 0x28
        21e1fc:	eb666ea8 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        21e200:	e5840028 	str	r0, [r4, #40]	; fField40
        21e204:	e3300000 	teq	r0, #0	; 0x0
        21e208:	0a000001 	beq	21e214 <TSWGroupDriver::InitializeConnection(void)+0xd4>
        21e20c:	e3a04000 	mov	r4, #0	; 0x0
        21e210:	ea000010 	b	21e258 <TSWGroupDriver::InitializeConnection(void)+0x118>
        21e214:	e2841018 	add	r1, r4, #24	; 0x18
        21e218:	e28d0028 	add	r0, sp, #40	; 0x28
        21e21c:	e3a02000 	mov	r2, #0	; 0x0
        21e220:	eb66665e 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
        21e224:	e5840028 	str	r0, [r4, #40]	; fField40
        21e228:	e3300000 	teq	r0, #0	; 0x0
        21e22c:	1afffff6 	bne	21e20c <TSWGroupDriver::InitializeConnection(void)+0xcc>
        21e230:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21e234:	e3300000 	teq	r0, #0	; 0x0
        21e238:	0afffff3 	beq	21e20c <TSWGroupDriver::InitializeConnection(void)+0xcc>
        21e23c:	e3a01000 	mov	r1, #0	; 0x0
        21e240:	eb666a72 	bl	1bb8c10 <TEndpoint::$EasyOpen(unsigned long)>
        21e244:	e5a40028 	str	r0, [r4, #40]!	; fField40
        21e248:	e3300000 	teq	r0, #0	; 0x0
        21e24c:	13a00000 	movne	r0, #0	; 0x0
        21e250:	03a00001 	moveq	r0, #1	; 0x1
        21e254:	e20040ff 	and	r4, r0, #255	; 0xff
        21e258:	e28d0028 	add	r0, sp, #40	; 0x28
        21e25c:	e3a01000 	mov	r1, #0	; 0x0
        21e260:	eb666231 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        21e264:	e1a00004 	mov	r0, r4
        21e268:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::InitializeFields(void)
 * Address: 0021e26c
 */
TSWGroupDriver::InitializeFields(void) {
    /*
        21e26c:	e3a01000 	mov	r1, #0	; 0x0
        21e270:	e5801018 	str	r1, [r0, #24]	; fField24
        21e274:	e5801028 	str	r1, [r0, #40]	; fField40
        21e278:	e5c0102c 	strb	r1, [r0, #44]	; fField44
        21e27c:	e3a02a01 	mov	r2, #4096	; 0x1000
        21e280:	e5802020 	str	r2, [r0, #32]	; fField32
        21e284:	e3a02b02 	mov	r2, #2048	; 0x800
        21e288:	e5802024 	str	r2, [r0, #36]	; fField36
        21e28c:	e5c0102d 	strb	r1, [r0, #45]	; fField45
        21e290:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSWGroupDriver::IsProblemResolved(void)
 * Address: 0021e294
 */
TSWGroupDriver::IsProblemResolved(void) {
    /*
        21e294:	e1a0c00d 	mov	ip, sp
        21e298:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21e29c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e2a0:	e1a04000 	mov	r4, r0
        21e2a4:	e3a06001 	mov	r6, #1	; 0x1
        21e2a8:	e5905028 	ldr	r5, [r0, #40]	; fField40
        21e2ac:	e285cb2b 	add	ip, r5, #44032	; 0xac00
        21e2b0:	e37c0048 	cmn	ip, #72	; 0x48
        21e2b4:	1285cb2b 	addne	ip, r5, #44032	; 0xac00
        21e2b8:	137c004b 	cmnne	ip, #75	; 0x4b
        21e2bc:	1a000002 	bne	21e2cc <TSWGroupDriver::IsProblemResolved(void)+0x38>
        21e2c0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21e2c4:	e3500001 	cmp	r0, #1	; 0x1
        21e2c8:	aa000005 	bge	21e2e4 <TSWGroupDriver::IsProblemResolved(void)+0x50>
        21e2cc:	e1a00004 	mov	r0, r4
        21e2d0:	eb64a42b 	bl	1b47384 <TSWGroupDriver::$GetStatus(void)>
        21e2d4:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        21e2d8:	e1300005 	teq	r0, r5
        21e2dc:	13a00000 	movne	r0, #0	; 0x0
        21e2e0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        21e2e4:	e1a00006 	mov	r0, r6
        21e2e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::Open(void)
 * Address: 0021e2ec
 */
TSWGroupDriver::Open(void) {
    /*
        21e2ec:	e1a0c00d 	mov	ip, sp
        21e2f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21e2f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e2f8:	e1a04000 	mov	r4, r0
        21e2fc:	e3a05000 	mov	r5, #0	; 0x0
        21e300:	eb64a427 	bl	1b473a4 <TSWGroupDriver::$InitializeFields(void)>
        21e304:	e1a00004 	mov	r0, r4
        21e308:	eb64a424 	bl	1b473a0 <TSWGroupDriver::$InitializeConnection(void)>
        21e30c:	e3300000 	teq	r0, #0	; 0x0
        21e310:	059f005c 	ldreq	r0, [pc, #5c]	; 21e374 <TSWGroupDriver::Open(void)+0x88>
        21e314:	0a000014 	beq	21e36c <TSWGroupDriver::Open(void)+0x80>
        21e318:	e3a05001 	mov	r5, #1	; 0x1
        21e31c:	e1a00004 	mov	r0, r4
        21e320:	eb64a012 	bl	1b46370 <TSWGroupDriver::$ConnectToPrinter(void)>
        21e324:	e3300000 	teq	r0, #0	; 0x0
        21e328:	1a000012 	bne	21e378 <TSWGroupDriver::Open(void)+0x8c>
        21e32c:	e1a00004 	mov	r0, r4
        21e330:	e3a01049 	mov	r1, #73	; 0x49
        21e334:	eb64a411 	bl	1b47380 <TSWGroupDriver::$SendImmediateCommand(char)>
        21e338:	e3a008c2 	mov	r0, #12713984	; 0xc20000
        21e33c:	e2800401 	add	r0, r0, #16777216	; 0x1000000
        21e340:	e5941014 	ldr	r1, [r4, #20]	; fField20
        21e344:	eb670301 	bl	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        21e348:	e1a00004 	mov	r0, r4
        21e34c:	eb64a007 	bl	1b46370 <TSWGroupDriver::$ConnectToPrinter(void)>
        21e350:	e3300000 	teq	r0, #0	; 0x0
        21e354:	1a000007 	bne	21e378 <TSWGroupDriver::Open(void)+0x8c>
        21e358:	e1a00004 	mov	r0, r4
        21e35c:	eb64a001 	bl	1b46368 <TSWGroupDriver::$ReleaseConnection(void)>
        21e360:	e3a05000 	mov	r5, #0	; 0x0
        21e364:	e3a0001e 	mov	r0, #30	; 0x1e
        21e368:	e2400b2b 	sub	r0, r0, #44032	; 0xac00
        21e36c:	e5840028 	str	r0, [r4, #40]	; fField40
        21e370:	ea000021 	b	21e3fc <TSWGroupDriver::Open(void)+0x110>
        21e374:	ffff541f 	swinv	0x00ff541f
        21e378:	e5940028 	ldr	r0, [r4, #40]	; fField40
        21e37c:	e3300000 	teq	r0, #0	; 0x0
        21e380:	1a00001d 	bne	21e3fc <TSWGroupDriver::Open(void)+0x110>
        21e384:	e1a00004 	mov	r0, r4
        21e388:	eb64a408 	bl	1b473b0 <TSWGroupDriver::$UpdateFreeBuff(void)>
        21e38c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21e390:	e3500001 	cmp	r0, #1	; 0x1
        21e394:	ba00000f 	blt	21e3d8 <TSWGroupDriver::Open(void)+0xec>
        21e398:	e3500002 	cmp	r0, #2	; 0x2
        21e39c:	c1a00004 	movgt	r0, r4
        21e3a0:	cb64a403 	blgt	1b473b4 <TSWGroupDriver::$ShiftToHighSpeed(void)>
        21e3a4:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21e3a8:	e3300001 	teq	r0, #1	; 0x1
        21e3ac:	e1a00004 	mov	r0, r4
        21e3b0:	13a0104e 	movne	r1, #78	; 0x4e
        21e3b4:	1a00000c 	bne	21e3ec <TSWGroupDriver::Open(void)+0x100>
        21e3b8:	e3a01075 	mov	r1, #117	; 0x75
        21e3bc:	eb649fe8 	bl	1b46364 <TSWGroupDriver::$SendCommand(char)>
        21e3c0:	e1a00004 	mov	r0, r4
        21e3c4:	e3a01062 	mov	r1, #98	; 0x62
        21e3c8:	eb649fe5 	bl	1b46364 <TSWGroupDriver::$SendCommand(char)>
        21e3cc:	e1a00004 	mov	r0, r4
        21e3d0:	e3a01044 	mov	r1, #68	; 0x44
        21e3d4:	ea000004 	b	21e3ec <TSWGroupDriver::Open(void)+0x100>
        21e3d8:	e1a00004 	mov	r0, r4
        21e3dc:	e3a0106e 	mov	r1, #110	; 0x6e
        21e3e0:	eb649fdf 	bl	1b46364 <TSWGroupDriver::$SendCommand(char)>
        21e3e4:	e1a00004 	mov	r0, r4
        21e3e8:	e3a01075 	mov	r1, #117	; 0x75
        21e3ec:	eb649fdc 	bl	1b46364 <TSWGroupDriver::$SendCommand(char)>
        21e3f0:	e1a00004 	mov	r0, r4
        21e3f4:	e3a01041 	mov	r1, #65	; 0x41
        21e3f8:	eb649fd9 	bl	1b46364 <TSWGroupDriver::$SendCommand(char)>
        21e3fc:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21e400:	e3300003 	teq	r0, #3	; 0x3
        21e404:	05940028 	ldreq	r0, [r4, #40]	; fField40
        21e408:	0280cb2b 	addeq	ip, r0, #44032	; 0xac00
        21e40c:	037c004b 	cmneq	ip, #75	; 0x4b
        21e410:	03a00000 	moveq	r0, #0	; 0x0
        21e414:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        21e418:	e3350000 	teq	r5, #0	; 0x0
        21e41c:	15940028 	ldrne	r0, [r4, #40]	; fField40
        21e420:	13300000 	teqne	r0, #0	; 0x0
        21e424:	0a00000f 	beq	21e468 <TSWGroupDriver::Open(void)+0x17c>
        21e428:	e1a00004 	mov	r0, r4
        21e42c:	eb649fc9 	bl	1b46358 <TSWGroupDriver::$ContinueIO(void)>
        21e430:	e3300000 	teq	r0, #0	; 0x0
        21e434:	0a000009 	beq	21e460 <TSWGroupDriver::Open(void)+0x174>
        21e438:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21e43c:	e3500002 	cmp	r0, #2	; 0x2
        21e440:	da000006 	ble	21e460 <TSWGroupDriver::Open(void)+0x174>
        21e444:	e3300001 	teq	r0, #1	; 0x1
        21e448:	01a00004 	moveq	r0, r4
        21e44c:	03a01045 	moveq	r1, #69	; 0x45
        21e450:	0b649fc3 	bleq	1b46364 <TSWGroupDriver::$SendCommand(char)>
        21e454:	e1a00004 	mov	r0, r4
        21e458:	e3a0106c 	mov	r1, #108	; 0x6c
        21e45c:	eb649fc0 	bl	1b46364 <TSWGroupDriver::$SendCommand(char)>
        21e460:	e1a00004 	mov	r0, r4
        21e464:	eb649fbf 	bl	1b46368 <TSWGroupDriver::$ReleaseConnection(void)>
        21e468:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        21e46c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::OpenPage(void)
 * Address: 0021e470
 */
TSWGroupDriver::OpenPage(void) {
    /*
        21e470:	e1a0c00d 	mov	ip, sp
        21e474:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21e478:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e47c:	e1a04000 	mov	r4, r0
        21e480:	eb649fb6 	bl	1b46360 <TSWGroupDriver::$PrinterCanPrint(void)>
        21e484:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        21e488:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::PrinterCanPrint(void)
 * Address: 0021e48c
 */
TSWGroupDriver::PrinterCanPrint(void) {
    /*
        21e48c:	e1a0c00d 	mov	ip, sp
        21e490:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21e494:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e498:	e1a04000 	mov	r4, r0
        21e49c:	eb649fad 	bl	1b46358 <TSWGroupDriver::$ContinueIO(void)>
        21e4a0:	e3a06000 	mov	r6, #0	; 0x0
        21e4a4:	e3300000 	teq	r0, #0	; 0x0
        21e4a8:	0a00000f 	beq	21e4ec <TSWGroupDriver::PrinterCanPrint(void)+0x60>
        21e4ac:	e1a00004 	mov	r0, r4
        21e4b0:	eb64a3b3 	bl	1b47384 <TSWGroupDriver::$GetStatus(void)>
        21e4b4:	e3a05001 	mov	r5, #1	; 0x1
        21e4b8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        21e4bc:	e3300000 	teq	r0, #0	; 0x0
        21e4c0:	0a000007 	beq	21e4e4 <TSWGroupDriver::PrinterCanPrint(void)+0x58>
        21e4c4:	e1a00004 	mov	r0, r4
        21e4c8:	eb64a3ae 	bl	1b47388 <TSWGroupDriver::$ErrorIsProblem(void)>
        21e4cc:	e3300000 	teq	r0, #0	; 0x0
        21e4d0:	0a000005 	beq	21e4ec <TSWGroupDriver::PrinterCanPrint(void)+0x60>
        21e4d4:	e1a00004 	mov	r0, r4
        21e4d8:	eb649fa7 	bl	1b4637c <TSWGroupDriver::$DoHandleProblem(void)>
        21e4dc:	e3300000 	teq	r0, #0	; 0x0
        21e4e0:	1a000001 	bne	21e4ec <TSWGroupDriver::PrinterCanPrint(void)+0x60>
        21e4e4:	e1a00005 	mov	r0, r5
        21e4e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        21e4ec:	e1a00006 	mov	r0, r6
        21e4f0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::Close(void)
 * Address: 0021e4f4
 */
TSWGroupDriver::Close(void) {
    /*
        21e4f4:	e1a0c00d 	mov	ip, sp
        21e4f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21e4fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e500:	e1a04000 	mov	r4, r0
        21e504:	eb649f93 	bl	1b46358 <TSWGroupDriver::$ContinueIO(void)>
        21e508:	e3300000 	teq	r0, #0	; 0x0
        21e50c:	0a00000e 	beq	21e54c <TSWGroupDriver::Close(void)+0x58>
        21e510:	ea000002 	b	21e520 <TSWGroupDriver::Close(void)+0x2c>
        21e514:	e3a008e1 	mov	r0, #14745600	; 0xe10000
        21e518:	e5941014 	ldr	r1, [r4, #20]	; fField20
        21e51c:	eb67028b 	bl	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        21e520:	e1a00004 	mov	r0, r4
        21e524:	eb649f8c 	bl	1b4635c <TSWGroupDriver::$StillPrinting(void)>
        21e528:	e3300000 	teq	r0, #0	; 0x0
        21e52c:	0a000006 	beq	21e54c <TSWGroupDriver::Close(void)+0x58>
        21e530:	e1a00004 	mov	r0, r4
        21e534:	eb649f89 	bl	1b46360 <TSWGroupDriver::$PrinterCanPrint(void)>
        21e538:	e3300000 	teq	r0, #0	; 0x0
        21e53c:	0a000002 	beq	21e54c <TSWGroupDriver::Close(void)+0x58>
        21e540:	e5d4002d 	ldrb	r0, [r4, #45]	; fField45
        21e544:	e3300000 	teq	r0, #0	; 0x0
        21e548:	0afffff1 	beq	21e514 <TSWGroupDriver::Close(void)+0x20>
        21e54c:	e1a00004 	mov	r0, r4
        21e550:	eb649f80 	bl	1b46358 <TSWGroupDriver::$ContinueIO(void)>
        21e554:	e3300000 	teq	r0, #0	; 0x0
        21e558:	0a00000d 	beq	21e594 <TSWGroupDriver::Close(void)+0xa0>
        21e55c:	e1a00004 	mov	r0, r4
        21e560:	eb649f7c 	bl	1b46358 <TSWGroupDriver::$ContinueIO(void)>
        21e564:	e3300000 	teq	r0, #0	; 0x0
        21e568:	0a000009 	beq	21e594 <TSWGroupDriver::Close(void)+0xa0>
        21e56c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21e570:	e3500002 	cmp	r0, #2	; 0x2
        21e574:	da000006 	ble	21e594 <TSWGroupDriver::Close(void)+0xa0>
        21e578:	e3300001 	teq	r0, #1	; 0x1
        21e57c:	01a00004 	moveq	r0, r4
        21e580:	03a01045 	moveq	r1, #69	; 0x45
        21e584:	0b649f76 	bleq	1b46364 <TSWGroupDriver::$SendCommand(char)>
        21e588:	e1a00004 	mov	r0, r4
        21e58c:	e3a0106c 	mov	r1, #108	; 0x6c
        21e590:	eb649f73 	bl	1b46364 <TSWGroupDriver::$SendCommand(char)>
        21e594:	e1a00004 	mov	r0, r4
        21e598:	eb649f72 	bl	1b46368 <TSWGroupDriver::$ReleaseConnection(void)>
        21e59c:	e5941028 	ldr	r1, [r4, #40]	; fField40
        21e5a0:	e3310000 	teq	r1, #0	; 0x0
        21e5a4:	05840028 	streq	r0, [r4, #40]	; fField40
        21e5a8:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        21e5ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::ReleaseConnection(void)
 * Address: 0021e5b0
 */
TSWGroupDriver::ReleaseConnection(void) {
    /*
        21e5b0:	e1a0c00d 	mov	ip, sp
        21e5b4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21e5b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e5bc:	e3a01000 	mov	r1, #0	; 0x0
        21e5c0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        21e5c4:	e3300000 	teq	r0, #0	; 0x0
        21e5c8:	0a000001 	beq	21e5d4 <TSWGroupDriver::ReleaseConnection(void)+0x24>
        21e5cc:	eb66698d 	bl	1bb8c08 <TEndpoint::$EasyClose(void)>
        21e5d0:	e1a01000 	mov	r1, r0
        21e5d4:	e1a00001 	mov	r0, r1
        21e5d8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::SendCommand(char)
 * Address: 0021e5dc
 */
TSWGroupDriver::SendCommand(char) {
    /*
        21e5dc:	e1a0c00d 	mov	ip, sp
        21e5e0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21e5e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e5e8:	e56d1004 	strb	r1, [sp, -#4]!
        21e5ec:	e1a0100d 	mov	r1, sp
        21e5f0:	e3a02001 	mov	r2, #1	; 0x1
        21e5f4:	eb64a368 	bl	1b4739c <TSWGroupDriver::$SendData(char *, long)>
        21e5f8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::SendData(char *, long)
 * Address: 0021e5fc
 */
TSWGroupDriver::SendData(char *, long) {
    /*
        21e5fc:	e1a0c00d 	mov	ip, sp
        21e600:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
        21e604:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e608:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        21e60c:	e51b1010 	ldr	r1, [fp, -#16]	; fField16
        21e610:	eb64a369 	bl	1b473bc <TSWGroupDriver::$WaitPrinterBuffer(long)>
        21e614:	e3300000 	teq	r0, #0	; 0x0
        21e618:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        21e61c:	e3a03965 	mov	r3, #1654784	; 0x194000
        21e620:	e2833401 	add	r3, r3, #16777216	; 0x1000000
        21e624:	e92d0008 	stmdb	sp!, {r3}
        21e628:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        21e62c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        21e630:	e24b2010 	sub	r2, fp, #16	; 0x10
        21e634:	e3a03000 	mov	r3, #0	; 0x0
        21e638:	e51b1014 	ldr	r1, [fp, -#20]	; fField20
        21e63c:	eb6671c4 	bl	1bbad54 <TEndpoint::$Snd(unsigned char *, long &, unsigned long, unsigned long)>
        21e640:	e28dd004 	add	sp, sp, #4	; 0x4
        21e644:	e280cc27 	add	ip, r0, #9984	; 0x2700
        21e648:	e37c0037 	cmn	ip, #55	; 0x37
        21e64c:	03a0101c 	moveq	r1, #28	; 0x1c
        21e650:	02411b2b 	subeq	r1, r1, #44032	; 0xac00
        21e654:	051b0018 	ldreq	r0, [fp, -#24]	; fField24
        21e658:	05a01028 	streq	r1, [r0, #40]!	; fField40
        21e65c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        21e660:	e280cc27 	add	ip, r0, #9984	; 0x2700
        21e664:	e37c0025 	cmn	ip, #37	; 0x25
        21e668:	059f0008 	ldreq	r0, [pc, #8]	; 21e678 <TSWGroupDriver::SendData(char *, long)+0x7c>	; fField8
        21e66c:	051b1018 	ldreq	r1, [fp, -#24]	; fField24
        21e670:	05a10028 	streq	r0, [r1, #40]!	; fField40
        21e674:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        21e678:	ffff541b 	swinv	0x00ff541b
    */
}

/**
 * Symbol: TSWGroupDriver::SendImmediateCommand(char)
 * Address: 0021e67c
 */
TSWGroupDriver::SendImmediateCommand(char) {
    /*
        21e67c:	e1a0c00d 	mov	ip, sp
        21e680:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21e684:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e688:	e1a04000 	mov	r4, r0
        21e68c:	e20100ff 	and	r0, r1, #255	; 0xff
        21e690:	e24dd004 	sub	sp, sp, #4	; 0x4
        21e694:	e59f1070 	ldr	r1, [pc, #70]	; 21e70c <TSWGroupDriver::SendImmediateCommand(char)+0x90>
        21e698:	e5911000 	ldr	r1, [r1]
        21e69c:	e40d1004 	str	r1, [sp], -#4
        21e6a0:	e5cd0007 	strb	r0, [sp, #7]
        21e6a4:	e3a00004 	mov	r0, #4	; 0x4
        21e6a8:	e3a03965 	mov	r3, #1654784	; 0x194000
        21e6ac:	e2833401 	add	r3, r3, #16777216	; 0x1000000
        21e6b0:	e58d0000 	str	r0, [sp]
        21e6b4:	e92d0008 	stmdb	sp!, {r3}
        21e6b8:	e28d2004 	add	r2, sp, #4	; 0x4
        21e6bc:	e28d1008 	add	r1, sp, #8	; 0x8
        21e6c0:	e3a03000 	mov	r3, #0	; 0x0
        21e6c4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21e6c8:	eb6671a1 	bl	1bbad54 <TEndpoint::$Snd(unsigned char *, long &, unsigned long, unsigned long)>
        21e6cc:	e28dd004 	add	sp, sp, #4	; 0x4
        21e6d0:	e1a05000 	mov	r5, r0
        21e6d4:	e3a00a09 	mov	r0, #36864	; 0x9000
        21e6d8:	e2400004 	sub	r0, r0, #4	; 0x4
        21e6dc:	eb66f9d2 	bl	1bdce2c <$Sleep(unsigned long)>
        21e6e0:	e285cc27 	add	ip, r5, #9984	; 0x2700
        21e6e4:	e37c0037 	cmn	ip, #55	; 0x37
        21e6e8:	03a0001c 	moveq	r0, #28	; 0x1c
        21e6ec:	02400b2b 	subeq	r0, r0, #44032	; 0xac00
        21e6f0:	0a000003 	beq	21e704 <TSWGroupDriver::SendImmediateCommand(char)+0x88>
        21e6f4:	e285cc27 	add	ip, r5, #9984	; 0x2700
        21e6f8:	e37c0025 	cmn	ip, #37	; 0x25
        21e6fc:	1a000001 	bne	21e708 <TSWGroupDriver::SendImmediateCommand(char)+0x8c>
        21e700:	e59f0008 	ldr	r0, [pc, #8]	; 21e710 <TSWGroupDriver::SendImmediateCommand(char)+0x94>	; fField8
        21e704:	e5a40028 	str	r0, [r4, #40]!	; fField40
        21e708:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        21e70c:	0037a700 	eoreqs	sl, r7, r0, lsl #14
        21e710:	ffff541b 	swinv	0x00ff541b
    */
}

/**
 * Symbol: TSWGroupDriver::Receive(char *, long)
 * Address: 0021e714
 */
TSWGroupDriver::Receive(char *, long) {
    /*
        21e714:	e1a0c00d 	mov	ip, sp
        21e718:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21e71c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e720:	e1a04000 	mov	r4, r0
        21e724:	e24dd008 	sub	sp, sp, #8	; 0x8
        21e728:	e3a00000 	mov	r0, #0	; 0x0
        21e72c:	e58d2000 	str	r2, [sp]
        21e730:	e1a0c002 	mov	ip, r2
        21e734:	e3a03965 	mov	r3, #1654784	; 0x194000
        21e738:	e2833401 	add	r3, r3, #16777216	; 0x1000000
        21e73c:	e58d0004 	str	r0, [sp, #4]
        21e740:	e28d2004 	add	r2, sp, #4	; 0x4
        21e744:	e92d000c 	stmdb	sp!, {r2, r3}
        21e748:	e1a0300c 	mov	r3, ip
        21e74c:	e28d2008 	add	r2, sp, #8	; 0x8
        21e750:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21e754:	eb666d63 	bl	1bb9ce8 <TEndpoint::$Rcv(unsigned char *, long &, long, unsigned long *, unsigned long)>
        21e758:	e28dd008 	add	sp, sp, #8	; 0x8
        21e75c:	e280cc27 	add	ip, r0, #9984	; 0x2700
        21e760:	e37c0037 	cmn	ip, #55	; 0x37
        21e764:	03a0001c 	moveq	r0, #28	; 0x1c
        21e768:	02400b2b 	subeq	r0, r0, #44032	; 0xac00
        21e76c:	0a000003 	beq	21e780 <TSWGroupDriver::Receive(char *, long)+0x6c>
        21e770:	e280cc27 	add	ip, r0, #9984	; 0x2700
        21e774:	e37c0025 	cmn	ip, #37	; 0x25
        21e778:	1a000003 	bne	21e78c <TSWGroupDriver::Receive(char *, long)+0x78>
        21e77c:	e59f0004 	ldr	r0, [pc, #4]	; 21e788 <TSWGroupDriver::Receive(char *, long)+0x74>
        21e780:	e5a40028 	str	r0, [r4, #40]!	; fField40
        21e784:	ea000003 	b	21e798 <TSWGroupDriver::Receive(char *, long)+0x84>
        21e788:	ffff541b 	swinv	0x00ff541b
        21e78c:	e3300000 	teq	r0, #0	; 0x0
        21e790:	03a00001 	moveq	r0, #1	; 0x1
        21e794:	0a000000 	beq	21e79c <TSWGroupDriver::Receive(char *, long)+0x88>
        21e798:	e3a00000 	mov	r0, #0	; 0x0
        21e79c:	e20000ff 	and	r0, r0, #255	; 0xff
        21e7a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::ShiftToHighSpeed(void)
 * Address: 0021e7a4
 */
TSWGroupDriver::ShiftToHighSpeed(void) {
    /*
        21e7a4:	e1a0c00d 	mov	ip, sp
        21e7a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21e7ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e7b0:	e1a04000 	mov	r4, r0
        21e7b4:	e3a01078 	mov	r1, #120	; 0x78
        21e7b8:	eb649ee9 	bl	1b46364 <TSWGroupDriver::$SendCommand(char)>
        21e7bc:	e24dd028 	sub	sp, sp, #40	; 0x28
        21e7c0:	e1a0000d 	mov	r0, sp
        21e7c4:	e59f10d8 	ldr	r1, [pc, #d8]	; 21e8a4 <TSWGroupDriver::ShiftToHighSpeed(void)+0x100>
        21e7c8:	eb66fdb0 	bl	1bdde90 <$TimeFromNow>
        21e7cc:	e28d1020 	add	r1, sp, #32	; 0x20
        21e7d0:	e89d5000 	ldmia	sp, {ip, lr}
        21e7d4:	e8815000 	stmia	r1, {ip, lr}
        21e7d8:	e28d0008 	add	r0, sp, #8	; 0x8
        21e7dc:	eb665cc0 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        21e7e0:	e28d0008 	add	r0, sp, #8	; 0x8
        21e7e4:	eb666924 	bl	1bb8c7c <TOptionArray::$Init(void)>
        21e7e8:	e3300000 	teq	r0, #0	; 0x0
        21e7ec:	1a000009 	bne	21e818 <TSWGroupDriver::ShiftToHighSpeed(void)+0x74>
        21e7f0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        21e7f4:	e1a0000d 	mov	r0, sp
        21e7f8:	eb66757c 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
        21e7fc:	e3a00001 	mov	r0, #1	; 0x1
        21e800:	e58d0018 	str	r0, [sp, #24]	; fField24
        21e804:	e1a0200d 	mov	r2, sp
        21e808:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        21e80c:	e28d0024 	add	r0, sp, #36	; 0x24
        21e810:	eb666d23 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        21e814:	e28dd01c 	add	sp, sp, #28	; 0x1c
        21e818:	e3300000 	teq	r0, #0	; 0x0
        21e81c:	1a000004 	bne	21e834 <TSWGroupDriver::ShiftToHighSpeed(void)+0x90>
        21e820:	e28d2008 	add	r2, sp, #8	; 0x8
        21e824:	e3a03000 	mov	r3, #0	; 0x0
        21e828:	e3a01c05 	mov	r1, #1280	; 0x500
        21e82c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21e830:	eb666d28 	bl	1bb9cd8 <TEndpoint::$OptMgmt(unsigned long, TOptionArray *, unsigned long)>
        21e834:	e3300000 	teq	r0, #0	; 0x0
        21e838:	1a000005 	bne	21e854 <TSWGroupDriver::ShiftToHighSpeed(void)+0xb0>
        21e83c:	e28d0008 	add	r0, sp, #8	; 0x8
        21e840:	e3a01000 	mov	r1, #0	; 0x0
        21e844:	eb666d22 	bl	1bb9cd4 <TOptionArray::$OptionAt(long)>
        21e848:	e5900008 	ldr	r0, [r0, #8]	; fField8
        21e84c:	e1a00c00 	mov	r0, r0, lsl #24
        21e850:	e1a00c40 	mov	r0, r0, asr #24
        21e854:	e3300000 	teq	r0, #0	; 0x0
        21e858:	159f0048 	ldrne	r0, [pc, #48]	; 21e8a8 <TSWGroupDriver::ShiftToHighSpeed(void)+0x104>
        21e85c:	15840028 	strne	r0, [r4, #40]	; fField40
        21e860:	1a000005 	bne	21e87c <TSWGroupDriver::ShiftToHighSpeed(void)+0xd8>
        21e864:	e3a00000 	mov	r0, #0	; 0x0
        21e868:	e5840028 	str	r0, [r4, #40]	; fField40
        21e86c:	e28d0020 	add	r0, sp, #32	; 0x20
        21e870:	eb66f96e 	bl	1bdce30 <$SleepTill(TTime *)>
        21e874:	e1a00004 	mov	r0, r4
        21e878:	eb64a2c1 	bl	1b47384 <TSWGroupDriver::$GetStatus(void)>
        21e87c:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        21e880:	e3300000 	teq	r0, #0	; 0x0
        21e884:	13a00000 	movne	r0, #0	; 0x0
        21e888:	03a00001 	moveq	r0, #1	; 0x1
        21e88c:	e20040ff 	and	r4, r0, #255	; 0xff
        21e890:	e28d0008 	add	r0, sp, #8	; 0x8
        21e894:	e3a01000 	mov	r1, #0	; 0x0
        21e898:	eb6660a3 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        21e89c:	e1a00004 	mov	r0, r4
        21e8a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        21e8a4:	000e0f9c 	muleq	lr, ip, pc
        21e8a8:	ffff541f 	swinv	0x00ff541f
    */
}

/**
 * Symbol: TSWGroupDriver::StillPrinting(void)
 * Address: 0021e8ac
 */
TSWGroupDriver::StillPrinting(void) {
    /*
        21e8ac:	e1a0c00d 	mov	ip, sp
        21e8b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21e8b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e8b8:	e1a04000 	mov	r4, r0
        21e8bc:	e590001c 	ldr	r0, [r0, #28]	; fField28
        21e8c0:	e3a06000 	mov	r6, #0	; 0x0
        21e8c4:	e3a05001 	mov	r5, #1	; 0x1
        21e8c8:	e3300000 	teq	r0, #0	; 0x0
        21e8cc:	1a000006 	bne	21e8ec <TSWGroupDriver::StillPrinting(void)+0x40>
        21e8d0:	e1a00004 	mov	r0, r4
        21e8d4:	eb64a2b5 	bl	1b473b0 <TSWGroupDriver::$UpdateFreeBuff(void)>
        21e8d8:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        21e8dc:	e3300b0a 	teq	r0, #10240	; 0x2800
        21e8e0:	01a00006 	moveq	r0, r6
        21e8e4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        21e8e8:	ea000010 	b	21e930 <TSWGroupDriver::StillPrinting(void)+0x84>
        21e8ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        21e8f0:	e1a00004 	mov	r0, r4
        21e8f4:	e3a01031 	mov	r1, #49	; 0x31
        21e8f8:	eb64a2a0 	bl	1b47380 <TSWGroupDriver::$SendImmediateCommand(char)>
        21e8fc:	e1a0100d 	mov	r1, sp
        21e900:	e1a00004 	mov	r0, r4
        21e904:	e3a02001 	mov	r2, #1	; 0x1
        21e908:	eb64a2a1 	bl	1b47394 <TSWGroupDriver::$Receive(char *, long)>
        21e90c:	e3300000 	teq	r0, #0	; 0x0
        21e910:	01a00005 	moveq	r0, r5
        21e914:	0a000003 	beq	21e928 <TSWGroupDriver::StillPrinting(void)+0x7c>
        21e918:	e5dd0000 	ldrb	r0, [sp]
        21e91c:	e3100008 	tst	r0, #8	; 0x8
        21e920:	0a000001 	beq	21e92c <TSWGroupDriver::StillPrinting(void)+0x80>
        21e924:	e1a00006 	mov	r0, r6
        21e928:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        21e92c:	e28dd004 	add	sp, sp, #4	; 0x4
        21e930:	e1a00005 	mov	r0, r5
        21e934:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::UpdateFreeBuff(void)
 * Address: 0021e938
 */
TSWGroupDriver::UpdateFreeBuff(void) {
    /*
        21e938:	e1a0c00d 	mov	ip, sp
        21e93c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21e940:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e944:	e1a04000 	mov	r4, r0
        21e948:	e24dd010 	sub	sp, sp, #16	; 0x10
        21e94c:	e3a01042 	mov	r1, #66	; 0x42
        21e950:	eb64a28a 	bl	1b47380 <TSWGroupDriver::$SendImmediateCommand(char)>
        21e954:	e1a0100d 	mov	r1, sp
        21e958:	e1a00004 	mov	r0, r4
        21e95c:	e3a02001 	mov	r2, #1	; 0x1
        21e960:	eb64a28b 	bl	1b47394 <TSWGroupDriver::$Receive(char *, long)>
        21e964:	e3300000 	teq	r0, #0	; 0x0
        21e968:	0a000005 	beq	21e984 <TSWGroupDriver::UpdateFreeBuff(void)+0x4c>
        21e96c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21e970:	e3300000 	teq	r0, #0	; 0x0
        21e974:	e5dd0000 	ldrb	r0, [sp]
        21e978:	11a00400 	movne	r0, r0, lsl #8
        21e97c:	01a00300 	moveq	r0, r0, lsl #6
        21e980:	e5a40020 	str	r0, [r4, #32]!	; fField32
        21e984:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::WaitPrinterBuffer(long)
 * Address: 0021e988
 */
TSWGroupDriver::WaitPrinterBuffer(long) {
    /*
        21e988:	e1a0c00d 	mov	ip, sp
        21e98c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21e990:	e24cb004 	sub	fp, ip, #4	; 0x4
        21e994:	e1a04000 	mov	r4, r0
        21e998:	e1a05001 	mov	r5, r1
        21e99c:	e3a00000 	mov	r0, #0	; 0x0
        21e9a0:	ea00000a 	b	21e9d0 <TSWGroupDriver::WaitPrinterBuffer(long)+0x48>
        21e9a4:	e3a008e1 	mov	r0, #14745600	; 0xe10000
        21e9a8:	e5941014 	ldr	r1, [r4, #20]	; fField20
        21e9ac:	eb670167 	bl	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        21e9b0:	e1a00004 	mov	r0, r4
        21e9b4:	eb64a27d 	bl	1b473b0 <TSWGroupDriver::$UpdateFreeBuff(void)>
        21e9b8:	e1a00004 	mov	r0, r4
        21e9bc:	eb649e67 	bl	1b46360 <TSWGroupDriver::$PrinterCanPrint(void)>
        21e9c0:	e3300000 	teq	r0, #0	; 0x0
        21e9c4:	13a00000 	movne	r0, #0	; 0x0
        21e9c8:	03a00001 	moveq	r0, #1	; 0x1
        21e9cc:	e20000ff 	and	r0, r0, #255	; 0xff
        21e9d0:	e5941020 	ldr	r1, [r4, #32]	; fField32
        21e9d4:	e0411005 	sub	r1, r1, r5
        21e9d8:	e5942024 	ldr	r2, [r4, #36]	; fField36
        21e9dc:	e1510002 	cmp	r1, r2
        21e9e0:	aa000001 	bge	21e9ec <TSWGroupDriver::WaitPrinterBuffer(long)+0x64>
        21e9e4:	e3300000 	teq	r0, #0	; 0x0
        21e9e8:	0affffed 	beq	21e9a4 <TSWGroupDriver::WaitPrinterBuffer(long)+0x1c>
        21e9ec:	e5941020 	ldr	r1, [r4, #32]	; fField32
        21e9f0:	e0411005 	sub	r1, r1, r5
        21e9f4:	e5a41020 	str	r1, [r4, #32]!	; fField32
        21e9f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::FaxEndPage(long)
 * Address: 0021e9fc
 */
TSWGroupDriver::FaxEndPage(long) {
    /*
        21e9fc:	e3a00000 	mov	r0, #0	; 0x0
        21ea00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSWGroupDriver::ClosePage(void)
 * Address: 0021ea04
 */
TSWGroupDriver::ClosePage(void) {
    /*
        21ea04:	e1a0c00d 	mov	ip, sp
        21ea08:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21ea0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ea10:	e1a04000 	mov	r4, r0
        21ea14:	e3a0100c 	mov	r1, #12	; 0xc
        21ea18:	eb649e51 	bl	1b46364 <TSWGroupDriver::$SendCommand(char)>
        21ea1c:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        21ea20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::ConnectToPrinter(void)
 * Address: 0021ea24
 */
TSWGroupDriver::ConnectToPrinter(void) {
    /*
        21ea24:	e1a0c00d 	mov	ip, sp
        21ea28:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21ea2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ea30:	e1a04000 	mov	r4, r0
        21ea34:	e3a05000 	mov	r5, #0	; 0x0
        21ea38:	eb649e4d 	bl	1b46374 <TSWGroupDriver::$GetPrinterID(void)>
        21ea3c:	e3300000 	teq	r0, #0	; 0x0
        21ea40:	0a000002 	beq	21ea50 <TSWGroupDriver::ConnectToPrinter(void)+0x2c>
        21ea44:	e1a00004 	mov	r0, r4
        21ea48:	eb649e42 	bl	1b46358 <TSWGroupDriver::$ContinueIO(void)>
        21ea4c:	e1a05000 	mov	r5, r0
        21ea50:	e1a00005 	mov	r0, r5
        21ea54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::ContinueIO(void)
 * Address: 0021ea58
 */
TSWGroupDriver::ContinueIO(void) {
    /*
        21ea58:	e3a01001 	mov	r1, #1	; 0x1
        21ea5c:	e5902028 	ldr	r2, [r0, #40]	; fField40
        21ea60:	e282ccab 	add	ip, r2, #43776	; 0xab00
        21ea64:	e37c00e0 	cmn	ip, #224	; 0xe0
        21ea68:	1282ccab 	addne	ip, r2, #43776	; 0xab00
        21ea6c:	137c00e5 	cmnne	ip, #229	; 0xe5
        21ea70:	0a000002 	beq	21ea80 <TSWGroupDriver::ContinueIO(void)+0x28>
        21ea74:	e5d0002c 	ldrb	r0, [r0, #44]	; fField44
        21ea78:	e3300000 	teq	r0, #0	; 0x0
        21ea7c:	0a000000 	beq	21ea84 <TSWGroupDriver::ContinueIO(void)+0x2c>
        21ea80:	e3a01000 	mov	r1, #0	; 0x0
        21ea84:	e1a00001 	mov	r0, r1
        21ea88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSWGroupDriver::Delete(void)
 * Address: 0021ea8c
 */
TSWGroupDriver::Delete(void) {
    /*
        21ea8c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        21ea90:	e3300000 	teq	r0, #0	; 0x0
        21ea94:	1a666455 	bne	1bb7bf0 <TEndpoint::$Delete(void)>
        21ea98:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSWGroupDriver::DoHandleProblem(void)
 * Address: 0021ea9c
 */
TSWGroupDriver::DoHandleProblem(void) {
    /*
        21ea9c:	e1a0c00d 	mov	ip, sp
        21eaa0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        21eaa4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21eaa8:	e1a04000 	mov	r4, r0
        21eaac:	e3a06000 	mov	r6, #0	; 0x0
        21eab0:	e3a059c2 	mov	r5, #3178496	; 0x308000
        21eab4:	e2855501 	add	r5, r5, #4194304	; 0x400000
        21eab8:	e3a09001 	mov	r9, #1	; 0x1
        21eabc:	e5940028 	ldr	r0, [r4, #40]	; fField40
        21eac0:	e1a02000 	mov	r2, r0
        21eac4:	e1a07000 	mov	r7, r0
        21eac8:	e3a0afee 	mov	sl, #952	; 0x3b8
        21eacc:	e24aaa0b 	sub	sl, sl, #45056	; 0xb000
        21ead0:	e130000a 	teq	r0, sl
        21ead4:	1282cb2b 	addne	ip, r2, #44032	; 0xac00
        21ead8:	137c004b 	cmnne	ip, #75	; 0x4b
        21eadc:	1a000002 	bne	21eaec <TSWGroupDriver::DoHandleProblem(void)+0x50>
        21eae0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21eae4:	e3500001 	cmp	r0, #1	; 0x1
        21eae8:	a3a06001 	movge	r6, #1	; 0x1
        21eaec:	e1a03006 	mov	r3, r6
        21eaf0:	e92d0008 	stmdb	sp!, {r3}
        21eaf4:	e1a03005 	mov	r3, r5
        21eaf8:	e2841010 	add	r1, r4, #16	; 0x10
        21eafc:	e8910003 	ldmia	r1, {r0, r1}
        21eb00:	eb670110 	bl	1bdef48 <$CallHandleProblem(PrintConnect *, TPrinter *, long, unsigned long, unsigned char)>
        21eb04:	e28dd004 	add	sp, sp, #4	; 0x4
        21eb08:	e1a08000 	mov	r8, r0
        21eb0c:	e3300001 	teq	r0, #1	; 0x1
        21eb10:	1a000004 	bne	21eb28 <TSWGroupDriver::DoHandleProblem(void)+0x8c>
        21eb14:	e5c4902c 	strb	r9, [r4, #44]	; fField44
        21eb18:	e1a00004 	mov	r0, r4
        21eb1c:	e3a01049 	mov	r1, #73	; 0x49
        21eb20:	eb64a216 	bl	1b47380 <TSWGroupDriver::$SendImmediateCommand(char)>
        21eb24:	ea000008 	b	21eb4c <TSWGroupDriver::DoHandleProblem(void)+0xb0>
        21eb28:	e137000a 	teq	r7, sl
        21eb2c:	15940028 	ldrne	r0, [r4, #40]	; fField40
        21eb30:	1280cb2b 	addne	ip, r0, #44032	; 0xac00
        21eb34:	137c004b 	cmnne	ip, #75	; 0x4b
        21eb38:	01a00004 	moveq	r0, r4
        21eb3c:	03a01053 	moveq	r1, #83	; 0x53
        21eb40:	0b64a20e 	bleq	1b47380 <TSWGroupDriver::$SendImmediateCommand(char)>
        21eb44:	e1a00004 	mov	r0, r4
        21eb48:	eb64a20d 	bl	1b47384 <TSWGroupDriver::$GetStatus(void)>
        21eb4c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        21eb50:	e3300000 	teq	r0, #0	; 0x0
        21eb54:	0a000002 	beq	21eb64 <TSWGroupDriver::DoHandleProblem(void)+0xc8>
        21eb58:	e5d4002c 	ldrb	r0, [r4, #44]	; fField44
        21eb5c:	e3300000 	teq	r0, #0	; 0x0
        21eb60:	0affffd5 	beq	21eabc <TSWGroupDriver::DoHandleProblem(void)+0x20>
        21eb64:	e1a00008 	mov	r0, r8
        21eb68:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSWGroupDriver::ErrorIsProblem(void)
 * Address: 0021eb6c
 */
TSWGroupDriver::ErrorIsProblem(void) {
    /*
        21eb6c:	e5900028 	ldr	r0, [r0, #40]	; fField40
        21eb70:	e290cb2b 	adds	ip, r0, #44032	; 0xac00
        21eb74:	d37c00a7 	cmnle	ip, #167	; 0xa7
        21eb78:	ba000003 	blt	21eb8c <TSWGroupDriver::ErrorIsProblem(void)+0x20>
        21eb7c:	e290cb2b 	adds	ip, r0, #44032	; 0xac00
        21eb80:	d37c0044 	cmnle	ip, #68	; 0x44
        21eb84:	d3a00001 	movle	r0, #1	; 0x1
        21eb88:	da000000 	ble	21eb90 <TSWGroupDriver::ErrorIsProblem(void)+0x24>
        21eb8c:	e3a00000 	mov	r0, #0	; 0x0
        21eb90:	e20000ff 	and	r0, r0, #255	; 0xff
        21eb94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSWGroupDriver::GetBandPrefs(DotPrinterPrefs *)
 * Address: 0021eb98
 */
TSWGroupDriver::GetBandPrefs(DotPrinterPrefs *) {
    /*
        21eb98:	e24dd00c 	sub	sp, sp, #12	; 0xc
        21eb9c:	e59f2010 	ldr	r2, [pc, #10]	; 21ebb4 <TSWGroupDriver::GetBandPrefs(DotPrinterPrefs *)+0x1c>
        21eba0:	e8921009 	ldmia	r2, {r0, r3, ip}
        21eba4:	e88d1009 	stmia	sp, {r0, r3, ip}
        21eba8:	e8bd100c 	ldmia	sp!, {r2, r3, ip}
        21ebac:	e881100c 	stmia	r1, {r2, r3, ip}
        21ebb0:	e1a0f00e 	mov	pc, lr
        21ebb4:	0037a6dc 	ldreqsb	sl, [r7], -ip
    */
}

/**
 * Symbol: ClassInfo__14TSWGroupDriverSFv
 * Address: 00388338
 */
void TSWGroupDriver::ClassInfo() {
    /*
        388338:	e24f0044 	sub	r0, pc, #68	; 0x44
        38833c:	e1a0f00e 	mov	pc, lr
        388340:	e3a00000 	mov	r0, #0	; 0x0
        388344:	e1a0f00e 	mov	pc, lr
        388348:	54535747 	ldrplb	r5, [r3], -#1863
        38834c:	726f7570 	rsbvc	r7, pc, #469762048	; 0x1c000000
        388350:	44726976 	ldrmibt	r6, [r2], -#2422
        388354:	65720054 	ldrvsb	r0, [r2, -#84]!
        388358:	446f7450 	strmibt	r7, [pc], #450	; 388360 <ClassInfo__14TSWGroupDriverSFv+0x28>
        38835c:	72696e74 	rsbvc	r6, r9, #1856	; 0x740
        388360:	65724472 	ldrvsb	r4, [r2, -#1138]!
        388364:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        388370:	eafffff0 	b	388338 <ClassInfo__14TSWGroupDriverSFv>
        388374:	ea5ef7ff 	b	1b46378 <TSWGroupDriver::$Delete(void)>
        388378:	ea5efc0b 	b	1b473ac <TSWGroupDriver::$Open(void)>
        38837c:	ea5ef7f4 	b	1b46354 <TSWGroupDriver::$Close(void)>
        388380:	ea5efc0c 	b	1b473b8 <TSWGroupDriver::$OpenPage(void)>
        388384:	ea5ef7f8 	b	1b4636c <TSWGroupDriver::$ClosePage(void)>
        388388:	ea5efc02 	b	1b47398 <TSWGroupDriver::$ImageBand(PixelMap *, Rect const *)>
        38838c:	ea5ef7ef 	b	1b46350 <TSWGroupDriver::$CancelJob(unsigned char)>
        388390:	ea5efc04 	b	1b473a8 <TSWGroupDriver::$IsProblemResolved(void)>
        388394:	ea5efbfd 	b	1b47390 <TSWGroupDriver::$GetPageInfo(PrPageInfo *)>
        388398:	ea5efbfb 	b	1b4738c <TSWGroupDriver::$GetBandPrefs(DotPrinterPrefs *)>
        38839c:	ea5efc07 	b	1b473c0 <TSWGroupDriver::$FaxEndPage(long)>
        3883a0:	00000000 	andeq	r0, r0, r0
        3883a4:	00000048 	andeq	r0, r0, r8, asr #32
        3883a8:	00000059 	andeq	r0, r0, r9, asr r0
        3883ac:	00000067 	andeq	r0, r0, r7, rrx
        3883b0:	00000064 	andeq	r0, r0, r4, rrx
        3883b4:	00000094 	muleq	r0, r4, r0
        3883b8:	ea5ef3c3 	b	1b452cc <$Sizeof__20TLaserWriterLSDriverSFv>
        3883c4:	e1a0f00e 	mov	pc, lr
        3883c8:	ea5edf02 	b	1b3ffd8 <TLaserWriterLSDriver::$Delete(void)>
        3883cc:	00020000 	andeq	r0, r2, r0
        3883d8:	ea000001 	b	3883e4 <ClassInfo__20TLaserWriterLSDriverSFv+0x8>
    */
}

