#include "include/TXRulerIconsBar.h"

/**
 * Symbol: TXRulerIconsBar::__ct(void)
 * Address: 00243c38
 */
TXRulerIconsBar::TXRulerIconsBar(void) {
    /*
        243c38:	e1a0c00d 	mov	ip, sp
        243c3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        243c40:	e24cb004 	sub	fp, ip, #4	; 0x4
        243c44:	e1b04000 	movs	r4, r0
        243c48:	1a000003 	bne	243c5c <TXRulerIconsBar::__ct(void)+0x24>
        243c4c:	e3a00084 	mov	r0, #132	; 0x84
        243c50:	eb662ab8 	bl	1bce738 <$__nw(unsigned int)>
        243c54:	e1b04000 	movs	r4, r0
        243c58:	0a00000b 	beq	243c8c <TXRulerIconsBar::__ct(void)+0x54>
        243c5c:	e1a00004 	mov	r0, r4
        243c60:	eb654fe2 	bl	1b97bf0 <TXRulerBar::$__ct(void)>
        243c64:	e2840014 	add	r0, r4, #20	; 0x14
        243c68:	eb6553fe 	bl	1b98c68 <TXRulerBitMapCluster::$__ct(void)>
        243c6c:	e2840038 	add	r0, r4, #56	; 0x38
        243c70:	eb6553fc 	bl	1b98c68 <TXRulerBitMapCluster::$__ct(void)>
        243c74:	e284005c 	add	r0, r4, #92	; 0x5c
        243c78:	eb6553fa 	bl	1b98c68 <TXRulerBitMapCluster::$__ct(void)>
        243c7c:	e59f0010 	ldr	r0, [pc, #10]	; 243c94 <TXRulerIconsBar::__ct(void)+0x5c>
        243c80:	e584005c 	str	r0, [r4, #92]
        243c84:	e59f000c 	ldr	r0, [pc, #c]	; 243c98 <TXRulerIconsBar::__ct(void)+0x60>
        243c88:	e5840000 	str	r0, [r4]
        243c8c:	e1a00004 	mov	r0, r4
        243c90:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        243c94:	0001f008 	andeq	pc, r1, r8
        243c98:	0001e384 	andeq	lr, r1, r4, lsl #7
    */
}

/**
 * Symbol: TXRulerIconsBar::IRulerIconsBar(Textension *, TXRuler *, TXRulerTabsBar *)
 * Address: 00243c9c
 */
TXRulerIconsBar::IRulerIconsBar(Textension *, TXRuler *, TXRulerTabsBar *) {
    /*
        243c9c:	e1a0c00d 	mov	ip, sp
        243ca0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        243ca4:	e24cb004 	sub	fp, ip, #4	; 0x4
        243ca8:	e1a04000 	mov	r4, r0
        243cac:	e1a05003 	mov	r5, r3
        243cb0:	eb654fcf 	bl	1b97bf4 <TXRulerBar::$IRulerBar(Textension *, TXRuler *)>
        243cb4:	e59f6060 	ldr	r6, [pc, #60]	; 243d1c <TXRulerIconsBar::IRulerIconsBar(Textension *, TXRuler *, TXRulerTabsBar *)+0x80>
        243cb8:	e596300c 	ldr	r3, [r6, #12]	; fField12
        243cbc:	e92d0008 	stmdb	sp!, {r3}
        243cc0:	e2840014 	add	r0, r4, #20	; 0x14
        243cc4:	e3a03004 	mov	r3, #4	; 0x4
        243cc8:	e3a02000 	mov	r2, #0	; 0x0
        243ccc:	e3a01000 	mov	r1, #0	; 0x0
        243cd0:	eb6553e5 	bl	1b98c6c <TXRulerBitMapCluster::$IRulerBitMapCluster(int, int, int, int)>
        243cd4:	e28dd004 	add	sp, sp, #4	; 0x4
        243cd8:	e5845080 	str	r5, [r4, #128]	; fField128
        243cdc:	e5b6300c 	ldr	r3, [r6, #12]!	; fField12
        243ce0:	e92d0008 	stmdb	sp!, {r3}
        243ce4:	e2840038 	add	r0, r4, #56	; 0x38
        243ce8:	e3a03004 	mov	r3, #4	; 0x4
        243cec:	e3a02008 	mov	r2, #8	; 0x8
        243cf0:	e3a01004 	mov	r1, #4	; 0x4
        243cf4:	eb6553dc 	bl	1b98c6c <TXRulerBitMapCluster::$IRulerBitMapCluster(int, int, int, int)>
        243cf8:	e28dd004 	add	sp, sp, #4	; 0x4
        243cfc:	e3a03000 	mov	r3, #0	; 0x0
        243d00:	e92d0008 	stmdb	sp!, {r3}
        243d04:	e284005c 	add	r0, r4, #92	; 0x5c
        243d08:	e3a03002 	mov	r3, #2	; 0x2
        243d0c:	e3a0200f 	mov	r2, #15	; 0xf
        243d10:	e3a0100f 	mov	r1, #15	; 0xf
        243d14:	eb6553d4 	bl	1b98c6c <TXRulerBitMapCluster::$IRulerBitMapCluster(int, int, int, int)>
        243d18:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        243d1c:	0c104e74 	ldceq	14, cr4, [r0], -#464
    */
}

