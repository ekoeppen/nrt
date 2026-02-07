#include "include/TAlertDialog.h"

/**
 * Symbol: TAlertDialog::CheckAlertDone(unsigned long *)
 * Address: 0002e8c0
 */
TAlertDialog::CheckAlertDone(unsigned long *) {
    /*
         2e8c0:	e1a0c00d 	mov	ip, sp
         2e8c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         2e8c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e8cc:	e1a04000 	mov	r4, r0
         2e8d0:	e1a05001 	mov	r5, r1
         2e8d4:	eb6b1852 	bl	1af4a24 <TAlertDialog::$CheckButton(void)>
         2e8d8:	e5850000 	str	r0, [r5]
         2e8dc:	e1a01000 	mov	r1, r0
         2e8e0:	e594301c 	ldr	r3, [r4, #28]	; fField28
         2e8e4:	e3330000 	teq	r3, #0	; 0x0
         2e8e8:	1284401c 	addne	r4, r4, #28	; 0x1c
         2e8ec:	19b40005 	ldmneib	r4!, {r0, r2}
         2e8f0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         2e8f4:	1283f000 	addne	pc, r3, #0	; 0x0
         2e8f8:	e2910001 	adds	r0, r1, #1	; 0x1
         2e8fc:	13a00001 	movne	r0, #1	; 0x1
         2e900:	e20000ff 	and	r0, r0, #255	; 0xff
         2e904:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAlertDialog::DrawAlert(void)
 * Address: 0002e908
 */
TAlertDialog::DrawAlert(void) {
    /*
         2e908:	e1a0c00d 	mov	ip, sp
         2e90c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         2e910:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e914:	e1a04000 	mov	r4, r0
         2e918:	e24dd008 	sub	sp, sp, #8	; 0x8
         2e91c:	e8941008 	ldmia	r4, {r3, ip}
         2e920:	e88d1008 	stmia	sp, {r3, ip}
         2e924:	e5900018 	ldr	r0, [r0, #24]	; fField24
         2e928:	e3300000 	teq	r0, #0	; 0x0
         2e92c:	0a000059 	beq	2ea98 <TAlertDialog::DrawAlert(void)+0x190>
         2e930:	e1a0000d 	mov	r0, sp
         2e934:	eb6dc5ca 	bl	1ba0064 <$EraseDRect(Rect *)>
         2e938:	e1a0000d 	mov	r0, sp
         2e93c:	e3a01000 	mov	r1, #0	; 0x0
         2e940:	eb6dc5c8 	bl	1ba0068 <$FrameDRect(Rect *, TDMode)>
         2e944:	e1a0000d 	mov	r0, sp
         2e948:	e3a02001 	mov	r2, #1	; 0x1
         2e94c:	e3a01001 	mov	r1, #1	; 0x1
         2e950:	eb6dc5c7 	bl	1ba0074 <$InsetDRect__FP4RectsT2>
         2e954:	e1a0000d 	mov	r0, sp
         2e958:	e3a01000 	mov	r1, #0	; 0x0
         2e95c:	eb6dc5c1 	bl	1ba0068 <$FrameDRect(Rect *, TDMode)>
         2e960:	e5940008 	ldr	r0, [r4, #8]	; fField8
         2e964:	e3500000 	cmp	r0, #0	; 0x0
         2e968:	9a00000e 	bls	2e9a8 <TAlertDialog::DrawAlert(void)+0xa0>
         2e96c:	e5941010 	ldr	r1, [r4, #16]	; fField16
         2e970:	e3310000 	teq	r1, #0	; 0x0
         2e974:	0a00000b 	beq	2e9a8 <TAlertDialog::DrawAlert(void)+0xa0>
         2e978:	e0816004 	add	r6, r1, r4
         2e97c:	e3a05000 	mov	r5, #0	; 0x0
         2e980:	e3500000 	cmp	r0, #0	; 0x0
         2e984:	9a000007 	bls	2e9a8 <TAlertDialog::DrawAlert(void)+0xa0>
         2e988:	e0850105 	add	r0, r5, r5, lsl #2
         2e98c:	e0860100 	add	r0, r6, r0, lsl #2
         2e990:	e3a01000 	mov	r1, #0	; 0x0
         2e994:	eb6dc5b1 	bl	1ba0060 <TAlertItem::$DrawText(unsigned char)>
         2e998:	e2855001 	add	r5, r5, #1	; 0x1
         2e99c:	e5940008 	ldr	r0, [r4, #8]	; fField8
         2e9a0:	e1500005 	cmp	r0, r5
         2e9a4:	8afffff7 	bhi	2e988 <TAlertDialog::DrawAlert(void)+0x80>
         2e9a8:	e594000c 	ldr	r0, [r4, #12]	; fField12
         2e9ac:	e59f60e8 	ldr	r6, [pc, #e8]	; 2ea9c <TAlertDialog::DrawAlert(void)+0x194>
         2e9b0:	e3500000 	cmp	r0, #0	; 0x0
         2e9b4:	9a00002e 	bls	2ea74 <TAlertDialog::DrawAlert(void)+0x16c>
         2e9b8:	e5941014 	ldr	r1, [r4, #20]	; fField20
         2e9bc:	e3310000 	teq	r1, #0	; 0x0
         2e9c0:	0a00002b 	beq	2ea74 <TAlertDialog::DrawAlert(void)+0x16c>
         2e9c4:	e0818004 	add	r8, r1, r4
         2e9c8:	e3a07000 	mov	r7, #0	; 0x0
         2e9cc:	e3500000 	cmp	r0, #0	; 0x0
         2e9d0:	9a000027 	bls	2ea74 <TAlertDialog::DrawAlert(void)+0x16c>
         2e9d4:	e0879107 	add	r9, r7, r7, lsl #2
         2e9d8:	e0880109 	add	r0, r8, r9, lsl #2
         2e9dc:	e1a05000 	mov	r5, r0
         2e9e0:	eb6dc59b 	bl	1ba0054 <TAlertItem::$DrawButton(void)>
         2e9e4:	e7981109 	ldr	r1, [r8, r9, lsl #2]	; fField2
         2e9e8:	e1a01821 	mov	r1, r1, lsr #16
         2e9ec:	e5960002 	ldr	r0, [r6, #2]	; fField2
         2e9f0:	e0810000 	add	r0, r1, r0
         2e9f4:	e2800002 	add	r0, r0, #2	; 0x2
         2e9f8:	e5c5000d 	strb	r0, [r5, #13]	; fField13
         2e9fc:	e1a00440 	mov	r0, r0, asr #8
         2ea00:	e5c5000c 	strb	r0, [r5, #12]	; fField12
         2ea04:	e5951004 	ldr	r1, [r5, #4]	; fField4
         2ea08:	e1a01821 	mov	r1, r1, lsr #16
         2ea0c:	e5960002 	ldr	r0, [r6, #2]	; fField2
         2ea10:	e0810000 	add	r0, r1, r0
         2ea14:	e2800002 	add	r0, r0, #2	; 0x2
         2ea18:	e5c50011 	strb	r0, [r5, #17]	; fField17
         2ea1c:	e1a00440 	mov	r0, r0, asr #8
         2ea20:	e5c50010 	strb	r0, [r5, #16]	; fField16
         2ea24:	e5951002 	ldr	r1, [r5, #2]	; fField2
         2ea28:	e1a01821 	mov	r1, r1, lsr #16
         2ea2c:	e5960000 	ldr	r0, [r6]
         2ea30:	e0810000 	add	r0, r1, r0
         2ea34:	e2400001 	sub	r0, r0, #1	; 0x1
         2ea38:	e5c5000f 	strb	r0, [r5, #15]	; fField15
         2ea3c:	e1a00440 	mov	r0, r0, asr #8
         2ea40:	e5c5000e 	strb	r0, [r5, #14]	; fField14
         2ea44:	e5950006 	ldr	r0, [r5, #6]	; fField6
         2ea48:	e1a00820 	mov	r0, r0, lsr #16
         2ea4c:	e5961000 	ldr	r1, [r6]
         2ea50:	e0800001 	add	r0, r0, r1
         2ea54:	e2400001 	sub	r0, r0, #1	; 0x1
         2ea58:	e5c50013 	strb	r0, [r5, #19]	; fField19
         2ea5c:	e1a00440 	mov	r0, r0, asr #8
         2ea60:	e5c50012 	strb	r0, [r5, #18]	; fField18
         2ea64:	e2877001 	add	r7, r7, #1	; 0x1
         2ea68:	e594000c 	ldr	r0, [r4, #12]	; fField12
         2ea6c:	e1500007 	cmp	r0, r7
         2ea70:	8affffd7 	bhi	2e9d4 <TAlertDialog::DrawAlert(void)+0xcc>
         2ea74:	e3a03000 	mov	r3, #0	; 0x0
         2ea78:	e92d0008 	stmdb	sp!, {r3}
         2ea7c:	e59f001c 	ldr	r0, [pc, #1c]	; 2eaa0 <TAlertDialog::DrawAlert(void)+0x198>
         2ea80:	e2801004 	add	r1, r0, #4	; 0x4
         2ea84:	e1a03006 	mov	r3, r6
         2ea88:	e1a02004 	mov	r2, r4
         2ea8c:	e5900000 	ldr	r0, [r0]
         2ea90:	eb6c76f0 	bl	1b4c658 <TScreenDriver::$Blit(PixelMap *, Rect *, Rect *, long)>
         2ea94:	e28dd004 	add	sp, sp, #4	; 0x4
         2ea98:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         2ea9c:	0c10085c 	ldceq	8, cr0, [r0], -#368
         2eaa0:	0c105ef0 	ldceq	14, cr5, [r0], -#960
    */
}

/**
 * Symbol: TAlertDialog::CheckButton(void)
 * Address: 0002eaa4
 */
TAlertDialog::CheckButton(void) {
    /*
         2eaa4:	e1a0c00d 	mov	ip, sp
         2eaa8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2eaac:	e24cb004 	sub	fp, ip, #4	; 0x4
         2eab0:	e1a04000 	mov	r4, r0
         2eab4:	e24dd008 	sub	sp, sp, #8	; 0x8
         2eab8:	e3e05000 	mvn	r5, #0	; 0x0
         2eabc:	e590000c 	ldr	r0, [r0, #12]	; fField12
         2eac0:	e3300000 	teq	r0, #0	; 0x0
         2eac4:	01a00005 	moveq	r0, r5
         2eac8:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         2eacc:	e24dd010 	sub	sp, sp, #16	; 0x10
         2ead0:	e5940014 	ldr	r0, [r4, #20]	; fField20
         2ead4:	e0806004 	add	r6, r0, r4
         2ead8:	e1a0000d 	mov	r0, sp
         2eadc:	eb6dc55b 	bl	1ba0050 <$AlertGetPoint(long *)>
         2eae0:	e3300000 	teq	r0, #0	; 0x0
         2eae4:	1a000071 	bne	2ecb0 <TAlertDialog::CheckButton(void)+0x20c>
         2eae8:	e59f0010 	ldr	r0, [pc, #10]	; 2eb00 <TAlertDialog::CheckButton(void)+0x5c>
         2eaec:	e58d0010 	str	r0, [sp, #16]	; fField16
         2eaf0:	e2808004 	add	r8, r0, #4	; 0x4
         2eaf4:	e59f3008 	ldr	r3, [pc, #8]	; 2eb04 <TAlertDialog::CheckButton(void)+0x60>	; fField8
         2eaf8:	e58d3014 	str	r3, [sp, #20]	; fField20
         2eafc:	ea000003 	b	2eb10 <TAlertDialog::CheckButton(void)+0x6c>
         2eb00:	0c105ef0 	ldceq	14, cr5, [r0], -#960
         2eb04:	0c10085c 	ldceq	8, cr0, [r0], -#368
         2eb08:	e3750001 	cmn	r5, #1	; 0x1
         2eb0c:	1a000039 	bne	2ebf8 <TAlertDialog::CheckButton(void)+0x154>
         2eb10:	e3a07000 	mov	r7, #0	; 0x0
         2eb14:	e594000c 	ldr	r0, [r4, #12]	; fField12
         2eb18:	e3500000 	cmp	r0, #0	; 0x0
         2eb1c:	9a000031 	bls	2ebe8 <TAlertDialog::CheckButton(void)+0x144>
         2eb20:	e0870107 	add	r0, r7, r7, lsl #2
         2eb24:	e0860100 	add	r0, r6, r0, lsl #2
         2eb28:	e280200c 	add	r2, r0, #12	; 0xc
         2eb2c:	e89d0003 	ldmia	sp, {r0, r1}
         2eb30:	eb6dc955 	bl	1ba108c <$PtInDRect__FlT1P4Rect>
         2eb34:	e3300000 	teq	r0, #0	; 0x0
         2eb38:	0a000026 	beq	2ebd8 <TAlertDialog::CheckButton(void)+0x134>
         2eb3c:	e0870107 	add	r0, r7, r7, lsl #2
         2eb40:	e7961100 	ldr	r1, [r6, r0, lsl #2]	; fField2
         2eb44:	e1a01821 	mov	r1, r1, lsr #16
         2eb48:	e2811002 	add	r1, r1, #2	; 0x2
         2eb4c:	e5cd1009 	strb	r1, [sp, #9]
         2eb50:	e1a01441 	mov	r1, r1, asr #8
         2eb54:	e5cd1008 	strb	r1, [sp, #8]	; fField8
         2eb58:	e0860100 	add	r0, r6, r0, lsl #2
         2eb5c:	e5901002 	ldr	r1, [r0, #2]	; fField2
         2eb60:	e1a01821 	mov	r1, r1, lsr #16
         2eb64:	e2811002 	add	r1, r1, #2	; 0x2
         2eb68:	e5cd100b 	strb	r1, [sp, #11]
         2eb6c:	e1a01441 	mov	r1, r1, asr #8
         2eb70:	e5cd100a 	strb	r1, [sp, #10]
         2eb74:	e5901004 	ldr	r1, [r0, #4]	; fField4
         2eb78:	e1a01821 	mov	r1, r1, lsr #16
         2eb7c:	e2411001 	sub	r1, r1, #1	; 0x1
         2eb80:	e5cd100d 	strb	r1, [sp, #13]	; fField13
         2eb84:	e1a01441 	mov	r1, r1, asr #8
         2eb88:	e5cd100c 	strb	r1, [sp, #12]	; fField12
         2eb8c:	e5900006 	ldr	r0, [r0, #6]	; fField6
         2eb90:	e1a00820 	mov	r0, r0, lsr #16
         2eb94:	e2400001 	sub	r0, r0, #1	; 0x1
         2eb98:	e5cd000f 	strb	r0, [sp, #15]	; fField15
         2eb9c:	e1a00440 	mov	r0, r0, asr #8
         2eba0:	e5cd000e 	strb	r0, [sp, #14]	; fField14
         2eba4:	e28d0008 	add	r0, sp, #8	; 0x8
         2eba8:	eb6dc532 	bl	1ba0078 <$InvertDRect(Rect *)>
         2ebac:	e3a03000 	mov	r3, #0	; 0x0
         2ebb0:	e92d0008 	stmdb	sp!, {r3}
         2ebb4:	e1a01008 	mov	r1, r8
         2ebb8:	e1a02004 	mov	r2, r4
         2ebbc:	e28d3014 	add	r3, sp, #20	; 0x14
         2ebc0:	e8930009 	ldmia	r3, {r0, r3}
         2ebc4:	e5900000 	ldr	r0, [r0]
         2ebc8:	eb6c76a2 	bl	1b4c658 <TScreenDriver::$Blit(PixelMap *, Rect *, Rect *, long)>
         2ebcc:	e28dd004 	add	sp, sp, #4	; 0x4
         2ebd0:	e1a05007 	mov	r5, r7
         2ebd4:	ea000003 	b	2ebe8 <TAlertDialog::CheckButton(void)+0x144>
         2ebd8:	e2877001 	add	r7, r7, #1	; 0x1
         2ebdc:	e594000c 	ldr	r0, [r4, #12]	; fField12
         2ebe0:	e1500007 	cmp	r0, r7
         2ebe4:	8affffcd 	bhi	2eb20 <TAlertDialog::CheckButton(void)+0x7c>
         2ebe8:	e0859105 	add	r9, r5, r5, lsl #2
         2ebec:	e0867109 	add	r7, r6, r9, lsl #2
         2ebf0:	e287a00c 	add	sl, r7, #12	; 0xc
         2ebf4:	ea000029 	b	2eca0 <TAlertDialog::CheckButton(void)+0x1fc>
         2ebf8:	e1a0200a 	mov	r2, sl
         2ebfc:	e89d0003 	ldmia	sp, {r0, r1}
         2ec00:	eb6dc921 	bl	1ba108c <$PtInDRect__FlT1P4Rect>
         2ec04:	e3300000 	teq	r0, #0	; 0x0
         2ec08:	1a000024 	bne	2eca0 <TAlertDialog::CheckButton(void)+0x1fc>
         2ec0c:	e7960109 	ldr	r0, [r6, r9, lsl #2]	; fField2
         2ec10:	e1a00820 	mov	r0, r0, lsr #16
         2ec14:	e2800002 	add	r0, r0, #2	; 0x2
         2ec18:	e5cd0009 	strb	r0, [sp, #9]
         2ec1c:	e1a00440 	mov	r0, r0, asr #8
         2ec20:	e5cd0008 	strb	r0, [sp, #8]	; fField8
         2ec24:	e5970002 	ldr	r0, [r7, #2]	; fField2
         2ec28:	e1a00820 	mov	r0, r0, lsr #16
         2ec2c:	e2800002 	add	r0, r0, #2	; 0x2
         2ec30:	e5cd000b 	strb	r0, [sp, #11]
         2ec34:	e1a00440 	mov	r0, r0, asr #8
         2ec38:	e5cd000a 	strb	r0, [sp, #10]
         2ec3c:	e5970004 	ldr	r0, [r7, #4]	; fField4
         2ec40:	e1a00820 	mov	r0, r0, lsr #16
         2ec44:	e2400001 	sub	r0, r0, #1	; 0x1
         2ec48:	e5cd000d 	strb	r0, [sp, #13]	; fField13
         2ec4c:	e1a00440 	mov	r0, r0, asr #8
         2ec50:	e5cd000c 	strb	r0, [sp, #12]	; fField12
         2ec54:	e5970006 	ldr	r0, [r7, #6]	; fField6
         2ec58:	e1a00820 	mov	r0, r0, lsr #16
         2ec5c:	e2400001 	sub	r0, r0, #1	; 0x1
         2ec60:	e5cd000f 	strb	r0, [sp, #15]	; fField15
         2ec64:	e1a00440 	mov	r0, r0, asr #8
         2ec68:	e5cd000e 	strb	r0, [sp, #14]	; fField14
         2ec6c:	e28d0008 	add	r0, sp, #8	; 0x8
         2ec70:	eb6dc500 	bl	1ba0078 <$InvertDRect(Rect *)>
         2ec74:	e3a03000 	mov	r3, #0	; 0x0
         2ec78:	e92d0008 	stmdb	sp!, {r3}
         2ec7c:	e1a01008 	mov	r1, r8
         2ec80:	e1a02004 	mov	r2, r4
         2ec84:	e28d3014 	add	r3, sp, #20	; 0x14
         2ec88:	e8930009 	ldmia	r3, {r0, r3}
         2ec8c:	e5900000 	ldr	r0, [r0]
         2ec90:	eb6c7670 	bl	1b4c658 <TScreenDriver::$Blit(PixelMap *, Rect *, Rect *, long)>
         2ec94:	e28dd004 	add	sp, sp, #4	; 0x4
         2ec98:	e3e05000 	mvn	r5, #0	; 0x0
         2ec9c:	eaffffd1 	b	2ebe8 <TAlertDialog::CheckButton(void)+0x144>
         2eca0:	e1a0000d 	mov	r0, sp
         2eca4:	eb6dc4e9 	bl	1ba0050 <$AlertGetPoint(long *)>
         2eca8:	e3300000 	teq	r0, #0	; 0x0
         2ecac:	0affff95 	beq	2eb08 <TAlertDialog::CheckButton(void)+0x64>
         2ecb0:	e1a00005 	mov	r0, r5
         2ecb4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TAlertDialog::__ct(void)
 * Address: 0003011c
 */
TAlertDialog::TAlertDialog(void) {
    /*
         3011c:	e1a0c00d 	mov	ip, sp
         30120:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         30124:	e24cb004 	sub	fp, ip, #4	; 0x4
         30128:	e3300000 	teq	r0, #0	; 0x0
         3012c:	1a000003 	bne	30140 <TAlertDialog::__ct(void)+0x24>
         30130:	e3a00028 	mov	r0, #40	; 0x28
         30134:	eb6e797f 	bl	1bce738 <$__nw(unsigned int)>
         30138:	e3300000 	teq	r0, #0	; 0x0
         3013c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         30140:	e3a01000 	mov	r1, #0	; 0x0
         30144:	e5801008 	str	r1, [r0, #8]	; fField8
         30148:	e580100c 	str	r1, [r0, #12]	; fField12
         3014c:	e5801014 	str	r1, [r0, #20]	; fField20
         30150:	e5801010 	str	r1, [r0, #16]	; fField16
         30154:	e5801018 	str	r1, [r0, #24]	; fField24
         30158:	e580101c 	str	r1, [r0, #28]	; fField28
         3015c:	e5801020 	str	r1, [r0, #32]	; fField32
         30160:	e5801024 	str	r1, [r0, #36]	; fField36
         30164:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: SetFilterProc__12TAlertDialogFPFPvUlT1_UcPv
 * Address: 00030168
 */
void TAlertDialog::SetFilterProc() {
    /*
         30168:	e2800018 	add	r0, r0, #24	; 0x18
         3016c:	e9a00006 	stmib	r0!, {r1, r2}
         30170:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAlertDialog::SetFilterData(void *)
 * Address: 00030174
 */
TAlertDialog::SetFilterData(void *) {
    /*
         30174:	e5a01024 	str	r1, [r0, #36]!	; fField36
         30178:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAlertDialog::Alert(unsigned long *)
 * Address: 0003017c
 */
TAlertDialog::Alert(unsigned long *) {
    /*
         3017c:	e1a0c00d 	mov	ip, sp
         30180:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         30184:	e24cb004 	sub	fp, ip, #4	; 0x4
         30188:	e1a04000 	mov	r4, r0
         3018c:	e1a05001 	mov	r5, r1
         30190:	eb6b1a78 	bl	1af6b78 <TAlertDialog::$DisplayAlert(void)>
         30194:	e3300000 	teq	r0, #0	; 0x0
         30198:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         3019c:	e1a01005 	mov	r1, r5
         301a0:	e1a00004 	mov	r0, r4
         301a4:	eb6b121c 	bl	1af4a1c <TAlertDialog::$CheckAlertDone(unsigned long *)>
         301a8:	e3300000 	teq	r0, #0	; 0x0
         301ac:	0afffffa 	beq	3019c <TAlertDialog::Alert(unsigned long *)+0x20>
         301b0:	e1a00004 	mov	r0, r4
         301b4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         301b8:	ea6b4c0b 	b	1b031ec <TAlertDialog::$RemoveAlert(void)>
    */
}

/**
 * Symbol: TAlertDialog::DisplayAlert(void)
 * Address: 000301bc
 */
TAlertDialog::DisplayAlert(void) {
    /*
         301bc:	e1a0c00d 	mov	ip, sp
         301c0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         301c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         301c8:	e1a04000 	mov	r4, r0
         301cc:	eb6aecef 	bl	1aeb590 <$GetTabletPolling(void)>
         301d0:	e59f10d8 	ldr	r1, [pc, #d8]	; 302b0 <TAlertDialog::DisplayAlert(void)+0xf4>
         301d4:	e5c10008 	strb	r0, [r1, #8]	; fField8
         301d8:	e3a00001 	mov	r0, #1	; 0x1
         301dc:	eb6af113 	bl	1aec630 <$SetTabletPolling(unsigned char)>
         301e0:	e59f60cc 	ldr	r6, [pc, #cc]	; 302b4 <TAlertDialog::DisplayAlert(void)+0xf8>
         301e4:	e5960010 	ldr	r0, [r6, #16]	; fField16
         301e8:	e3e01007 	mvn	r1, #7	; 0x7
         301ec:	e0010940 	and	r0, r1, r0, asr #18
         301f0:	e59f50c0 	ldr	r5, [pc, #c0]	; 302b8 <TAlertDialog::DisplayAlert(void)+0xfc>
         301f4:	e5c50001 	strb	r0, [r5, #1]
         301f8:	e1a00440 	mov	r0, r0, asr #8
         301fc:	e5c50000 	strb	r0, [r5]
         30200:	e5940004 	ldr	r0, [r4, #4]	; fField4
         30204:	e1a00820 	mov	r0, r0, lsr #16
         30208:	e5941000 	ldr	r1, [r4]
         3020c:	e1a01821 	mov	r1, r1, lsr #16
         30210:	e0400001 	sub	r0, r0, r1
         30214:	e2800007 	add	r0, r0, #7	; 0x7
         30218:	e3c00007 	bic	r0, r0, #7	; 0x7
         3021c:	e5951002 	ldr	r1, [r5, #2]	; fField2
         30220:	e0800001 	add	r0, r0, r1
         30224:	e5c50005 	strb	r0, [r5, #5]
         30228:	e1a00440 	mov	r0, r0, asr #8
         3022c:	e5c50004 	strb	r0, [r5, #4]	; fField4
         30230:	e5941006 	ldr	r1, [r4, #6]	; fField6
         30234:	e1a01821 	mov	r1, r1, lsr #16
         30238:	e5940002 	ldr	r0, [r4, #2]	; fField2
         3023c:	e1a00820 	mov	r0, r0, lsr #16
         30240:	e0410000 	sub	r0, r1, r0
         30244:	e280001f 	add	r0, r0, #31	; 0x1f
         30248:	e3c0001f 	bic	r0, r0, #31	; 0x1f
         3024c:	e1a00800 	mov	r0, r0, lsl #16
         30250:	e1a00840 	mov	r0, r0, asr #16
         30254:	e5961012 	ldr	r1, [r6, #18]	; fField18
         30258:	e0601841 	rsb	r1, r0, r1, asr #16
         3025c:	e1a010c1 	mov	r1, r1, asr #1
         30260:	e5c51003 	strb	r1, [r5, #3]
         30264:	e1a01441 	mov	r1, r1, asr #8
         30268:	e5c51002 	strb	r1, [r5, #2]	; fField2
         3026c:	e5951000 	ldr	r1, [r5]
         30270:	e0810000 	add	r0, r1, r0
         30274:	e5c50007 	strb	r0, [r5, #7]
         30278:	e1a00440 	mov	r0, r0, asr #8
         3027c:	e5c50006 	strb	r0, [r5, #6]	; fField6
         30280:	eb0d9062 	bl	394410 <IsSuperMode>
         30284:	e3300000 	teq	r0, #0	; 0x0
         30288:	1a000004 	bne	302a0 <TAlertDialog::DisplayAlert(void)+0xe4>
         3028c:	e3a00001 	mov	r0, #1	; 0x1
         30290:	eb6c6492 	bl	1b494e0 <$BlockLCDActivity(unsigned char)>
         30294:	e2860004 	add	r0, r6, #4	; 0x4
         30298:	e1a01005 	mov	r1, r5
         3029c:	eb6c70dd 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         302a0:	e1a00004 	mov	r0, r4
         302a4:	eb6b1e3e 	bl	1af7ba4 <TAlertDialog::$DrawAlert(void)>
         302a8:	e3a00000 	mov	r0, #0	; 0x0
         302ac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         302b0:	0c10085c 	ldceq	8, cr0, [r0], -#368
         302b4:	0c105ef0 	ldceq	14, cr5, [r0], -#960
         302b8:	0c10085c 	ldceq	8, cr0, [r0], -#368
    */
}

/**
 * Symbol: TAlertDialog::RemoveAlert(void)
 * Address: 000302bc
 */
TAlertDialog::RemoveAlert(void) {
    /*
         302bc:	e1a0c00d 	mov	ip, sp
         302c0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         302c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         302c8:	e1a04000 	mov	r4, r0
         302cc:	eb6dbf64 	bl	1ba0064 <$EraseDRect(Rect *)>
         302d0:	e3a03000 	mov	r3, #0	; 0x0
         302d4:	e92d0008 	stmdb	sp!, {r3}
         302d8:	e59f0050 	ldr	r0, [pc, #50]	; 30330 <TAlertDialog::RemoveAlert(void)+0x74>
         302dc:	e2801004 	add	r1, r0, #4	; 0x4
         302e0:	e1a05001 	mov	r5, r1
         302e4:	e59f3048 	ldr	r3, [pc, #48]	; 30334 <TAlertDialog::RemoveAlert(void)+0x78>
         302e8:	e1a06003 	mov	r6, r3
         302ec:	e1a02004 	mov	r2, r4
         302f0:	e5900000 	ldr	r0, [r0]
         302f4:	eb6c70d7 	bl	1b4c658 <TScreenDriver::$Blit(PixelMap *, Rect *, Rect *, long)>
         302f8:	e28dd004 	add	sp, sp, #4	; 0x4
         302fc:	eb0d9043 	bl	394410 <IsSuperMode>
         30300:	e3300000 	teq	r0, #0	; 0x0
         30304:	1a000004 	bne	3031c <TAlertDialog::RemoveAlert(void)+0x60>
         30308:	e3a00000 	mov	r0, #0	; 0x0
         3030c:	eb6c6473 	bl	1b494e0 <$BlockLCDActivity(unsigned char)>
         30310:	e1a00005 	mov	r0, r5
         30314:	e1a01006 	mov	r1, r6
         30318:	eb6c70c0 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         3031c:	e59f0014 	ldr	r0, [pc, #14]	; 30338 <TAlertDialog::RemoveAlert(void)+0x7c>	; fField14
         30320:	e5d00008 	ldrb	r0, [r0, #8]	; fField8
         30324:	eb6af0c1 	bl	1aec630 <$SetTabletPolling(unsigned char)>
         30328:	e3a00000 	mov	r0, #0	; 0x0
         3032c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         30330:	0c105ef0 	ldceq	14, cr5, [r0], -#960
         30334:	0c10085c 	ldceq	8, cr0, [r0], -#368
         30338:	0c10085c 	ldceq	8, cr0, [r0], -#368
    */
}

