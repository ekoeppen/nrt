#include "include/TCardProcessorEventHandler.h"

/**
 * Symbol: TCardProcessorEventHandler::__ct(void)
 * Address: 0004eb84
 */
TCardProcessorEventHandler::TCardProcessorEventHandler(void) {
    /*
         4eb84:	e1a0c00d 	mov	ip, sp
         4eb88:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4eb8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4eb90:	e1b04000 	movs	r4, r0
         4eb94:	1a000003 	bne	4eba8 <TCardProcessorEventHandler::__ct(void)+0x24>
         4eb98:	e3a00014 	mov	r0, #20	; 0x14
         4eb9c:	eb6dfee5 	bl	1bce738 <$__nw(unsigned int)>
         4eba0:	e1b04000 	movs	r4, r0
         4eba4:	0a000003 	beq	4ebb8 <TCardProcessorEventHandler::__ct(void)+0x34>
         4eba8:	e1a00004 	mov	r0, r4
         4ebac:	eb6e5595 	bl	1be4208 <TAEventHandler::$__ct(void)>
         4ebb0:	e59f0008 	ldr	r0, [pc, #8]	; 4ebc0 <TCardProcessorEventHandler::__ct(void)+0x3c>
         4ebb4:	e5840000 	str	r0, [r4]
         4ebb8:	e1a00004 	mov	r0, r4
         4ebbc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         4ebc0:	0001f328 	andeq	pc, r1, r8, lsr #6
    */
}

/**
 * Symbol: TCardProcessorEventHandler::Init(void)
 * Address: 0004ebc4
 */
TCardProcessorEventHandler::Init(void) {
    /*
         4ebc4:	e59f2004 	ldr	r2, [pc, #4]	; 4ebd0 <TCardProcessorEventHandler::Init(void)+0xc>
         4ebc8:	e59f1004 	ldr	r1, [pc, #4]	; 4ebd4 <TCardProcessorEventHandler::Init(void)+0x10>
         4ebcc:	ea6e6a37 	b	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
         4ebd0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         4ebd4:	63647376 	cmnvs	r4, #-671088639	; 0xd8000001
    */
}

/**
 * Symbol: TCardProcessorEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0004ebd8
 */
TCardProcessorEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         4ebd8:	e1a0c00d 	mov	ip, sp
         4ebdc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         4ebe0:	e24cb004 	sub	fp, ip, #4	; 0x4
         4ebe4:	e1a05001 	mov	r5, r1
         4ebe8:	e1a04002 	mov	r4, r2
         4ebec:	e1a06003 	mov	r6, r3
         4ebf0:	e3a03000 	mov	r3, #0	; 0x0
         4ebf4:	e92d0008 	stmdb	sp!, {r3}
         4ebf8:	eb6e1375 	bl	1bd39d4 <$GetGlobals>
         4ebfc:	e1a03006 	mov	r3, r6
         4ec00:	e1a02004 	mov	r2, r4
         4ec04:	e1a01005 	mov	r1, r5
         4ec08:	eb6bac20 	bl	1b39c90 <TCardProcessor::$DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)>
         4ec0c:	e28dd004 	add	sp, sp, #4	; 0x4
         4ec10:	eb6e136f 	bl	1bd39d4 <$GetGlobals>
         4ec14:	e3a010b8 	mov	r1, #184	; 0xb8
         4ec18:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         4ec1c:	ea6e5dbf 	b	1be6320 <TAppWorld::$AESetReply(unsigned long)>
    */
}

/**
 * Symbol: TCardProcessorEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0004ec20
 */
TCardProcessorEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         4ec20:	e1a0c00d 	mov	ip, sp
         4ec24:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         4ec28:	e24cb004 	sub	fp, ip, #4	; 0x4
         4ec2c:	e1a06001 	mov	r6, r1
         4ec30:	e1a05002 	mov	r5, r2
         4ec34:	e1a04003 	mov	r4, r3
         4ec38:	e3a03001 	mov	r3, #1	; 0x1
         4ec3c:	e92d0008 	stmdb	sp!, {r3}
         4ec40:	eb6e1363 	bl	1bd39d4 <$GetGlobals>
         4ec44:	e1a03004 	mov	r3, r4
         4ec48:	e1a02005 	mov	r2, r5
         4ec4c:	e1a01006 	mov	r1, r6
         4ec50:	eb6bac0e 	bl	1b39c90 <TCardProcessor::$DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)>
         4ec54:	e1a00004 	mov	r0, r4
         4ec58:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         4ec5c:	ea6b9fc2 	b	1b36b6c <TCardAsyncMsg::$Free(void)>
    */
}

