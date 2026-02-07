#include "include/TGetRouterAddressReply.h"

/**
 * Symbol: TGetRouterAddressReply::__ct(void)
 * Address: 0025c498
 */
TGetRouterAddressReply::TGetRouterAddressReply(void) {
    /*
        25c498:	e1a0c00d 	mov	ip, sp
        25c49c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25c4a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c4a4:	e1b04000 	movs	r4, r0
        25c4a8:	1a000003 	bne	25c4bc <TGetRouterAddressReply::__ct(void)+0x24>
        25c4ac:	e3a00020 	mov	r0, #32	; 0x20
        25c4b0:	eb65c8a0 	bl	1bce738 <$__nw(unsigned int)>
        25c4b4:	e1b04000 	movs	r4, r0
        25c4b8:	0a000009 	beq	25c4e4 <TGetRouterAddressReply::__ct(void)+0x4c>
        25c4bc:	e1a00004 	mov	r0, r4
        25c4c0:	eb661f5c 	bl	1be4238 <TAEvent::$__ct(void)>
        25c4c4:	e59f0020 	ldr	r0, [pc, #20]	; 25c4ec <TGetRouterAddressReply::__ct(void)+0x54>
        25c4c8:	e5840000 	str	r0, [r4]
        25c4cc:	e3a00000 	mov	r0, #0	; 0x0
        25c4d0:	e584000c 	str	r0, [r4, #12]
        25c4d4:	e5840008 	str	r0, [r4, #8]
        25c4d8:	e2840014 	add	r0, r4, #20	; 0x14
        25c4dc:	e3a01001 	mov	r1, #1	; 0x1
        25c4e0:	eb665d31 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        25c4e4:	e1a00004 	mov	r0, r4
        25c4e8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        25c4ec:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
    */
}

