#include "include/TCMOFaxEnableProgressEvent.h"

/**
 * Symbol: TCMOFaxEnableProgressEvent::__ct(void)
 * Address: 000b4ae4
 */
TCMOFaxEnableProgressEvent::TCMOFaxEnableProgressEvent(void) {
    /*
         b4ae4:	e1a0c00d 	mov	ip, sp
         b4ae8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b4aec:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4af0:	e1b04000 	movs	r4, r0
         b4af4:	1a000003 	bne	b4b08 <TCMOFaxEnableProgressEvent::__ct(void)+0x24>
         b4af8:	e3a00010 	mov	r0, #16	; 0x10
         b4afc:	eb6c670d 	bl	1bce738 <$__nw(unsigned int)>
         b4b00:	e1b04000 	movs	r4, r0
         b4b04:	0a000008 	beq	b4b2c <TCMOFaxEnableProgressEvent::__ct(void)+0x48>
         b4b08:	e1a00004 	mov	r0, r4
         b4b0c:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b4b10:	eb6c0804 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         b4b14:	e59f0018 	ldr	r0, [pc, #18]	; b4b34 <TCMOFaxEnableProgressEvent::__ct(void)+0x50>
         b4b18:	e5840000 	str	r0, [r4]
         b4b1c:	e3a00004 	mov	r0, #4	; 0x4
         b4b20:	e5840004 	str	r0, [r4, #4]
         b4b24:	e3a00000 	mov	r0, #0	; 0x0
         b4b28:	e584000c 	str	r0, [r4, #12]
         b4b2c:	e1a00004 	mov	r0, r4
         b4b30:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b4b34:	66657065 	strvsbt	r7, [r5], -r5, rrx
    */
}

