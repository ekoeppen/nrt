#include "DDKIncludes/Communications/CommToolOptions.h"

/**
 * Symbol: TCMOCTConnectInfo::__ct(void)
 * Address: 0006cdac
 */
TCMOCTConnectInfo::TCMOCTConnectInfo() {
    /*
         6cdac:	e1a0c00d 	mov	ip, sp
         6cdb0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6cdb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         6cdb8:	e1b04000 	movs	r4, r0
         6cdbc:	1a000003 	bne	6cdd0 <TCMOCTConnectInfo::__ct(void)+0x24>
         6cdc0:	e3a00018 	mov	r0, #24	; 0x18
         6cdc4:	eb6d865b 	bl	1bce738 <$__nw(unsigned int)>
         6cdc8:	e1b04000 	movs	r4, r0
         6cdcc:	0a00000c 	beq	6ce04 <TCMOCTConnectInfo::__ct(void)+0x58>
         6cdd0:	e1a00004 	mov	r0, r4
         6cdd4:	e3a01303 	mov	r1, #201326592	; 0xc000000
         6cdd8:	eb6d2752 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         6cddc:	e59f0028 	ldr	r0, [pc, #28]	; 6ce0c <TCMOCTConnectInfo::__ct(void)+0x60>
         6cde0:	e5840000 	str	r0, [r4]
         6cde4:	e3a0000c 	mov	r0, #12	; 0xc
         6cde8:	e5840004 	str	r0, [r4, #4]
         6cdec:	e3a00000 	mov	r0, #0	; 0x0
         6cdf0:	e5c4000c 	strb	r0, [r4, #12]
         6cdf4:	e5c4000d 	strb	r0, [r4, #13]
         6cdf8:	e5c4000e 	strb	r0, [r4, #14]
         6cdfc:	e5840010 	str	r0, [r4, #16]
         6ce00:	e5840014 	str	r0, [r4, #20]
         6ce04:	e1a00004 	mov	r0, r4
         6ce08:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6ce0c:	63746369 	cmnvs	r4, #-1543503871	; 0xa4000001
    */
}

