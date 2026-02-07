#include "include/TXOffset.h"

/**
 * Symbol: TXOffset::operator==( const(TXOffset const &))
 * Address: 00233fd0
 */
TXOffset::operator==( const(TXOffset const &)) {
    /*
        233fd0:	e5902000 	ldr	r2, [r0]
        233fd4:	e5913000 	ldr	r3, [r1]
        233fd8:	e1320003 	teq	r2, r3
        233fdc:	05d00004 	ldreqb	r0, [r0, #4]	; fField4
        233fe0:	05d11004 	ldreqb	r1, [r1, #4]	; fField4
        233fe4:	01300001 	teqeq	r0, r1
        233fe8:	13a00000 	movne	r0, #0	; 0x0
        233fec:	03a00001 	moveq	r0, #1	; 0x1
        233ff0:	e20000ff 	and	r0, r0, #255	; 0xff
        233ff4:	e1a0f00e 	mov	pc, lr
    */
}

