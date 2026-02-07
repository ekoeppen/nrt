#include "include/TFlashStoreLookupCache.h"

/**
 * Symbol: TFlashStoreLookupCache::Init(unsigned long)
 * Address: 000c4b10
 */
TFlashStoreLookupCache::Init(unsigned long) {
    /*
         c4b10:	e1a0c00d 	mov	ip, sp
         c4b14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c4b18:	e24cb004 	sub	fp, ip, #4	; 0x4
         c4b1c:	e1a04000 	mov	r4, r0
         c4b20:	e1a00001 	mov	r0, r1
         c4b24:	e3a05000 	mov	r5, #0	; 0x0
         c4b28:	e9840022 	stmib	r4, {r1, r5}
         c4b2c:	e3a01008 	mov	r1, #8	; 0x8
         c4b30:	e0800080 	add	r0, r0, r0, lsl #1
         c4b34:	e1a00100 	mov	r0, r0, lsl #2
         c4b38:	e584100c 	str	r1, [r4, #12]	; fField12
         c4b3c:	eb6c4809 	bl	1bd6b68 <$malloc>
         c4b40:	e5840000 	str	r0, [r4]
         c4b44:	e3300000 	teq	r0, #0	; 0x0
         c4b48:	03e00000 	mvneq	r0, #0	; 0x0
         c4b4c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         c4b50:	e5b41004 	ldr	r1, [r4, #4]!	; fField4
         c4b54:	e0812081 	add	r2, r1, r1, lsl #1
         c4b58:	e1a02102 	mov	r2, r2, lsl #2
         c4b5c:	e3a01000 	mov	r1, #0	; 0x0
         c4b60:	eb6bbfbc 	bl	1bb4a58 <$memset>
         c4b64:	e1a00005 	mov	r0, r5
         c4b68:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStoreLookupCache::Change(TObjRef &)
 * Address: 000c4b6c
 */
TFlashStoreLookupCache::Change(TObjRef &) {
    /*
         c4b6c:	e1a0c00d 	mov	ip, sp
         c4b70:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c4b74:	e24cb004 	sub	fp, ip, #4	; 0x4
         c4b78:	e1a06000 	mov	r6, r0
         c4b7c:	e1a04001 	mov	r4, r1
         c4b80:	e5911010 	ldr	r1, [r1, #16]
         c4b84:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c4b88:	e1a00800 	mov	r0, r0, lsl #16
         c4b8c:	e591104c 	ldr	r1, [r1, #76]
         c4b90:	e0210c20 	eor	r0, r1, r0, lsr #24
         c4b94:	e20010ff 	and	r1, r0, #255	; 0xff
         c4b98:	e59f0024 	ldr	r0, [pc, #24]	; c4bc4 <TFlashStoreLookupCache::Change(TObjRef &)+0x58>
         c4b9c:	e7d05001 	ldrb	r5, [r0, r1]
         c4ba0:	e1a00004 	mov	r0, r4
         c4ba4:	eb68d447 	bl	1af9cc8 <TObjRef::$GetDirEntOffset(void)>
         c4ba8:	e1a02000 	mov	r2, r0
         c4bac:	e5940000 	ldr	r0, [r4]
         c4bb0:	e3c0120f 	bic	r1, r0, #-268435456	; 0xf0000000
         c4bb4:	e1a00006 	mov	r0, r6
         c4bb8:	e1a03005 	mov	r3, r5
         c4bbc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         c4bc0:	ea68bf94 	b	1af4a18 <TFlashStoreLookupCache::$Change(unsigned long, unsigned long, int)>
         c4bc4:	0037143c 	eoreqs	r1, r7, ip, lsr r4
    */
}

/**
 * Symbol: TFlashStoreLookupCache::Destroy(void)
 * Address: 000c4bc8
 */
TFlashStoreLookupCache::Destroy(void) {
    /*
         c4bc8:	e1a0c00d 	mov	ip, sp
         c4bcc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c4bd0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c4bd4:	e1a04000 	mov	r4, r0
         c4bd8:	e5900000 	ldr	r0, [r0]
         c4bdc:	eb6c375d 	bl	1bd2958 <$free>
         c4be0:	e3a00000 	mov	r0, #0	; 0x0
         c4be4:	e5840000 	str	r0, [r4]
         c4be8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStoreLookupCache::Lookup(unsigned long, int)
 * Address: 000c4bec
 */
TFlashStoreLookupCache::Lookup(unsigned long, int) {
    /*
         c4bec:	e1a0c00d 	mov	ip, sp
         c4bf0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         c4bf4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c4bf8:	e1a04000 	mov	r4, r0
         c4bfc:	e1a05001 	mov	r5, r1
         c4c00:	e1a06002 	mov	r6, r2
         c4c04:	e1a00001 	mov	r0, r1
         c4c08:	eb68dc60 	bl	1afbd90 <$HashPSSID(unsigned long)>
         c4c0c:	e5941004 	ldr	r1, [r4, #4]	; fField4
         c4c10:	e2411001 	sub	r1, r1, #1	; 0x1
         c4c14:	e0001001 	and	r1, r0, r1
         c4c18:	e594000c 	ldr	r0, [r4, #12]	; fField12
         c4c1c:	e1c11000 	bic	r1, r1, r0
         c4c20:	e0811081 	add	r1, r1, r1, lsl #1
         c4c24:	e5942000 	ldr	r2, [r4]
         c4c28:	e0828101 	add	r8, r2, r1, lsl #2
         c4c2c:	e3a07000 	mov	r7, #0	; 0x0
         c4c30:	e3500000 	cmp	r0, #0	; 0x0
         c4c34:	9a00000d 	bls	c4c70 <TFlashStoreLookupCache::Lookup(unsigned long, int)+0x84>
         c4c38:	e0870087 	add	r0, r7, r7, lsl #1
         c4c3c:	e0880100 	add	r0, r8, r0, lsl #2
         c4c40:	e1a02006 	mov	r2, r6
         c4c44:	e1a01005 	mov	r1, r5
         c4c48:	eb68ecd5 	bl	1afffa4 <SFlashStoreLookupCacheEntry::$Matches(unsigned long, int)>
         c4c4c:	e3300000 	teq	r0, #0	; 0x0
         c4c50:	10870087 	addne	r0, r7, r7, lsl #1
         c4c54:	10880100 	addne	r0, r8, r0, lsl #2
         c4c58:	15900004 	ldrne	r0, [r0, #4]	; fField4
         c4c5c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         c4c60:	e2877001 	add	r7, r7, #1	; 0x1
         c4c64:	e594000c 	ldr	r0, [r4, #12]	; fField12
         c4c68:	e1500007 	cmp	r0, r7
         c4c6c:	8afffff1 	bhi	c4c38 <TFlashStoreLookupCache::Lookup(unsigned long, int)+0x4c>
         c4c70:	e3e00000 	mvn	r0, #0	; 0x0
         c4c74:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStoreLookupCache::Add(unsigned long, unsigned long, int)
 * Address: 000c4c78
 */
TFlashStoreLookupCache::Add(unsigned long, unsigned long, int) {
    /*
         c4c78:	e1a0c00d 	mov	ip, sp
         c4c7c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         c4c80:	e24cb004 	sub	fp, ip, #4	; 0x4
         c4c84:	e1a04000 	mov	r4, r0
         c4c88:	e1a05001 	mov	r5, r1
         c4c8c:	e1a07002 	mov	r7, r2
         c4c90:	e1a06003 	mov	r6, r3
         c4c94:	e1a00001 	mov	r0, r1
         c4c98:	eb68dc3c 	bl	1afbd90 <$HashPSSID(unsigned long)>
         c4c9c:	e5941004 	ldr	r1, [r4, #4]	; fField4
         c4ca0:	e2411001 	sub	r1, r1, #1	; 0x1
         c4ca4:	e0001001 	and	r1, r0, r1
         c4ca8:	e594000c 	ldr	r0, [r4, #12]	; fField12
         c4cac:	e1c11000 	bic	r1, r1, r0
         c4cb0:	e0812081 	add	r2, r1, r1, lsl #1
         c4cb4:	e5941000 	ldr	r1, [r4]
         c4cb8:	e0819102 	add	r9, r1, r2, lsl #2
         c4cbc:	e3a08000 	mov	r8, #0	; 0x0
         c4cc0:	e3500000 	cmp	r0, #0	; 0x0
         c4cc4:	9a00000d 	bls	c4d00 <TFlashStoreLookupCache::Add(unsigned long, unsigned long, int)+0x88>
         c4cc8:	e0880088 	add	r0, r8, r8, lsl #1
         c4ccc:	e0890100 	add	r0, r9, r0, lsl #2
         c4cd0:	e1a02006 	mov	r2, r6
         c4cd4:	e1a01005 	mov	r1, r5
         c4cd8:	eb68ecb1 	bl	1afffa4 <SFlashStoreLookupCacheEntry::$Matches(unsigned long, int)>
         c4cdc:	e3300000 	teq	r0, #0	; 0x0
         c4ce0:	10880088 	addne	r0, r8, r8, lsl #1
         c4ce4:	10890100 	addne	r0, r9, r0, lsl #2
         c4ce8:	15a07004 	strne	r7, [r0, #4]!	; fField4
         c4cec:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c4cf0:	e2888001 	add	r8, r8, #1	; 0x1
         c4cf4:	e594000c 	ldr	r0, [r4, #12]	; fField12
         c4cf8:	e1500008 	cmp	r0, r8
         c4cfc:	8afffff1 	bhi	c4cc8 <TFlashStoreLookupCache::Add(unsigned long, unsigned long, int)+0x50>
         c4d00:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c4d04:	e0800080 	add	r0, r0, r0, lsl #1
         c4d08:	e7895100 	str	r5, [r9, r0, lsl #2]
         c4d0c:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c4d10:	e0800080 	add	r0, r0, r0, lsl #1
         c4d14:	e0890100 	add	r0, r9, r0, lsl #2
         c4d18:	e5a06008 	str	r6, [r0, #8]!	; fField8
         c4d1c:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c4d20:	e0800080 	add	r0, r0, r0, lsl #1
         c4d24:	e0890100 	add	r0, r9, r0, lsl #2
         c4d28:	e5a07004 	str	r7, [r0, #4]!	; fField4
         c4d2c:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c4d30:	e2800001 	add	r0, r0, #1	; 0x1
         c4d34:	e594100c 	ldr	r1, [r4, #12]	; fField12
         c4d38:	e2411001 	sub	r1, r1, #1	; 0x1
         c4d3c:	e0000001 	and	r0, r0, r1
         c4d40:	e5a40008 	str	r0, [r4, #8]!	; fField8
         c4d44:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStoreLookupCache::Forget(unsigned long, int)
 * Address: 000c4d48
 */
TFlashStoreLookupCache::Forget(unsigned long, int) {
    /*
         c4d48:	e1a0c00d 	mov	ip, sp
         c4d4c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c4d50:	e24cb004 	sub	fp, ip, #4	; 0x4
         c4d54:	e1a04000 	mov	r4, r0
         c4d58:	e1a05001 	mov	r5, r1
         c4d5c:	e1a00001 	mov	r0, r1
         c4d60:	eb68dc0a 	bl	1afbd90 <$HashPSSID(unsigned long)>
         c4d64:	e5941004 	ldr	r1, [r4, #4]	; fField4
         c4d68:	e2411001 	sub	r1, r1, #1	; 0x1
         c4d6c:	e0000001 	and	r0, r0, r1
         c4d70:	e594100c 	ldr	r1, [r4, #12]	; fField12
         c4d74:	e1c03001 	bic	r3, r0, r1
         c4d78:	e3a00000 	mov	r0, #0	; 0x0
         c4d7c:	e3510000 	cmp	r1, #0	; 0x0
         c4d80:	991ba830 	ldmlsdb	fp, {r4, r5, fp, sp, pc}
         c4d84:	e3a01000 	mov	r1, #0	; 0x0
         c4d88:	e0832000 	add	r2, r3, r0
         c4d8c:	e0822082 	add	r2, r2, r2, lsl #1
         c4d90:	e594c000 	ldr	ip, [r4]
         c4d94:	e79ce102 	ldr	lr, [ip, r2, lsl #2]
         c4d98:	e13e0005 	teq	lr, r5
         c4d9c:	1a000003 	bne	c4db0 <TFlashStoreLookupCache::Forget(unsigned long, int)+0x68>
         c4da0:	e78c1102 	str	r1, [ip, r2, lsl #2]
         c4da4:	e594c000 	ldr	ip, [r4]
         c4da8:	e08c2102 	add	r2, ip, r2, lsl #2
         c4dac:	e5a21004 	str	r1, [r2, #4]!	; fField4
         c4db0:	e2800001 	add	r0, r0, #1	; 0x1
         c4db4:	e594200c 	ldr	r2, [r4, #12]	; fField12
         c4db8:	e1520000 	cmp	r2, r0
         c4dbc:	8afffff1 	bhi	c4d88 <TFlashStoreLookupCache::Forget(unsigned long, int)+0x40>
         c4dc0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStoreLookupCache::Change(unsigned long, unsigned long, int)
 * Address: 000c4dc4
 */
TFlashStoreLookupCache::Change(unsigned long, unsigned long, int) {
    /*
         c4dc4:	e1a0c00d 	mov	ip, sp
         c4dc8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c4dcc:	e24cb004 	sub	fp, ip, #4	; 0x4
         c4dd0:	e1a06000 	mov	r6, r0
         c4dd4:	e1a04001 	mov	r4, r1
         c4dd8:	e1a07002 	mov	r7, r2
         c4ddc:	e1a05003 	mov	r5, r3
         c4de0:	e1a00001 	mov	r0, r1
         c4de4:	eb68dbe9 	bl	1afbd90 <$HashPSSID(unsigned long)>
         c4de8:	e1a02005 	mov	r2, r5
         c4dec:	e1a01004 	mov	r1, r4
         c4df0:	e1a00006 	mov	r0, r6
         c4df4:	eb68cf9b 	bl	1af8c68 <TFlashStoreLookupCache::$Forget(unsigned long, int)>
         c4df8:	e1a03005 	mov	r3, r5
         c4dfc:	e1a02007 	mov	r2, r7
         c4e00:	e1a01004 	mov	r1, r4
         c4e04:	e1a00006 	mov	r0, r6
         c4e08:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         c4e0c:	ea68b2b2 	b	1af18dc <TFlashStoreLookupCache::$Add(unsigned long, unsigned long, int)>
    */
}

/**
 * Symbol: TFlashStoreLookupCache::ForgetAll(void)
 * Address: 000c4e10
 */
TFlashStoreLookupCache::ForgetAll(void) {
    /*
         c4e10:	e5901004 	ldr	r1, [r0, #4]	; fField4
         c4e14:	e0812081 	add	r2, r1, r1, lsl #1
         c4e18:	e1a02102 	mov	r2, r2, lsl #2
         c4e1c:	e5900000 	ldr	r0, [r0]
         c4e20:	e3a01000 	mov	r1, #0	; 0x0
         c4e24:	ea6bbf0b 	b	1bb4a58 <$memset>
    */
}

/**
 * Symbol: TFlashStoreLookupCache::Add(TObjRef &)
 * Address: 000c4e28
 */
TFlashStoreLookupCache::Add(TObjRef &) {
    /*
         c4e28:	e1a0c00d 	mov	ip, sp
         c4e2c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c4e30:	e24cb004 	sub	fp, ip, #4	; 0x4
         c4e34:	e1a06000 	mov	r6, r0
         c4e38:	e1a04001 	mov	r4, r1
         c4e3c:	e5911010 	ldr	r1, [r1, #16]
         c4e40:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c4e44:	e1a00800 	mov	r0, r0, lsl #16
         c4e48:	e591104c 	ldr	r1, [r1, #76]
         c4e4c:	e0210c20 	eor	r0, r1, r0, lsr #24
         c4e50:	e20010ff 	and	r1, r0, #255	; 0xff
         c4e54:	e59f0024 	ldr	r0, [pc, #24]	; c4e80 <TFlashStoreLookupCache::Add(TObjRef &)+0x58>
         c4e58:	e7d05001 	ldrb	r5, [r0, r1]
         c4e5c:	e1a00004 	mov	r0, r4
         c4e60:	eb68d398 	bl	1af9cc8 <TObjRef::$GetDirEntOffset(void)>
         c4e64:	e1a02000 	mov	r2, r0
         c4e68:	e5940000 	ldr	r0, [r4]
         c4e6c:	e3c0120f 	bic	r1, r0, #-268435456	; 0xf0000000
         c4e70:	e1a00006 	mov	r0, r6
         c4e74:	e1a03005 	mov	r3, r5
         c4e78:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         c4e7c:	ea68b296 	b	1af18dc <TFlashStoreLookupCache::$Add(unsigned long, unsigned long, int)>
         c4e80:	0037143c 	eoreqs	r1, r7, ip, lsr r4
    */
}

