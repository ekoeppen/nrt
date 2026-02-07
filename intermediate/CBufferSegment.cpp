#include "DDKIncludes/CommAPI/Endpoint.h"

/**
 * Symbol: CBufferSegment::__ct(void)
 * Address: 000473f4
 */
CBufferSegment::CBufferSegment(const CBufferSegment&) {
    /*
         473f4:	e1a0c00d 	mov	ip, sp
         473f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         473fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         47400:	e1b04000 	movs	r4, r0
         47404:	1a000003 	bne	47418 <CBufferSegment::__ct(void)+0x24>
         47408:	e3a00028 	mov	r0, #40	; 0x28
         4740c:	eb6e1cc9 	bl	1bce738 <$__nw(unsigned int)>
         47410:	e1b04000 	movs	r4, r0
         47414:	0a000010 	beq	4745c <CBufferSegment::__ct(void)+0x68>
         47418:	e1a00004 	mov	r0, r4
         4741c:	eb6e7384 	bl	1be4234 <CBuffer::$__ct(void)>
         47420:	e3a01000 	mov	r1, #0	; 0x0
         47424:	e5c41020 	strb	r1, [r4, #32]
         47428:	e584101c 	str	r1, [r4, #28]
         4742c:	e59f0030 	ldr	r0, [pc, #30]	; 47464 <CBufferSegment::__ct(void)+0x70>
         47430:	e5840000 	str	r0, [r4]
         47434:	e5c41024 	strb	r1, [r4, #36]	; fField36
         47438:	e5841004 	str	r1, [r4, #4]	; CBufferSegment
         4743c:	e5841008 	str	r1, [r4, #8]	; CBufferSegment
         47440:	e584100c 	str	r1, [r4, #12]	; fField12
         47444:	e5841010 	str	r1, [r4, #16]	; fField16
         47448:	e5841014 	str	r1, [r4, #20]	; fField20
         4744c:	e5841018 	str	r1, [r4, #24]	; fField24
         47450:	e5c41025 	strb	r1, [r4, #37]	; fField37
         47454:	e284001c 	add	r0, r4, #28	; 0x1c
         47458:	eb6e24fa 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         4745c:	e1a00004 	mov	r0, r4
         47460:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         47464:	0001d3a8 	andeq	sp, r1, r8, lsr #7
    */
}

/**
 * Symbol: CBufferSegment::__dt(void)
 * Address: 00047468
 */
CBufferSegment::~CBufferSegment() {
    /*
         47468:	e1a0c00d 	mov	ip, sp
         4746c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         47470:	e24cb004 	sub	fp, ip, #4	; 0x4
         47474:	e1a04000 	mov	r4, r0
         47478:	e1a05001 	mov	r5, r1
         4747c:	e59f0040 	ldr	r0, [pc, #40]	; 474c4 <CBufferSegment::__dt(void)+0x5c>
         47480:	e5840000 	str	r0, [r4]
         47484:	e5d40024 	ldrb	r0, [r4, #36]	; fField36
         47488:	e3300000 	teq	r0, #0	; 0x0
         4748c:	15940004 	ldrne	r0, [r4, #4]	; CBufferSegment
         47490:	13300000 	teqne	r0, #0	; 0x0
         47494:	1b6e6706 	blne	1be10b4 <$DisposPtr>
         47498:	e284001c 	add	r0, r4, #28	; 0x1c
         4749c:	e3a01000 	mov	r1, #0	; 0x0
         474a0:	eb6e1c9f 	bl	1bce724 <TUObject::$__dt(void)>
         474a4:	e1a00004 	mov	r0, r4
         474a8:	e3a01000 	mov	r1, #0	; 0x0
         474ac:	eb6e7776 	bl	1be528c <CBuffer::$__dt(void)>
         474b0:	e3150001 	tst	r5, #1	; 0x1
         474b4:	11a00004 	movne	r0, r4
         474b8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         474bc:	1a6e1887 	bne	1bcd6e0 <$__dl(void *)>
         474c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         474c4:	0001d3a8 	andeq	sp, r1, r8, lsr #7
    */
}

