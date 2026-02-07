#include "include/LargeObjectRoot.h"

/**
 * Symbol: LargeObjectRoot::__ct(void)
 * Address: 001608f0
 */
LargeObjectRoot::LargeObjectRoot(void) {
    /*
        1608f0:	e1a0c00d 	mov	ip, sp
        1608f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1608f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1608fc:	e1b04000 	movs	r4, r0
        160900:	1a000003 	bne	160914 <LargeObjectRoot::__ct(void)+0x24>
        160904:	e3a00020 	mov	r0, #32	; 0x20
        160908:	eb69b78a 	bl	1bce738 <$__nw(unsigned int)>
        16090c:	e1b04000 	movs	r4, r0
        160910:	0a000007 	beq	160934 <LargeObjectRoot::__ct(void)+0x44>
        160914:	e1a00004 	mov	r0, r4
        160918:	eb663baa 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        16091c:	e3a00002 	mov	r0, #2	; 0x2
        160920:	e584000c 	str	r0, [r4, #12]
        160924:	e3a00000 	mov	r0, #0	; 0x0
        160928:	e5840014 	str	r0, [r4, #20]
        16092c:	e5840018 	str	r0, [r4, #24]
        160930:	e584001c 	str	r0, [r4, #28]
        160934:	e1a00004 	mov	r0, r4
        160938:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

