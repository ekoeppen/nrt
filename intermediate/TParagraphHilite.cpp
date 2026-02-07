#include "include/TParagraphHilite.h"

/**
 * Symbol: TParagraphHilite::__ct(long)
 * Address: 00180e38
 */
TParagraphHilite::TParagraphHilite(long) {
    /*
        180e38:	e1a0c00d 	mov	ip, sp
        180e3c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        180e40:	e24cb004 	sub	fp, ip, #4	; 0x4
        180e44:	e1b04000 	movs	r4, r0
        180e48:	e1a05001 	mov	r5, r1
        180e4c:	1a000005 	bne	180e68 <TParagraphHilite::__ct(long)+0x30>
        180e50:	e3a0001c 	mov	r0, #28	; 0x1c
        180e54:	eb693637 	bl	1bce738 <$__nw(unsigned int)>
        180e58:	e1b04000 	movs	r4, r0
        180e5c:	1a000001 	bne	180e68 <TParagraphHilite::__ct(long)+0x30>
        180e60:	e1a00004 	mov	r0, r4
        180e64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        180e68:	e1a00004 	mov	r0, r4
        180e6c:	eb641d6b 	bl	1a88420 <THilite::$__ct(void)>
        180e70:	e2840018 	add	r0, r4, #24	; 0x18
        180e74:	e1a06000 	mov	r6, r0
        180e78:	eb64195d 	bl	1a873f4 <TRegionStruct::$__ct(void)>
        180e7c:	e59f003c 	ldr	r0, [pc, #3c]	; 180ec0 <TParagraphHilite::__ct(long)+0x88>
        180e80:	e5840000 	str	r0, [r4]
        180e84:	e2850001 	add	r0, r5, #1	; 0x1
        180e88:	e1a00080 	mov	r0, r0, lsl #1
        180e8c:	eb693629 	bl	1bce738 <$__nw(unsigned int)>
        180e90:	e5840014 	str	r0, [r4, #20]	; fField20
        180e94:	e3300000 	teq	r0, #0	; 0x0
        180e98:	1a000005 	bne	180eb4 <TParagraphHilite::__ct(long)+0x7c>
        180e9c:	e59f0020 	ldr	r0, [pc, #20]	; 180ec4 <TParagraphHilite::__ct(long)+0x8c>	; fField20
        180ea0:	e5900000 	ldr	r0, [r0]
        180ea4:	e3a02000 	mov	r2, #0	; 0x0
        180ea8:	e3a010e9 	mov	r1, #233	; 0xe9
        180eac:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        180eb0:	eb6988b9 	bl	1be319c <$Throw>
        180eb4:	e5960000 	ldr	r0, [r6]
        180eb8:	eb674aca 	bl	1b539e8 <$SetEmptyRgn(Region **)>
        180ebc:	eaffffe7 	b	180e60 <TParagraphHilite::__ct(long)+0x28>
        180ec0:	0001e53c 	andeq	lr, r1, ip, lsr r5
        180ec4:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TParagraphHilite::__dt(void)
 * Address: 00180ec8
 */
TParagraphHilite::~TParagraphHilite(void) {
    /*
        180ec8:	e1a0c00d 	mov	ip, sp
        180ecc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        180ed0:	e24cb004 	sub	fp, ip, #4	; 0x4
        180ed4:	e1a04000 	mov	r4, r0
        180ed8:	e1a05001 	mov	r5, r1
        180edc:	e59f0038 	ldr	r0, [pc, #38]	; 180f1c <TParagraphHilite::__dt(void)+0x54>
        180ee0:	e5840000 	str	r0, [r4]
        180ee4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        180ee8:	e3300000 	teq	r0, #0	; 0x0
        180eec:	1b6931fb 	blne	1bcd6e0 <$__dl(void *)>
        180ef0:	e2840018 	add	r0, r4, #24	; 0x18
        180ef4:	e3a01000 	mov	r1, #0	; 0x0
        180ef8:	eb641d56 	bl	1a88458 <TRegionStruct::$__dt(void)>
        180efc:	e1a00004 	mov	r0, r4
        180f00:	e3a01000 	mov	r1, #0	; 0x0
        180f04:	eb64215d 	bl	1a89480 <THilite::$__dt(void)>
        180f08:	e3150001 	tst	r5, #1	; 0x1
        180f0c:	11a00004 	movne	r0, r4
        180f10:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        180f14:	1a6931f1 	bne	1bcd6e0 <$__dl(void *)>
        180f18:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        180f1c:	0001e53c 	andeq	lr, r1, ip, lsr r5
    */
}

/**
 * Symbol: TParagraphHilite::Clone(void)
 * Address: 00180f20
 */
TParagraphHilite::Clone(void) {
    /*
        180f20:	e1a0c00d 	mov	ip, sp
        180f24:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        180f28:	e24cb004 	sub	fp, ip, #4	; 0x4
        180f2c:	e1a04000 	mov	r4, r0
        180f30:	e5900014 	ldr	r0, [r0, #20]	; fField20
        180f34:	eb69b609 	bl	1bee760 <$Ustrlen>
        180f38:	e1a01000 	mov	r1, r0
        180f3c:	e3a00000 	mov	r0, #0	; 0x0
        180f40:	eb641d31 	bl	1a8840c <TParagraphHilite::$__ct(long)>
        180f44:	e1b05000 	movs	r5, r0
        180f48:	1a000005 	bne	180f64 <TParagraphHilite::Clone(void)+0x44>
        180f4c:	e59f0024 	ldr	r0, [pc, #24]	; 180f78 <TParagraphHilite::Clone(void)+0x58>	; fField24
        180f50:	e5900000 	ldr	r0, [r0]
        180f54:	e3a02000 	mov	r2, #0	; 0x0
        180f58:	e3a010e9 	mov	r1, #233	; 0xe9
        180f5c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        180f60:	eb69888d 	bl	1be319c <$Throw>
        180f64:	e1a01004 	mov	r1, r4
        180f68:	e1a00005 	mov	r0, r5
        180f6c:	eb6435f6 	bl	1a8e74c <TParagraphHilite::$CopyFrom(THilite *)>
        180f70:	e1a00005 	mov	r0, r5
        180f74:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        180f78:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TParagraphHilite::CopyFrom(THilite *)
 * Address: 00180f7c
 */
TParagraphHilite::CopyFrom(THilite *) {
    /*
        180f7c:	e1a0c00d 	mov	ip, sp
        180f80:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        180f84:	e24cb004 	sub	fp, ip, #4	; 0x4
        180f88:	e1a04000 	mov	r4, r0
        180f8c:	e1a05001 	mov	r5, r1
        180f90:	e591000c 	ldr	r0, [r1, #12]	; fField12
        180f94:	e584000c 	str	r0, [r4, #12]	; fField12
        180f98:	e5910010 	ldr	r0, [r1, #16]	; fField16
        180f9c:	e5840010 	str	r0, [r4, #16]	; fField16
        180fa0:	e5911014 	ldr	r1, [r1, #20]	; fField20
        180fa4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        180fa8:	eb69b5eb 	bl	1bee75c <$Ustrcpy>
        180fac:	e5950018 	ldr	r0, [r5, #24]	; fField24
        180fb0:	e5941018 	ldr	r1, [r4, #24]	; fField24
        180fb4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        180fb8:	ea6731bd 	b	1b4d6b4 <$CopyRgn__FPP6RegionT1>
    */
}

/**
 * Symbol: TParagraphHilite::Overlaps(TRect const &)
 * Address: 00180fbc
 */
TParagraphHilite::Overlaps(TRect const &) {
    /*
        180fbc:	e1a0c00d 	mov	ip, sp
        180fc0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        180fc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        180fc8:	e1a05000 	mov	r5, r0
        180fcc:	e1a04001 	mov	r4, r1
        180fd0:	e2800018 	add	r0, r0, #24	; 0x18
        180fd4:	e1a06000 	mov	r6, r0
        180fd8:	e5900000 	ldr	r0, [r0]
        180fdc:	eb6735ce 	bl	1b4e71c <$EmptyRgn(Region **)>
        180fe0:	e3300000 	teq	r0, #0	; 0x0
        180fe4:	12850004 	addne	r0, r5, #4	; 0x4
        180fe8:	11a01004 	movne	r1, r4
        180fec:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        180ff0:	1a646f98 	bne	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
        180ff4:	01a00004 	moveq	r0, r4
        180ff8:	05961000 	ldreq	r1, [r6]
        180ffc:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
        181000:	0a674a64 	beq	1b53998 <$RectInRgn(Rect *, Region **)>
    */
}

/**
 * Symbol: TParagraphHilite::Encloses(TPoint const &)
 * Address: 00181040
 */
TParagraphHilite::Encloses(TPoint const &) {
    /*
        181040:	e1a0c00d 	mov	ip, sp
        181044:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        181048:	e24cb004 	sub	fp, ip, #4	; 0x4
        18104c:	e1a05000 	mov	r5, r0
        181050:	e1a04001 	mov	r4, r1
        181054:	e2800018 	add	r0, r0, #24	; 0x18
        181058:	e1a06000 	mov	r6, r0
        18105c:	e5900000 	ldr	r0, [r0]
        181060:	eb6735ad 	bl	1b4e71c <$EmptyRgn(Region **)>
        181064:	e3300000 	teq	r0, #0	; 0x0
        181068:	1a000004 	bne	181080 <TParagraphHilite::Encloses(TPoint const &)+0x40>
        18106c:	e5940000 	ldr	r0, [r4]
        181070:	e52d0004 	str	r0, [sp, -#4]!
        181074:	e5961000 	ldr	r1, [r6]
        181078:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        18107c:	ea67462f 	b	1b52940 <$PtInRgn(Point, Region **)>
        181080:	e2851004 	add	r1, r5, #4	; 0x4
        181084:	e5940000 	ldr	r0, [r4]
        181088:	e52d0004 	str	r0, [sp, -#4]!
        18108c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        181090:	ea674629 	b	1b5293c <$PtInRect(Point, Rect *)>
    */
}

/**
 * Symbol: TParagraphHilite::Area(void)
 * Address: 00181094
 */
TParagraphHilite::Area(void) {
    /*
        181094:	e1a0c00d 	mov	ip, sp
        181098:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        18109c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1810a0:	e1a05000 	mov	r5, r0
        1810a4:	e1a04001 	mov	r4, r1
        1810a8:	e24dd014 	sub	sp, sp, #20	; 0x14
        1810ac:	e1a0000d 	mov	r0, sp
        1810b0:	eb6418ca 	bl	1a873e0 <TRegionVar::$__ct(void)>
        1810b4:	e2840018 	add	r0, r4, #24	; 0x18
        1810b8:	e1a06000 	mov	r6, r0
        1810bc:	e5900000 	ldr	r0, [r0]
        1810c0:	eb673595 	bl	1b4e71c <$EmptyRgn(Region **)>
        1810c4:	e3300000 	teq	r0, #0	; 0x0
        1810c8:	1a000003 	bne	1810dc <TParagraphHilite::Area(void)+0x48>
        1810cc:	e5960000 	ldr	r0, [r6]
        1810d0:	e59d1000 	ldr	r1, [sp]
        1810d4:	eb673176 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        1810d8:	ea000002 	b	1810e8 <TParagraphHilite::Area(void)+0x54>
        1810dc:	e2841004 	add	r1, r4, #4	; 0x4
        1810e0:	e59d0000 	ldr	r0, [sp]
        1810e4:	eb674a2c 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        1810e8:	e1a0100d 	mov	r1, sp
        1810ec:	e1a00005 	mov	r0, r5
        1810f0:	eb641ccb 	bl	1a88424 <TRegion::$__ct(TRegionVar &)>
        1810f4:	e1a0000d 	mov	r0, sp
        1810f8:	e3a01000 	mov	r1, #0	; 0x0
        1810fc:	eb641cd0 	bl	1a88444 <TRegionVar::$__dt(void)>
        181100:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

