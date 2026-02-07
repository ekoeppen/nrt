#include "DDKIncludes/Communications/MNPOptions.h"

/**
 * Symbol: TCMOMNPAllocate::__ct(void)
 * Address: 00118708
 */
TCMOMNPAllocate::TCMOMNPAllocate() {
    /*
        118708:	e1a0c00d 	mov	ip, sp
        11870c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        118710:	e24cb004 	sub	fp, ip, #4	; 0x4
        118714:	e1b04000 	movs	r4, r0
        118718:	1a000003 	bne	11872c <TCMOMNPAllocate::__ct(void)+0x24>
        11871c:	e3a00010 	mov	r0, #16	; 0x10
        118720:	eb6ad804 	bl	1bce738 <$__nw(unsigned int)>
        118724:	e1b04000 	movs	r4, r0
        118728:	0a000008 	beq	118750 <TCMOMNPAllocate::__ct(void)+0x48>
        11872c:	e1a00004 	mov	r0, r4
        118730:	e3a01303 	mov	r1, #201326592	; 0xc000000
        118734:	eb6a78fb 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        118738:	e59f0018 	ldr	r0, [pc, #18]	; 118758 <TCMOMNPAllocate::__ct(void)+0x50>
        11873c:	e5840000 	str	r0, [r4]
        118740:	e3a00004 	mov	r0, #4	; 0x4
        118744:	e5840004 	str	r0, [r4, #4]
        118748:	e3a00001 	mov	r0, #1	; 0x1
        11874c:	e5c4000c 	strb	r0, [r4, #12]
        118750:	e1a00004 	mov	r0, r4
        118754:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        118758:	6d6e7061 	stcvsl	0, cr7, [lr, -#388]!
    */
}

