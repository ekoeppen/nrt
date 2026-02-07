#include "include/PMuxCallBackWrapper.h"

/**
 * Symbol: Sizeof__19PMuxCallBackWrapperSFv
 * Address: 00154534
 */
void PMuxCallBackWrapper::Sizeof() {
    /*
        154534:	e3a00014 	mov	r0, #20	; 0x14
        154538:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PMuxCallBackWrapper::New(void)
 * Address: 0015453c
 */
PMuxCallBackWrapper::New(void) {
    /*
        15453c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PMuxCallBackWrapper::GetTimerPeriod(void)
 * Address: 00154540
 */
PMuxCallBackWrapper::GetTimerPeriod(void) {
    /*
        154540:	e5900010 	ldr	r0, [r0, #16]	; fField16
        154544:	e59000c0 	ldr	r0, [r0, #192]	; fField192
        154548:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PMuxCallBackWrapper::SetTimerPeriod(unsigned long)
 * Address: 0015454c
 */
PMuxCallBackWrapper::SetTimerPeriod(unsigned long) {
    /*
        15454c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        154550:	e58010c0 	str	r1, [r0, #192]	; fField192
        154554:	e5a010c4 	str	r1, [r0, #196]!	; fField196
        154558:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PMuxCallBackWrapper::Delete(void)
 * Address: 0015455c
 */
PMuxCallBackWrapper::Delete(void) {
    /*
        15455c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PMuxCallBackWrapper::Init(TMuxTool *)
 * Address: 00154560
 */
PMuxCallBackWrapper::Init(TMuxTool *) {
    /*
        154560:	e5a01010 	str	r1, [r0, #16]!	; fField16
        154564:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PMuxCallBackWrapper::OpenMuxComplete(long)
 * Address: 00154568
 */
PMuxCallBackWrapper::OpenMuxComplete(long) {
    /*
        154568:	e5900010 	ldr	r0, [r0, #16]	; fField16
        15456c:	ea634fae 	b	1a2842c <TMuxTool::$OpenMuxComplete(long)>
    */
}

/**
 * Symbol: PMuxCallBackWrapper::CloseMuxComplete(long)
 * Address: 00154570
 */
PMuxCallBackWrapper::CloseMuxComplete(long) {
    /*
        154570:	e5900010 	ldr	r0, [r0, #16]	; fField16
        154574:	ea633f3e 	b	1a24274 <TMuxTool::$CloseMuxComplete(long)>
    */
}

/**
 * Symbol: PMuxCallBackWrapper::HandleRequest(unsigned char *, TUMsgToken &, unsigned long)
 * Address: 00154578
 */
PMuxCallBackWrapper::HandleRequest(unsigned char *, TUMsgToken &, unsigned long) {
    /*
        154578:	e5900010 	ldr	r0, [r0, #16]	; fField16
        15457c:	ea634b89 	b	1a273a8 <TMuxTool::$HandleRequest(unsigned char *, TUMsgToken &, unsigned long)>
    */
}

/**
 * Symbol: PMuxCallBackWrapper::HandleReply(unsigned long, unsigned long)
 * Address: 00154580
 */
PMuxCallBackWrapper::HandleReply(unsigned long, unsigned long) {
    /*
        154580:	e5900010 	ldr	r0, [r0, #16]	; fField16
        154584:	ea634b84 	b	1a2739c <TMuxTool::$HandleReply(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: PMuxCallBackWrapper::GetMuxPort(void)
 * Address: 00154588
 */
PMuxCallBackWrapper::GetMuxPort(void) {
    /*
        154588:	e5900010 	ldr	r0, [r0, #16]	; fField16
        15458c:	e280008c 	add	r0, r0, #140	; 0x8c
        154590:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PMuxCallBackWrapper::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)
 * Address: 00154594
 */
PMuxCallBackWrapper::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long) {
    /*
        154594:	e5900010 	ldr	r0, [r0, #16]	; fField16
        154598:	ea634b8a 	b	1a273c8 <TMuxTool::$InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
    */
}

/**
 * Symbol: ClassInfo__19PMuxCallBackWrapperSFv
 * Address: 00383a40
 */
void PMuxCallBackWrapper::ClassInfo() {
    /*
        383a40:	e24f0044 	sub	r0, pc, #68	; 0x44
        383a44:	e1a0f00e 	mov	pc, lr
        383a48:	e3a00000 	mov	r0, #0	; 0x0
        383a4c:	e1a0f00e 	mov	pc, lr
        383a50:	504d7578 	subpl	r7, sp, r8, ror r5
        383a54:	43616c6c 	cmnmi	r1, #27648	; 0x6c00
        383a58:	4261636b 	rsbmi	r6, r1, #-1409286143	; 0xac000001
        383a5c:	57726170 	undefined
        383a60:	70657200 	rsbvc	r7, r5, r0, lsl #4
        383a64:	504d7578 	subpl	r7, sp, r8, ror r5
        383a68:	43616c6c 	cmnmi	r1, #27648	; 0x6c00
        383a6c:	4261636b 	rsbmi	r6, r1, #-1409286143	; 0xac000001
        383a78:	eafffff0 	b	383a40 <ClassInfo__19PMuxCallBackWrapperSFv>
        383a7c:	eaf742ae 	b	15453c <PMuxCallBackWrapper::New(void)>
        383a80:	eaf742b5 	b	15455c <PMuxCallBackWrapper::Delete(void)>
        383a84:	ea5a8e53 	b	1a273d8 <PMuxCallBackWrapper::$Init(TMuxTool *)>
        383a88:	eaf742b6 	b	154568 <PMuxCallBackWrapper::OpenMuxComplete(long)>
        383a8c:	ea5a81f7 	b	1a24270 <PMuxCallBackWrapper::$CloseMuxComplete(long)>
        383a90:	eaf742b8 	b	154578 <PMuxCallBackWrapper::HandleRequest(unsigned char *, TUMsgToken &, unsigned long)>
        383a94:	eaf742b9 	b	154580 <PMuxCallBackWrapper::HandleReply(unsigned long, unsigned long)>
        383a98:	eaf742ba 	b	154588 <PMuxCallBackWrapper::GetMuxPort(void)>
        383a9c:	eaf742bc 	b	154594 <PMuxCallBackWrapper::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
        383aa0:	eaf742a6 	b	154540 <PMuxCallBackWrapper::GetTimerPeriod(void)>
        383aa4:	eaf742a8 	b	15454c <PMuxCallBackWrapper::SetTimerPeriod(unsigned long)>
        383aa8:	e1a0000f 	mov	r0, pc
        383aac:	e1a0f00e 	mov	pc, lr
        383ab0:	504d7578 	subpl	r7, sp, r8, ror r5
        383ab4:	53657276 	cmnpl	r5, #1610612743	; 0x60000007
        383ab8:	69636500 	stmvsdb	r3!, {r8, sl, sp, lr}^
    */
}

