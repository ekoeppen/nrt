#include "include/TCMOModemDialing.h"

/**
 * Symbol: TCMOModemDialing::__ct(void)
 * Address: 0011fa40
 */
TCMOModemDialing::TCMOModemDialing(void) {
    /*
        11fa40:	e1a0c00d 	mov	ip, sp
        11fa44:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11fa48:	e24cb004 	sub	fp, ip, #4	; 0x4
        11fa4c:	e1b04000 	movs	r4, r0
        11fa50:	1a000003 	bne	11fa64 <TCMOModemDialing::__ct(void)+0x24>
        11fa54:	e3a00020 	mov	r0, #32	; 0x20
        11fa58:	eb6abb36 	bl	1bce738 <$__nw(unsigned int)>
        11fa5c:	e1b04000 	movs	r4, r0
        11fa60:	0a000018 	beq	11fac8 <TCMOModemDialing::__ct(void)+0x88>
        11fa64:	e1a00004 	mov	r0, r4
        11fa68:	e3a01303 	mov	r1, #201326592	; 0xc000000
        11fa6c:	eb6a5c2d 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        11fa70:	e59f0058 	ldr	r0, [pc, #58]	; 11fad0 <TCMOModemDialing::__ct(void)+0x90>
        11fa74:	e5840000 	str	r0, [r4]
        11fa78:	e3a00014 	mov	r0, #20	; 0x14
        11fa7c:	e5840004 	str	r0, [r4, #4]
        11fa80:	e3a00001 	mov	r0, #1	; 0x1
        11fa84:	e5c4000c 	strb	r0, [r4, #12]
        11fa88:	e5c4000d 	strb	r0, [r4, #13]
        11fa8c:	e5c4000e 	strb	r0, [r4, #14]
        11fa90:	e5c4000f 	strb	r0, [r4, #15]
        11fa94:	e3a01000 	mov	r1, #0	; 0x0
        11fa98:	e5c41010 	strb	r1, [r4, #16]
        11fa9c:	e3a02032 	mov	r2, #50	; 0x32
        11faa0:	e5c42011 	strb	r2, [r4, #17]
        11faa4:	e3a02037 	mov	r2, #55	; 0x37
        11faa8:	e5c42012 	strb	r2, [r4, #18]
        11faac:	e3a02004 	mov	r2, #4	; 0x4
        11fab0:	e5c42013 	strb	r2, [r4, #19]
        11fab4:	e5c40014 	strb	r0, [r4, #20]
        11fab8:	e3a02002 	mov	r2, #2	; 0x2
        11fabc:	e5c42015 	strb	r2, [r4, #21]
        11fac0:	e5840018 	str	r0, [r4, #24]
        11fac4:	e5c4101c 	strb	r1, [r4, #28]
        11fac8:	e1a00004 	mov	r0, r4
        11facc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11fad0:	6d646f20 	stcvsl	15, cr6, [r4, -#128]!
    */
}

