#include "include/TCMOTAPIDisconnect.h"

/**
 * Symbol: TCMOTAPIDisconnect::__ct(void)
 * Address: 0020666c
 */
TCMOTAPIDisconnect::TCMOTAPIDisconnect(void) {
    /*
        20666c:	e1a0c00d 	mov	ip, sp
        206670:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        206674:	e24cb004 	sub	fp, ip, #4	; 0x4
        206678:	e1b04000 	movs	r4, r0
        20667c:	1a000003 	bne	206690 <TCMOTAPIDisconnect::__ct(void)+0x24>
        206680:	e3a0000c 	mov	r0, #12	; 0xc
        206684:	eb67202b 	bl	1bce738 <$__nw(unsigned int)>
        206688:	e1b04000 	movs	r4, r0
        20668c:	0a000006 	beq	2066ac <TCMOTAPIDisconnect::__ct(void)+0x40>
        206690:	e1a00004 	mov	r0, r4
        206694:	e3a01303 	mov	r1, #201326592	; 0xc000000
        206698:	eb66c122 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        20669c:	e59f0010 	ldr	r0, [pc, #10]	; 2066b4 <TCMOTAPIDisconnect::__ct(void)+0x48>
        2066a0:	e5840000 	str	r0, [r4]
        2066a4:	e3a00000 	mov	r0, #0	; 0x0
        2066a8:	e5840004 	str	r0, [r4, #4]
        2066ac:	e1a00004 	mov	r0, r4
        2066b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2066b4:	64697363 	strvsbt	r7, [r9], -#867
    */
}

