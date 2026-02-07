#include "include/TKillEvent.h"

/**
 * Symbol: TKillEvent::__ct(void)
 * Address: 0012c604
 */
TKillEvent::TKillEvent(void) {
    /*
        12c604:	e1a0c00d 	mov	ip, sp
        12c608:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12c60c:	e24cb004 	sub	fp, ip, #4	; 0x4
        12c610:	e1b04000 	movs	r4, r0
        12c614:	1a000003 	bne	12c628 <TKillEvent::__ct(void)+0x24>
        12c618:	e3a00008 	mov	r0, #8	; 0x8
        12c61c:	eb6a8845 	bl	1bce738 <$__nw(unsigned int)>
        12c620:	e1b04000 	movs	r4, r0
        12c624:	0a000005 	beq	12c640 <TKillEvent::__ct(void)+0x3c>
        12c628:	e1a00004 	mov	r0, r4
        12c62c:	eb6adf01 	bl	1be4238 <TAEvent::$__ct(void)>
        12c630:	e59f0010 	ldr	r0, [pc, #10]	; 12c648 <TKillEvent::__ct(void)+0x44>
        12c634:	e5840000 	str	r0, [r4]
        12c638:	e59f000c 	ldr	r0, [pc, #c]	; 12c64c <TKillEvent::__ct(void)+0x48>
        12c63c:	e5840004 	str	r0, [r4, #4]
        12c640:	e1a00004 	mov	r0, r4
        12c644:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        12c648:	6e746b20 	cdpvs	11, 7, cr6, cr4, cr0, {1}
        12c64c:	6b696c6c 	blvs	1b87804 <TXChunkedChars::$ReadChunksRanges(TXStream *)+0x408>
    */
}

