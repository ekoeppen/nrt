#include "include/TBindCompleteEvent.h"

/**
 * Symbol: TBindCompleteEvent::__ct(void)
 * Address: 000ace00
 */
TBindCompleteEvent::TBindCompleteEvent(void) {
    /*
         ace00:	e1a0c00d 	mov	ip, sp
         ace04:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ace08:	e24cb004 	sub	fp, ip, #4	; 0x4
         ace0c:	e1b04000 	movs	r4, r0
         ace10:	1a000003 	bne	ace24 <TBindCompleteEvent::__ct(void)+0x24>
         ace14:	e3a00024 	mov	r0, #36	; 0x24
         ace18:	eb6c8646 	bl	1bce738 <$__nw(unsigned int)>
         ace1c:	e1b04000 	movs	r4, r0
         ace20:	0a000003 	beq	ace34 <TBindCompleteEvent::__ct(void)+0x34>
         ace24:	e1a00004 	mov	r0, r4
         ace28:	eb65611c 	bl	1a052a0 <TEndpointEvent::$__ct(void)>
         ace2c:	e3a00000 	mov	r0, #0	; 0x0
         ace30:	e5840020 	str	r0, [r4, #32]
         ace34:	e1a00004 	mov	r0, r4
         ace38:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TBindCompleteEvent::__ct(long, unsigned long, long)
 * Address: 000ace3c
 */
TBindCompleteEvent::TBindCompleteEvent(long, unsigned long, long) {
    /*
         ace3c:	e1a0c00d 	mov	ip, sp
         ace40:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         ace44:	e24cb004 	sub	fp, ip, #4	; 0x4
         ace48:	e1b04000 	movs	r4, r0
         ace4c:	e1a06001 	mov	r6, r1
         ace50:	e1a05002 	mov	r5, r2
         ace54:	e1a07003 	mov	r7, r3
         ace58:	1a000003 	bne	ace6c <TBindCompleteEvent::__ct(long, unsigned long, long)+0x30>
         ace5c:	e3a00024 	mov	r0, #36	; 0x24
         ace60:	eb6c8634 	bl	1bce738 <$__nw(unsigned int)>
         ace64:	e1b04000 	movs	r4, r0
         ace68:	0a000006 	beq	ace88 <TBindCompleteEvent::__ct(long, unsigned long, long)+0x4c>
         ace6c:	e1a03007 	mov	r3, r7
         ace70:	e1a02005 	mov	r2, r5
         ace74:	e1a01006 	mov	r1, r6
         ace78:	e1a00004 	mov	r0, r4
         ace7c:	eb656106 	bl	1a0529c <TEndpointEvent::$__ct(long, unsigned long, long)>
         ace80:	e3a00000 	mov	r0, #0	; 0x0
         ace84:	e5840020 	str	r0, [r4, #32]
         ace88:	e1a00004 	mov	r0, r4
         ace8c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

