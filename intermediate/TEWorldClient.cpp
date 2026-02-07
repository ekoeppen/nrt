#include "include/TEWorldClient.h"

/**
 * Symbol: TEWorldClient::__ct(void)
 * Address: 002d5034
 */
TEWorldClient::TEWorldClient(void) {
    /*
        2d5034:	e1a0c00d 	mov	ip, sp
        2d5038:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d503c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d5040:	e1b04000 	movs	r4, r0
        2d5044:	1a000005 	bne	2d5060 <TEWorldClient::__ct(void)+0x2c>
        2d5048:	e3a00fc2 	mov	r0, #776	; 0x308
        2d504c:	eb63e5b9 	bl	1bce738 <$__nw(unsigned int)>
        2d5050:	e1b04000 	movs	r4, r0
        2d5054:	1a000001 	bne	2d5060 <TEWorldClient::__ct(void)+0x2c>
        2d5058:	e1a00004 	mov	r0, r4
        2d505c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2d5060:	e1a00004 	mov	r0, r4
        2d5064:	eb5f9f7b 	bl	1abce58 <TNewScriptEndpointClient::$__ct(void)>
        2d5068:	e2840f96 	add	r0, r4, #600	; 0x258
        2d506c:	e1a07000 	mov	r7, r0
        2d5070:	eb643c63 	bl	1be4204 <CBufferSegment::$__ct(void)>
        2d5074:	e2840d0a 	add	r0, r4, #640	; 0x280
        2d5078:	e1a06000 	mov	r6, r0
        2d507c:	eb643c60 	bl	1be4204 <CBufferSegment::$__ct(void)>
        2d5080:	e3a00002 	mov	r0, #2	; 0x2
        2d5084:	eb63b430 	bl	1bc214c <$AllocateRefHandle(long)>
        2d5088:	e3a05000 	mov	r5, #0	; 0x0
        2d508c:	e58402b0 	str	r0, [r4, #688]	; fField688
        2d5090:	e5a05004 	str	r5, [r0, #4]!	; fField4
        2d5094:	e59f007c 	ldr	r0, [pc, #7c]	; 2d5118 <TEWorldClient::__ct(void)+0xe4>
        2d5098:	e5840000 	str	r0, [r4]
        2d509c:	e58452a8 	str	r5, [r4, #680]	; fField680
        2d50a0:	e5c452ac 	strb	r5, [r4, #684]	; fField684
        2d50a4:	e3e03000 	mvn	r3, #0	; 0x0
        2d50a8:	e3a02000 	mov	r2, #0	; 0x0
        2d50ac:	e92d000c 	stmdb	sp!, {r2, r3}
        2d50b0:	e28410d4 	add	r1, r4, #212	; 0xd4
        2d50b4:	e1a00007 	mov	r0, r7
        2d50b8:	e3a03000 	mov	r3, #0	; 0x0
        2d50bc:	e3a02080 	mov	r2, #128	; 0x80
        2d50c0:	eb6450f9 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        2d50c4:	e28dd008 	add	sp, sp, #8	; 0x8
        2d50c8:	e5c45154 	strb	r5, [r4, #340]
        2d50cc:	e3e03000 	mvn	r3, #0	; 0x0
        2d50d0:	e3a02000 	mov	r2, #0	; 0x0
        2d50d4:	e92d000c 	stmdb	sp!, {r2, r3}
        2d50d8:	e2841f75 	add	r1, r4, #468	; 0x1d4
        2d50dc:	e1a00006 	mov	r0, r6
        2d50e0:	e3a03000 	mov	r3, #0	; 0x0
        2d50e4:	e3a02080 	mov	r2, #128	; 0x80
        2d50e8:	eb6450ef 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        2d50ec:	e28dd008 	add	sp, sp, #8	; 0x8
        2d50f0:	e5c45254 	strb	r5, [r4, #596]
        2d50f4:	e3a00000 	mov	r0, #0	; 0x0
        2d50f8:	e0841100 	add	r1, r4, r0, lsl #2
        2d50fc:	e2800001 	add	r0, r0, #1	; 0x1
        2d5100:	e3500002 	cmp	r0, #2	; 0x2
        2d5104:	e5a152ec 	str	r5, [r1, #748]!
        2d5108:	3afffffa 	bcc	2d50f8 <TEWorldClient::__ct(void)+0xc4>
        2d510c:	e1a00004 	mov	r0, r4
        2d5110:	eb5fa796 	bl	1abef70 <TEWorldClient::$ClearAtomizer(void)>
        2d5114:	eaffffcf 	b	2d5058 <TEWorldClient::__ct(void)+0x24>
        2d5118:	0001cab0 	streqh	ip, [r1], -r0
    */
}

/**
 * Symbol: TEWorldClient::__dt(void)
 * Address: 002d511c
 */
TEWorldClient::~TEWorldClient(void) {
    /*
        2d511c:	e1a0c00d 	mov	ip, sp
        2d5120:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d5124:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d5128:	e1a04000 	mov	r4, r0
        2d512c:	e1a05001 	mov	r5, r1
        2d5130:	e59f0048 	ldr	r0, [pc, #48]	; 2d5180 <TEWorldClient::__dt(void)+0x64>
        2d5134:	e5840000 	str	r0, [r4]
        2d5138:	e1a00004 	mov	r0, r4
        2d513c:	eb5fa78b 	bl	1abef70 <TEWorldClient::$ClearAtomizer(void)>
        2d5140:	e59402b0 	ldr	r0, [r4, #688]	; fField688
        2d5144:	eb63b81c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5148:	e2840d0a 	add	r0, r4, #640	; 0x280
        2d514c:	e3a01000 	mov	r1, #0	; 0x0
        2d5150:	eb643c45 	bl	1be426c <CBufferSegment::$__dt(void)>
        2d5154:	e2840f96 	add	r0, r4, #600	; 0x258
        2d5158:	e3a01000 	mov	r1, #0	; 0x0
        2d515c:	eb643c42 	bl	1be426c <CBufferSegment::$__dt(void)>
        2d5160:	e1a00004 	mov	r0, r4
        2d5164:	e3a01000 	mov	r1, #0	; 0x0
        2d5168:	eb5f9f41 	bl	1abce74 <TNewScriptEndpointClient::$__dt(void)>
        2d516c:	e3150001 	tst	r5, #1	; 0x1
        2d5170:	11a00004 	movne	r0, r4
        2d5174:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2d5178:	1a63e158 	bne	1bcd6e0 <$__dl(void *)>
        2d517c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2d5180:	0001cab0 	streqh	ip, [r1], -r0
    */
}

/**
 * Symbol: TEWorldClient::RcvComplete(TEndpointEvent *)
 * Address: 002d5184
 */
TEWorldClient::RcvComplete(TEndpointEvent *) {
    /*
        2d5184:	e1a0c00d 	mov	ip, sp
        2d5188:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d518c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d5190:	e1a04000 	mov	r4, r0
        2d5194:	e5d002ac 	ldrb	r0, [r0, #684]	; fField684
        2d5198:	e3300000 	teq	r0, #0	; 0x0
        2d519c:	1a000020 	bne	2d5224 <TEWorldClient::RcvComplete(TEndpointEvent *)+0xa0>
        2d51a0:	e1a05001 	mov	r5, r1
        2d51a4:	e3a06000 	mov	r6, #0	; 0x0
        2d51a8:	e5b10008 	ldr	r0, [r1, #8]!
        2d51ac:	e3300000 	teq	r0, #0	; 0x0
        2d51b0:	059402a8 	ldreq	r0, [r4, #680]	; fField680
        2d51b4:	03300000 	teqeq	r0, #0	; 0x0
        2d51b8:	1a00001c 	bne	2d5230 <TEWorldClient::RcvComplete(TEndpointEvent *)+0xac>
        2d51bc:	e2843d0a 	add	r3, r4, #640	; 0x280
        2d51c0:	e5951028 	ldr	r1, [r5, #40]
        2d51c4:	e2611080 	rsb	r1, r1, #128	; 0x80
        2d51c8:	e1a00003 	mov	r0, r3
        2d51cc:	e3a02001 	mov	r2, #1	; 0x1
        2d51d0:	e5933000 	ldr	r3, [r3]
        2d51d4:	e1a0e00f 	mov	lr, pc
        2d51d8:	e283f034 	add	pc, r3, #52	; 0x34
        2d51dc:	e5950028 	ldr	r0, [r5, #40]
        2d51e0:	e0800004 	add	r0, r0, r4
        2d51e4:	e5c061d4 	strb	r6, [r0, #468]
        2d51e8:	e5b50028 	ldr	r0, [r5, #40]!
        2d51ec:	e3500002 	cmp	r0, #2	; 0x2
        2d51f0:	ba000003 	blt	2d5204 <TEWorldClient::RcvComplete(TEndpointEvent *)+0x80>
        2d51f4:	e2402002 	sub	r2, r0, #2	; 0x2
        2d51f8:	e2841f75 	add	r1, r4, #468	; 0x1d4
        2d51fc:	e1a00004 	mov	r0, r4
        2d5200:	eb5fab65 	bl	1abff9c <TEWorldClient::$DispatchPacket(unsigned char *, unsigned long)>
        2d5204:	e59f1080 	ldr	r1, [pc, #80]	; 2d528c <TEWorldClient::RcvComplete(TEndpointEvent *)+0x108>
        2d5208:	e5911000 	ldr	r1, [r1]
        2d520c:	e5911000 	ldr	r1, [r1]
        2d5210:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2d5214:	e5900000 	ldr	r0, [r0]
        2d5218:	eb63bc10 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d521c:	e3300002 	teq	r0, #2	; 0x2
        2d5220:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2d5224:	e1a00004 	mov	r0, r4
        2d5228:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2d522c:	ea5fb3cd 	b	1ac2168 <TEWorldClient::$QueueRcv(void)>
        2d5230:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d5234:	e3a00001 	mov	r0, #1	; 0x1
        2d5238:	eb5f1ad7 	bl	1a9bd9c <$MakeArray(long)>
        2d523c:	eb63b3c2 	bl	1bc214c <$AllocateRefHandle(long)>
        2d5240:	e58d0000 	str	r0, [sp]
        2d5244:	e5b50008 	ldr	r0, [r5, #8]!
        2d5248:	e1a00100 	mov	r0, r0, lsl #2
        2d524c:	eb63b3be 	bl	1bc214c <$AllocateRefHandle(long)>
        2d5250:	e1a05000 	mov	r5, r0
        2d5254:	e1a01006 	mov	r1, r6
        2d5258:	e5902000 	ldr	r2, [r0]
        2d525c:	e59d0000 	ldr	r0, [sp]
        2d5260:	e5900000 	ldr	r0, [r0]
        2d5264:	eb63c43b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d5268:	e1a00005 	mov	r0, r5
        2d526c:	eb63b7d2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5270:	e1a0200d 	mov	r2, sp
        2d5274:	e59f1014 	ldr	r1, [pc, #14]	; 2d5290 <TEWorldClient::RcvComplete(TEndpointEvent *)+0x10c>
        2d5278:	e1a00004 	mov	r0, r4
        2d527c:	eb5fb3be 	bl	1ac217c <TEWorldClient::$SendMessage(RefVar const &, RefVar const &)>
        2d5280:	e59d0000 	ldr	r0, [sp]
        2d5284:	eb63b7cc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5288:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2d528c:	006825a8 	rsbeq	r2, r8, r8, lsr #11
        2d5290:	00683070 	rsbeq	r3, r8, r0, ror r0
    */
}

/**
 * Symbol: TEWorldClient::SendMessage(RefVar const &, RefVar const &)
 * Address: 002d5294
 */
