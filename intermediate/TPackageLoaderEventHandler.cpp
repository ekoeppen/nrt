#include "include/TPackageLoaderEventHandler.h"

/**
 * Symbol: TPackageLoaderEventHandler::AETestEvent(TAEvent *)
 * Address: 001829c8
 */
TPackageLoaderEventHandler::AETestEvent(TAEvent *) {
    /*
        1829c8:	e5b10008 	ldr	r0, [r1, #8]!
        1829cc:	e59fc01c 	ldr	ip, [pc, #1c]	; 1829f0 <TPackageLoaderEventHandler::AETestEvent(TAEvent *)+0x28>
        1829d0:	e130000c 	teq	r0, ip
        1829d4:	159fc018 	ldrne	ip, [pc, #18]	; 1829f4 <TPackageLoaderEventHandler::AETestEvent(TAEvent *)+0x2c>
        1829d8:	1130000c 	teqne	r0, ip
        1829dc:	159fc014 	ldrne	ip, [pc, #14]	; 1829f8 <TPackageLoaderEventHandler::AETestEvent(TAEvent *)+0x30>
        1829e0:	1130000c 	teqne	r0, ip
        1829e4:	03a00001 	moveq	r0, #1	; 0x1
        1829e8:	13a00000 	movne	r0, #0	; 0x0
        1829ec:	e1a0f00e 	mov	pc, lr
        1829f0:	706b626c 	rsbvc	r6, fp, ip, ror #4
        1829f4:	706b726d 	rsbvc	r7, fp, sp, ror #4
        1829f8:	706b6275 	rsbvc	r6, fp, r5, ror r2
    */
}

/**
 * Symbol: TPackageLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 001829fc
 */
TPackageLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        1829fc:	e1a0c00d 	mov	ip, sp
        182a00:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        182a04:	e24cb004 	sub	fp, ip, #4	; 0x4
        182a08:	eb6943f1 	bl	1bd39d4 <$GetGlobals>
        182a0c:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        182a10:	ea698e44 	b	1be6328 <TAppWorld::$AETerminateLoop(void)>
    */
}

/**
 * Symbol: TPackageLoaderEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00182a14
 */
TPackageLoaderEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        182a14:	e1a0c00d 	mov	ip, sp
        182a18:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        182a1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        182a20:	eb6943eb 	bl	1bd39d4 <$GetGlobals>
        182a24:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        182a28:	ea698e3e 	b	1be6328 <TAppWorld::$AETerminateLoop(void)>
    */
}

