#include "include/TFormPartHandler.h"

/**
 * Symbol: TFormPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)
 * Address: 000cbc74
 */
TFormPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *) {
    /*
         cbc74:	e1a0c00d 	mov	ip, sp
         cbc78:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cbc7c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         cbc80:	e24cb014 	sub	fp, ip, #20	; 0x14
         cbc84:	e1a06000 	mov	r6, r0
         cbc88:	e1a05001 	mov	r5, r1
         cbc8c:	e1a04002 	mov	r4, r2
         cbc90:	e59b7018 	ldr	r7, [fp, #24]
         cbc94:	e24dd004 	sub	sp, sp, #4	; 0x4
         cbc98:	e59f0058 	ldr	r0, [pc, #58]	; cbcf8 <TFormPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x84>
         cbc9c:	eb6bd932 	bl	1bc216c <$Clone(RefVar const &)>
         cbca0:	eb6bd929 	bl	1bc214c <$AllocateRefHandle(long)>
         cbca4:	e58d0000 	str	r0, [sp]
         cbca8:	e1a0100d 	mov	r1, sp
         cbcac:	e1a00006 	mov	r0, r6
         cbcb0:	eb6be9ab 	bl	1bc6364 <TFramePartHandler::$SetFrameRemoveObject(RefVar const &)>
         cbcb4:	e1a0300d 	mov	r3, sp
         cbcb8:	e1a02007 	mov	r2, r7
         cbcbc:	e92d000c 	stmdb	sp!, {r2, r3}
         cbcc0:	e24dd008 	sub	sp, sp, #8	; 0x8
         cbcc4:	e28b0010 	add	r0, fp, #16	; 0x10
         cbcc8:	e8905000 	ldmia	r0, {ip, lr}
         cbccc:	e88d5000 	stmia	sp, {ip, lr}
         cbcd0:	e1a02004 	mov	r2, r4
         cbcd4:	e1a01005 	mov	r1, r5
         cbcd8:	e59f001c 	ldr	r0, [pc, #1c]	; cbcfc <TFormPartHandler::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x88>
         cbcdc:	e49d3004 	ldr	r3, [sp], #4
         cbce0:	eb685d44 	bl	1ae31f8 <$InstallPart__FRC6RefVarT1RC6PartId10SourceTypeP8PartInfoT1>
         cbce4:	e1a04000 	mov	r4, r0
         cbce8:	e5bd000c 	ldr	r0, [sp, #12]!
         cbcec:	eb6bdd32 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cbcf0:	e1a00004 	mov	r0, r4
         cbcf4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         cbcf8:	00681030 	rsbeq	r1, r8, r0, lsr r0
         cbcfc:	00682e68 	rsbeq	r2, r8, r8, ror #28
    */
}

/**
 * Symbol: TFormPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)
 * Address: 000cbd00
 */
TFormPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long) {
    /*
         cbd00:	e1a00002 	mov	r0, r2
         cbd04:	e1a02001 	mov	r2, r1
         cbd08:	e1a01000 	mov	r1, r0
         cbd0c:	e59f0000 	ldr	r0, [pc, #0]	; cbd14 <TFormPartHandler::RemoveFrame(RefVar const &, PartId const &, unsigned long)+0x14>
         cbd10:	ea685d39 	b	1ae31fc <$RemovePart(RefVar const &, PartId const &, PartId const &)>
         cbd14:	00682e68 	rsbeq	r2, r8, r8, ror #28
    */
}

/**
 * Symbol: TFormPartHandler::GetBackupInfo(PartId const &, unsigned long, long, PartInfo *, unsigned long, unsigned char *)
 * Address: 000cbd18
 */
TFormPartHandler::GetBackupInfo(PartId const &, unsigned long, long, PartInfo *, unsigned long, unsigned char *) {
    /*
         cbd18:	e3a00000 	mov	r0, #0	; 0x0
         cbd1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFormPartHandler::Backup(PartId const &, long, CPipe *)
 * Address: 000cbd20
 */
TFormPartHandler::Backup(PartId const &, long, CPipe *) {
    /*
         cbd20:	e3a00000 	mov	r0, #0	; 0x0
         cbd24:	e1a0f00e 	mov	pc, lr
    */
}

