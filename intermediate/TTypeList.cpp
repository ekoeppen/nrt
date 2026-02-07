#include "include/TTypeList.h"

/**
 * Symbol: Make__9TTypeListSFv
 * Address: 0022ca94
 */
void TTypeList::Make() {
    /*
        22ca94:	e1a0c00d 	mov	ip, sp
        22ca98:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22ca9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22caa0:	e3a00020 	mov	r0, #32	; 0x20
        22caa4:	eb668723 	bl	1bce738 <$__nw(unsigned int)>
        22caa8:	e1b04000 	movs	r4, r0
        22caac:	0a000003 	beq	22cac0 <Make__9TTypeListSFv+0x2c>
        22cab0:	e1a00004 	mov	r0, r4
        22cab4:	ebff7f2a 	bl	20c764 <TDArray::__ct(void)>
        22cab8:	e59f0038 	ldr	r0, [pc, #38]	; 22caf8 <Make__9TTypeListSFv+0x64>
        22cabc:	e5840000 	str	r0, [r4]
        22cac0:	e3340000 	teq	r4, #0	; 0x0
        22cac4:	0a000009 	beq	22caf0 <Make__9TTypeListSFv+0x5c>
        22cac8:	e3a00000 	mov	r0, #0	; 0x0
        22cacc:	e584001c 	str	r0, [r4, #28]
        22cad0:	e1a00004 	mov	r0, r4
        22cad4:	eb64cd5f 	bl	1b60058 <TTypeList::$ITypeList(void)>
        22cad8:	e3300000 	teq	r0, #0	; 0x0
        22cadc:	0a000003 	beq	22caf0 <Make__9TTypeListSFv+0x5c>
        22cae0:	e1a00004 	mov	r0, r4
        22cae4:	e1a0e00f 	mov	lr, pc
        22cae8:	e594f000 	ldr	pc, [r4]
        22caec:	e3a04000 	mov	r4, #0	; 0x0
        22caf0:	e1a00004 	mov	r0, r4
        22caf4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        22caf8:	00021234 	andeq	r1, r2, r4, lsr r2
    */
}

/**
 * Symbol: TTypeList::ITypeList(void)
 * Address: 0022cafc
 */
