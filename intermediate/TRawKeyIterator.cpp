#include "include/TRawKeyIterator.h"

/**
 * Symbol: TRawKeyIterator::__ct(RefVar const &)
 * Address: 000fac10
 */
TRawKeyIterator::TRawKeyIterator(RefVar const &) {
    /*
         fac10:	e1a0c00d 	mov	ip, sp
         fac14:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         fac18:	e24cb004 	sub	fp, ip, #4	; 0x4
         fac1c:	e1b04000 	movs	r4, r0
         fac20:	e1a05001 	mov	r5, r1
         fac24:	1a000005 	bne	fac40 <TRawKeyIterator::__ct(RefVar const &)+0x30>
         fac28:	e3a0002c 	mov	r0, #44	; 0x2c
         fac2c:	eb6b4ec1 	bl	1bce738 <$__nw(unsigned int)>
         fac30:	e1b04000 	movs	r4, r0
         fac34:	1a000001 	bne	fac40 <TRawKeyIterator::__ct(RefVar const &)+0x30>
         fac38:	e1a00004 	mov	r0, r4
         fac3c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         fac40:	e3a00002 	mov	r0, #2	; 0x2
         fac44:	eb6b1d40 	bl	1bc214c <$AllocateRefHandle(long)>
         fac48:	e3a06000 	mov	r6, #0	; 0x0
         fac4c:	e5840000 	str	r0, [r4]
         fac50:	e5a06004 	str	r6, [r0, #4]!	; fField4
         fac54:	e3a00002 	mov	r0, #2	; 0x2
         fac58:	eb6b1d3b 	bl	1bc214c <$AllocateRefHandle(long)>
         fac5c:	e5840004 	str	r0, [r4, #4]	; fField4
         fac60:	e5a06004 	str	r6, [r0, #4]!	; fField4
         fac64:	e3a00002 	mov	r0, #2	; 0x2
         fac68:	eb6b1d37 	bl	1bc214c <$AllocateRefHandle(long)>
         fac6c:	e584000c 	str	r0, [r4, #12]	; fField12
         fac70:	e5a06004 	str	r6, [r0, #4]!	; fField4
         fac74:	e3a00002 	mov	r0, #2	; 0x2
         fac78:	eb6b1d33 	bl	1bc214c <$AllocateRefHandle(long)>
         fac7c:	e5840010 	str	r0, [r4, #16]	; fField16
         fac80:	e5a06004 	str	r6, [r0, #4]!	; fField4
         fac84:	e284000c 	add	r0, r4, #12	; 0xc
         fac88:	e1a07000 	mov	r7, r0
         fac8c:	e5952000 	ldr	r2, [r5]
         fac90:	e5922000 	ldr	r2, [r2]
         fac94:	e5901000 	ldr	r1, [r0]
         fac98:	e5812000 	str	r2, [r1]
         fac9c:	e5900000 	ldr	r0, [r0]
         faca0:	e5900000 	ldr	r0, [r0]
         faca4:	eb6b2980 	bl	1bc52ac <$Length(long)>
         faca8:	e3a05000 	mov	r5, #0	; 0x0
         facac:	e2844024 	add	r4, r4, #36	; 0x24
         facb0:	e8840041 	stmia	r4, {r0, r6}
         facb4:	e2444024 	sub	r4, r4, #36	; 0x24
         facb8:	e3500000 	cmp	r0, #0	; 0x0
         facbc:	da00000e 	ble	facfc <TRawKeyIterator::__ct(RefVar const &)+0xec>
         facc0:	e5970000 	ldr	r0, [r7]
         facc4:	e5900000 	ldr	r0, [r0]
         facc8:	e1a01005 	mov	r1, r5
         faccc:	eb6b2560 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         facd0:	eb6b2975 	bl	1bc52ac <$Length(long)>
         facd4:	e2401002 	sub	r1, r0, #2	; 0x2
         facd8:	e3a00003 	mov	r0, #3	; 0x3
         facdc:	eb6adf17 	bl	1bb2940 <$__rt_sdiv>
         face0:	e5941028 	ldr	r1, [r4, #40]	; fField40
         face4:	e0800001 	add	r0, r0, r1
         face8:	e2855001 	add	r5, r5, #1	; 0x1
         facec:	e5840028 	str	r0, [r4, #40]	; fField40
         facf0:	e5940024 	ldr	r0, [r4, #36]	; fField36
         facf4:	e1500005 	cmp	r0, r5
         facf8:	cafffff0 	bgt	facc0 <TRawKeyIterator::__ct(RefVar const &)+0xb0>
         facfc:	e1a00004 	mov	r0, r4
         fad00:	eb6694d0 	bl	1aa0048 <TRawKeyIterator::$Reset(void)>
         fad04:	eaffffcb 	b	fac38 <TRawKeyIterator::__ct(RefVar const &)+0x28>
    */
}

/**
 * Symbol: TRawKeyIterator::Reset(void)
 * Address: 000fad08
 */
