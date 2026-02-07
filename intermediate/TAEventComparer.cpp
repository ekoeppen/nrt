#include "DDKIncludes/UtilityClasses/AEventHandler.h"

/**
 * Symbol: TAEventComparer::__ct(void)
 * Address: 00025e5c
 */
TAEventComparer::TAEventComparer() {
    /*
         25e5c:	e1a0c00d 	mov	ip, sp
         25e60:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         25e64:	e24cb004 	sub	fp, ip, #4	; 0x4
         25e68:	e1b04000 	movs	r4, r0
         25e6c:	1a000003 	bne	25e80 <TAEventComparer::__ct(void)+0x24>
         25e70:	e3a0000c 	mov	r0, #12	; 0xc
         25e74:	eb6ea22f 	bl	1bce738 <$__nw(unsigned int)>
         25e78:	e1b04000 	movs	r4, r0
         25e7c:	0a000003 	beq	25e90 <TAEventComparer::__ct(void)+0x34>
         25e80:	e1a00004 	mov	r0, r4
         25e84:	eb6ef4d5 	bl	1be31e0 <CItemComparer::$__ct(void)>
         25e88:	e59f0008 	ldr	r0, [pc, #8]	; 25e98 <TAEventComparer::__ct(void)+0x3c>
         25e8c:	e5840000 	str	r0, [r4]
         25e90:	e1a00004 	mov	r0, r4
         25e94:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         25e98:	0001def4 	streqd	sp, [r1], -r4
    */
}

/**
 * Symbol: TAEventComparer::TestItem( const(void const *))
 * Address: 00025e9c
 */
CompareResult	TAEventComparer::TestItem(const void* testItem) const {
    /*
         25e9c:	e1a0c00d 	mov	ip, sp
         25ea0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         25ea4:	e24cb004 	sub	fp, ip, #4	; 0x4
         25ea8:	e1a04000 	mov	r4, r0
         25eac:	e1a05001 	mov	r5, r1
         25eb0:	e5900004 	ldr	r0, [r0, #4]	; fField4
         25eb4:	e890000c 	ldmia	r0, {r2, r3}
         25eb8:	e591100c 	ldr	r1, [r1, #12]
         25ebc:	e5950008 	ldr	r0, [r5, #8]
         25ec0:	eb0d9b4c 	bl	38cbf8 <_lt64>
         25ec4:	e3300000 	teq	r0, #0	; 0x0
         25ec8:	13a00001 	movne	r0, #1	; 0x1
         25ecc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         25ed0:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         25ed4:	e890000c 	ldmia	r0, {r2, r3}
         25ed8:	e2855004 	add	r5, r5, #4	; 0x4
         25edc:	e9b50003 	ldmib	r5!, {r0, r1}
         25ee0:	eb0d9b54 	bl	38cc38 <_gt64>
         25ee4:	e3300000 	teq	r0, #0	; 0x0
         25ee8:	13e00000 	mvnne	r0, #0	; 0x0
         25eec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

