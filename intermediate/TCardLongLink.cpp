#include "DDKIncludes/PCMCIA/CardPCMCIA.h"

/**
 * Symbol: TCardLongLink::__ct(void)
 * Address: 0004f0d4
 */
TCardLongLink::TCardLongLink() {
    /*
         4f0d4:	e1a0c00d 	mov	ip, sp
         4f0d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4f0dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         4f0e0:	e1b04000 	movs	r4, r0
         4f0e4:	1a000003 	bne	4f0f8 <TCardLongLink::__ct(void)+0x24>
         4f0e8:	e3a00008 	mov	r0, #8	; 0x8
         4f0ec:	eb6dfd91 	bl	1bce738 <$__nw(unsigned int)>
         4f0f0:	e1b04000 	movs	r4, r0
         4f0f4:	0a000001 	beq	4f100 <TCardLongLink::__ct(void)+0x2c>
         4f0f8:	e1a00004 	mov	r0, r4
         4f0fc:	eb6e05c3 	bl	1bd0810 <TCardLongLink::$Clear(void)>
         4f100:	e1a00004 	mov	r0, r4
         4f104:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardLongLink::__dt(void)
 * Address: 0004f4b4
 */
TCardLongLink::~TCardLongLink() {
    /*
         4f4b4:	e3110001 	tst	r1, #1	; 0x1
         4f4b8:	1a6df888 	bne	1bcd6e0 <$__dl(void *)>
         4f4bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardLongLink::Clear(void)
 * Address: 0004f914
 */
void			TCardLongLink::Clear() {
    /*
         4f914:	e3a01000 	mov	r1, #0	; 0x0
         4f918:	e5801000 	str	r1, [r0]
         4f91c:	e5901004 	ldr	r1, [r0, #4]	; fLinkAddress
         4f920:	e3c1120b 	bic	r1, r1, #-1342177280	; 0xb0000000
         4f924:	e3811101 	orr	r1, r1, #1073741824	; 0x40000000
         4f928:	e5a01004 	str	r1, [r0, #4]!	; fLinkAddress
         4f92c:	e1a0f00e 	mov	pc, lr
    */
}

