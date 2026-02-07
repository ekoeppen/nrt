#include "include/TSIUnit.h"

/**
 * Symbol: TSIUnit::__ct(void)
 * Address: 0021ca70
 */
TSIUnit::TSIUnit(void) {
    /*
        21ca70:	e1a0c00d 	mov	ip, sp
        21ca74:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21ca78:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ca7c:	e1b04000 	movs	r4, r0
        21ca80:	1a000003 	bne	21ca94 <TSIUnit::__ct(void)+0x24>
        21ca84:	e3a0003c 	mov	r0, #60	; 0x3c
        21ca88:	eb66c72a 	bl	1bce738 <$__nw(unsigned int)>
        21ca8c:	e1b04000 	movs	r4, r0
        21ca90:	0a000003 	beq	21caa4 <TSIUnit::__ct(void)+0x34>
        21ca94:	e1a00004 	mov	r0, r4
        21ca98:	eb004084 	bl	22ccb0 <TUnit::__ct(void)>
        21ca9c:	e59f0008 	ldr	r0, [pc, #8]	; 21caac <TSIUnit::__ct(void)+0x3c>	; fField8
        21caa0:	e5840000 	str	r0, [r4]
        21caa4:	e1a00004 	mov	r0, r4
        21caa8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        21caac:	0001fdc0 	andeq	pc, r1, r0, asr #27
    */
}

/**
 * Symbol: TSIUnit::AddSub(TUnit *)
 * Address: 0021cab0
 */
TSIUnit::AddSub(TUnit *) {
    /*
        21cab0:	e1a0c00d 	mov	ip, sp
        21cab4:	e92dd833 	stmdb	sp!, {r0, r1, r4, r5, fp, ip, lr, pc}
        21cab8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21cabc:	e3e04000 	mvn	r4, #0	; 0x0
        21cac0:	e51b001c 	ldr	r0, [fp, -#28]
        21cac4:	e5d01030 	ldrb	r1, [r0, #48]	; fField48
        21cac8:	e3310000 	teq	r1, #0	; 0x0
        21cacc:	0a000013 	beq	21cb20 <TSIUnit::AddSub(TUnit *)+0x70>
        21cad0:	e3310001 	teq	r1, #1	; 0x1
        21cad4:	0a000018 	beq	21cb3c <TSIUnit::AddSub(TUnit *)+0x8c>
        21cad8:	e3310002 	teq	r1, #2	; 0x2
        21cadc:	1a0000b2 	bne	21cdac <TSIUnit::AddSub(TUnit *)+0x2fc>
        21cae0:	e5900034 	ldr	r0, [r0, #52]	; fField52
        21cae4:	e5901000 	ldr	r1, [r0]
        21cae8:	e1a0e00f 	mov	lr, pc
        21caec:	e281f014 	add	pc, r1, #20	; 0x14
        21caf0:	e1a04000 	mov	r4, r0
        21caf4:	e3700001 	cmn	r0, #1	; 0x1
        21caf8:	0a0000ab 	beq	21cdac <TSIUnit::AddSub(TUnit *)+0x2fc>
        21cafc:	e51b001c 	ldr	r0, [fp, -#28]
        21cb00:	e24b2018 	sub	r2, fp, #24	; 0x18
        21cb04:	e1a01004 	mov	r1, r4
        21cb08:	e5b03034 	ldr	r3, [r0, #52]!	; fField52
        21cb0c:	e1a00003 	mov	r0, r3
        21cb10:	e5933000 	ldr	r3, [r3]
        21cb14:	e1a0e00f 	mov	lr, pc
        21cb18:	e283f020 	add	pc, r3, #32	; 0x20
        21cb1c:	ea00001e 	b	21cb9c <TSIUnit::AddSub(TUnit *)+0xec>
        21cb20:	e3a01001 	mov	r1, #1	; 0x1
        21cb24:	e5c01030 	strb	r1, [r0, #48]	; fField48
        21cb28:	e51b0018 	ldr	r0, [fp, -#24]
        21cb2c:	e51b101c 	ldr	r1, [fp, -#28]
        21cb30:	e3a04000 	mov	r4, #0	; 0x0
        21cb34:	e5a10034 	str	r0, [r1, #52]!	; fField52
        21cb38:	ea000017 	b	21cb9c <TSIUnit::AddSub(TUnit *)+0xec>
        21cb3c:	e3a01002 	mov	r1, #2	; 0x2
        21cb40:	e3a00004 	mov	r0, #4	; 0x4
        21cb44:	eb651152 	bl	1b61094 <$Make__7TDArraySFUlT1>
        21cb48:	e1b05000 	movs	r5, r0
        21cb4c:	0a000096 	beq	21cdac <TSIUnit::AddSub(TUnit *)+0x2fc>
        21cb50:	e51b001c 	ldr	r0, [fp, -#28]
        21cb54:	e2802034 	add	r2, r0, #52	; 0x34
        21cb58:	e1a00005 	mov	r0, r5
        21cb5c:	e3a01000 	mov	r1, #0	; 0x0
        21cb60:	e5953000 	ldr	r3, [r5]
        21cb64:	e1a0e00f 	mov	lr, pc
        21cb68:	e283f020 	add	pc, r3, #32	; 0x20
        21cb6c:	e24b2018 	sub	r2, fp, #24	; 0x18
        21cb70:	e1a00005 	mov	r0, r5
        21cb74:	e3a01001 	mov	r1, #1	; 0x1
        21cb78:	e5953000 	ldr	r3, [r5]
        21cb7c:	e1a0e00f 	mov	lr, pc
        21cb80:	e283f020 	add	pc, r3, #32	; 0x20
        21cb84:	e3a01002 	mov	r1, #2	; 0x2
        21cb88:	e51b001c 	ldr	r0, [fp, -#28]
        21cb8c:	e5c01030 	strb	r1, [r0, #48]	; fField48
        21cb90:	e51b001c 	ldr	r0, [fp, -#28]
        21cb94:	e3a04001 	mov	r4, #1	; 0x1
        21cb98:	e5a05034 	str	r5, [r0, #52]!	; fField52
        21cb9c:	e24dd020 	sub	sp, sp, #32	; 0x20
        21cba0:	e28d1010 	add	r1, sp, #16	; 0x10
        21cba4:	e51b0018 	ldr	r0, [fp, -#24]
        21cba8:	eb6521b6 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
        21cbac:	e1a0100d 	mov	r1, sp
        21cbb0:	e51b001c 	ldr	r0, [fp, -#28]
        21cbb4:	eb6521b3 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
        21cbb8:	e3340000 	teq	r4, #0	; 0x0
        21cbbc:	13a02000 	movne	r2, #0	; 0x0
        21cbc0:	03a02001 	moveq	r2, #1	; 0x1
        21cbc4:	e1a0100d 	mov	r1, sp
        21cbc8:	e28d0010 	add	r0, sp, #16	; 0x10
        21cbcc:	eb64fc6c 	bl	1b5bd84 <$AddRect>
        21cbd0:	e1a0100d 	mov	r1, sp
        21cbd4:	e51b001c 	ldr	r0, [fp, -#28]
        21cbd8:	eb6525d0 	bl	1b66320 <TUnit::$SetBBox(FRect *)>
        21cbdc:	e3340000 	teq	r4, #0	; 0x0
        21cbe0:	1a00000e 	bne	21cc20 <TSIUnit::AddSub(TUnit *)+0x170>
        21cbe4:	e51b0018 	ldr	r0, [fp, -#24]
        21cbe8:	e51b101c 	ldr	r1, [fp, -#28]
        21cbec:	e590001c 	ldr	r0, [r0, #28]
        21cbf0:	e5a1001c 	str	r0, [r1, #28]!
        21cbf4:	e51b0018 	ldr	r0, [fp, -#24]
        21cbf8:	e51b101c 	ldr	r1, [fp, -#28]
        21cbfc:	e590201c 	ldr	r2, [r0, #28]
        21cc00:	e5900020 	ldr	r0, [r0, #32]
        21cc04:	e0820820 	add	r0, r2, r0, lsr #16
        21cc08:	e591201c 	ldr	r2, [r1, #28]
        21cc0c:	e0400002 	sub	r0, r0, r2
        21cc10:	e5c10021 	strb	r0, [r1, #33]
        21cc14:	e1a00420 	mov	r0, r0, lsr #8
        21cc18:	e5c10020 	strb	r0, [r1, #32]
        21cc1c:	ea000017 	b	21cc80 <TSIUnit::AddSub(TUnit *)+0x1d0>
        21cc20:	e51b001c 	ldr	r0, [fp, -#28]
        21cc24:	e1a03000 	mov	r3, r0
        21cc28:	e5b0101c 	ldr	r1, [r0, #28]!
        21cc2c:	e51b0018 	ldr	r0, [fp, -#24]
        21cc30:	e590001c 	ldr	r0, [r0, #28]
        21cc34:	e1510000 	cmp	r1, r0
        21cc38:	31a00001 	movcc	r0, r1
        21cc3c:	e1a02000 	mov	r2, r0
        21cc40:	e5a3001c 	str	r0, [r3, #28]!
        21cc44:	e51b001c 	ldr	r0, [fp, -#28]
        21cc48:	e1a03000 	mov	r3, r0
        21cc4c:	e590101c 	ldr	r1, [r0, #28]
        21cc50:	e5900020 	ldr	r0, [r0, #32]
        21cc54:	e0811820 	add	r1, r1, r0, lsr #16
        21cc58:	e51b0018 	ldr	r0, [fp, -#24]
        21cc5c:	e590e01c 	ldr	lr, [r0, #28]
        21cc60:	e5900020 	ldr	r0, [r0, #32]
        21cc64:	e08e0820 	add	r0, lr, r0, lsr #16
        21cc68:	e1510000 	cmp	r1, r0
        21cc6c:	81a00001 	movhi	r0, r1
        21cc70:	e0400002 	sub	r0, r0, r2
        21cc74:	e5c30021 	strb	r0, [r3, #33]
        21cc78:	e1a00420 	mov	r0, r0, lsr #8
        21cc7c:	e5c30020 	strb	r0, [r3, #32]
        21cc80:	e51b501c 	ldr	r5, [fp, -#28]
        21cc84:	eb653e5e 	bl	1b6c604 <$GetTicks(void)>
        21cc88:	e595101c 	ldr	r1, [r5, #28]
        21cc8c:	e0400001 	sub	r0, r0, r1
        21cc90:	e5c50023 	strb	r0, [r5, #35]
        21cc94:	e1a00420 	mov	r0, r0, lsr #8
        21cc98:	e5c50022 	strb	r0, [r5, #34]
        21cc9c:	e51b001c 	ldr	r0, [fp, -#28]
        21cca0:	e5901014 	ldr	r1, [r0, #20]
        21cca4:	e3310000 	teq	r1, #0	; 0x0
        21cca8:	15911018 	ldrne	r1, [r1, #24]
        21ccac:	13310000 	teqne	r1, #0	; 0x0
        21ccb0:	0a000005 	beq	21cccc <TSIUnit::AddSub(TUnit *)+0x21c>
        21ccb4:	e3a01201 	mov	r1, #268435456	; 0x10000000
        21ccb8:	eb65152d 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        21ccbc:	e51b001c 	ldr	r0, [fp, -#28]
        21ccc0:	e5901014 	ldr	r1, [r0, #20]
        21ccc4:	e5911018 	ldr	r1, [r1, #24]
        21ccc8:	eb651525 	bl	1b62164 <TUnit::$SetDelay(unsigned long)>
        21cccc:	e51b001c 	ldr	r0, [fp, -#28]
        21ccd0:	e5901028 	ldr	r1, [r0, #40]
        21ccd4:	e1a01821 	mov	r1, r1, lsr #16
        21ccd8:	e241ccff 	sub	ip, r1, #65280	; 0xff00
        21ccdc:	e33c00ff 	teq	ip, #255	; 0xff
        21cce0:	1a00000e 	bne	21cd20 <TSIUnit::AddSub(TUnit *)+0x270>
        21cce4:	e3a01000 	mov	r1, #0	; 0x0
        21cce8:	e5c01029 	strb	r1, [r0, #41]
        21ccec:	e5c01028 	strb	r1, [r0, #40]
        21ccf0:	e51b0018 	ldr	r0, [fp, -#24]
        21ccf4:	e590002a 	ldr	r0, [r0, #42]	; fField42
        21ccf8:	e1a00820 	mov	r0, r0, lsr #16
        21ccfc:	e51b101c 	ldr	r1, [fp, -#28]
        21cd00:	e5c1002b 	strb	r0, [r1, #43]
        21cd04:	e1a00440 	mov	r0, r0, asr #8
        21cd08:	e5c1002a 	strb	r0, [r1, #42]	; fField42
        21cd0c:	e51b0018 	ldr	r0, [fp, -#24]
        21cd10:	e590102c 	ldr	r1, [r0, #44]	; fField44
        21cd14:	e1a01821 	mov	r1, r1, lsr #16
        21cd18:	e51b001c 	ldr	r0, [fp, -#28]
        21cd1c:	ea00000e 	b	21cd5c <TSIUnit::AddSub(TUnit *)+0x2ac>
        21cd20:	e51b1018 	ldr	r1, [fp, -#24]
        21cd24:	e591102a 	ldr	r1, [r1, #42]	; fField42
        21cd28:	e1a01821 	mov	r1, r1, lsr #16
        21cd2c:	e590202a 	ldr	r2, [r0, #42]	; fField42
        21cd30:	e1510822 	cmp	r1, r2, lsr #16
        21cd34:	b5c0102b 	strltb	r1, [r0, #43]
        21cd38:	b1a01441 	movlt	r1, r1, asr #8
        21cd3c:	b5c0102a 	strltb	r1, [r0, #42]	; fField42
        21cd40:	e51b0018 	ldr	r0, [fp, -#24]
        21cd44:	e590102c 	ldr	r1, [r0, #44]	; fField44
        21cd48:	e1a01821 	mov	r1, r1, lsr #16
        21cd4c:	e51b001c 	ldr	r0, [fp, -#28]
        21cd50:	e590202c 	ldr	r2, [r0, #44]	; fField44
        21cd54:	e1510822 	cmp	r1, r2, lsr #16
        21cd58:	da000002 	ble	21cd68 <TSIUnit::AddSub(TUnit *)+0x2b8>
        21cd5c:	e5c0102d 	strb	r1, [r0, #45]
        21cd60:	e1a01441 	mov	r1, r1, asr #8
        21cd64:	e5c0102c 	strb	r1, [r0, #44]	; fField44
        21cd68:	eb653e25 	bl	1b6c604 <$GetTicks(void)>
        21cd6c:	e51b101c 	ldr	r1, [fp, -#28]
        21cd70:	e5d11027 	ldrb	r1, [r1, #39]	; fField39
        21cd74:	e0801001 	add	r1, r0, r1
        21cd78:	e59f0034 	ldr	r0, [pc, #34]	; 21cdb4 <TSIUnit::AddSub(TUnit *)+0x304>
        21cd7c:	e5900000 	ldr	r0, [r0]
        21cd80:	e5b02020 	ldr	r2, [r0, #32]!
        21cd84:	e1510002 	cmp	r1, r2
        21cd88:	35801000 	strcc	r1, [r0]
        21cd8c:	e3a01702 	mov	r1, #524288	; 0x80000
        21cd90:	e51b0018 	ldr	r0, [fp, -#24]
        21cd94:	eb651913 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        21cd98:	e3300000 	teq	r0, #0	; 0x0
        21cd9c:	13a01702 	movne	r1, #524288	; 0x80000
        21cda0:	151b001c 	ldrne	r0, [fp, -#28]
        21cda4:	1b6514f2 	blne	1b62174 <TRecObject::$SetFlags(unsigned long)>
        21cda8:	e28dd020 	add	sp, sp, #32	; 0x20
        21cdac:	e1a00004 	mov	r0, r4
        21cdb0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        21cdb4:	0c10187c 	ldceq	8, cr1, [r0], -#496
    */
}

