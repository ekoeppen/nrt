#include "DDKIncludes/Frames/objects.h"

/**
 * Symbol: RefStruct::__ct(RefStruct const &)
 * Address: 00079dec
 */
inline	RefStruct::RefStruct(const Ref r) : RefVar(r) {
    /*
         79dec:	e1a0c00d 	mov	ip, sp
         79df0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         79df4:	e24cb004 	sub	fp, ip, #4	; 0x4
         79df8:	e1b04000 	movs	r4, r0
         79dfc:	e1a05001 	mov	r5, r1
         79e00:	1a000003 	bne	79e14 <RefStruct::__ct(RefStruct const &)+0x28>
         79e04:	e3a00004 	mov	r0, #4	; 0x4
         79e08:	eb6d524a 	bl	1bce738 <$__nw(unsigned int)>
         79e0c:	e1b04000 	movs	r4, r0
         79e10:	0a000005 	beq	79e2c <RefStruct::__ct(RefStruct const &)+0x40>
         79e14:	e1a01005 	mov	r1, r5
         79e18:	e1a00004 	mov	r0, r4
         79e1c:	eb6e45df 	bl	1c0b5a0 <RefVar::$__ct(RefVar const &)>
         79e20:	e3a01000 	mov	r1, #0	; 0x0
         79e24:	e5940000 	ldr	r0, [r4]
         79e28:	e5a01004 	str	r1, [r0, #4]!	; fField4
         79e2c:	e1a00004 	mov	r0, r4
         79e30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: RefStruct::__ct(RefVar const &)
 * Address: 00079e34
 */
inline	RefStruct::RefStruct(const Ref r) : RefVar(r) {
    /*
         79e34:	e1a0c00d 	mov	ip, sp
         79e38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         79e3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         79e40:	e1b04000 	movs	r4, r0
         79e44:	e1a05001 	mov	r5, r1
         79e48:	1a000003 	bne	79e5c <RefStruct::__ct(RefVar const &)+0x28>
         79e4c:	e3a00004 	mov	r0, #4	; 0x4
         79e50:	eb6d5238 	bl	1bce738 <$__nw(unsigned int)>
         79e54:	e1b04000 	movs	r4, r0
         79e58:	0a000005 	beq	79e74 <RefStruct::__ct(RefVar const &)+0x40>
         79e5c:	e1a01005 	mov	r1, r5
         79e60:	e1a00004 	mov	r0, r4
         79e64:	eb6e45cd 	bl	1c0b5a0 <RefVar::$__ct(RefVar const &)>
         79e68:	e3a01000 	mov	r1, #0	; 0x0
         79e6c:	e5940000 	ldr	r0, [r4]
         79e70:	e5a01004 	str	r1, [r0, #4]!	; fField4
         79e74:	e1a00004 	mov	r0, r4
         79e78:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: RefStruct::operator=(long const)
 * Address: 00079e7c
 */
RefStruct::operator=(long const) {
    /*
         79e7c:	e5902000 	ldr	r2, [r0]
         79e80:	e5821000 	str	r1, [r2]
         79e84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: RefStruct::operator=(RefVar const &)
 * Address: 00079e88
 */
RefStruct::operator=(RefVar const &) {
    /*
         79e88:	e5911000 	ldr	r1, [r1]
         79e8c:	e5912000 	ldr	r2, [r1]
         79e90:	e5901000 	ldr	r1, [r0]
         79e94:	e5812000 	str	r2, [r1]
         79e98:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: RefStruct::operator long( const(void))
 * Address: 00079e9c
 */
RefStruct::operator long( const(void)) {
    /*
         79e9c:	e5900000 	ldr	r0, [r0]
         79ea0:	e5900000 	ldr	r0, [r0]
         79ea4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: RefStruct::__ct(void)
 * Address: 00079f40
 */
inline	RefStruct::RefStruct(const Ref r) : RefVar(r) {
    /*
         79f40:	e1a0c00d 	mov	ip, sp
         79f44:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         79f48:	e24cb004 	sub	fp, ip, #4	; 0x4
         79f4c:	e1b04000 	movs	r4, r0
         79f50:	1a000003 	bne	79f64 <RefStruct::__ct(void)+0x24>
         79f54:	e3a00004 	mov	r0, #4	; 0x4
         79f58:	eb6d51f6 	bl	1bce738 <$__nw(unsigned int)>
         79f5c:	e1b04000 	movs	r4, r0
         79f60:	0a000004 	beq	79f78 <RefStruct::__ct(void)+0x38>
         79f64:	e1a00004 	mov	r0, r4
         79f68:	eb6e3d52 	bl	1c094b8 <RefVar::$__ct(void)>
         79f6c:	e3a00000 	mov	r0, #0	; 0x0
         79f70:	e5941000 	ldr	r1, [r4]
         79f74:	e5a10004 	str	r0, [r1, #4]!	; fField4
         79f78:	e1a00004 	mov	r0, r4
         79f7c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: RefStruct::__dt(void)
 * Address: 00079f80
 */
RefStruct::~RefStruct()							{ } {
    /*
         79f80:	e1a0c00d 	mov	ip, sp
         79f84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         79f88:	e24cb004 	sub	fp, ip, #4	; 0x4
         79f8c:	e1a04000 	mov	r4, r0
         79f90:	e1a05001 	mov	r5, r1
         79f94:	e3a01000 	mov	r1, #0	; 0x0
         79f98:	eb6de67a 	bl	1bf3988 <RefVar::$__dt(void)>
         79f9c:	e3150001 	tst	r5, #1	; 0x1
         79fa0:	11a00004 	movne	r0, r4
         79fa4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         79fa8:	1a6d4dcc 	bne	1bcd6e0 <$__dl(void *)>
         79fac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: RefStruct::__ct(long const)
 * Address: 00079fb0
 */
inline	RefStruct::RefStruct(const Ref r) : RefVar(r) {
    /*
         79fb0:	e1a0c00d 	mov	ip, sp
         79fb4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         79fb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         79fbc:	e1b04000 	movs	r4, r0
         79fc0:	e1a05001 	mov	r5, r1
         79fc4:	1a000003 	bne	79fd8 <RefStruct::__ct(long const)+0x28>
         79fc8:	e3a00004 	mov	r0, #4	; 0x4
         79fcc:	eb6d51d9 	bl	1bce738 <$__nw(unsigned int)>
         79fd0:	e1b04000 	movs	r4, r0
         79fd4:	0a000005 	beq	79ff0 <RefStruct::__ct(long const)+0x40>
         79fd8:	e1a01005 	mov	r1, r5
         79fdc:	e1a00004 	mov	r0, r4
         79fe0:	eb6e3d33 	bl	1c094b4 <RefVar::$__ct(long const)>
         79fe4:	e3a01000 	mov	r1, #0	; 0x0
         79fe8:	e5940000 	ldr	r0, [r4]
         79fec:	e5a01004 	str	r1, [r0, #4]!	; fField4
         79ff0:	e1a00004 	mov	r0, r4
         79ff4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

