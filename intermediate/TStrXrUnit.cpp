#include "include/TStrXrUnit.h"

/**
 * Symbol: Make__10TStrXrUnitSFP7TDomainUlP6TArray
 * Address: 00220bcc
 */
void TStrXrUnit::Make() {
    /*
        220bcc:	e1a0c00d 	mov	ip, sp
        220bd0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        220bd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        220bd8:	e1a06000 	mov	r6, r0
        220bdc:	e1a05001 	mov	r5, r1
        220be0:	e1a04002 	mov	r4, r2
        220be4:	e3a000b0 	mov	r0, #176	; 0xb0
        220be8:	eb66b6d2 	bl	1bce738 <$__nw(unsigned int)>
        220bec:	e1b07000 	movs	r7, r0
        220bf0:	0a000003 	beq	220c04 <Make__10TStrXrUnitSFP7TDomainUlP6TArray+0x38>
        220bf4:	e1a00007 	mov	r0, r7
        220bf8:	eb64e853 	bl	1b5ad4c <TSIUnit::$__ct(void)>
        220bfc:	e59f003c 	ldr	r0, [pc, #3c]	; 220c40 <Make__10TStrXrUnitSFP7TDomainUlP6TArray+0x74>
        220c00:	e5870000 	str	r0, [r7]
        220c04:	e3370000 	teq	r7, #0	; 0x0
        220c08:	0a00000a 	beq	220c38 <Make__10TStrXrUnitSFP7TDomainUlP6TArray+0x6c>
        220c0c:	e1a03004 	mov	r3, r4
        220c10:	e1a02005 	mov	r2, r5
        220c14:	e1a01006 	mov	r1, r6
        220c18:	e1a00007 	mov	r0, r7
        220c1c:	eb63ec57 	bl	1b1bd80 <TStrXrUnit::$IStrXrUnit(TDomain *, unsigned long, TArray *)>
        220c20:	e3300000 	teq	r0, #0	; 0x0
        220c24:	0a000003 	beq	220c38 <Make__10TStrXrUnitSFP7TDomainUlP6TArray+0x6c>
        220c28:	e1a00007 	mov	r0, r7
        220c2c:	e1a0e00f 	mov	lr, pc
        220c30:	e597f000 	ldr	pc, [r7]
        220c34:	e3a07000 	mov	r7, #0	; 0x0
        220c38:	e1a00007 	mov	r0, r7
        220c3c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        220c40:	0001ae58 	andeq	sl, r1, r8, asr lr
    */
}

/**
 * Symbol: TStrXrUnit::IStrXrUnit(TDomain *, unsigned long, TArray *)
 * Address: 00220c44
 */
