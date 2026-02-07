#include "include/SObject.h"

/**
 * Symbol: SObject::IsValid(TFlashStore *)
 * Address: 000c4e84
 */
SObject::IsValid(TFlashStore *) {
    /*
         c4e84:	e5902004 	ldr	r2, [r0, #4]	; fField4
         c4e88:	e2022001 	and	r2, r2, #1	; 0x1
         c4e8c:	e5b1304c 	ldr	r3, [r1, #76]!
         c4e90:	e3a01000 	mov	r1, #0	; 0x0
         c4e94:	e2033001 	and	r3, r3, #1	; 0x1
         c4e98:	e1330002 	teq	r3, r2
         c4e9c:	15900000 	ldrne	r0, [r0]
         c4ea0:	13c0020f 	bicne	r0, r0, #-268435456	; 0xf0000000
         c4ea4:	1a68e826 	bne	1afef44 <$IsValidPSSID(unsigned long)>
         c4ea8:	01a00001 	moveq	r0, r1
         c4eac:	e1a0f00e 	mov	pc, lr
    */
}

