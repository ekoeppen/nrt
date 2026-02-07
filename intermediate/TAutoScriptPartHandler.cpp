#include "include/TAutoScriptPartHandler.h"

/**
 * Symbol: TAutoScriptPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)
 * Address: 000cbd28
 */
TAutoScriptPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *) {
    /*
         cbd28:	e1a0c00d 	mov	ip, sp
         cbd2c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cbd30:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         cbd34:	e24cb014 	sub	fp, ip, #20	; 0x14
         cbd38:	e1a06000 	mov	r6, r0
         cbd3c:	e1a05001 	mov	r5, r1
         cbd40:	e1a04002 	mov	r4, r2
         cbd44:	e59b7018 	ldr	r7, [fp, #24]
         cbd48:	e24dd004 	sub	sp, sp, #4	; 0x4
         cbd4c:	e59f0058 	ldr	r0, [pc, #58]	; cbdac <TAutoScriptPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x84>
         cbd50:	eb6bd905 	bl	1bc216c <$Clone(RefVar const &)>
         cbd54:	eb6bd8fc 	bl	1bc214c <$AllocateRefHandle(long)>
         cbd58:	e58d0000 	str	r0, [sp]
         cbd5c:	e1a0100d 	mov	r1, sp
         cbd60:	e1a00006 	mov	r0, r6
         cbd64:	eb6be97e 	bl	1bc6364 <TFramePartHandler::$SetFrameRemoveObject(RefVar const &)>
         cbd68:	e1a0300d 	mov	r3, sp
         cbd6c:	e1a02007 	mov	r2, r7
         cbd70:	e92d000c 	stmdb	sp!, {r2, r3}
         cbd74:	e24dd008 	sub	sp, sp, #8	; 0x8
         cbd78:	e28b0010 	add	r0, fp, #16	; 0x10
         cbd7c:	e8905000 	ldmia	r0, {ip, lr}
         cbd80:	e88d5000 	stmia	sp, {ip, lr}
         cbd84:	e1a02004 	mov	r2, r4
         cbd88:	e1a01005 	mov	r1, r5
         cbd8c:	e59f001c 	ldr	r0, [pc, #1c]	; cbdb0 <TAutoScriptPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x88>
         cbd90:	e49d3004 	ldr	r3, [sp], #4
         cbd94:	eb685d17 	bl	1ae31f8 <$InstallPart__FRC6RefVarT1RC6PartId10SourceTypeP8PartInfoT1>
         cbd98:	e1a04000 	mov	r4, r0
         cbd9c:	e5bd000c 	ldr	r0, [sp, #12]!
         cbda0:	eb6bdd05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cbda4:	e1a00004 	mov	r0, r4
         cbda8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         cbdac:	00681030 	rsbeq	r1, r8, r0, lsr r0
         cbdb0:	00681f60 	rsbeq	r1, r8, r0, ror #30
    */
}

/**
 * Symbol: TAutoScriptPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)
 * Address: 000cbdb4
 */
TAutoScriptPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long) {
    /*
         cbdb4:	e1a00002 	mov	r0, r2
         cbdb8:	e1a02001 	mov	r2, r1
         cbdbc:	e1a01000 	mov	r1, r0
         cbdc0:	e59f0000 	ldr	r0, [pc, #0]	; cbdc8 <TAutoScriptPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0x14>
         cbdc4:	ea685d0c 	b	1ae31fc <$RemovePart(RefVar const &, PartId const &, PartId const &)>
         cbdc8:	00681f60 	rsbeq	r1, r8, r0, ror #30
    */
}

