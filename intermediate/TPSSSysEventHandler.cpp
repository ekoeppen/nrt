#include "include/TPSSSysEventHandler.h"

/**
 * Symbol: TPSSSysEventHandler::NewCard(TAEvent *)
 * Address: 0015599c
 */
TPSSSysEventHandler::NewCard(TAEvent *) {
    /*
        15599c:	e1a0c00d 	mov	ip, sp
        1559a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1559a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1559a8:	e1a04001 	mov	r4, r1
        1559ac:	eb69f808 	bl	1bd39d4 <$GetGlobals>
        1559b0:	e1a01004 	mov	r1, r4
        1559b4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1559b8:	ea66780e 	b	1af39f8 <TPSSManager::$CardAvailable(TCardMessage *)>
    */
}

