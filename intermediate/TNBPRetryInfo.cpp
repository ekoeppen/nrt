#include "include/TNBPRetryInfo.h"

/**
 * Symbol: TNBPRetryInfo::__ct(unsigned long, unsigned long, unsigned long, TLookupGrading)
 * Address: 00126188
 */
TNBPRetryInfo::TNBPRetryInfo(unsigned long, unsigned long, unsigned long, TLookupGrading) {
    /*
        126188:	e1a0c00d 	mov	ip, sp
        12618c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        126190:	e24cb004 	sub	fp, ip, #4	; 0x4
        126194:	e1a06001 	mov	r6, r1
        126198:	e1a05002 	mov	r5, r2
        12619c:	e1a04003 	mov	r4, r3
        1261a0:	e3300000 	teq	r0, #0	; 0x0
        1261a4:	e59b7004 	ldr	r7, [fp, #4]	; fField4
        1261a8:	1a000003 	bne	1261bc <TNBPRetryInfo::__ct(unsigned long, unsigned long, unsigned long, TLookupGrading)+0x34>
        1261ac:	e3a00010 	mov	r0, #16	; 0x10
        1261b0:	eb6aa160 	bl	1bce738 <$__nw(unsigned int)>
        1261b4:	e3300000 	teq	r0, #0	; 0x0
        1261b8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1261bc:	e1550004 	cmp	r5, r4
        1261c0:	81a01004 	movhi	r1, r4
        1261c4:	81a04005 	movhi	r4, r5
        1261c8:	81a05001 	movhi	r5, r1
        1261cc:	e59f1048 	ldr	r1, [pc, #48]	; 12621c <TNBPRetryInfo::__ct(unsigned long, unsigned long, unsigned long, TLookupGrading)+0x94>
        1261d0:	e1550001 	cmp	r5, r1
        1261d4:	31a05001 	movcc	r5, r1
        1261d8:	e3a0182f 	mov	r1, #3080192	; 0x2f0000
        1261dc:	e281140d 	add	r1, r1, #218103808	; 0xd000000
        1261e0:	e1550001 	cmp	r5, r1
        1261e4:	91a01005 	movls	r1, r5
        1261e8:	e1a05001 	mov	r5, r1
        1261ec:	e59f1028 	ldr	r1, [pc, #28]	; 12621c <TNBPRetryInfo::__ct(unsigned long, unsigned long, unsigned long, TLookupGrading)+0x94>
        1261f0:	e1540001 	cmp	r4, r1
        1261f4:	31a04001 	movcc	r4, r1
        1261f8:	e3a018d6 	mov	r1, #14024704	; 0xd60000
        1261fc:	e2811483 	add	r1, r1, #-2097152000	; 0x83000000
        126200:	e1540001 	cmp	r4, r1
        126204:	91a01004 	movls	r1, r4
        126208:	e2800008 	add	r0, r0, #8	; 0x8
        12620c:	e8800082 	stmia	r0, {r1, r7}
        126210:	e5205004 	str	r5, [r0, -#4]!	; fField4
        126214:	e5206004 	str	r6, [r0, -#4]!	; fField4
        126218:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        12621c:	00059fd8 	ldreqd	r9, [r5], -r8
    */
}

/**
 * Symbol: TNBPRetryInfo::CalculateDuration(unsigned long)
 * Address: 00126220
 */
