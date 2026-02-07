#include "include/TInkerEventHandler.h"

/**
 * Symbol: TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 002173ec
 */
TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        2173ec:	e1a0c00d 	mov	ip, sp
        2173f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2173f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2173f8:	e1a05000 	mov	r5, r0
        2173fc:	e1a04003 	mov	r4, r3
        217400:	e5931008 	ldr	r1, [r3, #8]
        217404:	e351000f 	cmp	r1, #15	; 0xf
        217408:	0a00007f 	beq	21760c <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x220>
        21740c:	e2846010 	add	r6, r4, #16	; 0x10
        217410:	ca000011 	bgt	21745c <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x70>
        217414:	e351000e 	cmp	r1, #14	; 0xe
        217418:	908ff101 	addls	pc, pc, r1, lsl #2
        21741c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        217420:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        217424:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        217428:	ea000048 	b	217550 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x164>
        21742c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        217430:	ea000029 	b	2174dc <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xf0>
        217434:	ea00002b 	b	2174e8 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xfc>
        217438:	ea00003d 	b	217534 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x148>
        21743c:	ea000056 	b	21759c <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1b0>
        217440:	ea000067 	b	2175e4 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1f8>
        217444:	ea000066 	b	2175e4 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1f8>
        217448:	ea000065 	b	2175e4 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1f8>
        21744c:	ea000064 	b	2175e4 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1f8>
        217450:	ea00006d 	b	21760c <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x220>
        217454:	ea00006c 	b	21760c <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x220>
        217458:	ea00006b 	b	21760c <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x220>
        21745c:	e3510021 	cmp	r1, #33	; 0x21
        217460:	0a000036 	beq	217540 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x154>
        217464:	ca000011 	bgt	2174b0 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xc4>
        217468:	e3510016 	cmp	r1, #22	; 0x16
        21746c:	0a000026 	beq	21750c <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x120>
        217470:	ca000009 	bgt	21749c <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xb0>
        217474:	e3310010 	teq	r1, #16	; 0x10
        217478:	0a000063 	beq	21760c <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x220>
        21747c:	e3310014 	teq	r1, #20	; 0x14
        217480:	0a00006b 	beq	217634 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x248>
        217484:	e3310015 	teq	r1, #21	; 0x15
        217488:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        21748c:	eb66f150 	bl	1bd39d4 <$GetGlobals>
        217490:	eb634c1c 	bl	1aea508 <TInker::$GetNextPenMode(void)>
        217494:	e280000c 	add	r0, r0, #12	; 0xc
        217498:	ea000068 	b	217640 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x254>
        21749c:	e3310017 	teq	r1, #23	; 0x17
        2174a0:	01a00006 	moveq	r0, r6
        2174a4:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
        2174a8:	0a63545f 	beq	1aec62c <$SetTabletCalibration(Calibration const &)>
        2174ac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2174b0:	e2410033 	sub	r0, r1, #51	; 0x33
        2174b4:	e3500004 	cmp	r0, #4	; 0x4
        2174b8:	908ff100 	addls	pc, pc, r0, lsl #2
        2174bc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2174c0:	ea000002 	b	2174d0 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe4>
        2174c4:	ea000001 	b	2174d0 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe4>
        2174c8:	ea000000 	b	2174d0 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe4>
        2174cc:	eaffffff 	b	2174d0 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe4>
        2174d0:	e2850014 	add	r0, r5, #20	; 0x14
        2174d4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2174d8:	ea634c17 	b	1aea53c <TBusyBox::$DoCommand(long)>
        2174dc:	e1a00005 	mov	r0, r5
        2174e0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2174e4:	ea634c0b 	b	1aea518 <TInkerEventHandler::$InkThem(void)>
        2174e8:	eb66f139 	bl	1bd39d4 <$GetGlobals>
        2174ec:	e594100c 	ldr	r1, [r4, #12]
        2174f0:	eb634800 	bl	1ae94f8 <TInker::$Calibrate(unsigned long)>
        2174f4:	e584000c 	str	r0, [r4, #12]
        2174f8:	e59f0008 	ldr	r0, [pc, #8]	; 217508 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x11c>
        2174fc:	e5900000 	ldr	r0, [r0]
        217500:	eb667965 	bl	1bb5a9c <$srand>
        217504:	ea00004e 	b	217644 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x258>
        217508:	0f181800 	swieq	0x00181800
        21750c:	e1a00006 	mov	r0, r6
        217510:	eb63501d 	bl	1aeb58c <$GetTabletCalibration(Calibration *)>
        217514:	e1a02004 	mov	r2, r4
        217518:	e1a00005 	mov	r0, r5
        21751c:	e3a01024 	mov	r1, #36	; 0x24
        217520:	eb675866 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        217524:	e8b60005 	ldmia	r6!, {r0, r2}
        217528:	e896000a 	ldmia	r6, {r1, r3}
        21752c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        217530:	ea63bb87 	b	1b06354 <$SetTabletCalibrationData__FlN31>
        217534:	eb66f126 	bl	1bd39d4 <$GetGlobals>
        217538:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        21753c:	ea634bf8 	b	1aea524 <TInker::$PresCalibrate(void)>
        217540:	eb66f123 	bl	1bd39d4 <$GetGlobals>
        217544:	eb636094 	bl	1aef79c <TInker::$TestForCalibrationNeeded(void)>
        217548:	e584000c 	str	r0, [r4, #12]
        21754c:	ea00003c 	b	217644 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x258>
        217550:	eb63585c 	bl	1aed6c8 <$TabletIdle(void)>
        217554:	eb635858 	bl	1aed6bc <$TabletBufferEmpty(void)>
        217558:	e3300000 	teq	r0, #0	; 0x0
        21755c:	1a00000b 	bne	217590 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1a4>
        217560:	e1a00005 	mov	r0, r5
        217564:	eb634beb 	bl	1aea518 <TInkerEventHandler::$InkThem(void)>
        217568:	eb66f119 	bl	1bd39d4 <$GetGlobals>
        21756c:	e5d000c3 	ldrb	r0, [r0, #195]
        217570:	e3300003 	teq	r0, #3	; 0x3
        217574:	1a000005 	bne	217590 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1a4>
        217578:	eb63584f 	bl	1aed6bc <$TabletBufferEmpty(void)>
        21757c:	e3300000 	teq	r0, #0	; 0x0
        217580:	0a000002 	beq	217590 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1a4>
        217584:	eb635007 	bl	1aeb5a8 <$GetTabletState(void)>
        217588:	e3300000 	teq	r0, #0	; 0x0
        21758c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        217590:	e1a00005 	mov	r0, r5
        217594:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        217598:	ea675851 	b	1bed6e4 <TAEventHandler::$StartIdle(void)>
        21759c:	eb66f10c 	bl	1bd39d4 <$GetGlobals>
        2175a0:	e28000c4 	add	r0, r0, #196	; 0xc4
        2175a4:	e8905000 	ldmia	r0, {ip, lr}
        2175a8:	e8865000 	stmia	r6, {ip, lr}
        2175ac:	eb66f108 	bl	1bd39d4 <$GetGlobals>
        2175b0:	eb634bd3 	bl	1aea504 <TInker::$GetCurrentPenMode(void)>
        2175b4:	e1a06000 	mov	r6, r0
        2175b8:	eb66f105 	bl	1bd39d4 <$GetGlobals>
        2175bc:	e5941008 	ldr	r1, [r4, #8]
        2175c0:	e20110ff 	and	r1, r1, #255	; 0xff
        2175c4:	e2411007 	sub	r1, r1, #7	; 0x7
        2175c8:	eb634bd6 	bl	1aea528 <TInker::$SetCurrentPenMode(unsigned char)>
        2175cc:	e2860007 	add	r0, r6, #7	; 0x7
        2175d0:	e5840008 	str	r0, [r4, #8]
        2175d4:	e1a02004 	mov	r2, r4
        2175d8:	e1a00005 	mov	r0, r5
        2175dc:	e3a01018 	mov	r1, #24	; 0x18
        2175e0:	ea00001a 	b	217650 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x264>
        2175e4:	eb66f0fa 	bl	1bd39d4 <$GetGlobals>
        2175e8:	eb634bc5 	bl	1aea504 <TInker::$GetCurrentPenMode(void)>
        2175ec:	e1a06000 	mov	r6, r0
        2175f0:	eb66f0f7 	bl	1bd39d4 <$GetGlobals>
        2175f4:	e5941008 	ldr	r1, [r4, #8]
        2175f8:	e20110ff 	and	r1, r1, #255	; 0xff
        2175fc:	e2411007 	sub	r1, r1, #7	; 0x7
        217600:	eb634bc8 	bl	1aea528 <TInker::$SetCurrentPenMode(unsigned char)>
        217604:	e2860007 	add	r0, r6, #7	; 0x7
        217608:	ea00000c 	b	217640 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x254>
        21760c:	eb66f0f0 	bl	1bd39d4 <$GetGlobals>
        217610:	eb634bbc 	bl	1aea508 <TInker::$GetNextPenMode(void)>
        217614:	e1a06000 	mov	r6, r0
        217618:	eb66f0ed 	bl	1bd39d4 <$GetGlobals>
        21761c:	e5941008 	ldr	r1, [r4, #8]
        217620:	e20110ff 	and	r1, r1, #255	; 0xff
        217624:	e241100c 	sub	r1, r1, #12	; 0xc
        217628:	eb634bc0 	bl	1aea530 <TInker::$SetNextPenMode(unsigned char)>
        21762c:	e286000c 	add	r0, r6, #12	; 0xc
        217630:	ea000002 	b	217640 <TInkerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x254>
        217634:	eb66f0e6 	bl	1bd39d4 <$GetGlobals>
        217638:	eb634bb1 	bl	1aea504 <TInker::$GetCurrentPenMode(void)>
        21763c:	e2800007 	add	r0, r0, #7	; 0x7
        217640:	e5840008 	str	r0, [r4, #8]
        217644:	e1a02004 	mov	r2, r4
        217648:	e1a00005 	mov	r0, r5
        21764c:	e3a01010 	mov	r1, #16	; 0x10
        217650:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        217654:	ea675819 	b	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
    */
}

/**
 * Symbol: TInkerEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00217658
 */
TInkerEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        217658:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInkerEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00218d4c
 */
TInkerEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        218d4c:	e1a0c00d 	mov	ip, sp
        218d50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        218d54:	e24cb004 	sub	fp, ip, #4	; 0x4
        218d58:	e1a04000 	mov	r4, r0
        218d5c:	eb635259 	bl	1aed6c8 <$TabletIdle(void)>
        218d60:	e1a00004 	mov	r0, r4
        218d64:	eb6345eb 	bl	1aea518 <TInkerEventHandler::$InkThem(void)>
        218d68:	e59f5010 	ldr	r5, [pc, #10]	; 218d80 <TInkerEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x34>
        218d6c:	e5d50008 	ldrb	r0, [r5, #8]
        218d70:	e3300000 	teq	r0, #0	; 0x0
        218d74:	0a000002 	beq	218d84 <TInkerEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x38>
        218d78:	eb634a11 	bl	1aeb5c4 <$InsertArmisticeSamples(void)>
        218d7c:	ea000012 	b	218dcc <TInkerEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x80>
        218d80:	0c104d20 	ldceq	13, cr4, [r0], -#128
        218d84:	eb66eb12 	bl	1bd39d4 <$GetGlobals>
        218d88:	e5d000c3 	ldrb	r0, [r0, #195]
        218d8c:	e3300003 	teq	r0, #3	; 0x3
        218d90:	1a00000d 	bne	218dcc <TInkerEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x80>
        218d94:	eb635248 	bl	1aed6bc <$TabletBufferEmpty(void)>
        218d98:	e3300000 	teq	r0, #0	; 0x0
        218d9c:	0a00000a 	beq	218dcc <TInkerEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x80>
        218da0:	eb634a00 	bl	1aeb5a8 <$GetTabletState(void)>
        218da4:	e3300000 	teq	r0, #0	; 0x0
        218da8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        218dac:	eb6349fd 	bl	1aeb5a8 <$GetTabletState(void)>
        218db0:	e3300008 	teq	r0, #8	; 0x8
        218db4:	05d50008 	ldreqb	r0, [r5, #8]
        218db8:	03300000 	teqeq	r0, #0	; 0x0
        218dbc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        218dc0:	eb6349f8 	bl	1aeb5a8 <$GetTabletState(void)>
        218dc4:	e3300009 	teq	r0, #9	; 0x9
        218dc8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        218dcc:	e1a00004 	mov	r0, r4
        218dd0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        218dd4:	ea67522c 	b	1bed68c <TAEventHandler::$ResetIdle(void)>
    */
}

/**
 * Symbol: TInkerEventHandler::InkThem(void)
 * Address: 00218dd8
 */
TInkerEventHandler::InkThem(void) {
    /*
        218dd8:	e1a0c00d 	mov	ip, sp
        218ddc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        218de0:	e24cb004 	sub	fp, ip, #4	; 0x4
        218de4:	eb66eafa 	bl	1bd39d4 <$GetGlobals>
        218de8:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        218dec:	ea6345cb 	b	1aea520 <TInker::$LCDEntry(void)>
    */
}

