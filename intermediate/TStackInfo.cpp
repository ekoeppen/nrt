#include "include/TStackInfo.h"

/**
 * Symbol: TStackInfo::__ct(void)
 * Address: 001f669c
 */
TStackInfo::TStackInfo(void) {
    /*
        1f669c:	e1a0c00d 	mov	ip, sp
        1f66a0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1f66a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f66a8:	e3300000 	teq	r0, #0	; 0x0
        1f66ac:	1a000003 	bne	1f66c0 <TStackInfo::__ct(void)+0x24>
        1f66b0:	e3a00030 	mov	r0, #48	; 0x30
        1f66b4:	eb67601f 	bl	1bce738 <$__nw(unsigned int)>
        1f66b8:	e3300000 	teq	r0, #0	; 0x0
        1f66bc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1f66c0:	e3a01000 	mov	r1, #0	; 0x0
        1f66c4:	e5801010 	str	r1, [r0, #16]	; fField16
        1f66c8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TStackInfo::__dt(void)
 * Address: 001f66cc
 */
TStackInfo::~TStackInfo(void) {
    /*
        1f66cc:	e1a0c00d 	mov	ip, sp
        1f66d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f66d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f66d8:	e1a04000 	mov	r4, r0
        1f66dc:	e1a05001 	mov	r5, r1
        1f66e0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1f66e4:	e3300000 	teq	r0, #0	; 0x0
        1f66e8:	1b675bfc 	blne	1bcd6e0 <$__dl(void *)>
        1f66ec:	e3150001 	tst	r5, #1	; 0x1
        1f66f0:	11a00004 	movne	r0, r4
        1f66f4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1f66f8:	1a675bf8 	bne	1bcd6e0 <$__dl(void *)>
        1f66fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStackInfo::Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 001f6700
 */
TStackInfo::Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
        1f6700:	e1a0c00d 	mov	ip, sp
        1f6704:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f6708:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f670c:	e1a04000 	mov	r4, r0
        1f6710:	e1a07001 	mov	r7, r1
        1f6714:	e1a06002 	mov	r6, r2
        1f6718:	e1a05003 	mov	r5, r3
        1f671c:	e1a00103 	mov	r0, r3, lsl #2
        1f6720:	e59b800c 	ldr	r8, [fp, #12]
        1f6724:	e59b9008 	ldr	r9, [fp, #8]	; fField8
        1f6728:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        1f672c:	eb676001 	bl	1bce738 <$__nw(unsigned int)>
        1f6730:	e5840010 	str	r0, [r4, #16]	; fField16
        1f6734:	e3300000 	teq	r0, #0	; 0x0
        1f6738:	03a000e9 	moveq	r0, #233	; 0xe9
        1f673c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1f6740:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1f6744:	e3a00000 	mov	r0, #0	; 0x0
        1f6748:	e3a01000 	mov	r1, #0	; 0x0
        1f674c:	e3550000 	cmp	r5, #0	; 0x0
        1f6750:	9a000004 	bls	1f6768 <TStackInfo::Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0x68>
        1f6754:	e5942010 	ldr	r2, [r4, #16]	; fField16
        1f6758:	e7821100 	str	r1, [r2, r0, lsl #2]
        1f675c:	e2800001 	add	r0, r0, #1	; 0x1
        1f6760:	e1500005 	cmp	r0, r5
        1f6764:	3afffffa 	bcc	1f6754 <TStackInfo::Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0x54>
        1f6768:	e5845008 	str	r5, [r4, #8]	; fField8
        1f676c:	e5847000 	str	r7, [r4]
        1f6770:	e5846004 	str	r6, [r4, #4]	; fField4
        1f6774:	e584701c 	str	r7, [r4, #28]	; fField28
        1f6778:	e1a00001 	mov	r0, r1
        1f677c:	e2844020 	add	r4, r4, #32	; 0x20
        1f6780:	e8840102 	stmia	r4, {r1, r8}
        1f6784:	e5246008 	str	r6, [r4, -#8]!	; fField8
        1f6788:	e5249004 	str	r9, [r4, -#4]!	; fField4
        1f678c:	e524a008 	str	sl, [r4, -#8]!	; fField8
        1f6790:	e584101c 	str	r1, [r4, #28]	; fField28
        1f6794:	e5841020 	str	r1, [r4, #32]	; fField32
        1f6798:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

