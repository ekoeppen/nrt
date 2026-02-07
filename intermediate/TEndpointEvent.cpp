#include "include/TEndpointEvent.h"

/**
 * Symbol: TEndpointEvent::__ct(void)
 * Address: 000ac614
 */
TEndpointEvent::TEndpointEvent(void) {
    /*
         ac614:	e1a0c00d 	mov	ip, sp
         ac618:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ac61c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ac620:	e1b04000 	movs	r4, r0
         ac624:	1a000003 	bne	ac638 <TEndpointEvent::__ct(void)+0x24>
         ac628:	e3a00020 	mov	r0, #32	; 0x20
         ac62c:	eb6c8841 	bl	1bce738 <$__nw(unsigned int)>
         ac630:	e1b04000 	movs	r4, r0
         ac634:	0a00000a 	beq	ac664 <TEndpointEvent::__ct(void)+0x50>
         ac638:	e1a00004 	mov	r0, r4
         ac63c:	eb6cdefd 	bl	1be4238 <TAEvent::$__ct(void)>
         ac640:	e59f0024 	ldr	r0, [pc, #24]	; ac66c <TEndpointEvent::__ct(void)+0x58>
         ac644:	e5840004 	str	r0, [r4, #4]
         ac648:	e3a00000 	mov	r0, #0	; 0x0
         ac64c:	e5840008 	str	r0, [r4, #8]
         ac650:	e584000c 	str	r0, [r4, #12]
         ac654:	e5840010 	str	r0, [r4, #16]
         ac658:	e5840014 	str	r0, [r4, #20]
         ac65c:	e2840018 	add	r0, r4, #24	; 0x18
         ac660:	eb6c9cdc 	bl	1bd39d8 <$GetGlobalTime>
         ac664:	e1a00004 	mov	r0, r4
         ac668:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         ac66c:	656e6470 	strvsb	r6, [lr, -#1136]!
    */
}

/**
 * Symbol: TEndpointEvent::__ct(long, unsigned long, long)
 * Address: 000acd08
 */
TEndpointEvent::TEndpointEvent(long, unsigned long, long) {
    /*
         acd08:	e1a0c00d 	mov	ip, sp
         acd0c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         acd10:	e24cb004 	sub	fp, ip, #4	; 0x4
         acd14:	e1b04000 	movs	r4, r0
         acd18:	e1a07001 	mov	r7, r1
         acd1c:	e1a06002 	mov	r6, r2
         acd20:	e1a05003 	mov	r5, r3
         acd24:	1a000003 	bne	acd38 <TEndpointEvent::__ct(long, unsigned long, long)+0x30>
         acd28:	e3a00020 	mov	r0, #32	; 0x20
         acd2c:	eb6c8681 	bl	1bce738 <$__nw(unsigned int)>
         acd30:	e1b04000 	movs	r4, r0
         acd34:	0a000009 	beq	acd60 <TEndpointEvent::__ct(long, unsigned long, long)+0x58>
         acd38:	e1a00004 	mov	r0, r4
         acd3c:	eb6cdd3d 	bl	1be4238 <TAEvent::$__ct(void)>
         acd40:	e59f0020 	ldr	r0, [pc, #20]	; acd68 <TEndpointEvent::__ct(long, unsigned long, long)+0x60>
         acd44:	e9840081 	stmib	r4, {r0, r7}
         acd48:	e3a00000 	mov	r0, #0	; 0x0
         acd4c:	e5840014 	str	r0, [r4, #20]
         acd50:	e5845010 	str	r5, [r4, #16]
         acd54:	e584600c 	str	r6, [r4, #12]
         acd58:	e2840018 	add	r0, r4, #24	; 0x18
         acd5c:	eb6c9b1d 	bl	1bd39d8 <$GetGlobalTime>
         acd60:	e1a00004 	mov	r0, r4
         acd64:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         acd68:	656e6470 	strvsb	r6, [lr, -#1136]!
    */
}

