#include "DDKIncludes/OS600/NameServer.h"

/**
 * Symbol: TNameRequest::__ct(void)
 * Address: 00130fe0
 */
TNameRequest::TNameRequest() {
    /*
        130fe0:	e1a0c00d 	mov	ip, sp
        130fe4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        130fe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        130fec:	e1b04000 	movs	r4, r0
        130ff0:	1a000003 	bne	131004 <TNameRequest::__ct(void)+0x24>
        130ff4:	e3a0001c 	mov	r0, #28	; 0x1c
        130ff8:	eb6a75ce 	bl	1bce738 <$__nw(unsigned int)>
        130ffc:	e1b04000 	movs	r4, r0
        131000:	0a000008 	beq	131028 <TNameRequest::__ct(void)+0x48>
        131004:	e1a00004 	mov	r0, r4
        131008:	eb678655 	bl	1b12964 <TNameServerRequest::$__ct(void)>
        13100c:	e3a00005 	mov	r0, #5	; 0x5
        131010:	e5840000 	str	r0, [r4]
        131014:	e3a00000 	mov	r0, #0	; 0x0
        131018:	e5840004 	str	r0, [r4, #4]
        13101c:	e5840008 	str	r0, [r4, #8]	; fThing
        131020:	e5840014 	str	r0, [r4, #20]	; fParam2
        131024:	e5840018 	str	r0, [r4, #24]	; fObjectName
        131028:	e1a00004 	mov	r0, r4
        13102c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

