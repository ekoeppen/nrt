#include "include/TIrQOS.h"

/**
 * Symbol: TIrQOS::__ct(void)
 * Address: 000f7e74
 */
TIrQOS::TIrQOS(void) {
    /*
         f7e74:	e1a0c00d 	mov	ip, sp
         f7e78:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f7e7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7e80:	e1b04000 	movs	r4, r0
         f7e84:	1a000003 	bne	f7e98 <TIrQOS::__ct(void)+0x24>
         f7e88:	e3a00008 	mov	r0, #8	; 0x8
         f7e8c:	eb6b5a29 	bl	1bce738 <$__nw(unsigned int)>
         f7e90:	e1b04000 	movs	r4, r0
         f7e94:	0a000001 	beq	f7ea0 <TIrQOS::__ct(void)+0x2c>
         f7e98:	e1a00004 	mov	r0, r4
         f7e9c:	eb64ff39 	bl	1a37b88 <TIrQOS::$Reset(void)>
         f7ea0:	e1a00004 	mov	r0, r4
         f7ea4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrQOS::__dt(void)
 * Address: 000f7ea8
 */
TIrQOS::~TIrQOS(void) {
    /*
         f7ea8:	e3110001 	tst	r1, #1	; 0x1
         f7eac:	1a6b560b 	bne	1bcd6e0 <$__dl(void *)>
         f7eb0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrQOS::GetWindowSize(void)
 * Address: 000f7eb4
 */
TIrQOS::GetWindowSize(void) {
    /*
         f7eb4:	e1a0c00d 	mov	ip, sp
         f7eb8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         f7ebc:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7ec0:	e5d01003 	ldrb	r1, [r0, #3]	; fField3
         f7ec4:	eb64ff2e 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f7ec8:	e2800001 	add	r0, r0, #1	; 0x1
         f7ecc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TIrQOS::GetExtraBOFs(void)
 * Address: 000f7ed0
 */
TIrQOS::GetExtraBOFs(void) {
    /*
         f7ed0:	e1a0c00d 	mov	ip, sp
         f7ed4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f7ed8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7edc:	e1a04000 	mov	r4, r0
         f7ee0:	e5d01004 	ldrb	r1, [r0, #4]	; fField4
         f7ee4:	eb64ff26 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f7ee8:	e59f101c 	ldr	r1, [pc, #1c]	; f7f0c <TIrQOS::GetExtraBOFs(void)+0x3c>	; fField1
         f7eec:	e7d15000 	ldrb	r5, [r1, r0]
         f7ef0:	e1a00004 	mov	r0, r4
         f7ef4:	eb64ff28 	bl	1a37b9c <TIrQOS::$GetBaudRate(void)>
         f7ef8:	e0010590 	mul	r1, r0, r5
         f7efc:	e3a00cc2 	mov	r0, #49664	; 0xc200
         f7f00:	e2800801 	add	r0, r0, #65536	; 0x10000
         f7f04:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f7f08:	ea6aea8e 	b	1bb2948 <$__rt_udiv>
         f7f0c:	003717a0 	eoreqs	r1, r7, r0, lsr #15
    */
}

/**
 * Symbol: TIrQOS::GetMinTurnAroundTime(void)
 * Address: 000f7f10
 */
TIrQOS::GetMinTurnAroundTime(void) {
    /*
         f7f10:	e1a0c00d 	mov	ip, sp
         f7f14:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         f7f18:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7f1c:	e5d01005 	ldrb	r1, [r0, #5]	; fField5
         f7f20:	eb64ff17 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f7f24:	e59f1004 	ldr	r1, [pc, #4]	; f7f30 <TIrQOS::GetMinTurnAroundTime(void)+0x20>	; fField4
         f7f28:	e7910100 	ldr	r0, [r1, r0, lsl #2]	; fField2
         f7f2c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         f7f30:	003717b8 	ldreqh	r1, [r7], -r8
    */
}

/**
 * Symbol: TIrQOS::GetLinkDiscThresholdTime(void)
 * Address: 000f7f34
 */
TIrQOS::GetLinkDiscThresholdTime(void) {
    /*
         f7f34:	e1a0c00d 	mov	ip, sp
         f7f38:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         f7f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7f40:	e5d01006 	ldrb	r1, [r0, #6]	; fField6
         f7f44:	eb64ff0e 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f7f48:	e59f1004 	ldr	r1, [pc, #4]	; f7f54 <TIrQOS::GetLinkDiscThresholdTime(void)+0x20>	; fField4
         f7f4c:	e7910100 	ldr	r0, [r1, r0, lsl #2]	; fField2
         f7f50:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         f7f54:	003717d8 	ldreqsb	r1, [r7], -r8
    */
}

/**
 * Symbol: TIrQOS::AddInfoToBuffer(unsigned char *, unsigned long)
 * Address: 000f7f58
 */
TIrQOS::AddInfoToBuffer(unsigned char *, unsigned long) {
    /*
         f7f58:	e1a0c00d 	mov	ip, sp
         f7f5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f7f60:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7f64:	e1a05000 	mov	r5, r0
         f7f68:	e1a04001 	mov	r4, r1
         f7f6c:	eb64ff03 	bl	1a37b80 <TIrQOS::$NormalizeInfo(void)>
         f7f70:	e3a00001 	mov	r0, #1	; 0x1
         f7f74:	e4c40001 	strb	r0, [r4], #1	; fField1
         f7f78:	e4c40001 	strb	r0, [r4], #1	; fField1
         f7f7c:	e5d51000 	ldrb	r1, [r5]
         f7f80:	e4c41001 	strb	r1, [r4], #1	; fField1
         f7f84:	e3a01082 	mov	r1, #130	; 0x82
         f7f88:	e4c41001 	strb	r1, [r4], #1	; fField1
         f7f8c:	e4c40001 	strb	r0, [r4], #1	; fField1
         f7f90:	e5d51001 	ldrb	r1, [r5, #1]	; fField1
         f7f94:	e4c41001 	strb	r1, [r4], #1	; fField1
         f7f98:	e3a01083 	mov	r1, #131	; 0x83
         f7f9c:	e4c41001 	strb	r1, [r4], #1	; fField1
         f7fa0:	e4c40001 	strb	r0, [r4], #1	; fField1
         f7fa4:	e5d51002 	ldrb	r1, [r5, #2]	; fField2
         f7fa8:	e4c41001 	strb	r1, [r4], #1	; fField1
         f7fac:	e3a01084 	mov	r1, #132	; 0x84
         f7fb0:	e4c41001 	strb	r1, [r4], #1	; fField1
         f7fb4:	e4c40001 	strb	r0, [r4], #1	; fField1
         f7fb8:	e5d51003 	ldrb	r1, [r5, #3]	; fField3
         f7fbc:	e4c41001 	strb	r1, [r4], #1	; fField1
         f7fc0:	e3a01085 	mov	r1, #133	; 0x85
         f7fc4:	e4c41001 	strb	r1, [r4], #1	; fField1
         f7fc8:	e4c40001 	strb	r0, [r4], #1	; fField1
         f7fcc:	e5d51004 	ldrb	r1, [r5, #4]	; fField4
         f7fd0:	e4c41001 	strb	r1, [r4], #1	; fField1
         f7fd4:	e3a01086 	mov	r1, #134	; 0x86
         f7fd8:	e4c41001 	strb	r1, [r4], #1	; fField1
         f7fdc:	e4c40001 	strb	r0, [r4], #1	; fField1
         f7fe0:	e5d51005 	ldrb	r1, [r5, #5]	; fField5
         f7fe4:	e4c41001 	strb	r1, [r4], #1	; fField1
         f7fe8:	e3a01008 	mov	r1, #8	; 0x8
         f7fec:	e4c41001 	strb	r1, [r4], #1	; fField1
         f7ff0:	e4c40001 	strb	r0, [r4], #1	; fField1
         f7ff4:	e5d50006 	ldrb	r0, [r5, #6]	; fField6
         f7ff8:	e5c40000 	strb	r0, [r4]
         f7ffc:	e3a00015 	mov	r0, #21	; 0x15
         f8000:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)
 * Address: 000f8004
 */
TIrQOS::ExtractInfoFromBuffer(CBufferSegment *) {
    /*
         f8004:	e1a0c00d 	mov	ip, sp
         f8008:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f800c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8010:	e1a04000 	mov	r4, r0
         f8014:	e1a05001 	mov	r5, r1
         f8018:	e24dd004 	sub	sp, sp, #4	; 0x4
         f801c:	e3a00002 	mov	r0, #2	; 0x2
         f8020:	e5c40000 	strb	r0, [r4]
         f8024:	e3a00001 	mov	r0, #1	; 0x1
         f8028:	e5c40001 	strb	r0, [r4, #1]	; fField1
         f802c:	e5c40002 	strb	r0, [r4, #2]	; fField2
         f8030:	e5c40003 	strb	r0, [r4, #3]	; fField3
         f8034:	e5c40004 	strb	r0, [r4, #4]	; fField4
         f8038:	e5c40005 	strb	r0, [r4, #5]	; fField5
         f803c:	e3a000ff 	mov	r0, #255	; 0xff
         f8040:	e5c40006 	strb	r0, [r4, #6]	; fField6
         f8044:	e1a0100d 	mov	r1, sp
         f8048:	e1a00005 	mov	r0, r5
         f804c:	e3a02003 	mov	r2, #3	; 0x3
         f8050:	e5953000 	ldr	r3, [r5]
         f8054:	e1a0e00f 	mov	lr, pc
         f8058:	e283f014 	add	pc, r3, #20	; 0x14
         f805c:	e3300003 	teq	r0, #3	; 0x3
         f8060:	13a00000 	movne	r0, #0	; 0x0
         f8064:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         f8068:	e5dd0002 	ldrb	r0, [sp, #2]	; fField2
         f806c:	e5dd1000 	ldrb	r1, [sp]
         f8070:	e3510083 	cmp	r1, #131	; 0x83
         f8074:	0a000015 	beq	f80d0 <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xcc>
         f8078:	ca000008 	bgt	f80a0 <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0x9c>
         f807c:	e3310001 	teq	r1, #1	; 0x1
         f8080:	0a00000f 	beq	f80c4 <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xc0>
         f8084:	e3310008 	teq	r1, #8	; 0x8
         f8088:	0a000019 	beq	f80f4 <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xf0>
         f808c:	e3310082 	teq	r1, #130	; 0x82
         f8090:	1a000019 	bne	f80fc <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xf8>
         f8094:	e210000f 	ands	r0, r0, #15	; 0xf
         f8098:	15c40001 	strneb	r0, [r4, #1]	; fField1
         f809c:	ea000016 	b	f80fc <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xf8>
         f80a0:	e3310084 	teq	r1, #132	; 0x84
         f80a4:	0a00000c 	beq	f80dc <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xd8>
         f80a8:	e3310085 	teq	r1, #133	; 0x85
         f80ac:	0a00000d 	beq	f80e8 <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xe4>
         f80b0:	e3310086 	teq	r1, #134	; 0x86
         f80b4:	1a000010 	bne	f80fc <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xf8>
         f80b8:	e21000ff 	ands	r0, r0, #255	; 0xff
         f80bc:	15c40005 	strneb	r0, [r4, #5]	; fField5
         f80c0:	ea00000d 	b	f80fc <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xf8>
         f80c4:	e210003f 	ands	r0, r0, #63	; 0x3f
         f80c8:	15c40000 	strneb	r0, [r4]
         f80cc:	ea00000a 	b	f80fc <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xf8>
         f80d0:	e210003f 	ands	r0, r0, #63	; 0x3f
         f80d4:	15c40002 	strneb	r0, [r4, #2]	; fField2
         f80d8:	ea000007 	b	f80fc <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xf8>
         f80dc:	e210007f 	ands	r0, r0, #127	; 0x7f
         f80e0:	15c40003 	strneb	r0, [r4, #3]	; fField3
         f80e4:	ea000004 	b	f80fc <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xf8>
         f80e8:	e21000ff 	ands	r0, r0, #255	; 0xff
         f80ec:	15c40004 	strneb	r0, [r4, #4]	; fField4
         f80f0:	ea000001 	b	f80fc <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0xf8>
         f80f4:	e21000ff 	ands	r0, r0, #255	; 0xff
         f80f8:	15c40006 	strneb	r0, [r4, #6]	; fField6
         f80fc:	e5dd0001 	ldrb	r0, [sp, #1]	; fField1
         f8100:	e3500001 	cmp	r0, #1	; 0x1
         f8104:	daffffce 	ble	f8044 <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0x40>
         f8108:	e5dd0001 	ldrb	r0, [sp, #1]	; fField1
         f810c:	e2401001 	sub	r1, r0, #1	; 0x1
         f8110:	e1a00005 	mov	r0, r5
         f8114:	e3a02000 	mov	r2, #0	; 0x0
         f8118:	e5953000 	ldr	r3, [r5]
         f811c:	e1a0e00f 	mov	lr, pc
         f8120:	e283f038 	add	pc, r3, #56	; 0x38
         f8124:	eaffffc6 	b	f8044 <TIrQOS::ExtractInfoFromBuffer(CBufferSegment *)+0x40>
    */
}

/**
 * Symbol: TIrQOS::NegotiateWith(TIrQOS *)
 * Address: 000f8128
 */
TIrQOS::NegotiateWith(TIrQOS *) {
    /*
         f8128:	e5d02000 	ldrb	r2, [r0]
         f812c:	e5d13000 	ldrb	r3, [r1]
         f8130:	e0022003 	and	r2, r2, r3
         f8134:	e5c02000 	strb	r2, [r0]
         f8138:	e5d02006 	ldrb	r2, [r0, #6]	; fField6
         f813c:	e5d11006 	ldrb	r1, [r1, #6]	; fField6
         f8140:	e0021001 	and	r1, r2, r1
         f8144:	e5c01006 	strb	r1, [r0, #6]	; fField6
         f8148:	e5d01000 	ldrb	r1, [r0]
         f814c:	e3310000 	teq	r1, #0	; 0x0
         f8150:	15d01006 	ldrneb	r1, [r0, #6]	; fField6
         f8154:	13310000 	teqne	r1, #0	; 0x0
         f8158:	03a0008d 	moveq	r0, #141	; 0x8d
         f815c:	02400c97 	subeq	r0, r0, #38656	; 0x9700
         f8160:	1a64fe86 	bne	1a37b80 <TIrQOS::$NormalizeInfo(void)>
         f8164:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrQOS::NormalizeInfo(void)
 * Address: 000f8168
 */
TIrQOS::NormalizeInfo(void) {
    /*
         f8168:	e1a0c00d 	mov	ip, sp
         f816c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         f8170:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8174:	e1a04000 	mov	r4, r0
         f8178:	e3a07000 	mov	r7, #0	; 0x0
         f817c:	e5d01000 	ldrb	r1, [r0]
         f8180:	eb64fe7f 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f8184:	e59f1040 	ldr	r1, [pc, #40]	; f81cc <TIrQOS::NormalizeInfo(void)+0x64>
         f8188:	e0815180 	add	r5, r1, r0, lsl #3
         f818c:	e5d41005 	ldrb	r1, [r4, #5]	; fField5
         f8190:	e1a00004 	mov	r0, r4
         f8194:	eb64fe7a 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f8198:	e0850000 	add	r0, r5, r0
         f819c:	e5509008 	ldrb	r9, [r0, -#8]
         f81a0:	e1a00004 	mov	r0, r4
         f81a4:	eb64fe7c 	bl	1a37b9c <TIrQOS::$GetBaudRate(void)>
         f81a8:	e240c907 	sub	ip, r0, #114688	; 0x1c000
         f81ac:	e33c0c02 	teq	ip, #512	; 0x200
         f81b0:	1a000007 	bne	f81d4 <TIrQOS::NormalizeInfo(void)+0x6c>
         f81b4:	e5d41001 	ldrb	r1, [r4, #1]	; fField1
         f81b8:	e1a00004 	mov	r0, r4
         f81bc:	eb64fe70 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f81c0:	e59f1008 	ldr	r1, [pc, #8]	; f81d0 <TIrQOS::NormalizeInfo(void)+0x68>
         f81c4:	e7916100 	ldr	r6, [r1, r0, lsl #2]	; fField2
         f81c8:	ea000007 	b	f81ec <TIrQOS::NormalizeInfo(void)+0x84>
         f81cc:	003717f8 	ldreqsh	r1, [r7], -r8
         f81d0:	00371830 	eoreqs	r1, r7, r0, lsr r8
         f81d4:	e5d41000 	ldrb	r1, [r4]
         f81d8:	e1a00004 	mov	r0, r4
         f81dc:	eb64fe68 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f81e0:	e59f1080 	ldr	r1, [pc, #80]	; f8268 <TIrQOS::NormalizeInfo(void)+0x100>
         f81e4:	e0810100 	add	r0, r1, r0, lsl #2
         f81e8:	e5306004 	ldr	r6, [r0, -#4]!	; fField4
         f81ec:	e1a00004 	mov	r0, r4
         f81f0:	eb64fa5c 	bl	1a36b68 <TIrQOS::$GetExtraBOFs(void)>
         f81f4:	e1a08000 	mov	r8, r0
         f81f8:	e3a05000 	mov	r5, #0	; 0x0
         f81fc:	e5d41003 	ldrb	r1, [r4, #3]	; fField3
         f8200:	e3a00001 	mov	r0, #1	; 0x1
         f8204:	e1110510 	tst	r1, r0, lsl r5
         f8208:	1a000002 	bne	f8218 <TIrQOS::NormalizeInfo(void)+0xb0>
         f820c:	e2855001 	add	r5, r5, #1	; 0x1
         f8210:	e3550008 	cmp	r5, #8	; 0x8
         f8214:	3afffffa 	bcc	f8204 <TIrQOS::NormalizeInfo(void)+0x9c>
         f8218:	e1a00004 	mov	r0, r4
         f821c:	eb64fa4f 	bl	1a36b60 <TIrQOS::$GetDataSize(void)>
         f8220:	e0800008 	add	r0, r0, r8
         f8224:	e280a006 	add	sl, r0, #6	; 0x6
         f8228:	e1a00004 	mov	r0, r4
         f822c:	eb64fa4c 	bl	1a36b64 <TIrQOS::$GetWindowSize(void)>
         f8230:	e020909a 	mla	r0, sl, r0, r9
         f8234:	e1500006 	cmp	r0, r6
         f8238:	3a000017 	bcc	f829c <TIrQOS::NormalizeInfo(void)+0x134>
         f823c:	e5d41003 	ldrb	r1, [r4, #3]	; fField3
         f8240:	e1a00004 	mov	r0, r4
         f8244:	eb64fe4e 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f8248:	e1300005 	teq	r0, r5
         f824c:	0a000006 	beq	f826c <TIrQOS::NormalizeInfo(void)+0x104>
         f8250:	e5d41003 	ldrb	r1, [r4, #3]	; fField3
         f8254:	e3a02001 	mov	r2, #1	; 0x1
         f8258:	e1e00012 	mvn	r0, r2, lsl r0
         f825c:	e0010000 	and	r0, r1, r0
         f8260:	e5c40003 	strb	r0, [r4, #3]	; fField3
         f8264:	eaffffeb 	b	f8218 <TIrQOS::NormalizeInfo(void)+0xb0>
         f8268:	00371820 	eoreqs	r1, r7, r0, lsr #16
         f826c:	e5d41002 	ldrb	r1, [r4, #2]	; fField2
         f8270:	e1a00004 	mov	r0, r4
         f8274:	eb64fe42 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f8278:	e3a02001 	mov	r2, #1	; 0x1
         f827c:	e1e00012 	mvn	r0, r2, lsl r0
         f8280:	e5d41002 	ldrb	r1, [r4, #2]	; fField2
         f8284:	e0000001 	and	r0, r0, r1
         f8288:	e5c40002 	strb	r0, [r4, #2]	; fField2
         f828c:	e31000ff 	tst	r0, #255	; 0xff
         f8290:	1affffe0 	bne	f8218 <TIrQOS::NormalizeInfo(void)+0xb0>
         f8294:	e3a0708d 	mov	r7, #141	; 0x8d
         f8298:	e2477c97 	sub	r7, r7, #38656	; 0x9700
         f829c:	e1a00007 	mov	r0, r7
         f82a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TIrQOS::HighestBitOn(unsigned char)
 * Address: 000f82a4
 */
TIrQOS::HighestBitOn(unsigned char) {
    /*
         f82a4:	e20120ff 	and	r2, r1, #255	; 0xff
         f82a8:	e3a01080 	mov	r1, #128	; 0x80
         f82ac:	e3a00007 	mov	r0, #7	; 0x7
         f82b0:	e1120001 	tst	r2, r1
         f82b4:	11a0f00e 	movne	pc, lr
         f82b8:	e2400001 	sub	r0, r0, #1	; 0x1
         f82bc:	e1a010c1 	mov	r1, r1, asr #1
         f82c0:	e21110ff 	ands	r1, r1, #255	; 0xff
         f82c4:	1afffff9 	bne	f82b0 <TIrQOS::HighestBitOn(unsigned char)+0xc>
         f82c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrQOS::Reset(void)
 * Address: 000f82cc
 */
TIrQOS::Reset(void) {
    /*
         f82cc:	e3a0103e 	mov	r1, #62	; 0x3e
         f82d0:	e5c01000 	strb	r1, [r0]
         f82d4:	e3a01001 	mov	r1, #1	; 0x1
         f82d8:	e5c01001 	strb	r1, [r0, #1]	; fField1
         f82dc:	e3a0200f 	mov	r2, #15	; 0xf
         f82e0:	e5c02002 	strb	r2, [r0, #2]	; fField2
         f82e4:	e5c01003 	strb	r1, [r0, #3]	; fField3
         f82e8:	e3a01020 	mov	r1, #32	; 0x20
         f82ec:	e5c01004 	strb	r1, [r0, #4]	; fField4
         f82f0:	e3a01002 	mov	r1, #2	; 0x2
         f82f4:	e5c01005 	strb	r1, [r0, #5]	; fField5
         f82f8:	e3a010ff 	mov	r1, #255	; 0xff
         f82fc:	e5c01006 	strb	r1, [r0, #6]	; fField6
         f8300:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrQOS::SetBaudRate(unsigned long)
 * Address: 000f8304
 */
TIrQOS::SetBaudRate(unsigned long) {
    /*
         f8304:	e3a02000 	mov	r2, #0	; 0x0
         f8308:	e251c907 	subs	ip, r1, #114688	; 0x1c000
         f830c:	a35c0c02 	cmpge	ip, #512	; 0x200
         f8310:	0a000010 	beq	f8358 <TIrQOS::SetBaudRate(unsigned long)+0x54>
         f8314:	ca000008 	bgt	f833c <TIrQOS::SetBaudRate(unsigned long)+0x38>
         f8318:	e3310d96 	teq	r1, #9600	; 0x2580
         f831c:	0a000011 	beq	f8368 <TIrQOS::SetBaudRate(unsigned long)+0x64>
         f8320:	e3310c4b 	teq	r1, #19200	; 0x4b00
         f8324:	0a00000e 	beq	f8364 <TIrQOS::SetBaudRate(unsigned long)+0x60>
         f8328:	e3310c96 	teq	r1, #38400	; 0x9600
         f832c:	0a00000b 	beq	f8360 <TIrQOS::SetBaudRate(unsigned long)+0x5c>
         f8330:	e3310ce1 	teq	r1, #57600	; 0xe100
         f8334:	1a00000f 	bne	f8378 <TIrQOS::SetBaudRate(unsigned long)+0x74>
         f8338:	ea000007 	b	f835c <TIrQOS::SetBaudRate(unsigned long)+0x58>
         f833c:	e241c923 	sub	ip, r1, #573440	; 0x8c000
         f8340:	e33c0c0a 	teq	ip, #2560	; 0xa00
         f8344:	1241c946 	subne	ip, r1, #1146880	; 0x118000
         f8348:	133c0b05 	teqne	ip, #5120	; 0x1400
         f834c:	1241c83d 	subne	ip, r1, #3997696	; 0x3d0000
         f8350:	133c0c09 	teqne	ip, #2304	; 0x900
         f8354:	1a000007 	bne	f8378 <TIrQOS::SetBaudRate(unsigned long)+0x74>
         f8358:	e3a02020 	mov	r2, #32	; 0x20
         f835c:	e3822010 	orr	r2, r2, #16	; 0x10
         f8360:	e3822008 	orr	r2, r2, #8	; 0x8
         f8364:	e3822004 	orr	r2, r2, #4	; 0x4
         f8368:	e3821002 	orr	r1, r2, #2	; 0x2
         f836c:	e5c01000 	strb	r1, [r0]
         f8370:	e3a00000 	mov	r0, #0	; 0x0
         f8374:	e1a0f00e 	mov	pc, lr
         f8378:	e3a0007a 	mov	r0, #122	; 0x7a
         f837c:	e2400c3f 	sub	r0, r0, #16128	; 0x3f00
         f8380:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrQOS::SetDataSize(unsigned long)
 * Address: 000f8384
 */
TIrQOS::SetDataSize(unsigned long) {
    /*
         f8384:	e3a02000 	mov	r2, #0	; 0x0
         f8388:	e3510c02 	cmp	r1, #512	; 0x200
         f838c:	0a00000d 	beq	f83c8 <TIrQOS::SetDataSize(unsigned long)+0x44>
         f8390:	ca000006 	bgt	f83b0 <TIrQOS::SetDataSize(unsigned long)+0x2c>
         f8394:	e3310040 	teq	r1, #64	; 0x40
         f8398:	0a00000d 	beq	f83d4 <TIrQOS::SetDataSize(unsigned long)+0x50>
         f839c:	e3310080 	teq	r1, #128	; 0x80
         f83a0:	0a00000a 	beq	f83d0 <TIrQOS::SetDataSize(unsigned long)+0x4c>
         f83a4:	e3310c01 	teq	r1, #256	; 0x100
         f83a8:	1a00000d 	bne	f83e4 <TIrQOS::SetDataSize(unsigned long)+0x60>
         f83ac:	ea000006 	b	f83cc <TIrQOS::SetDataSize(unsigned long)+0x48>
         f83b0:	e3310b01 	teq	r1, #1024	; 0x400
         f83b4:	0a000002 	beq	f83c4 <TIrQOS::SetDataSize(unsigned long)+0x40>
         f83b8:	e3310b02 	teq	r1, #2048	; 0x800
         f83bc:	1a000008 	bne	f83e4 <TIrQOS::SetDataSize(unsigned long)+0x60>
         f83c0:	e3a02020 	mov	r2, #32	; 0x20
         f83c4:	e3822010 	orr	r2, r2, #16	; 0x10
         f83c8:	e3822008 	orr	r2, r2, #8	; 0x8
         f83cc:	e3822004 	orr	r2, r2, #4	; 0x4
         f83d0:	e3822002 	orr	r2, r2, #2	; 0x2
         f83d4:	e3821001 	orr	r1, r2, #1	; 0x1
         f83d8:	e5c01002 	strb	r1, [r0, #2]	; fField2
         f83dc:	e3a00000 	mov	r0, #0	; 0x0
         f83e0:	e1a0f00e 	mov	pc, lr
         f83e4:	e3a0007a 	mov	r0, #122	; 0x7a
         f83e8:	e2400c3f 	sub	r0, r0, #16128	; 0x3f00
         f83ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrQOS::SetWindowSize(unsigned long)
 * Address: 000f83f0
 */
TIrQOS::SetWindowSize(unsigned long) {
    /*
         f83f0:	e2411001 	sub	r1, r1, #1	; 0x1
         f83f4:	e3510007 	cmp	r1, #7	; 0x7
         f83f8:	23a0007a 	movcs	r0, #122	; 0x7a
         f83fc:	22400c3f 	subcs	r0, r0, #16128	; 0x3f00
         f8400:	21a0f00e 	movcs	pc, lr
         f8404:	e2612006 	rsb	r2, r1, #6	; 0x6
         f8408:	e3a0107f 	mov	r1, #127	; 0x7f
         f840c:	e1a01231 	mov	r1, r1, lsr r2
         f8410:	e201107f 	and	r1, r1, #127	; 0x7f
         f8414:	e5c01003 	strb	r1, [r0, #3]	; fField3
         f8418:	e3a00000 	mov	r0, #0	; 0x0
         f841c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrQOS::SetLinkDiscThresholdTime(unsigned long)
 * Address: 000f8420
 */
TIrQOS::SetLinkDiscThresholdTime(unsigned long) {
    /*
         f8420:	e1a0c00d 	mov	ip, sp
         f8424:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f8428:	e24cb004 	sub	fp, ip, #4	; 0x4
         f842c:	e1a04000 	mov	r4, r0
         f8430:	e3a05000 	mov	r5, #0	; 0x0
         f8434:	e3a009e1 	mov	r0, #3686400	; 0x384000
         f8438:	eb6ae942 	bl	1bb2948 <$__rt_udiv>
         f843c:	e3500014 	cmp	r0, #20	; 0x14
         f8440:	0a000012 	beq	f8490 <TIrQOS::SetLinkDiscThresholdTime(unsigned long)+0x70>
         f8444:	ca000008 	bgt	f846c <TIrQOS::SetLinkDiscThresholdTime(unsigned long)+0x4c>
         f8448:	e3300003 	teq	r0, #3	; 0x3
         f844c:	0a000013 	beq	f84a0 <TIrQOS::SetLinkDiscThresholdTime(unsigned long)+0x80>
         f8450:	e3300008 	teq	r0, #8	; 0x8
         f8454:	0a000010 	beq	f849c <TIrQOS::SetLinkDiscThresholdTime(unsigned long)+0x7c>
         f8458:	e330000c 	teq	r0, #12	; 0xc
         f845c:	0a00000d 	beq	f8498 <TIrQOS::SetLinkDiscThresholdTime(unsigned long)+0x78>
         f8460:	e3300010 	teq	r0, #16	; 0x10
         f8464:	1a000011 	bne	f84b0 <TIrQOS::SetLinkDiscThresholdTime(unsigned long)+0x90>
         f8468:	ea000009 	b	f8494 <TIrQOS::SetLinkDiscThresholdTime(unsigned long)+0x74>
         f846c:	e3300019 	teq	r0, #25	; 0x19
         f8470:	0a000005 	beq	f848c <TIrQOS::SetLinkDiscThresholdTime(unsigned long)+0x6c>
         f8474:	e330001e 	teq	r0, #30	; 0x1e
         f8478:	0a000002 	beq	f8488 <TIrQOS::SetLinkDiscThresholdTime(unsigned long)+0x68>
         f847c:	e3300028 	teq	r0, #40	; 0x28
         f8480:	1a00000a 	bne	f84b0 <TIrQOS::SetLinkDiscThresholdTime(unsigned long)+0x90>
         f8484:	e3a05080 	mov	r5, #128	; 0x80
         f8488:	e3855040 	orr	r5, r5, #64	; 0x40
         f848c:	e3855020 	orr	r5, r5, #32	; 0x20
         f8490:	e3855010 	orr	r5, r5, #16	; 0x10
         f8494:	e3855008 	orr	r5, r5, #8	; 0x8
         f8498:	e3855004 	orr	r5, r5, #4	; 0x4
         f849c:	e3855002 	orr	r5, r5, #2	; 0x2
         f84a0:	e3850001 	orr	r0, r5, #1	; 0x1
         f84a4:	e5c40006 	strb	r0, [r4, #6]	; fField6
         f84a8:	e3a00000 	mov	r0, #0	; 0x0
         f84ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f84b0:	e3a0007a 	mov	r0, #122	; 0x7a
         f84b4:	e2400c3f 	sub	r0, r0, #16128	; 0x3f00
         f84b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrQOS::GetBaudRate(void)
 * Address: 000f84bc
 */
TIrQOS::GetBaudRate(void) {
    /*
         f84bc:	e1a0c00d 	mov	ip, sp
         f84c0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         f84c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f84c8:	e5d01000 	ldrb	r1, [r0]
         f84cc:	eb64fdac 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f84d0:	e2400001 	sub	r0, r0, #1	; 0x1
         f84d4:	e59f1004 	ldr	r1, [pc, #4]	; f84e0 <TIrQOS::GetBaudRate(void)+0x24>	; fField4
         f84d8:	e7910100 	ldr	r0, [r1, r0, lsl #2]	; fField2
         f84dc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         f84e0:	0037178c 	eoreqs	r1, r7, ip, lsl #15
    */
}

/**
 * Symbol: TIrQOS::GetMaxTurnAroundTime(void)
 * Address: 000f84e4
 */
TIrQOS::GetMaxTurnAroundTime(void) {
    /*
         f84e4:	e1a0c00d 	mov	ip, sp
         f84e8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         f84ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         f84f0:	e5d01001 	ldrb	r1, [r0, #1]	; fField1
         f84f4:	eb64fda2 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f84f8:	e59f1004 	ldr	r1, [pc, #4]	; f8504 <TIrQOS::GetMaxTurnAroundTime(void)+0x20>	; fField4
         f84fc:	e7910100 	ldr	r0, [r1, r0, lsl #2]	; fField2
         f8500:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         f8504:	003717a8 	eoreqs	r1, r7, r8, lsr #15
    */
}

/**
 * Symbol: TIrQOS::GetDataSize(void)
 * Address: 000f8508
 */
TIrQOS::GetDataSize(void) {
    /*
         f8508:	e1a0c00d 	mov	ip, sp
         f850c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         f8510:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8514:	e5d01002 	ldrb	r1, [r0, #2]	; fField2
         f8518:	eb64fd99 	bl	1a37b84 <TIrQOS::$HighestBitOn(unsigned char)>
         f851c:	e3a01001 	mov	r1, #1	; 0x1
         f8520:	e1a00011 	mov	r0, r1, lsl r0
         f8524:	e1a00300 	mov	r0, r0, lsl #6
         f8528:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

