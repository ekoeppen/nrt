#include "include/TCMOHandsetManagement.h"

/**
 * Symbol: TCMOHandsetManagement::__ct(void)
 * Address: 00206580
 */
TCMOHandsetManagement::TCMOHandsetManagement(void) {
    /*
        206580:	e1a0c00d 	mov	ip, sp
        206584:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        206588:	e24cb004 	sub	fp, ip, #4	; 0x4
        20658c:	e1b04000 	movs	r4, r0
        206590:	1a000003 	bne	2065a4 <TCMOHandsetManagement::__ct(void)+0x24>
        206594:	e3a00010 	mov	r0, #16	; 0x10
        206598:	eb672066 	bl	1bce738 <$__nw(unsigned int)>
        20659c:	e1b04000 	movs	r4, r0
        2065a0:	0a000008 	beq	2065c8 <TCMOHandsetManagement::__ct(void)+0x48>
        2065a4:	e1a00004 	mov	r0, r4
        2065a8:	e3a01303 	mov	r1, #201326592	; 0xc000000
        2065ac:	eb66c15d 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        2065b0:	e59f0018 	ldr	r0, [pc, #18]	; 2065d0 <TCMOHandsetManagement::__ct(void)+0x50>
        2065b4:	e5840000 	str	r0, [r4]
        2065b8:	e3a00004 	mov	r0, #4	; 0x4
        2065bc:	e5840004 	str	r0, [r4, #4]
        2065c0:	e3a00001 	mov	r0, #1	; 0x1
        2065c4:	e5c4000c 	strb	r0, [r4, #12]
        2065c8:	e1a00004 	mov	r0, r4
        2065cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2065d0:	68736d6e 	ldmvsda	r3!, {r1, r2, r3, r5, r6, r8, sl, fp, sp, lr}^
    */
}

