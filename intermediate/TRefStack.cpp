#include "include/TRefStack.h"

/**
 * Symbol: TRefStack::Reset(long)
 * Address: 001a461c
 */
TRefStack::Reset(long) {
    /*
        1a461c:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1a4620:	e5903000 	ldr	r3, [r0]
        1a4624:	e053c002 	subs	ip, r3, r2
        1a4628:	e1a0200c 	mov	r2, ip
        1a462c:	428cc003 	addmi	ip, ip, #3	; 0x3
        1a4630:	e1a0c14c 	mov	ip, ip, asr #2
        1a4634:	e24cc001 	sub	ip, ip, #1	; 0x1
        1a4638:	e15c0001 	cmp	ip, r1
        1a463c:	d1a0f00e 	movle	pc, lr
        1a4640:	e3520000 	cmp	r2, #0	; 0x0
        1a4644:	b2822003 	addlt	r2, r2, #3	; 0x3
        1a4648:	e1a02142 	mov	r2, r2, asr #2
        1a464c:	e2422001 	sub	r2, r2, #1	; 0x1
        1a4650:	e0421001 	sub	r1, r2, r1
        1a4654:	e0431101 	sub	r1, r3, r1, lsl #2
        1a4658:	e5801000 	str	r1, [r0]
        1a465c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRefStack::PushNILs(long)
 * Address: 001a4660
 */
TRefStack::PushNILs(long) {
    /*
        1a4660:	e5902000 	ldr	r2, [r0]
        1a4664:	e0823101 	add	r3, r2, r1, lsl #2
        1a4668:	e5803000 	str	r3, [r0]
        1a466c:	e3a00002 	mov	r0, #2	; 0x2
        1a4670:	e3510008 	cmp	r1, #8	; 0x8
        1a4674:	ba00000b 	blt	1a46a8 <TRefStack::PushNILs(long)+0x48>
        1a4678:	e5820000 	str	r0, [r2]
        1a467c:	e5820004 	str	r0, [r2, #4]	; fField4
        1a4680:	e5820008 	str	r0, [r2, #8]
        1a4684:	e582000c 	str	r0, [r2, #12]
        1a4688:	e5820010 	str	r0, [r2, #16]
        1a468c:	e5820014 	str	r0, [r2, #20]
        1a4690:	e5820018 	str	r0, [r2, #24]
        1a4694:	e2411008 	sub	r1, r1, #8	; 0x8
        1a4698:	e3510008 	cmp	r1, #8	; 0x8
        1a469c:	e5a2001c 	str	r0, [r2, #28]!
        1a46a0:	e2822004 	add	r2, r2, #4	; 0x4
        1a46a4:	aafffff3 	bge	1a4678 <TRefStack::PushNILs(long)+0x18>
        1a46a8:	e3510007 	cmp	r1, #7	; 0x7
        1a46ac:	908ff101 	addls	pc, pc, r1, lsl #2
        1a46b0:	e1a0f00e 	mov	pc, lr
        1a46b4:	e1a0f00e 	mov	pc, lr
        1a46b8:	ea00000a 	b	1a46e8 <TRefStack::PushNILs(long)+0x88>
        1a46bc:	ea000008 	b	1a46e4 <TRefStack::PushNILs(long)+0x84>
        1a46c0:	ea000006 	b	1a46e0 <TRefStack::PushNILs(long)+0x80>
        1a46c4:	ea000004 	b	1a46dc <TRefStack::PushNILs(long)+0x7c>
        1a46c8:	ea000002 	b	1a46d8 <TRefStack::PushNILs(long)+0x78>
        1a46cc:	ea000000 	b	1a46d4 <TRefStack::PushNILs(long)+0x74>
        1a46d0:	e5820018 	str	r0, [r2, #24]
        1a46d4:	e5820014 	str	r0, [r2, #20]
        1a46d8:	e5820010 	str	r0, [r2, #16]
        1a46dc:	e582000c 	str	r0, [r2, #12]
        1a46e0:	e5820008 	str	r0, [r2, #8]
        1a46e4:	e5820004 	str	r0, [r2, #4]	; fField4
        1a46e8:	e5820000 	str	r0, [r2]
        1a46ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRefStack::__ct(void)
 * Address: 001a48e4
 */
TRefStack::TRefStack(void) {
    /*
        1a48e4:	e1a0c00d 	mov	ip, sp
        1a48e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a48ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a48f0:	e1b04000 	movs	r4, r0
        1a48f4:	1a000005 	bne	1a4910 <TRefStack::__ct(void)+0x2c>
        1a48f8:	e3a00010 	mov	r0, #16	; 0x10
        1a48fc:	eb68a78d 	bl	1bce738 <$__nw(unsigned int)>
        1a4900:	e1b04000 	movs	r4, r0
        1a4904:	1a000001 	bne	1a4910 <TRefStack::__ct(void)+0x2c>
        1a4908:	e1a00004 	mov	r0, r4
        1a490c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1a4910:	e3a00f4b 	mov	r0, #300	; 0x12c
        1a4914:	e584000c 	str	r0, [r4, #12]
        1a4918:	e24dd008 	sub	sp, sp, #8	; 0x8
        1a491c:	e59f0074 	ldr	r0, [pc, #74]	; 1a4998 <TRefStack::__ct(void)+0xb4>
        1a4920:	e5900000 	ldr	r0, [r0]
        1a4924:	e2400054 	sub	r0, r0, #84	; 0x54
        1a4928:	e1a01000 	mov	r1, r0
        1a492c:	e5900034 	ldr	r0, [r0, #52]	; fField52
        1a4930:	e1a0300d 	mov	r3, sp
        1a4934:	e5b12040 	ldr	r2, [r1, #64]!
        1a4938:	e92d0008 	stmdb	sp!, {r3}
        1a493c:	e28d3008 	add	r3, sp, #8	; 0x8
        1a4940:	e3a01801 	mov	r1, #65536	; 0x10000
        1a4944:	eb68cc96 	bl	1bd7ba4 <$NewStack>
        1a4948:	e28dd004 	add	sp, sp, #4	; 0x4
        1a494c:	e3300000 	teq	r0, #0	; 0x0
        1a4950:	0a000004 	beq	1a4968 <TRefStack::__ct(void)+0x84>
        1a4954:	e1a01000 	mov	r1, r0
        1a4958:	e59f003c 	ldr	r0, [pc, #3c]	; 1a499c <TRefStack::__ct(void)+0xb8>
        1a495c:	e5900000 	ldr	r0, [r0]
        1a4960:	e3a02000 	mov	r2, #0	; 0x0
        1a4964:	eb68fa0c 	bl	1be319c <$Throw>
        1a4968:	e59d0000 	ldr	r0, [sp]
        1a496c:	e5840004 	str	r0, [r4, #4]	; fField4
        1a4970:	e2801098 	add	r1, r0, #152	; 0x98
        1a4974:	e2811b01 	add	r1, r1, #1024	; 0x400
        1a4978:	e5840000 	str	r0, [r4]
        1a497c:	e5841008 	str	r1, [r4, #8]
        1a4980:	e59f2018 	ldr	r2, [pc, #18]	; 1a49a0 <TRefStack::__ct(void)+0xbc>
        1a4984:	e59f1018 	ldr	r1, [pc, #18]	; 1a49a4 <TRefStack::__ct(void)+0xc0>
        1a4988:	e1a00004 	mov	r0, r4
        1a498c:	eb687a0c 	bl	1bc31c4 <$DIYGCRegister__FPvPFPv_vT2>
        1a4990:	e28dd008 	add	sp, sp, #8	; 0x8
        1a4994:	eaffffdb 	b	1a4908 <TRefStack::__ct(void)+0x24>
        1a4998:	0c10105c 	ldceq	0, cr1, [r0], -#368
        1a499c:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        1a49a0:	01a57bf8 	streqd	r7, [r5, r8]!
        1a49a4:	01a57bf0 	streqd	r7, [r5, r0]!
    */
}

/**
 * Symbol: TRefStack::__dt(void)
 * Address: 001a49a8
 */
TRefStack::~TRefStack(void) {
    /*
        1a49a8:	e1a0c00d 	mov	ip, sp
        1a49ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a49b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a49b4:	e1a04000 	mov	r4, r0
        1a49b8:	e1a05001 	mov	r5, r1
        1a49bc:	eb687a01 	bl	1bc31c8 <$DIYGCUnregister(void *)>
        1a49c0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a49c4:	eb68b7e6 	bl	1bd2964 <$FreePagedMem>
        1a49c8:	e3150001 	tst	r5, #1	; 0x1
        1a49cc:	11a00004 	movne	r0, r4
        1a49d0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1a49d4:	1a68a341 	bne	1bcd6e0 <$__dl(void *)>
        1a49d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

