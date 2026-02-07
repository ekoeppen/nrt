#include "include/TLookupRetryInfo.h"

/**
 * Symbol: TLookupRetryInfo::__ct(unsigned long, unsigned long)
 * Address: 001262b4
 */
TLookupRetryInfo::TLookupRetryInfo(unsigned long, unsigned long) {
    /*
        1262b4:	e1a0c00d 	mov	ip, sp
        1262b8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1262bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1262c0:	e1b04000 	movs	r4, r0
        1262c4:	e1a05001 	mov	r5, r1
        1262c8:	e1a06002 	mov	r6, r2
        1262cc:	1a000003 	bne	1262e0 <TLookupRetryInfo::__ct(unsigned long, unsigned long)+0x2c>
        1262d0:	e3a00010 	mov	r0, #16	; 0x10
        1262d4:	eb6aa117 	bl	1bce738 <$__nw(unsigned int)>
        1262d8:	e1b04000 	movs	r4, r0
        1262dc:	0a000003 	beq	1262f0 <TLookupRetryInfo::__ct(unsigned long, unsigned long)+0x3c>
        1262e0:	e1a02006 	mov	r2, r6
        1262e4:	e1a01005 	mov	r1, r5
        1262e8:	e1a00004 	mov	r0, r4
        1262ec:	eb652d77 	bl	1a718d0 <TNBPRetryInfo::$__ct(unsigned long, unsigned long)>
        1262f0:	e1a00004 	mov	r0, r4
        1262f4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLookupRetryInfo::__ct(unsigned long, unsigned long, unsigned long, TLookupGrading)
 * Address: 001262f8
 */
TLookupRetryInfo::TLookupRetryInfo(unsigned long, unsigned long, unsigned long, TLookupGrading) {
    /*
        1262f8:	e1a0c00d 	mov	ip, sp
        1262fc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        126300:	e24cb004 	sub	fp, ip, #4	; 0x4
        126304:	e1b04000 	movs	r4, r0
        126308:	e1a07001 	mov	r7, r1
        12630c:	e1a06002 	mov	r6, r2
        126310:	e1a05003 	mov	r5, r3
        126314:	e59b8004 	ldr	r8, [fp, #4]
        126318:	1a000003 	bne	12632c <TLookupRetryInfo::__ct(unsigned long, unsigned long, unsigned long, TLookupGrading)+0x34>
        12631c:	e3a00010 	mov	r0, #16	; 0x10
        126320:	eb6aa104 	bl	1bce738 <$__nw(unsigned int)>
        126324:	e1b04000 	movs	r4, r0
        126328:	0a000007 	beq	12634c <TLookupRetryInfo::__ct(unsigned long, unsigned long, unsigned long, TLookupGrading)+0x54>
        12632c:	e1a03008 	mov	r3, r8
        126330:	e92d0008 	stmdb	sp!, {r3}
        126334:	e1a03005 	mov	r3, r5
        126338:	e1a02006 	mov	r2, r6
        12633c:	e1a01007 	mov	r1, r7
        126340:	e1a00004 	mov	r0, r4
        126344:	eb652d60 	bl	1a718cc <TNBPRetryInfo::$__ct(unsigned long, unsigned long, unsigned long, TLookupGrading)>
        126348:	e28dd004 	add	sp, sp, #4	; 0x4
        12634c:	e1a00004 	mov	r0, r4
        126350:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