TNBPRetryInfo::CalculateDuration(unsigned long) {
    /*
        126220:	e1a0c00d 	mov	ip, sp
        126224:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        126228:	e24cb004 	sub	fp, ip, #4	; 0x4
        12622c:	e590300c 	ldr	r3, [r0, #12]	; fField12
        126230:	e3330000 	teq	r3, #0	; 0x0
        126234:	05b02004 	ldreq	r2, [r0, #4]!	; fField4
        126238:	0a000007 	beq	12625c <TNBPRetryInfo::CalculateDuration(unsigned long)+0x3c>
        12623c:	e3330001 	teq	r3, #1	; 0x1
        126240:	0a000003 	beq	126254 <TNBPRetryInfo::CalculateDuration(unsigned long)+0x34>
        126244:	e3330002 	teq	r3, #2	; 0x2
        126248:	1a000003 	bne	12625c <TNBPRetryInfo::CalculateDuration(unsigned long)+0x3c>
        12624c:	eb654245 	bl	1a76b68 <TNBPRetryInfo::$CalculateExpGrading(unsigned long)>
        126250:	ea000000 	b	126258 <TNBPRetryInfo::CalculateDuration(unsigned long)+0x38>
        126254:	eb654244 	bl	1a76b6c <TNBPRetryInfo::$CalculateLinearGrading(unsigned long)>
        126258:	e1a02000 	mov	r2, r0
        12625c:	e1a00002 	mov	r0, r2
        126260:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNBPRetryInfo::CalculateLinearGrading(unsigned long)
 * Address: 00126264
 */
TNBPRetryInfo::CalculateLinearGrading(unsigned long) {
    /*
        126264:	e1a0c00d 	mov	ip, sp
        126268:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12626c:	e24cb004 	sub	fp, ip, #4	; 0x4
        126270:	e1a04001 	mov	r4, r1
        126274:	e5905000 	ldr	r5, [r0]
        126278:	e3550064 	cmp	r5, #100	; 0x64
        12627c:	91a02005 	movls	r2, r5
        126280:	83a02064 	movhi	r2, #100	; 0x64
        126284:	e5b06004 	ldr	r6, [r0, #4]!	; fField4
        126288:	e5901004 	ldr	r1, [r0, #4]	; fField4
        12628c:	e0411006 	sub	r1, r1, r6
        126290:	e1a00002 	mov	r0, r2
        126294:	eb6a31ab 	bl	1bb2948 <$__rt_udiv>
        126298:	e0451004 	sub	r1, r5, r4
        12629c:	e3510064 	cmp	r1, #100	; 0x64
        1262a0:	83a01064 	movhi	r1, #100	; 0x64
        1262a4:	e0206091 	mla	r0, r1, r0, r6
        1262a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPRetryInfo::CalculateExpGrading(unsigned long)
 * Address: 001262ac
 */
TNBPRetryInfo::CalculateExpGrading(unsigned long) {
    /*
        1262ac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1262b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPRetryInfo::__ct(void)
 * Address: 00127310
 */
TNBPRetryInfo::TNBPRetryInfo(void) {
    /*
        127310:	e1a0c00d 	mov	ip, sp
        127314:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        127318:	e24cb004 	sub	fp, ip, #4	; 0x4
        12731c:	e3300000 	teq	r0, #0	; 0x0
        127320:	1a000003 	bne	127334 <TNBPRetryInfo::__ct(void)+0x24>
        127324:	e3a00010 	mov	r0, #16	; 0x10
        127328:	eb6a9d02 	bl	1bce738 <$__nw(unsigned int)>
        12732c:	e3300000 	teq	r0, #0	; 0x0
        127330:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        127334:	e3a01003 	mov	r1, #3	; 0x3
        127338:	e5801000 	str	r1, [r0]
        12733c:	e3a019c2 	mov	r1, #3178496	; 0x308000
        127340:	e2811501 	add	r1, r1, #4194304	; 0x400000
        127344:	e5801008 	str	r1, [r0, #8]	; fField8
        127348:	e5801004 	str	r1, [r0, #4]	; fField4
        12734c:	e3a01000 	mov	r1, #0	; 0x0
        127350:	e580100c 	str	r1, [r0, #12]	; fField12
        127354:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNBPRetryInfo::__ct(unsigned long, unsigned long)
 * Address: 00127358
 */
TNBPRetryInfo::TNBPRetryInfo(unsigned long, unsigned long) {
    /*
        127358:	e1a0c00d 	mov	ip, sp
        12735c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        127360:	e24cb004 	sub	fp, ip, #4	; 0x4
        127364:	e1a05001 	mov	r5, r1
        127368:	e1a04002 	mov	r4, r2
        12736c:	e3300000 	teq	r0, #0	; 0x0
        127370:	1a000003 	bne	127384 <TNBPRetryInfo::__ct(unsigned long, unsigned long)+0x2c>
        127374:	e3a00010 	mov	r0, #16	; 0x10
        127378:	eb6a9cee 	bl	1bce738 <$__nw(unsigned int)>
        12737c:	e3300000 	teq	r0, #0	; 0x0
        127380:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        127384:	e5804008 	str	r4, [r0, #8]	; fField8
        127388:	e5805000 	str	r5, [r0]
        12738c:	e3a01000 	mov	r1, #0	; 0x0
        127390:	e580100c 	str	r1, [r0, #12]	; fField12
        127394:	e5804004 	str	r4, [r0, #4]	; fField4
        127398:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

