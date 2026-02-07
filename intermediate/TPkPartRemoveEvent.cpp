#include "DDKIncludes/Packages/PartHandler.h"

/**
 * Symbol: TPkPartRemoveEvent::__ct(PartId, long, unsigned long, long)
 * Address: 0015c1d8
 */
TPkPartRemoveEvent::TPkPartRemoveEvent(PartId, long, unsigned long, long) {
    /*
        15c1d8:	e1a0c00d 	mov	ip, sp
        15c1dc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        15c1e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c1e4:	e1a06001 	mov	r6, r1
        15c1e8:	e1a05002 	mov	r5, r2
        15c1ec:	e1b04000 	movs	r4, r0
        15c1f0:	e1a07003 	mov	r7, r3
        15c1f4:	e59b8008 	ldr	r8, [fp, #8]
        15c1f8:	e59b9004 	ldr	r9, [fp, #4]	; TPkPartRemoveEvent
        15c1fc:	1a000003 	bne	15c210 <TPkPartRemoveEvent::__ct(PartId, long, unsigned long, long)+0x38>
        15c200:	e3a00024 	mov	r0, #36	; 0x24
        15c204:	eb69c94b 	bl	1bce738 <$__nw(unsigned int)>
        15c208:	e1b04000 	movs	r4, r0
        15c20c:	0a00000a 	beq	15c23c <TPkPartRemoveEvent::__ct(PartId, long, unsigned long, long)+0x64>
        15c210:	e1a00004 	mov	r0, r4
        15c214:	eb664d71 	bl	1aef7e0 <TPkBaseEvent::$__ct(void)>
        15c218:	e59f0024 	ldr	r0, [pc, #24]	; 15c244 <TPkPartRemoveEvent::__ct(PartId, long, unsigned long, long)+0x6c>
        15c21c:	e5840008 	str	r0, [r4, #8]
        15c220:	e2840010 	add	r0, r4, #16	; 0x10
        15c224:	e5805004 	str	r5, [r0, #4]	; TPkPartRemoveEvent
        15c228:	e5806000 	str	r6, [r0]
        15c22c:	e2844018 	add	r4, r4, #24	; 0x18
        15c230:	e8840280 	stmia	r4, {r7, r9}
        15c234:	e5848008 	str	r8, [r4, #8]
        15c238:	e2444018 	sub	r4, r4, #24	; 0x18
        15c23c:	e1a00004 	mov	r0, r4
        15c240:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        15c244:	70727472 	rsbvcs	r7, r2, r2, ror r4
    */
}

