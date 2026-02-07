#include "include/TXDisplay.h"

/**
 * Symbol: TXDisplay::Draw(Rect const &)
 * Address: 00235b20
 */
TXDisplay::Draw(Rect const &) {
    /*
        235b20:	e1a0c00d 	mov	ip, sp
        235b24:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        235b28:	e24cb004 	sub	fp, ip, #4	; 0x4
        235b2c:	e1a04000 	mov	r4, r0
        235b30:	e1a05001 	mov	r5, r1
        235b34:	e59f00a8 	ldr	r0, [pc, #a8]	; 235be4 <TXDisplay::Draw(Rect const &)+0xc4>
        235b38:	e5900008 	ldr	r0, [r0, #8]	; fField8
        235b3c:	e3500000 	cmp	r0, #0	; 0x0
        235b40:	b91ba870 	ldmltdb	fp, {r4, r5, r6, fp, sp, pc}
        235b44:	e24dd00c 	sub	sp, sp, #12	; 0xc
        235b48:	e1a0100d 	mov	r1, sp
        235b4c:	e1a00004 	mov	r0, r4
        235b50:	eb655aab 	bl	1b8c604 <TXDisplay::$SetDrawEnv(TXDrawEnv *)>
        235b54:	e24dd024 	sub	sp, sp, #36	; 0x24
        235b58:	e3e00001 	mvn	r0, #1	; 0x1
        235b5c:	e58d0020 	str	r0, [sp, #32]	; fField32
        235b60:	e3a00000 	mov	r0, #0	; 0x0
        235b64:	e58d0014 	str	r0, [sp, #20]	; fField20
        235b68:	e1a0200d 	mov	r2, sp
        235b6c:	e1a01005 	mov	r1, r5
        235b70:	e5943008 	ldr	r3, [r4, #8]	; fField8
        235b74:	e1a00003 	mov	r0, r3
        235b78:	e5933000 	ldr	r3, [r3]
        235b7c:	e1a0e00f 	mov	lr, pc
        235b80:	e283f030 	add	pc, r3, #48	; 0x30
        235b84:	e1a0000d 	mov	r0, sp
        235b88:	eb6562f4 	bl	1b8e760 <TXSectFrames::$GetNextFrame(void)>
        235b8c:	e1b06000 	movs	r6, r0
        235b90:	4a00000d 	bmi	235bcc <TXDisplay::Draw(Rect const &)+0xac>
        235b94:	e1a02005 	mov	r2, r5
        235b98:	e1a01006 	mov	r1, r6
        235b9c:	e1a00004 	mov	r0, r4
        235ba0:	eb655a9c 	bl	1b8c618 <TXDisplay::$DrawFrameText(long, Rect const *)>
        235ba4:	e1a01006 	mov	r1, r6
        235ba8:	e5942008 	ldr	r2, [r4, #8]	; fField8
        235bac:	e1a00002 	mov	r0, r2
        235bb0:	e5922000 	ldr	r2, [r2]
        235bb4:	e1a0e00f 	mov	lr, pc
        235bb8:	e282f034 	add	pc, r2, #52	; 0x34
        235bbc:	e1a0000d 	mov	r0, sp
        235bc0:	eb6562e6 	bl	1b8e760 <TXSectFrames::$GetNextFrame(void)>
        235bc4:	e1b06000 	movs	r6, r0
        235bc8:	5afffff1 	bpl	235b94 <TXDisplay::Draw(Rect const &)+0x74>
        235bcc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        235bd0:	eb656b27 	bl	1b90874 <TXHilite::$Draw(void)>
        235bd4:	e28d1024 	add	r1, sp, #36	; 0x24
        235bd8:	e1a00004 	mov	r0, r4
        235bdc:	eb655a89 	bl	1b8c608 <TXDisplay::$RestoreDrawEnv(TXDrawEnv const &)>
        235be0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        235be4:	0c104d8c 	ldceq	13, cr4, [r0], -#560
    */
}

/**
 * Symbol: TXDisplay::AdjustScrollValues(TXLongPoint *)
 * Address: 00235be8
 */
