#include "DDKIncludes/CommAPI/CommOptions.h"

/**
 * Symbol: TCMOServiceIdentifier::__ct(void)
 * Address: 0006cc4c
 */
TCMOServiceIdentifier::TCMOServiceIdentifier() {
    /*
         6cc4c:	e1a0c00d 	mov	ip, sp
         6cc50:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6cc54:	e24cb004 	sub	fp, ip, #4	; 0x4
         6cc58:	e1b04000 	movs	r4, r0
         6cc5c:	1a000003 	bne	6cc70 <TCMOServiceIdentifier::__ct(void)+0x24>
         6cc60:	e3a00014 	mov	r0, #20	; 0x14
         6cc64:	eb6d86b3 	bl	1bce738 <$__nw(unsigned int)>
         6cc68:	e1b04000 	movs	r4, r0
         6cc6c:	0a00000b 	beq	6cca0 <TCMOServiceIdentifier::__ct(void)+0x54>
         6cc70:	e1a00004 	mov	r0, r4
         6cc74:	e3a01303 	mov	r1, #201326592	; 0xc000000
         6cc78:	eb6d27aa 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         6cc7c:	e59f0024 	ldr	r0, [pc, #24]	; 6cca8 <TCMOServiceIdentifier::__ct(void)+0x5c>
         6cc80:	e5840000 	str	r0, [r4]
         6cc84:	e3a00008 	mov	r0, #8	; 0x8
         6cc88:	e5840004 	str	r0, [r4, #4]
         6cc8c:	e3a00000 	mov	r0, #0	; 0x0
         6cc90:	e584000c 	str	r0, [r4, #12]
         6cc94:	e5840010 	str	r0, [r4, #16]
         6cc98:	e1a00004 	mov	r0, r4
         6cc9c:	eb6e6de8 	bl	1c08444 <TOption::$SetAsService(void)>
         6cca0:	e1a00004 	mov	r0, r4
         6cca4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6cca8:	73696420 	cmnvc	r9, #536870912	; 0x20000000
    */
}

