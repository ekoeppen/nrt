#include "include/RDMParams.h"

/**
 * Symbol: RDMParams::__ct(void)
 * Address: 001adcb0
 */
RDMParams::RDMParams(void) {
    /*
        1adcb0:	e1a0c00d 	mov	ip, sp
        1adcb4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1adcb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1adcbc:	e3300000 	teq	r0, #0	; 0x0
        1adcc0:	1a000003 	bne	1adcd4 <RDMParams::__ct(void)+0x24>
        1adcc4:	e3a0001c 	mov	r0, #28	; 0x1c
        1adcc8:	eb68829a 	bl	1bce738 <$__nw(unsigned int)>
        1adccc:	e3300000 	teq	r0, #0	; 0x0
        1adcd0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1adcd4:	e3a01000 	mov	r1, #0	; 0x0
        1adcd8:	e5801000 	str	r1, [r0]
        1adcdc:	e5801004 	str	r1, [r0, #4]	; fField4
        1adce0:	e5801008 	str	r1, [r0, #8]	; fField8
        1adce4:	e3a02001 	mov	r2, #1	; 0x1
        1adce8:	e580100c 	str	r1, [r0, #12]	; fField12
        1adcec:	e5c02018 	strb	r2, [r0, #24]	; fField24
        1adcf0:	e3e02000 	mvn	r2, #0	; 0x0
        1adcf4:	e5802014 	str	r2, [r0, #20]	; fField20
        1adcf8:	e5c01019 	strb	r1, [r0, #25]	; fField25
        1adcfc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

