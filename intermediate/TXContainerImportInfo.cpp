#include "include/TXContainerImportInfo.h"

/**
 * Symbol: TXContainerImportInfo::__ct(unsigned char)
 * Address: 002348c4
 */
TXContainerImportInfo::TXContainerImportInfo(unsigned char) {
    /*
        2348c4:	e1a0c00d 	mov	ip, sp
        2348c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2348cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2348d0:	e20140ff 	and	r4, r1, #255	; 0xff
        2348d4:	e3300000 	teq	r0, #0	; 0x0
        2348d8:	1a000003 	bne	2348ec <TXContainerImportInfo::__ct(unsigned char)+0x28>
        2348dc:	e3a00010 	mov	r0, #16	; 0x10
        2348e0:	eb666794 	bl	1bce738 <$__nw(unsigned int)>
        2348e4:	e3300000 	teq	r0, #0	; 0x0
        2348e8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2348ec:	e5c04000 	strb	r4, [r0]
        2348f0:	e3a01000 	mov	r1, #0	; 0x0
        2348f4:	e5801004 	str	r1, [r0, #4]	; fField4
        2348f8:	e5801008 	str	r1, [r0, #8]	; fField8
        2348fc:	e580100c 	str	r1, [r0, #12]	; fField12
        234900:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

