#include "include/TIASClient.h"

/**
 * Symbol: TIASClient::__ct(void)
 * Address: 000f0cc8
 */
TIASClient::TIASClient(void) {
    /*
         f0cc8:	e1a0c00d 	mov	ip, sp
         f0ccc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f0cd0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0cd4:	e1b04000 	movs	r4, r0
         f0cd8:	1a000003 	bne	f0cec <TIASClient::__ct(void)+0x24>
         f0cdc:	e3a00058 	mov	r0, #88	; 0x58
         f0ce0:	eb6b7694 	bl	1bce738 <$__nw(unsigned int)>
         f0ce4:	e1b04000 	movs	r4, r0
         f0ce8:	0a00000a 	beq	f0d18 <TIASClient::__ct(void)+0x50>
         f0cec:	e1a00004 	mov	r0, r4
         f0cf0:	eb651bb9 	bl	1a37bdc <TIrStream::$__ct(void)>
         f0cf4:	e59f0024 	ldr	r0, [pc, #24]	; f0d20 <TIASClient::__ct(void)+0x58>	; fField24
         f0cf8:	e5840000 	str	r0, [r4]
         f0cfc:	e3a00000 	mov	r0, #0	; 0x0
         f0d00:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f0d04:	e5c40015 	strb	r0, [r4, #21]	; fField21
         f0d08:	e5840024 	str	r0, [r4, #36]	; fField36
         f0d0c:	e584004c 	str	r0, [r4, #76]	; fField76
         f0d10:	e5840050 	str	r0, [r4, #80]	; fField80
         f0d14:	e5840054 	str	r0, [r4, #84]	; fField84
         f0d18:	e1a00004 	mov	r0, r4
         f0d1c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f0d20:	0001a9e4 	andeq	sl, r1, r4, ror #19
    */
}

/**
 * Symbol: TIASClient::__dt(void)
 * Address: 000f0d24
 */
TIASClient::~TIASClient(void) {
    /*
         f0d24:	e1a0c00d 	mov	ip, sp
         f0d28:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f0d2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0d30:	e1a04000 	mov	r4, r0
         f0d34:	e1a05001 	mov	r5, r1
         f0d38:	e59f0028 	ldr	r0, [pc, #28]	; f0d68 <TIASClient::__dt(void)+0x44>
         f0d3c:	e5840000 	str	r0, [r4]
         f0d40:	e1a00004 	mov	r0, r4
         f0d44:	eb6502e7 	bl	1a318e8 <TIASClient::$DeInit(void)>
         f0d48:	e1a00004 	mov	r0, r4
         f0d4c:	e3a01000 	mov	r1, #0	; 0x0
         f0d50:	eb651ba2 	bl	1a37be0 <TIrStream::$__dt(void)>
         f0d54:	e3150001 	tst	r5, #1	; 0x1
         f0d58:	11a00004 	movne	r0, r4
         f0d5c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         f0d60:	1a6b725e 	bne	1bcd6e0 <$__dl(void *)>
         f0d64:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f0d68:	0001a9e4 	andeq	sl, r1, r4, ror #19
    */
}

/**
 * Symbol: TIASClient::GetStart(void)
 * Address: 000f0d6c
 */
