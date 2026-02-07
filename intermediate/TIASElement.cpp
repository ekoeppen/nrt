#include "include/TIASElement.h"

/**
 * Symbol: TIASElement::__ct(void)
 * Address: 000f1e14
 */
TIASElement::TIASElement(void) {
    /*
         f1e14:	e1a0c00d 	mov	ip, sp
         f1e18:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         f1e1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1e20:	e3300000 	teq	r0, #0	; 0x0
         f1e24:	1a000003 	bne	f1e38 <TIASElement::__ct(void)+0x24>
         f1e28:	e3a00010 	mov	r0, #16	; 0x10
         f1e2c:	eb6b7241 	bl	1bce738 <$__nw(unsigned int)>
         f1e30:	e3300000 	teq	r0, #0	; 0x0
         f1e34:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         f1e38:	e3a01000 	mov	r1, #0	; 0x0
         f1e3c:	e5c01000 	strb	r1, [r0]
         f1e40:	e5801004 	str	r1, [r0, #4]	; fField4
         f1e44:	e5801008 	str	r1, [r0, #8]	; fField8
         f1e48:	e580100c 	str	r1, [r0, #12]	; fField12
         f1e4c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TIASElement::__dt(void)
 * Address: 000f1e50
 */
TIASElement::~TIASElement(void) {
    /*
         f1e50:	e1a0c00d 	mov	ip, sp
         f1e54:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f1e58:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1e5c:	e1a04000 	mov	r4, r0
         f1e60:	e1a05001 	mov	r5, r1
         f1e64:	e590000c 	ldr	r0, [r0, #12]	; fField12
         f1e68:	e3300000 	teq	r0, #0	; 0x0
         f1e6c:	12841008 	addne	r1, r4, #8	; 0x8
         f1e70:	11300001 	teqne	r0, r1
         f1e74:	0a000002 	beq	f1e84 <TIASElement::__dt(void)+0x34>
         f1e78:	eb6b82b6 	bl	1bd2958 <$free>
         f1e7c:	e3a00000 	mov	r0, #0	; 0x0
         f1e80:	e584000c 	str	r0, [r4, #12]	; fField12
         f1e84:	e3150001 	tst	r5, #1	; 0x1
         f1e88:	11a00004 	movne	r0, r4
         f1e8c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         f1e90:	1a6b6e12 	bne	1bcd6e0 <$__dl(void *)>
         f1e94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIASElement::SetInteger(unsigned long)
 * Address: 000f1e98
 */
TIASElement::SetInteger(unsigned long) {
    /*
         f1e98:	e3a02001 	mov	r2, #1	; 0x1
         f1e9c:	e5c02000 	strb	r2, [r0]
         f1ea0:	e3a02004 	mov	r2, #4	; 0x4
         f1ea4:	e5801008 	str	r1, [r0, #8]	; fField8
         f1ea8:	e5802004 	str	r2, [r0, #4]	; fField4
         f1eac:	e2801008 	add	r1, r0, #8	; 0x8
         f1eb0:	e5a0100c 	str	r1, [r0, #12]!	; fField12
         f1eb4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIASElement::SetNBytes(unsigned long, unsigned long)
 * Address: 000f1eb8
 */
TIASElement::SetNBytes(unsigned long, unsigned long) {
    /*
         f1eb8:	e3a03002 	mov	r3, #2	; 0x2
         f1ebc:	e5c03000 	strb	r3, [r0]
         f1ec0:	e5801008 	str	r1, [r0, #8]	; fField8
         f1ec4:	e5802004 	str	r2, [r0, #4]	; fField4
         f1ec8:	e2801008 	add	r1, r0, #8	; 0x8
         f1ecc:	e5a0100c 	str	r1, [r0, #12]!	; fField12
         f1ed0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIASElement::SetString(unsigned char const *)
 * Address: 000f1ed4
 */
TIASElement::SetString(unsigned char const *) {
    /*
         f1ed4:	e1a0c00d 	mov	ip, sp
         f1ed8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f1edc:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1ee0:	e1a04000 	mov	r4, r0
         f1ee4:	e1a05001 	mov	r5, r1
         f1ee8:	e3a00003 	mov	r0, #3	; 0x3
         f1eec:	e5c40000 	strb	r0, [r4]
         f1ef0:	e1a00001 	mov	r0, r1
         f1ef4:	eb6b0eed 	bl	1bb5ab0 <$strlen>
         f1ef8:	e3a06000 	mov	r6, #0	; 0x0
         f1efc:	e9840041 	stmib	r4, {r0, r6}
         f1f00:	e2800001 	add	r0, r0, #1	; 0x1
         f1f04:	eb6b9317 	bl	1bd6b68 <$malloc>
         f1f08:	e5a4000c 	str	r0, [r4, #12]!	; fField12
         f1f0c:	e3300000 	teq	r0, #0	; 0x0
         f1f10:	03a000a8 	moveq	r0, #168	; 0xa8
         f1f14:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
         f1f18:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         f1f1c:	e1a01005 	mov	r1, r5
         f1f20:	eb6b0ee1 	bl	1bb5aac <$strcpy>
         f1f24:	e1a00006 	mov	r0, r6
         f1f28:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIASElement::GetInteger(unsigned long &)
 * Address: 000f1f9c
 */
TIASElement::GetInteger(unsigned long &) {
    /*
         f1f9c:	e5d02000 	ldrb	r2, [r0]
         f1fa0:	e3320001 	teq	r2, #1	; 0x1
         f1fa4:	13a0008d 	movne	r0, #141	; 0x8d
         f1fa8:	12400c97 	subne	r0, r0, #38656	; 0x9700
         f1fac:	11a0f00e 	movne	pc, lr
         f1fb0:	e5900008 	ldr	r0, [r0, #8]	; fField8
         f1fb4:	e5810000 	str	r0, [r1]
         f1fb8:	e3a00000 	mov	r0, #0	; 0x0
         f1fbc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIASElement::AddInfoToBuffer(CBuffer *)
 * Address: 000f1fc0
 */
TIASElement::AddInfoToBuffer(CBuffer *) {
    /*
         f1fc0:	e1a0c00d 	mov	ip, sp
         f1fc4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f1fc8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1fcc:	e1a04000 	mov	r4, r0
         f1fd0:	e1a05001 	mov	r5, r1
         f1fd4:	e24dd008 	sub	sp, sp, #8	; 0x8
         f1fd8:	e3a03000 	mov	r3, #0	; 0x0
         f1fdc:	e5cd3000 	strb	r3, [sp]
         f1fe0:	e5cd3001 	strb	r3, [sp, #1]
         f1fe4:	e28d0002 	add	r0, sp, #2	; 0x2
         f1fe8:	e5d41000 	ldrb	r1, [r4]
         f1fec:	e4c01001 	strb	r1, [r0], #1
         f1ff0:	e5d4c000 	ldrb	ip, [r4]
         f1ff4:	e28d1004 	add	r1, sp, #4	; 0x4
         f1ff8:	e2812001 	add	r2, r1, #1	; 0x1
         f1ffc:	e33c0002 	teq	ip, #2	; 0x2
         f2000:	133c0003 	teqne	ip, #3	; 0x3
         f2004:	1a000004 	bne	f201c <TIASElement::AddInfoToBuffer(CBuffer *)+0x5c>
         f2008:	e5c03000 	strb	r3, [r0]
         f200c:	e1a00001 	mov	r0, r1
         f2010:	e5941004 	ldr	r1, [r4, #4]	; fField4
         f2014:	e5c01000 	strb	r1, [r0]
         f2018:	e1a00002 	mov	r0, r2
         f201c:	e040200d 	sub	r2, r0, sp
         f2020:	e1a0100d 	mov	r1, sp
         f2024:	e1a00005 	mov	r0, r5
         f2028:	e5953000 	ldr	r3, [r5]
         f202c:	e1a0e00f 	mov	lr, pc
         f2030:	e283f020 	add	pc, r3, #32	; 0x20
         f2034:	e1a00005 	mov	r0, r5
         f2038:	e5b42004 	ldr	r2, [r4, #4]!	; fField4
         f203c:	e5941008 	ldr	r1, [r4, #8]	; fField8
         f2040:	e5953000 	ldr	r3, [r5]
         f2044:	e1a0e00f 	mov	lr, pc
         f2048:	e283f020 	add	pc, r3, #32	; 0x20
         f204c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIASElement::ExtractInfoFromBuffer(CBuffer *)
 * Address: 000f2050
 */
TIASElement::ExtractInfoFromBuffer(CBuffer *) {
    /*
         f2050:	e1a0c00d 	mov	ip, sp
         f2054:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f2058:	e24cb004 	sub	fp, ip, #4	; 0x4
         f205c:	e1a05000 	mov	r5, r0
         f2060:	e1a04001 	mov	r4, r1
         f2064:	e24dd008 	sub	sp, sp, #8	; 0x8
         f2068:	e1a03001 	mov	r3, r1
         f206c:	e28d1004 	add	r1, sp, #4	; 0x4
         f2070:	e1a00003 	mov	r0, r3
         f2074:	e3a02003 	mov	r2, #3	; 0x3
         f2078:	e5933000 	ldr	r3, [r3]
         f207c:	e1a0e00f 	mov	lr, pc
         f2080:	e283f014 	add	pc, r3, #20	; 0x14
         f2084:	e3a0708d 	mov	r7, #141	; 0x8d
         f2088:	e2477c97 	sub	r7, r7, #38656	; 0x9700
         f208c:	e3300003 	teq	r0, #3	; 0x3
         f2090:	0a000001 	beq	f209c <TIASElement::ExtractInfoFromBuffer(CBuffer *)+0x4c>
         f2094:	e1a00007 	mov	r0, r7
         f2098:	ea000017 	b	f20fc <TIASElement::ExtractInfoFromBuffer(CBuffer *)+0xac>
         f209c:	e3a06000 	mov	r6, #0	; 0x0
         f20a0:	e5dd0006 	ldrb	r0, [sp, #6]
         f20a4:	e3300000 	teq	r0, #0	; 0x0
         f20a8:	0a000012 	beq	f20f8 <TIASElement::ExtractInfoFromBuffer(CBuffer *)+0xa8>
         f20ac:	e3300001 	teq	r0, #1	; 0x1
         f20b0:	0a000005 	beq	f20cc <TIASElement::ExtractInfoFromBuffer(CBuffer *)+0x7c>
         f20b4:	e3a06072 	mov	r6, #114	; 0x72
         f20b8:	e2466c3f 	sub	r6, r6, #16128	; 0x3f00
         f20bc:	e3300002 	teq	r0, #2	; 0x2
         f20c0:	13300003 	teqne	r0, #3	; 0x3
         f20c4:	11a06007 	movne	r6, r7
         f20c8:	ea00000a 	b	f20f8 <TIASElement::ExtractInfoFromBuffer(CBuffer *)+0xa8>
         f20cc:	e1a0100d 	mov	r1, sp
         f20d0:	e1a00004 	mov	r0, r4
         f20d4:	e3a02004 	mov	r2, #4	; 0x4
         f20d8:	e5943000 	ldr	r3, [r4]
         f20dc:	e1a0e00f 	mov	lr, pc
         f20e0:	e283f014 	add	pc, r3, #20	; 0x14
         f20e4:	e3300004 	teq	r0, #4	; 0x4
         f20e8:	1affffe9 	bne	f2094 <TIASElement::ExtractInfoFromBuffer(CBuffer *)+0x44>
         f20ec:	e1a00005 	mov	r0, r5
         f20f0:	e59d1000 	ldr	r1, [sp]
         f20f4:	eb65021a 	bl	1a32964 <TIASElement::$SetInteger(unsigned long)>
         f20f8:	e1a00006 	mov	r0, r6
         f20fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