/**
 * Symbol: TXRulerIconsBar::SetBounds(Rect const &)
 * Address: 00243d20
 */
TXRulerIconsBar::SetBounds(Rect const &) {
    /*
        243d20:	e1a0c00d 	mov	ip, sp
        243d24:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        243d28:	e24cb004 	sub	fp, ip, #4	; 0x4
        243d2c:	e1a04000 	mov	r4, r0
        243d30:	eb654fb0 	bl	1b97bf8 <TXRulerBar::$SetBounds(Rect const &)>
        243d34:	e24dd008 	sub	sp, sp, #8	; 0x8
        243d38:	e2843038 	add	r3, r4, #56	; 0x38
        243d3c:	e1a0a003 	mov	sl, r3
        243d40:	e1a0200d 	mov	r2, sp
        243d44:	e28d1004 	add	r1, sp, #4	; 0x4
        243d48:	e1a00003 	mov	r0, r3
        243d4c:	e5933000 	ldr	r3, [r3]
        243d50:	e1a0e00f 	mov	lr, pc
        243d54:	e283f004 	add	pc, r3, #4	; 0x4
        243d58:	e24dd008 	sub	sp, sp, #8	; 0x8
        243d5c:	e2843014 	add	r3, r4, #20	; 0x14
        243d60:	e1a09003 	mov	r9, r3
        243d64:	e1a0200d 	mov	r2, sp
        243d68:	e28d1004 	add	r1, sp, #4	; 0x4
        243d6c:	e1a00003 	mov	r0, r3
        243d70:	e5933000 	ldr	r3, [r3]
        243d74:	e1a0e00f 	mov	lr, pc
        243d78:	e283f004 	add	pc, r3, #4	; 0x4
        243d7c:	e24dd008 	sub	sp, sp, #8	; 0x8
        243d80:	e284305c 	add	r3, r4, #92	; 0x5c
        243d84:	e1a08003 	mov	r8, r3
        243d88:	e1a0200d 	mov	r2, sp
        243d8c:	e28d1004 	add	r1, sp, #4	; 0x4
        243d90:	e1a00003 	mov	r0, r3
        243d94:	e5933000 	ldr	r3, [r3]
        243d98:	e1a0e00f 	mov	lr, pc
        243d9c:	e283f004 	add	pc, r3, #4	; 0x4
        243da0:	e5940012 	ldr	r0, [r4, #18]	; fField18
        243da4:	e594700e 	ldr	r7, [r4, #14]	; fField14
        243da8:	e1a07847 	mov	r7, r7, asr #16
        243dac:	e0671840 	rsb	r1, r7, r0, asr #16
        243db0:	e59d0014 	ldr	r0, [sp, #20]
        243db4:	e0410000 	sub	r0, r1, r0
        243db8:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        243dbc:	e0400001 	sub	r0, r0, r1
        243dc0:	e59d1004 	ldr	r1, [sp, #4]
        243dc4:	e0401001 	sub	r1, r0, r1
        243dc8:	e3a00003 	mov	r0, #3	; 0x3
        243dcc:	eb65badb 	bl	1bb2940 <$__rt_sdiv>
        243dd0:	e1b05000 	movs	r5, r0
        243dd4:	43a05000 	movmi	r5, #0	; 0x0
        243dd8:	e594100c 	ldr	r1, [r4, #12]	; fField12
        243ddc:	e1a01841 	mov	r1, r1, asr #16
        243de0:	e59f6098 	ldr	r6, [pc, #98]	; 243e80 <TXRulerIconsBar::SetBounds(Rect const &)+0x160>
        243de4:	e5962008 	ldr	r2, [r6, #8]	; fField8
        243de8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        243dec:	e0420000 	sub	r0, r2, r0
        243df0:	e0800fa0 	add	r0, r0, r0, lsr #31
        243df4:	e08110c0 	add	r1, r1, r0, asr #1
        243df8:	e0872005 	add	r2, r7, r5
        243dfc:	e1a0000a 	mov	r0, sl
        243e00:	eb65539a 	bl	1b98c70 <TXRulerBitMapCluster::$SetTopLeft(int, int)>
        243e04:	e594100c 	ldr	r1, [r4, #12]	; fField12
        243e08:	e1a01841 	mov	r1, r1, asr #16
        243e0c:	e5960008 	ldr	r0, [r6, #8]	; fField8
        243e10:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        243e14:	e0400002 	sub	r0, r0, r2
        243e18:	e0800fa0 	add	r0, r0, r0, lsr #31
        243e1c:	e08110c0 	add	r1, r1, r0, asr #1
        243e20:	e5940012 	ldr	r0, [r4, #18]	; fField18
        243e24:	e0650840 	rsb	r0, r5, r0, asr #16
        243e28:	e59d200c 	ldr	r2, [sp, #12]	; fField12
        243e2c:	e0402002 	sub	r2, r0, r2
        243e30:	e1a00009 	mov	r0, r9
        243e34:	eb65538d 	bl	1b98c70 <TXRulerBitMapCluster::$SetTopLeft(int, int)>
        243e38:	e5941012 	ldr	r1, [r4, #18]	; fField18
        243e3c:	e594000e 	ldr	r0, [r4, #14]	; fField14
        243e40:	e1a00840 	mov	r0, r0, asr #16
        243e44:	e0602841 	rsb	r2, r0, r1, asr #16
        243e48:	e59d1004 	ldr	r1, [sp, #4]
        243e4c:	e0421001 	sub	r1, r2, r1
        243e50:	e0811fa1 	add	r1, r1, r1, lsr #31
        243e54:	e08020c1 	add	r2, r0, r1, asr #1
        243e58:	e594000c 	ldr	r0, [r4, #12]	; fField12
        243e5c:	e1a00840 	mov	r0, r0, asr #16
        243e60:	e5b63008 	ldr	r3, [r6, #8]!	; fField8
        243e64:	e59d1000 	ldr	r1, [sp]
        243e68:	e0431001 	sub	r1, r3, r1
        243e6c:	e0811fa1 	add	r1, r1, r1, lsr #31
        243e70:	e08010c1 	add	r1, r0, r1, asr #1
        243e74:	e1a00008 	mov	r0, r8
        243e78:	eb65537c 	bl	1b98c70 <TXRulerBitMapCluster::$SetTopLeft(int, int)>
        243e7c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        243e80:	0c104e74 	ldceq	14, cr4, [r0], -#464
    */
}