TStrXrUnit::IStrXrUnit(TDomain *, unsigned long, TArray *) {
    /*
        220c44:	e1a0c00d 	mov	ip, sp
        220c48:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        220c4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        220c50:	e1a04000 	mov	r4, r0
        220c54:	e1a00002 	mov	r0, r2
        220c58:	e1a02003 	mov	r2, r3
        220c5c:	e3a03000 	mov	r3, #0	; 0x0
        220c60:	e92d000c 	stmdb	sp!, {r2, r3}
        220c64:	e1a03000 	mov	r3, r0
        220c68:	e1a00004 	mov	r0, r4
        220c6c:	e59f20b4 	ldr	r2, [pc, #b4]	; 220d28 <TStrXrUnit::IStrXrUnit(TDomain *, unsigned long, TArray *)+0xe4>
        220c70:	eb64fcf5 	bl	1b6004c <TSIUnit::$ISIUnit(TDomain *, unsigned long, unsigned long, TArray *, unsigned long)>
        220c74:	e28dd008 	add	sp, sp, #8	; 0x8
        220c78:	e1a06000 	mov	r6, r0
        220c7c:	e2840040 	add	r0, r4, #64	; 0x40
        220c80:	e3a02024 	mov	r2, #36	; 0x24
        220c84:	e3a01000 	mov	r1, #0	; 0x0
        220c88:	eb664f72 	bl	1bb4a58 <$memset>
        220c8c:	e3a05000 	mov	r5, #0	; 0x0
        220c90:	e5c45065 	strb	r5, [r4, #101]	; fField101
        220c94:	e5c45064 	strb	r5, [r4, #100]	; fField100
        220c98:	e5c45067 	strb	r5, [r4, #103]	; fField103
        220c9c:	e5c45066 	strb	r5, [r4, #102]	; fField102
        220ca0:	e5c45069 	strb	r5, [r4, #105]	; fField105
        220ca4:	e5c45068 	strb	r5, [r4, #104]	; fField104
        220ca8:	e5c4506b 	strb	r5, [r4, #107]	; fField107
        220cac:	e5c4506a 	strb	r5, [r4, #106]	; fField106
        220cb0:	e5c4506d 	strb	r5, [r4, #109]	; fField109
        220cb4:	e5c4506c 	strb	r5, [r4, #108]	; fField108
        220cb8:	e5c4506f 	strb	r5, [r4, #111]	; fField111
        220cbc:	e5c4506e 	strb	r5, [r4, #110]	; fField110
        220cc0:	e5c45071 	strb	r5, [r4, #113]	; fField113
        220cc4:	e5c45070 	strb	r5, [r4, #112]	; fField112
        220cc8:	e5c45073 	strb	r5, [r4, #115]	; fField115
        220ccc:	e5c45072 	strb	r5, [r4, #114]	; fField114
        220cd0:	e5845074 	str	r5, [r4, #116]	; fField116
        220cd4:	e5845078 	str	r5, [r4, #120]	; fField120
        220cd8:	e584507c 	str	r5, [r4, #124]	; fField124
        220cdc:	e5845080 	str	r5, [r4, #128]	; fField128
        220ce0:	e5c45085 	strb	r5, [r4, #133]	; fField133
        220ce4:	e5c45084 	strb	r5, [r4, #132]	; fField132
        220ce8:	e5c45087 	strb	r5, [r4, #135]	; fField135
        220cec:	e5c45086 	strb	r5, [r4, #134]	; fField134
        220cf0:	e2840088 	add	r0, r4, #136	; 0x88
        220cf4:	e3a02020 	mov	r2, #32	; 0x20
        220cf8:	e3a01000 	mov	r1, #0	; 0x0
        220cfc:	eb664f55 	bl	1bb4a58 <$memset>
        220d00:	e5c450a9 	strb	r5, [r4, #169]	; fField169
        220d04:	e5c450a8 	strb	r5, [r4, #168]	; fField168
        220d08:	e5c450ab 	strb	r5, [r4, #171]	; fField171
        220d0c:	e5c450aa 	strb	r5, [r4, #170]	; fField170
        220d10:	e5c450ac 	strb	r5, [r4, #172]	; fField172
        220d14:	e3a00001 	mov	r0, #1	; 0x1
        220d18:	e5c400ad 	strb	r0, [r4, #173]	; fField173
        220d1c:	e5c450ae 	strb	r5, [r4, #174]	; fField174
        220d20:	e1a00006 	mov	r0, r6
        220d24:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        220d28:	53545852 	cmppl	r4, #5373952	; 0x520000
    */
}

/**
 * Symbol: TStrXrUnit::IDispose(void)
 * Address: 00220d2c
 */
TStrXrUnit::IDispose(void) {
    /*
        220d2c:	e1a0c00d 	mov	ip, sp
        220d30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        220d34:	e24cb004 	sub	fp, ip, #4	; 0x4
        220d38:	e1a04000 	mov	r4, r0
        220d3c:	e5900078 	ldr	r0, [r0, #120]	; fField120
        220d40:	e3300000 	teq	r0, #0	; 0x0
        220d44:	1b613a9b 	blne	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        220d48:	e3a05000 	mov	r5, #0	; 0x0
        220d4c:	e5845078 	str	r5, [r4, #120]	; fField120
        220d50:	e594007c 	ldr	r0, [r4, #124]	; fField124
        220d54:	e3300000 	teq	r0, #0	; 0x0
        220d58:	1b613a96 	blne	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        220d5c:	e584507c 	str	r5, [r4, #124]	; fField124
        220d60:	e5940074 	ldr	r0, [r4, #116]	; fField116
        220d64:	e3300000 	teq	r0, #0	; 0x0
        220d68:	1b613a94 	blne	1a6f7c0 <$HWRMemoryFree(void *)>
        220d6c:	e5845074 	str	r5, [r4, #116]	; fField116
        220d70:	e5c45073 	strb	r5, [r4, #115]	; fField115
        220d74:	e5c45072 	strb	r5, [r4, #114]	; fField114
        220d78:	e2840080 	add	r0, r4, #128	; 0x80
        220d7c:	eb63f87d 	bl	1b1ef78 <$GCDisposeGResHandle(unsigned long *)>
        220d80:	e5c45085 	strb	r5, [r4, #133]	; fField133
        220d84:	e5c45084 	strb	r5, [r4, #132]	; fField132
        220d88:	e5c45087 	strb	r5, [r4, #135]	; fField135
        220d8c:	e5c45086 	strb	r5, [r4, #134]	; fField134
        220d90:	e2840088 	add	r0, r4, #136	; 0x88
        220d94:	e3a02020 	mov	r2, #32	; 0x20
        220d98:	e3a01000 	mov	r1, #0	; 0x0
        220d9c:	eb664f2d 	bl	1bb4a58 <$memset>
        220da0:	e5c450a9 	strb	r5, [r4, #169]	; fField169
        220da4:	e5c450a8 	strb	r5, [r4, #168]	; fField168
        220da8:	e5c450ab 	strb	r5, [r4, #171]	; fField171
        220dac:	e5c450aa 	strb	r5, [r4, #170]	; fField170
        220db0:	e5c450ac 	strb	r5, [r4, #172]	; fField172
        220db4:	e1a00004 	mov	r0, r4
        220db8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        220dbc:	ea64fc89 	b	1b5ffe8 <TSIUnit::$IDispose(void)>
    */
}

