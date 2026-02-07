#include "include/TVisKeyIterator.h"

/**
 * Symbol: TVisKeyIterator::Next(void)
 * Address: 000fad38
 */
TVisKeyIterator::Next(void) {
    /*
         fad38:	e1a0c00d 	mov	ip, sp
         fad3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fad40:	e24cb004 	sub	fp, ip, #4	; 0x4
         fad44:	e1a04000 	mov	r4, r0
         fad48:	e5900014 	ldr	r0, [r0, #20]	; fField20
         fad4c:	e2800001 	add	r0, r0, #1	; 0x1
         fad50:	e5840014 	str	r0, [r4, #20]	; fField20
         fad54:	e5941020 	ldr	r1, [r4, #32]	; fField32
         fad58:	e1500001 	cmp	r0, r1
         fad5c:	ba000004 	blt	fad74 <TVisKeyIterator::Next(void)+0x3c>
         fad60:	e5940018 	ldr	r0, [r4, #24]	; fField24
         fad64:	e2800001 	add	r0, r0, #1	; 0x1
         fad68:	e5840018 	str	r0, [r4, #24]	; fField24
         fad6c:	e1a00004 	mov	r0, r4
         fad70:	eb668404 	bl	1a9bd88 <TVisKeyIterator::$LoadRow(void)>
         fad74:	e1a00004 	mov	r0, r4
         fad78:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         fad7c:	ea6683ff 	b	1a9bd80 <TVisKeyIterator::$LoadKey(void)>
    */
}

/**
 * Symbol: TVisKeyIterator::SkipToStartOfNextRow(void)
 * Address: 000fad80
 */
TVisKeyIterator::SkipToStartOfNextRow(void) {
    /*
         fad80:	e1a0c00d 	mov	ip, sp
         fad84:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fad88:	e24cb004 	sub	fp, ip, #4	; 0x4
         fad8c:	e1a04000 	mov	r4, r0
         fad90:	eb0a3f6b 	bl	38ab44 <C$$dtorvec$$Limit+0x1d0>
         fad94:	e3300000 	teq	r0, #0	; 0x0
         fad98:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         fad9c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         fada0:	e2800001 	add	r0, r0, #1	; 0x1
         fada4:	e5840018 	str	r0, [r4, #24]	; fField24
         fada8:	e1a00004 	mov	r0, r4
         fadac:	eb6683f5 	bl	1a9bd88 <TVisKeyIterator::$LoadRow(void)>
         fadb0:	e5940024 	ldr	r0, [r4, #36]	; fField36
         fadb4:	e5941018 	ldr	r1, [r4, #24]	; fField24
         fadb8:	e1510000 	cmp	r1, r0
         fadbc:	ca000002 	bgt	fadcc <TVisKeyIterator::SkipToStartOfNextRow(void)+0x4c>
         fadc0:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         fadc4:	e3300000 	teq	r0, #0	; 0x0
         fadc8:	0afffff3 	beq	fad9c <TVisKeyIterator::SkipToStartOfNextRow(void)+0x1c>
         fadcc:	e1a00004 	mov	r0, r4
         fadd0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         fadd4:	ea6683e9 	b	1a9bd80 <TVisKeyIterator::$LoadKey(void)>
    */
}

/**
 * Symbol: TVisKeyIterator::LoadKey(void)
 * Address: 000fadd8
 */
