#include "include/PkgPendingImport.h"

/**
 * Symbol: PkgPendingImport::Fulfill(MPExportItem *)
 * Address: 000cf8bc
 */
PkgPendingImport::Fulfill(MPExportItem *) {
    /*
         cf8bc:	e1a0c00d 	mov	ip, sp
         cf8c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         cf8c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         cf8c8:	e1a04000 	mov	r4, r0
         cf8cc:	e1a05001 	mov	r5, r1
         cf8d0:	e1a00001 	mov	r0, r1
         cf8d4:	eb6607f6 	bl	1a518b4 <$AllocateExportTable(MPExportItem *)>
         cf8d8:	e2851004 	add	r1, r5, #4	; 0x4
         cf8dc:	e2842018 	add	r2, r4, #24	; 0x18
         cf8e0:	e8920005 	ldmia	r2, {r0, r2}
         cf8e4:	e0800102 	add	r0, r0, r2, lsl #2
         cf8e8:	e5a01014 	str	r1, [r0, #20]!
         cf8ec:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         cf8f0:	e5900000 	ldr	r0, [r0]
         cf8f4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         cf8f8:	ea66144f 	b	1a54a3c <$FlushPackageCache(unsigned long)>
    */
}

/**
 * Symbol: PkgPendingImport::Match(void *)
 * Address: 000cf8fc
 */
PkgPendingImport::Match(void *) {
    /*
         cf8fc:	e5900018 	ldr	r0, [r0, #24]	; fField24
         cf900:	e5900004 	ldr	r0, [r0, #4]	; fField4
         cf904:	e1300001 	teq	r0, r1
         cf908:	13a00000 	movne	r0, #0	; 0x0
         cf90c:	03a00001 	moveq	r0, #1	; 0x1
         cf910:	e1a0f00e 	mov	pc, lr
    */
}

