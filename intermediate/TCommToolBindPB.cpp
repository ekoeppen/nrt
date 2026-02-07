#include "include/TCommToolBindPB.h"

/**
 * Symbol: TCommToolBindPB::__ct(unsigned long, unsigned long, unsigned char, long)
 * Address: 001dd504
 */
TCommToolBindPB::TCommToolBindPB(unsigned long, unsigned long, unsigned char, long) {
    /*
        1dd504:	e1a0c00d 	mov	ip, sp
        1dd508:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1dd50c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dd510:	e1b04000 	movs	r4, r0
        1dd514:	e1a06001 	mov	r6, r1
        1dd518:	e1a05002 	mov	r5, r2
        1dd51c:	e20370ff 	and	r7, r3, #255	; 0xff
        1dd520:	e59b8004 	ldr	r8, [fp, #4]
        1dd524:	1a000003 	bne	1dd538 <TCommToolBindPB::__ct(unsigned long, unsigned long, unsigned char, long)+0x34>
        1dd528:	e3a00070 	mov	r0, #112	; 0x70
        1dd52c:	eb67c481 	bl	1bce738 <$__nw(unsigned int)>
        1dd530:	e1b04000 	movs	r4, r0
        1dd534:	0a00000c 	beq	1dd56c <TCommToolBindPB::__ct(unsigned long, unsigned long, unsigned char, long)+0x68>
        1dd538:	e1a03007 	mov	r3, r7
        1dd53c:	e1a02005 	mov	r2, r5
        1dd540:	e1a00004 	mov	r0, r4
        1dd544:	e3a01004 	mov	r1, #4	; 0x4
        1dd548:	eb61404c 	bl	1a2d680 <TCommToolPB::$__ct(unsigned long, unsigned long, unsigned char)>
        1dd54c:	e284001c 	add	r0, r4, #28	; 0x1c
        1dd550:	eb6848a4 	bl	1bef7e8 <TCommToolBindRequest::$__ct(void)>
        1dd554:	e284003c 	add	r0, r4, #60	; 0x3c
        1dd558:	eb684895 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
        1dd55c:	e284004c 	add	r0, r4, #76	; 0x4c
        1dd560:	eb60abbf 	bl	1a08464 <TBindCompleteEvent::$__ct(void)>
        1dd564:	e5846024 	str	r6, [r4, #36]
        1dd568:	e584805c 	str	r8, [r4, #92]
        1dd56c:	e1a00004 	mov	r0, r4
        1dd570:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

