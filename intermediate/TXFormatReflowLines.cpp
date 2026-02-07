#include "include/TXFormatReflowLines.h"

/**
 * Symbol: TXFormatReflowLines::Reset(void)
 * Address: 0023962c
 */
TXFormatReflowLines::Reset(void) {
    /*
        23962c:	e3e01000 	mvn	r1, #0	; 0x0
        239630:	e5801000 	str	r1, [r0]
        239634:	e5801004 	str	r1, [r0, #4]	; fField4
        239638:	e3a01001 	mov	r1, #1	; 0x1
        23963c:	e5c01008 	strb	r1, [r0, #8]	; fField8
        239640:	e3a01000 	mov	r1, #0	; 0x0
        239644:	e5c01009 	strb	r1, [r0, #9]	; fField9
        239648:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFormatReflowLines::GetFirst( const(long *))
 * Address: 0023964c
 */
TXFormatReflowLines::GetFirst( const(long *)) {
    /*
        23964c:	e5900000 	ldr	r0, [r0]
        239650:	e5810000 	str	r0, [r1]
        239654:	e3500000 	cmp	r0, #0	; 0x0
        239658:	b3a00000 	movlt	r0, #0	; 0x0
        23965c:	a3a00001 	movge	r0, #1	; 0x1
        239660:	e20000ff 	and	r0, r0, #255	; 0xff
        239664:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFormatReflowLines::GetLast( const(long *))
 * Address: 00239668
 */
TXFormatReflowLines::GetLast( const(long *)) {
    /*
        239668:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23966c:	e5810000 	str	r0, [r1]
        239670:	e3500000 	cmp	r0, #0	; 0x0
        239674:	b3a00000 	movlt	r0, #0	; 0x0
        239678:	a3a00001 	movge	r0, #1	; 0x1
        23967c:	e20000ff 	and	r0, r0, #255	; 0xff
        239680:	e1a0f00e 	mov	pc, lr
    */
}

