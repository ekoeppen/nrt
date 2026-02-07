#include "include/TADSPConnection.h"

/**
 * Symbol: TADSPConnection::__ct(void)
 * Address: 00205180
 */
TADSPConnection::TADSPConnection(void) {
    /*
        205180:	e1a0c00d 	mov	ip, sp
        205184:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        205188:	e24cb004 	sub	fp, ip, #4	; 0x4
        20518c:	e1b04000 	movs	r4, r0
        205190:	1a000003 	bne	2051a4 <TADSPConnection::__ct(void)+0x24>
        205194:	e3a00f6b 	mov	r0, #428	; 0x1ac
        205198:	eb672566 	bl	1bce738 <$__nw(unsigned int)>
        20519c:	e1b04000 	movs	r4, r0
        2051a0:	0a00005a 	beq	205310 <TADSPConnection::__ct(void)+0x190>
        2051a4:	e3a05000 	mov	r5, #0	; 0x0
        2051a8:	e5c45008 	strb	r5, [r4, #8]	; fField8
        2051ac:	e5845004 	str	r5, [r4, #4]
        2051b0:	e584500c 	str	r5, [r4, #12]
        2051b4:	e5845018 	str	r5, [r4, #24]
        2051b8:	e5845010 	str	r5, [r4, #16]
        2051bc:	e5845014 	str	r5, [r4, #20]
        2051c0:	e284005c 	add	r0, r4, #92	; 0x5c
        2051c4:	eb61b1bf 	bl	1a718c8 <TMessageTimer::$__ct(void)>
        2051c8:	e28400a0 	add	r0, r4, #160	; 0xa0
        2051cc:	eb61b1bd 	bl	1a718c8 <TMessageTimer::$__ct(void)>
        2051d0:	e28400dc 	add	r0, r4, #220	; 0xdc
        2051d4:	eb61b1bb 	bl	1a718c8 <TMessageTimer::$__ct(void)>
        2051d8:	e2840f46 	add	r0, r4, #280	; 0x118
        2051dc:	eb61b1b9 	bl	1a718c8 <TMessageTimer::$__ct(void)>
        2051e0:	e2840f55 	add	r0, r4, #340	; 0x154
        2051e4:	e1a07000 	mov	r7, r0
        2051e8:	e3a01001 	mov	r1, #1	; 0x1
        2051ec:	eb67b9ee 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        2051f0:	e2840e16 	add	r0, r4, #352	; 0x160
        2051f4:	e1a06000 	mov	r6, r0
        2051f8:	e3a01001 	mov	r1, #1	; 0x1
        2051fc:	eb67b9ea 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        205200:	e2840d06 	add	r0, r4, #384	; 0x180
        205204:	eb677c0b 	bl	1be4238 <TAEvent::$__ct(void)>
        205208:	e59f0108 	ldr	r0, [pc, #108]	; 205318 <TADSPConnection::__ct(void)+0x198>
        20520c:	e5840180 	str	r0, [r4, #384]
        205210:	e584518c 	str	r5, [r4, #396]	; fField396
        205214:	e5845188 	str	r5, [r4, #392]	; fField392
        205218:	e59f00fc 	ldr	r0, [pc, #fc]	; 20531c <TADSPConnection::__ct(void)+0x19c>
        20521c:	e5840184 	str	r0, [r4, #388]
        205220:	e3a00004 	mov	r0, #4	; 0x4
        205224:	e2800b02 	add	r0, r0, #2048	; 0x800
        205228:	e5840190 	str	r0, [r4, #400]	; fField400
        20522c:	e2840f66 	add	r0, r4, #408	; 0x198
        205230:	eb67211d 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        205234:	e5845000 	str	r5, [r4]
        205238:	e5c4501d 	strb	r5, [r4, #29]	; fField29
        20523c:	e5c4501c 	strb	r5, [r4, #28]	; fField28
        205240:	e3a02003 	mov	r2, #3	; 0x3
        205244:	e5c4201e 	strb	r2, [r4, #30]
        205248:	e5845020 	str	r5, [r4, #32]	; fField32
        20524c:	e5c45024 	strb	r5, [r4, #36]	; fField36
        205250:	e3a01001 	mov	r1, #1	; 0x1
        205254:	e5c41025 	strb	r1, [r4, #37]	; fField37
        205258:	e3a00005 	mov	r0, #5	; 0x5
        20525c:	e584002c 	str	r0, [r4, #44]
        205260:	e5845028 	str	r5, [r4, #40]
        205264:	e5845030 	str	r5, [r4, #48]
        205268:	e5845034 	str	r5, [r4, #52]	; fField52
        20526c:	e284403c 	add	r4, r4, #60	; 0x3c
        205270:	e8840003 	stmia	r4, {r0, r1}
        205274:	e3a01010 	mov	r1, #16	; 0x10
        205278:	e5841008 	str	r1, [r4, #8]	; fField8
        20527c:	e5245004 	str	r5, [r4, -#4]!
        205280:	e2444038 	sub	r4, r4, #56	; 0x38
        205284:	e5941048 	ldr	r1, [r4, #72]	; fField72
        205288:	e1a01481 	mov	r1, r1, lsl #9
        20528c:	e1a014a1 	mov	r1, r1, lsr #9
        205290:	e5841048 	str	r1, [r4, #72]	; fField72
        205294:	e3a0100a 	mov	r1, #10	; 0xa
        205298:	e5c4104c 	strb	r1, [r4, #76]	; fField76
        20529c:	e3a01014 	mov	r1, #20	; 0x14
        2052a0:	e5842050 	str	r2, [r4, #80]	; fField80
        2052a4:	e5c41054 	strb	r1, [r4, #84]	; fField84
        2052a8:	e3a0100f 	mov	r1, #15	; 0xf
        2052ac:	e5840058 	str	r0, [r4, #88]	; fField88
        2052b0:	e5c41098 	strb	r1, [r4, #152]
        2052b4:	e3a03000 	mov	r3, #0	; 0x0
        2052b8:	e584009c 	str	r0, [r4, #156]	; fField156
        2052bc:	e92d0008 	stmdb	sp!, {r3}
        2052c0:	e1a00006 	mov	r0, r6
        2052c4:	e3a02000 	mov	r2, #0	; 0x0
        2052c8:	e3a01000 	mov	r1, #0	; 0x0
        2052cc:	eb67b9c3 	bl	1bf39e0 <TAddress::$SetAddress(unsigned long, unsigned short, unsigned char, unsigned char)>
        2052d0:	e28dd004 	add	sp, sp, #4	; 0x4
        2052d4:	e5c65001 	strb	r5, [r6, #1]
        2052d8:	e3a03000 	mov	r3, #0	; 0x0
        2052dc:	e5a65004 	str	r5, [r6, #4]!
        2052e0:	e92d0008 	stmdb	sp!, {r3}
        2052e4:	e1a00007 	mov	r0, r7
        2052e8:	e3a02000 	mov	r2, #0	; 0x0
        2052ec:	e3a01000 	mov	r1, #0	; 0x0
        2052f0:	eb67b9ba 	bl	1bf39e0 <TAddress::$SetAddress(unsigned long, unsigned short, unsigned char, unsigned char)>
        2052f4:	e28dd004 	add	sp, sp, #4	; 0x4
        2052f8:	e5c75001 	strb	r5, [r7, #1]
        2052fc:	e5a75004 	str	r5, [r7, #4]!
        205300:	e584516c 	str	r5, [r4, #364]	; fField364
        205304:	e5845170 	str	r5, [r4, #368]	; fField368
        205308:	e5845178 	str	r5, [r4, #376]	; fField376
        20530c:	e58451a8 	str	r5, [r4, #424]	; fField424
        205310:	e1a00004 	mov	r0, r4
        205314:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        205318:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        20531c:	61647370 	cmnvs	r4, r0, ror r3
    */
}

/**
 * Symbol: TADSPConnection::__dt(void)
 * Address: 00205320
 */
