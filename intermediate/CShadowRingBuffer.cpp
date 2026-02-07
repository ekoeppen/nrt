#include "include/CShadowRingBuffer.h"

/**
 * Symbol: CShadowRingBuffer::__ct(void)
 * Address: 001deec0
 */
CShadowRingBuffer::CShadowRingBuffer(void) {
    /*
        1deec0:	e1a0c00d 	mov	ip, sp
        1deec4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1deec8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1deecc:	e1b04000 	movs	r4, r0
        1deed0:	1a000003 	bne	1deee4 <CShadowRingBuffer::__ct(void)+0x24>
        1deed4:	e3a0001c 	mov	r0, #28	; 0x1c
        1deed8:	eb67be16 	bl	1bce738 <$__nw(unsigned int)>
        1deedc:	e1b04000 	movs	r4, r0
        1deee0:	0a00000a 	beq	1def10 <CShadowRingBuffer::__ct(void)+0x50>
        1deee4:	e1a00004 	mov	r0, r4
        1deee8:	eb6814c8 	bl	1be4210 <CBaseRingBuffer::$__ct(void)>
        1deeec:	e3a00000 	mov	r0, #0	; 0x0
        1deef0:	e5c40018 	strb	r0, [r4, #24]
        1deef4:	e5840014 	str	r0, [r4, #20]
        1deef8:	e59f1018 	ldr	r1, [pc, #18]	; 1def18 <CShadowRingBuffer::__ct(void)+0x58>
        1deefc:	e5840010 	str	r0, [r4, #16]	; fField16
        1def00:	e5841000 	str	r1, [r4]
        1def04:	e5840004 	str	r0, [r4, #4]	; fField4
        1def08:	e5840008 	str	r0, [r4, #8]	; fField8
        1def0c:	e584000c 	str	r0, [r4, #12]	; fField12
        1def10:	e1a00004 	mov	r0, r4
        1def14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1def18:	0001e730 	andeq	lr, r1, r0, lsr r7
    */
}

/**
 * Symbol: CShadowRingBuffer::__dt(void)
 * Address: 001def1c
 */
CShadowRingBuffer::~CShadowRingBuffer(void) {
    /*
        1def1c:	e1a0c00d 	mov	ip, sp
        1def20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1def24:	e24cb004 	sub	fp, ip, #4	; 0x4
        1def28:	e1a04000 	mov	r4, r0
        1def2c:	e1a05001 	mov	r5, r1
        1def30:	e59f002c 	ldr	r0, [pc, #2c]	; 1def64 <CShadowRingBuffer::__dt(void)+0x48>
        1def34:	e5840000 	str	r0, [r4]
        1def38:	e2840014 	add	r0, r4, #20	; 0x14
        1def3c:	e3a01000 	mov	r1, #0	; 0x0
        1def40:	eb67bdf7 	bl	1bce724 <TUObject::$__dt(void)>
        1def44:	e1a00004 	mov	r0, r4
        1def48:	e3a01000 	mov	r1, #0	; 0x0
        1def4c:	eb6814c8 	bl	1be4274 <CBaseRingBuffer::$__dt(void)>
        1def50:	e3150001 	tst	r5, #1	; 0x1
        1def54:	11a00004 	movne	r0, r4
        1def58:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1def5c:	1a67b9df 	bne	1bcd6e0 <$__dl(void *)>
        1def60:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1def64:	0001e730 	andeq	lr, r1, r0, lsr r7
    */
}

/**
 * Symbol: CShadowRingBuffer::CopyOut(unsigned char *, long &)
 * Address: 001def68
 */
