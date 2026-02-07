#include "include/TCardReinsertAlertDialog.h"

/**
 * Symbol: Init__24TCardReinsertAlertDialogFPFPvUlT1_UcPv
 * Address: 0004aee0
 */
void TCardReinsertAlertDialog::Init() {
    /*
         4aee0:	ea6aed08 	b	1b06308 <$SetFilterProc__12TAlertDialogFPFPvUlT1_UcPv>
    */
}

/**
 * Symbol: TCardReinsertAlertDialog::Setup(void)
 * Address: 0004aee4
 */
TCardReinsertAlertDialog::Setup(void) {
    /*
         4aee4:	e1a0c00d 	mov	ip, sp
         4aee8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4aeec:	e24cb004 	sub	fp, ip, #4	; 0x4
         4aef0:	e1a04000 	mov	r4, r0
         4aef4:	e59f50ac 	ldr	r5, [pc, #ac]	; 4afa8 <TCardReinsertAlertDialog::Setup(void)+0xc4>
         4aef8:	e5950000 	ldr	r0, [r5]
         4aefc:	e5901000 	ldr	r1, [r0]
         4af00:	e59f00a4 	ldr	r0, [pc, #a4]	; 4afac <TCardReinsertAlertDialog::Setup(void)+0xc8>
         4af04:	e5900000 	ldr	r0, [r0]
         4af08:	e5900000 	ldr	r0, [r0]
         4af0c:	eb6de4d3 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         4af10:	e3100003 	tst	r0, #3	; 0x3
         4af14:	01a00140 	moveq	r0, r0, asr #2
         4af18:	0a000000 	beq	4af20 <TCardReinsertAlertDialog::Setup(void)+0x3c>
         4af1c:	eb6ddc7e 	bl	1bc211c <$_RINTError(long)>
         4af20:	e5c40005 	strb	r0, [r4, #5]	; fField5
         4af24:	e1a00440 	mov	r0, r0, asr #8
         4af28:	e5c40004 	strb	r0, [r4, #4]	; fField4
         4af2c:	e5950000 	ldr	r0, [r5]
         4af30:	e5901000 	ldr	r1, [r0]
         4af34:	e59f0074 	ldr	r0, [pc, #74]	; 4afb0 <TCardReinsertAlertDialog::Setup(void)+0xcc>
         4af38:	e5900000 	ldr	r0, [r0]
         4af3c:	e5900000 	ldr	r0, [r0]
         4af40:	eb6de4c6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         4af44:	e3100003 	tst	r0, #3	; 0x3
         4af48:	01a00140 	moveq	r0, r0, asr #2
         4af4c:	0a000000 	beq	4af54 <TCardReinsertAlertDialog::Setup(void)+0x70>
         4af50:	eb6ddc71 	bl	1bc211c <$_RINTError(long)>
         4af54:	e5c4002d 	strb	r0, [r4, #45]	; fField45
         4af58:	e1a00440 	mov	r0, r0, asr #8
         4af5c:	e5c4002c 	strb	r0, [r4, #44]	; fField44
         4af60:	e59f004c 	ldr	r0, [pc, #4c]	; 4afb4 <TCardReinsertAlertDialog::Setup(void)+0xd0>	; fField4
         4af64:	e5900000 	ldr	r0, [r0]
         4af68:	e3300000 	teq	r0, #0	; 0x0
         4af6c:	0a000011 	beq	4afb8 <TCardReinsertAlertDialog::Setup(void)+0xd4>
         4af70:	e5840030 	str	r0, [r4, #48]	; fField48
         4af74:	e5940004 	ldr	r0, [r4, #4]	; fField4
         4af78:	e1a00820 	mov	r0, r0, lsr #16
         4af7c:	e2800020 	add	r0, r0, #32	; 0x20
         4af80:	e5c40005 	strb	r0, [r4, #5]	; fField5
         4af84:	e1a00440 	mov	r0, r0, asr #8
         4af88:	e5c40004 	strb	r0, [r4, #4]	; fField4
         4af8c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         4af90:	e1a00820 	mov	r0, r0, lsr #16
         4af94:	e2800020 	add	r0, r0, #32	; 0x20
         4af98:	e5c4002d 	strb	r0, [r4, #45]	; fField45
         4af9c:	e1a00440 	mov	r0, r0, asr #8
         4afa0:	e5c4002c 	strb	r0, [r4, #44]	; fField44
         4afa4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         4afa8:	00682188 	rsbeq	r2, r8, r8, lsl #3
         4afac:	00681218 	rsbeq	r1, r8, r8, lsl r2
         4afb0:	00680d20 	rsbeq	r0, r8, r0, lsr #26
         4afb4:	0c100914 	ldceq	9, cr0, [r0], -#80
         4afb8:	e59f0010 	ldr	r0, [pc, #10]	; 4afd0 <TCardReinsertAlertDialog::Setup(void)+0xec>
         4afbc:	e5900000 	ldr	r0, [r0]
         4afc0:	e5900000 	ldr	r0, [r0]
         4afc4:	eb6ddc64 	bl	1bc215c <$BinaryData(long)>
         4afc8:	e5a40030 	str	r0, [r4, #48]!	; fField48
         4afcc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         4afd0:	00680208 	rsbeq	r0, r8, r8, lsl #4
    */
}

/**
 * Symbol: TCardReinsertAlertDialog::Done(void)
 * Address: 0004afd4
 */
TCardReinsertAlertDialog::Done(void) {
    /*
         4afd4:	e3a01000 	mov	r1, #0	; 0x0
         4afd8:	e3a00000 	mov	r0, #0	; 0x0
         4afdc:	ea6bb71b 	b	1b38c50 <$SetCardReinsertReason(unsigned short const *, unsigned char)>
    */
}