TVisKeyIterator::LoadKey(void) {
    /*
         fadd8:	e1a0c00d 	mov	ip, sp
         faddc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         fade0:	e24cb004 	sub	fp, ip, #4	; 0x4
         fade4:	e1a04000 	mov	r4, r0
         fade8:	eb667fe3 	bl	1a9ad7c <TRawKeyIterator::$LoadKey(void)>
         fadec:	e1b08000 	movs	r8, r0
         fadf0:	e2847034 	add	r7, r4, #52	; 0x34
         fadf4:	e284603c 	add	r6, r4, #60	; 0x3c
         fadf8:	e284502c 	add	r5, r4, #44	; 0x2c
         fadfc:	0a000019 	beq	fae68 <TVisKeyIterator::LoadKey(void)+0x90>
         fae00:	e3a00000 	mov	r0, #0	; 0x0
         fae04:	e5c50007 	strb	r0, [r5, #7]
         fae08:	e5c50006 	strb	r0, [r5, #6]
         fae0c:	e5c50005 	strb	r0, [r5, #5]
         fae10:	e5c50004 	strb	r0, [r5, #4]
         fae14:	e5c50003 	strb	r0, [r5, #3]
         fae18:	e5c50002 	strb	r0, [r5, #2]
         fae1c:	e5c50001 	strb	r0, [r5, #1]
         fae20:	e5c50000 	strb	r0, [r5]
         fae24:	e5c70007 	strb	r0, [r7, #7]
         fae28:	e5c70006 	strb	r0, [r7, #6]
         fae2c:	e5c70005 	strb	r0, [r7, #5]
         fae30:	e5c70004 	strb	r0, [r7, #4]
         fae34:	e5c70003 	strb	r0, [r7, #3]
         fae38:	e5c70002 	strb	r0, [r7, #2]
         fae3c:	e5c70001 	strb	r0, [r7, #1]
         fae40:	e5c70000 	strb	r0, [r7]
         fae44:	e5c60007 	strb	r0, [r6, #7]
         fae48:	e5c60006 	strb	r0, [r6, #6]
         fae4c:	e5c60005 	strb	r0, [r6, #5]
         fae50:	e5c60004 	strb	r0, [r6, #4]
         fae54:	e5c60003 	strb	r0, [r6, #3]
         fae58:	e5c60002 	strb	r0, [r6, #2]
         fae5c:	e5c60001 	strb	r0, [r6, #1]
         fae60:	e5c60000 	strb	r0, [r6]
         fae64:	ea000043 	b	faf78 <TVisKeyIterator::LoadKey(void)+0x1a0>
         fae68:	e2840058 	add	r0, r4, #88	; 0x58
         fae6c:	e8901008 	ldmia	r0, {r3, ip}
         fae70:	e8851008 	stmia	r5, {r3, ip}
         fae74:	e5942032 	ldr	r2, [r4, #50]	; fField50
         fae78:	e1a02842 	mov	r2, r2, asr #16
         fae7c:	e3a010ff 	mov	r1, #255	; 0xff
         fae80:	e5940008 	ldr	r0, [r4, #8]	; fField8
         fae84:	e0011420 	and	r1, r1, r0, lsr #8
         fae88:	e0020291 	mul	r2, r1, r2
         fae8c:	e1a011a2 	mov	r1, r2, lsr #3
         fae90:	e5c41033 	strb	r1, [r4, #51]	; fField51
         fae94:	e1a01441 	mov	r1, r1, asr #8
         fae98:	e5c41032 	strb	r1, [r4, #50]	; fField50
         fae9c:	e5941030 	ldr	r1, [r4, #48]	; fField48
         faea0:	e1a01841 	mov	r1, r1, asr #16
         faea4:	e20000ff 	and	r0, r0, #255	; 0xff
         faea8:	e0010190 	mul	r1, r0, r1
         faeac:	e1a001a1 	mov	r0, r1, lsr #3
         faeb0:	e5c40031 	strb	r0, [r4, #49]	; fField49
         faeb4:	e1a00440 	mov	r0, r0, asr #8
         faeb8:	e5c40030 	strb	r0, [r4, #48]	; fField48
         faebc:	e1a00005 	mov	r0, r5
         faec0:	e2842064 	add	r2, r4, #100	; 0x64
         faec4:	e8920006 	ldmia	r2, {r1, r2}
         faec8:	eb695a86 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         faecc:	e5940032 	ldr	r0, [r4, #50]	; fField50
         faed0:	e1a00840 	mov	r0, r0, asr #16
         faed4:	e5840064 	str	r0, [r4, #100]	; fField100
         faed8:	e3a01007 	mov	r1, #7	; 0x7
         faedc:	e5940008 	ldr	r0, [r4, #8]	; fField8
         faee0:	e0111ca0 	ands	r1, r1, r0, lsr #25
         faee4:	11a00005 	movne	r0, r5
         faee8:	11a02001 	movne	r2, r1
         faeec:	1b695653 	blne	1b50840 <$InsetRect__FP4RectlT2>
         faef0:	e8951008 	ldmia	r5, {r3, ip}
         faef4:	e8871008 	stmia	r7, {r3, ip}
         faef8:	e8971008 	ldmia	r7, {r3, ip}
         faefc:	e8861008 	stmia	r6, {r3, ip}
         faf00:	e3a00003 	mov	r0, #3	; 0x3
         faf04:	e5941008 	ldr	r1, [r4, #8]	; fField8
         faf08:	e0000ba1 	and	r0, r0, r1, lsr #23
         faf0c:	e1a00800 	mov	r0, r0, lsl #16
         faf10:	e1b00840 	movs	r0, r0, asr #16
         faf14:	0a000017 	beq	faf78 <TVisKeyIterator::LoadKey(void)+0x1a0>
         faf18:	e594103e 	ldr	r1, [r4, #62]	; fField62
         faf1c:	e1a01821 	mov	r1, r1, lsr #16
         faf20:	e0811000 	add	r1, r1, r0
         faf24:	e5c4103f 	strb	r1, [r4, #63]	; fField63
         faf28:	e1a01441 	mov	r1, r1, asr #8
         faf2c:	e5c4103e 	strb	r1, [r4, #62]	; fField62
         faf30:	e594103c 	ldr	r1, [r4, #60]	; fField60
         faf34:	e1a01821 	mov	r1, r1, lsr #16
         faf38:	e0811000 	add	r1, r1, r0
         faf3c:	e5c4103d 	strb	r1, [r4, #61]	; fField61
         faf40:	e1a01441 	mov	r1, r1, asr #8
         faf44:	e5c4103c 	strb	r1, [r4, #60]	; fField60
         faf48:	e594103a 	ldr	r1, [r4, #58]	; fField58
         faf4c:	e1a01821 	mov	r1, r1, lsr #16
         faf50:	e0811000 	add	r1, r1, r0
         faf54:	e5c4103b 	strb	r1, [r4, #59]	; fField59
         faf58:	e1a01441 	mov	r1, r1, asr #8
         faf5c:	e5c4103a 	strb	r1, [r4, #58]	; fField58
         faf60:	e5941038 	ldr	r1, [r4, #56]	; fField56
         faf64:	e1a01821 	mov	r1, r1, lsr #16
         faf68:	e0810000 	add	r0, r1, r0
         faf6c:	e5c40039 	strb	r0, [r4, #57]	; fField57
         faf70:	e1a00440 	mov	r0, r0, asr #8
         faf74:	e5c40038 	strb	r0, [r4, #56]	; fField56
         faf78:	e1a00008 	mov	r0, r8
         faf7c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TVisKeyIterator::LoadRow(void)
 * Address: 000faf80
 */
TVisKeyIterator::LoadRow(void) {
    /*
         faf80:	e1a0c00d 	mov	ip, sp
         faf84:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         faf88:	e24cb004 	sub	fp, ip, #4	; 0x4
         faf8c:	e1a04000 	mov	r4, r0
         faf90:	eb66837b 	bl	1a9bd84 <TRawKeyIterator::$LoadRow(void)>
         faf94:	e3a05000 	mov	r5, #0	; 0x0
         faf98:	e5940018 	ldr	r0, [r4, #24]	; fField24
         faf9c:	e5941024 	ldr	r1, [r4, #36]	; fField36
         fafa0:	e1500001 	cmp	r0, r1
         fafa4:	ba00000b 	blt	fafd8 <TVisKeyIterator::LoadRow(void)+0x58>
         fafa8:	e5845070 	str	r5, [r4, #112]	; fField112
         fafac:	e584506c 	str	r5, [r4, #108]	; fField108
         fafb0:	e2840044 	add	r0, r4, #68	; 0x44
         fafb4:	e5c05007 	strb	r5, [r0, #7]
         fafb8:	e5c05006 	strb	r5, [r0, #6]
         fafbc:	e5c05005 	strb	r5, [r0, #5]
         fafc0:	e5c05004 	strb	r5, [r0, #4]
         fafc4:	e5c05003 	strb	r5, [r0, #3]
         fafc8:	e5c05002 	strb	r5, [r0, #2]
         fafcc:	e5c05001 	strb	r5, [r0, #1]
         fafd0:	e5c05000 	strb	r5, [r0]
         fafd4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         fafd8:	e3300000 	teq	r0, #0	; 0x0
         fafdc:	0a000003 	beq	faff0 <TVisKeyIterator::LoadRow(void)+0x70>
         fafe0:	e2841068 	add	r1, r4, #104	; 0x68
         fafe4:	e8910003 	ldmia	r1, {r0, r1}
         fafe8:	e0800001 	add	r0, r0, r1
         fafec:	e5840068 	str	r0, [r4, #104]	; fField104
         faff0:	e5940062 	ldr	r0, [r4, #98]	; fField98
         faff4:	e1a00840 	mov	r0, r0, asr #16
         faff8:	e5840064 	str	r0, [r4, #100]	; fField100
         faffc:	e2840010 	add	r0, r4, #16	; 0x10
         fb000:	e1a07000 	mov	r7, r0
         fb004:	e5900000 	ldr	r0, [r0]
         fb008:	e5900000 	ldr	r0, [r0]
         fb00c:	e1a01005 	mov	r1, r5
         fb010:	eb6b248f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fb014:	e3100003 	tst	r0, #3	; 0x3
         fb018:	01a00140 	moveq	r0, r0, asr #2
         fb01c:	0a000000 	beq	fb024 <TVisKeyIterator::LoadRow(void)+0xa4>
         fb020:	eb6b1c3d 	bl	1bc211c <$_RINTError(long)>
         fb024:	e594105c 	ldr	r1, [r4, #92]	; fField92
         fb028:	e1a01841 	mov	r1, r1, asr #16
         fb02c:	e0100091 	muls	r0, r1, r0
         fb030:	42800007 	addmi	r0, r0, #7	; 0x7
         fb034:	e1a001c0 	mov	r0, r0, asr #3
         fb038:	e1a00800 	mov	r0, r0, lsl #16
         fb03c:	e1a00840 	mov	r0, r0, asr #16
         fb040:	e584006c 	str	r0, [r4, #108]	; fField108
         fb044:	e5970000 	ldr	r0, [r7]
         fb048:	e5900000 	ldr	r0, [r0]
         fb04c:	e3a08001 	mov	r8, #1	; 0x1
         fb050:	e1a01008 	mov	r1, r8
         fb054:	eb6b247e 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fb058:	e3100003 	tst	r0, #3	; 0x3
         fb05c:	01a00140 	moveq	r0, r0, asr #2
         fb060:	0a000000 	beq	fb068 <TVisKeyIterator::LoadRow(void)+0xe8>
         fb064:	eb6b1c2c 	bl	1bc211c <$_RINTError(long)>
         fb068:	e594105c 	ldr	r1, [r4, #92]	; fField92
         fb06c:	e1a01841 	mov	r1, r1, asr #16
         fb070:	e0100091 	muls	r0, r1, r0
         fb074:	42800007 	addmi	r0, r0, #7	; 0x7
         fb078:	e1a001c0 	mov	r0, r0, asr #3
         fb07c:	e1a01800 	mov	r1, r0, lsl #16
         fb080:	e1a01841 	mov	r1, r1, asr #16
         fb084:	e5841070 	str	r1, [r4, #112]	; fField112
         fb088:	e5940062 	ldr	r0, [r4, #98]	; fField98
         fb08c:	e1a00820 	mov	r0, r0, lsr #16
         fb090:	e5c40047 	strb	r0, [r4, #71]	; fField71
         fb094:	e1a00440 	mov	r0, r0, asr #8
         fb098:	e5c40046 	strb	r0, [r4, #70]	; fField70
         fb09c:	e5940068 	ldr	r0, [r4, #104]	; fField104
         fb0a0:	e5c40045 	strb	r0, [r4, #69]	; fField69
         fb0a4:	e1a02440 	mov	r2, r0, asr #8
         fb0a8:	e5c42044 	strb	r2, [r4, #68]	; fField68
         fb0ac:	e0800001 	add	r0, r0, r1
         fb0b0:	e5c40049 	strb	r0, [r4, #73]	; fField73
         fb0b4:	e1a00440 	mov	r0, r0, asr #8
         fb0b8:	e5c40048 	strb	r0, [r4, #72]	; fField72
         fb0bc:	e3a06000 	mov	r6, #0	; 0x0
         fb0c0:	e5c4504c 	strb	r5, [r4, #76]	; fField76
         fb0c4:	e5845050 	str	r5, [r4, #80]	; fField80
         fb0c8:	e5845054 	str	r5, [r4, #84]	; fField84
         fb0cc:	e3a05000 	mov	r5, #0	; 0x0
         fb0d0:	e5940020 	ldr	r0, [r4, #32]	; fField32
         fb0d4:	e3500000 	cmp	r0, #0	; 0x0
         fb0d8:	da000016 	ble	fb138 <TVisKeyIterator::LoadRow(void)+0x1b8>
         fb0dc:	e0851085 	add	r1, r5, r5, lsl #1
         fb0e0:	e2811004 	add	r1, r1, #4	; 0x4
         fb0e4:	e5970000 	ldr	r0, [r7]
         fb0e8:	e5900000 	ldr	r0, [r0]
         fb0ec:	eb6b2458 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fb0f0:	e3100003 	tst	r0, #3	; 0x3
         fb0f4:	01a00140 	moveq	r0, r0, asr #2
         fb0f8:	0a000000 	beq	fb100 <TVisKeyIterator::LoadRow(void)+0x180>
         fb0fc:	eb6b1c06 	bl	1bc211c <$_RINTError(long)>
         fb100:	e1a00440 	mov	r0, r0, asr #8
         fb104:	e20010ff 	and	r1, r0, #255	; 0xff
         fb108:	e0816006 	add	r6, r1, r6
         fb10c:	e3100202 	tst	r0, #536870912	; 0x20000000
         fb110:	1a000004 	bne	fb128 <TVisKeyIterator::LoadRow(void)+0x1a8>
         fb114:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         fb118:	e3300000 	teq	r0, #0	; 0x0
         fb11c:	05c4804c 	streqb	r8, [r4, #76]	; fField76
         fb120:	05845050 	streq	r5, [r4, #80]	; fField80
         fb124:	e5845054 	str	r5, [r4, #84]	; fField84
         fb128:	e2855001 	add	r5, r5, #1	; 0x1
         fb12c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         fb130:	e1500005 	cmp	r0, r5
         fb134:	caffffe8 	bgt	fb0dc <TVisKeyIterator::LoadRow(void)+0x15c>
         fb138:	e5941046 	ldr	r1, [r4, #70]	; fField70
         fb13c:	e1a01841 	mov	r1, r1, asr #16
         fb140:	e594005e 	ldr	r0, [r4, #94]	; fField94
         fb144:	e1a00840 	mov	r0, r0, asr #16
         fb148:	e0100096 	muls	r0, r6, r0
         fb14c:	42800007 	addmi	r0, r0, #7	; 0x7
         fb150:	e08101c0 	add	r0, r1, r0, asr #3
         fb154:	e5c4004b 	strb	r0, [r4, #75]	; fField75
         fb158:	e1a00440 	mov	r0, r0, asr #8
         fb15c:	e5c4004a 	strb	r0, [r4, #74]	; fField74
         fb160:	e594004a 	ldr	r0, [r4, #74]	; fField74
         fb164:	e1a00820 	mov	r0, r0, lsr #16
         fb168:	e2800001 	add	r0, r0, #1	; 0x1
         fb16c:	e5c4004b 	strb	r0, [r4, #75]	; fField75
         fb170:	e1a00440 	mov	r0, r0, asr #8
         fb174:	e5c4004a 	strb	r0, [r4, #74]	; fField74
         fb178:	e5940048 	ldr	r0, [r4, #72]	; fField72
         fb17c:	e1a00820 	mov	r0, r0, lsr #16
         fb180:	e2800001 	add	r0, r0, #1	; 0x1
         fb184:	e5c40049 	strb	r0, [r4, #73]	; fField73
         fb188:	e1a00440 	mov	r0, r0, asr #8
         fb18c:	e5c40048 	strb	r0, [r4, #72]	; fField72
         fb190:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TVisKeyIterator::FindEnclosingKey(TPoint)
 * Address: 000fb194
 */
TVisKeyIterator::FindEnclosingKey(TPoint) {
    /*
         fb194:	e1a0c00d 	mov	ip, sp
         fb198:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         fb19c:	e24cb004 	sub	fp, ip, #4	; 0x4
         fb1a0:	e1a05001 	mov	r5, r1
         fb1a4:	e1a04000 	mov	r4, r0
         fb1a8:	e5900018 	ldr	r0, [r0, #24]	; fField24
         fb1ac:	e3300000 	teq	r0, #0	; 0x0
         fb1b0:	05940014 	ldreq	r0, [r4, #20]	; fField20
         fb1b4:	03300000 	teqeq	r0, #0	; 0x0
         fb1b8:	11a00004 	movne	r0, r4
         fb1bc:	1b6693a2 	blne	1aa004c <TVisKeyIterator::$Reset(void)>
         fb1c0:	e3a07000 	mov	r7, #0	; 0x0
         fb1c4:	e2848034 	add	r8, r4, #52	; 0x34
         fb1c8:	e1a01008 	mov	r1, r8
         fb1cc:	e52d5004 	str	r5, [sp, -#4]!
         fb1d0:	e1a00005 	mov	r0, r5
         fb1d4:	e28dd004 	add	sp, sp, #4	; 0x4
         fb1d8:	eb695dd7 	bl	1b5293c <$PtInRect(Point, Rect *)>
         fb1dc:	e3300000 	teq	r0, #0	; 0x0
         fb1e0:	0a000003 	beq	fb1f4 <TVisKeyIterator::FindEnclosingKey(TPoint)+0x60>
         fb1e4:	e5940008 	ldr	r0, [r4, #8]	; fField8
         fb1e8:	e3100202 	tst	r0, #536870912	; 0x20000000
         fb1ec:	03a00001 	moveq	r0, #1	; 0x1
         fb1f0:	0a000000 	beq	fb1f8 <TVisKeyIterator::FindEnclosingKey(TPoint)+0x64>
         fb1f4:	e3a00000 	mov	r0, #0	; 0x0
         fb1f8:	e21060ff 	ands	r6, r0, #255	; 0xff
         fb1fc:	1a000002 	bne	fb20c <TVisKeyIterator::FindEnclosingKey(TPoint)+0x78>
         fb200:	e1a00004 	mov	r0, r4
         fb204:	eb668704 	bl	1a9ce1c <TVisKeyIterator::$Next(void)>
         fb208:	e1a07000 	mov	r7, r0
         fb20c:	e3370000 	teq	r7, #0	; 0x0
         fb210:	03360000 	teqeq	r6, #0	; 0x0
         fb214:	0affffeb 	beq	fb1c8 <TVisKeyIterator::FindEnclosingKey(TPoint)+0x34>
         fb218:	e1a00006 	mov	r0, r6
         fb21c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TVisKeyIterator::__ct(RefVar const &, TRect &, TPoint)
 * Address: 000fd0ac
 */
TVisKeyIterator::TVisKeyIterator(RefVar const &, TRect &, TPoint) {
    /*
         fd0ac:	e1a0c00d 	mov	ip, sp
         fd0b0:	e92dd87f 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, fp, ip, lr, pc}
         fd0b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd0b8:	e1b04000 	movs	r4, r0
         fd0bc:	e1a06001 	mov	r6, r1
         fd0c0:	e1a05002 	mov	r5, r2
         fd0c4:	1a000003 	bne	fd0d8 <TVisKeyIterator::__ct(RefVar const &, TRect &, TPoint)+0x2c>
         fd0c8:	e3a00074 	mov	r0, #116	; 0x74
         fd0cc:	eb6b4599 	bl	1bce738 <$__nw(unsigned int)>
         fd0d0:	e1b04000 	movs	r4, r0
         fd0d4:	0a000010 	beq	fd11c <TVisKeyIterator::__ct(RefVar const &, TRect &, TPoint)+0x70>
         fd0d8:	e1a01006 	mov	r1, r6
         fd0dc:	e1a00004 	mov	r0, r4
         fd0e0:	eb662cc7 	bl	1a88404 <TRawKeyIterator::$__ct(RefVar const &)>
         fd0e4:	e2840058 	add	r0, r4, #88	; 0x58
         fd0e8:	e8955000 	ldmia	r5, {ip, lr}
         fd0ec:	e8805000 	stmia	r0, {ip, lr}
         fd0f0:	e2840060 	add	r0, r4, #96	; 0x60
         fd0f4:	e51b101c 	ldr	r1, [fp, -#28]
         fd0f8:	e5801000 	str	r1, [r0]
         fd0fc:	e51b001a 	ldr	r0, [fp, -#26]
         fd100:	e1a00840 	mov	r0, r0, asr #16
         fd104:	e5840064 	str	r0, [r4, #100]	; fField100
         fd108:	e51b001c 	ldr	r0, [fp, -#28]
         fd10c:	e1a00840 	mov	r0, r0, asr #16
         fd110:	e5840068 	str	r0, [r4, #104]	; fField104
         fd114:	e1a00004 	mov	r0, r4
         fd118:	eb668bcb 	bl	1aa004c <TVisKeyIterator::$Reset(void)>
         fd11c:	e1a00004 	mov	r0, r4
         fd120:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TVisKeyIterator::Reset(void)
 * Address: 000fd124
 */
TVisKeyIterator::Reset(void) {
    /*
         fd124:	e1a0c00d 	mov	ip, sp
         fd128:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fd12c:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd130:	e1a04000 	mov	r4, r0
         fd134:	eb668bc3 	bl	1aa0048 <TRawKeyIterator::$Reset(void)>
         fd138:	e5940062 	ldr	r0, [r4, #98]	; fField98
         fd13c:	e1a00840 	mov	r0, r0, asr #16
         fd140:	e5840064 	str	r0, [r4, #100]	; fField100
         fd144:	e5940060 	ldr	r0, [r4, #96]	; fField96
         fd148:	e1a00840 	mov	r0, r0, asr #16
         fd14c:	e5840068 	str	r0, [r4, #104]	; fField104
         fd150:	e1a00004 	mov	r0, r4
         fd154:	eb667b0b 	bl	1a9bd88 <TVisKeyIterator::$LoadRow(void)>
         fd158:	e1a00004 	mov	r0, r4
         fd15c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         fd160:	ea667b06 	b	1a9bd80 <TVisKeyIterator::$LoadKey(void)>
    */
}

/**
 * Symbol: TVisKeyIterator::CopyInto(TVisKeyIterator *)
 * Address: 000fd164
 */
TVisKeyIterator::CopyInto(TVisKeyIterator *) {
    /*
         fd164:	e1a0c00d 	mov	ip, sp
         fd168:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fd16c:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd170:	e1a05000 	mov	r5, r0
         fd174:	e1a04001 	mov	r4, r1
         fd178:	eb664576 	bl	1a8e758 <TRawKeyIterator::$CopyInto(TRawKeyIterator *)>
         fd17c:	e284002c 	add	r0, r4, #44	; 0x2c
         fd180:	e285102c 	add	r1, r5, #44	; 0x2c
         fd184:	e8915000 	ldmia	r1, {ip, lr}
         fd188:	e8805000 	stmia	r0, {ip, lr}
         fd18c:	e2841034 	add	r1, r4, #52	; 0x34
         fd190:	e2850034 	add	r0, r5, #52	; 0x34
         fd194:	e8905000 	ldmia	r0, {ip, lr}
         fd198:	e8815000 	stmia	r1, {ip, lr}
         fd19c:	e284003c 	add	r0, r4, #60	; 0x3c
         fd1a0:	e285103c 	add	r1, r5, #60	; 0x3c
         fd1a4:	e8915000 	ldmia	r1, {ip, lr}
         fd1a8:	e8805000 	stmia	r0, {ip, lr}
         fd1ac:	e2840044 	add	r0, r4, #68	; 0x44
         fd1b0:	e2851044 	add	r1, r5, #68	; 0x44
         fd1b4:	e8915000 	ldmia	r1, {ip, lr}
         fd1b8:	e8805000 	stmia	r0, {ip, lr}
         fd1bc:	e2841058 	add	r1, r4, #88	; 0x58
         fd1c0:	e2850058 	add	r0, r5, #88	; 0x58
         fd1c4:	e8905000 	ldmia	r0, {ip, lr}
         fd1c8:	e8815000 	stmia	r1, {ip, lr}
         fd1cc:	e2840060 	add	r0, r4, #96	; 0x60
         fd1d0:	e5951060 	ldr	r1, [r5, #96]	; fField96
         fd1d4:	e5801000 	str	r1, [r0]
         fd1d8:	e5950064 	ldr	r0, [r5, #100]	; fField100
         fd1dc:	e5840064 	str	r0, [r4, #100]	; fField100
         fd1e0:	e5950068 	ldr	r0, [r5, #104]	; fField104
         fd1e4:	e5840068 	str	r0, [r4, #104]	; fField104
         fd1e8:	e595006c 	ldr	r0, [r5, #108]	; fField108
         fd1ec:	e584006c 	str	r0, [r4, #108]	; fField108
         fd1f0:	e5b50070 	ldr	r0, [r5, #112]!	; fField112
         fd1f4:	e5a40070 	str	r0, [r4, #112]!	; fField112
         fd1f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