TRawKeyIterator::Reset(void) {
    /*
         fad08:	e1a0c00d 	mov	ip, sp
         fad0c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fad10:	e24cb004 	sub	fp, ip, #4	; 0x4
         fad14:	e1a04000 	mov	r4, r0
         fad18:	e3a00000 	mov	r0, #0	; 0x0
         fad1c:	e5840014 	str	r0, [r4, #20]	; fField20
         fad20:	e5840018 	str	r0, [r4, #24]	; fField24
         fad24:	e1a00004 	mov	r0, r4
         fad28:	eb668415 	bl	1a9bd84 <TRawKeyIterator::$LoadRow(void)>
         fad2c:	e1a00004 	mov	r0, r4
         fad30:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         fad34:	ea668010 	b	1a9ad7c <TRawKeyIterator::$LoadKey(void)>
    */
}

/**
 * Symbol: TRawKeyIterator::CopyInto(TRawKeyIterator *)
 * Address: 000fb7a8
 */
TRawKeyIterator::CopyInto(TRawKeyIterator *) {
    /*
         fb7a8:	e590200c 	ldr	r2, [r0, #12]	; fField12
         fb7ac:	e5922000 	ldr	r2, [r2]
         fb7b0:	e591300c 	ldr	r3, [r1, #12]	; fField12
         fb7b4:	e5832000 	str	r2, [r3]
         fb7b8:	e5902000 	ldr	r2, [r0]
         fb7bc:	e5923000 	ldr	r3, [r2]
         fb7c0:	e5912000 	ldr	r2, [r1]
         fb7c4:	e5823000 	str	r3, [r2]
         fb7c8:	e5902004 	ldr	r2, [r0, #4]	; fField4
         fb7cc:	e5922000 	ldr	r2, [r2]
         fb7d0:	e5913004 	ldr	r3, [r1, #4]	; fField4
         fb7d4:	e5832000 	str	r2, [r3]
         fb7d8:	e5902008 	ldr	r2, [r0, #8]	; fField8
         fb7dc:	e5812008 	str	r2, [r1, #8]	; fField8
         fb7e0:	e5903010 	ldr	r3, [r0, #16]	; fField16
         fb7e4:	e5933000 	ldr	r3, [r3]
         fb7e8:	e5912010 	ldr	r2, [r1, #16]	; fField16
         fb7ec:	e5823000 	str	r3, [r2]
         fb7f0:	e5902018 	ldr	r2, [r0, #24]	; fField24
         fb7f4:	e5812018 	str	r2, [r1, #24]	; fField24
         fb7f8:	e5902024 	ldr	r2, [r0, #36]	; fField36
         fb7fc:	e5812024 	str	r2, [r1, #36]	; fField36
         fb800:	e5902014 	ldr	r2, [r0, #20]	; fField20
         fb804:	e5812014 	str	r2, [r1, #20]	; fField20
         fb808:	e5902020 	ldr	r2, [r0, #32]	; fField32
         fb80c:	e5812020 	str	r2, [r1, #32]	; fField32
         fb810:	e5900028 	ldr	r0, [r0, #40]	; fField40
         fb814:	e5a10028 	str	r0, [r1, #40]!	; fField40
         fb818:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRawKeyIterator::LoadKey(void)
 * Address: 000fceb8
 */
TRawKeyIterator::LoadKey(void) {
    /*
         fceb8:	e1a0c00d 	mov	ip, sp
         fcebc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         fcec0:	e24cb004 	sub	fp, ip, #4	; 0x4
         fcec4:	e1a04000 	mov	r4, r0
         fcec8:	e3a06000 	mov	r6, #0	; 0x0
         fcecc:	e5901014 	ldr	r1, [r0, #20]	; fField20
         fced0:	e5900020 	ldr	r0, [r0, #32]	; fField32
         fced4:	e2847004 	add	r7, r4, #4	; 0x4
         fced8:	e1510000 	cmp	r1, r0
         fcedc:	b5940024 	ldrlt	r0, [r4, #36]	; fField36
         fcee0:	b5942018 	ldrlt	r2, [r4, #24]	; fField24
         fcee4:	b1520000 	cmplt	r2, r0
         fcee8:	aa00001d 	bge	fcf64 <TRawKeyIterator::LoadKey(void)+0xac>
         fceec:	e2840010 	add	r0, r4, #16	; 0x10
         fcef0:	e1a05000 	mov	r5, r0
         fcef4:	e0811081 	add	r1, r1, r1, lsl #1
         fcef8:	e2811002 	add	r1, r1, #2	; 0x2
         fcefc:	e5900000 	ldr	r0, [r0]
         fcf00:	e5900000 	ldr	r0, [r0]
         fcf04:	eb6b1cd2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fcf08:	e5941000 	ldr	r1, [r4]
         fcf0c:	e5810000 	str	r0, [r1]
         fcf10:	e5941014 	ldr	r1, [r4, #20]	; fField20
         fcf14:	e0811081 	add	r1, r1, r1, lsl #1
         fcf18:	e2811003 	add	r1, r1, #3	; 0x3
         fcf1c:	e5950000 	ldr	r0, [r5]
         fcf20:	e5900000 	ldr	r0, [r0]
         fcf24:	eb6b1cca 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fcf28:	e5971000 	ldr	r1, [r7]
         fcf2c:	e5810000 	str	r0, [r1]
         fcf30:	e5940014 	ldr	r0, [r4, #20]	; fField20
         fcf34:	e0800080 	add	r0, r0, r0, lsl #1
         fcf38:	e2801004 	add	r1, r0, #4	; 0x4
         fcf3c:	e5950000 	ldr	r0, [r5]
         fcf40:	e5900000 	ldr	r0, [r0]
         fcf44:	eb6b1cc2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fcf48:	e3100003 	tst	r0, #3	; 0x3
         fcf4c:	01a00140 	moveq	r0, r0, asr #2
         fcf50:	0a000000 	beq	fcf58 <TRawKeyIterator::LoadKey(void)+0xa0>
         fcf54:	eb6b1470 	bl	1bc211c <$_RINTError(long)>
         fcf58:	e5a40008 	str	r0, [r4, #8]!	; fField8
         fcf5c:	e1a00006 	mov	r0, r6
         fcf60:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         fcf64:	e3a06001 	mov	r6, #1	; 0x1
         fcf68:	e3a00002 	mov	r0, #2	; 0x2
         fcf6c:	e5941000 	ldr	r1, [r4]
         fcf70:	e5810000 	str	r0, [r1]
         fcf74:	e5971000 	ldr	r1, [r7]
         fcf78:	e5810000 	str	r0, [r1]
         fcf7c:	eafffff5 	b	fcf58 <TRawKeyIterator::LoadKey(void)+0xa0>
    */
}

/**
 * Symbol: TRawKeyIterator::LoadRow(void)
 * Address: 000fcfec
 */
TRawKeyIterator::LoadRow(void) {
    /*
         fcfec:	e1a0c00d 	mov	ip, sp
         fcff0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         fcff4:	e24cb004 	sub	fp, ip, #4	; 0x4
         fcff8:	e1a04000 	mov	r4, r0
         fcffc:	e3a06000 	mov	r6, #0	; 0x0
         fd000:	e5806014 	str	r6, [r0, #20]	; fField20
         fd004:	eb0a36c7 	bl	38ab28 <C$$dtorvec$$Limit+0x1b4>
         fd008:	e2845010 	add	r5, r4, #16	; 0x10
         fd00c:	e3300000 	teq	r0, #0	; 0x0
         fd010:	0a000004 	beq	fd028 <TRawKeyIterator::LoadRow(void)+0x3c>
         fd014:	e3a00002 	mov	r0, #2	; 0x2
         fd018:	e5951000 	ldr	r1, [r5]
         fd01c:	e5810000 	str	r0, [r1]
         fd020:	e5a46020 	str	r6, [r4, #32]!	; fField32
         fd024:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         fd028:	e1a06005 	mov	r6, r5
         fd02c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         fd030:	e5941018 	ldr	r1, [r4, #24]	; fField24
         fd034:	e5900000 	ldr	r0, [r0]
         fd038:	eb6b1c85 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fd03c:	e5961000 	ldr	r1, [r6]
         fd040:	e5810000 	str	r0, [r1]
         fd044:	e5950000 	ldr	r0, [r5]
         fd048:	e5900000 	ldr	r0, [r0]
         fd04c:	eb6b2096 	bl	1bc52ac <$Length(long)>
         fd050:	e2401002 	sub	r1, r0, #2	; 0x2
         fd054:	e3a00003 	mov	r0, #3	; 0x3
         fd058:	eb6ad638 	bl	1bb2940 <$__rt_sdiv>
         fd05c:	e5a40020 	str	r0, [r4, #32]!	; fField32
         fd060:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRawKeyIterator::Next(void)
 * Address: 000fd064
 */
TRawKeyIterator::Next(void) {
    /*
         fd064:	e1a0c00d 	mov	ip, sp
         fd068:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fd06c:	e24cb004 	sub	fp, ip, #4	; 0x4
         fd070:	e1a04000 	mov	r4, r0
         fd074:	e5900014 	ldr	r0, [r0, #20]	; fField20
         fd078:	e2800001 	add	r0, r0, #1	; 0x1
         fd07c:	e5840014 	str	r0, [r4, #20]	; fField20
         fd080:	e5941020 	ldr	r1, [r4, #32]	; fField32
         fd084:	e1500001 	cmp	r0, r1
         fd088:	ba000004 	blt	fd0a0 <TRawKeyIterator::Next(void)+0x3c>
         fd08c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         fd090:	e2800001 	add	r0, r0, #1	; 0x1
         fd094:	e5840018 	str	r0, [r4, #24]	; fField24
         fd098:	e1a00004 	mov	r0, r4
         fd09c:	eb667b38 	bl	1a9bd84 <TRawKeyIterator::$LoadRow(void)>
         fd0a0:	e1a00004 	mov	r0, r4
         fd0a4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         fd0a8:	ea667733 	b	1a9ad7c <TRawKeyIterator::$LoadKey(void)>
    */
}

