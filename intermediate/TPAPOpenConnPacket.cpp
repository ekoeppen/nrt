#include "include/TPAPOpenConnPacket.h"

/**
 * Symbol: TPAPOpenConnPacket::Set(unsigned char, unsigned char, unsigned char, unsigned short)
 * Address: 001527b0
 */
TPAPOpenConnPacket::Set(unsigned char, unsigned char, unsigned char, unsigned short) {
    /*
        1527b0:	e59dc000 	ldr	ip, [sp]
        1527b4:	e1a0c80c 	mov	ip, ip, lsl #16
        1527b8:	e1a0c82c 	mov	ip, ip, lsr #16
        1527bc:	e5c01000 	strb	r1, [r0]
        1527c0:	e3a01001 	mov	r1, #1	; 0x1
        1527c4:	e5c01001 	strb	r1, [r0, #1]	; fField1
        1527c8:	e5c02004 	strb	r2, [r0, #4]	; fField4
        1527cc:	e3a01000 	mov	r1, #0	; 0x0
        1527d0:	e5c01002 	strb	r1, [r0, #2]	; fField2
        1527d4:	e5c01003 	strb	r1, [r0, #3]	; fField3
        1527d8:	e5c03005 	strb	r3, [r0, #5]	; fField5
        1527dc:	e5c0c007 	strb	ip, [r0, #7]	; fField7
        1527e0:	e1a0142c 	mov	r1, ip, lsr #8
        1527e4:	e5c01006 	strb	r1, [r0, #6]	; fField6
        1527e8:	e1a0f00e 	mov	pc, lr
    */
}

