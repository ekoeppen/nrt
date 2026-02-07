#include "DDKIncludes/UtilityClasses/AEventHandler.h"

/**
 * Symbol: TAEHandlerComparer::TestItem( const(void const *))
 * Address: 00025468
 */
CompareResult	TAEHandlerComparer::TestItem(const void* testItem) const {
    /*
         25468:	e1a0c00d 	mov	ip, sp
         2546c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         25470:	e24cb004 	sub	fp, ip, #4	; 0x4
         25474:	e1a04000 	mov	r4, r0
         25478:	e3a06000 	mov	r6, #0	; 0x0
         2547c:	e1a05001 	mov	r5, r1
         25480:	e5900004 	ldr	r0, [r0, #4]	; fField4
         25484:	e2800004 	add	r0, r0, #4	; 0x4
         25488:	e9b0000c 	ldmib	r0!, {r2, r3}
         2548c:	e591100c 	ldr	r1, [r1, #12]
         25490:	e5950008 	ldr	r0, [r5, #8]
         25494:	eb0d9dd7 	bl	38cbf8 <_lt64>
         25498:	e3300000 	teq	r0, #0	; 0x0
         2549c:	13a06001 	movne	r6, #1	; 0x1
         254a0:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         254a4:	e2800004 	add	r0, r0, #4	; 0x4
         254a8:	e9b0000c 	ldmib	r0!, {r2, r3}
         254ac:	e2855004 	add	r5, r5, #4	; 0x4
         254b0:	e9b50003 	ldmib	r5!, {r0, r1}
         254b4:	eb0d9ddf 	bl	38cc38 <_gt64>
         254b8:	e3300000 	teq	r0, #0	; 0x0
         254bc:	13e06000 	mvnne	r6, #0	; 0x0
         254c0:	e1a00006 	mov	r0, r6
         254c4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAEHandlerComparer::__ct(void)
 * Address: 00025cdc
 */
TAEHandlerComparer::TAEHandlerComparer() {
    /*
         25cdc:	e1a0c00d 	mov	ip, sp
         25ce0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         25ce4:	e24cb004 	sub	fp, ip, #4	; 0x4
         25ce8:	e1b04000 	movs	r4, r0
         25cec:	1a000003 	bne	25d00 <TAEHandlerComparer::__ct(void)+0x24>
         25cf0:	e3a0000c 	mov	r0, #12	; 0xc
         25cf4:	eb6ea28f 	bl	1bce738 <$__nw(unsigned int)>
         25cf8:	e1b04000 	movs	r4, r0
         25cfc:	0a000003 	beq	25d10 <TAEHandlerComparer::__ct(void)+0x34>
         25d00:	e1a00004 	mov	r0, r4
         25d04:	eb6ef535 	bl	1be31e0 <CItemComparer::$__ct(void)>
         25d08:	e59f0008 	ldr	r0, [pc, #8]	; 25d18 <TAEHandlerComparer::__ct(void)+0x3c>
         25d0c:	e5840000 	str	r0, [r4]
         25d10:	e1a00004 	mov	r0, r4
         25d14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         25d18:	0001eaa8 	andeq	lr, r1, r8, lsr #21
    */
}

