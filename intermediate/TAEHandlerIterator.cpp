#include "DDKIncludes/UtilityClasses/AEventHandler.h"

/**
 * Symbol: TAEHandlerIterator::__ct(TAEventHandler *)
 * Address: 000254c8
 */
TAEHandlerIterator::TAEHandlerIterator(TAEventHandler* chainHead) {
    /*
         254c8:	e1a0c00d 	mov	ip, sp
         254cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         254d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         254d4:	e1b04000 	movs	r4, r0
         254d8:	e1a05001 	mov	r5, r1
         254dc:	1a000003 	bne	254f0 <TAEHandlerIterator::__ct(TAEventHandler *)+0x28>
         254e0:	e3a0000c 	mov	r0, #12	; 0xc
         254e4:	eb6ea493 	bl	1bce738 <$__nw(unsigned int)>
         254e8:	e1b04000 	movs	r4, r0
         254ec:	0a000007 	beq	25510 <TAEHandlerIterator::__ct(TAEventHandler *)+0x48>
         254f0:	e5845000 	str	r5, [r4]
         254f4:	e5845004 	str	r5, [r4, #4]	; fFirstHandler
         254f8:	e3350000 	teq	r5, #0	; 0x0
         254fc:	03a00000 	moveq	r0, #0	; 0x0
         25500:	0a000001 	beq	2550c <TAEHandlerIterator::__ct(TAEventHandler *)+0x44>
         25504:	e1a00005 	mov	r0, r5
         25508:	eb6df739 	bl	1ba31f4 <TAEventHandler::$GetNextHandler(void)>
         2550c:	e5840008 	str	r0, [r4, #8]	; fCurrentHandler
         25510:	e1a00004 	mov	r0, r4
         25514:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAEHandlerIterator::Advance(void)
 * Address: 00025518
 */
this->TAEHandlerIterator::Advance() {
    /*
         25518:	e1a0c00d 	mov	ip, sp
         2551c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         25520:	e24cb004 	sub	fp, ip, #4	; 0x4
         25524:	e1a04000 	mov	r4, r0
         25528:	e5900008 	ldr	r0, [r0, #8]	; fCurrentHandler
         2552c:	e5840004 	str	r0, [r4, #4]	; fFirstHandler
         25530:	e3300000 	teq	r0, #0	; 0x0
         25534:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         25538:	eb6df72d 	bl	1ba31f4 <TAEventHandler::$GetNextHandler(void)>
         2553c:	e5a40008 	str	r0, [r4, #8]!	; fCurrentHandler
         25540:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAEHandlerIterator::Reset(void)
 * Address: 00025544
 */
this->TAEHandlerIterator::Reset() {
    /*
         25544:	e1a0c00d 	mov	ip, sp
         25548:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2554c:	e24cb004 	sub	fp, ip, #4	; 0x4
         25550:	e1a04000 	mov	r4, r0
         25554:	e5900000 	ldr	r0, [r0]
         25558:	e5840004 	str	r0, [r4, #4]	; fFirstHandler
         2555c:	e3300000 	teq	r0, #0	; 0x0
         25560:	03a00000 	moveq	r0, #0	; 0x0
         25564:	0a000000 	beq	2556c <TAEHandlerIterator::Reset(void)+0x28>
         25568:	eb6df721 	bl	1ba31f4 <TAEventHandler::$GetNextHandler(void)>
         2556c:	e5a40008 	str	r0, [r4, #8]!	; fCurrentHandler
         25570:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

