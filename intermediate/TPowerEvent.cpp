#include "DDKIncludes/UtilityClasses/AEvents.h"

/**
 * Symbol: TPowerEvent::__ct(void)
 * Address: 00025ddc
 */
TPowerEvent::TPowerEvent(ULong type, ULong reason) {
    /*
         25ddc:	e1a0c00d 	mov	ip, sp
         25de0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         25de4:	e24cb004 	sub	fp, ip, #4	; 0x4
         25de8:	e1b04000 	movs	r4, r0
         25dec:	1a000003 	bne	25e00 <TPowerEvent::__ct(void)+0x24>
         25df0:	e3a00010 	mov	r0, #16	; 0x10
         25df4:	eb6ea24f 	bl	1bce738 <$__nw(unsigned int)>
         25df8:	e1b04000 	movs	r4, r0
         25dfc:	0a000003 	beq	25e10 <TPowerEvent::__ct(void)+0x34>
         25e00:	e1a00004 	mov	r0, r4
         25e04:	eb6e2a89 	bl	1bb0830 <TAESystemEvent::$__ct(void)>
         25e08:	e3a00000 	mov	r0, #0	; 0x0
         25e0c:	e584000c 	str	r0, [r4, #12]
         25e10:	e1a00004 	mov	r0, r4
         25e14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPowerEvent::__ct(unsigned long, unsigned long)
 * Address: 00025e18
 */
TPowerEvent::TPowerEvent(ULong type, ULong reason) {
    /*
         25e18:	e1a0c00d 	mov	ip, sp
         25e1c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         25e20:	e24cb004 	sub	fp, ip, #4	; 0x4
         25e24:	e1b04000 	movs	r4, r0
         25e28:	e1a06001 	mov	r6, r1
         25e2c:	e1a05002 	mov	r5, r2
         25e30:	1a000003 	bne	25e44 <TPowerEvent::__ct(unsigned long, unsigned long)+0x2c>
         25e34:	e3a00010 	mov	r0, #16	; 0x10
         25e38:	eb6ea23e 	bl	1bce738 <$__nw(unsigned int)>
         25e3c:	e1b04000 	movs	r4, r0
         25e40:	0a000003 	beq	25e54 <TPowerEvent::__ct(unsigned long, unsigned long)+0x3c>
         25e44:	e1a01006 	mov	r1, r6
         25e48:	e1a00004 	mov	r0, r4
         25e4c:	eb6e2a76 	bl	1bb082c <TAESystemEvent::$__ct(unsigned long)>
         25e50:	e584500c 	str	r5, [r4, #12]
         25e54:	e1a00004 	mov	r0, r4
         25e58:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