TXDisplay::AdjustScrollValues(TXLongPoint *) {
    /*
        235be8:	e1a0c00d 	mov	ip, sp
        235bec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        235bf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        235bf4:	e1a05000 	mov	r5, r0
        235bf8:	e1a04001 	mov	r4, r1
        235bfc:	e24dd008 	sub	sp, sp, #8	; 0x8
        235c00:	e5900020 	ldr	r0, [r0, #32]	; fField32
        235c04:	e5900000 	ldr	r0, [r0]
        235c08:	e2800004 	add	r0, r0, #4	; 0x4
        235c0c:	e8901008 	ldmia	r0, {r3, ip}
        235c10:	e88d1008 	stmia	sp, {r3, ip}
        235c14:	e5950008 	ldr	r0, [r5, #8]	; fField8
        235c18:	e1a01000 	mov	r1, r0
        235c1c:	e5b06008 	ldr	r6, [r0, #8]!	; fField8
        235c20:	e3a07000 	mov	r7, #0	; 0x0
        235c24:	e5940000 	ldr	r0, [r4]
        235c28:	e3500000 	cmp	r0, #0	; 0x0
        235c2c:	da000002 	ble	235c3c <TXDisplay::AdjustScrollValues(TXLongPoint *)+0x54>
        235c30:	e1500006 	cmp	r0, r6
        235c34:	c5846000 	strgt	r6, [r4]
        235c38:	ea000012 	b	235c88 <TXDisplay::AdjustScrollValues(TXLongPoint *)+0xa0>
        235c3c:	e1a00001 	mov	r0, r1
        235c40:	e5911000 	ldr	r1, [r1]
        235c44:	e1a0e00f 	mov	lr, pc
        235c48:	e281f01c 	add	pc, r1, #28	; 0x1c
        235c4c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        235c50:	e1a01841 	mov	r1, r1, asr #16
        235c54:	e59d2000 	ldr	r2, [sp]
        235c58:	e0411842 	sub	r1, r1, r2, asr #16
        235c5c:	e0400001 	sub	r0, r0, r1
        235c60:	e0400006 	sub	r0, r0, r6
        235c64:	e3500000 	cmp	r0, #0	; 0x0
        235c68:	d5847000 	strle	r7, [r4]
        235c6c:	da000005 	ble	235c88 <TXDisplay::AdjustScrollValues(TXLongPoint *)+0xa0>
        235c70:	e5941000 	ldr	r1, [r4]
        235c74:	e2611000 	rsb	r1, r1, #0	; 0x0
        235c78:	e1510000 	cmp	r1, r0
        235c7c:	b1a00001 	movlt	r0, r1
        235c80:	e2600000 	rsb	r0, r0, #0	; 0x0
        235c84:	e5840000 	str	r0, [r4]
        235c88:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        235c8c:	e590500c 	ldr	r5, [r0, #12]	; fField12
        235c90:	e5941004 	ldr	r1, [r4, #4]	; fField4
        235c94:	e3510000 	cmp	r1, #0	; 0x0
        235c98:	da000002 	ble	235ca8 <TXDisplay::AdjustScrollValues(TXLongPoint *)+0xc0>
        235c9c:	e1510005 	cmp	r1, r5
        235ca0:	c5a45004 	strgt	r5, [r4, #4]!	; fField4
        235ca4:	ea000011 	b	235cf0 <TXDisplay::AdjustScrollValues(TXLongPoint *)+0x108>
        235ca8:	e5901000 	ldr	r1, [r0]
        235cac:	e1a0e00f 	mov	lr, pc
        235cb0:	e281f020 	add	pc, r1, #32	; 0x20
        235cb4:	e59d2006 	ldr	r2, [sp, #6]
        235cb8:	e1a02842 	mov	r2, r2, asr #16
        235cbc:	e59d1002 	ldr	r1, [sp, #2]
        235cc0:	e0421841 	sub	r1, r2, r1, asr #16
        235cc4:	e0400001 	sub	r0, r0, r1
        235cc8:	e0400005 	sub	r0, r0, r5
        235ccc:	e3500000 	cmp	r0, #0	; 0x0
        235cd0:	d5a47004 	strle	r7, [r4, #4]!	; fField4
        235cd4:	da000005 	ble	235cf0 <TXDisplay::AdjustScrollValues(TXLongPoint *)+0x108>
        235cd8:	e5941004 	ldr	r1, [r4, #4]	; fField4
        235cdc:	e2611000 	rsb	r1, r1, #0	; 0x0
        235ce0:	e1510000 	cmp	r1, r0
        235ce4:	b1a00001 	movlt	r0, r1
        235ce8:	e2600000 	rsb	r0, r0, #0	; 0x0
        235cec:	e5a40004 	str	r0, [r4, #4]!	; fField4
        235cf0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::Scroll(TXLongPoint *)
 * Address: 00235cf4
 */
TXDisplay::Scroll(TXLongPoint *) {
    /*
        235cf4:	e1a0c00d 	mov	ip, sp
        235cf8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        235cfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        235d00:	e1a04000 	mov	r4, r0
        235d04:	e1a05001 	mov	r5, r1
        235d08:	eb655632 	bl	1b8b5d8 <TXDisplay::$AdjustScrollValues(TXLongPoint *)>
        235d0c:	e5951004 	ldr	r1, [r5, #4]	; fField4
        235d10:	e5952000 	ldr	r2, [r5]
        235d14:	e1910002 	orrs	r0, r1, r2
        235d18:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        235d1c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        235d20:	eb65669c 	bl	1b8f798 <TXFrames::$FramesScrolled(long, long)>
        235d24:	e59f00c0 	ldr	r0, [pc, #c0]	; 235dec <TXDisplay::Scroll(TXLongPoint *)+0xf8>
        235d28:	e5900008 	ldr	r0, [r0, #8]	; fField8
        235d2c:	e3500000 	cmp	r0, #0	; 0x0
        235d30:	b91ba8f0 	ldmltdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        235d34:	e24dd00c 	sub	sp, sp, #12	; 0xc
        235d38:	e1a0100d 	mov	r1, sp
        235d3c:	e1a00004 	mov	r0, r4
        235d40:	eb655a2f 	bl	1b8c604 <TXDisplay::$SetDrawEnv(TXDrawEnv *)>
        235d44:	e24dd008 	sub	sp, sp, #8	; 0x8
        235d48:	e59f60a0 	ldr	r6, [pc, #a0]	; 235df0 <TXDisplay::Scroll(TXLongPoint *)+0xfc>
        235d4c:	e5960000 	ldr	r0, [r6]
        235d50:	eb654ddc 	bl	1b894c8 <TXTempReferences::$Get(void)>
        235d54:	e1a07000 	mov	r7, r0
        235d58:	e5941020 	ldr	r1, [r4, #32]	; fField32
        235d5c:	e5911000 	ldr	r1, [r1]
        235d60:	e2811004 	add	r1, r1, #4	; 0x4
        235d64:	e8915000 	ldmia	r1, {ip, lr}
        235d68:	e88d5000 	stmia	sp, {ip, lr}
        235d6c:	e3a03000 	mov	r3, #0	; 0x0
        235d70:	e1a02000 	mov	r2, r0
        235d74:	e92d000c 	stmdb	sp!, {r2, r3}
        235d78:	e28d1008 	add	r1, sp, #8	; 0x8
        235d7c:	e1a00004 	mov	r0, r4
        235d80:	e5952004 	ldr	r2, [r5, #4]	; fField4
        235d84:	e5953000 	ldr	r3, [r5]
        235d88:	eb655a23 	bl	1b8c61c <TXDisplay::$ScrollRect(Rect const &, long, long, Region **, unsigned char)>
        235d8c:	e28dd008 	add	sp, sp, #8	; 0x8
        235d90:	e5960000 	ldr	r0, [r6]
        235d94:	eb654dcb 	bl	1b894c8 <TXTempReferences::$Get(void)>
        235d98:	e1a05000 	mov	r5, r0
        235d9c:	eb646685 	bl	1b4f7b8 <$GetClip(Region **)>
        235da0:	e1a00007 	mov	r0, r7
        235da4:	eb64770c 	bl	1b539dc <$SetClip(Region **)>
        235da8:	e1a01007 	mov	r1, r7
        235dac:	e5960000 	ldr	r0, [r6]
        235db0:	eb654dc5 	bl	1b894cc <TXTempReferences::$Done(void *)>
        235db4:	e1a0100d 	mov	r1, sp
        235db8:	e1a00004 	mov	r0, r4
        235dbc:	e5942000 	ldr	r2, [r4]
        235dc0:	e1a0e00f 	mov	lr, pc
        235dc4:	e282f008 	add	pc, r2, #8	; 0x8
        235dc8:	e1a00005 	mov	r0, r5
        235dcc:	eb647702 	bl	1b539dc <$SetClip(Region **)>
        235dd0:	e1a01005 	mov	r1, r5
        235dd4:	e5960000 	ldr	r0, [r6]
        235dd8:	eb654dbb 	bl	1b894cc <TXTempReferences::$Done(void *)>
        235ddc:	e28d1008 	add	r1, sp, #8	; 0x8
        235de0:	e1a00004 	mov	r0, r4
        235de4:	eb655a07 	bl	1b8c608 <TXDisplay::$RestoreDrawEnv(TXDrawEnv const &)>
        235de8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        235dec:	0c104d8c 	ldceq	13, cr4, [r0], -#560
        235df0:	0c104d78 	ldceq	13, cr4, [r0], -#480
    */
}

/**
 * Symbol: TXDisplay::CheckScroll(unsigned char)
 * Address: 00235df4
 */
TXDisplay::CheckScroll(unsigned char) {
    /*
        235df4:	e1a0c00d 	mov	ip, sp
        235df8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        235dfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        235e00:	e1a04000 	mov	r4, r0
        235e04:	e20160ff 	and	r6, r1, #255	; 0xff
        235e08:	e24dd008 	sub	sp, sp, #8	; 0x8
        235e0c:	e1a0100d 	mov	r1, sp
        235e10:	eb6555f3 	bl	1b8b5e4 <TXDisplay::$GetScrolledValues(TXLongPoint *)>
        235e14:	e3a05000 	mov	r5, #0	; 0x0
        235e18:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        235e1c:	e3300000 	teq	r0, #0	; 0x0
        235e20:	059d0000 	ldreq	r0, [sp]
        235e24:	03300000 	teqeq	r0, #0	; 0x0
        235e28:	0a000039 	beq	235f14 <TXDisplay::CheckScroll(unsigned char)+0x120>
        235e2c:	e24dd008 	sub	sp, sp, #8	; 0x8
        235e30:	e5940020 	ldr	r0, [r4, #32]	; fField32
        235e34:	e5900000 	ldr	r0, [r0]
        235e38:	e2800004 	add	r0, r0, #4	; 0x4
        235e3c:	e8901008 	ldmia	r0, {r3, ip}
        235e40:	e88d1008 	stmia	sp, {r3, ip}
        235e44:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        235e48:	e3300000 	teq	r0, #0	; 0x0
        235e4c:	0a00000d 	beq	235e88 <TXDisplay::CheckScroll(unsigned char)+0x94>
        235e50:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        235e54:	e1a01841 	mov	r1, r1, asr #16
        235e58:	e59d0000 	ldr	r0, [sp]
        235e5c:	e0417840 	sub	r7, r1, r0, asr #16
        235e60:	e5941008 	ldr	r1, [r4, #8]	; fField8
        235e64:	e1a00001 	mov	r0, r1
        235e68:	e5911000 	ldr	r1, [r1]
        235e6c:	e1a0e00f 	mov	lr, pc
        235e70:	e281f01c 	add	pc, r1, #28	; 0x1c
        235e74:	e0470000 	sub	r0, r7, r0
        235e78:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        235e7c:	e0900001 	adds	r0, r0, r1
        235e80:	e58d0008 	str	r0, [sp, #8]	; fField8
        235e84:	458d5008 	strmi	r5, [sp, #8]	; fField8
        235e88:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        235e8c:	e3300000 	teq	r0, #0	; 0x0
        235e90:	0a00000d 	beq	235ecc <TXDisplay::CheckScroll(unsigned char)+0xd8>
        235e94:	e59d0006 	ldr	r0, [sp, #6]
        235e98:	e1a00840 	mov	r0, r0, asr #16
        235e9c:	e59d1002 	ldr	r1, [sp, #2]
        235ea0:	e0407841 	sub	r7, r0, r1, asr #16
        235ea4:	e5941008 	ldr	r1, [r4, #8]	; fField8
        235ea8:	e1a00001 	mov	r0, r1
        235eac:	e5911000 	ldr	r1, [r1]
        235eb0:	e1a0e00f 	mov	lr, pc
        235eb4:	e281f020 	add	pc, r1, #32	; 0x20
        235eb8:	e0470000 	sub	r0, r7, r0
        235ebc:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        235ec0:	e0900001 	adds	r0, r0, r1
        235ec4:	e58d000c 	str	r0, [sp, #12]	; fField12
        235ec8:	458d500c 	strmi	r5, [sp, #12]	; fField12
        235ecc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        235ed0:	e3500000 	cmp	r0, #0	; 0x0
        235ed4:	d59d000c 	ldrle	r0, [sp, #12]	; fField12
        235ed8:	d3500000 	cmple	r0, #0	; 0x0
        235edc:	da00000b 	ble	235f10 <TXDisplay::CheckScroll(unsigned char)+0x11c>
        235ee0:	e3360000 	teq	r6, #0	; 0x0
        235ee4:	0a000003 	beq	235ef8 <TXDisplay::CheckScroll(unsigned char)+0x104>
        235ee8:	e28d1008 	add	r1, sp, #8	; 0x8
        235eec:	e1a00004 	mov	r0, r4
        235ef0:	eb6555b9 	bl	1b8b5dc <TXDisplay::$Scroll(TXLongPoint *)>
        235ef4:	ea000003 	b	235f08 <TXDisplay::CheckScroll(unsigned char)+0x114>
        235ef8:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        235efc:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        235f00:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        235f04:	eb656623 	bl	1b8f798 <TXFrames::$FramesScrolled(long, long)>
        235f08:	e3a00001 	mov	r0, #1	; 0x1
        235f0c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        235f10:	e28dd008 	add	sp, sp, #8	; 0x8
        235f14:	e1a00005 	mov	r0, r5
        235f18:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::GetScrolledValues(TXLongPoint *)
 * Address: 00235f1c
 */
TXDisplay::GetScrolledValues(TXLongPoint *) {
    /*
        235f1c:	e5902008 	ldr	r2, [r0, #8]	; fField8
        235f20:	e592200c 	ldr	r2, [r2, #12]	; fField12
        235f24:	e5812004 	str	r2, [r1, #4]	; fField4
        235f28:	e5900008 	ldr	r0, [r0, #8]	; fField8
        235f2c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        235f30:	e5810000 	str	r0, [r1]
        235f34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXDisplay::Activate(unsigned char, unsigned char)
 * Address: 00235f38
 */
TXDisplay::Activate(unsigned char, unsigned char) {
    /*
        235f38:	e20110ff 	and	r1, r1, #255	; 0xff
        235f3c:	e20220ff 	and	r2, r2, #255	; 0xff
        235f40:	e5900004 	ldr	r0, [r0, #4]	; fField4
        235f44:	ea656a49 	b	1b90870 <TXHilite::$Activate(unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TXDisplay::IsHiliteVisible(TXLongPoint *, unsigned char)
 * Address: 00235f48
 */
TXDisplay::IsHiliteVisible(TXLongPoint *, unsigned char) {
    /*
        235f48:	e1a0c00d 	mov	ip, sp
        235f4c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        235f50:	e24cb004 	sub	fp, ip, #4	; 0x4
        235f54:	e1a05000 	mov	r5, r0
        235f58:	e1a04001 	mov	r4, r1
        235f5c:	e20260ff 	and	r6, r2, #255	; 0xff
        235f60:	e24dd018 	sub	sp, sp, #24	; 0x18
        235f64:	e28d0010 	add	r0, sp, #16	; 0x10
        235f68:	e5951020 	ldr	r1, [r5, #32]	; fField32
        235f6c:	e5911000 	ldr	r1, [r1]
        235f70:	e2811004 	add	r1, r1, #4	; 0x4
        235f74:	e8915000 	ldmia	r1, {ip, lr}
        235f78:	e8805000 	stmia	r0, {ip, lr}
        235f7c:	e1a0100d 	mov	r1, sp
        235f80:	e5950004 	ldr	r0, [r5, #4]	; fField4
        235f84:	eb656a3c 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        235f88:	e24dd010 	sub	sp, sp, #16	; 0x10
        235f8c:	e3360000 	teq	r6, #0	; 0x0
        235f90:	e28d0010 	add	r0, sp, #16	; 0x10
        235f94:	12800008 	addne	r0, r0, #8	; 0x8
        235f98:	e1a0300d 	mov	r3, sp
        235f9c:	e28d2004 	add	r2, sp, #4	; 0x4
        235fa0:	e92d000c 	stmdb	sp!, {r2, r3}
        235fa4:	e28d3010 	add	r3, sp, #16	; 0x10
        235fa8:	e1a02000 	mov	r2, r0
        235fac:	e1a00005 	mov	r0, r5
        235fb0:	e8920006 	ldmia	r2, {r1, r2}
        235fb4:	eb6559a0 	bl	1b8c63c <TXDisplay::$CharToPoint(TXOffset, TXLongPoint *, int *, int *)>
        235fb8:	e28dd008 	add	sp, sp, #8	; 0x8
        235fbc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        235fc0:	e41d1010 	ldr	r1, [sp], -#16	; fField16
        235fc4:	e0800001 	add	r0, r0, r1
        235fc8:	e58d0018 	str	r0, [sp, #24]	; fField24
        235fcc:	e1a0200d 	mov	r2, sp
        235fd0:	e28d1030 	add	r1, sp, #48	; 0x30
        235fd4:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        235fd8:	eb001019 	bl	23a044 <TXFrames::DrawToAbs( const(Rect const &, TXLongRect *))>
        235fdc:	e3a00000 	mov	r0, #0	; 0x0
        235fe0:	e59d1000 	ldr	r1, [sp]
        235fe4:	e59d2018 	ldr	r2, [sp, #24]	; fField24
        235fe8:	e1520001 	cmp	r2, r1
        235fec:	a59d1008 	ldrge	r1, [sp, #8]	; fField8
        235ff0:	a59d2018 	ldrge	r2, [sp, #24]	; fField24
        235ff4:	a1510002 	cmpge	r1, r2
        235ff8:	aa00000a 	bge	236028 <TXDisplay::IsHiliteVisible(TXLongPoint *, unsigned char)+0xe0>
        235ffc:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        236000:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        236004:	e0422001 	sub	r2, r2, r1
        236008:	e59d1034 	ldr	r1, [sp, #52]
        23600c:	e1a01841 	mov	r1, r1, asr #16
        236010:	e59d3030 	ldr	r3, [sp, #48]
        236014:	e0411843 	sub	r1, r1, r3, asr #16
        236018:	e0811fa1 	add	r1, r1, r1, lsr #31
        23601c:	e04210c1 	sub	r1, r2, r1, asr #1
        236020:	e5841000 	str	r1, [r4]
        236024:	ea000000 	b	23602c <TXDisplay::IsHiliteVisible(TXLongPoint *, unsigned char)+0xe4>
        236028:	e5840000 	str	r0, [r4]
        23602c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        236030:	e59d201c 	ldr	r2, [sp, #28]	; fField28
        236034:	e1520001 	cmp	r2, r1
        236038:	ba000003 	blt	23604c <TXDisplay::IsHiliteVisible(TXLongPoint *, unsigned char)+0x104>
        23603c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        236040:	e59d201c 	ldr	r2, [sp, #28]	; fField28
        236044:	e1520001 	cmp	r2, r1
        236048:	da000008 	ble	236070 <TXDisplay::IsHiliteVisible(TXLongPoint *, unsigned char)+0x128>
        23604c:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        236050:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        236054:	e0411000 	sub	r1, r1, r0
        236058:	e59d2036 	ldr	r2, [sp, #54]
        23605c:	e1a02842 	mov	r2, r2, asr #16
        236060:	e59d0032 	ldr	r0, [sp, #50]
        236064:	e0420840 	sub	r0, r2, r0, asr #16
        236068:	e0800fa0 	add	r0, r0, r0, lsr #31
        23606c:	e04100c0 	sub	r0, r1, r0, asr #1
        236070:	e5840004 	str	r0, [r4, #4]	; fField4
        236074:	e5940000 	ldr	r0, [r4]
        236078:	e3300000 	teq	r0, #0	; 0x0
        23607c:	05b40004 	ldreq	r0, [r4, #4]!	; fField4
        236080:	03300000 	teqeq	r0, #0	; 0x0
        236084:	13a00000 	movne	r0, #0	; 0x0
        236088:	03a00001 	moveq	r0, #1	; 0x1
        23608c:	e20000ff 	and	r0, r0, #255	; 0xff
        236090:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::BeginEdit(TXEditInfo *)
 * Address: 00236094
 */
TXDisplay::BeginEdit(TXEditInfo *) {
    /*
        236094:	e1a0c00d 	mov	ip, sp
        236098:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23609c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2360a0:	e1a04000 	mov	r4, r0
        2360a4:	e1a05001 	mov	r5, r1
        2360a8:	e3a00001 	mov	r0, #1	; 0x1
        2360ac:	e5c10000 	strb	r0, [r1]
        2360b0:	e59f70c4 	ldr	r7, [pc, #c4]	; 23617c <TXDisplay::BeginEdit(TXEditInfo *)+0xe8>
        2360b4:	e5970008 	ldr	r0, [r7, #8]	; fField8
        2360b8:	e3500000 	cmp	r0, #0	; 0x0
        2360bc:	b3e00000 	mvnlt	r0, #0	; 0x0
        2360c0:	b5a5000c 	strlt	r0, [r5, #12]!	; fField12
        2360c4:	b91ba8f0 	ldmltdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2360c8:	e2851008 	add	r1, r5, #8	; 0x8
        2360cc:	e1a00004 	mov	r0, r4
        2360d0:	eb65594b 	bl	1b8c604 <TXDisplay::$SetDrawEnv(TXDrawEnv *)>
        2360d4:	e3a06000 	mov	r6, #0	; 0x0
        2360d8:	e5a76004 	str	r6, [r7, #4]!	; fField4
        2360dc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2360e0:	e5d00019 	ldrb	r0, [r0, #25]
        2360e4:	e5c50014 	strb	r0, [r5, #20]	; fField20
        2360e8:	e3a01000 	mov	r1, #0	; 0x0
        2360ec:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2360f0:	e5902000 	ldr	r2, [r0]
        2360f4:	e1a0e00f 	mov	lr, pc
        2360f8:	e282f004 	add	pc, r2, #4	; 0x4
        2360fc:	e1a00004 	mov	r0, r4
        236100:	eb655941 	bl	1b8c60c <TXDisplay::$InvalidDraw(void)>
        236104:	e5940014 	ldr	r0, [r4, #20]	; fField20
        236108:	e5901000 	ldr	r1, [r0]
        23610c:	e1a0e00f 	mov	lr, pc
        236110:	e281f02c 	add	pc, r1, #44	; 0x2c
        236114:	e5a50004 	str	r0, [r5, #4]!	; fField4
        236118:	e5940014 	ldr	r0, [r4, #20]	; fField20
        23611c:	e5901000 	ldr	r1, [r0]
        236120:	e1a0e00f 	mov	lr, pc
        236124:	e281f03c 	add	pc, r1, #60	; 0x3c
        236128:	e24dd024 	sub	sp, sp, #36	; 0x24
        23612c:	e3e00001 	mvn	r0, #1	; 0x1
        236130:	e58d0020 	str	r0, [sp, #32]	; fField32
        236134:	e58d6014 	str	r6, [sp, #20]	; fField20
        236138:	e1a0100d 	mov	r1, sp
        23613c:	e1a00004 	mov	r0, r4
        236140:	eb655932 	bl	1b8c610 <TXDisplay::$GetViewFrames( const(TXSectFrames *))>
        236144:	e1a0000d 	mov	r0, sp
        236148:	eb656184 	bl	1b8e760 <TXSectFrames::$GetNextFrame(void)>
        23614c:	e1b01000 	movs	r1, r0
        236150:	4a000008 	bmi	236178 <TXDisplay::BeginEdit(TXEditInfo *)+0xe4>
        236154:	e5942014 	ldr	r2, [r4, #20]	; fField20
        236158:	e1a00002 	mov	r0, r2
        23615c:	e5922000 	ldr	r2, [r2]
        236160:	e1a0e00f 	mov	lr, pc
        236164:	e282f040 	add	pc, r2, #64	; 0x40
        236168:	e1a0000d 	mov	r0, sp
        23616c:	eb65617b 	bl	1b8e760 <TXSectFrames::$GetNextFrame(void)>
        236170:	e1b01000 	movs	r1, r0
        236174:	5afffff6 	bpl	236154 <TXDisplay::BeginEdit(TXEditInfo *)+0xc0>
        236178:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23617c:	0c104d8c 	ldceq	13, cr4, [r0], -#560
    */
}

/**
 * Symbol: TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)
 * Address: 00236180
 */
TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *) {
    /*
        236180:	e1a0c00d 	mov	ip, sp
        236184:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        236188:	e24cb004 	sub	fp, ip, #4	; 0x4
        23618c:	e1a04000 	mov	r4, r0
        236190:	e1a06001 	mov	r6, r1
        236194:	e1a05002 	mov	r5, r2
        236198:	e1a07003 	mov	r7, r3
        23619c:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        2361a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2361a4:	e59f90bc 	ldr	r9, [pc, #bc]	; 236268 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0xe8>
        2361a8:	e1a08009 	mov	r8, r9
        2361ac:	e5b90004 	ldr	r0, [r9, #4]!	; fField4
        2361b0:	e3800050 	orr	r0, r0, #80	; 0x50
        2361b4:	e33a0000 	teq	sl, #0	; 0x0
        2361b8:	e5890000 	str	r0, [r9]
        2361bc:	0a000010 	beq	236204 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x84>
        2361c0:	e1a0100a 	mov	r1, sl
        2361c4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2361c8:	eb6569a4 	bl	1b90860 <TXHilite::$AdjustCharOffset(TXOffset *)>
        2361cc:	e24dd010 	sub	sp, sp, #16	; 0x10
        2361d0:	e1a0200a 	mov	r2, sl
        2361d4:	e1a0100a 	mov	r1, sl
        2361d8:	e1a0000d 	mov	r0, sp
        2361dc:	ebfff785 	bl	233ff8 <TXOffsetRange::__ct(TXOffset const &, TXOffset const &)>
        2361e0:	e1a0100d 	mov	r1, sp
        2361e4:	e594c004 	ldr	ip, [r4, #4]	; fField4
        2361e8:	e1a0000c 	mov	r0, ip
        2361ec:	e3a03001 	mov	r3, #1	; 0x1
        2361f0:	e3a02000 	mov	r2, #0	; 0x0
        2361f4:	e59cc000 	ldr	ip, [ip]
        2361f8:	e1a0e00f 	mov	lr, pc
        2361fc:	e28cf008 	add	pc, ip, #8	; 0x8
        236200:	e28dd010 	add	sp, sp, #16	; 0x10
        236204:	e596000c 	ldr	r0, [r6, #12]	; fField12
        236208:	e3700001 	cmn	r0, #1	; 0x1
        23620c:	0a0000d7 	beq	236570 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x3f0>
        236210:	e5d60000 	ldrb	r0, [r6]
        236214:	e2861008 	add	r1, r6, #8	; 0x8
        236218:	e3300000 	teq	r0, #0	; 0x0
        23621c:	e58d1000 	str	r1, [sp]
        236220:	0a000002 	beq	236230 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0xb0>
        236224:	e5b80008 	ldr	r0, [r8, #8]!	; fField8
        236228:	e3500000 	cmp	r0, #0	; 0x0
        23622c:	aa00000e 	bge	23626c <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0xec>
        236230:	e5942004 	ldr	r2, [r4, #4]	; fField4
        236234:	e5d61014 	ldrb	r1, [r6, #20]	; fField20
        236238:	e1a00002 	mov	r0, r2
        23623c:	e5922000 	ldr	r2, [r2]
        236240:	e1a0e00f 	mov	lr, pc
        236244:	e282f004 	add	pc, r2, #4	; 0x4
        236248:	e1a00004 	mov	r0, r4
        23624c:	e59d1000 	ldr	r1, [sp]
        236250:	eb6558ec 	bl	1b8c608 <TXDisplay::$RestoreDrawEnv(TXDrawEnv const &)>
        236254:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        236258:	e5901000 	ldr	r1, [r0]
        23625c:	e1a0e00f 	mov	lr, pc
        236260:	e281f048 	add	pc, r1, #72	; 0x48
        236264:	ea0000c1 	b	236570 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x3f0>
        236268:	0c104d8c 	ldceq	13, cr4, [r0], -#560
        23626c:	e24dd008 	sub	sp, sp, #8	; 0x8
        236270:	e5940014 	ldr	r0, [r4, #20]	; fField20
        236274:	e5901000 	ldr	r1, [r0]
        236278:	e1a0e00f 	mov	lr, pc
        23627c:	e281f02c 	add	pc, r1, #44	; 0x2c
        236280:	e58d0004 	str	r0, [sp, #4]	; fField4
        236284:	e0550007 	subs	r0, r5, r7
        236288:	13a00001 	movne	r0, #1	; 0x1
        23628c:	e20000ff 	and	r0, r0, #255	; 0xff
        236290:	e58d0000 	str	r0, [sp]
        236294:	e5940014 	ldr	r0, [r4, #20]	; fField20
        236298:	e5901000 	ldr	r1, [r0]
        23629c:	e1a0e00f 	mov	lr, pc
        2362a0:	e281f044 	add	pc, r1, #68	; 0x44
        2362a4:	e1b08000 	movs	r8, r0
        2362a8:	0a00007b 	beq	23649c <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x31c>
        2362ac:	e24dd008 	sub	sp, sp, #8	; 0x8
        2362b0:	e598a000 	ldr	sl, [r8]
        2362b4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2362b8:	e15a0000 	cmp	sl, r0
        2362bc:	a5980004 	ldrge	r0, [r8, #4]	; fField4
        2362c0:	a3800001 	orrge	r0, r0, #1	; 0x1
        2362c4:	a5880004 	strge	r0, [r8, #4]	; fField4
        2362c8:	e5982004 	ldr	r2, [r8, #4]	; fField4
        2362cc:	e31200ff 	tst	r2, #255	; 0xff
        2362d0:	0a00000f 	beq	236314 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x194>
        2362d4:	e3a03000 	mov	r3, #0	; 0x0
        2362d8:	e594c008 	ldr	ip, [r4, #8]	; fField8
        2362dc:	e92d0008 	stmdb	sp!, {r3}
        2362e0:	e1a0100a 	mov	r1, sl
        2362e4:	e1a0000c 	mov	r0, ip
        2362e8:	e5983008 	ldr	r3, [r8, #8]	; fField8
        2362ec:	e59cc000 	ldr	ip, [ip]
        2362f0:	e1a0e00f 	mov	lr, pc
        2362f4:	e28cf024 	add	pc, ip, #36	; 0x24
        2362f8:	e28dd004 	add	sp, sp, #4	; 0x4
        2362fc:	e5990000 	ldr	r0, [r9]
        236300:	e3800020 	orr	r0, r0, #32	; 0x20
        236304:	e5890000 	str	r0, [r9]
        236308:	e5980004 	ldr	r0, [r8, #4]	; fField4
        23630c:	e3100001 	tst	r0, #1	; 0x1
        236310:	1a00003a 	bne	236400 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x280>
        236314:	e5980004 	ldr	r0, [r8, #4]	; fField4
        236318:	e3100c01 	tst	r0, #256	; 0x100
        23631c:	0a000004 	beq	236334 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x1b4>
        236320:	e1a0100a 	mov	r1, sl
        236324:	e1a00004 	mov	r0, r4
        236328:	e3a02000 	mov	r2, #0	; 0x0
        23632c:	eb6558b9 	bl	1b8c618 <TXDisplay::$DrawFrameText(long, Rect const *)>
        236330:	ea000032 	b	236400 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x280>
        236334:	e3550000 	cmp	r5, #0	; 0x0
        236338:	aa00000c 	bge	236370 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x1f0>
        23633c:	e5980010 	ldr	r0, [r8, #16]	; fField16
        236340:	e3300000 	teq	r0, #0	; 0x0
        236344:	0a000003 	beq	236358 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x1d8>
        236348:	e1a01008 	mov	r1, r8
        23634c:	e1a00004 	mov	r0, r4
        236350:	eb6558b5 	bl	1b8c62c <TXDisplay::$ScrollFrame(TXFrameEditInfo const &)>
        236354:	ea000029 	b	236400 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x280>
        236358:	e5980014 	ldr	r0, [r8, #20]	; fField20
        23635c:	e3300000 	teq	r0, #0	; 0x0
        236360:	11a01008 	movne	r1, r8
        236364:	11a00004 	movne	r0, r4
        236368:	1b6558b0 	blne	1b8c630 <TXDisplay::$UpdateOverflowLines(TXFrameEditInfo const &)>
        23636c:	ea000023 	b	236400 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x280>
        236370:	e1a0200d 	mov	r2, sp
        236374:	e1a0100a 	mov	r1, sl
        236378:	e5943014 	ldr	r3, [r4, #20]	; fField20
        23637c:	e1a00003 	mov	r0, r3
        236380:	e5933000 	ldr	r3, [r3]
        236384:	e1a0e00f 	mov	lr, pc
        236388:	e283f030 	add	pc, r3, #48	; 0x30
        23638c:	e3300000 	teq	r0, #0	; 0x0
        236390:	0a00001a 	beq	236400 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x280>
        236394:	e59d0000 	ldr	r0, [sp]
        236398:	e1550000 	cmp	r5, r0
        23639c:	d59d0004 	ldrle	r0, [sp, #4]	; fField4
        2363a0:	d1500007 	cmple	r0, r7
        2363a4:	ca000002 	bgt	2363b4 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x234>
        2363a8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2363ac:	e3300000 	teq	r0, #0	; 0x0
        2363b0:	1affffda 	bne	236320 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x1a0>
        2363b4:	e59d0000 	ldr	r0, [sp]
        2363b8:	e1500007 	cmp	r0, r7
        2363bc:	ca000002 	bgt	2363cc <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x24c>
        2363c0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2363c4:	e1500005 	cmp	r0, r5
        2363c8:	aa00000e 	bge	236408 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x288>
        2363cc:	e5980010 	ldr	r0, [r8, #16]	; fField16
        2363d0:	e3300000 	teq	r0, #0	; 0x0
        2363d4:	05980014 	ldreq	r0, [r8, #20]	; fField20
        2363d8:	03300000 	teqeq	r0, #0	; 0x0
        2363dc:	0598000c 	ldreq	r0, [r8, #12]	; fField12
        2363e0:	03300000 	teqeq	r0, #0	; 0x0
        2363e4:	0a000005 	beq	236400 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x280>
        2363e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2363ec:	e1500005 	cmp	r0, r5
        2363f0:	aaffffd4 	bge	236348 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x1c8>
        2363f4:	e1a0100a 	mov	r1, sl
        2363f8:	e1a00004 	mov	r0, r4
        2363fc:	eb655889 	bl	1b8c628 <TXDisplay::$EraseFrameBottom(long)>
        236400:	e28dd008 	add	sp, sp, #8	; 0x8
        236404:	ea00001e 	b	236484 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x304>
        236408:	e24dd008 	sub	sp, sp, #8	; 0x8
        23640c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        236410:	e1550000 	cmp	r5, r0
        236414:	c1a00005 	movgt	r0, r5
        236418:	e1a0a000 	mov	sl, r0
        23641c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        236420:	e1570000 	cmp	r7, r0
        236424:	b1a00007 	movlt	r0, r7
        236428:	e58d0004 	str	r0, [sp, #4]	; fField4
        23642c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        236430:	e15a0000 	cmp	sl, r0
        236434:	da000004 	ble	23644c <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x2cc>
        236438:	e24a2001 	sub	r2, sl, #1	; 0x1
        23643c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        236440:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        236444:	eb655ca0 	bl	1b8d6cc <$GetLinesHeight__14TXLinesHeightsCFlT1>
        236448:	ea000000 	b	236450 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x2d0>
        23644c:	e3a00000 	mov	r0, #0	; 0x0
        236450:	e58d0000 	str	r0, [sp]
        236454:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        236458:	e1500007 	cmp	r0, r7
        23645c:	ca000044 	bgt	236574 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x3f4>
        236460:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        236464:	e3300000 	teq	r0, #0	; 0x0
        236468:	0a000041 	beq	236574 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x3f4>
        23646c:	e1a01008 	mov	r1, r8
        236470:	e1a00004 	mov	r0, r4
        236474:	e3e03000 	mvn	r3, #0	; 0x0
        236478:	e59d2000 	ldr	r2, [sp]
        23647c:	eb655868 	bl	1b8c624 <TXDisplay::$FrameEndEdit(TXFrameEditInfo const &, long, long)>
        236480:	e28dd010 	add	sp, sp, #16	; 0x10
        236484:	e5940014 	ldr	r0, [r4, #20]	; fField20
        236488:	e5901000 	ldr	r1, [r0]
        23648c:	e1a0e00f 	mov	lr, pc
        236490:	e281f044 	add	pc, r1, #68	; 0x44
        236494:	e1b08000 	movs	r8, r0
        236498:	1affff83 	bne	2362ac <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x12c>
        23649c:	e5960004 	ldr	r0, [r6, #4]	; fField4
        2364a0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2364a4:	e1500001 	cmp	r0, r1
        2364a8:	aa00001f 	bge	23652c <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x3ac>
        2364ac:	e5990000 	ldr	r0, [r9]
        2364b0:	e3800020 	orr	r0, r0, #32	; 0x20
        2364b4:	e5890000 	str	r0, [r9]
        2364b8:	e24dd024 	sub	sp, sp, #36	; 0x24
        2364bc:	e3e00001 	mvn	r0, #1	; 0x1
        2364c0:	e58d0020 	str	r0, [sp, #32]	; fField32
        2364c4:	e3a00000 	mov	r0, #0	; 0x0
        2364c8:	e58d0014 	str	r0, [sp, #20]	; fField20
        2364cc:	e1a0100d 	mov	r1, sp
        2364d0:	e1a00004 	mov	r0, r4
        2364d4:	eb65584d 	bl	1b8c610 <TXDisplay::$GetViewFrames( const(TXSectFrames *))>
        2364d8:	e1a0000d 	mov	r0, sp
        2364dc:	eb65609f 	bl	1b8e760 <TXSectFrames::$GetNextFrame(void)>
        2364e0:	e1b01000 	movs	r1, r0
        2364e4:	4a00000f 	bmi	236528 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x3a8>
        2364e8:	e5960004 	ldr	r0, [r6, #4]	; fField4
        2364ec:	e1500001 	cmp	r0, r1
        2364f0:	ca000008 	bgt	236518 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x398>
        2364f4:	e3a03000 	mov	r3, #0	; 0x0
        2364f8:	e594c008 	ldr	ip, [r4, #8]	; fField8
        2364fc:	e92d0008 	stmdb	sp!, {r3}
        236500:	e1a0000c 	mov	r0, ip
        236504:	e3a02001 	mov	r2, #1	; 0x1
        236508:	e59cc000 	ldr	ip, [ip]
        23650c:	e1a0e00f 	mov	lr, pc
        236510:	e28cf024 	add	pc, ip, #36	; 0x24
        236514:	e28dd004 	add	sp, sp, #4	; 0x4
        236518:	e1a0000d 	mov	r0, sp
        23651c:	eb65608f 	bl	1b8e760 <TXSectFrames::$GetNextFrame(void)>
        236520:	e1b01000 	movs	r1, r0
        236524:	5affffef 	bpl	2364e8 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x368>
        236528:	e28dd024 	add	sp, sp, #36	; 0x24
        23652c:	e1a00004 	mov	r0, r4
        236530:	e3a01001 	mov	r1, #1	; 0x1
        236534:	eb655429 	bl	1b8b5e0 <TXDisplay::$CheckScroll(unsigned char)>
        236538:	e5942004 	ldr	r2, [r4, #4]	; fField4
        23653c:	e5d61014 	ldrb	r1, [r6, #20]	; fField20
        236540:	e1a00002 	mov	r0, r2
        236544:	e5922000 	ldr	r2, [r2]
        236548:	e1a0e00f 	mov	lr, pc
        23654c:	e282f004 	add	pc, r2, #4	; 0x4
        236550:	e1a00004 	mov	r0, r4
        236554:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        236558:	eb65582a 	bl	1b8c608 <TXDisplay::$RestoreDrawEnv(TXDrawEnv const &)>
        23655c:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        236560:	e5901000 	ldr	r1, [r0]
        236564:	e1a0e00f 	mov	lr, pc
        236568:	e281f048 	add	pc, r1, #72	; 0x48
        23656c:	e28dd008 	add	sp, sp, #8	; 0x8
        236570:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        236574:	e5940014 	ldr	r0, [r4, #20]	; fField20
        236578:	e1a0100a 	mov	r1, sl
        23657c:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        236580:	eb655c51 	bl	1b8d6cc <$GetLinesHeight__14TXLinesHeightsCFlT1>
        236584:	e1a03000 	mov	r3, r0
        236588:	e1a01008 	mov	r1, r8
        23658c:	e1a00004 	mov	r0, r4
        236590:	e59d2000 	ldr	r2, [sp]
        236594:	eb655822 	bl	1b8c624 <TXDisplay::$FrameEndEdit(TXFrameEditInfo const &, long, long)>
        236598:	e5980014 	ldr	r0, [r8, #20]	; fField20
        23659c:	e3300000 	teq	r0, #0	; 0x0
        2365a0:	11a01008 	movne	r1, r8
        2365a4:	11a00004 	movne	r0, r4
        2365a8:	1b655820 	blne	1b8c630 <TXDisplay::$UpdateOverflowLines(TXFrameEditInfo const &)>
        2365ac:	e28dd008 	add	sp, sp, #8	; 0x8
        2365b0:	eaffff92 	b	236400 <TXDisplay::EndEdit(TXEditInfo const &, long, long, TXOffset *)+0x280>
    */
}

/**
 * Symbol: TXDisplay::SetViewRgn(Region **)
 * Address: 002365b4
 */
TXDisplay::SetViewRgn(Region **) {
    /*
        2365b4:	e5b02020 	ldr	r2, [r0, #32]!	; fField32
        2365b8:	e1a00001 	mov	r0, r1
        2365bc:	e1a01002 	mov	r1, r2
        2365c0:	ea645c3b 	b	1b4d6b4 <$CopyRgn__FPP6RegionT1>
    */
}

/**
 * Symbol: Start__9TXDisplaySFv
 * Address: 002365c4
 */
void TXDisplay::Start() {
    /*
        2365c4:	e1a0c00d 	mov	ip, sp
        2365c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2365cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2365d0:	e3a0002c 	mov	r0, #44	; 0x2c
        2365d4:	eb666057 	bl	1bce738 <$__nw(unsigned int)>
        2365d8:	e1b04000 	movs	r4, r0
        2365dc:	0a000003 	beq	2365f0 <Start__9TXDisplaySFv+0x2c>
        2365e0:	e1a00004 	mov	r0, r4
        2365e4:	eb654bb6 	bl	1b894c4 <TXTempReferences::$__ct(void)>
        2365e8:	e59f000c 	ldr	r0, [pc, #c]	; 2365fc <Start__9TXDisplaySFv+0x38>
        2365ec:	e5840000 	str	r0, [r4]
        2365f0:	e59f0008 	ldr	r0, [pc, #8]	; 236600 <Start__9TXDisplaySFv+0x3c>	; fField8
        2365f4:	e5804000 	str	r4, [r0]
        2365f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2365fc:	0001b828 	andeq	fp, r1, r8, lsr #16
        236600:	0c104d8c 	ldceq	13, cr4, [r0], -#560
    */
}

/**
 * Symbol: TXDisplay::Focus(Region ***, Point *)
 * Address: 00236604
 */
TXDisplay::Focus(Region ***, Point *) {
    /*
        236604:	e1a0c00d 	mov	ip, sp
        236608:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23660c:	e24cb004 	sub	fp, ip, #4	; 0x4
        236610:	e1a06000 	mov	r6, r0
        236614:	e1a05001 	mov	r5, r1
        236618:	e1a04002 	mov	r4, r2
        23661c:	e59f0060 	ldr	r0, [pc, #60]	; 236684 <TXDisplay::Focus(Region ***, Point *)+0x80>
        236620:	e5900000 	ldr	r0, [r0]
        236624:	eb654ba7 	bl	1b894c8 <TXTempReferences::$Get(void)>
        236628:	e5850000 	str	r0, [r5]
        23662c:	eb646461 	bl	1b4f7b8 <$GetClip(Region **)>
        236630:	e24dd004 	sub	sp, sp, #4	; 0x4
        236634:	e1a0000d 	mov	r0, sp
        236638:	eb66e459 	bl	1bef7a4 <$GetPort(GrafPort **)>
        23663c:	e59d0000 	ldr	r0, [sp]
        236640:	e590001e 	ldr	r0, [r0, #30]	; fField30
        236644:	e1a00820 	mov	r0, r0, lsr #16
        236648:	e5c40003 	strb	r0, [r4, #3]
        23664c:	e1a00440 	mov	r0, r0, asr #8
        236650:	e5c40002 	strb	r0, [r4, #2]
        236654:	e59d0000 	ldr	r0, [sp]
        236658:	e590001c 	ldr	r0, [r0, #28]	; fField28
        23665c:	e1a00820 	mov	r0, r0, lsr #16
        236660:	e5c40001 	strb	r0, [r4, #1]
        236664:	e1a00440 	mov	r0, r0, asr #8
        236668:	e5c40000 	strb	r0, [r4]
        23666c:	e3a01000 	mov	r1, #0	; 0x0
        236670:	e3a00000 	mov	r0, #0	; 0x0
        236674:	eb6474de 	bl	1b539f4 <$SetOrigin__FlT1>
        236678:	e5b60020 	ldr	r0, [r6, #32]!	; fField32
        23667c:	eb6474d6 	bl	1b539dc <$SetClip(Region **)>
        236680:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        236684:	0c104d78 	ldceq	13, cr4, [r0], -#480
    */
}

/**
 * Symbol: TXDisplay::UnFocus(Region **, Point)
 * Address: 00236688
 */
TXDisplay::UnFocus(Region **, Point) {
    /*
        236688:	e1a0c00d 	mov	ip, sp
        23668c:	e92dd817 	stmdb	sp!, {r0, r1, r2, r4, fp, ip, lr, pc}
        236690:	e24cb004 	sub	fp, ip, #4	; 0x4
        236694:	e1a04001 	mov	r4, r1
        236698:	e1a00001 	mov	r0, r1
        23669c:	eb6474ce 	bl	1b539dc <$SetClip(Region **)>
        2366a0:	e59f0020 	ldr	r0, [pc, #20]	; 2366c8 <TXDisplay::UnFocus(Region **, Point)+0x40>	; fField20
        2366a4:	e5900000 	ldr	r0, [r0]
        2366a8:	e1a01004 	mov	r1, r4
        2366ac:	eb654b86 	bl	1b894cc <TXTempReferences::$Done(void *)>
        2366b0:	e51b0012 	ldr	r0, [fp, -#18]
        2366b4:	e1a00840 	mov	r0, r0, asr #16
        2366b8:	e51b1014 	ldr	r1, [fp, -#20]	; fField20
        2366bc:	e1a01841 	mov	r1, r1, asr #16
        2366c0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2366c4:	ea6474ca 	b	1b539f4 <$SetOrigin__FlT1>
        2366c8:	0c104d78 	ldceq	13, cr4, [r0], -#480
    */
}

/**
 * Symbol: TXDisplay::SetDrawEnv(TXDrawEnv *)
 * Address: 002366cc
 */
TXDisplay::SetDrawEnv(TXDrawEnv *) {
    /*
        2366cc:	e1a0c00d 	mov	ip, sp
        2366d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2366d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2366d8:	e1a04000 	mov	r4, r0
        2366dc:	e1a05001 	mov	r5, r1
        2366e0:	e5d0001c 	ldrb	r0, [r0, #28]	; fField28
        2366e4:	e2801001 	add	r1, r0, #1	; 0x1
        2366e8:	e5c4101c 	strb	r1, [r4, #28]	; fField28
        2366ec:	e3300000 	teq	r0, #0	; 0x0
        2366f0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        2366f4:	e1a00005 	mov	r0, r5
        2366f8:	eb66e429 	bl	1bef7a4 <$GetPort(GrafPort **)>
        2366fc:	e594000c 	ldr	r0, [r4, #12]	; fField12
        236700:	eb659186 	bl	1b9ad20 <TXStyledText::$GetTextPort( const(void))>
        236704:	eb66e428 	bl	1bef7ac <$SetPort(GrafPort *)>
        236708:	e2852008 	add	r2, r5, #8	; 0x8
        23670c:	e2851004 	add	r1, r5, #4	; 0x4
        236710:	e1a00004 	mov	r0, r4
        236714:	e5943000 	ldr	r3, [r4]
        236718:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        23671c:	e283f00c 	add	pc, r3, #12	; 0xc
    */
}

/**
 * Symbol: TXDisplay::RestoreDrawEnv(TXDrawEnv const &)
 * Address: 00236720
 */
TXDisplay::RestoreDrawEnv(TXDrawEnv const &) {
    /*
        236720:	e1a0c00d 	mov	ip, sp
        236724:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        236728:	e24cb004 	sub	fp, ip, #4	; 0x4
        23672c:	e1a04001 	mov	r4, r1
        236730:	e5d0101c 	ldrb	r1, [r0, #28]	; fField28
        236734:	e2411001 	sub	r1, r1, #1	; 0x1
        236738:	e21110ff 	ands	r1, r1, #255	; 0xff
        23673c:	e5c0101c 	strb	r1, [r0, #28]	; fField28
        236740:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        236744:	e9940006 	ldmib	r4, {r1, r2}
        236748:	e5903000 	ldr	r3, [r0]
        23674c:	e1a0e00f 	mov	lr, pc
        236750:	e283f010 	add	pc, r3, #16	; 0x10
        236754:	e5940000 	ldr	r0, [r4]
        236758:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        23675c:	ea66e412 	b	1bef7ac <$SetPort(GrafPort *)>
    */
}

/**
 * Symbol: TXDisplay::InvalidDraw(void)
 * Address: 00236760
 */
TXDisplay::InvalidDraw(void) {
    /*
        236760:	e1a0c00d 	mov	ip, sp
        236764:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        236768:	e24cb004 	sub	fp, ip, #4	; 0x4
        23676c:	e1a04000 	mov	r4, r0
        236770:	e5900004 	ldr	r0, [r0, #4]	; fField4
        236774:	e3a01000 	mov	r1, #0	; 0x0
        236778:	eb65682d 	bl	1b90834 <TXHilite::$Invalid(unsigned char)>
        23677c:	e3e01000 	mvn	r1, #0	; 0x0
        236780:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        236784:	e5a01010 	str	r1, [r0, #16]!	; fField16
        236788:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::GetViewFrames( const(TXSectFrames *))
 * Address: 0023678c
 */
TXDisplay::GetViewFrames( const(TXSectFrames *)) {
    /*
        23678c:	e1a0c00d 	mov	ip, sp
        236790:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        236794:	e24cb004 	sub	fp, ip, #4	; 0x4
        236798:	e24dd008 	sub	sp, sp, #8	; 0x8
        23679c:	e5903020 	ldr	r3, [r0, #32]	; fField32
        2367a0:	e5933000 	ldr	r3, [r3]
        2367a4:	e283e004 	add	lr, r3, #4	; 0x4
        2367a8:	e89e1008 	ldmia	lr, {r3, ip}
        2367ac:	e88d1008 	stmia	sp, {r3, ip}
        2367b0:	e1a02001 	mov	r2, r1
        2367b4:	e1a0100d 	mov	r1, sp
        2367b8:	e5b03008 	ldr	r3, [r0, #8]!	; fField8
        2367bc:	e1a00003 	mov	r0, r3
        2367c0:	e5933000 	ldr	r3, [r3]
        2367c4:	e1a0e00f 	mov	lr, pc
        2367c8:	e283f030 	add	pc, r3, #48	; 0x30
        2367cc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::DrawLineGroup(TXSectLines const &, Region **)
 * Address: 002367d0
 */
TXDisplay::DrawLineGroup(TXSectLines const &, Region **) {
    /*
        2367d0:	e1a0c00d 	mov	ip, sp
        2367d4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2367d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2367dc:	e1a06000 	mov	r6, r0
        2367e0:	e1a04001 	mov	r4, r1
        2367e4:	e1a05002 	mov	r5, r2
        2367e8:	e591000c 	ldr	r0, [r1, #12]	; fField12
        2367ec:	e3300000 	teq	r0, #0	; 0x0
        2367f0:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2367f4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2367f8:	e2840004 	add	r0, r4, #4	; 0x4
        2367fc:	e8901008 	ldmia	r0, {r3, ip}
        236800:	e88d1008 	stmia	sp, {r3, ip}
        236804:	e594000c 	ldr	r0, [r4, #12]	; fField12
        236808:	e5941000 	ldr	r1, [r4]
        23680c:	e0809001 	add	r9, r0, r1
        236810:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        236814:	e1a01841 	mov	r1, r1, asr #16
        236818:	e59d0000 	ldr	r0, [sp]
        23681c:	e0417840 	sub	r7, r1, r0, asr #16
        236820:	e59d0002 	ldr	r0, [sp, #2]
        236824:	e0400007 	sub	r0, r0, r7
        236828:	e5cd0001 	strb	r0, [sp, #1]
        23682c:	e1a00440 	mov	r0, r0, asr #8
        236830:	e5cd0000 	strb	r0, [sp]
        236834:	e59d0006 	ldr	r0, [sp, #6]
        236838:	e0400007 	sub	r0, r0, r7
        23683c:	e5cd0005 	strb	r0, [sp, #5]
        236840:	e1a00440 	mov	r0, r0, asr #8
        236844:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        236848:	e5948000 	ldr	r8, [r4]
        23684c:	e1580009 	cmp	r8, r9
        236850:	aa00001a 	bge	2368c0 <TXDisplay::DrawLineGroup(TXSectLines const &, Region **)+0xf0>
        236854:	e59d0002 	ldr	r0, [sp, #2]
        236858:	e0800007 	add	r0, r0, r7
        23685c:	e5cd0001 	strb	r0, [sp, #1]
        236860:	e1a00440 	mov	r0, r0, asr #8
        236864:	e5cd0000 	strb	r0, [sp]
        236868:	e59d0006 	ldr	r0, [sp, #6]
        23686c:	e0800007 	add	r0, r0, r7
        236870:	e5cd0005 	strb	r0, [sp, #5]
        236874:	e1a00440 	mov	r0, r0, asr #8
        236878:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        23687c:	e3350000 	teq	r5, #0	; 0x0
        236880:	0a000004 	beq	236898 <TXDisplay::DrawLineGroup(TXSectLines const &, Region **)+0xc8>
        236884:	e1a01005 	mov	r1, r5
        236888:	e1a0000d 	mov	r0, sp
        23688c:	eb647441 	bl	1b53998 <$RectInRgn(Rect *, Region **)>
        236890:	e3300000 	teq	r0, #0	; 0x0
        236894:	0a000006 	beq	2368b4 <TXDisplay::DrawLineGroup(TXSectLines const &, Region **)+0xe4>
        236898:	e1a01008 	mov	r1, r8
        23689c:	e1a00006 	mov	r0, r6
        2368a0:	eb655763 	bl	1b8c634 <TXDisplay::$DoLineLayout(long)>
        2368a4:	e5942010 	ldr	r2, [r4, #16]	; fField16
        2368a8:	e1a0100d 	mov	r1, sp
        2368ac:	e5960018 	ldr	r0, [r6, #24]	; fField24
        2368b0:	eb656c09 	bl	1b918dc <TXLine::$Draw(Rect const &, int)>
        2368b4:	e2888001 	add	r8, r8, #1	; 0x1
        2368b8:	e1580009 	cmp	r8, r9
        2368bc:	baffffe4 	blt	236854 <TXDisplay::DrawLineGroup(TXSectLines const &, Region **)+0x84>
        2368c0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::DrawFrameText(long, Rect const *)
 * Address: 002368c4
 */
TXDisplay::DrawFrameText(long, Rect const *) {
    /*
        2368c4:	e1a0c00d 	mov	ip, sp
        2368c8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2368cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2368d0:	e1a04000 	mov	r4, r0
        2368d4:	e1a06001 	mov	r6, r1
        2368d8:	e1a05002 	mov	r5, r2
        2368dc:	e24dd010 	sub	sp, sp, #16	; 0x10
        2368e0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2368e4:	e1a0200d 	mov	r2, sp
        2368e8:	eb6563a8 	bl	1b8f790 <TXFrames::$GetTextBounds( const(long, Rect *))>
        2368ec:	e3a07000 	mov	r7, #0	; 0x0
        2368f0:	e3350000 	teq	r5, #0	; 0x0
        2368f4:	0a000005 	beq	236910 <TXDisplay::DrawFrameText(long, Rect const *)+0x4c>
        2368f8:	e1a0200d 	mov	r2, sp
        2368fc:	e1a0100d 	mov	r1, sp
        236900:	e1a00005 	mov	r0, r5
        236904:	eb647430 	bl	1b539cc <$SectRect__FP4RectN21>
        236908:	e3300000 	teq	r0, #0	; 0x0
        23690c:	0a000003 	beq	236920 <TXDisplay::DrawFrameText(long, Rect const *)+0x5c>
        236910:	e1a0000d 	mov	r0, sp
        236914:	eb654ae6 	bl	1b894b4 <$TXCalcClipRect(Rect *)>
        236918:	e3300000 	teq	r0, #0	; 0x0
        23691c:	1a000001 	bne	236928 <TXDisplay::DrawFrameText(long, Rect const *)+0x64>
        236920:	e1a00007 	mov	r0, r7
        236924:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        236928:	e24dd008 	sub	sp, sp, #8	; 0x8
        23692c:	e59f0050 	ldr	r0, [pc, #50]	; 236984 <TXDisplay::DrawFrameText(long, Rect const *)+0xc0>
        236930:	e58d0014 	str	r0, [sp, #20]	; fField20
        236934:	e5900000 	ldr	r0, [r0]
        236938:	eb654ae2 	bl	1b894c8 <TXTempReferences::$Get(void)>
        23693c:	e1a03000 	mov	r3, r0
        236940:	e1a05000 	mov	r5, r0
        236944:	e1a0200d 	mov	r2, sp
        236948:	e92d000c 	stmdb	sp!, {r2, r3}
        23694c:	e28d300c 	add	r3, sp, #12	; 0xc
        236950:	e1a02006 	mov	r2, r6
        236954:	e28d1010 	add	r1, sp, #16	; 0x10
        236958:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23695c:	eb656396 	bl	1b8f7bc <$SectLines__8TXFramesCFP4RectlPlT3P7TXArray>
        236960:	e28dd008 	add	sp, sp, #8	; 0x8
        236964:	e3300000 	teq	r0, #0	; 0x0
        236968:	1a000006 	bne	236988 <TXDisplay::DrawFrameText(long, Rect const *)+0xc4>
        23696c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        236970:	e5900000 	ldr	r0, [r0]
        236974:	e1a01005 	mov	r1, r5
        236978:	eb654ad3 	bl	1b894cc <TXTempReferences::$Done(void *)>
        23697c:	e1a00007 	mov	r0, r7
        236980:	ea000033 	b	236a54 <TXDisplay::DrawFrameText(long, Rect const *)+0x190>
        236984:	0c104d8c 	ldceq	13, cr4, [r0], -#560
        236988:	e59f00c8 	ldr	r0, [pc, #c8]	; 236a58 <TXDisplay::DrawFrameText(long, Rect const *)+0x194>
        23698c:	e58d0010 	str	r0, [sp, #16]	; fField16
        236990:	e5900000 	ldr	r0, [r0]
        236994:	eb654acb 	bl	1b894c8 <TXTempReferences::$Get(void)>
        236998:	e1a01000 	mov	r1, r0
        23699c:	e1a0a000 	mov	sl, r0
        2369a0:	e28d0008 	add	r0, sp, #8	; 0x8
        2369a4:	eb654ac1 	bl	1b894b0 <$TXClipFurther(Rect *, Region **)>
        2369a8:	e1a09000 	mov	r9, r0
        2369ac:	e28d0008 	add	r0, sp, #8	; 0x8
        2369b0:	eb645f65 	bl	1b4e74c <$EraseRect(Rect *)>
        2369b4:	e3390000 	teq	r9, #0	; 0x0
        2369b8:	0a00001c 	beq	236a30 <TXDisplay::DrawFrameText(long, Rect const *)+0x16c>
        2369bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2369c0:	e1a0000d 	mov	r0, sp
        2369c4:	e5958004 	ldr	r8, [r5, #4]	; fField4
        2369c8:	eb66e375 	bl	1bef7a4 <$GetPort(GrafPort **)>
        2369cc:	e59d0000 	ldr	r0, [sp]
        2369d0:	e5b06028 	ldr	r6, [r0, #40]!
        2369d4:	e5960000 	ldr	r0, [r6]
        2369d8:	e5900000 	ldr	r0, [r0]
        2369dc:	e1a00840 	mov	r0, r0, asr #16
        2369e0:	e330000c 	teq	r0, #12	; 0xc
        2369e4:	03a06000 	moveq	r6, #0	; 0x0
        2369e8:	e1a00005 	mov	r0, r5
        2369ec:	e3a01000 	mov	r1, #0	; 0x0
        2369f0:	ebffe83a 	bl	230ae0 <TXArray::Lock(unsigned char)>
        2369f4:	e1a07000 	mov	r7, r0
        2369f8:	e2588001 	subs	r8, r8, #1	; 0x1
        2369fc:	4a000006 	bmi	236a1c <TXDisplay::DrawFrameText(long, Rect const *)+0x158>
        236a00:	e1a02006 	mov	r2, r6
        236a04:	e1a01007 	mov	r1, r7
        236a08:	e1a00004 	mov	r0, r4
        236a0c:	eb655700 	bl	1b8c614 <TXDisplay::$DrawLineGroup(TXSectLines const &, Region **)>
        236a10:	e2877014 	add	r7, r7, #20	; 0x14
        236a14:	e2588001 	subs	r8, r8, #1	; 0x1
        236a18:	5afffff8 	bpl	236a00 <TXDisplay::DrawFrameText(long, Rect const *)+0x13c>
        236a1c:	e1a00005 	mov	r0, r5
        236a20:	ebffe8ce 	bl	230d60 <TXArray::Unlock(void)>
        236a24:	e1a0000a 	mov	r0, sl
        236a28:	eb6473eb 	bl	1b539dc <$SetClip(Region **)>
        236a2c:	e28dd004 	add	sp, sp, #4	; 0x4
        236a30:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        236a34:	e5900000 	ldr	r0, [r0]
        236a38:	e1a0100a 	mov	r1, sl
        236a3c:	eb654aa2 	bl	1b894cc <TXTempReferences::$Done(void *)>
        236a40:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        236a44:	e5900000 	ldr	r0, [r0]
        236a48:	e1a01005 	mov	r1, r5
        236a4c:	eb654a9e 	bl	1b894cc <TXTempReferences::$Done(void *)>
        236a50:	e1a00009 	mov	r0, r9
        236a54:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        236a58:	0c104d78 	ldceq	13, cr4, [r0], -#480
    */
}

/**
 * Symbol: TXDisplay::ScrollRect(Rect const &, long, long, Region **, unsigned char)
 * Address: 00236a5c
 */
TXDisplay::ScrollRect(Rect const &, long, long, Region **, unsigned char) {
    /*
        236a5c:	e1a0c00d 	mov	ip, sp
        236a60:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        236a64:	e24cb004 	sub	fp, ip, #4	; 0x4
        236a68:	e1a00002 	mov	r0, r2
        236a6c:	e1a02003 	mov	r2, r3
        236a70:	e59b3008 	ldr	r3, [fp, #8]	; fField8
        236a74:	e20330ff 	and	r3, r3, #255	; 0xff
        236a78:	e59bc004 	ldr	ip, [fp, #4]	; fField4
        236a7c:	e92d0008 	stmdb	sp!, {r3}
        236a80:	e1a0300c 	mov	r3, ip
        236a84:	e1a0c000 	mov	ip, r0
        236a88:	e1a00001 	mov	r0, r1
        236a8c:	e1a0100c 	mov	r1, ip
        236a90:	eb654a85 	bl	1b894ac <$TXScrollRect__FRC4RectlT2PP6RegionUc>
        236a94:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::UpdateScrolledArea(Region **, TXFrameEditInfo const &)
 * Address: 00236a98
 */
TXDisplay::UpdateScrolledArea(Region **, TXFrameEditInfo const &) {
    /*
        236a98:	e1a0c00d 	mov	ip, sp
        236a9c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        236aa0:	e24cb004 	sub	fp, ip, #4	; 0x4
        236aa4:	e1a05000 	mov	r5, r0
        236aa8:	e1a04001 	mov	r4, r1
        236aac:	e1a08002 	mov	r8, r2
        236ab0:	e24dd008 	sub	sp, sp, #8	; 0x8
        236ab4:	e5927000 	ldr	r7, [r2]
        236ab8:	e5911000 	ldr	r1, [r1]
        236abc:	e2811004 	add	r1, r1, #4	; 0x4
        236ac0:	e8911008 	ldmia	r1, {r3, ip}
        236ac4:	e88d1008 	stmia	sp, {r3, ip}
        236ac8:	e5940000 	ldr	r0, [r4]
        236acc:	e5900000 	ldr	r0, [r0]
        236ad0:	e1a00840 	mov	r0, r0, asr #16
        236ad4:	e330000c 	teq	r0, #12	; 0xc
        236ad8:	13a00000 	movne	r0, #0	; 0x0
        236adc:	03a00001 	moveq	r0, #1	; 0x1
        236ae0:	e20060ff 	and	r6, r0, #255	; 0xff
        236ae4:	e5980014 	ldr	r0, [r8, #20]	; fField20
        236ae8:	e3500000 	cmp	r0, #0	; 0x0
        236aec:	aa000016 	bge	236b4c <TXDisplay::UpdateScrolledArea(Region **, TXFrameEditInfo const &)+0xb4>
        236af0:	e24dd008 	sub	sp, sp, #8	; 0x8
        236af4:	e1a0200d 	mov	r2, sp
        236af8:	e1a01007 	mov	r1, r7
        236afc:	e5950008 	ldr	r0, [r5, #8]	; fField8
        236b00:	eb656322 	bl	1b8f790 <TXFrames::$GetTextBounds( const(long, Rect *))>
        236b04:	e1a01007 	mov	r1, r7
        236b08:	e5952014 	ldr	r2, [r5, #20]	; fField20
        236b0c:	e1a00002 	mov	r0, r2
        236b10:	e5922000 	ldr	r2, [r2]
        236b14:	e1a0e00f 	mov	lr, pc
        236b18:	e282f020 	add	pc, r2, #32	; 0x20
        236b1c:	e59d1000 	ldr	r1, [sp]
        236b20:	e0800841 	add	r0, r0, r1, asr #16
        236b24:	e5b81014 	ldr	r1, [r8, #20]!	; fField20
        236b28:	e0800001 	add	r0, r0, r1
        236b2c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        236b30:	e1500841 	cmp	r0, r1, asr #16
        236b34:	aa000003 	bge	236b48 <TXDisplay::UpdateScrolledArea(Region **, TXFrameEditInfo const &)+0xb0>
        236b38:	e5cd0009 	strb	r0, [sp, #9]
        236b3c:	e1a00440 	mov	r0, r0, asr #8
        236b40:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        236b44:	e3a06001 	mov	r6, #1	; 0x1
        236b48:	e28dd008 	add	sp, sp, #8	; 0x8
        236b4c:	e59f804c 	ldr	r8, [pc, #4c]	; 236ba0 <TXDisplay::UpdateScrolledArea(Region **, TXFrameEditInfo const &)+0x108>	; fField4
        236b50:	e3360000 	teq	r6, #0	; 0x0
        236b54:	1a000005 	bne	236b70 <TXDisplay::UpdateScrolledArea(Region **, TXFrameEditInfo const &)+0xd8>
        236b58:	e5980000 	ldr	r0, [r8]
        236b5c:	eb654a59 	bl	1b894c8 <TXTempReferences::$Get(void)>
        236b60:	e1a09000 	mov	r9, r0
        236b64:	eb646313 	bl	1b4f7b8 <$GetClip(Region **)>
        236b68:	e1a00004 	mov	r0, r4
        236b6c:	eb64739a 	bl	1b539dc <$SetClip(Region **)>
        236b70:	e1a0200d 	mov	r2, sp
        236b74:	e1a01007 	mov	r1, r7
        236b78:	e1a00005 	mov	r0, r5
        236b7c:	eb6556a5 	bl	1b8c618 <TXDisplay::$DrawFrameText(long, Rect const *)>
        236b80:	e3360000 	teq	r6, #0	; 0x0
        236b84:	1a000004 	bne	236b9c <TXDisplay::UpdateScrolledArea(Region **, TXFrameEditInfo const &)+0x104>
        236b88:	e1a00009 	mov	r0, r9
        236b8c:	eb647392 	bl	1b539dc <$SetClip(Region **)>
        236b90:	e1a01009 	mov	r1, r9
        236b94:	e5980000 	ldr	r0, [r8]
        236b98:	eb654a4b 	bl	1b894cc <TXTempReferences::$Done(void *)>
        236b9c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        236ba0:	0c104d78 	ldceq	13, cr4, [r0], -#480
    */
}

/**
 * Symbol: TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)
 * Address: 00236ba4
 */
TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long) {
    /*
        236ba4:	e1a0c00d 	mov	ip, sp
        236ba8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        236bac:	e24cb004 	sub	fp, ip, #4	; 0x4
        236bb0:	e1a04000 	mov	r4, r0
        236bb4:	e1a05001 	mov	r5, r1
        236bb8:	e1a08002 	mov	r8, r2
        236bbc:	e1a06003 	mov	r6, r3
        236bc0:	e24dd014 	sub	sp, sp, #20	; 0x14
        236bc4:	e591a000 	ldr	sl, [r1]
        236bc8:	e1a0200d 	mov	r2, sp
        236bcc:	e1a0100a 	mov	r1, sl
        236bd0:	e5903008 	ldr	r3, [r0, #8]	; fField8
        236bd4:	e1a00003 	mov	r0, r3
        236bd8:	e5933000 	ldr	r3, [r3]
        236bdc:	e1a0e00f 	mov	lr, pc
        236be0:	e283f010 	add	pc, r3, #16	; 0x10
        236be4:	e59d0000 	ldr	r0, [sp]
        236be8:	e0801008 	add	r1, r0, r8
        236bec:	e3560000 	cmp	r6, #0	; 0x0
        236bf0:	e58d1000 	str	r1, [sp]
        236bf4:	aa000004 	bge	236c0c <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0x68>
        236bf8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        236bfc:	e59d1000 	ldr	r1, [sp]
        236c00:	e0406001 	sub	r6, r0, r1
        236c04:	e3a07000 	mov	r7, #0	; 0x0
        236c08:	ea00000e 	b	236c48 <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0xa4>
        236c0c:	e5951010 	ldr	r1, [r5, #16]	; fField16
        236c10:	e595200c 	ldr	r2, [r5, #12]	; fField12
        236c14:	e0927001 	adds	r7, r2, r1
        236c18:	51a01007 	movpl	r1, r7
        236c1c:	42671000 	rsbmi	r1, r7, #0	; 0x0
        236c20:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        236c24:	e0420000 	sub	r0, r2, r0
        236c28:	e1510000 	cmp	r1, r0
        236c2c:	ba000005 	blt	236c48 <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0xa4>
        236c30:	e1a02008 	mov	r2, r8
        236c34:	e1a01005 	mov	r1, r5
        236c38:	e1a00004 	mov	r0, r4
        236c3c:	e3e03000 	mvn	r3, #0	; 0x0
        236c40:	eb655677 	bl	1b8c624 <TXDisplay::$FrameEndEdit(TXFrameEditInfo const &, long, long)>
        236c44:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        236c48:	e24dd008 	sub	sp, sp, #8	; 0x8
        236c4c:	e3a09000 	mov	r9, #0	; 0x0
        236c50:	e3370000 	teq	r7, #0	; 0x0
        236c54:	0a000044 	beq	236d6c <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0x1c8>
        236c58:	e28d1018 	add	r1, sp, #24	; 0x18
        236c5c:	e9311008 	ldmdb	r1!, {r3, ip}
        236c60:	e92d1008 	stmdb	sp!, {r3, ip}
        236c64:	e9311008 	ldmdb	r1!, {r3, ip}
        236c68:	e92d1008 	stmdb	sp!, {r3, ip}
        236c6c:	e0461007 	sub	r1, r6, r7
        236c70:	e59d0000 	ldr	r0, [sp]
        236c74:	e0810000 	add	r0, r1, r0
        236c78:	e58d0000 	str	r0, [sp]
        236c7c:	e59d1020 	ldr	r1, [sp, #32]	; fField32
        236c80:	e1510000 	cmp	r1, r0
        236c84:	ca000005 	bgt	236ca0 <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0xfc>
        236c88:	e1a02008 	mov	r2, r8
        236c8c:	e1a01005 	mov	r1, r5
        236c90:	e1a00004 	mov	r0, r4
        236c94:	e3e03000 	mvn	r3, #0	; 0x0
        236c98:	eb655661 	bl	1b8c624 <TXDisplay::$FrameEndEdit(TXFrameEditInfo const &, long, long)>
        236c9c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        236ca0:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        236ca4:	e59d1000 	ldr	r1, [sp]
        236ca8:	e1510000 	cmp	r1, r0
        236cac:	b59d0018 	ldrlt	r0, [sp, #24]	; fField24
        236cb0:	b58d0000 	strlt	r0, [sp]
        236cb4:	e24dd008 	sub	sp, sp, #8	; 0x8
        236cb8:	e1a0200d 	mov	r2, sp
        236cbc:	e28d1008 	add	r1, sp, #8	; 0x8
        236cc0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        236cc4:	eb000cc0 	bl	239fcc <TXFrames::AbsToDraw( const(TXLongRect const &, Rect *))>
        236cc8:	e59f0070 	ldr	r0, [pc, #70]	; 236d40 <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0x19c>
        236ccc:	e58d0030 	str	r0, [sp, #48]
        236cd0:	e5900000 	ldr	r0, [r0]
        236cd4:	eb6549fb 	bl	1b894c8 <TXTempReferences::$Get(void)>
        236cd8:	e1a08000 	mov	r8, r0
        236cdc:	e3570000 	cmp	r7, #0	; 0x0
        236ce0:	a3a03000 	movge	r3, #0	; 0x0
        236ce4:	b3a03001 	movlt	r3, #1	; 0x1
        236ce8:	e1a02008 	mov	r2, r8
        236cec:	e92d000c 	stmdb	sp!, {r2, r3}
        236cf0:	e1a03007 	mov	r3, r7
        236cf4:	e28d1008 	add	r1, sp, #8	; 0x8
        236cf8:	e1a00004 	mov	r0, r4
        236cfc:	e3a02000 	mov	r2, #0	; 0x0
        236d00:	eb655645 	bl	1b8c61c <TXDisplay::$ScrollRect(Rect const &, long, long, Region **, unsigned char)>
        236d04:	e28dd008 	add	sp, sp, #8	; 0x8
        236d08:	e3300000 	teq	r0, #0	; 0x0
        236d0c:	0a000011 	beq	236d58 <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0x1b4>
        236d10:	e3570000 	cmp	r7, #0	; 0x0
        236d14:	ba000004 	blt	236d2c <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0x188>
        236d18:	e5980000 	ldr	r0, [r8]
        236d1c:	e5901000 	ldr	r1, [r0]
        236d20:	e1a01841 	mov	r1, r1, asr #16
        236d24:	e331000c 	teq	r1, #12	; 0xc
        236d28:	0a000005 	beq	236d44 <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0x1a0>
        236d2c:	e1a02005 	mov	r2, r5
        236d30:	e1a01008 	mov	r1, r8
        236d34:	e1a00004 	mov	r0, r4
        236d38:	eb655638 	bl	1b8c620 <TXDisplay::$UpdateScrolledArea(Region **, TXFrameEditInfo const &)>
        236d3c:	ea000005 	b	236d58 <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0x1b4>
        236d40:	0c104d78 	ldceq	13, cr4, [r0], -#480
        236d44:	e28d1018 	add	r1, sp, #24	; 0x18
        236d48:	e2800004 	add	r0, r0, #4	; 0x4
        236d4c:	e8901008 	ldmia	r0, {r3, ip}
        236d50:	e8811008 	stmia	r1, {r3, ip}
        236d54:	e3a09001 	mov	r9, #1	; 0x1
        236d58:	e59d0030 	ldr	r0, [sp, #48]
        236d5c:	e5900000 	ldr	r0, [r0]
        236d60:	e1a01008 	mov	r1, r8
        236d64:	eb6549d8 	bl	1b894cc <TXTempReferences::$Done(void *)>
        236d68:	e28dd018 	add	sp, sp, #24	; 0x18
        236d6c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        236d70:	e0800006 	add	r0, r0, r6
        236d74:	e58d0010 	str	r0, [sp, #16]	; fField16
        236d78:	e24dd008 	sub	sp, sp, #8	; 0x8
        236d7c:	e1a0200d 	mov	r2, sp
        236d80:	e28d1010 	add	r1, sp, #16	; 0x10
        236d84:	e5940008 	ldr	r0, [r4, #8]	; fField8
        236d88:	eb000c8f 	bl	239fcc <TXFrames::AbsToDraw( const(TXLongRect const &, Rect *))>
        236d8c:	e3390000 	teq	r9, #0	; 0x0
        236d90:	0a000011 	beq	236ddc <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0x238>
        236d94:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        236d98:	e1a01841 	mov	r1, r1, asr #16
        236d9c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        236da0:	e1510840 	cmp	r1, r0, asr #16
        236da4:	da000003 	ble	236db8 <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0x214>
        236da8:	e59d000e 	ldr	r0, [sp, #14]
        236dac:	e5cd0005 	strb	r0, [sp, #5]
        236db0:	e1a00440 	mov	r0, r0, asr #8
        236db4:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        236db8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        236dbc:	e1a00840 	mov	r0, r0, asr #16
        236dc0:	e59d1000 	ldr	r1, [sp]
        236dc4:	e1500841 	cmp	r0, r1, asr #16
        236dc8:	aa000003 	bge	236ddc <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0x238>
        236dcc:	e59d000a 	ldr	r0, [sp, #10]
        236dd0:	e5cd0001 	strb	r0, [sp, #1]
        236dd4:	e1a00440 	mov	r0, r0, asr #8
        236dd8:	e5cd0000 	strb	r0, [sp]
        236ddc:	e1a0200d 	mov	r2, sp
        236de0:	e1a0100a 	mov	r1, sl
        236de4:	e1a00004 	mov	r0, r4
        236de8:	eb65560a 	bl	1b8c618 <TXDisplay::$DrawFrameText(long, Rect const *)>
        236dec:	e3300000 	teq	r0, #0	; 0x0
        236df0:	1a000005 	bne	236e0c <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0x268>
        236df4:	e3390000 	teq	r9, #0	; 0x0
        236df8:	0a000003 	beq	236e0c <TXDisplay::FrameEndEdit(TXFrameEditInfo const &, long, long)+0x268>
        236dfc:	e28d2008 	add	r2, sp, #8	; 0x8
        236e00:	e1a0100a 	mov	r1, sl
        236e04:	e1a00004 	mov	r0, r4
        236e08:	eb655602 	bl	1b8c618 <TXDisplay::$DrawFrameText(long, Rect const *)>
        236e0c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::EraseFrameBottom(long)
 * Address: 00236e10
 */
TXDisplay::EraseFrameBottom(long) {
    /*
        236e10:	e1a0c00d 	mov	ip, sp
        236e14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        236e18:	e24cb004 	sub	fp, ip, #4	; 0x4
        236e1c:	e1a04000 	mov	r4, r0
        236e20:	e1a05001 	mov	r5, r1
        236e24:	e24dd010 	sub	sp, sp, #16	; 0x10
        236e28:	e1a0200d 	mov	r2, sp
        236e2c:	e5903008 	ldr	r3, [r0, #8]	; fField8
        236e30:	e1a00003 	mov	r0, r3
        236e34:	e5933000 	ldr	r3, [r3]
        236e38:	e1a0e00f 	mov	lr, pc
        236e3c:	e283f010 	add	pc, r3, #16	; 0x10
        236e40:	e1a01005 	mov	r1, r5
        236e44:	e5942014 	ldr	r2, [r4, #20]	; fField20
        236e48:	e1a00002 	mov	r0, r2
        236e4c:	e5922000 	ldr	r2, [r2]
        236e50:	e1a0e00f 	mov	lr, pc
        236e54:	e282f020 	add	pc, r2, #32	; 0x20
        236e58:	e59d1000 	ldr	r1, [sp]
        236e5c:	e0800001 	add	r0, r0, r1
        236e60:	e58d0000 	str	r0, [sp]
        236e64:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        236e68:	e1310000 	teq	r1, r0
        236e6c:	0a000009 	beq	236e98 <TXDisplay::EraseFrameBottom(long)+0x88>
        236e70:	e24dd008 	sub	sp, sp, #8	; 0x8
        236e74:	e1a0200d 	mov	r2, sp
        236e78:	e28d1008 	add	r1, sp, #8	; 0x8
        236e7c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        236e80:	eb000c51 	bl	239fcc <TXFrames::AbsToDraw( const(TXLongRect const &, Rect *))>
        236e84:	e1a0200d 	mov	r2, sp
        236e88:	e1a01005 	mov	r1, r5
        236e8c:	e1a00004 	mov	r0, r4
        236e90:	eb6555e0 	bl	1b8c618 <TXDisplay::$DrawFrameText(long, Rect const *)>
        236e94:	e28dd008 	add	sp, sp, #8	; 0x8
        236e98:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::ScrollFrame(TXFrameEditInfo const &)
 * Address: 00236e9c
 */
TXDisplay::ScrollFrame(TXFrameEditInfo const &) {
    /*
        236e9c:	e1a0c00d 	mov	ip, sp
        236ea0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        236ea4:	e24cb004 	sub	fp, ip, #4	; 0x4
        236ea8:	e1a05000 	mov	r5, r0
        236eac:	e1a04001 	mov	r4, r1
        236eb0:	e24dd008 	sub	sp, sp, #8	; 0x8
        236eb4:	e591100c 	ldr	r1, [r1, #12]	; fField12
        236eb8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        236ebc:	e0816000 	add	r6, r1, r0
        236ec0:	e1a0200d 	mov	r2, sp
        236ec4:	e5950008 	ldr	r0, [r5, #8]	; fField8
        236ec8:	e5941000 	ldr	r1, [r4]
        236ecc:	eb65622f 	bl	1b8f790 <TXFrames::$GetTextBounds( const(long, Rect *))>
        236ed0:	e3560000 	cmp	r6, #0	; 0x0
        236ed4:	a1a00006 	movge	r0, r6
        236ed8:	b2660000 	rsblt	r0, r6, #0	; 0x0
        236edc:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        236ee0:	e1a01841 	mov	r1, r1, asr #16
        236ee4:	e59d2000 	ldr	r2, [sp]
        236ee8:	e0411842 	sub	r1, r1, r2, asr #16
        236eec:	e1500001 	cmp	r0, r1
        236ef0:	ba000004 	blt	236f08 <TXDisplay::ScrollFrame(TXFrameEditInfo const &)+0x6c>
        236ef4:	e1a00005 	mov	r0, r5
        236ef8:	e3a02000 	mov	r2, #0	; 0x0
        236efc:	e5941000 	ldr	r1, [r4]
        236f00:	eb6555c4 	bl	1b8c618 <TXDisplay::$DrawFrameText(long, Rect const *)>
        236f04:	ea00001a 	b	236f74 <TXDisplay::ScrollFrame(TXFrameEditInfo const &)+0xd8>
        236f08:	e59f8068 	ldr	r8, [pc, #68]	; 236f78 <TXDisplay::ScrollFrame(TXFrameEditInfo const &)+0xdc>
        236f0c:	e5980000 	ldr	r0, [r8]
        236f10:	eb65496c 	bl	1b894c8 <TXTempReferences::$Get(void)>
        236f14:	e1a07000 	mov	r7, r0
        236f18:	e3a03000 	mov	r3, #0	; 0x0
        236f1c:	e1a02000 	mov	r2, r0
        236f20:	e92d000c 	stmdb	sp!, {r2, r3}
        236f24:	e1a03006 	mov	r3, r6
        236f28:	e28d1008 	add	r1, sp, #8	; 0x8
        236f2c:	e1a00005 	mov	r0, r5
        236f30:	e3a02000 	mov	r2, #0	; 0x0
        236f34:	eb6555b8 	bl	1b8c61c <TXDisplay::$ScrollRect(Rect const &, long, long, Region **, unsigned char)>
        236f38:	e28dd008 	add	sp, sp, #8	; 0x8
        236f3c:	e3300000 	teq	r0, #0	; 0x0
        236f40:	0a000003 	beq	236f54 <TXDisplay::ScrollFrame(TXFrameEditInfo const &)+0xb8>
        236f44:	e1a02004 	mov	r2, r4
        236f48:	e1a01007 	mov	r1, r7
        236f4c:	e1a00005 	mov	r0, r5
        236f50:	eb6555b2 	bl	1b8c620 <TXDisplay::$UpdateScrolledArea(Region **, TXFrameEditInfo const &)>
        236f54:	e1a01007 	mov	r1, r7
        236f58:	e5980000 	ldr	r0, [r8]
        236f5c:	eb65495a 	bl	1b894cc <TXTempReferences::$Done(void *)>
        236f60:	e5940014 	ldr	r0, [r4, #20]	; fField20
        236f64:	e3500000 	cmp	r0, #0	; 0x0
        236f68:	c1a00005 	movgt	r0, r5
        236f6c:	c5941000 	ldrgt	r1, [r4]
        236f70:	cb6555ac 	blgt	1b8c628 <TXDisplay::$EraseFrameBottom(long)>
        236f74:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        236f78:	0c104d78 	ldceq	13, cr4, [r0], -#480
    */
}

/**
 * Symbol: TXDisplay::UpdateOverflowLines(TXFrameEditInfo const &)
 * Address: 00236f7c
 */
TXDisplay::UpdateOverflowLines(TXFrameEditInfo const &) {
    /*
        236f7c:	e1a0c00d 	mov	ip, sp
        236f80:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        236f84:	e24cb004 	sub	fp, ip, #4	; 0x4
        236f88:	e1a05000 	mov	r5, r0
        236f8c:	e1a04001 	mov	r4, r1
        236f90:	e591100c 	ldr	r1, [r1, #12]	; fField12
        236f94:	e5940010 	ldr	r0, [r4, #16]	; fField16
        236f98:	e0910000 	adds	r0, r1, r0
        236f9c:	1a000002 	bne	236fac <TXDisplay::UpdateOverflowLines(TXFrameEditInfo const &)+0x30>
        236fa0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        236fa4:	e3500000 	cmp	r0, #0	; 0x0
        236fa8:	da000003 	ble	236fbc <TXDisplay::UpdateOverflowLines(TXFrameEditInfo const &)+0x40>
        236fac:	e1a00005 	mov	r0, r5
        236fb0:	e5941000 	ldr	r1, [r4]
        236fb4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        236fb8:	ea65559a 	b	1b8c628 <TXDisplay::$EraseFrameBottom(long)>
        236fbc:	e5952014 	ldr	r2, [r5, #20]	; fField20
        236fc0:	e1a00002 	mov	r0, r2
        236fc4:	e5941000 	ldr	r1, [r4]
        236fc8:	e5922000 	ldr	r2, [r2]
        236fcc:	e1a0e00f 	mov	lr, pc
        236fd0:	e282f020 	add	pc, r2, #32	; 0x20
        236fd4:	e5941014 	ldr	r1, [r4, #20]	; fField20
        236fd8:	e0802001 	add	r2, r0, r1
        236fdc:	e1a01004 	mov	r1, r4
        236fe0:	e1a00005 	mov	r0, r5
        236fe4:	e3e03000 	mvn	r3, #0	; 0x0
        236fe8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        236fec:	ea65558c 	b	1b8c624 <TXDisplay::$FrameEndEdit(TXFrameEditInfo const &, long, long)>
    */
}

/**
 * Symbol: TXDisplay::DoLineLayout(long)
 * Address: 00236ff0
 */
TXDisplay::DoLineLayout(long) {
    /*
        236ff0:	e1a0c00d 	mov	ip, sp
        236ff4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        236ff8:	e24cb004 	sub	fp, ip, #4	; 0x4
        236ffc:	e1a04000 	mov	r4, r0
        237000:	e1a05001 	mov	r5, r1
        237004:	e24dd010 	sub	sp, sp, #16	; 0x10
        237008:	e5900010 	ldr	r0, [r0, #16]	; fField16
        23700c:	e1a0200d 	mov	r2, sp
        237010:	eb655594 	bl	1b8c668 <TXFormatter::$GetLineRange( const(long, TXOffsetRange *))>
        237014:	e1a01005 	mov	r1, r5
        237018:	e5942008 	ldr	r2, [r4, #8]	; fField8
        23701c:	e1a00002 	mov	r0, r2
        237020:	e5922000 	ldr	r2, [r2]
        237024:	e1a0e00f 	mov	lr, pc
        237028:	e282f02c 	add	pc, r2, #44	; 0x2c
        23702c:	e1a03000 	mov	r3, r0
        237030:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        237034:	e59d1000 	ldr	r1, [sp]
        237038:	e0402001 	sub	r2, r0, r1
        23703c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        237040:	eb656a1d 	bl	1b918bc <TXLine::$DoLineLayout(long, long, long)>
        237044:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)
 * Address: 00237048
 */
TXDisplay::PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *) {
    /*
        237048:	e1a0c00d 	mov	ip, sp
        23704c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        237050:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        237054:	e24cb014 	sub	fp, ip, #20	; 0x14
        237058:	e1a05000 	mov	r5, r0
        23705c:	e1a04002 	mov	r4, r2
        237060:	e1a00003 	mov	r0, r3
        237064:	e59b3014 	ldr	r3, [fp, #20]	; fField20
        237068:	e92d0008 	stmdb	sp!, {r3}
        23706c:	e1a03000 	mov	r3, r0
        237070:	e1a00005 	mov	r0, r5
        237074:	e3a02000 	mov	r2, #0	; 0x0
        237078:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        23707c:	eb655570 	bl	1b8c644 <$PointToLine__9TXDisplayCF5PointP13TXOffsetRangePUcT3>
        237080:	e28dd004 	add	sp, sp, #4	; 0x4
        237084:	e1b06000 	movs	r6, r0
        237088:	e3a08000 	mov	r8, #0	; 0x0
        23708c:	43e00000 	mvnmi	r0, #0	; 0x0
        237090:	45840000 	strmi	r0, [r4]
        237094:	41a00008 	movmi	r0, r8
        237098:	491ba9f0 	ldmmidb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        23709c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2370a0:	e1a0200d 	mov	r2, sp
        2370a4:	e1a01006 	mov	r1, r6
        2370a8:	e5950008 	ldr	r0, [r5, #8]	; fField8
        2370ac:	eb6561bf 	bl	1b8f7b0 <TXFrames::$GetLineBounds( const(long, Rect *))>
        2370b0:	e5950010 	ldr	r0, [r5, #16]	; fField16
        2370b4:	e2847008 	add	r7, r4, #8	; 0x8
        2370b8:	e590102c 	ldr	r1, [r0, #44]
        2370bc:	e1310006 	teq	r1, r6
        2370c0:	1a00000e 	bne	237100 <TXDisplay::PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)+0xb8>
        2370c4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2370c8:	e1a01841 	mov	r1, r1, asr #16
        2370cc:	e59b2008 	ldr	r2, [fp, #8]	; fField8
        2370d0:	e1510842 	cmp	r1, r2, asr #16
        2370d4:	aa000009 	bge	237100 <TXDisplay::PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)+0xb8>
        2370d8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2370dc:	e1a01006 	mov	r1, r6
        2370e0:	eb653c8a 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        2370e4:	e3a01001 	mov	r1, #1	; 0x1
        2370e8:	e5840000 	str	r0, [r4]
        2370ec:	e5c41004 	strb	r1, [r4, #4]	; fField4
        2370f0:	e1a01004 	mov	r1, r4
        2370f4:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2370f8:	eb6565d8 	bl	1b90860 <TXHilite::$AdjustCharOffset(TXOffset *)>
        2370fc:	ea000008 	b	237124 <TXDisplay::PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)+0xdc>
        237100:	e3360000 	teq	r6, #0	; 0x0
        237104:	1a000010 	bne	23714c <TXDisplay::PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)+0x104>
        237108:	e59b0008 	ldr	r0, [fp, #8]	; fField8
        23710c:	e1a00840 	mov	r0, r0, asr #16
        237110:	e59d1000 	ldr	r1, [sp]
        237114:	e1500841 	cmp	r0, r1, asr #16
        237118:	aa00000b 	bge	23714c <TXDisplay::PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)+0x104>
        23711c:	e5848000 	str	r8, [r4]
        237120:	e5c48004 	strb	r8, [r4, #4]	; fField4
        237124:	e8941008 	ldmia	r4, {r3, ip}
        237128:	e8871008 	stmia	r7, {r3, ip}
        23712c:	e5b5000c 	ldr	r0, [r5, #12]!	; fField12
        237130:	e8940006 	ldmia	r4, {r1, r2}
        237134:	e5b0300c 	ldr	r3, [r0, #12]!	; fField12
        237138:	e1a00003 	mov	r0, r3
        23713c:	e5933000 	ldr	r3, [r3]
        237140:	e1a0e00f 	mov	lr, pc
        237144:	e283f00c 	add	pc, r3, #12	; 0xc
        237148:	ea000009 	b	237174 <TXDisplay::PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)+0x12c>
        23714c:	e1a01006 	mov	r1, r6
        237150:	e1a00005 	mov	r0, r5
        237154:	eb655536 	bl	1b8c634 <TXDisplay::$DoLineLayout(long)>
        237158:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        23715c:	e59d0000 	ldr	r0, [sp]
        237160:	e0410000 	sub	r0, r1, r0
        237164:	e1a01800 	mov	r1, r0, lsl #16
        237168:	e1a02004 	mov	r2, r4
        23716c:	e5b50018 	ldr	r0, [r5, #24]!	; fField24
        237170:	eb6569df 	bl	1b918f4 <TXLine::$PixelToCharacter(long, TXOffsetRange *)>
        237174:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::CharToPoint(TXOffset, TXLongPoint *, int *, int *)
 * Address: 00237178
 */
TXDisplay::CharToPoint(TXOffset, TXLongPoint *, int *, int *) {
    /*
        237178:	e1a0c00d 	mov	ip, sp
        23717c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        237180:	e24cb004 	sub	fp, ip, #4	; 0x4
        237184:	e1a06001 	mov	r6, r1
        237188:	e1a07002 	mov	r7, r2
        23718c:	e1a04000 	mov	r4, r0
        237190:	e1a05003 	mov	r5, r3
        237194:	e99b0600 	ldmib	fp, {r9, sl}
        237198:	e24dd010 	sub	sp, sp, #16	; 0x10
        23719c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2371a0:	e1a0100d 	mov	r1, sp
        2371a4:	eb6565b4 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        2371a8:	e33a0000 	teq	sl, #0	; 0x0
        2371ac:	059d0000 	ldreq	r0, [sp]
        2371b0:	059d1008 	ldreq	r1, [sp, #8]	; fField8
        2371b4:	01310000 	teqeq	r1, r0
        2371b8:	059d0000 	ldreq	r0, [sp]
        2371bc:	01360000 	teqeq	r6, r0
        2371c0:	e24dd010 	sub	sp, sp, #16	; 0x10
        2371c4:	1a00000d 	bne	237200 <TXDisplay::CharToPoint(TXOffset, TXLongPoint *, int *, int *)+0x88>
        2371c8:	e1a0100d 	mov	r1, sp
        2371cc:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        2371d0:	eb6569b1 	bl	1b9189c <TXHilite::$GetCaretRect(TXLongRect *)>
        2371d4:	e59d0000 	ldr	r0, [sp]
        2371d8:	e5850000 	str	r0, [r5]
        2371dc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2371e0:	e3390000 	teq	r9, #0	; 0x0
        2371e4:	e5a50004 	str	r0, [r5, #4]!	; fField4
        2371e8:	0a00002a 	beq	237298 <TXDisplay::CharToPoint(TXOffset, TXLongPoint *, int *, int *)+0x120>
        2371ec:	e59d0000 	ldr	r0, [sp]
        2371f0:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2371f4:	e0410000 	sub	r0, r1, r0
        2371f8:	e5890000 	str	r0, [r9]
        2371fc:	ea000025 	b	237298 <TXDisplay::CharToPoint(TXOffset, TXLongPoint *, int *, int *)+0x120>
        237200:	e1a01006 	mov	r1, r6
        237204:	e1a02007 	mov	r2, r7
        237208:	e5940010 	ldr	r0, [r4, #16]	; fField16
        23720c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        237210:	eb653c46 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        237214:	e1a08000 	mov	r8, r0
        237218:	e1a0200d 	mov	r2, sp
        23721c:	e1a01008 	mov	r1, r8
        237220:	e5940008 	ldr	r0, [r4, #8]	; fField8
        237224:	eb656160 	bl	1b8f7ac <TXFrames::$GetLineBounds( const(long, TXLongRect *))>
        237228:	e1a01008 	mov	r1, r8
        23722c:	e1a00004 	mov	r0, r4
        237230:	eb6554ff 	bl	1b8c634 <TXDisplay::$DoLineLayout(long)>
        237234:	e59d0000 	ldr	r0, [sp]
        237238:	e5850000 	str	r0, [r5]
        23723c:	e1a01006 	mov	r1, r6
        237240:	e1a02007 	mov	r2, r7
        237244:	e5940018 	ldr	r0, [r4, #24]	; fField24
        237248:	eb6569a5 	bl	1b918e4 <TXLine::$CharacterToPixel(TXOffset)>
        23724c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        237250:	e0800001 	add	r0, r0, r1
        237254:	e3390000 	teq	r9, #0	; 0x0
        237258:	e5a50004 	str	r0, [r5, #4]!	; fField4
        23725c:	0a000003 	beq	237270 <TXDisplay::CharToPoint(TXOffset, TXLongPoint *, int *, int *)+0xf8>
        237260:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        237264:	e59d1000 	ldr	r1, [sp]
        237268:	e0400001 	sub	r0, r0, r1
        23726c:	e5890000 	str	r0, [r9]
        237270:	e33a0000 	teq	sl, #0	; 0x0
        237274:	0a000007 	beq	237298 <TXDisplay::CharToPoint(TXOffset, TXLongPoint *, int *, int *)+0x120>
        237278:	e24dd008 	sub	sp, sp, #8	; 0x8
        23727c:	e1a0200d 	mov	r2, sp
        237280:	e1a01008 	mov	r1, r8
        237284:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        237288:	eb655910 	bl	1b8d6d0 <TXLinesHeights::$GetLineHeightInfo( const(long, TXLineHeightInfo *))>
        23728c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        237290:	e58a0000 	str	r0, [sl]
        237294:	e28dd008 	add	sp, sp, #8	; 0x8
        237298:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::CharToPoint(TXOffset, int *, int *)
 * Address: 0023729c
 */
TXDisplay::CharToPoint(TXOffset, int *, int *) {
    /*
        23729c:	e1a0c00d 	mov	ip, sp
        2372a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2372a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2372a8:	e1a0e002 	mov	lr, r2
        2372ac:	e1a0c003 	mov	ip, r3
        2372b0:	e1a05000 	mov	r5, r0
        2372b4:	e1a04001 	mov	r4, r1
        2372b8:	e99b000c 	ldmib	fp, {r2, r3}
        2372bc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2372c0:	e92d000c 	stmdb	sp!, {r2, r3}
        2372c4:	e28d3008 	add	r3, sp, #8	; 0x8
        2372c8:	e1a00001 	mov	r0, r1
        2372cc:	e1a0100e 	mov	r1, lr
        2372d0:	e1a0200c 	mov	r2, ip
        2372d4:	eb6554d8 	bl	1b8c63c <TXDisplay::$CharToPoint(TXOffset, TXLongPoint *, int *, int *)>
        2372d8:	e28dd008 	add	sp, sp, #8	; 0x8
        2372dc:	e1a0200d 	mov	r2, sp
        2372e0:	e1a00005 	mov	r0, r5
        2372e4:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
        2372e8:	eb000b6f 	bl	23a0ac <TXFrames::AbsToDraw( const(TXLongPoint const &))>
        2372ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PointToLine__9TXDisplayCF5PointP13TXOffsetRangePUcT3
 * Address: 002372f0
 */
void TXDisplay::PointToLine() {
    /*
        2372f0:	e1a0c00d 	mov	ip, sp
        2372f4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2372f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2372fc:	e1a05000 	mov	r5, r0
        237300:	e1a04002 	mov	r4, r2
        237304:	e1a02003 	mov	r2, r3
        237308:	e59b3004 	ldr	r3, [fp, #4]	; fField4
        23730c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        237310:	eb656124 	bl	1b8f7a8 <$PointToLine__8TXFramesCF5PointPUcT2>
        237314:	e1a06000 	mov	r6, r0
        237318:	e3340000 	teq	r4, #0	; 0x0
        23731c:	0a000005 	beq	237338 <PointToLine__9TXDisplayCF5PointP13TXOffsetRangePUcT3+0x48>
        237320:	e3560000 	cmp	r6, #0	; 0x0
        237324:	ba000003 	blt	237338 <PointToLine__9TXDisplayCF5PointP13TXOffsetRangePUcT3+0x48>
        237328:	e1a02004 	mov	r2, r4
        23732c:	e1a01006 	mov	r1, r6
        237330:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
        237334:	eb6554cb 	bl	1b8c668 <TXFormatter::$GetLineRange( const(long, TXOffsetRange *))>
        237338:	e1a00006 	mov	r0, r6
        23733c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::GetLineHilite(long, TXOffsetRange, TXLineHilite *, unsigned char)
 * Address: 00237340
 */
TXDisplay::GetLineHilite(long, TXOffsetRange, TXLineHilite *, unsigned char) {
    /*
        237340:	e1a0c00d 	mov	ip, sp
        237344:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        237348:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23734c:	e24cb014 	sub	fp, ip, #20	; 0x14
        237350:	e1a04000 	mov	r4, r0
        237354:	e59b0020 	ldr	r0, [fp, #32]	; fField32
        237358:	e20050ff 	and	r5, r0, #255	; 0xff
        23735c:	e1a00004 	mov	r0, r4
        237360:	e59b601c 	ldr	r6, [fp, #28]	; fField28
        237364:	eb6554b2 	bl	1b8c634 <TXDisplay::$DoLineLayout(long)>
        237368:	e1a03005 	mov	r3, r5
        23736c:	e1a02006 	mov	r2, r6
        237370:	e92d000c 	stmdb	sp!, {r2, r3}
        237374:	e28b101c 	add	r1, fp, #28	; 0x1c
        237378:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        23737c:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        237380:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        237384:	e8bd000e 	ldmia	sp!, {r1, r2, r3}
        237388:	eb656957 	bl	1b918ec <TXLine::$GetLineHilite(TXOffsetRange, TXLineHilite *, unsigned char)>
        23738c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::__ct(void)
 * Address: 00237390
 */
TXDisplay::TXDisplay(void) {
    /*
        237390:	e1a0c00d 	mov	ip, sp
        237394:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        237398:	e24cb004 	sub	fp, ip, #4	; 0x4
        23739c:	e1b04000 	movs	r4, r0
        2373a0:	1a000003 	bne	2373b4 <TXDisplay::__ct(void)+0x24>
        2373a4:	e3a00024 	mov	r0, #36	; 0x24
        2373a8:	eb665ce2 	bl	1bce738 <$__nw(unsigned int)>
        2373ac:	e1b04000 	movs	r4, r0
        2373b0:	0a00000b 	beq	2373e4 <TXDisplay::__ct(void)+0x54>
        2373b4:	e59f0030 	ldr	r0, [pc, #30]	; 2373ec <TXDisplay::__ct(void)+0x5c>	; fField30
        2373b8:	e5840000 	str	r0, [r4]
        2373bc:	e3a00000 	mov	r0, #0	; 0x0
        2373c0:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        2373c4:	eb64693f 	bl	1b518c8 <$NewRgn(void)>
        2373c8:	e3a03000 	mov	r3, #0	; 0x0
        2373cc:	e5840020 	str	r0, [r4, #32]	; fField32
        2373d0:	e92d0008 	stmdb	sp!, {r3}
        2373d4:	e3a02000 	mov	r2, #0	; 0x0
        2373d8:	e3a01000 	mov	r1, #0	; 0x0
        2373dc:	eb647589 	bl	1b54a08 <$SetRectRgn__FPP6RegionlN32>
        2373e0:	e28dd004 	add	sp, sp, #4	; 0x4
        2373e4:	e1a00004 	mov	r0, r4
        2373e8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2373ec:	000213c8 	andeq	r1, r2, r8, asr #7
    */
}

/**
 * Symbol: TXDisplay::__dt(void)
 * Address: 002373f0
 */
TXDisplay::~TXDisplay(void) {
    /*
        2373f0:	e1a0c00d 	mov	ip, sp
        2373f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2373f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2373fc:	e1a04000 	mov	r4, r0
        237400:	e1a05001 	mov	r5, r1
        237404:	e59f004c 	ldr	r0, [pc, #4c]	; 237458 <TXDisplay::__dt(void)+0x68>	; fField4
        237408:	e5840000 	str	r0, [r4]
        23740c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        237410:	e3300000 	teq	r0, #0	; 0x0
        237414:	0a000002 	beq	237424 <TXDisplay::__dt(void)+0x34>
        237418:	e3a01001 	mov	r1, #1	; 0x1
        23741c:	e1a0e00f 	mov	lr, pc
        237420:	e590f000 	ldr	pc, [r0]
        237424:	e5940018 	ldr	r0, [r4, #24]	; fField24
        237428:	e3300000 	teq	r0, #0	; 0x0
        23742c:	0a000002 	beq	23743c <TXDisplay::__dt(void)+0x4c>
        237430:	e3a01001 	mov	r1, #1	; 0x1
        237434:	e1a0e00f 	mov	lr, pc
        237438:	e590f000 	ldr	pc, [r0]
        23743c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        237440:	eb6458a6 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        237444:	e3150001 	tst	r5, #1	; 0x1
        237448:	11a00004 	movne	r0, r4
        23744c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        237450:	1a6658a2 	bne	1bcd6e0 <$__dl(void *)>
        237454:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        237458:	000213c8 	andeq	r1, r2, r8, asr #7
    */
}

/**
 * Symbol: TXDisplay::SetHandlers(TXDisplayHandlers *)
 * Address: 0023745c
 */
TXDisplay::SetHandlers(TXDisplayHandlers *) {
    /*
        23745c:	e1a0c00d 	mov	ip, sp
        237460:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        237464:	e24cb004 	sub	fp, ip, #4	; 0x4
        237468:	e1a05000 	mov	r5, r0
        23746c:	e1a04001 	mov	r4, r1
        237470:	e5910000 	ldr	r0, [r1]
        237474:	e5850004 	str	r0, [r5, #4]	; fField4
        237478:	e5910004 	ldr	r0, [r1, #4]	; fField4
        23747c:	e585000c 	str	r0, [r5, #12]	; fField12
        237480:	e5910008 	ldr	r0, [r1, #8]	; fField8
        237484:	e5850010 	str	r0, [r5, #16]	; fField16
        237488:	e591000c 	ldr	r0, [r1, #12]	; fField12
        23748c:	e3300000 	teq	r0, #0	; 0x0
        237490:	1a000002 	bne	2374a0 <TXDisplay::SetHandlers(TXDisplayHandlers *)+0x44>
        237494:	e3a00000 	mov	r0, #0	; 0x0
        237498:	eb6560cd 	bl	1b8f7d4 <TXMonoFrame::$__ct(void)>
        23749c:	e584000c 	str	r0, [r4, #12]	; fField12
        2374a0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2374a4:	e5850008 	str	r0, [r5, #8]	; fField8
        2374a8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2374ac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2374b0:	e5850014 	str	r0, [r5, #20]	; fField20
        2374b4:	e3a00000 	mov	r0, #0	; 0x0
        2374b8:	e5b41004 	ldr	r1, [r4, #4]!	; fField4
        2374bc:	e5b4200c 	ldr	r2, [r4, #12]!	; fField12
        2374c0:	eb6568f8 	bl	1b918a8 <TXLine::$__ct(TXStyledText *, TXRulerRange *)>
        2374c4:	e5a50018 	str	r0, [r5, #24]!	; fField24
        2374c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplay::FreeData(void)
 * Address: 002374cc
 */
TXDisplay::FreeData(void) {
    /*
        2374cc:	e1a0c00d 	mov	ip, sp
        2374d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2374d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2374d8:	e1a04000 	mov	r4, r0
        2374dc:	eb65544a 	bl	1b8c60c <TXDisplay::$InvalidDraw(void)>
        2374e0:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2374e4:	e5901000 	ldr	r1, [r0]
        2374e8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2374ec:	e281f004 	add	pc, r1, #4	; 0x4
    */
}

/**
 * Symbol: TXDisplay::DisableDrawing(void)
 * Address: 002374f0
 */
TXDisplay::DisableDrawing(void) {
    /*
        2374f0:	e59f101c 	ldr	r1, [pc, #1c]	; 237514 <TXDisplay::DisableDrawing(void)+0x24>
        2374f4:	e5912008 	ldr	r2, [r1, #8]	; fField8
        2374f8:	e2422001 	sub	r2, r2, #1	; 0x1
        2374fc:	e5a12008 	str	r2, [r1, #8]!	; fField8
        237500:	e5900004 	ldr	r0, [r0, #4]	; fField4
        237504:	e590101c 	ldr	r1, [r0, #28]	; fField28
        237508:	e2411001 	sub	r1, r1, #1	; 0x1
        23750c:	e5a0101c 	str	r1, [r0, #28]!	; fField28
        237510:	e1a0f00e 	mov	pc, lr
        237514:	0c104d8c 	ldceq	13, cr4, [r0], -#560
    */
}

/**
 * Symbol: TXDisplay::EnableDrawing(void)
 * Address: 00237518
 */
TXDisplay::EnableDrawing(void) {
    /*
        237518:	e59f101c 	ldr	r1, [pc, #1c]	; 23753c <TXDisplay::EnableDrawing(void)+0x24>
        23751c:	e5912008 	ldr	r2, [r1, #8]	; fField8
        237520:	e2822001 	add	r2, r2, #1	; 0x1
        237524:	e5a12008 	str	r2, [r1, #8]!	; fField8
        237528:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23752c:	e590101c 	ldr	r1, [r0, #28]	; fField28
        237530:	e2811001 	add	r1, r1, #1	; 0x1
        237534:	e5a0101c 	str	r1, [r0, #28]!	; fField28
        237538:	e1a0f00e 	mov	pc, lr
        23753c:	0c104d8c 	ldceq	13, cr4, [r0], -#560
    */
}

