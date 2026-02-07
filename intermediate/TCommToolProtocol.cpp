#include "include/TCommToolProtocol.h"

/**
 * Symbol: TCommToolProtocol::CTCompleteRequest(CommToolChannelNumber, long, TCommToolReply &)
 * Address: 0006cfbc
 */
TCommToolProtocol::CTCompleteRequest(CommToolChannelNumber, long, TCommToolReply &) {
    /*
         6cfbc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6cfc0:	ea6d3fab 	b	1bbce74 <TCommTool::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTResArbReleaseStart(unsigned char *, unsigned char *)
 * Address: 0006cfc4
 */
TCommToolProtocol::CTResArbReleaseStart(unsigned char *, unsigned char *) {
    /*
         6cfc4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6cfc8:	ea66f981 	b	1a2b5d4 <TCommTool::$ResArbReleaseStart(unsigned char *, unsigned char *)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTResArbReleaseComplete(long)
 * Address: 0006cfcc
 */
TCommToolProtocol::CTResArbReleaseComplete(long) {
    /*
         6cfcc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6cfd0:	ea66f97c 	b	1a2b5c8 <TCommTool::$ResArbReleaseComplete(long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTResArbClaimNotification(unsigned char *, unsigned char *)
 * Address: 0006cfd4
 */
TCommToolProtocol::CTResArbClaimNotification(unsigned char *, unsigned char *) {
    /*
         6cfd4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6cfd8:	ea66f977 	b	1a2b5bc <TCommTool::$ResArbClaimNotification(unsigned char *, unsigned char *)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTHandleInternalEvent(void)
 * Address: 0006cfdc
 */
TCommToolProtocol::CTHandleInternalEvent(void) {
    /*
         6cfdc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6cfe0:	ea66e8ea 	b	1a27390 <TCommTool::$HandleInternalEvent(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTHandleRequest(TUMsgToken &, unsigned long)
 * Address: 0006cfe4
 */
TCommToolProtocol::CTHandleRequest(TUMsgToken &, unsigned long) {
    /*
         6cfe4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6cfe8:	ea6d4c03 	b	1bbfffc <TCommTool::$HandleRequest(TUMsgToken &, unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTHandleReply(unsigned long, unsigned long)
 * Address: 0006cfec
 */
TCommToolProtocol::CTHandleReply(unsigned long, unsigned long) {
    /*
         6cfec:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6cff0:	ea6d4c00 	b	1bbfff8 <TCommTool::$HandleReply(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTDoControl(unsigned long, unsigned long)
 * Address: 0006cff4
 */
TCommToolProtocol::CTDoControl(unsigned long, unsigned long) {
    /*
         6cff4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6cff8:	ea6d4bf2 	b	1bbffc8 <TCommTool::$DoControl(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTDoKillControl(unsigned long)
 * Address: 0006cffc
 */
TCommToolProtocol::CTDoKillControl(unsigned long) {
    /*
         6cffc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d000:	ea6d4bf1 	b	1bbffcc <TCommTool::$DoKillControl(unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetCommEvent(void)
 * Address: 0006d004
 */
TCommToolProtocol::CTGetCommEvent(void) {
    /*
         6d004:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d008:	ea6d4bf4 	b	1bbffe0 <TCommTool::$GetCommEvent(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTDoKillGetCommEvent(void)
 * Address: 0006d00c
 */
TCommToolProtocol::CTDoKillGetCommEvent(void) {
    /*
         6d00c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d010:	ea6d4bee 	b	1bbffd0 <TCommTool::$DoKillGetCommEvent(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTPostCommEvent(TCommToolGetEventReply &, long)
 * Address: 0006d014
 */
TCommToolProtocol::CTPostCommEvent(TCommToolGetEventReply &, long) {
    /*
         6d014:	e1a0c00d 	mov	ip, sp
         6d018:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6d01c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6d020:	e5903010 	ldr	r3, [r0, #16]	; fField16
         6d024:	e1a0c003 	mov	ip, r3
         6d028:	e5933270 	ldr	r3, [r3, #624]
         6d02c:	e3530002 	cmp	r3, #2	; 0x2
         6d030:	a1a0000c 	movge	r0, ip
         6d034:	a91b6810 	ldmgedb	fp, {r4, fp, sp, lr}
         6d038:	aa6d4bff 	bge	1bc003c <TCommTool::$PostCommEvent(TCommToolGetEventReply &, long)>
         6d03c:	e24dd010 	sub	sp, sp, #16	; 0x10
         6d040:	e281e014 	add	lr, r1, #20	; 0x14
         6d044:	e93e1008 	ldmdb	lr!, {r3, ip}
         6d048:	e92d1008 	stmdb	sp!, {r3, ip}
         6d04c:	e91e5008 	ldmdb	lr, {r3, ip, lr}
         6d050:	e92d5008 	stmdb	sp!, {r3, ip, lr}
         6d054:	e28de014 	add	lr, sp, #20	; 0x14
         6d058:	e2814014 	add	r4, r1, #20	; 0x14
         6d05c:	e8941008 	ldmia	r4, {r3, ip}
         6d060:	e88e1008 	stmia	lr, {r3, ip}
         6d064:	e28de01c 	add	lr, sp, #28	; 0x1c
         6d068:	e281101c 	add	r1, r1, #28	; 0x1c
         6d06c:	e8911008 	ldmia	r1, {r3, ip}
         6d070:	e88e1008 	stmia	lr, {r3, ip}
         6d074:	e5901010 	ldr	r1, [r0, #16]	; fField16
         6d078:	e5911204 	ldr	r1, [r1, #516]	; fField516
         6d07c:	e58d1020 	str	r1, [sp, #32]
         6d080:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d084:	e1a0100d 	mov	r1, sp
         6d088:	eb6d4beb 	bl	1bc003c <TCommTool::$PostCommEvent(TCommToolGetEventReply &, long)>
         6d08c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCommToolProtocol::CTOpenContinue(void)
 * Address: 0006d090
 */
TCommToolProtocol::CTOpenContinue(void) {
    /*
         6d090:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d094:	ea6d4be5 	b	1bc0030 <TCommTool::$OpenContinue(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTOpenStart(TOptionArray *)
 * Address: 0006d098
 */
TCommToolProtocol::CTOpenStart(TOptionArray *) {
    /*
         6d098:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d09c:	ea6d4be4 	b	1bc0034 <TCommTool::$OpenStart(TOptionArray *)>
    */
}

/**
 * Symbol: TCommToolProtocol::ToolInit(TPCommTool *)
 * Address: 0006d0a0
 */
TCommToolProtocol::ToolInit(TPCommTool *) {
    /*
         6d0a0:	e5a01010 	str	r1, [r0, #16]!	; fField16
         6d0a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTOpenComplete(void)
 * Address: 0006d0a8
 */
TCommToolProtocol::CTOpenComplete(void) {
    /*
         6d0a8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d0ac:	ea6d4bde 	b	1bc002c <TCommTool::$OpenComplete(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTClose(void)
 * Address: 0006d0b0
 */
TCommToolProtocol::CTClose(void) {
    /*
         6d0b0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d0b4:	ea6d3f6b 	b	1bbce68 <TCommTool::$Close(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTCloseComplete(long)
 * Address: 0006d0b8
 */
TCommToolProtocol::CTCloseComplete(long) {
    /*
         6d0b8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d0bc:	ea6d3f6a 	b	1bbce6c <TCommTool::$CloseComplete(long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTConnectStart(void)
 * Address: 0006d0c0
 */
TCommToolProtocol::CTConnectStart(void) {
    /*
         6d0c0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d0c4:	ea6d4371 	b	1bbde90 <TCommTool::$ConnectStart(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTConnectComplete(long)
 * Address: 0006d0c8
 */
TCommToolProtocol::CTConnectComplete(long) {
    /*
         6d0c8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d0cc:	ea6d436e 	b	1bbde8c <TCommTool::$ConnectComplete(long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTListenStart(void)
 * Address: 0006d0d0
 */
TCommToolProtocol::CTListenStart(void) {
    /*
         6d0d0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d0d4:	ea6d4bd1 	b	1bc0020 <TCommTool::$ListenStart(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTListenComplete(long)
 * Address: 0006d0d8
 */
TCommToolProtocol::CTListenComplete(long) {
    /*
         6d0d8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d0dc:	ea6d4bce 	b	1bc001c <TCommTool::$ListenComplete(long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTAcceptStart(void)
 * Address: 0006d0e0
 */
TCommToolProtocol::CTAcceptStart(void) {
    /*
         6d0e0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d0e4:	ea6d3f5a 	b	1bbce54 <TCommTool::$AcceptStart(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTAcceptComplete(long)
 * Address: 0006d0e8
 */
TCommToolProtocol::CTAcceptComplete(long) {
    /*
         6d0e8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d0ec:	ea6d3f57 	b	1bbce50 <TCommTool::$AcceptComplete(long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTDisconnectComplete(long)
 * Address: 0006d0f0
 */
TCommToolProtocol::CTDisconnectComplete(long) {
    /*
         6d0f0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d0f4:	ea6d4bb2 	b	1bbffc4 <TCommTool::$DisconnectComplete(long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTTaskConstructor(void)
 * Address: 0006d0f8
 */
TCommToolProtocol::CTTaskConstructor(void) {
    /*
         6d0f8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d0fc:	ea6d4fe6 	b	1bc109c <TCommTool::$TaskConstructor(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTReleaseStart(void)
 * Address: 0006d100
 */
TCommToolProtocol::CTReleaseStart(void) {
    /*
         6d100:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d104:	ea6d4bd6 	b	1bc0064 <TCommTool::$ReleaseStart(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTReleaseComplete(long)
 * Address: 0006d108
 */
TCommToolProtocol::CTReleaseComplete(long) {
    /*
         6d108:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d10c:	ea6d4bd3 	b	1bc0060 <TCommTool::$ReleaseComplete(long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTBind(void)
 * Address: 0006d110
 */
TCommToolProtocol::CTBind(void) {
    /*
         6d110:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d114:	ea6d3f52 	b	1bbce64 <TCommTool::$Bind(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTUnbind(void)
 * Address: 0006d118
 */
TCommToolProtocol::CTUnbind(void) {
    /*
         6d118:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d11c:	ea6d4fe3 	b	1bc10b0 <TCommTool::$Unbind(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetProtAddr(void)
 * Address: 0006d120
 */
TCommToolProtocol::CTGetProtAddr(void) {
    /*
         6d120:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d124:	ea6d4bb1 	b	1bbfff0 <TCommTool::$GetProtAddr(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTProcessOption(TOption *, unsigned long, unsigned long)
 * Address: 0006d128
 */
TCommToolProtocol::CTProcessOption(TOption *, unsigned long, unsigned long) {
    /*
         6d128:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d12c:	ea66f4f9 	b	1a2a518 <TCommTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTAddDefaultOptions(TOptionArray *)
 * Address: 0006d130
 */
TCommToolProtocol::CTAddDefaultOptions(TOptionArray *) {
    /*
         6d130:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d134:	ea6d3f48 	b	1bbce5c <TCommTool::$AddDefaultOptions(TOptionArray *)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTAddCurrentOptions(TOptionArray *)
 * Address: 0006d138
 */
TCommToolProtocol::CTAddCurrentOptions(TOptionArray *) {
    /*
         6d138:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d13c:	ea6d3f45 	b	1bbce58 <TCommTool::$AddCurrentOptions(TOptionArray *)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTPutComplete(long, unsigned long)
 * Address: 0006d140
 */
TCommToolProtocol::CTPutComplete(long, unsigned long) {
    /*
         6d140:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d144:	ea6d4bc3 	b	1bc0058 <TCommTool::$PutComplete(long, unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTKillPutComplete(long)
 * Address: 0006d148
 */
TCommToolProtocol::CTKillPutComplete(long) {
    /*
         6d148:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d14c:	ea6d4baf 	b	1bc0010 <TCommTool::$KillPutComplete(long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTTaskDestructor(void)
 * Address: 0006d150
 */
TCommToolProtocol::CTTaskDestructor(void) {
    /*
         6d150:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d154:	ea6d4fd1 	b	1bc10a0 <TCommTool::$TaskDestructor(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetComplete(long, unsigned char, unsigned long)
 * Address: 0006d158
 */
TCommToolProtocol::CTGetComplete(long, unsigned char, unsigned long) {
    /*
         6d158:	e20220ff 	and	r2, r2, #255	; 0xff
         6d15c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d160:	ea6d4b9f 	b	1bbffe4 <TCommTool::$GetComplete(long, unsigned char, unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTKillGetComplete(long)
 * Address: 0006d164
 */
TCommToolProtocol::CTKillGetComplete(long) {
    /*
         6d164:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d168:	ea6d4ba7 	b	1bc000c <TCommTool::$KillGetComplete(long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTKillRequestComplete(CommToolRequestType, long)
 * Address: 0006d16c
 */
TCommToolProtocol::CTKillRequestComplete(CommToolRequestType, long) {
    /*
         6d16c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d170:	ea6d4ba7 	b	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTHoldAbort(void)
 * Address: 0006d174
 */
TCommToolProtocol::CTHoldAbort(void) {
    /*
         6d174:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d178:	ea6d4ba0 	b	1bc0000 <TCommTool::$HoldAbort(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTAllowAbort(void)
 * Address: 0006d17c
 */
TCommToolProtocol::CTAllowAbort(void) {
    /*
         6d17c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d180:	ea6d3f36 	b	1bbce60 <TCommTool::$AllowAbort(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTStartAbort(long)
 * Address: 0006d184
 */
TCommToolProtocol::CTStartAbort(long) {
    /*
         6d184:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d188:	ea6d4fc0 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTShouldAbort(unsigned long, long)
 * Address: 0006d18c
 */
TCommToolProtocol::CTShouldAbort(unsigned long, long) {
    /*
         6d18c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d190:	ea6d4fbd 	b	1bc108c <TCommTool::$ShouldAbort(unsigned long, long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTTerminateConnection(void)
 * Address: 0006d194
 */
TCommToolProtocol::CTTerminateConnection(void) {
    /*
         6d194:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d198:	ea6d4fc3 	b	1bc10ac <TCommTool::$TerminateConnection(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTTerminateComplete(void)
 * Address: 0006d19c
 */
TCommToolProtocol::CTTerminateComplete(void) {
    /*
         6d19c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d1a0:	ea6d4fc0 	b	1bc10a8 <TCommTool::$TerminateComplete(void)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTInitAsyncRPCMsg(TUAsyncMessage &, unsigned long)
 * Address: 0006d1a4
 */
TCommToolProtocol::CTInitAsyncRPCMsg(TUAsyncMessage &, unsigned long) {
    /*
         6d1a4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d1a8:	ea6d4b96 	b	1bc0008 <TCommTool::$InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetToolPort(unsigned long, TUPort &)
 * Address: 0006d1ac
 */
TCommToolProtocol::CTGetToolPort(unsigned long, TUPort &) {
    /*
         6d1ac:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d1b0:	ea6d4b8f 	b	1bbfff4 <TCommTool::$GetToolPort(unsigned long, TUPort &)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTFlushChannel(CommToolRequestType, long)
 * Address: 0006d1b4
 */
TCommToolProtocol::CTFlushChannel(CommToolRequestType, long) {
    /*
         6d1b4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d1b8:	ea6d4b86 	b	1bbffd8 <TCommTool::$FlushChannel(CommToolRequestType, long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTSetChannelFilter(CommToolRequestType, unsigned char)
 * Address: 0006d1bc
 */
TCommToolProtocol::CTSetChannelFilter(CommToolRequestType, unsigned char) {
    /*
         6d1bc:	e20220ff 	and	r2, r2, #255	; 0xff
         6d1c0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d1c4:	ea6d4fae 	b	1bc1084 <TCommTool::$SetChannelFilter(CommToolRequestType, unsigned char)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTRequestTypeToChannelNumber(CommToolRequestType)
 * Address: 0006d1c8
 */
TCommToolProtocol::CTRequestTypeToChannelNumber(CommToolRequestType) {
    /*
         6d1c8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d1cc:	ea6d4ba5 	b	1bc0068 <TCommTool::$RequestTypeToChannelNumber(CommToolRequestType)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTChannelNumberToRequestType(CommToolChannelNumber)
 * Address: 0006d1d0
 */
TCommToolProtocol::CTChannelNumberToRequestType(CommToolChannelNumber) {
    /*
         6d1d0:	e1a00001 	mov	r0, r1
         6d1d4:	ea0c7617 	b	38aa38 <C$$dtorvec$$Limit+0xc4>
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetToolConnectState(void)
 * Address: 0006d1d8
 */
TCommToolProtocol::CTGetToolConnectState(void) {
    /*
         6d1d8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d1dc:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6d1e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTSetToolConnectState(unsigned long)
 * Address: 0006d1e4
 */
TCommToolProtocol::CTSetToolConnectState(unsigned long) {
    /*
         6d1e4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d1e8:	e5a01018 	str	r1, [r0, #24]!	; fField24
         6d1ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetAbortErr(void)
 * Address: 0006d1f0
 */
TCommToolProtocol::CTGetAbortErr(void) {
    /*
         6d1f0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d1f4:	e5900024 	ldr	r0, [r0, #36]	; fField36
         6d1f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTSetAbortErr(long)
 * Address: 0006d1fc
 */
TCommToolProtocol::CTSetAbortErr(long) {
    /*
         6d1fc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d200:	e5a01024 	str	r1, [r0, #36]!	; fField36
         6d204:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetTerminationEvent(void)
 * Address: 0006d208
 */
TCommToolProtocol::CTGetTerminationEvent(void) {
    /*
         6d208:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d20c:	e5900028 	ldr	r0, [r0, #40]	; fField40
         6d210:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTSetTerminationEvent(unsigned long)
 * Address: 0006d214
 */
TCommToolProtocol::CTSetTerminationEvent(unsigned long) {
    /*
         6d214:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d218:	e5a01028 	str	r1, [r0, #40]!	; fField40
         6d21c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetToolId(void)
 * Address: 0006d220
 */
TCommToolProtocol::CTGetToolId(void) {
    /*
         6d220:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d224:	e5900204 	ldr	r0, [r0, #516]	; fField516
         6d228:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetConnectInfo(void)
 * Address: 0006d22c
 */
TCommToolProtocol::CTGetConnectInfo(void) {
    /*
         6d22c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d230:	e2800030 	add	r0, r0, #48	; 0x30
         6d234:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTSetConnectInfo(TCMOCTConnectInfo &)
 * Address: 0006d238
 */
TCommToolProtocol::CTSetConnectInfo(TCMOCTConnectInfo &) {
    /*
         6d238:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d23c:	e2800030 	add	r0, r0, #48	; 0x30
         6d240:	e8b1100c 	ldmia	r1!, {r2, r3, ip}
         6d244:	e8a0100c 	stmia	r0!, {r2, r3, ip}
         6d248:	e891100c 	ldmia	r1, {r2, r3, ip}
         6d24c:	e880100c 	stmia	r0, {r2, r3, ip}
         6d250:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetRequestSize(void)
 * Address: 0006d254
 */
TCommToolProtocol::CTGetRequestSize(void) {
    /*
         6d254:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d258:	e5900048 	ldr	r0, [r0, #72]	; fField72
         6d25c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetRequest(void)
 * Address: 0006d260
 */
TCommToolProtocol::CTGetRequest(void) {
    /*
         6d260:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d264:	e280004c 	add	r0, r0, #76	; 0x4c
         6d268:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetRequestListItem(unsigned char)
 * Address: 0006d26c
 */
TCommToolProtocol::CTGetRequestListItem(unsigned char) {
    /*
         6d26c:	e1a0c00d 	mov	ip, sp
         6d270:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6d274:	e24cb004 	sub	fp, ip, #4	; 0x4
         6d278:	e20220ff 	and	r2, r2, #255	; 0xff
         6d27c:	e5911010 	ldr	r1, [r1, #16]	; fField16
         6d280:	e0822082 	add	r2, r2, r2, lsl #1
         6d284:	e0811182 	add	r1, r1, r2, lsl #3
         6d288:	e2814094 	add	r4, r1, #148	; 0x94
         6d28c:	e3300000 	teq	r0, #0	; 0x0
         6d290:	1a000003 	bne	6d2a4 <TCommToolProtocol::CTGetRequestListItem(unsigned char)+0x38>
         6d294:	e3a00018 	mov	r0, #24	; 0x18
         6d298:	eb6d8526 	bl	1bce738 <$__nw(unsigned int)>
         6d29c:	e3300000 	teq	r0, #0	; 0x0
         6d2a0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         6d2a4:	e894501e 	ldmia	r4, {r1, r2, r3, r4, ip, lr}
         6d2a8:	e880501e 	stmia	r0, {r1, r2, r3, r4, ip, lr}
         6d2ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetConnectParms(void)
 * Address: 0006d2b0
 */
TCommToolProtocol::CTGetConnectParms(void) {
    /*
         6d2b0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d2b4:	e2800f4f 	add	r0, r0, #316	; 0x13c
         6d2b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetCMOTransportInfo(void)
 * Address: 0006d2bc
 */
TCommToolProtocol::CTGetCMOTransportInfo(void) {
    /*
         6d2bc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d2c0:	e2800f52 	add	r0, r0, #328	; 0x148
         6d2c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTSetCMOTransportInfo(TCMOTransportInfo &)
 * Address: 0006d2c8
 */
TCommToolProtocol::CTSetCMOTransportInfo(TCMOTransportInfo &) {
    /*
         6d2c8:	e92d4000 	stmdb	sp!, {lr}
         6d2cc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d2d0:	e280ef52 	add	lr, r0, #328	; 0x148
         6d2d4:	e1a00001 	mov	r0, r1
         6d2d8:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
         6d2dc:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
         6d2e0:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
         6d2e4:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
         6d2e8:	e890100c 	ldmia	r0, {r2, r3, ip}
         6d2ec:	e88e100c 	stmia	lr, {r2, r3, ip}
         6d2f0:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetRequestsToKill(void)
 * Address: 0006d2f4
 */
TCommToolProtocol::CTGetRequestsToKill(void) {
    /*
         6d2f4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d2f8:	e5900174 	ldr	r0, [r0, #372]	; fField372
         6d2fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTSetRequestsToKill(CommToolRequestType)
 * Address: 0006d300
 */
TCommToolProtocol::CTSetRequestsToKill(CommToolRequestType) {
    /*
         6d300:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d304:	e5a01174 	str	r1, [r0, #372]!	; fField372
         6d308:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTCompleteRequest(TUMsgToken &, long)
 * Address: 0006d30c
 */
TCommToolProtocol::CTCompleteRequest(TUMsgToken &, long) {
    /*
         6d30c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d310:	ea6d3ed8 	b	1bbce78 <TCommTool::$CompleteRequest(TUMsgToken &, long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetReceiveMessageBufSize(void)
 * Address: 0006d314
 */
TCommToolProtocol::CTGetReceiveMessageBufSize(void) {
    /*
         6d314:	e3a00040 	mov	r0, #64	; 0x40
         6d318:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetToolPort(void)
 * Address: 0006d31c
 */
TCommToolProtocol::CTGetToolPort(void) {
    /*
         6d31c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d320:	e280008c 	add	r0, r0, #140	; 0x8c
         6d324:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetControlOptionsInfo(void)
 * Address: 0006d328
 */
TCommToolProtocol::CTGetControlOptionsInfo(void) {
    /*
         6d328:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d32c:	e2800f5e 	add	r0, r0, #376	; 0x178
         6d330:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetGetBytesOptionsInfo(void)
 * Address: 0006d334
 */
TCommToolProtocol::CTGetGetBytesOptionsInfo(void) {
    /*
         6d334:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d338:	e2800e19 	add	r0, r0, #400	; 0x190
         6d33c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetPutBytesOptionsInfo(void)
 * Address: 0006d340
 */
TCommToolProtocol::CTGetPutBytesOptionsInfo(void) {
    /*
         6d340:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d344:	e2800f6a 	add	r0, r0, #424	; 0x1a8
         6d348:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetCurPutData(void)
 * Address: 0006d34c
 */
TCommToolProtocol::CTGetCurPutData(void) {
    /*
         6d34c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d350:	e59001c0 	ldr	r0, [r0, #448]	; fField448
         6d354:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetCurPutFrameData(void)
 * Address: 0006d358
 */
TCommToolProtocol::CTGetCurPutFrameData(void) {
    /*
         6d358:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d35c:	e5d001c4 	ldrb	r0, [r0, #452]	; fField452
         6d360:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetCurPutEndOfFrame(void)
 * Address: 0006d364
 */
TCommToolProtocol::CTGetCurPutEndOfFrame(void) {
    /*
         6d364:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d368:	e5d001c5 	ldrb	r0, [r0, #453]	; fField453
         6d36c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetCurGetData(void)
 * Address: 0006d370
 */
TCommToolProtocol::CTGetCurGetData(void) {
    /*
         6d370:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d374:	e59001c8 	ldr	r0, [r0, #456]	; fField456
         6d378:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetCurGetFrameData(void)
 * Address: 0006d37c
 */
TCommToolProtocol::CTGetCurGetFrameData(void) {
    /*
         6d37c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d380:	e5d001c7 	ldrb	r0, [r0, #455]	; fField455
         6d384:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTCompleteRequest(TUMsgToken &, long, TCommToolReply &)
 * Address: 0006d388
 */
TCommToolProtocol::CTCompleteRequest(TUMsgToken &, long, TCommToolReply &) {
    /*
         6d388:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d38c:	ea6d3eba 	b	1bbce7c <TCommTool::$CompleteRequest(TUMsgToken &, long, TCommToolReply &)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetCurGetNonBlocking(void)
 * Address: 0006d390
 */
TCommToolProtocol::CTGetCurGetNonBlocking(void) {
    /*
         6d390:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d394:	e5d001c6 	ldrb	r0, [r0, #454]	; fField454
         6d398:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetCurGetThreshold(void)
 * Address: 0006d39c
 */
TCommToolProtocol::CTGetCurGetThreshold(void) {
    /*
         6d39c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d3a0:	e59001cc 	ldr	r0, [r0, #460]	; fField460
         6d3a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetPassiveClaim(void)
 * Address: 0006d3a8
 */
TCommToolProtocol::CTGetPassiveClaim(void) {
    /*
         6d3a8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d3ac:	e5d001d0 	ldrb	r0, [r0, #464]	; fField464
         6d3b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTSetPassiveClaim(unsigned char)
 * Address: 0006d3b4
 */
TCommToolProtocol::CTSetPassiveClaim(unsigned char) {
    /*
         6d3b4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d3b8:	e5c011d0 	strb	r1, [r0, #464]	; fField464
         6d3bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetPassiveState(void)
 * Address: 0006d3c0
 */
TCommToolProtocol::CTGetPassiveState(void) {
    /*
         6d3c0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d3c4:	e5d001d1 	ldrb	r0, [r0, #465]	; fField465
         6d3c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTSetPassiveState(unsigned char)
 * Address: 0006d3cc
 */
TCommToolProtocol::CTSetPassiveState(unsigned char) {
    /*
         6d3cc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d3d0:	e5c011d1 	strb	r1, [r0, #465]	; fField465
         6d3d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetWaitingForResNotify(void)
 * Address: 0006d3d8
 */
TCommToolProtocol::CTGetWaitingForResNotify(void) {
    /*
         6d3d8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d3dc:	e5d001d2 	ldrb	r0, [r0, #466]	; fField466
         6d3e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTSetWaitingForResNotify(unsigned char)
 * Address: 0006d3e4
 */
TCommToolProtocol::CTSetWaitingForResNotify(unsigned char) {
    /*
         6d3e4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d3e8:	e5c011d2 	strb	r1, [r0, #466]	; fField466
         6d3ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTGetCurRequestOpCode(void)
 * Address: 0006d3f0
 */
TCommToolProtocol::CTGetCurRequestOpCode(void) {
    /*
         6d3f0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d3f4:	e59001d4 	ldr	r0, [r0, #468]	; fField468
         6d3f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommToolProtocol::CTCompleteRequest(CommToolChannelNumber, long)
 * Address: 0006d3fc
 */
TCommToolProtocol::CTCompleteRequest(CommToolChannelNumber, long) {
    /*
         6d3fc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d400:	ea6d3e9a 	b	1bbce70 <TCommTool::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTBindComplete(long)
 * Address: 0006d404
 */
TCommToolProtocol::CTBindComplete(long) {
    /*
         6d404:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d408:	ea66d776 	b	1a231e8 <TCommTool::$BindComplete(long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTUnbindComplete(long)
 * Address: 0006d40c
 */
TCommToolProtocol::CTUnbindComplete(long) {
    /*
         6d40c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d410:	ea66fc8b 	b	1a2c644 <TCommTool::$UnbindComplete(long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 0006d414
 */
TCommToolProtocol::CTProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         6d414:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d418:	ea66f43e 	b	1a2a518 <TCommTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTProcessOptionComplete(unsigned long)
 * Address: 0006d41c
 */
TCommToolProtocol::CTProcessOptionComplete(unsigned long) {
    /*
         6d41c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d420:	ea66f035 	b	1a294fc <TCommTool::$ProcessOptionComplete(unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 0006d424
 */
TCommToolProtocol::CTProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         6d424:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d428:	ea66f449 	b	1a2a554 <TCommTool::$ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTProcessPutBytesOptionComplete(unsigned long)
 * Address: 0006d42c
 */
TCommToolProtocol::CTProcessPutBytesOptionComplete(unsigned long) {
    /*
         6d42c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d430:	ea66f443 	b	1a2a544 <TCommTool::$ProcessPutBytesOptionComplete(unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 0006d434
 */
TCommToolProtocol::CTProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         6d434:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d438:	ea66f02c 	b	1a294f0 <TCommTool::$ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTProcessGetBytesOptionComplete(unsigned long)
 * Address: 0006d43c
 */
TCommToolProtocol::CTProcessGetBytesOptionComplete(unsigned long) {
    /*
         6d43c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d440:	ea66f026 	b	1a294e0 <TCommTool::$ProcessGetBytesOptionComplete(unsigned long)>
    */
}

/**
 * Symbol: TCommToolProtocol::CTResArbRelease(unsigned char *, unsigned char *)
 * Address: 0006d444
 */
TCommToolProtocol::CTResArbRelease(unsigned char *, unsigned char *) {
    /*
         6d444:	e5900010 	ldr	r0, [r0, #16]	; fField16
         6d448:	ea66f864 	b	1a2b5e0 <TCommTool::$ResArbRelease(unsigned char *, unsigned char *)>
    */
}

/**
 * Symbol: New__17TCommToolProtocolSFPc
 * Address: 0038344c
 */
void TCommToolProtocol::New() {
    /*
        38344c:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        383450:	e1a01000 	mov	r1, r0
        383454:	ebfffff5 	bl	383430 <ClassInfo__15TSerialEndpointSFv+0xd0>
        383458:	eb6130d1 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        38345c:	e1100000 	tst	r0, r0
        383460:	e28dd004 	add	sp, sp, #4	; 0x4
        383464:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        383468:	01a0f00e 	moveq	pc, lr
        38346c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383470:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383474:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TCommToolProtocol::Delete(void)
 * Address: 00383478
 */
TCommToolProtocol::Delete(void) {
    /*
        383478:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38347c:	e92d4001 	stmdb	sp!, {r0, lr}
        383480:	e28fe004 	add	lr, pc, #4	; 0x4
        383484:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383488:	e28cf00c 	add	pc, ip, #12	; 0xc
        38348c:	e8bd4001 	ldmia	sp!, {r0, lr}
        383490:	ea613d31 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TCommToolProtocol::TaskConstructor(void)
 * Address: 00383494
 */
TCommToolProtocol::TaskConstructor(void) {
    /*
        383494:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383498:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38349c:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TCommToolProtocol::TaskDestructor(void)
 * Address: 003834a0
 */
TCommToolProtocol::TaskDestructor(void) {
    /*
        3834a0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3834a4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3834a8:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TCommToolProtocol::GetToolName(void)
 * Address: 003834ac
 */
TCommToolProtocol::GetToolName(void) {
    /*
        3834ac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3834b0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3834b4:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TCommToolProtocol::HandleRequest(TUMsgToken &, unsigned long)
 * Address: 003834b8
 */
TCommToolProtocol::HandleRequest(TUMsgToken &, unsigned long) {
    /*
        3834b8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3834bc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3834c0:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TCommToolProtocol::HandleReply(unsigned long, unsigned long)
 * Address: 003834c4
 */
TCommToolProtocol::HandleReply(unsigned long, unsigned long) {
    /*
        3834c4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3834c8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3834cc:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TCommToolProtocol::DoControl(unsigned long, unsigned long)
 * Address: 003834d0
 */
TCommToolProtocol::DoControl(unsigned long, unsigned long) {
    /*
        3834d0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3834d4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3834d8:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TCommToolProtocol::DoKillControl(unsigned long)
 * Address: 003834dc
 */
TCommToolProtocol::DoKillControl(unsigned long) {
    /*
        3834dc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3834e0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3834e4:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TCommToolProtocol::GetCommEvent(void)
 * Address: 003834e8
 */
TCommToolProtocol::GetCommEvent(void) {
    /*
        3834e8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3834ec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3834f0:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TCommToolProtocol::DoKillGetCommEvent(void)
 * Address: 003834f4
 */
TCommToolProtocol::DoKillGetCommEvent(void) {
    /*
        3834f4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3834f8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3834fc:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TCommToolProtocol::PostCommEvent(TCommToolGetEventReply &, long)
 * Address: 00383500
 */
TCommToolProtocol::PostCommEvent(TCommToolGetEventReply &, long) {
    /*
        383500:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383504:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383508:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: TCommToolProtocol::OpenStart(TOptionArray *)
 * Address: 0038350c
 */
TCommToolProtocol::OpenStart(TOptionArray *) {
    /*
        38350c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383510:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383514:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: TCommToolProtocol::OpenComplete(void)
 * Address: 00383518
 */
TCommToolProtocol::OpenComplete(void) {
    /*
        383518:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38351c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383520:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: TCommToolProtocol::Close(void)
 * Address: 00383524
 */
TCommToolProtocol::Close(void) {
    /*
        383524:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383528:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38352c:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: TCommToolProtocol::CloseComplete(long)
 * Address: 00383530
 */
TCommToolProtocol::CloseComplete(long) {
    /*
        383530:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383534:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383538:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: TCommToolProtocol::ConnectStart(void)
 * Address: 0038353c
 */
TCommToolProtocol::ConnectStart(void) {
    /*
        38353c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383540:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383544:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: TCommToolProtocol::ConnectComplete(long)
 * Address: 00383548
 */
TCommToolProtocol::ConnectComplete(long) {
    /*
        383548:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38354c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383550:	e28cf04c 	add	pc, ip, #76	; 0x4c
    */
}

/**
 * Symbol: TCommToolProtocol::ListenStart(void)
 * Address: 00383554
 */
TCommToolProtocol::ListenStart(void) {
    /*
        383554:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383558:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38355c:	e28cf050 	add	pc, ip, #80	; 0x50
    */
}

/**
 * Symbol: TCommToolProtocol::ListenComplete(long)
 * Address: 00383560
 */
TCommToolProtocol::ListenComplete(long) {
    /*
        383560:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383564:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383568:	e28cf054 	add	pc, ip, #84	; 0x54
    */
}

/**
 * Symbol: TCommToolProtocol::AcceptStart(void)
 * Address: 0038356c
 */
TCommToolProtocol::AcceptStart(void) {
    /*
        38356c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383570:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383574:	e28cf058 	add	pc, ip, #88	; 0x58
    */
}

/**
 * Symbol: TCommToolProtocol::AcceptComplete(long)
 * Address: 00383578
 */
TCommToolProtocol::AcceptComplete(long) {
    /*
        383578:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38357c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383580:	e28cf05c 	add	pc, ip, #92	; 0x5c
    */
}

/**
 * Symbol: TCommToolProtocol::DisconnectComplete(long)
 * Address: 00383584
 */
TCommToolProtocol::DisconnectComplete(long) {
    /*
        383584:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383588:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38358c:	e28cf060 	add	pc, ip, #96	; 0x60
    */
}

/**
 * Symbol: TCommToolProtocol::ReleaseStart(void)
 * Address: 00383590
 */
TCommToolProtocol::ReleaseStart(void) {
    /*
        383590:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383594:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383598:	e28cf064 	add	pc, ip, #100	; 0x64
    */
}

/**
 * Symbol: TCommToolProtocol::ReleaseComplete(long)
 * Address: 0038359c
 */
TCommToolProtocol::ReleaseComplete(long) {
    /*
        38359c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3835a0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3835a4:	e28cf068 	add	pc, ip, #104	; 0x68
    */
}

/**
 * Symbol: TCommToolProtocol::Bind(void)
 * Address: 003835a8
 */
TCommToolProtocol::Bind(void) {
    /*
        3835a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3835ac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3835b0:	e28cf06c 	add	pc, ip, #108	; 0x6c
    */
}

/**
 * Symbol: TCommToolProtocol::Unbind(void)
 * Address: 003835b4
 */
TCommToolProtocol::Unbind(void) {
    /*
        3835b4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3835b8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3835bc:	e28cf070 	add	pc, ip, #112	; 0x70
    */
}

/**
 * Symbol: TCommToolProtocol::GetProtAddr(void)
 * Address: 003835c0
 */
TCommToolProtocol::GetProtAddr(void) {
    /*
        3835c0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3835c4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3835c8:	e28cf074 	add	pc, ip, #116	; 0x74
    */
}

/**
 * Symbol: TCommToolProtocol::ProcessOption(TOption *, unsigned long, unsigned long)
 * Address: 003835cc
 */
TCommToolProtocol::ProcessOption(TOption *, unsigned long, unsigned long) {
    /*
        3835cc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3835d0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3835d4:	e28cf078 	add	pc, ip, #120	; 0x78
    */
}

/**
 * Symbol: TCommToolProtocol::AddDefaultOptions(TOptionArray *)
 * Address: 003835d8
 */
TCommToolProtocol::AddDefaultOptions(TOptionArray *) {
    /*
        3835d8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3835dc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3835e0:	e28cf07c 	add	pc, ip, #124	; 0x7c
    */
}

/**
 * Symbol: TCommToolProtocol::AddCurrentOptions(TOptionArray *)
 * Address: 003835e4
 */
TCommToolProtocol::AddCurrentOptions(TOptionArray *) {
    /*
        3835e4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3835e8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3835ec:	e28cf080 	add	pc, ip, #128	; 0x80
    */
}

/**
 * Symbol: TCommToolProtocol::PutBytes(CBufferList *)
 * Address: 003835f0
 */
TCommToolProtocol::PutBytes(CBufferList *) {
    /*
        3835f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3835f4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3835f8:	e28cf084 	add	pc, ip, #132	; 0x84
    */
}

/**
 * Symbol: TCommToolProtocol::PutFramedBytes(CBufferList *, unsigned char)
 * Address: 003835fc
 */
TCommToolProtocol::PutFramedBytes(CBufferList *, unsigned char) {
    /*
        3835fc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383600:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383604:	e28cf088 	add	pc, ip, #136	; 0x88
    */
}

/**
 * Symbol: TCommToolProtocol::PutComplete(long, unsigned long)
 * Address: 00383608
 */
TCommToolProtocol::PutComplete(long, unsigned long) {
    /*
        383608:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38360c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383610:	e28cf08c 	add	pc, ip, #140	; 0x8c
    */
}

/**
 * Symbol: TCommToolProtocol::KillPut(void)
 * Address: 00383614
 */
TCommToolProtocol::KillPut(void) {
    /*
        383614:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383618:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38361c:	e28cf090 	add	pc, ip, #144	; 0x90
    */
}

/**
 * Symbol: TCommToolProtocol::KillPutComplete(long)
 * Address: 00383620
 */
TCommToolProtocol::KillPutComplete(long) {
    /*
        383620:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383624:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383628:	e28cf094 	add	pc, ip, #148	; 0x94
    */
}

/**
 * Symbol: TCommToolProtocol::GetBytes(CBufferList *)
 * Address: 0038362c
 */
TCommToolProtocol::GetBytes(CBufferList *) {
    /*
        38362c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383630:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383634:	e28cf098 	add	pc, ip, #152	; 0x98
    */
}

/**
 * Symbol: TCommToolProtocol::GetFramedBytes(CBufferList *)
 * Address: 00383638
 */
TCommToolProtocol::GetFramedBytes(CBufferList *) {
    /*
        383638:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38363c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383640:	e28cf09c 	add	pc, ip, #156	; 0x9c
    */
}

/**
 * Symbol: TCommToolProtocol::GetComplete(long, unsigned char, unsigned long)
 * Address: 00383644
 */
TCommToolProtocol::GetComplete(long, unsigned char, unsigned long) {
    /*
        383644:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383648:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38364c:	e28cf0a0 	add	pc, ip, #160	; 0xa0
    */
}

/**
 * Symbol: TCommToolProtocol::GetBytesImmediate(CBufferList *, long)
 * Address: 00383650
 */
TCommToolProtocol::GetBytesImmediate(CBufferList *, long) {
    /*
        383650:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383654:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383658:	e28cf0a4 	add	pc, ip, #164	; 0xa4
    */
}

/**
 * Symbol: TCommToolProtocol::KillGet(void)
 * Address: 0038365c
 */
TCommToolProtocol::KillGet(void) {
    /*
        38365c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383660:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383664:	e28cf0a8 	add	pc, ip, #168	; 0xa8
    */
}

/**
 * Symbol: TCommToolProtocol::KillGetComplete(long)
 * Address: 00383668
 */
TCommToolProtocol::KillGetComplete(long) {
    /*
        383668:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38366c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383670:	e28cf0ac 	add	pc, ip, #172	; 0xac
    */
}

/**
 * Symbol: TCommToolProtocol::TerminateConnection(void)
 * Address: 00383674
 */
TCommToolProtocol::TerminateConnection(void) {
    /*
        383674:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383678:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38367c:	e28cf0b0 	add	pc, ip, #176	; 0xb0
    */
}

/**
 * Symbol: TCommToolProtocol::TerminateComplete(void)
 * Address: 00383680
 */
TCommToolProtocol::TerminateComplete(void) {
    /*
        383680:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383684:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383688:	e28cf0b4 	add	pc, ip, #180	; 0xb4
    */
}

/**
 * Symbol: TCommToolProtocol::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))
 * Address: 0038368c
 */
TCommToolProtocol::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *)) {
    /*
        38368c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383690:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383694:	e28cf0b8 	add	pc, ip, #184	; 0xb8
    */
}

/**
 * Symbol: TCommToolProtocol::SetChannelFilter(int, unsigned char)
 * Address: 00383698
 */
TCommToolProtocol::SetChannelFilter(int, unsigned char) {
    /*
        383698:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38369c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3836a0:	e28cf0bc 	add	pc, ip, #188	; 0xbc
    */
}

/**
 * Symbol: TCommToolProtocol::BindStart(void)
 * Address: 003836a4
 */
TCommToolProtocol::BindStart(void) {
    /*
        3836a4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3836a8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3836ac:	e28cf0c0 	add	pc, ip, #192	; 0xc0
    */
}

/**
 * Symbol: TCommToolProtocol::BindComplete(long)
 * Address: 003836b0
 */
TCommToolProtocol::BindComplete(long) {
    /*
        3836b0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3836b4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3836b8:	e28cf0c4 	add	pc, ip, #196	; 0xc4
    */
}

/**
 * Symbol: TCommToolProtocol::UnbindStart(void)
 * Address: 003836bc
 */
TCommToolProtocol::UnbindStart(void) {
    /*
        3836bc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3836c0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3836c4:	e28cf0c8 	add	pc, ip, #200	; 0xc8
    */
}

/**
 * Symbol: TCommToolProtocol::UnbindComplete(long)
 * Address: 003836c8
 */
TCommToolProtocol::UnbindComplete(long) {
    /*
        3836c8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3836cc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3836d0:	e28cf0cc 	add	pc, ip, #204	; 0xcc
    */
}

/**
 * Symbol: TCommToolProtocol::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 003836d4
 */
TCommToolProtocol::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        3836d4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3836d8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3836dc:	e28cf0d0 	add	pc, ip, #208	; 0xd0
    */
}

/**
 * Symbol: TCommToolProtocol::ProcessOptionComplete(unsigned long)
 * Address: 003836e0
 */
TCommToolProtocol::ProcessOptionComplete(unsigned long) {
    /*
        3836e0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3836e4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3836e8:	e28cf0d4 	add	pc, ip, #212	; 0xd4
    */
}

/**
 * Symbol: TCommToolProtocol::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 003836ec
 */
TCommToolProtocol::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        3836ec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3836f0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3836f4:	e28cf0d8 	add	pc, ip, #216	; 0xd8
    */
}

/**
 * Symbol: TCommToolProtocol::ProcessPutBytesOptionComplete(unsigned long)
 * Address: 003836f8
 */
TCommToolProtocol::ProcessPutBytesOptionComplete(unsigned long) {
    /*
        3836f8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3836fc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383700:	e28cf0dc 	add	pc, ip, #220	; 0xdc
    */
}

/**
 * Symbol: TCommToolProtocol::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 00383704
 */
TCommToolProtocol::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        383704:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383708:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38370c:	e28cf0e0 	add	pc, ip, #224	; 0xe0
    */
}

/**
 * Symbol: TCommToolProtocol::ProcessGetBytesOptionComplete(unsigned long)
 * Address: 00383710
 */
TCommToolProtocol::ProcessGetBytesOptionComplete(unsigned long) {
    /*
        383710:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383714:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383718:	e28cf0e4 	add	pc, ip, #228	; 0xe4
    */
}

/**
 * Symbol: TCommToolProtocol::ResArbRelease(unsigned char *, unsigned char *)
 * Address: 0038371c
 */
TCommToolProtocol::ResArbRelease(unsigned char *, unsigned char *) {
    /*
        38371c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383720:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383724:	e28cf0e8 	add	pc, ip, #232	; 0xe8
    */
}

/**
 * Symbol: TCommToolProtocol::ResArbReleaseStart(unsigned char *, unsigned char *)
 * Address: 00383728
 */
TCommToolProtocol::ResArbReleaseStart(unsigned char *, unsigned char *) {
    /*
        383728:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38372c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383730:	e28cf0ec 	add	pc, ip, #236	; 0xec
    */
}

/**
 * Symbol: TCommToolProtocol::ResArbReleaseComplete(long)
 * Address: 00383734
 */
TCommToolProtocol::ResArbReleaseComplete(long) {
    /*
        383734:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383738:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38373c:	e28cf0f0 	add	pc, ip, #240	; 0xf0
    */
}

/**
 * Symbol: TCommToolProtocol::ResArbClaimNotification(unsigned char *, unsigned char *)
 * Address: 00383740
 */
TCommToolProtocol::ResArbClaimNotification(unsigned char *, unsigned char *) {
    /*
        383740:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383744:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383748:	e28cf0f4 	add	pc, ip, #244	; 0xf4
    */
}

/**
 * Symbol: TCommToolProtocol::ForwardOptions(void)
 * Address: 0038374c
 */
TCommToolProtocol::ForwardOptions(void) {
    /*
        38374c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383750:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383754:	e28cf0f8 	add	pc, ip, #248	; 0xf8
    */
}

/**
 * Symbol: TCommToolProtocol::HandleInternalEvent(void)
 * Address: 00383758
 */
TCommToolProtocol::HandleInternalEvent(void) {
    /*
        383758:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38375c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383760:	e28cf0fc 	add	pc, ip, #252	; 0xfc
        383764:	e1a0000f 	mov	r0, pc
        383768:	e1a0f00e 	mov	pc, lr
        38376c:	50436f6e 	subpl	r6, r3, lr, ror #30
        383770:	6e656374 	mcrvs	3, 3, r6, cr5, cr4, {3}
        383774:	696f6e45 	stmvsdb	pc!, {r0, r2, r6, r9, sl, fp, sp, lr}^
        383778:	6e640000 	cdpvs	0, 6, cr0, cr4, cr0, {0}
    */
}

