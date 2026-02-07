#include "include/TCHDeviceInfo.h"

/**
 * Symbol: TCHDeviceInfo::__ct(void)
 * Address: 00047bd4
 */
TCHDeviceInfo::TCHDeviceInfo(void) {
    /*
         47bd4:	e1a0c00d 	mov	ip, sp
         47bd8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         47bdc:	e24cb004 	sub	fp, ip, #4	; 0x4
         47be0:	e3300000 	teq	r0, #0	; 0x0
         47be4:	1a000003 	bne	47bf8 <TCHDeviceInfo::__ct(void)+0x24>
         47be8:	e3a00030 	mov	r0, #48	; 0x30
         47bec:	eb6e1ad1 	bl	1bce738 <$__nw(unsigned int)>
         47bf0:	e3300000 	teq	r0, #0	; 0x0
         47bf4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         47bf8:	e3a01000 	mov	r1, #0	; 0x0
         47bfc:	e5801000 	str	r1, [r0]
         47c00:	e5801004 	str	r1, [r0, #4]	; fField4
         47c04:	e5801008 	str	r1, [r0, #8]	; fField8
         47c08:	e580100c 	str	r1, [r0, #12]	; fField12
         47c0c:	e5801010 	str	r1, [r0, #16]	; fField16
         47c10:	e5c01014 	strb	r1, [r0, #20]	; fField20
         47c14:	e5c01015 	strb	r1, [r0, #21]	; fField21
         47c18:	e5c01016 	strb	r1, [r0, #22]	; fField22
         47c1c:	e5c01017 	strb	r1, [r0, #23]	; fField23
         47c20:	e5801018 	str	r1, [r0, #24]	; fField24
         47c24:	e580101c 	str	r1, [r0, #28]	; fField28
         47c28:	e5801020 	str	r1, [r0, #32]	; fField32
         47c2c:	e5801024 	str	r1, [r0, #36]	; fField36
         47c30:	e5c01029 	strb	r1, [r0, #41]	; fField41
         47c34:	e5c01028 	strb	r1, [r0, #40]	; fField40
         47c38:	e5c0102b 	strb	r1, [r0, #43]	; fField43
         47c3c:	e5c0102a 	strb	r1, [r0, #42]	; fField42
         47c40:	e5c0102c 	strb	r1, [r0, #44]	; fField44
         47c44:	e5c0102d 	strb	r1, [r0, #45]	; fField45
         47c48:	e5c0102e 	strb	r1, [r0, #46]	; fField46
         47c4c:	e5c0102f 	strb	r1, [r0, #47]	; fField47
         47c50:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCHDeviceInfo::__dt(void)
 * Address: 00047c54
 */
TCHDeviceInfo::~TCHDeviceInfo(void) {
    /*
         47c54:	e1a0c00d 	mov	ip, sp
         47c58:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         47c5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         47c60:	e1a04000 	mov	r4, r0
         47c64:	e1a05001 	mov	r5, r1
         47c68:	e5900008 	ldr	r0, [r0, #8]	; fField8
         47c6c:	e3300000 	teq	r0, #0	; 0x0
         47c70:	0a000005 	beq	47c8c <TCHDeviceInfo::__dt(void)+0x38>
         47c74:	e5d41016 	ldrb	r1, [r4, #22]	; fField22
         47c78:	e3310001 	teq	r1, #1	; 0x1
         47c7c:	1a000001 	bne	47c88 <TCHDeviceInfo::__dt(void)+0x34>
         47c80:	eb0cfa06 	bl	3864a0 <TFlash::Delete(void)>
         47c84:	ea000000 	b	47c8c <TCHDeviceInfo::__dt(void)+0x38>
         47c88:	eb0cf3aa 	bl	384b38 <TSerialChip::Delete(void)>
         47c8c:	e3150001 	tst	r5, #1	; 0x1
         47c90:	11a00004 	movne	r0, r4
         47c94:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         47c98:	1a6e1690 	bne	1bcd6e0 <$__dl(void *)>
         47c9c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

