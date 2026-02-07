#include "include/TZoneNameComparer.h"

/**
 * Symbol: TZoneNameComparer::__ct(void)
 * Address: 00284458
 */
TZoneNameComparer::TZoneNameComparer(void) {
    /*
        284458:	e1a0c00d 	mov	ip, sp
        28445c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        284460:	e24cb004 	sub	fp, ip, #4	; 0x4
        284464:	e1b04000 	movs	r4, r0
        284468:	1a000003 	bne	28447c <TZoneNameComparer::__ct(void)+0x24>
        28446c:	e3a0000c 	mov	r0, #12	; 0xc
        284470:	eb6528b0 	bl	1bce738 <$__nw(unsigned int)>
        284474:	e1b04000 	movs	r4, r0
        284478:	0a000003 	beq	28448c <TZoneNameComparer::__ct(void)+0x34>
        28447c:	e1a00004 	mov	r0, r4
        284480:	eb657b56 	bl	1be31e0 <CItemComparer::$__ct(void)>
        284484:	e59f0008 	ldr	r0, [pc, #8]	; 284494 <TZoneNameComparer::__ct(void)+0x3c>
        284488:	e5840000 	str	r0, [r4]
        28448c:	e1a00004 	mov	r0, r4
        284490:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        284494:	0001eaa4 	andeq	lr, r1, r4, lsr #21
    */
}

/**
 * Symbol: TZoneNameComparer::TestItem( const(void const *))
 * Address: 00284498
 */
TZoneNameComparer::TestItem( const(void const *)) {
    /*
        284498:	e1a0c00d 	mov	ip, sp
        28449c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2844a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2844a4:	e1a05001 	mov	r5, r1
        2844a8:	e5b04004 	ldr	r4, [r0, #4]!	; fField4
        2844ac:	e1a00004 	mov	r0, r4
        2844b0:	eb5fc152 	bl	1a74a00 <TString32::$__eq( const(TString32 const &))>
        2844b4:	e3300000 	teq	r0, #0	; 0x0
        2844b8:	13a00000 	movne	r0, #0	; 0x0
        2844bc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        2844c0:	e1a01004 	mov	r1, r4
        2844c4:	e1a00005 	mov	r0, r5
        2844c8:	eb5fc14d 	bl	1a74a04 <TString32::$__lt( const(TString32 const &))>
        2844cc:	e3300000 	teq	r0, #0	; 0x0
        2844d0:	03a00001 	moveq	r0, #1	; 0x1
        2844d4:	13e00000 	mvnne	r0, #0	; 0x0
        2844d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

