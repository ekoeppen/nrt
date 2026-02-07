#include "include/TXmitBufDscrptr.h"

/**
 * Symbol: TXmitBufDscrptr::__ct(void)
 * Address: 00116ac0
 */
TXmitBufDscrptr::TXmitBufDscrptr(void) {
    /*
        116ac0:	e1a0c00d 	mov	ip, sp
        116ac4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        116ac8:	e24cb004 	sub	fp, ip, #4	; 0x4
        116acc:	e1b04000 	movs	r4, r0
        116ad0:	1a000003 	bne	116ae4 <TXmitBufDscrptr::__ct(void)+0x24>
        116ad4:	e3a00f5a 	mov	r0, #360	; 0x168
        116ad8:	eb6adf16 	bl	1bce738 <$__nw(unsigned int)>
        116adc:	e1b04000 	movs	r4, r0
        116ae0:	0a000009 	beq	116b0c <TXmitBufDscrptr::__ct(void)+0x4c>
        116ae4:	e2840014 	add	r0, r4, #20	; 0x14
        116ae8:	eb6b31b4 	bl	1be31c0 <CBufferList::$__ct(void)>
        116aec:	e2840034 	add	r0, r4, #52	; 0x34
        116af0:	eb6b35c3 	bl	1be4204 <CBufferSegment::$__ct(void)>
        116af4:	e3a00000 	mov	r0, #0	; 0x0
        116af8:	e5840008 	str	r0, [r4, #8]
        116afc:	e584000c 	str	r0, [r4, #12]
        116b00:	e5c40010 	strb	r0, [r4, #16]
        116b04:	e5c40011 	strb	r0, [r4, #17]
        116b08:	e5c40012 	strb	r0, [r4, #18]
        116b0c:	e1a00004 	mov	r0, r4
        116b10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXmitBufDscrptr::__dt(void)
 * Address: 0011a670
 */
TXmitBufDscrptr::~TXmitBufDscrptr(void) {
    /*
        11a670:	e1a0c00d 	mov	ip, sp
        11a674:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11a678:	e24cb004 	sub	fp, ip, #4	; 0x4
        11a67c:	e1a04000 	mov	r4, r0
        11a680:	e1a05001 	mov	r5, r1
        11a684:	e2800034 	add	r0, r0, #52	; 0x34
        11a688:	e3a01000 	mov	r1, #0	; 0x0
        11a68c:	eb6b26f6 	bl	1be426c <CBufferSegment::$__dt(void)>
        11a690:	e2840014 	add	r0, r4, #20	; 0x14
        11a694:	e3a01000 	mov	r1, #0	; 0x0
        11a698:	eb6b26ec 	bl	1be4250 <CBufferList::$__dt(void)>
        11a69c:	e3150001 	tst	r5, #1	; 0x1
        11a6a0:	11a00004 	movne	r0, r4
        11a6a4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        11a6a8:	1a6acc0c 	bne	1bcd6e0 <$__dl(void *)>
        11a6ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

