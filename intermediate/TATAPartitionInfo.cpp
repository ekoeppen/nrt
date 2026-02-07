#include "include/TATAPartitionInfo.h"

/**
 * Symbol: TATAPartitionInfo::__ct(void)
 * Address: 0004ab50
 */
TATAPartitionInfo::TATAPartitionInfo(void) {
    /*
         4ab50:	e1a0c00d 	mov	ip, sp
         4ab54:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4ab58:	e24cb004 	sub	fp, ip, #4	; 0x4
         4ab5c:	e1b04000 	movs	r4, r0
         4ab60:	1a000003 	bne	4ab74 <TATAPartitionInfo::__ct(void)+0x24>
         4ab64:	e3a00020 	mov	r0, #32	; 0x20
         4ab68:	eb6e0ef2 	bl	1bce738 <$__nw(unsigned int)>
         4ab6c:	e1b04000 	movs	r4, r0
         4ab70:	0a000006 	beq	4ab90 <TATAPartitionInfo::__ct(void)+0x40>
         4ab74:	e3a00000 	mov	r0, #0	; 0x0
         4ab78:	e584000c 	str	r0, [r4, #12]	; fField12
         4ab7c:	e5840014 	str	r0, [r4, #20]	; fField20
         4ab80:	e5840018 	str	r0, [r4, #24]
         4ab84:	e584001c 	str	r0, [r4, #28]
         4ab88:	e1a00004 	mov	r0, r4
         4ab8c:	eb6ec8ac 	bl	1bfce44 <TATAPartitionInfo::$Clear(void)>
         4ab90:	e1a00004 	mov	r0, r4
         4ab94:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TATAPartitionInfo::__dt(void)
 * Address: 0004ab98
 */
TATAPartitionInfo::~TATAPartitionInfo(void) {
    /*
         4ab98:	e1a0c00d 	mov	ip, sp
         4ab9c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4aba0:	e24cb004 	sub	fp, ip, #4	; 0x4
         4aba4:	e1a04000 	mov	r4, r0
         4aba8:	e1a05001 	mov	r5, r1
         4abac:	eb6ec8a4 	bl	1bfce44 <TATAPartitionInfo::$Clear(void)>
         4abb0:	e3150001 	tst	r5, #1	; 0x1
         4abb4:	11a00004 	movne	r0, r4
         4abb8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         4abbc:	1a6e0ac7 	bne	1bcd6e0 <$__dl(void *)>
         4abc0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TATAPartitionInfo::Clear(void)
 * Address: 0004abc4
 */
TATAPartitionInfo::Clear(void) {
    /*
         4abc4:	e1a0c00d 	mov	ip, sp
         4abc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4abcc:	e24cb004 	sub	fp, ip, #4	; 0x4
         4abd0:	e1a04000 	mov	r4, r0
         4abd4:	e590000c 	ldr	r0, [r0, #12]	; fField12
         4abd8:	eb6e0ac0 	bl	1bcd6e0 <$__dl(void *)>
         4abdc:	e3a05000 	mov	r5, #0	; 0x0
         4abe0:	e584500c 	str	r5, [r4, #12]	; fField12
         4abe4:	e5940014 	ldr	r0, [r4, #20]	; fField20
         4abe8:	eb6e0abc 	bl	1bcd6e0 <$__dl(void *)>
         4abec:	e3e00000 	mvn	r0, #0	; 0x0
         4abf0:	e5840000 	str	r0, [r4]
         4abf4:	e5845014 	str	r5, [r4, #20]	; fField20
         4abf8:	e5840004 	str	r0, [r4, #4]	; fField4
         4abfc:	e5840008 	str	r0, [r4, #8]	; fField8
         4ac00:	e5a40010 	str	r0, [r4, #16]!	; fField16
         4ac04:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

