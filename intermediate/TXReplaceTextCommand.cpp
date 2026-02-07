#include "include/TXReplaceTextCommand.h"

/**
 * Symbol: TXReplaceTextCommand::ITXReplaceTextCommand(Textension *, TXOffsetRange const &, TXReplaceParams *, unsigned char *)
 * Address: 00233ba0
 */
TXReplaceTextCommand::ITXReplaceTextCommand(Textension *, TXOffsetRange const &, TXReplaceParams *, unsigned char *) {
    /*
        233ba0:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        233ba4:	e1a0e003 	mov	lr, r3
        233ba8:	e2805068 	add	r5, r0, #104	; 0x68
        233bac:	e59d400c 	ldr	r4, [sp, #12]
        233bb0:	e8b21008 	ldmia	r2!, {r3, ip}
        233bb4:	e8a51008 	stmia	r5!, {r3, ip}
        233bb8:	e8921008 	ldmia	r2, {r3, ip}
        233bbc:	e8851008 	stmia	r5, {r3, ip}
        233bc0:	e1a03004 	mov	r3, r4
        233bc4:	e3a02005 	mov	r2, #5	; 0x5
        233bc8:	e580e078 	str	lr, [r0, #120]	; fField120
        233bcc:	e8bd4030 	ldmia	sp!, {r4, r5, lr}
        233bd0:	ea655214 	b	1b88428 <TXEditCommand::$ITXEditCommand(Textension *, int, unsigned char *)>
    */
}

/**
 * Symbol: TXReplaceTextCommand::GetUndoParams(unsigned char *)
 * Address: 00233bd4
 */
TXReplaceTextCommand::GetUndoParams(unsigned char *) {
    /*
        233bd4:	e1a0c00d 	mov	ip, sp
        233bd8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        233bdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        233be0:	e1a04000 	mov	r4, r0
        233be4:	e1a05001 	mov	r5, r1
        233be8:	eb655214 	bl	1b88440 <TXEditCommand::$GetUndoParams(unsigned char *)>
        233bec:	e5940078 	ldr	r0, [r4, #120]	; fField120
        233bf0:	e3300000 	teq	r0, #0	; 0x0
        233bf4:	0a000007 	beq	233c18 <TXReplaceTextCommand::GetUndoParams(unsigned char *)+0x44>
        233bf8:	e5d00018 	ldrb	r0, [r0, #24]
        233bfc:	e5c50000 	strb	r0, [r5]
        233c00:	e3100001 	tst	r0, #1	; 0x1
        233c04:	1a000001 	bne	233c10 <TXReplaceTextCommand::GetUndoParams(unsigned char *)+0x3c>
        233c08:	e3300000 	teq	r0, #0	; 0x0
        233c0c:	1a000001 	bne	233c18 <TXReplaceTextCommand::GetUndoParams(unsigned char *)+0x44>
        233c10:	e3a00007 	mov	r0, #7	; 0x7
        233c14:	e5c50000 	strb	r0, [r5]
        233c18:	e2840018 	add	r0, r4, #24	; 0x18
        233c1c:	e2841068 	add	r1, r4, #104	; 0x68
        233c20:	e891500c 	ldmia	r1, {r2, r3, ip, lr}
        233c24:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        233c28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXReplaceTextCommand::DoMainAction(void)
 * Address: 00233c2c
 */
TXReplaceTextCommand::DoMainAction(void) {
    /*
        233c2c:	e2801068 	add	r1, r0, #104	; 0x68
        233c30:	e5912008 	ldr	r2, [r1, #8]
        233c34:	e5911000 	ldr	r1, [r1]
        233c38:	e5903078 	ldr	r3, [r0, #120]	; fField120
        233c3c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        233c40:	ea65b0e1 	b	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
    */
}

