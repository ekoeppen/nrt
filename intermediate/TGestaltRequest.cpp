#include "DDKIncludes/OS600/NameServer.h"

/**
 * Symbol: TGestaltRequest::__ct(void)
 * Address: 00131e38
 */
TGestaltRequest::TGestaltRequest() {
    /*
        131e38:	e1a0c00d 	mov	ip, sp
        131e3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        131e40:	e24cb004 	sub	fp, ip, #4	; 0x4
        131e44:	e1b04000 	movs	r4, r0
        131e48:	1a000003 	bne	131e5c <TGestaltRequest::__ct(void)+0x24>
        131e4c:	e3a00008 	mov	r0, #8	; 0x8
        131e50:	eb6a7238 	bl	1bce738 <$__nw(unsigned int)>
        131e54:	e1b04000 	movs	r4, r0
        131e58:	0a000006 	beq	131e78 <TGestaltRequest::__ct(void)+0x40>
        131e5c:	e1a00004 	mov	r0, r4
        131e60:	eb6782bf 	bl	1b12964 <TNameServerRequest::$__ct(void)>
        131e64:	e3a0000a 	mov	r0, #10	; 0xa
        131e68:	e5840000 	str	r0, [r4]
        131e6c:	e3a00401 	mov	r0, #16777216	; 0x1000000
        131e70:	e2800002 	add	r0, r0, #2	; 0x2
        131e74:	e5840004 	str	r0, [r4, #4]
        131e78:	e1a00004 	mov	r0, r4
        131e7c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

