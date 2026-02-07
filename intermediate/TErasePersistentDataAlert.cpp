#include "include/TErasePersistentDataAlert.h"

/**
 * Symbol: TErasePersistentDataAlert::__ct(void)
 * Address: 0002fbd4
 */
TErasePersistentDataAlert::TErasePersistentDataAlert(void) {
    /*
         2fbd4:	e1a0c00d 	mov	ip, sp
         2fbd8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         2fbdc:	e24cb004 	sub	fp, ip, #4	; 0x4
         2fbe0:	e1b04000 	movs	r4, r0
         2fbe4:	1a000005 	bne	2fc00 <TErasePersistentDataAlert::__ct(void)+0x2c>
         2fbe8:	e3a00064 	mov	r0, #100	; 0x64
         2fbec:	eb6e7ad1 	bl	1bce738 <$__nw(unsigned int)>
         2fbf0:	e1b04000 	movs	r4, r0
         2fbf4:	1a000001 	bne	2fc00 <TErasePersistentDataAlert::__ct(void)+0x2c>
         2fbf8:	e1a00004 	mov	r0, r4
         2fbfc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         2fc00:	e1a00004 	mov	r0, r4
         2fc04:	eb6afef3 	bl	1aef7d8 <TAlertDialog::$__ct(void)>
         2fc08:	e284103c 	add	r1, r4, #60	; 0x3c
         2fc0c:	e1a05001 	mov	r5, r1
         2fc10:	e2840028 	add	r0, r4, #40	; 0x28
         2fc14:	e1a06000 	mov	r6, r0
         2fc18:	e59f7368 	ldr	r7, [pc, #368]	; 2ff88 <TErasePersistentDataAlert::__ct(void)+0x3b4>
         2fc1c:	e1a03007 	mov	r3, r7
         2fc20:	e3a02014 	mov	r2, #20	; 0x14
         2fc24:	eb675596 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         2fc28:	e2841064 	add	r1, r4, #100	; 0x64
         2fc2c:	e1a00005 	mov	r0, r5
         2fc30:	e1a03007 	mov	r3, r7
         2fc34:	e3a02014 	mov	r2, #20	; 0x14
         2fc38:	eb675591 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         2fc3c:	e3a00001 	mov	r0, #1	; 0x1
         2fc40:	e5840008 	str	r0, [r4, #8]
         2fc44:	e3a00002 	mov	r0, #2	; 0x2
         2fc48:	e584000c 	str	r0, [r4, #12]
         2fc4c:	e0460004 	sub	r0, r6, r4
         2fc50:	e5840010 	str	r0, [r4, #16]
         2fc54:	e0450004 	sub	r0, r5, r4
         2fc58:	e5840014 	str	r0, [r4, #20]	; fField20
         2fc5c:	e3a00064 	mov	r0, #100	; 0x64
         2fc60:	e5840018 	str	r0, [r4, #24]
         2fc64:	e59f6320 	ldr	r6, [pc, #320]	; 2ff8c <TErasePersistentDataAlert::__ct(void)+0x3b8>
         2fc68:	e5960000 	ldr	r0, [r6]
         2fc6c:	e5901000 	ldr	r1, [r0]
         2fc70:	e59f9318 	ldr	r9, [pc, #318]	; 2ff90 <TErasePersistentDataAlert::__ct(void)+0x3bc>
         2fc74:	e5990000 	ldr	r0, [r9]
         2fc78:	e5900000 	ldr	r0, [r0]
         2fc7c:	eb6e5177 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fc80:	e3100003 	tst	r0, #3	; 0x3
         2fc84:	01a00140 	moveq	r0, r0, asr #2
         2fc88:	0a000000 	beq	2fc90 <TErasePersistentDataAlert::__ct(void)+0xbc>
         2fc8c:	eb6e4922 	bl	1bc211c <$_RINTError(long)>
         2fc90:	e5c40001 	strb	r0, [r4, #1]
         2fc94:	e1a00440 	mov	r0, r0, asr #8
         2fc98:	e5c40000 	strb	r0, [r4]
         2fc9c:	e59f52f0 	ldr	r5, [pc, #2f0]	; 2ff94 <TErasePersistentDataAlert::__ct(void)+0x3c0>
         2fca0:	e5950000 	ldr	r0, [r5]
         2fca4:	e5901000 	ldr	r1, [r0]
         2fca8:	e5990000 	ldr	r0, [r9]
         2fcac:	e5900000 	ldr	r0, [r0]
         2fcb0:	eb6e516a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fcb4:	e3100003 	tst	r0, #3	; 0x3
         2fcb8:	01a00140 	moveq	r0, r0, asr #2
         2fcbc:	0a000000 	beq	2fcc4 <TErasePersistentDataAlert::__ct(void)+0xf0>
         2fcc0:	eb6e4915 	bl	1bc211c <$_RINTError(long)>
         2fcc4:	e5c40003 	strb	r0, [r4, #3]
         2fcc8:	e1a00440 	mov	r0, r0, asr #8
         2fccc:	e5c40002 	strb	r0, [r4, #2]
         2fcd0:	e59f72c0 	ldr	r7, [pc, #2c0]	; 2ff98 <TErasePersistentDataAlert::__ct(void)+0x3c4>
         2fcd4:	e5970000 	ldr	r0, [r7]
         2fcd8:	e5901000 	ldr	r1, [r0]
         2fcdc:	e5990000 	ldr	r0, [r9]
         2fce0:	e5900000 	ldr	r0, [r0]
         2fce4:	eb6e515d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fce8:	e3100003 	tst	r0, #3	; 0x3
         2fcec:	01a00140 	moveq	r0, r0, asr #2
         2fcf0:	0a000000 	beq	2fcf8 <TErasePersistentDataAlert::__ct(void)+0x124>
         2fcf4:	eb6e4908 	bl	1bc211c <$_RINTError(long)>
         2fcf8:	e5c40005 	strb	r0, [r4, #5]
         2fcfc:	e1a00440 	mov	r0, r0, asr #8
         2fd00:	e5c40004 	strb	r0, [r4, #4]
         2fd04:	e59f8290 	ldr	r8, [pc, #290]	; 2ff9c <TErasePersistentDataAlert::__ct(void)+0x3c8>
         2fd08:	e5980000 	ldr	r0, [r8]
         2fd0c:	e5901000 	ldr	r1, [r0]
         2fd10:	e5990000 	ldr	r0, [r9]
         2fd14:	e5900000 	ldr	r0, [r0]
         2fd18:	eb6e5150 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fd1c:	e3100003 	tst	r0, #3	; 0x3
         2fd20:	01a00140 	moveq	r0, r0, asr #2
         2fd24:	0a000000 	beq	2fd2c <TErasePersistentDataAlert::__ct(void)+0x158>
         2fd28:	eb6e48fb 	bl	1bc211c <$_RINTError(long)>
         2fd2c:	e5c40007 	strb	r0, [r4, #7]
         2fd30:	e1a00440 	mov	r0, r0, asr #8
         2fd34:	e5c40006 	strb	r0, [r4, #6]
         2fd38:	e5960000 	ldr	r0, [r6]
         2fd3c:	e5901000 	ldr	r1, [r0]
         2fd40:	e59f9258 	ldr	r9, [pc, #258]	; 2ffa0 <TErasePersistentDataAlert::__ct(void)+0x3cc>
         2fd44:	e5990000 	ldr	r0, [r9]
         2fd48:	e5900000 	ldr	r0, [r0]
         2fd4c:	eb6e5143 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fd50:	e3100003 	tst	r0, #3	; 0x3
         2fd54:	01a00140 	moveq	r0, r0, asr #2
         2fd58:	0a000000 	beq	2fd60 <TErasePersistentDataAlert::__ct(void)+0x18c>
         2fd5c:	eb6e48ee 	bl	1bc211c <$_RINTError(long)>
         2fd60:	e5c40029 	strb	r0, [r4, #41]
         2fd64:	e1a00440 	mov	r0, r0, asr #8
         2fd68:	e5c40028 	strb	r0, [r4, #40]
         2fd6c:	e5950000 	ldr	r0, [r5]
         2fd70:	e5901000 	ldr	r1, [r0]
         2fd74:	e5990000 	ldr	r0, [r9]
         2fd78:	e5900000 	ldr	r0, [r0]
         2fd7c:	eb6e5137 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fd80:	e3100003 	tst	r0, #3	; 0x3
         2fd84:	01a00140 	moveq	r0, r0, asr #2
         2fd88:	0a000000 	beq	2fd90 <TErasePersistentDataAlert::__ct(void)+0x1bc>
         2fd8c:	eb6e48e2 	bl	1bc211c <$_RINTError(long)>
         2fd90:	e5c4002b 	strb	r0, [r4, #43]
         2fd94:	e1a00440 	mov	r0, r0, asr #8
         2fd98:	e5c4002a 	strb	r0, [r4, #42]
         2fd9c:	e5970000 	ldr	r0, [r7]
         2fda0:	e5901000 	ldr	r1, [r0]
         2fda4:	e5990000 	ldr	r0, [r9]
         2fda8:	e5900000 	ldr	r0, [r0]
         2fdac:	eb6e512b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fdb0:	e3100003 	tst	r0, #3	; 0x3
         2fdb4:	01a00140 	moveq	r0, r0, asr #2
         2fdb8:	0a000000 	beq	2fdc0 <TErasePersistentDataAlert::__ct(void)+0x1ec>
         2fdbc:	eb6e48d6 	bl	1bc211c <$_RINTError(long)>
         2fdc0:	e5c4002d 	strb	r0, [r4, #45]
         2fdc4:	e1a00440 	mov	r0, r0, asr #8
         2fdc8:	e5c4002c 	strb	r0, [r4, #44]
         2fdcc:	e5980000 	ldr	r0, [r8]
         2fdd0:	e5901000 	ldr	r1, [r0]
         2fdd4:	e5990000 	ldr	r0, [r9]
         2fdd8:	e5900000 	ldr	r0, [r0]
         2fddc:	eb6e511f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fde0:	e3100003 	tst	r0, #3	; 0x3
         2fde4:	01a00140 	moveq	r0, r0, asr #2
         2fde8:	0a000000 	beq	2fdf0 <TErasePersistentDataAlert::__ct(void)+0x21c>
         2fdec:	eb6e48ca 	bl	1bc211c <$_RINTError(long)>
         2fdf0:	e5c4002f 	strb	r0, [r4, #47]
         2fdf4:	e1a00440 	mov	r0, r0, asr #8
         2fdf8:	e5c4002e 	strb	r0, [r4, #46]
         2fdfc:	e5960000 	ldr	r0, [r6]
         2fe00:	e5901000 	ldr	r1, [r0]
         2fe04:	e59f9198 	ldr	r9, [pc, #198]	; 2ffa4 <TErasePersistentDataAlert::__ct(void)+0x3d0>
         2fe08:	e5990000 	ldr	r0, [r9]
         2fe0c:	e5900000 	ldr	r0, [r0]
         2fe10:	eb6e5112 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fe14:	e3100003 	tst	r0, #3	; 0x3
         2fe18:	01a00140 	moveq	r0, r0, asr #2
         2fe1c:	0a000000 	beq	2fe24 <TErasePersistentDataAlert::__ct(void)+0x250>
         2fe20:	eb6e48bd 	bl	1bc211c <$_RINTError(long)>
         2fe24:	e5c4003d 	strb	r0, [r4, #61]
         2fe28:	e1a00440 	mov	r0, r0, asr #8
         2fe2c:	e5c4003c 	strb	r0, [r4, #60]
         2fe30:	e5950000 	ldr	r0, [r5]
         2fe34:	e5901000 	ldr	r1, [r0]
         2fe38:	e5990000 	ldr	r0, [r9]
         2fe3c:	e5900000 	ldr	r0, [r0]
         2fe40:	eb6e5106 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fe44:	e3100003 	tst	r0, #3	; 0x3
         2fe48:	01a00140 	moveq	r0, r0, asr #2
         2fe4c:	0a000000 	beq	2fe54 <TErasePersistentDataAlert::__ct(void)+0x280>
         2fe50:	eb6e48b1 	bl	1bc211c <$_RINTError(long)>
         2fe54:	e5c4003f 	strb	r0, [r4, #63]
         2fe58:	e1a00440 	mov	r0, r0, asr #8
         2fe5c:	e5c4003e 	strb	r0, [r4, #62]
         2fe60:	e5970000 	ldr	r0, [r7]
         2fe64:	e5901000 	ldr	r1, [r0]
         2fe68:	e5990000 	ldr	r0, [r9]
         2fe6c:	e5900000 	ldr	r0, [r0]
         2fe70:	eb6e50fa 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fe74:	e3100003 	tst	r0, #3	; 0x3
         2fe78:	01a00140 	moveq	r0, r0, asr #2
         2fe7c:	0a000000 	beq	2fe84 <TErasePersistentDataAlert::__ct(void)+0x2b0>
         2fe80:	eb6e48a5 	bl	1bc211c <$_RINTError(long)>
         2fe84:	e5c40041 	strb	r0, [r4, #65]
         2fe88:	e1a00440 	mov	r0, r0, asr #8
         2fe8c:	e5c40040 	strb	r0, [r4, #64]
         2fe90:	e5980000 	ldr	r0, [r8]
         2fe94:	e5901000 	ldr	r1, [r0]
         2fe98:	e5990000 	ldr	r0, [r9]
         2fe9c:	e5900000 	ldr	r0, [r0]
         2fea0:	eb6e50ee 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fea4:	e3100003 	tst	r0, #3	; 0x3
         2fea8:	01a00140 	moveq	r0, r0, asr #2
         2feac:	0a000000 	beq	2feb4 <TErasePersistentDataAlert::__ct(void)+0x2e0>
         2feb0:	eb6e4899 	bl	1bc211c <$_RINTError(long)>
         2feb4:	e5c40043 	strb	r0, [r4, #67]
         2feb8:	e1a00440 	mov	r0, r0, asr #8
         2febc:	e5c40042 	strb	r0, [r4, #66]
         2fec0:	e5960000 	ldr	r0, [r6]
         2fec4:	e5901000 	ldr	r1, [r0]
         2fec8:	e59f60d8 	ldr	r6, [pc, #d8]	; 2ffa8 <TErasePersistentDataAlert::__ct(void)+0x3d4>
         2fecc:	e5960000 	ldr	r0, [r6]
         2fed0:	e5900000 	ldr	r0, [r0]
         2fed4:	eb6e50e1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2fed8:	e3100003 	tst	r0, #3	; 0x3
         2fedc:	01a00140 	moveq	r0, r0, asr #2
         2fee0:	0a000000 	beq	2fee8 <TErasePersistentDataAlert::__ct(void)+0x314>
         2fee4:	eb6e488c 	bl	1bc211c <$_RINTError(long)>
         2fee8:	e5c40051 	strb	r0, [r4, #81]
         2feec:	e1a00440 	mov	r0, r0, asr #8
         2fef0:	e5c40050 	strb	r0, [r4, #80]
         2fef4:	e5950000 	ldr	r0, [r5]
         2fef8:	e5901000 	ldr	r1, [r0]
         2fefc:	e5960000 	ldr	r0, [r6]
         2ff00:	e5900000 	ldr	r0, [r0]
         2ff04:	eb6e50d5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2ff08:	e3100003 	tst	r0, #3	; 0x3
         2ff0c:	01a00140 	moveq	r0, r0, asr #2
         2ff10:	0a000000 	beq	2ff18 <TErasePersistentDataAlert::__ct(void)+0x344>
         2ff14:	eb6e4880 	bl	1bc211c <$_RINTError(long)>
         2ff18:	e5c40053 	strb	r0, [r4, #83]
         2ff1c:	e1a00440 	mov	r0, r0, asr #8
         2ff20:	e5c40052 	strb	r0, [r4, #82]
         2ff24:	e5970000 	ldr	r0, [r7]
         2ff28:	e5901000 	ldr	r1, [r0]
         2ff2c:	e5960000 	ldr	r0, [r6]
         2ff30:	e5900000 	ldr	r0, [r0]
         2ff34:	eb6e50c9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2ff38:	e3100003 	tst	r0, #3	; 0x3
         2ff3c:	01a00140 	moveq	r0, r0, asr #2
         2ff40:	0a000000 	beq	2ff48 <TErasePersistentDataAlert::__ct(void)+0x374>
         2ff44:	eb6e4874 	bl	1bc211c <$_RINTError(long)>
         2ff48:	e5c40055 	strb	r0, [r4, #85]
         2ff4c:	e1a00440 	mov	r0, r0, asr #8
         2ff50:	e5c40054 	strb	r0, [r4, #84]
         2ff54:	e5980000 	ldr	r0, [r8]
         2ff58:	e5901000 	ldr	r1, [r0]
         2ff5c:	e5960000 	ldr	r0, [r6]
         2ff60:	e5900000 	ldr	r0, [r0]
         2ff64:	eb6e50bd 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         2ff68:	e3100003 	tst	r0, #3	; 0x3
         2ff6c:	01a00140 	moveq	r0, r0, asr #2
         2ff70:	0a000000 	beq	2ff78 <TErasePersistentDataAlert::__ct(void)+0x3a4>
         2ff74:	eb6e4868 	bl	1bc211c <$_RINTError(long)>
         2ff78:	e5c40057 	strb	r0, [r4, #87]
         2ff7c:	e1a00440 	mov	r0, r0, asr #8
         2ff80:	e5c40056 	strb	r0, [r4, #86]
         2ff84:	eaffff1b 	b	2fbf8 <TErasePersistentDataAlert::__ct(void)+0x24>
         2ff88:	01ba1094 	ldreqb	r1, [sl, r4]!
         2ff8c:	00684bc8 	rsbeq	r4, r8, r8, asr #23
         2ff90:	0067fb38 	rsbeq	pc, r7, r8, lsr fp
         2ff94:	006834e0 	rsbeq	r3, r8, r0, ror #9
         2ff98:	00682188 	rsbeq	r2, r8, r8, lsl #3
         2ff9c:	00684360 	rsbeq	r4, r8, r0, ror #6
         2ffa0:	006818f0 	streqd	r1, [r8], -#128
         2ffa4:	00681890 	streqb	r1, [r8], -#128
         2ffa8:	00680b88 	rsbeq	r0, r8, r8, lsl #23
    */
}