TIASClient::GetStart(void) {
    /*
         f0d6c:	e1a0c00d 	mov	ip, sp
         f0d70:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f0d74:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0d78:	e1a04000 	mov	r4, r0
         f0d7c:	e2805028 	add	r5, r0, #40	; 0x28
         f0d80:	e3a0000b 	mov	r0, #11	; 0xb
         f0d84:	e5c50000 	strb	r0, [r5]
         f0d88:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f0d8c:	e585000c 	str	r0, [r5, #12]	; fField12
         f0d90:	e3a00000 	mov	r0, #0	; 0x0
         f0d94:	e5850010 	str	r0, [r5, #16]
         f0d98:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f0d9c:	e5901000 	ldr	r1, [r0]
         f0da0:	e1a0e00f 	mov	lr, pc
         f0da4:	e281f02c 	add	pc, r1, #44	; 0x2c
         f0da8:	e5850014 	str	r0, [r5, #20]	; fField20
         f0dac:	e1a01005 	mov	r1, r5
         f0db0:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         f0db4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f0db8:	ea651b8a 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIASClient::PutStart(void)
 * Address: 000f0dbc
 */
TIASClient::PutStart(void) {
    /*
         f0dbc:	e1a0c00d 	mov	ip, sp
         f0dc0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f0dc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0dc8:	e1a04000 	mov	r4, r0
         f0dcc:	e2805028 	add	r5, r0, #40	; 0x28
         f0dd0:	e3a0000d 	mov	r0, #13	; 0xd
         f0dd4:	e5c50000 	strb	r0, [r5]
         f0dd8:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f0ddc:	e585000c 	str	r0, [r5, #12]	; fField12
         f0de0:	e3a00000 	mov	r0, #0	; 0x0
         f0de4:	e5850010 	str	r0, [r5, #16]
         f0de8:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f0dec:	e5901000 	ldr	r1, [r0]
         f0df0:	e1a0e00f 	mov	lr, pc
         f0df4:	e281f03c 	add	pc, r1, #60	; 0x3c
         f0df8:	e5850014 	str	r0, [r5, #20]	; fField20
         f0dfc:	e1a01005 	mov	r1, r5
         f0e00:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         f0e04:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f0e08:	ea651b76 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIASClient::LookupComplete(long)
 * Address: 000f0e0c
 */
TIASClient::LookupComplete(long) {
    /*
         f0e0c:	e1a0c00d 	mov	ip, sp
         f0e10:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f0e14:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0e18:	e1a04000 	mov	r4, r0
         f0e1c:	e1b05001 	movs	r5, r1
         f0e20:	e3a06000 	mov	r6, #0	; 0x0
         f0e24:	15940054 	ldrne	r0, [r4, #84]	; fField84
         f0e28:	13300000 	teqne	r0, #0	; 0x0
         f0e2c:	0a000002 	beq	f0e3c <TIASClient::LookupComplete(long)+0x30>
         f0e30:	e3a01001 	mov	r1, #1	; 0x1
         f0e34:	eb6506bf 	bl	1a32938 <TIASAttribute::$__dt(void)>
         f0e38:	e5846054 	str	r6, [r4, #84]	; fField84
         f0e3c:	e3a00010 	mov	r0, #16	; 0x10
         f0e40:	e5941050 	ldr	r1, [r4, #80]	; fField80
         f0e44:	e5c10000 	strb	r0, [r1]
         f0e48:	e5815004 	str	r5, [r1, #4]
         f0e4c:	e5940054 	ldr	r0, [r4, #84]	; fField84
         f0e50:	e5810010 	str	r0, [r1, #16]
         f0e54:	e5846050 	str	r6, [r4, #80]	; fField80
         f0e58:	e5846054 	str	r6, [r4, #84]	; fField84
         f0e5c:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
         f0e60:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f0e64:	ea651b5f 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIASClient::Init(TIrGlue *, TIrLMP *, TIrStream *)
 * Address: 000f0e68
 */
TIASClient::Init(TIrGlue *, TIrLMP *, TIrStream *) {
    /*
         f0e68:	e1a0c00d 	mov	ip, sp
         f0e6c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f0e70:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0e74:	e1a04000 	mov	r4, r0
         f0e78:	e24dd004 	sub	sp, sp, #4	; 0x4
         f0e7c:	e2800018 	add	r0, r0, #24	; 0x18
         f0e80:	e880000e 	stmia	r0, {r1, r2, r3}
         f0e84:	e2400018 	sub	r0, r0, #24	; 0x18
         f0e88:	eb651b55 	bl	1a37be4 <TIrStream::$Init(TIrGlue *)>
         f0e8c:	e1b05000 	movs	r5, r0
         f0e90:	1a000023 	bne	f0f24 <TIASClient::Init(TIrGlue *, TIrLMP *, TIrStream *)+0xbc>
         f0e94:	e3a060a8 	mov	r6, #168	; 0xa8
         f0e98:	e2466b07 	sub	r6, r6, #7168	; 0x1c00
         f0e9c:	e1a05006 	mov	r5, r6
         f0ea0:	e3a00000 	mov	r0, #0	; 0x0
         f0ea4:	eb6bccd6 	bl	1be4204 <CBufferSegment::$__ct(void)>
         f0ea8:	e584004c 	str	r0, [r4, #76]	; fField76
         f0eac:	e3300000 	teq	r0, #0	; 0x0
         f0eb0:	0a00001b 	beq	f0f24 <TIASClient::Init(TIrGlue *, TIrLMP *, TIrStream *)+0xbc>
         f0eb4:	e3a01080 	mov	r1, #128	; 0x80
         f0eb8:	eb6be17a 	bl	1be94a8 <CBufferSegment::$Init(long)>
         f0ebc:	e1b05000 	movs	r5, r0
         f0ec0:	1a000017 	bne	f0f24 <TIASClient::Init(TIrGlue *, TIrLMP *, TIrStream *)+0xbc>
         f0ec4:	e1a05006 	mov	r5, r6
         f0ec8:	e3a00000 	mov	r0, #0	; 0x0
         f0ecc:	eb6512f3 	bl	1a35aa0 <TLSAPConn::$__ct(void)>
         f0ed0:	e5840024 	str	r0, [r4, #36]	; fField36
         f0ed4:	e3300000 	teq	r0, #0	; 0x0
         f0ed8:	0a000011 	beq	f0f24 <TIASClient::Init(TIrGlue *, TIrLMP *, TIrStream *)+0xbc>
         f0edc:	e2842018 	add	r2, r4, #24	; 0x18
         f0ee0:	e8920006 	ldmia	r2, {r1, r2}
         f0ee4:	e1a03004 	mov	r3, r4
         f0ee8:	eb6512fa 	bl	1a35ad8 <TLSAPConn::$Init(TIrGlue *, TIrLMP *, TIrStream *)>
         f0eec:	e1b05000 	movs	r5, r0
         f0ef0:	1a00000b 	bne	f0f24 <TIASClient::Init(TIrGlue *, TIrLMP *, TIrStream *)+0xbc>
         f0ef4:	e3a00000 	mov	r0, #0	; 0x0
         f0ef8:	e58d0000 	str	r0, [sp]
         f0efc:	e1a0100d 	mov	r1, sp
         f0f00:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f0f04:	eb65026f 	bl	1a318c8 <TIrGlue::$ObtainLSAPId(unsigned long &)>
         f0f08:	e1b05000 	movs	r5, r0
         f0f0c:	1a000004 	bne	f0f24 <TIASClient::Init(TIrGlue *, TIrLMP *, TIrStream *)+0xbc>
         f0f10:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         f0f14:	e59d1000 	ldr	r1, [sp]
         f0f18:	eb001725 	bl	f6bb4 <TLSAPConn::AssignId(unsigned long)>
         f0f1c:	e3a00000 	mov	r0, #0	; 0x0
         f0f20:	ea000002 	b	f0f30 <TIASClient::Init(TIrGlue *, TIrLMP *, TIrStream *)+0xc8>
         f0f24:	e1a00004 	mov	r0, r4
         f0f28:	eb65026e 	bl	1a318e8 <TIASClient::$DeInit(void)>
         f0f2c:	e1a00005 	mov	r0, r5
         f0f30:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIASClient::DeInit(void)
 * Address: 000f0f34
 */
TIASClient::DeInit(void) {
    /*
         f0f34:	e1a0c00d 	mov	ip, sp
         f0f38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f0f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f0f40:	e1a04000 	mov	r4, r0
         f0f44:	e5900024 	ldr	r0, [r0, #36]	; fField36
         f0f48:	e3a05000 	mov	r5, #0	; 0x0
         f0f4c:	e3300000 	teq	r0, #0	; 0x0
         f0f50:	0a000003 	beq	f0f64 <TIASClient::DeInit(void)+0x30>
         f0f54:	e3a01001 	mov	r1, #1	; 0x1
         f0f58:	e1a0e00f 	mov	lr, pc
         f0f5c:	e590f000 	ldr	pc, [r0]
         f0f60:	e5845024 	str	r5, [r4, #36]	; fField36
         f0f64:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f0f68:	e3300000 	teq	r0, #0	; 0x0
         f0f6c:	0a000003 	beq	f0f80 <TIASClient::DeInit(void)+0x4c>
         f0f70:	e3a01001 	mov	r1, #1	; 0x1
         f0f74:	e1a0e00f 	mov	lr, pc
         f0f78:	e590f000 	ldr	pc, [r0]
         f0f7c:	e584504c 	str	r5, [r4, #76]	; fField76
         f0f80:	e5940054 	ldr	r0, [r4, #84]	; fField84
         f0f84:	e3300000 	teq	r0, #0	; 0x0
         f0f88:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f0f8c:	e3a01001 	mov	r1, #1	; 0x1
         f0f90:	eb650668 	bl	1a32938 <TIASAttribute::$__dt(void)>
         f0f94:	e5a45054 	str	r5, [r4, #84]!	; fField84
         f0f98:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIASClient::NextState(unsigned long)
 * Address: 000f0f9c
 */
TIASClient::NextState(unsigned long) {
    /*
         f0f9c:	e5d02014 	ldrb	r2, [r0, #20]	; fField20
         f0fa0:	e3320000 	teq	r2, #0	; 0x0
         f0fa4:	0a000002 	beq	f0fb4 <TIASClient::HandleDisconnectedStateEvent(unsigned long)>
         f0fa8:	e3320001 	teq	r2, #1	; 0x1
         f0fac:	0a000018 	beq	f1014 <TIASClient::HandleConnectedStateEvent(unsigned long)>
         f0fb0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIASClient::HandleDisconnectedStateEvent(unsigned long)
 * Address: 000f0fb4
 */
TIASClient::HandleDisconnectedStateEvent(unsigned long) {
    /*
         f0fb4:	e3310005 	teq	r1, #5	; 0x5
         f0fb8:	0a000008 	beq	f0fe0 <TIASClient::HandleDisconnectedStateEvent(unsigned long)+0x2c>
         f0fbc:	e3310006 	teq	r1, #6	; 0x6
         f0fc0:	0a00000c 	beq	f0ff8 <TIASClient::HandleDisconnectedStateEvent(unsigned long)+0x44>
         f0fc4:	e3310017 	teq	r1, #23	; 0x17
         f0fc8:	0590100c 	ldreq	r1, [r0, #12]	; fField12
         f0fcc:	0a000007 	beq	f0ff0 <TIASClient::HandleDisconnectedStateEvent(unsigned long)+0x3c>
         f0fd0:	e3310018 	teq	r1, #24	; 0x18
         f0fd4:	0590100c 	ldreq	r1, [r0, #12]	; fField12
         f0fd8:	0a00000b 	beq	f100c <TIASClient::HandleDisconnectedStateEvent(unsigned long)+0x58>
         f0fdc:	e1a0f00e 	mov	pc, lr
         f0fe0:	e3a02000 	mov	r2, #0	; 0x0
         f0fe4:	e590100c 	ldr	r1, [r0, #12]	; fField12
         f0fe8:	e5c12010 	strb	r2, [r1, #16]
         f0fec:	e581201c 	str	r2, [r1, #28]
         f0ff0:	e5900024 	ldr	r0, [r0, #36]	; fField36
         f0ff4:	ea000005 	b	f1010 <TIASClient::HandleDisconnectedStateEvent(unsigned long)+0x5c>
         f0ff8:	e590100c 	ldr	r1, [r0, #12]	; fField12
         f0ffc:	e5912004 	ldr	r2, [r1, #4]
         f1000:	e3320000 	teq	r2, #0	; 0x0
         f1004:	03a02001 	moveq	r2, #1	; 0x1
         f1008:	05c02014 	streqb	r2, [r0, #20]	; fField20
         f100c:	e5900020 	ldr	r0, [r0, #32]	; fField32
         f1010:	ea651af4 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIASClient::HandleConnectedStateEvent(unsigned long)
 * Address: 000f1014
 */
TIASClient::HandleConnectedStateEvent(unsigned long) {
    /*
         f1014:	e1a0c00d 	mov	ip, sp
         f1018:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f101c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1020:	e1a04000 	mov	r4, r0
         f1024:	e241000c 	sub	r0, r1, #12	; 0xc
         f1028:	e350000c 	cmp	r0, #12	; 0xc
         f102c:	908ff100 	addls	pc, pc, r0, lsl #2
         f1030:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f1034:	ea00001c 	b	f10ac <TIASClient::HandleConnectedStateEvent(unsigned long)+0x98>
         f1038:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f103c:	ea000013 	b	f1090 <TIASClient::HandleConnectedStateEvent(unsigned long)+0x7c>
         f1040:	ea00000c 	b	f1078 <TIASClient::HandleConnectedStateEvent(unsigned long)+0x64>
         f1044:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f1048:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f104c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f1050:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f1054:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f1058:	ea00001c 	b	f10d0 <TIASClient::HandleConnectedStateEvent(unsigned long)+0xbc>
         f105c:	ea000000 	b	f1064 <TIASClient::HandleConnectedStateEvent(unsigned long)+0x50>
         f1060:	ea00001a 	b	f10d0 <TIASClient::HandleConnectedStateEvent(unsigned long)+0xbc>
         f1064:	e3a00000 	mov	r0, #0	; 0x0
         f1068:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f106c:	e5b4100c 	ldr	r1, [r4, #12]!	; fField12
         f1070:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f1074:	ea000017 	b	f10d8 <TIASClient::HandleConnectedStateEvent(unsigned long)+0xc4>
         f1078:	e1a00004 	mov	r0, r4
         f107c:	eb65021b 	bl	1a318f0 <TIASClient::$SendRequest(void)>
         f1080:	e3300000 	teq	r0, #0	; 0x0
         f1084:	11a01000 	movne	r1, r0
         f1088:	1a00000d 	bne	f10c4 <TIASClient::HandleConnectedStateEvent(unsigned long)+0xb0>
         f108c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f1090:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f1094:	e5b01004 	ldr	r1, [r0, #4]!
         f1098:	e3310000 	teq	r1, #0	; 0x0
         f109c:	01a00004 	moveq	r0, r4
         f10a0:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         f10a4:	0a65020b 	beq	1a318d8 <TIASClient::$GetStart(void)>
         f10a8:	ea000005 	b	f10c4 <TIASClient::HandleConnectedStateEvent(unsigned long)+0xb0>
         f10ac:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f10b0:	e5b01004 	ldr	r1, [r0, #4]!
         f10b4:	e3310000 	teq	r1, #0	; 0x0
         f10b8:	01a00004 	moveq	r0, r4
         f10bc:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         f10c0:	0a65020b 	beq	1a318f4 <TIASClient::$ParseInput(void)>
         f10c4:	e1a00004 	mov	r0, r4
         f10c8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f10cc:	ea650203 	b	1a318e0 <TIASClient::$LookupComplete(long)>
         f10d0:	e5b4100c 	ldr	r1, [r4, #12]!	; fField12
         f10d4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         f10d8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f10dc:	ea651ac1 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TIASClient::SendRequest(void)
 * Address: 000f10e0
 */
TIASClient::SendRequest(void) {
    /*
         f10e0:	e1a0c00d 	mov	ip, sp
         f10e4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f10e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f10ec:	e1a04000 	mov	r4, r0
         f10f0:	e590500c 	ldr	r5, [r0, #12]	; fField12
         f10f4:	e5805050 	str	r5, [r0, #80]	; fField80
         f10f8:	e5950008 	ldr	r0, [r5, #8]
         f10fc:	eb6b126b 	bl	1bb5ab0 <$strlen>
         f1100:	e1a07000 	mov	r7, r0
         f1104:	e595000c 	ldr	r0, [r5, #12]	; fField12
         f1108:	eb6b1268 	bl	1bb5ab0 <$strlen>
         f110c:	e1a06000 	mov	r6, r0
         f1110:	e0870000 	add	r0, r7, r0
         f1114:	e2800003 	add	r0, r0, #3	; 0x3
         f1118:	e3500080 	cmp	r0, #128	; 0x80
         f111c:	c3a0007a 	movgt	r0, #122	; 0x7a
         f1120:	c2400c3f 	subgt	r0, r0, #16128	; 0x3f00
         f1124:	c91ba8f0 	ldmgtdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         f1128:	e3e02000 	mvn	r2, #0	; 0x0
         f112c:	e3a01000 	mov	r1, #0	; 0x0
         f1130:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f1134:	e5903000 	ldr	r3, [r0]
         f1138:	e1a0e00f 	mov	lr, pc
         f113c:	e283f038 	add	pc, r3, #56	; 0x38
         f1140:	e3a01084 	mov	r1, #132	; 0x84
         f1144:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f1148:	e5902000 	ldr	r2, [r0]
         f114c:	e1a0e00f 	mov	lr, pc
         f1150:	e282f01c 	add	pc, r2, #28	; 0x1c
         f1154:	e20710ff 	and	r1, r7, #255	; 0xff
         f1158:	e594204c 	ldr	r2, [r4, #76]	; fField76
         f115c:	e1a00002 	mov	r0, r2
         f1160:	e5922000 	ldr	r2, [r2]
         f1164:	e1a0e00f 	mov	lr, pc
         f1168:	e282f01c 	add	pc, r2, #28	; 0x1c
         f116c:	e594304c 	ldr	r3, [r4, #76]	; fField76
         f1170:	e1a02007 	mov	r2, r7
         f1174:	e1a00003 	mov	r0, r3
         f1178:	e5951008 	ldr	r1, [r5, #8]
         f117c:	e5933000 	ldr	r3, [r3]
         f1180:	e1a0e00f 	mov	lr, pc
         f1184:	e283f020 	add	pc, r3, #32	; 0x20
         f1188:	e20610ff 	and	r1, r6, #255	; 0xff
         f118c:	e594204c 	ldr	r2, [r4, #76]	; fField76
         f1190:	e1a00002 	mov	r0, r2
         f1194:	e5922000 	ldr	r2, [r2]
         f1198:	e1a0e00f 	mov	lr, pc
         f119c:	e282f01c 	add	pc, r2, #28	; 0x1c
         f11a0:	e594304c 	ldr	r3, [r4, #76]	; fField76
         f11a4:	e1a02006 	mov	r2, r6
         f11a8:	e1a00003 	mov	r0, r3
         f11ac:	e5b5100c 	ldr	r1, [r5, #12]!	; fField12
         f11b0:	e5933000 	ldr	r3, [r3]
         f11b4:	e1a0e00f 	mov	lr, pc
         f11b8:	e283f020 	add	pc, r3, #32	; 0x20
         f11bc:	e1a00004 	mov	r0, r4
         f11c0:	eb6501c5 	bl	1a318dc <TIASClient::$PutStart(void)>
         f11c4:	e3a00000 	mov	r0, #0	; 0x0
         f11c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TIASClient::ParseInput(void)
 * Address: 000f11cc
 */
TIASClient::ParseInput(void) {
    /*
         f11cc:	e1a0c00d 	mov	ip, sp
         f11d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f11d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f11d8:	e1a04000 	mov	r4, r0
         f11dc:	e590004c 	ldr	r0, [r0, #76]	; fField76
         f11e0:	e3e02000 	mvn	r2, #0	; 0x0
         f11e4:	e3a01000 	mov	r1, #0	; 0x0
         f11e8:	e5903000 	ldr	r3, [r0]
         f11ec:	e1a0e00f 	mov	lr, pc
         f11f0:	e283f038 	add	pc, r3, #56	; 0x38
         f11f4:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f11f8:	e5901000 	ldr	r1, [r0]
         f11fc:	e1a0e00f 	mov	lr, pc
         f1200:	e281f010 	add	pc, r1, #16	; 0x10
         f1204:	e20020ff 	and	r2, r0, #255	; 0xff
         f1208:	e2020080 	and	r0, r2, #128	; 0x80
         f120c:	e2023040 	and	r3, r2, #64	; 0x40
         f1210:	e5d4c015 	ldrb	ip, [r4, #21]	; fField21
         f1214:	e3a0109a 	mov	r1, #154	; 0x9a
         f1218:	e2411c97 	sub	r1, r1, #38656	; 0x9700
         f121c:	e33c0000 	teq	ip, #0	; 0x0
         f1220:	0a000006 	beq	f1240 <TIASClient::ParseInput(void)+0x74>
         f1224:	e33c0001 	teq	ip, #1	; 0x1
         f1228:	1a000015 	bne	f1284 <TIASClient::ParseInput(void)+0xb8>
         f122c:	e3300000 	teq	r0, #0	; 0x0
         f1230:	13a00000 	movne	r0, #0	; 0x0
         f1234:	15c40015 	strneb	r0, [r4, #21]	; fField21
         f1238:	1a00000f 	bne	f127c <TIASClient::ParseInput(void)+0xb0>
         f123c:	ea000013 	b	f1290 <TIASClient::ParseInput(void)+0xc4>
         f1240:	e3330000 	teq	r3, #0	; 0x0
         f1244:	0a000002 	beq	f1254 <TIASClient::ParseInput(void)+0x88>
         f1248:	e1a00004 	mov	r0, r4
         f124c:	eb6501a1 	bl	1a318d8 <TIASClient::$GetStart(void)>
         f1250:	ea00000b 	b	f1284 <TIASClient::ParseInput(void)+0xb8>
         f1254:	e3320084 	teq	r2, #132	; 0x84
         f1258:	1a000003 	bne	f126c <TIASClient::ParseInput(void)+0xa0>
         f125c:	e1a00004 	mov	r0, r4
         f1260:	eb65019b 	bl	1a318d4 <TIASClient::$ParseReply(void)>
         f1264:	e1a01000 	mov	r1, r0
         f1268:	ea000003 	b	f127c <TIASClient::ParseInput(void)+0xb0>
         f126c:	e3300000 	teq	r0, #0	; 0x0
         f1270:	03a00001 	moveq	r0, #1	; 0x1
         f1274:	05c40015 	streqb	r0, [r4, #21]	; fField21
         f1278:	0a000004 	beq	f1290 <TIASClient::ParseInput(void)+0xc4>
         f127c:	e1a00004 	mov	r0, r4
         f1280:	eb650196 	bl	1a318e0 <TIASClient::$LookupComplete(long)>
         f1284:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         f1288:	e3300001 	teq	r0, #1	; 0x1
         f128c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         f1290:	e3e02000 	mvn	r2, #0	; 0x0
         f1294:	e3a01000 	mov	r1, #0	; 0x0
         f1298:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f129c:	e5903000 	ldr	r3, [r0]
         f12a0:	e1a0e00f 	mov	lr, pc
         f12a4:	e283f038 	add	pc, r3, #56	; 0x38
         f12a8:	e3a01044 	mov	r1, #68	; 0x44
         f12ac:	e594004c 	ldr	r0, [r4, #76]	; fField76
         f12b0:	e5902000 	ldr	r2, [r0]
         f12b4:	e1a0e00f 	mov	lr, pc
         f12b8:	e282f01c 	add	pc, r2, #28	; 0x1c
         f12bc:	e1a00004 	mov	r0, r4
         f12c0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f12c4:	ea650184 	b	1a318dc <TIASClient::$PutStart(void)>
    */
}

/**
 * Symbol: TIASClient::ParseReply(void)
 * Address: 000f12c8
 */
TIASClient::ParseReply(void) {
    /*
         f12c8:	e1a0c00d 	mov	ip, sp
         f12cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f12d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f12d4:	e1a04000 	mov	r4, r0
         f12d8:	e590004c 	ldr	r0, [r0, #76]	; fField76
         f12dc:	e5901000 	ldr	r1, [r0]
         f12e0:	e1a0e00f 	mov	lr, pc
         f12e4:	e281f010 	add	pc, r1, #16	; 0x10
         f12e8:	e21000ff 	ands	r0, r0, #255	; 0xff
         f12ec:	0a000009 	beq	f1318 <TIASClient::ParseReply(void)+0x50>
         f12f0:	e3300001 	teq	r0, #1	; 0x1
         f12f4:	03a0009a 	moveq	r0, #154	; 0x9a
         f12f8:	02400c97 	subeq	r0, r0, #38656	; 0x9700
         f12fc:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         f1300:	e3300002 	teq	r0, #2	; 0x2
         f1304:	03a00099 	moveq	r0, #153	; 0x99
         f1308:	02400c97 	subeq	r0, r0, #38656	; 0x9700
         f130c:	13a00072 	movne	r0, #114	; 0x72
         f1310:	12400c3f 	subne	r0, r0, #16128	; 0x3f00
         f1314:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f1318:	e3a00000 	mov	r0, #0	; 0x0
         f131c:	eb0001d5 	bl	f1a78 <TIASAttribute::__ct(void)>
         f1320:	e5840054 	str	r0, [r4, #84]	; fField84
         f1324:	e3300000 	teq	r0, #0	; 0x0
         f1328:	15b4104c 	ldrne	r1, [r4, #76]!	; fField76
         f132c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         f1330:	1a650584 	bne	1a32948 <TIASAttribute::$ExtractInfoFromBuffer(CBuffer *)>
         f1334:	03a000a8 	moveq	r0, #168	; 0xa8
         f1338:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
         f133c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