/**
 * Symbol: TStrXrUnit::Dump(TMsg *)
 * Address: 00220dc0
 */
TStrXrUnit::Dump(TMsg *) {
    /*
        220dc0:	e1a0c00d 	mov	ip, sp
        220dc4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        220dc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        220dcc:	e1a05000 	mov	r5, r0
        220dd0:	e1a04001 	mov	r4, r1
        220dd4:	e1a00001 	mov	r0, r1
        220dd8:	e28f1f07 	add	r1, pc, #28	; 0x1c
        220ddc:	eb653228 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        220de0:	e1a01004 	mov	r1, r4
        220de4:	e1a00005 	mov	r0, r5
        220de8:	eb64f43c 	bl	1b5dee0 <TSIUnit::$Dump(TMsg *)>
        220dec:	e1a00004 	mov	r0, r4
        220df0:	e28f1f03 	add	r1, pc, #12	; 0xc
        220df4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        220df8:	ea653221 	b	1b6d684 <TMsg::$MsgStr(char *)>
        220dfc:	53747258 	cmnpl	r4, #-2147483643	; 0x80000005
        220e00:	723a2000 	eorvcs	r2, sl, #0	; 0x0
        220e04:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TStrXrUnit::SizeInBytes(void)
 * Address: 00220e08
 */
TStrXrUnit::SizeInBytes(void) {
    /*
        220e08:	e1a0c00d 	mov	ip, sp
        220e0c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        220e10:	e24cb004 	sub	fp, ip, #4	; 0x4
        220e14:	e1a04000 	mov	r4, r0
        220e18:	e3a05000 	mov	r5, #0	; 0x0
        220e1c:	e5900078 	ldr	r0, [r0, #120]	; fField120
        220e20:	e3300000 	teq	r0, #0	; 0x0
        220e24:	0a000001 	beq	220e30 <TStrXrUnit::SizeInBytes(void)+0x28>
        220e28:	eb6700ae 	bl	1be10e8 <$GetHandleSize>
        220e2c:	e1a05000 	mov	r5, r0
        220e30:	e594007c 	ldr	r0, [r4, #124]	; fField124
        220e34:	e3300000 	teq	r0, #0	; 0x0
        220e38:	0a000001 	beq	220e44 <TStrXrUnit::SizeInBytes(void)+0x3c>
        220e3c:	eb6700a9 	bl	1be10e8 <$GetHandleSize>
        220e40:	e0805005 	add	r5, r0, r5
        220e44:	e5940074 	ldr	r0, [r4, #116]	; fField116
        220e48:	e3300000 	teq	r0, #0	; 0x0
        220e4c:	0a000002 	beq	220e5c <TStrXrUnit::SizeInBytes(void)+0x54>
        220e50:	e5100004 	ldr	r0, [r0, -#4]
        220e54:	eb6700a3 	bl	1be10e8 <$GetHandleSize>
        220e58:	e0805005 	add	r5, r0, r5
        220e5c:	e5940080 	ldr	r0, [r4, #128]	; fField128
        220e60:	e3300000 	teq	r0, #0	; 0x0
        220e64:	0a000001 	beq	220e70 <TStrXrUnit::SizeInBytes(void)+0x68>
        220e68:	eb67009e 	bl	1be10e8 <$GetHandleSize>
        220e6c:	e0805005 	add	r5, r0, r5
        220e70:	e1a00004 	mov	r0, r4
        220e74:	eb6508ce 	bl	1b631b4 <TSIUnit::$SizeInBytes(void)>
        220e78:	e0800005 	add	r0, r0, r5
        220e7c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

