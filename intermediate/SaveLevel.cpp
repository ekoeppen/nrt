#include "include/SaveLevel.h"

/**
 * Symbol: SaveLevel::Init(SaveLevel *)
 * Address: 00198dd8
 */
SaveLevel::Init(SaveLevel *) {
    /*
        198dd8:	e5801000 	str	r1, [r0]
        198ddc:	e3a01000 	mov	r1, #0	; 0x0
        198de0:	e5801004 	str	r1, [r0, #4]	; fField4
        198de4:	e5801008 	str	r1, [r0, #8]	; fField8
        198de8:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        198dec:	e1a0f00e 	mov	pc, lr
    */
}

