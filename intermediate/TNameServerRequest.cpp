#include "DDKIncludes/OS600/NameServer.h"

/**
 * Symbol: TNameServerRequest::__ct(void)
 * Address: 001309ac
 */
TNameServerRequest::TNameServerRequest() {
    /*
        1309ac:	e1a0c00d 	mov	ip, sp
        1309b0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1309b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1309b8:	e3300000 	teq	r0, #0	; 0x0
        1309bc:	1a000003 	bne	1309d0 <TNameServerRequest::__ct(void)+0x24>
        1309c0:	e3a00004 	mov	r0, #4	; 0x4
        1309c4:	eb6a775b 	bl	1bce738 <$__nw(unsigned int)>
        1309c8:	e3300000 	teq	r0, #0	; 0x0
        1309cc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1309d0:	e3a01001 	mov	r1, #1	; 0x1
        1309d4:	e5801000 	str	r1, [r0]
        1309d8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