/**
 * Symbol: CBufferSegment::Put(int)
 * Address: 000474c8
 */
int		CBufferSegment::Put(int dataByte) {
    /*
         474c8:	e2803014 	add	r3, r0, #20	; 0x14
         474cc:	e893000c 	ldmia	r3, {r2, r3}
         474d0:	e1520003 	cmp	r2, r3
         474d4:	23e00000 	mvncs	r0, #0	; 0x0
         474d8:	21a0f00e 	movcs	pc, lr
         474dc:	e20110ff 	and	r1, r1, #255	; 0xff
         474e0:	e4c21001 	strb	r1, [r2], #1
         474e4:	e5a02014 	str	r2, [r0, #20]!	; fField20
         474e8:	e1a00001 	mov	r0, r1
         474ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferSegment::Putn(unsigned char const *, long)
 * Address: 000474f0
 */
Size	CBufferSegment::Putn(const UByte* p, Size n) {
    /*
         474f0:	e1a0c00d 	mov	ip, sp
         474f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         474f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         474fc:	e1a05000 	mov	r5, r0
         47500:	e1a04002 	mov	r4, r2
         47504:	e3520000 	cmp	r2, #0	; 0x0
         47508:	da00000e 	ble	47548 <CBufferSegment::Putn(unsigned char const *, long)+0x58>
         4750c:	e5950018 	ldr	r0, [r5, #24]	; fField24
         47510:	e5953014 	ldr	r3, [r5, #20]	; fField20
         47514:	e0400003 	sub	r0, r0, r3
         47518:	e1540000 	cmp	r4, r0
         4751c:	b1a00004 	movlt	r0, r4
         47520:	e1a04000 	mov	r4, r0
         47524:	e3500000 	cmp	r0, #0	; 0x0
         47528:	da000006 	ble	47548 <CBufferSegment::Putn(unsigned char const *, long)+0x58>
         4752c:	e1a02004 	mov	r2, r4
         47530:	e1a00001 	mov	r0, r1
         47534:	e1a01003 	mov	r1, r3
         47538:	eb6e5e85 	bl	1bdef54 <$BlockMove>
         4753c:	e5950014 	ldr	r0, [r5, #20]	; fField20
         47540:	e0800004 	add	r0, r0, r4
         47544:	e5a50014 	str	r0, [r5, #20]!	; fField20
         47548:	e1a00004 	mov	r0, r4
         4754c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferSegment::CopyIn(unsigned char const *, long &)
 * Address: 00047550
 */
int		CBufferSegment::CopyIn(const UByte* p, Size& n) {
    /*
         47550:	e1a0c00d 	mov	ip, sp
         47554:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         47558:	e24cb004 	sub	fp, ip, #4	; 0x4
         4755c:	e1a04000 	mov	r4, r0
         47560:	e1a05002 	mov	r5, r2
         47564:	e3a06000 	mov	r6, #0	; 0x0
         47568:	e5922000 	ldr	r2, [r2]
         4756c:	e3520000 	cmp	r2, #0	; 0x0
         47570:	da00000b 	ble	475a4 <CBufferSegment::CopyIn(unsigned char const *, long &)+0x54>
         47574:	e1a00004 	mov	r0, r4
         47578:	e5943000 	ldr	r3, [r4]
         4757c:	e1a0e00f 	mov	lr, pc
         47580:	e283f020 	add	pc, r3, #32	; 0x20
         47584:	e5951000 	ldr	r1, [r5]
         47588:	e0410000 	sub	r0, r1, r0
         4758c:	e5850000 	str	r0, [r5]
         47590:	e2844010 	add	r4, r4, #16	; 0x10
         47594:	e9b40003 	ldmib	r4!, {r0, r1}
         47598:	e1300001 	teq	r0, r1
         4759c:	03e00000 	mvneq	r0, #0	; 0x0
         475a0:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         475a4:	e1a00006 	mov	r0, r6
         475a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferSegment::Reset(void)
 * Address: 000475ac
 */
void	CBufferSegment::Reset(void) {
    /*
         475ac:	e5901004 	ldr	r1, [r0, #4]	; CBufferSegment
         475b0:	e5801014 	str	r1, [r0, #20]	; fField20
         475b4:	e5801010 	str	r1, [r0, #16]	; fField16
         475b8:	e5901008 	ldr	r1, [r0, #8]	; CBufferSegment
         475bc:	e5a01018 	str	r1, [r0, #24]!	; fField24
         475c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferSegment::Hide(long, int)
 * Address: 000475c4
 */
Long	CBufferSegment::Hide(Long count, int dir) {
    /*
         475c4:	e3310000 	teq	r1, #0	; 0x0
         475c8:	03a00000 	moveq	r0, #0	; 0x0
         475cc:	01a0f00e 	moveq	pc, lr
         475d0:	e3720001 	cmn	r2, #1	; 0x1
         475d4:	0a000011 	beq	47620 <CBufferSegment::Hide(long, int)+0x5c>
         475d8:	e3320001 	teq	r2, #1	; 0x1
         475dc:	1a000020 	bne	47664 <CBufferSegment::Hide(long, int)+0xa0>
         475e0:	e5902018 	ldr	r2, [r0, #24]	; fField24
         475e4:	e0422001 	sub	r2, r2, r1
         475e8:	e5802018 	str	r2, [r0, #24]	; fField24
         475ec:	e5903004 	ldr	r3, [r0, #4]	; CBufferSegment
         475f0:	e1520003 	cmp	r2, r3
         475f4:	30432002 	subcc	r2, r3, r2
         475f8:	30411002 	subcc	r1, r1, r2
         475fc:	3a000004 	bcc	47614 <CBufferSegment::Hide(long, int)+0x50>
         47600:	e5903008 	ldr	r3, [r0, #8]	; CBufferSegment
         47604:	e1520003 	cmp	r2, r3
         47608:	9a000002 	bls	47618 <CBufferSegment::Hide(long, int)+0x54>
         4760c:	e0422003 	sub	r2, r2, r3
         47610:	e0821001 	add	r1, r2, r1
         47614:	e5803018 	str	r3, [r0, #24]	; fField24
         47618:	e5902018 	ldr	r2, [r0, #24]	; fField24
         4761c:	ea00000e 	b	4765c <CBufferSegment::Hide(long, int)+0x98>
         47620:	e5902010 	ldr	r2, [r0, #16]	; fField16
         47624:	e0822001 	add	r2, r2, r1
         47628:	e5802010 	str	r2, [r0, #16]	; fField16
         4762c:	e5903004 	ldr	r3, [r0, #4]	; CBufferSegment
         47630:	e1520003 	cmp	r2, r3
         47634:	30432002 	subcc	r2, r3, r2
         47638:	30821001 	addcc	r1, r2, r1
         4763c:	3a000004 	bcc	47654 <CBufferSegment::Hide(long, int)+0x90>
         47640:	e5903008 	ldr	r3, [r0, #8]	; CBufferSegment
         47644:	e1520003 	cmp	r2, r3
         47648:	9a000002 	bls	47658 <CBufferSegment::Hide(long, int)+0x94>
         4764c:	e0422003 	sub	r2, r2, r3
         47650:	e0411002 	sub	r1, r1, r2
         47654:	e5803010 	str	r3, [r0, #16]	; fField16
         47658:	e5902010 	ldr	r2, [r0, #16]	; fField16
         4765c:	e5a02014 	str	r2, [r0, #20]!	; fField20
         47660:	ea000000 	b	47668 <CBufferSegment::Hide(long, int)+0xa4>
         47664:	e3a01000 	mov	r1, #0	; 0x0
         47668:	e1a00001 	mov	r0, r1
         4766c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferSegment::Seek(long, int)
 * Address: 00047670
 */
Size	CBufferSegment::Seek(Long off, int dir) {
    /*
         47670:	e3310000 	teq	r1, #0	; 0x0
         47674:	e5903010 	ldr	r3, [r0, #16]	; fField16
         47678:	1a000006 	bne	47698 <CBufferSegment::Seek(long, int)+0x28>
         4767c:	e3720001 	cmn	r2, #1	; 0x1
         47680:	05803014 	streq	r3, [r0, #20]	; fField20
         47684:	0a000015 	beq	476e0 <CBufferSegment::Seek(long, int)+0x70>
         47688:	e3320001 	teq	r2, #1	; 0x1
         4768c:	05901018 	ldreq	r1, [r0, #24]	; fField24
         47690:	0a000011 	beq	476dc <CBufferSegment::Seek(long, int)+0x6c>
         47694:	ea000011 	b	476e0 <CBufferSegment::Seek(long, int)+0x70>
         47698:	e3720001 	cmn	r2, #1	; 0x1
         4769c:	00831001 	addeq	r1, r3, r1
         476a0:	0a000007 	beq	476c4 <CBufferSegment::Seek(long, int)+0x54>
         476a4:	e3320000 	teq	r2, #0	; 0x0
         476a8:	05902014 	ldreq	r2, [r0, #20]	; fField20
         476ac:	00821001 	addeq	r1, r2, r1
         476b0:	0a000003 	beq	476c4 <CBufferSegment::Seek(long, int)+0x54>
         476b4:	e3320001 	teq	r2, #1	; 0x1
         476b8:	05902018 	ldreq	r2, [r0, #24]	; fField24
         476bc:	00421001 	subeq	r1, r2, r1
         476c0:	15901014 	ldrne	r1, [r0, #20]	; fField20
         476c4:	e1a02003 	mov	r2, r3
         476c8:	e1530001 	cmp	r3, r1
         476cc:	e590c018 	ldr	ip, [r0, #24]	; fField24
         476d0:	81a01002 	movhi	r1, r2
         476d4:	e151000c 	cmp	r1, ip
         476d8:	21a0100c 	movcs	r1, ip
         476dc:	e5801014 	str	r1, [r0, #20]	; fField20
         476e0:	e5900014 	ldr	r0, [r0, #20]	; fField20
         476e4:	e0400003 	sub	r0, r0, r3
         476e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferSegment::Position( const(void))
 * Address: 000476ec
 */
Size	CBufferSegment::Position(void) const {
    /*
         476ec:	e5901014 	ldr	r1, [r0, #20]	; fField20
         476f0:	e3310000 	teq	r1, #0	; 0x0
         476f4:	03a00000 	moveq	r0, #0	; 0x0
         476f8:	15900010 	ldrne	r0, [r0, #16]	; fField16
         476fc:	10410000 	subne	r0, r1, r0
         47700:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferSegment::GetSize( const(void))
 * Address: 00047704
 */
Size	CBufferSegment::GetSize(void) const {
    /*
         47704:	e5901018 	ldr	r1, [r0, #24]	; fField24
         47708:	e5900010 	ldr	r0, [r0, #16]	; fField16
         4770c:	e0410000 	sub	r0, r1, r0
         47710:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferSegment::AtEOF( const(void))
 * Address: 00047714
 */
Boolean	CBufferSegment::AtEOF(void) const {
    /*
         47714:	e5901014 	ldr	r1, [r0, #20]	; fField20
         47718:	e5900018 	ldr	r0, [r0, #24]	; fField24
         4771c:	e1310000 	teq	r1, r0
         47720:	13a00000 	movne	r0, #0	; 0x0
         47724:	03a00001 	moveq	r0, #1	; 0x1
         47728:	e20000ff 	and	r0, r0, #255	; 0xff
         4772c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferSegment::RestoreShared(unsigned long)
 * Address: 00047730
 */
CBufferSegment::RestoreShared(unsigned long) {
    /*
         47730:	e1a0c00d 	mov	ip, sp
         47734:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         47738:	e24cb004 	sub	fp, ip, #4	; 0x4
         4773c:	e3a02000 	mov	r2, #0	; 0x0
         47740:	e5d03025 	ldrb	r3, [r0, #37]	; fField37
         47744:	e3330000 	teq	r3, #0	; 0x0
         47748:	0a000005 	beq	47764 <CBufferSegment::RestoreShared(unsigned long)+0x34>
         4774c:	e2813002 	add	r3, r1, #2	; 0x2
         47750:	e5b01004 	ldr	r1, [r0, #4]!	; CBufferSegment
         47754:	e5b02008 	ldr	r2, [r0, #8]!	; CBufferSegment
         47758:	e2800010 	add	r0, r0, #16	; 0x10
         4775c:	eb6e4d82 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
         47760:	e1a02000 	mov	r2, r0
         47764:	e1a00002 	mov	r0, r2
         47768:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CBufferSegment::Init(long)
 * Address: 0004776c
 */
NewtonErr	CBufferSegment::Init(Size len) {
    /*
         4776c:	e1a0c00d 	mov	ip, sp
         47770:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         47774:	e24cb004 	sub	fp, ip, #4	; 0x4
         47778:	e1a04000 	mov	r4, r0
         4777c:	e1a05001 	mov	r5, r1
         47780:	e5900004 	ldr	r0, [r0, #4]	; CBufferSegment
         47784:	e3300000 	teq	r0, #0	; 0x0
         47788:	15d41024 	ldrneb	r1, [r4, #36]	; fField36
         4778c:	13310000 	teqne	r1, #0	; 0x0
         47790:	1b6e6647 	blne	1be10b4 <$DisposPtr>
         47794:	e1a00005 	mov	r0, r5
         47798:	eb6e6a68 	bl	1be2140 <$NewPtr>
         4779c:	e5840004 	str	r0, [r4, #4]	; CBufferSegment
         477a0:	e3300000 	teq	r0, #0	; 0x0
         477a4:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         477a8:	0a6e6a5c 	beq	1be2120 <$MemError>
         477ac:	e584500c 	str	r5, [r4, #12]	; fField12
         477b0:	e0801005 	add	r1, r0, r5
         477b4:	e5840014 	str	r0, [r4, #20]	; fField20
         477b8:	e5841008 	str	r1, [r4, #8]	; CBufferSegment
         477bc:	e5840010 	str	r0, [r4, #16]	; fField16
         477c0:	e3a00001 	mov	r0, #1	; 0x1
         477c4:	e5841018 	str	r1, [r4, #24]	; fField24
         477c8:	e5c40024 	strb	r0, [r4, #36]	; fField36
         477cc:	e1a00004 	mov	r0, r4
         477d0:	e3a01000 	mov	r1, #0	; 0x0
         477d4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         477d8:	ea6d9fea 	b	1baf788 <CBufferSegment::$RestoreShared(unsigned long)>
    */
}

/**
 * Symbol: CBufferSegment::MakeShared(unsigned long)
 * Address: 000477dc
 */
CBufferSegment::MakeShared(unsigned long) {
    /*
         477dc:	e1a0c00d 	mov	ip, sp
         477e0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         477e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         477e8:	e1a04000 	mov	r4, r0
         477ec:	e1a05001 	mov	r5, r1
         477f0:	e3a00000 	mov	r0, #0	; 0x0
         477f4:	e5d41025 	ldrb	r1, [r4, #37]	; fField37
         477f8:	e3310000 	teq	r1, #0	; 0x0
         477fc:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         47800:	e284001c 	add	r0, r4, #28	; 0x1c
         47804:	e1a06000 	mov	r6, r0
         47808:	eb6e349b 	bl	1bd4a7c <TUSharedMem::$Init(void)>
         4780c:	e3300000 	teq	r0, #0	; 0x0
         47810:	1a000004 	bne	47828 <CBufferSegment::MakeShared(unsigned long)+0x4c>
         47814:	e2853002 	add	r3, r5, #2	; 0x2
         47818:	e1a00006 	mov	r0, r6
         4781c:	e5941004 	ldr	r1, [r4, #4]	; CBufferSegment
         47820:	e594200c 	ldr	r2, [r4, #12]	; fField12
         47824:	eb6e4d50 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
         47828:	e3300000 	teq	r0, #0	; 0x0
         4782c:	03a01001 	moveq	r1, #1	; 0x1
         47830:	05c41025 	streqb	r1, [r4, #37]	; fField37
         47834:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferSegment::UnShare(void)
 * Address: 00047838
 */
CBufferSegment::UnShare(void) {
    /*
         47838:	e1a0c00d 	mov	ip, sp
         4783c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         47840:	e24cb004 	sub	fp, ip, #4	; 0x4
         47844:	e1a04000 	mov	r4, r0
         47848:	e3a05000 	mov	r5, #0	; 0x0
         4784c:	e5d00025 	ldrb	r0, [r0, #37]	; fField37
         47850:	e3300000 	teq	r0, #0	; 0x0
         47854:	0a000003 	beq	47868 <CBufferSegment::UnShare(void)+0x30>
         47858:	e284001c 	add	r0, r4, #28	; 0x1c
         4785c:	eb6e280f 	bl	1bd18a0 <TUObject::$DestroyObject(void)>
         47860:	e3a00000 	mov	r0, #0	; 0x0
         47864:	e5c40025 	strb	r0, [r4, #37]	; fField37
         47868:	e1a00005 	mov	r0, r5
         4786c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferSegment::GetPhysicalSize(void)
 * Address: 00047870
 */
CBufferSegment::GetPhysicalSize(void) {
    /*
         47870:	e590000c 	ldr	r0, [r0, #12]	; fField12
         47874:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferSegment::SetPhysicalSize(long)
 * Address: 00047878
 */
CBufferSegment::SetPhysicalSize(long) {
    /*
         47878:	e1a0c00d 	mov	ip, sp
         4787c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         47880:	e24cb004 	sub	fp, ip, #4	; 0x4
         47884:	e1a04000 	mov	r4, r0
         47888:	e1a05001 	mov	r5, r1
         4788c:	e5901014 	ldr	r1, [r0, #20]	; fField20
         47890:	e5900004 	ldr	r0, [r0, #4]	; CBufferSegment
         47894:	e0417000 	sub	r7, r1, r0
         47898:	e1a01005 	mov	r1, r5
         4789c:	eb6e6a2f 	bl	1be2160 <$ReallocPtr>
         478a0:	e1a06000 	mov	r6, r0
         478a4:	eb6e6a1d 	bl	1be2120 <$MemError>
         478a8:	e3360000 	teq	r6, #0	; 0x0
         478ac:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         478b0:	e3300000 	teq	r0, #0	; 0x0
         478b4:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         478b8:	e584500c 	str	r5, [r4, #12]	; fField12
         478bc:	e5846004 	str	r6, [r4, #4]	; CBufferSegment
         478c0:	e0860005 	add	r0, r6, r5
         478c4:	e5840008 	str	r0, [r4, #8]	; CBufferSegment
         478c8:	e5846010 	str	r6, [r4, #16]	; fField16
         478cc:	e5840018 	str	r0, [r4, #24]	; fField24
         478d0:	e0860007 	add	r0, r6, r7
         478d4:	e5840014 	str	r0, [r4, #20]	; fField20
         478d8:	e1a00004 	mov	r0, r4
         478dc:	e3a01000 	mov	r1, #0	; 0x0
         478e0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         478e4:	ea6d9fa7 	b	1baf788 <CBufferSegment::$RestoreShared(unsigned long)>
    */
}

/**
 * Symbol: CBufferSegment::Init(void *, long, unsigned char, long, long)
 * Address: 000478e8
 */
NewtonErr	CBufferSegment::Init(Size len) {
    /*
         478e8:	e1a0c00d 	mov	ip, sp
         478ec:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         478f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         478f4:	e1a04000 	mov	r4, r0
         478f8:	e1a06001 	mov	r6, r1
         478fc:	e1a05002 	mov	r5, r2
         47900:	e20370ff 	and	r7, r3, #255	; 0xff
         47904:	e59b8008 	ldr	r8, [fp, #8]	; CBufferSegment
         47908:	e59b9004 	ldr	r9, [fp, #4]	; CBufferSegment
         4790c:	e5d00024 	ldrb	r0, [r0, #36]	; fField36
         47910:	e3300000 	teq	r0, #0	; 0x0
         47914:	15940004 	ldrne	r0, [r4, #4]	; CBufferSegment
         47918:	13300000 	teqne	r0, #0	; 0x0
         4791c:	1b6e65e4 	blne	1be10b4 <$DisposPtr>
         47920:	e584500c 	str	r5, [r4, #12]	; fField12
         47924:	e5846004 	str	r6, [r4, #4]	; CBufferSegment
         47928:	e0860005 	add	r0, r6, r5
         4792c:	e0861009 	add	r1, r6, r9
         47930:	e5840008 	str	r0, [r4, #8]	; CBufferSegment
         47934:	e5841014 	str	r1, [r4, #20]	; fField20
         47938:	e3580000 	cmp	r8, #0	; 0x0
         4793c:	e5841010 	str	r1, [r4, #16]	; fField16
         47940:	ba000002 	blt	47950 <CBufferSegment::Init(void *, long, unsigned char, long, long)+0x68>
         47944:	e0811008 	add	r1, r1, r8
         47948:	e1500001 	cmp	r0, r1
         4794c:	21a00001 	movcs	r0, r1
         47950:	e5840018 	str	r0, [r4, #24]	; fField24
         47954:	e5c47024 	strb	r7, [r4, #36]	; fField36
         47958:	e1a00004 	mov	r0, r4
         4795c:	e3a01000 	mov	r1, #0	; 0x0
         47960:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         47964:	ea6d9f87 	b	1baf788 <CBufferSegment::$RestoreShared(unsigned long)>
    */
}

/**
 * Symbol: CBufferSegment::Peek(void)
 * Address: 00047968
 */
int		CBufferSegment::Peek(void) {
    /*
         47968:	e5901014 	ldr	r1, [r0, #20]	; fField20
         4796c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         47970:	e1510000 	cmp	r1, r0
         47974:	35d10000 	ldrccb	r0, [r1]
         47978:	23e00000 	mvncs	r0, #0	; 0x0
         4797c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferSegment::Next(void)
 * Address: 00047980
 */
int		CBufferSegment::Next(void) {
    /*
         47980:	e2802014 	add	r2, r0, #20	; 0x14
         47984:	e8920006 	ldmia	r2, {r1, r2}
         47988:	e1510002 	cmp	r1, r2
         4798c:	32811001 	addcc	r1, r1, #1	; 0x1
         47990:	35a01014 	strcc	r1, [r0, #20]!	; fField20
         47994:	35d10000 	ldrccb	r0, [r1]
         47998:	23e00000 	mvncs	r0, #0	; 0x0
         4799c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferSegment::Skip(void)
 * Address: 000479a0
 */
int		CBufferSegment::Skip(void) {
    /*
         479a0:	e2802014 	add	r2, r0, #20	; 0x14
         479a4:	e8920006 	ldmia	r2, {r1, r2}
         479a8:	e1510002 	cmp	r1, r2
         479ac:	32812001 	addcc	r2, r1, #1	; 0x1
         479b0:	35a02014 	strcc	r2, [r0, #20]!	; fField20
         479b4:	31a00001 	movcc	r0, r1
         479b8:	23e00000 	mvncs	r0, #0	; 0x0
         479bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferSegment::Get(void)
 * Address: 000479c0
 */
int		CBufferSegment::Get(void) {
    /*
         479c0:	e2802014 	add	r2, r0, #20	; 0x14
         479c4:	e8920006 	ldmia	r2, {r1, r2}
         479c8:	e1510002 	cmp	r1, r2
         479cc:	23e00000 	mvncs	r0, #0	; 0x0
         479d0:	21a0f00e 	movcs	pc, lr
         479d4:	e4d12001 	ldrb	r2, [r1], #1
         479d8:	e5a01014 	str	r1, [r0, #20]!	; fField20
         479dc:	e1a00002 	mov	r0, r2
         479e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CBufferSegment::Getn(unsigned char *, long)
 * Address: 000479e4
 */
Size	CBufferSegment::Getn(UByte* p, Size n) {
    /*
         479e4:	e1a0c00d 	mov	ip, sp
         479e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         479ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         479f0:	e1a05000 	mov	r5, r0
         479f4:	e1a04002 	mov	r4, r2
         479f8:	e3520000 	cmp	r2, #0	; 0x0
         479fc:	da00000c 	ble	47a34 <CBufferSegment::Getn(unsigned char *, long)+0x50>
         47a00:	e2852014 	add	r2, r5, #20	; 0x14
         47a04:	e8920005 	ldmia	r2, {r0, r2}
         47a08:	e0422000 	sub	r2, r2, r0
         47a0c:	e1540002 	cmp	r4, r2
         47a10:	b1a02004 	movlt	r2, r4
         47a14:	e1a04002 	mov	r4, r2
         47a18:	e3520000 	cmp	r2, #0	; 0x0
         47a1c:	da000004 	ble	47a34 <CBufferSegment::Getn(unsigned char *, long)+0x50>
         47a20:	e1a02004 	mov	r2, r4
         47a24:	eb6e5d4a 	bl	1bdef54 <$BlockMove>
         47a28:	e5950014 	ldr	r0, [r5, #20]	; fField20
         47a2c:	e0800004 	add	r0, r0, r4
         47a30:	e5a50014 	str	r0, [r5, #20]!	; fField20
         47a34:	e1a00004 	mov	r0, r4
         47a38:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferSegment::CopyOut(unsigned char *, long &)
 * Address: 00047a3c
 */
int		CBufferSegment::CopyOut(UByte* p, Size& n) {
    /*
         47a3c:	e1a0c00d 	mov	ip, sp
         47a40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         47a44:	e24cb004 	sub	fp, ip, #4	; 0x4
         47a48:	e1a04000 	mov	r4, r0
         47a4c:	e1a05002 	mov	r5, r2
         47a50:	e3a06000 	mov	r6, #0	; 0x0
         47a54:	e5922000 	ldr	r2, [r2]
         47a58:	e3520000 	cmp	r2, #0	; 0x0
         47a5c:	da00000a 	ble	47a8c <CBufferSegment::CopyOut(unsigned char *, long &)+0x50>
         47a60:	e1a00004 	mov	r0, r4
         47a64:	e5943000 	ldr	r3, [r4]
         47a68:	e1a0e00f 	mov	lr, pc
         47a6c:	e283f014 	add	pc, r3, #20	; 0x14
         47a70:	e5951000 	ldr	r1, [r5]
         47a74:	e0410000 	sub	r0, r1, r0
         47a78:	e5850000 	str	r0, [r5]
         47a7c:	e2844010 	add	r4, r4, #16	; 0x10
         47a80:	e9b40003 	ldmib	r4!, {r0, r1}
         47a84:	e1300001 	teq	r0, r1
         47a88:	03e06000 	mvneq	r6, #0	; 0x0
         47a8c:	e1a00006 	mov	r0, r6
         47a90:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

