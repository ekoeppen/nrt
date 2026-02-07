#include "Newton.h"

/**
 * Symbol: xFracSin(long)
 * Address: 00038060
 */
xFracSin(long) {
    /*
         38060:	e1a0c00d 	mov	ip, sp
         38064:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         38068:	e24cb004 	sub	fp, ip, #4	; 0x4
         3806c:	e24dd004 	sub	sp, sp, #4	; 0x4
         38070:	e3a01d2f 	mov	r1, #3008	; 0xbc0
         38074:	e28119e5 	add	r1, r1, #3751936	; 0x394000
         38078:	eb6ea411 	bl	1be10c4 <$FixedMultiply>
         3807c:	e1a0100d 	mov	r1, sp
         38080:	eb6ea413 	bl	1be10d4 <$FractSineCosine>
         38084:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: xFracCos(long)
 * Address: 00038088
 */
xFracCos(long) {
    /*
         38088:	e1a0c00d 	mov	ip, sp
         3808c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         38090:	e24cb004 	sub	fp, ip, #4	; 0x4
         38094:	e24dd004 	sub	sp, sp, #4	; 0x4
         38098:	e3a01d2f 	mov	r1, #3008	; 0xbc0
         3809c:	e28119e5 	add	r1, r1, #3751936	; 0x394000
         380a0:	eb6ea407 	bl	1be10c4 <$FixedMultiply>
         380a4:	e1a0100d 	mov	r1, sp
         380a8:	eb6ea409 	bl	1be10d4 <$FractSineCosine>
         380ac:	e49d0004 	ldr	r0, [sp], #4
         380b0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: xHLock(char **)
 * Address: 000380b4
 */
xHLock(char **) {
    /*
         380b4:	ea6ea814 	b	1be210c <$HLock>
    */
}

/**
 * Symbol: xHUnlock(char **)
 * Address: 000380b8
 */
xHUnlock(char **) {
    /*
         380b8:	ea6ea815 	b	1be2114 <$HUnlock>
    */
}

/**
 * Symbol: xNumToString(long, char *)
 * Address: 000380e4
 */
xNumToString(long, char *) {
    /*
         380e4:	e3a00000 	mov	r0, #0	; 0x0
         380e8:	e5c10000 	strb	r0, [r1]
         380ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: xTickCount(void)
 * Address: 000380f0
 */
xTickCount(void) {
    /*
         380f0:	ea6eea0a 	b	1bf2920 <$Ticks(void)>
    */
}

/**
 * Symbol: xTabInit(void)
 * Address: 000380f4
 */
xTabInit(void) {
    /*
         380f4:	e1a0c00d 	mov	ip, sp
         380f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         380fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         38100:	eb6cd564 	bl	1b6d698 <$NextTab(void)>
         38104:	e59f4014 	ldr	r4, [pc, #14]	; 38120 <xTabInit(void)+0x2c>
         38108:	e5840004 	str	r0, [r4, #4]
         3810c:	eb6cd55f 	bl	1b6d690 <$NextDown(void)>
         38110:	e5840008 	str	r0, [r4, #8]
         38114:	eb6cd560 	bl	1b6d69c <$NextUp(void)>
         38118:	e5a4000c 	str	r0, [r4, #12]!
         3811c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         38120:	0c1008a8 	ldceq	8, cr0, [r0], -#672
    */
}

/**
 * Symbol: xTabOn(void)
 * Address: 00038124
 */
xTabOn(void) {
    /*
         38124:	e1a0c00d 	mov	ip, sp
         38128:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         3812c:	e24cb004 	sub	fp, ip, #4	; 0x4
         38130:	ebffffef 	bl	380f4 <xTabInit(void)>
         38134:	e3a01001 	mov	r1, #1	; 0x1
         38138:	e59f0004 	ldr	r0, [pc, #4]	; 38144 <xTabOn(void)+0x20>
         3813c:	e5c01000 	strb	r1, [r0]
         38140:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         38144:	0c1008a8 	ldceq	8, cr0, [r0], -#672
    */
}

/**
 * Symbol: xGetTabPt(TabPt *)
 * Address: 00038148
 */
xGetTabPt(TabPt *) {
    /*
         38148:	e1a0c00d 	mov	ip, sp
         3814c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         38150:	e24cb004 	sub	fp, ip, #4	; 0x4
         38154:	e1a04000 	mov	r4, r0
         38158:	e3a07000 	mov	r7, #0	; 0x0
         3815c:	e3a06001 	mov	r6, #1	; 0x1
         38160:	e59f505c 	ldr	r5, [pc, #5c]	; 381c4 <xGetTabPt(TabPt *)+0x7c>
         38164:	eb6ad13b 	bl	1aec658 <$StrokerBufferEmpty(void)>
         38168:	e3300000 	teq	r0, #0	; 0x0
         3816c:	11a00007 	movne	r0, r7
         38170:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         38174:	eb6acd01 	bl	1aeb580 <$GetStrokerData(void)>
         38178:	e200000f 	and	r0, r0, #15	; 0xf
         3817c:	e350000e 	cmp	r0, #14	; 0xe
         38180:	908ff100 	addls	pc, pc, r0, lsl #2
         38184:	ea000048 	b	382ac <xGetTabPt(TabPt *)+0x164>
         38188:	ea00000e 	b	381c8 <xGetTabPt(TabPt *)+0x80>
         3818c:	ea00000d 	b	381c8 <xGetTabPt(TabPt *)+0x80>
         38190:	ea00000c 	b	381c8 <xGetTabPt(TabPt *)+0x80>
         38194:	ea00000b 	b	381c8 <xGetTabPt(TabPt *)+0x80>
         38198:	ea00000a 	b	381c8 <xGetTabPt(TabPt *)+0x80>
         3819c:	ea000009 	b	381c8 <xGetTabPt(TabPt *)+0x80>
         381a0:	ea000008 	b	381c8 <xGetTabPt(TabPt *)+0x80>
         381a4:	ea000007 	b	381c8 <xGetTabPt(TabPt *)+0x80>
         381a8:	ea00003f 	b	382ac <xGetTabPt(TabPt *)+0x164>
         381ac:	ea00003e 	b	382ac <xGetTabPt(TabPt *)+0x164>
         381b0:	ea00003d 	b	382ac <xGetTabPt(TabPt *)+0x164>
         381b4:	ea00003c 	b	382ac <xGetTabPt(TabPt *)+0x164>
         381b8:	ea00003b 	b	382ac <xGetTabPt(TabPt *)+0x164>
         381bc:	ea00001c 	b	38234 <xGetTabPt(TabPt *)+0xec>
         381c0:	ea000026 	b	38260 <xGetTabPt(TabPt *)+0x118>
         381c4:	0c1008a8 	ldceq	8, cr0, [r0], -#672
         381c8:	e5950010 	ldr	r0, [r5, #16]
         381cc:	e3300006 	teq	r0, #6	; 0x6
         381d0:	13300004 	teqne	r0, #4	; 0x4
         381d4:	1a000016 	bne	38234 <xGetTabPt(TabPt *)+0xec>
         381d8:	eb6acce8 	bl	1aeb580 <$GetStrokerData(void)>
         381dc:	e1a00920 	mov	r0, r0, lsr #18
         381e0:	e1a00900 	mov	r0, r0, lsl #18
         381e4:	e1a082a0 	mov	r8, r0, lsr #5
         381e8:	eb6acce4 	bl	1aeb580 <$GetStrokerData(void)>
         381ec:	e1a00700 	mov	r0, r0, lsl #14
         381f0:	e1a00720 	mov	r0, r0, lsr #14
         381f4:	e3c0000f 	bic	r0, r0, #15	; 0xf
         381f8:	e1a00480 	mov	r0, r0, lsl #9
         381fc:	e5840004 	str	r0, [r4, #4]
         38200:	e5848000 	str	r8, [r4]
         38204:	eb6accdd 	bl	1aeb580 <$GetStrokerData(void)>
         38208:	e200000f 	and	r0, r0, #15	; 0xf
         3820c:	e5c40009 	strb	r0, [r4, #9]
         38210:	e1a00440 	mov	r0, r0, asr #8
         38214:	e5c40008 	strb	r0, [r4, #8]
         38218:	e5c4700b 	strb	r7, [r4, #11]
         3821c:	e5c4700a 	strb	r7, [r4, #10]
         38220:	e3a00001 	mov	r0, #1	; 0x1
         38224:	eb6acce2 	bl	1aeb5b4 <$IncStrokerIndex(unsigned long)>
         38228:	e3a00004 	mov	r0, #4	; 0x4
         3822c:	e5a50010 	str	r0, [r5, #16]!
         38230:	ea000017 	b	38294 <xGetTabPt(TabPt *)+0x14c>
         38234:	e5950010 	ldr	r0, [r5, #16]
         38238:	e3300003 	teq	r0, #3	; 0x3
         3823c:	1a000007 	bne	38260 <xGetTabPt(TabPt *)+0x118>
         38240:	e3a00001 	mov	r0, #1	; 0x1
         38244:	eb6ac8cc 	bl	1aea57c <$GetStrokerData(unsigned long)>
         38248:	e5850018 	str	r0, [r5, #24]
         3824c:	e3a00002 	mov	r0, #2	; 0x2
         38250:	eb6accd7 	bl	1aeb5b4 <$IncStrokerIndex(unsigned long)>
         38254:	e3a00006 	mov	r0, #6	; 0x6
         38258:	e5850010 	str	r0, [r5, #16]
         3825c:	eaffffc0 	b	38164 <xGetTabPt(TabPt *)+0x1c>
         38260:	e3a08003 	mov	r8, #3	; 0x3
         38264:	e5950010 	ldr	r0, [r5, #16]
         38268:	e3300004 	teq	r0, #4	; 0x4
         3826c:	1a00000a 	bne	3829c <xGetTabPt(TabPt *)+0x154>
         38270:	e3e00000 	mvn	r0, #0	; 0x0
         38274:	e5840000 	str	r0, [r4]
         38278:	e3a00001 	mov	r0, #1	; 0x1
         3827c:	e5856010 	str	r6, [r5, #16]
         38280:	eb6ac8bd 	bl	1aea57c <$GetStrokerData(unsigned long)>
         38284:	e585001c 	str	r0, [r5, #28]
         38288:	e3a00004 	mov	r0, #4	; 0x4
         3828c:	eb6accc8 	bl	1aeb5b4 <$IncStrokerIndex(unsigned long)>
         38290:	e5a58010 	str	r8, [r5, #16]!
         38294:	e1a00006 	mov	r0, r6
         38298:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         3829c:	e3a00004 	mov	r0, #4	; 0x4
         382a0:	eb6accc3 	bl	1aeb5b4 <$IncStrokerIndex(unsigned long)>
         382a4:	e5858010 	str	r8, [r5, #16]
         382a8:	eaffffad 	b	38164 <xGetTabPt(TabPt *)+0x1c>
         382ac:	e3a00001 	mov	r0, #1	; 0x1
         382b0:	eb6accbf 	bl	1aeb5b4 <$IncStrokerIndex(unsigned long)>
         382b4:	eaffffaa 	b	38164 <xGetTabPt(TabPt *)+0x1c>
    */
}

/**
 * Symbol: xLastPoint(TabPt *)
 * Address: 000382b8
 */
xLastPoint(TabPt *) {
    /*
         382b8:	e5900000 	ldr	r0, [r0]
         382bc:	e3700001 	cmn	r0, #1	; 0x1
         382c0:	13a00000 	movne	r0, #0	; 0x0
         382c4:	03a00001 	moveq	r0, #1	; 0x1
         382c8:	e20000ff 	and	r0, r0, #255	; 0xff
         382cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: xNewHandle(long)
 * Address: 000382e0
 */
xNewHandle(long) {
    /*
         382e0:	ea6ea791 	b	1be212c <$NewHandle>
    */
}

/**
 * Symbol: xHandToHand(char ***)
 * Address: 000382ec
 */
xHandToHand(char ***) {
    /*
         382ec:	e1a0c00d 	mov	ip, sp
         382f0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         382f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         382f8:	eb6ea37f 	bl	1be10fc <$HandToHand>
         382fc:	e1a00800 	mov	r0, r0, lsl #16
         38300:	e1a00840 	mov	r0, r0, asr #16
         38304:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: xGetDownTime(void)
 * Address: 00038308
 */
xGetDownTime(void) {
    /*
         38308:	e59f100c 	ldr	r1, [pc, #c]	; 3831c <xGetDownTime(void)+0x14>
         3830c:	e3a02000 	mov	r2, #0	; 0x0
         38310:	e5910018 	ldr	r0, [r1, #24]
         38314:	e5a12018 	str	r2, [r1, #24]!
         38318:	e1a0f00e 	mov	pc, lr
         3831c:	0c1008a8 	ldceq	8, cr0, [r0], -#672
    */
}

/**
 * Symbol: xGetUpTime(void)
 * Address: 00038320
 */
xGetUpTime(void) {
    /*
         38320:	e59f100c 	ldr	r1, [pc, #c]	; 38334 <xGetUpTime(void)+0x14>
         38324:	e3a02000 	mov	r2, #0	; 0x0
         38328:	e591001c 	ldr	r0, [r1, #28]
         3832c:	e5a1201c 	str	r2, [r1, #28]!
         38330:	e1a0f00e 	mov	pc, lr
         38334:	0c1008a8 	ldceq	8, cr0, [r0], -#672
    */
}

/**
 * Symbol: xGetTabScale(FPoint *)
 * Address: 00038338
 */
xGetTabScale(FPoint *) {
    /*
         38338:	e3a01702 	mov	r1, #524288	; 0x80000
         3833c:	e5801000 	str	r1, [r0]
         38340:	e5a01004 	str	r1, [r0, #4]!
         38344:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: xDisposHandle(char **)
 * Address: 00038348
 */
xDisposHandle(char **) {
    /*
         38348:	ea6ea358 	b	1be10b0 <$DisposHandle>
    */
}

/**
 * Symbol: xGetHandleSize(char **)
 * Address: 0003834c
 */
xGetHandleSize(char **) {
    /*
         3834c:	ea6ea365 	b	1be10e8 <$GetHandleSize>
    */
}

/**
 * Symbol: xSetHandleSize(char **, long)
 * Address: 00038350
 */
xSetHandleSize(char **, long) {
    /*
         38350:	ea6ea789 	b	1be217c <$SetHandleSize>
    */
}

/**
 * Symbol: XYFixedScaleFixedRect
 * Address: 000bda18
 */
void globals::XYFixedScaleFixedRect() {
    /*
         bda18:	e1a0c00d 	mov	ip, sp
         bda1c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         bda20:	e24cb004 	sub	fp, ip, #4	; 0x4
         bda24:	e1a04000 	mov	r4, r0
         bda28:	e1a05001 	mov	r5, r1
         bda2c:	e1a06002 	mov	r6, r2
         bda30:	e5900004 	ldr	r0, [r0, #4]
         bda34:	e1a01002 	mov	r1, r2
         bda38:	eb6c8da1 	bl	1be10c4 <$FixedMultiply>
         bda3c:	e5840004 	str	r0, [r4, #4]
         bda40:	e1a01006 	mov	r1, r6
         bda44:	e594000c 	ldr	r0, [r4, #12]
         bda48:	eb6c8d9d 	bl	1be10c4 <$FixedMultiply>
         bda4c:	e1a01005 	mov	r1, r5
         bda50:	e584000c 	str	r0, [r4, #12]
         bda54:	e5940000 	ldr	r0, [r4]
         bda58:	eb6c8d99 	bl	1be10c4 <$FixedMultiply>
         bda5c:	e5840000 	str	r0, [r4]
         bda60:	e1a01005 	mov	r1, r5
         bda64:	e5940008 	ldr	r0, [r4, #8]
         bda68:	eb6c8d95 	bl	1be10c4 <$FixedMultiply>
         bda6c:	e5a40008 	str	r0, [r4, #8]!
         bda70:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: XProjectionSetPtVals
 * Address: 000ccd9c
 */
void globals::XProjectionSetPtVals() {
    /*
         ccd9c:	e1a0c00d 	mov	ip, sp
         ccda0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ccda4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ccda8:	e24cb014 	sub	fp, ip, #20	; 0x14
         ccdac:	e1a04000 	mov	r4, r0
         ccdb0:	e1a09801 	mov	r9, r1, lsl #16
         ccdb4:	e1a09849 	mov	r9, r9, asr #16
         ccdb8:	e1a05802 	mov	r5, r2, lsl #16
         ccdbc:	e1a05845 	mov	r5, r5, asr #16
         ccdc0:	e1550009 	cmp	r5, r9
         ccdc4:	b1a06005 	movlt	r6, r5
         ccdc8:	b1a0a009 	movlt	sl, r9
         ccdcc:	a1a06009 	movge	r6, r9
         ccdd0:	a1a0a005 	movge	sl, r5
         ccdd4:	e7948086 	ldr	r8, [r4, r6, lsl #1]
         ccdd8:	e1a08848 	mov	r8, r8, asr #16
         ccddc:	e3a07001 	mov	r7, #1	; 0x1
         ccde0:	e1a01006 	mov	r1, r6
         ccde4:	e0860007 	add	r0, r6, r7
         ccde8:	e1a00800 	mov	r0, r0, lsl #16
         ccdec:	e1a00840 	mov	r0, r0, asr #16
         ccdf0:	e150000a 	cmp	r0, sl
         ccdf4:	ca00000f 	bgt	cce38 <XProjectionSetPtVals+0x9c>
         ccdf8:	e7942080 	ldr	r2, [r4, r0, lsl #1]
         ccdfc:	e1a02842 	mov	r2, r2, asr #16
         cce00:	e1520008 	cmp	r2, r8
         cce04:	b1a08002 	movlt	r8, r2
         cce08:	b3a07001 	movlt	r7, #1	; 0x1
         cce0c:	b1a01000 	movlt	r1, r0
         cce10:	ba000003 	blt	cce24 <XProjectionSetPtVals+0x88>
         cce14:	02872001 	addeq	r2, r7, #1	; 0x1
         cce18:	01a07802 	moveq	r7, r2, lsl #16
         cce1c:	01a07847 	moveq	r7, r7, asr #16
         cce20:	00811000 	addeq	r1, r1, r0
         cce24:	e2800001 	add	r0, r0, #1	; 0x1
         cce28:	e1a00800 	mov	r0, r0, lsl #16
         cce2c:	e1a00840 	mov	r0, r0, asr #16
         cce30:	e150000a 	cmp	r0, sl
         cce34:	daffffef 	ble	ccdf8 <XProjectionSetPtVals+0x5c>
         cce38:	e1a00007 	mov	r0, r7
         cce3c:	eb6b96bf 	bl	1bb2940 <$__rt_sdiv>
         cce40:	e04a1006 	sub	r1, sl, r6
         cce44:	e2811001 	add	r1, r1, #1	; 0x1
         cce48:	e1a010c1 	mov	r1, r1, asr #1
         cce4c:	e1a01801 	mov	r1, r1, lsl #16
         cce50:	e1a01841 	mov	r1, r1, asr #16
         cce54:	e1570001 	cmp	r7, r1
         cce58:	da00001b 	ble	ccecc <XProjectionSetPtVals+0x130>
         cce5c:	e0861001 	add	r1, r6, r1
         cce60:	e1510000 	cmp	r1, r0
         cce64:	ca000001 	bgt	cce70 <XProjectionSetPtVals+0xd4>
         cce68:	e1550009 	cmp	r5, r9
         cce6c:	aa000003 	bge	cce80 <XProjectionSetPtVals+0xe4>
         cce70:	e1510000 	cmp	r1, r0
         cce74:	da000005 	ble	cce90 <XProjectionSetPtVals+0xf4>
         cce78:	e1550009 	cmp	r5, r9
         cce7c:	aa000003 	bge	cce90 <XProjectionSetPtVals+0xf4>
         cce80:	e59b1014 	ldr	r1, [fp, #20]
         cce84:	e5c18001 	strb	r8, [r1, #1]
         cce88:	e1a00448 	mov	r0, r8, asr #8
         cce8c:	ea000013 	b	ccee0 <XProjectionSetPtVals+0x144>
         cce90:	e7940085 	ldr	r0, [r4, r5, lsl #1]
         cce94:	e1a00820 	mov	r0, r0, lsr #16
         cce98:	e59b1014 	ldr	r1, [fp, #20]
         cce9c:	e5c10001 	strb	r0, [r1, #1]
         ccea0:	e1a00440 	mov	r0, r0, asr #8
         ccea4:	e5c10000 	strb	r0, [r1]
         ccea8:	e59b3010 	ldr	r3, [fp, #16]
         cceac:	e5930000 	ldr	r0, [r3]
         cceb0:	e1580840 	cmp	r8, r0, asr #16
         cceb4:	a91baff0 	ldmgedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         cceb8:	e59b3010 	ldr	r3, [fp, #16]
         ccebc:	e5c38001 	strb	r8, [r3, #1]
         ccec0:	e1a00448 	mov	r0, r8, asr #8
         ccec4:	e5c30000 	strb	r0, [r3]
         ccec8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         ccecc:	e7940085 	ldr	r0, [r4, r5, lsl #1]
         cced0:	e1a00820 	mov	r0, r0, lsr #16
         cced4:	e59b1014 	ldr	r1, [fp, #20]
         cced8:	e5c10001 	strb	r0, [r1, #1]
         ccedc:	e1a00440 	mov	r0, r0, asr #8
         ccee0:	e5c10000 	strb	r0, [r1]
         ccee4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XProjectionDestroy
 * Address: 000ccee8
 */
void globals::XProjectionDestroy() {
    /*
         ccee8:	e3300000 	teq	r0, #0	; 0x0
         cceec:	01a0f00e 	moveq	pc, lr
         ccef0:	e1a0c00d 	mov	ip, sp
         ccef4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ccef8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ccefc:	e1a04000 	mov	r4, r0
         ccf00:	e5900008 	ldr	r0, [r0, #8]
         ccf04:	e3300000 	teq	r0, #0	; 0x0
         ccf08:	1b6c1692 	blne	1bd2958 <$free>
         ccf0c:	e594000c 	ldr	r0, [r4, #12]
         ccf10:	e3300000 	teq	r0, #0	; 0x0
         ccf14:	1b6c168f 	blne	1bd2958 <$free>
         ccf18:	e1a00004 	mov	r0, r4
         ccf1c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         ccf20:	ea6c168c 	b	1bd2958 <$free>
    */
}

/**
 * Symbol: XInitSerialDebugging
 * Address: 00199fb8
 */
void globals::XInitSerialDebugging() {
    /*
        199fb8:	e1a0c00d 	mov	ip, sp
        199fbc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        199fc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        199fc4:	e59f3090 	ldr	r3, [pc, #90]	; 19a05c <XInitSerialDebugging+0xa4>
        199fc8:	e92d0008 	stmdb	sp!, {r3}
        199fcc:	e59f508c 	ldr	r5, [pc, #8c]	; 19a060 <XInitSerialDebugging+0xa8>
        199fd0:	e3a03000 	mov	r3, #0	; 0x0
        199fd4:	e5950018 	ldr	r0, [r5, #24]
        199fd8:	e285204c 	add	r2, r5, #76	; 0x4c
        199fdc:	e8920006 	ldmia	r2, {r1, r2}
        199fe0:	eb07ac31 	bl	3850ac <TSerialDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))>
        199fe4:	e28dd004 	add	sp, sp, #4	; 0x4
        199fe8:	e3a04018 	mov	r4, #24	; 0x18
        199fec:	e2844b01 	add	r4, r4, #1024	; 0x400
        199ff0:	eb000292 	bl	19aa40 <PollDebugByte(void)>
        199ff4:	e3300000 	teq	r0, #0	; 0x0
        199ff8:	1a000002 	bne	19a008 <XInitSerialDebugging+0x50>
        199ffc:	eb00028f 	bl	19aa40 <PollDebugByte(void)>
        19a000:	e3300000 	teq	r0, #0	; 0x0
        19a004:	0afffffc 	beq	199ffc <XInitSerialDebugging+0x44>
        19a008:	e1a01004 	mov	r1, r4
        19a00c:	e5950028 	ldr	r0, [r5, #40]
        19a010:	eb0002e2 	bl	19aba0 <ReceiveDebugFrame(unsigned char *, long)>
        19a014:	e3300000 	teq	r0, #0	; 0x0
        19a018:	1afffff4 	bne	199ff0 <XInitSerialDebugging+0x38>
        19a01c:	ebfffcbf 	bl	199320 <ReadDebugByte(void)>
        19a020:	e330001d 	teq	r0, #29	; 0x1d
        19a024:	1afffff1 	bne	199ff0 <XInitSerialDebugging+0x38>
        19a028:	ebfffcbc 	bl	199320 <ReadDebugByte(void)>
        19a02c:	ebfffccc 	bl	199364 <ReadDebugLong(void)>
        19a030:	e5850010 	str	r0, [r5, #16]
        19a034:	ebffff8b 	bl	199e68 <SetgWantSerialDebugging(unsigned long)>
        19a038:	e3a01000 	mov	r1, #0	; 0x0
        19a03c:	e3a00000 	mov	r0, #0	; 0x0
        19a040:	e285304c 	add	r3, r5, #76	; 0x4c
        19a044:	e893000c 	ldmia	r3, {r2, r3}
        19a048:	eb686246 	bl	1bb2968 <$InitSerialDebugging>
        19a04c:	e3300000 	teq	r0, #0	; 0x0
        19a050:	03a01003 	moveq	r1, #3	; 0x3
        19a054:	05c51000 	streqb	r1, [r5]
        19a058:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        19a05c:	01a031e8 	moveq	r3, r8, ror #3
        19a060:	0c1017b4 	ldceq	7, cr1, [r0], -#720
    */
}

/**
 * Symbol: XRWDoLearning(unsigned long, XRWORDPARAM *)
 * Address: 0024e8a8
 */
XRWDoLearning(unsigned long, XRWORDPARAM *) {
    /*
        24e8a8:	e1a0c00d 	mov	ip, sp
        24e8ac:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24e8b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        24e8b4:	e1a04001 	mov	r4, r1
        24e8b8:	e24dd054 	sub	sp, sp, #84	; 0x54
        24e8bc:	e3e08000 	mvn	r8, #0	; 0x0
        24e8c0:	e3a01000 	mov	r1, #0	; 0x0
        24e8c4:	e3300000 	teq	r0, #0	; 0x0
        24e8c8:	e58d1050 	str	r1, [sp, #80]
        24e8cc:	13340000 	teqne	r4, #0	; 0x0
        24e8d0:	11a06000 	movne	r6, r0
        24e8d4:	15900000 	ldrne	r0, [r0]
        24e8d8:	13300000 	teqne	r0, #0	; 0x0
        24e8dc:	0a00004d 	beq	24ea18 <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x170>
        24e8e0:	eb6349f9 	bl	1b210cc <$LHLock(unsigned long)>
        24e8e4:	e1b07000 	movs	r7, r0
        24e8e8:	0a00004a 	beq	24ea18 <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x170>
        24e8ec:	e28d3048 	add	r3, sp, #72	; 0x48
        24e8f0:	e28d2050 	add	r2, sp, #80	; 0x50
        24e8f4:	e92d000c 	stmdb	sp!, {r2, r3}
        24e8f8:	e1a00007 	mov	r0, r7
        24e8fc:	e3a03000 	mov	r3, #0	; 0x0
        24e900:	e59f5118 	ldr	r5, [pc, #118]	; 24ea20 <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x178>
        24e904:	e1a02005 	mov	r2, r5
        24e908:	e59f1114 	ldr	r1, [pc, #114]	; 24ea24 <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x17c>
        24e90c:	eb6349ed 	bl	1b210c8 <$LHFindEntry__FPvUlN22PPvPUl>
        24e910:	e28dd008 	add	sp, sp, #8	; 0x8
        24e914:	e3300000 	teq	r0, #0	; 0x0
        24e918:	1a00003b 	bne	24ea0c <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x164>
        24e91c:	e59d0050 	ldr	r0, [sp, #80]
        24e920:	e3300000 	teq	r0, #0	; 0x0
        24e924:	0a000038 	beq	24ea0c <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x164>
        24e928:	e596000c 	ldr	r0, [r6, #12]
        24e92c:	e0801100 	add	r1, r0, r0, lsl #2
        24e930:	e3a00050 	mov	r0, #80	; 0x50
        24e934:	e0800201 	add	r0, r0, r1, lsl #4
        24e938:	e59d1048 	ldr	r1, [sp, #72]
        24e93c:	e1500001 	cmp	r0, r1
        24e940:	8a000031 	bhi	24ea0c <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x164>
        24e944:	e1a0100d 	mov	r1, sp
        24e948:	e1a00004 	mov	r0, r4
        24e94c:	eb638ff8 	bl	1b32934 <$GCLockDTEAndLearningData(void *, RcHandlesType *)>
        24e950:	e3300000 	teq	r0, #0	; 0x0
        24e954:	0a00002c 	beq	24ea0c <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x164>
        24e958:	e5940022 	ldr	r0, [r4, #34]
        24e95c:	e1b00840 	movs	r0, r0, asr #16
        24e960:	0a000009 	beq	24e98c <XRWDoLearning(unsigned long, XRWORDPARAM *)+0xe4>
        24e964:	e5940030 	ldr	r0, [r4, #48]
        24e968:	eb637f71 	bl	1b2e734 <$GetLearnInfoPtr(void *)>
        24e96c:	e3300000 	teq	r0, #0	; 0x0
        24e970:	0a000005 	beq	24e98c <XRWDoLearning(unsigned long, XRWORDPARAM *)+0xe4>
        24e974:	e596000c 	ldr	r0, [r6, #12]
        24e978:	e0800100 	add	r0, r0, r0, lsl #2
        24e97c:	e59d1050 	ldr	r1, [sp, #80]
        24e980:	e0811200 	add	r1, r1, r0, lsl #4
        24e984:	e1a00004 	mov	r0, r4
        24e988:	eb637b59 	bl	1b2d6f4 <$FlyLearn(rc_type *, rec_w_type const *)>
        24e98c:	e59400b8 	ldr	r0, [r4, #184]
        24e990:	e1a00820 	mov	r0, r0, lsr #16
        24e994:	e3100008 	tst	r0, #8	; 0x8
        24e998:	0a000017 	beq	24e9fc <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x154>
        24e99c:	e3a03000 	mov	r3, #0	; 0x0
        24e9a0:	e28d204c 	add	r2, sp, #76	; 0x4c
        24e9a4:	e92d000c 	stmdb	sp!, {r2, r3}
        24e9a8:	e1a00007 	mov	r0, r7
        24e9ac:	e1a02005 	mov	r2, r5
        24e9b0:	e59f1070 	ldr	r1, [pc, #70]	; 24ea28 <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x180>
        24e9b4:	eb6349c3 	bl	1b210c8 <$LHFindEntry__FPvUlN22PPvPUl>
        24e9b8:	e28dd008 	add	sp, sp, #8	; 0x8
        24e9bc:	e3300000 	teq	r0, #0	; 0x0
        24e9c0:	1a00000d 	bne	24e9fc <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x154>
        24e9c4:	e59d304c 	ldr	r3, [sp, #76]
        24e9c8:	e3330000 	teq	r3, #0	; 0x0
        24e9cc:	15961004 	ldrne	r1, [r6, #4]
        24e9d0:	13310000 	teqne	r1, #0	; 0x0
        24e9d4:	0a000009 	beq	24ea00 <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x158>
        24e9d8:	e5960008 	ldr	r0, [r6, #8]
        24e9dc:	e3500003 	cmp	r0, #3	; 0x3
        24e9e0:	3a000006 	bcc	24ea00 <XRWDoLearning(unsigned long, XRWORDPARAM *)+0x158>
        24e9e4:	e596000c 	ldr	r0, [r6, #12]
        24e9e8:	e0802100 	add	r2, r0, r0, lsl #2
        24e9ec:	e59d0050 	ldr	r0, [sp, #80]
        24e9f0:	e0802202 	add	r2, r0, r2, lsl #4
        24e9f4:	e59400bc 	ldr	r0, [r4, #188]
        24e9f8:	eb63837e 	bl	1b2f7f8 <$ORTraining(void *, PS_point_type *, rec_w_type *, PS_point_type *)>
        24e9fc:	e3a08000 	mov	r8, #0	; 0x0
        24ea00:	e1a0100d 	mov	r1, sp
        24ea04:	e1a00004 	mov	r0, r4
        24ea08:	eb638fcb 	bl	1b3293c <$GCUnlockDTEAndLearningData(void *, RcHandlesType *)>
        24ea0c:	e3370000 	teq	r7, #0	; 0x0
        24ea10:	15960000 	ldrne	r0, [r6]
        24ea14:	1b6349ad 	blne	1b210d0 <$LHUnLock(unsigned long)>
        24ea18:	e1a00008 	mov	r0, r8
        24ea1c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        24ea20:	30303031 	eorccs	r3, r0, r1, lsr r0
        24ea24:	52575244 	subpls	r5, r7, #1073741828	; 0x40000004
        24ea28:	4f52544c 	swimi	0x0052544c
    */
}

/**
 * Symbol: xbitpack__FP13TCompressVarsUiT2
 * Address: 0025cba8
 */
void globals::xbitpack() {
    /*
        25cba8:	e1a0c00d 	mov	ip, sp
        25cbac:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        25cbb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        25cbb4:	e1a04001 	mov	r4, r1
        25cbb8:	e3a08008 	mov	r8, #8	; 0x8
        25cbbc:	e2805a03 	add	r5, r0, #12288	; 0x3000
        25cbc0:	e3320000 	teq	r2, #0	; 0x0
        25cbc4:	1a000004 	bne	25cbdc <xbitpack__FP13TCompressVarsUiT2+0x34>
        25cbc8:	e59509b8 	ldr	r0, [r5, #2488]
        25cbcc:	e3300000 	teq	r0, #0	; 0x0
        25cbd0:	10480000 	subne	r0, r8, r0
        25cbd4:	1a000001 	bne	25cbe0 <xbitpack__FP13TCompressVarsUiT2+0x38>
        25cbd8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        25cbdc:	e1a00002 	mov	r0, r2
        25cbe0:	e3500008 	cmp	r0, #8	; 0x8
        25cbe4:	93a07000 	movls	r7, #0	; 0x0
        25cbe8:	82407008 	subhi	r7, r0, #8	; 0x8
        25cbec:	83a00008 	movhi	r0, #8	; 0x8
        25cbf0:	e20420ff 	and	r2, r4, #255	; 0xff
        25cbf4:	e59519b8 	ldr	r1, [r5, #2488]
        25cbf8:	e59539b4 	ldr	r3, [r5, #2484]
        25cbfc:	e1836112 	orr	r6, r3, r2, lsl r1
        25cc00:	e0810000 	add	r0, r1, r0
        25cc04:	e58509b8 	str	r0, [r5, #2488]
        25cc08:	e3500008 	cmp	r0, #8	; 0x8
        25cc0c:	3a000006 	bcc	25cc2c <xbitpack__FP13TCompressVarsUiT2+0x84>
        25cc10:	e2400008 	sub	r0, r0, #8	; 0x8
        25cc14:	e20610ff 	and	r1, r6, #255	; 0xff
        25cc18:	e58509b8 	str	r0, [r5, #2488]
        25cc1c:	e59509cc 	ldr	r0, [r5, #2508]
        25cc20:	e1a0e00f 	mov	lr, pc
        25cc24:	e595f9c4 	ldr	pc, [r5, #2500]
        25cc28:	e1a06426 	mov	r6, r6, lsr #8
        25cc2c:	e2041cff 	and	r1, r4, #65280	; 0xff00
        25cc30:	e59509b8 	ldr	r0, [r5, #2488]
        25cc34:	e0482000 	sub	r2, r8, r0
        25cc38:	e1864231 	orr	r4, r6, r1, lsr r2
        25cc3c:	e0800007 	add	r0, r0, r7
        25cc40:	e58509b8 	str	r0, [r5, #2488]
        25cc44:	e1a01000 	mov	r1, r0
        25cc48:	e3500008 	cmp	r0, #8	; 0x8
        25cc4c:	3a000006 	bcc	25cc6c <xbitpack__FP13TCompressVarsUiT2+0xc4>
        25cc50:	e2410008 	sub	r0, r1, #8	; 0x8
        25cc54:	e20410ff 	and	r1, r4, #255	; 0xff
        25cc58:	e58509b8 	str	r0, [r5, #2488]
        25cc5c:	e59509cc 	ldr	r0, [r5, #2508]
        25cc60:	e1a0e00f 	mov	lr, pc
        25cc64:	e595f9c4 	ldr	pc, [r5, #2500]
        25cc68:	e1a04424 	mov	r4, r4, lsr #8
        25cc6c:	e5a549b4 	str	r4, [r5, #2484]!
        25cc70:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: XIPInvalidateStore(TStore *)
 * Address: 00279b60
 */
XIPInvalidateStore(TStore *) {
    /*
        279b60:	e1a0c00d 	mov	ip, sp
        279b64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        279b68:	e24cb004 	sub	fp, ip, #4	; 0x4
        279b6c:	e1a04000 	mov	r4, r0
        279b70:	e24dd024 	sub	sp, sp, #36	; 0x24
        279b74:	e28d0008 	add	r0, sp, #8	; 0x8
        279b78:	eb6273eb 	bl	1b16b2c <RDMParams::$__ct(void)>
        279b7c:	eb6273ef 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        279b80:	e1a01000 	mov	r1, r0
        279b84:	e3a00000 	mov	r0, #0	; 0x0
        279b88:	e5cd0004 	strb	r0, [sp, #4]
        279b8c:	e5911000 	ldr	r1, [r1]
        279b90:	e58d000c 	str	r0, [sp, #12]
        279b94:	e58d1000 	str	r1, [sp]
        279b98:	e58d4008 	str	r4, [sp, #8]
        279b9c:	e28d2008 	add	r2, sp, #8	; 0x8
        279ba0:	e3a01012 	mov	r1, #18	; 0x12
        279ba4:	e59d0000 	ldr	r0, [sp]
        279ba8:	eb04d1dc 	bl	3ae320 <MonitorDispatchSWI>
        279bac:	e1a0000d 	mov	r0, sp
        279bb0:	e3a01000 	mov	r1, #0	; 0x0
        279bb4:	eb6552dd 	bl	1bce730 <TUMonitor::$__dt(void)>
        279bb8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: XIPChunkInObject__FPlP6TStoreUlT3
 * Address: 0027a0a0
 */
void globals::XIPChunkInObject() {
    /*
        27a0a0:	e1a0c00d 	mov	ip, sp
        27a0a4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        27a0a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        27a0ac:	e1a06000 	mov	r6, r0
        27a0b0:	e1a05001 	mov	r5, r1
        27a0b4:	e1a04002 	mov	r4, r2
        27a0b8:	e1a07003 	mov	r7, r3
        27a0bc:	e3a00000 	mov	r0, #0	; 0x0
        27a0c0:	e52d0008 	str	r0, [sp, -#8]!
        27a0c4:	e28d2004 	add	r2, sp, #4	; 0x4
        27a0c8:	e1a01004 	mov	r1, r4
        27a0cc:	e1a00005 	mov	r0, r5
        27a0d0:	eb62030a 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        27a0d4:	e3a09000 	mov	r9, #0	; 0x0
        27a0d8:	e3300000 	teq	r0, #0	; 0x0
        27a0dc:	1a00001a 	bne	27a14c <XIPChunkInObject__FPlP6TStoreUlT3+0xac>
        27a0e0:	e59d0004 	ldr	r0, [sp, #4]
        27a0e4:	e1a00120 	mov	r0, r0, lsr #2
        27a0e8:	e58d0004 	str	r0, [sp, #4]
        27a0ec:	e3a08000 	mov	r8, #0	; 0x0
        27a0f0:	e5869000 	str	r9, [r6]
        27a0f4:	e59d0004 	ldr	r0, [sp, #4]
        27a0f8:	e3500000 	cmp	r0, #0	; 0x0
        27a0fc:	da000012 	ble	27a14c <XIPChunkInObject__FPlP6TStoreUlT3+0xac>
        27a100:	e3a03004 	mov	r3, #4	; 0x4
        27a104:	e92d0008 	stmdb	sp!, {r3}
        27a108:	e1a02108 	mov	r2, r8, lsl #2
        27a10c:	e08d3003 	add	r3, sp, r3
        27a110:	e1a01004 	mov	r1, r4
        27a114:	e1a00005 	mov	r0, r5
        27a118:	eb622008 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27a11c:	e28dd004 	add	sp, sp, #4	; 0x4
        27a120:	e3300000 	teq	r0, #0	; 0x0
        27a124:	1a000008 	bne	27a14c <XIPChunkInObject__FPlP6TStoreUlT3+0xac>
        27a128:	e59d0000 	ldr	r0, [sp]
        27a12c:	e1300007 	teq	r0, r7
        27a130:	03a00001 	moveq	r0, #1	; 0x1
        27a134:	05868000 	streq	r8, [r6]
        27a138:	0a000004 	beq	27a150 <XIPChunkInObject__FPlP6TStoreUlT3+0xb0>
        27a13c:	e2888001 	add	r8, r8, #1	; 0x1
        27a140:	e59d0004 	ldr	r0, [sp, #4]
        27a144:	e1580000 	cmp	r8, r0
        27a148:	baffffec 	blt	27a100 <XIPChunkInObject__FPlP6TStoreUlT3+0x60>
        27a14c:	e1a00009 	mov	r0, r9
        27a150:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: XIPObjectHasMoved(TStore *, unsigned long)
 * Address: 0027a318
 */
XIPObjectHasMoved(TStore *, unsigned long) {
    /*
        27a318:	e1a0c00d 	mov	ip, sp
        27a31c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        27a320:	e24cb004 	sub	fp, ip, #4	; 0x4
        27a324:	e1a05000 	mov	r5, r0
        27a328:	e1a04001 	mov	r4, r1
        27a32c:	e24dd024 	sub	sp, sp, #36	; 0x24
        27a330:	e28d0008 	add	r0, sp, #8	; 0x8
        27a334:	eb6271fc 	bl	1b16b2c <RDMParams::$__ct(void)>
        27a338:	eb627200 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        27a33c:	e3a01000 	mov	r1, #0	; 0x0
        27a340:	e5cd1004 	strb	r1, [sp, #4]
        27a344:	e5900000 	ldr	r0, [r0]
        27a348:	e58d0000 	str	r0, [sp]
        27a34c:	e58d400c 	str	r4, [sp, #12]
        27a350:	e58d5008 	str	r5, [sp, #8]
        27a354:	e28d2008 	add	r2, sp, #8	; 0x8
        27a358:	e3a01011 	mov	r1, #17	; 0x11
        27a35c:	eb04cfef 	bl	3ae320 <MonitorDispatchSWI>
        27a360:	e1a0000d 	mov	r0, sp
        27a364:	e3a01000 	mov	r1, #0	; 0x0
        27a368:	eb6550f0 	bl	1bce730 <TUMonitor::$__dt(void)>
        27a36c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: xrlv(xrdata_type *, RWG_type *, rc_type *)
 * Address: 0027ab60
 */
xrlv(xrdata_type *, RWG_type *, rc_type *) {
    /*
        27ab60:	e1a0c00d 	mov	ip, sp
        27ab64:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27ab68:	e24cb004 	sub	fp, ip, #4	; 0x4
        27ab6c:	e1a06000 	mov	r6, r0
        27ab70:	e1a05001 	mov	r5, r1
        27ab74:	e1a04002 	mov	r4, r2
        27ab78:	e24dd004 	sub	sp, sp, #4	; 0x4
        27ab7c:	e592900a 	ldr	r9, [r2, #10]
        27ab80:	e1a09849 	mov	r9, r9, asr #16
        27ab84:	e592801e 	ldr	r8, [r2, #30]
        27ab88:	e1a08848 	mov	r8, r8, asr #16
        27ab8c:	e5927002 	ldr	r7, [r2, #2]
        27ab90:	e1a07847 	mov	r7, r7, asr #16
        27ab94:	e3a00000 	mov	r0, #0	; 0x0
        27ab98:	e58d0000 	str	r0, [sp]
        27ab9c:	e1a00005 	mov	r0, r5
        27aba0:	e3a02014 	mov	r2, #20	; 0x14
        27aba4:	e3a01000 	mov	r1, #0	; 0x0
        27aba8:	eb64e7aa 	bl	1bb4a58 <$memset>
        27abac:	e594000a 	ldr	r0, [r4, #10]
        27abb0:	e1a00820 	mov	r0, r0, lsr #16
        27abb4:	e3c00001 	bic	r0, r0, #1	; 0x1
        27abb8:	e5c4000b 	strb	r0, [r4, #11]
        27abbc:	e1a00440 	mov	r0, r0, asr #8
        27abc0:	e5c4000a 	strb	r0, [r4, #10]
        27abc4:	e1a02004 	mov	r2, r4
        27abc8:	e1a01006 	mov	r1, r6
        27abcc:	e1a0000d 	mov	r0, sp
        27abd0:	eb62e798 	bl	1b34a38 <$XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)>
        27abd4:	e3a0a001 	mov	sl, #1	; 0x1
        27abd8:	e3300000 	teq	r0, #0	; 0x0
        27abdc:	1a0000bc 	bne	27aed4 <xrlv(xrdata_type *, RWG_type *, rc_type *)+0x374>
        27abe0:	e59d0000 	ldr	r0, [sp]
        27abe4:	e5a04048 	str	r4, [r0, #72]!
        27abe8:	e5940014 	ldr	r0, [r4, #20]
        27abec:	e1b00840 	movs	r0, r0, asr #16
        27abf0:	42800003 	addmi	r0, r0, #3	; 0x3
        27abf4:	e1a00140 	mov	r0, r0, asr #2
        27abf8:	e59d1000 	ldr	r1, [sp]
        27abfc:	e5a10010 	str	r0, [r1, #16]!
        27ac00:	e5940008 	ldr	r0, [r4, #8]
        27ac04:	e1a00840 	mov	r0, r0, asr #16
        27ac08:	e59d1000 	ldr	r1, [sp]
        27ac0c:	e5a10014 	str	r0, [r1, #20]!
        27ac10:	e5941002 	ldr	r1, [r4, #2]
        27ac14:	e1a01841 	mov	r1, r1, asr #16
        27ac18:	e59d0000 	ldr	r0, [sp]
        27ac1c:	e5a01018 	str	r1, [r0, #24]!
        27ac20:	e594101e 	ldr	r1, [r4, #30]
        27ac24:	e1a01841 	mov	r1, r1, asr #16
        27ac28:	e59d0000 	ldr	r0, [sp]
        27ac2c:	e5a0101c 	str	r1, [r0, #28]!
        27ac30:	e5940070 	ldr	r0, [r4, #112]
        27ac34:	e5900090 	ldr	r0, [r0, #144]
        27ac38:	e3300000 	teq	r0, #0	; 0x0
        27ac3c:	1a000003 	bne	27ac50 <xrlv(xrdata_type *, RWG_type *, rc_type *)+0xf0>
        27ac40:	e59d0000 	ldr	r0, [sp]
        27ac44:	e5901014 	ldr	r1, [r0, #20]
        27ac48:	e3c11004 	bic	r1, r1, #4	; 0x4
        27ac4c:	e5a01014 	str	r1, [r0, #20]!
        27ac50:	e5940074 	ldr	r0, [r4, #116]
        27ac54:	e3300000 	teq	r0, #0	; 0x0
        27ac58:	1a000003 	bne	27ac6c <xrlv(xrdata_type *, RWG_type *, rc_type *)+0x10c>
        27ac5c:	e59d0000 	ldr	r0, [sp]
        27ac60:	e5901014 	ldr	r1, [r0, #20]
        27ac64:	e3c11008 	bic	r1, r1, #8	; 0x8
        27ac68:	e5a01014 	str	r1, [r0, #20]!
        27ac6c:	e59d0000 	ldr	r0, [sp]
        27ac70:	e5901014 	ldr	r1, [r0, #20]
        27ac74:	e3110004 	tst	r1, #4	; 0x4
        27ac78:	15941070 	ldrne	r1, [r4, #112]
        27ac7c:	15911090 	ldrne	r1, [r1, #144]
        27ac80:	15a012d8 	strne	r1, [r0, #728]!
        27ac84:	e59d0000 	ldr	r0, [sp]
        27ac88:	e5901014 	ldr	r1, [r0, #20]
        27ac8c:	e3110008 	tst	r1, #8	; 0x8
        27ac90:	15941074 	ldrne	r1, [r4, #116]
        27ac94:	15a012d4 	strne	r1, [r0, #724]!
        27ac98:	e59d0000 	ldr	r0, [sp]
        27ac9c:	e2802f8e 	add	r2, r0, #568	; 0x238
        27aca0:	e1a03004 	mov	r3, r4
        27aca4:	e3a01000 	mov	r1, #0	; 0x0
        27aca8:	e3a00000 	mov	r0, #0	; 0x0
        27acac:	eb628c79 	bl	1b1de98 <$AssignDictionaries__FiT1P13lex_data_typeP7rc_type>
        27acb0:	e3300000 	teq	r0, #0	; 0x0
        27acb4:	0a000003 	beq	27acc8 <xrlv(xrdata_type *, RWG_type *, rc_type *)+0x168>
        27acb8:	e59d0000 	ldr	r0, [sp]
        27acbc:	e5901014 	ldr	r1, [r0, #20]
        27acc0:	e3c11001 	bic	r1, r1, #1	; 0x1
        27acc4:	e5a01014 	str	r1, [r0, #20]!
        27acc8:	e59d0000 	ldr	r0, [sp]
        27accc:	eb62e763 	bl	1b34a60 <$XrlvGetCharset(xrlv_data_type *)>
        27acd0:	e59d0000 	ldr	r0, [sp]
        27acd4:	e5900044 	ldr	r0, [r0, #68]
        27acd8:	e5b01048 	ldr	r1, [r0, #72]!
        27acdc:	e3811010 	orr	r1, r1, #16	; 0x10
        27ace0:	e5801000 	str	r1, [r0]
        27ace4:	e59d0000 	ldr	r0, [sp]
        27ace8:	e5900044 	ldr	r0, [r0, #68]
        27acec:	e3c11002 	bic	r1, r1, #2	; 0x2
        27acf0:	e5a01048 	str	r1, [r0, #72]!
        27acf4:	e59d0000 	ldr	r0, [sp]
        27acf8:	e5901044 	ldr	r1, [r0, #68]
        27acfc:	e59111dc 	ldr	r1, [r1, #476]
        27ad00:	e5a01020 	str	r1, [r0, #32]!
        27ad04:	e59d0000 	ldr	r0, [sp]
        27ad08:	e5a0a240 	str	sl, [r0, #576]!
        27ad0c:	e59d0000 	ldr	r0, [sp]
        27ad10:	e5901048 	ldr	r1, [r0, #72]
        27ad14:	e5911078 	ldr	r1, [r1, #120]
        27ad18:	e5a012dc 	str	r1, [r0, #732]!
        27ad1c:	e59d0000 	ldr	r0, [sp]
        27ad20:	e5901048 	ldr	r1, [r0, #72]
        27ad24:	e5911084 	ldr	r1, [r1, #132]
        27ad28:	e5a012e0 	str	r1, [r0, #736]!
        27ad2c:	e59d0000 	ldr	r0, [sp]
        27ad30:	e5901048 	ldr	r1, [r0, #72]
        27ad34:	e5911088 	ldr	r1, [r1, #136]
        27ad38:	e5a012e4 	str	r1, [r0, #740]!
        27ad3c:	e59d0000 	ldr	r0, [sp]
        27ad40:	e5900058 	ldr	r0, [r0, #88]
        27ad44:	e3a020dc 	mov	r2, #220	; 0xdc
        27ad48:	e3a01000 	mov	r1, #0	; 0x0
        27ad4c:	eb64e741 	bl	1bb4a58 <$memset>
        27ad50:	e3a00064 	mov	r0, #100	; 0x64
        27ad54:	e59d1000 	ldr	r1, [sp]
        27ad58:	e5a10024 	str	r0, [r1, #36]!
        27ad5c:	e59d1000 	ldr	r1, [sp]
        27ad60:	e5911058 	ldr	r1, [r1, #88]
        27ad64:	e5810000 	str	r0, [r1]
        27ad68:	e59d1000 	ldr	r1, [sp]
        27ad6c:	e5911058 	ldr	r1, [r1, #88]
        27ad70:	e5c10023 	strb	r0, [r1, #35]
        27ad74:	e3a00000 	mov	r0, #0	; 0x0
        27ad78:	e5c10022 	strb	r0, [r1, #34]
        27ad7c:	e59d0000 	ldr	r0, [sp]
        27ad80:	e5900058 	ldr	r0, [r0, #88]
        27ad84:	e3a06000 	mov	r6, #0	; 0x0
        27ad88:	e5a0a010 	str	sl, [r0, #16]!
        27ad8c:	e59d0000 	ldr	r0, [sp]
        27ad90:	e5900000 	ldr	r0, [r0]
        27ad94:	e3500000 	cmp	r0, #0	; 0x0
        27ad98:	da00002e 	ble	27ae58 <xrlv(xrdata_type *, RWG_type *, rc_type *)+0x2f8>
        27ad9c:	e1a00006 	mov	r0, r6
        27ada0:	e59d1000 	ldr	r1, [sp]
        27ada4:	eb62e725 	bl	1b34a40 <$XrlvCHLXrlvPos(int, xrlv_data_type *)>
        27ada8:	e3360000 	teq	r6, #0	; 0x0
        27adac:	0a000014 	beq	27ae04 <xrlv(xrdata_type *, RWG_type *, rc_type *)+0x2a4>
        27adb0:	e59d0000 	ldr	r0, [sp]
        27adb4:	e1a01000 	mov	r1, r0
        27adb8:	e5902004 	ldr	r2, [r0, #4]
        27adbc:	e0822006 	add	r2, r2, r6
        27adc0:	e2423001 	sub	r3, r2, #1	; 0x1
        27adc4:	e5900000 	ldr	r0, [r0]
        27adc8:	e1530000 	cmp	r3, r0
        27adcc:	aa00000c 	bge	27ae04 <xrlv(xrdata_type *, RWG_type *, rc_type *)+0x2a4>
        27add0:	e0810106 	add	r0, r1, r6, lsl #2
        27add4:	e5900054 	ldr	r0, [r0, #84]
        27add8:	e0811102 	add	r1, r1, r2, lsl #2
        27addc:	e3a02000 	mov	r2, #0	; 0x0
        27ade0:	e5a10054 	str	r0, [r1, #84]!
        27ade4:	e59d1000 	ldr	r1, [sp]
        27ade8:	e0811106 	add	r1, r1, r6, lsl #2
        27adec:	e5a12054 	str	r2, [r1, #84]!
        27adf0:	e5802010 	str	r2, [r0, #16]
        27adf4:	e580200c 	str	r2, [r0, #12]
        27adf8:	e5802008 	str	r2, [r0, #8]
        27adfc:	e5802004 	str	r2, [r0, #4]
        27ae00:	e5802000 	str	r2, [r0]
        27ae04:	e59d1000 	ldr	r1, [sp]
        27ae08:	e5910000 	ldr	r0, [r1]
        27ae0c:	e2400001 	sub	r0, r0, #1	; 0x1
        27ae10:	e1500006 	cmp	r0, r6
        27ae14:	da00000a 	ble	27ae44 <xrlv(xrdata_type *, RWG_type *, rc_type *)+0x2e4>
        27ae18:	e1a00006 	mov	r0, r6
        27ae1c:	eb62e716 	bl	1b34a7c <$XrlvSortXrlvPos(int, xrlv_data_type *)>
        27ae20:	e1a00006 	mov	r0, r6
        27ae24:	e59d1000 	ldr	r1, [sp]
        27ae28:	eb62eb14 	bl	1b35a80 <$XrlvTrimXrlvPos(int, xrlv_data_type *)>
        27ae2c:	e1a00006 	mov	r0, r6
        27ae30:	e59d1000 	ldr	r1, [sp]
        27ae34:	eb62e70d 	bl	1b34a70 <$XrlvGuessFutureGws(int, xrlv_data_type *)>
        27ae38:	e1a00006 	mov	r0, r6
        27ae3c:	e59d1000 	ldr	r1, [sp]
        27ae40:	eb62e704 	bl	1b34a58 <$XrlvDevelopPos(int, xrlv_data_type *)>
        27ae44:	e2866001 	add	r6, r6, #1	; 0x1
        27ae48:	e59d0000 	ldr	r0, [sp]
        27ae4c:	e5900000 	ldr	r0, [r0]
        27ae50:	e1560000 	cmp	r6, r0
        27ae54:	baffffd0 	blt	27ad9c <xrlv(xrdata_type *, RWG_type *, rc_type *)+0x23c>
        27ae58:	e59d0000 	ldr	r0, [sp]
        27ae5c:	eb62e6fe 	bl	1b34a5c <$XrlvFreeSomePos(xrlv_data_type *)>
        27ae60:	e5940104 	ldr	r0, [r4, #260]
        27ae64:	e3300000 	teq	r0, #0	; 0x0
        27ae68:	0a000003 	beq	27ae7c <xrlv(xrdata_type *, RWG_type *, rc_type *)+0x31c>
        27ae6c:	e1a0e00f 	mov	lr, pc
        27ae70:	e1a0f000 	mov	pc, r0
        27ae74:	e3300000 	teq	r0, #0	; 0x0
        27ae78:	1a000015 	bne	27aed4 <xrlv(xrdata_type *, RWG_type *, rc_type *)+0x374>
        27ae7c:	e59d0000 	ldr	r0, [sp]
        27ae80:	eb62e6fc 	bl	1b34a78 <$XrlvSortAns(xrlv_data_type *)>
        27ae84:	e59d0000 	ldr	r0, [sp]
        27ae88:	eb62e6ee 	bl	1b34a48 <$XrlvCleanAns(xrlv_data_type *)>
        27ae8c:	e1a00005 	mov	r0, r5
        27ae90:	e59d1000 	ldr	r1, [sp]
        27ae94:	eb62e6ec 	bl	1b34a4c <$XrlvCreateRWG(RWG_type *, xrlv_data_type *)>
        27ae98:	e3300000 	teq	r0, #0	; 0x0
        27ae9c:	1a00000c 	bne	27aed4 <xrlv(xrdata_type *, RWG_type *, rc_type *)+0x374>
        27aea0:	e5c4900b 	strb	r9, [r4, #11]
        27aea4:	e1a00449 	mov	r0, r9, asr #8
        27aea8:	e5c4000a 	strb	r0, [r4, #10]
        27aeac:	e5c4801f 	strb	r8, [r4, #31]
        27aeb0:	e1a00448 	mov	r0, r8, asr #8
        27aeb4:	e5c4001e 	strb	r0, [r4, #30]
        27aeb8:	e5c47003 	strb	r7, [r4, #3]
        27aebc:	e1a00447 	mov	r0, r7, asr #8
        27aec0:	e5c40002 	strb	r0, [r4, #2]
        27aec4:	e1a0000d 	mov	r0, sp
        27aec8:	eb62e6e0 	bl	1b34a50 <$XrlvDealloc(xrlv_data_type **)>
        27aecc:	e3a00000 	mov	r0, #0	; 0x0
        27aed0:	ea00000b 	b	27af04 <xrlv(xrdata_type *, RWG_type *, rc_type *)+0x3a4>
        27aed4:	e5c4900b 	strb	r9, [r4, #11]
        27aed8:	e1a00449 	mov	r0, r9, asr #8
        27aedc:	e5c4000a 	strb	r0, [r4, #10]
        27aee0:	e5c4801f 	strb	r8, [r4, #31]
        27aee4:	e1a00448 	mov	r0, r8, asr #8
        27aee8:	e5c4001e 	strb	r0, [r4, #30]
        27aeec:	e5c47003 	strb	r7, [r4, #3]
        27aef0:	e1a00447 	mov	r0, r7, asr #8
        27aef4:	e5c40002 	strb	r0, [r4, #2]
        27aef8:	e1a0000d 	mov	r0, sp
        27aefc:	eb62e6d3 	bl	1b34a50 <$XrlvDealloc(xrlv_data_type **)>
        27af00:	e1a0000a 	mov	r0, sl
        27af04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvDevelopPos(int, xrlv_data_type *)
 * Address: 0027af08
 */
XrlvDevelopPos(int, xrlv_data_type *) {
    /*
        27af08:	e1a0c00d 	mov	ip, sp
        27af0c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27af10:	e24cb004 	sub	fp, ip, #4	; 0x4
        27af14:	e1a05000 	mov	r5, r0
        27af18:	e1a04001 	mov	r4, r1
        27af1c:	e24dd078 	sub	sp, sp, #120	; 0x78
        27af20:	e5917044 	ldr	r7, [r1, #68]
        27af24:	e591901c 	ldr	r9, [r1, #28]
        27af28:	e2810f8a 	add	r0, r1, #552	; 0x228
        27af2c:	e2800b01 	add	r0, r0, #1024	; 0x400
        27af30:	e0818005 	add	r8, r1, r5
        27af34:	e58d0000 	str	r0, [sp]
        27af38:	e5d86420 	ldrb	r6, [r8, #1056]
        27af3c:	e0810105 	add	r0, r1, r5, lsl #2
        27af40:	e587602c 	str	r6, [r7, #44]
        27af44:	e5b01058 	ldr	r1, [r0, #88]!
        27af48:	e1a03007 	mov	r3, r7
        27af4c:	e58d1068 	str	r1, [sp, #104]
        27af50:	e1a01006 	mov	r1, r6
        27af54:	e3a02003 	mov	r2, #3	; 0x3
        27af58:	e3a00064 	mov	r0, #100	; 0x64
        27af5c:	eb62d646 	bl	1b3087c <$SetInpLineByValue__FiN21P9xrcm_type>
        27af60:	e587602c 	str	r6, [r7, #44]
        27af64:	e3a06000 	mov	r6, #0	; 0x0
        27af68:	e3190002 	tst	r9, #2	; 0x2
        27af6c:	0a000001 	beq	27af78 <XrlvDevelopPos(int, xrlv_data_type *)+0x70>
        27af70:	e3350000 	teq	r5, #0	; 0x0
        27af74:	03a06001 	moveq	r6, #1	; 0x1
        27af78:	e3190008 	tst	r9, #8	; 0x8
        27af7c:	13a06001 	movne	r6, #1	; 0x1
        27af80:	e5971014 	ldr	r1, [r7, #20]
        27af84:	e5d80420 	ldrb	r0, [r8, #1056]
        27af88:	e7d10180 	ldrb	r0, [r1, r0, lsl #3]
        27af8c:	e3300001 	teq	r0, #1	; 0x1
        27af90:	13300002 	teqne	r0, #2	; 0x2
        27af94:	13a06000 	movne	r6, #0	; 0x0
        27af98:	e3a00005 	mov	r0, #5	; 0x5
        27af9c:	e587009c 	str	r0, [r7, #156]
        27afa0:	e594004c 	ldr	r0, [r4, #76]
        27afa4:	e5b01008 	ldr	r1, [r0, #8]!
        27afa8:	e5d80420 	ldrb	r0, [r8, #1056]
        27afac:	e0802080 	add	r2, r0, r0, lsl #1
        27afb0:	e0811182 	add	r1, r1, r2, lsl #3
        27afb4:	e5d11002 	ldrb	r1, [r1, #2]
        27afb8:	e3350000 	teq	r5, #0	; 0x0
        27afbc:	e58d1070 	str	r1, [sp, #112]
        27afc0:	0a000003 	beq	27afd4 <XrlvDevelopPos(int, xrlv_data_type *)+0xcc>
        27afc4:	e0800007 	add	r0, r0, r7
        27afc8:	e5d00244 	ldrb	r0, [r0, #580]
        27afcc:	e3300000 	teq	r0, #0	; 0x0
        27afd0:	0a000001 	beq	27afdc <XrlvDevelopPos(int, xrlv_data_type *)+0xd4>
        27afd4:	e3a00001 	mov	r0, #1	; 0x1
        27afd8:	ea000000 	b	27afe0 <XrlvDevelopPos(int, xrlv_data_type *)+0xd8>
        27afdc:	e3a00000 	mov	r0, #0	; 0x0
        27afe0:	e3300000 	teq	r0, #0	; 0x0
        27afe4:	0a000003 	beq	27aff8 <XrlvDevelopPos(int, xrlv_data_type *)+0xf0>
        27afe8:	e59d1070 	ldr	r1, [sp, #112]
        27afec:	e3510008 	cmp	r1, #8	; 0x8
        27aff0:	a3a01001 	movge	r1, #1	; 0x1
        27aff4:	aa000000 	bge	27affc <XrlvDevelopPos(int, xrlv_data_type *)+0xf4>
        27aff8:	e3a01000 	mov	r1, #0	; 0x0
        27affc:	e3a02000 	mov	r2, #0	; 0x0
        27b000:	e58d106c 	str	r1, [sp, #108]
        27b004:	e2841010 	add	r1, r4, #16	; 0x10
        27b008:	e2811a02 	add	r1, r1, #8192	; 0x2000
        27b00c:	e3a00000 	mov	r0, #0	; 0x0
        27b010:	e5c10003 	strb	r0, [r1, #3]
        27b014:	e2822001 	add	r2, r2, #1	; 0x1
        27b018:	e2811024 	add	r1, r1, #36	; 0x24
        27b01c:	e3520082 	cmp	r2, #130	; 0x82
        27b020:	bafffff9 	blt	27b00c <XrlvDevelopPos(int, xrlv_data_type *)+0x104>
        27b024:	e3a08000 	mov	r8, #0	; 0x0
        27b028:	e59d1068 	ldr	r1, [sp, #104]
        27b02c:	e5911010 	ldr	r1, [r1, #16]
        27b030:	e3510000 	cmp	r1, #0	; 0x0
        27b034:	da00014e 	ble	27b574 <XrlvDevelopPos(int, xrlv_data_type *)+0x66c>
        27b038:	e59d1070 	ldr	r1, [sp, #112]
        27b03c:	e0811081 	add	r1, r1, r1, lsl #1
        27b040:	e241101c 	sub	r1, r1, #28	; 0x1c
        27b044:	e20590ff 	and	r9, r5, #255	; 0xff
        27b048:	e58d1074 	str	r1, [sp, #116]
        27b04c:	e59d0000 	ldr	r0, [sp]
        27b050:	e7d00008 	ldrb	r0, [r0, r8]
        27b054:	e080c180 	add	ip, r0, r0, lsl #3
        27b058:	e08c0200 	add	r0, ip, r0, lsl #4
        27b05c:	e59d1068 	ldr	r1, [sp, #104]
        27b060:	e0810100 	add	r0, r1, r0, lsl #2
        27b064:	e2807014 	add	r7, r0, #20	; 0x14
        27b068:	e5d70014 	ldrb	r0, [r7, #20]
        27b06c:	e3500003 	cmp	r0, #3	; 0x3
        27b070:	ba000003 	blt	27b084 <XrlvDevelopPos(int, xrlv_data_type *)+0x17c>
        27b074:	e59d106c 	ldr	r1, [sp, #108]
        27b078:	e3310000 	teq	r1, #0	; 0x0
        27b07c:	13a0a001 	movne	sl, #1	; 0x1
        27b080:	1a000000 	bne	27b088 <XrlvDevelopPos(int, xrlv_data_type *)+0x180>
        27b084:	e3a0a000 	mov	sl, #0	; 0x0
        27b088:	e3350000 	teq	r5, #0	; 0x0
        27b08c:	0a000018 	beq	27b0f4 <XrlvDevelopPos(int, xrlv_data_type *)+0x1ec>
        27b090:	e3500004 	cmp	r0, #4	; 0x4
        27b094:	aa000012 	bge	27b0e4 <XrlvDevelopPos(int, xrlv_data_type *)+0x1dc>
        27b098:	e28d0004 	add	r0, sp, #4	; 0x4
        27b09c:	e1a0e007 	mov	lr, r7
        27b0a0:	e3a0c008 	mov	ip, #8	; 0x8
        27b0a4:	e8be000e 	ldmia	lr!, {r1, r2, r3}
        27b0a8:	e8a0000e 	stmia	r0!, {r1, r2, r3}
        27b0ac:	e25cc001 	subs	ip, ip, #1	; 0x1
        27b0b0:	1afffffb 	bne	27b0a4 <XrlvDevelopPos(int, xrlv_data_type *)+0x19c>
        27b0b4:	e89e0008 	ldmia	lr, {r3}
        27b0b8:	e8800008 	stmia	r0, {r3}
        27b0bc:	e5cd8006 	strb	r8, [sp, #6]
        27b0c0:	e5cd9005 	strb	r9, [sp, #5]
        27b0c4:	e1a03004 	mov	r3, r4
        27b0c8:	e92d0008 	stmdb	sp!, {r3}
        27b0cc:	e28d3008 	add	r3, sp, #8	; 0x8
        27b0d0:	e1a01006 	mov	r1, r6
        27b0d4:	e1a00005 	mov	r0, r5
        27b0d8:	e3a02000 	mov	r2, #0	; 0x0
        27b0dc:	eb62e65c 	bl	1b34a54 <$XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type>
        27b0e0:	e28dd004 	add	sp, sp, #4	; 0x4
        27b0e4:	e3350000 	teq	r5, #0	; 0x0
        27b0e8:	0a000001 	beq	27b0f4 <XrlvDevelopPos(int, xrlv_data_type *)+0x1ec>
        27b0ec:	e33a0000 	teq	sl, #0	; 0x0
        27b0f0:	0a000076 	beq	27b2d0 <XrlvDevelopPos(int, xrlv_data_type *)+0x3c8>
        27b0f4:	e28d0004 	add	r0, sp, #4	; 0x4
        27b0f8:	e1a0e007 	mov	lr, r7
        27b0fc:	e3a0c008 	mov	ip, #8	; 0x8
        27b100:	e8be000e 	ldmia	lr!, {r1, r2, r3}
        27b104:	e8a0000e 	stmia	r0!, {r1, r2, r3}
        27b108:	e25cc001 	subs	ip, ip, #1	; 0x1
        27b10c:	1afffffb 	bne	27b100 <XrlvDevelopPos(int, xrlv_data_type *)+0x1f8>
        27b110:	e89e0008 	ldmia	lr, {r3}
        27b114:	e8800008 	stmia	r0, {r3}
        27b118:	e1a01004 	mov	r1, r4
        27b11c:	e28d0004 	add	r0, sp, #4	; 0x4
        27b120:	eb62e647 	bl	1b34a44 <$XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)>
        27b124:	e1a02004 	mov	r2, r4
        27b128:	e28d1004 	add	r1, sp, #4	; 0x4
        27b12c:	e1a00005 	mov	r0, r5
        27b130:	eb62e641 	bl	1b34a3c <$XrlvApplyWordEndInfo(int, xrlv_var_data_type *, xrlv_data_type *)>
        27b134:	e5cd8006 	strb	r8, [sp, #6]
        27b138:	e5cd9005 	strb	r9, [sp, #5]
        27b13c:	e3a01000 	mov	r1, #0	; 0x0
        27b140:	e3a00001 	mov	r0, #1	; 0x1
        27b144:	e58d101c 	str	r1, [sp, #28]
        27b148:	e5cd0018 	strb	r0, [sp, #24]
        27b14c:	e5cd1016 	strb	r1, [sp, #22]
        27b150:	e5cd1017 	strb	r1, [sp, #23]
        27b154:	e5cd1007 	strb	r1, [sp, #7]
        27b158:	e5dd100f 	ldrb	r1, [sp, #15]
        27b15c:	e0811000 	add	r1, r1, r0
        27b160:	e5cd100f 	strb	r1, [sp, #15]
        27b164:	e3350000 	teq	r5, #0	; 0x0
        27b168:	0a00000c 	beq	27b1a0 <XrlvDevelopPos(int, xrlv_data_type *)+0x298>
        27b16c:	e59d1070 	ldr	r1, [sp, #112]
        27b170:	e3510009 	cmp	r1, #9	; 0x9
        27b174:	ba000009 	blt	27b1a0 <XrlvDevelopPos(int, xrlv_data_type *)+0x298>
        27b178:	e3a03020 	mov	r3, #32	; 0x20
        27b17c:	e5dd2015 	ldrb	r2, [sp, #21]
        27b180:	e28d1004 	add	r1, sp, #4	; 0x4
        27b184:	e0821001 	add	r1, r2, r1
        27b188:	e5c1301c 	strb	r3, [r1, #28]
        27b18c:	e5dd1015 	ldrb	r1, [sp, #21]
        27b190:	e3510016 	cmp	r1, #22	; 0x16
        27b194:	b5dd1015 	ldrltb	r1, [sp, #21]
        27b198:	b2811001 	addlt	r1, r1, #1	; 0x1
        27b19c:	b5cd1015 	strltb	r1, [sp, #21]
        27b1a0:	e59d1074 	ldr	r1, [sp, #116]
        27b1a4:	e5dd200f 	ldrb	r2, [sp, #15]
        27b1a8:	e0821001 	add	r1, r2, r1
        27b1ac:	e251a001 	subs	sl, r1, #1	; 0x1
        27b1b0:	4a000001 	bmi	27b1bc <XrlvDevelopPos(int, xrlv_data_type *)+0x2b4>
        27b1b4:	e3350000 	teq	r5, #0	; 0x0
        27b1b8:	1a000000 	bne	27b1c0 <XrlvDevelopPos(int, xrlv_data_type *)+0x2b8>
        27b1bc:	e3a0a000 	mov	sl, #0	; 0x0
        27b1c0:	e5941014 	ldr	r1, [r4, #20]
        27b1c4:	e3110001 	tst	r1, #1	; 0x1
        27b1c8:	0a000012 	beq	27b218 <XrlvDevelopPos(int, xrlv_data_type *)+0x310>
        27b1cc:	e5cd0014 	strb	r0, [sp, #20]
        27b1d0:	e1a03004 	mov	r3, r4
        27b1d4:	e92d0008 	stmdb	sp!, {r3}
        27b1d8:	e28d3008 	add	r3, sp, #8	; 0x8
        27b1dc:	e1a0200a 	mov	r2, sl
        27b1e0:	e1a01006 	mov	r1, r6
        27b1e4:	e1a00005 	mov	r0, r5
        27b1e8:	eb62e619 	bl	1b34a54 <$XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type>
        27b1ec:	e28dd004 	add	sp, sp, #4	; 0x4
        27b1f0:	e3a00041 	mov	r0, #65	; 0x41
        27b1f4:	e5cd0014 	strb	r0, [sp, #20]
        27b1f8:	e1a03004 	mov	r3, r4
        27b1fc:	e92d0008 	stmdb	sp!, {r3}
        27b200:	e28d3008 	add	r3, sp, #8	; 0x8
        27b204:	e1a0200a 	mov	r2, sl
        27b208:	e1a01006 	mov	r1, r6
        27b20c:	e1a00005 	mov	r0, r5
        27b210:	eb62e60f 	bl	1b34a54 <$XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type>
        27b214:	e28dd004 	add	sp, sp, #4	; 0x4
        27b218:	e5940014 	ldr	r0, [r4, #20]
        27b21c:	e3100008 	tst	r0, #8	; 0x8
        27b220:	0a000009 	beq	27b24c <XrlvDevelopPos(int, xrlv_data_type *)+0x344>
        27b224:	e3a00002 	mov	r0, #2	; 0x2
        27b228:	e5cd0014 	strb	r0, [sp, #20]
        27b22c:	e1a03004 	mov	r3, r4
        27b230:	e92d0008 	stmdb	sp!, {r3}
        27b234:	e28d3008 	add	r3, sp, #8	; 0x8
        27b238:	e1a0200a 	mov	r2, sl
        27b23c:	e1a01006 	mov	r1, r6
        27b240:	e1a00005 	mov	r0, r5
        27b244:	eb62e602 	bl	1b34a54 <$XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type>
        27b248:	e28dd004 	add	sp, sp, #4	; 0x4
        27b24c:	e5940014 	ldr	r0, [r4, #20]
        27b250:	e3100002 	tst	r0, #2	; 0x2
        27b254:	0a000010 	beq	27b29c <XrlvDevelopPos(int, xrlv_data_type *)+0x394>
        27b258:	e5d71010 	ldrb	r1, [r7, #16]
        27b25c:	e3110008 	tst	r1, #8	; 0x8
        27b260:	159d1070 	ldrne	r1, [sp, #112]
        27b264:	13310009 	teqne	r1, #9	; 0x9
        27b268:	1a00000b 	bne	27b29c <XrlvDevelopPos(int, xrlv_data_type *)+0x394>
        27b26c:	e3100004 	tst	r0, #4	; 0x4
        27b270:	03a00008 	moveq	r0, #8	; 0x8
        27b274:	13a0000c 	movne	r0, #12	; 0xc
        27b278:	e5cd0014 	strb	r0, [sp, #20]
        27b27c:	e1a03004 	mov	r3, r4
        27b280:	e92d0008 	stmdb	sp!, {r3}
        27b284:	e28d3008 	add	r3, sp, #8	; 0x8
        27b288:	e1a0200a 	mov	r2, sl
        27b28c:	e1a01006 	mov	r1, r6
        27b290:	e1a00005 	mov	r0, r5
        27b294:	eb62e5ee 	bl	1b34a54 <$XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type>
        27b298:	e28dd004 	add	sp, sp, #4	; 0x4
        27b29c:	e5940018 	ldr	r0, [r4, #24]
        27b2a0:	e3100008 	tst	r0, #8	; 0x8
        27b2a4:	0a000009 	beq	27b2d0 <XrlvDevelopPos(int, xrlv_data_type *)+0x3c8>
        27b2a8:	e3a00010 	mov	r0, #16	; 0x10
        27b2ac:	e5cd0014 	strb	r0, [sp, #20]
        27b2b0:	e1a03004 	mov	r3, r4
        27b2b4:	e92d0008 	stmdb	sp!, {r3}
        27b2b8:	e28d3008 	add	r3, sp, #8	; 0x8
        27b2bc:	e1a0200a 	mov	r2, sl
        27b2c0:	e1a01006 	mov	r1, r6
        27b2c4:	e1a00005 	mov	r0, r5
        27b2c8:	eb62e5e1 	bl	1b34a54 <$XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type>
        27b2cc:	e28dd004 	add	sp, sp, #4	; 0x4
        27b2d0:	e3350000 	teq	r5, #0	; 0x0
        27b2d4:	0a000057 	beq	27b438 <XrlvDevelopPos(int, xrlv_data_type *)+0x530>
        27b2d8:	e5d70014 	ldrb	r0, [r7, #20]
        27b2dc:	e3300001 	teq	r0, #1	; 0x1
        27b2e0:	05d70010 	ldreqb	r0, [r7, #16]
        27b2e4:	03300010 	teqeq	r0, #16	; 0x10
        27b2e8:	1a000031 	bne	27b3b4 <XrlvDevelopPos(int, xrlv_data_type *)+0x4ac>
        27b2ec:	e28d0004 	add	r0, sp, #4	; 0x4
        27b2f0:	e1a0e007 	mov	lr, r7
        27b2f4:	e3a0c008 	mov	ip, #8	; 0x8
        27b2f8:	e8be000e 	ldmia	lr!, {r1, r2, r3}
        27b2fc:	e8a0000e 	stmia	r0!, {r1, r2, r3}
        27b300:	e25cc001 	subs	ip, ip, #1	; 0x1
        27b304:	1afffffb 	bne	27b2f8 <XrlvDevelopPos(int, xrlv_data_type *)+0x3f0>
        27b308:	e89e0008 	ldmia	lr, {r3}
        27b30c:	e8800008 	stmia	r0, {r3}
        27b310:	e3a01000 	mov	r1, #0	; 0x0
        27b314:	e5cd1016 	strb	r1, [sp, #22]
        27b318:	e5cd1017 	strb	r1, [sp, #23]
        27b31c:	e5cd8006 	strb	r8, [sp, #6]
        27b320:	e5cd9005 	strb	r9, [sp, #5]
        27b324:	e5940014 	ldr	r0, [r4, #20]
        27b328:	e3100001 	tst	r0, #1	; 0x1
        27b32c:	0a000013 	beq	27b380 <XrlvDevelopPos(int, xrlv_data_type *)+0x478>
        27b330:	e3a00001 	mov	r0, #1	; 0x1
        27b334:	e5cd0014 	strb	r0, [sp, #20]
        27b338:	e1a03004 	mov	r3, r4
        27b33c:	e92d0008 	stmdb	sp!, {r3}
        27b340:	e28d3008 	add	r3, sp, #8	; 0x8
        27b344:	e1a01006 	mov	r1, r6
        27b348:	e1a00005 	mov	r0, r5
        27b34c:	e3a02000 	mov	r2, #0	; 0x0
        27b350:	eb62e5bf 	bl	1b34a54 <$XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type>
        27b354:	e28dd004 	add	sp, sp, #4	; 0x4
        27b358:	e3a00041 	mov	r0, #65	; 0x41
        27b35c:	e5cd0014 	strb	r0, [sp, #20]
        27b360:	e1a03004 	mov	r3, r4
        27b364:	e92d0008 	stmdb	sp!, {r3}
        27b368:	e28d3008 	add	r3, sp, #8	; 0x8
        27b36c:	e1a01006 	mov	r1, r6
        27b370:	e1a00005 	mov	r0, r5
        27b374:	e3a02000 	mov	r2, #0	; 0x0
        27b378:	eb62e5b5 	bl	1b34a54 <$XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type>
        27b37c:	e28dd004 	add	sp, sp, #4	; 0x4
        27b380:	e5940014 	ldr	r0, [r4, #20]
        27b384:	e3100008 	tst	r0, #8	; 0x8
        27b388:	0a000009 	beq	27b3b4 <XrlvDevelopPos(int, xrlv_data_type *)+0x4ac>
        27b38c:	e3a00002 	mov	r0, #2	; 0x2
        27b390:	e5cd0014 	strb	r0, [sp, #20]
        27b394:	e1a03004 	mov	r3, r4
        27b398:	e92d0008 	stmdb	sp!, {r3}
        27b39c:	e28d3008 	add	r3, sp, #8	; 0x8
        27b3a0:	e1a01006 	mov	r1, r6
        27b3a4:	e1a00005 	mov	r0, r5
        27b3a8:	e3a02000 	mov	r2, #0	; 0x0
        27b3ac:	eb62e5a8 	bl	1b34a54 <$XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type>
        27b3b0:	e28dd004 	add	sp, sp, #4	; 0x4
        27b3b4:	e3350000 	teq	r5, #0	; 0x0
        27b3b8:	0a00001e 	beq	27b438 <XrlvDevelopPos(int, xrlv_data_type *)+0x530>
        27b3bc:	e5d70014 	ldrb	r0, [r7, #20]
        27b3c0:	e3500003 	cmp	r0, #3	; 0x3
        27b3c4:	ba00001b 	blt	27b438 <XrlvDevelopPos(int, xrlv_data_type *)+0x530>
        27b3c8:	e5d70010 	ldrb	r0, [r7, #16]
        27b3cc:	e3300041 	teq	r0, #65	; 0x41
        27b3d0:	1a000018 	bne	27b438 <XrlvDevelopPos(int, xrlv_data_type *)+0x530>
        27b3d4:	e28de004 	add	lr, sp, #4	; 0x4
        27b3d8:	e1a00007 	mov	r0, r7
        27b3dc:	e3a0c008 	mov	ip, #8	; 0x8
        27b3e0:	e8b0000e 	ldmia	r0!, {r1, r2, r3}
        27b3e4:	e8ae000e 	stmia	lr!, {r1, r2, r3}
        27b3e8:	e25cc001 	subs	ip, ip, #1	; 0x1
        27b3ec:	1afffffb 	bne	27b3e0 <XrlvDevelopPos(int, xrlv_data_type *)+0x4d8>
        27b3f0:	e8900008 	ldmia	r0, {r3}
        27b3f4:	e88e0008 	stmia	lr, {r3}
        27b3f8:	e3a01000 	mov	r1, #0	; 0x0
        27b3fc:	e5cd1016 	strb	r1, [sp, #22]
        27b400:	e3a01001 	mov	r1, #1	; 0x1
        27b404:	e5cd1017 	strb	r1, [sp, #23]
        27b408:	e5cd8006 	strb	r8, [sp, #6]
        27b40c:	e5cd9005 	strb	r9, [sp, #5]
        27b410:	e5cd1018 	strb	r1, [sp, #24]
        27b414:	e5cd1014 	strb	r1, [sp, #20]
        27b418:	e1a03004 	mov	r3, r4
        27b41c:	e92d0008 	stmdb	sp!, {r3}
        27b420:	e28d3008 	add	r3, sp, #8	; 0x8
        27b424:	e1a01006 	mov	r1, r6
        27b428:	e1a00005 	mov	r0, r5
        27b42c:	e3a02000 	mov	r2, #0	; 0x0
        27b430:	eb62e587 	bl	1b34a54 <$XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type>
        27b434:	e28dd004 	add	sp, sp, #4	; 0x4
        27b438:	e5940018 	ldr	r0, [r4, #24]
        27b43c:	e3100010 	tst	r0, #16	; 0x10
        27b440:	0a000025 	beq	27b4dc <XrlvDevelopPos(int, xrlv_data_type *)+0x5d4>
        27b444:	e3350000 	teq	r5, #0	; 0x0
        27b448:	0a000007 	beq	27b46c <XrlvDevelopPos(int, xrlv_data_type *)+0x564>
        27b44c:	e5d70014 	ldrb	r0, [r7, #20]
        27b450:	e3500003 	cmp	r0, #3	; 0x3
        27b454:	ba000020 	blt	27b4dc <XrlvDevelopPos(int, xrlv_data_type *)+0x5d4>
        27b458:	e5d70010 	ldrb	r0, [r7, #16]
        27b45c:	e3300001 	teq	r0, #1	; 0x1
        27b460:	13300081 	teqne	r0, #129	; 0x81
        27b464:	13300002 	teqne	r0, #2	; 0x2
        27b468:	1a00001b 	bne	27b4dc <XrlvDevelopPos(int, xrlv_data_type *)+0x5d4>
        27b46c:	e28de004 	add	lr, sp, #4	; 0x4
        27b470:	e1a00007 	mov	r0, r7
        27b474:	e3a0c008 	mov	ip, #8	; 0x8
        27b478:	e8b0000e 	ldmia	r0!, {r1, r2, r3}
        27b47c:	e8ae000e 	stmia	lr!, {r1, r2, r3}
        27b480:	e25cc001 	subs	ip, ip, #1	; 0x1
        27b484:	1afffffb 	bne	27b478 <XrlvDevelopPos(int, xrlv_data_type *)+0x570>
        27b488:	e8900008 	ldmia	r0, {r3}
        27b48c:	e88e0008 	stmia	lr, {r3}
        27b490:	e5cd8006 	strb	r8, [sp, #6]
        27b494:	e5cd9005 	strb	r9, [sp, #5]
        27b498:	e1a01004 	mov	r1, r4
        27b49c:	e28d0004 	add	r0, sp, #4	; 0x4
        27b4a0:	eb62e567 	bl	1b34a44 <$XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)>
        27b4a4:	e1a02004 	mov	r2, r4
        27b4a8:	e28d1004 	add	r1, sp, #4	; 0x4
        27b4ac:	e1a00005 	mov	r0, r5
        27b4b0:	eb62e561 	bl	1b34a3c <$XrlvApplyWordEndInfo(int, xrlv_var_data_type *, xrlv_data_type *)>
        27b4b4:	e3a03020 	mov	r3, #32	; 0x20
        27b4b8:	e5cd3014 	strb	r3, [sp, #20]
        27b4bc:	e1a03004 	mov	r3, r4
        27b4c0:	e92d0008 	stmdb	sp!, {r3}
        27b4c4:	e28d3008 	add	r3, sp, #8	; 0x8
        27b4c8:	e1a01006 	mov	r1, r6
        27b4cc:	e1a00005 	mov	r0, r5
        27b4d0:	e3a02000 	mov	r2, #0	; 0x0
        27b4d4:	eb62e55e 	bl	1b34a54 <$XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type>
        27b4d8:	e28dd004 	add	sp, sp, #4	; 0x4
        27b4dc:	e5d70014 	ldrb	r0, [r7, #20]
        27b4e0:	e3500003 	cmp	r0, #3	; 0x3
        27b4e4:	ba00001d 	blt	27b560 <XrlvDevelopPos(int, xrlv_data_type *)+0x658>
        27b4e8:	e5d70010 	ldrb	r0, [r7, #16]
        27b4ec:	e3300001 	teq	r0, #1	; 0x1
        27b4f0:	1a00001a 	bne	27b560 <XrlvDevelopPos(int, xrlv_data_type *)+0x658>
        27b4f4:	e28d0004 	add	r0, sp, #4	; 0x4
        27b4f8:	e3a0c006 	mov	ip, #6	; 0x6
        27b4fc:	e8b7400e 	ldmia	r7!, {r1, r2, r3, lr}
        27b500:	e8a0400e 	stmia	r0!, {r1, r2, r3, lr}
        27b504:	e25cc001 	subs	ip, ip, #1	; 0x1
        27b508:	1afffffb 	bne	27b4fc <XrlvDevelopPos(int, xrlv_data_type *)+0x5f4>
        27b50c:	e8974000 	ldmia	r7, {lr}
        27b510:	e8804000 	stmia	r0, {lr}
        27b514:	e5cd8006 	strb	r8, [sp, #6]
        27b518:	e5cd9005 	strb	r9, [sp, #5]
        27b51c:	e3a01000 	mov	r1, #0	; 0x0
        27b520:	e5cd1016 	strb	r1, [sp, #22]
        27b524:	e1a01004 	mov	r1, r4
        27b528:	e28d0004 	add	r0, sp, #4	; 0x4
        27b52c:	eb62e544 	bl	1b34a44 <$XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)>
        27b530:	e3a00001 	mov	r0, #1	; 0x1
        27b534:	e5cd0018 	strb	r0, [sp, #24]
        27b538:	e3a00081 	mov	r0, #129	; 0x81
        27b53c:	e5cd0014 	strb	r0, [sp, #20]
        27b540:	e1a03004 	mov	r3, r4
        27b544:	e92d0008 	stmdb	sp!, {r3}
        27b548:	e28d3008 	add	r3, sp, #8	; 0x8
        27b54c:	e1a01006 	mov	r1, r6
        27b550:	e1a00005 	mov	r0, r5
        27b554:	e3a02000 	mov	r2, #0	; 0x0
        27b558:	eb62e53d 	bl	1b34a54 <$XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type>
        27b55c:	e28dd004 	add	sp, sp, #4	; 0x4
        27b560:	e2888001 	add	r8, r8, #1	; 0x1
        27b564:	e59d1068 	ldr	r1, [sp, #104]
        27b568:	e5b10010 	ldr	r0, [r1, #16]!
        27b56c:	e1500008 	cmp	r0, r8
        27b570:	cafffeb5 	bgt	27b04c <XrlvDevelopPos(int, xrlv_data_type *)+0x144>
        27b574:	e3a00000 	mov	r0, #0	; 0x0
        27b578:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvCleanAns(xrlv_data_type *)
 * Address: 0027b57c
 */
XrlvCleanAns(xrlv_data_type *) {
    /*
        27b57c:	e1a0c00d 	mov	ip, sp
        27b580:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27b584:	e24cb004 	sub	fp, ip, #4	; 0x4
        27b588:	e5901000 	ldr	r1, [r0]
        27b58c:	e0801101 	add	r1, r0, r1, lsl #2
        27b590:	e3a04001 	mov	r4, #1	; 0x1
        27b594:	e280509c 	add	r5, r0, #156	; 0x9c
        27b598:	e2855b01 	add	r5, r5, #1024	; 0x400
        27b59c:	e3a09000 	mov	r9, #0	; 0x0
        27b5a0:	e280a098 	add	sl, r0, #152	; 0x98
        27b5a4:	e28aab01 	add	sl, sl, #1024	; 0x400
        27b5a8:	e5b17054 	ldr	r7, [r1, #84]!
        27b5ac:	ea00001a 	b	27b61c <XrlvCleanAns(xrlv_data_type *)+0xa0>
        27b5b0:	e3a06000 	mov	r6, #0	; 0x0
        27b5b4:	e1a0800a 	mov	r8, sl
        27b5b8:	e3540000 	cmp	r4, #0	; 0x0
        27b5bc:	da000014 	ble	27b614 <XrlvCleanAns(xrlv_data_type *)+0x98>
        27b5c0:	e5d50002 	ldrb	r0, [r5, #2]
        27b5c4:	e080c180 	add	ip, r0, r0, lsl #3
        27b5c8:	e08c0200 	add	r0, ip, r0, lsl #4
        27b5cc:	e0870100 	add	r0, r7, r0, lsl #2
        27b5d0:	e2801030 	add	r1, r0, #48	; 0x30
        27b5d4:	e5d80002 	ldrb	r0, [r8, #2]
        27b5d8:	e080c180 	add	ip, r0, r0, lsl #3
        27b5dc:	e08c0200 	add	r0, ip, r0, lsl #4
        27b5e0:	e0870100 	add	r0, r7, r0, lsl #2
        27b5e4:	e2800030 	add	r0, r0, #48	; 0x30
        27b5e8:	eb5fd8a4 	bl	1a71880 <$HWRStrCmp__FPcT1>
        27b5ec:	e3300000 	teq	r0, #0	; 0x0
        27b5f0:	05c50001 	streqb	r0, [r5, #1]
        27b5f4:	05c50000 	streqb	r0, [r5]
        27b5f8:	0a000005 	beq	27b614 <XrlvCleanAns(xrlv_data_type *)+0x98>
        27b5fc:	e1360004 	teq	r6, r4
        27b600:	02899001 	addeq	r9, r9, #1	; 0x1
        27b604:	e2866001 	add	r6, r6, #1	; 0x1
        27b608:	e2888004 	add	r8, r8, #4	; 0x4
        27b60c:	e1560004 	cmp	r6, r4
        27b610:	baffffea 	blt	27b5c0 <XrlvCleanAns(xrlv_data_type *)+0x44>
        27b614:	e2844001 	add	r4, r4, #1	; 0x1
        27b618:	e2855004 	add	r5, r5, #4	; 0x4
        27b61c:	e5970010 	ldr	r0, [r7, #16]
        27b620:	e1500004 	cmp	r0, r4
        27b624:	da000001 	ble	27b630 <XrlvCleanAns(xrlv_data_type *)+0xb4>
        27b628:	e3590005 	cmp	r9, #5	; 0x5
        27b62c:	baffffdf 	blt	27b5b0 <XrlvCleanAns(xrlv_data_type *)+0x34>
        27b630:	e3a00000 	mov	r0, #0	; 0x0
        27b634:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvCreateRWG(RWG_type *, xrlv_data_type *)
 * Address: 0027b638
 */
XrlvCreateRWG(RWG_type *, xrlv_data_type *) {
    /*
        27b638:	e1a0c00d 	mov	ip, sp
        27b63c:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27b640:	e24cb004 	sub	fp, ip, #4	; 0x4
        27b644:	e1a04001 	mov	r4, r1
        27b648:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        27b64c:	e2817098 	add	r7, r1, #152	; 0x98
        27b650:	e2877b01 	add	r7, r7, #1024	; 0x400
        27b654:	e58d7028 	str	r7, [sp, #40]
        27b658:	e5910000 	ldr	r0, [r1]
        27b65c:	e0810100 	add	r0, r1, r0, lsl #2
        27b660:	e5b01054 	ldr	r1, [r0, #84]!
        27b664:	e58d1008 	str	r1, [sp, #8]
        27b668:	e5970000 	ldr	r0, [r7]
        27b66c:	e1a00840 	mov	r0, r0, asr #16
        27b670:	e5941048 	ldr	r1, [r4, #72]
        27b674:	e5912016 	ldr	r2, [r1, #22]
        27b678:	e1a02842 	mov	r2, r2, asr #16
        27b67c:	e082a102 	add	sl, r2, r2, lsl #2
        27b680:	e1a0a08a 	mov	sl, sl, lsl #1
        27b684:	e591101a 	ldr	r1, [r1, #26]
        27b688:	e1a01841 	mov	r1, r1, asr #16
        27b68c:	e0811101 	add	r1, r1, r1, lsl #2
        27b690:	e3a02000 	mov	r2, #0	; 0x0
        27b694:	e3a06000 	mov	r6, #0	; 0x0
        27b698:	e1a08006 	mov	r8, r6
        27b69c:	e0401081 	sub	r1, r0, r1, lsl #1
        27b6a0:	e58d1024 	str	r1, [sp, #36]
        27b6a4:	e2841fba 	add	r1, r4, #744	; 0x2e8
        27b6a8:	e2849f8e 	add	r9, r4, #568	; 0x238
        27b6ac:	e58d1020 	str	r1, [sp, #32]
        27b6b0:	e58d2018 	str	r2, [sp, #24]
        27b6b4:	ea00004d 	b	27b7f0 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x1b8>
        27b6b8:	e5970000 	ldr	r0, [r7]
        27b6bc:	e1b00840 	movs	r0, r0, asr #16
        27b6c0:	0a000048 	beq	27b7e8 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x1b0>
        27b6c4:	e150000a 	cmp	r0, sl
        27b6c8:	ba00004e 	blt	27b808 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x1d0>
        27b6cc:	e59d1024 	ldr	r1, [sp, #36]
        27b6d0:	e1510000 	cmp	r1, r0
        27b6d4:	ca00004b 	bgt	27b808 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x1d0>
        27b6d8:	e5d70002 	ldrb	r0, [r7, #2]
        27b6dc:	e080c180 	add	ip, r0, r0, lsl #3
        27b6e0:	e08c0200 	add	r0, ip, r0, lsl #4
        27b6e4:	e59d1008 	ldr	r1, [sp, #8]
        27b6e8:	e0810100 	add	r0, r1, r0, lsl #2
        27b6ec:	e2805014 	add	r5, r0, #20	; 0x14
        27b6f0:	e5d51011 	ldrb	r1, [r5, #17]
        27b6f4:	e5d50012 	ldrb	r0, [r5, #18]
        27b6f8:	e1310000 	teq	r1, r0
        27b6fc:	1a000026 	bne	27b79c <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x164>
        27b700:	e5d50010 	ldrb	r0, [r5, #16]
        27b704:	e3100001 	tst	r0, #1	; 0x1
        27b708:	0a000004 	beq	27b720 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0xe8>
        27b70c:	e1a00009 	mov	r0, r9
        27b710:	e3a01001 	mov	r1, #1	; 0x1
        27b714:	eb62dc8b 	bl	1b32948 <$SetupVocHandle(lex_data_type *, int)>
        27b718:	e3300000 	teq	r0, #0	; 0x0
        27b71c:	0a000002 	beq	27b72c <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0xf4>
        27b720:	e5d50010 	ldrb	r0, [r5, #16]
        27b724:	e3100002 	tst	r0, #2	; 0x2
        27b728:	0a00001b 	beq	27b79c <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x164>
        27b72c:	e5d50010 	ldrb	r0, [r5, #16]
        27b730:	e5c4024e 	strb	r0, [r4, #590]
        27b734:	e5d51011 	ldrb	r1, [r5, #17]
        27b738:	e5d50012 	ldrb	r0, [r5, #18]
        27b73c:	e0410000 	sub	r0, r1, r0
        27b740:	e0800005 	add	r0, r0, r5
        27b744:	e280101c 	add	r1, r0, #28	; 0x1c
        27b748:	e59d0020 	ldr	r0, [sp, #32]
        27b74c:	eb5fd01d 	bl	1a6f7c8 <$HWRStrCpy__FPcT1>
        27b750:	e1a00009 	mov	r0, r9
        27b754:	e28d2010 	add	r2, sp, #16	; 0x10
        27b758:	e28d1014 	add	r1, sp, #20	; 0x14
        27b75c:	eb629232 	bl	1b2002c <$GetWordAttributeAndID__FP13lex_data_typePiT2>
        27b760:	e3300000 	teq	r0, #0	; 0x0
        27b764:	0a000009 	beq	27b790 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x158>
        27b768:	e5d402e8 	ldrb	r0, [r4, #744]
        27b76c:	eb62d84f 	bl	1b318b0 <$ToLower>
        27b770:	e5c402e8 	strb	r0, [r4, #744]
        27b774:	e1a00009 	mov	r0, r9
        27b778:	e28d2010 	add	r2, sp, #16	; 0x10
        27b77c:	e28d1014 	add	r1, sp, #20	; 0x14
        27b780:	eb629229 	bl	1b2002c <$GetWordAttributeAndID__FP13lex_data_typePiT2>
        27b784:	e3300000 	teq	r0, #0	; 0x0
        27b788:	13e00002 	mvnne	r0, #2	; 0x2
        27b78c:	158d0014 	strne	r0, [sp, #20]
        27b790:	e59d1014 	ldr	r1, [sp, #20]
        27b794:	e7cd1006 	strb	r1, [sp, r6]
        27b798:	ea000001 	b	27b7a4 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x16c>
        27b79c:	e3e00002 	mvn	r0, #2	; 0x2
        27b7a0:	e58d0014 	str	r0, [sp, #20]
        27b7a4:	e59d1014 	ldr	r1, [sp, #20]
        27b7a8:	e7cd1006 	strb	r1, [sp, r6]
        27b7ac:	e5d50011 	ldrb	r0, [r5, #17]
        27b7b0:	e3500017 	cmp	r0, #23	; 0x17
        27b7b4:	c3a00017 	movgt	r0, #23	; 0x17
        27b7b8:	c5c50011 	strgtb	r0, [r5, #17]
        27b7bc:	e5d50011 	ldrb	r0, [r5, #17]
        27b7c0:	e0801005 	add	r1, r0, r5
        27b7c4:	e5d1101b 	ldrb	r1, [r1, #27]
        27b7c8:	e3310020 	teq	r1, #32	; 0x20
        27b7cc:	02400001 	subeq	r0, r0, #1	; 0x1
        27b7d0:	05c50011 	streqb	r0, [r5, #17]
        27b7d4:	e5d50011 	ldrb	r0, [r5, #17]
        27b7d8:	e59d1018 	ldr	r1, [sp, #24]
        27b7dc:	e0800001 	add	r0, r0, r1
        27b7e0:	e2866001 	add	r6, r6, #1	; 0x1
        27b7e4:	e58d0018 	str	r0, [sp, #24]
        27b7e8:	e2877004 	add	r7, r7, #4	; 0x4
        27b7ec:	e2888001 	add	r8, r8, #1	; 0x1
        27b7f0:	e59d1008 	ldr	r1, [sp, #8]
        27b7f4:	e5b10010 	ldr	r0, [r1, #16]!
        27b7f8:	e1500008 	cmp	r0, r8
        27b7fc:	da000001 	ble	27b808 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x1d0>
        27b800:	e3560005 	cmp	r6, #5	; 0x5
        27b804:	baffffab 	blt	27b6b8 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x80>
        27b808:	e24dd008 	sub	sp, sp, #8	; 0x8
        27b80c:	e3560001 	cmp	r6, #1	; 0x1
        27b810:	da000003 	ble	27b824 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x1ec>
        27b814:	e59d0020 	ldr	r0, [sp, #32]
        27b818:	e0800006 	add	r0, r0, r6
        27b81c:	e2800001 	add	r0, r0, #1	; 0x1
        27b820:	e58d0020 	str	r0, [sp, #32]
        27b824:	e3a09001 	mov	r9, #1	; 0x1
        27b828:	e3a08000 	mov	r8, #0	; 0x0
        27b82c:	e3360000 	teq	r6, #0	; 0x0
        27b830:	0a000017 	beq	27b894 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x25c>
        27b834:	e51b0030 	ldr	r0, [fp, -#48]
        27b838:	e5c09000 	strb	r9, [r0]
        27b83c:	e59d1020 	ldr	r1, [sp, #32]
        27b840:	e51b0030 	ldr	r0, [fp, -#48]
        27b844:	e5a01004 	str	r1, [r0, #4]!
        27b848:	e59d0020 	ldr	r0, [sp, #32]
        27b84c:	e2805001 	add	r5, r0, #1	; 0x1
        27b850:	e1a00205 	mov	r0, r5, lsl #4
        27b854:	e1a07000 	mov	r7, r0
        27b858:	eb5fcfd7 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        27b85c:	e51b1030 	ldr	r1, [fp, -#48]
        27b860:	e5a10008 	str	r0, [r1, #8]!
        27b864:	e3300000 	teq	r0, #0	; 0x0
        27b868:	028dd008 	addeq	sp, sp, #8	; 0x8
        27b86c:	0a000010 	beq	27b8b4 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x27c>
        27b870:	e0850105 	add	r0, r5, r5, lsl #2
        27b874:	e0800185 	add	r0, r0, r5, lsl #3
        27b878:	e1a00100 	mov	r0, r0, lsl #2
        27b87c:	e1a05000 	mov	r5, r0
        27b880:	eb5fcfcd 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        27b884:	e51b1030 	ldr	r1, [fp, -#48]
        27b888:	e5a1000c 	str	r0, [r1, #12]!
        27b88c:	e3300000 	teq	r0, #0	; 0x0
        27b890:	1a000010 	bne	27b8d8 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x2a0>
        27b894:	e28dd008 	add	sp, sp, #8	; 0x8
        27b898:	e51b0030 	ldr	r0, [fp, -#48]
        27b89c:	e5900008 	ldr	r0, [r0, #8]
        27b8a0:	e3300000 	teq	r0, #0	; 0x0
        27b8a4:	0a000002 	beq	27b8b4 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x27c>
        27b8a8:	eb5fcfc4 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        27b8ac:	e51b0030 	ldr	r0, [fp, -#48]
        27b8b0:	e5a08008 	str	r8, [r0, #8]!
        27b8b4:	e51b0030 	ldr	r0, [fp, -#48]
        27b8b8:	e590000c 	ldr	r0, [r0, #12]
        27b8bc:	e3300000 	teq	r0, #0	; 0x0
        27b8c0:	0a000002 	beq	27b8d0 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x298>
        27b8c4:	eb5fcfbd 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        27b8c8:	e51b0030 	ldr	r0, [fp, -#48]
        27b8cc:	e5a0800c 	str	r8, [r0, #12]!
        27b8d0:	e1a00009 	mov	r0, r9
        27b8d4:	ea00007c 	b	27bacc <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x494>
        27b8d8:	e51b0030 	ldr	r0, [fp, -#48]
        27b8dc:	e1a02007 	mov	r2, r7
        27b8e0:	e5b0a008 	ldr	sl, [r0, #8]!
        27b8e4:	e1a0000a 	mov	r0, sl
        27b8e8:	e3a01000 	mov	r1, #0	; 0x0
        27b8ec:	eb64e459 	bl	1bb4a58 <$memset>
        27b8f0:	e51b0030 	ldr	r0, [fp, -#48]
        27b8f4:	e590000c 	ldr	r0, [r0, #12]
        27b8f8:	e1a02005 	mov	r2, r5
        27b8fc:	e3a01000 	mov	r1, #0	; 0x0
        27b900:	eb64e454 	bl	1bb4a58 <$memset>
        27b904:	e3a07000 	mov	r7, #0	; 0x0
        27b908:	e1a0500a 	mov	r5, sl
        27b90c:	e3560001 	cmp	r6, #1	; 0x1
        27b910:	da000007 	ble	27b934 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x2fc>
        27b914:	e3a00002 	mov	r0, #2	; 0x2
        27b918:	e5c50002 	strb	r0, [r5, #2]
        27b91c:	e3a00003 	mov	r0, #3	; 0x3
        27b920:	e59d1020 	ldr	r1, [sp, #32]
        27b924:	e08a1201 	add	r1, sl, r1, lsl #4
        27b928:	e541000e 	strb	r0, [r1, -#14]
        27b92c:	e3a07001 	mov	r7, #1	; 0x1
        27b930:	e2855010 	add	r5, r5, #16	; 0x10
        27b934:	e3a02000 	mov	r2, #0	; 0x0
        27b938:	e58d2004 	str	r2, [sp, #4]
        27b93c:	e59d0030 	ldr	r0, [sp, #48]
        27b940:	e58d0014 	str	r0, [sp, #20]
        27b944:	e2460001 	sub	r0, r6, #1	; 0x1
        27b948:	e58d0024 	str	r0, [sp, #36]
        27b94c:	ea000057 	b	27bab0 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x478>
        27b950:	e59d0014 	ldr	r0, [sp, #20]
        27b954:	e5900000 	ldr	r0, [r0]
        27b958:	e1b00840 	movs	r0, r0, asr #16
        27b95c:	0a000050 	beq	27baa4 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x46c>
        27b960:	e3a0a000 	mov	sl, #0	; 0x0
        27b964:	e59d0014 	ldr	r0, [sp, #20]
        27b968:	e5d00002 	ldrb	r0, [r0, #2]
        27b96c:	e080c180 	add	ip, r0, r0, lsl #3
        27b970:	e08c0200 	add	r0, ip, r0, lsl #4
        27b974:	e59d1010 	ldr	r1, [sp, #16]
        27b978:	e0810100 	add	r0, r1, r0, lsl #2
        27b97c:	e2800014 	add	r0, r0, #20	; 0x14
        27b980:	e3a08000 	mov	r8, #0	; 0x0
        27b984:	e58d0000 	str	r0, [sp]
        27b988:	ea000035 	b	27ba64 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x42c>
        27b98c:	e3a01001 	mov	r1, #1	; 0x1
        27b990:	e5c51002 	strb	r1, [r5, #2]
        27b994:	e28d0008 	add	r0, sp, #8	; 0x8
        27b998:	e59d2004 	ldr	r2, [sp, #4]
        27b99c:	e7d00002 	ldrb	r0, [r0, r2]
        27b9a0:	e5c5000a 	strb	r0, [r5, #10]
        27b9a4:	e59d0000 	ldr	r0, [sp]
        27b9a8:	e0809008 	add	r9, r0, r8
        27b9ac:	e5d90034 	ldrb	r0, [r9, #52]
        27b9b0:	e5c50009 	strb	r0, [r5, #9]
        27b9b4:	e59d0014 	ldr	r0, [sp, #20]
        27b9b8:	e5d00003 	ldrb	r0, [r0, #3]
        27b9bc:	e5c50007 	strb	r0, [r5, #7]
        27b9c0:	e5c5100e 	strb	r1, [r5, #14]
        27b9c4:	e59d0014 	ldr	r0, [sp, #20]
        27b9c8:	e5900000 	ldr	r0, [r0]
        27b9cc:	e1a00840 	mov	r0, r0, asr #16
        27b9d0:	eb64dbdb 	bl	1bb2944 <$__rt_sdiv10>
        27b9d4:	e5c50006 	strb	r0, [r5, #6]
        27b9d8:	e20000ff 	and	r0, r0, #255	; 0xff
        27b9dc:	e3500064 	cmp	r0, #100	; 0x64
        27b9e0:	c3a00064 	movgt	r0, #100	; 0x64
        27b9e4:	c5c50006 	strgtb	r0, [r5, #6]
        27b9e8:	e5d9001c 	ldrb	r0, [r9, #28]
        27b9ec:	e5c50001 	strb	r0, [r5, #1]
        27b9f0:	e5c50000 	strb	r0, [r5]
        27b9f4:	e084000a 	add	r0, r4, sl
        27b9f8:	e5d00420 	ldrb	r0, [r0, #1056]
        27b9fc:	e2801001 	add	r1, r0, #1	; 0x1
        27ba00:	e5c51004 	strb	r1, [r5, #4]
        27ba04:	e5d9104c 	ldrb	r1, [r9, #76]
        27ba08:	e201100f 	and	r1, r1, #15	; 0xf
        27ba0c:	e081100a 	add	r1, r1, sl
        27ba10:	e0811004 	add	r1, r1, r4
        27ba14:	e5d11420 	ldrb	r1, [r1, #1056]
        27ba18:	e0410000 	sub	r0, r1, r0
        27ba1c:	e5c50005 	strb	r0, [r5, #5]
        27ba20:	e5d9004c 	ldrb	r0, [r9, #76]
        27ba24:	e1a00220 	mov	r0, r0, lsr #4
        27ba28:	e5c50003 	strb	r0, [r5, #3]
        27ba2c:	e3a00000 	mov	r0, #0	; 0x0
        27ba30:	e5c5000b 	strb	r0, [r5, #11]
        27ba34:	e1a02004 	mov	r2, r4
        27ba38:	e1a00007 	mov	r0, r7
        27ba3c:	e51b1030 	ldr	r1, [fp, -#48]
        27ba40:	eb62e408 	bl	1b34a68 <$XrlvGetRwgSymAliases(int, RWG_type *, xrlv_data_type *)>
        27ba44:	e5d9004c 	ldrb	r0, [r9, #76]
        27ba48:	e200000f 	and	r0, r0, #15	; 0xf
        27ba4c:	e080a00a 	add	sl, r0, sl
        27ba50:	e2877001 	add	r7, r7, #1	; 0x1
        27ba54:	e2855010 	add	r5, r5, #16	; 0x10
        27ba58:	e2888001 	add	r8, r8, #1	; 0x1
        27ba5c:	e3580017 	cmp	r8, #23	; 0x17
        27ba60:	aa000003 	bge	27ba74 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x43c>
        27ba64:	e59d0000 	ldr	r0, [sp]
        27ba68:	e5d00011 	ldrb	r0, [r0, #17]
        27ba6c:	e1500008 	cmp	r0, r8
        27ba70:	caffffc5 	bgt	27b98c <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x354>
        27ba74:	e3560001 	cmp	r6, #1	; 0x1
        27ba78:	c59d0024 	ldrgt	r0, [sp, #36]
        27ba7c:	c59d2004 	ldrgt	r2, [sp, #4]
        27ba80:	c1500002 	cmpgt	r0, r2
        27ba84:	da000003 	ble	27ba98 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x460>
        27ba88:	e3a00004 	mov	r0, #4	; 0x4
        27ba8c:	e5c50002 	strb	r0, [r5, #2]
        27ba90:	e2877001 	add	r7, r7, #1	; 0x1
        27ba94:	e2855010 	add	r5, r5, #16	; 0x10
        27ba98:	e59d2004 	ldr	r2, [sp, #4]
        27ba9c:	e2822001 	add	r2, r2, #1	; 0x1
        27baa0:	e58d2004 	str	r2, [sp, #4]
        27baa4:	e59d0014 	ldr	r0, [sp, #20]
        27baa8:	e2800004 	add	r0, r0, #4	; 0x4
        27baac:	e58d0014 	str	r0, [sp, #20]
        27bab0:	e59d0020 	ldr	r0, [sp, #32]
        27bab4:	e1570000 	cmp	r7, r0
        27bab8:	b59d2004 	ldrlt	r2, [sp, #4]
        27babc:	b1520006 	cmplt	r2, r6
        27bac0:	baffffa2 	blt	27b950 <XrlvCreateRWG(RWG_type *, xrlv_data_type *)+0x318>
        27bac4:	e28dd008 	add	sp, sp, #8	; 0x8
        27bac8:	e3a00000 	mov	r0, #0	; 0x0
        27bacc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvSetLocations(xrlv_data_type *, int)
 * Address: 0027bad0
 */
XrlvSetLocations(xrlv_data_type *, int) {
    /*
        27bad0:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        27bad4:	e590204c 	ldr	r2, [r0, #76]
        27bad8:	e492c008 	ldr	ip, [r2], #8
        27badc:	e592e000 	ldr	lr, [r2]
        27bae0:	e3a02000 	mov	r2, #0	; 0x0
        27bae4:	e3a03000 	mov	r3, #0	; 0x0
        27bae8:	e35c0000 	cmp	ip, #0	; 0x0
        27baec:	da000033 	ble	27bbc0 <XrlvSetLocations(xrlv_data_type *, int)+0xf0>
        27baf0:	e24c4001 	sub	r4, ip, #1	; 0x1
        27baf4:	e5de5001 	ldrb	r5, [lr, #1]
        27baf8:	e2155001 	ands	r5, r5, #1	; 0x1
        27bafc:	0a00000b 	beq	27bb30 <XrlvSetLocations(xrlv_data_type *, int)+0x60>
        27bb00:	e3310000 	teq	r1, #0	; 0x0
        27bb04:	0a000002 	beq	27bb14 <XrlvSetLocations(xrlv_data_type *, int)+0x44>
        27bb08:	e3520000 	cmp	r2, #0	; 0x0
        27bb0c:	c1540002 	cmpgt	r4, r2
        27bb10:	ca000006 	bgt	27bb30 <XrlvSetLocations(xrlv_data_type *, int)+0x60>
        27bb14:	e3350000 	teq	r5, #0	; 0x0
        27bb18:	0a000004 	beq	27bb30 <XrlvSetLocations(xrlv_data_type *, int)+0x60>
        27bb1c:	e0806002 	add	r6, r0, r2
        27bb20:	e5c633a8 	strb	r3, [r6, #936]
        27bb24:	e0806003 	add	r6, r0, r3
        27bb28:	e5c62420 	strb	r2, [r6, #1056]
        27bb2c:	e2833001 	add	r3, r3, #1	; 0x1
        27bb30:	e2822001 	add	r2, r2, #1	; 0x1
        27bb34:	e28ee018 	add	lr, lr, #24	; 0x18
        27bb38:	e152000c 	cmp	r2, ip
        27bb3c:	baffffec 	blt	27baf4 <XrlvSetLocations(xrlv_data_type *, int)+0x24>
        27bb40:	e3530002 	cmp	r3, #2	; 0x2
        27bb44:	a3520003 	cmpge	r2, #3	; 0x3
        27bb48:	ba00001c 	blt	27bbc0 <XrlvSetLocations(xrlv_data_type *, int)+0xf0>
        27bb4c:	e3a0e000 	mov	lr, #0	; 0x0
        27bb50:	e3a04000 	mov	r4, #0	; 0x0
        27bb54:	e3530000 	cmp	r3, #0	; 0x0
        27bb58:	da000013 	ble	27bbac <XrlvSetLocations(xrlv_data_type *, int)+0xdc>
        27bb5c:	e080100e 	add	r1, r0, lr
        27bb60:	e5d11420 	ldrb	r1, [r1, #1056]
        27bb64:	e2811001 	add	r1, r1, #1	; 0x1
        27bb68:	e3a02000 	mov	r2, #0	; 0x0
        27bb6c:	e2815011 	add	r5, r1, #17	; 0x11
        27bb70:	ea000004 	b	27bb88 <XrlvSetLocations(xrlv_data_type *, int)+0xb8>
        27bb74:	e0806001 	add	r6, r0, r1
        27bb78:	e5d663a8 	ldrb	r6, [r6, #936]
        27bb7c:	e3360000 	teq	r6, #0	; 0x0
        27bb80:	12822001 	addne	r2, r2, #1	; 0x1
        27bb84:	e2811001 	add	r1, r1, #1	; 0x1
        27bb88:	e151000c 	cmp	r1, ip
        27bb8c:	aa000001 	bge	27bb98 <XrlvSetLocations(xrlv_data_type *, int)+0xc8>
        27bb90:	e1550001 	cmp	r5, r1
        27bb94:	cafffff6 	bgt	27bb74 <XrlvSetLocations(xrlv_data_type *, int)+0xa4>
        27bb98:	e1520004 	cmp	r2, r4
        27bb9c:	c1a04002 	movgt	r4, r2
        27bba0:	e28ee001 	add	lr, lr, #1	; 0x1
        27bba4:	e15e0003 	cmp	lr, r3
        27bba8:	baffffeb 	blt	27bb5c <XrlvSetLocations(xrlv_data_type *, int)+0x8c>
        27bbac:	e2841001 	add	r1, r4, #1	; 0x1
        27bbb0:	e5801004 	str	r1, [r0, #4]
        27bbb4:	e5803000 	str	r3, [r0]
        27bbb8:	e3a00000 	mov	r0, #0	; 0x0
        27bbbc:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
        27bbc0:	e3a00001 	mov	r0, #1	; 0x1
        27bbc4:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: XrlvGetCharset(xrlv_data_type *)
 * Address: 0027bbc8
 */
XrlvGetCharset(xrlv_data_type *) {
    /*
        27bbc8:	e1a0c00d 	mov	ip, sp
        27bbcc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27bbd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        27bbd4:	e1a04000 	mov	r4, r0
        27bbd8:	e5907018 	ldr	r7, [r0, #24]
        27bbdc:	e5900048 	ldr	r0, [r0, #72]
        27bbe0:	e590101e 	ldr	r1, [r0, #30]
        27bbe4:	e1a01821 	mov	r1, r1, lsr #16
        27bbe8:	e201a00a 	and	sl, r1, #10	; 0xa
        27bbec:	e2845e29 	add	r5, r4, #656	; 0x290
        27bbf0:	e2855a01 	add	r5, r5, #4096	; 0x1000
        27bbf4:	e1a09005 	mov	r9, r5
        27bbf8:	e3a06000 	mov	r6, #0	; 0x0
        27bbfc:	e3170001 	tst	r7, #1	; 0x1
        27bc00:	15b08078 	ldrne	r8, [r0, #120]!
        27bc04:	1a00001f 	bne	27bc88 <XrlvGetCharset(xrlv_data_type *)+0xc0>
        27bc08:	ea000023 	b	27bc9c <XrlvGetCharset(xrlv_data_type *)+0xd4>
        27bc0c:	e5c50000 	strb	r0, [r5]
        27bc10:	e3a00010 	mov	r0, #16	; 0x10
        27bc14:	e5c50002 	strb	r0, [r5, #2]
        27bc18:	e3a00004 	mov	r0, #4	; 0x4
        27bc1c:	e5c50008 	strb	r0, [r5, #8]
        27bc20:	e3a00003 	mov	r0, #3	; 0x3
        27bc24:	e5c50001 	strb	r0, [r5, #1]
        27bc28:	e2866001 	add	r6, r6, #1	; 0x1
        27bc2c:	e285500c 	add	r5, r5, #12	; 0xc
        27bc30:	e3560c01 	cmp	r6, #256	; 0x100
        27bc34:	aa0000ca 	bge	27bf64 <XrlvGetCharset(xrlv_data_type *)+0x39c>
        27bc38:	e33a0000 	teq	sl, #0	; 0x0
        27bc3c:	0a000010 	beq	27bc84 <XrlvGetCharset(xrlv_data_type *)+0xbc>
        27bc40:	e5d80000 	ldrb	r0, [r8]
        27bc44:	eb62cece 	bl	1b2f784 <$IsLower>
        27bc48:	e3300000 	teq	r0, #0	; 0x0
        27bc4c:	0a00000c 	beq	27bc84 <XrlvGetCharset(xrlv_data_type *)+0xbc>
        27bc50:	e5d80000 	ldrb	r0, [r8]
        27bc54:	eb62d716 	bl	1b318b4 <$ToUpper>
        27bc58:	e5c50000 	strb	r0, [r5]
        27bc5c:	e3a00010 	mov	r0, #16	; 0x10
        27bc60:	e5c50002 	strb	r0, [r5, #2]
        27bc64:	e3a00004 	mov	r0, #4	; 0x4
        27bc68:	e5c50008 	strb	r0, [r5, #8]
        27bc6c:	e3a00003 	mov	r0, #3	; 0x3
        27bc70:	e5c50001 	strb	r0, [r5, #1]
        27bc74:	e2866001 	add	r6, r6, #1	; 0x1
        27bc78:	e285500c 	add	r5, r5, #12	; 0xc
        27bc7c:	e3560c01 	cmp	r6, #256	; 0x100
        27bc80:	aa0000b7 	bge	27bf64 <XrlvGetCharset(xrlv_data_type *)+0x39c>
        27bc84:	e2888001 	add	r8, r8, #1	; 0x1
        27bc88:	e5d80000 	ldrb	r0, [r8]
        27bc8c:	e3300000 	teq	r0, #0	; 0x0
        27bc90:	0a000001 	beq	27bc9c <XrlvGetCharset(xrlv_data_type *)+0xd4>
        27bc94:	e35600ff 	cmp	r6, #255	; 0xff
        27bc98:	baffffdb 	blt	27bc0c <XrlvGetCharset(xrlv_data_type *)+0x44>
        27bc9c:	e3170002 	tst	r7, #2	; 0x2
        27bca0:	0a000020 	beq	27bd28 <XrlvGetCharset(xrlv_data_type *)+0x160>
        27bca4:	e5940048 	ldr	r0, [r4, #72]
        27bca8:	e3a0e020 	mov	lr, #32	; 0x20
        27bcac:	e3a0a003 	mov	sl, #3	; 0x3
        27bcb0:	e5b0107c 	ldr	r1, [r0, #124]!
        27bcb4:	ea000016 	b	27bd14 <XrlvGetCharset(xrlv_data_type *)+0x14c>
        27bcb8:	e3a02000 	mov	r2, #0	; 0x0
        27bcbc:	e3a0c000 	mov	ip, #0	; 0x0
        27bcc0:	e1a00009 	mov	r0, r9
        27bcc4:	e3560000 	cmp	r6, #0	; 0x0
        27bcc8:	da000008 	ble	27bcf0 <XrlvGetCharset(xrlv_data_type *)+0x128>
        27bccc:	e5d08000 	ldrb	r8, [r0]
        27bcd0:	e1380003 	teq	r8, r3
        27bcd4:	0a00000d 	beq	27bd10 <XrlvGetCharset(xrlv_data_type *)+0x148>
        27bcd8:	e2822001 	add	r2, r2, #1	; 0x1
        27bcdc:	e280000c 	add	r0, r0, #12	; 0xc
        27bce0:	e1520006 	cmp	r2, r6
        27bce4:	bafffff8 	blt	27bccc <XrlvGetCharset(xrlv_data_type *)+0x104>
        27bce8:	e33c0000 	teq	ip, #0	; 0x0
        27bcec:	1a000007 	bne	27bd10 <XrlvGetCharset(xrlv_data_type *)+0x148>
        27bcf0:	e5c53000 	strb	r3, [r5]
        27bcf4:	e5c5e002 	strb	lr, [r5, #2]
        27bcf8:	e5c5a008 	strb	sl, [r5, #8]
        27bcfc:	e5c5a001 	strb	sl, [r5, #1]
        27bd00:	e2866001 	add	r6, r6, #1	; 0x1
        27bd04:	e285500c 	add	r5, r5, #12	; 0xc
        27bd08:	e3560c01 	cmp	r6, #256	; 0x100
        27bd0c:	aa000094 	bge	27bf64 <XrlvGetCharset(xrlv_data_type *)+0x39c>
        27bd10:	e2811001 	add	r1, r1, #1	; 0x1
        27bd14:	e5d13000 	ldrb	r3, [r1]
        27bd18:	e3330000 	teq	r3, #0	; 0x0
        27bd1c:	0a000001 	beq	27bd28 <XrlvGetCharset(xrlv_data_type *)+0x160>
        27bd20:	e35600ff 	cmp	r6, #255	; 0xff
        27bd24:	baffffe3 	blt	27bcb8 <XrlvGetCharset(xrlv_data_type *)+0xf0>
        27bd28:	e3170010 	tst	r7, #16	; 0x10
        27bd2c:	e3a0e050 	mov	lr, #80	; 0x50
        27bd30:	0a000020 	beq	27bdb8 <XrlvGetCharset(xrlv_data_type *)+0x1f0>
        27bd34:	e5940048 	ldr	r0, [r4, #72]
        27bd38:	e3a0a004 	mov	sl, #4	; 0x4
        27bd3c:	e5b01088 	ldr	r1, [r0, #136]!
        27bd40:	ea000017 	b	27bda4 <XrlvGetCharset(xrlv_data_type *)+0x1dc>
        27bd44:	e3a02000 	mov	r2, #0	; 0x0
        27bd48:	e3a0c000 	mov	ip, #0	; 0x0
        27bd4c:	e1a00009 	mov	r0, r9
        27bd50:	e3560000 	cmp	r6, #0	; 0x0
        27bd54:	da000008 	ble	27bd7c <XrlvGetCharset(xrlv_data_type *)+0x1b4>
        27bd58:	e5d08000 	ldrb	r8, [r0]
        27bd5c:	e1380003 	teq	r8, r3
        27bd60:	0a00000e 	beq	27bda0 <XrlvGetCharset(xrlv_data_type *)+0x1d8>
        27bd64:	e2822001 	add	r2, r2, #1	; 0x1
        27bd68:	e280000c 	add	r0, r0, #12	; 0xc
        27bd6c:	e1520006 	cmp	r2, r6
        27bd70:	bafffff8 	blt	27bd58 <XrlvGetCharset(xrlv_data_type *)+0x190>
        27bd74:	e33c0000 	teq	ip, #0	; 0x0
        27bd78:	1a000008 	bne	27bda0 <XrlvGetCharset(xrlv_data_type *)+0x1d8>
        27bd7c:	e5c53000 	strb	r3, [r5]
        27bd80:	e5c5e002 	strb	lr, [r5, #2]
        27bd84:	e5c5a008 	strb	sl, [r5, #8]
        27bd88:	e3a00003 	mov	r0, #3	; 0x3
        27bd8c:	e5c50001 	strb	r0, [r5, #1]
        27bd90:	e2866001 	add	r6, r6, #1	; 0x1
        27bd94:	e285500c 	add	r5, r5, #12	; 0xc
        27bd98:	e3560c01 	cmp	r6, #256	; 0x100
        27bd9c:	aa000070 	bge	27bf64 <XrlvGetCharset(xrlv_data_type *)+0x39c>
        27bda0:	e2811001 	add	r1, r1, #1	; 0x1
        27bda4:	e5d13000 	ldrb	r3, [r1]
        27bda8:	e3330000 	teq	r3, #0	; 0x0
        27bdac:	0a000001 	beq	27bdb8 <XrlvGetCharset(xrlv_data_type *)+0x1f0>
        27bdb0:	e35600ff 	cmp	r6, #255	; 0xff
        27bdb4:	baffffe2 	blt	27bd44 <XrlvGetCharset(xrlv_data_type *)+0x17c>
        27bdb8:	e3170008 	tst	r7, #8	; 0x8
        27bdbc:	0a000020 	beq	27be44 <XrlvGetCharset(xrlv_data_type *)+0x27c>
        27bdc0:	e5940048 	ldr	r0, [r4, #72]
        27bdc4:	e5900084 	ldr	r0, [r0, #132]
        27bdc8:	e3a0a004 	mov	sl, #4	; 0x4
        27bdcc:	ea000017 	b	27be30 <XrlvGetCharset(xrlv_data_type *)+0x268>
        27bdd0:	e3a02000 	mov	r2, #0	; 0x0
        27bdd4:	e3a0c000 	mov	ip, #0	; 0x0
        27bdd8:	e1a01009 	mov	r1, r9
        27bddc:	e3560000 	cmp	r6, #0	; 0x0
        27bde0:	da000008 	ble	27be08 <XrlvGetCharset(xrlv_data_type *)+0x240>
        27bde4:	e5d18000 	ldrb	r8, [r1]
        27bde8:	e1380003 	teq	r8, r3
        27bdec:	0a00000e 	beq	27be2c <XrlvGetCharset(xrlv_data_type *)+0x264>
        27bdf0:	e2822001 	add	r2, r2, #1	; 0x1
        27bdf4:	e281100c 	add	r1, r1, #12	; 0xc
        27bdf8:	e1520006 	cmp	r2, r6
        27bdfc:	bafffff8 	blt	27bde4 <XrlvGetCharset(xrlv_data_type *)+0x21c>
        27be00:	e33c0000 	teq	ip, #0	; 0x0
        27be04:	1a000008 	bne	27be2c <XrlvGetCharset(xrlv_data_type *)+0x264>
        27be08:	e5c53000 	strb	r3, [r5]
        27be0c:	e5c5e002 	strb	lr, [r5, #2]
        27be10:	e5c5a008 	strb	sl, [r5, #8]
        27be14:	e3a01003 	mov	r1, #3	; 0x3
        27be18:	e5c51001 	strb	r1, [r5, #1]
        27be1c:	e2866001 	add	r6, r6, #1	; 0x1
        27be20:	e285500c 	add	r5, r5, #12	; 0xc
        27be24:	e3560c01 	cmp	r6, #256	; 0x100
        27be28:	aa00004d 	bge	27bf64 <XrlvGetCharset(xrlv_data_type *)+0x39c>
        27be2c:	e2800001 	add	r0, r0, #1	; 0x1
        27be30:	e5d03000 	ldrb	r3, [r0]
        27be34:	e3330000 	teq	r3, #0	; 0x0
        27be38:	0a000001 	beq	27be44 <XrlvGetCharset(xrlv_data_type *)+0x27c>
        27be3c:	e35600ff 	cmp	r6, #255	; 0xff
        27be40:	baffffe2 	blt	27bdd0 <XrlvGetCharset(xrlv_data_type *)+0x208>
        27be44:	e3170020 	tst	r7, #32	; 0x20
        27be48:	0a000021 	beq	27bed4 <XrlvGetCharset(xrlv_data_type *)+0x30c>
        27be4c:	e5940048 	ldr	r0, [r4, #72]
        27be50:	e3a0e040 	mov	lr, #64	; 0x40
        27be54:	e3a0a004 	mov	sl, #4	; 0x4
        27be58:	e5b0108c 	ldr	r1, [r0, #140]!
        27be5c:	ea000017 	b	27bec0 <XrlvGetCharset(xrlv_data_type *)+0x2f8>
        27be60:	e3a02000 	mov	r2, #0	; 0x0
        27be64:	e3a0c000 	mov	ip, #0	; 0x0
        27be68:	e1a00009 	mov	r0, r9
        27be6c:	e3560000 	cmp	r6, #0	; 0x0
        27be70:	da000008 	ble	27be98 <XrlvGetCharset(xrlv_data_type *)+0x2d0>
        27be74:	e5d08000 	ldrb	r8, [r0]
        27be78:	e1380003 	teq	r8, r3
        27be7c:	0a00000e 	beq	27bebc <XrlvGetCharset(xrlv_data_type *)+0x2f4>
        27be80:	e2822001 	add	r2, r2, #1	; 0x1
        27be84:	e280000c 	add	r0, r0, #12	; 0xc
        27be88:	e1520006 	cmp	r2, r6
        27be8c:	bafffff8 	blt	27be74 <XrlvGetCharset(xrlv_data_type *)+0x2ac>
        27be90:	e33c0000 	teq	ip, #0	; 0x0
        27be94:	1a000008 	bne	27bebc <XrlvGetCharset(xrlv_data_type *)+0x2f4>
        27be98:	e5c53000 	strb	r3, [r5]
        27be9c:	e5c5e002 	strb	lr, [r5, #2]
        27bea0:	e5c5a008 	strb	sl, [r5, #8]
        27bea4:	e3a00003 	mov	r0, #3	; 0x3
        27bea8:	e5c50001 	strb	r0, [r5, #1]
        27beac:	e2866001 	add	r6, r6, #1	; 0x1
        27beb0:	e285500c 	add	r5, r5, #12	; 0xc
        27beb4:	e3560c01 	cmp	r6, #256	; 0x100
        27beb8:	aa000029 	bge	27bf64 <XrlvGetCharset(xrlv_data_type *)+0x39c>
        27bebc:	e2811001 	add	r1, r1, #1	; 0x1
        27bec0:	e5d13000 	ldrb	r3, [r1]
        27bec4:	e3330000 	teq	r3, #0	; 0x0
        27bec8:	0a000001 	beq	27bed4 <XrlvGetCharset(xrlv_data_type *)+0x30c>
        27becc:	e35600ff 	cmp	r6, #255	; 0xff
        27bed0:	baffffe2 	blt	27be60 <XrlvGetCharset(xrlv_data_type *)+0x298>
        27bed4:	e3170004 	tst	r7, #4	; 0x4
        27bed8:	0a000021 	beq	27bf64 <XrlvGetCharset(xrlv_data_type *)+0x39c>
        27bedc:	e5940048 	ldr	r0, [r4, #72]
        27bee0:	e5900080 	ldr	r0, [r0, #128]
        27bee4:	e3a0a004 	mov	sl, #4	; 0x4
        27bee8:	e3a0e003 	mov	lr, #3	; 0x3
        27beec:	e3a07030 	mov	r7, #48	; 0x30
        27bef0:	ea000016 	b	27bf50 <XrlvGetCharset(xrlv_data_type *)+0x388>
        27bef4:	e3a02000 	mov	r2, #0	; 0x0
        27bef8:	e3a0c000 	mov	ip, #0	; 0x0
        27befc:	e1a01009 	mov	r1, r9
        27bf00:	e3560000 	cmp	r6, #0	; 0x0
        27bf04:	da000008 	ble	27bf2c <XrlvGetCharset(xrlv_data_type *)+0x364>
        27bf08:	e5d18000 	ldrb	r8, [r1]
        27bf0c:	e1380003 	teq	r8, r3
        27bf10:	0a00000d 	beq	27bf4c <XrlvGetCharset(xrlv_data_type *)+0x384>
        27bf14:	e2822001 	add	r2, r2, #1	; 0x1
        27bf18:	e281100c 	add	r1, r1, #12	; 0xc
        27bf1c:	e1520006 	cmp	r2, r6
        27bf20:	bafffff8 	blt	27bf08 <XrlvGetCharset(xrlv_data_type *)+0x340>
        27bf24:	e33c0000 	teq	ip, #0	; 0x0
        27bf28:	1a000007 	bne	27bf4c <XrlvGetCharset(xrlv_data_type *)+0x384>
        27bf2c:	e5c53000 	strb	r3, [r5]
        27bf30:	e5c57002 	strb	r7, [r5, #2]
        27bf34:	e5c5a008 	strb	sl, [r5, #8]
        27bf38:	e5c5e001 	strb	lr, [r5, #1]
        27bf3c:	e2866001 	add	r6, r6, #1	; 0x1
        27bf40:	e285500c 	add	r5, r5, #12	; 0xc
        27bf44:	e3560c01 	cmp	r6, #256	; 0x100
        27bf48:	aa000005 	bge	27bf64 <XrlvGetCharset(xrlv_data_type *)+0x39c>
        27bf4c:	e2800001 	add	r0, r0, #1	; 0x1
        27bf50:	e5d03000 	ldrb	r3, [r0]
        27bf54:	e3330000 	teq	r3, #0	; 0x0
        27bf58:	0a000001 	beq	27bf64 <XrlvGetCharset(xrlv_data_type *)+0x39c>
        27bf5c:	e35600ff 	cmp	r6, #255	; 0xff
        27bf60:	baffffe3 	blt	27bef4 <XrlvGetCharset(xrlv_data_type *)+0x32c>
        27bf64:	e5a46028 	str	r6, [r4, #40]!
        27bf68:	e1a00006 	mov	r0, r6
        27bf6c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvGetRwgSymAliases(int, RWG_type *, xrlv_data_type *)
 * Address: 0027bf70
 */
XrlvGetRwgSymAliases(int, RWG_type *, xrlv_data_type *) {
    /*
        27bf70:	e1a0c00d 	mov	ip, sp
        27bf74:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27bf78:	e24cb004 	sub	fp, ip, #4	; 0x4
        27bf7c:	e24dd018 	sub	sp, sp, #24	; 0x18
        27bf80:	e5b18008 	ldr	r8, [r1, #8]!
        27bf84:	e5917004 	ldr	r7, [r1, #4]
        27bf88:	e0881200 	add	r1, r8, r0, lsl #4
        27bf8c:	e58d1014 	str	r1, [sp, #20]
        27bf90:	e5d12000 	ldrb	r2, [r1]
        27bf94:	e5d16004 	ldrb	r6, [r1, #4]
        27bf98:	e5d19005 	ldrb	r9, [r1, #5]
        27bf9c:	e5d1a003 	ldrb	sl, [r1, #3]
        27bfa0:	e3a05000 	mov	r5, #0	; 0x0
        27bfa4:	e1a04008 	mov	r4, r8
        27bfa8:	e3a01000 	mov	r1, #0	; 0x0
        27bfac:	e0803100 	add	r3, r0, r0, lsl #2
        27bfb0:	e0833180 	add	r3, r3, r0, lsl #3
        27bfb4:	e3500000 	cmp	r0, #0	; 0x0
        27bfb8:	e58d3010 	str	r3, [sp, #16]
        27bfbc:	da00001a 	ble	27c02c <XrlvGetRwgSymAliases(int, RWG_type *, xrlv_data_type *)+0xbc>
        27bfc0:	e5d43002 	ldrb	r3, [r4, #2]
        27bfc4:	e3330001 	teq	r3, #1	; 0x1
        27bfc8:	05d43000 	ldreqb	r3, [r4]
        27bfcc:	01330002 	teqeq	r3, r2
        27bfd0:	05d43004 	ldreqb	r3, [r4, #4]
        27bfd4:	01330006 	teqeq	r3, r6
        27bfd8:	05d43005 	ldreqb	r3, [r4, #5]
        27bfdc:	01330009 	teqeq	r3, r9
        27bfe0:	0a000005 	beq	27bffc <XrlvGetRwgSymAliases(int, RWG_type *, xrlv_data_type *)+0x8c>
        27bfe4:	e2855001 	add	r5, r5, #1	; 0x1
        27bfe8:	e2844010 	add	r4, r4, #16	; 0x10
        27bfec:	e1550000 	cmp	r5, r0
        27bff0:	bafffff2 	blt	27bfc0 <XrlvGetRwgSymAliases(int, RWG_type *, xrlv_data_type *)+0x50>
        27bff4:	e3310000 	teq	r1, #0	; 0x0
        27bff8:	0a00000b 	beq	27c02c <XrlvGetRwgSymAliases(int, RWG_type *, xrlv_data_type *)+0xbc>
        27bffc:	e0850105 	add	r0, r5, r5, lsl #2
        27c000:	e0800185 	add	r0, r0, r5, lsl #3
        27c004:	e0871100 	add	r1, r7, r0, lsl #2
        27c008:	e59d3010 	ldr	r3, [sp, #16]
        27c00c:	e0870103 	add	r0, r7, r3, lsl #2
        27c010:	e3a02034 	mov	r2, #52	; 0x34
        27c014:	eb64e28e 	bl	1bb4a54 <$memmove>
        27c018:	e0880205 	add	r0, r8, r5, lsl #4
        27c01c:	e5d00003 	ldrb	r0, [r0, #3]
        27c020:	e59d1014 	ldr	r1, [sp, #20]
        27c024:	e5c10003 	strb	r0, [r1, #3]
        27c028:	ea000024 	b	27c0c0 <XrlvGetRwgSymAliases(int, RWG_type *, xrlv_data_type *)+0x150>
        27c02c:	e51b202c 	ldr	r2, [fp, -#44]
        27c030:	e5b23044 	ldr	r3, [r2, #68]!
        27c034:	e1a0200d 	mov	r2, sp
        27c038:	e92d000c 	stmdb	sp!, {r2, r3}
        27c03c:	e0863009 	add	r3, r6, r9
        27c040:	e2462001 	sub	r2, r6, #1	; 0x1
        27c044:	e1a0100a 	mov	r1, sl
        27c048:	e5d40000 	ldrb	r0, [r4]
        27c04c:	eb62e286 	bl	1b34a6c <$XrlvGetSymAliases__FUciN22PUcP9xrcm_type>
        27c050:	e28dd008 	add	sp, sp, #8	; 0x8
        27c054:	e3a00000 	mov	r0, #0	; 0x0
        27c058:	e59d3010 	ldr	r3, [sp, #16]
        27c05c:	e0871103 	add	r1, r7, r3, lsl #2
        27c060:	e3a03003 	mov	r3, #3	; 0x3
        27c064:	ea000008 	b	27c08c <XrlvGetRwgSymAliases(int, RWG_type *, xrlv_data_type *)+0x11c>
        27c068:	e202203f 	and	r2, r2, #63	; 0x3f
        27c06c:	e0822006 	add	r2, r2, r6
        27c070:	e2422001 	sub	r2, r2, #1	; 0x1
        27c074:	e5c12000 	strb	r2, [r1]
        27c078:	e7dd2000 	ldrb	r2, [sp, r0]
        27c07c:	e0032342 	and	r2, r3, r2, asr #6
        27c080:	e5c12001 	strb	r2, [r1, #1]
        27c084:	e2800001 	add	r0, r0, #1	; 0x1
        27c088:	e2811004 	add	r1, r1, #4	; 0x4
        27c08c:	e7dd2000 	ldrb	r2, [sp, r0]
        27c090:	e3520000 	cmp	r2, #0	; 0x0
        27c094:	da000002 	ble	27c0a4 <XrlvGetRwgSymAliases(int, RWG_type *, xrlv_data_type *)+0x134>
        27c098:	e350000c 	cmp	r0, #12	; 0xc
        27c09c:	b350000e 	cmplt	r0, #14	; 0xe
        27c0a0:	bafffff0 	blt	27c068 <XrlvGetRwgSymAliases(int, RWG_type *, xrlv_data_type *)+0xf8>
        27c0a4:	e33a000f 	teq	sl, #15	; 0xf
        27c0a8:	1a000004 	bne	27c0c0 <XrlvGetRwgSymAliases(int, RWG_type *, xrlv_data_type *)+0x150>
        27c0ac:	e51b202c 	ldr	r2, [fp, -#44]
        27c0b0:	e5b20044 	ldr	r0, [r2, #68]!
        27c0b4:	e0800009 	add	r0, r0, r9
        27c0b8:	e5d00149 	ldrb	r0, [r0, #329]
        27c0bc:	e5c40003 	strb	r0, [r4, #3]
        27c0c0:	e3a00000 	mov	r0, #0	; 0x0
        27c0c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)
 * Address: 0027c0c8
 */
XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *) {
    /*
        27c0c8:	e1a0c00d 	mov	ip, sp
        27c0cc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27c0d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        27c0d4:	e1a04000 	mov	r4, r0
        27c0d8:	e1a08001 	mov	r8, r1
        27c0dc:	e1a06002 	mov	r6, r2
        27c0e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        27c0e4:	e3a07000 	mov	r7, #0	; 0x0
        27c0e8:	e3a05f96 	mov	r5, #600	; 0x258
        27c0ec:	e2855a03 	add	r5, r5, #12288	; 0x3000
        27c0f0:	e1a00005 	mov	r0, r5
        27c0f4:	eb5fcdb0 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        27c0f8:	e3a0a000 	mov	sl, #0	; 0x0
        27c0fc:	e58d0000 	str	r0, [sp]
        27c100:	e3300000 	teq	r0, #0	; 0x0
        27c104:	0a00009f 	beq	27c388 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x2c0>
        27c108:	e1a02005 	mov	r2, r5
        27c10c:	e3a01000 	mov	r1, #0	; 0x0
        27c110:	eb64e250 	bl	1bb4a58 <$memset>
        27c114:	e59d0000 	ldr	r0, [sp]
        27c118:	e2802044 	add	r2, r0, #68	; 0x44
        27c11c:	e1a01008 	mov	r1, r8
        27c120:	e1a00006 	mov	r0, r6
        27c124:	eb62e65a 	bl	1b35a94 <$xrmatr_alloc(rc_type *, xrdata_type *, xrcm_type **)>
        27c128:	e3300000 	teq	r0, #0	; 0x0
        27c12c:	1a000095 	bne	27c388 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x2c0>
        27c130:	e59d0000 	ldr	r0, [sp]
        27c134:	e5a0804c 	str	r8, [r0, #76]!
        27c138:	e5960096 	ldr	r0, [r6, #150]
        27c13c:	e1a00840 	mov	r0, r0, asr #16
        27c140:	e1a00100 	mov	r0, r0, lsl #2
        27c144:	eb5fcd9c 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        27c148:	e3300000 	teq	r0, #0	; 0x0
        27c14c:	0a00008d 	beq	27c388 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x2c0>
        27c150:	e59d1000 	ldr	r1, [sp]
        27c154:	e5a10050 	str	r0, [r1, #80]!
        27c158:	e5961096 	ldr	r1, [r6, #150]
        27c15c:	e1a01841 	mov	r1, r1, asr #16
        27c160:	e0801081 	add	r1, r0, r1, lsl #1
        27c164:	e59d0000 	ldr	r0, [sp]
        27c168:	e5a01054 	str	r1, [r0, #84]!
        27c16c:	e3a00000 	mov	r0, #0	; 0x0
        27c170:	e5961096 	ldr	r1, [r6, #150]
        27c174:	e1a01841 	mov	r1, r1, asr #16
        27c178:	e3510000 	cmp	r1, #0	; 0x0
        27c17c:	da000016 	ble	27c1dc <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x114>
        27c180:	e59610f8 	ldr	r1, [r6, #248]
        27c184:	e7912100 	ldr	r2, [r1, r0, lsl #2]
        27c188:	e1a02822 	mov	r2, r2, lsr #16
        27c18c:	e59d1000 	ldr	r1, [sp]
        27c190:	e5911050 	ldr	r1, [r1, #80]
        27c194:	e0811080 	add	r1, r1, r0, lsl #1
        27c198:	e5c12001 	strb	r2, [r1, #1]
        27c19c:	e1a02442 	mov	r2, r2, asr #8
        27c1a0:	e5c12000 	strb	r2, [r1]
        27c1a4:	e59610f8 	ldr	r1, [r6, #248]
        27c1a8:	e0811100 	add	r1, r1, r0, lsl #2
        27c1ac:	e5912002 	ldr	r2, [r1, #2]
        27c1b0:	e1a02822 	mov	r2, r2, lsr #16
        27c1b4:	e59d1000 	ldr	r1, [sp]
        27c1b8:	e5911054 	ldr	r1, [r1, #84]
        27c1bc:	e0811080 	add	r1, r1, r0, lsl #1
        27c1c0:	e5c12001 	strb	r2, [r1, #1]
        27c1c4:	e1a02442 	mov	r2, r2, asr #8
        27c1c8:	e5c12000 	strb	r2, [r1]
        27c1cc:	e2800001 	add	r0, r0, #1	; 0x1
        27c1d0:	e5961096 	ldr	r1, [r6, #150]
        27c1d4:	e1500841 	cmp	r0, r1, asr #16
        27c1d8:	baffffe8 	blt	27c180 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0xb8>
        27c1dc:	e596000e 	ldr	r0, [r6, #14]
        27c1e0:	e1a00840 	mov	r0, r0, asr #16
        27c1e4:	e3300001 	teq	r0, #1	; 0x1
        27c1e8:	13a01000 	movne	r1, #0	; 0x0
        27c1ec:	03a01001 	moveq	r1, #1	; 0x1
        27c1f0:	e59d0000 	ldr	r0, [sp]
        27c1f4:	eb62e21e 	bl	1b34a74 <$XrlvSetLocations(xrlv_data_type *, int)>
        27c1f8:	e3300000 	teq	r0, #0	; 0x0
        27c1fc:	1a000061 	bne	27c388 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x2c0>
        27c200:	e59d0000 	ldr	r0, [sp]
        27c204:	e5901004 	ldr	r1, [r0, #4]
        27c208:	e3510002 	cmp	r1, #2	; 0x2
        27c20c:	ba00005d 	blt	27c388 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x2c0>
        27c210:	e5961010 	ldr	r1, [r6, #16]
        27c214:	e1a01841 	mov	r1, r1, asr #16
        27c218:	e3510064 	cmp	r1, #100	; 0x64
        27c21c:	a3a01064 	movge	r1, #100	; 0x64
        27c220:	e3a08000 	mov	r8, #0	; 0x0
        27c224:	e3a06064 	mov	r6, #100	; 0x64
        27c228:	e3a09064 	mov	r9, #100	; 0x64
        27c22c:	e5a0100c 	str	r1, [r0, #12]!
        27c230:	e59d5000 	ldr	r5, [sp]
        27c234:	e595000c 	ldr	r0, [r5, #12]
        27c238:	e0010096 	mul	r1, r6, r0
        27c23c:	e3a00064 	mov	r0, #100	; 0x64
        27c240:	eb64d9be 	bl	1bb2940 <$__rt_sdiv>
        27c244:	e5a5000c 	str	r0, [r5, #12]!
        27c248:	e1a01000 	mov	r1, r0
        27c24c:	e1a02000 	mov	r2, r0
        27c250:	e3520002 	cmp	r2, #2	; 0x2
        27c254:	e59d0000 	ldr	r0, [sp]
        27c258:	ba00004a 	blt	27c388 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x2c0>
        27c25c:	e0491001 	sub	r1, r9, r1
        27c260:	e081c181 	add	ip, r1, r1, lsl #3
        27c264:	e08c1201 	add	r1, ip, r1, lsl #4
        27c268:	e3a02fc9 	mov	r2, #804	; 0x324
        27c26c:	e2822b09 	add	r2, r2, #9216	; 0x2400
        27c270:	e0421101 	sub	r1, r2, r1, lsl #2
        27c274:	e5a01008 	str	r1, [r0, #8]!
        27c278:	e2811010 	add	r1, r1, #16	; 0x10
        27c27c:	e59d0000 	ldr	r0, [sp]
        27c280:	e3a05000 	mov	r5, #0	; 0x0
        27c284:	e3a06064 	mov	r6, #100	; 0x64
        27c288:	e3a07000 	mov	r7, #0	; 0x0
        27c28c:	e5a01008 	str	r1, [r0, #8]!
        27c290:	e59d0000 	ldr	r0, [sp]
        27c294:	e5900004 	ldr	r0, [r0, #4]
        27c298:	e3500000 	cmp	r0, #0	; 0x0
        27c29c:	da000035 	ble	27c378 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x2b0>
        27c2a0:	e59d0000 	ldr	r0, [sp]
        27c2a4:	e5900008 	ldr	r0, [r0, #8]
        27c2a8:	eb5fcd43 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        27c2ac:	e59d1000 	ldr	r1, [sp]
        27c2b0:	e0811105 	add	r1, r1, r5, lsl #2
        27c2b4:	e5a10058 	str	r0, [r1, #88]!
        27c2b8:	e3300000 	teq	r0, #0	; 0x0
        27c2bc:	1a000007 	bne	27c2e0 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x218>
        27c2c0:	e0851185 	add	r1, r5, r5, lsl #3
        27c2c4:	e0811205 	add	r1, r1, r5, lsl #4
        27c2c8:	e1a01101 	mov	r1, r1, lsl #2
        27c2cc:	e59d0000 	ldr	r0, [sp]
        27c2d0:	e5900004 	ldr	r0, [r0, #4]
        27c2d4:	eb64d999 	bl	1bb2940 <$__rt_sdiv>
        27c2d8:	e1a06000 	mov	r6, r0
        27c2dc:	ea00000b 	b	27c310 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x248>
        27c2e0:	e580a010 	str	sl, [r0, #16]
        27c2e4:	e580a00c 	str	sl, [r0, #12]
        27c2e8:	e580a008 	str	sl, [r0, #8]
        27c2ec:	e580a004 	str	sl, [r0, #4]
        27c2f0:	e580a000 	str	sl, [r0]
        27c2f4:	e59d0000 	ldr	r0, [sp]
        27c2f8:	e5901008 	ldr	r1, [r0, #8]
        27c2fc:	e0817007 	add	r7, r1, r7
        27c300:	e2855001 	add	r5, r5, #1	; 0x1
        27c304:	e5900004 	ldr	r0, [r0, #4]
        27c308:	e1500005 	cmp	r0, r5
        27c30c:	caffffe3 	bgt	27c2a0 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x1d8>
        27c310:	e3360064 	teq	r6, #100	; 0x64
        27c314:	0a000017 	beq	27c378 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x2b0>
        27c318:	e3a05000 	mov	r5, #0	; 0x0
        27c31c:	e59d0000 	ldr	r0, [sp]
        27c320:	e5900004 	ldr	r0, [r0, #4]
        27c324:	e3500000 	cmp	r0, #0	; 0x0
        27c328:	da00000d 	ble	27c364 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x29c>
        27c32c:	e59d0000 	ldr	r0, [sp]
        27c330:	e0800105 	add	r0, r0, r5, lsl #2
        27c334:	e5900058 	ldr	r0, [r0, #88]
        27c338:	e3300000 	teq	r0, #0	; 0x0
        27c33c:	0a000003 	beq	27c350 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x288>
        27c340:	eb5fcd1e 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        27c344:	e59d0000 	ldr	r0, [sp]
        27c348:	e0800105 	add	r0, r0, r5, lsl #2
        27c34c:	e5a0a058 	str	sl, [r0, #88]!
        27c350:	e2855001 	add	r5, r5, #1	; 0x1
        27c354:	e59d0000 	ldr	r0, [sp]
        27c358:	e5900004 	ldr	r0, [r0, #4]
        27c35c:	e1500005 	cmp	r0, r5
        27c360:	cafffff1 	bgt	27c32c <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x264>
        27c364:	e2888001 	add	r8, r8, #1	; 0x1
        27c368:	e3580005 	cmp	r8, #5	; 0x5
        27c36c:	baffffaf 	blt	27c230 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x168>
        27c370:	e3560064 	cmp	r6, #100	; 0x64
        27c374:	ba000003 	blt	27c388 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x2c0>
        27c378:	e59d0000 	ldr	r0, [sp]
        27c37c:	e5840000 	str	r0, [r4]
        27c380:	e1a0000a 	mov	r0, sl
        27c384:	ea000003 	b	27c398 <XrlvAlloc(xrlv_data_type **, xrdata_type *, rc_type *)+0x2d0>
        27c388:	e1a0000d 	mov	r0, sp
        27c38c:	eb62e1af 	bl	1b34a50 <$XrlvDealloc(xrlv_data_type **)>
        27c390:	e2870001 	add	r0, r7, #1	; 0x1
        27c394:	e584a000 	str	sl, [r4]
        27c398:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvDealloc(xrlv_data_type **)
 * Address: 0027c39c
 */
XrlvDealloc(xrlv_data_type **) {
    /*
        27c39c:	e1a0c00d 	mov	ip, sp
        27c3a0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        27c3a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        27c3a8:	e1a04000 	mov	r4, r0
        27c3ac:	e3a07000 	mov	r7, #0	; 0x0
        27c3b0:	e5905000 	ldr	r5, [r0]
        27c3b4:	e3350000 	teq	r5, #0	; 0x0
        27c3b8:	0a000016 	beq	27c418 <XrlvDealloc(xrlv_data_type **)+0x7c>
        27c3bc:	e5950050 	ldr	r0, [r5, #80]
        27c3c0:	e3300000 	teq	r0, #0	; 0x0
        27c3c4:	0a000002 	beq	27c3d4 <XrlvDealloc(xrlv_data_type **)+0x38>
        27c3c8:	eb5fccfc 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        27c3cc:	e5857050 	str	r7, [r5, #80]
        27c3d0:	e5857054 	str	r7, [r5, #84]
        27c3d4:	e5950044 	ldr	r0, [r5, #68]
        27c3d8:	e3300000 	teq	r0, #0	; 0x0
        27c3dc:	12850044 	addne	r0, r5, #68	; 0x44
        27c3e0:	1b62bc6c 	blne	1b2b598 <$xrmatr_dealloc(xrcm_type **)>
        27c3e4:	e3a06000 	mov	r6, #0	; 0x0
        27c3e8:	e0858106 	add	r8, r5, r6, lsl #2
        27c3ec:	e5980058 	ldr	r0, [r8, #88]
        27c3f0:	e3300000 	teq	r0, #0	; 0x0
        27c3f4:	0a000001 	beq	27c400 <XrlvDealloc(xrlv_data_type **)+0x64>
        27c3f8:	eb5fccf0 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        27c3fc:	e5a87058 	str	r7, [r8, #88]!
        27c400:	e2866001 	add	r6, r6, #1	; 0x1
        27c404:	e3560078 	cmp	r6, #120	; 0x78
        27c408:	bafffff6 	blt	27c3e8 <XrlvDealloc(xrlv_data_type **)+0x4c>
        27c40c:	e1a00005 	mov	r0, r5
        27c410:	eb5fccea 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        27c414:	e5847000 	str	r7, [r4]
        27c418:	e1a00007 	mov	r0, r7
        27c41c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvFreeSomePos(xrlv_data_type *)
 * Address: 0027c420
 */
XrlvFreeSomePos(xrlv_data_type *) {
    /*
        27c420:	e1a0c00d 	mov	ip, sp
        27c424:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        27c428:	e24cb004 	sub	fp, ip, #4	; 0x4
        27c42c:	e1b04000 	movs	r4, r0
        27c430:	e3a07000 	mov	r7, #0	; 0x0
        27c434:	0a00000f 	beq	27c478 <XrlvFreeSomePos(xrlv_data_type *)+0x58>
        27c438:	e3a05000 	mov	r5, #0	; 0x0
        27c43c:	e5940000 	ldr	r0, [r4]
        27c440:	e2400001 	sub	r0, r0, #1	; 0x1
        27c444:	e3500000 	cmp	r0, #0	; 0x0
        27c448:	da00000a 	ble	27c478 <XrlvFreeSomePos(xrlv_data_type *)+0x58>
        27c44c:	e0846105 	add	r6, r4, r5, lsl #2
        27c450:	e5960058 	ldr	r0, [r6, #88]
        27c454:	e3300000 	teq	r0, #0	; 0x0
        27c458:	0a000001 	beq	27c464 <XrlvFreeSomePos(xrlv_data_type *)+0x44>
        27c45c:	eb5fccd7 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        27c460:	e5a67058 	str	r7, [r6, #88]!
        27c464:	e2855001 	add	r5, r5, #1	; 0x1
        27c468:	e5940000 	ldr	r0, [r4]
        27c46c:	e2400001 	sub	r0, r0, #1	; 0x1
        27c470:	e1500005 	cmp	r0, r5
        27c474:	cafffff4 	bgt	27c44c <XrlvFreeSomePos(xrlv_data_type *)+0x2c>
        27c478:	e1a00007 	mov	r0, r7
        27c47c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)
 * Address: 0027c480
 */
XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *) {
    /*
        27c480:	e1a0c00d 	mov	ip, sp
        27c484:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        27c488:	e24cb004 	sub	fp, ip, #4	; 0x4
        27c48c:	e1a04000 	mov	r4, r0
        27c490:	e1a05001 	mov	r5, r1
        27c494:	e5d00011 	ldrb	r0, [r0, #17]
        27c498:	e5d41012 	ldrb	r1, [r4, #18]
        27c49c:	e0407001 	sub	r7, r0, r1
        27c4a0:	e5d41015 	ldrb	r1, [r4, #21]
        27c4a4:	e20120c0 	and	r2, r1, #192	; 0xc0
        27c4a8:	e33200c0 	teq	r2, #192	; 0xc0
        27c4ac:	1a000027 	bne	27c550 <XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)+0xd0>
        27c4b0:	e1500007 	cmp	r0, r7
        27c4b4:	da00004a 	ble	27c5e4 <XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)+0x164>
        27c4b8:	e0846007 	add	r6, r4, r7
        27c4bc:	e5d6001c 	ldrb	r0, [r6, #28]
        27c4c0:	eb62ccaf 	bl	1b2f784 <$IsLower>
        27c4c4:	e3300000 	teq	r0, #0	; 0x0
        27c4c8:	0a00001b 	beq	27c53c <XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)+0xbc>
        27c4cc:	e5950048 	ldr	r0, [r5, #72]
        27c4d0:	e5b02030 	ldr	r2, [r0, #48]!
        27c4d4:	e5d6004c 	ldrb	r0, [r6, #76]
        27c4d8:	e1a00220 	mov	r0, r0, lsr #4
        27c4dc:	e20010ff 	and	r1, r0, #255	; 0xff
        27c4e0:	e5d6001c 	ldrb	r0, [r6, #28]
        27c4e4:	eb62dd38 	bl	1b339cc <$GetVarRewcapAllow__FUcT1Pv>
        27c4e8:	e3300000 	teq	r0, #0	; 0x0
        27c4ec:	1a00000c 	bne	27c524 <XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)+0xa4>
        27c4f0:	e594000e 	ldr	r0, [r4, #14]
        27c4f4:	e1a00820 	mov	r0, r0, lsr #16
        27c4f8:	e2400005 	sub	r0, r0, #5	; 0x5
        27c4fc:	e5c4000f 	strb	r0, [r4, #15]
        27c500:	e1a00440 	mov	r0, r0, asr #8
        27c504:	e5c4000e 	strb	r0, [r4, #14]
        27c508:	e5d60034 	ldrb	r0, [r6, #52]
        27c50c:	e1a00c00 	mov	r0, r0, lsl #24
        27c510:	e1a00c40 	mov	r0, r0, asr #24
        27c514:	e2400005 	sub	r0, r0, #5	; 0x5
        27c518:	e370007f 	cmn	r0, #127	; 0x7f
        27c51c:	b3e0007e 	mvnlt	r0, #126	; 0x7e
        27c520:	e5c60034 	strb	r0, [r6, #52]
        27c524:	e5d6001c 	ldrb	r0, [r6, #28]
        27c528:	eb62d4e1 	bl	1b318b4 <$ToUpper>
        27c52c:	e5c6001c 	strb	r0, [r6, #28]
        27c530:	e5d6004c 	ldrb	r0, [r6, #76]
        27c534:	e38000f0 	orr	r0, r0, #240	; 0xf0
        27c538:	e5c6004c 	strb	r0, [r6, #76]
        27c53c:	e2877001 	add	r7, r7, #1	; 0x1
        27c540:	e5d40011 	ldrb	r0, [r4, #17]
        27c544:	e1500007 	cmp	r0, r7
        27c548:	caffffda 	bgt	27c4b8 <XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)+0x38>
        27c54c:	ea000024 	b	27c5e4 <XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)+0x164>
        27c550:	e3110080 	tst	r1, #128	; 0x80
        27c554:	0a000022 	beq	27c5e4 <XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)+0x164>
        27c558:	e0846007 	add	r6, r4, r7
        27c55c:	e5d6001c 	ldrb	r0, [r6, #28]
        27c560:	eb62cc87 	bl	1b2f784 <$IsLower>
        27c564:	e3300000 	teq	r0, #0	; 0x0
        27c568:	0a00001d 	beq	27c5e4 <XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)+0x164>
        27c56c:	e5b50048 	ldr	r0, [r5, #72]!
        27c570:	e5b02030 	ldr	r2, [r0, #48]!
        27c574:	e5d6004c 	ldrb	r0, [r6, #76]
        27c578:	e1a00220 	mov	r0, r0, lsr #4
        27c57c:	e20010ff 	and	r1, r0, #255	; 0xff
        27c580:	e5d6001c 	ldrb	r0, [r6, #28]
        27c584:	eb62dd10 	bl	1b339cc <$GetVarRewcapAllow__FUcT1Pv>
        27c588:	e3300000 	teq	r0, #0	; 0x0
        27c58c:	1a00000e 	bne	27c5cc <XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)+0x14c>
        27c590:	e594000e 	ldr	r0, [r4, #14]
        27c594:	e1a00820 	mov	r0, r0, lsr #16
        27c598:	e2400005 	sub	r0, r0, #5	; 0x5
        27c59c:	e5c4000f 	strb	r0, [r4, #15]
        27c5a0:	e1a00440 	mov	r0, r0, asr #8
        27c5a4:	e5c4000e 	strb	r0, [r4, #14]
        27c5a8:	e5d40011 	ldrb	r0, [r4, #17]
        27c5ac:	e0801004 	add	r1, r0, r4
        27c5b0:	e5d10033 	ldrb	r0, [r1, #51]
        27c5b4:	e1a00c00 	mov	r0, r0, lsl #24
        27c5b8:	e1a00c40 	mov	r0, r0, asr #24
        27c5bc:	e2400005 	sub	r0, r0, #5	; 0x5
        27c5c0:	e370007f 	cmn	r0, #127	; 0x7f
        27c5c4:	b3e0007e 	mvnlt	r0, #126	; 0x7e
        27c5c8:	e5c10033 	strb	r0, [r1, #51]
        27c5cc:	e5d6001c 	ldrb	r0, [r6, #28]
        27c5d0:	eb62d4b7 	bl	1b318b4 <$ToUpper>
        27c5d4:	e5c6001c 	strb	r0, [r6, #28]
        27c5d8:	e5d6004c 	ldrb	r0, [r6, #76]
        27c5dc:	e38000f0 	orr	r0, r0, #240	; 0xf0
        27c5e0:	e5c6004c 	strb	r0, [r6, #76]
        27c5e4:	e3a00000 	mov	r0, #0	; 0x0
        27c5e8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvApplyWordEndInfo(int, xrlv_var_data_type *, xrlv_data_type *)
 * Address: 0027c5ec
 */
XrlvApplyWordEndInfo(int, xrlv_var_data_type *, xrlv_data_type *) {
    /*
        27c5ec:	e92d4010 	stmdb	sp!, {r4, lr}
        27c5f0:	e5d13011 	ldrb	r3, [r1, #17]
        27c5f4:	e3530001 	cmp	r3, #1	; 0x1
        27c5f8:	ba000034 	blt	27c6d0 <XrlvApplyWordEndInfo(int, xrlv_var_data_type *, xrlv_data_type *)+0xe4>
        27c5fc:	e5d1c010 	ldrb	ip, [r1, #16]
        27c600:	e31c0008 	tst	ip, #8	; 0x8
        27c604:	05d1c012 	ldreqb	ip, [r1, #18]
        27c608:	033c0001 	teqeq	ip, #1	; 0x1
        27c60c:	1a000018 	bne	27c674 <XrlvApplyWordEndInfo(int, xrlv_var_data_type *, xrlv_data_type *)+0x88>
        27c610:	e082c000 	add	ip, r2, r0
        27c614:	e5dc4420 	ldrb	r4, [ip, #1056]
        27c618:	e0833001 	add	r3, r3, r1
        27c61c:	e1a0c003 	mov	ip, r3
        27c620:	e5d3e04b 	ldrb	lr, [r3, #75]
        27c624:	e20ee00f 	and	lr, lr, #15	; 0xf
        27c628:	e040000e 	sub	r0, r0, lr
        27c62c:	e0800002 	add	r0, r0, r2
        27c630:	e5d00420 	ldrb	r0, [r0, #1056]
        27c634:	e0442000 	sub	r2, r4, r0
        27c638:	e3a00002 	mov	r0, #2	; 0x2
        27c63c:	e0800082 	add	r0, r0, r2, lsl #1
        27c640:	e1a00140 	mov	r0, r0, asr #2
        27c644:	e591e00e 	ldr	lr, [r1, #14]
        27c648:	e1a0e82e 	mov	lr, lr, lsr #16
        27c64c:	e04e2000 	sub	r2, lr, r0
        27c650:	e5c1200f 	strb	r2, [r1, #15]
        27c654:	e1a02442 	mov	r2, r2, asr #8
        27c658:	e5c1200e 	strb	r2, [r1, #14]
        27c65c:	e5d32033 	ldrb	r2, [r3, #51]
        27c660:	e1a02c02 	mov	r2, r2, lsl #24
        27c664:	e0600c42 	rsb	r0, r0, r2, asr #24
        27c668:	e370007f 	cmn	r0, #127	; 0x7f
        27c66c:	b3e0007e 	mvnlt	r0, #126	; 0x7e
        27c670:	e5cc0033 	strb	r0, [ip, #51]
        27c674:	e5d10013 	ldrb	r0, [r1, #19]
        27c678:	e3100001 	tst	r0, #1	; 0x1
        27c67c:	1a000013 	bne	27c6d0 <XrlvApplyWordEndInfo(int, xrlv_var_data_type *, xrlv_data_type *)+0xe4>
        27c680:	e5d10015 	ldrb	r0, [r1, #21]
        27c684:	e2000003 	and	r0, r0, #3	; 0x3
        27c688:	e5d12012 	ldrb	r2, [r1, #18]
        27c68c:	e0030092 	mul	r3, r2, r0
        27c690:	e0832083 	add	r2, r3, r3, lsl #1
        27c694:	e08001c2 	add	r0, r0, r2, asr #3
        27c698:	e591300e 	ldr	r3, [r1, #14]
        27c69c:	e1a03823 	mov	r3, r3, lsr #16
        27c6a0:	e0832000 	add	r2, r3, r0
        27c6a4:	e5c1200f 	strb	r2, [r1, #15]
        27c6a8:	e1a02442 	mov	r2, r2, asr #8
        27c6ac:	e5c1200e 	strb	r2, [r1, #14]
        27c6b0:	e5d12011 	ldrb	r2, [r1, #17]
        27c6b4:	e0821001 	add	r1, r2, r1
        27c6b8:	e5d12033 	ldrb	r2, [r1, #51]
        27c6bc:	e1a02c02 	mov	r2, r2, lsl #24
        27c6c0:	e0800c42 	add	r0, r0, r2, asr #24
        27c6c4:	e350007f 	cmp	r0, #127	; 0x7f
        27c6c8:	c3a0007f 	movgt	r0, #127	; 0x7f
        27c6cc:	e5c10033 	strb	r0, [r1, #51]
        27c6d0:	e3a00000 	mov	r0, #0	; 0x0
        27c6d4:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type
 * Address: 0027c6d8
 */
void globals::XrlvDevelopCell() {
    /*
        27c6d8:	e1a0c00d 	mov	ip, sp
        27c6dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        27c6e0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27c6e4:	e24cb014 	sub	fp, ip, #20	; 0x14
        27c6e8:	e1a04001 	mov	r4, r1
        27c6ec:	e59b6014 	ldr	r6, [fp, #20]
        27c6f0:	e24dd07c 	sub	sp, sp, #124	; 0x7c
        27c6f4:	e5960010 	ldr	r0, [r6, #16]
        27c6f8:	e1a0c080 	mov	ip, r0, lsl #1
        27c6fc:	e58dc050 	str	ip, [sp, #80]
        27c700:	e5960044 	ldr	r0, [r6, #68]
        27c704:	e58d0038 	str	r0, [sp, #56]
        27c708:	e28dd034 	add	sp, sp, #52	; 0x34
        27c70c:	e59fe334 	ldr	lr, [pc, #334]	; 27ca48 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x370>
        27c710:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        27c714:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        27c718:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        27c71c:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        27c720:	e91e500e 	ldmdb	lr, {r1, r2, r3, ip, lr}
        27c724:	e92d500e 	stmdb	sp!, {r1, r2, r3, ip, lr}
        27c728:	e59b0004 	ldr	r0, [fp, #4]
        27c72c:	e0860000 	add	r0, r6, r0
        27c730:	e5d05420 	ldrb	r5, [r0, #1056]
        27c734:	e3a00000 	mov	r0, #0	; 0x0
        27c738:	e58d5064 	str	r5, [sp, #100]
        27c73c:	e3550000 	cmp	r5, #0	; 0x0
        27c740:	e58d005c 	str	r0, [sp, #92]
        27c744:	ba00000f 	blt	27c788 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0xb0>
        27c748:	e596004c 	ldr	r0, [r6, #76]
        27c74c:	e5900008 	ldr	r0, [r0, #8]
        27c750:	e0857085 	add	r7, r5, r5, lsl #1
        27c754:	e0800187 	add	r0, r0, r7, lsl #3
        27c758:	eb62dca4 	bl	1b339f0 <$IsXrLink(xrd_el_type *)>
        27c75c:	e3300000 	teq	r0, #0	; 0x0
        27c760:	13a00001 	movne	r0, #1	; 0x1
        27c764:	158d005c 	strne	r0, [sp, #92]
        27c768:	e596004c 	ldr	r0, [r6, #76]
        27c76c:	e5900008 	ldr	r0, [r0, #8]
        27c770:	e0800187 	add	r0, r0, r7, lsl #3
        27c774:	eb62dc99 	bl	1b339e0 <$GetXrMovable(xrd_el_type *)>
        27c778:	e3300000 	teq	r0, #0	; 0x0
        27c77c:	0a000001 	beq	27c788 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0xb0>
        27c780:	e2555001 	subs	r5, r5, #1	; 0x1
        27c784:	5affffef 	bpl	27c748 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x70>
        27c788:	e1a02006 	mov	r2, r6
        27c78c:	e1a01004 	mov	r1, r4
        27c790:	e59b0010 	ldr	r0, [fp, #16]
        27c794:	eb62e0b2 	bl	1b34a64 <$XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)>
        27c798:	e3a01000 	mov	r1, #0	; 0x0
        27c79c:	e58d0060 	str	r0, [sp, #96]
        27c7a0:	e3500000 	cmp	r0, #0	; 0x0
        27c7a4:	e58d1070 	str	r1, [sp, #112]
        27c7a8:	da00014b 	ble	27ccdc <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x604>
        27c7ac:	e59f0298 	ldr	r0, [pc, #298]	; 27ca4c <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x374>
        27c7b0:	e58d0078 	str	r0, [sp, #120]
        27c7b4:	e596068c 	ldr	r0, [r6, #1676]
        27c7b8:	e59d1070 	ldr	r1, [sp, #112]
        27c7bc:	e0811081 	add	r1, r1, r1, lsl #1
        27c7c0:	e0801101 	add	r1, r0, r1, lsl #2
        27c7c4:	e58d1034 	str	r1, [sp, #52]
        27c7c8:	e5d15000 	ldrb	r5, [r1]
        27c7cc:	e5d10001 	ldrb	r0, [r1, #1]
        27c7d0:	e200100f 	and	r1, r0, #15	; 0xf
        27c7d4:	e1a00005 	mov	r0, r5
        27c7d8:	e58d103c 	str	r1, [sp, #60]
        27c7dc:	eb62cbe8 	bl	1b2f784 <$IsLower>
        27c7e0:	e3300000 	teq	r0, #0	; 0x0
        27c7e4:	1a000004 	bne	27c7fc <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x124>
        27c7e8:	e3350027 	teq	r5, #39	; 0x27
        27c7ec:	0a000002 	beq	27c7fc <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x124>
        27c7f0:	e59d005c 	ldr	r0, [sp, #92]
        27c7f4:	e3300000 	teq	r0, #0	; 0x0
        27c7f8:	0a000131 	beq	27ccc4 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5ec>
        27c7fc:	e1a00005 	mov	r0, r5
        27c800:	eb62cbfd 	bl	1b2f7fc <$OSToRec(int)>
        27c804:	e2500020 	subs	r0, r0, #32	; 0x20
        27c808:	4a00012d 	bmi	27ccc4 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5ec>
        27c80c:	e3500082 	cmp	r0, #130	; 0x82
        27c810:	ca00012b 	bgt	27ccc4 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5ec>
        27c814:	e0800180 	add	r0, r0, r0, lsl #3
        27c818:	e0860100 	add	r0, r6, r0, lsl #2
        27c81c:	e2804010 	add	r4, r0, #16	; 0x10
        27c820:	e2844a02 	add	r4, r4, #8192	; 0x2000
        27c824:	e5d40003 	ldrb	r0, [r4, #3]
        27c828:	e3100002 	tst	r0, #2	; 0x2
        27c82c:	1a000124 	bne	27ccc4 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5ec>
        27c830:	e3100001 	tst	r0, #1	; 0x1
        27c834:	1a000027 	bne	27c8d8 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x200>
        27c838:	e59d2038 	ldr	r2, [sp, #56]
        27c83c:	e5c25044 	strb	r5, [r2, #68]
        27c840:	e59d0038 	ldr	r0, [sp, #56]
        27c844:	eb62bf86 	bl	1b2c664 <$CountSym(xrcm_type *)>
        27c848:	e3300000 	teq	r0, #0	; 0x0
        27c84c:	1a00011c 	bne	27ccc4 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5ec>
        27c850:	e59d0038 	ldr	r0, [sp, #56]
        27c854:	e59001c4 	ldr	r0, [r0, #452]
        27c858:	e5c40001 	strb	r0, [r4, #1]
        27c85c:	e31000ff 	tst	r0, #255	; 0xff
        27c860:	03a00001 	moveq	r0, #1	; 0x1
        27c864:	05c40001 	streqb	r0, [r4, #1]
        27c868:	e59d0038 	ldr	r0, [sp, #56]
        27c86c:	e59001c8 	ldr	r0, [r0, #456]
        27c870:	e5c40002 	strb	r0, [r4, #2]
        27c874:	e5d40001 	ldrb	r0, [r4, #1]
        27c878:	e3a01000 	mov	r1, #0	; 0x0
        27c87c:	e5d42002 	ldrb	r2, [r4, #2]
        27c880:	e1520000 	cmp	r2, r0
        27c884:	da000011 	ble	27c8d0 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x1f8>
        27c888:	e59d2038 	ldr	r2, [sp, #56]
        27c88c:	e59221ec 	ldr	r2, [r2, #492]
        27c890:	e7922080 	ldr	r2, [r2, r0, lsl #1]
        27c894:	e1a02842 	mov	r2, r2, asr #16
        27c898:	e3520000 	cmp	r2, #0	; 0x0
        27c89c:	b3a03000 	movlt	r3, #0	; 0x0
        27c8a0:	a1a03002 	movge	r3, r2
        27c8a4:	e0842001 	add	r2, r4, r1
        27c8a8:	e5c23004 	strb	r3, [r2, #4]
        27c8ac:	e59d3038 	ldr	r3, [sp, #56]
        27c8b0:	e0833000 	add	r3, r3, r0
        27c8b4:	e5d3314a 	ldrb	r3, [r3, #330]
        27c8b8:	e5c23014 	strb	r3, [r2, #20]
        27c8bc:	e2800001 	add	r0, r0, #1	; 0x1
        27c8c0:	e2811001 	add	r1, r1, #1	; 0x1
        27c8c4:	e5d42002 	ldrb	r2, [r4, #2]
        27c8c8:	e1520000 	cmp	r2, r0
        27c8cc:	caffffed 	bgt	27c888 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x1b0>
        27c8d0:	e3a00001 	mov	r0, #1	; 0x1
        27c8d4:	e5c40003 	strb	r0, [r4, #3]
        27c8d8:	e5d40001 	ldrb	r0, [r4, #1]
        27c8dc:	e59d3064 	ldr	r3, [sp, #100]
        27c8e0:	e1500003 	cmp	r0, r3
        27c8e4:	a1a07000 	movge	r7, r0
        27c8e8:	b59d7064 	ldrlt	r7, [sp, #100]
        27c8ec:	e59d103c 	ldr	r1, [sp, #60]
        27c8f0:	e3510003 	cmp	r1, #3	; 0x3
        27c8f4:	b3a08000 	movlt	r8, #0	; 0x0
        27c8f8:	a59d1034 	ldrge	r1, [sp, #52]
        27c8fc:	a5d18002 	ldrgeb	r8, [r1, #2]
        27c900:	e59b3010 	ldr	r3, [fp, #16]
        27c904:	e5d30010 	ldrb	r0, [r3, #16]
        27c908:	e3100003 	tst	r0, #3	; 0x3
        27c90c:	13a01005 	movne	r1, #5	; 0x5
        27c910:	1a000017 	bne	27c974 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x29c>
        27c914:	e1a00005 	mov	r0, r5
        27c918:	eb62cb99 	bl	1b2f784 <$IsLower>
        27c91c:	e3300000 	teq	r0, #0	; 0x0
        27c920:	13a01002 	movne	r1, #2	; 0x2
        27c924:	1a000012 	bne	27c974 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x29c>
        27c928:	e1a00005 	mov	r0, r5
        27c92c:	eb62cb95 	bl	1b2f788 <$IsUpper>
        27c930:	e3300000 	teq	r0, #0	; 0x0
        27c934:	13a01003 	movne	r1, #3	; 0x3
        27c938:	1a00000d 	bne	27c974 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x29c>
        27c93c:	e59d0078 	ldr	r0, [sp, #120]
        27c940:	e7d00005 	ldrb	r0, [r0, r5]
        27c944:	e3100020 	tst	r0, #32	; 0x20
        27c948:	13a01004 	movne	r1, #4	; 0x4
        27c94c:	1a000008 	bne	27c974 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x29c>
        27c950:	e335002b 	teq	r5, #43	; 0x2b
        27c954:	1335003d 	teqne	r5, #61	; 0x3d
        27c958:	1335002a 	teqne	r5, #42	; 0x2a
        27c95c:	1335002f 	teqne	r5, #47	; 0x2f
        27c960:	13350040 	teqne	r5, #64	; 0x40
        27c964:	13350028 	teqne	r5, #40	; 0x28
        27c968:	13350029 	teqne	r5, #41	; 0x29
        27c96c:	03a01006 	moveq	r1, #6	; 0x6
        27c970:	13a01001 	movne	r1, #1	; 0x1
        27c974:	e58d1040 	str	r1, [sp, #64]
        27c978:	e59b3010 	ldr	r3, [fp, #16]
        27c97c:	e5d30003 	ldrb	r0, [r3, #3]
        27c980:	e0601180 	rsb	r1, r0, r0, lsl #3
        27c984:	e081000d 	add	r0, r1, sp
        27c988:	e59d1040 	ldr	r1, [sp, #64]
        27c98c:	e7d03001 	ldrb	r3, [r0, r1]
        27c990:	e3a02001 	mov	r2, #1	; 0x1
        27c994:	e58d206c 	str	r2, [sp, #108]
        27c998:	e58d3044 	str	r3, [sp, #68]
        27c99c:	e5d40002 	ldrb	r0, [r4, #2]
        27c9a0:	e1500007 	cmp	r0, r7
        27c9a4:	da0000c3 	ble	27ccb8 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5e0>
        27c9a8:	e20810ff 	and	r1, r8, #255	; 0xff
        27c9ac:	e58d1074 	str	r1, [sp, #116]
        27c9b0:	e0860007 	add	r0, r6, r7
        27c9b4:	e5d013a8 	ldrb	r1, [r0, #936]
        27c9b8:	e58d1068 	str	r1, [sp, #104]
        27c9bc:	e59b0004 	ldr	r0, [fp, #4]
        27c9c0:	e1510000 	cmp	r1, r0
        27c9c4:	da0000b4 	ble	27cc9c <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5c4>
        27c9c8:	e59d1068 	ldr	r1, [sp, #104]
        27c9cc:	e0860101 	add	r0, r6, r1, lsl #2
        27c9d0:	e5b0e058 	ldr	lr, [r0, #88]!
        27c9d4:	e33e0000 	teq	lr, #0	; 0x0
        27c9d8:	0a0000b3 	beq	27ccac <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5d4>
        27c9dc:	e5d40001 	ldrb	r0, [r4, #1]
        27c9e0:	e0470000 	sub	r0, r7, r0
        27c9e4:	e0800004 	add	r0, r0, r4
        27c9e8:	e5d00004 	ldrb	r0, [r0, #4]
        27c9ec:	e2401064 	sub	r1, r0, #100	; 0x64
        27c9f0:	e58d1054 	str	r1, [sp, #84]
        27c9f4:	e59b3010 	ldr	r3, [fp, #16]
        27c9f8:	e593100e 	ldr	r1, [r3, #14]
        27c9fc:	e1a01841 	mov	r1, r1, asr #16
        27ca00:	e59d2054 	ldr	r2, [sp, #84]
        27ca04:	e0812002 	add	r2, r1, r2
        27ca08:	e59e0004 	ldr	r0, [lr, #4]
        27ca0c:	e1520000 	cmp	r2, r0
        27ca10:	ba0000a1 	blt	27cc9c <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5c4>
        27ca14:	e3a02000 	mov	r2, #0	; 0x0
        27ca18:	e58d206c 	str	r2, [sp, #108]
        27ca1c:	e59d2038 	ldr	r2, [sp, #56]
        27ca20:	e0822007 	add	r2, r2, r7
        27ca24:	e5d22244 	ldrb	r2, [r2, #580]
        27ca28:	e3320000 	teq	r2, #0	; 0x0
        27ca2c:	1a000007 	bne	27ca50 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x378>
        27ca30:	e59b3010 	ldr	r3, [fp, #16]
        27ca34:	e5d32010 	ldrb	r2, [r3, #16]
        27ca38:	e3120001 	tst	r2, #1	; 0x1
        27ca3c:	03a02004 	moveq	r2, #4	; 0x4
        27ca40:	13a02001 	movne	r2, #1	; 0x1
        27ca44:	ea000002 	b	27ca54 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x37c>
        27ca48:	0037ad14 	eoreqs	sl, r7, r4, lsl sp
        27ca4c:	0038053c 	eoreqs	r0, r8, ip, lsr r5
        27ca50:	e3a02000 	mov	r2, #0	; 0x0
        27ca54:	e59b300c 	ldr	r3, [fp, #12]
        27ca58:	e0823003 	add	r3, r2, r3
        27ca5c:	e58d3048 	str	r3, [sp, #72]
        27ca60:	e59d2034 	ldr	r2, [sp, #52]
        27ca64:	e5d22008 	ldrb	r2, [r2, #8]
        27ca68:	e59d3064 	ldr	r3, [sp, #100]
        27ca6c:	e0473003 	sub	r3, r7, r3
        27ca70:	e0020293 	mul	r2, r3, r2
        27ca74:	e2822002 	add	r2, r2, #2	; 0x2
        27ca78:	e59d3044 	ldr	r3, [sp, #68]
        27ca7c:	e0833142 	add	r3, r3, r2, asr #2
        27ca80:	e58d304c 	str	r3, [sp, #76]
        27ca84:	e59d2054 	ldr	r2, [sp, #84]
        27ca88:	e0422003 	sub	r2, r2, r3
        27ca8c:	e59d3048 	ldr	r3, [sp, #72]
        27ca90:	e0428003 	sub	r8, r2, r3
        27ca94:	e378007f 	cmn	r8, #127	; 0x7f
        27ca98:	b3e0807e 	mvnlt	r8, #126	; 0x7e
        27ca9c:	ba000001 	blt	27caa8 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x3d0>
        27caa0:	e358007f 	cmp	r8, #127	; 0x7f
        27caa4:	c3a0807f 	movgt	r8, #127	; 0x7f
        27caa8:	e0811008 	add	r1, r1, r8
        27caac:	e58d1058 	str	r1, [sp, #88]
        27cab0:	e1500001 	cmp	r0, r1
        27cab4:	aa000078 	bge	27cc9c <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5c4>
        27cab8:	e59e0008 	ldr	r0, [lr, #8]
        27cabc:	e080c180 	add	ip, r0, r0, lsl #3
        27cac0:	e08c0200 	add	r0, ip, r0, lsl #4
        27cac4:	e08e0100 	add	r0, lr, r0, lsl #2
        27cac8:	e2800014 	add	r0, r0, #20	; 0x14
        27cacc:	e1a09000 	mov	r9, r0
        27cad0:	e59ba010 	ldr	sl, [fp, #16]
        27cad4:	e3a0c008 	mov	ip, #8	; 0x8
        27cad8:	e8ba000e 	ldmia	sl!, {r1, r2, r3}
        27cadc:	e8a9000e 	stmia	r9!, {r1, r2, r3}
        27cae0:	e25cc001 	subs	ip, ip, #1	; 0x1
        27cae4:	1afffffb 	bne	27cad8 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x400>
        27cae8:	e89a0008 	ldmia	sl, {r3}
        27caec:	e8890008 	stmia	r9, {r3}
        27caf0:	e5c05000 	strb	r5, [r0]
        27caf4:	e5d41001 	ldrb	r1, [r4, #1]
        27caf8:	e0471001 	sub	r1, r7, r1
        27cafc:	e0811004 	add	r1, r1, r4
        27cb00:	e5d11014 	ldrb	r1, [r1, #20]
        27cb04:	e5c0100a 	strb	r1, [r0, #10]
        27cb08:	e59d1040 	ldr	r1, [sp, #64]
        27cb0c:	e5c01003 	strb	r1, [r0, #3]
        27cb10:	e59d1054 	ldr	r1, [sp, #84]
        27cb14:	e5c0100c 	strb	r1, [r0, #12]
        27cb18:	e59d1058 	ldr	r1, [sp, #88]
        27cb1c:	e5c0100f 	strb	r1, [r0, #15]
        27cb20:	e1a01441 	mov	r1, r1, asr #8
        27cb24:	e5c0100e 	strb	r1, [r0, #14]
        27cb28:	e59d304c 	ldr	r3, [sp, #76]
        27cb2c:	e5c03008 	strb	r3, [r0, #8]
        27cb30:	e59d3048 	ldr	r3, [sp, #72]
        27cb34:	e5c03009 	strb	r3, [r0, #9]
        27cb38:	e5d02013 	ldrb	r2, [r0, #19]
        27cb3c:	e59d1034 	ldr	r1, [sp, #52]
        27cb40:	e5d11001 	ldrb	r1, [r1, #1]
        27cb44:	e2011080 	and	r1, r1, #128	; 0x80
        27cb48:	e1821001 	orr	r1, r2, r1
        27cb4c:	e5c01013 	strb	r1, [r0, #19]
        27cb50:	e59d1034 	ldr	r1, [sp, #52]
        27cb54:	e5911004 	ldr	r1, [r1, #4]
        27cb58:	e5801018 	str	r1, [r0, #24]
        27cb5c:	e59d1074 	ldr	r1, [sp, #116]
        27cb60:	e5c01015 	strb	r1, [r0, #21]
        27cb64:	e59d1034 	ldr	r1, [sp, #52]
        27cb68:	e5d11003 	ldrb	r1, [r1, #3]
        27cb6c:	e5c01016 	strb	r1, [r0, #22]
        27cb70:	e59d103c 	ldr	r1, [sp, #60]
        27cb74:	e5c01014 	strb	r1, [r0, #20]
        27cb78:	e5d01011 	ldrb	r1, [r0, #17]
        27cb7c:	e0811000 	add	r1, r1, r0
        27cb80:	e5c1501c 	strb	r5, [r1, #28]
        27cb84:	e5d01011 	ldrb	r1, [r0, #17]
        27cb88:	e0811000 	add	r1, r1, r0
        27cb8c:	e5c18034 	strb	r8, [r1, #52]
        27cb90:	e59d1068 	ldr	r1, [sp, #104]
        27cb94:	e59b2004 	ldr	r2, [fp, #4]
        27cb98:	e0411002 	sub	r1, r1, r2
        27cb9c:	e5d0200a 	ldrb	r2, [r0, #10]
        27cba0:	e1811202 	orr	r1, r1, r2, lsl #4
        27cba4:	e5d02011 	ldrb	r2, [r0, #17]
        27cba8:	e0822000 	add	r2, r2, r0
        27cbac:	e5c2104c 	strb	r1, [r2, #76]
        27cbb0:	e5d01011 	ldrb	r1, [r0, #17]
        27cbb4:	e3510016 	cmp	r1, #22	; 0x16
        27cbb8:	aa000004 	bge	27cbd0 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x4f8>
        27cbbc:	e5d02012 	ldrb	r2, [r0, #18]
        27cbc0:	e2822001 	add	r2, r2, #1	; 0x1
        27cbc4:	e5c02012 	strb	r2, [r0, #18]
        27cbc8:	e2811001 	add	r1, r1, #1	; 0x1
        27cbcc:	e5c01011 	strb	r1, [r0, #17]
        27cbd0:	e59d1058 	ldr	r1, [sp, #88]
        27cbd4:	e59e0000 	ldr	r0, [lr]
        27cbd8:	e1510000 	cmp	r1, r0
        27cbdc:	c59d1058 	ldrgt	r1, [sp, #88]
        27cbe0:	c58e1000 	strgt	r1, [lr]
        27cbe4:	e59e000c 	ldr	r0, [lr, #12]
        27cbe8:	e2800001 	add	r0, r0, #1	; 0x1
        27cbec:	e58e000c 	str	r0, [lr, #12]
        27cbf0:	e59e1010 	ldr	r1, [lr, #16]
        27cbf4:	e596200c 	ldr	r2, [r6, #12]
        27cbf8:	e1510002 	cmp	r1, r2
        27cbfc:	b2811001 	addlt	r1, r1, #1	; 0x1
        27cc00:	b58e1010 	strlt	r1, [lr, #16]
        27cc04:	e596100c 	ldr	r1, [r6, #12]
        27cc08:	e1500001 	cmp	r0, r1
        27cc0c:	b58e0008 	strlt	r0, [lr, #8]
        27cc10:	b3a00000 	movlt	r0, #0	; 0x0
        27cc14:	ba00001f 	blt	27cc98 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5c0>
        27cc18:	e3a01000 	mov	r1, #0	; 0x0
        27cc1c:	e1a02001 	mov	r2, r1
        27cc20:	e28e3014 	add	r3, lr, #20	; 0x14
        27cc24:	e59e0000 	ldr	r0, [lr]
        27cc28:	e59dc050 	ldr	ip, [sp, #80]
        27cc2c:	e040000c 	sub	r0, r0, ip
        27cc30:	e593c00e 	ldr	ip, [r3, #14]
        27cc34:	e1a0c84c 	mov	ip, ip, asr #16
        27cc38:	e59e9010 	ldr	r9, [lr, #16]
        27cc3c:	e3590000 	cmp	r9, #0	; 0x0
        27cc40:	da00000b 	ble	27cc74 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x59c>
        27cc44:	e593800e 	ldr	r8, [r3, #14]
        27cc48:	e1a08848 	mov	r8, r8, asr #16
        27cc4c:	e1580000 	cmp	r8, r0
        27cc50:	b1a02001 	movlt	r2, r1
        27cc54:	ba000006 	blt	27cc74 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x59c>
        27cc58:	e158000c 	cmp	r8, ip
        27cc5c:	b1a0c008 	movlt	ip, r8
        27cc60:	b1a02001 	movlt	r2, r1
        27cc64:	e2811001 	add	r1, r1, #1	; 0x1
        27cc68:	e2833064 	add	r3, r3, #100	; 0x64
        27cc6c:	e1590001 	cmp	r9, r1
        27cc70:	cafffff3 	bgt	27cc44 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x56c>
        27cc74:	e58e2008 	str	r2, [lr, #8]
        27cc78:	e0821182 	add	r1, r2, r2, lsl #3
        27cc7c:	e0811202 	add	r1, r1, r2, lsl #4
        27cc80:	e08e1101 	add	r1, lr, r1, lsl #2
        27cc84:	e5911022 	ldr	r1, [r1, #34]
        27cc88:	e1a01841 	mov	r1, r1, asr #16
        27cc8c:	e58e1004 	str	r1, [lr, #4]
        27cc90:	e1510000 	cmp	r1, r0
        27cc94:	aa000000 	bge	27cc9c <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5c4>
        27cc98:	e5ae0004 	str	r0, [lr, #4]!
        27cc9c:	e2877001 	add	r7, r7, #1	; 0x1
        27cca0:	e5d40002 	ldrb	r0, [r4, #2]
        27cca4:	e1500007 	cmp	r0, r7
        27cca8:	caffff40 	bgt	27c9b0 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x2d8>
        27ccac:	e59d206c 	ldr	r2, [sp, #108]
        27ccb0:	e3320000 	teq	r2, #0	; 0x0
        27ccb4:	0a000002 	beq	27ccc4 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0x5ec>
        27ccb8:	e5d40003 	ldrb	r0, [r4, #3]
        27ccbc:	e3800002 	orr	r0, r0, #2	; 0x2
        27ccc0:	e5c40003 	strb	r0, [r4, #3]
        27ccc4:	e59d1070 	ldr	r1, [sp, #112]
        27ccc8:	e2811001 	add	r1, r1, #1	; 0x1
        27cccc:	e58d1070 	str	r1, [sp, #112]
        27ccd0:	e59d0060 	ldr	r0, [sp, #96]
        27ccd4:	e1510000 	cmp	r1, r0
        27ccd8:	bafffeb5 	blt	27c7b4 <XrlvDevelopCell__FiN21P18xrlv_var_data_typeP14xrlv_data_type+0xdc>
        27ccdc:	e3a00000 	mov	r0, #0	; 0x0
        27cce0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvSortXrlvPos(int, xrlv_data_type *)
 * Address: 0027cce4
 */
XrlvSortXrlvPos(int, xrlv_data_type *) {
    /*
        27cce4:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        27cce8:	e0810100 	add	r0, r1, r0, lsl #2
        27ccec:	e5900058 	ldr	r0, [r0, #88]
        27ccf0:	e2812f8a 	add	r2, r1, #552	; 0x228
        27ccf4:	e2822b01 	add	r2, r2, #1024	; 0x400
        27ccf8:	e3a03000 	mov	r3, #0	; 0x0
        27ccfc:	e590c010 	ldr	ip, [r0, #16]
        27cd00:	e35c0000 	cmp	ip, #0	; 0x0
        27cd04:	da000005 	ble	27cd20 <XrlvSortXrlvPos(int, xrlv_data_type *)+0x3c>
        27cd08:	e081e003 	add	lr, r1, r3
        27cd0c:	e5ce3628 	strb	r3, [lr, #1576]
        27cd10:	e2833001 	add	r3, r3, #1	; 0x1
        27cd14:	e590c010 	ldr	ip, [r0, #16]
        27cd18:	e15c0003 	cmp	ip, r3
        27cd1c:	cafffff9 	bgt	27cd08 <XrlvSortXrlvPos(int, xrlv_data_type *)+0x24>
        27cd20:	e3a01001 	mov	r1, #1	; 0x1
        27cd24:	e3a03001 	mov	r3, #1	; 0x1
        27cd28:	e590c010 	ldr	ip, [r0, #16]
        27cd2c:	e35c0001 	cmp	ip, #1	; 0x1
        27cd30:	da000016 	ble	27cd90 <XrlvSortXrlvPos(int, xrlv_data_type *)+0xac>
        27cd34:	e0825001 	add	r5, r2, r1
        27cd38:	e5554001 	ldrb	r4, [r5, -#1]
        27cd3c:	e084e184 	add	lr, r4, r4, lsl #3
        27cd40:	e08ee204 	add	lr, lr, r4, lsl #4
        27cd44:	e080c10e 	add	ip, r0, lr, lsl #2
        27cd48:	e28c6014 	add	r6, ip, #20	; 0x14
        27cd4c:	e7d2e001 	ldrb	lr, [r2, r1]
        27cd50:	e08e718e 	add	r7, lr, lr, lsl #3
        27cd54:	e087720e 	add	r7, r7, lr, lsl #4
        27cd58:	e080c107 	add	ip, r0, r7, lsl #2
        27cd5c:	e59cc022 	ldr	ip, [ip, #34]
        27cd60:	e1a0c84c 	mov	ip, ip, asr #16
        27cd64:	e596600e 	ldr	r6, [r6, #14]
        27cd68:	e15c0846 	cmp	ip, r6, asr #16
        27cd6c:	c545e001 	strgtb	lr, [r5, -#1]
        27cd70:	c7c24001 	strgtb	r4, [r2, r1]
        27cd74:	c3a03000 	movgt	r3, #0	; 0x0
        27cd78:	e2811001 	add	r1, r1, #1	; 0x1
        27cd7c:	e590c010 	ldr	ip, [r0, #16]
        27cd80:	e15c0001 	cmp	ip, r1
        27cd84:	caffffea 	bgt	27cd34 <XrlvSortXrlvPos(int, xrlv_data_type *)+0x50>
        27cd88:	e3330000 	teq	r3, #0	; 0x0
        27cd8c:	0affffe3 	beq	27cd20 <XrlvSortXrlvPos(int, xrlv_data_type *)+0x3c>
        27cd90:	e5d21000 	ldrb	r1, [r2]
        27cd94:	e081c181 	add	ip, r1, r1, lsl #3
        27cd98:	e08c1201 	add	r1, ip, r1, lsl #4
        27cd9c:	e0801101 	add	r1, r0, r1, lsl #2
        27cda0:	e5911022 	ldr	r1, [r1, #34]
        27cda4:	e1a01841 	mov	r1, r1, asr #16
        27cda8:	e5902000 	ldr	r2, [r0]
        27cdac:	e1510002 	cmp	r1, r2
        27cdb0:	b5801000 	strlt	r1, [r0]
        27cdb4:	e3a00000 	mov	r0, #0	; 0x0
        27cdb8:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: XrlvTrimXrlvPos(int, xrlv_data_type *)
 * Address: 0027cdbc
 */
XrlvTrimXrlvPos(int, xrlv_data_type *) {
    /*
        27cdbc:	e1a0c00d 	mov	ip, sp
        27cdc0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        27cdc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        27cdc8:	e1a05000 	mov	r5, r0
        27cdcc:	e1a04001 	mov	r4, r1
        27cdd0:	e5916010 	ldr	r6, [r1, #16]
        27cdd4:	e1a01086 	mov	r1, r6, lsl #1
        27cdd8:	e3a00003 	mov	r0, #3	; 0x3
        27cddc:	eb64d6d7 	bl	1bb2940 <$__rt_sdiv>
        27cde0:	e1a01000 	mov	r1, r0
        27cde4:	e2840f8a 	add	r0, r4, #552	; 0x228
        27cde8:	e2800b01 	add	r0, r0, #1024	; 0x400
        27cdec:	e0842105 	add	r2, r4, r5, lsl #2
        27cdf0:	e5922058 	ldr	r2, [r2, #88]
        27cdf4:	e5924010 	ldr	r4, [r2, #16]
        27cdf8:	e3540002 	cmp	r4, #2	; 0x2
        27cdfc:	ba00004f 	blt	27cf40 <XrlvTrimXrlvPos(int, xrlv_data_type *)+0x184>
        27ce00:	e3a03000 	mov	r3, #0	; 0x0
        27ce04:	e1a0e003 	mov	lr, r3
        27ce08:	e1a05003 	mov	r5, r3
        27ce0c:	e3540000 	cmp	r4, #0	; 0x0
        27ce10:	da000034 	ble	27cee8 <XrlvTrimXrlvPos(int, xrlv_data_type *)+0x12c>
        27ce14:	e7d07003 	ldrb	r7, [r0, r3]
        27ce18:	e087c187 	add	ip, r7, r7, lsl #3
        27ce1c:	e08c7207 	add	r7, ip, r7, lsl #4
        27ce20:	e082c107 	add	ip, r2, r7, lsl #2
        27ce24:	e5dc7024 	ldrb	r7, [ip, #36]
        27ce28:	e3170008 	tst	r7, #8	; 0x8
        27ce2c:	0a000004 	beq	27ce44 <XrlvTrimXrlvPos(int, xrlv_data_type *)+0x88>
        27ce30:	e59cc022 	ldr	ip, [ip, #34]
        27ce34:	e1a0c84c 	mov	ip, ip, asr #16
        27ce38:	e15c000e 	cmp	ip, lr
        27ce3c:	c1a05003 	movgt	r5, r3
        27ce40:	c1a0e00c 	movgt	lr, ip
        27ce44:	e2833001 	add	r3, r3, #1	; 0x1
        27ce48:	e1540003 	cmp	r4, r3
        27ce4c:	cafffff0 	bgt	27ce14 <XrlvTrimXrlvPos(int, xrlv_data_type *)+0x58>
        27ce50:	e33e0000 	teq	lr, #0	; 0x0
        27ce54:	0a000023 	beq	27cee8 <XrlvTrimXrlvPos(int, xrlv_data_type *)+0x12c>
        27ce58:	e5923000 	ldr	r3, [r2]
        27ce5c:	e0431001 	sub	r1, r3, r1
        27ce60:	e151000e 	cmp	r1, lr
        27ce64:	c3a01000 	movgt	r1, #0	; 0x0
        27ce68:	c3540000 	cmpgt	r4, #0	; 0x0
        27ce6c:	da00001d 	ble	27cee8 <XrlvTrimXrlvPos(int, xrlv_data_type *)+0x12c>
        27ce70:	e7d03001 	ldrb	r3, [r0, r1]
        27ce74:	e083c183 	add	ip, r3, r3, lsl #3
        27ce78:	e08c3203 	add	r3, ip, r3, lsl #4
        27ce7c:	e0823103 	add	r3, r2, r3, lsl #2
        27ce80:	e2833014 	add	r3, r3, #20	; 0x14
        27ce84:	e5d3c010 	ldrb	ip, [r3, #16]
        27ce88:	e31c0008 	tst	ip, #8	; 0x8
        27ce8c:	0a000011 	beq	27ced8 <XrlvTrimXrlvPos(int, xrlv_data_type *)+0x11c>
        27ce90:	e5d3c011 	ldrb	ip, [r3, #17]
        27ce94:	e08cc003 	add	ip, ip, r3
        27ce98:	e5dce033 	ldrb	lr, [ip, #51]
        27ce9c:	e1a0ec0e 	mov	lr, lr, lsl #24
        27cea0:	e1a0ec4e 	mov	lr, lr, asr #24
        27cea4:	e5d34008 	ldrb	r4, [r3, #8]
        27cea8:	e1a04c04 	mov	r4, r4, lsl #24
        27ceac:	e08eec44 	add	lr, lr, r4, asr #24
        27ceb0:	e35e007f 	cmp	lr, #127	; 0x7f
        27ceb4:	c3a0e07f 	movgt	lr, #127	; 0x7f
        27ceb8:	e5cce033 	strb	lr, [ip, #51]
        27cebc:	e593c00e 	ldr	ip, [r3, #14]
        27cec0:	e1a0c82c 	mov	ip, ip, lsr #16
        27cec4:	e5d3e008 	ldrb	lr, [r3, #8]
        27cec8:	e08cc00e 	add	ip, ip, lr
        27cecc:	e5c3c00f 	strb	ip, [r3, #15]
        27ced0:	e1a0c44c 	mov	ip, ip, asr #8
        27ced4:	e5c3c00e 	strb	ip, [r3, #14]
        27ced8:	e2811001 	add	r1, r1, #1	; 0x1
        27cedc:	e5923010 	ldr	r3, [r2, #16]
        27cee0:	e1530001 	cmp	r3, r1
        27cee4:	caffffe1 	bgt	27ce70 <XrlvTrimXrlvPos(int, xrlv_data_type *)+0xb4>
        27cee8:	e3a01000 	mov	r1, #0	; 0x0
        27ceec:	e5923010 	ldr	r3, [r2, #16]
        27cef0:	e3530000 	cmp	r3, #0	; 0x0
        27cef4:	da000010 	ble	27cf3c <XrlvTrimXrlvPos(int, xrlv_data_type *)+0x180>
        27cef8:	e592c000 	ldr	ip, [r2]
        27cefc:	e04ce006 	sub	lr, ip, r6
        27cf00:	e7d04001 	ldrb	r4, [r0, r1]
        27cf04:	e084c184 	add	ip, r4, r4, lsl #3
        27cf08:	e08c4204 	add	r4, ip, r4, lsl #4
        27cf0c:	e082c104 	add	ip, r2, r4, lsl #2
        27cf10:	e59cc022 	ldr	ip, [ip, #34]
        27cf14:	e15e084c 	cmp	lr, ip, asr #16
        27cf18:	da000004 	ble	27cf30 <XrlvTrimXrlvPos(int, xrlv_data_type *)+0x174>
        27cf1c:	e1550001 	cmp	r5, r1
        27cf20:	a7d03005 	ldrgeb	r3, [r0, r5]
        27cf24:	a7c03001 	strgeb	r3, [r0, r1]
        27cf28:	a2811001 	addge	r1, r1, #1	; 0x1
        27cf2c:	ea000002 	b	27cf3c <XrlvTrimXrlvPos(int, xrlv_data_type *)+0x180>
        27cf30:	e2811001 	add	r1, r1, #1	; 0x1
        27cf34:	e1530001 	cmp	r3, r1
        27cf38:	cafffff0 	bgt	27cf00 <XrlvTrimXrlvPos(int, xrlv_data_type *)+0x144>
        27cf3c:	e5821010 	str	r1, [r2, #16]
        27cf40:	e5b20010 	ldr	r0, [r2, #16]!
        27cf44:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvGuessFutureGws(int, xrlv_data_type *)
 * Address: 0027cf48
 */
XrlvGuessFutureGws(int, xrlv_data_type *) {
    /*
        27cf48:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        27cf4c:	e5914010 	ldr	r4, [r1, #16]
        27cf50:	e3540000 	cmp	r4, #0	; 0x0
        27cf54:	b2844003 	addlt	r4, r4, #3	; 0x3
        27cf58:	e1a04144 	mov	r4, r4, asr #2
        27cf5c:	e3a0c000 	mov	ip, #0	; 0x0
        27cf60:	ea00000c 	b	27cf98 <XrlvGuessFutureGws(int, xrlv_data_type *)+0x50>
        27cf64:	e04c3004 	sub	r3, ip, r4
        27cf68:	e592e000 	ldr	lr, [r2]
        27cf6c:	e153000e 	cmp	r3, lr
        27cf70:	c5823000 	strgt	r3, [r2]
        27cf74:	e5925004 	ldr	r5, [r2, #4]
        27cf78:	e591e010 	ldr	lr, [r1, #16]
        27cf7c:	e5923000 	ldr	r3, [r2]
        27cf80:	e043e00e 	sub	lr, r3, lr
        27cf84:	e155000e 	cmp	r5, lr
        27cf88:	b5a2e004 	strlt	lr, [r2, #4]!
        27cf8c:	e3530000 	cmp	r3, #0	; 0x0
        27cf90:	c1a0c003 	movgt	ip, r3
        27cf94:	e2800001 	add	r0, r0, #1	; 0x1
        27cf98:	e0812100 	add	r2, r1, r0, lsl #2
        27cf9c:	e5922058 	ldr	r2, [r2, #88]
        27cfa0:	e3320000 	teq	r2, #0	; 0x0
        27cfa4:	08bd8030 	ldmeqia	sp!, {r4, r5, pc}
        27cfa8:	e5913000 	ldr	r3, [r1]
        27cfac:	e1500003 	cmp	r0, r3
        27cfb0:	baffffeb 	blt	27cf64 <XrlvGuessFutureGws(int, xrlv_data_type *)+0x1c>
        27cfb4:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: XrlvCHLXrlvPos(int, xrlv_data_type *)
 * Address: 0027cfb8
 */
XrlvCHLXrlvPos(int, xrlv_data_type *) {
    /*
        27cfb8:	e1a0c00d 	mov	ip, sp
        27cfbc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27cfc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        27cfc4:	e1a05000 	mov	r5, r0
        27cfc8:	e1a04001 	mov	r4, r1
        27cfcc:	e24dd064 	sub	sp, sp, #100	; 0x64
        27cfd0:	e5910048 	ldr	r0, [r1, #72]
        27cfd4:	e59020d8 	ldr	r2, [r0, #216]
        27cfd8:	e1a02842 	mov	r2, r2, asr #16
        27cfdc:	e58d2054 	str	r2, [sp, #84]
        27cfe0:	e0842105 	add	r2, r4, r5, lsl #2
        27cfe4:	e5922058 	ldr	r2, [r2, #88]
        27cfe8:	e58d2004 	str	r2, [sp, #4]
        27cfec:	e5902030 	ldr	r2, [r0, #48]
        27cff0:	e58d2000 	str	r2, [sp]
        27cff4:	e59d1004 	ldr	r1, [sp, #4]
        27cff8:	e5911010 	ldr	r1, [r1, #16]
        27cffc:	e3310000 	teq	r1, #0	; 0x0
        27d000:	13350000 	teqne	r5, #0	; 0x0
        27d004:	03a00001 	moveq	r0, #1	; 0x1
        27d008:	0a00033b 	beq	27dcfc <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xd44>
        27d00c:	eb62da64 	bl	1b339a4 <$GetBaseBord(rc_type *)>
        27d010:	e3a01000 	mov	r1, #0	; 0x0
        27d014:	e58d0058 	str	r0, [sp, #88]
        27d018:	e58d1048 	str	r1, [sp, #72]
        27d01c:	e5940048 	ldr	r0, [r4, #72]
        27d020:	e59010ea 	ldr	r1, [r0, #234]
        27d024:	e1b01841 	movs	r1, r1, asr #16
        27d028:	0a000007 	beq	27d04c <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x94>
        27d02c:	e59020f0 	ldr	r2, [r0, #240]
        27d030:	e1a02842 	mov	r2, r2, asr #16
        27d034:	e3520046 	cmp	r2, #70	; 0x46
        27d038:	a1a01081 	movge	r1, r1, lsl #1
        27d03c:	a58d1044 	strge	r1, [sp, #68]
        27d040:	a59010ec 	ldrge	r1, [r0, #236]
        27d044:	a1a01841 	movge	r1, r1, asr #16
        27d048:	aa00000a 	bge	27d078 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xc0>
        27d04c:	e59010e2 	ldr	r1, [r0, #226]
        27d050:	e1b01841 	movs	r1, r1, asr #16
        27d054:	0a000014 	beq	27d0ac <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xf4>
        27d058:	e59020e8 	ldr	r2, [r0, #232]
        27d05c:	e1a02842 	mov	r2, r2, asr #16
        27d060:	e3520046 	cmp	r2, #70	; 0x46
        27d064:	ba000010 	blt	27d0ac <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xf4>
        27d068:	e1a01081 	mov	r1, r1, lsl #1
        27d06c:	e58d1044 	str	r1, [sp, #68]
        27d070:	e59010e4 	ldr	r1, [r0, #228]
        27d074:	e1a01841 	mov	r1, r1, asr #16
        27d078:	e0811101 	add	r1, r1, r1, lsl #2
        27d07c:	e1b01081 	movs	r1, r1, lsl #1
        27d080:	0a000009 	beq	27d0ac <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xf4>
        27d084:	e59000dc 	ldr	r0, [r0, #220]
        27d088:	e59d2054 	ldr	r2, [sp, #84]
        27d08c:	e0820840 	add	r0, r2, r0, asr #16
        27d090:	e0800fa0 	add	r0, r0, r0, lsr #31
        27d094:	e06200c0 	rsb	r0, r2, r0, asr #1
        27d098:	e59d2058 	ldr	r2, [sp, #88]
        27d09c:	e0100092 	muls	r0, r2, r0
        27d0a0:	4280007f 	addmi	r0, r0, #127	; 0x7f
        27d0a4:	e04113c0 	sub	r1, r1, r0, asr #7
        27d0a8:	e58d1048 	str	r1, [sp, #72]
        27d0ac:	e3a01000 	mov	r1, #0	; 0x0
        27d0b0:	e58d105c 	str	r1, [sp, #92]
        27d0b4:	e59d1004 	ldr	r1, [sp, #4]
        27d0b8:	e5b10010 	ldr	r0, [r1, #16]!
        27d0bc:	e3500000 	cmp	r0, #0	; 0x0
        27d0c0:	da00030c 	ble	27dcf8 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xd40>
        27d0c4:	e0840005 	add	r0, r4, r5
        27d0c8:	e58d0060 	str	r0, [sp, #96]
        27d0cc:	e59d105c 	ldr	r1, [sp, #92]
        27d0d0:	e0810181 	add	r0, r1, r1, lsl #3
        27d0d4:	e0800201 	add	r0, r0, r1, lsl #4
        27d0d8:	e59d1004 	ldr	r1, [sp, #4]
        27d0dc:	e0810100 	add	r0, r1, r0, lsl #2
        27d0e0:	e2805014 	add	r5, r0, #20	; 0x14
        27d0e4:	e3a0a000 	mov	sl, #0	; 0x0
        27d0e8:	e3a06000 	mov	r6, #0	; 0x0
        27d0ec:	e58d6008 	str	r6, [sp, #8]
        27d0f0:	e1a08006 	mov	r8, r6
        27d0f4:	e5d50001 	ldrb	r0, [r5, #1]
        27d0f8:	e0800004 	add	r0, r0, r4
        27d0fc:	e5d00420 	ldrb	r0, [r0, #1056]
        27d100:	e2801001 	add	r1, r0, #1	; 0x1
        27d104:	e59d0060 	ldr	r0, [sp, #96]
        27d108:	e5d00420 	ldrb	r0, [r0, #1056]
        27d10c:	e28d300c 	add	r3, sp, #12	; 0xc
        27d110:	e92d0008 	stmdb	sp!, {r3}
        27d114:	e2802001 	add	r2, r0, #1	; 0x1
        27d118:	e594304c 	ldr	r3, [r4, #76]
        27d11c:	e5d50000 	ldrb	r0, [r5]
        27d120:	eb62da26 	bl	1b339c0 <$GetSymBox__FUciT2P11xrdata_typeP5_RECT>
        27d124:	e28dd004 	add	sp, sp, #4	; 0x4
        27d128:	e3300000 	teq	r0, #0	; 0x0
        27d12c:	1a000031 	bne	27d1f8 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x240>
        27d130:	e59d0010 	ldr	r0, [sp, #16]
        27d134:	e1a00840 	mov	r0, r0, asr #16
        27d138:	e59d100c 	ldr	r1, [sp, #12]
        27d13c:	e0800841 	add	r0, r0, r1, asr #16
        27d140:	e0800fa0 	add	r0, r0, r0, lsr #31
        27d144:	e59d1054 	ldr	r1, [sp, #84]
        27d148:	e06100c0 	rsb	r0, r1, r0, asr #1
        27d14c:	e59d1058 	ldr	r1, [sp, #88]
        27d150:	e0100091 	muls	r0, r1, r0
        27d154:	4280007f 	addmi	r0, r0, #127	; 0x7f
        27d158:	e1a003c0 	mov	r0, r0, asr #7
        27d15c:	e59d100c 	ldr	r1, [sp, #12]
        27d160:	e1a00800 	mov	r0, r0, lsl #16
        27d164:	e1a00840 	mov	r0, r0, asr #16
        27d168:	e0411000 	sub	r1, r1, r0
        27d16c:	e5cd100f 	strb	r1, [sp, #15]
        27d170:	e1a01441 	mov	r1, r1, asr #8
        27d174:	e5cd100e 	strb	r1, [sp, #14]
        27d178:	e59d1010 	ldr	r1, [sp, #16]
        27d17c:	e0410000 	sub	r0, r1, r0
        27d180:	e5cd0013 	strb	r0, [sp, #19]
        27d184:	e1a00440 	mov	r0, r0, asr #8
        27d188:	e5cd0012 	strb	r0, [sp, #18]
        27d18c:	e5d5100a 	ldrb	r1, [r5, #10]
        27d190:	e59d2000 	ldr	r2, [sp]
        27d194:	e5d50000 	ldrb	r0, [r5]
        27d198:	eb62da0a 	bl	1b339c8 <$GetVarPosSize__FUcT1Pv>
        27d19c:	e1a08000 	mov	r8, r0
        27d1a0:	e59d1012 	ldr	r1, [sp, #18]
        27d1a4:	e1a01841 	mov	r1, r1, asr #16
        27d1a8:	e59d000e 	ldr	r0, [sp, #14]
        27d1ac:	e0410840 	sub	r0, r1, r0, asr #16
        27d1b0:	e3a0100f 	mov	r1, #15	; 0xf
        27d1b4:	e0011248 	and	r1, r1, r8, asr #4
        27d1b8:	e0120091 	muls	r2, r1, r0
        27d1bc:	4282200f 	addmi	r2, r2, #15	; 0xf
        27d1c0:	e59d100c 	ldr	r1, [sp, #12]
        27d1c4:	e0811242 	add	r1, r1, r2, asr #4
        27d1c8:	e1a02801 	mov	r2, r1, lsl #16
        27d1cc:	e1a02842 	mov	r2, r2, asr #16
        27d1d0:	e208100f 	and	r1, r8, #15	; 0xf
        27d1d4:	e2811001 	add	r1, r1, #1	; 0x1
        27d1d8:	e0100091 	muls	r0, r1, r0
        27d1dc:	e58d2030 	str	r2, [sp, #48]
        27d1e0:	4280000f 	addmi	r0, r0, #15	; 0xf
        27d1e4:	e59d100c 	ldr	r1, [sp, #12]
        27d1e8:	e0810240 	add	r0, r1, r0, asr #4
        27d1ec:	e1a02800 	mov	r2, r0, lsl #16
        27d1f0:	e1a02842 	mov	r2, r2, asr #16
        27d1f4:	e58d2028 	str	r2, [sp, #40]
        27d1f8:	e5d50011 	ldrb	r0, [r5, #17]
        27d1fc:	e3500001 	cmp	r0, #1	; 0x1
        27d200:	da00009a 	ble	27d470 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x4b8>
        27d204:	e2407002 	sub	r7, r0, #2	; 0x2
        27d208:	e0850007 	add	r0, r5, r7
        27d20c:	e5d0004c 	ldrb	r0, [r0, #76]
        27d210:	e3300000 	teq	r0, #0	; 0x0
        27d214:	02477001 	subeq	r7, r7, #1	; 0x1
        27d218:	e3570000 	cmp	r7, #0	; 0x0
        27d21c:	ba000047 	blt	27d340 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x388>
        27d220:	e5d52001 	ldrb	r2, [r5, #1]
        27d224:	e0850007 	add	r0, r5, r7
        27d228:	e1a09000 	mov	r9, r0
        27d22c:	e5d0104c 	ldrb	r1, [r0, #76]
        27d230:	e201100f 	and	r1, r1, #15	; 0xf
        27d234:	e0421001 	sub	r1, r2, r1
        27d238:	e0811004 	add	r1, r1, r4
        27d23c:	e5d11420 	ldrb	r1, [r1, #1056]
        27d240:	e2811001 	add	r1, r1, #1	; 0x1
        27d244:	e0822004 	add	r2, r2, r4
        27d248:	e5d22420 	ldrb	r2, [r2, #1056]
        27d24c:	e28d3014 	add	r3, sp, #20	; 0x14
        27d250:	e92d0008 	stmdb	sp!, {r3}
        27d254:	e2822001 	add	r2, r2, #1	; 0x1
        27d258:	e594304c 	ldr	r3, [r4, #76]
        27d25c:	e5d0001c 	ldrb	r0, [r0, #28]
        27d260:	eb62d9d6 	bl	1b339c0 <$GetSymBox__FUciT2P11xrdata_typeP5_RECT>
        27d264:	e28dd004 	add	sp, sp, #4	; 0x4
        27d268:	e3300000 	teq	r0, #0	; 0x0
        27d26c:	1a000033 	bne	27d340 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x388>
        27d270:	e59d0018 	ldr	r0, [sp, #24]
        27d274:	e1a00840 	mov	r0, r0, asr #16
        27d278:	e59d1014 	ldr	r1, [sp, #20]
        27d27c:	e0800841 	add	r0, r0, r1, asr #16
        27d280:	e0800fa0 	add	r0, r0, r0, lsr #31
        27d284:	e59d1054 	ldr	r1, [sp, #84]
        27d288:	e06100c0 	rsb	r0, r1, r0, asr #1
        27d28c:	e59d1058 	ldr	r1, [sp, #88]
        27d290:	e0100091 	muls	r0, r1, r0
        27d294:	4280007f 	addmi	r0, r0, #127	; 0x7f
        27d298:	e1a003c0 	mov	r0, r0, asr #7
        27d29c:	e59d1014 	ldr	r1, [sp, #20]
        27d2a0:	e1a00800 	mov	r0, r0, lsl #16
        27d2a4:	e1a00840 	mov	r0, r0, asr #16
        27d2a8:	e0411000 	sub	r1, r1, r0
        27d2ac:	e5cd1017 	strb	r1, [sp, #23]
        27d2b0:	e1a01441 	mov	r1, r1, asr #8
        27d2b4:	e5cd1016 	strb	r1, [sp, #22]
        27d2b8:	e59d1018 	ldr	r1, [sp, #24]
        27d2bc:	e0410000 	sub	r0, r1, r0
        27d2c0:	e5cd001b 	strb	r0, [sp, #27]
        27d2c4:	e1a00440 	mov	r0, r0, asr #8
        27d2c8:	e5cd001a 	strb	r0, [sp, #26]
        27d2cc:	e5d9004c 	ldrb	r0, [r9, #76]
        27d2d0:	e1a00220 	mov	r0, r0, lsr #4
        27d2d4:	e20010ff 	and	r1, r0, #255	; 0xff
        27d2d8:	e5d9001c 	ldrb	r0, [r9, #28]
        27d2dc:	e59d2000 	ldr	r2, [sp]
        27d2e0:	eb62d9b8 	bl	1b339c8 <$GetVarPosSize__FUcT1Pv>
        27d2e4:	e1a06000 	mov	r6, r0
        27d2e8:	e59d101a 	ldr	r1, [sp, #26]
        27d2ec:	e1a01841 	mov	r1, r1, asr #16
        27d2f0:	e59d0016 	ldr	r0, [sp, #22]
        27d2f4:	e0410840 	sub	r0, r1, r0, asr #16
        27d2f8:	e3a0100f 	mov	r1, #15	; 0xf
        27d2fc:	e0011246 	and	r1, r1, r6, asr #4
        27d300:	e0120091 	muls	r2, r1, r0
        27d304:	4282200f 	addmi	r2, r2, #15	; 0xf
        27d308:	e59d1014 	ldr	r1, [sp, #20]
        27d30c:	e0811242 	add	r1, r1, r2, asr #4
        27d310:	e1a03801 	mov	r3, r1, lsl #16
        27d314:	e1a03843 	mov	r3, r3, asr #16
        27d318:	e206100f 	and	r1, r6, #15	; 0xf
        27d31c:	e2811001 	add	r1, r1, #1	; 0x1
        27d320:	e0100091 	muls	r0, r1, r0
        27d324:	e58d302c 	str	r3, [sp, #44]
        27d328:	4280000f 	addmi	r0, r0, #15	; 0xf
        27d32c:	e59d1014 	ldr	r1, [sp, #20]
        27d330:	e0810240 	add	r0, r1, r0, asr #4
        27d334:	e1a03800 	mov	r3, r0, lsl #16
        27d338:	e1a03843 	mov	r3, r3, asr #16
        27d33c:	e58d3024 	str	r3, [sp, #36]
        27d340:	e3570000 	cmp	r7, #0	; 0x0
        27d344:	da000079 	ble	27d530 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x578>
        27d348:	e2470001 	sub	r0, r7, #1	; 0x1
        27d34c:	e0851000 	add	r1, r5, r0
        27d350:	e5d1104c 	ldrb	r1, [r1, #76]
        27d354:	e3310000 	teq	r1, #0	; 0x0
        27d358:	02400001 	subeq	r0, r0, #1	; 0x1
        27d35c:	e3500000 	cmp	r0, #0	; 0x0
        27d360:	ba000072 	blt	27d530 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x578>
        27d364:	e5d51001 	ldrb	r1, [r5, #1]
        27d368:	e0852007 	add	r2, r5, r7
        27d36c:	e5d2204c 	ldrb	r2, [r2, #76]
        27d370:	e202200f 	and	r2, r2, #15	; 0xf
        27d374:	e0412002 	sub	r2, r1, r2
        27d378:	e0850000 	add	r0, r5, r0
        27d37c:	e1a07000 	mov	r7, r0
        27d380:	e5d0104c 	ldrb	r1, [r0, #76]
        27d384:	e201100f 	and	r1, r1, #15	; 0xf
        27d388:	e0421001 	sub	r1, r2, r1
        27d38c:	e0811004 	add	r1, r1, r4
        27d390:	e5d11420 	ldrb	r1, [r1, #1056]
        27d394:	e2811001 	add	r1, r1, #1	; 0x1
        27d398:	e0842002 	add	r2, r4, r2
        27d39c:	e5d22420 	ldrb	r2, [r2, #1056]
        27d3a0:	e28d301c 	add	r3, sp, #28	; 0x1c
        27d3a4:	e92d0008 	stmdb	sp!, {r3}
        27d3a8:	e2822001 	add	r2, r2, #1	; 0x1
        27d3ac:	e594304c 	ldr	r3, [r4, #76]
        27d3b0:	e5d0001c 	ldrb	r0, [r0, #28]
        27d3b4:	eb62d981 	bl	1b339c0 <$GetSymBox__FUciT2P11xrdata_typeP5_RECT>
        27d3b8:	e28dd004 	add	sp, sp, #4	; 0x4
        27d3bc:	e3300000 	teq	r0, #0	; 0x0
        27d3c0:	1a00005a 	bne	27d530 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x578>
        27d3c4:	e59d1020 	ldr	r1, [sp, #32]
        27d3c8:	e1a01841 	mov	r1, r1, asr #16
        27d3cc:	e59d001c 	ldr	r0, [sp, #28]
        27d3d0:	e0810840 	add	r0, r1, r0, asr #16
        27d3d4:	e0800fa0 	add	r0, r0, r0, lsr #31
        27d3d8:	e59d1054 	ldr	r1, [sp, #84]
        27d3dc:	e06100c0 	rsb	r0, r1, r0, asr #1
        27d3e0:	e59d1058 	ldr	r1, [sp, #88]
        27d3e4:	e0100091 	muls	r0, r1, r0
        27d3e8:	4280007f 	addmi	r0, r0, #127	; 0x7f
        27d3ec:	e1a003c0 	mov	r0, r0, asr #7
        27d3f0:	e59d101c 	ldr	r1, [sp, #28]
        27d3f4:	e1a00800 	mov	r0, r0, lsl #16
        27d3f8:	e1a00840 	mov	r0, r0, asr #16
        27d3fc:	e0411000 	sub	r1, r1, r0
        27d400:	e5cd101f 	strb	r1, [sp, #31]
        27d404:	e1a01441 	mov	r1, r1, asr #8
        27d408:	e5cd101e 	strb	r1, [sp, #30]
        27d40c:	e59d1020 	ldr	r1, [sp, #32]
        27d410:	e0410000 	sub	r0, r1, r0
        27d414:	e5cd0023 	strb	r0, [sp, #35]
        27d418:	e1a00440 	mov	r0, r0, asr #8
        27d41c:	e5cd0022 	strb	r0, [sp, #34]
        27d420:	e5d7004c 	ldrb	r0, [r7, #76]
        27d424:	e1a00220 	mov	r0, r0, lsr #4
        27d428:	e20010ff 	and	r1, r0, #255	; 0xff
        27d42c:	e5d7001c 	ldrb	r0, [r7, #28]
        27d430:	e59d2000 	ldr	r2, [sp]
        27d434:	eb62d963 	bl	1b339c8 <$GetVarPosSize__FUcT1Pv>
        27d438:	e58d0008 	str	r0, [sp, #8]
        27d43c:	e59d0022 	ldr	r0, [sp, #34]
        27d440:	e1a00840 	mov	r0, r0, asr #16
        27d444:	e59d101e 	ldr	r1, [sp, #30]
        27d448:	e0400841 	sub	r0, r0, r1, asr #16
        27d44c:	e3a0100f 	mov	r1, #15	; 0xf
        27d450:	e59d2008 	ldr	r2, [sp, #8]
        27d454:	e0011242 	and	r1, r1, r2, asr #4
        27d458:	e0020091 	mul	r2, r1, r0
        27d45c:	e59d1008 	ldr	r1, [sp, #8]
        27d460:	e201100f 	and	r1, r1, #15	; 0xf
        27d464:	e2811001 	add	r1, r1, #1	; 0x1
        27d468:	e0000091 	mul	r0, r1, r0
        27d46c:	ea00002f 	b	27d530 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x578>
        27d470:	e5940048 	ldr	r0, [r4, #72]
        27d474:	e59010e2 	ldr	r1, [r0, #226]
        27d478:	e1b01841 	movs	r1, r1, asr #16
        27d47c:	0a00002b 	beq	27d530 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x578>
        27d480:	e59010e8 	ldr	r1, [r0, #232]
        27d484:	e1a01841 	mov	r1, r1, asr #16
        27d488:	e3310064 	teq	r1, #100	; 0x64
        27d48c:	059000e6 	ldreq	r0, [r0, #230]
        27d490:	01a00840 	moveq	r0, r0, asr #16
        27d494:	03300064 	teqeq	r0, #100	; 0x64
        27d498:	1a000024 	bne	27d530 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x578>
        27d49c:	e28d1014 	add	r1, sp, #20	; 0x14
        27d4a0:	e28d000c 	add	r0, sp, #12	; 0xc
        27d4a4:	e8901008 	ldmia	r0, {r3, ip}
        27d4a8:	e8811008 	stmia	r1, {r3, ip}
        27d4ac:	e5940048 	ldr	r0, [r4, #72]
        27d4b0:	e59000e4 	ldr	r0, [r0, #228]
        27d4b4:	e1a00820 	mov	r0, r0, lsr #16
        27d4b8:	e5cd001b 	strb	r0, [sp, #27]
        27d4bc:	e1a00440 	mov	r0, r0, asr #8
        27d4c0:	e5cd001a 	strb	r0, [sp, #26]
        27d4c4:	e59d0018 	ldr	r0, [sp, #24]
        27d4c8:	e5941048 	ldr	r1, [r4, #72]
        27d4cc:	e59110e2 	ldr	r1, [r1, #226]
        27d4d0:	e1a01821 	mov	r1, r1, lsr #16
        27d4d4:	e0400001 	sub	r0, r0, r1
        27d4d8:	e5cd0017 	strb	r0, [sp, #23]
        27d4dc:	e1a00440 	mov	r0, r0, asr #8
        27d4e0:	e5cd0016 	strb	r0, [sp, #22]
        27d4e4:	e59f60dc 	ldr	r6, [pc, #dc]	; 27d5c8 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x610>
        27d4e8:	e59d101a 	ldr	r1, [sp, #26]
        27d4ec:	e1a01841 	mov	r1, r1, asr #16
        27d4f0:	e59d0016 	ldr	r0, [sp, #22]
        27d4f4:	e0410840 	sub	r0, r1, r0, asr #16
        27d4f8:	e0702180 	rsbs	r2, r0, r0, lsl #3
        27d4fc:	4282200f 	addmi	r2, r2, #15	; 0xf
        27d500:	e59d1014 	ldr	r1, [sp, #20]
        27d504:	e0811242 	add	r1, r1, r2, asr #4
        27d508:	e1a03801 	mov	r3, r1, lsl #16
        27d50c:	e1a03843 	mov	r3, r3, asr #16
        27d510:	e0901180 	adds	r1, r0, r0, lsl #3
        27d514:	e58d302c 	str	r3, [sp, #44]
        27d518:	4281100f 	addmi	r1, r1, #15	; 0xf
        27d51c:	e59d0014 	ldr	r0, [sp, #20]
        27d520:	e0800241 	add	r0, r0, r1, asr #4
        27d524:	e1a03800 	mov	r3, r0, lsl #16
        27d528:	e1a03843 	mov	r3, r3, asr #16
        27d52c:	e58d3024 	str	r3, [sp, #36]
        27d530:	e3380000 	teq	r8, #0	; 0x0
        27d534:	0a0001d9 	beq	27dca0 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xce8>
        27d538:	e3360000 	teq	r6, #0	; 0x0
        27d53c:	0a00003d 	beq	27d638 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x680>
        27d540:	e59d1012 	ldr	r1, [sp, #18]
        27d544:	e1a01841 	mov	r1, r1, asr #16
        27d548:	e59d000e 	ldr	r0, [sp, #14]
        27d54c:	e0411840 	sub	r1, r1, r0, asr #16
        27d550:	e59d201a 	ldr	r2, [sp, #26]
        27d554:	e1a02842 	mov	r2, r2, asr #16
        27d558:	e59d0016 	ldr	r0, [sp, #22]
        27d55c:	e0420840 	sub	r0, r2, r0, asr #16
        27d560:	e1510000 	cmp	r1, r0
        27d564:	a1a02000 	movge	r2, r0
        27d568:	b1a02001 	movlt	r2, r1
        27d56c:	c1a00001 	movgt	r0, r1
        27d570:	e0820080 	add	r0, r2, r0, lsl #1
        27d574:	e2801001 	add	r1, r0, #1	; 0x1
        27d578:	e3a00003 	mov	r0, #3	; 0x3
        27d57c:	eb64d4ef 	bl	1bb2940 <$__rt_sdiv>
        27d580:	e3500014 	cmp	r0, #20	; 0x14
        27d584:	b3a00014 	movlt	r0, #20	; 0x14
        27d588:	e3a01000 	mov	r1, #0	; 0x0
        27d58c:	e28d3028 	add	r3, sp, #40	; 0x28
        27d590:	e893000c 	ldmia	r3, {r2, r3}
        27d594:	e1530002 	cmp	r3, r2
        27d598:	da00000b 	ble	27d5cc <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x614>
        27d59c:	e59d2012 	ldr	r2, [sp, #18]
        27d5a0:	e59d3028 	ldr	r3, [sp, #40]
        27d5a4:	e1330842 	teq	r3, r2, asr #16
        27d5a8:	159d2016 	ldrne	r2, [sp, #22]
        27d5ac:	159d302c 	ldrne	r3, [sp, #44]
        27d5b0:	11330842 	teqne	r3, r2, asr #16
        27d5b4:	128d3028 	addne	r3, sp, #40	; 0x28
        27d5b8:	1893000c 	ldmneia	r3, {r2, r3}
        27d5bc:	10431002 	subne	r1, r3, r2
        27d5c0:	1a00000f 	bne	27d604 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x64c>
        27d5c4:	ea000017 	b	27d628 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x670>
        27d5c8:	002a5778 	eoreq	r5, sl, r8, ror r7
        27d5cc:	e59d2030 	ldr	r2, [sp, #48]
        27d5d0:	e59d3024 	ldr	r3, [sp, #36]
        27d5d4:	e1520003 	cmp	r2, r3
        27d5d8:	da000012 	ble	27d628 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x670>
        27d5dc:	e59d201a 	ldr	r2, [sp, #26]
        27d5e0:	e59d3024 	ldr	r3, [sp, #36]
        27d5e4:	e1330842 	teq	r3, r2, asr #16
        27d5e8:	159d200e 	ldrne	r2, [sp, #14]
        27d5ec:	159d3030 	ldrne	r3, [sp, #48]
        27d5f0:	11330842 	teqne	r3, r2, asr #16
        27d5f4:	0a00000b 	beq	27d628 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x670>
        27d5f8:	e59d2030 	ldr	r2, [sp, #48]
        27d5fc:	e59d3024 	ldr	r3, [sp, #36]
        27d600:	e0421003 	sub	r1, r2, r3
        27d604:	e0811101 	add	r1, r1, r1, lsl #2
        27d608:	e1a01101 	mov	r1, r1, lsl #2
        27d60c:	eb64d4cb 	bl	1bb2940 <$__rt_sdiv>
        27d610:	e1a01000 	mov	r1, r0
        27d614:	e3500008 	cmp	r0, #8	; 0x8
        27d618:	c3a01008 	movgt	r1, #8	; 0x8
        27d61c:	ca000001 	bgt	27d628 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x670>
        27d620:	e3510000 	cmp	r1, #0	; 0x0
        27d624:	b3a01000 	movlt	r1, #0	; 0x0
        27d628:	e1a0a001 	mov	sl, r1
        27d62c:	e5c51007 	strb	r1, [r5, #7]
        27d630:	e1a00421 	mov	r0, r1, lsr #8
        27d634:	e5c50006 	strb	r0, [r5, #6]
        27d638:	e3380000 	teq	r8, #0	; 0x0
        27d63c:	0a000197 	beq	27dca0 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xce8>
        27d640:	e3360000 	teq	r6, #0	; 0x0
        27d644:	0a0000ba 	beq	27d934 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x97c>
        27d648:	e59d001a 	ldr	r0, [sp, #26]
        27d64c:	e1a00840 	mov	r0, r0, asr #16
        27d650:	e59d1016 	ldr	r1, [sp, #22]
        27d654:	e0409841 	sub	r9, r0, r1, asr #16
        27d658:	e59d1012 	ldr	r1, [sp, #18]
        27d65c:	e1a01841 	mov	r1, r1, asr #16
        27d660:	e59d000e 	ldr	r0, [sp, #14]
        27d664:	e0417840 	sub	r7, r1, r0, asr #16
        27d668:	e3570001 	cmp	r7, #1	; 0x1
        27d66c:	b3a07001 	movlt	r7, #1	; 0x1
        27d670:	e3a0000f 	mov	r0, #15	; 0xf
        27d674:	e0001646 	and	r1, r0, r6, asr #12
        27d678:	e58d103c 	str	r1, [sp, #60]
        27d67c:	e0001446 	and	r1, r0, r6, asr #8
        27d680:	e58d1040 	str	r1, [sp, #64]
        27d684:	e0001648 	and	r1, r0, r8, asr #12
        27d688:	e0000448 	and	r0, r0, r8, asr #8
        27d68c:	e58d0038 	str	r0, [sp, #56]
        27d690:	e58d1034 	str	r1, [sp, #52]
        27d694:	e59d103c 	ldr	r1, [sp, #60]
        27d698:	e081c181 	add	ip, r1, r1, lsl #3
        27d69c:	e08c1201 	add	r1, ip, r1, lsl #4
        27d6a0:	e1a01101 	mov	r1, r1, lsl #2
        27d6a4:	eb64d4a5 	bl	1bb2940 <$__rt_sdiv>
        27d6a8:	e58d0050 	str	r0, [sp, #80]
        27d6ac:	e59d1040 	ldr	r1, [sp, #64]
        27d6b0:	e081c181 	add	ip, r1, r1, lsl #3
        27d6b4:	e08c1201 	add	r1, ip, r1, lsl #4
        27d6b8:	e1a01101 	mov	r1, r1, lsl #2
        27d6bc:	e59d0034 	ldr	r0, [sp, #52]
        27d6c0:	eb64d49e 	bl	1bb2940 <$__rt_sdiv>
        27d6c4:	e0891189 	add	r1, r9, r9, lsl #3
        27d6c8:	e0811209 	add	r1, r1, r9, lsl #4
        27d6cc:	e1a01101 	mov	r1, r1, lsl #2
        27d6d0:	e58d004c 	str	r0, [sp, #76]
        27d6d4:	e1a00007 	mov	r0, r7
        27d6d8:	eb64d498 	bl	1bb2940 <$__rt_sdiv>
        27d6dc:	e3500001 	cmp	r0, #1	; 0x1
        27d6e0:	b3a00001 	movlt	r0, #1	; 0x1
        27d6e4:	e3a06000 	mov	r6, #0	; 0x0
        27d6e8:	e59d1050 	ldr	r1, [sp, #80]
        27d6ec:	e1500001 	cmp	r0, r1
        27d6f0:	aa00003f 	bge	27d7f4 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x83c>
        27d6f4:	e59d1038 	ldr	r1, [sp, #56]
        27d6f8:	e351000f 	cmp	r1, #15	; 0xf
        27d6fc:	aa000006 	bge	27d71c <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x764>
        27d700:	e59d103c 	ldr	r1, [sp, #60]
        27d704:	e3510001 	cmp	r1, #1	; 0x1
        27d708:	da000003 	ble	27d71c <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x764>
        27d70c:	e59d1050 	ldr	r1, [sp, #80]
        27d710:	e1a01181 	mov	r1, r1, lsl #3
        27d714:	eb64d489 	bl	1bb2940 <$__rt_sdiv>
        27d718:	e2406008 	sub	r6, r0, #8	; 0x8
        27d71c:	e59d0038 	ldr	r0, [sp, #56]
        27d720:	e350000e 	cmp	r0, #14	; 0xe
        27d724:	a59d1040 	ldrge	r1, [sp, #64]
        27d728:	a351000e 	cmpge	r1, #14	; 0xe
        27d72c:	ba00002a 	blt	27d7dc <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x824>
        27d730:	e24dd004 	sub	sp, sp, #4	; 0x4
        27d734:	e59d0016 	ldr	r0, [sp, #22]
        27d738:	e1a00840 	mov	r0, r0, asr #16
        27d73c:	e59d101a 	ldr	r1, [sp, #26]
        27d740:	e0400841 	sub	r0, r0, r1, asr #16
        27d744:	e59d201e 	ldr	r2, [sp, #30]
        27d748:	e1a02842 	mov	r2, r2, asr #16
        27d74c:	e59d1012 	ldr	r1, [sp, #18]
        27d750:	e0421841 	sub	r1, r2, r1, asr #16
        27d754:	e1500001 	cmp	r0, r1
        27d758:	a1a00001 	movge	r0, r1
        27d75c:	e1590007 	cmp	r9, r7
        27d760:	e58d0000 	str	r0, [sp]
        27d764:	d1a00007 	movle	r0, r7
        27d768:	c1a00009 	movgt	r0, r9
        27d76c:	e0800fa0 	add	r0, r0, r0, lsr #31
        27d770:	e59d1000 	ldr	r1, [sp]
        27d774:	e15100c0 	cmp	r1, r0, asr #1
        27d778:	aa000016 	bge	27d7d8 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x820>
        27d77c:	e1590007 	cmp	r9, r7
        27d780:	a1a00007 	movge	r0, r7
        27d784:	b1a00009 	movlt	r0, r9
        27d788:	e1a01080 	mov	r1, r0, lsl #1
        27d78c:	e3a00003 	mov	r0, #3	; 0x3
        27d790:	eb64d46a 	bl	1bb2940 <$__rt_sdiv>
        27d794:	e59d1000 	ldr	r1, [sp]
        27d798:	e1500001 	cmp	r0, r1
        27d79c:	c0866fa6 	addgt	r6, r6, r6, lsr #31
        27d7a0:	c1a060c6 	movgt	r6, r6, asr #1
        27d7a4:	ca00000b 	bgt	27d7d8 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x820>
        27d7a8:	e1590007 	cmp	r9, r7
        27d7ac:	b1a07009 	movlt	r7, r9
        27d7b0:	e1a01107 	mov	r1, r7, lsl #2
        27d7b4:	e3a00005 	mov	r0, #5	; 0x5
        27d7b8:	eb64d460 	bl	1bb2940 <$__rt_sdiv>
        27d7bc:	e59d1000 	ldr	r1, [sp]
        27d7c0:	e1500001 	cmp	r0, r1
        27d7c4:	da000003 	ble	27d7d8 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x820>
        27d7c8:	e1a01086 	mov	r1, r6, lsl #1
        27d7cc:	e3a00003 	mov	r0, #3	; 0x3
        27d7d0:	eb64d45a 	bl	1bb2940 <$__rt_sdiv>
        27d7d4:	e1a06000 	mov	r6, r0
        27d7d8:	e28dd004 	add	sp, sp, #4	; 0x4
        27d7dc:	e59d103c 	ldr	r1, [sp, #60]
        27d7e0:	e0810081 	add	r0, r1, r1, lsl #1
        27d7e4:	e59d1038 	ldr	r1, [sp, #56]
        27d7e8:	e1500001 	cmp	r0, r1
        27d7ec:	aa000044 	bge	27d904 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x94c>
        27d7f0:	ea000041 	b	27d8fc <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x944>
        27d7f4:	e59d104c 	ldr	r1, [sp, #76]
        27d7f8:	e1500001 	cmp	r0, r1
        27d7fc:	da000045 	ble	27d918 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x960>
        27d800:	e59d1034 	ldr	r1, [sp, #52]
        27d804:	e3510001 	cmp	r1, #1	; 0x1
        27d808:	da000006 	ble	27d828 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x870>
        27d80c:	e59d1040 	ldr	r1, [sp, #64]
        27d810:	e351000f 	cmp	r1, #15	; 0xf
        27d814:	aa000003 	bge	27d828 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x870>
        27d818:	e1a01180 	mov	r1, r0, lsl #3
        27d81c:	e59d004c 	ldr	r0, [sp, #76]
        27d820:	eb64d446 	bl	1bb2940 <$__rt_sdiv>
        27d824:	e2406008 	sub	r6, r0, #8	; 0x8
        27d828:	e59d0038 	ldr	r0, [sp, #56]
        27d82c:	e350000e 	cmp	r0, #14	; 0xe
        27d830:	a59d1040 	ldrge	r1, [sp, #64]
        27d834:	a351000e 	cmpge	r1, #14	; 0xe
        27d838:	ba00002a 	blt	27d8e8 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x930>
        27d83c:	e24dd004 	sub	sp, sp, #4	; 0x4
        27d840:	e59d0016 	ldr	r0, [sp, #22]
        27d844:	e1a00840 	mov	r0, r0, asr #16
        27d848:	e59d101a 	ldr	r1, [sp, #26]
        27d84c:	e0400841 	sub	r0, r0, r1, asr #16
        27d850:	e59d201e 	ldr	r2, [sp, #30]
        27d854:	e1a02842 	mov	r2, r2, asr #16
        27d858:	e59d1012 	ldr	r1, [sp, #18]
        27d85c:	e0421841 	sub	r1, r2, r1, asr #16
        27d860:	e1500001 	cmp	r0, r1
        27d864:	a1a00001 	movge	r0, r1
        27d868:	e1590007 	cmp	r9, r7
        27d86c:	e58d0000 	str	r0, [sp]
        27d870:	d1a00007 	movle	r0, r7
        27d874:	c1a00009 	movgt	r0, r9
        27d878:	e0800fa0 	add	r0, r0, r0, lsr #31
        27d87c:	e59d1000 	ldr	r1, [sp]
        27d880:	e15100c0 	cmp	r1, r0, asr #1
        27d884:	aa000016 	bge	27d8e4 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x92c>
        27d888:	e1590007 	cmp	r9, r7
        27d88c:	a1a00007 	movge	r0, r7
        27d890:	b1a00009 	movlt	r0, r9
        27d894:	e1a01080 	mov	r1, r0, lsl #1
        27d898:	e3a00003 	mov	r0, #3	; 0x3
        27d89c:	eb64d427 	bl	1bb2940 <$__rt_sdiv>
        27d8a0:	e59d1000 	ldr	r1, [sp]
        27d8a4:	e1500001 	cmp	r0, r1
        27d8a8:	c0866fa6 	addgt	r6, r6, r6, lsr #31
        27d8ac:	c1a060c6 	movgt	r6, r6, asr #1
        27d8b0:	ca00000b 	bgt	27d8e4 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x92c>
        27d8b4:	e1590007 	cmp	r9, r7
        27d8b8:	b1a07009 	movlt	r7, r9
        27d8bc:	e1a01107 	mov	r1, r7, lsl #2
        27d8c0:	e3a00005 	mov	r0, #5	; 0x5
        27d8c4:	eb64d41d 	bl	1bb2940 <$__rt_sdiv>
        27d8c8:	e59d1000 	ldr	r1, [sp]
        27d8cc:	e1500001 	cmp	r0, r1
        27d8d0:	da000003 	ble	27d8e4 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x92c>
        27d8d4:	e1a01086 	mov	r1, r6, lsl #1
        27d8d8:	e3a00003 	mov	r0, #3	; 0x3
        27d8dc:	eb64d417 	bl	1bb2940 <$__rt_sdiv>
        27d8e0:	e1a06000 	mov	r6, r0
        27d8e4:	e28dd004 	add	sp, sp, #4	; 0x4
        27d8e8:	e59d0034 	ldr	r0, [sp, #52]
        27d8ec:	e0800080 	add	r0, r0, r0, lsl #1
        27d8f0:	e59d1040 	ldr	r1, [sp, #64]
        27d8f4:	e1500001 	cmp	r0, r1
        27d8f8:	aa000001 	bge	27d904 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x94c>
        27d8fc:	e0866fa6 	add	r6, r6, r6, lsr #31
        27d900:	e1a060c6 	mov	r6, r6, asr #1
        27d904:	e3560008 	cmp	r6, #8	; 0x8
        27d908:	c3a06008 	movgt	r6, #8	; 0x8
        27d90c:	ca000001 	bgt	27d918 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x960>
        27d910:	e3560000 	cmp	r6, #0	; 0x0
        27d914:	b3a06000 	movlt	r6, #0	; 0x0
        27d918:	e08aa006 	add	sl, sl, r6
        27d91c:	e5950006 	ldr	r0, [r5, #6]
        27d920:	e1a00820 	mov	r0, r0, lsr #16
        27d924:	e1800206 	orr	r0, r0, r6, lsl #4
        27d928:	e5c50007 	strb	r0, [r5, #7]
        27d92c:	e1a00440 	mov	r0, r0, asr #8
        27d930:	e5c50006 	strb	r0, [r5, #6]
        27d934:	e3380000 	teq	r8, #0	; 0x0
        27d938:	0a0000d8 	beq	27dca0 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xce8>
        27d93c:	e59d0008 	ldr	r0, [sp, #8]
        27d940:	e3300000 	teq	r0, #0	; 0x0
        27d944:	0a0000ad 	beq	27dc00 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xc48>
        27d948:	e59d1022 	ldr	r1, [sp, #34]
        27d94c:	e1a01841 	mov	r1, r1, asr #16
        27d950:	e59d001e 	ldr	r0, [sp, #30]
        27d954:	e0417840 	sub	r7, r1, r0, asr #16
        27d958:	e59d1012 	ldr	r1, [sp, #18]
        27d95c:	e1a01841 	mov	r1, r1, asr #16
        27d960:	e59d000e 	ldr	r0, [sp, #14]
        27d964:	e0416840 	sub	r6, r1, r0, asr #16
        27d968:	e3560001 	cmp	r6, #1	; 0x1
        27d96c:	b3a06001 	movlt	r6, #1	; 0x1
        27d970:	e3a0000f 	mov	r0, #15	; 0xf
        27d974:	e59d1008 	ldr	r1, [sp, #8]
        27d978:	e0001641 	and	r1, r0, r1, asr #12
        27d97c:	e58d103c 	str	r1, [sp, #60]
        27d980:	e59d1008 	ldr	r1, [sp, #8]
        27d984:	e0001441 	and	r1, r0, r1, asr #8
        27d988:	e58d1040 	str	r1, [sp, #64]
        27d98c:	e0001648 	and	r1, r0, r8, asr #12
        27d990:	e0000448 	and	r0, r0, r8, asr #8
        27d994:	e58d0038 	str	r0, [sp, #56]
        27d998:	e58d1034 	str	r1, [sp, #52]
        27d99c:	e59d103c 	ldr	r1, [sp, #60]
        27d9a0:	e081c181 	add	ip, r1, r1, lsl #3
        27d9a4:	e08c1201 	add	r1, ip, r1, lsl #4
        27d9a8:	e1a01101 	mov	r1, r1, lsl #2
        27d9ac:	eb64d3e3 	bl	1bb2940 <$__rt_sdiv>
        27d9b0:	e58d0050 	str	r0, [sp, #80]
        27d9b4:	e59d0040 	ldr	r0, [sp, #64]
        27d9b8:	e0801180 	add	r1, r0, r0, lsl #3
        27d9bc:	e0811200 	add	r1, r1, r0, lsl #4
        27d9c0:	e1a01101 	mov	r1, r1, lsl #2
        27d9c4:	e59d0034 	ldr	r0, [sp, #52]
        27d9c8:	eb64d3dc 	bl	1bb2940 <$__rt_sdiv>
        27d9cc:	e0871187 	add	r1, r7, r7, lsl #3
        27d9d0:	e0811207 	add	r1, r1, r7, lsl #4
        27d9d4:	e1a01101 	mov	r1, r1, lsl #2
        27d9d8:	e58d004c 	str	r0, [sp, #76]
        27d9dc:	e1a00006 	mov	r0, r6
        27d9e0:	eb64d3d6 	bl	1bb2940 <$__rt_sdiv>
        27d9e4:	e3500001 	cmp	r0, #1	; 0x1
        27d9e8:	b3a00001 	movlt	r0, #1	; 0x1
        27d9ec:	e3a09000 	mov	r9, #0	; 0x0
        27d9f0:	e59d1050 	ldr	r1, [sp, #80]
        27d9f4:	e1500001 	cmp	r0, r1
        27d9f8:	aa00003a 	bge	27dae8 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xb30>
        27d9fc:	e59d1038 	ldr	r1, [sp, #56]
        27da00:	e351000f 	cmp	r1, #15	; 0xf
        27da04:	aa000006 	bge	27da24 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xa6c>
        27da08:	e59d103c 	ldr	r1, [sp, #60]
        27da0c:	e3510001 	cmp	r1, #1	; 0x1
        27da10:	da000003 	ble	27da24 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xa6c>
        27da14:	e59d1050 	ldr	r1, [sp, #80]
        27da18:	e1a01181 	mov	r1, r1, lsl #3
        27da1c:	eb64d3c7 	bl	1bb2940 <$__rt_sdiv>
        27da20:	e2409008 	sub	r9, r0, #8	; 0x8
        27da24:	e59d0038 	ldr	r0, [sp, #56]
        27da28:	e350000e 	cmp	r0, #14	; 0xe
        27da2c:	a59d0040 	ldrge	r0, [sp, #64]
        27da30:	a350000e 	cmpge	r0, #14	; 0xe
        27da34:	ba000062 	blt	27dbc4 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xc0c>
        27da38:	e24dd004 	sub	sp, sp, #4	; 0x4
        27da3c:	e59d1016 	ldr	r1, [sp, #22]
        27da40:	e1a01841 	mov	r1, r1, asr #16
        27da44:	e59d001a 	ldr	r0, [sp, #26]
        27da48:	e0410840 	sub	r0, r1, r0, asr #16
        27da4c:	e59d201e 	ldr	r2, [sp, #30]
        27da50:	e1a02842 	mov	r2, r2, asr #16
        27da54:	e59d1012 	ldr	r1, [sp, #18]
        27da58:	e0421841 	sub	r1, r2, r1, asr #16
        27da5c:	e1500001 	cmp	r0, r1
        27da60:	a1a00001 	movge	r0, r1
        27da64:	e1570006 	cmp	r7, r6
        27da68:	e58d0000 	str	r0, [sp]
        27da6c:	d1a00006 	movle	r0, r6
        27da70:	c1a00007 	movgt	r0, r7
        27da74:	e0800fa0 	add	r0, r0, r0, lsr #31
        27da78:	e59d1000 	ldr	r1, [sp]
        27da7c:	e15100c0 	cmp	r1, r0, asr #1
        27da80:	aa00004e 	bge	27dbc0 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xc08>
        27da84:	e1570006 	cmp	r7, r6
        27da88:	a1a00006 	movge	r0, r6
        27da8c:	b1a00007 	movlt	r0, r7
        27da90:	e1a01080 	mov	r1, r0, lsl #1
        27da94:	e3a00003 	mov	r0, #3	; 0x3
        27da98:	eb64d3a8 	bl	1bb2940 <$__rt_sdiv>
        27da9c:	e59d1000 	ldr	r1, [sp]
        27daa0:	e1500001 	cmp	r0, r1
        27daa4:	da000002 	ble	27dab4 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xafc>
        27daa8:	e0899fa9 	add	r9, r9, r9, lsr #31
        27daac:	e1a090c9 	mov	r9, r9, asr #1
        27dab0:	ea000042 	b	27dbc0 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xc08>
        27dab4:	e1570006 	cmp	r7, r6
        27dab8:	b1a06007 	movlt	r6, r7
        27dabc:	e1a01106 	mov	r1, r6, lsl #2
        27dac0:	e3a00005 	mov	r0, #5	; 0x5
        27dac4:	eb64d39d 	bl	1bb2940 <$__rt_sdiv>
        27dac8:	e59d1000 	ldr	r1, [sp]
        27dacc:	e1500001 	cmp	r0, r1
        27dad0:	da00003a 	ble	27dbc0 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xc08>
        27dad4:	e1a01089 	mov	r1, r9, lsl #1
        27dad8:	e3a00003 	mov	r0, #3	; 0x3
        27dadc:	eb64d397 	bl	1bb2940 <$__rt_sdiv>
        27dae0:	e1a09000 	mov	r9, r0
        27dae4:	ea000035 	b	27dbc0 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xc08>
        27dae8:	e59d104c 	ldr	r1, [sp, #76]
        27daec:	e1500001 	cmp	r0, r1
        27daf0:	da000038 	ble	27dbd8 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xc20>
        27daf4:	e59d1034 	ldr	r1, [sp, #52]
        27daf8:	e3510001 	cmp	r1, #1	; 0x1
        27dafc:	da000006 	ble	27db1c <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xb64>
        27db00:	e59d1040 	ldr	r1, [sp, #64]
        27db04:	e351000f 	cmp	r1, #15	; 0xf
        27db08:	aa000003 	bge	27db1c <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xb64>
        27db0c:	e1a01180 	mov	r1, r0, lsl #3
        27db10:	e59d004c 	ldr	r0, [sp, #76]
        27db14:	eb64d389 	bl	1bb2940 <$__rt_sdiv>
        27db18:	e2409008 	sub	r9, r0, #8	; 0x8
        27db1c:	e59d0038 	ldr	r0, [sp, #56]
        27db20:	e350000e 	cmp	r0, #14	; 0xe
        27db24:	a59d0040 	ldrge	r0, [sp, #64]
        27db28:	a350000e 	cmpge	r0, #14	; 0xe
        27db2c:	ba000024 	blt	27dbc4 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xc0c>
        27db30:	e24dd004 	sub	sp, sp, #4	; 0x4
        27db34:	e59d0016 	ldr	r0, [sp, #22]
        27db38:	e1a00840 	mov	r0, r0, asr #16
        27db3c:	e59d101a 	ldr	r1, [sp, #26]
        27db40:	e0400841 	sub	r0, r0, r1, asr #16
        27db44:	e59d201e 	ldr	r2, [sp, #30]
        27db48:	e1a02842 	mov	r2, r2, asr #16
        27db4c:	e59d1012 	ldr	r1, [sp, #18]
        27db50:	e0421841 	sub	r1, r2, r1, asr #16
        27db54:	e1500001 	cmp	r0, r1
        27db58:	a1a00001 	movge	r0, r1
        27db5c:	e1570006 	cmp	r7, r6
        27db60:	e58d0000 	str	r0, [sp]
        27db64:	d1a00006 	movle	r0, r6
        27db68:	c1a00007 	movgt	r0, r7
        27db6c:	e0800fa0 	add	r0, r0, r0, lsr #31
        27db70:	e59d1000 	ldr	r1, [sp]
        27db74:	e15100c0 	cmp	r1, r0, asr #1
        27db78:	aa000010 	bge	27dbc0 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xc08>
        27db7c:	e1570006 	cmp	r7, r6
        27db80:	a1a00006 	movge	r0, r6
        27db84:	b1a00007 	movlt	r0, r7
        27db88:	e1a01080 	mov	r1, r0, lsl #1
        27db8c:	e3a00003 	mov	r0, #3	; 0x3
        27db90:	eb64d36a 	bl	1bb2940 <$__rt_sdiv>
        27db94:	e59d1000 	ldr	r1, [sp]
        27db98:	e1500001 	cmp	r0, r1
        27db9c:	caffffc1 	bgt	27daa8 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xaf0>
        27dba0:	e1570006 	cmp	r7, r6
        27dba4:	b1a06007 	movlt	r6, r7
        27dba8:	e1a01106 	mov	r1, r6, lsl #2
        27dbac:	e3a00005 	mov	r0, #5	; 0x5
        27dbb0:	eb64d362 	bl	1bb2940 <$__rt_sdiv>
        27dbb4:	e59d1000 	ldr	r1, [sp]
        27dbb8:	e1500001 	cmp	r0, r1
        27dbbc:	caffffc4 	bgt	27dad4 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xb1c>
        27dbc0:	e28dd004 	add	sp, sp, #4	; 0x4
        27dbc4:	e3590008 	cmp	r9, #8	; 0x8
        27dbc8:	c3a09008 	movgt	r9, #8	; 0x8
        27dbcc:	ca000001 	bgt	27dbd8 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xc20>
        27dbd0:	e3590000 	cmp	r9, #0	; 0x0
        27dbd4:	b3a09000 	movlt	r9, #0	; 0x0
        27dbd8:	e0890fa9 	add	r0, r9, r9, lsr #31
        27dbdc:	e1a000c0 	mov	r0, r0, asr #1
        27dbe0:	e080a00a 	add	sl, r0, sl
        27dbe4:	e5951006 	ldr	r1, [r5, #6]
        27dbe8:	e1a01821 	mov	r1, r1, lsr #16
        27dbec:	e0800241 	add	r0, r0, r1, asr #4
        27dbf0:	e1810200 	orr	r0, r1, r0, lsl #4
        27dbf4:	e5c50007 	strb	r0, [r5, #7]
        27dbf8:	e1a00440 	mov	r0, r0, asr #8
        27dbfc:	e5c50006 	strb	r0, [r5, #6]
        27dc00:	e3380000 	teq	r8, #0	; 0x0
        27dc04:	159d1048 	ldrne	r1, [sp, #72]
        27dc08:	13310000 	teqne	r1, #0	; 0x0
        27dc0c:	0a000023 	beq	27dca0 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xce8>
        27dc10:	e59d100e 	ldr	r1, [sp, #14]
        27dc14:	e1a01841 	mov	r1, r1, asr #16
        27dc18:	e59d0012 	ldr	r0, [sp, #18]
        27dc1c:	e0810840 	add	r0, r1, r0, asr #16
        27dc20:	e0800100 	add	r0, r0, r0, lsl #2
        27dc24:	e59d1048 	ldr	r1, [sp, #72]
        27dc28:	e0401001 	sub	r1, r0, r1
        27dc2c:	e59d0044 	ldr	r0, [sp, #68]
        27dc30:	eb64d342 	bl	1bb2940 <$__rt_sdiv>
        27dc34:	e280000a 	add	r0, r0, #10	; 0xa
        27dc38:	e3a0200f 	mov	r2, #15	; 0xf
        27dc3c:	e0021a48 	and	r1, r2, r8, asr #20
        27dc40:	e0023848 	and	r3, r2, r8, asr #16
        27dc44:	e3a02000 	mov	r2, #0	; 0x0
        27dc48:	e1500001 	cmp	r0, r1
        27dc4c:	aa000002 	bge	27dc5c <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xca4>
        27dc50:	e3310000 	teq	r1, #0	; 0x0
        27dc54:	10411000 	subne	r1, r1, r0
        27dc58:	11a02081 	movne	r2, r1, lsl #1
        27dc5c:	e1500003 	cmp	r0, r3
        27dc60:	da000002 	ble	27dc70 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xcb8>
        27dc64:	e333000f 	teq	r3, #15	; 0xf
        27dc68:	10400003 	subne	r0, r0, r3
        27dc6c:	11a02080 	movne	r2, r0, lsl #1
        27dc70:	e3520008 	cmp	r2, #8	; 0x8
        27dc74:	c3a02008 	movgt	r2, #8	; 0x8
        27dc78:	ca000001 	bgt	27dc84 <XrlvCHLXrlvPos(int, xrlv_data_type *)+0xccc>
        27dc7c:	e3520000 	cmp	r2, #0	; 0x0
        27dc80:	b3a02000 	movlt	r2, #0	; 0x0
        27dc84:	e08aa002 	add	sl, sl, r2
        27dc88:	e5950006 	ldr	r0, [r5, #6]
        27dc8c:	e1a00820 	mov	r0, r0, lsr #16
        27dc90:	e1800402 	orr	r0, r0, r2, lsl #8
        27dc94:	e5c50007 	strb	r0, [r5, #7]
        27dc98:	e1a00440 	mov	r0, r0, asr #8
        27dc9c:	e5c50006 	strb	r0, [r5, #6]
        27dca0:	e595100e 	ldr	r1, [r5, #14]
        27dca4:	e1a01821 	mov	r1, r1, lsr #16
        27dca8:	e041000a 	sub	r0, r1, sl
        27dcac:	e5c5000f 	strb	r0, [r5, #15]
        27dcb0:	e1a00440 	mov	r0, r0, asr #8
        27dcb4:	e5c5000e 	strb	r0, [r5, #14]
        27dcb8:	e5d50011 	ldrb	r0, [r5, #17]
        27dcbc:	e0800005 	add	r0, r0, r5
        27dcc0:	e5d01033 	ldrb	r1, [r0, #51]
        27dcc4:	e1a01c01 	mov	r1, r1, lsl #24
        27dcc8:	e06a1c41 	rsb	r1, sl, r1, asr #24
        27dccc:	e371007f 	cmn	r1, #127	; 0x7f
        27dcd0:	b3e0107e 	mvnlt	r1, #126	; 0x7e
        27dcd4:	e5c01033 	strb	r1, [r0, #51]
        27dcd8:	e59d105c 	ldr	r1, [sp, #92]
        27dcdc:	e2811001 	add	r1, r1, #1	; 0x1
        27dce0:	e58d105c 	str	r1, [sp, #92]
        27dce4:	e59d1004 	ldr	r1, [sp, #4]
        27dce8:	e5b10010 	ldr	r0, [r1, #16]!
        27dcec:	e59d105c 	ldr	r1, [sp, #92]
        27dcf0:	e1500001 	cmp	r0, r1
        27dcf4:	cafffcf4 	bgt	27d0cc <XrlvCHLXrlvPos(int, xrlv_data_type *)+0x114>
        27dcf8:	e3a00000 	mov	r0, #0	; 0x0
        27dcfc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)
 * Address: 0027dd00
 */
XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *) {
    /*
        27dd00:	e1a0c00d 	mov	ip, sp
        27dd04:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27dd08:	e24cb004 	sub	fp, ip, #4	; 0x4
        27dd0c:	e1a05000 	mov	r5, r0
        27dd10:	e1a04002 	mov	r4, r2
        27dd14:	e24dd004 	sub	sp, sp, #4	; 0x4
        27dd18:	e3a06000 	mov	r6, #0	; 0x0
        27dd1c:	e2828f8e 	add	r8, r2, #568	; 0x238
        27dd20:	e5d03010 	ldrb	r3, [r0, #16]
        27dd24:	e3a0a001 	mov	sl, #1	; 0x1
        27dd28:	e3a01000 	mov	r1, #0	; 0x0
        27dd2c:	e3a09002 	mov	r9, #2	; 0x2
        27dd30:	e3530010 	cmp	r3, #16	; 0x10
        27dd34:	0a0000f8 	beq	27e11c <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x41c>
        27dd38:	e2842fba 	add	r2, r4, #744	; 0x2e8
        27dd3c:	e3a00003 	mov	r0, #3	; 0x3
        27dd40:	e2847e69 	add	r7, r4, #1680	; 0x690
        27dd44:	ca000023 	bgt	27ddd8 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0xd8>
        27dd48:	e3330001 	teq	r3, #1	; 0x1
        27dd4c:	0a000026 	beq	27ddec <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0xec>
        27dd50:	e3330002 	teq	r3, #2	; 0x2
        27dd54:	0a00008b 	beq	27df88 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x288>
        27dd58:	e3330008 	teq	r3, #8	; 0x8
        27dd5c:	1333000c 	teqne	r3, #12	; 0xc
        27dd60:	1a00011e 	bne	27e1e0 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x4e0>
        27dd64:	e2841e29 	add	r1, r4, #656	; 0x290
        27dd68:	e2811a01 	add	r1, r1, #4096	; 0x1000
        27dd6c:	e1a02001 	mov	r2, r1
        27dd70:	e594c2d8 	ldr	ip, [r4, #728]
        27dd74:	e33c0000 	teq	ip, #0	; 0x0
        27dd78:	e5946028 	ldr	r6, [r4, #40]
        27dd7c:	12033004 	andne	r3, r3, #4	; 0x4
        27dd80:	13330000 	teqne	r3, #0	; 0x0
        27dd84:	0a0000e2 	beq	27e114 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x414>
        27dd88:	e5b870a0 	ldr	r7, [r8, #160]!
        27dd8c:	e5d53014 	ldrb	r3, [r5, #20]
        27dd90:	e3330001 	teq	r3, #1	; 0x1
        27dd94:	15b53018 	ldrne	r3, [r5, #24]!
        27dd98:	03a03000 	moveq	r3, #0	; 0x0
        27dd9c:	e3a0c0ff 	mov	ip, #255	; 0xff
        27dda0:	e00c9423 	and	r9, ip, r3, lsr #8
        27dda4:	e003800c 	and	r8, r3, ip
        27dda8:	e3a0e000 	mov	lr, #0	; 0x0
        27ddac:	e3560000 	cmp	r6, #0	; 0x0
        27ddb0:	da0000d7 	ble	27e114 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x414>
        27ddb4:	e59f5018 	ldr	r5, [pc, #18]	; 27ddd4 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0xd4>
        27ddb8:	e089c189 	add	ip, r9, r9, lsl #3
        27ddbc:	e08c9209 	add	r9, ip, r9, lsl #4
        27ddc0:	e087c209 	add	ip, r7, r9, lsl #4
        27ddc4:	e0887108 	add	r7, r8, r8, lsl #2
        27ddc8:	e08c7087 	add	r7, ip, r7, lsl #1
        27ddcc:	e3a0c004 	mov	ip, #4	; 0x4
        27ddd0:	ea0000a6 	b	27e070 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x370>
        27ddd4:	00376940 	eoreqs	r6, r7, r0, asr #18
        27ddd8:	e3330020 	teq	r3, #32	; 0x20
        27dddc:	0a0000e7 	beq	27e180 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x480>
        27dde0:	e3330041 	teq	r3, #65	; 0x41
        27dde4:	13330081 	teqne	r3, #129	; 0x81
        27dde8:	1a0000fc 	bne	27e1e0 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x4e0>
        27ddec:	e5d50014 	ldrb	r0, [r5, #20]
        27ddf0:	e5c80018 	strb	r0, [r8, #24]
        27ddf4:	e3500004 	cmp	r0, #4	; 0x4
        27ddf8:	aa00009a 	bge	27e068 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x368>
        27ddfc:	e594103c 	ldr	r1, [r4, #60]
        27de00:	e5d50010 	ldrb	r0, [r5, #16]
        27de04:	e1310000 	teq	r1, r0
        27de08:	05941034 	ldreq	r1, [r4, #52]
        27de0c:	05953018 	ldreq	r3, [r5, #24]
        27de10:	01310003 	teqeq	r1, r3
        27de14:	05941040 	ldreq	r1, [r4, #64]
        27de18:	05d53016 	ldreqb	r3, [r5, #22]
        27de1c:	01310003 	teqeq	r1, r3
        27de20:	1a000003 	bne	27de34 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x134>
        27de24:	e5941038 	ldr	r1, [r4, #56]
        27de28:	e3310000 	teq	r1, #0	; 0x0
        27de2c:	11a06001 	movne	r6, r1
        27de30:	1a00008c 	bne	27e068 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x368>
        27de34:	e5c80016 	strb	r0, [r8, #22]
        27de38:	e5950018 	ldr	r0, [r5, #24]
        27de3c:	e588001c 	str	r0, [r8, #28]
        27de40:	e5d50014 	ldrb	r0, [r5, #20]
        27de44:	e5c80018 	strb	r0, [r8, #24]
        27de48:	e5d50016 	ldrb	r0, [r5, #22]
        27de4c:	e5c8001a 	strb	r0, [r8, #26]
        27de50:	e5d50012 	ldrb	r0, [r5, #18]
        27de54:	e5880048 	str	r0, [r8, #72]
        27de58:	e5d51011 	ldrb	r1, [r5, #17]
        27de5c:	e5d50012 	ldrb	r0, [r5, #18]
        27de60:	e0410000 	sub	r0, r1, r0
        27de64:	e0800005 	add	r0, r0, r5
        27de68:	e280101c 	add	r1, r0, #28	; 0x1c
        27de6c:	e1a00002 	mov	r0, r2
        27de70:	eb5fc654 	bl	1a6f7c8 <$HWRStrCpy__FPcT1>
        27de74:	e5d50013 	ldrb	r0, [r5, #19]
        27de78:	e3100080 	tst	r0, #128	; 0x80
        27de7c:	0a000002 	beq	27de8c <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x18c>
        27de80:	e5d800b0 	ldrb	r0, [r8, #176]
        27de84:	eb62ce89 	bl	1b318b0 <$ToLower>
        27de88:	e5c800b0 	strb	r0, [r8, #176]
        27de8c:	e5d51010 	ldrb	r1, [r5, #16]
        27de90:	e1a00008 	mov	r0, r8
        27de94:	eb62d2ab 	bl	1b32948 <$SetupVocHandle(lex_data_type *, int)>
        27de98:	e3300000 	teq	r0, #0	; 0x0
        27de9c:	1a000005 	bne	27deb8 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x1b8>
        27dea0:	e1a01007 	mov	r1, r7
        27dea4:	e1a00008 	mov	r0, r8
        27dea8:	eb628856 	bl	1b20008 <$GF_VocSymbolSet__FP13lex_data_typePA256_11fw_buf_type>
        27deac:	e1a06000 	mov	r6, r0
        27deb0:	e1a01007 	mov	r1, r7
        27deb4:	eb62a95f 	bl	1b28438 <$SortSymBuf(int, fw_buf_type *)>
        27deb8:	e5d50010 	ldrb	r0, [r5, #16]
        27debc:	e3300001 	teq	r0, #1	; 0x1
        27dec0:	0a000008 	beq	27dee8 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x1e8>
        27dec4:	e3a01000 	mov	r1, #0	; 0x0
        27dec8:	e1a00007 	mov	r0, r7
        27decc:	e3560000 	cmp	r6, #0	; 0x0
        27ded0:	da000004 	ble	27dee8 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x1e8>
        27ded4:	e5c0a008 	strb	sl, [r0, #8]
        27ded8:	e2811001 	add	r1, r1, #1	; 0x1
        27dedc:	e280000c 	add	r0, r0, #12	; 0xc
        27dee0:	e1510006 	cmp	r1, r6
        27dee4:	bafffffa 	blt	27ded4 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x1d4>
        27dee8:	e0860086 	add	r0, r6, r6, lsl #1
        27deec:	e0840100 	add	r0, r4, r0, lsl #2
        27def0:	e2808e69 	add	r8, r0, #1680	; 0x690
        27def4:	e3a09000 	mov	r9, #0	; 0x0
        27def8:	e58d6000 	str	r6, [sp]
        27defc:	ea000011 	b	27df48 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x248>
        27df00:	e0890089 	add	r0, r9, r9, lsl #1
        27df04:	e084a100 	add	sl, r4, r0, lsl #2
        27df08:	e5da0690 	ldrb	r0, [sl, #1680]
        27df0c:	eb62c61c 	bl	1b2f784 <$IsLower>
        27df10:	e3300000 	teq	r0, #0	; 0x0
        27df14:	0a00000a 	beq	27df44 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x244>
        27df18:	e28a1e69 	add	r1, sl, #1680	; 0x690
        27df1c:	e8915008 	ldmia	r1, {r3, ip, lr}
        27df20:	e8885008 	stmia	r8, {r3, ip, lr}
        27df24:	e5da0690 	ldrb	r0, [sl, #1680]
        27df28:	eb62ce61 	bl	1b318b4 <$ToUpper>
        27df2c:	e5c80000 	strb	r0, [r8]
        27df30:	e5d80001 	ldrb	r0, [r8, #1]
        27df34:	e3800080 	orr	r0, r0, #128	; 0x80
        27df38:	e5c80001 	strb	r0, [r8, #1]
        27df3c:	e288800c 	add	r8, r8, #12	; 0xc
        27df40:	e2866001 	add	r6, r6, #1	; 0x1
        27df44:	e2899001 	add	r9, r9, #1	; 0x1
        27df48:	e5d50014 	ldrb	r0, [r5, #20]
        27df4c:	e3300001 	teq	r0, #1	; 0x1
        27df50:	1a000005 	bne	27df6c <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x26c>
        27df54:	e51b1030 	ldr	r1, [fp, -#48]
        27df58:	e3310000 	teq	r1, #0	; 0x0
        27df5c:	0a000002 	beq	27df6c <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x26c>
        27df60:	e59d0000 	ldr	r0, [sp]
        27df64:	e1590000 	cmp	r9, r0
        27df68:	baffffe4 	blt	27df00 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x200>
        27df6c:	e5950018 	ldr	r0, [r5, #24]
        27df70:	e5840034 	str	r0, [r4, #52]
        27df74:	e5d50016 	ldrb	r0, [r5, #22]
        27df78:	e5840040 	str	r0, [r4, #64]
        27df7c:	e5d50010 	ldrb	r0, [r5, #16]
        27df80:	e584003c 	str	r0, [r4, #60]
        27df84:	ea000036 	b	27e064 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x364>
        27df88:	e5d50014 	ldrb	r0, [r5, #20]
        27df8c:	e5c80020 	strb	r0, [r8, #32]
        27df90:	e3500004 	cmp	r0, #4	; 0x4
        27df94:	aa000033 	bge	27e068 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x368>
        27df98:	e594003c 	ldr	r0, [r4, #60]
        27df9c:	e3300002 	teq	r0, #2	; 0x2
        27dfa0:	05941034 	ldreq	r1, [r4, #52]
        27dfa4:	05950018 	ldreq	r0, [r5, #24]
        27dfa8:	01310000 	teqeq	r1, r0
        27dfac:	05941040 	ldreq	r1, [r4, #64]
        27dfb0:	05d50016 	ldreqb	r0, [r5, #22]
        27dfb4:	01310000 	teqeq	r1, r0
        27dfb8:	1a000002 	bne	27dfc8 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x2c8>
        27dfbc:	e5946038 	ldr	r6, [r4, #56]
        27dfc0:	e3360000 	teq	r6, #0	; 0x0
        27dfc4:	1a000027 	bne	27e068 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x368>
        27dfc8:	e5d50010 	ldrb	r0, [r5, #16]
        27dfcc:	e5c80016 	strb	r0, [r8, #22]
        27dfd0:	e5950018 	ldr	r0, [r5, #24]
        27dfd4:	e5880024 	str	r0, [r8, #36]
        27dfd8:	e5d50014 	ldrb	r0, [r5, #20]
        27dfdc:	e5c80020 	strb	r0, [r8, #32]
        27dfe0:	e5d50016 	ldrb	r0, [r5, #22]
        27dfe4:	e5c80022 	strb	r0, [r8, #34]
        27dfe8:	e5d50012 	ldrb	r0, [r5, #18]
        27dfec:	e5880048 	str	r0, [r8, #72]
        27dff0:	e5d50011 	ldrb	r0, [r5, #17]
        27dff4:	e5d51012 	ldrb	r1, [r5, #18]
        27dff8:	e0400001 	sub	r0, r0, r1
        27dffc:	e0800005 	add	r0, r0, r5
        27e000:	e280101c 	add	r1, r0, #28	; 0x1c
        27e004:	e1a00002 	mov	r0, r2
        27e008:	eb5fc5ee 	bl	1a6f7c8 <$HWRStrCpy__FPcT1>
        27e00c:	e1a01007 	mov	r1, r7
        27e010:	e1a00008 	mov	r0, r8
        27e014:	eb6287f9 	bl	1b20000 <$GF_LexDbSymbolSet__FP13lex_data_typePA256_11fw_buf_type>
        27e018:	e1a06000 	mov	r6, r0
        27e01c:	e1a01007 	mov	r1, r7
        27e020:	eb62a904 	bl	1b28438 <$SortSymBuf(int, fw_buf_type *)>
        27e024:	e3a01000 	mov	r1, #0	; 0x0
        27e028:	e1a00007 	mov	r0, r7
        27e02c:	e3560000 	cmp	r6, #0	; 0x0
        27e030:	da000006 	ble	27e050 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x350>
        27e034:	e5d02008 	ldrb	r2, [r0, #8]
        27e038:	e28220fe 	add	r2, r2, #254	; 0xfe
        27e03c:	e5c02008 	strb	r2, [r0, #8]
        27e040:	e2811001 	add	r1, r1, #1	; 0x1
        27e044:	e280000c 	add	r0, r0, #12	; 0xc
        27e048:	e1510006 	cmp	r1, r6
        27e04c:	bafffff8 	blt	27e034 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x334>
        27e050:	e5950018 	ldr	r0, [r5, #24]
        27e054:	e5840034 	str	r0, [r4, #52]
        27e058:	e5d50016 	ldrb	r0, [r5, #22]
        27e05c:	e5840040 	str	r0, [r4, #64]
        27e060:	e584903c 	str	r9, [r4, #60]
        27e064:	e5846038 	str	r6, [r4, #56]
        27e068:	e5a4768c 	str	r7, [r4, #1676]!
        27e06c:	ea00005b 	b	27e1e0 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x4e0>
        27e070:	e5d18000 	ldrb	r8, [r1]
        27e074:	e7d58008 	ldrb	r8, [r5, r8]
        27e078:	e2588001 	subs	r8, r8, #1	; 0x1
        27e07c:	4a000013 	bmi	27e0d0 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x3d0>
        27e080:	e3580028 	cmp	r8, #40	; 0x28
        27e084:	a3a08000 	movge	r8, #0	; 0x0
        27e088:	e1a09008 	mov	r9, r8
        27e08c:	e3580000 	cmp	r8, #0	; 0x0
        27e090:	b2899003 	addlt	r9, r9, #3	; 0x3
        27e094:	e1a09149 	mov	r9, r9, asr #2
        27e098:	e7d7a009 	ldrb	sl, [r7, r9]
        27e09c:	e1a09008 	mov	r9, r8
        27e0a0:	b2699000 	rsblt	r9, r9, #0	; 0x0
        27e0a4:	e2099003 	and	r9, r9, #3	; 0x3
        27e0a8:	b2699000 	rsblt	r9, r9, #0	; 0x0
        27e0ac:	e1a09089 	mov	r9, r9, lsl #1
        27e0b0:	e1a0995a 	mov	r9, sl, asr r9
        27e0b4:	e2099003 	and	r9, r9, #3	; 0x3
        27e0b8:	e1888403 	orr	r8, r8, r3, lsl #8
        27e0bc:	e5818004 	str	r8, [r1, #4]
        27e0c0:	e0408009 	sub	r8, r0, r9
        27e0c4:	e2888002 	add	r8, r8, #2	; 0x2
        27e0c8:	e5c18008 	strb	r8, [r1, #8]
        27e0cc:	ea00000c 	b	27e104 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x404>
        27e0d0:	e5d18002 	ldrb	r8, [r1, #2]
        27e0d4:	e3580030 	cmp	r8, #48	; 0x30
        27e0d8:	0a000008 	beq	27e100 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x400>
        27e0dc:	ca000004 	bgt	27e0f4 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x3f4>
        27e0e0:	e3380010 	teq	r8, #16	; 0x10
        27e0e4:	0a000005 	beq	27e100 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x400>
        27e0e8:	e3380020 	teq	r8, #32	; 0x20
        27e0ec:	05c10008 	streqb	r0, [r1, #8]
        27e0f0:	ea000003 	b	27e104 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x404>
        27e0f4:	e3380040 	teq	r8, #64	; 0x40
        27e0f8:	13380050 	teqne	r8, #80	; 0x50
        27e0fc:	1a000000 	bne	27e104 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x404>
        27e100:	e5c1c008 	strb	ip, [r1, #8]
        27e104:	e28ee001 	add	lr, lr, #1	; 0x1
        27e108:	e281100c 	add	r1, r1, #12	; 0xc
        27e10c:	e15e0006 	cmp	lr, r6
        27e110:	baffffd6 	blt	27e070 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x370>
        27e114:	e5a4268c 	str	r2, [r4, #1676]!
        27e118:	ea000030 	b	27e1e0 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x4e0>
        27e11c:	e594002c 	ldr	r0, [r4, #44]
        27e120:	e2842ee9 	add	r2, r4, #3728	; 0xe90
        27e124:	e2822a01 	add	r2, r2, #4096	; 0x1000
        27e128:	e3300000 	teq	r0, #0	; 0x0
        27e12c:	01a03002 	moveq	r3, r2
        27e130:	0a000009 	beq	27e15c <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x45c>
        27e134:	ea00000e 	b	27e174 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x474>
        27e138:	e5c31002 	strb	r1, [r3, #2]
        27e13c:	e5831004 	str	r1, [r3, #4]
        27e140:	e5c39008 	strb	r9, [r3, #8]
        27e144:	e5c3a001 	strb	sl, [r3, #1]
        27e148:	e283300c 	add	r3, r3, #12	; 0xc
        27e14c:	e2866001 	add	r6, r6, #1	; 0x1
        27e150:	e2800001 	add	r0, r0, #1	; 0x1
        27e154:	e3500010 	cmp	r0, #16	; 0x10
        27e158:	aa000004 	bge	27e170 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x470>
        27e15c:	e598c0a8 	ldr	ip, [r8, #168]
        27e160:	e7dcc000 	ldrb	ip, [ip, r0]
        27e164:	e5c3c000 	strb	ip, [r3]
        27e168:	e33c0000 	teq	ip, #0	; 0x0
        27e16c:	1afffff1 	bne	27e138 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x438>
        27e170:	e584602c 	str	r6, [r4, #44]
        27e174:	e584268c 	str	r2, [r4, #1676]
        27e178:	e5b4602c 	ldr	r6, [r4, #44]!
        27e17c:	ea000017 	b	27e1e0 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x4e0>
        27e180:	e5942030 	ldr	r2, [r4, #48]
        27e184:	e2843ef5 	add	r3, r4, #3920	; 0xf50
        27e188:	e2833a01 	add	r3, r3, #4096	; 0x1000
        27e18c:	e3320000 	teq	r2, #0	; 0x0
        27e190:	01a0c003 	moveq	ip, r3
        27e194:	0a000009 	beq	27e1c0 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x4c0>
        27e198:	ea00000e 	b	27e1d8 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x4d8>
        27e19c:	e5cc1002 	strb	r1, [ip, #2]
        27e1a0:	e58c1004 	str	r1, [ip, #4]
        27e1a4:	e5cc9008 	strb	r9, [ip, #8]
        27e1a8:	e5cc0001 	strb	r0, [ip, #1]
        27e1ac:	e28cc00c 	add	ip, ip, #12	; 0xc
        27e1b0:	e2866001 	add	r6, r6, #1	; 0x1
        27e1b4:	e2822001 	add	r2, r2, #1	; 0x1
        27e1b8:	e3520010 	cmp	r2, #16	; 0x10
        27e1bc:	aa000004 	bge	27e1d4 <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x4d4>
        27e1c0:	e598e0ac 	ldr	lr, [r8, #172]
        27e1c4:	e7dee002 	ldrb	lr, [lr, r2]
        27e1c8:	e5cce000 	strb	lr, [ip]
        27e1cc:	e33e0000 	teq	lr, #0	; 0x0
        27e1d0:	1afffff1 	bne	27e19c <XrlvGetNextSymbols(xrlv_var_data_type *, int, xrlv_data_type *)+0x49c>
        27e1d4:	e5846030 	str	r6, [r4, #48]
        27e1d8:	e584368c 	str	r3, [r4, #1676]
        27e1dc:	e5b46030 	ldr	r6, [r4, #48]!
        27e1e0:	e1a00006 	mov	r0, r6
        27e1e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvGetSymAliases__FUciN22PUcP9xrcm_type
 * Address: 0027e1e8
 */
void globals::XrlvGetSymAliases() {
    /*
        27e1e8:	e1a0c00d 	mov	ip, sp
        27e1ec:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27e1f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        27e1f4:	e1a04001 	mov	r4, r1
        27e1f8:	e200a0ff 	and	sl, r0, #255	; 0xff
        27e1fc:	e59b5008 	ldr	r5, [fp, #8]
        27e200:	e59b9004 	ldr	r9, [fp, #4]
        27e204:	e24dd008 	sub	sp, sp, #8	; 0x8
        27e208:	e5950048 	ldr	r0, [r5, #72]
        27e20c:	e5958140 	ldr	r8, [r5, #320]
        27e210:	e58d0004 	str	r0, [sp, #4]
        27e214:	e595112c 	ldr	r1, [r5, #300]
        27e218:	e58d1000 	str	r1, [sp]
        27e21c:	e3c00002 	bic	r0, r0, #2	; 0x2
        27e220:	e3800010 	orr	r0, r0, #16	; 0x10
        27e224:	e5957014 	ldr	r7, [r5, #20]
        27e228:	e5850048 	str	r0, [r5, #72]
        27e22c:	e0870182 	add	r0, r7, r2, lsl #3
        27e230:	e5850014 	str	r0, [r5, #20]
        27e234:	e0430002 	sub	r0, r3, r2
        27e238:	e2401001 	sub	r1, r0, #1	; 0x1
        27e23c:	e2800001 	add	r0, r0, #1	; 0x1
        27e240:	e5850140 	str	r0, [r5, #320]
        27e244:	e58510c4 	str	r1, [r5, #196]
        27e248:	e1a03005 	mov	r3, r5
        27e24c:	e3a02003 	mov	r2, #3	; 0x3
        27e250:	e3a01000 	mov	r1, #0	; 0x0
        27e254:	e3a00064 	mov	r0, #100	; 0x64
        27e258:	eb62c987 	bl	1b3087c <$SetInpLineByValue__FiN21P9xrcm_type>
        27e25c:	e3a00000 	mov	r0, #0	; 0x0
        27e260:	e334000f 	teq	r4, #15	; 0xf
        27e264:	e585002c 	str	r0, [r5, #44]
        27e268:	13a01001 	movne	r1, #1	; 0x1
        27e26c:	11e01411 	mvnne	r1, r1, lsl r4
        27e270:	03a01000 	moveq	r1, #0	; 0x0
        27e274:	e5c510c9 	strb	r1, [r5, #201]
        27e278:	e1a01441 	mov	r1, r1, asr #8
        27e27c:	e5c510c8 	strb	r1, [r5, #200]
        27e280:	e5c5a0ac 	strb	sl, [r5, #172]
        27e284:	e1a04000 	mov	r4, r0
        27e288:	e5c500ad 	strb	r0, [r5, #173]
        27e28c:	e3a01005 	mov	r1, #5	; 0x5
        27e290:	e585112c 	str	r1, [r5, #300]
        27e294:	e5950048 	ldr	r0, [r5, #72]
        27e298:	e3802004 	orr	r2, r0, #4	; 0x4
        27e29c:	e28500ac 	add	r0, r5, #172	; 0xac
        27e2a0:	e1a03005 	mov	r3, r5
        27e2a4:	eb62b8f0 	bl	1b2c66c <$CountWord__FPUciT2P9xrcm_type>
        27e2a8:	e3300000 	teq	r0, #0	; 0x0
        27e2ac:	1a000029 	bne	27e358 <XrlvGetSymAliases__FUciN22PUcP9xrcm_type+0x170>
        27e2b0:	e59501e4 	ldr	r0, [r5, #484]
        27e2b4:	e3300000 	teq	r0, #0	; 0x0
        27e2b8:	0a000026 	beq	27e358 <XrlvGetSymAliases__FUciN22PUcP9xrcm_type+0x170>
        27e2bc:	e3a01000 	mov	r1, #0	; 0x0
        27e2c0:	e3e0e000 	mvn	lr, #0	; 0x0
        27e2c4:	e3a03000 	mov	r3, #0	; 0x0
        27e2c8:	e5b0200c 	ldr	r2, [r0, #12]!
        27e2cc:	e3a00000 	mov	r0, #0	; 0x0
        27e2d0:	e5d2c002 	ldrb	ip, [r2, #2]
        27e2d4:	e35c0000 	cmp	ip, #0	; 0x0
        27e2d8:	da00001b 	ble	27e34c <XrlvGetSymAliases__FUciN22PUcP9xrcm_type+0x164>
        27e2dc:	e082c101 	add	ip, r2, r1, lsl #2
        27e2e0:	e28cc008 	add	ip, ip, #8	; 0x8
        27e2e4:	e5dca001 	ldrb	sl, [ip, #1]
        27e2e8:	e13a000e 	teq	sl, lr
        27e2ec:	0a00000f 	beq	27e330 <XrlvGetSymAliases__FUciN22PUcP9xrcm_type+0x148>
        27e2f0:	e5dce002 	ldrb	lr, [ip, #2]
        27e2f4:	e33e0003 	teq	lr, #3	; 0x3
        27e2f8:	03a06003 	moveq	r6, #3	; 0x3
        27e2fc:	0a000004 	beq	27e314 <XrlvGetSymAliases__FUciN22PUcP9xrcm_type+0x12c>
        27e300:	e33e0002 	teq	lr, #2	; 0x2
        27e304:	1a000002 	bne	27e314 <XrlvGetSymAliases__FUciN22PUcP9xrcm_type+0x12c>
        27e308:	e3330000 	teq	r3, #0	; 0x0
        27e30c:	03a06002 	moveq	r6, #2	; 0x2
        27e310:	13a06001 	movne	r6, #1	; 0x1
        27e314:	e5dc3000 	ldrb	r3, [ip]
        27e318:	e1833306 	orr	r3, r3, r6, lsl #6
        27e31c:	e7c93000 	strb	r3, [r9, r0]
        27e320:	e5dce001 	ldrb	lr, [ip, #1]
        27e324:	e2800001 	add	r0, r0, #1	; 0x1
        27e328:	e3a03000 	mov	r3, #0	; 0x0
        27e32c:	ea000000 	b	27e334 <XrlvGetSymAliases__FUciN22PUcP9xrcm_type+0x14c>
        27e330:	e3a03001 	mov	r3, #1	; 0x1
        27e334:	e2811001 	add	r1, r1, #1	; 0x1
        27e338:	e5d2c002 	ldrb	ip, [r2, #2]
        27e33c:	e15c0001 	cmp	ip, r1
        27e340:	caffffe5 	bgt	27e2dc <XrlvGetSymAliases__FUciN22PUcP9xrcm_type+0xf4>
        27e344:	e350000c 	cmp	r0, #12	; 0xc
        27e348:	aa000000 	bge	27e350 <XrlvGetSymAliases__FUciN22PUcP9xrcm_type+0x168>
        27e34c:	e7c94000 	strb	r4, [r9, r0]
        27e350:	e1a00005 	mov	r0, r5
        27e354:	eb62bce7 	bl	1b2d6f8 <$FreeLayout(xrcm_type *)>
        27e358:	e59d0004 	ldr	r0, [sp, #4]
        27e35c:	e5850048 	str	r0, [r5, #72]
        27e360:	e1a00004 	mov	r0, r4
        27e364:	e58540c4 	str	r4, [r5, #196]
        27e368:	e5c54099 	strb	r4, [r5, #153]
        27e36c:	e5c54098 	strb	r4, [r5, #152]
        27e370:	e5c540c9 	strb	r4, [r5, #201]
        27e374:	e5c540c8 	strb	r4, [r5, #200]
        27e378:	e5857014 	str	r7, [r5, #20]
        27e37c:	e5858140 	str	r8, [r5, #320]
        27e380:	e59d1000 	ldr	r1, [sp]
        27e384:	e5a5112c 	str	r1, [r5, #300]!
        27e388:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XrlvSortAns(xrlv_data_type *)
 * Address: 0027e38c
 */
XrlvSortAns(xrlv_data_type *) {
    /*
        27e38c:	e1a0c00d 	mov	ip, sp
        27e390:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27e394:	e24cb004 	sub	fp, ip, #4	; 0x4
        27e398:	e1a04000 	mov	r4, r0
        27e39c:	e5900000 	ldr	r0, [r0]
        27e3a0:	e0840100 	add	r0, r4, r0, lsl #2
        27e3a4:	e5b08054 	ldr	r8, [r0, #84]!
        27e3a8:	e2885014 	add	r5, r8, #20	; 0x14
        27e3ac:	e3a07000 	mov	r7, #0	; 0x0
        27e3b0:	e2846098 	add	r6, r4, #152	; 0x98
        27e3b4:	e2866b01 	add	r6, r6, #1024	; 0x400
        27e3b8:	e1a0a006 	mov	sl, r6
        27e3bc:	e5980010 	ldr	r0, [r8, #16]
        27e3c0:	e3500000 	cmp	r0, #0	; 0x0
        27e3c4:	da00002a 	ble	27e474 <XrlvSortAns(xrlv_data_type *)+0xe8>
        27e3c8:	e5d50010 	ldrb	r0, [r5, #16]
        27e3cc:	e3100003 	tst	r0, #3	; 0x3
        27e3d0:	0a000007 	beq	27e3f4 <XrlvSortAns(xrlv_data_type *)+0x68>
        27e3d4:	e1a01004 	mov	r1, r4
        27e3d8:	e1a00005 	mov	r0, r5
        27e3dc:	eb62d998 	bl	1b34a44 <$XrlvCheckDictCap(xrlv_var_data_type *, xrlv_data_type *)>
        27e3e0:	e5940000 	ldr	r0, [r4]
        27e3e4:	e2400001 	sub	r0, r0, #1	; 0x1
        27e3e8:	e1a02004 	mov	r2, r4
        27e3ec:	e1a01005 	mov	r1, r5
        27e3f0:	eb62d991 	bl	1b34a3c <$XrlvApplyWordEndInfo(int, xrlv_var_data_type *, xrlv_data_type *)>
        27e3f4:	e5d50014 	ldrb	r0, [r5, #20]
        27e3f8:	e3500003 	cmp	r0, #3	; 0x3
        27e3fc:	a3a09000 	movge	r9, #0	; 0x0
        27e400:	b3a0900c 	movlt	r9, #12	; 0xc
        27e404:	e595100e 	ldr	r1, [r5, #14]
        27e408:	e5940024 	ldr	r0, [r4, #36]
        27e40c:	e0600841 	rsb	r0, r0, r1, asr #16
        27e410:	e0400009 	sub	r0, r0, r9
        27e414:	e0801080 	add	r1, r0, r0, lsl #1
        27e418:	e0611380 	rsb	r1, r1, r0, lsl #7
        27e41c:	e1a01181 	mov	r1, r1, lsl #3
        27e420:	e5940020 	ldr	r0, [r4, #32]
        27e424:	eb64d145 	bl	1bb2940 <$__rt_sdiv>
        27e428:	e5d51010 	ldrb	r1, [r5, #16]
        27e42c:	e3110003 	tst	r1, #3	; 0x3
        27e430:	12800001 	addne	r0, r0, #1	; 0x1
        27e434:	e3500000 	cmp	r0, #0	; 0x0
        27e438:	b3a00000 	movlt	r0, #0	; 0x0
        27e43c:	ba000001 	blt	27e448 <XrlvSortAns(xrlv_data_type *)+0xbc>
        27e440:	e3500e7d 	cmp	r0, #2000	; 0x7d0
        27e444:	c3a00e7d 	movgt	r0, #2000	; 0x7d0
        27e448:	e5c60001 	strb	r0, [r6, #1]
        27e44c:	e1a00440 	mov	r0, r0, asr #8
        27e450:	e5c60000 	strb	r0, [r6]
        27e454:	e5c69003 	strb	r9, [r6, #3]
        27e458:	e5c67002 	strb	r7, [r6, #2]
        27e45c:	e2877001 	add	r7, r7, #1	; 0x1
        27e460:	e2866004 	add	r6, r6, #4	; 0x4
        27e464:	e2855064 	add	r5, r5, #100	; 0x64
        27e468:	e5980010 	ldr	r0, [r8, #16]
        27e46c:	e1500007 	cmp	r0, r7
        27e470:	caffffd4 	bgt	27e3c8 <XrlvSortAns(xrlv_data_type *)+0x3c>
        27e474:	e284c09c 	add	ip, r4, #156	; 0x9c
        27e478:	e28ccb01 	add	ip, ip, #1024	; 0x400
        27e47c:	e3a03001 	mov	r3, #1	; 0x1
        27e480:	e1a0100a 	mov	r1, sl
        27e484:	e1a0000c 	mov	r0, ip
        27e488:	e3a02001 	mov	r2, #1	; 0x1
        27e48c:	e598e010 	ldr	lr, [r8, #16]
        27e490:	e35e0001 	cmp	lr, #1	; 0x1
        27e494:	da000011 	ble	27e4e0 <XrlvSortAns(xrlv_data_type *)+0x154>
        27e498:	e5904000 	ldr	r4, [r0]
        27e49c:	e1a04844 	mov	r4, r4, asr #16
        27e4a0:	e591e000 	ldr	lr, [r1]
        27e4a4:	e154084e 	cmp	r4, lr, asr #16
        27e4a8:	da000004 	ble	27e4c0 <XrlvSortAns(xrlv_data_type *)+0x134>
        27e4ac:	e5913000 	ldr	r3, [r1]
        27e4b0:	e590e000 	ldr	lr, [r0]
        27e4b4:	e581e000 	str	lr, [r1]
        27e4b8:	e5803000 	str	r3, [r0]
        27e4bc:	e3a03000 	mov	r3, #0	; 0x0
        27e4c0:	e2822001 	add	r2, r2, #1	; 0x1
        27e4c4:	e2800004 	add	r0, r0, #4	; 0x4
        27e4c8:	e2811004 	add	r1, r1, #4	; 0x4
        27e4cc:	e598e010 	ldr	lr, [r8, #16]
        27e4d0:	e15e0002 	cmp	lr, r2
        27e4d4:	caffffef 	bgt	27e498 <XrlvSortAns(xrlv_data_type *)+0x10c>
        27e4d8:	e3330000 	teq	r3, #0	; 0x0
        27e4dc:	0affffe6 	beq	27e47c <XrlvSortAns(xrlv_data_type *)+0xf0>
        27e4e0:	e3a00000 	mov	r0, #0	; 0x0
        27e4e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: x_in_curve(tag_wapx_type *, tag_CHUNK *, int)
 * Address: 002a8174
 */
x_in_curve(tag_wapx_type *, tag_CHUNK *, int) {
    /*
        2a8174:	e1a0c00d 	mov	ip, sp
        2a8178:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2a817c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a8180:	e3e0c000 	mvn	ip, #0	; 0x0
        2a8184:	e1a0e00c 	mov	lr, ip
        2a8188:	e591304c 	ldr	r3, [r1, #76]
        2a818c:	e5914040 	ldr	r4, [r1, #64]
        2a8190:	e1540003 	cmp	r4, r3
        2a8194:	d5914004 	ldrle	r4, [r1, #4]
        2a8198:	d5915000 	ldrle	r5, [r1]
        2a819c:	c8910030 	ldmgtia	r1, {r4, r5}
        2a81a0:	e8910048 	ldmia	r1, {r3, r6}
        2a81a4:	e1560003 	cmp	r6, r3
        2a81a8:	ba00001d 	blt	2a8224 <x_in_curve(tag_wapx_type *, tag_CHUNK *, int)+0xb0>
        2a81ac:	e0631183 	rsb	r1, r3, r3, lsl #3
        2a81b0:	e0801101 	add	r1, r0, r1, lsl #2
        2a81b4:	e5911014 	ldr	r1, [r1, #20]
        2a81b8:	e1310002 	teq	r1, r2
        2a81bc:	00631183 	rsbeq	r1, r3, r3, lsl #3
        2a81c0:	0a00001e 	beq	2a8240 <x_in_curve(tag_wapx_type *, tag_CHUNK *, int)+0xcc>
        2a81c4:	e37c0001 	cmn	ip, #1	; 0x1
        2a81c8:	0a00000f 	beq	2a820c <x_in_curve(tag_wapx_type *, tag_CHUNK *, int)+0x98>
        2a81cc:	e1510002 	cmp	r1, r2
        2a81d0:	da000004 	ble	2a81e8 <x_in_curve(tag_wapx_type *, tag_CHUNK *, int)+0x74>
        2a81d4:	e06c718c 	rsb	r7, ip, ip, lsl #3
        2a81d8:	e0807107 	add	r7, r0, r7, lsl #2
        2a81dc:	e5977014 	ldr	r7, [r7, #20]
        2a81e0:	e1570002 	cmp	r7, r2
        2a81e4:	ba000006 	blt	2a8204 <x_in_curve(tag_wapx_type *, tag_CHUNK *, int)+0x90>
        2a81e8:	e1510002 	cmp	r1, r2
        2a81ec:	aa000006 	bge	2a820c <x_in_curve(tag_wapx_type *, tag_CHUNK *, int)+0x98>
        2a81f0:	e06c118c 	rsb	r1, ip, ip, lsl #3
        2a81f4:	e0801101 	add	r1, r0, r1, lsl #2
        2a81f8:	e5911014 	ldr	r1, [r1, #20]
        2a81fc:	e1510002 	cmp	r1, r2
        2a8200:	da000001 	ble	2a820c <x_in_curve(tag_wapx_type *, tag_CHUNK *, int)+0x98>
        2a8204:	e1a0e003 	mov	lr, r3
        2a8208:	ea000003 	b	2a821c <x_in_curve(tag_wapx_type *, tag_CHUNK *, int)+0xa8>
        2a820c:	e1a0c003 	mov	ip, r3
        2a8210:	e2833001 	add	r3, r3, #1	; 0x1
        2a8214:	e1560003 	cmp	r6, r3
        2a8218:	aaffffe3 	bge	2a81ac <x_in_curve(tag_wapx_type *, tag_CHUNK *, int)+0x38>
        2a821c:	e37e0001 	cmn	lr, #1	; 0x1
        2a8220:	1a000009 	bne	2a824c <x_in_curve(tag_wapx_type *, tag_CHUNK *, int)+0xd8>
        2a8224:	e0651185 	rsb	r1, r5, r5, lsl #3
        2a8228:	e0801101 	add	r1, r0, r1, lsl #2
        2a822c:	e5913014 	ldr	r3, [r1, #20]
        2a8230:	e1530002 	cmp	r3, r2
        2a8234:	c5b10010 	ldrgt	r0, [r1, #16]!
        2a8238:	c91ba8f0 	ldmgtdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2a823c:	e0641184 	rsb	r1, r4, r4, lsl #3
        2a8240:	e0800101 	add	r0, r0, r1, lsl #2
        2a8244:	e5900010 	ldr	r0, [r0, #16]
        2a8248:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2a824c:	e06c118c 	rsb	r1, ip, ip, lsl #3
        2a8250:	e0801101 	add	r1, r0, r1, lsl #2
        2a8254:	e5b13014 	ldr	r3, [r1, #20]!
        2a8258:	e06e118e 	rsb	r1, lr, lr, lsl #3
        2a825c:	e0801101 	add	r1, r0, r1, lsl #2
        2a8260:	e5911014 	ldr	r1, [r1, #20]
        2a8264:	e1530001 	cmp	r3, r1
        2a8268:	d1a0100e 	movle	r1, lr
        2a826c:	d1a0e00c 	movle	lr, ip
        2a8270:	c1a0100c 	movgt	r1, ip
        2a8274:	e1a03002 	mov	r3, r2
        2a8278:	e92d0008 	stmdb	sp!, {r3}
        2a827c:	e0611181 	rsb	r1, r1, r1, lsl #3
        2a8280:	e0801101 	add	r1, r0, r1, lsl #2
        2a8284:	e281100c 	add	r1, r1, #12	; 0xc
        2a8288:	e9b1000c 	ldmib	r1!, {r2, r3}
        2a828c:	e06e118e 	rsb	r1, lr, lr, lsl #3
        2a8290:	e0800101 	add	r0, r0, r1, lsl #2
        2a8294:	e2801010 	add	r1, r0, #16	; 0x10
        2a8298:	e8910003 	ldmia	r1, {r0, r1}
        2a829c:	eb6229a2 	bl	1b3292c <$x_in_line__FiN41>
        2a82a0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: x_in_line__FiN41
 * Address: 002a82a4
 */
void globals::x_in_line() {
    /*
        2a82a4:	e1a0c00d 	mov	ip, sp
        2a82a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2a82ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a82b0:	e1a04000 	mov	r4, r0
        2a82b4:	e1320004 	teq	r2, r4
        2a82b8:	e59b0004 	ldr	r0, [fp, #4]
        2a82bc:	11300001 	teqne	r0, r1
        2a82c0:	01a00004 	moveq	r0, r4
        2a82c4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2a82c8:	e1330001 	teq	r3, r1
        2a82cc:	03e00000 	mvneq	r0, #0	; 0x0
        2a82d0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2a82d4:	e0422004 	sub	r2, r2, r4
        2a82d8:	e0400001 	sub	r0, r0, r1
        2a82dc:	e0020290 	mul	r2, r0, r2
        2a82e0:	e0430001 	sub	r0, r3, r1
        2a82e4:	e1a01002 	mov	r1, r2
        2a82e8:	eb642994 	bl	1bb2940 <$__rt_sdiv>
        2a82ec:	e0800004 	add	r0, r0, r4
        2a82f0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: xt_st_zz(low_type *)
 * Address: 002af7ac
 */
xt_st_zz(low_type *) {
    /*
        2af7ac:	e1a0c00d 	mov	ip, sp
        2af7b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2af7b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2af7b8:	e1a04000 	mov	r4, r0
        2af7bc:	e5905040 	ldr	r5, [r0, #64]
        2af7c0:	eb61a930 	bl	1b19c88 <$conv_top_elem_to_ST(low_type *)>
        2af7c4:	e5940000 	ldr	r0, [r4]
        2af7c8:	e5900006 	ldr	r0, [r0, #6]
        2af7cc:	e1a00820 	mov	r0, r0, lsr #16
        2af7d0:	e310000e 	tst	r0, #14	; 0xe
        2af7d4:	11a00004 	movne	r0, r4
        2af7d8:	1b61dae4 	blne	1b26370 <$find_umlaut(low_type *)>
        2af7dc:	e5940000 	ldr	r0, [r4]
        2af7e0:	e5900006 	ldr	r0, [r0, #6]
        2af7e4:	e1a00820 	mov	r0, r0, lsr #16
        2af7e8:	e3100008 	tst	r0, #8	; 0x8
        2af7ec:	11a00004 	movne	r0, r4
        2af7f0:	1b61dadd 	blne	1b2636c <$find_angstrem(low_type *)>
        2af7f4:	e5940000 	ldr	r0, [r4]
        2af7f8:	e5900004 	ldr	r0, [r0, #4]
        2af7fc:	e1a00840 	mov	r0, r0, asr #16
        2af800:	e3300001 	teq	r0, #1	; 0x1
        2af804:	11a00004 	movne	r0, r4
        2af808:	1b61b581 	blne	1b1ce14 <$redirect_sticks(low_type *)>
        2af80c:	e1a00004 	mov	r0, r4
        2af810:	eb61bdce 	bl	1b1ef50 <$FindDelayedStroke(low_type *)>
        2af814:	e1a00004 	mov	r0, r4
        2af818:	eb61b173 	bl	1b1bdec <$placement_XT_ST(low_type *)>
        2af81c:	e1a00004 	mov	r0, r4
        2af820:	eb61a933 	bl	1b19cf4 <$FindDArcs(low_type *)>
        2af824:	e5940000 	ldr	r0, [r4]
        2af828:	e5901094 	ldr	r1, [r0, #148]
        2af82c:	e1a01821 	mov	r1, r1, lsr #16
        2af830:	e3310010 	teq	r1, #16	; 0x10
        2af834:	1a000004 	bne	2af84c <xt_st_zz(low_type *)+0xa0>
        2af838:	e5900004 	ldr	r0, [r0, #4]
        2af83c:	e1a00840 	mov	r0, r0, asr #16
        2af840:	e3300001 	teq	r0, #1	; 0x1
        2af844:	11a00004 	movne	r0, r4
        2af848:	1b61a913 	blne	1b19c9c <$del_close_MAX_MIN(low_type *)>
        2af84c:	e1a00004 	mov	r0, r4
        2af850:	eb61ce57 	bl	1b231b4 <$SortXT_ST(low_type *)>
        2af854:	e1a00004 	mov	r0, r4
        2af858:	eb61b162 	bl	1b1bde8 <$placement_X(low_type *)>
        2af85c:	e1a00004 	mov	r0, r4
        2af860:	eb61bdbb 	bl	1b1ef54 <$FindMisplacedParentheses(low_type *)>
        2af864:	e1a00005 	mov	r0, r5
        2af868:	eb61a90e 	bl	1b19ca8 <$del_ZZ_HATCH(SPEC_TYPE *)>
        2af86c:	e1a00004 	mov	r0, r4
        2af870:	eb61dec4 	bl	1b27388 <$CheckStrokesForDxTimeMatch(low_type *)>
        2af874:	e1a00004 	mov	r0, r4
        2af878:	eb61a4eb 	bl	1b18c2c <$change_last_IU_height(low_type *)>
        2af87c:	e1a00004 	mov	r0, r4
        2af880:	eb61da9f 	bl	1b26304 <$make_different_breaks(low_type *)>
        2af884:	e1a00004 	mov	r0, r4
        2af888:	eb61a0db 	bl	1b17bfc <$AdjustZZ_BegEnd(low_type *)>
        2af88c:	e1a00004 	mov	r0, r4
        2af890:	eb61b98a 	bl	1b1dec0 <$CheckSequenceOfElements(low_type *)>
        2af894:	e3a00000 	mov	r0, #0	; 0x0
        2af898:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: XGetVariable__FRC6RefVarT1Pli
 * Address: 002ff82c
 */
void globals::XGetVariable() {
    /*
        2ff82c:	e1a0c00d 	mov	ip, sp
        2ff830:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ff834:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ff838:	e1a04001 	mov	r4, r1
        2ff83c:	e1a05002 	mov	r5, r2
        2ff840:	e1a09003 	mov	r9, r3
        2ff844:	e51b0038 	ldr	r0, [fp, -#56]
        2ff848:	e5900000 	ldr	r0, [r0]
        2ff84c:	e5900000 	ldr	r0, [r0]
        2ff850:	e1a01000 	mov	r1, r0
        2ff854:	e3300002 	teq	r0, #2	; 0x2
        2ff858:	03a00000 	moveq	r0, #0	; 0x0
        2ff85c:	05850000 	streq	r0, [r5]
        2ff860:	03a00002 	moveq	r0, #2	; 0x2
        2ff864:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ff868:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ff86c:	e1a03005 	mov	r3, r5
        2ff870:	e92d0008 	stmdb	sp!, {r3}
        2ff874:	e5940000 	ldr	r0, [r4]
        2ff878:	e28d3004 	add	r3, sp, #4	; 0x4
        2ff87c:	e5902000 	ldr	r2, [r0]
        2ff880:	e59f70f8 	ldr	r7, [pc, #f8]	; 2ff980 <XGetVariable__FRC6RefVarT1Pli+0x154>
        2ff884:	e5970000 	ldr	r0, [r7]
        2ff888:	eb5d5898 	bl	1a55af0 <TICache::$LookupValue(long, long, long *, long *)>
        2ff88c:	e28dd004 	add	sp, sp, #4	; 0x4
        2ff890:	e3300000 	teq	r0, #0	; 0x0
        2ff894:	149d0004 	ldrne	r0, [sp], #4
        2ff898:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ff89c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2ff8a0:	e51b0038 	ldr	r0, [fp, -#56]
        2ff8a4:	e5900000 	ldr	r0, [r0]
        2ff8a8:	e5900000 	ldr	r0, [r0]
        2ff8ac:	eb630a26 	bl	1bc214c <$AllocateRefHandle(long)>
        2ff8b0:	e58d0008 	str	r0, [sp, #8]
        2ff8b4:	e3a00002 	mov	r0, #2	; 0x2
        2ff8b8:	eb630a23 	bl	1bc214c <$AllocateRefHandle(long)>
        2ff8bc:	e1a08000 	mov	r8, r0
        2ff8c0:	e51b0038 	ldr	r0, [fp, -#56]
        2ff8c4:	e5900000 	ldr	r0, [r0]
        2ff8c8:	e5900000 	ldr	r0, [r0]
        2ff8cc:	eb630a1e 	bl	1bc214c <$AllocateRefHandle(long)>
        2ff8d0:	e1a06000 	mov	r6, r0
        2ff8d4:	e1b00009 	movs	r0, r9
        2ff8d8:	e59f90a4 	ldr	r9, [pc, #a4]	; 2ff984 <XGetVariable__FRC6RefVarT1Pli+0x158>
        2ff8dc:	0a00003f 	beq	2ff9e0 <XGetVariable__FRC6RefVarT1Pli+0x1b4>
        2ff8e0:	e59fa0a0 	ldr	sl, [pc, #a0]	; 2ff988 <XGetVariable__FRC6RefVarT1Pli+0x15c>
        2ff8e4:	e59d0008 	ldr	r0, [sp, #8]
        2ff8e8:	e5900000 	ldr	r0, [r0]
        2ff8ec:	eb631680 	bl	1bc52f4 <$ObjectPtr(long)>
        2ff8f0:	e5900008 	ldr	r0, [r0, #8]
        2ff8f4:	e5880000 	str	r0, [r8]
        2ff8f8:	e5941000 	ldr	r1, [r4]
        2ff8fc:	e5911000 	ldr	r1, [r1]
        2ff900:	eb5cfd93 	bl	1a3ef54 <$FindOffset__FlT1>
        2ff904:	e58d0004 	str	r0, [sp, #4]
        2ff908:	e3700001 	cmn	r0, #1	; 0x1
        2ff90c:	0a00001e 	beq	2ff98c <XGetVariable__FRC6RefVarT1Pli+0x160>
        2ff910:	e3a00001 	mov	r0, #1	; 0x1
        2ff914:	e5850000 	str	r0, [r5]
        2ff918:	e59d3004 	ldr	r3, [sp, #4]
        2ff91c:	e92d0008 	stmdb	sp!, {r3}
        2ff920:	e59d000c 	ldr	r0, [sp, #12]
        2ff924:	e5903000 	ldr	r3, [r0]
        2ff928:	e5940000 	ldr	r0, [r4]
        2ff92c:	e5902000 	ldr	r2, [r0]
        2ff930:	e51b0038 	ldr	r0, [fp, -#56]
        2ff934:	e5900000 	ldr	r0, [r0]
        2ff938:	e5901000 	ldr	r1, [r0]
        2ff93c:	e5970000 	ldr	r0, [r7]
        2ff940:	eb5d585a 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        2ff944:	e28dd004 	add	sp, sp, #4	; 0x4
        2ff948:	e59d0008 	ldr	r0, [sp, #8]
        2ff94c:	e5900000 	ldr	r0, [r0]
        2ff950:	e59d4004 	ldr	r4, [sp, #4]
        2ff954:	eb631666 	bl	1bc52f4 <$ObjectPtr(long)>
        2ff958:	e0800104 	add	r0, r0, r4, lsl #2
        2ff95c:	e5b0400c 	ldr	r4, [r0, #12]!
        2ff960:	e1a00006 	mov	r0, r6
        2ff964:	eb630e14 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ff968:	e1a00008 	mov	r0, r8
        2ff96c:	eb630e12 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ff970:	e59d0008 	ldr	r0, [sp, #8]
        2ff974:	eb630e10 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ff978:	e1a00004 	mov	r0, r4
        2ff97c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ff980:	0c105498 	ldceq	4, cr5, [r0], -#608
        2ff984:	00685388 	rsbeq	r5, r8, r8, lsl #7
        2ff988:	00685368 	rsbeq	r5, r8, r8, ror #6
        2ff98c:	e59a0000 	ldr	r0, [sl]
        2ff990:	e5901000 	ldr	r1, [r0]
        2ff994:	e59d0008 	ldr	r0, [sp, #8]
        2ff998:	e5900000 	ldr	r0, [r0]
        2ff99c:	e1a0200d 	mov	r2, sp
        2ff9a0:	eb5d64ab 	bl	1a58c54 <$UnsafeGetFrameSlot__FlT1Pl>
        2ff9a4:	e59d1008 	ldr	r1, [sp, #8]
        2ff9a8:	e5810000 	str	r0, [r1]
        2ff9ac:	e3300002 	teq	r0, #2	; 0x2
        2ff9b0:	0a000002 	beq	2ff9c0 <XGetVariable__FRC6RefVarT1Pli+0x194>
        2ff9b4:	eb63163c 	bl	1bc52ac <$Length(long)>
        2ff9b8:	e3500000 	cmp	r0, #0	; 0x0
        2ff9bc:	caffffc8 	bgt	2ff8e4 <XGetVariable__FRC6RefVarT1Pli+0xb8>
        2ff9c0:	e5990000 	ldr	r0, [r9]
        2ff9c4:	e5901000 	ldr	r1, [r0]
        2ff9c8:	e1a0200d 	mov	r2, sp
        2ff9cc:	e5960000 	ldr	r0, [r6]
        2ff9d0:	eb5d649f 	bl	1a58c54 <$UnsafeGetFrameSlot__FlT1Pl>
        2ff9d4:	e59d1008 	ldr	r1, [sp, #8]
        2ff9d8:	e5810000 	str	r0, [r1]
        2ff9dc:	e5860000 	str	r0, [r6]
        2ff9e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ff9e4:	e59d000c 	ldr	r0, [sp, #12]
        2ff9e8:	e5900000 	ldr	r0, [r0]
        2ff9ec:	e3300002 	teq	r0, #2	; 0x2
        2ff9f0:	0a000049 	beq	2ffb1c <XGetVariable__FRC6RefVarT1Pli+0x2f0>
        2ff9f4:	e28d3008 	add	r3, sp, #8	; 0x8
        2ff9f8:	e1a02005 	mov	r2, r5
        2ff9fc:	e28d1010 	add	r1, sp, #16	; 0x10
        2ffa00:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2ffa04:	e5941000 	ldr	r1, [r4]
        2ffa08:	e5912000 	ldr	r2, [r1]
        2ffa0c:	e1a01000 	mov	r1, r0
        2ffa10:	e28d300c 	add	r3, sp, #12	; 0xc
        2ffa14:	e5970008 	ldr	r0, [r7, #8]
        2ffa18:	eb5d5835 	bl	1a55af4 <TICache::$Lookup(long, long, long *, long *, long *, long *)>
        2ffa1c:	e28dd00c 	add	sp, sp, #12	; 0xc
        2ffa20:	e3300000 	teq	r0, #0	; 0x0
        2ffa24:	0a00003c 	beq	2ffb1c <XGetVariable__FRC6RefVarT1Pli+0x2f0>
        2ffa28:	e5950000 	ldr	r0, [r5]
        2ffa2c:	e3300000 	teq	r0, #0	; 0x0
        2ffa30:	0a000013 	beq	2ffa84 <XGetVariable__FRC6RefVarT1Pli+0x258>
        2ffa34:	e59d3008 	ldr	r3, [sp, #8]
        2ffa38:	e92d0008 	stmdb	sp!, {r3}
        2ffa3c:	e5940000 	ldr	r0, [r4]
        2ffa40:	e5902000 	ldr	r2, [r0]
        2ffa44:	e51b0038 	ldr	r0, [fp, -#56]
        2ffa48:	e5900000 	ldr	r0, [r0]
        2ffa4c:	e5901000 	ldr	r1, [r0]
        2ffa50:	e59d3004 	ldr	r3, [sp, #4]
        2ffa54:	e5970000 	ldr	r0, [r7]
        2ffa58:	eb5d5814 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        2ffa5c:	e28dd004 	add	sp, sp, #4	; 0x4
        2ffa60:	e1a00006 	mov	r0, r6
        2ffa64:	e59d4010 	ldr	r4, [sp, #16]
        2ffa68:	eb630dd3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ffa6c:	e1a00008 	mov	r0, r8
        2ffa70:	eb630dd1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ffa74:	e59d000c 	ldr	r0, [sp, #12]
        2ffa78:	eb630dcf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ffa7c:	e1a00004 	mov	r0, r4
        2ffa80:	ea00001d 	b	2ffafc <XGetVariable__FRC6RefVarT1Pli+0x2d0>
        2ffa84:	e5960000 	ldr	r0, [r6]
        2ffa88:	eb631619 	bl	1bc52f4 <$ObjectPtr(long)>
        2ffa8c:	e5900008 	ldr	r0, [r0, #8]
        2ffa90:	e5880000 	str	r0, [r8]
        2ffa94:	e5991000 	ldr	r1, [r9]
        2ffa98:	e5911000 	ldr	r1, [r1]
        2ffa9c:	eb5cfd2c 	bl	1a3ef54 <$FindOffset__FlT1>
        2ffaa0:	e58d0008 	str	r0, [sp, #8]
        2ffaa4:	e1a0a000 	mov	sl, r0
        2ffaa8:	e3700001 	cmn	r0, #1	; 0x1
        2ffaac:	1a000013 	bne	2ffb00 <XGetVariable__FRC6RefVarT1Pli+0x2d4>
        2ffab0:	e3a00000 	mov	r0, #0	; 0x0
        2ffab4:	e3a03000 	mov	r3, #0	; 0x0
        2ffab8:	e5850000 	str	r0, [r5]
        2ffabc:	e92d0008 	stmdb	sp!, {r3}
        2ffac0:	e5940000 	ldr	r0, [r4]
        2ffac4:	e5902000 	ldr	r2, [r0]
        2ffac8:	e51b0038 	ldr	r0, [fp, -#56]
        2ffacc:	e5900000 	ldr	r0, [r0]
        2ffad0:	e5901000 	ldr	r1, [r0]
        2ffad4:	e5970000 	ldr	r0, [r7]
        2ffad8:	eb5d57f4 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        2ffadc:	e28dd004 	add	sp, sp, #4	; 0x4
        2ffae0:	e1a00006 	mov	r0, r6
        2ffae4:	eb630db4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ffae8:	e1a00008 	mov	r0, r8
        2ffaec:	eb630db2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ffaf0:	e59d000c 	ldr	r0, [sp, #12]
        2ffaf4:	eb630db0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ffaf8:	e3a00002 	mov	r0, #2	; 0x2
        2ffafc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ffb00:	e5960000 	ldr	r0, [r6]
        2ffb04:	eb6315fa 	bl	1bc52f4 <$ObjectPtr(long)>
        2ffb08:	e080010a 	add	r0, r0, sl, lsl #2
        2ffb0c:	e590000c 	ldr	r0, [r0, #12]
        2ffb10:	e59d100c 	ldr	r1, [sp, #12]
        2ffb14:	e5810000 	str	r0, [r1]
        2ffb18:	e5860000 	str	r0, [r6]
        2ffb1c:	e3a00001 	mov	r0, #1	; 0x1
        2ffb20:	e52d0004 	str	r0, [sp, -#4]!
        2ffb24:	e59d0010 	ldr	r0, [sp, #16]
        2ffb28:	e5900000 	ldr	r0, [r0]
        2ffb2c:	e3300002 	teq	r0, #2	; 0x2
        2ffb30:	0a0000bb 	beq	2ffe24 <XGetVariable__FRC6RefVarT1Pli+0x5f8>
        2ffb34:	e3a09000 	mov	r9, #0	; 0x0
        2ffb38:	e59d0010 	ldr	r0, [sp, #16]
        2ffb3c:	e5900000 	ldr	r0, [r0]
        2ffb40:	eb6315eb 	bl	1bc52f4 <$ObjectPtr(long)>
        2ffb44:	e1a0a000 	mov	sl, r0
        2ffb48:	e5900000 	ldr	r0, [r0]
        2ffb4c:	e2000003 	and	r0, r0, #3	; 0x3
        2ffb50:	e3300003 	teq	r0, #3	; 0x3
        2ffb54:	128d1010 	addne	r1, sp, #16	; 0x10
        2ffb58:	13a00e2f 	movne	r0, #752	; 0x2f0
        2ffb5c:	12400903 	subne	r0, r0, #49152	; 0xc000
        2ffb60:	1b64223d 	blne	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2ffb64:	e3390000 	teq	r9, #0	; 0x0
        2ffb68:	1a000037 	bne	2ffc4c <XGetVariable__FRC6RefVarT1Pli+0x420>
        2ffb6c:	e35a050e 	cmp	sl, #58720256	; 0x3800000
        2ffb70:	3a000003 	bcc	2ffb84 <XGetVariable__FRC6RefVarT1Pli+0x358>
        2ffb74:	e35a0206 	cmp	sl, #1610612736	; 0x60000000
        2ffb78:	ba000033 	blt	2ffc4c <XGetVariable__FRC6RefVarT1Pli+0x420>
        2ffb7c:	e35a031a 	cmp	sl, #1744830464	; 0x68000000
        2ffb80:	aa000031 	bge	2ffc4c <XGetVariable__FRC6RefVarT1Pli+0x420>
        2ffb84:	e59d0010 	ldr	r0, [sp, #16]
        2ffb88:	e28d300c 	add	r3, sp, #12	; 0xc
        2ffb8c:	e1a02005 	mov	r2, r5
        2ffb90:	e28d1014 	add	r1, sp, #20	; 0x14
        2ffb94:	e5909000 	ldr	r9, [r0]
        2ffb98:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2ffb9c:	e5940000 	ldr	r0, [r4]
        2ffba0:	e28d3010 	add	r3, sp, #16	; 0x10
        2ffba4:	e1a01009 	mov	r1, r9
        2ffba8:	e5902000 	ldr	r2, [r0]
        2ffbac:	e597000c 	ldr	r0, [r7, #12]
        2ffbb0:	eb5d57cf 	bl	1a55af4 <TICache::$Lookup(long, long, long *, long *, long *, long *)>
        2ffbb4:	e28dd00c 	add	sp, sp, #12	; 0xc
        2ffbb8:	e3300000 	teq	r0, #0	; 0x0
        2ffbbc:	0a000022 	beq	2ffc4c <XGetVariable__FRC6RefVarT1Pli+0x420>
        2ffbc0:	e5950000 	ldr	r0, [r5]
        2ffbc4:	e3300000 	teq	r0, #0	; 0x0
        2ffbc8:	05ba0008 	ldreq	r0, [sl, #8]!
        2ffbcc:	05880000 	streq	r0, [r8]
        2ffbd0:	0a000054 	beq	2ffd28 <XGetVariable__FRC6RefVarT1Pli+0x4fc>
        2ffbd4:	e59d300c 	ldr	r3, [sp, #12]
        2ffbd8:	e92d0008 	stmdb	sp!, {r3}
        2ffbdc:	e5940000 	ldr	r0, [r4]
        2ffbe0:	e5902000 	ldr	r2, [r0]
        2ffbe4:	e51b0038 	ldr	r0, [fp, -#56]
        2ffbe8:	e5900000 	ldr	r0, [r0]
        2ffbec:	e5901000 	ldr	r1, [r0]
        2ffbf0:	e59d3008 	ldr	r3, [sp, #8]
        2ffbf4:	e5970000 	ldr	r0, [r7]
        2ffbf8:	eb5d57ac 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        2ffbfc:	e5bd0004 	ldr	r0, [sp, #4]!
        2ffc00:	e3300000 	teq	r0, #0	; 0x0
        2ffc04:	0a000008 	beq	2ffc2c <XGetVariable__FRC6RefVarT1Pli+0x400>
        2ffc08:	e59d300c 	ldr	r3, [sp, #12]
        2ffc0c:	e92d0008 	stmdb	sp!, {r3}
        2ffc10:	e5940000 	ldr	r0, [r4]
        2ffc14:	e5902000 	ldr	r2, [r0]
        2ffc18:	e5961000 	ldr	r1, [r6]
        2ffc1c:	e59d3008 	ldr	r3, [sp, #8]
        2ffc20:	e5b70008 	ldr	r0, [r7, #8]!
        2ffc24:	eb5d57a1 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        2ffc28:	e28dd004 	add	sp, sp, #4	; 0x4
        2ffc2c:	e59d4014 	ldr	r4, [sp, #20]
        2ffc30:	ea000039 	b	2ffd1c <XGetVariable__FRC6RefVarT1Pli+0x4f0>
        2ffc34:	e1a00008 	mov	r0, r8
        2ffc38:	eb630d5f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ffc3c:	e59d0010 	ldr	r0, [sp, #16]
        2ffc40:	eb630d5d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ffc44:	e1a00004 	mov	r0, r4
        2ffc48:	ea000088 	b	2ffe70 <XGetVariable__FRC6RefVarT1Pli+0x644>
        2ffc4c:	e5ba0008 	ldr	r0, [sl, #8]!
        2ffc50:	e5880000 	str	r0, [r8]
        2ffc54:	e5941000 	ldr	r1, [r4]
        2ffc58:	e5911000 	ldr	r1, [r1]
        2ffc5c:	eb5cfcbc 	bl	1a3ef54 <$FindOffset__FlT1>
        2ffc60:	e58d000c 	str	r0, [sp, #12]
        2ffc64:	e3700001 	cmn	r0, #1	; 0x1
        2ffc68:	0a00002e 	beq	2ffd28 <XGetVariable__FRC6RefVarT1Pli+0x4fc>
        2ffc6c:	e3a00001 	mov	r0, #1	; 0x1
        2ffc70:	e5850000 	str	r0, [r5]
        2ffc74:	e59d300c 	ldr	r3, [sp, #12]
        2ffc78:	e92d0008 	stmdb	sp!, {r3}
        2ffc7c:	e59d0014 	ldr	r0, [sp, #20]
        2ffc80:	e5903000 	ldr	r3, [r0]
        2ffc84:	e5940000 	ldr	r0, [r4]
        2ffc88:	e5902000 	ldr	r2, [r0]
        2ffc8c:	e51b0038 	ldr	r0, [fp, -#56]
        2ffc90:	e5900000 	ldr	r0, [r0]
        2ffc94:	e5901000 	ldr	r1, [r0]
        2ffc98:	e5970000 	ldr	r0, [r7]
        2ffc9c:	eb5d5783 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        2ffca0:	e5bd0004 	ldr	r0, [sp, #4]!
        2ffca4:	e3300000 	teq	r0, #0	; 0x0
        2ffca8:	0a000009 	beq	2ffcd4 <XGetVariable__FRC6RefVarT1Pli+0x4a8>
        2ffcac:	e59d300c 	ldr	r3, [sp, #12]
        2ffcb0:	e92d0008 	stmdb	sp!, {r3}
        2ffcb4:	e59d0014 	ldr	r0, [sp, #20]
        2ffcb8:	e5903000 	ldr	r3, [r0]
        2ffcbc:	e5940000 	ldr	r0, [r4]
        2ffcc0:	e5902000 	ldr	r2, [r0]
        2ffcc4:	e5961000 	ldr	r1, [r6]
        2ffcc8:	e5970008 	ldr	r0, [r7, #8]
        2ffccc:	eb5d5777 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        2ffcd0:	e28dd004 	add	sp, sp, #4	; 0x4
        2ffcd4:	e3390000 	teq	r9, #0	; 0x0
        2ffcd8:	0a000009 	beq	2ffd04 <XGetVariable__FRC6RefVarT1Pli+0x4d8>
        2ffcdc:	e59d300c 	ldr	r3, [sp, #12]
        2ffce0:	e92d0008 	stmdb	sp!, {r3}
        2ffce4:	e59d0014 	ldr	r0, [sp, #20]
        2ffce8:	e5903000 	ldr	r3, [r0]
        2ffcec:	e5940000 	ldr	r0, [r4]
        2ffcf0:	e1a01009 	mov	r1, r9
        2ffcf4:	e5902000 	ldr	r2, [r0]
        2ffcf8:	e5b7000c 	ldr	r0, [r7, #12]!
        2ffcfc:	eb5d576b 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        2ffd00:	e28dd004 	add	sp, sp, #4	; 0x4
        2ffd04:	e59d0010 	ldr	r0, [sp, #16]
        2ffd08:	e5900000 	ldr	r0, [r0]
        2ffd0c:	e59d400c 	ldr	r4, [sp, #12]
        2ffd10:	eb631577 	bl	1bc52f4 <$ObjectPtr(long)>
        2ffd14:	e0800104 	add	r0, r0, r4, lsl #2
        2ffd18:	e5b0400c 	ldr	r4, [r0, #12]!
        2ffd1c:	e1a00006 	mov	r0, r6
        2ffd20:	eb630d25 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ffd24:	eaffffc2 	b	2ffc34 <XGetVariable__FRC6RefVarT1Pli+0x408>
        2ffd28:	e59f0144 	ldr	r0, [pc, #144]	; 2ffe74 <XGetVariable__FRC6RefVarT1Pli+0x648>
        2ffd2c:	e5900000 	ldr	r0, [r0]
        2ffd30:	e5901000 	ldr	r1, [r0]
        2ffd34:	e5980000 	ldr	r0, [r8]
        2ffd38:	eb5cfc85 	bl	1a3ef54 <$FindOffset__FlT1>
        2ffd3c:	e58d000c 	str	r0, [sp, #12]
        2ffd40:	e1a0a000 	mov	sl, r0
        2ffd44:	e3700001 	cmn	r0, #1	; 0x1
        2ffd48:	0a000008 	beq	2ffd70 <XGetVariable__FRC6RefVarT1Pli+0x544>
        2ffd4c:	e59d0010 	ldr	r0, [sp, #16]
        2ffd50:	e5900000 	ldr	r0, [r0]
        2ffd54:	eb631566 	bl	1bc52f4 <$ObjectPtr(long)>
        2ffd58:	e080010a 	add	r0, r0, sl, lsl #2
        2ffd5c:	e590000c 	ldr	r0, [r0, #12]
        2ffd60:	e59d1010 	ldr	r1, [sp, #16]
        2ffd64:	e5810000 	str	r0, [r1]
        2ffd68:	e3300002 	teq	r0, #2	; 0x2
        2ffd6c:	1affff71 	bne	2ffb38 <XGetVariable__FRC6RefVarT1Pli+0x30c>
        2ffd70:	e59d0000 	ldr	r0, [sp]
        2ffd74:	e3300000 	teq	r0, #0	; 0x0
        2ffd78:	0a000008 	beq	2ffda0 <XGetVariable__FRC6RefVarT1Pli+0x574>
        2ffd7c:	e3a03000 	mov	r3, #0	; 0x0
        2ffd80:	e92d0008 	stmdb	sp!, {r3}
        2ffd84:	e5940000 	ldr	r0, [r4]
        2ffd88:	e5902000 	ldr	r2, [r0]
        2ffd8c:	e5961000 	ldr	r1, [r6]
        2ffd90:	e5970008 	ldr	r0, [r7, #8]
        2ffd94:	eb5d5745 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        2ffd98:	e3a00000 	mov	r0, #0	; 0x0
        2ffd9c:	e5ad0004 	str	r0, [sp, #4]!
        2ffda0:	e3390000 	teq	r9, #0	; 0x0
        2ffda4:	0a000007 	beq	2ffdc8 <XGetVariable__FRC6RefVarT1Pli+0x59c>
        2ffda8:	e3a03000 	mov	r3, #0	; 0x0
        2ffdac:	e92d0008 	stmdb	sp!, {r3}
        2ffdb0:	e5940000 	ldr	r0, [r4]
        2ffdb4:	e1a01009 	mov	r1, r9
        2ffdb8:	e5902000 	ldr	r2, [r0]
        2ffdbc:	e597000c 	ldr	r0, [r7, #12]
        2ffdc0:	eb5d573a 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        2ffdc4:	e28dd004 	add	sp, sp, #4	; 0x4
        2ffdc8:	e5960000 	ldr	r0, [r6]
        2ffdcc:	eb631548 	bl	1bc52f4 <$ObjectPtr(long)>
        2ffdd0:	e5900008 	ldr	r0, [r0, #8]
        2ffdd4:	e5880000 	str	r0, [r8]
        2ffdd8:	e51f945c 	ldr	r9, [pc, #fffffba4]	; 2ff984 <XGetVariable__FRC6RefVarT1Pli+0x158>
        2ffddc:	e5991000 	ldr	r1, [r9]
        2ffde0:	e5911000 	ldr	r1, [r1]
        2ffde4:	eb5cfc5a 	bl	1a3ef54 <$FindOffset__FlT1>
        2ffde8:	e58d000c 	str	r0, [sp, #12]
        2ffdec:	e1a09000 	mov	r9, r0
        2ffdf0:	e3700001 	cmn	r0, #1	; 0x1
        2ffdf4:	0a00000a 	beq	2ffe24 <XGetVariable__FRC6RefVarT1Pli+0x5f8>
        2ffdf8:	e5960000 	ldr	r0, [r6]
        2ffdfc:	eb63153c 	bl	1bc52f4 <$ObjectPtr(long)>
        2ffe00:	e0800109 	add	r0, r0, r9, lsl #2
        2ffe04:	e590000c 	ldr	r0, [r0, #12]
        2ffe08:	e59d1010 	ldr	r1, [sp, #16]
        2ffe0c:	e5810000 	str	r0, [r1]
        2ffe10:	e5860000 	str	r0, [r6]
        2ffe14:	e59d0010 	ldr	r0, [sp, #16]
        2ffe18:	e5900000 	ldr	r0, [r0]
        2ffe1c:	e3300002 	teq	r0, #2	; 0x2
        2ffe20:	1affff43 	bne	2ffb34 <XGetVariable__FRC6RefVarT1Pli+0x308>
        2ffe24:	e3a00000 	mov	r0, #0	; 0x0
        2ffe28:	e3a03000 	mov	r3, #0	; 0x0
        2ffe2c:	e5850000 	str	r0, [r5]
        2ffe30:	e92d0008 	stmdb	sp!, {r3}
        2ffe34:	e5940000 	ldr	r0, [r4]
        2ffe38:	e5902000 	ldr	r2, [r0]
        2ffe3c:	e51b0038 	ldr	r0, [fp, -#56]
        2ffe40:	e5900000 	ldr	r0, [r0]
        2ffe44:	e5901000 	ldr	r1, [r0]
        2ffe48:	e5970000 	ldr	r0, [r7]
        2ffe4c:	eb5d5717 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        2ffe50:	e28dd004 	add	sp, sp, #4	; 0x4
        2ffe54:	e1a00006 	mov	r0, r6
        2ffe58:	eb630cd7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ffe5c:	e1a00008 	mov	r0, r8
        2ffe60:	eb630cd5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ffe64:	e59d0010 	ldr	r0, [sp, #16]
        2ffe68:	eb630cd3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ffe6c:	e3a00002 	mov	r0, #2	; 0x2
        2ffe70:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ffe74:	00685390 	streqb	r5, [r8], -#48
    */
}

/**
 * Symbol: XFindImplementor__FRC6RefVarT1P6RefVarT3
 * Address: 002ffe78
 */
void globals::XFindImplementor() {
    /*
        2ffe78:	e1a0c00d 	mov	ip, sp
        2ffe7c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ffe80:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ffe84:	e1a04001 	mov	r4, r1
        2ffe88:	e1a05002 	mov	r5, r2
        2ffe8c:	e51b0038 	ldr	r0, [fp, -#56]
        2ffe90:	e5900000 	ldr	r0, [r0]
        2ffe94:	e5900000 	ldr	r0, [r0]
        2ffe98:	e3300002 	teq	r0, #2	; 0x2
        2ffe9c:	03a00000 	moveq	r0, #0	; 0x0
        2ffea0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ffea4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2ffea8:	e1a0300d 	mov	r3, sp
        2ffeac:	e28d2004 	add	r2, sp, #4	; 0x4
        2ffeb0:	e51b102c 	ldr	r1, [fp, -#44]
        2ffeb4:	e5911000 	ldr	r1, [r1]
        2ffeb8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2ffebc:	e5941000 	ldr	r1, [r4]
        2ffec0:	e5912000 	ldr	r2, [r1]
        2ffec4:	e1a01000 	mov	r1, r0
        2ffec8:	e5953000 	ldr	r3, [r5]
        2ffecc:	e59f70ec 	ldr	r7, [pc, #ec]	; 2fffc0 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x148>
        2ffed0:	e5970004 	ldr	r0, [r7, #4]
        2ffed4:	eb5d5706 	bl	1a55af4 <TICache::$Lookup(long, long, long *, long *, long *, long *)>
        2ffed8:	e28dd00c 	add	sp, sp, #12	; 0xc
        2ffedc:	e3300000 	teq	r0, #0	; 0x0
        2ffee0:	159d0004 	ldrne	r0, [sp, #4]
        2ffee4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ffee8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ffeec:	e51b0038 	ldr	r0, [fp, -#56]
        2ffef0:	e5900000 	ldr	r0, [r0]
        2ffef4:	e5900000 	ldr	r0, [r0]
        2ffef8:	eb630893 	bl	1bc214c <$AllocateRefHandle(long)>
        2ffefc:	e58d0000 	str	r0, [sp]
        2fff00:	e3a00002 	mov	r0, #2	; 0x2
        2fff04:	eb630890 	bl	1bc214c <$AllocateRefHandle(long)>
        2fff08:	e1a08000 	mov	r8, r0
        2fff0c:	e51b0038 	ldr	r0, [fp, -#56]
        2fff10:	e5900000 	ldr	r0, [r0]
        2fff14:	e5900000 	ldr	r0, [r0]
        2fff18:	eb63088b 	bl	1bc214c <$AllocateRefHandle(long)>
        2fff1c:	e1a06000 	mov	r6, r0
        2fff20:	e28d3004 	add	r3, sp, #4	; 0x4
        2fff24:	e28d2008 	add	r2, sp, #8	; 0x8
        2fff28:	e51b002c 	ldr	r0, [fp, -#44]
        2fff2c:	e5901000 	ldr	r1, [r0]
        2fff30:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2fff34:	e5940000 	ldr	r0, [r4]
        2fff38:	e5902000 	ldr	r2, [r0]
        2fff3c:	e59d000c 	ldr	r0, [sp, #12]
        2fff40:	e5901000 	ldr	r1, [r0]
        2fff44:	e5953000 	ldr	r3, [r5]
        2fff48:	e5970008 	ldr	r0, [r7, #8]
        2fff4c:	eb5d56e8 	bl	1a55af4 <TICache::$Lookup(long, long, long *, long *, long *, long *)>
        2fff50:	e28dd00c 	add	sp, sp, #12	; 0xc
        2fff54:	e59f9068 	ldr	r9, [pc, #68]	; 2fffc4 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x14c>
        2fff58:	e3300000 	teq	r0, #0	; 0x0
        2fff5c:	0a00003e 	beq	30005c <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x1e4>
        2fff60:	e59d0008 	ldr	r0, [sp, #8]
        2fff64:	e3300000 	teq	r0, #0	; 0x0
        2fff68:	0a000016 	beq	2fffc8 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x150>
        2fff6c:	e59d3004 	ldr	r3, [sp, #4]
        2fff70:	e92d0008 	stmdb	sp!, {r3}
        2fff74:	e5950000 	ldr	r0, [r5]
        2fff78:	e5903000 	ldr	r3, [r0]
        2fff7c:	e5940000 	ldr	r0, [r4]
        2fff80:	e5902000 	ldr	r2, [r0]
        2fff84:	e51b0038 	ldr	r0, [fp, -#56]
        2fff88:	e5900000 	ldr	r0, [r0]
        2fff8c:	e5901000 	ldr	r1, [r0]
        2fff90:	e5b70004 	ldr	r0, [r7, #4]!
        2fff94:	eb5d56c5 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        2fff98:	e28dd004 	add	sp, sp, #4	; 0x4
        2fff9c:	e1a00006 	mov	r0, r6
        2fffa0:	e59d4008 	ldr	r4, [sp, #8]
        2fffa4:	eb630c84 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2fffa8:	e1a00008 	mov	r0, r8
        2fffac:	eb630c82 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2fffb0:	e59d0000 	ldr	r0, [sp]
        2fffb4:	eb630c80 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2fffb8:	e1a00004 	mov	r0, r4
        2fffbc:	ea00001e 	b	30003c <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x1c4>
        2fffc0:	0c105498 	ldceq	4, cr5, [r0], -#608
        2fffc4:	00685388 	rsbeq	r5, r8, r8, lsl #7
        2fffc8:	e5960000 	ldr	r0, [r6]
        2fffcc:	eb6314c8 	bl	1bc52f4 <$ObjectPtr(long)>
        2fffd0:	e5900008 	ldr	r0, [r0, #8]
        2fffd4:	e5880000 	str	r0, [r8]
        2fffd8:	e5991000 	ldr	r1, [r9]
        2fffdc:	e5911000 	ldr	r1, [r1]
        2fffe0:	eb5cfbdb 	bl	1a3ef54 <$FindOffset__FlT1>
        2fffe4:	e58d0004 	str	r0, [sp, #4]
        2fffe8:	e1a0a000 	mov	sl, r0
        2fffec:	e3700001 	cmn	r0, #1	; 0x1
        2ffff0:	1a000012 	bne	300040 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x1c8>
        2ffff4:	e3a03000 	mov	r3, #0	; 0x0
        2ffff8:	e92d0008 	stmdb	sp!, {r3}
        2ffffc:	e5940000 	ldr	r0, [r4]
        300000:	e5902000 	ldr	r2, [r0]
        300004:	e51b0038 	ldr	r0, [fp, -#56]
        300008:	e5900000 	ldr	r0, [r0]
        30000c:	e5901000 	ldr	r1, [r0]
        300010:	e5b70004 	ldr	r0, [r7, #4]!
        300014:	eb5d56a5 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        300018:	e28dd004 	add	sp, sp, #4	; 0x4
        30001c:	e1a00006 	mov	r0, r6
        300020:	eb630c65 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        300024:	e3a04000 	mov	r4, #0	; 0x0
        300028:	e1a00008 	mov	r0, r8
        30002c:	eb630c62 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        300030:	e59d0000 	ldr	r0, [sp]
        300034:	eb630c60 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        300038:	e1a00004 	mov	r0, r4
        30003c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        300040:	e5960000 	ldr	r0, [r6]
        300044:	eb6314aa 	bl	1bc52f4 <$ObjectPtr(long)>
        300048:	e080010a 	add	r0, r0, sl, lsl #2
        30004c:	e590000c 	ldr	r0, [r0, #12]
        300050:	e59d1000 	ldr	r1, [sp]
        300054:	e5810000 	str	r0, [r1]
        300058:	e5860000 	str	r0, [r6]
        30005c:	e3a00001 	mov	r0, #1	; 0x1
        300060:	e52d0004 	str	r0, [sp, -#4]!
        300064:	e59d0004 	ldr	r0, [sp, #4]
        300068:	e5900000 	ldr	r0, [r0]
        30006c:	e3300002 	teq	r0, #2	; 0x2
        300070:	0a0000c0 	beq	300378 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x500>
        300074:	e3a09000 	mov	r9, #0	; 0x0
        300078:	e59d0004 	ldr	r0, [sp, #4]
        30007c:	e5900000 	ldr	r0, [r0]
        300080:	e3300002 	teq	r0, #2	; 0x2
        300084:	0a00008e 	beq	3002c4 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x44c>
        300088:	e59d0004 	ldr	r0, [sp, #4]
        30008c:	e5900000 	ldr	r0, [r0]
        300090:	eb631497 	bl	1bc52f4 <$ObjectPtr(long)>
        300094:	e1a0a000 	mov	sl, r0
        300098:	e5900000 	ldr	r0, [r0]
        30009c:	e2000003 	and	r0, r0, #3	; 0x3
        3000a0:	e3300003 	teq	r0, #3	; 0x3
        3000a4:	128d1004 	addne	r1, sp, #4	; 0x4
        3000a8:	13a00e2f 	movne	r0, #752	; 0x2f0
        3000ac:	12400903 	subne	r0, r0, #49152	; 0xc000
        3000b0:	1b6420e9 	blne	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        3000b4:	e3390000 	teq	r9, #0	; 0x0
        3000b8:	1a000031 	bne	300184 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x30c>
        3000bc:	e35a050e 	cmp	sl, #58720256	; 0x3800000
        3000c0:	3a000003 	bcc	3000d4 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x25c>
        3000c4:	e35a0206 	cmp	sl, #1610612736	; 0x60000000
        3000c8:	ba00002d 	blt	300184 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x30c>
        3000cc:	e35a031a 	cmp	sl, #1744830464	; 0x68000000
        3000d0:	aa00002b 	bge	300184 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x30c>
        3000d4:	e59d0004 	ldr	r0, [sp, #4]
        3000d8:	e28d3008 	add	r3, sp, #8	; 0x8
        3000dc:	e28d200c 	add	r2, sp, #12	; 0xc
        3000e0:	e5909000 	ldr	r9, [r0]
        3000e4:	e51b002c 	ldr	r0, [fp, -#44]
        3000e8:	e5901000 	ldr	r1, [r0]
        3000ec:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        3000f0:	e5940000 	ldr	r0, [r4]
        3000f4:	e5902000 	ldr	r2, [r0]
        3000f8:	e1a01009 	mov	r1, r9
        3000fc:	e5953000 	ldr	r3, [r5]
        300100:	e597000c 	ldr	r0, [r7, #12]
        300104:	eb5d567a 	bl	1a55af4 <TICache::$Lookup(long, long, long *, long *, long *, long *)>
        300108:	e28dd00c 	add	sp, sp, #12	; 0xc
        30010c:	e3300000 	teq	r0, #0	; 0x0
        300110:	0a00001b 	beq	300184 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x30c>
        300114:	e59d000c 	ldr	r0, [sp, #12]
        300118:	e3300000 	teq	r0, #0	; 0x0
        30011c:	05ba0008 	ldreq	r0, [sl, #8]!
        300120:	05880000 	streq	r0, [r8]
        300124:	0a000054 	beq	30027c <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x404>
        300128:	e59d0000 	ldr	r0, [sp]
        30012c:	e3300000 	teq	r0, #0	; 0x0
        300130:	0a000009 	beq	30015c <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x2e4>
        300134:	e59d3008 	ldr	r3, [sp, #8]
        300138:	e92d0008 	stmdb	sp!, {r3}
        30013c:	e5950000 	ldr	r0, [r5]
        300140:	e5903000 	ldr	r3, [r0]
        300144:	e5940000 	ldr	r0, [r4]
        300148:	e5902000 	ldr	r2, [r0]
        30014c:	e5961000 	ldr	r1, [r6]
        300150:	e5970008 	ldr	r0, [r7, #8]
        300154:	eb5d5655 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        300158:	e28dd004 	add	sp, sp, #4	; 0x4
        30015c:	e59d3008 	ldr	r3, [sp, #8]
        300160:	e92d0008 	stmdb	sp!, {r3}
        300164:	e5950000 	ldr	r0, [r5]
        300168:	ea000036 	b	300248 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x3d0>
        30016c:	e1a00008 	mov	r0, r8
        300170:	eb630c11 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        300174:	e59d0004 	ldr	r0, [sp, #4]
        300178:	eb630c0f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30017c:	e1a00004 	mov	r0, r4
        300180:	ea00008e 	b	3003c0 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x548>
        300184:	e5ba0008 	ldr	r0, [sl, #8]!
        300188:	e5880000 	str	r0, [r8]
        30018c:	e5941000 	ldr	r1, [r4]
        300190:	e5911000 	ldr	r1, [r1]
        300194:	eb5cfb6e 	bl	1a3ef54 <$FindOffset__FlT1>
        300198:	e58d0008 	str	r0, [sp, #8]
        30019c:	e3700001 	cmn	r0, #1	; 0x1
        3001a0:	0a000035 	beq	30027c <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x404>
        3001a4:	e59d0004 	ldr	r0, [sp, #4]
        3001a8:	e5900000 	ldr	r0, [r0]
        3001ac:	e5951000 	ldr	r1, [r5]
        3001b0:	e5810000 	str	r0, [r1]
        3001b4:	e59d0004 	ldr	r0, [sp, #4]
        3001b8:	e5900000 	ldr	r0, [r0]
        3001bc:	e59d5008 	ldr	r5, [sp, #8]
        3001c0:	eb63144b 	bl	1bc52f4 <$ObjectPtr(long)>
        3001c4:	e0800105 	add	r0, r0, r5, lsl #2
        3001c8:	e590000c 	ldr	r0, [r0, #12]
        3001cc:	e51b302c 	ldr	r3, [fp, -#44]
        3001d0:	e5931000 	ldr	r1, [r3]
        3001d4:	e3390000 	teq	r9, #0	; 0x0
        3001d8:	e5810000 	str	r0, [r1]
        3001dc:	0a000009 	beq	300208 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x390>
        3001e0:	e59d3008 	ldr	r3, [sp, #8]
        3001e4:	e92d0008 	stmdb	sp!, {r3}
        3001e8:	e59d0008 	ldr	r0, [sp, #8]
        3001ec:	e5903000 	ldr	r3, [r0]
        3001f0:	e5940000 	ldr	r0, [r4]
        3001f4:	e1a01009 	mov	r1, r9
        3001f8:	e5902000 	ldr	r2, [r0]
        3001fc:	e597000c 	ldr	r0, [r7, #12]
        300200:	eb5d562a 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        300204:	e28dd004 	add	sp, sp, #4	; 0x4
        300208:	e59d0000 	ldr	r0, [sp]
        30020c:	e3300000 	teq	r0, #0	; 0x0
        300210:	0a000009 	beq	30023c <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x3c4>
        300214:	e59d3008 	ldr	r3, [sp, #8]
        300218:	e92d0008 	stmdb	sp!, {r3}
        30021c:	e59d0008 	ldr	r0, [sp, #8]
        300220:	e5903000 	ldr	r3, [r0]
        300224:	e5940000 	ldr	r0, [r4]
        300228:	e5902000 	ldr	r2, [r0]
        30022c:	e5961000 	ldr	r1, [r6]
        300230:	e5970008 	ldr	r0, [r7, #8]
        300234:	eb5d561d 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        300238:	e28dd004 	add	sp, sp, #4	; 0x4
        30023c:	e59d3008 	ldr	r3, [sp, #8]
        300240:	e92d0008 	stmdb	sp!, {r3}
        300244:	e59d0008 	ldr	r0, [sp, #8]
        300248:	e5903000 	ldr	r3, [r0]
        30024c:	e5940000 	ldr	r0, [r4]
        300250:	e5902000 	ldr	r2, [r0]
        300254:	e51b0038 	ldr	r0, [fp, -#56]
        300258:	e5900000 	ldr	r0, [r0]
        30025c:	e5901000 	ldr	r1, [r0]
        300260:	e5b70004 	ldr	r0, [r7, #4]!
        300264:	eb5d5611 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        300268:	e28dd004 	add	sp, sp, #4	; 0x4
        30026c:	e3a04001 	mov	r4, #1	; 0x1
        300270:	e1a00006 	mov	r0, r6
        300274:	eb630bd0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        300278:	eaffffbb 	b	30016c <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x2f4>
        30027c:	e59f0140 	ldr	r0, [pc, #140]	; 3003c4 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x54c>
        300280:	e5900000 	ldr	r0, [r0]
        300284:	e5901000 	ldr	r1, [r0]
        300288:	e5980000 	ldr	r0, [r8]
        30028c:	eb5cfb30 	bl	1a3ef54 <$FindOffset__FlT1>
        300290:	e58d0008 	str	r0, [sp, #8]
        300294:	e1a0a000 	mov	sl, r0
        300298:	e3700001 	cmn	r0, #1	; 0x1
        30029c:	0a000008 	beq	3002c4 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x44c>
        3002a0:	e59d0004 	ldr	r0, [sp, #4]
        3002a4:	e5900000 	ldr	r0, [r0]
        3002a8:	eb631411 	bl	1bc52f4 <$ObjectPtr(long)>
        3002ac:	e080010a 	add	r0, r0, sl, lsl #2
        3002b0:	e590000c 	ldr	r0, [r0, #12]
        3002b4:	e59d1004 	ldr	r1, [sp, #4]
        3002b8:	e5810000 	str	r0, [r1]
        3002bc:	e3300002 	teq	r0, #2	; 0x2
        3002c0:	1affff70 	bne	300088 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x210>
        3002c4:	e59d0000 	ldr	r0, [sp]
        3002c8:	e3300000 	teq	r0, #0	; 0x0
        3002cc:	0a000008 	beq	3002f4 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x47c>
        3002d0:	e3a03000 	mov	r3, #0	; 0x0
        3002d4:	e92d0008 	stmdb	sp!, {r3}
        3002d8:	e5940000 	ldr	r0, [r4]
        3002dc:	e5902000 	ldr	r2, [r0]
        3002e0:	e5961000 	ldr	r1, [r6]
        3002e4:	e5970008 	ldr	r0, [r7, #8]
        3002e8:	eb5d55f0 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        3002ec:	e3a00000 	mov	r0, #0	; 0x0
        3002f0:	e5ad0004 	str	r0, [sp, #4]!
        3002f4:	e3390000 	teq	r9, #0	; 0x0
        3002f8:	0a000007 	beq	30031c <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x4a4>
        3002fc:	e3a03000 	mov	r3, #0	; 0x0
        300300:	e92d0008 	stmdb	sp!, {r3}
        300304:	e5940000 	ldr	r0, [r4]
        300308:	e1a01009 	mov	r1, r9
        30030c:	e5902000 	ldr	r2, [r0]
        300310:	e597000c 	ldr	r0, [r7, #12]
        300314:	eb5d55e5 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        300318:	e28dd004 	add	sp, sp, #4	; 0x4
        30031c:	e5960000 	ldr	r0, [r6]
        300320:	eb6313f3 	bl	1bc52f4 <$ObjectPtr(long)>
        300324:	e5900008 	ldr	r0, [r0, #8]
        300328:	e5880000 	str	r0, [r8]
        30032c:	e51f9370 	ldr	r9, [pc, #fffffc90]	; 2fffc4 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x14c>
        300330:	e5991000 	ldr	r1, [r9]
        300334:	e5911000 	ldr	r1, [r1]
        300338:	eb5cfb05 	bl	1a3ef54 <$FindOffset__FlT1>
        30033c:	e58d0008 	str	r0, [sp, #8]
        300340:	e1a09000 	mov	r9, r0
        300344:	e3700001 	cmn	r0, #1	; 0x1
        300348:	0a00000a 	beq	300378 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x500>
        30034c:	e5960000 	ldr	r0, [r6]
        300350:	eb6313e7 	bl	1bc52f4 <$ObjectPtr(long)>
        300354:	e0800109 	add	r0, r0, r9, lsl #2
        300358:	e590000c 	ldr	r0, [r0, #12]
        30035c:	e59d1004 	ldr	r1, [sp, #4]
        300360:	e5810000 	str	r0, [r1]
        300364:	e5860000 	str	r0, [r6]
        300368:	e59d0004 	ldr	r0, [sp, #4]
        30036c:	e5900000 	ldr	r0, [r0]
        300370:	e3300002 	teq	r0, #2	; 0x2
        300374:	1affff3e 	bne	300074 <XFindImplementor__FRC6RefVarT1P6RefVarT3+0x1fc>
        300378:	e3a03000 	mov	r3, #0	; 0x0
        30037c:	e92d0008 	stmdb	sp!, {r3}
        300380:	e5940000 	ldr	r0, [r4]
        300384:	e5902000 	ldr	r2, [r0]
        300388:	e51b0038 	ldr	r0, [fp, -#56]
        30038c:	e5900000 	ldr	r0, [r0]
        300390:	e5901000 	ldr	r1, [r0]
        300394:	e5b70004 	ldr	r0, [r7, #4]!
        300398:	eb5d55c4 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        30039c:	e28dd004 	add	sp, sp, #4	; 0x4
        3003a0:	e1a00006 	mov	r0, r6
        3003a4:	eb630b84 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3003a8:	e3a04000 	mov	r4, #0	; 0x0
        3003ac:	e1a00008 	mov	r0, r8
        3003b0:	eb630b81 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3003b4:	e59d0004 	ldr	r0, [sp, #4]
        3003b8:	eb630b7f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3003bc:	e1a00004 	mov	r0, r4
        3003c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3003c4:	00685390 	streqb	r5, [r8], -#48
    */
}

/**
 * Symbol: XFindProtoImplementor__FRC6RefVarT1P6RefVarT3
 * Address: 003003c8
 */
void globals::XFindProtoImplementor() {
    /*
        3003c8:	e1a0c00d 	mov	ip, sp
        3003cc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3003d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        3003d4:	e1a04001 	mov	r4, r1
        3003d8:	e1a06002 	mov	r6, r2
        3003dc:	e1a05003 	mov	r5, r3
        3003e0:	e5900000 	ldr	r0, [r0]
        3003e4:	e5900000 	ldr	r0, [r0]
        3003e8:	e3300002 	teq	r0, #2	; 0x2
        3003ec:	03a00000 	moveq	r0, #0	; 0x0
        3003f0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3003f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        3003f8:	eb630753 	bl	1bc214c <$AllocateRefHandle(long)>
        3003fc:	e58d0000 	str	r0, [sp]
        300400:	e5900000 	ldr	r0, [r0]
        300404:	eb6313ba 	bl	1bc52f4 <$ObjectPtr(long)>
        300408:	e1a07000 	mov	r7, r0
        30040c:	e5900000 	ldr	r0, [r0]
        300410:	e2000003 	and	r0, r0, #3	; 0x3
        300414:	e3a09e2f 	mov	r9, #752	; 0x2f0
        300418:	e2499903 	sub	r9, r9, #49152	; 0xc000
        30041c:	e3300003 	teq	r0, #3	; 0x3
        300420:	11a0100d 	movne	r1, sp
        300424:	11a00009 	movne	r0, r9
        300428:	1b64200b 	blne	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        30042c:	e24dd004 	sub	sp, sp, #4	; 0x4
        300430:	e5b70008 	ldr	r0, [r7, #8]!
        300434:	eb630744 	bl	1bc214c <$AllocateRefHandle(long)>
        300438:	e1a08000 	mov	r8, r0
        30043c:	e3a07000 	mov	r7, #0	; 0x0
        300440:	e59fa0dc 	ldr	sl, [pc, #dc]	; 300524 <XFindProtoImplementor__FRC6RefVarT1P6RefVarT3+0x15c>
        300444:	e59f00dc 	ldr	r0, [pc, #dc]	; 300528 <XFindProtoImplementor__FRC6RefVarT1P6RefVarT3+0x160>
        300448:	e5900000 	ldr	r0, [r0]
        30044c:	e5901000 	ldr	r1, [r0]
        300450:	e5980000 	ldr	r0, [r8]
        300454:	eb5cfabe 	bl	1a3ef54 <$FindOffset__FlT1>
        300458:	e58d0000 	str	r0, [sp]
        30045c:	e1a09000 	mov	r9, r0
        300460:	e3700001 	cmn	r0, #1	; 0x1
        300464:	0a000058 	beq	3005cc <XFindProtoImplementor__FRC6RefVarT1P6RefVarT3+0x204>
        300468:	e59d0004 	ldr	r0, [sp, #4]
        30046c:	e5900000 	ldr	r0, [r0]
        300470:	eb63139f 	bl	1bc52f4 <$ObjectPtr(long)>
        300474:	e0800109 	add	r0, r0, r9, lsl #2
        300478:	e590000c 	ldr	r0, [r0, #12]
        30047c:	e59d1004 	ldr	r1, [sp, #4]
        300480:	e5810000 	str	r0, [r1]
        300484:	eb63139a 	bl	1bc52f4 <$ObjectPtr(long)>
        300488:	e1a09000 	mov	r9, r0
        30048c:	e5900000 	ldr	r0, [r0]
        300490:	e2000003 	and	r0, r0, #3	; 0x3
        300494:	e3300003 	teq	r0, #3	; 0x3
        300498:	128d1004 	addne	r1, sp, #4	; 0x4
        30049c:	13a00e2f 	movne	r0, #752	; 0x2f0
        3004a0:	12400903 	subne	r0, r0, #49152	; 0xc000
        3004a4:	1b641fec 	blne	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        3004a8:	e3370000 	teq	r7, #0	; 0x0
        3004ac:	1a00001f 	bne	300530 <XFindProtoImplementor__FRC6RefVarT1P6RefVarT3+0x168>
        3004b0:	e359050e 	cmp	r9, #58720256	; 0x3800000
        3004b4:	3a000003 	bcc	3004c8 <XFindProtoImplementor__FRC6RefVarT1P6RefVarT3+0x100>
        3004b8:	e3590206 	cmp	r9, #1610612736	; 0x60000000
        3004bc:	ba00001b 	blt	300530 <XFindProtoImplementor__FRC6RefVarT1P6RefVarT3+0x168>
        3004c0:	e359031a 	cmp	r9, #1744830464	; 0x68000000
        3004c4:	aa000019 	bge	300530 <XFindProtoImplementor__FRC6RefVarT1P6RefVarT3+0x168>
        3004c8:	e59d0004 	ldr	r0, [sp, #4]
        3004cc:	e5907000 	ldr	r7, [r0]
        3004d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        3004d4:	e28d3004 	add	r3, sp, #4	; 0x4
        3004d8:	e1a0200d 	mov	r2, sp
        3004dc:	e5951000 	ldr	r1, [r5]
        3004e0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        3004e4:	e5940000 	ldr	r0, [r4]
        3004e8:	e5902000 	ldr	r2, [r0]
        3004ec:	e1a01007 	mov	r1, r7
        3004f0:	e5963000 	ldr	r3, [r6]
        3004f4:	e59a000c 	ldr	r0, [sl, #12]
        3004f8:	eb5d557d 	bl	1a55af4 <TICache::$Lookup(long, long, long *, long *, long *, long *)>
        3004fc:	e28dd00c 	add	sp, sp, #12	; 0xc
        300500:	e3300000 	teq	r0, #0	; 0x0
        300504:	0a000008 	beq	30052c <XFindProtoImplementor__FRC6RefVarT1P6RefVarT3+0x164>
        300508:	e1a00008 	mov	r0, r8
        30050c:	e59d4000 	ldr	r4, [sp]
        300510:	eb630b29 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        300514:	e59d0008 	ldr	r0, [sp, #8]
        300518:	eb630b27 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30051c:	e1a00004 	mov	r0, r4
        300520:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        300524:	0c105498 	ldceq	4, cr5, [r0], -#608
        300528:	00685390 	streqb	r5, [r8], -#48
        30052c:	e28dd004 	add	sp, sp, #4	; 0x4
        300530:	e5b90008 	ldr	r0, [r9, #8]!
        300534:	e5880000 	str	r0, [r8]
        300538:	e5941000 	ldr	r1, [r4]
        30053c:	e5911000 	ldr	r1, [r1]
        300540:	eb5cfa83 	bl	1a3ef54 <$FindOffset__FlT1>
        300544:	e58d0000 	str	r0, [sp]
        300548:	e3700001 	cmn	r0, #1	; 0x1
        30054c:	0affffbc 	beq	300444 <XFindProtoImplementor__FRC6RefVarT1P6RefVarT3+0x7c>
        300550:	e59d0004 	ldr	r0, [sp, #4]
        300554:	e5900000 	ldr	r0, [r0]
        300558:	e5961000 	ldr	r1, [r6]
        30055c:	e5810000 	str	r0, [r1]
        300560:	e59d0004 	ldr	r0, [sp, #4]
        300564:	e5900000 	ldr	r0, [r0]
        300568:	e59d6000 	ldr	r6, [sp]
        30056c:	eb631360 	bl	1bc52f4 <$ObjectPtr(long)>
        300570:	e0800106 	add	r0, r0, r6, lsl #2
        300574:	e590000c 	ldr	r0, [r0, #12]
        300578:	e5951000 	ldr	r1, [r5]
        30057c:	e3370000 	teq	r7, #0	; 0x0
        300580:	e5810000 	str	r0, [r1]
        300584:	0a000009 	beq	3005b0 <XFindProtoImplementor__FRC6RefVarT1P6RefVarT3+0x1e8>
        300588:	e59d3000 	ldr	r3, [sp]
        30058c:	e92d0008 	stmdb	sp!, {r3}
        300590:	e59d0008 	ldr	r0, [sp, #8]
        300594:	e5903000 	ldr	r3, [r0]
        300598:	e5940000 	ldr	r0, [r4]
        30059c:	e1a01007 	mov	r1, r7
        3005a0:	e5902000 	ldr	r2, [r0]
        3005a4:	e5ba000c 	ldr	r0, [sl, #12]!
        3005a8:	eb5d5540 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        3005ac:	e28dd004 	add	sp, sp, #4	; 0x4
        3005b0:	e3a04001 	mov	r4, #1	; 0x1
        3005b4:	e1a00008 	mov	r0, r8
        3005b8:	eb630aff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3005bc:	e59d0004 	ldr	r0, [sp, #4]
        3005c0:	eb630afd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3005c4:	e1a00004 	mov	r0, r4
        3005c8:	ea00000f 	b	30060c <XFindProtoImplementor__FRC6RefVarT1P6RefVarT3+0x244>
        3005cc:	e3370000 	teq	r7, #0	; 0x0
        3005d0:	0a000007 	beq	3005f4 <XFindProtoImplementor__FRC6RefVarT1P6RefVarT3+0x22c>
        3005d4:	e3a03000 	mov	r3, #0	; 0x0
        3005d8:	e92d0008 	stmdb	sp!, {r3}
        3005dc:	e5940000 	ldr	r0, [r4]
        3005e0:	e1a01007 	mov	r1, r7
        3005e4:	e5902000 	ldr	r2, [r0]
        3005e8:	e5ba000c 	ldr	r0, [sl, #12]!
        3005ec:	eb5d552f 	bl	1a55ab0 <TICache::$Insert(long, long, long, long)>
        3005f0:	e28dd004 	add	sp, sp, #4	; 0x4
        3005f4:	e1a00008 	mov	r0, r8
        3005f8:	eb630aef 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3005fc:	e3a04000 	mov	r4, #0	; 0x0
        300600:	e59d0004 	ldr	r0, [sp, #4]
        300604:	eb630aec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        300608:	e1a00004 	mov	r0, r4
        30060c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: X_IsBreak(xrd_el_type *)
 * Address: 00305c68
 */
X_IsBreak(xrd_el_type *) {
    /*
        305c68:	e5d00000 	ldrb	r0, [r0]
        305c6c:	e3300003 	teq	r0, #3	; 0x3
        305c70:	13300004 	teqne	r0, #4	; 0x4
        305c74:	13300002 	teqne	r0, #2	; 0x2
        305c78:	13300001 	teqne	r0, #1	; 0x1
        305c7c:	03a00001 	moveq	r0, #1	; 0x1
        305c80:	13a00000 	movne	r0, #0	; 0x0
        305c84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: X_IsStrongElem(xrd_el_type *)
 * Address: 00305c88
 */
X_IsStrongElem(xrd_el_type *) {
    /*
        305c88:	e5d00000 	ldrb	r0, [r0]
        305c8c:	e240002d 	sub	r0, r0, #45	; 0x2d
        305c90:	e3500010 	cmp	r0, #16	; 0x10
        305c94:	908ff100 	addls	pc, pc, r0, lsl #2
        305c98:	ea000011 	b	305ce4 <X_IsStrongElem(xrd_el_type *)+0x5c>
        305c9c:	ea00000e 	b	305cdc <X_IsStrongElem(xrd_el_type *)+0x54>
        305ca0:	ea00000d 	b	305cdc <X_IsStrongElem(xrd_el_type *)+0x54>
        305ca4:	ea00000c 	b	305cdc <X_IsStrongElem(xrd_el_type *)+0x54>
        305ca8:	ea00000b 	b	305cdc <X_IsStrongElem(xrd_el_type *)+0x54>
        305cac:	ea00000c 	b	305ce4 <X_IsStrongElem(xrd_el_type *)+0x5c>
        305cb0:	ea000009 	b	305cdc <X_IsStrongElem(xrd_el_type *)+0x54>
        305cb4:	ea000008 	b	305cdc <X_IsStrongElem(xrd_el_type *)+0x54>
        305cb8:	ea000007 	b	305cdc <X_IsStrongElem(xrd_el_type *)+0x54>
        305cbc:	ea000008 	b	305ce4 <X_IsStrongElem(xrd_el_type *)+0x5c>
        305cc0:	ea000005 	b	305cdc <X_IsStrongElem(xrd_el_type *)+0x54>
        305cc4:	ea000006 	b	305ce4 <X_IsStrongElem(xrd_el_type *)+0x5c>
        305cc8:	ea000005 	b	305ce4 <X_IsStrongElem(xrd_el_type *)+0x5c>
        305ccc:	ea000002 	b	305cdc <X_IsStrongElem(xrd_el_type *)+0x54>
        305cd0:	ea000003 	b	305ce4 <X_IsStrongElem(xrd_el_type *)+0x5c>
        305cd4:	ea000002 	b	305ce4 <X_IsStrongElem(xrd_el_type *)+0x5c>
        305cd8:	eaffffff 	b	305cdc <X_IsStrongElem(xrd_el_type *)+0x54>
        305cdc:	e3a00000 	mov	r0, #0	; 0x0
        305ce0:	e1a0f00e 	mov	pc, lr
        305ce4:	e3a00001 	mov	r0, #1	; 0x1
        305ce8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: xMinMax__FiT1PsN33
 * Address: 00307358
 */
void globals::xMinMax() {
    /*
        307358:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        30735c:	e3a0e902 	mov	lr, #32768	; 0x8000
        307360:	e24ee001 	sub	lr, lr, #1	; 0x1
        307364:	e3a0c000 	mov	ip, #0	; 0x0
        307368:	e1500001 	cmp	r0, r1
        30736c:	e59d4014 	ldr	r4, [sp, #20]
        307370:	e59d5010 	ldr	r5, [sp, #16]
        307374:	ca00000c 	bgt	3073ac <xMinMax__FiT1PsN33+0x54>
        307378:	e7936080 	ldr	r6, [r3, r0, lsl #1]
        30737c:	e1a06846 	mov	r6, r6, asr #16
        307380:	e3760001 	cmn	r6, #1	; 0x1
        307384:	0a000005 	beq	3073a0 <xMinMax__FiT1PsN33+0x48>
        307388:	e7926080 	ldr	r6, [r2, r0, lsl #1]
        30738c:	e1a06846 	mov	r6, r6, asr #16
        307390:	e156000c 	cmp	r6, ip
        307394:	c1a0c006 	movgt	ip, r6
        307398:	e156000e 	cmp	r6, lr
        30739c:	b1a0e006 	movlt	lr, r6
        3073a0:	e2800001 	add	r0, r0, #1	; 0x1
        3073a4:	e1500001 	cmp	r0, r1
        3073a8:	dafffff2 	ble	307378 <xMinMax__FiT1PsN33+0x20>
        3073ac:	e5c4c001 	strb	ip, [r4, #1]
        3073b0:	e1a0044c 	mov	r0, ip, asr #8
        3073b4:	e5c40000 	strb	r0, [r4]
        3073b8:	e5c5e001 	strb	lr, [r5, #1]
        3073bc:	e1a0044e 	mov	r0, lr, asr #8
        3073c0:	e5c50000 	strb	r0, [r5]
        3073c4:	e3a00001 	mov	r0, #1	; 0x1
        3073c8:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: xHardOverlapRect__FP5_RECTT1Ui
 * Address: 00307eb0
 */
void globals::xHardOverlapRect() {
    /*
        307eb0:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        307eb4:	e590e004 	ldr	lr, [r0, #4]
        307eb8:	e1a0e84e 	mov	lr, lr, asr #16
        307ebc:	e591c004 	ldr	ip, [r1, #4]
        307ec0:	e1a0c84c 	mov	ip, ip, asr #16
        307ec4:	e15e000c 	cmp	lr, ip
        307ec8:	c3a04000 	movgt	r4, #0	; 0x0
        307ecc:	d3a04001 	movle	r4, #1	; 0x1
        307ed0:	e5903000 	ldr	r3, [r0]
        307ed4:	e1a03843 	mov	r3, r3, asr #16
        307ed8:	e5916000 	ldr	r6, [r1]
        307edc:	e1a06846 	mov	r6, r6, asr #16
        307ee0:	e1530006 	cmp	r3, r6
        307ee4:	b3a01000 	movlt	r1, #0	; 0x0
        307ee8:	a3a01001 	movge	r1, #1	; 0x1
        307eec:	e3a00001 	mov	r0, #1	; 0x1
        307ef0:	e1340001 	teq	r4, r1
        307ef4:	08bd8070 	ldmeqia	sp!, {r4, r5, r6, pc}
        307ef8:	e08e1003 	add	r1, lr, r3
        307efc:	e1a010c1 	mov	r1, r1, asr #1
        307f00:	e1a04801 	mov	r4, r1, lsl #16
        307f04:	e1a04844 	mov	r4, r4, asr #16
        307f08:	e08c1006 	add	r1, ip, r6
        307f0c:	e1a010c1 	mov	r1, r1, asr #1
        307f10:	e1a01801 	mov	r1, r1, lsl #16
        307f14:	e1a01841 	mov	r1, r1, asr #16
        307f18:	e3a05000 	mov	r5, #0	; 0x0
        307f1c:	e1540006 	cmp	r4, r6
        307f20:	c15c0004 	cmpgt	ip, r4
        307f24:	da000002 	ble	307f34 <xHardOverlapRect__FP5_RECTT1Ui+0x84>
        307f28:	e3320000 	teq	r2, #0	; 0x0
        307f2c:	08bd8070 	ldmeqia	sp!, {r4, r5, r6, pc}
        307f30:	ea000001 	b	307f3c <xHardOverlapRect__FP5_RECTT1Ui+0x8c>
        307f34:	e3320000 	teq	r2, #0	; 0x0
        307f38:	1a000002 	bne	307f48 <xHardOverlapRect__FP5_RECTT1Ui+0x98>
        307f3c:	e1510003 	cmp	r1, r3
        307f40:	c15e0001 	cmpgt	lr, r1
        307f44:	c8bd8070 	ldmgtia	sp!, {r4, r5, r6, pc}
        307f48:	e1a00005 	mov	r0, r5
        307f4c:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: xSetBlockBusy
 * Address: 00311144
 */
void globals::xSetBlockBusy() {
    /*
        311144:	e540100e 	strb	r1, [r0, -#14]
        311148:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: XORBytes
 * Address: 00311634
 */
void globals::XORBytes() {
    /*
        311634:	e92d4010 	stmdb	sp!, {r4, lr}
        311638:	e200c003 	and	ip, r0, #3	; 0x3
        31163c:	e202e003 	and	lr, r2, #3	; 0x3
        311640:	e13c000e 	teq	ip, lr
        311644:	0201e003 	andeq	lr, r1, #3	; 0x3
        311648:	013c000e 	teqeq	ip, lr
        31164c:	01a0c002 	moveq	ip, r2
        311650:	0a000007 	beq	311674 <XORBytes+0x40>
        311654:	e3530008 	cmp	r3, #8	; 0x8
        311658:	ba00006c 	blt	311810 <XORBytes+0x1dc>
        31165c:	ea000048 	b	311784 <XORBytes+0x150>
        311660:	e4d0e001 	ldrb	lr, [r0], #1
        311664:	e4d12001 	ldrb	r2, [r1], #1
        311668:	e02e2002 	eor	r2, lr, r2
        31166c:	e4cc2001 	strb	r2, [ip], #1
        311670:	e2433001 	sub	r3, r3, #1	; 0x1
        311674:	e3100003 	tst	r0, #3	; 0x3
        311678:	0a000002 	beq	311688 <XORBytes+0x54>
        31167c:	e3330000 	teq	r3, #0	; 0x0
        311680:	1afffff6 	bne	311660 <XORBytes+0x2c>
        311684:	e8bd8010 	ldmia	sp!, {r4, pc}
        311688:	e3530020 	cmp	r3, #32	; 0x20
        31168c:	3a00002a 	bcc	31173c <XORBytes+0x108>
        311690:	e4904004 	ldr	r4, [r0], #4
        311694:	e1a0e000 	mov	lr, r0
        311698:	e4910004 	ldr	r0, [r1], #4
        31169c:	e1a02001 	mov	r2, r1
        3116a0:	e0241000 	eor	r1, r4, r0
        3116a4:	e58c1000 	str	r1, [ip]
        3116a8:	e28c0004 	add	r0, ip, #4	; 0x4
        3116ac:	e1a0100e 	mov	r1, lr
        3116b0:	e59ee000 	ldr	lr, [lr]
        3116b4:	e492c004 	ldr	ip, [r2], #4
        3116b8:	e02ec00c 	eor	ip, lr, ip
        3116bc:	e480c004 	str	ip, [r0], #4
        3116c0:	e5b1e004 	ldr	lr, [r1, #4]!
        3116c4:	e492c004 	ldr	ip, [r2], #4
        3116c8:	e02ec00c 	eor	ip, lr, ip
        3116cc:	e480c004 	str	ip, [r0], #4
        3116d0:	e5b1e004 	ldr	lr, [r1, #4]!
        3116d4:	e492c004 	ldr	ip, [r2], #4
        3116d8:	e02ec00c 	eor	ip, lr, ip
        3116dc:	e480c004 	str	ip, [r0], #4
        3116e0:	e5b1c004 	ldr	ip, [r1, #4]!
        3116e4:	e492e004 	ldr	lr, [r2], #4
        3116e8:	e02cc00e 	eor	ip, ip, lr
        3116ec:	e480c004 	str	ip, [r0], #4
        3116f0:	e5b1c004 	ldr	ip, [r1, #4]!
        3116f4:	e492e004 	ldr	lr, [r2], #4
        3116f8:	e02cc00e 	eor	ip, ip, lr
        3116fc:	e480c004 	str	ip, [r0], #4
        311700:	e5b1c004 	ldr	ip, [r1, #4]!
        311704:	e2811004 	add	r1, r1, #4	; 0x4
        311708:	e492e004 	ldr	lr, [r2], #4
        31170c:	e02ce00e 	eor	lr, ip, lr
        311710:	e480e004 	str	lr, [r0], #4
        311714:	e1a0c000 	mov	ip, r0
        311718:	e591e000 	ldr	lr, [r1]
        31171c:	e2810004 	add	r0, r1, #4	; 0x4
        311720:	e5924000 	ldr	r4, [r2]
        311724:	e2821004 	add	r1, r2, #4	; 0x4
        311728:	e02e2004 	eor	r2, lr, r4
        31172c:	e2433020 	sub	r3, r3, #32	; 0x20
        311730:	e48c2004 	str	r2, [ip], #4
        311734:	e3530020 	cmp	r3, #32	; 0x20
        311738:	2affffd4 	bcs	311690 <XORBytes+0x5c>
        31173c:	e3530004 	cmp	r3, #4	; 0x4
        311740:	3a000006 	bcc	311760 <XORBytes+0x12c>
        311744:	e490e004 	ldr	lr, [r0], #4
        311748:	e4912004 	ldr	r2, [r1], #4
        31174c:	e02e2002 	eor	r2, lr, r2
        311750:	e2433004 	sub	r3, r3, #4	; 0x4
        311754:	e48c2004 	str	r2, [ip], #4
        311758:	e3530004 	cmp	r3, #4	; 0x4
        31175c:	2afffff8 	bcs	311744 <XORBytes+0x110>
        311760:	e3330000 	teq	r3, #0	; 0x0
        311764:	08bd8010 	ldmeqia	sp!, {r4, pc}
        311768:	e4d0e001 	ldrb	lr, [r0], #1
        31176c:	e4d12001 	ldrb	r2, [r1], #1
        311770:	e02e2002 	eor	r2, lr, r2
        311774:	e4cc2001 	strb	r2, [ip], #1
        311778:	e2533001 	subs	r3, r3, #1	; 0x1
        31177c:	1afffff9 	bne	311768 <XORBytes+0x134>
        311780:	e8bd8010 	ldmia	sp!, {r4, pc}
        311784:	e4d0c001 	ldrb	ip, [r0], #1
        311788:	e4d1e001 	ldrb	lr, [r1], #1
        31178c:	e02cc00e 	eor	ip, ip, lr
        311790:	e4c2c001 	strb	ip, [r2], #1
        311794:	e4d0c001 	ldrb	ip, [r0], #1
        311798:	e4d1e001 	ldrb	lr, [r1], #1
        31179c:	e02cc00e 	eor	ip, ip, lr
        3117a0:	e4c2c001 	strb	ip, [r2], #1
        3117a4:	e4d0c001 	ldrb	ip, [r0], #1
        3117a8:	e4d1e001 	ldrb	lr, [r1], #1
        3117ac:	e02cc00e 	eor	ip, ip, lr
        3117b0:	e4c2c001 	strb	ip, [r2], #1
        3117b4:	e4d0c001 	ldrb	ip, [r0], #1
        3117b8:	e4d1e001 	ldrb	lr, [r1], #1
        3117bc:	e02cc00e 	eor	ip, ip, lr
        3117c0:	e4c2c001 	strb	ip, [r2], #1
        3117c4:	e4d0c001 	ldrb	ip, [r0], #1
        3117c8:	e4d1e001 	ldrb	lr, [r1], #1
        3117cc:	e02cc00e 	eor	ip, ip, lr
        3117d0:	e4c2c001 	strb	ip, [r2], #1
        3117d4:	e4d0c001 	ldrb	ip, [r0], #1
        3117d8:	e4d1e001 	ldrb	lr, [r1], #1
        3117dc:	e02cc00e 	eor	ip, ip, lr
        3117e0:	e4c2c001 	strb	ip, [r2], #1
        3117e4:	e4d0e001 	ldrb	lr, [r0], #1
        3117e8:	e4d1c001 	ldrb	ip, [r1], #1
        3117ec:	e02ec00c 	eor	ip, lr, ip
        3117f0:	e4c2c001 	strb	ip, [r2], #1
        3117f4:	e4d0c001 	ldrb	ip, [r0], #1
        3117f8:	e4d1e001 	ldrb	lr, [r1], #1
        3117fc:	e02cc00e 	eor	ip, ip, lr
        311800:	e4c2c001 	strb	ip, [r2], #1
        311804:	e2433008 	sub	r3, r3, #8	; 0x8
        311808:	e3530008 	cmp	r3, #8	; 0x8
        31180c:	aaffffdc 	bge	311784 <XORBytes+0x150>
        311810:	e1b0c003 	movs	ip, r3
        311814:	e2433001 	sub	r3, r3, #1	; 0x1
        311818:	08bd8010 	ldmeqia	sp!, {r4, pc}
        31181c:	e4d0e001 	ldrb	lr, [r0], #1
        311820:	e4d1c001 	ldrb	ip, [r1], #1
        311824:	e02ec00c 	eor	ip, lr, ip
        311828:	e4c2c001 	strb	ip, [r2], #1
        31182c:	e1b0c003 	movs	ip, r3
        311830:	e2433001 	sub	r3, r3, #1	; 0x1
        311834:	1afffff8 	bne	31181c <XORBytes+0x1e8>
        311838:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: XtndPicCodes(long, PicPlay *, GrafPort *)
 * Address: 00330cf0
 */
XtndPicCodes(long, PicPlay *, GrafPort *) {
    /*
        330cf0:	e1a0c00d 	mov	ip, sp
        330cf4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        330cf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        330cfc:	e1a05000 	mov	r5, r0
        330d00:	e1a04001 	mov	r4, r1
        330d04:	e1a06002 	mov	r6, r2
        330d08:	e240cc81 	sub	ip, r0, #33024	; 0x8100
        330d0c:	e33c00a3 	teq	ip, #163	; 0xa3
        330d10:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        330d14:	e59400a4 	ldr	r0, [r4, #164]
        330d18:	e2800001 	add	r0, r0, #1	; 0x1
        330d1c:	e1a00080 	mov	r0, r0, lsl #1
        330d20:	e1a08000 	mov	r8, r0
        330d24:	eb606a28 	bl	1b4b5cc <$QDNewTempPtr(long)>
        330d28:	e1b07000 	movs	r7, r0
        330d2c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        330d30:	e1a02008 	mov	r2, r8
        330d34:	e1a01007 	mov	r1, r7
        330d38:	e59400ac 	ldr	r0, [r4, #172]
        330d3c:	eb62b884 	bl	1bdef54 <$BlockMove>
        330d40:	e3a00000 	mov	r0, #0	; 0x0
        330d44:	e59410a4 	ldr	r1, [r4, #164]
        330d48:	e0871081 	add	r1, r7, r1, lsl #1
        330d4c:	e5c10001 	strb	r0, [r1, #1]
        330d50:	e5c10000 	strb	r0, [r1]
        330d54:	e24dd004 	sub	sp, sp, #4	; 0x4
        330d58:	e1a00007 	mov	r0, r7
        330d5c:	eb62515c 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        330d60:	eb6244f9 	bl	1bc214c <$AllocateRefHandle(long)>
        330d64:	e58d0000 	str	r0, [sp]
        330d68:	e1a00007 	mov	r0, r7
        330d6c:	eb606a15 	bl	1b4b5c8 <$QDDisposeTempPtr(char *)>
        330d70:	e24dd004 	sub	sp, sp, #4	; 0x4
        330d74:	e2840074 	add	r0, r4, #116	; 0x74
        330d78:	e1a07000 	mov	r7, r0
        330d7c:	eb60a7ed 	bl	1b5ad38 <$StyleToNSFont(StyleRecord *)>
        330d80:	eb6244f1 	bl	1bc214c <$AllocateRefHandle(long)>
        330d84:	e40d0004 	str	r0, [sp], -#4
        330d88:	e28400d4 	add	r0, r4, #212	; 0xd4
        330d8c:	e5971000 	ldr	r1, [r7]
        330d90:	e5912000 	ldr	r2, [r1]
        330d94:	e4901004 	ldr	r1, [r0], #4
        330d98:	e287e004 	add	lr, r7, #4	; 0x4
        330d9c:	e5812000 	str	r2, [r1]
        330da0:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        330da4:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        330da8:	e89e100c 	ldmia	lr, {r2, r3, ip}
        330dac:	e880100c 	stmia	r0, {r2, r3, ip}
        330db0:	e59400b0 	ldr	r0, [r4, #176]
        330db4:	e2800902 	add	r0, r0, #32768	; 0x8000
        330db8:	e1a00840 	mov	r0, r0, asr #16
        330dbc:	e1a08800 	mov	r8, r0, lsl #16
        330dc0:	e1a08848 	mov	r8, r8, asr #16
        330dc4:	e59400b4 	ldr	r0, [r4, #180]
        330dc8:	e2800902 	add	r0, r0, #32768	; 0x8000
        330dcc:	e1a00840 	mov	r0, r0, asr #16
        330dd0:	e1a07800 	mov	r7, r0, lsl #16
        330dd4:	e1a07847 	mov	r7, r7, asr #16
        330dd8:	e3a0a002 	mov	sl, #2	; 0x2
        330ddc:	e1a0000a 	mov	r0, sl
        330de0:	eb6244d9 	bl	1bc214c <$AllocateRefHandle(long)>
        330de4:	e58d0000 	str	r0, [sp]
        330de8:	e1a0000d 	mov	r0, sp
        330dec:	e28d2004 	add	r2, sp, #4	; 0x4
        330df0:	e28d1008 	add	r1, sp, #8	; 0x8
        330df4:	eb5ea7d1 	bl	1adad40 <$FStrFontWidth__FRC6RefVarN21>
        330df8:	e3100003 	tst	r0, #3	; 0x3
        330dfc:	01a00140 	moveq	r0, r0, asr #2
        330e00:	0a000000 	beq	330e08 <XtndPicCodes(long, PicPlay *, GrafPort *)+0x118>
        330e04:	eb6244c4 	bl	1bc211c <$_RINTError(long)>
        330e08:	e0809008 	add	r9, r0, r8
        330e0c:	e59d0000 	ldr	r0, [sp]
        330e10:	eb6248e9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330e14:	e2899005 	add	r9, r9, #5	; 0x5
        330e18:	e24dd020 	sub	sp, sp, #32	; 0x20
        330e1c:	e3a00002 	mov	r0, #2	; 0x2
        330e20:	eb6244c9 	bl	1bc214c <$AllocateRefHandle(long)>
        330e24:	e58d0000 	str	r0, [sp]
        330e28:	e1a0000d 	mov	r0, sp
        330e2c:	e28d1024 	add	r1, sp, #36	; 0x24
        330e30:	eb5e973e 	bl	1ad6b30 <$FFontAscent__FRC6RefVarT1>
        330e34:	e3100003 	tst	r0, #3	; 0x3
        330e38:	01a00140 	moveq	r0, r0, asr #2
        330e3c:	0a000000 	beq	330e44 <XtndPicCodes(long, PicPlay *, GrafPort *)+0x154>
        330e40:	eb6244b5 	bl	1bc211c <$_RINTError(long)>
        330e44:	e047a000 	sub	sl, r7, r0
        330e48:	e59d0000 	ldr	r0, [sp]
        330e4c:	eb6248da 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330e50:	e3a00002 	mov	r0, #2	; 0x2
        330e54:	eb6244bc 	bl	1bc214c <$AllocateRefHandle(long)>
        330e58:	e58d0004 	str	r0, [sp, #4]
        330e5c:	e28d0004 	add	r0, sp, #4	; 0x4
        330e60:	e28d1024 	add	r1, sp, #36	; 0x24
        330e64:	eb5e9732 	bl	1ad6b34 <$FFontDescent__FRC6RefVarT1>
        330e68:	e3100003 	tst	r0, #3	; 0x3
        330e6c:	01a00140 	moveq	r0, r0, asr #2
        330e70:	0a000000 	beq	330e78 <XtndPicCodes(long, PicPlay *, GrafPort *)+0x188>
        330e74:	eb6244a8 	bl	1bc211c <$_RINTError(long)>
        330e78:	e0807007 	add	r7, r0, r7
        330e7c:	e59d0004 	ldr	r0, [sp, #4]
        330e80:	eb6248cd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330e84:	e1a00107 	mov	r0, r7, lsl #2
        330e88:	eb6244af 	bl	1bc214c <$AllocateRefHandle(long)>
        330e8c:	e58d000c 	str	r0, [sp, #12]
        330e90:	e28d300c 	add	r3, sp, #12	; 0xc
        330e94:	e92d0008 	stmdb	sp!, {r3}
        330e98:	e1a00109 	mov	r0, r9, lsl #2
        330e9c:	eb6244aa 	bl	1bc214c <$AllocateRefHandle(long)>
        330ea0:	e58d0014 	str	r0, [sp, #20]
        330ea4:	e28d3014 	add	r3, sp, #20	; 0x14
        330ea8:	e92d0008 	stmdb	sp!, {r3}
        330eac:	e1a0010a 	mov	r0, sl, lsl #2
        330eb0:	eb6244a5 	bl	1bc214c <$AllocateRefHandle(long)>
        330eb4:	e58d001c 	str	r0, [sp, #28]
        330eb8:	e28d701c 	add	r7, sp, #28	; 0x1c
        330ebc:	e1a00108 	mov	r0, r8, lsl #2
        330ec0:	eb6244a1 	bl	1bc214c <$AllocateRefHandle(long)>
        330ec4:	e58d0020 	str	r0, [sp, #32]
        330ec8:	e28d8020 	add	r8, sp, #32	; 0x20
        330ecc:	e3a00002 	mov	r0, #2	; 0x2
        330ed0:	eb62449d 	bl	1bc214c <$AllocateRefHandle(long)>
        330ed4:	e58d0024 	str	r0, [sp, #36]
        330ed8:	e28d0024 	add	r0, sp, #36	; 0x24
        330edc:	e28d1030 	add	r1, sp, #48	; 0x30
        330ee0:	e1a02008 	mov	r2, r8
        330ee4:	e1a03007 	mov	r3, r7
        330ee8:	eb5eccc5 	bl	1ae4204 <$FMakeTextBox>
        330eec:	e28dd008 	add	sp, sp, #8	; 0x8
        330ef0:	eb624495 	bl	1bc214c <$AllocateRefHandle(long)>
        330ef4:	e58d0008 	str	r0, [sp, #8]
        330ef8:	e28d1008 	add	r1, sp, #8	; 0x8
        330efc:	e1a03006 	mov	r3, r6
        330f00:	e1a02004 	mov	r2, r4
        330f04:	e1a00005 	mov	r0, r5
        330f08:	eb60a36c 	bl	1b59cc0 <$storeShape(long, RefVar const &, PicPlay *, GrafPort *)>
        330f0c:	e59d0008 	ldr	r0, [sp, #8]
        330f10:	eb6248a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330f14:	e59d000c 	ldr	r0, [sp, #12]
        330f18:	eb6248a7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330f1c:	e59d0010 	ldr	r0, [sp, #16]
        330f20:	eb6248a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330f24:	e59d0014 	ldr	r0, [sp, #20]
        330f28:	eb6248a3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330f2c:	e59d0018 	ldr	r0, [sp, #24]
        330f30:	eb6248a1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330f34:	e59d001c 	ldr	r0, [sp, #28]
        330f38:	eb62489f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330f3c:	e5bd0024 	ldr	r0, [sp, #36]!
        330f40:	eb62489d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330f44:	e5bd0004 	ldr	r0, [sp, #4]!
        330f48:	eb62489b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330f4c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: XrIfItExists_NULL_Otherwise__FlN21PiP13PS_point_typesPsT7P8ppd_typeUiP11xrdata_type
 * Address: 0033c150
 */
void globals::XrIfItExists_NULL_Otherwise() {
    /*
        33c150:	e1a0c00d 	mov	ip, sp
        33c154:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        33c158:	e24cb004 	sub	fp, ip, #4	; 0x4
        33c15c:	e20020ff 	and	r2, r0, #255	; 0xff
        33c160:	e59b4004 	ldr	r4, [fp, #4]
        33c164:	e5941040 	ldr	r1, [r4, #64]
        33c168:	e1a01841 	mov	r1, r1, asr #16
        33c16c:	e5940020 	ldr	r0, [r4, #32]
        33c170:	eb5fc55c 	bl	1b2d6e8 <$FindXrIndex__FPA13_15RWG_PPD_el_typesi>
        33c174:	e3500000 	cmp	r0, #0	; 0x0
        33c178:	b3a00000 	movlt	r0, #0	; 0x0
        33c17c:	b91ba810 	ldmltdb	fp, {r4, fp, sp, pc}
        33c180:	e5b41008 	ldr	r1, [r4, #8]!
        33c184:	e5911008 	ldr	r1, [r1, #8]
        33c188:	e0800080 	add	r0, r0, r0, lsl #1
        33c18c:	e0810180 	add	r0, r1, r0, lsl #3
        33c190:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: xexpy
 * Address: 0033c36c
 */
void globals::xexpy() {
    /*
        33c36c:	e1a0c00d 	mov	ip, sp
        33c370:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        33c374:	e24cb004 	sub	fp, ip, #4	; 0x4
        33c378:	ed6dc209 	sfm	f4, 3, [sp, -#36]!
        33c37c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        33c380:	ecbdc102 	ldfd	f4, [sp], #8
        33c384:	ecbdd102 	ldfd	f5, [sp], #8
        33c388:	ed2dd102 	stfd	f5, [sp, -#8]!
        33c38c:	e8bd0003 	ldmia	sp!, {r0, r1}
        33c390:	eb631b92 	bl	1c031e0 <$__fpclassifyd>
        33c394:	e1a04000 	mov	r4, r0
        33c398:	ed2dc102 	stfd	f4, [sp, -#8]!
        33c39c:	e8bd0003 	ldmia	sp!, {r0, r1}
        33c3a0:	eb631b8e 	bl	1c031e0 <$__fpclassifyd>
        33c3a4:	e59f1030 	ldr	r1, [pc, #30]	; 33c3dc <xexpy+0x70>
        33c3a8:	ee00e188 	mvfd	f6, #0.0
        33c3ac:	e59f502c 	ldr	r5, [pc, #2c]	; 33c3e0 <xexpy+0x74>
        33c3b0:	e3300001 	teq	r0, #1	; 0x1
        33c3b4:	0a000014 	beq	33c40c <xexpy+0xa0>
        33c3b8:	e3300002 	teq	r0, #2	; 0x2
        33c3bc:	0a000008 	beq	33c3e4 <xexpy+0x78>
        33c3c0:	e3300003 	teq	r0, #3	; 0x3
        33c3c4:	13300004 	teqne	r0, #4	; 0x4
        33c3c8:	1a000032 	bne	33c498 <xexpy+0x12c>
        33c3cc:	ee94f119 	cmf	f4, #1.0
        33c3d0:	03340001 	teqeq	r4, #1	; 0x1
        33c3d4:	1a000023 	bne	33c468 <xexpy+0xfc>
        33c3d8:	ea00001e 	b	33c458 <xexpy+0xec>
        33c3dc:	00380af8 	ldreqsh	r0, [r8], -r8
        33c3e0:	00380ae8 	eoreqs	r0, r8, r8, ror #21
        33c3e4:	e3340002 	teq	r4, #2	; 0x2
        33c3e8:	0a00001a 	beq	33c458 <xexpy+0xec>
        33c3ec:	ed2dd102 	stfd	f5, [sp, -#8]!
        33c3f0:	e8bd0003 	ldmia	sp!, {r0, r1}
        33c3f4:	eb631b7f 	bl	1c031f8 <$__signbitd>
        33c3f8:	e3300000 	teq	r0, #0	; 0x0
        33c3fc:	1d95c100 	ldfned	f4, [r5]
        33c400:	13a00002 	movne	r0, #2	; 0x2
        33c404:	1a000015 	bne	33c460 <xexpy+0xf4>
        33c408:	ea000008 	b	33c430 <xexpy+0xc4>
        33c40c:	e3340001 	teq	r4, #1	; 0x1
        33c410:	0a000009 	beq	33c43c <xexpy+0xd0>
        33c414:	e3340002 	teq	r4, #2	; 0x2
        33c418:	0a00000e 	beq	33c458 <xexpy+0xec>
        33c41c:	ed2dd102 	stfd	f5, [sp, -#8]!
        33c420:	e8bd0003 	ldmia	sp!, {r0, r1}
        33c424:	eb631b73 	bl	1c031f8 <$__signbitd>
        33c428:	e3300001 	teq	r0, #1	; 0x1
        33c42c:	1a000007 	bne	33c450 <xexpy+0xe4>
        33c430:	ee008186 	mvfd	f0, f6
        33c434:	ed5bc20e 	lfm	f4, 3, [fp, -#56]
        33c438:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        33c43c:	ed2dd102 	stfd	f5, [sp, -#8]!
        33c440:	e8bd0003 	ldmia	sp!, {r0, r1}
        33c444:	eb631b6b 	bl	1c031f8 <$__signbitd>
        33c448:	e3300000 	teq	r0, #0	; 0x0
        33c44c:	1afffff7 	bne	33c430 <xexpy+0xc4>
        33c450:	ed958100 	ldfd	f0, [r5]
        33c454:	eafffff6 	b	33c434 <xexpy+0xc8>
        33c458:	ed91c100 	ldfd	f4, [r1]
        33c45c:	e3a00001 	mov	r0, #1	; 0x1
        33c460:	eb61dd64 	bl	1bb39f8 <$feraiseexcept>
        33c464:	ea00000b 	b	33c498 <xexpy+0x12c>
        33c468:	ed2dc102 	stfd	f4, [sp, -#8]!
        33c46c:	e8bd0003 	ldmia	sp!, {r0, r1}
        33c470:	eb61e172 	bl	1bb4a40 <$log2>
        33c474:	ee100185 	mufd	f0, f0, f5
        33c478:	ed2d8102 	stfd	f0, [sp, -#8]!
        33c47c:	e8bd0003 	ldmia	sp!, {r0, r1}
        33c480:	eb61dd53 	bl	1bb39d4 <$exp2>
        33c484:	ee00c180 	mvfd	f4, f0
        33c488:	e3340001 	teq	r4, #1	; 0x1
        33c48c:	13340002 	teqne	r4, #2	; 0x2
        33c490:	03a00010 	moveq	r0, #16	; 0x10
        33c494:	0b61dd52 	bleq	1bb39e4 <$feclearexcept>
        33c498:	ee008184 	mvfd	f0, f4
        33c49c:	eaffffe4 	b	33c434 <xexpy+0xc8>
    */
}

/**
 * Symbol: XorRgn__FPP6RegionN21
 * Address: 003411f4
 */
void globals::XorRgn() {
    /*
        3411f4:	e1a03002 	mov	r3, r2
        3411f8:	e1a02001 	mov	r2, r1
        3411fc:	e1a01000 	mov	r1, r0
        341200:	e3a00006 	mov	r0, #6	; 0x6
        341204:	ea6024bf 	b	1b4a508 <$DoRgnOp__FlPP6RegionN22>
    */
}

/**
 * Symbol: XorScan__FPsN21l
 * Address: 00341b88
 */
void globals::XorScan() {
    /*
        341b88:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        341b8c:	e590e000 	ldr	lr, [r0]
        341b90:	e1a0e84e 	mov	lr, lr, asr #16
        341b94:	e2800002 	add	r0, r0, #2	; 0x2
        341b98:	e5913000 	ldr	r3, [r1]
        341b9c:	e1a03843 	mov	r3, r3, asr #16
        341ba0:	e2811002 	add	r1, r1, #2	; 0x2
        341ba4:	e3a04902 	mov	r4, #32768	; 0x8000
        341ba8:	e2444001 	sub	r4, r4, #1	; 0x1
        341bac:	ea00000e 	b	341bec <XorScan__FPsN21l+0x64>
        341bb0:	e15e0003 	cmp	lr, r3
        341bb4:	0590e000 	ldreq	lr, [r0]
        341bb8:	01a0e84e 	moveq	lr, lr, asr #16
        341bbc:	02800002 	addeq	r0, r0, #2	; 0x2
        341bc0:	0a000012 	beq	341c10 <XorScan__FPsN21l+0x88>
        341bc4:	a5c23001 	strgeb	r3, [r2, #1]
        341bc8:	a1a03443 	movge	r3, r3, asr #8
        341bcc:	a4c23002 	strgeb	r3, [r2], #2
        341bd0:	aa00000e 	bge	341c10 <XorScan__FPsN21l+0x88>
        341bd4:	e5c2e001 	strb	lr, [r2, #1]
        341bd8:	e1a0c44e 	mov	ip, lr, asr #8
        341bdc:	e4c2c002 	strb	ip, [r2], #2
        341be0:	e590e000 	ldr	lr, [r0]
        341be4:	e1a0e84e 	mov	lr, lr, asr #16
        341be8:	e2800002 	add	r0, r0, #2	; 0x2
        341bec:	e3a05902 	mov	r5, #32768	; 0x8000
        341bf0:	e2455001 	sub	r5, r5, #1	; 0x1
        341bf4:	e13e0005 	teq	lr, r5
        341bf8:	01330005 	teqeq	r3, r5
        341bfc:	1affffeb 	bne	341bb0 <XorScan__FPsN21l+0x28>
        341c00:	e5c24001 	strb	r4, [r2, #1]
        341c04:	e3a0107f 	mov	r1, #127	; 0x7f
        341c08:	e5c21000 	strb	r1, [r2]
        341c0c:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
        341c10:	e5913000 	ldr	r3, [r1]
        341c14:	e1a03843 	mov	r3, r3, asr #16
        341c18:	e2811002 	add	r1, r1, #2	; 0x2
        341c1c:	eafffff2 	b	341bec <XorScan__FPsN21l+0x64>
    */
}

/**
 * Symbol: XorSlab__FPclN22
 * Address: 003476e8
 */
void globals::XorSlab() {
    /*
        3476e8:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        3476ec:	e59fc08c 	ldr	ip, [pc, #8c]	; 347780 <XorSlab__FPclN22+0x98>
        3476f0:	e08cc003 	add	ip, ip, r3
        3476f4:	e5dce088 	ldrb	lr, [ip, #136]
        3476f8:	e5dcc044 	ldrb	ip, [ip, #68]
        3476fc:	e001400e 	and	r4, r1, lr
        347700:	e1a05003 	mov	r5, r3
        347704:	e0040495 	mul	r4, r5, r4
        347708:	e3e05000 	mvn	r5, #0	; 0x0
        34770c:	e1a04435 	mov	r4, r5, lsr r4
        347710:	e002e00e 	and	lr, r2, lr
        347714:	e00e0e93 	mul	lr, r3, lr
        347718:	e26e3020 	rsb	r3, lr, #32	; 0x20
        34771c:	e1a03315 	mov	r3, r5, lsl r3
        347720:	e1a01c51 	mov	r1, r1, asr ip
        347724:	e0800101 	add	r0, r0, r1, lsl #2
        347728:	e0611c52 	rsb	r1, r1, r2, asr ip
        34772c:	e3510000 	cmp	r1, #0	; 0x0
        347730:	d0041003 	andle	r1, r4, r3
        347734:	d5902000 	ldrle	r2, [r0]
        347738:	d0211002 	eorle	r1, r1, r2
        34773c:	da00000d 	ble	347778 <XorSlab__FPclN22+0x90>
        347740:	e5902000 	ldr	r2, [r0]
        347744:	e0222004 	eor	r2, r2, r4
        347748:	e2411001 	sub	r1, r1, #1	; 0x1
        34774c:	e3510000 	cmp	r1, #0	; 0x0
        347750:	e4802004 	str	r2, [r0], #4
        347754:	da000005 	ble	347770 <XorSlab__FPclN22+0x88>
        347758:	e5902000 	ldr	r2, [r0]
        34775c:	e1e02002 	mvn	r2, r2
        347760:	e2411001 	sub	r1, r1, #1	; 0x1
        347764:	e3510000 	cmp	r1, #0	; 0x0
        347768:	e4802004 	str	r2, [r0], #4
        34776c:	cafffff9 	bgt	347758 <XorSlab__FPclN22+0x70>
        347770:	e5901000 	ldr	r1, [r0]
        347774:	e0211003 	eor	r1, r1, r3
        347778:	e5801000 	str	r1, [r0]
        34777c:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
        347780:	00380bcc 	eoreqs	r0, r8, ip, asr #23
    */
}

/**
 * Symbol: xrmatr_alloc(rc_type *, xrdata_type *, xrcm_type **)
 * Address: 003606e4
 */
xrmatr_alloc(rc_type *, xrdata_type *, xrcm_type **) {
    /*
        3606e4:	e1a0c00d 	mov	ip, sp
        3606e8:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3606ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        3606f0:	e1a04000 	mov	r4, r0
        3606f4:	e1a05001 	mov	r5, r1
        3606f8:	e3a08000 	mov	r8, #0	; 0x0
        3606fc:	e3a00000 	mov	r0, #0	; 0x0
        360700:	e5912000 	ldr	r2, [r1]
        360704:	e3520000 	cmp	r2, #0	; 0x0
        360708:	da00000b 	ble	36073c <xrmatr_alloc(rc_type *, xrdata_type *, xrcm_type **)+0x58>
        36070c:	e5953008 	ldr	r3, [r5, #8]
        360710:	e0881088 	add	r1, r8, r8, lsl #1
        360714:	e7d31181 	ldrb	r1, [r3, r1, lsl #3]
        360718:	e3310001 	teq	r1, #1	; 0x1
        36071c:	13310003 	teqne	r1, #3	; 0x3
        360720:	13310004 	teqne	r1, #4	; 0x4
        360724:	13310002 	teqne	r1, #2	; 0x2
        360728:	13310005 	teqne	r1, #5	; 0x5
        36072c:	02800001 	addeq	r0, r0, #1	; 0x1
        360730:	e2888001 	add	r8, r8, #1	; 0x1
        360734:	e1580002 	cmp	r8, r2
        360738:	bafffff4 	blt	360710 <xrmatr_alloc(rc_type *, xrdata_type *, xrcm_type **)+0x2c>
        36073c:	e1b01008 	movs	r1, r8
        360740:	42611000 	rsbmi	r1, r1, #0	; 0x0
        360744:	e2011003 	and	r1, r1, #3	; 0x3
        360748:	42611000 	rsbmi	r1, r1, #0	; 0x0
        36074c:	e0481001 	sub	r1, r8, r1
        360750:	e2817008 	add	r7, r1, #8	; 0x8
        360754:	e080a300 	add	sl, r0, r0, lsl #6
        360758:	e1a0a18a 	mov	sl, sl, lsl #3
        36075c:	e3a00fb2 	mov	r0, #712	; 0x2c8
        360760:	e0800087 	add	r0, r0, r7, lsl #1
        360764:	e0800087 	add	r0, r0, r7, lsl #1
        360768:	e0800287 	add	r0, r0, r7, lsl #5
        36076c:	e0800087 	add	r0, r0, r7, lsl #1
        360770:	e0800187 	add	r0, r0, r7, lsl #3
        360774:	e594100a 	ldr	r1, [r4, #10]
        360778:	e1a01781 	mov	r1, r1, lsl #15
        36077c:	e1b01fa1 	movs	r1, r1, lsr #31
        360780:	1080000a 	addne	r0, r0, sl
        360784:	e2800008 	add	r0, r0, #8	; 0x8
        360788:	e1a09000 	mov	r9, r0
        36078c:	eb5c3c0a 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        360790:	e1b06000 	movs	r6, r0
        360794:	03a00001 	moveq	r0, #1	; 0x1
        360798:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        36079c:	e1a02809 	mov	r2, r9, lsl #16
        3607a0:	e1a02822 	mov	r2, r2, lsr #16
        3607a4:	e1a00006 	mov	r0, r6
        3607a8:	e3a01000 	mov	r1, #0	; 0x0
        3607ac:	eb6150a9 	bl	1bb4a58 <$memset>
        3607b0:	e1a00006 	mov	r0, r6
        3607b4:	e3a01fb3 	mov	r1, #716	; 0x2cc
        3607b8:	e5869144 	str	r9, [r6, #324]
        3607bc:	e0862001 	add	r2, r6, r1
        3607c0:	e0811087 	add	r1, r1, r7, lsl #1
        3607c4:	e58621e8 	str	r2, [r6, #488]
        3607c8:	e0862001 	add	r2, r6, r1
        3607cc:	e0811087 	add	r1, r1, r7, lsl #1
        3607d0:	e58621ec 	str	r2, [r6, #492]
        3607d4:	e3a02000 	mov	r2, #0	; 0x0
        3607d8:	e0803001 	add	r3, r0, r1
        3607dc:	e086c102 	add	ip, r6, r2, lsl #2
        3607e0:	e0811087 	add	r1, r1, r7, lsl #1
        3607e4:	e2822001 	add	r2, r2, #1	; 0x1
        3607e8:	e5ac31f0 	str	r3, [ip, #496]!
        3607ec:	e3520010 	cmp	r2, #16	; 0x10
        3607f0:	bafffff8 	blt	3607d8 <xrmatr_alloc(rc_type *, xrdata_type *, xrcm_type **)+0xf4>
        3607f4:	e0802001 	add	r2, r0, r1
        3607f8:	e0811087 	add	r1, r1, r7, lsl #1
        3607fc:	e5862230 	str	r2, [r6, #560]
        360800:	e0802001 	add	r2, r0, r1
        360804:	e0811187 	add	r1, r1, r7, lsl #3
        360808:	e5862014 	str	r2, [r6, #20]
        36080c:	e594200a 	ldr	r2, [r4, #10]
        360810:	e1a02782 	mov	r2, r2, lsl #15
        360814:	e1b02fa2 	movs	r2, r2, lsr #31
        360818:	10800001 	addne	r0, r0, r1
        36081c:	15860238 	strne	r0, [r6, #568]
        360820:	1586a234 	strne	sl, [r6, #564]
        360824:	e594001e 	ldr	r0, [r4, #30]
        360828:	e1a00840 	mov	r0, r0, asr #16
        36082c:	e586012c 	str	r0, [r6, #300]
        360830:	e586009c 	str	r0, [r6, #156]
        360834:	e594000a 	ldr	r0, [r4, #10]
        360838:	e1a00840 	mov	r0, r0, asr #16
        36083c:	e5860130 	str	r0, [r6, #304]
        360840:	e5940004 	ldr	r0, [r4, #4]
        360844:	e1a00840 	mov	r0, r0, asr #16
        360848:	e5860134 	str	r0, [r6, #308]
        36084c:	e5940006 	ldr	r0, [r4, #6]
        360850:	e1a00840 	mov	r0, r0, asr #16
        360854:	e5860138 	str	r0, [r6, #312]
        360858:	e5960048 	ldr	r0, [r6, #72]
        36085c:	e5941024 	ldr	r1, [r4, #36]
        360860:	e1b01841 	movs	r1, r1, asr #16
        360864:	13a01001 	movne	r1, #1	; 0x1
        360868:	e20110ff 	and	r1, r1, #255	; 0xff
        36086c:	e1800001 	orr	r0, r0, r1
        360870:	e3800002 	orr	r0, r0, #2	; 0x2
        360874:	e5860048 	str	r0, [r6, #72]
        360878:	e594001c 	ldr	r0, [r4, #28]
        36087c:	e1a00840 	mov	r0, r0, asr #16
        360880:	e2866f4f 	add	r6, r6, #316	; 0x13c
        360884:	e8860101 	stmia	r6, {r0, r8}
        360888:	e2466f4f 	sub	r6, r6, #316	; 0x13c
        36088c:	e5b40030 	ldr	r0, [r4, #48]!
        360890:	e586023c 	str	r0, [r6, #572]
        360894:	e59000a4 	ldr	r0, [r0, #164]
        360898:	e5860240 	str	r0, [r6, #576]
        36089c:	e3a00000 	mov	r0, #0	; 0x0
        3608a0:	e3580000 	cmp	r8, #0	; 0x0
        3608a4:	da000009 	ble	3608d0 <xrmatr_alloc(rc_type *, xrdata_type *, xrcm_type **)+0x1ec>
        3608a8:	e5961014 	ldr	r1, [r6, #20]
        3608ac:	e0812180 	add	r2, r1, r0, lsl #3
        3608b0:	e0803080 	add	r3, r0, r0, lsl #1
        3608b4:	e5951008 	ldr	r1, [r5, #8]
        3608b8:	e0811183 	add	r1, r1, r3, lsl #3
        3608bc:	e8911008 	ldmia	r1, {r3, ip}
        3608c0:	e8821008 	stmia	r2, {r3, ip}
        3608c4:	e2800001 	add	r0, r0, #1	; 0x1
        3608c8:	e1500008 	cmp	r0, r8
        3608cc:	bafffff5 	blt	3608a8 <xrmatr_alloc(rc_type *, xrdata_type *, xrcm_type **)+0x1c4>
        3608d0:	e596013c 	ldr	r0, [r6, #316]
        3608d4:	e1a01006 	mov	r1, r6
        3608d8:	eb5f43ed 	bl	1b31894 <$SetWWCLine(int, xrcm_type *)>
        3608dc:	e0881108 	add	r1, r8, r8, lsl #2
        3608e0:	e3e00009 	mvn	r0, #9	; 0x9
        3608e4:	e0800081 	add	r0, r0, r1, lsl #1
        3608e8:	e58601dc 	str	r0, [r6, #476]
        3608ec:	e1a01006 	mov	r1, r6
        3608f0:	e3a00000 	mov	r0, #0	; 0x0
        3608f4:	eb5f43f8 	bl	1b318dc <$change_direction(int, xrcm_type *)>
        3608f8:	e51b202c 	ldr	r2, [fp, -#44]
        3608fc:	e3a00000 	mov	r0, #0	; 0x0
        360900:	e5826000 	str	r6, [r2]
        360904:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: xrmatr_dealloc(xrcm_type **)
 * Address: 00360908
 */
xrmatr_dealloc(xrcm_type **) {
    /*
        360908:	e1a0c00d 	mov	ip, sp
        36090c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        360910:	e24cb004 	sub	fp, ip, #4	; 0x4
        360914:	e1a04000 	mov	r4, r0
        360918:	e5900000 	ldr	r0, [r0]
        36091c:	e3300000 	teq	r0, #0	; 0x0
        360920:	03a00001 	moveq	r0, #1	; 0x1
        360924:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        360928:	eb5c3ba4 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        36092c:	e3a00000 	mov	r0, #0	; 0x0
        360930:	e5840000 	str	r0, [r4]
        360934:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: xrw_algs(xrdata_type *,  (*)[1])(RWG_type *, rc_type *)
 * Address: 00362f08
 */
xrw_algs(xrdata_type *,  (*)[1])(RWG_type *, rc_type *) {
    /*
        362f08:	e1a0c00d 	mov	ip, sp
        362f0c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        362f10:	e24cb004 	sub	fp, ip, #4	; 0x4
        362f14:	e1a0c002 	mov	ip, r2
        362f18:	e1a04003 	mov	r4, r3
        362f1c:	e5937008 	ldr	r7, [r3, #8]
        362f20:	e1a07847 	mov	r7, r7, asr #16
        362f24:	e593800a 	ldr	r8, [r3, #10]
        362f28:	e1a08848 	mov	r8, r8, asr #16
        362f2c:	e593600e 	ldr	r6, [r3, #14]
        362f30:	e1a06846 	mov	r6, r6, asr #16
        362f34:	e593501e 	ldr	r5, [r3, #30]
        362f38:	e1a05845 	mov	r5, r5, asr #16
        362f3c:	e3a02000 	mov	r2, #0	; 0x0
        362f40:	e5c12049 	strb	r2, [r1, #73]
        362f44:	e5c12048 	strb	r2, [r1, #72]
        362f48:	e5941000 	ldr	r1, [r4]
        362f4c:	e1a01841 	mov	r1, r1, asr #16
        362f50:	e3a03001 	mov	r3, #1	; 0x1
        362f54:	e3310003 	teq	r1, #3	; 0x3
        362f58:	1a000004 	bne	362f70 <xrw_algs(xrdata_type *,  (*)[1])(RWG_type *, rc_type *)+0x68>
        362f5c:	e5c4300f 	strb	r3, [r4, #15]
        362f60:	e5c4200e 	strb	r2, [r4, #14]
        362f64:	e3a0e002 	mov	lr, #2	; 0x2
        362f68:	e5c4e009 	strb	lr, [r4, #9]
        362f6c:	e5c42008 	strb	r2, [r4, #8]
        362f70:	e5d420c0 	ldrb	r2, [r4, #192]
        362f74:	e3320000 	teq	r2, #0	; 0x0
        362f78:	13a01011 	movne	r1, #17	; 0x11
        362f7c:	e3510004 	cmp	r1, #4	; 0x4
        362f80:	0a00000e 	beq	362fc0 <xrw_algs(xrdata_type *,  (*)[1])(RWG_type *, rc_type *)+0xb8>
        362f84:	ca000004 	bgt	362f9c <xrw_algs(xrdata_type *,  (*)[1])(RWG_type *, rc_type *)+0x94>
        362f88:	e3310001 	teq	r1, #1	; 0x1
        362f8c:	13310002 	teqne	r1, #2	; 0x2
        362f90:	13310003 	teqne	r1, #3	; 0x3
        362f94:	1a000019 	bne	363000 <xrw_algs(xrdata_type *,  (*)[1])(RWG_type *, rc_type *)+0xf8>
        362f98:	ea000008 	b	362fc0 <xrw_algs(xrdata_type *,  (*)[1])(RWG_type *, rc_type *)+0xb8>
        362f9c:	e3310005 	teq	r1, #5	; 0x5
        362fa0:	0a000006 	beq	362fc0 <xrw_algs(xrdata_type *,  (*)[1])(RWG_type *, rc_type *)+0xb8>
        362fa4:	e3310011 	teq	r1, #17	; 0x11
        362fa8:	1a000014 	bne	363000 <xrw_algs(xrdata_type *,  (*)[1])(RWG_type *, rc_type *)+0xf8>
        362fac:	e28420c0 	add	r2, r4, #192	; 0xc0
        362fb0:	e1a03004 	mov	r3, r4
        362fb4:	e1a0100c 	mov	r1, ip
        362fb8:	eb5f427c 	bl	1b339b0 <$GetCMPAliases(xrdata_type *, RWG_type *, char *, rc_type *)>
        362fbc:	ea000002 	b	362fcc <xrw_algs(xrdata_type *,  (*)[1])(RWG_type *, rc_type *)+0xc4>
        362fc0:	e1a02004 	mov	r2, r4
        362fc4:	e1a0100c 	mov	r1, ip
        362fc8:	eb5f4ab0 	bl	1b35a90 <$xrlv(xrdata_type *, RWG_type *, rc_type *)>
        362fcc:	e5c4600f 	strb	r6, [r4, #15]
        362fd0:	e1a01446 	mov	r1, r6, asr #8
        362fd4:	e5c4100e 	strb	r1, [r4, #14]
        362fd8:	e5c47009 	strb	r7, [r4, #9]
        362fdc:	e1a01447 	mov	r1, r7, asr #8
        362fe0:	e5c41008 	strb	r1, [r4, #8]
        362fe4:	e5c4800b 	strb	r8, [r4, #11]
        362fe8:	e1a01448 	mov	r1, r8, asr #8
        362fec:	e5c4100a 	strb	r1, [r4, #10]
        362ff0:	e5c4501f 	strb	r5, [r4, #31]
        362ff4:	e1a01445 	mov	r1, r5, asr #8
        362ff8:	e5c4101e 	strb	r1, [r4, #30]
        362ffc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        363000:	e5c4600f 	strb	r6, [r4, #15]
        363004:	e1a00446 	mov	r0, r6, asr #8
        363008:	e5c4000e 	strb	r0, [r4, #14]
        36300c:	e5c47009 	strb	r7, [r4, #9]
        363010:	e1a00447 	mov	r0, r7, asr #8
        363014:	e5c40008 	strb	r0, [r4, #8]
        363018:	e5c4800b 	strb	r8, [r4, #11]
        36301c:	e1a00448 	mov	r0, r8, asr #8
        363020:	e5c4000a 	strb	r0, [r4, #10]
        363024:	e5c4501f 	strb	r5, [r4, #31]
        363028:	e1a00445 	mov	r0, r5, asr #8
        36302c:	e5c4001e 	strb	r0, [r4, #30]
        363030:	e1a00003 	mov	r0, r3
        363034:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: xDotStencils
 * Address: 0036f0d0
 */
void globals::xDotStencils() {
    /*
        36f0d0:	00000000 	andeq	r0, r0, r0
        36f0d4:	0036e71c 	eoreqs	lr, r6, ip, lsl r7
        36f0d8:	0036e7bc 	ldreqh	lr, [r6], -ip
        36f0dc:	00000000 	andeq	r0, r0, r0
        36f0e0:	0036e868 	eoreqs	lr, r6, r8, ror #16
        36f0f0:	0036e960 	eoreqs	lr, r6, r0, ror #18
        36f110:	0036eb50 	eoreqs	lr, r6, r0, asr fp
        36f150:	0036f0b0 	ldreqh	pc, [r6], -r0
    */
}

/**
 * Symbol: xReject
 * Address: 003766a0
 */
void globals::xReject() {
    /*
        3766a0:	00550001 	subeqs	r0, r5, r1
        3766a4:	00060000 	andeq	r0, r6, r0
        3766a8:	00010003 	andeq	r0, r1, r3
        3766ac:	00550002 	subeqs	r0, r5, r2
        3766b0:	00020000 	andeq	r0, r2, r0
        3766b4:	00010003 	andeq	r0, r1, r3
        3766b8:	00520003 	subeqs	r0, r2, r3
        3766bc:	00010000 	andeq	r0, r1, r0
        3766c0:	00010003 	andeq	r0, r1, r3
        3766c4:	004c0004 	subeq	r0, ip, r4
        3766c8:	00010000 	andeq	r0, r1, r0
        3766cc:	00010003 	andeq	r0, r1, r3
        3766d0:	00460005 	subeq	r0, r6, r5
        3766d4:	ffff0000 	swinv	0x00ff0000
        3766d8:	00010003 	andeq	r0, r1, r3
        3766dc:	00410006 	subeq	r0, r1, r6
        3766e0:	ffff0000 	swinv	0x00ff0000
        3766e4:	00010003 	andeq	r0, r1, r3
        3766e8:	00550001 	subeqs	r0, r5, r1
        3766ec:	00040028 	andeq	r0, r4, r8, lsr #32
        3766f0:	00040005 	andeq	r0, r4, r5
        3766f4:	00510002 	subeqs	r0, r1, r2
        3766f8:	00030028 	andeq	r0, r3, r8, lsr #32
        3766fc:	00040005 	andeq	r0, r4, r5
        376700:	004d0003 	subeq	r0, sp, r3
        376704:	00030028 	andeq	r0, r3, r8, lsr #32
        376708:	00040005 	andeq	r0, r4, r5
        37670c:	004d0004 	subeq	r0, sp, r4
        376710:	00030028 	andeq	r0, r3, r8, lsr #32
        376714:	00040005 	andeq	r0, r4, r5
        376718:	00430005 	subeq	r0, r3, r5
        37671c:	ffff0028 	swinv	0x00ff0028
        376720:	00040005 	andeq	r0, r4, r5
        376724:	00430006 	subeq	r0, r3, r6
        376728:	ffff0028 	swinv	0x00ff0028
        37672c:	00040005 	andeq	r0, r4, r5
        376730:	00430007 	subeq	r0, r3, r7
        376734:	ffff0028 	swinv	0x00ff0028
        376738:	00040005 	andeq	r0, r4, r5
        37673c:	00550001 	subeqs	r0, r5, r1
        376740:	00030028 	andeq	r0, r3, r8, lsr #32
        376744:	00060000 	andeq	r0, r6, r0
        376748:	00520002 	subeqs	r0, r2, r2
        37674c:	00030028 	andeq	r0, r3, r8, lsr #32
        376750:	00060000 	andeq	r0, r6, r0
        376754:	00500003 	subeqs	r0, r0, r3
        376758:	00020028 	andeq	r0, r2, r8, lsr #32
        37675c:	00060000 	andeq	r0, r6, r0
        376760:	004f0004 	subeq	r0, pc, r4
        376764:	ffff0028 	swinv	0x00ff0028
        376768:	00060000 	andeq	r0, r6, r0
        37676c:	004c0005 	subeq	r0, ip, r5
        376770:	ffff0028 	swinv	0x00ff0028
        376774:	00060000 	andeq	r0, r6, r0
        376778:	004b0006 	subeq	r0, fp, r6
        37677c:	ffff0028 	swinv	0x00ff0028
        376780:	00060000 	andeq	r0, r6, r0
        376784:	00470007 	subeq	r0, r7, r7
        376788:	ffff0028 	swinv	0x00ff0028
        37678c:	00060000 	andeq	r0, r6, r0
        376790:	ffff0000 	swinv	0x00ff0000
    */
}

/**
 * Symbol: xrsToSkipInDidgits
 * Address: 00376810
 */
void globals::xrsToSkipInDidgits() {
    /*
        376810:	01020304 	tsteq	r2, r4, lsl #6
        376814:	05000000 	streq	r0, [r0]
    */
}

/**
 * Symbol: xrsToSkip
 * Address: 00376818
 */
void globals::xrsToSkip() {
    /*
        376818:	01020304 	tsteq	r2, r4, lsl #6
        37681c:	05343a3b 	ldreq	r3, [r4, -#2619]!
        376820:	32330000 	eorccs	r0, r3, #0	; 0x0
    */
}

/**
 * Symbol: xrsToSkipAsFirst
 * Address: 00376824
 */
void globals::xrsToSkipAsFirst() {
    /*
        376824:	06070809 	streq	r0, [r7], -r9, lsl #16
        376828:	0a0b0c0d 	beq	639864 <SYMundocumented+0x1848>
        37682c:	0e0f1011 	mcreq	0, 0, r1, cr15, cr1, {0}
        376830:	12202122 	eorne	r2, r0, #-2147483640	; 0x80000008
        376834:	2328292c 	teqcs	r8, #720896	; 0xb0000
        376838:	2d303100 	ldfcss	f3, [r0]
    */
}

/**
 * Symbol: xrPoint
 * Address: 003768cc
 */
void globals::xrPoint() {
    /*
        3768cc:	343b0000 	ldrcct	r0, [fp]
    */
}

/**
 * Symbol: xrGam
 * Address: 00376904
 */
void globals::xrGam() {
    /*
        376904:	2b000000 	blcs	37690c <szGam+0x4>
    */
}

/**
 * Symbol: xrPtLike
 * Address: 00376914
 */
void globals::xrPtLike() {
    /*
        376914:	343a3b00 	ldrcct	r3, [sl], -#2816
    */
}

/**
 * Symbol: xrDisablePtLike
 * Address: 00376918
 */
void globals::xrDisablePtLike() {
    /*
        376918:	36000000 	strcc	r0, [r0], -r0
    */
}

/**
 * Symbol: xrwd_src_ids
 * Address: 00376b40
 */
void globals::xrwd_src_ids() {
    /*
        376b40:	00000001 	andeq	r0, r0, r1
        376b44:	00000002 	andeq	r0, r0, r2
        376b48:	00000004 	andeq	r0, r0, r4
        376b4c:	00000008 	andeq	r0, r0, r8
        376b50:	00000030 	andeq	r0, r0, r0, lsr r0
    */
}

/**
 * Symbol: xrsToFind
 * Address: 00377154
 */
void globals::xrsToFind() {
    /*
        377154:	3a343b00 	bcc	1085d5c <ROM$$Size+0x966110>
    */
}

/**
 * Symbol: xr_type_merits
 * Address: 003772e0
 */
void globals::xr_type_merits() {
    /*
        3772e0:	00400040 	subeq	r0, r0, r0, asr #32
        3772e4:	00400040 	subeq	r0, r0, r0, asr #32
        3772e8:	00400040 	subeq	r0, r0, r0, asr #32
        3772ec:	00020002 	andeq	r0, r2, r2
        3772f0:	00020002 	andeq	r0, r2, r2
        3772f4:	00820002 	addeq	r0, r2, r2
        3772f8:	00020002 	andeq	r0, r2, r2
        3772fc:	00020002 	andeq	r0, r2, r2
        377300:	00820002 	addeq	r0, r2, r2
        377304:	00020001 	andeq	r0, r2, r1
        377308:	00010001 	andeq	r0, r1, r1
        37730c:	00010081 	andeq	r0, r1, r1, lsl #1
        377310:	00010001 	andeq	r0, r1, r1
        377314:	00010001 	andeq	r0, r1, r1
        377318:	00010081 	andeq	r0, r1, r1, lsl #1
        37731c:	00010001 	andeq	r0, r1, r1
        377320:	000a000a 	andeq	r0, sl, sl
        377324:	00060006 	andeq	r0, r6, r6
        377328:	00090009 	andeq	r0, r9, r9
        37732c:	00050005 	andeq	r0, r5, r5
        377330:	01020102 	tsteq	r2, r2, lsl #2
        377334:	01010101 	tsteq	r1, r1, lsl #2
        377338:	00140004 	andeqs	r0, r4, r4
        37733c:	00140018 	andeqs	r0, r4, r8, lsl r0
        377340:	00080018 	andeq	r0, r8, r8, lsl r0
        377344:	00000000 	andeq	r0, r0, r0
        377348:	00200000 	eoreq	r0, r0, r0
        37734c:	00200000 	eoreq	r0, r0, r0
        377350:	00000000 	andeq	r0, r0, r0
        377354:	00200020 	eoreq	r0, r0, r0, lsr #32
        377358:	00020000 	andeq	r0, r2, r0
        37735c:	00000000 	andeq	r0, r0, r0
    */
}

