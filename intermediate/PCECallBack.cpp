#include "DDKIncludes/Communications/PConnectionEnd.h"

/**
 * Symbol: New__11PCECallBackSFPc
 * Address: 00383c6c
 */
static PConnectionEnd*	PCECallBack::New(char*);		// initialize state, return this {
    /*
        383c6c:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        383c70:	e1a01000 	mov	r1, r0
        383c74:	ebfffff7 	bl	383c58 <PMuxTool::HandleInternalEvent(void)+0xc>
        383c78:	eb612ec9 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        383c7c:	e1100000 	tst	r0, r0
        383c80:	e28dd004 	add	sp, sp, #4	; 0x4
        383c84:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        383c88:	01a0f00e 	moveq	pc, lr
        383c8c:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383c90:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383c94:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PCECallBack::Delete(void)
 * Address: 00383c98
 */
void					PCECallBack::Delete();		// clean up {
    /*
        383c98:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383c9c:	e92d4001 	stmdb	sp!, {r0, lr}
        383ca0:	e28fe004 	add	lr, pc, #4	; 0x4
        383ca4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383ca8:	e28cf00c 	add	pc, ip, #12	; 0xc
        383cac:	e8bd4001 	ldmia	sp!, {r0, lr}
        383cb0:	ea613b29 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PCECallBack::Init(TConnectionEnd *)
 * Address: 00383cb4
 */
