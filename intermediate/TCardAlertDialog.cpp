#include "include/TCardAlertDialog.h"

/**
 * Symbol: TCardAlertDialog::__ct(void)
 * Address: 0004ac54
 */
TCardAlertDialog::TCardAlertDialog(void) {
    /*
         4ac54:	e1a0c00d 	mov	ip, sp
         4ac58:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         4ac5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4ac60:	e1b04000 	movs	r4, r0
         4ac64:	1a000005 	bne	4ac80 <TCardAlertDialog::__ct(void)+0x2c>
         4ac68:	e3a00050 	mov	r0, #80	; 0x50
         4ac6c:	eb6e0eb1 	bl	1bce738 <$__nw(unsigned int)>
         4ac70:	e1b04000 	movs	r4, r0
         4ac74:	1a000001 	bne	4ac80 <TCardAlertDialog::__ct(void)+0x2c>
         4ac78:	e1a00004 	mov	r0, r4
         4ac7c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         4ac80:	e1a00004 	mov	r0, r4
         4ac84:	eb6a92d3 	bl	1aef7d8 <TAlertDialog::$__ct(void)>
         4ac88:	e284103c 	add	r1, r4, #60	; 0x3c
         4ac8c:	e1a05001 	mov	r5, r1
         4ac90:	e2840028 	add	r0, r4, #40	; 0x28
         4ac94:	e1a07000 	mov	r7, r0
         4ac98:	e59f61e0 	ldr	r6, [pc, #1e0]	; 4ae80 <TCardAlertDialog::__ct(void)+0x22c>
         4ac9c:	e1a03006 	mov	r3, r6
         4aca0:	e3a02014 	mov	r2, #20	; 0x14
         4aca4:	eb66e976 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         4aca8:	e2841050 	add	r1, r4, #80	; 0x50
         4acac:	e1a00005 	mov	r0, r5
         4acb0:	e1a03006 	mov	r3, r6
         4acb4:	e3a02014 	mov	r2, #20	; 0x14
         4acb8:	eb66e971 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         4acbc:	e3a00001 	mov	r0, #1	; 0x1
         4acc0:	e5840008 	str	r0, [r4, #8]
         4acc4:	e3a00000 	mov	r0, #0	; 0x0
         4acc8:	e584000c 	str	r0, [r4, #12]
         4accc:	e0470004 	sub	r0, r7, r4
         4acd0:	e5840010 	str	r0, [r4, #16]
         4acd4:	e0450004 	sub	r0, r5, r4
         4acd8:	e5840014 	str	r0, [r4, #20]
         4acdc:	e3a00050 	mov	r0, #80	; 0x50
         4ace0:	e5840018 	str	r0, [r4, #24]
         4ace4:	e59f7198 	ldr	r7, [pc, #198]	; 4ae84 <TCardAlertDialog::__ct(void)+0x230>
         4ace8:	e5970000 	ldr	r0, [r7]
         4acec:	e5901000 	ldr	r1, [r0]
         4acf0:	e59f5190 	ldr	r5, [pc, #190]	; 4ae88 <TCardAlertDialog::__ct(void)+0x234>
         4acf4:	e5950000 	ldr	r0, [r5]
         4acf8:	e5900000 	ldr	r0, [r0]
         4acfc:	eb6de557 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         4ad00:	e3100003 	tst	r0, #3	; 0x3
         4ad04:	01a00140 	moveq	r0, r0, asr #2
         4ad08:	0a000000 	beq	4ad10 <TCardAlertDialog::__ct(void)+0xbc>
         4ad0c:	eb6ddd02 	bl	1bc211c <$_RINTError(long)>
         4ad10:	e5c40001 	strb	r0, [r4, #1]
         4ad14:	e1a00440 	mov	r0, r0, asr #8
         4ad18:	e5c40000 	strb	r0, [r4]
         4ad1c:	e59f6168 	ldr	r6, [pc, #168]	; 4ae8c <TCardAlertDialog::__ct(void)+0x238>
         4ad20:	e5960000 	ldr	r0, [r6]
         4ad24:	e5901000 	ldr	r1, [r0]
         4ad28:	e5950000 	ldr	r0, [r5]
         4ad2c:	e5900000 	ldr	r0, [r0]
         4ad30:	eb6de54a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         4ad34:	e3100003 	tst	r0, #3	; 0x3
         4ad38:	01a00140 	moveq	r0, r0, asr #2
         4ad3c:	0a000000 	beq	4ad44 <TCardAlertDialog::__ct(void)+0xf0>
         4ad40:	eb6ddcf5 	bl	1bc211c <$_RINTError(long)>
         4ad44:	e5c40003 	strb	r0, [r4, #3]
         4ad48:	e1a00440 	mov	r0, r0, asr #8
         4ad4c:	e5c40002 	strb	r0, [r4, #2]
         4ad50:	e59f8138 	ldr	r8, [pc, #138]	; 4ae90 <TCardAlertDialog::__ct(void)+0x23c>
         4ad54:	e5980000 	ldr	r0, [r8]
         4ad58:	e5901000 	ldr	r1, [r0]
         4ad5c:	e5950000 	ldr	r0, [r5]
         4ad60:	e5900000 	ldr	r0, [r0]
         4ad64:	eb6de53d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         4ad68:	e3100003 	tst	r0, #3	; 0x3
         4ad6c:	01a00140 	moveq	r0, r0, asr #2
         4ad70:	0a000000 	beq	4ad78 <TCardAlertDialog::__ct(void)+0x124>
         4ad74:	eb6ddce8 	bl	1bc211c <$_RINTError(long)>
         4ad78:	e5c40005 	strb	r0, [r4, #5]
         4ad7c:	e1a00440 	mov	r0, r0, asr #8
         4ad80:	e5c40004 	strb	r0, [r4, #4]
         4ad84:	e59f9108 	ldr	r9, [pc, #108]	; 4ae94 <TCardAlertDialog::__ct(void)+0x240>
         4ad88:	e5990000 	ldr	r0, [r9]
         4ad8c:	e5901000 	ldr	r1, [r0]
         4ad90:	e5950000 	ldr	r0, [r5]
         4ad94:	e5900000 	ldr	r0, [r0]
         4ad98:	eb6de530 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         4ad9c:	e3100003 	tst	r0, #3	; 0x3
         4ada0:	01a00140 	moveq	r0, r0, asr #2
         4ada4:	0a000000 	beq	4adac <TCardAlertDialog::__ct(void)+0x158>
         4ada8:	eb6ddcdb 	bl	1bc211c <$_RINTError(long)>
         4adac:	e5c40007 	strb	r0, [r4, #7]
         4adb0:	e1a00440 	mov	r0, r0, asr #8
         4adb4:	e5c40006 	strb	r0, [r4, #6]
         4adb8:	e5970000 	ldr	r0, [r7]
         4adbc:	e5901000 	ldr	r1, [r0]
         4adc0:	e59f50d0 	ldr	r5, [pc, #d0]	; 4ae98 <TCardAlertDialog::__ct(void)+0x244>
         4adc4:	e5950000 	ldr	r0, [r5]
         4adc8:	e5900000 	ldr	r0, [r0]
         4adcc:	eb6de523 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         4add0:	e3100003 	tst	r0, #3	; 0x3
         4add4:	01a00140 	moveq	r0, r0, asr #2
         4add8:	0a000000 	beq	4ade0 <TCardAlertDialog::__ct(void)+0x18c>
         4addc:	eb6ddcce 	bl	1bc211c <$_RINTError(long)>
         4ade0:	e5c40029 	strb	r0, [r4, #41]
         4ade4:	e1a00440 	mov	r0, r0, asr #8
         4ade8:	e5c40028 	strb	r0, [r4, #40]
         4adec:	e5960000 	ldr	r0, [r6]
         4adf0:	e5901000 	ldr	r1, [r0]
         4adf4:	e5950000 	ldr	r0, [r5]
         4adf8:	e5900000 	ldr	r0, [r0]
         4adfc:	eb6de517 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         4ae00:	e3100003 	tst	r0, #3	; 0x3
         4ae04:	01a00140 	moveq	r0, r0, asr #2
         4ae08:	0a000000 	beq	4ae10 <TCardAlertDialog::__ct(void)+0x1bc>
         4ae0c:	eb6ddcc2 	bl	1bc211c <$_RINTError(long)>
         4ae10:	e5c4002b 	strb	r0, [r4, #43]
         4ae14:	e1a00440 	mov	r0, r0, asr #8
         4ae18:	e5c4002a 	strb	r0, [r4, #42]
         4ae1c:	e5980000 	ldr	r0, [r8]
         4ae20:	e5901000 	ldr	r1, [r0]
         4ae24:	e5950000 	ldr	r0, [r5]
         4ae28:	e5900000 	ldr	r0, [r0]
         4ae2c:	eb6de50b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         4ae30:	e3100003 	tst	r0, #3	; 0x3
         4ae34:	01a00140 	moveq	r0, r0, asr #2
         4ae38:	0a000000 	beq	4ae40 <TCardAlertDialog::__ct(void)+0x1ec>
         4ae3c:	eb6ddcb6 	bl	1bc211c <$_RINTError(long)>
         4ae40:	e5c4002d 	strb	r0, [r4, #45]
         4ae44:	e1a00440 	mov	r0, r0, asr #8
         4ae48:	e5c4002c 	strb	r0, [r4, #44]
         4ae4c:	e5990000 	ldr	r0, [r9]
         4ae50:	e5901000 	ldr	r1, [r0]
         4ae54:	e5950000 	ldr	r0, [r5]
         4ae58:	e5900000 	ldr	r0, [r0]
         4ae5c:	eb6de4ff 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         4ae60:	e3100003 	tst	r0, #3	; 0x3
         4ae64:	01a00140 	moveq	r0, r0, asr #2
         4ae68:	0a000000 	beq	4ae70 <TCardAlertDialog::__ct(void)+0x21c>
         4ae6c:	eb6ddcaa 	bl	1bc211c <$_RINTError(long)>
         4ae70:	e5c4002f 	strb	r0, [r4, #47]
         4ae74:	e1a00440 	mov	r0, r0, asr #8
         4ae78:	e5c4002e 	strb	r0, [r4, #46]
         4ae7c:	eaffff7d 	b	4ac78 <TCardAlertDialog::__ct(void)+0x24>
         4ae80:	01ba1094 	ldreqb	r1, [sl, r4]!
         4ae84:	00684bc8 	rsbeq	r4, r8, r8, asr #23
         4ae88:	00681218 	rsbeq	r1, r8, r8, lsl r2
         4ae8c:	006834e0 	rsbeq	r3, r8, r0, ror #9
         4ae90:	00682188 	rsbeq	r2, r8, r8, lsl #3
         4ae94:	00684360 	rsbeq	r4, r8, r0, ror #6
         4ae98:	00680d20 	rsbeq	r0, r8, r0, lsr #26
    */
}

