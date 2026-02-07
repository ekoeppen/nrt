#include "include/TIrLMP.h"

/**
 * Symbol: TIrLMP::__ct(void)
 * Address: 000f5e84
 */
TIrLMP::TIrLMP(void) {
    /*
         f5e84:	e1a0c00d 	mov	ip, sp
         f5e88:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f5e8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f5e90:	e1b04000 	movs	r4, r0
         f5e94:	1a000003 	bne	f5ea8 <TIrLMP::__ct(void)+0x24>
         f5e98:	e3a00048 	mov	r0, #72	; 0x48
         f5e9c:	eb6b6225 	bl	1bce738 <$__nw(unsigned int)>
         f5ea0:	e1b04000 	movs	r4, r0
         f5ea4:	0a000007 	beq	f5ec8 <TIrLMP::__ct(void)+0x44>
         f5ea8:	e1a00004 	mov	r0, r4
         f5eac:	eb65074a 	bl	1a37bdc <TIrStream::$__ct(void)>
         f5eb0:	e59f0018 	ldr	r0, [pc, #18]	; f5ed0 <TIrLMP::__ct(void)+0x4c>
         f5eb4:	e5840000 	str	r0, [r4]
         f5eb8:	e3a00000 	mov	r0, #0	; 0x0
         f5ebc:	e5c40020 	strb	r0, [r4, #32]	; fField32
         f5ec0:	e5c40021 	strb	r0, [r4, #33]	; fField33
         f5ec4:	e5840018 	str	r0, [r4, #24]	; fField24
         f5ec8:	e1a00004 	mov	r0, r4
         f5ecc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f5ed0:	0001f99c 	muleq	r1, ip, r9
    */
}

/**
 * Symbol: TIrLMP::__dt(void)
 * Address: 000f5ed4
 */
TIrLMP::~TIrLMP(void) {
    /*
         f5ed4:	e1a0c00d 	mov	ip, sp
         f5ed8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f5edc:	e24cb004 	sub	fp, ip, #4	; 0x4
         f5ee0:	e1a04000 	mov	r4, r0
         f5ee4:	e1a05001 	mov	r5, r1
         f5ee8:	e59f0028 	ldr	r0, [pc, #28]	; f5f18 <TIrLMP::__dt(void)+0x44>	; fField28
         f5eec:	e5840000 	str	r0, [r4]
         f5ef0:	e1a00004 	mov	r0, r4
         f5ef4:	eb64fee7 	bl	1a35a98 <TIrLMP::$DeInit(void)>
         f5ef8:	e1a00004 	mov	r0, r4
         f5efc:	e3a01000 	mov	r1, #0	; 0x0
         f5f00:	eb650736 	bl	1a37be0 <TIrStream::$__dt(void)>
         f5f04:	e3150001 	tst	r5, #1	; 0x1
         f5f08:	11a00004 	movne	r0, r4
         f5f0c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         f5f10:	1a6b5df2 	bne	1bcd6e0 <$__dl(void *)>
         f5f14:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f5f18:	0001f99c 	muleq	r1, ip, r9
    */
}

/**
 * Symbol: TIrLMP::Demultiplexor(CBufferSegment *)
 * Address: 000f5f1c
 */
TIrLMP::Demultiplexor(CBufferSegment *) {
    /*
         f5f1c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         f5f20:	ea64f6a0 	b	1a339a8 <TIrLAPConn::$Demultiplexor(CBufferSegment *)>
    */
}

/**
 * Symbol: TIrLMP::FillInLMPDUHeader(TIrDataXferEvent *, unsigned char *)
 * Address: 000f5f24
 */
TIrLMP::FillInLMPDUHeader(TIrDataXferEvent *, unsigned char *) {
    /*
         f5f24:	e5900018 	ldr	r0, [r0, #24]	; fField24
         f5f28:	ea64f6a2 	b	1a339b8 <TIrLAPConn::$FillInLMPDUHeader(TIrDataXferEvent *, unsigned char *)>
    */
}

