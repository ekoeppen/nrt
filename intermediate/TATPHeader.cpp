#include "include/TATPHeader.h"

/**
 * Symbol: TATPHeader::__ct(void)
 * Address: 00027174
 */
TATPHeader::TATPHeader(void) {
    /*
         27174:	e1a0c00d 	mov	ip, sp
         27178:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         2717c:	e24cb004 	sub	fp, ip, #4	; 0x4
         27180:	e3300000 	teq	r0, #0	; 0x0
         27184:	1a000003 	bne	27198 <TATPHeader::__ct(void)+0x24>
         27188:	e3a00004 	mov	r0, #4	; 0x4
         2718c:	eb6e9d69 	bl	1bce738 <$__nw(unsigned int)>
         27190:	e3300000 	teq	r0, #0	; 0x0
         27194:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         27198:	e3a01000 	mov	r1, #0	; 0x0
         2719c:	e5801000 	str	r1, [r0]
         271a0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TATPHeader::Fill(unsigned char *)
 * Address: 00027a40
 */
TATPHeader::Fill(unsigned char *) {
    /*
         27a40:	e1a0c00d 	mov	ip, sp
         27a44:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         27a48:	e24cb004 	sub	fp, ip, #4	; 0x4
         27a4c:	e1a02000 	mov	r2, r0
         27a50:	e1a00001 	mov	r0, r1
         27a54:	e1a01002 	mov	r1, r2
         27a58:	e3a02004 	mov	r2, #4	; 0x4
         27a5c:	eb6edd3c 	bl	1bdef54 <$BlockMove>
         27a60:	e3a00004 	mov	r0, #4	; 0x4
         27a64:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

