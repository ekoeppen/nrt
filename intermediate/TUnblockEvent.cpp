#include "include/TUnblockEvent.h"

/**
 * Symbol: TUnblockEvent::__ct(void *)
 * Address: 00195350
 */
TUnblockEvent::TUnblockEvent(*) {
    /*
        195350:	e1a0c00d 	mov	ip, sp
        195354:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        195358:	e24cb004 	sub	fp, ip, #4	; 0x4
        19535c:	e1b04000 	movs	r4, r0
        195360:	e1a05001 	mov	r5, r1
        195364:	1a000003 	bne	195378 <TUnblockEvent::__ct(void *)+0x28>
        195368:	e3a0000c 	mov	r0, #12	; 0xc
        19536c:	eb68e4f1 	bl	1bce738 <$__nw(unsigned int)>
        195370:	e1b04000 	movs	r4, r0
        195374:	0a000003 	beq	195388 <TUnblockEvent::__ct(void *)+0x38>
        195378:	e1a00004 	mov	r0, r4
        19537c:	eb693bad 	bl	1be4238 <TAEvent::$__ct(void)>
        195380:	e59f0008 	ldr	r0, [pc, #8]	; 195390 <TUnblockEvent::__ct(void *)+0x40>
        195384:	e9840021 	stmib	r4, {r0, r5}
        195388:	e1a00004 	mov	r0, r4
        19538c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        195390:	73796e63 	cmnvc	r9, #1584	; 0x630
    */
}

/**
 * Symbol: TUnblockEvent::__dt(void)
 * Address: 00195394
 */
TUnblockEvent::~TUnblockEvent(void) {
    /*
        195394:	e3110001 	tst	r1, #1	; 0x1
        195398:	1a68e0d0 	bne	1bcd6e0 <$__dl(void *)>
        19539c:	e1a0f00e 	mov	pc, lr
    */
}

