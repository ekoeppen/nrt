#include "DDKIncludes/Packages/PartHandler.h"

/**
 * Symbol: TPkRegisterEvent::__ct(unsigned long, unsigned long)
 * Address: 0015c17c
 */
TPkRegisterEvent::TPkRegisterEvent(unsigned long, unsigned long) {
    /*
        15c17c:	e1a0c00d 	mov	ip, sp
        15c180:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15c184:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c188:	e1b04000 	movs	r4, r0
        15c18c:	e1a06001 	mov	r6, r1
        15c190:	e1a05002 	mov	r5, r2
        15c194:	1a000003 	bne	15c1a8 <TPkRegisterEvent::__ct(unsigned long, unsigned long)+0x2c>
        15c198:	e3a00018 	mov	r0, #24	; 0x18
        15c19c:	eb69c965 	bl	1bce738 <$__nw(unsigned int)>
        15c1a0:	e1b04000 	movs	r4, r0
        15c1a4:	0a000008 	beq	15c1cc <TPkRegisterEvent::__ct(unsigned long, unsigned long)+0x50>
        15c1a8:	e1a00004 	mov	r0, r4
        15c1ac:	eb664d8b 	bl	1aef7e0 <TPkBaseEvent::$__ct(void)>
        15c1b0:	e59f001c 	ldr	r0, [pc, #1c]	; 15c1d4 <TPkRegisterEvent::__ct(unsigned long, unsigned long)+0x58>
        15c1b4:	e5840008 	str	r0, [r4, #8]
        15c1b8:	e3a00000 	mov	r0, #0	; 0x0
        15c1bc:	e284400c 	add	r4, r4, #12	; 0xc
        15c1c0:	e8840041 	stmia	r4, {r0, r6}
        15c1c4:	e5845008 	str	r5, [r4, #8]
        15c1c8:	e244400c 	sub	r4, r4, #12	; 0xc
        15c1cc:	e1a00004 	mov	r0, r4
        15c1d0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        15c1d4:	72677472 	rsbvc	r7, r7, #1912602624	; 0x72000000
    */
}

