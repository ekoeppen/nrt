#include "include/TRect.h"

/**
 * Symbol: TRect::Encloses( const(TRect const &))
 * Address: 00197564
 */
TRect::Encloses( const(TRect const &)) {
    /*
        197564:	e5913000 	ldr	r3, [r1]
        197568:	e1a03843 	mov	r3, r3, asr #16
        19756c:	e5902000 	ldr	r2, [r0]
        197570:	e1530842 	cmp	r3, r2, asr #16
        197574:	ba00000f 	blt	1975b8 <TRect::Encloses( const(TRect const &))+0x54>
        197578:	e5912004 	ldr	r2, [r1, #4]	; fField4
        19757c:	e1a02842 	mov	r2, r2, asr #16
        197580:	e5903004 	ldr	r3, [r0, #4]	; fField4
        197584:	e1520843 	cmp	r2, r3, asr #16
        197588:	ca00000a 	bgt	1975b8 <TRect::Encloses( const(TRect const &))+0x54>
        19758c:	e5912002 	ldr	r2, [r1, #2]	; fField2
        197590:	e1a02842 	mov	r2, r2, asr #16
        197594:	e5903002 	ldr	r3, [r0, #2]	; fField2
        197598:	e1520843 	cmp	r2, r3, asr #16
        19759c:	ba000005 	blt	1975b8 <TRect::Encloses( const(TRect const &))+0x54>
        1975a0:	e5911006 	ldr	r1, [r1, #6]	; fField6
        1975a4:	e1a01841 	mov	r1, r1, asr #16
        1975a8:	e5900006 	ldr	r0, [r0, #6]	; fField6
        1975ac:	e1510840 	cmp	r1, r0, asr #16
        1975b0:	d3a00001 	movle	r0, #1	; 0x1
        1975b4:	d1a0f00e 	movle	pc, lr
        1975b8:	e3a00000 	mov	r0, #0	; 0x0
        1975bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRect::Union(TRect const &)
 * Address: 001975c0
 */
TRect::Union(TRect const &) {
    /*
        1975c0:	e5902000 	ldr	r2, [r0]
        1975c4:	e1a02842 	mov	r2, r2, asr #16
        1975c8:	e3720902 	cmn	r2, #32768	; 0x8000
        1975cc:	08911008 	ldmeqia	r1, {r3, ip}
        1975d0:	08801008 	stmeqia	r0, {r3, ip}
        1975d4:	01a0f00e 	moveq	pc, lr
        1975d8:	e1a02000 	mov	r2, r0
        1975dc:	e1a03000 	mov	r3, r0
        1975e0:	e1a00001 	mov	r0, r1
        1975e4:	e1a01003 	mov	r1, r3
        1975e8:	ea66f925 	b	1b55a84 <$UnionRect__FP4RectN21>
    */
}

/**
 * Symbol: TRect::Union(TPoint)
 * Address: 001975ec
 */
TRect::Union(TPoint) {
    /*
        1975ec:	e1a0c00d 	mov	ip, sp
        1975f0:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
        1975f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1975f8:	e5901000 	ldr	r1, [r0]
        1975fc:	e1a01841 	mov	r1, r1, asr #16
        197600:	e3710902 	cmn	r1, #32768	; 0x8000
        197604:	1a000004 	bne	19761c <TRect::Union(TPoint)+0x30>
        197608:	e51b2010 	ldr	r2, [fp, -#16]
        19760c:	e4802004 	str	r2, [r0], #4	; fField4
        197610:	e51b1010 	ldr	r1, [fp, -#16]
        197614:	e5801000 	str	r1, [r0]
        197618:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        19761c:	e51b300e 	ldr	r3, [fp, -#14]
        197620:	e1a03843 	mov	r3, r3, asr #16
        197624:	e5902002 	ldr	r2, [r0, #2]	; fField2
        197628:	e1530842 	cmp	r3, r2, asr #16
        19762c:	ca000004 	bgt	197644 <TRect::Union(TPoint)+0x58>
        197630:	e51b2010 	ldr	r2, [fp, -#16]
        197634:	e5c02003 	strb	r2, [r0, #3]	; fField3
        197638:	e1a02442 	mov	r2, r2, asr #8
        19763c:	e5c02002 	strb	r2, [r0, #2]	; fField2
        197640:	ea000008 	b	197668 <TRect::Union(TPoint)+0x7c>
        197644:	e51b200e 	ldr	r2, [fp, -#14]
        197648:	e1a02842 	mov	r2, r2, asr #16
        19764c:	e5903006 	ldr	r3, [r0, #6]	; fField6
        197650:	e1520843 	cmp	r2, r3, asr #16
        197654:	ba000003 	blt	197668 <TRect::Union(TPoint)+0x7c>
        197658:	e51b2010 	ldr	r2, [fp, -#16]
        19765c:	e5c02007 	strb	r2, [r0, #7]	; fField7
        197660:	e1a02442 	mov	r2, r2, asr #8
        197664:	e5c02006 	strb	r2, [r0, #6]	; fField6
        197668:	e51b2010 	ldr	r2, [fp, -#16]
        19766c:	e1510842 	cmp	r1, r2, asr #16
        197670:	ba000004 	blt	197688 <TRect::Union(TPoint)+0x9c>
        197674:	e51b100e 	ldr	r1, [fp, -#14]
        197678:	e5c01001 	strb	r1, [r0, #1]	; fField1
        19767c:	e1a01441 	mov	r1, r1, asr #8
        197680:	e5c01000 	strb	r1, [r0]
        197684:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        197688:	e5901004 	ldr	r1, [r0, #4]	; fField4
        19768c:	e1a01841 	mov	r1, r1, asr #16
        197690:	e51b2010 	ldr	r2, [fp, -#16]
        197694:	e1510842 	cmp	r1, r2, asr #16
        197698:	c91ba800 	ldmgtdb	fp, {fp, sp, pc}
        19769c:	e51b100e 	ldr	r1, [fp, -#14]
        1976a0:	e5c01005 	strb	r1, [r0, #5]	; fField5
        1976a4:	e1a01441 	mov	r1, r1, asr #8
        1976a8:	e5c01004 	strb	r1, [r0, #4]	; fField4
        1976ac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TRect::Intersects( const(TRect const &))
 * Address: 001976b0
 */
TRect::Intersects( const(TRect const &)) {
    /*
        1976b0:	e1a0c00d 	mov	ip, sp
        1976b4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1976b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1976bc:	e1a03001 	mov	r3, r1
        1976c0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1976c4:	e1a0200d 	mov	r2, sp
        1976c8:	e1a01000 	mov	r1, r0
        1976cc:	e1a00003 	mov	r0, r3
        1976d0:	eb66f0bd 	bl	1b539cc <$SectRect__FP4RectN21>
        1976d4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TRect::CoveredBy( const(TRect const &))
 * Address: 001976d8
 */
TRect::CoveredBy( const(TRect const &)) {
    /*
        1976d8:	e1a0c00d 	mov	ip, sp
        1976dc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1976e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1976e4:	e24dd010 	sub	sp, sp, #16	; 0x10
        1976e8:	e28d2008 	add	r2, sp, #8	; 0x8
        1976ec:	e8901008 	ldmia	r0, {r3, ip}
        1976f0:	e8821008 	stmia	r2, {r3, ip}
        1976f4:	e8911008 	ldmia	r1, {r3, ip}
        1976f8:	e88d1008 	stmia	sp, {r3, ip}
        1976fc:	e59d100a 	ldr	r1, [sp, #10]
        197700:	e1a01841 	mov	r1, r1, asr #16
        197704:	e59d000e 	ldr	r0, [sp, #14]
        197708:	e1310840 	teq	r1, r0, asr #16
        19770c:	1a000004 	bne	197724 <TRect::CoveredBy( const(TRect const &))+0x4c>
        197710:	e59d000c 	ldr	r0, [sp, #12]
        197714:	e2800001 	add	r0, r0, #1	; 0x1
        197718:	e5cd000f 	strb	r0, [sp, #15]
        19771c:	e1a00440 	mov	r0, r0, asr #8
        197720:	e5cd000e 	strb	r0, [sp, #14]
        197724:	e59d000c 	ldr	r0, [sp, #12]
        197728:	e1a00840 	mov	r0, r0, asr #16
        19772c:	e59d1008 	ldr	r1, [sp, #8]
        197730:	e1300841 	teq	r0, r1, asr #16
        197734:	1a000004 	bne	19774c <TRect::CoveredBy( const(TRect const &))+0x74>
        197738:	e59d000e 	ldr	r0, [sp, #14]
        19773c:	e2800001 	add	r0, r0, #1	; 0x1
        197740:	e5cd000d 	strb	r0, [sp, #13]
        197744:	e1a00440 	mov	r0, r0, asr #8
        197748:	e5cd000c 	strb	r0, [sp, #12]
        19774c:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        197750:	e1a00840 	mov	r0, r0, asr #16
        197754:	e59d1006 	ldr	r1, [sp, #6]	; fField6
        197758:	e1300841 	teq	r0, r1, asr #16
        19775c:	1a000004 	bne	197774 <TRect::CoveredBy( const(TRect const &))+0x9c>
        197760:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        197764:	e2800001 	add	r0, r0, #1	; 0x1
        197768:	e5cd0007 	strb	r0, [sp, #7]	; fField7
        19776c:	e1a00440 	mov	r0, r0, asr #8
        197770:	e5cd0006 	strb	r0, [sp, #6]	; fField6
        197774:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        197778:	e1a01841 	mov	r1, r1, asr #16
        19777c:	e59d0000 	ldr	r0, [sp]
        197780:	e1310840 	teq	r1, r0, asr #16
        197784:	1a000004 	bne	19779c <TRect::CoveredBy( const(TRect const &))+0xc4>
        197788:	e59d0006 	ldr	r0, [sp, #6]	; fField6
        19778c:	e2800001 	add	r0, r0, #1	; 0x1
        197790:	e5cd0005 	strb	r0, [sp, #5]	; fField5
        197794:	e1a00440 	mov	r0, r0, asr #8
        197798:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        19779c:	e1a0200d 	mov	r2, sp
        1977a0:	e1a0100d 	mov	r1, sp
        1977a4:	e28d0008 	add	r0, sp, #8	; 0x8
        1977a8:	eb66f087 	bl	1b539cc <$SectRect__FP4RectN21>
        1977ac:	e3300000 	teq	r0, #0	; 0x0
        1977b0:	0a000019 	beq	19781c <TRect::CoveredBy( const(TRect const &))+0x144>
        1977b4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1977b8:	e59d1000 	ldr	r1, [sp]
        1977bc:	e0400001 	sub	r0, r0, r1
        1977c0:	e1a00800 	mov	r0, r0, lsl #16
        1977c4:	e1a00840 	mov	r0, r0, asr #16
        1977c8:	e59d1006 	ldr	r1, [sp, #6]	; fField6
        1977cc:	e59d2002 	ldr	r2, [sp, #2]	; fField2
        1977d0:	e0411002 	sub	r1, r1, r2
        1977d4:	e1a01801 	mov	r1, r1, lsl #16
        1977d8:	e1a01841 	mov	r1, r1, asr #16
        1977dc:	e0000091 	mul	r0, r1, r0
        1977e0:	e0801180 	add	r1, r0, r0, lsl #3
        1977e4:	e0811200 	add	r1, r1, r0, lsl #4
        1977e8:	e1a01101 	mov	r1, r1, lsl #2
        1977ec:	e59d000c 	ldr	r0, [sp, #12]
        1977f0:	e59d2008 	ldr	r2, [sp, #8]
        1977f4:	e0400002 	sub	r0, r0, r2
        1977f8:	e1a00800 	mov	r0, r0, lsl #16
        1977fc:	e1a00840 	mov	r0, r0, asr #16
        197800:	e59d200e 	ldr	r2, [sp, #14]
        197804:	e59d300a 	ldr	r3, [sp, #10]
        197808:	e0422003 	sub	r2, r2, r3
        19780c:	e1a02802 	mov	r2, r2, lsl #16
        197810:	e1a02842 	mov	r2, r2, asr #16
        197814:	e0000092 	mul	r0, r2, r0
        197818:	eb686c48 	bl	1bb2940 <$__rt_sdiv>
        19781c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TRect::Flip(void)
 * Address: 00197820
 */
TRect::Flip(void) {
    /*
        197820:	e5901006 	ldr	r1, [r0, #6]	; fField6
        197824:	e1a01841 	mov	r1, r1, asr #16
        197828:	e5902002 	ldr	r2, [r0, #2]	; fField2
        19782c:	e1a02842 	mov	r2, r2, asr #16
        197830:	e1510002 	cmp	r1, r2
        197834:	aa000005 	bge	197850 <TRect::Flip(void)+0x30>
        197838:	e5c02007 	strb	r2, [r0, #7]	; fField7
        19783c:	e1a02442 	mov	r2, r2, asr #8
        197840:	e5c02006 	strb	r2, [r0, #6]	; fField6
        197844:	e5c01003 	strb	r1, [r0, #3]	; fField3
        197848:	e1a01441 	mov	r1, r1, asr #8
        19784c:	e5c01002 	strb	r1, [r0, #2]	; fField2
        197850:	e5902004 	ldr	r2, [r0, #4]	; fField4
        197854:	e1a02842 	mov	r2, r2, asr #16
        197858:	e5901000 	ldr	r1, [r0]
        19785c:	e1a01841 	mov	r1, r1, asr #16
        197860:	e1520001 	cmp	r2, r1
        197864:	a1a0f00e 	movge	pc, lr
        197868:	e5c01005 	strb	r1, [r0, #5]	; fField5
        19786c:	e1a01441 	mov	r1, r1, asr #8
        197870:	e5c01004 	strb	r1, [r0, #4]	; fField4
        197874:	e5c02001 	strb	r2, [r0, #1]	; fField1
        197878:	e1a01442 	mov	r1, r2, asr #8
        19787c:	e5c01000 	strb	r1, [r0]
        197880:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRect::MidPoint( const(void))
 * Address: 00197884
 */
TRect::MidPoint( const(void)) {
    /*
        197884:	e5912002 	ldr	r2, [r1, #2]	; fField2
        197888:	e1a02842 	mov	r2, r2, asr #16
        19788c:	e5913006 	ldr	r3, [r1, #6]	; fField6
        197890:	e0822843 	add	r2, r2, r3, asr #16
        197894:	e0822fa2 	add	r2, r2, r2, lsr #31
        197898:	e1a020c2 	mov	r2, r2, asr #1
        19789c:	e1a02802 	mov	r2, r2, lsl #16
        1978a0:	e1a02842 	mov	r2, r2, asr #16
        1978a4:	e5913004 	ldr	r3, [r1, #4]	; fField4
        1978a8:	e1a03843 	mov	r3, r3, asr #16
        1978ac:	e5911000 	ldr	r1, [r1]
        1978b0:	e0831841 	add	r1, r3, r1, asr #16
        1978b4:	e0811fa1 	add	r1, r1, r1, lsr #31
        1978b8:	e1a010c1 	mov	r1, r1, asr #1
        1978bc:	e1a01801 	mov	r1, r1, lsl #16
        1978c0:	e1a01841 	mov	r1, r1, asr #16
        1978c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1978c8:	e5cd2003 	strb	r2, [sp, #3]	; fField3
        1978cc:	e1a02442 	mov	r2, r2, asr #8
        1978d0:	e5cd2002 	strb	r2, [sp, #2]	; fField2
        1978d4:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        1978d8:	e1a01441 	mov	r1, r1, asr #8
        1978dc:	e5cd1000 	strb	r1, [sp]
        1978e0:	e59d1000 	ldr	r1, [sp]
        1978e4:	e5801000 	str	r1, [r0]
        1978e8:	e28dd004 	add	sp, sp, #4	; 0x4
        1978ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRect::Scale(TTransform const &)
 * Address: 001979bc
 */
TRect::Scale(TTransform const &) {
    /*
        1979bc:	e1a0c00d 	mov	ip, sp
        1979c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1979c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1979c8:	e1a04000 	mov	r4, r0
        1979cc:	e1a05001 	mov	r5, r1
        1979d0:	eb6425b0 	bl	1aa1098 <TPoint::$Scale(TTransform const &)>
        1979d4:	e2840004 	add	r0, r4, #4	; 0x4
        1979d8:	e1a01005 	mov	r1, r5
        1979dc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1979e0:	ea6425ac 	b	1aa1098 <TPoint::$Scale(TTransform const &)>
    */
}

/**
 * Symbol: TRect::Overlaps( const(TRect const &))
 * Address: 001991fc
 */
TRect::Overlaps( const(TRect const &)) {
    /*
        1991fc:	e1a0c00d 	mov	ip, sp
        199200:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        199204:	e24cb004 	sub	fp, ip, #4	; 0x4
        199208:	e24dd010 	sub	sp, sp, #16	; 0x10
        19920c:	e28d2008 	add	r2, sp, #8	; 0x8
        199210:	e8901008 	ldmia	r0, {r3, ip}
        199214:	e8821008 	stmia	r2, {r3, ip}
        199218:	e8911008 	ldmia	r1, {r3, ip}
        19921c:	e88d1008 	stmia	sp, {r3, ip}
        199220:	e59d000a 	ldr	r0, [sp, #10]
        199224:	e1a00840 	mov	r0, r0, asr #16
        199228:	e59d100e 	ldr	r1, [sp, #14]
        19922c:	e1300841 	teq	r0, r1, asr #16
        199230:	1a000004 	bne	199248 <TRect::Overlaps( const(TRect const &))+0x4c>
        199234:	e59d000c 	ldr	r0, [sp, #12]
        199238:	e2800001 	add	r0, r0, #1	; 0x1
        19923c:	e5cd000f 	strb	r0, [sp, #15]
        199240:	e1a00440 	mov	r0, r0, asr #8
        199244:	e5cd000e 	strb	r0, [sp, #14]
        199248:	e59d000c 	ldr	r0, [sp, #12]
        19924c:	e1a00840 	mov	r0, r0, asr #16
        199250:	e59d1008 	ldr	r1, [sp, #8]
        199254:	e1300841 	teq	r0, r1, asr #16
        199258:	1a000004 	bne	199270 <TRect::Overlaps( const(TRect const &))+0x74>
        19925c:	e59d000e 	ldr	r0, [sp, #14]
        199260:	e2800001 	add	r0, r0, #1	; 0x1
        199264:	e5cd000d 	strb	r0, [sp, #13]
        199268:	e1a00440 	mov	r0, r0, asr #8
        19926c:	e5cd000c 	strb	r0, [sp, #12]
        199270:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        199274:	e1a00840 	mov	r0, r0, asr #16
        199278:	e59d1006 	ldr	r1, [sp, #6]	; fField6
        19927c:	e1300841 	teq	r0, r1, asr #16
        199280:	1a000004 	bne	199298 <TRect::Overlaps( const(TRect const &))+0x9c>
        199284:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        199288:	e2800001 	add	r0, r0, #1	; 0x1
        19928c:	e5cd0007 	strb	r0, [sp, #7]	; fField7
        199290:	e1a00440 	mov	r0, r0, asr #8
        199294:	e5cd0006 	strb	r0, [sp, #6]	; fField6
        199298:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        19929c:	e1a00840 	mov	r0, r0, asr #16
        1992a0:	e59d1000 	ldr	r1, [sp]
        1992a4:	e1300841 	teq	r0, r1, asr #16
        1992a8:	1a000004 	bne	1992c0 <TRect::Overlaps( const(TRect const &))+0xc4>
        1992ac:	e59d0006 	ldr	r0, [sp, #6]	; fField6
        1992b0:	e2800001 	add	r0, r0, #1	; 0x1
        1992b4:	e5cd0005 	strb	r0, [sp, #5]	; fField5
        1992b8:	e1a00440 	mov	r0, r0, asr #8
        1992bc:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        1992c0:	e1a0100d 	mov	r1, sp
        1992c4:	e28d0008 	add	r0, sp, #8	; 0x8
        1992c8:	eb640693 	bl	1a9ad1c <TRect::$Intersects( const(TRect const &))>
        1992cc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

