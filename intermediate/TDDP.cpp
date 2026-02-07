#include "include/TDDP.h"

/**
 * Symbol: TDDP::__ct(void)
 * Address: 0007ad78
 */
TDDP::TDDP(void) {
    /*
         7ad78:	e1a0c00d 	mov	ip, sp
         7ad7c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         7ad80:	e24cb004 	sub	fp, ip, #4	; 0x4
         7ad84:	e1b04000 	movs	r4, r0
         7ad88:	1a000003 	bne	7ad9c <TDDP::__ct(void)+0x24>
         7ad8c:	e3a00030 	mov	r0, #48	; 0x30
         7ad90:	eb6d4e68 	bl	1bce738 <$__nw(unsigned int)>
         7ad94:	e1b04000 	movs	r4, r0
         7ad98:	0a000005 	beq	7adb4 <TDDP::__ct(void)+0x3c>
         7ad9c:	e1a00004 	mov	r0, r4
         7ada0:	eb67dac2 	bl	1a718b0 <TStackObject::$__ct(void)>
         7ada4:	e284001c 	add	r0, r4, #28	; 0x1c
         7ada8:	eb67ded7 	bl	1a7290c <TSocketComparer::$__ct(void)>
         7adac:	e59f0008 	ldr	r0, [pc, #8]	; 7adbc <TDDP::__ct(void)+0x44>
         7adb0:	e5840000 	str	r0, [r4]
         7adb4:	e1a00004 	mov	r0, r4
         7adb8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         7adbc:	0001f3e0 	andeq	pc, r1, r0, ror #7
    */
}

/**
 * Symbol: TDDP::__dt(void)
 * Address: 0007adc0
 */
TDDP::~TDDP(void) {
    /*
         7adc0:	e1a0c00d 	mov	ip, sp
         7adc4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7adc8:	e24cb004 	sub	fp, ip, #4	; 0x4
         7adcc:	e1a04000 	mov	r4, r0
         7add0:	e1a05001 	mov	r5, r1
         7add4:	e59f0020 	ldr	r0, [pc, #20]	; 7adfc <TDDP::__dt(void)+0x3c>	; fField20
         7add8:	e5840000 	str	r0, [r4]
         7addc:	e1a00004 	mov	r0, r4
         7ade0:	e3a01000 	mov	r1, #0	; 0x0
         7ade4:	eb67e2e9 	bl	1a73990 <TStackObject::$__dt(void)>
         7ade8:	e3150001 	tst	r5, #1	; 0x1
         7adec:	11a00004 	movne	r0, r4
         7adf0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         7adf4:	1a6d4a39 	bne	1bcd6e0 <$__dl(void *)>
         7adf8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         7adfc:	0001f3e0 	andeq	pc, r1, r0, ror #7
    */
}

/**
 * Symbol: TDDP::Init(void)
 * Address: 0007ae00
 */
TDDP::Init(void) {
    /*
         7ae00:	e1a0c00d 	mov	ip, sp
         7ae04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7ae08:	e24cb004 	sub	fp, ip, #4	; 0x4
         7ae0c:	e1a04000 	mov	r4, r0
         7ae10:	e3a00080 	mov	r0, #128	; 0x80
         7ae14:	e5c40018 	strb	r0, [r4, #24]	; fField24
         7ae18:	e1a00004 	mov	r0, r4
         7ae1c:	e59f2030 	ldr	r2, [pc, #30]	; 7ae54 <TDDP::Init(void)+0x54>
         7ae20:	e59f1030 	ldr	r1, [pc, #30]	; 7ae58 <TDDP::Init(void)+0x58>
         7ae24:	eb6803df 	bl	1a7bda8 <TStackObject::$Init(unsigned long, unsigned long)>
         7ae28:	e1b05000 	movs	r5, r0
         7ae2c:	1a000006 	bne	7ae4c <TDDP::Init(void)+0x4c>
         7ae30:	e284101c 	add	r1, r4, #28	; 0x1c
         7ae34:	e3a00000 	mov	r0, #0	; 0x0
         7ae38:	eb6da0e3 	bl	1be31cc <CSortedList::$__ct(CItemComparer *)>
         7ae3c:	e5a4002c 	str	r0, [r4, #44]!	; fField44
         7ae40:	e3300000 	teq	r0, #0	; 0x0
         7ae44:	03a050a8 	moveq	r5, #168	; 0xa8
         7ae48:	02455b07 	subeq	r5, r5, #7168	; 0x1c00
         7ae4c:	e1a00005 	mov	r0, r5
         7ae50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         7ae54:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         7ae58:	64647020 	strvsbt	r7, [r4], -#32	; fField32
    */
}

/**
 * Symbol: TDDP::NextSocketNumber(void)
 * Address: 0007ae5c
 */
