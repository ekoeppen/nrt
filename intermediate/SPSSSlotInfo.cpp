#include "include/SPSSSlotInfo.h"

/**
 * Symbol: SPSSSlotInfo::Clear(void)
 * Address: 00155bc4
 */
SPSSSlotInfo::Clear(void) {
    /*
        155bc4:	e1a0c00d 	mov	ip, sp
        155bc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        155bcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        155bd0:	e1a04000 	mov	r4, r0
        155bd4:	e3a00000 	mov	r0, #0	; 0x0
        155bd8:	e5840000 	str	r0, [r4]
        155bdc:	e2840004 	add	r0, r4, #4	; 0x4
        155be0:	e3a010b8 	mov	r1, #184	; 0xb8
        155be4:	eb6a290c 	bl	1be001c <$ZeroBytes>
        155be8:	e3a05000 	mov	r5, #0	; 0x0
        155bec:	e0850105 	add	r0, r5, r5, lsl #2
        155bf0:	e0840200 	add	r0, r4, r0, lsl #4
        155bf4:	e28000bc 	add	r0, r0, #188	; 0xbc
        155bf8:	eb667b9a 	bl	1af4a68 <SPSSStoreInfo::$Clear(void)>
        155bfc:	e2855001 	add	r5, r5, #1	; 0x1
        155c00:	e3550004 	cmp	r5, #4	; 0x4
        155c04:	bafffff8 	blt	155bec <SPSSSlotInfo::Clear(void)+0x28>
        155c08:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

