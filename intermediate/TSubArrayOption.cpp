#include "DDKIncludes/CommAPI/OptionArray.h"

/**
 * Symbol: TSubArrayOption::__ct(unsigned long, long)
 * Address: 0014b014
 */
TSubArrayOption::TSubArrayOption(unsigned long, long) {
    /*
        14b014:	e1a0c00d 	mov	ip, sp
        14b018:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14b01c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b020:	e1b04000 	movs	r4, r0
        14b024:	e1a06001 	mov	r6, r1
        14b028:	e1a05002 	mov	r5, r2
        14b02c:	1a000003 	bne	14b040 <TSubArrayOption::__ct(unsigned long, long)+0x2c>
        14b030:	e3a00010 	mov	r0, #16	; 0x10
        14b034:	eb6a0dbf 	bl	1bce738 <$__nw(unsigned int)>
        14b038:	e1b04000 	movs	r4, r0
        14b03c:	0a000007 	beq	14b060 <TSubArrayOption::__ct(unsigned long, long)+0x4c>
        14b040:	e1a00004 	mov	r0, r4
        14b044:	e3a01303 	mov	r1, #201326592	; 0xc000000
        14b048:	eb69aeb6 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        14b04c:	e59f0014 	ldr	r0, [pc, #14]	; 14b068 <TSubArrayOption::__ct(unsigned long, long)+0x54>
        14b050:	e5840000 	str	r0, [r4]
        14b054:	e2860004 	add	r0, r6, #4	; 0x4
        14b058:	e5840004 	str	r0, [r4, #4]	; TSubArrayOption
        14b05c:	e584500c 	str	r5, [r4, #12]
        14b060:	e1a00004 	mov	r0, r4
        14b064:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        14b068:	73756261 	cmnvc	r5, #268435462	; 0x10000006
    */
}

