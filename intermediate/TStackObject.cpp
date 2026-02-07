#include "include/TStackObject.h"

/**
 * Symbol: TStackObject::__ct(void)
 * Address: 001f9224
 */
TStackObject::TStackObject(void) {
    /*
        1f9224:	e1a0c00d 	mov	ip, sp
        1f9228:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f922c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9230:	e1b04000 	movs	r4, r0
        1f9234:	1a000003 	bne	1f9248 <TStackObject::__ct(void)+0x24>
        1f9238:	e3a00018 	mov	r0, #24	; 0x18
        1f923c:	eb67553d 	bl	1bce738 <$__nw(unsigned int)>
        1f9240:	e1b04000 	movs	r4, r0
        1f9244:	0a000003 	beq	1f9258 <TStackObject::__ct(void)+0x34>
        1f9248:	e1a00004 	mov	r0, r4
        1f924c:	eb67abed 	bl	1be4208 <TAEventHandler::$__ct(void)>
        1f9250:	e59f0008 	ldr	r0, [pc, #8]	; 1f9260 <TStackObject::__ct(void)+0x3c>
        1f9254:	e5840000 	str	r0, [r4]
        1f9258:	e1a00004 	mov	r0, r4
        1f925c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1f9260:	0001c63c 	andeq	ip, r1, ip, lsr r6
    */
}

/**
 * Symbol: TStackObject::__dt(void)
 * Address: 001f9264
 */
TStackObject::~TStackObject(void) {
    /*
        1f9264:	e1a0c00d 	mov	ip, sp
        1f9268:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f926c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9270:	e1a04000 	mov	r4, r0
        1f9274:	e1a05001 	mov	r5, r1
        1f9278:	e59f002c 	ldr	r0, [pc, #2c]	; 1f92ac <TStackObject::__dt(void)+0x48>
        1f927c:	e5840000 	str	r0, [r4]
        1f9280:	eb6769d3 	bl	1bd39d4 <$GetGlobals>
        1f9284:	e1a01004 	mov	r1, r4
        1f9288:	eb67b41f 	bl	1be630c <TAppWorld::$AERemoveHandler(TAEventHandler *)>
        1f928c:	e1a00004 	mov	r0, r4
        1f9290:	e3a01000 	mov	r1, #0	; 0x0
        1f9294:	eb67abf5 	bl	1be4270 <TAEventHandler::$__dt(void)>
        1f9298:	e3150001 	tst	r5, #1	; 0x1
        1f929c:	11a00004 	movne	r0, r4
        1f92a0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1f92a4:	1a67510d 	bne	1bcd6e0 <$__dl(void *)>
        1f92a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1f92ac:	0001c63c 	andeq	ip, r1, ip, lsr r6
    */
}

/**
 * Symbol: TStackObject::ATLKSocketClosed(TAppleTalkMessage *)
 * Address: 001f92b0
 */
