#include "include/TIntrpStack.h"

/**
 * Symbol: TIntrpStack::NewState(void)
 * Address: 001a46f0
 */
TIntrpStack::NewState(void) {
    /*
        1a46f0:	e1a0c00d 	mov	ip, sp
        1a46f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a46f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a46fc:	e1a04000 	mov	r4, r0
        1a4700:	e5900000 	ldr	r0, [r0]
        1a4704:	e3a01002 	mov	r1, #2	; 0x2
        1a4708:	e5801000 	str	r1, [r0]
        1a470c:	e5801004 	str	r1, [r0, #4]	; fField4
        1a4710:	e5801008 	str	r1, [r0, #8]
        1a4714:	e580100c 	str	r1, [r0, #12]
        1a4718:	e5801010 	str	r1, [r0, #16]	; fField16
        1a471c:	e5a01014 	str	r1, [r0, #20]!	; fField20
        1a4720:	e2800004 	add	r0, r0, #4	; 0x4
        1a4724:	e5840000 	str	r0, [r4]
        1a4728:	e2842010 	add	r2, r4, #16	; 0x10
        1a472c:	e8920006 	ldmia	r2, {r1, r2}
        1a4730:	e0522001 	subs	r2, r2, r1
        1a4734:	42822003 	addmi	r2, r2, #3	; 0x3
        1a4738:	e1a02142 	mov	r2, r2, asr #2
        1a473c:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1a4740:	e0500001 	subs	r0, r0, r1
        1a4744:	42800003 	addmi	r0, r0, #3	; 0x3
        1a4748:	e1520140 	cmp	r2, r0, asr #2
        1a474c:	b1a00004 	movlt	r0, r4
        1a4750:	bb62c0b8 	bllt	1a54a38 <TRefStructStack::$Fill(void)>
        1a4754:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1a4758:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1a475c:	e5942000 	ldr	r2, [r4]
        1a4760:	e0521001 	subs	r1, r2, r1
        1a4764:	42811003 	addmi	r1, r1, #3	; 0x3
        1a4768:	e3a02005 	mov	r2, #5	; 0x5
        1a476c:	e0621141 	rsb	r1, r2, r1, asr #2
        1a4770:	e0800101 	add	r0, r0, r1, lsl #2
        1a4774:	e2400004 	sub	r0, r0, #4	; 0x4
        1a4778:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIntrpStack::DupState(void)
 * Address: 001a477c
 */
TIntrpStack::DupState(void) {
    /*
        1a477c:	e1a0c00d 	mov	ip, sp
        1a4780:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a4784:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a4788:	e1a04000 	mov	r4, r0
        1a478c:	e5901000 	ldr	r1, [r0]
        1a4790:	e2410018 	sub	r0, r1, #24	; 0x18
        1a4794:	e5903000 	ldr	r3, [r0]
        1a4798:	e5813000 	str	r3, [r1]
        1a479c:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1a47a0:	e5812004 	str	r2, [r1, #4]	; fField4
        1a47a4:	e5902008 	ldr	r2, [r0, #8]
        1a47a8:	e5812008 	str	r2, [r1, #8]
        1a47ac:	e590200c 	ldr	r2, [r0, #12]
        1a47b0:	e581200c 	str	r2, [r1, #12]
        1a47b4:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1a47b8:	e5812010 	str	r2, [r1, #16]	; fField16
        1a47bc:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1a47c0:	e5810014 	str	r0, [r1, #20]	; fField20
        1a47c4:	e2810018 	add	r0, r1, #24	; 0x18
        1a47c8:	e5840000 	str	r0, [r4]
        1a47cc:	e2842010 	add	r2, r4, #16	; 0x10
        1a47d0:	e8920006 	ldmia	r2, {r1, r2}
        1a47d4:	e0522001 	subs	r2, r2, r1
        1a47d8:	42822003 	addmi	r2, r2, #3	; 0x3
        1a47dc:	e1a02142 	mov	r2, r2, asr #2
        1a47e0:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1a47e4:	e0500001 	subs	r0, r0, r1
        1a47e8:	42800003 	addmi	r0, r0, #3	; 0x3
        1a47ec:	e1520140 	cmp	r2, r0, asr #2
        1a47f0:	b1a00004 	movlt	r0, r4
        1a47f4:	bb62c08f 	bllt	1a54a38 <TRefStructStack::$Fill(void)>
        1a47f8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1a47fc:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1a4800:	e5942000 	ldr	r2, [r4]
        1a4804:	e0521001 	subs	r1, r2, r1
        1a4808:	42811003 	addmi	r1, r1, #3	; 0x3
        1a480c:	e3a02005 	mov	r2, #5	; 0x5
        1a4810:	e0621141 	rsb	r1, r2, r1, asr #2
        1a4814:	e0800101 	add	r0, r0, r1, lsl #2
        1a4818:	e2400004 	sub	r0, r0, #4	; 0x4
        1a481c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIntrpStack::PrevState(void)
 * Address: 001a4820
 */
TIntrpStack::PrevState(void) {
    /*
        1a4820:	e1a0c00d 	mov	ip, sp
        1a4824:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a4828:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a482c:	e1a04000 	mov	r4, r0
        1a4830:	e5900000 	ldr	r0, [r0]
        1a4834:	e2400018 	sub	r0, r0, #24	; 0x18
        1a4838:	e5840000 	str	r0, [r4]
        1a483c:	e5941014 	ldr	r1, [r4, #20]	; fField20
        1a4840:	e5942010 	ldr	r2, [r4, #16]	; fField16
        1a4844:	e0512002 	subs	r2, r1, r2
        1a4848:	42822003 	addmi	r2, r2, #3	; 0x3
        1a484c:	e1a02142 	mov	r2, r2, asr #2
        1a4850:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1a4854:	e0500001 	subs	r0, r0, r1
        1a4858:	42800003 	addmi	r0, r0, #3	; 0x3
        1a485c:	e1520140 	cmp	r2, r0, asr #2
        1a4860:	b1a00004 	movlt	r0, r4
        1a4864:	bb62c073 	bllt	1a54a38 <TRefStructStack::$Fill(void)>
        1a4868:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1a486c:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1a4870:	e5942000 	ldr	r2, [r4]
        1a4874:	e0521001 	subs	r1, r2, r1
        1a4878:	42811003 	addmi	r1, r1, #3	; 0x3
        1a487c:	e3a02005 	mov	r2, #5	; 0x5
        1a4880:	e0621141 	rsb	r1, r2, r1, asr #2
        1a4884:	e0800101 	add	r0, r0, r1, lsl #2
        1a4888:	e2400004 	sub	r0, r0, #4	; 0x4
        1a488c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIntrpStack::StateAt(long)
 * Address: 001a4890
 */
TIntrpStack::StateAt(long) {
    /*
        1a4890:	e1a0c00d 	mov	ip, sp
        1a4894:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a4898:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a489c:	e1a04000 	mov	r4, r0
        1a48a0:	e1a05001 	mov	r5, r1
        1a48a4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1a48a8:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1a48ac:	e0501001 	subs	r1, r0, r1
        1a48b0:	42811003 	addmi	r1, r1, #3	; 0x3
        1a48b4:	e1a01141 	mov	r1, r1, asr #2
        1a48b8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a48bc:	e5942000 	ldr	r2, [r4]
        1a48c0:	e0520000 	subs	r0, r2, r0
        1a48c4:	42800003 	addmi	r0, r0, #3	; 0x3
        1a48c8:	e1510140 	cmp	r1, r0, asr #2
        1a48cc:	b1a00004 	movlt	r0, r4
        1a48d0:	bb62c058 	bllt	1a54a38 <TRefStructStack::$Fill(void)>
        1a48d4:	e0851085 	add	r1, r5, r5, lsl #1
        1a48d8:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        1a48dc:	e0800181 	add	r0, r0, r1, lsl #3
        1a48e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

