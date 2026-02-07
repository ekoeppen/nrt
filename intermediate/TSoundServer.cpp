#include "include/TSoundServer.h"

/**
 * Symbol: TSoundServer::__ct(void)
 * Address: 001e81cc
 */
TSoundServer::TSoundServer(void) {
    /*
        1e81cc:	e1a0c00d 	mov	ip, sp
        1e81d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e81d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e81d8:	e1b04000 	movs	r4, r0
        1e81dc:	1a000003 	bne	1e81f0 <TSoundServer::__ct(void)+0x24>
        1e81e0:	e3a00f41 	mov	r0, #260	; 0x104
        1e81e4:	eb679953 	bl	1bce738 <$__nw(unsigned int)>
        1e81e8:	e1b04000 	movs	r4, r0
        1e81ec:	0a00001d 	beq	1e8268 <TSoundServer::__ct(void)+0x9c>
        1e81f0:	e1a00004 	mov	r0, r4
        1e81f4:	eb67f012 	bl	1be4244 <TAppWorld::$__ct(void)>
        1e81f8:	e284007c 	add	r0, r4, #124	; 0x7c
        1e81fc:	eb664eea 	bl	1b7bdac <TSoundServerHandler::$__ct(void)>
        1e8200:	e2840094 	add	r0, r4, #148	; 0x94
        1e8204:	eb664ee6 	bl	1b7bda4 <TSoundPowerHandler::$__ct(void)>
        1e8208:	e59f0060 	ldr	r0, [pc, #60]	; 1e8270 <TSoundServer::__ct(void)+0xa4>
        1e820c:	e5840000 	str	r0, [r4]
        1e8210:	e3a00000 	mov	r0, #0	; 0x0
        1e8214:	e5840070 	str	r0, [r4, #112]	; fField112
        1e8218:	e5840074 	str	r0, [r4, #116]	; fField116
        1e821c:	e5840078 	str	r0, [r4, #120]	; fField120
        1e8220:	e58400b8 	str	r0, [r4, #184]	; fField184
        1e8224:	e58400bc 	str	r0, [r4, #188]	; fField188
        1e8228:	e58400c0 	str	r0, [r4, #192]	; fField192
        1e822c:	e58400c4 	str	r0, [r4, #196]	; fField196
        1e8230:	e58400c8 	str	r0, [r4, #200]	; fField200
        1e8234:	e58400cc 	str	r0, [r4, #204]	; fField204
        1e8238:	e58400d0 	str	r0, [r4, #208]
        1e823c:	e58400d4 	str	r0, [r4, #212]
        1e8240:	e58400d8 	str	r0, [r4, #216]	; fField216
        1e8244:	e58400dc 	str	r0, [r4, #220]	; fField220
        1e8248:	e58400e0 	str	r0, [r4, #224]	; fField224
        1e824c:	e58400e4 	str	r0, [r4, #228]	; fField228
        1e8250:	e58400e8 	str	r0, [r4, #232]
        1e8254:	e58400ec 	str	r0, [r4, #236]
        1e8258:	e58400f0 	str	r0, [r4, #240]	; fField240
        1e825c:	e5c400f4 	strb	r0, [r4, #244]	; fField244
        1e8260:	e58400fc 	str	r0, [r4, #252]	; fField252
        1e8264:	e58400f8 	str	r0, [r4, #248]	; fField248
        1e8268:	e1a00004 	mov	r0, r4
        1e826c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1e8270:	0001c5e8 	andeq	ip, r1, r8, ror #11
    */
}

/**
 * Symbol: TSoundServer::MainConstructor(void)
 * Address: 001e8274
 */
TSoundServer::MainConstructor(void) {
    /*
        1e8274:	e1a0c00d 	mov	ip, sp
        1e8278:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e827c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8280:	e1a04000 	mov	r4, r0
        1e8284:	eb67151c 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
        1e8288:	e3300000 	teq	r0, #0	; 0x0
        1e828c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e8290:	e28f1f8e 	add	r1, pc, #568	; 0x238
        1e8294:	e28f0f92 	add	r0, pc, #584	; 0x248
        1e8298:	eb67be3b 	bl	1bd7b8c <$NewByName__FPCcT1>
        1e829c:	e59f5250 	ldr	r5, [pc, #250]	; 1e84f4 <TSoundServer::MainConstructor(void)+0x280>
        1e82a0:	e5850004 	str	r0, [r5, #4]	; fField4
        1e82a4:	e3300000 	teq	r0, #0	; 0x0
        1e82a8:	1a000003 	bne	1e82bc <TSoundServer::MainConstructor(void)+0x48>
        1e82ac:	e28f1f91 	add	r1, pc, #580	; 0x244
        1e82b0:	e28f0f8b 	add	r0, pc, #556	; 0x22c
        1e82b4:	eb67be34 	bl	1bd7b8c <$NewByName__FPCcT1>
        1e82b8:	e5850004 	str	r0, [r5, #4]	; fField4
        1e82bc:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e82c0:	e3300000 	teq	r0, #0	; 0x0
        1e82c4:	03a00ead 	moveq	r0, #2768	; 0xad0
        1e82c8:	02400902 	subeq	r0, r0, #32768	; 0x8000
        1e82cc:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e82d0:	eb67e791 	bl	1be211c <$LockPtr>
        1e82d4:	e3a00eea 	mov	r0, #3744	; 0xea0
        1e82d8:	eb67e798 	bl	1be2140 <$NewPtr>
        1e82dc:	e58400b8 	str	r0, [r4, #184]	; fField184
        1e82e0:	e3300000 	teq	r0, #0	; 0x0
        1e82e4:	0a00006c 	beq	1e849c <TSoundServer::MainConstructor(void)+0x228>
        1e82e8:	e3a00eea 	mov	r0, #3744	; 0xea0
        1e82ec:	eb67e797 	bl	1be2150 <$NewWiredPtr>
        1e82f0:	e58400c8 	str	r0, [r4, #200]	; fField200
        1e82f4:	e3300000 	teq	r0, #0	; 0x0
        1e82f8:	0a000067 	beq	1e849c <TSoundServer::MainConstructor(void)+0x228>
        1e82fc:	e3a00eea 	mov	r0, #3744	; 0xea0
        1e8300:	eb67e792 	bl	1be2150 <$NewWiredPtr>
        1e8304:	e58400cc 	str	r0, [r4, #204]	; fField204
        1e8308:	e3300000 	teq	r0, #0	; 0x0
        1e830c:	0a000062 	beq	1e849c <TSoundServer::MainConstructor(void)+0x228>
        1e8310:	e3a03eea 	mov	r3, #3744	; 0xea0
        1e8314:	e92d0008 	stmdb	sp!, {r3}
        1e8318:	e1a03000 	mov	r3, r0
        1e831c:	e59410c8 	ldr	r1, [r4, #200]	; fField200
        1e8320:	e3a02eea 	mov	r2, #3744	; 0xea0
        1e8324:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e8328:	eb068374 	bl	389100 <PSoundDriver::SetOutputBuffers(unsigned long, unsigned long, unsigned long, unsigned long)>
        1e832c:	e28dd004 	add	sp, sp, #4	; 0x4
        1e8330:	e1a02004 	mov	r2, r4
        1e8334:	e59f11d0 	ldr	r1, [pc, #1d0]	; 1e850c <TSoundServer::MainConstructor(void)+0x298>
        1e8338:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e833c:	ebfff788 	bl	1e6164 <PSoundDriver::SetOutputCallbackProc(long (*)(void *), void *)>
        1e8340:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e8344:	eb679d2b 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        1e8348:	e28f1f70 	add	r1, pc, #448	; 0x1c0
        1e834c:	eb67ad8b 	bl	1bd3980 <TClassInfo::$GetCapability( const(char const *))>
        1e8350:	e3300000 	teq	r0, #0	; 0x0
        1e8354:	0a000011 	beq	1e83a0 <TSoundServer::MainConstructor(void)+0x12c>
        1e8358:	e3a00eea 	mov	r0, #3744	; 0xea0
        1e835c:	eb67e77b 	bl	1be2150 <$NewWiredPtr>
        1e8360:	e58400e0 	str	r0, [r4, #224]	; fField224
        1e8364:	e3300000 	teq	r0, #0	; 0x0
        1e8368:	0a00004b 	beq	1e849c <TSoundServer::MainConstructor(void)+0x228>
        1e836c:	e3a00eea 	mov	r0, #3744	; 0xea0
        1e8370:	eb67e776 	bl	1be2150 <$NewWiredPtr>
        1e8374:	e58400e4 	str	r0, [r4, #228]	; fField228
        1e8378:	e3300000 	teq	r0, #0	; 0x0
        1e837c:	0a000046 	beq	1e849c <TSoundServer::MainConstructor(void)+0x228>
        1e8380:	e3a03eea 	mov	r3, #3744	; 0xea0
        1e8384:	e92d0008 	stmdb	sp!, {r3}
        1e8388:	e1a03000 	mov	r3, r0
        1e838c:	e59410e0 	ldr	r1, [r4, #224]	; fField224
        1e8390:	e3a02eea 	mov	r2, #3744	; 0xea0
        1e8394:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e8398:	eb06835b 	bl	38910c <PSoundDriver::SetInputBuffers(unsigned long, unsigned long, unsigned long, unsigned long)>
        1e839c:	e28dd004 	add	sp, sp, #4	; 0x4
        1e83a0:	e1a02004 	mov	r2, r4
        1e83a4:	e59f1170 	ldr	r1, [pc, #170]	; 1e851c <TSoundServer::MainConstructor(void)+0x2a8>
        1e83a8:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e83ac:	ebfff76f 	bl	1e6170 <PSoundDriver::SetInputCallbackProc(long (*)(void *), void *)>
        1e83b0:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e83b4:	eb068360 	bl	38913c <PSoundDriver::PowerOutputOff(void)>
        1e83b8:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e83bc:	eb068364 	bl	389154 <PSoundDriver::PowerInputOff(void)>
        1e83c0:	e284007c 	add	r0, r4, #124	; 0x7c
        1e83c4:	e1a01004 	mov	r1, r4
        1e83c8:	eb664a5a 	bl	1b7ad38 <TSoundServerHandler::$Init(TSoundServer *)>
        1e83cc:	e3300000 	teq	r0, #0	; 0x0
        1e83d0:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e83d4:	e2840094 	add	r0, r4, #148	; 0x94
        1e83d8:	e1a01004 	mov	r1, r4
        1e83dc:	eb664a54 	bl	1b7ad34 <TSoundPowerHandler::$Init(TSoundServer *)>
        1e83e0:	e3300000 	teq	r0, #0	; 0x0
        1e83e4:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e83e8:	e1a00004 	mov	r0, r4
        1e83ec:	eb680012 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1e83f0:	e5850000 	str	r0, [r5]
        1e83f4:	e3a00024 	mov	r0, #36	; 0x24
        1e83f8:	eb6798ce 	bl	1bce738 <$__nw(unsigned int)>
        1e83fc:	e1b05000 	movs	r5, r0
        1e8400:	e59f8118 	ldr	r8, [pc, #118]	; 1e8520 <TSoundServer::MainConstructor(void)+0x2ac>
        1e8404:	e59f7118 	ldr	r7, [pc, #118]	; 1e8524 <TSoundServer::MainConstructor(void)+0x2b0>
        1e8408:	e3a06000 	mov	r6, #0	; 0x0
        1e840c:	0a000008 	beq	1e8434 <TSoundServer::MainConstructor(void)+0x1c0>
        1e8410:	e1a00005 	mov	r0, r5
        1e8414:	eb6794a4 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        1e8418:	e2850010 	add	r0, r5, #16	; 0x10
        1e841c:	eb67ef85 	bl	1be4238 <TAEvent::$__ct(void)>
        1e8420:	e5856018 	str	r6, [r5, #24]	; fField24
        1e8424:	e5857014 	str	r7, [r5, #20]	; fField20
        1e8428:	e5858010 	str	r8, [r5, #16]
        1e842c:	e585601c 	str	r6, [r5, #28]
        1e8430:	e5856020 	str	r6, [r5, #32]
        1e8434:	e1b00005 	movs	r0, r5
        1e8438:	e5845070 	str	r5, [r4, #112]	; fField112
        1e843c:	0a000016 	beq	1e849c <TSoundServer::MainConstructor(void)+0x228>
        1e8440:	e3a01000 	mov	r1, #0	; 0x0
        1e8444:	eb67b592 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        1e8448:	e3300000 	teq	r0, #0	; 0x0
        1e844c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e8450:	e3a00004 	mov	r0, #4	; 0x4
        1e8454:	e5941070 	ldr	r1, [r4, #112]	; fField112
        1e8458:	e5a1001c 	str	r0, [r1, #28]!
        1e845c:	e3a00024 	mov	r0, #36	; 0x24
        1e8460:	eb6798b4 	bl	1bce738 <$__nw(unsigned int)>
        1e8464:	e1b05000 	movs	r5, r0
        1e8468:	0a000008 	beq	1e8490 <TSoundServer::MainConstructor(void)+0x21c>
        1e846c:	e1a00005 	mov	r0, r5
        1e8470:	eb67948d 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        1e8474:	e2850010 	add	r0, r5, #16	; 0x10
        1e8478:	eb67ef6e 	bl	1be4238 <TAEvent::$__ct(void)>
        1e847c:	e5856018 	str	r6, [r5, #24]	; fField24
        1e8480:	e5857014 	str	r7, [r5, #20]	; fField20
        1e8484:	e5858010 	str	r8, [r5, #16]
        1e8488:	e585601c 	str	r6, [r5, #28]
        1e848c:	e5856020 	str	r6, [r5, #32]
        1e8490:	e1b00005 	movs	r0, r5
        1e8494:	e5845074 	str	r5, [r4, #116]	; fField116
        1e8498:	1a000001 	bne	1e84a4 <TSoundServer::MainConstructor(void)+0x230>
        1e849c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        1e84a0:	ea67e71e 	b	1be2120 <$MemError>
        1e84a4:	e3a01000 	mov	r1, #0	; 0x0
        1e84a8:	eb67b579 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        1e84ac:	e3300000 	teq	r0, #0	; 0x0
        1e84b0:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e84b4:	e3a01005 	mov	r1, #5	; 0x5
        1e84b8:	e5942074 	ldr	r2, [r4, #116]	; fField116
        1e84bc:	e5a2101c 	str	r1, [r2, #28]!
        1e84c0:	e58460c0 	str	r6, [r4, #192]	; fField192
        1e84c4:	e59f105c 	ldr	r1, [pc, #5c]	; 1e8528 <TSoundServer::MainConstructor(void)+0x2b4>
        1e84c8:	e5a410bc 	str	r1, [r4, #188]!	; fField188
        1e84cc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e84d0:	504d6169 	subpl	r6, sp, r9, ror #2
        1e84d4:	6e536f75 	mrcvs	15, 2, r6, cr3, cr5, {3}
        1e84d8:	6e644472 	mcrvs	4, 3, r4, cr4, cr2, {3}
        1e84dc:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        1e84e0:	00000000 	andeq	r0, r0, r0
        1e84e4:	50536f75 	subpls	r6, r3, r5, ror pc
        1e84e8:	6e644472 	mcrvs	4, 3, r4, cr4, cr2, {3}
        1e84ec:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        1e84f0:	00000000 	andeq	r0, r0, r0
        1e84f4:	0c101b10 	ldceq	11, cr1, [r0], -#64
        1e84f8:	50436972 	subpl	r6, r3, r2, ror r9
        1e84fc:	72757353 	rsbvcs	r7, r5, #1275068417	; 0x4c000001
        1e8500:	6f756e64 	swivs	0x00756e64
        1e8504:	44726976 	ldrmibt	r6, [r2], -#2422
        1e8508:	65720000 	ldrvsb	r0, [r2]!
        1e850c:	01b7ff9c 	ldreqb	pc, [r7, ip]!
        1e8510:	536f756e 	cmnpl	pc, #461373440	; 0x1b800000
        1e8514:	64496e70 	strvsb	r6, [r9], -#3696
        1e8518:	75740000 	ldrvcb	r0, [r4]!
        1e851c:	01b810cc 	moveqs	r1, ip, asr #1
        1e8520:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1e8524:	75736e64 	ldrvcb	r6, [r3, -#3684]!
        1e8528:	01b810c8 	moveqs	r1, r8, asr #1
    */
}

