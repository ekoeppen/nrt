#include "DDKIncludes/CommAPI/CommAddresses.h"

/**
 * Symbol: TCMARouteAddress::__ct(long)
 * Address: 000663cc
 */
TCMARouteAddress::TCMARouteAddress(RouteAddrType type);		// can't instantiate directly, use derived class {
    /*
         663cc:	e1a0c00d 	mov	ip, sp
         663d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         663d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         663d8:	e1b04000 	movs	r4, r0
         663dc:	e1a05001 	mov	r5, r1
         663e0:	1a000003 	bne	663f4 <TCMARouteAddress::__ct(long)+0x28>
         663e4:	e3a00010 	mov	r0, #16	; 0x10
         663e8:	eb6da0d2 	bl	1bce738 <$__nw(unsigned int)>
         663ec:	e1b04000 	movs	r4, r0
         663f0:	0a000005 	beq	6640c <TCMARouteAddress::__ct(long)+0x40>
         663f4:	e1a00004 	mov	r0, r4
         663f8:	e3a01302 	mov	r1, #134217728	; 0x8000000
         663fc:	eb6d41c9 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         66400:	e59f000c 	ldr	r0, [pc, #c]	; 66414 <TCMARouteAddress::__ct(long)+0x48>
         66404:	e5840000 	str	r0, [r4]
         66408:	e584500c 	str	r5, [r4, #12]
         6640c:	e1a00004 	mov	r0, r4
         66410:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         66414:	726f7574 	rsbvc	r7, pc, #486539264	; 0x1d000000
    */
}

