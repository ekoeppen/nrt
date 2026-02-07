#include "include/TAsyncSerTool.h"

/**
 * Symbol: TAsyncSerTool::__ct(unsigned long)
 * Address: 0003913c
 */
TAsyncSerTool::TAsyncSerTool(unsigned long) {
    /*
         3913c:	e1a0c00d 	mov	ip, sp
         39140:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         39144:	e24cb004 	sub	fp, ip, #4	; 0x4
         39148:	e1b04000 	movs	r4, r0
         3914c:	e1a05001 	mov	r5, r1
         39150:	1a000003 	bne	39164 <TAsyncSerTool::__ct(unsigned long)+0x28>
         39154:	e3a00e4b 	mov	r0, #1200	; 0x4b0
         39158:	eb6e5576 	bl	1bce738 <$__nw(unsigned int)>
         3915c:	e1b04000 	movs	r4, r0
         39160:	0a00001a 	beq	391d0 <TAsyncSerTool::__ct(unsigned long)+0x94>
         39164:	e1a01005 	mov	r1, r5
         39168:	e1a00004 	mov	r0, r4
         3916c:	eb6744e3 	bl	1a0a500 <TSerTool::$__ct(unsigned long)>
         39170:	e2840fe1 	add	r0, r4, #900	; 0x384
         39174:	eb6f3cc0 	bl	1c0847c <TCircleBuf::$__ct(void)>
         39178:	e2840feb 	add	r0, r4, #940	; 0x3ac
         3917c:	eb6f3cbe 	bl	1c0847c <TCircleBuf::$__ct(void)>
         39180:	e2840ff5 	add	r0, r4, #980	; 0x3d4
         39184:	eb6e0b17 	bl	1bbbde8 <TCMOSerialBuffers::$__ct(void)>
         39188:	e2840ffd 	add	r0, r4, #1012	; 0x3f4
         3918c:	eb6e0f2b 	bl	1bbce40 <TCMOOutputFlowControlParms::$__ct(void)>
         39190:	e2840008 	add	r0, r4, #8	; 0x8
         39194:	e2800b01 	add	r0, r0, #1024	; 0x400
         39198:	eb6e0f27 	bl	1bbce3c <TCMOInputFlowControlParms::$__ct(void)>
         3919c:	e284001c 	add	r0, r4, #28	; 0x1c
         391a0:	e2800b01 	add	r0, r0, #1024	; 0x400
         391a4:	eb6e0b12 	bl	1bbbdf4 <TCMOSerialIOStats::$__ct(void)>
         391a8:	e284003c 	add	r0, r4, #60	; 0x3c
         391ac:	e2800b01 	add	r0, r0, #1024	; 0x400
         391b0:	eb6e0b03 	bl	1bbbdc4 <TCMOBreakFraming::$__ct(void)>
         391b4:	e2840058 	add	r0, r4, #88	; 0x58
         391b8:	e2800b01 	add	r0, r0, #1024	; 0x400
         391bc:	eb6e0f1a 	bl	1bbce2c <TCMOSerialEventEnables::$__ct(void)>
         391c0:	e2840e47 	add	r0, r4, #1136	; 0x470
         391c4:	eb6e0f16 	bl	1bbce24 <TCMOSerialMiscConfig::$__ct(void)>
         391c8:	e59f0008 	ldr	r0, [pc, #8]	; 391d8 <TAsyncSerTool::__ct(unsigned long)+0x9c>
         391cc:	e5840000 	str	r0, [r4]
         391d0:	e1a00004 	mov	r0, r4
         391d4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         391d8:	0001c8d4 	ldreqd	ip, [r1], -r4
    */
}

/**
 * Symbol: TAsyncSerTool::__dt(void)
 * Address: 000391dc
 */
TAsyncSerTool::~TAsyncSerTool(void) {
    /*
         391dc:	e1a0c00d 	mov	ip, sp
         391e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         391e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         391e8:	e1a04000 	mov	r4, r0
         391ec:	e1a05001 	mov	r5, r1
         391f0:	e59f0038 	ldr	r0, [pc, #38]	; 39230 <TAsyncSerTool::__dt(void)+0x54>
         391f4:	e5840000 	str	r0, [r4]
         391f8:	e2840feb 	add	r0, r4, #940	; 0x3ac
         391fc:	e3a01000 	mov	r1, #0	; 0x0
         39200:	eb6f409e 	bl	1c09480 <TCircleBuf::$__dt(void)>
         39204:	e2840fe1 	add	r0, r4, #900	; 0x384
         39208:	e3a01000 	mov	r1, #0	; 0x0
         3920c:	eb6f409b 	bl	1c09480 <TCircleBuf::$__dt(void)>
         39210:	e1a00004 	mov	r0, r4
         39214:	e3a01000 	mov	r1, #0	; 0x0
         39218:	eb6744c4 	bl	1a0a530 <TSerTool::$__dt(void)>
         3921c:	e3150001 	tst	r5, #1	; 0x1
         39220:	11a00004 	movne	r0, r4
         39224:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         39228:	1a6e512c 	bne	1bcd6e0 <$__dl(void *)>
         3922c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         39230:	0001c8d4 	ldreqd	ip, [r1], -r4
    */
}

/**
 * Symbol: TAsyncSerTool::DeallocateBuffers(void)
 * Address: 00039234
 */
