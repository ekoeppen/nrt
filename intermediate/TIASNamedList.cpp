#include "include/TIASNamedList.h"

/**
 * Symbol: TIASNamedList::__ct(void)
 * Address: 000f1cbc
 */
TIASNamedList::TIASNamedList(void) {
    /*
         f1cbc:	e1a0c00d 	mov	ip, sp
         f1cc0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f1cc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1cc8:	e1b04000 	movs	r4, r0
         f1ccc:	1a000003 	bne	f1ce0 <TIASNamedList::__ct(void)+0x24>
         f1cd0:	e3a0001c 	mov	r0, #28	; 0x1c
         f1cd4:	eb6b7297 	bl	1bce738 <$__nw(unsigned int)>
         f1cd8:	e1b04000 	movs	r4, r0
         f1cdc:	0a000003 	beq	f1cf0 <TIASNamedList::__ct(void)+0x34>
         f1ce0:	e1a00004 	mov	r0, r4
         f1ce4:	eb6bc950 	bl	1be422c <CList::$__ct(void)>
         f1ce8:	e3a00000 	mov	r0, #0	; 0x0
         f1cec:	e5840018 	str	r0, [r4, #24]	; fField24
         f1cf0:	e1a00004 	mov	r0, r4
         f1cf4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIASNamedList::__dt(void)
 * Address: 000f1cf8
 */
TIASNamedList::~TIASNamedList(void) {
    /*
         f1cf8:	e1a0c00d 	mov	ip, sp
         f1cfc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f1d00:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1d04:	e1a04000 	mov	r4, r0
         f1d08:	e1a05001 	mov	r5, r1
         f1d0c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         f1d10:	e3300000 	teq	r0, #0	; 0x0
         f1d14:	0a000002 	beq	f1d24 <TIASNamedList::__dt(void)+0x2c>
         f1d18:	eb6b830e 	bl	1bd2958 <$free>
         f1d1c:	e3a00000 	mov	r0, #0	; 0x0
         f1d20:	e5840018 	str	r0, [r4, #24]	; fField24
         f1d24:	e1a00004 	mov	r0, r4
         f1d28:	e3a01000 	mov	r1, #0	; 0x0
         f1d2c:	eb6bcd54 	bl	1be5284 <CList::$__dt(void)>
         f1d30:	e3150001 	tst	r5, #1	; 0x1
         f1d34:	11a00004 	movne	r0, r4
         f1d38:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         f1d3c:	1a6b6e67 	bne	1bcd6e0 <$__dl(void *)>
         f1d40:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIASNamedList::Init(unsigned char const *)
 * Address: 000f1d44
 */
TIASNamedList::Init(unsigned char const *) {
    /*
         f1d44:	e1a0c00d 	mov	ip, sp
         f1d48:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f1d4c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1d50:	e1a05000 	mov	r5, r0
         f1d54:	e1a04001 	mov	r4, r1
         f1d58:	e1a00001 	mov	r0, r1
         f1d5c:	eb6b0f53 	bl	1bb5ab0 <$strlen>
         f1d60:	e2800001 	add	r0, r0, #1	; 0x1
         f1d64:	eb6b937f 	bl	1bd6b68 <$malloc>
         f1d68:	e5a50018 	str	r0, [r5, #24]!	; fField24
         f1d6c:	e3300000 	teq	r0, #0	; 0x0
         f1d70:	03a000a8 	moveq	r0, #168	; 0xa8
         f1d74:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
         f1d78:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f1d7c:	e1a01004 	mov	r1, r4
         f1d80:	eb6b0f49 	bl	1bb5aac <$strcpy>
         f1d84:	e3a00000 	mov	r0, #0	; 0x0
         f1d88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIASNamedList::Search(unsigned char const *)
 * Address: 000f1d8c
 */
TIASNamedList::Search(unsigned char const *) {
    /*
         f1d8c:	e1a0c00d 	mov	ip, sp
         f1d90:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f1d94:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1d98:	e1a04001 	mov	r4, r1
         f1d9c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         f1da0:	e1a01000 	mov	r1, r0
         f1da4:	e1a0000d 	mov	r0, sp
         f1da8:	eb6bc50d 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         f1dac:	e3a06000 	mov	r6, #0	; 0x0
         f1db0:	e1a0000d 	mov	r0, sp
         f1db4:	eb6bd58f 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         f1db8:	e1a05000 	mov	r5, r0
         f1dbc:	e1a0000d 	mov	r0, sp
         f1dc0:	eb6be1ec 	bl	1bea578 <CArrayIterator::$More(void)>
         f1dc4:	e3300000 	teq	r0, #0	; 0x0
         f1dc8:	0a00000c 	beq	f1e00 <TIASNamedList::Search(unsigned char const *)+0x74>
         f1dcc:	e1a01004 	mov	r1, r4
         f1dd0:	e5950018 	ldr	r0, [r5, #24]	; fField24
         f1dd4:	eb6b0f33 	bl	1bb5aa8 <$strcmp>
         f1dd8:	e3300000 	teq	r0, #0	; 0x0
         f1ddc:	01a06005 	moveq	r6, r5
         f1de0:	0a000006 	beq	f1e00 <TIASNamedList::Search(unsigned char const *)+0x74>
         f1de4:	e1a0000d 	mov	r0, sp
         f1de8:	eb6be5ec 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         f1dec:	e1a05000 	mov	r5, r0
         f1df0:	e1a0000d 	mov	r0, sp
         f1df4:	eb6be1df 	bl	1bea578 <CArrayIterator::$More(void)>
         f1df8:	e3300000 	teq	r0, #0	; 0x0
         f1dfc:	1afffff2 	bne	f1dcc <TIASNamedList::Search(unsigned char const *)+0x40>
         f1e00:	e1a0000d 	mov	r0, sp
         f1e04:	e3a01000 	mov	r1, #0	; 0x0
         f1e08:	eb6bc916 	bl	1be4268 <CArrayIterator::$__dt(void)>
         f1e0c:	e1a00006 	mov	r0, r6
         f1e10:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

