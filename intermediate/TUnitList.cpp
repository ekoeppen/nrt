#include "include/TUnitList.h"

/**
 * Symbol: Make__9TUnitListSFv
 * Address: 0022ccf0
 */
void TUnitList::Make() {
    /*
        22ccf0:	e1a0c00d 	mov	ip, sp
        22ccf4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22ccf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ccfc:	e3a00020 	mov	r0, #32	; 0x20
        22cd00:	eb66868c 	bl	1bce738 <$__nw(unsigned int)>
        22cd04:	e1b04000 	movs	r4, r0
        22cd08:	0a000003 	beq	22cd1c <Make__9TUnitListSFv+0x2c>
        22cd0c:	e1a00004 	mov	r0, r4
        22cd10:	ebff7e93 	bl	20c764 <TDArray::__ct(void)>
        22cd14:	e59f0038 	ldr	r0, [pc, #38]	; 22cd54 <Make__9TUnitListSFv+0x64>
        22cd18:	e5840000 	str	r0, [r4]
        22cd1c:	e3340000 	teq	r4, #0	; 0x0
        22cd20:	0a000009 	beq	22cd4c <Make__9TUnitListSFv+0x5c>
        22cd24:	e3a00000 	mov	r0, #0	; 0x0
        22cd28:	e584001c 	str	r0, [r4, #28]
        22cd2c:	e1a00004 	mov	r0, r4
        22cd30:	eb64ccca 	bl	1b60060 <TUnitList::$IUnitList(void)>
        22cd34:	e3300000 	teq	r0, #0	; 0x0
        22cd38:	0a000003 	beq	22cd4c <Make__9TUnitListSFv+0x5c>
        22cd3c:	e1a00004 	mov	r0, r4
        22cd40:	e1a0e00f 	mov	lr, pc
        22cd44:	e594f000 	ldr	pc, [r4]
        22cd48:	e3a04000 	mov	r4, #0	; 0x0
        22cd4c:	e1a00004 	mov	r0, r4
        22cd50:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        22cd54:	00021288 	andeq	r1, r2, r8, lsl #5
    */
}

/**
 * Symbol: TUnitList::IUnitList(void)
 * Address: 0022cd58
 */
