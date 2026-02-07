#include "include/TLinkMgr.h"

/**
 * Symbol: TLinkMgr::Init(void)
 * Address: 000fd25c
 */
TLinkMgr::Init(void) {
    /*
         fd25c:	e1a0c00d 	mov	ip, sp
         fd260:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         fd264:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd268:	e1a04000 	mov	r4, r0
         fd26c:	e59f2050 	ldr	r2, [pc, #50]	; fd2c4 <TLinkMgr::Init(void)+0x68>
         fd270:	e59f1050 	ldr	r1, [pc, #50]	; fd2c8 <TLinkMgr::Init(void)+0x6c>
         fd274:	eb65facb 	bl	1a7bda8 <TStackObject::$Init(unsigned long, unsigned long)>
         fd278:	e1b05000 	movs	r5, r0
         fd27c:	1a00000e 	bne	fd2bc <TLinkMgr::Init(void)+0x60>
         fd280:	e2841018 	add	r1, r4, #24	; 0x18
         fd284:	e3a00000 	mov	r0, #0	; 0x0
         fd288:	eb6b97cf 	bl	1be31cc <CSortedList::$__ct(CItemComparer *)>
         fd28c:	e3a060a8 	mov	r6, #168	; 0xa8
         fd290:	e2466b07 	sub	r6, r6, #7168	; 0x1c00
         fd294:	e584003c 	str	r0, [r4, #60]	; fField60
         fd298:	e3300000 	teq	r0, #0	; 0x0
         fd29c:	0a000005 	beq	fd2b8 <TLinkMgr::Init(void)+0x5c>
         fd2a0:	e2841028 	add	r1, r4, #40	; 0x28
         fd2a4:	e3a00000 	mov	r0, #0	; 0x0
         fd2a8:	eb6b97c7 	bl	1be31cc <CSortedList::$__ct(CItemComparer *)>
         fd2ac:	e5a40038 	str	r0, [r4, #56]!	; fField56
         fd2b0:	e3300000 	teq	r0, #0	; 0x0
         fd2b4:	1a000000 	bne	fd2bc <TLinkMgr::Init(void)+0x60>
         fd2b8:	e1a05006 	mov	r5, r6
         fd2bc:	e1a00005 	mov	r0, r5
         fd2c0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         fd2c4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         fd2c8:	6c617020 	stcvsl	0, cr7, [r1], -#128
    */
}

/**
 * Symbol: TLinkMgr::AttachProtocol(TAppleTalkMessage *)
 * Address: 000fd2cc
 */
