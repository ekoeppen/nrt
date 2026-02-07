#include "include/TPseudoSyncState.h"

/**
 * Symbol: TPseudoSyncState::__ct(void)
 * Address: 001953a0
 */
TPseudoSyncState::TPseudoSyncState(void) {
    /*
        1953a0:	e1a0c00d 	mov	ip, sp
        1953a4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1953a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1953ac:	e3300000 	teq	r0, #0	; 0x0
        1953b0:	1a000003 	bne	1953c4 <TPseudoSyncState::__ct(void)+0x24>
        1953b4:	e3a00008 	mov	r0, #8	; 0x8
        1953b8:	eb68e4de 	bl	1bce738 <$__nw(unsigned int)>
        1953bc:	e3300000 	teq	r0, #0	; 0x0
        1953c0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1953c4:	e3a01000 	mov	r1, #0	; 0x0
        1953c8:	e5c01004 	strb	r1, [r0, #4]	; fField4
        1953cc:	e5801000 	str	r1, [r0]
        1953d0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPseudoSyncState::__dt(void)
 * Address: 001953d4
 */
TPseudoSyncState::~TPseudoSyncState(void) {
    /*
        1953d4:	e1a0c00d 	mov	ip, sp
        1953d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1953dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1953e0:	e1a04000 	mov	r4, r0
        1953e4:	e1a05001 	mov	r5, r1
        1953e8:	e3a01000 	mov	r1, #0	; 0x0
        1953ec:	eb68e4cc 	bl	1bce724 <TUObject::$__dt(void)>
        1953f0:	e3150001 	tst	r5, #1	; 0x1
        1953f4:	11a00004 	movne	r0, r4
        1953f8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1953fc:	1a68e0b7 	bne	1bcd6e0 <$__dl(void *)>
        195400:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPseudoSyncState::Init(void)
 * Address: 00195404
 */
TPseudoSyncState::Init(void) {
    /*
        195404:	ea6901ad 	b	1bd5ac0 <TUPort::$Init(void)>
    */
}

/**
 * Symbol: TPseudoSyncState::Block(unsigned long)
 * Address: 00195408
 */
TPseudoSyncState::Block(unsigned long) {
    /*
        195408:	e1a0c00d 	mov	ip, sp
        19540c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        195410:	e24cb004 	sub	fp, ip, #4	; 0x4
        195414:	e1a05000 	mov	r5, r0
        195418:	e1a04001 	mov	r4, r1
        19541c:	eb68f96c 	bl	1bd39d4 <$GetGlobals>
        195420:	e3a01000 	mov	r1, #0	; 0x0
        195424:	eb6860a1 	bl	1bad6b0 <TForkWorld::$Fork(TForkWorld *)>
        195428:	e1b06000 	movs	r6, r0
        19542c:	1a000018 	bne	195494 <TPseudoSyncState::Block(unsigned long)+0x8c>
        195430:	e24dd010 	sub	sp, sp, #16	; 0x10
        195434:	e1a0000d 	mov	r0, sp
        195438:	e3a01000 	mov	r1, #0	; 0x0
        19543c:	eb686cf9 	bl	1bb0828 <TUnblockEvent::$__ct(void *)>
        195440:	eb68f963 	bl	1bd39d4 <$GetGlobals>
        195444:	eb6864c5 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
        195448:	e3a03000 	mov	r3, #0	; 0x0
        19544c:	e3a02000 	mov	r2, #0	; 0x0
        195450:	e3e01000 	mvn	r1, #0	; 0x0
        195454:	e1a00004 	mov	r0, r4
        195458:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        19545c:	e92d000c 	stmdb	sp!, {r2, r3}
        195460:	e28d2018 	add	r2, sp, #24	; 0x18
        195464:	e28d1024 	add	r1, sp, #36	; 0x24
        195468:	e1a00005 	mov	r0, r5
        19546c:	e3a0300c 	mov	r3, #12	; 0xc
        195470:	eb690df0 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
        195474:	e28dd018 	add	sp, sp, #24	; 0x18
        195478:	e1a06000 	mov	r6, r0
        19547c:	eb68f954 	bl	1bd39d4 <$GetGlobals>
        195480:	eb68585b 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
        195484:	e1a0000d 	mov	r0, sp
        195488:	e3a01000 	mov	r1, #0	; 0x0
        19548c:	eb686cf2 	bl	1bb085c <TUnblockEvent::$__dt(void)>
        195490:	e28dd010 	add	sp, sp, #16	; 0x10
        195494:	e1a00006 	mov	r0, r6
        195498:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPseudoSyncState::Unblock(void)
 * Address: 0019549c
 */
TPseudoSyncState::Unblock(void) {
    /*
        19549c:	e1a0c00d 	mov	ip, sp
        1954a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1954a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1954a8:	e1a04000 	mov	r4, r0
        1954ac:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1954b0:	e1a01000 	mov	r1, r0
        1954b4:	e1a0000d 	mov	r0, sp
        1954b8:	eb686cda 	bl	1bb0828 <TUnblockEvent::$__ct(void *)>
        1954bc:	eb68f944 	bl	1bd39d4 <$GetGlobals>
        1954c0:	eb6864a6 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
        1954c4:	e3a0c000 	mov	ip, #0	; 0x0
        1954c8:	e3a01000 	mov	r1, #0	; 0x0
        1954cc:	e3a03000 	mov	r3, #0	; 0x0
        1954d0:	e1a02001 	mov	r2, r1
        1954d4:	e3a00000 	mov	r0, #0	; 0x0
        1954d8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1954dc:	e1a0300c 	mov	r3, ip
        1954e0:	e3a0200c 	mov	r2, #12	; 0xc
        1954e4:	e92d000c 	stmdb	sp!, {r2, r3}
        1954e8:	e28d3018 	add	r3, sp, #24	; 0x18
        1954ec:	e1a00004 	mov	r0, r4
        1954f0:	e3a02000 	mov	r2, #0	; 0x0
        1954f4:	e3a01001 	mov	r1, #1	; 0x1
        1954f8:	eb691612 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        1954fc:	e28dd018 	add	sp, sp, #24	; 0x18
        195500:	eb68f933 	bl	1bd39d4 <$GetGlobals>
        195504:	eb68583a 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
        195508:	e1a0000d 	mov	r0, sp
        19550c:	e3a01000 	mov	r1, #0	; 0x0
        195510:	eb686cd1 	bl	1bb085c <TUnblockEvent::$__dt(void)>
        195514:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

