#include "include/Textension.h"

/**
 * Symbol: TextensionStart__10TextensionSFv
 * Address: 00252b30
 */
void Textension::TextensionStart() {
    /*
        252b30:	e1a0c00d 	mov	ip, sp
        252b34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        252b38:	e24cb004 	sub	fp, ip, #4	; 0x4
        252b3c:	e3a05000 	mov	r5, #0	; 0x0
        252b40:	e59f0094 	ldr	r0, [pc, #94]	; 252bdc <TextensionStart__10TextensionSFv+0xac>
        252b44:	e5c05000 	strb	r5, [r0]
        252b48:	e3a0001e 	mov	r0, #30	; 0x1e
        252b4c:	e59f108c 	ldr	r1, [pc, #8c]	; 252be0 <TextensionStart__10TextensionSFv+0xb0>	; fField8
        252b50:	e5810000 	str	r0, [r1]
        252b54:	e3a0002c 	mov	r0, #44	; 0x2c
        252b58:	eb65eef6 	bl	1bce738 <$__nw(unsigned int)>
        252b5c:	e1b04000 	movs	r4, r0
        252b60:	0a000003 	beq	252b74 <TextensionStart__10TextensionSFv+0x44>
        252b64:	e1a00004 	mov	r0, r4
        252b68:	eb64da55 	bl	1b894c4 <TXTempReferences::$__ct(void)>
        252b6c:	e59f0070 	ldr	r0, [pc, #70]	; 252be4 <TextensionStart__10TextensionSFv+0xb4>
        252b70:	e5840000 	str	r0, [r4]
        252b74:	e59f006c 	ldr	r0, [pc, #6c]	; 252be8 <TextensionStart__10TextensionSFv+0xb8>
        252b78:	e5804000 	str	r4, [r0]
        252b7c:	eb64e28d 	bl	1b8b5b8 <$Start__9TXDisplaySFv>
        252b80:	e3a040e9 	mov	r4, #233	; 0xe9
        252b84:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        252b88:	e3a00000 	mov	r0, #0	; 0x0
        252b8c:	eb64e283 	bl	1b8b5a0 <TXRegisteredObjects::$__ct(void)>
        252b90:	e59f1054 	ldr	r1, [pc, #54]	; 252bec <TextensionStart__10TextensionSFv+0xbc>
        252b94:	e5810000 	str	r0, [r1]
        252b98:	e3300000 	teq	r0, #0	; 0x0
        252b9c:	0a00000c 	beq	252bd4 <TextensionStart__10TextensionSFv+0xa4>
        252ba0:	e3a00000 	mov	r0, #0	; 0x0
        252ba4:	eb64e27d 	bl	1b8b5a0 <TXRegisteredObjects::$__ct(void)>
        252ba8:	e59f1040 	ldr	r1, [pc, #40]	; 252bf0 <TextensionStart__10TextensionSFv+0xc0>	; fField40
        252bac:	e5810000 	str	r0, [r1]
        252bb0:	e3300000 	teq	r0, #0	; 0x0
        252bb4:	0a000006 	beq	252bd4 <TextensionStart__10TextensionSFv+0xa4>
        252bb8:	e3a00c01 	mov	r0, #256	; 0x100
        252bbc:	eb65eedd 	bl	1bce738 <$__nw(unsigned int)>
        252bc0:	e59f102c 	ldr	r1, [pc, #2c]	; 252bf4 <TextensionStart__10TextensionSFv+0xc4>
        252bc4:	e5810000 	str	r0, [r1]
        252bc8:	e3300000 	teq	r0, #0	; 0x0
        252bcc:	11a00005 	movne	r0, r5
        252bd0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        252bd4:	e1a00004 	mov	r0, r4
        252bd8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        252bdc:	0c104d74 	ldceq	13, cr4, [r0], -#464
        252be0:	0c104d7c 	ldceq	13, cr4, [r0], -#496
        252be4:	0001d360 	andeq	sp, r1, r0, ror #6
        252be8:	0c104d78 	ldceq	13, cr4, [r0], -#480
        252bec:	0c104d80 	ldceq	13, cr4, [r0], -#512
        252bf0:	0c104d84 	ldceq	13, cr4, [r0], -#528
        252bf4:	0c104d70 	ldceq	13, cr4, [r0], -#448
    */
}

/**
 * Symbol: Textension::SetCharsHandler(TXChars *)
 * Address: 00252bf8
 */