TADSPConnection::~TADSPConnection(void) {
    /*
        205320:	e1a0c00d 	mov	ip, sp
        205324:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        205328:	e24cb004 	sub	fp, ip, #4	; 0x4
        20532c:	e1a04000 	mov	r4, r0
        205330:	e1a05001 	mov	r5, r1
        205334:	e280005c 	add	r0, r0, #92	; 0x5c
        205338:	e1a09000 	mov	r9, r0
        20533c:	eb61eb32 	bl	1a8000c <TMessageTimer::$Stop(void)>
        205340:	e28400a0 	add	r0, r4, #160	; 0xa0
        205344:	e1a08000 	mov	r8, r0
        205348:	eb61eb2f 	bl	1a8000c <TMessageTimer::$Stop(void)>
        20534c:	e28400dc 	add	r0, r4, #220	; 0xdc
        205350:	e1a07000 	mov	r7, r0
        205354:	eb61eb2c 	bl	1a8000c <TMessageTimer::$Stop(void)>
        205358:	e2840f46 	add	r0, r4, #280	; 0x118
        20535c:	e1a06000 	mov	r6, r0
        205360:	eb61eb29 	bl	1a8000c <TMessageTimer::$Stop(void)>
        205364:	e2840f66 	add	r0, r4, #408	; 0x198
        205368:	e3a01000 	mov	r1, #0	; 0x0
        20536c:	eb6724e7 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        205370:	e1a00006 	mov	r0, r6
        205374:	e3a01000 	mov	r1, #0	; 0x0
        205378:	eb6724e4 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        20537c:	e1a00007 	mov	r0, r7
        205380:	e3a01000 	mov	r1, #0	; 0x0
        205384:	eb6724e1 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        205388:	e1a00008 	mov	r0, r8
        20538c:	e3a01000 	mov	r1, #0	; 0x0
        205390:	eb6724de 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        205394:	e1a00009 	mov	r0, r9
        205398:	e3a01000 	mov	r1, #0	; 0x0
        20539c:	eb6724db 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        2053a0:	e2840004 	add	r0, r4, #4	; 0x4
        2053a4:	e3a01000 	mov	r1, #0	; 0x0
        2053a8:	eb6724dd 	bl	1bce724 <TUObject::$__dt(void)>
        2053ac:	e3150001 	tst	r5, #1	; 0x1
        2053b0:	11a00004 	movne	r0, r4
        2053b4:	191b6bf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2053b8:	1a6720c8 	bne	1bcd6e0 <$__dl(void *)>
        2053bc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)
 * Address: 002053c0
 */
TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **) {
    /*
        2053c0:	e1a0c00d 	mov	ip, sp
        2053c4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2053c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2053cc:	e1a04000 	mov	r4, r0
        2053d0:	e1a06001 	mov	r6, r1
        2053d4:	e1a05002 	mov	r5, r2
        2053d8:	e1a07003 	mov	r7, r3
        2053dc:	e59b1004 	ldr	r1, [fp, #4]
        2053e0:	e5d0001d 	ldrb	r0, [r0, #29]	; fField29
        2053e4:	e3a08000 	mov	r8, #0	; 0x0
        2053e8:	e3500001 	cmp	r0, #1	; 0x1
        2053ec:	ba000037 	blt	2054d0 <TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x110>
        2053f0:	e3500004 	cmp	r0, #4	; 0x4
        2053f4:	ca000035 	bgt	2054d0 <TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x110>
        2053f8:	e3a0300f 	mov	r3, #15	; 0xf
        2053fc:	e596200c 	ldr	r2, [r6, #12]
        205400:	e0032c42 	and	r2, r3, r2, asr #24
        205404:	e0802102 	add	r2, r0, r2, lsl #2
        205408:	e59401a8 	ldr	r0, [r4, #424]	; fField424
        20540c:	e0800182 	add	r0, r0, r2, lsl #3
        205410:	e2400028 	sub	r0, r0, #40	; 0x28
        205414:	e5810000 	str	r0, [r1]
        205418:	e5d09000 	ldrb	r9, [r0]
        20541c:	e3190080 	tst	r9, #128	; 0x80
        205420:	1a00002a 	bne	2054d0 <TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x110>
        205424:	e3190001 	tst	r9, #1	; 0x1
        205428:	15d40161 	ldrneb	r0, [r4, #353]	; fField353
        20542c:	15d51001 	ldrneb	r1, [r5, #1]
        205430:	11300001 	teqne	r0, r1
        205434:	1a000025 	bne	2054d0 <TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x110>
        205438:	e3190040 	tst	r9, #64	; 0x40
        20543c:	0a000004 	beq	205454 <TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x94>
        205440:	e1a01005 	mov	r1, r5
        205444:	e1a00004 	mov	r0, r4
        205448:	eb61de80 	bl	1a7ce50 <TADSPConnection::$MatchFilterAddress(TAddress *)>
        20544c:	e3300000 	teq	r0, #0	; 0x0
        205450:	0a00001e 	beq	2054d0 <TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x110>
        205454:	e3190002 	tst	r9, #2	; 0x2
        205458:	0a000004 	beq	205470 <TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0xb0>
        20545c:	e1a01005 	mov	r1, r5
        205460:	e1a00004 	mov	r0, r4
        205464:	eb61de77 	bl	1a7ce48 <TADSPConnection::$MatchAddress(TAddress *)>
        205468:	e3300000 	teq	r0, #0	; 0x0
        20546c:	0a000017 	beq	2054d0 <TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x110>
        205470:	e3190004 	tst	r9, #4	; 0x4
        205474:	1594016c 	ldrne	r0, [r4, #364]	; fField364
        205478:	15971000 	ldrne	r1, [r7]
        20547c:	11a01801 	movne	r1, r1, lsl #16
        205480:	11300821 	teqne	r0, r1, lsr #16
        205484:	1a000011 	bne	2054d0 <TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x110>
        205488:	e3190008 	tst	r9, #8	; 0x8
        20548c:	15b40170 	ldrne	r0, [r4, #368]!	; fField368
        205490:	15961000 	ldrne	r1, [r6]
        205494:	11300821 	teqne	r0, r1, lsr #16
        205498:	1a00000c 	bne	2054d0 <TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x110>
        20549c:	e3190010 	tst	r9, #16	; 0x10
        2054a0:	15970000 	ldrne	r0, [r7]
        2054a4:	11a00800 	movne	r0, r0, lsl #16
        2054a8:	11a00820 	movne	r0, r0, lsr #16
        2054ac:	13300000 	teqne	r0, #0	; 0x0
        2054b0:	1a000006 	bne	2054d0 <TADSPConnection::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x110>
        2054b4:	e3190020 	tst	r9, #32	; 0x20
        2054b8:	15960000 	ldrne	r0, [r6]
        2054bc:	11a00820 	movne	r0, r0, lsr #16
        2054c0:	11a00800 	movne	r0, r0, lsl #16
        2054c4:	13300000 	teqne	r0, #0	; 0x0
        2054c8:	03a00001 	moveq	r0, #1	; 0x1
        2054cc:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2054d0:	e1a00008 	mov	r0, r8
        2054d4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::Read(TPacketMessage *, ADSPHeader *)
 * Address: 002054d8
 */
TADSPConnection::Read(TPacketMessage *, ADSPHeader *) {
    /*
        2054d8:	e1a0c00d 	mov	ip, sp
        2054dc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2054e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2054e4:	e1a04000 	mov	r4, r0
        2054e8:	e1a06001 	mov	r6, r1
        2054ec:	e1a05002 	mov	r5, r2
        2054f0:	e5917028 	ldr	r7, [r1, #40]
        2054f4:	e1a00007 	mov	r0, r7
        2054f8:	eb67b935 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        2054fc:	e5b71028 	ldr	r1, [r7, #40]!
        205500:	e0801001 	add	r1, r0, r1
        205504:	e5b60028 	ldr	r0, [r6, #40]!
        205508:	e5b0202c 	ldr	r2, [r0, #44]!
        20550c:	e595000c 	ldr	r0, [r5, #12]
        205510:	e2103202 	ands	r3, r0, #536870912	; 0x20000000
        205514:	13a03001 	movne	r3, #1	; 0x1
        205518:	e5950000 	ldr	r0, [r5]
        20551c:	e1a00800 	mov	r0, r0, lsl #16
        205520:	e595c004 	ldr	ip, [r5, #4]
        205524:	e180c82c 	orr	ip, r0, ip, lsr #16
        205528:	e92d0008 	stmdb	sp!, {r3}
        20552c:	e1a0300c 	mov	r3, ip
        205530:	e594017c 	ldr	r0, [r4, #380]	; fField380
        205534:	eb61ff55 	bl	1a85290 <TADSPRecvBuffer::$Putn(void const *, long, unsigned long, int)>
        205538:	e28dd004 	add	sp, sp, #4	; 0x4
        20553c:	e1b06000 	movs	r6, r0
        205540:	1a00000c 	bne	205578 <TADSPConnection::Read(TPacketMessage *, ADSPHeader *)+0xa0>
        205544:	e3a00020 	mov	r0, #32	; 0x20
        205548:	e1a01005 	mov	r1, r5
        20554c:	e5840178 	str	r0, [r4, #376]	; fField376
        205550:	e1a00004 	mov	r0, r4
        205554:	eb61ff4b 	bl	1a85288 <TADSPConnection::$ProcessAck(ADSPHeader *)>
        205558:	e5940048 	ldr	r0, [r4, #72]	; fField72
        20555c:	e3800502 	orr	r0, r0, #8388608	; 0x800000
        205560:	e5840048 	str	r0, [r4, #72]	; fField72
        205564:	e5b5100c 	ldr	r1, [r5, #12]!
        205568:	e3110101 	tst	r1, #1073741824	; 0x40000000
        20556c:	13800209 	orrne	r0, r0, #-1879048192	; 0x90000000
        205570:	15a40048 	strne	r0, [r4, #72]!	; fField72
        205574:	ea000007 	b	205598 <TADSPConnection::Read(TPacketMessage *, ADSPHeader *)+0xc0>
        205578:	e3760001 	cmn	r6, #1	; 0x1
        20557c:	05940178 	ldreq	r0, [r4, #376]	; fField376
        205580:	02400001 	subeq	r0, r0, #1	; 0x1
        205584:	05840178 	streq	r0, [r4, #376]	; fField376
        205588:	03300000 	teqeq	r0, #0	; 0x0
        20558c:	05940020 	ldreq	r0, [r4, #32]	; fField32
        205590:	03800c01 	orreq	r0, r0, #256	; 0x100
        205594:	05a40020 	streq	r0, [r4, #32]!	; fField32
        205598:	e1a00006 	mov	r0, r6
        20559c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::ReadAttention(TPacketMessage *, ADSPHeader *)
 * Address: 002055a0
 */
TADSPConnection::ReadAttention(TPacketMessage *, ADSPHeader *) {
    /*
        2055a0:	e3a00000 	mov	r0, #0	; 0x0
        2055a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPConnection::RecvAttnComplete(TATAsyncMsg *)
 * Address: 002055a8
 */
TADSPConnection::RecvAttnComplete(TATAsyncMsg *) {
    /*
        2055a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPConnection::UpDateClient(void)
 * Address: 002055ac
 */
TADSPConnection::UpDateClient(void) {
    /*
        2055ac:	e1a0c00d 	mov	ip, sp
        2055b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2055b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2055b8:	e5901048 	ldr	r1, [r0, #72]	; fField72
        2055bc:	e3c11502 	bic	r1, r1, #8388608	; 0x800000
        2055c0:	e5801048 	str	r1, [r0, #72]	; fField72
        2055c4:	e280c004 	add	ip, r0, #4	; 0x4
        2055c8:	e280ef66 	add	lr, r0, #408	; 0x198
        2055cc:	e2804d06 	add	r4, r0, #384	; 0x180
        2055d0:	e3a02000 	mov	r2, #0	; 0x0
        2055d4:	e3a03000 	mov	r3, #0	; 0x0
        2055d8:	e3a05000 	mov	r5, #0	; 0x0
        2055dc:	e3a01000 	mov	r1, #0	; 0x0
        2055e0:	e3a00001 	mov	r0, #1	; 0x1
        2055e4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2055e8:	e1a03005 	mov	r3, r5
        2055ec:	e3a02018 	mov	r2, #24	; 0x18
        2055f0:	e92d000c 	stmdb	sp!, {r2, r3}
        2055f4:	e1a03004 	mov	r3, r4
        2055f8:	e1a0000c 	mov	r0, ip
        2055fc:	e3a02000 	mov	r2, #0	; 0x0
        205600:	e59e1000 	ldr	r1, [lr]
        205604:	eb6755cf 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        205608:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::AttnExpired(TTimerMessage *)
 * Address: 0020560c
 */
TADSPConnection::AttnExpired(TTimerMessage *) {
    /*
        20560c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPConnection::ResetProbeTimer(void)
 * Address: 00205610
 */
TADSPConnection::ResetProbeTimer(void) {
    /*
        205610:	e1a0c00d 	mov	ip, sp
        205614:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        205618:	e24cb004 	sub	fp, ip, #4	; 0x4
        20561c:	e1a04000 	mov	r4, r0
        205620:	e3a029e1 	mov	r2, #3686400	; 0x384000
        205624:	e5b01058 	ldr	r1, [r0, #88]!	; fField88
        205628:	e2800004 	add	r0, r0, #4	; 0x4
        20562c:	eb61e644 	bl	1a7ef44 <TMessageTimer::$Reset(unsigned long, TimeUnits)>
        205630:	e3a00014 	mov	r0, #20	; 0x14
        205634:	e5c40054 	strb	r0, [r4, #84]	; fField84
        205638:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::ProbeExpired(TTimerMessage *)
 * Address: 0020563c
 */
TADSPConnection::ProbeExpired(TTimerMessage *) {
    /*
        20563c:	e1a0c00d 	mov	ip, sp
        205640:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        205644:	e24cb004 	sub	fp, ip, #4	; 0x4
        205648:	e1a04000 	mov	r4, r0
        20564c:	e5d0101c 	ldrb	r1, [r0, #28]	; fField28
        205650:	e280005c 	add	r0, r0, #92	; 0x5c
        205654:	e3310003 	teq	r1, #3	; 0x3
        205658:	13310004 	teqne	r1, #4	; 0x4
        20565c:	1a00000c 	bne	205694 <TADSPConnection::ProbeExpired(TTimerMessage *)+0x58>
        205660:	e5d41054 	ldrb	r1, [r4, #84]	; fField84
        205664:	e2411001 	sub	r1, r1, #1	; 0x1
        205668:	e21110ff 	ands	r1, r1, #255	; 0xff
        20566c:	e5c41054 	strb	r1, [r4, #84]	; fField84
        205670:	01a00004 	moveq	r0, r4
        205674:	03e01001 	mvneq	r1, #1	; 0x1
        205678:	0a000012 	beq	2056c8 <TADSPConnection::ProbeExpired(TTimerMessage *)+0x8c>
        20567c:	e3a029e1 	mov	r2, #3686400	; 0x384000
        205680:	e5941058 	ldr	r1, [r4, #88]	; fField88
        205684:	eb61e62e 	bl	1a7ef44 <TMessageTimer::$Reset(unsigned long, TimeUnits)>
        205688:	e5940020 	ldr	r0, [r4, #32]	; fField32
        20568c:	e3800001 	orr	r0, r0, #1	; 0x1
        205690:	ea000017 	b	2056f4 <TADSPConnection::ProbeExpired(TTimerMessage *)+0xb8>
        205694:	e3310002 	teq	r1, #2	; 0x2
        205698:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        20569c:	e5d4101d 	ldrb	r1, [r4, #29]	; fField29
        2056a0:	e3310002 	teq	r1, #2	; 0x2
        2056a4:	13310003 	teqne	r1, #3	; 0x3
        2056a8:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2056ac:	e5d4104c 	ldrb	r1, [r4, #76]	; fField76
        2056b0:	e2411001 	sub	r1, r1, #1	; 0x1
        2056b4:	e21110ff 	ands	r1, r1, #255	; 0xff
        2056b8:	e5c4104c 	strb	r1, [r4, #76]	; fField76
        2056bc:	1a000003 	bne	2056d0 <TADSPConnection::ProbeExpired(TTimerMessage *)+0x94>
        2056c0:	e1a00004 	mov	r0, r4
        2056c4:	e3e01000 	mvn	r1, #0	; 0x0
        2056c8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2056cc:	ea61cd5f 	b	1a78c50 <TADSPConnection::$DoClose(long)>
        2056d0:	e3a029e1 	mov	r2, #3686400	; 0x384000
        2056d4:	e5941050 	ldr	r1, [r4, #80]	; fField80
        2056d8:	eb61e619 	bl	1a7ef44 <TMessageTimer::$Reset(unsigned long, TimeUnits)>
        2056dc:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2056e0:	e5d4101d 	ldrb	r1, [r4, #29]	; fField29
        2056e4:	e3310002 	teq	r1, #2	; 0x2
        2056e8:	13a01008 	movne	r1, #8	; 0x8
        2056ec:	03a01002 	moveq	r1, #2	; 0x2
        2056f0:	e1800001 	orr	r0, r0, r1
        2056f4:	e5840020 	str	r0, [r4, #32]	; fField32
        2056f8:	e1a00004 	mov	r0, r4
        2056fc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        205700:	ea61c923 	b	1a77b94 <TADSPConnection::$CheckSend(void)>
    */
}

/**
 * Symbol: TADSPConnection::FlushExpired(TTimerMessage *)
 * Address: 00205704
 */
TADSPConnection::FlushExpired(TTimerMessage *) {
    /*
        205704:	e5901174 	ldr	r1, [r0, #372]	; fField372
        205708:	e5912058 	ldr	r2, [r1, #88]	; fField88
        20570c:	e5911050 	ldr	r1, [r1, #80]	; fField80
        205710:	e1520001 	cmp	r2, r1
        205714:	91a0f00e 	movls	pc, lr
        205718:	e5901048 	ldr	r1, [r0, #72]	; fField72
        20571c:	e3811402 	orr	r1, r1, #33554432	; 0x2000000
        205720:	e5801048 	str	r1, [r0, #72]	; fField72
        205724:	ea61c91a 	b	1a77b94 <TADSPConnection::$CheckSend(void)>
    */
}

/**
 * Symbol: TADSPConnection::Init(unsigned long, State *)
 * Address: 00205728
 */
TADSPConnection::Init(unsigned long, State *) {
    /*
        205728:	e1a0c00d 	mov	ip, sp
        20572c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        205730:	e24cb004 	sub	fp, ip, #4	; 0x4
        205734:	e1a04000 	mov	r4, r0
        205738:	e1a05001 	mov	r5, r1
        20573c:	e1a07002 	mov	r7, r2
        205740:	e1a03001 	mov	r3, r1
        205744:	e3a0200a 	mov	r2, #10	; 0xa
        205748:	e3a019e1 	mov	r1, #3686400	; 0x384000
        20574c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        205750:	eb67389f 	bl	1bd39d4 <$GetGlobals>
        205754:	eb678b38 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        205758:	e1a01000 	mov	r1, r0
        20575c:	e5943058 	ldr	r3, [r4, #88]	; fField88
        205760:	e284005c 	add	r0, r4, #92	; 0x5c
        205764:	e59f60e4 	ldr	r6, [pc, #e4]	; 205850 <TADSPConnection::Init(unsigned long, State *)+0x128>
        205768:	e1a02006 	mov	r2, r6
        20576c:	eb61d990 	bl	1a7bdb4 <TMessageTimer::$Init(TUPort *, unsigned long, unsigned long, TimeUnits, TimerType, unsigned long)>
        205770:	e28dd00c 	add	sp, sp, #12	; 0xc
        205774:	e1a03005 	mov	r3, r5
        205778:	e3a02009 	mov	r2, #9	; 0x9
        20577c:	e3a019e1 	mov	r1, #3686400	; 0x384000
        205780:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        205784:	eb673892 	bl	1bd39d4 <$GetGlobals>
        205788:	eb678b2b 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        20578c:	e1a01000 	mov	r1, r0
        205790:	e594309c 	ldr	r3, [r4, #156]	; fField156
        205794:	e28400a0 	add	r0, r4, #160	; 0xa0
        205798:	e59f20b0 	ldr	r2, [pc, #b0]	; 205850 <TADSPConnection::Init(unsigned long, State *)+0x128>
        20579c:	eb61d984 	bl	1a7bdb4 <TMessageTimer::$Init(TUPort *, unsigned long, unsigned long, TimeUnits, TimerType, unsigned long)>
        2057a0:	e28dd00c 	add	sp, sp, #12	; 0xc
        2057a4:	e1a03005 	mov	r3, r5
        2057a8:	e3a02008 	mov	r2, #8	; 0x8
        2057ac:	e3a019e1 	mov	r1, #3686400	; 0x384000
        2057b0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2057b4:	eb673886 	bl	1bd39d4 <$GetGlobals>
        2057b8:	eb678b1f 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        2057bc:	e1a01000 	mov	r1, r0
        2057c0:	e28400dc 	add	r0, r4, #220	; 0xdc
        2057c4:	e3a03000 	mov	r3, #0	; 0x0
        2057c8:	e59f2080 	ldr	r2, [pc, #80]	; 205850 <TADSPConnection::Init(unsigned long, State *)+0x128>	; fField80
        2057cc:	eb61d978 	bl	1a7bdb4 <TMessageTimer::$Init(TUPort *, unsigned long, unsigned long, TimeUnits, TimerType, unsigned long)>
        2057d0:	e28dd00c 	add	sp, sp, #12	; 0xc
        2057d4:	e1a03005 	mov	r3, r5
        2057d8:	e3a0200c 	mov	r2, #12	; 0xc
        2057dc:	e3a019e1 	mov	r1, #3686400	; 0x384000
        2057e0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2057e4:	eb67387a 	bl	1bd39d4 <$GetGlobals>
        2057e8:	eb678b13 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        2057ec:	e1a01000 	mov	r1, r0
        2057f0:	e2840f46 	add	r0, r4, #280	; 0x118
        2057f4:	e3a03000 	mov	r3, #0	; 0x0
        2057f8:	e59f2050 	ldr	r2, [pc, #50]	; 205850 <TADSPConnection::Init(unsigned long, State *)+0x128>
        2057fc:	eb61d96c 	bl	1a7bdb4 <TMessageTimer::$Init(TUPort *, unsigned long, unsigned long, TimeUnits, TimerType, unsigned long)>
        205800:	e28dd00c 	add	sp, sp, #12	; 0xc
        205804:	e584516c 	str	r5, [r4, #364]	; fField364
        205808:	e58471a8 	str	r7, [r4, #424]	; fField424
        20580c:	e2840f66 	add	r0, r4, #408	; 0x198
        205810:	e3a01001 	mov	r1, #1	; 0x1
        205814:	eb67409e 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        205818:	e59f0034 	ldr	r0, [pc, #34]	; 205854 <TADSPConnection::Init(unsigned long, State *)+0x12c>
        20581c:	e2844d06 	add	r4, r4, #384	; 0x180
        205820:	e8840041 	stmia	r4, {r0, r6}
        205824:	e2444d06 	sub	r4, r4, #384	; 0x180
        205828:	e5940000 	ldr	r0, [r4]
        20582c:	e584018c 	str	r0, [r4, #396]	; fField396
        205830:	e3a00000 	mov	r0, #0	; 0x0
        205834:	e5840188 	str	r0, [r4, #392]	; fField392
        205838:	e3a00004 	mov	r0, #4	; 0x4
        20583c:	e2800b02 	add	r0, r0, #2048	; 0x800
        205840:	e5840190 	str	r0, [r4, #400]	; fField400
        205844:	e594016c 	ldr	r0, [r4, #364]	; fField364
        205848:	e5a40194 	str	r0, [r4, #404]!	; fField404
        20584c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        205850:	61647370 	cmnvs	r4, r0, ror r3
        205854:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
    */
}

/**
 * Symbol: TADSPConnection::RetryExpired(TTimerMessage *)
 * Address: 00205858
 */
TADSPConnection::RetryExpired(TTimerMessage *) {
    /*
        205858:	e1a0c00d 	mov	ip, sp
        20585c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        205860:	e24cb004 	sub	fp, ip, #4	; 0x4
        205864:	e1a04000 	mov	r4, r0
        205868:	e5900048 	ldr	r0, [r0, #72]	; fField72
        20586c:	e3100301 	tst	r0, #67108864	; 0x4000000
        205870:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        205874:	e594109c 	ldr	r1, [r4, #156]	; fField156
        205878:	e28400a0 	add	r0, r4, #160	; 0xa0
        20587c:	e3a029e1 	mov	r2, #3686400	; 0x384000
        205880:	eb61e5af 	bl	1a7ef44 <TMessageTimer::$Reset(unsigned long, TimeUnits)>
        205884:	e5940048 	ldr	r0, [r4, #72]	; fField72
        205888:	e3c00301 	bic	r0, r0, #67108864	; 0x4000000
        20588c:	e5840048 	str	r0, [r4, #72]	; fField72
        205890:	e5940174 	ldr	r0, [r4, #372]	; fField372
        205894:	eb61fe91 	bl	1a852e0 <TADSPSendBuffer::$Retransmit(void)>
        205898:	e3a00000 	mov	r0, #0	; 0x0
        20589c:	e5c40024 	strb	r0, [r4, #36]	; fField36
        2058a0:	e5940048 	ldr	r0, [r4, #72]	; fField72
        2058a4:	e3800206 	orr	r0, r0, #1610612736	; 0x60000000
        2058a8:	e5840048 	str	r0, [r4, #72]	; fField72
        2058ac:	e5d40025 	ldrb	r0, [r4, #37]	; fField37
        2058b0:	e1a000a0 	mov	r0, r0, lsr #1
        2058b4:	e21000ff 	ands	r0, r0, #255	; 0xff
        2058b8:	e5c40025 	strb	r0, [r4, #37]	; fField37
        2058bc:	03a00001 	moveq	r0, #1	; 0x1
        2058c0:	05c40025 	streqb	r0, [r4, #37]	; fField37
        2058c4:	e1a00004 	mov	r0, r4
        2058c8:	eb620299 	bl	1a86334 <TADSPConnection::$UpdateRetryIntervalAfterTimeout(void)>
        2058cc:	e1a00004 	mov	r0, r4
        2058d0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2058d4:	ea61c8ae 	b	1a77b94 <TADSPConnection::$CheckSend(void)>
    */
}

/**
 * Symbol: TADSPConnection::UpdateRetryIntervalAfterTimeout(void)
 * Address: 002058d8
 */
TADSPConnection::UpdateRetryIntervalAfterTimeout(void) {
    /*
        2058d8:	e3a01005 	mov	r1, #5	; 0x5
        2058dc:	e5a0109c 	str	r1, [r0, #156]!	; fField156
        2058e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPConnection::ResetExpired(TTimerMessage *)
 * Address: 002058e4
 */
TADSPConnection::ResetExpired(TTimerMessage *) {
    /*
        2058e4:	e5901020 	ldr	r1, [r0, #32]	; fField32
        2058e8:	e3811040 	orr	r1, r1, #64	; 0x40
        2058ec:	e5801020 	str	r1, [r0, #32]	; fField32
        2058f0:	ea61c8a7 	b	1a77b94 <TADSPConnection::$CheckSend(void)>
    */
}

/**
 * Symbol: TADSPConnection::CheckSend(void)
 * Address: 002058f4
 */
TADSPConnection::CheckSend(void) {
    /*
        2058f4:	e1a0c00d 	mov	ip, sp
        2058f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2058fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        205900:	e1a04000 	mov	r4, r0
        205904:	e5900048 	ldr	r0, [r0, #72]	; fField72
        205908:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
        20590c:	e5840048 	str	r0, [r4, #72]	; fField72
        205910:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
        205914:	e3300005 	teq	r0, #5	; 0x5
        205918:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        20591c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        205920:	e3300000 	teq	r0, #0	; 0x0
        205924:	11a00004 	movne	r0, r4
        205928:	1b61fe6e 	blne	1a852e8 <TADSPConnection::$SendControl(void)>
        20592c:	e1a00004 	mov	r0, r4
        205930:	eb61f1f6 	bl	1a82110 <TADSPConnection::$CheckSendData(void)>
        205934:	e3300000 	teq	r0, #0	; 0x0
        205938:	1afffffb 	bne	20592c <TADSPConnection::CheckSend(void)+0x38>
        20593c:	e5940048 	ldr	r0, [r4, #72]	; fField72
        205940:	e3100201 	tst	r0, #268435456	; 0x10000000
        205944:	11a00004 	movne	r0, r4
        205948:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        20594c:	1a61fe66 	bne	1a852ec <TADSPConnection::$SendDataAck(void)>
        205950:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::SendControl(void)
 * Address: 00205954
 */
TADSPConnection::SendControl(void) {
    /*
        205954:	e1a0c00d 	mov	ip, sp
        205958:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20595c:	e24cb004 	sub	fp, ip, #4	; 0x4
        205960:	e1a04000 	mov	r4, r0
        205964:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        205968:	e3a05000 	mov	r5, #0	; 0x0
        20596c:	e28d0018 	add	r0, sp, #24	; 0x18
        205970:	eb61afcd 	bl	1a718ac <TWriteChain::$__ct(void)>
        205974:	e1a0000d 	mov	r0, sp
        205978:	eb61afd9 	bl	1a718e4 <TWriteElement::$__ct(void)>
        20597c:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        205980:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        205984:	e58d0038 	str	r0, [sp, #56]	; fField56
        205988:	e5940020 	ldr	r0, [r4, #32]	; fField32
        20598c:	e310001e 	tst	r0, #30	; 0x1e
        205990:	e3a01000 	mov	r1, #0	; 0x0
        205994:	0a00003b 	beq	205a88 <TADSPConnection::SendControl(void)+0x134>
        205998:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        20599c:	e1a00800 	mov	r0, r0, lsl #16
        2059a0:	e1a00820 	mov	r0, r0, lsr #16
        2059a4:	e3800401 	orr	r0, r0, #16777216	; 0x1000000
        2059a8:	e58d0024 	str	r0, [sp, #36]	; fField36
        2059ac:	e5940170 	ldr	r0, [r4, #368]	; fField368
        2059b0:	e59d2024 	ldr	r2, [sp, #36]	; fField36
        2059b4:	e1a02822 	mov	r2, r2, lsr #16
        2059b8:	e1a02802 	mov	r2, r2, lsl #16
        2059bc:	e1a00800 	mov	r0, r0, lsl #16
        2059c0:	e1820820 	orr	r0, r2, r0, lsr #16
        2059c4:	e58d0024 	str	r0, [sp, #36]	; fField36
        2059c8:	e58d1028 	str	r1, [sp, #40]
        2059cc:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2059d0:	e3100002 	tst	r0, #2	; 0x2
        2059d4:	0a000004 	beq	2059ec <TADSPConnection::SendControl(void)+0x98>
        2059d8:	e3a05002 	mov	r5, #2	; 0x2
        2059dc:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        2059e0:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        2059e4:	e3800481 	orr	r0, r0, #-2130706432	; 0x81000000
        2059e8:	ea000015 	b	205a44 <TADSPConnection::SendControl(void)+0xf0>
        2059ec:	e3100004 	tst	r0, #4	; 0x4
        2059f0:	0a000004 	beq	205a08 <TADSPConnection::SendControl(void)+0xb4>
        2059f4:	e3a05004 	mov	r5, #4	; 0x4
        2059f8:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        2059fc:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        205a00:	e3800482 	orr	r0, r0, #-2113929216	; 0x82000000
        205a04:	ea00000e 	b	205a44 <TADSPConnection::SendControl(void)+0xf0>
        205a08:	e3100008 	tst	r0, #8	; 0x8
        205a0c:	0a000004 	beq	205a24 <TADSPConnection::SendControl(void)+0xd0>
        205a10:	e3a05008 	mov	r5, #8	; 0x8
        205a14:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        205a18:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        205a1c:	e3800483 	orr	r0, r0, #-2097152000	; 0x83000000
        205a20:	ea000007 	b	205a44 <TADSPConnection::SendControl(void)+0xf0>
        205a24:	e59d002c 	ldr	r0, [sp, #44]
        205a28:	e1a00800 	mov	r0, r0, lsl #16
        205a2c:	e1a00820 	mov	r0, r0, lsr #16
        205a30:	e3a05010 	mov	r5, #16	; 0x10
        205a34:	e58d002c 	str	r0, [sp, #44]
        205a38:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        205a3c:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        205a40:	e3800321 	orr	r0, r0, #-2080374784	; 0x84000000
        205a44:	e58d0038 	str	r0, [sp, #56]	; fField56
        205a48:	e5940020 	ldr	r0, [r4, #32]	; fField32
        205a4c:	e310000a 	tst	r0, #10	; 0xa
        205a50:	0a000003 	beq	205a64 <TADSPConnection::SendControl(void)+0x110>
        205a54:	e5941050 	ldr	r1, [r4, #80]	; fField80
        205a58:	e284005c 	add	r0, r4, #92	; 0x5c
        205a5c:	e3a029e1 	mov	r2, #3686400	; 0x384000
        205a60:	eb61e537 	bl	1a7ef44 <TMessageTimer::$Reset(unsigned long, TimeUnits)>
        205a64:	e28d1024 	add	r1, sp, #36	; 0x24
        205a68:	e1a0000d 	mov	r0, sp
        205a6c:	e3a03002 	mov	r3, #2	; 0x2
        205a70:	e3a02008 	mov	r2, #8	; 0x8
        205a74:	eb61d8d0 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        205a78:	e1a0100d 	mov	r1, sp
        205a7c:	e28d0018 	add	r0, sp, #24	; 0x18
        205a80:	eb61bbe6 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
        205a84:	ea000029 	b	205b30 <TADSPConnection::SendControl(void)+0x1dc>
        205a88:	e3100020 	tst	r0, #32	; 0x20
        205a8c:	0a000006 	beq	205aac <TADSPConnection::SendControl(void)+0x158>
        205a90:	e3a00005 	mov	r0, #5	; 0x5
        205a94:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        205a98:	e3a05020 	mov	r5, #32	; 0x20
        205a9c:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        205aa0:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        205aa4:	e3800485 	orr	r0, r0, #-2063597568	; 0x85000000
        205aa8:	ea00001f 	b	205b2c <TADSPConnection::SendControl(void)+0x1d8>
        205aac:	e3100001 	tst	r0, #1	; 0x1
        205ab0:	0a000004 	beq	205ac8 <TADSPConnection::SendControl(void)+0x174>
        205ab4:	e3a05001 	mov	r5, #1	; 0x1
        205ab8:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        205abc:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        205ac0:	e3800103 	orr	r0, r0, #-1073741824	; 0xc0000000
        205ac4:	ea000018 	b	205b2c <TADSPConnection::SendControl(void)+0x1d8>
        205ac8:	e3100040 	tst	r0, #64	; 0x40
        205acc:	0a000009 	beq	205af8 <TADSPConnection::SendControl(void)+0x1a4>
        205ad0:	e3a05040 	mov	r5, #64	; 0x40
        205ad4:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        205ad8:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        205adc:	e3800486 	orr	r0, r0, #-2046820352	; 0x86000000
        205ae0:	e58d0038 	str	r0, [sp, #56]	; fField56
        205ae4:	e594109c 	ldr	r1, [r4, #156]	; fField156
        205ae8:	e2840f46 	add	r0, r4, #280	; 0x118
        205aec:	e3a029e1 	mov	r2, #3686400	; 0x384000
        205af0:	eb61e513 	bl	1a7ef44 <TMessageTimer::$Reset(unsigned long, TimeUnits)>
        205af4:	ea00000d 	b	205b30 <TADSPConnection::SendControl(void)+0x1dc>
        205af8:	e3100080 	tst	r0, #128	; 0x80
        205afc:	0a000004 	beq	205b14 <TADSPConnection::SendControl(void)+0x1c0>
        205b00:	e3a05080 	mov	r5, #128	; 0x80
        205b04:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        205b08:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        205b0c:	e3800487 	orr	r0, r0, #-2030043136	; 0x87000000
        205b10:	ea000005 	b	205b2c <TADSPConnection::SendControl(void)+0x1d8>
        205b14:	e3100c01 	tst	r0, #256	; 0x100
        205b18:	0a000004 	beq	205b30 <TADSPConnection::SendControl(void)+0x1dc>
        205b1c:	e3a05c01 	mov	r5, #256	; 0x100
        205b20:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        205b24:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        205b28:	e3800322 	orr	r0, r0, #-2013265920	; 0x88000000
        205b2c:	e58d0038 	str	r0, [sp, #56]	; fField56
        205b30:	e5940020 	ldr	r0, [r4, #32]	; fField32
        205b34:	e1c00005 	bic	r0, r0, r5
        205b38:	e28d102c 	add	r1, sp, #44	; 0x2c
        205b3c:	e5840020 	str	r0, [r4, #32]	; fField32
        205b40:	e1a00004 	mov	r0, r4
        205b44:	eb61fdcd 	bl	1a85280 <TADSPConnection::$PrepHeader(ADSPHeader *)>
        205b48:	e24dd018 	sub	sp, sp, #24	; 0x18
        205b4c:	e1a0000d 	mov	r0, sp
        205b50:	eb61af63 	bl	1a718e4 <TWriteElement::$__ct(void)>
        205b54:	e28d1044 	add	r1, sp, #68	; 0x44
        205b58:	e1a0000d 	mov	r0, sp
        205b5c:	e3a03002 	mov	r3, #2	; 0x2
        205b60:	e3a0200d 	mov	r2, #13	; 0xd
        205b64:	eb61d894 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        205b68:	e1a0100d 	mov	r1, sp
        205b6c:	e28d0030 	add	r0, sp, #48	; 0x30
        205b70:	eb61bbaa 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
        205b74:	e2840e16 	add	r0, r4, #352	; 0x160
        205b78:	e28d1030 	add	r1, sp, #48	; 0x30
        205b7c:	e3a02007 	mov	r2, #7	; 0x7
        205b80:	eb61ed45 	bl	1a8109c <$WriteSocket(TAddress *, TWriteChain *, unsigned char)>
        205b84:	e1a0000d 	mov	r0, sp
        205b88:	e3a01000 	mov	r1, #0	; 0x0
        205b8c:	e1a0e00f 	mov	lr, pc
        205b90:	e59df000 	ldr	pc, [sp]
        205b94:	e28dd018 	add	sp, sp, #24	; 0x18
        205b98:	e1a0000d 	mov	r0, sp
        205b9c:	e3a01000 	mov	r1, #0	; 0x0
        205ba0:	e1a0e00f 	mov	lr, pc
        205ba4:	e59df000 	ldr	pc, [sp]
        205ba8:	e28d0018 	add	r0, sp, #24	; 0x18
        205bac:	eb61cc1e 	bl	1a78c2c <TWriteChain::$Destroy(void)>
        205bb0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::SendDataAck(void)
 * Address: 00205bb4
 */
TADSPConnection::SendDataAck(void) {
    /*
        205bb4:	e1a0c00d 	mov	ip, sp
        205bb8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        205bbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        205bc0:	e1a04000 	mov	r4, r0
        205bc4:	e590017c 	ldr	r0, [r0, #380]	; fField380
        205bc8:	eb61fdb7 	bl	1a852ac <TADSPRecvBuffer::$RecvWdw(void)>
        205bcc:	e3500000 	cmp	r0, #0	; 0x0
        205bd0:	991ba810 	ldmlsdb	fp, {r4, fp, sp, pc}
        205bd4:	e5940048 	ldr	r0, [r4, #72]	; fField72
        205bd8:	e3c00201 	bic	r0, r0, #268435456	; 0x10000000
        205bdc:	e5840048 	str	r0, [r4, #72]	; fField72
        205be0:	e24dd034 	sub	sp, sp, #52	; 0x34
        205be4:	e28d0018 	add	r0, sp, #24	; 0x18
        205be8:	eb61af2f 	bl	1a718ac <TWriteChain::$__ct(void)>
        205bec:	e1a0000d 	mov	r0, sp
        205bf0:	eb61af3b 	bl	1a718e4 <TWriteElement::$__ct(void)>
        205bf4:	e59d0030 	ldr	r0, [sp, #48]
        205bf8:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        205bfc:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
        205c00:	e58d0030 	str	r0, [sp, #48]
        205c04:	e28d1024 	add	r1, sp, #36	; 0x24
        205c08:	e1a00004 	mov	r0, r4
        205c0c:	eb61fd9b 	bl	1a85280 <TADSPConnection::$PrepHeader(ADSPHeader *)>
        205c10:	e28d1024 	add	r1, sp, #36	; 0x24
        205c14:	e1a0000d 	mov	r0, sp
        205c18:	e3a03002 	mov	r3, #2	; 0x2
        205c1c:	e3a0200d 	mov	r2, #13	; 0xd
        205c20:	eb61d865 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        205c24:	e1a0100d 	mov	r1, sp
        205c28:	e28d0018 	add	r0, sp, #24	; 0x18
        205c2c:	eb61bb7b 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
        205c30:	e2840e16 	add	r0, r4, #352	; 0x160
        205c34:	e28d1018 	add	r1, sp, #24	; 0x18
        205c38:	e3a02007 	mov	r2, #7	; 0x7
        205c3c:	eb61ed16 	bl	1a8109c <$WriteSocket(TAddress *, TWriteChain *, unsigned char)>
        205c40:	e1a0000d 	mov	r0, sp
        205c44:	e3a01000 	mov	r1, #0	; 0x0
        205c48:	e1a0e00f 	mov	lr, pc
        205c4c:	e59df000 	ldr	pc, [sp]
        205c50:	e28d0018 	add	r0, sp, #24	; 0x18
        205c54:	eb61cbf4 	bl	1a78c2c <TWriteChain::$Destroy(void)>
        205c58:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::CheckSendData(void)
 * Address: 00205c5c
 */
TADSPConnection::CheckSendData(void) {
    /*
        205c5c:	e1a0c00d 	mov	ip, sp
        205c60:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        205c64:	e24cb004 	sub	fp, ip, #4	; 0x4
        205c68:	e1a04000 	mov	r4, r0
        205c6c:	e3a05000 	mov	r5, #0	; 0x0
        205c70:	e5d0001c 	ldrb	r0, [r0, #28]	; fField28
        205c74:	e3300003 	teq	r0, #3	; 0x3
        205c78:	13300004 	teqne	r0, #4	; 0x4
        205c7c:	1a0000a5 	bne	205f18 <TADSPConnection::CheckSendData(void)+0x2bc>
        205c80:	e24dd008 	sub	sp, sp, #8	; 0x8
        205c84:	e28d1004 	add	r1, sp, #4	; 0x4
        205c88:	e5940174 	ldr	r0, [r4, #372]	; fField372
        205c8c:	eb61f133 	bl	1a82160 <TADSPSendBuffer::$DataCount(int *)>
        205c90:	e58d0000 	str	r0, [sp]
        205c94:	e1a01000 	mov	r1, r0
        205c98:	e3500000 	cmp	r0, #0	; 0x0
        205c9c:	da00009c 	ble	205f14 <TADSPConnection::CheckSendData(void)+0x2b8>
        205ca0:	e5940174 	ldr	r0, [r4, #372]	; fField372
        205ca4:	e5902058 	ldr	r2, [r0, #88]	; fField88
        205ca8:	e5900050 	ldr	r0, [r0, #80]	; fField80
        205cac:	e1520000 	cmp	r2, r0
        205cb0:	9a000097 	bls	205f14 <TADSPConnection::CheckSendData(void)+0x2b8>
        205cb4:	e5d40024 	ldrb	r0, [r4, #36]	; fField36
        205cb8:	e5d42025 	ldrb	r2, [r4, #37]	; fField37
        205cbc:	e1500002 	cmp	r0, r2
        205cc0:	aa000093 	bge	205f14 <TADSPConnection::CheckSendData(void)+0x2b8>
        205cc4:	e5940048 	ldr	r0, [r4, #72]	; fField72
        205cc8:	e3100301 	tst	r0, #67108864	; 0x4000000
        205ccc:	1a000090 	bne	205f14 <TADSPConnection::CheckSendData(void)+0x2b8>
        205cd0:	e3100402 	tst	r0, #33554432	; 0x2000000
        205cd4:	059d0004 	ldreq	r0, [sp, #4]
        205cd8:	03300000 	teqeq	r0, #0	; 0x0
        205cdc:	1a000001 	bne	205ce8 <TADSPConnection::CheckSendData(void)+0x8c>
        205ce0:	e3510010 	cmp	r1, #16	; 0x10
        205ce4:	ba000088 	blt	205f0c <TADSPConnection::CheckSendData(void)+0x2b0>
        205ce8:	e24ddf97 	sub	sp, sp, #604	; 0x25c
        205cec:	e1a0000d 	mov	r0, sp
        205cf0:	eb61aeed 	bl	1a718ac <TWriteChain::$__ct(void)>
        205cf4:	e28d3f96 	add	r3, sp, #600	; 0x258
        205cf8:	e28d2f97 	add	r2, sp, #604	; 0x25c
        205cfc:	e28d101c 	add	r1, sp, #28	; 0x1c
        205d00:	e5940174 	ldr	r0, [r4, #372]	; fField372
        205d04:	eb61f525 	bl	1a831a0 <TADSPSendBuffer::$Getn(void *, long *, unsigned long *)>
        205d08:	e3700003 	cmn	r0, #3	; 0x3
        205d0c:	05941048 	ldreq	r1, [r4, #72]	; fField72
        205d10:	03811312 	orreq	r1, r1, #1207959552	; 0x48000000
        205d14:	0a000003 	beq	205d28 <TADSPConnection::CheckSendData(void)+0xcc>
        205d18:	e3700004 	cmn	r0, #4	; 0x4
        205d1c:	1a000002 	bne	205d2c <TADSPConnection::CheckSendData(void)+0xd0>
        205d20:	e5941048 	ldr	r1, [r4, #72]	; fField72
        205d24:	e3811302 	orr	r1, r1, #134217728	; 0x8000000
        205d28:	e5841048 	str	r1, [r4, #72]	; fField72
        205d2c:	e5941048 	ldr	r1, [r4, #72]	; fField72
        205d30:	e3c11201 	bic	r1, r1, #268435456	; 0x10000000
        205d34:	e5841048 	str	r1, [r4, #72]	; fField72
        205d38:	e3110302 	tst	r1, #134217728	; 0x8000000
        205d3c:	1a000001 	bne	205d48 <TADSPConnection::CheckSendData(void)+0xec>
        205d40:	e3700004 	cmn	r0, #4	; 0x4
        205d44:	13a05001 	movne	r5, #1	; 0x1
        205d48:	e594016c 	ldr	r0, [r4, #364]	; fField364
        205d4c:	e59d100c 	ldr	r1, [sp, #12]
        205d50:	e1a01801 	mov	r1, r1, lsl #16
        205d54:	e1a01821 	mov	r1, r1, lsr #16
        205d58:	e1810800 	orr	r0, r1, r0, lsl #16
        205d5c:	e58d000c 	str	r0, [sp, #12]
        205d60:	e1a02820 	mov	r2, r0, lsr #16
        205d64:	e1a02802 	mov	r2, r2, lsl #16
        205d68:	e59d0258 	ldr	r0, [sp, #600]
        205d6c:	e1821820 	orr	r1, r2, r0, lsr #16
        205d70:	e58d100c 	str	r1, [sp, #12]
        205d74:	e59d1010 	ldr	r1, [sp, #16]
        205d78:	e1a01801 	mov	r1, r1, lsl #16
        205d7c:	e1a01821 	mov	r1, r1, lsr #16
        205d80:	e1810800 	orr	r0, r1, r0, lsl #16
        205d84:	e58d0010 	str	r0, [sp, #16]
        205d88:	e59d0260 	ldr	r0, [sp, #608]
        205d8c:	e3300000 	teq	r0, #0	; 0x0
        205d90:	e59d0018 	ldr	r0, [sp, #24]
        205d94:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        205d98:	13800202 	orrne	r0, r0, #536870912	; 0x20000000
        205d9c:	e58d0018 	str	r0, [sp, #24]
        205da0:	e5940048 	ldr	r0, [r4, #72]	; fField72
        205da4:	e3100302 	tst	r0, #134217728	; 0x8000000
        205da8:	1a000006 	bne	205dc8 <TADSPConnection::CheckSendData(void)+0x16c>
        205dac:	e5d41024 	ldrb	r1, [r4, #36]	; fField36
        205db0:	e2811001 	add	r1, r1, #1	; 0x1
        205db4:	e20110ff 	and	r1, r1, #255	; 0xff
        205db8:	e5c41024 	strb	r1, [r4, #36]	; fField36
        205dbc:	e5d42025 	ldrb	r2, [r4, #37]	; fField37
        205dc0:	e1510002 	cmp	r1, r2
        205dc4:	ba000012 	blt	205e14 <TADSPConnection::CheckSendData(void)+0x1b8>
        205dc8:	e24dd008 	sub	sp, sp, #8	; 0x8
        205dcc:	e3c00302 	bic	r0, r0, #134217728	; 0x8000000
        205dd0:	e5840048 	str	r0, [r4, #72]	; fField72
        205dd4:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        205dd8:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
        205ddc:	e58d0020 	str	r0, [sp, #32]	; fField32
        205de0:	e5940048 	ldr	r0, [r4, #72]	; fField72
        205de4:	e3800301 	orr	r0, r0, #67108864	; 0x4000000
        205de8:	e5840048 	str	r0, [r4, #72]	; fField72
        205dec:	e1a0000d 	mov	r0, sp
        205df0:	eb6736f8 	bl	1bd39d8 <$GetGlobalTime>
        205df4:	e59d0004 	ldr	r0, [sp, #4]
        205df8:	e5840034 	str	r0, [r4, #52]	; fField52
        205dfc:	e5940174 	ldr	r0, [r4, #372]	; fField372
        205e00:	e5900050 	ldr	r0, [r0, #80]	; fField80
        205e04:	e5840038 	str	r0, [r4, #56]	; fField56
        205e08:	e28400a0 	add	r0, r4, #160	; 0xa0
        205e0c:	eb61e879 	bl	1a7fff8 <TMessageTimer::$Start(void)>
        205e10:	e28dd008 	add	sp, sp, #8	; 0x8
        205e14:	e594017c 	ldr	r0, [r4, #380]	; fField380
        205e18:	e590004c 	ldr	r0, [r0, #76]	; fField76
        205e1c:	e59d1010 	ldr	r1, [sp, #16]
        205e20:	e1a01821 	mov	r1, r1, lsr #16
        205e24:	e1a01801 	mov	r1, r1, lsl #16
        205e28:	e1810820 	orr	r0, r1, r0, lsr #16
        205e2c:	e58d0010 	str	r0, [sp, #16]
        205e30:	e594017c 	ldr	r0, [r4, #380]	; fField380
        205e34:	e590004c 	ldr	r0, [r0, #76]	; fField76
        205e38:	e59d1014 	ldr	r1, [sp, #20]
        205e3c:	e1a01801 	mov	r1, r1, lsl #16
        205e40:	e1a01821 	mov	r1, r1, lsr #16
        205e44:	e1810800 	orr	r0, r1, r0, lsl #16
        205e48:	e58d0014 	str	r0, [sp, #20]
        205e4c:	e594017c 	ldr	r0, [r4, #380]	; fField380
        205e50:	eb61fd15 	bl	1a852ac <TADSPRecvBuffer::$RecvWdw(void)>
        205e54:	e59d1014 	ldr	r1, [sp, #20]
        205e58:	e1a01821 	mov	r1, r1, lsr #16
        205e5c:	e1a01801 	mov	r1, r1, lsl #16
        205e60:	e1a00800 	mov	r0, r0, lsl #16
        205e64:	e1810820 	orr	r0, r1, r0, lsr #16
        205e68:	e58d0014 	str	r0, [sp, #20]
        205e6c:	e24dd018 	sub	sp, sp, #24	; 0x18
        205e70:	e1a0000d 	mov	r0, sp
        205e74:	eb61ae9a 	bl	1a718e4 <TWriteElement::$__ct(void)>
        205e78:	e59d2274 	ldr	r2, [sp, #628]
        205e7c:	e28d1034 	add	r1, sp, #52	; 0x34
        205e80:	e1a0000d 	mov	r0, sp
        205e84:	e3a03002 	mov	r3, #2	; 0x2
        205e88:	eb61d7cb 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        205e8c:	e1a0100d 	mov	r1, sp
        205e90:	e28d0018 	add	r0, sp, #24	; 0x18
        205e94:	eb61bae1 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
        205e98:	e24dd018 	sub	sp, sp, #24	; 0x18
        205e9c:	e1a0000d 	mov	r0, sp
        205ea0:	eb61ae8f 	bl	1a718e4 <TWriteElement::$__ct(void)>
        205ea4:	e28d103c 	add	r1, sp, #60	; 0x3c
        205ea8:	e1a0000d 	mov	r0, sp
        205eac:	e3a03002 	mov	r3, #2	; 0x2
        205eb0:	e3a0200d 	mov	r2, #13	; 0xd
        205eb4:	eb61d7c0 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        205eb8:	e1a0100d 	mov	r1, sp
        205ebc:	e28d0030 	add	r0, sp, #48	; 0x30
        205ec0:	eb61bad6 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
        205ec4:	e2840e16 	add	r0, r4, #352	; 0x160
        205ec8:	e28d1030 	add	r1, sp, #48	; 0x30
        205ecc:	e3a02007 	mov	r2, #7	; 0x7
        205ed0:	eb61ec71 	bl	1a8109c <$WriteSocket(TAddress *, TWriteChain *, unsigned char)>
        205ed4:	e1a0000d 	mov	r0, sp
        205ed8:	e3a01000 	mov	r1, #0	; 0x0
        205edc:	e1a0e00f 	mov	lr, pc
        205ee0:	e59df000 	ldr	pc, [sp]
        205ee4:	e28dd018 	add	sp, sp, #24	; 0x18
        205ee8:	e1a0000d 	mov	r0, sp
        205eec:	e3a01000 	mov	r1, #0	; 0x0
        205ef0:	e1a0e00f 	mov	lr, pc
        205ef4:	e59df000 	ldr	pc, [sp]
        205ef8:	e28dd018 	add	sp, sp, #24	; 0x18
        205efc:	e1a0000d 	mov	r0, sp
        205f00:	eb61cb49 	bl	1a78c2c <TWriteChain::$Destroy(void)>
        205f04:	e28ddf97 	add	sp, sp, #604	; 0x25c
        205f08:	ea000001 	b	205f14 <TADSPConnection::CheckSendData(void)+0x2b8>
        205f0c:	e28400dc 	add	r0, r4, #220	; 0xdc
        205f10:	eb61e838 	bl	1a7fff8 <TMessageTimer::$Start(void)>
        205f14:	e28dd008 	add	sp, sp, #8	; 0x8
        205f18:	e1a00005 	mov	r0, r5
        205f1c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::UpdateConnection(TUMsgToken *, TAppleTalkMessage *)
 * Address: 00205f20
 */
TADSPConnection::UpdateConnection(TUMsgToken *, TAppleTalkMessage *) {
    /*
        205f20:	e1a0c00d 	mov	ip, sp
        205f24:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        205f28:	e24cb004 	sub	fp, ip, #4	; 0x4
        205f2c:	eb61c718 	bl	1a77b94 <TADSPConnection::$CheckSend(void)>
        205f30:	e3a00000 	mov	r0, #0	; 0x0
        205f34:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::NotifyListener(ADSPHeader *, TAddress *, ADSPOpenConnInfo *)
 * Address: 00205f38
 */
TADSPConnection::NotifyListener(ADSPHeader *, TAddress *, ADSPOpenConnInfo *) {
    /*
        205f38:	e3a00000 	mov	r0, #0	; 0x0
        205f3c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPConnection::ForwdReset(ADSPHeader *)
 * Address: 00205f40
 */
TADSPConnection::ForwdReset(ADSPHeader *) {
    /*
        205f40:	ea61fcd0 	b	1a85288 <TADSPConnection::$ProcessAck(ADSPHeader *)>
    */
}

/**
 * Symbol: TADSPConnection::OpenComplete(void)
 * Address: 00205f44
 */
TADSPConnection::OpenComplete(void) {
    /*
        205f44:	e1a0c00d 	mov	ip, sp
        205f48:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        205f4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        205f50:	e1a04000 	mov	r4, r0
        205f54:	e24dd030 	sub	sp, sp, #48	; 0x30
        205f58:	e1a0000d 	mov	r0, sp
        205f5c:	eb6778b5 	bl	1be4238 <TAEvent::$__ct(void)>
        205f60:	e59f0080 	ldr	r0, [pc, #80]	; 205fe8 <TADSPConnection::OpenComplete(void)+0xa4>	; fField80
        205f64:	e3a05000 	mov	r5, #0	; 0x0
        205f68:	e58d0000 	str	r0, [sp]
        205f6c:	e58d500c 	str	r5, [sp, #12]
        205f70:	e58d5008 	str	r5, [sp, #8]	; fField8
        205f74:	e28d001c 	add	r0, sp, #28	; 0x1c
        205f78:	e1a06000 	mov	r6, r0
        205f7c:	e3a01001 	mov	r1, #1	; 0x1
        205f80:	eb67b689 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        205f84:	e59f0060 	ldr	r0, [pc, #60]	; 205fec <TADSPConnection::OpenComplete(void)+0xa8>
        205f88:	e58d0004 	str	r0, [sp, #4]
        205f8c:	e3a00002 	mov	r0, #2	; 0x2
        205f90:	e2800b02 	add	r0, r0, #2048	; 0x800
        205f94:	e58d0010 	str	r0, [sp, #16]
        205f98:	e5940000 	ldr	r0, [r4]
        205f9c:	e58d000c 	str	r0, [sp, #12]
        205fa0:	e58d5008 	str	r5, [sp, #8]	; fField8
        205fa4:	e594016c 	ldr	r0, [r4, #364]	; fField364
        205fa8:	e58d0014 	str	r0, [sp, #20]
        205fac:	e5940170 	ldr	r0, [r4, #368]	; fField368
        205fb0:	e2841e16 	add	r1, r4, #352	; 0x160
        205fb4:	e58d0018 	str	r0, [sp, #24]
        205fb8:	e1a00006 	mov	r0, r6
        205fbc:	eb67b67b 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        205fc0:	e5940174 	ldr	r0, [r4, #372]	; fField372
        205fc4:	e5900050 	ldr	r0, [r0, #80]	; fField80
        205fc8:	e58d0028 	str	r0, [sp, #40]
        205fcc:	e58d502c 	str	r5, [sp, #44]
        205fd0:	e284000c 	add	r0, r4, #12	; 0xc
        205fd4:	e1a0100d 	mov	r1, sp
        205fd8:	e3a03000 	mov	r3, #0	; 0x0
        205fdc:	e3a02030 	mov	r2, #48	; 0x30
        205fe0:	eb674f41 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        205fe4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        205fe8:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        205fec:	61647370 	cmnvs	r4, r0, ror r3
    */
}

/**
 * Symbol: TADSPConnection::ForwdResetAck(ADSPHeader *)
 * Address: 00205ff0
 */
TADSPConnection::ForwdResetAck(ADSPHeader *) {
    /*
        205ff0:	ea61fca4 	b	1a85288 <TADSPConnection::$ProcessAck(ADSPHeader *)>
    */
}

/**
 * Symbol: TADSPConnection::Abort(long)
 * Address: 00205ff4
 */
TADSPConnection::Abort(long) {
    /*
        205ff4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPConnection::NotifyUser(void)
 * Address: 00205ff8
 */
TADSPConnection::NotifyUser(void) {
    /*
        205ff8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPConnection::PrepHeader(ADSPHeader *)
 * Address: 00205ffc
 */
TADSPConnection::PrepHeader(ADSPHeader *) {
    /*
        205ffc:	e1a0c00d 	mov	ip, sp
        206000:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        206004:	e24cb004 	sub	fp, ip, #4	; 0x4
        206008:	e1a04001 	mov	r4, r1
        20600c:	e590116c 	ldr	r1, [r0, #364]	; fField364
        206010:	e5942000 	ldr	r2, [r4]
        206014:	e1a02802 	mov	r2, r2, lsl #16
        206018:	e1a02822 	mov	r2, r2, lsr #16
        20601c:	e1822801 	orr	r2, r2, r1, lsl #16
        206020:	e5842000 	str	r2, [r4]
        206024:	e5901174 	ldr	r1, [r0, #372]	; fField372
        206028:	e5911050 	ldr	r1, [r1, #80]	; fField80
        20602c:	e1a03822 	mov	r3, r2, lsr #16
        206030:	e1a03803 	mov	r3, r3, lsl #16
        206034:	e1832821 	orr	r2, r3, r1, lsr #16
        206038:	e5842000 	str	r2, [r4]
        20603c:	e5942004 	ldr	r2, [r4, #4]
        206040:	e1a02802 	mov	r2, r2, lsl #16
        206044:	e1a02822 	mov	r2, r2, lsr #16
        206048:	e1822801 	orr	r2, r2, r1, lsl #16
        20604c:	e5842004 	str	r2, [r4, #4]
        206050:	e590117c 	ldr	r1, [r0, #380]	; fField380
        206054:	e591104c 	ldr	r1, [r1, #76]	; fField76
        206058:	e1a03822 	mov	r3, r2, lsr #16
        20605c:	e1a03803 	mov	r3, r3, lsl #16
        206060:	e1832821 	orr	r2, r3, r1, lsr #16
        206064:	e5842004 	str	r2, [r4, #4]
        206068:	e5942008 	ldr	r2, [r4, #8]	; fField8
        20606c:	e1a02802 	mov	r2, r2, lsl #16
        206070:	e1a02822 	mov	r2, r2, lsr #16
        206074:	e1821801 	orr	r1, r2, r1, lsl #16
        206078:	e5841008 	str	r1, [r4, #8]	; fField8
        20607c:	e590017c 	ldr	r0, [r0, #380]	; fField380
        206080:	eb61fc89 	bl	1a852ac <TADSPRecvBuffer::$RecvWdw(void)>
        206084:	e5941008 	ldr	r1, [r4, #8]	; fField8
        206088:	e1a01821 	mov	r1, r1, lsr #16
        20608c:	e1a01801 	mov	r1, r1, lsl #16
        206090:	e1a00800 	mov	r0, r0, lsl #16
        206094:	e1810820 	orr	r0, r1, r0, lsr #16
        206098:	e5a40008 	str	r0, [r4, #8]!	; fField8
        20609c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::ProcessAck(ADSPHeader *)
 * Address: 002060a0
 */
TADSPConnection::ProcessAck(ADSPHeader *) {
    /*
        2060a0:	e1a0c00d 	mov	ip, sp
        2060a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2060a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2060ac:	e1a04000 	mov	r4, r0
        2060b0:	e1a05001 	mov	r5, r1
        2060b4:	e5910004 	ldr	r0, [r1, #4]
        2060b8:	e1a00800 	mov	r0, r0, lsl #16
        2060bc:	e5911008 	ldr	r1, [r1, #8]	; fField8
        2060c0:	e1806821 	orr	r6, r0, r1, lsr #16
        2060c4:	e5940048 	ldr	r0, [r4, #72]	; fField72
        2060c8:	e3100301 	tst	r0, #67108864	; 0x4000000
        2060cc:	0a000017 	beq	206130 <TADSPConnection::ProcessAck(ADSPHeader *)+0x90>
        2060d0:	e5941038 	ldr	r1, [r4, #56]	; fField56
        2060d4:	e1510006 	cmp	r1, r6
        2060d8:	8a000014 	bhi	206130 <TADSPConnection::ProcessAck(ADSPHeader *)+0x90>
        2060dc:	e3c00301 	bic	r0, r0, #67108864	; 0x4000000
        2060e0:	e5840048 	str	r0, [r4, #72]	; fField72
        2060e4:	e3a00000 	mov	r0, #0	; 0x0
        2060e8:	e5c40024 	strb	r0, [r4, #36]	; fField36
        2060ec:	e28400a0 	add	r0, r4, #160	; 0xa0
        2060f0:	eb61e7c5 	bl	1a8000c <TMessageTimer::$Stop(void)>
        2060f4:	e5940048 	ldr	r0, [r4, #72]	; fField72
        2060f8:	e3100202 	tst	r0, #536870912	; 0x20000000
        2060fc:	13c00202 	bicne	r0, r0, #536870912	; 0x20000000
        206100:	1a000009 	bne	20612c <TADSPConnection::ProcessAck(ADSPHeader *)+0x8c>
        206104:	e1a00004 	mov	r0, r4
        206108:	eb620088 	bl	1a86330 <TADSPConnection::$UpdateRetryIntervalAfterAck(void)>
        20610c:	e5940048 	ldr	r0, [r4, #72]	; fField72
        206110:	e3100101 	tst	r0, #1073741824	; 0x40000000
        206114:	1a000003 	bne	206128 <TADSPConnection::ProcessAck(ADSPHeader *)+0x88>
        206118:	e5d41025 	ldrb	r1, [r4, #37]	; fField37
        20611c:	e3510032 	cmp	r1, #50	; 0x32
        206120:	b2811001 	addlt	r1, r1, #1	; 0x1
        206124:	b5c41025 	strltb	r1, [r4, #37]	; fField37
        206128:	e3c00101 	bic	r0, r0, #1073741824	; 0x40000000
        20612c:	e5840048 	str	r0, [r4, #72]	; fField72
        206130:	e5950008 	ldr	r0, [r5, #8]	; fField8
        206134:	e1a02800 	mov	r2, r0, lsl #16
        206138:	e1a02822 	mov	r2, r2, lsr #16
        20613c:	e1a01006 	mov	r1, r6
        206140:	e5940174 	ldr	r0, [r4, #372]	; fField372
        206144:	eb61ebe0 	bl	1a810cc <TADSPSendBuffer::$Ack(unsigned long, unsigned long)>
        206148:	e5b5100c 	ldr	r1, [r5, #12]!
        20614c:	e3110101 	tst	r1, #1073741824	; 0x40000000
        206150:	0a000002 	beq	206160 <TADSPConnection::ProcessAck(ADSPHeader *)+0xc0>
        206154:	e5941048 	ldr	r1, [r4, #72]	; fField72
        206158:	e3811209 	orr	r1, r1, #-1879048192	; 0x90000000
        20615c:	e5841048 	str	r1, [r4, #72]	; fField72
        206160:	e3700002 	cmn	r0, #2	; 0x2
        206164:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        206168:	e5940048 	ldr	r0, [r4, #72]	; fField72
        20616c:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
        206170:	e3800502 	orr	r0, r0, #8388608	; 0x800000
        206174:	e5a40048 	str	r0, [r4, #72]!	; fField72
        206178:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::UpdateRetryIntervalAfterAck(void)
 * Address: 0020617c
 */
TADSPConnection::UpdateRetryIntervalAfterAck(void) {
    /*
        20617c:	e3a01005 	mov	r1, #5	; 0x5
        206180:	e5a0109c 	str	r1, [r0, #156]!	; fField156
        206184:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPConnection::MatchFilterAddress(TAddress *)
 * Address: 00206188
 */
TADSPConnection::MatchFilterAddress(TAddress *) {
    /*
        206188:	e2800f55 	add	r0, r0, #340	; 0x154
        20618c:	e5d0200a 	ldrb	r2, [r0, #10]	; fField10
        206190:	e3320000 	teq	r2, #0	; 0x0
        206194:	11a03002 	movne	r3, r2
        206198:	15d1200a 	ldrneb	r2, [r1, #10]	; fField10
        20619c:	11330002 	teqne	r3, r2
        2061a0:	1a00000c 	bne	2061d8 <TADSPConnection::MatchFilterAddress(TAddress *)+0x50>
        2061a4:	e5d0200b 	ldrb	r2, [r0, #11]	; fField11
        2061a8:	e3320000 	teq	r2, #0	; 0x0
        2061ac:	15d1300b 	ldrneb	r3, [r1, #11]	; fField11
        2061b0:	11320003 	teqne	r2, r3
        2061b4:	1a000007 	bne	2061d8 <TADSPConnection::MatchFilterAddress(TAddress *)+0x50>
        2061b8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2061bc:	e1b00820 	movs	r0, r0, lsr #16
        2061c0:	15911008 	ldrne	r1, [r1, #8]	; fField8
        2061c4:	11a01821 	movne	r1, r1, lsr #16
        2061c8:	13310000 	teqne	r1, #0	; 0x0
        2061cc:	11300001 	teqne	r0, r1
        2061d0:	03a00001 	moveq	r0, #1	; 0x1
        2061d4:	01a0f00e 	moveq	pc, lr
        2061d8:	e3a00000 	mov	r0, #0	; 0x0
        2061dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPConnection::MatchAddress(TAddress *)
 * Address: 002061e0
 */
TADSPConnection::MatchAddress(TAddress *) {
    /*
        2061e0:	e2800e16 	add	r0, r0, #352	; 0x160
        2061e4:	e5d0200a 	ldrb	r2, [r0, #10]	; fField10
        2061e8:	e5d1300a 	ldrb	r3, [r1, #10]	; fField10
        2061ec:	e1320003 	teq	r2, r3
        2061f0:	05d0200b 	ldreqb	r2, [r0, #11]	; fField11
        2061f4:	05d1300b 	ldreqb	r3, [r1, #11]	; fField11
        2061f8:	01320003 	teqeq	r2, r3
        2061fc:	1a000007 	bne	206220 <TADSPConnection::MatchAddress(TAddress *)+0x40>
        206200:	e5900008 	ldr	r0, [r0, #8]	; fField8
        206204:	e1b00820 	movs	r0, r0, lsr #16
        206208:	15911008 	ldrne	r1, [r1, #8]	; fField8
        20620c:	11a01821 	movne	r1, r1, lsr #16
        206210:	13310000 	teqne	r1, #0	; 0x0
        206214:	11300001 	teqne	r0, r1
        206218:	03a00001 	moveq	r0, #1	; 0x1
        20621c:	01a0f00e 	moveq	pc, lr
        206220:	e3a00000 	mov	r0, #0	; 0x0
        206224:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPConnection::DoClose(long)
 * Address: 00206228
 */
TADSPConnection::DoClose(long) {
    /*
        206228:	e1a0c00d 	mov	ip, sp
        20622c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        206230:	e24cb004 	sub	fp, ip, #4	; 0x4
        206234:	e1a04000 	mov	r4, r0
        206238:	e1a05001 	mov	r5, r1
        20623c:	e3a08000 	mov	r8, #0	; 0x0
        206240:	e59f7050 	ldr	r7, [pc, #50]	; 206298 <TADSPConnection::DoClose(long)+0x70>
        206244:	e59f6050 	ldr	r6, [pc, #50]	; 20629c <TADSPConnection::DoClose(long)+0x74>
        206248:	e3710002 	cmn	r1, #2	; 0x2
        20624c:	1a000013 	bne	2062a0 <TADSPConnection::DoClose(long)+0x78>
        206250:	eb6735df 	bl	1bd39d4 <$GetGlobals>
        206254:	eb61db06 	bl	1a7ce74 <TAppleTalkWorld::$NewMessage(void)>
        206258:	e2801080 	add	r1, r0, #128	; 0x80
        20625c:	e3a02001 	mov	r2, #1	; 0x1
        206260:	e2822b02 	add	r2, r2, #2048	; 0x800
        206264:	e5812010 	str	r2, [r1, #16]
        206268:	e9810140 	stmib	r1, {r6, r8}
        20626c:	e5817000 	str	r7, [r1]
        206270:	e5942000 	ldr	r2, [r4]
        206274:	e581200c 	str	r2, [r1, #12]
        206278:	e594216c 	ldr	r2, [r4, #364]	; fField364
        20627c:	e3a03000 	mov	r3, #0	; 0x0
        206280:	e5a12014 	str	r2, [r1, #20]!
        206284:	e92d0008 	stmdb	sp!, {r3}
        206288:	e2841004 	add	r1, r4, #4	; 0x4
        20628c:	e3a02018 	mov	r2, #24	; 0x18
        206290:	eb61e336 	bl	1a7ef70 <TATAsyncMsg::$Send(TUPort *, unsigned long, unsigned long, unsigned long)>
        206294:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        206298:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        20629c:	61647370 	cmnvs	r4, r0, ror r3
        2062a0:	e24dd030 	sub	sp, sp, #48	; 0x30
        2062a4:	e1a0000d 	mov	r0, sp
        2062a8:	eb6777e2 	bl	1be4238 <TAEvent::$__ct(void)>
        2062ac:	e58d7000 	str	r7, [sp]
        2062b0:	e58d800c 	str	r8, [sp, #12]
        2062b4:	e58d8008 	str	r8, [sp, #8]	; fField8
        2062b8:	e28d001c 	add	r0, sp, #28	; 0x1c
        2062bc:	e3a01001 	mov	r1, #1	; 0x1
        2062c0:	eb67b5b9 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        2062c4:	e3a00002 	mov	r0, #2	; 0x2
        2062c8:	e2800b02 	add	r0, r0, #2048	; 0x800
        2062cc:	e58d0010 	str	r0, [sp, #16]
        2062d0:	e58d5008 	str	r5, [sp, #8]	; fField8
        2062d4:	e58d6004 	str	r6, [sp, #4]
        2062d8:	e5940000 	ldr	r0, [r4]
        2062dc:	e58d000c 	str	r0, [sp, #12]
        2062e0:	e284000c 	add	r0, r4, #12	; 0xc
        2062e4:	e1a03005 	mov	r3, r5
        2062e8:	e1a0100d 	mov	r1, sp
        2062ec:	e3a02030 	mov	r2, #48	; 0x30
        2062f0:	eb674e7d 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        2062f4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::DoCloseAdvice(ADSPHeader *)
 * Address: 002062f8
 */
TADSPConnection::DoCloseAdvice(ADSPHeader *) {
    /*
        2062f8:	e1a0c00d 	mov	ip, sp
        2062fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        206300:	e24cb004 	sub	fp, ip, #4	; 0x4
        206304:	e1a04000 	mov	r4, r0
        206308:	eb61fbde 	bl	1a85288 <TADSPConnection::$ProcessAck(ADSPHeader *)>
        20630c:	e5d4501d 	ldrb	r5, [r4, #29]	; fField29
        206310:	e3a00005 	mov	r0, #5	; 0x5
        206314:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        206318:	e1a00004 	mov	r0, r4
        20631c:	e3e01001 	mvn	r1, #1	; 0x1
        206320:	eb61b9b9 	bl	1a74a0c <TADSPConnection::$Abort(long)>
        206324:	e1a00004 	mov	r0, r4
        206328:	eb61ded5 	bl	1a7de84 <TADSPConnection::$NotifyUser(void)>
        20632c:	e3350004 	teq	r5, #4	; 0x4
        206330:	01a00004 	moveq	r0, r4
        206334:	03e01001 	mvneq	r1, #1	; 0x1
        206338:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        20633c:	0a61ca43 	beq	1a78c50 <TADSPConnection::$DoClose(long)>
        206340:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::ResetTrans(ADSPHeader *)
 * Address: 00206344
 */
TADSPConnection::ResetTrans(ADSPHeader *) {
    /*
        206344:	e1a0c00d 	mov	ip, sp
        206348:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20634c:	e24cb004 	sub	fp, ip, #4	; 0x4
        206350:	e1a04000 	mov	r4, r0
        206354:	e3310000 	teq	r1, #0	; 0x0
        206358:	11a00004 	movne	r0, r4
        20635c:	1b61fbc9 	blne	1a85288 <TADSPConnection::$ProcessAck(ADSPHeader *)>
        206360:	e28400a0 	add	r0, r4, #160	; 0xa0
        206364:	eb61e728 	bl	1a8000c <TMessageTimer::$Stop(void)>
        206368:	e5940174 	ldr	r0, [r4, #372]	; fField372
        20636c:	eb61fbdb 	bl	1a852e0 <TADSPSendBuffer::$Retransmit(void)>
        206370:	e3a00000 	mov	r0, #0	; 0x0
        206374:	e5c40024 	strb	r0, [r4, #36]	; fField36
        206378:	e5940048 	ldr	r0, [r4, #72]	; fField72
        20637c:	e3c00301 	bic	r0, r0, #67108864	; 0x4000000
        206380:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
        206384:	e5a40048 	str	r0, [r4, #72]!	; fField72
        206388:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPConnection::ExecuteState(State *, TAddress *, ADSPHeader *, ADSPOpenConnInfo *)
 * Address: 0020638c
 */
TADSPConnection::ExecuteState(State *, TAddress *, ADSPHeader *, ADSPOpenConnInfo *) {
    /*
        20638c:	e1a0c00d 	mov	ip, sp
        206390:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        206394:	e24cb004 	sub	fp, ip, #4	; 0x4
        206398:	e1a04000 	mov	r4, r0
        20639c:	e1a05001 	mov	r5, r1
        2063a0:	e3a06000 	mov	r6, #0	; 0x0
        2063a4:	e5930004 	ldr	r0, [r3, #4]
        2063a8:	e1a01800 	mov	r1, r0, lsl #16
        2063ac:	e5930008 	ldr	r0, [r3, #8]	; fField8
        2063b0:	e1811820 	orr	r1, r1, r0, lsr #16
        2063b4:	e5d50003 	ldrb	r0, [r5, #3]
        2063b8:	e5c4001d 	strb	r0, [r4, #29]	; fField29
        2063bc:	e5d50004 	ldrb	r0, [r5, #4]
        2063c0:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        2063c4:	e5d50001 	ldrb	r0, [r5, #1]
        2063c8:	e3100002 	tst	r0, #2	; 0x2
        2063cc:	0a00000d 	beq	206408 <TADSPConnection::ExecuteState(State *, TAddress *, ADSPHeader *, ADSPOpenConnInfo *)+0x7c>
        2063d0:	e5940174 	ldr	r0, [r4, #372]	; fField372
        2063d4:	e593c008 	ldr	ip, [r3, #8]	; fField8
        2063d8:	e1a0c80c 	mov	ip, ip, lsl #16
        2063dc:	e5801054 	str	r1, [r0, #84]	; fField84
        2063e0:	e580104c 	str	r1, [r0, #76]	; fField76
        2063e4:	e5801050 	str	r1, [r0, #80]	; fField80
        2063e8:	e081182c 	add	r1, r1, ip, lsr #16
        2063ec:	e5a01058 	str	r1, [r0, #88]!	; fField88
        2063f0:	e5930000 	ldr	r0, [r3]
        2063f4:	e1a00820 	mov	r0, r0, lsr #16
        2063f8:	e5840170 	str	r0, [r4, #368]	; fField368
        2063fc:	e2840e16 	add	r0, r4, #352	; 0x160
        206400:	e1a01002 	mov	r1, r2
        206404:	eb67b569 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        206408:	e5d50001 	ldrb	r0, [r5, #1]
        20640c:	e3100010 	tst	r0, #16	; 0x10
        206410:	11a00004 	movne	r0, r4
        206414:	13e01002 	mvnne	r1, #2	; 0x2
        206418:	1b61ca0c 	blne	1a78c50 <TADSPConnection::$DoClose(long)>
        20641c:	e5d50001 	ldrb	r0, [r5, #1]
        206420:	e3100004 	tst	r0, #4	; 0x4
        206424:	11a00004 	movne	r0, r4
        206428:	13a01000 	movne	r1, #0	; 0x0
        20642c:	1b61fbaa 	blne	1a852dc <TADSPConnection::$ResetTrans(ADSPHeader *)>
        206430:	e5d50002 	ldrb	r0, [r5, #2]
        206434:	e3300000 	teq	r0, #0	; 0x0
        206438:	0a000005 	beq	206454 <TADSPConnection::ExecuteState(State *, TAddress *, ADSPHeader *, ADSPOpenConnInfo *)+0xc8>
        20643c:	e5941020 	ldr	r1, [r4, #32]	; fField32
        206440:	e1810000 	orr	r0, r1, r0
        206444:	e5840020 	str	r0, [r4, #32]	; fField32
        206448:	e5940048 	ldr	r0, [r4, #72]	; fField72
        20644c:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
        206450:	e5840048 	str	r0, [r4, #72]	; fField72
        206454:	e5d50001 	ldrb	r0, [r5, #1]
        206458:	e3100001 	tst	r0, #1	; 0x1
        20645c:	0a00000a 	beq	20648c <TADSPConnection::ExecuteState(State *, TAddress *, ADSPHeader *, ADSPOpenConnInfo *)+0x100>
        206460:	e5d4001d 	ldrb	r0, [r4, #29]	; fField29
        206464:	e284505c 	add	r5, r4, #92	; 0x5c
        206468:	e3300004 	teq	r0, #4	; 0x4
        20646c:	01a00005 	moveq	r0, r5
        206470:	0b61e6e5 	bleq	1a8000c <TMessageTimer::$Stop(void)>
        206474:	e1a00004 	mov	r0, r4
        206478:	eb61de85 	bl	1a7de94 <TADSPConnection::$OpenComplete(void)>
        20647c:	e5d4001d 	ldrb	r0, [r4, #29]	; fField29
        206480:	e3300004 	teq	r0, #4	; 0x4
        206484:	01a00005 	moveq	r0, r5
        206488:	0b61e2ae 	bleq	1a7ef48 <TMessageTimer::$Reset(void)>
        20648c:	e1a00006 	mov	r0, r6
        206490:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

