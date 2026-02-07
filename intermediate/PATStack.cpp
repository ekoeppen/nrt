#include "include/PATStack.h"

/**
 * Symbol: New__8PATStackSFPc
 * Address: 0038557c
 */
void PATStack::New() {
    /*
        38557c:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        385580:	e1a01000 	mov	r1, r0
        385584:	ebfffff7 	bl	385568 <ClassInfo__14PLocalTalkLinkSFv+0x60>
        385588:	eb612885 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        38558c:	e1100000 	tst	r0, r0
        385590:	e28dd004 	add	sp, sp, #4	; 0x4
        385594:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        385598:	01a0f00e 	moveq	pc, lr
        38559c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3855a0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3855a4:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PATStack::Delete(void)
 * Address: 003855a8
 */
PATStack::Delete(void) {
    /*
        3855a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3855ac:	e92d4001 	stmdb	sp!, {r0, lr}
        3855b0:	e28fe004 	add	lr, pc, #4	; 0x4
        3855b4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3855b8:	e28cf00c 	add	pc, ip, #12	; 0xc
        3855bc:	e8bd4001 	ldmia	sp!, {r0, lr}
        3855c0:	ea6134e5 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PATStack::Init(TUPort *, unsigned long)
 * Address: 003855c4
 */
PATStack::Init(TUPort *, unsigned long) {
    /*
        3855c4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3855c8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3855cc:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: PATStack::HandleRequest(unsigned char &, TAEvent *, TUMsgToken *, unsigned long)
 * Address: 003855d0
 */
PATStack::HandleRequest(unsigned char &, TAEvent *, TUMsgToken *, unsigned long) {
    /*
        3855d0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3855d4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3855d8:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: PATStack::HandleReply(unsigned long &, unsigned long, unsigned long)
 * Address: 003855dc
 */
PATStack::HandleReply(unsigned long &, unsigned long, unsigned long) {
    /*
        3855dc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3855e0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3855e4:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: PATStack::NBPLookupNames(unsigned char *, unsigned long, unsigned long, unsigned long)
 * Address: 003855e8
 */
PATStack::NBPLookupNames(unsigned char *, unsigned long, unsigned long, unsigned long) {
    /*
        3855e8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3855ec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3855f0:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: PATStack::NBPLookupNamesReceived(void)
 * Address: 003855f4
 */
PATStack::NBPLookupNamesReceived(void) {
    /*
        3855f4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3855f8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3855fc:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: PATStack::NBPLookupNamesGetResult(unsigned long, TAddress *, unsigned char *, unsigned char *, unsigned char *)
 * Address: 00385600
 */
PATStack::NBPLookupNamesGetResult(unsigned long, TAddress *, unsigned char *, unsigned char *, unsigned char *) {
    /*
        385600:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385604:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385608:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: PATStack::NBPLookupNamesCancel(void)
 * Address: 0038560c
 */
PATStack::NBPLookupNamesCancel(void) {
    /*
        38560c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385610:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385614:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: PATStack::NBPLookupNamesClose(void)
 * Address: 00385618
 */
PATStack::NBPLookupNamesClose(void) {
    /*
        385618:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38561c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385620:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: PATStack::NBPRegisterName(unsigned char, unsigned char *)
 * Address: 00385624
 */
PATStack::NBPRegisterName(unsigned char, unsigned char *) {
    /*
        385624:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385628:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38562c:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: PATStack::NBPUnRegisterName(unsigned char *)
 * Address: 00385630
 */
PATStack::NBPUnRegisterName(unsigned char *) {
    /*
        385630:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385634:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385638:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: PATStack::ATPOpenSocket(unsigned char)
 * Address: 0038563c
 */
PATStack::ATPOpenSocket(unsigned char) {
    /*
        38563c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385640:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385644:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: PATStack::ATPCloseSocket(void)
 * Address: 00385648
 */
PATStack::ATPCloseSocket(void) {
    /*
        385648:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38564c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385650:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: PATStack::ATPSendRequest(TAddress *, TMemoryObject *, TMemoryObject *, unsigned char, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)
 * Address: 00385654
 */
PATStack::ATPSendRequest(TAddress *, TMemoryObject *, TMemoryObject *, unsigned char, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char) {
    /*
        385654:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385658:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38565c:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: PATStack::ATPSendRequestResponses(unsigned long &)
 * Address: 00385660
 */
PATStack::ATPSendRequestResponses(unsigned long &) {
    /*
        385660:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385664:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385668:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: PATStack::ATPSendRequestGetResult(unsigned char)
 * Address: 0038566c
 */
PATStack::ATPSendRequestGetResult(unsigned char) {
    /*
        38566c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385670:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385674:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: PATStack::ATPSendRequestCancel(void)
 * Address: 00385678
 */
PATStack::ATPSendRequestCancel(void) {
    /*
        385678:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38567c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385680:	e28cf04c 	add	pc, ip, #76	; 0x4c
    */
}

/**
 * Symbol: PATStack::DDPOpenSocket(unsigned char *, unsigned long, unsigned long, unsigned long)
 * Address: 00385684
 */
PATStack::DDPOpenSocket(unsigned char *, unsigned long, unsigned long, unsigned long) {
    /*
        385684:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385688:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38568c:	e28cf050 	add	pc, ip, #80	; 0x50
    */
}

/**
 * Symbol: PATStack::DDPCloseSocket(void)
 * Address: 00385690
 */
PATStack::DDPCloseSocket(void) {
    /*
        385690:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385694:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385698:	e28cf054 	add	pc, ip, #84	; 0x54
    */
}

/**
 * Symbol: PATStack::DDPSend(TAddress *, unsigned char, CBufferList *)
 * Address: 0038569c
 */
PATStack::DDPSend(TAddress *, unsigned char, CBufferList *) {
    /*
        38569c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3856a0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3856a4:	e28cf058 	add	pc, ip, #88	; 0x58
    */
}

/**
 * Symbol: PATStack::DDPReceive(CBufferList *)
 * Address: 003856a8
 */
PATStack::DDPReceive(CBufferList *) {
    /*
        3856a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3856ac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3856b0:	e28cf05c 	add	pc, ip, #92	; 0x5c
    */
}

/**
 * Symbol: PATStack::DDPReceiveGetResults(unsigned char *, unsigned long *, TAddress *)
 * Address: 003856b4
 */
PATStack::DDPReceiveGetResults(unsigned char *, unsigned long *, TAddress *) {
    /*
        3856b4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3856b8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3856bc:	e28cf060 	add	pc, ip, #96	; 0x60
    */
}

/**
 * Symbol: PATStack::DDPReceiveCancel(void)
 * Address: 003856c0
 */
PATStack::DDPReceiveCancel(void) {
    /*
        3856c0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3856c4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3856c8:	e28cf064 	add	pc, ip, #100	; 0x64
        3856cc:	00000000 	andeq	r0, r0, r0
        3856d0:	00000048 	andeq	r0, r0, r8, asr #32
        3856d4:	00000054 	andeq	r0, r0, r4, asr r0
        3856d8:	00000059 	andeq	r0, r0, r9, asr r0
        3856dc:	00000058 	andeq	r0, r0, r8, asr r0
        3856e0:	000000bc 	streqh	r0, [r0], -ip
        3856e4:	eaf2b561 	b	32c70 <Sizeof__15PAppleTalkStackSFv>
        3856f0:	ea5bfad8 	b	1a84258 <PAppleTalkStack::$New(void)>
        3856f4:	ea5bf29d 	b	1a82170 <PAppleTalkStack::$Delete(void)>
        385704:	ea000001 	b	385710 <ClassInfo__15PAppleTalkStackSFv+0x8>
    */
}

