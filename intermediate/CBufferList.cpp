#include "DDKIncludes/UtilityClasses/BufferList.h"

/**
 * Symbol: CBufferList::__ct(void)
 * Address: 00045bbc
 */
CBufferList::CBufferList() {
    /*
         45bbc:	e1a0c00d 	mov	ip, sp
         45bc0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         45bc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         45bc8:	e1b04000 	movs	r4, r0
         45bcc:	1a000003 	bne	45be0 <CBufferList::__ct(void)+0x24>
         45bd0:	e3a00020 	mov	r0, #32	; 0x20
         45bd4:	eb6e22d7 	bl	1bce738 <$__nw(unsigned int)>
         45bd8:	e1b04000 	movs	r4, r0
         45bdc:	0a00000d 	beq	45c18 <CBufferList::__ct(void)+0x5c>
         45be0:	e1a00004 	mov	r0, r4
         45be4:	eb6e7992 	bl	1be4234 <CBuffer::$__ct(void)>
         45be8:	e59f0030 	ldr	r0, [pc, #30]	; 45c20 <CBufferList::__ct(void)+0x64>
         45bec:	e5840000 	str	r0, [r4]
         45bf0:	e3a00000 	mov	r0, #0	; 0x0
         45bf4:	e5840008 	str	r0, [r4, #8]	; fField8
         45bf8:	e584000c 	str	r0, [r4, #12]	; fField12
         45bfc:	e3e01000 	mvn	r1, #0	; 0x0
         45c00:	e5840004 	str	r0, [r4, #4]	; fField4
         45c04:	e5841010 	str	r1, [r4, #16]	; fField16
         45c08:	e5841014 	str	r1, [r4, #20]	; fField20
         45c0c:	e5841018 	str	r1, [r4, #24]	; fField24
         45c10:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         45c14:	e5c4001d 	strb	r0, [r4, #29]	; fField29
         45c18:	e1a00004 	mov	r0, r4
         45c1c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         45c20:	0001b038 	andeq	fp, r1, r8, lsr r0
    */
}

/**
 * Symbol: CBufferList::__dt(void)
 * Address: 00045c24
 */
CBufferList::~CBufferList() {
    /*
         45c24:	e1a0c00d 	mov	ip, sp
         45c28:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         45c2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         45c30:	e1a04000 	mov	r4, r0
         45c34:	e1a05001 	mov	r5, r1
         45c38:	e59f00c8 	ldr	r0, [pc, #c8]	; 45d08 <CBufferList::__dt(void)+0xe4>
         45c3c:	e5840000 	str	r0, [r4]
         45c40:	e5940008 	ldr	r0, [r4, #8]	; fField8
         45c44:	e3300000 	teq	r0, #0	; 0x0
         45c48:	15d4001d 	ldrneb	r0, [r4, #29]	; fField29
         45c4c:	13300000 	teqne	r0, #0	; 0x0
         45c50:	0a00001c 	beq	45cc8 <CBufferList::__dt(void)+0xa4>
         45c54:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
         45c58:	e3300000 	teq	r0, #0	; 0x0
         45c5c:	0a000015 	beq	45cb8 <CBufferList::__dt(void)+0x94>
         45c60:	e3a01001 	mov	r1, #1	; 0x1
         45c64:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45c68:	eb6e9e85 	bl	1bed684 <CArrayIterator::$ResetBounds(unsigned char)>
         45c6c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45c70:	eb6e85e0 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         45c74:	e1a06000 	mov	r6, r0
         45c78:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45c7c:	eb6e923d 	bl	1bea578 <CArrayIterator::$More(void)>
         45c80:	e3300000 	teq	r0, #0	; 0x0
         45c84:	0a00000b 	beq	45cb8 <CBufferList::__dt(void)+0x94>
         45c88:	e1b00006 	movs	r0, r6
         45c8c:	0a000002 	beq	45c9c <CBufferList::__dt(void)+0x78>
         45c90:	e3a01001 	mov	r1, #1	; 0x1
         45c94:	e1a0e00f 	mov	lr, pc
         45c98:	e590f000 	ldr	pc, [r0]
         45c9c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45ca0:	eb6e963e 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         45ca4:	e1a06000 	mov	r6, r0
         45ca8:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45cac:	eb6e9231 	bl	1bea578 <CArrayIterator::$More(void)>
         45cb0:	e3300000 	teq	r0, #0	; 0x0
         45cb4:	1afffff3 	bne	45c88 <CBufferList::__dt(void)+0x64>
         45cb8:	e5940008 	ldr	r0, [r4, #8]	; fField8
         45cbc:	e3300000 	teq	r0, #0	; 0x0
         45cc0:	13a01001 	movne	r1, #1	; 0x1
         45cc4:	1b6e7d6e 	blne	1be5284 <CList::$__dt(void)>
         45cc8:	e594600c 	ldr	r6, [r4, #12]	; fField12
         45ccc:	e3360000 	teq	r6, #0	; 0x0
         45cd0:	0a000004 	beq	45ce8 <CBufferList::__dt(void)+0xc4>
         45cd4:	e1a00006 	mov	r0, r6
         45cd8:	e3a01000 	mov	r1, #0	; 0x0
         45cdc:	eb6e7961 	bl	1be4268 <CArrayIterator::$__dt(void)>
         45ce0:	e1a00006 	mov	r0, r6
         45ce4:	eb6e1e7d 	bl	1bcd6e0 <$__dl(void *)>
         45ce8:	e1a00004 	mov	r0, r4
         45cec:	e3a01000 	mov	r1, #0	; 0x0
         45cf0:	eb6e7d65 	bl	1be528c <CBuffer::$__dt(void)>
         45cf4:	e3150001 	tst	r5, #1	; 0x1
         45cf8:	11a00004 	movne	r0, r4
         45cfc:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         45d00:	1a6e1e76 	bne	1bcd6e0 <$__dl(void *)>
         45d04:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         45d08:	0001b038 	andeq	fp, r1, r8, lsr r0
    */
}

/**
 * Symbol: CBufferList::Put(int)
 * Address: 00045d0c
 */
