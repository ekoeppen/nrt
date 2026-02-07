#include "include/NSortedArray.h"

/**
 * Symbol: NSortedArray::__ct(void)
 * Address: 00129ca8
 */
NSortedArray::NSortedArray(void) {
    /*
        129ca8:	e1a0c00d 	mov	ip, sp
        129cac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        129cb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        129cb4:	e1b04000 	movs	r4, r0
        129cb8:	1a000003 	bne	129ccc <NSortedArray::__ct(void)+0x24>
        129cbc:	e3a00024 	mov	r0, #36	; 0x24
        129cc0:	eb6a929c 	bl	1bce738 <$__nw(unsigned int)>
        129cc4:	e1b04000 	movs	r4, r0
        129cc8:	0a000005 	beq	129ce4 <NSortedArray::__ct(void)+0x3c>
        129ccc:	e1a00004 	mov	r0, r4
        129cd0:	eb6a1efb 	bl	1bb18c4 <NArray::$__ct(void)>
        129cd4:	e59f0010 	ldr	r0, [pc, #10]	; 129cec <NSortedArray::__ct(void)+0x44>
        129cd8:	e5840000 	str	r0, [r4]
        129cdc:	e3a00000 	mov	r0, #0	; 0x0
        129ce0:	e5840020 	str	r0, [r4, #32]	; fField32
        129ce4:	e1a00004 	mov	r0, r4
        129ce8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        129cec:	0001b944 	andeq	fp, r1, r4, asr #18
    */
}

/**
 * Symbol: NSortedArray::__dt(void)
 * Address: 00129cf0
 */
NSortedArray::~NSortedArray(void) {
    /*
        129cf0:	e1a0c00d 	mov	ip, sp
        129cf4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        129cf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        129cfc:	e1a04000 	mov	r4, r0
        129d00:	e1a05001 	mov	r5, r1
        129d04:	e59f0020 	ldr	r0, [pc, #20]	; 129d2c <NSortedArray::__dt(void)+0x3c>
        129d08:	e5840000 	str	r0, [r4]
        129d0c:	e1a00004 	mov	r0, r4
        129d10:	e3a01000 	mov	r1, #0	; 0x0
        129d14:	eb6a1eeb 	bl	1bb18c8 <NArray::$__dt(void)>
        129d18:	e3150001 	tst	r5, #1	; 0x1
        129d1c:	11a00004 	movne	r0, r4
        129d20:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        129d24:	1a6a8e6d 	bne	1bcd6e0 <$__dl(void *)>
        129d28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        129d2c:	0001b944 	andeq	fp, r1, r4, asr #18
    */
}

/**
 * Symbol: NSortedArray::Init(NComparator *, long, long, long, unsigned char)
 * Address: 00129d30
 */
