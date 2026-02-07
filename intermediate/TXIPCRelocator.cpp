#include "include/TXIPCRelocator.h"

/**
 * Symbol: TXIPCRelocator::__ct(void)
 * Address: 00278d98
 */
TXIPCRelocator::TXIPCRelocator(void) {
    /*
        278d98:	e1a0c00d 	mov	ip, sp
        278d9c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        278da0:	e24cb004 	sub	fp, ip, #4	; 0x4
        278da4:	e3300000 	teq	r0, #0	; 0x0
        278da8:	1a000003 	bne	278dbc <TXIPCRelocator::__ct(void)+0x24>
        278dac:	e3a00f4f 	mov	r0, #316	; 0x13c
        278db0:	eb655660 	bl	1bce738 <$__nw(unsigned int)>
        278db4:	e3300000 	teq	r0, #0	; 0x0
        278db8:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        278dbc:	e59f103c 	ldr	r1, [pc, #3c]	; 278e00 <TXIPCRelocator::__ct(void)+0x68>
        278dc0:	e5801000 	str	r1, [r0]
        278dc4:	e3a01000 	mov	r1, #0	; 0x0
        278dc8:	e5801004 	str	r1, [r0, #4]	; fField4
        278dcc:	e5801008 	str	r1, [r0, #8]	; fField8
        278dd0:	e580100c 	str	r1, [r0, #12]	; fField12
        278dd4:	e3e02000 	mvn	r2, #0	; 0x0
        278dd8:	e5801010 	str	r1, [r0, #16]	; fField16
        278ddc:	e5802018 	str	r2, [r0, #24]	; fField24
        278de0:	e5801014 	str	r1, [r0, #20]	; fField20
        278de4:	e3a020ff 	mov	r2, #255	; 0xff
        278de8:	e580101c 	str	r1, [r0, #28]	; fField28
        278dec:	e5c02021 	strb	r2, [r0, #33]	; fField33
        278df0:	e5c02020 	strb	r2, [r0, #32]	; fField32
        278df4:	e5c01023 	strb	r1, [r0, #35]	; fField35
        278df8:	e5c01022 	strb	r1, [r0, #34]	; fField34
        278dfc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        278e00:	0001de08 	andeq	sp, r1, r8, lsl #28
    */
}

/**
 * Symbol: TXIPCRelocator::__dt(void)
 * Address: 00278e04
 */
TXIPCRelocator::~TXIPCRelocator(void) {
    /*
        278e04:	e59f200c 	ldr	r2, [pc, #c]	; 278e18 <TXIPCRelocator::__dt(void)+0x14>
        278e08:	e3110001 	tst	r1, #1	; 0x1
        278e0c:	e5802000 	str	r2, [r0]
        278e10:	1a655232 	bne	1bcd6e0 <$__dl(void *)>
        278e14:	e1a0f00e 	mov	pc, lr
        278e18:	0001de08 	andeq	sp, r1, r8, lsl #28
    */
}

/**
 * Symbol: TXIPCRelocator::Relocate(char *, unsigned long)
 * Address: 00278e1c
 */
