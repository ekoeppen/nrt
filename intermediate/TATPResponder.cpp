#include "include/TATPResponder.h"

/**
 * Symbol: TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)
 * Address: 001a9428
 */
TATPResponder::TATPResponder(unsigned char, unsigned short, TAddress const &, unsigned char) {
    /*
        1a9428:	e1a0c00d 	mov	ip, sp
        1a942c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a9430:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a9434:	e1b04000 	movs	r4, r0
        1a9438:	e1a05003 	mov	r5, r3
        1a943c:	e20170ff 	and	r7, r1, #255	; 0xff
        1a9440:	e1a06802 	mov	r6, r2, lsl #16
        1a9444:	e1a06826 	mov	r6, r6, lsr #16
        1a9448:	e59b0004 	ldr	r0, [fp, #4]
        1a944c:	e20090ff 	and	r9, r0, #255	; 0xff
        1a9450:	1a000005 	bne	1a946c <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0x44>
        1a9454:	e3a000cc 	mov	r0, #204	; 0xcc
        1a9458:	eb6894b6 	bl	1bce738 <$__nw(unsigned int)>
        1a945c:	e1b04000 	movs	r4, r0
        1a9460:	1a000001 	bne	1a946c <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0x44>
        1a9464:	e1a00004 	mov	r0, r4
        1a9468:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1a946c:	e2840058 	add	r0, r4, #88	; 0x58
        1a9470:	eb69294f 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        1a9474:	e2840080 	add	r0, r4, #128	; 0x80
        1a9478:	e1a0a000 	mov	sl, r0
        1a947c:	e3a01001 	mov	r1, #1	; 0x1
        1a9480:	eb692949 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        1a9484:	e284008c 	add	r0, r4, #140	; 0x8c
        1a9488:	e1a08000 	mov	r8, r0
        1a948c:	eb63210d 	bl	1a718c8 <TMessageTimer::$__ct(void)>
        1a9490:	e3a00000 	mov	r0, #0	; 0x0
        1a9494:	e58400c8 	str	r0, [r4, #200]
        1a9498:	e5c4607d 	strb	r6, [r4, #125]
        1a949c:	e1a00426 	mov	r0, r6, lsr #8
        1a94a0:	e5c4007c 	strb	r0, [r4, #124]	; fField124
        1a94a4:	e1a0000a 	mov	r0, sl
        1a94a8:	e1a01005 	mov	r1, r5
        1a94ac:	eb69293f 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        1a94b0:	e3a00000 	mov	r0, #0	; 0x0
        1a94b4:	e5c40000 	strb	r0, [r4]
        1a94b8:	e3590004 	cmp	r9, #4	; 0x4
        1a94bc:	908ff109 	addls	pc, pc, r9, lsl #2
        1a94c0:	ea000003 	b	1a94d4 <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0xac>
        1a94c4:	ea000011 	b	1a9510 <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0xe8>
        1a94c8:	ea000012 	b	1a9518 <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0xf0>
        1a94cc:	ea000013 	b	1a9520 <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0xf8>
        1a94d0:	ea000014 	b	1a9528 <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0x100>
        1a94d4:	e3a05e1e 	mov	r5, #480	; 0x1e0
        1a94d8:	e0863807 	add	r3, r6, r7, lsl #16
        1a94dc:	e3a02004 	mov	r2, #4	; 0x4
        1a94e0:	e3a019e1 	mov	r1, #3686400	; 0x384000
        1a94e4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1a94e8:	eb68a939 	bl	1bd39d4 <$GetGlobals>
        1a94ec:	eb68fbd2 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1a94f0:	e1a01000 	mov	r1, r0
        1a94f4:	e1a00008 	mov	r0, r8
        1a94f8:	e1a03005 	mov	r3, r5
        1a94fc:	e59f2008 	ldr	r2, [pc, #8]	; 1a950c <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0xe4>
        1a9500:	eb634a2b 	bl	1a7bdb4 <TMessageTimer::$Init(TUPort *, unsigned long, unsigned long, TimeUnits, TimerType, unsigned long)>
        1a9504:	e28dd00c 	add	sp, sp, #12	; 0xc
        1a9508:	eaffffd5 	b	1a9464 <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0x3c>
        1a950c:	61747020 	cmnvs	r4, r0, lsr #32
        1a9510:	e3a0501e 	mov	r5, #30	; 0x1e
        1a9514:	eaffffef 	b	1a94d8 <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0xb0>
        1a9518:	e3a0503c 	mov	r5, #60	; 0x3c
        1a951c:	eaffffed 	b	1a94d8 <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0xb0>
        1a9520:	e3a05078 	mov	r5, #120	; 0x78
        1a9524:	eaffffeb 	b	1a94d8 <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0xb0>
        1a9528:	e3a050f0 	mov	r5, #240	; 0xf0
        1a952c:	eaffffe9 	b	1a94d8 <TATPResponder::__ct(unsigned char, unsigned short, TAddress const &, unsigned char)+0xb0>
    */
}

