#include "DDKIncludes/Packages/PartHandler.h"

/**
 * Symbol: TEndpointPipe::Init(TEndpoint *, long, long, unsigned long, unsigned char)
 * Address: 000ad0f0
 */
TEndpointPipe::Init(TEndpoint *, long, long, unsigned long, unsigned char) {
    /*
         ad0f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointPipe::__ct(void)
 * Address: 000ad0f4
 */
TEndpointPipe::TEndpointPipe(void) {
    /*
         ad0f4:	e1a0c00d 	mov	ip, sp
         ad0f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ad0fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad100:	e1b04000 	movs	r4, r0
         ad104:	1a000003 	bne	ad118 <TEndpointPipe::__ct(void)+0x24>
         ad108:	e3a0002c 	mov	r0, #44	; 0x2c
         ad10c:	eb6c8589 	bl	1bce738 <$__nw(unsigned int)>
         ad110:	e1b04000 	movs	r4, r0
         ad114:	0a00000b 	beq	ad148 <TEndpointPipe::__ct(void)+0x54>
         ad118:	e1a00004 	mov	r0, r4
         ad11c:	eb6cd828 	bl	1be31c4 <CBufferPipe::$__ct(void)>
         ad120:	e59f0028 	ldr	r0, [pc, #28]	; ad150 <TEndpointPipe::__ct(void)+0x5c>	; fField28
         ad124:	e5840000 	str	r0, [r4]
         ad128:	e3a00000 	mov	r0, #0	; 0x0
         ad12c:	e5840010 	str	r0, [r4, #16]	; fField16
         ad130:	e5840014 	str	r0, [r4, #20]	; fField20
         ad134:	e5c40018 	strb	r0, [r4, #24]	; fField24
         ad138:	e584001c 	str	r0, [r4, #28]	; fField28
         ad13c:	e5840020 	str	r0, [r4, #32]	; fField32
         ad140:	e5840024 	str	r0, [r4, #36]	; fField36
         ad144:	e5c40028 	strb	r0, [r4, #40]	; fField40
         ad148:	e1a00004 	mov	r0, r4
         ad14c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         ad150:	0001cbb0 	streqh	ip, [r1], -r0
    */
}

/**
 * Symbol: TEndpointPipe::RemoveFromAppWorld(void)
 * Address: 000ad154
 */
TEndpointPipe::RemoveFromAppWorld(void) {
    /*
         ad154:	e1a0c00d 	mov	ip, sp
         ad158:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ad15c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad160:	e1a04000 	mov	r4, r0
         ad164:	e5900010 	ldr	r0, [r0, #16]	; fField16
         ad168:	e59f505c 	ldr	r5, [pc, #5c]	; ad1cc <TEndpointPipe::RemoveFromAppWorld(void)+0x78>
         ad16c:	e3300000 	teq	r0, #0	; 0x0
         ad170:	1a000004 	bne	ad188 <TEndpointPipe::RemoveFromAppWorld(void)+0x34>
         ad174:	e3a02000 	mov	r2, #0	; 0x0
         ad178:	e3a01046 	mov	r1, #70	; 0x46
         ad17c:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         ad180:	e5950000 	ldr	r0, [r5]
         ad184:	eb6cd804 	bl	1be319c <$Throw>
         ad188:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
         ad18c:	e3300000 	teq	r0, #0	; 0x0
         ad190:	0a000004 	beq	ad1a8 <TEndpointPipe::RemoveFromAppWorld(void)+0x54>
         ad194:	e3a02000 	mov	r2, #0	; 0x0
         ad198:	e3a010c9 	mov	r1, #201	; 0xc9
         ad19c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         ad1a0:	e5950000 	ldr	r0, [r5]
         ad1a4:	eb6cd7fc 	bl	1be319c <$Throw>
         ad1a8:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         ad1ac:	eb6c36d5 	bl	1bbad08 <TEndpoint::$RemoveFromAppWorld(void)>
         ad1b0:	e3300000 	teq	r0, #0	; 0x0
         ad1b4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         ad1b8:	e1a01000 	mov	r1, r0
         ad1bc:	e3a02000 	mov	r2, #0	; 0x0
         ad1c0:	e5950000 	ldr	r0, [r5]
         ad1c4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         ad1c8:	ea6cd7f3 	b	1be319c <$Throw>
         ad1cc:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEndpointPipe::Overflow(void)
 * Address: 000ad1d0
 */
TEndpointPipe::Overflow(void) {
    /*
         ad1d0:	e1a0c00d 	mov	ip, sp
         ad1d4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         ad1d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad1dc:	e1a04000 	mov	r4, r0
         ad1e0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         ad1e4:	e59f6138 	ldr	r6, [pc, #138]	; ad324 <TEndpointPipe::Overflow(void)+0x154>
         ad1e8:	e3300000 	teq	r0, #0	; 0x0
         ad1ec:	15940008 	ldrne	r0, [r4, #8]	; fField8
         ad1f0:	13300000 	teqne	r0, #0	; 0x0
         ad1f4:	1a000004 	bne	ad20c <TEndpointPipe::Overflow(void)+0x3c>
         ad1f8:	e3a02000 	mov	r2, #0	; 0x0
         ad1fc:	e3a01046 	mov	r1, #70	; 0x46
         ad200:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         ad204:	e5960000 	ldr	r0, [r6]
         ad208:	eb6cd7e3 	bl	1be319c <$Throw>
         ad20c:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
         ad210:	e3a050c9 	mov	r5, #201	; 0xc9
         ad214:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
         ad218:	e3300000 	teq	r0, #0	; 0x0
         ad21c:	0a000003 	beq	ad230 <TEndpointPipe::Overflow(void)+0x60>
         ad220:	e3a02000 	mov	r2, #0	; 0x0
         ad224:	e1a01005 	mov	r1, r5
         ad228:	e5960000 	ldr	r0, [r6]
         ad22c:	eb6cd7da 	bl	1be319c <$Throw>
         ad230:	e5940008 	ldr	r0, [r4, #8]	; fField8
         ad234:	e5901000 	ldr	r1, [r0]
         ad238:	e1a0e00f 	mov	lr, pc
         ad23c:	e281f02c 	add	pc, r1, #44	; 0x2c
         ad240:	e1a08000 	mov	r8, r0
         ad244:	e3e02000 	mvn	r2, #0	; 0x0
         ad248:	e3a01000 	mov	r1, #0	; 0x0
         ad24c:	e5940008 	ldr	r0, [r4, #8]	; fField8
         ad250:	e5903000 	ldr	r3, [r0]
         ad254:	e1a0e00f 	mov	lr, pc
         ad258:	e283f038 	add	pc, r3, #56	; 0x38
         ad25c:	e3a0c001 	mov	ip, #1	; 0x1
         ad260:	e5d40018 	ldrb	r0, [r4, #24]	; fField24
         ad264:	e3300000 	teq	r0, #0	; 0x0
         ad268:	13a0c003 	movne	ip, #3	; 0x3
         ad26c:	e3a03000 	mov	r3, #0	; 0x0
         ad270:	e3a02001 	mov	r2, #1	; 0x1
         ad274:	e92d000c 	stmdb	sp!, {r2, r3}
         ad278:	e1a0200c 	mov	r2, ip
         ad27c:	e2843010 	add	r3, r4, #16	; 0x10
         ad280:	e8930009 	ldmia	r3, {r0, r3}
         ad284:	e5941008 	ldr	r1, [r4, #8]	; fField8
         ad288:	eb65707e 	bl	1a09488 <TEndpoint::$nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
         ad28c:	e28dd008 	add	sp, sp, #8	; 0x8
         ad290:	e1b07000 	movs	r7, r0
         ad294:	05940024 	ldreq	r0, [r4, #36]	; fField36
         ad298:	00800008 	addeq	r0, r0, r8
         ad29c:	05840024 	streq	r0, [r4, #36]	; fField36
         ad2a0:	0a00000b 	beq	ad2d4 <TEndpointPipe::Overflow(void)+0x104>
         ad2a4:	e3a02001 	mov	r2, #1	; 0x1
         ad2a8:	e3a01000 	mov	r1, #0	; 0x0
         ad2ac:	e5940008 	ldr	r0, [r4, #8]	; fField8
         ad2b0:	e5903000 	ldr	r3, [r0]
         ad2b4:	e1a0e00f 	mov	lr, pc
         ad2b8:	e283f038 	add	pc, r3, #56	; 0x38
         ad2bc:	e3370000 	teq	r7, #0	; 0x0
         ad2c0:	0a000003 	beq	ad2d4 <TEndpointPipe::Overflow(void)+0x104>
         ad2c4:	e1a01007 	mov	r1, r7
         ad2c8:	e3a02000 	mov	r2, #0	; 0x0
         ad2cc:	e5960000 	ldr	r0, [r6]
         ad2d0:	eb6cd7b1 	bl	1be319c <$Throw>
         ad2d4:	e5940008 	ldr	r0, [r4, #8]	; fField8
         ad2d8:	e5901000 	ldr	r1, [r0]
         ad2dc:	e1a0e00f 	mov	lr, pc
         ad2e0:	e281f028 	add	pc, r1, #40	; 0x28
         ad2e4:	e594301c 	ldr	r3, [r4, #28]	; fField28
         ad2e8:	e3330000 	teq	r3, #0	; 0x0
         ad2ec:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ad2f0:	e1a00003 	mov	r0, r3
         ad2f4:	e284401c 	add	r4, r4, #28	; 0x1c
         ad2f8:	e9b40006 	ldmib	r4!, {r1, r2}
         ad2fc:	e5933000 	ldr	r3, [r3]
         ad300:	e1a0e00f 	mov	lr, pc
         ad304:	e283f004 	add	pc, r3, #4	; 0x4
         ad308:	e3300000 	teq	r0, #0	; 0x0
         ad30c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ad310:	e3a02000 	mov	r2, #0	; 0x0
         ad314:	e1a01005 	mov	r1, r5
         ad318:	e5960000 	ldr	r0, [r6]
         ad31c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         ad320:	ea6cd79d 	b	1be319c <$Throw>
         ad324:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEndpointPipe::Underflow(long, unsigned char &)
 * Address: 000ad328
 */
TEndpointPipe::Underflow(long, unsigned char &) {
    /*
         ad328:	e1a0c00d 	mov	ip, sp
         ad32c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         ad330:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad334:	e1a04000 	mov	r4, r0
         ad338:	e1a05001 	mov	r5, r1
         ad33c:	e1a06002 	mov	r6, r2
         ad340:	e5900010 	ldr	r0, [r0, #16]	; fField16
         ad344:	e59f8164 	ldr	r8, [pc, #164]	; ad4b0 <TEndpointPipe::Underflow(long, unsigned char &)+0x188>
         ad348:	e3300000 	teq	r0, #0	; 0x0
         ad34c:	15940004 	ldrne	r0, [r4, #4]	; TEndpointPipe
         ad350:	13300000 	teqne	r0, #0	; 0x0
         ad354:	1a000004 	bne	ad36c <TEndpointPipe::Underflow(long, unsigned char &)+0x44>
         ad358:	e3a02000 	mov	r2, #0	; 0x0
         ad35c:	e3a01046 	mov	r1, #70	; 0x46
         ad360:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         ad364:	e5980000 	ldr	r0, [r8]
         ad368:	eb6cd78b 	bl	1be319c <$Throw>
         ad36c:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
         ad370:	e3a070c9 	mov	r7, #201	; 0xc9
         ad374:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
         ad378:	e3300000 	teq	r0, #0	; 0x0
         ad37c:	0a000003 	beq	ad390 <TEndpointPipe::Underflow(long, unsigned char &)+0x68>
         ad380:	e3a02000 	mov	r2, #0	; 0x0
         ad384:	e1a01007 	mov	r1, r7
         ad388:	e5980000 	ldr	r0, [r8]
         ad38c:	eb6cd782 	bl	1be319c <$Throw>
         ad390:	e3a00000 	mov	r0, #0	; 0x0
         ad394:	e52d0004 	str	r0, [sp, -#4]!	; TEndpointPipe
         ad398:	e5d40018 	ldrb	r0, [r4, #24]	; fField24
         ad39c:	e3300000 	teq	r0, #0	; 0x0
         ad3a0:	13a00002 	movne	r0, #2	; 0x2
         ad3a4:	158d0000 	strne	r0, [sp]
         ad3a8:	e5940004 	ldr	r0, [r4, #4]	; TEndpointPipe
         ad3ac:	e5901000 	ldr	r1, [r0]
         ad3b0:	e1a0e00f 	mov	lr, pc
         ad3b4:	e281f028 	add	pc, r1, #40	; 0x28
         ad3b8:	e5940004 	ldr	r0, [r4, #4]	; TEndpointPipe
         ad3bc:	e5901000 	ldr	r1, [r0]
         ad3c0:	e1a0e00f 	mov	lr, pc
         ad3c4:	e281f02c 	add	pc, r1, #44	; 0x2c
         ad3c8:	e1500005 	cmp	r0, r5
         ad3cc:	aa000004 	bge	ad3e4 <TEndpointPipe::Underflow(long, unsigned char &)+0xbc>
         ad3d0:	e5940004 	ldr	r0, [r4, #4]	; TEndpointPipe
         ad3d4:	e5901000 	ldr	r1, [r0]
         ad3d8:	e1a0e00f 	mov	lr, pc
         ad3dc:	e281f02c 	add	pc, r1, #44	; 0x2c
         ad3e0:	e1a05000 	mov	r5, r0
         ad3e4:	e3a03000 	mov	r3, #0	; 0x0
         ad3e8:	e3a02001 	mov	r2, #1	; 0x1
         ad3ec:	e5941014 	ldr	r1, [r4, #20]	; fField20
         ad3f0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         ad3f4:	e28d300c 	add	r3, sp, #12	; 0xc
         ad3f8:	e1a02005 	mov	r2, r5
         ad3fc:	e5940010 	ldr	r0, [r4, #16]	; fField16
         ad400:	e5941004 	ldr	r1, [r4, #4]	; TEndpointPipe
         ad404:	eb65701d 	bl	1a09480 <TEndpoint::$nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
         ad408:	e28dd00c 	add	sp, sp, #12	; 0xc
         ad40c:	e1b05000 	movs	r5, r0
         ad410:	e5940004 	ldr	r0, [r4, #4]	; TEndpointPipe
         ad414:	0a000026 	beq	ad4b4 <TEndpointPipe::Underflow(long, unsigned char &)+0x18c>
         ad418:	e3a02001 	mov	r2, #1	; 0x1
         ad41c:	e3a01000 	mov	r1, #0	; 0x0
         ad420:	e5903000 	ldr	r3, [r0]
         ad424:	e1a0e00f 	mov	lr, pc
         ad428:	e283f038 	add	pc, r3, #56	; 0x38
         ad42c:	e3350000 	teq	r5, #0	; 0x0
         ad430:	0a000003 	beq	ad444 <TEndpointPipe::Underflow(long, unsigned char &)+0x11c>
         ad434:	e1a01005 	mov	r1, r5
         ad438:	e3a02000 	mov	r2, #0	; 0x0
         ad43c:	e5980000 	ldr	r0, [r8]
         ad440:	eb6cd755 	bl	1be319c <$Throw>
         ad444:	e59d0000 	ldr	r0, [sp]
         ad448:	e3100001 	tst	r0, #1	; 0x1
         ad44c:	03a00001 	moveq	r0, #1	; 0x1
         ad450:	13a00000 	movne	r0, #0	; 0x0
         ad454:	e5c60000 	strb	r0, [r6]
         ad458:	e3e02000 	mvn	r2, #0	; 0x0
         ad45c:	e3a01000 	mov	r1, #0	; 0x0
         ad460:	e5940004 	ldr	r0, [r4, #4]	; TEndpointPipe
         ad464:	e5903000 	ldr	r3, [r0]
         ad468:	e1a0e00f 	mov	lr, pc
         ad46c:	e283f038 	add	pc, r3, #56	; 0x38
         ad470:	e594301c 	ldr	r3, [r4, #28]	; fField28
         ad474:	e3330000 	teq	r3, #0	; 0x0
         ad478:	0a00000b 	beq	ad4ac <TEndpointPipe::Underflow(long, unsigned char &)+0x184>
         ad47c:	e1a00003 	mov	r0, r3
         ad480:	e284401c 	add	r4, r4, #28	; 0x1c
         ad484:	e9b40006 	ldmib	r4!, {r1, r2}
         ad488:	e5933000 	ldr	r3, [r3]
         ad48c:	e1a0e00f 	mov	lr, pc
         ad490:	e283f004 	add	pc, r3, #4	; 0x4
         ad494:	e3300000 	teq	r0, #0	; 0x0
         ad498:	1a000003 	bne	ad4ac <TEndpointPipe::Underflow(long, unsigned char &)+0x184>
         ad49c:	e3a02000 	mov	r2, #0	; 0x0
         ad4a0:	e1a01007 	mov	r1, r7
         ad4a4:	e5980000 	ldr	r0, [r8]
         ad4a8:	eb6cd73b 	bl	1be319c <$Throw>
         ad4ac:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ad4b0:	00371324 	eoreqs	r1, r7, r4, lsr #6
         ad4b4:	e5901000 	ldr	r1, [r0]
         ad4b8:	e1a0e00f 	mov	lr, pc
         ad4bc:	e281f02c 	add	pc, r1, #44	; 0x2c
         ad4c0:	e5941020 	ldr	r1, [r4, #32]	; fField32
         ad4c4:	e0800001 	add	r0, r0, r1
         ad4c8:	e5840020 	str	r0, [r4, #32]	; fField32
         ad4cc:	eaffffdc 	b	ad444 <TEndpointPipe::Underflow(long, unsigned char &)+0x11c>
    */
}

/**
 * Symbol: TEndpointPipe::FlushWrite(void)
 * Address: 000ad4d0
 */
TEndpointPipe::FlushWrite(void) {
    /*
         ad4d0:	e1a0c00d 	mov	ip, sp
         ad4d4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ad4d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad4dc:	e1a04000 	mov	r4, r0
         ad4e0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         ad4e4:	e59f5124 	ldr	r5, [pc, #124]	; ad610 <TEndpointPipe::FlushWrite(void)+0x140>
         ad4e8:	e3300000 	teq	r0, #0	; 0x0
         ad4ec:	15940008 	ldrne	r0, [r4, #8]	; fField8
         ad4f0:	13300000 	teqne	r0, #0	; 0x0
         ad4f4:	1a000004 	bne	ad50c <TEndpointPipe::FlushWrite(void)+0x3c>
         ad4f8:	e3a02000 	mov	r2, #0	; 0x0
         ad4fc:	e3a01046 	mov	r1, #70	; 0x46
         ad500:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         ad504:	e5950000 	ldr	r0, [r5]
         ad508:	eb6cd723 	bl	1be319c <$Throw>
         ad50c:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
         ad510:	e3300000 	teq	r0, #0	; 0x0
         ad514:	0a000004 	beq	ad52c <TEndpointPipe::FlushWrite(void)+0x5c>
         ad518:	e3a02000 	mov	r2, #0	; 0x0
         ad51c:	e3a010c9 	mov	r1, #201	; 0xc9
         ad520:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         ad524:	e5950000 	ldr	r0, [r5]
         ad528:	eb6cd71b 	bl	1be319c <$Throw>
         ad52c:	e5940008 	ldr	r0, [r4, #8]	; fField8
         ad530:	e3300000 	teq	r0, #0	; 0x0
         ad534:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         ad538:	e5901000 	ldr	r1, [r0]
         ad53c:	e1a0e00f 	mov	lr, pc
         ad540:	e281f03c 	add	pc, r1, #60	; 0x3c
         ad544:	e1a06000 	mov	r6, r0
         ad548:	e5940008 	ldr	r0, [r4, #8]	; fField8
         ad54c:	e5901000 	ldr	r1, [r0]
         ad550:	e1a0e00f 	mov	lr, pc
         ad554:	e281f02c 	add	pc, r1, #44	; 0x2c
         ad558:	e1560000 	cmp	r6, r0
         ad55c:	aa000006 	bge	ad57c <TEndpointPipe::FlushWrite(void)+0xac>
         ad560:	e0401006 	sub	r1, r0, r6
         ad564:	e5943008 	ldr	r3, [r4, #8]	; fField8
         ad568:	e1a00003 	mov	r0, r3
         ad56c:	e3a02001 	mov	r2, #1	; 0x1
         ad570:	e5933000 	ldr	r3, [r3]
         ad574:	e1a0e00f 	mov	lr, pc
         ad578:	e283f034 	add	pc, r3, #52	; 0x34
         ad57c:	e3e02000 	mvn	r2, #0	; 0x0
         ad580:	e3a01000 	mov	r1, #0	; 0x0
         ad584:	e5940008 	ldr	r0, [r4, #8]	; fField8
         ad588:	e5903000 	ldr	r3, [r0]
         ad58c:	e1a0e00f 	mov	lr, pc
         ad590:	e283f038 	add	pc, r3, #56	; 0x38
         ad594:	e3a0c000 	mov	ip, #0	; 0x0
         ad598:	e5d40018 	ldrb	r0, [r4, #24]	; fField24
         ad59c:	e3300000 	teq	r0, #0	; 0x0
         ad5a0:	13a0c002 	movne	ip, #2	; 0x2
         ad5a4:	e3a03000 	mov	r3, #0	; 0x0
         ad5a8:	e3a02001 	mov	r2, #1	; 0x1
         ad5ac:	e92d000c 	stmdb	sp!, {r2, r3}
         ad5b0:	e1a0200c 	mov	r2, ip
         ad5b4:	e2843010 	add	r3, r4, #16	; 0x10
         ad5b8:	e8930009 	ldmia	r3, {r0, r3}
         ad5bc:	e5941008 	ldr	r1, [r4, #8]	; fField8
         ad5c0:	eb656fb0 	bl	1a09488 <TEndpoint::$nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
         ad5c4:	e28dd008 	add	sp, sp, #8	; 0x8
         ad5c8:	e1b06000 	movs	r6, r0
         ad5cc:	0a00000b 	beq	ad600 <TEndpointPipe::FlushWrite(void)+0x130>
         ad5d0:	e3a02001 	mov	r2, #1	; 0x1
         ad5d4:	e3a01000 	mov	r1, #0	; 0x0
         ad5d8:	e5940008 	ldr	r0, [r4, #8]	; fField8
         ad5dc:	e5903000 	ldr	r3, [r0]
         ad5e0:	e1a0e00f 	mov	lr, pc
         ad5e4:	e283f038 	add	pc, r3, #56	; 0x38
         ad5e8:	e3360000 	teq	r6, #0	; 0x0
         ad5ec:	0a000003 	beq	ad600 <TEndpointPipe::FlushWrite(void)+0x130>
         ad5f0:	e1a01006 	mov	r1, r6
         ad5f4:	e3a02000 	mov	r2, #0	; 0x0
         ad5f8:	e5950000 	ldr	r0, [r5]
         ad5fc:	eb6cd6e6 	bl	1be319c <$Throw>
         ad600:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
         ad604:	e5901000 	ldr	r1, [r0]
         ad608:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ad60c:	e281f028 	add	pc, r1, #40	; 0x28
         ad610:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEndpointPipe::FlushRead(void)
 * Address: 000ad614
 */
TEndpointPipe::FlushRead(void) {
    /*
         ad614:	e1a0c00d 	mov	ip, sp
         ad618:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ad61c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad620:	e1a04000 	mov	r4, r0
         ad624:	e5900010 	ldr	r0, [r0, #16]	; fField16
         ad628:	e59f5074 	ldr	r5, [pc, #74]	; ad6a4 <TEndpointPipe::FlushRead(void)+0x90>
         ad62c:	e3300000 	teq	r0, #0	; 0x0
         ad630:	15940004 	ldrne	r0, [r4, #4]	; TEndpointPipe
         ad634:	13300000 	teqne	r0, #0	; 0x0
         ad638:	1a000004 	bne	ad650 <TEndpointPipe::FlushRead(void)+0x3c>
         ad63c:	e3a02000 	mov	r2, #0	; 0x0
         ad640:	e3a01046 	mov	r1, #70	; 0x46
         ad644:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         ad648:	e5950000 	ldr	r0, [r5]
         ad64c:	eb6cd6d2 	bl	1be319c <$Throw>
         ad650:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
         ad654:	e3300000 	teq	r0, #0	; 0x0
         ad658:	0a000004 	beq	ad670 <TEndpointPipe::FlushRead(void)+0x5c>
         ad65c:	e3a02000 	mov	r2, #0	; 0x0
         ad660:	e3a010c9 	mov	r1, #201	; 0xc9
         ad664:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         ad668:	e5950000 	ldr	r0, [r5]
         ad66c:	eb6cd6ca 	bl	1be319c <$Throw>
         ad670:	e5940004 	ldr	r0, [r4, #4]	; TEndpointPipe
         ad674:	e5901000 	ldr	r1, [r0]
         ad678:	e1a0e00f 	mov	lr, pc
         ad67c:	e281f028 	add	pc, r1, #40	; 0x28
         ad680:	e3a02001 	mov	r2, #1	; 0x1
         ad684:	e3a01000 	mov	r1, #0	; 0x0
         ad688:	e5940004 	ldr	r0, [r4, #4]	; TEndpointPipe
         ad68c:	e5903000 	ldr	r3, [r0]
         ad690:	e1a0e00f 	mov	lr, pc
         ad694:	e283f038 	add	pc, r3, #56	; 0x38
         ad698:	e3a00000 	mov	r0, #0	; 0x0
         ad69c:	e5c4000d 	strb	r0, [r4, #13]	; fField13
         ad6a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         ad6a4:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEndpointPipe::ResetWrite(void)
 * Address: 000ad6a8
 */
TEndpointPipe::ResetWrite(void) {
    /*
         ad6a8:	e3a01000 	mov	r1, #0	; 0x0
         ad6ac:	e5801024 	str	r1, [r0, #36]	; fField36
         ad6b0:	ea6c042f 	b	1bae774 <CBufferPipe::$ResetWrite(void)>
    */
}

/**
 * Symbol: TEndpointPipe::ResetRead(void)
 * Address: 000ad6b4
 */
TEndpointPipe::ResetRead(void) {
    /*
         ad6b4:	e3a01000 	mov	r1, #0	; 0x0
         ad6b8:	e5801020 	str	r1, [r0, #32]	; fField32
         ad6bc:	ea6c042a 	b	1bae76c <CBufferPipe::$ResetRead(void)>
    */
}

/**
 * Symbol: TEndpointPipe::Abort(void)
 * Address: 000ad6c0
 */
TEndpointPipe::Abort(void) {
    /*
         ad6c0:	e1a0c00d 	mov	ip, sp
         ad6c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ad6c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad6cc:	e1a04000 	mov	r4, r0
         ad6d0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         ad6d4:	e3300000 	teq	r0, #0	; 0x0
         ad6d8:	0a000006 	beq	ad6f8 <TEndpointPipe::Abort(void)+0x38>
         ad6dc:	e3a01001 	mov	r1, #1	; 0x1
         ad6e0:	eb656b4c 	bl	1a08418 <TEndpoint::$IsPending(unsigned long)>
         ad6e4:	e3300000 	teq	r0, #0	; 0x0
         ad6e8:	13a01001 	movne	r1, #1	; 0x1
         ad6ec:	15b40010 	ldrne	r0, [r4, #16]!	; fField16
         ad6f0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         ad6f4:	1a6d4606 	bne	1bfef14 <TEndpoint::$nAbort(unsigned char)>
         ad6f8:	e3a00001 	mov	r0, #1	; 0x1
         ad6fc:	e5c40028 	strb	r0, [r4, #40]	; fField40
         ad700:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpointPipe::__dt(void)
 * Address: 000ad704
 */
TEndpointPipe::~TEndpointPipe(void) {
    /*
         ad704:	e1a0c00d 	mov	ip, sp
         ad708:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ad70c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad710:	e1a04000 	mov	r4, r0
         ad714:	e1a05001 	mov	r5, r1
         ad718:	e59f0020 	ldr	r0, [pc, #20]	; ad740 <TEndpointPipe::__dt(void)+0x3c>	; fField20
         ad71c:	e5840000 	str	r0, [r4]
         ad720:	e1a00004 	mov	r0, r4
         ad724:	e3a01000 	mov	r1, #0	; 0x0
         ad728:	eb6cdac9 	bl	1be4254 <CBufferPipe::$__dt(void)>
         ad72c:	e3150001 	tst	r5, #1	; 0x1
         ad730:	11a00004 	movne	r0, r4
         ad734:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         ad738:	1a6c7fe8 	bne	1bcd6e0 <$__dl(void *)>
         ad73c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         ad740:	0001cbb0 	streqh	ip, [r1], -r0
    */
}

/**
 * Symbol: TEndpointPipe::Init(TEndpoint *, long, long, unsigned long, unsigned char, PipeCallBack *)
 * Address: 000ad744
 */
TEndpointPipe::Init(TEndpoint *, long, long, unsigned long, unsigned char, PipeCallBack *) {
    /*
         ad744:	e1a0c00d 	mov	ip, sp
         ad748:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         ad74c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad750:	e1a04000 	mov	r4, r0
         ad754:	e1a05001 	mov	r5, r1
         ad758:	e1a01002 	mov	r1, r2
         ad75c:	e1a02003 	mov	r2, r3
         ad760:	e28b7008 	add	r7, fp, #8	; 0x8
         ad764:	e8970081 	ldmia	r7, {r0, r7}
         ad768:	e20060ff 	and	r6, r0, #255	; 0xff
         ad76c:	e1a00004 	mov	r0, r4
         ad770:	e59b8004 	ldr	r8, [fp, #4]	; TEndpointPipe
         ad774:	eb6cef45 	bl	1be9490 <CBufferPipe::$Init(long, long)>
         ad778:	e2844010 	add	r4, r4, #16	; 0x10
         ad77c:	e8840120 	stmia	r4, {r5, r8}
         ad780:	e2444010 	sub	r4, r4, #16	; 0x10
         ad784:	e5c46018 	strb	r6, [r4, #24]	; fField24
         ad788:	e5a4701c 	str	r7, [r4, #28]!	; fField28
         ad78c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpointPipe::SetTimeout(unsigned long)
 * Address: 000ad790
 */
TEndpointPipe::SetTimeout(unsigned long) {
    /*
         ad790:	e5a01014 	str	r1, [r0, #20]!	; fField20
         ad794:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointPipe::GetTimeout(void)
 * Address: 000ad798
 */
TEndpointPipe::GetTimeout(void) {
    /*
         ad798:	e5900014 	ldr	r0, [r0, #20]	; fField20
         ad79c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointPipe::UseFraming(unsigned char)
 * Address: 000ad7a0
 */
TEndpointPipe::UseFraming(unsigned char) {
    /*
         ad7a0:	e5c01018 	strb	r1, [r0, #24]	; fField24
         ad7a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointPipe::UsingFraming(void)
 * Address: 000ad7a8
 */
TEndpointPipe::UsingFraming(void) {
    /*
         ad7a8:	e5d00018 	ldrb	r0, [r0, #24]	; fField24
         ad7ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointPipe::AddToAppWorld(void)
 * Address: 000ad7b0
 */
TEndpointPipe::AddToAppWorld(void) {
    /*
         ad7b0:	e1a0c00d 	mov	ip, sp
         ad7b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ad7b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad7bc:	e1a04000 	mov	r4, r0
         ad7c0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         ad7c4:	e59f505c 	ldr	r5, [pc, #5c]	; ad828 <TEndpointPipe::AddToAppWorld(void)+0x78>
         ad7c8:	e3300000 	teq	r0, #0	; 0x0
         ad7cc:	1a000004 	bne	ad7e4 <TEndpointPipe::AddToAppWorld(void)+0x34>
         ad7d0:	e3a02000 	mov	r2, #0	; 0x0
         ad7d4:	e3a01046 	mov	r1, #70	; 0x46
         ad7d8:	e2411c37 	sub	r1, r1, #14080	; 0x3700
         ad7dc:	e5950000 	ldr	r0, [r5]
         ad7e0:	eb6cd66d 	bl	1be319c <$Throw>
         ad7e4:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
         ad7e8:	e3300000 	teq	r0, #0	; 0x0
         ad7ec:	0a000004 	beq	ad804 <TEndpointPipe::AddToAppWorld(void)+0x54>
         ad7f0:	e3a02000 	mov	r2, #0	; 0x0
         ad7f4:	e3a010c9 	mov	r1, #201	; 0xc9
         ad7f8:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         ad7fc:	e5950000 	ldr	r0, [r5]
         ad800:	eb6cd665 	bl	1be319c <$Throw>
         ad804:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         ad808:	eb6c24d5 	bl	1bb6b64 <TEndpoint::$AddToAppWorld(void)>
         ad80c:	e3300000 	teq	r0, #0	; 0x0
         ad810:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         ad814:	e1a01000 	mov	r1, r0
         ad818:	e3a02000 	mov	r2, #0	; 0x0
         ad81c:	e5950000 	ldr	r0, [r5]
         ad820:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         ad824:	ea6cd65c 	b	1be319c <$Throw>
         ad828:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

