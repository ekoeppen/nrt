#include "DDKIncludes/UtilityClasses/AEventHandler.h"

/**
 * Symbol: TAEIdleTimer::__ct(TTimerQueue *, unsigned long, TAEventHandler *, unsigned long)
 * Address: 00025c14
 */
TAEIdleTimer::TAEIdleTimer(TTimerQueue* q, ULong refCon, TAEventHandler* handler, TTimeout idle) {
    /*
         25c14:	e1a0c00d 	mov	ip, sp
         25c18:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         25c1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         25c20:	e1b04000 	movs	r4, r0
         25c24:	e1a07001 	mov	r7, r1
         25c28:	e1a06002 	mov	r6, r2
         25c2c:	e1a05003 	mov	r5, r3
         25c30:	e59b8004 	ldr	r8, [fp, #4]
         25c34:	1a000003 	bne	25c48 <TAEIdleTimer::__ct(TTimerQueue *, unsigned long, TAEventHandler *, unsigned long)+0x34>
         25c38:	e3a00020 	mov	r0, #32	; 0x20
         25c3c:	eb6ea2bd 	bl	1bce738 <$__nw(unsigned int)>
         25c40:	e1b04000 	movs	r4, r0
         25c44:	0a000008 	beq	25c6c <TAEIdleTimer::__ct(TTimerQueue *, unsigned long, TAEventHandler *, unsigned long)+0x58>
         25c48:	e1a02006 	mov	r2, r6
         25c4c:	e1a01007 	mov	r1, r7
         25c50:	e1a00004 	mov	r0, r4
         25c54:	eb6e2af2 	bl	1bb0824 <TTimerElement::$__ct(TTimerQueue *, unsigned long)>
         25c58:	e59f0014 	ldr	r0, [pc, #14]	; 25c74 <TAEIdleTimer::__ct(TTimerQueue *, unsigned long, TAEventHandler *, unsigned long)+0x60>
         25c5c:	e5840000 	str	r0, [r4]
         25c60:	e2844018 	add	r4, r4, #24	; 0x18
         25c64:	e8840120 	stmia	r4, {r5, r8}
         25c68:	e2444018 	sub	r4, r4, #24	; 0x18
         25c6c:	e1a00004 	mov	r0, r4
         25c70:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         25c74:	0001b95c 	andeq	fp, r1, ip, asr r9
    */
}

/**
 * Symbol: TAEIdleTimer::Timeout(void)
 * Address: 00025c78
 */
void			TAEIdleTimer::Timeout(void) {
    /*
         25c78:	e1a0c00d 	mov	ip, sp
         25c7c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         25c80:	e24cb004 	sub	fp, ip, #4	; 0x4
         25c84:	e1a04000 	mov	r4, r0
         25c88:	e24dd014 	sub	sp, sp, #20	; 0x14
         25c8c:	e28d0004 	add	r0, sp, #4	; 0x4
         25c90:	eb6ef968 	bl	1be4238 <TAEvent::$__ct(void)>
         25c94:	e3a00010 	mov	r0, #16	; 0x10
         25c98:	e58d0000 	str	r0, [sp]
         25c9c:	e58d400c 	str	r4, [sp, #12]
         25ca0:	e5940010 	ldr	r0, [r4, #16]	; fField16
         25ca4:	e58d0010 	str	r0, [sp, #16]	; fField16
         25ca8:	e28d3004 	add	r3, sp, #4	; 0x4
         25cac:	e1a0200d 	mov	r2, sp
         25cb0:	e5b4c018 	ldr	ip, [r4, #24]!	; fIdleTime
         25cb4:	e1a0000c 	mov	r0, ip
         25cb8:	e3a01000 	mov	r1, #0	; 0x0
         25cbc:	e59cc000 	ldr	ip, [ip]
         25cc0:	e1a0e00f 	mov	lr, pc
         25cc4:	e28cf010 	add	pc, ip, #16	; 0x10
         25cc8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

