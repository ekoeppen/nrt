#include "DDKIncludes/CommAPI/CommAddresses.h"

/**
 * Symbol: TCMANamedAppleTalkAddr::__ct(unsigned long, long)
 * Address: 000664a0
 */
TCMANamedAppleTalkAddr::TCMANamedAppleTalkAddr(ULong addrLen, NamedAddrType nameType = kNBPEntityName) {
    /*
         664a0:	e1a0c00d 	mov	ip, sp
         664a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         664a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         664ac:	e1b04000 	movs	r4, r0
         664b0:	e1a05001 	mov	r5, r1
         664b4:	e1a06002 	mov	r6, r2
         664b8:	1a000003 	bne	664cc <TCMANamedAppleTalkAddr::__ct(unsigned long, long)+0x2c>
         664bc:	e3a0001c 	mov	r0, #28	; 0x1c
         664c0:	eb6da09c 	bl	1bce738 <$__nw(unsigned int)>
         664c4:	e1b04000 	movs	r4, r0
         664c8:	0a000006 	beq	664e8 <TCMANamedAppleTalkAddr::__ct(unsigned long, long)+0x48>
         664cc:	e1a00004 	mov	r0, r4
         664d0:	e3a01001 	mov	r1, #1	; 0x1
         664d4:	eb667b75 	bl	1a052b0 <TCMARouteAddress::$__ct(long)>
         664d8:	e2850010 	add	r0, r5, #16	; 0x10
         664dc:	e5840004 	str	r0, [r4, #4]
         664e0:	e5845018 	str	r5, [r4, #24]
         664e4:	e5846010 	str	r6, [r4, #16]
         664e8:	e1a00004 	mov	r0, r4
         664ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

