#include "include/TDefaultEvent.h"

/**
 * Symbol: TDefaultEvent::__ct(void)
 * Address: 000ace90
 */
TDefaultEvent::TDefaultEvent(void) {
    /*
         ace90:	e1a0c00d 	mov	ip, sp
         ace94:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ace98:	e24cb004 	sub	fp, ip, #4	; 0x4
         ace9c:	e1b04000 	movs	r4, r0
         acea0:	1a000003 	bne	aceb4 <TDefaultEvent::__ct(void)+0x24>
         acea4:	e3a00024 	mov	r0, #36	; 0x24
         acea8:	eb6c8622 	bl	1bce738 <$__nw(unsigned int)>
         aceac:	e1b04000 	movs	r4, r0
         aceb0:	0a000003 	beq	acec4 <TDefaultEvent::__ct(void)+0x34>
         aceb4:	e1a00004 	mov	r0, r4
         aceb8:	eb6560f8 	bl	1a052a0 <TEndpointEvent::$__ct(void)>
         acebc:	e3a00000 	mov	r0, #0	; 0x0
         acec0:	e5840020 	str	r0, [r4, #32]
         acec4:	e1a00004 	mov	r0, r4
         acec8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

