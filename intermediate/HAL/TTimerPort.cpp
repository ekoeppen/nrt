#include "include/TTimerPort.h"

/**
 * Symbol: TTimerPort::__ct(void)
 * Address: 00255758
 */
TTimerPort::TTimerPort(void) {
    /*
        255758:	e1a0c00d 	mov	ip, sp
        25575c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        255760:	e24cb004 	sub	fp, ip, #4	; 0x4
        255764:	e3300000 	teq	r0, #0	; 0x0
        255768:	1a000003 	bne	25577c <TTimerPort::__ct(void)+0x24>
        25576c:	e3a0000c 	mov	r0, #12	; 0xc
        255770:	eb65e3f0 	bl	1bce738 <$__nw(unsigned int)>
        255774:	e3300000 	teq	r0, #0	; 0x0
        255778:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        25577c:	e3a01000 	mov	r1, #0	; 0x0
        255780:	e5c01004 	strb	r1, [r0, #4]	; fField4
        255784:	e5801000 	str	r1, [r0]
        255788:	e5801008 	str	r1, [r0, #8]	; fField8
        25578c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TTimerPort::__dt(void)
 * Address: 00255790
 */
TTimerPort::~TTimerPort(void) {
    /*
        255790:	e1a0c00d 	mov	ip, sp
        255794:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        255798:	e24cb004 	sub	fp, ip, #4	; 0x4
        25579c:	e1a04000 	mov	r4, r0
        2557a0:	e1a05001 	mov	r5, r1
        2557a4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2557a8:	e3300000 	teq	r0, #0	; 0x0
        2557ac:	13a01001 	movne	r1, #1	; 0x1
        2557b0:	1b656c26 	blne	1bb0850 <TTimerQueue::$__dt(void)>
        2557b4:	e1a00004 	mov	r0, r4
        2557b8:	e3a01000 	mov	r1, #0	; 0x0
        2557bc:	eb65e3d8 	bl	1bce724 <TUObject::$__dt(void)>
        2557c0:	e3150001 	tst	r5, #1	; 0x1
        2557c4:	11a00004 	movne	r0, r4
        2557c8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2557cc:	1a65dfc3 	bne	1bcd6e0 <$__dl(void *)>
        2557d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTimerPort::Init(void)
 * Address: 002557d4
 */
TTimerPort::Init(void) {
    /*
        2557d4:	e1a0c00d 	mov	ip, sp
        2557d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2557dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2557e0:	e1a04000 	mov	r4, r0
        2557e4:	eb6600b5 	bl	1bd5ac0 <TUPort::$Init(void)>
        2557e8:	e1b05000 	movs	r5, r0
        2557ec:	1a000006 	bne	25580c <TTimerPort::Init(void)+0x38>
        2557f0:	e3a00000 	mov	r0, #0	; 0x0
        2557f4:	eb656c08 	bl	1bb081c <TTimerQueue::$__ct(void)>
        2557f8:	e5a40008 	str	r0, [r4, #8]!	; fField8
        2557fc:	e3300000 	teq	r0, #0	; 0x0
        255800:	1a000001 	bne	25580c <TTimerPort::Init(void)+0x38>
        255804:	eb663245 	bl	1be2120 <$MemError>
        255808:	e1a05000 	mov	r5, r0
        25580c:	e1a00005 	mov	r0, r5
        255810:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTimerPort::TimedReceive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned char, unsigned char)
 * Address: 00255814
 */
TTimerPort::TimedReceive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned char, unsigned char) {
    /*
        255814:	e1a0c00d 	mov	ip, sp
        255818:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        25581c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        255820:	e24cb014 	sub	fp, ip, #20	; 0x14
        255824:	e1a04000 	mov	r4, r0
        255828:	e1a05001 	mov	r5, r1
        25582c:	e59b1020 	ldr	r1, [fp, #32]
        255830:	e20160ff 	and	r6, r1, #255	; 0xff
        255834:	e59b0024 	ldr	r0, [fp, #36]
        255838:	e20070ff 	and	r7, r0, #255	; 0xff
        25583c:	e59b801c 	ldr	r8, [fp, #28]
        255840:	e59b9018 	ldr	r9, [fp, #24]
        255844:	e59ba014 	ldr	sl, [fp, #20]
        255848:	e5940008 	ldr	r0, [r4, #8]	; fField8
        25584c:	eb655b74 	bl	1bac624 <TTimerQueue::$Check(void)>
        255850:	e1a03007 	mov	r3, r7
        255854:	e1a02006 	mov	r2, r6
        255858:	e1a01008 	mov	r1, r8
        25585c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        255860:	e1a03009 	mov	r3, r9
        255864:	e1a0200a 	mov	r2, sl
        255868:	e92d000c 	stmdb	sp!, {r2, r3}
        25586c:	e1a01005 	mov	r1, r5
        255870:	e1a00004 	mov	r0, r4
        255874:	e28b300c 	add	r3, fp, #12	; 0xc
        255878:	e893000c 	ldmia	r3, {r2, r3}
        25587c:	eb660ced 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
        255880:	e28dd018 	add	sp, sp, #24	; 0x18
        255884:	e280cc27 	add	ip, r0, #9984	; 0x2700
        255888:	e37c0025 	cmn	ip, #37	; 0x25
        25588c:	0affffed 	beq	255848 <TTimerPort::TimedReceive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned char, unsigned char)+0x34>
        255890:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

