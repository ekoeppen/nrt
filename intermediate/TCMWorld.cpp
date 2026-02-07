#include "include/TCMWorld.h"

/**
 * Symbol: TCMWorld::__ct(void)
 * Address: 0006c358
 */
TCMWorld::TCMWorld(void) {
    /*
         6c358:	e1a0c00d 	mov	ip, sp
         6c35c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6c360:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c364:	e1b04000 	movs	r4, r0
         6c368:	1a000003 	bne	6c37c <TCMWorld::__ct(void)+0x24>
         6c36c:	e3a000e4 	mov	r0, #228	; 0xe4
         6c370:	eb6d88f0 	bl	1bce738 <$__nw(unsigned int)>
         6c374:	e1b04000 	movs	r4, r0
         6c378:	0a000017 	beq	6c3dc <TCMWorld::__ct(void)+0x84>
         6c37c:	e1a00004 	mov	r0, r4
         6c380:	eb6ddfaf 	bl	1be4244 <TAppWorld::$__ct(void)>
         6c384:	e2840070 	add	r0, r4, #112	; 0x70
         6c388:	eb6663c6 	bl	1a052a8 <TCMEventHandler::$__ct(void)>
         6c38c:	e2840090 	add	r0, r4, #144	; 0x90
         6c390:	eb6ddfa5 	bl	1be422c <CList::$__ct(void)>
         6c394:	e28400a8 	add	r0, r4, #168	; 0xa8
         6c398:	eb6ddfa3 	bl	1be422c <CList::$__ct(void)>
         6c39c:	e59f0040 	ldr	r0, [pc, #40]	; 6c3e4 <TCMWorld::__ct(void)+0x8c>
         6c3a0:	e5840000 	str	r0, [r4]
         6c3a4:	e24dd008 	sub	sp, sp, #8	; 0x8
         6c3a8:	e3a00000 	mov	r0, #0	; 0x0
         6c3ac:	e58400d8 	str	r0, [r4, #216]	; fField216
         6c3b0:	e58d0004 	str	r0, [sp, #4]	; fField4
         6c3b4:	e28410c0 	add	r1, r4, #192	; 0xc0
         6c3b8:	e58d0000 	str	r0, [sp]
         6c3bc:	e89d5000 	ldmia	sp, {ip, lr}
         6c3c0:	e8815000 	stmia	r1, {ip, lr}
         6c3c4:	e58400cc 	str	r0, [r4, #204]
         6c3c8:	e58400d0 	str	r0, [r4, #208]
         6c3cc:	e58400d4 	str	r0, [r4, #212]
         6c3d0:	e58400dc 	str	r0, [r4, #220]	; fField220
         6c3d4:	e58400e0 	str	r0, [r4, #224]
         6c3d8:	e28dd008 	add	sp, sp, #8	; 0x8
         6c3dc:	e1a00004 	mov	r0, r4
         6c3e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6c3e4:	0001ffd8 	ldreqd	pc, [r1], -r8
    */
}

/**
 * Symbol: TCMWorld::GetSizeOf(void)
 * Address: 0006c3e8
 */