int		CBufferList::Put(int dataByte) {
    /*
         45d0c:	e1a0c00d 	mov	ip, sp
         45d10:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         45d14:	e24cb004 	sub	fp, ip, #4	; 0x4
         45d18:	e1a04000 	mov	r4, r0
         45d1c:	e1a05001 	mov	r5, r1
         45d20:	e5902004 	ldr	r2, [r0, #4]	; fField4
         45d24:	e1a00002 	mov	r0, r2
         45d28:	e5922000 	ldr	r2, [r2]
         45d2c:	e1a0e00f 	mov	lr, pc
         45d30:	e282f01c 	add	pc, r2, #28	; 0x1c
         45d34:	e1a06000 	mov	r6, r0
         45d38:	e3700001 	cmn	r0, #1	; 0x1
         45d3c:	1a00000a 	bne	45d6c <CBufferList::Put(int)+0x60>
         45d40:	e1a00004 	mov	r0, r4
         45d44:	eb6d7945 	bl	1ba4260 <CBufferList::$NextSegment(void)>
         45d48:	e3300000 	teq	r0, #0	; 0x0
         45d4c:	0a000006 	beq	45d6c <CBufferList::Put(int)+0x60>
         45d50:	e1a01005 	mov	r1, r5
         45d54:	e5b42004 	ldr	r2, [r4, #4]!	; fField4
         45d58:	e1a00002 	mov	r0, r2
         45d5c:	e5922000 	ldr	r2, [r2]
         45d60:	e1a0e00f 	mov	lr, pc
         45d64:	e282f01c 	add	pc, r2, #28	; 0x1c
         45d68:	e1a06000 	mov	r6, r0
         45d6c:	e1a00006 	mov	r0, r6
         45d70:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::Putn(unsigned char const *, long)
 * Address: 00045d74
 */
Size	CBufferList::Putn(const UByte* p, Size n) {
    /*
         45d74:	e1a0c00d 	mov	ip, sp
         45d78:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         45d7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         45d80:	e1a05000 	mov	r5, r0
         45d84:	e1a06001 	mov	r6, r1
         45d88:	e1a04002 	mov	r4, r2
         45d8c:	e5903004 	ldr	r3, [r0, #4]	; fField4
         45d90:	e1a00003 	mov	r0, r3
         45d94:	e5933000 	ldr	r3, [r3]
         45d98:	e1a0e00f 	mov	lr, pc
         45d9c:	e283f020 	add	pc, r3, #32	; 0x20
         45da0:	e1a07000 	mov	r7, r0
         45da4:	e1500004 	cmp	r0, r4
         45da8:	aa00000d 	bge	45de4 <CBufferList::Putn(unsigned char const *, long)+0x70>
         45dac:	e1a00005 	mov	r0, r5
         45db0:	eb6d792a 	bl	1ba4260 <CBufferList::$NextSegment(void)>
         45db4:	e3300000 	teq	r0, #0	; 0x0
         45db8:	0a000009 	beq	45de4 <CBufferList::Putn(unsigned char const *, long)+0x70>
         45dbc:	e0442007 	sub	r2, r4, r7
         45dc0:	e0861007 	add	r1, r6, r7
         45dc4:	e5953004 	ldr	r3, [r5, #4]	; fField4
         45dc8:	e1a00003 	mov	r0, r3
         45dcc:	e5933000 	ldr	r3, [r3]
         45dd0:	e1a0e00f 	mov	lr, pc
         45dd4:	e283f020 	add	pc, r3, #32	; 0x20
         45dd8:	e0807007 	add	r7, r0, r7
         45ddc:	e1570004 	cmp	r7, r4
         45de0:	bafffff1 	blt	45dac <CBufferList::Putn(unsigned char const *, long)+0x38>
         45de4:	e1a00007 	mov	r0, r7
         45de8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::CopyIn(unsigned char const *, long &)
 * Address: 00045dec
 */
int		CBufferList::CopyIn(const UByte* p, Size& n) {
    /*
         45dec:	e1a0c00d 	mov	ip, sp
         45df0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         45df4:	e24cb004 	sub	fp, ip, #4	; 0x4
         45df8:	e1a04000 	mov	r4, r0
         45dfc:	e1a05002 	mov	r5, r2
         45e00:	e5922000 	ldr	r2, [r2]
         45e04:	e5903000 	ldr	r3, [r0]
         45e08:	e1a0e00f 	mov	lr, pc
         45e0c:	e283f020 	add	pc, r3, #32	; 0x20
         45e10:	e5951000 	ldr	r1, [r5]
         45e14:	e0410000 	sub	r0, r1, r0
         45e18:	e5850000 	str	r0, [r5]
         45e1c:	e2841014 	add	r1, r4, #20	; 0x14
         45e20:	e8910003 	ldmia	r1, {r0, r1}
         45e24:	e1300001 	teq	r0, r1
         45e28:	1a000006 	bne	45e48 <CBufferList::CopyIn(unsigned char const *, long &)+0x5c>
         45e2c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         45e30:	e5901000 	ldr	r1, [r0]
         45e34:	e1a0e00f 	mov	lr, pc
         45e38:	e281f030 	add	pc, r1, #48	; 0x30
         45e3c:	e3300000 	teq	r0, #0	; 0x0
         45e40:	13e00000 	mvnne	r0, #0	; 0x0
         45e44:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         45e48:	e3a00000 	mov	r0, #0	; 0x0
         45e4c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::Reset(void)
 * Address: 00045e50
 */
void	CBufferList::Reset(void) {
    /*
         45e50:	e1a0c00d 	mov	ip, sp
         45e54:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         45e58:	e24cb004 	sub	fp, ip, #4	; 0x4
         45e5c:	e1a04000 	mov	r4, r0
         45e60:	e590000c 	ldr	r0, [r0, #12]	; fField12
         45e64:	e3a01001 	mov	r1, #1	; 0x1
         45e68:	eb6e9e05 	bl	1bed684 <CArrayIterator::$ResetBounds(unsigned char)>
         45e6c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45e70:	eb6e8560 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         45e74:	e1a05000 	mov	r5, r0
         45e78:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45e7c:	eb6e91bd 	bl	1bea578 <CArrayIterator::$More(void)>
         45e80:	e3300000 	teq	r0, #0	; 0x0
         45e84:	0a00000a 	beq	45eb4 <CBufferList::Reset(void)+0x64>
         45e88:	e1a00005 	mov	r0, r5
         45e8c:	e5951000 	ldr	r1, [r5]
         45e90:	e1a0e00f 	mov	lr, pc
         45e94:	e281f028 	add	pc, r1, #40	; 0x28
         45e98:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45e9c:	eb6e95bf 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         45ea0:	e1a05000 	mov	r5, r0
         45ea4:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45ea8:	eb6e91b2 	bl	1bea578 <CArrayIterator::$More(void)>
         45eac:	e3300000 	teq	r0, #0	; 0x0
         45eb0:	1afffff4 	bne	45e88 <CBufferList::Reset(void)+0x38>
         45eb4:	e1a00004 	mov	r0, r4
         45eb8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         45ebc:	ea6e9df3 	b	1bed690 <CBufferList::$ResetMark(void)>
    */
}

/**
 * Symbol: CBufferList::Hide(long, int)
 * Address: 00045ec0
 */
Long	CBufferList::Hide(Long count, int dir) {
    /*
         45ec0:	e3310000 	teq	r1, #0	; 0x0
         45ec4:	03a00000 	moveq	r0, #0	; 0x0
         45ec8:	01a0f00e 	moveq	pc, lr
         45ecc:	e1a0c00d 	mov	ip, sp
         45ed0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         45ed4:	e24cb004 	sub	fp, ip, #4	; 0x4
         45ed8:	e1a04000 	mov	r4, r0
         45edc:	e1a05001 	mov	r5, r1
         45ee0:	e1a06002 	mov	r6, r2
         45ee4:	e5900008 	ldr	r0, [r0, #8]	; fField8
         45ee8:	e5900000 	ldr	r0, [r0]
         45eec:	e3300001 	teq	r0, #1	; 0x1
         45ef0:	1a000006 	bne	45f10 <CBufferList::Hide(long, int)+0x50>
         45ef4:	e1a02006 	mov	r2, r6
         45ef8:	e1a01005 	mov	r1, r5
         45efc:	e5b43004 	ldr	r3, [r4, #4]!	; fField4
         45f00:	e1a00003 	mov	r0, r3
         45f04:	e5933000 	ldr	r3, [r3]
         45f08:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         45f0c:	e283f034 	add	pc, r3, #52	; 0x34
         45f10:	e3a01001 	mov	r1, #1	; 0x1
         45f14:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45f18:	eb6e9dd9 	bl	1bed684 <CArrayIterator::$ResetBounds(unsigned char)>
         45f1c:	e1a07005 	mov	r7, r5
         45f20:	e3760001 	cmn	r6, #1	; 0x1
         45f24:	0a000009 	beq	45f50 <CBufferList::Hide(long, int)+0x90>
         45f28:	e3360001 	teq	r6, #1	; 0x1
         45f2c:	1a00003c 	bne	46024 <CBufferList::Hide(long, int)+0x164>
         45f30:	e3550000 	cmp	r5, #0	; 0x0
         45f34:	c5942018 	ldrgt	r2, [r4, #24]	; fField24
         45f38:	ca00000e 	bgt	45f78 <CBufferList::Hide(long, int)+0xb8>
         45f3c:	e5940008 	ldr	r0, [r4, #8]	; fField8
         45f40:	e5900000 	ldr	r0, [r0]
         45f44:	e2402001 	sub	r2, r0, #1	; 0x1
         45f48:	e5941018 	ldr	r1, [r4, #24]	; fField24
         45f4c:	ea000005 	b	45f68 <CBufferList::Hide(long, int)+0xa8>
         45f50:	e3550000 	cmp	r5, #0	; 0x0
         45f54:	da000006 	ble	45f74 <CBufferList::Hide(long, int)+0xb4>
         45f58:	e5940008 	ldr	r0, [r4, #8]	; fField8
         45f5c:	e5900000 	ldr	r0, [r0]
         45f60:	e2402001 	sub	r2, r0, #1	; 0x1
         45f64:	e5941010 	ldr	r1, [r4, #16]	; fField16
         45f68:	e3a03001 	mov	r3, #1	; 0x1
         45f6c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45f70:	ea000003 	b	45f84 <CBufferList::Hide(long, int)+0xc4>
         45f74:	e5942010 	ldr	r2, [r4, #16]	; fField16
         45f78:	e3a03000 	mov	r3, #0	; 0x0
         45f7c:	e3a01000 	mov	r1, #0	; 0x0
         45f80:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45f84:	eb6e8d53 	bl	1be94d8 <CArrayIterator::$InitBounds(long, long, unsigned char)>
         45f88:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45f8c:	eb6e8519 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         45f90:	e1a08000 	mov	r8, r0
         45f94:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45f98:	eb6e9176 	bl	1bea578 <CArrayIterator::$More(void)>
         45f9c:	e3300000 	teq	r0, #0	; 0x0
         45fa0:	0a00000e 	beq	45fe0 <CBufferList::Hide(long, int)+0x120>
         45fa4:	e1a02006 	mov	r2, r6
         45fa8:	e1a01007 	mov	r1, r7
         45fac:	e1a00008 	mov	r0, r8
         45fb0:	e5983000 	ldr	r3, [r8]
         45fb4:	e1a0e00f 	mov	lr, pc
         45fb8:	e283f034 	add	pc, r3, #52	; 0x34
         45fbc:	e0577000 	subs	r7, r7, r0
         45fc0:	0a000006 	beq	45fe0 <CBufferList::Hide(long, int)+0x120>
         45fc4:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45fc8:	eb6e9574 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         45fcc:	e1a08000 	mov	r8, r0
         45fd0:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45fd4:	eb6e9167 	bl	1bea578 <CArrayIterator::$More(void)>
         45fd8:	e3300000 	teq	r0, #0	; 0x0
         45fdc:	1afffff0 	bne	45fa4 <CBufferList::Hide(long, int)+0xe4>
         45fe0:	e594000c 	ldr	r0, [r4, #12]	; fField12
         45fe4:	eb6e84f4 	bl	1be73bc <CArrayIterator::$CurrentIndex(void)>
         45fe8:	e5840014 	str	r0, [r4, #20]	; fField20
         45fec:	e1a01000 	mov	r1, r0
         45ff0:	e3760001 	cmn	r6, #1	; 0x1
         45ff4:	15841018 	strne	r1, [r4, #24]	; fField24
         45ff8:	05841010 	streq	r1, [r4, #16]	; fField16
         45ffc:	e1a00004 	mov	r0, r4
         46000:	eb6d7ca7 	bl	1ba52a4 <CBufferList::$SelectSegment(long)>
         46004:	e3360001 	teq	r6, #1	; 0x1
         46008:	1a000005 	bne	46024 <CBufferList::Hide(long, int)+0x164>
         4600c:	e3a02001 	mov	r2, #1	; 0x1
         46010:	e3a01000 	mov	r1, #0	; 0x0
         46014:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         46018:	e5903000 	ldr	r3, [r0]
         4601c:	e1a0e00f 	mov	lr, pc
         46020:	e283f038 	add	pc, r3, #56	; 0x38
         46024:	e0450007 	sub	r0, r5, r7
         46028:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::Seek(long, int)
 * Address: 0004602c
 */
Size	CBufferList::Seek(Long off, int dir) {
    /*
         4602c:	e1a0c00d 	mov	ip, sp
         46030:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         46034:	e24cb004 	sub	fp, ip, #4	; 0x4
         46038:	e1a04000 	mov	r4, r0
         4603c:	e1a05001 	mov	r5, r1
         46040:	e1a06002 	mov	r6, r2
         46044:	e5900008 	ldr	r0, [r0, #8]	; fField8
         46048:	e5900000 	ldr	r0, [r0]
         4604c:	e3300001 	teq	r0, #1	; 0x1
         46050:	1a000006 	bne	46070 <CBufferList::Seek(long, int)+0x44>
         46054:	e1a02006 	mov	r2, r6
         46058:	e1a01005 	mov	r1, r5
         4605c:	e5b43004 	ldr	r3, [r4, #4]!	; fField4
         46060:	e1a00003 	mov	r0, r3
         46064:	e5933000 	ldr	r3, [r3]
         46068:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         4606c:	e283f038 	add	pc, r3, #56	; 0x38
         46070:	e3a07000 	mov	r7, #0	; 0x0
         46074:	e3350000 	teq	r5, #0	; 0x0
         46078:	1a00000f 	bne	460bc <CBufferList::Seek(long, int)+0x90>
         4607c:	e3760001 	cmn	r6, #1	; 0x1
         46080:	1a000003 	bne	46094 <CBufferList::Seek(long, int)+0x68>
         46084:	e5941010 	ldr	r1, [r4, #16]	; fField16
         46088:	e1a00004 	mov	r0, r4
         4608c:	eb6d7c84 	bl	1ba52a4 <CBufferList::$SelectSegment(long)>
         46090:	ea00004c 	b	461c8 <CBufferList::Seek(long, int)+0x19c>
         46094:	e3360001 	teq	r6, #1	; 0x1
         46098:	1a00004a 	bne	461c8 <CBufferList::Seek(long, int)+0x19c>
         4609c:	e5941018 	ldr	r1, [r4, #24]	; fField24
         460a0:	e1a00004 	mov	r0, r4
         460a4:	eb6d7c7e 	bl	1ba52a4 <CBufferList::$SelectSegment(long)>
         460a8:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         460ac:	e1a03000 	mov	r3, r0
         460b0:	e3a02001 	mov	r2, #1	; 0x1
         460b4:	e3a01000 	mov	r1, #0	; 0x0
         460b8:	ea00003f 	b	461bc <CBufferList::Seek(long, int)+0x190>
         460bc:	e1a00004 	mov	r0, r4
         460c0:	e5941000 	ldr	r1, [r4]
         460c4:	e1a0e00f 	mov	lr, pc
         460c8:	e281f02c 	add	pc, r1, #44	; 0x2c
         460cc:	e1a07000 	mov	r7, r0
         460d0:	e1a00004 	mov	r0, r4
         460d4:	e5941000 	ldr	r1, [r4]
         460d8:	e1a0e00f 	mov	lr, pc
         460dc:	e281f03c 	add	pc, r1, #60	; 0x3c
         460e0:	e3760001 	cmn	r6, #1	; 0x1
         460e4:	01a00005 	moveq	r0, r5
         460e8:	0a000004 	beq	46100 <CBufferList::Seek(long, int)+0xd4>
         460ec:	e3360000 	teq	r6, #0	; 0x0
         460f0:	00800005 	addeq	r0, r0, r5
         460f4:	0a000001 	beq	46100 <CBufferList::Seek(long, int)+0xd4>
         460f8:	e3360001 	teq	r6, #1	; 0x1
         460fc:	00470005 	subeq	r0, r7, r5
         46100:	e3a01000 	mov	r1, #0	; 0x0
         46104:	e3500000 	cmp	r0, #0	; 0x0
         46108:	b1a00001 	movlt	r0, r1
         4610c:	e1500007 	cmp	r0, r7
         46110:	a1a00007 	movge	r0, r7
         46114:	e1a07000 	mov	r7, r0
         46118:	e3a01001 	mov	r1, #1	; 0x1
         4611c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         46120:	eb6e9d57 	bl	1bed684 <CArrayIterator::$ResetBounds(unsigned char)>
         46124:	e3a03001 	mov	r3, #1	; 0x1
         46128:	e284100c 	add	r1, r4, #12	; 0xc
         4612c:	e8910003 	ldmia	r1, {r0, r1}
         46130:	e5942018 	ldr	r2, [r4, #24]	; fField24
         46134:	eb6e8ce7 	bl	1be94d8 <CArrayIterator::$InitBounds(long, long, unsigned char)>
         46138:	e1a05007 	mov	r5, r7
         4613c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         46140:	eb6e84ac 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         46144:	e1a06000 	mov	r6, r0
         46148:	e594000c 	ldr	r0, [r4, #12]	; fField12
         4614c:	eb6e9109 	bl	1bea578 <CArrayIterator::$More(void)>
         46150:	e3300000 	teq	r0, #0	; 0x0
         46154:	0a00000d 	beq	46190 <CBufferList::Seek(long, int)+0x164>
         46158:	e1a00006 	mov	r0, r6
         4615c:	e5961000 	ldr	r1, [r6]
         46160:	e1a0e00f 	mov	lr, pc
         46164:	e281f02c 	add	pc, r1, #44	; 0x2c
         46168:	e0455000 	sub	r5, r5, r0
         4616c:	e3550000 	cmp	r5, #0	; 0x0
         46170:	da000006 	ble	46190 <CBufferList::Seek(long, int)+0x164>
         46174:	e594000c 	ldr	r0, [r4, #12]	; fField12
         46178:	eb6e9508 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         4617c:	e1a06000 	mov	r6, r0
         46180:	e594000c 	ldr	r0, [r4, #12]	; fField12
         46184:	eb6e90fb 	bl	1bea578 <CArrayIterator::$More(void)>
         46188:	e3300000 	teq	r0, #0	; 0x0
         4618c:	1afffff1 	bne	46158 <CBufferList::Seek(long, int)+0x12c>
         46190:	e3550000 	cmp	r5, #0	; 0x0
         46194:	b2655000 	rsblt	r5, r5, #0	; 0x0
         46198:	e594000c 	ldr	r0, [r4, #12]	; fField12
         4619c:	eb6e8486 	bl	1be73bc <CArrayIterator::$CurrentIndex(void)>
         461a0:	e1a01000 	mov	r1, r0
         461a4:	e1a00004 	mov	r0, r4
         461a8:	eb6d7c3d 	bl	1ba52a4 <CBufferList::$SelectSegment(long)>
         461ac:	e1a01005 	mov	r1, r5
         461b0:	e5b43004 	ldr	r3, [r4, #4]!	; fField4
         461b4:	e1a00003 	mov	r0, r3
         461b8:	e3a02001 	mov	r2, #1	; 0x1
         461bc:	e5933000 	ldr	r3, [r3]
         461c0:	e1a0e00f 	mov	lr, pc
         461c4:	e283f038 	add	pc, r3, #56	; 0x38
         461c8:	e1a00007 	mov	r0, r7
         461cc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::Position( const(void))
 * Address: 000461d0
 */
Size	CBufferList::Position(void) const {
    /*
         461d0:	e1a0c00d 	mov	ip, sp
         461d4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         461d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         461dc:	e1a04000 	mov	r4, r0
         461e0:	e5900008 	ldr	r0, [r0, #8]	; fField8
         461e4:	e5900000 	ldr	r0, [r0]
         461e8:	e3300001 	teq	r0, #1	; 0x1
         461ec:	12841010 	addne	r1, r4, #16	; 0x10
         461f0:	18910003 	ldmneia	r1, {r0, r1}
         461f4:	11310000 	teqne	r1, r0
         461f8:	1a000003 	bne	4620c <CBufferList::Position( const(void))+0x3c>
         461fc:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         46200:	e5901000 	ldr	r1, [r0]
         46204:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         46208:	e281f03c 	add	pc, r1, #60	; 0x3c
         4620c:	e3a05000 	mov	r5, #0	; 0x0
         46210:	e3a01001 	mov	r1, #1	; 0x1
         46214:	e594000c 	ldr	r0, [r4, #12]	; fField12
         46218:	eb6e9d19 	bl	1bed684 <CArrayIterator::$ResetBounds(unsigned char)>
         4621c:	e5940014 	ldr	r0, [r4, #20]	; fField20
         46220:	e2402001 	sub	r2, r0, #1	; 0x1
         46224:	e3a03001 	mov	r3, #1	; 0x1
         46228:	e284100c 	add	r1, r4, #12	; 0xc
         4622c:	e8910003 	ldmia	r1, {r0, r1}
         46230:	eb6e8ca8 	bl	1be94d8 <CArrayIterator::$InitBounds(long, long, unsigned char)>
         46234:	e594000c 	ldr	r0, [r4, #12]	; fField12
         46238:	eb6e846e 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         4623c:	e1a06000 	mov	r6, r0
         46240:	e594000c 	ldr	r0, [r4, #12]	; fField12
         46244:	eb6e90cb 	bl	1bea578 <CArrayIterator::$More(void)>
         46248:	e3300000 	teq	r0, #0	; 0x0
         4624c:	0a00000b 	beq	46280 <CBufferList::Position( const(void))+0xb0>
         46250:	e1a00006 	mov	r0, r6
         46254:	e5961000 	ldr	r1, [r6]
         46258:	e1a0e00f 	mov	lr, pc
         4625c:	e281f02c 	add	pc, r1, #44	; 0x2c
         46260:	e0805005 	add	r5, r0, r5
         46264:	e594000c 	ldr	r0, [r4, #12]	; fField12
         46268:	eb6e94cc 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         4626c:	e1a06000 	mov	r6, r0
         46270:	e594000c 	ldr	r0, [r4, #12]	; fField12
         46274:	eb6e90bf 	bl	1bea578 <CArrayIterator::$More(void)>
         46278:	e3300000 	teq	r0, #0	; 0x0
         4627c:	1afffff3 	bne	46250 <CBufferList::Position( const(void))+0x80>
         46280:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         46284:	e5901000 	ldr	r1, [r0]
         46288:	e1a0e00f 	mov	lr, pc
         4628c:	e281f03c 	add	pc, r1, #60	; 0x3c
         46290:	e0800005 	add	r0, r0, r5
         46294:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::GetSize( const(void))
 * Address: 00046298
 */
Size	CBufferList::GetSize(void) const {
    /*
         46298:	e1a0c00d 	mov	ip, sp
         4629c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         462a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         462a4:	e1a04000 	mov	r4, r0
         462a8:	e5900008 	ldr	r0, [r0, #8]	; fField8
         462ac:	e5900000 	ldr	r0, [r0]
         462b0:	e3300001 	teq	r0, #1	; 0x1
         462b4:	1a000003 	bne	462c8 <CBufferList::GetSize( const(void))+0x30>
         462b8:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         462bc:	e5901000 	ldr	r1, [r0]
         462c0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         462c4:	e281f02c 	add	pc, r1, #44	; 0x2c
         462c8:	e3a05000 	mov	r5, #0	; 0x0
         462cc:	e3a01001 	mov	r1, #1	; 0x1
         462d0:	e594000c 	ldr	r0, [r4, #12]	; fField12
         462d4:	eb6e9cea 	bl	1bed684 <CArrayIterator::$ResetBounds(unsigned char)>
         462d8:	e3a03001 	mov	r3, #1	; 0x1
         462dc:	e284100c 	add	r1, r4, #12	; 0xc
         462e0:	e8910003 	ldmia	r1, {r0, r1}
         462e4:	e5942018 	ldr	r2, [r4, #24]	; fField24
         462e8:	eb6e8c7a 	bl	1be94d8 <CArrayIterator::$InitBounds(long, long, unsigned char)>
         462ec:	e594000c 	ldr	r0, [r4, #12]	; fField12
         462f0:	eb6e8440 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         462f4:	e1a06000 	mov	r6, r0
         462f8:	e594000c 	ldr	r0, [r4, #12]	; fField12
         462fc:	eb6e909d 	bl	1bea578 <CArrayIterator::$More(void)>
         46300:	e3300000 	teq	r0, #0	; 0x0
         46304:	0a00000b 	beq	46338 <CBufferList::GetSize( const(void))+0xa0>
         46308:	e1a00006 	mov	r0, r6
         4630c:	e5961000 	ldr	r1, [r6]
         46310:	e1a0e00f 	mov	lr, pc
         46314:	e281f02c 	add	pc, r1, #44	; 0x2c
         46318:	e0805005 	add	r5, r0, r5
         4631c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         46320:	eb6e949e 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         46324:	e1a06000 	mov	r6, r0
         46328:	e594000c 	ldr	r0, [r4, #12]	; fField12
         4632c:	eb6e9091 	bl	1bea578 <CArrayIterator::$More(void)>
         46330:	e3300000 	teq	r0, #0	; 0x0
         46334:	1afffff3 	bne	46308 <CBufferList::GetSize( const(void))+0x70>
         46338:	e1a00005 	mov	r0, r5
         4633c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::At(long)
 * Address: 00046340
 */
CBuffer*	CBufferList::At(ArrayIndex index) {
    /*
         46340:	e5900008 	ldr	r0, [r0, #8]	; fField8
         46344:	ea6e7ffe 	b	1be6344 <CList::$At(long)>
    */
}

/**
 * Symbol: CBufferList::First(void)
 * Address: 00046348
 */
CBuffer*	CBufferList::First(void) {
    /*
         46348:	e5900008 	ldr	r0, [r0, #8]	; fField8
         4634c:	e3a01000 	mov	r1, #0	; 0x0
         46350:	ea6e7ffb 	b	1be6344 <CList::$At(long)>
    */
}

/**
 * Symbol: CBufferList::Init(unsigned char)
 * Address: 00046354
 */
NewtonErr	CBufferList::Init(CList* bufList, Boolean deleteSegments = true) {
    /*
         46354:	e1a0c00d 	mov	ip, sp
         46358:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4635c:	e24cb004 	sub	fp, ip, #4	; 0x4
         46360:	e1a04000 	mov	r4, r0
         46364:	e3a05000 	mov	r5, #0	; 0x0
         46368:	e5c0101c 	strb	r1, [r0, #28]	; fField28
         4636c:	e3a00001 	mov	r0, #1	; 0x1
         46370:	e5c4001d 	strb	r0, [r4, #29]	; fField29
         46374:	e3a00000 	mov	r0, #0	; 0x0
         46378:	eb6e77ab 	bl	1be422c <CList::$__ct(void)>
         4637c:	e5840008 	str	r0, [r4, #8]	; fField8
         46380:	e1b01000 	movs	r1, r0
         46384:	0a000004 	beq	4639c <CBufferList::Init(unsigned char)+0x48>
         46388:	e3a00000 	mov	r0, #0	; 0x0
         4638c:	eb6e7394 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         46390:	e5a4000c 	str	r0, [r4, #12]!	; fField12
         46394:	e3300000 	teq	r0, #0	; 0x0
         46398:	1a000001 	bne	463a4 <CBufferList::Init(unsigned char)+0x50>
         4639c:	eb6e6f5f 	bl	1be2120 <$MemError>
         463a0:	e1a05000 	mov	r5, r0
         463a4:	e1a00005 	mov	r0, r5
         463a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::Last(void)
 * Address: 000463ac
 */
CBuffer*	CBufferList::Last(void) {
    /*
         463ac:	e5900008 	ldr	r0, [r0, #8]	; fField8
         463b0:	e5901000 	ldr	r1, [r0]
         463b4:	e2411001 	sub	r1, r1, #1	; 0x1
         463b8:	ea6e7fe1 	b	1be6344 <CList::$At(long)>
    */
}

/**
 * Symbol: CBufferList::Insert(CBuffer *)
 * Address: 000463bc
 */
NewtonErr	CBufferList::Insert(CBuffer* item) {
    /*
         463bc:	ea6e9050 	b	1bea504 <CBufferList::$InsertLast(CBuffer *)>
    */
}

/**
 * Symbol: CBufferList::InsertBefore(long, CBuffer *)
 * Address: 000463c0
 */
NewtonErr	CBufferList::InsertBefore(ArrayIndex index, CBuffer* item) {
    /*
         463c0:	e1a0c00d 	mov	ip, sp
         463c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         463c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         463cc:	e1a04000 	mov	r4, r0
         463d0:	e5900008 	ldr	r0, [r0, #8]	; fField8
         463d4:	eb6e8c44 	bl	1be94ec <CList::$InsertAt(long, void *)>
         463d8:	e1b05000 	movs	r5, r0
         463dc:	01a00004 	moveq	r0, r4
         463e0:	0b6e9caa 	bleq	1bed690 <CBufferList::$ResetMark(void)>
         463e4:	e1a00005 	mov	r0, r5
         463e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::InsertAt(long, CBuffer *)
 * Address: 000463ec
 */
NewtonErr	CBufferList::InsertAt(ArrayIndex index, CBuffer* item) {
    /*
         463ec:	e1a0c00d 	mov	ip, sp
         463f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         463f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         463f8:	e1a04000 	mov	r4, r0
         463fc:	e5900008 	ldr	r0, [r0, #8]	; fField8
         46400:	eb6e8c39 	bl	1be94ec <CList::$InsertAt(long, void *)>
         46404:	e1b05000 	movs	r5, r0
         46408:	01a00004 	moveq	r0, r4
         4640c:	0b6e9c9f 	bleq	1bed690 <CBufferList::$ResetMark(void)>
         46410:	e1a00005 	mov	r0, r5
         46414:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::InsertFirst(CBuffer *)
 * Address: 00046418
 */
NewtonErr	CBufferList::InsertFirst(CBuffer* item) {
    /*
         46418:	e1a0c00d 	mov	ip, sp
         4641c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46420:	e24cb004 	sub	fp, ip, #4	; 0x4
         46424:	e1a04000 	mov	r4, r0
         46428:	e5900008 	ldr	r0, [r0, #8]	; fField8
         4642c:	e1a02001 	mov	r2, r1
         46430:	e3a01000 	mov	r1, #0	; 0x0
         46434:	eb6e8c2c 	bl	1be94ec <CList::$InsertAt(long, void *)>
         46438:	e1b05000 	movs	r5, r0
         4643c:	01a00004 	moveq	r0, r4
         46440:	0b6e9c92 	bleq	1bed690 <CBufferList::$ResetMark(void)>
         46444:	e1a00005 	mov	r0, r5
         46448:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::InsertLast(CBuffer *)
 * Address: 0004644c
 */
NewtonErr	CBufferList::InsertLast(CBuffer* item) {
    /*
         4644c:	e1a0c00d 	mov	ip, sp
         46450:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46454:	e24cb004 	sub	fp, ip, #4	; 0x4
         46458:	e1a04000 	mov	r4, r0
         4645c:	e5900008 	ldr	r0, [r0, #8]	; fField8
         46460:	e1a02001 	mov	r2, r1
         46464:	e5901000 	ldr	r1, [r0]
         46468:	eb6e8c1f 	bl	1be94ec <CList::$InsertAt(long, void *)>
         4646c:	e1b05000 	movs	r5, r0
         46470:	01a00004 	moveq	r0, r4
         46474:	0b6e9c85 	bleq	1bed690 <CBufferList::$ResetMark(void)>
         46478:	e1a00005 	mov	r0, r5
         4647c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::Remove(CBuffer *)
 * Address: 00046480
 */
NewtonErr	CBufferList::Remove(CBuffer* item) {
    /*
         46480:	e1a0c00d 	mov	ip, sp
         46484:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46488:	e24cb004 	sub	fp, ip, #4	; 0x4
         4648c:	e1a04000 	mov	r4, r0
         46490:	e5900008 	ldr	r0, [r0, #8]	; fField8
         46494:	eb6e9863 	bl	1bec628 <CList::$Remove(void *)>
         46498:	e1b05000 	movs	r5, r0
         4649c:	01a00004 	moveq	r0, r4
         464a0:	0b6e9c7a 	bleq	1bed690 <CBufferList::$ResetMark(void)>
         464a4:	e1a00005 	mov	r0, r5
         464a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::RemoveAt(long)
 * Address: 000464ac
 */
NewtonErr	CBufferList::RemoveAt(ArrayIndex index) {
    /*
         464ac:	e1a0c00d 	mov	ip, sp
         464b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         464b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         464b8:	e1a04000 	mov	r4, r0
         464bc:	e5900008 	ldr	r0, [r0, #8]	; fField8
         464c0:	e3a02001 	mov	r2, #1	; 0x1
         464c4:	eb6e985a 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         464c8:	e1b05000 	movs	r5, r0
         464cc:	01a00004 	moveq	r0, r4
         464d0:	0b6e9c6e 	bleq	1bed690 <CBufferList::$ResetMark(void)>
         464d4:	e1a00005 	mov	r0, r5
         464d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::RemoveFirst(void)
 * Address: 000464dc
 */
NewtonErr	CBufferList::RemoveFirst(void) {
    /*
         464dc:	e1a0c00d 	mov	ip, sp
         464e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         464e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         464e8:	e1a04000 	mov	r4, r0
         464ec:	e5900008 	ldr	r0, [r0, #8]	; fField8
         464f0:	e3a02001 	mov	r2, #1	; 0x1
         464f4:	e3a01000 	mov	r1, #0	; 0x0
         464f8:	eb6e984d 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         464fc:	e1b05000 	movs	r5, r0
         46500:	01a00004 	moveq	r0, r4
         46504:	0b6e9c61 	bleq	1bed690 <CBufferList::$ResetMark(void)>
         46508:	e1a00005 	mov	r0, r5
         4650c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::RemoveLast(void)
 * Address: 00046510
 */
NewtonErr	CBufferList::RemoveLast(void) {
    /*
         46510:	e1a0c00d 	mov	ip, sp
         46514:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46518:	e24cb004 	sub	fp, ip, #4	; 0x4
         4651c:	e1a04000 	mov	r4, r0
         46520:	e5900008 	ldr	r0, [r0, #8]	; fField8
         46524:	e5901000 	ldr	r1, [r0]
         46528:	e2411001 	sub	r1, r1, #1	; 0x1
         4652c:	e3a02001 	mov	r2, #1	; 0x1
         46530:	eb6e983f 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         46534:	e1b05000 	movs	r5, r0
         46538:	01a00004 	moveq	r0, r4
         4653c:	0b6e9c53 	bleq	1bed690 <CBufferList::$ResetMark(void)>
         46540:	e1a00005 	mov	r0, r5
         46544:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::Init(CList *, unsigned char)
 * Address: 00046548
 */
NewtonErr	CBufferList::Init(CList* bufList, Boolean deleteSegments = true) {
    /*
         46548:	e1a0c00d 	mov	ip, sp
         4654c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46550:	e24cb004 	sub	fp, ip, #4	; 0x4
         46554:	e1a04000 	mov	r4, r0
         46558:	e3a05000 	mov	r5, #0	; 0x0
         4655c:	e5c4501d 	strb	r5, [r4, #29]	; fField29
         46560:	e5c0201c 	strb	r2, [r0, #28]	; fField28
         46564:	e5801008 	str	r1, [r0, #8]	; fField8
         46568:	e3a00000 	mov	r0, #0	; 0x0
         4656c:	eb6e731c 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         46570:	e584000c 	str	r0, [r4, #12]	; fField12
         46574:	e3300000 	teq	r0, #0	; 0x0
         46578:	1a000002 	bne	46588 <CBufferList::Init(CList *, unsigned char)+0x40>
         4657c:	eb6e6ee7 	bl	1be2120 <$MemError>
         46580:	e1a05000 	mov	r5, r0
         46584:	ea000001 	b	46590 <CBufferList::Init(CList *, unsigned char)+0x48>
         46588:	e1a00004 	mov	r0, r4
         4658c:	eb6e9c3f 	bl	1bed690 <CBufferList::$ResetMark(void)>
         46590:	e1a00005 	mov	r0, r5
         46594:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::RemoveAll(void)
 * Address: 00046598
 */
NewtonErr	CBufferList::RemoveAll(void) {
    /*
         46598:	e1a0c00d 	mov	ip, sp
         4659c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         465a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         465a4:	e1a04000 	mov	r4, r0
         465a8:	e5900008 	ldr	r0, [r0, #8]	; fField8
         465ac:	e3a01000 	mov	r1, #0	; 0x0
         465b0:	e5902000 	ldr	r2, [r0]
         465b4:	eb6e981e 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         465b8:	e1b05000 	movs	r5, r0
         465bc:	01a00004 	moveq	r0, r4
         465c0:	0b6e9c32 	bleq	1bed690 <CBufferList::$ResetMark(void)>
         465c4:	e1a00005 	mov	r0, r5
         465c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::Delete(CBuffer *)
 * Address: 000465cc
 */
inline void CBufferList::Delete(void) {
    /*
         465cc:	e1a0c00d 	mov	ip, sp
         465d0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         465d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         465d8:	e1a05000 	mov	r5, r0
         465dc:	e1a04001 	mov	r4, r1
         465e0:	e5900008 	ldr	r0, [r0, #8]	; fField8
         465e4:	eb6e980f 	bl	1bec628 <CList::$Remove(void *)>
         465e8:	e1b06000 	movs	r6, r0
         465ec:	1a000006 	bne	4660c <CBufferList::Delete(CBuffer *)+0x40>
         465f0:	e1b00004 	movs	r0, r4
         465f4:	0a000002 	beq	46604 <CBufferList::Delete(CBuffer *)+0x38>
         465f8:	e3a01001 	mov	r1, #1	; 0x1
         465fc:	e1a0e00f 	mov	lr, pc
         46600:	e590f000 	ldr	pc, [r0]
         46604:	e1a00005 	mov	r0, r5
         46608:	eb6e9c20 	bl	1bed690 <CBufferList::$ResetMark(void)>
         4660c:	e1a00006 	mov	r0, r6
         46610:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::DeleteAt(long)
 * Address: 00046614
 */
NewtonErr	CBufferList::DeleteAt(ArrayIndex index) {
    /*
         46614:	e1a0c00d 	mov	ip, sp
         46618:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         4661c:	e24cb004 	sub	fp, ip, #4	; 0x4
         46620:	e1a04000 	mov	r4, r0
         46624:	e1a05001 	mov	r5, r1
         46628:	e5900008 	ldr	r0, [r0, #8]	; fField8
         4662c:	eb6e7f44 	bl	1be6344 <CList::$At(long)>
         46630:	e1a06000 	mov	r6, r0
         46634:	e1a01005 	mov	r1, r5
         46638:	e3a02001 	mov	r2, #1	; 0x1
         4663c:	e5940008 	ldr	r0, [r4, #8]	; fField8
         46640:	eb6e97fb 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         46644:	e1b05000 	movs	r5, r0
         46648:	1a000006 	bne	46668 <CBufferList::DeleteAt(long)+0x54>
         4664c:	e1b00006 	movs	r0, r6
         46650:	0a000002 	beq	46660 <CBufferList::DeleteAt(long)+0x4c>
         46654:	e3a01001 	mov	r1, #1	; 0x1
         46658:	e1a0e00f 	mov	lr, pc
         4665c:	e590f000 	ldr	pc, [r0]
         46660:	e1a00004 	mov	r0, r4
         46664:	eb6e9c09 	bl	1bed690 <CBufferList::$ResetMark(void)>
         46668:	e1a00005 	mov	r0, r5
         4666c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::DeleteFirst(void)
 * Address: 00046670
 */
NewtonErr	CBufferList::DeleteFirst(void) {
    /*
         46670:	e1a0c00d 	mov	ip, sp
         46674:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         46678:	e24cb004 	sub	fp, ip, #4	; 0x4
         4667c:	e1a04000 	mov	r4, r0
         46680:	e5900008 	ldr	r0, [r0, #8]	; fField8
         46684:	e3a01000 	mov	r1, #0	; 0x0
         46688:	eb6e7f2d 	bl	1be6344 <CList::$At(long)>
         4668c:	e1a06000 	mov	r6, r0
         46690:	e3a02001 	mov	r2, #1	; 0x1
         46694:	e3a01000 	mov	r1, #0	; 0x0
         46698:	e5940008 	ldr	r0, [r4, #8]	; fField8
         4669c:	eb6e97e4 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         466a0:	e1b05000 	movs	r5, r0
         466a4:	1a000006 	bne	466c4 <CBufferList::DeleteFirst(void)+0x54>
         466a8:	e1b00006 	movs	r0, r6
         466ac:	0a000002 	beq	466bc <CBufferList::DeleteFirst(void)+0x4c>
         466b0:	e3a01001 	mov	r1, #1	; 0x1
         466b4:	e1a0e00f 	mov	lr, pc
         466b8:	e590f000 	ldr	pc, [r0]
         466bc:	e1a00004 	mov	r0, r4
         466c0:	eb6e9bf2 	bl	1bed690 <CBufferList::$ResetMark(void)>
         466c4:	e1a00005 	mov	r0, r5
         466c8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::DeleteLast(void)
 * Address: 000466cc
 */
NewtonErr	CBufferList::DeleteLast(void) {
    /*
         466cc:	e1a0c00d 	mov	ip, sp
         466d0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         466d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         466d8:	e1a04000 	mov	r4, r0
         466dc:	e5900008 	ldr	r0, [r0, #8]	; fField8
         466e0:	e5901000 	ldr	r1, [r0]
         466e4:	e2411001 	sub	r1, r1, #1	; 0x1
         466e8:	eb6e7f15 	bl	1be6344 <CList::$At(long)>
         466ec:	e1a06000 	mov	r6, r0
         466f0:	e5940008 	ldr	r0, [r4, #8]	; fField8
         466f4:	e5901000 	ldr	r1, [r0]
         466f8:	e2411001 	sub	r1, r1, #1	; 0x1
         466fc:	e3a02001 	mov	r2, #1	; 0x1
         46700:	eb6e97cb 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         46704:	e1b05000 	movs	r5, r0
         46708:	1a000006 	bne	46728 <CBufferList::DeleteLast(void)+0x5c>
         4670c:	e1b00006 	movs	r0, r6
         46710:	0a000002 	beq	46720 <CBufferList::DeleteLast(void)+0x54>
         46714:	e3a01001 	mov	r1, #1	; 0x1
         46718:	e1a0e00f 	mov	lr, pc
         4671c:	e590f000 	ldr	pc, [r0]
         46720:	e1a00004 	mov	r0, r4
         46724:	eb6e9bd9 	bl	1bed690 <CBufferList::$ResetMark(void)>
         46728:	e1a00005 	mov	r0, r5
         4672c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::DeleteAll(void)
 * Address: 00046730
 */
NewtonErr	CBufferList::DeleteAll(void) {
    /*
         46730:	e1a0c00d 	mov	ip, sp
         46734:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46738:	e24cb004 	sub	fp, ip, #4	; 0x4
         4673c:	e1a04000 	mov	r4, r0
         46740:	e590000c 	ldr	r0, [r0, #12]	; fField12
         46744:	e3a01001 	mov	r1, #1	; 0x1
         46748:	eb6e9bcd 	bl	1bed684 <CArrayIterator::$ResetBounds(unsigned char)>
         4674c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         46750:	eb6e8328 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         46754:	e1a05000 	mov	r5, r0
         46758:	e594000c 	ldr	r0, [r4, #12]	; fField12
         4675c:	eb6e8f85 	bl	1bea578 <CArrayIterator::$More(void)>
         46760:	e3300000 	teq	r0, #0	; 0x0
         46764:	0a00000b 	beq	46798 <CBufferList::DeleteAll(void)+0x68>
         46768:	e1b00005 	movs	r0, r5
         4676c:	0a000002 	beq	4677c <CBufferList::DeleteAll(void)+0x4c>
         46770:	e3a01001 	mov	r1, #1	; 0x1
         46774:	e1a0e00f 	mov	lr, pc
         46778:	e590f000 	ldr	pc, [r0]
         4677c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         46780:	eb6e9386 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         46784:	e1a05000 	mov	r5, r0
         46788:	e594000c 	ldr	r0, [r4, #12]	; fField12
         4678c:	eb6e8f79 	bl	1bea578 <CArrayIterator::$More(void)>
         46790:	e3300000 	teq	r0, #0	; 0x0
         46794:	1afffff3 	bne	46768 <CBufferList::DeleteAll(void)+0x38>
         46798:	e5940008 	ldr	r0, [r4, #8]	; fField8
         4679c:	e3a01000 	mov	r1, #0	; 0x0
         467a0:	e5902000 	ldr	r2, [r0]
         467a4:	eb6e97a2 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         467a8:	e1b05000 	movs	r5, r0
         467ac:	01a00004 	moveq	r0, r4
         467b0:	0b6e9bb6 	bleq	1bed690 <CBufferList::$ResetMark(void)>
         467b4:	e1a00005 	mov	r0, r5
         467b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::GetIndex(CBuffer *)
 * Address: 000467bc
 */
ArrayIndex		CBufferList::GetIndex(CBuffer* item) {
    /*
         467bc:	e5900008 	ldr	r0, [r0, #8]	; fField8
         467c0:	ea6e871b 	b	1be8434 <CList::$GetIdentityIndex(void *)>
    */
}

/**
 * Symbol: CBufferList::SelectSegment(long)
 * Address: 000467c4
 */
void		CBufferList::SelectSegment(ArrayIndex index) {
    /*
         467c4:	e1a0c00d 	mov	ip, sp
         467c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         467cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         467d0:	e1a04000 	mov	r4, r0
         467d4:	e5801014 	str	r1, [r0, #20]	; fField20
         467d8:	e5900008 	ldr	r0, [r0, #8]	; fField8
         467dc:	eb6e7ed8 	bl	1be6344 <CList::$At(long)>
         467e0:	e3e02000 	mvn	r2, #0	; 0x0
         467e4:	e3a01000 	mov	r1, #0	; 0x0
         467e8:	e5a40004 	str	r0, [r4, #4]!	; fField4
         467ec:	e5903000 	ldr	r3, [r0]
         467f0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         467f4:	e283f038 	add	pc, r3, #56	; 0x38
    */
}

/**
 * Symbol: CBufferList::NextSegment(void)
 * Address: 000467f8
 */
Boolean		CBufferList::NextSegment(void) {
    /*
         467f8:	e1a0c00d 	mov	ip, sp
         467fc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         46800:	e24cb004 	sub	fp, ip, #4	; 0x4
         46804:	e3a01000 	mov	r1, #0	; 0x0
         46808:	e2803014 	add	r3, r0, #20	; 0x14
         4680c:	e893000c 	ldmia	r3, {r2, r3}
         46810:	e1520003 	cmp	r2, r3
         46814:	aa000003 	bge	46828 <CBufferList::NextSegment(void)+0x30>
         46818:	e2821001 	add	r1, r2, #1	; 0x1
         4681c:	e5801014 	str	r1, [r0, #20]	; fField20
         46820:	eb6d7a9f 	bl	1ba52a4 <CBufferList::$SelectSegment(long)>
         46824:	e3a01001 	mov	r1, #1	; 0x1
         46828:	e1a00001 	mov	r0, r1
         4682c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::ResetMark(void)
 * Address: 00046830
 */
void	CBufferList::ResetMark(void) {
    /*
         46830:	e5901008 	ldr	r1, [r0, #8]	; fField8
         46834:	e5911000 	ldr	r1, [r1]
         46838:	e2411001 	sub	r1, r1, #1	; 0x1
         4683c:	e5801018 	str	r1, [r0, #24]	; fField24
         46840:	e3710001 	cmn	r1, #1	; 0x1
         46844:	d3e01000 	mvnle	r1, #0	; 0x0
         46848:	d5801010 	strle	r1, [r0, #16]	; fField16
         4684c:	d5a01014 	strle	r1, [r0, #20]!	; fField20
         46850:	d1a0f00e 	movle	pc, lr
         46854:	e3a01000 	mov	r1, #0	; 0x0
         46858:	e5801010 	str	r1, [r0, #16]	; fField16
         4685c:	ea6d7a90 	b	1ba52a4 <CBufferList::$SelectSegment(long)>
    */
}

/**
 * Symbol: CBufferList::Peek(void)
 * Address: 00046860
 */
int		CBufferList::Peek(void) {
    /*
         46860:	e1a0c00d 	mov	ip, sp
         46864:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46868:	e24cb004 	sub	fp, ip, #4	; 0x4
         4686c:	e1a04000 	mov	r4, r0
         46870:	e5900004 	ldr	r0, [r0, #4]	; fField4
         46874:	e5901000 	ldr	r1, [r0]
         46878:	e1a0e00f 	mov	lr, pc
         4687c:	e281f004 	add	pc, r1, #4	; 0x4
         46880:	e1a05000 	mov	r5, r0
         46884:	e3700001 	cmn	r0, #1	; 0x1
         46888:	1a000008 	bne	468b0 <CBufferList::Peek(void)+0x50>
         4688c:	e1a00004 	mov	r0, r4
         46890:	eb6d7672 	bl	1ba4260 <CBufferList::$NextSegment(void)>
         46894:	e3300000 	teq	r0, #0	; 0x0
         46898:	0a000004 	beq	468b0 <CBufferList::Peek(void)+0x50>
         4689c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         468a0:	e5901000 	ldr	r1, [r0]
         468a4:	e1a0e00f 	mov	lr, pc
         468a8:	e281f004 	add	pc, r1, #4	; 0x4
         468ac:	e1a05000 	mov	r5, r0
         468b0:	e1a00005 	mov	r0, r5
         468b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::AtEOF( const(void))
 * Address: 000468b8
 */
Boolean	CBufferList::AtEOF(void) const {
    /*
         468b8:	e2802014 	add	r2, r0, #20	; 0x14
         468bc:	e8920006 	ldmia	r2, {r1, r2}
         468c0:	e1310002 	teq	r1, r2
         468c4:	13a00000 	movne	r0, #0	; 0x0
         468c8:	11a0f00e 	movne	pc, lr
         468cc:	e5900004 	ldr	r0, [r0, #4]	; fField4
         468d0:	e5901000 	ldr	r1, [r0]
         468d4:	e281f030 	add	pc, r1, #48	; 0x30
    */
}

/**
 * Symbol: CBufferList::Next(void)
 * Address: 000468d8
 */
int		CBufferList::Next(void) {
    /*
         468d8:	e1a0c00d 	mov	ip, sp
         468dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         468e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         468e4:	e1a04000 	mov	r4, r0
         468e8:	e5900004 	ldr	r0, [r0, #4]	; fField4
         468ec:	e5901000 	ldr	r1, [r0]
         468f0:	e1a0e00f 	mov	lr, pc
         468f4:	e281f008 	add	pc, r1, #8	; 0x8
         468f8:	e1a05000 	mov	r5, r0
         468fc:	e3700001 	cmn	r0, #1	; 0x1
         46900:	1a000008 	bne	46928 <CBufferList::Next(void)+0x50>
         46904:	e1a00004 	mov	r0, r4
         46908:	eb6d7654 	bl	1ba4260 <CBufferList::$NextSegment(void)>
         4690c:	e3300000 	teq	r0, #0	; 0x0
         46910:	0a000004 	beq	46928 <CBufferList::Next(void)+0x50>
         46914:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         46918:	e5901000 	ldr	r1, [r0]
         4691c:	e1a0e00f 	mov	lr, pc
         46920:	e281f008 	add	pc, r1, #8	; 0x8
         46924:	e1a05000 	mov	r5, r0
         46928:	e1a00005 	mov	r0, r5
         4692c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::Skip(void)
 * Address: 00046930
 */
int		CBufferList::Skip(void) {
    /*
         46930:	e1a0c00d 	mov	ip, sp
         46934:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46938:	e24cb004 	sub	fp, ip, #4	; 0x4
         4693c:	e1a04000 	mov	r4, r0
         46940:	e5900004 	ldr	r0, [r0, #4]	; fField4
         46944:	e5901000 	ldr	r1, [r0]
         46948:	e1a0e00f 	mov	lr, pc
         4694c:	e281f00c 	add	pc, r1, #12	; 0xc
         46950:	e1a05000 	mov	r5, r0
         46954:	e3700001 	cmn	r0, #1	; 0x1
         46958:	1a000008 	bne	46980 <CBufferList::Skip(void)+0x50>
         4695c:	e1a00004 	mov	r0, r4
         46960:	eb6d763e 	bl	1ba4260 <CBufferList::$NextSegment(void)>
         46964:	e3300000 	teq	r0, #0	; 0x0
         46968:	0a000004 	beq	46980 <CBufferList::Skip(void)+0x50>
         4696c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         46970:	e5901000 	ldr	r1, [r0]
         46974:	e1a0e00f 	mov	lr, pc
         46978:	e281f00c 	add	pc, r1, #12	; 0xc
         4697c:	e1a05000 	mov	r5, r0
         46980:	e1a00005 	mov	r0, r5
         46984:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::Get(void)
 * Address: 00046988
 */
int		CBufferList::Get(void) {
    /*
         46988:	e1a0c00d 	mov	ip, sp
         4698c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46990:	e24cb004 	sub	fp, ip, #4	; 0x4
         46994:	e1a04000 	mov	r4, r0
         46998:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4699c:	e5901000 	ldr	r1, [r0]
         469a0:	e1a0e00f 	mov	lr, pc
         469a4:	e281f010 	add	pc, r1, #16	; 0x10
         469a8:	e1a05000 	mov	r5, r0
         469ac:	e3700001 	cmn	r0, #1	; 0x1
         469b0:	1a000008 	bne	469d8 <CBufferList::Get(void)+0x50>
         469b4:	e1a00004 	mov	r0, r4
         469b8:	eb6d7628 	bl	1ba4260 <CBufferList::$NextSegment(void)>
         469bc:	e3300000 	teq	r0, #0	; 0x0
         469c0:	0a000004 	beq	469d8 <CBufferList::Get(void)+0x50>
         469c4:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         469c8:	e5901000 	ldr	r1, [r0]
         469cc:	e1a0e00f 	mov	lr, pc
         469d0:	e281f010 	add	pc, r1, #16	; 0x10
         469d4:	e1a05000 	mov	r5, r0
         469d8:	e1a00005 	mov	r0, r5
         469dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::Getn(unsigned char *, long)
 * Address: 000469e0
 */
Size	CBufferList::Getn(UByte* p, Size n) {
    /*
         469e0:	e1a0c00d 	mov	ip, sp
         469e4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         469e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         469ec:	e1a05000 	mov	r5, r0
         469f0:	e1a06001 	mov	r6, r1
         469f4:	e1a04002 	mov	r4, r2
         469f8:	e5903004 	ldr	r3, [r0, #4]	; fField4
         469fc:	e1a00003 	mov	r0, r3
         46a00:	e5933000 	ldr	r3, [r3]
         46a04:	e1a0e00f 	mov	lr, pc
         46a08:	e283f014 	add	pc, r3, #20	; 0x14
         46a0c:	e1a07000 	mov	r7, r0
         46a10:	e1500004 	cmp	r0, r4
         46a14:	aa00000d 	bge	46a50 <CBufferList::Getn(unsigned char *, long)+0x70>
         46a18:	e1a00005 	mov	r0, r5
         46a1c:	eb6d760f 	bl	1ba4260 <CBufferList::$NextSegment(void)>
         46a20:	e3300000 	teq	r0, #0	; 0x0
         46a24:	0a000009 	beq	46a50 <CBufferList::Getn(unsigned char *, long)+0x70>
         46a28:	e0442007 	sub	r2, r4, r7
         46a2c:	e0861007 	add	r1, r6, r7
         46a30:	e5953004 	ldr	r3, [r5, #4]	; fField4
         46a34:	e1a00003 	mov	r0, r3
         46a38:	e5933000 	ldr	r3, [r3]
         46a3c:	e1a0e00f 	mov	lr, pc
         46a40:	e283f014 	add	pc, r3, #20	; 0x14
         46a44:	e0807007 	add	r7, r0, r7
         46a48:	e1570004 	cmp	r7, r4
         46a4c:	bafffff1 	blt	46a18 <CBufferList::Getn(unsigned char *, long)+0x38>
         46a50:	e1a00007 	mov	r0, r7
         46a54:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: CBufferList::CopyOut(unsigned char *, long &)
 * Address: 00046a58
 */
int		CBufferList::CopyOut(UByte* p, Size& n) {
    /*
         46a58:	e1a0c00d 	mov	ip, sp
         46a5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         46a60:	e24cb004 	sub	fp, ip, #4	; 0x4
         46a64:	e1a04000 	mov	r4, r0
         46a68:	e1a05002 	mov	r5, r2
         46a6c:	e5922000 	ldr	r2, [r2]
         46a70:	e5903000 	ldr	r3, [r0]
         46a74:	e1a0e00f 	mov	lr, pc
         46a78:	e283f014 	add	pc, r3, #20	; 0x14
         46a7c:	e5951000 	ldr	r1, [r5]
         46a80:	e0410000 	sub	r0, r1, r0
         46a84:	e5850000 	str	r0, [r5]
         46a88:	e2841014 	add	r1, r4, #20	; 0x14
         46a8c:	e8910003 	ldmia	r1, {r0, r1}
         46a90:	e1300001 	teq	r0, r1
         46a94:	1a000006 	bne	46ab4 <CBufferList::CopyOut(unsigned char *, long &)+0x5c>
         46a98:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         46a9c:	e5901000 	ldr	r1, [r0]
         46aa0:	e1a0e00f 	mov	lr, pc
         46aa4:	e281f030 	add	pc, r1, #48	; 0x30
         46aa8:	e3300000 	teq	r0, #0	; 0x0
         46aac:	13e00000 	mvnne	r0, #0	; 0x0
         46ab0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         46ab4:	e3a00000 	mov	r0, #0	; 0x0
         46ab8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

