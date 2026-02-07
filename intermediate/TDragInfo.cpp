#include "include/TDragInfo.h"

/**
 * Symbol: TDragInfo::__ct(long)
 * Address: 000a0b78
 */
TDragInfo::TDragInfo(long) {
    /*
         a0b78:	e1a0c00d 	mov	ip, sp
         a0b7c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a0b80:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0b84:	e1b04000 	movs	r4, r0
         a0b88:	e1a05001 	mov	r5, r1
         a0b8c:	1a000003 	bne	a0ba0 <TDragInfo::__ct(long)+0x28>
         a0b90:	e3a00004 	mov	r0, #4	; 0x4
         a0b94:	eb6cb6e7 	bl	1bce738 <$__nw(unsigned int)>
         a0b98:	e1b04000 	movs	r4, r0
         a0b9c:	0a000017 	beq	a0c00 <TDragInfo::__ct(long)+0x88>
         a0ba0:	e3a00002 	mov	r0, #2	; 0x2
         a0ba4:	eb6c8568 	bl	1bc214c <$AllocateRefHandle(long)>
         a0ba8:	e3a01000 	mov	r1, #0	; 0x0
         a0bac:	e5840000 	str	r0, [r4]
         a0bb0:	e5a01004 	str	r1, [r0, #4]!	; fField4
         a0bb4:	e1a00005 	mov	r0, r5
         a0bb8:	eb67ec77 	bl	1a9bd9c <$MakeArray(long)>
         a0bbc:	e5941000 	ldr	r1, [r4]
         a0bc0:	e2555001 	subs	r5, r5, #1	; 0x1
         a0bc4:	e5810000 	str	r0, [r1]
         a0bc8:	4a00000c 	bmi	a0c00 <TDragInfo::__ct(long)+0x88>
         a0bcc:	e3a07002 	mov	r7, #2	; 0x2
         a0bd0:	e1a00007 	mov	r0, r7
         a0bd4:	eb6c855c 	bl	1bc214c <$AllocateRefHandle(long)>
         a0bd8:	e1a06000 	mov	r6, r0
         a0bdc:	e5902000 	ldr	r2, [r0]
         a0be0:	e5940000 	ldr	r0, [r4]
         a0be4:	e5900000 	ldr	r0, [r0]
         a0be8:	e1a01005 	mov	r1, r5
         a0bec:	eb6c95d9 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a0bf0:	e1a00006 	mov	r0, r6
         a0bf4:	eb6c8970 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0bf8:	e2555001 	subs	r5, r5, #1	; 0x1
         a0bfc:	5afffff3 	bpl	a0bd0 <TDragInfo::__ct(long)+0x58>
         a0c00:	e1a00004 	mov	r0, r4
         a0c04:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TDragInfo::__ct(RefVar const &)
 * Address: 000a0c08
 */
TDragInfo::TDragInfo(RefVar const &) {
    /*
         a0c08:	e1a0c00d 	mov	ip, sp
         a0c0c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a0c10:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0c14:	e1b04000 	movs	r4, r0
         a0c18:	e1a05001 	mov	r5, r1
         a0c1c:	1a000003 	bne	a0c30 <TDragInfo::__ct(RefVar const &)+0x28>
         a0c20:	e3a00004 	mov	r0, #4	; 0x4
         a0c24:	eb6cb6c3 	bl	1bce738 <$__nw(unsigned int)>
         a0c28:	e1b04000 	movs	r4, r0
         a0c2c:	0a000008 	beq	a0c54 <TDragInfo::__ct(RefVar const &)+0x4c>
         a0c30:	e3a00002 	mov	r0, #2	; 0x2
         a0c34:	eb6c8544 	bl	1bc214c <$AllocateRefHandle(long)>
         a0c38:	e3a01000 	mov	r1, #0	; 0x0
         a0c3c:	e5840000 	str	r0, [r4]
         a0c40:	e5a01004 	str	r1, [r0, #4]!	; fField4
         a0c44:	e5950000 	ldr	r0, [r5]
         a0c48:	e5900000 	ldr	r0, [r0]
         a0c4c:	e5941000 	ldr	r1, [r4]
         a0c50:	e5810000 	str	r0, [r1]
         a0c54:	e1a00004 	mov	r0, r4
         a0c58:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDragInfo::__ct(RefVar const &, RefVar const &, RefVar const &)
 * Address: 000a0c5c
 */
TDragInfo::TDragInfo(RefVar const &, RefVar const &, RefVar const &) {
    /*
         a0c5c:	e1a0c00d 	mov	ip, sp
         a0c60:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a0c64:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0c68:	e1b04000 	movs	r4, r0
         a0c6c:	e1a06001 	mov	r6, r1
         a0c70:	e1a05002 	mov	r5, r2
         a0c74:	e1a07003 	mov	r7, r3
         a0c78:	1a000003 	bne	a0c8c <TDragInfo::__ct(RefVar const &, RefVar const &, RefVar const &)+0x30>
         a0c7c:	e3a00004 	mov	r0, #4	; 0x4
         a0c80:	eb6cb6ac 	bl	1bce738 <$__nw(unsigned int)>
         a0c84:	e1b04000 	movs	r4, r0
         a0c88:	0a00000d 	beq	a0cc4 <TDragInfo::__ct(RefVar const &, RefVar const &, RefVar const &)+0x68>
         a0c8c:	e3a00002 	mov	r0, #2	; 0x2
         a0c90:	eb6c852d 	bl	1bc214c <$AllocateRefHandle(long)>
         a0c94:	e3a01000 	mov	r1, #0	; 0x0
         a0c98:	e5840000 	str	r0, [r4]
         a0c9c:	e5a01004 	str	r1, [r0, #4]!	; fField4
         a0ca0:	e3a00000 	mov	r0, #0	; 0x0
         a0ca4:	eb67ec3c 	bl	1a9bd9c <$MakeArray(long)>
         a0ca8:	e5941000 	ldr	r1, [r4]
         a0cac:	e1a03007 	mov	r3, r7
         a0cb0:	e1a02005 	mov	r2, r5
         a0cb4:	e5810000 	str	r0, [r1]
         a0cb8:	e1a01006 	mov	r1, r6
         a0cbc:	e1a00004 	mov	r0, r4
         a0cc0:	eb681dd9 	bl	1aa842c <TDragInfo::$AddDragItem(RefVar const &, RefVar const &, RefVar const &)>
         a0cc4:	e1a00004 	mov	r0, r4
         a0cc8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TDragInfo::CheckTypes( const(RefVar const &))
 * Address: 000a0ccc
 */
TDragInfo::CheckTypes( const(RefVar const &)) {
    /*
         a0ccc:	e1a0c00d 	mov	ip, sp
         a0cd0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         a0cd4:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0cd8:	e1a04000 	mov	r4, r0
         a0cdc:	e1a06001 	mov	r6, r1
         a0ce0:	e5900000 	ldr	r0, [r0]
         a0ce4:	e5900000 	ldr	r0, [r0]
         a0ce8:	eb6c916f 	bl	1bc52ac <$Length(long)>
         a0cec:	e2507001 	subs	r7, r0, #1	; 0x1
         a0cf0:	4a00001b 	bmi	a0d64 <TDragInfo::CheckTypes( const(RefVar const &))+0x98>
         a0cf4:	e3a09002 	mov	r9, #2	; 0x2
         a0cf8:	e3a08000 	mov	r8, #0	; 0x0
         a0cfc:	e24dd008 	sub	sp, sp, #8	; 0x8
         a0d00:	e1a01007 	mov	r1, r7
         a0d04:	e1a00004 	mov	r0, r4
         a0d08:	eb68bed0 	bl	1ad0850 <TDragInfo::$GetItemTypes( const(long))>
         a0d0c:	eb6c850e 	bl	1bc214c <$AllocateRefHandle(long)>
         a0d10:	e58d0000 	str	r0, [sp]
         a0d14:	e1a0500d 	mov	r5, sp
         a0d18:	e1a00009 	mov	r0, r9
         a0d1c:	eb6c850a 	bl	1bc214c <$AllocateRefHandle(long)>
         a0d20:	e58d0004 	str	r0, [sp, #4]	; fField4
         a0d24:	e28d0004 	add	r0, sp, #4	; 0x4
         a0d28:	e1a01006 	mov	r1, r6
         a0d2c:	e1a02005 	mov	r2, r5
         a0d30:	eb66f462 	bl	1a5dec0 <$FSetOverlaps>
         a0d34:	e2105003 	ands	r5, r0, #3	; 0x3
         a0d38:	13a05001 	movne	r5, #1	; 0x1
         a0d3c:	e59d0000 	ldr	r0, [sp]
         a0d40:	eb6c891d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0d44:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a0d48:	eb6c891b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0d4c:	e3350000 	teq	r5, #0	; 0x0
         a0d50:	11a00008 	movne	r0, r8
         a0d54:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         a0d58:	e28dd008 	add	sp, sp, #8	; 0x8
         a0d5c:	e2577001 	subs	r7, r7, #1	; 0x1
         a0d60:	5affffe5 	bpl	a0cfc <TDragInfo::CheckTypes( const(RefVar const &))+0x30>
         a0d64:	e3a00001 	mov	r0, #1	; 0x1
         a0d68:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TDragInfo::GetItemTypes( const(long))
 * Address: 000a0d6c
 */
TDragInfo::GetItemTypes( const(long)) {
    /*
         a0d6c:	e1a0c00d 	mov	ip, sp
         a0d70:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a0d74:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0d78:	e5900000 	ldr	r0, [r0]
         a0d7c:	e5900000 	ldr	r0, [r0]
         a0d80:	eb6c8d33 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a0d84:	eb6c84f0 	bl	1bc214c <$AllocateRefHandle(long)>
         a0d88:	e1a04000 	mov	r4, r0
         a0d8c:	e59f0020 	ldr	r0, [pc, #20]	; a0db4 <TDragInfo::GetItemTypes( const(long))+0x48>
         a0d90:	e5900000 	ldr	r0, [r0]
         a0d94:	e5901000 	ldr	r1, [r0]
         a0d98:	e5940000 	ldr	r0, [r4]
         a0d9c:	eb6c8d2f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a0da0:	e1a05000 	mov	r5, r0
         a0da4:	e1a00004 	mov	r0, r4
         a0da8:	eb6c8903 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0dac:	e1a00005 	mov	r0, r5
         a0db0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         a0db4:	00684cc0 	rsbeq	r4, r8, r0, asr #25
    */
}

/**
 * Symbol: GetItemIndType__9TDragInfoCFlT1
 * Address: 000a0db8
 */
void TDragInfo::GetItemIndType() {
    /*
         a0db8:	e1a0c00d 	mov	ip, sp
         a0dbc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a0dc0:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0dc4:	e1a04002 	mov	r4, r2
         a0dc8:	eb68bea0 	bl	1ad0850 <TDragInfo::$GetItemTypes( const(long))>
         a0dcc:	eb6c84de 	bl	1bc214c <$AllocateRefHandle(long)>
         a0dd0:	e1a05000 	mov	r5, r0
         a0dd4:	e5900000 	ldr	r0, [r0]
         a0dd8:	e1a01004 	mov	r1, r4
         a0ddc:	eb6c8d1c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a0de0:	e1a04000 	mov	r4, r0
         a0de4:	e1a00005 	mov	r0, r5
         a0de8:	eb6c88f3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0dec:	e1a00004 	mov	r0, r4
         a0df0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDragInfo::GetItemDragRef( const(long))
 * Address: 000a0df8
 */
TDragInfo::GetItemDragRef( const(long)) {
    /*
         a0df8:	e1a0c00d 	mov	ip, sp
         a0dfc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a0e00:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0e04:	e5900000 	ldr	r0, [r0]
         a0e08:	e5900000 	ldr	r0, [r0]
         a0e0c:	eb6c8d10 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a0e10:	eb6c84cd 	bl	1bc214c <$AllocateRefHandle(long)>
         a0e14:	e1a04000 	mov	r4, r0
         a0e18:	e59f0020 	ldr	r0, [pc, #20]	; a0e40 <TDragInfo::GetItemDragRef( const(long))+0x48>
         a0e1c:	e5900000 	ldr	r0, [r0]
         a0e20:	e5901000 	ldr	r1, [r0]
         a0e24:	e5940000 	ldr	r0, [r4]
         a0e28:	eb6c8d0c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a0e2c:	e1a05000 	mov	r5, r0
         a0e30:	e1a00004 	mov	r0, r4
         a0e34:	eb6c88e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0e38:	e1a00005 	mov	r0, r5
         a0e3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         a0e40:	00682a80 	rsbeq	r2, r8, r0, lsl #21
    */
}

/**
 * Symbol: TDragInfo::GetItemDragLabel( const(long))
 * Address: 000a0e44
 */
TDragInfo::GetItemDragLabel( const(long)) {
    /*
         a0e44:	e1a0c00d 	mov	ip, sp
         a0e48:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a0e4c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0e50:	e5900000 	ldr	r0, [r0]
         a0e54:	e5900000 	ldr	r0, [r0]
         a0e58:	eb6c8cfd 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a0e5c:	eb6c84ba 	bl	1bc214c <$AllocateRefHandle(long)>
         a0e60:	e1a04000 	mov	r4, r0
         a0e64:	e59f0020 	ldr	r0, [pc, #20]	; a0e8c <TDragInfo::GetItemDragLabel( const(long))+0x48>
         a0e68:	e5900000 	ldr	r0, [r0]
         a0e6c:	e5901000 	ldr	r1, [r0]
         a0e70:	e5940000 	ldr	r0, [r4]
         a0e74:	eb6c8cf9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a0e78:	e1a05000 	mov	r5, r0
         a0e7c:	e1a00004 	mov	r0, r4
         a0e80:	eb6c88cd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0e84:	e1a00005 	mov	r0, r5
         a0e88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         a0e8c:	00683400 	rsbeq	r3, r8, r0, lsl #8
    */
}

/**
 * Symbol: TDragInfo::GetItemView( const(long))
 * Address: 000a0e90
 */
TDragInfo::GetItemView( const(long)) {
    /*
         a0e90:	e1a0c00d 	mov	ip, sp
         a0e94:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a0e98:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0e9c:	e24dd004 	sub	sp, sp, #4	; 0x4
         a0ea0:	e5900000 	ldr	r0, [r0]
         a0ea4:	e5900000 	ldr	r0, [r0]
         a0ea8:	eb6c8ce9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a0eac:	eb6c84a6 	bl	1bc214c <$AllocateRefHandle(long)>
         a0eb0:	e1a04000 	mov	r4, r0
         a0eb4:	e59f004c 	ldr	r0, [pc, #4c]	; a0f08 <TDragInfo::GetItemView( const(long))+0x78>	; fField4
         a0eb8:	e5900000 	ldr	r0, [r0]
         a0ebc:	e5901000 	ldr	r1, [r0]
         a0ec0:	e5940000 	ldr	r0, [r4]
         a0ec4:	eb6c8ce5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a0ec8:	eb6c849f 	bl	1bc214c <$AllocateRefHandle(long)>
         a0ecc:	e58d0000 	str	r0, [sp]
         a0ed0:	e1a00004 	mov	r0, r4
         a0ed4:	eb6c88b8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0ed8:	e3a04000 	mov	r4, #0	; 0x0
         a0edc:	e59d0000 	ldr	r0, [sp]
         a0ee0:	e5900000 	ldr	r0, [r0]
         a0ee4:	e3300002 	teq	r0, #2	; 0x2
         a0ee8:	0a000007 	beq	a0f0c <TDragInfo::GetItemView( const(long))+0x7c>
         a0eec:	e1a0000d 	mov	r0, sp
         a0ef0:	eb0532c3 	bl	1eda04 <FailGetView(RefVar const &)>
         a0ef4:	e1a04000 	mov	r4, r0
         a0ef8:	e59d0000 	ldr	r0, [sp]
         a0efc:	eb6c88ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0f00:	e1a00004 	mov	r0, r4
         a0f04:	ea000003 	b	a0f18 <TDragInfo::GetItemView( const(long))+0x88>
         a0f08:	00684ee8 	rsbeq	r4, r8, r8, ror #29
         a0f0c:	e59d0000 	ldr	r0, [sp]
         a0f10:	eb6c88a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0f14:	e1a00004 	mov	r0, r4
         a0f18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDragInfo::SetItemView(long, TView *)
 * Address: 000a0f1c
 */
TDragInfo::SetItemView(long, TView *) {
    /*
         a0f1c:	e1a0c00d 	mov	ip, sp
         a0f20:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a0f24:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0f28:	e24dd004 	sub	sp, sp, #4	; 0x4
         a0f2c:	e2824024 	add	r4, r2, #36	; 0x24
         a0f30:	eb68b1f0 	bl	1acd6f8 <TDragInfo::$CreateItemFrame(long)>
         a0f34:	eb6c8484 	bl	1bc214c <$AllocateRefHandle(long)>
         a0f38:	e58d0000 	str	r0, [sp]
         a0f3c:	e1a0000d 	mov	r0, sp
         a0f40:	e59f1010 	ldr	r1, [pc, #10]	; a0f58 <TDragInfo::SetItemView(long, TView *)+0x3c>
         a0f44:	e1a02004 	mov	r2, r4
         a0f48:	eb6c9506 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a0f4c:	e59d0000 	ldr	r0, [sp]
         a0f50:	eb6c8899 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0f54:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         a0f58:	00684ee8 	rsbeq	r4, r8, r8, ror #29
    */
}

/**
 * Symbol: TDragInfo::FindType( const(long, RefVar const &))
 * Address: 000a0f5c
 */
TDragInfo::FindType( const(long, RefVar const &)) {
    /*
         a0f5c:	e1a0c00d 	mov	ip, sp
         a0f60:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a0f64:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0f68:	e1a04002 	mov	r4, r2
         a0f6c:	e24dd008 	sub	sp, sp, #8	; 0x8
         a0f70:	eb68be36 	bl	1ad0850 <TDragInfo::$GetItemTypes( const(long))>
         a0f74:	eb6c8474 	bl	1bc214c <$AllocateRefHandle(long)>
         a0f78:	e58d0004 	str	r0, [sp, #4]	; fField4
         a0f7c:	e3a00002 	mov	r0, #2	; 0x2
         a0f80:	eb6c8471 	bl	1bc214c <$AllocateRefHandle(long)>
         a0f84:	e58d0000 	str	r0, [sp]
         a0f88:	e1a00004 	mov	r0, r4
         a0f8c:	eb6d4a7e 	bl	1bf398c <$IsArray(RefVar const &)>
         a0f90:	e3a05000 	mov	r5, #0	; 0x0
         a0f94:	e3300000 	teq	r0, #0	; 0x0
         a0f98:	e5940000 	ldr	r0, [r4]
         a0f9c:	e5900000 	ldr	r0, [r0]
         a0fa0:	1a00000b 	bne	a0fd4 <TDragInfo::FindType( const(long, RefVar const &))+0x78>
         a0fa4:	eb6c8468 	bl	1bc214c <$AllocateRefHandle(long)>
         a0fa8:	e1a04000 	mov	r4, r0
         a0fac:	e3a00001 	mov	r0, #1	; 0x1
         a0fb0:	eb67eb79 	bl	1a9bd9c <$MakeArray(long)>
         a0fb4:	e59d1000 	ldr	r1, [sp]
         a0fb8:	e5810000 	str	r0, [r1]
         a0fbc:	e1a01005 	mov	r1, r5
         a0fc0:	e5942000 	ldr	r2, [r4]
         a0fc4:	eb6c94e3 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a0fc8:	e1a00004 	mov	r0, r4
         a0fcc:	eb6c887a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0fd0:	ea000001 	b	a0fdc <TDragInfo::FindType( const(long, RefVar const &))+0x80>
         a0fd4:	e59d1000 	ldr	r1, [sp]
         a0fd8:	e5810000 	str	r0, [r1]
         a0fdc:	e24dd004 	sub	sp, sp, #4	; 0x4
         a0fe0:	e3a05002 	mov	r5, #2	; 0x2
         a0fe4:	e1a00005 	mov	r0, r5
         a0fe8:	eb6c8457 	bl	1bc214c <$AllocateRefHandle(long)>
         a0fec:	e58d0000 	str	r0, [sp]
         a0ff0:	e1a0000d 	mov	r0, sp
         a0ff4:	e28d2008 	add	r2, sp, #8	; 0x8
         a0ff8:	e28d1004 	add	r1, sp, #4	; 0x4
         a0ffc:	eb66f3af 	bl	1a5dec0 <$FSetOverlaps>
         a1000:	eb6c8451 	bl	1bc214c <$AllocateRefHandle(long)>
         a1004:	e1a04000 	mov	r4, r0
         a1008:	e59d0000 	ldr	r0, [sp]
         a100c:	eb6c886a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1010:	e5940000 	ldr	r0, [r4]
         a1014:	e2001003 	and	r1, r0, #3	; 0x3
         a1018:	e3510000 	cmp	r1, #0	; 0x0
         a101c:	1a00000f 	bne	a1060 <TDragInfo::FindType( const(long, RefVar const &))+0x104>
         a1020:	01a00140 	moveq	r0, r0, asr #2
         a1024:	0a000000 	beq	a102c <TDragInfo::FindType( const(long, RefVar const &))+0xd0>
         a1028:	eb6c843b 	bl	1bc211c <$_RINTError(long)>
         a102c:	e1a01000 	mov	r1, r0
         a1030:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a1034:	e5900000 	ldr	r0, [r0]
         a1038:	eb6c8c85 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a103c:	e1a05000 	mov	r5, r0
         a1040:	e1a00004 	mov	r0, r4
         a1044:	eb6c885c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1048:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a104c:	eb6c885a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1050:	e59d0008 	ldr	r0, [sp, #8]
         a1054:	eb6c8858 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1058:	e1a00005 	mov	r0, r5
         a105c:	ea000006 	b	a107c <TDragInfo::FindType( const(long, RefVar const &))+0x120>
         a1060:	e1a00004 	mov	r0, r4
         a1064:	eb6c8854 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1068:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a106c:	eb6c8852 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1070:	e59d0008 	ldr	r0, [sp, #8]
         a1074:	eb6c8850 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1078:	e1a00005 	mov	r0, r5
         a107c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDragInfo::CreateItemFrame(long)
 * Address: 000a1080
 */
TDragInfo::CreateItemFrame(long) {
    /*
         a1080:	e1a0c00d 	mov	ip, sp
         a1084:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a1088:	e24cb004 	sub	fp, ip, #4	; 0x4
         a108c:	e1a05000 	mov	r5, r0
         a1090:	e1a04001 	mov	r4, r1
         a1094:	e5900000 	ldr	r0, [r0]
         a1098:	e5900000 	ldr	r0, [r0]
         a109c:	eb6c8c6c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a10a0:	eb6c8429 	bl	1bc214c <$AllocateRefHandle(long)>
         a10a4:	e1a06000 	mov	r6, r0
         a10a8:	e5900000 	ldr	r0, [r0]
         a10ac:	e3300002 	teq	r0, #2	; 0x2
         a10b0:	1a000007 	bne	a10d4 <TDragInfo::CreateItemFrame(long)+0x54>
         a10b4:	e59f002c 	ldr	r0, [pc, #2c]	; a10e8 <TDragInfo::CreateItemFrame(long)+0x68>
         a10b8:	eb6c842b 	bl	1bc216c <$Clone(RefVar const &)>
         a10bc:	e5860000 	str	r0, [r6]
         a10c0:	e1a02000 	mov	r2, r0
         a10c4:	e5950000 	ldr	r0, [r5]
         a10c8:	e5900000 	ldr	r0, [r0]
         a10cc:	e1a01004 	mov	r1, r4
         a10d0:	eb6c94a0 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a10d4:	e5964000 	ldr	r4, [r6]
         a10d8:	e1a00006 	mov	r0, r6
         a10dc:	eb6c8836 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a10e0:	e1a00004 	mov	r0, r4
         a10e4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         a10e8:	00680b98 	streqb	r0, [r8], -#184
    */
}

/**
 * Symbol: TDragInfo::SetItemDragRef(long, RefVar const &)
 * Address: 000a10ec
 */
TDragInfo::SetItemDragRef(long, RefVar const &) {
    /*
         a10ec:	e1a0c00d 	mov	ip, sp
         a10f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a10f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         a10f8:	e1a04002 	mov	r4, r2
         a10fc:	e24dd004 	sub	sp, sp, #4	; 0x4
         a1100:	eb68b17c 	bl	1acd6f8 <TDragInfo::$CreateItemFrame(long)>
         a1104:	eb6c8410 	bl	1bc214c <$AllocateRefHandle(long)>
         a1108:	e58d0000 	str	r0, [sp]
         a110c:	e1a0000d 	mov	r0, sp
         a1110:	e1a02004 	mov	r2, r4
         a1114:	e59f100c 	ldr	r1, [pc, #c]	; a1128 <TDragInfo::SetItemDragRef(long, RefVar const &)+0x3c>
         a1118:	eb6c9492 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a111c:	e59d0000 	ldr	r0, [sp]
         a1120:	eb6c8825 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1124:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         a1128:	00682a80 	rsbeq	r2, r8, r0, lsl #21
    */
}

/**
 * Symbol: TDragInfo::SetItemDragLabel(long, RefVar const &)
 * Address: 000a112c
 */
TDragInfo::SetItemDragLabel(long, RefVar const &) {
    /*
         a112c:	e1a0c00d 	mov	ip, sp
         a1130:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a1134:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1138:	e1a04002 	mov	r4, r2
         a113c:	e24dd004 	sub	sp, sp, #4	; 0x4
         a1140:	eb68b16c 	bl	1acd6f8 <TDragInfo::$CreateItemFrame(long)>
         a1144:	eb6c8400 	bl	1bc214c <$AllocateRefHandle(long)>
         a1148:	e58d0000 	str	r0, [sp]
         a114c:	e1a0000d 	mov	r0, sp
         a1150:	e1a02004 	mov	r2, r4
         a1154:	e59f100c 	ldr	r1, [pc, #c]	; a1168 <TDragInfo::SetItemDragLabel(long, RefVar const &)+0x3c>
         a1158:	eb6c9482 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a115c:	e59d0000 	ldr	r0, [sp]
         a1160:	eb6c8815 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1164:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         a1168:	00683400 	rsbeq	r3, r8, r0, lsl #8
    */
}

/**
 * Symbol: TDragInfo::SetItemDragTypes(long, RefVar const &)
 * Address: 000a116c
 */
TDragInfo::SetItemDragTypes(long, RefVar const &) {
    /*
         a116c:	e1a0c00d 	mov	ip, sp
         a1170:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a1174:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1178:	e1a04002 	mov	r4, r2
         a117c:	e24dd004 	sub	sp, sp, #4	; 0x4
         a1180:	eb68b15c 	bl	1acd6f8 <TDragInfo::$CreateItemFrame(long)>
         a1184:	eb6c83f0 	bl	1bc214c <$AllocateRefHandle(long)>
         a1188:	e58d0000 	str	r0, [sp]
         a118c:	e1a0000d 	mov	r0, sp
         a1190:	e1a02004 	mov	r2, r4
         a1194:	e59f100c 	ldr	r1, [pc, #c]	; a11a8 <TDragInfo::SetItemDragTypes(long, RefVar const &)+0x3c>
         a1198:	eb6c9472 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a119c:	e59d0000 	ldr	r0, [sp]
         a11a0:	eb6c8805 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a11a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         a11a8:	00684cc0 	rsbeq	r4, r8, r0, asr #25
    */
}

/**
 * Symbol: TDragInfo::AddItemDragType(long, RefVar const &)
 * Address: 000a11ac
 */
TDragInfo::AddItemDragType(long, RefVar const &) {
    /*
         a11ac:	e1a0c00d 	mov	ip, sp
         a11b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a11b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         a11b8:	e1a04002 	mov	r4, r2
         a11bc:	e24dd008 	sub	sp, sp, #8	; 0x8
         a11c0:	eb68b14c 	bl	1acd6f8 <TDragInfo::$CreateItemFrame(long)>
         a11c4:	eb6c83e0 	bl	1bc214c <$AllocateRefHandle(long)>
         a11c8:	e58d0004 	str	r0, [sp, #4]	; fField4
         a11cc:	e59f0098 	ldr	r0, [pc, #98]	; a126c <TDragInfo::AddItemDragType(long, RefVar const &)+0xc0>
         a11d0:	e5900000 	ldr	r0, [r0]
         a11d4:	e5901000 	ldr	r1, [r0]
         a11d8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a11dc:	e5900000 	ldr	r0, [r0]
         a11e0:	eb6c8c1e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a11e4:	eb6c83d8 	bl	1bc214c <$AllocateRefHandle(long)>
         a11e8:	e58d0000 	str	r0, [sp]
         a11ec:	e1a00004 	mov	r0, r4
         a11f0:	eb6d49e5 	bl	1bf398c <$IsArray(RefVar const &)>
         a11f4:	e59f6070 	ldr	r6, [pc, #70]	; a126c <TDragInfo::AddItemDragType(long, RefVar const &)+0xc0>
         a11f8:	e3300000 	teq	r0, #0	; 0x0
         a11fc:	0a00001b 	beq	a1270 <TDragInfo::AddItemDragType(long, RefVar const &)+0xc4>
         a1200:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a1204:	e3a0001a 	mov	r0, #26	; 0x1a
         a1208:	eb6c83cf 	bl	1bc214c <$AllocateRefHandle(long)>
         a120c:	e58d0004 	str	r0, [sp, #4]	; fField4
         a1210:	e28d5004 	add	r5, sp, #4	; 0x4
         a1214:	e3a00002 	mov	r0, #2	; 0x2
         a1218:	eb6c83cb 	bl	1bc214c <$AllocateRefHandle(long)>
         a121c:	e58d0008 	str	r0, [sp, #8]
         a1220:	e28d0008 	add	r0, sp, #8	; 0x8
         a1224:	e1a02004 	mov	r2, r4
         a1228:	e28d100c 	add	r1, sp, #12	; 0xc
         a122c:	e1a03005 	mov	r3, r5
         a1230:	eb66f326 	bl	1a5ded0 <$FSetUnion>
         a1234:	eb6c83c4 	bl	1bc214c <$AllocateRefHandle(long)>
         a1238:	e58d0000 	str	r0, [sp]
         a123c:	e1a0200d 	mov	r2, sp
         a1240:	e1a01006 	mov	r1, r6
         a1244:	e28d0010 	add	r0, sp, #16	; 0x10
         a1248:	eb6c9446 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a124c:	e59d0000 	ldr	r0, [sp]
         a1250:	eb6c87d9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1254:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a1258:	eb6c87d7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a125c:	e59d0008 	ldr	r0, [sp, #8]
         a1260:	eb6c87d5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1264:	e28dd00c 	add	sp, sp, #12	; 0xc
         a1268:	ea00000f 	b	a12ac <TDragInfo::AddItemDragType(long, RefVar const &)+0x100>
         a126c:	00684cc0 	rsbeq	r4, r8, r0, asr #25
         a1270:	e59d0000 	ldr	r0, [sp]
         a1274:	e5900000 	ldr	r0, [r0]
         a1278:	e3300002 	teq	r0, #2	; 0x2
         a127c:	1a000007 	bne	a12a0 <TDragInfo::AddItemDragType(long, RefVar const &)+0xf4>
         a1280:	e3a00000 	mov	r0, #0	; 0x0
         a1284:	eb67eac4 	bl	1a9bd9c <$MakeArray(long)>
         a1288:	e59d1000 	ldr	r1, [sp]
         a128c:	e1a0200d 	mov	r2, sp
         a1290:	e5810000 	str	r0, [r1]
         a1294:	e1a01006 	mov	r1, r6
         a1298:	e28d0004 	add	r0, sp, #4	; 0x4
         a129c:	eb6c9431 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a12a0:	e1a01004 	mov	r1, r4
         a12a4:	e1a0000d 	mov	r0, sp
         a12a8:	eb6c839e 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         a12ac:	e59d0000 	ldr	r0, [sp]
         a12b0:	eb6c87c1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a12b4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a12b8:	eb6c87bf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a12bc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDragInfo::AddDragItem(void)
 * Address: 000a1330
 */
TDragInfo::AddDragItem(void) {
    /*
         a1330:	e1a0c00d 	mov	ip, sp
         a1334:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a1338:	e24cb004 	sub	fp, ip, #4	; 0x4
         a133c:	e1a04000 	mov	r4, r0
         a1340:	e24dd004 	sub	sp, sp, #4	; 0x4
         a1344:	e3a00002 	mov	r0, #2	; 0x2
         a1348:	eb6c837f 	bl	1bc214c <$AllocateRefHandle(long)>
         a134c:	e58d0000 	str	r0, [sp]
         a1350:	e1a0100d 	mov	r1, sp
         a1354:	e1a00004 	mov	r0, r4
         a1358:	eb6c8372 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         a135c:	e59d0000 	ldr	r0, [sp]
         a1360:	eb6c8795 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1364:	e5940000 	ldr	r0, [r4]
         a1368:	e5900000 	ldr	r0, [r0]
         a136c:	eb6c8fce 	bl	1bc52ac <$Length(long)>
         a1370:	e2400001 	sub	r0, r0, #1	; 0x1
         a1374:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDragInfo::AddDragItem(RefVar const &, RefVar const &, RefVar const &)
 * Address: 000a1378
 */
TDragInfo::AddDragItem(RefVar const &, RefVar const &, RefVar const &) {
    /*
         a1378:	e1a0c00d 	mov	ip, sp
         a137c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         a1380:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1384:	e1a04000 	mov	r4, r0
         a1388:	e1a07001 	mov	r7, r1
         a138c:	e1a06002 	mov	r6, r2
         a1390:	e1a05003 	mov	r5, r3
         a1394:	eb681c25 	bl	1aa8430 <TDragInfo::$AddDragItem(void)>
         a1398:	e1a08000 	mov	r8, r0
         a139c:	e1a02006 	mov	r2, r6
         a13a0:	e1a01000 	mov	r1, r0
         a13a4:	e1a00004 	mov	r0, r4
         a13a8:	eb68c989 	bl	1ad39d4 <TDragInfo::$SetItemDragRef(long, RefVar const &)>
         a13ac:	e1a02007 	mov	r2, r7
         a13b0:	e1a01008 	mov	r1, r8
         a13b4:	e1a00004 	mov	r0, r4
         a13b8:	eb6876da 	bl	1abef28 <TDragInfo::$AddItemDragType(long, RefVar const &)>
         a13bc:	e5950000 	ldr	r0, [r5]
         a13c0:	e5900000 	ldr	r0, [r0]
         a13c4:	e3300002 	teq	r0, #2	; 0x2
         a13c8:	0a000003 	beq	a13dc <TDragInfo::AddDragItem(RefVar const &, RefVar const &, RefVar const &)+0x64>
         a13cc:	e1a02005 	mov	r2, r5
         a13d0:	e1a01008 	mov	r1, r8
         a13d4:	e1a00004 	mov	r0, r4
         a13d8:	eb68c97c 	bl	1ad39d0 <TDragInfo::$SetItemDragLabel(long, RefVar const &)>
         a13dc:	e1a00008 	mov	r0, r8
         a13e0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

