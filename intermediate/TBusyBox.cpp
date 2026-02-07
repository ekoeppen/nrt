#include "include/TBusyBox.h"

/**
 * Symbol: TBusyBox::__ct(void)
 * Address: 00218bd4
 */
TBusyBox::TBusyBox(void) {
    /*
        218bd4:	e1a0c00d 	mov	ip, sp
        218bd8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        218bdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        218be0:	e1b04000 	movs	r4, r0
        218be4:	1a000003 	bne	218bf8 <TBusyBox::__ct(void)+0x24>
        218be8:	e3a00038 	mov	r0, #56	; 0x38
        218bec:	eb66d6d1 	bl	1bce738 <$__nw(unsigned int)>
        218bf0:	e1b04000 	movs	r4, r0
        218bf4:	0a00001a 	beq	218c64 <TBusyBox::__ct(void)+0x90>
        218bf8:	eb66eb75 	bl	1bd39d4 <$GetGlobals>
        218bfc:	e5b01064 	ldr	r1, [r0, #100]!	; fField100
        218c00:	e1a00004 	mov	r0, r4
        218c04:	e3a02000 	mov	r2, #0	; 0x0
        218c08:	eb665f05 	bl	1bb0824 <TTimerElement::$__ct(TTimerQueue *, unsigned long)>
        218c0c:	e59f0058 	ldr	r0, [pc, #58]	; 218c6c <TBusyBox::__ct(void)+0x98>
        218c10:	e3a05000 	mov	r5, #0	; 0x0
        218c14:	e5840000 	str	r0, [r4]
        218c18:	e5845034 	str	r5, [r4, #52]	; fField52
        218c1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        218c20:	e1a0100d 	mov	r1, sp
        218c24:	e3a00002 	mov	r0, #2	; 0x2
        218c28:	eb67631a 	bl	1bf1898 <$GetGrafInfo(long, void *)>
        218c2c:	e59d0000 	ldr	r0, [sp]
        218c30:	e1a00100 	mov	r0, r0, lsl #2
        218c34:	e5c4001d 	strb	r0, [r4, #29]
        218c38:	e1a00440 	mov	r0, r0, asr #8
        218c3c:	e5c4001c 	strb	r0, [r4, #28]
        218c40:	e59d0000 	ldr	r0, [sp]
        218c44:	e2800101 	add	r0, r0, #1073741824	; 0x40000000
        218c48:	e5840028 	str	r0, [r4, #40]
        218c4c:	e3a00048 	mov	r0, #72	; 0x48
        218c50:	e5c4002d 	strb	r0, [r4, #45]
        218c54:	e5c4502c 	strb	r5, [r4, #44]
        218c58:	e5c4002f 	strb	r0, [r4, #47]
        218c5c:	e5c4502e 	strb	r5, [r4, #46]
        218c60:	e28dd004 	add	sp, sp, #4	; 0x4
        218c64:	e1a00004 	mov	r0, r4
        218c68:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        218c6c:	0001ffd0 	ldreqd	pc, [r1], -r0
    */
}

/**
 * Symbol: TBusyBox::Timeout(void)
 * Address: 00218c70
 */
TBusyBox::Timeout(void) {
    /*
        218c70:	ea634633 	b	1aea544 <TBusyBox::$ShowBusyBox(void)>
    */
}

/**
 * Symbol: TBusyBox::DoCommand(long)
 * Address: 00218c74
 */
TBusyBox::DoCommand(long) {
    /*
        218c74:	e1a0c00d 	mov	ip, sp
        218c78:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        218c7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        218c80:	e1a04000 	mov	r4, r0
        218c84:	e2410033 	sub	r0, r1, #51	; 0x33
        218c88:	e3500004 	cmp	r0, #4	; 0x4
        218c8c:	908ff100 	addls	pc, pc, r0, lsl #2
        218c90:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        218c94:	ea000007 	b	218cb8 <TBusyBox::DoCommand(long)+0x44>
        218c98:	ea000009 	b	218cc4 <TBusyBox::DoCommand(long)+0x50>
        218c9c:	ea000000 	b	218ca4 <TBusyBox::DoCommand(long)+0x30>
        218ca0:	ea00000a 	b	218cd0 <TBusyBox::DoCommand(long)+0x5c>
        218ca4:	e1a00004 	mov	r0, r4
        218ca8:	eb634624 	bl	1aea540 <TBusyBox::$HideBusyBox(void)>
        218cac:	e1a00004 	mov	r0, r4
        218cb0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        218cb4:	ea664e57 	b	1bac618 <TTimerElement::$Cancel(void)>
        218cb8:	e1a00004 	mov	r0, r4
        218cbc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        218cc0:	ea63461f 	b	1aea544 <TBusyBox::$ShowBusyBox(void)>
        218cc4:	e1a00004 	mov	r0, r4
        218cc8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        218ccc:	ea63461b 	b	1aea540 <TBusyBox::$HideBusyBox(void)>
        218cd0:	e1a00004 	mov	r0, r4
        218cd4:	eb634619 	bl	1aea540 <TBusyBox::$HideBusyBox(void)>
        218cd8:	e1a00004 	mov	r0, r4
        218cdc:	e59f100c 	ldr	r1, [pc, #c]	; 218cf0 <TBusyBox::DoCommand(long)+0x7c>
        218ce0:	eb665692 	bl	1bae730 <TTimerElement::$Prime(unsigned long)>
        218ce4:	e3e00000 	mvn	r0, #0	; 0x0
        218ce8:	e5a40034 	str	r0, [r4, #52]!	; fField52
        218cec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        218cf0:	00383e70 	eoreqs	r3, r8, r0, ror lr
    */
}

/**
 * Symbol: TBusyBox::HideBusyBox(void)
 * Address: 00218cf4
 */
TBusyBox::HideBusyBox(void) {
    /*
        218cf4:	e1a0c00d 	mov	ip, sp
        218cf8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        218cfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        218d00:	e1a04000 	mov	r4, r0
        218d04:	e5900034 	ldr	r0, [r0, #52]	; fField52
        218d08:	e3300001 	teq	r0, #1	; 0x1
        218d0c:	02840018 	addeq	r0, r4, #24	; 0x18
        218d10:	0b64f378 	bleq	1b55af8 <$QDHideBusyBox(PixelMap *)>
        218d14:	e3a00000 	mov	r0, #0	; 0x0
        218d18:	e5a40034 	str	r0, [r4, #52]!	; fField52
        218d1c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TBusyBox::ShowBusyBox(void)
 * Address: 00218d20
 */
TBusyBox::ShowBusyBox(void) {
    /*
        218d20:	e1a0c00d 	mov	ip, sp
        218d24:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        218d28:	e24cb004 	sub	fp, ip, #4	; 0x4
        218d2c:	e1a04000 	mov	r4, r0
        218d30:	e5900034 	ldr	r0, [r0, #52]	; fField52
        218d34:	e3300001 	teq	r0, #1	; 0x1
        218d38:	12840018 	addne	r0, r4, #24	; 0x18
        218d3c:	1b64f36e 	blne	1b55afc <$QDShowBusyBox(PixelMap *)>
        218d40:	e3a00001 	mov	r0, #1	; 0x1
        218d44:	e5a40034 	str	r0, [r4, #52]!	; fField52
        218d48:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

