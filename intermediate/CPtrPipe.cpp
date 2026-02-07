#include "include/CPtrPipe.h"

/**
 * Symbol: CPtrPipe::__ct(void)
 * Address: 00195518
 */
CPtrPipe::CPtrPipe(void) {
    /*
        195518:	e1a0c00d 	mov	ip, sp
        19551c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        195520:	e24cb004 	sub	fp, ip, #4	; 0x4
        195524:	e1b04000 	movs	r4, r0
        195528:	1a000003 	bne	19553c <CPtrPipe::__ct(void)+0x24>
        19552c:	e3a00018 	mov	r0, #24	; 0x18
        195530:	eb68e480 	bl	1bce738 <$__nw(unsigned int)>
        195534:	e1b04000 	movs	r4, r0
        195538:	0a000009 	beq	195564 <CPtrPipe::__ct(void)+0x4c>
        19553c:	e1a00004 	mov	r0, r4
        195540:	eb693b3a 	bl	1be4230 <CPipe::$__ct(void)>
        195544:	e59f0020 	ldr	r0, [pc, #20]	; 19556c <CPtrPipe::__ct(void)+0x54>	; fField20
        195548:	e5840000 	str	r0, [r4]
        19554c:	e3a00000 	mov	r0, #0	; 0x0
        195550:	e5840004 	str	r0, [r4, #4]	; fField4
        195554:	e5840008 	str	r0, [r4, #8]	; fField8
        195558:	e584000c 	str	r0, [r4, #12]	; fField12
        19555c:	e5840010 	str	r0, [r4, #16]	; fField16
        195560:	e5c40014 	strb	r0, [r4, #20]	; fField20
        195564:	e1a00004 	mov	r0, r4
        195568:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        19556c:	0001ff60 	andeq	pc, r1, r0, ror #30
    */
}

/**
 * Symbol: CPtrPipe::__dt(void)
 * Address: 00195570
 */
CPtrPipe::~CPtrPipe(void) {
    /*
        195570:	e1a0c00d 	mov	ip, sp
        195574:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        195578:	e24cb004 	sub	fp, ip, #4	; 0x4
        19557c:	e1a04000 	mov	r4, r0
        195580:	e1a05001 	mov	r5, r1
        195584:	e59f0030 	ldr	r0, [pc, #30]	; 1955bc <CPtrPipe::__dt(void)+0x4c>
        195588:	e5840000 	str	r0, [r4]
        19558c:	e5d40014 	ldrb	r0, [r4, #20]	; fField20
        195590:	e3300000 	teq	r0, #0	; 0x0
        195594:	15940004 	ldrne	r0, [r4, #4]	; fField4
        195598:	1b68f4ee 	blne	1bd2958 <$free>
        19559c:	e1a00004 	mov	r0, r4
        1955a0:	e3a01000 	mov	r1, #0	; 0x0
        1955a4:	eb693f37 	bl	1be5288 <CPipe::$__dt(void)>
        1955a8:	e3150001 	tst	r5, #1	; 0x1
        1955ac:	11a00004 	movne	r0, r4
        1955b0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1955b4:	1a68e049 	bne	1bcd6e0 <$__dl(void *)>
        1955b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1955bc:	0001ff60 	andeq	pc, r1, r0, ror #30
    */
}

/**
 * Symbol: CPtrPipe::ReadPosition( const(void))
 * Address: 001955c0
 */