TCMWorld::GetSizeOf(void) {
    /*
         6c3e8:	e3a000e4 	mov	r0, #228	; 0xe4
         6c3ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCMWorld::MainConstructor(void)
 * Address: 0006c3f0
 */
TCMWorld::MainConstructor(void) {
    /*
         6c3f0:	e1a0c00d 	mov	ip, sp
         6c3f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6c3f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c3fc:	e1a04000 	mov	r4, r0
         6c400:	eb6d04bd 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
         6c404:	e3300000 	teq	r0, #0	; 0x0
         6c408:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         6c40c:	e2840070 	add	r0, r4, #112	; 0x70
         6c410:	e59f2058 	ldr	r2, [pc, #58]	; 6c470 <TCMWorld::MainConstructor(void)+0x80>
         6c414:	e59f1058 	ldr	r1, [pc, #58]	; 6c474 <TCMWorld::MainConstructor(void)+0x84>
         6c418:	eb667420 	bl	1a094a0 <TCMEventHandler::$Init(unsigned long, unsigned long)>
         6c41c:	e3a00018 	mov	r0, #24	; 0x18
         6c420:	eb6d88c4 	bl	1bce738 <$__nw(unsigned int)>
         6c424:	e1b04000 	movs	r4, r0
         6c428:	0a000003 	beq	6c43c <TCMWorld::MainConstructor(void)+0x4c>
         6c42c:	e1a00004 	mov	r0, r4
         6c430:	eb6ddf7b 	bl	1be4224 <TSystemEventHandler::$__ct(void)>
         6c434:	e59f003c 	ldr	r0, [pc, #3c]	; 6c478 <TCMWorld::MainConstructor(void)+0x88>
         6c438:	e5840000 	str	r0, [r4]
         6c43c:	e1a00004 	mov	r0, r4
         6c440:	e3a02000 	mov	r2, #0	; 0x0
         6c444:	e59f1030 	ldr	r1, [pc, #30]	; 6c47c <TCMWorld::MainConstructor(void)+0x8c>
         6c448:	eb6df41c 	bl	1be94c0 <TSystemEventHandler::$Init(unsigned long, unsigned long)>
         6c44c:	e1a00004 	mov	r0, r4
         6c450:	e3a02000 	mov	r2, #0	; 0x0
         6c454:	e59f1024 	ldr	r1, [pc, #24]	; 6c480 <TCMWorld::MainConstructor(void)+0x90>	; fField24
         6c458:	eb6df418 	bl	1be94c0 <TSystemEventHandler::$Init(unsigned long, unsigned long)>
         6c45c:	e1a00004 	mov	r0, r4
         6c460:	e3a02000 	mov	r2, #0	; 0x0
         6c464:	e59f1018 	ldr	r1, [pc, #18]	; 6c484 <TCMWorld::MainConstructor(void)+0x94>
         6c468:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6c46c:	ea6df413 	b	1be94c0 <TSystemEventHandler::$Init(unsigned long, unsigned long)>
         6c470:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         6c474:	636f6d67 	cmnvs	pc, #6592	; 0x19c0
         6c478:	0001f0a4 	andeq	pc, r1, r4, lsr #1
         6c47c:	70776f6e 	rsbvcs	r6, r7, lr, ror #30
         6c480:	70776f66 	rsbvcs	r6, r7, r6, ror #30
         6c484:	616c6976 	cmnvs	ip, r6, ror r9
    */
}

/**
 * Symbol: TCMWorld::MainDestructor(void)
 * Address: 0006c488
 */
TCMWorld::MainDestructor(void) {
    /*
         6c488:	ea6d089d 	b	1bae704 <TAppWorld::$MainDestructor(void)>
    */
}

/**
 * Symbol: TCMWorld::SCPCheck(unsigned long)
 * Address: 0006c48c
 */
TCMWorld::SCPCheck(unsigned long) {
    /*
         6c48c:	e1a0c00d 	mov	ip, sp
         6c490:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         6c494:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c498:	e59f2034 	ldr	r2, [pc, #34]	; 6c4d4 <TCMWorld::SCPCheck(unsigned long)+0x48>
         6c49c:	e5d23000 	ldrb	r3, [r2]
         6c4a0:	e3330000 	teq	r3, #0	; 0x0
         6c4a4:	13a00000 	movne	r0, #0	; 0x0
         6c4a8:	15c20000 	strneb	r0, [r2]
         6c4ac:	13a00001 	movne	r0, #1	; 0x1
         6c4b0:	191ba800 	ldmnedb	fp, {fp, sp, pc}
         6c4b4:	e1a03001 	mov	r3, r1
         6c4b8:	e3a02000 	mov	r2, #0	; 0x0
         6c4bc:	e92d000c 	stmdb	sp!, {r2, r3}
         6c4c0:	e59f3010 	ldr	r3, [pc, #10]	; 6c4d8 <TCMWorld::SCPCheck(unsigned long)+0x4c>
         6c4c4:	e3a02002 	mov	r2, #2	; 0x2
         6c4c8:	e59f100c 	ldr	r1, [pc, #c]	; 6c4dc <TCMWorld::SCPCheck(unsigned long)+0x50>
         6c4cc:	eb6673f5 	bl	1a094a8 <TCMWorld::$SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long)>
         6c4d0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         6c4d4:	0c100b64 	ldceq	11, cr0, [r0], -#400
         6c4d8:	2a2a2a2a 	bcs	af6d88 <ROM$$Size+0x3d713c>
         6c4dc:	001c1f38 	andeqs	r1, ip, r8, lsr pc
    */
}

/**
 * Symbol: TCMWorld::SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long)
 * Address: 0006c4e0
 */
TCMWorld::SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long) {
    /*
         6c4e0:	e1a0c00d 	mov	ip, sp
         6c4e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         6c4e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c4ec:	e1a04000 	mov	r4, r0
         6c4f0:	e1a07001 	mov	r7, r1
         6c4f4:	e1a06002 	mov	r6, r2
         6c4f8:	e1a05003 	mov	r5, r3
         6c4fc:	e99b0600 	ldmib	fp, {r9, sl}
         6c500:	e59000d8 	ldr	r0, [r0, #216]	; fField216
         6c504:	e3300000 	teq	r0, #0	; 0x0
         6c508:	13a00f99 	movne	r0, #612	; 0x264
         6c50c:	12400b1a 	subne	r0, r0, #26624	; 0x6800
         6c510:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         6c514:	e24dd09c 	sub	sp, sp, #156	; 0x9c
         6c518:	e1a0000d 	mov	r0, sp
         6c51c:	eb66635a 	bl	1a0528c <TSCPLoader::$__ct(void)>
         6c520:	e1a0000d 	mov	r0, sp
         6c524:	e3a03e77 	mov	r3, #1904	; 0x770
         6c528:	e2833a01 	add	r3, r3, #4096	; 0x1000
         6c52c:	e3a02001 	mov	r2, #1	; 0x1
         6c530:	e59f1028 	ldr	r1, [pc, #28]	; 6c560 <TCMWorld::SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long)+0x80>
         6c534:	e59dc000 	ldr	ip, [sp]
         6c538:	e1a0e00f 	mov	lr, pc
         6c53c:	e28cf044 	add	pc, ip, #68	; 0x44
         6c540:	e1b08000 	movs	r8, r0
         6c544:	0a000006 	beq	6c564 <TCMWorld::SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long)+0x84>
         6c548:	e1a0000d 	mov	r0, sp
         6c54c:	e3a01000 	mov	r1, #0	; 0x0
         6c550:	e1a0e00f 	mov	lr, pc
         6c554:	e59df000 	ldr	pc, [sp]
         6c558:	e28dd09c 	add	sp, sp, #156	; 0x9c
         6c55c:	ea00001f 	b	6c5e0 <TCMWorld::SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long)+0x100>
         6c560:	7363706c 	cmnvc	r3, #108	; 0x6c
         6c564:	e24dd008 	sub	sp, sp, #8	; 0x8
         6c568:	e3a00000 	mov	r0, #0	; 0x0
         6c56c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         6c570:	e58d0000 	str	r0, [sp]
         6c574:	e1a0000d 	mov	r0, sp
         6c578:	eb6d31b3 	bl	1bb8c4c <$GetSCPLoaderPort(TUPort *)>
         6c57c:	e1b08000 	movs	r8, r0
         6c580:	1a00000e 	bne	6c5c0 <TCMWorld::SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long)+0xe0>
         6c584:	e3a00000 	mov	r0, #0	; 0x0
         6c588:	eb66634f 	bl	1a052cc <TCMSCPAsyncMessage::$__ct(void)>
         6c58c:	e58400d8 	str	r0, [r4, #216]	; fField216
         6c590:	e3300000 	teq	r0, #0	; 0x0
         6c594:	03a080e9 	moveq	r8, #233	; 0xe9
         6c598:	02488b0a 	subeq	r8, r8, #10240	; 0x2800
         6c59c:	0a000007 	beq	6c5c0 <TCMWorld::SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long)+0xe0>
         6c5a0:	eb6d9d0b 	bl	1bd39d4 <$GetGlobals>
         6c5a4:	eb6defa4 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         6c5a8:	e2842070 	add	r2, r4, #112	; 0x70
         6c5ac:	e5901000 	ldr	r1, [r0]
         6c5b0:	e59400d8 	ldr	r0, [r4, #216]	; fField216
         6c5b4:	eb666763 	bl	1a06348 <TCMSCPAsyncMessage::$Init(unsigned long, TAEventHandler *)>
         6c5b8:	e1b08000 	movs	r8, r0
         6c5bc:	0a000009 	beq	6c5e8 <TCMWorld::SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long)+0x108>
         6c5c0:	e1a0000d 	mov	r0, sp
         6c5c4:	e3a01000 	mov	r1, #0	; 0x0
         6c5c8:	eb6d8855 	bl	1bce724 <TUObject::$__dt(void)>
         6c5cc:	e28d0008 	add	r0, sp, #8	; 0x8
         6c5d0:	e3a01000 	mov	r1, #0	; 0x0
         6c5d4:	e1a0e00f 	mov	lr, pc
         6c5d8:	e59df008 	ldr	pc, [sp, #8]
         6c5dc:	e28dd0a4 	add	sp, sp, #164	; 0xa4
         6c5e0:	e1a00008 	mov	r0, r8
         6c5e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         6c5e8:	e3390000 	teq	r9, #0	; 0x0
         6c5ec:	11a01009 	movne	r1, r9
         6c5f0:	159400d8 	ldrne	r0, [r4, #216]	; fField216
         6c5f4:	1b666b6c 	blne	1a073ac <TCMSCPAsyncMessage::$SetToken(TUMsgToken *)>
         6c5f8:	e59f1060 	ldr	r1, [pc, #60]	; 6c660 <TCMWorld::SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long)+0x180>
         6c5fc:	e59400d8 	ldr	r0, [r4, #216]	; fField216
         6c600:	e5a01010 	str	r1, [r0, #16]!
         6c604:	e51f10ac 	ldr	r1, [pc, #ffffff54]	; 6c560 <TCMWorld::SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long)+0x80>
         6c608:	e59400d8 	ldr	r0, [r4, #216]	; fField216
         6c60c:	e5a01014 	str	r1, [r0, #20]!
         6c610:	e3a00006 	mov	r0, #6	; 0x6
         6c614:	e59410d8 	ldr	r1, [r4, #216]	; fField216
         6c618:	e5a10018 	str	r0, [r1, #24]!	; fField24
         6c61c:	e59400d8 	ldr	r0, [r4, #216]	; fField216
         6c620:	e5a06020 	str	r6, [r0, #32]!
         6c624:	e59400d8 	ldr	r0, [r4, #216]	; fField216
         6c628:	e5a07024 	str	r7, [r0, #36]!
         6c62c:	e59400d8 	ldr	r0, [r4, #216]	; fField216
         6c630:	e5a05028 	str	r5, [r0, #40]!
         6c634:	e59400d8 	ldr	r0, [r4, #216]	; fField216
         6c638:	e5a0a02c 	str	sl, [r0, #44]!
         6c63c:	e1a0100d 	mov	r1, sp
         6c640:	e5b400d8 	ldr	r0, [r4, #216]!	; fField216
         6c644:	eb666b53 	bl	1a07398 <TCMSCPAsyncMessage::$SendRPC(TUPort *)>
         6c648:	e1a08000 	mov	r8, r0
         6c64c:	e1a0000d 	mov	r0, sp
         6c650:	e3a01000 	mov	r1, #0	; 0x0
         6c654:	eb6d8832 	bl	1bce724 <TUObject::$__dt(void)>
         6c658:	e28dd008 	add	sp, sp, #8	; 0x8
         6c65c:	eaffffb9 	b	6c548 <TCMWorld::SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long)+0x68>
         6c660:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
    */
}

