#include "include/TKillEventHandler.h"

/**
 * Symbol: TKillEventHandler::__ct(TNTKEndpointClient *)
 * Address: 0012c5a0
 */
TKillEventHandler::TKillEventHandler(TNTKEndpointClient *) {
    /*
        12c5a0:	e1a0c00d 	mov	ip, sp
        12c5a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12c5a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        12c5ac:	e1b04000 	movs	r4, r0
        12c5b0:	e1a05001 	mov	r5, r1
        12c5b4:	1a000003 	bne	12c5c8 <TKillEventHandler::__ct(TNTKEndpointClient *)+0x28>
        12c5b8:	e3a00018 	mov	r0, #24	; 0x18
        12c5bc:	eb6a885d 	bl	1bce738 <$__nw(unsigned int)>
        12c5c0:	e1b04000 	movs	r4, r0
        12c5c4:	0a000004 	beq	12c5dc <TKillEventHandler::__ct(TNTKEndpointClient *)+0x3c>
        12c5c8:	e1a00004 	mov	r0, r4
        12c5cc:	eb6adf0d 	bl	1be4208 <TAEventHandler::$__ct(void)>
        12c5d0:	e59f000c 	ldr	r0, [pc, #c]	; 12c5e4 <TKillEventHandler::__ct(TNTKEndpointClient *)+0x44>
        12c5d4:	e5840000 	str	r0, [r4]
        12c5d8:	e5845014 	str	r5, [r4, #20]	; fField20
        12c5dc:	e1a00004 	mov	r0, r4
        12c5e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        12c5e4:	0001e8b4 	streqh	lr, [r1], -r4
    */
}

/**
 * Symbol: TKillEventHandler::Init(void)
 * Address: 0012c5e8
 */
TKillEventHandler::Init(void) {
    /*
        12c5e8:	e59f2004 	ldr	r2, [pc, #4]	; 12c5f4 <TKillEventHandler::Init(void)+0xc>
        12c5ec:	e59f1004 	ldr	r1, [pc, #4]	; 12c5f8 <TKillEventHandler::Init(void)+0x10>
        12c5f0:	ea6af3ae 	b	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        12c5f4:	6e746b20 	cdpvs	11, 7, cr6, cr4, cr0, {1}
        12c5f8:	6b696c6c 	blvs	1b877b0 <TXChunkedChars::$ReadChunksRanges(TXStream *)+0x3b4>
    */
}

/**
 * Symbol: TKillEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0012c5fc
 */
TKillEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        12c5fc:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12c600:	ea666f86 	b	1ac8420 <TNTKEndpointClient::$MakeYourPeace(void)>
    */
}