CShadowRingBuffer::CopyOut(unsigned char *, long &) {
    /*
        1def68:	e1a0c00d 	mov	ip, sp
        1def6c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1def70:	e24cb004 	sub	fp, ip, #4	; 0x4
        1def74:	e1a04000 	mov	r4, r0
        1def78:	e1a06001 	mov	r6, r1
        1def7c:	e1a05002 	mov	r5, r2
        1def80:	e5920000 	ldr	r0, [r2]
        1def84:	e3500000 	cmp	r0, #0	; 0x0
        1def88:	da000041 	ble	1df094 <CShadowRingBuffer::CopyOut(unsigned char *, long &)+0x12c>
        1def8c:	e24dd010 	sub	sp, sp, #16	; 0x10
        1def90:	e1a0300d 	mov	r3, sp
        1def94:	e92d0008 	stmdb	sp!, {r3}
        1def98:	e28d300c 	add	r3, sp, #12	; 0xc
        1def9c:	e28d2008 	add	r2, sp, #8	; 0x8
        1defa0:	e28d1010 	add	r1, sp, #16	; 0x10
        1defa4:	e1a00004 	mov	r0, r4
        1defa8:	e594c000 	ldr	ip, [r4]
        1defac:	e1a0e00f 	mov	lr, pc
        1defb0:	e28cf050 	add	pc, ip, #80	; 0x50
        1defb4:	e2847014 	add	r7, r4, #20	; 0x14
        1defb8:	e5bd1004 	ldr	r1, [sp, #4]!	; fField4
        1defbc:	e3510000 	cmp	r1, #0	; 0x0
        1defc0:	da000019 	ble	1df02c <CShadowRingBuffer::CopyOut(unsigned char *, long &)+0xc4>
        1defc4:	e5950000 	ldr	r0, [r5]
        1defc8:	e1500001 	cmp	r0, r1
        1defcc:	a1a00001 	movge	r0, r1
        1defd0:	e58d0000 	str	r0, [sp]
        1defd4:	e1a01000 	mov	r1, r0
        1defd8:	e3a03000 	mov	r3, #0	; 0x0
        1defdc:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        1defe0:	e92d000c 	stmdb	sp!, {r2, r3}
        1defe4:	e1a00007 	mov	r0, r7
        1defe8:	e1a03001 	mov	r3, r1
        1defec:	e1a02006 	mov	r2, r6
        1deff0:	e28d1008 	add	r1, sp, #8	; 0x8
        1deff4:	eb67c610 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        1deff8:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        1deffc:	e0866000 	add	r6, r6, r0
        1df000:	e5952000 	ldr	r2, [r5]
        1df004:	e0420000 	sub	r0, r2, r0
        1df008:	e5850000 	str	r0, [r5]
        1df00c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1df010:	e59d0000 	ldr	r0, [sp]
        1df014:	e0810000 	add	r0, r1, r0
        1df018:	e5840008 	str	r0, [r4, #8]	; fField8
        1df01c:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1df020:	e1300001 	teq	r0, r1
        1df024:	03a00000 	moveq	r0, #0	; 0x0
        1df028:	05840008 	streq	r0, [r4, #8]	; fField8
        1df02c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1df030:	e3500000 	cmp	r0, #0	; 0x0
        1df034:	da000015 	ble	1df090 <CShadowRingBuffer::CopyOut(unsigned char *, long &)+0x128>
        1df038:	e5951000 	ldr	r1, [r5]
        1df03c:	e1510000 	cmp	r1, r0
        1df040:	b1a00001 	movlt	r0, r1
        1df044:	e58d0004 	str	r0, [sp, #4]	; fField4
        1df048:	e1a01000 	mov	r1, r0
        1df04c:	e3a03000 	mov	r3, #0	; 0x0
        1df050:	e59d200c 	ldr	r2, [sp, #12]	; fField12
        1df054:	e92d000c 	stmdb	sp!, {r2, r3}
        1df058:	e1a00007 	mov	r0, r7
        1df05c:	e1a03001 	mov	r3, r1
        1df060:	e1a02006 	mov	r2, r6
        1df064:	e28d100c 	add	r1, sp, #12	; 0xc
        1df068:	eb67c5f3 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        1df06c:	e28dd008 	add	sp, sp, #8	; 0x8
        1df070:	e5951000 	ldr	r1, [r5]
        1df074:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1df078:	e0410000 	sub	r0, r1, r0
        1df07c:	e5850000 	str	r0, [r5]
        1df080:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1df084:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1df088:	e0810000 	add	r0, r1, r0
        1df08c:	e5840008 	str	r0, [r4, #8]	; fField8
        1df090:	e28dd010 	add	sp, sp, #16	; 0x10
        1df094:	e1a00004 	mov	r0, r4
        1df098:	e5941000 	ldr	r1, [r4]
        1df09c:	e1a0e00f 	mov	lr, pc
        1df0a0:	e281f038 	add	pc, r1, #56	; 0x38
        1df0a4:	e3300000 	teq	r0, #0	; 0x0
        1df0a8:	13e00000 	mvnne	r0, #0	; 0x0
        1df0ac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::TempGetn(unsigned char *, long)
 * Address: 001df0b0
 */
CShadowRingBuffer::TempGetn(unsigned char *, long) {
    /*
        1df0b0:	e1a0c00d 	mov	ip, sp
        1df0b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1df0b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1df0bc:	e1a04002 	mov	r4, r2
        1df0c0:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        1df0c4:	e1a0200d 	mov	r2, sp
        1df0c8:	eb683d8c 	bl	1bee700 <CShadowRingBuffer::$TempCopyOut(unsigned char *, long &)>
        1df0cc:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1df0d0:	e0440000 	sub	r0, r4, r0
        1df0d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::TempCopyOut(unsigned char *, long &)
 * Address: 001df0d8
 */
CShadowRingBuffer::TempCopyOut(unsigned char *, long &) {
    /*
        1df0d8:	e1a0c00d 	mov	ip, sp
        1df0dc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1df0e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1df0e4:	e1a04000 	mov	r4, r0
        1df0e8:	e1a06001 	mov	r6, r1
        1df0ec:	e1a05002 	mov	r5, r2
        1df0f0:	e3a07000 	mov	r7, #0	; 0x0
        1df0f4:	e5920000 	ldr	r0, [r2]
        1df0f8:	e3500000 	cmp	r0, #0	; 0x0
        1df0fc:	da000041 	ble	1df208 <CShadowRingBuffer::TempCopyOut(unsigned char *, long &)+0x130>
        1df100:	e24dd010 	sub	sp, sp, #16	; 0x10
        1df104:	e1a0300d 	mov	r3, sp
        1df108:	e92d0008 	stmdb	sp!, {r3}
        1df10c:	e28d300c 	add	r3, sp, #12	; 0xc
        1df110:	e28d2008 	add	r2, sp, #8	; 0x8
        1df114:	e28d1010 	add	r1, sp, #16	; 0x10
        1df118:	e1a00004 	mov	r0, r4
        1df11c:	eb681c96 	bl	1be637c <$ComputeTempGetVectors__17CShadowRingBufferCFRUlRlT1T2>
        1df120:	e2848014 	add	r8, r4, #20	; 0x14
        1df124:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        1df128:	e3500000 	cmp	r0, #0	; 0x0
        1df12c:	da00001a 	ble	1df19c <CShadowRingBuffer::TempCopyOut(unsigned char *, long &)+0xc4>
        1df130:	e5951000 	ldr	r1, [r5]
        1df134:	e1510000 	cmp	r1, r0
        1df138:	b1a00001 	movlt	r0, r1
        1df13c:	e58d0000 	str	r0, [sp]
        1df140:	e1a01000 	mov	r1, r0
        1df144:	e3a03000 	mov	r3, #0	; 0x0
        1df148:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        1df14c:	e92d000c 	stmdb	sp!, {r2, r3}
        1df150:	e1a00008 	mov	r0, r8
        1df154:	e1a03001 	mov	r3, r1
        1df158:	e1a02006 	mov	r2, r6
        1df15c:	e28d1008 	add	r1, sp, #8	; 0x8
        1df160:	eb67c5b5 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        1df164:	e1a07000 	mov	r7, r0
        1df168:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        1df16c:	e0866000 	add	r6, r6, r0
        1df170:	e5952000 	ldr	r2, [r5]
        1df174:	e0420000 	sub	r0, r2, r0
        1df178:	e5850000 	str	r0, [r5]
        1df17c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1df180:	e59d1000 	ldr	r1, [sp]
        1df184:	e0800001 	add	r0, r0, r1
        1df188:	e584000c 	str	r0, [r4, #12]	; fField12
        1df18c:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1df190:	e1300001 	teq	r0, r1
        1df194:	03a00000 	moveq	r0, #0	; 0x0
        1df198:	0584000c 	streq	r0, [r4, #12]	; fField12
        1df19c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1df1a0:	e3500000 	cmp	r0, #0	; 0x0
        1df1a4:	da000016 	ble	1df204 <CShadowRingBuffer::TempCopyOut(unsigned char *, long &)+0x12c>
        1df1a8:	e5951000 	ldr	r1, [r5]
        1df1ac:	e1510000 	cmp	r1, r0
        1df1b0:	b1a00001 	movlt	r0, r1
        1df1b4:	e58d0004 	str	r0, [sp, #4]	; fField4
        1df1b8:	e1a01000 	mov	r1, r0
        1df1bc:	e3a03000 	mov	r3, #0	; 0x0
        1df1c0:	e59d200c 	ldr	r2, [sp, #12]	; fField12
        1df1c4:	e92d000c 	stmdb	sp!, {r2, r3}
        1df1c8:	e1a00008 	mov	r0, r8
        1df1cc:	e1a03001 	mov	r3, r1
        1df1d0:	e1a02006 	mov	r2, r6
        1df1d4:	e28d100c 	add	r1, sp, #12	; 0xc
        1df1d8:	eb67c597 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        1df1dc:	e28dd008 	add	sp, sp, #8	; 0x8
        1df1e0:	e1a07000 	mov	r7, r0
        1df1e4:	e5951000 	ldr	r1, [r5]
        1df1e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1df1ec:	e0410000 	sub	r0, r1, r0
        1df1f0:	e5850000 	str	r0, [r5]
        1df1f4:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1df1f8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1df1fc:	e0810000 	add	r0, r1, r0
        1df200:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        1df204:	e28dd010 	add	sp, sp, #16	; 0x10
        1df208:	e1a00007 	mov	r0, r7
        1df20c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::TempReset(void)
 * Address: 001df210
 */
CShadowRingBuffer::TempReset(void) {
    /*
        1df210:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1df214:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        1df218:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowRingBuffer::Put(int)
 * Address: 001df21c
 */
CShadowRingBuffer::Put(int) {
    /*
        1df21c:	e1a0c00d 	mov	ip, sp
        1df220:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1df224:	e24cb004 	sub	fp, ip, #4	; 0x4
        1df228:	e1a04000 	mov	r4, r0
        1df22c:	e1a05001 	mov	r5, r1
        1df230:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1df234:	e3300000 	teq	r0, #0	; 0x0
        1df238:	05940010 	ldreq	r0, [r4, #16]	; fField16
        1df23c:	e2400001 	sub	r0, r0, #1	; 0x1
        1df240:	e5942004 	ldr	r2, [r4, #4]	; fField4
        1df244:	e1320000 	teq	r2, r0
        1df248:	03e05000 	mvneq	r5, #0	; 0x0
        1df24c:	0a000008 	beq	1df274 <CShadowRingBuffer::Put(int)+0x58>
        1df250:	e2820001 	add	r0, r2, #1	; 0x1
        1df254:	e5840004 	str	r0, [r4, #4]	; fField4
        1df258:	e1a00004 	mov	r0, r4
        1df25c:	eb671403 	bl	1ba4270 <CShadowRingBuffer::$PutByteAt(int, long)>
        1df260:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1df264:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1df268:	e1310000 	teq	r1, r0
        1df26c:	03a00000 	moveq	r0, #0	; 0x0
        1df270:	05a40004 	streq	r0, [r4, #4]!	; fField4
        1df274:	e1a00005 	mov	r0, r5
        1df278:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::Putn(unsigned char const *, long)
 * Address: 001df27c
 */
CShadowRingBuffer::Putn(unsigned char const *, long) {
    /*
        1df27c:	e1a0c00d 	mov	ip, sp
        1df280:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1df284:	e24cb004 	sub	fp, ip, #4	; 0x4
        1df288:	e1a04002 	mov	r4, r2
        1df28c:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        1df290:	e1a0200d 	mov	r2, sp
        1df294:	e5903000 	ldr	r3, [r0]
        1df298:	e1a0e00f 	mov	lr, pc
        1df29c:	e283f024 	add	pc, r3, #36	; 0x24
        1df2a0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1df2a4:	e0440000 	sub	r0, r4, r0
        1df2a8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::CopyIn(unsigned char const *, long &)
 * Address: 001df2ac
 */
CShadowRingBuffer::CopyIn(unsigned char const *, long &) {
    /*
        1df2ac:	e1a0c00d 	mov	ip, sp
        1df2b0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1df2b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1df2b8:	e1a04000 	mov	r4, r0
        1df2bc:	e1a06001 	mov	r6, r1
        1df2c0:	e1a05002 	mov	r5, r2
        1df2c4:	e5920000 	ldr	r0, [r2]
        1df2c8:	e3500000 	cmp	r0, #0	; 0x0
        1df2cc:	da00003d 	ble	1df3c8 <CShadowRingBuffer::CopyIn(unsigned char const *, long &)+0x11c>
        1df2d0:	e24dd010 	sub	sp, sp, #16	; 0x10
        1df2d4:	e1a0300d 	mov	r3, sp
        1df2d8:	e92d0008 	stmdb	sp!, {r3}
        1df2dc:	e28d300c 	add	r3, sp, #12	; 0xc
        1df2e0:	e28d2008 	add	r2, sp, #8	; 0x8
        1df2e4:	e28d1010 	add	r1, sp, #16	; 0x10
        1df2e8:	e1a00004 	mov	r0, r4
        1df2ec:	e594c000 	ldr	ip, [r4]
        1df2f0:	e1a0e00f 	mov	lr, pc
        1df2f4:	e28cf04c 	add	pc, ip, #76	; 0x4c
        1df2f8:	e2847014 	add	r7, r4, #20	; 0x14
        1df2fc:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        1df300:	e3500000 	cmp	r0, #0	; 0x0
        1df304:	da000017 	ble	1df368 <CShadowRingBuffer::CopyIn(unsigned char const *, long &)+0xbc>
        1df308:	e5951000 	ldr	r1, [r5]
        1df30c:	e1510000 	cmp	r1, r0
        1df310:	b1a00001 	movlt	r0, r1
        1df314:	e58d0000 	str	r0, [sp]
        1df318:	e1a02000 	mov	r2, r0
        1df31c:	e3a03000 	mov	r3, #0	; 0x0
        1df320:	e92d0008 	stmdb	sp!, {r3}
        1df324:	e1a00007 	mov	r0, r7
        1df328:	e1a01006 	mov	r1, r6
        1df32c:	e59d300c 	ldr	r3, [sp, #12]	; fField12
        1df330:	eb67c54a 	bl	1bd0860 <TUSharedMem::$CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)>
        1df334:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        1df338:	e0866000 	add	r6, r6, r0
        1df33c:	e5952000 	ldr	r2, [r5]
        1df340:	e0420000 	sub	r0, r2, r0
        1df344:	e5850000 	str	r0, [r5]
        1df348:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1df34c:	e59d0000 	ldr	r0, [sp]
        1df350:	e0810000 	add	r0, r1, r0
        1df354:	e5840004 	str	r0, [r4, #4]	; fField4
        1df358:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1df35c:	e1300001 	teq	r0, r1
        1df360:	03a00000 	moveq	r0, #0	; 0x0
        1df364:	05840004 	streq	r0, [r4, #4]	; fField4
        1df368:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1df36c:	e3500000 	cmp	r0, #0	; 0x0
        1df370:	da000013 	ble	1df3c4 <CShadowRingBuffer::CopyIn(unsigned char const *, long &)+0x118>
        1df374:	e5951000 	ldr	r1, [r5]
        1df378:	e1510000 	cmp	r1, r0
        1df37c:	b1a00001 	movlt	r0, r1
        1df380:	e58d0004 	str	r0, [sp, #4]	; fField4
        1df384:	e1a02000 	mov	r2, r0
        1df388:	e3a03000 	mov	r3, #0	; 0x0
        1df38c:	e92d0008 	stmdb	sp!, {r3}
        1df390:	e1a00007 	mov	r0, r7
        1df394:	e1a01006 	mov	r1, r6
        1df398:	e59d3010 	ldr	r3, [sp, #16]	; fField16
        1df39c:	eb67c52f 	bl	1bd0860 <TUSharedMem::$CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)>
        1df3a0:	e28dd004 	add	sp, sp, #4	; 0x4
        1df3a4:	e5951000 	ldr	r1, [r5]
        1df3a8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1df3ac:	e0410000 	sub	r0, r1, r0
        1df3b0:	e5850000 	str	r0, [r5]
        1df3b4:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1df3b8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1df3bc:	e0810000 	add	r0, r1, r0
        1df3c0:	e5840004 	str	r0, [r4, #4]	; fField4
        1df3c4:	e28dd010 	add	sp, sp, #16	; 0x10
        1df3c8:	e1a00004 	mov	r0, r4
        1df3cc:	e5941000 	ldr	r1, [r4]
        1df3d0:	e1a0e00f 	mov	lr, pc
        1df3d4:	e281f034 	add	pc, r1, #52	; 0x34
        1df3d8:	e3300000 	teq	r0, #0	; 0x0
        1df3dc:	13e00000 	mvnne	r0, #0	; 0x0
        1df3e0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::Reset(void)
 * Address: 001df3e4
 */
CShadowRingBuffer::Reset(void) {
    /*
        1df3e4:	e3a01000 	mov	r1, #0	; 0x0
        1df3e8:	e5801008 	str	r1, [r0, #8]	; fField8
        1df3ec:	e5a01004 	str	r1, [r0, #4]!	; fField4
        1df3f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowRingBuffer::GetSize( const(void))
 * Address: 001df3f4
 */
CShadowRingBuffer::GetSize( const(void)) {
    /*
        1df3f4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1df3f8:	e2400001 	sub	r0, r0, #1	; 0x1
        1df3fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowRingBuffer::AtEOF( const(void))
 * Address: 001df400
 */
CShadowRingBuffer::AtEOF( const(void)) {
    /*
        1df400:	e1a0c00d 	mov	ip, sp
        1df404:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1df408:	e24cb004 	sub	fp, ip, #4	; 0x4
        1df40c:	e1a04000 	mov	r4, r0
        1df410:	e5901000 	ldr	r1, [r0]
        1df414:	e1a0e00f 	mov	lr, pc
        1df418:	e281f038 	add	pc, r1, #56	; 0x38
        1df41c:	e3300000 	teq	r0, #0	; 0x0
        1df420:	1a000005 	bne	1df43c <CShadowRingBuffer::AtEOF( const(void))+0x3c>
        1df424:	e1a00004 	mov	r0, r4
        1df428:	e5941000 	ldr	r1, [r4]
        1df42c:	e1a0e00f 	mov	lr, pc
        1df430:	e281f034 	add	pc, r1, #52	; 0x34
        1df434:	e3300000 	teq	r0, #0	; 0x0
        1df438:	0a000001 	beq	1df444 <CShadowRingBuffer::AtEOF( const(void))+0x44>
        1df43c:	e3a00001 	mov	r0, #1	; 0x1
        1df440:	ea000000 	b	1df448 <CShadowRingBuffer::AtEOF( const(void))+0x48>
        1df444:	e3a00000 	mov	r0, #0	; 0x0
        1df448:	e20000ff 	and	r0, r0, #255	; 0xff
        1df44c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::Init(unsigned long, long, long)
 * Address: 001df450
 */
CShadowRingBuffer::Init(unsigned long, long, long) {
    /*
        1df450:	e1a0c00d 	mov	ip, sp
        1df454:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1df458:	e24cb004 	sub	fp, ip, #4	; 0x4
        1df45c:	e1a04000 	mov	r4, r0
        1df460:	e1a06002 	mov	r6, r2
        1df464:	e1a05003 	mov	r5, r3
        1df468:	e2800014 	add	r0, r0, #20	; 0x14
        1df46c:	e1a07000 	mov	r7, r0
        1df470:	eb67c4f4 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1df474:	e2841010 	add	r1, r4, #16	; 0x10
        1df478:	e1a00007 	mov	r0, r7
        1df47c:	e3a02000 	mov	r2, #0	; 0x0
        1df480:	eb67d56c 	bl	1bd4a38 <TUSharedMem::$GetSize(unsigned long *, void **)>
        1df484:	e5846008 	str	r6, [r4, #8]	; fField8
        1df488:	e584600c 	str	r6, [r4, #12]	; fField12
        1df48c:	e0861005 	add	r1, r6, r5
        1df490:	e5a41004 	str	r1, [r4, #4]!	; fField4
        1df494:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::FreeCount( const(void))
 * Address: 001df498
 */
CShadowRingBuffer::FreeCount( const(void)) {
    /*
        1df498:	e990000c 	ldmib	r0, {r2, r3}
        1df49c:	e0431002 	sub	r1, r3, r2
        1df4a0:	e2411001 	sub	r1, r1, #1	; 0x1
        1df4a4:	e1530002 	cmp	r3, r2
        1df4a8:	d5900010 	ldrle	r0, [r0, #16]	; fField16
        1df4ac:	d0801001 	addle	r1, r0, r1
        1df4b0:	e1a00001 	mov	r0, r1
        1df4b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowRingBuffer::DataCount( const(void))
 * Address: 001df4b8
 */
CShadowRingBuffer::DataCount( const(void)) {
    /*
        1df4b8:	e5902008 	ldr	r2, [r0, #8]	; fField8
        1df4bc:	e5903004 	ldr	r3, [r0, #4]	; fField4
        1df4c0:	e0431002 	sub	r1, r3, r2
        1df4c4:	e1530002 	cmp	r3, r2
        1df4c8:	b5900010 	ldrlt	r0, [r0, #16]	; fField16
        1df4cc:	b0801001 	addlt	r1, r0, r1
        1df4d0:	e1a00001 	mov	r0, r1
        1df4d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowRingBuffer::TempDataCount( const(void))
 * Address: 001df4d8
 */
CShadowRingBuffer::TempDataCount( const(void)) {
    /*
        1df4d8:	e590200c 	ldr	r2, [r0, #12]	; fField12
        1df4dc:	e5903004 	ldr	r3, [r0, #4]	; fField4
        1df4e0:	e0431002 	sub	r1, r3, r2
        1df4e4:	e1530002 	cmp	r3, r2
        1df4e8:	b5900010 	ldrlt	r0, [r0, #16]	; fField16
        1df4ec:	b0801001 	addlt	r1, r0, r1
        1df4f0:	e1a00001 	mov	r0, r1
        1df4f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ComputePutVectors__17CShadowRingBufferCFRPUcRlT1T2
 * Address: 001df4f8
 */
void CShadowRingBuffer::ComputePutVectors() {
    /*
        1df4f8:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        1df4fc:	e59d4010 	ldr	r4, [sp, #16]	; fField16
        1df500:	e5906008 	ldr	r6, [r0, #8]	; fField8
        1df504:	e3360000 	teq	r6, #0	; 0x0
        1df508:	1246c001 	subne	ip, r6, #1	; 0x1
        1df50c:	0590c010 	ldreq	ip, [r0, #16]	; fField16
        1df510:	024cc001 	subeq	ip, ip, #1	; 0x1
        1df514:	e3a0e000 	mov	lr, #0	; 0x0
        1df518:	e5905004 	ldr	r5, [r0, #4]	; fField4
        1df51c:	e1350006 	teq	r5, r6
        1df520:	1a000012 	bne	1df570 <ComputePutVectors__17CShadowRingBufferCFRPUcRlT1T2+0x78>
        1df524:	e3350000 	teq	r5, #0	; 0x0
        1df528:	133c0000 	teqne	ip, #0	; 0x0
        1df52c:	0581e000 	streq	lr, [r1]
        1df530:	0582e000 	streq	lr, [r2]
        1df534:	1581e000 	strne	lr, [r1]
        1df538:	1582c000 	strne	ip, [r2]
        1df53c:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1df540:	e151000c 	cmp	r1, ip
        1df544:	9a000004 	bls	1df55c <ComputePutVectors__17CShadowRingBufferCFRPUcRlT1T2+0x64>
        1df548:	e5831000 	str	r1, [r3]
        1df54c:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1df550:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1df554:	e0410000 	sub	r0, r1, r0
        1df558:	ea000002 	b	1df568 <ComputePutVectors__17CShadowRingBufferCFRPUcRlT1T2+0x70>
        1df55c:	e5831000 	str	r1, [r3]
        1df560:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1df564:	e04c0000 	sub	r0, ip, r0
        1df568:	e5840000 	str	r0, [r4]
        1df56c:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
        1df570:	e155000c 	cmp	r5, ip
        1df574:	1a000004 	bne	1df58c <ComputePutVectors__17CShadowRingBufferCFRPUcRlT1T2+0x94>
        1df578:	e583e000 	str	lr, [r3]
        1df57c:	e581e000 	str	lr, [r1]
        1df580:	e584e000 	str	lr, [r4]
        1df584:	e582e000 	str	lr, [r2]
        1df588:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
        1df58c:	8581e000 	strhi	lr, [r1]
        1df590:	8582c000 	strhi	ip, [r2]
        1df594:	85901004 	ldrhi	r1, [r0, #4]	; fField4
        1df598:	8affffea 	bhi	1df548 <ComputePutVectors__17CShadowRingBufferCFRPUcRlT1T2+0x50>
        1df59c:	e581e000 	str	lr, [r1]
        1df5a0:	e582e000 	str	lr, [r2]
        1df5a4:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1df5a8:	eaffffeb 	b	1df55c <ComputePutVectors__17CShadowRingBufferCFRPUcRlT1T2+0x64>
    */
}

/**
 * Symbol: ComputeTempGetVectors__17CShadowRingBufferCFRUlRlT1T2
 * Address: 001df5ac
 */
void CShadowRingBuffer::ComputeTempGetVectors() {
    /*
        1df5ac:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        1df5b0:	e59d4010 	ldr	r4, [sp, #16]	; fField16
        1df5b4:	e590c00c 	ldr	ip, [r0, #12]	; fField12
        1df5b8:	e33c0000 	teq	ip, #0	; 0x0
        1df5bc:	124c6001 	subne	r6, ip, #1	; 0x1
        1df5c0:	0590e010 	ldreq	lr, [r0, #16]	; fField16
        1df5c4:	024e6001 	subeq	r6, lr, #1	; 0x1
        1df5c8:	e3a0e000 	mov	lr, #0	; 0x0
        1df5cc:	e5905004 	ldr	r5, [r0, #4]	; fField4
        1df5d0:	e135000c 	teq	r5, ip
        1df5d4:	1a000004 	bne	1df5ec <ComputeTempGetVectors__17CShadowRingBufferCFRUlRlT1T2+0x40>
        1df5d8:	e583e000 	str	lr, [r3]
        1df5dc:	e581e000 	str	lr, [r1]
        1df5e0:	e584e000 	str	lr, [r4]
        1df5e4:	e582e000 	str	lr, [r2]
        1df5e8:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
        1df5ec:	e1350006 	teq	r5, r6
        1df5f0:	1a000008 	bne	1df618 <ComputeTempGetVectors__17CShadowRingBufferCFRUlRlT1T2+0x6c>
        1df5f4:	e155000c 	cmp	r5, ip
        1df5f8:	aa000008 	bge	1df620 <ComputeTempGetVectors__17CShadowRingBufferCFRUlRlT1T2+0x74>
        1df5fc:	e581e000 	str	lr, [r1]
        1df600:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1df604:	e5821000 	str	r1, [r2]
        1df608:	e590100c 	ldr	r1, [r0, #12]	; fField12
        1df60c:	e5831000 	str	r1, [r3]
        1df610:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1df614:	ea000006 	b	1df634 <ComputeTempGetVectors__17CShadowRingBufferCFRUlRlT1T2+0x88>
        1df618:	e15c0005 	cmp	ip, r5
        1df61c:	aa000008 	bge	1df644 <ComputeTempGetVectors__17CShadowRingBufferCFRUlRlT1T2+0x98>
        1df620:	e581e000 	str	lr, [r1]
        1df624:	e582e000 	str	lr, [r2]
        1df628:	e590100c 	ldr	r1, [r0, #12]	; fField12
        1df62c:	e5831000 	str	r1, [r3]
        1df630:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1df634:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1df638:	e0410000 	sub	r0, r1, r0
        1df63c:	e5840000 	str	r0, [r4]
        1df640:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
        1df644:	e583c000 	str	ip, [r3]
        1df648:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1df64c:	e590c00c 	ldr	ip, [r0, #12]	; fField12
        1df650:	e043300c 	sub	r3, r3, ip
        1df654:	e5843000 	str	r3, [r4]
        1df658:	e581e000 	str	lr, [r1]
        1df65c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1df660:	e5820000 	str	r0, [r2]
        1df664:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: ComputeGetVectors__17CShadowRingBufferCFRPUcRlT1T2
 * Address: 001df668
 */
void CShadowRingBuffer::ComputeGetVectors() {
    /*
        1df668:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        1df66c:	e59d4010 	ldr	r4, [sp, #16]	; fField16
        1df670:	e590c008 	ldr	ip, [r0, #8]	; fField8
        1df674:	e33c0000 	teq	ip, #0	; 0x0
        1df678:	124c6001 	subne	r6, ip, #1	; 0x1
        1df67c:	0590e010 	ldreq	lr, [r0, #16]	; fField16
        1df680:	024e6001 	subeq	r6, lr, #1	; 0x1
        1df684:	e3a0e000 	mov	lr, #0	; 0x0
        1df688:	e5905004 	ldr	r5, [r0, #4]	; fField4
        1df68c:	e135000c 	teq	r5, ip
        1df690:	1a000004 	bne	1df6a8 <ComputeGetVectors__17CShadowRingBufferCFRPUcRlT1T2+0x40>
        1df694:	e583e000 	str	lr, [r3]
        1df698:	e581e000 	str	lr, [r1]
        1df69c:	e584e000 	str	lr, [r4]
        1df6a0:	e582e000 	str	lr, [r2]
        1df6a4:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
        1df6a8:	e1350006 	teq	r5, r6
        1df6ac:	1a000008 	bne	1df6d4 <ComputeGetVectors__17CShadowRingBufferCFRPUcRlT1T2+0x6c>
        1df6b0:	e155000c 	cmp	r5, ip
        1df6b4:	aa000008 	bge	1df6dc <ComputeGetVectors__17CShadowRingBufferCFRPUcRlT1T2+0x74>
        1df6b8:	e581e000 	str	lr, [r1]
        1df6bc:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1df6c0:	e5821000 	str	r1, [r2]
        1df6c4:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1df6c8:	e5831000 	str	r1, [r3]
        1df6cc:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1df6d0:	ea000006 	b	1df6f0 <ComputeGetVectors__17CShadowRingBufferCFRPUcRlT1T2+0x88>
        1df6d4:	e15c0005 	cmp	ip, r5
        1df6d8:	aa000008 	bge	1df700 <ComputeGetVectors__17CShadowRingBufferCFRPUcRlT1T2+0x98>
        1df6dc:	e581e000 	str	lr, [r1]
        1df6e0:	e582e000 	str	lr, [r2]
        1df6e4:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1df6e8:	e5831000 	str	r1, [r3]
        1df6ec:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1df6f0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1df6f4:	e0410000 	sub	r0, r1, r0
        1df6f8:	e5840000 	str	r0, [r4]
        1df6fc:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
        1df700:	e583c000 	str	ip, [r3]
        1df704:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1df708:	e590c008 	ldr	ip, [r0, #8]	; fField8
        1df70c:	e043300c 	sub	r3, r3, ip
        1df710:	e5843000 	str	r3, [r4]
        1df714:	e581e000 	str	lr, [r1]
        1df718:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1df71c:	e5820000 	str	r0, [r2]
        1df720:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::UpdateGetVector(long)
 * Address: 001df724
 */
CShadowRingBuffer::UpdateGetVector(long) {
    /*
        1df724:	e1a0c00d 	mov	ip, sp
        1df728:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1df72c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1df730:	e1a05000 	mov	r5, r0
        1df734:	e1a04001 	mov	r4, r1
        1df738:	e3510000 	cmp	r1, #0	; 0x0
        1df73c:	da000022 	ble	1df7cc <CShadowRingBuffer::UpdateGetVector(long)+0xa8>
        1df740:	e24dd010 	sub	sp, sp, #16	; 0x10
        1df744:	e1a0300d 	mov	r3, sp
        1df748:	e92d0008 	stmdb	sp!, {r3}
        1df74c:	e28d300c 	add	r3, sp, #12	; 0xc
        1df750:	e28d2008 	add	r2, sp, #8	; 0x8
        1df754:	e28d1010 	add	r1, sp, #16	; 0x10
        1df758:	e1a00005 	mov	r0, r5
        1df75c:	e595c000 	ldr	ip, [r5]
        1df760:	e1a0e00f 	mov	lr, pc
        1df764:	e28cf050 	add	pc, ip, #80	; 0x50
        1df768:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        1df76c:	e3500000 	cmp	r0, #0	; 0x0
        1df770:	da00000a 	ble	1df7a0 <CShadowRingBuffer::UpdateGetVector(long)+0x7c>
        1df774:	e1540000 	cmp	r4, r0
        1df778:	b1a00004 	movlt	r0, r4
        1df77c:	e58d0000 	str	r0, [sp]
        1df780:	e0444000 	sub	r4, r4, r0
        1df784:	e5951008 	ldr	r1, [r5, #8]	; fField8
        1df788:	e0810000 	add	r0, r1, r0
        1df78c:	e5850008 	str	r0, [r5, #8]	; fField8
        1df790:	e5951010 	ldr	r1, [r5, #16]	; fField16
        1df794:	e1300001 	teq	r0, r1
        1df798:	03a00000 	moveq	r0, #0	; 0x0
        1df79c:	05850008 	streq	r0, [r5, #8]	; fField8
        1df7a0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1df7a4:	e3500000 	cmp	r0, #0	; 0x0
        1df7a8:	da000006 	ble	1df7c8 <CShadowRingBuffer::UpdateGetVector(long)+0xa4>
        1df7ac:	e1540000 	cmp	r4, r0
        1df7b0:	b1a00004 	movlt	r0, r4
        1df7b4:	e58d0004 	str	r0, [sp, #4]	; fField4
        1df7b8:	e0444000 	sub	r4, r4, r0
        1df7bc:	e5951008 	ldr	r1, [r5, #8]	; fField8
        1df7c0:	e0810000 	add	r0, r1, r0
        1df7c4:	e5a50008 	str	r0, [r5, #8]!	; fField8
        1df7c8:	e28dd010 	add	sp, sp, #16	; 0x10
        1df7cc:	e1a00004 	mov	r0, r4
        1df7d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::UpdatePutVector(long)
 * Address: 001df7d4
 */
CShadowRingBuffer::UpdatePutVector(long) {
    /*
        1df7d4:	e1a0c00d 	mov	ip, sp
        1df7d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1df7dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1df7e0:	e1a05000 	mov	r5, r0
        1df7e4:	e1a04001 	mov	r4, r1
        1df7e8:	e3510000 	cmp	r1, #0	; 0x0
        1df7ec:	da000022 	ble	1df87c <CShadowRingBuffer::UpdatePutVector(long)+0xa8>
        1df7f0:	e24dd010 	sub	sp, sp, #16	; 0x10
        1df7f4:	e1a0300d 	mov	r3, sp
        1df7f8:	e92d0008 	stmdb	sp!, {r3}
        1df7fc:	e28d300c 	add	r3, sp, #12	; 0xc
        1df800:	e28d2008 	add	r2, sp, #8	; 0x8
        1df804:	e28d1010 	add	r1, sp, #16	; 0x10
        1df808:	e1a00005 	mov	r0, r5
        1df80c:	e595c000 	ldr	ip, [r5]
        1df810:	e1a0e00f 	mov	lr, pc
        1df814:	e28cf04c 	add	pc, ip, #76	; 0x4c
        1df818:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        1df81c:	e3500000 	cmp	r0, #0	; 0x0
        1df820:	da00000a 	ble	1df850 <CShadowRingBuffer::UpdatePutVector(long)+0x7c>
        1df824:	e1540000 	cmp	r4, r0
        1df828:	b1a00004 	movlt	r0, r4
        1df82c:	e58d0000 	str	r0, [sp]
        1df830:	e0444000 	sub	r4, r4, r0
        1df834:	e5951004 	ldr	r1, [r5, #4]	; fField4
        1df838:	e0810000 	add	r0, r1, r0
        1df83c:	e5850004 	str	r0, [r5, #4]	; fField4
        1df840:	e5951010 	ldr	r1, [r5, #16]	; fField16
        1df844:	e1300001 	teq	r0, r1
        1df848:	03a00000 	moveq	r0, #0	; 0x0
        1df84c:	05850004 	streq	r0, [r5, #4]	; fField4
        1df850:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1df854:	e3500000 	cmp	r0, #0	; 0x0
        1df858:	da000006 	ble	1df878 <CShadowRingBuffer::UpdatePutVector(long)+0xa4>
        1df85c:	e1540000 	cmp	r4, r0
        1df860:	b1a00004 	movlt	r0, r4
        1df864:	e58d0004 	str	r0, [sp, #4]	; fField4
        1df868:	e0444000 	sub	r4, r4, r0
        1df86c:	e5951004 	ldr	r1, [r5, #4]	; fField4
        1df870:	e0810000 	add	r0, r1, r0
        1df874:	e5a50004 	str	r0, [r5, #4]!	; fField4
        1df878:	e28dd010 	add	sp, sp, #16	; 0x10
        1df87c:	e1a00004 	mov	r0, r4
        1df880:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::IsFull( const(void))
 * Address: 001df884
 */
CShadowRingBuffer::IsFull( const(void)) {
    /*
        1df884:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1df888:	e3310000 	teq	r1, #0	; 0x0
        1df88c:	05901010 	ldreq	r1, [r0, #16]	; fField16
        1df890:	e2411001 	sub	r1, r1, #1	; 0x1
        1df894:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1df898:	e1300001 	teq	r0, r1
        1df89c:	13a00000 	movne	r0, #0	; 0x0
        1df8a0:	03a00001 	moveq	r0, #1	; 0x1
        1df8a4:	e20000ff 	and	r0, r0, #255	; 0xff
        1df8a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowRingBuffer::IsEmpty( const(void))
 * Address: 001df8ac
 */
CShadowRingBuffer::IsEmpty( const(void)) {
    /*
        1df8ac:	e9900003 	ldmib	r0, {r0, r1}
        1df8b0:	e1310000 	teq	r1, r0
        1df8b4:	13a00000 	movne	r0, #0	; 0x0
        1df8b8:	03a00001 	moveq	r0, #1	; 0x1
        1df8bc:	e20000ff 	and	r0, r0, #255	; 0xff
        1df8c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowRingBuffer::GetByteAt(long)
 * Address: 001df8c4
 */
CShadowRingBuffer::GetByteAt(long) {
    /*
        1df8c4:	e1a0c00d 	mov	ip, sp
        1df8c8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1df8cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1df8d0:	e3a02000 	mov	r2, #0	; 0x0
        1df8d4:	e3a03000 	mov	r3, #0	; 0x0
        1df8d8:	e52d2008 	str	r2, [sp, -#8]!	; fField8
        1df8dc:	e1a02001 	mov	r2, r1
        1df8e0:	e92d000c 	stmdb	sp!, {r2, r3}
        1df8e4:	e2800014 	add	r0, r0, #20	; 0x14
        1df8e8:	e28d200c 	add	r2, sp, #12	; 0xc
        1df8ec:	e28d1008 	add	r1, sp, #8	; 0x8
        1df8f0:	e3a03001 	mov	r3, #1	; 0x1
        1df8f4:	eb67c3d0 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        1df8f8:	e28dd008 	add	sp, sp, #8	; 0x8
        1df8fc:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        1df900:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::PutByteAt(int, long)
 * Address: 001df904
 */
CShadowRingBuffer::PutByteAt(int, long) {
    /*
        1df904:	e1a0c00d 	mov	ip, sp
        1df908:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1df90c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1df910:	e1a04001 	mov	r4, r1
        1df914:	e56d1004 	strb	r1, [sp, -#4]!	; fField4
        1df918:	e3a03000 	mov	r3, #0	; 0x0
        1df91c:	e92d0008 	stmdb	sp!, {r3}
        1df920:	e2800014 	add	r0, r0, #20	; 0x14
        1df924:	e1a03002 	mov	r3, r2
        1df928:	e28d1004 	add	r1, sp, #4	; 0x4
        1df92c:	e3a02001 	mov	r2, #1	; 0x1
        1df930:	eb67c3ca 	bl	1bd0860 <TUSharedMem::$CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)>
        1df934:	e28dd004 	add	sp, sp, #4	; 0x4
        1df938:	e3300000 	teq	r0, #0	; 0x0
        1df93c:	13e00000 	mvnne	r0, #0	; 0x0
        1df940:	01a00004 	moveq	r0, r4
        1df944:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::Peek(void)
 * Address: 001df948
 */
CShadowRingBuffer::Peek(void) {
    /*
        1df948:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1df94c:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1df950:	e1310002 	teq	r1, r2
        1df954:	1a670e23 	bne	1ba31e8 <CShadowRingBuffer::$GetByteAt(long)>
        1df958:	03e00000 	mvneq	r0, #0	; 0x0
        1df95c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowRingBuffer::Next(void)
 * Address: 001df960
 */
CShadowRingBuffer::Next(void) {
    /*
        1df960:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1df964:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1df968:	e1310002 	teq	r1, r2
        1df96c:	0a000008 	beq	1df994 <CShadowRingBuffer::Next(void)+0x34>
        1df970:	e2813001 	add	r3, r1, #1	; 0x1
        1df974:	e5803008 	str	r3, [r0, #8]	; fField8
        1df978:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1df97c:	e1330001 	teq	r3, r1
        1df980:	03a01000 	moveq	r1, #0	; 0x0
        1df984:	05801008 	streq	r1, [r0, #8]	; fField8
        1df988:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1df98c:	e1310002 	teq	r1, r2
        1df990:	1a670e14 	bne	1ba31e8 <CShadowRingBuffer::$GetByteAt(long)>
        1df994:	e3e00000 	mvn	r0, #0	; 0x0
        1df998:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowRingBuffer::Skip(void)
 * Address: 001df99c
 */
CShadowRingBuffer::Skip(void) {
    /*
        1df99c:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1df9a0:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1df9a4:	e1310002 	teq	r1, r2
        1df9a8:	0a000009 	beq	1df9d4 <CShadowRingBuffer::Skip(void)+0x38>
        1df9ac:	e2813001 	add	r3, r1, #1	; 0x1
        1df9b0:	e5803008 	str	r3, [r0, #8]	; fField8
        1df9b4:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1df9b8:	e1330001 	teq	r3, r1
        1df9bc:	03a01000 	moveq	r1, #0	; 0x0
        1df9c0:	05801008 	streq	r1, [r0, #8]	; fField8
        1df9c4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1df9c8:	e1300002 	teq	r0, r2
        1df9cc:	13a00000 	movne	r0, #0	; 0x0
        1df9d0:	11a0f00e 	movne	pc, lr
        1df9d4:	e3e00000 	mvn	r0, #0	; 0x0
        1df9d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowRingBuffer::Get(void)
 * Address: 001df9dc
 */
CShadowRingBuffer::Get(void) {
    /*
        1df9dc:	e1a0c00d 	mov	ip, sp
        1df9e0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1df9e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1df9e8:	e1a04000 	mov	r4, r0
        1df9ec:	e9900003 	ldmib	r0, {r0, r1}
        1df9f0:	e1310000 	teq	r1, r0
        1df9f4:	03e00000 	mvneq	r0, #0	; 0x0
        1df9f8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1df9fc:	e1a00004 	mov	r0, r4
        1dfa00:	eb670df8 	bl	1ba31e8 <CShadowRingBuffer::$GetByteAt(long)>
        1dfa04:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1dfa08:	e2811001 	add	r1, r1, #1	; 0x1
        1dfa0c:	e5841008 	str	r1, [r4, #8]	; fField8
        1dfa10:	e5942010 	ldr	r2, [r4, #16]	; fField16
        1dfa14:	e1310002 	teq	r1, r2
        1dfa18:	03a01000 	moveq	r1, #0	; 0x0
        1dfa1c:	05a41008 	streq	r1, [r4, #8]!	; fField8
        1dfa20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowRingBuffer::Getn(unsigned char *, long)
 * Address: 001dfa24
 */
CShadowRingBuffer::Getn(unsigned char *, long) {
    /*
        1dfa24:	e1a0c00d 	mov	ip, sp
        1dfa28:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1dfa2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dfa30:	e1a04002 	mov	r4, r2
        1dfa34:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        1dfa38:	e1a0200d 	mov	r2, sp
        1dfa3c:	e5903000 	ldr	r3, [r0]
        1dfa40:	e1a0e00f 	mov	lr, pc
        1dfa44:	e283f018 	add	pc, r3, #24	; 0x18
        1dfa48:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1dfa4c:	e0440000 	sub	r0, r4, r0
        1dfa50:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

