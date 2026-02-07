#include "include/TRcvCompleteEvent.h"

/**
 * Symbol: TRcvCompleteEvent::__ct(void)
 * Address: 000acdb4
 */
TRcvCompleteEvent::TRcvCompleteEvent(void) {
    /*
         acdb4:	e1a0c00d 	mov	ip, sp
         acdb8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         acdbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         acdc0:	e1b04000 	movs	r4, r0
         acdc4:	1a000003 	bne	acdd8 <TRcvCompleteEvent::__ct(void)+0x24>
         acdc8:	e3a00034 	mov	r0, #52	; 0x34
         acdcc:	eb6c8659 	bl	1bce738 <$__nw(unsigned int)>
         acdd0:	e1b04000 	movs	r4, r0
         acdd4:	0a000007 	beq	acdf8 <TRcvCompleteEvent::__ct(void)+0x44>
         acdd8:	e1a00004 	mov	r0, r4
         acddc:	eb65612f 	bl	1a052a0 <TEndpointEvent::$__ct(void)>
         acde0:	e3a00000 	mov	r0, #0	; 0x0
         acde4:	e5840020 	str	r0, [r4, #32]
         acde8:	e5840024 	str	r0, [r4, #36]
         acdec:	e5840028 	str	r0, [r4, #40]
         acdf0:	e584002c 	str	r0, [r4, #44]
         acdf4:	e5840030 	str	r0, [r4, #48]
         acdf8:	e1a00004 	mov	r0, r4
         acdfc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

