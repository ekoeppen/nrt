#include "include/TCardAlertEvent.h"

/**
 * Symbol: TCardAlertEvent::__ct(void)
 * Address: 0004ae9c
 */
TCardAlertEvent::TCardAlertEvent(void) {
    /*
         4ae9c:	e1a0c00d 	mov	ip, sp
         4aea0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4aea4:	e24cb004 	sub	fp, ip, #4	; 0x4
         4aea8:	e1b04000 	movs	r4, r0
         4aeac:	1a000003 	bne	4aec0 <TCardAlertEvent::__ct(void)+0x24>
         4aeb0:	e3a00064 	mov	r0, #100	; 0x64
         4aeb4:	eb6e0e1f 	bl	1bce738 <$__nw(unsigned int)>
         4aeb8:	e1b04000 	movs	r4, r0
         4aebc:	0a000005 	beq	4aed8 <TCardAlertEvent::__ct(void)+0x3c>
         4aec0:	e1a00004 	mov	r0, r4
         4aec4:	eb6a9240 	bl	1aef7cc <TAlertEvent::$__ct(void)>
         4aec8:	e2840014 	add	r0, r4, #20	; 0x14
         4aecc:	e1a05000 	mov	r5, r0
         4aed0:	eb6baaf4 	bl	1b35aa8 <TCardAlertDialog::$__ct(void)>
         4aed4:	e5845010 	str	r5, [r4, #16]
         4aed8:	e1a00004 	mov	r0, r4
         4aedc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

