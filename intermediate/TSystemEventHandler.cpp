#include "DDKIncludes/UtilityClasses/AEventHandler.h"

/**
 * Symbol: TSystemEventHandler::__ct(void)
 * Address: 00025a20
 */
TSystemEventHandler::TSystemEventHandler() {
    /*
         25a20:	e1a0c00d 	mov	ip, sp
         25a24:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         25a28:	e24cb004 	sub	fp, ip, #4	; 0x4
         25a2c:	e1b04000 	movs	r4, r0
         25a30:	1a000003 	bne	25a44 <TSystemEventHandler::__ct(void)+0x24>
         25a34:	e3a00018 	mov	r0, #24	; 0x18
         25a38:	eb6ea33e 	bl	1bce738 <$__nw(unsigned int)>
         25a3c:	e1b04000 	movs	r4, r0
         25a40:	0a000005 	beq	25a5c <TSystemEventHandler::__ct(void)+0x3c>
         25a44:	e1a00004 	mov	r0, r4
         25a48:	eb6ef9ee 	bl	1be4208 <TAEventHandler::$__ct(void)>
         25a4c:	e59f0010 	ldr	r0, [pc, #10]	; 25a64 <TSystemEventHandler::__ct(void)+0x44>
         25a50:	e5840000 	str	r0, [r4]
         25a54:	e3a00000 	mov	r0, #0	; 0x0
         25a58:	e5c40014 	strb	r0, [r4, #20]	; fField20
         25a5c:	e1a00004 	mov	r0, r4
         25a60:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         25a64:	0001eeb4 	streqh	lr, [r1], -r4
    */
}

/**
 * Symbol: TSystemEventHandler::Init(unsigned long, unsigned long)
 * Address: 00025a68
 */
NewtonErr		TSystemEventHandler::Init(ULong systemEvent, ULong sendFilter = 0) {
    /*
         25a68:	e1a0c00d 	mov	ip, sp
         25a6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         25a70:	e24cb004 	sub	fp, ip, #4	; 0x4
         25a74:	e1a04000 	mov	r4, r0
         25a78:	e1a05002 	mov	r5, r2
         25a7c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         25a80:	e1a0000d 	mov	r0, sp
         25a84:	eb6e9efe 	bl	1bcd684 <TSystemEvent::$__ct(unsigned long)>
         25a88:	eb6eb7d1 	bl	1bd39d4 <$GetGlobals>
         25a8c:	eb6f0a6a 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         25a90:	e1a02005 	mov	r2, r5
         25a94:	e5901000 	ldr	r1, [r0]
         25a98:	e1a0000d 	mov	r0, sp
         25a9c:	e3a03000 	mov	r3, #0	; 0x0
         25aa0:	eb6ecc6f 	bl	1bd8c64 <TSystemEvent::$RegisterForSystemEvent(unsigned long, unsigned long, unsigned long)>
         25aa4:	e3300000 	teq	r0, #0	; 0x0
         25aa8:	05d41014 	ldreqb	r1, [r4, #20]	; fField20
         25aac:	03310000 	teqeq	r1, #0	; 0x0
         25ab0:	1a000005 	bne	25acc <TSystemEventHandler::Init(unsigned long, unsigned long)+0x64>
         25ab4:	e1a00004 	mov	r0, r4
         25ab8:	e59f2024 	ldr	r2, [pc, #24]	; 25ae4 <TSystemEventHandler::Init(unsigned long, unsigned long)+0x7c>
         25abc:	e59f1024 	ldr	r1, [pc, #24]	; 25ae8 <TSystemEventHandler::Init(unsigned long, unsigned long)+0x80>
         25ac0:	eb6f0e7a 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
         25ac4:	e3a01001 	mov	r1, #1	; 0x1
         25ac8:	e5c41014 	strb	r1, [r4, #20]	; fField20
         25acc:	e1a04000 	mov	r4, r0
         25ad0:	e1a0000d 	mov	r0, sp
         25ad4:	e3a01000 	mov	r1, #0	; 0x0
         25ad8:	eb6ea311 	bl	1bce724 <TUObject::$__dt(void)>
         25adc:	e1a00004 	mov	r0, r4
         25ae0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         25ae4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         25ae8:	7379736d 	cmnvc	r9, #-1275068415	; 0xb4000001
    */
}

/**
 * Symbol: TSystemEventHandler::AnySystemEvents(TAEvent *)
 * Address: 00025af0
 */
