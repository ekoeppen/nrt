#include "include/TCMOModemFaxClass.h"

/**
 * Symbol: TCMOModemFaxClass::__ct(void)
 * Address: 0011f8c4
 */
TCMOModemFaxClass::TCMOModemFaxClass(void) {
    /*
        11f8c4:	e1a0c00d 	mov	ip, sp
        11f8c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11f8cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f8d0:	e1b04000 	movs	r4, r0
        11f8d4:	1a000003 	bne	11f8e8 <TCMOModemFaxClass::__ct(void)+0x24>
        11f8d8:	e3a00018 	mov	r0, #24	; 0x18
        11f8dc:	eb6abb95 	bl	1bce738 <$__nw(unsigned int)>
        11f8e0:	e1b04000 	movs	r4, r0
        11f8e4:	0a000008 	beq	11f90c <TCMOModemFaxClass::__ct(void)+0x48>
        11f8e8:	e1a00004 	mov	r0, r4
        11f8ec:	e3a01303 	mov	r1, #201326592	; 0xc000000
        11f8f0:	eb6ba2d4 	bl	1c08448 <TOptionExtended::$__ct(unsigned long)>
        11f8f4:	e59f0018 	ldr	r0, [pc, #18]	; 11f914 <TCMOModemFaxClass::__ct(void)+0x50>
        11f8f8:	e5840000 	str	r0, [r4]
        11f8fc:	e3a0000c 	mov	r0, #12	; 0xc
        11f900:	e5840004 	str	r0, [r4, #4]
        11f904:	e3a00007 	mov	r0, #7	; 0x7
        11f908:	e5840014 	str	r0, [r4, #20]
        11f90c:	e1a00004 	mov	r0, r4
        11f910:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11f914:	6d667363 	stcvsl	3, cr7, [r6, -#396]!
    */
}

