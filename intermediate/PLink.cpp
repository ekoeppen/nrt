#include "include/PLink.h"

/**
 * Symbol: New__5PLinkSFPc
 * Address: 00385424
 */
void PLink::New() {
    /*
        385424:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        385428:	e1a01000 	mov	r1, r0
        38542c:	ebfffff8 	bl	385414 <ClassInfo__13TADSPEndpointSFv+0xd0>
        385430:	eb6128db 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        385434:	e1100000 	tst	r0, r0
        385438:	e28dd004 	add	sp, sp, #4	; 0x4
        38543c:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        385440:	01a0f00e 	moveq	pc, lr
        385444:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385448:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38544c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PLink::Delete(void)
 * Address: 00385450
 */
PLink::Delete(void) {
    /*
        385450:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385454:	e92d4001 	stmdb	sp!, {r0, lr}
        385458:	e28fe004 	add	lr, pc, #4	; 0x4
        38545c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385460:	e28cf00c 	add	pc, ip, #12	; 0xc
        385464:	e8bd4001 	ldmia	sp!, {r0, lr}
        385468:	ea61353b 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PLink::Init(unsigned long *, unsigned long *)
 * Address: 0038546c
 */
PLink::Init(unsigned long *, unsigned long *) {
    /*
        38546c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385470:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385474:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: PLink::Activate(void)
 * Address: 00385478
 */
PLink::Activate(void) {
    /*
        385478:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38547c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385480:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: PLink::DeActivate(void)
 * Address: 00385484
 */
PLink::DeActivate(void) {
    /*
        385484:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385488:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38548c:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: PLink::AcquireNodeAddress(unsigned char &, unsigned long &)
 * Address: 00385490
 */
PLink::AcquireNodeAddress(unsigned char &, unsigned long &) {
    /*
        385490:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385494:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385498:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: PLink::ReleaseNodeAddress(void)
 * Address: 0038549c
 */
PLink::ReleaseNodeAddress(void) {
    /*
        38549c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3854a0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3854a4:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: PLink::ConfirmNodeAddress(unsigned char)
 * Address: 003854a8
 */
PLink::ConfirmNodeAddress(unsigned char) {
    /*
        3854a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3854ac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3854b0:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: PLink::Write(TAddress *, CBufferList *)
 * Address: 003854b4
 */
PLink::Write(TAddress *, CBufferList *) {
    /*
        3854b4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3854b8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3854bc:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: PLink::PostRead(TUAsyncMessage *, CBufferList *)
 * Address: 003854c0
 */
PLink::PostRead(TUAsyncMessage *, CBufferList *) {
    /*
        3854c0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3854c4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3854c8:	e28cf02c 	add	pc, ip, #44	; 0x2c
        3854cc:	00000000 	andeq	r0, r0, r0
        3854d0:	00000048 	andeq	r0, r0, r8, asr #32
        3854d4:	00000053 	andeq	r0, r0, r3, asr r0
        3854d8:	00000055 	andeq	r0, r0, r5, asr r0
        3854dc:	0000005c 	andeq	r0, r0, ip, asr r0
        3854e0:	00000088 	andeq	r0, r0, r8, lsl #1
        3854e4:	eaf63b5b 	b	114258 <Sizeof__14PLocalTalkLinkSFv>
        3854f0:	ea5bfb57 	b	1a84254 <PLocalTalkLink::$New(void)>
        3854f4:	ea5bf31c 	b	1a8216c <PLocalTalkLink::$Delete(void)>
        3854f8:	00020000 	andeq	r0, r2, r0
        385504:	ea000001 	b	385510 <ClassInfo__14PLocalTalkLinkSFv+0x8>
    */
}

