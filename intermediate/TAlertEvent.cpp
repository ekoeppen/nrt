#include "include/TAlertEvent.h"

/**
 * Symbol: TAlertEvent::__ct(void)
 * Address: 00030860
 */
TAlertEvent::TAlertEvent(void) {
    /*
         30860:	e1a0c00d 	mov	ip, sp
         30864:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         30868:	e24cb004 	sub	fp, ip, #4	; 0x4
         3086c:	e1b04000 	movs	r4, r0
         30870:	1a000003 	bne	30884 <TAlertEvent::__ct(void)+0x24>
         30874:	e3a00014 	mov	r0, #20	; 0x14
         30878:	eb6e77ae 	bl	1bce738 <$__nw(unsigned int)>
         3087c:	e1b04000 	movs	r4, r0
         30880:	0a000008 	beq	308a8 <TAlertEvent::__ct(void)+0x48>
         30884:	e1a00004 	mov	r0, r4
         30888:	eb6ece6a 	bl	1be4238 <TAEvent::$__ct(void)>
         3088c:	e59f001c 	ldr	r0, [pc, #1c]	; 308b0 <TAlertEvent::__ct(void)+0x50>
         30890:	e5840004 	str	r0, [r4, #4]
         30894:	e3a00000 	mov	r0, #0	; 0x0
         30898:	e3a01001 	mov	r1, #1	; 0x1
         3089c:	e584000c 	str	r0, [r4, #12]
         308a0:	e5841008 	str	r1, [r4, #8]
         308a4:	e5840010 	str	r0, [r4, #16]
         308a8:	e1a00004 	mov	r0, r4
         308ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         308b0:	616c7274 	cmnvs	ip, r4, ror r2
    */
}