Textension::SetCharsHandler(TXChars *) {
    /*
        252bf8:	e1a0c00d 	mov	ip, sp
        252bfc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        252c00:	e24cb004 	sub	fp, ip, #4	; 0x4
        252c04:	e1a04000 	mov	r4, r0
        252c08:	e1a05001 	mov	r5, r1
        252c0c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        252c10:	e3300000 	teq	r0, #0	; 0x0
        252c14:	0a000002 	beq	252c24 <Textension::SetCharsHandler(TXChars *)+0x2c>
        252c18:	e3a01001 	mov	r1, #1	; 0x1
        252c1c:	e1a0e00f 	mov	lr, pc
        252c20:	e590f000 	ldr	pc, [r0]
        252c24:	e5845008 	str	r5, [r4, #8]	; fField8
        252c28:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        252c2c:	e5a05020 	str	r5, [r0, #32]!	; fField32
        252c30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::DisplayChanged(TXDisplayChanges const &)
 * Address: 00252c34
 */
Textension::DisplayChanged(TXDisplayChanges const &) {
    /*
        252c34:	e1a0c00d 	mov	ip, sp
        252c38:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        252c3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        252c40:	e1a04000 	mov	r4, r0
        252c44:	e1a05001 	mov	r5, r1
        252c48:	e5916000 	ldr	r6, [r1]
        252c4c:	e3360000 	teq	r6, #0	; 0x0
        252c50:	03a00000 	moveq	r0, #0	; 0x0
        252c54:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        252c58:	e3160001 	tst	r6, #1	; 0x1
        252c5c:	0a000006 	beq	252c7c <Textension::DisplayChanged(TXDisplayChanges const &)+0x48>
        252c60:	e1a00004 	mov	r0, r4
        252c64:	e3e03000 	mvn	r3, #0	; 0x0
        252c68:	e3a02000 	mov	r2, #0	; 0x0
        252c6c:	e3a01000 	mov	r1, #0	; 0x0
        252c70:	eb6534cb 	bl	1b9ffa4 <Textension::$Format(unsigned char, long, long)>
        252c74:	e3a00010 	mov	r0, #16	; 0x10
        252c78:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        252c7c:	e3160002 	tst	r6, #2	; 0x2
        252c80:	e5940010 	ldr	r0, [r4, #16]	; fField16
        252c84:	0a000006 	beq	252ca4 <Textension::DisplayChanged(TXDisplayChanges const &)+0x70>
        252c88:	eb64e65f 	bl	1b8c60c <TXDisplay::$InvalidDraw(void)>
        252c8c:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        252c90:	e5901000 	ldr	r1, [r0]
        252c94:	e1a0e00f 	mov	lr, pc
        252c98:	e281f028 	add	pc, r1, #40	; 0x28
        252c9c:	e3a00018 	mov	r0, #24	; 0x18
        252ca0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        252ca4:	eb64e658 	bl	1b8c60c <TXDisplay::$InvalidDraw(void)>
        252ca8:	e3160010 	tst	r6, #16	; 0x10
        252cac:	13a01001 	movne	r1, #1	; 0x1
        252cb0:	15940010 	ldrne	r0, [r4, #16]	; fField16
        252cb4:	1b64e249 	blne	1b8b5e0 <TXDisplay::$CheckScroll(unsigned char)>
        252cb8:	e3160004 	tst	r6, #4	; 0x4
        252cbc:	0a000027 	beq	252d60 <Textension::DisplayChanged(TXDisplayChanges const &)+0x12c>
        252cc0:	e24dd008 	sub	sp, sp, #8	; 0x8
        252cc4:	e1a0100d 	mov	r1, sp
        252cc8:	e1a00005 	mov	r0, r5
        252ccc:	eb64eea6 	bl	1b8e76c <TXDisplayChanges::$GetFormatRange( const(TXOffsetPair *))>
        252cd0:	e24dd018 	sub	sp, sp, #24	; 0x18
        252cd4:	e1a0100d 	mov	r1, sp
        252cd8:	e5942010 	ldr	r2, [r4, #16]	; fField16
        252cdc:	e1a00002 	mov	r0, r2
        252ce0:	e5922000 	ldr	r2, [r2]
        252ce4:	e1a0e00f 	mov	lr, pc
        252ce8:	e282f014 	add	pc, r2, #20	; 0x14
        252cec:	e2466004 	sub	r6, r6, #4	; 0x4
        252cf0:	e28d301c 	add	r3, sp, #28	; 0x1c
        252cf4:	e92d0008 	stmdb	sp!, {r3}
        252cf8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        252cfc:	e59d1020 	ldr	r1, [sp, #32]	; fField32
        252d00:	e5900014 	ldr	r0, [r0, #20]	; fField20
        252d04:	eb64cd81 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        252d08:	e1a05000 	mov	r5, r0
        252d0c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        252d10:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        252d14:	e5900014 	ldr	r0, [r0, #20]	; fField20
        252d18:	eb64cd7d 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        252d1c:	e1a01000 	mov	r1, r0
        252d20:	e28d301c 	add	r3, sp, #28	; 0x1c
        252d24:	e1a02005 	mov	r2, r5
        252d28:	e5940018 	ldr	r0, [r4, #24]	; fField24
        252d2c:	eb64ea5b 	bl	1b8d6a0 <TXFormatter::$Format(long, long, long *, long *)>
        252d30:	e28dd004 	add	sp, sp, #4	; 0x4
        252d34:	e3a03000 	mov	r3, #0	; 0x0
        252d38:	e92d0008 	stmdb	sp!, {r3}
        252d3c:	e28d301c 	add	r3, sp, #28	; 0x1c
        252d40:	e893000c 	ldmia	r3, {r2, r3}
        252d44:	e28d1004 	add	r1, sp, #4	; 0x4
        252d48:	e1a00004 	mov	r0, r4
        252d4c:	eb653495 	bl	1b9ffa8 <Textension::$EndEdit(TXEditInfo const &, long, long, TXOffset *)>
        252d50:	e59f0010 	ldr	r0, [pc, #10]	; 252d68 <Textension::DisplayChanged(TXDisplayChanges const &)+0x134>
        252d54:	e5900000 	ldr	r0, [r0]
        252d58:	e1806006 	orr	r6, r0, r6
        252d5c:	e28dd024 	add	sp, sp, #36	; 0x24
        252d60:	e1a00006 	mov	r0, r6
        252d64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        252d68:	0c104d90 	ldceq	13, cr4, [r0], -#576
    */
}

/**
 * Symbol: Textension::Format(unsigned char, long, long)
 * Address: 00252d6c
 */
Textension::Format(unsigned char, long, long) {
    /*
        252d6c:	e1a0c00d 	mov	ip, sp
        252d70:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        252d74:	e24cb004 	sub	fp, ip, #4	; 0x4
        252d78:	e1a04000 	mov	r4, r0
        252d7c:	e1a06002 	mov	r6, r2
        252d80:	e1b05003 	movs	r5, r3
        252d84:	e20170ff 	and	r7, r1, #255	; 0xff
        252d88:	5a000004 	bpl	252da0 <Textension::Format(unsigned char, long, long)+0x34>
        252d8c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        252d90:	e5901000 	ldr	r1, [r0]
        252d94:	e1a0e00f 	mov	lr, pc
        252d98:	e281f004 	add	pc, r1, #4	; 0x4
        252d9c:	e1a05000 	mov	r5, r0
        252da0:	e24dd018 	sub	sp, sp, #24	; 0x18
        252da4:	e3370000 	teq	r7, #0	; 0x0
        252da8:	1a000005 	bne	252dc4 <Textension::Format(unsigned char, long, long)+0x58>
        252dac:	e1a0100d 	mov	r1, sp
        252db0:	e5942010 	ldr	r2, [r4, #16]	; fField16
        252db4:	e1a00002 	mov	r0, r2
        252db8:	e5922000 	ldr	r2, [r2]
        252dbc:	e1a0e00f 	mov	lr, pc
        252dc0:	e282f014 	add	pc, r2, #20	; 0x14
        252dc4:	e24dd008 	sub	sp, sp, #8	; 0x8
        252dc8:	e1a0300d 	mov	r3, sp
        252dcc:	e92d0008 	stmdb	sp!, {r3}
        252dd0:	e0862005 	add	r2, r6, r5
        252dd4:	e28d3008 	add	r3, sp, #8	; 0x8
        252dd8:	e1a01006 	mov	r1, r6
        252ddc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        252de0:	eb64ea2e 	bl	1b8d6a0 <TXFormatter::$Format(long, long, long *, long *)>
        252de4:	e28dd004 	add	sp, sp, #4	; 0x4
        252de8:	e1a05000 	mov	r5, r0
        252dec:	e3370000 	teq	r7, #0	; 0x0
        252df0:	1a00000a 	bne	252e20 <Textension::Format(unsigned char, long, long)+0xb4>
        252df4:	e3350000 	teq	r5, #0	; 0x0
        252df8:	13a00000 	movne	r0, #0	; 0x0
        252dfc:	15cd0008 	strneb	r0, [sp, #8]	; fField8
        252e00:	e3a03000 	mov	r3, #0	; 0x0
        252e04:	e92d0008 	stmdb	sp!, {r3}
        252e08:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        252e0c:	e59d3004 	ldr	r3, [sp, #4]
        252e10:	e28d100c 	add	r1, sp, #12	; 0xc
        252e14:	e1a00004 	mov	r0, r4
        252e18:	eb653462 	bl	1b9ffa8 <Textension::$EndEdit(TXEditInfo const &, long, long, TXOffset *)>
        252e1c:	e28dd004 	add	sp, sp, #4	; 0x4
        252e20:	e1a00005 	mov	r0, r5
        252e24:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::EndEdit(TXEditInfo const &, long, long, TXOffset *)
 * Address: 00252e28
 */
Textension::EndEdit(TXEditInfo const &, long, long, TXOffset *) {
    /*
        252e28:	e1a0c00d 	mov	ip, sp
        252e2c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        252e30:	e24cb004 	sub	fp, ip, #4	; 0x4
        252e34:	e1a0e003 	mov	lr, r3
        252e38:	e59b3004 	ldr	r3, [fp, #4]
        252e3c:	e5b0c010 	ldr	ip, [r0, #16]!	; fField16
        252e40:	e92d0008 	stmdb	sp!, {r3}
        252e44:	e1a0300e 	mov	r3, lr
        252e48:	e1a0000c 	mov	r0, ip
        252e4c:	e59cc000 	ldr	ip, [ip]
        252e50:	e1a0e00f 	mov	lr, pc
        252e54:	e28cf018 	add	pc, ip, #24	; 0x18
        252e58:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: Textension::PointToWord(Point, TXOffsetRange *, unsigned char *, unsigned char *)
 * Address: 00252e5c
 */
Textension::PointToWord(Point, TXOffsetRange *, unsigned char *, unsigned char *) {
    /*
        252e5c:	e1a0c00d 	mov	ip, sp
        252e60:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        252e64:	e24cb004 	sub	fp, ip, #4	; 0x4
        252e68:	e1a05000 	mov	r5, r0
        252e6c:	e1a04002 	mov	r4, r2
        252e70:	e1a02003 	mov	r2, r3
        252e74:	e59b3004 	ldr	r3, [fp, #4]
        252e78:	e92d0008 	stmdb	sp!, {r3}
        252e7c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        252e80:	e1a03002 	mov	r3, r2
        252e84:	e1a02004 	mov	r2, r4
        252e88:	eb64e5ea 	bl	1b8c638 <TXDisplay::$PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)>
        252e8c:	e28dd004 	add	sp, sp, #4	; 0x4
        252e90:	e5940000 	ldr	r0, [r4]
        252e94:	e1b01000 	movs	r1, r0
        252e98:	491ba830 	ldmmidb	fp, {r4, r5, fp, sp, pc}
        252e9c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        252ea0:	e1300001 	teq	r0, r1
        252ea4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        252ea8:	e3a00000 	mov	r0, #0	; 0x0
        252eac:	e5c40004 	strb	r0, [r4, #4]
        252eb0:	e3a03000 	mov	r3, #0	; 0x0
        252eb4:	e92d0008 	stmdb	sp!, {r3}
        252eb8:	e1a03004 	mov	r3, r4
        252ebc:	e1a00005 	mov	r0, r5
        252ec0:	e5b42004 	ldr	r2, [r4, #4]!
        252ec4:	eb651f97 	bl	1b9ad28 <TXStyledText::$CharToWord(TXOffset, TXOffsetRange *, char)>
        252ec8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::CharToLine( const(TXOffset, TXOffsetRange *))
 * Address: 00252ecc
 */
Textension::CharToLine( const(TXOffset, TXOffsetRange *)) {
    /*
        252ecc:	e1a0c00d 	mov	ip, sp
        252ed0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        252ed4:	e24cb004 	sub	fp, ip, #4	; 0x4
        252ed8:	e1a05000 	mov	r5, r0
        252edc:	e1a04003 	mov	r4, r3
        252ee0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        252ee4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        252ee8:	eb64cd10 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        252eec:	e1a06000 	mov	r6, r0
        252ef0:	e3340000 	teq	r4, #0	; 0x0
        252ef4:	0a000003 	beq	252f08 <Textension::CharToLine( const(TXOffset, TXOffsetRange *))+0x3c>
        252ef8:	e1a02004 	mov	r2, r4
        252efc:	e1a01006 	mov	r1, r6
        252f00:	e5b50018 	ldr	r0, [r5, #24]!	; fField24
        252f04:	eb64e5d7 	bl	1b8c668 <TXFormatter::$GetLineRange( const(long, TXOffsetRange *))>
        252f08:	e1a00006 	mov	r0, r6
        252f0c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::GetRangeBounds(TXOffsetRange const &, TXLongRect *)
 * Address: 00252f10
 */
Textension::GetRangeBounds(TXOffsetRange const &, TXLongRect *) {
    /*
        252f10:	e1a0c00d 	mov	ip, sp
        252f14:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        252f18:	e24cb004 	sub	fp, ip, #4	; 0x4
        252f1c:	e1a05000 	mov	r5, r0
        252f20:	e1a06001 	mov	r6, r1
        252f24:	e1a04002 	mov	r4, r2
        252f28:	e3a03000 	mov	r3, #0	; 0x0
        252f2c:	e5911000 	ldr	r1, [r1]
        252f30:	e5962004 	ldr	r2, [r6, #4]
        252f34:	eb65341d 	bl	1b9ffb0 <Textension::$CharToLine( const(TXOffset, TXOffsetRange *))>
        252f38:	e1a07000 	mov	r7, r0
        252f3c:	e5950010 	ldr	r0, [r5, #16]	; fField16
        252f40:	e5900008 	ldr	r0, [r0, #8]	; fField8
        252f44:	e1a02004 	mov	r2, r4
        252f48:	e1a01007 	mov	r1, r7
        252f4c:	eb64f216 	bl	1b8f7ac <TXFrames::$GetLineBounds( const(long, TXLongRect *))>
        252f50:	e24dd008 	sub	sp, sp, #8	; 0x8
        252f54:	e3a03000 	mov	r3, #0	; 0x0
        252f58:	e1a0200d 	mov	r2, sp
        252f5c:	e92d000c 	stmdb	sp!, {r2, r3}
        252f60:	e2866010 	add	r6, r6, #16	; 0x10
        252f64:	e936500a 	ldmdb	r6!, {r1, r3, ip, lr}
        252f68:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        252f6c:	e1a01007 	mov	r1, r7
        252f70:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
        252f74:	e8bd000c 	ldmia	sp!, {r2, r3}
        252f78:	eb64e5b2 	bl	1b8c648 <TXDisplay::$GetLineHilite(long, TXOffsetRange, TXLineHilite *, unsigned char)>
        252f7c:	e5940004 	ldr	r0, [r4, #4]
        252f80:	e5bd1010 	ldr	r1, [sp, #16]!	; fField16
        252f84:	e2811902 	add	r1, r1, #32768	; 0x8000
        252f88:	e1a01841 	mov	r1, r1, asr #16
        252f8c:	e1a01801 	mov	r1, r1, lsl #16
        252f90:	e0800841 	add	r0, r0, r1, asr #16
        252f94:	e5840004 	str	r0, [r4, #4]
        252f98:	e59d1004 	ldr	r1, [sp, #4]
        252f9c:	e2811902 	add	r1, r1, #32768	; 0x8000
        252fa0:	e1a01841 	mov	r1, r1, asr #16
        252fa4:	e1a01801 	mov	r1, r1, lsl #16
        252fa8:	e0800841 	add	r0, r0, r1, asr #16
        252fac:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        252fb0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::GetRangeBounds(TXOffsetRange const &, Rect *)
 * Address: 00252fb4
 */
Textension::GetRangeBounds(TXOffsetRange const &, Rect *) {
    /*
        252fb4:	e1a0c00d 	mov	ip, sp
        252fb8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        252fbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        252fc0:	e1a04000 	mov	r4, r0
        252fc4:	e1a05002 	mov	r5, r2
        252fc8:	e24dd010 	sub	sp, sp, #16	; 0x10
        252fcc:	e1a0200d 	mov	r2, sp
        252fd0:	eb6533f7 	bl	1b9ffb4 <Textension::$GetRangeBounds(TXOffsetRange const &, TXLongRect *)>
        252fd4:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        252fd8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        252fdc:	e1a02005 	mov	r2, r5
        252fe0:	e1a0100d 	mov	r1, sp
        252fe4:	ebff9bf8 	bl	239fcc <TXFrames::AbsToDraw( const(TXLongRect const &, Rect *))>
        252fe8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *)
 * Address: 00252fec
 */
Textension::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *) {
    /*
        252fec:	e1a0c00d 	mov	ip, sp
        252ff0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        252ff4:	e24cb004 	sub	fp, ip, #4	; 0x4
        252ff8:	e1a04000 	mov	r4, r0
        252ffc:	e1a07001 	mov	r7, r1
        253000:	e1a06002 	mov	r6, r2
        253004:	e1a05003 	mov	r5, r3
        253008:	e59b8008 	ldr	r8, [fp, #8]	; fField8
        25300c:	e59b9004 	ldr	r9, [fp, #4]
        253010:	e24dd010 	sub	sp, sp, #16	; 0x10
        253014:	e5900014 	ldr	r0, [r0, #20]	; fField20
        253018:	e1a0100d 	mov	r1, sp
        25301c:	eb64f616 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        253020:	e1a03008 	mov	r3, r8
        253024:	e1a02009 	mov	r2, r9
        253028:	e594c014 	ldr	ip, [r4, #20]	; fField20
        25302c:	e92d000c 	stmdb	sp!, {r2, r3}
        253030:	e1a03005 	mov	r3, r5
        253034:	e1a02006 	mov	r2, r6
        253038:	e1a01007 	mov	r1, r7
        25303c:	e1a0000c 	mov	r0, ip
        253040:	e1a0e00f 	mov	lr, pc
        253044:	e59cf000 	ldr	pc, [ip]
        253048:	e28dd008 	add	sp, sp, #8	; 0x8
        25304c:	e3300000 	teq	r0, #0	; 0x0
        253050:	0a00000a 	beq	253080 <Textension::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *)+0x94>
        253054:	e24dd010 	sub	sp, sp, #16	; 0x10
        253058:	e1a0100d 	mov	r1, sp
        25305c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        253060:	eb64f605 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        253064:	e28d1010 	add	r1, sp, #16	; 0x10
        253068:	e1a0000d 	mov	r0, sp
        25306c:	ebff83d7 	bl	233fd0 <TXOffset::operator==( const(TXOffset const &))>
        253070:	e3300000 	teq	r0, #0	; 0x0
        253074:	03a00001 	moveq	r0, #1	; 0x1
        253078:	05c40028 	streqb	r0, [r4, #40]	; fField40
        25307c:	e28dd010 	add	sp, sp, #16	; 0x10
        253080:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: RegisterRun__10TextensionSFP5TXRun
 * Address: 00253084
 */
void Textension::RegisterRun() {
    /*
        253084:	e1a01000 	mov	r1, r0
        253088:	e59f0004 	ldr	r0, [pc, #4]	; 253094 <RegisterRun__10TextensionSFP5TXRun+0x10>
        25308c:	e5900000 	ldr	r0, [r0]
        253090:	ea64e144 	b	1b8b5a8 <TXRegisteredObjects::$Add(TXAttrObject *)>
        253094:	0c104d80 	ldceq	13, cr4, [r0], -#512
    */
}

/**
 * Symbol: Textension::IsRangeGraphicsRun(TXOffsetRange const *)
 * Address: 00253098
 */
Textension::IsRangeGraphicsRun(TXOffsetRange const *) {
    /*
        253098:	e1a0c00d 	mov	ip, sp
        25309c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2530a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2530a4:	e1a04000 	mov	r4, r0
        2530a8:	e24dd010 	sub	sp, sp, #16	; 0x10
        2530ac:	e3310000 	teq	r1, #0	; 0x0
        2530b0:	1a000003 	bne	2530c4 <Textension::IsRangeGraphicsRun(TXOffsetRange const *)+0x2c>
        2530b4:	e1a0100d 	mov	r1, sp
        2530b8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2530bc:	eb64f5ee 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        2530c0:	e1a0100d 	mov	r1, sp
        2530c4:	e4910008 	ldr	r0, [r1], #8	; fField8
        2530c8:	e5912000 	ldr	r2, [r1]
        2530cc:	e0421000 	sub	r1, r2, r0
        2530d0:	e3a05000 	mov	r5, #0	; 0x0
        2530d4:	e3310001 	teq	r1, #1	; 0x1
        2530d8:	1a000010 	bne	253120 <Textension::IsRangeGraphicsRun(TXOffsetRange const *)+0x88>
        2530dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2530e0:	e5b4300c 	ldr	r3, [r4, #12]!	; fField12
        2530e4:	e58d0000 	str	r0, [sp]
        2530e8:	e5cd5004 	strb	r5, [sp, #4]
        2530ec:	e1a00003 	mov	r0, r3
        2530f0:	e89d0006 	ldmia	sp, {r1, r2}
        2530f4:	e5933000 	ldr	r3, [r3]
        2530f8:	e1a0e00f 	mov	lr, pc
        2530fc:	e283f00c 	add	pc, r3, #12	; 0xc
        253100:	e1a04000 	mov	r4, r0
        253104:	e5901000 	ldr	r1, [r0]
        253108:	e1a0e00f 	mov	lr, pc
        25310c:	e281f054 	add	pc, r1, #84	; 0x54
        253110:	e3300000 	teq	r0, #0	; 0x0
        253114:	01a00004 	moveq	r0, r4
        253118:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        25311c:	e28dd008 	add	sp, sp, #8	; 0x8
        253120:	e1a00005 	mov	r0, r5
        253124:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::GetHiliteRangeRuns(TXOffsetRange *)
 * Address: 00253128
 */
Textension::GetHiliteRangeRuns(TXOffsetRange *) {
    /*
        253128:	e1a0c00d 	mov	ip, sp
        25312c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        253130:	e24cb004 	sub	fp, ip, #4	; 0x4
        253134:	e5b0500c 	ldr	r5, [r0, #12]!	; fField12
        253138:	e3a00018 	mov	r0, #24	; 0x18
        25313c:	e5916000 	ldr	r6, [r1]
        253140:	eb65ed7c 	bl	1bce738 <$__nw(unsigned int)>
        253144:	e1b04000 	movs	r4, r0
        253148:	0a000003 	beq	25315c <Textension::GetHiliteRangeRuns(TXOffsetRange *)+0x34>
        25314c:	e1a02006 	mov	r2, r6
        253150:	e1a01005 	mov	r1, r5
        253154:	e1a00004 	mov	r0, r4
        253158:	eb650644 	bl	1b94a70 <TXObjectIterator::$__ct(TXObjectRange const *, long)>
        25315c:	e1a00004 	mov	r0, r4
        253160:	e594100c 	ldr	r1, [r4, #12]	; fField12
        253164:	e3310000 	teq	r1, #0	; 0x0
        253168:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        25316c:	eb65e95b 	bl	1bcd6e0 <$__dl(void *)>
        253170:	e3a00000 	mov	r0, #0	; 0x0
        253174:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::UpdatePendingRun(void)
 * Address: 00253178
 */
Textension::UpdatePendingRun(void) {
    /*
        253178:	e1a0c00d 	mov	ip, sp
        25317c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        253180:	e24cb004 	sub	fp, ip, #4	; 0x4
        253184:	e1a04000 	mov	r4, r0
        253188:	e5d00028 	ldrb	r0, [r0, #40]	; fField40
        25318c:	e3300000 	teq	r0, #0	; 0x0
        253190:	05b40024 	ldreq	r0, [r4, #36]!	; fField36
        253194:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        253198:	e24dd010 	sub	sp, sp, #16	; 0x10
        25319c:	e3a00000 	mov	r0, #0	; 0x0
        2531a0:	e5945024 	ldr	r5, [r4, #36]	; fField36
        2531a4:	e5c40028 	strb	r0, [r4, #40]	; fField40
        2531a8:	e1a0100d 	mov	r1, sp
        2531ac:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2531b0:	eb64f5b1 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        2531b4:	e89d0006 	ldmia	sp, {r1, r2}
        2531b8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2531bc:	eb651ac2 	bl	1b99ccc <TXRunRange::$CharToTextRun( const(TXOffset))>
        2531c0:	e1b01000 	movs	r1, r0
        2531c4:	0a000004 	beq	2531dc <Textension::UpdatePendingRun(void)+0x64>
        2531c8:	e1a00005 	mov	r0, r5
        2531cc:	e5952000 	ldr	r2, [r5]
        2531d0:	e1a0e00f 	mov	lr, pc
        2531d4:	e282f028 	add	pc, r2, #40	; 0x28
        2531d8:	ea00000c 	b	253210 <Textension::UpdatePendingRun(void)+0x98>
        2531dc:	e1a00005 	mov	r0, r5
        2531e0:	e5951000 	ldr	r1, [r5]
        2531e4:	e1a0e00f 	mov	lr, pc
        2531e8:	e281f004 	add	pc, r1, #4	; 0x4
        2531ec:	eb653365 	bl	1b9ff88 <$GetNewRunObject__10TextensionSFv>
        2531f0:	e1a05000 	mov	r5, r0
        2531f4:	e5a40024 	str	r0, [r4, #36]!	; fField36
        2531f8:	e59f0018 	ldr	r0, [pc, #18]	; 253218 <Textension::UpdatePendingRun(void)+0xa0>
        2531fc:	e5901000 	ldr	r1, [r0]
        253200:	e3310000 	teq	r1, #0	; 0x0
        253204:	11a00005 	movne	r0, r5
        253208:	13a02000 	movne	r2, #0	; 0x0
        25320c:	1b64cc53 	blne	1b86360 <TXAttrObject::$Update(TXAttrValues const *, long)>
        253210:	e1a00005 	mov	r0, r5
        253214:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        253218:	0c104ed8 	ldceq	14, cr4, [r0], -#864
    */
}

/**
 * Symbol: Textension::ReplaceRange(long, long, TXReplaceParams *)
 * Address: 0025321c
 */
Textension::ReplaceRange(long, long, TXReplaceParams *) {
    /*
        25321c:	e1a0c00d 	mov	ip, sp
        253220:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        253224:	e24cb004 	sub	fp, ip, #4	; 0x4
        253228:	e1a04000 	mov	r4, r0
        25322c:	e1a06001 	mov	r6, r1
        253230:	e1a07002 	mov	r7, r2
        253234:	e1a05003 	mov	r5, r3
        253238:	e24dd028 	sub	sp, sp, #40	; 0x28
        25323c:	e0429001 	sub	r9, r2, r1
        253240:	e1a0100d 	mov	r1, sp
        253244:	e5902010 	ldr	r2, [r0, #16]	; fField16
        253248:	e1a00002 	mov	r0, r2
        25324c:	e5922000 	ldr	r2, [r2]
        253250:	e1a0e00f 	mov	lr, pc
        253254:	e282f014 	add	pc, r2, #20	; 0x14
        253258:	e24dd014 	sub	sp, sp, #20	; 0x14
        25325c:	e28d3010 	add	r3, sp, #16	; 0x10
        253260:	e1a02007 	mov	r2, r7
        253264:	e1a01006 	mov	r1, r6
        253268:	e5940020 	ldr	r0, [r4, #32]	; fField32
        25326c:	eb65124d 	bl	1b97ba8 <TXRulerRange::$GetReplaceExtraChars(long, long, TXAttrObject **)>
        253270:	e1a08000 	mov	r8, r0
        253274:	e1a0000d 	mov	r0, sp
        253278:	e3a01007 	mov	r1, #7	; 0x7
        25327c:	eb64dca7 	bl	1b8a520 <TXContainerImportInfo::$__ct(unsigned char)>
        253280:	e5950014 	ldr	r0, [r5, #20]	; fField20
        253284:	e3300000 	teq	r0, #0	; 0x0
        253288:	0a000041 	beq	253394 <Textension::ReplaceRange(long, long, TXReplaceParams *)+0x178>
        25328c:	e5d50018 	ldrb	r0, [r5, #24]	; fField24
        253290:	e44d0038 	strb	r0, [sp], -#56
        253294:	e5941020 	ldr	r1, [r4, #32]	; fField32
        253298:	e5942008 	ldr	r2, [r4, #8]	; fField8
        25329c:	e5943018 	ldr	r3, [r4, #24]	; fField24
        2532a0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2532a4:	e1a02009 	mov	r2, r9
        2532a8:	e1a01006 	mov	r1, r6
        2532ac:	e28d000c 	add	r0, sp, #12	; 0xc
        2532b0:	e594300c 	ldr	r3, [r4, #12]	; fField12
        2532b4:	eb64dcae 	bl	1b8a574 <TXPrivateContainer::$__ct(long, long, TXObjectRange *, TXObjectRange *, TXChars *, TXFormatter *)>
        2532b8:	e28dd00c 	add	sp, sp, #12	; 0xc
        2532bc:	e28d2038 	add	r2, sp, #56	; 0x38
        2532c0:	e1a0000d 	mov	r0, sp
        2532c4:	e5951014 	ldr	r1, [r5, #20]	; fField20
        2532c8:	eb64dc96 	bl	1b8a528 <TXContainer::$Import(TXContainer *, TXContainerImportInfo *)>
        2532cc:	e1b0a000 	movs	sl, r0
        2532d0:	128dd038 	addne	sp, sp, #56	; 0x38
        2532d4:	1a00008a 	bne	253504 <Textension::ReplaceRange(long, long, TXReplaceParams *)+0x2e8>
        2532d8:	e5dd0038 	ldrb	r0, [sp, #56]
        2532dc:	e3300007 	teq	r0, #7	; 0x7
        2532e0:	1a000005 	bne	2532fc <Textension::ReplaceRange(long, long, TXReplaceParams *)+0xe0>
        2532e4:	e59d203c 	ldr	r2, [sp, #60]
        2532e8:	e1a01006 	mov	r1, r6
        2532ec:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2532f0:	eb65122a 	bl	1b97ba0 <TXRulerRange::$ValidateRulerRange(long, long)>
        2532f4:	e1a08000 	mov	r8, r0
        2532f8:	ea00001d 	b	253374 <Textension::ReplaceRange(long, long, TXReplaceParams *)+0x158>
        2532fc:	e5dd0038 	ldrb	r0, [sp, #56]
        253300:	e3300002 	teq	r0, #2	; 0x2
        253304:	15dd0038 	ldrneb	r0, [sp, #56]
        253308:	13300004 	teqne	r0, #4	; 0x4
        25330c:	15dd0038 	ldrneb	r0, [sp, #56]
        253310:	13300006 	teqne	r0, #6	; 0x6
        253314:	1a000016 	bne	253374 <Textension::ReplaceRange(long, long, TXReplaceParams *)+0x158>
        253318:	e28d306c 	add	r3, sp, #108	; 0x6c
        25331c:	e92d0008 	stmdb	sp!, {r3}
        253320:	e28d3074 	add	r3, sp, #116	; 0x74
        253324:	e1a02007 	mov	r2, r7
        253328:	e1a01006 	mov	r1, r6
        25332c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        253330:	eb64e8da 	bl	1b8d6a0 <TXFormatter::$Format(long, long, long *, long *)>
        253334:	e28dd004 	add	sp, sp, #4	; 0x4
        253338:	e1a05000 	mov	r5, r0
        25333c:	e3a03000 	mov	r3, #0	; 0x0
        253340:	e92d0008 	stmdb	sp!, {r3}
        253344:	e59d2074 	ldr	r2, [sp, #116]
        253348:	e59d3070 	ldr	r3, [sp, #112]
        25334c:	e28d1050 	add	r1, sp, #80	; 0x50
        253350:	e1a00004 	mov	r0, r4
        253354:	eb653313 	bl	1b9ffa8 <Textension::$EndEdit(TXEditInfo const &, long, long, TXOffset *)>
        253358:	e28dd004 	add	sp, sp, #4	; 0x4
        25335c:	e1a00004 	mov	r0, r4
        253360:	eb65331d 	bl	1b9ffdc <Textension::$Compact(void)>
        253364:	e3a00001 	mov	r0, #1	; 0x1
        253368:	e5c40028 	strb	r0, [r4, #40]	; fField40
        25336c:	e1a00005 	mov	r0, r5
        253370:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        253374:	e5fd0038 	ldrb	r0, [sp, #56]!
        253378:	e3300000 	teq	r0, #0	; 0x0
        25337c:	15dd0000 	ldrneb	r0, [sp]
        253380:	13300003 	teqne	r0, #3	; 0x3
        253384:	15dd0000 	ldrneb	r0, [sp]
        253388:	13300001 	teqne	r0, #1	; 0x1
        25338c:	1a000037 	bne	253470 <Textension::ReplaceRange(long, long, TXReplaceParams *)+0x254>
        253390:	ea000003 	b	2533a4 <Textension::ReplaceRange(long, long, TXReplaceParams *)+0x188>
        253394:	e3a00000 	mov	r0, #0	; 0x0
        253398:	e5cd0000 	strb	r0, [sp]
        25339c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        2533a0:	e58d0004 	str	r0, [sp, #4]
        2533a4:	e3a03001 	mov	r3, #1	; 0x1
        2533a8:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        2533ac:	e92d000c 	stmdb	sp!, {r2, r3}
        2533b0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2533b4:	e0803008 	add	r3, r0, r8
        2533b8:	e0892008 	add	r2, r9, r8
        2533bc:	e1a01006 	mov	r1, r6
        2533c0:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2533c4:	eb6505a6 	bl	1b94a64 <TXObjectRange::$ReplaceRange(long, long, long, TXAttrObject *, unsigned char)>
        2533c8:	e5fd0008 	ldrb	r0, [sp, #8]!	; fField8
        2533cc:	e3300003 	teq	r0, #3	; 0x3
        2533d0:	0a000026 	beq	253470 <Textension::ReplaceRange(long, long, TXReplaceParams *)+0x254>
        2533d4:	e595001c 	ldr	r0, [r5, #28]	; fField28
        2533d8:	e3300000 	teq	r0, #0	; 0x0
        2533dc:	1a00000b 	bne	253410 <Textension::ReplaceRange(long, long, TXReplaceParams *)+0x1f4>
        2533e0:	e3a00000 	mov	r0, #0	; 0x0
        2533e4:	e52d6008 	str	r6, [sp, -#8]!	; fField8
        2533e8:	e5cd0004 	strb	r0, [sp, #4]
        2533ec:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2533f0:	e89d0006 	ldmia	sp, {r1, r2}
        2533f4:	eb651a34 	bl	1b99ccc <TXRunRange::$CharToTextRun( const(TXOffset))>
        2533f8:	e3300000 	teq	r0, #0	; 0x0
        2533fc:	01a00004 	moveq	r0, r4
        253400:	0b6532f0 	bleq	1b9ffc8 <Textension::$UpdatePendingRun(void)>
        253404:	e3a03001 	mov	r3, #1	; 0x1
        253408:	e28dd008 	add	sp, sp, #8	; 0x8
        25340c:	ea000003 	b	253420 <Textension::ReplaceRange(long, long, TXReplaceParams *)+0x204>
        253410:	e5951020 	ldr	r1, [r5, #32]	; fField32
        253414:	e2111008 	ands	r1, r1, #8	; 0x8
        253418:	13a01001 	movne	r1, #1	; 0x1
        25341c:	e20130ff 	and	r3, r1, #255	; 0xff
        253420:	e1a02000 	mov	r2, r0
        253424:	e92d000c 	stmdb	sp!, {r2, r3}
        253428:	e59d300c 	ldr	r3, [sp, #12]	; fField12
        25342c:	e1a02009 	mov	r2, r9
        253430:	e1a01006 	mov	r1, r6
        253434:	e594000c 	ldr	r0, [r4, #12]	; fField12
        253438:	eb650589 	bl	1b94a64 <TXObjectRange::$ReplaceRange(long, long, long, TXAttrObject *, unsigned char)>
        25343c:	e5fd0008 	ldrb	r0, [sp, #8]!	; fField8
        253440:	e3300000 	teq	r0, #0	; 0x0
        253444:	1a000009 	bne	253470 <Textension::ReplaceRange(long, long, TXReplaceParams *)+0x254>
        253448:	e1a03005 	mov	r3, r5
        25344c:	e1a02009 	mov	r2, r9
        253450:	e1a01006 	mov	r1, r6
        253454:	e594c008 	ldr	ip, [r4, #8]	; fField8
        253458:	e1a0000c 	mov	r0, ip
        25345c:	e59cc000 	ldr	ip, [ip]
        253460:	e1a0e00f 	mov	lr, pc
        253464:	e28cf008 	add	pc, ip, #8	; 0x8
        253468:	e1b0a000 	movs	sl, r0
        25346c:	1a000024 	bne	253504 <Textension::ReplaceRange(long, long, TXReplaceParams *)+0x2e8>
        253470:	e28d3034 	add	r3, sp, #52	; 0x34
        253474:	e28d2038 	add	r2, sp, #56	; 0x38
        253478:	e5951020 	ldr	r1, [r5, #32]	; fField32
        25347c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        253480:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        253484:	e0803008 	add	r3, r0, r8
        253488:	e0892008 	add	r2, r9, r8
        25348c:	e1a01006 	mov	r1, r6
        253490:	e5940018 	ldr	r0, [r4, #24]	; fField24
        253494:	eb64e883 	bl	1b8d6a8 <TXFormatter::$ReplaceRange(long, long, long, unsigned long, long *, long *)>
        253498:	e28dd00c 	add	sp, sp, #12	; 0xc
        25349c:	e1a07000 	mov	r7, r0
        2534a0:	e59d0004 	ldr	r0, [sp, #4]
        2534a4:	e0800006 	add	r0, r0, r6
        2534a8:	e5951020 	ldr	r1, [r5, #32]	; fField32
        2534ac:	e2111001 	ands	r1, r1, #1	; 0x1
        2534b0:	13a01001 	movne	r1, #1	; 0x1
        2534b4:	e58d002c 	str	r0, [sp, #44]
        2534b8:	e5cd1030 	strb	r1, [sp, #48]
        2534bc:	e28d302c 	add	r3, sp, #44	; 0x2c
        2534c0:	e92d0008 	stmdb	sp!, {r3}
        2534c4:	e59d203c 	ldr	r2, [sp, #60]
        2534c8:	e59d3038 	ldr	r3, [sp, #56]
        2534cc:	e28d1018 	add	r1, sp, #24	; 0x18
        2534d0:	e1a00004 	mov	r0, r4
        2534d4:	eb6532b3 	bl	1b9ffa8 <Textension::$EndEdit(TXEditInfo const &, long, long, TXOffset *)>
        2534d8:	e28dd004 	add	sp, sp, #4	; 0x4
        2534dc:	e5950014 	ldr	r0, [r5, #20]	; fField20
        2534e0:	e3300000 	teq	r0, #0	; 0x0
        2534e4:	11a00004 	movne	r0, r4
        2534e8:	1b6532bb 	blne	1b9ffdc <Textension::$Compact(void)>
        2534ec:	e5b50020 	ldr	r0, [r5, #32]!	; fField32
        2534f0:	e3100002 	tst	r0, #2	; 0x2
        2534f4:	13a00001 	movne	r0, #1	; 0x1
        2534f8:	15c40028 	strneb	r0, [r4, #40]	; fField40
        2534fc:	e1a00007 	mov	r0, r7
        253500:	ea000009 	b	25352c <Textension::ReplaceRange(long, long, TXReplaceParams *)+0x310>
        253504:	e3a00000 	mov	r0, #0	; 0x0
        253508:	e5cd0014 	strb	r0, [sp, #20]	; fField20
        25350c:	e3a03000 	mov	r3, #0	; 0x0
        253510:	e92d0008 	stmdb	sp!, {r3}
        253514:	e28d1018 	add	r1, sp, #24	; 0x18
        253518:	e1a00004 	mov	r0, r4
        25351c:	e3a02000 	mov	r2, #0	; 0x0
        253520:	eb6532a0 	bl	1b9ffa8 <Textension::$EndEdit(TXEditInfo const &, long, long, TXOffset *)>
        253524:	e28dd004 	add	sp, sp, #4	; 0x4
        253528:	e1a0000a 	mov	r0, sl
        25352c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::ClearKeyDown(unsigned short, TXOffsetRange *)
 * Address: 00253530
 */
Textension::ClearKeyDown(unsigned short, TXOffsetRange *) {
    /*
        253530:	e1a0c00d 	mov	ip, sp
        253534:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        253538:	e24cb004 	sub	fp, ip, #4	; 0x4
        25353c:	e1a05000 	mov	r5, r0
        253540:	e1a04002 	mov	r4, r2
        253544:	e1a00801 	mov	r0, r1, lsl #16
        253548:	e1a00820 	mov	r0, r0, lsr #16
        25354c:	e5922008 	ldr	r2, [r2, #8]	; fField8
        253550:	e5941000 	ldr	r1, [r4]
        253554:	e0526001 	subs	r6, r2, r1
        253558:	1a00000a 	bne	253588 <Textension::ClearKeyDown(unsigned short, TXOffsetRange *)+0x58>
        25355c:	e3a07000 	mov	r7, #0	; 0x0
        253560:	e3300008 	teq	r0, #8	; 0x8
        253564:	1a000020 	bne	2535ec <Textension::ClearKeyDown(unsigned short, TXOffsetRange *)+0xbc>
        253568:	e1a00005 	mov	r0, r5
        25356c:	e3a02000 	mov	r2, #0	; 0x0
        253570:	eb651ded 	bl	1b9ad2c <TXStyledText::$AdvanceOffset(long, unsigned char)>
        253574:	e1b06000 	movs	r6, r0
        253578:	0a00001b 	beq	2535ec <Textension::ClearKeyDown(unsigned short, TXOffsetRange *)+0xbc>
        25357c:	e5940000 	ldr	r0, [r4]
        253580:	e0400006 	sub	r0, r0, r6
        253584:	e5840000 	str	r0, [r4]
        253588:	e24dd004 	sub	sp, sp, #4	; 0x4
        25358c:	e1a0200d 	mov	r2, sp
        253590:	e595000c 	ldr	r0, [r5, #12]	; fField12
        253594:	e5941000 	ldr	r1, [r4]
        253598:	eb650526 	bl	1b94a38 <TXObjectRange::$GetNextObjectRange( const(long, long *))>
        25359c:	e1a07000 	mov	r7, r0
        2535a0:	e59d0000 	ldr	r0, [sp]
        2535a4:	e1560000 	cmp	r6, r0
        2535a8:	b3a00000 	movlt	r0, #0	; 0x0
        2535ac:	a3a00001 	movge	r0, #1	; 0x1
        2535b0:	e5c40004 	strb	r0, [r4, #4]
        2535b4:	e1a00007 	mov	r0, r7
        2535b8:	e5971000 	ldr	r1, [r7]
        2535bc:	e1a0e00f 	mov	lr, pc
        2535c0:	e281f054 	add	pc, r1, #84	; 0x54
        2535c4:	e3300000 	teq	r0, #0	; 0x0
        2535c8:	0a000005 	beq	2535e4 <Textension::ClearKeyDown(unsigned short, TXOffsetRange *)+0xb4>
        2535cc:	e1a01007 	mov	r1, r7
        2535d0:	e5b52024 	ldr	r2, [r5, #36]!	; fField36
        2535d4:	e1a00002 	mov	r0, r2
        2535d8:	e5922000 	ldr	r2, [r2]
        2535dc:	e1a0e00f 	mov	lr, pc
        2535e0:	e282f028 	add	pc, r2, #40	; 0x28
        2535e4:	e1a00006 	mov	r0, r6
        2535e8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2535ec:	e1a00007 	mov	r0, r7
        2535f0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::GetKeyDownFlags(unsigned short)
 * Address: 002535f4
 */
Textension::GetKeyDownFlags(unsigned short) {
    /*
        2535f4:	e1a0c00d 	mov	ip, sp
        2535f8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2535fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        253600:	e1a04000 	mov	r4, r0
        253604:	e1a05801 	mov	r5, r1, lsl #16
        253608:	e1a05825 	mov	r5, r5, lsr #16
        25360c:	e355001f 	cmp	r5, #31	; 0x1f
        253610:	ca000020 	bgt	253698 <Textension::GetKeyDownFlags(unsigned short)+0xa4>
        253614:	e3350009 	teq	r5, #9	; 0x9
        253618:	11a00005 	movne	r0, r5
        25361c:	1335000a 	teqne	r5, #10	; 0xa
        253620:	1330000d 	teqne	r0, #13	; 0xd
        253624:	0a00001b 	beq	253698 <Textension::GetKeyDownFlags(unsigned short)+0xa4>
        253628:	e355001c 	cmp	r5, #28	; 0x1c
        25362c:	ba000002 	blt	25363c <Textension::GetKeyDownFlags(unsigned short)+0x48>
        253630:	e355001f 	cmp	r5, #31	; 0x1f
        253634:	d3a06009 	movle	r6, #9	; 0x9
        253638:	da000014 	ble	253690 <Textension::GetKeyDownFlags(unsigned short)+0x9c>
        25363c:	e3a06000 	mov	r6, #0	; 0x0
        253640:	e3350008 	teq	r5, #8	; 0x8
        253644:	1335001b 	teqne	r5, #27	; 0x1b
        253648:	1a000010 	bne	253690 <Textension::GetKeyDownFlags(unsigned short)+0x9c>
        25364c:	e24dd010 	sub	sp, sp, #16	; 0x10
        253650:	e1a0100d 	mov	r1, sp
        253654:	e5940014 	ldr	r0, [r4, #20]	; fField20
        253658:	eb64f487 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        25365c:	e59d0000 	ldr	r0, [sp]
        253660:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        253664:	e0510000 	subs	r0, r1, r0
        253668:	1a000005 	bne	253684 <Textension::GetKeyDownFlags(unsigned short)+0x90>
        25366c:	e3350008 	teq	r5, #8	; 0x8
        253670:	1a000005 	bne	25368c <Textension::GetKeyDownFlags(unsigned short)+0x98>
        253674:	e1a00004 	mov	r0, r4
        253678:	e3a02000 	mov	r2, #0	; 0x0
        25367c:	e59d1000 	ldr	r1, [sp]
        253680:	eb651da9 	bl	1b9ad2c <TXStyledText::$AdvanceOffset(long, unsigned char)>
        253684:	e3300000 	teq	r0, #0	; 0x0
        253688:	13a06013 	movne	r6, #19	; 0x13
        25368c:	e28dd010 	add	sp, sp, #16	; 0x10
        253690:	e3860004 	orr	r0, r6, #4	; 0x4
        253694:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        253698:	e3a00003 	mov	r0, #3	; 0x3
        25369c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::KeyDown(unsigned short const *, long, long, unsigned int)
 * Address: 002536a0
 */
Textension::KeyDown(unsigned short const *, long, long, unsigned int) {
    /*
        2536a0:	e1a0c00d 	mov	ip, sp
        2536a4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2536a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2536ac:	e1a04000 	mov	r4, r0
        2536b0:	e1a06001 	mov	r6, r1
        2536b4:	e1a05002 	mov	r5, r2
        2536b8:	e59b9004 	ldr	r9, [fp, #4]
        2536bc:	e3190001 	tst	r9, #1	; 0x1
        2536c0:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2536c4:	e3190008 	tst	r9, #8	; 0x8
        2536c8:	0a00000c 	beq	253700 <Textension::KeyDown(unsigned short const *, long, long, unsigned int)+0x60>
        2536cc:	e1a02003 	mov	r2, r3
        2536d0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2536d4:	e5961000 	ldr	r1, [r6]
        2536d8:	e1a01821 	mov	r1, r1, lsr #16
        2536dc:	eb64f460 	bl	1b90864 <TXHilite::$ArrowKey(unsigned char, long)>
        2536e0:	e59f0014 	ldr	r0, [pc, #14]	; 2536fc <Textension::KeyDown(unsigned short const *, long, long, unsigned int)+0x5c>
        2536e4:	e5901000 	ldr	r1, [r0]
        2536e8:	e3811040 	orr	r1, r1, #64	; 0x40
        2536ec:	e5801000 	str	r1, [r0]
        2536f0:	e3a00001 	mov	r0, #1	; 0x1
        2536f4:	e5c40028 	strb	r0, [r4, #40]	; fField40
        2536f8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2536fc:	0c104d90 	ldceq	13, cr4, [r0], -#576
        253700:	e24dd010 	sub	sp, sp, #16	; 0x10
        253704:	e1a0100d 	mov	r1, sp
        253708:	e5940014 	ldr	r0, [r4, #20]	; fField20
        25370c:	eb64f45a 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        253710:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        253714:	e59d1000 	ldr	r1, [sp]
        253718:	e0407001 	sub	r7, r0, r1
        25371c:	e3190010 	tst	r9, #16	; 0x10
        253720:	0a000014 	beq	253778 <Textension::KeyDown(unsigned short const *, long, long, unsigned int)+0xd8>
        253724:	e1a0200d 	mov	r2, sp
        253728:	e5961000 	ldr	r1, [r6]
        25372c:	e1a01821 	mov	r1, r1, lsr #16
        253730:	e1a00004 	mov	r0, r4
        253734:	eb653225 	bl	1b9ffd0 <Textension::$ClearKeyDown(unsigned short, TXOffsetRange *)>
        253738:	e3300000 	teq	r0, #0	; 0x0
        25373c:	1a000000 	bne	253744 <Textension::KeyDown(unsigned short const *, long, long, unsigned int)+0xa4>
        253740:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        253744:	e3a05000 	mov	r5, #0	; 0x0
        253748:	e3370000 	teq	r7, #0	; 0x0
        25374c:	0a000007 	beq	253770 <Textension::KeyDown(unsigned short const *, long, long, unsigned int)+0xd0>
        253750:	e5940018 	ldr	r0, [r4, #24]	; fField24
        253754:	e59d1000 	ldr	r1, [sp]
        253758:	e5900014 	ldr	r0, [r0, #20]	; fField20
        25375c:	e3e02000 	mvn	r2, #0	; 0x0
        253760:	eb64caf0 	bl	1b86328 <$IsRangeStart__8TXRangesCFlT1>
        253764:	e3300000 	teq	r0, #0	; 0x0
        253768:	13a08000 	movne	r8, #0	; 0x0
        25376c:	1a000003 	bne	253780 <Textension::KeyDown(unsigned short const *, long, long, unsigned int)+0xe0>
        253770:	e5dd8004 	ldrb	r8, [sp, #4]
        253774:	ea000001 	b	253780 <Textension::KeyDown(unsigned short const *, long, long, unsigned int)+0xe0>
        253778:	e1a00004 	mov	r0, r4
        25377c:	eb653211 	bl	1b9ffc8 <Textension::$UpdatePendingRun(void)>
        253780:	e24dd038 	sub	sp, sp, #56	; 0x38
        253784:	e1a02005 	mov	r2, r5
        253788:	e1a01006 	mov	r1, r6
        25378c:	e28d0024 	add	r0, sp, #36	; 0x24
        253790:	eb64d31c 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        253794:	e28d1024 	add	r1, sp, #36	; 0x24
        253798:	e1a0000d 	mov	r0, sp
        25379c:	e3a03001 	mov	r3, #1	; 0x1
        2537a0:	e5942024 	ldr	r2, [r4, #36]	; fField36
        2537a4:	eb653218 	bl	1ba000c <TXReplaceParams::$__ct(TXTextDescriptor const &, TXRun *, unsigned char)>
        2537a8:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        2537ac:	e3c00006 	bic	r0, r0, #6	; 0x6
        2537b0:	e3350000 	teq	r5, #0	; 0x0
        2537b4:	e58d0020 	str	r0, [sp, #32]	; fField32
        2537b8:	1a000004 	bne	2537d0 <Textension::KeyDown(unsigned short const *, long, long, unsigned int)+0x130>
        2537bc:	e3380000 	teq	r8, #0	; 0x0
        2537c0:	059d0020 	ldreq	r0, [sp, #32]	; fField32
        2537c4:	03c00001 	biceq	r0, r0, #1	; 0x1
        2537c8:	058d0020 	streq	r0, [sp, #32]	; fField32
        2537cc:	ea000003 	b	2537e0 <Textension::KeyDown(unsigned short const *, long, long, unsigned int)+0x140>
        2537d0:	e3370000 	teq	r7, #0	; 0x0
        2537d4:	128d1038 	addne	r1, sp, #56	; 0x38
        2537d8:	11a00004 	movne	r0, r4
        2537dc:	1b653201 	blne	1b9ffe8 <Textension::$GetHiliteRangeWithoutSpaces(TXOffsetRange *)>
        2537e0:	e59d1038 	ldr	r1, [sp, #56]
        2537e4:	e59d2040 	ldr	r2, [sp, #64]
        2537e8:	e1a0300d 	mov	r3, sp
        2537ec:	e1a00004 	mov	r0, r4
        2537f0:	eb6531f5 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        2537f4:	e28dd038 	add	sp, sp, #56	; 0x38
        2537f8:	eaffffd0 	b	253740 <Textension::KeyDown(unsigned short const *, long, long, unsigned int)+0xa0>
    */
}

/**
 * Symbol: Textension::Compact(void)
 * Address: 002537fc
 */
Textension::Compact(void) {
    /*
        2537fc:	e1a0c00d 	mov	ip, sp
        253800:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        253804:	e24cb004 	sub	fp, ip, #4	; 0x4
        253808:	e1a04000 	mov	r4, r0
        25380c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        253810:	e5901000 	ldr	r1, [r0]
        253814:	e1a0e00f 	mov	lr, pc
        253818:	e281f02c 	add	pc, r1, #44	; 0x2c
        25381c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        253820:	eb64e38d 	bl	1b8c65c <TXFormatter::$Compact(void)>
        253824:	e594000c 	ldr	r0, [r4, #12]	; fField12
        253828:	eb64c6b0 	bl	1b852f0 <TXArray::$Compact(void)>
        25382c:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        253830:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        253834:	ea64c6ad 	b	1b852f0 <TXArray::$Compact(void)>
    */
}

/**
 * Symbol: Textension::Activate(unsigned char, unsigned char)
 * Address: 00253838
 */
Textension::Activate(unsigned char, unsigned char) {
    /*
        253838:	e1a0c00d 	mov	ip, sp
        25383c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        253840:	e24cb004 	sub	fp, ip, #4	; 0x4
        253844:	e1a04000 	mov	r4, r0
        253848:	e20150ff 	and	r5, r1, #255	; 0xff
        25384c:	e20220ff 	and	r2, r2, #255	; 0xff
        253850:	e5900010 	ldr	r0, [r0, #16]	; fField16
        253854:	e1a01005 	mov	r1, r5
        253858:	eb64df62 	bl	1b8b5e8 <TXDisplay::$Activate(unsigned char, unsigned char)>
        25385c:	e3350000 	teq	r5, #0	; 0x0
        253860:	01a00004 	moveq	r0, r4
        253864:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        253868:	0a6531db 	beq	1b9ffdc <Textension::$Compact(void)>
        25386c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char)
 * Address: 00253870
 */
Textension::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char) {
    /*
        253870:	e1a0c00d 	mov	ip, sp
        253874:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        253878:	e24cb004 	sub	fp, ip, #4	; 0x4
        25387c:	e1a04000 	mov	r4, r0
        253880:	e20220ff 	and	r2, r2, #255	; 0xff
        253884:	e20330ff 	and	r3, r3, #255	; 0xff
        253888:	e590c014 	ldr	ip, [r0, #20]	; fField20
        25388c:	e1a0000c 	mov	r0, ip
        253890:	e59cc000 	ldr	ip, [ip]
        253894:	e1a0e00f 	mov	lr, pc
        253898:	e28cf008 	add	pc, ip, #8	; 0x8
        25389c:	e3300000 	teq	r0, #0	; 0x0
        2538a0:	13a00001 	movne	r0, #1	; 0x1
        2538a4:	15c40028 	strneb	r0, [r4, #40]	; fField40
        2538a8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: RegisterRuler__10TextensionSFP7TXRuler
 * Address: 002538ac
 */
void Textension::RegisterRuler() {
    /*
        2538ac:	e1a01000 	mov	r1, r0
        2538b0:	e59f0004 	ldr	r0, [pc, #4]	; 2538bc <RegisterRuler__10TextensionSFP7TXRuler+0x10>
        2538b4:	e5900000 	ldr	r0, [r0]
        2538b8:	ea64df3a 	b	1b8b5a8 <TXRegisteredObjects::$Add(TXAttrObject *)>
        2538bc:	0c104d84 	ldceq	13, cr4, [r0], -#528
    */
}

/**
 * Symbol: Textension::GetHiliteRangeWithoutSpaces(TXOffsetRange *)
 * Address: 002538c0
 */
Textension::GetHiliteRangeWithoutSpaces(TXOffsetRange *) {
    /*
        2538c0:	e1a0c00d 	mov	ip, sp
        2538c4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2538c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2538cc:	e1a05000 	mov	r5, r0
        2538d0:	e1a04001 	mov	r4, r1
        2538d4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2538d8:	eb64f3e7 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        2538dc:	e5950014 	ldr	r0, [r5, #20]	; fField20
        2538e0:	e5d0001b 	ldrb	r0, [r0, #27]
        2538e4:	e3300000 	teq	r0, #0	; 0x0
        2538e8:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2538ec:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2538f0:	e5941000 	ldr	r1, [r4]
        2538f4:	e0406001 	sub	r6, r0, r1
        2538f8:	e1a07000 	mov	r7, r0
        2538fc:	ea000001 	b	253908 <Textension::GetHiliteRangeWithoutSpaces(TXOffsetRange *)+0x48>
        253900:	e1a07008 	mov	r7, r8
        253904:	e2466001 	sub	r6, r6, #1	; 0x1
        253908:	e3360000 	teq	r6, #0	; 0x0
        25390c:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        253910:	e2471001 	sub	r1, r7, #1	; 0x1
        253914:	e1a08001 	mov	r8, r1
        253918:	e5952008 	ldr	r2, [r5, #8]	; fField8
        25391c:	e1a00002 	mov	r0, r2
        253920:	e5922000 	ldr	r2, [r2]
        253924:	e1a0e00f 	mov	lr, pc
        253928:	e282f01c 	add	pc, r2, #28	; 0x1c
        25392c:	e1a01000 	mov	r1, r0
        253930:	e1a00005 	mov	r0, r5
        253934:	eb651cfa 	bl	1b9ad24 <TXStyledText::$IsWordSpace( const(unsigned short))>
        253938:	e3300000 	teq	r0, #0	; 0x0
        25393c:	1affffef 	bne	253900 <Textension::GetHiliteRangeWithoutSpaces(TXOffsetRange *)+0x40>
        253940:	e3360000 	teq	r6, #0	; 0x0
        253944:	15a47008 	strne	r7, [r4, #8]!	; fField8
        253948:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::GetContinuousAttrValues(TXAttrValues *)
 * Address: 0025394c
 */
Textension::GetContinuousAttrValues(TXAttrValues *) {
    /*
        25394c:	e1a0c00d 	mov	ip, sp
        253950:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        253954:	e24cb004 	sub	fp, ip, #4	; 0x4
        253958:	e1a05000 	mov	r5, r0
        25395c:	e1a04001 	mov	r4, r1
        253960:	e24dd010 	sub	sp, sp, #16	; 0x10
        253964:	e1a0100d 	mov	r1, sp
        253968:	eb65319e 	bl	1b9ffe8 <Textension::$GetHiliteRangeWithoutSpaces(TXOffsetRange *)>
        25396c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        253970:	e59d1000 	ldr	r1, [sp]
        253974:	e0506001 	subs	r6, r0, r1
        253978:	1a000006 	bne	253998 <Textension::GetContinuousAttrValues(TXAttrValues *)+0x4c>
        25397c:	e1a00005 	mov	r0, r5
        253980:	eb653190 	bl	1b9ffc8 <Textension::$UpdatePendingRun(void)>
        253984:	e1a01004 	mov	r1, r4
        253988:	e5902000 	ldr	r2, [r0]
        25398c:	e1a0e00f 	mov	lr, pc
        253990:	e282f020 	add	pc, r2, #32	; 0x20
        253994:	ea000029 	b	253a40 <Textension::GetContinuousAttrValues(TXAttrValues *)+0xf4>
        253998:	e24dd018 	sub	sp, sp, #24	; 0x18
        25399c:	e595100c 	ldr	r1, [r5, #12]	; fField12
        2539a0:	e59d2018 	ldr	r2, [sp, #24]	; fField24
        2539a4:	e1a0000d 	mov	r0, sp
        2539a8:	eb650430 	bl	1b94a70 <TXObjectIterator::$__ct(TXObjectRange const *, long)>
        2539ac:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2539b0:	e3300000 	teq	r0, #0	; 0x0
        2539b4:	0a000020 	beq	253a3c <Textension::GetContinuousAttrValues(TXAttrValues *)+0xf0>
        2539b8:	e1a01004 	mov	r1, r4
        2539bc:	e5902000 	ldr	r2, [r0]
        2539c0:	e1a0e00f 	mov	lr, pc
        2539c4:	e282f020 	add	pc, r2, #32	; 0x20
        2539c8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2539cc:	e0466000 	sub	r6, r6, r0
        2539d0:	ea000014 	b	253a28 <Textension::GetContinuousAttrValues(TXAttrValues *)+0xdc>
        2539d4:	e1a0000d 	mov	r0, sp
        2539d8:	eb650426 	bl	1b94a78 <TXObjectIterator::$Next(void)>
        2539dc:	e24dd010 	sub	sp, sp, #16	; 0x10
        2539e0:	e3a03001 	mov	r3, #1	; 0x1
        2539e4:	e28d7014 	add	r7, sp, #20	; 0x14
        2539e8:	e8970082 	ldmia	r7, {r1, r7}
        2539ec:	e92d0008 	stmdb	sp!, {r3}
        2539f0:	e0812007 	add	r2, r1, r7
        2539f4:	e28d0004 	add	r0, sp, #4	; 0x4
        2539f8:	e3a03000 	mov	r3, #0	; 0x0
        2539fc:	ebff818e 	bl	23403c <TXOffsetRange::__ct(long, long, unsigned char, unsigned char)>
        253a00:	e28dd004 	add	sp, sp, #4	; 0x4
        253a04:	e1a0100d 	mov	r1, sp
        253a08:	e1a00005 	mov	r0, r5
        253a0c:	eb65316b 	bl	1b9ffc0 <Textension::$IsRangeGraphicsRun(TXOffsetRange const *)>
        253a10:	e3300000 	teq	r0, #0	; 0x0
        253a14:	01a01004 	moveq	r1, r4
        253a18:	059d001c 	ldreq	r0, [sp, #28]	; fField28
        253a1c:	0b64ca51 	bleq	1b86368 <TXAttrObject::$GetCommonAttrValues(TXAttrValues *)>
        253a20:	e0466007 	sub	r6, r6, r7
        253a24:	e28dd010 	add	sp, sp, #16	; 0x10
        253a28:	e3560000 	cmp	r6, #0	; 0x0
        253a2c:	da000002 	ble	253a3c <Textension::GetContinuousAttrValues(TXAttrValues *)+0xf0>
        253a30:	e5940004 	ldr	r0, [r4, #4]
        253a34:	e3300000 	teq	r0, #0	; 0x0
        253a38:	1affffe5 	bne	2539d4 <Textension::GetContinuousAttrValues(TXAttrValues *)+0x88>
        253a3c:	e28dd018 	add	sp, sp, #24	; 0x18
        253a40:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::UpdateFormatter(long, TXOffsetRange const &, long *, long *)
 * Address: 00253a44
 */
Textension::UpdateFormatter(long, TXOffsetRange const &, long *, long *) {
    /*
        253a44:	e1a0c00d 	mov	ip, sp
        253a48:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        253a4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        253a50:	e1a04000 	mov	r4, r0
        253a54:	e1a05003 	mov	r5, r3
        253a58:	e59b9004 	ldr	r9, [fp, #4]
        253a5c:	e3110003 	tst	r1, #3	; 0x3
        253a60:	e5926008 	ldr	r6, [r2, #8]	; fField8
        253a64:	e5927000 	ldr	r7, [r2]
        253a68:	0a000007 	beq	253a8c <Textension::UpdateFormatter(long, TXOffsetRange const &, long *, long *)+0x48>
        253a6c:	e1a03009 	mov	r3, r9
        253a70:	e92d0008 	stmdb	sp!, {r3}
        253a74:	e1a03005 	mov	r3, r5
        253a78:	e1a02006 	mov	r2, r6
        253a7c:	e1a01007 	mov	r1, r7
        253a80:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        253a84:	eb64e705 	bl	1b8d6a0 <TXFormatter::$Format(long, long, long *, long *)>
        253a88:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        253a8c:	e24dd008 	sub	sp, sp, #8	; 0x8
        253a90:	e3a08000 	mov	r8, #0	; 0x0
        253a94:	e5940018 	ldr	r0, [r4, #24]	; fField24
        253a98:	e58d7000 	str	r7, [sp]
        253a9c:	e5cd8004 	strb	r8, [sp, #4]
        253aa0:	e89d0006 	ldmia	sp, {r1, r2}
        253aa4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        253aa8:	eb64ca20 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        253aac:	e1370006 	teq	r7, r6
        253ab0:	e5850000 	str	r0, [r5]
        253ab4:	05890000 	streq	r0, [r9]
        253ab8:	0a000008 	beq	253ae0 <Textension::UpdateFormatter(long, TXOffsetRange const &, long *, long *)+0x9c>
        253abc:	e3a00001 	mov	r0, #1	; 0x1
        253ac0:	e52d6008 	str	r6, [sp, -#8]!	; fField8
        253ac4:	e5cd0004 	strb	r0, [sp, #4]
        253ac8:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        253acc:	e89d0006 	ldmia	sp, {r1, r2}
        253ad0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        253ad4:	eb64ca15 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        253ad8:	e5890000 	str	r0, [r9]
        253adc:	e28dd008 	add	sp, sp, #8	; 0x8
        253ae0:	e1a00008 	mov	r0, r8
        253ae4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::UpdateRangeRuns(TXOffsetRange const &, TXAttrValues const *, long)
 * Address: 00253ae8
 */
Textension::UpdateRangeRuns(TXOffsetRange const &, TXAttrValues const *, long) {
    /*
        253ae8:	e1a0c00d 	mov	ip, sp
        253aec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        253af0:	e24cb004 	sub	fp, ip, #4	; 0x4
        253af4:	e1a04000 	mov	r4, r0
        253af8:	e1a05001 	mov	r5, r1
        253afc:	e1a07002 	mov	r7, r2
        253b00:	e1a06003 	mov	r6, r3
        253b04:	e5911008 	ldr	r1, [r1, #8]	; fField8
        253b08:	e5950000 	ldr	r0, [r5]
        253b0c:	e0510000 	subs	r0, r1, r0
        253b10:	1a00000a 	bne	253b40 <Textension::UpdateRangeRuns(TXOffsetRange const &, TXAttrValues const *, long)+0x58>
        253b14:	e1a00004 	mov	r0, r4
        253b18:	eb65312a 	bl	1b9ffc8 <Textension::$UpdatePendingRun(void)>
        253b1c:	e1a02006 	mov	r2, r6
        253b20:	e1a01007 	mov	r1, r7
        253b24:	e5940024 	ldr	r0, [r4, #36]	; fField36
        253b28:	eb64ca0c 	bl	1b86360 <TXAttrObject::$Update(TXAttrValues const *, long)>
        253b2c:	e3a01001 	mov	r1, #1	; 0x1
        253b30:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        253b34:	eb64f33e 	bl	1b90834 <TXHilite::$Invalid(unsigned char)>
        253b38:	e3a00000 	mov	r0, #0	; 0x0
        253b3c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        253b40:	e3a00001 	mov	r0, #1	; 0x1
        253b44:	e5c40028 	strb	r0, [r4, #40]	; fField40
        253b48:	e24dd018 	sub	sp, sp, #24	; 0x18
        253b4c:	e1a0100d 	mov	r1, sp
        253b50:	e5942010 	ldr	r2, [r4, #16]	; fField16
        253b54:	e1a00002 	mov	r0, r2
        253b58:	e5922000 	ldr	r2, [r2]
        253b5c:	e1a0e00f 	mov	lr, pc
        253b60:	e282f014 	add	pc, r2, #20	; 0x14
        253b64:	e24dd008 	sub	sp, sp, #8	; 0x8
        253b68:	e1a03006 	mov	r3, r6
        253b6c:	e594c00c 	ldr	ip, [r4, #12]	; fField12
        253b70:	e92d0008 	stmdb	sp!, {r3}
        253b74:	e5950008 	ldr	r0, [r5, #8]	; fField8
        253b78:	e5951000 	ldr	r1, [r5]
        253b7c:	e0402001 	sub	r2, r0, r1
        253b80:	e1a03007 	mov	r3, r7
        253b84:	e1a0000c 	mov	r0, ip
        253b88:	e59cc000 	ldr	ip, [ip]
        253b8c:	e1a0e00f 	mov	lr, pc
        253b90:	e28cf014 	add	pc, ip, #20	; 0x14
        253b94:	e28dd004 	add	sp, sp, #4	; 0x4
        253b98:	e1a0300d 	mov	r3, sp
        253b9c:	e92d0008 	stmdb	sp!, {r3}
        253ba0:	e28d3008 	add	r3, sp, #8	; 0x8
        253ba4:	e1a02005 	mov	r2, r5
        253ba8:	e1a01000 	mov	r1, r0
        253bac:	e1a00004 	mov	r0, r4
        253bb0:	eb65310e 	bl	1b9fff0 <Textension::$UpdateFormatter(long, TXOffsetRange const &, long *, long *)>
        253bb4:	e28dd004 	add	sp, sp, #4	; 0x4
        253bb8:	e1a05000 	mov	r5, r0
        253bbc:	e3a03000 	mov	r3, #0	; 0x0
        253bc0:	e92d0008 	stmdb	sp!, {r3}
        253bc4:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        253bc8:	e59d3004 	ldr	r3, [sp, #4]
        253bcc:	e28d100c 	add	r1, sp, #12	; 0xc
        253bd0:	e1a00004 	mov	r0, r4
        253bd4:	eb6530f3 	bl	1b9ffa8 <Textension::$EndEdit(TXEditInfo const &, long, long, TXOffset *)>
        253bd8:	e1a00005 	mov	r0, r5
        253bdc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::Export(TXOffsetRange *, TXContainer *, unsigned char)
 * Address: 00253be0
 */
Textension::Export(TXOffsetRange *, TXContainer *, unsigned char) {
    /*
        253be0:	e1a0c00d 	mov	ip, sp
        253be4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        253be8:	e24cb004 	sub	fp, ip, #4	; 0x4
        253bec:	e1a04000 	mov	r4, r0
        253bf0:	e1a05001 	mov	r5, r1
        253bf4:	e1a06002 	mov	r6, r2
        253bf8:	e20370ff 	and	r7, r3, #255	; 0xff
        253bfc:	e24dd010 	sub	sp, sp, #16	; 0x10
        253c00:	e1a01007 	mov	r1, r7
        253c04:	e1a0000d 	mov	r0, sp
        253c08:	eb64da44 	bl	1b8a520 <TXContainerImportInfo::$__ct(unsigned char)>
        253c0c:	e3370004 	teq	r7, #4	; 0x4
        253c10:	1a000003 	bne	253c24 <Textension::Export(TXOffsetRange *, TXContainer *, unsigned char)+0x44>
        253c14:	e2852008 	add	r2, r5, #8	; 0x8
        253c18:	e1a01005 	mov	r1, r5
        253c1c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        253c20:	eb650fdf 	bl	1b97ba4 <$CharRangeToParagRange__12TXRulerRangeCFP8TXOffsetT1>
        253c24:	e24dd038 	sub	sp, sp, #56	; 0x38
        253c28:	e5941020 	ldr	r1, [r4, #32]	; fField32
        253c2c:	e5942008 	ldr	r2, [r4, #8]	; fField8
        253c30:	e5943018 	ldr	r3, [r4, #24]	; fField24
        253c34:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        253c38:	e5950008 	ldr	r0, [r5, #8]	; fField8
        253c3c:	e5951000 	ldr	r1, [r5]
        253c40:	e0402001 	sub	r2, r0, r1
        253c44:	e28d000c 	add	r0, sp, #12	; 0xc
        253c48:	e5b4300c 	ldr	r3, [r4, #12]!	; fField12
        253c4c:	eb64da48 	bl	1b8a574 <TXPrivateContainer::$__ct(long, long, TXObjectRange *, TXObjectRange *, TXChars *, TXFormatter *)>
        253c50:	e28dd00c 	add	sp, sp, #12	; 0xc
        253c54:	e28d2038 	add	r2, sp, #56	; 0x38
        253c58:	e1a0100d 	mov	r1, sp
        253c5c:	e1a00006 	mov	r0, r6
        253c60:	eb64da30 	bl	1b8a528 <TXContainer::$Import(TXContainer *, TXContainerImportInfo *)>
        253c64:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: Textension::UpdateRangeRulers(TXOffsetRange const &, TXAttrValues const *, long)
 * Address: 00253c68
 */
Textension::UpdateRangeRulers(TXOffsetRange const &, TXAttrValues const *, long) {
    /*
        253c68:	e1a0c00d 	mov	ip, sp
        253c6c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        253c70:	e24cb004 	sub	fp, ip, #4	; 0x4
        253c74:	e1a04000 	mov	r4, r0
        253c78:	e1a06002 	mov	r6, r2
        253c7c:	e1a05003 	mov	r5, r3
        253c80:	e2811010 	add	r1, r1, #16	; 0x10
        253c84:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        253c88:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        253c8c:	e28d2008 	add	r2, sp, #8	; 0x8
        253c90:	e5900020 	ldr	r0, [r0, #32]	; fField32
        253c94:	e1a0100d 	mov	r1, sp
        253c98:	eb650fc1 	bl	1b97ba4 <$CharRangeToParagRange__12TXRulerRangeCFP8TXOffsetT1>
        253c9c:	e24dd018 	sub	sp, sp, #24	; 0x18
        253ca0:	e1a0100d 	mov	r1, sp
        253ca4:	e5942010 	ldr	r2, [r4, #16]	; fField16
        253ca8:	e1a00002 	mov	r0, r2
        253cac:	e5922000 	ldr	r2, [r2]
        253cb0:	e1a0e00f 	mov	lr, pc
        253cb4:	e282f014 	add	pc, r2, #20	; 0x14
        253cb8:	e24dd008 	sub	sp, sp, #8	; 0x8
        253cbc:	e1a03005 	mov	r3, r5
        253cc0:	e594c020 	ldr	ip, [r4, #32]	; fField32
        253cc4:	e92d0008 	stmdb	sp!, {r3}
        253cc8:	e59d002c 	ldr	r0, [sp, #44]
        253ccc:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        253cd0:	e0402001 	sub	r2, r0, r1
        253cd4:	e1a03006 	mov	r3, r6
        253cd8:	e1a0000c 	mov	r0, ip
        253cdc:	e59cc000 	ldr	ip, [ip]
        253ce0:	e1a0e00f 	mov	lr, pc
        253ce4:	e28cf014 	add	pc, ip, #20	; 0x14
        253ce8:	e28dd004 	add	sp, sp, #4	; 0x4
        253cec:	e1a01000 	mov	r1, r0
        253cf0:	e1a0300d 	mov	r3, sp
        253cf4:	e92d0008 	stmdb	sp!, {r3}
        253cf8:	e28d3008 	add	r3, sp, #8	; 0x8
        253cfc:	e28d2024 	add	r2, sp, #36	; 0x24
        253d00:	e1a00004 	mov	r0, r4
        253d04:	eb6530b9 	bl	1b9fff0 <Textension::$UpdateFormatter(long, TXOffsetRange const &, long *, long *)>
        253d08:	e28dd004 	add	sp, sp, #4	; 0x4
        253d0c:	e1a05000 	mov	r5, r0
        253d10:	e3a03000 	mov	r3, #0	; 0x0
        253d14:	e92d0008 	stmdb	sp!, {r3}
        253d18:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        253d1c:	e59d3004 	ldr	r3, [sp, #4]
        253d20:	e28d100c 	add	r1, sp, #12	; 0xc
        253d24:	e1a00004 	mov	r0, r4
        253d28:	eb65309e 	bl	1b9ffa8 <Textension::$EndEdit(TXEditInfo const &, long, long, TXOffset *)>
        253d2c:	e1a00005 	mov	r0, r5
        253d30:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: GetNewRunObject__10TextensionSFv
 * Address: 00253ebc
 */
void Textension::GetNewRunObject() {
    /*
        253ebc:	e59f0000 	ldr	r0, [pc, #0]	; 253ec4 <GetNewRunObject__10TextensionSFv+0x8>
        253ec0:	ea64d589 	b	1b894ec <$TXGetNewDefaultObject(unsigned long)>
        253ec4:	7478726e 	ldrvcbt	r7, [r8], -#622
    */
}

/**
 * Symbol: GetNewRulerObject__10TextensionSFv
 * Address: 00253ec8
 */
void Textension::GetNewRulerObject() {
    /*
        253ec8:	e59f0000 	ldr	r0, [pc, #0]	; 253ed0 <GetNewRulerObject__10TextensionSFv+0x8>
        253ecc:	ea64d586 	b	1b894ec <$TXGetNewDefaultObject(unsigned long)>
        253ed0:	7478726c 	ldrvcbt	r7, [r8], -#620
    */
}

/**
 * Symbol: Textension::__ct(void)
 * Address: 00253ed4
 */
Textension::Textension(void) {
    /*
        253ed4:	e1a0c00d 	mov	ip, sp
        253ed8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        253edc:	e24cb004 	sub	fp, ip, #4	; 0x4
        253ee0:	e1b04000 	movs	r4, r0
        253ee4:	1a000003 	bne	253ef8 <Textension::__ct(void)+0x24>
        253ee8:	e3a0002c 	mov	r0, #44	; 0x2c
        253eec:	eb65ea11 	bl	1bce738 <$__nw(unsigned int)>
        253ef0:	e1b04000 	movs	r4, r0
        253ef4:	0a000003 	beq	253f08 <Textension::__ct(void)+0x34>
        253ef8:	e1a00004 	mov	r0, r4
        253efc:	eb651b83 	bl	1b9ad10 <TXStyledText::$__ct(void)>
        253f00:	e59f0008 	ldr	r0, [pc, #8]	; 253f10 <Textension::__ct(void)+0x3c>	; fField8
        253f04:	e5840000 	str	r0, [r4]
        253f08:	e1a00004 	mov	r0, r4
        253f0c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        253f10:	0001b02c 	andeq	fp, r1, ip, lsr #32
    */
}

/**
 * Symbol: Textension::ITextension(GrafPort *, TXHandlers const &, char)
 * Address: 00253f14
 */
Textension::ITextension(GrafPort *, TXHandlers const &, char) {
    /*
        253f14:	e1a0c00d 	mov	ip, sp
        253f18:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        253f1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        253f20:	e1a04000 	mov	r4, r0
        253f24:	e1a05002 	mov	r5, r2
        253f28:	e20360ff 	and	r6, r3, #255	; 0xff
        253f2c:	e592200c 	ldr	r2, [r2, #12]	; fField12
        253f30:	e1a03006 	mov	r3, r6
        253f34:	eb651b76 	bl	1b9ad14 <TXStyledText::$IStyledText(GrafPort *, TXChars *, char)>
        253f38:	e5950004 	ldr	r0, [r5, #4]
        253f3c:	e3300000 	teq	r0, #0	; 0x0
        253f40:	03a00000 	moveq	r0, #0	; 0x0
        253f44:	0b64f238 	bleq	1b9082c <TXHilite::$__ct(void)>
        253f48:	e5840014 	str	r0, [r4, #20]	; fField20
        253f4c:	eb65300e 	bl	1b9ff8c <$GetNewRulerObject__10TextensionSFv>
        253f50:	e1a02000 	mov	r2, r0
        253f54:	e3a00000 	mov	r0, #0	; 0x0
        253f58:	e5941008 	ldr	r1, [r4, #8]	; fField8
        253f5c:	eb650b06 	bl	1b96b7c <TXRulerRange::$__ct(TXChars *, TXRuler *)>
        253f60:	e5840020 	str	r0, [r4, #32]	; fField32
        253f64:	e3a00000 	mov	r0, #0	; 0x0
        253f68:	eb64e1b7 	bl	1b8c64c <TXFormatter::$__ct(void)>
        253f6c:	e5840018 	str	r0, [r4, #24]	; fField24
        253f70:	e5950008 	ldr	r0, [r5, #8]	; fField8
        253f74:	e3300000 	teq	r0, #0	; 0x0
        253f78:	03a00000 	moveq	r0, #0	; 0x0
        253f7c:	0b64dd8e 	bleq	1b8b5bc <TXDisplay::$__ct(void)>
        253f80:	e5840010 	str	r0, [r4, #16]	; fField16
        253f84:	e24dd014 	sub	sp, sp, #20	; 0x14
        253f88:	e5940014 	ldr	r0, [r4, #20]	; fField20
        253f8c:	e88d0011 	stmia	sp, {r0, r4}
        253f90:	e5940018 	ldr	r0, [r4, #24]	; fField24
        253f94:	e58d0008 	str	r0, [sp, #8]	; fField8
        253f98:	e5950000 	ldr	r0, [r5]
        253f9c:	e58d000c 	str	r0, [sp, #12]	; fField12
        253fa0:	e5940020 	ldr	r0, [r4, #32]	; fField32
        253fa4:	e58d0010 	str	r0, [sp, #16]	; fField16
        253fa8:	e1a0100d 	mov	r1, sp
        253fac:	e5940010 	ldr	r0, [r4, #16]	; fField16
        253fb0:	eb64dd83 	bl	1b8b5c4 <TXDisplay::$SetHandlers(TXDisplayHandlers *)>
        253fb4:	e1a03006 	mov	r3, r6
        253fb8:	e92d0008 	stmdb	sp!, {r3}
        253fbc:	e5943020 	ldr	r3, [r4, #32]	; fField32
        253fc0:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        253fc4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        253fc8:	e1a01004 	mov	r1, r4
        253fcc:	eb64e1a0 	bl	1b8c654 <TXFormatter::$SetHandlers(TXStyledText *, TXFrames *, TXRulerRange *, char)>
        253fd0:	e28dd004 	add	sp, sp, #4	; 0x4
        253fd4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        253fd8:	e5942010 	ldr	r2, [r4, #16]	; fField16
        253fdc:	e1a01004 	mov	r1, r4
        253fe0:	eb64f212 	bl	1b90830 <TXHilite::$SetHandlers(Textension *, TXDisplay *)>
        253fe4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        253fe8:	e5900004 	ldr	r0, [r0, #4]
        253fec:	e584001c 	str	r0, [r4, #28]	; fField28
        253ff0:	eb652fe4 	bl	1b9ff88 <$GetNewRunObject__10TextensionSFv>
        253ff4:	e3a05000 	mov	r5, #0	; 0x0
        253ff8:	e5840024 	str	r0, [r4, #36]	; fField36
        253ffc:	e5c45028 	strb	r5, [r4, #40]	; fField40
        254000:	e59f1014 	ldr	r1, [pc, #14]	; 25401c <Textension::ITextension(GrafPort *, TXHandlers const &, char)+0x108>
        254004:	e5911000 	ldr	r1, [r1]
        254008:	e3310000 	teq	r1, #0	; 0x0
        25400c:	13a02001 	movne	r2, #1	; 0x1
        254010:	1b64c8d2 	blne	1b86360 <TXAttrObject::$Update(TXAttrValues const *, long)>
        254014:	e1a00005 	mov	r0, r5
        254018:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        25401c:	0c104ed8 	ldceq	14, cr4, [r0], -#864
    */
}

/**
 * Symbol: Textension::__dt(void)
 * Address: 00254020
 */
Textension::~Textension(void) {
    /*
        254020:	e1a0c00d 	mov	ip, sp
        254024:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        254028:	e24cb004 	sub	fp, ip, #4	; 0x4
        25402c:	e1a04000 	mov	r4, r0
        254030:	e1a05001 	mov	r5, r1
        254034:	e59f0080 	ldr	r0, [pc, #80]	; 2540bc <Textension::__dt(void)+0x9c>
        254038:	e5840000 	str	r0, [r4]
        25403c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        254040:	e3300000 	teq	r0, #0	; 0x0
        254044:	0a000002 	beq	254054 <Textension::__dt(void)+0x34>
        254048:	e3a01001 	mov	r1, #1	; 0x1
        25404c:	e1a0e00f 	mov	lr, pc
        254050:	e590f000 	ldr	pc, [r0]
        254054:	e5940014 	ldr	r0, [r4, #20]	; fField20
        254058:	eb65e5a0 	bl	1bcd6e0 <$__dl(void *)>
        25405c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        254060:	e3300000 	teq	r0, #0	; 0x0
        254064:	0a000002 	beq	254074 <Textension::__dt(void)+0x54>
        254068:	e3a01001 	mov	r1, #1	; 0x1
        25406c:	e1a0e00f 	mov	lr, pc
        254070:	e590f000 	ldr	pc, [r0]
        254074:	e5940024 	ldr	r0, [r4, #36]	; fField36
        254078:	e5901000 	ldr	r1, [r0]
        25407c:	e1a0e00f 	mov	lr, pc
        254080:	e281f004 	add	pc, r1, #4	; 0x4
        254084:	e5940020 	ldr	r0, [r4, #32]	; fField32
        254088:	e3300000 	teq	r0, #0	; 0x0
        25408c:	0a000002 	beq	25409c <Textension::__dt(void)+0x7c>
        254090:	e3a01001 	mov	r1, #1	; 0x1
        254094:	e1a0e00f 	mov	lr, pc
        254098:	e590f000 	ldr	pc, [r0]
        25409c:	e1a00004 	mov	r0, r4
        2540a0:	e3a01000 	mov	r1, #0	; 0x0
        2540a4:	eb651b1b 	bl	1b9ad18 <TXStyledText::$__dt(void)>
        2540a8:	e3150001 	tst	r5, #1	; 0x1
        2540ac:	11a00004 	movne	r0, r4
        2540b0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2540b4:	1a65e589 	bne	1bcd6e0 <$__dl(void *)>
        2540b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2540bc:	0001b02c 	andeq	fp, r1, ip, lsr #32
    */
}