TAsyncSerTool::DeallocateBuffers(void) {
    /*
         39234:	e1a0c00d 	mov	ip, sp
         39238:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3923c:	e24cb004 	sub	fp, ip, #4	; 0x4
         39240:	e1a04000 	mov	r4, r0
         39244:	e5d0028c 	ldrb	r0, [r0, #652]	; fField652
         39248:	e3a05000 	mov	r5, #0	; 0x0
         3924c:	e3300000 	teq	r0, #0	; 0x0
         39250:	0a000004 	beq	39268 <TAsyncSerTool::DeallocateBuffers(void)+0x34>
         39254:	e5c4528c 	strb	r5, [r4, #652]	; fField652
         39258:	e2840feb 	add	r0, r4, #940	; 0x3ac
         3925c:	eb6f343e 	bl	1c0635c <TCircleBuf::$Deallocate(void)>
         39260:	e2840fe1 	add	r0, r4, #900	; 0x384
         39264:	eb6f343c 	bl	1c0635c <TCircleBuf::$Deallocate(void)>
         39268:	e58453ec 	str	r5, [r4, #1004]	; fField1004
         3926c:	e58453f0 	str	r5, [r4, #1008]	; fField1008
         39270:	eb0d6646 	bl	392b90 <EnterFIQAtomic>
         39274:	e5940330 	ldr	r0, [r4, #816]	; fField816
         39278:	e594146c 	ldr	r1, [r4, #1132]	; fField1132
         3927c:	eb677e60 	bl	1a18c04 <TFIQTimer::$ReleaseFIQTimer(FIQTimer *)>
         39280:	e5a4546c 	str	r5, [r4, #1132]!	; fField1132
         39284:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         39288:	ea0d6648 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TAsyncSerTool::ResetStats(void)
 * Address: 0003928c
 */
TAsyncSerTool::ResetStats(void) {
    /*
         3928c:	e3a01000 	mov	r1, #0	; 0x0
         39290:	e5801428 	str	r1, [r0, #1064]	; fField1064
         39294:	e580142c 	str	r1, [r0, #1068]	; fField1068
         39298:	e5801430 	str	r1, [r0, #1072]	; fField1072
         3929c:	e5a01434 	str	r1, [r0, #1076]!	; fField1076
         392a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncSerTool::GetStats(TCMOSerialIOStats *)
 * Address: 000392a4
 */
TAsyncSerTool::GetStats(TCMOSerialIOStats *) {
    /*
         392a4:	e1a0c00d 	mov	ip, sp
         392a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         392ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         392b0:	e1a04000 	mov	r4, r0
         392b4:	e1a05001 	mov	r5, r1
         392b8:	eb676590 	bl	1a12900 <TAsyncSerTool::$GPiOn(void)>
         392bc:	e5c40438 	strb	r0, [r4, #1080]	; fField1080
         392c0:	e1a00004 	mov	r0, r4
         392c4:	eb6765a9 	bl	1a12970 <TAsyncSerTool::$HSKiOn(void)>
         392c8:	e5c40439 	strb	r0, [r4, #1081]	; fField1081
         392cc:	e284101c 	add	r1, r4, #28	; 0x1c
         392d0:	e2811b01 	add	r1, r1, #1024	; 0x400
         392d4:	e1a00005 	mov	r0, r5
         392d8:	eb6dfa3c 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         392dc:	e1a00004 	mov	r0, r4
         392e0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         392e4:	ea677e52 	b	1a18c34 <TAsyncSerTool::$ResetStats(void)>
    */
}

/**
 * Symbol: TAsyncSerTool::UpdateStats(unsigned long)
 * Address: 000392e8
 */
TAsyncSerTool::UpdateStats(unsigned long) {
    /*
         392e8:	e3110010 	tst	r1, #16	; 0x10
         392ec:	15902428 	ldrne	r2, [r0, #1064]	; fField1064
         392f0:	12822001 	addne	r2, r2, #1	; 0x1
         392f4:	15802428 	strne	r2, [r0, #1064]	; fField1064
         392f8:	e3110040 	tst	r1, #64	; 0x40
         392fc:	1590242c 	ldrne	r2, [r0, #1068]	; fField1068
         39300:	12822001 	addne	r2, r2, #1	; 0x1
         39304:	1580242c 	strne	r2, [r0, #1068]	; fField1068
         39308:	e3110020 	tst	r1, #32	; 0x20
         3930c:	15902434 	ldrne	r2, [r0, #1076]	; fField1076
         39310:	12822001 	addne	r2, r2, #1	; 0x1
         39314:	15802434 	strne	r2, [r0, #1076]	; fField1076
         39318:	e3110c01 	tst	r1, #256	; 0x100
         3931c:	15901430 	ldrne	r1, [r0, #1072]	; fField1072
         39320:	12811001 	addne	r1, r1, #1	; 0x1
         39324:	15a01430 	strne	r1, [r0, #1072]!	; fField1072
         39328:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncSerTool::DoOutput(void)
 * Address: 0003932c
 */
TAsyncSerTool::DoOutput(void) {
    /*
         3932c:	e1a0c00d 	mov	ip, sp
         39330:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         39334:	e24cb004 	sub	fp, ip, #4	; 0x4
         39338:	e1a04000 	mov	r4, r0
         3933c:	e5d00482 	ldrb	r0, [r0, #1154]	; fField1154
         39340:	e3a05000 	mov	r5, #0	; 0x0
         39344:	e3300000 	teq	r0, #0	; 0x0
         39348:	0a000003 	beq	3935c <TAsyncSerTool::DoOutput(void)+0x30>
         3934c:	e1a00004 	mov	r0, r4
         39350:	e3a01001 	mov	r1, #1	; 0x1
         39354:	eb67825f 	bl	1a19cd8 <TSerTool::$SetTxDTransceiverEnable(unsigned char)>
         39358:	e5c45482 	strb	r5, [r4, #1154]	; fField1154
         3935c:	e1a00004 	mov	r0, r4
         39360:	e5941000 	ldr	r1, [r4]
         39364:	e1a0e00f 	mov	lr, pc
         39368:	e281fe19 	add	pc, r1, #400	; 0x190
         3936c:	e3300005 	teq	r0, #5	; 0x5
         39370:	01a00004 	moveq	r0, r4
         39374:	03a01000 	moveq	r1, #0	; 0x0
         39378:	0a000003 	beq	3938c <TAsyncSerTool::DoOutput(void)+0x60>
         3937c:	e3300000 	teq	r0, #0	; 0x0
         39380:	0a000004 	beq	39398 <TAsyncSerTool::DoOutput(void)+0x6c>
         39384:	e1a01000 	mov	r1, r0
         39388:	e1a00004 	mov	r0, r4
         3938c:	e5942000 	ldr	r2, [r4]
         39390:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         39394:	e282ff63 	add	pc, r2, #396	; 0x18c
         39398:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
         3939c:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
         393a0:	e5840498 	str	r0, [r4, #1176]	; fField1176
         393a4:	e5d4027a 	ldrb	r0, [r4, #634]	; fField634
         393a8:	e3300000 	teq	r0, #0	; 0x0
         393ac:	01a00004 	moveq	r0, r4
         393b0:	03a01001 	moveq	r1, #1	; 0x1
         393b4:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         393b8:	0a6754e5 	beq	1a0e754 <TAsyncSerTool::$ContinueOutputST(unsigned char)>
         393bc:	e5c4527a 	strb	r5, [r4, #634]	; fField634
         393c0:	e5d40292 	ldrb	r0, [r4, #658]	; fField658
         393c4:	e3300000 	teq	r0, #0	; 0x0
         393c8:	13a01001 	movne	r1, #1	; 0x1
         393cc:	15940304 	ldrne	r0, [r4, #772]	; fField772
         393d0:	1b0d2e42 	blne	384ce0 <TSerialChip::ConfigureForOutput(unsigned char)>
         393d4:	e1a00004 	mov	r0, r4
         393d8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         393dc:	ea678652 	b	1a1ad2c <TAsyncSerTool::$StartOutputST(void)>
    */
}

/**
 * Symbol: TAsyncSerTool::FillOutputBuffer(void)
 * Address: 000393e0
 */
TAsyncSerTool::FillOutputBuffer(void) {
    /*
         393e0:	e1a0c00d 	mov	ip, sp
         393e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         393e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         393ec:	e1a04000 	mov	r4, r0
         393f0:	e5900274 	ldr	r0, [r0, #628]
         393f4:	e3300000 	teq	r0, #0	; 0x0
         393f8:	03a00005 	moveq	r0, #5	; 0x5
         393fc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         39400:	e5940454 	ldr	r0, [r4, #1108]	; fField1108
         39404:	e2845fe1 	add	r5, r4, #900	; 0x384
         39408:	e3300000 	teq	r0, #0	; 0x0
         3940c:	11a00005 	movne	r0, r5
         39410:	1b6f3c18 	blne	1c08478 <TCircleBuf::$Reset(void)>
         39414:	e2842f9d 	add	r2, r4, #628	; 0x274
         39418:	e1a00005 	mov	r0, r5
         3941c:	e5b41270 	ldr	r1, [r4, #624]!	; fField624
         39420:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         39424:	ea6f33c3 	b	1c06338 <TCircleBuf::$CopyIn(CBufferList *, unsigned long *)>
    */
}

/**
 * Symbol: TAsyncSerTool::DoPutComplete(long)
 * Address: 00039428
 */
TAsyncSerTool::DoPutComplete(long) {
    /*
         39428:	e1a0c00d 	mov	ip, sp
         3942c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         39430:	e24cb004 	sub	fp, ip, #4	; 0x4
         39434:	e1a04000 	mov	r4, r0
         39438:	e1a05001 	mov	r5, r1
         3943c:	e5900498 	ldr	r0, [r0, #1176]	; fField1176
         39440:	e3c00202 	bic	r0, r0, #536870912	; 0x20000000
         39444:	e5840498 	str	r0, [r4, #1176]	; fField1176
         39448:	e5d40292 	ldrb	r0, [r4, #658]	; fField658
         3944c:	e3300000 	teq	r0, #0	; 0x0
         39450:	13a01000 	movne	r1, #0	; 0x0
         39454:	15940304 	ldrne	r0, [r4, #772]	; fField772
         39458:	1b0d2e20 	blne	384ce0 <TSerialChip::ConfigureForOutput(unsigned char)>
         3945c:	e5940270 	ldr	r0, [r4, #624]	; fField624
         39460:	e5901000 	ldr	r1, [r0]
         39464:	e1a0e00f 	mov	lr, pc
         39468:	e281f03c 	add	pc, r1, #60	; 0x3c
         3946c:	e1a02000 	mov	r2, r0
         39470:	e1a01005 	mov	r1, r5
         39474:	e1a00004 	mov	r0, r4
         39478:	e5943000 	ldr	r3, [r4]
         3947c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         39480:	e283f0d4 	add	pc, r3, #212	; 0xd4
    */
}

/**
 * Symbol: TAsyncSerTool::KillPut(void)
 * Address: 00039484
 */
TAsyncSerTool::KillPut(void) {
    /*
         39484:	e1a0c00d 	mov	ip, sp
         39488:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3948c:	e24cb004 	sub	fp, ip, #4	; 0x4
         39490:	e1a04000 	mov	r4, r0
         39494:	eb675cea 	bl	1a10844 <TAsyncSerTool::$FlushOutputBytes(void)>
         39498:	e1a05000 	mov	r5, r0
         3949c:	e5940270 	ldr	r0, [r4, #624]	; fField624
         394a0:	e3300000 	teq	r0, #0	; 0x0
         394a4:	0a000013 	beq	394f8 <TAsyncSerTool::KillPut(void)+0x74>
         394a8:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
         394ac:	e3c00202 	bic	r0, r0, #536870912	; 0x20000000
         394b0:	e5840498 	str	r0, [r4, #1176]	; fField1176
         394b4:	e5d40292 	ldrb	r0, [r4, #658]	; fField658
         394b8:	e3300000 	teq	r0, #0	; 0x0
         394bc:	13a01000 	movne	r1, #0	; 0x0
         394c0:	15940304 	ldrne	r0, [r4, #772]	; fField772
         394c4:	1b0d2e05 	blne	384ce0 <TSerialChip::ConfigureForOutput(unsigned char)>
         394c8:	e5940270 	ldr	r0, [r4, #624]	; fField624
         394cc:	e5901000 	ldr	r1, [r0]
         394d0:	e1a0e00f 	mov	lr, pc
         394d4:	e281f03c 	add	pc, r1, #60	; 0x3c
         394d8:	e1500005 	cmp	r0, r5
         394dc:	93a02000 	movls	r2, #0	; 0x0
         394e0:	80402005 	subhi	r2, r0, r5
         394e4:	e1a00004 	mov	r0, r4
         394e8:	e59f101c 	ldr	r1, [pc, #1c]	; 3950c <TAsyncSerTool::KillPut(void)+0x88>
         394ec:	e5943000 	ldr	r3, [r4]
         394f0:	e1a0e00f 	mov	lr, pc
         394f4:	e283f0d4 	add	pc, r3, #212	; 0xd4
         394f8:	e1a00004 	mov	r0, r4
         394fc:	e3a01000 	mov	r1, #0	; 0x0
         39500:	e5942000 	ldr	r2, [r4]
         39504:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         39508:	e282f0dc 	add	pc, r2, #220	; 0xdc
         3950c:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TAsyncSerTool::DoInput(void)
 * Address: 00039510
 */
TAsyncSerTool::DoInput(void) {
    /*
         39510:	e1a0c00d 	mov	ip, sp
         39514:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         39518:	e24cb004 	sub	fp, ip, #4	; 0x4
         3951c:	e1a04000 	mov	r4, r0
         39520:	e5d00380 	ldrb	r0, [r0, #896]	; fField896
         39524:	e3300000 	teq	r0, #0	; 0x0
         39528:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         3952c:	e3a00001 	mov	r0, #1	; 0x1
         39530:	e5c40380 	strb	r0, [r4, #896]	; fField896
         39534:	e5d40289 	ldrb	r0, [r4, #649]	; fField649
         39538:	e2846feb 	add	r6, r4, #940	; 0x3ac
         3953c:	e3a05000 	mov	r5, #0	; 0x0
         39540:	e3300000 	teq	r0, #0	; 0x0
         39544:	0a000011 	beq	39590 <TAsyncSerTool::DoInput(void)+0x80>
         39548:	e5940284 	ldr	r0, [r4, #644]	; fField644
         3954c:	e3300000 	teq	r0, #0	; 0x0
         39550:	1a00000e 	bne	39590 <TAsyncSerTool::DoInput(void)+0x80>
         39554:	e1a00004 	mov	r0, r4
         39558:	eb67a2eb 	bl	1a2210c <TAsyncSerTool::$SyncInputBuffer(void)>
         3955c:	e1a00006 	mov	r0, r6
         39560:	eb6f3371 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
         39564:	e3300000 	teq	r0, #0	; 0x0
         39568:	1a000008 	bne	39590 <TAsyncSerTool::DoInput(void)+0x80>
         3956c:	e3a01f5d 	mov	r1, #372	; 0x174
         39570:	e2411901 	sub	r1, r1, #16384	; 0x4000
         39574:	e1a00004 	mov	r0, r4
         39578:	e3a03000 	mov	r3, #0	; 0x0
         3957c:	e3a02000 	mov	r2, #0	; 0x0
         39580:	e594c000 	ldr	ip, [r4]
         39584:	e1a0e00f 	mov	lr, pc
         39588:	e28cf0ec 	add	pc, ip, #236	; 0xec
         3958c:	ea00003f 	b	39690 <TAsyncSerTool::DoInput(void)+0x180>
         39590:	e3a07000 	mov	r7, #0	; 0x0
         39594:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
         39598:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
         3959c:	e5840498 	str	r0, [r4, #1176]	; fField1176
         395a0:	e1a00004 	mov	r0, r4
         395a4:	eb67a2d8 	bl	1a2210c <TAsyncSerTool::$SyncInputBuffer(void)>
         395a8:	e3a00000 	mov	r0, #0	; 0x0
         395ac:	e52d0004 	str	r0, [sp, -#4]!
         395b0:	e1a0100d 	mov	r1, sp
         395b4:	e1a00004 	mov	r0, r4
         395b8:	e5942000 	ldr	r2, [r4]
         395bc:	e1a0e00f 	mov	lr, pc
         395c0:	e282ff66 	add	pc, r2, #408	; 0x198
         395c4:	e1b01000 	movs	r1, r0
         395c8:	e3a02000 	mov	r2, #0	; 0x0
         395cc:	0a00000c 	beq	39604 <TAsyncSerTool::DoInput(void)+0xf4>
         395d0:	e3310006 	teq	r1, #6	; 0x6
         395d4:	03a01000 	moveq	r1, #0	; 0x0
         395d8:	0a000002 	beq	395e8 <TAsyncSerTool::DoInput(void)+0xd8>
         395dc:	e3310ffa 	teq	r1, #1000	; 0x3e8
         395e0:	03a01000 	moveq	r1, #0	; 0x0
         395e4:	03a02001 	moveq	r2, #1	; 0x1
         395e8:	e1a00004 	mov	r0, r4
         395ec:	e5943000 	ldr	r3, [r4]
         395f0:	e1a0e00f 	mov	lr, pc
         395f4:	e283ff65 	add	pc, r3, #404	; 0x194
         395f8:	e594027c 	ldr	r0, [r4, #636]	; fField636
         395fc:	e3300000 	teq	r0, #0	; 0x0
         39600:	13a07001 	movne	r7, #1	; 0x1
         39604:	e28dd004 	add	sp, sp, #4	; 0x4
         39608:	e3370000 	teq	r7, #0	; 0x0
         3960c:	1affffdf 	bne	39590 <TAsyncSerTool::DoInput(void)+0x80>
         39610:	e5d40416 	ldrb	r0, [r4, #1046]	; fField1046
         39614:	e3300000 	teq	r0, #0	; 0x0
         39618:	05d40417 	ldreqb	r0, [r4, #1047]	; fField1047
         3961c:	03300000 	teqeq	r0, #0	; 0x0
         39620:	0a00001a 	beq	39690 <TAsyncSerTool::DoInput(void)+0x180>
         39624:	e1a00006 	mov	r0, r6
         39628:	eb6f333f 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
         3962c:	e5941490 	ldr	r1, [r4, #1168]	; fField1168
         39630:	e1510000 	cmp	r1, r0
         39634:	9a000015 	bls	39690 <TAsyncSerTool::DoInput(void)+0x180>
         39638:	e5d40417 	ldrb	r0, [r4, #1047]	; fField1047
         3963c:	e3300000 	teq	r0, #0	; 0x0
         39640:	15d40418 	ldrneb	r0, [r4, #1048]	; fField1048
         39644:	13300000 	teqne	r0, #0	; 0x0
         39648:	0a000003 	beq	3965c <TAsyncSerTool::DoInput(void)+0x14c>
         3964c:	e1a00004 	mov	r0, r4
         39650:	e3a01001 	mov	r1, #1	; 0x1
         39654:	eb678193 	bl	1a19ca8 <TSerTool::$SetHSKo(unsigned char)>
         39658:	e5c45418 	strb	r5, [r4, #1048]	; fField1048
         3965c:	e5d40416 	ldrb	r0, [r4, #1046]	; fField1046
         39660:	e3300000 	teq	r0, #0	; 0x0
         39664:	15d40419 	ldrneb	r0, [r4, #1049]	; fField1049
         39668:	13300000 	teqne	r0, #0	; 0x0
         3966c:	15c45419 	strneb	r5, [r4, #1049]	; fField1049
         39670:	15d41381 	ldrneb	r1, [r4, #897]	; fField897
         39674:	15d40414 	ldrneb	r0, [r4, #1044]	; fField1044
         39678:	11310000 	teqne	r1, r0
         3967c:	0a000003 	beq	39690 <TAsyncSerTool::DoInput(void)+0x180>
         39680:	e5c40381 	strb	r0, [r4, #897]	; fField897
         39684:	e1a00004 	mov	r0, r4
         39688:	e3a01000 	mov	r1, #0	; 0x0
         3968c:	eb675430 	bl	1a0e754 <TAsyncSerTool::$ContinueOutputST(unsigned char)>
         39690:	e5c45380 	strb	r5, [r4, #896]	; fField896
         39694:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::SyncInputBuffer(void)
 * Address: 00039698
 */
TAsyncSerTool::SyncInputBuffer(void) {
    /*
         39698:	e59013ec 	ldr	r1, [r0, #1004]	; fField1004
         3969c:	e3310002 	teq	r1, #2	; 0x2
         396a0:	05900304 	ldreq	r0, [r0, #772]	; fField772
         396a4:	03a01014 	moveq	r1, #20	; 0x14
         396a8:	0a0d2d98 	beq	384d10 <TSerialChip::RxDMAControl(unsigned char)>
         396ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncSerTool::TaskConstructor(void)
 * Address: 000396b0
 */
TAsyncSerTool::TaskConstructor(void) {
    /*
         396b0:	e1a0c00d 	mov	ip, sp
         396b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         396b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         396bc:	e1a04000 	mov	r4, r0
         396c0:	eb6789af 	bl	1a1bd84 <TSerTool::$TaskConstructor(void)>
         396c4:	e1b05000 	movs	r5, r0
         396c8:	1a000014 	bne	39720 <TAsyncSerTool::TaskConstructor(void)+0x70>
         396cc:	e3a00000 	mov	r0, #0	; 0x0
         396d0:	e5840498 	str	r0, [r4, #1176]	; fField1176
         396d4:	e5840494 	str	r0, [r4, #1172]	; fField1172
         396d8:	e584046c 	str	r0, [r4, #1132]	; fField1132
         396dc:	e58403ec 	str	r0, [r4, #1004]	; fField1004
         396e0:	e58403f0 	str	r0, [r4, #1008]	; fField1008
         396e4:	e5c40381 	strb	r0, [r4, #897]	; fField897
         396e8:	e5c40380 	strb	r0, [r4, #896]	; fField896
         396ec:	e584049c 	str	r0, [r4, #1180]	; fField1180
         396f0:	e3a00064 	mov	r0, #100	; 0x64
         396f4:	e58404a0 	str	r0, [r4, #1184]	; fField1184
         396f8:	e59f1028 	ldr	r1, [pc, #28]	; 39728 <TAsyncSerTool::TaskConstructor(void)+0x78>
         396fc:	e58414a4 	str	r1, [r4, #1188]	; fField1188
         39700:	e28400a8 	add	r0, r4, #168	; 0xa8
         39704:	e2800b01 	add	r0, r0, #1024	; 0x400
         39708:	eb6e91e0 	bl	1bdde90 <$TimeFromNow>
         3970c:	e594147c 	ldr	r1, [r4, #1148]	; fField1148
         39710:	e1a00004 	mov	r0, r4
         39714:	e5942000 	ldr	r2, [r4]
         39718:	e1a0e00f 	mov	lr, pc
         3971c:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         39720:	e1a00005 	mov	r0, r5
         39724:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         39728:	00383e70 	eoreqs	r3, r8, r0, ror lr
    */
}

/**
 * Symbol: TAsyncSerTool::EmptyInputBuffer(unsigned long *)
 * Address: 0003972c
 */
TAsyncSerTool::EmptyInputBuffer(unsigned long *) {
    /*
         3972c:	e1a0c00d 	mov	ip, sp
         39730:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         39734:	e24cb004 	sub	fp, ip, #4	; 0x4
         39738:	e1a04000 	mov	r4, r0
         3973c:	e1a05001 	mov	r5, r1
         39740:	e5d01289 	ldrb	r1, [r0, #649]	; fField649
         39744:	e2800feb 	add	r0, r0, #940	; 0x3ac
         39748:	e3310000 	teq	r1, #0	; 0x0
         3974c:	0a000015 	beq	397a8 <TAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x7c>
         39750:	e24dd004 	sub	sp, sp, #4	; 0x4
         39754:	e5941280 	ldr	r1, [r4, #640]	; fField640
         39758:	e58d1000 	str	r1, [sp]
         3975c:	e1a03005 	mov	r3, r5
         39760:	e1a0200d 	mov	r2, sp
         39764:	e594127c 	ldr	r1, [r4, #636]	; fField636
         39768:	eb6f32f4 	bl	1c06340 <TCircleBuf::$CopyOut(CBufferList *, unsigned long *, unsigned long *)>
         3976c:	e5942280 	ldr	r2, [r4, #640]	; fField640
         39770:	e59d1000 	ldr	r1, [sp]
         39774:	e0421001 	sub	r1, r2, r1
         39778:	e3300000 	teq	r0, #0	; 0x0
         3977c:	1a000002 	bne	3978c <TAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x60>
         39780:	e5943284 	ldr	r3, [r4, #644]	; fField644
         39784:	e1530001 	cmp	r3, r1
         39788:	93a00006 	movls	r0, #6	; 0x6
         3978c:	e0422001 	sub	r2, r2, r1
         39790:	e5842280 	str	r2, [r4, #640]	; fField640
         39794:	e5942284 	ldr	r2, [r4, #644]	; fField644
         39798:	e0421001 	sub	r1, r2, r1
         3979c:	e5a41284 	str	r1, [r4, #644]!	; fField644
         397a0:	e28dd004 	add	sp, sp, #4	; 0x4
         397a4:	ea000003 	b	397b8 <TAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x8c>
         397a8:	e2842d0a 	add	r2, r4, #640	; 0x280
         397ac:	e1a03005 	mov	r3, r5
         397b0:	e5b4127c 	ldr	r1, [r4, #636]!	; fField636
         397b4:	eb6f32e1 	bl	1c06340 <TCircleBuf::$CopyOut(CBufferList *, unsigned long *, unsigned long *)>
         397b8:	e3300001 	teq	r0, #1	; 0x1
         397bc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         397c0:	e5950000 	ldr	r0, [r5]
         397c4:	e3300ffa 	teq	r0, #1000	; 0x3e8
         397c8:	13e00052 	mvnne	r0, #82	; 0x52
         397cc:	12400c46 	subne	r0, r0, #17920	; 0x4600
         397d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::KillGet(void)
 * Address: 000397d4
 */
TAsyncSerTool::KillGet(void) {
    /*
         397d4:	e1a0c00d 	mov	ip, sp
         397d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         397dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         397e0:	e1a04000 	mov	r4, r0
         397e4:	e590027c 	ldr	r0, [r0, #636]	; fField636
         397e8:	e3300000 	teq	r0, #0	; 0x0
         397ec:	0a000005 	beq	39808 <TAsyncSerTool::KillGet(void)+0x34>
         397f0:	e1a00004 	mov	r0, r4
         397f4:	e3a02000 	mov	r2, #0	; 0x0
         397f8:	e59f1024 	ldr	r1, [pc, #24]	; 39824 <TAsyncSerTool::KillGet(void)+0x50>
         397fc:	e5943000 	ldr	r3, [r4]
         39800:	e1a0e00f 	mov	lr, pc
         39804:	e283ff65 	add	pc, r3, #404	; 0x194
         39808:	e1a00004 	mov	r0, r4
         3980c:	eb675c0b 	bl	1a10840 <TAsyncSerTool::$FlushInputBytes(void)>
         39810:	e1a00004 	mov	r0, r4
         39814:	e3a01000 	mov	r1, #0	; 0x0
         39818:	e5942000 	ldr	r2, [r4]
         3981c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         39820:	e282f0f4 	add	pc, r2, #244	; 0xf4
         39824:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TAsyncSerTool::DoGetComplete(long, unsigned char)
 * Address: 00039828
 */
TAsyncSerTool::DoGetComplete(long, unsigned char) {
    /*
         39828:	e1a0c00d 	mov	ip, sp
         3982c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         39830:	e24cb004 	sub	fp, ip, #4	; 0x4
         39834:	e1a04000 	mov	r4, r0
         39838:	e1a05001 	mov	r5, r1
         3983c:	e20260ff 	and	r6, r2, #255	; 0xff
         39840:	e5900498 	ldr	r0, [r0, #1176]	; fField1176
         39844:	e3c00101 	bic	r0, r0, #1073741824	; 0x40000000
         39848:	e5840498 	str	r0, [r4, #1176]	; fField1176
         3984c:	e594027c 	ldr	r0, [r4, #636]	; fField636
         39850:	e5901000 	ldr	r1, [r0]
         39854:	e1a0e00f 	mov	lr, pc
         39858:	e281f03c 	add	pc, r1, #60	; 0x3c
         3985c:	e1a03000 	mov	r3, r0
         39860:	e1a02006 	mov	r2, r6
         39864:	e1a01005 	mov	r1, r5
         39868:	e1a00004 	mov	r0, r4
         3986c:	e594c000 	ldr	ip, [r4]
         39870:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         39874:	e28cf0ec 	add	pc, ip, #236	; 0xec
    */
}

/**
 * Symbol: TAsyncSerTool::BytesAvailable(unsigned long &)
 * Address: 00039878
 */
TAsyncSerTool::BytesAvailable(unsigned long &) {
    /*
         39878:	e1a0c00d 	mov	ip, sp
         3987c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         39880:	e24cb004 	sub	fp, ip, #4	; 0x4
         39884:	e1a04001 	mov	r4, r1
         39888:	e2800feb 	add	r0, r0, #940	; 0x3ac
         3988c:	eb6f32a6 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
         39890:	e5840000 	str	r0, [r4]
         39894:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::FlushInputBytes(void)
 * Address: 00039898
 */
TAsyncSerTool::FlushInputBytes(void) {
    /*
         39898:	e1a0c00d 	mov	ip, sp
         3989c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         398a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         398a4:	e1a04000 	mov	r4, r0
         398a8:	e59003ec 	ldr	r0, [r0, #1004]	; fField1004
         398ac:	e3300002 	teq	r0, #2	; 0x2
         398b0:	03a01014 	moveq	r1, #20	; 0x14
         398b4:	05940304 	ldreq	r0, [r4, #772]	; fField772
         398b8:	0b0d2d14 	bleq	384d10 <TSerialChip::RxDMAControl(unsigned char)>
         398bc:	e2840feb 	add	r0, r4, #940	; 0x3ac
         398c0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         398c4:	ea6f3ae6 	b	1c08464 <TCircleBuf::$FlushBytes(void)>
    */
}

/**
 * Symbol: TAsyncSerTool::FlushOutputBytes(void)
 * Address: 000398c8
 */
TAsyncSerTool::FlushOutputBytes(void) {
    /*
         398c8:	e1a0c00d 	mov	ip, sp
         398cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         398d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         398d4:	e1a04000 	mov	r4, r0
         398d8:	eb0d64ac 	bl	392b90 <EnterFIQAtomic>
         398dc:	e2840fe1 	add	r0, r4, #900	; 0x384
         398e0:	e1a05000 	mov	r5, r0
         398e4:	eb6f3290 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
         398e8:	e1a06000 	mov	r6, r0
         398ec:	e59403f0 	ldr	r0, [r4, #1008]	; fField1008
         398f0:	e3300002 	teq	r0, #2	; 0x2
         398f4:	13300003 	teqne	r0, #3	; 0x3
         398f8:	1a000005 	bne	39914 <TAsyncSerTool::FlushOutputBytes(void)+0x4c>
         398fc:	e5940304 	ldr	r0, [r4, #772]	; fField772
         39900:	e3300000 	teq	r0, #0	; 0x0
         39904:	13a01002 	movne	r1, #2	; 0x2
         39908:	1b0d2cfd 	blne	384d04 <TSerialChip::TxDMAControl(unsigned char)>
         3990c:	e3a00001 	mov	r0, #1	; 0x1
         39910:	e5a403f0 	str	r0, [r4, #1008]!	; fField1008
         39914:	e1a00005 	mov	r0, r5
         39918:	eb6f3ad1 	bl	1c08464 <TCircleBuf::$FlushBytes(void)>
         3991c:	eb0d64a3 	bl	392bb0 <ExitFIQAtomic>
         39920:	e1a00006 	mov	r0, r6
         39924:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::GPiOn(void)
 * Address: 00039928
 */
TAsyncSerTool::GPiOn(void) {
    /*
         39928:	e5d0037c 	ldrb	r0, [r0, #892]	; fField892
         3992c:	e2100008 	ands	r0, r0, #8	; 0x8
         39930:	13a00001 	movne	r0, #1	; 0x1
         39934:	e20000ff 	and	r0, r0, #255	; 0xff
         39938:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncSerTool::HSKiOn(void)
 * Address: 0003993c
 */
TAsyncSerTool::HSKiOn(void) {
    /*
         3993c:	e5d0037c 	ldrb	r0, [r0, #892]	; fField892
         39940:	e2100020 	ands	r0, r0, #32	; 0x20
         39944:	13a00001 	movne	r0, #1	; 0x1
         39948:	e20000ff 	and	r0, r0, #255	; 0xff
         3994c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncSerTool::AddDefaultOptions(TOptionArray *)
 * Address: 00039950
 */
TAsyncSerTool::AddDefaultOptions(TOptionArray *) {
    /*
         39950:	e1a0c00d 	mov	ip, sp
         39954:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         39958:	e24cb004 	sub	fp, ip, #4	; 0x4
         3995c:	e1a05000 	mov	r5, r0
         39960:	e1a04001 	mov	r4, r1
         39964:	e24dd028 	sub	sp, sp, #40	; 0x28
         39968:	e28d0014 	add	r0, sp, #20	; 0x14
         3996c:	eb6e0d33 	bl	1bbce40 <TCMOOutputFlowControlParms::$__ct(void)>
         39970:	e1a0000d 	mov	r0, sp
         39974:	eb6e0d30 	bl	1bbce3c <TCMOInputFlowControlParms::$__ct(void)>
         39978:	e1a0200d 	mov	r2, sp
         3997c:	e5941000 	ldr	r1, [r4]
         39980:	e1a00004 	mov	r0, r4
         39984:	eb6e00c6 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         39988:	e3300000 	teq	r0, #0	; 0x0
         3998c:	1a000003 	bne	399a0 <TAsyncSerTool::AddDefaultOptions(TOptionArray *)+0x50>
         39990:	e28d2014 	add	r2, sp, #20	; 0x14
         39994:	e5941000 	ldr	r1, [r4]
         39998:	e1a00004 	mov	r0, r4
         3999c:	eb6e00c0 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         399a0:	e3300000 	teq	r0, #0	; 0x0
         399a4:	01a01004 	moveq	r1, r4
         399a8:	01a00005 	moveq	r0, r5
         399ac:	0b6746fa 	bleq	1a0b59c <TSerTool::$AddDefaultOptions(TOptionArray *)>
         399b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::AddCurrentOptions(TOptionArray *)
 * Address: 000399b4
 */
TAsyncSerTool::AddCurrentOptions(TOptionArray *) {
    /*
         399b4:	e1a0c00d 	mov	ip, sp
         399b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         399bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         399c0:	e1a05000 	mov	r5, r0
         399c4:	e1a04001 	mov	r4, r1
         399c8:	e2802008 	add	r2, r0, #8	; 0x8
         399cc:	e2822b01 	add	r2, r2, #1024	; 0x400
         399d0:	e5911000 	ldr	r1, [r1]
         399d4:	e1a00004 	mov	r0, r4
         399d8:	eb6e00b1 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         399dc:	e3300000 	teq	r0, #0	; 0x0
         399e0:	1a000003 	bne	399f4 <TAsyncSerTool::AddCurrentOptions(TOptionArray *)+0x40>
         399e4:	e2852ffd 	add	r2, r5, #1012	; 0x3f4
         399e8:	e5941000 	ldr	r1, [r4]
         399ec:	e1a00004 	mov	r0, r4
         399f0:	eb6e00ab 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         399f4:	e3300000 	teq	r0, #0	; 0x0
         399f8:	1a000004 	bne	39a10 <TAsyncSerTool::AddCurrentOptions(TOptionArray *)+0x5c>
         399fc:	e285203c 	add	r2, r5, #60	; 0x3c
         39a00:	e2822b01 	add	r2, r2, #1024	; 0x400
         39a04:	e5941000 	ldr	r1, [r4]
         39a08:	e1a00004 	mov	r0, r4
         39a0c:	eb6e00a4 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         39a10:	e3300000 	teq	r0, #0	; 0x0
         39a14:	01a01004 	moveq	r1, r4
         39a18:	01a00005 	moveq	r0, r5
         39a1c:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         39a20:	0a6746d9 	beq	1a0b58c <TSerTool::$AddCurrentOptions(TOptionArray *)>
         39a24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::TaskDestructor(void)
 * Address: 00039a28
 */
TAsyncSerTool::TaskDestructor(void) {
    /*
         39a28:	ea6788dd 	b	1a1bda4 <TSerTool::$TaskDestructor(void)>
    */
}

/**
 * Symbol: TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 00039a2c
 */
TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         39a2c:	e1a0c00d 	mov	ip, sp
         39a30:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         39a34:	e24cb004 	sub	fp, ip, #4	; 0x4
         39a38:	e1a06000 	mov	r6, r0
         39a3c:	e1a05001 	mov	r5, r1
         39a40:	e1a04003 	mov	r4, r3
         39a44:	e3a07000 	mov	r7, #0	; 0x0
         39a48:	e59fc058 	ldr	ip, [pc, #58]	; 39aa8 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x7c>
         39a4c:	e152000c 	cmp	r2, ip
         39a50:	0a0000b6 	beq	39d30 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x304>
         39a54:	ca000018 	bgt	39abc <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x90>
         39a58:	e59fc04c 	ldr	ip, [pc, #4c]	; 39aac <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x80>
         39a5c:	e132000c 	teq	r2, ip
         39a60:	0a000040 	beq	39b68 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x13c>
         39a64:	e59fc044 	ldr	ip, [pc, #44]	; 39ab0 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x84>
         39a68:	e132000c 	teq	r2, ip
         39a6c:	0a00002e 	beq	39b2c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x100>
         39a70:	e59fc03c 	ldr	ip, [pc, #3c]	; 39ab4 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x88>
         39a74:	e132000c 	teq	r2, ip
         39a78:	0a00005d 	beq	39bf4 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1c8>
         39a7c:	e59fc034 	ldr	ip, [pc, #34]	; 39ab8 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x8c>
         39a80:	e132000c 	teq	r2, ip
         39a84:	1a0000ba 	bne	39d74 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x348>
         39a88:	e2860ff5 	add	r0, r6, #980	; 0x3d4
         39a8c:	e3340c01 	teq	r4, #256	; 0x100
         39a90:	13340c02 	teqne	r4, #512	; 0x200
         39a94:	1a000045 	bne	39bb0 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x184>
         39a98:	e5d6128c 	ldrb	r1, [r6, #652]	; fField652
         39a9c:	e3310000 	teq	r1, #0	; 0x0
         39aa0:	1a0000b0 	bne	39d68 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x33c>
         39aa4:	ea00003f 	b	39ba8 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x17c>
         39aa8:	73647363 	cmnvc	r4, #-1946157055	; 0x8c000001
         39aac:	69666c63 	stmvsdb	r6!, {r0, r1, r5, r6, sl, fp, sp, lr}^
         39ab0:	6f666c63 	swivs	0x00666c63
         39ab4:	73626b66 	cmnvc	r2, #104448	; 0x19800
         39ab8:	73627566 	cmnvc	r2, #427819008	; 0x19800000
         39abc:	e59fc058 	ldr	ip, [pc, #58]	; 39b1c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xf0>
         39ac0:	e132000c 	teq	r2, ip
         39ac4:	0a00007b 	beq	39cb8 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x28c>
         39ac8:	e59fc050 	ldr	ip, [pc, #50]	; 39b20 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xf4>
         39acc:	e132000c 	teq	r2, ip
         39ad0:	0a000058 	beq	39c38 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x20c>
         39ad4:	e59fc048 	ldr	ip, [pc, #48]	; 39b24 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xf8>
         39ad8:	e132000c 	teq	r2, ip
         39adc:	0a00003a 	beq	39bcc <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1a0>
         39ae0:	e59fc040 	ldr	ip, [pc, #40]	; 39b28 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xfc>
         39ae4:	e132000c 	teq	r2, ip
         39ae8:	1a0000a1 	bne	39d74 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x348>
         39aec:	e2860e47 	add	r0, r6, #1136	; 0x470
         39af0:	e3340c01 	teq	r4, #256	; 0x100
         39af4:	13340c02 	teqne	r4, #512	; 0x200
         39af8:	1a000064 	bne	39c90 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x264>
         39afc:	e1a01005 	mov	r1, r5
         39b00:	eb6df832 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         39b04:	e596147c 	ldr	r1, [r6, #1148]	; fField1148
         39b08:	e1a00006 	mov	r0, r6
         39b0c:	e5962000 	ldr	r2, [r6]
         39b10:	e1a0e00f 	mov	lr, pc
         39b14:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         39b18:	ea000093 	b	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39b1c:	73647472 	cmnvc	r4, #1912602624	; 0x72000000
         39b20:	73657674 	cmnvc	r5, #121634816	; 0x7400000
         39b24:	73696f73 	cmnvc	r9, #460	; 0x1cc
         39b28:	736d7363 	cmnvc	sp, #-1946157055	; 0x8c000001
         39b2c:	e3340c01 	teq	r4, #256	; 0x100
         39b30:	13340c02 	teqne	r4, #512	; 0x200
         39b34:	1a000003 	bne	39b48 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x11c>
         39b38:	e1a01005 	mov	r1, r5
         39b3c:	e1a00006 	mov	r0, r6
         39b40:	eb67805f 	bl	1a19cc4 <TAsyncSerTool::$SetOutputFlowControl(TCMOOutputFlowControlParms *)>
         39b44:	ea000088 	b	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39b48:	e3340c03 	teq	r4, #768	; 0x300
         39b4c:	12861ffd 	addne	r1, r6, #1012	; 0x3f4
         39b50:	1a00004b 	bne	39c84 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x258>
         39b54:	e24dd014 	sub	sp, sp, #20	; 0x14
         39b58:	e1a0000d 	mov	r0, sp
         39b5c:	eb6e0cb7 	bl	1bbce40 <TCMOOutputFlowControlParms::$__ct(void)>
         39b60:	e1a0100d 	mov	r1, sp
         39b64:	ea000040 	b	39c6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x240>
         39b68:	e3340c01 	teq	r4, #256	; 0x100
         39b6c:	13340c02 	teqne	r4, #512	; 0x200
         39b70:	1a000003 	bne	39b84 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x158>
         39b74:	e1a01005 	mov	r1, r5
         39b78:	e1a00006 	mov	r0, r6
         39b7c:	eb67804b 	bl	1a19cb0 <TAsyncSerTool::$SetInputFlowControl(TCMOInputFlowControlParms *)>
         39b80:	ea000079 	b	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39b84:	e3340c03 	teq	r4, #768	; 0x300
         39b88:	12861008 	addne	r1, r6, #8	; 0x8
         39b8c:	12811b01 	addne	r1, r1, #1024	; 0x400
         39b90:	1a00003b 	bne	39c84 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x258>
         39b94:	e24dd014 	sub	sp, sp, #20	; 0x14
         39b98:	e1a0000d 	mov	r0, sp
         39b9c:	eb6e0ca6 	bl	1bbce3c <TCMOInputFlowControlParms::$__ct(void)>
         39ba0:	e1a0100d 	mov	r1, sp
         39ba4:	ea000030 	b	39c6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x240>
         39ba8:	e1a01005 	mov	r1, r5
         39bac:	ea000035 	b	39c88 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x25c>
         39bb0:	e3340c03 	teq	r4, #768	; 0x300
         39bb4:	1a00001d 	bne	39c30 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x204>
         39bb8:	e24dd018 	sub	sp, sp, #24	; 0x18
         39bbc:	e1a0000d 	mov	r0, sp
         39bc0:	eb6e0888 	bl	1bbbde8 <TCMOSerialBuffers::$__ct(void)>
         39bc4:	e1a0100d 	mov	r1, sp
         39bc8:	ea000036 	b	39ca8 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x27c>
         39bcc:	e3340c01 	teq	r4, #256	; 0x100
         39bd0:	13340c02 	teqne	r4, #512	; 0x200
         39bd4:	03e07002 	mvneq	r7, #2	; 0x2
         39bd8:	0a000063 	beq	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39bdc:	e3340b01 	teq	r4, #1024	; 0x400
         39be0:	1a000060 	bne	39d68 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x33c>
         39be4:	e1a01005 	mov	r1, r5
         39be8:	e1a00006 	mov	r0, r6
         39bec:	eb675f3e 	bl	1a118ec <TAsyncSerTool::$GetStats(TCMOSerialIOStats *)>
         39bf0:	ea00005d 	b	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39bf4:	e286003c 	add	r0, r6, #60	; 0x3c
         39bf8:	e2800b01 	add	r0, r0, #1024	; 0x400
         39bfc:	e3340c01 	teq	r4, #256	; 0x100
         39c00:	13340c02 	teqne	r4, #512	; 0x200
         39c04:	0affffe7 	beq	39ba8 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x17c>
         39c08:	e3340c03 	teq	r4, #768	; 0x300
         39c0c:	1a000007 	bne	39c30 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x204>
         39c10:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         39c14:	e1a0000d 	mov	r0, sp
         39c18:	eb6e0869 	bl	1bbbdc4 <TCMOBreakFraming::$__ct(void)>
         39c1c:	e1a0100d 	mov	r1, sp
         39c20:	e1a00005 	mov	r0, r5
         39c24:	eb6df7e9 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         39c28:	e28dd01c 	add	sp, sp, #28	; 0x1c
         39c2c:	ea00004e 	b	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39c30:	e1a01000 	mov	r1, r0
         39c34:	ea000012 	b	39c84 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x258>
         39c38:	e3340c01 	teq	r4, #256	; 0x100
         39c3c:	13340c02 	teqne	r4, #512	; 0x200
         39c40:	1a000003 	bne	39c54 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x228>
         39c44:	e1a01005 	mov	r1, r5
         39c48:	e1a00006 	mov	r0, r6
         39c4c:	eb678011 	bl	1a19c98 <TAsyncSerTool::$SetEventEnables(TCMOSerialEventEnables *)>
         39c50:	ea000045 	b	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39c54:	e3340c03 	teq	r4, #768	; 0x300
         39c58:	1a000007 	bne	39c7c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x250>
         39c5c:	e24dd014 	sub	sp, sp, #20	; 0x14
         39c60:	e1a0000d 	mov	r0, sp
         39c64:	eb6e0c70 	bl	1bbce2c <TCMOSerialEventEnables::$__ct(void)>
         39c68:	e1a0100d 	mov	r1, sp
         39c6c:	e1a00005 	mov	r0, r5
         39c70:	eb6df7d6 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         39c74:	e28dd014 	add	sp, sp, #20	; 0x14
         39c78:	ea00003b 	b	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39c7c:	e2861058 	add	r1, r6, #88	; 0x58
         39c80:	e2811b01 	add	r1, r1, #1024	; 0x400
         39c84:	e1a00005 	mov	r0, r5
         39c88:	eb6df7d0 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         39c8c:	ea000036 	b	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39c90:	e3340c03 	teq	r4, #768	; 0x300
         39c94:	1affffe5 	bne	39c30 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x204>
         39c98:	e24dd018 	sub	sp, sp, #24	; 0x18
         39c9c:	e1a0000d 	mov	r0, sp
         39ca0:	eb6e0c5f 	bl	1bbce24 <TCMOSerialMiscConfig::$__ct(void)>
         39ca4:	e1a0100d 	mov	r1, sp
         39ca8:	e1a00005 	mov	r0, r5
         39cac:	eb6df7c7 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         39cb0:	e28dd018 	add	sp, sp, #24	; 0x18
         39cb4:	ea00002c 	b	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39cb8:	e5d6028e 	ldrb	r0, [r6, #654]	; fField654
         39cbc:	e3300000 	teq	r0, #0	; 0x0
         39cc0:	0a000028 	beq	39d68 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x33c>
         39cc4:	e3340c01 	teq	r4, #256	; 0x100
         39cc8:	13340c02 	teqne	r4, #512	; 0x200
         39ccc:	1a000008 	bne	39cf4 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2c8>
         39cd0:	e3a01000 	mov	r1, #0	; 0x0
         39cd4:	e3a02000 	mov	r2, #0	; 0x0
         39cd8:	e5d5000c 	ldrb	r0, [r5, #12]
         39cdc:	e3300000 	teq	r0, #0	; 0x0
         39ce0:	03a02001 	moveq	r2, #1	; 0x1
         39ce4:	13a01001 	movne	r1, #1	; 0x1
         39ce8:	e1a00006 	mov	r0, r6
         39cec:	eb679cf7 	bl	1a210d0 <TSerTool::$SetSerialOutputs(unsigned long, unsigned long)>
         39cf0:	ea00001d 	b	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39cf4:	e24dd010 	sub	sp, sp, #16	; 0x10
         39cf8:	e1a0000d 	mov	r0, sp
         39cfc:	eb6e0c47 	bl	1bbce20 <TCMOSerialDTRControl::$__ct(void)>
         39d00:	e3340b01 	teq	r4, #1024	; 0x400
         39d04:	1a000004 	bne	39d1c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2f0>
         39d08:	e1a00006 	mov	r0, r6
         39d0c:	eb6798a8 	bl	1a1ffb4 <TSerTool::$GetSerialOutputs(void)>
         39d10:	e2100001 	ands	r0, r0, #1	; 0x1
         39d14:	13a00001 	movne	r0, #1	; 0x1
         39d18:	e5cd000c 	strb	r0, [sp, #12]
         39d1c:	e1a0100d 	mov	r1, sp
         39d20:	e1a00005 	mov	r0, r5
         39d24:	eb6df7a9 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         39d28:	e28dd010 	add	sp, sp, #16	; 0x10
         39d2c:	ea00000e 	b	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39d30:	e5d6028e 	ldrb	r0, [r6, #654]	; fField654
         39d34:	e3300000 	teq	r0, #0	; 0x0
         39d38:	0a00000a 	beq	39d68 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x33c>
         39d3c:	e3340c02 	teq	r4, #512	; 0x200
         39d40:	1a000008 	bne	39d68 <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x33c>
         39d44:	e5d5000c 	ldrb	r0, [r5, #12]
         39d48:	e3300000 	teq	r0, #0	; 0x0
         39d4c:	11a00006 	movne	r0, r6
         39d50:	1b675aba 	blne	1a10840 <TAsyncSerTool::$FlushInputBytes(void)>
         39d54:	e5d5000d 	ldrb	r0, [r5, #13]
         39d58:	e3300000 	teq	r0, #0	; 0x0
         39d5c:	11a00006 	movne	r0, r6
         39d60:	1b675ab7 	blne	1a10844 <TAsyncSerTool::$FlushOutputBytes(void)>
         39d64:	ea000000 	b	39d6c <TAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x340>
         39d68:	e3e07000 	mvn	r7, #0	; 0x0
         39d6c:	e1a00007 	mov	r0, r7
         39d70:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         39d74:	e1a03004 	mov	r3, r4
         39d78:	e1a01005 	mov	r1, r5
         39d7c:	e1a00006 	mov	r0, r6
         39d80:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         39d84:	ea6798b5 	b	1a20060 <TSerTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TAsyncSerTool::SetOutputFlowControl(TCMOOutputFlowControlParms *)
 * Address: 00039d88
 */
TAsyncSerTool::SetOutputFlowControl(TCMOOutputFlowControlParms *) {
    /*
         39d88:	e1a0c00d 	mov	ip, sp
         39d8c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         39d90:	e24cb004 	sub	fp, ip, #4	; 0x4
         39d94:	e1a04000 	mov	r4, r0
         39d98:	e1a05001 	mov	r5, r1
         39d9c:	e5d0028e 	ldrb	r0, [r0, #654]	; fField654
         39da0:	e3300000 	teq	r0, #0	; 0x0
         39da4:	02840ffd 	addeq	r0, r4, #1012	; 0x3f4
         39da8:	01a01005 	moveq	r1, r5
         39dac:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         39db0:	0a6df786 	beq	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         39db4:	e5d5000c 	ldrb	r0, [r5, #12]
         39db8:	e5c40400 	strb	r0, [r4, #1024]	; fField1024
         39dbc:	e5d5000d 	ldrb	r0, [r5, #13]
         39dc0:	e5c40401 	strb	r0, [r4, #1025]	; fField1025
         39dc4:	e5d41402 	ldrb	r1, [r4, #1026]	; fField1026
         39dc8:	e5d5000e 	ldrb	r0, [r5, #14]
         39dcc:	e5c40402 	strb	r0, [r4, #1026]	; fField1026
         39dd0:	e1300001 	teq	r0, r1
         39dd4:	13a01000 	movne	r1, #0	; 0x0
         39dd8:	15c41405 	strneb	r1, [r4, #1029]	; fField1029
         39ddc:	159413ec 	ldrne	r1, [r4, #1004]	; fField1004
         39de0:	13310000 	teqne	r1, #0	; 0x0
         39de4:	0a00000d 	beq	39e20 <TAsyncSerTool::SetOutputFlowControl(TCMOOutputFlowControlParms *)+0x98>
         39de8:	e3300000 	teq	r0, #0	; 0x0
         39dec:	0a000006 	beq	39e0c <TAsyncSerTool::SetOutputFlowControl(TCMOOutputFlowControlParms *)+0x84>
         39df0:	e3310002 	teq	r1, #2	; 0x2
         39df4:	1a000004 	bne	39e0c <TAsyncSerTool::SetOutputFlowControl(TCMOOutputFlowControlParms *)+0x84>
         39df8:	e3a01002 	mov	r1, #2	; 0x2
         39dfc:	e5940304 	ldr	r0, [r4, #772]	; fField772
         39e00:	eb0d2bc2 	bl	384d10 <TSerialChip::RxDMAControl(unsigned char)>
         39e04:	e3a00001 	mov	r0, #1	; 0x1
         39e08:	ea000003 	b	39e1c <TAsyncSerTool::SetOutputFlowControl(TCMOOutputFlowControlParms *)+0x94>
         39e0c:	e3a01011 	mov	r1, #17	; 0x11
         39e10:	e5940304 	ldr	r0, [r4, #772]	; fField772
         39e14:	eb0d2bbd 	bl	384d10 <TSerialChip::RxDMAControl(unsigned char)>
         39e18:	e3a00002 	mov	r0, #2	; 0x2
         39e1c:	e58403ec 	str	r0, [r4, #1004]	; fField1004
         39e20:	e5d40403 	ldrb	r0, [r4, #1027]	; fField1027
         39e24:	e5d5500f 	ldrb	r5, [r5, #15]
         39e28:	e1350000 	teq	r5, r0
         39e2c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         39e30:	e1a00004 	mov	r0, r4
         39e34:	eb675239 	bl	1a0e720 <TAsyncSerTool::$ConfigureModemInterrupts(void)>
         39e38:	e5c45403 	strb	r5, [r4, #1027]	; fField1027
         39e3c:	e3350000 	teq	r5, #0	; 0x0
         39e40:	e1a00004 	mov	r0, r4
         39e44:	03a01001 	moveq	r1, #1	; 0x1
         39e48:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         39e4c:	0a675240 	beq	1a0e754 <TAsyncSerTool::$ContinueOutputST(unsigned char)>
         39e50:	eb6762c6 	bl	1a12970 <TAsyncSerTool::$HSKiOn(void)>
         39e54:	e3300000 	teq	r0, #0	; 0x0
         39e58:	13a00000 	movne	r0, #0	; 0x0
         39e5c:	03a00001 	moveq	r0, #1	; 0x1
         39e60:	e5c40404 	strb	r0, [r4, #1028]	; fField1028
         39e64:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::SetInputFlowControl(TCMOInputFlowControlParms *)
 * Address: 00039e68
 */
TAsyncSerTool::SetInputFlowControl(TCMOInputFlowControlParms *) {
    /*
         39e68:	e1a0c00d 	mov	ip, sp
         39e6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         39e70:	e24cb004 	sub	fp, ip, #4	; 0x4
         39e74:	e1a04000 	mov	r4, r0
         39e78:	e1a05001 	mov	r5, r1
         39e7c:	e5d0028e 	ldrb	r0, [r0, #654]	; fField654
         39e80:	e3300000 	teq	r0, #0	; 0x0
         39e84:	02840008 	addeq	r0, r4, #8	; 0x8
         39e88:	02800b01 	addeq	r0, r0, #1024	; 0x400
         39e8c:	01a01005 	moveq	r1, r5
         39e90:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         39e94:	0a6df74d 	beq	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         39e98:	e5d5000c 	ldrb	r0, [r5, #12]
         39e9c:	e5c40414 	strb	r0, [r4, #1044]	; fField1044
         39ea0:	e5d5000d 	ldrb	r0, [r5, #13]
         39ea4:	e5c40415 	strb	r0, [r4, #1045]	; fField1045
         39ea8:	e5d41416 	ldrb	r1, [r4, #1046]	; fField1046
         39eac:	e5d5000e 	ldrb	r0, [r5, #14]
         39eb0:	e5c40416 	strb	r0, [r4, #1046]	; fField1046
         39eb4:	e3300000 	teq	r0, #0	; 0x0
         39eb8:	1a00000a 	bne	39ee8 <TAsyncSerTool::SetInputFlowControl(TCMOInputFlowControlParms *)+0x80>
         39ebc:	e3310000 	teq	r1, #0	; 0x0
         39ec0:	15d40419 	ldrneb	r0, [r4, #1049]	; fField1049
         39ec4:	13300000 	teqne	r0, #0	; 0x0
         39ec8:	15d41381 	ldrneb	r1, [r4, #897]	; fField897
         39ecc:	15d40414 	ldrneb	r0, [r4, #1044]	; fField1044
         39ed0:	11310000 	teqne	r1, r0
         39ed4:	0a000003 	beq	39ee8 <TAsyncSerTool::SetInputFlowControl(TCMOInputFlowControlParms *)+0x80>
         39ed8:	e5c40381 	strb	r0, [r4, #897]	; fField897
         39edc:	e1a00004 	mov	r0, r4
         39ee0:	e3a01001 	mov	r1, #1	; 0x1
         39ee4:	eb67521a 	bl	1a0e754 <TAsyncSerTool::$ContinueOutputST(unsigned char)>
         39ee8:	e5d40417 	ldrb	r0, [r4, #1047]	; fField1047
         39eec:	e5d5100f 	ldrb	r1, [r5, #15]
         39ef0:	e5c41417 	strb	r1, [r4, #1047]	; fField1047
         39ef4:	e3310000 	teq	r1, #0	; 0x0
         39ef8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         39efc:	e3300000 	teq	r0, #0	; 0x0
         39f00:	11a00004 	movne	r0, r4
         39f04:	13a01001 	movne	r1, #1	; 0x1
         39f08:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         39f0c:	1a677f65 	bne	1a19ca8 <TSerTool::$SetHSKo(unsigned char)>
         39f10:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::SetEventEnables(TCMOSerialEventEnables *)
 * Address: 00039f14
 */
TAsyncSerTool::SetEventEnables(TCMOSerialEventEnables *) {
    /*
         39f14:	e1a0c00d 	mov	ip, sp
         39f18:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         39f1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         39f20:	e1a04000 	mov	r4, r0
         39f24:	e2800058 	add	r0, r0, #88	; 0x58
         39f28:	e2800b01 	add	r0, r0, #1024	; 0x400
         39f2c:	eb6df727 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         39f30:	e5940464 	ldr	r0, [r4, #1124]	; fField1124
         39f34:	e1a00900 	mov	r0, r0, lsl #18
         39f38:	e1a00920 	mov	r0, r0, lsr #18
         39f3c:	e3c00dc2 	bic	r0, r0, #12416	; 0x3080
         39f40:	e5941498 	ldr	r1, [r4, #1176]	; fField1176
         39f44:	e1a01901 	mov	r1, r1, lsl #18
         39f48:	e1a01921 	mov	r1, r1, lsr #18
         39f4c:	e3c11dc2 	bic	r1, r1, #12416	; 0x3080
         39f50:	e1810000 	orr	r0, r1, r0
         39f54:	e5840498 	str	r0, [r4, #1176]	; fField1176
         39f58:	e5d4028e 	ldrb	r0, [r4, #654]	; fField654
         39f5c:	e3300000 	teq	r0, #0	; 0x0
         39f60:	11a00004 	movne	r0, r4
         39f64:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         39f68:	1a6751ec 	bne	1a0e720 <TAsyncSerTool::$ConfigureModemInterrupts(void)>
         39f6c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::TxDataSent(void)
 * Address: 00039f70
 */
TAsyncSerTool::TxDataSent(void) {
    /*
         39f70:	e1a0c00d 	mov	ip, sp
         39f74:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         39f78:	e24cb004 	sub	fp, ip, #4	; 0x4
         39f7c:	e1a04000 	mov	r4, r0
         39f80:	e5900270 	ldr	r0, [r0, #624]	; fField624
         39f84:	e3300000 	teq	r0, #0	; 0x0
         39f88:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         39f8c:	e2840fe1 	add	r0, r4, #900	; 0x384
         39f90:	eb6f30e5 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
         39f94:	e3300000 	teq	r0, #0	; 0x0
         39f98:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         39f9c:	e1a00004 	mov	r0, r4
         39fa0:	e5941000 	ldr	r1, [r4]
         39fa4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         39fa8:	e281fe17 	add	pc, r1, #368	; 0x170
    */
}

/**
 * Symbol: TAsyncSerTool::RxDataAvailable(void)
 * Address: 00039fac
 */
TAsyncSerTool::RxDataAvailable(void) {
    /*
         39fac:	e1a01000 	mov	r1, r0
         39fb0:	e590027c 	ldr	r0, [r0, #636]	; fField636
         39fb4:	e3300000 	teq	r0, #0	; 0x0
         39fb8:	01a0f00e 	moveq	pc, lr
         39fbc:	e1a00001 	mov	r0, r1
         39fc0:	e5911000 	ldr	r1, [r1]
         39fc4:	e281ff5e 	add	pc, r1, #376	; 0x178
    */
}

/**
 * Symbol: TAsyncSerTool::SerialEvents(unsigned long)
 * Address: 00039fc8
 */
TAsyncSerTool::SerialEvents(unsigned long) {
    /*
         39fc8:	e590c464 	ldr	ip, [r0, #1124]	; fField1124
         39fcc:	e00c1001 	and	r1, ip, r1
         39fd0:	e59022cc 	ldr	r2, [r0, #716]	; fField716
         39fd4:	e1821001 	orr	r1, r2, r1
         39fd8:	e58012cc 	str	r1, [r0, #716]	; fField716
         39fdc:	e1310002 	teq	r1, r2
         39fe0:	1a6772d1 	bne	1a16b2c <TSerTool::$PostSerialEvent(void)>
         39fe4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncSerTool::IHReqHandler(void)
 * Address: 00039fe8
 */
TAsyncSerTool::IHReqHandler(void) {
    /*
         39fe8:	e1a0c00d 	mov	ip, sp
         39fec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         39ff0:	e24cb004 	sub	fp, ip, #4	; 0x4
         39ff4:	e1a04000 	mov	r4, r0
         39ff8:	e2800094 	add	r0, r0, #148	; 0x94
         39ffc:	e2800b01 	add	r0, r0, #1024	; 0x400
         3a000:	e3a01000 	mov	r1, #0	; 0x0
         3a004:	eb0dd07e 	bl	3ae204 <Swap>
         3a008:	e3100201 	tst	r0, #268435456	; 0x10000000
         3a00c:	0a000019 	beq	3a078 <TAsyncSerTool::IHReqHandler(void)+0x90>
         3a010:	e594027c 	ldr	r0, [r4, #636]	; fField636
         3a014:	e59f50b4 	ldr	r5, [pc, #b4]	; 3a0d0 <TAsyncSerTool::IHReqHandler(void)+0xe8>
         3a018:	e3300000 	teq	r0, #0	; 0x0
         3a01c:	0a000005 	beq	3a038 <TAsyncSerTool::IHReqHandler(void)+0x50>
         3a020:	e1a00004 	mov	r0, r4
         3a024:	e3a02000 	mov	r2, #0	; 0x0
         3a028:	e1a01005 	mov	r1, r5
         3a02c:	e5943000 	ldr	r3, [r4]
         3a030:	e1a0e00f 	mov	lr, pc
         3a034:	e283ff65 	add	pc, r3, #404	; 0x194
         3a038:	e5940270 	ldr	r0, [r4, #624]	; fField624
         3a03c:	e3300000 	teq	r0, #0	; 0x0
         3a040:	0a000004 	beq	3a058 <TAsyncSerTool::IHReqHandler(void)+0x70>
         3a044:	e1a00004 	mov	r0, r4
         3a048:	e1a01005 	mov	r1, r5
         3a04c:	e5942000 	ldr	r2, [r4]
         3a050:	e1a0e00f 	mov	lr, pc
         3a054:	e282ff63 	add	pc, r2, #396	; 0x18c
         3a058:	e1a00004 	mov	r0, r4
         3a05c:	e5941000 	ldr	r1, [r4]
         3a060:	e1a0e00f 	mov	lr, pc
         3a064:	e281ff55 	add	pc, r1, #340	; 0x154
         3a068:	e1a00004 	mov	r0, r4
         3a06c:	e1a01005 	mov	r1, r5
         3a070:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         3a074:	ea6e1c05 	b	1bc1090 <TCommTool::$StartAbort(long)>
         3a078:	e5941498 	ldr	r1, [r4, #1176]	; fField1176
         3a07c:	e0015000 	and	r5, r1, r0
         3a080:	e3150202 	tst	r5, #536870912	; 0x20000000
         3a084:	0a000003 	beq	3a098 <TAsyncSerTool::IHReqHandler(void)+0xb0>
         3a088:	e1a00004 	mov	r0, r4
         3a08c:	e5941000 	ldr	r1, [r4]
         3a090:	e1a0e00f 	mov	lr, pc
         3a094:	e281ff67 	add	pc, r1, #412	; 0x19c
         3a098:	e3150101 	tst	r5, #1073741824	; 0x40000000
         3a09c:	0a000003 	beq	3a0b0 <TAsyncSerTool::IHReqHandler(void)+0xc8>
         3a0a0:	e1a00004 	mov	r0, r4
         3a0a4:	e5941000 	ldr	r1, [r4]
         3a0a8:	e1a0e00f 	mov	lr, pc
         3a0ac:	e281fe1a 	add	pc, r1, #416	; 0x1a0
         3a0b0:	e1a01905 	mov	r1, r5, lsl #18
         3a0b4:	e1a01921 	mov	r1, r1, lsr #18
         3a0b8:	e3d11dc2 	bics	r1, r1, #12416	; 0x3080
         3a0bc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         3a0c0:	e1a00004 	mov	r0, r4
         3a0c4:	e5942000 	ldr	r2, [r4]
         3a0c8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         3a0cc:	e282ff69 	add	pc, r2, #420	; 0x1a4
         3a0d0:	ffffc173 	swinv	0x00ffc173
    */
}

/**
 * Symbol: TAsyncSerTool::ContinueOutputST(unsigned char)
 * Address: 0003a0d4
 */
TAsyncSerTool::ContinueOutputST(unsigned char) {
    /*
         3a0d4:	e1a0c00d 	mov	ip, sp
         3a0d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3a0dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         3a0e0:	e1a04000 	mov	r4, r0
         3a0e4:	e20150ff 	and	r5, r1, #255	; 0xff
         3a0e8:	eb0d62a8 	bl	392b90 <EnterFIQAtomic>
         3a0ec:	e1a01005 	mov	r1, r5
         3a0f0:	e1a00004 	mov	r0, r4
         3a0f4:	eb675195 	bl	1a0e750 <TAsyncSerTool::$ContinueOutputIH(unsigned char)>
         3a0f8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         3a0fc:	ea0d62ab 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TAsyncSerTool::GetToolName(void)
 * Address: 0003a100
 */
TAsyncSerTool::GetToolName(void) {
    /*
         3a100:	e28f0f00 	add	r0, pc, #0	; 0x0
         3a104:	e1a0f00e 	mov	pc, lr
         3a108:	4173796e 	cmnmi	r3, lr, ror #18
         3a10c:	63205365 	teqvs	r0, #-1811939327	; 0x94000001
         3a110:	7269616c 	rsbvc	r6, r9, #27	; 0x1b
         3a114:	20546f6f 	subcss	r6, r4, pc, ror #30
         3a118:	6c000000 	stcvs	0, cr0, [r0]
    */
}

/**
 * Symbol: TAsyncSerTool::StartOutputST(void)
 * Address: 0003a11c
 */
TAsyncSerTool::StartOutputST(void) {
    /*
         3a11c:	e1a0c00d 	mov	ip, sp
         3a120:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3a124:	e24cb004 	sub	fp, ip, #4	; 0x4
         3a128:	e1a04000 	mov	r4, r0
         3a12c:	eb0d6297 	bl	392b90 <EnterFIQAtomic>
         3a130:	e1a00004 	mov	r0, r4
         3a134:	eb67559b 	bl	1a0f7a8 <TAsyncSerTool::$DoBreakFraming(void)>
         3a138:	e1a00004 	mov	r0, r4
         3a13c:	e3a01001 	mov	r1, #1	; 0x1
         3a140:	eb675182 	bl	1a0e750 <TAsyncSerTool::$ContinueOutputIH(unsigned char)>
         3a144:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         3a148:	ea0d6298 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TAsyncSerTool::IHRequest(unsigned long)
 * Address: 0003a14c
 */
TAsyncSerTool::IHRequest(unsigned long) {
    /*
         3a14c:	e5902494 	ldr	r2, [r0, #1172]	; fField1172
         3a150:	e3120102 	tst	r2, #-2147483648	; 0x80000000
         3a154:	03822102 	orreq	r2, r2, #-2147483648	; 0x80000000
         3a158:	05802494 	streq	r2, [r0, #1172]	; fField1172
         3a15c:	0a676607 	beq	1a13980 <TSerTool::$IHRequest(unsigned long)>
         3a160:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncSerTool::DataInObserver(unsigned char)
 * Address: 0003a164
 */
TAsyncSerTool::DataInObserver(unsigned char) {
    /*
         3a164:	e1a0c00d 	mov	ip, sp
         3a168:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3a16c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3a170:	e20110ff 	and	r1, r1, #255	; 0xff
         3a174:	e3a04000 	mov	r4, #0	; 0x0
         3a178:	e5d02402 	ldrb	r2, [r0, #1026]	; fField1026
         3a17c:	e3320000 	teq	r2, #0	; 0x0
         3a180:	0a00000f 	beq	3a1c4 <TAsyncSerTool::DataInObserver(unsigned char)+0x60>
         3a184:	e5d02400 	ldrb	r2, [r0, #1024]	; fField1024
         3a188:	e1320001 	teq	r2, r1
         3a18c:	1a000005 	bne	3a1a8 <TAsyncSerTool::DataInObserver(unsigned char)+0x44>
         3a190:	e3a01000 	mov	r1, #0	; 0x0
         3a194:	e5c01405 	strb	r1, [r0, #1029]	; fField1029
         3a198:	e3a01001 	mov	r1, #1	; 0x1
         3a19c:	eb67516b 	bl	1a0e750 <TAsyncSerTool::$ContinueOutputIH(unsigned char)>
         3a1a0:	e3a04001 	mov	r4, #1	; 0x1
         3a1a4:	ea000006 	b	3a1c4 <TAsyncSerTool::DataInObserver(unsigned char)+0x60>
         3a1a8:	e5d02401 	ldrb	r2, [r0, #1025]	; fField1025
         3a1ac:	e1320001 	teq	r2, r1
         3a1b0:	1a000003 	bne	3a1c4 <TAsyncSerTool::DataInObserver(unsigned char)+0x60>
         3a1b4:	e3a01001 	mov	r1, #1	; 0x1
         3a1b8:	e5c01405 	strb	r1, [r0, #1029]	; fField1029
         3a1bc:	e3a04001 	mov	r4, #1	; 0x1
         3a1c0:	eb67cd49 	bl	1a2d6ec <TAsyncSerTool::$SuspendTxDMA(void)>
         3a1c4:	e1a00004 	mov	r0, r4
         3a1c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::OutputStopped(void)
 * Address: 0003a1cc
 */
TAsyncSerTool::OutputStopped(void) {
    /*
         3a1cc:	e5d01402 	ldrb	r1, [r0, #1026]	; fField1026
         3a1d0:	e3310000 	teq	r1, #0	; 0x0
         3a1d4:	15d01405 	ldrneb	r1, [r0, #1029]	; fField1029
         3a1d8:	13310000 	teqne	r1, #0	; 0x0
         3a1dc:	1a000004 	bne	3a1f4 <TAsyncSerTool::OutputStopped(void)+0x28>
         3a1e0:	e5d01403 	ldrb	r1, [r0, #1027]	; fField1027
         3a1e4:	e3310000 	teq	r1, #0	; 0x0
         3a1e8:	15d00404 	ldrneb	r0, [r0, #1028]	; fField1028
         3a1ec:	13300000 	teqne	r0, #0	; 0x0
         3a1f0:	0a000001 	beq	3a1fc <TAsyncSerTool::OutputStopped(void)+0x30>
         3a1f4:	e3a00001 	mov	r0, #1	; 0x1
         3a1f8:	ea000000 	b	3a200 <TAsyncSerTool::OutputStopped(void)+0x34>
         3a1fc:	e3a00000 	mov	r0, #0	; 0x0
         3a200:	e20000ff 	and	r0, r0, #255	; 0xff
         3a204:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncSerTool::SuspendTxDMA(void)
 * Address: 0003a208
 */
TAsyncSerTool::SuspendTxDMA(void) {
    /*
         3a208:	e59013f0 	ldr	r1, [r0, #1008]	; fField1008
         3a20c:	e3310002 	teq	r1, #2	; 0x2
         3a210:	11a0f00e 	movne	pc, lr
         3a214:	e3a01003 	mov	r1, #3	; 0x3
         3a218:	e58013f0 	str	r1, [r0, #1008]	; fField1008
         3a21c:	e5900304 	ldr	r0, [r0, #772]	; fField772
         3a220:	ea0d2ab7 	b	384d04 <TSerialChip::TxDMAControl(unsigned char)>
    */
}

/**
 * Symbol: TAsyncSerTool::ContinueOutputIH(unsigned char)
 * Address: 0003a224
 */
TAsyncSerTool::ContinueOutputIH(unsigned char) {
    /*
         3a224:	e1a0c00d 	mov	ip, sp
         3a228:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3a22c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3a230:	e1a04000 	mov	r4, r0
         3a234:	eb676e21 	bl	1a15ac0 <TAsyncSerTool::$OutputStopped(void)>
         3a238:	e3300000 	teq	r0, #0	; 0x0
         3a23c:	0a000002 	beq	3a24c <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x28>
         3a240:	e5d40381 	ldrb	r0, [r4, #897]	; fField897
         3a244:	e3300000 	teq	r0, #0	; 0x0
         3a248:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         3a24c:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a250:	e3300000 	teq	r0, #0	; 0x0
         3a254:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         3a258:	e24dd004 	sub	sp, sp, #4	; 0x4
         3a25c:	e59413f0 	ldr	r1, [r4, #1008]	; fField1008
         3a260:	e3310000 	teq	r1, #0	; 0x0
         3a264:	0a000033 	beq	3a338 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x114>
         3a268:	e5d41381 	ldrb	r1, [r4, #897]	; fField897
         3a26c:	e3310000 	teq	r1, #0	; 0x0
         3a270:	0a000013 	beq	3a2c4 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0xa0>
         3a274:	eb0d2a45 	bl	384b90 <TSerialChip::TxBufEmpty(void)>
         3a278:	e3300000 	teq	r0, #0	; 0x0
         3a27c:	1a000003 	bne	3a290 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x6c>
         3a280:	e3a02001 	mov	r2, #1	; 0x1
         3a284:	e3a01080 	mov	r1, #128	; 0x80
         3a288:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a28c:	eb0d2a8d 	bl	384cc8 <TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)>
         3a290:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a294:	eb0d2a3d 	bl	384b90 <TSerialChip::TxBufEmpty(void)>
         3a298:	e3300000 	teq	r0, #0	; 0x0
         3a29c:	0a000040 	beq	3a3a4 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x180>
         3a2a0:	e5d41381 	ldrb	r1, [r4, #897]	; fField897
         3a2a4:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a2a8:	eb0d2a2f 	bl	384b6c <TSerialChip::PutByte(unsigned char)>
         3a2ac:	e3a00000 	mov	r0, #0	; 0x0
         3a2b0:	e5c40381 	strb	r0, [r4, #897]	; fField897
         3a2b4:	e3a02000 	mov	r2, #0	; 0x0
         3a2b8:	e3a01080 	mov	r1, #128	; 0x80
         3a2bc:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a2c0:	eb0d2a80 	bl	384cc8 <TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)>
         3a2c4:	e2840fe1 	add	r0, r4, #900	; 0x384
         3a2c8:	eb6f3017 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
         3a2cc:	e3300000 	teq	r0, #0	; 0x0
         3a2d0:	0a00000c 	beq	3a308 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0xe4>
         3a2d4:	e59403f0 	ldr	r0, [r4, #1008]	; fField1008
         3a2d8:	e3300002 	teq	r0, #2	; 0x2
         3a2dc:	0a000030 	beq	3a3a4 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x180>
         3a2e0:	e3a02000 	mov	r2, #0	; 0x0
         3a2e4:	e3a01080 	mov	r1, #128	; 0x80
         3a2e8:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a2ec:	eb0d2a75 	bl	384cc8 <TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)>
         3a2f0:	e3a00002 	mov	r0, #2	; 0x2
         3a2f4:	e58403f0 	str	r0, [r4, #1008]	; fField1008
         3a2f8:	e3a01001 	mov	r1, #1	; 0x1
         3a2fc:	e5b40304 	ldr	r0, [r4, #772]!	; fField772
         3a300:	eb0d2a7f 	bl	384d04 <TSerialChip::TxDMAControl(unsigned char)>
         3a304:	ea000026 	b	3a3a4 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x180>
         3a308:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
         3a30c:	e3100202 	tst	r0, #536870912	; 0x20000000
         3a310:	0a000023 	beq	3a3a4 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x180>
         3a314:	e5940494 	ldr	r0, [r4, #1172]	; fField1172
         3a318:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
         3a31c:	e5840494 	str	r0, [r4, #1172]	; fField1172
         3a320:	e1a00004 	mov	r0, r4
         3a324:	e3a01000 	mov	r1, #0	; 0x0
         3a328:	e5942000 	ldr	r2, [r4]
         3a32c:	e1a0e00f 	mov	lr, pc
         3a330:	e282fd06 	add	pc, r2, #384	; 0x180
         3a334:	ea00001a 	b	3a3a4 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x180>
         3a338:	eb0d2a14 	bl	384b90 <TSerialChip::TxBufEmpty(void)>
         3a33c:	e3300000 	teq	r0, #0	; 0x0
         3a340:	0a000017 	beq	3a3a4 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x180>
         3a344:	e1a0100d 	mov	r1, sp
         3a348:	e1a00004 	mov	r0, r4
         3a34c:	eb679716 	bl	1a1ffac <TAsyncSerTool::$GetNextOutChar(unsigned char *)>
         3a350:	e3300000 	teq	r0, #0	; 0x0
         3a354:	0a000012 	beq	3a3a4 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x180>
         3a358:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a35c:	e5dd1000 	ldrb	r1, [sp]
         3a360:	eb0d2a01 	bl	384b6c <TSerialChip::PutByte(unsigned char)>
         3a364:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a368:	eb0d2a08 	bl	384b90 <TSerialChip::TxBufEmpty(void)>
         3a36c:	e3300000 	teq	r0, #0	; 0x0
         3a370:	0a00000b 	beq	3a3a4 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x180>
         3a374:	e1a0100d 	mov	r1, sp
         3a378:	e1a00004 	mov	r0, r4
         3a37c:	eb679709 	bl	1a1ffa8 <TAsyncSerTool::$GetMoreOutChars(unsigned char *)>
         3a380:	e3300000 	teq	r0, #0	; 0x0
         3a384:	0a000006 	beq	3a3a4 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x180>
         3a388:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a38c:	e5dd1000 	ldrb	r1, [sp]
         3a390:	eb0d29f5 	bl	384b6c <TSerialChip::PutByte(unsigned char)>
         3a394:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a398:	eb0d29fc 	bl	384b90 <TSerialChip::TxBufEmpty(void)>
         3a39c:	e3300000 	teq	r0, #0	; 0x0
         3a3a0:	1afffff3 	bne	3a374 <TAsyncSerTool::ContinueOutputIH(unsigned char)+0x150>
         3a3a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::DoBreakFraming(void)
 * Address: 0003a3a8
 */
TAsyncSerTool::DoBreakFraming(void) {
    /*
         3a3a8:	e1a0c00d 	mov	ip, sp
         3a3ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3a3b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         3a3b4:	e1a04000 	mov	r4, r0
         3a3b8:	e5900448 	ldr	r0, [r0, #1096]	; fField1096
         3a3bc:	e2845fce 	add	r5, r4, #824	; 0x338
         3a3c0:	e3300000 	teq	r0, #0	; 0x0
         3a3c4:	0a000016 	beq	3a424 <TAsyncSerTool::DoBreakFraming(void)+0x7c>
         3a3c8:	e1a01080 	mov	r1, r0, lsl #1
         3a3cc:	e1a00005 	mov	r0, r5
         3a3d0:	eb6f0ec2 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
         3a3d4:	e594030c 	ldr	r0, [r4, #780]	; fField780
         3a3d8:	e3100020 	tst	r0, #32	; 0x20
         3a3dc:	0a000007 	beq	3a400 <TAsyncSerTool::DoBreakFraming(void)+0x58>
         3a3e0:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a3e4:	eb0d2a3a 	bl	384cd4 <TSerialChip::AllSent(void)>
         3a3e8:	e3300000 	teq	r0, #0	; 0x0
         3a3ec:	1a000003 	bne	3a400 <TAsyncSerTool::DoBreakFraming(void)+0x58>
         3a3f0:	e1a00005 	mov	r0, r5
         3a3f4:	eb6f0ebb 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
         3a3f8:	e3300000 	teq	r0, #0	; 0x0
         3a3fc:	0afffff7 	beq	3a3e0 <TAsyncSerTool::DoBreakFraming(void)+0x38>
         3a400:	e3a01001 	mov	r1, #1	; 0x1
         3a404:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a408:	eb0d2a07 	bl	384c2c <TSerialChip::SetBreak(unsigned char)>
         3a40c:	e1a00005 	mov	r0, r5
         3a410:	e5941448 	ldr	r1, [r4, #1096]	; fField1096
         3a414:	eb6f0eb0 	bl	1bfdedc <TDelayTimer::$ShortTimerDelay(unsigned long)>
         3a418:	e3a01000 	mov	r1, #0	; 0x0
         3a41c:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a420:	eb0d2a01 	bl	384c2c <TSerialChip::SetBreak(unsigned char)>
         3a424:	e5b4044c 	ldr	r0, [r4, #1100]!	; fField1100
         3a428:	e3300000 	teq	r0, #0	; 0x0
         3a42c:	11a01000 	movne	r1, r0
         3a430:	11a00005 	movne	r0, r5
         3a434:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         3a438:	1a6f0ea7 	bne	1bfdedc <TDelayTimer::$ShortTimerDelay(unsigned long)>
         3a43c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::GetNextOutChar(unsigned char *)
 * Address: 0003a440
 */
TAsyncSerTool::GetNextOutChar(unsigned char *) {
    /*
         3a440:	e1a0c00d 	mov	ip, sp
         3a444:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         3a448:	e24cb004 	sub	fp, ip, #4	; 0x4
         3a44c:	e1a04000 	mov	r4, r0
         3a450:	e1a05001 	mov	r5, r1
         3a454:	e3a06000 	mov	r6, #0	; 0x0
         3a458:	e5d00381 	ldrb	r0, [r0, #897]	; fField897
         3a45c:	e3300000 	teq	r0, #0	; 0x0
         3a460:	0a000006 	beq	3a480 <TAsyncSerTool::GetNextOutChar(unsigned char *)+0x40>
         3a464:	e5d4128a 	ldrb	r1, [r4, #650]	; fField650
         3a468:	e0000001 	and	r0, r0, r1
         3a46c:	e5c50000 	strb	r0, [r5]
         3a470:	e3a00000 	mov	r0, #0	; 0x0
         3a474:	e5c40381 	strb	r0, [r4, #897]	; fField897
         3a478:	e3a06001 	mov	r6, #1	; 0x1
         3a47c:	ea00002e 	b	3a53c <TAsyncSerTool::GetNextOutChar(unsigned char *)+0xfc>
         3a480:	e1a00004 	mov	r0, r4
         3a484:	eb676d8d 	bl	1a15ac0 <TAsyncSerTool::$OutputStopped(void)>
         3a488:	e3300000 	teq	r0, #0	; 0x0
         3a48c:	1a00002a 	bne	3a53c <TAsyncSerTool::GetNextOutChar(unsigned char *)+0xfc>
         3a490:	e2840fe1 	add	r0, r4, #900	; 0x384
         3a494:	e1a07000 	mov	r7, r0
         3a498:	e1a01005 	mov	r1, r5
         3a49c:	eb6f2fb1 	bl	1c06368 <TCircleBuf::$GetNextByte(unsigned char *)>
         3a4a0:	e3300000 	teq	r0, #0	; 0x0
         3a4a4:	13a00000 	movne	r0, #0	; 0x0
         3a4a8:	03a00001 	moveq	r0, #1	; 0x1
         3a4ac:	e21060ff 	ands	r6, r0, #255	; 0xff
         3a4b0:	0a000004 	beq	3a4c8 <TAsyncSerTool::GetNextOutChar(unsigned char *)+0x88>
         3a4b4:	e5d4028a 	ldrb	r0, [r4, #650]	; fField650
         3a4b8:	e5d51000 	ldrb	r1, [r5]
         3a4bc:	e0000001 	and	r0, r0, r1
         3a4c0:	e5c50000 	strb	r0, [r5]
         3a4c4:	ea00000f 	b	3a508 <TAsyncSerTool::GetNextOutChar(unsigned char *)+0xc8>
         3a4c8:	e5940454 	ldr	r0, [r4, #1108]	; fField1108
         3a4cc:	e3300000 	teq	r0, #0	; 0x0
         3a4d0:	0a00000e 	beq	3a510 <TAsyncSerTool::GetNextOutChar(unsigned char *)+0xd0>
         3a4d4:	e2400001 	sub	r0, r0, #1	; 0x1
         3a4d8:	e5840454 	str	r0, [r4, #1108]	; fField1108
         3a4dc:	e1a00007 	mov	r0, r7
         3a4e0:	eb6f37e3 	bl	1c08474 <TCircleBuf::$ResetStart(void)>
         3a4e4:	e1a00004 	mov	r0, r4
         3a4e8:	eb6754ae 	bl	1a0f7a8 <TAsyncSerTool::$DoBreakFraming(void)>
         3a4ec:	e1a00007 	mov	r0, r7
         3a4f0:	e1a01005 	mov	r1, r5
         3a4f4:	eb6f2f9b 	bl	1c06368 <TCircleBuf::$GetNextByte(unsigned char *)>
         3a4f8:	e3300000 	teq	r0, #0	; 0x0
         3a4fc:	13a00000 	movne	r0, #0	; 0x0
         3a500:	03a00001 	moveq	r0, #1	; 0x1
         3a504:	e20060ff 	and	r6, r0, #255	; 0xff
         3a508:	e3360000 	teq	r6, #0	; 0x0
         3a50c:	1a00000a 	bne	3a53c <TAsyncSerTool::GetNextOutChar(unsigned char *)+0xfc>
         3a510:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
         3a514:	e3100202 	tst	r0, #536870912	; 0x20000000
         3a518:	0a000007 	beq	3a53c <TAsyncSerTool::GetNextOutChar(unsigned char *)+0xfc>
         3a51c:	e5940494 	ldr	r0, [r4, #1172]	; fField1172
         3a520:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
         3a524:	e5840494 	str	r0, [r4, #1172]	; fField1172
         3a528:	e1a00004 	mov	r0, r4
         3a52c:	e3a01000 	mov	r1, #0	; 0x0
         3a530:	e5942000 	ldr	r2, [r4]
         3a534:	e1a0e00f 	mov	lr, pc
         3a538:	e282fd06 	add	pc, r2, #384	; 0x180
         3a53c:	e1a00006 	mov	r0, r6
         3a540:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::GetMoreOutChars(unsigned char *)
 * Address: 0003a544
 */
TAsyncSerTool::GetMoreOutChars(unsigned char *) {
    /*
         3a544:	e1a0c00d 	mov	ip, sp
         3a548:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3a54c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3a550:	e1a05000 	mov	r5, r0
         3a554:	e1a04001 	mov	r4, r1
         3a558:	e2800fe1 	add	r0, r0, #900	; 0x384
         3a55c:	eb6f2f81 	bl	1c06368 <TCircleBuf::$GetNextByte(unsigned char *)>
         3a560:	e3300000 	teq	r0, #0	; 0x0
         3a564:	13a00000 	movne	r0, #0	; 0x0
         3a568:	03a00001 	moveq	r0, #1	; 0x1
         3a56c:	e20000ff 	and	r0, r0, #255	; 0xff
         3a570:	e5d5228a 	ldrb	r2, [r5, #650]	; fField650
         3a574:	e5d41000 	ldrb	r1, [r4]
         3a578:	e0021001 	and	r1, r2, r1
         3a57c:	e5c41000 	strb	r1, [r4]
         3a580:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::HandleCharIn(unsigned char, unsigned long)
 * Address: 0003a584
 */
TAsyncSerTool::HandleCharIn(unsigned char, unsigned long) {
    /*
         3a584:	e1a0c00d 	mov	ip, sp
         3a588:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         3a58c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3a590:	e1a04000 	mov	r4, r0
         3a594:	e1b05002 	movs	r5, r2
         3a598:	e20100ff 	and	r0, r1, #255	; 0xff
         3a59c:	e5d4128a 	ldrb	r1, [r4, #650]	; fField650
         3a5a0:	e0010000 	and	r0, r1, r0
         3a5a4:	e20070ff 	and	r7, r0, #255	; 0xff
         3a5a8:	e2846feb 	add	r6, r4, #940	; 0x3ac
         3a5ac:	1a00000a 	bne	3a5dc <TAsyncSerTool::HandleCharIn(unsigned char, unsigned long)+0x58>
         3a5b0:	e1a01007 	mov	r1, r7
         3a5b4:	e1a00004 	mov	r0, r4
         3a5b8:	e5942000 	ldr	r2, [r4]
         3a5bc:	e1a0e00f 	mov	lr, pc
         3a5c0:	e282ff6a 	add	pc, r2, #424	; 0x1a8
         3a5c4:	e3300000 	teq	r0, #0	; 0x0
         3a5c8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         3a5cc:	e1a00006 	mov	r0, r6
         3a5d0:	e1a01007 	mov	r1, r7
         3a5d4:	eb6f37a4 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         3a5d8:	ea000003 	b	3a5ec <TAsyncSerTool::HandleCharIn(unsigned char, unsigned long)+0x68>
         3a5dc:	e1a00006 	mov	r0, r6
         3a5e0:	e1a02005 	mov	r2, r5
         3a5e4:	e1a01007 	mov	r1, r7
         3a5e8:	eb6f37a0 	bl	1c08470 <TCircleBuf::$PutNextByte(unsigned char, unsigned long)>
         3a5ec:	e3300003 	teq	r0, #3	; 0x3
         3a5f0:	1a000003 	bne	3a604 <TAsyncSerTool::HandleCharIn(unsigned char, unsigned long)+0x80>
         3a5f4:	e2855c01 	add	r5, r5, #256	; 0x100
         3a5f8:	e1a00006 	mov	r0, r6
         3a5fc:	e3a01c01 	mov	r1, #256	; 0x100
         3a600:	eb6f3798 	bl	1c08468 <TCircleBuf::$PutEOM(unsigned long)>
         3a604:	e3350000 	teq	r5, #0	; 0x0
         3a608:	11a01005 	movne	r1, r5
         3a60c:	11a00004 	movne	r0, r4
         3a610:	1bfffb34 	blne	392e8 <TAsyncSerTool::UpdateStats(unsigned long)>
         3a614:	e5d40416 	ldrb	r0, [r4, #1046]	; fField1046
         3a618:	e3300000 	teq	r0, #0	; 0x0
         3a61c:	05d40417 	ldreqb	r0, [r4, #1047]	; fField1047
         3a620:	03300000 	teqeq	r0, #0	; 0x0
         3a624:	11a00004 	movne	r0, r4
         3a628:	1b679253 	blne	1a1ef7c <TAsyncSerTool::$DoInputFlowControl(void)>
         3a62c:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
         3a630:	e3100101 	tst	r0, #1073741824	; 0x40000000
         3a634:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         3a638:	e5940494 	ldr	r0, [r4, #1172]	; fField1172
         3a63c:	e3100101 	tst	r0, #1073741824	; 0x40000000
         3a640:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         3a644:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
         3a648:	e5840494 	str	r0, [r4, #1172]	; fField1172
         3a64c:	e5941488 	ldr	r1, [r4, #1160]	; fField1160
         3a650:	e1a00004 	mov	r0, r4
         3a654:	e5942000 	ldr	r2, [r4]
         3a658:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         3a65c:	e282fd06 	add	pc, r2, #384	; 0x180
    */
}

/**
 * Symbol: TAsyncSerTool::GetSizeOf(void)
 * Address: 0003a660
 */
TAsyncSerTool::GetSizeOf(void) {
    /*
         3a660:	e3a00e4b 	mov	r0, #1200	; 0x4b0
         3a664:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncSerTool::DoInputFlowControl(void)
 * Address: 0003a668
 */
TAsyncSerTool::DoInputFlowControl(void) {
    /*
         3a668:	e1a0c00d 	mov	ip, sp
         3a66c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3a670:	e24cb004 	sub	fp, ip, #4	; 0x4
         3a674:	e1a04000 	mov	r4, r0
         3a678:	e5d00416 	ldrb	r0, [r0, #1046]	; fField1046
         3a67c:	e3300000 	teq	r0, #0	; 0x0
         3a680:	05d40417 	ldreqb	r0, [r4, #1047]	; fField1047
         3a684:	03300000 	teqeq	r0, #0	; 0x0
         3a688:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         3a68c:	e2840feb 	add	r0, r4, #940	; 0x3ac
         3a690:	eb6f2f25 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
         3a694:	e594148c 	ldr	r1, [r4, #1164]	; fField1164
         3a698:	e1510000 	cmp	r1, r0
         3a69c:	291ba830 	ldmcsdb	fp, {r4, r5, fp, sp, pc}
         3a6a0:	e5d40417 	ldrb	r0, [r4, #1047]	; fField1047
         3a6a4:	e3a05001 	mov	r5, #1	; 0x1
         3a6a8:	e3300000 	teq	r0, #0	; 0x0
         3a6ac:	0a000006 	beq	3a6cc <TAsyncSerTool::DoInputFlowControl(void)+0x64>
         3a6b0:	e5d40418 	ldrb	r0, [r4, #1048]	; fField1048
         3a6b4:	e3300000 	teq	r0, #0	; 0x0
         3a6b8:	1a000003 	bne	3a6cc <TAsyncSerTool::DoInputFlowControl(void)+0x64>
         3a6bc:	e1a00004 	mov	r0, r4
         3a6c0:	e3a01000 	mov	r1, #0	; 0x0
         3a6c4:	eb677d77 	bl	1a19ca8 <TSerTool::$SetHSKo(unsigned char)>
         3a6c8:	e5c45418 	strb	r5, [r4, #1048]	; fField1048
         3a6cc:	e5d40416 	ldrb	r0, [r4, #1046]	; fField1046
         3a6d0:	e3300000 	teq	r0, #0	; 0x0
         3a6d4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         3a6d8:	e5d40419 	ldrb	r0, [r4, #1049]	; fField1049
         3a6dc:	e3300000 	teq	r0, #0	; 0x0
         3a6e0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         3a6e4:	e5c45419 	strb	r5, [r4, #1049]	; fField1049
         3a6e8:	e5d41381 	ldrb	r1, [r4, #897]	; fField897
         3a6ec:	e5d40415 	ldrb	r0, [r4, #1045]	; fField1045
         3a6f0:	e1310000 	teq	r1, r0
         3a6f4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         3a6f8:	e5c40381 	strb	r0, [r4, #897]	; fField897
         3a6fc:	e1a00004 	mov	r0, r4
         3a700:	eb67cbf9 	bl	1a2d6ec <TAsyncSerTool::$SuspendTxDMA(void)>
         3a704:	e1a00004 	mov	r0, r4
         3a708:	e3a01000 	mov	r1, #0	; 0x0
         3a70c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         3a710:	ea67500e 	b	1a0e750 <TAsyncSerTool::$ContinueOutputIH(unsigned char)>
    */
}

/**
 * Symbol: TAsyncSerTool::TxBEmptyInt(void)
 * Address: 0003a714
 */
TAsyncSerTool::TxBEmptyInt(void) {
    /*
         3a714:	e1a0c00d 	mov	ip, sp
         3a718:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3a71c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3a720:	e1a04000 	mov	r4, r0
         3a724:	e24dd004 	sub	sp, sp, #4	; 0x4
         3a728:	e5900304 	ldr	r0, [r0, #772]	; fField772
         3a72c:	e3300000 	teq	r0, #0	; 0x0
         3a730:	0a000022 	beq	3a7c0 <TAsyncSerTool::TxBEmptyInt(void)+0xac>
         3a734:	e59413f0 	ldr	r1, [r4, #1008]	; fField1008
         3a738:	e3310000 	teq	r1, #0	; 0x0
         3a73c:	0a000004 	beq	3a754 <TAsyncSerTool::TxBEmptyInt(void)+0x40>
         3a740:	eb0d290c 	bl	384b78 <TSerialChip::ResetTxBEmpty(void)>
         3a744:	e1a00004 	mov	r0, r4
         3a748:	e3a01001 	mov	r1, #1	; 0x1
         3a74c:	eb674fff 	bl	1a0e750 <TAsyncSerTool::$ContinueOutputIH(unsigned char)>
         3a750:	ea00001a 	b	3a7c0 <TAsyncSerTool::TxBEmptyInt(void)+0xac>
         3a754:	e1a0100d 	mov	r1, sp
         3a758:	e1a00004 	mov	r0, r4
         3a75c:	eb679612 	bl	1a1ffac <TAsyncSerTool::$GetNextOutChar(unsigned char *)>
         3a760:	e3300000 	teq	r0, #0	; 0x0
         3a764:	0a000013 	beq	3a7b8 <TAsyncSerTool::TxBEmptyInt(void)+0xa4>
         3a768:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a76c:	e5dd1000 	ldrb	r1, [sp]
         3a770:	eb0d28fd 	bl	384b6c <TSerialChip::PutByte(unsigned char)>
         3a774:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a778:	eb0d2904 	bl	384b90 <TSerialChip::TxBufEmpty(void)>
         3a77c:	e3300000 	teq	r0, #0	; 0x0
         3a780:	0a00000e 	beq	3a7c0 <TAsyncSerTool::TxBEmptyInt(void)+0xac>
         3a784:	e1a0100d 	mov	r1, sp
         3a788:	e1a00004 	mov	r0, r4
         3a78c:	eb679605 	bl	1a1ffa8 <TAsyncSerTool::$GetMoreOutChars(unsigned char *)>
         3a790:	e3300000 	teq	r0, #0	; 0x0
         3a794:	0a000009 	beq	3a7c0 <TAsyncSerTool::TxBEmptyInt(void)+0xac>
         3a798:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a79c:	e5dd1000 	ldrb	r1, [sp]
         3a7a0:	eb0d28f1 	bl	384b6c <TSerialChip::PutByte(unsigned char)>
         3a7a4:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a7a8:	eb0d28f8 	bl	384b90 <TSerialChip::TxBufEmpty(void)>
         3a7ac:	e3300000 	teq	r0, #0	; 0x0
         3a7b0:	1afffff3 	bne	3a784 <TAsyncSerTool::TxBEmptyInt(void)+0x70>
         3a7b4:	ea000001 	b	3a7c0 <TAsyncSerTool::TxBEmptyInt(void)+0xac>
         3a7b8:	e5b40304 	ldr	r0, [r4, #772]!	; fField772
         3a7bc:	eb0d28ed 	bl	384b78 <TSerialChip::ResetTxBEmpty(void)>
         3a7c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::TxDMAInterrupt(void)
 * Address: 0003a7c4
 */
TAsyncSerTool::TxDMAInterrupt(void) {
    /*
         3a7c4:	e1a0c00d 	mov	ip, sp
         3a7c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3a7cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         3a7d0:	e1a04000 	mov	r4, r0
         3a7d4:	e3a00001 	mov	r0, #1	; 0x1
         3a7d8:	e58403f0 	str	r0, [r4, #1008]	; fField1008
         3a7dc:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a7e0:	e3300000 	teq	r0, #0	; 0x0
         3a7e4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         3a7e8:	e5940454 	ldr	r0, [r4, #1108]	; fField1108
         3a7ec:	e3300000 	teq	r0, #0	; 0x0
         3a7f0:	0a000005 	beq	3a80c <TAsyncSerTool::TxDMAInterrupt(void)+0x48>
         3a7f4:	e2400001 	sub	r0, r0, #1	; 0x1
         3a7f8:	e5840454 	str	r0, [r4, #1108]	; fField1108
         3a7fc:	e2840fe1 	add	r0, r4, #900	; 0x384
         3a800:	eb6f371b 	bl	1c08474 <TCircleBuf::$ResetStart(void)>
         3a804:	e1a00004 	mov	r0, r4
         3a808:	eb6753e6 	bl	1a0f7a8 <TAsyncSerTool::$DoBreakFraming(void)>
         3a80c:	e1a00004 	mov	r0, r4
         3a810:	e3a01001 	mov	r1, #1	; 0x1
         3a814:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         3a818:	ea674fcc 	b	1a0e750 <TAsyncSerTool::$ContinueOutputIH(unsigned char)>
    */
}

/**
 * Symbol: TAsyncSerTool::ExtStatusInt(void)
 * Address: 0003a81c
 */
TAsyncSerTool::ExtStatusInt(void) {
    /*
         3a81c:	e1a0c00d 	mov	ip, sp
         3a820:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         3a824:	e24cb004 	sub	fp, ip, #4	; 0x4
         3a828:	e1a04000 	mov	r4, r0
         3a82c:	e3a05000 	mov	r5, #0	; 0x0
         3a830:	e5909494 	ldr	r9, [r0, #1172]	; fField1172
         3a834:	e5900304 	ldr	r0, [r0, #772]	; fField772
         3a838:	e3300000 	teq	r0, #0	; 0x0
         3a83c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         3a840:	eb0d28db 	bl	384bb4 <TSerialChip::GetSerialStatus(void)>
         3a844:	e594130c 	ldr	r1, [r4, #780]	; fField780
         3a848:	e3110002 	tst	r1, #2	; 0x2
         3a84c:	02200020 	eoreq	r0, r0, #32	; 0x20
         3a850:	03c00012 	biceq	r0, r0, #18	; 0x12
         3a854:	e3a08000 	mov	r8, #0	; 0x0
         3a858:	e3300c01 	teq	r0, #256	; 0x100
         3a85c:	1a000009 	bne	3a888 <TAsyncSerTool::ExtStatusInt(void)+0x6c>
         3a860:	e5848304 	str	r8, [r4, #772]	; fField772
         3a864:	e584830c 	str	r8, [r4, #780]	; fField780
         3a868:	e5940494 	ldr	r0, [r4, #1172]	; fField1172
         3a86c:	e3800201 	orr	r0, r0, #268435456	; 0x10000000
         3a870:	e5840494 	str	r0, [r4, #1172]	; fField1172
         3a874:	e1a00004 	mov	r0, r4
         3a878:	e3a01000 	mov	r1, #0	; 0x0
         3a87c:	e5942000 	ldr	r2, [r4]
         3a880:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         3a884:	e282fd06 	add	pc, r2, #384	; 0x180
         3a888:	e20060ff 	and	r6, r0, #255	; 0xff
         3a88c:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a890:	eb0d28ca 	bl	384bc0 <TSerialChip::ResetSerialStatus(void)>
         3a894:	e5d4037c 	ldrb	r0, [r4, #892]	; fField892
         3a898:	e0200006 	eor	r0, r0, r6
         3a89c:	e20070ff 	and	r7, r0, #255	; 0xff
         3a8a0:	e5c4637c 	strb	r6, [r4, #892]	; fField892
         3a8a4:	e3170020 	tst	r7, #32	; 0x20
         3a8a8:	0a00002d 	beq	3a964 <TAsyncSerTool::ExtStatusInt(void)+0x148>
         3a8ac:	e5d40403 	ldrb	r0, [r4, #1027]	; fField1027
         3a8b0:	e3300000 	teq	r0, #0	; 0x0
         3a8b4:	0a00000a 	beq	3a8e4 <TAsyncSerTool::ExtStatusInt(void)+0xc8>
         3a8b8:	e3160020 	tst	r6, #32	; 0x20
         3a8bc:	13a00000 	movne	r0, #0	; 0x0
         3a8c0:	03a00001 	moveq	r0, #1	; 0x1
         3a8c4:	e5c40404 	strb	r0, [r4, #1028]	; fField1028
         3a8c8:	e31000ff 	tst	r0, #255	; 0xff
         3a8cc:	e1a00004 	mov	r0, r4
         3a8d0:	1a000002 	bne	3a8e0 <TAsyncSerTool::ExtStatusInt(void)+0xc4>
         3a8d4:	e3a01001 	mov	r1, #1	; 0x1
         3a8d8:	eb674f9c 	bl	1a0e750 <TAsyncSerTool::$ContinueOutputIH(unsigned char)>
         3a8dc:	ea000000 	b	3a8e4 <TAsyncSerTool::ExtStatusInt(void)+0xc8>
         3a8e0:	eb67cb81 	bl	1a2d6ec <TAsyncSerTool::$SuspendTxDMA(void)>
         3a8e4:	e594049c 	ldr	r0, [r4, #1180]	; fField1180
         3a8e8:	e2800001 	add	r0, r0, #1	; 0x1
         3a8ec:	e584049c 	str	r0, [r4, #1180]	; fField1180
         3a8f0:	e59414a0 	ldr	r1, [r4, #1184]	; fField1184
         3a8f4:	e1500001 	cmp	r0, r1
         3a8f8:	9a000016 	bls	3a958 <TAsyncSerTool::ExtStatusInt(void)+0x13c>
         3a8fc:	e594030c 	ldr	r0, [r4, #780]	; fField780
         3a900:	e3100010 	tst	r0, #16	; 0x10
         3a904:	0a000013 	beq	3a958 <TAsyncSerTool::ExtStatusInt(void)+0x13c>
         3a908:	e584849c 	str	r8, [r4, #1180]	; fField1180
         3a90c:	e24dd008 	sub	sp, sp, #8	; 0x8
         3a910:	e1a0000d 	mov	r0, sp
         3a914:	eb6e642f 	bl	1bd39d8 <$GetGlobalTime>
         3a918:	e28410a8 	add	r1, r4, #168	; 0xa8
         3a91c:	e2811b01 	add	r1, r1, #1024	; 0x400
         3a920:	e1a0a001 	mov	sl, r1
         3a924:	e1a0000d 	mov	r0, sp
         3a928:	eb6e99d6 	bl	1be1088 <$CompCompare>
         3a92c:	e3500000 	cmp	r0, #0	; 0x0
         3a930:	aa000004 	bge	3a948 <TAsyncSerTool::ExtStatusInt(void)+0x12c>
         3a934:	e3a02000 	mov	r2, #0	; 0x0
         3a938:	e3a01008 	mov	r1, #8	; 0x8
         3a93c:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3a940:	eb0d28e0 	bl	384cc8 <TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)>
         3a944:	e3a05040 	mov	r5, #64	; 0x40
         3a948:	e1a0000a 	mov	r0, sl
         3a94c:	e59414a4 	ldr	r1, [r4, #1188]	; fField1188
         3a950:	eb6e8d4e 	bl	1bdde90 <$TimeFromNow>
         3a954:	e28dd008 	add	sp, sp, #8	; 0x8
         3a958:	e3160020 	tst	r6, #32	; 0x20
         3a95c:	03855010 	orreq	r5, r5, #16	; 0x10
         3a960:	13855020 	orrne	r5, r5, #32	; 0x20
         3a964:	e3170008 	tst	r7, #8	; 0x8
         3a968:	0a000018 	beq	3a9d0 <TAsyncSerTool::ExtStatusInt(void)+0x1b4>
         3a96c:	e3160008 	tst	r6, #8	; 0x8
         3a970:	1a00000d 	bne	3a9ac <TAsyncSerTool::ExtStatusInt(void)+0x190>
         3a974:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
         3a978:	e3100004 	tst	r0, #4	; 0x4
         3a97c:	0a000013 	beq	3a9d0 <TAsyncSerTool::ExtStatusInt(void)+0x1b4>
         3a980:	e5940468 	ldr	r0, [r4, #1128]	; fField1128
         3a984:	e3300000 	teq	r0, #0	; 0x0
         3a988:	03855004 	orreq	r5, r5, #4	; 0x4
         3a98c:	0a00000f 	beq	3a9d0 <TAsyncSerTool::ExtStatusInt(void)+0x1b4>
         3a990:	eb0d607e 	bl	392b90 <EnterFIQAtomic>
         3a994:	e3a03000 	mov	r3, #0	; 0x0
         3a998:	e5940330 	ldr	r0, [r4, #816]	; fField816
         3a99c:	e594146c 	ldr	r1, [r4, #1132]	; fField1132
         3a9a0:	e5942468 	ldr	r2, [r4, #1128]	; fField1128
         3a9a4:	eb677cbc 	bl	1a19c9c <TFIQTimer::$SetFIQTimer(FIQTimer *, unsigned long, unsigned long)>
         3a9a8:	ea000007 	b	3a9cc <TAsyncSerTool::ExtStatusInt(void)+0x1b0>
         3a9ac:	e3855008 	orr	r5, r5, #8	; 0x8
         3a9b0:	e5940468 	ldr	r0, [r4, #1128]	; fField1128
         3a9b4:	e3300000 	teq	r0, #0	; 0x0
         3a9b8:	0a000004 	beq	3a9d0 <TAsyncSerTool::ExtStatusInt(void)+0x1b4>
         3a9bc:	eb0d6073 	bl	392b90 <EnterFIQAtomic>
         3a9c0:	e5940330 	ldr	r0, [r4, #816]	; fField816
         3a9c4:	e594146c 	ldr	r1, [r4, #1132]	; fField1132
         3a9c8:	eb677893 	bl	1a18c1c <TFIQTimer::$ResetFIQTimer(FIQTimer *)>
         3a9cc:	eb0d6077 	bl	392bb0 <ExitFIQAtomic>
         3a9d0:	e3170002 	tst	r7, #2	; 0x2
         3a9d4:	0a000002 	beq	3a9e4 <TAsyncSerTool::ExtStatusInt(void)+0x1c8>
         3a9d8:	e3160c02 	tst	r6, #512	; 0x200
         3a9dc:	03855c01 	orreq	r5, r5, #256	; 0x100
         3a9e0:	13855c02 	orrne	r5, r5, #512	; 0x200
         3a9e4:	e3170b02 	tst	r7, #2048	; 0x800
         3a9e8:	0a000002 	beq	3a9f8 <TAsyncSerTool::ExtStatusInt(void)+0x1dc>
         3a9ec:	e3160b02 	tst	r6, #2048	; 0x800
         3a9f0:	03855b01 	orreq	r5, r5, #1024	; 0x400
         3a9f4:	13855b02 	orrne	r5, r5, #2048	; 0x800
         3a9f8:	e3170080 	tst	r7, #128	; 0x80
         3a9fc:	0a000002 	beq	3aa0c <TAsyncSerTool::ExtStatusInt(void)+0x1f0>
         3aa00:	e3160080 	tst	r6, #128	; 0x80
         3aa04:	13855001 	orrne	r5, r5, #1	; 0x1
         3aa08:	03855002 	orreq	r5, r5, #2	; 0x2
         3aa0c:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
         3aa10:	e0000005 	and	r0, r0, r5
         3aa14:	e5941494 	ldr	r1, [r4, #1172]	; fField1172
         3aa18:	e1810000 	orr	r0, r1, r0
         3aa1c:	e5840494 	str	r0, [r4, #1172]	; fField1172
         3aa20:	e1300009 	teq	r0, r9
         3aa24:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         3aa28:	e24dd008 	sub	sp, sp, #8	; 0x8
         3aa2c:	e58d8004 	str	r8, [sp, #4]
         3aa30:	e2840fb1 	add	r0, r4, #708	; 0x2c4
         3aa34:	e1a05000 	mov	r5, r0
         3aa38:	e58d8000 	str	r8, [sp]
         3aa3c:	e1a0100d 	mov	r1, sp
         3aa40:	eb6e9990 	bl	1be1088 <$CompCompare>
         3aa44:	e3300000 	teq	r0, #0	; 0x0
         3aa48:	01a00005 	moveq	r0, r5
         3aa4c:	0b6e63e1 	bleq	1bd39d8 <$GetGlobalTime>
         3aa50:	e1a00004 	mov	r0, r4
         3aa54:	e3a01000 	mov	r1, #0	; 0x0
         3aa58:	e5942000 	ldr	r2, [r4]
         3aa5c:	e1a0e00f 	mov	lr, pc
         3aa60:	e282fd06 	add	pc, r2, #384	; 0x180
         3aa64:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::CarrierTimerInterrupt(unsigned long)
 * Address: 0003aa68
 */
TAsyncSerTool::CarrierTimerInterrupt(unsigned long) {
    /*
         3aa68:	e1a02000 	mov	r2, r0
         3aa6c:	e5900498 	ldr	r0, [r0, #1176]	; fField1176
         3aa70:	e3100004 	tst	r0, #4	; 0x4
         3aa74:	01a0f00e 	moveq	pc, lr
         3aa78:	e5920494 	ldr	r0, [r2, #1172]	; fField1172
         3aa7c:	e3100004 	tst	r0, #4	; 0x4
         3aa80:	11a0f00e 	movne	pc, lr
         3aa84:	e3800004 	orr	r0, r0, #4	; 0x4
         3aa88:	e5820494 	str	r0, [r2, #1172]	; fField1172
         3aa8c:	e1a00002 	mov	r0, r2
         3aa90:	e3a01000 	mov	r1, #0	; 0x0
         3aa94:	e5922000 	ldr	r2, [r2]
         3aa98:	e282fd06 	add	pc, r2, #384	; 0x180
    */
}

/**
 * Symbol: TAsyncSerTool::RxCAvailInt(void)
 * Address: 0003aa9c
 */
TAsyncSerTool::RxCAvailInt(void) {
    /*
         3aa9c:	e1a0c00d 	mov	ip, sp
         3aaa0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3aaa4:	e24cb004 	sub	fp, ip, #4	; 0x4
         3aaa8:	e1a04000 	mov	r4, r0
         3aaac:	e5900304 	ldr	r0, [r0, #772]	; fField772
         3aab0:	e3300000 	teq	r0, #0	; 0x0
         3aab4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         3aab8:	eb0d2831 	bl	384b84 <TSerialChip::GetByte(void)>
         3aabc:	e1a01000 	mov	r1, r0
         3aac0:	e1a00004 	mov	r0, r4
         3aac4:	e3a02000 	mov	r2, #0	; 0x0
         3aac8:	eb675f8d 	bl	1a12904 <TAsyncSerTool::$HandleCharIn(unsigned char, unsigned long)>
         3aacc:	e594030c 	ldr	r0, [r4, #780]	; fField780
         3aad0:	e3100c01 	tst	r0, #256	; 0x100
         3aad4:	11a00004 	movne	r0, r4
         3aad8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         3aadc:	1a67952d 	bne	1a1ff98 <TAsyncSerTool::$EmptyInFIFO(void)>
         3aae0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::RxCSpecialInt(void)
 * Address: 0003aae4
 */
TAsyncSerTool::RxCSpecialInt(void) {
    /*
         3aae4:	e1a0c00d 	mov	ip, sp
         3aae8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3aaec:	e24cb004 	sub	fp, ip, #4	; 0x4
         3aaf0:	e1a04000 	mov	r4, r0
         3aaf4:	e24dd004 	sub	sp, sp, #4	; 0x4
         3aaf8:	e5900304 	ldr	r0, [r0, #772]	; fField772
         3aafc:	e3300000 	teq	r0, #0	; 0x0
         3ab00:	0a00000d 	beq	3ab3c <TAsyncSerTool::RxCSpecialInt(void)+0x58>
         3ab04:	e594130c 	ldr	r1, [r4, #780]	; fField780
         3ab08:	e3110c01 	tst	r1, #256	; 0x100
         3ab0c:	0a000002 	beq	3ab1c <TAsyncSerTool::RxCSpecialInt(void)+0x38>
         3ab10:	e1a0100d 	mov	r1, sp
         3ab14:	eb0d2868 	bl	384cbc <TSerialChip::GetByteAndStatus(unsigned char *)>
         3ab18:	ea000003 	b	3ab2c <TAsyncSerTool::RxCSpecialInt(void)+0x48>
         3ab1c:	eb0d2818 	bl	384b84 <TSerialChip::GetByte(void)>
         3ab20:	e5cd0000 	strb	r0, [sp]
         3ab24:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3ab28:	eb0d281e 	bl	384ba8 <TSerialChip::GetRxErrorStatus(void)>
         3ab2c:	e20020ff 	and	r2, r0, #255	; 0xff
         3ab30:	e5dd1000 	ldrb	r1, [sp]
         3ab34:	e1a00004 	mov	r0, r4
         3ab38:	eb675f71 	bl	1a12904 <TAsyncSerTool::$HandleCharIn(unsigned char, unsigned long)>
         3ab3c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::EmptyInFIFO(void)
 * Address: 0003ab40
 */
TAsyncSerTool::EmptyInFIFO(void) {
    /*
         3ab40:	e1a0c00d 	mov	ip, sp
         3ab44:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3ab48:	e24cb004 	sub	fp, ip, #4	; 0x4
         3ab4c:	e1a04000 	mov	r4, r0
         3ab50:	e24dd004 	sub	sp, sp, #4	; 0x4
         3ab54:	e5900304 	ldr	r0, [r0, #772]	; fField772
         3ab58:	eb0d280f 	bl	384b9c <TSerialChip::RxBufFull(void)>
         3ab5c:	e3300000 	teq	r0, #0	; 0x0
         3ab60:	0a00000a 	beq	3ab90 <TAsyncSerTool::EmptyInFIFO(void)+0x50>
         3ab64:	e1a0100d 	mov	r1, sp
         3ab68:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3ab6c:	eb0d2852 	bl	384cbc <TSerialChip::GetByteAndStatus(unsigned char *)>
         3ab70:	e1a02000 	mov	r2, r0
         3ab74:	e5dd1000 	ldrb	r1, [sp]
         3ab78:	e1a00004 	mov	r0, r4
         3ab7c:	eb675f60 	bl	1a12904 <TAsyncSerTool::$HandleCharIn(unsigned char, unsigned long)>
         3ab80:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3ab84:	eb0d2804 	bl	384b9c <TSerialChip::RxBufFull(void)>
         3ab88:	e3300000 	teq	r0, #0	; 0x0
         3ab8c:	1afffff4 	bne	3ab64 <TAsyncSerTool::EmptyInFIFO(void)+0x24>
         3ab90:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::GetChannelIntHandlers(SCCChannelInts *)
 * Address: 0003ab94
 */
TAsyncSerTool::GetChannelIntHandlers(SCCChannelInts *) {
    /*
         3ab94:	e59f001c 	ldr	r0, [pc, #1c]	; 3abb8 <TAsyncSerTool::GetChannelIntHandlers(SCCChannelInts *)+0x24>
         3ab98:	e5810000 	str	r0, [r1]
         3ab9c:	e59f0018 	ldr	r0, [pc, #18]	; 3abbc <TAsyncSerTool::GetChannelIntHandlers(SCCChannelInts *)+0x28>
         3aba0:	e5810004 	str	r0, [r1, #4]
         3aba4:	e59f0014 	ldr	r0, [pc, #14]	; 3abc0 <TAsyncSerTool::GetChannelIntHandlers(SCCChannelInts *)+0x2c>
         3aba8:	e5810008 	str	r0, [r1, #8]
         3abac:	e59f0010 	ldr	r0, [pc, #10]	; 3abc4 <TAsyncSerTool::GetChannelIntHandlers(SCCChannelInts *)+0x30>
         3abb0:	e5a1000c 	str	r0, [r1, #12]!
         3abb4:	e1a0f00e 	mov	pc, lr
         3abb8:	01a1bdcc 	moveq	fp, ip, asr #27
         3abbc:	01a1082c 	moveq	r0, ip, lsr #16
         3abc0:	01a18c50 	moveq	r8, r0, asr ip
         3abc4:	01a18c54 	moveq	r8, r4, asr ip
    */
}

/**
 * Symbol: TAsyncSerTool::RxMultiByteInterrupt(unsigned long)
 * Address: 0003abc8
 */
TAsyncSerTool::RxMultiByteInterrupt(unsigned long) {
    /*
         3abc8:	e1a0c00d 	mov	ip, sp
         3abcc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3abd0:	e24cb004 	sub	fp, ip, #4	; 0x4
         3abd4:	e1a04000 	mov	r4, r0
         3abd8:	e3310000 	teq	r1, #0	; 0x0
         3abdc:	11a00004 	movne	r0, r4
         3abe0:	1bfff9c0 	blne	392e8 <TAsyncSerTool::UpdateStats(unsigned long)>
         3abe4:	e5d40416 	ldrb	r0, [r4, #1046]	; fField1046
         3abe8:	e3300000 	teq	r0, #0	; 0x0
         3abec:	05d40417 	ldreqb	r0, [r4, #1047]	; fField1047
         3abf0:	03300000 	teqeq	r0, #0	; 0x0
         3abf4:	11a00004 	movne	r0, r4
         3abf8:	1b6790df 	blne	1a1ef7c <TAsyncSerTool::$DoInputFlowControl(void)>
         3abfc:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
         3ac00:	e3100101 	tst	r0, #1073741824	; 0x40000000
         3ac04:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         3ac08:	e5940494 	ldr	r0, [r4, #1172]	; fField1172
         3ac0c:	e3100101 	tst	r0, #1073741824	; 0x40000000
         3ac10:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         3ac14:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
         3ac18:	e5840494 	str	r0, [r4, #1172]	; fField1172
         3ac1c:	e5941488 	ldr	r1, [r4, #1160]	; fField1160
         3ac20:	e1a00004 	mov	r0, r4
         3ac24:	e5942000 	ldr	r2, [r4]
         3ac28:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         3ac2c:	e282fd06 	add	pc, r2, #384	; 0x180
    */
}

/**
 * Symbol: TAsyncSerTool::TurnOnSerChip(void)
 * Address: 0003ac30
 */
TAsyncSerTool::TurnOnSerChip(void) {
    /*
         3ac30:	e1a0c00d 	mov	ip, sp
         3ac34:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         3ac38:	e24cb004 	sub	fp, ip, #4	; 0x4
         3ac3c:	e1a04000 	mov	r4, r0
         3ac40:	e3a05000 	mov	r5, #0	; 0x0
         3ac44:	e3a06000 	mov	r6, #0	; 0x0
         3ac48:	e5c0628e 	strb	r6, [r0, #654]	; fField654
         3ac4c:	e2801fd1 	add	r1, r0, #836	; 0x344
         3ac50:	e5902000 	ldr	r2, [r0]
         3ac54:	e1a0e00f 	mov	lr, pc
         3ac58:	e282ff56 	add	pc, r2, #344	; 0x158
         3ac5c:	e52d606c 	str	r6, [sp, -#108]!
         3ac60:	e28d0008 	add	r0, sp, #8	; 0x8
         3ac64:	eb6ddf42 	bl	1bb2974 <$setjmp>
         3ac68:	e3a07001 	mov	r7, #1	; 0x1
         3ac6c:	e3300000 	teq	r0, #0	; 0x0
         3ac70:	1a000010 	bne	3acb8 <TAsyncSerTool::TurnOnSerChip(void)+0x88>
         3ac74:	e1a0000d 	mov	r0, sp
         3ac78:	eb6e94ff 	bl	1be007c <$AddExceptionHandler>
         3ac7c:	e5d40450 	ldrb	r0, [r4, #1104]	; fField1104
         3ac80:	e3300000 	teq	r0, #0	; 0x0
         3ac84:	0a000008 	beq	3acac <TAsyncSerTool::TurnOnSerChip(void)+0x7c>
         3ac88:	e24dd010 	sub	sp, sp, #16	; 0x10
         3ac8c:	e1a0000d 	mov	r0, sp
         3ac90:	eb68a152 	bl	1a631e0 <THMOHiSpeedClockOption::$__ct(void)>
         3ac94:	e594030c 	ldr	r0, [r4, #780]	; fField780
         3ac98:	e3100002 	tst	r0, #2	; 0x2
         3ac9c:	11a0100d 	movne	r1, sp
         3aca0:	15940304 	ldrne	r0, [r4, #772]	; fField772
         3aca4:	1b0d27f8 	blne	384c8c <TSerialChip::ProcessOption(TOption *)>
         3aca8:	e28dd010 	add	sp, sp, #16	; 0x10
         3acac:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3acb0:	eb0d27d1 	bl	384bfc <TSerialChip::PowerOn(void)>
         3acb4:	ea000009 	b	3ace0 <TAsyncSerTool::TurnOnSerChip(void)+0xb0>
         3acb8:	e59d0060 	ldr	r0, [sp, #96]
         3acbc:	e59f1120 	ldr	r1, [pc, #120]	; 3ade4 <TAsyncSerTool::TurnOnSerChip(void)+0x1b4>
         3acc0:	e5911000 	ldr	r1, [r1]
         3acc4:	eb6ea132 	bl	1be3194 <$Subexception>
         3acc8:	e3300000 	teq	r0, #0	; 0x0
         3accc:	13a050b5 	movne	r5, #181	; 0xb5
         3acd0:	12455b0a 	subne	r5, r5, #10240	; 0x2800
         3acd4:	1a000001 	bne	3ace0 <TAsyncSerTool::TurnOnSerChip(void)+0xb0>
         3acd8:	e1a0000d 	mov	r0, sp
         3acdc:	eb6e9d1c 	bl	1be2154 <$NextHandler>
         3ace0:	e1a0000d 	mov	r0, sp
         3ace4:	eb6e98f3 	bl	1be10b8 <$ExitHandler>
         3ace8:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3acec:	e3350000 	teq	r5, #0	; 0x0
         3acf0:	1a000039 	bne	3addc <TAsyncSerTool::TurnOnSerChip(void)+0x1ac>
         3acf4:	eb0d5fa5 	bl	392b90 <EnterFIQAtomic>
         3acf8:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3acfc:	eb0d27d3 	bl	384c50 <TSerialChip::Reconfigure(void)>
         3ad00:	e5d40402 	ldrb	r0, [r4, #1026]	; fField1026
         3ad04:	e3300000 	teq	r0, #0	; 0x0
         3ad08:	059403ec 	ldreq	r0, [r4, #1004]	; fField1004
         3ad0c:	03300001 	teqeq	r0, #1	; 0x1
         3ad10:	1a000004 	bne	3ad28 <TAsyncSerTool::TurnOnSerChip(void)+0xf8>
         3ad14:	e3a01011 	mov	r1, #17	; 0x11
         3ad18:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3ad1c:	eb0d27fb 	bl	384d10 <TSerialChip::RxDMAControl(unsigned char)>
         3ad20:	e3a00002 	mov	r0, #2	; 0x2
         3ad24:	e58403ec 	str	r0, [r4, #1004]	; fField1004
         3ad28:	e59403f0 	ldr	r0, [r4, #1008]	; fField1008
         3ad2c:	e3300000 	teq	r0, #0	; 0x0
         3ad30:	0a000003 	beq	3ad44 <TAsyncSerTool::TurnOnSerChip(void)+0x114>
         3ad34:	e3a02000 	mov	r2, #0	; 0x0
         3ad38:	e3a01080 	mov	r1, #128	; 0x80
         3ad3c:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3ad40:	eb0d27e0 	bl	384cc8 <TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)>
         3ad44:	e1a00004 	mov	r0, r4
         3ad48:	eb674e74 	bl	1a0e720 <TAsyncSerTool::$ConfigureModemInterrupts(void)>
         3ad4c:	e5d40403 	ldrb	r0, [r4, #1027]	; fField1027
         3ad50:	e3300000 	teq	r0, #0	; 0x0
         3ad54:	0a000005 	beq	3ad70 <TAsyncSerTool::TurnOnSerChip(void)+0x140>
         3ad58:	e1a00004 	mov	r0, r4
         3ad5c:	eb675f03 	bl	1a12970 <TAsyncSerTool::$HSKiOn(void)>
         3ad60:	e3300000 	teq	r0, #0	; 0x0
         3ad64:	13a00000 	movne	r0, #0	; 0x0
         3ad68:	03a00001 	moveq	r0, #1	; 0x1
         3ad6c:	e5c40404 	strb	r0, [r4, #1028]	; fField1028
         3ad70:	e5c46405 	strb	r6, [r4, #1029]	; fField1029
         3ad74:	e5d40482 	ldrb	r0, [r4, #1154]	; fField1154
         3ad78:	e3300000 	teq	r0, #0	; 0x0
         3ad7c:	13a00000 	movne	r0, #0	; 0x0
         3ad80:	03a00001 	moveq	r0, #1	; 0x1
         3ad84:	e20060ff 	and	r6, r0, #255	; 0xff
         3ad88:	e5d40483 	ldrb	r0, [r4, #1155]	; fField1155
         3ad8c:	e3300000 	teq	r0, #0	; 0x0
         3ad90:	0a000003 	beq	3ada4 <TAsyncSerTool::TurnOnSerChip(void)+0x174>
         3ad94:	e1a00004 	mov	r0, r4
         3ad98:	eb675ed8 	bl	1a12900 <TAsyncSerTool::$GPiOn(void)>
         3ad9c:	e3300000 	teq	r0, #0	; 0x0
         3ada0:	13a06001 	movne	r6, #1	; 0x1
         3ada4:	e5d40484 	ldrb	r0, [r4, #1156]	; fField1156
         3ada8:	e3300000 	teq	r0, #0	; 0x0
         3adac:	0a000003 	beq	3adc0 <TAsyncSerTool::TurnOnSerChip(void)+0x190>
         3adb0:	e1a00004 	mov	r0, r4
         3adb4:	eb675eed 	bl	1a12970 <TAsyncSerTool::$HSKiOn(void)>
         3adb8:	e3300000 	teq	r0, #0	; 0x0
         3adbc:	1a000001 	bne	3adc8 <TAsyncSerTool::TurnOnSerChip(void)+0x198>
         3adc0:	e3360000 	teq	r6, #0	; 0x0
         3adc4:	0a000002 	beq	3add4 <TAsyncSerTool::TurnOnSerChip(void)+0x1a4>
         3adc8:	e1a00004 	mov	r0, r4
         3adcc:	e3a01001 	mov	r1, #1	; 0x1
         3add0:	eb677bc0 	bl	1a19cd8 <TSerTool::$SetTxDTransceiverEnable(unsigned char)>
         3add4:	e5c4728e 	strb	r7, [r4, #654]	; fField654
         3add8:	eb0d5f74 	bl	392bb0 <ExitFIQAtomic>
         3addc:	e1a00005 	mov	r0, r5
         3ade0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         3ade4:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TAsyncSerTool::SetInputSendForIntDelay(unsigned long)
 * Address: 0003ade8
 */
TAsyncSerTool::SetInputSendForIntDelay(unsigned long) {
    /*
         3ade8:	e5a01488 	str	r1, [r0, #1160]!	; fField1160
         3adec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncSerTool::RestoreInputSendForIntDelay(void)
 * Address: 0003adf0
 */
TAsyncSerTool::RestoreInputSendForIntDelay(void) {
    /*
         3adf0:	e590147c 	ldr	r1, [r0, #1148]	; fField1148
         3adf4:	e5a01488 	str	r1, [r0, #1160]!	; fField1160
         3adf8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncSerTool::TurnOffSerChip(void)
 * Address: 0003adfc
 */
TAsyncSerTool::TurnOffSerChip(void) {
    /*
         3adfc:	e1a0c00d 	mov	ip, sp
         3ae00:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3ae04:	e24cb004 	sub	fp, ip, #4	; 0x4
         3ae08:	e1a04000 	mov	r4, r0
         3ae0c:	e5d0028e 	ldrb	r0, [r0, #654]	; fField654
         3ae10:	e3300000 	teq	r0, #0	; 0x0
         3ae14:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         3ae18:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3ae1c:	e3300000 	teq	r0, #0	; 0x0
         3ae20:	1b0d2772 	blne	384bf0 <TSerialChip::PowerOff(void)>
         3ae24:	e59403ec 	ldr	r0, [r4, #1004]	; fField1004
         3ae28:	e3300002 	teq	r0, #2	; 0x2
         3ae2c:	03a00001 	moveq	r0, #1	; 0x1
         3ae30:	058403ec 	streq	r0, [r4, #1004]	; fField1004
         3ae34:	e3a00000 	mov	r0, #0	; 0x0
         3ae38:	e5c4028e 	strb	r0, [r4, #654]	; fField654
         3ae3c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncSerTool::ConfigureModemInterrupts(void)
 * Address: 0003ae40
 */
TAsyncSerTool::ConfigureModemInterrupts(void) {
    /*
         3ae40:	e1a0c00d 	mov	ip, sp
         3ae44:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3ae48:	e24cb004 	sub	fp, ip, #4	; 0x4
         3ae4c:	e1a04000 	mov	r4, r0
         3ae50:	eb0d5f4e 	bl	392b90 <EnterFIQAtomic>
         3ae54:	e5940464 	ldr	r0, [r4, #1124]	; fField1124
         3ae58:	e210100c 	ands	r1, r0, #12	; 0xc
         3ae5c:	13a01001 	movne	r1, #1	; 0x1
         3ae60:	e20120ff 	and	r2, r1, #255	; 0xff
         3ae64:	e3100070 	tst	r0, #112	; 0x70
         3ae68:	05d40403 	ldreqb	r0, [r4, #1027]	; fField1027
         3ae6c:	03300000 	teqeq	r0, #0	; 0x0
         3ae70:	13a00001 	movne	r0, #1	; 0x1
         3ae74:	03a00000 	moveq	r0, #0	; 0x0
         3ae78:	e20050ff 	and	r5, r0, #255	; 0xff
         3ae7c:	e3a01010 	mov	r1, #16	; 0x10
         3ae80:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3ae84:	eb0d278f 	bl	384cc8 <TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)>
         3ae88:	e1a02005 	mov	r2, r5
         3ae8c:	e3a01008 	mov	r1, #8	; 0x8
         3ae90:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3ae94:	eb0d278b 	bl	384cc8 <TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)>
         3ae98:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3ae9c:	eb0d2744 	bl	384bb4 <TSerialChip::GetSerialStatus(void)>
         3aea0:	e5c4037c 	strb	r0, [r4, #892]	; fField892
         3aea4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         3aea8:	ea0d5f40 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TAsyncSerTool::AllocateBuffers(void)
 * Address: 0003aeac
 */
TAsyncSerTool::AllocateBuffers(void) {
    /*
         3aeac:	e1a0c00d 	mov	ip, sp
         3aeb0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         3aeb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         3aeb8:	e1a04000 	mov	r4, r0
         3aebc:	e3a00000 	mov	r0, #0	; 0x0
         3aec0:	e58403f0 	str	r0, [r4, #1008]	; fField1008
         3aec4:	e594030c 	ldr	r0, [r4, #780]	; fField780
         3aec8:	e3100002 	tst	r0, #2	; 0x2
         3aecc:	0a000005 	beq	3aee8 <TAsyncSerTool::AllocateBuffers(void)+0x3c>
         3aed0:	e5d40292 	ldrb	r0, [r4, #658]	; fField658
         3aed4:	e1b01000 	movs	r1, r0
         3aed8:	13a01004 	movne	r1, #4	; 0x4
         3aedc:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3aee0:	eb0d276c 	bl	384c98 <TSerialChip::SetSerialMode(unsigned long)>
         3aee4:	e1a05000 	mov	r5, r0
         3aee8:	e3350000 	teq	r5, #0	; 0x0
         3aeec:	1a000071 	bne	3b0b8 <TAsyncSerTool::AllocateBuffers(void)+0x20c>
         3aef0:	e3a08001 	mov	r8, #1	; 0x1
         3aef4:	e5c4828c 	strb	r8, [r4, #652]	; fField652
         3aef8:	e5d40481 	ldrb	r0, [r4, #1153]
         3aefc:	e3300000 	teq	r0, #0	; 0x0
         3af00:	1a000005 	bne	3af1c <TAsyncSerTool::AllocateBuffers(void)+0x70>
         3af04:	e594030c 	ldr	r0, [r4, #780]	; fField780
         3af08:	e3100a02 	tst	r0, #8192	; 0x2000
         3af0c:	12000802 	andne	r0, r0, #131072	; 0x20000
         3af10:	13300000 	teqne	r0, #0	; 0x0
         3af14:	13a00001 	movne	r0, #1	; 0x1
         3af18:	1a000000 	bne	3af20 <TAsyncSerTool::AllocateBuffers(void)+0x74>
         3af1c:	e3a00000 	mov	r0, #0	; 0x0
         3af20:	e20090ff 	and	r9, r0, #255	; 0xff
         3af24:	e5d40480 	ldrb	r0, [r4, #1152]
         3af28:	e3300000 	teq	r0, #0	; 0x0
         3af2c:	1a000005 	bne	3af48 <TAsyncSerTool::AllocateBuffers(void)+0x9c>
         3af30:	e594030c 	ldr	r0, [r4, #780]	; fField780
         3af34:	e3100a01 	tst	r0, #4096	; 0x1000
         3af38:	12000801 	andne	r0, r0, #65536	; 0x10000
         3af3c:	13300000 	teqne	r0, #0	; 0x0
         3af40:	13a00001 	movne	r0, #1	; 0x1
         3af44:	1a000000 	bne	3af4c <TAsyncSerTool::AllocateBuffers(void)+0xa0>
         3af48:	e3a00000 	mov	r0, #0	; 0x0
         3af4c:	e31000ff 	tst	r0, #255	; 0xff
         3af50:	e3a03000 	mov	r3, #0	; 0x0
         3af54:	e92d0008 	stmdb	sp!, {r3}
         3af58:	03a03001 	moveq	r3, #1	; 0x1
         3af5c:	13a03002 	movne	r3, #2	; 0x2
         3af60:	e2842ff9 	add	r2, r4, #996	; 0x3e4
         3af64:	e8920006 	ldmia	r2, {r1, r2}
         3af68:	e2840feb 	add	r0, r4, #940	; 0x3ac
         3af6c:	e1a07000 	mov	r7, r0
         3af70:	eb6f2ceb 	bl	1c06324 <TCircleBuf::$Allocate(unsigned long, int, unsigned char, unsigned char)>
         3af74:	e28dd004 	add	sp, sp, #4	; 0x4
         3af78:	e1b05000 	movs	r5, r0
         3af7c:	e2846fe1 	add	r6, r4, #900	; 0x384
         3af80:	1a00000a 	bne	3afb0 <TAsyncSerTool::AllocateBuffers(void)+0x104>
         3af84:	e3a03000 	mov	r3, #0	; 0x0
         3af88:	e92d0008 	stmdb	sp!, {r3}
         3af8c:	e3390000 	teq	r9, #0	; 0x0
         3af90:	03a03001 	moveq	r3, #1	; 0x1
         3af94:	13a03002 	movne	r3, #2	; 0x2
         3af98:	e1a00006 	mov	r0, r6
         3af9c:	e3a02000 	mov	r2, #0	; 0x0
         3afa0:	e59413e0 	ldr	r1, [r4, #992]
         3afa4:	eb6f2cde 	bl	1c06324 <TCircleBuf::$Allocate(unsigned long, int, unsigned char, unsigned char)>
         3afa8:	e28dd004 	add	sp, sp, #4	; 0x4
         3afac:	e1a05000 	mov	r5, r0
         3afb0:	e3550000 	cmp	r5, #0	; 0x0
         3afb4:	1a000015 	bne	3b010 <TAsyncSerTool::AllocateBuffers(void)+0x164>
         3afb8:	e24dd004 	sub	sp, sp, #4	; 0x4
         3afbc:	e3a03000 	mov	r3, #0	; 0x0
         3afc0:	e92d0008 	stmdb	sp!, {r3}
         3afc4:	e1a00007 	mov	r0, r7
         3afc8:	e28d1004 	add	r1, sp, #4	; 0x4
         3afcc:	e3a02000 	mov	r2, #0	; 0x0
         3afd0:	eb6f2cdc 	bl	1c06348 <TCircleBuf::$DMABufInfo(unsigned long *, unsigned long *, unsigned char *, unsigned char *)>
         3afd4:	e5bd2004 	ldr	r2, [sp, #4]!
         3afd8:	e1a03002 	mov	r3, r2
         3afdc:	e1a01122 	mov	r1, r2, lsr #2
         3afe0:	e0420001 	sub	r0, r2, r1
         3afe4:	e0422000 	sub	r2, r2, r0
         3afe8:	e3520c02 	cmp	r2, #512	; 0x200
         3afec:	82430c02 	subhi	r0, r3, #512	; 0x200
         3aff0:	e0402001 	sub	r2, r0, r1
         3aff4:	e3520c02 	cmp	r2, #512	; 0x200
         3aff8:	82401c02 	subhi	r1, r0, #512	; 0x200
         3affc:	e2844e49 	add	r4, r4, #1168	; 0x490
         3b000:	e8040003 	stmda	r4, {r0, r1}
         3b004:	e2444e49 	sub	r4, r4, #1168	; 0x490
         3b008:	e28dd004 	add	sp, sp, #4	; 0x4
         3b00c:	ea000000 	b	3b014 <TAsyncSerTool::AllocateBuffers(void)+0x168>
         3b010:	1a00000e 	bne	3b050 <TAsyncSerTool::AllocateBuffers(void)+0x1a4>
         3b014:	e5d40480 	ldrb	r0, [r4, #1152]
         3b018:	e3300000 	teq	r0, #0	; 0x0
         3b01c:	1a00000c 	bne	3b054 <TAsyncSerTool::AllocateBuffers(void)+0x1a8>
         3b020:	e594030c 	ldr	r0, [r4, #780]	; fField780
         3b024:	e3100a01 	tst	r0, #4096	; 0x1000
         3b028:	0a000009 	beq	3b054 <TAsyncSerTool::AllocateBuffers(void)+0x1a8>
         3b02c:	e1a01007 	mov	r1, r7
         3b030:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3b034:	e5942490 	ldr	r2, [r4, #1168]	; fField1168
         3b038:	e59f300c 	ldr	r3, [pc, #c]	; 3b04c <TAsyncSerTool::AllocateBuffers(void)+0x1a0>
         3b03c:	eb0d272d 	bl	384cf8 <TSerialChip::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long))>
         3b040:	e3300000 	teq	r0, #0	; 0x0
         3b044:	058483ec 	streq	r8, [r4, #1004]	; fField1004
         3b048:	ea000001 	b	3b054 <TAsyncSerTool::AllocateBuffers(void)+0x1a8>
         3b04c:	01a21090 	streqb	r1, [r2, r0]!
         3b050:	1a000009 	bne	3b07c <TAsyncSerTool::AllocateBuffers(void)+0x1d0>
         3b054:	e3390000 	teq	r9, #0	; 0x0
         3b058:	0a000008 	beq	3b080 <TAsyncSerTool::AllocateBuffers(void)+0x1d4>
         3b05c:	e1a01006 	mov	r1, r6
         3b060:	e5940304 	ldr	r0, [r4, #772]	; fField772
         3b064:	e59f200c 	ldr	r2, [pc, #c]	; 3b078 <TAsyncSerTool::AllocateBuffers(void)+0x1cc>
         3b068:	eb0d271f 	bl	384cec <TSerialChip::InitTxDMA(TCircleBuf *, void (*)(void *))>
         3b06c:	e3300000 	teq	r0, #0	; 0x0
         3b070:	058483f0 	streq	r8, [r4, #1008]	; fField1008
         3b074:	ea000001 	b	3b080 <TAsyncSerTool::AllocateBuffers(void)+0x1d4>
         3b078:	01a2d6f0 	streqd	sp, [r2, r0]!
         3b07c:	1a00000d 	bne	3b0b8 <TAsyncSerTool::AllocateBuffers(void)+0x20c>
         3b080:	e594046c 	ldr	r0, [r4, #1132]	; fField1132
         3b084:	e3300000 	teq	r0, #0	; 0x0
         3b088:	1a00000a 	bne	3b0b8 <TAsyncSerTool::AllocateBuffers(void)+0x20c>
         3b08c:	eb0d5ebf 	bl	392b90 <EnterFIQAtomic>
         3b090:	e5940330 	ldr	r0, [r4, #816]	; fField816
         3b094:	e1a02004 	mov	r2, r4
         3b098:	e59f1020 	ldr	r1, [pc, #20]	; 3b0c0 <TAsyncSerTool::AllocateBuffers(void)+0x214>
         3b09c:	eb673d2e 	bl	1a0a55c <TFIQTimer::$AcquireFIQTimer(void (*)(void *, unsigned long), void *)>
         3b0a0:	e584046c 	str	r0, [r4, #1132]	; fField1132
         3b0a4:	eb0d5ec1 	bl	392bb0 <ExitFIQAtomic>
         3b0a8:	e5b4046c 	ldr	r0, [r4, #1132]!	; fField1132
         3b0ac:	e3300000 	teq	r0, #0	; 0x0
         3b0b0:	03a050e9 	moveq	r5, #233	; 0xe9
         3b0b4:	02455b0a 	subeq	r5, r5, #10240	; 0x2800
         3b0b8:	e1a00005 	mov	r0, r5
         3b0bc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         3b0c0:	01a0d6c8 	moveq	sp, r8, asr #13
    */
}

