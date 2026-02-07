#include "DDKIncludes/Packages/PartHandler.h"

/**
 * Symbol: TPkPartInstallEvent::__ct(PartId const &, ExtendedPartInfo const &, SourceType, PartSource const &)
 * Address: 0015c464
 */
TPkPartInstallEvent::TPkPartInstallEvent(PartId const &, ExtendedPartInfo const &, SourceType, PartSource const &) {
    /*
        15c464:	e1a0c00d 	mov	ip, sp
        15c468:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15c46c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        15c470:	e24cb014 	sub	fp, ip, #20	; 0x14
        15c474:	e1b04000 	movs	r4, r0
        15c478:	e1a06001 	mov	r6, r1
        15c47c:	e1a05002 	mov	r5, r2
        15c480:	e59b7018 	ldr	r7, [fp, #24]
        15c484:	1a000003 	bne	15c498 <TPkPartInstallEvent::__ct(PartId const &, ExtendedPartInfo const &, SourceType, PartSource const &)+0x34>
        15c488:	e3a000f4 	mov	r0, #244	; 0xf4
        15c48c:	eb69c8a9 	bl	1bce738 <$__nw(unsigned int)>
        15c490:	e1b04000 	movs	r4, r0
        15c494:	0a00001f 	beq	15c518 <TPkPartInstallEvent::__ct(PartId const &, ExtendedPartInfo const &, SourceType, PartSource const &)+0xb4>
        15c498:	e1a00004 	mov	r0, r4
        15c49c:	eb664ccf 	bl	1aef7e0 <TPkBaseEvent::$__ct(void)>
        15c4a0:	e59f0078 	ldr	r0, [pc, #78]	; 15c520 <TPkPartInstallEvent::__ct(PartId const &, ExtendedPartInfo const &, SourceType, PartSource const &)+0xbc>
        15c4a4:	e5840008 	str	r0, [r4, #8]
        15c4a8:	e2840010 	add	r0, r4, #16	; 0x10
        15c4ac:	e8965000 	ldmia	r6, {ip, lr}
        15c4b0:	e8805000 	stmia	r0, {ip, lr}
        15c4b4:	e2840018 	add	r0, r4, #24	; 0x18
        15c4b8:	e1a0e005 	mov	lr, r5
        15c4bc:	e3a0c009 	mov	ip, #9	; 0x9
        15c4c0:	e8be000e 	ldmia	lr!, {r1, r2, r3}
        15c4c4:	e8a0000e 	stmia	r0!, {r1, r2, r3}
        15c4c8:	e25cc001 	subs	ip, ip, #1	; 0x1
        15c4cc:	1afffffb 	bne	15c4c0 <TPkPartInstallEvent::__ct(PartId const &, ExtendedPartInfo const &, SourceType, PartSource const &)+0x5c>
        15c4d0:	e2841084 	add	r1, r4, #132	; 0x84
        15c4d4:	e28b0010 	add	r0, fp, #16	; 0x10
        15c4d8:	e8901008 	ldmia	r0, {r3, ip}
        15c4dc:	e8811008 	stmia	r1, {r3, ip}
        15c4e0:	e284008c 	add	r0, r4, #140	; 0x8c
        15c4e4:	e8975000 	ldmia	r7, {ip, lr}
        15c4e8:	e8805000 	stmia	r0, {ip, lr}
        15c4ec:	e5942028 	ldr	r2, [r4, #40]
        15c4f0:	e2841094 	add	r1, r4, #148	; 0x94
        15c4f4:	e5950014 	ldr	r0, [r5, #20]
        15c4f8:	eb6a0a95 	bl	1bdef54 <$BlockMove>
        15c4fc:	e5d4003a 	ldrb	r0, [r4, #58]
        15c500:	e3300000 	teq	r0, #0	; 0x0
        15c504:	0a000003 	beq	15c518 <TPkPartInstallEvent::__ct(PartId const &, ExtendedPartInfo const &, SourceType, PartSource const &)+0xb4>
        15c508:	e28400d4 	add	r0, r4, #212	; 0xd4
        15c50c:	e3a02020 	mov	r2, #32	; 0x20
        15c510:	e5b51018 	ldr	r1, [r5, #24]!
        15c514:	eb696568 	bl	1bb5abc <$strncpy>
        15c518:	e1a00004 	mov	r0, r4
        15c51c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        15c520:	70727469 	rsbvcs	r7, r2, r9, ror #8
    */
}

