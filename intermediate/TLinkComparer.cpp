#include "include/TLinkComparer.h"

/**
 * Symbol: TLinkComparer::__ct(void)
 * Address: 000fd1fc
 */
TLinkComparer::TLinkComparer(void) {
    /*
         fd1fc:	e1a0c00d 	mov	ip, sp
         fd200:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fd204:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd208:	e1b04000 	movs	r4, r0
         fd20c:	1a000003 	bne	fd220 <TLinkComparer::__ct(void)+0x24>
         fd210:	e3a00010 	mov	r0, #16	; 0x10
         fd214:	eb6b4547 	bl	1bce738 <$__nw(unsigned int)>
         fd218:	e1b04000 	movs	r4, r0
         fd21c:	0a000003 	beq	fd230 <TLinkComparer::__ct(void)+0x34>
         fd220:	e1a00004 	mov	r0, r4
         fd224:	eb6b97ed 	bl	1be31e0 <CItemComparer::$__ct(void)>
         fd228:	e59f0008 	ldr	r0, [pc, #8]	; fd238 <TLinkComparer::__ct(void)+0x3c>
         fd22c:	e5840000 	str	r0, [r4]
         fd230:	e1a00004 	mov	r0, r4
         fd234:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         fd238:	0001cec8 	andeq	ip, r1, r8, asr #29
    */
}

/**
 * Symbol: TLinkComparer::TestItem( const(void const *))
 * Address: 000fd23c
 */
TLinkComparer::TestItem( const(void const *)) {
    /*
         fd23c:	e5911020 	ldr	r1, [r1, #32]
         fd240:	e590000c 	ldr	r0, [r0, #12]	; fField12
         fd244:	e1510000 	cmp	r1, r0
         fd248:	83e00000 	mvnhi	r0, #0	; 0x0
         fd24c:	81a0f00e 	movhi	pc, lr
         fd250:	23a00000 	movcs	r0, #0	; 0x0
         fd254:	33a00001 	movcc	r0, #1	; 0x1
         fd258:	e1a0f00e 	mov	pc, lr
    */
}

