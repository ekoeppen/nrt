#include "DDKIncludes/Packages/PartHandler.h"

/**
 * Symbol: TPartHandler::__ct(void)
 * Address: 00181d4c
 */
TPartHandler::TPartHandler() {
    /*
        181d4c:	e1a0c00d 	mov	ip, sp
        181d50:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        181d54:	e24cb004 	sub	fp, ip, #4	; 0x4
        181d58:	e3300000 	teq	r0, #0	; 0x0
        181d5c:	1a000003 	bne	181d70 <TPartHandler::__ct(void)+0x24>
        181d60:	e3a00038 	mov	r0, #56	; 0x38
        181d64:	eb693273 	bl	1bce738 <$__nw(unsigned int)>
        181d68:	e3300000 	teq	r0, #0	; 0x0
        181d6c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        181d70:	e59f1024 	ldr	r1, [pc, #24]	; 181d9c <TPartHandler::__ct(void)+0x50>	; fRemoveObjPtr
        181d74:	e5801000 	str	r1, [r0]
        181d78:	e3a01000 	mov	r1, #0	; 0x0
        181d7c:	e5801028 	str	r1, [r0, #40]	; fField40
        181d80:	e59f2018 	ldr	r2, [pc, #18]	; 181da0 <TPartHandler::__ct(void)+0x54>
        181d84:	e5802004 	str	r2, [r0, #4]	; TPartEventHandler
        181d88:	e3a02001 	mov	r2, #1	; 0x1
        181d8c:	e5c02025 	strb	r2, [r0, #37]	; fField37
        181d90:	e580102c 	str	r1, [r0, #44]	; fField44
        181d94:	e5801030 	str	r1, [r0, #48]	; fField48
        181d98:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        181d9c:	0001bfe8 	andeq	fp, r1, r8, ror #31
        181da0:	6e6f6e65 	cdpvs	14, 6, cr6, cr15, cr5, {3}
    */
}

/**
 * Symbol: TPartHandler::__dt(void)
 * Address: 00181da4
 */
TPartHandler::~TPartHandler() {
    /*
        181da4:	e1a0c00d 	mov	ip, sp
        181da8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        181dac:	e24cb004 	sub	fp, ip, #4	; 0x4
        181db0:	e1a04000 	mov	r4, r0
        181db4:	e1a05001 	mov	r5, r1
        181db8:	e59f004c 	ldr	r0, [pc, #4c]	; 181e0c <TPartHandler::__dt(void)+0x68>	; TPartEventHandler
        181dbc:	e5840000 	str	r0, [r4]
        181dc0:	e1a00004 	mov	r0, r4
        181dc4:	eb697037 	bl	1bddea8 <TPartHandler::$Unregister(void)>
        181dc8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        181dcc:	e3300000 	teq	r0, #0	; 0x0
        181dd0:	0a000002 	beq	181de0 <TPartHandler::__dt(void)+0x3c>
        181dd4:	e3a01001 	mov	r1, #1	; 0x1
        181dd8:	e1a0e00f 	mov	lr, pc
        181ddc:	e590f000 	ldr	pc, [r0]
        181de0:	e594002c 	ldr	r0, [r4, #44]	; fField44
        181de4:	e3300000 	teq	r0, #0	; 0x0
        181de8:	13a01001 	movne	r1, #1	; 0x1
        181dec:	1b693247 	blne	1bce710 <TUAsyncMessage::$__dt(void)>
        181df0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        181df4:	eb692e39 	bl	1bcd6e0 <$__dl(void *)>
        181df8:	e3150001 	tst	r5, #1	; 0x1
        181dfc:	11a00004 	movne	r0, r4
        181e00:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        181e04:	1a692e35 	bne	1bcd6e0 <$__dl(void *)>
        181e08:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        181e0c:	0001bfe8 	andeq	fp, r1, r8, ror #31
    */
}

/**
 * Symbol: TPartHandler::GetSourcePtr(void)
 * Address: 00181e10
 */