TTypeList::ITypeList(void) {
    /*
        22cafc:	e1a0c00d 	mov	ip, sp
        22cb00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22cb04:	e24cb004 	sub	fp, ip, #4	; 0x4
        22cb08:	e1a04000 	mov	r4, r0
        22cb0c:	e3a02000 	mov	r2, #0	; 0x0
        22cb10:	e3a01004 	mov	r1, #4	; 0x4
        22cb14:	eb64cd2d 	bl	1b5ffd0 <TDArray::$IDArray(unsigned long, unsigned long)>
        22cb18:	e1a05000 	mov	r5, r0
        22cb1c:	e1a00004 	mov	r0, r4
        22cb20:	e5941000 	ldr	r1, [r4]
        22cb24:	e1a0e00f 	mov	lr, pc
        22cb28:	e281f024 	add	pc, r1, #36	; 0x24
        22cb2c:	e1a00005 	mov	r0, r5
        22cb30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTypeList::AddType(unsigned long)
 * Address: 0022cb34
 */
TTypeList::AddType(unsigned long) {
    /*
        22cb34:	e1a0c00d 	mov	ip, sp
        22cb38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22cb3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22cb40:	e1a04001 	mov	r4, r1
        22cb44:	e5901000 	ldr	r1, [r0]
        22cb48:	e1a0e00f 	mov	lr, pc
        22cb4c:	e281f018 	add	pc, r1, #24	; 0x18
        22cb50:	e3300000 	teq	r0, #0	; 0x0
        22cb54:	03a00001 	moveq	r0, #1	; 0x1
        22cb58:	15804000 	strne	r4, [r0]
        22cb5c:	13a00000 	movne	r0, #0	; 0x0
        22cb60:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TTypeList::AddUnique(unsigned long)
 * Address: 0022cb64
 */
TTypeList::AddUnique(unsigned long) {
    /*
        22cb64:	e1a0c00d 	mov	ip, sp
        22cb68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22cb6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22cb70:	e1a04000 	mov	r4, r0
        22cb74:	e1a05001 	mov	r5, r1
        22cb78:	e590000c 	ldr	r0, [r0, #12]	; fField12
        22cb7c:	e3300000 	teq	r0, #0	; 0x0
        22cb80:	0a000010 	beq	22cbc8 <TTypeList::AddUnique(unsigned long)+0x64>
        22cb84:	e1a00004 	mov	r0, r4
        22cb88:	e3a01000 	mov	r1, #0	; 0x0
        22cb8c:	e5942000 	ldr	r2, [r4]
        22cb90:	e1a0e00f 	mov	lr, pc
        22cb94:	e282f01c 	add	pc, r2, #28	; 0x1c
        22cb98:	e3a01000 	mov	r1, #0	; 0x0
        22cb9c:	e594200c 	ldr	r2, [r4, #12]	; fField12
        22cba0:	e3520000 	cmp	r2, #0	; 0x0
        22cba4:	9a000007 	bls	22cbc8 <TTypeList::AddUnique(unsigned long)+0x64>
        22cba8:	e5903000 	ldr	r3, [r0]
        22cbac:	e1330005 	teq	r3, r5
        22cbb0:	03a00000 	moveq	r0, #0	; 0x0
        22cbb4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        22cbb8:	e2811001 	add	r1, r1, #1	; 0x1
        22cbbc:	e2800004 	add	r0, r0, #4	; 0x4
        22cbc0:	e1520001 	cmp	r2, r1
        22cbc4:	8afffff7 	bhi	22cba8 <TTypeList::AddUnique(unsigned long)+0x44>
        22cbc8:	e1a01005 	mov	r1, r5
        22cbcc:	e1a00004 	mov	r0, r4
        22cbd0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        22cbd4:	ea64bc6e 	b	1b5bd94 <TTypeList::$AddType(unsigned long)>
    */
}

/**
 * Symbol: TTypeList::FindType(unsigned long)
 * Address: 0022cbd8
 */
TTypeList::FindType(unsigned long) {
    /*
        22cbd8:	e1a0c00d 	mov	ip, sp
        22cbdc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22cbe0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22cbe4:	e1a04000 	mov	r4, r0
        22cbe8:	e1a05001 	mov	r5, r1
        22cbec:	e3a06000 	mov	r6, #0	; 0x0
        22cbf0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        22cbf4:	e3500000 	cmp	r0, #0	; 0x0
        22cbf8:	9a000009 	bls	22cc24 <TTypeList::FindType(unsigned long)+0x4c>
        22cbfc:	e1a01006 	mov	r1, r6
        22cc00:	e1a00004 	mov	r0, r4
        22cc04:	eb64cce5 	bl	1b5ffa0 <TTypeList::$GetType(unsigned long)>
        22cc08:	e1300005 	teq	r0, r5
        22cc0c:	01a00006 	moveq	r0, r6
        22cc10:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        22cc14:	e2866001 	add	r6, r6, #1	; 0x1
        22cc18:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22cc1c:	e1500006 	cmp	r0, r6
        22cc20:	8afffff5 	bhi	22cbfc <TTypeList::FindType(unsigned long)+0x24>
        22cc24:	e3e00000 	mvn	r0, #0	; 0x0
        22cc28:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TTypeList::GetType(unsigned long)
 * Address: 0022cc2c
 */
TTypeList::GetType(unsigned long) {
    /*
        22cc2c:	e1a0c00d 	mov	ip, sp
        22cc30:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        22cc34:	e24cb004 	sub	fp, ip, #4	; 0x4
        22cc38:	e5902000 	ldr	r2, [r0]
        22cc3c:	e1a0e00f 	mov	lr, pc
        22cc40:	e282f01c 	add	pc, r2, #28	; 0x1c
        22cc44:	e5900000 	ldr	r0, [r0]
        22cc48:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TTypeList::Dump(TMsg *)
 * Address: 0022cc4c
 */
TTypeList::Dump(TMsg *) {
    /*
        22cc4c:	e1a0c00d 	mov	ip, sp
        22cc50:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22cc54:	e24cb004 	sub	fp, ip, #4	; 0x4
        22cc58:	e1a05000 	mov	r5, r0
        22cc5c:	e1a04001 	mov	r4, r1
        22cc60:	e1a00001 	mov	r0, r1
        22cc64:	eb64fe83 	bl	1b6c678 <TMsg::$MsgLF(void)>
        22cc68:	e3a06000 	mov	r6, #0	; 0x0
        22cc6c:	e595000c 	ldr	r0, [r5, #12]	; fField12
        22cc70:	e3500000 	cmp	r0, #0	; 0x0
        22cc74:	991ba870 	ldmlsdb	fp, {r4, r5, r6, fp, sp, pc}
        22cc78:	e1a01006 	mov	r1, r6
        22cc7c:	e1a00005 	mov	r0, r5
        22cc80:	eb64ccc6 	bl	1b5ffa0 <TTypeList::$GetType(unsigned long)>
        22cc84:	e1a01000 	mov	r1, r0
        22cc88:	e1a00004 	mov	r0, r4
        22cc8c:	eb65027d 	bl	1b6d688 <TMsg::$MsgType(unsigned long)>
        22cc90:	e1a00004 	mov	r0, r4
        22cc94:	e3a01020 	mov	r1, #32	; 0x20
        22cc98:	eb64fe73 	bl	1b6c66c <TMsg::$MsgChar(char)>
        22cc9c:	e2866001 	add	r6, r6, #1	; 0x1
        22cca0:	e595000c 	ldr	r0, [r5, #12]	; fField12
        22cca4:	e1500006 	cmp	r0, r6
        22cca8:	8afffff2 	bhi	22cc78 <TTypeList::Dump(TMsg *)+0x2c>
        22ccac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

