#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOLocalTalkNodeID::__ct(void)
 * Address: 001ddff4
 */
TCMOLocalTalkNodeID::TCMOLocalTalkNodeID() {
    /*
        1ddff4:	e1a0c00d 	mov	ip, sp
        1ddff8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ddffc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de000:	e1b04000 	movs	r4, r0
        1de004:	1a000003 	bne	1de018 <TCMOLocalTalkNodeID::__ct(void)+0x24>
        1de008:	e3a00010 	mov	r0, #16	; 0x10
        1de00c:	eb67c1c9 	bl	1bce738 <$__nw(unsigned int)>
        1de010:	e1b04000 	movs	r4, r0
        1de014:	0a000008 	beq	1de03c <TCMOLocalTalkNodeID::__ct(void)+0x48>
        1de018:	e1a00004 	mov	r0, r4
        1de01c:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1de020:	eb6762c0 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1de024:	e59f0018 	ldr	r0, [pc, #18]	; 1de044 <TCMOLocalTalkNodeID::__ct(void)+0x50>
        1de028:	e5840000 	str	r0, [r4]
        1de02c:	e3a00004 	mov	r0, #4	; 0x4
        1de030:	e5840004 	str	r0, [r4, #4]
        1de034:	e3a00000 	mov	r0, #0	; 0x0
        1de038:	e5c4000c 	strb	r0, [r4, #12]
        1de03c:	e1a00004 	mov	r0, r4
        1de040:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1de044:	6c746964 	ldcvsl	9, cr6, [r4], -#400
    */
}

