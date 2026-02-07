#include "DDKIncludes/Communications/CommToolOptions.h"

/**
 * Symbol: TCMOListenTimer::__ct(void)
 * Address: 0006cd58
 */
TCMOListenTimer::TCMOListenTimer() {
    /*
         6cd58:	e1a0c00d 	mov	ip, sp
         6cd5c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6cd60:	e24cb004 	sub	fp, ip, #4	; 0x4
         6cd64:	e1b04000 	movs	r4, r0
         6cd68:	1a000003 	bne	6cd7c <TCMOListenTimer::__ct(void)+0x24>
         6cd6c:	e3a00010 	mov	r0, #16	; 0x10
         6cd70:	eb6d8670 	bl	1bce738 <$__nw(unsigned int)>
         6cd74:	e1b04000 	movs	r4, r0
         6cd78:	0a000008 	beq	6cda0 <TCMOListenTimer::__ct(void)+0x48>
         6cd7c:	e1a00004 	mov	r0, r4
         6cd80:	e3a01303 	mov	r1, #201326592	; 0xc000000
         6cd84:	eb6d2767 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         6cd88:	e59f0018 	ldr	r0, [pc, #18]	; 6cda8 <TCMOListenTimer::__ct(void)+0x50>
         6cd8c:	e5840000 	str	r0, [r4]
         6cd90:	e3a00004 	mov	r0, #4	; 0x4
         6cd94:	e5840004 	str	r0, [r4, #4]
         6cd98:	e3a00078 	mov	r0, #120	; 0x78
         6cd9c:	e584000c 	str	r0, [r4, #12]
         6cda0:	e1a00004 	mov	r0, r4
         6cda4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6cda8:	636c7472 	cmnvs	ip, #1912602624	; 0x72000000
    */
}