TUnitList::IUnitList(void) {
    /*
        22cd58:	e3a02000 	mov	r2, #0	; 0x0
        22cd5c:	e3a01004 	mov	r1, #4	; 0x4
        22cd60:	ea64cc9a 	b	1b5ffd0 <TDArray::$IDArray(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TUnitList::Purge(void)
 * Address: 0022cd64
 */
TUnitList::Purge(void) {
    /*
        22cd64:	e1a0c00d 	mov	ip, sp
        22cd68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22cd6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22cd70:	e1a04000 	mov	r4, r0
        22cd74:	e3a05000 	mov	r5, #0	; 0x0
        22cd78:	e590000c 	ldr	r0, [r0, #12]	; fField12
        22cd7c:	e3500000 	cmp	r0, #0	; 0x0
        22cd80:	991ba830 	ldmlsdb	fp, {r4, r5, fp, sp, pc}
        22cd84:	e1a01005 	mov	r1, r5
        22cd88:	e1a00004 	mov	r0, r4
        22cd8c:	eb64cc86 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        22cd90:	e1a0e00f 	mov	lr, pc
        22cd94:	e590f000 	ldr	pc, [r0]
        22cd98:	e2855001 	add	r5, r5, #1	; 0x1
        22cd9c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22cda0:	e1500005 	cmp	r0, r5
        22cda4:	8afffff6 	bhi	22cd84 <TUnitList::Purge(void)+0x20>
        22cda8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitList::AddUnit(TUnit *)
 * Address: 0022cdac
 */
TUnitList::AddUnit(TUnit *) {
    /*
        22cdac:	e1a0c00d 	mov	ip, sp
        22cdb0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22cdb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22cdb8:	e1a04001 	mov	r4, r1
        22cdbc:	e5901000 	ldr	r1, [r0]
        22cdc0:	e1a0e00f 	mov	lr, pc
        22cdc4:	e281f018 	add	pc, r1, #24	; 0x18
        22cdc8:	e3300000 	teq	r0, #0	; 0x0
        22cdcc:	03a00001 	moveq	r0, #1	; 0x1
        22cdd0:	15804000 	strne	r4, [r0]
        22cdd4:	13a00000 	movne	r0, #0	; 0x0
        22cdd8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitList::AddUnique(TUnit *)
 * Address: 0022cddc
 */
TUnitList::AddUnique(TUnit *) {
    /*
        22cddc:	e1a0c00d 	mov	ip, sp
        22cde0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22cde4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22cde8:	e1a04000 	mov	r4, r0
        22cdec:	e1a05001 	mov	r5, r1
        22cdf0:	e590600c 	ldr	r6, [r0, #12]	; fField12
        22cdf4:	e3360000 	teq	r6, #0	; 0x0
        22cdf8:	0a00000f 	beq	22ce3c <TUnitList::AddUnique(TUnit *)+0x60>
        22cdfc:	e1a00004 	mov	r0, r4
        22ce00:	e3a01000 	mov	r1, #0	; 0x0
        22ce04:	e5942000 	ldr	r2, [r4]
        22ce08:	e1a0e00f 	mov	lr, pc
        22ce0c:	e282f01c 	add	pc, r2, #28	; 0x1c
        22ce10:	e3a01000 	mov	r1, #0	; 0x0
        22ce14:	e3560000 	cmp	r6, #0	; 0x0
        22ce18:	9a000007 	bls	22ce3c <TUnitList::AddUnique(TUnit *)+0x60>
        22ce1c:	e5902000 	ldr	r2, [r0]
        22ce20:	e1320005 	teq	r2, r5
        22ce24:	03a00000 	moveq	r0, #0	; 0x0
        22ce28:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        22ce2c:	e2811001 	add	r1, r1, #1	; 0x1
        22ce30:	e2800004 	add	r0, r0, #4	; 0x4
        22ce34:	e1510006 	cmp	r1, r6
        22ce38:	3afffff7 	bcc	22ce1c <TUnitList::AddUnique(TUnit *)+0x40>
        22ce3c:	e1a01005 	mov	r1, r5
        22ce40:	e1a00004 	mov	r0, r4
        22ce44:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        22ce48:	ea64bbd4 	b	1b5bda0 <TUnitList::$AddUnit(TUnit *)>
    */
}

/**
 * Symbol: TUnitList::GetUnit(unsigned long)
 * Address: 0022ce4c
 */
TUnitList::GetUnit(unsigned long) {
    /*
        22ce4c:	e1a0c00d 	mov	ip, sp
        22ce50:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        22ce54:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ce58:	e5902000 	ldr	r2, [r0]
        22ce5c:	e1a0e00f 	mov	lr, pc
        22ce60:	e282f01c 	add	pc, r2, #28	; 0x1c
        22ce64:	e3300000 	teq	r0, #0	; 0x0
        22ce68:	15900000 	ldrne	r0, [r0]
        22ce6c:	03a00000 	moveq	r0, #0	; 0x0
        22ce70:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUnitList::Dump(TMsg *)
 * Address: 0022ce74
 */
TUnitList::Dump(TMsg *) {
    /*
        22ce74:	e1a0c00d 	mov	ip, sp
        22ce78:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22ce7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ce80:	e1a04000 	mov	r4, r0
        22ce84:	e1a05001 	mov	r5, r1
        22ce88:	e3a06000 	mov	r6, #0	; 0x0
        22ce8c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        22ce90:	e3500000 	cmp	r0, #0	; 0x0
        22ce94:	9a00000a 	bls	22cec4 <TUnitList::Dump(TMsg *)+0x50>
        22ce98:	e1a01006 	mov	r1, r6
        22ce9c:	e1a00004 	mov	r0, r4
        22cea0:	eb64cc41 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        22cea4:	e1a01005 	mov	r1, r5
        22cea8:	e5902000 	ldr	r2, [r0]
        22ceac:	e1a0e00f 	mov	lr, pc
        22ceb0:	e282f028 	add	pc, r2, #40	; 0x28
        22ceb4:	e2866001 	add	r6, r6, #1	; 0x1
        22ceb8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22cebc:	e1500006 	cmp	r0, r6
        22cec0:	8afffff4 	bhi	22ce98 <TUnitList::Dump(TMsg *)+0x24>
        22cec4:	e1a00005 	mov	r0, r5
        22cec8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        22cecc:	ea64fde9 	b	1b6c678 <TMsg::$MsgLF(void)>
    */
}

