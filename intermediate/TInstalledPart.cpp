#include "include/TInstalledPart.h"

/**
 * Symbol: TInstalledPart::__ct(unsigned long, long, long, unsigned char, unsigned char, unsigned char, unsigned char, unsigned long)
 * Address: 0015de50
 */
TInstalledPart::TInstalledPart(unsigned long, long, long, unsigned char, unsigned char, unsigned char, unsigned char, unsigned long) {
    /*
        15de50:	e1a0c00d 	mov	ip, sp
        15de54:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15de58:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15de5c:	e24cb014 	sub	fp, ip, #20	; 0x14
        15de60:	e1a05001 	mov	r5, r1
        15de64:	e1a04002 	mov	r4, r2
        15de68:	e59bc014 	ldr	ip, [fp, #20]
        15de6c:	e20c60ff 	and	r6, ip, #255	; 0xff
        15de70:	e59b3018 	ldr	r3, [fp, #24]
        15de74:	e20370ff 	and	r7, r3, #255	; 0xff
        15de78:	e59b201c 	ldr	r2, [fp, #28]
        15de7c:	e20280ff 	and	r8, r2, #255	; 0xff
        15de80:	e28ba020 	add	sl, fp, #32	; 0x20
        15de84:	e89a0402 	ldmia	sl, {r1, sl}
        15de88:	e20190ff 	and	r9, r1, #255	; 0xff
        15de8c:	e3300000 	teq	r0, #0	; 0x0
        15de90:	1a000003 	bne	15dea4 <TInstalledPart::__ct(unsigned long, long, long, unsigned char, unsigned char, unsigned char, unsigned char, unsigned long)+0x54>
        15de94:	e3a00014 	mov	r0, #20	; 0x14
        15de98:	eb69c226 	bl	1bce738 <$__nw(unsigned int)>
        15de9c:	e3300000 	teq	r0, #0	; 0x0
        15dea0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        15dea4:	e5804004 	str	r4, [r0, #4]	; fField4
        15dea8:	e5805000 	str	r5, [r0]
        15deac:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        15deb0:	e5803008 	str	r3, [r0, #8]	; fField8
        15deb4:	e5901010 	ldr	r1, [r0, #16]	; fField16
        15deb8:	e3c11102 	bic	r1, r1, #-2147483648	; 0x80000000
        15debc:	e1811f86 	orr	r1, r1, r6, lsl #31
        15dec0:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
        15dec4:	e2082001 	and	r2, r8, #1	; 0x1
        15dec8:	e1811f02 	orr	r1, r1, r2, lsl #30
        15decc:	e3c11202 	bic	r1, r1, #536870912	; 0x20000000
        15ded0:	e2092001 	and	r2, r9, #1	; 0x1
        15ded4:	e1811e82 	orr	r1, r1, r2, lsl #29
        15ded8:	e3c11201 	bic	r1, r1, #268435456	; 0x10000000
        15dedc:	e2072001 	and	r2, r7, #1	; 0x1
        15dee0:	e1811e02 	orr	r1, r1, r2, lsl #28
        15dee4:	e5801010 	str	r1, [r0, #16]	; fField16
        15dee8:	e580a00c 	str	sl, [r0, #12]	; fField12
        15deec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

