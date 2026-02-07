#include "include/TAlertManager.h"

/**
 * Symbol: TAlertManager::MainConstructor(void)
 * Address: 00030b60
 */
TAlertManager::MainConstructor(void) {
    /*
         30b60:	e1a0c00d 	mov	ip, sp
         30b64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         30b68:	e24cb004 	sub	fp, ip, #4	; 0x4
         30b6c:	e1a04000 	mov	r4, r0
         30b70:	eb6df2e1 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
         30b74:	e3300000 	teq	r0, #0	; 0x0
         30b78:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         30b7c:	e1a00004 	mov	r0, r4
         30b80:	eb6ede2d 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         30b84:	e5840088 	str	r0, [r4, #136]	; fField136
         30b88:	e2840070 	add	r0, r4, #112	; 0x70
         30b8c:	e1a01004 	mov	r1, r4
         30b90:	eb6b30a1 	bl	1afce1c <TAlertEventHandler::$Init(TAlertManager *)>
         30b94:	e3300000 	teq	r0, #0	; 0x0
         30b98:	028400a4 	addeq	r0, r4, #164	; 0xa4
         30b9c:	03a01000 	moveq	r1, #0	; 0x0
         30ba0:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         30ba4:	0a6e93ba 	beq	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         30ba8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAlertManager::GetSizeOf(void)
 * Address: 00030bac
 */
TAlertManager::GetSizeOf(void) {
    /*
         30bac:	e3a000c8 	mov	r0, #200	; 0xc8
         30bb0:	e1a0f00e 	mov	pc, lr
    */
}