/**
 * Symbol: TSIUnit::GetSub(unsigned long)
 * Address: 0021cdb8
 */
TSIUnit::GetSub(unsigned long) {
    /*
        21cdb8:	e1a0c00d 	mov	ip, sp
        21cdbc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21cdc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21cdc4:	e3a02000 	mov	r2, #0	; 0x0
        21cdc8:	e5d03030 	ldrb	r3, [r0, #48]	; fField48
        21cdcc:	e3330000 	teq	r3, #0	; 0x0
        21cdd0:	0a000009 	beq	21cdfc <TSIUnit::GetSub(unsigned long)+0x44>
        21cdd4:	e3330001 	teq	r3, #1	; 0x1
        21cdd8:	0a000009 	beq	21ce04 <TSIUnit::GetSub(unsigned long)+0x4c>
        21cddc:	e3330002 	teq	r3, #2	; 0x2
        21cde0:	1a000005 	bne	21cdfc <TSIUnit::GetSub(unsigned long)+0x44>
        21cde4:	e5b02034 	ldr	r2, [r0, #52]!	; fField52
        21cde8:	e1a00002 	mov	r0, r2
        21cdec:	e5922000 	ldr	r2, [r2]
        21cdf0:	e1a0e00f 	mov	lr, pc
        21cdf4:	e282f01c 	add	pc, r2, #28	; 0x1c
        21cdf8:	e5902000 	ldr	r2, [r0]
        21cdfc:	e1a00002 	mov	r0, r2
        21ce00:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        21ce04:	e3310000 	teq	r1, #0	; 0x0
        21ce08:	1afffffb 	bne	21cdfc <TSIUnit::GetSub(unsigned long)+0x44>
        21ce0c:	e5b02034 	ldr	r2, [r0, #52]!	; fField52
        21ce10:	eafffff9 	b	21cdfc <TSIUnit::GetSub(unsigned long)+0x44>
    */
}

/**
 * Symbol: TSIUnit::DeleteSub(unsigned long)
 * Address: 0021ce14
 */
