#include "include/TSocketComparer.h"

/**
 * Symbol: TSocketComparer::__ct(void)
 * Address: 0007a72c
 */
TSocketComparer::TSocketComparer(void) {
    /*
         7a72c:	e1a0c00d 	mov	ip, sp
         7a730:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         7a734:	e24cb004 	sub	fp, ip, #4	; 0x4
         7a738:	e1b04000 	movs	r4, r0
         7a73c:	1a000003 	bne	7a750 <TSocketComparer::__ct(void)+0x24>
         7a740:	e3a00010 	mov	r0, #16	; 0x10
         7a744:	eb6d4ffb 	bl	1bce738 <$__nw(unsigned int)>
         7a748:	e1b04000 	movs	r4, r0
         7a74c:	0a000003 	beq	7a760 <TSocketComparer::__ct(void)+0x34>
         7a750:	e1a00004 	mov	r0, r4
         7a754:	eb6da2a1 	bl	1be31e0 <CItemComparer::$__ct(void)>
         7a758:	e59f0008 	ldr	r0, [pc, #8]	; 7a768 <TSocketComparer::__ct(void)+0x3c>
         7a75c:	e5840000 	str	r0, [r4]
         7a760:	e1a00004 	mov	r0, r4
         7a764:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         7a768:	0001e1b8 	streqh	lr, [r1], -r8
    */
}

/**
 * Symbol: TSocketComparer::TestItem( const(void const *))
 * Address: 0007ad58
 */
TSocketComparer::TestItem( const(void const *)) {
    /*
         7ad58:	e5d0000c 	ldrb	r0, [r0, #12]	; fField12
         7ad5c:	e5d11000 	ldrb	r1, [r1]
         7ad60:	e1500001 	cmp	r0, r1
         7ad64:	b3e00000 	mvnlt	r0, #0	; 0x0
         7ad68:	b1a0f00e 	movlt	pc, lr
         7ad6c:	d3a00000 	movle	r0, #0	; 0x0
         7ad70:	c3a00001 	movgt	r0, #1	; 0x1
         7ad74:	e1a0f00e 	mov	pc, lr
    */
}