/**
 * Symbol: TXRulerIconsBar::Draw(void)
 * Address: 00243e84
 */
TXRulerIconsBar::Draw(void) {
    /*
        243e84:	e1a0c00d 	mov	ip, sp
        243e88:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        243e8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        243e90:	e1a04000 	mov	r4, r0
        243e94:	e24dd010 	sub	sp, sp, #16	; 0x10
        243e98:	e1a0000d 	mov	r0, sp
        243e9c:	eb642e4b 	bl	1b4f7d0 <$GetPenState(PenState *)>
        243ea0:	eb643a9f 	bl	1b52924 <$PenNormal(void)>
        243ea4:	e3a01002 	mov	r1, #2	; 0x2
        243ea8:	e3a00002 	mov	r0, #2	; 0x2
        243eac:	eb643a9d 	bl	1b52928 <$PenSize__FlT1>
        243eb0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        243eb4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        243eb8:	e1a00840 	mov	r0, r0, asr #16
        243ebc:	e0701841 	rsbs	r1, r0, r1, asr #16
        243ec0:	42811003 	addmi	r1, r1, #3	; 0x3
        243ec4:	e0805141 	add	r5, r0, r1, asr #2
        243ec8:	e594000e 	ldr	r0, [r4, #14]	; fField14
        243ecc:	e1a00840 	mov	r0, r0, asr #16
        243ed0:	e1a01005 	mov	r1, r5
        243ed4:	eb643679 	bl	1b518c0 <$MoveTo__FlT1>
        243ed8:	e5940012 	ldr	r0, [r4, #18]	; fField18
        243edc:	e1a00840 	mov	r0, r0, asr #16
        243ee0:	e1a01005 	mov	r1, r5
        243ee4:	eb643264 	bl	1b5087c <$LineTo__FlT1>
        243ee8:	e1a0000d 	mov	r0, sp
        243eec:	eb643ec1 	bl	1b539f8 <$SetPenState(PenState *)>
        243ef0:	e2842014 	add	r2, r4, #20	; 0x14
        243ef4:	e1a05002 	mov	r5, r2
        243ef8:	e1a00002 	mov	r0, r2
        243efc:	e5941008 	ldr	r1, [r4, #8]	; fField8
        243f00:	e1a0e00f 	mov	lr, pc
        243f04:	e592f000 	ldr	pc, [r2]
        243f08:	e24dd004 	sub	sp, sp, #4	; 0x4
        243f0c:	e1a0200d 	mov	r2, sp
        243f10:	e5943008 	ldr	r3, [r4, #8]	; fField8
        243f14:	e1a00003 	mov	r0, r3
        243f18:	e59f104c 	ldr	r1, [pc, #4c]	; 243f6c <TXRulerIconsBar::Draw(void)+0xe8>
        243f1c:	e5933000 	ldr	r3, [r3]
        243f20:	e1a0e00f 	mov	lr, pc
        243f24:	e283f02c 	add	pc, r3, #44	; 0x2c
        243f28:	e5dd1000 	ldrb	r1, [sp]
        243f2c:	e1a00004 	mov	r0, r4
        243f30:	eb65533d 	bl	1b98c2c <TXRulerIconsBar::$JustValueToBitMapIndex( const(char))>
        243f34:	e1a01000 	mov	r1, r0
        243f38:	e1a00005 	mov	r0, r5
        243f3c:	eb655750 	bl	1b99c84 <TXRulerBitMapCluster::$InvertBitMap( const(int))>
        243f40:	e2842038 	add	r2, r4, #56	; 0x38
        243f44:	e1a00002 	mov	r0, r2
        243f48:	e5941008 	ldr	r1, [r4, #8]	; fField8
        243f4c:	e1a0e00f 	mov	lr, pc
        243f50:	e592f000 	ldr	pc, [r2]
        243f54:	e284205c 	add	r2, r4, #92	; 0x5c
        243f58:	e1a00002 	mov	r0, r2
        243f5c:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
        243f60:	e1a0e00f 	mov	lr, pc
        243f64:	e592f000 	ldr	pc, [r2]
        243f68:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        243f6c:	6a757374 	bvs	1fa0d44 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x3904ec>
    */
}

