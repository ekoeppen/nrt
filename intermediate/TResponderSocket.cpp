#include "include/TResponderSocket.h"

/**
 * Symbol: TResponderSocket::RemoveResponder(unsigned short)
 * Address: 001a93b4
 */
TResponderSocket::RemoveResponder(unsigned short) {
    /*
        1a93b4:	e1a0c00d 	mov	ip, sp
        1a93b8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1a93bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a93c0:	e1a0c801 	mov	ip, r1, lsl #16
        1a93c4:	e1a0c82c 	mov	ip, ip, lsr #16
        1a93c8:	e3a03000 	mov	r3, #0	; 0x0
        1a93cc:	e3a02000 	mov	r2, #0	; 0x0
        1a93d0:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1a93d4:	e3310000 	teq	r1, #0	; 0x0
        1a93d8:	0a000010 	beq	1a9420 <TResponderSocket::RemoveResponder(unsigned short)+0x6c>
        1a93dc:	e591e07c 	ldr	lr, [r1, #124]
        1a93e0:	e13c082e 	teq	ip, lr, lsr #16
        1a93e4:	1a000009 	bne	1a9410 <TResponderSocket::RemoveResponder(unsigned short)+0x5c>
        1a93e8:	e3320000 	teq	r2, #0	; 0x0
        1a93ec:	159100c8 	ldrne	r0, [r1, #200]
        1a93f0:	15a200c8 	strne	r0, [r2, #200]!
        1a93f4:	059120c8 	ldreq	r2, [r1, #200]
        1a93f8:	05a02014 	streq	r2, [r0, #20]!	; fField20
        1a93fc:	e1b00001 	movs	r0, r1
        1a9400:	13a01001 	movne	r1, #1	; 0x1
        1a9404:	1b632964 	blne	1a7399c <TATPResponder::$__dt(void)>
        1a9408:	e3a03001 	mov	r3, #1	; 0x1
        1a940c:	ea000003 	b	1a9420 <TResponderSocket::RemoveResponder(unsigned short)+0x6c>
        1a9410:	e1a02001 	mov	r2, r1
        1a9414:	e59110c8 	ldr	r1, [r1, #200]
        1a9418:	e3310000 	teq	r1, #0	; 0x0
        1a941c:	1affffee 	bne	1a93dc <TResponderSocket::RemoveResponder(unsigned short)+0x28>
        1a9420:	e1a00003 	mov	r0, r3
        1a9424:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TResponderSocket::__ct(unsigned char, unsigned char, unsigned char, unsigned short, unsigned long, unsigned char)
 * Address: 001aa3ac
 */
TResponderSocket::TResponderSocket(unsigned char, unsigned char, unsigned char, unsigned short, unsigned long, unsigned char) {
    /*
        1aa3ac:	e1a0c00d 	mov	ip, sp
        1aa3b0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1aa3b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aa3b8:	e1b04000 	movs	r4, r0
        1aa3bc:	e59b000c 	ldr	r0, [fp, #12]	; fField12
        1aa3c0:	e59ba008 	ldr	sl, [fp, #8]
        1aa3c4:	e59bc004 	ldr	ip, [fp, #4]
        1aa3c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1aa3cc:	e20150ff 	and	r5, r1, #255	; 0xff
        1aa3d0:	e20260ff 	and	r6, r2, #255	; 0xff
        1aa3d4:	e20370ff 	and	r7, r3, #255	; 0xff
        1aa3d8:	e1a0880c 	mov	r8, ip, lsl #16
        1aa3dc:	e1a08828 	mov	r8, r8, lsr #16
        1aa3e0:	e20090ff 	and	r9, r0, #255	; 0xff
        1aa3e4:	1a000005 	bne	1aa400 <TResponderSocket::__ct(unsigned char, unsigned char, unsigned char, unsigned short, unsigned long, unsigned char)+0x54>
        1aa3e8:	e3a0001c 	mov	r0, #28	; 0x1c
        1aa3ec:	eb6890d1 	bl	1bce738 <$__nw(unsigned int)>
        1aa3f0:	e1b04000 	movs	r4, r0
        1aa3f4:	1a000001 	bne	1aa400 <TResponderSocket::__ct(unsigned char, unsigned char, unsigned char, unsigned short, unsigned long, unsigned char)+0x54>
        1aa3f8:	e1a00004 	mov	r0, r4
        1aa3fc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1aa400:	e2840004 	add	r0, r4, #4	; 0x4
        1aa404:	e58d0000 	str	r0, [sp]
        1aa408:	eb632155 	bl	1a72964 <TFilter::$__ct(void)>
        1aa40c:	e3a00000 	mov	r0, #0	; 0x0
        1aa410:	e5840014 	str	r0, [r4, #20]	; fField20
        1aa414:	e5840010 	str	r0, [r4, #16]	; fField16
        1aa418:	e5840018 	str	r0, [r4, #24]
        1aa41c:	e5c45000 	strb	r5, [r4]
        1aa420:	e1a0300a 	mov	r3, sl
        1aa424:	e92d0008 	stmdb	sp!, {r3}
        1aa428:	e1a03008 	mov	r3, r8
        1aa42c:	e1a02007 	mov	r2, r7
        1aa430:	e1a01006 	mov	r1, r6
        1aa434:	e59d0004 	ldr	r0, [sp, #4]
        1aa438:	eb63466f 	bl	1a7bdfc <TFilter::$Init(unsigned char, unsigned char, unsigned short, unsigned long)>
        1aa43c:	e28dd004 	add	sp, sp, #4	; 0x4
        1aa440:	e1b00009 	movs	r0, r9
        1aa444:	13a00001 	movne	r0, #1	; 0x1
        1aa448:	e584000c 	str	r0, [r4, #12]	; fField12
        1aa44c:	eaffffe9 	b	1aa3f8 <TResponderSocket::__ct(unsigned char, unsigned char, unsigned char, unsigned short, unsigned long, unsigned char)+0x4c>
    */
}

/**
 * Symbol: TResponderSocket::__dt(void)
 * Address: 001aa450
 */
TResponderSocket::~TResponderSocket(void) {
    /*
        1aa450:	e1a0c00d 	mov	ip, sp
        1aa454:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1aa458:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aa45c:	e1a04000 	mov	r4, r0
        1aa460:	e1a05001 	mov	r5, r1
        1aa464:	e5906014 	ldr	r6, [r0, #20]	; fField20
        1aa468:	e3360000 	teq	r6, #0	; 0x0
        1aa46c:	0a000005 	beq	1aa488 <TResponderSocket::__dt(void)+0x38>
        1aa470:	e1b00006 	movs	r0, r6
        1aa474:	e59660c8 	ldr	r6, [r6, #200]
        1aa478:	13a01001 	movne	r1, #1	; 0x1
        1aa47c:	1b632546 	blne	1a7399c <TATPResponder::$__dt(void)>
        1aa480:	e3360000 	teq	r6, #0	; 0x0
        1aa484:	1afffff9 	bne	1aa470 <TResponderSocket::__dt(void)+0x20>
        1aa488:	e5946010 	ldr	r6, [r4, #16]	; fField16
        1aa48c:	e3360000 	teq	r6, #0	; 0x0
        1aa490:	0a000007 	beq	1aa4b4 <TResponderSocket::__dt(void)+0x64>
        1aa494:	e1b00006 	movs	r0, r6
        1aa498:	e596603c 	ldr	r6, [r6, #60]	; fField60
        1aa49c:	0a000002 	beq	1aa4ac <TResponderSocket::__dt(void)+0x5c>
        1aa4a0:	e3a01001 	mov	r1, #1	; 0x1
        1aa4a4:	e1a0e00f 	mov	lr, pc
        1aa4a8:	e590f000 	ldr	pc, [r0]
        1aa4ac:	e3360000 	teq	r6, #0	; 0x0
        1aa4b0:	1afffff7 	bne	1aa494 <TResponderSocket::__dt(void)+0x44>
        1aa4b4:	e2840004 	add	r0, r4, #4	; 0x4
        1aa4b8:	e3a01000 	mov	r1, #0	; 0x0
        1aa4bc:	eb63254b 	bl	1a739f0 <TFilter::$__dt(void)>
        1aa4c0:	e3150001 	tst	r5, #1	; 0x1
        1aa4c4:	11a00004 	movne	r0, r4
        1aa4c8:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        1aa4cc:	1a688c83 	bne	1bcd6e0 <$__dl(void *)>
        1aa4d0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TResponderSocket::AddRequestor(TATPRequestor *)
 * Address: 001aa4d4
 */
TResponderSocket::AddRequestor(TATPRequestor *) {
    /*
        1aa4d4:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1aa4d8:	e3320000 	teq	r2, #0	; 0x0
        1aa4dc:	05a01010 	streq	r1, [r0, #16]!	; fField16
        1aa4e0:	01a0f00e 	moveq	pc, lr
        1aa4e4:	e1a00002 	mov	r0, r2
        1aa4e8:	e1a02000 	mov	r2, r0
        1aa4ec:	e590003c 	ldr	r0, [r0, #60]	; fField60
        1aa4f0:	e3300000 	teq	r0, #0	; 0x0
        1aa4f4:	1afffffb 	bne	1aa4e8 <TResponderSocket::AddRequestor(TATPRequestor *)+0x14>
        1aa4f8:	e5a2103c 	str	r1, [r2, #60]!	; fField60
        1aa4fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResponderSocket::PullARequestor(void)
 * Address: 001aa500
 */
TResponderSocket::PullARequestor(void) {
    /*
        1aa500:	e3a01000 	mov	r1, #0	; 0x0
        1aa504:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1aa508:	e3320000 	teq	r2, #0	; 0x0
        1aa50c:	0a000008 	beq	1aa534 <TResponderSocket::PullARequestor(void)+0x34>
        1aa510:	e1a01002 	mov	r1, r2
        1aa514:	e590300c 	ldr	r3, [r0, #12]	; fField12
        1aa518:	e3330000 	teq	r3, #0	; 0x0
        1aa51c:	0592203c 	ldreq	r2, [r2, #60]	; fField60
        1aa520:	05a02010 	streq	r2, [r0, #16]!	; fField16
        1aa524:	0a000002 	beq	1aa534 <TResponderSocket::PullARequestor(void)+0x34>
        1aa528:	e5d10038 	ldrb	r0, [r1, #56]
        1aa52c:	e3300000 	teq	r0, #0	; 0x0
        1aa530:	13a01000 	movne	r1, #0	; 0x0
        1aa534:	e1a00001 	mov	r0, r1
        1aa538:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResponderSocket::NewResponder(unsigned short, TAddress const &, unsigned char)
 * Address: 001aa53c
 */
TResponderSocket::NewResponder(unsigned short, TAddress const &, unsigned char) {
    /*
        1aa53c:	e1a0c00d 	mov	ip, sp
        1aa540:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1aa544:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aa548:	e1a04000 	mov	r4, r0
        1aa54c:	e1a00002 	mov	r0, r2
        1aa550:	e1a02801 	mov	r2, r1, lsl #16
        1aa554:	e1a02822 	mov	r2, r2, lsr #16
        1aa558:	e20330ff 	and	r3, r3, #255	; 0xff
        1aa55c:	e3a05000 	mov	r5, #0	; 0x0
        1aa560:	e92d0008 	stmdb	sp!, {r3}
        1aa564:	e1a03000 	mov	r3, r0
        1aa568:	e5d41000 	ldrb	r1, [r4]
        1aa56c:	e3a00000 	mov	r0, #0	; 0x0
        1aa570:	eb631cd1 	bl	1a718bc <TATPResponder::$__ct(unsigned char, unsigned short, TAddress const &, unsigned char)>
        1aa574:	e28dd004 	add	sp, sp, #4	; 0x4
        1aa578:	e3300000 	teq	r0, #0	; 0x0
        1aa57c:	03a050a8 	moveq	r5, #168	; 0xa8
        1aa580:	02455b07 	subeq	r5, r5, #7168	; 0x1c00
        1aa584:	0a000005 	beq	1aa5a0 <TResponderSocket::NewResponder(unsigned short, TAddress const &, unsigned char)+0x64>
        1aa588:	e5941014 	ldr	r1, [r4, #20]	; fField20
        1aa58c:	e3310000 	teq	r1, #0	; 0x0
        1aa590:	158010c8 	strne	r1, [r0, #200]
        1aa594:	e5a40014 	str	r0, [r4, #20]!	; fField20
        1aa598:	e280008c 	add	r0, r0, #140	; 0x8c
        1aa59c:	eb635695 	bl	1a7fff8 <TMessageTimer::$Start(void)>
        1aa5a0:	e1a00005 	mov	r0, r5
        1aa5a4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TResponderSocket::MatchResponder(unsigned short, TAddress const &, AddressEquiv)
 * Address: 001aa5a8
 */
TResponderSocket::MatchResponder(unsigned short, TAddress const &, AddressEquiv) {
    /*
        1aa5a8:	e1a0c00d 	mov	ip, sp
        1aa5ac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1aa5b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aa5b4:	e1a05002 	mov	r5, r2
        1aa5b8:	e1a04003 	mov	r4, r3
        1aa5bc:	e1a07801 	mov	r7, r1, lsl #16
        1aa5c0:	e1a07827 	mov	r7, r7, lsr #16
        1aa5c4:	e5b06014 	ldr	r6, [r0, #20]!	; fField20
        1aa5c8:	e3360000 	teq	r6, #0	; 0x0
        1aa5cc:	0a000009 	beq	1aa5f8 <TResponderSocket::MatchResponder(unsigned short, TAddress const &, AddressEquiv)+0x50>
        1aa5d0:	e1a03004 	mov	r3, r4
        1aa5d4:	e1a02005 	mov	r2, r5
        1aa5d8:	e1a01007 	mov	r1, r7
        1aa5dc:	e1a00006 	mov	r0, r6
        1aa5e0:	eb634a15 	bl	1a7ce3c <TATPResponder::$Match(unsigned short, TAddress const &, AddressEquiv)>
        1aa5e4:	e3300000 	teq	r0, #0	; 0x0
        1aa5e8:	1a000002 	bne	1aa5f8 <TResponderSocket::MatchResponder(unsigned short, TAddress const &, AddressEquiv)+0x50>
        1aa5ec:	e59660c8 	ldr	r6, [r6, #200]
        1aa5f0:	e3360000 	teq	r6, #0	; 0x0
        1aa5f4:	1afffff5 	bne	1aa5d0 <TResponderSocket::MatchResponder(unsigned short, TAddress const &, AddressEquiv)+0x28>
        1aa5f8:	e1a00006 	mov	r0, r6
        1aa5fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

