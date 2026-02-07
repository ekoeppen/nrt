#include "include/TTestCaseTaskEventHandler.h"

/**
 * Symbol: TTestCaseTaskEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0022b390
 */
TTestCaseTaskEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        22b390:	e1a0c00d 	mov	ip, sp
        22b394:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22b398:	e24cb004 	sub	fp, ip, #4	; 0x4
        22b39c:	e1a04000 	mov	r4, r0
        22b3a0:	e1a01003 	mov	r1, r3
        22b3a4:	e590001c 	ldr	r0, [r0, #28]
        22b3a8:	ebffffb7 	bl	22b28c <TTestCaseTask::AEHandlerProc(TTestCaseTaskEvent *)>
        22b3ac:	e1a00004 	mov	r0, r4
        22b3b0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        22b3b4:	ea66f004 	b	1be73cc <TAEventHandler::$DeferReply(void)>
    */
}

/**
 * Symbol: TTestCaseTaskEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0022b3b8
 */
TTestCaseTaskEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        22b3b8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        22b3bc:	e28f2f02 	add	r2, pc, #8	; 0x8
        22b3c0:	e28f1f09 	add	r1, pc, #36	; 0x24
        22b3c4:	e3a03000 	mov	r3, #0	; 0x0
        22b3c8:	ea655b5e 	b	1b82148 <TAgentReporter::$AgentReportError(char *, char *, long)>
        22b3cc:	696e2054 	stmvsdb	lr!, {r2, r4, r6, sp}^
        22b3d0:	54657374 	strplbt	r7, [r5], -#884
        22b3d4:	43617365 	cmnmi	r1, #-1811939327	; 0x94000001
        22b3d8:	5461736b 	strplbt	r7, [r1], -#875
        22b3dc:	4576656e 	ldrmib	r6, [r6, -#1390]!
        22b3e0:	7448616e 	strvcb	r6, [r8], -#366
        22b3e4:	646c6572 	strvsbt	r6, [ip], -#1394
        22b3e8:	00000000 	andeq	r0, r0, r0
        22b3ec:	4145436f 	cmpmi	r5, pc, ror #6
        22b3f0:	6d706c65 	ldcvsl	12, cr6, [r0, -#404]!
        22b3f4:	74696f6e 	strvcbt	r6, [r9], -#3950
        22b3f8:	50726f63 	rsbpls	r6, r2, r3, ror #30
        22b3fc:	2063616c 	rsbcs	r6, r3, ip, ror #2
        22b400:	6c656420 	stcvsl	4, cr6, [r5], -#128
        22b404:	756e6578 	strvcb	r6, [lr, -#1400]!
        22b408:	70656374 	rsbvc	r6, r5, r4, ror r3
        22b40c:	65646c79 	strvsb	r6, [r4, -#3193]!
        22b410:	00000000 	andeq	r0, r0, r0
    */
}

