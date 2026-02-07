#include "include/TCMOSystemName.h"

/**
 * Symbol: TCMOSystemName::__ct(void)
 * Address: 000324a4
 */
TCMOSystemName::TCMOSystemName(void) {
    /*
         324a4:	e1a0c00d 	mov	ip, sp
         324a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         324ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         324b0:	e1b04000 	movs	r4, r0
         324b4:	1a000003 	bne	324c8 <TCMOSystemName::__ct(void)+0x24>
         324b8:	e3a000d4 	mov	r0, #212	; 0xd4
         324bc:	eb6e709d 	bl	1bce738 <$__nw(unsigned int)>
         324c0:	e1b04000 	movs	r4, r0
         324c4:	0a000009 	beq	324f0 <TCMOSystemName::__ct(void)+0x4c>
         324c8:	e1a00004 	mov	r0, r4
         324cc:	e3a01303 	mov	r1, #201326592	; 0xc000000
         324d0:	eb6e1194 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         324d4:	e59f001c 	ldr	r0, [pc, #1c]	; 324f8 <TCMOSystemName::__ct(void)+0x54>
         324d8:	e5840000 	str	r0, [r4]
         324dc:	e3a000c8 	mov	r0, #200	; 0xc8
         324e0:	e5840004 	str	r0, [r4, #4]
         324e4:	e3a00000 	mov	r0, #0	; 0x0
         324e8:	e5c4000d 	strb	r0, [r4, #13]
         324ec:	e5c4000c 	strb	r0, [r4, #12]
         324f0:	e1a00004 	mov	r0, r4
         324f4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         324f8:	7379736e 	cmnvc	r9, #-1207959551	; 0xb8000001
    */
}

