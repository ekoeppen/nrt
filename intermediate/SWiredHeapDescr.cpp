#include "include/SWiredHeapDescr.h"

/**
 * Symbol: SWiredHeapDescr::GrowByOnePage(void)
 * Address: 001c5e3c
 */
SWiredHeapDescr::GrowByOnePage(void) {
    /*
        1c5e3c:	e1a0c00d 	mov	ip, sp
        1c5e40:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1c5e44:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c5e48:	e1a04000 	mov	r4, r0
        1c5e4c:	e590100c 	ldr	r1, [r0, #12]	; fField12
        1c5e50:	e5900000 	ldr	r0, [r0]
        1c5e54:	e0811000 	add	r1, r1, r0
        1c5e58:	e2811a01 	add	r1, r1, #4096	; 0x1000
        1c5e5c:	eb6857d8 	bl	1bdbdc4 <$SetHeapLimits>
        1c5e60:	e1b05000 	movs	r5, r0
        1c5e64:	1a00000f 	bne	1c5ea8 <SWiredHeapDescr::GrowByOnePage(void)+0x6c>
        1c5e68:	e5940000 	ldr	r0, [r4]
        1c5e6c:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1c5e70:	e0810000 	add	r0, r1, r0
        1c5e74:	e2801a01 	add	r1, r0, #4096	; 0x1000
        1c5e78:	e3a02001 	mov	r2, #1	; 0x1
        1c5e7c:	eb684334 	bl	1bd6b54 <$LockHeapRange>
        1c5e80:	e1b05000 	movs	r5, r0
        1c5e84:	0594000c 	ldreq	r0, [r4, #12]	; fField12
        1c5e88:	02800a01 	addeq	r0, r0, #4096	; 0x1000
        1c5e8c:	05a4000c 	streq	r0, [r4, #12]!	; fField12
        1c5e90:	0a000004 	beq	1c5ea8 <SWiredHeapDescr::GrowByOnePage(void)+0x6c>
        1c5e94:	e494000c 	ldr	r0, [r4], #12	; fField12
        1c5e98:	e5941000 	ldr	r1, [r4]
        1c5e9c:	e0811000 	add	r1, r1, r0
        1c5ea0:	e2411a01 	sub	r1, r1, #4096	; 0x1000
        1c5ea4:	eb6857c6 	bl	1bdbdc4 <$SetHeapLimits>
        1c5ea8:	e1a00005 	mov	r0, r5
        1c5eac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: SWiredHeapDescr::ShrinkByOnePage(void)
 * Address: 001c5eb0
 */
SWiredHeapDescr::ShrinkByOnePage(void) {
    /*
        1c5eb0:	e1a0c00d 	mov	ip, sp
        1c5eb4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1c5eb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c5ebc:	e1a04000 	mov	r4, r0
        1c5ec0:	e590100c 	ldr	r1, [r0, #12]	; fField12
        1c5ec4:	e5900000 	ldr	r0, [r0]
        1c5ec8:	e0811000 	add	r1, r1, r0
        1c5ecc:	e2410a01 	sub	r0, r1, #4096	; 0x1000
        1c5ed0:	eb685ff2 	bl	1bddea0 <$UnlockHeapRange>
        1c5ed4:	e3300000 	teq	r0, #0	; 0x0
        1c5ed8:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1c5edc:	e5940000 	ldr	r0, [r4]
        1c5ee0:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1c5ee4:	e0811000 	add	r1, r1, r0
        1c5ee8:	e2411a01 	sub	r1, r1, #4096	; 0x1000
        1c5eec:	eb6857b4 	bl	1bdbdc4 <$SetHeapLimits>
        1c5ef0:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1c5ef4:	e2411a01 	sub	r1, r1, #4096	; 0x1000
        1c5ef8:	e5a4100c 	str	r1, [r4, #12]!	; fField12
        1c5efc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