TLinkMgr::AttachProtocol(TAppleTalkMessage *) {
    /*
         fd2cc:	e1a0c00d 	mov	ip, sp
         fd2d0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         fd2d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd2d8:	e1a04000 	mov	r4, r0
         fd2dc:	e3a07000 	mov	r7, #0	; 0x0
         fd2e0:	e1a06001 	mov	r6, r1
         fd2e4:	e5d18014 	ldrb	r8, [r1, #20]	; fField20
         fd2e8:	e3380000 	teq	r8, #0	; 0x0
         fd2ec:	0a00001d 	beq	fd368 <TLinkMgr::AttachProtocol(TAppleTalkMessage *)+0x9c>
         fd2f0:	e24dd004 	sub	sp, sp, #4	; 0x4
         fd2f4:	e5c48024 	strb	r8, [r4, #36]	; fField36
         fd2f8:	e2841018 	add	r1, r4, #24	; 0x18
         fd2fc:	e1a0200d 	mov	r2, sp
         fd300:	e594003c 	ldr	r0, [r4, #60]	; fField60
         fd304:	eb6bc0e3 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         fd308:	e59f904c 	ldr	r9, [pc, #4c]	; fd35c <TLinkMgr::AttachProtocol(TAppleTalkMessage *)+0x90>
         fd30c:	e3300000 	teq	r0, #0	; 0x0
         fd310:	1a000012 	bne	fd360 <TLinkMgr::AttachProtocol(TAppleTalkMessage *)+0x94>
         fd314:	e3a00000 	mov	r0, #0	; 0x0
         fd318:	eb65d57e 	bl	1a72918 <TProtocolHandler::$__ct(void)>
         fd31c:	e1b05000 	movs	r5, r0
         fd320:	0a00000e 	beq	fd360 <TLinkMgr::AttachProtocol(TAppleTalkMessage *)+0x94>
         fd324:	e1a01008 	mov	r1, r8
         fd328:	e1a00005 	mov	r0, r5
         fd32c:	eb65faa6 	bl	1a7bdcc <TProtocolHandler::$Init(unsigned char)>
         fd330:	e5960018 	ldr	r0, [r6, #24]
         fd334:	e5850004 	str	r0, [r5, #4]
         fd338:	e596001c 	ldr	r0, [r6, #28]
         fd33c:	e5850008 	str	r0, [r5, #8]
         fd340:	e5b60020 	ldr	r0, [r6, #32]!
         fd344:	e585000c 	str	r0, [r5, #12]
         fd348:	e5b4003c 	ldr	r0, [r4, #60]!	; fField60
         fd34c:	e1a02005 	mov	r2, r5
         fd350:	e59d1000 	ldr	r1, [sp]
         fd354:	eb6bb064 	bl	1be94ec <CList::$InsertAt(long, void *)>
         fd358:	ea000001 	b	fd364 <TLinkMgr::AttachProtocol(TAppleTalkMessage *)+0x98>
         fd35c:	ffffd0bb 	swinv	0x00ffd0bb
         fd360:	e1a07009 	mov	r7, r9
         fd364:	e28dd004 	add	sp, sp, #4	; 0x4
         fd368:	e1a00007 	mov	r0, r7
         fd36c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TLinkMgr::DetachProtocol(TAppleTalkMessage *)
 * Address: 000fd370
 */
TLinkMgr::DetachProtocol(TAppleTalkMessage *) {
    /*
         fd370:	e1a0c00d 	mov	ip, sp
         fd374:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fd378:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd37c:	e1a04000 	mov	r4, r0
         fd380:	e5d10014 	ldrb	r0, [r1, #20]	; fField20
         fd384:	e3300000 	teq	r0, #0	; 0x0
         fd388:	0a00000f 	beq	fd3cc <TLinkMgr::DetachProtocol(TAppleTalkMessage *)+0x5c>
         fd38c:	e24dd004 	sub	sp, sp, #4	; 0x4
         fd390:	e5c40024 	strb	r0, [r4, #36]	; fField36
         fd394:	e2841018 	add	r1, r4, #24	; 0x18
         fd398:	e1a0200d 	mov	r2, sp
         fd39c:	e594003c 	ldr	r0, [r4, #60]	; fField60
         fd3a0:	eb6bc0bc 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         fd3a4:	e1b05000 	movs	r5, r0
         fd3a8:	0a000006 	beq	fd3c8 <TLinkMgr::DetachProtocol(TAppleTalkMessage *)+0x58>
         fd3ac:	e5b4003c 	ldr	r0, [r4, #60]!	; fField60
         fd3b0:	e3a02001 	mov	r2, #1	; 0x1
         fd3b4:	e59d1000 	ldr	r1, [sp]
         fd3b8:	eb6bbc9d 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         fd3bc:	e1a00005 	mov	r0, r5
         fd3c0:	e3a01001 	mov	r1, #1	; 0x1
         fd3c4:	eb65d97b 	bl	1a739b8 <TProtocolHandler::$__dt(void)>
         fd3c8:	e28dd004 	add	sp, sp, #4	; 0x4
         fd3cc:	e3a00000 	mov	r0, #0	; 0x0
         fd3d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLinkMgr::Write(TAppleTalkMessage *)
 * Address: 000fd3d4
 */
TLinkMgr::Write(TAppleTalkMessage *) {
    /*
         fd3d4:	e1a0c00d 	mov	ip, sp
         fd3d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         fd3dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd3e0:	e1a04000 	mov	r4, r0
         fd3e4:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         fd3e8:	e1a06001 	mov	r6, r1
         fd3ec:	e28d0014 	add	r0, sp, #20	; 0x14
         fd3f0:	eb65d13b 	bl	1a718e4 <TWriteElement::$__ct(void)>
         fd3f4:	e28d0008 	add	r0, sp, #8	; 0x8
         fd3f8:	eb65d12b 	bl	1a718ac <TWriteChain::$__ct(void)>
         fd3fc:	e596002c 	ldr	r0, [r6, #44]
         fd400:	e3300000 	teq	r0, #0	; 0x0
         fd404:	1a00000e 	bne	fd444 <TLinkMgr::Write(TAppleTalkMessage *)+0x70>
         fd408:	e5960028 	ldr	r0, [r6, #40]
         fd40c:	e1a07000 	mov	r7, r0
         fd410:	e590502c 	ldr	r5, [r0, #44]
         fd414:	eb6bd96e 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         fd418:	e5b71028 	ldr	r1, [r7, #40]!
         fd41c:	e0801001 	add	r1, r0, r1
         fd420:	e28d0014 	add	r0, sp, #20	; 0x14
         fd424:	e3a03002 	mov	r3, #2	; 0x2
         fd428:	e1a02005 	mov	r2, r5
         fd42c:	eb65fa62 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
         fd430:	e28d1014 	add	r1, sp, #20	; 0x14
         fd434:	e28d0008 	add	r0, sp, #8	; 0x8
         fd438:	eb65dd78 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
         fd43c:	e28d0008 	add	r0, sp, #8	; 0x8
         fd440:	e586002c 	str	r0, [r6, #44]
         fd444:	e2860014 	add	r0, r6, #20	; 0x14
         fd448:	e1a05000 	mov	r5, r0
         fd44c:	e5900004 	ldr	r0, [r0, #4]
         fd450:	e5840034 	str	r0, [r4, #52]	; fField52
         fd454:	e2841028 	add	r1, r4, #40	; 0x28
         fd458:	e1a0200d 	mov	r2, sp
         fd45c:	e5b40038 	ldr	r0, [r4, #56]!	; fField56
         fd460:	eb6bc08c 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         fd464:	e1b04000 	movs	r4, r0
         fd468:	0a00001a 	beq	fd4d8 <TLinkMgr::Write(TAppleTalkMessage *)+0x104>
         fd46c:	e596002c 	ldr	r0, [r6, #44]
         fd470:	eb65fe67 	bl	1a7ce14 <TWriteChain::$Length(void)>
         fd474:	e3500f96 	cmp	r0, #600	; 0x258
         fd478:	83a04016 	movhi	r4, #22	; 0x16
         fd47c:	82444c2f 	subhi	r4, r4, #12032	; 0x2f00
         fd480:	8a000016 	bhi	fd4e0 <TLinkMgr::Write(TAppleTalkMessage *)+0x10c>
         fd484:	e5d5000a 	ldrb	r0, [r5, #10]	; fField10
         fd488:	e5cd0004 	strb	r0, [sp, #4]
         fd48c:	e5d4001d 	ldrb	r0, [r4, #29]	; fField29
         fd490:	e5cd0005 	strb	r0, [sp, #5]
         fd494:	e5d60021 	ldrb	r0, [r6, #33]
         fd498:	e5cd0006 	strb	r0, [sp, #6]
         fd49c:	e28d1004 	add	r1, sp, #4	; 0x4
         fd4a0:	e28d0014 	add	r0, sp, #20	; 0x14
         fd4a4:	e3a03002 	mov	r3, #2	; 0x2
         fd4a8:	e3a02003 	mov	r2, #3	; 0x3
         fd4ac:	eb65fa42 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
         fd4b0:	e28d1014 	add	r1, sp, #20	; 0x14
         fd4b4:	e596002c 	ldr	r0, [r6, #44]
         fd4b8:	eb65dd58 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
         fd4bc:	e1a01006 	mov	r1, r6
         fd4c0:	e1a00004 	mov	r0, r4
         fd4c4:	eb660ef0 	bl	1a8108c <TLink::$Write(TPacketMessage *)>
         fd4c8:	e1a04000 	mov	r4, r0
         fd4cc:	e5b6002c 	ldr	r0, [r6, #44]!
         fd4d0:	eb660697 	bl	1a7ef34 <TWriteChain::$RemoveFirst(void)>
         fd4d4:	ea000001 	b	fd4e0 <TLinkMgr::Write(TAppleTalkMessage *)+0x10c>
         fd4d8:	e3a040b8 	mov	r4, #184	; 0xb8
         fd4dc:	e2444a03 	sub	r4, r4, #12288	; 0x3000
         fd4e0:	e28d0008 	add	r0, sp, #8	; 0x8
         fd4e4:	eb65edd0 	bl	1a78c2c <TWriteChain::$Destroy(void)>
         fd4e8:	e28d0014 	add	r0, sp, #20	; 0x14
         fd4ec:	e3a01000 	mov	r1, #0	; 0x0
         fd4f0:	e1a0e00f 	mov	lr, pc
         fd4f4:	e59df014 	ldr	pc, [sp, #20]	; fField20
         fd4f8:	e1a00004 	mov	r0, r4
         fd4fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TLinkMgr::Read(TUMsgToken *, TAppleTalkMessage *)
 * Address: 000fd500
 */
TLinkMgr::Read(TUMsgToken *, TAppleTalkMessage *) {
    /*
         fd500:	e1a0c00d 	mov	ip, sp
         fd504:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         fd508:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd50c:	e1a04000 	mov	r4, r0
         fd510:	e1a05001 	mov	r5, r1
         fd514:	e1a06002 	mov	r6, r2
         fd518:	e5b20028 	ldr	r0, [r2, #40]!
         fd51c:	eb660a9f 	bl	1a7ffa0 <TPacketBuffer::$SetMsgToken(TUMsgToken *)>
         fd520:	e5967028 	ldr	r7, [r6, #40]
         fd524:	e1a00007 	mov	r0, r7
         fd528:	eb6bd929 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         fd52c:	e5b71028 	ldr	r1, [r7, #40]!
         fd530:	e0800001 	add	r0, r0, r1
         fd534:	e5d00002 	ldrb	r0, [r0, #2]
         fd538:	e5c60021 	strb	r0, [r6, #33]
         fd53c:	e3a08000 	mov	r8, #0	; 0x0
         fd540:	e5868024 	str	r8, [r6, #36]	; fField36
         fd544:	e5967028 	ldr	r7, [r6, #40]
         fd548:	e1a00007 	mov	r0, r7
         fd54c:	eb6bd920 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         fd550:	e5b71028 	ldr	r1, [r7, #40]!
         fd554:	e0800001 	add	r0, r0, r1
         fd558:	e5d00000 	ldrb	r0, [r0]
         fd55c:	e33000ff 	teq	r0, #255	; 0xff
         fd560:	1a000003 	bne	fd574 <TLinkMgr::Read(TUMsgToken *, TAppleTalkMessage *)+0x74>
         fd564:	e2860024 	add	r0, r6, #36	; 0x24
         fd568:	e5901000 	ldr	r1, [r0]
         fd56c:	e3811001 	orr	r1, r1, #1	; 0x1
         fd570:	e5801000 	str	r1, [r0]
         fd574:	e5960028 	ldr	r0, [r6, #40]
         fd578:	eb65e576 	bl	1a76b58 <TPacketBuffer::$BeginDispatch(void)>
         fd57c:	e5960028 	ldr	r0, [r6, #40]
         fd580:	e590102c 	ldr	r1, [r0, #44]
         fd584:	e2411003 	sub	r1, r1, #3	; 0x3
         fd588:	e580102c 	str	r1, [r0, #44]
         fd58c:	e5901028 	ldr	r1, [r0, #40]
         fd590:	e2811003 	add	r1, r1, #3	; 0x3
         fd594:	e5a01028 	str	r1, [r0, #40]!
         fd598:	e5960028 	ldr	r0, [r6, #40]
         fd59c:	e590002c 	ldr	r0, [r0, #44]
         fd5a0:	e3500f96 	cmp	r0, #600	; 0x258
         fd5a4:	8a000022 	bhi	fd634 <TLinkMgr::Read(TUMsgToken *, TAppleTalkMessage *)+0x134>
         fd5a8:	e24dd004 	sub	sp, sp, #4	; 0x4
         fd5ac:	e5d60021 	ldrb	r0, [r6, #33]
         fd5b0:	e5c40024 	strb	r0, [r4, #36]	; fField36
         fd5b4:	e2841018 	add	r1, r4, #24	; 0x18
         fd5b8:	e1a0200d 	mov	r2, sp
         fd5bc:	e594003c 	ldr	r0, [r4, #60]	; fField60
         fd5c0:	eb6bc034 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         fd5c4:	e3300000 	teq	r0, #0	; 0x0
         fd5c8:	03a050bc 	moveq	r5, #188	; 0xbc
         fd5cc:	02455a03 	subeq	r5, r5, #12288	; 0x3000
         fd5d0:	0a000014 	beq	fd628 <TLinkMgr::Read(TUMsgToken *, TAppleTalkMessage *)+0x128>
         fd5d4:	e1a02006 	mov	r2, r6
         fd5d8:	e1a01005 	mov	r1, r5
         fd5dc:	eb66023f 	bl	1a7dee0 <TProtocolHandler::$Read(TUMsgToken *, TPacketMessage *)>
         fd5e0:	e1a05000 	mov	r5, r0
         fd5e4:	e280cc27 	add	ip, r0, #9984	; 0x2700
         fd5e8:	e37c0023 	cmn	ip, #35	; 0x23
         fd5ec:	1a00000d 	bne	fd628 <TLinkMgr::Read(TUMsgToken *, TAppleTalkMessage *)+0x128>
         fd5f0:	e24dd018 	sub	sp, sp, #24	; 0x18
         fd5f4:	e1a0000d 	mov	r0, sp
         fd5f8:	eb6b9b0e 	bl	1be4238 <TAEvent::$__ct(void)>
         fd5fc:	e59f002c 	ldr	r0, [pc, #2c]	; fd630 <TLinkMgr::Read(TUMsgToken *, TAppleTalkMessage *)+0x130>
         fd600:	e58d0000 	str	r0, [sp]
         fd604:	e58d800c 	str	r8, [sp, #12]
         fd608:	e58d8008 	str	r8, [sp, #8]
         fd60c:	e5d60021 	ldrb	r0, [r6, #33]
         fd610:	e5cd0014 	strb	r0, [sp, #20]	; fField20
         fd614:	e1a0100d 	mov	r1, sp
         fd618:	e1a00004 	mov	r0, r4
         fd61c:	eb65ed88 	bl	1a78c44 <TLinkMgr::$DetachProtocol(TAppleTalkMessage *)>
         fd620:	e1a05000 	mov	r5, r0
         fd624:	e28dd018 	add	sp, sp, #24	; 0x18
         fd628:	e28dd004 	add	sp, sp, #4	; 0x4
         fd62c:	ea000002 	b	fd63c <TLinkMgr::Read(TUMsgToken *, TAppleTalkMessage *)+0x13c>
         fd630:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         fd634:	e3a05016 	mov	r5, #22	; 0x16
         fd638:	e2455c2f 	sub	r5, r5, #12032	; 0x2f00
         fd63c:	e5b60028 	ldr	r0, [r6, #40]!
         fd640:	eb65f18f 	bl	1a79c84 <TPacketBuffer::$DoneDispatch(void)>
         fd644:	e1a00005 	mov	r0, r5
         fd648:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TLinkMgr::AcquireNodeAddress(TAppleTalkMessage *)
 * Address: 000fd64c
 */
TLinkMgr::AcquireNodeAddress(TAppleTalkMessage *) {
    /*
         fd64c:	e1a0c00d 	mov	ip, sp
         fd650:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fd654:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd658:	e24dd004 	sub	sp, sp, #4	; 0x4
         fd65c:	e1a04001 	mov	r4, r1
         fd660:	e5911014 	ldr	r1, [r1, #20]	; fField20
         fd664:	e5801034 	str	r1, [r0, #52]	; fField52
         fd668:	e2801028 	add	r1, r0, #40	; 0x28
         fd66c:	e5900038 	ldr	r0, [r0, #56]	; fField56
         fd670:	e1a0200d 	mov	r2, sp
         fd674:	eb6bc007 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         fd678:	e3300000 	teq	r0, #0	; 0x0
         fd67c:	0a000002 	beq	fd68c <TLinkMgr::AcquireNodeAddress(TAppleTalkMessage *)+0x40>
         fd680:	e1a01004 	mov	r1, r4
         fd684:	eb65dce2 	bl	1a74a14 <TLink::$AcquireNodeAddress(TAcquireNodeAddress *)>
         fd688:	ea000001 	b	fd694 <TLinkMgr::AcquireNodeAddress(TAppleTalkMessage *)+0x48>
         fd68c:	e3a000b8 	mov	r0, #184	; 0xb8
         fd690:	e2400a03 	sub	r0, r0, #12288	; 0x3000
         fd694:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLinkMgr::GetLinkInfo(TAppleTalkMessage *)
 * Address: 000fd698
 */
TLinkMgr::GetLinkInfo(TAppleTalkMessage *) {
    /*
         fd698:	e3a00000 	mov	r0, #0	; 0x0
         fd69c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLinkMgr::GetAddress(TAppleTalkMessage *)
 * Address: 000fd6a0
 */
TLinkMgr::GetAddress(TAppleTalkMessage *) {
    /*
         fd6a0:	e1a0c00d 	mov	ip, sp
         fd6a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fd6a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd6ac:	e1a04001 	mov	r4, r1
         fd6b0:	e24dd004 	sub	sp, sp, #4	; 0x4
         fd6b4:	e3a05000 	mov	r5, #0	; 0x0
         fd6b8:	e5911014 	ldr	r1, [r1, #20]	; fField20
         fd6bc:	e5801034 	str	r1, [r0, #52]	; fField52
         fd6c0:	e2801028 	add	r1, r0, #40	; 0x28
         fd6c4:	e5900038 	ldr	r0, [r0, #56]	; fField56
         fd6c8:	e1a0200d 	mov	r2, sp
         fd6cc:	eb6bbff1 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         fd6d0:	e3300000 	teq	r0, #0	; 0x0
         fd6d4:	0a000007 	beq	fd6f8 <TLinkMgr::GetAddress(TAppleTalkMessage *)+0x58>
         fd6d8:	e590101e 	ldr	r1, [r0, #30]	; fField30
         fd6dc:	e1a01821 	mov	r1, r1, lsr #16
         fd6e0:	e5c41015 	strb	r1, [r4, #21]
         fd6e4:	e1a01441 	mov	r1, r1, asr #8
         fd6e8:	e5c41014 	strb	r1, [r4, #20]	; fField20
         fd6ec:	e5d0001d 	ldrb	r0, [r0, #29]	; fField29
         fd6f0:	e5c40016 	strb	r0, [r4, #22]
         fd6f4:	ea000001 	b	fd700 <TLinkMgr::GetAddress(TAppleTalkMessage *)+0x60>
         fd6f8:	e3a050b8 	mov	r5, #184	; 0xb8
         fd6fc:	e2455a03 	sub	r5, r5, #12288	; 0x3000
         fd700:	e1a00005 	mov	r0, r5
         fd704:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLinkMgr::GetZoneName(TAppleTalkMessage *)
 * Address: 000fd748
 */
TLinkMgr::GetZoneName(TAppleTalkMessage *) {
    /*
         fd748:	e1a0c00d 	mov	ip, sp
         fd74c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fd750:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd754:	e1a04001 	mov	r4, r1
         fd758:	e24dd004 	sub	sp, sp, #4	; 0x4
         fd75c:	e5911014 	ldr	r1, [r1, #20]	; fField20
         fd760:	e5801034 	str	r1, [r0, #52]	; fField52
         fd764:	e2801028 	add	r1, r0, #40	; 0x28
         fd768:	e5900038 	ldr	r0, [r0, #56]	; fField56
         fd76c:	e1a0200d 	mov	r2, sp
         fd770:	eb6bbfc8 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         fd774:	e3300000 	teq	r0, #0	; 0x0
         fd778:	0a000002 	beq	fd788 <TLinkMgr::GetZoneName(TAppleTalkMessage *)+0x40>
         fd77c:	e1a01004 	mov	r1, r4
         fd780:	eb65f572 	bl	1a7ad50 <TLink::$GetZoneName(TGetZoneNameReply *)>
         fd784:	ea000001 	b	fd790 <TLinkMgr::GetZoneName(TAppleTalkMessage *)+0x48>
         fd788:	e3a000b8 	mov	r0, #184	; 0xb8
         fd78c:	e2400a03 	sub	r0, r0, #12288	; 0x3000
         fd790:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLinkMgr::SetZoneName(TAppleTalkMessage *)
 * Address: 000fd794
 */
TLinkMgr::SetZoneName(TAppleTalkMessage *) {
    /*
         fd794:	e1a0c00d 	mov	ip, sp
         fd798:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fd79c:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd7a0:	e1a04001 	mov	r4, r1
         fd7a4:	e24dd004 	sub	sp, sp, #4	; 0x4
         fd7a8:	e5911014 	ldr	r1, [r1, #20]	; fField20
         fd7ac:	e5801034 	str	r1, [r0, #52]	; fField52
         fd7b0:	e2801028 	add	r1, r0, #40	; 0x28
         fd7b4:	e5900038 	ldr	r0, [r0, #56]	; fField56
         fd7b8:	e1a0200d 	mov	r2, sp
         fd7bc:	eb6bbfb5 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         fd7c0:	e3300000 	teq	r0, #0	; 0x0
         fd7c4:	0a000002 	beq	fd7d4 <TLinkMgr::SetZoneName(TAppleTalkMessage *)+0x40>
         fd7c8:	e1a01004 	mov	r1, r4
         fd7cc:	eb660a01 	bl	1a7ffd8 <TLink::$SetZoneName(TSetZoneNameMessage *)>
         fd7d0:	ea000001 	b	fd7dc <TLinkMgr::SetZoneName(TAppleTalkMessage *)+0x48>
         fd7d4:	e3a000b8 	mov	r0, #184	; 0xb8
         fd7d8:	e2400a03 	sub	r0, r0, #12288	; 0x3000
         fd7dc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLinkMgr::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)
 * Address: 000fd7e0
 */
TLinkMgr::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *) {
    /*
         fd7e0:	e1a02003 	mov	r2, r3
         fd7e4:	e5933010 	ldr	r3, [r3, #16]
         fd7e8:	e253cc05 	subs	ip, r3, #1280	; 0x500
         fd7ec:	a35c0001 	cmpge	ip, #1	; 0x1
         fd7f0:	01a01002 	moveq	r1, r2
         fd7f4:	0a65e4d5 	beq	1a76b50 <TLinkMgr::$AttachProtocol(TAppleTalkMessage *)>
         fd7f8:	ca000010 	bgt	fd840 <TLinkMgr::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x60>
         fd7fc:	e3530006 	cmp	r3, #6	; 0x6
         fd800:	0a6601bd 	beq	1a7defc <TLinkMgr::$Read(TUMsgToken *, TAppleTalkMessage *)>
         fd804:	ca000006 	bgt	fd824 <TLinkMgr::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x44>
         fd808:	e3330001 	teq	r3, #1	; 0x1
         fd80c:	01a01002 	moveq	r1, r2
         fd810:	0a65e4cd 	beq	1a76b4c <TLinkMgr::$AttachLink(TAppleTalkMessage *)>
         fd814:	e3330004 	teq	r3, #4	; 0x4
         fd818:	01a01002 	moveq	r1, r2
         fd81c:	0a65ed07 	beq	1a78c40 <TLinkMgr::$DetachLink(TAppleTalkMessage *)>
         fd820:	ea00001a 	b	fd890 <TLinkMgr::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xb0>
         fd824:	e333000a 	teq	r3, #10	; 0xa
         fd828:	01a01002 	moveq	r1, r2
         fd82c:	0a660e17 	beq	1a81090 <TLinkMgr::$Write(TAppleTalkMessage *)>
         fd830:	e3330c05 	teq	r3, #1280	; 0x500
         fd834:	01a01002 	moveq	r1, r2
         fd838:	0a65dc76 	beq	1a74a18 <TLinkMgr::$AcquireNodeAddress(TAppleTalkMessage *)>
         fd83c:	ea000013 	b	fd890 <TLinkMgr::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xb0>
         fd840:	e28310fd 	add	r1, r3, #253	; 0xfd
         fd844:	e2411c06 	sub	r1, r1, #1536	; 0x600
         fd848:	e3510005 	cmp	r1, #5	; 0x5
         fd84c:	908ff101 	addls	pc, pc, r1, lsl #2
         fd850:	ea00000e 	b	fd890 <TLinkMgr::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xb0>
         fd854:	ea000005 	b	fd870 <TLinkMgr::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x90>
         fd858:	ea000006 	b	fd878 <TLinkMgr::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x98>
         fd85c:	ea000007 	b	fd880 <TLinkMgr::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xa0>
         fd860:	ea000008 	b	fd888 <TLinkMgr::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xa8>
         fd864:	ea000009 	b	fd890 <TLinkMgr::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xb0>
         fd868:	e1a01002 	mov	r1, r2
         fd86c:	ea6609da 	b	1a7ffdc <TLinkMgr::$SetZoneName(TAppleTalkMessage *)>
         fd870:	e1a01002 	mov	r1, r2
         fd874:	ea65ecf2 	b	1a78c44 <TLinkMgr::$DetachProtocol(TAppleTalkMessage *)>
         fd878:	e1a01002 	mov	r1, r2
         fd87c:	ea65f118 	b	1a79ce4 <TLinkMgr::$GetAddress(TAppleTalkMessage *)>
         fd880:	e1a01002 	mov	r1, r2
         fd884:	ea65f51e 	b	1a7ad04 <TLinkMgr::$GetLinkInfo(TAppleTalkMessage *)>
         fd888:	e1a01002 	mov	r1, r2
         fd88c:	ea65f530 	b	1a7ad54 <TLinkMgr::$GetZoneName(TAppleTalkMessage *)>
         fd890:	e3a000b9 	mov	r0, #185	; 0xb9
         fd894:	e2400a03 	sub	r0, r0, #12288	; 0x3000
         fd898:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLinkMgr::ATLKAttachLink(TAppleTalkMessage *)
 * Address: 000fd89c
 */
TLinkMgr::ATLKAttachLink(TAppleTalkMessage *) {
    /*
         fd89c:	e3a00000 	mov	r0, #0	; 0x0
         fd8a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLinkMgr::ATLKDetachLink(TAppleTalkMessage *)
 * Address: 000fd8a4
 */
TLinkMgr::ATLKDetachLink(TAppleTalkMessage *) {
    /*
         fd8a4:	e3a00000 	mov	r0, #0	; 0x0
         fd8a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLinkMgr::ATLKOpen(TAppleTalkMessage *)
 * Address: 000fd8ac
 */
TLinkMgr::ATLKOpen(TAppleTalkMessage *) {
    /*
         fd8ac:	e3a01000 	mov	r1, #0	; 0x0
         fd8b0:	e5902014 	ldr	r2, [r0, #20]	; fField20
         fd8b4:	e2822001 	add	r2, r2, #1	; 0x1
         fd8b8:	e5a02014 	str	r2, [r0, #20]!	; fField20
         fd8bc:	e1a00001 	mov	r0, r1
         fd8c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLinkMgr::ATLKClose(TAppleTalkMessage *)
 * Address: 000fd8c4
 */
TLinkMgr::ATLKClose(TAppleTalkMessage *) {
    /*
         fd8c4:	e3a01000 	mov	r1, #0	; 0x0
         fd8c8:	e5902014 	ldr	r2, [r0, #20]	; fField20
         fd8cc:	e2422001 	sub	r2, r2, #1	; 0x1
         fd8d0:	e5a02014 	str	r2, [r0, #20]!	; fField20
         fd8d4:	e1a00001 	mov	r0, r1
         fd8d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLinkMgr::ATLKShutDown(TAppleTalkMessage *)
 * Address: 000fd8dc
 */
TLinkMgr::ATLKShutDown(TAppleTalkMessage *) {
    /*
         fd8dc:	e1a0c00d 	mov	ip, sp
         fd8e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fd8e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd8e8:	e1a04000 	mov	r4, r0
         fd8ec:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         fd8f0:	e5901038 	ldr	r1, [r0, #56]	; fField56
         fd8f4:	e1a0000d 	mov	r0, sp
         fd8f8:	eb6b9639 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         fd8fc:	e1a0000d 	mov	r0, sp
         fd900:	eb6ba6bc 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         fd904:	e3300000 	teq	r0, #0	; 0x0
         fd908:	0a000004 	beq	fd920 <TLinkMgr::ATLKShutDown(TAppleTalkMessage *)+0x44>
         fd90c:	e5d0101d 	ldrb	r1, [r0, #29]	; fField29
         fd910:	e590001e 	ldr	r0, [r0, #30]	; fField30
         fd914:	e1a00820 	mov	r0, r0, lsr #16
         fd918:	e1810800 	orr	r0, r1, r0, lsl #16
         fd91c:	eb6b792c 	bl	1bdbdd4 <$SetNetworkPersistentInfo(unsigned long)>
         fd920:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         fd924:	e1a0000d 	mov	r0, sp
         fd928:	e5941038 	ldr	r1, [r4, #56]	; fField56
         fd92c:	eb6b962c 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         fd930:	e1a0000d 	mov	r0, sp
         fd934:	eb6ba6af 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         fd938:	e1a05000 	mov	r5, r0
         fd93c:	e1a0000d 	mov	r0, sp
         fd940:	eb6bb30c 	bl	1bea578 <CArrayIterator::$More(void)>
         fd944:	e3300000 	teq	r0, #0	; 0x0
         fd948:	0a00000b 	beq	fd97c <TLinkMgr::ATLKShutDown(TAppleTalkMessage *)+0xa0>
         fd94c:	e1b00005 	movs	r0, r5
         fd950:	0a000002 	beq	fd960 <TLinkMgr::ATLKShutDown(TAppleTalkMessage *)+0x84>
         fd954:	e3a01001 	mov	r1, #1	; 0x1
         fd958:	e1a0e00f 	mov	lr, pc
         fd95c:	e590f000 	ldr	pc, [r0]
         fd960:	e1a0000d 	mov	r0, sp
         fd964:	eb6bb70d 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         fd968:	e1a05000 	mov	r5, r0
         fd96c:	e1a0000d 	mov	r0, sp
         fd970:	eb6bb300 	bl	1bea578 <CArrayIterator::$More(void)>
         fd974:	e3300000 	teq	r0, #0	; 0x0
         fd978:	1afffff3 	bne	fd94c <TLinkMgr::ATLKShutDown(TAppleTalkMessage *)+0x70>
         fd97c:	e1a0000d 	mov	r0, sp
         fd980:	e3a01000 	mov	r1, #0	; 0x0
         fd984:	eb6b9a37 	bl	1be4268 <CArrayIterator::$__dt(void)>
         fd988:	e28dd01c 	add	sp, sp, #28	; 0x1c
         fd98c:	e5940038 	ldr	r0, [r4, #56]	; fField56
         fd990:	e3300000 	teq	r0, #0	; 0x0
         fd994:	13a01001 	movne	r1, #1	; 0x1
         fd998:	1b6b9a2f 	blne	1be425c <CSortedList::$__dt(void)>
         fd99c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         fd9a0:	e1a0000d 	mov	r0, sp
         fd9a4:	e594103c 	ldr	r1, [r4, #60]	; fField60
         fd9a8:	eb6b960d 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         fd9ac:	e1a0000d 	mov	r0, sp
         fd9b0:	eb6ba690 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         fd9b4:	e1a05000 	mov	r5, r0
         fd9b8:	e1a0000d 	mov	r0, sp
         fd9bc:	eb6bb2ed 	bl	1bea578 <CArrayIterator::$More(void)>
         fd9c0:	e3300000 	teq	r0, #0	; 0x0
         fd9c4:	0a000009 	beq	fd9f0 <TLinkMgr::ATLKShutDown(TAppleTalkMessage *)+0x114>
         fd9c8:	e1b00005 	movs	r0, r5
         fd9cc:	13a01001 	movne	r1, #1	; 0x1
         fd9d0:	1b65d7f8 	blne	1a739b8 <TProtocolHandler::$__dt(void)>
         fd9d4:	e1a0000d 	mov	r0, sp
         fd9d8:	eb6bb6f0 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         fd9dc:	e1a05000 	mov	r5, r0
         fd9e0:	e1a0000d 	mov	r0, sp
         fd9e4:	eb6bb2e3 	bl	1bea578 <CArrayIterator::$More(void)>
         fd9e8:	e3300000 	teq	r0, #0	; 0x0
         fd9ec:	1afffff5 	bne	fd9c8 <TLinkMgr::ATLKShutDown(TAppleTalkMessage *)+0xec>
         fd9f0:	e1a0000d 	mov	r0, sp
         fd9f4:	e3a01000 	mov	r1, #0	; 0x0
         fd9f8:	eb6b9a1a 	bl	1be4268 <CArrayIterator::$__dt(void)>
         fd9fc:	e28dd01c 	add	sp, sp, #28	; 0x1c
         fda00:	e5b4003c 	ldr	r0, [r4, #60]!	; fField60
         fda04:	e3300000 	teq	r0, #0	; 0x0
         fda08:	13a01001 	movne	r1, #1	; 0x1
         fda0c:	1b6b9a12 	blne	1be425c <CSortedList::$__dt(void)>
         fda10:	e3a04000 	mov	r4, #0	; 0x0
         fda14:	e1a0000d 	mov	r0, sp
         fda18:	e3a01000 	mov	r1, #0	; 0x0
         fda1c:	eb6b9a11 	bl	1be4268 <CArrayIterator::$__dt(void)>
         fda20:	e1a00004 	mov	r0, r4
         fda24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLinkMgr::ATLKSocketClosed(TAppleTalkMessage *)
 * Address: 000fda28
 */
TLinkMgr::ATLKSocketClosed(TAppleTalkMessage *) {
    /*
         fda28:	e3a00000 	mov	r0, #0	; 0x0
         fda2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLinkMgr::AttachLink(TAppleTalkMessage *)
 * Address: 000fda30
 */
TLinkMgr::AttachLink(TAppleTalkMessage *) {
    /*
         fda30:	e1a0c00d 	mov	ip, sp
         fda34:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         fda38:	e24cb004 	sub	fp, ip, #4	; 0x4
         fda3c:	e1a05000 	mov	r5, r0
         fda40:	e1a04001 	mov	r4, r1
         fda44:	e24dd004 	sub	sp, sp, #4	; 0x4
         fda48:	e3a07000 	mov	r7, #0	; 0x0
         fda4c:	e1a06001 	mov	r6, r1
         fda50:	e1a08001 	mov	r8, r1
         fda54:	e5910018 	ldr	r0, [r1, #24]
         fda58:	e5900020 	ldr	r0, [r0, #32]
         fda5c:	e5850034 	str	r0, [r5, #52]	; fField52
         fda60:	e2851028 	add	r1, r5, #40	; 0x28
         fda64:	e1a0200d 	mov	r2, sp
         fda68:	e5950038 	ldr	r0, [r5, #56]	; fField56
         fda6c:	eb6bbf09 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         fda70:	e3300000 	teq	r0, #0	; 0x0
         fda74:	13a070a8 	movne	r7, #168	; 0xa8
         fda78:	12477b07 	subne	r7, r7, #7168	; 0x1c00
         fda7c:	1a00001a 	bne	fdaec <TLinkMgr::AttachLink(TAppleTalkMessage *)+0xbc>
         fda80:	e5b50038 	ldr	r0, [r5, #56]!	; fField56
         fda84:	e59d1000 	ldr	r1, [sp]
         fda88:	e5962018 	ldr	r2, [r6, #24]
         fda8c:	eb6bae96 	bl	1be94ec <CList::$InsertAt(long, void *)>
         fda90:	e3a0001c 	mov	r0, #28	; 0x1c
         fda94:	e52d0004 	str	r0, [sp, -#4]!
         fda98:	e5945004 	ldr	r5, [r4, #4]
         fda9c:	e59f0050 	ldr	r0, [pc, #50]	; fdaf4 <TLinkMgr::AttachLink(TAppleTalkMessage *)+0xc4>
         fdaa0:	e5840004 	str	r0, [r4, #4]
         fdaa4:	eb6b57ca 	bl	1bd39d4 <$GetGlobals>
         fdaa8:	e1a03004 	mov	r3, r4
         fdaac:	e92d0008 	stmdb	sp!, {r3}
         fdab0:	e28d3004 	add	r3, sp, #4	; 0x4
         fdab4:	e3a02000 	mov	r2, #0	; 0x0
         fdab8:	e3a01000 	mov	r1, #0	; 0x0
         fdabc:	e590c000 	ldr	ip, [r0]
         fdac0:	e1a0e00f 	mov	lr, pc
         fdac4:	e28cf050 	add	pc, ip, #80	; 0x50
         fdac8:	e28dd004 	add	sp, sp, #4	; 0x4
         fdacc:	e5a45004 	str	r5, [r4, #4]!
         fdad0:	eb6b57bf 	bl	1bd39d4 <$GetGlobals>
         fdad4:	e3a01018 	mov	r1, #24	; 0x18
         fdad8:	eb6ba210 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
         fdadc:	e5b60018 	ldr	r0, [r6, #24]!
         fdae0:	e5900020 	ldr	r0, [r0, #32]
         fdae4:	e5a80014 	str	r0, [r8, #20]!	; fField20
         fdae8:	e28dd004 	add	sp, sp, #4	; 0x4
         fdaec:	e1a00007 	mov	r0, r7
         fdaf0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         fdaf4:	2a2a2a2a 	bcs	b883a4 <ROM$$Size+0x468758>
    */
}

/**
 * Symbol: TLinkMgr::DetachLink(TAppleTalkMessage *)
 * Address: 000fdb18
 */
TLinkMgr::DetachLink(TAppleTalkMessage *) {
    /*
         fdb18:	e1a0c00d 	mov	ip, sp
         fdb1c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         fdb20:	e24cb004 	sub	fp, ip, #4	; 0x4
         fdb24:	e1a04000 	mov	r4, r0
         fdb28:	e24dd004 	sub	sp, sp, #4	; 0x4
         fdb2c:	e3a05000 	mov	r5, #0	; 0x0
         fdb30:	e1a07001 	mov	r7, r1
         fdb34:	e5b10014 	ldr	r0, [r1, #20]!	; fField20
         fdb38:	e5840034 	str	r0, [r4, #52]	; fField52
         fdb3c:	e2841028 	add	r1, r4, #40	; 0x28
         fdb40:	e1a0200d 	mov	r2, sp
         fdb44:	e5940038 	ldr	r0, [r4, #56]	; fField56
         fdb48:	eb6bbed2 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         fdb4c:	e1b06000 	movs	r6, r0
         fdb50:	0a00001a 	beq	fdbc0 <TLinkMgr::DetachLink(TAppleTalkMessage *)+0xa8>
         fdb54:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         fdb58:	e28d5004 	add	r5, sp, #4	; 0x4
         fdb5c:	e3a00018 	mov	r0, #24	; 0x18
         fdb60:	e58d0000 	str	r0, [sp]
         fdb64:	e59f005c 	ldr	r0, [pc, #5c]	; fdbc8 <TLinkMgr::DetachLink(TAppleTalkMessage *)+0xb0>
         fdb68:	e58d0004 	str	r0, [sp, #4]
         fdb6c:	e59f0058 	ldr	r0, [pc, #58]	; fdbcc <TLinkMgr::DetachLink(TAppleTalkMessage *)+0xb4>
         fdb70:	e58d0008 	str	r0, [sp, #8]
         fdb74:	e3a00004 	mov	r0, #4	; 0x4
         fdb78:	e58d0014 	str	r0, [sp, #20]	; fField20
         fdb7c:	e5b70014 	ldr	r0, [r7, #20]!	; fField20
         fdb80:	e58d0018 	str	r0, [sp, #24]
         fdb84:	eb6b5792 	bl	1bd39d4 <$GetGlobals>
         fdb88:	e1a03005 	mov	r3, r5
         fdb8c:	e92d0008 	stmdb	sp!, {r3}
         fdb90:	e28d3004 	add	r3, sp, #4	; 0x4
         fdb94:	e3a02000 	mov	r2, #0	; 0x0
         fdb98:	e3a01000 	mov	r1, #0	; 0x0
         fdb9c:	e590c000 	ldr	ip, [r0]
         fdba0:	e1a0e00f 	mov	lr, pc
         fdba4:	e28cf050 	add	pc, ip, #80	; 0x50
         fdba8:	e28dd004 	add	sp, sp, #4	; 0x4
         fdbac:	e1a05000 	mov	r5, r0
         fdbb0:	e1a01006 	mov	r1, r6
         fdbb4:	e5b40038 	ldr	r0, [r4, #56]!	; fField56
         fdbb8:	eb6bba9a 	bl	1bec628 <CList::$Remove(void *)>
         fdbbc:	e28dd01c 	add	sp, sp, #28	; 0x1c
         fdbc0:	e1a00005 	mov	r0, r5
         fdbc4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         fdbc8:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         fdbcc:	2a2a2a2a 	bcs	b8847c <ROM$$Size+0x468830>
    */
}

/**
 * Symbol: TLinkMgr::__ct(void)
 * Address: 000fe2f4
 */
TLinkMgr::TLinkMgr(void) {
    /*
         fe2f4:	e1a0c00d 	mov	ip, sp
         fe2f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fe2fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         fe300:	e1b04000 	movs	r4, r0
         fe304:	1a000003 	bne	fe318 <TLinkMgr::__ct(void)+0x24>
         fe308:	e3a00040 	mov	r0, #64	; 0x40
         fe30c:	eb6b4109 	bl	1bce738 <$__nw(unsigned int)>
         fe310:	e1b04000 	movs	r4, r0
         fe314:	0a000007 	beq	fe338 <TLinkMgr::__ct(void)+0x44>
         fe318:	e1a00004 	mov	r0, r4
         fe31c:	eb65cd63 	bl	1a718b0 <TStackObject::$__ct(void)>
         fe320:	e2840018 	add	r0, r4, #24	; 0x18
         fe324:	eb65cd71 	bl	1a718f0 <TProtoComparer::$__ct(void)>
         fe328:	e2840028 	add	r0, r4, #40	; 0x28
         fe32c:	eb65cd64 	bl	1a718c4 <TLinkComparer::$__ct(void)>
         fe330:	e59f0008 	ldr	r0, [pc, #8]	; fe340 <TLinkMgr::__ct(void)+0x4c>
         fe334:	e5840000 	str	r0, [r4]
         fe338:	e1a00004 	mov	r0, r4
         fe33c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         fe340:	00020158 	andeq	r0, r2, r8, asr r1
    */
}

/**
 * Symbol: TLinkMgr::__dt(void)
 * Address: 000fe344
 */
TLinkMgr::~TLinkMgr(void) {
    /*
         fe344:	e1a0c00d 	mov	ip, sp
         fe348:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fe34c:	e24cb004 	sub	fp, ip, #4	; 0x4
         fe350:	e1a04000 	mov	r4, r0
         fe354:	e1a05001 	mov	r5, r1
         fe358:	e59f0020 	ldr	r0, [pc, #20]	; fe380 <TLinkMgr::__dt(void)+0x3c>	; fField20
         fe35c:	e5840000 	str	r0, [r4]
         fe360:	e1a00004 	mov	r0, r4
         fe364:	e3a01000 	mov	r1, #0	; 0x0
         fe368:	eb65d588 	bl	1a73990 <TStackObject::$__dt(void)>
         fe36c:	e3150001 	tst	r5, #1	; 0x1
         fe370:	11a00004 	movne	r0, r4
         fe374:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         fe378:	1a6b3cd8 	bne	1bcd6e0 <$__dl(void *)>
         fe37c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         fe380:	00020158 	andeq	r0, r2, r8, asr r1
    */
}

