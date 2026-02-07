#include "DDKIncludes/PCMCIA/CardPCMCIA.h"

/**
 * Symbol: TCardDevice::__ct(unsigned long, unsigned long, unsigned long, unsigned char, unsigned char, unsigned char, unsigned char, unsigned long)
 * Address: 0004ef1c
 */
TCardDevice::TCardDevice();								// make a blank one {
    /*
         4ef1c:	e1a0c00d 	mov	ip, sp
         4ef20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4ef24:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         4ef28:	e24cb014 	sub	fp, ip, #20	; 0x14
         4ef2c:	e1a05001 	mov	r5, r1
         4ef30:	e1a04002 	mov	r4, r2
         4ef34:	e59bc014 	ldr	ip, [fp, #20]	; fDeviceType
         4ef38:	e20c60ff 	and	r6, ip, #255	; 0xff
         4ef3c:	e59b3018 	ldr	r3, [fp, #24]	; fJedecMfr
         4ef40:	e20370ff 	and	r7, r3, #255	; 0xff
         4ef44:	e59b201c 	ldr	r2, [fp, #28]	; fJedecMfrInfo
         4ef48:	e20280ff 	and	r8, r2, #255	; 0xff
         4ef4c:	e28ba020 	add	sl, fp, #32	; 0x20
         4ef50:	e89a0402 	ldmia	sl, {r1, sl}
         4ef54:	e20190ff 	and	r9, r1, #255	; 0xff
         4ef58:	e3300000 	teq	r0, #0	; 0x0
         4ef5c:	1a000003 	bne	4ef70 <TCardDevice::__ct(unsigned long, unsigned long, unsigned long, unsigned char, unsigned char, unsigned char, unsigned char, unsigned long)+0x54>
         4ef60:	e3a00020 	mov	r0, #32	; 0x20
         4ef64:	eb6dfdf3 	bl	1bce738 <$__nw(unsigned int)>
         4ef68:	e3300000 	teq	r0, #0	; 0x0
         4ef6c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         4ef70:	e9800030 	stmib	r0, {r4, r5}
         4ef74:	e580a000 	str	sl, [r0]
         4ef78:	e59b3010 	ldr	r3, [fp, #16]	; fVcc
         4ef7c:	e580300c 	str	r3, [r0, #12]	; fnsecSpeed
         4ef80:	e5901010 	ldr	r1, [r0, #16]	; fVcc
         4ef84:	e3c11102 	bic	r1, r1, #-2147483648	; 0x80000000
         4ef88:	e1811f86 	orr	r1, r1, r6, lsl #31
         4ef8c:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
         4ef90:	e2072001 	and	r2, r7, #1	; 0x1
         4ef94:	e1811f02 	orr	r1, r1, r2, lsl #30
         4ef98:	e3c11202 	bic	r1, r1, #536870912	; 0x20000000
         4ef9c:	e2082001 	and	r2, r8, #1	; 0x1
         4efa0:	e1811e82 	orr	r1, r1, r2, lsl #29
         4efa4:	e5801010 	str	r1, [r0, #16]	; fVcc
         4efa8:	e5c09014 	strb	r9, [r0, #20]	; fDeviceType
         4efac:	e3a01000 	mov	r1, #0	; 0x0
         4efb0:	e5c01015 	strb	r1, [r0, #21]	; fField21
         4efb4:	e5c01016 	strb	r1, [r0, #22]	; fField22
         4efb8:	e5c01019 	strb	r1, [r0, #25]	; fField25
         4efbc:	e5c01018 	strb	r1, [r0, #24]	; fJedecMfr
         4efc0:	e5c01017 	strb	r1, [r0, #23]	; fField23
         4efc4:	e5c0101c 	strb	r1, [r0, #28]	; fJedecMfrInfo
         4efc8:	e5c0101b 	strb	r1, [r0, #27]	; fField27
         4efcc:	e5c0101a 	strb	r1, [r0, #26]	; fField26
         4efd0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCardDevice::__dt(void)
 * Address: 0004efd4
 */
TCardDevice::~TCardDevice() {
    /*
         4efd4:	e3110001 	tst	r1, #1	; 0x1
         4efd8:	1a6df9c0 	bne	1bcd6e0 <$__dl(void *)>
         4efdc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardDevice::__ct(void)
 * Address: 0004fe60
 */
TCardDevice::TCardDevice();								// make a blank one {
    /*
         4fe60:	e1a0c00d 	mov	ip, sp
         4fe64:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4fe68:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fe6c:	e3300000 	teq	r0, #0	; 0x0
         4fe70:	1a000003 	bne	4fe84 <TCardDevice::__ct(void)+0x24>
         4fe74:	e3a00020 	mov	r0, #32	; 0x20
         4fe78:	eb6dfa2e 	bl	1bce738 <$__nw(unsigned int)>
         4fe7c:	e3300000 	teq	r0, #0	; 0x0
         4fe80:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         4fe84:	e3a01000 	mov	r1, #0	; 0x0
         4fe88:	e5801000 	str	r1, [r0]
         4fe8c:	e5801008 	str	r1, [r0, #8]	; fSize
         4fe90:	e5801004 	str	r1, [r0, #4]	; fStartOffset
         4fe94:	e580100c 	str	r1, [r0, #12]	; fnsecSpeed
         4fe98:	e5902010 	ldr	r2, [r0, #16]	; fVcc
         4fe9c:	e3c2220e 	bic	r2, r2, #-536870912	; 0xe0000000
         4fea0:	e5802010 	str	r2, [r0, #16]	; fVcc
         4fea4:	e5c01014 	strb	r1, [r0, #20]	; fDeviceType
         4fea8:	e5c01015 	strb	r1, [r0, #21]	; fField21
         4feac:	e5c01016 	strb	r1, [r0, #22]	; fField22
         4feb0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

