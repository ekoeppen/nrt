#include "include/TtstpPart.h"

/**
 * Symbol: TtstpPart::Install(PartId const &, SourceType, PartInfo *)
 * Address: 00228d1c
 */
TtstpPart::Install(PartId const &, SourceType, PartInfo *) {
    /*
        228d1c:	e1a0c00d 	mov	ip, sp
        228d20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        228d24:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        228d28:	e24cb014 	sub	fp, ip, #20	; 0x14
        228d2c:	e1a04000 	mov	r4, r0
        228d30:	e59b0014 	ldr	r0, [fp, #20]
        228d34:	e590000c 	ldr	r0, [r0, #12]
        228d38:	eb66e500 	bl	1be2140 <$NewPtr>
        228d3c:	e1b05000 	movs	r5, r0
        228d40:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        228d44:	0a66e4f5 	beq	1be2120 <$MemError>
        228d48:	e1a01005 	mov	r1, r5
        228d4c:	e1a00004 	mov	r0, r4
        228d50:	eb669eb8 	bl	1bd0838 <TPartHandler::$Copy(void *)>
        228d54:	e3300000 	teq	r0, #0	; 0x0
        228d58:	05a45038 	streq	r5, [r4, #56]!	; fField56
        228d5c:	059f1004 	ldreq	r1, [pc, #4]	; 228d68 <TtstpPart::Install(PartId const &, SourceType, PartInfo *)+0x4c>
        228d60:	05a15018 	streq	r5, [r1, #24]!
        228d64:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        228d68:	0c104d48 	ldceq	13, cr4, [r0], -#288
    */
}

/**
 * Symbol: TtstpPart::Remove(PartId const &, unsigned long, long)
 * Address: 00228d6c
 */
TtstpPart::Remove(PartId const &, unsigned long, long) {
    /*
        228d6c:	e1a0c00d 	mov	ip, sp
        228d70:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        228d74:	e24cb004 	sub	fp, ip, #4	; 0x4
        228d78:	e3a04000 	mov	r4, #0	; 0x0
        228d7c:	e5900038 	ldr	r0, [r0, #56]	; fField56
        228d80:	eb66e0cb 	bl	1be10b4 <$DisposPtr>
        228d84:	e1a00004 	mov	r0, r4
        228d88:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

