#include "DDKIncludes/CommAPI/CommAddresses.h"

/**
 * Symbol: TCMAPhoneNumber::__ct(unsigned long)
 * Address: 00066418
 */
TCMAPhoneNumber::TCMAPhoneNumber(ULong phoneLen) {
    /*
         66418:	e1a0c00d 	mov	ip, sp
         6641c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         66420:	e24cb004 	sub	fp, ip, #4	; 0x4
         66424:	e1b04000 	movs	r4, r0
         66428:	e1a05001 	mov	r5, r1
         6642c:	1a000003 	bne	66440 <TCMAPhoneNumber::__ct(unsigned long)+0x28>
         66430:	e3a00014 	mov	r0, #20	; 0x14
         66434:	eb6da0bf 	bl	1bce738 <$__nw(unsigned int)>
         66438:	e1b04000 	movs	r4, r0
         6643c:	0a000005 	beq	66458 <TCMAPhoneNumber::__ct(unsigned long)+0x40>
         66440:	e1a00004 	mov	r0, r4
         66444:	e3a01003 	mov	r1, #3	; 0x3
         66448:	eb667b98 	bl	1a052b0 <TCMARouteAddress::$__ct(long)>
         6644c:	e2850008 	add	r0, r5, #8	; 0x8
         66450:	e5840004 	str	r0, [r4, #4]
         66454:	e5845010 	str	r5, [r4, #16]
         66458:	e1a00004 	mov	r0, r4
         6645c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

