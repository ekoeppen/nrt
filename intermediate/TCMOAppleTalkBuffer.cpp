#include "include/TCMOAppleTalkBuffer.h"

/**
 * Symbol: TCMOAppleTalkBuffer::__ct(unsigned long, long)
 * Address: 00032550
 */
TCMOAppleTalkBuffer::TCMOAppleTalkBuffer(unsigned long, long) {
    /*
         32550:	e1a0c00d 	mov	ip, sp
         32554:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         32558:	e24cb004 	sub	fp, ip, #4	; 0x4
         3255c:	e1b04000 	movs	r4, r0
         32560:	e1a06001 	mov	r6, r1
         32564:	e1a05002 	mov	r5, r2
         32568:	1a000003 	bne	3257c <TCMOAppleTalkBuffer::__ct(unsigned long, long)+0x2c>
         3256c:	e3a00014 	mov	r0, #20	; 0x14
         32570:	eb6e7070 	bl	1bce738 <$__nw(unsigned int)>
         32574:	e1b04000 	movs	r4, r0
         32578:	0a000008 	beq	325a0 <TCMOAppleTalkBuffer::__ct(unsigned long, long)+0x50>
         3257c:	e1a00004 	mov	r0, r4
         32580:	e3a01303 	mov	r1, #201326592	; 0xc000000
         32584:	eb6e1167 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         32588:	e59f0018 	ldr	r0, [pc, #18]	; 325a8 <TCMOAppleTalkBuffer::__ct(unsigned long, long)+0x58>
         3258c:	e5840000 	str	r0, [r4]
         32590:	e3a00008 	mov	r0, #8	; 0x8
         32594:	e5840004 	str	r0, [r4, #4]
         32598:	e5845010 	str	r5, [r4, #16]
         3259c:	e584600c 	str	r6, [r4, #12]
         325a0:	e1a00004 	mov	r0, r4
         325a4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         325a8:	6273697a 	rsbvss	r6, r3, #1998848	; 0x1e8000
    */
}

