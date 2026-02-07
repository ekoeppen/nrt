#include "include/TGetProtAddrCompleteEvent.h"

/**
 * Symbol: TGetProtAddrCompleteEvent::__ct(long, unsigned long)
 * Address: 000acf68
 */
TGetProtAddrCompleteEvent::TGetProtAddrCompleteEvent(long, unsigned long) {
    /*
         acf68:	e1a0c00d 	mov	ip, sp
         acf6c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         acf70:	e24cb004 	sub	fp, ip, #4	; 0x4
         acf74:	e1b04000 	movs	r4, r0
         acf78:	e1a05001 	mov	r5, r1
         acf7c:	e1a06002 	mov	r6, r2
         acf80:	1a000003 	bne	acf94 <TGetProtAddrCompleteEvent::__ct(long, unsigned long)+0x2c>
         acf84:	e3a00028 	mov	r0, #40	; 0x28
         acf88:	eb6c85ea 	bl	1bce738 <$__nw(unsigned int)>
         acf8c:	e1b04000 	movs	r4, r0
         acf90:	0a000007 	beq	acfb4 <TGetProtAddrCompleteEvent::__ct(long, unsigned long)+0x4c>
         acf94:	e1a02006 	mov	r2, r6
         acf98:	e1a01005 	mov	r1, r5
         acf9c:	e1a00004 	mov	r0, r4
         acfa0:	e3e03002 	mvn	r3, #2	; 0x2
         acfa4:	eb6560bc 	bl	1a0529c <TEndpointEvent::$__ct(long, unsigned long, long)>
         acfa8:	e3a00000 	mov	r0, #0	; 0x0
         acfac:	e5840020 	str	r0, [r4, #32]
         acfb0:	e5840024 	str	r0, [r4, #36]
         acfb4:	e1a00004 	mov	r0, r4
         acfb8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

