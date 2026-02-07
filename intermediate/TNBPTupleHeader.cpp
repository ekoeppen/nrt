#include "include/TNBPTupleHeader.h"

/**
 * Symbol: TNBPTupleHeader::__ct(void)
 * Address: 001281c4
 */
TNBPTupleHeader::TNBPTupleHeader(void) {
    /*
        1281c4:	e1a0c00d 	mov	ip, sp
        1281c8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1281cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1281d0:	e3300000 	teq	r0, #0	; 0x0
        1281d4:	1a000003 	bne	1281e8 <TNBPTupleHeader::__ct(void)+0x24>
        1281d8:	e3a00008 	mov	r0, #8	; 0x8
        1281dc:	eb6a9955 	bl	1bce738 <$__nw(unsigned int)>
        1281e0:	e3300000 	teq	r0, #0	; 0x0
        1281e4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1281e8:	e3a01000 	mov	r1, #0	; 0x0
        1281ec:	e5c01001 	strb	r1, [r0, #1]	; fField1
        1281f0:	e5c01000 	strb	r1, [r0]
        1281f4:	e5c01002 	strb	r1, [r0, #2]	; fField2
        1281f8:	e5c01003 	strb	r1, [r0, #3]	; fField3
        1281fc:	e5c01004 	strb	r1, [r0, #4]	; fField4
        128200:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNBPTupleHeader::SetNetworkInfo(unsigned long)
 * Address: 00128204
 */
TNBPTupleHeader::SetNetworkInfo(unsigned long) {
    /*
        128204:	e1a0c00d 	mov	ip, sp
        128208:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12820c:	e24cb004 	sub	fp, ip, #4	; 0x4
        128210:	e1a04000 	mov	r4, r0
        128214:	e1a00001 	mov	r0, r1
        128218:	e3a05000 	mov	r5, #0	; 0x0
        12821c:	e24dd008 	sub	sp, sp, #8	; 0x8
        128220:	e1a0200d 	mov	r2, sp
        128224:	e28d1004 	add	r1, sp, #4	; 0x4
        128228:	eb6546ae 	bl	1a79ce8 <$GetAddress(unsigned long, unsigned short &, unsigned char &)>
        12822c:	e3300000 	teq	r0, #0	; 0x0
        128230:	1a000007 	bne	128254 <TNBPTupleHeader::SetNetworkInfo(unsigned long)+0x50>
        128234:	e59d0006 	ldr	r0, [sp, #6]
        128238:	e5c40001 	strb	r0, [r4, #1]	; fField1
        12823c:	e1a00440 	mov	r0, r0, asr #8
        128240:	e5c40000 	strb	r0, [r4]
        128244:	e5dd0000 	ldrb	r0, [sp]
        128248:	e5c40002 	strb	r0, [r4, #2]	; fField2
        12824c:	e3a00002 	mov	r0, #2	; 0x2
        128250:	e5c40003 	strb	r0, [r4, #3]	; fField3
        128254:	e1a00005 	mov	r0, r5
        128258:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

