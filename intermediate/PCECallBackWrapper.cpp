#include "include/PCECallBackWrapper.h"

/**
 * Symbol: Sizeof__18PCECallBackWrapperSFv
 * Address: 00152d80
 */
void PCECallBackWrapper::Sizeof() {
    /*
        152d80:	e3a00014 	mov	r0, #20	; 0x14
        152d84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::New(void)
 * Address: 00152d88
 */
PCECallBackWrapper::New(void) {
    /*
        152d88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::ListenComplete(long)
 * Address: 00152d8c
 */
PCECallBackWrapper::ListenComplete(long) {
    /*
        152d8c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152d90:	ea63559b 	b	1a28404 <TConnectionEnd::$ListenComplete(long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::AcceptComplete(long)
 * Address: 00152d94
 */
PCECallBackWrapper::AcceptComplete(long) {
    /*
        152d94:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152d98:	ea634100 	b	1a231a0 <TConnectionEnd::$AcceptComplete(long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::TerminateComplete(void)
 * Address: 00152d9c
 */
PCECallBackWrapper::TerminateComplete(void) {
    /*
        152d9c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152da0:	ea636621 	b	1a2c62c <TConnectionEnd::$TerminateComplete(void)>
    */
}

/**
 * Symbol: PCECallBackWrapper::PutComplete(long, unsigned long)
 * Address: 00152da4
 */
PCECallBackWrapper::PutComplete(long, unsigned long) {
    /*
        152da4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152da8:	ea635def 	b	1a2a56c <TConnectionEnd::$PutComplete(long, unsigned long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::KillPutComplete(long)
 * Address: 00152dac
 */
PCECallBackWrapper::KillPutComplete(long) {
    /*
        152dac:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152db0:	ea63518f 	b	1a273f4 <TConnectionEnd::$KillPutComplete(long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::GetComplete(long, unsigned char, unsigned long)
 * Address: 00152db4
 */
PCECallBackWrapper::GetComplete(long, unsigned char, unsigned long) {
    /*
        152db4:	e20220ff 	and	r2, r2, #255	; 0xff
        152db8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152dbc:	ea634d64 	b	1a26354 <TConnectionEnd::$GetComplete(long, unsigned char, unsigned long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::KillGetComplete(long)
 * Address: 00152dc0
 */
PCECallBackWrapper::KillGetComplete(long) {
    /*
        152dc0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152dc4:	ea635187 	b	1a273e8 <TConnectionEnd::$KillGetComplete(long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::HandleRequest(unsigned char *, unsigned long, TUMsgToken &, unsigned long)
 * Address: 00152dc8
 */
PCECallBackWrapper::HandleRequest(unsigned char *, unsigned long, TUMsgToken &, unsigned long) {
    /*
        152dc8:	e1a0c00d 	mov	ip, sp
        152dcc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        152dd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        152dd4:	e1a0c003 	mov	ip, r3
        152dd8:	e59b3004 	ldr	r3, [fp, #4]
        152ddc:	e92d0008 	stmdb	sp!, {r3}
        152de0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152de4:	e1a0300c 	mov	r3, ip
        152de8:	eb63516d 	bl	1a273a4 <TConnectionEnd::$HandleRequest(unsigned char *, unsigned long, TUMsgToken &, unsigned long)>
        152dec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: PCECallBackWrapper::HandleReply(unsigned long, unsigned long)
 * Address: 00152df0
 */
PCECallBackWrapper::HandleReply(unsigned long, unsigned long) {
    /*
        152df0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152df4:	ea635167 	b	1a27398 <TConnectionEnd::$HandleReply(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::KillControlComplete(long)
 * Address: 00152df8
 */
PCECallBackWrapper::KillControlComplete(long) {
    /*
        152df8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152dfc:	ea635176 	b	1a273dc <TConnectionEnd::$KillControlComplete(long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::Delete(void)
 * Address: 00152e00
 */
PCECallBackWrapper::Delete(void) {
    /*
        152e00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::KillGetCommEventComplete(long)
 * Address: 00152e04
 */
PCECallBackWrapper::KillGetCommEventComplete(long) {
    /*
        152e04:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e08:	ea635174 	b	1a273e0 <TConnectionEnd::$KillGetCommEventComplete(long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::GetCommEvent(void)
 * Address: 00152e0c
 */
PCECallBackWrapper::GetCommEvent(void) {
    /*
        152e0c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e10:	ea634d4a 	b	1a26340 <TConnectionEnd::$GetCommEvent(void)>
    */
}

/**
 * Symbol: PCECallBackWrapper::PostCommEvent(TCommToolGetEventReply &, long)
 * Address: 00152e14
 */
PCECallBackWrapper::PostCommEvent(TCommToolGetEventReply &, long) {
    /*
        152e14:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e18:	ea63599d 	b	1a29494 <TConnectionEnd::$PostCommEvent(TCommToolGetEventReply &, long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::ProcessOptionComplete(unsigned long)
 * Address: 00152e1c
 */
PCECallBackWrapper::ProcessOptionComplete(unsigned long) {
    /*
        152e1c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e20:	ea6359b4 	b	1a294f8 <TConnectionEnd::$ProcessOptionComplete(unsigned long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::ProcessPutBytesOptionComplete(unsigned long)
 * Address: 00152e24
 */
PCECallBackWrapper::ProcessPutBytesOptionComplete(unsigned long) {
    /*
        152e24:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e28:	ea635dc4 	b	1a2a540 <TConnectionEnd::$ProcessPutBytesOptionComplete(unsigned long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::ProcessGetBytesOptionComplete(unsigned long)
 * Address: 00152e2c
 */
PCECallBackWrapper::ProcessGetBytesOptionComplete(unsigned long) {
    /*
        152e2c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e30:	ea6359a9 	b	1a294dc <TConnectionEnd::$ProcessGetBytesOptionComplete(unsigned long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::ResArbReleaseComplete(long)
 * Address: 00152e34
 */
PCECallBackWrapper::ResArbReleaseComplete(long) {
    /*
        152e34:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e38:	ea6361e1 	b	1a2b5c4 <TConnectionEnd::$ResArbReleaseComplete(long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::StartAbort(long)
 * Address: 00152e3c
 */
PCECallBackWrapper::StartAbort(long) {
    /*
        152e3c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e40:	ea6365f0 	b	1a2c608 <TConnectionEnd::$StartAbort(long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::GetAbortErr(void)
 * Address: 00152e44
 */
PCECallBackWrapper::GetAbortErr(void) {
    /*
        152e44:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e48:	e5900024 	ldr	r0, [r0, #36]	; fField36
        152e4c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetTerminationEvent(void)
 * Address: 00152e50
 */
PCECallBackWrapper::GetTerminationEvent(void) {
    /*
        152e50:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e54:	e5900028 	ldr	r0, [r0, #40]	; fField40
        152e58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::Init(TConnectionEnd *)
 * Address: 00152e5c
 */
PCECallBackWrapper::Init(TConnectionEnd *) {
    /*
        152e5c:	e5a01010 	str	r1, [r0, #16]!	; fField16
        152e60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::SetTerminationEvent(unsigned long)
 * Address: 00152e64
 */
PCECallBackWrapper::SetTerminationEvent(unsigned long) {
    /*
        152e64:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e68:	e5a01028 	str	r1, [r0, #40]!	; fField40
        152e6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)
 * Address: 00152e70
 */
PCECallBackWrapper::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long) {
    /*
        152e70:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e74:	ea635152 	b	1a273c4 <TConnectionEnd::$InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::GetToolConnectState(void)
 * Address: 00152e78
 */
PCECallBackWrapper::GetToolConnectState(void) {
    /*
        152e78:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e7c:	e5900020 	ldr	r0, [r0, #32]	; fField32
        152e80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::SetToolConnectState(unsigned long)
 * Address: 00152e84
 */
PCECallBackWrapper::SetToolConnectState(unsigned long) {
    /*
        152e84:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e88:	e5a01020 	str	r1, [r0, #32]!	; fField32
        152e8c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetConnectInfo(void)
 * Address: 00152e90
 */
PCECallBackWrapper::GetConnectInfo(void) {
    /*
        152e90:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152e94:	e280002c 	add	r0, r0, #44	; 0x2c
        152e98:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::SetConnectInfo(TCMOCTConnectInfo &)
 * Address: 00152e9c
 */
PCECallBackWrapper::SetConnectInfo(TCMOCTConnectInfo &) {
    /*
        152e9c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152ea0:	e280002c 	add	r0, r0, #44	; 0x2c
        152ea4:	e8b1100c 	ldmia	r1!, {r2, r3, ip}
        152ea8:	e8a0100c 	stmia	r0!, {r2, r3, ip}
        152eac:	e891100c 	ldmia	r1, {r2, r3, ip}
        152eb0:	e880100c 	stmia	r0, {r2, r3, ip}
        152eb4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetCMOTransportInfo(void)
 * Address: 00152eb8
 */
PCECallBackWrapper::GetCMOTransportInfo(void) {
    /*
        152eb8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152ebc:	e28000f8 	add	r0, r0, #248	; 0xf8
        152ec0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::SetCMOTransportInfo(TCMOTransportInfo &)
 * Address: 00152ec4
 */
PCECallBackWrapper::SetCMOTransportInfo(TCMOTransportInfo &) {
    /*
        152ec4:	e92d4000 	stmdb	sp!, {lr}
        152ec8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152ecc:	e280e0f8 	add	lr, r0, #248	; 0xf8
        152ed0:	e1a00001 	mov	r0, r1
        152ed4:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        152ed8:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        152edc:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        152ee0:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        152ee4:	e890100c 	ldmia	r0, {r2, r3, ip}
        152ee8:	e88e100c 	stmia	lr, {r2, r3, ip}
        152eec:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: PCECallBackWrapper::GetReceiveMessageBufSize(void)
 * Address: 00152ef0
 */
PCECallBackWrapper::GetReceiveMessageBufSize(void) {
    /*
        152ef0:	e3a00040 	mov	r0, #64	; 0x40
        152ef4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetConnectionEndPort(void)
 * Address: 00152ef8
 */
PCECallBackWrapper::GetConnectionEndPort(void) {
    /*
        152ef8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152efc:	e2800008 	add	r0, r0, #8	; 0x8
        152f00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::OpenComplete(long)
 * Address: 00152f04
 */
PCECallBackWrapper::OpenComplete(long) {
    /*
        152f04:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f08:	ea635544 	b	1a28420 <TConnectionEnd::$OpenComplete(long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::GetControlOptionsInfo(void)
 * Address: 00152f0c
 */
PCECallBackWrapper::GetControlOptionsInfo(void) {
    /*
        152f0c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f10:	e2800f4a 	add	r0, r0, #296	; 0x128
        152f14:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetGetBytesOptionsInfo(void)
 * Address: 00152f18
 */
PCECallBackWrapper::GetGetBytesOptionsInfo(void) {
    /*
        152f18:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f1c:	e2800d05 	add	r0, r0, #320	; 0x140
        152f20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetPutBytesOptionsInfo(void)
 * Address: 00152f24
 */
PCECallBackWrapper::GetPutBytesOptionsInfo(void) {
    /*
        152f24:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f28:	e2800f56 	add	r0, r0, #344	; 0x158
        152f2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetCurPutData(void)
 * Address: 00152f30
 */
PCECallBackWrapper::GetCurPutData(void) {
    /*
        152f30:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f34:	e5900170 	ldr	r0, [r0, #368]	; fField368
        152f38:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetCurPutFrameData(void)
 * Address: 00152f3c
 */
PCECallBackWrapper::GetCurPutFrameData(void) {
    /*
        152f3c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f40:	e5d00174 	ldrb	r0, [r0, #372]	; fField372
        152f44:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetCurPutEndOfFrame(void)
 * Address: 00152f48
 */
PCECallBackWrapper::GetCurPutEndOfFrame(void) {
    /*
        152f48:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f4c:	e5d00175 	ldrb	r0, [r0, #373]	; fField373
        152f50:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetCurGetData(void)
 * Address: 00152f54
 */
PCECallBackWrapper::GetCurGetData(void) {
    /*
        152f54:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f58:	e5900178 	ldr	r0, [r0, #376]	; fField376
        152f5c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetCurGetFrameData(void)
 * Address: 00152f60
 */
PCECallBackWrapper::GetCurGetFrameData(void) {
    /*
        152f60:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f64:	e5d00177 	ldrb	r0, [r0, #375]	; fField375
        152f68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetCurGetNonBlocking(void)
 * Address: 00152f6c
 */
PCECallBackWrapper::GetCurGetNonBlocking(void) {
    /*
        152f6c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f70:	e5d00176 	ldrb	r0, [r0, #374]	; fField374
        152f74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetCurGetThreshold(void)
 * Address: 00152f78
 */
PCECallBackWrapper::GetCurGetThreshold(void) {
    /*
        152f78:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f7c:	e590017c 	ldr	r0, [r0, #380]	; fField380
        152f80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::FlushChannel(unsigned long, long)
 * Address: 00152f84
 */
PCECallBackWrapper::FlushChannel(unsigned long, long) {
    /*
        152f84:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f88:	ea634ce0 	b	1a26310 <TConnectionEnd::$FlushChannel(CommToolRequestType, long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::GetPassiveClaim(void)
 * Address: 00152f8c
 */
PCECallBackWrapper::GetPassiveClaim(void) {
    /*
        152f8c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f90:	e5d00180 	ldrb	r0, [r0, #384]	; fField384
        152f94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::SetPassiveClaim(unsigned char)
 * Address: 00152f98
 */
PCECallBackWrapper::SetPassiveClaim(unsigned char) {
    /*
        152f98:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152f9c:	e5c01180 	strb	r1, [r0, #384]	; fField384
        152fa0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetPassiveState(void)
 * Address: 00152fa4
 */
PCECallBackWrapper::GetPassiveState(void) {
    /*
        152fa4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152fa8:	e5d00180 	ldrb	r0, [r0, #384]	; fField384
        152fac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::SetPassiveState(unsigned char)
 * Address: 00152fb0
 */
PCECallBackWrapper::SetPassiveState(unsigned char) {
    /*
        152fb0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152fb4:	e5c01181 	strb	r1, [r0, #385]	; fField385
        152fb8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetWaitingForResNotify(void)
 * Address: 00152fbc
 */
PCECallBackWrapper::GetWaitingForResNotify(void) {
    /*
        152fbc:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152fc0:	e5d00182 	ldrb	r0, [r0, #386]	; fField386
        152fc4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::SetWaitingForResNotify(unsigned char)
 * Address: 00152fc8
 */
PCECallBackWrapper::SetWaitingForResNotify(unsigned char) {
    /*
        152fc8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152fcc:	e5c01182 	strb	r1, [r0, #386]	; fField386
        152fd0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::GetCurRequestOpCode(void)
 * Address: 00152fd4
 */
PCECallBackWrapper::GetCurRequestOpCode(void) {
    /*
        152fd4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152fd8:	e5900184 	ldr	r0, [r0, #388]	; fField388
        152fdc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCECallBackWrapper::CloseComplete(long)
 * Address: 00152fe0
 */
PCECallBackWrapper::CloseComplete(long) {
    /*
        152fe0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152fe4:	ea63449d 	b	1a24260 <TConnectionEnd::$CloseComplete(long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::BindComplete(long)
 * Address: 00152fe8
 */
PCECallBackWrapper::BindComplete(long) {
    /*
        152fe8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152fec:	ea63407a 	b	1a231dc <TConnectionEnd::$BindComplete(long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::UnbindComplete(long)
 * Address: 00152ff0
 */
PCECallBackWrapper::UnbindComplete(long) {
    /*
        152ff0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152ff4:	ea636591 	b	1a2c640 <TConnectionEnd::$UnbindComplete(long)>
    */
}

/**
 * Symbol: PCECallBackWrapper::ConnectComplete(long)
 * Address: 00152ff8
 */
PCECallBackWrapper::ConnectComplete(long) {
    /*
        152ff8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        152ffc:	ea6348a9 	b	1a252a8 <TConnectionEnd::$ConnectComplete(long)>
    */
}

/**
 * Symbol: ClassInfo__18PCECallBackWrapperSFv
 * Address: 00383f78
 */
void PCECallBackWrapper::ClassInfo() {
    /*
        383f78:	e24f0044 	sub	r0, pc, #68	; 0x44
        383f7c:	e1a0f00e 	mov	pc, lr
        383f80:	e3a00000 	mov	r0, #0	; 0x0
        383f84:	e1a0f00e 	mov	pc, lr
        383f88:	50434543 	subpl	r4, r3, r3, asr #10
        383f8c:	616c6c42 	cmnvs	ip, r2, asr #24
        383f90:	61636b57 	cmnvs	r3, r7, asr fp
        383f94:	72617070 	rsbvc	r7, r1, #112	; 0x70
        383f98:	65720050 	ldrvsb	r0, [r2, -#80]!
        383f9c:	43454361 	cmpmi	r5, #-2080374783	; 0x84000001
        383fa0:	6c6c4261 	sfmvs	f4, 2, [ip], -#388	; fField388
        383fa4:	636b0000 	cmnvs	fp, #0	; 0x0
        383fa8:	00000000 	andeq	r0, r0, r0
        383fac:	eafffff1 	b	383f78 <ClassInfo__18PCECallBackWrapperSFv>
        383fb0:	eaf73b74 	b	152d88 <PCECallBackWrapper::New(void)>
        383fb4:	eaf73b91 	b	152e00 <PCECallBackWrapper::Delete(void)>
        383fb8:	ea5a8d05 	b	1a273d4 <PCECallBackWrapper::$Init(TConnectionEnd *)>
        383fbc:	eaf73bd0 	b	152f04 <PCECallBackWrapper::OpenComplete(long)>
        383fc0:	ea5a80a7 	b	1a24264 <PCECallBackWrapper::$CloseComplete(long)>
        383fc4:	ea5a7c86 	b	1a231e4 <PCECallBackWrapper::$BindComplete(long)>
        383fc8:	eaf73c08 	b	152ff0 <PCECallBackWrapper::UnbindComplete(long)>
        383fcc:	eaf73c09 	b	152ff8 <PCECallBackWrapper::ConnectComplete(long)>
        383fd0:	eaf73b6d 	b	152d8c <PCECallBackWrapper::ListenComplete(long)>
        383fd4:	ea5a7c72 	b	1a231a4 <PCECallBackWrapper::$AcceptComplete(long)>
        383fd8:	eaf73b6f 	b	152d9c <PCECallBackWrapper::TerminateComplete(void)>
        383fdc:	eaf73b70 	b	152da4 <PCECallBackWrapper::PutComplete(long, unsigned long)>
        383fe0:	eaf73b71 	b	152dac <PCECallBackWrapper::KillPutComplete(long)>
        383fe4:	eaf73b72 	b	152db4 <PCECallBackWrapper::GetComplete(long, unsigned char, unsigned long)>
        383fe8:	eaf73b74 	b	152dc0 <PCECallBackWrapper::KillGetComplete(long)>
        383fec:	eaf73b75 	b	152dc8 <PCECallBackWrapper::HandleRequest(unsigned char *, unsigned long, TUMsgToken &, unsigned long)>
        383ff0:	eaf73b7e 	b	152df0 <PCECallBackWrapper::HandleReply(unsigned long, unsigned long)>
        383ff4:	eaf73b7f 	b	152df8 <PCECallBackWrapper::KillControlComplete(long)>
        383ff8:	eaf73b81 	b	152e04 <PCECallBackWrapper::KillGetCommEventComplete(long)>
        383ffc:	eaf73b82 	b	152e0c <PCECallBackWrapper::GetCommEvent(void)>
        384000:	eaf73b83 	b	152e14 <PCECallBackWrapper::PostCommEvent(TCommToolGetEventReply &, long)>
        384004:	eaf73b84 	b	152e1c <PCECallBackWrapper::ProcessOptionComplete(unsigned long)>
        384008:	eaf73b85 	b	152e24 <PCECallBackWrapper::ProcessPutBytesOptionComplete(unsigned long)>
        38400c:	eaf73b86 	b	152e2c <PCECallBackWrapper::ProcessGetBytesOptionComplete(unsigned long)>
        384010:	eaf73b87 	b	152e34 <PCECallBackWrapper::ResArbReleaseComplete(long)>
        384014:	eaf73bda 	b	152f84 <PCECallBackWrapper::FlushChannel(unsigned long, long)>
        384018:	eaf73b87 	b	152e3c <PCECallBackWrapper::StartAbort(long)>
        38401c:	eaf73b88 	b	152e44 <PCECallBackWrapper::GetAbortErr(void)>
        384020:	eaf73b8a 	b	152e50 <PCECallBackWrapper::GetTerminationEvent(void)>
        384024:	eaf73b8e 	b	152e64 <PCECallBackWrapper::SetTerminationEvent(unsigned long)>
        384028:	eaf73b90 	b	152e70 <PCECallBackWrapper::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
        38402c:	eaf73b91 	b	152e78 <PCECallBackWrapper::GetToolConnectState(void)>
        384030:	eaf73b93 	b	152e84 <PCECallBackWrapper::SetToolConnectState(unsigned long)>
        384034:	eaf73b95 	b	152e90 <PCECallBackWrapper::GetConnectInfo(void)>
        384038:	eaf73b97 	b	152e9c <PCECallBackWrapper::SetConnectInfo(TCMOCTConnectInfo &)>
        38403c:	eaf73b9d 	b	152eb8 <PCECallBackWrapper::GetCMOTransportInfo(void)>
        384040:	eaf73b9f 	b	152ec4 <PCECallBackWrapper::SetCMOTransportInfo(TCMOTransportInfo &)>
        384044:	eaf73ba9 	b	152ef0 <PCECallBackWrapper::GetReceiveMessageBufSize(void)>
        384048:	eaf73baa 	b	152ef8 <PCECallBackWrapper::GetConnectionEndPort(void)>
        38404c:	eaf73bae 	b	152f0c <PCECallBackWrapper::GetControlOptionsInfo(void)>
        384050:	eaf73bb0 	b	152f18 <PCECallBackWrapper::GetGetBytesOptionsInfo(void)>
        384054:	eaf73bb2 	b	152f24 <PCECallBackWrapper::GetPutBytesOptionsInfo(void)>
        384058:	eaf73bb4 	b	152f30 <PCECallBackWrapper::GetCurPutData(void)>
        38405c:	eaf73bb6 	b	152f3c <PCECallBackWrapper::GetCurPutFrameData(void)>
        384060:	eaf73bb8 	b	152f48 <PCECallBackWrapper::GetCurPutEndOfFrame(void)>
        384064:	eaf73bba 	b	152f54 <PCECallBackWrapper::GetCurGetData(void)>
        384068:	eaf73bbc 	b	152f60 <PCECallBackWrapper::GetCurGetFrameData(void)>
        38406c:	eaf73bbe 	b	152f6c <PCECallBackWrapper::GetCurGetNonBlocking(void)>
        384070:	eaf73bc0 	b	152f78 <PCECallBackWrapper::GetCurGetThreshold(void)>
        384074:	eaf73bc4 	b	152f8c <PCECallBackWrapper::GetPassiveClaim(void)>
        384078:	eaf73bc6 	b	152f98 <PCECallBackWrapper::SetPassiveClaim(unsigned char)>
        38407c:	eaf73bc8 	b	152fa4 <PCECallBackWrapper::GetPassiveState(void)>
        384080:	eaf73bca 	b	152fb0 <PCECallBackWrapper::SetPassiveState(unsigned char)>
        384084:	eaf73bcc 	b	152fbc <PCECallBackWrapper::GetWaitingForResNotify(void)>
        384088:	eaf73bce 	b	152fc8 <PCECallBackWrapper::SetWaitingForResNotify(unsigned char)>
        38408c:	eaf73bd0 	b	152fd4 <PCECallBackWrapper::GetCurRequestOpCode(void)>
        384090:	e1a0000f 	mov	r0, pc
        384094:	e1a0f00e 	mov	pc, lr
        384098:	544b7962 	strplb	r7, [fp], -#2402
        38409c:	64457874 	strvsb	r7, [r5], -#2164
        3840a0:	656e7369 	strvsb	r7, [lr, -#873]!
        3840a4:	6f6e0000 	swivs	0x006e0000
    */
}

