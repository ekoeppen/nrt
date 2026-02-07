#include "include/TCardEventHandler.h"

/**
 * Symbol: TCardEventHandler::__ct(void)
 * Address: 0004e8d8
 */
TCardEventHandler::TCardEventHandler(void) {
    /*
         4e8d8:	e1a0c00d 	mov	ip, sp
         4e8dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4e8e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e8e4:	e1b04000 	movs	r4, r0
         4e8e8:	1a000003 	bne	4e8fc <TCardEventHandler::__ct(void)+0x24>
         4e8ec:	e3a00018 	mov	r0, #24	; 0x18
         4e8f0:	eb6dff90 	bl	1bce738 <$__nw(unsigned int)>
         4e8f4:	e1b04000 	movs	r4, r0
         4e8f8:	0a000003 	beq	4e90c <TCardEventHandler::__ct(void)+0x34>
         4e8fc:	e1a00004 	mov	r0, r4
         4e900:	eb6e5640 	bl	1be4208 <TAEventHandler::$__ct(void)>
         4e904:	e59f0008 	ldr	r0, [pc, #8]	; 4e914 <TCardEventHandler::__ct(void)+0x3c>
         4e908:	e5840000 	str	r0, [r4]
         4e90c:	e1a00004 	mov	r0, r4
         4e910:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         4e914:	0001e784 	andeq	lr, r1, r4, lsl #15
    */
}

/**
 * Symbol: TCardEventHandler::Init(TCardServer *)
 * Address: 0004e918
 */
TCardEventHandler::Init(TCardServer *) {
    /*
         4e918:	e1a0c00d 	mov	ip, sp
         4e91c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4e920:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e924:	e1a04000 	mov	r4, r0
         4e928:	e5801014 	str	r1, [r0, #20]	; fField20
         4e92c:	e59f2034 	ldr	r2, [pc, #34]	; 4e968 <TCardEventHandler::Init(TCardServer *)+0x50>
         4e930:	e59f1034 	ldr	r1, [pc, #34]	; 4e96c <TCardEventHandler::Init(TCardServer *)+0x54>
         4e934:	eb6e6add 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
         4e938:	e1b05000 	movs	r5, r0
         4e93c:	1a000007 	bne	4e960 <TCardEventHandler::Init(TCardServer *)+0x48>
         4e940:	e3a03001 	mov	r3, #1	; 0x1
         4e944:	e92d0008 	stmdb	sp!, {r3}
         4e948:	e1a00004 	mov	r0, r4
         4e94c:	e3a03000 	mov	r3, #0	; 0x0
         4e950:	e3a029e1 	mov	r2, #3686400	; 0x384000
         4e954:	e3a01002 	mov	r1, #2	; 0x2
         4e958:	eb6e6adf 	bl	1be94dc <TAEventHandler::$InitIdler(unsigned long, TimeUnits, unsigned long, unsigned char)>
         4e95c:	e28dd004 	add	sp, sp, #4	; 0x4
         4e960:	e1a00005 	mov	r0, r5
         4e964:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         4e968:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         4e96c:	63647376 	cmnvs	r4, #-671088639	; 0xd8000001
    */
}

/**
 * Symbol: TCardEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0004ead0
 */
TCardEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         4ead0:	e1a0c00d 	mov	ip, sp
         4ead4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4ead8:	e24cb004 	sub	fp, ip, #4	; 0x4
         4eadc:	e1a04000 	mov	r4, r0
         4eae0:	e1a0c003 	mov	ip, r3
         4eae4:	e3a03000 	mov	r3, #0	; 0x0
         4eae8:	e92d0008 	stmdb	sp!, {r3}
         4eaec:	e5900014 	ldr	r0, [r0, #20]	; fField20
         4eaf0:	e1a0300c 	mov	r3, ip
         4eaf4:	eb6ba016 	bl	1b36b54 <TCardServer::$DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)>
         4eaf8:	e3a010b8 	mov	r1, #184	; 0xb8
         4eafc:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         4eb00:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         4eb04:	ea6e5e05 	b	1be6320 <TAppWorld::$AESetReply(unsigned long)>
    */
}

/**
 * Symbol: TCardEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0004eb08
 */
TCardEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         4eb08:	e1a0c00d 	mov	ip, sp
         4eb0c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4eb10:	e24cb004 	sub	fp, ip, #4	; 0x4
         4eb14:	e1a04003 	mov	r4, r3
         4eb18:	e3a03001 	mov	r3, #1	; 0x1
         4eb1c:	e92d0008 	stmdb	sp!, {r3}
         4eb20:	e5900014 	ldr	r0, [r0, #20]	; fField20
         4eb24:	e1a03004 	mov	r3, r4
         4eb28:	eb6ba009 	bl	1b36b54 <TCardServer::$DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)>
         4eb2c:	e1a00004 	mov	r0, r4
         4eb30:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         4eb34:	ea6ba00c 	b	1b36b6c <TCardAsyncMsg::$Free(void)>
    */
}

/**
 * Symbol: TCardEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0004eb38
 */
TCardEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         4eb38:	e1a0c00d 	mov	ip, sp
         4eb3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4eb40:	e24cb004 	sub	fp, ip, #4	; 0x4
         4eb44:	e1a04000 	mov	r4, r0
         4eb48:	e3a00000 	mov	r0, #0	; 0x0
         4eb4c:	eb6e40eb 	bl	1bdef00 <$VppIdleOff(unsigned char)>
         4eb50:	e1a05000 	mov	r5, r0
         4eb54:	e3a00000 	mov	r0, #0	; 0x0
         4eb58:	eb6e3cd6 	bl	1bddeb8 <$VccIdleOff(unsigned char)>
         4eb5c:	e1800005 	orr	r0, r0, r5
         4eb60:	e20050ff 	and	r5, r0, #255	; 0xff
         4eb64:	e3a00000 	mov	r0, #0	; 0x0
         4eb68:	eb6bac53 	bl	1b39cbc <$InternalVppIdleOff(unsigned char)>
         4eb6c:	e1800005 	orr	r0, r0, r5
         4eb70:	e31000ff 	tst	r0, #255	; 0xff
         4eb74:	11a00004 	movne	r0, r4
         4eb78:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         4eb7c:	1a6e7ac2 	bne	1bed68c <TAEventHandler::$ResetIdle(void)>
         4eb80:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