/**
 * Symbol: TXRulerIconsBar::DoJustClick(int, TXAttrValues *, long *)
 * Address: 00243fa4
 */
TXRulerIconsBar::DoJustClick(int, TXAttrValues *, long *) {
    /*
        243fa4:	e1a0c00d 	mov	ip, sp
        243fa8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        243fac:	e24cb004 	sub	fp, ip, #4	; 0x4
        243fb0:	e1a00002 	mov	r0, r2
        243fb4:	e3a02000 	mov	r2, #0	; 0x0
        243fb8:	e5832000 	str	r2, [r3]
        243fbc:	e24dd004 	sub	sp, sp, #4	; 0x4
        243fc0:	e3a04001 	mov	r4, #1	; 0x1
        243fc4:	e3310000 	teq	r1, #0	; 0x0
        243fc8:	05cd4000 	streqb	r4, [sp]
        243fcc:	0a000006 	beq	243fec <TXRulerIconsBar::DoJustClick(int, TXAttrValues *, long *)+0x48>
        243fd0:	e3310001 	teq	r1, #1	; 0x1
        243fd4:	03a01004 	moveq	r1, #4	; 0x4
        243fd8:	0a000002 	beq	243fe8 <TXRulerIconsBar::DoJustClick(int, TXAttrValues *, long *)+0x44>
        243fdc:	e3310002 	teq	r1, #2	; 0x2
        243fe0:	03a01002 	moveq	r1, #2	; 0x2
        243fe4:	13a01008 	movne	r1, #8	; 0x8
        243fe8:	e5cd1000 	strb	r1, [sp]
        243fec:	e3a03000 	mov	r3, #0	; 0x0
        243ff0:	e92d0008 	stmdb	sp!, {r3}
        243ff4:	e28d2004 	add	r2, sp, #4	; 0x4
        243ff8:	e3a03001 	mov	r3, #1	; 0x1
        243ffc:	e59f1008 	ldr	r1, [pc, #8]	; 24400c <TXRulerIconsBar::DoJustClick(int, TXAttrValues *, long *)+0x68>	; fField8
        244000:	eb650cdf 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        244004:	e1a00004 	mov	r0, r4
        244008:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        24400c:	6a757374 	bvs	1fa0de4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x39058c>
    */
}

/**
 * Symbol: TXRulerIconsBar::DoTabsClick(TXPointingDevice *, int, TXAttrValues *, long *)
 * Address: 00244010
 */