TStackObject::ATLKSocketClosed(TAppleTalkMessage *) {
    /*
        1f92b0:	e3a00000 	mov	r0, #0	; 0x0
        1f92b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStackObject::Init(unsigned long, unsigned long)
 * Address: 001f92b8
 */
TStackObject::Init(unsigned long, unsigned long) {
    /*
        1f92b8:	e1a0c00d 	mov	ip, sp
        1f92bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f92c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f92c4:	e1a04000 	mov	r4, r0
        1f92c8:	eb67c078 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        1f92cc:	e3a01000 	mov	r1, #0	; 0x0
        1f92d0:	e5a41014 	str	r1, [r4, #20]!	; fField20
        1f92d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 001f92d8
 */
TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        1f92d8:	e1a0c00d 	mov	ip, sp
        1f92dc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1f92e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f92e4:	e1a04000 	mov	r4, r0
        1f92e8:	e1a07001 	mov	r7, r1
        1f92ec:	e1a06002 	mov	r6, r2
        1f92f0:	e1a05003 	mov	r5, r3
        1f92f4:	eb6769b6 	bl	1bd39d4 <$GetGlobals>
        1f92f8:	e3a01014 	mov	r1, #20	; 0x14
        1f92fc:	eb67b407 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
        1f9300:	e5950004 	ldr	r0, [r5, #4]
        1f9304:	e59fc03c 	ldr	ip, [pc, #3c]	; 1f9348 <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x70>
        1f9308:	e130000c 	teq	r0, ip
        1f930c:	e5950010 	ldr	r0, [r5, #16]
        1f9310:	1a00001c 	bne	1f9388 <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xb0>
        1f9314:	e3300001 	teq	r0, #1	; 0x1
        1f9318:	0a00000b 	beq	1f934c <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x74>
        1f931c:	e3300004 	teq	r0, #4	; 0x4
        1f9320:	0a00000e 	beq	1f9360 <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x88>
        1f9324:	e3300008 	teq	r0, #8	; 0x8
        1f9328:	0a000011 	beq	1f9374 <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x9c>
        1f932c:	e3300009 	teq	r0, #9	; 0x9
        1f9330:	1a00002c 	bne	1f93e8 <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x110>
        1f9334:	e1a01005 	mov	r1, r5
        1f9338:	e1a00004 	mov	r0, r4
        1f933c:	e5942000 	ldr	r2, [r4]
        1f9340:	e2822034 	add	r2, r2, #52	; 0x34
        1f9344:	ea00001c 	b	1f93bc <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe4>
        1f9348:	2a2a2a2a 	bcs	c83bf8 <ROM$$Size+0x563fac>
        1f934c:	e1a01005 	mov	r1, r5
        1f9350:	e1a00004 	mov	r0, r4
        1f9354:	e5942000 	ldr	r2, [r4]
        1f9358:	e2822020 	add	r2, r2, #32	; 0x20
        1f935c:	ea000016 	b	1f93bc <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe4>
        1f9360:	e1a01005 	mov	r1, r5
        1f9364:	e1a00004 	mov	r0, r4
        1f9368:	e5942000 	ldr	r2, [r4]
        1f936c:	e2822024 	add	r2, r2, #36	; 0x24
        1f9370:	ea000011 	b	1f93bc <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe4>
        1f9374:	e1a01005 	mov	r1, r5
        1f9378:	e1a00004 	mov	r0, r4
        1f937c:	e5942000 	ldr	r2, [r4]
        1f9380:	e2822028 	add	r2, r2, #40	; 0x28
        1f9384:	ea00000c 	b	1f93bc <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe4>
        1f9388:	e3300003 	teq	r0, #3	; 0x3
        1f938c:	0a000006 	beq	1f93ac <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xd4>
        1f9390:	e3300005 	teq	r0, #5	; 0x5
        1f9394:	1a00000b 	bne	1f93c8 <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xf0>
        1f9398:	e1a01005 	mov	r1, r5
        1f939c:	e1a00004 	mov	r0, r4
        1f93a0:	e5942000 	ldr	r2, [r4]
        1f93a4:	e282202c 	add	r2, r2, #44	; 0x2c
        1f93a8:	ea000003 	b	1f93bc <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe4>
        1f93ac:	e1a01005 	mov	r1, r5
        1f93b0:	e1a00004 	mov	r0, r4
        1f93b4:	e5942000 	ldr	r2, [r4]
        1f93b8:	e2822030 	add	r2, r2, #48	; 0x30
        1f93bc:	e1a0e00f 	mov	lr, pc
        1f93c0:	e1a0f002 	mov	pc, r2
        1f93c4:	ea000006 	b	1f93e4 <TStackObject::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x10c>
        1f93c8:	e1a03005 	mov	r3, r5
        1f93cc:	e1a02006 	mov	r2, r6
        1f93d0:	e1a01007 	mov	r1, r7
        1f93d4:	e1a00004 	mov	r0, r4
        1f93d8:	e594c000 	ldr	ip, [r4]
        1f93dc:	e1a0e00f 	mov	lr, pc
        1f93e0:	e28cf01c 	add	pc, ip, #28	; 0x1c
        1f93e4:	e1a08000 	mov	r8, r0
        1f93e8:	e5a58008 	str	r8, [r5, #8]!
        1f93ec:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStackObject::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 001f93f0
 */
TStackObject::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        1f93f0:	e1a0c00d 	mov	ip, sp
        1f93f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f93f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f93fc:	e1a04003 	mov	r4, r3
        1f9400:	e590c000 	ldr	ip, [r0]
        1f9404:	e1a0e00f 	mov	lr, pc
        1f9408:	e28cf01c 	add	pc, ip, #28	; 0x1c
        1f940c:	eb676970 	bl	1bd39d4 <$GetGlobals>
        1f9410:	e1a01004 	mov	r1, r4
        1f9414:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1f9418:	ea62022f 	b	1a79cdc <TAppleTalkWorld::$FreeMessage(TATAsyncMsg *)>
    */
}

/**
 * Symbol: TStackObject::ATLKAttachLink(TAppleTalkMessage *)
 * Address: 001f941c
 */
TStackObject::ATLKAttachLink(TAppleTalkMessage *) {
    /*
        1f941c:	e3a00000 	mov	r0, #0	; 0x0
        1f9420:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStackObject::ATLKDetachLink(TAppleTalkMessage *)
 * Address: 001f9424
 */
TStackObject::ATLKDetachLink(TAppleTalkMessage *) {
    /*
        1f9424:	e3a00000 	mov	r0, #0	; 0x0
        1f9428:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStackObject::ATLKOpen(TAppleTalkMessage *)
 * Address: 001f942c
 */
TStackObject::ATLKOpen(TAppleTalkMessage *) {
    /*
        1f942c:	e3a00000 	mov	r0, #0	; 0x0
        1f9430:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStackObject::ATLKClose(TAppleTalkMessage *)
 * Address: 001f9434
 */
TStackObject::ATLKClose(TAppleTalkMessage *) {
    /*
        1f9434:	e3a00000 	mov	r0, #0	; 0x0
        1f9438:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStackObject::ATLKShutDown(TAppleTalkMessage *)
 * Address: 001f943c
 */
TStackObject::ATLKShutDown(TAppleTalkMessage *) {
    /*
        1f943c:	e1a0c00d 	mov	ip, sp
        1f9440:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1f9444:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9448:	e3300000 	teq	r0, #0	; 0x0
        1f944c:	0a000002 	beq	1f945c <TStackObject::ATLKShutDown(TAppleTalkMessage *)+0x20>
        1f9450:	e3a01001 	mov	r1, #1	; 0x1
        1f9454:	e1a0e00f 	mov	lr, pc
        1f9458:	e590f000 	ldr	pc, [r0]
        1f945c:	e3a00000 	mov	r0, #0	; 0x0
        1f9460:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

