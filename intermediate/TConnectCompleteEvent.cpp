#include "include/TConnectCompleteEvent.h"

/**
 * Symbol: TConnectCompleteEvent::__ct(void)
 * Address: 000ad048
 */
TConnectCompleteEvent::TConnectCompleteEvent(void) {
    /*
         ad048:	e1a0c00d 	mov	ip, sp
         ad04c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ad050:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad054:	e1b04000 	movs	r4, r0
         ad058:	1a000003 	bne	ad06c <TConnectCompleteEvent::__ct(void)+0x24>
         ad05c:	e3a00030 	mov	r0, #48	; 0x30
         ad060:	eb6c85b4 	bl	1bce738 <$__nw(unsigned int)>
         ad064:	e1b04000 	movs	r4, r0
         ad068:	0a000006 	beq	ad088 <TConnectCompleteEvent::__ct(void)+0x40>
         ad06c:	e1a00004 	mov	r0, r4
         ad070:	eb65608a 	bl	1a052a0 <TEndpointEvent::$__ct(void)>
         ad074:	e3a00000 	mov	r0, #0	; 0x0
         ad078:	e5840020 	str	r0, [r4, #32]
         ad07c:	e5840024 	str	r0, [r4, #36]
         ad080:	e5840028 	str	r0, [r4, #40]
         ad084:	e584002c 	str	r0, [r4, #44]
         ad088:	e1a00004 	mov	r0, r4
         ad08c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectCompleteEvent::__ct(long, unsigned long, long)
 * Address: 000ad090
 */
TConnectCompleteEvent::TConnectCompleteEvent(long, unsigned long, long) {
    /*
         ad090:	e1a0c00d 	mov	ip, sp
         ad094:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         ad098:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad09c:	e1b04000 	movs	r4, r0
         ad0a0:	e1a06001 	mov	r6, r1
         ad0a4:	e1a05002 	mov	r5, r2
         ad0a8:	e1a07003 	mov	r7, r3
         ad0ac:	1a000003 	bne	ad0c0 <TConnectCompleteEvent::__ct(long, unsigned long, long)+0x30>
         ad0b0:	e3a00030 	mov	r0, #48	; 0x30
         ad0b4:	eb6c859f 	bl	1bce738 <$__nw(unsigned int)>
         ad0b8:	e1b04000 	movs	r4, r0
         ad0bc:	0a000009 	beq	ad0e8 <TConnectCompleteEvent::__ct(long, unsigned long, long)+0x58>
         ad0c0:	e1a03007 	mov	r3, r7
         ad0c4:	e1a02005 	mov	r2, r5
         ad0c8:	e1a01006 	mov	r1, r6
         ad0cc:	e1a00004 	mov	r0, r4
         ad0d0:	eb656071 	bl	1a0529c <TEndpointEvent::$__ct(long, unsigned long, long)>
         ad0d4:	e3a00000 	mov	r0, #0	; 0x0
         ad0d8:	e5840020 	str	r0, [r4, #32]
         ad0dc:	e5840024 	str	r0, [r4, #36]
         ad0e0:	e5840028 	str	r0, [r4, #40]
         ad0e4:	e584002c 	str	r0, [r4, #44]
         ad0e8:	e1a00004 	mov	r0, r4
         ad0ec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