NewtonErr				PCECallBack::Init(PMuxTool* pmuxToolPtr, PCECallBack* ceCallBack, ULong ceNumber) {
    /*
        383cb4:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383cb8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383cbc:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: PCECallBack::OpenComplete(long)
 * Address: 00383cc0
 */
PCECallBack::OpenComplete(long) {
    /*
        383cc0:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383cc4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383cc8:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: PCECallBack::CloseComplete(long)
 * Address: 00383ccc
 */
PCECallBack::CloseComplete(long) {
    /*
        383ccc:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383cd0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383cd4:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: PCECallBack::BindComplete(long)
 * Address: 00383cd8
 */
PCECallBack::BindComplete(long) {
    /*
        383cd8:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383cdc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383ce0:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: PCECallBack::UnbindComplete(long)
 * Address: 00383ce4
 */
PCECallBack::UnbindComplete(long) {
    /*
        383ce4:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383ce8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383cec:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: PCECallBack::ConnectComplete(long)
 * Address: 00383cf0
 */
PCECallBack::ConnectComplete(long) {
    /*
        383cf0:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383cf4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383cf8:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: PCECallBack::ListenComplete(long)
 * Address: 00383cfc
 */
PCECallBack::ListenComplete(long) {
    /*
        383cfc:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d00:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d04:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: PCECallBack::AcceptComplete(long)
 * Address: 00383d08
 */
PCECallBack::AcceptComplete(long) {
    /*
        383d08:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d0c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d10:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: PCECallBack::TerminateComplete(void)
 * Address: 00383d14
 */
PCECallBack::TerminateComplete(void) {
    /*
        383d14:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d18:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d1c:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: PCECallBack::PutComplete(long, unsigned long)
 * Address: 00383d20
 */
PCECallBack::PutComplete(long, unsigned long) {
    /*
        383d20:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d24:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d28:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: PCECallBack::KillPutComplete(long)
 * Address: 00383d2c
 */
PCECallBack::KillPutComplete(long) {
    /*
        383d2c:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d30:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d34:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: PCECallBack::GetComplete(long, unsigned char, unsigned long)
 * Address: 00383d38
 */
PCECallBack::GetComplete(long, unsigned char, unsigned long) {
    /*
        383d38:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d3c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d40:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: PCECallBack::KillGetComplete(long)
 * Address: 00383d44
 */
PCECallBack::KillGetComplete(long) {
    /*
        383d44:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d48:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d4c:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: PCECallBack::HandleRequest(unsigned char *, unsigned long, TUMsgToken &, unsigned long)
 * Address: 00383d50
 */
void					PCECallBack::HandleRequest(UChar* request, ULong requestSize, TUMsgToken& msgToken, ULong msgType) {
    /*
        383d50:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d54:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d58:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: PCECallBack::HandleReply(unsigned long, unsigned long)
 * Address: 00383d5c
 */
void					PCECallBack::HandleReply(ULong userRefCon, ULong msgType) {
    /*
        383d5c:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d60:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d64:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: PCECallBack::KillControlComplete(long)
 * Address: 00383d68
 */
PCECallBack::KillControlComplete(long) {
    /*
        383d68:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d6c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d70:	e28cf04c 	add	pc, ip, #76	; 0x4c
    */
}

/**
 * Symbol: PCECallBack::KillGetCommEventComplete(long)
 * Address: 00383d74
 */
PCECallBack::KillGetCommEventComplete(long) {
    /*
        383d74:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d78:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d7c:	e28cf050 	add	pc, ip, #80	; 0x50
    */
}

/**
 * Symbol: PCECallBack::GetCommEvent(void)
 * Address: 00383d80
 */
void					PCECallBack::GetCommEvent() {
    /*
        383d80:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d84:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d88:	e28cf054 	add	pc, ip, #84	; 0x54
    */
}

/**
 * Symbol: PCECallBack::PostCommEvent(TCommToolGetEventReply &, long)
 * Address: 00383d8c
 */
PCECallBack::PostCommEvent(TCommToolGetEventReply &, long) {
    /*
        383d8c:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d90:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383d94:	e28cf058 	add	pc, ip, #88	; 0x58
    */
}

/**
 * Symbol: PCECallBack::ProcessOptionComplete(unsigned long)
 * Address: 00383d98
 */
PCECallBack::ProcessOptionComplete(unsigned long) {
    /*
        383d98:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383d9c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383da0:	e28cf05c 	add	pc, ip, #92	; 0x5c
    */
}

/**
 * Symbol: PCECallBack::ProcessPutBytesOptionComplete(unsigned long)
 * Address: 00383da4
 */
PCECallBack::ProcessPutBytesOptionComplete(unsigned long) {
    /*
        383da4:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383da8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383dac:	e28cf060 	add	pc, ip, #96	; 0x60
    */
}

/**
 * Symbol: PCECallBack::ProcessGetBytesOptionComplete(unsigned long)
 * Address: 00383db0
 */
PCECallBack::ProcessGetBytesOptionComplete(unsigned long) {
    /*
        383db0:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383db4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383db8:	e28cf064 	add	pc, ip, #100	; 0x64
    */
}

/**
 * Symbol: PCECallBack::ResArbReleaseComplete(long)
 * Address: 00383dbc
 */
PCECallBack::ResArbReleaseComplete(long) {
    /*
        383dbc:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383dc0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383dc4:	e28cf068 	add	pc, ip, #104	; 0x68
    */
}

/**
 * Symbol: PCECallBack::FlushChannel(unsigned long, long)
 * Address: 00383dc8
 */
PCECallBack::FlushChannel(unsigned long, long) {
    /*
        383dc8:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383dcc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383dd0:	e28cf06c 	add	pc, ip, #108	; 0x6c
    */
}

/**
 * Symbol: PCECallBack::StartAbort(long)
 * Address: 00383dd4
 */
PCECallBack::StartAbort(long) {
    /*
        383dd4:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383dd8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383ddc:	e28cf070 	add	pc, ip, #112	; 0x70
    */
}

/**
 * Symbol: PCECallBack::GetAbortErr(void)
 * Address: 00383de0
 */
PCECallBack::GetAbortErr(void) {
    /*
        383de0:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383de4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383de8:	e28cf074 	add	pc, ip, #116	; 0x74
    */
}

/**
 * Symbol: PCECallBack::GetTerminationEvent(void)
 * Address: 00383dec
 */
PCECallBack::GetTerminationEvent(void) {
    /*
        383dec:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383df0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383df4:	e28cf078 	add	pc, ip, #120	; 0x78
    */
}

/**
 * Symbol: PCECallBack::SetTerminationEvent(unsigned long)
 * Address: 00383df8
 */
PCECallBack::SetTerminationEvent(unsigned long) {
    /*
        383df8:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383dfc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e00:	e28cf07c 	add	pc, ip, #124	; 0x7c
    */
}

/**
 * Symbol: PCECallBack::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)
 * Address: 00383e04
 */
PCECallBack::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long) {
    /*
        383e04:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e08:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e0c:	e28cf080 	add	pc, ip, #128	; 0x80
    */
}

/**
 * Symbol: PCECallBack::GetToolConnectState(void)
 * Address: 00383e10
 */
PCECallBack::GetToolConnectState(void) {
    /*
        383e10:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e14:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e18:	e28cf084 	add	pc, ip, #132	; 0x84
    */
}

/**
 * Symbol: PCECallBack::SetToolConnectState(unsigned long)
 * Address: 00383e1c
 */
PCECallBack::SetToolConnectState(unsigned long) {
    /*
        383e1c:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e20:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e24:	e28cf088 	add	pc, ip, #136	; 0x88
    */
}

/**
 * Symbol: PCECallBack::GetConnectInfo(void)
 * Address: 00383e28
 */
PCECallBack::GetConnectInfo(void) {
    /*
        383e28:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e2c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e30:	e28cf08c 	add	pc, ip, #140	; 0x8c
    */
}

/**
 * Symbol: PCECallBack::SetConnectInfo(TCMOCTConnectInfo &)
 * Address: 00383e34
 */
PCECallBack::SetConnectInfo(TCMOCTConnectInfo &) {
    /*
        383e34:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e38:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e3c:	e28cf090 	add	pc, ip, #144	; 0x90
    */
}

/**
 * Symbol: PCECallBack::GetCMOTransportInfo(void)
 * Address: 00383e40
 */
PCECallBack::GetCMOTransportInfo(void) {
    /*
        383e40:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e44:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e48:	e28cf094 	add	pc, ip, #148	; 0x94
    */
}

/**
 * Symbol: PCECallBack::SetCMOTransportInfo(TCMOTransportInfo &)
 * Address: 00383e4c
 */
PCECallBack::SetCMOTransportInfo(TCMOTransportInfo &) {
    /*
        383e4c:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e50:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e54:	e28cf098 	add	pc, ip, #152	; 0x98
    */
}

/**
 * Symbol: PCECallBack::GetReceiveMessageBufSize(void)
 * Address: 00383e58
 */
PCECallBack::GetReceiveMessageBufSize(void) {
    /*
        383e58:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e5c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e60:	e28cf09c 	add	pc, ip, #156	; 0x9c
    */
}

/**
 * Symbol: PCECallBack::GetConnectionEndPort(void)
 * Address: 00383e64
 */
PCECallBack::GetConnectionEndPort(void) {
    /*
        383e64:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e68:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e6c:	e28cf0a0 	add	pc, ip, #160	; 0xa0
    */
}

/**
 * Symbol: PCECallBack::GetControlOptionsInfo(void)
 * Address: 00383e70
 */
PCECallBack::GetControlOptionsInfo(void) {
    /*
        383e70:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e74:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e78:	e28cf0a4 	add	pc, ip, #164	; 0xa4
    */
}

/**
 * Symbol: PCECallBack::GetGetBytesOptionsInfo(void)
 * Address: 00383e7c
 */
PCECallBack::GetGetBytesOptionsInfo(void) {
    /*
        383e7c:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e80:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e84:	e28cf0a8 	add	pc, ip, #168	; 0xa8
    */
}

/**
 * Symbol: PCECallBack::GetPutBytesOptionsInfo(void)
 * Address: 00383e88
 */
PCECallBack::GetPutBytesOptionsInfo(void) {
    /*
        383e88:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e8c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e90:	e28cf0ac 	add	pc, ip, #172	; 0xac
    */
}

/**
 * Symbol: PCECallBack::GetCurPutData(void)
 * Address: 00383e94
 */
PCECallBack::GetCurPutData(void) {
    /*
        383e94:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383e98:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383e9c:	e28cf0b0 	add	pc, ip, #176	; 0xb0
    */
}

/**
 * Symbol: PCECallBack::GetCurPutFrameData(void)
 * Address: 00383ea0
 */
PCECallBack::GetCurPutFrameData(void) {
    /*
        383ea0:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383ea4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383ea8:	e28cf0b4 	add	pc, ip, #180	; 0xb4
    */
}

/**
 * Symbol: PCECallBack::GetCurPutEndOfFrame(void)
 * Address: 00383eac
 */
PCECallBack::GetCurPutEndOfFrame(void) {
    /*
        383eac:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383eb0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383eb4:	e28cf0b8 	add	pc, ip, #184	; 0xb8
    */
}

/**
 * Symbol: PCECallBack::GetCurGetData(void)
 * Address: 00383eb8
 */
PCECallBack::GetCurGetData(void) {
    /*
        383eb8:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383ebc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383ec0:	e28cf0bc 	add	pc, ip, #188	; 0xbc
    */
}

/**
 * Symbol: PCECallBack::GetCurGetFrameData(void)
 * Address: 00383ec4
 */
PCECallBack::GetCurGetFrameData(void) {
    /*
        383ec4:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383ec8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383ecc:	e28cf0c0 	add	pc, ip, #192	; 0xc0
    */
}

/**
 * Symbol: PCECallBack::GetCurGetNonBlocking(void)
 * Address: 00383ed0
 */
PCECallBack::GetCurGetNonBlocking(void) {
    /*
        383ed0:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383ed4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383ed8:	e28cf0c4 	add	pc, ip, #196	; 0xc4
    */
}

/**
 * Symbol: PCECallBack::GetCurGetThreshold(void)
 * Address: 00383edc
 */
PCECallBack::GetCurGetThreshold(void) {
    /*
        383edc:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383ee0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383ee4:	e28cf0c8 	add	pc, ip, #200	; 0xc8
    */
}

/**
 * Symbol: PCECallBack::GetPassiveClaim(void)
 * Address: 00383ee8
 */
PCECallBack::GetPassiveClaim(void) {
    /*
        383ee8:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383eec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383ef0:	e28cf0cc 	add	pc, ip, #204	; 0xcc
    */
}

/**
 * Symbol: PCECallBack::SetPassiveClaim(unsigned char)
 * Address: 00383ef4
 */
PCECallBack::SetPassiveClaim(unsigned char) {
    /*
        383ef4:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383ef8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383efc:	e28cf0d0 	add	pc, ip, #208	; 0xd0
    */
}

/**
 * Symbol: PCECallBack::GetPassiveState(void)
 * Address: 00383f00
 */
PCECallBack::GetPassiveState(void) {
    /*
        383f00:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383f04:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383f08:	e28cf0d4 	add	pc, ip, #212	; 0xd4
    */
}

/**
 * Symbol: PCECallBack::SetPassiveState(unsigned char)
 * Address: 00383f0c
 */
PCECallBack::SetPassiveState(unsigned char) {
    /*
        383f0c:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383f10:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383f14:	e28cf0d8 	add	pc, ip, #216	; 0xd8
    */
}

/**
 * Symbol: PCECallBack::GetWaitingForResNotify(void)
 * Address: 00383f18
 */
PCECallBack::GetWaitingForResNotify(void) {
    /*
        383f18:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383f1c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383f20:	e28cf0dc 	add	pc, ip, #220	; 0xdc
    */
}

/**
 * Symbol: PCECallBack::SetWaitingForResNotify(unsigned char)
 * Address: 00383f24
 */
PCECallBack::SetWaitingForResNotify(unsigned char) {
    /*
        383f24:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383f28:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383f2c:	e28cf0e0 	add	pc, ip, #224	; 0xe0
    */
}

/**
 * Symbol: PCECallBack::GetCurRequestOpCode(void)
 * Address: 00383f30
 */
PCECallBack::GetCurRequestOpCode(void) {
    /*
        383f30:	e5900004 	ldr	r0, [r0, #4]	; PCECallBack
        383f34:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383f38:	e28cf0e4 	add	pc, ip, #228	; 0xe4
        383f3c:	00000000 	andeq	r0, r0, r0
        383f40:	00000048 	andeq	r0, r0, r8, asr #32
        383f44:	00000057 	andeq	r0, r0, r7, asr r0
        383f48:	0000005f 	andeq	r0, r0, pc, asr r0
        383f4c:	0000005c 	andeq	r0, r0, ip, asr r0
        383f50:	00000140 	andeq	r0, r0, r0, asr #2
        383f54:	eaf73b89 	b	152d80 <Sizeof__18PCECallBackWrapperSFv>
        383f60:	eaf73b88 	b	152d88 <PCECallBackWrapper::New(void)>
        383f64:	eaf73ba5 	b	152e00 <PCECallBackWrapper::Delete(void)>
        383f68:	00020000 	andeq	r0, r2, r0
        383f74:	ea000001 	b	383f80 <ClassInfo__18PCECallBackWrapperSFv+0x8>
    */
}

