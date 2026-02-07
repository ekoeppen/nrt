#include "include/TRegistryInfo.h"

/**
 * Symbol: TRegistryInfo::__ct(unsigned long, unsigned long)
 * Address: 0015dcac
 */
TRegistryInfo::TRegistryInfo(unsigned long, unsigned long) {
    /*
        15dcac:	e1a0c00d 	mov	ip, sp
        15dcb0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15dcb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        15dcb8:	e1a05001 	mov	r5, r1
        15dcbc:	e1a04002 	mov	r4, r2
        15dcc0:	e3300000 	teq	r0, #0	; 0x0
        15dcc4:	1a000003 	bne	15dcd8 <TRegistryInfo::__ct(unsigned long, unsigned long)+0x2c>
        15dcc8:	e3a00008 	mov	r0, #8	; 0x8
        15dccc:	eb69c299 	bl	1bce738 <$__nw(unsigned int)>
        15dcd0:	e3300000 	teq	r0, #0	; 0x0
        15dcd4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        15dcd8:	e5804004 	str	r4, [r0, #4]	; fField4
        15dcdc:	e5805000 	str	r5, [r0]
        15dce0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

