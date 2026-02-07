#include "include/TIDServer.h"

/**
 * Symbol: TIDServer::__ct(void)
 * Address: 0025ca34
 */
TIDServer::TIDServer(void) {
    /*
        25ca34:	e1a0c00d 	mov	ip, sp
        25ca38:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25ca3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ca40:	e3300000 	teq	r0, #0	; 0x0
        25ca44:	1a000003 	bne	25ca58 <TIDServer::__ct(void)+0x24>
        25ca48:	e3a00004 	mov	r0, #4	; 0x4
        25ca4c:	eb65c739 	bl	1bce738 <$__nw(unsigned int)>
        25ca50:	e3300000 	teq	r0, #0	; 0x0
        25ca54:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        25ca58:	e3a01000 	mov	r1, #0	; 0x0
        25ca5c:	e5c01000 	strb	r1, [r0]
        25ca60:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TIDServer::Init(void)
 * Address: 0025ca64
 */
TIDServer::Init(void) {
    /*
        25ca64:	e3a00000 	mov	r0, #0	; 0x0
        25ca68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIDServer::NewID(void)
 * Address: 0025ca6c
 */
TIDServer::NewID(void) {
    /*
        25ca6c:	e5d01000 	ldrb	r1, [r0]
        25ca70:	e2811001 	add	r1, r1, #1	; 0x1
        25ca74:	e5c01000 	strb	r1, [r0]
        25ca78:	e20100ff 	and	r0, r1, #255	; 0xff
        25ca7c:	e1a0f00e 	mov	pc, lr
    */
}

