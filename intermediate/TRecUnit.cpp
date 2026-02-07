#include "include/TRecUnit.h"

/**
 * Symbol: TRecUnit::IRecUnit(TDomain *, unsigned long, TArray *)
 * Address: 0026e810
 */
TRecUnit::IRecUnit(TDomain *, unsigned long, TArray *) {
    /*
        26e810:	e1a0c00d 	mov	ip, sp
        26e814:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        26e818:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e81c:	e1a0c003 	mov	ip, r3
        26e820:	e3a03000 	mov	r3, #0	; 0x0
        26e824:	e580303c 	str	r3, [r0, #60]	; fField60
        26e828:	e3a03010 	mov	r3, #16	; 0x10
        26e82c:	e92d0008 	stmdb	sp!, {r3}
        26e830:	e1a0300c 	mov	r3, ip
        26e834:	eb63f77b 	bl	1b6c628 <TStdWordUnit::$IStdWordUnit(TDomain *, unsigned long, TArray *, unsigned long)>
        26e838:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TRecUnit::IDispose(void)
 * Address: 0026e8b8
 */
TRecUnit::IDispose(void) {
    /*
        26e8b8:	e1a0c00d 	mov	ip, sp
        26e8bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26e8c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e8c4:	e1a04000 	mov	r4, r0
        26e8c8:	e5900014 	ldr	r0, [r0, #20]
        26e8cc:	e594103c 	ldr	r1, [r4, #60]	; fField60
        26e8d0:	e3310000 	teq	r1, #0	; 0x0
        26e8d4:	1b63de9b 	blne	1b66348 <TWRecDomain::$UnitInfoFreePtr(char *)>
        26e8d8:	e1a00004 	mov	r0, r4
        26e8dc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        26e8e0:	ea63c5c0 	b	1b5ffe8 <TSIUnit::$IDispose(void)>
    */
}

/**
 * Symbol: TRecUnit::Dump(TMsg *)
 * Address: 0026e8e4
 */
TRecUnit::Dump(TMsg *) {
    /*
        26e8e4:	e1a0f00e 	mov	pc, lr
    */
}