TXIPCRelocator::Relocate(char *, unsigned long) {
    /*
        278e1c:	e92d4010 	stmdb	sp!, {r4, lr}
        278e20:	e1a0c001 	mov	ip, r1
        278e24:	e5901018 	ldr	r1, [r0, #24]	; fField24
        278e28:	e3310000 	teq	r1, #0	; 0x0
        278e2c:	13e000a2 	mvnne	r0, #162	; 0xa2
        278e30:	12400b0a 	subne	r0, r0, #10240	; 0x2800
        278e34:	18bd8010 	ldmneia	sp!, {r4, pc}
        278e38:	e5901014 	ldr	r1, [r0, #20]	; fField20
        278e3c:	e3310000 	teq	r1, #0	; 0x0
        278e40:	0a00000f 	beq	278e84 <TXIPCRelocator::Relocate(char *, unsigned long)+0x68>
        278e44:	e3a01000 	mov	r1, #0	; 0x0
        278e48:	e5903004 	ldr	r3, [r0, #4]	; fField4
        278e4c:	e3530000 	cmp	r3, #0	; 0x0
        278e50:	da00000b 	ble	278e84 <TXIPCRelocator::Relocate(char *, unsigned long)+0x68>
        278e54:	e0803001 	add	r3, r0, r1
        278e58:	e5d33024 	ldrb	r3, [r3, #36]	; fField36
        278e5c:	e08c3103 	add	r3, ip, r3, lsl #2
        278e60:	e590e01c 	ldr	lr, [r0, #28]	; fField28
        278e64:	e042400e 	sub	r4, r2, lr
        278e68:	e593e000 	ldr	lr, [r3]
        278e6c:	e084e00e 	add	lr, r4, lr
        278e70:	e2811001 	add	r1, r1, #1	; 0x1
        278e74:	e583e000 	str	lr, [r3]
        278e78:	e5903004 	ldr	r3, [r0, #4]	; fField4
        278e7c:	e1530001 	cmp	r3, r1
        278e80:	cafffff3 	bgt	278e54 <TXIPCRelocator::Relocate(char *, unsigned long)+0x38>
        278e84:	e3a00000 	mov	r0, #0	; 0x0
        278e88:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TXIPCRelocator::GetTheNextRelocEntry(void)
 * Address: 00278e8c
 */
TXIPCRelocator::GetTheNextRelocEntry(void) {
    /*
        278e8c:	e3e02000 	mvn	r2, #0	; 0x0
        278e90:	e5901018 	ldr	r1, [r0, #24]	; fField24
        278e94:	e3310000 	teq	r1, #0	; 0x0
        278e98:	1a000009 	bne	278ec4 <TXIPCRelocator::GetTheNextRelocEntry(void)+0x38>
        278e9c:	e5901008 	ldr	r1, [r0, #8]	; fField8
        278ea0:	e5903004 	ldr	r3, [r0, #4]	; fField4
        278ea4:	e1510003 	cmp	r1, r3
        278ea8:	2a000005 	bcs	278ec4 <TXIPCRelocator::GetTheNextRelocEntry(void)+0x38>
        278eac:	e2812001 	add	r2, r1, #1	; 0x1
        278eb0:	e5802008 	str	r2, [r0, #8]	; fField8
        278eb4:	e0810000 	add	r0, r1, r0
        278eb8:	e5d00024 	ldrb	r0, [r0, #36]	; fField36
        278ebc:	e1a00100 	mov	r0, r0, lsl #2
        278ec0:	e1a0f00e 	mov	pc, lr
        278ec4:	e1a00002 	mov	r0, r2
        278ec8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXIPCRelocator::Init(TStore *, unsigned long, unsigned long, unsigned long, unsigned long *)
 * Address: 00278ecc
 */
TXIPCRelocator::Init(TStore *, unsigned long, unsigned long, unsigned long, unsigned long *) {
    /*
        278ecc:	e1a0c00d 	mov	ip, sp
        278ed0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        278ed4:	e24cb004 	sub	fp, ip, #4	; 0x4
        278ed8:	e1a04000 	mov	r4, r0
        278edc:	e1a05001 	mov	r5, r1
        278ee0:	e1a06002 	mov	r6, r2
        278ee4:	e1a01003 	mov	r1, r3
        278ee8:	e99b0081 	ldmib	fp, {r0, r7}
        278eec:	e584000c 	str	r0, [r4, #12]	; fField12
        278ef0:	eb64e694 	bl	1bb2948 <$__rt_udiv>
        278ef4:	e3a08000 	mov	r8, #0	; 0x0
        278ef8:	e5841010 	str	r1, [r4, #16]	; fField16
        278efc:	e3a0300c 	mov	r3, #12	; 0xc
        278f00:	e5878000 	str	r8, [r7]
        278f04:	e92d0008 	stmdb	sp!, {r3}
        278f08:	e2843014 	add	r3, r4, #20	; 0x14
        278f0c:	e1a01006 	mov	r1, r6
        278f10:	e1a00005 	mov	r0, r5
        278f14:	e3a02000 	mov	r2, #0	; 0x0
        278f18:	eb622488 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        278f1c:	e28dd004 	add	sp, sp, #4	; 0x4
        278f20:	e3300000 	teq	r0, #0	; 0x0
        278f24:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        278f28:	e5941018 	ldr	r1, [r4, #24]	; fField24
        278f2c:	e3310000 	teq	r1, #0	; 0x0
        278f30:	13e000a2 	mvnne	r0, #162	; 0xa2
        278f34:	12400b0a 	subne	r0, r0, #10240	; 0x2800
        278f38:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        278f3c:	e5941014 	ldr	r1, [r4, #20]	; fField20
        278f40:	e3310000 	teq	r1, #0	; 0x0
        278f44:	05a48004 	streq	r8, [r4, #4]!	; fField4
        278f48:	05878000 	streq	r8, [r7]
        278f4c:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        278f50:	e594001c 	ldr	r0, [r4, #28]	; fField28
        278f54:	e3a03004 	mov	r3, #4	; 0x4
        278f58:	e5870000 	str	r0, [r7]
        278f5c:	e92d0008 	stmdb	sp!, {r3}
        278f60:	e2843020 	add	r3, r4, #32	; 0x20
        278f64:	e3a0000c 	mov	r0, #12	; 0xc
        278f68:	e5941010 	ldr	r1, [r4, #16]	; fField16
        278f6c:	e0802101 	add	r2, r0, r1, lsl #2
        278f70:	e1a01006 	mov	r1, r6
        278f74:	e1a00005 	mov	r0, r5
        278f78:	eb622470 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        278f7c:	e28dd004 	add	sp, sp, #4	; 0x4
        278f80:	e3300000 	teq	r0, #0	; 0x0
        278f84:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        278f88:	e5942020 	ldr	r2, [r4, #32]	; fField32
        278f8c:	e1a02822 	mov	r2, r2, lsr #16
        278f90:	e242ccff 	sub	ip, r2, #65280	; 0xff00
        278f94:	e33c00ff 	teq	ip, #255	; 0xff
        278f98:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        278f9c:	e5943022 	ldr	r3, [r4, #34]	; fField34
        278fa0:	e1a03823 	mov	r3, r3, lsr #16
        278fa4:	e5843004 	str	r3, [r4, #4]	; fField4
        278fa8:	e92d0008 	stmdb	sp!, {r3}
        278fac:	e2843024 	add	r3, r4, #36	; 0x24
        278fb0:	e1a00005 	mov	r0, r5
        278fb4:	e5b41014 	ldr	r1, [r4, #20]!	; fField20
        278fb8:	eb622460 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        278fbc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXIPCRelocator::Init(TXIPCRelocationGenerator *, unsigned long, XIPCRelocationEntry *, unsigned long *)
 * Address: 00278fc0
 */
TXIPCRelocator::Init(TXIPCRelocationGenerator *, unsigned long, XIPCRelocationEntry *, unsigned long *) {
    /*
        278fc0:	e1a0c00d 	mov	ip, sp
        278fc4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        278fc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        278fcc:	e1a04000 	mov	r4, r0
        278fd0:	e1a05001 	mov	r5, r1
        278fd4:	e1a01002 	mov	r1, r2
        278fd8:	e1a06003 	mov	r6, r3
        278fdc:	e59b7004 	ldr	r7, [fp, #4]	; fField4
        278fe0:	e5950008 	ldr	r0, [r5, #8]	; fField8
        278fe4:	e584000c 	str	r0, [r4, #12]	; fField12
        278fe8:	eb64e656 	bl	1bb2948 <$__rt_udiv>
        278fec:	e5841010 	str	r1, [r4, #16]	; fField16
        278ff0:	e3e01000 	mvn	r1, #0	; 0x0
        278ff4:	e3a00000 	mov	r0, #0	; 0x0
        278ff8:	e5952000 	ldr	r2, [r5]
        278ffc:	e3320000 	teq	r2, #0	; 0x0
        279000:	0a00001b 	beq	279074 <TXIPCRelocator::Init(TXIPCRelocationGenerator *, unsigned long, XIPCRelocationEntry *, unsigned long *)+0xb4>
        279004:	e5841014 	str	r1, [r4, #20]	; fField20
        279008:	e5951000 	ldr	r1, [r5]
        27900c:	e5911000 	ldr	r1, [r1]
        279010:	e5841018 	str	r1, [r4, #24]	; fField24
        279014:	e5951000 	ldr	r1, [r5]
        279018:	e5911010 	ldr	r1, [r1, #16]	; fField16
        27901c:	e584101c 	str	r1, [r4, #28]	; fField28
        279020:	e5871000 	str	r1, [r7]
        279024:	e2841020 	add	r1, r4, #32	; 0x20
        279028:	e5962000 	ldr	r2, [r6]
        27902c:	e5812000 	str	r2, [r1]
        279030:	e5942022 	ldr	r2, [r4, #34]	; fField34
        279034:	e1a02822 	mov	r2, r2, lsr #16
        279038:	e3a01000 	mov	r1, #0	; 0x0
        27903c:	e5842004 	str	r2, [r4, #4]	; fField4
        279040:	e3520000 	cmp	r2, #0	; 0x0
        279044:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
        279048:	e5953004 	ldr	r3, [r5, #4]	; fField4
        27904c:	e5942020 	ldr	r2, [r4, #32]	; fField32
        279050:	e0812822 	add	r2, r1, r2, lsr #16
        279054:	e7d32002 	ldrb	r2, [r3, r2]
        279058:	e0843001 	add	r3, r4, r1
        27905c:	e5c32024 	strb	r2, [r3, #36]	; fField36
        279060:	e2811001 	add	r1, r1, #1	; 0x1
        279064:	e5942004 	ldr	r2, [r4, #4]	; fField4
        279068:	e1520001 	cmp	r2, r1
        27906c:	cafffff5 	bgt	279048 <TXIPCRelocator::Init(TXIPCRelocationGenerator *, unsigned long, XIPCRelocationEntry *, unsigned long *)+0x88>
        279070:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        279074:	e2844014 	add	r4, r4, #20	; 0x14
        279078:	e8840003 	stmia	r4, {r0, r1}
        27907c:	e3a010ff 	mov	r1, #255	; 0xff
        279080:	e5840008 	str	r0, [r4, #8]	; fField8
        279084:	e2444014 	sub	r4, r4, #20	; 0x14
        279088:	e5c41021 	strb	r1, [r4, #33]	; fField33
        27908c:	e5c41020 	strb	r1, [r4, #32]	; fField32
        279090:	e5a40004 	str	r0, [r4, #4]!	; fField4
        279094:	e5870000 	str	r0, [r7]
        279098:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

