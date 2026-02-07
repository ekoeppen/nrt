#include "DDKIncludes/PCMCIA/CardPCMCIA.h"

/**
 * Symbol: TCardConfiguration::__ct(void)
 * Address: 0004fa18
 */
TCardConfiguration::TCardConfiguration() {
    /*
         4fa18:	e1a0c00d 	mov	ip, sp
         4fa1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4fa20:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fa24:	e1b04000 	movs	r4, r0
         4fa28:	1a000003 	bne	4fa3c <TCardConfiguration::__ct(void)+0x24>
         4fa2c:	e3a00f57 	mov	r0, #348	; 0x15c
         4fa30:	eb6dfb40 	bl	1bce738 <$__nw(unsigned int)>
         4fa34:	e1b04000 	movs	r4, r0
         4fa38:	0a000001 	beq	4fa44 <TCardConfiguration::__ct(void)+0x2c>
         4fa3c:	e1a00004 	mov	r0, r4
         4fa40:	eb6e0373 	bl	1bd0814 <TCardConfiguration::$Clear(void)>
         4fa44:	e1a00004 	mov	r0, r4
         4fa48:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardConfiguration::__dt(void)
 * Address: 0004fd70
 */
TCardConfiguration::~TCardConfiguration() {
    /*
         4fd70:	e3110001 	tst	r1, #1	; 0x1
         4fd74:	1a6df659 	bne	1bcd6e0 <$__dl(void *)>
         4fd78:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardConfiguration::Clear(void)
 * Address: 0004fd7c
 */
void			TCardConfiguration::Clear() {
    /*
         4fd7c:	e3a03000 	mov	r3, #0	; 0x0
         4fd80:	e5c03155 	strb	r3, [r0, #341]	; fField341
         4fd84:	e3a01070 	mov	r1, #112	; 0x70
         4fd88:	e5c01156 	strb	r1, [r0, #342]	; fField342
         4fd8c:	e5c03150 	strb	r3, [r0, #336]	; fField336
         4fd90:	e5c03157 	strb	r3, [r0, #343]	; fField343
         4fd94:	e3a01000 	mov	r1, #0	; 0x0
         4fd98:	e0802101 	add	r2, r0, r1, lsl #2
         4fd9c:	e5823038 	str	r3, [r2, #56]	; fIo8BitOK
         4fda0:	e582301c 	str	r3, [r2, #28]	; fIoLengths
         4fda4:	e7803101 	str	r3, [r0, r1, lsl #2]	; fField2
         4fda8:	e582308c 	str	r3, [r2, #140]
         4fdac:	e5823070 	str	r3, [r2, #112]
         4fdb0:	e2811001 	add	r1, r1, #1	; 0x1
         4fdb4:	e20110ff 	and	r1, r1, #255	; 0xff
         4fdb8:	e3510007 	cmp	r1, #7	; 0x7
         4fdbc:	e5a23054 	str	r3, [r2, #84]!	; fMiscBits
         4fdc0:	bafffff4 	blt	4fd98 <TCardConfiguration::Clear(void)+0x1c>
         4fdc4:	e3a01000 	mov	r1, #0	; 0x0
         4fdc8:	e1a02003 	mov	r2, r3
         4fdcc:	e080c101 	add	ip, r0, r1, lsl #2
         4fdd0:	e58c20a8 	str	r2, [ip, #168]
         4fdd4:	e2811001 	add	r1, r1, #1	; 0x1
         4fdd8:	e20110ff 	and	r1, r1, #255	; 0xff
         4fddc:	e5ac20c8 	str	r2, [ip, #200]!
         4fde0:	e3510008 	cmp	r1, #8	; 0x8
         4fde4:	bafffff8 	blt	4fdcc <TCardConfiguration::Clear(void)+0x50>
         4fde8:	e3a01000 	mov	r1, #0	; 0x0
         4fdec:	e0803101 	add	r3, r0, r1, lsl #2
         4fdf0:	e58320e8 	str	r2, [r3, #232]
         4fdf4:	e5832108 	str	r2, [r3, #264]
         4fdf8:	e2811001 	add	r1, r1, #1	; 0x1
         4fdfc:	e20110ff 	and	r1, r1, #255	; 0xff
         4fe00:	e3510008 	cmp	r1, #8	; 0x8
         4fe04:	e5a32128 	str	r2, [r3, #296]!
         4fe08:	bafffff7 	blt	4fdec <TCardConfiguration::Clear(void)+0x70>
         4fe0c:	e5802148 	str	r2, [r0, #328]	; fField328
         4fe10:	e580214c 	str	r2, [r0, #332]	; fField332
         4fe14:	e5c02151 	strb	r2, [r0, #337]	; fField337
         4fe18:	e5c02152 	strb	r2, [r0, #338]	; fField338
         4fe1c:	e5c02153 	strb	r2, [r0, #339]	; fField339
         4fe20:	e5c02154 	strb	r2, [r0, #340]	; fField340
         4fe24:	e5c02158 	strb	r2, [r0, #344]	; fField344
         4fe28:	e5c02159 	strb	r2, [r0, #345]	; fField345
         4fe2c:	e5c0215a 	strb	r2, [r0, #346]	; fField346
         4fe30:	e5c0215b 	strb	r2, [r0, #347]	; fField347
         4fe34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardConfiguration::operator=(TCardConfiguration const &)
 * Address: 0004fe38
 */
TCardConfiguration::operator=(TCardConfiguration const &) {
    /*
         4fe38:	e1a0c00d 	mov	ip, sp
         4fe3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4fe40:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fe44:	e1a04000 	mov	r4, r0
         4fe48:	e1a00001 	mov	r0, r1
         4fe4c:	e1a01004 	mov	r1, r4
         4fe50:	e3a02f57 	mov	r2, #348	; 0x15c
         4fe54:	eb6e3c3e 	bl	1bdef54 <$BlockMove>
         4fe58:	e1a00004 	mov	r0, r4
         4fe5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

