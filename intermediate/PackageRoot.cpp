#include "include/PackageRoot.h"

/**
 * Symbol: PackageRoot::__ct(void)
 * Address: 001608a8
 */
PackageRoot::PackageRoot(void) {
    /*
        1608a8:	e1a0c00d 	mov	ip, sp
        1608ac:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1608b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1608b4:	e3300000 	teq	r0, #0	; 0x0
        1608b8:	1a000003 	bne	1608cc <PackageRoot::__ct(void)+0x24>
        1608bc:	e3a00014 	mov	r0, #20	; 0x14
        1608c0:	eb69b79c 	bl	1bce738 <$__nw(unsigned int)>
        1608c4:	e3300000 	teq	r0, #0	; 0x0
        1608c8:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1608cc:	e3a01000 	mov	r1, #0	; 0x0
        1608d0:	e5801000 	str	r1, [r0]
        1608d4:	e5801004 	str	r1, [r0, #4]	; fField4
        1608d8:	e3a02001 	mov	r2, #1	; 0x1
        1608dc:	e2800008 	add	r0, r0, #8	; 0x8
        1608e0:	e8800006 	stmia	r0, {r1, r2}
        1608e4:	e5801008 	str	r1, [r0, #8]	; fField8
        1608e8:	e2400008 	sub	r0, r0, #8	; 0x8
        1608ec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

