#include "DDKIncludes/CommAPI/CommAddresses.h"

/**
 * Symbol: TCMAAppleTalkAddr::__ct(void)
 * Address: 00066460
 */
TCMAAppleTalkAddr::TCMAAppleTalkAddr() {
    /*
         66460:	e1a0c00d 	mov	ip, sp
         66464:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         66468:	e24cb004 	sub	fp, ip, #4	; 0x4
         6646c:	e1b04000 	movs	r4, r0
         66470:	1a000003 	bne	66484 <TCMAAppleTalkAddr::__ct(void)+0x24>
         66474:	e3a00018 	mov	r0, #24	; 0x18
         66478:	eb6da0ae 	bl	1bce738 <$__nw(unsigned int)>
         6647c:	e1b04000 	movs	r4, r0
         66480:	0a000004 	beq	66498 <TCMAAppleTalkAddr::__ct(void)+0x38>
         66484:	e1a00004 	mov	r0, r4
         66488:	e3a01002 	mov	r1, #2	; 0x2
         6648c:	eb667b87 	bl	1a052b0 <TCMARouteAddress::$__ct(long)>
         66490:	e3a0000c 	mov	r0, #12	; 0xc
         66494:	e5840004 	str	r0, [r4, #4]
         66498:	e1a00004 	mov	r0, r4
         6649c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

