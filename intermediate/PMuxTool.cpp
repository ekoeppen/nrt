#include "include/PMuxTool.h"

/**
 * Symbol: New__8PMuxToolSFPc
 * Address: 00383ba4
 */
void PMuxTool::New() {
    /*
        383ba4:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        383ba8:	e1a01000 	mov	r1, r0
        383bac:	ebfffff7 	bl	383b90 <ClassInfo__18PMuxServiceStarterSFv+0x44>
        383bb0:	eb612efb 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        383bb4:	e1100000 	tst	r0, r0
        383bb8:	e28dd004 	add	sp, sp, #4	; 0x4
        383bbc:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        383bc0:	01a0f00e 	moveq	pc, lr
        383bc4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383bc8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383bcc:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PMuxTool::Delete(void)
 * Address: 00383bd0
 */
PMuxTool::Delete(void) {
    /*
        383bd0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383bd4:	e92d4001 	stmdb	sp!, {r0, lr}
        383bd8:	e28fe004 	add	lr, pc, #4	; 0x4
        383bdc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383be0:	e28cf00c 	add	pc, ip, #12	; 0xc
        383be4:	e8bd4001 	ldmia	sp!, {r0, lr}
        383be8:	ea613b5b 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PMuxTool::OpenMuxStart(PMuxCallBack *, TCommToolOpenRequest *)
 * Address: 00383bec
 */
PMuxTool::OpenMuxStart(PMuxCallBack *, TCommToolOpenRequest *) {
    /*
        383bec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383bf0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383bf4:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: PMuxTool::CloseMuxStart(void)
 * Address: 00383bf8
 */
PMuxTool::CloseMuxStart(void) {
    /*
        383bf8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383bfc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383c00:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: PMuxTool::NewConnectionEnd(void)
 * Address: 00383c04
 */
PMuxTool::NewConnectionEnd(void) {
    /*
        383c04:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383c08:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383c0c:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: PMuxTool::DisposeConnectionEnd(PConnectionEnd *)
 * Address: 00383c10
 */
PMuxTool::DisposeConnectionEnd(PConnectionEnd *) {
    /*
        383c10:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383c14:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383c18:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: PMuxTool::HandleTimerTick(void)
 * Address: 00383c1c
 */
PMuxTool::HandleTimerTick(void) {
    /*
        383c1c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383c20:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383c24:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: PMuxTool::HandleRequest(unsigned char *, TUMsgToken &, unsigned long)
 * Address: 00383c28
 */
PMuxTool::HandleRequest(unsigned char *, TUMsgToken &, unsigned long) {
    /*
        383c28:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383c2c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383c30:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: PMuxTool::HandleReply(unsigned long, unsigned long)
 * Address: 00383c34
 */
PMuxTool::HandleReply(unsigned long, unsigned long) {
    /*
        383c34:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383c38:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383c3c:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: PMuxTool::HandleInternalRequest(void *)
 * Address: 00383c40
 */
PMuxTool::HandleInternalRequest(void *) {
    /*
        383c40:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383c44:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383c48:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: PMuxTool::HandleInternalEvent(void)
 * Address: 00383c4c
 */
PMuxTool::HandleInternalEvent(void) {
    /*
        383c4c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        383c50:	e590c008 	ldr	ip, [r0, #8]	; fField8
        383c54:	e28cf030 	add	pc, ip, #48	; 0x30
        383c58:	e1a0000f 	mov	r0, pc
        383c5c:	e1a0f00e 	mov	pc, lr
        383c60:	50434543 	subpl	r4, r3, r3, asr #10
        383c64:	616c6c42 	cmnvs	ip, r2, asr #24
        383c68:	61636b00 	cmnvs	r3, r0, lsl #22
    */
}

