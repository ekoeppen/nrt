#include "include/TWRecUnit.h"

/**
 * Symbol: Make__9TWRecUnitSFP7TDomainUlP6TArray
 * Address: 0026e83c
 */
void TWRecUnit::Make() {
    /*
        26e83c:	e1a0c00d 	mov	ip, sp
        26e840:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26e844:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e848:	e1a06000 	mov	r6, r0
        26e84c:	e1a05001 	mov	r5, r1
        26e850:	e1a04002 	mov	r4, r2
        26e854:	e3a00040 	mov	r0, #64	; 0x40
        26e858:	eb657fb6 	bl	1bce738 <$__nw(unsigned int)>
        26e85c:	e1b07000 	movs	r7, r0
        26e860:	0a000003 	beq	26e874 <Make__9TWRecUnitSFP7TDomainUlP6TArray+0x38>
        26e864:	e1a00007 	mov	r0, r7
        26e868:	eb63b137 	bl	1b5ad4c <TSIUnit::$__ct(void)>
        26e86c:	e59f003c 	ldr	r0, [pc, #3c]	; 26e8b0 <Make__9TWRecUnitSFP7TDomainUlP6TArray+0x74>
        26e870:	e5870000 	str	r0, [r7]
        26e874:	e3370000 	teq	r7, #0	; 0x0
        26e878:	0a00000a 	beq	26e8a8 <Make__9TWRecUnitSFP7TDomainUlP6TArray+0x6c>
        26e87c:	e1a03004 	mov	r3, r4
        26e880:	e1a02005 	mov	r2, r5
        26e884:	e1a01006 	mov	r1, r6
        26e888:	e1a00007 	mov	r0, r7
        26e88c:	eb63da8b 	bl	1b652c0 <TWRecUnit::$IWRecUnit(TDomain *, unsigned long, TArray *)>
        26e890:	e3300000 	teq	r0, #0	; 0x0
        26e894:	0a000003 	beq	26e8a8 <Make__9TWRecUnitSFP7TDomainUlP6TArray+0x6c>
        26e898:	e1a00007 	mov	r0, r7
        26e89c:	e1a0e00f 	mov	lr, pc
        26e8a0:	e597f000 	ldr	pc, [r7]
        26e8a4:	e3a07000 	mov	r7, #0	; 0x0
        26e8a8:	e1a00007 	mov	r0, r7
        26e8ac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        26e8b0:	000212dc 	ldreqd	r1, [r2], -ip
    */
}

/**
 * Symbol: TWRecUnit::IWRecUnit(TDomain *, unsigned long, TArray *)
 * Address: 0026e8b4
 */
TWRecUnit::IWRecUnit(TDomain *, unsigned long, TArray *) {
    /*
        26e8b4:	ea63da7f 	b	1b652b8 <TRecUnit::$IRecUnit(TDomain *, unsigned long, TArray *)>
    */
}