/**
 * Symbol: TATPResponder::__dt(void)
 * Address: 001a9530
 */
TATPResponder::~TATPResponder(void) {
    /*
        1a9530:	e1a0c00d 	mov	ip, sp
        1a9534:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1a9538:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a953c:	e1a04000 	mov	r4, r0
        1a9540:	e1a05001 	mov	r5, r1
        1a9544:	e280008c 	add	r0, r0, #140	; 0x8c
        1a9548:	e1a06000 	mov	r6, r0
        1a954c:	eb635aae 	bl	1a8000c <TMessageTimer::$Stop(void)>
        1a9550:	e1a00006 	mov	r0, r6
        1a9554:	e3a01000 	mov	r1, #0	; 0x0
        1a9558:	eb68946c 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1a955c:	e2840058 	add	r0, r4, #88	; 0x58
        1a9560:	e3a01000 	mov	r1, #0	; 0x0
        1a9564:	eb692914 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        1a9568:	e3150001 	tst	r5, #1	; 0x1
        1a956c:	11a00004 	movne	r0, r4
        1a9570:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        1a9574:	1a689059 	bne	1bcd6e0 <$__dl(void *)>
        1a9578:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TATPResponder::SetResponseBuffer(unsigned long)
 * Address: 001a957c
 */
TATPResponder::SetResponseBuffer(unsigned long) {
    /*
        1a957c:	e1a0c00d 	mov	ip, sp
        1a9580:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a9584:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a9588:	e1a04000 	mov	r4, r0
        1a958c:	e1a05001 	mov	r5, r1
        1a9590:	e24dd024 	sub	sp, sp, #36	; 0x24
        1a9594:	e1a0000d 	mov	r0, sp
        1a9598:	eb692905 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        1a959c:	e1a01005 	mov	r1, r5
        1a95a0:	e1a0000d 	mov	r0, sp
        1a95a4:	e3a02000 	mov	r2, #0	; 0x0
        1a95a8:	eb634e20 	bl	1a7ce30 <TMemoryObject::$Make(unsigned long, TUMsgToken *)>
        1a95ac:	e2840058 	add	r0, r4, #88	; 0x58
        1a95b0:	e1a06000 	mov	r6, r0
        1a95b4:	e3a03001 	mov	r3, #1	; 0x1
        1a95b8:	e3a02001 	mov	r2, #1	; 0x1
        1a95bc:	e59d101c 	ldr	r1, [sp, #28]
        1a95c0:	eb6928fc 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        1a95c4:	e1b05000 	movs	r5, r0
        1a95c8:	0a000004 	beq	1a95e0 <TATPResponder::SetResponseBuffer(unsigned long)+0x64>
        1a95cc:	e1a0000d 	mov	r0, sp
        1a95d0:	e3a01000 	mov	r1, #0	; 0x0
        1a95d4:	eb6928f8 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        1a95d8:	e28dd024 	add	sp, sp, #36	; 0x24
        1a95dc:	ea000027 	b	1a9680 <TATPResponder::SetResponseBuffer(unsigned long)+0x104>
        1a95e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a95e4:	e3a03000 	mov	r3, #0	; 0x0
        1a95e8:	e92d0008 	stmdb	sp!, {r3}
        1a95ec:	e1a00006 	mov	r0, r6
        1a95f0:	e59d5024 	ldr	r5, [sp, #36]
        1a95f4:	eb6928f6 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        1a95f8:	e1a02000 	mov	r2, r0
        1a95fc:	e28d1004 	add	r1, sp, #4	; 0x4
        1a9600:	e28d0008 	add	r0, sp, #8	; 0x8
        1a9604:	e1a03005 	mov	r3, r5
        1a9608:	eb63397a 	bl	1a77bf8 <TMemoryObject::$CopyFrom(unsigned long *, void *, unsigned long, unsigned long)>
        1a960c:	e28dd004 	add	sp, sp, #4	; 0x4
        1a9610:	e1b05000 	movs	r5, r0
        1a9614:	0a000004 	beq	1a962c <TATPResponder::SetResponseBuffer(unsigned long)+0xb0>
        1a9618:	e28d0004 	add	r0, sp, #4	; 0x4
        1a961c:	e3a01000 	mov	r1, #0	; 0x0
        1a9620:	eb6928e5 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        1a9624:	e28dd028 	add	sp, sp, #40	; 0x28
        1a9628:	ea000014 	b	1a9680 <TATPResponder::SetResponseBuffer(unsigned long)+0x104>
        1a962c:	e59d0020 	ldr	r0, [sp, #32]
        1a9630:	e59d1000 	ldr	r1, [sp]
        1a9634:	e59f704c 	ldr	r7, [pc, #4c]	; 1a9688 <TATPResponder::SetResponseBuffer(unsigned long)+0x10c>
        1a9638:	e1300001 	teq	r0, r1
        1a963c:	11a05007 	movne	r5, r7
        1a9640:	1afffff4 	bne	1a9618 <TATPResponder::SetResponseBuffer(unsigned long)+0x9c>
        1a9644:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a9648:	e3a03000 	mov	r3, #0	; 0x0
        1a964c:	e92d0008 	stmdb	sp!, {r3}
        1a9650:	e2842004 	add	r2, r4, #4	; 0x4
        1a9654:	e1a00006 	mov	r0, r6
        1a9658:	e28d1004 	add	r1, sp, #4	; 0x4
        1a965c:	e3a03054 	mov	r3, #84	; 0x54
        1a9660:	eb633964 	bl	1a77bf8 <TMemoryObject::$CopyFrom(unsigned long *, void *, unsigned long, unsigned long)>
        1a9664:	e28dd004 	add	sp, sp, #4	; 0x4
        1a9668:	e1b05000 	movs	r5, r0
        1a966c:	0a000006 	beq	1a968c <TATPResponder::SetResponseBuffer(unsigned long)+0x110>
        1a9670:	e28d0008 	add	r0, sp, #8	; 0x8
        1a9674:	e3a01000 	mov	r1, #0	; 0x0
        1a9678:	eb6928cf 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        1a967c:	e28dd02c 	add	sp, sp, #44	; 0x2c
        1a9680:	e1a00005 	mov	r0, r5
        1a9684:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a9688:	ffffd11f 	swinv	0x00ffd11f
        1a968c:	e59d0000 	ldr	r0, [sp]
        1a9690:	e3300054 	teq	r0, #84	; 0x54
        1a9694:	11a05007 	movne	r5, r7
        1a9698:	1afffff4 	bne	1a9670 <TATPResponder::SetResponseBuffer(unsigned long)+0xf4>
        1a969c:	e3a00001 	mov	r0, #1	; 0x1
        1a96a0:	e5c40000 	strb	r0, [r4]
        1a96a4:	e28dd008 	add	sp, sp, #8	; 0x8
        1a96a8:	eaffffc7 	b	1a95cc <TATPResponder::SetResponseBuffer(unsigned long)+0x50>
    */
}

/**
 * Symbol: TATPResponder::Match(unsigned short, TAddress const &, AddressEquiv)
 * Address: 001a96ac
 */
TATPResponder::Match(unsigned short, TAddress const &, AddressEquiv) {
    /*
        1a96ac:	e1a0c00d 	mov	ip, sp
        1a96b0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1a96b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a96b8:	e1a01801 	mov	r1, r1, lsl #16
        1a96bc:	e1a01821 	mov	r1, r1, lsr #16
        1a96c0:	e590c07c 	ldr	ip, [r0, #124]	; fField124
        1a96c4:	e131082c 	teq	r1, ip, lsr #16
        1a96c8:	1a000006 	bne	1a96e8 <TATPResponder::Match(unsigned short, TAddress const &, AddressEquiv)+0x3c>
        1a96cc:	e2800080 	add	r0, r0, #128	; 0x80
        1a96d0:	e1a01002 	mov	r1, r2
        1a96d4:	e1a02003 	mov	r2, r3
        1a96d8:	eb634171 	bl	1a79ca4 <TAddress::$Equal(TAddress const &, AddressEquiv)>
        1a96dc:	e3300000 	teq	r0, #0	; 0x0
        1a96e0:	13a00001 	movne	r0, #1	; 0x1
        1a96e4:	1a000000 	bne	1a96ec <TATPResponder::Match(unsigned short, TAddress const &, AddressEquiv)+0x40>
        1a96e8:	e3a00000 	mov	r0, #0	; 0x0
        1a96ec:	e20000ff 	and	r0, r0, #255	; 0xff
        1a96f0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

