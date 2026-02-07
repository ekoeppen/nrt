#include "include/TCachedReadStore.h"

/**
 * Symbol: TCachedReadStore::__ct(void)
 * Address: 00354b98
 */
TCachedReadStore::TCachedReadStore(void) {
    /*
        354b98:	e1a0c00d 	mov	ip, sp
        354b9c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        354ba0:	e24cb004 	sub	fp, ip, #4	; 0x4
        354ba4:	e3300000 	teq	r0, #0	; 0x0
        354ba8:	1a000004 	bne	354bc0 <TCachedReadStore::__ct(void)+0x28>
        354bac:	e3a0001c 	mov	r0, #28	; 0x1c
        354bb0:	e2800b01 	add	r0, r0, #1024	; 0x400
        354bb4:	eb61e6df 	bl	1bce738 <$__nw(unsigned int)>
        354bb8:	e3300000 	teq	r0, #0	; 0x0
        354bbc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        354bc0:	e3a01000 	mov	r1, #0	; 0x0
        354bc4:	e5801400 	str	r1, [r0, #1024]	; fField1024
        354bc8:	e5c01410 	strb	r1, [r0, #1040]	; fField1040
        354bcc:	e5801414 	str	r1, [r0, #1044]	; fField1044
        354bd0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCachedReadStore::__ct(TStore *, unsigned long, long)
 * Address: 00354bd4
 */
TCachedReadStore::TCachedReadStore(TStore *, unsigned long, long) {
    /*
        354bd4:	e1a0c00d 	mov	ip, sp
        354bd8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        354bdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        354be0:	e1b04000 	movs	r4, r0
        354be4:	e1a06001 	mov	r6, r1
        354be8:	e1a05002 	mov	r5, r2
        354bec:	e1a07003 	mov	r7, r3
        354bf0:	1a000004 	bne	354c08 <TCachedReadStore::__ct(TStore *, unsigned long, long)+0x34>
        354bf4:	e3a0001c 	mov	r0, #28	; 0x1c
        354bf8:	e2800b01 	add	r0, r0, #1024	; 0x400
        354bfc:	eb61e6cd 	bl	1bce738 <$__nw(unsigned int)>
        354c00:	e1b04000 	movs	r4, r0
        354c04:	0a000008 	beq	354c2c <TCachedReadStore::__ct(TStore *, unsigned long, long)+0x58>
        354c08:	e3a00000 	mov	r0, #0	; 0x0
        354c0c:	e5840400 	str	r0, [r4, #1024]	; fField1024
        354c10:	e5c40410 	strb	r0, [r4, #1040]	; fField1040
        354c14:	e1a03007 	mov	r3, r7
        354c18:	e1a02005 	mov	r2, r5
        354c1c:	e1a01006 	mov	r1, r6
        354c20:	e5840414 	str	r0, [r4, #1044]	; fField1044
        354c24:	e1a00004 	mov	r0, r4
        354c28:	eb5be6bc 	bl	1a4e720 <TCachedReadStore::$Init(TStore *, unsigned long, long)>
        354c2c:	e1a00004 	mov	r0, r4
        354c30:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCachedReadStore::__dt(void)
 * Address: 00354da0
 */
TCachedReadStore::~TCachedReadStore(void) {
    /*
        354da0:	e1a0c00d 	mov	ip, sp
        354da4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        354da8:	e24cb004 	sub	fp, ip, #4	; 0x4
        354dac:	e1a04000 	mov	r4, r0
        354db0:	e1a05001 	mov	r5, r1
        354db4:	e5900400 	ldr	r0, [r0, #1024]	; fField1024
        354db8:	e3300000 	teq	r0, #0	; 0x0
        354dbc:	11300004 	teqne	r0, r4
        354dc0:	1b61e246 	blne	1bcd6e0 <$__dl(void *)>
        354dc4:	e5940414 	ldr	r0, [r4, #1044]	; fField1044
        354dc8:	e3300000 	teq	r0, #0	; 0x0
        354dcc:	1b61e243 	blne	1bcd6e0 <$__dl(void *)>
        354dd0:	e3150001 	tst	r5, #1	; 0x1
        354dd4:	11a00004 	movne	r0, r4
        354dd8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        354ddc:	1a61e23f 	bne	1bcd6e0 <$__dl(void *)>
        354de0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCachedReadStore::Init(TStore *, unsigned long, long)
 * Address: 00354de4
 */
TCachedReadStore::Init(TStore *, unsigned long, long) {
    /*
        354de4:	e1a0c00d 	mov	ip, sp
        354de8:	e92dd80f 	stmdb	sp!, {r0, r1, r2, r3, fp, ip, lr, pc}
        354dec:	e24cb004 	sub	fp, ip, #4	; 0x4
        354df0:	e24b101c 	sub	r1, fp, #28	; 0x1c
        354df4:	e8910003 	ldmia	r1, {r0, r1}
        354df8:	e5a01404 	str	r1, [r0, #1028]!	; fField1028
        354dfc:	e51b0014 	ldr	r0, [fp, -#20]
        354e00:	e51b101c 	ldr	r1, [fp, -#28]
        354e04:	e5a10408 	str	r0, [r1, #1032]!
        354e08:	e51b0010 	ldr	r0, [fp, -#16]
        354e0c:	e3500000 	cmp	r0, #0	; 0x0
        354e10:	aa000006 	bge	354e30 <TCachedReadStore::Init(TStore *, unsigned long, long)+0x4c>
        354e14:	e24b2010 	sub	r2, fp, #16	; 0x10
        354e18:	e24b1018 	sub	r1, fp, #24	; 0x18
        354e1c:	e8910003 	ldmia	r1, {r0, r1}
        354e20:	eb5e97b6 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        354e24:	e3300000 	teq	r0, #0	; 0x0
        354e28:	13a00000 	movne	r0, #0	; 0x0
        354e2c:	150b0010 	strne	r0, [fp, -#16]
        354e30:	e51b0010 	ldr	r0, [fp, -#16]
        354e34:	e51b101c 	ldr	r1, [fp, -#28]
        354e38:	e5a1040c 	str	r0, [r1, #1036]!	; fField1036
        354e3c:	e51b101c 	ldr	r1, [fp, -#28]
        354e40:	e5910400 	ldr	r0, [r1, #1024]	; fField1024
        354e44:	e3300000 	teq	r0, #0	; 0x0
        354e48:	11300001 	teqne	r0, r1
        354e4c:	1b61e223 	blne	1bcd6e0 <$__dl(void *)>
        354e50:	e51b0010 	ldr	r0, [fp, -#16]
        354e54:	e3500b01 	cmp	r0, #1024	; 0x400
        354e58:	d51b101c 	ldrle	r1, [fp, -#28]
        354e5c:	d5811400 	strle	r1, [r1, #1024]	; fField1024
        354e60:	da000002 	ble	354e70 <TCachedReadStore::Init(TStore *, unsigned long, long)+0x8c>
        354e64:	eb61e633 	bl	1bce738 <$__nw(unsigned int)>
        354e68:	e51b101c 	ldr	r1, [fp, -#28]
        354e6c:	e5a10400 	str	r0, [r1, #1024]!	; fField1024
        354e70:	e3a00000 	mov	r0, #0	; 0x0
        354e74:	e51b101c 	ldr	r1, [fp, -#28]
        354e78:	e5c10410 	strb	r0, [r1, #1040]	; fField1040
        354e7c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCachedReadStore::GetDataPtr(long, long, void **)
 * Address: 00354e80
 */
TCachedReadStore::GetDataPtr(long, long, void **) {
    /*
        354e80:	e1a0c00d 	mov	ip, sp
        354e84:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        354e88:	e24cb004 	sub	fp, ip, #4	; 0x4
        354e8c:	e1a04000 	mov	r4, r0
        354e90:	e1a07001 	mov	r7, r1
        354e94:	e1a05002 	mov	r5, r2
        354e98:	e1a06003 	mov	r6, r3
        354e9c:	e5900400 	ldr	r0, [r0, #1024]	; fField1024
        354ea0:	e3300000 	teq	r0, #0	; 0x0
        354ea4:	0a000018 	beq	354f0c <TCachedReadStore::GetDataPtr(long, long, void **)+0x8c>
        354ea8:	e0871005 	add	r1, r7, r5
        354eac:	e594340c 	ldr	r3, [r4, #1036]	; fField1036
        354eb0:	e1510003 	cmp	r1, r3
        354eb4:	ca000014 	bgt	354f0c <TCachedReadStore::GetDataPtr(long, long, void **)+0x8c>
        354eb8:	e5d41410 	ldrb	r1, [r4, #1040]	; fField1040
        354ebc:	e3310000 	teq	r1, #0	; 0x0
        354ec0:	1a00000c 	bne	354ef8 <TCachedReadStore::GetDataPtr(long, long, void **)+0x78>
        354ec4:	e92d0008 	stmdb	sp!, {r3}
        354ec8:	e1a03000 	mov	r3, r0
        354ecc:	e3a02000 	mov	r2, #0	; 0x0
        354ed0:	e2841b01 	add	r1, r4, #1024	; 0x400
        354ed4:	e9910003 	ldmib	r1, {r0, r1}
        354ed8:	eb5eb498 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        354edc:	e28dd004 	add	sp, sp, #4	; 0x4
        354ee0:	e3300000 	teq	r0, #0	; 0x0
        354ee4:	1280cda5 	addne	ip, r0, #10560	; 0x2940
        354ee8:	137c0028 	cmnne	ip, #40	; 0x28
        354eec:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        354ef0:	e3a00001 	mov	r0, #1	; 0x1
        354ef4:	e5c40410 	strb	r0, [r4, #1040]	; fField1040
        354ef8:	e5b40400 	ldr	r0, [r4, #1024]!	; fField1024
        354efc:	e0800007 	add	r0, r0, r7
        354f00:	e5860000 	str	r0, [r6]
        354f04:	e3a00000 	mov	r0, #0	; 0x0
        354f08:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        354f0c:	e3550b01 	cmp	r5, #1024	; 0x400
        354f10:	b5864000 	strlt	r4, [r6]
        354f14:	ba00000e 	blt	354f54 <TCachedReadStore::GetDataPtr(long, long, void **)+0xd4>
        354f18:	e5940414 	ldr	r0, [r4, #1044]	; fField1044
        354f1c:	e3300000 	teq	r0, #0	; 0x0
        354f20:	0a000002 	beq	354f30 <TCachedReadStore::GetDataPtr(long, long, void **)+0xb0>
        354f24:	e5941418 	ldr	r1, [r4, #1048]	; fField1048
        354f28:	e1510005 	cmp	r1, r5
        354f2c:	aa000007 	bge	354f50 <TCachedReadStore::GetDataPtr(long, long, void **)+0xd0>
        354f30:	e1a01005 	mov	r1, r5
        354f34:	eb627eb9 	bl	1bf4a20 <$realloc>
        354f38:	e3300000 	teq	r0, #0	; 0x0
        354f3c:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        354f40:	0a623476 	beq	1be2120 <$MemError>
        354f44:	e2844e41 	add	r4, r4, #1040	; 0x410
        354f48:	e9840021 	stmib	r4, {r0, r5}
        354f4c:	e2444e41 	sub	r4, r4, #1040	; 0x410
        354f50:	e5860000 	str	r0, [r6]
        354f54:	e1a03005 	mov	r3, r5
        354f58:	e92d0008 	stmdb	sp!, {r3}
        354f5c:	e2844b01 	add	r4, r4, #1024	; 0x400
        354f60:	e9b40003 	ldmib	r4!, {r0, r1}
        354f64:	e1a02007 	mov	r2, r7
        354f68:	e5963000 	ldr	r3, [r6]
        354f6c:	eb5eb473 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        354f70:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

