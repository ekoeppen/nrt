#include "include/TtspsPart.h"

/**
 * Symbol: TtspsPart::__dt(void)
 * Address: 00229a48
 */
TtspsPart::~TtspsPart(void) {
    /*
        229a48:	e1a0c00d 	mov	ip, sp
        229a4c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        229a50:	e24cb004 	sub	fp, ip, #4	; 0x4
        229a54:	e1a04000 	mov	r4, r0
        229a58:	e1a05001 	mov	r5, r1
        229a5c:	e59f0020 	ldr	r0, [pc, #20]	; 229a84 <TtspsPart::__dt(void)+0x3c>
        229a60:	e5840000 	str	r0, [r4]
        229a64:	e1a00004 	mov	r0, r4
        229a68:	e3a01000 	mov	r1, #0	; 0x0
        229a6c:	eb669323 	bl	1bce700 <TPartHandler::$__dt(void)>
        229a70:	e3150001 	tst	r5, #1	; 0x1
        229a74:	11a00004 	movne	r0, r4
        229a78:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        229a7c:	1a668f17 	bne	1bcd6e0 <$__dl(void *)>
        229a80:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        229a84:	00021400 	andeq	r1, r2, r0, lsl #8
    */
}

/**
 * Symbol: TtspsPart::__ct(void)
 * Address: 00229a88
 */
TtspsPart::TtspsPart(void) {
    /*
        229a88:	e1a0c00d 	mov	ip, sp
        229a8c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        229a90:	e24cb004 	sub	fp, ip, #4	; 0x4
        229a94:	e1b04000 	movs	r4, r0
        229a98:	1a000003 	bne	229aac <TtspsPart::__ct(void)+0x24>
        229a9c:	e3a00040 	mov	r0, #64	; 0x40
        229aa0:	eb669324 	bl	1bce738 <$__nw(unsigned int)>
        229aa4:	e1b04000 	movs	r4, r0
        229aa8:	0a000005 	beq	229ac4 <TtspsPart::__ct(void)+0x3c>
        229aac:	e1a00004 	mov	r0, r4
        229ab0:	eb668ef2 	bl	1bcd680 <TPartHandler::$__ct(void)>
        229ab4:	e59f0010 	ldr	r0, [pc, #10]	; 229acc <TtspsPart::__ct(void)+0x44>
        229ab8:	e5840000 	str	r0, [r4]
        229abc:	e3a00000 	mov	r0, #0	; 0x0
        229ac0:	e584003c 	str	r0, [r4, #60]	; fField60
        229ac4:	e1a00004 	mov	r0, r4
        229ac8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        229acc:	00021400 	andeq	r1, r2, r0, lsl #8
    */
}

/**
 * Symbol: TtspsPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)
 * Address: 00229ad0
 */
TtspsPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *) {
    /*
        229ad0:	e1a0c00d 	mov	ip, sp
        229ad4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        229ad8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        229adc:	e24cb014 	sub	fp, ip, #20	; 0x14
        229ae0:	e1a05000 	mov	r5, r0
        229ae4:	e1a04001 	mov	r4, r1
        229ae8:	e3a07000 	mov	r7, #0	; 0x0
        229aec:	e3a00004 	mov	r0, #4	; 0x4
        229af0:	eb669310 	bl	1bce738 <$__nw(unsigned int)>
        229af4:	e1b06000 	movs	r6, r0
        229af8:	0a000004 	beq	229b10 <TtspsPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x40>
        229afc:	e3a00002 	mov	r0, #2	; 0x2
        229b00:	eb666191 	bl	1bc214c <$AllocateRefHandle(long)>
        229b04:	e3a01000 	mov	r1, #0	; 0x0
        229b08:	e5860000 	str	r0, [r6]
        229b0c:	e5a01004 	str	r1, [r0, #4]!
        229b10:	e5a5603c 	str	r6, [r5, #60]!	; fField60
        229b14:	e1b00006 	movs	r0, r6
        229b18:	1a000002 	bne	229b28 <TtspsPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x58>
        229b1c:	eb66e17f 	bl	1be2120 <$MemError>
        229b20:	e1a07000 	mov	r7, r0
        229b24:	ea000003 	b	229b38 <TtspsPart::InstallFrame(RefVar const &, PartId const &, SourceType, PartInfo *)+0x68>
        229b28:	e5941000 	ldr	r1, [r4]
        229b2c:	e5911000 	ldr	r1, [r1]
        229b30:	e5900000 	ldr	r0, [r0]
        229b34:	e5801000 	str	r1, [r0]
        229b38:	e1a00007 	mov	r0, r7
        229b3c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TtspsPart::RemoveFrame(RefVar const &, PartId const &, unsigned long)
 * Address: 00229b40
 */
TtspsPart::RemoveFrame(RefVar const &, PartId const &, unsigned long) {
    /*
        229b40:	e3a00000 	mov	r0, #0	; 0x0
        229b44:	e1a0f00e 	mov	pc, lr
    */
}

