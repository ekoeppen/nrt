#include "DDKIncludes/UtilityClasses/BufferList.h"

/**
 * Symbol: CBuffer::__ct(void)
 * Address: 00045b7c
 */
CBuffer::CBuffer(void) {
    /*
         45b7c:	e1a0c00d 	mov	ip, sp
         45b80:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         45b84:	e24cb004 	sub	fp, ip, #4	; 0x4
         45b88:	e1b04000 	movs	r4, r0
         45b8c:	1a000003 	bne	45ba0 <CBuffer::__ct(void)+0x24>
         45b90:	e3a00004 	mov	r0, #4	; 0x4
         45b94:	eb6e22e7 	bl	1bce738 <$__nw(unsigned int)>
         45b98:	e1b04000 	movs	r4, r0
         45b9c:	0a000003 	beq	45bb0 <CBuffer::__ct(void)+0x34>
         45ba0:	e1a00004 	mov	r0, r4
         45ba4:	eb6e7583 	bl	1be31b8 <CMinBuffer::$__ct(void)>
         45ba8:	e59f0008 	ldr	r0, [pc, #8]	; 45bb8 <CBuffer::__ct(void)+0x3c>	; CBuffer
         45bac:	e5840000 	str	r0, [r4]
         45bb0:	e1a00004 	mov	r0, r4
         45bb4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         45bb8:	0001fb1c 	andeq	pc, r1, ip, lsl fp
    */
}

/**
 * Symbol: CBuffer::__dt(void)
 * Address: 00047a94
 */
CBuffer::~CBuffer(void) {
    /*
         47a94:	e1a0c00d 	mov	ip, sp
         47a98:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         47a9c:	e24cb004 	sub	fp, ip, #4	; 0x4
         47aa0:	e1a04000 	mov	r4, r0
         47aa4:	e1a05001 	mov	r5, r1
         47aa8:	e59f0020 	ldr	r0, [pc, #20]	; 47ad0 <CBuffer::__dt(void)+0x3c>
         47aac:	e5840000 	str	r0, [r4]
         47ab0:	e1a00004 	mov	r0, r4
         47ab4:	e3a01000 	mov	r1, #0	; 0x0
         47ab8:	eb6e71e3 	bl	1be424c <CMinBuffer::$__dt(void)>
         47abc:	e3150001 	tst	r5, #1	; 0x1
         47ac0:	11a00004 	movne	r0, r4
         47ac4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         47ac8:	1a6e1704 	bne	1bcd6e0 <$__dl(void *)>
         47acc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         47ad0:	0001fb1c 	andeq	pc, r1, ip, lsl fp
    */
}

