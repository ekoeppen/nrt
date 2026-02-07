#include "DDKIncludes/Frames/objects.h"

/**
 * Symbol: RefVar::__ct(void)
 * Address: 00079d74
 */
inline	RefVar::RefVar(const RefVar& o) {
    /*
         79d74:	e1a0c00d 	mov	ip, sp
         79d78:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         79d7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         79d80:	e1b04000 	movs	r4, r0
         79d84:	1a000003 	bne	79d98 <RefVar::__ct(void)+0x24>
         79d88:	e3a00004 	mov	r0, #4	; 0x4
         79d8c:	eb6d5269 	bl	1bce738 <$__nw(unsigned int)>
         79d90:	e1b04000 	movs	r4, r0
         79d94:	0a000002 	beq	79da4 <RefVar::__ct(void)+0x30>
         79d98:	e3a00002 	mov	r0, #2	; 0x2
         79d9c:	eb6d20ea 	bl	1bc214c <$AllocateRefHandle(long)>
         79da0:	e5840000 	str	r0, [r4]
         79da4:	e1a00004 	mov	r0, r4
         79da8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: RefVar::__ct(RefVar const &)
 * Address: 00079dac
 */
inline	RefVar::RefVar(const RefVar& o) {
    /*
         79dac:	e1a0c00d 	mov	ip, sp
         79db0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         79db4:	e24cb004 	sub	fp, ip, #4	; 0x4
         79db8:	e1b04000 	movs	r4, r0
         79dbc:	e1a05001 	mov	r5, r1
         79dc0:	1a000003 	bne	79dd4 <RefVar::__ct(RefVar const &)+0x28>
         79dc4:	e3a00004 	mov	r0, #4	; 0x4
         79dc8:	eb6d525a 	bl	1bce738 <$__nw(unsigned int)>
         79dcc:	e1b04000 	movs	r4, r0
         79dd0:	0a000003 	beq	79de4 <RefVar::__ct(RefVar const &)+0x38>
         79dd4:	e5950000 	ldr	r0, [r5]
         79dd8:	e5900000 	ldr	r0, [r0]
         79ddc:	eb6d20da 	bl	1bc214c <$AllocateRefHandle(long)>
         79de0:	e5840000 	str	r0, [r4]
         79de4:	e1a00004 	mov	r0, r4
         79de8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: RefVar::__ct(long const)
 * Address: 00079ea8
 */
inline	RefVar::RefVar(const RefVar& o) {
    /*
         79ea8:	e1a0c00d 	mov	ip, sp
         79eac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         79eb0:	e24cb004 	sub	fp, ip, #4	; 0x4
         79eb4:	e1b04000 	movs	r4, r0
         79eb8:	e1a05001 	mov	r5, r1
         79ebc:	1a000003 	bne	79ed0 <RefVar::__ct(long const)+0x28>
         79ec0:	e3a00004 	mov	r0, #4	; 0x4
         79ec4:	eb6d521b 	bl	1bce738 <$__nw(unsigned int)>
         79ec8:	e1b04000 	movs	r4, r0
         79ecc:	0a000002 	beq	79edc <RefVar::__ct(long const)+0x34>
         79ed0:	e1a00005 	mov	r0, r5
         79ed4:	eb6d209c 	bl	1bc214c <$AllocateRefHandle(long)>
         79ed8:	e5840000 	str	r0, [r4]
         79edc:	e1a00004 	mov	r0, r4
         79ee0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: RefVar::__dt(void)
 * Address: 00079ee4
 */
inline	RefVar::~RefVar() {
    /*
         79ee4:	e1a0c00d 	mov	ip, sp
         79ee8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         79eec:	e24cb004 	sub	fp, ip, #4	; 0x4
         79ef0:	e1a04000 	mov	r4, r0
         79ef4:	e1a05001 	mov	r5, r1
         79ef8:	e5900000 	ldr	r0, [r0]
         79efc:	eb6d24ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         79f00:	e3150001 	tst	r5, #1	; 0x1
         79f04:	11a00004 	movne	r0, r4
         79f08:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         79f0c:	1a6d4df3 	bne	1bcd6e0 <$__dl(void *)>
         79f10:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: RefVar::operator=(RefVar const &)
 * Address: 00079f14
 */
RefVar::operator=(RefVar const &) {
    /*
         79f14:	e5911000 	ldr	r1, [r1]
         79f18:	e5912000 	ldr	r2, [r1]
         79f1c:	e5901000 	ldr	r1, [r0]
         79f20:	e5812000 	str	r2, [r1]
         79f24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: RefVar::operator=(long const)
 * Address: 00079f28
 */
RefVar::operator=(long const) {
    /*
         79f28:	e5902000 	ldr	r2, [r0]
         79f2c:	e5821000 	str	r1, [r2]
         79f30:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: RefVar::operator long( const(void))
 * Address: 00079f34
 */
RefVar::operator long( const(void)) {
    /*
         79f34:	e5900000 	ldr	r0, [r0]
         79f38:	e5900000 	ldr	r0, [r0]
         79f3c:	e1a0f00e 	mov	pc, lr
    */
}

