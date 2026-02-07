#include "include/TIrLAP.h"

/**
 * Symbol: TIrLAP::__ct(void)
 * Address: 000f23dc
 */
TIrLAP::TIrLAP(void) {
    /*
         f23dc:	e1a0c00d 	mov	ip, sp
         f23e0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f23e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f23e8:	e1b04000 	movs	r4, r0
         f23ec:	1a000003 	bne	f2400 <TIrLAP::__ct(void)+0x24>
         f23f0:	e3a00f5f 	mov	r0, #380	; 0x17c
         f23f4:	eb6b70cf 	bl	1bce738 <$__nw(unsigned int)>
         f23f8:	e1b04000 	movs	r4, r0
         f23fc:	0a000019 	beq	f2468 <TIrLAP::__ct(void)+0x8c>
         f2400:	e1a00004 	mov	r0, r4
         f2404:	eb6515f4 	bl	1a37bdc <TIrStream::$__ct(void)>
         f2408:	e28400e4 	add	r0, r4, #228	; 0xe4
         f240c:	eb6bc77c 	bl	1be4204 <CBufferSegment::$__ct(void)>
         f2410:	e2840f4f 	add	r0, r4, #316	; 0x13c
         f2414:	eb000c22 	bl	f54a4 <TIrLAPPutBuffer::__ct(void)>
         f2418:	e59f0050 	ldr	r0, [pc, #50]	; f2470 <TIrLAP::__ct(void)+0x94>
         f241c:	e5840000 	str	r0, [r4]
         f2420:	e3a00000 	mov	r0, #0	; 0x0
         f2424:	e5c40094 	strb	r0, [r4, #148]	; fField148
         f2428:	e5840038 	str	r0, [r4, #56]	; fField56
         f242c:	e5c40050 	strb	r0, [r4, #80]	; fField80
         f2430:	e584003c 	str	r0, [r4, #60]	; fField60
         f2434:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f2438:	e3a0100a 	mov	r1, #10	; 0xa
         f243c:	e5c41080 	strb	r1, [r4, #128]	; fField128
         f2440:	e5840110 	str	r0, [r4, #272]	; fField272
         f2444:	e5840138 	str	r0, [r4, #312]	; fField312
         f2448:	e5c4004c 	strb	r0, [r4, #76]	; fField76
         f244c:	e5c4004e 	strb	r0, [r4, #78]	; fField78
         f2450:	e5c40058 	strb	r0, [r4, #88]	; fField88
         f2454:	e3a01001 	mov	r1, #1	; 0x1
         f2458:	e5c41095 	strb	r1, [r4, #149]	; fField149
         f245c:	e5c4010c 	strb	r0, [r4, #268]	; fField268
         f2460:	e5c4010d 	strb	r0, [r4, #269]	; fField269
         f2464:	e5c40052 	strb	r0, [r4, #82]	; fField82
         f2468:	e1a00004 	mov	r0, r4
         f246c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f2470:	0001f994 	muleq	r1, r4, r9
    */
}

/**
 * Symbol: TIrLAP::__dt(void)
 * Address: 000f3144
 */
TIrLAP::~TIrLAP(void) {
    /*
         f3144:	e1a0c00d 	mov	ip, sp
         f3148:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f314c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f3150:	e1a04000 	mov	r4, r0
         f3154:	e1a05001 	mov	r5, r1
         f3158:	e59f0040 	ldr	r0, [pc, #40]	; f31a0 <TIrLAP::__dt(void)+0x5c>
         f315c:	e5840000 	str	r0, [r4]
         f3160:	e1a00004 	mov	r0, r4
         f3164:	eb650635 	bl	1a34a40 <TIrLAP::$DeInit(void)>
         f3168:	e2840f4f 	add	r0, r4, #316	; 0x13c
         f316c:	e3a01000 	mov	r1, #0	; 0x0
         f3170:	eb0008db 	bl	f54e4 <TIrLAPPutBuffer::__dt(void)>
         f3174:	e28400e4 	add	r0, r4, #228	; 0xe4
         f3178:	e3a01000 	mov	r1, #0	; 0x0
         f317c:	eb6bc43a 	bl	1be426c <CBufferSegment::$__dt(void)>
         f3180:	e1a00004 	mov	r0, r4
         f3184:	e3a01000 	mov	r1, #0	; 0x0
         f3188:	eb651294 	bl	1a37be0 <TIrStream::$__dt(void)>
         f318c:	e3150001 	tst	r5, #1	; 0x1
         f3190:	11a00004 	movne	r0, r4
         f3194:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         f3198:	1a6b6950 	bne	1bcd6e0 <$__dl(void *)>
         f319c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f31a0:	0001f994 	muleq	r1, r4, r9
    */
}

/**
 * Symbol: TIrLAP::HandleListenStateEvent(unsigned long)
 * Address: 000f31a4
 */
TIrLAP::HandleListenStateEvent(unsigned long) {
    /*
         f31a4:	e1a0c00d 	mov	ip, sp
         f31a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f31ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         f31b0:	e1a04000 	mov	r4, r0
         f31b4:	e3310001 	teq	r1, #1	; 0x1
         f31b8:	0a00004a 	beq	f32e8 <TIrLAP::HandleListenStateEvent(unsigned long)+0x144>
         f31bc:	e3310002 	teq	r1, #2	; 0x2
         f31c0:	0a00000a 	beq	f31f0 <TIrLAP::HandleListenStateEvent(unsigned long)+0x4c>
         f31c4:	e3310017 	teq	r1, #23	; 0x17
         f31c8:	01a00004 	moveq	r0, r4
         f31cc:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         f31d0:	0a0000dc 	beq	f3548 <TIrLAP::HandleNDMDisconnectRequest(void)>
         f31d4:	e3310023 	teq	r1, #35	; 0x23
         f31d8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         f31dc:	e1a00004 	mov	r0, r4
         f31e0:	eb650608 	bl	1a34a08 <TIrLAP::$ApplyDefaultConnParms(void)>
         f31e4:	e3a00000 	mov	r0, #0	; 0x0
         f31e8:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f31ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f31f0:	e3a05001 	mov	r5, #1	; 0x1
         f31f4:	e1a00004 	mov	r0, r4
         f31f8:	e3a01083 	mov	r1, #131	; 0x83
         f31fc:	eb00079a 	bl	f506c <TIrLAP::RecdPollCmd(unsigned char)>
         f3200:	e3300000 	teq	r0, #0	; 0x0
         f3204:	0a000025 	beq	f32a0 <TIrLAP::HandleListenStateEvent(unsigned long)+0xfc>
         f3208:	e24dd010 	sub	sp, sp, #16	; 0x10
         f320c:	e28d1004 	add	r1, sp, #4	; 0x4
         f3210:	e1a00004 	mov	r0, r4
         f3214:	e3a02009 	mov	r2, #9	; 0x9
         f3218:	eb00077a 	bl	f5008 <TIrLAP::GotData(unsigned char *, unsigned long)>
         f321c:	e3300000 	teq	r0, #0	; 0x0
         f3220:	0a000017 	beq	f3284 <TIrLAP::HandleListenStateEvent(unsigned long)+0xe0>
         f3224:	e59d0008 	ldr	r0, [sp, #8]
         f3228:	e5941020 	ldr	r1, [r4, #32]	; fField32
         f322c:	e1300001 	teq	r0, r1
         f3230:	1a000013 	bne	f3284 <TIrLAP::HandleListenStateEvent(unsigned long)+0xe0>
         f3234:	e5dd000c 	ldrb	r0, [sp, #12]	; fField12
         f3238:	e1a000a0 	mov	r0, r0, lsr #1
         f323c:	e20000ff 	and	r0, r0, #255	; 0xff
         f3240:	e3500000 	cmp	r0, #0	; 0x0
         f3244:	da00000e 	ble	f3284 <TIrLAP::HandleListenStateEvent(unsigned long)+0xe0>
         f3248:	e350007f 	cmp	r0, #127	; 0x7f
         f324c:	aa00000c 	bge	f3284 <TIrLAP::HandleListenStateEvent(unsigned long)+0xe0>
         f3250:	e3a01003 	mov	r1, #3	; 0x3
         f3254:	e5c4101c 	strb	r1, [r4, #28]	; fField28
         f3258:	e5c4001d 	strb	r0, [r4, #29]	; fField29
         f325c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         f3260:	e5840034 	str	r0, [r4, #52]	; fField52
         f3264:	e1a00004 	mov	r0, r4
         f3268:	e3a01000 	mov	r1, #0	; 0x0
         f326c:	eb6501dd 	bl	1a339e8 <TIrLAP::$ParseNegotiateAndInitConnState(unsigned char)>
         f3270:	e3300000 	teq	r0, #0	; 0x0
         f3274:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         f3278:	e1a00004 	mov	r0, r4
         f327c:	eb6505ea 	bl	1a34a2c <TIrLAP::$OutputUAResponse(void)>
         f3280:	e3a05000 	mov	r5, #0	; 0x0
         f3284:	e28dd010 	add	sp, sp, #16	; 0x10
         f3288:	e3350000 	teq	r5, #0	; 0x0
         f328c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f3290:	e28410e4 	add	r1, r4, #228	; 0xe4
         f3294:	e1a00004 	mov	r0, r4
         f3298:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f329c:	ea0007c4 	b	f51b4 <TIrLAP::StartInput(CBufferSegment *)>
         f32a0:	e1a00004 	mov	r0, r4
         f32a4:	e3a01001 	mov	r1, #1	; 0x1
         f32a8:	eb00076f 	bl	f506c <TIrLAP::RecdPollCmd(unsigned char)>
         f32ac:	e3300000 	teq	r0, #0	; 0x0
         f32b0:	0afffff6 	beq	f3290 <TIrLAP::HandleListenStateEvent(unsigned long)+0xec>
         f32b4:	e5940044 	ldr	r0, [r4, #68]	; fField68
         f32b8:	eb650e2a 	bl	1a36b68 <TIrQOS::$GetExtraBOFs(void)>
         f32bc:	e5c40080 	strb	r0, [r4, #128]	; fField128
         f32c0:	e1a00004 	mov	r0, r4
         f32c4:	e3a01000 	mov	r1, #0	; 0x0
         f32c8:	eb6501c7 	bl	1a339ec <TIrLAP::$ConnLstnComplete(long)>
         f32cc:	e3a00008 	mov	r0, #8	; 0x8
         f32d0:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f32d4:	e1a00004 	mov	r0, r4
         f32d8:	e3a01002 	mov	r1, #2	; 0x2
         f32dc:	e5942000 	ldr	r2, [r4]
         f32e0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f32e4:	e282f004 	add	pc, r2, #4	; 0x4
         f32e8:	e5940040 	ldr	r0, [r4, #64]	; fField64
         f32ec:	eb65122a 	bl	1a37b9c <TIrQOS::$GetBaudRate(void)>
         f32f0:	e1a01000 	mov	r1, r0
         f32f4:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f32f8:	ebfff63e 	bl	f0bf8 <TIrGlue::ChangeSpeed(unsigned long)>
         f32fc:	e1a00004 	mov	r0, r4
         f3300:	eb6505c1 	bl	1a34a0c <TIrLAP::$StartDataReceive(void)>
         f3304:	e5940084 	ldr	r0, [r4, #132]	; fField132
         f3308:	e1a01080 	mov	r1, r0, lsl #1
         f330c:	e1a00004 	mov	r0, r4
         f3310:	e3a02023 	mov	r2, #35	; 0x23
         f3314:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f3318:	ea6505c7 	b	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
    */
}

/**
 * Symbol: TIrLAP::HandleReplyStateEvent(unsigned long)
 * Address: 000f331c
 */
TIrLAP::HandleReplyStateEvent(unsigned long) {
    /*
         f331c:	e1a0c00d 	mov	ip, sp
         f3320:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         f3324:	e24cb004 	sub	fp, ip, #4	; 0x4
         f3328:	e1a04000 	mov	r4, r0
         f332c:	e3310001 	teq	r1, #1	; 0x1
         f3330:	0a000080 	beq	f3538 <TIrLAP::HandleReplyStateEvent(unsigned long)+0x21c>
         f3334:	e3a07000 	mov	r7, #0	; 0x0
         f3338:	e3310002 	teq	r1, #2	; 0x2
         f333c:	0a00000a 	beq	f336c <TIrLAP::HandleReplyStateEvent(unsigned long)+0x50>
         f3340:	e3310017 	teq	r1, #23	; 0x17
         f3344:	01a00004 	moveq	r0, r4
         f3348:	091b6bf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         f334c:	0a00007d 	beq	f3548 <TIrLAP::HandleNDMDisconnectRequest(void)>
         f3350:	e331001f 	teq	r1, #31	; 0x1f
         f3354:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         f3358:	e5940030 	ldr	r0, [r4, #48]	; fField48
         f335c:	e3300000 	teq	r0, #0	; 0x0
         f3360:	15840020 	strne	r0, [r4, #32]	; fField32
         f3364:	e5c4701c 	strb	r7, [r4, #28]	; fField28
         f3368:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         f336c:	e3a06001 	mov	r6, #1	; 0x1
         f3370:	e1a00004 	mov	r0, r4
         f3374:	e3a0102f 	mov	r1, #47	; 0x2f
         f3378:	eb00073b 	bl	f506c <TIrLAP::RecdPollCmd(unsigned char)>
         f337c:	e3300000 	teq	r0, #0	; 0x0
         f3380:	0a00006c 	beq	f3538 <TIrLAP::HandleReplyStateEvent(unsigned long)+0x21c>
         f3384:	e24dd014 	sub	sp, sp, #20	; 0x14
         f3388:	e28d1003 	add	r1, sp, #3	; 0x3
         f338c:	e1a00004 	mov	r0, r4
         f3390:	e3a0200c 	mov	r2, #12	; 0xc
         f3394:	eb00071b 	bl	f5008 <TIrLAP::GotData(unsigned char *, unsigned long)>
         f3398:	e3300000 	teq	r0, #0	; 0x0
         f339c:	0a000062 	beq	f352c <TIrLAP::HandleReplyStateEvent(unsigned long)+0x210>
         f33a0:	e5dd0003 	ldrb	r0, [sp, #3]
         f33a4:	e3300001 	teq	r0, #1	; 0x1
         f33a8:	1a00005f 	bne	f352c <TIrLAP::HandleReplyStateEvent(unsigned long)+0x210>
         f33ac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         f33b0:	e3300000 	teq	r0, #0	; 0x0
         f33b4:	159d0004 	ldrne	r0, [sp, #4]	; fField4
         f33b8:	13700001 	cmnne	r0, #1	; 0x1
         f33bc:	0a00005a 	beq	f352c <TIrLAP::HandleReplyStateEvent(unsigned long)+0x210>
         f33c0:	e59d0008 	ldr	r0, [sp, #8]
         f33c4:	e3700001 	cmn	r0, #1	; 0x1
         f33c8:	0a000006 	beq	f33e8 <TIrLAP::HandleReplyStateEvent(unsigned long)+0xcc>
         f33cc:	e59d0008 	ldr	r0, [sp, #8]
         f33d0:	e5941020 	ldr	r1, [r4, #32]	; fField32
         f33d4:	e1300001 	teq	r0, r1
         f33d8:	1a000053 	bne	f352c <TIrLAP::HandleReplyStateEvent(unsigned long)+0x210>
         f33dc:	e5dd000c 	ldrb	r0, [sp, #12]	; fField12
         f33e0:	e3100004 	tst	r0, #4	; 0x4
         f33e4:	0a000050 	beq	f352c <TIrLAP::HandleReplyStateEvent(unsigned long)+0x210>
         f33e8:	e5dd000d 	ldrb	r0, [sp, #13]
         f33ec:	e3a09001 	mov	r9, #1	; 0x1
         f33f0:	e3a08004 	mov	r8, #4	; 0x4
         f33f4:	e33000ff 	teq	r0, #255	; 0xff
         f33f8:	0a000026 	beq	f3498 <TIrLAP::HandleReplyStateEvent(unsigned long)+0x17c>
         f33fc:	e5d40027 	ldrb	r0, [r4, #39]	; fField39
         f3400:	e3300000 	teq	r0, #0	; 0x0
         f3404:	0a000015 	beq	f3460 <TIrLAP::HandleReplyStateEvent(unsigned long)+0x144>
         f3408:	e5c4801c 	strb	r8, [r4, #28]	; fField28
         f340c:	e5dd000c 	ldrb	r0, [sp, #12]	; fField12
         f3410:	e2000003 	and	r0, r0, #3	; 0x3
         f3414:	e59f1078 	ldr	r1, [pc, #78]	; f3494 <TIrLAP::HandleReplyStateEvent(unsigned long)+0x178>	; fField78
         f3418:	e7d10000 	ldrb	r0, [r1, r0]
         f341c:	e5c40024 	strb	r0, [r4, #36]	; fField36
         f3420:	eb6b0590 	bl	1bb4a68 <$rand>
         f3424:	e1a01000 	mov	r1, r0
         f3428:	e5d40024 	ldrb	r0, [r4, #36]	; fField36
         f342c:	e1a05000 	mov	r5, r0
         f3430:	eb6afd42 	bl	1bb2940 <$__rt_sdiv>
         f3434:	e5c41025 	strb	r1, [r4, #37]	; fField37
         f3438:	e5c47028 	strb	r7, [r4, #40]
         f343c:	e0651505 	rsb	r1, r5, r5, lsl #10
         f3440:	e0811685 	add	r1, r1, r5, lsl #13
         f3444:	e0611181 	rsb	r1, r1, r1, lsl #3
         f3448:	e1a01181 	mov	r1, r1, lsl #3
         f344c:	e5847030 	str	r7, [r4, #48]	; fField48
         f3450:	e1a00004 	mov	r0, r4
         f3454:	e3a0201f 	mov	r2, #31	; 0x1f
         f3458:	eb650577 	bl	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f345c:	e5c47027 	strb	r7, [r4, #39]	; fField39
         f3460:	e5d40028 	ldrb	r0, [r4, #40]
         f3464:	e3300000 	teq	r0, #0	; 0x0
         f3468:	1a00002f 	bne	f352c <TIrLAP::HandleReplyStateEvent(unsigned long)+0x210>
         f346c:	e5dd000d 	ldrb	r0, [sp, #13]
         f3470:	e5d41025 	ldrb	r1, [r4, #37]	; fField37
         f3474:	e1500001 	cmp	r0, r1
         f3478:	ba00002b 	blt	f352c <TIrLAP::HandleReplyStateEvent(unsigned long)+0x210>
         f347c:	e1a0100d 	mov	r1, sp
         f3480:	e1a00004 	mov	r0, r4
         f3484:	eb650565 	bl	1a34a20 <TIrLAP::$OutputXIDResponse(TXIDPacket &)>
         f3488:	e5c49028 	strb	r9, [r4, #40]
         f348c:	e3a06000 	mov	r6, #0	; 0x0
         f3490:	ea000025 	b	f352c <TIrLAP::HandleReplyStateEvent(unsigned long)+0x210>
         f3494:	00371840 	eoreqs	r1, r7, r0, asr #16
         f3498:	e1a00004 	mov	r0, r4
         f349c:	eb650568 	bl	1a34a44 <TIrLAP::$StopTimer(void)>
         f34a0:	e5940030 	ldr	r0, [r4, #48]	; fField48
         f34a4:	e3300000 	teq	r0, #0	; 0x0
         f34a8:	15840020 	strne	r0, [r4, #32]	; fField32
         f34ac:	e5c4701c 	strb	r7, [r4, #28]	; fField28
         f34b0:	e5940038 	ldr	r0, [r4, #56]	; fField56
         f34b4:	e5d00000 	ldrb	r0, [r0]
         f34b8:	e3300003 	teq	r0, #3	; 0x3
         f34bc:	1a00001a 	bne	f352c <TIrLAP::HandleReplyStateEvent(unsigned long)+0x210>
         f34c0:	e3a00000 	mov	r0, #0	; 0x0
         f34c4:	ebffefa4 	bl	ef35c <TIrDscInfo::__ct(void)>
         f34c8:	e1b06000 	movs	r6, r0
         f34cc:	e5945038 	ldr	r5, [r4, #56]	; fField56
         f34d0:	e5847038 	str	r7, [r4, #56]	; fField56
         f34d4:	e5c58000 	strb	r8, [r5]
         f34d8:	03a000a8 	moveq	r0, #168	; 0xa8
         f34dc:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
         f34e0:	05850004 	streq	r0, [r5, #4]	; fField4
         f34e4:	0a00000c 	beq	f351c <TIrLAP::HandleReplyStateEvent(unsigned long)+0x200>
         f34e8:	e5dd000e 	ldrb	r0, [sp, #14]
         f34ec:	e5c60008 	strb	r0, [r6, #8]
         f34f0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         f34f4:	e5860000 	str	r0, [r6]
         f34f8:	e1a00006 	mov	r0, r6
         f34fc:	e5941134 	ldr	r1, [r4, #308]	; fField308
         f3500:	eb64f0bd 	bl	1a2f7fc <TIrDscInfo::$ExtractDevInfoFromBuffer(CBufferSegment *)>
         f3504:	e1a02006 	mov	r2, r6
         f3508:	e5950010 	ldr	r0, [r5, #16]	; fField16
         f350c:	e5901000 	ldr	r1, [r0]
         f3510:	eb6bd7f5 	bl	1be94ec <CList::$InsertAt(long, void *)>
         f3514:	e5857004 	str	r7, [r5, #4]	; fField4
         f3518:	e5c59015 	strb	r9, [r5, #21]	; fField21
         f351c:	e3a06000 	mov	r6, #0	; 0x0
         f3520:	e1a01005 	mov	r1, r5
         f3524:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f3528:	eb6511ae 	bl	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f352c:	e28dd014 	add	sp, sp, #20	; 0x14
         f3530:	e3360000 	teq	r6, #0	; 0x0
         f3534:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         f3538:	e28410e4 	add	r1, r4, #228	; 0xe4
         f353c:	e1a00004 	mov	r0, r4
         f3540:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         f3544:	ea00071a 	b	f51b4 <TIrLAP::StartInput(CBufferSegment *)>
    */
}

/**
 * Symbol: TIrLAP::HandleNDMDisconnectRequest(void)
 * Address: 000f3548
 */