TEWorldClient::SendMessage(RefVar const &, RefVar const &) {
    /*
        2d5294:	e1a0c00d 	mov	ip, sp
        2d5298:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d529c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d52a0:	e1a05000 	mov	r5, r0
        2d52a4:	e1a04001 	mov	r4, r1
        2d52a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d52ac:	e5920000 	ldr	r0, [r2]
        2d52b0:	e5900000 	ldr	r0, [r0]
        2d52b4:	eb63b3a4 	bl	1bc214c <$AllocateRefHandle(long)>
        2d52b8:	e58d0000 	str	r0, [sp]
        2d52bc:	e5900000 	ldr	r0, [r0]
        2d52c0:	e3300002 	teq	r0, #2	; 0x2
        2d52c4:	1a000003 	bne	2d52d8 <TEWorldClient::SendMessage(RefVar const &, RefVar const &)+0x44>
        2d52c8:	e3a00000 	mov	r0, #0	; 0x0
        2d52cc:	eb5f1ab2 	bl	1a9bd9c <$MakeArray(long)>
        2d52d0:	e59d1000 	ldr	r1, [sp]
        2d52d4:	e5810000 	str	r0, [r1]
        2d52d8:	e3a00000 	mov	r0, #0	; 0x0
        2d52dc:	e52d006c 	str	r0, [sp, -#108]!
        2d52e0:	e28d0008 	add	r0, sp, #8	; 0x8
        2d52e4:	eb6375a2 	bl	1bb2974 <$setjmp>
        2d52e8:	e3300000 	teq	r0, #0	; 0x0
        2d52ec:	1a000011 	bne	2d5338 <TEWorldClient::SendMessage(RefVar const &, RefVar const &)+0xa4>
        2d52f0:	e1a0000d 	mov	r0, sp
        2d52f4:	eb642b60 	bl	1be007c <$AddExceptionHandler>
        2d52f8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d52fc:	e5950018 	ldr	r0, [r5, #24]	; fField24
        2d5300:	e5900000 	ldr	r0, [r0]
        2d5304:	eb63b390 	bl	1bc214c <$AllocateRefHandle(long)>
        2d5308:	e58d0000 	str	r0, [sp]
        2d530c:	e28d3004 	add	r3, sp, #4	; 0x4
        2d5310:	e28d2074 	add	r2, sp, #116	; 0x74
        2d5314:	e1a01004 	mov	r1, r4
        2d5318:	e1a0000d 	mov	r0, sp
        2d531c:	eb63b7ad 	bl	1bc31d8 <$DoMessageIfDefined__FRC6RefVarN21Pl>
        2d5320:	eb63b389 	bl	1bc214c <$AllocateRefHandle(long)>
        2d5324:	eb63b7a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5328:	e59d0000 	ldr	r0, [sp]
        2d532c:	eb63b7a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5330:	e28dd008 	add	sp, sp, #8	; 0x8
        2d5334:	ea000006 	b	2d5354 <TEWorldClient::SendMessage(RefVar const &, RefVar const &)+0xc0>
        2d5338:	e59d0060 	ldr	r0, [sp, #96]
        2d533c:	e59f1024 	ldr	r1, [pc, #24]	; 2d5368 <TEWorldClient::SendMessage(RefVar const &, RefVar const &)+0xd4>	; fField24
        2d5340:	e5911000 	ldr	r1, [r1]
        2d5344:	eb643792 	bl	1be3194 <$Subexception>
        2d5348:	e3300000 	teq	r0, #0	; 0x0
        2d534c:	01a0000d 	moveq	r0, sp
        2d5350:	0b64337f 	bleq	1be2154 <$NextHandler>
        2d5354:	e1a0000d 	mov	r0, sp
        2d5358:	eb642f56 	bl	1be10b8 <$ExitHandler>
        2d535c:	e5bd006c 	ldr	r0, [sp, #108]!
        2d5360:	eb63b795 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5364:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2d5368:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TEWorldClient::UnEscape(unsigned char *, unsigned long *)
 * Address: 002d536c
 */
TEWorldClient::UnEscape(unsigned char *, unsigned long *) {
    /*
        2d536c:	e92d4000 	stmdb	sp!, {lr}
        2d5370:	e1a00001 	mov	r0, r1
        2d5374:	e592c000 	ldr	ip, [r2]
        2d5378:	e24c3001 	sub	r3, ip, #1	; 0x1
        2d537c:	e33c0000 	teq	ip, #0	; 0x0
        2d5380:	0a00000b 	beq	2d53b4 <TEWorldClient::UnEscape(unsigned char *, unsigned long *)+0x48>
        2d5384:	e5d1e000 	ldrb	lr, [r1]
        2d5388:	e33e005d 	teq	lr, #93	; 0x5d
        2d538c:	1a000003 	bne	2d53a0 <TEWorldClient::UnEscape(unsigned char *, unsigned long *)+0x34>
        2d5390:	e2433001 	sub	r3, r3, #1	; 0x1
        2d5394:	e24cc001 	sub	ip, ip, #1	; 0x1
        2d5398:	e5f1e001 	ldrb	lr, [r1, #1]!	; fField1
        2d539c:	e22ee055 	eor	lr, lr, #85	; 0x55
        2d53a0:	e4c0e001 	strb	lr, [r0], #1	; fField1
        2d53a4:	e2811001 	add	r1, r1, #1	; 0x1
        2d53a8:	e1b0e003 	movs	lr, r3
        2d53ac:	e2433001 	sub	r3, r3, #1	; 0x1
        2d53b0:	1afffff3 	bne	2d5384 <TEWorldClient::UnEscape(unsigned char *, unsigned long *)+0x18>
        2d53b4:	e582c000 	str	ip, [r2]
        2d53b8:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TEWorldClient::GetMaxUploadLength(unsigned char *, unsigned long)
 * Address: 002d53bc
 */
TEWorldClient::GetMaxUploadLength(unsigned char *, unsigned long) {
    /*
        2d53bc:	e92d4000 	stmdb	sp!, {lr}
        2d53c0:	e3a03000 	mov	r3, #0	; 0x0
        2d53c4:	e3a00000 	mov	r0, #0	; 0x0
        2d53c8:	e3a0c075 	mov	ip, #117	; 0x75
        2d53cc:	ea00000d 	b	2d5408 <TEWorldClient::GetMaxUploadLength(unsigned char *, unsigned long)+0x4c>
        2d53d0:	e5d1e000 	ldrb	lr, [r1]
        2d53d4:	e33e000d 	teq	lr, #13	; 0xd
        2d53d8:	133e005b 	teqne	lr, #91	; 0x5b
        2d53dc:	133e005d 	teqne	lr, #93	; 0x5d
        2d53e0:	133e008d 	teqne	lr, #141	; 0x8d
        2d53e4:	1a000003 	bne	2d53f8 <TEWorldClient::GetMaxUploadLength(unsigned char *, unsigned long)+0x3c>
        2d53e8:	e283e002 	add	lr, r3, #2	; 0x2
        2d53ec:	e15e000c 	cmp	lr, ip
        2d53f0:	88bd8000 	ldmhiia	sp!, {pc}
        2d53f4:	e2833001 	add	r3, r3, #1	; 0x1
        2d53f8:	e2811001 	add	r1, r1, #1	; 0x1
        2d53fc:	e2422001 	sub	r2, r2, #1	; 0x1
        2d5400:	e2800001 	add	r0, r0, #1	; 0x1
        2d5404:	e2833001 	add	r3, r3, #1	; 0x1
        2d5408:	e3320000 	teq	r2, #0	; 0x0
        2d540c:	08bd8000 	ldmeqia	sp!, {pc}
        2d5410:	e153000c 	cmp	r3, ip
        2d5414:	3affffed 	bcc	2d53d0 <TEWorldClient::GetMaxUploadLength(unsigned char *, unsigned long)+0x14>
        2d5418:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TEWorldClient::Escape(unsigned char *, unsigned long *)
 * Address: 002d541c
 */
TEWorldClient::Escape(unsigned char *, unsigned long *) {
    /*
        2d541c:	e92d4010 	stmdb	sp!, {r4, lr}
        2d5420:	e5920000 	ldr	r0, [r2]
        2d5424:	e1b0c000 	movs	ip, r0
        2d5428:	e2403001 	sub	r3, r0, #1	; 0x1
        2d542c:	0a000016 	beq	2d548c <TEWorldClient::Escape(unsigned char *, unsigned long *)+0x70>
        2d5430:	e3a0e05d 	mov	lr, #93	; 0x5d
        2d5434:	e5d10000 	ldrb	r0, [r1]
        2d5438:	e330000d 	teq	r0, #13	; 0xd
        2d543c:	1330005b 	teqne	r0, #91	; 0x5b
        2d5440:	1330005d 	teqne	r0, #93	; 0x5d
        2d5444:	1330008d 	teqne	r0, #141	; 0x8d
        2d5448:	1a00000b 	bne	2d547c <TEWorldClient::Escape(unsigned char *, unsigned long *)+0x60>
        2d544c:	e28cc001 	add	ip, ip, #1	; 0x1
        2d5450:	e2930001 	adds	r0, r3, #1	; 0x1
        2d5454:	0a000004 	beq	2d546c <TEWorldClient::Escape(unsigned char *, unsigned long *)+0x50>
        2d5458:	e0814000 	add	r4, r1, r0
        2d545c:	e5544001 	ldrb	r4, [r4, -#1]	; fField1
        2d5460:	e7c14000 	strb	r4, [r1, r0]
        2d5464:	e2500001 	subs	r0, r0, #1	; 0x1
        2d5468:	1afffffa 	bne	2d5458 <TEWorldClient::Escape(unsigned char *, unsigned long *)+0x3c>
        2d546c:	e4c1e001 	strb	lr, [r1], #1	; fField1
        2d5470:	e5d10000 	ldrb	r0, [r1]
        2d5474:	e2200055 	eor	r0, r0, #85	; 0x55
        2d5478:	e5c10000 	strb	r0, [r1]
        2d547c:	e2811001 	add	r1, r1, #1	; 0x1
        2d5480:	e1b00003 	movs	r0, r3
        2d5484:	e2433001 	sub	r3, r3, #1	; 0x1
        2d5488:	1affffe9 	bne	2d5434 <TEWorldClient::Escape(unsigned char *, unsigned long *)+0x18>
        2d548c:	e582c000 	str	ip, [r2]
        2d5490:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TEWorldClient::DecodePacket(unsigned char *, unsigned char *, unsigned long *, unsigned long, unsigned long *)
 * Address: 002d5494
 */
TEWorldClient::DecodePacket(unsigned char *, unsigned char *, unsigned long *, unsigned long, unsigned long *) {
    /*
        2d5494:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        2d5498:	e3a00000 	mov	r0, #0	; 0x0
        2d549c:	e1a0e002 	mov	lr, r2
        2d54a0:	e28d7014 	add	r7, sp, #20	; 0x14
        2d54a4:	e89700c0 	ldmia	r7, {r6, r7}
        2d54a8:	ea00001d 	b	2d5524 <TEWorldClient::DecodePacket(unsigned char *, unsigned char *, unsigned long *, unsigned long, unsigned long *)+0x90>
        2d54ac:	e5d2c000 	ldrb	ip, [r2]
        2d54b0:	e33c005b 	teq	ip, #91	; 0x5b
        2d54b4:	1a000010 	bne	2d54fc <TEWorldClient::DecodePacket(unsigned char *, unsigned char *, unsigned long *, unsigned long, unsigned long *)+0x68>
        2d54b8:	e2400002 	sub	r0, r0, #2	; 0x2
        2d54bc:	e5714002 	ldrb	r4, [r1, -#2]!	; fField2
        2d54c0:	e5d1c001 	ldrb	ip, [r1, #1]	; fField1
        2d54c4:	e28cc001 	add	ip, ip, #1	; 0x1
        2d54c8:	e0465000 	sub	r5, r6, r0
        2d54cc:	e155000c 	cmp	r5, ip
        2d54d0:	81a0500c 	movhi	r5, ip
        2d54d4:	e245c001 	sub	ip, r5, #1	; 0x1
        2d54d8:	e3350000 	teq	r5, #0	; 0x0
        2d54dc:	0a000004 	beq	2d54f4 <TEWorldClient::DecodePacket(unsigned char *, unsigned char *, unsigned long *, unsigned long, unsigned long *)+0x60>
        2d54e0:	e4c14001 	strb	r4, [r1], #1	; fField1
        2d54e4:	e2800001 	add	r0, r0, #1	; 0x1
        2d54e8:	e1b0500c 	movs	r5, ip
        2d54ec:	e24cc001 	sub	ip, ip, #1	; 0x1
        2d54f0:	1afffffa 	bne	2d54e0 <TEWorldClient::DecodePacket(unsigned char *, unsigned char *, unsigned long *, unsigned long, unsigned long *)+0x4c>
        2d54f4:	e2822001 	add	r2, r2, #1	; 0x1
        2d54f8:	ea000009 	b	2d5524 <TEWorldClient::DecodePacket(unsigned char *, unsigned char *, unsigned long *, unsigned long, unsigned long *)+0x90>
        2d54fc:	e33c005d 	teq	ip, #93	; 0x5d
        2d5500:	e2822001 	add	r2, r2, #1	; 0x1
        2d5504:	1a000004 	bne	2d551c <TEWorldClient::DecodePacket(unsigned char *, unsigned char *, unsigned long *, unsigned long, unsigned long *)+0x88>
        2d5508:	e593c000 	ldr	ip, [r3]
        2d550c:	e24cc001 	sub	ip, ip, #1	; 0x1
        2d5510:	e583c000 	str	ip, [r3]
        2d5514:	e4d2c001 	ldrb	ip, [r2], #1	; fField1
        2d5518:	e22cc055 	eor	ip, ip, #85	; 0x55
        2d551c:	e4c1c001 	strb	ip, [r1], #1	; fField1
        2d5520:	e2800001 	add	r0, r0, #1	; 0x1
        2d5524:	e1500006 	cmp	r0, r6
        2d5528:	2a000004 	bcs	2d5540 <TEWorldClient::DecodePacket(unsigned char *, unsigned char *, unsigned long *, unsigned long, unsigned long *)+0xac>
        2d552c:	e5934000 	ldr	r4, [r3]
        2d5530:	e244c001 	sub	ip, r4, #1	; 0x1
        2d5534:	e583c000 	str	ip, [r3]
        2d5538:	e3340000 	teq	r4, #0	; 0x0
        2d553c:	1affffda 	bne	2d54ac <TEWorldClient::DecodePacket(unsigned char *, unsigned char *, unsigned long *, unsigned long, unsigned long *)+0x18>
        2d5540:	e5870000 	str	r0, [r7]
        2d5544:	e042000e 	sub	r0, r2, lr
        2d5548:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)
 * Address: 002d554c
 */
TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &) {
    /*
        2d554c:	e1a0c00d 	mov	ip, sp
        2d5550:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2d5554:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d5558:	e1a04000 	mov	r4, r0
        2d555c:	e1a05002 	mov	r5, r2
        2d5560:	e1a06003 	mov	r6, r3
        2d5564:	e59b7008 	ldr	r7, [fp, #8]
        2d5568:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        2d556c:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        2d5570:	e3a0a007 	mov	sl, #7	; 0x7
        2d5574:	e28d0020 	add	r0, sp, #32	; 0x20
        2d5578:	eb63aed6 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        2d557c:	e28d0020 	add	r0, sp, #32	; 0x20
        2d5580:	eb63b2e3 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        2d5584:	e1a08000 	mov	r8, r0
        2d5588:	e3a00000 	mov	r0, #0	; 0x0
        2d558c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2d5590:	e58d5000 	str	r5, [sp]
        2d5594:	eb64cfc5 	bl	1c094b0 <$RealClockSeconds(void)>
        2d5598:	e58d0008 	str	r0, [sp, #8]
        2d559c:	e58d000c 	str	r0, [sp, #12]	; fField12
        2d55a0:	e3a00000 	mov	r0, #0	; 0x0
        2d55a4:	e58d0018 	str	r0, [sp, #24]	; fField24
        2d55a8:	e1a01009 	mov	r1, r9
        2d55ac:	e58d001c 	str	r0, [sp, #28]
        2d55b0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d55b4:	e28d0004 	add	r0, sp, #4	; 0x4
        2d55b8:	eb63aec6 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        2d55bc:	e1a01007 	mov	r1, r7
        2d55c0:	e1a0000d 	mov	r0, sp
        2d55c4:	eb63aec3 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        2d55c8:	e28d202c 	add	r2, sp, #44	; 0x2c
        2d55cc:	e1a01009 	mov	r1, r9
        2d55d0:	e1a00004 	mov	r0, r4
        2d55d4:	eb5fa660 	bl	1abef5c <TEWorldClient::$AsciiString(RefVar const &, unsigned long *)>
        2d55d8:	e5900000 	ldr	r0, [r0]
        2d55dc:	e58d0018 	str	r0, [sp, #24]	; fField24
        2d55e0:	e28d202c 	add	r2, sp, #44	; 0x2c
        2d55e4:	e1a01007 	mov	r1, r7
        2d55e8:	e1a00004 	mov	r0, r4
        2d55ec:	eb5fa65a 	bl	1abef5c <TEWorldClient::$AsciiString(RefVar const &, unsigned long *)>
        2d55f0:	e5900000 	ldr	r0, [r0]
        2d55f4:	e355001b 	cmp	r5, #27	; 0x1b
        2d55f8:	e58d001c 	str	r0, [sp, #28]
        2d55fc:	23a0001b 	movcs	r0, #27	; 0x1b
        2d5600:	31a00005 	movcc	r0, r5
        2d5604:	e58d002c 	str	r0, [sp, #44]
        2d5608:	e0455000 	sub	r5, r5, r0
        2d560c:	e2840f96 	add	r0, r4, #600	; 0x258
        2d5610:	e1a07000 	mov	r7, r0
        2d5614:	e5901000 	ldr	r1, [r0]
        2d5618:	e1a0e00f 	mov	lr, pc
        2d561c:	e281f028 	add	pc, r1, #40	; 0x28
        2d5620:	e1a00007 	mov	r0, r7
        2d5624:	e28f1f38 	add	r1, pc, #224	; 0xe0
        2d5628:	e3a02002 	mov	r2, #2	; 0x2
        2d562c:	e5973000 	ldr	r3, [r7]
        2d5630:	e1a0e00f 	mov	lr, pc
        2d5634:	e283f020 	add	pc, r3, #32	; 0x20
        2d5638:	e28d1008 	add	r1, sp, #8	; 0x8
        2d563c:	e1a00007 	mov	r0, r7
        2d5640:	e3a02020 	mov	r2, #32	; 0x20
        2d5644:	e5973000 	ldr	r3, [r7]
        2d5648:	e1a0e00f 	mov	lr, pc
        2d564c:	e083f002 	add	pc, r3, r2
        2d5650:	e1a01008 	mov	r1, r8
        2d5654:	e1a00007 	mov	r0, r7
        2d5658:	e59d202c 	ldr	r2, [sp, #44]
        2d565c:	e5973000 	ldr	r3, [r7]
        2d5660:	e1a0e00f 	mov	lr, pc
        2d5664:	e283f020 	add	pc, r3, #32	; 0x20
        2d5668:	e59d902c 	ldr	r9, [sp, #44]
        2d566c:	e0888009 	add	r8, r8, r9
        2d5670:	e1a00007 	mov	r0, r7
        2d5674:	e5971000 	ldr	r1, [r7]
        2d5678:	e1a0e00f 	mov	lr, pc
        2d567c:	e281f03c 	add	pc, r1, #60	; 0x3c
        2d5680:	e28410d4 	add	r1, r4, #212	; 0xd4
        2d5684:	e58d002c 	str	r0, [sp, #44]
        2d5688:	e58d1040 	str	r1, [sp, #64]
        2d568c:	e28d202c 	add	r2, sp, #44	; 0x2c
        2d5690:	e1a00004 	mov	r0, r4
        2d5694:	eb5faa59 	bl	1ac0000 <TEWorldClient::$Escape(unsigned char *, unsigned long *)>
        2d5698:	e1a00004 	mov	r0, r4
        2d569c:	e59d102c 	ldr	r1, [sp, #44]
        2d56a0:	eb5fb6b7 	bl	1ac3184 <TEWorldClient::$SendP3Buffer(unsigned long)>
        2d56a4:	e58402a8 	str	r0, [r4, #680]	; fField680
        2d56a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d56ac:	e3300000 	teq	r0, #0	; 0x0
        2d56b0:	1a000003 	bne	2d56c4 <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x178>
        2d56b4:	eb63f8c6 	bl	1bd39d4 <$GetGlobals>
        2d56b8:	e3a01000 	mov	r1, #0	; 0x0
        2d56bc:	eb635ffb 	bl	1bad6b0 <TForkWorld::$Fork(TForkWorld *)>
        2d56c0:	e58402a8 	str	r0, [r4, #680]	; fField680
        2d56c4:	e3a0001a 	mov	r0, #26	; 0x1a
        2d56c8:	eb63b29f 	bl	1bc214c <$AllocateRefHandle(long)>
        2d56cc:	e58d0000 	str	r0, [sp]
        2d56d0:	e1a0200d 	mov	r2, sp
        2d56d4:	e2840018 	add	r0, r4, #24	; 0x18
        2d56d8:	e58d0040 	str	r0, [sp, #64]
        2d56dc:	e59f102c 	ldr	r1, [pc, #2c]	; 2d5710 <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x1c4>	; fField2
        2d56e0:	e58d103c 	str	r1, [sp, #60]
        2d56e4:	eb63c31f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d56e8:	e59d0000 	ldr	r0, [sp]
        2d56ec:	eb63b6b2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d56f0:	e3a00000 	mov	r0, #0	; 0x0
        2d56f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d56f8:	e59f1014 	ldr	r1, [pc, #14]	; 2d5714 <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x1c8>
        2d56fc:	e58d103c 	str	r1, [sp, #60]
        2d5700:	e59f1010 	ldr	r1, [pc, #10]	; 2d5718 <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x1cc>
        2d5704:	e58d1038 	str	r1, [sp, #56]
        2d5708:	ea000080 	b	2d5910 <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x3c4>
        2d570c:	78640000 	stmvcda	r4!, {}^
        2d5710:	00684d58 	rsbeq	r4, r8, r8, asr sp
        2d5714:	00682d78 	rsbeq	r2, r8, r8, ror sp
        2d5718:	00681d70 	rsbeq	r1, r8, r0, ror sp
        2d571c:	e1a02005 	mov	r2, r5
        2d5720:	e1a01008 	mov	r1, r8
        2d5724:	e1a00004 	mov	r0, r4
        2d5728:	eb5fec4e 	bl	1ad0868 <TEWorldClient::$GetMaxUploadLength(unsigned char *, unsigned long)>
        2d572c:	e58d0034 	str	r0, [sp, #52]
        2d5730:	e0455000 	sub	r5, r5, r0
        2d5734:	e1a00007 	mov	r0, r7
        2d5738:	e5971000 	ldr	r1, [r7]
        2d573c:	e1a0e00f 	mov	lr, pc
        2d5740:	e281f028 	add	pc, r1, #40	; 0x28
        2d5744:	e3350000 	teq	r5, #0	; 0x0
        2d5748:	01a00007 	moveq	r0, r7
        2d574c:	01a03007 	moveq	r3, r7
        2d5750:	028f1f88 	addeq	r1, pc, #544	; 0x220
        2d5754:	0a000009 	beq	2d5780 <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x234>
        2d5758:	e1b0000a 	movs	r0, sl
        2d575c:	e24aa001 	sub	sl, sl, #1	; 0x1
        2d5760:	11a00007 	movne	r0, r7
        2d5764:	11a03007 	movne	r3, r7
        2d5768:	124f1f19 	subne	r1, pc, #100	; 0x64
        2d576c:	1a000003 	bne	2d5780 <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x234>
        2d5770:	e3a0a008 	mov	sl, #8	; 0x8
        2d5774:	e1a00007 	mov	r0, r7
        2d5778:	e1a03007 	mov	r3, r7
        2d577c:	e28f1f7e 	add	r1, pc, #504	; 0x1f8
        2d5780:	e3a02002 	mov	r2, #2	; 0x2
        2d5784:	e5933000 	ldr	r3, [r3]
        2d5788:	e1a0e00f 	mov	lr, pc
        2d578c:	e283f020 	add	pc, r3, #32	; 0x20
        2d5790:	e1a01008 	mov	r1, r8
        2d5794:	e1a00007 	mov	r0, r7
        2d5798:	e59d2034 	ldr	r2, [sp, #52]
        2d579c:	e5973000 	ldr	r3, [r7]
        2d57a0:	e1a0e00f 	mov	lr, pc
        2d57a4:	e283f020 	add	pc, r3, #32	; 0x20
        2d57a8:	e59d0034 	ldr	r0, [sp, #52]
        2d57ac:	e0888000 	add	r8, r8, r0
        2d57b0:	e0899000 	add	r9, r9, r0
        2d57b4:	e1a00007 	mov	r0, r7
        2d57b8:	e5971000 	ldr	r1, [r7]
        2d57bc:	e1a0e00f 	mov	lr, pc
        2d57c0:	e281f03c 	add	pc, r1, #60	; 0x3c
        2d57c4:	e58d0034 	str	r0, [sp, #52]
        2d57c8:	e59d1048 	ldr	r1, [sp, #72]
        2d57cc:	e28d2034 	add	r2, sp, #52	; 0x34
        2d57d0:	e1a00004 	mov	r0, r4
        2d57d4:	eb5faa09 	bl	1ac0000 <TEWorldClient::$Escape(unsigned char *, unsigned long *)>
        2d57d8:	e1a00004 	mov	r0, r4
        2d57dc:	e59d1034 	ldr	r1, [sp, #52]
        2d57e0:	eb5fb667 	bl	1ac3184 <TEWorldClient::$SendP3Buffer(unsigned long)>
        2d57e4:	e58402a8 	str	r0, [r4, #680]	; fField680
        2d57e8:	e5960000 	ldr	r0, [r6]
        2d57ec:	e5900000 	ldr	r0, [r0]
        2d57f0:	e3300002 	teq	r0, #2	; 0x2
        2d57f4:	0a000045 	beq	2d5910 <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x3c4>
        2d57f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d57fc:	e3a00002 	mov	r0, #2	; 0x2
        2d5800:	eb63b251 	bl	1bc214c <$AllocateRefHandle(long)>
        2d5804:	e58d0000 	str	r0, [sp]
        2d5808:	e1a0000d 	mov	r0, sp
        2d580c:	eb5fe7e7 	bl	1acf7b0 <$FYieldToFork>
        2d5810:	e59d0000 	ldr	r0, [sp]
        2d5814:	eb63b668 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5818:	e24dd010 	sub	sp, sp, #16	; 0x10
        2d581c:	e3a00002 	mov	r0, #2	; 0x2
        2d5820:	eb5f195d 	bl	1a9bd9c <$MakeArray(long)>
        2d5824:	eb63b248 	bl	1bc214c <$AllocateRefHandle(long)>
        2d5828:	e58d0008 	str	r0, [sp, #8]
        2d582c:	e1a00109 	mov	r0, r9, lsl #2
        2d5830:	eb63b245 	bl	1bc214c <$AllocateRefHandle(long)>
        2d5834:	e58d0000 	str	r0, [sp]
        2d5838:	e3a01000 	mov	r1, #0	; 0x0
        2d583c:	e5902000 	ldr	r2, [r0]
        2d5840:	e59d0008 	ldr	r0, [sp, #8]
        2d5844:	e5900000 	ldr	r0, [r0]
        2d5848:	eb63c2c2 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d584c:	e59d0000 	ldr	r0, [sp]
        2d5850:	eb63b659 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5854:	e1a00105 	mov	r0, r5, lsl #2
        2d5858:	eb63b23b 	bl	1bc214c <$AllocateRefHandle(long)>
        2d585c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2d5860:	e3a01001 	mov	r1, #1	; 0x1
        2d5864:	e5902000 	ldr	r2, [r0]
        2d5868:	e59d0008 	ldr	r0, [sp, #8]
        2d586c:	e5900000 	ldr	r0, [r0]
        2d5870:	eb63c2b8 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d5874:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2d5878:	eb63b64f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d587c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d5880:	e28d3010 	add	r3, sp, #16	; 0x10
        2d5884:	e28d200c 	add	r2, sp, #12	; 0xc
        2d5888:	e1a00006 	mov	r0, r6
        2d588c:	e59d1054 	ldr	r1, [sp, #84]
        2d5890:	eb63b650 	bl	1bc31d8 <$DoMessageIfDefined__FRC6RefVarN21Pl>
        2d5894:	eb63b22c 	bl	1bc214c <$AllocateRefHandle(long)>
        2d5898:	e58d0000 	str	r0, [sp]
        2d589c:	e59d005c 	ldr	r0, [sp, #92]
        2d58a0:	e59f10d8 	ldr	r1, [pc, #d8]	; 2d5980 <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x434>
        2d58a4:	e5911000 	ldr	r1, [r1]
        2d58a8:	e5911000 	ldr	r1, [r1]
        2d58ac:	e5900000 	ldr	r0, [r0]
        2d58b0:	e5900000 	ldr	r0, [r0]
        2d58b4:	eb63ba69 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d58b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d58bc:	e3300002 	teq	r0, #2	; 0x2
        2d58c0:	0a00000c 	beq	2d58f8 <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x3ac>
        2d58c4:	e3100003 	tst	r0, #3	; 0x3
        2d58c8:	01a00140 	moveq	r0, r0, asr #2
        2d58cc:	0a000000 	beq	2d58d4 <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x388>
        2d58d0:	eb63b211 	bl	1bc211c <$_RINTError(long)>
        2d58d4:	e1a00100 	mov	r0, r0, lsl #2
        2d58d8:	eb63b21b 	bl	1bc214c <$AllocateRefHandle(long)>
        2d58dc:	e58d0000 	str	r0, [sp]
        2d58e0:	e1a0200d 	mov	r2, sp
        2d58e4:	e59d0060 	ldr	r0, [sp, #96]
        2d58e8:	e59d1054 	ldr	r1, [sp, #84]
        2d58ec:	eb63c29d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d58f0:	e59d0000 	ldr	r0, [sp]
        2d58f4:	eb63b630 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d58f8:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2d58fc:	eb63b62e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5900:	e28dd004 	add	sp, sp, #4	; 0x4
        2d5904:	e59d0008 	ldr	r0, [sp, #8]
        2d5908:	eb63b62b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d590c:	e28dd014 	add	sp, sp, #20	; 0x14
        2d5910:	e59402a8 	ldr	r0, [r4, #680]	; fField680
        2d5914:	e3300000 	teq	r0, #0	; 0x0
        2d5918:	1a000001 	bne	2d5924 <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x3d8>
        2d591c:	e3350000 	teq	r5, #0	; 0x0
        2d5920:	1affff7d 	bne	2d571c <TEWorldClient::UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)+0x1d0>
        2d5924:	e3a00002 	mov	r0, #2	; 0x2
        2d5928:	eb63b207 	bl	1bc214c <$AllocateRefHandle(long)>
        2d592c:	e58d0000 	str	r0, [sp]
        2d5930:	e1a0200d 	mov	r2, sp
        2d5934:	e59d0044 	ldr	r0, [sp, #68]
        2d5938:	e59d1040 	ldr	r1, [sp, #64]
        2d593c:	eb63c289 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d5940:	e59d0000 	ldr	r0, [sp]
        2d5944:	eb63b61c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5948:	e28dd008 	add	sp, sp, #8	; 0x8
        2d594c:	e1a0000d 	mov	r0, sp
        2d5950:	e3a01000 	mov	r1, #0	; 0x0
        2d5954:	eb63b1e9 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d5958:	e28d0004 	add	r0, sp, #4	; 0x4
        2d595c:	e3a01000 	mov	r1, #0	; 0x0
        2d5960:	eb63b1e6 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d5964:	e28dd008 	add	sp, sp, #8	; 0x8
        2d5968:	e28d0020 	add	r0, sp, #32	; 0x20
        2d596c:	e3a01000 	mov	r1, #0	; 0x0
        2d5970:	eb63b1e2 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d5974:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d5978:	78650000 	stmvcda	r5!, {}^
        2d597c:	78620000 	stmvcda	r2!, {}^
        2d5980:	00684c58 	rsbeq	r4, r8, r8, asr ip
    */
}

/**
 * Symbol: TEWorldClient::SetStrSlot(RefVar const &, RefVar const &, unsigned char *, unsigned long)
 * Address: 002d5984
 */
TEWorldClient::SetStrSlot(RefVar const &, RefVar const &, unsigned char *, unsigned long) {
    /*
        2d5984:	e1a0c00d 	mov	ip, sp
        2d5988:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2d598c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d5990:	e1a04001 	mov	r4, r1
        2d5994:	e1a06002 	mov	r6, r2
        2d5998:	e1a05003 	mov	r5, r3
        2d599c:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        2d59a0:	e5910000 	ldr	r0, [r1]
        2d59a4:	e5900000 	ldr	r0, [r0]
        2d59a8:	e3300002 	teq	r0, #2	; 0x2
        2d59ac:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2d59b0:	e3a00002 	mov	r0, #2	; 0x2
        2d59b4:	e0800088 	add	r0, r0, r8, lsl #1
        2d59b8:	eb6431e0 	bl	1be2140 <$NewPtr>
        2d59bc:	e1b07000 	movs	r7, r0
        2d59c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d59c4:	1a000000 	bne	2d59cc <TEWorldClient::SetStrSlot(RefVar const &, RefVar const &, unsigned char *, unsigned long)+0x48>
        2d59c8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2d59cc:	e1a03008 	mov	r3, r8
        2d59d0:	e1a01007 	mov	r1, r7
        2d59d4:	e1a00005 	mov	r0, r5
        2d59d8:	e3a02001 	mov	r2, #1	; 0x1
        2d59dc:	eb644668 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        2d59e0:	e1a00007 	mov	r0, r7
        2d59e4:	eb63be3a 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        2d59e8:	eb63b1d7 	bl	1bc214c <$AllocateRefHandle(long)>
        2d59ec:	e58d0000 	str	r0, [sp]
        2d59f0:	e1a0200d 	mov	r2, sp
        2d59f4:	e1a01006 	mov	r1, r6
        2d59f8:	e1a00004 	mov	r0, r4
        2d59fc:	eb63c259 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d5a00:	e59d0000 	ldr	r0, [sp]
        2d5a04:	eb63b5ec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5a08:	e1a00007 	mov	r0, r7
        2d5a0c:	eb642da8 	bl	1be10b4 <$DisposPtr>
        2d5a10:	eaffffec 	b	2d59c8 <TEWorldClient::SetStrSlot(RefVar const &, RefVar const &, unsigned char *, unsigned long)+0x44>
    */
}

/**
 * Symbol: TEWorldClient::AsciiString(RefVar const &, unsigned long *)
 * Address: 002d5a14
 */
TEWorldClient::AsciiString(RefVar const &, unsigned long *) {
    /*
        2d5a14:	e1a0c00d 	mov	ip, sp
        2d5a18:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d5a1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d5a20:	e1a04002 	mov	r4, r2
        2d5a24:	e5910000 	ldr	r0, [r1]
        2d5a28:	e5900000 	ldr	r0, [r0]
        2d5a2c:	e3a06000 	mov	r6, #0	; 0x0
        2d5a30:	e3300002 	teq	r0, #2	; 0x2
        2d5a34:	01a00006 	moveq	r0, r6
        2d5a38:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2d5a3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d5a40:	e1a0000d 	mov	r0, sp
        2d5a44:	eb63ada3 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        2d5a48:	e1a0000d 	mov	r0, sp
        2d5a4c:	eb63b1b0 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        2d5a50:	e1a05000 	mov	r5, r0
        2d5a54:	eb646341 	bl	1bee760 <$Ustrlen>
        2d5a58:	e5840000 	str	r0, [r4]
        2d5a5c:	e3300000 	teq	r0, #0	; 0x0
        2d5a60:	1a000004 	bne	2d5a78 <TEWorldClient::AsciiString(RefVar const &, unsigned long *)+0x64>
        2d5a64:	e1a0000d 	mov	r0, sp
        2d5a68:	e3a01000 	mov	r1, #0	; 0x0
        2d5a6c:	eb63b1a3 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d5a70:	e1a00006 	mov	r0, r6
        2d5a74:	ea00000c 	b	2d5aac <TEWorldClient::AsciiString(RefVar const &, unsigned long *)+0x98>
        2d5a78:	e2800001 	add	r0, r0, #1	; 0x1
        2d5a7c:	eb6431af 	bl	1be2140 <$NewPtr>
        2d5a80:	e1b04000 	movs	r4, r0
        2d5a84:	0a000004 	beq	2d5a9c <TEWorldClient::AsciiString(RefVar const &, unsigned long *)+0x88>
        2d5a88:	e1a01004 	mov	r1, r4
        2d5a8c:	e1a00005 	mov	r0, r5
        2d5a90:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        2d5a94:	e3a02002 	mov	r2, #2	; 0x2
        2d5a98:	eb644638 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        2d5a9c:	e1a0000d 	mov	r0, sp
        2d5aa0:	e3a01000 	mov	r1, #0	; 0x0
        2d5aa4:	eb63b195 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d5aa8:	e1a00004 	mov	r0, r4
        2d5aac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::BufferStart(RefVar const &, RefVar const &)
 * Address: 002d5ab0
 */
TEWorldClient::BufferStart(RefVar const &, RefVar const &) {
    /*
        2d5ab0:	e1a0c00d 	mov	ip, sp
        2d5ab4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d5ab8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d5abc:	e1a04000 	mov	r4, r0
        2d5ac0:	e1a06001 	mov	r6, r1
        2d5ac4:	e1a05002 	mov	r5, r2
        2d5ac8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d5acc:	e2800f96 	add	r0, r0, #600	; 0x258
        2d5ad0:	e1a07000 	mov	r7, r0
        2d5ad4:	e5901000 	ldr	r1, [r0]
        2d5ad8:	e1a0e00f 	mov	lr, pc
        2d5adc:	e281f028 	add	pc, r1, #40	; 0x28
        2d5ae0:	e1a0200d 	mov	r2, sp
        2d5ae4:	e1a01006 	mov	r1, r6
        2d5ae8:	e1a00004 	mov	r0, r4
        2d5aec:	eb5fa51a 	bl	1abef5c <TEWorldClient::$AsciiString(RefVar const &, unsigned long *)>
        2d5af0:	e1a06000 	mov	r6, r0
        2d5af4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d5af8:	e5950000 	ldr	r0, [r5]
        2d5afc:	e5900000 	ldr	r0, [r0]
        2d5b00:	e3100003 	tst	r0, #3	; 0x3
        2d5b04:	01a00140 	moveq	r0, r0, asr #2
        2d5b08:	0a000000 	beq	2d5b10 <TEWorldClient::BufferStart(RefVar const &, RefVar const &)+0x60>
        2d5b0c:	eb63b182 	bl	1bc211c <$_RINTError(long)>
        2d5b10:	e5cd0001 	strb	r0, [sp, #1]	; fField1
        2d5b14:	e1a00440 	mov	r0, r0, asr #8
        2d5b18:	e5cd0000 	strb	r0, [sp]
        2d5b1c:	e3360000 	teq	r6, #0	; 0x0
        2d5b20:	1a000007 	bne	2d5b44 <TEWorldClient::BufferStart(RefVar const &, RefVar const &)+0x94>
        2d5b24:	e1a00007 	mov	r0, r7
        2d5b28:	e28f1f04 	add	r1, pc, #16	; 0x10
        2d5b2c:	e3a02002 	mov	r2, #2	; 0x2
        2d5b30:	e5973000 	ldr	r3, [r7]
        2d5b34:	e1a0e00f 	mov	lr, pc
        2d5b38:	e283f020 	add	pc, r3, #32	; 0x20
        2d5b3c:	ea00000d 	b	2d5b78 <TEWorldClient::BufferStart(RefVar const &, RefVar const &)+0xc8>
        2d5b40:	41540000 	cmpmi	r4, r0
        2d5b44:	e1a01006 	mov	r1, r6
        2d5b48:	e1a00007 	mov	r0, r7
        2d5b4c:	e3a02002 	mov	r2, #2	; 0x2
        2d5b50:	e5973000 	ldr	r3, [r7]
        2d5b54:	e1a0e00f 	mov	lr, pc
        2d5b58:	e283f020 	add	pc, r3, #32	; 0x20
        2d5b5c:	e28410ba 	add	r1, r4, #186	; 0xba
        2d5b60:	e2811c02 	add	r1, r1, #512	; 0x200
        2d5b64:	e1a00006 	mov	r0, r6
        2d5b68:	e3a02002 	mov	r2, #2	; 0x2
        2d5b6c:	eb6424f8 	bl	1bdef54 <$BlockMove>
        2d5b70:	e1a00006 	mov	r0, r6
        2d5b74:	eb642d4e 	bl	1be10b4 <$DisposPtr>
        2d5b78:	e3a00019 	mov	r0, #25	; 0x19
        2d5b7c:	e58402b4 	str	r0, [r4, #692]	; fField692
        2d5b80:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        2d5b84:	e5c402b9 	strb	r0, [r4, #697]	; fField697
        2d5b88:	e1a00440 	mov	r0, r0, asr #8
        2d5b8c:	e5c402b8 	strb	r0, [r4, #696]	; fField696
        2d5b90:	e59d0000 	ldr	r0, [sp]
        2d5b94:	e1b00840 	movs	r0, r0, asr #16
        2d5b98:	0a000008 	beq	2d5bc0 <TEWorldClient::BufferStart(RefVar const &, RefVar const &)+0x110>
        2d5b9c:	e1a0100d 	mov	r1, sp
        2d5ba0:	e1a00007 	mov	r0, r7
        2d5ba4:	e3a02002 	mov	r2, #2	; 0x2
        2d5ba8:	e5973000 	ldr	r3, [r7]
        2d5bac:	e1a0e00f 	mov	lr, pc
        2d5bb0:	e283f020 	add	pc, r3, #32	; 0x20
        2d5bb4:	e59402b4 	ldr	r0, [r4, #692]	; fField692
        2d5bb8:	e3800002 	orr	r0, r0, #2	; 0x2
        2d5bbc:	e58402b4 	str	r0, [r4, #692]	; fField692
        2d5bc0:	e3a03000 	mov	r3, #0	; 0x0
        2d5bc4:	e92d0008 	stmdb	sp!, {r3}
        2d5bc8:	e1a00004 	mov	r0, r4
        2d5bcc:	e3a02001 	mov	r2, #1	; 0x1
        2d5bd0:	e3a01000 	mov	r1, #0	; 0x0
        2d5bd4:	eb5fa4dc 	bl	1abef4c <TEWorldClient::$AddAtoms(unsigned long, short, unsigned char *, unsigned long)>
        2d5bd8:	e3a00001 	mov	r0, #1	; 0x1
        2d5bdc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)
 * Address: 002d5be0
 */
TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &) {
    /*
        2d5be0:	e1a0c00d 	mov	ip, sp
        2d5be4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2d5be8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d5bec:	e1a04000 	mov	r4, r0
        2d5bf0:	e1a05001 	mov	r5, r1
        2d5bf4:	e1a06002 	mov	r6, r2
        2d5bf8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d5bfc:	e5911000 	ldr	r1, [r1]
        2d5c00:	e5911000 	ldr	r1, [r1]
        2d5c04:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2d5c08:	e5801000 	str	r1, [r0]
        2d5c0c:	e5950000 	ldr	r0, [r5]
        2d5c10:	e5900000 	ldr	r0, [r0]
        2d5c14:	e3300002 	teq	r0, #2	; 0x2
        2d5c18:	028f0f14 	addeq	r0, pc, #80	; 0x50
        2d5c1c:	0b64355f 	bleq	1be31a0 <$ThrowMsg>
        2d5c20:	e5960000 	ldr	r0, [r6]
        2d5c24:	e5900000 	ldr	r0, [r0]
        2d5c28:	e2500002 	subs	r0, r0, #2	; 0x2
        2d5c2c:	13a00001 	movne	r0, #1	; 0x1
        2d5c30:	e20080ff 	and	r8, r0, #255	; 0xff
        2d5c34:	e24dd018 	sub	sp, sp, #24	; 0x18
        2d5c38:	e1a0000d 	mov	r0, sp
        2d5c3c:	eb637fa8 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        2d5c40:	e1a0000d 	mov	r0, sp
        2d5c44:	eb638c0c 	bl	1bb8c7c <TOptionArray::$Init(void)>
        2d5c48:	e1b07000 	movs	r7, r0
        2d5c4c:	1a000042 	bne	2d5d5c <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x17c>
        2d5c50:	e3380000 	teq	r8, #0	; 0x0
        2d5c54:	0a000011 	beq	2d5ca0 <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0xc0>
        2d5c58:	e1a0200d 	mov	r2, sp
        2d5c5c:	e1a01006 	mov	r1, r6
        2d5c60:	e1a00004 	mov	r0, r4
        2d5c64:	eb5f565b 	bl	1aab5d8 <TNewScriptEndpointClient::$ConvertToOptionArray(RefVar const &, TOptionArray *)>
        2d5c68:	e1a07000 	mov	r7, r0
        2d5c6c:	ea000022 	b	2d5cfc <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x11c>
        2d5c70:	6e696c20 	cdpvs	12, 6, cr6, cr9, cr0, {1}
        2d5c74:	656e6470 	strvsb	r6, [lr, -#1136]!
        2d5c78:	6f696e74 	swivs	0x00696e74
        2d5c7c:	20706173 	rsbcss	r6, r0, r3, ror r1
        2d5c80:	73656420 	cmnvc	r5, #536870912	; 0x20000000
        2d5c84:	746f2049 	strvcbt	r2, [pc], #49	; 2d5c8c <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0xac>
        2d5c88:	6e697453 	mcrvs	4, 3, r7, cr9, cr3, {2}
        2d5c8c:	63726970 	cmnvs	r2, #1835008	; 0x1c0000
        2d5c90:	74456e64 	strvcb	r6, [r5], -#3684
        2d5c94:	706f696e 	rsbvc	r6, pc, lr, ror #18
        2d5c98:	74436c69 	strvcb	r6, [r3], -#3177
        2d5c9c:	656e7400 	strvsb	r7, [lr, -#1024]!
        2d5ca0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d5ca4:	e59f1038 	ldr	r1, [pc, #38]	; 2d5ce4 <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x104>
        2d5ca8:	e1a00005 	mov	r0, r5
        2d5cac:	e3a03000 	mov	r3, #0	; 0x0
        2d5cb0:	e3a02000 	mov	r2, #0	; 0x0
        2d5cb4:	eb63b96e 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d5cb8:	eb63b123 	bl	1bc214c <$AllocateRefHandle(long)>
        2d5cbc:	e58d0000 	str	r0, [sp]
        2d5cc0:	e5900000 	ldr	r0, [r0]
        2d5cc4:	e3300002 	teq	r0, #2	; 0x2
        2d5cc8:	0a000006 	beq	2d5ce8 <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x108>
        2d5ccc:	e28d2004 	add	r2, sp, #4	; 0x4
        2d5cd0:	e1a0100d 	mov	r1, sp
        2d5cd4:	e1a00004 	mov	r0, r4
        2d5cd8:	eb5f563e 	bl	1aab5d8 <TNewScriptEndpointClient::$ConvertToOptionArray(RefVar const &, TOptionArray *)>
        2d5cdc:	e1a07000 	mov	r7, r0
        2d5ce0:	ea000002 	b	2d5cf0 <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x110>
        2d5ce4:	00682570 	rsbeq	r2, r8, r0, ror r5
        2d5ce8:	e3e07093 	mvn	r7, #147	; 0x93
        2d5cec:	e2477c65 	sub	r7, r7, #25856	; 0x6500
        2d5cf0:	e59d0000 	ldr	r0, [sp]
        2d5cf4:	eb63b530 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5cf8:	e28dd004 	add	sp, sp, #4	; 0x4
        2d5cfc:	e3370000 	teq	r7, #0	; 0x0
        2d5d00:	1a000015 	bne	2d5d5c <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x17c>
        2d5d04:	eb5f982b 	bl	1abbdb8 <$UseModemNavigator(void)>
        2d5d08:	e3300000 	teq	r0, #0	; 0x0
        2d5d0c:	0a000004 	beq	2d5d24 <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x144>
        2d5d10:	e1a0000d 	mov	r0, sp
        2d5d14:	eb5f562c 	bl	1aab5cc <$ContainsModemService(TOptionArray *)>
        2d5d18:	e3300000 	teq	r0, #0	; 0x0
        2d5d1c:	11a0000d 	movne	r0, sp
        2d5d20:	1b646ede 	blne	1bf18a0 <$RunModemNavigator(TOptionArray *)>
        2d5d24:	e28d1018 	add	r1, sp, #24	; 0x18
        2d5d28:	e1a0000d 	mov	r0, sp
        2d5d2c:	e3a02000 	mov	r2, #0	; 0x0
        2d5d30:	eb63879a 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
        2d5d34:	e1b07000 	movs	r7, r0
        2d5d38:	1a000007 	bne	2d5d5c <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x17c>
        2d5d3c:	e3380000 	teq	r8, #0	; 0x0
        2d5d40:	0a00000a 	beq	2d5d70 <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x190>
        2d5d44:	e1a0200d 	mov	r2, sp
        2d5d48:	e1a01006 	mov	r1, r6
        2d5d4c:	e1a00004 	mov	r0, r4
        2d5d50:	eb5f561f 	bl	1aab5d4 <TNewScriptEndpointClient::$ConvertFromOptionArray(RefVar const &, TOptionArray *)>
        2d5d54:	e1b07000 	movs	r7, r0
        2d5d58:	0a000004 	beq	2d5d70 <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x190>
        2d5d5c:	e1a0000d 	mov	r0, sp
        2d5d60:	e3a01000 	mov	r1, #0	; 0x0
        2d5d64:	eb638370 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        2d5d68:	e28dd018 	add	sp, sp, #24	; 0x18
        2d5d6c:	ea00000b 	b	2d5da0 <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x1c0>
        2d5d70:	e1a00004 	mov	r0, r4
        2d5d74:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        2d5d78:	e59f3028 	ldr	r3, [pc, #28]	; 2d5da8 <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x1c8>
        2d5d7c:	e59f2028 	ldr	r2, [pc, #28]	; 2d5dac <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x1cc>
        2d5d80:	eb638fbf 	bl	1bb9c84 <TEndpointClient::$Init(TEndpoint *, unsigned long, unsigned long)>
        2d5d84:	e1b07000 	movs	r7, r0
        2d5d88:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d5d8c:	0a000007 	beq	2d5db0 <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x1d0>
        2d5d90:	e28d0004 	add	r0, sp, #4	; 0x4
        2d5d94:	e3a01000 	mov	r1, #0	; 0x0
        2d5d98:	eb638363 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        2d5d9c:	e28dd01c 	add	sp, sp, #28	; 0x1c
        2d5da0:	e1a00007 	mov	r0, r7
        2d5da4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2d5da8:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        2d5dac:	656e6470 	strvsb	r6, [lr, -#1136]!
        2d5db0:	e1a00004 	mov	r0, r4
        2d5db4:	eb5ecdcc 	bl	1a894ec <$AddressToRef(void *)>
        2d5db8:	eb63b0e3 	bl	1bc214c <$AllocateRefHandle(long)>
        2d5dbc:	e58d0000 	str	r0, [sp]
        2d5dc0:	e1a0200d 	mov	r2, sp
        2d5dc4:	e59f1024 	ldr	r1, [pc, #24]	; 2d5df0 <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x210>	; fField24
        2d5dc8:	e1a00005 	mov	r0, r5
        2d5dcc:	eb63c165 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d5dd0:	e59d0000 	ldr	r0, [sp]
        2d5dd4:	eb63b4f8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d5dd8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2d5ddc:	e1a01004 	mov	r1, r4
        2d5de0:	eb638fba 	bl	1bb9cd0 <TEndpoint::$Open(unsigned long)>
        2d5de4:	e1a07000 	mov	r7, r0
        2d5de8:	e28dd004 	add	sp, sp, #4	; 0x4
        2d5dec:	eaffffda 	b	2d5d5c <TEWorldClient::InitEWorldClient(RefVar const &, RefVar const &)+0x17c>
        2d5df0:	006823f0 	streqd	r2, [r8], -#48
    */
}

/**
 * Symbol: TEWorldClient::InitBuffer(void)
 * Address: 002d5df4
 */
TEWorldClient::InitBuffer(void) {
    /*
        2d5df4:	e1a0c00d 	mov	ip, sp
        2d5df8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d5dfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d5e00:	e1a04000 	mov	r4, r0
        2d5e04:	e2800f96 	add	r0, r0, #600	; 0x258
        2d5e08:	e1a05000 	mov	r5, r0
        2d5e0c:	e5901000 	ldr	r1, [r0]
        2d5e10:	e1a0e00f 	mov	lr, pc
        2d5e14:	e281f028 	add	pc, r1, #40	; 0x28
        2d5e18:	e59402b4 	ldr	r0, [r4, #692]	; fField692
        2d5e1c:	e3100001 	tst	r0, #1	; 0x1
        2d5e20:	0a000006 	beq	2d5e40 <TEWorldClient::InitBuffer(void)+0x4c>
        2d5e24:	e28410ba 	add	r1, r4, #186	; 0xba
        2d5e28:	e2811c02 	add	r1, r1, #512	; 0x200
        2d5e2c:	e1a00005 	mov	r0, r5
        2d5e30:	e3a02002 	mov	r2, #2	; 0x2
        2d5e34:	e5953000 	ldr	r3, [r5]
        2d5e38:	e1a0e00f 	mov	lr, pc
        2d5e3c:	e283f020 	add	pc, r3, #32	; 0x20
        2d5e40:	e59402b4 	ldr	r0, [r4, #692]	; fField692
        2d5e44:	e3100002 	tst	r0, #2	; 0x2
        2d5e48:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2d5e4c:	e2841fae 	add	r1, r4, #696	; 0x2b8
        2d5e50:	e1a00005 	mov	r0, r5
        2d5e54:	e3a02002 	mov	r2, #2	; 0x2
        2d5e58:	e5953000 	ldr	r3, [r5]
        2d5e5c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2d5e60:	e283f020 	add	pc, r3, #32	; 0x20
    */
}

/**
 * Symbol: TEWorldClient::AddAtoms(unsigned long, short, unsigned char *, unsigned long)
 * Address: 002d5e64
 */
TEWorldClient::AddAtoms(unsigned long, short, unsigned char *, unsigned long) {
    /*
        2d5e64:	e1a0c00d 	mov	ip, sp
        2d5e68:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2d5e6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d5e70:	e1a04000 	mov	r4, r0
        2d5e74:	e1a06001 	mov	r6, r1
        2d5e78:	e1a05003 	mov	r5, r3
        2d5e7c:	e1a08802 	mov	r8, r2, lsl #16
        2d5e80:	e1a08848 	mov	r8, r8, asr #16
        2d5e84:	e59b7004 	ldr	r7, [fp, #4]	; fField4
        2d5e88:	e5b01258 	ldr	r1, [r0, #600]!
        2d5e8c:	e1a0e00f 	mov	lr, pc
        2d5e90:	e281f03c 	add	pc, r1, #60	; 0x3c
        2d5e94:	e2600077 	rsb	r0, r0, #119	; 0x77
        2d5e98:	e2871003 	add	r1, r7, #3	; 0x3
        2d5e9c:	e1500001 	cmp	r0, r1
        2d5ea0:	2a000006 	bcs	2d5ec0 <TEWorldClient::AddAtoms(unsigned long, short, unsigned char *, unsigned long)+0x5c>
        2d5ea4:	e3570008 	cmp	r7, #8	; 0x8
        2d5ea8:	8a00000c 	bhi	2d5ee0 <TEWorldClient::AddAtoms(unsigned long, short, unsigned char *, unsigned long)+0x7c>
        2d5eac:	e1a00004 	mov	r0, r4
        2d5eb0:	eb5fb4b4 	bl	1ac3188 <TEWorldClient::$SendP3Buffer(void)>
        2d5eb4:	e58402a8 	str	r0, [r4, #680]	; fField680
        2d5eb8:	e1a00004 	mov	r0, r4
        2d5ebc:	eb5fb093 	bl	1ac2110 <TEWorldClient::$InitBuffer(void)>
        2d5ec0:	e1a03007 	mov	r3, r7
        2d5ec4:	e92d0008 	stmdb	sp!, {r3}
        2d5ec8:	e1a03005 	mov	r3, r5
        2d5ecc:	e1a02008 	mov	r2, r8
        2d5ed0:	e1a01006 	mov	r1, r6
        2d5ed4:	e1a00004 	mov	r0, r4
        2d5ed8:	eb5fa41d 	bl	1abef54 <TEWorldClient::$AddNormalAtom(unsigned long, short, unsigned char *, unsigned long)>
        2d5edc:	ea000006 	b	2d5efc <TEWorldClient::AddAtoms(unsigned long, short, unsigned char *, unsigned long)+0x98>
        2d5ee0:	e1a03007 	mov	r3, r7
        2d5ee4:	e92d0008 	stmdb	sp!, {r3}
        2d5ee8:	e1a03005 	mov	r3, r5
        2d5eec:	e1a02008 	mov	r2, r8
        2d5ef0:	e1a01006 	mov	r1, r6
        2d5ef4:	e1a00004 	mov	r0, r4
        2d5ef8:	eb5fa414 	bl	1abef50 <TEWorldClient::$AddLargeAtom(unsigned long, short, unsigned char *, unsigned long)>
        2d5efc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::AddNormalAtom(unsigned long, short, unsigned char *, unsigned long)
 * Address: 002d5f00
 */
TEWorldClient::AddNormalAtom(unsigned long, short, unsigned char *, unsigned long) {
    /*
        2d5f00:	e1a0c00d 	mov	ip, sp
        2d5f04:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d5f08:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d5f0c:	e1a04003 	mov	r4, r3
        2d5f10:	e1a07802 	mov	r7, r2, lsl #16
        2d5f14:	e1a07847 	mov	r7, r7, asr #16
        2d5f18:	e331007f 	teq	r1, #127	; 0x7f
        2d5f1c:	e59b6004 	ldr	r6, [fp, #4]	; fField4
        2d5f20:	1201101f 	andne	r1, r1, #31	; 0x1f
        2d5f24:	03a01000 	moveq	r1, #0	; 0x0
        2d5f28:	e2802f96 	add	r2, r0, #600	; 0x258
        2d5f2c:	e1a05002 	mov	r5, r2
        2d5f30:	e201101f 	and	r1, r1, #31	; 0x1f
        2d5f34:	e1a00002 	mov	r0, r2
        2d5f38:	e5922000 	ldr	r2, [r2]
        2d5f3c:	e1a0e00f 	mov	lr, pc
        2d5f40:	e282f01c 	add	pc, r2, #28	; 0x1c
        2d5f44:	e20710ff 	and	r1, r7, #255	; 0xff
        2d5f48:	e1a00005 	mov	r0, r5
        2d5f4c:	e5952000 	ldr	r2, [r5]
        2d5f50:	e1a0e00f 	mov	lr, pc
        2d5f54:	e282f01c 	add	pc, r2, #28	; 0x1c
        2d5f58:	e20610ff 	and	r1, r6, #255	; 0xff
        2d5f5c:	e1a00005 	mov	r0, r5
        2d5f60:	e5952000 	ldr	r2, [r5]
        2d5f64:	e1a0e00f 	mov	lr, pc
        2d5f68:	e282f01c 	add	pc, r2, #28	; 0x1c
        2d5f6c:	e3360000 	teq	r6, #0	; 0x0
        2d5f70:	0a000005 	beq	2d5f8c <TEWorldClient::AddNormalAtom(unsigned long, short, unsigned char *, unsigned long)+0x8c>
        2d5f74:	e1a02006 	mov	r2, r6
        2d5f78:	e1a01004 	mov	r1, r4
        2d5f7c:	e1a00005 	mov	r0, r5
        2d5f80:	e5953000 	ldr	r3, [r5]
        2d5f84:	e1a0e00f 	mov	lr, pc
        2d5f88:	e283f020 	add	pc, r3, #32	; 0x20
        2d5f8c:	e3a00001 	mov	r0, #1	; 0x1
        2d5f90:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::AddLargeAtom(unsigned long, short, unsigned char *, unsigned long)
 * Address: 002d5f94
 */
TEWorldClient::AddLargeAtom(unsigned long, short, unsigned char *, unsigned long) {
    /*
        2d5f94:	e1a0c00d 	mov	ip, sp
        2d5f98:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2d5f9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d5fa0:	e1a04000 	mov	r4, r0
        2d5fa4:	e1a06001 	mov	r6, r1
        2d5fa8:	e1a05003 	mov	r5, r3
        2d5fac:	e1a0a802 	mov	sl, r2, lsl #16
        2d5fb0:	e1a0a84a 	mov	sl, sl, asr #16
        2d5fb4:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        2d5fb8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d5fbc:	e2800f96 	add	r0, r0, #600	; 0x258
        2d5fc0:	e1a07000 	mov	r7, r0
        2d5fc4:	e5901000 	ldr	r1, [r0]
        2d5fc8:	e1a0e00f 	mov	lr, pc
        2d5fcc:	e281f03c 	add	pc, r1, #60	; 0x3c
        2d5fd0:	e3a09077 	mov	r9, #119	; 0x77
        2d5fd4:	e0490000 	sub	r0, r9, r0
        2d5fd8:	e3500008 	cmp	r0, #8	; 0x8
        2d5fdc:	aa000004 	bge	2d5ff4 <TEWorldClient::AddLargeAtom(unsigned long, short, unsigned char *, unsigned long)+0x60>
        2d5fe0:	e1a00004 	mov	r0, r4
        2d5fe4:	eb5fb467 	bl	1ac3188 <TEWorldClient::$SendP3Buffer(void)>
        2d5fe8:	e58402a8 	str	r0, [r4, #680]	; fField680
        2d5fec:	e1a00004 	mov	r0, r4
        2d5ff0:	eb5fb046 	bl	1ac2110 <TEWorldClient::$InitBuffer(void)>
        2d5ff4:	e5cd6000 	strb	r6, [sp]
        2d5ff8:	e5cda001 	strb	sl, [sp, #1]	; fField1
        2d5ffc:	e3a03002 	mov	r3, #2	; 0x2
        2d6000:	e92d0008 	stmdb	sp!, {r3}
        2d6004:	e28d3004 	add	r3, sp, #4	; 0x4
        2d6008:	e1a00004 	mov	r0, r4
        2d600c:	e3a02004 	mov	r2, #4	; 0x4
        2d6010:	e3a01000 	mov	r1, #0	; 0x0
        2d6014:	eb5fa3ce 	bl	1abef54 <TEWorldClient::$AddNormalAtom(unsigned long, short, unsigned char *, unsigned long)>
        2d6018:	e28dd004 	add	sp, sp, #4	; 0x4
        2d601c:	e1a00007 	mov	r0, r7
        2d6020:	e5971000 	ldr	r1, [r7]
        2d6024:	e1a0e00f 	mov	lr, pc
        2d6028:	e281f03c 	add	pc, r1, #60	; 0x3c
        2d602c:	e0490000 	sub	r0, r9, r0
        2d6030:	e350000b 	cmp	r0, #11	; 0xb
        2d6034:	aa000004 	bge	2d604c <TEWorldClient::AddLargeAtom(unsigned long, short, unsigned char *, unsigned long)+0xb8>
        2d6038:	e1a00004 	mov	r0, r4
        2d603c:	eb5fb451 	bl	1ac3188 <TEWorldClient::$SendP3Buffer(void)>
        2d6040:	e58402a8 	str	r0, [r4, #680]	; fField680
        2d6044:	e1a00004 	mov	r0, r4
        2d6048:	eb5fb030 	bl	1ac2110 <TEWorldClient::$InitBuffer(void)>
        2d604c:	e1a00007 	mov	r0, r7
        2d6050:	e5971000 	ldr	r1, [r7]
        2d6054:	e1a0e00f 	mov	lr, pc
        2d6058:	e281f03c 	add	pc, r1, #60	; 0x3c
        2d605c:	e0490000 	sub	r0, r9, r0
        2d6060:	e2406003 	sub	r6, r0, #3	; 0x3
        2d6064:	e1560008 	cmp	r6, r8
        2d6068:	3a000008 	bcc	2d6090 <TEWorldClient::AddLargeAtom(unsigned long, short, unsigned char *, unsigned long)+0xfc>
        2d606c:	e1a03008 	mov	r3, r8
        2d6070:	e92d0008 	stmdb	sp!, {r3}
        2d6074:	e1a03005 	mov	r3, r5
        2d6078:	e1a00004 	mov	r0, r4
        2d607c:	e3a02006 	mov	r2, #6	; 0x6
        2d6080:	e3a01000 	mov	r1, #0	; 0x0
        2d6084:	eb5fa3b2 	bl	1abef54 <TEWorldClient::$AddNormalAtom(unsigned long, short, unsigned char *, unsigned long)>
        2d6088:	e28dd004 	add	sp, sp, #4	; 0x4
        2d608c:	ea000018 	b	2d60f4 <TEWorldClient::AddLargeAtom(unsigned long, short, unsigned char *, unsigned long)+0x160>
        2d6090:	e1a03006 	mov	r3, r6
        2d6094:	e92d0008 	stmdb	sp!, {r3}
        2d6098:	e1a03005 	mov	r3, r5
        2d609c:	e1a00004 	mov	r0, r4
        2d60a0:	e3a02005 	mov	r2, #5	; 0x5
        2d60a4:	e3a01000 	mov	r1, #0	; 0x0
        2d60a8:	eb5fa3a9 	bl	1abef54 <TEWorldClient::$AddNormalAtom(unsigned long, short, unsigned char *, unsigned long)>
        2d60ac:	e28dd004 	add	sp, sp, #4	; 0x4
        2d60b0:	e0855006 	add	r5, r5, r6
        2d60b4:	e0488006 	sub	r8, r8, r6
        2d60b8:	e1a00004 	mov	r0, r4
        2d60bc:	eb5fb431 	bl	1ac3188 <TEWorldClient::$SendP3Buffer(void)>
        2d60c0:	e58402a8 	str	r0, [r4, #680]	; fField680
        2d60c4:	e1a00004 	mov	r0, r4
        2d60c8:	eb5fb010 	bl	1ac2110 <TEWorldClient::$InitBuffer(void)>
        2d60cc:	e1a00007 	mov	r0, r7
        2d60d0:	e5971000 	ldr	r1, [r7]
        2d60d4:	e1a0e00f 	mov	lr, pc
        2d60d8:	e281f03c 	add	pc, r1, #60	; 0x3c
        2d60dc:	e0490000 	sub	r0, r9, r0
        2d60e0:	e2406003 	sub	r6, r0, #3	; 0x3
        2d60e4:	e59402a8 	ldr	r0, [r4, #680]	; fField680
        2d60e8:	e3300000 	teq	r0, #0	; 0x0
        2d60ec:	0affffdc 	beq	2d6064 <TEWorldClient::AddLargeAtom(unsigned long, short, unsigned char *, unsigned long)+0xd0>
        2d60f0:	e3a00001 	mov	r0, #1	; 0x1
        2d60f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::GetLongValue(unsigned char *, unsigned long)
 * Address: 002d60f8
 */
TEWorldClient::GetLongValue(unsigned char *, unsigned long) {
    /*
        2d60f8:	e1a0c00d 	mov	ip, sp
        2d60fc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2d6100:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d6104:	e3a00000 	mov	r0, #0	; 0x0
        2d6108:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2d610c:	e2620004 	rsb	r0, r2, #4	; 0x4
        2d6110:	e080300d 	add	r3, r0, sp
        2d6114:	e1a00001 	mov	r0, r1
        2d6118:	e1a01003 	mov	r1, r3
        2d611c:	eb64238c 	bl	1bdef54 <$BlockMove>
        2d6120:	e49d0004 	ldr	r0, [sp], #4	; fField4
        2d6124:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::EncodeTextCR(char *)
 * Address: 002d6128
 */
TEWorldClient::EncodeTextCR(char *) {
    /*
        2d6128:	e3310000 	teq	r1, #0	; 0x0
        2d612c:	01a0f00e 	moveq	pc, lr
        2d6130:	e5d10000 	ldrb	r0, [r1]
        2d6134:	e3300000 	teq	r0, #0	; 0x0
        2d6138:	01a0f00e 	moveq	pc, lr
        2d613c:	e3a0007f 	mov	r0, #127	; 0x7f
        2d6140:	e5d12000 	ldrb	r2, [r1]
        2d6144:	e332000d 	teq	r2, #13	; 0xd
        2d6148:	05c10000 	streqb	r0, [r1]
        2d614c:	e5f12001 	ldrb	r2, [r1, #1]!	; fField1
        2d6150:	e3320000 	teq	r2, #0	; 0x0
        2d6154:	1afffff9 	bne	2d6140 <TEWorldClient::EncodeTextCR(char *)+0x18>
        2d6158:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEWorldClient::DecodeTextCR(char *)
 * Address: 002d615c
 */
TEWorldClient::DecodeTextCR(char *) {
    /*
        2d615c:	e3310000 	teq	r1, #0	; 0x0
        2d6160:	01a0f00e 	moveq	pc, lr
        2d6164:	e5d10000 	ldrb	r0, [r1]
        2d6168:	e3300000 	teq	r0, #0	; 0x0
        2d616c:	01a0f00e 	moveq	pc, lr
        2d6170:	e3a0000d 	mov	r0, #13	; 0xd
        2d6174:	e5d12000 	ldrb	r2, [r1]
        2d6178:	e332007f 	teq	r2, #127	; 0x7f
        2d617c:	05c10000 	streqb	r0, [r1]
        2d6180:	e5f12001 	ldrb	r2, [r1, #1]!	; fField1
        2d6184:	e3320000 	teq	r2, #0	; 0x0
        2d6188:	1afffff9 	bne	2d6174 <TEWorldClient::DecodeTextCR(char *)+0x18>
        2d618c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEWorldClient::DoOutput(RefVar const &, RefVar const &)
 * Address: 002d6190
 */
TEWorldClient::DoOutput(RefVar const &, RefVar const &) {
    /*
        2d6190:	e1a0c00d 	mov	ip, sp
        2d6194:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2d6198:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d619c:	e1a06000 	mov	r6, r0
        2d61a0:	e1a04001 	mov	r4, r1
        2d61a4:	e1a07002 	mov	r7, r2
        2d61a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d61ac:	e1a00001 	mov	r0, r1
        2d61b0:	eb63bc39 	bl	1bc529c <$IsString(RefVar const &)>
        2d61b4:	e3a09000 	mov	r9, #0	; 0x0
        2d61b8:	e2865f96 	add	r5, r6, #600	; 0x258
        2d61bc:	e3300000 	teq	r0, #0	; 0x0
        2d61c0:	0a000034 	beq	2d6298 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x108>
        2d61c4:	e59f0060 	ldr	r0, [pc, #60]	; 2d622c <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x9c>
        2d61c8:	e5900000 	ldr	r0, [r0]
        2d61cc:	e5901000 	ldr	r1, [r0]
        2d61d0:	e5970000 	ldr	r0, [r7]
        2d61d4:	e5900000 	ldr	r0, [r0]
        2d61d8:	eb63b814 	bl	1bc4230 <$EQRef__FlT1>
        2d61dc:	e3300000 	teq	r0, #0	; 0x0
        2d61e0:	0a000012 	beq	2d6230 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0xa0>
        2d61e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d61e8:	e1a01004 	mov	r1, r4
        2d61ec:	e1a0000d 	mov	r0, sp
        2d61f0:	eb63abb8 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        2d61f4:	e1a0000d 	mov	r0, sp
        2d61f8:	eb63afc5 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        2d61fc:	e1a04000 	mov	r4, r0
        2d6200:	eb646156 	bl	1bee760 <$Ustrlen>
        2d6204:	e1a02000 	mov	r2, r0
        2d6208:	e1a01004 	mov	r1, r4
        2d620c:	e1a00005 	mov	r0, r5
        2d6210:	e5953000 	ldr	r3, [r5]
        2d6214:	e1a0e00f 	mov	lr, pc
        2d6218:	e283f020 	add	pc, r3, #32	; 0x20
        2d621c:	e1a0000d 	mov	r0, sp
        2d6220:	e3a01000 	mov	r1, #0	; 0x0
        2d6224:	eb63afb5 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d6228:	ea000057 	b	2d638c <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x1fc>
        2d622c:	00684d08 	rsbeq	r4, r8, r8, lsl #26
        2d6230:	e1a0200d 	mov	r2, sp
        2d6234:	e1a01004 	mov	r1, r4
        2d6238:	e1a00006 	mov	r0, r6
        2d623c:	eb5fa346 	bl	1abef5c <TEWorldClient::$AsciiString(RefVar const &, unsigned long *)>
        2d6240:	e1b04000 	movs	r4, r0
        2d6244:	0a00008c 	beq	2d647c <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x2ec>
        2d6248:	e59f0044 	ldr	r0, [pc, #44]	; 2d6294 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x104>
        2d624c:	e5900000 	ldr	r0, [r0]
        2d6250:	e5901000 	ldr	r1, [r0]
        2d6254:	e5970000 	ldr	r0, [r7]
        2d6258:	e5900000 	ldr	r0, [r0]
        2d625c:	eb63b7f3 	bl	1bc4230 <$EQRef__FlT1>
        2d6260:	e3300000 	teq	r0, #0	; 0x0
        2d6264:	11a01004 	movne	r1, r4
        2d6268:	11a00006 	movne	r0, r6
        2d626c:	1b5fa762 	blne	1abfffc <TEWorldClient::$EncodeTextCR(char *)>
        2d6270:	e1a01004 	mov	r1, r4
        2d6274:	e1a00005 	mov	r0, r5
        2d6278:	e59d2000 	ldr	r2, [sp]
        2d627c:	e5953000 	ldr	r3, [r5]
        2d6280:	e1a0e00f 	mov	lr, pc
        2d6284:	e283f020 	add	pc, r3, #32	; 0x20
        2d6288:	e1a00004 	mov	r0, r4
        2d628c:	eb642b88 	bl	1be10b4 <$DisposPtr>
        2d6290:	ea000079 	b	2d647c <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x2ec>
        2d6294:	00682b48 	rsbeq	r2, r8, r8, asr #22
        2d6298:	e5940000 	ldr	r0, [r4]
        2d629c:	e5900000 	ldr	r0, [r0]
        2d62a0:	e1a01000 	mov	r1, r0
        2d62a4:	e2000003 	and	r0, r0, #3	; 0x3
        2d62a8:	e3300002 	teq	r0, #2	; 0x2
        2d62ac:	03a03003 	moveq	r3, #3	; 0x3
        2d62b0:	00032141 	andeq	r2, r3, r1, asr #2
        2d62b4:	03320001 	teqeq	r2, #1	; 0x1
        2d62b8:	1a00000e 	bne	2d62f8 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x168>
        2d62bc:	e3300002 	teq	r0, #2	; 0x2
        2d62c0:	03320001 	teqeq	r2, #1	; 0x1
        2d62c4:	01a00141 	moveq	r0, r1, asr #2
        2d62c8:	01a00140 	moveq	r0, r0, asr #2
        2d62cc:	01a00800 	moveq	r0, r0, lsl #16
        2d62d0:	01a00820 	moveq	r0, r0, lsr #16
        2d62d4:	0a000001 	beq	2d62e0 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x150>
        2d62d8:	e1a00001 	mov	r0, r1
        2d62dc:	eb63af8d 	bl	1bc2118 <$_RCHARError(long)>
        2d62e0:	e1a00800 	mov	r0, r0, lsl #16
        2d62e4:	e1a00820 	mov	r0, r0, lsr #16
        2d62e8:	e5b6101c 	ldr	r1, [r6, #28]!
        2d62ec:	eb5fa31e 	bl	1abef6c <$CharacterToUByte(unsigned short, long)>
        2d62f0:	e1a01000 	mov	r1, r0
        2d62f4:	ea000010 	b	2d633c <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x1ac>
        2d62f8:	e3300000 	teq	r0, #0	; 0x0
        2d62fc:	1a000024 	bne	2d6394 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x204>
        2d6300:	e59f0048 	ldr	r0, [pc, #48]	; 2d6350 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x1c0>
        2d6304:	e5900000 	ldr	r0, [r0]
        2d6308:	e5901000 	ldr	r1, [r0]
        2d630c:	e5970000 	ldr	r0, [r7]
        2d6310:	e5900000 	ldr	r0, [r0]
        2d6314:	eb63b7c5 	bl	1bc4230 <$EQRef__FlT1>
        2d6318:	e3300000 	teq	r0, #0	; 0x0
        2d631c:	0a00000c 	beq	2d6354 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x1c4>
        2d6320:	e5940000 	ldr	r0, [r4]
        2d6324:	e5900000 	ldr	r0, [r0]
        2d6328:	e3100003 	tst	r0, #3	; 0x3
        2d632c:	01a00140 	moveq	r0, r0, asr #2
        2d6330:	0a000000 	beq	2d6338 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x1a8>
        2d6334:	eb63af78 	bl	1bc211c <$_RINTError(long)>
        2d6338:	e20010ff 	and	r1, r0, #255	; 0xff
        2d633c:	e1a00005 	mov	r0, r5
        2d6340:	e5952000 	ldr	r2, [r5]
        2d6344:	e1a0e00f 	mov	lr, pc
        2d6348:	e282f01c 	add	pc, r2, #28	; 0x1c
        2d634c:	ea00004a 	b	2d647c <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x2ec>
        2d6350:	00682248 	rsbeq	r2, r8, r8, asr #4
        2d6354:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d6358:	e5940000 	ldr	r0, [r4]
        2d635c:	e5900000 	ldr	r0, [r0]
        2d6360:	e3100003 	tst	r0, #3	; 0x3
        2d6364:	01a00140 	moveq	r0, r0, asr #2
        2d6368:	0a000000 	beq	2d6370 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x1e0>
        2d636c:	eb63af6a 	bl	1bc211c <$_RINTError(long)>
        2d6370:	e58d0000 	str	r0, [sp]
        2d6374:	e1a0100d 	mov	r1, sp
        2d6378:	e1a00005 	mov	r0, r5
        2d637c:	e3a02004 	mov	r2, #4	; 0x4
        2d6380:	e5953000 	ldr	r3, [r5]
        2d6384:	e1a0e00f 	mov	lr, pc
        2d6388:	e283f020 	add	pc, r3, #32	; 0x20
        2d638c:	e28dd004 	add	sp, sp, #4	; 0x4
        2d6390:	ea000039 	b	2d647c <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x2ec>
        2d6394:	e1a00004 	mov	r0, r4
        2d6398:	eb64757b 	bl	1bf398c <$IsArray(RefVar const &)>
        2d639c:	e3300000 	teq	r0, #0	; 0x0
        2d63a0:	0a00001e 	beq	2d6420 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x290>
        2d63a4:	e5940000 	ldr	r0, [r4]
        2d63a8:	e5900000 	ldr	r0, [r0]
        2d63ac:	eb63bbbe 	bl	1bc52ac <$Length(long)>
        2d63b0:	e1a08000 	mov	r8, r0
        2d63b4:	e3a06000 	mov	r6, #0	; 0x0
        2d63b8:	e3500000 	cmp	r0, #0	; 0x0
        2d63bc:	9a00002e 	bls	2d647c <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x2ec>
        2d63c0:	e1a01006 	mov	r1, r6
        2d63c4:	e5940000 	ldr	r0, [r4]
        2d63c8:	e5900000 	ldr	r0, [r0]
        2d63cc:	eb63b7a0 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d63d0:	e3100003 	tst	r0, #3	; 0x3
        2d63d4:	1a00000d 	bne	2d6410 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x280>
        2d63d8:	e1a07005 	mov	r7, r5
        2d63dc:	e1a01006 	mov	r1, r6
        2d63e0:	e5940000 	ldr	r0, [r4]
        2d63e4:	e5900000 	ldr	r0, [r0]
        2d63e8:	eb63b799 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d63ec:	e3100003 	tst	r0, #3	; 0x3
        2d63f0:	01a00140 	moveq	r0, r0, asr #2
        2d63f4:	0a000000 	beq	2d63fc <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x26c>
        2d63f8:	eb63af47 	bl	1bc211c <$_RINTError(long)>
        2d63fc:	e1a01000 	mov	r1, r0
        2d6400:	e1a00007 	mov	r0, r7
        2d6404:	e5972000 	ldr	r2, [r7]
        2d6408:	e1a0e00f 	mov	lr, pc
        2d640c:	e282f01c 	add	pc, r2, #28	; 0x1c
        2d6410:	e2866001 	add	r6, r6, #1	; 0x1
        2d6414:	e1560008 	cmp	r6, r8
        2d6418:	3affffe8 	bcc	2d63c0 <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x230>
        2d641c:	ea000016 	b	2d647c <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x2ec>
        2d6420:	e1a00004 	mov	r0, r4
        2d6424:	eb5f124c 	bl	1a9ad5c <$IsRawBinary(RefVar const &)>
        2d6428:	e3300000 	teq	r0, #0	; 0x0
        2d642c:	0a000012 	beq	2d647c <TEWorldClient::DoOutput(RefVar const &, RefVar const &)+0x2ec>
        2d6430:	e5940000 	ldr	r0, [r4]
        2d6434:	e5900000 	ldr	r0, [r0]
        2d6438:	eb63bb9b 	bl	1bc52ac <$Length(long)>
        2d643c:	e58d0000 	str	r0, [sp]
        2d6440:	e5940000 	ldr	r0, [r4]
        2d6444:	e5900000 	ldr	r0, [r0]
        2d6448:	eb63bb99 	bl	1bc52b4 <$LockRef(long)>
        2d644c:	e5940000 	ldr	r0, [r4]
        2d6450:	e5900000 	ldr	r0, [r0]
        2d6454:	eb63af40 	bl	1bc215c <$BinaryData(long)>
        2d6458:	e1a01000 	mov	r1, r0
        2d645c:	e1a00005 	mov	r0, r5
        2d6460:	e59d2000 	ldr	r2, [sp]
        2d6464:	e5953000 	ldr	r3, [r5]
        2d6468:	e1a0e00f 	mov	lr, pc
        2d646c:	e283f020 	add	pc, r3, #32	; 0x20
        2d6470:	e5940000 	ldr	r0, [r4]
        2d6474:	e5900000 	ldr	r0, [r0]
        2d6478:	eb63c7fc 	bl	1bc8470 <$UnlockRef(long)>
        2d647c:	e1a00009 	mov	r0, r9
        2d6480:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)
 * Address: 002d6484
 */
TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &) {
    /*
        2d6484:	e1a0c00d 	mov	ip, sp
        2d6488:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2d648c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d6490:	e1a05000 	mov	r5, r0
        2d6494:	e1a06002 	mov	r6, r2
        2d6498:	e1a04003 	mov	r4, r3
        2d649c:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        2d64a0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d64a4:	e5910000 	ldr	r0, [r1]
        2d64a8:	e5900000 	ldr	r0, [r0]
        2d64ac:	e3100003 	tst	r0, #3	; 0x3
        2d64b0:	01a00140 	moveq	r0, r0, asr #2
        2d64b4:	0a000000 	beq	2d64bc <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x38>
        2d64b8:	eb63af17 	bl	1bc211c <$_RINTError(long)>
        2d64bc:	e1a07000 	mov	r7, r0
        2d64c0:	e5960000 	ldr	r0, [r6]
        2d64c4:	e5900000 	ldr	r0, [r0]
        2d64c8:	e3100003 	tst	r0, #3	; 0x3
        2d64cc:	01a00140 	moveq	r0, r0, asr #2
        2d64d0:	0a000000 	beq	2d64d8 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x54>
        2d64d4:	eb63af10 	bl	1bc211c <$_RINTError(long)>
        2d64d8:	e1a06800 	mov	r6, r0, lsl #16
        2d64dc:	e1a06846 	mov	r6, r6, asr #16
        2d64e0:	e5940000 	ldr	r0, [r4]
        2d64e4:	e5900000 	ldr	r0, [r0]
        2d64e8:	e3300002 	teq	r0, #2	; 0x2
        2d64ec:	1a000005 	bne	2d6508 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x84>
        2d64f0:	e3a03000 	mov	r3, #0	; 0x0
        2d64f4:	e92d0008 	stmdb	sp!, {r3}
        2d64f8:	e1a02006 	mov	r2, r6
        2d64fc:	e1a01007 	mov	r1, r7
        2d6500:	e1a00005 	mov	r0, r5
        2d6504:	ea000069 	b	2d66b0 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x22c>
        2d6508:	e1a00004 	mov	r0, r4
        2d650c:	eb63bb62 	bl	1bc529c <$IsString(RefVar const &)>
        2d6510:	e3300000 	teq	r0, #0	; 0x0
        2d6514:	0a000037 	beq	2d65f8 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x174>
        2d6518:	e59f0068 	ldr	r0, [pc, #68]	; 2d6588 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x104>
        2d651c:	e5900000 	ldr	r0, [r0]
        2d6520:	e5901000 	ldr	r1, [r0]
        2d6524:	e5980000 	ldr	r0, [r8]
        2d6528:	e5900000 	ldr	r0, [r0]
        2d652c:	eb63b73f 	bl	1bc4230 <$EQRef__FlT1>
        2d6530:	e3300000 	teq	r0, #0	; 0x0
        2d6534:	0a000014 	beq	2d658c <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x108>
        2d6538:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d653c:	e1a01004 	mov	r1, r4
        2d6540:	e1a0000d 	mov	r0, sp
        2d6544:	eb63aae3 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        2d6548:	e1a0000d 	mov	r0, sp
        2d654c:	eb63aef0 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        2d6550:	e1a04000 	mov	r4, r0
        2d6554:	eb646081 	bl	1bee760 <$Ustrlen>
        2d6558:	e1a03000 	mov	r3, r0
        2d655c:	e92d0008 	stmdb	sp!, {r3}
        2d6560:	e1a03004 	mov	r3, r4
        2d6564:	e1a02006 	mov	r2, r6
        2d6568:	e1a01007 	mov	r1, r7
        2d656c:	e1a00005 	mov	r0, r5
        2d6570:	eb5fa275 	bl	1abef4c <TEWorldClient::$AddAtoms(unsigned long, short, unsigned char *, unsigned long)>
        2d6574:	e28dd004 	add	sp, sp, #4	; 0x4
        2d6578:	e1a0000d 	mov	r0, sp
        2d657c:	e3a01000 	mov	r1, #0	; 0x0
        2d6580:	eb63aede 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d6584:	ea00005c 	b	2d66fc <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x278>
        2d6588:	00684d08 	rsbeq	r4, r8, r8, lsl #26
        2d658c:	e28d2004 	add	r2, sp, #4	; 0x4
        2d6590:	e1a01004 	mov	r1, r4
        2d6594:	e1a00005 	mov	r0, r5
        2d6598:	eb5fa26f 	bl	1abef5c <TEWorldClient::$AsciiString(RefVar const &, unsigned long *)>
        2d659c:	e1b04000 	movs	r4, r0
        2d65a0:	0a00009b 	beq	2d6814 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x390>
        2d65a4:	e59f0048 	ldr	r0, [pc, #48]	; 2d65f4 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x170>
        2d65a8:	e5900000 	ldr	r0, [r0]
        2d65ac:	e5901000 	ldr	r1, [r0]
        2d65b0:	e5980000 	ldr	r0, [r8]
        2d65b4:	e5900000 	ldr	r0, [r0]
        2d65b8:	eb63b71c 	bl	1bc4230 <$EQRef__FlT1>
        2d65bc:	e3300000 	teq	r0, #0	; 0x0
        2d65c0:	11a01004 	movne	r1, r4
        2d65c4:	11a00005 	movne	r0, r5
        2d65c8:	1b5fa68b 	blne	1abfffc <TEWorldClient::$EncodeTextCR(char *)>
        2d65cc:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        2d65d0:	e92d0008 	stmdb	sp!, {r3}
        2d65d4:	e1a03004 	mov	r3, r4
        2d65d8:	e1a02006 	mov	r2, r6
        2d65dc:	e1a01007 	mov	r1, r7
        2d65e0:	e1a00005 	mov	r0, r5
        2d65e4:	eb5fa258 	bl	1abef4c <TEWorldClient::$AddAtoms(unsigned long, short, unsigned char *, unsigned long)>
        2d65e8:	e28dd004 	add	sp, sp, #4	; 0x4
        2d65ec:	e1a00004 	mov	r0, r4
        2d65f0:	ea00006c 	b	2d67a8 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x324>
        2d65f4:	00682b48 	rsbeq	r2, r8, r8, asr #22
        2d65f8:	e5940000 	ldr	r0, [r4]
        2d65fc:	e5900000 	ldr	r0, [r0]
        2d6600:	e1a01000 	mov	r1, r0
        2d6604:	e2000003 	and	r0, r0, #3	; 0x3
        2d6608:	e3300002 	teq	r0, #2	; 0x2
        2d660c:	03a03003 	moveq	r3, #3	; 0x3
        2d6610:	00032141 	andeq	r2, r3, r1, asr #2
        2d6614:	03320001 	teqeq	r2, #1	; 0x1
        2d6618:	1a00000d 	bne	2d6654 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1d0>
        2d661c:	e3300002 	teq	r0, #2	; 0x2
        2d6620:	03320001 	teqeq	r2, #1	; 0x1
        2d6624:	01a00141 	moveq	r0, r1, asr #2
        2d6628:	01a00140 	moveq	r0, r0, asr #2
        2d662c:	01a00800 	moveq	r0, r0, lsl #16
        2d6630:	01a00820 	moveq	r0, r0, lsr #16
        2d6634:	0a000001 	beq	2d6640 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1bc>
        2d6638:	e1a00001 	mov	r0, r1
        2d663c:	eb63aeb5 	bl	1bc2118 <$_RCHARError(long)>
        2d6640:	e1a00800 	mov	r0, r0, lsl #16
        2d6644:	e1a00820 	mov	r0, r0, lsr #16
        2d6648:	e595101c 	ldr	r1, [r5, #28]
        2d664c:	eb5fa246 	bl	1abef6c <$CharacterToUByte(unsigned short, long)>
        2d6650:	ea00000f 	b	2d6694 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x210>
        2d6654:	e3300000 	teq	r0, #0	; 0x0
        2d6658:	1a000029 	bne	2d6704 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x280>
        2d665c:	e59f0054 	ldr	r0, [pc, #54]	; 2d66b8 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x234>
        2d6660:	e5900000 	ldr	r0, [r0]
        2d6664:	e5901000 	ldr	r1, [r0]
        2d6668:	e5980000 	ldr	r0, [r8]
        2d666c:	e5900000 	ldr	r0, [r0]
        2d6670:	eb63b6ee 	bl	1bc4230 <$EQRef__FlT1>
        2d6674:	e3300000 	teq	r0, #0	; 0x0
        2d6678:	0a00000f 	beq	2d66bc <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x238>
        2d667c:	e5940000 	ldr	r0, [r4]
        2d6680:	e5900000 	ldr	r0, [r0]
        2d6684:	e3100003 	tst	r0, #3	; 0x3
        2d6688:	01a00140 	moveq	r0, r0, asr #2
        2d668c:	0a000000 	beq	2d6694 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x210>
        2d6690:	eb63aea1 	bl	1bc211c <$_RINTError(long)>
        2d6694:	e5cd0000 	strb	r0, [sp]
        2d6698:	e3a03001 	mov	r3, #1	; 0x1
        2d669c:	e92d0008 	stmdb	sp!, {r3}
        2d66a0:	e28d3004 	add	r3, sp, #4	; 0x4
        2d66a4:	e1a02006 	mov	r2, r6
        2d66a8:	e1a01007 	mov	r1, r7
        2d66ac:	e1a00005 	mov	r0, r5
        2d66b0:	eb5fa225 	bl	1abef4c <TEWorldClient::$AddAtoms(unsigned long, short, unsigned char *, unsigned long)>
        2d66b4:	ea000010 	b	2d66fc <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x278>
        2d66b8:	00682248 	rsbeq	r2, r8, r8, asr #4
        2d66bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d66c0:	e5940000 	ldr	r0, [r4]
        2d66c4:	e5900000 	ldr	r0, [r0]
        2d66c8:	e3100003 	tst	r0, #3	; 0x3
        2d66cc:	01a00140 	moveq	r0, r0, asr #2
        2d66d0:	0a000000 	beq	2d66d8 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x254>
        2d66d4:	eb63ae90 	bl	1bc211c <$_RINTError(long)>
        2d66d8:	e3a03004 	mov	r3, #4	; 0x4
        2d66dc:	e58d0000 	str	r0, [sp]
        2d66e0:	e92d0008 	stmdb	sp!, {r3}
        2d66e4:	e08d3003 	add	r3, sp, r3
        2d66e8:	e1a02006 	mov	r2, r6
        2d66ec:	e1a01007 	mov	r1, r7
        2d66f0:	e1a00005 	mov	r0, r5
        2d66f4:	eb5fa214 	bl	1abef4c <TEWorldClient::$AddAtoms(unsigned long, short, unsigned char *, unsigned long)>
        2d66f8:	e28dd004 	add	sp, sp, #4	; 0x4
        2d66fc:	e28dd004 	add	sp, sp, #4	; 0x4
        2d6700:	ea000043 	b	2d6814 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x390>
        2d6704:	e1a00004 	mov	r0, r4
        2d6708:	eb64749f 	bl	1bf398c <$IsArray(RefVar const &)>
        2d670c:	e3300000 	teq	r0, #0	; 0x0
        2d6710:	0a000026 	beq	2d67b0 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x32c>
        2d6714:	e5940000 	ldr	r0, [r4]
        2d6718:	e5900000 	ldr	r0, [r0]
        2d671c:	eb63bae2 	bl	1bc52ac <$Length(long)>
        2d6720:	e1a09000 	mov	r9, r0
        2d6724:	eb642e85 	bl	1be2140 <$NewPtr>
        2d6728:	e1b0a000 	movs	sl, r0
        2d672c:	0a000038 	beq	2d6814 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x390>
        2d6730:	e3a08000 	mov	r8, #0	; 0x0
        2d6734:	e3590000 	cmp	r9, #0	; 0x0
        2d6738:	9a000011 	bls	2d6784 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x300>
        2d673c:	e1a01008 	mov	r1, r8
        2d6740:	e5940000 	ldr	r0, [r4]
        2d6744:	e5900000 	ldr	r0, [r0]
        2d6748:	eb63b6c1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d674c:	e3100003 	tst	r0, #3	; 0x3
        2d6750:	1a000008 	bne	2d6778 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2f4>
        2d6754:	e1a01008 	mov	r1, r8
        2d6758:	e5940000 	ldr	r0, [r4]
        2d675c:	e5900000 	ldr	r0, [r0]
        2d6760:	eb63b6bb 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d6764:	e3100003 	tst	r0, #3	; 0x3
        2d6768:	01a00140 	moveq	r0, r0, asr #2
        2d676c:	0a000000 	beq	2d6774 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2f0>
        2d6770:	eb63ae69 	bl	1bc211c <$_RINTError(long)>
        2d6774:	e7ca0008 	strb	r0, [sl, r8]
        2d6778:	e2888001 	add	r8, r8, #1	; 0x1
        2d677c:	e1580009 	cmp	r8, r9
        2d6780:	3affffed 	bcc	2d673c <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x2b8>
        2d6784:	e1a03009 	mov	r3, r9
        2d6788:	e92d0008 	stmdb	sp!, {r3}
        2d678c:	e1a0300a 	mov	r3, sl
        2d6790:	e1a02006 	mov	r2, r6
        2d6794:	e1a01007 	mov	r1, r7
        2d6798:	e1a00005 	mov	r0, r5
        2d679c:	eb5fa1ea 	bl	1abef4c <TEWorldClient::$AddAtoms(unsigned long, short, unsigned char *, unsigned long)>
        2d67a0:	e28dd004 	add	sp, sp, #4	; 0x4
        2d67a4:	e1a0000a 	mov	r0, sl
        2d67a8:	eb642a41 	bl	1be10b4 <$DisposPtr>
        2d67ac:	ea000018 	b	2d6814 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x390>
        2d67b0:	e1a00004 	mov	r0, r4
        2d67b4:	eb5f1168 	bl	1a9ad5c <$IsRawBinary(RefVar const &)>
        2d67b8:	e3300000 	teq	r0, #0	; 0x0
        2d67bc:	0a000014 	beq	2d6814 <TEWorldClient::DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x390>
        2d67c0:	e5940000 	ldr	r0, [r4]
        2d67c4:	e5900000 	ldr	r0, [r0]
        2d67c8:	eb63bab7 	bl	1bc52ac <$Length(long)>
        2d67cc:	e58d0004 	str	r0, [sp, #4]	; fField4
        2d67d0:	e5940000 	ldr	r0, [r4]
        2d67d4:	e5900000 	ldr	r0, [r0]
        2d67d8:	eb63bab5 	bl	1bc52b4 <$LockRef(long)>
        2d67dc:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        2d67e0:	e92d0008 	stmdb	sp!, {r3}
        2d67e4:	e5940000 	ldr	r0, [r4]
        2d67e8:	e5900000 	ldr	r0, [r0]
        2d67ec:	eb63ae5a 	bl	1bc215c <$BinaryData(long)>
        2d67f0:	e1a03000 	mov	r3, r0
        2d67f4:	e1a02006 	mov	r2, r6
        2d67f8:	e1a01007 	mov	r1, r7
        2d67fc:	e1a00005 	mov	r0, r5
        2d6800:	eb5fa1d1 	bl	1abef4c <TEWorldClient::$AddAtoms(unsigned long, short, unsigned char *, unsigned long)>
        2d6804:	e28dd004 	add	sp, sp, #4	; 0x4
        2d6808:	e5940000 	ldr	r0, [r4]
        2d680c:	e5900000 	ldr	r0, [r0]
        2d6810:	eb63c716 	bl	1bc8470 <$UnlockRef(long)>
        2d6814:	e3a00000 	mov	r0, #0	; 0x0
        2d6818:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::ClearAtomizer(void)
 * Address: 002d681c
 */
TEWorldClient::ClearAtomizer(void) {
    /*
        2d681c:	e1a0c00d 	mov	ip, sp
        2d6820:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d6824:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d6828:	e1a04000 	mov	r4, r0
        2d682c:	e3a06000 	mov	r6, #0	; 0x0
        2d6830:	e5c062bc 	strb	r6, [r0, #700]	; fField700
        2d6834:	e58062c0 	str	r6, [r0, #704]	; fField704
        2d6838:	e58062c4 	str	r6, [r0, #708]	; fField708
        2d683c:	e3a05000 	mov	r5, #0	; 0x0
        2d6840:	e58062c8 	str	r6, [r0, #712]	; fField712
        2d6844:	e0840105 	add	r0, r4, r5, lsl #2
        2d6848:	e1a07000 	mov	r7, r0
        2d684c:	e58062d4 	str	r6, [r0, #724]
        2d6850:	e58062dc 	str	r6, [r0, #732]
        2d6854:	e58062e4 	str	r6, [r0, #740]
        2d6858:	e59002ec 	ldr	r0, [r0, #748]
        2d685c:	e3300000 	teq	r0, #0	; 0x0
        2d6860:	0a000001 	beq	2d686c <TEWorldClient::ClearAtomizer(void)+0x50>
        2d6864:	eb642a12 	bl	1be10b4 <$DisposPtr>
        2d6868:	e5a762ec 	str	r6, [r7, #748]!
        2d686c:	e2855001 	add	r5, r5, #1	; 0x1
        2d6870:	e3550002 	cmp	r5, #2	; 0x2
        2d6874:	3afffff2 	bcc	2d6844 <TEWorldClient::ClearAtomizer(void)+0x28>
        2d6878:	e58462f4 	str	r6, [r4, #756]	; fField756
        2d687c:	e58462f8 	str	r6, [r4, #760]	; fField760
        2d6880:	e58462fc 	str	r6, [r4, #764]	; fField764
        2d6884:	e5a46300 	str	r6, [r4, #768]!	; fField768
        2d6888:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::Default(TEndpointEvent *)
 * Address: 002d688c
 */
TEWorldClient::Default(TEndpointEvent *) {
    /*
        2d688c:	e5911014 	ldr	r1, [r1, #20]	; fField20
        2d6890:	e59fc00c 	ldr	ip, [pc, #c]	; 2d68a4 <TEWorldClient::Default(TEndpointEvent *)+0x18>
        2d6894:	e131000c 	teq	r1, ip
        2d6898:	03a01000 	moveq	r1, #0	; 0x0
        2d689c:	05c012ac 	streqb	r1, [r0, #684]	; fField684
        2d68a0:	e1a0f00e 	mov	pc, lr
        2d68a4:	70332020 	eorvcs	r2, r3, r0, lsr #32
    */
}

/**
 * Symbol: TEWorldClient::ProcessAtomStream(unsigned long, unsigned char *, unsigned long)
 * Address: 002d68a8
 */
TEWorldClient::ProcessAtomStream(unsigned long, unsigned char *, unsigned long) {
    /*
        2d68a8:	e1a0c00d 	mov	ip, sp
        2d68ac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d68b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d68b4:	e1a06000 	mov	r6, r0
        2d68b8:	e1a07001 	mov	r7, r1
        2d68bc:	e1a05002 	mov	r5, r2
        2d68c0:	e1a04003 	mov	r4, r3
        2d68c4:	e1a03001 	mov	r3, r1
        2d68c8:	e92d0008 	stmdb	sp!, {r3}
        2d68cc:	e1a02004 	mov	r2, r4
        2d68d0:	e1a01005 	mov	r1, r5
        2d68d4:	e3a03000 	mov	r3, #0	; 0x0
        2d68d8:	eb5fa9fa 	bl	1ac10c8 <TEWorldClient::$GetAtomBytes(unsigned char *, unsigned long, unsigned long, unsigned long)>
        2d68dc:	e28dd004 	add	sp, sp, #4	; 0x4
        2d68e0:	e0855007 	add	r5, r5, r7
        2d68e4:	e0444007 	sub	r4, r4, r7
        2d68e8:	e3300000 	teq	r0, #0	; 0x0
        2d68ec:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2d68f0:	e59612c0 	ldr	r1, [r6, #704]	; fField704
        2d68f4:	e1310000 	teq	r1, r0
        2d68f8:	0a000001 	beq	2d6904 <TEWorldClient::ProcessAtomStream(unsigned long, unsigned char *, unsigned long)+0x5c>
        2d68fc:	e3310000 	teq	r1, #0	; 0x0
        2d6900:	058602c0 	streq	r0, [r6, #704]	; fField704
        2d6904:	e1a02004 	mov	r2, r4
        2d6908:	e1a01005 	mov	r1, r5
        2d690c:	e1a00006 	mov	r0, r6
        2d6910:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2d6914:	ea5fa5a2 	b	1abffa4 <TEWorldClient::$DoAtomizerStream(unsigned char *, unsigned long)>
    */
}

/**
 * Symbol: TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)
 * Address: 002d6918
 */
TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long) {
    /*
        2d6918:	e1a0c00d 	mov	ip, sp
        2d691c:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2d6920:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d6924:	e1a04000 	mov	r4, r0
        2d6928:	e1a05001 	mov	r5, r1
        2d692c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2d6930:	e3a07000 	mov	r7, #0	; 0x0
        2d6934:	e2809fb3 	add	r9, r0, #716	; 0x2cc
        2d6938:	e3a00000 	mov	r0, #0	; 0x0
        2d693c:	e3a08000 	mov	r8, #0	; 0x0
        2d6940:	e58402cc 	str	r0, [r4, #716]	; fField716
        2d6944:	e3a06000 	mov	r6, #0	; 0x0
        2d6948:	e3a00001 	mov	r0, #1	; 0x1
        2d694c:	e58d6008 	str	r6, [sp, #8]
        2d6950:	e58d8000 	str	r8, [sp]
        2d6954:	ea00008b 	b	2d6b88 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x270>
        2d6958:	e7d51006 	ldrb	r1, [r5, r6]
        2d695c:	e1a002a1 	mov	r0, r1, lsr #5
        2d6960:	e201101f 	and	r1, r1, #31	; 0x1f
        2d6964:	e3500007 	cmp	r0, #7	; 0x7
        2d6968:	908ff100 	addls	pc, pc, r0, lsl #2
        2d696c:	ea000072 	b	2d6b3c <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x224>
        2d6970:	ea000012 	b	2d69c0 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0xa8>
        2d6974:	ea000026 	b	2d6a14 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0xfc>
        2d6978:	ea00002f 	b	2d6a3c <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x124>
        2d697c:	ea000044 	b	2d6a94 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x17c>
        2d6980:	ea00005f 	b	2d6b04 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x1ec>
        2d6984:	ea00004f 	b	2d6ac8 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x1b0>
        2d6988:	ea000055 	b	2d6ae4 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x1cc>
        2d698c:	e7d50006 	ldrb	r0, [r5, r6]
        2d6990:	e2001018 	and	r1, r0, #24	; 0x18
        2d6994:	e1a01101 	mov	r1, r1, lsl #2
        2d6998:	e58d1004 	str	r1, [sp, #4]	; fField4
        2d699c:	e2001006 	and	r1, r0, #6	; 0x6
        2d69a0:	e1a0a201 	mov	sl, r1, lsl #4
        2d69a4:	e2000001 	and	r0, r0, #1	; 0x1
        2d69a8:	e2866001 	add	r6, r6, #1	; 0x1
        2d69ac:	e3a08001 	mov	r8, #1	; 0x1
        2d69b0:	e58d0000 	str	r0, [sp]
        2d69b4:	e3a00000 	mov	r0, #0	; 0x0
        2d69b8:	e58d0008 	str	r0, [sp, #8]
        2d69bc:	ea000071 	b	2d6b88 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x270>
        2d69c0:	e0852006 	add	r2, r5, r6
        2d69c4:	e58412c4 	str	r1, [r4, #708]	; fField708
        2d69c8:	e5d20001 	ldrb	r0, [r2, #1]	; fField1
        2d69cc:	e3570080 	cmp	r7, #128	; 0x80
        2d69d0:	e58402c8 	str	r0, [r4, #712]	; fField712
        2d69d4:	35d27002 	ldrccb	r7, [r2, #2]	; fField2
        2d69d8:	32866003 	addcc	r6, r6, #3	; 0x3
        2d69dc:	3a000004 	bcc	2d69f4 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0xdc>
        2d69e0:	e5d23003 	ldrb	r3, [r2, #3]
        2d69e4:	e5d22002 	ldrb	r2, [r2, #2]	; fField2
        2d69e8:	e202207f 	and	r2, r2, #127	; 0x7f
        2d69ec:	e1837402 	orr	r7, r3, r2, lsl #8
        2d69f0:	e2866004 	add	r6, r6, #4	; 0x4
        2d69f4:	e3380000 	teq	r8, #0	; 0x0
        2d69f8:	0a000048 	beq	2d6b20 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x208>
        2d69fc:	e180000a 	orr	r0, r0, sl
        2d6a00:	e58402c8 	str	r0, [r4, #712]	; fField712
        2d6a04:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2d6a08:	e1810000 	orr	r0, r1, r0
        2d6a0c:	e58402c4 	str	r0, [r4, #708]	; fField708
        2d6a10:	ea000042 	b	2d6b20 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x208>
        2d6a14:	e0850006 	add	r0, r5, r6
        2d6a18:	e58412c4 	str	r1, [r4, #708]	; fField708
        2d6a1c:	e5d00001 	ldrb	r0, [r0, #1]	; fField1
        2d6a20:	e1a072a0 	mov	r7, r0, lsr #5
        2d6a24:	e200001f 	and	r0, r0, #31	; 0x1f
        2d6a28:	e2866002 	add	r6, r6, #2	; 0x2
        2d6a2c:	e3380000 	teq	r8, #0	; 0x0
        2d6a30:	e58402c8 	str	r0, [r4, #712]	; fField712
        2d6a34:	1afffff0 	bne	2d69fc <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0xe4>
        2d6a38:	ea000038 	b	2d6b20 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x208>
        2d6a3c:	e0850006 	add	r0, r5, r6
        2d6a40:	e58412c4 	str	r1, [r4, #708]	; fField708
        2d6a44:	e5d01001 	ldrb	r1, [r0, #1]	; fField1
        2d6a48:	e1a012a1 	mov	r1, r1, lsr #5
        2d6a4c:	e5c91000 	strb	r1, [r9]
        2d6a50:	e5d00001 	ldrb	r0, [r0, #1]	; fField1
        2d6a54:	e200001f 	and	r0, r0, #31	; 0x1f
        2d6a58:	e2866002 	add	r6, r6, #2	; 0x2
        2d6a5c:	e3380000 	teq	r8, #0	; 0x0
        2d6a60:	e58402c8 	str	r0, [r4, #712]	; fField712
        2d6a64:	0a000005 	beq	2d6a80 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x168>
        2d6a68:	e180000a 	orr	r0, r0, sl
        2d6a6c:	e58402c8 	str	r0, [r4, #712]	; fField712
        2d6a70:	e59402c4 	ldr	r0, [r4, #708]	; fField708
        2d6a74:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2d6a78:	e1800001 	orr	r0, r0, r1
        2d6a7c:	e58402c4 	str	r0, [r4, #708]	; fField708
        2d6a80:	e28d3008 	add	r3, sp, #8	; 0x8
        2d6a84:	e1a02009 	mov	r2, r9
        2d6a88:	e1a00004 	mov	r0, r4
        2d6a8c:	e3a01001 	mov	r1, #1	; 0x1
        2d6a90:	ea00000a 	b	2d6ac0 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x1a8>
        2d6a94:	e2866001 	add	r6, r6, #1	; 0x1
        2d6a98:	e3380000 	teq	r8, #0	; 0x0
        2d6a9c:	e58412c8 	str	r1, [r4, #712]	; fField712
        2d6aa0:	1181000a 	orrne	r0, r1, sl
        2d6aa4:	158402c8 	strne	r0, [r4, #712]	; fField712
        2d6aa8:	e3a00000 	mov	r0, #0	; 0x0
        2d6aac:	e5c90000 	strb	r0, [r9]
        2d6ab0:	e28d3008 	add	r3, sp, #8	; 0x8
        2d6ab4:	e1a02009 	mov	r2, r9
        2d6ab8:	e1a00004 	mov	r0, r4
        2d6abc:	e3a01000 	mov	r1, #0	; 0x0
        2d6ac0:	eb5fada7 	bl	1ac2164 <TEWorldClient::$ProcessAtom(unsigned long, unsigned char *, unsigned long *)>
        2d6ac4:	ea00001e 	b	2d6b44 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x22c>
        2d6ac8:	e2866001 	add	r6, r6, #1	; 0x1
        2d6acc:	e3380000 	teq	r8, #0	; 0x0
        2d6ad0:	e58412c8 	str	r1, [r4, #712]	; fField712
        2d6ad4:	1181000a 	orrne	r0, r1, sl
        2d6ad8:	158402c8 	strne	r0, [r4, #712]	; fField712
        2d6adc:	e3a00000 	mov	r0, #0	; 0x0
        2d6ae0:	ea000005 	b	2d6afc <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x1e4>
        2d6ae4:	e2866001 	add	r6, r6, #1	; 0x1
        2d6ae8:	e3380000 	teq	r8, #0	; 0x0
        2d6aec:	e58412c8 	str	r1, [r4, #712]	; fField712
        2d6af0:	1181000a 	orrne	r0, r1, sl
        2d6af4:	158402c8 	strne	r0, [r4, #712]	; fField712
        2d6af8:	e3a00001 	mov	r0, #1	; 0x1
        2d6afc:	e5c90000 	strb	r0, [r9]
        2d6b00:	eaffffde 	b	2d6a80 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x168>
        2d6b04:	e0850006 	add	r0, r5, r6
        2d6b08:	e58412c8 	str	r1, [r4, #712]	; fField712
        2d6b0c:	e5d07001 	ldrb	r7, [r0, #1]	; fField1
        2d6b10:	e2866002 	add	r6, r6, #2	; 0x2
        2d6b14:	e3380000 	teq	r8, #0	; 0x0
        2d6b18:	1181000a 	orrne	r0, r1, sl
        2d6b1c:	158402c8 	strne	r0, [r4, #712]	; fField712
        2d6b20:	e0852006 	add	r2, r5, r6
        2d6b24:	e28d3008 	add	r3, sp, #8	; 0x8
        2d6b28:	e1a01007 	mov	r1, r7
        2d6b2c:	e1a00004 	mov	r0, r4
        2d6b30:	eb5fad8b 	bl	1ac2164 <TEWorldClient::$ProcessAtom(unsigned long, unsigned char *, unsigned long *)>
        2d6b34:	e0866007 	add	r6, r6, r7
        2d6b38:	ea000001 	b	2d6b44 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x22c>
        2d6b3c:	e3300007 	teq	r0, #7	; 0x7
        2d6b40:	0a000009 	beq	2d6b6c <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x254>
        2d6b44:	e59d0000 	ldr	r0, [sp]
        2d6b48:	e3300000 	teq	r0, #0	; 0x0
        2d6b4c:	13a00000 	movne	r0, #0	; 0x0
        2d6b50:	03a00001 	moveq	r0, #1	; 0x1
        2d6b54:	e1100008 	tst	r0, r8
        2d6b58:	0a000003 	beq	2d6b6c <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x254>
        2d6b5c:	e3a08000 	mov	r8, #0	; 0x0
        2d6b60:	e59402c4 	ldr	r0, [r4, #708]	; fField708
        2d6b64:	e200001f 	and	r0, r0, #31	; 0x1f
        2d6b68:	e58402c4 	str	r0, [r4, #708]	; fField708
        2d6b6c:	e59d0008 	ldr	r0, [sp, #8]
        2d6b70:	e3300003 	teq	r0, #3	; 0x3
        2d6b74:	1a000003 	bne	2d6b88 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x270>
        2d6b78:	e3a00000 	mov	r0, #0	; 0x0
        2d6b7c:	e58d0008 	str	r0, [sp, #8]
        2d6b80:	e1a00004 	mov	r0, r4
        2d6b84:	eb5fa0f9 	bl	1abef70 <TEWorldClient::$ClearAtomizer(void)>
        2d6b88:	e51b202c 	ldr	r2, [fp, -#44]
        2d6b8c:	e1560002 	cmp	r6, r2
        2d6b90:	2a000002 	bcs	2d6ba0 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x288>
        2d6b94:	e59d0008 	ldr	r0, [sp, #8]
        2d6b98:	e3300002 	teq	r0, #2	; 0x2
        2d6b9c:	1affff6d 	bne	2d6958 <TEWorldClient::DoAtomizerStream(unsigned char *, unsigned long)+0x40>
        2d6ba0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::ProcessAtom(unsigned long, unsigned char *, unsigned long *)
 * Address: 002d6ba4
 */
TEWorldClient::ProcessAtom(unsigned long, unsigned char *, unsigned long *) {
    /*
        2d6ba4:	e1a0c00d 	mov	ip, sp
        2d6ba8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d6bac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d6bb0:	e1a04000 	mov	r4, r0
        2d6bb4:	e1a0c002 	mov	ip, r2
        2d6bb8:	e1a05003 	mov	r5, r3
        2d6bbc:	e59022c4 	ldr	r2, [r0, #708]	; fField708
        2d6bc0:	e3a00000 	mov	r0, #0	; 0x0
        2d6bc4:	e5830000 	str	r0, [r3]
        2d6bc8:	e5d432bc 	ldrb	r3, [r4, #700]	; fField700
        2d6bcc:	e3330000 	teq	r3, #0	; 0x0
        2d6bd0:	1a000003 	bne	2d6be4 <TEWorldClient::ProcessAtom(unsigned long, unsigned char *, unsigned long *)+0x40>
        2d6bd4:	e3320000 	teq	r2, #0	; 0x0
        2d6bd8:	059422c8 	ldreq	r2, [r4, #712]	; fField712
        2d6bdc:	03320001 	teqeq	r2, #1	; 0x1
        2d6be0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        2d6be4:	e1a03005 	mov	r3, r5
        2d6be8:	e1a02001 	mov	r2, r1
        2d6bec:	e1a0100c 	mov	r1, ip
        2d6bf0:	e1a00004 	mov	r0, r4
        2d6bf4:	eb5fa502 	bl	1ac0004 <TEWorldClient::$ExecAtom(unsigned char *, unsigned long, unsigned long *)>
        2d6bf8:	e1a06000 	mov	r6, r0
        2d6bfc:	e5950000 	ldr	r0, [r5]
        2d6c00:	e3300002 	teq	r0, #2	; 0x2
        2d6c04:	1a000002 	bne	2d6c14 <TEWorldClient::ProcessAtom(unsigned long, unsigned char *, unsigned long *)+0x70>
        2d6c08:	e1a00004 	mov	r0, r4
        2d6c0c:	eb5fa0d7 	bl	1abef70 <TEWorldClient::$ClearAtomizer(void)>
        2d6c10:	ea000001 	b	2d6c1c <TEWorldClient::ProcessAtom(unsigned long, unsigned char *, unsigned long *)+0x78>
        2d6c14:	e3300001 	teq	r0, #1	; 0x1
        2d6c18:	05a462f4 	streq	r6, [r4, #756]!	; fField756
        2d6c1c:	e1a00006 	mov	r0, r6
        2d6c20:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::ExecAtom(unsigned char *, unsigned long, unsigned long *)
 * Address: 002d6c24
 */
TEWorldClient::ExecAtom(unsigned char *, unsigned long, unsigned long *) {
    /*
        2d6c24:	e1a0c00d 	mov	ip, sp
        2d6c28:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2d6c2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d6c30:	e1a04000 	mov	r4, r0
        2d6c34:	e1a08001 	mov	r8, r1
        2d6c38:	e1a05002 	mov	r5, r2
        2d6c3c:	e1a06003 	mov	r6, r3
        2d6c40:	e2820001 	add	r0, r2, #1	; 0x1
        2d6c44:	eb642d3d 	bl	1be2140 <$NewPtr>
        2d6c48:	e1b07000 	movs	r7, r0
        2d6c4c:	03a000e9 	moveq	r0, #233	; 0xe9
        2d6c50:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        2d6c54:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2d6c58:	e1a02005 	mov	r2, r5
        2d6c5c:	e1a01007 	mov	r1, r7
        2d6c60:	e1a00008 	mov	r0, r8
        2d6c64:	eb6420ba 	bl	1bdef54 <$BlockMove>
        2d6c68:	e3a09000 	mov	r9, #0	; 0x0
        2d6c6c:	e7c79005 	strb	r9, [r7, r5]
        2d6c70:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d6c74:	e59f0150 	ldr	r0, [pc, #150]	; 2d6dcc <TEWorldClient::ExecAtom(unsigned char *, unsigned long, unsigned long *)+0x1a8>
        2d6c78:	e8905000 	ldmia	r0, {ip, lr}
        2d6c7c:	e88d5000 	stmia	sp, {ip, lr}
        2d6c80:	e59402c4 	ldr	r0, [r4, #708]	; fField708
        2d6c84:	eb636f30 	bl	1bb294c <$__rt_udiv10>
        2d6c88:	e2800030 	add	r0, r0, #48	; 0x30
        2d6c8c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        2d6c90:	e59402c4 	ldr	r0, [r4, #708]	; fField708
        2d6c94:	eb636f2c 	bl	1bb294c <$__rt_udiv10>
        2d6c98:	e2810030 	add	r0, r1, #48	; 0x30
        2d6c9c:	e5cd0005 	strb	r0, [sp, #5]
        2d6ca0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d6ca4:	e28d0008 	add	r0, sp, #8	; 0x8
        2d6ca8:	eb63b974 	bl	1bc5280 <$Intern(char *)>
        2d6cac:	eb63ad26 	bl	1bc214c <$AllocateRefHandle(long)>
        2d6cb0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2d6cb4:	e3a00005 	mov	r0, #5	; 0x5
        2d6cb8:	eb5f1437 	bl	1a9bd9c <$MakeArray(long)>
        2d6cbc:	eb63ad22 	bl	1bc214c <$AllocateRefHandle(long)>
        2d6cc0:	e58d0000 	str	r0, [sp]
        2d6cc4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2d6cc8:	e1a01009 	mov	r1, r9
        2d6ccc:	e5902000 	ldr	r2, [r0]
        2d6cd0:	e59d0000 	ldr	r0, [sp]
        2d6cd4:	e5900000 	ldr	r0, [r0]
        2d6cd8:	eb63bd9e 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d6cdc:	e59402c0 	ldr	r0, [r4, #704]	; fField704
        2d6ce0:	e1a00100 	mov	r0, r0, lsl #2
        2d6ce4:	eb63ad18 	bl	1bc214c <$AllocateRefHandle(long)>
        2d6ce8:	e1a08000 	mov	r8, r0
        2d6cec:	e3a01001 	mov	r1, #1	; 0x1
        2d6cf0:	e5902000 	ldr	r2, [r0]
        2d6cf4:	e59d0000 	ldr	r0, [sp]
        2d6cf8:	e5900000 	ldr	r0, [r0]
        2d6cfc:	eb63bd95 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d6d00:	e1a00008 	mov	r0, r8
        2d6d04:	eb63b12c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d6d08:	e59402c8 	ldr	r0, [r4, #712]	; fField712
        2d6d0c:	e1a00100 	mov	r0, r0, lsl #2
        2d6d10:	eb63ad0d 	bl	1bc214c <$AllocateRefHandle(long)>
        2d6d14:	e1a08000 	mov	r8, r0
        2d6d18:	e3a01002 	mov	r1, #2	; 0x2
        2d6d1c:	e5902000 	ldr	r2, [r0]
        2d6d20:	e59d0000 	ldr	r0, [sp]
        2d6d24:	e5900000 	ldr	r0, [r0]
        2d6d28:	eb63bd8a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d6d2c:	e1a00008 	mov	r0, r8
        2d6d30:	eb63b121 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d6d34:	e1a00105 	mov	r0, r5, lsl #2
        2d6d38:	eb63ad03 	bl	1bc214c <$AllocateRefHandle(long)>
        2d6d3c:	e1a05000 	mov	r5, r0
        2d6d40:	e3a01003 	mov	r1, #3	; 0x3
        2d6d44:	e5902000 	ldr	r2, [r0]
        2d6d48:	e59d0000 	ldr	r0, [sp]
        2d6d4c:	e5900000 	ldr	r0, [r0]
        2d6d50:	eb63bd80 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d6d54:	e1a00005 	mov	r0, r5
        2d6d58:	eb63b117 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d6d5c:	e1a00007 	mov	r0, r7
        2d6d60:	eb5ec9e1 	bl	1a894ec <$AddressToRef(void *)>
        2d6d64:	eb63acf8 	bl	1bc214c <$AllocateRefHandle(long)>
        2d6d68:	e1a05000 	mov	r5, r0
        2d6d6c:	e3a01004 	mov	r1, #4	; 0x4
        2d6d70:	e5902000 	ldr	r2, [r0]
        2d6d74:	e59d0000 	ldr	r0, [sp]
        2d6d78:	e5900000 	ldr	r0, [r0]
        2d6d7c:	eb63bd75 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d6d80:	e1a00005 	mov	r0, r5
        2d6d84:	eb63b10c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d6d88:	e58492d0 	str	r9, [r4, #720]
        2d6d8c:	e1a0200d 	mov	r2, sp
        2d6d90:	e28d1004 	add	r1, sp, #4	; 0x4
        2d6d94:	e5849304 	str	r9, [r4, #772]
        2d6d98:	e1a00004 	mov	r0, r4
        2d6d9c:	eb5facf6 	bl	1ac217c <TEWorldClient::$SendMessage(RefVar const &, RefVar const &)>
        2d6da0:	e59402d0 	ldr	r0, [r4, #720]
        2d6da4:	e5860000 	str	r0, [r6]
        2d6da8:	e1a00007 	mov	r0, r7
        2d6dac:	eb6428c0 	bl	1be10b4 <$DisposPtr>
        2d6db0:	e5944304 	ldr	r4, [r4, #772]
        2d6db4:	e59d0000 	ldr	r0, [sp]
        2d6db8:	eb63b0ff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d6dbc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2d6dc0:	eb63b0fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d6dc4:	e1a00004 	mov	r0, r4
        2d6dc8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2d6dcc:	00380648 	eoreqs	r0, r8, r8, asr #12
    */
}

/**
 * Symbol: TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)
 * Address: 002d6dd0
 */
TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *) {
    /*
        2d6dd0:	e1a0c00d 	mov	ip, sp
        2d6dd4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d6dd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d6ddc:	e99b0060 	ldmib	fp, {r5, r6}
        2d6de0:	e285c001 	add	ip, r5, #1	; 0x1
        2d6de4:	e0804101 	add	r4, r0, r1, lsl #2
        2d6de8:	e3330000 	teq	r3, #0	; 0x0
        2d6dec:	03320000 	teqeq	r2, #0	; 0x0
        2d6df0:	0a00000f 	beq	2d6e34 <TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)+0x64>
        2d6df4:	e3350000 	teq	r5, #0	; 0x0
        2d6df8:	e58422dc 	str	r2, [r4, #732]
        2d6dfc:	e58432d4 	str	r3, [r4, #724]
        2d6e00:	0a00002b 	beq	2d6eb4 <TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)+0xe4>
        2d6e04:	e1a0000c 	mov	r0, ip
        2d6e08:	eb642ccc 	bl	1be2140 <$NewPtr>
        2d6e0c:	e3360000 	teq	r6, #0	; 0x0
        2d6e10:	e58402ec 	str	r0, [r4, #748]
        2d6e14:	13300000 	teqne	r0, #0	; 0x0
        2d6e18:	0a000025 	beq	2d6eb4 <TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)+0xe4>
        2d6e1c:	e1a01000 	mov	r1, r0
        2d6e20:	e1a02005 	mov	r2, r5
        2d6e24:	e1a00006 	mov	r0, r6
        2d6e28:	eb642049 	bl	1bdef54 <$BlockMove>
        2d6e2c:	e5a452e4 	str	r5, [r4, #740]!
        2d6e30:	ea00001f 	b	2d6eb4 <TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)+0xe4>
        2d6e34:	e3350000 	teq	r5, #0	; 0x0
        2d6e38:	0a00001d 	beq	2d6eb4 <TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)+0xe4>
        2d6e3c:	e59402ec 	ldr	r0, [r4, #748]
        2d6e40:	e3300000 	teq	r0, #0	; 0x0
        2d6e44:	0a00001c 	beq	2d6ebc <TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)+0xec>
        2d6e48:	e59412e4 	ldr	r1, [r4, #740]
        2d6e4c:	e0811005 	add	r1, r1, r5
        2d6e50:	e2811001 	add	r1, r1, #1	; 0x1
        2d6e54:	eb642cc1 	bl	1be2160 <$ReallocPtr>
        2d6e58:	e3300000 	teq	r0, #0	; 0x0
        2d6e5c:	1a000007 	bne	2d6e80 <TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)+0xb0>
        2d6e60:	e59f0014 	ldr	r0, [pc, #14]	; 2d6e7c <TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)+0xac>
        2d6e64:	e5900000 	ldr	r0, [r0]
        2d6e68:	e3a02000 	mov	r2, #0	; 0x0
        2d6e6c:	e3a010e9 	mov	r1, #233	; 0xe9
        2d6e70:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2d6e74:	eb6430c8 	bl	1be319c <$Throw>
        2d6e78:	ea000001 	b	2d6e84 <TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)+0xb4>
        2d6e7c:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2d6e80:	e58402ec 	str	r0, [r4, #748]
        2d6e84:	e3360000 	teq	r6, #0	; 0x0
        2d6e88:	159402ec 	ldrne	r0, [r4, #748]
        2d6e8c:	13300000 	teqne	r0, #0	; 0x0
        2d6e90:	0a000007 	beq	2d6eb4 <TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)+0xe4>
        2d6e94:	e59412e4 	ldr	r1, [r4, #740]
        2d6e98:	e0801001 	add	r1, r0, r1
        2d6e9c:	e1a02005 	mov	r2, r5
        2d6ea0:	e1a00006 	mov	r0, r6
        2d6ea4:	eb64202a 	bl	1bdef54 <$BlockMove>
        2d6ea8:	e59402e4 	ldr	r0, [r4, #740]
        2d6eac:	e0800005 	add	r0, r0, r5
        2d6eb0:	e5a402e4 	str	r0, [r4, #740]!
        2d6eb4:	e3a00001 	mov	r0, #1	; 0x1
        2d6eb8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2d6ebc:	e1a0000c 	mov	r0, ip
        2d6ec0:	eb642c9e 	bl	1be2140 <$NewPtr>
        2d6ec4:	eaffffed 	b	2d6e80 <TEWorldClient::AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)+0xb0>
    */
}

/**
 * Symbol: TEWorldClient::DoAtomStreamLocal(unsigned long, unsigned long *)
 * Address: 002d6ec8
 */
TEWorldClient::DoAtomStreamLocal(unsigned long, unsigned long *) {
    /*
        2d6ec8:	e1a0c00d 	mov	ip, sp
        2d6ecc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2d6ed0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d6ed4:	e1a04000 	mov	r4, r0
        2d6ed8:	e1a05002 	mov	r5, r2
        2d6edc:	e59072c8 	ldr	r7, [r0, #712]	; fField712
        2d6ee0:	e59082c4 	ldr	r8, [r0, #708]	; fField708
        2d6ee4:	e0806101 	add	r6, r0, r1, lsl #2
        2d6ee8:	e59602d4 	ldr	r0, [r6, #724]
        2d6eec:	e58402c4 	str	r0, [r4, #708]	; fField708
        2d6ef0:	e59602dc 	ldr	r0, [r6, #732]
        2d6ef4:	e58402c8 	str	r0, [r4, #712]	; fField712
        2d6ef8:	e1a03005 	mov	r3, r5
        2d6efc:	e1a00004 	mov	r0, r4
        2d6f00:	e59612e4 	ldr	r1, [r6, #740]
        2d6f04:	e59622ec 	ldr	r2, [r6, #748]
        2d6f08:	eb5fac95 	bl	1ac2164 <TEWorldClient::$ProcessAtom(unsigned long, unsigned char *, unsigned long *)>
        2d6f0c:	e1a09000 	mov	r9, r0
        2d6f10:	e3a00000 	mov	r0, #0	; 0x0
        2d6f14:	e5951000 	ldr	r1, [r5]
        2d6f18:	e3310003 	teq	r1, #3	; 0x3
        2d6f1c:	1a000003 	bne	2d6f30 <TEWorldClient::DoAtomStreamLocal(unsigned long, unsigned long *)+0x68>
        2d6f20:	e5850000 	str	r0, [r5]
        2d6f24:	e1a00004 	mov	r0, r4
        2d6f28:	eb5fa010 	bl	1abef70 <TEWorldClient::$ClearAtomizer(void)>
        2d6f2c:	ea000008 	b	2d6f54 <TEWorldClient::DoAtomStreamLocal(unsigned long, unsigned long *)+0x8c>
        2d6f30:	e1a05000 	mov	r5, r0
        2d6f34:	e58602d4 	str	r0, [r6, #724]
        2d6f38:	e58602dc 	str	r0, [r6, #732]
        2d6f3c:	e58602e4 	str	r0, [r6, #740]
        2d6f40:	e59602ec 	ldr	r0, [r6, #748]
        2d6f44:	e3300000 	teq	r0, #0	; 0x0
        2d6f48:	0a000001 	beq	2d6f54 <TEWorldClient::DoAtomStreamLocal(unsigned long, unsigned long *)+0x8c>
        2d6f4c:	eb642858 	bl	1be10b4 <$DisposPtr>
        2d6f50:	e5a652ec 	str	r5, [r6, #748]!
        2d6f54:	e1a00009 	mov	r0, r9
        2d6f58:	e5a482c4 	str	r8, [r4, #708]!	; fField708
        2d6f5c:	e5847004 	str	r7, [r4, #4]	; fField4
        2d6f60:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::GetAtomBytes(unsigned char *, unsigned long, unsigned long, unsigned long)
 * Address: 002d6f64
 */
TEWorldClient::GetAtomBytes(unsigned char *, unsigned long, unsigned long, unsigned long) {
    /*
        2d6f64:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        2d6f68:	e0422003 	sub	r2, r2, r3
        2d6f6c:	e3a00000 	mov	r0, #0	; 0x0
        2d6f70:	e59dc00c 	ldr	ip, [sp, #12]	; fField12
        2d6f74:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d6f78:	e152000c 	cmp	r2, ip
        2d6f7c:	2a000001 	bcs	2d6f88 <TEWorldClient::GetAtomBytes(unsigned char *, unsigned long, unsigned long, unsigned long)+0x24>
        2d6f80:	e28dd004 	add	sp, sp, #4	; 0x4
        2d6f84:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
        2d6f88:	e35c0004 	cmp	ip, #4	; 0x4
        2d6f8c:	83a0c004 	movhi	ip, #4	; 0x4
        2d6f90:	e58d0000 	str	r0, [sp]
        2d6f94:	e3a00000 	mov	r0, #0	; 0x0
        2d6f98:	e35c0000 	cmp	ip, #0	; 0x0
        2d6f9c:	9a000007 	bls	2d6fc0 <TEWorldClient::GetAtomBytes(unsigned char *, unsigned long, unsigned long, unsigned long)+0x5c>
        2d6fa0:	e26c2004 	rsb	r2, ip, #4	; 0x4
        2d6fa4:	e7d14003 	ldrb	r4, [r1, r3]
        2d6fa8:	e082e000 	add	lr, r2, r0
        2d6fac:	e7cd400e 	strb	r4, [sp, lr]
        2d6fb0:	e2800001 	add	r0, r0, #1	; 0x1
        2d6fb4:	e2833001 	add	r3, r3, #1	; 0x1
        2d6fb8:	e150000c 	cmp	r0, ip
        2d6fbc:	3afffff8 	bcc	2d6fa4 <TEWorldClient::GetAtomBytes(unsigned char *, unsigned long, unsigned long, unsigned long)+0x40>
        2d6fc0:	e59d0000 	ldr	r0, [sp]
        2d6fc4:	eaffffed 	b	2d6f80 <TEWorldClient::GetAtomBytes(unsigned char *, unsigned long, unsigned long, unsigned long)+0x1c>
    */
}

/**
 * Symbol: TEWorldClient::ConnectToHost(RefVar const &)
 * Address: 002d70fc
 */
TEWorldClient::ConnectToHost(RefVar const &) {
    /*
        2d70fc:	e1a0c00d 	mov	ip, sp
        2d7100:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2d7104:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d7108:	e1a04000 	mov	r4, r0
        2d710c:	e1a05001 	mov	r5, r1
        2d7110:	e3a07000 	mov	r7, #0	; 0x0
        2d7114:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d7118:	e3a00002 	mov	r0, #2	; 0x2
        2d711c:	eb63ac0a 	bl	1bc214c <$AllocateRefHandle(long)>
        2d7120:	e58d0000 	str	r0, [sp]
        2d7124:	e3a00002 	mov	r0, #2	; 0x2
        2d7128:	eb63ac07 	bl	1bc214c <$AllocateRefHandle(long)>
        2d712c:	e1a06000 	mov	r6, r0
        2d7130:	e3a00001 	mov	r0, #1	; 0x1
        2d7134:	eb5f1318 	bl	1a9bd9c <$MakeArray(long)>
        2d7138:	e59d1000 	ldr	r1, [sp]
        2d713c:	e5810000 	str	r0, [r1]
        2d7140:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2d7144:	eb5ec8e8 	bl	1a894ec <$AddressToRef(void *)>
        2d7148:	eb63abff 	bl	1bc214c <$AllocateRefHandle(long)>
        2d714c:	e1a08000 	mov	r8, r0
        2d7150:	e3a09000 	mov	r9, #0	; 0x0
        2d7154:	e1a01009 	mov	r1, r9
        2d7158:	e5902000 	ldr	r2, [r0]
        2d715c:	e59d0000 	ldr	r0, [sp]
        2d7160:	e5900000 	ldr	r0, [r0]
        2d7164:	eb63bc7b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d7168:	e1a00008 	mov	r0, r8
        2d716c:	eb63b012 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d7170:	e3a08001 	mov	r8, #1	; 0x1
        2d7174:	e5c482ac 	strb	r8, [r4, #684]	; fField684
        2d7178:	e5950000 	ldr	r0, [r5]
        2d717c:	e5900000 	ldr	r0, [r0]
        2d7180:	e3300002 	teq	r0, #2	; 0x2
        2d7184:	0a000020 	beq	2d720c <TEWorldClient::ConnectToHost(RefVar const &)+0x110>
        2d7188:	e52d906c 	str	r9, [sp, -#108]!
        2d718c:	e28d0008 	add	r0, sp, #8	; 0x8
        2d7190:	eb636df7 	bl	1bb2974 <$setjmp>
        2d7194:	e3300000 	teq	r0, #0	; 0x0
        2d7198:	1a00000f 	bne	2d71dc <TEWorldClient::ConnectToHost(RefVar const &)+0xe0>
        2d719c:	e1a0000d 	mov	r0, sp
        2d71a0:	eb6423b5 	bl	1be007c <$AddExceptionHandler>
        2d71a4:	e28d206c 	add	r2, sp, #108	; 0x6c
        2d71a8:	e59f1028 	ldr	r1, [pc, #28]	; 2d71d8 <TEWorldClient::ConnectToHost(RefVar const &)+0xdc>
        2d71ac:	e1a00005 	mov	r0, r5
        2d71b0:	eb63b007 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        2d71b4:	e5860000 	str	r0, [r6]
        2d71b8:	e3300002 	teq	r0, #2	; 0x2
        2d71bc:	0a00000f 	beq	2d7200 <TEWorldClient::ConnectToHost(RefVar const &)+0x104>
        2d71c0:	e3100003 	tst	r0, #3	; 0x3
        2d71c4:	01a00140 	moveq	r0, r0, asr #2
        2d71c8:	0a000000 	beq	2d71d0 <TEWorldClient::ConnectToHost(RefVar const &)+0xd4>
        2d71cc:	eb63abd2 	bl	1bc211c <$_RINTError(long)>
        2d71d0:	e1a07000 	mov	r7, r0
        2d71d4:	ea000009 	b	2d7200 <TEWorldClient::ConnectToHost(RefVar const &)+0x104>
        2d71d8:	006836d8 	ldreqd	r3, [r8], -#104
        2d71dc:	e59d0060 	ldr	r0, [sp, #96]
        2d71e0:	e59f1088 	ldr	r1, [pc, #88]	; 2d7270 <TEWorldClient::ConnectToHost(RefVar const &)+0x174>
        2d71e4:	e5911000 	ldr	r1, [r1]
        2d71e8:	eb642fe9 	bl	1be3194 <$Subexception>
        2d71ec:	e3300000 	teq	r0, #0	; 0x0
        2d71f0:	159d7064 	ldrne	r7, [sp, #100]
        2d71f4:	1a000001 	bne	2d7200 <TEWorldClient::ConnectToHost(RefVar const &)+0x104>
        2d71f8:	e1a0000d 	mov	r0, sp
        2d71fc:	eb642bd4 	bl	1be2154 <$NextHandler>
        2d7200:	e1a0000d 	mov	r0, sp
        2d7204:	eb6427ab 	bl	1be10b8 <$ExitHandler>
        2d7208:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2d720c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2d7210:	e1a01004 	mov	r1, r4
        2d7214:	eb638ec7 	bl	1bbad38 <TEndpoint::$SetClientHandler(unsigned long)>
        2d7218:	e1a01008 	mov	r1, r8
        2d721c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2d7220:	eb638ec7 	bl	1bbad44 <TEndpoint::$SetSync(unsigned char)>
        2d7224:	e3370000 	teq	r7, #0	; 0x0
        2d7228:	1a000041 	bne	2d7334 <TEWorldClient::ConnectToHost(RefVar const &)+0x238>
        2d722c:	e24dd018 	sub	sp, sp, #24	; 0x18
        2d7230:	e1a0000d 	mov	r0, sp
        2d7234:	eb637a2a 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        2d7238:	e1a0000d 	mov	r0, sp
        2d723c:	eb63868e 	bl	1bb8c7c <TOptionArray::$Init(void)>
        2d7240:	e3300000 	teq	r0, #0	; 0x0
        2d7244:	0a00000a 	beq	2d7274 <TEWorldClient::ConnectToHost(RefVar const &)+0x178>
        2d7248:	e1a04000 	mov	r4, r0
        2d724c:	e1a0000d 	mov	r0, sp
        2d7250:	e3a01000 	mov	r1, #0	; 0x0
        2d7254:	eb637e34 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        2d7258:	e1a00006 	mov	r0, r6
        2d725c:	eb63afd6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d7260:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2d7264:	eb63afd4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d7268:	e1a00004 	mov	r0, r4
        2d726c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2d7270:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        2d7274:	e24dd010 	sub	sp, sp, #16	; 0x10
        2d7278:	e1a0000d 	mov	r0, sp
        2d727c:	e3a01000 	mov	r1, #0	; 0x0
        2d7280:	eb638ebd 	bl	1bbad7c <TP3OPassThru::$__ct(unsigned char)>
        2d7284:	e1a0200d 	mov	r2, sp
        2d7288:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2d728c:	e28d0010 	add	r0, sp, #16	; 0x10
        2d7290:	eb638a83 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        2d7294:	e3300000 	teq	r0, #0	; 0x0
        2d7298:	1a000016 	bne	2d72f8 <TEWorldClient::ConnectToHost(RefVar const &)+0x1fc>
        2d729c:	e1a03009 	mov	r3, r9
        2d72a0:	e28d2010 	add	r2, sp, #16	; 0x10
        2d72a4:	e3a01c05 	mov	r1, #1280	; 0x500
        2d72a8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2d72ac:	eb638a89 	bl	1bb9cd8 <TEndpoint::$OptMgmt(unsigned long, TOptionArray *, unsigned long)>
        2d72b0:	e3300000 	teq	r0, #0	; 0x0
        2d72b4:	1a00000f 	bne	2d72f8 <TEWorldClient::ConnectToHost(RefVar const &)+0x1fc>
        2d72b8:	ea000008 	b	2d72e0 <TEWorldClient::ConnectToHost(RefVar const &)+0x1e4>
        2d72bc:	e59d0028 	ldr	r0, [sp, #40]
        2d72c0:	eb63afbd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d72c4:	e1a00004 	mov	r0, r4
        2d72c8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2d72cc:	e3a01000 	mov	r1, #0	; 0x0
        2d72d0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2d72d4:	eb638ea6 	bl	1bbad74 <TEndpoint::$WaitForEvent(unsigned long)>
        2d72d8:	e3300000 	teq	r0, #0	; 0x0
        2d72dc:	1a000003 	bne	2d72f0 <TEWorldClient::ConnectToHost(RefVar const &)+0x1f4>
        2d72e0:	e5d402ac 	ldrb	r0, [r4, #684]	; fField684
        2d72e4:	e3300000 	teq	r0, #0	; 0x0
        2d72e8:	1afffff7 	bne	2d72cc <TEWorldClient::ConnectToHost(RefVar const &)+0x1d0>
        2d72ec:	ea000008 	b	2d7314 <TEWorldClient::ConnectToHost(RefVar const &)+0x218>
        2d72f0:	e3300000 	teq	r0, #0	; 0x0
        2d72f4:	0a000006 	beq	2d7314 <TEWorldClient::ConnectToHost(RefVar const &)+0x218>
        2d72f8:	e1a04000 	mov	r4, r0
        2d72fc:	e28d0010 	add	r0, sp, #16	; 0x10
        2d7300:	e3a01000 	mov	r1, #0	; 0x0
        2d7304:	eb637e08 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        2d7308:	e1a00006 	mov	r0, r6
        2d730c:	eb63afaa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d7310:	eaffffe9 	b	2d72bc <TEWorldClient::ConnectToHost(RefVar const &)+0x1c0>
        2d7314:	e1a00004 	mov	r0, r4
        2d7318:	eb5fab92 	bl	1ac2168 <TEWorldClient::$QueueRcv(void)>
        2d731c:	e1a07000 	mov	r7, r0
        2d7320:	e28dd010 	add	sp, sp, #16	; 0x10
        2d7324:	e1a0000d 	mov	r0, sp
        2d7328:	e3a01000 	mov	r1, #0	; 0x0
        2d732c:	eb637dfe 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        2d7330:	e28dd018 	add	sp, sp, #24	; 0x18
        2d7334:	e1a00006 	mov	r0, r6
        2d7338:	eb63af9f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d733c:	e59d0000 	ldr	r0, [sp]
        2d7340:	eb63af9d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d7344:	e1a00007 	mov	r0, r7
        2d7348:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::SendP3Buffer(void)
 * Address: 002d8234
 */
TEWorldClient::SendP3Buffer(void) {
    /*
        2d8234:	e1a0c00d 	mov	ip, sp
        2d8238:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d823c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d8240:	e1a04000 	mov	r4, r0
        2d8244:	e5b01258 	ldr	r1, [r0, #600]!
        2d8248:	e1a0e00f 	mov	lr, pc
        2d824c:	e281f03c 	add	pc, r1, #60	; 0x3c
        2d8250:	e1a01000 	mov	r1, r0
        2d8254:	e1a00004 	mov	r0, r4
        2d8258:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2d825c:	ea5fabc8 	b	1ac3184 <TEWorldClient::$SendP3Buffer(unsigned long)>
    */
}

/**
 * Symbol: TEWorldClient::SendP3BufferEscaped(void)
 * Address: 002d85b4
 */
TEWorldClient::SendP3BufferEscaped(void) {
    /*
        2d85b4:	e1a0c00d 	mov	ip, sp
        2d85b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d85bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d85c0:	e1a04000 	mov	r4, r0
        2d85c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d85c8:	e5b01258 	ldr	r1, [r0, #600]!
        2d85cc:	e1a0e00f 	mov	lr, pc
        2d85d0:	e281f03c 	add	pc, r1, #60	; 0x3c
        2d85d4:	e28410d4 	add	r1, r4, #212	; 0xd4
        2d85d8:	e58d0000 	str	r0, [sp]
        2d85dc:	e1a0200d 	mov	r2, sp
        2d85e0:	e1a00004 	mov	r0, r4
        2d85e4:	eb5f9e85 	bl	1ac0000 <TEWorldClient::$Escape(unsigned char *, unsigned long *)>
        2d85e8:	e1a00004 	mov	r0, r4
        2d85ec:	e59d1000 	ldr	r1, [sp]
        2d85f0:	eb5faae3 	bl	1ac3184 <TEWorldClient::$SendP3Buffer(unsigned long)>
        2d85f4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::SendP3Buffer(unsigned long)
 * Address: 002d85f8
 */
TEWorldClient::SendP3Buffer(unsigned long) {
    /*
        2d85f8:	e1a0c00d 	mov	ip, sp
        2d85fc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d8600:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d8604:	e1a04000 	mov	r4, r0
        2d8608:	e1a05001 	mov	r5, r1
        2d860c:	e3a06000 	mov	r6, #0	; 0x0
        2d8610:	e59f1084 	ldr	r1, [pc, #84]	; 2d869c <TEWorldClient::SendP3Buffer(unsigned long)+0xa4>
        2d8614:	e5911000 	ldr	r1, [r1]
        2d8618:	e5911000 	ldr	r1, [r1]
        2d861c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2d8620:	e5900000 	ldr	r0, [r0]
        2d8624:	eb63af0d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d8628:	e3300002 	teq	r0, #2	; 0x2
        2d862c:	0a000039 	beq	2d8718 <TEWorldClient::SendP3Buffer(unsigned long)+0x120>
        2d8630:	e2840f96 	add	r0, r4, #600	; 0x258
        2d8634:	e1a07000 	mov	r7, r0
        2d8638:	e5901000 	ldr	r1, [r0]
        2d863c:	e1a0e00f 	mov	lr, pc
        2d8640:	e281f028 	add	pc, r1, #40	; 0x28
        2d8644:	e2651080 	rsb	r1, r5, #128	; 0x80
        2d8648:	e1a00007 	mov	r0, r7
        2d864c:	e3a02001 	mov	r2, #1	; 0x1
        2d8650:	e5973000 	ldr	r3, [r7]
        2d8654:	e1a0e00f 	mov	lr, pc
        2d8658:	e283f034 	add	pc, r3, #52	; 0x34
        2d865c:	e3a03000 	mov	r3, #0	; 0x0
        2d8660:	e3a02001 	mov	r2, #1	; 0x1
        2d8664:	e92d000c 	stmdb	sp!, {r2, r3}
        2d8668:	e1a01007 	mov	r1, r7
        2d866c:	e3a02000 	mov	r2, #0	; 0x0
        2d8670:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2d8674:	eb5faad8 	bl	1ac31dc <TSerialEndpoint::$eWorldSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        2d8678:	e28dd008 	add	sp, sp, #8	; 0x8
        2d867c:	e1a06000 	mov	r6, r0
        2d8680:	e3e00e41 	mvn	r0, #1040	; 0x410
        2d8684:	e2400a0a 	sub	r0, r0, #40960	; 0xa000
        2d8688:	e1360000 	teq	r6, r0
        2d868c:	1a000003 	bne	2d86a0 <TEWorldClient::SendP3Buffer(unsigned long)+0xa8>
        2d8690:	e3a00006 	mov	r0, #6	; 0x6
        2d8694:	eb5f3317 	bl	1aa52f8 <$Wait(unsigned long)>
        2d8698:	eaffffef 	b	2d865c <TEWorldClient::SendP3Buffer(unsigned long)+0x64>
        2d869c:	006825a8 	rsbeq	r2, r8, r8, lsr #11
        2d86a0:	e1360000 	teq	r6, r0
        2d86a4:	0affffec 	beq	2d865c <TEWorldClient::SendP3Buffer(unsigned long)+0x64>
        2d86a8:	e1a00007 	mov	r0, r7
        2d86ac:	e5971000 	ldr	r1, [r7]
        2d86b0:	e1a0e00f 	mov	lr, pc
        2d86b4:	e281f028 	add	pc, r1, #40	; 0x28
        2d86b8:	e3360000 	teq	r6, #0	; 0x0
        2d86bc:	0a000015 	beq	2d8718 <TEWorldClient::SendP3Buffer(unsigned long)+0x120>
        2d86c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d86c4:	e3a00001 	mov	r0, #1	; 0x1
        2d86c8:	eb5f0db3 	bl	1a9bd9c <$MakeArray(long)>
        2d86cc:	eb63a69e 	bl	1bc214c <$AllocateRefHandle(long)>
        2d86d0:	e58d0000 	str	r0, [sp]
        2d86d4:	e1a00106 	mov	r0, r6, lsl #2
        2d86d8:	eb63a69b 	bl	1bc214c <$AllocateRefHandle(long)>
        2d86dc:	e1a05000 	mov	r5, r0
        2d86e0:	e3a01000 	mov	r1, #0	; 0x0
        2d86e4:	e5902000 	ldr	r2, [r0]
        2d86e8:	e59d0000 	ldr	r0, [sp]
        2d86ec:	e5900000 	ldr	r0, [r0]
        2d86f0:	eb63b718 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d86f4:	e1a00005 	mov	r0, r5
        2d86f8:	eb63aaaf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d86fc:	e1a0200d 	mov	r2, sp
        2d8700:	e59f1018 	ldr	r1, [pc, #18]	; 2d8720 <TEWorldClient::SendP3Buffer(unsigned long)+0x128>
        2d8704:	e1a00004 	mov	r0, r4
        2d8708:	eb5fa69b 	bl	1ac217c <TEWorldClient::$SendMessage(RefVar const &, RefVar const &)>
        2d870c:	e59d0000 	ldr	r0, [sp]
        2d8710:	eb63aaa9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d8714:	e28dd004 	add	sp, sp, #4	; 0x4
        2d8718:	e1a00006 	mov	r0, r6
        2d871c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2d8720:	00683070 	rsbeq	r3, r8, r0, ror r0
    */
}

/**
 * Symbol: TEWorldClient::QueueRcv(void)
 * Address: 002d8724
 */
TEWorldClient::QueueRcv(void) {
    /*
        2d8724:	e1a0c00d 	mov	ip, sp
        2d8728:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d872c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d8730:	e1a04000 	mov	r4, r0
        2d8734:	e3a00000 	mov	r0, #0	; 0x0
        2d8738:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2d873c:	e2840d0a 	add	r0, r4, #640	; 0x280
        2d8740:	e5901000 	ldr	r1, [r0]
        2d8744:	e1a0e00f 	mov	lr, pc
        2d8748:	e281f028 	add	pc, r1, #40	; 0x28
        2d874c:	e3a00080 	mov	r0, #128	; 0x80
        2d8750:	e284ef75 	add	lr, r4, #468	; 0x1d4
        2d8754:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2d8758:	e28d0004 	add	r0, sp, #4	; 0x4
        2d875c:	e3a01000 	mov	r1, #0	; 0x0
        2d8760:	e3a03000 	mov	r3, #0	; 0x0
        2d8764:	e3a0c000 	mov	ip, #0	; 0x0
        2d8768:	e1a0200c 	mov	r2, ip
        2d876c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2d8770:	e1a0300c 	mov	r3, ip
        2d8774:	e28d2010 	add	r2, sp, #16	; 0x10
        2d8778:	e1a0100e 	mov	r1, lr
        2d877c:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        2d8780:	eb6499e4 	bl	1bfef18 <TEndpoint::$nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        2d8784:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEWorldClient::DispatchPacket(unsigned char *, unsigned long)
 * Address: 002d8788
 */
TEWorldClient::DispatchPacket(unsigned char *, unsigned long) {
    /*
        2d8788:	e1a0c00d 	mov	ip, sp
        2d878c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2d8790:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d8794:	e1a05000 	mov	r5, r0
        2d8798:	e1a04001 	mov	r4, r1
        2d879c:	e1a06002 	mov	r6, r2
        2d87a0:	e24dd010 	sub	sp, sp, #16	; 0x10
        2d87a4:	e28d0004 	add	r0, sp, #4	; 0x4
        2d87a8:	e59f10bc 	ldr	r1, [pc, #bc]	; 2d886c <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0xe4>
        2d87ac:	e891100a 	ldmia	r1, {r1, r3, ip}
        2d87b0:	e880100a 	stmia	r0, {r1, r3, ip}
        2d87b4:	e2847002 	add	r7, r4, #2	; 0x2
        2d87b8:	e3a09000 	mov	r9, #0	; 0x0
        2d87bc:	e58d9000 	str	r9, [sp]
        2d87c0:	e5d40000 	ldrb	r0, [r4]
        2d87c4:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        2d87c8:	e5d40001 	ldrb	r0, [r4, #1]	; fField1
        2d87cc:	e5cd0003 	strb	r0, [sp, #3]
        2d87d0:	e2850018 	add	r0, r5, #24	; 0x18
        2d87d4:	e1a08000 	mov	r8, r0
        2d87d8:	e59f1090 	ldr	r1, [pc, #90]	; 2d8870 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0xe8>
        2d87dc:	e5911000 	ldr	r1, [r1]
        2d87e0:	e5911000 	ldr	r1, [r1]
        2d87e4:	e5900000 	ldr	r0, [r0]
        2d87e8:	e5900000 	ldr	r0, [r0]
        2d87ec:	eb63ae9b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d87f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d87f4:	e3300002 	teq	r0, #2	; 0x2
        2d87f8:	0a00000c 	beq	2d8830 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0xa8>
        2d87fc:	e3100003 	tst	r0, #3	; 0x3
        2d8800:	01a00140 	moveq	r0, r0, asr #2
        2d8804:	0a000000 	beq	2d880c <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x84>
        2d8808:	eb63a643 	bl	1bc211c <$_RINTError(long)>
        2d880c:	e1a00100 	mov	r0, r0, lsl #2
        2d8810:	eb63a64d 	bl	1bc214c <$AllocateRefHandle(long)>
        2d8814:	e58d0000 	str	r0, [sp]
        2d8818:	e1a0200d 	mov	r2, sp
        2d881c:	e1a00008 	mov	r0, r8
        2d8820:	e59f104c 	ldr	r1, [pc, #4c]	; 2d8874 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0xec>	; fField4
        2d8824:	eb63b6cf 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d8828:	e59d0000 	ldr	r0, [sp]
        2d882c:	eb63aa62 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d8830:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2d8834:	e240cc41 	sub	ip, r0, #16640	; 0x4100
        2d8838:	e33c0054 	teq	ip, #84	; 0x54
        2d883c:	0a00000d 	beq	2d8878 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0xf0>
        2d8840:	e240cc41 	sub	ip, r0, #16640	; 0x4100
        2d8844:	e33c0074 	teq	ip, #116	; 0x74
        2d8848:	0a00000f 	beq	2d888c <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x104>
        2d884c:	e240cc61 	sub	ip, r0, #24832	; 0x6100
        2d8850:	e33c0074 	teq	ip, #116	; 0x74
        2d8854:	1a000012 	bne	2d88a4 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x11c>
        2d8858:	e1a03006 	mov	r3, r6
        2d885c:	e1a02007 	mov	r2, r7
        2d8860:	e1a00005 	mov	r0, r5
        2d8864:	e3a01004 	mov	r1, #4	; 0x4
        2d8868:	ea00000b 	b	2d889c <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x114>
        2d886c:	0038063c 	eoreqs	r0, r8, ip, lsr r6
        2d8870:	00684c58 	rsbeq	r4, r8, r8, asr ip
        2d8874:	00681d70 	rsbeq	r1, r8, r0, ror sp
        2d8878:	e1a03006 	mov	r3, r6
        2d887c:	e1a02007 	mov	r2, r7
        2d8880:	e1a00005 	mov	r0, r5
        2d8884:	e3a01002 	mov	r1, #2	; 0x2
        2d8888:	ea000003 	b	2d889c <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x114>
        2d888c:	e1a03006 	mov	r3, r6
        2d8890:	e1a02007 	mov	r2, r7
        2d8894:	e1a00005 	mov	r0, r5
        2d8898:	e3a01003 	mov	r1, #3	; 0x3
        2d889c:	eb5fa62f 	bl	1ac2160 <TEWorldClient::$ProcessAtomStream(unsigned long, unsigned char *, unsigned long)>
        2d88a0:	ea000041 	b	2d89ac <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x224>
        2d88a4:	e3a01000 	mov	r1, #0	; 0x0
        2d88a8:	e3a00005 	mov	r0, #5	; 0x5
        2d88ac:	e3a0305f 	mov	r3, #95	; 0x5f
        2d88b0:	e7d42001 	ldrb	r2, [r4, r1]
        2d88b4:	e3520041 	cmp	r2, #65	; 0x41
        2d88b8:	ba000005 	blt	2d88d4 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x14c>
        2d88bc:	e352005a 	cmp	r2, #90	; 0x5a
        2d88c0:	ca000003 	bgt	2d88d4 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x14c>
        2d88c4:	e1a0c000 	mov	ip, r0
        2d88c8:	e2800001 	add	r0, r0, #1	; 0x1
        2d88cc:	e28de008 	add	lr, sp, #8	; 0x8
        2d88d0:	e7ce300c 	strb	r3, [lr, ip]
        2d88d4:	e1a0c000 	mov	ip, r0
        2d88d8:	e2800001 	add	r0, r0, #1	; 0x1
        2d88dc:	e28de008 	add	lr, sp, #8	; 0x8
        2d88e0:	e7ce200c 	strb	r2, [lr, ip]
        2d88e4:	e2811001 	add	r1, r1, #1	; 0x1
        2d88e8:	e3510002 	cmp	r1, #2	; 0x2
        2d88ec:	baffffef 	blt	2d88b0 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x128>
        2d88f0:	e28d1008 	add	r1, sp, #8	; 0x8
        2d88f4:	e7c19000 	strb	r9, [r1, r0]
        2d88f8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d88fc:	e28d0010 	add	r0, sp, #16	; 0x10
        2d8900:	eb63b25e 	bl	1bc5280 <$Intern(char *)>
        2d8904:	eb63a610 	bl	1bc214c <$AllocateRefHandle(long)>
        2d8908:	e58d0004 	str	r0, [sp, #4]	; fField4
        2d890c:	e3a00003 	mov	r0, #3	; 0x3
        2d8910:	eb5f0d21 	bl	1a9bd9c <$MakeArray(long)>
        2d8914:	eb63a60c 	bl	1bc214c <$AllocateRefHandle(long)>
        2d8918:	e58d0000 	str	r0, [sp]
        2d891c:	e5980000 	ldr	r0, [r8]
        2d8920:	e1a01009 	mov	r1, r9
        2d8924:	e5902000 	ldr	r2, [r0]
        2d8928:	e59d0000 	ldr	r0, [sp]
        2d892c:	e5900000 	ldr	r0, [r0]
        2d8930:	eb63b688 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d8934:	e1a00004 	mov	r0, r4
        2d8938:	eb5ec2eb 	bl	1a894ec <$AddressToRef(void *)>
        2d893c:	eb63a602 	bl	1bc214c <$AllocateRefHandle(long)>
        2d8940:	e1a04000 	mov	r4, r0
        2d8944:	e3a01001 	mov	r1, #1	; 0x1
        2d8948:	e5902000 	ldr	r2, [r0]
        2d894c:	e59d0000 	ldr	r0, [sp]
        2d8950:	e5900000 	ldr	r0, [r0]
        2d8954:	eb63b67f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d8958:	e1a00004 	mov	r0, r4
        2d895c:	eb63aa16 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d8960:	e1a00106 	mov	r0, r6, lsl #2
        2d8964:	eb63a5f8 	bl	1bc214c <$AllocateRefHandle(long)>
        2d8968:	e1a04000 	mov	r4, r0
        2d896c:	e3a01002 	mov	r1, #2	; 0x2
        2d8970:	e5902000 	ldr	r2, [r0]
        2d8974:	e59d0000 	ldr	r0, [sp]
        2d8978:	e5900000 	ldr	r0, [r0]
        2d897c:	eb63b675 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d8980:	e1a00004 	mov	r0, r4
        2d8984:	eb63aa0c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d8988:	e1a0200d 	mov	r2, sp
        2d898c:	e28d1004 	add	r1, sp, #4	; 0x4
        2d8990:	e1a00005 	mov	r0, r5
        2d8994:	eb5fa5f8 	bl	1ac217c <TEWorldClient::$SendMessage(RefVar const &, RefVar const &)>
        2d8998:	e59d0000 	ldr	r0, [sp]
        2d899c:	eb63aa06 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d89a0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2d89a4:	eb63aa04 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d89a8:	e28dd008 	add	sp, sp, #8	; 0x8
        2d89ac:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2d89b0:	e1a0c00d 	mov	ip, sp
        2d89b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d89b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d89bc:	e1a04000 	mov	r4, r0
        2d89c0:	eb610cef 	bl	1b1bd84 <$IsUpperElem(SPEC_TYPE *)>
        2d89c4:	e1b01000 	movs	r1, r0
        2d89c8:	e3a02000 	mov	r2, #0	; 0x0
        2d89cc:	e3a00001 	mov	r0, #1	; 0x1
        2d89d0:	0a000007 	beq	2d89f4 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x26c>
        2d89d4:	e5d41000 	ldrb	r1, [r4]
        2d89d8:	e3310020 	teq	r1, #32	; 0x20
        2d89dc:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2d89e0:	e5d41002 	ldrb	r1, [r4, #2]	; fField2
        2d89e4:	e201100f 	and	r1, r1, #15	; 0xf
        2d89e8:	e3510006 	cmp	r1, #6	; 0x6
        2d89ec:	d91ba810 	ldmledb	fp, {r4, fp, sp, pc}
        2d89f0:	ea000007 	b	2d8a14 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x28c>
        2d89f4:	e5d41001 	ldrb	r1, [r4, #1]	; fField1
        2d89f8:	e3310020 	teq	r1, #32	; 0x20
        2d89fc:	1331001f 	teqne	r1, #31	; 0x1f
        2d8a00:	1a000003 	bne	2d8a14 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x28c>
        2d8a04:	e5d41002 	ldrb	r1, [r4, #2]	; fField2
        2d8a08:	e201100f 	and	r1, r1, #15	; 0xf
        2d8a0c:	e3510007 	cmp	r1, #7	; 0x7
        2d8a10:	b91ba810 	ldmltdb	fp, {r4, fp, sp, pc}
        2d8a14:	e1a00002 	mov	r0, r2
        2d8a18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2d8a1c:	e5902010 	ldr	r2, [r0, #16]	; fField16
        2d8a20:	e3320000 	teq	r2, #0	; 0x0
        2d8a24:	1590100c 	ldrne	r1, [r0, #12]	; fField12
        2d8a28:	13310000 	teqne	r1, #0	; 0x0
        2d8a2c:	01a0f00e 	moveq	pc, lr
        2d8a30:	e5d23001 	ldrb	r3, [r2, #1]	; fField1
        2d8a34:	e3330012 	teq	r3, #18	; 0x12
        2d8a38:	13330001 	teqne	r3, #1	; 0x1
        2d8a3c:	13330013 	teqne	r3, #19	; 0x13
        2d8a40:	13330014 	teqne	r3, #20	; 0x14
        2d8a44:	1a000009 	bne	2d8a70 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x2e8>
        2d8a48:	e5923006 	ldr	r3, [r2, #6]
        2d8a4c:	e1a03843 	mov	r3, r3, asr #16
        2d8a50:	e590c004 	ldr	ip, [r0, #4]	; fField4
        2d8a54:	e133084c 	teq	r3, ip, asr #16
        2d8a58:	1a000004 	bne	2d8a70 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x2e8>
        2d8a5c:	e5913004 	ldr	r3, [r1, #4]	; fField4
        2d8a60:	e1a03823 	mov	r3, r3, lsr #16
        2d8a64:	e5c23007 	strb	r3, [r2, #7]
        2d8a68:	e1a03443 	mov	r3, r3, asr #8
        2d8a6c:	e5c23006 	strb	r3, [r2, #6]
        2d8a70:	e5d13001 	ldrb	r3, [r1, #1]	; fField1
        2d8a74:	e3330012 	teq	r3, #18	; 0x12
        2d8a78:	13330001 	teqne	r3, #1	; 0x1
        2d8a7c:	13330013 	teqne	r3, #19	; 0x13
        2d8a80:	13330014 	teqne	r3, #20	; 0x14
        2d8a84:	11a0f00e 	movne	pc, lr
        2d8a88:	e5913004 	ldr	r3, [r1, #4]	; fField4
        2d8a8c:	e1a03843 	mov	r3, r3, asr #16
        2d8a90:	e5900006 	ldr	r0, [r0, #6]
        2d8a94:	e1330840 	teq	r3, r0, asr #16
        2d8a98:	11a0f00e 	movne	pc, lr
        2d8a9c:	e5920006 	ldr	r0, [r2, #6]
        2d8aa0:	e1a00820 	mov	r0, r0, lsr #16
        2d8aa4:	e5c10005 	strb	r0, [r1, #5]
        2d8aa8:	e1a00440 	mov	r0, r0, asr #8
        2d8aac:	e5c10004 	strb	r0, [r1, #4]	; fField4
        2d8ab0:	e1a0f00e 	mov	pc, lr
        2d8ab4:	e1a0c00d 	mov	ip, sp
        2d8ab8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d8abc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d8ac0:	e1a04000 	mov	r4, r0
        2d8ac4:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2d8ac8:	e3300000 	teq	r0, #0	; 0x0
        2d8acc:	0a000008 	beq	2d8af4 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x36c>
        2d8ad0:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        2d8ad4:	e1a04000 	mov	r4, r0
        2d8ad8:	ebffffb4 	bl	2d89b0 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x228>
        2d8adc:	e3300000 	teq	r0, #0	; 0x0
        2d8ae0:	11a00004 	movne	r0, r4
        2d8ae4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2d8ae8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2d8aec:	e3300000 	teq	r0, #0	; 0x0
        2d8af0:	1afffff6 	bne	2d8ad0 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x348>
        2d8af4:	e3a00000 	mov	r0, #0	; 0x0
        2d8af8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2d8afc:	e1a0c00d 	mov	ip, sp
        2d8b00:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d8b04:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d8b08:	e1b04000 	movs	r4, r0
        2d8b0c:	0a000007 	beq	2d8b30 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x3a8>
        2d8b10:	e1a00004 	mov	r0, r4
        2d8b14:	ebffffa5 	bl	2d89b0 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x228>
        2d8b18:	e3300000 	teq	r0, #0	; 0x0
        2d8b1c:	11a00004 	movne	r0, r4
        2d8b20:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2d8b24:	e5944010 	ldr	r4, [r4, #16]	; fField16
        2d8b28:	e3340000 	teq	r4, #0	; 0x0
        2d8b2c:	1afffff7 	bne	2d8b10 <TEWorldClient::DispatchPacket(unsigned char *, unsigned long)+0x388>
        2d8b30:	e3a00000 	mov	r0, #0	; 0x0
        2d8b34:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