Ptr				TPartHandler::GetSourcePtr() {
    /*
        181e10:	e24dd008 	sub	sp, sp, #8	; 0x8
        181e14:	e280200c 	add	r2, r0, #12	; 0xc
        181e18:	e8921008 	ldmia	r2, {r3, ip}
        181e1c:	e88d1008 	stmia	sp, {r3, ip}
        181e20:	e4dd1008 	ldrb	r1, [sp], #8	; fType
        181e24:	e3110001 	tst	r1, #1	; 0x1
        181e28:	03a00000 	moveq	r0, #0	; 0x0
        181e2c:	1590001c 	ldrne	r0, [r0, #28]	; fAccept
        181e30:	1590001c 	ldrne	r0, [r0, #28]	; fAccept
        181e34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPartHandler::Copy(void *)
 * Address: 00181e38
 */
NewtonErr		TPartHandler::Copy( 	void *data  ) {
    /*
        181e38:	e1a0c00d 	mov	ip, sp
        181e3c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        181e40:	e24cb004 	sub	fp, ip, #4	; 0x4
        181e44:	e1a04000 	mov	r4, r0
        181e48:	e1a05001 	mov	r5, r1
        181e4c:	e3a08000 	mov	r8, #0	; 0x0
        181e50:	e24dd008 	sub	sp, sp, #8	; 0x8
        181e54:	e284100c 	add	r1, r4, #12	; 0xc
        181e58:	e8911008 	ldmia	r1, {r3, ip}
        181e5c:	e88d1008 	stmia	sp, {r3, ip}
        181e60:	e5dd0000 	ldrb	r0, [sp]
        181e64:	e3100001 	tst	r0, #1	; 0x1
        181e68:	1a000023 	bne	181efc <TPartHandler::Copy(void *)+0xc4>
        181e6c:	e28dd008 	add	sp, sp, #8	; 0x8
        181e70:	e3a00000 	mov	r0, #0	; 0x0
        181e74:	eb6988e6 	bl	1be4214 <CShadowRingBuffer::$__ct(void)>
        181e78:	e1a07000 	mov	r7, r0
        181e7c:	e3a00000 	mov	r0, #0	; 0x0
        181e80:	eb692e12 	bl	1bcd6d0 <CPartPipe::$__ct(void)>
        181e84:	e1a06000 	mov	r6, r0
        181e88:	e1a00007 	mov	r0, r7
        181e8c:	e3a03000 	mov	r3, #0	; 0x0
        181e90:	e3a02000 	mov	r2, #0	; 0x0
        181e94:	e5941014 	ldr	r1, [r4, #20]	; fSource
        181e98:	eb699d87 	bl	1be94bc <CShadowRingBuffer::$Init(unsigned long, long, long)>
        181e9c:	e1a02007 	mov	r2, r7
        181ea0:	e1a00006 	mov	r0, r6
        181ea4:	e3a03000 	mov	r3, #0	; 0x0
        181ea8:	e5941018 	ldr	r1, [r4, #24]	; fRemoveObjPtr
        181eac:	eb694f07 	bl	1bd5ad0 <CPartPipe::$Init(unsigned long, CShadowRingBuffer *, unsigned char)>
        181eb0:	e1a02006 	mov	r2, r6
        181eb4:	e1a01005 	mov	r1, r5
        181eb8:	e594301c 	ldr	r3, [r4, #28]	; fAccept
        181ebc:	e1a00004 	mov	r0, r4
        181ec0:	e594c000 	ldr	ip, [r4]
        181ec4:	e1a0e00f 	mov	lr, pc
        181ec8:	e28cf014 	add	pc, ip, #20	; 0x14
        181ecc:	e1a08000 	mov	r8, r0
        181ed0:	e1b00007 	movs	r0, r7
        181ed4:	0a000002 	beq	181ee4 <TPartHandler::Copy(void *)+0xac>
        181ed8:	e3a01001 	mov	r1, #1	; 0x1
        181edc:	e1a0e00f 	mov	lr, pc
        181ee0:	e590f000 	ldr	pc, [r0]
        181ee4:	e1b00006 	movs	r0, r6
        181ee8:	0a00001d 	beq	181f64 <TPartHandler::Copy(void *)+0x12c>
        181eec:	e3a01001 	mov	r1, #1	; 0x1
        181ef0:	e1a0e00f 	mov	lr, pc
        181ef4:	e590f000 	ldr	pc, [r0]
        181ef8:	ea000019 	b	181f64 <TPartHandler::Copy(void *)+0x12c>
        181efc:	e3a00000 	mov	r0, #0	; 0x0
        181f00:	e52d0064 	str	r0, [sp, -#100]!
        181f04:	e28d0008 	add	r0, sp, #8	; 0x8
        181f08:	eb68c299 	bl	1bb2974 <$setjmp>
        181f0c:	e3300000 	teq	r0, #0	; 0x0
        181f10:	1a000007 	bne	181f34 <TPartHandler::Copy(void *)+0xfc>
        181f14:	e1a0000d 	mov	r0, sp
        181f18:	eb697857 	bl	1be007c <$AddExceptionHandler>
        181f1c:	e594001c 	ldr	r0, [r4, #28]	; fAccept
        181f20:	e5b02008 	ldr	r2, [r0, #8]!	; fType
        181f24:	e1a01005 	mov	r1, r5
        181f28:	e5b40014 	ldr	r0, [r4, #20]!	; fSource
        181f2c:	eb697408 	bl	1bdef54 <$BlockMove>
        181f30:	ea000008 	b	181f58 <TPartHandler::Copy(void *)+0x120>
        181f34:	e59d0060 	ldr	r0, [sp, #96]
        181f38:	e28f1f0b 	add	r1, pc, #44	; 0x2c
        181f3c:	eb698494 	bl	1be3194 <$Subexception>
        181f40:	e3300000 	teq	r0, #0	; 0x0
        181f44:	13e080a4 	mvnne	r8, #164	; 0xa4
        181f48:	12488b0a 	subne	r8, r8, #10240	; 0x2800
        181f4c:	1a000001 	bne	181f58 <TPartHandler::Copy(void *)+0x120>
        181f50:	e1a0000d 	mov	r0, sp
        181f54:	eb69807e 	bl	1be2154 <$NextHandler>
        181f58:	e1a0000d 	mov	r0, sp
        181f5c:	eb697c55 	bl	1be10b8 <$ExitHandler>
        181f60:	e28dd06c 	add	sp, sp, #108	; 0x6c
        181f64:	e1a00008 	mov	r0, r8
        181f68:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        181f6c:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPartHandler::Expand(void *, CPipe *, PartInfo *)
 * Address: 00181f70
 */
// It will do a straight copy for pointers, will call TPartHandler::Expand() for pipes {
    /*
        181f70:	e1a0c00d 	mov	ip, sp
        181f74:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        181f78:	e24cb004 	sub	fp, ip, #4	; 0x4
        181f7c:	e1a06001 	mov	r6, r1
        181f80:	e1a05002 	mov	r5, r2
        181f84:	e1a04003 	mov	r4, r3
        181f88:	e3a00000 	mov	r0, #0	; 0x0
        181f8c:	e56d0004 	strb	r0, [sp, -#4]!	; TPartEventHandler
        181f90:	e3a07000 	mov	r7, #0	; 0x0
        181f94:	e52d006c 	str	r0, [sp, -#108]!
        181f98:	e28d0008 	add	r0, sp, #8	; 0x8
        181f9c:	eb68c274 	bl	1bb2974 <$setjmp>
        181fa0:	e3300000 	teq	r0, #0	; 0x0
        181fa4:	1a00000d 	bne	181fe0 <TPartHandler::Expand(void *, CPipe *, PartInfo *)+0x70>
        181fa8:	e1a0000d 	mov	r0, sp
        181fac:	eb697832 	bl	1be007c <$AddExceptionHandler>
        181fb0:	e24dd004 	sub	sp, sp, #4	; 0x4
        181fb4:	e5b40008 	ldr	r0, [r4, #8]!	; fType
        181fb8:	e58d0000 	str	r0, [sp]
        181fbc:	e28d3070 	add	r3, sp, #112	; 0x70
        181fc0:	e1a0200d 	mov	r2, sp
        181fc4:	e1a01006 	mov	r1, r6
        181fc8:	e1a00005 	mov	r0, r5
        181fcc:	e595c000 	ldr	ip, [r5]
        181fd0:	e1a0e00f 	mov	lr, pc
        181fd4:	e28cf014 	add	pc, ip, #20	; 0x14
        181fd8:	e28dd004 	add	sp, sp, #4	; 0x4
        181fdc:	ea000008 	b	182004 <TPartHandler::Expand(void *, CPipe *, PartInfo *)+0x94>
        181fe0:	e59d0060 	ldr	r0, [sp, #96]
        181fe4:	e59f1028 	ldr	r1, [pc, #28]	; 182014 <TPartHandler::Expand(void *, CPipe *, PartInfo *)+0xa4>	; fAccept
        181fe8:	e5911000 	ldr	r1, [r1]
        181fec:	eb698468 	bl	1be3194 <$Subexception>
        181ff0:	e3300000 	teq	r0, #0	; 0x0
        181ff4:	159d7064 	ldrne	r7, [sp, #100]
        181ff8:	1a000001 	bne	182004 <TPartHandler::Expand(void *, CPipe *, PartInfo *)+0x94>
        181ffc:	e1a0000d 	mov	r0, sp
        182000:	eb698053 	bl	1be2154 <$NextHandler>
        182004:	e1a0000d 	mov	r0, sp
        182008:	eb697c2a 	bl	1be10b8 <$ExitHandler>
        18200c:	e1a00007 	mov	r0, r7
        182010:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        182014:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TPartHandler::GetBackupInfo(PartId const &, unsigned long, long, PartInfo *, unsigned long, unsigned char *)
 * Address: 00182018
 */
NewtonErr 	TPartHandler::GetBackupInfo( const PartId& partId, PartType partType, RemoveObjPtr removePtr , PartInfo *partInfo, ULong lastBackupDate, Boolean *needsBackup ) {
    /*
        182018:	e3a00000 	mov	r0, #0	; 0x0
        18201c:	e59d1000 	ldr	r1, [sp]
        182020:	e59d2008 	ldr	r2, [sp, #8]	; fType
        182024:	e5c20000 	strb	r0, [r2]
        182028:	e581000c 	str	r0, [r1, #12]	; fMaxInfoSize
        18202c:	e5810008 	str	r0, [r1, #8]	; fType
        182030:	e5810010 	str	r0, [r1, #16]	; fSourceType
        182034:	e5c10022 	strb	r0, [r1, #34]
        182038:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPartHandler::Backup(PartId const &, long, CPipe *)
 * Address: 0018203c
 */
NewtonErr	TPartHandler::Backup( const PartId& partId, RemoveObjPtr removePtr , CPipe *pipe ) {
    /*
        18203c:	e3a00000 	mov	r0, #0	; 0x0
        182040:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPartHandler::Init(unsigned long)
 * Address: 001821ec
 */
NewtonErr   TPartHandler::Init( ULong type ) {
    /*
        1821ec:	e1a0c00d 	mov	ip, sp
        1821f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1821f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1821f8:	e1a04000 	mov	r4, r0
        1821fc:	e3a05000 	mov	r5, #0	; 0x0
        182200:	e5801004 	str	r1, [r0, #4]	; TPartEventHandler
        182204:	e1a01000 	mov	r1, r0
        182208:	e3a00000 	mov	r0, #0	; 0x0
        18220c:	eb65b97f 	bl	1af0810 <TPartEventHandler::$__ct(TPartHandler *)>
        182210:	e5840028 	str	r0, [r4, #40]	; fField40
        182214:	e3300000 	teq	r0, #0	; 0x0
        182218:	1a000001 	bne	182224 <TPartHandler::Init(unsigned long)+0x38>
        18221c:	eb697fbf 	bl	1be2120 <$MemError>
        182220:	e1a05000 	mov	r5, r0
        182224:	e3a00000 	mov	r0, #0	; 0x0
        182228:	eb692d1f 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        18222c:	e584002c 	str	r0, [r4, #44]	; fField44
        182230:	e3300000 	teq	r0, #0	; 0x0
        182234:	0a000016 	beq	182294 <TPartHandler::Init(unsigned long)+0xa8>
        182238:	eb6945e5 	bl	1bd39d4 <$GetGlobals>
        18223c:	eb69987e 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        182240:	e5902000 	ldr	r2, [r0]
        182244:	e3a00000 	mov	r0, #0	; 0x0
        182248:	e5941004 	ldr	r1, [r4, #4]	; TPartEventHandler
        18224c:	eb65b96d 	bl	1af0808 <TPkRegisterEvent::$__ct(unsigned long, unsigned long)>
        182250:	e5840030 	str	r0, [r4, #48]	; fField48
        182254:	e3300000 	teq	r0, #0	; 0x0
        182258:	0a00000d 	beq	182294 <TPartHandler::Init(unsigned long)+0xa8>
        18225c:	e3a01001 	mov	r1, #1	; 0x1
        182260:	e594002c 	ldr	r0, [r4, #44]	; fField44
        182264:	eb694e0a 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        182268:	e1b05000 	movs	r5, r0
        18226c:	1a000008 	bne	182294 <TPartHandler::Init(unsigned long)+0xa8>
        182270:	e5940028 	ldr	r0, [r4, #40]	; fField40
        182274:	e59f202c 	ldr	r2, [pc, #2c]	; 1822a8 <TPartHandler::Init(unsigned long)+0xbc>
        182278:	e59f102c 	ldr	r1, [pc, #2c]	; 1822ac <TPartHandler::Init(unsigned long)+0xc0>
        18227c:	eb699c8b 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        182280:	e1b05000 	movs	r5, r0
        182284:	1a000002 	bne	182294 <TPartHandler::Init(unsigned long)+0xa8>
        182288:	e1a00004 	mov	r0, r4
        18228c:	eb695a6b 	bl	1bd8c40 <TPartHandler::$Register(void)>
        182290:	e1a05000 	mov	r5, r0
        182294:	e3350000 	teq	r5, #0	; 0x0
        182298:	03a00000 	moveq	r0, #0	; 0x0
        18229c:	05c40025 	streqb	r0, [r4, #37]	; fField37
        1822a0:	e1a00005 	mov	r0, r5
        1822a4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1822a8:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1822ac:	70636b6d 	rsbvc	r6, r3, sp, ror #22
    */
}

/**
 * Symbol: TPartHandler::Register(void)
 * Address: 001822b0
 */
NewtonErr		TPartHandler::Register() {
    /*
        1822b0:	e1a0c00d 	mov	ip, sp
        1822b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1822b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1822bc:	e1a04000 	mov	r4, r0
        1822c0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1822c4:	eb695640 	bl	1bd7bcc <$PackageManagerPortId(void)>
        1822c8:	e1a01000 	mov	r1, r0
        1822cc:	e1a0000d 	mov	r0, sp
        1822d0:	eb692cfd 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        1822d4:	e5b4c02c 	ldr	ip, [r4, #44]!	; fField44
        1822d8:	e5940004 	ldr	r0, [r4, #4]	; TPartEventHandler
        1822dc:	e1a04000 	mov	r4, r0
        1822e0:	e3a01018 	mov	r1, #24	; 0x18
        1822e4:	e3a02000 	mov	r2, #0	; 0x0
        1822e8:	e3a03000 	mov	r3, #0	; 0x0
        1822ec:	e3a05001 	mov	r5, #1	; 0x1
        1822f0:	e3a0e000 	mov	lr, #0	; 0x0
        1822f4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1822f8:	e1a0300e 	mov	r3, lr
        1822fc:	e3a02001 	mov	r2, #1	; 0x1
        182300:	e1a01005 	mov	r1, r5
        182304:	e3a00018 	mov	r0, #24	; 0x18
        182308:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        18230c:	e1a03004 	mov	r3, r4
        182310:	e92d0008 	stmdb	sp!, {r3}
        182314:	e28d0024 	add	r0, sp, #36	; 0x24
        182318:	e3a03000 	mov	r3, #0	; 0x0
        18231c:	e49c1008 	ldr	r1, [ip], #8	; fType
        182320:	e59c2000 	ldr	r2, [ip]
        182324:	eb696288 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        182328:	e28dd024 	add	sp, sp, #36	; 0x24
        18232c:	e1a04000 	mov	r4, r0
        182330:	e3a00a09 	mov	r0, #36864	; 0x9000
        182334:	e2400004 	sub	r0, r0, #4	; 0x4
        182338:	eb696abb 	bl	1bdce2c <$Sleep(unsigned long)>
        18233c:	e1a0000d 	mov	r0, sp
        182340:	e3a01000 	mov	r1, #0	; 0x0
        182344:	eb6930f6 	bl	1bce724 <TUObject::$__dt(void)>
        182348:	e1a00004 	mov	r0, r4
        18234c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPartHandler::Unregister(void)
 * Address: 00182350
 */
NewtonErr		TPartHandler::Unregister() {
    /*
        182350:	e1a0c00d 	mov	ip, sp
        182354:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        182358:	e24cb004 	sub	fp, ip, #4	; 0x4
        18235c:	e1a04000 	mov	r4, r0
        182360:	e24dd020 	sub	sp, sp, #32	; 0x20
        182364:	e5901004 	ldr	r1, [r0, #4]	; TPartEventHandler
        182368:	e28d000c 	add	r0, sp, #12	; 0xc
        18236c:	eb65b92c 	bl	1af0824 <TPkUnregisterEvent::$__ct(unsigned long)>
        182370:	eb695615 	bl	1bd7bcc <$PackageManagerPortId(void)>
        182374:	e1a01000 	mov	r1, r0
        182378:	e28d0004 	add	r0, sp, #4	; 0x4
        18237c:	eb692cd2 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        182380:	e3a06000 	mov	r6, #0	; 0x0
        182384:	e594002c 	ldr	r0, [r4, #44]	; fField44
        182388:	e3300000 	teq	r0, #0	; 0x0
        18238c:	1a000006 	bne	1823ac <TPartHandler::Unregister(void)+0x5c>
        182390:	e3a040e9 	mov	r4, #233	; 0xe9
        182394:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        182398:	e28d0004 	add	r0, sp, #4	; 0x4
        18239c:	e3a01000 	mov	r1, #0	; 0x0
        1823a0:	eb6930df 	bl	1bce724 <TUObject::$__dt(void)>
        1823a4:	e1a00004 	mov	r0, r4
        1823a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1823ac:	e3a03000 	mov	r3, #0	; 0x0
        1823b0:	e92d0008 	stmdb	sp!, {r3}
        1823b4:	e3a02000 	mov	r2, #0	; 0x0
        1823b8:	e3a01000 	mov	r1, #0	; 0x0
        1823bc:	eb693503 	bl	1bcf7d0 <TUAsyncMessage::$BlockTillDone(unsigned long *, unsigned long *, unsigned long *, unsigned long *)>
        1823c0:	e28dd004 	add	sp, sp, #4	; 0x4
        1823c4:	e1b05000 	movs	r5, r0
        1823c8:	1a000017 	bne	18242c <TPartHandler::Unregister(void)+0xdc>
        1823cc:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        1823d0:	e5b0500c 	ldr	r5, [r0, #12]!	; fMaxInfoSize
        1823d4:	e3350000 	teq	r5, #0	; 0x0
        1823d8:	1a000013 	bne	18242c <TPartHandler::Unregister(void)+0xdc>
        1823dc:	e28d000c 	add	r0, sp, #12	; 0xc
        1823e0:	e3a01018 	mov	r1, #24	; 0x18
        1823e4:	e3a02000 	mov	r2, #0	; 0x0
        1823e8:	e3a0c000 	mov	ip, #0	; 0x0
        1823ec:	e3a03000 	mov	r3, #0	; 0x0
        1823f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1823f4:	e1a03006 	mov	r3, r6
        1823f8:	e1a0100c 	mov	r1, ip
        1823fc:	e3a00018 	mov	r0, #24	; 0x18
        182400:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        182404:	e28d302c 	add	r3, sp, #44	; 0x2c
        182408:	e92d0008 	stmdb	sp!, {r3}
        18240c:	e28d3024 	add	r3, sp, #36	; 0x24
        182410:	e28d0028 	add	r0, sp, #40	; 0x28
        182414:	e3a02002 	mov	r2, #2	; 0x2
        182418:	e3a01001 	mov	r1, #1	; 0x1
        18241c:	eb69624a 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        182420:	e28dd024 	add	sp, sp, #36	; 0x24
        182424:	e1b05000 	movs	r5, r0
        182428:	059d5018 	ldreq	r5, [sp, #24]	; fRemoveObjPtr
        18242c:	e28d0004 	add	r0, sp, #4	; 0x4
        182430:	e3a01000 	mov	r1, #0	; 0x0
        182434:	eb6930ba 	bl	1bce724 <TUObject::$__dt(void)>
        182438:	e1a00005 	mov	r0, r5
        18243c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPartHandler::Install(TPkPartInstallEvent *)
 * Address: 00182440
 */
void 			TPartHandler::Install( TPkPartInstallEvent *installEvent ) {
    /*
        182440:	e1a0c00d 	mov	ip, sp
        182444:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        182448:	e24cb004 	sub	fp, ip, #4	; 0x4
        18244c:	e1a04000 	mov	r4, r0
        182450:	e1a05001 	mov	r5, r1
        182454:	e3a00001 	mov	r0, #1	; 0x1
        182458:	e5c40024 	strb	r0, [r4, #36]	; fField36
        18245c:	e284700c 	add	r7, r4, #12	; 0xc
        182460:	e2810084 	add	r0, r1, #132	; 0x84
        182464:	e8901008 	ldmia	r0, {r3, ip}
        182468:	e8871008 	stmia	r7, {r3, ip}
        18246c:	e2841014 	add	r1, r4, #20	; 0x14
        182470:	e285008c 	add	r0, r5, #140	; 0x8c
        182474:	e8905000 	ldmia	r0, {ip, lr}
        182478:	e8815000 	stmia	r1, {ip, lr}
        18247c:	e2858018 	add	r8, r5, #24	; 0x18
        182480:	e3a00000 	mov	r0, #0	; 0x0
        182484:	e584801c 	str	r8, [r4, #28]	; fAccept
        182488:	e5c40034 	strb	r0, [r4, #52]	; fField52
        18248c:	e52d006c 	str	r0, [sp, -#108]!
        182490:	e28d0008 	add	r0, sp, #8	; 0x8
        182494:	eb68c136 	bl	1bb2974 <$setjmp>
        182498:	e3300000 	teq	r0, #0	; 0x0
        18249c:	1a00000c 	bne	1824d4 <TPartHandler::Install(TPkPartInstallEvent *)+0x94>
        1824a0:	e1a0000d 	mov	r0, sp
        1824a4:	eb6976f4 	bl	1be007c <$AddExceptionHandler>
        1824a8:	e1a03008 	mov	r3, r8
        1824ac:	e92d0008 	stmdb	sp!, {r3}
        1824b0:	e2851010 	add	r1, r5, #16	; 0x10
        1824b4:	e1a00004 	mov	r0, r4
        1824b8:	e897000c 	ldmia	r7, {r2, r3}
        1824bc:	e594c000 	ldr	ip, [r4]
        1824c0:	e1a0e00f 	mov	lr, pc
        1824c4:	e28cf004 	add	pc, ip, #4	; 0x4
        1824c8:	e28dd004 	add	sp, sp, #4	; 0x4
        1824cc:	e1a06000 	mov	r6, r0
        1824d0:	ea000007 	b	1824f4 <TPartHandler::Install(TPkPartInstallEvent *)+0xb4>
        1824d4:	e59d0060 	ldr	r0, [sp, #96]
        1824d8:	e28f1f0e 	add	r1, pc, #56	; 0x38
        1824dc:	eb69832c 	bl	1be3194 <$Subexception>
        1824e0:	e3300000 	teq	r0, #0	; 0x0
        1824e4:	159d6064 	ldrne	r6, [sp, #100]
        1824e8:	1a000001 	bne	1824f4 <TPartHandler::Install(TPkPartInstallEvent *)+0xb4>
        1824ec:	e1a0000d 	mov	r0, sp
        1824f0:	eb697f17 	bl	1be2154 <$NextHandler>
        1824f4:	e1a0000d 	mov	r0, sp
        1824f8:	eb697aee 	bl	1be10b8 <$ExitHandler>
        1824fc:	e28dd06c 	add	sp, sp, #108	; 0x6c
        182500:	e5d40034 	ldrb	r0, [r4, #52]	; fField52
        182504:	e3300000 	teq	r0, #0	; 0x0
        182508:	01a01006 	moveq	r1, r6
        18250c:	01a00004 	moveq	r0, r4
        182510:	0b695df4 	bleq	1bd9ce8 <TPartHandler::$ReplyImmed(long)>
        182514:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        182518:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPartHandler::Remove(TPkPartRemoveEvent *)
 * Address: 0018251c
 */
void 			TPartHandler::Remove ( TPkPartRemoveEvent  *removeEvent  ) {
    /*
        18251c:	e281301c 	add	r3, r1, #28	; 0x1c
        182520:	e893000c 	ldmia	r3, {r2, r3}
        182524:	e2811010 	add	r1, r1, #16	; 0x10
        182528:	e590c000 	ldr	ip, [r0]
        18252c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TPartHandler::SetRemoveObjPtr(long)
 * Address: 00182530
 */
void			TPartHandler::SetRemoveObjPtr( RemoveObjPtr obj ) {
    /*
        182530:	e5a01020 	str	r1, [r0, #32]!	; fField32
        182534:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPartHandler::RejectPart(void)
 * Address: 00182538
 */
void			TPartHandler::RejectPart() {
    /*
        182538:	e3a01000 	mov	r1, #0	; 0x0
        18253c:	e5c01024 	strb	r1, [r0, #36]	; fField36
        182540:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPartHandler::ReplyImmed(long)
 * Address: 00182544
 */
void			TPartHandler::ReplyImmed( NewtonErr err );	// reply immediately to the package manager {
    /*
        182544:	e1a0c00d 	mov	ip, sp
        182548:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18254c:	e24cb004 	sub	fp, ip, #4	; 0x4
        182550:	e1a04000 	mov	r4, r0
        182554:	e1a05001 	mov	r5, r1
        182558:	e24dd018 	sub	sp, sp, #24	; 0x18
        18255c:	e1a0000d 	mov	r0, sp
        182560:	eb65b8b5 	bl	1af083c <TPkPartInstallEventReply::$__ct(void)>
        182564:	e3a00001 	mov	r0, #1	; 0x1
        182568:	e5c40034 	strb	r0, [r4, #52]	; fField52
        18256c:	e58d500c 	str	r5, [sp, #12]	; fMaxInfoSize
        182570:	e5d40024 	ldrb	r0, [r4, #36]	; fField36
        182574:	e5cd0014 	strb	r0, [sp, #20]	; fSource
        182578:	e5940020 	ldr	r0, [r4, #32]	; fField32
        18257c:	e58d0010 	str	r0, [sp, #16]	; fSourceType
        182580:	e1a0200d 	mov	r2, sp
        182584:	e3a01018 	mov	r1, #24	; 0x18
        182588:	e5940028 	ldr	r0, [r4, #40]	; fField40
        18258c:	eb69ac4b 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        182590:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        182594:	eb69a82d 	bl	1bec650 <TAEventHandler::$ReplyImmed(void)>
        182598:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

