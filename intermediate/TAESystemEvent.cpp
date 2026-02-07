#include "DDKIncludes/UtilityClasses/AEvents.h"

/**
 * Symbol: TAESystemEvent::__ct(void)
 * Address: 00025d50
 */
TAESystemEvent::TAESystemEvent(ULong type) {
    /*
         25d50:	e1a0c00d 	mov	ip, sp
         25d54:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         25d58:	e24cb004 	sub	fp, ip, #4	; 0x4
         25d5c:	e1b04000 	movs	r4, r0
         25d60:	1a000003 	bne	25d74 <TAESystemEvent::__ct(void)+0x24>
         25d64:	e3a0000c 	mov	r0, #12	; 0xc
         25d68:	eb6ea272 	bl	1bce738 <$__nw(unsigned int)>
         25d6c:	e1b04000 	movs	r4, r0
         25d70:	0a000005 	beq	25d8c <TAESystemEvent::__ct(void)+0x3c>
         25d74:	e1a00004 	mov	r0, r4
         25d78:	eb6ef92e 	bl	1be4238 <TAEvent::$__ct(void)>
         25d7c:	e59f0010 	ldr	r0, [pc, #10]	; 25d94 <TAESystemEvent::__ct(void)+0x44>
         25d80:	e5840004 	str	r0, [r4, #4]
         25d84:	e3a00000 	mov	r0, #0	; 0x0
         25d88:	e5840008 	str	r0, [r4, #8]
         25d8c:	e1a00004 	mov	r0, r4
         25d90:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         25d94:	7379736d 	cmnvc	r9, #-1275068415	; 0xb4000001
    */
}

/**
 * Symbol: TAESystemEvent::__ct(unsigned long)
 * Address: 00025d98
 */
TAESystemEvent::TAESystemEvent(ULong type) {
    /*
         25d98:	e1a0c00d 	mov	ip, sp
         25d9c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         25da0:	e24cb004 	sub	fp, ip, #4	; 0x4
         25da4:	e1b04000 	movs	r4, r0
         25da8:	e1a05001 	mov	r5, r1
         25dac:	1a000003 	bne	25dc0 <TAESystemEvent::__ct(unsigned long)+0x28>
         25db0:	e3a0000c 	mov	r0, #12	; 0xc
         25db4:	eb6ea25f 	bl	1bce738 <$__nw(unsigned int)>
         25db8:	e1b04000 	movs	r4, r0
         25dbc:	0a000003 	beq	25dd0 <TAESystemEvent::__ct(unsigned long)+0x38>
         25dc0:	e1a00004 	mov	r0, r4
         25dc4:	eb6ef91b 	bl	1be4238 <TAEvent::$__ct(void)>
         25dc8:	e59f0008 	ldr	r0, [pc, #8]	; 25dd8 <TAESystemEvent::__ct(unsigned long)+0x40>
         25dcc:	e9840021 	stmib	r4, {r0, r5}
         25dd0:	e1a00004 	mov	r0, r4
         25dd4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         25dd8:	7379736d 	cmnvc	r9, #-1275068415	; 0xb4000001
    */
}

