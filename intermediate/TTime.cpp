#include "DDKIncludes/NewtonTime.h"

/**
 * Symbol: TTime::Set(unsigned long, TimeUnits)
 * Address: 0035e430
 */
// on most compilers 'fMyTime.TTime::Set(x, y)' will be more effcient than {
    /*
        35e430:	e1a0c00d 	mov	ip, sp
        35e434:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        35e438:	e24cb004 	sub	fp, ip, #4	; 0x4
        35e43c:	e1a06000 	mov	r6, r0
        35e440:	e1a05001 	mov	r5, r1
        35e444:	e1a04002 	mov	r4, r2
        35e448:	e1a01082 	mov	r1, r2, lsl #1
        35e44c:	e1a000a5 	mov	r0, r5, lsr #1
        35e450:	e1a02006 	mov	r2, r6
        35e454:	eb620b0d 	bl	1be1090 <$CompMul>
        35e458:	e3150001 	tst	r5, #1	; 0x1
        35e45c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        35e460:	e24dd008 	sub	sp, sp, #8	; 0x8
        35e464:	e3a00000 	mov	r0, #0	; 0x0
        35e468:	e1a01006 	mov	r1, r6
        35e46c:	e88d0011 	stmia	sp, {r0, r4}
        35e470:	e1a0000d 	mov	r0, sp
        35e474:	eb620b02 	bl	1be1084 <$CompAdd>
        35e478:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TTime::__ct(unsigned long, TimeUnits)
 * Address: 0035e47c
 */
TTime::TTime(ULong amount, TimeUnits units) { Set(amount, units); } {
    /*
        35e47c:	e1a0c00d 	mov	ip, sp
        35e480:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        35e484:	e24cb004 	sub	fp, ip, #4	; 0x4
        35e488:	e1b04000 	movs	r4, r0
        35e48c:	e1a05001 	mov	r5, r1
        35e490:	e1a06002 	mov	r6, r2
        35e494:	1a000003 	bne	35e4a8 <TTime::__ct(unsigned long, TimeUnits)+0x2c>
        35e498:	e3a00008 	mov	r0, #8	; 0x8
        35e49c:	eb61c0a5 	bl	1bce738 <$__nw(unsigned int)>
        35e4a0:	e1b04000 	movs	r4, r0
        35e4a4:	0a000003 	beq	35e4b8 <TTime::__ct(unsigned long, TimeUnits)+0x3c>
        35e4a8:	e1a02006 	mov	r2, r6
        35e4ac:	e1a01005 	mov	r1, r5
        35e4b0:	e1a00004 	mov	r0, r4
        35e4b4:	eb5ee5b7 	bl	1b17b98 <TTime::$Set(unsigned long, TimeUnits)>
        35e4b8:	e1a00004 	mov	r0, r4
        35e4bc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TTime::ConvertTo(TimeUnits)
 * Address: 0035e4c0
 */
ULong	TTime::ConvertTo(TimeUnits units) {
    /*
        35e4c0:	e1a0c00d 	mov	ip, sp
        35e4c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        35e4c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        35e4cc:	e1a04001 	mov	r4, r1
        35e4d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        35e4d4:	e1a01081 	mov	r1, r1, lsl #1
        35e4d8:	e1a0200d 	mov	r2, sp
        35e4dc:	eb620aea 	bl	1be108c <$CompDiv>
        35e4e0:	e1a00080 	mov	r0, r0, lsl #1
        35e4e4:	e59d1000 	ldr	r1, [sp]
        35e4e8:	e1510004 	cmp	r1, r4
        35e4ec:	a2800001 	addge	r0, r0, #1	; 0x1
        35e4f0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

