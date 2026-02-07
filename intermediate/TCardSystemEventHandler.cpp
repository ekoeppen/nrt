#include "include/TCardSystemEventHandler.h"

/**
 * Symbol: TCardSystemEventHandler::Init(TCardServer *)
 * Address: 0004e970
 */
TCardSystemEventHandler::Init(TCardServer *) {
    /*
         4e970:	e1a0c00d 	mov	ip, sp
         4e974:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4e978:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e97c:	e1a04000 	mov	r4, r0
         4e980:	e3a02000 	mov	r2, #0	; 0x0
         4e984:	e5801018 	str	r1, [r0, #24]	; fField24
         4e988:	e59f1034 	ldr	r1, [pc, #34]	; 4e9c4 <TCardSystemEventHandler::Init(TCardServer *)+0x54>
         4e98c:	eb6e6acb 	bl	1be94c0 <TSystemEventHandler::$Init(unsigned long, unsigned long)>
         4e990:	e3300000 	teq	r0, #0	; 0x0
         4e994:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         4e998:	e1a00004 	mov	r0, r4
         4e99c:	e3a02000 	mov	r2, #0	; 0x0
         4e9a0:	e59f1020 	ldr	r1, [pc, #20]	; 4e9c8 <TCardSystemEventHandler::Init(TCardServer *)+0x58>
         4e9a4:	eb6e6ac5 	bl	1be94c0 <TSystemEventHandler::$Init(unsigned long, unsigned long)>
         4e9a8:	e3300000 	teq	r0, #0	; 0x0
         4e9ac:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         4e9b0:	e1a00004 	mov	r0, r4
         4e9b4:	e3a02000 	mov	r2, #0	; 0x0
         4e9b8:	e59f100c 	ldr	r1, [pc, #c]	; 4e9cc <TCardSystemEventHandler::Init(TCardServer *)+0x5c>
         4e9bc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         4e9c0:	ea6e6abe 	b	1be94c0 <TSystemEventHandler::$Init(unsigned long, unsigned long)>
         4e9c4:	70776f6e 	rsbvcs	r6, r7, lr, ror #30
         4e9c8:	70776f66 	rsbvcs	r6, r7, r6, ror #30
         4e9cc:	63617264 	cmnvs	r1, #1073741830	; 0x40000006
    */
}

/**
 * Symbol: TCardSystemEventHandler::NewCard(TAEvent *)
 * Address: 0004e9d0
 */
TCardSystemEventHandler::NewCard(TAEvent *) {
    /*
         4e9d0:	e1a02001 	mov	r2, r1
         4e9d4:	e3a0100c 	mov	r1, #12	; 0xc
         4e9d8:	ea6e7b38 	b	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
    */
}

/**
 * Symbol: TCardSystemEventHandler::PowerOn(TAEvent *)
 * Address: 0004e9dc
 */
TCardSystemEventHandler::PowerOn(TAEvent *) {
    /*
         4e9dc:	e1a0c00d 	mov	ip, sp
         4e9e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4e9e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e9e8:	e1a04000 	mov	r4, r0
         4e9ec:	e1a05001 	mov	r5, r1
         4e9f0:	e1a02001 	mov	r2, r1
         4e9f4:	e3a0100c 	mov	r1, #12	; 0xc
         4e9f8:	eb6e7b30 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
         4e9fc:	e1a00004 	mov	r0, r4
         4ea00:	eb6e7712 	bl	1bec650 <TAEventHandler::$ReplyImmed(void)>
         4ea04:	e1a01005 	mov	r1, r5
         4ea08:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         4ea0c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         4ea10:	ea6ba052 	b	1b36b60 <TCardServer::$DoSysEventPowerOn(TAEvent *)>
    */
}

/**
 * Symbol: TCardSystemEventHandler::PowerOff(TAEvent *)
 * Address: 0004ea14
 */
TCardSystemEventHandler::PowerOff(TAEvent *) {
    /*
         4ea14:	e1a0c00d 	mov	ip, sp
         4ea18:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         4ea1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4ea20:	e1a04000 	mov	r4, r0
         4ea24:	e1a05001 	mov	r5, r1
         4ea28:	e280601c 	add	r6, r0, #28	; 0x1c
         4ea2c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         4ea30:	eb6e5a30 	bl	1be52f8 <TAppWorld::$AEGetMsgToken(void)>
         4ea34:	e890500c 	ldmia	r0, {r2, r3, ip, lr}
         4ea38:	e886500c 	stmia	r6, {r2, r3, ip, lr}
         4ea3c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         4ea40:	eb6e5a29 	bl	1be52ec <TAppWorld::$AEGetAEvent(void)>
         4ea44:	e284102c 	add	r1, r4, #44	; 0x2c
         4ea48:	e3a0200c 	mov	r2, #12	; 0xc
         4ea4c:	eb6e4140 	bl	1bdef54 <$BlockMove>
         4ea50:	e5940018 	ldr	r0, [r4, #24]	; fField24
         4ea54:	eb6e5a21 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
         4ea58:	e1a01005 	mov	r1, r5
         4ea5c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         4ea60:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         4ea64:	ea6ba03c 	b	1b36b5c <TCardServer::$DoSysEventPowerOff(TAEvent *)>
    */
}

