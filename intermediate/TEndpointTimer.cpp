#include "include/TEndpointTimer.h"

/**
 * Symbol: TEndpointTimer::__ct(TEndpointEventHandler *, TTimerQueue *, unsigned long)
 * Address: 000acc38
 */
TEndpointTimer::TEndpointTimer(TEndpointEventHandler *, TTimerQueue *, unsigned long) {
    /*
         acc38:	e1a0c00d 	mov	ip, sp
         acc3c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         acc40:	e24cb004 	sub	fp, ip, #4	; 0x4
         acc44:	e1b04000 	movs	r4, r0
         acc48:	e1a06001 	mov	r6, r1
         acc4c:	e1a05002 	mov	r5, r2
         acc50:	e1a07003 	mov	r7, r3
         acc54:	1a000003 	bne	acc68 <TEndpointTimer::__ct(TEndpointEventHandler *, TTimerQueue *, unsigned long)+0x30>
         acc58:	e3a0001c 	mov	r0, #28	; 0x1c
         acc5c:	eb6c86b5 	bl	1bce738 <$__nw(unsigned int)>
         acc60:	e1b04000 	movs	r4, r0
         acc64:	0a000006 	beq	acc84 <TEndpointTimer::__ct(TEndpointEventHandler *, TTimerQueue *, unsigned long)+0x4c>
         acc68:	e1a02007 	mov	r2, r7
         acc6c:	e1a01005 	mov	r1, r5
         acc70:	e1a00004 	mov	r0, r4
         acc74:	eb6c0eea 	bl	1bb0824 <TTimerElement::$__ct(TTimerQueue *, unsigned long)>
         acc78:	e59f000c 	ldr	r0, [pc, #c]	; acc8c <TEndpointTimer::__ct(TEndpointEventHandler *, TTimerQueue *, unsigned long)+0x54>
         acc7c:	e5840000 	str	r0, [r4]
         acc80:	e5846018 	str	r6, [r4, #24]	; fField24
         acc84:	e1a00004 	mov	r0, r4
         acc88:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         acc8c:	0001d7e8 	andeq	sp, r1, r8, ror #15
    */
}

/**
 * Symbol: TEndpointTimer::Timeout(void)
 * Address: 000acc90
 */
TEndpointTimer::Timeout(void) {
    /*
         acc90:	e1a01000 	mov	r1, r0
         acc94:	e5900018 	ldr	r0, [r0, #24]	; fField24
         acc98:	ea656de8 	b	1a08440 <TEndpointEventHandler::$Timeout(TEndpointTimer *)>
    */
}