TXRulerIconsBar::DoTabsClick(TXPointingDevice *, int, TXAttrValues *, long *) {
    /*
        244010:	e1a0c00d 	mov	ip, sp
        244014:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        244018:	e24cb004 	sub	fp, ip, #4	; 0x4
        24401c:	e1a04000 	mov	r4, r0
        244020:	e1a07001 	mov	r7, r1
        244024:	e1a05002 	mov	r5, r2
        244028:	e1a06003 	mov	r6, r3
        24402c:	e59ba004 	ldr	sl, [fp, #4]
        244030:	e24dd028 	sub	sp, sp, #40	; 0x28
        244034:	e0620182 	rsb	r0, r2, r2, lsl #3
        244038:	e59f9128 	ldr	r9, [pc, #128]	; 244168 <TXRulerIconsBar::DoTabsClick(TXPointingDevice *, int, TXAttrValues *, long *)+0x158>	; fField128
        24403c:	e5991000 	ldr	r1, [r9]
        244040:	e0810100 	add	r0, r1, r0, lsl #2
        244044:	e3320004 	teq	r2, #4	; 0x4
        244048:	e58d0000 	str	r0, [sp]
        24404c:	03a08000 	moveq	r8, #0	; 0x0
        244050:	0a000005 	beq	24406c <TXRulerIconsBar::DoTabsClick(TXPointingDevice *, int, TXAttrValues *, long *)+0x5c>
        244054:	e3350005 	teq	r5, #5	; 0x5
        244058:	03a08001 	moveq	r8, #1	; 0x1
        24405c:	0a000002 	beq	24406c <TXRulerIconsBar::DoTabsClick(TXPointingDevice *, int, TXAttrValues *, long *)+0x5c>
        244060:	e3350006 	teq	r5, #6	; 0x6
        244064:	03a080ff 	moveq	r8, #255	; 0xff
        244068:	13a08002 	movne	r8, #2	; 0x2
        24406c:	e28d100c 	add	r1, sp, #12	; 0xc
        244070:	e5940080 	ldr	r0, [r4, #128]	; fField128
        244074:	eb654ee0 	bl	1b97bfc <TXRulerBar::$GetBounds( const(Rect *))>
        244078:	e59d000e 	ldr	r0, [sp, #14]	; fField14
        24407c:	e5b91010 	ldr	r1, [r9, #16]!	; fField16
        244080:	e0800001 	add	r0, r0, r1
        244084:	e5cd000d 	strb	r0, [sp, #13]
        244088:	e1a00440 	mov	r0, r0, asr #8
        24408c:	e5cd000c 	strb	r0, [sp, #12]	; fField12
        244090:	e5940010 	ldr	r0, [r4, #16]	; fField16
        244094:	e1a00820 	mov	r0, r0, lsr #16
        244098:	e5cd0011 	strb	r0, [sp, #17]
        24409c:	e1a00440 	mov	r0, r0, asr #8
        2440a0:	e5cd0010 	strb	r0, [sp, #16]	; fField16
        2440a4:	e28d2004 	add	r2, sp, #4	; 0x4
        2440a8:	e1a09002 	mov	r9, r2
        2440ac:	e2840038 	add	r0, r4, #56	; 0x38
        2440b0:	e1a01005 	mov	r1, r5
        2440b4:	eb6552f0 	bl	1b98c7c <TXRulerBitMapCluster::$CalcDragBitMapRect( const(int, Rect *))>
        2440b8:	e3a03001 	mov	r3, #1	; 0x1
        2440bc:	e92d0008 	stmdb	sp!, {r3}
        2440c0:	e28d1004 	add	r1, sp, #4	; 0x4
        2440c4:	e1a00007 	mov	r0, r7
        2440c8:	e3a03000 	mov	r3, #0	; 0x0
        2440cc:	e3a02001 	mov	r2, #1	; 0x1
        2440d0:	ebfffdda 	bl	243840 <TXRulerUI::CheckUpdate(unsigned char)+0xe4>
        2440d4:	e28dd004 	add	sp, sp, #4	; 0x4
        2440d8:	e3a05000 	mov	r5, #0	; 0x0
        2440dc:	e3300000 	teq	r0, #0	; 0x0
        2440e0:	01a00005 	moveq	r0, r5
        2440e4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2440e8:	e59d201c 	ldr	r2, [sp, #28]
        2440ec:	e1a02842 	mov	r2, r2, asr #16
        2440f0:	e59d101e 	ldr	r1, [sp, #30]
        2440f4:	e1a01841 	mov	r1, r1, asr #16
        2440f8:	e1a00009 	mov	r0, r9
        2440fc:	eb6435f9 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        244100:	e1a01009 	mov	r1, r9
        244104:	e5940080 	ldr	r0, [r4, #128]	; fField128
        244108:	eb6552ce 	bl	1b98c48 <TXRulerTabsBar::$TabRectToTabValue( const(Rect const &))>
        24410c:	e3a01002 	mov	r1, #2	; 0x2
        244110:	e58a1000 	str	r1, [sl]
        244114:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        244118:	e1a0c00d 	mov	ip, sp
        24411c:	e20820ff 	and	r2, r8, #255	; 0xff
        244120:	e1a03005 	mov	r3, r5
        244124:	e1a01000 	mov	r1, r0
        244128:	e1a0000d 	mov	r0, sp
        24412c:	eb654a91 	bl	1b96b78 <TXTab::$Set(int, char, unsigned char)>
        244130:	e28d0010 	add	r0, sp, #16	; 0x10
        244134:	e89d5000 	ldmia	sp, {ip, lr}
        244138:	e8805000 	stmia	r0, {ip, lr}
        24413c:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        244140:	e3a03000 	mov	r3, #0	; 0x0
        244144:	e58d0018 	str	r0, [sp, #24]
        244148:	e92d0008 	stmdb	sp!, {r3}
        24414c:	e28d200c 	add	r2, sp, #12	; 0xc
        244150:	e1a00006 	mov	r0, r6
        244154:	e3a03014 	mov	r3, #20	; 0x14
        244158:	e59f100c 	ldr	r1, [pc, #c]	; 24416c <TXRulerIconsBar::DoTabsClick(TXPointingDevice *, int, TXAttrValues *, long *)+0x15c>
        24415c:	eb650c88 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        244160:	e3a00001 	mov	r0, #1	; 0x1
        244164:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        244168:	0c104e74 	ldceq	14, cr4, [r0], -#464
        24416c:	74616273 	strvcbt	r6, [r1], -#627
    */
}

/**
 * Symbol: TXRulerIconsBar::DoLineSpaceClick(int, TXAttrValues *, long *)
 * Address: 00244170
 */
