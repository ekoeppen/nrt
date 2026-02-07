#include "DDKIncludes/CommAPI/CommOptions.h"

/**
 * Symbol: TCMOTransportInfo::__ct(void)
 * Address: 0006cbd8
 */
TCMOTransportInfo::TCMOTransportInfo() {
    /*
         6cbd8:	e1a0c00d 	mov	ip, sp
         6cbdc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6cbe0:	e24cb004 	sub	fp, ip, #4	; 0x4
         6cbe4:	e1b04000 	movs	r4, r0
         6cbe8:	1a000003 	bne	6cbfc <TCMOTransportInfo::__ct(void)+0x24>
         6cbec:	e3a0002c 	mov	r0, #44	; 0x2c
         6cbf0:	eb6d86d0 	bl	1bce738 <$__nw(unsigned int)>
         6cbf4:	e1b04000 	movs	r4, r0
         6cbf8:	0a000010 	beq	6cc40 <TCMOTransportInfo::__ct(void)+0x68>
         6cbfc:	e1a00004 	mov	r0, r4
         6cc00:	e3a01303 	mov	r1, #201326592	; 0xc000000
         6cc04:	eb6d27c7 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         6cc08:	e59f0038 	ldr	r0, [pc, #38]	; 6cc48 <TCMOTransportInfo::__ct(void)+0x70>
         6cc0c:	e5840000 	str	r0, [r4]
         6cc10:	e3a00020 	mov	r0, #32	; 0x20
         6cc14:	e5840004 	str	r0, [r4, #4]
         6cc18:	e3a00000 	mov	r0, #0	; 0x0
         6cc1c:	e584000c 	str	r0, [r4, #12]
         6cc20:	e5840010 	str	r0, [r4, #16]
         6cc24:	e3e00001 	mvn	r0, #1	; 0x1
         6cc28:	e5840014 	str	r0, [r4, #20]
         6cc2c:	e5840018 	str	r0, [r4, #24]
         6cc30:	e584001c 	str	r0, [r4, #28]
         6cc34:	e5840020 	str	r0, [r4, #32]
         6cc38:	e5840024 	str	r0, [r4, #36]
         6cc3c:	e5840028 	str	r0, [r4, #40]
         6cc40:	e1a00004 	mov	r0, r4
         6cc44:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6cc48:	74696e66 	strvcbt	r6, [r9], -#3686
    */
}

