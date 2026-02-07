#include "include/TNBPLookupEventHandler.h"

/**
 * Symbol: TNBPLookupEventHandler::__ct(TLookupNames *)
 * Address: 00126110
 */
TNBPLookupEventHandler::TNBPLookupEventHandler(TLookupNames *) {
    /*
        126110:	e1a0c00d 	mov	ip, sp
        126114:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        126118:	e24cb004 	sub	fp, ip, #4	; 0x4
        12611c:	e1b04000 	movs	r4, r0
        126120:	e1a05001 	mov	r5, r1
        126124:	1a000003 	bne	126138 <TNBPLookupEventHandler::__ct(TLookupNames *)+0x28>
        126128:	e3a00020 	mov	r0, #32	; 0x20
        12612c:	eb6aa181 	bl	1bce738 <$__nw(unsigned int)>
        126130:	e1b04000 	movs	r4, r0
        126134:	0a000006 	beq	126154 <TNBPLookupEventHandler::__ct(TLookupNames *)+0x44>
        126138:	e1a00004 	mov	r0, r4
        12613c:	eb6af831 	bl	1be4208 <TAEventHandler::$__ct(void)>
        126140:	e2840018 	add	r0, r4, #24	; 0x18
        126144:	eb6a29ba 	bl	1bb0834 <TPseudoSyncState::$__ct(void)>
        126148:	e59f000c 	ldr	r0, [pc, #c]	; 12615c <TNBPLookupEventHandler::__ct(TLookupNames *)+0x4c>
        12614c:	e5840000 	str	r0, [r4]
        126150:	e5845014 	str	r5, [r4, #20]	; fField20
        126154:	e1a00004 	mov	r0, r4
        126158:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        12615c:	0001f1dc 	ldreqd	pc, [r1], -ip
    */
}

/**
 * Symbol: TNBPLookupEventHandler::Init(unsigned long, unsigned long)
 * Address: 00126160
 */
TNBPLookupEventHandler::Init(unsigned long, unsigned long) {
    /*
        126160:	e1a0c00d 	mov	ip, sp
        126164:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        126168:	e24cb004 	sub	fp, ip, #4	; 0x4
        12616c:	e1a04000 	mov	r4, r0
        126170:	eb6b0cce 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        126174:	e3300000 	teq	r0, #0	; 0x0
        126178:	02840018 	addeq	r0, r4, #24	; 0x18
        12617c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        126180:	0a6a1d56 	beq	1bad6e0 <TPseudoSyncState::$Init(void)>
        126184:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookupEventHandler::__dt(void)
 * Address: 00126454
 */
TNBPLookupEventHandler::~TNBPLookupEventHandler(void) {
    /*
        126454:	e1a0c00d 	mov	ip, sp
        126458:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12645c:	e24cb004 	sub	fp, ip, #4	; 0x4
        126460:	e1a04000 	mov	r4, r0
        126464:	e1a05001 	mov	r5, r1
        126468:	e59f0034 	ldr	r0, [pc, #34]	; 1264a4 <TNBPLookupEventHandler::__dt(void)+0x50>
        12646c:	e5840000 	str	r0, [r4]
        126470:	e3a00000 	mov	r0, #0	; 0x0
        126474:	e5840014 	str	r0, [r4, #20]	; fField20
        126478:	e2840018 	add	r0, r4, #24	; 0x18
        12647c:	e3a01000 	mov	r1, #0	; 0x0
        126480:	eb6a28f7 	bl	1bb0864 <TPseudoSyncState::$__dt(void)>
        126484:	e1a00004 	mov	r0, r4
        126488:	e3a01000 	mov	r1, #0	; 0x0
        12648c:	eb6af777 	bl	1be4270 <TAEventHandler::$__dt(void)>
        126490:	e3150001 	tst	r5, #1	; 0x1
        126494:	11a00004 	movne	r0, r4
        126498:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        12649c:	1a6a9c8f 	bne	1bcd6e0 <$__dl(void *)>
        1264a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1264a4:	0001f1dc 	ldreqd	pc, [r1], -ip
    */
}

/**
 * Symbol: TNBPLookupEventHandler::AETestEvent(TAEvent *)
 * Address: 00126764
 */
TNBPLookupEventHandler::AETestEvent(TAEvent *) {
    /*
        126764:	e1a0c00d 	mov	ip, sp
        126768:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12676c:	e24cb004 	sub	fp, ip, #4	; 0x4
        126770:	e1a04001 	mov	r4, r1
        126774:	e5900014 	ldr	r0, [r0, #20]	; fField20
        126778:	eb654d5f 	bl	1a79cfc <TLookupNames::$GetId(void)>
        12677c:	e5b4100c 	ldr	r1, [r4, #12]!
        126780:	e1300001 	teq	r0, r1
        126784:	13a00000 	movne	r0, #0	; 0x0
        126788:	03a00001 	moveq	r0, #1	; 0x1
        12678c:	e20000ff 	and	r0, r0, #255	; 0xff
        126790:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookupEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00126fb0
 */
TNBPLookupEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        126fb0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        126fb4:	e1a02001 	mov	r2, r1
        126fb8:	e1a01003 	mov	r1, r3
        126fbc:	ea654f6b 	b	1a7ad70 <TLookupNames::$HandleLookupReply(TAppleTalkMessage *, TUMsgToken *)>
    */
}

/**
 * Symbol: TNBPLookupEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00127248
 */
TNBPLookupEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        127248:	e3330000 	teq	r3, #0	; 0x0
        12724c:	03a0101d 	moveq	r1, #29	; 0x1d
        127250:	02411c2f 	subeq	r1, r1, #12032	; 0x2f00
        127254:	15b31008 	ldrne	r1, [r3, #8]!
        127258:	e5902014 	ldr	r2, [r0, #20]	; fField20
        12725c:	e5d23008 	ldrb	r3, [r2, #8]
        127260:	e3330000 	teq	r3, #0	; 0x0
        127264:	02800018 	addeq	r0, r0, #24	; 0x18
        127268:	05a21004 	streq	r1, [r2, #4]!
        12726c:	0a6a215b 	beq	1baf7e0 <TPseudoSyncState::$Unblock(void)>
        127270:	11a00002 	movne	r0, r2
        127274:	1592f000 	ldrne	pc, [r2]
    */
}

