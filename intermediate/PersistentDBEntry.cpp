#include "include/PersistentDBEntry.h"

/**
 * Symbol: PersistentDBEntry::Init(unsigned long, unsigned char, unsigned long)
 * Address: 0011de74
 */
PersistentDBEntry::Init(unsigned long, unsigned char, unsigned long) {
    /*
        11de74:	e1a0c00d 	mov	ip, sp
        11de78:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11de7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11de80:	e1a04000 	mov	r4, r0
        11de84:	e1a05003 	mov	r5, r3
        11de88:	e31200ff 	tst	r2, #255	; 0xff
        11de8c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        11de90:	0a000019 	beq	11defc <PersistentDBEntry::Init(unsigned long, unsigned char, unsigned long)+0x88>
        11de94:	e3a00000 	mov	r0, #0	; 0x0
        11de98:	e5840004 	str	r0, [r4, #4]	; fField4
        11de9c:	e5841000 	str	r1, [r4]
        11dea0:	e5840008 	str	r0, [r4, #8]	; fField8
        11dea4:	e584000c 	str	r0, [r4, #12]	; fField12
        11dea8:	e5840010 	str	r0, [r4, #16]	; fField16
        11deac:	eb09b2fe 	bl	38aaac <C$$dtorvec$$Limit+0x138>
        11deb0:	e1a01000 	mov	r1, r0
        11deb4:	e2840014 	add	r0, r4, #20	; 0x14
        11deb8:	eb677bd6 	bl	1afce18 <TSingleQContainer::$Init(unsigned long)>
        11debc:	e5940020 	ldr	r0, [r4, #32]	; fField32
        11dec0:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        11dec4:	e3800080 	orr	r0, r0, #128	; 0x80
        11dec8:	e20510ff 	and	r1, r5, #255	; 0xff
        11decc:	e1800401 	orr	r0, r0, r1, lsl #8
        11ded0:	e3800040 	orr	r0, r0, #64	; 0x40
        11ded4:	e1a0300d 	mov	r3, sp
        11ded8:	e28d2004 	add	r2, sp, #4	; 0x4
        11dedc:	e1a01005 	mov	r1, r5
        11dee0:	e5840020 	str	r0, [r4, #32]	; fField32
        11dee4:	e3a00000 	mov	r0, #0	; 0x0
        11dee8:	ebfffe62 	bl	11d878 <FindEntryByIndex__13MemObjManagerSF10MemObjTypeUlPvPl>
        11deec:	e3300000 	teq	r0, #0	; 0x0
        11def0:	03e00000 	mvneq	r0, #0	; 0x0
        11def4:	159d0004 	ldrne	r0, [sp, #4]	; fField4
        11def8:	e584001c 	str	r0, [r4, #28]	; fField28
        11defc:	e5940020 	ldr	r0, [r4, #32]	; fField32
        11df00:	e1a00800 	mov	r0, r0, lsl #16
        11df04:	e1a00820 	mov	r0, r0, lsr #16
        11df08:	e5a40020 	str	r0, [r4, #32]!	; fField32
        11df0c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

