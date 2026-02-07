#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOFramingParms::__ct(void)
 * Address: 001dde50
 */
TCMOFramingParms::TCMOFramingParms() {
    /*
        1dde50:	e1a0c00d 	mov	ip, sp
        1dde54:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1dde58:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dde5c:	e1b04000 	movs	r4, r0
        1dde60:	1a000003 	bne	1dde74 <TCMOFramingParms::__ct(void)+0x24>
        1dde64:	e3a00014 	mov	r0, #20	; 0x14
        1dde68:	eb67c232 	bl	1bce738 <$__nw(unsigned int)>
        1dde6c:	e1b04000 	movs	r4, r0
        1dde70:	0a00000e 	beq	1ddeb0 <TCMOFramingParms::__ct(void)+0x60>
        1dde74:	e1a00004 	mov	r0, r4
        1dde78:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1dde7c:	eb676329 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1dde80:	e59f0030 	ldr	r0, [pc, #30]	; 1ddeb8 <TCMOFramingParms::__ct(void)+0x68>
        1dde84:	e5840000 	str	r0, [r4]
        1dde88:	e3a00008 	mov	r0, #8	; 0x8
        1dde8c:	e5840004 	str	r0, [r4, #4]
        1dde90:	e3a00010 	mov	r0, #16	; 0x10
        1dde94:	e5c4000c 	strb	r0, [r4, #12]
        1dde98:	e3a00003 	mov	r0, #3	; 0x3
        1dde9c:	e5c4000d 	strb	r0, [r4, #13]
        1ddea0:	e3a00001 	mov	r0, #1	; 0x1
        1ddea4:	e5c4000e 	strb	r0, [r4, #14]
        1ddea8:	e5c4000f 	strb	r0, [r4, #15]
        1ddeac:	e5c40010 	strb	r0, [r4, #16]
        1ddeb0:	e1a00004 	mov	r0, r4
        1ddeb4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1ddeb8:	6672616d 	ldrvsbt	r6, [r2], -sp, ror #2
    */
}