NSortedArray::Init(NComparator *, long, long, long, unsigned char) {
    /*
        129d30:	e1a0c00d 	mov	ip, sp
        129d34:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        129d38:	e24cb004 	sub	fp, ip, #4	; 0x4
        129d3c:	e1a0c003 	mov	ip, r3
        129d40:	e59b3008 	ldr	r3, [fp, #8]
        129d44:	e20330ff 	and	r3, r3, #255	; 0xff
        129d48:	e3310000 	teq	r1, #0	; 0x0
        129d4c:	e59be004 	ldr	lr, [fp, #4]
        129d50:	03e00000 	mvneq	r0, #0	; 0x0
        129d54:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        129d58:	e5801020 	str	r1, [r0, #32]	; fField32
        129d5c:	e92d0008 	stmdb	sp!, {r3}
        129d60:	e1a0300e 	mov	r3, lr
        129d64:	e1a01002 	mov	r1, r2
        129d68:	e1a0200c 	mov	r2, ip
        129d6c:	eb6a1ed6 	bl	1bb18cc <NArray::$Init(long, long, long, unsigned char)>
        129d70:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: NSortedArray::Contains( const(void const *))
 * Address: 00129d74
 */
NSortedArray::Contains( const(void const *)) {
    /*
        129d74:	e1a0c00d 	mov	ip, sp
        129d78:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        129d7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        129d80:	e1a04000 	mov	r4, r0
        129d84:	e1a05001 	mov	r5, r1
        129d88:	e5902000 	ldr	r2, [r0]
        129d8c:	e1a0e00f 	mov	lr, pc
        129d90:	e282f00c 	add	pc, r2, #12	; 0xc
        129d94:	e2407001 	sub	r7, r0, #1	; 0x1
        129d98:	e3770001 	cmn	r7, #1	; 0x1
        129d9c:	0a000018 	beq	129e04 <NSortedArray::Contains( const(void const *))+0x90>
        129da0:	e1a01007 	mov	r1, r7
        129da4:	e5946020 	ldr	r6, [r4, #32]	; fField32
        129da8:	e1a00004 	mov	r0, r4
        129dac:	e5942000 	ldr	r2, [r4]
        129db0:	e1a0e00f 	mov	lr, pc
        129db4:	e282f004 	add	pc, r2, #4	; 0x4
        129db8:	e1a01000 	mov	r1, r0
        129dbc:	e1a00006 	mov	r0, r6
        129dc0:	e5962000 	ldr	r2, [r6]
        129dc4:	e1a0e00f 	mov	lr, pc
        129dc8:	e282f004 	add	pc, r2, #4	; 0x4
        129dcc:	e1a04000 	mov	r4, r0
        129dd0:	e1a01005 	mov	r1, r5
        129dd4:	e1a00006 	mov	r0, r6
        129dd8:	e5962000 	ldr	r2, [r6]
        129ddc:	e1a0e00f 	mov	lr, pc
        129de0:	e282f004 	add	pc, r2, #4	; 0x4
        129de4:	e1a01000 	mov	r1, r0
        129de8:	e1a00006 	mov	r0, r6
        129dec:	e1a02004 	mov	r2, r4
        129df0:	e5963000 	ldr	r3, [r6]
        129df4:	e1a0e00f 	mov	lr, pc
        129df8:	e283f008 	add	pc, r3, #8	; 0x8
        129dfc:	e3300000 	teq	r0, #0	; 0x0
        129e00:	13e07000 	mvnne	r7, #0	; 0x0
        129e04:	e1a00007 	mov	r0, r7
        129e08:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: NSortedArray::Where( const(void const *))
 * Address: 00129e0c
 */
NSortedArray::Where( const(void const *)) {
    /*
        129e0c:	e1a0c00d 	mov	ip, sp
        129e10:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        129e14:	e24cb004 	sub	fp, ip, #4	; 0x4
        129e18:	e1a04000 	mov	r4, r0
        129e1c:	e1a06001 	mov	r6, r1
        129e20:	e5900004 	ldr	r0, [r0, #4]
        129e24:	e2508001 	subs	r8, r0, #1	; 0x1
        129e28:	e3a0a000 	mov	sl, #0	; 0x0
        129e2c:	4a00001e 	bmi	129eac <NSortedArray::Where( const(void const *))+0xa0>
        129e30:	e08a9008 	add	r9, sl, r8
        129e34:	e0899fa9 	add	r9, r9, r9, lsr #31
        129e38:	e1a090c9 	mov	r9, r9, asr #1
        129e3c:	e1a01009 	mov	r1, r9
        129e40:	e5947020 	ldr	r7, [r4, #32]	; fField32
        129e44:	e1a00004 	mov	r0, r4
        129e48:	e5942000 	ldr	r2, [r4]
        129e4c:	e1a0e00f 	mov	lr, pc
        129e50:	e282f004 	add	pc, r2, #4	; 0x4
        129e54:	e1a01000 	mov	r1, r0
        129e58:	e1a00007 	mov	r0, r7
        129e5c:	e5972000 	ldr	r2, [r7]
        129e60:	e1a0e00f 	mov	lr, pc
        129e64:	e282f004 	add	pc, r2, #4	; 0x4
        129e68:	e1a05000 	mov	r5, r0
        129e6c:	e1a01006 	mov	r1, r6
        129e70:	e1a00007 	mov	r0, r7
        129e74:	e5972000 	ldr	r2, [r7]
        129e78:	e1a0e00f 	mov	lr, pc
        129e7c:	e282f004 	add	pc, r2, #4	; 0x4
        129e80:	e1a01000 	mov	r1, r0
        129e84:	e1a00007 	mov	r0, r7
        129e88:	e1a02005 	mov	r2, r5
        129e8c:	e5973000 	ldr	r3, [r7]
        129e90:	e1a0e00f 	mov	lr, pc
        129e94:	e283f008 	add	pc, r3, #8	; 0x8
        129e98:	e3500000 	cmp	r0, #0	; 0x0
        129e9c:	a289a001 	addge	sl, r9, #1	; 0x1
        129ea0:	b2498001 	sublt	r8, r9, #1	; 0x1
        129ea4:	e158000a 	cmp	r8, sl
        129ea8:	aaffffe0 	bge	129e30 <NSortedArray::Where( const(void const *))+0x24>
        129eac:	e2880001 	add	r0, r8, #1	; 0x1
        129eb0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