TXRulerIconsBar::DoLineSpaceClick(int, TXAttrValues *, long *) {
    /*
        244170:	e1a0c00d 	mov	ip, sp
        244174:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        244178:	e24cb004 	sub	fp, ip, #4	; 0x4
        24417c:	e1a05000 	mov	r5, r0
        244180:	e1a04001 	mov	r4, r1
        244184:	e1a07002 	mov	r7, r2
        244188:	e1a06003 	mov	r6, r3
        24418c:	e3a08000 	mov	r8, #0	; 0x0
        244190:	e280005c 	add	r0, r0, #92	; 0x5c
        244194:	e1a09000 	mov	r9, r0
        244198:	eb6556b9 	bl	1b99c84 <TXRulerBitMapCluster::$InvertBitMap( const(int))>
        24419c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2441a0:	e1a0200d 	mov	r2, sp
        2441a4:	e5b53008 	ldr	r3, [r5, #8]!	; fField8
        2441a8:	e1a00003 	mov	r0, r3
        2441ac:	e59f502c 	ldr	r5, [pc, #2c]	; 2441e0 <TXRulerIconsBar::DoLineSpaceClick(int, TXAttrValues *, long *)+0x70>
        2441b0:	e1a01005 	mov	r1, r5
        2441b4:	e5933000 	ldr	r3, [r3]
        2441b8:	e1a0e00f 	mov	lr, pc
        2441bc:	e283f02c 	add	pc, r3, #44	; 0x2c
        2441c0:	e3340010 	teq	r4, #16	; 0x10
        2441c4:	e5dd0000 	ldrb	r0, [sp]
        2441c8:	1a000005 	bne	2441e4 <TXRulerIconsBar::DoLineSpaceClick(int, TXAttrValues *, long *)+0x74>
        2441cc:	e3500014 	cmp	r0, #20	; 0x14
        2441d0:	b5dd0000 	ldrltb	r0, [sp]
        2441d4:	b2800001 	addlt	r0, r0, #1	; 0x1
        2441d8:	ba000005 	blt	2441f4 <TXRulerIconsBar::DoLineSpaceClick(int, TXAttrValues *, long *)+0x84>
        2441dc:	ea000010 	b	244224 <TXRulerIconsBar::DoLineSpaceClick(int, TXAttrValues *, long *)+0xb4>
        2441e0:	6c737063 	ldcvsl	0, cr7, [r3], -#396
        2441e4:	e3500001 	cmp	r0, #1	; 0x1
        2441e8:	da00000d 	ble	244224 <TXRulerIconsBar::DoLineSpaceClick(int, TXAttrValues *, long *)+0xb4>
        2441ec:	e5dd0000 	ldrb	r0, [sp]
        2441f0:	e2400001 	sub	r0, r0, #1	; 0x1
        2441f4:	e5cd0000 	strb	r0, [sp]
        2441f8:	e3a08001 	mov	r8, #1	; 0x1
        2441fc:	e3a00000 	mov	r0, #0	; 0x0
        244200:	e3a03000 	mov	r3, #0	; 0x0
        244204:	e5860000 	str	r0, [r6]
        244208:	e92d0008 	stmdb	sp!, {r3}
        24420c:	e28d2004 	add	r2, sp, #4	; 0x4
        244210:	e1a00007 	mov	r0, r7
        244214:	e3a03001 	mov	r3, #1	; 0x1
        244218:	e1a01005 	mov	r1, r5
        24421c:	eb650c58 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        244220:	e28dd004 	add	sp, sp, #4	; 0x4
        244224:	e1a00009 	mov	r0, r9
        244228:	e1a01004 	mov	r1, r4
        24422c:	eb655694 	bl	1b99c84 <TXRulerBitMapCluster::$InvertBitMap( const(int))>
        244230:	e1a00008 	mov	r0, r8
        244234:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerIconsBar::HitTest(Point)
 * Address: 00244238
 */
TXRulerIconsBar::HitTest(Point) {
    /*
        244238:	e1a0c00d 	mov	ip, sp
        24423c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        244240:	e24cb004 	sub	fp, ip, #4	; 0x4
        244244:	e1a05001 	mov	r5, r1
        244248:	e1a04000 	mov	r4, r0
        24424c:	e2800038 	add	r0, r0, #56	; 0x38
        244250:	eb65568c 	bl	1b99c88 <TXRulerBitMapCluster::$PointToBitMapIndex( const(Point))>
        244254:	e3500000 	cmp	r0, #0	; 0x0
        244258:	aa000009 	bge	244284 <TXRulerIconsBar::HitTest(Point)+0x4c>
        24425c:	e2840014 	add	r0, r4, #20	; 0x14
        244260:	e1a01005 	mov	r1, r5
        244264:	eb655687 	bl	1b99c88 <TXRulerBitMapCluster::$PointToBitMapIndex( const(Point))>
        244268:	e3500000 	cmp	r0, #0	; 0x0
        24426c:	aa000004 	bge	244284 <TXRulerIconsBar::HitTest(Point)+0x4c>
        244270:	e284005c 	add	r0, r4, #92	; 0x5c
        244274:	e1a01005 	mov	r1, r5
        244278:	eb655682 	bl	1b99c88 <TXRulerBitMapCluster::$PointToBitMapIndex( const(Point))>
        24427c:	e3500000 	cmp	r0, #0	; 0x0
        244280:	ba000001 	blt	24428c <TXRulerIconsBar::HitTest(Point)+0x54>
        244284:	e3a00001 	mov	r0, #1	; 0x1
        244288:	ea000000 	b	244290 <TXRulerIconsBar::HitTest(Point)+0x58>
        24428c:	e3a00000 	mov	r0, #0	; 0x0
        244290:	e20000ff 	and	r0, r0, #255	; 0xff
        244294:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerIconsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)
 * Address: 00244298
 */
TXRulerIconsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *) {
    /*
        244298:	e1a0c00d 	mov	ip, sp
        24429c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2442a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2442a4:	e1a04000 	mov	r4, r0
        2442a8:	e1a06001 	mov	r6, r1
        2442ac:	e1a05003 	mov	r5, r3
        2442b0:	e59b8004 	ldr	r8, [fp, #4]
        2442b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2442b8:	e1a0000d 	mov	r0, sp
        2442bc:	e1a0e00f 	mov	lr, pc
        2442c0:	e591f000 	ldr	pc, [r1]
        2442c4:	e2840038 	add	r0, r4, #56	; 0x38
        2442c8:	e49d7004 	ldr	r7, [sp], #4
        2442cc:	e1a01007 	mov	r1, r7
        2442d0:	eb65566c 	bl	1b99c88 <TXRulerBitMapCluster::$PointToBitMapIndex( const(Point))>
        2442d4:	e3500000 	cmp	r0, #0	; 0x0
        2442d8:	ba000007 	blt	2442fc <TXRulerIconsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x64>
        2442dc:	e1a03008 	mov	r3, r8
        2442e0:	e92d0008 	stmdb	sp!, {r3}
        2442e4:	e1a03005 	mov	r3, r5
        2442e8:	e1a02000 	mov	r2, r0
        2442ec:	e1a01006 	mov	r1, r6
        2442f0:	e1a00004 	mov	r0, r4
        2442f4:	eb655247 	bl	1b98c18 <TXRulerIconsBar::$DoTabsClick(TXPointingDevice *, int, TXAttrValues *, long *)>
        2442f8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2442fc:	e2840014 	add	r0, r4, #20	; 0x14
        244300:	e1a01007 	mov	r1, r7
        244304:	eb65565f 	bl	1b99c88 <TXRulerBitMapCluster::$PointToBitMapIndex( const(Point))>
        244308:	e3500000 	cmp	r0, #0	; 0x0
        24430c:	ba000005 	blt	244328 <TXRulerIconsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x90>
        244310:	e1a03008 	mov	r3, r8
        244314:	e1a02005 	mov	r2, r5
        244318:	e1a01000 	mov	r1, r0
        24431c:	e1a00004 	mov	r0, r4
        244320:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        244324:	ea65523a 	b	1b98c14 <TXRulerIconsBar::$DoJustClick(int, TXAttrValues *, long *)>
        244328:	e284005c 	add	r0, r4, #92	; 0x5c
        24432c:	e1a01007 	mov	r1, r7
        244330:	eb655654 	bl	1b99c88 <TXRulerBitMapCluster::$PointToBitMapIndex( const(Point))>
        244334:	e3500000 	cmp	r0, #0	; 0x0
        244338:	b3a00000 	movlt	r0, #0	; 0x0
        24433c:	b91ba9f0 	ldmltdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        244340:	e1a03008 	mov	r3, r8
        244344:	e1a02005 	mov	r2, r5
        244348:	e1a01000 	mov	r1, r0
        24434c:	e1a00004 	mov	r0, r4
        244350:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        244354:	ea655230 	b	1b98c1c <TXRulerIconsBar::$DoLineSpaceClick(int, TXAttrValues *, long *)>
    */
}

/**
 * Symbol: TXRulerIconsBar::CheckUpdate(TXRuler const *)
 * Address: 00244358
 */
TXRulerIconsBar::CheckUpdate(TXRuler const *) {
    /*
        244358:	e1a0c00d 	mov	ip, sp
        24435c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        244360:	e24cb004 	sub	fp, ip, #4	; 0x4
        244364:	e1a04000 	mov	r4, r0
        244368:	e1a05001 	mov	r5, r1
        24436c:	e24dd004 	sub	sp, sp, #4	; 0x4
        244370:	e1a03001 	mov	r3, r1
        244374:	e1a0200d 	mov	r2, sp
        244378:	e1a00001 	mov	r0, r1
        24437c:	e59f10c4 	ldr	r1, [pc, #c4]	; 244448 <TXRulerIconsBar::CheckUpdate(TXRuler const *)+0xf0>
        244380:	e5933000 	ldr	r3, [r3]
        244384:	e1a0e00f 	mov	lr, pc
        244388:	e283f02c 	add	pc, r3, #44	; 0x2c
        24438c:	e24dd004 	sub	sp, sp, #4	; 0x4
        244390:	e1a0200d 	mov	r2, sp
        244394:	e5943008 	ldr	r3, [r4, #8]	; fField8
        244398:	e1a00003 	mov	r0, r3
        24439c:	e59f10a4 	ldr	r1, [pc, #a4]	; 244448 <TXRulerIconsBar::CheckUpdate(TXRuler const *)+0xf0>
        2443a0:	e5933000 	ldr	r3, [r3]
        2443a4:	e1a0e00f 	mov	lr, pc
        2443a8:	e283f02c 	add	pc, r3, #44	; 0x2c
        2443ac:	e5dd1004 	ldrb	r1, [sp, #4]
        2443b0:	e5dd0000 	ldrb	r0, [sp]
        2443b4:	e1310000 	teq	r1, r0
        2443b8:	0a00000c 	beq	2443f0 <TXRulerIconsBar::CheckUpdate(TXRuler const *)+0x98>
        2443bc:	e5dd1000 	ldrb	r1, [sp]
        2443c0:	e1a00004 	mov	r0, r4
        2443c4:	eb655218 	bl	1b98c2c <TXRulerIconsBar::$JustValueToBitMapIndex( const(char))>
        2443c8:	e1a01000 	mov	r1, r0
        2443cc:	e2840014 	add	r0, r4, #20	; 0x14
        2443d0:	e1a06000 	mov	r6, r0
        2443d4:	eb65562a 	bl	1b99c84 <TXRulerBitMapCluster::$InvertBitMap( const(int))>
        2443d8:	e5dd1004 	ldrb	r1, [sp, #4]
        2443dc:	e1a00004 	mov	r0, r4
        2443e0:	eb655211 	bl	1b98c2c <TXRulerIconsBar::$JustValueToBitMapIndex( const(char))>
        2443e4:	e1a01000 	mov	r1, r0
        2443e8:	e1a00006 	mov	r0, r6
        2443ec:	eb655624 	bl	1b99c84 <TXRulerBitMapCluster::$InvertBitMap( const(int))>
        2443f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2443f4:	e1a0200d 	mov	r2, sp
        2443f8:	e1a00005 	mov	r0, r5
        2443fc:	e59f1048 	ldr	r1, [pc, #48]	; 24444c <TXRulerIconsBar::CheckUpdate(TXRuler const *)+0xf4>
        244400:	e5953000 	ldr	r3, [r5]
        244404:	e1a0e00f 	mov	lr, pc
        244408:	e283f02c 	add	pc, r3, #44	; 0x2c
        24440c:	e24dd004 	sub	sp, sp, #4	; 0x4
        244410:	e1a0200d 	mov	r2, sp
        244414:	e5943008 	ldr	r3, [r4, #8]	; fField8
        244418:	e1a00003 	mov	r0, r3
        24441c:	e59f1028 	ldr	r1, [pc, #28]	; 24444c <TXRulerIconsBar::CheckUpdate(TXRuler const *)+0xf4>
        244420:	e5933000 	ldr	r3, [r3]
        244424:	e1a0e00f 	mov	lr, pc
        244428:	e283f02c 	add	pc, r3, #44	; 0x2c
        24442c:	e5dd1004 	ldrb	r1, [sp, #4]
        244430:	e5dd0000 	ldrb	r0, [sp]
        244434:	e1310000 	teq	r1, r0
        244438:	1284005c 	addne	r0, r4, #92	; 0x5c
        24443c:	11a01005 	movne	r1, r5
        244440:	1b655613 	blne	1b99c94 <TXLineSpacingCluster::$DrawLineSpacingString(TXRuler const *)>
        244444:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        244448:	6a757374 	bvs	1fa1220 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x3909c8>
        24444c:	6c737063 	ldcvsl	0, cr7, [r3], -#396
    */
}

/**
 * Symbol: TXRulerIconsBar::JustValueToBitMapIndex( const(char))
 * Address: 00244450
 */
TXRulerIconsBar::JustValueToBitMapIndex( const(char)) {
    /*
        244450:	e20100ff 	and	r0, r1, #255	; 0xff
        244454:	e3300001 	teq	r0, #1	; 0x1
        244458:	03a00000 	moveq	r0, #0	; 0x0
        24445c:	01a0f00e 	moveq	pc, lr
        244460:	e3300002 	teq	r0, #2	; 0x2
        244464:	03a00002 	moveq	r0, #2	; 0x2
        244468:	01a0f00e 	moveq	pc, lr
        24446c:	e3300004 	teq	r0, #4	; 0x4
        244470:	03a00001 	moveq	r0, #1	; 0x1
        244474:	13a00003 	movne	r0, #3	; 0x3
        244478:	e1a0f00e 	mov	pc, lr
    */
}