void	TSystemEventHandler::AnySystemEvents(TAEvent* event) {
    /*
         25af0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSystemEventHandler::PowerOn(TAEvent *)
 * Address: 00025af4
 */
void	TSystemEventHandler::PowerOn(TAEvent* event) {
    /*
         25af4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSystemEventHandler::PowerOff(TAEvent *)
 * Address: 00025af8
 */
void	TSystemEventHandler::PowerOff(TAEvent* event) {
    /*
         25af8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSystemEventHandler::NewCard(TAEvent *)
 * Address: 00025afc
 */
void	TSystemEventHandler::NewCard(TAEvent* event) {
    /*
         25afc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSystemEventHandler::AppAlive(TAEvent *)
 * Address: 00025b00
 */
void	TSystemEventHandler::AppAlive(TAEvent* event) {
    /*
         25b00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSystemEventHandler::DeviceNotification(TAEvent *)
 * Address: 00025b04
 */
void	TSystemEventHandler::DeviceNotification(TAEvent* event) {
    /*
         25b04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSystemEventHandler::PowerOffPending(TAEvent *)
 * Address: 00025b08
 */
void	TSystemEventHandler::PowerOffPending(TAEvent* event) {
    /*
         25b08:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00025b0c
 */
void			TSystemEventHandler::AEHandlerProc(TUMsgToken* token, ULong*, TAEvent* event) {
    /*
         25b0c:	e1a0c00d 	mov	ip, sp
         25b10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         25b14:	e24cb004 	sub	fp, ip, #4	; 0x4
         25b18:	e1a04000 	mov	r4, r0
         25b1c:	e1a05003 	mov	r5, r3
         25b20:	e1a01003 	mov	r1, r3
         25b24:	e5902000 	ldr	r2, [r0]
         25b28:	e1a0e00f 	mov	lr, pc
         25b2c:	e282f014 	add	pc, r2, #20	; 0x14
         25b30:	e5950008 	ldr	r0, [r5, #8]
         25b34:	e59fc040 	ldr	ip, [pc, #40]	; 25b7c <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x70>
         25b38:	e150000c 	cmp	r0, ip
         25b3c:	0a00002e 	beq	25bfc <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xf0>
         25b40:	ca000011 	bgt	25b8c <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x80>
         25b44:	e59fc034 	ldr	ip, [pc, #34]	; 25b80 <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x74>
         25b48:	e130000c 	teq	r0, ip
         25b4c:	0a000020 	beq	25bd4 <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xc8>
         25b50:	e59fc02c 	ldr	ip, [pc, #2c]	; 25b84 <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x78>
         25b54:	e130000c 	teq	r0, ip
         25b58:	0a000022 	beq	25be8 <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xdc>
         25b5c:	e59fc024 	ldr	ip, [pc, #24]	; 25b88 <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x7c>
         25b60:	e130000c 	teq	r0, ip
         25b64:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         25b68:	e1a01005 	mov	r1, r5
         25b6c:	e1a00004 	mov	r0, r4
         25b70:	e5942000 	ldr	r2, [r4]
         25b74:	e2822028 	add	r2, r2, #40	; 0x28
         25b78:	ea000023 	b	25c0c <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x100>
         25b7c:	7070656e 	rsbvcs	r6, r0, lr, ror #10
         25b80:	616c6976 	cmnvs	ip, r6, ror r9
         25b84:	63617264 	cmnvs	r1, #1073741830	; 0x40000006
         25b88:	646e6f74 	strvsbt	r6, [lr], -#3956
         25b8c:	e59fc024 	ldr	ip, [pc, #24]	; 25bb8 <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xac>
         25b90:	e130000c 	teq	r0, ip
         25b94:	0a000009 	beq	25bc0 <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xb4>
         25b98:	e59fc01c 	ldr	ip, [pc, #1c]	; 25bbc <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xb0>
         25b9c:	e130000c 	teq	r0, ip
         25ba0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         25ba4:	e1a01005 	mov	r1, r5
         25ba8:	e1a00004 	mov	r0, r4
         25bac:	e5942000 	ldr	r2, [r4]
         25bb0:	e2822018 	add	r2, r2, #24	; 0x18
         25bb4:	ea000014 	b	25c0c <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x100>
         25bb8:	70776f66 	rsbvcs	r6, r7, r6, ror #30
         25bbc:	70776f6e 	rsbvcs	r6, r7, lr, ror #30
         25bc0:	e1a01005 	mov	r1, r5
         25bc4:	e1a00004 	mov	r0, r4
         25bc8:	e5942000 	ldr	r2, [r4]
         25bcc:	e282201c 	add	r2, r2, #28	; 0x1c
         25bd0:	ea00000d 	b	25c0c <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x100>
         25bd4:	e1a01005 	mov	r1, r5
         25bd8:	e1a00004 	mov	r0, r4
         25bdc:	e5942000 	ldr	r2, [r4]
         25be0:	e2822024 	add	r2, r2, #36	; 0x24
         25be4:	ea000008 	b	25c0c <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x100>
         25be8:	e1a01005 	mov	r1, r5
         25bec:	e1a00004 	mov	r0, r4
         25bf0:	e5942000 	ldr	r2, [r4]
         25bf4:	e2822020 	add	r2, r2, #32	; 0x20
         25bf8:	ea000003 	b	25c0c <TSystemEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x100>
         25bfc:	e1a01005 	mov	r1, r5
         25c00:	e1a00004 	mov	r0, r4
         25c04:	e5942000 	ldr	r2, [r4]
         25c08:	e282202c 	add	r2, r2, #44	; 0x2c
         25c0c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         25c10:	e282f000 	add	pc, r2, #0	; 0x0
    */
}

