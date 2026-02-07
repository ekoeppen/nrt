#include "include/TCMOTAPITransfer.h"

/**
 * Symbol: TCMOTAPITransfer::__ct(void)
 * Address: 00206750
 */
TCMOTAPITransfer::TCMOTAPITransfer(void) {
    /*
        206750:	e1a0c00d 	mov	ip, sp
        206754:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        206758:	e24cb004 	sub	fp, ip, #4	; 0x4
        20675c:	e1b04000 	movs	r4, r0
        206760:	1a000003 	bne	206774 <TCMOTAPITransfer::__ct(void)+0x24>
        206764:	e3a0000c 	mov	r0, #12	; 0xc
        206768:	eb671ff2 	bl	1bce738 <$__nw(unsigned int)>
        20676c:	e1b04000 	movs	r4, r0
        206770:	0a000006 	beq	206790 <TCMOTAPITransfer::__ct(void)+0x40>
        206774:	e1a00004 	mov	r0, r4
        206778:	e3a01303 	mov	r1, #201326592	; 0xc000000
        20677c:	eb66c0e9 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        206780:	e59f0010 	ldr	r0, [pc, #10]	; 206798 <TCMOTAPITransfer::__ct(void)+0x48>
        206784:	e5840000 	str	r0, [r4]
        206788:	e3a00000 	mov	r0, #0	; 0x0
        20678c:	e5840004 	str	r0, [r4, #4]
        206790:	e1a00004 	mov	r0, r4
        206794:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        206798:	7472616e 	ldrvcbt	r6, [r2], -#366
    */
}