/**
 * Symbol: TCMWorld::MatchPendingServiceMessage(TUMsgToken *)
 * Address: 0006c664
 */
TCMWorld::MatchPendingServiceMessage(TUMsgToken *) {
    /*
         6c664:	e1a0c00d 	mov	ip, sp
         6c668:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6c66c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c670:	e1a04001 	mov	r4, r1
         6c674:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         6c678:	e2801090 	add	r1, r0, #144	; 0x90
         6c67c:	e1a0000d 	mov	r0, sp
         6c680:	eb6ddad7 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         6c684:	e1a0000d 	mov	r0, sp
         6c688:	eb6deb5a 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         6c68c:	e1a05000 	mov	r5, r0
         6c690:	e1a0000d 	mov	r0, sp
         6c694:	eb6df7b7 	bl	1bea578 <CArrayIterator::$More(void)>
         6c698:	e3300000 	teq	r0, #0	; 0x0
         6c69c:	0a00000f 	beq	6c6e0 <TCMWorld::MatchPendingServiceMessage(TUMsgToken *)+0x7c>
         6c6a0:	e1a01004 	mov	r1, r4
         6c6a4:	e1a00005 	mov	r0, r5
         6c6a8:	eb66672b 	bl	1a0635c <TAsyncServiceMessage::$Match(TUMsgToken *)>
         6c6ac:	e3300000 	teq	r0, #0	; 0x0
         6c6b0:	e1a0000d 	mov	r0, sp
         6c6b4:	0a000003 	beq	6c6c8 <TCMWorld::MatchPendingServiceMessage(TUMsgToken *)+0x64>
         6c6b8:	e3a01000 	mov	r1, #0	; 0x0
         6c6bc:	eb6ddee9 	bl	1be4268 <CArrayIterator::$__dt(void)>
         6c6c0:	e1a00005 	mov	r0, r5
         6c6c4:	ea00000a 	b	6c6f4 <TCMWorld::MatchPendingServiceMessage(TUMsgToken *)+0x90>
         6c6c8:	eb6dfbb4 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         6c6cc:	e1a05000 	mov	r5, r0
         6c6d0:	e1a0000d 	mov	r0, sp
         6c6d4:	eb6df7a7 	bl	1bea578 <CArrayIterator::$More(void)>
         6c6d8:	e3300000 	teq	r0, #0	; 0x0
         6c6dc:	1affffef 	bne	6c6a0 <TCMWorld::MatchPendingServiceMessage(TUMsgToken *)+0x3c>
         6c6e0:	e3a04000 	mov	r4, #0	; 0x0
         6c6e4:	e1a0000d 	mov	r0, sp
         6c6e8:	e3a01000 	mov	r1, #0	; 0x0
         6c6ec:	eb6ddedd 	bl	1be4268 <CArrayIterator::$__dt(void)>
         6c6f0:	e1a00004 	mov	r0, r4
         6c6f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCMWorld::MatchPendingStartInfo(TCMService *)
 * Address: 0006c834
 */
TCMWorld::MatchPendingStartInfo(TCMService *) {
    /*
         6c834:	e1a0c00d 	mov	ip, sp
         6c838:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6c83c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c840:	e1a04001 	mov	r4, r1
         6c844:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         6c848:	e28010a8 	add	r1, r0, #168	; 0xa8
         6c84c:	e1a0000d 	mov	r0, sp
         6c850:	eb6dda63 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         6c854:	e1a0000d 	mov	r0, sp
         6c858:	eb6deae6 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         6c85c:	e1a05000 	mov	r5, r0
         6c860:	e1a0000d 	mov	r0, sp
         6c864:	eb6df743 	bl	1bea578 <CArrayIterator::$More(void)>
         6c868:	e3300000 	teq	r0, #0	; 0x0
         6c86c:	0a00000d 	beq	6c8a8 <TCMWorld::MatchPendingStartInfo(TCMService *)+0x74>
         6c870:	e5950018 	ldr	r0, [r5, #24]	; fField24
         6c874:	e1300004 	teq	r0, r4
         6c878:	e1a0000d 	mov	r0, sp
         6c87c:	1a000003 	bne	6c890 <TCMWorld::MatchPendingStartInfo(TCMService *)+0x5c>
         6c880:	e3a01000 	mov	r1, #0	; 0x0
         6c884:	eb6dde77 	bl	1be4268 <CArrayIterator::$__dt(void)>
         6c888:	e1a00005 	mov	r0, r5
         6c88c:	ea00000a 	b	6c8bc <TCMWorld::MatchPendingStartInfo(TCMService *)+0x88>
         6c890:	eb6dfb42 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         6c894:	e1a05000 	mov	r5, r0
         6c898:	e1a0000d 	mov	r0, sp
         6c89c:	eb6df735 	bl	1bea578 <CArrayIterator::$More(void)>
         6c8a0:	e3300000 	teq	r0, #0	; 0x0
         6c8a4:	1afffff1 	bne	6c870 <TCMWorld::MatchPendingStartInfo(TCMService *)+0x3c>
         6c8a8:	e3a04000 	mov	r4, #0	; 0x0
         6c8ac:	e1a0000d 	mov	r0, sp
         6c8b0:	e3a01000 	mov	r1, #0	; 0x0
         6c8b4:	eb6dde6b 	bl	1be4268 <CArrayIterator::$__dt(void)>
         6c8b8:	e1a00004 	mov	r0, r4
         6c8bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCMWorld::SetDevice(TConnectedDevice *)
 * Address: 0006c8c0
 */
TCMWorld::SetDevice(TConnectedDevice *) {
    /*
         6c8c0:	e28000c0 	add	r0, r0, #192	; 0xc0
         6c8c4:	e1a02001 	mov	r2, r1
         6c8c8:	e1a01000 	mov	r1, r0
         6c8cc:	e8b21008 	ldmia	r2!, {r3, ip}
         6c8d0:	e8a11008 	stmia	r1!, {r3, ip}
         6c8d4:	e8b21008 	ldmia	r2!, {r3, ip}
         6c8d8:	e8a11008 	stmia	r1!, {r3, ip}
         6c8dc:	e8921008 	ldmia	r2, {r3, ip}
         6c8e0:	e8811008 	stmia	r1, {r3, ip}
         6c8e4:	ea6d9c3b 	b	1bd39d8 <$GetGlobalTime>
    */
}

/**
 * Symbol: TCMWorld::SetLastPackage(unsigned long, unsigned long)
 * Address: 0006c8e8
 */
TCMWorld::SetLastPackage(unsigned long, unsigned long) {
    /*
         6c8e8:	e5a020dc 	str	r2, [r0, #220]!	; fField220
         6c8ec:	e5801004 	str	r1, [r0, #4]	; fField4
         6c8f0:	e1a0f00e 	mov	pc, lr
    */
}

