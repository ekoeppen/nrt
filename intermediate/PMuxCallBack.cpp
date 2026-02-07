#include "include/PMuxCallBack.h"

/**
 * Symbol: New__12PMuxCallBackSFPc
 * Address: 00383950
 */
void PMuxCallBack::New() {
    /*
        383950:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        383954:	e1a01000 	mov	r1, r0
        383958:	ebfffff6 	bl	383938 <PConnectionEnd::ForwardOptions(void)+0xc>
        38395c:	eb612f90 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        383960:	e1100000 	tst	r0, r0
        383964:	e28dd004 	add	sp, sp, #4	; 0x4
        383968:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        38396c:	01a0f00e 	moveq	pc, lr
        383970:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383974:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383978:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PMuxCallBack::Delete(void)
 * Address: 0038397c
 */
PMuxCallBack::Delete(void) {
    /*
        38397c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383980:	e92d4001 	stmdb	sp!, {r0, lr}
        383984:	e28fe004 	add	lr, pc, #4	; 0x4
        383988:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38398c:	e28cf00c 	add	pc, ip, #12	; 0xc
        383990:	e8bd4001 	ldmia	sp!, {r0, lr}
        383994:	ea613bf0 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PMuxCallBack::Init(TMuxTool *)
 * Address: 00383998
 */
PMuxCallBack::Init(TMuxTool *) {
    /*
        383998:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38399c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3839a0:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: PMuxCallBack::OpenMuxComplete(long)
 * Address: 003839a4
 */
PMuxCallBack::OpenMuxComplete(long) {
    /*
        3839a4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3839a8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3839ac:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: PMuxCallBack::CloseMuxComplete(long)
 * Address: 003839b0
 */
PMuxCallBack::CloseMuxComplete(long) {
    /*
        3839b0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3839b4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3839b8:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: PMuxCallBack::HandleRequest(unsigned char *, TUMsgToken &, unsigned long)
 * Address: 003839bc
 */
PMuxCallBack::HandleRequest(unsigned char *, TUMsgToken &, unsigned long) {
    /*
        3839bc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3839c0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3839c4:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: PMuxCallBack::HandleReply(unsigned long, unsigned long)
 * Address: 003839c8
 */
PMuxCallBack::HandleReply(unsigned long, unsigned long) {
    /*
        3839c8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3839cc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3839d0:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: PMuxCallBack::GetMuxPort(void)
 * Address: 003839d4
 */
PMuxCallBack::GetMuxPort(void) {
    /*
        3839d4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3839d8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3839dc:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: PMuxCallBack::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)
 * Address: 003839e0
 */
PMuxCallBack::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long) {
    /*
        3839e0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3839e4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3839e8:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: PMuxCallBack::GetTimerPeriod(void)
 * Address: 003839ec
 */
PMuxCallBack::GetTimerPeriod(void) {
    /*
        3839ec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3839f0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3839f4:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: PMuxCallBack::SetTimerPeriod(unsigned long)
 * Address: 003839f8
 */
PMuxCallBack::SetTimerPeriod(unsigned long) {
    /*
        3839f8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3839fc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383a00:	e28cf030 	add	pc, ip, #48	; 0x30
        383a04:	00000000 	andeq	r0, r0, r0
        383a08:	00000048 	andeq	r0, r0, r8, asr #32
        383a0c:	00000058 	andeq	r0, r0, r8, asr r0
        383a10:	00000061 	andeq	r0, r0, r1, rrx
        383a14:	00000060 	andeq	r0, r0, r0, rrx
        383a18:	00000090 	muleq	r0, r0, r0
        383a1c:	eaf742c4 	b	154534 <Sizeof__19PMuxCallBackWrapperSFv>
        383a28:	eaf742c3 	b	15453c <PMuxCallBackWrapper::New(void)>
        383a2c:	eaf742ca 	b	15455c <PMuxCallBackWrapper::Delete(void)>
        383a30:	00020000 	andeq	r0, r2, r0
        383a3c:	ea000001 	b	383a48 <ClassInfo__19PMuxCallBackWrapperSFv+0x8>
    */
}

