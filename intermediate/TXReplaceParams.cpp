#include "include/TXReplaceParams.h"

/**
 * Symbol: TXReplaceParams::__ct(void)
 * Address: 00253d34
 */
TXReplaceParams::TXReplaceParams(void) {
    /*
        253d34:	e1a0c00d 	mov	ip, sp
        253d38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        253d3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        253d40:	e1b04000 	movs	r4, r0
        253d44:	1a000003 	bne	253d58 <TXReplaceParams::__ct(void)+0x24>
        253d48:	e3a00024 	mov	r0, #36	; 0x24
        253d4c:	eb65ea79 	bl	1bce738 <$__nw(unsigned int)>
        253d50:	e1b04000 	movs	r4, r0
        253d54:	0a000008 	beq	253d7c <TXReplaceParams::__ct(void)+0x48>
        253d58:	e1a00004 	mov	r0, r4
        253d5c:	eb64d1a7 	bl	1b88400 <TXTextDescriptor::$__ct(void)>
        253d60:	e3a00000 	mov	r0, #0	; 0x0
        253d64:	e5840014 	str	r0, [r4, #20]
        253d68:	e584001c 	str	r0, [r4, #28]
        253d6c:	e3a00007 	mov	r0, #7	; 0x7
        253d70:	e5840020 	str	r0, [r4, #32]
        253d74:	e3a00001 	mov	r0, #1	; 0x1
        253d78:	e5c40018 	strb	r0, [r4, #24]
        253d7c:	e1a00004 	mov	r0, r4
        253d80:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXReplaceParams::__ct(TXTextDescriptor const &)
 * Address: 00253d84
 */
TXReplaceParams::TXReplaceParams(TXTextDescriptor const &) {
    /*
        253d84:	e1a0c00d 	mov	ip, sp
        253d88:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        253d8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        253d90:	e1b04000 	movs	r4, r0
        253d94:	e1a05001 	mov	r5, r1
        253d98:	1a000003 	bne	253dac <TXReplaceParams::__ct(TXTextDescriptor const &)+0x28>
        253d9c:	e3a00024 	mov	r0, #36	; 0x24
        253da0:	eb65ea64 	bl	1bce738 <$__nw(unsigned int)>
        253da4:	e1b04000 	movs	r4, r0
        253da8:	0a00000b 	beq	253ddc <TXReplaceParams::__ct(TXTextDescriptor const &)+0x58>
        253dac:	e1a00004 	mov	r0, r4
        253db0:	eb64d192 	bl	1b88400 <TXTextDescriptor::$__ct(void)>
        253db4:	e1a00004 	mov	r0, r4
        253db8:	e895500e 	ldmia	r5, {r1, r2, r3, ip, lr}
        253dbc:	e880500e 	stmia	r0, {r1, r2, r3, ip, lr}
        253dc0:	e3a00000 	mov	r0, #0	; 0x0
        253dc4:	e5840014 	str	r0, [r4, #20]
        253dc8:	e584001c 	str	r0, [r4, #28]
        253dcc:	e3a00007 	mov	r0, #7	; 0x7
        253dd0:	e5840020 	str	r0, [r4, #32]
        253dd4:	e3a00001 	mov	r0, #1	; 0x1
        253dd8:	e5c40018 	strb	r0, [r4, #24]
        253ddc:	e1a00004 	mov	r0, r4
        253de0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXReplaceParams::__ct(TXContainer *, unsigned char)
 * Address: 00253de4
 */
TXReplaceParams::TXReplaceParams(TXContainer *, unsigned char) {
    /*
        253de4:	e1a0c00d 	mov	ip, sp
        253de8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        253dec:	e24cb004 	sub	fp, ip, #4	; 0x4
        253df0:	e1b04000 	movs	r4, r0
        253df4:	e1a05001 	mov	r5, r1
        253df8:	e20260ff 	and	r6, r2, #255	; 0xff
        253dfc:	1a000003 	bne	253e10 <TXReplaceParams::__ct(TXContainer *, unsigned char)+0x2c>
        253e00:	e3a00024 	mov	r0, #36	; 0x24
        253e04:	eb65ea4b 	bl	1bce738 <$__nw(unsigned int)>
        253e08:	e1b04000 	movs	r4, r0
        253e0c:	0a00000a 	beq	253e3c <TXReplaceParams::__ct(TXContainer *, unsigned char)+0x58>
        253e10:	e1a00004 	mov	r0, r4
        253e14:	eb64d179 	bl	1b88400 <TXTextDescriptor::$__ct(void)>
        253e18:	e3a00000 	mov	r0, #0	; 0x0
        253e1c:	e584001c 	str	r0, [r4, #28]
        253e20:	e3a00007 	mov	r0, #7	; 0x7
        253e24:	e5840020 	str	r0, [r4, #32]
        253e28:	e5845014 	str	r5, [r4, #20]
        253e2c:	e1a00005 	mov	r0, r5
        253e30:	eb64d9bb 	bl	1b8a524 <TXContainer::$GetAvailTypes(void)>
        253e34:	e0000006 	and	r0, r0, r6
        253e38:	e5c40018 	strb	r0, [r4, #24]
        253e3c:	e1a00004 	mov	r0, r4
        253e40:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXReplaceParams::__ct(TXTextDescriptor const &, TXRun *, unsigned char)
 * Address: 00253e44
 */
TXReplaceParams::TXReplaceParams(TXTextDescriptor const &, TXRun *, unsigned char) {
    /*
        253e44:	e1a0c00d 	mov	ip, sp
        253e48:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        253e4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        253e50:	e1b04000 	movs	r4, r0
        253e54:	e1a06001 	mov	r6, r1
        253e58:	e1a05002 	mov	r5, r2
        253e5c:	e20370ff 	and	r7, r3, #255	; 0xff
        253e60:	1a000005 	bne	253e7c <TXReplaceParams::__ct(TXTextDescriptor const &, TXRun *, unsigned char)+0x38>
        253e64:	e3a00024 	mov	r0, #36	; 0x24
        253e68:	eb65ea32 	bl	1bce738 <$__nw(unsigned int)>
        253e6c:	e1b04000 	movs	r4, r0
        253e70:	1a000001 	bne	253e7c <TXReplaceParams::__ct(TXTextDescriptor const &, TXRun *, unsigned char)+0x38>
        253e74:	e1a00004 	mov	r0, r4
        253e78:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        253e7c:	e1a00004 	mov	r0, r4
        253e80:	eb64d15e 	bl	1b88400 <TXTextDescriptor::$__ct(void)>
        253e84:	e1a00004 	mov	r0, r4
        253e88:	e896500e 	ldmia	r6, {r1, r2, r3, ip, lr}
        253e8c:	e880500e 	stmia	r0, {r1, r2, r3, ip, lr}
        253e90:	e3a00000 	mov	r0, #0	; 0x0
        253e94:	e5840014 	str	r0, [r4, #20]
        253e98:	e3a00007 	mov	r0, #7	; 0x7
        253e9c:	e3370000 	teq	r7, #0	; 0x0
        253ea0:	e5840020 	str	r0, [r4, #32]
        253ea4:	e584501c 	str	r5, [r4, #28]
        253ea8:	13a0000f 	movne	r0, #15	; 0xf
        253eac:	15840020 	strne	r0, [r4, #32]
        253eb0:	e3a00003 	mov	r0, #3	; 0x3
        253eb4:	e5c40018 	strb	r0, [r4, #24]
        253eb8:	eaffffed 	b	253e74 <TXReplaceParams::__ct(TXTextDescriptor const &, TXRun *, unsigned char)+0x30>
    */
}

