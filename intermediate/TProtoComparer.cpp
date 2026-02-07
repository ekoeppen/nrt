#include "include/TProtoComparer.h"

/**
 * Symbol: TProtoComparer::__ct(void)
 * Address: 000fd708
 */
TProtoComparer::TProtoComparer(void) {
    /*
         fd708:	e1a0c00d 	mov	ip, sp
         fd70c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fd710:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd714:	e1b04000 	movs	r4, r0
         fd718:	1a000003 	bne	fd72c <TProtoComparer::__ct(void)+0x24>
         fd71c:	e3a00010 	mov	r0, #16	; 0x10
         fd720:	eb6b4404 	bl	1bce738 <$__nw(unsigned int)>
         fd724:	e1b04000 	movs	r4, r0
         fd728:	0a000003 	beq	fd73c <TProtoComparer::__ct(void)+0x34>
         fd72c:	e1a00004 	mov	r0, r4
         fd730:	eb6b96aa 	bl	1be31e0 <CItemComparer::$__ct(void)>
         fd734:	e59f0008 	ldr	r0, [pc, #8]	; fd744 <TProtoComparer::__ct(void)+0x3c>
         fd738:	e5840000 	str	r0, [r4]
         fd73c:	e1a00004 	mov	r0, r4
         fd740:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         fd744:	0001dbc0 	andeq	sp, r1, r0, asr #23
    */
}

/**
 * Symbol: TProtoComparer::TestItem( const(void const *))
 * Address: 000fdaf8
 */
TProtoComparer::TestItem( const(void const *)) {
    /*
         fdaf8:	e5d0000c 	ldrb	r0, [r0, #12]	; fField12
         fdafc:	e5d11000 	ldrb	r1, [r1]
         fdb00:	e1500001 	cmp	r0, r1
         fdb04:	b3e00000 	mvnlt	r0, #0	; 0x0
         fdb08:	b1a0f00e 	movlt	pc, lr
         fdb0c:	d3a00000 	movle	r0, #0	; 0x0
         fdb10:	c3a00001 	movgt	r0, #1	; 0x1
         fdb14:	e1a0f00e 	mov	pc, lr
    */
}

