#include "DDKIncludes/CommAPI/OptionArray.h"

/**
 * Symbol: TOptionExtended::SetAsServiceSpecific(unsigned long)
 * Address: 0014b92c
 */
void		TOptionExtended::SetAsServiceSpecific(ULong service) {
    /*
        14b92c:	e5902008 	ldr	r2, [r0, #8]	; fFlags
        14b930:	e3c2243f 	bic	r2, r2, #1056964608	; 0x3f000000
        14b934:	e3822402 	orr	r2, r2, #33554432	; 0x2000000
        14b938:	e5a02008 	str	r2, [r0, #8]!	; fFlags
        14b93c:	e5801004 	str	r1, [r0, #4]	; fLabel
        14b940:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOptionExtended::__ct(unsigned long)
 * Address: 0014b9ac
 */
TOptionExtended::TOptionExtended(ULong type = kOptionType) {
    /*
        14b9ac:	e1a0c00d 	mov	ip, sp
        14b9b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14b9b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b9b8:	e1b04000 	movs	r4, r0
        14b9bc:	e1a05001 	mov	r5, r1
        14b9c0:	1a000003 	bne	14b9d4 <TOptionExtended::__ct(unsigned long)+0x28>
        14b9c4:	e3a00014 	mov	r0, #20	; 0x14
        14b9c8:	eb6a0b5a 	bl	1bce738 <$__nw(unsigned int)>
        14b9cc:	e1b04000 	movs	r4, r0
        14b9d0:	0a000005 	beq	14b9ec <TOptionExtended::__ct(unsigned long)+0x40>
        14b9d4:	e1a01005 	mov	r1, r5
        14b9d8:	e1a00004 	mov	r0, r4
        14b9dc:	eb69ac51 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        14b9e0:	e3a00000 	mov	r0, #0	; 0x0
        14b9e4:	e584000c 	str	r0, [r4, #12]	; fServiceLabel
        14b9e8:	e5840010 	str	r0, [r4, #16]	; fExtendedResult
        14b9ec:	e1a00004 	mov	r0, r4
        14b9f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

