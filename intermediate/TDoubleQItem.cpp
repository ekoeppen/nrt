#include "include/TDoubleQItem.h"

/**
 * Symbol: TDoubleQItem::__ct(void)
 * Address: 0009c6dc
 */
TDoubleQItem::TDoubleQItem(void) {
    /*
         9c6dc:	e1a0c00d 	mov	ip, sp
         9c6e0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         9c6e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c6e8:	e3300000 	teq	r0, #0	; 0x0
         9c6ec:	1a000003 	bne	9c700 <TDoubleQItem::__ct(void)+0x24>
         9c6f0:	e3a0000c 	mov	r0, #12	; 0xc
         9c6f4:	eb6cc80f 	bl	1bce738 <$__nw(unsigned int)>
         9c6f8:	e3300000 	teq	r0, #0	; 0x0
         9c6fc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         9c700:	e3a01000 	mov	r1, #0	; 0x0
         9c704:	e5801000 	str	r1, [r0]
         9c708:	e5801004 	str	r1, [r0, #4]	; fField4
         9c70c:	e5801008 	str	r1, [r0, #8]	; fField8
         9c710:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

