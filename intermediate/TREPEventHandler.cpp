#include "include/TREPEventHandler.h"

/**
 * Symbol: TREPEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00129eb4
 */
TREPEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        129eb4:	e1a0c00d 	mov	ip, sp
        129eb8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        129ebc:	e24cb004 	sub	fp, ip, #4	; 0x4
        129ec0:	eb6b47bf 	bl	1bfbdc4 <$IncrementCurrentStackPos(void)>
        129ec4:	e59f0024 	ldr	r0, [pc, #24]	; 129ef0 <TREPEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x3c>
        129ec8:	eb6b1637 	bl	1bef7ac <$SetPort(GrafPort *)>
        129ecc:	e1a04000 	mov	r4, r0
        129ed0:	eb6a7117 	bl	1bc6334 <$REPIdle(void)>
        129ed4:	eb66f543 	bl	1ae73e8 <$CheckForDeferredActions(void)>
        129ed8:	eb66e8de 	bl	1ae4258 <$ResetREPIdler(void)>
        129edc:	e1a00004 	mov	r0, r4
        129ee0:	eb6b1631 	bl	1bef7ac <$SetPort(GrafPort *)>
        129ee4:	eb6b47b7 	bl	1bfbdc8 <$DecrementCurrentStackPos(void)>
        129ee8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        129eec:	ea6b47b6 	b	1bfbdcc <$ClearRefHandles(void)>
        129ef0:	0c1067cc 	ldceq	7, cr6, [r0], -#816
    */
}