TIrLAP::HandleNDMDisconnectRequest(void) {
    /*
         f3548:	e1a0c00d 	mov	ip, sp
         f354c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f3550:	e24cb004 	sub	fp, ip, #4	; 0x4
         f3554:	e1a04000 	mov	r4, r0
         f3558:	e590500c 	ldr	r5, [r0, #12]	; fField12
         f355c:	eb00072b 	bl	f5210 <TIrLAP::StopInput(void)>
         f3560:	e1a00004 	mov	r0, r4
         f3564:	eb00070e 	bl	f51a4 <TIrLAP::StopOutput(void)>
         f3568:	e1a00004 	mov	r0, r4
         f356c:	eb650534 	bl	1a34a44 <TIrLAP::$StopTimer(void)>
         f3570:	e3a06000 	mov	r6, #0	; 0x0
         f3574:	e5941038 	ldr	r1, [r4, #56]	; fField56
         f3578:	e3310000 	teq	r1, #0	; 0x0
         f357c:	0a000009 	beq	f35a8 <TIrLAP::HandleNDMDisconnectRequest(void)+0x60>
         f3580:	e5846038 	str	r6, [r4, #56]	; fField56
         f3584:	e5d10000 	ldrb	r0, [r1]
         f3588:	e2800001 	add	r0, r0, #1	; 0x1
         f358c:	e5c10000 	strb	r0, [r1]
         f3590:	e5950004 	ldr	r0, [r5, #4]	; fField4
         f3594:	e3300000 	teq	r0, #0	; 0x0
         f3598:	059f0024 	ldreq	r0, [pc, #24]	; f35c4 <TIrLAP::HandleNDMDisconnectRequest(void)+0x7c>	; fField24
         f359c:	e5810004 	str	r0, [r1, #4]	; fField4
         f35a0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f35a4:	eb65118f 	bl	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f35a8:	e3a00018 	mov	r0, #24	; 0x18
         f35ac:	e5c50000 	strb	r0, [r5]
         f35b0:	e5c4601c 	strb	r6, [r4, #28]	; fField28
         f35b4:	e1a01005 	mov	r1, r5
         f35b8:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         f35bc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f35c0:	ea651188 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f35c4:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TIrLAP::HandlePriReceiveStateEvent(unsigned long)
 * Address: 000f35c8
 */
TIrLAP::HandlePriReceiveStateEvent(unsigned long) {
    /*
         f35c8:	e1a0c00d 	mov	ip, sp
         f35cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f35d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f35d4:	e1a04000 	mov	r4, r0
         f35d8:	e3a05001 	mov	r5, #1	; 0x1
         f35dc:	e3510017 	cmp	r1, #23	; 0x17
         f35e0:	0594000c 	ldreq	r0, [r4, #12]	; fField12
         f35e4:	0584003c 	streq	r0, [r4, #60]	; fField60
         f35e8:	05c45050 	streqb	r5, [r4, #80]	; fField80
         f35ec:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f35f0:	e3a06000 	mov	r6, #0	; 0x0
         f35f4:	ca00000c 	bgt	f362c <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x64>
         f35f8:	e3310001 	teq	r1, #1	; 0x1
         f35fc:	0a000052 	beq	f374c <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x184>
         f3600:	e3310002 	teq	r1, #2	; 0x2
         f3604:	0a00005a 	beq	f3774 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x1ac>
         f3608:	e331000d 	teq	r1, #13	; 0xd
         f360c:	01a00004 	moveq	r0, r4
         f3610:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         f3614:	0a6504fe 	beq	1a34a14 <TIrLAP::$PostponePutRequest(void)>
         f3618:	e3310013 	teq	r1, #19	; 0x13
         f361c:	01a00004 	moveq	r0, r4
         f3620:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         f3624:	0a6500f2 	beq	1a339f4 <TIrLAP::$CancelPutRequest(void)>
         f3628:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f362c:	e331001a 	teq	r1, #26	; 0x1a
         f3630:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f3634:	e3310021 	teq	r1, #33	; 0x21
         f3638:	0a000009 	beq	f3664 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x9c>
         f363c:	e3310024 	teq	r1, #36	; 0x24
         f3640:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f3644:	e5d40050 	ldrb	r0, [r4, #80]	; fField80
         f3648:	e3300000 	teq	r0, #0	; 0x0
         f364c:	0a000022 	beq	f36dc <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x114>
         f3650:	e3a00043 	mov	r0, #67	; 0x43
         f3654:	e5c40097 	strb	r0, [r4, #151]	; fField151
         f3658:	e3a00007 	mov	r0, #7	; 0x7
         f365c:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f3660:	ea000037 	b	f3744 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x17c>
         f3664:	e1a00004 	mov	r0, r4
         f3668:	eb0006e8 	bl	f5210 <TIrLAP::StopInput(void)>
         f366c:	e5940064 	ldr	r0, [r4, #100]	; fField100
         f3670:	e594105c 	ldr	r1, [r4, #92]	; fField92
         f3674:	e1310000 	teq	r1, r0
         f3678:	01a00004 	moveq	r0, r4
         f367c:	059f1078 	ldreq	r1, [pc, #78]	; f36fc <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x134>	; fField78
         f3680:	0a000005 	beq	f369c <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0xd4>
         f3684:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f3688:	e5d02035 	ldrb	r2, [r0, #53]
         f368c:	e3320000 	teq	r2, #0	; 0x0
         f3690:	0a000003 	beq	f36a4 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0xdc>
         f3694:	e1a00004 	mov	r0, r4
         f3698:	e3a01000 	mov	r1, #0	; 0x0
         f369c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f36a0:	ea6500d2 	b	1a339f0 <TIrLAP::$DisconnectComplete(long)>
         f36a4:	e5942060 	ldr	r2, [r4, #96]	; fField96
         f36a8:	e1310002 	teq	r1, r2
         f36ac:	03a01001 	moveq	r1, #1	; 0x1
         f36b0:	0bfff509 	bleq	f0adc <TIrGlue::PostAsyncEvent(unsigned long)>
         f36b4:	e594005c 	ldr	r0, [r4, #92]	; fField92
         f36b8:	e2800001 	add	r0, r0, #1	; 0x1
         f36bc:	e584005c 	str	r0, [r4, #92]	; fField92
         f36c0:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         f36c4:	e3300000 	teq	r0, #0	; 0x0
         f36c8:	03a01001 	moveq	r1, #1	; 0x1
         f36cc:	13a01005 	movne	r1, #5	; 0x5
         f36d0:	e1a00004 	mov	r0, r4
         f36d4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f36d8:	ea6504d5 	b	1a34a34 <TIrLAP::$OutputControlFrame(unsigned char)>
         f36dc:	e5d4004e 	ldrb	r0, [r4, #78]	; fField78
         f36e0:	e3300000 	teq	r0, #0	; 0x0
         f36e4:	0a000005 	beq	f3700 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x138>
         f36e8:	e3a00005 	mov	r0, #5	; 0x5
         f36ec:	e5c40097 	strb	r0, [r4, #151]	; fField151
         f36f0:	e5c4504c 	strb	r5, [r4, #76]	; fField76
         f36f4:	e5c4604e 	strb	r6, [r4, #78]	; fField78
         f36f8:	ea000011 	b	f3744 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x17c>
         f36fc:	ffff6997 	swinv	0x00ff6997
         f3700:	e5d4004f 	ldrb	r0, [r4, #79]	; fField79
         f3704:	e3300000 	teq	r0, #0	; 0x0
         f3708:	15c45097 	strneb	r5, [r4, #151]	; fField151
         f370c:	15c4604c 	strneb	r6, [r4, #76]	; fField76
         f3710:	15c4604f 	strneb	r6, [r4, #79]	; fField79
         f3714:	1a00000a 	bne	f3744 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x17c>
         f3718:	e5d40097 	ldrb	r0, [r4, #151]	; fField151
         f371c:	e3300000 	teq	r0, #0	; 0x0
         f3720:	1a000007 	bne	f3744 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x17c>
         f3724:	e5c4609f 	strb	r6, [r4, #159]	; fField159
         f3728:	e3a00006 	mov	r0, #6	; 0x6
         f372c:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f3730:	e1a00004 	mov	r0, r4
         f3734:	e3a01024 	mov	r1, #36	; 0x24
         f3738:	e5942000 	ldr	r2, [r4]
         f373c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f3740:	e282f004 	add	pc, r2, #4	; 0x4
         f3744:	e5d41097 	ldrb	r1, [r4, #151]	; fField151
         f3748:	eaffffe0 	b	f36d0 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x108>
         f374c:	e5d40097 	ldrb	r0, [r4, #151]	; fField151
         f3750:	e3300001 	teq	r0, #1	; 0x1
         f3754:	13300005 	teqne	r0, #5	; 0x5
         f3758:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f375c:	e1a00004 	mov	r0, r4
         f3760:	eb6504a9 	bl	1a34a0c <TIrLAP::$StartDataReceive(void)>
         f3764:	e5941088 	ldr	r1, [r4, #136]	; fField136
         f3768:	e1a00004 	mov	r0, r4
         f376c:	e3a02021 	mov	r2, #33	; 0x21
         f3770:	ea000036 	b	f3850 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x288>
         f3774:	e5d4009b 	ldrb	r0, [r4, #155]	; fField155
         f3778:	e3300000 	teq	r0, #0	; 0x0
         f377c:	11a00004 	movne	r0, r4
         f3780:	1b6504af 	blne	1a34a44 <TIrLAP::$StopTimer(void)>
         f3784:	e584605c 	str	r6, [r4, #92]	; fField92
         f3788:	e5c46097 	strb	r6, [r4, #151]	; fField151
         f378c:	e5d4009e 	ldrb	r0, [r4, #158]	; fField158
         f3790:	e2000003 	and	r0, r0, #3	; 0x3
         f3794:	e3300003 	teq	r0, #3	; 0x3
         f3798:	1a000004 	bne	f37b0 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x1e8>
         f379c:	e1a00004 	mov	r0, r4
         f37a0:	e3a01003 	mov	r1, #3	; 0x3
         f37a4:	eb00063e 	bl	f50a4 <TIrLAP::RecdRsp(unsigned char)>
         f37a8:	e3300000 	teq	r0, #0	; 0x0
         f37ac:	0a000008 	beq	f37d4 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x20c>
         f37b0:	e5d400a1 	ldrb	r0, [r4, #161]	; fField161
         f37b4:	e310000c 	tst	r0, #12	; 0xc
         f37b8:	1594006c 	ldrne	r0, [r4, #108]	; fField108
         f37bc:	12800001 	addne	r0, r0, #1	; 0x1
         f37c0:	1584006c 	strne	r0, [r4, #108]	; fField108
         f37c4:	1a000011 	bne	f3810 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x248>
         f37c8:	e1a00004 	mov	r0, r4
         f37cc:	eb650082 	bl	1a339dc <TIrLAP::$ProcessRecdInfoOrSuperFrame(void)>
         f37d0:	ea000013 	b	f3824 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x25c>
         f37d4:	e1a00004 	mov	r0, r4
         f37d8:	e3a01087 	mov	r1, #135	; 0x87
         f37dc:	eb000639 	bl	f50c8 <TIrLAP::RecdFinalRsp(unsigned char)>
         f37e0:	e3300000 	teq	r0, #0	; 0x0
         f37e4:	1a000009 	bne	f3810 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x248>
         f37e8:	e1a00004 	mov	r0, r4
         f37ec:	e3a01043 	mov	r1, #67	; 0x43
         f37f0:	eb000634 	bl	f50c8 <TIrLAP::RecdFinalRsp(unsigned char)>
         f37f4:	e3300000 	teq	r0, #0	; 0x0
         f37f8:	1a000004 	bne	f3810 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x248>
         f37fc:	e1a00004 	mov	r0, r4
         f3800:	e3a01083 	mov	r1, #131	; 0x83
         f3804:	eb00062f 	bl	f50c8 <TIrLAP::RecdFinalRsp(unsigned char)>
         f3808:	e3300000 	teq	r0, #0	; 0x0
         f380c:	0a000001 	beq	f3818 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x250>
         f3810:	e5c45050 	strb	r5, [r4, #80]	; fField80
         f3814:	ea000002 	b	f3824 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)+0x25c>
         f3818:	e594006c 	ldr	r0, [r4, #108]	; fField108
         f381c:	e2800001 	add	r0, r0, #1	; 0x1
         f3820:	e584006c 	str	r0, [r4, #108]	; fField108
         f3824:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
         f3828:	e3300005 	teq	r0, #5	; 0x5
         f382c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f3830:	e5d4009b 	ldrb	r0, [r4, #155]	; fField155
         f3834:	e3300000 	teq	r0, #0	; 0x0
         f3838:	01a00004 	moveq	r0, r4
         f383c:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         f3840:	0a650471 	beq	1a34a0c <TIrLAP::$StartDataReceive(void)>
         f3844:	e5941090 	ldr	r1, [r4, #144]	; fField144
         f3848:	e1a00004 	mov	r0, r4
         f384c:	e3a02024 	mov	r2, #36	; 0x24
         f3850:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f3854:	ea650478 	b	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
    */
}

/**
 * Symbol: TIrLAP::HandlePriTransmitStateEvent(unsigned long)
 * Address: 000f3858
 */
TIrLAP::HandlePriTransmitStateEvent(unsigned long) {
    /*
         f3858:	e1a0c00d 	mov	ip, sp
         f385c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f3860:	e24cb004 	sub	fp, ip, #4	; 0x4
         f3864:	e1a04000 	mov	r4, r0
         f3868:	e1a00001 	mov	r0, r1
         f386c:	e3a01001 	mov	r1, #1	; 0x1
         f3870:	e3500017 	cmp	r0, #23	; 0x17
         f3874:	0594000c 	ldreq	r0, [r4, #12]	; fField12
         f3878:	0584003c 	streq	r0, [r4, #60]	; fField60
         f387c:	05c41050 	streqb	r1, [r4, #80]	; fField80
         f3880:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f3884:	ca00000a 	bgt	f38b4 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x5c>
         f3888:	e3300001 	teq	r0, #1	; 0x1
         f388c:	0a000052 	beq	f39dc <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x184>
         f3890:	e330000d 	teq	r0, #13	; 0xd
         f3894:	01a00004 	moveq	r0, r4
         f3898:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         f389c:	0a65045c 	beq	1a34a14 <TIrLAP::$PostponePutRequest(void)>
         f38a0:	e3300013 	teq	r0, #19	; 0x13
         f38a4:	01a00004 	moveq	r0, r4
         f38a8:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         f38ac:	0a650050 	beq	1a339f4 <TIrLAP::$CancelPutRequest(void)>
         f38b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f38b4:	e330001a 	teq	r0, #26	; 0x1a
         f38b8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f38bc:	e3300022 	teq	r0, #34	; 0x22
         f38c0:	0a000029 	beq	f396c <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x114>
         f38c4:	e3300024 	teq	r0, #36	; 0x24
         f38c8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         f38cc:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f38d0:	e5901000 	ldr	r1, [r0]
         f38d4:	e3310000 	teq	r1, #0	; 0x0
         f38d8:	0a00002f 	beq	f399c <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x144>
         f38dc:	e5d4204d 	ldrb	r2, [r4, #77]	; fField77
         f38e0:	e3320000 	teq	r2, #0	; 0x0
         f38e4:	1a00002c 	bne	f399c <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x144>
         f38e8:	e2411001 	sub	r1, r1, #1	; 0x1
         f38ec:	eb6bca94 	bl	1be6344 <CList::$At(long)>
         f38f0:	e1a05000 	mov	r5, r0
         f38f4:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f38f8:	e5901000 	ldr	r1, [r0]
         f38fc:	e2411001 	sub	r1, r1, #1	; 0x1
         f3900:	e3a02001 	mov	r2, #1	; 0x1
         f3904:	eb6be34a 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         f3908:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f390c:	e5900000 	ldr	r0, [r0]
         f3910:	e3300000 	teq	r0, #0	; 0x0
         f3914:	13a00001 	movne	r0, #1	; 0x1
         f3918:	03a00000 	moveq	r0, #0	; 0x0
         f391c:	e5c40096 	strb	r0, [r4, #150]
         f3920:	e5d4004b 	ldrb	r0, [r4, #75]
         f3924:	e3500001 	cmp	r0, #1	; 0x1
         f3928:	da000006 	ble	f3948 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0xf0>
         f392c:	e5d40096 	ldrb	r0, [r4, #150]
         f3930:	e3300000 	teq	r0, #0	; 0x0
         f3934:	0a000003 	beq	f3948 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0xf0>
         f3938:	e5941084 	ldr	r1, [r4, #132]	; fField132
         f393c:	e1a00004 	mov	r0, r4
         f3940:	e3a02022 	mov	r2, #34	; 0x22
         f3944:	eb65043c 	bl	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f3948:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         f394c:	e3300000 	teq	r0, #0	; 0x0
         f3950:	1a00000c 	bne	f3988 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x130>
         f3954:	e5d4004b 	ldrb	r0, [r4, #75]
         f3958:	e3300001 	teq	r0, #1	; 0x1
         f395c:	15d40096 	ldrneb	r0, [r4, #150]
         f3960:	13300000 	teqne	r0, #0	; 0x0
         f3964:	1a000007 	bne	f3988 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x130>
         f3968:	ea000004 	b	f3980 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x128>
         f396c:	e1a00004 	mov	r0, r4
         f3970:	eb000626 	bl	f5210 <TIrLAP::StopInput(void)>
         f3974:	e1a00004 	mov	r0, r4
         f3978:	e3a01001 	mov	r1, #1	; 0x1
         f397c:	ea00004e 	b	f3abc <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x264>
         f3980:	e3a02001 	mov	r2, #1	; 0x1
         f3984:	ea000000 	b	f398c <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x134>
         f3988:	e3a02000 	mov	r2, #0	; 0x0
         f398c:	e1a01005 	mov	r1, r5
         f3990:	e1a00004 	mov	r0, r4
         f3994:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f3998:	ea650426 	b	1a34a38 <TIrLAP::$OutputDataFrame(TIrDataXferEvent *, unsigned char)>
         f399c:	e5d4004d 	ldrb	r0, [r4, #77]	; fField77
         f39a0:	e3300000 	teq	r0, #0	; 0x0
         f39a4:	05d4009e 	ldreqb	r0, [r4, #158]	; fField158
         f39a8:	03300000 	teqeq	r0, #0	; 0x0
         f39ac:	1a000004 	bne	f39c4 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x16c>
         f39b0:	e1a00004 	mov	r0, r4
         f39b4:	e3a01022 	mov	r1, #34	; 0x22
         f39b8:	e5942000 	ldr	r2, [r4]
         f39bc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f39c0:	e282f004 	add	pc, r2, #4	; 0x4
         f39c4:	e5940084 	ldr	r0, [r4, #132]	; fField132
         f39c8:	e1a01120 	mov	r1, r0, lsr #2
         f39cc:	e1a00004 	mov	r0, r4
         f39d0:	e3a02022 	mov	r2, #34	; 0x22
         f39d4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f39d8:	ea650417 	b	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f39dc:	e5d40097 	ldrb	r0, [r4, #151]	; fField151
         f39e0:	e3300000 	teq	r0, #0	; 0x0
         f39e4:	0a000003 	beq	f39f8 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x1a0>
         f39e8:	e3300001 	teq	r0, #1	; 0x1
         f39ec:	13300005 	teqne	r0, #5	; 0x5
         f39f0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         f39f4:	ea000032 	b	f3ac4 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x26c>
         f39f8:	e5d4004b 	ldrb	r0, [r4, #75]
         f39fc:	e2400001 	sub	r0, r0, #1	; 0x1
         f3a00:	e20000ff 	and	r0, r0, #255	; 0xff
         f3a04:	e5c4004b 	strb	r0, [r4, #75]
         f3a08:	e3500000 	cmp	r0, #0	; 0x0
         f3a0c:	da000023 	ble	f3aa0 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x248>
         f3a10:	e5d40096 	ldrb	r0, [r4, #150]
         f3a14:	e3300000 	teq	r0, #0	; 0x0
         f3a18:	0a000020 	beq	f3aa0 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x248>
         f3a1c:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f3a20:	e5901000 	ldr	r1, [r0]
         f3a24:	e3310000 	teq	r1, #0	; 0x0
         f3a28:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f3a2c:	e2411001 	sub	r1, r1, #1	; 0x1
         f3a30:	eb6bca43 	bl	1be6344 <CList::$At(long)>
         f3a34:	e1a05000 	mov	r5, r0
         f3a38:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f3a3c:	e5901000 	ldr	r1, [r0]
         f3a40:	e2411001 	sub	r1, r1, #1	; 0x1
         f3a44:	e3a02001 	mov	r2, #1	; 0x1
         f3a48:	eb6be2f9 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         f3a4c:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f3a50:	e5900000 	ldr	r0, [r0]
         f3a54:	e3300000 	teq	r0, #0	; 0x0
         f3a58:	13a00001 	movne	r0, #1	; 0x1
         f3a5c:	03a00000 	moveq	r0, #0	; 0x0
         f3a60:	e5c40096 	strb	r0, [r4, #150]
         f3a64:	e5d4004b 	ldrb	r0, [r4, #75]
         f3a68:	e3300001 	teq	r0, #1	; 0x1
         f3a6c:	15d40096 	ldrneb	r0, [r4, #150]
         f3a70:	13300000 	teqne	r0, #0	; 0x0
         f3a74:	01a00004 	moveq	r0, r4
         f3a78:	0b6503f1 	bleq	1a34a44 <TIrLAP::$StopTimer(void)>
         f3a7c:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         f3a80:	e3300000 	teq	r0, #0	; 0x0
         f3a84:	1affffbf 	bne	f3988 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x130>
         f3a88:	e5d4004b 	ldrb	r0, [r4, #75]
         f3a8c:	e3300001 	teq	r0, #1	; 0x1
         f3a90:	15d40096 	ldrneb	r0, [r4, #150]
         f3a94:	13300000 	teqne	r0, #0	; 0x0
         f3a98:	0affffb8 	beq	f3980 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x128>
         f3a9c:	eaffffb9 	b	f3988 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x130>
         f3aa0:	e5d40082 	ldrb	r0, [r4, #130]
         f3aa4:	e5c4004b 	strb	r0, [r4, #75]
         f3aa8:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         f3aac:	e3300000 	teq	r0, #0	; 0x0
         f3ab0:	0a000003 	beq	f3ac4 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)+0x26c>
         f3ab4:	e1a00004 	mov	r0, r4
         f3ab8:	e3a01005 	mov	r1, #5	; 0x5
         f3abc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f3ac0:	ea6503db 	b	1a34a34 <TIrLAP::$OutputControlFrame(unsigned char)>
         f3ac4:	e1a00004 	mov	r0, r4
         f3ac8:	eb6503cf 	bl	1a34a0c <TIrLAP::$StartDataReceive(void)>
         f3acc:	e5941088 	ldr	r1, [r4, #136]	; fField136
         f3ad0:	e1a00004 	mov	r0, r4
         f3ad4:	e3a02021 	mov	r2, #33	; 0x21
         f3ad8:	eb6503d7 	bl	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f3adc:	e3a00005 	mov	r0, #5	; 0x5
         f3ae0:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f3ae4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::HandlePriCloseStateEvent(unsigned long)
 * Address: 000f3ae8
 */
TIrLAP::HandlePriCloseStateEvent(unsigned long) {
    /*
         f3ae8:	e1a0c00d 	mov	ip, sp
         f3aec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f3af0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f3af4:	e1a04000 	mov	r4, r0
         f3af8:	e3510013 	cmp	r1, #19	; 0x13
         f3afc:	01a00004 	moveq	r0, r4
         f3b00:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         f3b04:	0a64ffba 	beq	1a339f4 <TIrLAP::$CancelPutRequest(void)>
         f3b08:	e59f5028 	ldr	r5, [pc, #28]	; f3b38 <TIrLAP::HandlePriCloseStateEvent(unsigned long)+0x50>	; fField28
         f3b0c:	ca00000a 	bgt	f3b3c <TIrLAP::HandlePriCloseStateEvent(unsigned long)+0x54>
         f3b10:	e28460e4 	add	r6, r4, #228	; 0xe4
         f3b14:	e3310001 	teq	r1, #1	; 0x1
         f3b18:	0a00001c 	beq	f3b90 <TIrLAP::HandlePriCloseStateEvent(unsigned long)+0xa8>
         f3b1c:	e3310002 	teq	r1, #2	; 0x2
         f3b20:	0a000027 	beq	f3bc4 <TIrLAP::HandlePriCloseStateEvent(unsigned long)+0xdc>
         f3b24:	e331000d 	teq	r1, #13	; 0xd
         f3b28:	01a00004 	moveq	r0, r4
         f3b2c:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         f3b30:	0a6503b3 	beq	1a34a04 <TIrLAP::$NotConnectedCompletion(void)>
         f3b34:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f3b38:	ffff6997 	swinv	0x00ff6997
         f3b3c:	e3310017 	teq	r1, #23	; 0x17
         f3b40:	0594000c 	ldreq	r0, [r4, #12]	; fField12
         f3b44:	05a4003c 	streq	r0, [r4, #60]!	; fField60
         f3b48:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f3b4c:	e331001a 	teq	r1, #26	; 0x1a
         f3b50:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f3b54:	e3310021 	teq	r1, #33	; 0x21
         f3b58:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f3b5c:	e1a00004 	mov	r0, r4
         f3b60:	eb0005aa 	bl	f5210 <TIrLAP::StopInput(void)>
         f3b64:	e594005c 	ldr	r0, [r4, #92]	; fField92
         f3b68:	e2800001 	add	r0, r0, #1	; 0x1
         f3b6c:	e584005c 	str	r0, [r4, #92]	; fField92
         f3b70:	e3500003 	cmp	r0, #3	; 0x3
         f3b74:	31a00004 	movcc	r0, r4
         f3b78:	33a01043 	movcc	r1, #67	; 0x43
         f3b7c:	391b6870 	ldmccdb	fp, {r4, r5, r6, fp, sp, lr}
         f3b80:	3a6503ab 	bcc	1a34a34 <TIrLAP::$OutputControlFrame(unsigned char)>
         f3b84:	e1a00004 	mov	r0, r4
         f3b88:	e1a01005 	mov	r1, r5
         f3b8c:	ea000013 	b	f3be0 <TIrLAP::HandlePriCloseStateEvent(unsigned long)+0xf8>
         f3b90:	e5d40097 	ldrb	r0, [r4, #151]	; fField151
         f3b94:	e3300043 	teq	r0, #67	; 0x43
         f3b98:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f3b9c:	e5d40050 	ldrb	r0, [r4, #80]	; fField80
         f3ba0:	e3300000 	teq	r0, #0	; 0x0
         f3ba4:	13a00000 	movne	r0, #0	; 0x0
         f3ba8:	15c40050 	strneb	r0, [r4, #80]	; fField80
         f3bac:	1584005c 	strne	r0, [r4, #92]	; fField92
         f3bb0:	e5941088 	ldr	r1, [r4, #136]	; fField136
         f3bb4:	e1a00004 	mov	r0, r4
         f3bb8:	e3a02021 	mov	r2, #33	; 0x21
         f3bbc:	eb65039e 	bl	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f3bc0:	ea00000c 	b	f3bf8 <TIrLAP::HandlePriCloseStateEvent(unsigned long)+0x110>
         f3bc4:	e1a00004 	mov	r0, r4
         f3bc8:	e3a01063 	mov	r1, #99	; 0x63
         f3bcc:	eb00053d 	bl	f50c8 <TIrLAP::RecdFinalRsp(unsigned char)>
         f3bd0:	e3300000 	teq	r0, #0	; 0x0
         f3bd4:	e1a00004 	mov	r0, r4
         f3bd8:	0a000002 	beq	f3be8 <TIrLAP::HandlePriCloseStateEvent(unsigned long)+0x100>
         f3bdc:	e3a01000 	mov	r1, #0	; 0x0
         f3be0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f3be4:	ea64ff81 	b	1a339f0 <TIrLAP::$DisconnectComplete(long)>
         f3be8:	e3a0100f 	mov	r1, #15	; 0xf
         f3bec:	eb000535 	bl	f50c8 <TIrLAP::RecdFinalRsp(unsigned char)>
         f3bf0:	e3300000 	teq	r0, #0	; 0x0
         f3bf4:	1affffe2 	bne	f3b84 <TIrLAP::HandlePriCloseStateEvent(unsigned long)+0x9c>
         f3bf8:	e1a01006 	mov	r1, r6
         f3bfc:	e1a00004 	mov	r0, r4
         f3c00:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f3c04:	ea00056a 	b	f51b4 <TIrLAP::StartInput(CBufferSegment *)>
    */
}

/**
 * Symbol: TIrLAP::HandleSecReceiveStateEvent(unsigned long)
 * Address: 000f3c08
 */
TIrLAP::HandleSecReceiveStateEvent(unsigned long) {
    /*
         f3c08:	e1a0c00d 	mov	ip, sp
         f3c0c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f3c10:	e24cb004 	sub	fp, ip, #4	; 0x4
         f3c14:	e1a04000 	mov	r4, r0
         f3c18:	e3a06000 	mov	r6, #0	; 0x0
         f3c1c:	e3a07001 	mov	r7, #1	; 0x1
         f3c20:	e3510017 	cmp	r1, #23	; 0x17
         f3c24:	0a0000c0 	beq	f3f2c <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x324>
         f3c28:	e59f5034 	ldr	r5, [pc, #34]	; f3c64 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x5c>
         f3c2c:	ca00000d 	bgt	f3c68 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x60>
         f3c30:	e3310001 	teq	r1, #1	; 0x1
         f3c34:	0a000068 	beq	f3ddc <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x1d4>
         f3c38:	e3310002 	teq	r1, #2	; 0x2
         f3c3c:	0a000071 	beq	f3e08 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x200>
         f3c40:	e331000d 	teq	r1, #13	; 0xd
         f3c44:	01a00004 	moveq	r0, r4
         f3c48:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f3c4c:	0a650370 	beq	1a34a14 <TIrLAP::$PostponePutRequest(void)>
         f3c50:	e3310013 	teq	r1, #19	; 0x13
         f3c54:	01a00004 	moveq	r0, r4
         f3c58:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f3c5c:	0a64ff64 	beq	1a339f4 <TIrLAP::$CancelPutRequest(void)>
         f3c60:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f3c64:	ffff6997 	swinv	0x00ff6997
         f3c68:	e331001a 	teq	r1, #26	; 0x1a
         f3c6c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f3c70:	e3310023 	teq	r1, #35	; 0x23
         f3c74:	0a00000c 	beq	f3cac <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0xa4>
         f3c78:	e3310024 	teq	r1, #36	; 0x24
         f3c7c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f3c80:	e5d40050 	ldrb	r0, [r4, #80]	; fField80
         f3c84:	e3300000 	teq	r0, #0	; 0x0
         f3c88:	0a000023 	beq	f3d1c <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x114>
         f3c8c:	e5d40051 	ldrb	r0, [r4, #81]	; fField81
         f3c90:	e3300000 	teq	r0, #0	; 0x0
         f3c94:	03a00043 	moveq	r0, #67	; 0x43
         f3c98:	13a00063 	movne	r0, #99	; 0x63
         f3c9c:	e5c40097 	strb	r0, [r4, #151]	; fField151
         f3ca0:	e3a0000a 	mov	r0, #10	; 0xa
         f3ca4:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f3ca8:	ea00003f 	b	f3dac <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x1a4>
         f3cac:	e594005c 	ldr	r0, [r4, #92]	; fField92
         f3cb0:	e5941064 	ldr	r1, [r4, #100]	; fField100
         f3cb4:	e1300001 	teq	r0, r1
         f3cb8:	1a000004 	bne	f3cd0 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0xc8>
         f3cbc:	e1a00004 	mov	r0, r4
         f3cc0:	eb000552 	bl	f5210 <TIrLAP::StopInput(void)>
         f3cc4:	e1a00004 	mov	r0, r4
         f3cc8:	e1a01005 	mov	r1, r5
         f3ccc:	ea000007 	b	f3cf0 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0xe8>
         f3cd0:	e5941014 	ldr	r1, [r4, #20]	; fField20
         f3cd4:	e5d12035 	ldrb	r2, [r1, #53]
         f3cd8:	e3320000 	teq	r2, #0	; 0x0
         f3cdc:	0a000005 	beq	f3cf8 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0xf0>
         f3ce0:	e1a00004 	mov	r0, r4
         f3ce4:	eb000549 	bl	f5210 <TIrLAP::StopInput(void)>
         f3ce8:	e1a00004 	mov	r0, r4
         f3cec:	e3a01000 	mov	r1, #0	; 0x0
         f3cf0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f3cf4:	ea64ff3d 	b	1a339f0 <TIrLAP::$DisconnectComplete(long)>
         f3cf8:	e5942060 	ldr	r2, [r4, #96]	; fField96
         f3cfc:	e1300002 	teq	r0, r2
         f3d00:	01a00001 	moveq	r0, r1
         f3d04:	03a01001 	moveq	r1, #1	; 0x1
         f3d08:	0bfff373 	bleq	f0adc <TIrGlue::PostAsyncEvent(unsigned long)>
         f3d0c:	e594005c 	ldr	r0, [r4, #92]	; fField92
         f3d10:	e2800001 	add	r0, r0, #1	; 0x1
         f3d14:	e584005c 	str	r0, [r4, #92]	; fField92
         f3d18:	ea000036 	b	f3df8 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x1f0>
         f3d1c:	e5d40058 	ldrb	r0, [r4, #88]	; fField88
         f3d20:	e3300000 	teq	r0, #0	; 0x0
         f3d24:	0a000003 	beq	f3d38 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x130>
         f3d28:	e1a00004 	mov	r0, r4
         f3d2c:	eb65033f 	bl	1a34a30 <TIrLAP::$OutputFRMRResponse(void)>
         f3d30:	e5c46058 	strb	r6, [r4, #88]	; fField88
         f3d34:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f3d38:	e5d4004e 	ldrb	r0, [r4, #78]	; fField78
         f3d3c:	e3300000 	teq	r0, #0	; 0x0
         f3d40:	0a000004 	beq	f3d58 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x150>
         f3d44:	e3a00005 	mov	r0, #5	; 0x5
         f3d48:	e5c40097 	strb	r0, [r4, #151]	; fField151
         f3d4c:	e5c4704c 	strb	r7, [r4, #76]	; fField76
         f3d50:	e5c4604e 	strb	r6, [r4, #78]	; fField78
         f3d54:	ea000014 	b	f3dac <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x1a4>
         f3d58:	e5d4004f 	ldrb	r0, [r4, #79]	; fField79
         f3d5c:	e3300000 	teq	r0, #0	; 0x0
         f3d60:	15c47097 	strneb	r7, [r4, #151]	; fField151
         f3d64:	15c4604c 	strneb	r6, [r4, #76]	; fField76
         f3d68:	15c4604f 	strneb	r6, [r4, #79]	; fField79
         f3d6c:	1a00000e 	bne	f3dac <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x1a4>
         f3d70:	e5d40097 	ldrb	r0, [r4, #151]	; fField151
         f3d74:	e3300000 	teq	r0, #0	; 0x0
         f3d78:	1a00000b 	bne	f3dac <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x1a4>
         f3d7c:	e5d4004d 	ldrb	r0, [r4, #77]	; fField77
         f3d80:	e3300000 	teq	r0, #0	; 0x0
         f3d84:	1a000003 	bne	f3d98 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x190>
         f3d88:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f3d8c:	e5900000 	ldr	r0, [r0]
         f3d90:	e3300000 	teq	r0, #0	; 0x0
         f3d94:	1a000008 	bne	f3dbc <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x1b4>
         f3d98:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         f3d9c:	e3300000 	teq	r0, #0	; 0x0
         f3da0:	03a00001 	moveq	r0, #1	; 0x1
         f3da4:	13a00005 	movne	r0, #5	; 0x5
         f3da8:	e5c40097 	strb	r0, [r4, #151]	; fField151
         f3dac:	e5d41097 	ldrb	r1, [r4, #151]	; fField151
         f3db0:	e1a00004 	mov	r0, r4
         f3db4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f3db8:	ea65031d 	b	1a34a34 <TIrLAP::$OutputControlFrame(unsigned char)>
         f3dbc:	e5c4609f 	strb	r6, [r4, #159]	; fField159
         f3dc0:	e3a00009 	mov	r0, #9	; 0x9
         f3dc4:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f3dc8:	e1a00004 	mov	r0, r4
         f3dcc:	e3a01024 	mov	r1, #36	; 0x24
         f3dd0:	e5942000 	ldr	r2, [r4]
         f3dd4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f3dd8:	e282f004 	add	pc, r2, #4	; 0x4
         f3ddc:	e5d40097 	ldrb	r0, [r4, #151]	; fField151
         f3de0:	e3300001 	teq	r0, #1	; 0x1
         f3de4:	13300005 	teqne	r0, #5	; 0x5
         f3de8:	13300087 	teqne	r0, #135	; 0x87
         f3dec:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f3df0:	e1a00004 	mov	r0, r4
         f3df4:	eb650304 	bl	1a34a0c <TIrLAP::$StartDataReceive(void)>
         f3df8:	e594108c 	ldr	r1, [r4, #140]	; fField140
         f3dfc:	e1a00004 	mov	r0, r4
         f3e00:	e3a02023 	mov	r2, #35	; 0x23
         f3e04:	ea000046 	b	f3f24 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x31c>
         f3e08:	e5d4009b 	ldrb	r0, [r4, #155]	; fField155
         f3e0c:	e3300000 	teq	r0, #0	; 0x0
         f3e10:	11a00004 	movne	r0, r4
         f3e14:	1b65030a 	blne	1a34a44 <TIrLAP::$StopTimer(void)>
         f3e18:	e584605c 	str	r6, [r4, #92]	; fField92
         f3e1c:	e5c46097 	strb	r6, [r4, #151]	; fField151
         f3e20:	e5d40058 	ldrb	r0, [r4, #88]	; fField88
         f3e24:	e3300000 	teq	r0, #0	; 0x0
         f3e28:	0a000002 	beq	f3e38 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x230>
         f3e2c:	e5d4009b 	ldrb	r0, [r4, #155]	; fField155
         f3e30:	e3300000 	teq	r0, #0	; 0x0
         f3e34:	0a00002f 	beq	f3ef8 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x2f0>
         f3e38:	e5d4009e 	ldrb	r0, [r4, #158]	; fField158
         f3e3c:	e2000003 	and	r0, r0, #3	; 0x3
         f3e40:	e3300003 	teq	r0, #3	; 0x3
         f3e44:	1a000004 	bne	f3e5c <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x254>
         f3e48:	e1a00004 	mov	r0, r4
         f3e4c:	e3a01003 	mov	r1, #3	; 0x3
         f3e50:	eb00047a 	bl	f5040 <TIrLAP::RecdCmd(unsigned char)>
         f3e54:	e3300000 	teq	r0, #0	; 0x0
         f3e58:	0a000005 	beq	f3e74 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x26c>
         f3e5c:	e5d400a1 	ldrb	r0, [r4, #161]	; fField161
         f3e60:	e310000c 	tst	r0, #12	; 0xc
         f3e64:	1a00001e 	bne	f3ee4 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x2dc>
         f3e68:	e1a00004 	mov	r0, r4
         f3e6c:	eb64feda 	bl	1a339dc <TIrLAP::$ProcessRecdInfoOrSuperFrame(void)>
         f3e70:	ea000020 	b	f3ef8 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x2f0>
         f3e74:	e1a00004 	mov	r0, r4
         f3e78:	e3a01043 	mov	r1, #67	; 0x43
         f3e7c:	eb00047a 	bl	f506c <TIrLAP::RecdPollCmd(unsigned char)>
         f3e80:	e3300000 	teq	r0, #0	; 0x0
         f3e84:	15c47050 	strneb	r7, [r4, #80]	; fField80
         f3e88:	15c47051 	strneb	r7, [r4, #81]	; fField81
         f3e8c:	1a000019 	bne	f3ef8 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x2f0>
         f3e90:	e1a00004 	mov	r0, r4
         f3e94:	e3a01083 	mov	r1, #131	; 0x83
         f3e98:	eb000473 	bl	f506c <TIrLAP::RecdPollCmd(unsigned char)>
         f3e9c:	e3300000 	teq	r0, #0	; 0x0
         f3ea0:	0a000006 	beq	f3ec0 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x2b8>
         f3ea4:	e5d4009a 	ldrb	r0, [r4, #154]	; fField154
         f3ea8:	e5d4101d 	ldrb	r1, [r4, #29]	; fField29
         f3eac:	e1300001 	teq	r0, r1
         f3eb0:	15c4609b 	strneb	r6, [r4, #155]	; fField155
         f3eb4:	05c47050 	streqb	r7, [r4, #80]	; fField80
         f3eb8:	05c46051 	streqb	r6, [r4, #81]	; fField81
         f3ebc:	ea00000d 	b	f3ef8 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x2f0>
         f3ec0:	e1a00004 	mov	r0, r4
         f3ec4:	e3a0100f 	mov	r1, #15	; 0xf
         f3ec8:	eb00047e 	bl	f50c8 <TIrLAP::RecdFinalRsp(unsigned char)>
         f3ecc:	e3300000 	teq	r0, #0	; 0x0
         f3ed0:	0a000003 	beq	f3ee4 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x2dc>
         f3ed4:	e1a00004 	mov	r0, r4
         f3ed8:	e1a01005 	mov	r1, r5
         f3edc:	eb64fec3 	bl	1a339f0 <TIrLAP::$DisconnectComplete(long)>
         f3ee0:	ea000004 	b	f3ef8 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)+0x2f0>
         f3ee4:	e594006c 	ldr	r0, [r4, #108]	; fField108
         f3ee8:	e2800001 	add	r0, r0, #1	; 0x1
         f3eec:	e584006c 	str	r0, [r4, #108]	; fField108
         f3ef0:	e1a00004 	mov	r0, r4
         f3ef4:	eb6502c7 	bl	1a34a18 <TIrLAP::$PrepareFRMRResponse(void)>
         f3ef8:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
         f3efc:	e3300008 	teq	r0, #8	; 0x8
         f3f00:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f3f04:	e5d4009b 	ldrb	r0, [r4, #155]	; fField155
         f3f08:	e3300000 	teq	r0, #0	; 0x0
         f3f0c:	01a00004 	moveq	r0, r4
         f3f10:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f3f14:	0a6502bc 	beq	1a34a0c <TIrLAP::$StartDataReceive(void)>
         f3f18:	e5941090 	ldr	r1, [r4, #144]	; fField144
         f3f1c:	e1a00004 	mov	r0, r4
         f3f20:	e3a02024 	mov	r2, #36	; 0x24
         f3f24:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f3f28:	ea6502c3 	b	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f3f2c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f3f30:	e584003c 	str	r0, [r4, #60]	; fField60
         f3f34:	e5c47050 	strb	r7, [r4, #80]	; fField80
         f3f38:	e5c46051 	strb	r6, [r4, #81]	; fField81
         f3f3c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::HandleSecTransmitStateEvent(unsigned long)
 * Address: 000f3f40
 */
TIrLAP::HandleSecTransmitStateEvent(unsigned long) {
    /*
         f3f40:	e1a0c00d 	mov	ip, sp
         f3f44:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f3f48:	e24cb004 	sub	fp, ip, #4	; 0x4
         f3f4c:	e1a04000 	mov	r4, r0
         f3f50:	e1a00001 	mov	r0, r1
         f3f54:	e3a01001 	mov	r1, #1	; 0x1
         f3f58:	e3500017 	cmp	r0, #23	; 0x17
         f3f5c:	0594000c 	ldreq	r0, [r4, #12]	; fField12
         f3f60:	0584003c 	streq	r0, [r4, #60]	; fField60
         f3f64:	05c41050 	streqb	r1, [r4, #80]	; fField80
         f3f68:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f3f6c:	ca00000a 	bgt	f3f9c <TIrLAP::HandleSecTransmitStateEvent(unsigned long)+0x5c>
         f3f70:	e3300001 	teq	r0, #1	; 0x1
         f3f74:	0a00002b 	beq	f4028 <TIrLAP::HandleSecTransmitStateEvent(unsigned long)+0xe8>
         f3f78:	e330000d 	teq	r0, #13	; 0xd
         f3f7c:	01a00004 	moveq	r0, r4
         f3f80:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         f3f84:	0a6502a2 	beq	1a34a14 <TIrLAP::$PostponePutRequest(void)>
         f3f88:	e3300013 	teq	r0, #19	; 0x13
         f3f8c:	01a00004 	moveq	r0, r4
         f3f90:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         f3f94:	0a64fe96 	beq	1a339f4 <TIrLAP::$CancelPutRequest(void)>
         f3f98:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f3f9c:	e330001a 	teq	r0, #26	; 0x1a
         f3fa0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f3fa4:	e3300024 	teq	r0, #36	; 0x24
         f3fa8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         f3fac:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f3fb0:	e5901000 	ldr	r1, [r0]
         f3fb4:	e2411001 	sub	r1, r1, #1	; 0x1
         f3fb8:	eb6bc8e1 	bl	1be6344 <CList::$At(long)>
         f3fbc:	e1a05000 	mov	r5, r0
         f3fc0:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f3fc4:	e5901000 	ldr	r1, [r0]
         f3fc8:	e2411001 	sub	r1, r1, #1	; 0x1
         f3fcc:	e3a02001 	mov	r2, #1	; 0x1
         f3fd0:	eb6be197 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         f3fd4:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f3fd8:	e5900000 	ldr	r0, [r0]
         f3fdc:	e3300000 	teq	r0, #0	; 0x0
         f3fe0:	13a00001 	movne	r0, #1	; 0x1
         f3fe4:	03a00000 	moveq	r0, #0	; 0x0
         f3fe8:	e5c40096 	strb	r0, [r4, #150]
         f3fec:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         f3ff0:	e3300000 	teq	r0, #0	; 0x0
         f3ff4:	1a000006 	bne	f4014 <TIrLAP::HandleSecTransmitStateEvent(unsigned long)+0xd4>
         f3ff8:	e5d4004b 	ldrb	r0, [r4, #75]
         f3ffc:	e3300001 	teq	r0, #1	; 0x1
         f4000:	15d40096 	ldrneb	r0, [r4, #150]
         f4004:	13300000 	teqne	r0, #0	; 0x0
         f4008:	1a000001 	bne	f4014 <TIrLAP::HandleSecTransmitStateEvent(unsigned long)+0xd4>
         f400c:	e3a02001 	mov	r2, #1	; 0x1
         f4010:	ea000000 	b	f4018 <TIrLAP::HandleSecTransmitStateEvent(unsigned long)+0xd8>
         f4014:	e3a02000 	mov	r2, #0	; 0x0
         f4018:	e1a01005 	mov	r1, r5
         f401c:	e1a00004 	mov	r0, r4
         f4020:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f4024:	ea650283 	b	1a34a38 <TIrLAP::$OutputDataFrame(TIrDataXferEvent *, unsigned char)>
         f4028:	e5d40097 	ldrb	r0, [r4, #151]	; fField151
         f402c:	e3300000 	teq	r0, #0	; 0x0
         f4030:	0a000003 	beq	f4044 <TIrLAP::HandleSecTransmitStateEvent(unsigned long)+0x104>
         f4034:	e3300001 	teq	r0, #1	; 0x1
         f4038:	13300005 	teqne	r0, #5	; 0x5
         f403c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         f4040:	ea000029 	b	f40ec <TIrLAP::HandleSecTransmitStateEvent(unsigned long)+0x1ac>
         f4044:	e5d4004b 	ldrb	r0, [r4, #75]
         f4048:	e2400001 	sub	r0, r0, #1	; 0x1
         f404c:	e20000ff 	and	r0, r0, #255	; 0xff
         f4050:	e5c4004b 	strb	r0, [r4, #75]
         f4054:	e3500000 	cmp	r0, #0	; 0x0
         f4058:	da00001b 	ble	f40cc <TIrLAP::HandleSecTransmitStateEvent(unsigned long)+0x18c>
         f405c:	e5d40096 	ldrb	r0, [r4, #150]
         f4060:	e3300000 	teq	r0, #0	; 0x0
         f4064:	0a000018 	beq	f40cc <TIrLAP::HandleSecTransmitStateEvent(unsigned long)+0x18c>
         f4068:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f406c:	e5901000 	ldr	r1, [r0]
         f4070:	e2411001 	sub	r1, r1, #1	; 0x1
         f4074:	eb6bc8b2 	bl	1be6344 <CList::$At(long)>
         f4078:	e1a05000 	mov	r5, r0
         f407c:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f4080:	e5901000 	ldr	r1, [r0]
         f4084:	e2411001 	sub	r1, r1, #1	; 0x1
         f4088:	e3a02001 	mov	r2, #1	; 0x1
         f408c:	eb6be168 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         f4090:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f4094:	e5900000 	ldr	r0, [r0]
         f4098:	e3300000 	teq	r0, #0	; 0x0
         f409c:	13a00001 	movne	r0, #1	; 0x1
         f40a0:	03a00000 	moveq	r0, #0	; 0x0
         f40a4:	e5c40096 	strb	r0, [r4, #150]
         f40a8:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         f40ac:	e3300000 	teq	r0, #0	; 0x0
         f40b0:	1affffd7 	bne	f4014 <TIrLAP::HandleSecTransmitStateEvent(unsigned long)+0xd4>
         f40b4:	e5d4004b 	ldrb	r0, [r4, #75]
         f40b8:	e3300001 	teq	r0, #1	; 0x1
         f40bc:	15d40096 	ldrneb	r0, [r4, #150]
         f40c0:	13300000 	teqne	r0, #0	; 0x0
         f40c4:	0affffd0 	beq	f400c <TIrLAP::HandleSecTransmitStateEvent(unsigned long)+0xcc>
         f40c8:	eaffffd1 	b	f4014 <TIrLAP::HandleSecTransmitStateEvent(unsigned long)+0xd4>
         f40cc:	e5d40082 	ldrb	r0, [r4, #130]
         f40d0:	e5c4004b 	strb	r0, [r4, #75]
         f40d4:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         f40d8:	e3300000 	teq	r0, #0	; 0x0
         f40dc:	11a00004 	movne	r0, r4
         f40e0:	13a01005 	movne	r1, #5	; 0x5
         f40e4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         f40e8:	1a650251 	bne	1a34a34 <TIrLAP::$OutputControlFrame(unsigned char)>
         f40ec:	e1a00004 	mov	r0, r4
         f40f0:	eb650245 	bl	1a34a0c <TIrLAP::$StartDataReceive(void)>
         f40f4:	e594108c 	ldr	r1, [r4, #140]	; fField140
         f40f8:	e1a00004 	mov	r0, r4
         f40fc:	e3a02023 	mov	r2, #35	; 0x23
         f4100:	eb65024d 	bl	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f4104:	e3a00008 	mov	r0, #8	; 0x8
         f4108:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f410c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::HandleSecCloseStateEvent(unsigned long)
 * Address: 000f4110
 */
TIrLAP::HandleSecCloseStateEvent(unsigned long) {
    /*
         f4110:	e1a0c00d 	mov	ip, sp
         f4114:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f4118:	e24cb004 	sub	fp, ip, #4	; 0x4
         f411c:	e1a04000 	mov	r4, r0
         f4120:	e3510017 	cmp	r1, #23	; 0x17
         f4124:	0594000c 	ldreq	r0, [r4, #12]	; fField12
         f4128:	05a4003c 	streq	r0, [r4, #60]!	; fField60
         f412c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f4130:	e59f5038 	ldr	r5, [pc, #38]	; f4170 <TIrLAP::HandleSecCloseStateEvent(unsigned long)+0x60>	; fField38
         f4134:	ca00000e 	bgt	f4174 <TIrLAP::HandleSecCloseStateEvent(unsigned long)+0x64>
         f4138:	e28460e4 	add	r6, r4, #228	; 0xe4
         f413c:	e3310001 	teq	r1, #1	; 0x1
         f4140:	0a000018 	beq	f41a8 <TIrLAP::HandleSecCloseStateEvent(unsigned long)+0x98>
         f4144:	e3310002 	teq	r1, #2	; 0x2
         f4148:	0a000020 	beq	f41d0 <TIrLAP::HandleSecCloseStateEvent(unsigned long)+0xc0>
         f414c:	e331000d 	teq	r1, #13	; 0xd
         f4150:	01a00004 	moveq	r0, r4
         f4154:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         f4158:	0a650229 	beq	1a34a04 <TIrLAP::$NotConnectedCompletion(void)>
         f415c:	e3310013 	teq	r1, #19	; 0x13
         f4160:	01a00004 	moveq	r0, r4
         f4164:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         f4168:	0a64fe21 	beq	1a339f4 <TIrLAP::$CancelPutRequest(void)>
         f416c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f4170:	ffff6997 	swinv	0x00ff6997
         f4174:	e331001a 	teq	r1, #26	; 0x1a
         f4178:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f417c:	e3310023 	teq	r1, #35	; 0x23
         f4180:	0a000005 	beq	f419c <TIrLAP::HandleSecCloseStateEvent(unsigned long)+0x8c>
         f4184:	e3310024 	teq	r1, #36	; 0x24
         f4188:	05d41097 	ldreqb	r1, [r4, #151]	; fField151
         f418c:	01a00004 	moveq	r0, r4
         f4190:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         f4194:	0a650226 	beq	1a34a34 <TIrLAP::$OutputControlFrame(unsigned char)>
         f4198:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f419c:	e1a00004 	mov	r0, r4
         f41a0:	eb00041a 	bl	f5210 <TIrLAP::StopInput(void)>
         f41a4:	ea000016 	b	f4204 <TIrLAP::HandleSecCloseStateEvent(unsigned long)+0xf4>
         f41a8:	e5d40097 	ldrb	r0, [r4, #151]	; fField151
         f41ac:	e3300043 	teq	r0, #67	; 0x43
         f41b0:	03a00000 	moveq	r0, #0	; 0x0
         f41b4:	05c40050 	streqb	r0, [r4, #80]	; fField80
         f41b8:	0a00001f 	beq	f423c <TIrLAP::HandleSecCloseStateEvent(unsigned long)+0x12c>
         f41bc:	e3300063 	teq	r0, #99	; 0x63
         f41c0:	01a00004 	moveq	r0, r4
         f41c4:	03a01000 	moveq	r1, #0	; 0x0
         f41c8:	0a00000f 	beq	f420c <TIrLAP::HandleSecCloseStateEvent(unsigned long)+0xfc>
         f41cc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f41d0:	e1a00004 	mov	r0, r4
         f41d4:	eb65021a 	bl	1a34a44 <TIrLAP::$StopTimer(void)>
         f41d8:	e1a00004 	mov	r0, r4
         f41dc:	e3a01043 	mov	r1, #67	; 0x43
         f41e0:	eb0003a1 	bl	f506c <TIrLAP::RecdPollCmd(unsigned char)>
         f41e4:	e3300000 	teq	r0, #0	; 0x0
         f41e8:	13a00063 	movne	r0, #99	; 0x63
         f41ec:	1a00000c 	bne	f4224 <TIrLAP::HandleSecCloseStateEvent(unsigned long)+0x114>
         f41f0:	e1a00004 	mov	r0, r4
         f41f4:	e3a0100f 	mov	r1, #15	; 0xf
         f41f8:	eb0003b2 	bl	f50c8 <TIrLAP::RecdFinalRsp(unsigned char)>
         f41fc:	e3300000 	teq	r0, #0	; 0x0
         f4200:	0a000003 	beq	f4214 <TIrLAP::HandleSecCloseStateEvent(unsigned long)+0x104>
         f4204:	e1a00004 	mov	r0, r4
         f4208:	e1a01005 	mov	r1, r5
         f420c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f4210:	ea64fdf6 	b	1a339f0 <TIrLAP::$DisconnectComplete(long)>
         f4214:	e5d4009b 	ldrb	r0, [r4, #155]	; fField155
         f4218:	e3300000 	teq	r0, #0	; 0x0
         f421c:	0a000006 	beq	f423c <TIrLAP::HandleSecCloseStateEvent(unsigned long)+0x12c>
         f4220:	e3a00043 	mov	r0, #67	; 0x43
         f4224:	e5c40097 	strb	r0, [r4, #151]	; fField151
         f4228:	e5941090 	ldr	r1, [r4, #144]	; fField144
         f422c:	e1a00004 	mov	r0, r4
         f4230:	e3a02024 	mov	r2, #36	; 0x24
         f4234:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f4238:	ea6501ff 	b	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f423c:	e594108c 	ldr	r1, [r4, #140]	; fField140
         f4240:	e1a00004 	mov	r0, r4
         f4244:	e3a02023 	mov	r2, #35	; 0x23
         f4248:	eb6501fb 	bl	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f424c:	e1a01006 	mov	r1, r6
         f4250:	e1a00004 	mov	r0, r4
         f4254:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f4258:	ea0003d5 	b	f51b4 <TIrLAP::StartInput(CBufferSegment *)>
    */
}

/**
 * Symbol: TIrLAP::UpdateNrReceived(void)
 * Address: 000f425c
 */
TIrLAP::UpdateNrReceived(void) {
    /*
         f425c:	e1a0c00d 	mov	ip, sp
         f4260:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f4264:	e24cb004 	sub	fp, ip, #4	; 0x4
         f4268:	e1a04000 	mov	r4, r0
         f426c:	e5d0004a 	ldrb	r0, [r0, #74]	; fField74
         f4270:	e5d4109c 	ldrb	r1, [r4, #156]	; fField156
         f4274:	e3a06000 	mov	r6, #0	; 0x0
         f4278:	e3a05001 	mov	r5, #1	; 0x1
         f427c:	e1300001 	teq	r0, r1
         f4280:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f4284:	e5d4004a 	ldrb	r0, [r4, #74]	; fField74
         f4288:	e0840100 	add	r0, r4, r0, lsl #2
         f428c:	e590115c 	ldr	r1, [r0, #348]
         f4290:	e5a0615c 	str	r6, [r0, #348]!
         f4294:	e1a00004 	mov	r0, r4
         f4298:	e3a02000 	mov	r2, #0	; 0x0
         f429c:	eb6501d7 	bl	1a34a00 <TIrLAP::$PutComplete(TIrDataXferEvent *, long)>
         f42a0:	e5d4109f 	ldrb	r1, [r4, #159]	; fField159
         f42a4:	e5d4004a 	ldrb	r0, [r4, #74]	; fField74
         f42a8:	e1c11015 	bic	r1, r1, r5, lsl r0
         f42ac:	e5c4109f 	strb	r1, [r4, #159]	; fField159
         f42b0:	e2800001 	add	r0, r0, #1	; 0x1
         f42b4:	e2000007 	and	r0, r0, #7	; 0x7
         f42b8:	e5c4004a 	strb	r0, [r4, #74]	; fField74
         f42bc:	e20000ff 	and	r0, r0, #255	; 0xff
         f42c0:	e5d4109c 	ldrb	r1, [r4, #156]	; fField156
         f42c4:	e1300001 	teq	r0, r1
         f42c8:	1affffed 	bne	f4284 <TIrLAP::UpdateNrReceived(void)+0x28>
         f42cc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::Init(TIrGlue *, TIrLMP *)
 * Address: 000f42d0
 */
TIrLAP::Init(TIrGlue *, TIrLMP *) {
    /*
         f42d0:	e1a0c00d 	mov	ip, sp
         f42d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f42d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f42dc:	e1a04000 	mov	r4, r0
         f42e0:	e2800014 	add	r0, r0, #20	; 0x14
         f42e4:	e8800006 	stmia	r0, {r1, r2}
         f42e8:	e2400014 	sub	r0, r0, #20	; 0x14
         f42ec:	eb650e3c 	bl	1a37be4 <TIrStream::$Init(TIrGlue *)>
         f42f0:	e1b05000 	movs	r5, r0
         f42f4:	1a000022 	bne	f4384 <TIrLAP::Init(TIrGlue *, TIrLMP *)+0xb4>
         f42f8:	eb6b01da 	bl	1bb4a68 <$rand>
         f42fc:	e1a01000 	mov	r1, r0
         f4300:	e3e00001 	mvn	r0, #1	; 0x1
         f4304:	eb6af98f 	bl	1bb2948 <$__rt_udiv>
         f4308:	e2810001 	add	r0, r1, #1	; 0x1
         f430c:	e3e03000 	mvn	r3, #0	; 0x0
         f4310:	e3a02000 	mov	r2, #0	; 0x0
         f4314:	e5840020 	str	r0, [r4, #32]	; fField32
         f4318:	e92d000c 	stmdb	sp!, {r2, r3}
         f431c:	e28410a4 	add	r1, r4, #164	; 0xa4
         f4320:	e28400e4 	add	r0, r4, #228	; 0xe4
         f4324:	e3a03000 	mov	r3, #0	; 0x0
         f4328:	e3a02040 	mov	r2, #64	; 0x40
         f432c:	eb6bd45e 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         f4330:	e28dd008 	add	sp, sp, #8	; 0x8
         f4334:	e1b05000 	movs	r5, r0
         f4338:	1a000011 	bne	f4384 <TIrLAP::Init(TIrGlue *, TIrLMP *)+0xb4>
         f433c:	e3a050a8 	mov	r5, #168	; 0xa8
         f4340:	e2455b07 	sub	r5, r5, #7168	; 0x1c00
         f4344:	e3a00000 	mov	r0, #0	; 0x0
         f4348:	eb6bbfb7 	bl	1be422c <CList::$__ct(void)>
         f434c:	e5840138 	str	r0, [r4, #312]	; fField312
         f4350:	e3300000 	teq	r0, #0	; 0x0
         f4354:	0a00000a 	beq	f4384 <TIrLAP::Init(TIrGlue *, TIrLMP *)+0xb4>
         f4358:	e3a00000 	mov	r0, #0	; 0x0
         f435c:	e3a05000 	mov	r5, #0	; 0x0
         f4360:	e0841100 	add	r1, r4, r0, lsl #2
         f4364:	e2800001 	add	r0, r0, #1	; 0x1
         f4368:	e3500008 	cmp	r0, #8	; 0x8
         f436c:	e5a1515c 	str	r5, [r1, #348]!
         f4370:	3afffffa 	bcc	f4360 <TIrLAP::Init(TIrGlue *, TIrLMP *)+0x90>
         f4374:	e1a00004 	mov	r0, r4
         f4378:	eb64fd99 	bl	1a339e4 <TIrLAP::$ResetStats(void)>
         f437c:	e1a00005 	mov	r0, r5
         f4380:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f4384:	e1a00004 	mov	r0, r4
         f4388:	eb6501ac 	bl	1a34a40 <TIrLAP::$DeInit(void)>
         f438c:	e1a00005 	mov	r0, r5
         f4390:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::ResendRejectedFrames(void)
 * Address: 000f4394
 */
TIrLAP::ResendRejectedFrames(void) {
    /*
         f4394:	e1a0c00d 	mov	ip, sp
         f4398:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f439c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f43a0:	e1a04000 	mov	r4, r0
         f43a4:	e5d00049 	ldrb	r0, [r0, #73]	; fField73
         f43a8:	e2400001 	sub	r0, r0, #1	; 0x1
         f43ac:	e2005007 	and	r5, r0, #7	; 0x7
         f43b0:	e3a07000 	mov	r7, #0	; 0x0
         f43b4:	e0846105 	add	r6, r4, r5, lsl #2
         f43b8:	e596215c 	ldr	r2, [r6, #348]
         f43bc:	e3320000 	teq	r2, #0	; 0x0
         f43c0:	0a00000b 	beq	f43f4 <TIrLAP::ResendRejectedFrames(void)+0x60>
         f43c4:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f43c8:	e5901000 	ldr	r1, [r0]
         f43cc:	eb6bd446 	bl	1be94ec <CList::$InsertAt(long, void *)>
         f43d0:	e5a6715c 	str	r7, [r6, #348]!
         f43d4:	e5940068 	ldr	r0, [r4, #104]	; fField104
         f43d8:	e2800001 	add	r0, r0, #1	; 0x1
         f43dc:	e5840068 	str	r0, [r4, #104]	; fField104
         f43e0:	e5d4009c 	ldrb	r0, [r4, #156]	; fField156
         f43e4:	e1300005 	teq	r0, r5
         f43e8:	12450001 	subne	r0, r5, #1	; 0x1
         f43ec:	12005007 	andne	r5, r0, #7	; 0x7
         f43f0:	1affffef 	bne	f43b4 <TIrLAP::ResendRejectedFrames(void)+0x20>
         f43f4:	e5d4009c 	ldrb	r0, [r4, #156]	; fField156
         f43f8:	e5c40049 	strb	r0, [r4, #73]	; fField73
         f43fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::ProcessRecdInfoOrSuperFrame(void)
 * Address: 000f4400
 */
TIrLAP::ProcessRecdInfoOrSuperFrame(void) {
    /*
         f4400:	e1a0c00d 	mov	ip, sp
         f4404:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f4408:	e24cb004 	sub	fp, ip, #4	; 0x4
         f440c:	e1a04000 	mov	r4, r0
         f4410:	e5d0009e 	ldrb	r0, [r0, #158]	; fField158
         f4414:	e3a06000 	mov	r6, #0	; 0x0
         f4418:	e3a05001 	mov	r5, #1	; 0x1
         f441c:	e3300003 	teq	r0, #3	; 0x3
         f4420:	0a000014 	beq	f4478 <TIrLAP::ProcessRecdInfoOrSuperFrame(void)+0x78>
         f4424:	e5d40094 	ldrb	r0, [r4, #148]	; fField148
         f4428:	e3300000 	teq	r0, #0	; 0x0
         f442c:	0a000004 	beq	f4444 <TIrLAP::ProcessRecdInfoOrSuperFrame(void)+0x44>
         f4430:	e5d41099 	ldrb	r1, [r4, #153]	; fField153
         f4434:	e3310001 	teq	r1, #1	; 0x1
         f4438:	0a000004 	beq	f4450 <TIrLAP::ProcessRecdInfoOrSuperFrame(void)+0x50>
         f443c:	e3300000 	teq	r0, #0	; 0x0
         f4440:	1a00000a 	bne	f4470 <TIrLAP::ProcessRecdInfoOrSuperFrame(void)+0x70>
         f4444:	e5d40099 	ldrb	r0, [r4, #153]	; fField153
         f4448:	e3300001 	teq	r0, #1	; 0x1
         f444c:	0a000007 	beq	f4470 <TIrLAP::ProcessRecdInfoOrSuperFrame(void)+0x70>
         f4450:	e594006c 	ldr	r0, [r4, #108]	; fField108
         f4454:	e2800001 	add	r0, r0, #1	; 0x1
         f4458:	e584006c 	str	r0, [r4, #108]	; fField108
         f445c:	e1a00004 	mov	r0, r4
         f4460:	e3a0108d 	mov	r1, #141	; 0x8d
         f4464:	e2411c97 	sub	r1, r1, #38656	; 0x9700
         f4468:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f446c:	ea64fd5f 	b	1a339f0 <TIrLAP::$DisconnectComplete(long)>
         f4470:	e1a00004 	mov	r0, r4
         f4474:	eb64fd56 	bl	1a339d4 <TIrLAP::$UpdateNrReceived(void)>
         f4478:	e5d4009e 	ldrb	r0, [r4, #158]	; fField158
         f447c:	e3500005 	cmp	r0, #5	; 0x5
         f4480:	0a000033 	beq	f4554 <TIrLAP::ProcessRecdInfoOrSuperFrame(void)+0x154>
         f4484:	ca00000b 	bgt	f44b8 <TIrLAP::ProcessRecdInfoOrSuperFrame(void)+0xb8>
         f4488:	e3300000 	teq	r0, #0	; 0x0
         f448c:	0a00000d 	beq	f44c8 <TIrLAP::ProcessRecdInfoOrSuperFrame(void)+0xc8>
         f4490:	e3300001 	teq	r0, #1	; 0x1
         f4494:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f4498:	e5c4604d 	strb	r6, [r4, #77]	; fField77
         f449c:	e5d400a1 	ldrb	r0, [r4, #161]	; fField161
         f44a0:	e3100001 	tst	r0, #1	; 0x1
         f44a4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f44a8:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         f44ac:	e3300000 	teq	r0, #0	; 0x0
         f44b0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f44b4:	ea000023 	b	f4548 <TIrLAP::ProcessRecdInfoOrSuperFrame(void)+0x148>
         f44b8:	e3300009 	teq	r0, #9	; 0x9
         f44bc:	1330000d 	teqne	r0, #13	; 0xd
         f44c0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f44c4:	ea00001f 	b	f4548 <TIrLAP::ProcessRecdInfoOrSuperFrame(void)+0x148>
         f44c8:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         f44cc:	e3300000 	teq	r0, #0	; 0x0
         f44d0:	05d4004e 	ldreqb	r0, [r4, #78]	; fField78
         f44d4:	03300000 	teqeq	r0, #0	; 0x0
         f44d8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f44dc:	e5d400a1 	ldrb	r0, [r4, #161]	; fField161
         f44e0:	e3100002 	tst	r0, #2	; 0x2
         f44e4:	15c45097 	strneb	r5, [r4, #151]	; fField151
         f44e8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f44ec:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f44f0:	e5941134 	ldr	r1, [r4, #308]	; fField308
         f44f4:	eb000688 	bl	f5f1c <TIrLMP::Demultiplexor(CBufferSegment *)>
         f44f8:	e5d410a0 	ldrb	r1, [r4, #160]	; fField160
         f44fc:	e5d40048 	ldrb	r0, [r4, #72]	; fField72
         f4500:	e1c11015 	bic	r1, r1, r5, lsl r0
         f4504:	e5c410a0 	strb	r1, [r4, #160]	; fField160
         f4508:	e5d41081 	ldrb	r1, [r4, #129]	; fField129
         f450c:	e0801001 	add	r1, r0, r1
         f4510:	e2011007 	and	r1, r1, #7	; 0x7
         f4514:	e5d420a0 	ldrb	r2, [r4, #160]	; fField160
         f4518:	e1821115 	orr	r1, r2, r5, lsl r1
         f451c:	e5c410a0 	strb	r1, [r4, #160]	; fField160
         f4520:	e2800001 	add	r0, r0, #1	; 0x1
         f4524:	e2000007 	and	r0, r0, #7	; 0x7
         f4528:	e5c40048 	strb	r0, [r4, #72]	; fField72
         f452c:	e5c45095 	strb	r5, [r4, #149]	; fField149
         f4530:	e5d4010e 	ldrb	r0, [r4, #270]	; fField270
         f4534:	e3300000 	teq	r0, #0	; 0x0
         f4538:	05c4504e 	streqb	r5, [r4, #78]	; fField78
         f453c:	e5d400a1 	ldrb	r0, [r4, #161]	; fField161
         f4540:	e3100001 	tst	r0, #1	; 0x1
         f4544:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f4548:	e1a00004 	mov	r0, r4
         f454c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f4550:	ea64fd20 	b	1a339d8 <TIrLAP::$ResendRejectedFrames(void)>
         f4554:	e5c4504d 	strb	r5, [r4, #77]	; fField77
         f4558:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         f455c:	e3300000 	teq	r0, #0	; 0x0
         f4560:	03a00001 	moveq	r0, #1	; 0x1
         f4564:	13a00005 	movne	r0, #5	; 0x5
         f4568:	e5c40097 	strb	r0, [r4, #151]	; fField151
         f456c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::CopyStatsTo(TCMOSlowIRStats *)
 * Address: 000f4570
 */
TIrLAP::CopyStatsTo(TCMOSlowIRStats *) {
    /*
         f4570:	e5902068 	ldr	r2, [r0, #104]	; fField104
         f4574:	e5812018 	str	r2, [r1, #24]	; fField24
         f4578:	e590006c 	ldr	r0, [r0, #108]	; fField108
         f457c:	e5a10024 	str	r0, [r1, #36]!	; fField36
         f4580:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLAP::ResetStats(void)
 * Address: 000f4584
 */
TIrLAP::ResetStats(void) {
    /*
         f4584:	e3a01000 	mov	r1, #0	; 0x0
         f4588:	e5801068 	str	r1, [r0, #104]	; fField104
         f458c:	e5a0106c 	str	r1, [r0, #108]!	; fField108
         f4590:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLAP::ParseNegotiateAndInitConnState(unsigned char)
 * Address: 000f4594
 */
TIrLAP::ParseNegotiateAndInitConnState(unsigned char) {
    /*
         f4594:	e1a0c00d 	mov	ip, sp
         f4598:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         f459c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f45a0:	e1a04000 	mov	r4, r0
         f45a4:	e20160ff 	and	r6, r1, #255	; 0xff
         f45a8:	e5c06094 	strb	r6, [r0, #148]	; fField148
         f45ac:	e5901134 	ldr	r1, [r0, #308]	; fField308
         f45b0:	e5900044 	ldr	r0, [r0, #68]	; fField68
         f45b4:	eb65096f 	bl	1a36b78 <TIrQOS::$ExtractInfoFromBuffer(CBufferSegment *)>
         f45b8:	e1b05000 	movs	r5, r0
         f45bc:	1a00006f 	bne	f4780 <TIrLAP::ParseNegotiateAndInitConnState(unsigned char)+0x1ec>
         f45c0:	e2841040 	add	r1, r4, #64	; 0x40
         f45c4:	e8910003 	ldmia	r1, {r0, r1}
         f45c8:	eb65096b 	bl	1a36b7c <TIrQOS::$NegotiateWith(TIrQOS *)>
         f45cc:	e1b05000 	movs	r5, r0
         f45d0:	1a00006a 	bne	f4780 <TIrLAP::ParseNegotiateAndInitConnState(unsigned char)+0x1ec>
         f45d4:	e5940044 	ldr	r0, [r4, #68]	; fField68
         f45d8:	e5941040 	ldr	r1, [r4, #64]	; fField64
         f45dc:	eb650966 	bl	1a36b7c <TIrQOS::$NegotiateWith(TIrQOS *)>
         f45e0:	e1b05000 	movs	r5, r0
         f45e4:	1a000065 	bne	f4780 <TIrLAP::ParseNegotiateAndInitConnState(unsigned char)+0x1ec>
         f45e8:	e5940040 	ldr	r0, [r4, #64]	; fField64
         f45ec:	eb650d6b 	bl	1a37ba0 <TIrQOS::$GetMaxTurnAroundTime(void)>
         f45f0:	e5840084 	str	r0, [r4, #132]	; fField132
         f45f4:	e5940044 	ldr	r0, [r4, #68]	; fField68
         f45f8:	eb650d68 	bl	1a37ba0 <TIrQOS::$GetMaxTurnAroundTime(void)>
         f45fc:	e5840088 	str	r0, [r4, #136]	; fField136
         f4600:	e5940044 	ldr	r0, [r4, #68]	; fField68
         f4604:	eb650d65 	bl	1a37ba0 <TIrQOS::$GetMaxTurnAroundTime(void)>
         f4608:	e1a05000 	mov	r5, r0
         f460c:	e5940044 	ldr	r0, [r4, #68]	; fField68
         f4610:	eb650d62 	bl	1a37ba0 <TIrQOS::$GetMaxTurnAroundTime(void)>
         f4614:	e0850120 	add	r0, r5, r0, lsr #2
         f4618:	e584008c 	str	r0, [r4, #140]	; fField140
         f461c:	e5940044 	ldr	r0, [r4, #68]	; fField68
         f4620:	eb650951 	bl	1a36b6c <TIrQOS::$GetMinTurnAroundTime(void)>
         f4624:	e3360000 	teq	r6, #0	; 0x0
         f4628:	e5840090 	str	r0, [r4, #144]	; fField144
         f462c:	0594508c 	ldreq	r5, [r4, #140]	; fField140
         f4630:	15945088 	ldrne	r5, [r4, #136]	; fField136
         f4634:	e5940040 	ldr	r0, [r4, #64]	; fField64
         f4638:	eb65094c 	bl	1a36b70 <TIrQOS::$GetLinkDiscThresholdTime(void)>
         f463c:	e1a06000 	mov	r6, r0
         f4640:	e08010a5 	add	r1, r0, r5, lsr #1
         f4644:	e1a00005 	mov	r0, r5
         f4648:	eb6af8be 	bl	1bb2948 <$__rt_udiv>
         f464c:	e5840064 	str	r0, [r4, #100]	; fField100
         f4650:	e3a009a3 	mov	r0, #2670592	; 0x28c000
         f4654:	e2800502 	add	r0, r0, #8388608	; 0x800000
         f4658:	e3a07000 	mov	r7, #0	; 0x0
         f465c:	e1360000 	teq	r6, r0
         f4660:	05847060 	streq	r7, [r4, #96]	; fField96
         f4664:	0a000004 	beq	f467c <TIrLAP::ParseNegotiateAndInitConnState(unsigned char)+0xe8>
         f4668:	e08010a5 	add	r1, r0, r5, lsr #1
         f466c:	e1a00005 	mov	r0, r5
         f4670:	eb6af8b4 	bl	1bb2948 <$__rt_udiv>
         f4674:	e2400001 	sub	r0, r0, #1	; 0x1
         f4678:	e5840060 	str	r0, [r4, #96]	; fField96
         f467c:	e5940044 	ldr	r0, [r4, #68]	; fField68
         f4680:	eb650937 	bl	1a36b64 <TIrQOS::$GetWindowSize(void)>
         f4684:	e5c40082 	strb	r0, [r4, #130]
         f4688:	e5940040 	ldr	r0, [r4, #64]	; fField64
         f468c:	eb650934 	bl	1a36b64 <TIrQOS::$GetWindowSize(void)>
         f4690:	e5c40081 	strb	r0, [r4, #129]	; fField129
         f4694:	e5940040 	ldr	r0, [r4, #64]	; fField64
         f4698:	eb650931 	bl	1a36b64 <TIrQOS::$GetWindowSize(void)>
         f469c:	e1a08000 	mov	r8, r0
         f46a0:	e5940040 	ldr	r0, [r4, #64]	; fField64
         f46a4:	eb65092d 	bl	1a36b60 <TIrQOS::$GetDataSize(void)>
         f46a8:	e1a09000 	mov	r9, r0
         f46ac:	e5c4710e 	strb	r7, [r4, #270]	; fField270
         f46b0:	e3580000 	cmp	r8, #0	; 0x0
         f46b4:	e5847110 	str	r7, [r4, #272]	; fField272
         f46b8:	9a000017 	bls	f471c <TIrLAP::ParseNegotiateAndInitConnState(unsigned char)+0x188>
         f46bc:	e3a0a0a8 	mov	sl, #168	; 0xa8
         f46c0:	e24aab07 	sub	sl, sl, #7168	; 0x1c00
         f46c4:	e1a0500a 	mov	r5, sl
         f46c8:	e3a00000 	mov	r0, #0	; 0x0
         f46cc:	eb6bbecc 	bl	1be4204 <CBufferSegment::$__ct(void)>
         f46d0:	e1b06000 	movs	r6, r0
         f46d4:	0a000027 	beq	f4778 <TIrLAP::ParseNegotiateAndInitConnState(unsigned char)+0x1e4>
         f46d8:	e1a01009 	mov	r1, r9
         f46dc:	e1a00006 	mov	r0, r6
         f46e0:	eb6bd370 	bl	1be94a8 <CBufferSegment::$Init(long)>
         f46e4:	e1b05000 	movs	r5, r0
         f46e8:	1a00001e 	bne	f4768 <TIrLAP::ParseNegotiateAndInitConnState(unsigned char)+0x1d4>
         f46ec:	e5940110 	ldr	r0, [r4, #272]	; fField272
         f46f0:	e0840100 	add	r0, r4, r0, lsl #2
         f46f4:	e5a06114 	str	r6, [r0, #276]!
         f46f8:	e5d4210e 	ldrb	r2, [r4, #270]	; fField270
         f46fc:	e3a01001 	mov	r1, #1	; 0x1
         f4700:	e5940110 	ldr	r0, [r4, #272]	; fField272
         f4704:	e1821011 	orr	r1, r2, r1, lsl r0
         f4708:	e5c4110e 	strb	r1, [r4, #270]	; fField270
         f470c:	e2800001 	add	r0, r0, #1	; 0x1
         f4710:	e5840110 	str	r0, [r4, #272]	; fField272
         f4714:	e1500008 	cmp	r0, r8
         f4718:	3affffe9 	bcc	f46c4 <TIrLAP::ParseNegotiateAndInitConnState(unsigned char)+0x130>
         f471c:	e1a00007 	mov	r0, r7
         f4720:	e5c47048 	strb	r7, [r4, #72]	; fField72
         f4724:	e5c47049 	strb	r7, [r4, #73]	; fField73
         f4728:	e5d41082 	ldrb	r1, [r4, #130]
         f472c:	e5c4104b 	strb	r1, [r4, #75]
         f4730:	e5d42081 	ldrb	r2, [r4, #129]	; fField129
         f4734:	e2622008 	rsb	r2, r2, #8	; 0x8
         f4738:	e3a010ff 	mov	r1, #255	; 0xff
         f473c:	e1a01231 	mov	r1, r1, lsr r2
         f4740:	e5c410a0 	strb	r1, [r4, #160]	; fField160
         f4744:	e584705c 	str	r7, [r4, #92]	; fField92
         f4748:	e5c4004d 	strb	r0, [r4, #77]	; fField77
         f474c:	e5c4004c 	strb	r0, [r4, #76]	; fField76
         f4750:	e5c4004e 	strb	r0, [r4, #78]	; fField78
         f4754:	e5c4004f 	strb	r0, [r4, #79]	; fField79
         f4758:	e5c4009c 	strb	r0, [r4, #156]	; fField156
         f475c:	e5c4009d 	strb	r0, [r4, #157]
         f4760:	e5c4004a 	strb	r0, [r4, #74]	; fField74
         f4764:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f4768:	e1a00006 	mov	r0, r6
         f476c:	e3a01001 	mov	r1, #1	; 0x1
         f4770:	e1a0e00f 	mov	lr, pc
         f4774:	e596f000 	ldr	pc, [r6]
         f4778:	e1a00004 	mov	r0, r4
         f477c:	eb6500b5 	bl	1a34a58 <TIrLAP::$FreeGetBuffers(void)>
         f4780:	e1a01005 	mov	r1, r5
         f4784:	e1a00004 	mov	r0, r4
         f4788:	eb64fc97 	bl	1a339ec <TIrLAP::$ConnLstnComplete(long)>
         f478c:	e1a00005 	mov	r0, r5
         f4790:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::ConnLstnComplete(long)
 * Address: 000f4794
 */
TIrLAP::ConnLstnComplete(long) {
    /*
         f4794:	e3a0c000 	mov	ip, #0	; 0x0
         f4798:	e5902038 	ldr	r2, [r0, #56]	; fField56
         f479c:	e580c038 	str	ip, [r0, #56]	; fField56
         f47a0:	e5d23000 	ldrb	r3, [r2]
         f47a4:	e2833001 	add	r3, r3, #1	; 0x1
         f47a8:	e20330ff 	and	r3, r3, #255	; 0xff
         f47ac:	e5c23000 	strb	r3, [r2]
         f47b0:	e3330006 	teq	r3, #6	; 0x6
         f47b4:	05d03094 	ldreqb	r3, [r0, #148]	; fField148
         f47b8:	03330000 	teqeq	r3, #0	; 0x0
         f47bc:	13a03000 	movne	r3, #0	; 0x0
         f47c0:	03a03001 	moveq	r3, #1	; 0x1
         f47c4:	e5c23011 	strb	r3, [r2, #17]
         f47c8:	e5821004 	str	r1, [r2, #4]	; fField4
         f47cc:	e5903034 	ldr	r3, [r0, #52]	; fField52
         f47d0:	e3310000 	teq	r1, #0	; 0x0
         f47d4:	e582300c 	str	r3, [r2, #12]	; fField12
         f47d8:	15c0c01c 	strneb	ip, [r0, #28]	; fField28
         f47dc:	e5900018 	ldr	r0, [r0, #24]	; fField24
         f47e0:	e1a01002 	mov	r1, r2
         f47e4:	ea650cff 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrLAP::DisconnectComplete(long)
 * Address: 000f47e8
 */
TIrLAP::DisconnectComplete(long) {
    /*
         f47e8:	e1a0c00d 	mov	ip, sp
         f47ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f47f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f47f4:	e1a04000 	mov	r4, r0
         f47f8:	e1a05001 	mov	r5, r1
         f47fc:	eb650090 	bl	1a34a44 <TIrLAP::$StopTimer(void)>
         f4800:	e1a00004 	mov	r0, r4
         f4804:	eb000281 	bl	f5210 <TIrLAP::StopInput(void)>
         f4808:	e1a00004 	mov	r0, r4
         f480c:	eb000264 	bl	f51a4 <TIrLAP::StopOutput(void)>
         f4810:	e3350000 	teq	r5, #0	; 0x0
         f4814:	059f203c 	ldreq	r2, [pc, #3c]	; f4858 <TIrLAP::DisconnectComplete(long)+0x70>
         f4818:	11a02005 	movne	r2, r5
         f481c:	e1a00004 	mov	r0, r4
         f4820:	e3a01000 	mov	r1, #0	; 0x0
         f4824:	eb64fc73 	bl	1a339f8 <TIrLAP::$CancelPendingPutRequests(TLSAPConn *, long)>
         f4828:	e3a00000 	mov	r0, #0	; 0x0
         f482c:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f4830:	e594103c 	ldr	r1, [r4, #60]	; fField60
         f4834:	e3310000 	teq	r1, #0	; 0x0
         f4838:	0a000007 	beq	f485c <TIrLAP::DisconnectComplete(long)+0x74>
         f483c:	e584003c 	str	r0, [r4, #60]	; fField60
         f4840:	e3a00018 	mov	r0, #24	; 0x18
         f4844:	e5c10000 	strb	r0, [r1]
         f4848:	e5815004 	str	r5, [r1, #4]	; fField4
         f484c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f4850:	eb650ce4 	bl	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f4854:	ea000003 	b	f4868 <TIrLAP::DisconnectComplete(long)+0x80>
         f4858:	ffffc17b 	swinv	0x00ffc17b
         f485c:	e1a01005 	mov	r1, r5
         f4860:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f4864:	ebfff09e 	bl	f0ae4 <TIrGlue::StartTerminate(long)>
         f4868:	e1a00004 	mov	r0, r4
         f486c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f4870:	ea650064 	b	1a34a08 <TIrLAP::$ApplyDefaultConnParms(void)>
    */
}

/**
 * Symbol: TIrLAP::CancelPutRequest(void)
 * Address: 000f4874
 */
TIrLAP::CancelPutRequest(void) {
    /*
         f4874:	e1a0c00d 	mov	ip, sp
         f4878:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f487c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f4880:	e590400c 	ldr	r4, [r0, #12]	; fField12
         f4884:	e5941008 	ldr	r1, [r4, #8]
         f4888:	e59f2020 	ldr	r2, [pc, #20]	; f48b0 <TIrLAP::CancelPutRequest(void)+0x3c>	; fField20
         f488c:	eb64fc59 	bl	1a339f8 <TIrLAP::$CancelPendingPutRequests(TLSAPConn *, long)>
         f4890:	e3a00014 	mov	r0, #20	; 0x14
         f4894:	e5c40000 	strb	r0, [r4]
         f4898:	e3a00000 	mov	r0, #0	; 0x0
         f489c:	e5840004 	str	r0, [r4, #4]	; fField4
         f48a0:	e5940008 	ldr	r0, [r4, #8]
         f48a4:	e1a01004 	mov	r1, r4
         f48a8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f48ac:	ea650ccd 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f48b0:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TIrLAP::CancelPendingPutRequests(TLSAPConn *, long)
 * Address: 000f48b4
 */
TIrLAP::CancelPendingPutRequests(TLSAPConn *, long) {
    /*
         f48b4:	e1a0c00d 	mov	ip, sp
         f48b8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         f48bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         f48c0:	e1a04000 	mov	r4, r0
         f48c4:	e1a05001 	mov	r5, r1
         f48c8:	e1a06002 	mov	r6, r2
         f48cc:	e3a07000 	mov	r7, #0	; 0x0
         f48d0:	e3a08000 	mov	r8, #0	; 0x0
         f48d4:	e0840107 	add	r0, r4, r7, lsl #2
         f48d8:	e590115c 	ldr	r1, [r0, #348]
         f48dc:	e3310000 	teq	r1, #0	; 0x0
         f48e0:	0a000007 	beq	f4904 <TIrLAP::CancelPendingPutRequests(TLSAPConn *, long)+0x50>
         f48e4:	e3350000 	teq	r5, #0	; 0x0
         f48e8:	15912008 	ldrne	r2, [r1, #8]
         f48ec:	11320005 	teqne	r2, r5
         f48f0:	1a000003 	bne	f4904 <TIrLAP::CancelPendingPutRequests(TLSAPConn *, long)+0x50>
         f48f4:	e1a02006 	mov	r2, r6
         f48f8:	e5a0815c 	str	r8, [r0, #348]!
         f48fc:	e1a00004 	mov	r0, r4
         f4900:	eb65003e 	bl	1a34a00 <TIrLAP::$PutComplete(TIrDataXferEvent *, long)>
         f4904:	e2877001 	add	r7, r7, #1	; 0x1
         f4908:	e3570008 	cmp	r7, #8	; 0x8
         f490c:	bafffff0 	blt	f48d4 <TIrLAP::CancelPendingPutRequests(TLSAPConn *, long)+0x20>
         f4910:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f4914:	e5900000 	ldr	r0, [r0]
         f4918:	e2507001 	subs	r7, r0, #1	; 0x1
         f491c:	491ba9f0 	ldmmidb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         f4920:	e1a01007 	mov	r1, r7
         f4924:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f4928:	eb6bc685 	bl	1be6344 <CList::$At(long)>
         f492c:	e1b08000 	movs	r8, r0
         f4930:	0a00000b 	beq	f4964 <TIrLAP::CancelPendingPutRequests(TLSAPConn *, long)+0xb0>
         f4934:	e3350000 	teq	r5, #0	; 0x0
         f4938:	15980008 	ldrne	r0, [r8, #8]
         f493c:	11300005 	teqne	r0, r5
         f4940:	1a000007 	bne	f4964 <TIrLAP::CancelPendingPutRequests(TLSAPConn *, long)+0xb0>
         f4944:	e1a01007 	mov	r1, r7
         f4948:	e3a02001 	mov	r2, #1	; 0x1
         f494c:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f4950:	eb6bdf37 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         f4954:	e1a02006 	mov	r2, r6
         f4958:	e1a01008 	mov	r1, r8
         f495c:	e1a00004 	mov	r0, r4
         f4960:	eb650026 	bl	1a34a00 <TIrLAP::$PutComplete(TIrDataXferEvent *, long)>
         f4964:	e2577001 	subs	r7, r7, #1	; 0x1
         f4968:	5affffec 	bpl	f4920 <TIrLAP::CancelPendingPutRequests(TLSAPConn *, long)+0x6c>
         f496c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::PutComplete(TIrDataXferEvent *, long)
 * Address: 000f4970
 */
TIrLAP::PutComplete(TIrDataXferEvent *, long) {
    /*
         f4970:	e3310000 	teq	r1, #0	; 0x0
         f4974:	01a0f00e 	moveq	pc, lr
         f4978:	e5913008 	ldr	r3, [r1, #8]
         f497c:	e3330000 	teq	r3, #0	; 0x0
         f4980:	05900014 	ldreq	r0, [r0, #20]	; fField20
         f4984:	0a64f3cd 	beq	1a318c0 <TIrGlue::$ReleaseEventBlock(TIrEvent *)>
         f4988:	e3a0000e 	mov	r0, #14	; 0xe
         f498c:	e5c10000 	strb	r0, [r1]
         f4990:	e1a00003 	mov	r0, r3
         f4994:	e5812004 	str	r2, [r1, #4]	; fField4
         f4998:	ea650c92 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrLAP::Reset(void)
 * Address: 000f499c
 */
TIrLAP::Reset(void) {
    /*
         f499c:	e3a01000 	mov	r1, #0	; 0x0
         f49a0:	e5c0101c 	strb	r1, [r0, #28]	; fField28
         f49a4:	ea65002b 	b	1a34a58 <TIrLAP::$FreeGetBuffers(void)>
    */
}

/**
 * Symbol: TIrLAP::NotConnectedCompletion(void)
 * Address: 000f49a8
 */
TIrLAP::NotConnectedCompletion(void) {
    /*
         f49a8:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
         f49ac:	e5d10000 	ldrb	r0, [r1]
         f49b0:	e330000d 	teq	r0, #13	; 0xd
         f49b4:	03a0000e 	moveq	r0, #14	; 0xe
         f49b8:	05c10000 	streqb	r0, [r1]
         f49bc:	e59f0008 	ldr	r0, [pc, #8]	; f49cc <TIrLAP::NotConnectedCompletion(void)+0x24>
         f49c0:	e5810004 	str	r0, [r1, #4]	; fField4
         f49c4:	e5910008 	ldr	r0, [r1, #8]
         f49c8:	ea650c86 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f49cc:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TIrLAP::ApplyDefaultConnParms(void)
 * Address: 000f49d0
 */
TIrLAP::ApplyDefaultConnParms(void) {
    /*
         f49d0:	e1a0c00d 	mov	ip, sp
         f49d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f49d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f49dc:	e1a04000 	mov	r4, r0
         f49e0:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f49e4:	e3a01d96 	mov	r1, #9600	; 0x2580
         f49e8:	ebfff082 	bl	f0bf8 <TIrGlue::ChangeSpeed(unsigned long)>
         f49ec:	e3a0000a 	mov	r0, #10	; 0xa
         f49f0:	e5c40080 	strb	r0, [r4, #128]	; fField128
         f49f4:	e3a00000 	mov	r0, #0	; 0x0
         f49f8:	e5c4004c 	strb	r0, [r4, #76]	; fField76
         f49fc:	e5c4004e 	strb	r0, [r4, #78]	; fField78
         f4a00:	e5c40050 	strb	r0, [r4, #80]	; fField80
         f4a04:	e5c40058 	strb	r0, [r4, #88]	; fField88
         f4a08:	e3a00001 	mov	r0, #1	; 0x1
         f4a0c:	e5c40095 	strb	r0, [r4, #149]	; fField149
         f4a10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::StartDataReceive(void)
 * Address: 000f4a14
 */
TIrLAP::StartDataReceive(void) {
    /*
         f4a14:	e92d4010 	stmdb	sp!, {r4, lr}
         f4a18:	e5d01095 	ldrb	r1, [r0, #149]	; fField149
         f4a1c:	e3310000 	teq	r1, #0	; 0x0
         f4a20:	05903134 	ldreq	r3, [r0, #308]	; fField308
         f4a24:	0a000014 	beq	f4a7c <TIrLAP::StartDataReceive(void)+0x68>
         f4a28:	e28030e4 	add	r3, r0, #228	; 0xe4
         f4a2c:	e3a02000 	mov	r2, #0	; 0x0
         f4a30:	e3a01001 	mov	r1, #1	; 0x1
         f4a34:	e590e110 	ldr	lr, [r0, #272]	; fField272
         f4a38:	e35e0000 	cmp	lr, #0	; 0x0
         f4a3c:	9a00000e 	bls	f4a7c <TIrLAP::StartDataReceive(void)+0x68>
         f4a40:	e5d0c10e 	ldrb	ip, [r0, #270]	; fField270
         f4a44:	e11c0001 	tst	ip, r1
         f4a48:	0a000006 	beq	f4a68 <TIrLAP::StartDataReceive(void)+0x54>
         f4a4c:	e1cc1001 	bic	r1, ip, r1
         f4a50:	e5c0110e 	strb	r1, [r0, #270]	; fField270
         f4a54:	e0801102 	add	r1, r0, r2, lsl #2
         f4a58:	e5b13114 	ldr	r3, [r1, #276]!
         f4a5c:	e3a01000 	mov	r1, #0	; 0x0
         f4a60:	e5c01095 	strb	r1, [r0, #149]	; fField149
         f4a64:	ea000004 	b	f4a7c <TIrLAP::StartDataReceive(void)+0x68>
         f4a68:	e2822001 	add	r2, r2, #1	; 0x1
         f4a6c:	e1a01081 	mov	r1, r1, lsl #1
         f4a70:	e20110ff 	and	r1, r1, #255	; 0xff
         f4a74:	e15e0002 	cmp	lr, r2
         f4a78:	8afffff1 	bhi	f4a44 <TIrLAP::StartDataReceive(void)+0x30>
         f4a7c:	e1a01003 	mov	r1, r3
         f4a80:	e8bd4010 	ldmia	sp!, {r4, lr}
         f4a84:	ea0001ca 	b	f51b4 <TIrLAP::StartInput(CBufferSegment *)>
    */
}

/**
 * Symbol: TIrLAP::ReleaseInputBuffer(CBufferSegment *)
 * Address: 000f4a88
 */
TIrLAP::ReleaseInputBuffer(CBufferSegment *) {
    /*
         f4a88:	e92d4000 	stmdb	sp!, {lr}
         f4a8c:	e3a02000 	mov	r2, #0	; 0x0
         f4a90:	e3a03001 	mov	r3, #1	; 0x1
         f4a94:	e590c110 	ldr	ip, [r0, #272]	; fField272
         f4a98:	e35c0000 	cmp	ip, #0	; 0x0
         f4a9c:	9a00000a 	bls	f4acc <TIrLAP::ReleaseInputBuffer(CBufferSegment *)+0x44>
         f4aa0:	e080e102 	add	lr, r0, r2, lsl #2
         f4aa4:	e59ee114 	ldr	lr, [lr, #276]
         f4aa8:	e13e0001 	teq	lr, r1
         f4aac:	05d0e10e 	ldreqb	lr, [r0, #270]	; fField270
         f4ab0:	018ee003 	orreq	lr, lr, r3
         f4ab4:	05c0e10e 	streqb	lr, [r0, #270]	; fField270
         f4ab8:	e2822001 	add	r2, r2, #1	; 0x1
         f4abc:	e1a03083 	mov	r3, r3, lsl #1
         f4ac0:	e20330ff 	and	r3, r3, #255	; 0xff
         f4ac4:	e15c0002 	cmp	ip, r2
         f4ac8:	8afffff4 	bhi	f4aa0 <TIrLAP::ReleaseInputBuffer(CBufferSegment *)+0x18>
         f4acc:	e5d0204e 	ldrb	r2, [r0, #78]	; fField78
         f4ad0:	e3a01000 	mov	r1, #0	; 0x0
         f4ad4:	e3320000 	teq	r2, #0	; 0x0
         f4ad8:	15c0104e 	strneb	r1, [r0, #78]	; fField78
         f4adc:	18bd8000 	ldmneia	sp!, {pc}
         f4ae0:	e5d0204c 	ldrb	r2, [r0, #76]	; fField76
         f4ae4:	e3320000 	teq	r2, #0	; 0x0
         f4ae8:	08bd8000 	ldmeqia	sp!, {pc}
         f4aec:	e5d0204f 	ldrb	r2, [r0, #79]	; fField79
         f4af0:	e3320000 	teq	r2, #0	; 0x0
         f4af4:	18bd8000 	ldmneia	sp!, {pc}
         f4af8:	e3a0201a 	mov	r2, #26	; 0x1a
         f4afc:	e5c02078 	strb	r2, [r0, #120]	; fField120
         f4b00:	e580107c 	str	r1, [r0, #124]	; fField124
         f4b04:	e3a01001 	mov	r1, #1	; 0x1
         f4b08:	e5c0104f 	strb	r1, [r0, #79]	; fField79
         f4b0c:	e2801078 	add	r1, r0, #120	; 0x78
         f4b10:	e8bd4000 	ldmia	sp!, {lr}
         f4b14:	ea650c33 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrLAP::PostponePutRequest(void)
 * Address: 000f4b18
 */
TIrLAP::PostponePutRequest(void) {
    /*
         f4b18:	e1a01000 	mov	r1, r0
         f4b1c:	e5900138 	ldr	r0, [r0, #312]	; fField312
         f4b20:	e5b1200c 	ldr	r2, [r1, #12]!	; fField12
         f4b24:	e3a01000 	mov	r1, #0	; 0x0
         f4b28:	ea6bd26f 	b	1be94ec <CList::$InsertAt(long, void *)>
    */
}

/**
 * Symbol: TIrLAP::PrepareFRMRResponse(void)
 * Address: 000f4b2c
 */
TIrLAP::PrepareFRMRResponse(void) {
    /*
         f4b2c:	e5d01098 	ldrb	r1, [r0, #152]	; fField152
         f4b30:	e5c01059 	strb	r1, [r0, #89]	; fField89
         f4b34:	e5d01048 	ldrb	r1, [r0, #72]	; fField72
         f4b38:	e1a01281 	mov	r1, r1, lsl #5
         f4b3c:	e5d02049 	ldrb	r2, [r0, #73]	; fField73
         f4b40:	e1812082 	orr	r2, r1, r2, lsl #1
         f4b44:	e5d01099 	ldrb	r1, [r0, #153]	; fField153
         f4b48:	e3310000 	teq	r1, #0	; 0x0
         f4b4c:	13a01010 	movne	r1, #16	; 0x10
         f4b50:	e1821001 	orr	r1, r2, r1
         f4b54:	e5c0105a 	strb	r1, [r0, #90]	; fField90
         f4b58:	e5d020a1 	ldrb	r2, [r0, #161]	; fField161
         f4b5c:	e3120004 	tst	r2, #4	; 0x4
         f4b60:	e3a01001 	mov	r1, #1	; 0x1
         f4b64:	13a02008 	movne	r2, #8	; 0x8
         f4b68:	1a000002 	bne	f4b78 <TIrLAP::PrepareFRMRResponse(void)+0x4c>
         f4b6c:	e3120008 	tst	r2, #8	; 0x8
         f4b70:	0a000002 	beq	f4b80 <TIrLAP::PrepareFRMRResponse(void)+0x54>
         f4b74:	e3a02000 	mov	r2, #0	; 0x0
         f4b78:	e5c0205b 	strb	r2, [r0, #91]	; fField91
         f4b7c:	ea000000 	b	f4b84 <TIrLAP::PrepareFRMRResponse(void)+0x58>
         f4b80:	e5c0105b 	strb	r1, [r0, #91]	; fField91
         f4b84:	e5c01058 	strb	r1, [r0, #88]	; fField88
         f4b88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLAP::OutputXIDCommand(void)
 * Address: 000f4b8c
 */
TIrLAP::OutputXIDCommand(void) {
    /*
         f4b8c:	e1a0c00d 	mov	ip, sp
         f4b90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f4b94:	e24cb004 	sub	fp, ip, #4	; 0x4
         f4b98:	e1a04000 	mov	r4, r0
         f4b9c:	e3a00000 	mov	r0, #0	; 0x0
         f4ba0:	e28450a4 	add	r5, r4, #164	; 0xa4
         f4ba4:	e3a0102f 	mov	r1, #47	; 0x2f
         f4ba8:	e5c41097 	strb	r1, [r4, #151]	; fField151
         f4bac:	e3a010ff 	mov	r1, #255	; 0xff
         f4bb0:	e5c51001 	strb	r1, [r5, #1]
         f4bb4:	e3a0103f 	mov	r1, #63	; 0x3f
         f4bb8:	e5c51002 	strb	r1, [r5, #2]
         f4bbc:	e3a01001 	mov	r1, #1	; 0x1
         f4bc0:	e5c51003 	strb	r1, [r5, #3]
         f4bc4:	e5941020 	ldr	r1, [r4, #32]	; fField32
         f4bc8:	e5851004 	str	r1, [r5, #4]	; fField4
         f4bcc:	e594102c 	ldr	r1, [r4, #44]	; fField44
         f4bd0:	e5851008 	str	r1, [r5, #8]
         f4bd4:	e5d41026 	ldrb	r1, [r4, #38]	; fField38
         f4bd8:	e5c5100c 	strb	r1, [r5, #12]	; fField12
         f4bdc:	e5d41025 	ldrb	r1, [r4, #37]	; fField37
         f4be0:	e5c5100d 	strb	r1, [r5, #13]
         f4be4:	e3a01000 	mov	r1, #0	; 0x0
         f4be8:	e5c5100e 	strb	r1, [r5, #14]
         f4bec:	e5d41025 	ldrb	r1, [r4, #37]	; fField37
         f4bf0:	e33100ff 	teq	r1, #255	; 0xff
         f4bf4:	1a000004 	bne	f4c0c <TIrLAP::OutputXIDCommand(void)+0x80>
         f4bf8:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f4bfc:	e280004c 	add	r0, r0, #76	; 0x4c
         f4c00:	e285100f 	add	r1, r5, #15	; 0xf
         f4c04:	e3a02032 	mov	r2, #50	; 0x32
         f4c08:	eb64eafa 	bl	1a2f7f8 <TIrDscInfo::$AddDevInfoToBuffer(unsigned char *, unsigned long)>
         f4c0c:	e280200e 	add	r2, r0, #14	; 0xe
         f4c10:	e2851001 	add	r1, r5, #1	; 0x1
         f4c14:	e2840f4f 	add	r0, r4, #316	; 0x13c
         f4c18:	e1a05000 	mov	r5, r0
         f4c1c:	e3a03001 	mov	r3, #1	; 0x1
         f4c20:	eb64ff8f 	bl	1a34a64 <TIrLAPPutBuffer::$SetControlBuffer(unsigned char *, unsigned long, unsigned char)>
         f4c24:	e1a01005 	mov	r1, r5
         f4c28:	e1a00004 	mov	r0, r4
         f4c2c:	e3a0200a 	mov	r2, #10	; 0xa
         f4c30:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f4c34:	ea000156 	b	f5194 <TIrLAP::StartOutput(TIrLAPPutBuffer *, unsigned long)>
    */
}

/**
 * Symbol: TIrLAP::OutputXIDResponse(TXIDPacket &)
 * Address: 000f4c38
 */
TIrLAP::OutputXIDResponse(TXIDPacket &) {
    /*
         f4c38:	e1a0c00d 	mov	ip, sp
         f4c3c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f4c40:	e24cb004 	sub	fp, ip, #4	; 0x4
         f4c44:	e1a04000 	mov	r4, r0
         f4c48:	e1a05001 	mov	r5, r1
         f4c4c:	e5d1700c 	ldrb	r7, [r1, #12]	; fField12
         f4c50:	e28060a4 	add	r6, r0, #164	; 0xa4
         f4c54:	e3a000af 	mov	r0, #175	; 0xaf
         f4c58:	e5c40097 	strb	r0, [r4, #151]	; fField151
         f4c5c:	e3170004 	tst	r7, #4	; 0x4
         f4c60:	0a000005 	beq	f4c7c <TIrLAP::OutputXIDResponse(TXIDPacket &)+0x44>
         f4c64:	eb6aff7f 	bl	1bb4a68 <$rand>
         f4c68:	e1a01000 	mov	r1, r0
         f4c6c:	e3e00001 	mvn	r0, #1	; 0x1
         f4c70:	eb6af734 	bl	1bb2948 <$__rt_udiv>
         f4c74:	e2810001 	add	r0, r1, #1	; 0x1
         f4c78:	ea000000 	b	f4c80 <TIrLAP::OutputXIDResponse(TXIDPacket &)+0x48>
         f4c7c:	e3a00000 	mov	r0, #0	; 0x0
         f4c80:	e5840030 	str	r0, [r4, #48]	; fField48
         f4c84:	e3a000fe 	mov	r0, #254	; 0xfe
         f4c88:	e5c60001 	strb	r0, [r6, #1]
         f4c8c:	e3a000bf 	mov	r0, #191	; 0xbf
         f4c90:	e5c60002 	strb	r0, [r6, #2]
         f4c94:	e3a00001 	mov	r0, #1	; 0x1
         f4c98:	e5c60003 	strb	r0, [r6, #3]
         f4c9c:	e5940030 	ldr	r0, [r4, #48]	; fField48
         f4ca0:	e3300000 	teq	r0, #0	; 0x0
         f4ca4:	05940020 	ldreq	r0, [r4, #32]	; fField32
         f4ca8:	e5860004 	str	r0, [r6, #4]	; fField4
         f4cac:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
         f4cb0:	e5860008 	str	r0, [r6, #8]
         f4cb4:	e2070007 	and	r0, r7, #7	; 0x7
         f4cb8:	e5c6000c 	strb	r0, [r6, #12]	; fField12
         f4cbc:	e5d40025 	ldrb	r0, [r4, #37]	; fField37
         f4cc0:	e5c6000d 	strb	r0, [r6, #13]
         f4cc4:	e3a00000 	mov	r0, #0	; 0x0
         f4cc8:	e5c6000e 	strb	r0, [r6, #14]
         f4ccc:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f4cd0:	e280004c 	add	r0, r0, #76	; 0x4c
         f4cd4:	e286100f 	add	r1, r6, #15	; 0xf
         f4cd8:	e3a02032 	mov	r2, #50	; 0x32
         f4cdc:	eb64eac5 	bl	1a2f7f8 <TIrDscInfo::$AddDevInfoToBuffer(unsigned char *, unsigned long)>
         f4ce0:	e280200e 	add	r2, r0, #14	; 0xe
         f4ce4:	e2861001 	add	r1, r6, #1	; 0x1
         f4ce8:	e2840f4f 	add	r0, r4, #316	; 0x13c
         f4cec:	e1a05000 	mov	r5, r0
         f4cf0:	e3a03001 	mov	r3, #1	; 0x1
         f4cf4:	eb64ff5a 	bl	1a34a64 <TIrLAPPutBuffer::$SetControlBuffer(unsigned char *, unsigned long, unsigned char)>
         f4cf8:	e1a01005 	mov	r1, r5
         f4cfc:	e1a00004 	mov	r0, r4
         f4d00:	e3a0200a 	mov	r2, #10	; 0xa
         f4d04:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f4d08:	ea000121 	b	f5194 <TIrLAP::StartOutput(TIrLAPPutBuffer *, unsigned long)>
    */
}

/**
 * Symbol: TIrLAP::OutputSNRMCommand(void)
 * Address: 000f4d0c
 */
TIrLAP::OutputSNRMCommand(void) {
    /*
         f4d0c:	e1a0c00d 	mov	ip, sp
         f4d10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f4d14:	e24cb004 	sub	fp, ip, #4	; 0x4
         f4d18:	e1a04000 	mov	r4, r0
         f4d1c:	e28050a4 	add	r5, r0, #164	; 0xa4
         f4d20:	e3a00083 	mov	r0, #131	; 0x83
         f4d24:	e5c40097 	strb	r0, [r4, #151]	; fField151
         f4d28:	e3a000ff 	mov	r0, #255	; 0xff
         f4d2c:	e5c50002 	strb	r0, [r5, #2]
         f4d30:	e3a00093 	mov	r0, #147	; 0x93
         f4d34:	e5c50003 	strb	r0, [r5, #3]
         f4d38:	e5940020 	ldr	r0, [r4, #32]	; fField32
         f4d3c:	e5850004 	str	r0, [r5, #4]	; fField4
         f4d40:	e5940034 	ldr	r0, [r4, #52]	; fField52
         f4d44:	e5850008 	str	r0, [r5, #8]
         f4d48:	e5d4001d 	ldrb	r0, [r4, #29]	; fField29
         f4d4c:	e1a00080 	mov	r0, r0, lsl #1
         f4d50:	e5c5000c 	strb	r0, [r5, #12]	; fField12
         f4d54:	e285100d 	add	r1, r5, #13	; 0xd
         f4d58:	e3a02035 	mov	r2, #53	; 0x35
         f4d5c:	e5940040 	ldr	r0, [r4, #64]	; fField64
         f4d60:	eb650783 	bl	1a36b74 <TIrQOS::$AddInfoToBuffer(unsigned char *, unsigned long)>
         f4d64:	e280200b 	add	r2, r0, #11	; 0xb
         f4d68:	e2851002 	add	r1, r5, #2	; 0x2
         f4d6c:	e2840f4f 	add	r0, r4, #316	; 0x13c
         f4d70:	e1a05000 	mov	r5, r0
         f4d74:	e3a03001 	mov	r3, #1	; 0x1
         f4d78:	eb64ff39 	bl	1a34a64 <TIrLAPPutBuffer::$SetControlBuffer(unsigned char *, unsigned long, unsigned char)>
         f4d7c:	e5d42080 	ldrb	r2, [r4, #128]	; fField128
         f4d80:	e1a01005 	mov	r1, r5
         f4d84:	e1a00004 	mov	r0, r4
         f4d88:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f4d8c:	ea000100 	b	f5194 <TIrLAP::StartOutput(TIrLAPPutBuffer *, unsigned long)>
    */
}

/**
 * Symbol: TIrLAP::OutputUAResponse(void)
 * Address: 000f4d90
 */
TIrLAP::OutputUAResponse(void) {
    /*
         f4d90:	e1a0c00d 	mov	ip, sp
         f4d94:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f4d98:	e24cb004 	sub	fp, ip, #4	; 0x4
         f4d9c:	e1a04000 	mov	r4, r0
         f4da0:	e28050a4 	add	r5, r0, #164	; 0xa4
         f4da4:	e3a00063 	mov	r0, #99	; 0x63
         f4da8:	e5c40097 	strb	r0, [r4, #151]	; fField151
         f4dac:	e5d4001d 	ldrb	r0, [r4, #29]	; fField29
         f4db0:	e1a00080 	mov	r0, r0, lsl #1
         f4db4:	e5c50002 	strb	r0, [r5, #2]
         f4db8:	e3a00073 	mov	r0, #115	; 0x73
         f4dbc:	e5c50003 	strb	r0, [r5, #3]
         f4dc0:	e5940020 	ldr	r0, [r4, #32]	; fField32
         f4dc4:	e5850004 	str	r0, [r5, #4]	; fField4
         f4dc8:	e5940034 	ldr	r0, [r4, #52]	; fField52
         f4dcc:	e5850008 	str	r0, [r5, #8]
         f4dd0:	e285100c 	add	r1, r5, #12	; 0xc
         f4dd4:	e3a02036 	mov	r2, #54	; 0x36
         f4dd8:	e5940040 	ldr	r0, [r4, #64]	; fField64
         f4ddc:	eb650764 	bl	1a36b74 <TIrQOS::$AddInfoToBuffer(unsigned char *, unsigned long)>
         f4de0:	e280200a 	add	r2, r0, #10	; 0xa
         f4de4:	e2851002 	add	r1, r5, #2	; 0x2
         f4de8:	e2840f4f 	add	r0, r4, #316	; 0x13c
         f4dec:	e1a05000 	mov	r5, r0
         f4df0:	e3a03001 	mov	r3, #1	; 0x1
         f4df4:	eb64ff1a 	bl	1a34a64 <TIrLAPPutBuffer::$SetControlBuffer(unsigned char *, unsigned long, unsigned char)>
         f4df8:	e5d42080 	ldrb	r2, [r4, #128]	; fField128
         f4dfc:	e1a01005 	mov	r1, r5
         f4e00:	e1a00004 	mov	r0, r4
         f4e04:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f4e08:	ea0000e1 	b	f5194 <TIrLAP::StartOutput(TIrLAPPutBuffer *, unsigned long)>
    */
}

/**
 * Symbol: TIrLAP::DeInit(void)
 * Address: 000f4e0c
 */
TIrLAP::DeInit(void) {
    /*
         f4e0c:	e1a0c00d 	mov	ip, sp
         f4e10:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f4e14:	e24cb004 	sub	fp, ip, #4	; 0x4
         f4e18:	e1a04000 	mov	r4, r0
         f4e1c:	eb64ff0d 	bl	1a34a58 <TIrLAP::$FreeGetBuffers(void)>
         f4e20:	e5940138 	ldr	r0, [r4, #312]	; fField312
         f4e24:	e3300000 	teq	r0, #0	; 0x0
         f4e28:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         f4e2c:	e3a01001 	mov	r1, #1	; 0x1
         f4e30:	eb6bc113 	bl	1be5284 <CList::$__dt(void)>
         f4e34:	e3a00000 	mov	r0, #0	; 0x0
         f4e38:	e5a40138 	str	r0, [r4, #312]!	; fField312
         f4e3c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::OutputFRMRResponse(void)
 * Address: 000f4e40
 */
TIrLAP::OutputFRMRResponse(void) {
    /*
         f4e40:	e1a0c00d 	mov	ip, sp
         f4e44:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f4e48:	e24cb004 	sub	fp, ip, #4	; 0x4
         f4e4c:	e1a04000 	mov	r4, r0
         f4e50:	e28010a4 	add	r1, r0, #164	; 0xa4
         f4e54:	e3a00087 	mov	r0, #135	; 0x87
         f4e58:	e5c40097 	strb	r0, [r4, #151]	; fField151
         f4e5c:	e5d4001d 	ldrb	r0, [r4, #29]	; fField29
         f4e60:	e1a00080 	mov	r0, r0, lsl #1
         f4e64:	e5c10000 	strb	r0, [r1]
         f4e68:	e3a00097 	mov	r0, #151	; 0x97
         f4e6c:	e5c10001 	strb	r0, [r1, #1]
         f4e70:	e5d40059 	ldrb	r0, [r4, #89]	; fField89
         f4e74:	e5c10002 	strb	r0, [r1, #2]
         f4e78:	e5d4005a 	ldrb	r0, [r4, #90]	; fField90
         f4e7c:	e5c10003 	strb	r0, [r1, #3]
         f4e80:	e5d4005b 	ldrb	r0, [r4, #91]	; fField91
         f4e84:	e5c10004 	strb	r0, [r1, #4]	; fField4
         f4e88:	e2840f4f 	add	r0, r4, #316	; 0x13c
         f4e8c:	e1a05000 	mov	r5, r0
         f4e90:	e3a03001 	mov	r3, #1	; 0x1
         f4e94:	e3a02005 	mov	r2, #5	; 0x5
         f4e98:	eb64fef1 	bl	1a34a64 <TIrLAPPutBuffer::$SetControlBuffer(unsigned char *, unsigned long, unsigned char)>
         f4e9c:	e5d42080 	ldrb	r2, [r4, #128]	; fField128
         f4ea0:	e1a01005 	mov	r1, r5
         f4ea4:	e1a00004 	mov	r0, r4
         f4ea8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f4eac:	ea0000b8 	b	f5194 <TIrLAP::StartOutput(TIrLAPPutBuffer *, unsigned long)>
    */
}

/**
 * Symbol: TIrLAP::OutputControlFrame(unsigned char)
 * Address: 000f4eb0
 */
TIrLAP::OutputControlFrame(unsigned char) {
    /*
         f4eb0:	e1a0c00d 	mov	ip, sp
         f4eb4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f4eb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f4ebc:	e1a04000 	mov	r4, r0
         f4ec0:	e20110ff 	and	r1, r1, #255	; 0xff
         f4ec4:	e28000a4 	add	r0, r0, #164	; 0xa4
         f4ec8:	e5c41097 	strb	r1, [r4, #151]	; fField151
         f4ecc:	e5d42094 	ldrb	r2, [r4, #148]	; fField148
         f4ed0:	e1b03002 	movs	r3, r2
         f4ed4:	13a03001 	movne	r3, #1	; 0x1
         f4ed8:	e5d4201d 	ldrb	r2, [r4, #29]	; fField29
         f4edc:	e1832082 	orr	r2, r3, r2, lsl #1
         f4ee0:	e5c02002 	strb	r2, [r0, #2]
         f4ee4:	e3812010 	orr	r2, r1, #16	; 0x10
         f4ee8:	e5c02003 	strb	r2, [r0, #3]
         f4eec:	e2011003 	and	r1, r1, #3	; 0x3
         f4ef0:	e3310003 	teq	r1, #3	; 0x3
         f4ef4:	0a000003 	beq	f4f08 <TIrLAP::OutputControlFrame(unsigned char)+0x58>
         f4ef8:	e5d01003 	ldrb	r1, [r0, #3]
         f4efc:	e5d42048 	ldrb	r2, [r4, #72]	; fField72
         f4f00:	e1811282 	orr	r1, r1, r2, lsl #5
         f4f04:	e5c01003 	strb	r1, [r0, #3]
         f4f08:	e2801002 	add	r1, r0, #2	; 0x2
         f4f0c:	e2840f4f 	add	r0, r4, #316	; 0x13c
         f4f10:	e1a05000 	mov	r5, r0
         f4f14:	e3a03001 	mov	r3, #1	; 0x1
         f4f18:	e3a02002 	mov	r2, #2	; 0x2
         f4f1c:	eb64fed0 	bl	1a34a64 <TIrLAPPutBuffer::$SetControlBuffer(unsigned char *, unsigned long, unsigned char)>
         f4f20:	e5d42080 	ldrb	r2, [r4, #128]	; fField128
         f4f24:	e1a01005 	mov	r1, r5
         f4f28:	e1a00004 	mov	r0, r4
         f4f2c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f4f30:	ea000097 	b	f5194 <TIrLAP::StartOutput(TIrLAPPutBuffer *, unsigned long)>
    */
}

/**
 * Symbol: TIrLAP::OutputDataFrame(TIrDataXferEvent *, unsigned char)
 * Address: 000f4f34
 */
TIrLAP::OutputDataFrame(TIrDataXferEvent *, unsigned char) {
    /*
         f4f34:	e1a0c00d 	mov	ip, sp
         f4f38:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f4f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f4f40:	e1a04000 	mov	r4, r0
         f4f44:	e1a05001 	mov	r5, r1
         f4f48:	e21200ff 	ands	r0, r2, #255	; 0xff
         f4f4c:	13a00010 	movne	r0, #16	; 0x10
         f4f50:	e20000ff 	and	r0, r0, #255	; 0xff
         f4f54:	e28460a4 	add	r6, r4, #164	; 0xa4
         f4f58:	e3a01000 	mov	r1, #0	; 0x0
         f4f5c:	e5c41097 	strb	r1, [r4, #151]	; fField151
         f4f60:	e5d41049 	ldrb	r1, [r4, #73]	; fField73
         f4f64:	e0841101 	add	r1, r4, r1, lsl #2
         f4f68:	e5a1515c 	str	r5, [r1, #348]!
         f4f6c:	e5d4309f 	ldrb	r3, [r4, #159]	; fField159
         f4f70:	e5d42049 	ldrb	r2, [r4, #73]	; fField73
         f4f74:	e3a01001 	mov	r1, #1	; 0x1
         f4f78:	e1831211 	orr	r1, r3, r1, lsl r2
         f4f7c:	e5c4109f 	strb	r1, [r4, #159]	; fField159
         f4f80:	e5d41094 	ldrb	r1, [r4, #148]	; fField148
         f4f84:	e3310000 	teq	r1, #0	; 0x0
         f4f88:	13a01001 	movne	r1, #1	; 0x1
         f4f8c:	e5d4201d 	ldrb	r2, [r4, #29]	; fField29
         f4f90:	e1811082 	orr	r1, r1, r2, lsl #1
         f4f94:	e5c61002 	strb	r1, [r6, #2]
         f4f98:	e5d41048 	ldrb	r1, [r4, #72]	; fField72
         f4f9c:	e1800281 	orr	r0, r0, r1, lsl #5
         f4fa0:	e5d41049 	ldrb	r1, [r4, #73]	; fField73
         f4fa4:	e1800081 	orr	r0, r0, r1, lsl #1
         f4fa8:	e5c60003 	strb	r0, [r6, #3]
         f4fac:	e5d40049 	ldrb	r0, [r4, #73]	; fField73
         f4fb0:	e2800001 	add	r0, r0, #1	; 0x1
         f4fb4:	e2000007 	and	r0, r0, #7	; 0x7
         f4fb8:	e5c40049 	strb	r0, [r4, #73]	; fField73
         f4fbc:	e2862004 	add	r2, r6, #4	; 0x4
         f4fc0:	e1a01005 	mov	r1, r5
         f4fc4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f4fc8:	eb0003d5 	bl	f5f24 <TIrLMP::FillInLMPDUHeader(TIrDataXferEvent *, unsigned char *)>
         f4fcc:	e2802002 	add	r2, r0, #2	; 0x2
         f4fd0:	e2861002 	add	r1, r6, #2	; 0x2
         f4fd4:	e2840f4f 	add	r0, r4, #316	; 0x13c
         f4fd8:	e1a06000 	mov	r6, r0
         f4fdc:	e3a03001 	mov	r3, #1	; 0x1
         f4fe0:	eb64fe9f 	bl	1a34a64 <TIrLAPPutBuffer::$SetControlBuffer(unsigned char *, unsigned long, unsigned char)>
         f4fe4:	e1a00006 	mov	r0, r6
         f4fe8:	e2855008 	add	r5, r5, #8	; 0x8
         f4fec:	e9b5000e 	ldmib	r5!, {r1, r2, r3}
         f4ff0:	eb64fe9c 	bl	1a34a68 <TIrLAPPutBuffer::$SetDataBuffer(CBuffer *, unsigned long, unsigned long)>
         f4ff4:	e5d42080 	ldrb	r2, [r4, #128]	; fField128
         f4ff8:	e1a01006 	mov	r1, r6
         f4ffc:	e1a00004 	mov	r0, r4
         f5000:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f5004:	ea000062 	b	f5194 <TIrLAP::StartOutput(TIrLAPPutBuffer *, unsigned long)>
    */
}

/**
 * Symbol: TIrLAP::GotData(unsigned char *, unsigned long)
 * Address: 000f5008
 */
TIrLAP::GotData(unsigned char *, unsigned long) {
    /*
         f5008:	e1a0c00d 	mov	ip, sp
         f500c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f5010:	e24cb004 	sub	fp, ip, #4	; 0x4
         f5014:	e1a04002 	mov	r4, r2
         f5018:	e5b03134 	ldr	r3, [r0, #308]!	; fField308
         f501c:	e1a00003 	mov	r0, r3
         f5020:	e5933000 	ldr	r3, [r3]
         f5024:	e1a0e00f 	mov	lr, pc
         f5028:	e283f014 	add	pc, r3, #20	; 0x14
         f502c:	e1300004 	teq	r0, r4
         f5030:	13a00000 	movne	r0, #0	; 0x0
         f5034:	03a00001 	moveq	r0, #1	; 0x1
         f5038:	e20000ff 	and	r0, r0, #255	; 0xff
         f503c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::RecdCmd(unsigned char)
 * Address: 000f5040
 */
TIrLAP::RecdCmd(unsigned char) {
    /*
         f5040:	e20110ff 	and	r1, r1, #255	; 0xff
         f5044:	e5d02099 	ldrb	r2, [r0, #153]	; fField153
         f5048:	e3320000 	teq	r2, #0	; 0x0
         f504c:	0a000003 	beq	f5060 <TIrLAP::RecdCmd(unsigned char)+0x20>
         f5050:	e5d0009e 	ldrb	r0, [r0, #158]	; fField158
         f5054:	e1300001 	teq	r0, r1
         f5058:	03a00001 	moveq	r0, #1	; 0x1
         f505c:	0a000000 	beq	f5064 <TIrLAP::RecdCmd(unsigned char)+0x24>
         f5060:	e3a00000 	mov	r0, #0	; 0x0
         f5064:	e20000ff 	and	r0, r0, #255	; 0xff
         f5068:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLAP::RecdPollCmd(unsigned char)
 * Address: 000f506c
 */
TIrLAP::RecdPollCmd(unsigned char) {
    /*
         f506c:	e1a0c00d 	mov	ip, sp
         f5070:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         f5074:	e24cb004 	sub	fp, ip, #4	; 0x4
         f5078:	e20110ff 	and	r1, r1, #255	; 0xff
         f507c:	e5d0209b 	ldrb	r2, [r0, #155]	; fField155
         f5080:	e3320000 	teq	r2, #0	; 0x0
         f5084:	0a000003 	beq	f5098 <TIrLAP::RecdPollCmd(unsigned char)+0x2c>
         f5088:	ebffffec 	bl	f5040 <TIrLAP::RecdCmd(unsigned char)>
         f508c:	e3300000 	teq	r0, #0	; 0x0
         f5090:	13a00001 	movne	r0, #1	; 0x1
         f5094:	1a000000 	bne	f509c <TIrLAP::RecdPollCmd(unsigned char)+0x30>
         f5098:	e3a00000 	mov	r0, #0	; 0x0
         f509c:	e20000ff 	and	r0, r0, #255	; 0xff
         f50a0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::RecdRsp(unsigned char)
 * Address: 000f50a4
 */
TIrLAP::RecdRsp(unsigned char) {
    /*
         f50a4:	e20110ff 	and	r1, r1, #255	; 0xff
         f50a8:	e5d02099 	ldrb	r2, [r0, #153]	; fField153
         f50ac:	e3320000 	teq	r2, #0	; 0x0
         f50b0:	05d0009e 	ldreqb	r0, [r0, #158]	; fField158
         f50b4:	01300001 	teqeq	r0, r1
         f50b8:	13a00000 	movne	r0, #0	; 0x0
         f50bc:	03a00001 	moveq	r0, #1	; 0x1
         f50c0:	e20000ff 	and	r0, r0, #255	; 0xff
         f50c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLAP::RecdFinalRsp(unsigned char)
 * Address: 000f50c8
 */
TIrLAP::RecdFinalRsp(unsigned char) {
    /*
         f50c8:	e1a0c00d 	mov	ip, sp
         f50cc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         f50d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f50d4:	e20110ff 	and	r1, r1, #255	; 0xff
         f50d8:	e5d0209b 	ldrb	r2, [r0, #155]	; fField155
         f50dc:	e3320000 	teq	r2, #0	; 0x0
         f50e0:	0a000003 	beq	f50f4 <TIrLAP::RecdFinalRsp(unsigned char)+0x2c>
         f50e4:	ebffffee 	bl	f50a4 <TIrLAP::RecdRsp(unsigned char)>
         f50e8:	e3300000 	teq	r0, #0	; 0x0
         f50ec:	13a00001 	movne	r0, #1	; 0x1
         f50f0:	1a000000 	bne	f50f8 <TIrLAP::RecdFinalRsp(unsigned char)+0x30>
         f50f4:	e3a00000 	mov	r0, #0	; 0x0
         f50f8:	e20000ff 	and	r0, r0, #255	; 0xff
         f50fc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::StartTimer(unsigned long, int)
 * Address: 000f5100
 */
TIrLAP::StartTimer(unsigned long, int) {
    /*
         f5100:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f5104:	eaffee78 	b	f0aec <TIrGlue::StartTimer1(unsigned long, int)>
    */
}

/**
 * Symbol: TIrLAP::StopTimer(void)
 * Address: 000f5108
 */
TIrLAP::StopTimer(void) {
    /*
         f5108:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f510c:	eaffee78 	b	f0af4 <TIrGlue::StopTimer1(void)>
    */
}

/**
 * Symbol: TIrLAP::FreeGetBuffers(void)
 * Address: 000f5110
 */
TIrLAP::FreeGetBuffers(void) {
    /*
         f5110:	e1a0c00d 	mov	ip, sp
         f5114:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f5118:	e24cb004 	sub	fp, ip, #4	; 0x4
         f511c:	e1a04000 	mov	r4, r0
         f5120:	e3a05000 	mov	r5, #0	; 0x0
         f5124:	e5900110 	ldr	r0, [r0, #272]	; fField272
         f5128:	e3500000 	cmp	r0, #0	; 0x0
         f512c:	9a00000a 	bls	f515c <TIrLAP::FreeGetBuffers(void)+0x4c>
         f5130:	e0840105 	add	r0, r4, r5, lsl #2
         f5134:	e5900114 	ldr	r0, [r0, #276]
         f5138:	e3300000 	teq	r0, #0	; 0x0
         f513c:	0a000002 	beq	f514c <TIrLAP::FreeGetBuffers(void)+0x3c>
         f5140:	e3a01001 	mov	r1, #1	; 0x1
         f5144:	e1a0e00f 	mov	lr, pc
         f5148:	e590f000 	ldr	pc, [r0]
         f514c:	e2855001 	add	r5, r5, #1	; 0x1
         f5150:	e5940110 	ldr	r0, [r4, #272]	; fField272
         f5154:	e1500005 	cmp	r0, r5
         f5158:	8afffff4 	bhi	f5130 <TIrLAP::FreeGetBuffers(void)+0x20>
         f515c:	e3a00000 	mov	r0, #0	; 0x0
         f5160:	e5840110 	str	r0, [r4, #272]	; fField272
         f5164:	e5c4010e 	strb	r0, [r4, #270]	; fField270
         f5168:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLAP::TimerComplete(unsigned long)
 * Address: 000f516c
 */
TIrLAP::TimerComplete(unsigned long) {
    /*
         f516c:	e1a02000 	mov	r2, r0
         f5170:	e351001b 	cmp	r1, #27	; 0x1b
         f5174:	3a000004 	bcc	f518c <TIrLAP::TimerComplete(unsigned long)+0x20>
         f5178:	e3510025 	cmp	r1, #37	; 0x25
         f517c:	8a000002 	bhi	f518c <TIrLAP::TimerComplete(unsigned long)+0x20>
         f5180:	e1a00002 	mov	r0, r2
         f5184:	e5922000 	ldr	r2, [r2]
         f5188:	e282f004 	add	pc, r2, #4	; 0x4
         f518c:	e5b20018 	ldr	r0, [r2, #24]!	; fField24
         f5190:	ea65023d 	b	1a35a8c <TIrLMP::$TimerComplete(unsigned long)>
    */
}

/**
 * Symbol: TIrLAP::StartOutput(TIrLAPPutBuffer *, unsigned long)
 * Address: 000f5194
 */
TIrLAP::StartOutput(TIrLAPPutBuffer *, unsigned long) {
    /*
         f5194:	e3a03001 	mov	r3, #1	; 0x1
         f5198:	e5c0310d 	strb	r3, [r0, #269]	; fField269
         f519c:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f51a0:	eaffee59 	b	f0b0c <TIrGlue::StartTransmit(TIrLAPPutBuffer *, unsigned long)>
    */
}

/**
 * Symbol: TIrLAP::StopOutput(void)
 * Address: 000f51a4
 */
TIrLAP::StopOutput(void) {
    /*
         f51a4:	e3a01000 	mov	r1, #0	; 0x0
         f51a8:	e5c0110d 	strb	r1, [r0, #269]	; fField269
         f51ac:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f51b0:	eaffee57 	b	f0b14 <TIrGlue::StopTransmit(void)>
    */
}

/**
 * Symbol: TIrLAP::StartInput(CBufferSegment *)
 * Address: 000f51b4
 */
TIrLAP::StartInput(CBufferSegment *) {
    /*
         f51b4:	e1a0c00d 	mov	ip, sp
         f51b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f51bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         f51c0:	e1a04000 	mov	r4, r0
         f51c4:	e1a05001 	mov	r5, r1
         f51c8:	e3a00001 	mov	r0, #1	; 0x1
         f51cc:	e5c4010c 	strb	r0, [r4, #268]	; fField268
         f51d0:	e5841134 	str	r1, [r4, #308]	; fField308
         f51d4:	e1a00001 	mov	r0, r1
         f51d8:	e5911000 	ldr	r1, [r1]
         f51dc:	e1a0e00f 	mov	lr, pc
         f51e0:	e281f028 	add	pc, r1, #40	; 0x28
         f51e4:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
         f51e8:	e3300000 	teq	r0, #0	; 0x0
         f51ec:	05d4004e 	ldreqb	r0, [r4, #78]	; fField78
         f51f0:	03300000 	teqeq	r0, #0	; 0x0
         f51f4:	13a03001 	movne	r3, #1	; 0x1
         f51f8:	03a03000 	moveq	r3, #0	; 0x0
         f51fc:	e5d4201d 	ldrb	r2, [r4, #29]	; fField29
         f5200:	e1a01005 	mov	r1, r5
         f5204:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         f5208:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f520c:	eaffee42 	b	f0b1c <TIrGlue::StartReceive(CBufferSegment *, unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TIrLAP::StopInput(void)
 * Address: 000f5210
 */
TIrLAP::StopInput(void) {
    /*
         f5210:	e3a01000 	mov	r1, #0	; 0x0
         f5214:	e5c0110c 	strb	r1, [r0, #268]	; fField268
         f5218:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f521c:	eaffee42 	b	f0b2c <TIrGlue::StopReceive(void)>
    */
}

/**
 * Symbol: TIrLAP::InputHappening(void)
 * Address: 000f5220
 */
TIrLAP::InputHappening(void) {
    /*
         f5220:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f5224:	eaffee6e 	b	f0be4 <TIrGlue::ReceivingInput(void)>
    */
}

/**
 * Symbol: TIrLAP::OutputComplete(void)
 * Address: 000f5228
 */
TIrLAP::OutputComplete(void) {
    /*
         f5228:	e1a02000 	mov	r2, r0
         f522c:	e3a00000 	mov	r0, #0	; 0x0
         f5230:	e5c2010d 	strb	r0, [r2, #269]	; fField269
         f5234:	e5d20052 	ldrb	r0, [r2, #82]	; fField82
         f5238:	e3300000 	teq	r0, #0	; 0x0
         f523c:	e1a00002 	mov	r0, r2
         f5240:	1a64fe05 	bne	1a34a5c <TIrLAP::$TestFrameComplete(void)>
         f5244:	e3a01001 	mov	r1, #1	; 0x1
         f5248:	e5922000 	ldr	r2, [r2]
         f524c:	e282f004 	add	pc, r2, #4	; 0x4
    */
}

/**
 * Symbol: TIrLAP::InputComplete(unsigned char, unsigned char)
 * Address: 000f5250
 */
TIrLAP::InputComplete(unsigned char, unsigned char) {
    /*
         f5250:	e92d4010 	stmdb	sp!, {r4, lr}
         f5254:	e1a03000 	mov	r3, r0
         f5258:	e201c0ff 	and	ip, r1, #255	; 0xff
         f525c:	e20200ff 	and	r0, r2, #255	; 0xff
         f5260:	e3a01000 	mov	r1, #0	; 0x0
         f5264:	e5c3110c 	strb	r1, [r3, #268]	; fField268
         f5268:	e20c2001 	and	r2, ip, #1	; 0x1
         f526c:	e5c32099 	strb	r2, [r3, #153]	; fField153
         f5270:	e1a020ac 	mov	r2, ip, lsr #1
         f5274:	e5c3209a 	strb	r2, [r3, #154]	; fField154
         f5278:	e2002010 	and	r2, r0, #16	; 0x10
         f527c:	e5c3209b 	strb	r2, [r3, #155]	; fField155
         f5280:	e3a0c000 	mov	ip, #0	; 0x0
         f5284:	e3a02000 	mov	r2, #0	; 0x0
         f5288:	e5c310a1 	strb	r1, [r3, #161]	; fField161
         f528c:	e200e003 	and	lr, r0, #3	; 0x3
         f5290:	e3a01001 	mov	r1, #1	; 0x1
         f5294:	e33e0003 	teq	lr, #3	; 0x3
         f5298:	0a00000c 	beq	f52d0 <TIrLAP::InputComplete(unsigned char, unsigned char)+0x80>
         f529c:	e3a0c0e0 	mov	ip, #224	; 0xe0
         f52a0:	e000e00c 	and	lr, r0, ip
         f52a4:	e1a0e2ae 	mov	lr, lr, lsr #5
         f52a8:	e5c3e09c 	strb	lr, [r3, #156]	; fField156
         f52ac:	e20ee0ff 	and	lr, lr, #255	; 0xff
         f52b0:	e5d34049 	ldrb	r4, [r3, #73]	; fField73
         f52b4:	e13e0004 	teq	lr, r4
         f52b8:	0a000004 	beq	f52d0 <TIrLAP::InputComplete(unsigned char, unsigned char)+0x80>
         f52bc:	e5c310a1 	strb	r1, [r3, #161]	; fField161
         f52c0:	e5d3409f 	ldrb	r4, [r3, #159]	; fField159
         f52c4:	e1140e11 	tst	r4, r1, lsl lr
         f52c8:	03a0e005 	moveq	lr, #5	; 0x5
         f52cc:	05c3e0a1 	streqb	lr, [r3, #161]	; fField161
         f52d0:	e3100001 	tst	r0, #1	; 0x1
         f52d4:	1a00000f 	bne	f5318 <TIrLAP::InputComplete(unsigned char, unsigned char)+0xc8>
         f52d8:	e3a0200e 	mov	r2, #14	; 0xe
         f52dc:	e000e002 	and	lr, r0, r2
         f52e0:	e1a0e0ae 	mov	lr, lr, lsr #1
         f52e4:	e5c3e09d 	strb	lr, [r3, #157]
         f52e8:	e20ee0ff 	and	lr, lr, #255	; 0xff
         f52ec:	e5d34048 	ldrb	r4, [r3, #72]	; fField72
         f52f0:	e13e0004 	teq	lr, r4
         f52f4:	0a000007 	beq	f5318 <TIrLAP::InputComplete(unsigned char, unsigned char)+0xc8>
         f52f8:	e5d340a1 	ldrb	r4, [r3, #161]	; fField161
         f52fc:	e3844002 	orr	r4, r4, #2	; 0x2
         f5300:	e5c340a1 	strb	r4, [r3, #161]	; fField161
         f5304:	e5d340a0 	ldrb	r4, [r3, #160]	; fField160
         f5308:	e1140e11 	tst	r4, r1, lsl lr
         f530c:	05d310a1 	ldreqb	r1, [r3, #161]	; fField161
         f5310:	03811008 	orreq	r1, r1, #8	; 0x8
         f5314:	05c310a1 	streqb	r1, [r3, #161]	; fField161
         f5318:	e18c1002 	orr	r1, ip, r2
         f531c:	e3811010 	orr	r1, r1, #16	; 0x10
         f5320:	e1c01001 	bic	r1, r0, r1
         f5324:	e5c3109e 	strb	r1, [r3, #158]	; fField158
         f5328:	e5c30098 	strb	r0, [r3, #152]	; fField152
         f532c:	e5d3009e 	ldrb	r0, [r3, #158]	; fField158
         f5330:	e33000e3 	teq	r0, #227	; 0xe3
         f5334:	e1a00003 	mov	r0, r3
         f5338:	08bd4010 	ldmeqia	sp!, {r4, lr}
         f533c:	0a64fdc4 	beq	1a34a54 <TIrLAP::$HandleTestFrame(void)>
         f5340:	e3a01002 	mov	r1, #2	; 0x2
         f5344:	e5932000 	ldr	r2, [r3]
         f5348:	e8bd4010 	ldmia	sp!, {r4, lr}
         f534c:	e282f004 	add	pc, r2, #4	; 0x4
    */
}

/**
 * Symbol: TIrLAP::HandleTestFrame(void)
 * Address: 000f5350
 */
TIrLAP::HandleTestFrame(void) {
    /*
         f5350:	e1a0c00d 	mov	ip, sp
         f5354:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f5358:	e24cb004 	sub	fp, ip, #4	; 0x4
         f535c:	e1a04000 	mov	r4, r0
         f5360:	e5900134 	ldr	r0, [r0, #308]	; fField308
         f5364:	e5901000 	ldr	r1, [r0]
         f5368:	e1a0e00f 	mov	lr, pc
         f536c:	e281f02c 	add	pc, r1, #44	; 0x2c
         f5370:	e1a06000 	mov	r6, r0
         f5374:	e5940134 	ldr	r0, [r4, #308]	; fField308
         f5378:	e5900010 	ldr	r0, [r0, #16]	; fField16
         f537c:	e5d4109a 	ldrb	r1, [r4, #154]	; fField154
         f5380:	e5d4201d 	ldrb	r2, [r4, #29]	; fField29
         f5384:	e1310002 	teq	r1, r2
         f5388:	0a000006 	beq	f53a8 <TIrLAP::HandleTestFrame(void)+0x58>
         f538c:	e3560008 	cmp	r6, #8	; 0x8
         f5390:	3a000023 	bcc	f5424 <TIrLAP::HandleTestFrame(void)+0xd4>
         f5394:	e5902004 	ldr	r2, [r0, #4]	; fField4
         f5398:	e5943020 	ldr	r3, [r4, #32]	; fField32
         f539c:	e1320003 	teq	r2, r3
         f53a0:	13720001 	cmnne	r2, #1	; 0x1
         f53a4:	1a00001e 	bne	f5424 <TIrLAP::HandleTestFrame(void)+0xd4>
         f53a8:	e3a02001 	mov	r2, #1	; 0x1
         f53ac:	e5c42052 	strb	r2, [r4, #82]	; fField82
         f53b0:	e5d42094 	ldrb	r2, [r4, #148]	; fField148
         f53b4:	e3320000 	teq	r2, #0	; 0x0
         f53b8:	13a02001 	movne	r2, #1	; 0x1
         f53bc:	e1822081 	orr	r2, r2, r1, lsl #1
         f53c0:	e5c42054 	strb	r2, [r4, #84]	; fField84
         f53c4:	e3a020f3 	mov	r2, #243	; 0xf3
         f53c8:	e5c42055 	strb	r2, [r4, #85]	; fField85
         f53cc:	e331007f 	teq	r1, #127	; 0x7f
         f53d0:	1a000003 	bne	f53e4 <TIrLAP::HandleTestFrame(void)+0x94>
         f53d4:	e5901000 	ldr	r1, [r0]
         f53d8:	e5801004 	str	r1, [r0, #4]	; fField4
         f53dc:	e5941020 	ldr	r1, [r4, #32]	; fField32
         f53e0:	e5801000 	str	r1, [r0]
         f53e4:	e2841054 	add	r1, r4, #84	; 0x54
         f53e8:	e2840f4f 	add	r0, r4, #316	; 0x13c
         f53ec:	e1a05000 	mov	r5, r0
         f53f0:	e3a03001 	mov	r3, #1	; 0x1
         f53f4:	e3a02002 	mov	r2, #2	; 0x2
         f53f8:	eb64fd99 	bl	1a34a64 <TIrLAPPutBuffer::$SetControlBuffer(unsigned char *, unsigned long, unsigned char)>
         f53fc:	e1a00005 	mov	r0, r5
         f5400:	e1a03006 	mov	r3, r6
         f5404:	e3a02000 	mov	r2, #0	; 0x0
         f5408:	e5941134 	ldr	r1, [r4, #308]	; fField308
         f540c:	eb64fd95 	bl	1a34a68 <TIrLAPPutBuffer::$SetDataBuffer(CBuffer *, unsigned long, unsigned long)>
         f5410:	e5d42080 	ldrb	r2, [r4, #128]	; fField128
         f5414:	e1a01005 	mov	r1, r5
         f5418:	e1a00004 	mov	r0, r4
         f541c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f5420:	eaffff5b 	b	f5194 <TIrLAP::StartOutput(TIrLAPPutBuffer *, unsigned long)>
         f5424:	e1a00004 	mov	r0, r4
         f5428:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f542c:	ea64fd8a 	b	1a34a5c <TIrLAP::$TestFrameComplete(void)>
    */
}

/**
 * Symbol: TIrLAP::TestFrameComplete(void)
 * Address: 000f5430
 */
TIrLAP::TestFrameComplete(void) {
    /*
         f5430:	e3a01000 	mov	r1, #0	; 0x0
         f5434:	e5c01052 	strb	r1, [r0, #82]	; fField82
         f5438:	e5901134 	ldr	r1, [r0, #308]	; fField308
         f543c:	eaffff5c 	b	f51b4 <TIrLAP::StartInput(CBufferSegment *)>
    */
}

/**
 * Symbol: TIrLAP::NextState(unsigned long)
 * Address: 000f5440
 */
TIrLAP::NextState(unsigned long) {
    /*
         f5440:	e5d0201c 	ldrb	r2, [r0, #28]	; fField28
         f5444:	e352000a 	cmp	r2, #10	; 0xa
         f5448:	908ff102 	addls	pc, pc, r2, lsl #2
         f544c:	e1a0f00e 	mov	pc, lr
         f5450:	ea000009 	b	f547c <TIrLAP::NextState(unsigned long)+0x3c>
         f5454:	ea000009 	b	f5480 <TIrLAP::NextState(unsigned long)+0x40>
         f5458:	ea000009 	b	f5484 <TIrLAP::NextState(unsigned long)+0x44>
         f545c:	ea000009 	b	f5488 <TIrLAP::NextState(unsigned long)+0x48>
         f5460:	ea000009 	b	f548c <TIrLAP::NextState(unsigned long)+0x4c>
         f5464:	ea000009 	b	f5490 <TIrLAP::NextState(unsigned long)+0x50>
         f5468:	ea000009 	b	f5494 <TIrLAP::NextState(unsigned long)+0x54>
         f546c:	ea000009 	b	f5498 <TIrLAP::NextState(unsigned long)+0x58>
         f5470:	ea000009 	b	f549c <TIrLAP::NextState(unsigned long)+0x5c>
         f5474:	ea000009 	b	f54a0 <TIrLAP::NextState(unsigned long)+0x60>
         f5478:	eafffb24 	b	f4110 <TIrLAP::HandleSecCloseStateEvent(unsigned long)>
         f547c:	ea000085 	b	f5698 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)>
         f5480:	ea00015d 	b	f59fc <TIrLAP::HandleQueryStateEvent(unsigned long)>
         f5484:	ea0001bf 	b	f5b88 <TIrLAP::HandleConnectStateEvent(unsigned long)>
         f5488:	eafff745 	b	f31a4 <TIrLAP::HandleListenStateEvent(unsigned long)>
         f548c:	eafff7a2 	b	f331c <TIrLAP::HandleReplyStateEvent(unsigned long)>
         f5490:	eafff84c 	b	f35c8 <TIrLAP::HandlePriReceiveStateEvent(unsigned long)>
         f5494:	eafff8ef 	b	f3858 <TIrLAP::HandlePriTransmitStateEvent(unsigned long)>
         f5498:	eafff992 	b	f3ae8 <TIrLAP::HandlePriCloseStateEvent(unsigned long)>
         f549c:	eafff9d9 	b	f3c08 <TIrLAP::HandleSecReceiveStateEvent(unsigned long)>
         f54a0:	eafffaa6 	b	f3f40 <TIrLAP::HandleSecTransmitStateEvent(unsigned long)>
    */
}

/**
 * Symbol: TIrLAP::HandleDisconnectedStateEvent(unsigned long)
 * Address: 000f5698
 */
TIrLAP::HandleDisconnectedStateEvent(unsigned long) {
    /*
         f5698:	e1a0c00d 	mov	ip, sp
         f569c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         f56a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f56a4:	e1a04000 	mov	r4, r0
         f56a8:	e351000d 	cmp	r1, #13	; 0xd
         f56ac:	01a00004 	moveq	r0, r4
         f56b0:	091b6ff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f56b4:	0a64fcd2 	beq	1a34a04 <TIrLAP::$NotConnectedCompletion(void)>
         f56b8:	e59f5048 	ldr	r5, [pc, #48]	; f5708 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x70>	; fField48
         f56bc:	e3a0a001 	mov	sl, #1	; 0x1
         f56c0:	e3a07000 	mov	r7, #0	; 0x0
         f56c4:	ca000010 	bgt	f570c <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x74>
         f56c8:	e28460e4 	add	r6, r4, #228	; 0xe4
         f56cc:	e3310002 	teq	r1, #2	; 0x2
         f56d0:	0a000051 	beq	f581c <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x184>
         f56d4:	e3310003 	teq	r1, #3	; 0x3
         f56d8:	0a000023 	beq	f576c <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0xd4>
         f56dc:	e3310005 	teq	r1, #5	; 0x5
         f56e0:	0a000030 	beq	f57a8 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x110>
         f56e4:	e3310007 	teq	r1, #7	; 0x7
         f56e8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f56ec:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f56f0:	e5840038 	str	r0, [r4, #56]	; fField56
         f56f4:	e5901014 	ldr	r1, [r0, #20]	; fField20
         f56f8:	e5841040 	str	r1, [r4, #64]	; fField64
         f56fc:	e5900018 	ldr	r0, [r0, #24]	; fField24
         f5700:	e5840044 	str	r0, [r4, #68]	; fField68
         f5704:	ea000023 	b	f5798 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x100>
         f5708:	0021bf10 	eoreq	fp, r1, r0, lsl pc
         f570c:	e3310013 	teq	r1, #19	; 0x13
         f5710:	01a00004 	moveq	r0, r4
         f5714:	091b6ff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f5718:	0a64f8b5 	beq	1a339f4 <TIrLAP::$CancelPutRequest(void)>
         f571c:	e3310017 	teq	r1, #23	; 0x17
         f5720:	01a00004 	moveq	r0, r4
         f5724:	091b6ff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f5728:	0afff786 	beq	f3548 <TIrLAP::HandleNDMDisconnectRequest(void)>
         f572c:	e331001a 	teq	r1, #26	; 0x1a
         f5730:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f5734:	e331001c 	teq	r1, #28	; 0x1c
         f5738:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f573c:	e5946038 	ldr	r6, [r4, #56]	; fField56
         f5740:	e5d60014 	ldrb	r0, [r6, #20]	; fField20
         f5744:	e3300000 	teq	r0, #0	; 0x0
         f5748:	0a00008c 	beq	f5980 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x2e8>
         f574c:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f5750:	ebffed21 	bl	f0bdc <TIrGlue::MediaBusy(void)>
         f5754:	e3300000 	teq	r0, #0	; 0x0
         f5758:	0a000088 	beq	f5980 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x2e8>
         f575c:	e3a01000 	mov	r1, #0	; 0x0
         f5760:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f5764:	ebffed20 	bl	f0bec <TIrGlue::SetMediaBusy(unsigned char)>
         f5768:	ea00007f 	b	f596c <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x2d4>
         f576c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f5770:	e5840038 	str	r0, [r4, #56]	; fField56
         f5774:	e5d00014 	ldrb	r0, [r0, #20]	; fField20
         f5778:	e3300000 	teq	r0, #0	; 0x0
         f577c:	e1a00004 	mov	r0, r4
         f5780:	03a0101c 	moveq	r1, #28	; 0x1c
         f5784:	091b6ff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f5788:	0affffc2 	beq	f5698 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)>
         f578c:	e3a0201c 	mov	r2, #28	; 0x1c
         f5790:	e1a01005 	mov	r1, r5
         f5794:	eb64fca8 	bl	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f5798:	e1a01006 	mov	r1, r6
         f579c:	e1a00004 	mov	r0, r4
         f57a0:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f57a4:	eafffe82 	b	f51b4 <TIrLAP::StartInput(CBufferSegment *)>
         f57a8:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f57ac:	e5840038 	str	r0, [r4, #56]	; fField56
         f57b0:	e5901014 	ldr	r1, [r0, #20]	; fField20
         f57b4:	e5841040 	str	r1, [r4, #64]	; fField64
         f57b8:	e5901018 	ldr	r1, [r0, #24]	; fField24
         f57bc:	e5841044 	str	r1, [r4, #68]	; fField68
         f57c0:	e590000c 	ldr	r0, [r0, #12]	; fField12
         f57c4:	e5840034 	str	r0, [r4, #52]	; fField52
         f57c8:	eb6afca6 	bl	1bb4a68 <$rand>
         f57cc:	e20010ff 	and	r1, r0, #255	; 0xff
         f57d0:	e3a0007c 	mov	r0, #124	; 0x7c
         f57d4:	eb6af459 	bl	1bb2940 <$__rt_sdiv>
         f57d8:	e2810002 	add	r0, r1, #2	; 0x2
         f57dc:	e5c4001d 	strb	r0, [r4, #29]	; fField29
         f57e0:	e20000ff 	and	r0, r0, #255	; 0xff
         f57e4:	e3300060 	teq	r0, #96	; 0x60
         f57e8:	1330003e 	teqne	r0, #62	; 0x3e
         f57ec:	02800001 	addeq	r0, r0, #1	; 0x1
         f57f0:	05c4001d 	streqb	r0, [r4, #29]	; fField29
         f57f4:	e3a00002 	mov	r0, #2	; 0x2
         f57f8:	e584705c 	str	r7, [r4, #92]	; fField92
         f57fc:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f5800:	e1a01006 	mov	r1, r6
         f5804:	e1a00004 	mov	r0, r4
         f5808:	ebfffe69 	bl	f51b4 <TIrLAP::StartInput(CBufferSegment *)>
         f580c:	e1a00004 	mov	r0, r4
         f5810:	e3a01021 	mov	r1, #33	; 0x21
         f5814:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f5818:	ea0000da 	b	f5b88 <TIrLAP::HandleConnectStateEvent(unsigned long)>
         f581c:	e1a00004 	mov	r0, r4
         f5820:	eb64fc87 	bl	1a34a44 <TIrLAP::$StopTimer(void)>
         f5824:	e1a00004 	mov	r0, r4
         f5828:	e3a0102f 	mov	r1, #47	; 0x2f
         f582c:	ebfffe0e 	bl	f506c <TIrLAP::RecdPollCmd(unsigned char)>
         f5830:	e3300000 	teq	r0, #0	; 0x0
         f5834:	0a000004 	beq	f584c <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x1b4>
         f5838:	e5c4a027 	strb	sl, [r4, #39]	; fField39
         f583c:	e1a00004 	mov	r0, r4
         f5840:	e3a01002 	mov	r1, #2	; 0x2
         f5844:	ebfff6b4 	bl	f331c <TIrLAP::HandleReplyStateEvent(unsigned long)>
         f5848:	ea00003e 	b	f5948 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x2b0>
         f584c:	e1a00004 	mov	r0, r4
         f5850:	e3a01083 	mov	r1, #131	; 0x83
         f5854:	ebfffe04 	bl	f506c <TIrLAP::RecdPollCmd(unsigned char)>
         f5858:	e3300000 	teq	r0, #0	; 0x0
         f585c:	0a000036 	beq	f593c <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x2a4>
         f5860:	e5940038 	ldr	r0, [r4, #56]	; fField56
         f5864:	e3300000 	teq	r0, #0	; 0x0
         f5868:	0a00002f 	beq	f592c <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x294>
         f586c:	e5d00000 	ldrb	r0, [r0]
         f5870:	e3300003 	teq	r0, #3	; 0x3
         f5874:	1a00002c 	bne	f592c <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x294>
         f5878:	e24dd010 	sub	sp, sp, #16	; 0x10
         f587c:	e3a09001 	mov	r9, #1	; 0x1
         f5880:	e28d1004 	add	r1, sp, #4	; 0x4
         f5884:	e1a00004 	mov	r0, r4
         f5888:	e3a02009 	mov	r2, #9	; 0x9
         f588c:	ebfffddd 	bl	f5008 <TIrLAP::GotData(unsigned char *, unsigned long)>
         f5890:	e3300000 	teq	r0, #0	; 0x0
         f5894:	0a00001e 	beq	f5914 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x27c>
         f5898:	e59d0008 	ldr	r0, [sp, #8]
         f589c:	e5941020 	ldr	r1, [r4, #32]	; fField32
         f58a0:	e1300001 	teq	r0, r1
         f58a4:	1a00001a 	bne	f5914 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x27c>
         f58a8:	e3a00000 	mov	r0, #0	; 0x0
         f58ac:	ebffe6aa 	bl	ef35c <TIrDscInfo::__ct(void)>
         f58b0:	e1b08000 	movs	r8, r0
         f58b4:	0a000014 	beq	f590c <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x274>
         f58b8:	e1a09007 	mov	r9, r7
         f58bc:	e5c87008 	strb	r7, [r8, #8]
         f58c0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         f58c4:	e5880000 	str	r0, [r8]
         f58c8:	e1a00008 	mov	r0, r8
         f58cc:	e28f1f15 	add	r1, pc, #84	; 0x54
         f58d0:	ebffe6b7 	bl	ef3b4 <TIrDscInfo::SetNickname(unsigned char const *)>
         f58d4:	e5947038 	ldr	r7, [r4, #56]	; fField56
         f58d8:	e3a00004 	mov	r0, #4	; 0x4
         f58dc:	e5849038 	str	r9, [r4, #56]	; fField56
         f58e0:	e5c70000 	strb	r0, [r7]
         f58e4:	e1a02008 	mov	r2, r8
         f58e8:	e5970010 	ldr	r0, [r7, #16]	; fField16
         f58ec:	e5901000 	ldr	r1, [r0]
         f58f0:	eb6bcefd 	bl	1be94ec <CList::$InsertAt(long, void *)>
         f58f4:	e5879004 	str	r9, [r7, #4]	; fField4
         f58f8:	e5c7a015 	strb	sl, [r7, #21]	; fField21
         f58fc:	e3a09000 	mov	r9, #0	; 0x0
         f5900:	e1a01007 	mov	r1, r7
         f5904:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f5908:	eb6508b6 	bl	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f590c:	e3390000 	teq	r9, #0	; 0x0
         f5910:	0a000002 	beq	f5920 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x288>
         f5914:	e1a01006 	mov	r1, r6
         f5918:	e1a00004 	mov	r0, r4
         f591c:	ebfffe24 	bl	f51b4 <TIrLAP::StartInput(CBufferSegment *)>
         f5920:	e28dd010 	add	sp, sp, #16	; 0x10
         f5924:	ea000007 	b	f5948 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x2b0>
         f5928:	00000000 	andeq	r0, r0, r0
         f592c:	e1a00004 	mov	r0, r4
         f5930:	e3a01002 	mov	r1, #2	; 0x2
         f5934:	ebfff61a 	bl	f31a4 <TIrLAP::HandleListenStateEvent(unsigned long)>
         f5938:	ea000002 	b	f5948 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x2b0>
         f593c:	e1a01006 	mov	r1, r6
         f5940:	e1a00004 	mov	r0, r4
         f5944:	ebfffe1a 	bl	f51b4 <TIrLAP::StartInput(CBufferSegment *)>
         f5948:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
         f594c:	e3300000 	teq	r0, #0	; 0x0
         f5950:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f5954:	e5940038 	ldr	r0, [r4, #56]	; fField56
         f5958:	e3300000 	teq	r0, #0	; 0x0
         f595c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f5960:	e5d00000 	ldrb	r0, [r0]
         f5964:	e3300003 	teq	r0, #3	; 0x3
         f5968:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f596c:	e1a00004 	mov	r0, r4
         f5970:	e3a0201c 	mov	r2, #28	; 0x1c
         f5974:	e1a01005 	mov	r1, r5
         f5978:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f597c:	ea64fc2e 	b	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f5980:	e1a00004 	mov	r0, r4
         f5984:	ebfffe21 	bl	f5210 <TIrLAP::StopInput(void)>
         f5988:	e5c47026 	strb	r7, [r4, #38]	; fField38
         f598c:	e5c47024 	strb	r7, [r4, #36]	; fField36
         f5990:	e3a00000 	mov	r0, #0	; 0x0
         f5994:	e59f2020 	ldr	r2, [pc, #20]	; f59bc <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x324>	; fField20
         f5998:	e5961008 	ldr	r1, [r6, #8]
         f599c:	e7d23000 	ldrb	r3, [r2, r0]
         f59a0:	e1330001 	teq	r3, r1
         f59a4:	1a000005 	bne	f59c0 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x328>
         f59a8:	e5c40026 	strb	r0, [r4, #38]	; fField38
         f59ac:	e5960008 	ldr	r0, [r6, #8]
         f59b0:	e2400001 	sub	r0, r0, #1	; 0x1
         f59b4:	e5c40024 	strb	r0, [r4, #36]	; fField36
         f59b8:	ea000004 	b	f59d0 <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x338>
         f59bc:	00371840 	eoreqs	r1, r7, r0, asr #16
         f59c0:	e2800001 	add	r0, r0, #1	; 0x1
         f59c4:	e20000ff 	and	r0, r0, #255	; 0xff
         f59c8:	e3500004 	cmp	r0, #4	; 0x4
         f59cc:	3afffff2 	bcc	f599c <TIrLAP::HandleDisconnectedStateEvent(unsigned long)+0x304>
         f59d0:	e5b6000c 	ldr	r0, [r6, #12]!	; fField12
         f59d4:	e584002c 	str	r0, [r4, #44]	; fField44
         f59d8:	e3700001 	cmn	r0, #1	; 0x1
         f59dc:	15d40026 	ldrneb	r0, [r4, #38]	; fField38
         f59e0:	13800004 	orrne	r0, r0, #4	; 0x4
         f59e4:	15c40026 	strneb	r0, [r4, #38]	; fField38
         f59e8:	e5c47025 	strb	r7, [r4, #37]	; fField37
         f59ec:	e5c4a01c 	strb	sl, [r4, #28]	; fField28
         f59f0:	e1a00004 	mov	r0, r4
         f59f4:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f59f8:	ea64fc07 	b	1a34a1c <TIrLAP::$OutputXIDCommand(void)>
    */
}

/**
 * Symbol: TIrLAP::HandleQueryStateEvent(unsigned long)
 * Address: 000f59fc
 */
TIrLAP::HandleQueryStateEvent(unsigned long) {
    /*
         f59fc:	e1a0c00d 	mov	ip, sp
         f5a00:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f5a04:	e24cb004 	sub	fp, ip, #4	; 0x4
         f5a08:	e1a04000 	mov	r4, r0
         f5a0c:	e3510017 	cmp	r1, #23	; 0x17
         f5a10:	01a00004 	moveq	r0, r4
         f5a14:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f5a18:	0afff6ca 	beq	f3548 <TIrLAP::HandleNDMDisconnectRequest(void)>
         f5a1c:	ca00002c 	bgt	f5ad4 <TIrLAP::HandleQueryStateEvent(unsigned long)+0xd8>
         f5a20:	e28460e4 	add	r6, r4, #228	; 0xe4
         f5a24:	e3310001 	teq	r1, #1	; 0x1
         f5a28:	0a00002e 	beq	f5ae8 <TIrLAP::HandleQueryStateEvent(unsigned long)+0xec>
         f5a2c:	e3310002 	teq	r1, #2	; 0x2
         f5a30:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f5a34:	e5d4009a 	ldrb	r0, [r4, #154]	; fField154
         f5a38:	e330007f 	teq	r0, #127	; 0x7f
         f5a3c:	1a000020 	bne	f5ac4 <TIrLAP::HandleQueryStateEvent(unsigned long)+0xc8>
         f5a40:	e1a00004 	mov	r0, r4
         f5a44:	e3a010af 	mov	r1, #175	; 0xaf
         f5a48:	ebfffd9e 	bl	f50c8 <TIrLAP::RecdFinalRsp(unsigned char)>
         f5a4c:	e3300000 	teq	r0, #0	; 0x0
         f5a50:	0a00001b 	beq	f5ac4 <TIrLAP::HandleQueryStateEvent(unsigned long)+0xc8>
         f5a54:	e24dd014 	sub	sp, sp, #20	; 0x14
         f5a58:	e28d1003 	add	r1, sp, #3	; 0x3
         f5a5c:	e1a00004 	mov	r0, r4
         f5a60:	e3a0200c 	mov	r2, #12	; 0xc
         f5a64:	ebfffd67 	bl	f5008 <TIrLAP::GotData(unsigned char *, unsigned long)>
         f5a68:	e3300000 	teq	r0, #0	; 0x0
         f5a6c:	0a000013 	beq	f5ac0 <TIrLAP::HandleQueryStateEvent(unsigned long)+0xc4>
         f5a70:	e59d1008 	ldr	r1, [sp, #8]
         f5a74:	e5940020 	ldr	r0, [r4, #32]	; fField32
         f5a78:	e1310000 	teq	r1, r0
         f5a7c:	1a00000f 	bne	f5ac0 <TIrLAP::HandleQueryStateEvent(unsigned long)+0xc4>
         f5a80:	e3a00000 	mov	r0, #0	; 0x0
         f5a84:	ebffe634 	bl	ef35c <TIrDscInfo::__ct(void)>
         f5a88:	e1b05000 	movs	r5, r0
         f5a8c:	0a00000b 	beq	f5ac0 <TIrLAP::HandleQueryStateEvent(unsigned long)+0xc4>
         f5a90:	e5947038 	ldr	r7, [r4, #56]	; fField56
         f5a94:	e5dd000e 	ldrb	r0, [sp, #14]
         f5a98:	e5c50008 	strb	r0, [r5, #8]
         f5a9c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         f5aa0:	e5850000 	str	r0, [r5]
         f5aa4:	e1a00005 	mov	r0, r5
         f5aa8:	e5941134 	ldr	r1, [r4, #308]	; fField308
         f5aac:	eb64e752 	bl	1a2f7fc <TIrDscInfo::$ExtractDevInfoFromBuffer(CBufferSegment *)>
         f5ab0:	e1a02005 	mov	r2, r5
         f5ab4:	e5b70010 	ldr	r0, [r7, #16]!	; fField16
         f5ab8:	e5901000 	ldr	r1, [r0]
         f5abc:	eb6bce8a 	bl	1be94ec <CList::$InsertAt(long, void *)>
         f5ac0:	e28dd014 	add	sp, sp, #20	; 0x14
         f5ac4:	e1a01006 	mov	r1, r6
         f5ac8:	e1a00004 	mov	r0, r4
         f5acc:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f5ad0:	eafffdb7 	b	f51b4 <TIrLAP::StartInput(CBufferSegment *)>
         f5ad4:	e331001d 	teq	r1, #29	; 0x1d
         f5ad8:	0a000015 	beq	f5b34 <TIrLAP::HandleQueryStateEvent(unsigned long)+0x138>
         f5adc:	e331001e 	teq	r1, #30	; 0x1e
         f5ae0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f5ae4:	ea00001b 	b	f5b58 <TIrLAP::HandleQueryStateEvent(unsigned long)+0x15c>
         f5ae8:	e5d40025 	ldrb	r0, [r4, #37]	; fField37
         f5aec:	e33000ff 	teq	r0, #255	; 0xff
         f5af0:	0a000005 	beq	f5b0c <TIrLAP::HandleQueryStateEvent(unsigned long)+0x110>
         f5af4:	e1a00004 	mov	r0, r4
         f5af8:	e3a0201d 	mov	r2, #29	; 0x1d
         f5afc:	e59f1004 	ldr	r1, [pc, #4]	; f5b08 <TIrLAP::HandleQueryStateEvent(unsigned long)+0x10c>	; fField4
         f5b00:	eb64fbcd 	bl	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f5b04:	eaffffee 	b	f5ac4 <TIrLAP::HandleQueryStateEvent(unsigned long)+0xc8>
         f5b08:	000167f6 	streqd	r6, [r1], -r6
         f5b0c:	e3a00000 	mov	r0, #0	; 0x0
         f5b10:	e5941038 	ldr	r1, [r4, #56]	; fField56
         f5b14:	e3a02004 	mov	r2, #4	; 0x4
         f5b18:	e5840038 	str	r0, [r4, #56]	; fField56
         f5b1c:	e5c12000 	strb	r2, [r1]
         f5b20:	e5c10015 	strb	r0, [r1, #21]	; fField21
         f5b24:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f5b28:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         f5b2c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f5b30:	ea65082c 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f5b34:	e1a00004 	mov	r0, r4
         f5b38:	ebfffdb8 	bl	f5220 <TIrLAP::InputHappening(void)>
         f5b3c:	e3300000 	teq	r0, #0	; 0x0
         f5b40:	0a000004 	beq	f5b58 <TIrLAP::HandleQueryStateEvent(unsigned long)+0x15c>
         f5b44:	e1a00004 	mov	r0, r4
         f5b48:	e3a0201e 	mov	r2, #30	; 0x1e
         f5b4c:	e59f1030 	ldr	r1, [pc, #30]	; f5b84 <TIrLAP::HandleQueryStateEvent(unsigned long)+0x188>
         f5b50:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f5b54:	ea64fbb8 	b	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f5b58:	e1a00004 	mov	r0, r4
         f5b5c:	ebfffdab 	bl	f5210 <TIrLAP::StopInput(void)>
         f5b60:	e5d40025 	ldrb	r0, [r4, #37]	; fField37
         f5b64:	e5d41024 	ldrb	r1, [r4, #36]	; fField36
         f5b68:	e1500001 	cmp	r0, r1
         f5b6c:	a3a000ff 	movge	r0, #255	; 0xff
         f5b70:	b2800001 	addlt	r0, r0, #1	; 0x1
         f5b74:	e5c40025 	strb	r0, [r4, #37]	; fField37
         f5b78:	e1a00004 	mov	r0, r4
         f5b7c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f5b80:	ea64fba5 	b	1a34a1c <TIrLAP::$OutputXIDCommand(void)>
         f5b84:	000287ee 	andeq	r8, r2, lr, ror #15
    */
}

/**
 * Symbol: TIrLAP::HandleConnectStateEvent(unsigned long)
 * Address: 000f5b88
 */
TIrLAP::HandleConnectStateEvent(unsigned long) {
    /*
         f5b88:	e1a0c00d 	mov	ip, sp
         f5b8c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f5b90:	e24cb004 	sub	fp, ip, #4	; 0x4
         f5b94:	e1a04000 	mov	r4, r0
         f5b98:	e3510017 	cmp	r1, #23	; 0x17
         f5b9c:	01a00004 	moveq	r0, r4
         f5ba0:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         f5ba4:	0afff667 	beq	f3548 <TIrLAP::HandleNDMDisconnectRequest(void)>
         f5ba8:	e59f50a4 	ldr	r5, [pc, #a4]	; f5c54 <TIrLAP::HandleConnectStateEvent(unsigned long)+0xcc>
         f5bac:	ca000029 	bgt	f5c58 <TIrLAP::HandleConnectStateEvent(unsigned long)+0xd0>
         f5bb0:	e28460e4 	add	r6, r4, #228	; 0xe4
         f5bb4:	e3310001 	teq	r1, #1	; 0x1
         f5bb8:	0a00007a 	beq	f5da8 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x220>
         f5bbc:	e3310002 	teq	r1, #2	; 0x2
         f5bc0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f5bc4:	e3a05001 	mov	r5, #1	; 0x1
         f5bc8:	e1a00004 	mov	r0, r4
         f5bcc:	e3a01063 	mov	r1, #99	; 0x63
         f5bd0:	ebfffd3c 	bl	f50c8 <TIrLAP::RecdFinalRsp(unsigned char)>
         f5bd4:	e3300000 	teq	r0, #0	; 0x0
         f5bd8:	0a000033 	beq	f5cac <TIrLAP::HandleConnectStateEvent(unsigned long)+0x124>
         f5bdc:	e24dd010 	sub	sp, sp, #16	; 0x10
         f5be0:	e28d1004 	add	r1, sp, #4	; 0x4
         f5be4:	e1a00004 	mov	r0, r4
         f5be8:	e3a02008 	mov	r2, #8	; 0x8
         f5bec:	ebfffd05 	bl	f5008 <TIrLAP::GotData(unsigned char *, unsigned long)>
         f5bf0:	e3300000 	teq	r0, #0	; 0x0
         f5bf4:	0a000056 	beq	f5d54 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1cc>
         f5bf8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         f5bfc:	e5940034 	ldr	r0, [r4, #52]	; fField52
         f5c00:	e1310000 	teq	r1, r0
         f5c04:	059d0008 	ldreq	r0, [sp, #8]
         f5c08:	05941020 	ldreq	r1, [r4, #32]	; fField32
         f5c0c:	01300001 	teqeq	r0, r1
         f5c10:	1a00004f 	bne	f5d54 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1cc>
         f5c14:	e1a00004 	mov	r0, r4
         f5c18:	eb64fb89 	bl	1a34a44 <TIrLAP::$StopTimer(void)>
         f5c1c:	e1a00004 	mov	r0, r4
         f5c20:	e3a01001 	mov	r1, #1	; 0x1
         f5c24:	eb64f76f 	bl	1a339e8 <TIrLAP::$ParseNegotiateAndInitConnState(unsigned char)>
         f5c28:	e3300000 	teq	r0, #0	; 0x0
         f5c2c:	1a000044 	bne	f5d44 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1bc>
         f5c30:	e5940040 	ldr	r0, [r4, #64]	; fField64
         f5c34:	eb6507d8 	bl	1a37b9c <TIrQOS::$GetBaudRate(void)>
         f5c38:	e1a01000 	mov	r1, r0
         f5c3c:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f5c40:	ebffebec 	bl	f0bf8 <TIrGlue::ChangeSpeed(unsigned long)>
         f5c44:	e1a00004 	mov	r0, r4
         f5c48:	e3a01001 	mov	r1, #1	; 0x1
         f5c4c:	eb64fb78 	bl	1a34a34 <TIrLAP::$OutputControlFrame(unsigned char)>
         f5c50:	ea00003e 	b	f5d50 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1c8>
         f5c54:	001c1f38 	andeqs	r1, ip, r8, lsr pc
         f5c58:	e3310020 	teq	r1, #32	; 0x20
         f5c5c:	0a000074 	beq	f5e34 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x2ac>
         f5c60:	e3310021 	teq	r1, #33	; 0x21
         f5c64:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f5c68:	e594005c 	ldr	r0, [r4, #92]	; fField92
         f5c6c:	e3500005 	cmp	r0, #5	; 0x5
         f5c70:	2a000068 	bcs	f5e18 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x290>
         f5c74:	eb6afb7b 	bl	1bb4a68 <$rand>
         f5c78:	e1a01000 	mov	r1, r0
         f5c7c:	e3a00032 	mov	r0, #50	; 0x32
         f5c80:	eb6af32e 	bl	1bb2940 <$__rt_sdiv>
         f5c84:	e0610281 	rsb	r0, r1, r1, lsl #5
         f5c88:	e0600200 	rsb	r0, r0, r0, lsl #4
         f5c8c:	e0400101 	sub	r0, r0, r1, lsl #2
         f5c90:	e0610100 	rsb	r0, r1, r0, lsl #2
         f5c94:	e59f100c 	ldr	r1, [pc, #c]	; f5ca8 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x120>
         f5c98:	e0811080 	add	r1, r1, r0, lsl #1
         f5c9c:	e1a00004 	mov	r0, r4
         f5ca0:	e3a02020 	mov	r2, #32	; 0x20
         f5ca4:	ea00006f 	b	f5e68 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x2e0>
         f5ca8:	000167f6 	streqd	r6, [r1], -r6
         f5cac:	e1a00004 	mov	r0, r4
         f5cb0:	e3a01083 	mov	r1, #131	; 0x83
         f5cb4:	ebfffcec 	bl	f506c <TIrLAP::RecdPollCmd(unsigned char)>
         f5cb8:	e3300000 	teq	r0, #0	; 0x0
         f5cbc:	0a00002b 	beq	f5d70 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1e8>
         f5cc0:	e24dd010 	sub	sp, sp, #16	; 0x10
         f5cc4:	e28d1004 	add	r1, sp, #4	; 0x4
         f5cc8:	e1a00004 	mov	r0, r4
         f5ccc:	e3a02009 	mov	r2, #9	; 0x9
         f5cd0:	ebfffccc 	bl	f5008 <TIrLAP::GotData(unsigned char *, unsigned long)>
         f5cd4:	e3300000 	teq	r0, #0	; 0x0
         f5cd8:	0a00001d 	beq	f5d54 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1cc>
         f5cdc:	e59d1008 	ldr	r1, [sp, #8]
         f5ce0:	e5940020 	ldr	r0, [r4, #32]	; fField32
         f5ce4:	e1310000 	teq	r1, r0
         f5ce8:	1a000019 	bne	f5d54 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1cc>
         f5cec:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         f5cf0:	e1500001 	cmp	r0, r1
         f5cf4:	2a000016 	bcs	f5d54 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1cc>
         f5cf8:	e5dd000c 	ldrb	r0, [sp, #12]	; fField12
         f5cfc:	e1a000a0 	mov	r0, r0, lsr #1
         f5d00:	e20000ff 	and	r0, r0, #255	; 0xff
         f5d04:	e3500000 	cmp	r0, #0	; 0x0
         f5d08:	da000011 	ble	f5d54 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1cc>
         f5d0c:	e350007f 	cmp	r0, #127	; 0x7f
         f5d10:	aa00000f 	bge	f5d54 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1cc>
         f5d14:	e3a01003 	mov	r1, #3	; 0x3
         f5d18:	e5c4101c 	strb	r1, [r4, #28]	; fField28
         f5d1c:	e5c4001d 	strb	r0, [r4, #29]	; fField29
         f5d20:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         f5d24:	e5840034 	str	r0, [r4, #52]	; fField52
         f5d28:	e1a00004 	mov	r0, r4
         f5d2c:	eb64fb44 	bl	1a34a44 <TIrLAP::$StopTimer(void)>
         f5d30:	e1a00004 	mov	r0, r4
         f5d34:	e3a01000 	mov	r1, #0	; 0x0
         f5d38:	eb64f72a 	bl	1a339e8 <TIrLAP::$ParseNegotiateAndInitConnState(unsigned char)>
         f5d3c:	e3300000 	teq	r0, #0	; 0x0
         f5d40:	0a000000 	beq	f5d48 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1c0>
         f5d44:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f5d48:	e1a00004 	mov	r0, r4
         f5d4c:	eb64fb36 	bl	1a34a2c <TIrLAP::$OutputUAResponse(void)>
         f5d50:	e3a05000 	mov	r5, #0	; 0x0
         f5d54:	e28dd010 	add	sp, sp, #16	; 0x10
         f5d58:	e3350000 	teq	r5, #0	; 0x0
         f5d5c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f5d60:	e1a01006 	mov	r1, r6
         f5d64:	e1a00004 	mov	r0, r4
         f5d68:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f5d6c:	eafffd10 	b	f51b4 <TIrLAP::StartInput(CBufferSegment *)>
         f5d70:	e1a00004 	mov	r0, r4
         f5d74:	e3a01043 	mov	r1, #67	; 0x43
         f5d78:	ebfffcb0 	bl	f5040 <TIrLAP::RecdCmd(unsigned char)>
         f5d7c:	e3300000 	teq	r0, #0	; 0x0
         f5d80:	1a000004 	bne	f5d98 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x210>
         f5d84:	e1a00004 	mov	r0, r4
         f5d88:	e3a0100f 	mov	r1, #15	; 0xf
         f5d8c:	ebfffcc4 	bl	f50a4 <TIrLAP::RecdRsp(unsigned char)>
         f5d90:	e3300000 	teq	r0, #0	; 0x0
         f5d94:	0afffff1 	beq	f5d60 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1d8>
         f5d98:	e1a00004 	mov	r0, r4
         f5d9c:	e59f1000 	ldr	r1, [pc, #0]	; f5da4 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x21c>
         f5da0:	ea000021 	b	f5e2c <TIrLAP::HandleConnectStateEvent(unsigned long)+0x2a4>
         f5da4:	ffff6997 	swinv	0x00ff6997
         f5da8:	e5d40097 	ldrb	r0, [r4, #151]	; fField151
         f5dac:	e3300001 	teq	r0, #1	; 0x1
         f5db0:	0a000009 	beq	f5ddc <TIrLAP::HandleConnectStateEvent(unsigned long)+0x254>
         f5db4:	e3300083 	teq	r0, #131	; 0x83
         f5db8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f5dbc:	e594005c 	ldr	r0, [r4, #92]	; fField92
         f5dc0:	e2800001 	add	r0, r0, #1	; 0x1
         f5dc4:	e584005c 	str	r0, [r4, #92]	; fField92
         f5dc8:	e1a00004 	mov	r0, r4
         f5dcc:	e3a02021 	mov	r2, #33	; 0x21
         f5dd0:	e1a01005 	mov	r1, r5
         f5dd4:	eb64fb18 	bl	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f5dd8:	eaffffe0 	b	f5d60 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x1d8>
         f5ddc:	e1a00004 	mov	r0, r4
         f5de0:	eb64fb09 	bl	1a34a0c <TIrLAP::$StartDataReceive(void)>
         f5de4:	e5940044 	ldr	r0, [r4, #68]	; fField68
         f5de8:	eb65035e 	bl	1a36b68 <TIrQOS::$GetExtraBOFs(void)>
         f5dec:	e5c40080 	strb	r0, [r4, #128]	; fField128
         f5df0:	e1a00004 	mov	r0, r4
         f5df4:	e3a01000 	mov	r1, #0	; 0x0
         f5df8:	eb64f6fb 	bl	1a339ec <TIrLAP::$ConnLstnComplete(long)>
         f5dfc:	e5941088 	ldr	r1, [r4, #136]	; fField136
         f5e00:	e1a00004 	mov	r0, r4
         f5e04:	e3a02021 	mov	r2, #33	; 0x21
         f5e08:	eb64fb0b 	bl	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f5e0c:	e3a00005 	mov	r0, #5	; 0x5
         f5e10:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f5e14:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f5e18:	e1a00004 	mov	r0, r4
         f5e1c:	ebfffcfb 	bl	f5210 <TIrLAP::StopInput(void)>
         f5e20:	e1a00004 	mov	r0, r4
         f5e24:	e3a01096 	mov	r1, #150	; 0x96
         f5e28:	e2411c97 	sub	r1, r1, #38656	; 0x9700
         f5e2c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f5e30:	ea64f6ed 	b	1a339ec <TIrLAP::$ConnLstnComplete(long)>
         f5e34:	e1a00004 	mov	r0, r4
         f5e38:	ebfffcf8 	bl	f5220 <TIrLAP::InputHappening(void)>
         f5e3c:	e3300000 	teq	r0, #0	; 0x0
         f5e40:	0a00000a 	beq	f5e70 <TIrLAP::HandleConnectStateEvent(unsigned long)+0x2e8>
         f5e44:	e3a01000 	mov	r1, #0	; 0x0
         f5e48:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f5e4c:	ebffeb66 	bl	f0bec <TIrGlue::SetMediaBusy(unsigned char)>
         f5e50:	e594005c 	ldr	r0, [r4, #92]	; fField92
         f5e54:	e2800001 	add	r0, r0, #1	; 0x1
         f5e58:	e584005c 	str	r0, [r4, #92]	; fField92
         f5e5c:	e1a00004 	mov	r0, r4
         f5e60:	e3a02021 	mov	r2, #33	; 0x21
         f5e64:	e1a01005 	mov	r1, r5
         f5e68:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f5e6c:	ea64faf2 	b	1a34a3c <TIrLAP::$StartTimer(unsigned long, int)>
         f5e70:	e1a00004 	mov	r0, r4
         f5e74:	ebfffce5 	bl	f5210 <TIrLAP::StopInput(void)>
         f5e78:	e1a00004 	mov	r0, r4
         f5e7c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f5e80:	ea64fae7 	b	1a34a24 <TIrLAP::$OutputSNRMCommand(void)>
    */
}

