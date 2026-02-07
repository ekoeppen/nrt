#include "include/TXTab.h"

/**
 * Symbol: TXTab::Set(int, char, unsigned char)
 * Address: 00245984
 */
TXTab::Set(int, char, unsigned char) {
    /*
        245984:	e20220ff 	and	r2, r2, #255	; 0xff
        245988:	e20330ff 	and	r3, r3, #255	; 0xff
        24598c:	e3320002 	teq	r2, #2	; 0x2
        245990:	03330000 	teqeq	r3, #0	; 0x0
        245994:	03a0302e 	moveq	r3, #46	; 0x2e
        245998:	e5801000 	str	r1, [r0]
        24599c:	e5c02004 	strb	r2, [r0, #4]	; fField4
        2459a0:	e5c03005 	strb	r3, [r0, #5]	; fField5
        2459a4:	e1a0f00e 	mov	pc, lr
    */
}

