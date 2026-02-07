#include "include/TDisconnectEvent.h"

/**
 * Symbol: TDisconnectEvent::__ct(void)
 * Address: 000acecc
 */
TDisconnectEvent::TDisconnectEvent(void) {
    /*
         acecc:	e1a0c00d 	mov	ip, sp
         aced0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         aced4:	e24cb004 	sub	fp, ip, #4	; 0x4
         aced8:	e1b04000 	movs	r4, r0
         acedc:	1a000003 	bne	acef0 <TDisconnectEvent::__ct(void)+0x24>
         acee0:	e3a0002c 	mov	r0, #44	; 0x2c
         acee4:	eb6c8613 	bl	1bce738 <$__nw(unsigned int)>
         acee8:	e1b04000 	movs	r4, r0
         aceec:	0a000005 	beq	acf08 <TDisconnectEvent::__ct(void)+0x3c>
         acef0:	e1a00004 	mov	r0, r4
         acef4:	eb6560e9 	bl	1a052a0 <TEndpointEvent::$__ct(void)>
         acef8:	e3a00000 	mov	r0, #0	; 0x0
         acefc:	e5840020 	str	r0, [r4, #32]
         acf00:	e5840024 	str	r0, [r4, #36]
         acf04:	e5840028 	str	r0, [r4, #40]
         acf08:	e1a00004 	mov	r0, r4
         acf0c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDisconnectEvent::__ct(long, unsigned long)
 * Address: 000acf10
 */
TDisconnectEvent::TDisconnectEvent(long, unsigned long) {
    /*
         acf10:	e1a0c00d 	mov	ip, sp
         acf14:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         acf18:	e24cb004 	sub	fp, ip, #4	; 0x4
         acf1c:	e1b04000 	movs	r4, r0
         acf20:	e1a05001 	mov	r5, r1
         acf24:	e1a06002 	mov	r6, r2
         acf28:	1a000003 	bne	acf3c <TDisconnectEvent::__ct(long, unsigned long)+0x2c>
         acf2c:	e3a0002c 	mov	r0, #44	; 0x2c
         acf30:	eb6c8600 	bl	1bce738 <$__nw(unsigned int)>
         acf34:	e1b04000 	movs	r4, r0
         acf38:	0a000008 	beq	acf60 <TDisconnectEvent::__ct(long, unsigned long)+0x50>
         acf3c:	e1a02006 	mov	r2, r6
         acf40:	e1a01005 	mov	r1, r5
         acf44:	e1a00004 	mov	r0, r4
         acf48:	e3a03002 	mov	r3, #2	; 0x2
         acf4c:	eb6560d2 	bl	1a0529c <TEndpointEvent::$__ct(long, unsigned long, long)>
         acf50:	e3a00000 	mov	r0, #0	; 0x0
         acf54:	e5840020 	str	r0, [r4, #32]
         acf58:	e5840024 	str	r0, [r4, #36]
         acf5c:	e5840028 	str	r0, [r4, #40]
         acf60:	e1a00004 	mov	r0, r4
         acf64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

