#include "include/TTestAgentEventHandler.h"

/**
 * Symbol: TTestAgentEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00228d8c
 */
TTestAgentEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        228d8c:	e1a0c00d 	mov	ip, sp
        228d90:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        228d94:	e24cb004 	sub	fp, ip, #4	; 0x4
        228d98:	e1a04000 	mov	r4, r0
        228d9c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        228da0:	eb6564e6 	bl	1b82140 <TTestAgent::$AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)>
        228da4:	e1a00004 	mov	r0, r4
        228da8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        228dac:	ea66f986 	b	1be73cc <TAEventHandler::$DeferReply(void)>
    */
}

/**
 * Symbol: TTestAgentEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00228db0
 */
TTestAgentEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        228db0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        228db4:	ea656903 	b	1b831c8 <TTestAgent::$IdleProc(void)>
    */
}

/**
 * Symbol: TTestAgentEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00228db8
 */
TTestAgentEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        228db8:	e1a0f00e 	mov	pc, lr
    */
}

