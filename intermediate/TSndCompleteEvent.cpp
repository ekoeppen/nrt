#include "include/TSndCompleteEvent.h"

/**
 * Symbol: TSndCompleteEvent::__ct(void)
 * Address: 000acd6c
 */
TSndCompleteEvent::TSndCompleteEvent(void) {
    /*
         acd6c:	e1a0c00d 	mov	ip, sp
         acd70:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         acd74:	e24cb004 	sub	fp, ip, #4	; 0x4
         acd78:	e1b04000 	movs	r4, r0
         acd7c:	1a000003 	bne	acd90 <TSndCompleteEvent::__ct(void)+0x24>
         acd80:	e3a00030 	mov	r0, #48	; 0x30
         acd84:	eb6c866b 	bl	1bce738 <$__nw(unsigned int)>
         acd88:	e1b04000 	movs	r4, r0
         acd8c:	0a000006 	beq	acdac <TSndCompleteEvent::__ct(void)+0x40>
         acd90:	e1a00004 	mov	r0, r4
         acd94:	eb656141 	bl	1a052a0 <TEndpointEvent::$__ct(void)>
         acd98:	e3a00000 	mov	r0, #0	; 0x0
         acd9c:	e5840020 	str	r0, [r4, #32]
         acda0:	e5840024 	str	r0, [r4, #36]
         acda4:	e5840028 	str	r0, [r4, #40]
         acda8:	e584002c 	str	r0, [r4, #44]
         acdac:	e1a00004 	mov	r0, r4
         acdb0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