/**
 * Symbol: TErasePersistentDataAlert::Init(unsigned short *, unsigned short *, unsigned short *)
 * Address: 0002ffac
 */
TErasePersistentDataAlert::Init(unsigned short *, unsigned short *, unsigned short *) {
    /*
         2ffac:	e5a01030 	str	r1, [r0, #48]!	; fField48
         2ffb0:	e5a02014 	str	r2, [r0, #20]!	; fField20
         2ffb4:	e5a03014 	str	r3, [r0, #20]!	; fField20
         2ffb8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TErasePersistentDataAlert::Init(Rect *, unsigned short *, unsigned short *, unsigned short *)
 * Address: 0002ffbc
 */
TErasePersistentDataAlert::Init(Rect *, unsigned short *, unsigned short *, unsigned short *) {
    /*
         2ffbc:	e92d4030 	stmdb	sp!, {r4, r5, lr}
         2ffc0:	e1a0e003 	mov	lr, r3
         2ffc4:	e2805028 	add	r5, r0, #40	; 0x28
         2ffc8:	e59d400c 	ldr	r4, [sp, #12]
         2ffcc:	e8911008 	ldmia	r1, {r3, ip}
         2ffd0:	e8851008 	stmia	r5, {r3, ip}
         2ffd4:	e5a02030 	str	r2, [r0, #48]!	; fField48
         2ffd8:	e5a0e014 	str	lr, [r0, #20]!	; fField20
         2ffdc:	e5804014 	str	r4, [r0, #20]	; fField20
         2ffe0:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

