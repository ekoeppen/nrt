#include "DDKIncludes/OS600/NameServer.h"

/**
 * Symbol: TNameServerReply::__ct(void)
 * Address: 00131ed0
 */
TNameServerReply::TNameServerReply() {
    /*
        131ed0:	e1a0c00d 	mov	ip, sp
        131ed4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        131ed8:	e24cb004 	sub	fp, ip, #4	; 0x4
        131edc:	e3300000 	teq	r0, #0	; 0x0
        131ee0:	1a000003 	bne	131ef4 <TNameServerReply::__ct(void)+0x24>
        131ee4:	e3a0000c 	mov	r0, #12	; 0xc
        131ee8:	eb6a7212 	bl	1bce738 <$__nw(unsigned int)>
        131eec:	e3300000 	teq	r0, #0	; 0x0
        131ef0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        131ef4:	e3a01000 	mov	r1, #0	; 0x0
        131ef8:	e5801008 	str	r1, [r0, #8]	; fSpec
        131efc:	e5801000 	str	r1, [r0]
        131f00:	e5801004 	str	r1, [r0, #4]	; fThing
        131f04:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        131f08:	41737065 	cmnmi	r3, r5, rrx
        131f0c:	63744e6f 	cmnvs	r4, #1776	; 0x6f0
        131f10:	726d0000 	rsbvc	r0, sp, #0	; 0x0
        131f14:	42617365 	rsbmi	r7, r1, #-1811939327	; 0x94000001
        131f18:	00000000 	andeq	r0, r0, r0
        131f1c:	48656967 	stmmida	r5!, {r0, r1, r2, r5, r6, r8, fp, sp, lr}^
        131f20:	68740000 	ldmvsda	r4!, {}^
        131f24:	43617048 	cmnmi	r1, #72	; 0x48
        131f28:	65696768 	strvsb	r6, [r9, -#1896]!
        131f2c:	74000000 	strvc	r0, [r0]
        131f30:	5374726f 	cmnpl	r4, #-268435450	; 0xf0000006
        131f34:	6b65436f 	blvs	1a82cf8 <TNBPEntityName::$FormFromEntityName(unsigned short *)+0xb7c>
        131f38:	756e7400 	strvcb	r7, [lr, -#1024]!
        131f3c:	496d6167 	stmmidb	sp!, {r0, r1, r2, r5, r6, r8, sp, lr}^
        131f40:	6553706c 	ldrvsb	r7, [r3, -#108]
        131f44:	61744c69 	cmnvs	r4, r9, ror #24
        131f48:	6d697465 	stcvsl	4, cr7, [r9, -#404]!
        131f4c:	64000000 	strvs	r0, [r0]
        131f50:	5374726f 	cmnpl	r4, #-268435450	; 0xf0000006
        131f54:	6b655055 	blvs	1a860b0 <TSocket::$Send(TAddress *, unsigned char, CBufferList *)+0xdb4>
        131f58:	44000000 	strmi	r0, [r0]
    */
}