/**
 * Symbol: TIrLMP::StartOneSecTicker(void)
 * Address: 000f5f2c
 */
TIrLMP::StartOneSecTicker(void) {
    /*
         f5f2c:	e5d01021 	ldrb	r1, [r0, #33]	; fField33
         f5f30:	e2812001 	add	r2, r1, #1	; 0x1
         f5f34:	e5c02021 	strb	r2, [r0, #33]	; fField33
         f5f38:	e3310000 	teq	r1, #0	; 0x0
         f5f3c:	11a0f00e 	movne	pc, lr
         f5f40:	e5900014 	ldr	r0, [r0, #20]	; fField20
         f5f44:	e3a02027 	mov	r2, #39	; 0x27
         f5f48:	e3a019e1 	mov	r1, #3686400	; 0x384000
         f5f4c:	eaffeaea 	b	f0afc <TIrGlue::StartTimer2(unsigned long, int)>
    */
}

/**
 * Symbol: TIrLMP::StopOneSecTicker(void)
 * Address: 000f5f50
 */
TIrLMP::StopOneSecTicker(void) {
    /*
         f5f50:	e5d01021 	ldrb	r1, [r0, #33]	; fField33
         f5f54:	e3510000 	cmp	r1, #0	; 0x0
         f5f58:	d1a0f00e 	movle	pc, lr
         f5f5c:	e2411001 	sub	r1, r1, #1	; 0x1
         f5f60:	e21110ff 	ands	r1, r1, #255	; 0xff
         f5f64:	e5c01021 	strb	r1, [r0, #33]	; fField33
         f5f68:	05900014 	ldreq	r0, [r0, #20]	; fField20
         f5f6c:	0affeae4 	beq	f0b04 <TIrGlue::StopTimer2(void)>
         f5f70:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLMP::TimerComplete(unsigned long)
 * Address: 000f5f74
 */
TIrLMP::TimerComplete(unsigned long) {
    /*
         f5f74:	e1a0c00d 	mov	ip, sp
         f5f78:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f5f7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f5f80:	e1a04000 	mov	r4, r0
         f5f84:	e5900018 	ldr	r0, [r0, #24]	; fField24
         f5f88:	eb64f68b 	bl	1a339bc <TIrLAPConn::$TimerComplete(unsigned long)>
         f5f8c:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
         f5f90:	e3500000 	cmp	r0, #0	; 0x0
         f5f94:	d91ba810 	ldmledb	fp, {r4, fp, sp, pc}
         f5f98:	e3a02027 	mov	r2, #39	; 0x27
         f5f9c:	e3a019e1 	mov	r1, #3686400	; 0x384000
         f5fa0:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         f5fa4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f5fa8:	eaffead3 	b	f0afc <TIrGlue::StartTimer2(unsigned long, int)>
    */
}

/**
 * Symbol: TIrLMP::Init(TIrGlue *, TIrLAP *)
 * Address: 000f5fac
 */
TIrLMP::Init(TIrGlue *, TIrLAP *) {
    /*
         f5fac:	e1a0c00d 	mov	ip, sp
         f5fb0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f5fb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f5fb8:	e1a04000 	mov	r4, r0
         f5fbc:	e1a05001 	mov	r5, r1
         f5fc0:	e1a06002 	mov	r6, r2
         f5fc4:	e5801014 	str	r1, [r0, #20]	; fField20
         f5fc8:	e580201c 	str	r2, [r0, #28]	; fField28
         f5fcc:	eb650704 	bl	1a37be4 <TIrStream::$Init(TIrGlue *)>
         f5fd0:	e1b07000 	movs	r7, r0
         f5fd4:	1a00000d 	bne	f6010 <TIrLMP::Init(TIrGlue *, TIrLAP *)+0x64>
         f5fd8:	e3a00000 	mov	r0, #0	; 0x0
         f5fdc:	eb64f66d 	bl	1a33998 <TIrLAPConn::$__ct(void)>
         f5fe0:	e5840018 	str	r0, [r4, #24]	; fField24
         f5fe4:	e3300000 	teq	r0, #0	; 0x0
         f5fe8:	0a000006 	beq	f6008 <TIrLMP::Init(TIrGlue *, TIrLAP *)+0x5c>
         f5fec:	e1a02006 	mov	r2, r6
         f5ff0:	e1a01005 	mov	r1, r5
         f5ff4:	eb64f671 	bl	1a339c0 <TIrLAPConn::$Init(TIrGlue *, TIrLAP *)>
         f5ff8:	e1b07000 	movs	r7, r0
         f5ffc:	03a00000 	moveq	r0, #0	; 0x0
         f6000:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f6004:	ea000001 	b	f6010 <TIrLMP::Init(TIrGlue *, TIrLAP *)+0x64>
         f6008:	e3a070a8 	mov	r7, #168	; 0xa8
         f600c:	e2477b07 	sub	r7, r7, #7168	; 0x1c00
         f6010:	e1a00004 	mov	r0, r4
         f6014:	eb64fe9f 	bl	1a35a98 <TIrLMP::$DeInit(void)>
         f6018:	e1a00007 	mov	r0, r7
         f601c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLMP::Reset(void)
 * Address: 000f6020
 */
TIrLMP::Reset(void) {
    /*
         f6020:	e3a01000 	mov	r1, #0	; 0x0
         f6024:	e5c01020 	strb	r1, [r0, #32]	; fField32
         f6028:	e5c01021 	strb	r1, [r0, #33]	; fField33
         f602c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         f6030:	e3300000 	teq	r0, #0	; 0x0
         f6034:	1a64f662 	bne	1a339c4 <TIrLAPConn::$Reset(void)>
         f6038:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLMP::DeInit(void)
 * Address: 000f603c
 */
TIrLMP::DeInit(void) {
    /*
         f603c:	e1a0c00d 	mov	ip, sp
         f6040:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f6044:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6048:	e1a04000 	mov	r4, r0
         f604c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         f6050:	e3300000 	teq	r0, #0	; 0x0
         f6054:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         f6058:	e3a01001 	mov	r1, #1	; 0x1
         f605c:	e1a0e00f 	mov	lr, pc
         f6060:	e590f000 	ldr	pc, [r0]
         f6064:	e3a00000 	mov	r0, #0	; 0x0
         f6068:	e5a40018 	str	r0, [r4, #24]!	; fField24
         f606c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrLMP::NextState(unsigned long)
 * Address: 000f6070
 */
TIrLMP::NextState(unsigned long) {
    /*
         f6070:	e5d02020 	ldrb	r2, [r0, #32]	; fField32
         f6074:	e3320000 	teq	r2, #0	; 0x0
         f6078:	0a000004 	beq	f6090 <TIrLMP::HandleReadyStateEvent(unsigned long)>
         f607c:	e3320001 	teq	r2, #1	; 0x1
         f6080:	0a000032 	beq	f6150 <TIrLMP::HandleDiscoverStateEvent(unsigned long)>
         f6084:	e3320002 	teq	r2, #2	; 0x2
         f6088:	0a00005d 	beq	f6204 <TIrLMP::HandleResolveAddressStateEvent(unsigned long)>
         f608c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrLMP::HandleReadyStateEvent(unsigned long)
 * Address: 000f6090
 */
TIrLMP::HandleReadyStateEvent(unsigned long) {
    /*
         f6090:	e351000b 	cmp	r1, #11	; 0xb
         f6094:	0a000011 	beq	f60e0 <TIrLMP::HandleReadyStateEvent(unsigned long)+0x50>
         f6098:	ca000009 	bgt	f60c4 <TIrLMP::HandleReadyStateEvent(unsigned long)+0x34>
         f609c:	e2411003 	sub	r1, r1, #3	; 0x3
         f60a0:	e3510005 	cmp	r1, #5	; 0x5
         f60a4:	908ff101 	addls	pc, pc, r1, lsl #2
         f60a8:	e1a0f00e 	mov	pc, lr
         f60ac:	ea000017 	b	f6110 <TIrLMP::HandleReadyStateEvent(unsigned long)+0x80>
         f60b0:	e1a0f00e 	mov	pc, lr
         f60b4:	ea000009 	b	f60e0 <TIrLMP::HandleReadyStateEvent(unsigned long)+0x50>
         f60b8:	ea000008 	b	f60e0 <TIrLMP::HandleReadyStateEvent(unsigned long)+0x50>
         f60bc:	ea000007 	b	f60e0 <TIrLMP::HandleReadyStateEvent(unsigned long)+0x50>
         f60c0:	ea000006 	b	f60e0 <TIrLMP::HandleReadyStateEvent(unsigned long)+0x50>
         f60c4:	e3510013 	cmp	r1, #19	; 0x13
         f60c8:	0a000016 	beq	f6128 <TIrLMP::HandleReadyStateEvent(unsigned long)+0x98>
         f60cc:	ca000005 	bgt	f60e8 <TIrLMP::HandleReadyStateEvent(unsigned long)+0x58>
         f60d0:	e331000d 	teq	r1, #13	; 0xd
         f60d4:	0a000013 	beq	f6128 <TIrLMP::HandleReadyStateEvent(unsigned long)+0x98>
         f60d8:	e3310011 	teq	r1, #17	; 0x11
         f60dc:	11a0f00e 	movne	pc, lr
         f60e0:	e590100c 	ldr	r1, [r0, #12]	; fField12
         f60e4:	ea000015 	b	f6140 <TIrLMP::HandleReadyStateEvent(unsigned long)+0xb0>
         f60e8:	e3310017 	teq	r1, #23	; 0x17
         f60ec:	0a00000f 	beq	f6130 <TIrLMP::HandleReadyStateEvent(unsigned long)+0xa0>
         f60f0:	e3310018 	teq	r1, #24	; 0x18
         f60f4:	11a0f00e 	movne	pc, lr
         f60f8:	e590100c 	ldr	r1, [r0, #12]	; fField12
         f60fc:	e5912008 	ldr	r2, [r1, #8]	; fField8
         f6100:	e3320000 	teq	r2, #0	; 0x0
         f6104:	05900014 	ldreq	r0, [r0, #20]	; fField20
         f6108:	0a00000d 	beq	f6144 <TIrLMP::HandleReadyStateEvent(unsigned long)+0xb4>
         f610c:	ea00000b 	b	f6140 <TIrLMP::HandleReadyStateEvent(unsigned long)+0xb0>
         f6110:	e3e02000 	mvn	r2, #0	; 0x0
         f6114:	e590100c 	ldr	r1, [r0, #12]	; fField12
         f6118:	e581200c 	str	r2, [r1, #12]	; fField12
         f611c:	e3a02001 	mov	r2, #1	; 0x1
         f6120:	e5c02020 	strb	r2, [r0, #32]	; fField32
         f6124:	ea000007 	b	f6148 <TIrLMP::HandleReadyStateEvent(unsigned long)+0xb8>
         f6128:	e590100c 	ldr	r1, [r0, #12]	; fField12
         f612c:	ea000005 	b	f6148 <TIrLMP::HandleReadyStateEvent(unsigned long)+0xb8>
         f6130:	e590100c 	ldr	r1, [r0, #12]	; fField12
         f6134:	e5912008 	ldr	r2, [r1, #8]	; fField8
         f6138:	e3320000 	teq	r2, #0	; 0x0
         f613c:	0a000001 	beq	f6148 <TIrLMP::HandleReadyStateEvent(unsigned long)+0xb8>
         f6140:	e5900018 	ldr	r0, [r0, #24]	; fField24
         f6144:	ea6506a7 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f6148:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f614c:	eafffffc 	b	f6144 <TIrLMP::HandleReadyStateEvent(unsigned long)+0xb4>
    */
}

/**
 * Symbol: TIrLMP::HandleDiscoverStateEvent(unsigned long)
 * Address: 000f6150
 */
TIrLMP::HandleDiscoverStateEvent(unsigned long) {
    /*
         f6150:	e1a0c00d 	mov	ip, sp
         f6154:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f6158:	e24cb004 	sub	fp, ip, #4	; 0x4
         f615c:	e1a04000 	mov	r4, r0
         f6160:	e3310004 	teq	r1, #4	; 0x4
         f6164:	0a000008 	beq	f618c <TIrLMP::HandleDiscoverStateEvent(unsigned long)+0x3c>
         f6168:	e3310017 	teq	r1, #23	; 0x17
         f616c:	05b4100c 	ldreq	r1, [r4, #12]!	; fField12
         f6170:	05940010 	ldreq	r0, [r4, #16]	; fField16
         f6174:	0a000020 	beq	f61fc <TIrLMP::HandleDiscoverStateEvent(unsigned long)+0xac>
         f6178:	e3310018 	teq	r1, #24	; 0x18
         f617c:	05b4100c 	ldreq	r1, [r4, #12]!	; fField12
         f6180:	05940008 	ldreq	r0, [r4, #8]	; fField8
         f6184:	0a00001c 	beq	f61fc <TIrLMP::HandleDiscoverStateEvent(unsigned long)+0xac>
         f6188:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f618c:	e594500c 	ldr	r5, [r4, #12]	; fField12
         f6190:	e5950004 	ldr	r0, [r5, #4]
         f6194:	e3300000 	teq	r0, #0	; 0x0
         f6198:	05d50015 	ldreqb	r0, [r5, #21]
         f619c:	03300000 	teqeq	r0, #0	; 0x0
         f61a0:	1a000011 	bne	f61ec <TIrLMP::HandleDiscoverStateEvent(unsigned long)+0x9c>
         f61a4:	e1a00004 	mov	r0, r4
         f61a8:	e3a02001 	mov	r2, #1	; 0x1
         f61ac:	e5951010 	ldr	r1, [r5, #16]	; fField16
         f61b0:	eb64fe32 	bl	1a35a80 <TIrLMP::$AddrConflicts(CList *, unsigned char)>
         f61b4:	e3300000 	teq	r0, #0	; 0x0
         f61b8:	0a00000b 	beq	f61ec <TIrLMP::HandleDiscoverStateEvent(unsigned long)+0x9c>
         f61bc:	e3a00003 	mov	r0, #3	; 0x3
         f61c0:	e5c50000 	strb	r0, [r5]
         f61c4:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f61c8:	e2400001 	sub	r0, r0, #1	; 0x1
         f61cc:	e5840024 	str	r0, [r4, #36]	; fField36
         f61d0:	e0840100 	add	r0, r4, r0, lsl #2
         f61d4:	e5900028 	ldr	r0, [r0, #40]
         f61d8:	e585000c 	str	r0, [r5, #12]	; fField12
         f61dc:	e3a00002 	mov	r0, #2	; 0x2
         f61e0:	e5c40020 	strb	r0, [r4, #32]	; fField32
         f61e4:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
         f61e8:	ea000002 	b	f61f8 <TIrLMP::HandleDiscoverStateEvent(unsigned long)+0xa8>
         f61ec:	e3a00000 	mov	r0, #0	; 0x0
         f61f0:	e5c40020 	strb	r0, [r4, #32]	; fField32
         f61f4:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         f61f8:	e1a01005 	mov	r1, r5
         f61fc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f6200:	ea650678 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrLMP::HandleResolveAddressStateEvent(unsigned long)
 * Address: 000f6204
 */
TIrLMP::HandleResolveAddressStateEvent(unsigned long) {
    /*
         f6204:	e1a0c00d 	mov	ip, sp
         f6208:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f620c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6210:	e1a04000 	mov	r4, r0
         f6214:	e3310004 	teq	r1, #4	; 0x4
         f6218:	0a000008 	beq	f6240 <TIrLMP::HandleResolveAddressStateEvent(unsigned long)+0x3c>
         f621c:	e3310017 	teq	r1, #23	; 0x17
         f6220:	05b4100c 	ldreq	r1, [r4, #12]!	; fField12
         f6224:	05940010 	ldreq	r0, [r4, #16]	; fField16
         f6228:	0a00001a 	beq	f6298 <TIrLMP::HandleResolveAddressStateEvent(unsigned long)+0x94>
         f622c:	e3310018 	teq	r1, #24	; 0x18
         f6230:	05b4100c 	ldreq	r1, [r4, #12]!	; fField12
         f6234:	05940008 	ldreq	r0, [r4, #8]	; fField8
         f6238:	0a000016 	beq	f6298 <TIrLMP::HandleResolveAddressStateEvent(unsigned long)+0x94>
         f623c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f6240:	e594500c 	ldr	r5, [r4, #12]	; fField12
         f6244:	e1a00004 	mov	r0, r4
         f6248:	e3a02000 	mov	r2, #0	; 0x0
         f624c:	e5951010 	ldr	r1, [r5, #16]	; fField16
         f6250:	eb64fe0a 	bl	1a35a80 <TIrLMP::$AddrConflicts(CList *, unsigned char)>
         f6254:	e5950004 	ldr	r0, [r5, #4]
         f6258:	e3300000 	teq	r0, #0	; 0x0
         f625c:	1a000002 	bne	f626c <TIrLMP::HandleResolveAddressStateEvent(unsigned long)+0x68>
         f6260:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f6264:	e3300000 	teq	r0, #0	; 0x0
         f6268:	1a000003 	bne	f627c <TIrLMP::HandleResolveAddressStateEvent(unsigned long)+0x78>
         f626c:	e3a00000 	mov	r0, #0	; 0x0
         f6270:	e5c40020 	strb	r0, [r4, #32]	; fField32
         f6274:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         f6278:	ea000005 	b	f6294 <TIrLMP::HandleResolveAddressStateEvent(unsigned long)+0x90>
         f627c:	e2400001 	sub	r0, r0, #1	; 0x1
         f6280:	e5840024 	str	r0, [r4, #36]	; fField36
         f6284:	e0840100 	add	r0, r4, r0, lsl #2
         f6288:	e5900028 	ldr	r0, [r0, #40]
         f628c:	e585000c 	str	r0, [r5, #12]	; fField12
         f6290:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
         f6294:	e1a01005 	mov	r1, r5
         f6298:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f629c:	ea650651 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIrLMP::AddrConflicts(CList *, unsigned char)
 * Address: 000f62a0
 */
TIrLMP::AddrConflicts(CList *, unsigned char) {
    /*
         f62a0:	e1a0c00d 	mov	ip, sp
         f62a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         f62a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f62ac:	e1a04000 	mov	r4, r0
         f62b0:	e1a05001 	mov	r5, r1
         f62b4:	e212a0ff 	ands	sl, r2, #255	; 0xff
         f62b8:	e24dd044 	sub	sp, sp, #68	; 0x44
         f62bc:	e3a08000 	mov	r8, #0	; 0x0
         f62c0:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f62c4:	e5900020 	ldr	r0, [r0, #32]	; fField32
         f62c8:	e3a06001 	mov	r6, #1	; 0x1
         f62cc:	e58d0000 	str	r0, [sp]
         f62d0:	13a00000 	movne	r0, #0	; 0x0
         f62d4:	15840024 	strne	r0, [r4, #36]	; fField36
         f62d8:	e5950000 	ldr	r0, [r5]
         f62dc:	e3500000 	cmp	r0, #0	; 0x0
         f62e0:	da00002b 	ble	f6394 <TIrLMP::AddrConflicts(CList *, unsigned char)+0xf4>
         f62e4:	e2507001 	subs	r7, r0, #1	; 0x1
         f62e8:	4a000029 	bmi	f6394 <TIrLMP::AddrConflicts(CList *, unsigned char)+0xf4>
         f62ec:	e1a01007 	mov	r1, r7
         f62f0:	e1a00005 	mov	r0, r5
         f62f4:	eb6bc012 	bl	1be6344 <CList::$At(long)>
         f62f8:	e1a09000 	mov	r9, r0
         f62fc:	e3a02000 	mov	r2, #0	; 0x0
         f6300:	e5900000 	ldr	r0, [r0]
         f6304:	e3a01000 	mov	r1, #0	; 0x0
         f6308:	e3560000 	cmp	r6, #0	; 0x0
         f630c:	9a000019 	bls	f6378 <TIrLMP::AddrConflicts(CList *, unsigned char)+0xd8>
         f6310:	e79d3101 	ldr	r3, [sp, r1, lsl #2]
         f6314:	e1330000 	teq	r3, r0
         f6318:	1a000011 	bne	f6364 <TIrLMP::AddrConflicts(CList *, unsigned char)+0xc4>
         f631c:	e3a08001 	mov	r8, #1	; 0x1
         f6320:	e33a0000 	teq	sl, #0	; 0x0
         f6324:	0a000006 	beq	f6344 <TIrLMP::AddrConflicts(CList *, unsigned char)+0xa4>
         f6328:	e5941024 	ldr	r1, [r4, #36]	; fField36
         f632c:	e3510008 	cmp	r1, #8	; 0x8
         f6330:	2a000003 	bcs	f6344 <TIrLMP::AddrConflicts(CList *, unsigned char)+0xa4>
         f6334:	e2812001 	add	r2, r1, #1	; 0x1
         f6338:	e5842024 	str	r2, [r4, #36]	; fField36
         f633c:	e0841101 	add	r1, r4, r1, lsl #2
         f6340:	e5a10028 	str	r0, [r1, #40]!
         f6344:	e1a01007 	mov	r1, r7
         f6348:	e1a00005 	mov	r0, r5
         f634c:	e3a02001 	mov	r2, #1	; 0x1
         f6350:	eb6bd8b7 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         f6354:	e1b00009 	movs	r0, r9
         f6358:	13a01001 	movne	r1, #1	; 0x1
         f635c:	1bffe411 	blne	ef3a8 <TIrDscInfo::__dt(void)>
         f6360:	ea000009 	b	f638c <TIrLMP::AddrConflicts(CList *, unsigned char)+0xec>
         f6364:	e2811001 	add	r1, r1, #1	; 0x1
         f6368:	e1510006 	cmp	r1, r6
         f636c:	3affffe7 	bcc	f6310 <TIrLMP::AddrConflicts(CList *, unsigned char)+0x70>
         f6370:	e3320000 	teq	r2, #0	; 0x0
         f6374:	1a000004 	bne	f638c <TIrLMP::AddrConflicts(CList *, unsigned char)+0xec>
         f6378:	e3560011 	cmp	r6, #17	; 0x11
         f637c:	2a000002 	bcs	f638c <TIrLMP::AddrConflicts(CList *, unsigned char)+0xec>
         f6380:	e1a01006 	mov	r1, r6
         f6384:	e2866001 	add	r6, r6, #1	; 0x1
         f6388:	e78d0101 	str	r0, [sp, r1, lsl #2]
         f638c:	e2577001 	subs	r7, r7, #1	; 0x1
         f6390:	5affffd5 	bpl	f62ec <TIrLMP::AddrConflicts(CList *, unsigned char)+0x4c>
         f6394:	e1a00008 	mov	r0, r8
         f6398:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