TDDP::NextSocketNumber(void) {
    /*
         7ae5c:	e5d01018 	ldrb	r1, [r0, #24]	; fField24
         7ae60:	e2811001 	add	r1, r1, #1	; 0x1
         7ae64:	e5c01018 	strb	r1, [r0, #24]	; fField24
         7ae68:	e20110ff 	and	r1, r1, #255	; 0xff
         7ae6c:	e35100fe 	cmp	r1, #254	; 0xfe
         7ae70:	c3a01080 	movgt	r1, #128	; 0x80
         7ae74:	c5c01018 	strgtb	r1, [r0, #24]	; fField24
         7ae78:	e5d00018 	ldrb	r0, [r0, #24]	; fField24
         7ae7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDDP::ReadShort(TUMsgToken *, TPacketMessage *)
 * Address: 0007ae80
 */
TDDP::ReadShort(TUMsgToken *, TPacketMessage *) {
    /*
         7ae80:	e1a0c00d 	mov	ip, sp
         7ae84:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         7ae88:	e24cb004 	sub	fp, ip, #4	; 0x4
         7ae8c:	e1a05000 	mov	r5, r0
         7ae90:	e1a06001 	mov	r6, r1
         7ae94:	e1a04002 	mov	r4, r2
         7ae98:	e24dd010 	sub	sp, sp, #16	; 0x10
         7ae9c:	e3a07000 	mov	r7, #0	; 0x0
         7aea0:	e5928028 	ldr	r8, [r2, #40]	; fField40
         7aea4:	e1a00008 	mov	r0, r8
         7aea8:	eb6de2c9 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         7aeac:	e5b81028 	ldr	r1, [r8, #40]!	; fField40
         7aeb0:	e0800001 	add	r0, r0, r1
         7aeb4:	e1a0100d 	mov	r1, sp
         7aeb8:	e3a02002 	mov	r2, #2	; 0x2
         7aebc:	eb6d9024 	bl	1bdef54 <$BlockMove>
         7aec0:	e5948028 	ldr	r8, [r4, #40]	; fField40
         7aec4:	e1a00008 	mov	r0, r8
         7aec8:	eb6de2c1 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         7aecc:	e5b81028 	ldr	r1, [r8, #40]!	; fField40
         7aed0:	e0800001 	add	r0, r0, r1
         7aed4:	e2800002 	add	r0, r0, #2	; 0x2
         7aed8:	e28d100a 	add	r1, sp, #10	; 0xa
         7aedc:	e3a02003 	mov	r2, #3	; 0x3
         7aee0:	eb6d901b 	bl	1bdef54 <$BlockMove>
         7aee4:	e2840014 	add	r0, r4, #20	; 0x14
         7aee8:	e1a01000 	mov	r1, r0
         7aeec:	e3a08000 	mov	r8, #0	; 0x0
         7aef0:	e5c08009 	strb	r8, [r0, #9]
         7aef4:	e5c08008 	strb	r8, [r0, #8]
         7aef8:	e59d0008 	ldr	r0, [sp, #8]
         7aefc:	e5c1000b 	strb	r0, [r1, #11]
         7af00:	e59d0008 	ldr	r0, [sp, #8]
         7af04:	e1a00800 	mov	r0, r0, lsl #16
         7af08:	e1a00c20 	mov	r0, r0, lsr #24
         7af0c:	e5c40022 	strb	r0, [r4, #34]
         7af10:	e5940028 	ldr	r0, [r4, #40]	; fField40
         7af14:	e1a02000 	mov	r2, r0
         7af18:	e5b0102c 	ldr	r1, [r0, #44]!	; fField44
         7af1c:	e59d0000 	ldr	r0, [sp]
         7af20:	e1a00300 	mov	r0, r0, lsl #6
         7af24:	e1310b20 	teq	r1, r0, lsr #22
         7af28:	1a000035 	bne	7b004 <TDDP::ReadShort(TUMsgToken *, TPacketMessage *)+0x184>
         7af2c:	e3a0304f 	mov	r3, #79	; 0x4f
         7af30:	e2833c02 	add	r3, r3, #512	; 0x200
         7af34:	e1530b20 	cmp	r3, r0, lsr #22
         7af38:	ba000031 	blt	7b004 <TDDP::ReadShort(TUMsgToken *, TPacketMessage *)+0x184>
         7af3c:	e2410005 	sub	r0, r1, #5	; 0x5
         7af40:	e582002c 	str	r0, [r2, #44]	; fField44
         7af44:	e5920028 	ldr	r0, [r2, #40]	; fField40
         7af48:	e2800005 	add	r0, r0, #5	; 0x5
         7af4c:	e5a20028 	str	r0, [r2, #40]!	; fField40
         7af50:	e59d0008 	ldr	r0, [sp, #8]
         7af54:	e3100cff 	tst	r0, #65280	; 0xff00
         7af58:	0a000025 	beq	7aff4 <TDDP::ReadShort(TUMsgToken *, TPacketMessage *)+0x174>
         7af5c:	e24dd004 	sub	sp, sp, #4	; 0x4
         7af60:	e59d000c 	ldr	r0, [sp, #12]
         7af64:	e1a00800 	mov	r0, r0, lsl #16
         7af68:	e1a00c20 	mov	r0, r0, lsr #24
         7af6c:	e5c50028 	strb	r0, [r5, #40]	; fField40
         7af70:	e285101c 	add	r1, r5, #28	; 0x1c
         7af74:	e1a0200d 	mov	r2, sp
         7af78:	e595002c 	ldr	r0, [r5, #44]	; fField44
         7af7c:	eb6dc9c5 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         7af80:	e3300000 	teq	r0, #0	; 0x0
         7af84:	0a000004 	beq	7af9c <TDDP::ReadShort(TUMsgToken *, TPacketMessage *)+0x11c>
         7af88:	e28d3004 	add	r3, sp, #4	; 0x4
         7af8c:	e1a02004 	mov	r2, r4
         7af90:	e1a01006 	mov	r1, r6
         7af94:	eb680fd9 	bl	1a7ef00 <TATSocket::$Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)>
         7af98:	e1a07000 	mov	r7, r0
         7af9c:	e28dd004 	add	sp, sp, #4	; 0x4
         7afa0:	e287cc27 	add	ip, r7, #9984	; 0x2700
         7afa4:	e37c0023 	cmn	ip, #35	; 0x23
         7afa8:	1a000011 	bne	7aff4 <TDDP::ReadShort(TUMsgToken *, TPacketMessage *)+0x174>
         7afac:	e24dd018 	sub	sp, sp, #24	; 0x18
         7afb0:	e1a0000d 	mov	r0, sp
         7afb4:	eb6da49f 	bl	1be4238 <TAEvent::$__ct(void)>
         7afb8:	e59f003c 	ldr	r0, [pc, #3c]	; 7affc <TDDP::ReadShort(TUMsgToken *, TPacketMessage *)+0x17c>
         7afbc:	e58d0000 	str	r0, [sp]
         7afc0:	e58d800c 	str	r8, [sp, #12]
         7afc4:	e58d8008 	str	r8, [sp, #8]
         7afc8:	e59f0030 	ldr	r0, [pc, #30]	; 7b000 <TDDP::ReadShort(TUMsgToken *, TPacketMessage *)+0x180>
         7afcc:	e58d0004 	str	r0, [sp, #4]
         7afd0:	e3a00001 	mov	r0, #1	; 0x1
         7afd4:	e2800c07 	add	r0, r0, #1792	; 0x700
         7afd8:	e58d0010 	str	r0, [sp, #16]
         7afdc:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         7afe0:	e5cd0014 	strb	r0, [sp, #20]	; fField20
         7afe4:	e1a0100d 	mov	r1, sp
         7afe8:	e1a00005 	mov	r0, r5
         7afec:	eb67f2f3 	bl	1a77bc0 <TDDP::$CloseSocket(TAppleTalkMessage *)>
         7aff0:	e28dd018 	add	sp, sp, #24	; 0x18
         7aff4:	e1a00007 	mov	r0, r7
         7aff8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         7affc:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         7b000:	64647020 	strvsbt	r7, [r4], -#32	; fField32
         7b004:	e3a0704e 	mov	r7, #78	; 0x4e
         7b008:	e2477a03 	sub	r7, r7, #12288	; 0x3000
         7b00c:	eafffff8 	b	7aff4 <TDDP::ReadShort(TUMsgToken *, TPacketMessage *)+0x174>
    */
}

/**
 * Symbol: TDDP::ReadLong(TUMsgToken *, TPacketMessage *)
 * Address: 0007b010
 */
TDDP::ReadLong(TUMsgToken *, TPacketMessage *) {
    /*
         7b010:	e1a0c00d 	mov	ip, sp
         7b014:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         7b018:	e24cb004 	sub	fp, ip, #4	; 0x4
         7b01c:	e1a05000 	mov	r5, r0
         7b020:	e1a06001 	mov	r6, r1
         7b024:	e1a04002 	mov	r4, r2
         7b028:	e24dd010 	sub	sp, sp, #16	; 0x10
         7b02c:	e3a07000 	mov	r7, #0	; 0x0
         7b030:	e5928028 	ldr	r8, [r2, #40]	; fField40
         7b034:	e1a00008 	mov	r0, r8
         7b038:	eb6de265 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         7b03c:	e5b81028 	ldr	r1, [r8, #40]!	; fField40
         7b040:	e0800001 	add	r0, r0, r1
         7b044:	e1a0100d 	mov	r1, sp
         7b048:	e3a02010 	mov	r2, #16	; 0x10
         7b04c:	eb6d8fc0 	bl	1bdef54 <$BlockMove>
         7b050:	e2840014 	add	r0, r4, #20	; 0x14
         7b054:	e59d1004 	ldr	r1, [sp, #4]
         7b058:	e1a01801 	mov	r1, r1, lsl #16
         7b05c:	e1a01821 	mov	r1, r1, lsr #16
         7b060:	e5c01009 	strb	r1, [r0, #9]
         7b064:	e1a01441 	mov	r1, r1, asr #8
         7b068:	e5c01008 	strb	r1, [r0, #8]
         7b06c:	e59d2008 	ldr	r2, [sp, #8]
         7b070:	e5c0200b 	strb	r2, [r0, #11]
         7b074:	e59d1008 	ldr	r1, [sp, #8]
         7b078:	e1a01401 	mov	r1, r1, lsl #8
         7b07c:	e1a01c21 	mov	r1, r1, lsr #24
         7b080:	e5c0100a 	strb	r1, [r0, #10]
         7b084:	e59d0008 	ldr	r0, [sp, #8]
         7b088:	e1a00800 	mov	r0, r0, lsl #16
         7b08c:	e1a00c20 	mov	r0, r0, lsr #24
         7b090:	e5c40022 	strb	r0, [r4, #34]
         7b094:	e5940028 	ldr	r0, [r4, #40]	; fField40
         7b098:	e1a02000 	mov	r2, r0
         7b09c:	e5b0102c 	ldr	r1, [r0, #44]!	; fField44
         7b0a0:	e59d0000 	ldr	r0, [sp]
         7b0a4:	e1a00300 	mov	r0, r0, lsl #6
         7b0a8:	e1310b20 	teq	r1, r0, lsr #22
         7b0ac:	1a000036 	bne	7b18c <TDDP::ReadLong(TUMsgToken *, TPacketMessage *)+0x17c>
         7b0b0:	e3a03057 	mov	r3, #87	; 0x57
         7b0b4:	e2833c02 	add	r3, r3, #512	; 0x200
         7b0b8:	e1530b20 	cmp	r3, r0, lsr #22
         7b0bc:	ba000032 	blt	7b18c <TDDP::ReadLong(TUMsgToken *, TPacketMessage *)+0x17c>
         7b0c0:	e241000d 	sub	r0, r1, #13	; 0xd
         7b0c4:	e582002c 	str	r0, [r2, #44]	; fField44
         7b0c8:	e5920028 	ldr	r0, [r2, #40]	; fField40
         7b0cc:	e280000d 	add	r0, r0, #13	; 0xd
         7b0d0:	e5a20028 	str	r0, [r2, #40]!	; fField40
         7b0d4:	e59d0008 	ldr	r0, [sp, #8]
         7b0d8:	e3100cff 	tst	r0, #65280	; 0xff00
         7b0dc:	0a000026 	beq	7b17c <TDDP::ReadLong(TUMsgToken *, TPacketMessage *)+0x16c>
         7b0e0:	e24dd004 	sub	sp, sp, #4	; 0x4
         7b0e4:	e59d000c 	ldr	r0, [sp, #12]
         7b0e8:	e1a00800 	mov	r0, r0, lsl #16
         7b0ec:	e1a00c20 	mov	r0, r0, lsr #24
         7b0f0:	e5c50028 	strb	r0, [r5, #40]	; fField40
         7b0f4:	e285101c 	add	r1, r5, #28	; 0x1c
         7b0f8:	e1a0200d 	mov	r2, sp
         7b0fc:	e595002c 	ldr	r0, [r5, #44]	; fField44
         7b100:	eb6dc964 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         7b104:	e3300000 	teq	r0, #0	; 0x0
         7b108:	0a000004 	beq	7b120 <TDDP::ReadLong(TUMsgToken *, TPacketMessage *)+0x110>
         7b10c:	e28d3004 	add	r3, sp, #4	; 0x4
         7b110:	e1a02004 	mov	r2, r4
         7b114:	e1a01006 	mov	r1, r6
         7b118:	eb680f78 	bl	1a7ef00 <TATSocket::$Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)>
         7b11c:	e1a07000 	mov	r7, r0
         7b120:	e28dd004 	add	sp, sp, #4	; 0x4
         7b124:	e287cc27 	add	ip, r7, #9984	; 0x2700
         7b128:	e37c0023 	cmn	ip, #35	; 0x23
         7b12c:	1a000012 	bne	7b17c <TDDP::ReadLong(TUMsgToken *, TPacketMessage *)+0x16c>
         7b130:	e24dd018 	sub	sp, sp, #24	; 0x18
         7b134:	e1a0000d 	mov	r0, sp
         7b138:	eb6da43e 	bl	1be4238 <TAEvent::$__ct(void)>
         7b13c:	e59f0040 	ldr	r0, [pc, #40]	; 7b184 <TDDP::ReadLong(TUMsgToken *, TPacketMessage *)+0x174>	; fField40
         7b140:	e58d0000 	str	r0, [sp]
         7b144:	e3a00000 	mov	r0, #0	; 0x0
         7b148:	e58d000c 	str	r0, [sp, #12]
         7b14c:	e58d0008 	str	r0, [sp, #8]
         7b150:	e59f0030 	ldr	r0, [pc, #30]	; 7b188 <TDDP::ReadLong(TUMsgToken *, TPacketMessage *)+0x178>
         7b154:	e58d0004 	str	r0, [sp, #4]
         7b158:	e3a00001 	mov	r0, #1	; 0x1
         7b15c:	e2800c07 	add	r0, r0, #1792	; 0x700
         7b160:	e58d0010 	str	r0, [sp, #16]
         7b164:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         7b168:	e5cd0014 	strb	r0, [sp, #20]	; fField20
         7b16c:	e1a0100d 	mov	r1, sp
         7b170:	e1a00005 	mov	r0, r5
         7b174:	eb67f291 	bl	1a77bc0 <TDDP::$CloseSocket(TAppleTalkMessage *)>
         7b178:	e28dd018 	add	sp, sp, #24	; 0x18
         7b17c:	e1a00007 	mov	r0, r7
         7b180:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         7b184:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         7b188:	64647020 	strvsbt	r7, [r4], -#32	; fField32
         7b18c:	e3a0704e 	mov	r7, #78	; 0x4e
         7b190:	e2477a03 	sub	r7, r7, #12288	; 0x3000
         7b194:	eafffff8 	b	7b17c <TDDP::ReadLong(TUMsgToken *, TPacketMessage *)+0x16c>
    */
}

/**
 * Symbol: TDDP::Read(TUMsgToken *, TAppleTalkMessage *)
 * Address: 0007b198
 */
TDDP::Read(TUMsgToken *, TAppleTalkMessage *) {
    /*
         7b198:	e5d23021 	ldrb	r3, [r2, #33]
         7b19c:	e3330001 	teq	r3, #1	; 0x1
         7b1a0:	0a680f5a 	beq	1a7ef10 <TDDP::$ReadShort(TUMsgToken *, TPacketMessage *)>
         7b1a4:	e3330002 	teq	r3, #2	; 0x2
         7b1a8:	0a680f57 	beq	1a7ef0c <TDDP::$ReadLong(TUMsgToken *, TPacketMessage *)>
         7b1ac:	13a00050 	movne	r0, #80	; 0x50
         7b1b0:	12400a03 	subne	r0, r0, #12288	; 0x3000
         7b1b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDDP::Write(TAppleTalkMessage *)
 * Address: 0007b1b8
 */
TDDP::Write(TAppleTalkMessage *) {
    /*
         7b1b8:	e1a0c00d 	mov	ip, sp
         7b1bc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         7b1c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         7b1c4:	e1a04000 	mov	r4, r0
         7b1c8:	e24dd054 	sub	sp, sp, #84	; 0x54
         7b1cc:	e3a07000 	mov	r7, #0	; 0x0
         7b1d0:	e1a06001 	mov	r6, r1
         7b1d4:	e28d0024 	add	r0, sp, #36	; 0x24
         7b1d8:	eb6da416 	bl	1be4238 <TAEvent::$__ct(void)>
         7b1dc:	e59f0148 	ldr	r0, [pc, #148]	; 7b32c <TDDP::Write(TAppleTalkMessage *)+0x174>
         7b1e0:	e58d0024 	str	r0, [sp, #36]
         7b1e4:	e3a00000 	mov	r0, #0	; 0x0
         7b1e8:	e58d0030 	str	r0, [sp, #48]
         7b1ec:	e58d002c 	str	r0, [sp, #44]	; fField44
         7b1f0:	e28d003c 	add	r0, sp, #60	; 0x3c
         7b1f4:	e1a0a000 	mov	sl, r0
         7b1f8:	e3a01001 	mov	r1, #1	; 0x1
         7b1fc:	eb6de1ea 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         7b200:	e28d0048 	add	r0, sp, #72	; 0x48
         7b204:	e1a08000 	mov	r8, r0
         7b208:	e3a01001 	mov	r1, #1	; 0x1
         7b20c:	eb6de1e6 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         7b210:	e59f0118 	ldr	r0, [pc, #118]	; 7b330 <TDDP::Write(TAppleTalkMessage *)+0x178>
         7b214:	e58d0028 	str	r0, [sp, #40]	; fField40
         7b218:	e3a00c01 	mov	r0, #256	; 0x100
         7b21c:	e58d0034 	str	r0, [sp, #52]
         7b220:	e28d000c 	add	r0, sp, #12	; 0xc
         7b224:	eb67d9ae 	bl	1a718e4 <TWriteElement::$__ct(void)>
         7b228:	e1a0000d 	mov	r0, sp
         7b22c:	eb67d99e 	bl	1a718ac <TWriteChain::$__ct(void)>
         7b230:	e596002c 	ldr	r0, [r6, #44]	; fField44
         7b234:	e3300000 	teq	r0, #0	; 0x0
         7b238:	1a00000d 	bne	7b274 <TDDP::Write(TAppleTalkMessage *)+0xbc>
         7b23c:	e5960028 	ldr	r0, [r6, #40]	; fField40
         7b240:	e1a09000 	mov	r9, r0
         7b244:	e590502c 	ldr	r5, [r0, #44]	; fField44
         7b248:	eb6de1e1 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         7b24c:	e5b91028 	ldr	r1, [r9, #40]!	; fField40
         7b250:	e0801001 	add	r1, r0, r1
         7b254:	e28d000c 	add	r0, sp, #12	; 0xc
         7b258:	e3a03002 	mov	r3, #2	; 0x2
         7b25c:	e1a02005 	mov	r2, r5
         7b260:	eb6802d5 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
         7b264:	e28d100c 	add	r1, sp, #12	; 0xc
         7b268:	e1a0000d 	mov	r0, sp
         7b26c:	eb67e5eb 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
         7b270:	e586d02c 	str	sp, [r6, #44]	; fField44
         7b274:	e59f00b0 	ldr	r0, [pc, #b0]	; 7b32c <TDDP::Write(TAppleTalkMessage *)+0x174>
         7b278:	e58d0024 	str	r0, [sp, #36]
         7b27c:	e59f00ac 	ldr	r0, [pc, #ac]	; 7b330 <TDDP::Write(TAppleTalkMessage *)+0x178>
         7b280:	e58d0028 	str	r0, [sp, #40]	; fField40
         7b284:	e3a00c01 	mov	r0, #256	; 0x100
         7b288:	e2861014 	add	r1, r6, #20	; 0x14
         7b28c:	e1a09001 	mov	r9, r1
         7b290:	e1a05001 	mov	r5, r1
         7b294:	e58d0034 	str	r0, [sp, #52]
         7b298:	e1a00008 	mov	r0, r8
         7b29c:	eb6de1c3 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         7b2a0:	e3a00030 	mov	r0, #48	; 0x30
         7b2a4:	e52d0004 	str	r0, [sp, -#4]!
         7b2a8:	eb6d61c9 	bl	1bd39d4 <$GetGlobals>
         7b2ac:	e28d3028 	add	r3, sp, #40	; 0x28
         7b2b0:	e92d0008 	stmdb	sp!, {r3}
         7b2b4:	e28d3004 	add	r3, sp, #4	; 0x4
         7b2b8:	e3a02000 	mov	r2, #0	; 0x0
         7b2bc:	e3a01000 	mov	r1, #0	; 0x0
         7b2c0:	e590c000 	ldr	ip, [r0]
         7b2c4:	e1a0e00f 	mov	lr, pc
         7b2c8:	e28cf050 	add	pc, ip, #80	; 0x50
         7b2cc:	e28dd004 	add	sp, sp, #4	; 0x4
         7b2d0:	e5980004 	ldr	r0, [r8, #4]
         7b2d4:	e5a50004 	str	r0, [r5, #4]!
         7b2d8:	e59d0030 	ldr	r0, [sp, #48]
         7b2dc:	e280cdc3 	add	ip, r0, #12480	; 0x30c0
         7b2e0:	e37c0018 	cmn	ip, #24	; 0x18
         7b2e4:	15d90001 	ldrneb	r0, [r9, #1]
         7b2e8:	13300000 	teqne	r0, #0	; 0x0
         7b2ec:	0a000020 	beq	7b374 <TDDP::Write(TAppleTalkMessage *)+0x1bc>
         7b2f0:	e24dd004 	sub	sp, sp, #4	; 0x4
         7b2f4:	e5c40028 	strb	r0, [r4, #40]	; fField40
         7b2f8:	e284101c 	add	r1, r4, #28	; 0x1c
         7b2fc:	e1a0200d 	mov	r2, sp
         7b300:	e594002c 	ldr	r0, [r4, #44]	; fField44
         7b304:	eb6dc8e3 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         7b308:	e3300000 	teq	r0, #0	; 0x0
         7b30c:	0a000017 	beq	7b370 <TDDP::Write(TAppleTalkMessage *)+0x1b8>
         7b310:	e59d1040 	ldr	r1, [sp, #64]
         7b314:	e3310001 	teq	r1, #1	; 0x1
         7b318:	0a000005 	beq	7b334 <TDDP::Write(TAppleTalkMessage *)+0x17c>
         7b31c:	e3310002 	teq	r1, #2	; 0x2
         7b320:	13310003 	teqne	r1, #3	; 0x3
         7b324:	1a000011 	bne	7b370 <TDDP::Write(TAppleTalkMessage *)+0x1b8>
         7b328:	ea000008 	b	7b350 <TDDP::Write(TAppleTalkMessage *)+0x198>
         7b32c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         7b330:	72746d70 	rsbvcs	r6, r4, #7168	; 0x1c00
         7b334:	e59d1034 	ldr	r1, [sp, #52]
         7b338:	e281cdc3 	add	ip, r1, #12480	; 0x30c0
         7b33c:	e37c0017 	cmn	ip, #23	; 0x17
         7b340:	0a000002 	beq	7b350 <TDDP::Write(TAppleTalkMessage *)+0x198>
         7b344:	e1a01006 	mov	r1, r6
         7b348:	eb681752 	bl	1a81098 <TATSocket::$WriteShort(TPacketMessage &)>
         7b34c:	ea000006 	b	7b36c <TDDP::Write(TAppleTalkMessage *)+0x1b4>
         7b350:	e5d43019 	ldrb	r3, [r4, #25]	; fField25
         7b354:	e92d0008 	stmdb	sp!, {r3}
         7b358:	e1a0200a 	mov	r2, sl
         7b35c:	e1a01008 	mov	r1, r8
         7b360:	e1a03006 	mov	r3, r6
         7b364:	eb68174a 	bl	1a81094 <TATSocket::$WriteLong(TAddress *, TAddress *, TPacketMessage &, unsigned char)>
         7b368:	e28dd004 	add	sp, sp, #4	; 0x4
         7b36c:	e1a07000 	mov	r7, r0
         7b370:	e28dd004 	add	sp, sp, #4	; 0x4
         7b374:	e28d0004 	add	r0, sp, #4	; 0x4
         7b378:	eb67f62b 	bl	1a78c2c <TWriteChain::$Destroy(void)>
         7b37c:	e28d0010 	add	r0, sp, #16	; 0x10
         7b380:	e3a01000 	mov	r1, #0	; 0x0
         7b384:	e1a0e00f 	mov	lr, pc
         7b388:	e59df010 	ldr	pc, [sp, #16]
         7b38c:	e1a00007 	mov	r0, r7
         7b390:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDDP::OpenSocket(TAppleTalkMessage *)
 * Address: 0007b394
 */
TDDP::OpenSocket(TAppleTalkMessage *) {
    /*
         7b394:	e1a0c00d 	mov	ip, sp
         7b398:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         7b39c:	e24cb004 	sub	fp, ip, #4	; 0x4
         7b3a0:	e1a04000 	mov	r4, r0
         7b3a4:	e24dd004 	sub	sp, sp, #4	; 0x4
         7b3a8:	e1a07001 	mov	r7, r1
         7b3ac:	e5d10014 	ldrb	r0, [r1, #20]	; fField20
         7b3b0:	e3a05051 	mov	r5, #81	; 0x51
         7b3b4:	e2455a03 	sub	r5, r5, #12288	; 0x3000
         7b3b8:	e284601c 	add	r6, r4, #28	; 0x1c
         7b3bc:	e3300000 	teq	r0, #0	; 0x0
         7b3c0:	0a000007 	beq	7b3e4 <TDDP::OpenSocket(TAppleTalkMessage *)+0x50>
         7b3c4:	e5c40028 	strb	r0, [r4, #40]	; fField40
         7b3c8:	e1a01006 	mov	r1, r6
         7b3cc:	e1a0200d 	mov	r2, sp
         7b3d0:	e594002c 	ldr	r0, [r4, #44]	; fField44
         7b3d4:	eb6dc8af 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         7b3d8:	e3300000 	teq	r0, #0	; 0x0
         7b3dc:	1a00002d 	bne	7b498 <TDDP::OpenSocket(TAppleTalkMessage *)+0x104>
         7b3e0:	ea000012 	b	7b430 <TDDP::OpenSocket(TAppleTalkMessage *)+0x9c>
         7b3e4:	e1a00004 	mov	r0, r4
         7b3e8:	eb6806a3 	bl	1a7ce7c <TDDP::$NextSocketNumber(void)>
         7b3ec:	e1a08000 	mov	r8, r0
         7b3f0:	e5c40028 	strb	r0, [r4, #40]	; fField40
         7b3f4:	e1a01006 	mov	r1, r6
         7b3f8:	e1a0200d 	mov	r2, sp
         7b3fc:	e594002c 	ldr	r0, [r4, #44]	; fField44
         7b400:	eb6dc8a4 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         7b404:	e3300000 	teq	r0, #0	; 0x0
         7b408:	03a05000 	moveq	r5, #0	; 0x0
         7b40c:	0a000005 	beq	7b428 <TDDP::OpenSocket(TAppleTalkMessage *)+0x94>
         7b410:	e1a00004 	mov	r0, r4
         7b414:	eb680698 	bl	1a7ce7c <TDDP::$NextSocketNumber(void)>
         7b418:	e5c40028 	strb	r0, [r4, #40]	; fField40
         7b41c:	e20000ff 	and	r0, r0, #255	; 0xff
         7b420:	e1300008 	teq	r0, r8
         7b424:	1afffff2 	bne	7b3f4 <TDDP::OpenSocket(TAppleTalkMessage *)+0x60>
         7b428:	e3350000 	teq	r5, #0	; 0x0
         7b42c:	1a000019 	bne	7b498 <TDDP::OpenSocket(TAppleTalkMessage *)+0x104>
         7b430:	e3a00000 	mov	r0, #0	; 0x0
         7b434:	eb67dd4c 	bl	1a7296c <TATSocket::$__ct(void)>
         7b438:	e1b06000 	movs	r6, r0
         7b43c:	0a000013 	beq	7b490 <TDDP::OpenSocket(TAppleTalkMessage *)+0xfc>
         7b440:	e5d41028 	ldrb	r1, [r4, #40]	; fField40
         7b444:	e1a02007 	mov	r2, r7
         7b448:	e1a00006 	mov	r0, r6
         7b44c:	eb681f63 	bl	1a831e0 <TATSocket::$Init(unsigned char, TOpenSocketMessage *)>
         7b450:	e1b05000 	movs	r5, r0
         7b454:	1a000009 	bne	7b480 <TDDP::OpenSocket(TAppleTalkMessage *)+0xec>
         7b458:	e594002c 	ldr	r0, [r4, #44]	; fField44
         7b45c:	e1a02006 	mov	r2, r6
         7b460:	e59d1000 	ldr	r1, [sp]
         7b464:	eb6db820 	bl	1be94ec <CList::$InsertAt(long, void *)>
         7b468:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
         7b46c:	e5c70014 	strb	r0, [r7, #20]	; fField20
         7b470:	eb6d6157 	bl	1bd39d4 <$GetGlobals>
         7b474:	e3a01018 	mov	r1, #24	; 0x18
         7b478:	eb6daba8 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
         7b47c:	ea000005 	b	7b498 <TDDP::OpenSocket(TAppleTalkMessage *)+0x104>
         7b480:	e1a00006 	mov	r0, r6
         7b484:	e3a01001 	mov	r1, #1	; 0x1
         7b488:	eb67e15a 	bl	1a739f8 <TATSocket::$__dt(void)>
         7b48c:	ea000001 	b	7b498 <TDDP::OpenSocket(TAppleTalkMessage *)+0x104>
         7b490:	e3a050a8 	mov	r5, #168	; 0xa8
         7b494:	e2455b07 	sub	r5, r5, #7168	; 0x1c00
         7b498:	e1a00005 	mov	r0, r5
         7b49c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TDDP::CloseSocket(TAppleTalkMessage *)
 * Address: 0007b4e4
 */
TDDP::CloseSocket(TAppleTalkMessage *) {
    /*
         7b4e4:	e1a0c00d 	mov	ip, sp
         7b4e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7b4ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         7b4f0:	e1a04000 	mov	r4, r0
         7b4f4:	e24dd004 	sub	sp, sp, #4	; 0x4
         7b4f8:	e5d10014 	ldrb	r0, [r1, #20]	; fField20
         7b4fc:	e5c40028 	strb	r0, [r4, #40]	; fField40
         7b500:	e284101c 	add	r1, r4, #28	; 0x1c
         7b504:	e1a0200d 	mov	r2, sp
         7b508:	e594002c 	ldr	r0, [r4, #44]	; fField44
         7b50c:	eb6dc861 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         7b510:	e1b05000 	movs	r5, r0
         7b514:	0a000006 	beq	7b534 <TDDP::CloseSocket(TAppleTalkMessage *)+0x50>
         7b518:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
         7b51c:	e3a02001 	mov	r2, #1	; 0x1
         7b520:	e59d1000 	ldr	r1, [sp]
         7b524:	eb6dc442 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         7b528:	e1a00005 	mov	r0, r5
         7b52c:	e3a01001 	mov	r1, #1	; 0x1
         7b530:	eb67e130 	bl	1a739f8 <TATSocket::$__dt(void)>
         7b534:	e3a00000 	mov	r0, #0	; 0x0
         7b538:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDDP::ReceiveDatagram(TUMsgToken *, TAppleTalkMessage *)
 * Address: 0007b53c
 */
TDDP::ReceiveDatagram(TUMsgToken *, TAppleTalkMessage *) {
    /*
         7b53c:	e1a0c00d 	mov	ip, sp
         7b540:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7b544:	e24cb004 	sub	fp, ip, #4	; 0x4
         7b548:	e1a04001 	mov	r4, r1
         7b54c:	e24dd004 	sub	sp, sp, #4	; 0x4
         7b550:	e1a05002 	mov	r5, r2
         7b554:	e5d21014 	ldrb	r1, [r2, #20]	; fField20
         7b558:	e5c01028 	strb	r1, [r0, #40]	; fField40
         7b55c:	e280101c 	add	r1, r0, #28	; 0x1c
         7b560:	e590002c 	ldr	r0, [r0, #44]	; fField44
         7b564:	e1a0200d 	mov	r2, sp
         7b568:	eb6dc84a 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         7b56c:	e3300000 	teq	r0, #0	; 0x0
         7b570:	0a000003 	beq	7b584 <TDDP::ReceiveDatagram(TUMsgToken *, TAppleTalkMessage *)+0x48>
         7b574:	e1a02005 	mov	r2, r5
         7b578:	e1a01004 	mov	r1, r4
         7b57c:	eb682747 	bl	1a852a0 <TATSocket::$ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *)>
         7b580:	ea000000 	b	7b588 <TDDP::ReceiveDatagram(TUMsgToken *, TAppleTalkMessage *)+0x4c>
         7b584:	e59f0000 	ldr	r0, [pc, #0]	; 7b58c <TDDP::ReceiveDatagram(TUMsgToken *, TAppleTalkMessage *)+0x50>
         7b588:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         7b58c:	ffffd053 	swinv	0x00ffd053
    */
}

/**
 * Symbol: TDDP::CancelReceiveDatagram(TAppleTalkMessage *)
 * Address: 0007b590
 */
TDDP::CancelReceiveDatagram(TAppleTalkMessage *) {
    /*
         7b590:	e1a0c00d 	mov	ip, sp
         7b594:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         7b598:	e24cb004 	sub	fp, ip, #4	; 0x4
         7b59c:	e24dd004 	sub	sp, sp, #4	; 0x4
         7b5a0:	e5d11014 	ldrb	r1, [r1, #20]	; fField20
         7b5a4:	e5c01028 	strb	r1, [r0, #40]	; fField40
         7b5a8:	e280101c 	add	r1, r0, #28	; 0x1c
         7b5ac:	e590002c 	ldr	r0, [r0, #44]	; fField44
         7b5b0:	e1a0200d 	mov	r2, sp
         7b5b4:	eb6dc837 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         7b5b8:	e3300000 	teq	r0, #0	; 0x0
         7b5bc:	0a000001 	beq	7b5c8 <TDDP::CancelReceiveDatagram(TAppleTalkMessage *)+0x38>
         7b5c0:	eb6816cc 	bl	1a810f8 <TATSocket::$CancelReceiveDatagram(void)>
         7b5c4:	ea000000 	b	7b5cc <TDDP::CancelReceiveDatagram(TAppleTalkMessage *)+0x3c>
         7b5c8:	e59f0000 	ldr	r0, [pc, #0]	; 7b5d0 <TDDP::CancelReceiveDatagram(TAppleTalkMessage *)+0x40>
         7b5cc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         7b5d0:	ffffd053 	swinv	0x00ffd053
    */
}

/**
 * Symbol: TDDP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)
 * Address: 0007b5d4
 */
TDDP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *) {
    /*
         7b5d4:	e1a02003 	mov	r2, r3
         7b5d8:	e5933010 	ldr	r3, [r3, #16]
         7b5dc:	e253cc07 	subs	ip, r3, #1792	; 0x700
         7b5e0:	a35c0001 	cmpge	ip, #1	; 0x1
         7b5e4:	01a01002 	moveq	r1, r2
         7b5e8:	0a67f174 	beq	1a77bc0 <TDDP::$CloseSocket(TAppleTalkMessage *)>
         7b5ec:	ca000008 	bgt	7b614 <TDDP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x40>
         7b5f0:	e3330006 	teq	r3, #6	; 0x6
         7b5f4:	0a680a3c 	beq	1a7deec <TDDP::$Read(TUMsgToken *, TAppleTalkMessage *)>
         7b5f8:	e333000a 	teq	r3, #10	; 0xa
         7b5fc:	01a01002 	moveq	r1, r2
         7b600:	0a68169f 	beq	1a81084 <TDDP::$Write(TAppleTalkMessage *)>
         7b604:	e3330c07 	teq	r3, #1792	; 0x700
         7b608:	01a01002 	moveq	r1, r2
         7b60c:	0a680a24 	beq	1a7dea4 <TDDP::$OpenSocket(TAppleTalkMessage *)>
         7b610:	ea000006 	b	7b630 <TDDP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x5c>
         7b614:	e243cc07 	sub	ip, r3, #1792	; 0x700
         7b618:	e33c0002 	teq	ip, #2	; 0x2
         7b61c:	0a68271e 	beq	1a8529c <TDDP::$ReceiveDatagram(TUMsgToken *, TAppleTalkMessage *)>
         7b620:	e243cc07 	sub	ip, r3, #1792	; 0x700
         7b624:	e33c0003 	teq	ip, #3	; 0x3
         7b628:	01a01002 	moveq	r1, r2
         7b62c:	0a6816b0 	beq	1a810f4 <TDDP::$CancelReceiveDatagram(TAppleTalkMessage *)>
         7b630:	e3a00058 	mov	r0, #88	; 0x58
         7b634:	e2400a03 	sub	r0, r0, #12288	; 0x3000
         7b638:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDDP::ATLKAttachLink(TAppleTalkMessage *)
 * Address: 0007b63c
 */
TDDP::ATLKAttachLink(TAppleTalkMessage *) {
    /*
         7b63c:	e3a00000 	mov	r0, #0	; 0x0
         7b640:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDDP::ATLKDetachLink(TAppleTalkMessage *)
 * Address: 0007b644
 */
TDDP::ATLKDetachLink(TAppleTalkMessage *) {
    /*
         7b644:	e3a00000 	mov	r0, #0	; 0x0
         7b648:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDDP::ATLKOpen(TAppleTalkMessage *)
 * Address: 0007b64c
 */
TDDP::ATLKOpen(TAppleTalkMessage *) {
    /*
         7b64c:	e1a0c00d 	mov	ip, sp
         7b650:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         7b654:	e24cb004 	sub	fp, ip, #4	; 0x4
         7b658:	e1a04000 	mov	r4, r0
         7b65c:	e24dd0e4 	sub	sp, sp, #228	; 0xe4
         7b660:	e3a00000 	mov	r0, #0	; 0x0
         7b664:	e28de004 	add	lr, sp, #4	; 0x4
         7b668:	e1a05001 	mov	r5, r1
         7b66c:	e3a0c012 	mov	ip, #18	; 0x12
         7b670:	e8b5000e 	ldmia	r5!, {r1, r2, r3}
         7b674:	e8ae000e 	stmia	lr!, {r1, r2, r3}
         7b678:	e25cc001 	subs	ip, ip, #1	; 0x1
         7b67c:	1afffffb 	bne	7b670 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x24>
         7b680:	e895000c 	ldmia	r5, {r2, r3}
         7b684:	e88e000c 	stmia	lr, {r2, r3}
         7b688:	e3a010e0 	mov	r1, #224	; 0xe0
         7b68c:	e58d1000 	str	r1, [sp]
         7b690:	e5941014 	ldr	r1, [r4, #20]	; fField20
         7b694:	e3310000 	teq	r1, #0	; 0x0
         7b698:	1a000079 	bne	7b884 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x238>
         7b69c:	e59f51f0 	ldr	r5, [pc, #1f0]	; 7b894 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x248>
         7b6a0:	e58d5018 	str	r5, [sp, #24]	; fField24
         7b6a4:	eb6d60ca 	bl	1bd39d4 <$GetGlobals>
         7b6a8:	e28d3004 	add	r3, sp, #4	; 0x4
         7b6ac:	e92d0008 	stmdb	sp!, {r3}
         7b6b0:	e28d3004 	add	r3, sp, #4	; 0x4
         7b6b4:	e3a02000 	mov	r2, #0	; 0x0
         7b6b8:	e3a01000 	mov	r1, #0	; 0x0
         7b6bc:	e590c000 	ldr	ip, [r0]
         7b6c0:	e1a0e00f 	mov	lr, pc
         7b6c4:	e28cf050 	add	pc, ip, #80	; 0x50
         7b6c8:	e28dd004 	add	sp, sp, #4	; 0x4
         7b6cc:	e59d000c 	ldr	r0, [sp, #12]
         7b6d0:	e3300000 	teq	r0, #0	; 0x0
         7b6d4:	1a000068 	bne	7b87c <TDDP::ATLKOpen(TAppleTalkMessage *)+0x230>
         7b6d8:	e24dd024 	sub	sp, sp, #36	; 0x24
         7b6dc:	e1a0000d 	mov	r0, sp
         7b6e0:	eb6da2d4 	bl	1be4238 <TAEvent::$__ct(void)>
         7b6e4:	e59f91ac 	ldr	r9, [pc, #1ac]	; 7b898 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x24c>
         7b6e8:	e3a08000 	mov	r8, #0	; 0x0
         7b6ec:	e58d800c 	str	r8, [sp, #12]
         7b6f0:	e58d9000 	str	r9, [sp]
         7b6f4:	e3a07001 	mov	r7, #1	; 0x1
         7b6f8:	e2877c05 	add	r7, r7, #1280	; 0x500
         7b6fc:	e3a00001 	mov	r0, #1	; 0x1
         7b700:	e98d0120 	stmib	sp, {r5, r8}
         7b704:	e58d7010 	str	r7, [sp, #16]
         7b708:	e5cd0014 	strb	r0, [sp, #20]	; fField20
         7b70c:	e59f6188 	ldr	r6, [pc, #188]	; 7b89c <TDDP::ATLKOpen(TAppleTalkMessage *)+0x250>
         7b710:	e58d6018 	str	r6, [sp, #24]	; fField24
         7b714:	e58d801c 	str	r8, [sp, #28]
         7b718:	e3a00024 	mov	r0, #36	; 0x24
         7b71c:	e58d0024 	str	r0, [sp, #36]
         7b720:	e58d8020 	str	r8, [sp, #32]	; fField32
         7b724:	eb6d60aa 	bl	1bd39d4 <$GetGlobals>
         7b728:	e1a0300d 	mov	r3, sp
         7b72c:	e92d0008 	stmdb	sp!, {r3}
         7b730:	e28d3028 	add	r3, sp, #40	; 0x28
         7b734:	e3a02000 	mov	r2, #0	; 0x0
         7b738:	e3a01000 	mov	r1, #0	; 0x0
         7b73c:	e590c000 	ldr	ip, [r0]
         7b740:	e1a0e00f 	mov	lr, pc
         7b744:	e28cf050 	add	pc, ip, #80	; 0x50
         7b748:	e28dd004 	add	sp, sp, #4	; 0x4
         7b74c:	e59d0008 	ldr	r0, [sp, #8]
         7b750:	e3300000 	teq	r0, #0	; 0x0
         7b754:	1a000047 	bne	7b878 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x22c>
         7b758:	e3a00002 	mov	r0, #2	; 0x2
         7b75c:	e58d5004 	str	r5, [sp, #4]
         7b760:	e58d7010 	str	r7, [sp, #16]
         7b764:	e58d9000 	str	r9, [sp]
         7b768:	e5cd0014 	strb	r0, [sp, #20]	; fField20
         7b76c:	e58d6018 	str	r6, [sp, #24]	; fField24
         7b770:	e58d801c 	str	r8, [sp, #28]
         7b774:	e3a00024 	mov	r0, #36	; 0x24
         7b778:	e58d0024 	str	r0, [sp, #36]
         7b77c:	e58d8020 	str	r8, [sp, #32]	; fField32
         7b780:	eb6d6093 	bl	1bd39d4 <$GetGlobals>
         7b784:	e1a0300d 	mov	r3, sp
         7b788:	e92d0008 	stmdb	sp!, {r3}
         7b78c:	e28d3028 	add	r3, sp, #40	; 0x28
         7b790:	e3a02000 	mov	r2, #0	; 0x0
         7b794:	e3a01000 	mov	r1, #0	; 0x0
         7b798:	e590c000 	ldr	ip, [r0]
         7b79c:	e1a0e00f 	mov	lr, pc
         7b7a0:	e28cf050 	add	pc, ip, #80	; 0x50
         7b7a4:	e28dd004 	add	sp, sp, #4	; 0x4
         7b7a8:	e59d0008 	ldr	r0, [sp, #8]
         7b7ac:	e3300000 	teq	r0, #0	; 0x0
         7b7b0:	1a000030 	bne	7b878 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x22c>
         7b7b4:	e5c48019 	strb	r8, [r4, #25]	; fField25
         7b7b8:	e59f00e0 	ldr	r0, [pc, #e0]	; 7b8a0 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x254>
         7b7bc:	e58d003c 	str	r0, [sp, #60]
         7b7c0:	eb6d6083 	bl	1bd39d4 <$GetGlobals>
         7b7c4:	e28d3028 	add	r3, sp, #40	; 0x28
         7b7c8:	e92d0008 	stmdb	sp!, {r3}
         7b7cc:	e28d3028 	add	r3, sp, #40	; 0x28
         7b7d0:	e3a02000 	mov	r2, #0	; 0x0
         7b7d4:	e3a01000 	mov	r1, #0	; 0x0
         7b7d8:	e590c000 	ldr	ip, [r0]
         7b7dc:	e1a0e00f 	mov	lr, pc
         7b7e0:	e28cf050 	add	pc, ip, #80	; 0x50
         7b7e4:	e28dd004 	add	sp, sp, #4	; 0x4
         7b7e8:	e59d0030 	ldr	r0, [sp, #48]
         7b7ec:	e3300000 	teq	r0, #0	; 0x0
         7b7f0:	1a000020 	bne	7b878 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x22c>
         7b7f4:	e59f00a8 	ldr	r0, [pc, #a8]	; 7b8a4 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x258>
         7b7f8:	e58d003c 	str	r0, [sp, #60]
         7b7fc:	eb6d6074 	bl	1bd39d4 <$GetGlobals>
         7b800:	e28d3028 	add	r3, sp, #40	; 0x28
         7b804:	e92d0008 	stmdb	sp!, {r3}
         7b808:	e28d3028 	add	r3, sp, #40	; 0x28
         7b80c:	e3a02000 	mov	r2, #0	; 0x0
         7b810:	e3a01000 	mov	r1, #0	; 0x0
         7b814:	e590c000 	ldr	ip, [r0]
         7b818:	e1a0e00f 	mov	lr, pc
         7b81c:	e28cf050 	add	pc, ip, #80	; 0x50
         7b820:	e28dd004 	add	sp, sp, #4	; 0x4
         7b824:	e59d0030 	ldr	r0, [sp, #48]
         7b828:	e3300000 	teq	r0, #0	; 0x0
         7b82c:	1a000011 	bne	7b878 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x22c>
         7b830:	e59d1040 	ldr	r1, [sp, #64]
         7b834:	e1b01821 	movs	r1, r1, lsr #16
         7b838:	0a00001b 	beq	7b8ac <TDDP::ATLKOpen(TAppleTalkMessage *)+0x260>
         7b83c:	e59f0064 	ldr	r0, [pc, #64]	; 7b8a8 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x25c>
         7b840:	e58d003c 	str	r0, [sp, #60]
         7b844:	eb6d6062 	bl	1bd39d4 <$GetGlobals>
         7b848:	e28d3028 	add	r3, sp, #40	; 0x28
         7b84c:	e92d0008 	stmdb	sp!, {r3}
         7b850:	e28d3028 	add	r3, sp, #40	; 0x28
         7b854:	e3a02000 	mov	r2, #0	; 0x0
         7b858:	e3a01000 	mov	r1, #0	; 0x0
         7b85c:	e590c000 	ldr	ip, [r0]
         7b860:	e1a0e00f 	mov	lr, pc
         7b864:	e28cf050 	add	pc, ip, #80	; 0x50
         7b868:	e28dd004 	add	sp, sp, #4	; 0x4
         7b86c:	e59d0030 	ldr	r0, [sp, #48]
         7b870:	e3300000 	teq	r0, #0	; 0x0
         7b874:	0a00000c 	beq	7b8ac <TDDP::ATLKOpen(TAppleTalkMessage *)+0x260>
         7b878:	e28dd024 	add	sp, sp, #36	; 0x24
         7b87c:	e3300000 	teq	r0, #0	; 0x0
         7b880:	1a000002 	bne	7b890 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x244>
         7b884:	e5941014 	ldr	r1, [r4, #20]	; fField20
         7b888:	e2811001 	add	r1, r1, #1	; 0x1
         7b88c:	e5a41014 	str	r1, [r4, #20]!	; fField20
         7b890:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         7b894:	6c617020 	stcvsl	0, cr7, [r1], -#128
         7b898:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         7b89c:	64647020 	strvsbt	r7, [r4], -#32	; fField32
         7b8a0:	72746d70 	rsbvcs	r6, r4, #7168	; 0x1c00
         7b8a4:	61657020 	cmnvs	r5, r0, lsr #32
         7b8a8:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
         7b8ac:	e28dd024 	add	sp, sp, #36	; 0x24
         7b8b0:	eafffff3 	b	7b884 <TDDP::ATLKOpen(TAppleTalkMessage *)+0x238>
    */
}

/**
 * Symbol: TDDP::ATLKClose(TAppleTalkMessage *)
 * Address: 0007b8b4
 */
TDDP::ATLKClose(TAppleTalkMessage *) {
    /*
         7b8b4:	e3a01000 	mov	r1, #0	; 0x0
         7b8b8:	e5902014 	ldr	r2, [r0, #20]	; fField20
         7b8bc:	e2422001 	sub	r2, r2, #1	; 0x1
         7b8c0:	e5a02014 	str	r2, [r0, #20]!	; fField20
         7b8c4:	e1a00001 	mov	r0, r1
         7b8c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDDP::ATLKShutDown(TAppleTalkMessage *)
 * Address: 0007b8cc
 */
TDDP::ATLKShutDown(TAppleTalkMessage *) {
    /*
         7b8cc:	e1a0c00d 	mov	ip, sp
         7b8d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7b8d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         7b8d8:	e1a04000 	mov	r4, r0
         7b8dc:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         7b8e0:	e590102c 	ldr	r1, [r0, #44]	; fField44
         7b8e4:	e1a0000d 	mov	r0, sp
         7b8e8:	eb6d9e3d 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         7b8ec:	e1a0000d 	mov	r0, sp
         7b8f0:	eb6daec0 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         7b8f4:	e1a05000 	mov	r5, r0
         7b8f8:	e1a0000d 	mov	r0, sp
         7b8fc:	eb6dbb1d 	bl	1bea578 <CArrayIterator::$More(void)>
         7b900:	e3300000 	teq	r0, #0	; 0x0
         7b904:	0a000009 	beq	7b930 <TDDP::ATLKShutDown(TAppleTalkMessage *)+0x64>
         7b908:	e1b00005 	movs	r0, r5
         7b90c:	13a01001 	movne	r1, #1	; 0x1
         7b910:	1b67e038 	blne	1a739f8 <TATSocket::$__dt(void)>
         7b914:	e1a0000d 	mov	r0, sp
         7b918:	eb6dbf20 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         7b91c:	e1a05000 	mov	r5, r0
         7b920:	e1a0000d 	mov	r0, sp
         7b924:	eb6dbb13 	bl	1bea578 <CArrayIterator::$More(void)>
         7b928:	e3300000 	teq	r0, #0	; 0x0
         7b92c:	1afffff5 	bne	7b908 <TDDP::ATLKShutDown(TAppleTalkMessage *)+0x3c>
         7b930:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
         7b934:	e3300000 	teq	r0, #0	; 0x0
         7b938:	13a01001 	movne	r1, #1	; 0x1
         7b93c:	1b6da246 	blne	1be425c <CSortedList::$__dt(void)>
         7b940:	e3a04000 	mov	r4, #0	; 0x0
         7b944:	e1a0000d 	mov	r0, sp
         7b948:	e3a01000 	mov	r1, #0	; 0x0
         7b94c:	eb6da245 	bl	1be4268 <CArrayIterator::$__dt(void)>
         7b950:	e1a00004 	mov	r0, r4
         7b954:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDDP::ATLKSocketClosed(TAppleTalkMessage *)
 * Address: 0007b958
 */
TDDP::ATLKSocketClosed(TAppleTalkMessage *) {
    /*
         7b958:	e3a00000 	mov	r0, #0	; 0x0
         7b95c:	e1a0f00e 	mov	pc, lr
    */
}

