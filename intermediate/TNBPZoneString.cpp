#include "include/TNBPZoneString.h"

/**
 * Symbol: TNBPZoneString::DefaultZone( const(void))
 * Address: 00127ebc
 */
TNBPZoneString::DefaultZone( const(void)) {
    /*
        127ebc:	e5d01000 	ldrb	r1, [r0]
        127ec0:	e3310001 	teq	r1, #1	; 0x1
        127ec4:	05d00001 	ldreqb	r0, [r0, #1]	; fField1
        127ec8:	0330002a 	teqeq	r0, #42	; 0x2a
        127ecc:	13a00000 	movne	r0, #0	; 0x0
        127ed0:	03a00001 	moveq	r0, #1	; 0x1
        127ed4:	e20000ff 	and	r0, r0, #255	; 0xff
        127ed8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPZoneString::Match( const(TNBPZoneString &))
 * Address: 00127edc
 */
TNBPZoneString::Match( const(TNBPZoneString &)) {
    /*
        127edc:	e5d02000 	ldrb	r2, [r0]
        127ee0:	e3320000 	teq	r2, #0	; 0x0
        127ee4:	15d13000 	ldrneb	r3, [r1]
        127ee8:	13330000 	teqne	r3, #0	; 0x0
        127eec:	03a00000 	moveq	r0, #0	; 0x0
        127ef0:	01a0f00e 	moveq	pc, lr
        127ef4:	e3320001 	teq	r2, #1	; 0x1
        127ef8:	05d02001 	ldreqb	r2, [r0, #1]	; fField1
        127efc:	0332002a 	teqeq	r2, #42	; 0x2a
        127f00:	1a6570c6 	bne	1a84220 <TNBPString::$Match( const(TNBPString &))>
        127f04:	03a00001 	moveq	r0, #1	; 0x1
        127f08:	e1a0f00e 	mov	pc, lr
    */
}