TSIUnit::DeleteSub(unsigned long) {
    /*
        21ce14:	e1a0c00d 	mov	ip, sp
        21ce18:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21ce1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ce20:	e1a04000 	mov	r4, r0
        21ce24:	e1a05001 	mov	r5, r1
        21ce28:	e5d00030 	ldrb	r0, [r0, #48]	; fField48
        21ce2c:	e3300000 	teq	r0, #0	; 0x0
        21ce30:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        21ce34:	e3300001 	teq	r0, #1	; 0x1
        21ce38:	0a00001c 	beq	21ceb0 <TSIUnit::DeleteSub(unsigned long)+0x9c>
        21ce3c:	e3300002 	teq	r0, #2	; 0x2
        21ce40:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        21ce44:	e1a01005 	mov	r1, r5
        21ce48:	e1a00004 	mov	r0, r4
        21ce4c:	e5942000 	ldr	r2, [r4]
        21ce50:	e1a0e00f 	mov	lr, pc
        21ce54:	e282f058 	add	pc, r2, #88	; 0x58
        21ce58:	e1a06000 	mov	r6, r0
        21ce5c:	e1a01005 	mov	r1, r5
        21ce60:	e5942034 	ldr	r2, [r4, #52]	; fField52
        21ce64:	e1a00002 	mov	r0, r2
        21ce68:	e5922000 	ldr	r2, [r2]
        21ce6c:	e1a0e00f 	mov	lr, pc
        21ce70:	e282f040 	add	pc, r2, #64	; 0x40
        21ce74:	e5940034 	ldr	r0, [r4, #52]	; fField52
        21ce78:	e590100c 	ldr	r1, [r0, #12]	; fField12
        21ce7c:	e3310001 	teq	r1, #1	; 0x1
        21ce80:	1a00000f 	bne	21cec4 <TSIUnit::DeleteSub(unsigned long)+0xb0>
        21ce84:	e3a01000 	mov	r1, #0	; 0x0
        21ce88:	e5902000 	ldr	r2, [r0]
        21ce8c:	e1a0e00f 	mov	lr, pc
        21ce90:	e282f01c 	add	pc, r2, #28	; 0x1c
        21ce94:	e5905000 	ldr	r5, [r0]
        21ce98:	e5940034 	ldr	r0, [r4, #52]	; fField52
        21ce9c:	e1a0e00f 	mov	lr, pc
        21cea0:	e590f000 	ldr	pc, [r0]
        21cea4:	e3a00001 	mov	r0, #1	; 0x1
        21cea8:	e5845034 	str	r5, [r4, #52]	; fField52
        21ceac:	ea000003 	b	21cec0 <TSIUnit::DeleteSub(unsigned long)+0xac>
        21ceb0:	e3350000 	teq	r5, #0	; 0x0
        21ceb4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        21ceb8:	e3a00000 	mov	r0, #0	; 0x0
        21cebc:	e5946034 	ldr	r6, [r4, #52]	; fField52
        21cec0:	e5c40030 	strb	r0, [r4, #48]	; fField48
        21cec4:	e3360000 	teq	r6, #0	; 0x0
        21cec8:	11a00006 	movne	r0, r6
        21cecc:	1596c000 	ldrne	ip, [r6]
        21ced0:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        21ced4:	11a0f00c 	movne	pc, ip
        21ced8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::MarkUnit(TUnitList *, unsigned long)
 * Address: 0021cedc
 */
TSIUnit::MarkUnit(TUnitList *, unsigned long) {
    /*
        21cedc:	e1a0c00d 	mov	ip, sp
        21cee0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        21cee4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21cee8:	e1a04000 	mov	r4, r0
        21ceec:	e1a06001 	mov	r6, r1
        21cef0:	e1a05002 	mov	r5, r2
        21cef4:	e3a07000 	mov	r7, #0	; 0x0
        21cef8:	e1a01002 	mov	r1, r2
        21cefc:	eb65149c 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        21cf00:	e1a00004 	mov	r0, r4
        21cf04:	e5941000 	ldr	r1, [r4]
        21cf08:	e1a0e00f 	mov	lr, pc
        21cf0c:	e281f01c 	add	pc, r1, #28	; 0x1c
        21cf10:	e1a08000 	mov	r8, r0
        21cf14:	e3a09000 	mov	r9, #0	; 0x0
        21cf18:	e3500000 	cmp	r0, #0	; 0x0
        21cf1c:	da00000e 	ble	21cf5c <TSIUnit::MarkUnit(TUnitList *, unsigned long)+0x80>
        21cf20:	e1a01009 	mov	r1, r9
        21cf24:	e1a00004 	mov	r0, r4
        21cf28:	e5942000 	ldr	r2, [r4]
        21cf2c:	e1a0e00f 	mov	lr, pc
        21cf30:	e282f058 	add	pc, r2, #88	; 0x58
        21cf34:	e1a02005 	mov	r2, r5
        21cf38:	e1a01006 	mov	r1, r6
        21cf3c:	e5903000 	ldr	r3, [r0]
        21cf40:	e1a0e00f 	mov	lr, pc
        21cf44:	e283f030 	add	pc, r3, #48	; 0x30
        21cf48:	e1b07000 	movs	r7, r0
        21cf4c:	1a000008 	bne	21cf74 <TSIUnit::MarkUnit(TUnitList *, unsigned long)+0x98>
        21cf50:	e2899001 	add	r9, r9, #1	; 0x1
        21cf54:	e1590008 	cmp	r9, r8
        21cf58:	bafffff0 	blt	21cf20 <TSIUnit::MarkUnit(TUnitList *, unsigned long)+0x44>
        21cf5c:	e3380000 	teq	r8, #0	; 0x0
        21cf60:	1a000003 	bne	21cf74 <TSIUnit::MarkUnit(TUnitList *, unsigned long)+0x98>
        21cf64:	e1a01004 	mov	r1, r4
        21cf68:	e1a00006 	mov	r0, r6
        21cf6c:	eb64fb8b 	bl	1b5bda0 <TUnitList::$AddUnit(TUnit *)>
        21cf70:	e1a07000 	mov	r7, r0
        21cf74:	e1a00007 	mov	r0, r7
        21cf78:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::ClaimUnit(TUnitList *)
 * Address: 0021cf7c
 */
TSIUnit::ClaimUnit(TUnitList *) {
    /*
        21cf7c:	e3a02101 	mov	r2, #1073741824	; 0x40000000
        21cf80:	e5903000 	ldr	r3, [r0]
        21cf84:	e283f030 	add	pc, r3, #48	; 0x30
    */
}

/**
 * Symbol: TSIUnit::GetSubsCopy(void)
 * Address: 0021cf88
 */
TSIUnit::GetSubsCopy(void) {
    /*
        21cf88:	e1a0c00d 	mov	ip, sp
        21cf8c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21cf90:	e24cb004 	sub	fp, ip, #4	; 0x4
        21cf94:	e1a04000 	mov	r4, r0
        21cf98:	e3a00000 	mov	r0, #0	; 0x0
        21cf9c:	e5d41030 	ldrb	r1, [r4, #48]	; fField48
        21cfa0:	e3310000 	teq	r1, #0	; 0x0
        21cfa4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        21cfa8:	e3310001 	teq	r1, #1	; 0x1
        21cfac:	0a000005 	beq	21cfc8 <TSIUnit::GetSubsCopy(void)+0x40>
        21cfb0:	e3310002 	teq	r1, #2	; 0x2
        21cfb4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        21cfb8:	e5940034 	ldr	r0, [r4, #52]	; fField52
        21cfbc:	eb64ff98 	bl	1b5ce24 <TArray::$Clone(void)>
        21cfc0:	e5b40034 	ldr	r0, [r4, #52]!	; fField52
        21cfc4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        21cfc8:	e3a01001 	mov	r1, #1	; 0x1
        21cfcc:	e3a00004 	mov	r0, #4	; 0x4
        21cfd0:	eb65102f 	bl	1b61094 <$Make__7TDArraySFUlT1>
        21cfd4:	e1b05000 	movs	r5, r0
        21cfd8:	0a000006 	beq	21cff8 <TSIUnit::GetSubsCopy(void)+0x70>
        21cfdc:	e1a00005 	mov	r0, r5
        21cfe0:	e3a01000 	mov	r1, #0	; 0x0
        21cfe4:	e5952000 	ldr	r2, [r5]
        21cfe8:	e1a0e00f 	mov	lr, pc
        21cfec:	e282f01c 	add	pc, r2, #28	; 0x1c
        21cff0:	e5b41034 	ldr	r1, [r4, #52]!	; fField52
        21cff4:	e5801000 	str	r1, [r0]
        21cff8:	e1a00005 	mov	r0, r5
        21cffc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::CloseInterpList(void)
 * Address: 0021d000
 */
TSIUnit::CloseInterpList(void) {
    /*
        21d000:	e1a0c00d 	mov	ip, sp
        21d004:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21d008:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d00c:	e1a04000 	mov	r4, r0
        21d010:	e5900038 	ldr	r0, [r0, #56]	; fField56
        21d014:	e5905008 	ldr	r5, [r0, #8]	; fField8
        21d018:	e1a0e00f 	mov	lr, pc
        21d01c:	e590f000 	ldr	pc, [r0]
        21d020:	e3a00000 	mov	r0, #0	; 0x0
        21d024:	e5845038 	str	r5, [r4, #56]	; fField56
        21d028:	e5c40031 	strb	r0, [r4, #49]	; fField49
        21d02c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::OpenInterpList(void)
 * Address: 0021d030
 */
TSIUnit::OpenInterpList(void) {
    /*
        21d030:	e1a0c00d 	mov	ip, sp
        21d034:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21d038:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d03c:	e1a04000 	mov	r4, r0
        21d040:	e3e05000 	mvn	r5, #0	; 0x0
        21d044:	e5900038 	ldr	r0, [r0, #56]	; fField56
        21d048:	e3a01001 	mov	r1, #1	; 0x1
        21d04c:	eb651010 	bl	1b61094 <$Make__7TDArraySFUlT1>
        21d050:	e3300000 	teq	r0, #0	; 0x0
        21d054:	0a000003 	beq	21d068 <TSIUnit::OpenInterpList(void)+0x38>
        21d058:	e5840038 	str	r0, [r4, #56]	; fField56
        21d05c:	e3a00001 	mov	r0, #1	; 0x1
        21d060:	e5c40031 	strb	r0, [r4, #49]	; fField49
        21d064:	e3a05000 	mov	r5, #0	; 0x0
        21d068:	e1a00005 	mov	r0, r5
        21d06c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::InterpretationCount(void)
 * Address: 0021d0c8
 */
TSIUnit::InterpretationCount(void) {
    /*
        21d0c8:	e5d01031 	ldrb	r1, [r0, #49]	; fField49
        21d0cc:	e3310000 	teq	r1, #0	; 0x0
        21d0d0:	0a000005 	beq	21d0ec <TSIUnit::InterpretationCount(void)+0x24>
        21d0d4:	e3310001 	teq	r1, #1	; 0x1
        21d0d8:	1a000003 	bne	21d0ec <TSIUnit::InterpretationCount(void)+0x24>
        21d0dc:	e5900038 	ldr	r0, [r0, #56]	; fField56
        21d0e0:	e3300000 	teq	r0, #0	; 0x0
        21d0e4:	1590000c 	ldrne	r0, [r0, #12]	; fField12
        21d0e8:	11a0f00e 	movne	pc, lr
        21d0ec:	e3a00000 	mov	r0, #0	; 0x0
        21d0f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)
 * Address: 0021d0f4
 */
TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long) {
    /*
        21d0f4:	e1a0c00d 	mov	ip, sp
        21d0f8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        21d0fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d100:	e1a04000 	mov	r4, r0
        21d104:	e1a05001 	mov	r5, r1
        21d108:	e1a07002 	mov	r7, r2
        21d10c:	e1a06003 	mov	r6, r3
        21d110:	e24dd010 	sub	sp, sp, #16	; 0x10
        21d114:	e5901000 	ldr	r1, [r0]
        21d118:	e1a0e00f 	mov	lr, pc
        21d11c:	e281f020 	add	pc, r1, #32	; 0x20
        21d120:	e1550000 	cmp	r5, r0
        21d124:	2a00000a 	bcs	21d154 <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x60>
        21d128:	e2408001 	sub	r8, r0, #1	; 0x1
        21d12c:	e1580005 	cmp	r8, r5
        21d130:	3a000007 	bcc	21d154 <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x60>
        21d134:	e1a01008 	mov	r1, r8
        21d138:	e1a00004 	mov	r0, r4
        21d13c:	e5942000 	ldr	r2, [r4]
        21d140:	e1a0e00f 	mov	lr, pc
        21d144:	e282f070 	add	pc, r2, #112	; 0x70
        21d148:	e2488001 	sub	r8, r8, #1	; 0x1
        21d14c:	e1580005 	cmp	r8, r5
        21d150:	2afffff7 	bcs	21d134 <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x40>
        21d154:	e5d40031 	ldrb	r0, [r4, #49]	; fField49
        21d158:	e3300000 	teq	r0, #0	; 0x0
        21d15c:	1a000003 	bne	21d170 <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x7c>
        21d160:	e3350000 	teq	r5, #0	; 0x0
        21d164:	0a000033 	beq	21d238 <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x144>
        21d168:	e1a00004 	mov	r0, r4
        21d16c:	eb650fe0 	bl	1b610f4 <TSIUnit::$OpenInterpList(void)>
        21d170:	e5d40031 	ldrb	r0, [r4, #49]	; fField49
        21d174:	e3300001 	teq	r0, #1	; 0x1
        21d178:	03350000 	teqeq	r5, #0	; 0x0
        21d17c:	1a000002 	bne	21d18c <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x98>
        21d180:	e1a00004 	mov	r0, r4
        21d184:	eb64ff29 	bl	1b5ce30 <TSIUnit::$CloseInterpList(void)>
        21d188:	ea00002a 	b	21d238 <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x144>
        21d18c:	e3350000 	teq	r5, #0	; 0x0
        21d190:	0a000028 	beq	21d238 <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x144>
        21d194:	e3360000 	teq	r6, #0	; 0x0
        21d198:	1a000006 	bne	21d1b8 <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0xc4>
        21d19c:	e1a01005 	mov	r1, r5
        21d1a0:	e5b42038 	ldr	r2, [r4, #56]!	; fField56
        21d1a4:	e1a00002 	mov	r0, r2
        21d1a8:	e5922000 	ldr	r2, [r2]
        21d1ac:	e1a0e00f 	mov	lr, pc
        21d1b0:	e282f030 	add	pc, r2, #48	; 0x30
        21d1b4:	ea00001f 	b	21d238 <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x144>
        21d1b8:	e1a00004 	mov	r0, r4
        21d1bc:	e5941000 	ldr	r1, [r4]
        21d1c0:	e1a0e00f 	mov	lr, pc
        21d1c4:	e281f020 	add	pc, r1, #32	; 0x20
        21d1c8:	e1a08000 	mov	r8, r0
        21d1cc:	e1500005 	cmp	r0, r5
        21d1d0:	2a000018 	bcs	21d238 <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x144>
        21d1d4:	e1a01005 	mov	r1, r5
        21d1d8:	e5942038 	ldr	r2, [r4, #56]	; fField56
        21d1dc:	e1a00002 	mov	r0, r2
        21d1e0:	e5922000 	ldr	r2, [r2]
        21d1e4:	e1a0e00f 	mov	lr, pc
        21d1e8:	e282f030 	add	pc, r2, #48	; 0x30
        21d1ec:	e3300000 	teq	r0, #0	; 0x0
        21d1f0:	1a000010 	bne	21d238 <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x144>
        21d1f4:	e1580005 	cmp	r8, r5
        21d1f8:	2a00000e 	bcs	21d238 <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x144>
        21d1fc:	e1a02006 	mov	r2, r6
        21d200:	e1a01007 	mov	r1, r7
        21d204:	e1a0000d 	mov	r0, sp
        21d208:	eb650b81 	bl	1b60014 <$InitInterpretation__FP18UnitInterpretationUlT2>
        21d20c:	e1a01008 	mov	r1, r8
        21d210:	e1a00004 	mov	r0, r4
        21d214:	e5942000 	ldr	r2, [r4]
        21d218:	e1a0e00f 	mov	lr, pc
        21d21c:	e282f068 	add	pc, r2, #104	; 0x68
        21d220:	e1a0100d 	mov	r1, sp
        21d224:	e891500c 	ldmia	r1, {r2, r3, ip, lr}
        21d228:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        21d22c:	e2888001 	add	r8, r8, #1	; 0x1
        21d230:	e1580005 	cmp	r8, r5
        21d234:	3afffff0 	bcc	21d1fc <TSIUnit::InterpretationReuse(unsigned long, unsigned long, unsigned long)+0x108>
        21d238:	e3a00000 	mov	r0, #0	; 0x0
        21d23c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::AddInterpretation(char *)
 * Address: 0021d240
 */
TSIUnit::AddInterpretation(char *) {
    /*
        21d240:	e1a0c00d 	mov	ip, sp
        21d244:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21d248:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d24c:	e1a04000 	mov	r4, r0
        21d250:	e1a05001 	mov	r5, r1
        21d254:	e3e06000 	mvn	r6, #0	; 0x0
        21d258:	e5d00031 	ldrb	r0, [r0, #49]	; fField49
        21d25c:	e3300000 	teq	r0, #0	; 0x0
        21d260:	0a000006 	beq	21d280 <TSIUnit::AddInterpretation(char *)+0x40>
        21d264:	e3300001 	teq	r0, #1	; 0x1
        21d268:	1a000010 	bne	21d2b0 <TSIUnit::AddInterpretation(char *)+0x70>
        21d26c:	e5940038 	ldr	r0, [r4, #56]	; fField56
        21d270:	e5901000 	ldr	r1, [r0]
        21d274:	e1a0e00f 	mov	lr, pc
        21d278:	e281f014 	add	pc, r1, #20	; 0x14
        21d27c:	ea000001 	b	21d288 <TSIUnit::AddInterpretation(char *)+0x48>
        21d280:	e1a00004 	mov	r0, r4
        21d284:	eb650f9a 	bl	1b610f4 <TSIUnit::$OpenInterpList(void)>
        21d288:	e1a06000 	mov	r6, r0
        21d28c:	e3700001 	cmn	r0, #1	; 0x1
        21d290:	0a000006 	beq	21d2b0 <TSIUnit::AddInterpretation(char *)+0x70>
        21d294:	e1a02005 	mov	r2, r5
        21d298:	e1a01006 	mov	r1, r6
        21d29c:	e5b43038 	ldr	r3, [r4, #56]!	; fField56
        21d2a0:	e1a00003 	mov	r0, r3
        21d2a4:	e5933000 	ldr	r3, [r3]
        21d2a8:	e1a0e00f 	mov	lr, pc
        21d2ac:	e283f020 	add	pc, r3, #32	; 0x20
        21d2b0:	e1a00006 	mov	r0, r6
        21d2b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::GetInterpretation(unsigned long)
 * Address: 0021d2b8
 */
TSIUnit::GetInterpretation(unsigned long) {
    /*
        21d2b8:	e5d02031 	ldrb	r2, [r0, #49]	; fField49
        21d2bc:	e3320000 	teq	r2, #0	; 0x0
        21d2c0:	03a00000 	moveq	r0, #0	; 0x0
        21d2c4:	01a0f00e 	moveq	pc, lr
        21d2c8:	e5b02038 	ldr	r2, [r0, #56]!	; fField56
        21d2cc:	e1a00002 	mov	r0, r2
        21d2d0:	e5922000 	ldr	r2, [r2]
        21d2d4:	e282f01c 	add	pc, r2, #28	; 0x1c
    */
}

/**
 * Symbol: TSIUnit::DeleteInterpretation(unsigned long)
 * Address: 0021d2d8
 */
TSIUnit::DeleteInterpretation(unsigned long) {
    /*
        21d2d8:	e1a0c00d 	mov	ip, sp
        21d2dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21d2e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d2e4:	e1a04000 	mov	r4, r0
        21d2e8:	e1a05001 	mov	r5, r1
        21d2ec:	e5902000 	ldr	r2, [r0]
        21d2f0:	e1a0e00f 	mov	lr, pc
        21d2f4:	e282f098 	add	pc, r2, #152	; 0x98
        21d2f8:	e3300000 	teq	r0, #0	; 0x0
        21d2fc:	11a0e00f 	movne	lr, pc
        21d300:	1590f000 	ldrne	pc, [r0]
        21d304:	e1a01005 	mov	r1, r5
        21d308:	e5942038 	ldr	r2, [r4, #56]	; fField56
        21d30c:	e1a00002 	mov	r0, r2
        21d310:	e5922000 	ldr	r2, [r2]
        21d314:	e1a0e00f 	mov	lr, pc
        21d318:	e282f040 	add	pc, r2, #64	; 0x40
        21d31c:	e5940038 	ldr	r0, [r4, #56]	; fField56
        21d320:	e590000c 	ldr	r0, [r0, #12]	; fField12
        21d324:	e3300000 	teq	r0, #0	; 0x0
        21d328:	01a00004 	moveq	r0, r4
        21d32c:	0b64febf 	bleq	1b5ce30 <TSIUnit::$CloseInterpList(void)>
        21d330:	e3a00001 	mov	r0, #1	; 0x1
        21d334:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::InsertInterpretation(unsigned long)
 * Address: 0021d338
 */
TSIUnit::InsertInterpretation(unsigned long) {
    /*
        21d338:	e1a0c00d 	mov	ip, sp
        21d33c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21d340:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d344:	e3e02000 	mvn	r2, #0	; 0x0
        21d348:	e5d03031 	ldrb	r3, [r0, #49]	; fField49
        21d34c:	e3330000 	teq	r3, #0	; 0x0
        21d350:	0a000007 	beq	21d374 <TSIUnit::InsertInterpretation(unsigned long)+0x3c>
        21d354:	e3330001 	teq	r3, #1	; 0x1
        21d358:	1a000007 	bne	21d37c <TSIUnit::InsertInterpretation(unsigned long)+0x44>
        21d35c:	e5b02038 	ldr	r2, [r0, #56]!	; fField56
        21d360:	e1a00002 	mov	r0, r2
        21d364:	e5922000 	ldr	r2, [r2]
        21d368:	e1a0e00f 	mov	lr, pc
        21d36c:	e282f048 	add	pc, r2, #72	; 0x48
        21d370:	ea000000 	b	21d378 <TSIUnit::InsertInterpretation(unsigned long)+0x40>
        21d374:	eb650f5e 	bl	1b610f4 <TSIUnit::$OpenInterpList(void)>
        21d378:	e1a02000 	mov	r2, r0
        21d37c:	e1a00002 	mov	r0, r2
        21d380:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::LockInterpretations(void)
 * Address: 0021d384
 */
TSIUnit::LockInterpretations(void) {
    /*
        21d384:	e5d01031 	ldrb	r1, [r0, #49]	; fField49
        21d388:	e3310000 	teq	r1, #0	; 0x0
        21d38c:	15900038 	ldrne	r0, [r0, #56]	; fField56
        21d390:	1a650b35 	bne	1b6006c <TArray::$Lock(void)>
        21d394:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSIUnit::UnlockInterpretations(void)
 * Address: 0021d398
 */
TSIUnit::UnlockInterpretations(void) {
    /*
        21d398:	e5d01031 	ldrb	r1, [r0, #49]	; fField49
        21d39c:	e3310000 	teq	r1, #0	; 0x0
        21d3a0:	15900038 	ldrne	r0, [r0, #56]	; fField56
        21d3a4:	1a651b96 	bne	1b64204 <TArray::$Unlock(void)>
        21d3a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSIUnit::CompactInterpretations(void)
 * Address: 0021d3ac
 */
TSIUnit::CompactInterpretations(void) {
    /*
        21d3ac:	e5d01031 	ldrb	r1, [r0, #49]	; fField49
        21d3b0:	e3310000 	teq	r1, #0	; 0x0
        21d3b4:	01a0f00e 	moveq	pc, lr
        21d3b8:	e5900038 	ldr	r0, [r0, #56]	; fField56
        21d3bc:	e5901000 	ldr	r1, [r0]
        21d3c0:	e281f024 	add	pc, r1, #36	; 0x24
    */
}

/**
 * Symbol: TSIUnit::GetBestInterpretation(void)
 * Address: 0021d3c4
 */
TSIUnit::GetBestInterpretation(void) {
    /*
        21d3c4:	e1a0c00d 	mov	ip, sp
        21d3c8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        21d3cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d3d0:	e1a04000 	mov	r4, r0
        21d3d4:	e3e08000 	mvn	r8, #0	; 0x0
        21d3d8:	e3a06e71 	mov	r6, #1808	; 0x710
        21d3dc:	e2866a02 	add	r6, r6, #8192	; 0x2000
        21d3e0:	e5901000 	ldr	r1, [r0]
        21d3e4:	e1a0e00f 	mov	lr, pc
        21d3e8:	e281f020 	add	pc, r1, #32	; 0x20
        21d3ec:	e1a07000 	mov	r7, r0
        21d3f0:	e3a05000 	mov	r5, #0	; 0x0
        21d3f4:	e3500000 	cmp	r0, #0	; 0x0
        21d3f8:	9a00000e 	bls	21d438 <TSIUnit::GetBestInterpretation(void)+0x74>
        21d3fc:	e1a01005 	mov	r1, r5
        21d400:	e1a00004 	mov	r0, r4
        21d404:	e5942000 	ldr	r2, [r4]
        21d408:	e1a0e00f 	mov	lr, pc
        21d40c:	e282f068 	add	pc, r2, #104	; 0x68
        21d410:	e5901000 	ldr	r1, [r0]
        21d414:	e3710001 	cmn	r1, #1	; 0x1
        21d418:	0a000003 	beq	21d42c <TSIUnit::GetBestInterpretation(void)+0x68>
        21d41c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        21d420:	e1500006 	cmp	r0, r6
        21d424:	31a06000 	movcc	r6, r0
        21d428:	31a08005 	movcc	r8, r5
        21d42c:	e2855001 	add	r5, r5, #1	; 0x1
        21d430:	e1550007 	cmp	r5, r7
        21d434:	3afffff0 	bcc	21d3fc <TSIUnit::GetBestInterpretation(void)+0x38>
        21d438:	e1a00008 	mov	r0, r8
        21d43c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::Dump(TMsg *)
 * Address: 0021d440
 */
TSIUnit::Dump(TMsg *) {
    /*
        21d440:	e1a0c00d 	mov	ip, sp
        21d444:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21d448:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d44c:	e1a04000 	mov	r4, r0
        21d450:	e1a05001 	mov	r5, r1
        21d454:	e24dd064 	sub	sp, sp, #100	; 0x64
        21d458:	eb65029d 	bl	1b5ded4 <TUnit::$Dump(TMsg *)>
        21d45c:	e59f6090 	ldr	r6, [pc, #90]	; 21d4f4 <TSIUnit::Dump(TMsg *)+0xb4>
        21d460:	e5960000 	ldr	r0, [r6]
        21d464:	e3300000 	teq	r0, #0	; 0x0
        21d468:	11a00005 	movne	r0, r5
        21d46c:	128f1f21 	addne	r1, pc, #132	; 0x84
        21d470:	1b654083 	blne	1b6d684 <TMsg::$MsgStr(char *)>
        21d474:	e594302c 	ldr	r3, [r4, #44]	; fField44
        21d478:	e1a03823 	mov	r3, r3, lsr #16
        21d47c:	e92d0008 	stmdb	sp!, {r3}
        21d480:	e1a00004 	mov	r0, r4
        21d484:	e5941000 	ldr	r1, [r4]
        21d488:	e1a0e00f 	mov	lr, pc
        21d48c:	e281f01c 	add	pc, r1, #28	; 0x1c
        21d490:	e1a02000 	mov	r2, r0
        21d494:	e594302a 	ldr	r3, [r4, #42]	; fField42
        21d498:	e1a03823 	mov	r3, r3, lsr #16
        21d49c:	e28d0004 	add	r0, sp, #4	; 0x4
        21d4a0:	e28f1f15 	add	r1, pc, #84	; 0x54
        21d4a4:	eb66617a 	bl	1bb5a94 <$sprintf>
        21d4a8:	e28dd004 	add	sp, sp, #4	; 0x4
        21d4ac:	e1a0100d 	mov	r1, sp
        21d4b0:	e1a00005 	mov	r0, r5
        21d4b4:	eb654072 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        21d4b8:	e5960000 	ldr	r0, [r6]
        21d4bc:	e3300000 	teq	r0, #0	; 0x0
        21d4c0:	0a00000a 	beq	21d4f0 <TSIUnit::Dump(TMsg *)+0xb0>
        21d4c4:	e1a00004 	mov	r0, r4
        21d4c8:	e5941000 	ldr	r1, [r4]
        21d4cc:	e1a0e00f 	mov	lr, pc
        21d4d0:	e281f020 	add	pc, r1, #32	; 0x20
        21d4d4:	e1a02000 	mov	r2, r0
        21d4d8:	e1a0000d 	mov	r0, sp
        21d4dc:	e28f1f0b 	add	r1, pc, #44	; 0x2c
        21d4e0:	eb66616b 	bl	1bb5a94 <$sprintf>
        21d4e4:	e1a0100d 	mov	r1, sp
        21d4e8:	e1a00005 	mov	r0, r5
        21d4ec:	eb654064 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        21d4f0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        21d4f4:	0c101160 	ldfeqs	f1, [r0], -#384
        21d4f8:	0d090000 	stceq	0, cr0, [r9]
        21d4fc:	256c6420 	strcsb	r6, [ip, -#1056]!
        21d500:	53756273 	cmnpl	r5, #805306375	; 0x30000007
        21d504:	2028256c 	eorcs	r2, r8, ip, ror #10
        21d508:	642c2025 	strvst	r2, [ip], -#37
        21d50c:	6c642900 	stcvsl	9, cr2, [r4]
        21d510:	09256c64 	stmeqdb	r5!, {r2, r5, r6, sl, fp, sp, lr}
        21d514:	20496e74 	subcs	r6, r9, r4, ror lr
        21d518:	65727072 	ldrvsb	r7, [r2, -#114]!
        21d51c:	65746174 	ldrvsb	r6, [r4, -#372]!	; fField372
        21d520:	696f6e73 	stmvsdb	pc!, {r0, r1, r4, r5, r6, r9, sl, fp, sp, lr}^
        21d524:	200d0000 	andcs	r0, sp, r0
    */
}

/**
 * Symbol: TSIUnit::ISIUnit(TDomain *, unsigned long, unsigned long, TArray *, unsigned long)
 * Address: 0021d528
 */
TSIUnit::ISIUnit(TDomain *, unsigned long, unsigned long, TArray *, unsigned long) {
    /*
        21d528:	e1a0c00d 	mov	ip, sp
        21d52c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21d530:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d534:	e1a04000 	mov	r4, r0
        21d538:	e1a00003 	mov	r0, r3
        21d53c:	e99b0028 	ldmib	fp, {r3, r5}
        21d540:	e92d0008 	stmdb	sp!, {r3}
        21d544:	e1a03000 	mov	r3, r0
        21d548:	e1a00004 	mov	r0, r4
        21d54c:	eb650ac2 	bl	1b6005c <TUnit::$IUnit(TDomain *, unsigned long, unsigned long, TArray *)>
        21d550:	e3a01000 	mov	r1, #0	; 0x0
        21d554:	e5c41030 	strb	r1, [r4, #48]	; fField48
        21d558:	e5841034 	str	r1, [r4, #52]	; fField52
        21d55c:	e5c41031 	strb	r1, [r4, #49]	; fField49
        21d560:	e5a45038 	str	r5, [r4, #56]!	; fField56
        21d564:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::GetLabel(unsigned long)
 * Address: 0021d568
 */
TSIUnit::GetLabel(unsigned long) {
    /*
        21d568:	e1a0c00d 	mov	ip, sp
        21d56c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21d570:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d574:	e5902000 	ldr	r2, [r0]
        21d578:	e1a0e00f 	mov	lr, pc
        21d57c:	e282f068 	add	pc, r2, #104	; 0x68
        21d580:	e3300000 	teq	r0, #0	; 0x0
        21d584:	03a00000 	moveq	r0, #0	; 0x0
        21d588:	15900000 	ldrne	r0, [r0]
        21d58c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::GetScore(unsigned long)
 * Address: 0021d590
 */
TSIUnit::GetScore(unsigned long) {
    /*
        21d590:	e1a0c00d 	mov	ip, sp
        21d594:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21d598:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d59c:	e5902000 	ldr	r2, [r0]
        21d5a0:	e1a0e00f 	mov	lr, pc
        21d5a4:	e282f068 	add	pc, r2, #104	; 0x68
        21d5a8:	e3300000 	teq	r0, #0	; 0x0
        21d5ac:	15900004 	ldrne	r0, [r0, #4]	; fField4
        21d5b0:	03a00000 	moveq	r0, #0	; 0x0
        21d5b4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::GetAngle(unsigned long)
 * Address: 0021d5b8
 */
TSIUnit::GetAngle(unsigned long) {
    /*
        21d5b8:	e1a0c00d 	mov	ip, sp
        21d5bc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21d5c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d5c4:	e5902000 	ldr	r2, [r0]
        21d5c8:	e1a0e00f 	mov	lr, pc
        21d5cc:	e282f068 	add	pc, r2, #104	; 0x68
        21d5d0:	e3300000 	teq	r0, #0	; 0x0
        21d5d4:	15900008 	ldrne	r0, [r0, #8]	; fField8
        21d5d8:	03a00000 	moveq	r0, #0	; 0x0
        21d5dc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::GetParam(unsigned long)
 * Address: 0021d5e0
 */
TSIUnit::GetParam(unsigned long) {
    /*
        21d5e0:	e1a0c00d 	mov	ip, sp
        21d5e4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21d5e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d5ec:	e5902000 	ldr	r2, [r0]
        21d5f0:	e1a0e00f 	mov	lr, pc
        21d5f4:	e282f068 	add	pc, r2, #104	; 0x68
        21d5f8:	e3300000 	teq	r0, #0	; 0x0
        21d5fc:	1590000c 	ldrne	r0, [r0, #12]	; fField12
        21d600:	03a00000 	moveq	r0, #0	; 0x0
        21d604:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::SetLabel(unsigned long, unsigned long)
 * Address: 0021d608
 */
TSIUnit::SetLabel(unsigned long, unsigned long) {
    /*
        21d608:	e1a0c00d 	mov	ip, sp
        21d60c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21d610:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d614:	e1a04002 	mov	r4, r2
        21d618:	e5902000 	ldr	r2, [r0]
        21d61c:	e1a0e00f 	mov	lr, pc
        21d620:	e282f068 	add	pc, r2, #104	; 0x68
        21d624:	e3300000 	teq	r0, #0	; 0x0
        21d628:	15804000 	strne	r4, [r0]
        21d62c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::SetScore(unsigned long, unsigned long)
 * Address: 0021d630
 */
TSIUnit::SetScore(unsigned long, unsigned long) {
    /*
        21d630:	e1a0c00d 	mov	ip, sp
        21d634:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21d638:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d63c:	e1a04002 	mov	r4, r2
        21d640:	e5902000 	ldr	r2, [r0]
        21d644:	e1a0e00f 	mov	lr, pc
        21d648:	e282f068 	add	pc, r2, #104	; 0x68
        21d64c:	e3300000 	teq	r0, #0	; 0x0
        21d650:	15a04004 	strne	r4, [r0, #4]!	; fField4
        21d654:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::SetAngle(unsigned long, long)
 * Address: 0021d658
 */
TSIUnit::SetAngle(unsigned long, long) {
    /*
        21d658:	e1a0c00d 	mov	ip, sp
        21d65c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21d660:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d664:	e1a04002 	mov	r4, r2
        21d668:	e5902000 	ldr	r2, [r0]
        21d66c:	e1a0e00f 	mov	lr, pc
        21d670:	e282f068 	add	pc, r2, #104	; 0x68
        21d674:	e3300000 	teq	r0, #0	; 0x0
        21d678:	15a04008 	strne	r4, [r0, #8]!	; fField8
        21d67c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::CheckInterpretationIndex(unsigned long)
 * Address: 0021d680
 */
TSIUnit::CheckInterpretationIndex(unsigned long) {
    /*
        21d680:	e1a0c00d 	mov	ip, sp
        21d684:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21d688:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d68c:	e1a02000 	mov	r2, r0
        21d690:	e1a04001 	mov	r4, r1
        21d694:	e3510000 	cmp	r1, #0	; 0x0
        21d698:	3a000006 	bcc	21d6b8 <TSIUnit::CheckInterpretationIndex(unsigned long)+0x38>
        21d69c:	e1a00002 	mov	r0, r2
        21d6a0:	e5921000 	ldr	r1, [r2]
        21d6a4:	e1a0e00f 	mov	lr, pc
        21d6a8:	e281f020 	add	pc, r1, #32	; 0x20
        21d6ac:	e1500004 	cmp	r0, r4
        21d6b0:	83a00001 	movhi	r0, #1	; 0x1
        21d6b4:	891ba810 	ldmhidb	fp, {r4, fp, sp, pc}
        21d6b8:	e3a00000 	mov	r0, #0	; 0x0
        21d6bc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::CountStrokes(void)
 * Address: 0021d6c0
 */
TSIUnit::CountStrokes(void) {
    /*
        21d6c0:	e1a0c00d 	mov	ip, sp
        21d6c4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21d6c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d6cc:	e1a04000 	mov	r4, r0
        21d6d0:	e3a06000 	mov	r6, #0	; 0x0
        21d6d4:	e5901000 	ldr	r1, [r0]
        21d6d8:	e1a0e00f 	mov	lr, pc
        21d6dc:	e281f01c 	add	pc, r1, #28	; 0x1c
        21d6e0:	e1a07000 	mov	r7, r0
        21d6e4:	e3a05000 	mov	r5, #0	; 0x0
        21d6e8:	e3500000 	cmp	r0, #0	; 0x0
        21d6ec:	9a00000b 	bls	21d720 <TSIUnit::CountStrokes(void)+0x60>
        21d6f0:	e1a01005 	mov	r1, r5
        21d6f4:	e1a00004 	mov	r0, r4
        21d6f8:	e5942000 	ldr	r2, [r4]
        21d6fc:	e1a0e00f 	mov	lr, pc
        21d700:	e282f058 	add	pc, r2, #88	; 0x58
        21d704:	e5901000 	ldr	r1, [r0]
        21d708:	e1a0e00f 	mov	lr, pc
        21d70c:	e281f03c 	add	pc, r1, #60	; 0x3c
        21d710:	e0806006 	add	r6, r0, r6
        21d714:	e2855001 	add	r5, r5, #1	; 0x1
        21d718:	e1550007 	cmp	r5, r7
        21d71c:	3afffff3 	bcc	21d6f0 <TSIUnit::CountStrokes(void)+0x30>
        21d720:	e1a00006 	mov	r0, r6
        21d724:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::IDispose(void)
 * Address: 0021d728
 */
TSIUnit::IDispose(void) {
    /*
        21d728:	e1a0c00d 	mov	ip, sp
        21d72c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21d730:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d734:	e1a04000 	mov	r4, r0
        21d738:	e5d00030 	ldrb	r0, [r0, #48]	; fField48
        21d73c:	e3300002 	teq	r0, #2	; 0x2
        21d740:	05940034 	ldreq	r0, [r4, #52]	; fField52
        21d744:	01a0e00f 	moveq	lr, pc
        21d748:	0590f000 	ldreq	pc, [r0]
        21d74c:	e5d40031 	ldrb	r0, [r4, #49]	; fField49
        21d750:	e3300001 	teq	r0, #1	; 0x1
        21d754:	1a00000c 	bne	21d78c <TSIUnit::IDispose(void)+0x64>
        21d758:	e1a00004 	mov	r0, r4
        21d75c:	e5941000 	ldr	r1, [r4]
        21d760:	e1a0e00f 	mov	lr, pc
        21d764:	e281f020 	add	pc, r1, #32	; 0x20
        21d768:	e2505001 	subs	r5, r0, #1	; 0x1
        21d76c:	4a000006 	bmi	21d78c <TSIUnit::IDispose(void)+0x64>
        21d770:	e1a01005 	mov	r1, r5
        21d774:	e1a00004 	mov	r0, r4
        21d778:	e5942000 	ldr	r2, [r4]
        21d77c:	e1a0e00f 	mov	lr, pc
        21d780:	e282f070 	add	pc, r2, #112	; 0x70
        21d784:	e2555001 	subs	r5, r5, #1	; 0x1
        21d788:	5afffff8 	bpl	21d770 <TSIUnit::IDispose(void)+0x48>
        21d78c:	e3a00000 	mov	r0, #0	; 0x0
        21d790:	e5c40030 	strb	r0, [r4, #48]	; fField48
        21d794:	e5c40031 	strb	r0, [r4, #49]	; fField49
        21d798:	e1a00004 	mov	r0, r4
        21d79c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        21d7a0:	ea650a0e 	b	1b5ffe0 <TUnit::$IDispose(void)>
    */
}

/**
 * Symbol: TSIUnit::GetStroke(unsigned long)
 * Address: 0021d7a4
 */
TSIUnit::GetStroke(unsigned long) {
    /*
        21d7a4:	e1a0c00d 	mov	ip, sp
        21d7a8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        21d7ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d7b0:	e1a05000 	mov	r5, r0
        21d7b4:	e1a04001 	mov	r4, r1
        21d7b8:	e3a07000 	mov	r7, #0	; 0x0
        21d7bc:	e5901000 	ldr	r1, [r0]
        21d7c0:	e1a0e00f 	mov	lr, pc
        21d7c4:	e281f03c 	add	pc, r1, #60	; 0x3c
        21d7c8:	e1500004 	cmp	r0, r4
        21d7cc:	9a000025 	bls	21d868 <TSIUnit::GetStroke(unsigned long)+0xc4>
        21d7d0:	e3340000 	teq	r4, #0	; 0x0
        21d7d4:	e1a00005 	mov	r0, r5
        21d7d8:	1a000006 	bne	21d7f8 <TSIUnit::GetStroke(unsigned long)+0x54>
        21d7dc:	e3a01000 	mov	r1, #0	; 0x0
        21d7e0:	e5902000 	ldr	r2, [r0]
        21d7e4:	e1a0e00f 	mov	lr, pc
        21d7e8:	e282f058 	add	pc, r2, #88	; 0x58
        21d7ec:	e3a01000 	mov	r1, #0	; 0x0
        21d7f0:	e5902000 	ldr	r2, [r0]
        21d7f4:	ea000015 	b	21d850 <TSIUnit::GetStroke(unsigned long)+0xac>
        21d7f8:	e5901000 	ldr	r1, [r0]
        21d7fc:	e1a0e00f 	mov	lr, pc
        21d800:	e281f01c 	add	pc, r1, #28	; 0x1c
        21d804:	e1a09000 	mov	r9, r0
        21d808:	e3a06000 	mov	r6, #0	; 0x0
        21d80c:	e3500000 	cmp	r0, #0	; 0x0
        21d810:	9a000014 	bls	21d868 <TSIUnit::GetStroke(unsigned long)+0xc4>
        21d814:	e1a01006 	mov	r1, r6
        21d818:	e1a00005 	mov	r0, r5
        21d81c:	e5952000 	ldr	r2, [r5]
        21d820:	e1a0e00f 	mov	lr, pc
        21d824:	e282f058 	add	pc, r2, #88	; 0x58
        21d828:	e1a08000 	mov	r8, r0
        21d82c:	e5901000 	ldr	r1, [r0]
        21d830:	e1a0e00f 	mov	lr, pc
        21d834:	e281f03c 	add	pc, r1, #60	; 0x3c
        21d838:	e0870000 	add	r0, r7, r0
        21d83c:	e1500004 	cmp	r0, r4
        21d840:	9a000004 	bls	21d858 <TSIUnit::GetStroke(unsigned long)+0xb4>
        21d844:	e0441007 	sub	r1, r4, r7
        21d848:	e1a00008 	mov	r0, r8
        21d84c:	e5982000 	ldr	r2, [r8]
        21d850:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        21d854:	e282f040 	add	pc, r2, #64	; 0x40
        21d858:	e1a07000 	mov	r7, r0
        21d85c:	e2866001 	add	r6, r6, #1	; 0x1
        21d860:	e1560009 	cmp	r6, r9
        21d864:	3affffea 	bcc	21d814 <TSIUnit::GetStroke(unsigned long)+0x70>
        21d868:	e3a00000 	mov	r0, #0	; 0x0
        21d86c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::GetAllStrokes(void)
 * Address: 0021d870
 */
TSIUnit::GetAllStrokes(void) {
    /*
        21d870:	e1a0c00d 	mov	ip, sp
        21d874:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        21d878:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d87c:	e1a06000 	mov	r6, r0
        21d880:	e3a00000 	mov	r0, #0	; 0x0
        21d884:	e52d0008 	str	r0, [sp, -#8]!	; fField8
        21d888:	eb650e07 	bl	1b610ac <$Make__9TUnitListSFv>
        21d88c:	e1a04000 	mov	r4, r0
        21d890:	eb650e05 	bl	1b610ac <$Make__9TUnitListSFv>
        21d894:	e1a05000 	mov	r5, r0
        21d898:	e3340000 	teq	r4, #0	; 0x0
        21d89c:	13350000 	teqne	r5, #0	; 0x0
        21d8a0:	0a00003c 	beq	21d998 <TSIUnit::GetAllStrokes(void)+0x128>
        21d8a4:	e1a01006 	mov	r1, r6
        21d8a8:	e1a00004 	mov	r0, r4
        21d8ac:	eb64f93b 	bl	1b5bda0 <TUnitList::$AddUnit(TUnit *)>
        21d8b0:	e3300000 	teq	r0, #0	; 0x0
        21d8b4:	1a000037 	bne	21d998 <TSIUnit::GetAllStrokes(void)+0x128>
        21d8b8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        21d8bc:	e3a07000 	mov	r7, #0	; 0x0
        21d8c0:	e58d0004 	str	r0, [sp, #4]	; fField4
        21d8c4:	e3500000 	cmp	r0, #0	; 0x0
        21d8c8:	da000020 	ble	21d950 <TSIUnit::GetAllStrokes(void)+0xe0>
        21d8cc:	e1a01007 	mov	r1, r7
        21d8d0:	e1a00004 	mov	r0, r4
        21d8d4:	eb6509b4 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        21d8d8:	e1a0a000 	mov	sl, r0
        21d8dc:	e5901000 	ldr	r1, [r0]
        21d8e0:	e1a0e00f 	mov	lr, pc
        21d8e4:	e281f01c 	add	pc, r1, #28	; 0x1c
        21d8e8:	e1a08000 	mov	r8, r0
        21d8ec:	e3a06000 	mov	r6, #0	; 0x0
        21d8f0:	e3500000 	cmp	r0, #0	; 0x0
        21d8f4:	da000011 	ble	21d940 <TSIUnit::GetAllStrokes(void)+0xd0>
        21d8f8:	e1a01006 	mov	r1, r6
        21d8fc:	e1a0000a 	mov	r0, sl
        21d900:	e59a2000 	ldr	r2, [sl]
        21d904:	e1a0e00f 	mov	lr, pc
        21d908:	e282f058 	add	pc, r2, #88	; 0x58
        21d90c:	e1a09000 	mov	r9, r0
        21d910:	e5901000 	ldr	r1, [r0]
        21d914:	e1a0e00f 	mov	lr, pc
        21d918:	e281f048 	add	pc, r1, #72	; 0x48
        21d91c:	e1a01009 	mov	r1, r9
        21d920:	e58d0000 	str	r0, [sp]
        21d924:	e1a00005 	mov	r0, r5
        21d928:	eb64f91b 	bl	1b5bd9c <TUnitList::$AddUnique(TUnit *)>
        21d92c:	e3300000 	teq	r0, #0	; 0x0
        21d930:	1a000018 	bne	21d998 <TSIUnit::GetAllStrokes(void)+0x128>
        21d934:	e2866001 	add	r6, r6, #1	; 0x1
        21d938:	e1560008 	cmp	r6, r8
        21d93c:	baffffed 	blt	21d8f8 <TSIUnit::GetAllStrokes(void)+0x88>
        21d940:	e2877001 	add	r7, r7, #1	; 0x1
        21d944:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        21d948:	e1570000 	cmp	r7, r0
        21d94c:	baffffde 	blt	21d8cc <TSIUnit::GetAllStrokes(void)+0x5c>
        21d950:	e1a00004 	mov	r0, r4
        21d954:	e1a04005 	mov	r4, r5
        21d958:	e1a05000 	mov	r5, r0
        21d95c:	e5901000 	ldr	r1, [r0]
        21d960:	e1a0e00f 	mov	lr, pc
        21d964:	e281f02c 	add	pc, r1, #44	; 0x2c
        21d968:	e59d0000 	ldr	r0, [sp]
        21d96c:	e3300000 	teq	r0, #0	; 0x0
        21d970:	1a000002 	bne	21d980 <TSIUnit::GetAllStrokes(void)+0x110>
        21d974:	e594000c 	ldr	r0, [r4, #12]	; fField12
        21d978:	e3500000 	cmp	r0, #0	; 0x0
        21d97c:	8affffcd 	bhi	21d8b8 <TSIUnit::GetAllStrokes(void)+0x48>
        21d980:	e3350000 	teq	r5, #0	; 0x0
        21d984:	11a00005 	movne	r0, r5
        21d988:	11a0e00f 	movne	lr, pc
        21d98c:	1595f000 	ldrne	pc, [r5]
        21d990:	e1a00004 	mov	r0, r4
        21d994:	ea000008 	b	21d9bc <TSIUnit::GetAllStrokes(void)+0x14c>
        21d998:	e3350000 	teq	r5, #0	; 0x0
        21d99c:	11a00005 	movne	r0, r5
        21d9a0:	11a0e00f 	movne	lr, pc
        21d9a4:	1595f000 	ldrne	pc, [r5]
        21d9a8:	e3340000 	teq	r4, #0	; 0x0
        21d9ac:	11a00004 	movne	r0, r4
        21d9b0:	11a0e00f 	movne	lr, pc
        21d9b4:	1594f000 	ldrne	pc, [r4]
        21d9b8:	e3a00000 	mov	r0, #0	; 0x0
        21d9bc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::DoneUsingUnit(void)
 * Address: 0021d9c0
 */
TSIUnit::DoneUsingUnit(void) {
    /*
        21d9c0:	e1a0c00d 	mov	ip, sp
        21d9c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21d9c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21d9cc:	e1a04000 	mov	r4, r0
        21d9d0:	e5d00031 	ldrb	r0, [r0, #49]	; fField49
        21d9d4:	e3300001 	teq	r0, #1	; 0x1
        21d9d8:	1a00000c 	bne	21da10 <TSIUnit::DoneUsingUnit(void)+0x50>
        21d9dc:	e1a00004 	mov	r0, r4
        21d9e0:	e5941000 	ldr	r1, [r4]
        21d9e4:	e1a0e00f 	mov	lr, pc
        21d9e8:	e281f020 	add	pc, r1, #32	; 0x20
        21d9ec:	e2505001 	subs	r5, r0, #1	; 0x1
        21d9f0:	4a000006 	bmi	21da10 <TSIUnit::DoneUsingUnit(void)+0x50>
        21d9f4:	e1a01005 	mov	r1, r5
        21d9f8:	e1a00004 	mov	r0, r4
        21d9fc:	e5942000 	ldr	r2, [r4]
        21da00:	e1a0e00f 	mov	lr, pc
        21da04:	e282f070 	add	pc, r2, #112	; 0x70
        21da08:	e2555001 	subs	r5, r5, #1	; 0x1
        21da0c:	5afffff8 	bpl	21d9f4 <TSIUnit::DoneUsingUnit(void)+0x34>
        21da10:	e3a00000 	mov	r0, #0	; 0x0
        21da14:	e5c40031 	strb	r0, [r4, #49]	; fField49
        21da18:	e1a00004 	mov	r0, r4
        21da1c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        21da20:	ea651a0e 	b	1b64260 <TUnit::$DoneUsingUnit(void)>
    */
}

/**
 * Symbol: TSIUnit::SizeInBytes(void)
 * Address: 0021da24
 */
TSIUnit::SizeInBytes(void) {
    /*
        21da24:	e1a0c00d 	mov	ip, sp
        21da28:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21da2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21da30:	e1a04000 	mov	r4, r0
        21da34:	e3a05000 	mov	r5, #0	; 0x0
        21da38:	e5901000 	ldr	r1, [r0]
        21da3c:	e1a0e00f 	mov	lr, pc
        21da40:	e281f020 	add	pc, r1, #32	; 0x20
        21da44:	e1a07000 	mov	r7, r0
        21da48:	e3a06000 	mov	r6, #0	; 0x0
        21da4c:	e3500000 	cmp	r0, #0	; 0x0
        21da50:	9a00000d 	bls	21da8c <TSIUnit::SizeInBytes(void)+0x68>
        21da54:	e1a01006 	mov	r1, r6
        21da58:	e1a00004 	mov	r0, r4
        21da5c:	e5942000 	ldr	r2, [r4]
        21da60:	e1a0e00f 	mov	lr, pc
        21da64:	e282f098 	add	pc, r2, #152	; 0x98
        21da68:	e3300000 	teq	r0, #0	; 0x0
        21da6c:	0a000003 	beq	21da80 <TSIUnit::SizeInBytes(void)+0x5c>
        21da70:	e5901000 	ldr	r1, [r0]
        21da74:	e1a0e00f 	mov	lr, pc
        21da78:	e281f008 	add	pc, r1, #8	; 0x8
        21da7c:	e0805005 	add	r5, r0, r5
        21da80:	e2866001 	add	r6, r6, #1	; 0x1
        21da84:	e1560007 	cmp	r6, r7
        21da88:	3afffff1 	bcc	21da54 <TSIUnit::SizeInBytes(void)+0x30>
        21da8c:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        21da90:	e3300002 	teq	r0, #2	; 0x2
        21da94:	1a000004 	bne	21daac <TSIUnit::SizeInBytes(void)+0x88>
        21da98:	e5940034 	ldr	r0, [r4, #52]	; fField52
        21da9c:	e5901000 	ldr	r1, [r0]
        21daa0:	e1a0e00f 	mov	lr, pc
        21daa4:	e281f008 	add	pc, r1, #8	; 0x8
        21daa8:	e0805005 	add	r5, r0, r5
        21daac:	e5d40031 	ldrb	r0, [r4, #49]	; fField49
        21dab0:	e3300001 	teq	r0, #1	; 0x1
        21dab4:	1a000004 	bne	21dacc <TSIUnit::SizeInBytes(void)+0xa8>
        21dab8:	e5940038 	ldr	r0, [r4, #56]	; fField56
        21dabc:	e5901000 	ldr	r1, [r0]
        21dac0:	e1a0e00f 	mov	lr, pc
        21dac4:	e281f008 	add	pc, r1, #8	; 0x8
        21dac8:	e0805005 	add	r5, r0, r5
        21dacc:	e1a00004 	mov	r0, r4
        21dad0:	eb6515b4 	bl	1b631a8 <TUnit::$SizeInBytes(void)>
        21dad4:	e0800005 	add	r0, r0, r5
        21dad8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSIUnit::EndSubs(void)
 * Address: 0021dadc
 */
TSIUnit::EndSubs(void) {
    /*
        21dadc:	e1a0c00d 	mov	ip, sp
        21dae0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21dae4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21dae8:	e1a04000 	mov	r4, r0
        21daec:	e3a01000 	mov	r1, #0	; 0x0
        21daf0:	eb65119b 	bl	1b62164 <TUnit::$SetDelay(unsigned long)>
        21daf4:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        21daf8:	e3300002 	teq	r0, #2	; 0x2
        21dafc:	1a000003 	bne	21db10 <TSIUnit::EndSubs(void)+0x34>
        21db00:	e5940034 	ldr	r0, [r4, #52]	; fField52
        21db04:	e5901000 	ldr	r1, [r0]
        21db08:	e1a0e00f 	mov	lr, pc
        21db0c:	e281f024 	add	pc, r1, #36	; 0x24
        21db10:	eb653abb 	bl	1b6c604 <$GetTicks(void)>
        21db14:	e5d41027 	ldrb	r1, [r4, #39]	; fField39
        21db18:	e0801001 	add	r1, r0, r1
        21db1c:	e59f0014 	ldr	r0, [pc, #14]	; 21db38 <TSIUnit::EndSubs(void)+0x5c>
        21db20:	e5900000 	ldr	r0, [r0]
        21db24:	e5b02020 	ldr	r2, [r0, #32]!
        21db28:	e1510002 	cmp	r1, r2
        21db2c:	35801000 	strcc	r1, [r0]
        21db30:	e3a00000 	mov	r0, #0	; 0x0
        21db34:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        21db38:	0c10187c 	ldceq	8, cr1, [r0], -#496
    */
}

/**
 * Symbol: TSIUnit::EndUnit(void)
 * Address: 0021db3c
 */
TSIUnit::EndUnit(void) {
    /*
        21db3c:	e1a0c00d 	mov	ip, sp
        21db40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21db44:	e24cb004 	sub	fp, ip, #4	; 0x4
        21db48:	e1a04000 	mov	r4, r0
        21db4c:	e5901000 	ldr	r1, [r0]
        21db50:	e1a0e00f 	mov	lr, pc
        21db54:	e281f060 	add	pc, r1, #96	; 0x60
        21db58:	e1a00004 	mov	r0, r4
        21db5c:	e5941000 	ldr	r1, [r4]
        21db60:	e1a0e00f 	mov	lr, pc
        21db64:	e281f020 	add	pc, r1, #32	; 0x20
        21db68:	e1a06000 	mov	r6, r0
        21db6c:	e3a05000 	mov	r5, #0	; 0x0
        21db70:	e3500000 	cmp	r0, #0	; 0x0
        21db74:	9a00000b 	bls	21dba8 <TSIUnit::EndUnit(void)+0x6c>
        21db78:	e1a01005 	mov	r1, r5
        21db7c:	e1a00004 	mov	r0, r4
        21db80:	e5942000 	ldr	r2, [r4]
        21db84:	e1a0e00f 	mov	lr, pc
        21db88:	e282f098 	add	pc, r2, #152	; 0x98
        21db8c:	e3300000 	teq	r0, #0	; 0x0
        21db90:	15901000 	ldrne	r1, [r0]
        21db94:	11a0e00f 	movne	lr, pc
        21db98:	1281f024 	addne	pc, r1, #36	; 0x24
        21db9c:	e2855001 	add	r5, r5, #1	; 0x1
        21dba0:	e1550006 	cmp	r5, r6
        21dba4:	3afffff3 	bcc	21db78 <TSIUnit::EndUnit(void)+0x3c>
        21dba8:	e1a00004 	mov	r0, r4
        21dbac:	e5941000 	ldr	r1, [r4]
        21dbb0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        21dbb4:	e281f080 	add	pc, r1, #128	; 0x80
    */
}

/**
 * Symbol: TSIUnit::SubCount(void)
 * Address: 0021dbb8
 */
TSIUnit::SubCount(void) {
    /*
        21dbb8:	e5d02030 	ldrb	r2, [r0, #48]	; fField48
        21dbbc:	e3320000 	teq	r2, #0	; 0x0
        21dbc0:	0a000008 	beq	21dbe8 <TSIUnit::SubCount(void)+0x30>
        21dbc4:	e3320001 	teq	r2, #1	; 0x1
        21dbc8:	03a01001 	moveq	r1, #1	; 0x1
        21dbcc:	0a000006 	beq	21dbec <TSIUnit::SubCount(void)+0x34>
        21dbd0:	e3320002 	teq	r2, #2	; 0x2
        21dbd4:	1a000004 	bne	21dbec <TSIUnit::SubCount(void)+0x34>
        21dbd8:	e5900034 	ldr	r0, [r0, #52]	; fField52
        21dbdc:	e3300000 	teq	r0, #0	; 0x0
        21dbe0:	15b0100c 	ldrne	r1, [r0, #12]!	; fField12
        21dbe4:	1a000000 	bne	21dbec <TSIUnit::SubCount(void)+0x34>
        21dbe8:	e3a01000 	mov	r1, #0	; 0x0
        21dbec:	e1a00001 	mov	r0, r1
        21dbf0:	e1a0f00e 	mov	pc, lr
    */
}

