#include "include/TPkBeginLoadEvent.h"

/**
 * Symbol: TPkBeginLoadEvent::__ct(SourceType, PartSource const &, unsigned long, unsigned long, unsigned char)
 * Address: 0015c2f4
 */
TPkBeginLoadEvent::TPkBeginLoadEvent(SourceType, PartSource const &, unsigned long, unsigned long, unsigned char) {
    /*
        15c2f4:	e1a0c00d 	mov	ip, sp
        15c2f8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15c2fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c300:	e1a06001 	mov	r6, r1
        15c304:	e1a05002 	mov	r5, r2
        15c308:	e1b04000 	movs	r4, r0
        15c30c:	e1a07003 	mov	r7, r3
        15c310:	e59b000c 	ldr	r0, [fp, #12]
        15c314:	e20080ff 	and	r8, r0, #255	; 0xff
        15c318:	e59b9008 	ldr	r9, [fp, #8]
        15c31c:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        15c320:	1a000003 	bne	15c334 <TPkBeginLoadEvent::__ct(SourceType, PartSource const &, unsigned long, unsigned long, unsigned char)+0x40>
        15c324:	e3a00084 	mov	r0, #132	; 0x84
        15c328:	eb69c902 	bl	1bce738 <$__nw(unsigned int)>
        15c32c:	e1b04000 	movs	r4, r0
        15c330:	0a00000f 	beq	15c374 <TPkBeginLoadEvent::__ct(SourceType, PartSource const &, unsigned long, unsigned long, unsigned char)+0x80>
        15c334:	e1a00004 	mov	r0, r4
        15c338:	eb664d28 	bl	1aef7e0 <TPkBaseEvent::$__ct(void)>
        15c33c:	e59f0038 	ldr	r0, [pc, #38]	; 15c37c <TPkBeginLoadEvent::__ct(SourceType, PartSource const &, unsigned long, unsigned long, unsigned char)+0x88>
        15c340:	e5840008 	str	r0, [r4, #8]
        15c344:	e3a00000 	mov	r0, #0	; 0x0
        15c348:	e584000c 	str	r0, [r4, #12]
        15c34c:	e584002c 	str	r0, [r4, #44]
        15c350:	e5849014 	str	r9, [r4, #20]
        15c354:	e584a010 	str	sl, [r4, #16]
        15c358:	e2840018 	add	r0, r4, #24	; 0x18
        15c35c:	e5805004 	str	r5, [r0, #4]	; fField4
        15c360:	e5806000 	str	r6, [r0]
        15c364:	e2840020 	add	r0, r4, #32	; 0x20
        15c368:	e8975000 	ldmia	r7, {ip, lr}
        15c36c:	e8805000 	stmia	r0, {ip, lr}
        15c370:	e5c48028 	strb	r8, [r4, #40]
        15c374:	e1a00004 	mov	r0, r4
        15c378:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        15c37c:	706b626c 	rsbvc	r6, fp, ip, ror #4
    */
}