CPtrPipe::ReadPosition( const(void)) {
    /*
        1955c0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1955c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPtrPipe::WritePosition( const(void))
 * Address: 001955c8
 */
CPtrPipe::WritePosition( const(void)) {
    /*
        1955c8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1955cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPtrPipe::Overflow(void)
 * Address: 001955d0
 */
CPtrPipe::Overflow(void) {
    /*
        1955d0:	e59f0010 	ldr	r0, [pc, #10]	; 1955e8 <CPtrPipe::Overflow(void)+0x18>
        1955d4:	e5900000 	ldr	r0, [r0]
        1955d8:	e3a02000 	mov	r2, #0	; 0x0
        1955dc:	e3a0104a 	mov	r1, #74	; 0x4a
        1955e0:	e2411c37 	sub	r1, r1, #14080	; 0x3700
        1955e4:	ea6936ec 	b	1be319c <$Throw>
        1955e8:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CPtrPipe::Underflow(long, unsigned char &)
 * Address: 001955ec
 */
CPtrPipe::Underflow(long, unsigned char &) {
    /*
        1955ec:	e59f0010 	ldr	r0, [pc, #10]	; 195604 <CPtrPipe::Underflow(long, unsigned char &)+0x18>
        1955f0:	e5900000 	ldr	r0, [r0]
        1955f4:	e3a02000 	mov	r2, #0	; 0x0
        1955f8:	e3a01049 	mov	r1, #73	; 0x49
        1955fc:	e2411c37 	sub	r1, r1, #14080	; 0x3700
        195600:	ea6936e5 	b	1be319c <$Throw>
        195604:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CPtrPipe::FlushRead(void)
 * Address: 00195608
 */
CPtrPipe::FlushRead(void) {
    /*
        195608:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPtrPipe::FlushWrite(void)
 * Address: 0019560c
 */
CPtrPipe::FlushWrite(void) {
    /*
        19560c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPtrPipe::Init(long, PipeCallBack *)
 * Address: 00195610
 */
CPtrPipe::Init(long, PipeCallBack *) {
    /*
        195610:	e1a0c00d 	mov	ip, sp
        195614:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        195618:	e24cb004 	sub	fp, ip, #4	; 0x4
        19561c:	e1a06000 	mov	r6, r0
        195620:	e1a04001 	mov	r4, r1
        195624:	e1a05002 	mov	r5, r2
        195628:	e59f7058 	ldr	r7, [pc, #58]	; 195688 <CPtrPipe::Init(long, PipeCallBack *)+0x78>
        19562c:	e3510000 	cmp	r1, #0	; 0x0
        195630:	ca000003 	bgt	195644 <CPtrPipe::Init(long, PipeCallBack *)+0x34>
        195634:	e3a02000 	mov	r2, #0	; 0x0
        195638:	e5970000 	ldr	r0, [r7]
        19563c:	e59f1048 	ldr	r1, [pc, #48]	; 19568c <CPtrPipe::Init(long, PipeCallBack *)+0x7c>
        195640:	eb6936d5 	bl	1be319c <$Throw>
        195644:	e1a00004 	mov	r0, r4
        195648:	eb690546 	bl	1bd6b68 <$malloc>
        19564c:	e1b08000 	movs	r8, r0
        195650:	1a000004 	bne	195668 <CPtrPipe::Init(long, PipeCallBack *)+0x58>
        195654:	eb6932b1 	bl	1be2120 <$MemError>
        195658:	e1a01000 	mov	r1, r0
        19565c:	e3a02000 	mov	r2, #0	; 0x0
        195660:	e5970000 	ldr	r0, [r7]
        195664:	eb6936cc 	bl	1be319c <$Throw>
        195668:	e1a03005 	mov	r3, r5
        19566c:	e92d0008 	stmdb	sp!, {r3}
        195670:	e1a02004 	mov	r2, r4
        195674:	e1a01008 	mov	r1, r8
        195678:	e1a00006 	mov	r0, r6
        19567c:	e3a03001 	mov	r3, #1	; 0x1
        195680:	eb68473f 	bl	1ba7384 <CPtrPipe::$Init(void *, long, unsigned char, PipeCallBack *)>
        195684:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        195688:	00371324 	eoreqs	r1, r7, r4, lsr #6
        19568c:	ffffc94b 	swinv	0x00ffc94b
    */
}

/**
 * Symbol: CPtrPipe::Init(void *, long, unsigned char, PipeCallBack *)
 * Address: 00195690
 */
CPtrPipe::Init(void *, long, unsigned char, PipeCallBack *) {
    /*
        195690:	e59dc000 	ldr	ip, [sp]
        195694:	e5801004 	str	r1, [r0, #4]	; fField4
        195698:	e3a01000 	mov	r1, #0	; 0x0
        19569c:	e2800008 	add	r0, r0, #8	; 0x8
        1956a0:	e8800006 	stmia	r0, {r1, r2}
        1956a4:	e2400008 	sub	r0, r0, #8	; 0x8
        1956a8:	e5c03014 	strb	r3, [r0, #20]	; fField20
        1956ac:	e5a0c010 	str	ip, [r0, #16]!	; fField16
        1956b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPtrPipe::Reset(void)
 * Address: 001956b4
 */
CPtrPipe::Reset(void) {
    /*
        1956b4:	e3a01000 	mov	r1, #0	; 0x0
        1956b8:	e5a01008 	str	r1, [r0, #8]!	; fField8
        1956bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPtrPipe::ReadChunk(void *, long &, unsigned char &)
 * Address: 001956c0
 */
CPtrPipe::ReadChunk(void *, long &, unsigned char &) {
    /*
        1956c0:	e1a0c00d 	mov	ip, sp
        1956c4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1956c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1956cc:	e1a04000 	mov	r4, r0
        1956d0:	e1a06001 	mov	r6, r1
        1956d4:	e1a05002 	mov	r5, r2
        1956d8:	e3a00000 	mov	r0, #0	; 0x0
        1956dc:	e5c30000 	strb	r0, [r3]
        1956e0:	e2841008 	add	r1, r4, #8	; 0x8
        1956e4:	e8910003 	ldmia	r1, {r0, r1}
        1956e8:	e0411000 	sub	r1, r1, r0
        1956ec:	e5920000 	ldr	r0, [r2]
        1956f0:	e1510000 	cmp	r1, r0
        1956f4:	aa000005 	bge	195710 <CPtrPipe::ReadChunk(void *, long &, unsigned char &)+0x50>
        1956f8:	e59f003c 	ldr	r0, [pc, #3c]	; 19573c <CPtrPipe::ReadChunk(void *, long &, unsigned char &)+0x7c>
        1956fc:	e5900000 	ldr	r0, [r0]
        195700:	e3a02000 	mov	r2, #0	; 0x0
        195704:	e3a01049 	mov	r1, #73	; 0x49
        195708:	e2411c37 	sub	r1, r1, #14080	; 0x3700
        19570c:	eb6936a2 	bl	1be319c <$Throw>
        195710:	e5940008 	ldr	r0, [r4, #8]	; fField8
        195714:	e5941004 	ldr	r1, [r4, #4]	; fField4
        195718:	e0811000 	add	r1, r1, r0
        19571c:	e1a00006 	mov	r0, r6
        195720:	e5952000 	ldr	r2, [r5]
        195724:	eb687cc9 	bl	1bb4a50 <$memcpy>
        195728:	e5940008 	ldr	r0, [r4, #8]	; fField8
        19572c:	e5951000 	ldr	r1, [r5]
        195730:	e0800001 	add	r0, r0, r1
        195734:	e5a40008 	str	r0, [r4, #8]!	; fField8
        195738:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        19573c:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CPtrPipe::WriteChunk(void *, long, unsigned char)
 * Address: 00195740
 */
CPtrPipe::WriteChunk(void *, long, unsigned char) {
    /*
        195740:	e1a0c00d 	mov	ip, sp
        195744:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        195748:	e24cb004 	sub	fp, ip, #4	; 0x4
        19574c:	e1a04000 	mov	r4, r0
        195750:	e1a06001 	mov	r6, r1
        195754:	e1a05002 	mov	r5, r2
        195758:	e2801008 	add	r1, r0, #8	; 0x8
        19575c:	e8910003 	ldmia	r1, {r0, r1}
        195760:	e0410000 	sub	r0, r1, r0
        195764:	e1500002 	cmp	r0, r2
        195768:	aa000005 	bge	195784 <CPtrPipe::WriteChunk(void *, long, unsigned char)+0x44>
        19576c:	e59f0038 	ldr	r0, [pc, #38]	; 1957ac <CPtrPipe::WriteChunk(void *, long, unsigned char)+0x6c>
        195770:	e5900000 	ldr	r0, [r0]
        195774:	e3a02000 	mov	r2, #0	; 0x0
        195778:	e3a0104a 	mov	r1, #74	; 0x4a
        19577c:	e2411c37 	sub	r1, r1, #14080	; 0x3700
        195780:	eb693685 	bl	1be319c <$Throw>
        195784:	e5940008 	ldr	r0, [r4, #8]	; fField8
        195788:	e5941004 	ldr	r1, [r4, #4]	; fField4
        19578c:	e0810000 	add	r0, r1, r0
        195790:	e1a02005 	mov	r2, r5
        195794:	e1a01006 	mov	r1, r6
        195798:	eb687cac 	bl	1bb4a50 <$memcpy>
        19579c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1957a0:	e0800005 	add	r0, r0, r5
        1957a4:	e5a40008 	str	r0, [r4, #8]!	; fField8
        1957a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1957ac:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CPtrPipe::Seek(long, int)
 * Address: 001957b0
 */
CPtrPipe::Seek(long, int) {
    /*
        1957b0:	e3310000 	teq	r1, #0	; 0x0
        1957b4:	1a000006 	bne	1957d4 <CPtrPipe::Seek(long, int)+0x24>
        1957b8:	e3720001 	cmn	r2, #1	; 0x1
        1957bc:	03a01000 	moveq	r1, #0	; 0x0
        1957c0:	0a00000d 	beq	1957fc <CPtrPipe::Seek(long, int)+0x4c>
        1957c4:	e3320001 	teq	r2, #1	; 0x1
        1957c8:	0590100c 	ldreq	r1, [r0, #12]	; fField12
        1957cc:	0a00000a 	beq	1957fc <CPtrPipe::Seek(long, int)+0x4c>
        1957d0:	ea00000a 	b	195800 <CPtrPipe::Seek(long, int)+0x50>
        1957d4:	e3720001 	cmn	r2, #1	; 0x1
        1957d8:	0a000007 	beq	1957fc <CPtrPipe::Seek(long, int)+0x4c>
        1957dc:	e3320000 	teq	r2, #0	; 0x0
        1957e0:	05902008 	ldreq	r2, [r0, #8]	; fField8
        1957e4:	00821001 	addeq	r1, r2, r1
        1957e8:	0a000003 	beq	1957fc <CPtrPipe::Seek(long, int)+0x4c>
        1957ec:	e3320001 	teq	r2, #1	; 0x1
        1957f0:	1a000002 	bne	195800 <CPtrPipe::Seek(long, int)+0x50>
        1957f4:	e590200c 	ldr	r2, [r0, #12]	; fField12
        1957f8:	e0421001 	sub	r1, r2, r1
        1957fc:	e5801008 	str	r1, [r0, #8]	; fField8
        195800:	e5900008 	ldr	r0, [r0, #8]	; fField8
        195804:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPtrPipe::ReadSeek(long, int)
 * Address: 00195808
 */
CPtrPipe::ReadSeek(long, int) {
    /*
        195808:	ea6867e1 	b	1baf794 <CPtrPipe::$Seek(long, int)>
    */
}

/**
 * Symbol: CPtrPipe::WriteSeek(long, int)
 * Address: 0019580c
 */
CPtrPipe::WriteSeek(long, int) {
    /*
        19580c:	ea6867e0 	b	1baf794 <CPtrPipe::$Seek(long, int)>
    */
}

