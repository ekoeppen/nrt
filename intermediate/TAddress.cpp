#include "include/TAddress.h"

/**
 * Symbol: TAddress::__ct(unsigned char)
 * Address: 00028cb0
 */
TAddress::TAddress(unsigned char) {
    /*
         28cb0:	e1a0c00d 	mov	ip, sp
         28cb4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         28cb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         28cbc:	e20140ff 	and	r4, r1, #255	; 0xff
         28cc0:	e3300000 	teq	r0, #0	; 0x0
         28cc4:	1a000003 	bne	28cd8 <TAddress::__ct(unsigned char)+0x28>
         28cc8:	e3a0000c 	mov	r0, #12	; 0xc
         28ccc:	eb6e9699 	bl	1bce738 <$__nw(unsigned int)>
         28cd0:	e3300000 	teq	r0, #0	; 0x0
         28cd4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         28cd8:	e5c04000 	strb	r4, [r0]
         28cdc:	e3a01000 	mov	r1, #0	; 0x0
         28ce0:	e5c01001 	strb	r1, [r0, #1]	; fField1
         28ce4:	e5801004 	str	r1, [r0, #4]	; fField4
         28ce8:	e5c01009 	strb	r1, [r0, #9]	; fField9
         28cec:	e5c01008 	strb	r1, [r0, #8]	; fField8
         28cf0:	e5c0100a 	strb	r1, [r0, #10]	; fField10
         28cf4:	e5c0100b 	strb	r1, [r0, #11]	; fField11
         28cf8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAddress::operator=(TAddress const &)
 * Address: 00028cfc
 */
TAddress::operator=(TAddress const &) {
    /*
         28cfc:	e5d12000 	ldrb	r2, [r1]
         28d00:	e5c02000 	strb	r2, [r0]
         28d04:	e5912004 	ldr	r2, [r1, #4]	; fField4
         28d08:	e5802004 	str	r2, [r0, #4]	; fField4
         28d0c:	e5d12001 	ldrb	r2, [r1, #1]	; fField1
         28d10:	e5c02001 	strb	r2, [r0, #1]	; fField1
         28d14:	e5911008 	ldr	r1, [r1, #8]	; fField8
         28d18:	e5a01008 	str	r1, [r0, #8]!	; fField8
         28d1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAddress::Equal(TAddress const &, AddressEquiv)
 * Address: 00028d20
 */
TAddress::Equal(TAddress const &, AddressEquiv) {
    /*
         28d20:	e3a00001 	mov	r0, #1	; 0x1
         28d24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAddress::SetToBroadcast(void)
 * Address: 00028d28
 */
TAddress::SetToBroadcast(void) {
    /*
         28d28:	e3a010ff 	mov	r1, #255	; 0xff
         28d2c:	e5c0100a 	strb	r1, [r0, #10]	; fField10
         28d30:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAddress::SetAddress(unsigned long, unsigned short, unsigned char, unsigned char)
 * Address: 00028d34
 */
TAddress::SetAddress(unsigned long, unsigned short, unsigned char, unsigned char) {
    /*
         28d34:	e1a02802 	mov	r2, r2, lsl #16
         28d38:	e1a02822 	mov	r2, r2, lsr #16
         28d3c:	e59dc000 	ldr	ip, [sp]
         28d40:	e5801004 	str	r1, [r0, #4]	; fField4
         28d44:	e5c02009 	strb	r2, [r0, #9]	; fField9
         28d48:	e1a01422 	mov	r1, r2, lsr #8
         28d4c:	e5c01008 	strb	r1, [r0, #8]	; fField8
         28d50:	e5c0300a 	strb	r3, [r0, #10]	; fField10
         28d54:	e5c0c00b 	strb	ip, [r0, #11]	; fField11
         28d58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAddress::SetAddress(unsigned short, unsigned char)
 * Address: 00028d5c
 */
TAddress::SetAddress(unsigned short, unsigned char) {
    /*
         28d5c:	e1a01801 	mov	r1, r1, lsl #16
         28d60:	e1a01821 	mov	r1, r1, lsr #16
         28d64:	e5c01009 	strb	r1, [r0, #9]	; fField9
         28d68:	e1a01421 	mov	r1, r1, lsr #8
         28d6c:	e5c01008 	strb	r1, [r0, #8]	; fField8
         28d70:	e5c0200a 	strb	r2, [r0, #10]	; fField10
         28d74:	e1a0f00e 	mov	pc, lr
         28d78:	00000000 	andeq	r0, r0, r0
    */
}

