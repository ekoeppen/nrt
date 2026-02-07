#include "include/TConnComparer.h"

/**
 * Symbol: TConnComparer::__ct(void)
 * Address: 002a8800
 */
TConnComparer::TConnComparer(void) {
    /*
        2a8800:	e1a0c00d 	mov	ip, sp
        2a8804:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2a8808:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a880c:	e1b04000 	movs	r4, r0
        2a8810:	1a000003 	bne	2a8824 <TConnComparer::__ct(void)+0x24>
        2a8814:	e3a00010 	mov	r0, #16	; 0x10
        2a8818:	eb6497c6 	bl	1bce738 <$__nw(unsigned int)>
        2a881c:	e1b04000 	movs	r4, r0
        2a8820:	0a000003 	beq	2a8834 <TConnComparer::__ct(void)+0x34>
        2a8824:	e1a00004 	mov	r0, r4
        2a8828:	eb64ea6c 	bl	1be31e0 <CItemComparer::$__ct(void)>
        2a882c:	e59f0008 	ldr	r0, [pc, #8]	; 2a883c <TConnComparer::__ct(void)+0x3c>
        2a8830:	e5840000 	str	r0, [r4]
        2a8834:	e1a00004 	mov	r0, r4
        2a8838:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2a883c:	0001caac 	andeq	ip, r1, ip, lsr #21
    */
}

/**
 * Symbol: TConnComparer::TestItem( const(void const *))
 * Address: 002a8840
 */
TConnComparer::TestItem( const(void const *)) {
    /*
        2a8840:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2a8844:	e591116c 	ldr	r1, [r1, #364]
        2a8848:	e1500001 	cmp	r0, r1
        2a884c:	33e00000 	mvncc	r0, #0	; 0x0
        2a8850:	31a0f00e 	movcc	pc, lr
        2a8854:	93a00000 	movls	r0, #0	; 0x0
        2a8858:	83a00001 	movhi	r0, #1	; 0x1
        2a885c:	e1a0f00e 	mov	pc, lr
    */
}

