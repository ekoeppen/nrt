#include "include/TCRC16.h"

/**
 * Symbol: TCRC16::Reset(void)
 * Address: 00049cd0
 */
TCRC16::Reset(void) {
    /*
         49cd0:	e3a01000 	mov	r1, #0	; 0x0
         49cd4:	e5a01004 	str	r1, [r0, #4]!	; fField4
         49cd8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCRC16::ComputeCRC(unsigned char)
 * Address: 00049cdc
 */
TCRC16::ComputeCRC(unsigned char) {
    /*
         49cdc:	e20110ff 	and	r1, r1, #255	; 0xff
         49ce0:	e5902004 	ldr	r2, [r0, #4]	; fField4
         49ce4:	e20230ff 	and	r3, r2, #255	; 0xff
         49ce8:	e0233001 	eor	r3, r3, r1
         49cec:	e203c00f 	and	ip, r3, #15	; 0xf
         49cf0:	e59f1028 	ldr	r1, [pc, #28]	; 49d20 <TCRC16::ComputeCRC(unsigned char)+0x44>
         49cf4:	e791108c 	ldr	r1, [r1, ip, lsl #1]	; fField1
         49cf8:	e1a01821 	mov	r1, r1, lsr #16
         49cfc:	e20330f0 	and	r3, r3, #240	; 0xf0
         49d00:	e1a03223 	mov	r3, r3, lsr #4
         49d04:	e59fc018 	ldr	ip, [pc, #18]	; 49d24 <TCRC16::ComputeCRC(unsigned char)+0x48>
         49d08:	e79c3083 	ldr	r3, [ip, r3, lsl #1]	; fField1
         49d0c:	e1a03823 	mov	r3, r3, lsr #16
         49d10:	e0231001 	eor	r1, r3, r1
         49d14:	e0211422 	eor	r1, r1, r2, lsr #8
         49d18:	e5a01004 	str	r1, [r0, #4]!	; fField4
         49d1c:	e1a0f00e 	mov	pc, lr
         49d20:	00366e18 	eoreqs	r6, r6, r8, lsl lr
         49d24:	00366e38 	eoreqs	r6, r6, r8, lsr lr
    */
}

/**
 * Symbol: TCRC16::ComputeCRC(CBufferList &)
 * Address: 00049d28
 */
TCRC16::ComputeCRC(CBufferList &) {
    /*
         49d28:	e1a0c00d 	mov	ip, sp
         49d2c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         49d30:	e24cb004 	sub	fp, ip, #4	; 0x4
         49d34:	e1a05000 	mov	r5, r0
         49d38:	e1a04001 	mov	r4, r1
         49d3c:	e1a00001 	mov	r0, r1
         49d40:	e1a03001 	mov	r3, r1
         49d44:	e3e02000 	mvn	r2, #0	; 0x0
         49d48:	e3a01000 	mov	r1, #0	; 0x0
         49d4c:	e5933000 	ldr	r3, [r3]
         49d50:	e1a0e00f 	mov	lr, pc
         49d54:	e283f038 	add	pc, r3, #56	; 0x38
         49d58:	e1a00004 	mov	r0, r4
         49d5c:	e5941000 	ldr	r1, [r4]
         49d60:	e1a0e00f 	mov	lr, pc
         49d64:	e281f010 	add	pc, r1, #16	; 0x10
         49d68:	e59f7058 	ldr	r7, [pc, #58]	; 49dc8 <TCRC16::ComputeCRC(CBufferList &)+0xa0>
         49d6c:	e59f6058 	ldr	r6, [pc, #58]	; 49dcc <TCRC16::ComputeCRC(CBufferList &)+0xa4>
         49d70:	e3700001 	cmn	r0, #1	; 0x1
         49d74:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         49d78:	e5951004 	ldr	r1, [r5, #4]	; fField4
         49d7c:	e20120ff 	and	r2, r1, #255	; 0xff
         49d80:	e0222000 	eor	r2, r2, r0
         49d84:	e202000f 	and	r0, r2, #15	; 0xf
         49d88:	e7970080 	ldr	r0, [r7, r0, lsl #1]	; fField1
         49d8c:	e1a00820 	mov	r0, r0, lsr #16
         49d90:	e20220f0 	and	r2, r2, #240	; 0xf0
         49d94:	e1a02222 	mov	r2, r2, lsr #4
         49d98:	e7962082 	ldr	r2, [r6, r2, lsl #1]	; fField1
         49d9c:	e1a02822 	mov	r2, r2, lsr #16
         49da0:	e0220000 	eor	r0, r2, r0
         49da4:	e0200421 	eor	r0, r0, r1, lsr #8
         49da8:	e5850004 	str	r0, [r5, #4]	; fField4
         49dac:	e1a00004 	mov	r0, r4
         49db0:	e5941000 	ldr	r1, [r4]
         49db4:	e1a0e00f 	mov	lr, pc
         49db8:	e281f010 	add	pc, r1, #16	; 0x10
         49dbc:	e3700001 	cmn	r0, #1	; 0x1
         49dc0:	1affffec 	bne	49d78 <TCRC16::ComputeCRC(CBufferList &)+0x50>
         49dc4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         49dc8:	00366e18 	eoreqs	r6, r6, r8, lsl lr
         49dcc:	00366e38 	eoreqs	r6, r6, r8, lsr lr
    */
}

/**
 * Symbol: TCRC16::ComputeCRC(unsigned char *, unsigned long)
 * Address: 00049dd0
 */
TCRC16::ComputeCRC(unsigned char *, unsigned long) {
    /*
         49dd0:	e92d4030 	stmdb	sp!, {r4, r5, lr}
         49dd4:	e59f404c 	ldr	r4, [pc, #4c]	; 49e28 <TCRC16::ComputeCRC(unsigned char *, unsigned long)+0x58>	; fField4
         49dd8:	e59fe04c 	ldr	lr, [pc, #4c]	; 49e2c <TCRC16::ComputeCRC(unsigned char *, unsigned long)+0x5c>	; fField4
         49ddc:	e3320000 	teq	r2, #0	; 0x0
         49de0:	08bd8030 	ldmeqia	sp!, {r4, r5, pc}
         49de4:	e4d13001 	ldrb	r3, [r1], #1	; fField1
         49de8:	e590c004 	ldr	ip, [r0, #4]	; fField4
         49dec:	e20c50ff 	and	r5, ip, #255	; 0xff
         49df0:	e0253003 	eor	r3, r5, r3
         49df4:	e203500f 	and	r5, r3, #15	; 0xf
         49df8:	e7945085 	ldr	r5, [r4, r5, lsl #1]	; fField1
         49dfc:	e1a05825 	mov	r5, r5, lsr #16
         49e00:	e20330f0 	and	r3, r3, #240	; 0xf0
         49e04:	e1a03223 	mov	r3, r3, lsr #4
         49e08:	e79e3083 	ldr	r3, [lr, r3, lsl #1]	; fField1
         49e0c:	e1a03823 	mov	r3, r3, lsr #16
         49e10:	e0233005 	eor	r3, r3, r5
         49e14:	e023342c 	eor	r3, r3, ip, lsr #8
         49e18:	e2522001 	subs	r2, r2, #1	; 0x1
         49e1c:	e5803004 	str	r3, [r0, #4]	; fField4
         49e20:	1affffef 	bne	49de4 <TCRC16::ComputeCRC(unsigned char *, unsigned long)+0x14>
         49e24:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
         49e28:	00366e18 	eoreqs	r6, r6, r8, lsl lr
         49e2c:	00366e38 	eoreqs	r6, r6, r8, lsr lr
    */
}

/**
 * Symbol: TCRC16::Get(void)
 * Address: 00049e30
 */
TCRC16::Get(void) {
    /*
         49e30:	e5901004 	ldr	r1, [r0, #4]	; fField4
         49e34:	e5c01001 	strb	r1, [r0, #1]	; fField1
         49e38:	e1a01421 	mov	r1, r1, lsr #8
         49e3c:	e5c01000 	strb	r1, [r0]
         49e40:	e1a0f00e 	mov	pc, lr
    */
}