/**
 * Symbol: TSoundServer::MainDestructor(void)
 * Address: 001e852c
 */
TSoundServer::MainDestructor(void) {
    /*
        1e852c:	e1a0c00d 	mov	ip, sp
        1e8530:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e8534:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8538:	e1a04000 	mov	r4, r0
        1e853c:	eb664a0d 	bl	1b7ad78 <TSoundServer::$StopAll(void)>
        1e8540:	e59400c4 	ldr	r0, [r4, #196]	; fField196
        1e8544:	e3300000 	teq	r0, #0	; 0x0
        1e8548:	0a000007 	beq	1e856c <TSoundServer::MainDestructor(void)+0x40>
        1e854c:	e5905008 	ldr	r5, [r0, #8]	; fField8
        1e8550:	e3300000 	teq	r0, #0	; 0x0
        1e8554:	0a000002 	beq	1e8564 <TSoundServer::MainDestructor(void)+0x38>
        1e8558:	e3a01001 	mov	r1, #1	; 0x1
        1e855c:	e1a0e00f 	mov	lr, pc
        1e8560:	e590f000 	ldr	pc, [r0]
        1e8564:	e1b00005 	movs	r0, r5
        1e8568:	1afffff7 	bne	1e854c <TSoundServer::MainDestructor(void)+0x20>
        1e856c:	e59400dc 	ldr	r0, [r4, #220]	; fField220
        1e8570:	e3300000 	teq	r0, #0	; 0x0
        1e8574:	0a000007 	beq	1e8598 <TSoundServer::MainDestructor(void)+0x6c>
        1e8578:	e5905008 	ldr	r5, [r0, #8]	; fField8
        1e857c:	e3300000 	teq	r0, #0	; 0x0
        1e8580:	0a000002 	beq	1e8590 <TSoundServer::MainDestructor(void)+0x64>
        1e8584:	e3a01001 	mov	r1, #1	; 0x1
        1e8588:	e1a0e00f 	mov	lr, pc
        1e858c:	e590f000 	ldr	pc, [r0]
        1e8590:	e1b00005 	movs	r0, r5
        1e8594:	1afffff7 	bne	1e8578 <TSoundServer::MainDestructor(void)+0x4c>
        1e8598:	e59400fc 	ldr	r0, [r4, #252]	; fField252
        1e859c:	e3300000 	teq	r0, #0	; 0x0
        1e85a0:	0a000007 	beq	1e85c4 <TSoundServer::MainDestructor(void)+0x98>
        1e85a4:	e5905008 	ldr	r5, [r0, #8]	; fField8
        1e85a8:	e3300000 	teq	r0, #0	; 0x0
        1e85ac:	0a000002 	beq	1e85bc <TSoundServer::MainDestructor(void)+0x90>
        1e85b0:	e3a01001 	mov	r1, #1	; 0x1
        1e85b4:	e1a0e00f 	mov	lr, pc
        1e85b8:	e590f000 	ldr	pc, [r0]
        1e85bc:	e1b00005 	movs	r0, r5
        1e85c0:	1afffff7 	bne	1e85a4 <TSoundServer::MainDestructor(void)+0x78>
        1e85c4:	e59400f8 	ldr	r0, [r4, #248]	; fField248
        1e85c8:	e3300000 	teq	r0, #0	; 0x0
        1e85cc:	0a000007 	beq	1e85f0 <TSoundServer::MainDestructor(void)+0xc4>
        1e85d0:	e5905008 	ldr	r5, [r0, #8]	; fField8
        1e85d4:	e3300000 	teq	r0, #0	; 0x0
        1e85d8:	0a000002 	beq	1e85e8 <TSoundServer::MainDestructor(void)+0xbc>
        1e85dc:	e3a01001 	mov	r1, #1	; 0x1
        1e85e0:	e1a0e00f 	mov	lr, pc
        1e85e4:	e590f000 	ldr	pc, [r0]
        1e85e8:	e1b00005 	movs	r0, r5
        1e85ec:	1afffff7 	bne	1e85d0 <TSoundServer::MainDestructor(void)+0xa4>
        1e85f0:	e59f5094 	ldr	r5, [pc, #94]	; 1e868c <TSoundServer::MainDestructor(void)+0x160>
        1e85f4:	e3a06000 	mov	r6, #0	; 0x0
        1e85f8:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e85fc:	e3300000 	teq	r0, #0	; 0x0
        1e8600:	0a000001 	beq	1e860c <TSoundServer::MainDestructor(void)+0xe0>
        1e8604:	eb0682b0 	bl	3890cc <PSoundDriver::Delete(void)>
        1e8608:	e5856004 	str	r6, [r5, #4]	; fField4
        1e860c:	e5856000 	str	r6, [r5]
        1e8610:	e5945070 	ldr	r5, [r4, #112]	; fField112
        1e8614:	e3350000 	teq	r5, #0	; 0x0
        1e8618:	0a000004 	beq	1e8630 <TSoundServer::MainDestructor(void)+0x104>
        1e861c:	e1a00005 	mov	r0, r5
        1e8620:	e3a01000 	mov	r1, #0	; 0x0
        1e8624:	eb679839 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1e8628:	e1a00005 	mov	r0, r5
        1e862c:	eb67942b 	bl	1bcd6e0 <$__dl(void *)>
        1e8630:	e59400c8 	ldr	r0, [r4, #200]	; fField200
        1e8634:	eb67a8c7 	bl	1bd2958 <$free>
        1e8638:	e58460c8 	str	r6, [r4, #200]	; fField200
        1e863c:	e59400cc 	ldr	r0, [r4, #204]	; fField204
        1e8640:	eb67a8c4 	bl	1bd2958 <$free>
        1e8644:	e58460cc 	str	r6, [r4, #204]	; fField204
        1e8648:	e5945074 	ldr	r5, [r4, #116]	; fField116
        1e864c:	e3350000 	teq	r5, #0	; 0x0
        1e8650:	0a000004 	beq	1e8668 <TSoundServer::MainDestructor(void)+0x13c>
        1e8654:	e1a00005 	mov	r0, r5
        1e8658:	e3a01000 	mov	r1, #0	; 0x0
        1e865c:	eb67982b 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1e8660:	e1a00005 	mov	r0, r5
        1e8664:	eb67941d 	bl	1bcd6e0 <$__dl(void *)>
        1e8668:	e59400e0 	ldr	r0, [r4, #224]	; fField224
        1e866c:	eb67a8b9 	bl	1bd2958 <$free>
        1e8670:	e58460e0 	str	r6, [r4, #224]	; fField224
        1e8674:	e59400e4 	ldr	r0, [r4, #228]	; fField228
        1e8678:	eb67a8b6 	bl	1bd2958 <$free>
        1e867c:	e58460e4 	str	r6, [r4, #228]	; fField228
        1e8680:	e1a00004 	mov	r0, r4
        1e8684:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1e8688:	ea67181d 	b	1bae704 <TAppWorld::$MainDestructor(void)>
        1e868c:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TSoundServer::TheMain(void)
 * Address: 001e8690
 */
TSoundServer::TheMain(void) {
    /*
        1e8690:	e1a0c00d 	mov	ip, sp
        1e8694:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e8698:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e869c:	e1a04000 	mov	r4, r0
        1e86a0:	e28000b0 	add	r0, r0, #176	; 0xb0
        1e86a4:	e1a05000 	mov	r5, r0
        1e86a8:	e3a01e7d 	mov	r1, #2000	; 0x7d0
        1e86ac:	eb67b929 	bl	1bd6b58 <$LockStack>
        1e86b0:	e1a00004 	mov	r0, r4
        1e86b4:	eb671c46 	bl	1baf7d4 <TAppWorld::$TheMain(void)>
        1e86b8:	e1a00005 	mov	r0, r5
        1e86bc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e86c0:	ea67d5f7 	b	1bddea4 <$UnlockStack>
    */
}

/**
 * Symbol: TSoundServer::GetSizeOf(void)
 * Address: 001e86c4
 */
TSoundServer::GetSizeOf(void) {
    /*
        1e86c4:	e3a00f41 	mov	r0, #260	; 0x104
        1e86c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoundServer::CloseChannel(unsigned long)
 * Address: 001e86cc
 */
TSoundServer::CloseChannel(unsigned long) {
    /*
        1e86cc:	e1a0c00d 	mov	ip, sp
        1e86d0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e86d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e86d8:	e3a07000 	mov	r7, #0	; 0x0
        1e86dc:	e28060c4 	add	r6, r0, #196	; 0xc4
        1e86e0:	e3a05000 	mov	r5, #0	; 0x0
        1e86e4:	e3a020c6 	mov	r2, #198	; 0xc6
        1e86e8:	e2422c76 	sub	r2, r2, #30208	; 0x7600
        1e86ec:	e5964000 	ldr	r4, [r6]
        1e86f0:	e3340000 	teq	r4, #0	; 0x0
        1e86f4:	0a000009 	beq	1e8720 <TSoundServer::CloseChannel(unsigned long)+0x54>
        1e86f8:	e5943004 	ldr	r3, [r4, #4]	; fField4
        1e86fc:	e1330001 	teq	r3, r1
        1e8700:	0a000004 	beq	1e8718 <TSoundServer::CloseChannel(unsigned long)+0x4c>
        1e8704:	e1a05004 	mov	r5, r4
        1e8708:	e5944008 	ldr	r4, [r4, #8]	; fField8
        1e870c:	e3340000 	teq	r4, #0	; 0x0
        1e8710:	1afffff8 	bne	1e86f8 <TSoundServer::CloseChannel(unsigned long)+0x2c>
        1e8714:	ea000001 	b	1e8720 <TSoundServer::CloseChannel(unsigned long)+0x54>
        1e8718:	e3340000 	teq	r4, #0	; 0x0
        1e871c:	1a00000c 	bne	1e8754 <TSoundServer::CloseChannel(unsigned long)+0x88>
        1e8720:	e28060dc 	add	r6, r0, #220	; 0xdc
        1e8724:	e3a05000 	mov	r5, #0	; 0x0
        1e8728:	e5964000 	ldr	r4, [r6]
        1e872c:	e3340000 	teq	r4, #0	; 0x0
        1e8730:	0a000009 	beq	1e875c <TSoundServer::CloseChannel(unsigned long)+0x90>
        1e8734:	e5943004 	ldr	r3, [r4, #4]	; fField4
        1e8738:	e1330001 	teq	r3, r1
        1e873c:	0a000004 	beq	1e8754 <TSoundServer::CloseChannel(unsigned long)+0x88>
        1e8740:	e1a05004 	mov	r5, r4
        1e8744:	e5944008 	ldr	r4, [r4, #8]	; fField8
        1e8748:	e3340000 	teq	r4, #0	; 0x0
        1e874c:	1afffff8 	bne	1e8734 <TSoundServer::CloseChannel(unsigned long)+0x68>
        1e8750:	ea000001 	b	1e875c <TSoundServer::CloseChannel(unsigned long)+0x90>
        1e8754:	e3340000 	teq	r4, #0	; 0x0
        1e8758:	1a00000c 	bne	1e8790 <TSoundServer::CloseChannel(unsigned long)+0xc4>
        1e875c:	e28060f8 	add	r6, r0, #248	; 0xf8
        1e8760:	e3a05000 	mov	r5, #0	; 0x0
        1e8764:	e5964000 	ldr	r4, [r6]
        1e8768:	e3340000 	teq	r4, #0	; 0x0
        1e876c:	0a000009 	beq	1e8798 <TSoundServer::CloseChannel(unsigned long)+0xcc>
        1e8770:	e5943004 	ldr	r3, [r4, #4]	; fField4
        1e8774:	e1330001 	teq	r3, r1
        1e8778:	0a000004 	beq	1e8790 <TSoundServer::CloseChannel(unsigned long)+0xc4>
        1e877c:	e1a05004 	mov	r5, r4
        1e8780:	e5944008 	ldr	r4, [r4, #8]	; fField8
        1e8784:	e3340000 	teq	r4, #0	; 0x0
        1e8788:	1afffff8 	bne	1e8770 <TSoundServer::CloseChannel(unsigned long)+0xa4>
        1e878c:	ea000001 	b	1e8798 <TSoundServer::CloseChannel(unsigned long)+0xcc>
        1e8790:	e3340000 	teq	r4, #0	; 0x0
        1e8794:	1a00000c 	bne	1e87cc <TSoundServer::CloseChannel(unsigned long)+0x100>
        1e8798:	e28060fc 	add	r6, r0, #252	; 0xfc
        1e879c:	e3a05000 	mov	r5, #0	; 0x0
        1e87a0:	e5964000 	ldr	r4, [r6]
        1e87a4:	e3340000 	teq	r4, #0	; 0x0
        1e87a8:	0a000017 	beq	1e880c <TSoundServer::CloseChannel(unsigned long)+0x140>
        1e87ac:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1e87b0:	e1300001 	teq	r0, r1
        1e87b4:	0a000004 	beq	1e87cc <TSoundServer::CloseChannel(unsigned long)+0x100>
        1e87b8:	e1a05004 	mov	r5, r4
        1e87bc:	e5944008 	ldr	r4, [r4, #8]	; fField8
        1e87c0:	e3340000 	teq	r4, #0	; 0x0
        1e87c4:	1afffff8 	bne	1e87ac <TSoundServer::CloseChannel(unsigned long)+0xe0>
        1e87c8:	ea00000f 	b	1e880c <TSoundServer::CloseChannel(unsigned long)+0x140>
        1e87cc:	e3340000 	teq	r4, #0	; 0x0
        1e87d0:	0a00000d 	beq	1e880c <TSoundServer::CloseChannel(unsigned long)+0x140>
        1e87d4:	e1a00004 	mov	r0, r4
        1e87d8:	e3a01000 	mov	r1, #0	; 0x0
        1e87dc:	e5943000 	ldr	r3, [r4]
        1e87e0:	e1a0e00f 	mov	lr, pc
        1e87e4:	e283f014 	add	pc, r3, #20	; 0x14
        1e87e8:	e3350000 	teq	r5, #0	; 0x0
        1e87ec:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1e87f0:	05860000 	streq	r0, [r6]
        1e87f4:	15a50008 	strne	r0, [r5, #8]!	; fField8
        1e87f8:	e1a00004 	mov	r0, r4
        1e87fc:	e3a01001 	mov	r1, #1	; 0x1
        1e8800:	e1a0e00f 	mov	lr, pc
        1e8804:	e594f000 	ldr	pc, [r4]
        1e8808:	ea000000 	b	1e8810 <TSoundServer::CloseChannel(unsigned long)+0x144>
        1e880c:	e1a07002 	mov	r7, r2
        1e8810:	e1a00007 	mov	r0, r7
        1e8814:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundServer::StartChannel(unsigned long, TUMsgToken *)
 * Address: 001e8818
 */
TSoundServer::StartChannel(unsigned long, TUMsgToken *) {
    /*
        1e8818:	e1a0c00d 	mov	ip, sp
        1e881c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e8820:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8824:	e1a04000 	mov	r4, r0
        1e8828:	e1a05002 	mov	r5, r2
        1e882c:	eb66493d 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e8830:	e1b06000 	movs	r6, r0
        1e8834:	e3a080c6 	mov	r8, #198	; 0xc6
        1e8838:	e2488c76 	sub	r8, r8, #30208	; 0x7600
        1e883c:	0a00003e 	beq	1e893c <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0x124>
        1e8840:	e3a07000 	mov	r7, #0	; 0x0
        1e8844:	e5960014 	ldr	r0, [r6, #20]	; fField20
        1e8848:	e3100020 	tst	r0, #32	; 0x20
        1e884c:	02001010 	andeq	r1, r0, #16	; 0x10
        1e8850:	03310000 	teqeq	r1, #0	; 0x0
        1e8854:	0a000009 	beq	1e8880 <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0x68>
        1e8858:	e3100008 	tst	r0, #8	; 0x8
        1e885c:	11a07006 	movne	r7, r6
        1e8860:	1a000002 	bne	1e8870 <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0x58>
        1e8864:	e596000c 	ldr	r0, [r6, #12]	; fField12
        1e8868:	e3300000 	teq	r0, #0	; 0x0
        1e886c:	1a000003 	bne	1e8880 <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0x68>
        1e8870:	e1a00004 	mov	r0, r4
        1e8874:	e5b61200 	ldr	r1, [r6, #512]!
        1e8878:	eb66492a 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e887c:	e1a06000 	mov	r6, r0
        1e8880:	e3360000 	teq	r6, #0	; 0x0
        1e8884:	0a000022 	beq	1e8914 <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0xfc>
        1e8888:	e5960014 	ldr	r0, [r6, #20]	; fField20
        1e888c:	e3100004 	tst	r0, #4	; 0x4
        1e8890:	0a000001 	beq	1e889c <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0x84>
        1e8894:	e3100008 	tst	r0, #8	; 0x8
        1e8898:	0a00001d 	beq	1e8914 <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0xfc>
        1e889c:	e1a01005 	mov	r1, r5
        1e88a0:	e1a00006 	mov	r0, r6
        1e88a4:	e5962000 	ldr	r2, [r6]
        1e88a8:	e1a0e00f 	mov	lr, pc
        1e88ac:	e282f00c 	add	pc, r2, #12	; 0xc
        1e88b0:	e1b08000 	movs	r8, r0
        1e88b4:	1a000016 	bne	1e8914 <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0xfc>
        1e88b8:	e5960014 	ldr	r0, [r6, #20]	; fField20
        1e88bc:	e3100001 	tst	r0, #1	; 0x1
        1e88c0:	0a000003 	beq	1e88d4 <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0xbc>
        1e88c4:	e1a00004 	mov	r0, r4
        1e88c8:	e5b6102c 	ldr	r1, [r6, #44]!	; fField44
        1e88cc:	eb664927 	bl	1b7ad70 <TSoundServer::$StartOutput(int)>
        1e88d0:	ea00000f 	b	1e8914 <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0xfc>
        1e88d4:	e3100002 	tst	r0, #2	; 0x2
        1e88d8:	0a000003 	beq	1e88ec <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0xd4>
        1e88dc:	e1a00004 	mov	r0, r4
        1e88e0:	e5b6102c 	ldr	r1, [r6, #44]!	; fField44
        1e88e4:	eb664920 	bl	1b7ad6c <TSoundServer::$StartInput(int)>
        1e88e8:	ea000009 	b	1e8914 <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0xfc>
        1e88ec:	e3100020 	tst	r0, #32	; 0x20
        1e88f0:	0a000003 	beq	1e8904 <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0xec>
        1e88f4:	e1a00004 	mov	r0, r4
        1e88f8:	e5b6102c 	ldr	r1, [r6, #44]!	; fField44
        1e88fc:	eb665dac 	bl	1b7ffb4 <TSoundServer::$StartDecompressor(int)>
        1e8900:	ea000003 	b	1e8914 <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0xfc>
        1e8904:	e3100010 	tst	r0, #16	; 0x10
        1e8908:	11a00004 	movne	r0, r4
        1e890c:	15b6102c 	ldrne	r1, [r6, #44]!	; fField44
        1e8910:	1b665daa 	blne	1b7ffc0 <TSoundServer::$StartCompressor(int)>
        1e8914:	e3370000 	teq	r7, #0	; 0x0
        1e8918:	0a000007 	beq	1e893c <TSoundServer::StartChannel(unsigned long, TUMsgToken *)+0x124>
        1e891c:	e288cc75 	add	ip, r8, #29952	; 0x7500
        1e8920:	e37c0038 	cmn	ip, #56	; 0x38
        1e8924:	03a08000 	moveq	r8, #0	; 0x0
        1e8928:	e1a00007 	mov	r0, r7
        1e892c:	e3a01000 	mov	r1, #0	; 0x0
        1e8930:	e5972000 	ldr	r2, [r7]
        1e8934:	e1a0e00f 	mov	lr, pc
        1e8938:	e282f010 	add	pc, r2, #16	; 0x10
        1e893c:	e1a00008 	mov	r0, r8
        1e8940:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundServer::PauseChannel(unsigned long, TUSoundNodeReply *)
 * Address: 001e8944
 */
TSoundServer::PauseChannel(unsigned long, TUSoundNodeReply *) {
    /*
        1e8944:	e1a0c00d 	mov	ip, sp
        1e8948:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1e894c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8950:	e1a05000 	mov	r5, r0
        1e8954:	e1a04002 	mov	r4, r2
        1e8958:	e3a07000 	mov	r7, #0	; 0x0
        1e895c:	eb6648f1 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e8960:	e1b06000 	movs	r6, r0
        1e8964:	e3a090c6 	mov	r9, #198	; 0xc6
        1e8968:	e2499c76 	sub	r9, r9, #30208	; 0x7600
        1e896c:	0a00001d 	beq	1e89e8 <TSoundServer::PauseChannel(unsigned long, TUSoundNodeReply *)+0xa4>
        1e8970:	e3a08000 	mov	r8, #0	; 0x0
        1e8974:	e5960014 	ldr	r0, [r6, #20]	; fField20
        1e8978:	e3100020 	tst	r0, #32	; 0x20
        1e897c:	02001010 	andeq	r1, r0, #16	; 0x10
        1e8980:	03310000 	teqeq	r1, #0	; 0x0
        1e8984:	0a000006 	beq	1e89a4 <TSoundServer::PauseChannel(unsigned long, TUSoundNodeReply *)+0x60>
        1e8988:	e3100004 	tst	r0, #4	; 0x4
        1e898c:	13a08001 	movne	r8, #1	; 0x1
        1e8990:	e1a00005 	mov	r0, r5
        1e8994:	e5961200 	ldr	r1, [r6, #512]
        1e8998:	eb6648e2 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e899c:	e1a05000 	mov	r5, r0
        1e89a0:	ea000000 	b	1e89a8 <TSoundServer::PauseChannel(unsigned long, TUSoundNodeReply *)+0x64>
        1e89a4:	e1a05006 	mov	r5, r6
        1e89a8:	e3350000 	teq	r5, #0	; 0x0
        1e89ac:	0a00000d 	beq	1e89e8 <TSoundServer::PauseChannel(unsigned long, TUSoundNodeReply *)+0xa4>
        1e89b0:	e3380000 	teq	r8, #0	; 0x0
        1e89b4:	e1a01004 	mov	r1, r4
        1e89b8:	01a00005 	moveq	r0, r5
        1e89bc:	0a000005 	beq	1e89d8 <TSoundServer::PauseChannel(unsigned long, TUSoundNodeReply *)+0x94>
        1e89c0:	e1a00006 	mov	r0, r6
        1e89c4:	e5962000 	ldr	r2, [r6]
        1e89c8:	e1a0e00f 	mov	lr, pc
        1e89cc:	e282f010 	add	pc, r2, #16	; 0x10
        1e89d0:	e1a00005 	mov	r0, r5
        1e89d4:	e3a01000 	mov	r1, #0	; 0x0
        1e89d8:	e5952000 	ldr	r2, [r5]
        1e89dc:	e1a0e00f 	mov	lr, pc
        1e89e0:	e282f010 	add	pc, r2, #16	; 0x10
        1e89e4:	ea000000 	b	1e89ec <TSoundServer::PauseChannel(unsigned long, TUSoundNodeReply *)+0xa8>
        1e89e8:	e1a07009 	mov	r7, r9
        1e89ec:	e1a00007 	mov	r0, r7
        1e89f0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundServer::StopChannel(unsigned long, TUSoundNodeReply *)
 * Address: 001e8aac
 */
TSoundServer::StopChannel(unsigned long, TUSoundNodeReply *) {
    /*
        1e8aac:	e1a0c00d 	mov	ip, sp
        1e8ab0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e8ab4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8ab8:	e1a04000 	mov	r4, r0
        1e8abc:	e1a06002 	mov	r6, r2
        1e8ac0:	e3a08000 	mov	r8, #0	; 0x0
        1e8ac4:	eb664897 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e8ac8:	e1b07000 	movs	r7, r0
        1e8acc:	e3a050c6 	mov	r5, #198	; 0xc6
        1e8ad0:	e2455c76 	sub	r5, r5, #30208	; 0x7600
        1e8ad4:	0a000022 	beq	1e8b64 <TSoundServer::StopChannel(unsigned long, TUSoundNodeReply *)+0xb8>
        1e8ad8:	e5970014 	ldr	r0, [r7, #20]	; fField20
        1e8adc:	e3100020 	tst	r0, #32	; 0x20
        1e8ae0:	02001010 	andeq	r1, r0, #16	; 0x10
        1e8ae4:	03310000 	teqeq	r1, #0	; 0x0
        1e8ae8:	0a000005 	beq	1e8b04 <TSoundServer::StopChannel(unsigned long, TUSoundNodeReply *)+0x58>
        1e8aec:	e3100004 	tst	r0, #4	; 0x4
        1e8af0:	1a000003 	bne	1e8b04 <TSoundServer::StopChannel(unsigned long, TUSoundNodeReply *)+0x58>
        1e8af4:	e1a00004 	mov	r0, r4
        1e8af8:	e5b71200 	ldr	r1, [r7, #512]!
        1e8afc:	eb664889 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e8b00:	e1a07000 	mov	r7, r0
        1e8b04:	e3370000 	teq	r7, #0	; 0x0
        1e8b08:	0a000015 	beq	1e8b64 <TSoundServer::StopChannel(unsigned long, TUSoundNodeReply *)+0xb8>
        1e8b0c:	e1a01006 	mov	r1, r6
        1e8b10:	e1a00007 	mov	r0, r7
        1e8b14:	e1a02005 	mov	r2, r5
        1e8b18:	e5973000 	ldr	r3, [r7]
        1e8b1c:	e1a0e00f 	mov	lr, pc
        1e8b20:	e283f014 	add	pc, r3, #20	; 0x14
        1e8b24:	e5b70014 	ldr	r0, [r7, #20]!	; fField20
        1e8b28:	e3100002 	tst	r0, #2	; 0x2
        1e8b2c:	02000010 	andeq	r0, r0, #16	; 0x10
        1e8b30:	03300000 	teqeq	r0, #0	; 0x0
        1e8b34:	0a00000b 	beq	1e8b68 <TSoundServer::StopChannel(unsigned long, TUSoundNodeReply *)+0xbc>
        1e8b38:	e1a00004 	mov	r0, r4
        1e8b3c:	eb664870 	bl	1b7ad04 <TSoundServer::$AllInputChannelsEmpty(void)>
        1e8b40:	e3300000 	teq	r0, #0	; 0x0
        1e8b44:	0a000007 	beq	1e8b68 <TSoundServer::StopChannel(unsigned long, TUSoundNodeReply *)+0xbc>
        1e8b48:	e59f4010 	ldr	r4, [pc, #10]	; 1e8b60 <TSoundServer::StopChannel(unsigned long, TUSoundNodeReply *)+0xb4>
        1e8b4c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1e8b50:	eb06818b 	bl	389184 <PSoundDriver::StopInput(void)>
        1e8b54:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1e8b58:	eb06817d 	bl	389154 <PSoundDriver::PowerInputOff(void)>
        1e8b5c:	ea000001 	b	1e8b68 <TSoundServer::StopChannel(unsigned long, TUSoundNodeReply *)+0xbc>
        1e8b60:	0c101b10 	ldceq	11, cr1, [r0], -#64
        1e8b64:	e1a08005 	mov	r8, r5
        1e8b68:	e1a00008 	mov	r0, r8
        1e8b6c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundServer::ScheduleNode(TUSoundNodeRequest *, TUMsgToken *)
 * Address: 001e8b70
 */
TSoundServer::ScheduleNode(TUSoundNodeRequest *, TUMsgToken *) {
    /*
        1e8b70:	e1a0c00d 	mov	ip, sp
        1e8b74:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e8b78:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8b7c:	e1a04001 	mov	r4, r1
        1e8b80:	e1a05002 	mov	r5, r2
        1e8b84:	e5911008 	ldr	r1, [r1, #8]	; fField8
        1e8b88:	eb664866 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e8b8c:	e3300000 	teq	r0, #0	; 0x0
        1e8b90:	03a000c6 	moveq	r0, #198	; 0xc6
        1e8b94:	02400c76 	subeq	r0, r0, #30208	; 0x7600
        1e8b98:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1e8b9c:	e1a02005 	mov	r2, r5
        1e8ba0:	e1a01004 	mov	r1, r4
        1e8ba4:	e5903000 	ldr	r3, [r0]
        1e8ba8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1e8bac:	e283f004 	add	pc, r3, #4	; 0x4
    */
}

/**
 * Symbol: TSoundServer::CancelNode(TUSoundNodeRequest *)
 * Address: 001e8bb0
 */
TSoundServer::CancelNode(TUSoundNodeRequest *) {
    /*
        1e8bb0:	e1a0c00d 	mov	ip, sp
        1e8bb4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e8bb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8bbc:	e1a04001 	mov	r4, r1
        1e8bc0:	e5911008 	ldr	r1, [r1, #8]	; fField8
        1e8bc4:	eb664857 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e8bc8:	e3300000 	teq	r0, #0	; 0x0
        1e8bcc:	03a000c6 	moveq	r0, #198	; 0xc6
        1e8bd0:	02400c76 	subeq	r0, r0, #30208	; 0x7600
        1e8bd4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1e8bd8:	e1a01004 	mov	r1, r4
        1e8bdc:	e5902000 	ldr	r2, [r0]
        1e8be0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e8be4:	e282f008 	add	pc, r2, #8	; 0x8
    */
}

/**
 * Symbol: TSoundServer::FindChannel(unsigned long)
 * Address: 001e8be8
 */
TSoundServer::FindChannel(unsigned long) {
    /*
        1e8be8:	e59020c4 	ldr	r2, [r0, #196]	; fField196
        1e8bec:	e3320000 	teq	r2, #0	; 0x0
        1e8bf0:	0a000008 	beq	1e8c18 <TSoundServer::FindChannel(unsigned long)+0x30>
        1e8bf4:	e5923004 	ldr	r3, [r2, #4]	; fField4
        1e8bf8:	e1330001 	teq	r3, r1
        1e8bfc:	0a000003 	beq	1e8c10 <TSoundServer::FindChannel(unsigned long)+0x28>
        1e8c00:	e5922008 	ldr	r2, [r2, #8]	; fField8
        1e8c04:	e3320000 	teq	r2, #0	; 0x0
        1e8c08:	1afffff9 	bne	1e8bf4 <TSoundServer::FindChannel(unsigned long)+0xc>
        1e8c0c:	ea000001 	b	1e8c18 <TSoundServer::FindChannel(unsigned long)+0x30>
        1e8c10:	e3320000 	teq	r2, #0	; 0x0
        1e8c14:	1a000009 	bne	1e8c40 <TSoundServer::FindChannel(unsigned long)+0x58>
        1e8c18:	e59020f8 	ldr	r2, [r0, #248]	; fField248
        1e8c1c:	e3320000 	teq	r2, #0	; 0x0
        1e8c20:	0a000008 	beq	1e8c48 <TSoundServer::FindChannel(unsigned long)+0x60>
        1e8c24:	e5923004 	ldr	r3, [r2, #4]	; fField4
        1e8c28:	e1330001 	teq	r3, r1
        1e8c2c:	0a000003 	beq	1e8c40 <TSoundServer::FindChannel(unsigned long)+0x58>
        1e8c30:	e5922008 	ldr	r2, [r2, #8]	; fField8
        1e8c34:	e3320000 	teq	r2, #0	; 0x0
        1e8c38:	1afffff9 	bne	1e8c24 <TSoundServer::FindChannel(unsigned long)+0x3c>
        1e8c3c:	ea000001 	b	1e8c48 <TSoundServer::FindChannel(unsigned long)+0x60>
        1e8c40:	e3320000 	teq	r2, #0	; 0x0
        1e8c44:	1a000009 	bne	1e8c70 <TSoundServer::FindChannel(unsigned long)+0x88>
        1e8c48:	e59020dc 	ldr	r2, [r0, #220]	; fField220
        1e8c4c:	e3320000 	teq	r2, #0	; 0x0
        1e8c50:	0a000008 	beq	1e8c78 <TSoundServer::FindChannel(unsigned long)+0x90>
        1e8c54:	e5923004 	ldr	r3, [r2, #4]	; fField4
        1e8c58:	e1330001 	teq	r3, r1
        1e8c5c:	0a000003 	beq	1e8c70 <TSoundServer::FindChannel(unsigned long)+0x88>
        1e8c60:	e5922008 	ldr	r2, [r2, #8]	; fField8
        1e8c64:	e3320000 	teq	r2, #0	; 0x0
        1e8c68:	1afffff9 	bne	1e8c54 <TSoundServer::FindChannel(unsigned long)+0x6c>
        1e8c6c:	ea000001 	b	1e8c78 <TSoundServer::FindChannel(unsigned long)+0x90>
        1e8c70:	e3320000 	teq	r2, #0	; 0x0
        1e8c74:	1a000007 	bne	1e8c98 <TSoundServer::FindChannel(unsigned long)+0xb0>
        1e8c78:	e5b020fc 	ldr	r2, [r0, #252]!	; fField252
        1e8c7c:	e3320000 	teq	r2, #0	; 0x0
        1e8c80:	0a000004 	beq	1e8c98 <TSoundServer::FindChannel(unsigned long)+0xb0>
        1e8c84:	e5920004 	ldr	r0, [r2, #4]	; fField4
        1e8c88:	e1300001 	teq	r0, r1
        1e8c8c:	15922008 	ldrne	r2, [r2, #8]	; fField8
        1e8c90:	13320000 	teqne	r2, #0	; 0x0
        1e8c94:	1afffffa 	bne	1e8c84 <TSoundServer::FindChannel(unsigned long)+0x9c>
        1e8c98:	e1a00002 	mov	r0, r2
        1e8c9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoundServer::StopAll(void)
 * Address: 001e8ca0
 */
TSoundServer::StopAll(void) {
    /*
        1e8ca0:	e1a0c00d 	mov	ip, sp
        1e8ca4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e8ca8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8cac:	e1a04000 	mov	r4, r0
        1e8cb0:	e3a01001 	mov	r1, #1	; 0x1
        1e8cb4:	eb665cc2 	bl	1b7ffc4 <TSoundServer::$StopCompressor(int)>
        1e8cb8:	e1a00004 	mov	r0, r4
        1e8cbc:	e3a01001 	mov	r1, #1	; 0x1
        1e8cc0:	eb665cbc 	bl	1b7ffb8 <TSoundServer::$StopDecompressor(int)>
        1e8cc4:	e1a00004 	mov	r0, r4
        1e8cc8:	e3a01001 	mov	r1, #1	; 0x1
        1e8ccc:	eb664c2d 	bl	1b7bd88 <TSoundServer::$StopOutput(int)>
        1e8cd0:	e1a00004 	mov	r0, r4
        1e8cd4:	e3a01001 	mov	r1, #1	; 0x1
        1e8cd8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e8cdc:	ea664c28 	b	1b7bd84 <TSoundServer::$StopInput(int)>
    */
}

/**
 * Symbol: TSoundServer::UniqueId(void)
 * Address: 001e8ce0
 */
TSoundServer::UniqueId(void) {
    /*
        1e8ce0:	e1a0c00d 	mov	ip, sp
        1e8ce4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e8ce8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8cec:	e1a04000 	mov	r4, r0
        1e8cf0:	e3a05001 	mov	r5, #1	; 0x1
        1e8cf4:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1e8cf8:	e2901001 	adds	r1, r0, #1	; 0x1
        1e8cfc:	e5841078 	str	r1, [r4, #120]	; fField120
        1e8d00:	01a01005 	moveq	r1, r5
        1e8d04:	05845078 	streq	r5, [r4, #120]	; fField120
        1e8d08:	e1a00004 	mov	r0, r4
        1e8d0c:	eb664805 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e8d10:	e3300000 	teq	r0, #0	; 0x0
        1e8d14:	1afffff6 	bne	1e8cf4 <TSoundServer::UniqueId(void)+0x14>
        1e8d18:	e5b40078 	ldr	r0, [r4, #120]!	; fField120
        1e8d1c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundServer::OpenOutputChannel(unsigned long *, unsigned long)
 * Address: 001e8d20
 */
TSoundServer::OpenOutputChannel(unsigned long *, unsigned long) {
    /*
        1e8d20:	e1a0c00d 	mov	ip, sp
        1e8d24:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e8d28:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8d2c:	e1a04000 	mov	r4, r0
        1e8d30:	e1a05001 	mov	r5, r1
        1e8d34:	e1a06002 	mov	r6, r2
        1e8d38:	e3a07000 	mov	r7, #0	; 0x0
        1e8d3c:	e59f8078 	ldr	r8, [pc, #78]	; 1e8dbc <TSoundServer::OpenOutputChannel(unsigned long *, unsigned long)+0x9c>
        1e8d40:	e5980004 	ldr	r0, [r8, #4]	; fField4
        1e8d44:	eb679aab 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        1e8d48:	e28f1f1c 	add	r1, pc, #112	; 0x70
        1e8d4c:	eb67ab0b 	bl	1bd3980 <TClassInfo::$GetCapability( const(char const *))>
        1e8d50:	e3300000 	teq	r0, #0	; 0x0
        1e8d54:	0a000020 	beq	1e8ddc <TSoundServer::OpenOutputChannel(unsigned long *, unsigned long)+0xbc>
        1e8d58:	e3a00000 	mov	r0, #0	; 0x0
        1e8d5c:	e5850000 	str	r0, [r5]
        1e8d60:	e3a00001 	mov	r0, #1	; 0x1
        1e8d64:	e52d001c 	str	r0, [sp, -#28]!
        1e8d68:	e1a0100d 	mov	r1, sp
        1e8d6c:	e5b80004 	ldr	r0, [r8, #4]!	; fField4
        1e8d70:	eb0680df 	bl	3890f4 <PSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *)>
        1e8d74:	e1a00004 	mov	r0, r4
        1e8d78:	eb664c05 	bl	1b7bd94 <TSoundServer::$UniqueId(void)>
        1e8d7c:	e1a01000 	mov	r1, r0
        1e8d80:	e1a0200d 	mov	r2, sp
        1e8d84:	e3a00000 	mov	r0, #0	; 0x0
        1e8d88:	eb665449 	bl	1b7deb4 <TDMAChannel::$__ct(unsigned long, TSoundDriverInfo const &)>
        1e8d8c:	e3300000 	teq	r0, #0	; 0x0
        1e8d90:	0a00000d 	beq	1e8dcc <TSoundServer::OpenOutputChannel(unsigned long *, unsigned long)+0xac>
        1e8d94:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1e8d98:	e3811001 	orr	r1, r1, #1	; 0x1
        1e8d9c:	e5801014 	str	r1, [r0, #20]	; fField20
        1e8da0:	e59410c4 	ldr	r1, [r4, #196]	; fField196
        1e8da4:	e5801008 	str	r1, [r0, #8]	; fField8
        1e8da8:	e580602c 	str	r6, [r0, #44]	; fField44
        1e8dac:	e5a400c4 	str	r0, [r4, #196]!	; fField196
        1e8db0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1e8db4:	e5850000 	str	r0, [r5]
        1e8db8:	ea000005 	b	1e8dd4 <TSoundServer::OpenOutputChannel(unsigned long *, unsigned long)+0xb4>
        1e8dbc:	0c101b10 	ldceq	11, cr1, [r0], -#64
        1e8dc0:	536f756e 	cmnpl	pc, #461373440	; 0x1b800000
        1e8dc4:	644f7574 	strvsb	r7, [pc], #574	; 1e8dcc <TSoundServer::OpenOutputChannel(unsigned long *, unsigned long)+0xac>
        1e8dc8:	70757400 	rsbvcs	r7, r5, r0, lsl #8
        1e8dcc:	eb67e4d3 	bl	1be2120 <$MemError>
        1e8dd0:	e1a07000 	mov	r7, r0
        1e8dd4:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1e8dd8:	ea000000 	b	1e8de0 <TSoundServer::OpenOutputChannel(unsigned long *, unsigned long)+0xc0>
        1e8ddc:	e59f7004 	ldr	r7, [pc, #4]	; 1e8de8 <TSoundServer::OpenOutputChannel(unsigned long *, unsigned long)+0xc8>	; fField4
        1e8de0:	e1a00007 	mov	r0, r7
        1e8de4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e8de8:	ffff8ac7 	swinv	0x00ff8ac7
    */
}

/**
 * Symbol: TSoundServer::AllOutputChannelsEmpty(void)
 * Address: 001e8dec
 */
TSoundServer::AllOutputChannelsEmpty(void) {
    /*
        1e8dec:	e59000c4 	ldr	r0, [r0, #196]	; fField196
        1e8df0:	e3300000 	teq	r0, #0	; 0x0
        1e8df4:	0a00000a 	beq	1e8e24 <TSoundServer::AllOutputChannelsEmpty(void)+0x38>
        1e8df8:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1e8dfc:	e3110004 	tst	r1, #4	; 0x4
        1e8e00:	1590200c 	ldrne	r2, [r0, #12]	; fField12
        1e8e04:	13320000 	teqne	r2, #0	; 0x0
        1e8e08:	0a000002 	beq	1e8e18 <TSoundServer::AllOutputChannelsEmpty(void)+0x2c>
        1e8e0c:	e3110008 	tst	r1, #8	; 0x8
        1e8e10:	03a00000 	moveq	r0, #0	; 0x0
        1e8e14:	01a0f00e 	moveq	pc, lr
        1e8e18:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1e8e1c:	e3300000 	teq	r0, #0	; 0x0
        1e8e20:	1afffff4 	bne	1e8df8 <TSoundServer::AllOutputChannelsEmpty(void)+0xc>
        1e8e24:	e3a00001 	mov	r0, #1	; 0x1
        1e8e28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoundServer::StartOutput(int)
 * Address: 001e8e2c
 */
TSoundServer::StartOutput(int) {
    /*
        1e8e2c:	e1a0c00d 	mov	ip, sp
        1e8e30:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e8e34:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8e38:	e1a04000 	mov	r4, r0
        1e8e3c:	e1a05001 	mov	r5, r1
        1e8e40:	e59f60a8 	ldr	r6, [pc, #a8]	; 1e8ef0 <TSoundServer::StartOutput(int)+0xc4>
        1e8e44:	e5960004 	ldr	r0, [r6, #4]	; fField4
        1e8e48:	eb0680d6 	bl	3891a8 <PSoundDriver::OutputIsRunning(void)>
        1e8e4c:	e3300000 	teq	r0, #0	; 0x0
        1e8e50:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e8e54:	e1a00004 	mov	r0, r4
        1e8e58:	eb6647aa 	bl	1b7ad08 <TSoundServer::$AllOutputChannelsEmpty(void)>
        1e8e5c:	e3300000 	teq	r0, #0	; 0x0
        1e8e60:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e8e64:	e5940070 	ldr	r0, [r4, #112]	; fField112
        1e8e68:	eb679637 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        1e8e6c:	e3a01000 	mov	r1, #0	; 0x0
        1e8e70:	e5940070 	ldr	r0, [r4, #112]	; fField112
        1e8e74:	e5a01018 	str	r1, [r0, #24]!	; fField24
        1e8e78:	e1a00004 	mov	r0, r4
        1e8e7c:	eb6647a8 	bl	1b7ad24 <TSoundServer::$FillDMABuffer(void)>
        1e8e80:	e1a07000 	mov	r7, r0
        1e8e84:	e0848100 	add	r8, r4, r0, lsl #2
        1e8e88:	e59800d0 	ldr	r0, [r8, #208]
        1e8e8c:	e3500000 	cmp	r0, #0	; 0x0
        1e8e90:	d91ba9f0 	ldmledb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e8e94:	e1a01005 	mov	r1, r5
        1e8e98:	e5960004 	ldr	r0, [r6, #4]	; fField4
        1e8e9c:	eb0680a3 	bl	389130 <PSoundDriver::PowerOutputOn(long)>
        1e8ea0:	e1a01007 	mov	r1, r7
        1e8ea4:	e5b820d0 	ldr	r2, [r8, #208]!
        1e8ea8:	e5960004 	ldr	r0, [r6, #4]	; fField4
        1e8eac:	eb068099 	bl	389118 <PSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)>
        1e8eb0:	e5960004 	ldr	r0, [r6, #4]	; fField4
        1e8eb4:	eb0680b5 	bl	389190 <PSoundDriver::OutputIsEnabled(void)>
        1e8eb8:	e3300000 	teq	r0, #0	; 0x0
        1e8ebc:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e8ec0:	e5960004 	ldr	r0, [r6, #4]	; fField4
        1e8ec4:	eb0680a5 	bl	389160 <PSoundDriver::StartOutput(void)>
        1e8ec8:	e3300000 	teq	r0, #0	; 0x0
        1e8ecc:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e8ed0:	e1a00004 	mov	r0, r4
        1e8ed4:	eb664792 	bl	1b7ad24 <TSoundServer::$FillDMABuffer(void)>
        1e8ed8:	e1a01000 	mov	r1, r0
        1e8edc:	e0840100 	add	r0, r4, r0, lsl #2
        1e8ee0:	e5b020d0 	ldr	r2, [r0, #208]!
        1e8ee4:	e5b60004 	ldr	r0, [r6, #4]!	; fField4
        1e8ee8:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        1e8eec:	ea068089 	b	389118 <PSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)>
        1e8ef0:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TSoundServer::StopOutput(int)
 * Address: 001e8ef4
 */
TSoundServer::StopOutput(int) {
    /*
        1e8ef4:	e1a0c00d 	mov	ip, sp
        1e8ef8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e8efc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8f00:	e1a04001 	mov	r4, r1
        1e8f04:	e3a050cd 	mov	r5, #205	; 0xcd
        1e8f08:	e2455c76 	sub	r5, r5, #30208	; 0x7600
        1e8f0c:	e5b060c4 	ldr	r6, [r0, #196]!	; fField196
        1e8f10:	e3360000 	teq	r6, #0	; 0x0
        1e8f14:	0a000008 	beq	1e8f3c <TSoundServer::StopOutput(int)+0x48>
        1e8f18:	e1a00006 	mov	r0, r6
        1e8f1c:	e1a02005 	mov	r2, r5
        1e8f20:	e3a01000 	mov	r1, #0	; 0x0
        1e8f24:	e5963000 	ldr	r3, [r6]
        1e8f28:	e1a0e00f 	mov	lr, pc
        1e8f2c:	e283f014 	add	pc, r3, #20	; 0x14
        1e8f30:	e5966008 	ldr	r6, [r6, #8]	; fField8
        1e8f34:	e3360000 	teq	r6, #0	; 0x0
        1e8f38:	1afffff6 	bne	1e8f18 <TSoundServer::StopOutput(int)+0x24>
        1e8f3c:	e3340000 	teq	r4, #0	; 0x0
        1e8f40:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1e8f44:	e59f4010 	ldr	r4, [pc, #10]	; 1e8f5c <TSoundServer::StopOutput(int)+0x68>
        1e8f48:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1e8f4c:	eb068089 	bl	389178 <PSoundDriver::StopOutput(void)>
        1e8f50:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1e8f54:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1e8f58:	ea068077 	b	38913c <PSoundDriver::PowerOutputOff(void)>
        1e8f5c:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TSoundServer::ScheduleOutputBuffer(void)
 * Address: 001e8f60
 */
TSoundServer::ScheduleOutputBuffer(void) {
    /*
        1e8f60:	e1a0c00d 	mov	ip, sp
        1e8f64:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e8f68:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8f6c:	e1a04000 	mov	r4, r0
        1e8f70:	eb66476b 	bl	1b7ad24 <TSoundServer::$FillDMABuffer(void)>
        1e8f74:	e1a06000 	mov	r6, r0
        1e8f78:	e0847100 	add	r7, r4, r0, lsl #2
        1e8f7c:	e59700d0 	ldr	r0, [r7, #208]
        1e8f80:	e59f5050 	ldr	r5, [pc, #50]	; 1e8fd8 <TSoundServer::ScheduleOutputBuffer(void)+0x78>
        1e8f84:	e3500000 	cmp	r0, #0	; 0x0
        1e8f88:	ca000003 	bgt	1e8f9c <TSoundServer::ScheduleOutputBuffer(void)+0x3c>
        1e8f8c:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e8f90:	eb068084 	bl	3891a8 <PSoundDriver::OutputIsRunning(void)>
        1e8f94:	e3300000 	teq	r0, #0	; 0x0
        1e8f98:	0a000004 	beq	1e8fb0 <TSoundServer::ScheduleOutputBuffer(void)+0x50>
        1e8f9c:	e1a01006 	mov	r1, r6
        1e8fa0:	e5b720d0 	ldr	r2, [r7, #208]!
        1e8fa4:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        1e8fa8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1e8fac:	ea068059 	b	389118 <PSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)>
        1e8fb0:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e8fb4:	eb06806f 	bl	389178 <PSoundDriver::StopOutput(void)>
        1e8fb8:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        1e8fbc:	eb06805e 	bl	38913c <PSoundDriver::PowerOutputOff(void)>
        1e8fc0:	e5940070 	ldr	r0, [r4, #112]	; fField112
        1e8fc4:	eb6795e0 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        1e8fc8:	e3a00000 	mov	r0, #0	; 0x0
        1e8fcc:	e5b41070 	ldr	r1, [r4, #112]!	; fField112
        1e8fd0:	e5a10018 	str	r0, [r1, #24]!	; fField24
        1e8fd4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1e8fd8:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TSoundServer::PrepOutputChannels(void)
 * Address: 001e8fdc
 */
TSoundServer::PrepOutputChannels(void) {
    /*
        1e8fdc:	e1a0c00d 	mov	ip, sp
        1e8fe0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e8fe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e8fe8:	e3a05000 	mov	r5, #0	; 0x0
        1e8fec:	e5b040c4 	ldr	r4, [r0, #196]!	; fField196
        1e8ff0:	e3340000 	teq	r4, #0	; 0x0
        1e8ff4:	0a000006 	beq	1e9014 <TSoundServer::PrepOutputChannels(void)+0x38>
        1e8ff8:	e1a00004 	mov	r0, r4
        1e8ffc:	eb6653af 	bl	1b7dec0 <TDMAChannel::$Prep(void)>
        1e9000:	e3300000 	teq	r0, #0	; 0x0
        1e9004:	13a05001 	movne	r5, #1	; 0x1
        1e9008:	e5944008 	ldr	r4, [r4, #8]	; fField8
        1e900c:	e3340000 	teq	r4, #0	; 0x0
        1e9010:	1afffff8 	bne	1e8ff8 <TSoundServer::PrepOutputChannels(void)+0x1c>
        1e9014:	e1a00005 	mov	r0, r5
        1e9018:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundServer::FillDMABuffer(void)
 * Address: 001e901c
 */
TSoundServer::FillDMABuffer(void) {
    /*
        1e901c:	e1a0c00d 	mov	ip, sp
        1e9020:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e9024:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e9028:	e1a04000 	mov	r4, r0
        1e902c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1e9030:	e59000d8 	ldr	r0, [r0, #216]	; fField216
        1e9034:	e1a0a000 	mov	sl, r0
        1e9038:	e0841100 	add	r1, r4, r0, lsl #2
        1e903c:	e58d1000 	str	r1, [sp]
        1e9040:	e5b170c8 	ldr	r7, [r1, #200]!	; fField200
        1e9044:	e59410c4 	ldr	r1, [r4, #196]	; fField196
        1e9048:	e59111f0 	ldr	r1, [r1, #496]
        1e904c:	e3310010 	teq	r1, #16	; 0x10
        1e9050:	13a05eea 	movne	r5, #3744	; 0xea0
        1e9054:	03a05e75 	moveq	r5, #1872	; 0x750
        1e9058:	e2600001 	rsb	r0, r0, #1	; 0x1
        1e905c:	e58400d8 	str	r0, [r4, #216]	; fField216
        1e9060:	e1a00004 	mov	r0, r4
        1e9064:	eb665bce 	bl	1b7ffa4 <TSoundServer::$PrepOutputChannels(void)>
        1e9068:	e3500000 	cmp	r0, #0	; 0x0
        1e906c:	1a000009 	bne	1e9098 <TSoundServer::FillDMABuffer(void)+0x7c>
        1e9070:	e59400c4 	ldr	r0, [r4, #196]	; fField196
        1e9074:	e59001f0 	ldr	r0, [r0, #496]
        1e9078:	e3300008 	teq	r0, #8	; 0x8
        1e907c:	13a00002 	movne	r0, #2	; 0x2
        1e9080:	03a00001 	moveq	r0, #1	; 0x1
        1e9084:	e0020095 	mul	r2, r5, r0
        1e9088:	e1a00007 	mov	r0, r7
        1e908c:	e59410c0 	ldr	r1, [r4, #192]	; fField192
        1e9090:	eb672e70 	bl	1bb4a58 <$memset>
        1e9094:	ea00004f 	b	1e91d8 <TSoundServer::FillDMABuffer(void)+0x1bc>
        1e9098:	0a00004e 	beq	1e91d8 <TSoundServer::FillDMABuffer(void)+0x1bc>
        1e909c:	e3550000 	cmp	r5, #0	; 0x0
        1e90a0:	c59460c4 	ldrgt	r6, [r4, #196]	; fField196
        1e90a4:	ca000001 	bgt	1e90b0 <TSoundServer::FillDMABuffer(void)+0x94>
        1e90a8:	ea00004a 	b	1e91d8 <TSoundServer::FillDMABuffer(void)+0x1bc>
        1e90ac:	e5966008 	ldr	r6, [r6, #8]	; fField8
        1e90b0:	e3360000 	teq	r6, #0	; 0x0
        1e90b4:	0a000044 	beq	1e91cc <TSoundServer::FillDMABuffer(void)+0x1b0>
        1e90b8:	e5960014 	ldr	r0, [r6, #20]	; fField20
        1e90bc:	e3100004 	tst	r0, #4	; 0x4
        1e90c0:	1596100c 	ldrne	r1, [r6, #12]	; fField12
        1e90c4:	13310000 	teqne	r1, #0	; 0x0
        1e90c8:	0afffff7 	beq	1e90ac <TSoundServer::FillDMABuffer(void)+0x90>
        1e90cc:	e3100008 	tst	r0, #8	; 0x8
        1e90d0:	1afffff5 	bne	1e90ac <TSoundServer::FillDMABuffer(void)+0x90>
        1e90d4:	e3360000 	teq	r6, #0	; 0x0
        1e90d8:	0a00003b 	beq	1e91cc <TSoundServer::FillDMABuffer(void)+0x1b0>
        1e90dc:	e1a00006 	mov	r0, r6
        1e90e0:	ebffea0f 	bl	1e3924 <TDMAChannel::GetVolume(void)>
        1e90e4:	e1a08000 	mov	r8, r0
        1e90e8:	e52d5004 	str	r5, [sp, -#4]!	; fField4
        1e90ec:	e1a0200d 	mov	r2, sp
        1e90f0:	e1a01007 	mov	r1, r7
        1e90f4:	e1a00006 	mov	r0, r6
        1e90f8:	eb665371 	bl	1b7dec4 <TDMAChannel::$Produce(void *, long *)>
        1e90fc:	e59d0000 	ldr	r0, [sp]
        1e9100:	e1a09000 	mov	r9, r0
        1e9104:	e1550000 	cmp	r5, r0
        1e9108:	da00000b 	ble	1e913c <TSoundServer::FillDMABuffer(void)+0x120>
        1e910c:	e0452000 	sub	r2, r5, r0
        1e9110:	e59410c4 	ldr	r1, [r4, #196]	; fField196
        1e9114:	e59111f0 	ldr	r1, [r1, #496]
        1e9118:	e3510008 	cmp	r1, #8	; 0x8
        1e911c:	13a01002 	movne	r1, #2	; 0x2
        1e9120:	03a01001 	moveq	r1, #1	; 0x1
        1e9124:	e0020291 	mul	r2, r1, r2
        1e9128:	e59410c0 	ldr	r1, [r4, #192]	; fField192
        1e912c:	13a03002 	movne	r3, #2	; 0x2
        1e9130:	03a03001 	moveq	r3, #1	; 0x1
        1e9134:	e0207093 	mla	r0, r3, r0, r7
        1e9138:	eb672e46 	bl	1bb4a58 <$memset>
        1e913c:	e5966008 	ldr	r6, [r6, #8]	; fField8
        1e9140:	e3360000 	teq	r6, #0	; 0x0
        1e9144:	0a00001e 	beq	1e91c4 <TSoundServer::FillDMABuffer(void)+0x1a8>
        1e9148:	e5960014 	ldr	r0, [r6, #20]	; fField20
        1e914c:	e3100004 	tst	r0, #4	; 0x4
        1e9150:	1596100c 	ldrne	r1, [r6, #12]	; fField12
        1e9154:	13310000 	teqne	r1, #0	; 0x0
        1e9158:	0a000016 	beq	1e91b8 <TSoundServer::FillDMABuffer(void)+0x19c>
        1e915c:	e3100008 	tst	r0, #8	; 0x8
        1e9160:	1a000014 	bne	1e91b8 <TSoundServer::FillDMABuffer(void)+0x19c>
        1e9164:	e1a00006 	mov	r0, r6
        1e9168:	ebffe9ed 	bl	1e3924 <TDMAChannel::GetVolume(void)>
        1e916c:	e1500008 	cmp	r0, r8
        1e9170:	b1a00008 	movlt	r0, r8
        1e9174:	ba000001 	blt	1e9180 <TSoundServer::FillDMABuffer(void)+0x164>
        1e9178:	e1a00006 	mov	r0, r6
        1e917c:	ebffe9e8 	bl	1e3924 <TDMAChannel::GetVolume(void)>
        1e9180:	e1a08000 	mov	r8, r0
        1e9184:	e58d5000 	str	r5, [sp]
        1e9188:	e1a0200d 	mov	r2, sp
        1e918c:	e1a00006 	mov	r0, r6
        1e9190:	e59410b8 	ldr	r1, [r4, #184]	; fField184
        1e9194:	eb66534a 	bl	1b7dec4 <TDMAChannel::$Produce(void *, long *)>
        1e9198:	e59410b8 	ldr	r1, [r4, #184]	; fField184
        1e919c:	e1a00007 	mov	r0, r7
        1e91a0:	e59d2000 	ldr	r2, [sp]
        1e91a4:	e1a0e00f 	mov	lr, pc
        1e91a8:	e594f0bc 	ldr	pc, [r4, #188]	; fField188
        1e91ac:	e59d0000 	ldr	r0, [sp]
        1e91b0:	e1590000 	cmp	r9, r0
        1e91b4:	d1a09000 	movle	r9, r0
        1e91b8:	e5966008 	ldr	r6, [r6, #8]	; fField8
        1e91bc:	e3360000 	teq	r6, #0	; 0x0
        1e91c0:	1affffe0 	bne	1e9148 <TSoundServer::FillDMABuffer(void)+0x12c>
        1e91c4:	e0455009 	sub	r5, r5, r9
        1e91c8:	e28dd004 	add	sp, sp, #4	; 0x4
        1e91cc:	e1a01008 	mov	r1, r8
        1e91d0:	e1a00004 	mov	r0, r4
        1e91d4:	eb665b74 	bl	1b7ffac <TSoundServer::$SetOutputVolume(long)>
        1e91d8:	e5b400c4 	ldr	r0, [r4, #196]!	; fField196
        1e91dc:	e59001f0 	ldr	r0, [r0, #496]
        1e91e0:	e3300010 	teq	r0, #16	; 0x10
        1e91e4:	01a05085 	moveq	r5, r5, lsl #1
        1e91e8:	e2650eea 	rsb	r0, r5, #3744	; 0xea0
        1e91ec:	e59d1000 	ldr	r1, [sp]
        1e91f0:	e5a100d0 	str	r0, [r1, #208]!
        1e91f4:	e1a0000a 	mov	r0, sl
        1e91f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundServer::OpenInputChannel(unsigned long *, unsigned long)
 * Address: 001e91fc
 */
TSoundServer::OpenInputChannel(unsigned long *, unsigned long) {
    /*
        1e91fc:	e1a0c00d 	mov	ip, sp
        1e9200:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e9204:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e9208:	e1a04000 	mov	r4, r0
        1e920c:	e1a05001 	mov	r5, r1
        1e9210:	e1a06002 	mov	r6, r2
        1e9214:	e3a07000 	mov	r7, #0	; 0x0
        1e9218:	e59f8078 	ldr	r8, [pc, #78]	; 1e9298 <TSoundServer::OpenInputChannel(unsigned long *, unsigned long)+0x9c>
        1e921c:	e5980004 	ldr	r0, [r8, #4]	; fField4
        1e9220:	eb679974 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        1e9224:	e28f1f1c 	add	r1, pc, #112	; 0x70
        1e9228:	eb67a9d4 	bl	1bd3980 <TClassInfo::$GetCapability( const(char const *))>
        1e922c:	e3300000 	teq	r0, #0	; 0x0
        1e9230:	0a000020 	beq	1e92b8 <TSoundServer::OpenInputChannel(unsigned long *, unsigned long)+0xbc>
        1e9234:	e3a00000 	mov	r0, #0	; 0x0
        1e9238:	e5850000 	str	r0, [r5]
        1e923c:	e3a00001 	mov	r0, #1	; 0x1
        1e9240:	e52d001c 	str	r0, [sp, -#28]!
        1e9244:	e1a0100d 	mov	r1, sp
        1e9248:	e5b80004 	ldr	r0, [r8, #4]!	; fField4
        1e924c:	eb067fa8 	bl	3890f4 <PSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *)>
        1e9250:	e1a00004 	mov	r0, r4
        1e9254:	eb664ace 	bl	1b7bd94 <TSoundServer::$UniqueId(void)>
        1e9258:	e1a01000 	mov	r1, r0
        1e925c:	e1a0200d 	mov	r2, sp
        1e9260:	e3a00000 	mov	r0, #0	; 0x0
        1e9264:	eb665312 	bl	1b7deb4 <TDMAChannel::$__ct(unsigned long, TSoundDriverInfo const &)>
        1e9268:	e3300000 	teq	r0, #0	; 0x0
        1e926c:	0a00000d 	beq	1e92a8 <TSoundServer::OpenInputChannel(unsigned long *, unsigned long)+0xac>
        1e9270:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1e9274:	e3811002 	orr	r1, r1, #2	; 0x2
        1e9278:	e5801014 	str	r1, [r0, #20]	; fField20
        1e927c:	e59410dc 	ldr	r1, [r4, #220]	; fField220
        1e9280:	e5801008 	str	r1, [r0, #8]	; fField8
        1e9284:	e580602c 	str	r6, [r0, #44]	; fField44
        1e9288:	e5a400dc 	str	r0, [r4, #220]!	; fField220
        1e928c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1e9290:	e5850000 	str	r0, [r5]
        1e9294:	ea000005 	b	1e92b0 <TSoundServer::OpenInputChannel(unsigned long *, unsigned long)+0xb4>
        1e9298:	0c101b10 	ldceq	11, cr1, [r0], -#64
        1e929c:	536f756e 	cmnpl	pc, #461373440	; 0x1b800000
        1e92a0:	64496e70 	strvsb	r6, [r9], -#3696
        1e92a4:	75740000 	ldrvcb	r0, [r4]!
        1e92a8:	eb67e39c 	bl	1be2120 <$MemError>
        1e92ac:	e1a07000 	mov	r7, r0
        1e92b0:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1e92b4:	ea000000 	b	1e92bc <TSoundServer::OpenInputChannel(unsigned long *, unsigned long)+0xc0>
        1e92b8:	e59f7004 	ldr	r7, [pc, #4]	; 1e92c4 <TSoundServer::OpenInputChannel(unsigned long *, unsigned long)+0xc8>	; fField4
        1e92bc:	e1a00007 	mov	r0, r7
        1e92c0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e92c4:	ffff8ac7 	swinv	0x00ff8ac7
    */
}

/**
 * Symbol: TSoundServer::AllInputChannelsEmpty(void)
 * Address: 001e92c8
 */
TSoundServer::AllInputChannelsEmpty(void) {
    /*
        1e92c8:	e59000dc 	ldr	r0, [r0, #220]	; fField220
        1e92cc:	e3300000 	teq	r0, #0	; 0x0
        1e92d0:	0a00000a 	beq	1e9300 <TSoundServer::AllInputChannelsEmpty(void)+0x38>
        1e92d4:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1e92d8:	e3110004 	tst	r1, #4	; 0x4
        1e92dc:	1590200c 	ldrne	r2, [r0, #12]	; fField12
        1e92e0:	13320000 	teqne	r2, #0	; 0x0
        1e92e4:	0a000002 	beq	1e92f4 <TSoundServer::AllInputChannelsEmpty(void)+0x2c>
        1e92e8:	e3110008 	tst	r1, #8	; 0x8
        1e92ec:	03a00000 	moveq	r0, #0	; 0x0
        1e92f0:	01a0f00e 	moveq	pc, lr
        1e92f4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1e92f8:	e3300000 	teq	r0, #0	; 0x0
        1e92fc:	1afffff4 	bne	1e92d4 <TSoundServer::AllInputChannelsEmpty(void)+0xc>
        1e9300:	e3a00001 	mov	r0, #1	; 0x1
        1e9304:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoundServer::StartInput(int)
 * Address: 001e9308
 */
TSoundServer::StartInput(int) {
    /*
        1e9308:	e1a0c00d 	mov	ip, sp
        1e930c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e9310:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e9314:	e1a04000 	mov	r4, r0
        1e9318:	e1a05001 	mov	r5, r1
        1e931c:	e59f607c 	ldr	r6, [pc, #7c]	; 1e93a0 <TSoundServer::StartInput(int)+0x98>
        1e9320:	e5960004 	ldr	r0, [r6, #4]	; fField4
        1e9324:	eb067fa2 	bl	3891b4 <PSoundDriver::InputIsRunning(void)>
        1e9328:	e3300000 	teq	r0, #0	; 0x0
        1e932c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1e9330:	e1a00004 	mov	r0, r4
        1e9334:	eb664672 	bl	1b7ad04 <TSoundServer::$AllInputChannelsEmpty(void)>
        1e9338:	e3300000 	teq	r0, #0	; 0x0
        1e933c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1e9340:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1e9344:	eb679500 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        1e9348:	e3a00000 	mov	r0, #0	; 0x0
        1e934c:	e5941074 	ldr	r1, [r4, #116]	; fField116
        1e9350:	e5a10018 	str	r0, [r1, #24]!	; fField24
        1e9354:	e5c400f4 	strb	r0, [r4, #244]	; fField244
        1e9358:	e59410f0 	ldr	r1, [r4, #240]	; fField240
        1e935c:	e3a02eea 	mov	r2, #3744	; 0xea0
        1e9360:	e5960004 	ldr	r0, [r6, #4]	; fField4
        1e9364:	eb067f6e 	bl	389124 <PSoundDriver::ScheduleInputBuffer(unsigned long, unsigned long)>
        1e9368:	e1a01005 	mov	r1, r5
        1e936c:	e5960004 	ldr	r0, [r6, #4]	; fField4
        1e9370:	eb067f74 	bl	389148 <PSoundDriver::PowerInputOn(long)>
        1e9374:	e5960004 	ldr	r0, [r6, #4]	; fField4
        1e9378:	eb067f87 	bl	38919c <PSoundDriver::InputIsEnabled(void)>
        1e937c:	e3300000 	teq	r0, #0	; 0x0
        1e9380:	05960004 	ldreq	r0, [r6, #4]	; fField4
        1e9384:	0b067f78 	bleq	38916c <PSoundDriver::StartInput(void)>
        1e9388:	e5b410f0 	ldr	r1, [r4, #240]!	; fField240
        1e938c:	e2611001 	rsb	r1, r1, #1	; 0x1
        1e9390:	e3a02eea 	mov	r2, #3744	; 0xea0
        1e9394:	e5b60004 	ldr	r0, [r6, #4]!	; fField4
        1e9398:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1e939c:	ea067f60 	b	389124 <PSoundDriver::ScheduleInputBuffer(unsigned long, unsigned long)>
        1e93a0:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TSoundServer::StopInput(int)
 * Address: 001e93a4
 */
TSoundServer::StopInput(int) {
    /*
        1e93a4:	e1a0c00d 	mov	ip, sp
        1e93a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e93ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e93b0:	e1a04001 	mov	r4, r1
        1e93b4:	e3a050cd 	mov	r5, #205	; 0xcd
        1e93b8:	e2455c76 	sub	r5, r5, #30208	; 0x7600
        1e93bc:	e5b060dc 	ldr	r6, [r0, #220]!	; fField220
        1e93c0:	e3360000 	teq	r6, #0	; 0x0
        1e93c4:	0a000008 	beq	1e93ec <TSoundServer::StopInput(int)+0x48>
        1e93c8:	e1a00006 	mov	r0, r6
        1e93cc:	e1a02005 	mov	r2, r5
        1e93d0:	e3a01000 	mov	r1, #0	; 0x0
        1e93d4:	e5963000 	ldr	r3, [r6]
        1e93d8:	e1a0e00f 	mov	lr, pc
        1e93dc:	e283f014 	add	pc, r3, #20	; 0x14
        1e93e0:	e5966008 	ldr	r6, [r6, #8]	; fField8
        1e93e4:	e3360000 	teq	r6, #0	; 0x0
        1e93e8:	1afffff6 	bne	1e93c8 <TSoundServer::StopInput(int)+0x24>
        1e93ec:	e3340000 	teq	r4, #0	; 0x0
        1e93f0:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1e93f4:	e59f4010 	ldr	r4, [pc, #10]	; 1e940c <TSoundServer::StopInput(int)+0x68>
        1e93f8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1e93fc:	eb067f60 	bl	389184 <PSoundDriver::StopInput(void)>
        1e9400:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1e9404:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1e9408:	ea067f51 	b	389154 <PSoundDriver::PowerInputOff(void)>
        1e940c:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TSoundServer::ScheduleInputBuffer(int)
 * Address: 001e9410
 */
TSoundServer::ScheduleInputBuffer(int) {
    /*
        1e9410:	e1a0c00d 	mov	ip, sp
        1e9414:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e9418:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e941c:	e1a04000 	mov	r4, r0
        1e9420:	eb665f2b 	bl	1b810d4 <TSoundServer::$EmptyDMABuffer(int)>
        1e9424:	e1a06000 	mov	r6, r0
        1e9428:	e59f5044 	ldr	r5, [pc, #44]	; 1e9474 <TSoundServer::ScheduleInputBuffer(int)+0x64>	; fField44
        1e942c:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e9430:	eb067f5f 	bl	3891b4 <PSoundDriver::InputIsRunning(void)>
        1e9434:	e3300000 	teq	r0, #0	; 0x0
        1e9438:	0a00000e 	beq	1e9478 <TSoundServer::ScheduleInputBuffer(int)+0x68>
        1e943c:	e0840106 	add	r0, r4, r6, lsl #2
        1e9440:	e59000e8 	ldr	r0, [r0, #232]
        1e9444:	e3300000 	teq	r0, #0	; 0x0
        1e9448:	1a00000a 	bne	1e9478 <TSoundServer::ScheduleInputBuffer(int)+0x68>
        1e944c:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e9450:	eb067f4b 	bl	389184 <PSoundDriver::StopInput(void)>
        1e9454:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        1e9458:	eb067f3d 	bl	389154 <PSoundDriver::PowerInputOff(void)>
        1e945c:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1e9460:	eb6794b9 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        1e9464:	e3a00000 	mov	r0, #0	; 0x0
        1e9468:	e5b41074 	ldr	r1, [r4, #116]!	; fField116
        1e946c:	e5a10018 	str	r0, [r1, #24]!	; fField24
        1e9470:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1e9474:	0c101b10 	ldceq	11, cr1, [r0], -#64
        1e9478:	e1a01006 	mov	r1, r6
        1e947c:	e3a02eea 	mov	r2, #3744	; 0xea0
        1e9480:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        1e9484:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1e9488:	ea067f25 	b	389124 <PSoundDriver::ScheduleInputBuffer(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TSoundServer::EmptyDMABuffer(int)
 * Address: 001e948c
 */
TSoundServer::EmptyDMABuffer(int) {
    /*
        1e948c:	e1a0c00d 	mov	ip, sp
        1e9490:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e9494:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e9498:	e1a04000 	mov	r4, r0
        1e949c:	e59000dc 	ldr	r0, [r0, #220]	; fField220
        1e94a0:	e59001f0 	ldr	r0, [r0, #496]
        1e94a4:	e3300010 	teq	r0, #16	; 0x10
        1e94a8:	13a07eea 	movne	r7, #3744	; 0xea0
        1e94ac:	03a07e75 	moveq	r7, #1872	; 0x750
        1e94b0:	e3a06000 	mov	r6, #0	; 0x0
        1e94b4:	e59480f0 	ldr	r8, [r4, #240]	; fField240
        1e94b8:	e0840108 	add	r0, r4, r8, lsl #2
        1e94bc:	e1a09000 	mov	r9, r0
        1e94c0:	e58070e8 	str	r7, [r0, #232]
        1e94c4:	e5b0a0e0 	ldr	sl, [r0, #224]!	; fField224
        1e94c8:	e59450dc 	ldr	r5, [r4, #220]	; fField220
        1e94cc:	e3350000 	teq	r5, #0	; 0x0
        1e94d0:	0a000017 	beq	1e9534 <TSoundServer::EmptyDMABuffer(int)+0xa8>
        1e94d4:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1e94d8:	e3100004 	tst	r0, #4	; 0x4
        1e94dc:	1595100c 	ldrne	r1, [r5, #12]	; fField12
        1e94e0:	13310000 	teqne	r1, #0	; 0x0
        1e94e4:	0a00000c 	beq	1e951c <TSoundServer::EmptyDMABuffer(int)+0x90>
        1e94e8:	e3100008 	tst	r0, #8	; 0x8
        1e94ec:	05d400f4 	ldreqb	r0, [r4, #244]	; fField244
        1e94f0:	03300000 	teqeq	r0, #0	; 0x0
        1e94f4:	1a000008 	bne	1e951c <TSoundServer::EmptyDMABuffer(int)+0x90>
        1e94f8:	e52d7004 	str	r7, [sp, -#4]!	; fField4
        1e94fc:	e1a0200d 	mov	r2, sp
        1e9500:	e1a0100a 	mov	r1, sl
        1e9504:	e1a00005 	mov	r0, r5
        1e9508:	eb665eed 	bl	1b810c4 <TDMAChannel::$Consume(void *, long *)>
        1e950c:	e59d0000 	ldr	r0, [sp]
        1e9510:	e3500000 	cmp	r0, #0	; 0x0
        1e9514:	c3a06001 	movgt	r6, #1	; 0x1
        1e9518:	e28dd004 	add	sp, sp, #4	; 0x4
        1e951c:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1e9520:	e3100040 	tst	r0, #64	; 0x40
        1e9524:	13a06001 	movne	r6, #1	; 0x1
        1e9528:	e5955008 	ldr	r5, [r5, #8]	; fField8
        1e952c:	e3350000 	teq	r5, #0	; 0x0
        1e9530:	1affffe7 	bne	1e94d4 <TSoundServer::EmptyDMABuffer(int)+0x48>
        1e9534:	e3360000 	teq	r6, #0	; 0x0
        1e9538:	03a00000 	moveq	r0, #0	; 0x0
        1e953c:	05a900e8 	streq	r0, [r9, #232]!
        1e9540:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
        1e9544:	e3510001 	cmp	r1, #1	; 0x1
        1e9548:	d3a00000 	movle	r0, #0	; 0x0
        1e954c:	c3a00001 	movgt	r0, #1	; 0x1
        1e9550:	e5c400f4 	strb	r0, [r4, #244]	; fField244
        1e9554:	e59410f0 	ldr	r1, [r4, #240]	; fField240
        1e9558:	e2610001 	rsb	r0, r1, #1	; 0x1
        1e955c:	e5a400f0 	str	r0, [r4, #240]!	; fField240
        1e9560:	e1a00008 	mov	r0, r8
        1e9564:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundServer::SetOutputVolume(long)
 * Address: 001e9568
 */
TSoundServer::SetOutputVolume(long) {
    /*
        1e9568:	e1a0c00d 	mov	ip, sp
        1e956c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e9570:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e9574:	e1a05000 	mov	r5, r0
        1e9578:	e1a04001 	mov	r4, r1
        1e957c:	e5900100 	ldr	r0, [r0, #256]	; fField256
        1e9580:	e1300001 	teq	r0, r1
        1e9584:	0a000004 	beq	1e959c <TSoundServer::SetOutputVolume(long)+0x34>
        1e9588:	e1a01004 	mov	r1, r4
        1e958c:	e59f0010 	ldr	r0, [pc, #10]	; 1e95a4 <TSoundServer::SetOutputVolume(long)+0x3c>
        1e9590:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1e9594:	eb067f0f 	bl	3891d8 <PSoundDriver::OutputVolume(long)>
        1e9598:	e5a54100 	str	r4, [r5, #256]!	; fField256
        1e959c:	e3a00000 	mov	r0, #0	; 0x0
        1e95a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1e95a4:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TSoundServer::SoundOutputIH(void)
 * Address: 001e95a8
 */
TSoundServer::SoundOutputIH(void) {
    /*
        1e95a8:	e1a0c00d 	mov	ip, sp
        1e95ac:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1e95b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e95b4:	e1a0c000 	mov	ip, r0
        1e95b8:	e5900070 	ldr	r0, [r0, #112]	; fField112
        1e95bc:	e5b01018 	ldr	r1, [r0, #24]!	; fField24
        1e95c0:	e2811001 	add	r1, r1, #1	; 0x1
        1e95c4:	e3a03000 	mov	r3, #0	; 0x0
        1e95c8:	e3a02000 	mov	r2, #0	; 0x0
        1e95cc:	e5801000 	str	r1, [r0]
        1e95d0:	e3a01000 	mov	r1, #0	; 0x0
        1e95d4:	e3a00301 	mov	r0, #67108864	; 0x4000000
        1e95d8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1e95dc:	e3a03014 	mov	r3, #20	; 0x14
        1e95e0:	e92d0008 	stmdb	sp!, {r3}
        1e95e4:	e5bc0070 	ldr	r0, [ip, #112]!	; fField112
        1e95e8:	e1a02000 	mov	r2, r0
        1e95ec:	e5901000 	ldr	r1, [r0]
        1e95f0:	e59f0014 	ldr	r0, [pc, #14]	; 1e960c <TSoundServer::SoundOutputIH(void)+0x64>
        1e95f4:	e5900000 	ldr	r0, [r0]
        1e95f8:	e5900000 	ldr	r0, [r0]
        1e95fc:	e2823010 	add	r3, r2, #16	; 0x10
        1e9600:	e3a02000 	mov	r2, #0	; 0x0
        1e9604:	eb67c5ce 	bl	1bdad44 <$SendForInterrupt__FUlN21PvN31P5TTimeUc>
        1e9608:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1e960c:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TSoundServer::SetInputVolume(long)
 * Address: 001e9610
 */
TSoundServer::SetInputVolume(long) {
    /*
        1e9610:	e1a0c00d 	mov	ip, sp
        1e9614:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e9618:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e961c:	e1a04001 	mov	r4, r1
        1e9620:	e59f5038 	ldr	r5, [pc, #38]	; 1e9660 <TSoundServer::SetInputVolume(long)+0x50>
        1e9624:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e9628:	eb679872 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        1e962c:	e28f1f0c 	add	r1, pc, #48	; 0x30
        1e9630:	eb67a8d2 	bl	1bd3980 <TClassInfo::$GetCapability( const(char const *))>
        1e9634:	e3300000 	teq	r0, #0	; 0x0
        1e9638:	059f0030 	ldreq	r0, [pc, #30]	; 1e9670 <TSoundServer::SetInputVolume(long)+0x60>
        1e963c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1e9640:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1e9644:	eb067eec 	bl	3891fc <PSoundDriver::InputVolume(void)>
        1e9648:	e1300004 	teq	r0, r4
        1e964c:	11a01004 	movne	r1, r4
        1e9650:	15b50004 	ldrne	r0, [r5, #4]!	; fField4
        1e9654:	1b067ee5 	blne	3891f0 <PSoundDriver::InputVolume(long)>
        1e9658:	e3a00000 	mov	r0, #0	; 0x0
        1e965c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1e9660:	0c101b10 	ldceq	11, cr1, [r0], -#64
        1e9664:	536f756e 	cmnpl	pc, #461373440	; 0x1b800000
        1e9668:	64496e70 	strvsb	r6, [r9], -#3696
        1e966c:	75740000 	ldrvcb	r0, [r4]!
        1e9670:	ffff8ac7 	swinv	0x00ff8ac7
    */
}

/**
 * Symbol: TSoundServer::SetInputDevice(unsigned long, long)
 * Address: 001e9674
 */
TSoundServer::SetInputDevice(unsigned long, long) {
    /*
        1e9674:	e1a0c00d 	mov	ip, sp
        1e9678:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e967c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e9680:	e1a04002 	mov	r4, r2
        1e9684:	eb6645a7 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e9688:	e5a0402c 	str	r4, [r0, #44]!	; fField44
        1e968c:	e3a00000 	mov	r0, #0	; 0x0
        1e9690:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundServer::SetOutputDevice(unsigned long, long)
 * Address: 001e9694
 */
TSoundServer::SetOutputDevice(unsigned long, long) {
    /*
        1e9694:	e1a0c00d 	mov	ip, sp
        1e9698:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e969c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e96a0:	e1a04002 	mov	r4, r2
        1e96a4:	eb66459f 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e96a8:	e5a0402c 	str	r4, [r0, #44]!	; fField44
        1e96ac:	e3a00000 	mov	r0, #0	; 0x0
        1e96b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundServer::OpenDecompressorChannel(unsigned long *, unsigned long)
 * Address: 001e96b4
 */
TSoundServer::OpenDecompressorChannel(unsigned long *, unsigned long) {
    /*
        1e96b4:	e1a0c00d 	mov	ip, sp
        1e96b8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e96bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e96c0:	e1a04000 	mov	r4, r0
        1e96c4:	e1a06001 	mov	r6, r1
        1e96c8:	e1a05002 	mov	r5, r2
        1e96cc:	e3a08000 	mov	r8, #0	; 0x0
        1e96d0:	e59f7088 	ldr	r7, [pc, #88]	; 1e9760 <TSoundServer::OpenDecompressorChannel(unsigned long *, unsigned long)+0xac>
        1e96d4:	e5970004 	ldr	r0, [r7, #4]	; fField4
        1e96d8:	eb679846 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        1e96dc:	e28f1f20 	add	r1, pc, #128	; 0x80
        1e96e0:	eb67a8a6 	bl	1bd3980 <TClassInfo::$GetCapability( const(char const *))>
        1e96e4:	e3300000 	teq	r0, #0	; 0x0
        1e96e8:	0a000024 	beq	1e9780 <TSoundServer::OpenDecompressorChannel(unsigned long *, unsigned long)+0xcc>
        1e96ec:	e3a00000 	mov	r0, #0	; 0x0
        1e96f0:	e5860000 	str	r0, [r6]
        1e96f4:	e3a00001 	mov	r0, #1	; 0x1
        1e96f8:	e52d001c 	str	r0, [sp, -#28]!
        1e96fc:	e1a0100d 	mov	r1, sp
        1e9700:	e5b70004 	ldr	r0, [r7, #4]!	; fField4
        1e9704:	eb067e7a 	bl	3890f4 <PSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *)>
        1e9708:	e1a00004 	mov	r0, r4
        1e970c:	eb6649a0 	bl	1b7bd94 <TSoundServer::$UniqueId(void)>
        1e9710:	e1a01000 	mov	r1, r0
        1e9714:	e1a0200d 	mov	r2, sp
        1e9718:	e3a00000 	mov	r0, #0	; 0x0
        1e971c:	eb6651e9 	bl	1b7dec8 <TCodecChannel::$__ct(unsigned long, TSoundDriverInfo const &)>
        1e9720:	e1b07000 	movs	r7, r0
        1e9724:	0a000011 	beq	1e9770 <TSoundServer::OpenDecompressorChannel(unsigned long *, unsigned long)+0xbc>
        1e9728:	e5970014 	ldr	r0, [r7, #20]	; fField20
        1e972c:	e3800020 	orr	r0, r0, #32	; 0x20
        1e9730:	e5870014 	str	r0, [r7, #20]	; fField20
        1e9734:	e59400f8 	ldr	r0, [r4, #248]	; fField248
        1e9738:	e5875200 	str	r5, [r7, #512]
        1e973c:	e1a01005 	mov	r1, r5
        1e9740:	e5870008 	str	r0, [r7, #8]	; fField8
        1e9744:	e1a00004 	mov	r0, r4
        1e9748:	eb664576 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e974c:	e5870204 	str	r0, [r7, #516]
        1e9750:	e5a470f8 	str	r7, [r4, #248]!	; fField248
        1e9754:	e5b70004 	ldr	r0, [r7, #4]!	; fField4
        1e9758:	e5860000 	str	r0, [r6]
        1e975c:	ea000005 	b	1e9778 <TSoundServer::OpenDecompressorChannel(unsigned long *, unsigned long)+0xc4>
        1e9760:	0c101b10 	ldceq	11, cr1, [r0], -#64
        1e9764:	536f756e 	cmnpl	pc, #461373440	; 0x1b800000
        1e9768:	644f7574 	strvsb	r7, [pc], #574	; 1e9770 <TSoundServer::OpenDecompressorChannel(unsigned long *, unsigned long)+0xbc>
        1e976c:	70757400 	rsbvcs	r7, r5, r0, lsl #8
        1e9770:	eb67e26a 	bl	1be2120 <$MemError>
        1e9774:	e1a08000 	mov	r8, r0
        1e9778:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1e977c:	ea000000 	b	1e9784 <TSoundServer::OpenDecompressorChannel(unsigned long *, unsigned long)+0xd0>
        1e9780:	e59f8004 	ldr	r8, [pc, #4]	; 1e978c <TSoundServer::OpenDecompressorChannel(unsigned long *, unsigned long)+0xd8>	; fField4
        1e9784:	e1a00008 	mov	r0, r8
        1e9788:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e978c:	ffff8ac7 	swinv	0x00ff8ac7
    */
}

/**
 * Symbol: TSoundServer::StartDecompressor(int)
 * Address: 001e9790
 */
TSoundServer::StartDecompressor(int) {
    /*
        1e9790:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoundServer::StopDecompressor(int)
 * Address: 001e9794
 */
TSoundServer::StopDecompressor(int) {
    /*
        1e9794:	e1a0c00d 	mov	ip, sp
        1e9798:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e979c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e97a0:	e3a040cd 	mov	r4, #205	; 0xcd
        1e97a4:	e2444c76 	sub	r4, r4, #30208	; 0x7600
        1e97a8:	e5b050f8 	ldr	r5, [r0, #248]!	; fField248
        1e97ac:	e3350000 	teq	r5, #0	; 0x0
        1e97b0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1e97b4:	e1a00005 	mov	r0, r5
        1e97b8:	e1a02004 	mov	r2, r4
        1e97bc:	e3a01000 	mov	r1, #0	; 0x0
        1e97c0:	e5953000 	ldr	r3, [r5]
        1e97c4:	e1a0e00f 	mov	lr, pc
        1e97c8:	e283f014 	add	pc, r3, #20	; 0x14
        1e97cc:	e5955008 	ldr	r5, [r5, #8]	; fField8
        1e97d0:	e3350000 	teq	r5, #0	; 0x0
        1e97d4:	1afffff6 	bne	1e97b4 <TSoundServer::StopDecompressor(int)+0x20>
        1e97d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundServer::OpenCompressorChannel(unsigned long *, unsigned long)
 * Address: 001e97dc
 */
TSoundServer::OpenCompressorChannel(unsigned long *, unsigned long) {
    /*
        1e97dc:	e1a0c00d 	mov	ip, sp
        1e97e0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e97e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e97e8:	e1a04000 	mov	r4, r0
        1e97ec:	e1a06001 	mov	r6, r1
        1e97f0:	e1a05002 	mov	r5, r2
        1e97f4:	e3a08000 	mov	r8, #0	; 0x0
        1e97f8:	e59f7088 	ldr	r7, [pc, #88]	; 1e9888 <TSoundServer::OpenCompressorChannel(unsigned long *, unsigned long)+0xac>
        1e97fc:	e5970004 	ldr	r0, [r7, #4]	; fField4
        1e9800:	eb6797fc 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        1e9804:	e28f1f20 	add	r1, pc, #128	; 0x80
        1e9808:	eb67a85c 	bl	1bd3980 <TClassInfo::$GetCapability( const(char const *))>
        1e980c:	e3300000 	teq	r0, #0	; 0x0
        1e9810:	0a000024 	beq	1e98a8 <TSoundServer::OpenCompressorChannel(unsigned long *, unsigned long)+0xcc>
        1e9814:	e3a00000 	mov	r0, #0	; 0x0
        1e9818:	e5860000 	str	r0, [r6]
        1e981c:	e3a00001 	mov	r0, #1	; 0x1
        1e9820:	e52d001c 	str	r0, [sp, -#28]!
        1e9824:	e1a0100d 	mov	r1, sp
        1e9828:	e5b70004 	ldr	r0, [r7, #4]!	; fField4
        1e982c:	eb067e30 	bl	3890f4 <PSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *)>
        1e9830:	e1a00004 	mov	r0, r4
        1e9834:	eb664956 	bl	1b7bd94 <TSoundServer::$UniqueId(void)>
        1e9838:	e1a01000 	mov	r1, r0
        1e983c:	e1a0200d 	mov	r2, sp
        1e9840:	e3a00000 	mov	r0, #0	; 0x0
        1e9844:	eb66519f 	bl	1b7dec8 <TCodecChannel::$__ct(unsigned long, TSoundDriverInfo const &)>
        1e9848:	e1b07000 	movs	r7, r0
        1e984c:	0a000011 	beq	1e9898 <TSoundServer::OpenCompressorChannel(unsigned long *, unsigned long)+0xbc>
        1e9850:	e5970014 	ldr	r0, [r7, #20]	; fField20
        1e9854:	e3800010 	orr	r0, r0, #16	; 0x10
        1e9858:	e5870014 	str	r0, [r7, #20]	; fField20
        1e985c:	e59400fc 	ldr	r0, [r4, #252]	; fField252
        1e9860:	e5875200 	str	r5, [r7, #512]
        1e9864:	e1a01005 	mov	r1, r5
        1e9868:	e5870008 	str	r0, [r7, #8]	; fField8
        1e986c:	e1a00004 	mov	r0, r4
        1e9870:	eb66452c 	bl	1b7ad28 <TSoundServer::$FindChannel(unsigned long)>
        1e9874:	e5870204 	str	r0, [r7, #516]
        1e9878:	e5a470fc 	str	r7, [r4, #252]!	; fField252
        1e987c:	e5b70004 	ldr	r0, [r7, #4]!	; fField4
        1e9880:	e5860000 	str	r0, [r6]
        1e9884:	ea000005 	b	1e98a0 <TSoundServer::OpenCompressorChannel(unsigned long *, unsigned long)+0xc4>
        1e9888:	0c101b10 	ldceq	11, cr1, [r0], -#64
        1e988c:	536f756e 	cmnpl	pc, #461373440	; 0x1b800000
        1e9890:	64496e70 	strvsb	r6, [r9], -#3696
        1e9894:	75740000 	ldrvcb	r0, [r4]!
        1e9898:	eb67e220 	bl	1be2120 <$MemError>
        1e989c:	e1a08000 	mov	r8, r0
        1e98a0:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1e98a4:	ea000000 	b	1e98ac <TSoundServer::OpenCompressorChannel(unsigned long *, unsigned long)+0xd0>
        1e98a8:	e59f8004 	ldr	r8, [pc, #4]	; 1e98b4 <TSoundServer::OpenCompressorChannel(unsigned long *, unsigned long)+0xd8>	; fField4
        1e98ac:	e1a00008 	mov	r0, r8
        1e98b0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e98b4:	ffff8ac7 	swinv	0x00ff8ac7
    */
}

/**
 * Symbol: TSoundServer::StartCompressor(int)
 * Address: 001e98b8
 */
TSoundServer::StartCompressor(int) {
    /*
        1e98b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoundServer::SoundInputIH(void)
 * Address: 001e98bc
 */
TSoundServer::SoundInputIH(void) {
    /*
        1e98bc:	e1a0c00d 	mov	ip, sp
        1e98c0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1e98c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e98c8:	e1a0c000 	mov	ip, r0
        1e98cc:	e5900074 	ldr	r0, [r0, #116]	; fField116
        1e98d0:	e5b01018 	ldr	r1, [r0, #24]!	; fField24
        1e98d4:	e2811001 	add	r1, r1, #1	; 0x1
        1e98d8:	e3a03000 	mov	r3, #0	; 0x0
        1e98dc:	e3a02000 	mov	r2, #0	; 0x0
        1e98e0:	e5801000 	str	r1, [r0]
        1e98e4:	e3a01000 	mov	r1, #0	; 0x0
        1e98e8:	e3a00301 	mov	r0, #67108864	; 0x4000000
        1e98ec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1e98f0:	e3a03014 	mov	r3, #20	; 0x14
        1e98f4:	e92d0008 	stmdb	sp!, {r3}
        1e98f8:	e5bc0074 	ldr	r0, [ip, #116]!	; fField116
        1e98fc:	e1a02000 	mov	r2, r0
        1e9900:	e5901000 	ldr	r1, [r0]
        1e9904:	e59f0014 	ldr	r0, [pc, #14]	; 1e9920 <TSoundServer::SoundInputIH(void)+0x64>
        1e9908:	e5900000 	ldr	r0, [r0]
        1e990c:	e5900000 	ldr	r0, [r0]
        1e9910:	e2823010 	add	r3, r2, #16	; 0x10
        1e9914:	e3a02000 	mov	r2, #0	; 0x0
        1e9918:	eb67c509 	bl	1bdad44 <$SendForInterrupt__FUlN21PvN31P5TTimeUc>
        1e991c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1e9920:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TSoundServer::StopCompressor(int)
 * Address: 001e9924
 */
TSoundServer::StopCompressor(int) {
    /*
        1e9924:	e1a0c00d 	mov	ip, sp
        1e9928:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e992c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e9930:	e3a040cd 	mov	r4, #205	; 0xcd
        1e9934:	e2444c76 	sub	r4, r4, #30208	; 0x7600
        1e9938:	e5b050fc 	ldr	r5, [r0, #252]!	; fField252
        1e993c:	e3350000 	teq	r5, #0	; 0x0
        1e9940:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1e9944:	e1a00005 	mov	r0, r5
        1e9948:	e1a02004 	mov	r2, r4
        1e994c:	e3a01000 	mov	r1, #0	; 0x0
        1e9950:	e5953000 	ldr	r3, [r5]
        1e9954:	e1a0e00f 	mov	lr, pc
        1e9958:	e283f014 	add	pc, r3, #20	; 0x14
        1e995c:	e5955008 	ldr	r5, [r5, #8]	; fField8
        1e9960:	e3350000 	teq	r5, #0	; 0x0
        1e9964:	1afffff6 	bne	1e9944 <TSoundServer::StopCompressor(int)+0x20>
        1e9968:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

