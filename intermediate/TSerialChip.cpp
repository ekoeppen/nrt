#include "include/TSerialChip.h"

/**
 * Symbol: New__11TSerialChipSFPc
 * Address: 00384b0c
 */
void TSerialChip::New() {
    /*
        384b0c:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        384b10:	e1a01000 	mov	r1, r0
        384b14:	ebfffff7 	bl	384af8 <ClassInfo__18TSerialChipVoyagerSFv+0xf8>
        384b18:	eb612b21 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        384b1c:	e1100000 	tst	r0, r0
        384b20:	e28dd004 	add	sp, sp, #4	; 0x4
        384b24:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        384b28:	01a0f00e 	moveq	pc, lr
        384b2c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384b30:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384b34:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TSerialChip::Delete(void)
 * Address: 00384b38
 */
TSerialChip::Delete(void) {
    /*
        384b38:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384b3c:	e92d4001 	stmdb	sp!, {r0, lr}
        384b40:	e28fe004 	add	lr, pc, #4	; 0x4
        384b44:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384b48:	e28cf00c 	add	pc, ip, #12	; 0xc
        384b4c:	e8bd4001 	ldmia	sp!, {r0, lr}
        384b50:	ea613781 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TSerialChip::InstallChipHandler(void *, SCCChannelInts *)
 * Address: 00384b54
 */
TSerialChip::InstallChipHandler(void *, SCCChannelInts *) {
    /*
        384b54:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384b58:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384b5c:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TSerialChip::RemoveChipHandler(void *)
 * Address: 00384b60
 */
TSerialChip::RemoveChipHandler(void *) {
    /*
        384b60:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384b64:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384b68:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TSerialChip::PutByte(unsigned char)
 * Address: 00384b6c
 */
TSerialChip::PutByte(unsigned char) {
    /*
        384b6c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384b70:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384b74:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TSerialChip::ResetTxBEmpty(void)
 * Address: 00384b78
 */
TSerialChip::ResetTxBEmpty(void) {
    /*
        384b78:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384b7c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384b80:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TSerialChip::GetByte(void)
 * Address: 00384b84
 */
TSerialChip::GetByte(void) {
    /*
        384b84:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384b88:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384b8c:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TSerialChip::TxBufEmpty(void)
 * Address: 00384b90
 */
TSerialChip::TxBufEmpty(void) {
    /*
        384b90:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384b94:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384b98:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TSerialChip::RxBufFull(void)
 * Address: 00384b9c
 */
TSerialChip::RxBufFull(void) {
    /*
        384b9c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384ba0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384ba4:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TSerialChip::GetRxErrorStatus(void)
 * Address: 00384ba8
 */
TSerialChip::GetRxErrorStatus(void) {
    /*
        384ba8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384bac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384bb0:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TSerialChip::GetSerialStatus(void)
 * Address: 00384bb4
 */
TSerialChip::GetSerialStatus(void) {
    /*
        384bb4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384bb8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384bbc:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TSerialChip::ResetSerialStatus(void)
 * Address: 00384bc0
 */
TSerialChip::ResetSerialStatus(void) {
    /*
        384bc0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384bc4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384bc8:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: TSerialChip::SetSerialOutputs(unsigned long)
 * Address: 00384bcc
 */
TSerialChip::SetSerialOutputs(unsigned long) {
    /*
        384bcc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384bd0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384bd4:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: TSerialChip::ClearSerialOutputs(unsigned long)
 * Address: 00384bd8
 */
TSerialChip::ClearSerialOutputs(unsigned long) {
    /*
        384bd8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384bdc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384be0:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: TSerialChip::GetSerialOutputs(void)
 * Address: 00384be4
 */
TSerialChip::GetSerialOutputs(void) {
    /*
        384be4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384be8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384bec:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: TSerialChip::PowerOff(void)
 * Address: 00384bf0
 */
TSerialChip::PowerOff(void) {
    /*
        384bf0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384bf4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384bf8:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: TSerialChip::PowerOn(void)
 * Address: 00384bfc
 */
TSerialChip::PowerOn(void) {
    /*
        384bfc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c00:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c04:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: TSerialChip::PowerIsOn(void)
 * Address: 00384c08
 */
TSerialChip::PowerIsOn(void) {
    /*
        384c08:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c0c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c10:	e28cf04c 	add	pc, ip, #76	; 0x4c
    */
}

/**
 * Symbol: TSerialChip::SetInterruptEnable(unsigned char)
 * Address: 00384c14
 */
TSerialChip::SetInterruptEnable(unsigned char) {
    /*
        384c14:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c18:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c1c:	e28cf050 	add	pc, ip, #80	; 0x50
    */
}

/**
 * Symbol: TSerialChip::Reset(void)
 * Address: 00384c20
 */
TSerialChip::Reset(void) {
    /*
        384c20:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c24:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c28:	e28cf054 	add	pc, ip, #84	; 0x54
    */
}

/**
 * Symbol: TSerialChip::SetBreak(unsigned char)
 * Address: 00384c2c
 */
TSerialChip::SetBreak(unsigned char) {
    /*
        384c2c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c30:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c34:	e28cf058 	add	pc, ip, #88	; 0x58
    */
}

/**
 * Symbol: TSerialChip::SetSpeed(unsigned long)
 * Address: 00384c38
 */
TSerialChip::SetSpeed(unsigned long) {
    /*
        384c38:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c3c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c40:	e28cf05c 	add	pc, ip, #92	; 0x5c
    */
}

/**
 * Symbol: TSerialChip::SetIOParms(TCMOSerialIOParms *)
 * Address: 00384c44
 */
TSerialChip::SetIOParms(TCMOSerialIOParms *) {
    /*
        384c44:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c48:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c4c:	e28cf060 	add	pc, ip, #96	; 0x60
    */
}

/**
 * Symbol: TSerialChip::Reconfigure(void)
 * Address: 00384c50
 */
TSerialChip::Reconfigure(void) {
    /*
        384c50:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c54:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c58:	e28cf064 	add	pc, ip, #100	; 0x64
    */
}

/**
 * Symbol: TSerialChip::Init(TCardSocket *, TCardHandler *, unsigned char *)
 * Address: 00384c5c
 */
TSerialChip::Init(TCardSocket *, TCardHandler *, unsigned char *) {
    /*
        384c5c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c60:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c64:	e28cf068 	add	pc, ip, #104	; 0x68
    */
}

/**
 * Symbol: TSerialChip::CardRemoved(void)
 * Address: 00384c68
 */
TSerialChip::CardRemoved(void) {
    /*
        384c68:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c6c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c70:	e28cf06c 	add	pc, ip, #108	; 0x6c
    */
}

/**
 * Symbol: TSerialChip::GetFeatures(void)
 * Address: 00384c74
 */
TSerialChip::GetFeatures(void) {
    /*
        384c74:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c78:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c7c:	e28cf070 	add	pc, ip, #112	; 0x70
    */
}

/**
 * Symbol: TSerialChip::InitByOption(TOption *)
 * Address: 00384c80
 */
TSerialChip::InitByOption(TOption *) {
    /*
        384c80:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c84:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c88:	e28cf074 	add	pc, ip, #116	; 0x74
    */
}

/**
 * Symbol: TSerialChip::ProcessOption(TOption *)
 * Address: 00384c8c
 */
TSerialChip::ProcessOption(TOption *) {
    /*
        384c8c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c90:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384c94:	e28cf078 	add	pc, ip, #120	; 0x78
    */
}

/**
 * Symbol: TSerialChip::SetSerialMode(unsigned long)
 * Address: 00384c98
 */
TSerialChip::SetSerialMode(unsigned long) {
    /*
        384c98:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384c9c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384ca0:	e28cf07c 	add	pc, ip, #124	; 0x7c
    */
}

/**
 * Symbol: TSerialChip::SysEventNotify(unsigned long)
 * Address: 00384ca4
 */
TSerialChip::SysEventNotify(unsigned long) {
    /*
        384ca4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384ca8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384cac:	e28cf080 	add	pc, ip, #128	; 0x80
    */
}

/**
 * Symbol: TSerialChip::SetTxDTransceiverEnable(unsigned char)
 * Address: 00384cb0
 */
TSerialChip::SetTxDTransceiverEnable(unsigned char) {
    /*
        384cb0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384cb4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384cb8:	e28cf084 	add	pc, ip, #132	; 0x84
    */
}

/**
 * Symbol: TSerialChip::GetByteAndStatus(unsigned char *)
 * Address: 00384cbc
 */
TSerialChip::GetByteAndStatus(unsigned char *) {
    /*
        384cbc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384cc0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384cc4:	e28cf088 	add	pc, ip, #136	; 0x88
    */
}

/**
 * Symbol: TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)
 * Address: 00384cc8
 */
TSerialChip::SetIntSourceEnable(unsigned long, unsigned char) {
    /*
        384cc8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384ccc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384cd0:	e28cf08c 	add	pc, ip, #140	; 0x8c
    */
}

/**
 * Symbol: TSerialChip::AllSent(void)
 * Address: 00384cd4
 */
TSerialChip::AllSent(void) {
    /*
        384cd4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384cd8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384cdc:	e28cf090 	add	pc, ip, #144	; 0x90
    */
}

/**
 * Symbol: TSerialChip::ConfigureForOutput(unsigned char)
 * Address: 00384ce0
 */
TSerialChip::ConfigureForOutput(unsigned char) {
    /*
        384ce0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384ce4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384ce8:	e28cf094 	add	pc, ip, #148	; 0x94
    */
}

/**
 * Symbol: TSerialChip::InitTxDMA(TCircleBuf *, void (*)(void *))
 * Address: 00384cec
 */
TSerialChip::InitTxDMA(TCircleBuf *, void (*)(void *)) {
    /*
        384cec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384cf0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384cf4:	e28cf098 	add	pc, ip, #152	; 0x98
    */
}

/**
 * Symbol: TSerialChip::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long))
 * Address: 00384cf8
 */
TSerialChip::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long)) {
    /*
        384cf8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384cfc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384d00:	e28cf09c 	add	pc, ip, #156	; 0x9c
    */
}

/**
 * Symbol: TSerialChip::TxDMAControl(unsigned char)
 * Address: 00384d04
 */
TSerialChip::TxDMAControl(unsigned char) {
    /*
        384d04:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384d08:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384d0c:	e28cf0a0 	add	pc, ip, #160	; 0xa0
    */
}

/**
 * Symbol: TSerialChip::RxDMAControl(unsigned char)
 * Address: 00384d10
 */
TSerialChip::RxDMAControl(unsigned char) {
    /*
        384d10:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384d14:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384d18:	e28cf0a4 	add	pc, ip, #164	; 0xa4
    */
}

/**
 * Symbol: TSerialChip::SetSDLCAddress(unsigned char)
 * Address: 00384d1c
 */
TSerialChip::SetSDLCAddress(unsigned char) {
    /*
        384d1c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384d20:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384d24:	e28cf0a8 	add	pc, ip, #168	; 0xa8
    */
}

/**
 * Symbol: TSerialChip::ReEnableReceiver(unsigned char)
 * Address: 00384d28
 */
TSerialChip::ReEnableReceiver(unsigned char) {
    /*
        384d28:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384d2c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384d30:	e28cf0ac 	add	pc, ip, #172	; 0xac
    */
}

/**
 * Symbol: TSerialChip::LinkIsFree(unsigned char)
 * Address: 00384d34
 */
TSerialChip::LinkIsFree(unsigned char) {
    /*
        384d34:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384d38:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384d3c:	e28cf0b0 	add	pc, ip, #176	; 0xb0
    */
}

/**
 * Symbol: TSerialChip::SendControlPacket(unsigned char, unsigned char, unsigned char)
 * Address: 00384d40
 */
TSerialChip::SendControlPacket(unsigned char, unsigned char, unsigned char) {
    /*
        384d40:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384d44:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384d48:	e28cf0b4 	add	pc, ip, #180	; 0xb4
    */
}

/**
 * Symbol: TSerialChip::WaitForPacket(unsigned long)
 * Address: 00384d4c
 */
TSerialChip::WaitForPacket(unsigned long) {
    /*
        384d4c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384d50:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384d54:	e28cf0b8 	add	pc, ip, #184	; 0xb8
    */
}

/**
 * Symbol: TSerialChip::WaitForAllSent(void)
 * Address: 00384d58
 */
TSerialChip::WaitForAllSent(void) {
    /*
        384d58:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384d5c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384d60:	e28cf0bc 	add	pc, ip, #188	; 0xbc
        384d64:	00000000 	andeq	r0, r0, r0
        384d68:	00000048 	andeq	r0, r0, r8, asr #32
        384d6c:	00000058 	andeq	r0, r0, r8, asr r0
        384d70:	00000068 	andeq	r0, r0, r8, rrx
        384d74:	00000068 	andeq	r0, r0, r8, rrx
        384d78:	000000a0 	andeq	r0, r0, r0, lsr #1
        384d7c:	ea5b7910 	b	1a631c4 <$Sizeof__19PTheSerChipRegistrySFv>
        384d88:	ea5b78ff 	b	1a6318c <PTheSerChipRegistry::$New(void)>
        384d8c:	ea5b74eb 	b	1a62140 <PTheSerChipRegistry::$Delete(void)>
        384d90:	00010000 	andeq	r0, r1, r0
        384d9c:	ea000001 	b	384da8 <ClassInfo__19PTheSerChipRegistrySFv+0x8>
    */
}

