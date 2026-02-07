#include "include/TCMOTAPIForwardClear.h"

/**
 * Symbol: TCMOTAPIForwardClear::__ct(void)
 * Address: 00206704
 */
TCMOTAPIForwardClear::TCMOTAPIForwardClear(void) {
    /*
        206704:	e1a0c00d 	mov	ip, sp
        206708:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20670c:	e24cb004 	sub	fp, ip, #4	; 0x4
        206710:	e1b04000 	movs	r4, r0
        206714:	1a000003 	bne	206728 <TCMOTAPIForwardClear::__ct(void)+0x24>
        206718:	e3a0000c 	mov	r0, #12	; 0xc
        20671c:	eb672005 	bl	1bce738 <$__nw(unsigned int)>
        206720:	e1b04000 	movs	r4, r0
        206724:	0a000006 	beq	206744 <TCMOTAPIForwardClear::__ct(void)+0x40>
        206728:	e1a00004 	mov	r0, r4
        20672c:	e3a01303 	mov	r1, #201326592	; 0xc000000
        206730:	eb66c0fc 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        206734:	e59f0010 	ldr	r0, [pc, #10]	; 20674c <TCMOTAPIForwardClear::__ct(void)+0x48>
        206738:	e5840000 	str	r0, [r4]
        20673c:	e3a00000 	mov	r0, #0	; 0x0
        206740:	e5840004 	str	r0, [r4, #4]
        206744:	e1a00004 	mov	r0, r4
        206748:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        20674c:	666f6372 	undefined
    */
}

