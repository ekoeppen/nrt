#include "include/THeapDomain.h"

/**
 * Symbol: THeapDomain::__ct(void)
 * Address: 001f8cc8
 */
THeapDomain::THeapDomain(void) {
    /*
        1f8cc8:	e1a0c00d 	mov	ip, sp
        1f8ccc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f8cd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8cd4:	e1b04000 	movs	r4, r0
        1f8cd8:	1a000003 	bne	1f8cec <THeapDomain::__ct(void)+0x24>
        1f8cdc:	e3a00020 	mov	r0, #32	; 0x20
        1f8ce0:	eb675694 	bl	1bce738 <$__nw(unsigned int)>
        1f8ce4:	e1b04000 	movs	r4, r0
        1f8ce8:	0a000007 	beq	1f8d0c <THeapDomain::__ct(void)+0x44>
        1f8cec:	e2840004 	add	r0, r4, #4	; 0x4
        1f8cf0:	eb674e61 	bl	1bcc67c <TDoubleQItem::$__ct(void)>
        1f8cf4:	e3a00000 	mov	r0, #0	; 0x0
        1f8cf8:	e5840000 	str	r0, [r4]
        1f8cfc:	e5840010 	str	r0, [r4, #16]	; fField16
        1f8d00:	e5840014 	str	r0, [r4, #20]	; fField20
        1f8d04:	e5840018 	str	r0, [r4, #24]	; fField24
        1f8d08:	e584001c 	str	r0, [r4, #28]	; fField28
        1f8d0c:	e1a00004 	mov	r0, r4
        1f8d10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: THeapDomain::__dt(void)
 * Address: 001f8d14
 */
THeapDomain::~THeapDomain(void) {
    /*
        1f8d14:	e1a0c00d 	mov	ip, sp
        1f8d18:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f8d1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8d20:	e1a04000 	mov	r4, r0
        1f8d24:	e1a05001 	mov	r5, r1
        1f8d28:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1f8d2c:	e3300000 	teq	r0, #0	; 0x0
        1f8d30:	1b67526a 	blne	1bcd6e0 <$__dl(void *)>
        1f8d34:	e3150001 	tst	r5, #1	; 0x1
        1f8d38:	11a00004 	movne	r0, r4
        1f8d3c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1f8d40:	1a675266 	bne	1bcd6e0 <$__dl(void *)>
        1f8d44:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: THeapDomain::Init(TStackManager *, unsigned long, unsigned long)
 * Address: 001f8d48
 */
THeapDomain::Init(TStackManager *, unsigned long, unsigned long) {
    /*
        1f8d48:	e1a0c00d 	mov	ip, sp
        1f8d4c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f8d50:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8d54:	e1a04000 	mov	r4, r0
        1f8d58:	e1a05001 	mov	r5, r1
        1f8d5c:	e1a00a02 	mov	r0, r2, lsl #20
        1f8d60:	e5840010 	str	r0, [r4, #16]	; fField16
        1f8d64:	e0801a03 	add	r1, r0, r3, lsl #20
        1f8d68:	e5841014 	str	r1, [r4, #20]	; fField20
        1f8d6c:	e0411000 	sub	r1, r1, r0
        1f8d70:	e1a06001 	mov	r6, r1
        1f8d74:	e3a00b21 	mov	r0, #33792	; 0x8400
        1f8d78:	eb66e6f2 	bl	1bb2948 <$__rt_udiv>
        1f8d7c:	e5840018 	str	r0, [r4, #24]	; fField24
        1f8d80:	e1a00100 	mov	r0, r0, lsl #2
        1f8d84:	eb67566b 	bl	1bce738 <$__nw(unsigned int)>
        1f8d88:	e584001c 	str	r0, [r4, #28]	; fField28
        1f8d8c:	e3300000 	teq	r0, #0	; 0x0
        1f8d90:	03a000e9 	moveq	r0, #233	; 0xe9
        1f8d94:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1f8d98:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1f8d9c:	e3a00000 	mov	r0, #0	; 0x0
        1f8da0:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1f8da4:	e3510000 	cmp	r1, #0	; 0x0
        1f8da8:	9a000006 	bls	1f8dc8 <THeapDomain::Init(TStackManager *, unsigned long, unsigned long)+0x80>
        1f8dac:	e3a01000 	mov	r1, #0	; 0x0
        1f8db0:	e594201c 	ldr	r2, [r4, #28]	; fField28
        1f8db4:	e7821100 	str	r1, [r2, r0, lsl #2]
        1f8db8:	e2800001 	add	r0, r0, #1	; 0x1
        1f8dbc:	e5942018 	ldr	r2, [r4, #24]	; fField24
        1f8dc0:	e1520000 	cmp	r2, r0
        1f8dc4:	8afffff9 	bhi	1f8db0 <THeapDomain::Init(TStackManager *, unsigned long, unsigned long)+0x68>
        1f8dc8:	e1a03006 	mov	r3, r6
        1f8dcc:	e5942010 	ldr	r2, [r4, #16]	; fField16
        1f8dd0:	e1a01004 	mov	r1, r4
        1f8dd4:	e1a00005 	mov	r0, r5
        1f8dd8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1f8ddc:	ea675666 	b	1bce77c <TUDomainManager::$AddDomain(unsigned long &, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: THeapDomain::GetStackInfo(unsigned long, TStackInfo **)
 * Address: 001f8de0
 */
THeapDomain::GetStackInfo(unsigned long, TStackInfo **) {
    /*
        1f8de0:	e1a0c00d 	mov	ip, sp
        1f8de4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f8de8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8dec:	e1a04000 	mov	r4, r0
        1f8df0:	e1a05002 	mov	r5, r2
        1f8df4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1f8df8:	e1500001 	cmp	r0, r1
        1f8dfc:	8a000002 	bhi	1f8e0c <THeapDomain::GetStackInfo(unsigned long, TStackInfo **)+0x2c>
        1f8e00:	e5942014 	ldr	r2, [r4, #20]	; fField20
        1f8e04:	e1520001 	cmp	r2, r1
        1f8e08:	8a000002 	bhi	1f8e18 <THeapDomain::GetStackInfo(unsigned long, TStackInfo **)+0x38>
        1f8e0c:	e59f0000 	ldr	r0, [pc, #0]	; 1f8e14 <THeapDomain::GetStackInfo(unsigned long, TStackInfo **)+0x34>
        1f8e10:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1f8e14:	ffffd823 	swinv	0x00ffd823
        1f8e18:	e0411000 	sub	r1, r1, r0
        1f8e1c:	e3a00b21 	mov	r0, #33792	; 0x8400
        1f8e20:	eb66e6c8 	bl	1bb2948 <$__rt_udiv>
        1f8e24:	e1a01000 	mov	r1, r0
        1f8e28:	e3a00000 	mov	r0, #0	; 0x0
        1f8e2c:	e5942018 	ldr	r2, [r4, #24]	; fField24
        1f8e30:	e1520001 	cmp	r2, r1
        1f8e34:	85b4201c 	ldrhi	r2, [r4, #28]!	; fField28
        1f8e38:	87921101 	ldrhi	r1, [r2, r1, lsl #2]
        1f8e3c:	85851000 	strhi	r1, [r5]
        1f8e40:	95850000 	strls	r0, [r5]
        1f8e44:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