/**
 * Symbol: TCardSystemEventHandler::ReplyPowerOff(void)
 * Address: 0004ea68
 */
TCardSystemEventHandler::ReplyPowerOff(void) {
    /*
         4ea68:	e1a0c00d 	mov	ip, sp
         4ea6c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4ea70:	e24cb004 	sub	fp, ip, #4	; 0x4
         4ea74:	e1a04000 	mov	r4, r0
         4ea78:	e24dd00c 	sub	sp, sp, #12	; 0xc
         4ea7c:	e1a0000d 	mov	r0, sp
         4ea80:	eb6d876a 	bl	1bb0830 <TAESystemEvent::$__ct(void)>
         4ea84:	e59f0018 	ldr	r0, [pc, #18]	; 4eaa4 <TCardSystemEventHandler::ReplyPowerOff(void)+0x3c>
         4ea88:	e58d0008 	str	r0, [sp, #8]
         4ea8c:	e284001c 	add	r0, r4, #28	; 0x1c
         4ea90:	e1a0100d 	mov	r1, sp
         4ea94:	e3a03000 	mov	r3, #0	; 0x0
         4ea98:	e3a0200c 	mov	r2, #12	; 0xc
         4ea9c:	eb6e2c92 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         4eaa0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         4eaa4:	70776f66 	rsbvcs	r6, r7, r6, ror #30
    */
}

/**
 * Symbol: TCardSystemEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0004eaa8
 */
TCardSystemEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         4eaa8:	e1a0c00d 	mov	ip, sp
         4eaac:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4eab0:	e24cb004 	sub	fp, ip, #4	; 0x4
         4eab4:	e1a0c003 	mov	ip, r3
         4eab8:	e3a03001 	mov	r3, #1	; 0x1
         4eabc:	e92d0008 	stmdb	sp!, {r3}
         4eac0:	e5900018 	ldr	r0, [r0, #24]	; fField24
         4eac4:	e1a0300c 	mov	r3, ip
         4eac8:	eb6ba021 	bl	1b36b54 <TCardServer::$DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)>
         4eacc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSystemEventHandler::__ct(void)
 * Address: 0004ec60
 */
TCardSystemEventHandler::TCardSystemEventHandler(void) {
    /*
         4ec60:	e1a0c00d 	mov	ip, sp
         4ec64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4ec68:	e24cb004 	sub	fp, ip, #4	; 0x4
         4ec6c:	e1b04000 	movs	r4, r0
         4ec70:	1a000003 	bne	4ec84 <TCardSystemEventHandler::__ct(void)+0x24>
         4ec74:	e3a00038 	mov	r0, #56	; 0x38
         4ec78:	eb6dfeae 	bl	1bce738 <$__nw(unsigned int)>
         4ec7c:	e1b04000 	movs	r4, r0
         4ec80:	0a00000a 	beq	4ecb0 <TCardSystemEventHandler::__ct(void)+0x50>
         4ec84:	e1a00004 	mov	r0, r4
         4ec88:	eb6e5565 	bl	1be4224 <TSystemEventHandler::$__ct(void)>
         4ec8c:	e3a00000 	mov	r0, #0	; 0x0
         4ec90:	e584001c 	str	r0, [r4, #28]
         4ec94:	e5840028 	str	r0, [r4, #40]
         4ec98:	e5840020 	str	r0, [r4, #32]
         4ec9c:	e5840024 	str	r0, [r4, #36]
         4eca0:	e284002c 	add	r0, r4, #44	; 0x2c
         4eca4:	eb6d86e1 	bl	1bb0830 <TAESystemEvent::$__ct(void)>
         4eca8:	e59f0008 	ldr	r0, [pc, #8]	; 4ecb8 <TCardSystemEventHandler::__ct(void)+0x58>
         4ecac:	e5840000 	str	r0, [r4]
         4ecb0:	e1a00004 	mov	r0, r4
         4ecb4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         4ecb8:	0001f21c 	andeq	pc, r1, ip, lsl r2
    */
}

