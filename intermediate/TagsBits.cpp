#include "include/TagsBits.h"

/**
 * Symbol: TagsBits::SetTag(short)
 * Address: 002d0b04
 */
TagsBits::SetTag(short) {
    /*
        2d0b04:	e1a0c00d 	mov	ip, sp
        2d0b08:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2d0b0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d0b10:	e1a07801 	mov	r7, r1, lsl #16
        2d0b14:	e1a07847 	mov	r7, r7, asr #16
        2d0b18:	e1a011c7 	mov	r1, r7, asr #3
        2d0b1c:	e1a06801 	mov	r6, r1, lsl #16
        2d0b20:	e1a06846 	mov	r6, r6, asr #16
        2d0b24:	e2861001 	add	r1, r6, #1	; 0x1
        2d0b28:	e1a04801 	mov	r4, r1, lsl #16
        2d0b2c:	e1a04844 	mov	r4, r4, asr #16
        2d0b30:	e5901000 	ldr	r1, [r0]
        2d0b34:	e1a01401 	mov	r1, r1, lsl #8
        2d0b38:	e1a01c21 	mov	r1, r1, lsr #24
        2d0b3c:	e1a05801 	mov	r5, r1, lsl #16
        2d0b40:	e1a05845 	mov	r5, r5, asr #16
        2d0b44:	e2808002 	add	r8, r0, #2	; 0x2
        2d0b48:	e1540005 	cmp	r4, r5
        2d0b4c:	da00000d 	ble	2d0b88 <TagsBits::SetTag(short)+0x84>
        2d0b50:	e1a01004 	mov	r1, r4
        2d0b54:	eb5e4165 	bl	1a610f0 <SKey::$SetSize(short)>
        2d0b58:	e0880005 	add	r0, r8, r5
        2d0b5c:	e0441005 	sub	r1, r4, r5
        2d0b60:	e2411001 	sub	r1, r1, #1	; 0x1
        2d0b64:	e1a01801 	mov	r1, r1, lsl #16
        2d0b68:	e1b01841 	movs	r1, r1, asr #16
        2d0b6c:	e3a02000 	mov	r2, #0	; 0x0
        2d0b70:	4a000004 	bmi	2d0b88 <TagsBits::SetTag(short)+0x84>
        2d0b74:	e4c02001 	strb	r2, [r0], #1	; fField1
        2d0b78:	e2411001 	sub	r1, r1, #1	; 0x1
        2d0b7c:	e1a01801 	mov	r1, r1, lsl #16
        2d0b80:	e1b01841 	movs	r1, r1, asr #16
        2d0b84:	5afffffa 	bpl	2d0b74 <TagsBits::SetTag(short)+0x70>
        2d0b88:	e0470186 	sub	r0, r7, r6, lsl #3
        2d0b8c:	e3a01001 	mov	r1, #1	; 0x1
        2d0b90:	e1a00011 	mov	r0, r1, lsl r0
        2d0b94:	e0881006 	add	r1, r8, r6
        2d0b98:	e5d12000 	ldrb	r2, [r1]
        2d0b9c:	e1820000 	orr	r0, r2, r0
        2d0ba0:	e5c10000 	strb	r0, [r1]
        2d0ba4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TagsBits::ValidTest( const(TagsBits const &, long))
 * Address: 002d0d0c
 */
TagsBits::ValidTest( const(TagsBits const &, long)) {
    /*
        2d0d0c:	e1a0c00d 	mov	ip, sp
        2d0d10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d0d14:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d0d18:	e3320000 	teq	r2, #0	; 0x0
        2d0d1c:	1a000002 	bne	2d0d2c <TagsBits::ValidTest( const(TagsBits const &, long))+0x20>
        2d0d20:	eb00697e 	bl	2eb320 <SKey::Equals( const(SKey const &))>
        2d0d24:	e20000ff 	and	r0, r0, #255	; 0xff
        2d0d28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2d0d2c:	e5903000 	ldr	r3, [r0]
        2d0d30:	e1a03403 	mov	r3, r3, lsl #8
        2d0d34:	e1a03c23 	mov	r3, r3, lsr #24
        2d0d38:	e591c000 	ldr	ip, [r1]
        2d0d3c:	e1a0e40c 	mov	lr, ip, lsl #8
        2d0d40:	e1a0ec2e 	mov	lr, lr, lsr #24
        2d0d44:	e3a0c000 	mov	ip, #0	; 0x0
        2d0d48:	e153000e 	cmp	r3, lr
        2d0d4c:	0a000003 	beq	2d0d60 <TagsBits::ValidTest( const(TagsBits const &, long))+0x54>
        2d0d50:	c1a0300e 	movgt	r3, lr
        2d0d54:	ca000001 	bgt	2d0d60 <TagsBits::ValidTest( const(TagsBits const &, long))+0x54>
        2d0d58:	e3320001 	teq	r2, #1	; 0x1
        2d0d5c:	0a000019 	beq	2d0dc8 <TagsBits::ValidTest( const(TagsBits const &, long))+0xbc>
        2d0d60:	e2805002 	add	r5, r0, #2	; 0x2
        2d0d64:	e2814002 	add	r4, r1, #2	; 0x2
        2d0d68:	e253e001 	subs	lr, r3, #1	; 0x1
        2d0d6c:	e3a00001 	mov	r0, #1	; 0x1
        2d0d70:	4a000012 	bmi	2d0dc0 <TagsBits::ValidTest( const(TagsBits const &, long))+0xb4>
        2d0d74:	e4d53001 	ldrb	r3, [r5], #1	; fField1
        2d0d78:	e4d41001 	ldrb	r1, [r4], #1	; fField1
        2d0d7c:	e3320001 	teq	r2, #1	; 0x1
        2d0d80:	0a000006 	beq	2d0da0 <TagsBits::ValidTest( const(TagsBits const &, long))+0x94>
        2d0d84:	e3320002 	teq	r2, #2	; 0x2
        2d0d88:	0a000008 	beq	2d0db0 <TagsBits::ValidTest( const(TagsBits const &, long))+0xa4>
        2d0d8c:	e3320003 	teq	r2, #3	; 0x3
        2d0d90:	1a000008 	bne	2d0db8 <TagsBits::ValidTest( const(TagsBits const &, long))+0xac>
        2d0d94:	e1130001 	tst	r3, r1
        2d0d98:	1a00000a 	bne	2d0dc8 <TagsBits::ValidTest( const(TagsBits const &, long))+0xbc>
        2d0d9c:	ea000005 	b	2d0db8 <TagsBits::ValidTest( const(TagsBits const &, long))+0xac>
        2d0da0:	e0033001 	and	r3, r3, r1
        2d0da4:	e1330001 	teq	r3, r1
        2d0da8:	1a000006 	bne	2d0dc8 <TagsBits::ValidTest( const(TagsBits const &, long))+0xbc>
        2d0dac:	ea000001 	b	2d0db8 <TagsBits::ValidTest( const(TagsBits const &, long))+0xac>
        2d0db0:	e1130001 	tst	r3, r1
        2d0db4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        2d0db8:	e25ee001 	subs	lr, lr, #1	; 0x1
        2d0dbc:	5affffec 	bpl	2d0d74 <TagsBits::ValidTest( const(TagsBits const &, long))+0x68>
        2d0dc0:	e3320002 	teq	r2, #2	; 0x2
        2d0dc4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        2d0dc8:	e1a0000c 	mov	r0, ip
        2d0dcc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2d0dd0:	e1a0c00d 	mov	ip, sp
        2d0dd4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d0dd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d0ddc:	e1a04000 	mov	r4, r0
        2d0de0:	e5900000 	ldr	r0, [r0]
        2d0de4:	e1a00400 	mov	r0, r0, lsl #8
        2d0de8:	e1a00c20 	mov	r0, r0, lsr #24
        2d0dec:	e2806002 	add	r6, r0, #2	; 0x2
        2d0df0:	e1a01006 	mov	r1, r6
        2d0df4:	e59f0030 	ldr	r0, [pc, #30]	; 2d0e2c <TagsBits::ValidTest( const(TagsBits const &, long))+0x120>
        2d0df8:	eb63c4cf 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        2d0dfc:	eb63c4d2 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0e00:	e1a05000 	mov	r5, r0
        2d0e04:	e5900000 	ldr	r0, [r0]
        2d0e08:	eb63c4d3 	bl	1bc215c <$BinaryData(long)>
        2d0e0c:	e1a02006 	mov	r2, r6
        2d0e10:	e1a01004 	mov	r1, r4
        2d0e14:	eb638f0d 	bl	1bb4a50 <$memcpy>
        2d0e18:	e5954000 	ldr	r4, [r5]
        2d0e1c:	e1a00005 	mov	r0, r5
        2d0e20:	eb63c8e5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0e24:	e1a00004 	mov	r0, r4
        2d0e28:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2d0e2c:	00684a48 	rsbeq	r4, r8, r8, asr #20
    */
}

