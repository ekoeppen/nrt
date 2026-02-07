#include "include/TAirusIterator.h"

/**
 * Symbol: TAirusIterator::PreviousWord(void)
 * Address: 0002d994
 */
TAirusIterator::PreviousWord(void) {
    /*
         2d994:	e1a0c00d 	mov	ip, sp
         2d998:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         2d99c:	e24cb004 	sub	fp, ip, #4	; 0x4
         2d9a0:	e1a04000 	mov	r4, r0
         2d9a4:	e3a05000 	mov	r5, #0	; 0x0
         2d9a8:	e3a06001 	mov	r6, #1	; 0x1
         2d9ac:	ea000001 	b	2d9b8 <TAirusIterator::PreviousWord(void)+0x24>
         2d9b0:	e3550000 	cmp	r5, #0	; 0x0
         2d9b4:	1a000009 	bne	2d9e0 <TAirusIterator::PreviousWord(void)+0x4c>
         2d9b8:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2d9bc:	e590003c 	ldr	r0, [r0, #60]
         2d9c0:	e3700001 	cmn	r0, #1	; 0x1
         2d9c4:	1a000006 	bne	2d9e4 <TAirusIterator::PreviousWord(void)+0x50>
         2d9c8:	e1a00004 	mov	r0, r4
         2d9cc:	eb6751d5 	bl	1a02128 <TAirusIterator::$GetNextChars(void)>
         2d9d0:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2d9d4:	e590103c 	ldr	r1, [r0, #60]
         2d9d8:	e5a01040 	str	r1, [r0, #64]!
         2d9dc:	ea000000 	b	2d9e4 <TAirusIterator::PreviousWord(void)+0x50>
         2d9e0:	1a000018 	bne	2da48 <TAirusIterator::PreviousWord(void)+0xb4>
         2d9e4:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2d9e8:	e5900040 	ldr	r0, [r0, #64]
         2d9ec:	e3500000 	cmp	r0, #0	; 0x0
         2d9f0:	ba000016 	blt	2da50 <TAirusIterator::PreviousWord(void)+0xbc>
         2d9f4:	e1a00004 	mov	r0, r4
         2d9f8:	eb6755e4 	bl	1a03190 <TAirusIterator::$VerifyPrevChar(void)>
         2d9fc:	eaffffeb 	b	2d9b0 <TAirusIterator::PreviousWord(void)+0x1c>
         2da00:	e5b01008 	ldr	r1, [r0, #8]!
         2da04:	e2411001 	sub	r1, r1, #1	; 0x1
         2da08:	e5801000 	str	r1, [r0]
         2da0c:	e594108c 	ldr	r1, [r4, #140]	; fField140
         2da10:	e5910008 	ldr	r0, [r1, #8]
         2da14:	e3500000 	cmp	r0, #0	; 0x0
         2da18:	ba00000a 	blt	2da48 <TAirusIterator::PreviousWord(void)+0xb4>
         2da1c:	e0800080 	add	r0, r0, r0, lsl #1
         2da20:	e0810100 	add	r0, r1, r0, lsl #2
         2da24:	e280100c 	add	r1, r0, #12	; 0xc
         2da28:	e5910008 	ldr	r0, [r1, #8]
         2da2c:	e3300001 	teq	r0, #1	; 0x1
         2da30:	13300002 	teqne	r0, #2	; 0x2
         2da34:	1a000003 	bne	2da48 <TAirusIterator::PreviousWord(void)+0xb4>
         2da38:	e3a06001 	mov	r6, #1	; 0x1
         2da3c:	e1a00004 	mov	r0, r4
         2da40:	eb6751af 	bl	1a02104 <TAirusIterator::$ConstructResult(charState *)>
         2da44:	ea000016 	b	2daa4 <TAirusIterator::PreviousWord(void)+0x110>
         2da48:	e3350000 	teq	r5, #0	; 0x0
         2da4c:	1a00000a 	bne	2da7c <TAirusIterator::PreviousWord(void)+0xe8>
         2da50:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2da54:	e5901008 	ldr	r1, [r0, #8]
         2da58:	e3510000 	cmp	r1, #0	; 0x0
         2da5c:	aaffffe7 	bge	2da00 <TAirusIterator::PreviousWord(void)+0x6c>
         2da60:	ea000007 	b	2da84 <TAirusIterator::PreviousWord(void)+0xf0>
         2da64:	e1a00004 	mov	r0, r4
         2da68:	eb6751b4 	bl	1a02140 <TAirusIterator::$PopState(void)>
         2da6c:	e3300000 	teq	r0, #0	; 0x0
         2da70:	03a06000 	moveq	r6, #0	; 0x0
         2da74:	05c40044 	streqb	r0, [r4, #68]	; fField68
         2da78:	0a000009 	beq	2daa4 <TAirusIterator::PreviousWord(void)+0x110>
         2da7c:	e3550000 	cmp	r5, #0	; 0x0
         2da80:	1a000006 	bne	2daa0 <TAirusIterator::PreviousWord(void)+0x10c>
         2da84:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2da88:	e5901008 	ldr	r1, [r0, #8]
         2da8c:	e3710001 	cmn	r1, #1	; 0x1
         2da90:	05900040 	ldreq	r0, [r0, #64]
         2da94:	03700001 	cmneq	r0, #1	; 0x1
         2da98:	1affffc4 	bne	2d9b0 <TAirusIterator::PreviousWord(void)+0x1c>
         2da9c:	eafffff0 	b	2da64 <TAirusIterator::PreviousWord(void)+0xd0>
         2daa0:	0affffc2 	beq	2d9b0 <TAirusIterator::PreviousWord(void)+0x1c>
         2daa4:	e1a00006 	mov	r0, r6
         2daa8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::VerifyPrevChar(void)
 * Address: 0002daac
 */
TAirusIterator::VerifyPrevChar(void) {
    /*
         2daac:	e1a0c00d 	mov	ip, sp
         2dab0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         2dab4:	e24cb004 	sub	fp, ip, #4	; 0x4
         2dab8:	e1a04000 	mov	r4, r0
         2dabc:	e590608c 	ldr	r6, [r0, #140]	; fField140
         2dac0:	e3a08000 	mov	r8, #0	; 0x0
         2dac4:	e286503c 	add	r5, r6, #60	; 0x3c
         2dac8:	e8950021 	ldmia	r5, {r0, r5}
         2dacc:	e1300005 	teq	r0, r5
         2dad0:	13350000 	teqne	r5, #0	; 0x0
         2dad4:	02455001 	subeq	r5, r5, #1	; 0x1
         2dad8:	0a00000b 	beq	2db0c <TAirusIterator::VerifyPrevChar(void)+0x60>
         2dadc:	e3750001 	cmn	r5, #1	; 0x1
         2dae0:	0a00000b 	beq	2db14 <TAirusIterator::VerifyPrevChar(void)+0x68>
         2dae4:	e0860105 	add	r0, r6, r5, lsl #2
         2dae8:	e5d07044 	ldrb	r7, [r0, #68]	; fField68
         2daec:	e2555001 	subs	r5, r5, #1	; 0x1
         2daf0:	4a000005 	bmi	2db0c <TAirusIterator::VerifyPrevChar(void)+0x60>
         2daf4:	e0860105 	add	r0, r6, r5, lsl #2
         2daf8:	e5d01044 	ldrb	r1, [r0, #68]	; fField68
         2dafc:	e1a00007 	mov	r0, r7
         2db00:	eb67519d 	bl	1a0217c <$SortOrder__FUcT1>
         2db04:	e3300000 	teq	r0, #0	; 0x0
         2db08:	0afffff7 	beq	2daec <TAirusIterator::VerifyPrevChar(void)+0x40>
         2db0c:	e3750001 	cmn	r5, #1	; 0x1
         2db10:	1a000002 	bne	2db20 <TAirusIterator::VerifyPrevChar(void)+0x74>
         2db14:	e1a00008 	mov	r0, r8
         2db18:	e5a65040 	str	r5, [r6, #64]!
         2db1c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         2db20:	e5960000 	ldr	r0, [r6]
         2db24:	e2801001 	add	r1, r0, #1	; 0x1
         2db28:	e1a00004 	mov	r0, r4
         2db2c:	eb675185 	bl	1a02148 <TAirusIterator::$PushState(unsigned long)>
         2db30:	e0860105 	add	r0, r6, r5, lsl #2
         2db34:	e5d07044 	ldrb	r7, [r0, #68]	; fField68
         2db38:	e2849004 	add	r9, r4, #4	; 0x4
         2db3c:	e5865040 	str	r5, [r6, #64]
         2db40:	e0860105 	add	r0, r6, r5, lsl #2
         2db44:	e2800044 	add	r0, r0, #68	; 0x44
         2db48:	e5d01001 	ldrb	r1, [r0, #1]
         2db4c:	e0811081 	add	r1, r1, r1, lsl #1
         2db50:	e0861101 	add	r1, r6, r1, lsl #2
         2db54:	e281100c 	add	r1, r1, #12	; 0xc
         2db58:	e5d02000 	ldrb	r2, [r0]
         2db5c:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2db60:	e5900000 	ldr	r0, [r0]
         2db64:	e0800004 	add	r0, r0, r4
         2db68:	e5c02004 	strb	r2, [r0, #4]	; fField4
         2db6c:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2db70:	e5900000 	ldr	r0, [r0]
         2db74:	e0800004 	add	r0, r0, r4
         2db78:	e5c08005 	strb	r8, [r0, #5]
         2db7c:	e1a00004 	mov	r0, r4
         2db80:	eb675177 	bl	1a02164 <TAirusIterator::$RefreshState(charState *)>
         2db84:	e5940000 	ldr	r0, [r4]
         2db88:	e5900000 	ldr	r0, [r0]
         2db8c:	e5a0901c 	str	r9, [r0, #28]!
         2db90:	e3a01002 	mov	r1, #2	; 0x2
         2db94:	e5940000 	ldr	r0, [r4]
         2db98:	eb674934 	bl	1a00070 <$CallAirusA>
         2db9c:	e1a01005 	mov	r1, r5
         2dba0:	e1a00004 	mov	r0, r4
         2dba4:	eb674d4c 	bl	1a010dc <TAirusIterator::$AddParallelState(unsigned long)>
         2dba8:	e3300000 	teq	r0, #0	; 0x0
         2dbac:	1a000007 	bne	2dbd0 <TAirusIterator::VerifyPrevChar(void)+0x124>
         2dbb0:	e2555001 	subs	r5, r5, #1	; 0x1
         2dbb4:	4a000005 	bmi	2dbd0 <TAirusIterator::VerifyPrevChar(void)+0x124>
         2dbb8:	e0860105 	add	r0, r6, r5, lsl #2
         2dbbc:	e5d01044 	ldrb	r1, [r0, #68]	; fField68
         2dbc0:	e1a00007 	mov	r0, r7
         2dbc4:	eb67516c 	bl	1a0217c <$SortOrder__FUcT1>
         2dbc8:	e3300000 	teq	r0, #0	; 0x0
         2dbcc:	0affffda 	beq	2db3c <TAirusIterator::VerifyPrevChar(void)+0x90>
         2dbd0:	e5b4008c 	ldr	r0, [r4, #140]!	; fField140
         2dbd4:	e5901004 	ldr	r1, [r0, #4]	; fField4
         2dbd8:	e5a01008 	str	r1, [r0, #8]!
         2dbdc:	e3a00001 	mov	r0, #1	; 0x1
         2dbe0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::ConstructResult(charState *)
 * Address: 0002dbe4
 */
TAirusIterator::ConstructResult(charState *) {
    /*
         2dbe4:	e1a0c00d 	mov	ip, sp
         2dbe8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         2dbec:	e24cb004 	sub	fp, ip, #4	; 0x4
         2dbf0:	e1a04000 	mov	r4, r0
         2dbf4:	e1a05001 	mov	r5, r1
         2dbf8:	e590008c 	ldr	r0, [r0, #140]	; fField140
         2dbfc:	e5900000 	ldr	r0, [r0]
         2dc00:	e2802001 	add	r2, r0, #1	; 0x1
         2dc04:	e2841004 	add	r1, r4, #4	; 0x4
         2dc08:	e2840044 	add	r0, r4, #68	; 0x44
         2dc0c:	e1a07000 	mov	r7, r0
         2dc10:	eb6e1fa9 	bl	1bb5abc <$strncpy>
         2dc14:	e3a06000 	mov	r6, #0	; 0x0
         2dc18:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2dc1c:	e5900000 	ldr	r0, [r0]
         2dc20:	e0800004 	add	r0, r0, r4
         2dc24:	e5c06045 	strb	r6, [r0, #69]
         2dc28:	e594108c 	ldr	r1, [r4, #140]	; fField140
         2dc2c:	e5910440 	ldr	r0, [r1, #1088]
         2dc30:	e5911000 	ldr	r1, [r1]
         2dc34:	ea00000d 	b	2dc70 <TAirusIterator::ConstructResult(charState *)+0x8c>
         2dc38:	e5952000 	ldr	r2, [r5]
         2dc3c:	e0802102 	add	r2, r0, r2, lsl #2
         2dc40:	e5f23044 	ldrb	r3, [r2, #68]!	; fField68
         2dc44:	e084c001 	add	ip, r4, r1
         2dc48:	e5cc3044 	strb	r3, [ip, #68]	; fField68
         2dc4c:	e5d22001 	ldrb	r2, [r2, #1]
         2dc50:	e0822082 	add	r2, r2, r2, lsl #1
         2dc54:	e0802102 	add	r2, r0, r2, lsl #2
         2dc58:	e282500c 	add	r5, r2, #12	; 0xc
         2dc5c:	e5952000 	ldr	r2, [r5]
         2dc60:	e3720001 	cmn	r2, #1	; 0x1
         2dc64:	0a000005 	beq	2dc80 <TAirusIterator::ConstructResult(charState *)+0x9c>
         2dc68:	e5900440 	ldr	r0, [r0, #1088]
         2dc6c:	e2411001 	sub	r1, r1, #1	; 0x1
         2dc70:	e3300000 	teq	r0, #0	; 0x0
         2dc74:	0a000001 	beq	2dc80 <TAirusIterator::ConstructResult(charState *)+0x9c>
         2dc78:	e3510000 	cmp	r1, #0	; 0x0
         2dc7c:	2affffed 	bcs	2dc38 <TAirusIterator::ConstructResult(charState *)+0x54>
         2dc80:	e1a01005 	mov	r1, r5
         2dc84:	e1a00004 	mov	r0, r4
         2dc88:	eb675135 	bl	1a02164 <TAirusIterator::$RefreshState(charState *)>
         2dc8c:	e5940000 	ldr	r0, [r4]
         2dc90:	e5900000 	ldr	r0, [r0]
         2dc94:	e5a06028 	str	r6, [r0, #40]!
         2dc98:	e5940000 	ldr	r0, [r4]
         2dc9c:	e5900000 	ldr	r0, [r0]
         2dca0:	e5a0701c 	str	r7, [r0, #28]!
         2dca4:	e3a01002 	mov	r1, #2	; 0x2
         2dca8:	e5940000 	ldr	r0, [r4]
         2dcac:	eb6748ef 	bl	1a00070 <$CallAirusA>
         2dcb0:	e5940000 	ldr	r0, [r4]
         2dcb4:	e5901000 	ldr	r1, [r0]
         2dcb8:	e5911024 	ldr	r1, [r1, #36]
         2dcbc:	e5841084 	str	r1, [r4, #132]	; fField132
         2dcc0:	e5900000 	ldr	r0, [r0]
         2dcc4:	e5900048 	ldr	r0, [r0, #72]
         2dcc8:	e3300000 	teq	r0, #0	; 0x0
         2dccc:	03a00000 	moveq	r0, #0	; 0x0
         2dcd0:	15d00000 	ldrneb	r0, [r0]
         2dcd4:	e5c40088 	strb	r0, [r4, #136]	; fField136
         2dcd8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::BuildStateAtPrefix(unsigned long)
 * Address: 0002dcdc
 */
TAirusIterator::BuildStateAtPrefix(unsigned long) {
    /*
         2dcdc:	e1a0c00d 	mov	ip, sp
         2dce0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         2dce4:	e24cb004 	sub	fp, ip, #4	; 0x4
         2dce8:	e1a04000 	mov	r4, r0
         2dcec:	e1a05001 	mov	r5, r1
         2dcf0:	e3a06000 	mov	r6, #0	; 0x0
         2dcf4:	e580608c 	str	r6, [r0, #140]	; fField140
         2dcf8:	e5900000 	ldr	r0, [r0]
         2dcfc:	e5900000 	ldr	r0, [r0]
         2dd00:	e2411001 	sub	r1, r1, #1	; 0x1
         2dd04:	e5a06028 	str	r6, [r0, #40]!
         2dd08:	e5940000 	ldr	r0, [r4]
         2dd0c:	e5900000 	ldr	r0, [r0]
         2dd10:	e5a01020 	str	r1, [r0, #32]!
         2dd14:	e5940000 	ldr	r0, [r4]
         2dd18:	e5900000 	ldr	r0, [r0]
         2dd1c:	e5a0602c 	str	r6, [r0, #44]!	; fField44
         2dd20:	e2840004 	add	r0, r4, #4	; 0x4
         2dd24:	e5942000 	ldr	r2, [r4]
         2dd28:	e5922000 	ldr	r2, [r2]
         2dd2c:	e5a2001c 	str	r0, [r2, #28]!
         2dd30:	e1a00004 	mov	r0, r4
         2dd34:	eb675103 	bl	1a02148 <TAirusIterator::$PushState(unsigned long)>
         2dd38:	e3550000 	cmp	r5, #0	; 0x0
         2dd3c:	e5940000 	ldr	r0, [r4]
         2dd40:	9a000002 	bls	2dd50 <TAirusIterator::BuildStateAtPrefix(unsigned long)+0x74>
         2dd44:	e3a01002 	mov	r1, #2	; 0x2
         2dd48:	eb6748c8 	bl	1a00070 <$CallAirusA>
         2dd4c:	ea000005 	b	2dd68 <TAirusIterator::BuildStateAtPrefix(unsigned long)+0x8c>
         2dd50:	e5900000 	ldr	r0, [r0]
         2dd54:	e5a06020 	str	r6, [r0, #32]!
         2dd58:	e3e00000 	mvn	r0, #0	; 0x0
         2dd5c:	e5941000 	ldr	r1, [r4]
         2dd60:	e5911000 	ldr	r1, [r1]
         2dd64:	e5a10030 	str	r0, [r1, #48]!
         2dd68:	e1a00004 	mov	r0, r4
         2dd6c:	e3e01000 	mvn	r1, #0	; 0x0
         2dd70:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         2dd74:	ea674cd8 	b	1a010dc <TAirusIterator::$AddParallelState(unsigned long)>
    */
}

/**
 * Symbol: TAirusIterator::BuildStateUpToPrefix(unsigned char *, unsigned long)
 * Address: 0002dd78
 */
TAirusIterator::BuildStateUpToPrefix(unsigned char *, unsigned long) {
    /*
         2dd78:	e1a0c00d 	mov	ip, sp
         2dd7c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2dd80:	e24cb004 	sub	fp, ip, #4	; 0x4
         2dd84:	e1a04000 	mov	r4, r0
         2dd88:	e1a06001 	mov	r6, r1
         2dd8c:	e1a05002 	mov	r5, r2
         2dd90:	e3a00000 	mov	r0, #0	; 0x0
         2dd94:	e584008c 	str	r0, [r4, #140]	; fField140
         2dd98:	e5941000 	ldr	r1, [r4]
         2dd9c:	e5911000 	ldr	r1, [r1]
         2dda0:	e5a10028 	str	r0, [r1, #40]!
         2dda4:	e5941000 	ldr	r1, [r4]
         2dda8:	e5911000 	ldr	r1, [r1]
         2ddac:	e5a1002c 	str	r0, [r1, #44]!	; fField44
         2ddb0:	e2840004 	add	r0, r4, #4	; 0x4
         2ddb4:	e5941000 	ldr	r1, [r4]
         2ddb8:	e5911000 	ldr	r1, [r1]
         2ddbc:	e5a1001c 	str	r0, [r1, #28]!
         2ddc0:	e3e00000 	mvn	r0, #0	; 0x0
         2ddc4:	e5941000 	ldr	r1, [r4]
         2ddc8:	e5911000 	ldr	r1, [r1]
         2ddcc:	e5a10030 	str	r0, [r1, #48]!
         2ddd0:	e1a00004 	mov	r0, r4
         2ddd4:	e3e01000 	mvn	r1, #0	; 0x0
         2ddd8:	eb6750da 	bl	1a02148 <TAirusIterator::$PushState(unsigned long)>
         2dddc:	e1a00004 	mov	r0, r4
         2dde0:	e3e01000 	mvn	r1, #0	; 0x0
         2dde4:	eb674cbc 	bl	1a010dc <TAirusIterator::$AddParallelState(unsigned long)>
         2dde8:	e3a08000 	mov	r8, #0	; 0x0
         2ddec:	ea000023 	b	2de80 <TAirusIterator::BuildStateUpToPrefix(unsigned char *, unsigned long)+0x108>
         2ddf0:	e1a00004 	mov	r0, r4
         2ddf4:	eb6750cb 	bl	1a02128 <TAirusIterator::$GetNextChars(void)>
         2ddf8:	e7d6a008 	ldrb	sl, [r6, r8]
         2ddfc:	e3a07000 	mov	r7, #0	; 0x0
         2de00:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2de04:	e590003c 	ldr	r0, [r0, #60]
         2de08:	e3500000 	cmp	r0, #0	; 0x0
         2de0c:	9a00000c 	bls	2de44 <TAirusIterator::BuildStateUpToPrefix(unsigned char *, unsigned long)+0xcc>
         2de10:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2de14:	e0800107 	add	r0, r0, r7, lsl #2
         2de18:	e5d01044 	ldrb	r1, [r0, #68]	; fField68
         2de1c:	e1a0000a 	mov	r0, sl
         2de20:	eb6750d5 	bl	1a0217c <$SortOrder__FUcT1>
         2de24:	e1a09000 	mov	r9, r0
         2de28:	e3500000 	cmp	r0, #0	; 0x0
         2de2c:	da000004 	ble	2de44 <TAirusIterator::BuildStateUpToPrefix(unsigned char *, unsigned long)+0xcc>
         2de30:	e2877001 	add	r7, r7, #1	; 0x1
         2de34:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2de38:	e590003c 	ldr	r0, [r0, #60]
         2de3c:	e1500007 	cmp	r0, r7
         2de40:	8afffff2 	bhi	2de10 <TAirusIterator::BuildStateUpToPrefix(unsigned char *, unsigned long)+0x98>
         2de44:	e594108c 	ldr	r1, [r4, #140]	; fField140
         2de48:	e591003c 	ldr	r0, [r1, #60]
         2de4c:	e1300007 	teq	r0, r7
         2de50:	1a000003 	bne	2de64 <TAirusIterator::BuildStateUpToPrefix(unsigned char *, unsigned long)+0xec>
         2de54:	e3300000 	teq	r0, #0	; 0x0
         2de58:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         2de5c:	e3e09000 	mvn	r9, #0	; 0x0
         2de60:	e0877009 	add	r7, r7, r9
         2de64:	e2470001 	sub	r0, r7, #1	; 0x1
         2de68:	e5a10040 	str	r0, [r1, #64]!
         2de6c:	e1a00004 	mov	r0, r4
         2de70:	eb6754c5 	bl	1a0318c <TAirusIterator::$VerifyNextChar(void)>
         2de74:	e2888001 	add	r8, r8, #1	; 0x1
         2de78:	e3590000 	cmp	r9, #0	; 0x0
         2de7c:	b91baff0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         2de80:	e1580005 	cmp	r8, r5
         2de84:	291baff0 	ldmcsdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         2de88:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2de8c:	e9900003 	ldmib	r0, {r0, r1}
         2de90:	e1510000 	cmp	r1, r0
         2de94:	baffffd5 	blt	2ddf0 <TAirusIterator::BuildStateUpToPrefix(unsigned char *, unsigned long)+0x78>
         2de98:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::GetNextChars(void)
 * Address: 0002def0
 */
TAirusIterator::GetNextChars(void) {
    /*
         2def0:	e1a0c00d 	mov	ip, sp
         2def4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         2def8:	e24cb004 	sub	fp, ip, #4	; 0x4
         2defc:	e1a04000 	mov	r4, r0
         2df00:	e24ddc01 	sub	sp, sp, #256	; 0x100
         2df04:	e3a00000 	mov	r0, #0	; 0x0
         2df08:	e594108c 	ldr	r1, [r4, #140]	; fField140
         2df0c:	e3a05000 	mov	r5, #0	; 0x0
         2df10:	e5a1003c 	str	r0, [r1, #60]!
         2df14:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2df18:	e5900004 	ldr	r0, [r0, #4]	; fField4
         2df1c:	e3500000 	cmp	r0, #0	; 0x0
         2df20:	9a000024 	bls	2dfb8 <TAirusIterator::GetNextChars(void)+0xc8>
         2df24:	e0850085 	add	r0, r5, r5, lsl #1
         2df28:	e594108c 	ldr	r1, [r4, #140]	; fField140
         2df2c:	e0810100 	add	r0, r1, r0, lsl #2
         2df30:	e280100c 	add	r1, r0, #12	; 0xc
         2df34:	e5910008 	ldr	r0, [r1, #8]
         2df38:	e3300000 	teq	r0, #0	; 0x0
         2df3c:	13300001 	teqne	r0, #1	; 0x1
         2df40:	1a000017 	bne	2dfa4 <TAirusIterator::GetNextChars(void)+0xb4>
         2df44:	e1a00004 	mov	r0, r4
         2df48:	eb675085 	bl	1a02164 <TAirusIterator::$RefreshState(charState *)>
         2df4c:	e5941000 	ldr	r1, [r4]
         2df50:	e5911000 	ldr	r1, [r1]
         2df54:	e5a1d01c 	str	sp, [r1, #28]!
         2df58:	e3a01008 	mov	r1, #8	; 0x8
         2df5c:	e5940000 	ldr	r0, [r4]
         2df60:	eb674842 	bl	1a00070 <$CallAirusA>
         2df64:	e5940000 	ldr	r0, [r4]
         2df68:	e5900000 	ldr	r0, [r0]
         2df6c:	e590002c 	ldr	r0, [r0, #44]	; fField44
         2df70:	e3300000 	teq	r0, #0	; 0x0
         2df74:	1a00000a 	bne	2dfa4 <TAirusIterator::GetNextChars(void)+0xb4>
         2df78:	e1a0600d 	mov	r6, sp
         2df7c:	e5dd0000 	ldrb	r0, [sp]
         2df80:	e3300000 	teq	r0, #0	; 0x0
         2df84:	0a000006 	beq	2dfa4 <TAirusIterator::GetNextChars(void)+0xb4>
         2df88:	e1a02005 	mov	r2, r5
         2df8c:	e5d61000 	ldrb	r1, [r6]
         2df90:	e1a00004 	mov	r0, r4
         2df94:	eb675067 	bl	1a02138 <TAirusIterator::$InsertNewNextChar(unsigned char, int)>
         2df98:	e5f60001 	ldrb	r0, [r6, #1]!
         2df9c:	e3300000 	teq	r0, #0	; 0x0
         2dfa0:	1afffff8 	bne	2df88 <TAirusIterator::GetNextChars(void)+0x98>
         2dfa4:	e2855001 	add	r5, r5, #1	; 0x1
         2dfa8:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2dfac:	e5900004 	ldr	r0, [r0, #4]	; fField4
         2dfb0:	e1500005 	cmp	r0, r5
         2dfb4:	8affffda 	bhi	2df24 <TAirusIterator::GetNextChars(void)+0x34>
         2dfb8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::InsertNewNextChar(unsigned char, int)
 * Address: 0002dfbc
 */
TAirusIterator::InsertNewNextChar(unsigned char, int) {
    /*
         2dfbc:	e1a0c00d 	mov	ip, sp
         2dfc0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         2dfc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         2dfc8:	e1a04000 	mov	r4, r0
         2dfcc:	e1a05002 	mov	r5, r2
         2dfd0:	e20180ff 	and	r8, r1, #255	; 0xff
         2dfd4:	e3a06000 	mov	r6, #0	; 0x0
         2dfd8:	ea000001 	b	2dfe4 <TAirusIterator::InsertNewNextChar(unsigned char, int)+0x28>
         2dfdc:	e2860001 	add	r0, r6, #1	; 0x1
         2dfe0:	e20060ff 	and	r6, r0, #255	; 0xff
         2dfe4:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2dfe8:	e590103c 	ldr	r1, [r0, #60]
         2dfec:	e1510006 	cmp	r1, r6
         2dff0:	da000005 	ble	2e00c <TAirusIterator::InsertNewNextChar(unsigned char, int)+0x50>
         2dff4:	e0800106 	add	r0, r0, r6, lsl #2
         2dff8:	e5d01044 	ldrb	r1, [r0, #68]	; fField68
         2dffc:	e1a00008 	mov	r0, r8
         2e000:	eb67505d 	bl	1a0217c <$SortOrder__FUcT1>
         2e004:	e3500000 	cmp	r0, #0	; 0x0
         2e008:	cafffff3 	bgt	2dfdc <TAirusIterator::InsertNewNextChar(unsigned char, int)+0x20>
         2e00c:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2e010:	e0801106 	add	r1, r0, r6, lsl #2
         2e014:	e2817044 	add	r7, r1, #68	; 0x44
         2e018:	e590003c 	ldr	r0, [r0, #60]
         2e01c:	e1500006 	cmp	r0, r6
         2e020:	da000004 	ble	2e038 <TAirusIterator::InsertNewNextChar(unsigned char, int)+0x7c>
         2e024:	e2811048 	add	r1, r1, #72	; 0x48
         2e028:	e0400006 	sub	r0, r0, r6
         2e02c:	e1a02100 	mov	r2, r0, lsl #2
         2e030:	e1a00007 	mov	r0, r7
         2e034:	eb6ec3c6 	bl	1bdef54 <$BlockMove>
         2e038:	e5c78000 	strb	r8, [r7]
         2e03c:	e5c75001 	strb	r5, [r7, #1]
         2e040:	e5b4008c 	ldr	r0, [r4, #140]!	; fField140
         2e044:	e5b0103c 	ldr	r1, [r0, #60]!
         2e048:	e2811001 	add	r1, r1, #1	; 0x1
         2e04c:	e5801000 	str	r1, [r0]
         2e050:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::UnwindStateStack(void)
 * Address: 0002e054
 */
TAirusIterator::UnwindStateStack(void) {
    /*
         2e054:	e1a0c00d 	mov	ip, sp
         2e058:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2e05c:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e060:	e1a04000 	mov	r4, r0
         2e064:	e1a00004 	mov	r0, r4
         2e068:	eb675034 	bl	1a02140 <TAirusIterator::$PopState(void)>
         2e06c:	e3300000 	teq	r0, #0	; 0x0
         2e070:	1afffffb 	bne	2e064 <TAirusIterator::UnwindStateStack(void)+0x10>
         2e074:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2e078:	e3300000 	teq	r0, #0	; 0x0
         2e07c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         2e080:	eb6e7d96 	bl	1bcd6e0 <$__dl(void *)>
         2e084:	e3a00000 	mov	r0, #0	; 0x0
         2e088:	e5a4008c 	str	r0, [r4, #140]!	; fField140
         2e08c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::PushState(unsigned long)
 * Address: 0002e090
 */
TAirusIterator::PushState(unsigned long) {
    /*
         2e090:	e1a0c00d 	mov	ip, sp
         2e094:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         2e098:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e09c:	e1a04000 	mov	r4, r0
         2e0a0:	e1a05001 	mov	r5, r1
         2e0a4:	e590608c 	ldr	r6, [r0, #140]	; fField140
         2e0a8:	e3a00044 	mov	r0, #68	; 0x44
         2e0ac:	e2800b01 	add	r0, r0, #1024	; 0x400
         2e0b0:	eb6e81a0 	bl	1bce738 <$__nw(unsigned int)>
         2e0b4:	e584008c 	str	r0, [r4, #140]	; fField140
         2e0b8:	e5a06440 	str	r6, [r0, #1088]!
         2e0bc:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2e0c0:	e5805000 	str	r5, [r0]
         2e0c4:	e3a00000 	mov	r0, #0	; 0x0
         2e0c8:	e594108c 	ldr	r1, [r4, #140]	; fField140
         2e0cc:	e5a10004 	str	r0, [r1, #4]!	; fField4
         2e0d0:	e3e00000 	mvn	r0, #0	; 0x0
         2e0d4:	e594108c 	ldr	r1, [r4, #140]	; fField140
         2e0d8:	e5a10008 	str	r0, [r1, #8]!
         2e0dc:	e594108c 	ldr	r1, [r4, #140]	; fField140
         2e0e0:	e5a1003c 	str	r0, [r1, #60]!
         2e0e4:	e5b4108c 	ldr	r1, [r4, #140]!	; fField140
         2e0e8:	e5a10040 	str	r0, [r1, #64]!
         2e0ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::AddParallelState(unsigned long)
 * Address: 0002e188
 */
TAirusIterator::AddParallelState(unsigned long) {
    /*
         2e188:	e590208c 	ldr	r2, [r0, #140]	; fField140
         2e18c:	e5b23004 	ldr	r3, [r2, #4]!	; fField4
         2e190:	e2833001 	add	r3, r3, #1	; 0x1
         2e194:	e5823000 	str	r3, [r2]
         2e198:	e590208c 	ldr	r2, [r0, #140]	; fField140
         2e19c:	e592c004 	ldr	ip, [r2, #4]	; fField4
         2e1a0:	e35c0004 	cmp	ip, #4	; 0x4
         2e1a4:	9a000004 	bls	2e1bc <TAirusIterator::AddParallelState(unsigned long)+0x34>
         2e1a8:	e2820004 	add	r0, r2, #4	; 0x4
         2e1ac:	e2431001 	sub	r1, r3, #1	; 0x1
         2e1b0:	e5801000 	str	r1, [r0]
         2e1b4:	e3a00001 	mov	r0, #1	; 0x1
         2e1b8:	e1a0f00e 	mov	pc, lr
         2e1bc:	e08c308c 	add	r3, ip, ip, lsl #1
         2e1c0:	e0822103 	add	r2, r2, r3, lsl #2
         2e1c4:	e5903000 	ldr	r3, [r0]
         2e1c8:	e5933000 	ldr	r3, [r3]
         2e1cc:	e5933028 	ldr	r3, [r3, #40]
         2e1d0:	e5823004 	str	r3, [r2, #4]	; fField4
         2e1d4:	e5900000 	ldr	r0, [r0]
         2e1d8:	e5900000 	ldr	r0, [r0]
         2e1dc:	e590002c 	ldr	r0, [r0, #44]	; fField44
         2e1e0:	e5820008 	str	r0, [r2, #8]
         2e1e4:	e5821000 	str	r1, [r2]
         2e1e8:	e3a00000 	mov	r0, #0	; 0x0
         2e1ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAirusIterator::PopState(void)
 * Address: 0002e1f0
 */
TAirusIterator::PopState(void) {
    /*
         2e1f0:	e1a0c00d 	mov	ip, sp
         2e1f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         2e1f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e1fc:	e1a04000 	mov	r4, r0
         2e200:	e590008c 	ldr	r0, [r0, #140]	; fField140
         2e204:	e3300000 	teq	r0, #0	; 0x0
         2e208:	15905440 	ldrne	r5, [r0, #1088]
         2e20c:	13350000 	teqne	r5, #0	; 0x0
         2e210:	03a00000 	moveq	r0, #0	; 0x0
         2e214:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         2e218:	eb6e7d30 	bl	1bcd6e0 <$__dl(void *)>
         2e21c:	e3a00001 	mov	r0, #1	; 0x1
         2e220:	e5a4508c 	str	r5, [r4, #140]!	; fField140
         2e224:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::RefreshState(charState *)
 * Address: 0002e228
 */
TAirusIterator::RefreshState(charState *) {
    /*
         2e228:	e5912004 	ldr	r2, [r1, #4]	; fField4
         2e22c:	e5903000 	ldr	r3, [r0]
         2e230:	e5933000 	ldr	r3, [r3]
         2e234:	e5a32028 	str	r2, [r3, #40]!
         2e238:	e590208c 	ldr	r2, [r0, #140]	; fField140
         2e23c:	e5922000 	ldr	r2, [r2]
         2e240:	e5903000 	ldr	r3, [r0]
         2e244:	e5933000 	ldr	r3, [r3]
         2e248:	e5a32020 	str	r2, [r3, #32]!
         2e24c:	e5911008 	ldr	r1, [r1, #8]
         2e250:	e5900000 	ldr	r0, [r0]
         2e254:	e5900000 	ldr	r0, [r0]
         2e258:	e5a0102c 	str	r1, [r0, #44]!	; fField44
         2e25c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAirusIterator::__ct(AirusAParmBlock **)
 * Address: 0002e260
 */
TAirusIterator::TAirusIterator(AirusAParmBlock **) {
    /*
         2e260:	e1a0c00d 	mov	ip, sp
         2e264:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2e268:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e26c:	e1a04001 	mov	r4, r1
         2e270:	e3300000 	teq	r0, #0	; 0x0
         2e274:	1a000003 	bne	2e288 <TAirusIterator::__ct(AirusAParmBlock **)+0x28>
         2e278:	e3a00090 	mov	r0, #144	; 0x90
         2e27c:	eb6e812d 	bl	1bce738 <$__nw(unsigned int)>
         2e280:	e3300000 	teq	r0, #0	; 0x0
         2e284:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         2e288:	e3a01000 	mov	r1, #0	; 0x0
         2e28c:	e580108c 	str	r1, [r0, #140]	; fField140
         2e290:	e5804000 	str	r4, [r0]
         2e294:	e5c01004 	strb	r1, [r0, #4]	; fField4
         2e298:	e5c01044 	strb	r1, [r0, #68]	; fField68
         2e29c:	e5801084 	str	r1, [r0, #132]	; fField132
         2e2a0:	e5c01088 	strb	r1, [r0, #136]	; fField136
         2e2a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::__ct(TAirusIterator const &)
 * Address: 0002e2a8
 */
TAirusIterator::TAirusIterator(TAirusIterator const &) {
    /*
         2e2a8:	e1a0c00d 	mov	ip, sp
         2e2ac:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         2e2b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e2b4:	e1b04000 	movs	r4, r0
         2e2b8:	e1a05001 	mov	r5, r1
         2e2bc:	1a000003 	bne	2e2d0 <TAirusIterator::__ct(TAirusIterator const &)+0x28>
         2e2c0:	e3a00090 	mov	r0, #144	; 0x90
         2e2c4:	eb6e811b 	bl	1bce738 <$__nw(unsigned int)>
         2e2c8:	e1b04000 	movs	r4, r0
         2e2cc:	0a000021 	beq	2e358 <TAirusIterator::__ct(TAirusIterator const &)+0xb0>
         2e2d0:	e5950000 	ldr	r0, [r5]
         2e2d4:	e2851004 	add	r1, r5, #4	; 0x4
         2e2d8:	e5840000 	str	r0, [r4]
         2e2dc:	e2840004 	add	r0, r4, #4	; 0x4
         2e2e0:	e3a02040 	mov	r2, #64	; 0x40
         2e2e4:	eb6e1df4 	bl	1bb5abc <$strncpy>
         2e2e8:	e2851044 	add	r1, r5, #68	; 0x44
         2e2ec:	e2840044 	add	r0, r4, #68	; 0x44
         2e2f0:	e3a02040 	mov	r2, #64	; 0x40
         2e2f4:	eb6e1df0 	bl	1bb5abc <$strncpy>
         2e2f8:	e5950084 	ldr	r0, [r5, #132]	; fField132
         2e2fc:	e5840084 	str	r0, [r4, #132]	; fField132
         2e300:	e5d50088 	ldrb	r0, [r5, #136]	; fField136
         2e304:	e5c40088 	strb	r0, [r4, #136]	; fField136
         2e308:	e3a07000 	mov	r7, #0	; 0x0
         2e30c:	e5b5608c 	ldr	r6, [r5, #140]!	; fField140
         2e310:	e3360000 	teq	r6, #0	; 0x0
         2e314:	0a00000f 	beq	2e358 <TAirusIterator::__ct(TAirusIterator const &)+0xb0>
         2e318:	e3a05044 	mov	r5, #68	; 0x44
         2e31c:	e2855b01 	add	r5, r5, #1024	; 0x400
         2e320:	e1a00005 	mov	r0, r5
         2e324:	eb6e8103 	bl	1bce738 <$__nw(unsigned int)>
         2e328:	e1a01000 	mov	r1, r0
         2e32c:	e1a08000 	mov	r8, r0
         2e330:	e1a00006 	mov	r0, r6
         2e334:	e3a02044 	mov	r2, #68	; 0x44
         2e338:	e2822b01 	add	r2, r2, #1024	; 0x400
         2e33c:	eb6ec304 	bl	1bdef54 <$BlockMove>
         2e340:	e3370000 	teq	r7, #0	; 0x0
         2e344:	15a78440 	strne	r8, [r7, #1088]!
         2e348:	e1a07006 	mov	r7, r6
         2e34c:	e5966440 	ldr	r6, [r6, #1088]
         2e350:	e3360000 	teq	r6, #0	; 0x0
         2e354:	1afffff1 	bne	2e320 <TAirusIterator::__ct(TAirusIterator const &)+0x78>
         2e358:	e1a00004 	mov	r0, r4
         2e35c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::__dt(void)
 * Address: 0002e360
 */
TAirusIterator::~TAirusIterator(void) {
    /*
         2e360:	e1a0c00d 	mov	ip, sp
         2e364:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         2e368:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e36c:	e1a04000 	mov	r4, r0
         2e370:	e1a05001 	mov	r5, r1
         2e374:	eb675382 	bl	1a03184 <TAirusIterator::$UnwindStateStack(void)>
         2e378:	e3150001 	tst	r5, #1	; 0x1
         2e37c:	11a00004 	movne	r0, r4
         2e380:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         2e384:	1a6e7cd5 	bne	1bcd6e0 <$__dl(void *)>
         2e388:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::Reset(unsigned char *, unsigned char, unsigned char)
 * Address: 0002e38c
 */
TAirusIterator::Reset(unsigned char *, unsigned char, unsigned char) {
    /*
         2e38c:	e1a0c00d 	mov	ip, sp
         2e390:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         2e394:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e398:	e1a04000 	mov	r4, r0
         2e39c:	e1a05001 	mov	r5, r1
         2e3a0:	e20260ff 	and	r6, r2, #255	; 0xff
         2e3a4:	e20380ff 	and	r8, r3, #255	; 0xff
         2e3a8:	eb675375 	bl	1a03184 <TAirusIterator::$UnwindStateStack(void)>
         2e3ac:	e3350000 	teq	r5, #0	; 0x0
         2e3b0:	03a00000 	moveq	r0, #0	; 0x0
         2e3b4:	05c40004 	streqb	r0, [r4, #4]	; fField4
         2e3b8:	0a00000e 	beq	2e3f8 <TAirusIterator::Reset(unsigned char *, unsigned char, unsigned char)+0x6c>
         2e3bc:	e2840004 	add	r0, r4, #4	; 0x4
         2e3c0:	e1a07000 	mov	r7, r0
         2e3c4:	e1a01005 	mov	r1, r5
         2e3c8:	eb6e1db7 	bl	1bb5aac <$strcpy>
         2e3cc:	e1a00007 	mov	r0, r7
         2e3d0:	eb6e1db6 	bl	1bb5ab0 <$strlen>
         2e3d4:	e3500000 	cmp	r0, #0	; 0x0
         2e3d8:	9a000006 	bls	2e3f8 <TAirusIterator::Reset(unsigned char *, unsigned char, unsigned char)+0x6c>
         2e3dc:	e3360000 	teq	r6, #0	; 0x0
         2e3e0:	1a000004 	bne	2e3f8 <TAirusIterator::Reset(unsigned char *, unsigned char, unsigned char)+0x6c>
         2e3e4:	e1a02000 	mov	r2, r0
         2e3e8:	e1a01005 	mov	r1, r5
         2e3ec:	e1a00004 	mov	r0, r4
         2e3f0:	eb674b3e 	bl	1a010f0 <TAirusIterator::$BuildStateUpToPrefix(unsigned char *, unsigned long)>
         2e3f4:	ea000002 	b	2e404 <TAirusIterator::Reset(unsigned char *, unsigned char, unsigned char)+0x78>
         2e3f8:	e1a01000 	mov	r1, r0
         2e3fc:	e1a00004 	mov	r0, r4
         2e400:	eb674b39 	bl	1a010ec <TAirusIterator::$BuildStateAtPrefix(unsigned long)>
         2e404:	e3380000 	teq	r8, #0	; 0x0
         2e408:	e1a00004 	mov	r0, r4
         2e40c:	0a000001 	beq	2e418 <TAirusIterator::Reset(unsigned char *, unsigned char, unsigned char)+0x8c>
         2e410:	eb674f4b 	bl	1a02144 <TAirusIterator::$PreviousWord(void)>
         2e414:	ea000000 	b	2e41c <TAirusIterator::Reset(unsigned char *, unsigned char, unsigned char)+0x90>
         2e418:	eb674f47 	bl	1a0213c <TAirusIterator::$NextWord(void)>
         2e41c:	e20000ff 	and	r0, r0, #255	; 0xff
         2e420:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::ThisWord(unsigned char *, unsigned long &, unsigned char &)
 * Address: 0002e424
 */
TAirusIterator::ThisWord(unsigned char *, unsigned long &, unsigned char &) {
    /*
         2e424:	e1a0c00d 	mov	ip, sp
         2e428:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         2e42c:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e430:	e1a04000 	mov	r4, r0
         2e434:	e1a06002 	mov	r6, r2
         2e438:	e1a05003 	mov	r5, r3
         2e43c:	e5d00044 	ldrb	r0, [r0, #68]	; fField68
         2e440:	e3300000 	teq	r0, #0	; 0x0
         2e444:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         2e448:	e2842044 	add	r2, r4, #68	; 0x44
         2e44c:	e1a00001 	mov	r0, r1
         2e450:	e1a01002 	mov	r1, r2
         2e454:	eb6e1d94 	bl	1bb5aac <$strcpy>
         2e458:	e5940084 	ldr	r0, [r4, #132]	; fField132
         2e45c:	e5860000 	str	r0, [r6]
         2e460:	e5d40088 	ldrb	r0, [r4, #136]	; fField136
         2e464:	e5c50000 	strb	r0, [r5]
         2e468:	e3a00001 	mov	r0, #1	; 0x1
         2e46c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::NextWord(void)
 * Address: 0002e470
 */
TAirusIterator::NextWord(void) {
    /*
         2e470:	e1a0c00d 	mov	ip, sp
         2e474:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         2e478:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e47c:	e1a04000 	mov	r4, r0
         2e480:	e3a06000 	mov	r6, #0	; 0x0
         2e484:	e3a05000 	mov	r5, #0	; 0x0
         2e488:	e3e07000 	mvn	r7, #0	; 0x0
         2e48c:	ea000015 	b	2e4e8 <TAirusIterator::NextWord(void)+0x78>
         2e490:	e2810008 	add	r0, r1, #8	; 0x8
         2e494:	e5901000 	ldr	r1, [r0]
         2e498:	e2811001 	add	r1, r1, #1	; 0x1
         2e49c:	e5801000 	str	r1, [r0]
         2e4a0:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2e4a4:	e1a01000 	mov	r1, r0
         2e4a8:	e9900005 	ldmib	r0, {r0, r2}
         2e4ac:	e1520000 	cmp	r2, r0
         2e4b0:	2a00000a 	bcs	2e4e0 <TAirusIterator::NextWord(void)+0x70>
         2e4b4:	e0820082 	add	r0, r2, r2, lsl #1
         2e4b8:	e0810100 	add	r0, r1, r0, lsl #2
         2e4bc:	e280100c 	add	r1, r0, #12	; 0xc
         2e4c0:	e5910008 	ldr	r0, [r1, #8]
         2e4c4:	e3300001 	teq	r0, #1	; 0x1
         2e4c8:	13300002 	teqne	r0, #2	; 0x2
         2e4cc:	1a000003 	bne	2e4e0 <TAirusIterator::NextWord(void)+0x70>
         2e4d0:	e3a05001 	mov	r5, #1	; 0x1
         2e4d4:	e1a00004 	mov	r0, r4
         2e4d8:	eb674f09 	bl	1a02104 <TAirusIterator::$ConstructResult(charState *)>
         2e4dc:	ea00002a 	b	2e58c <TAirusIterator::NextWord(void)+0x11c>
         2e4e0:	e3560000 	cmp	r6, #0	; 0x0
         2e4e4:	1a000005 	bne	2e500 <TAirusIterator::NextWord(void)+0x90>
         2e4e8:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2e4ec:	e1a01000 	mov	r1, r0
         2e4f0:	e9900005 	ldmib	r0, {r0, r2}
         2e4f4:	e1520000 	cmp	r2, r0
         2e4f8:	baffffe4 	blt	2e490 <TAirusIterator::NextWord(void)+0x20>
         2e4fc:	ea000000 	b	2e504 <TAirusIterator::NextWord(void)+0x94>
         2e500:	1a000008 	bne	2e528 <TAirusIterator::NextWord(void)+0xb8>
         2e504:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2e508:	e590003c 	ldr	r0, [r0, #60]
         2e50c:	e3700001 	cmn	r0, #1	; 0x1
         2e510:	1a000005 	bne	2e52c <TAirusIterator::NextWord(void)+0xbc>
         2e514:	e1a00004 	mov	r0, r4
         2e518:	eb674f02 	bl	1a02128 <TAirusIterator::$GetNextChars(void)>
         2e51c:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2e520:	e5a07040 	str	r7, [r0, #64]!
         2e524:	ea000000 	b	2e52c <TAirusIterator::NextWord(void)+0xbc>
         2e528:	1a00000c 	bne	2e560 <TAirusIterator::NextWord(void)+0xf0>
         2e52c:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2e530:	e280103c 	add	r1, r0, #60	; 0x3c
         2e534:	e8910003 	ldmia	r1, {r0, r1}
         2e538:	e1510000 	cmp	r1, r0
         2e53c:	b1a00004 	movlt	r0, r4
         2e540:	bb675311 	bllt	1a0318c <TAirusIterator::$VerifyNextChar(void)>
         2e544:	ea000007 	b	2e568 <TAirusIterator::NextWord(void)+0xf8>
         2e548:	e1a00004 	mov	r0, r4
         2e54c:	eb674efb 	bl	1a02140 <TAirusIterator::$PopState(void)>
         2e550:	e3300000 	teq	r0, #0	; 0x0
         2e554:	03a05000 	moveq	r5, #0	; 0x0
         2e558:	05c40044 	streqb	r0, [r4, #68]	; fField68
         2e55c:	0a00000a 	beq	2e58c <TAirusIterator::NextWord(void)+0x11c>
         2e560:	e3560000 	cmp	r6, #0	; 0x0
         2e564:	1a000007 	bne	2e588 <TAirusIterator::NextWord(void)+0x118>
         2e568:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2e56c:	e9900006 	ldmib	r0, {r1, r2}
         2e570:	e1320001 	teq	r2, r1
         2e574:	0280103c 	addeq	r1, r0, #60	; 0x3c
         2e578:	08910003 	ldmeqia	r1, {r0, r1}
         2e57c:	01310000 	teqeq	r1, r0
         2e580:	1affffd6 	bne	2e4e0 <TAirusIterator::NextWord(void)+0x70>
         2e584:	eaffffef 	b	2e548 <TAirusIterator::NextWord(void)+0xd8>
         2e588:	0affffd4 	beq	2e4e0 <TAirusIterator::NextWord(void)+0x70>
         2e58c:	e1a00005 	mov	r0, r5
         2e590:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TAirusIterator::VerifyNextChar(void)
 * Address: 0002e594
 */
TAirusIterator::VerifyNextChar(void) {
    /*
         2e594:	e1a0c00d 	mov	ip, sp
         2e598:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         2e59c:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e5a0:	e1a04000 	mov	r4, r0
         2e5a4:	e590608c 	ldr	r6, [r0, #140]	; fField140
         2e5a8:	e5965040 	ldr	r5, [r6, #64]
         2e5ac:	e3750001 	cmn	r5, #1	; 0x1
         2e5b0:	1596003c 	ldrne	r0, [r6, #60]
         2e5b4:	12401001 	subne	r1, r0, #1	; 0x1
         2e5b8:	11310005 	teqne	r1, r5
         2e5bc:	02855001 	addeq	r5, r5, #1	; 0x1
         2e5c0:	0a00000d 	beq	2e5fc <TAirusIterator::VerifyNextChar(void)+0x68>
         2e5c4:	e1300005 	teq	r0, r5
         2e5c8:	0a00000b 	beq	2e5fc <TAirusIterator::VerifyNextChar(void)+0x68>
         2e5cc:	e0860105 	add	r0, r6, r5, lsl #2
         2e5d0:	e5d07044 	ldrb	r7, [r0, #68]	; fField68
         2e5d4:	e2855001 	add	r5, r5, #1	; 0x1
         2e5d8:	e596003c 	ldr	r0, [r6, #60]
         2e5dc:	e1500005 	cmp	r0, r5
         2e5e0:	da000005 	ble	2e5fc <TAirusIterator::VerifyNextChar(void)+0x68>
         2e5e4:	e0860105 	add	r0, r6, r5, lsl #2
         2e5e8:	e5d01044 	ldrb	r1, [r0, #68]	; fField68
         2e5ec:	e1a00007 	mov	r0, r7
         2e5f0:	eb674ee1 	bl	1a0217c <$SortOrder__FUcT1>
         2e5f4:	e3300000 	teq	r0, #0	; 0x0
         2e5f8:	0afffff5 	beq	2e5d4 <TAirusIterator::VerifyNextChar(void)+0x40>
         2e5fc:	e3a09000 	mov	r9, #0	; 0x0
         2e600:	e596003c 	ldr	r0, [r6, #60]
         2e604:	e1300005 	teq	r0, r5
         2e608:	01a00009 	moveq	r0, r9
         2e60c:	05a65040 	streq	r5, [r6, #64]!
         2e610:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         2e614:	e5960000 	ldr	r0, [r6]
         2e618:	e2801001 	add	r1, r0, #1	; 0x1
         2e61c:	e1a00004 	mov	r0, r4
         2e620:	eb674ec8 	bl	1a02148 <TAirusIterator::$PushState(unsigned long)>
         2e624:	e0860105 	add	r0, r6, r5, lsl #2
         2e628:	e5d08044 	ldrb	r8, [r0, #68]	; fField68
         2e62c:	e2847004 	add	r7, r4, #4	; 0x4
         2e630:	e5865040 	str	r5, [r6, #64]
         2e634:	e0860105 	add	r0, r6, r5, lsl #2
         2e638:	e2800044 	add	r0, r0, #68	; 0x44
         2e63c:	e5d01001 	ldrb	r1, [r0, #1]
         2e640:	e0811081 	add	r1, r1, r1, lsl #1
         2e644:	e0861101 	add	r1, r6, r1, lsl #2
         2e648:	e281100c 	add	r1, r1, #12	; 0xc
         2e64c:	e5d02000 	ldrb	r2, [r0]
         2e650:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2e654:	e5900000 	ldr	r0, [r0]
         2e658:	e0800004 	add	r0, r0, r4
         2e65c:	e5c02004 	strb	r2, [r0, #4]	; fField4
         2e660:	e594008c 	ldr	r0, [r4, #140]	; fField140
         2e664:	e5900000 	ldr	r0, [r0]
         2e668:	e0800004 	add	r0, r0, r4
         2e66c:	e5c09005 	strb	r9, [r0, #5]
         2e670:	e1a00004 	mov	r0, r4
         2e674:	eb674eba 	bl	1a02164 <TAirusIterator::$RefreshState(charState *)>
         2e678:	e5940000 	ldr	r0, [r4]
         2e67c:	e5900000 	ldr	r0, [r0]
         2e680:	e5a0701c 	str	r7, [r0, #28]!
         2e684:	e3a01002 	mov	r1, #2	; 0x2
         2e688:	e5940000 	ldr	r0, [r4]
         2e68c:	eb674677 	bl	1a00070 <$CallAirusA>
         2e690:	e1a01005 	mov	r1, r5
         2e694:	e1a00004 	mov	r0, r4
         2e698:	eb674a8f 	bl	1a010dc <TAirusIterator::$AddParallelState(unsigned long)>
         2e69c:	e3300000 	teq	r0, #0	; 0x0
         2e6a0:	1a000009 	bne	2e6cc <TAirusIterator::VerifyNextChar(void)+0x138>
         2e6a4:	e2855001 	add	r5, r5, #1	; 0x1
         2e6a8:	e596003c 	ldr	r0, [r6, #60]
         2e6ac:	e1500005 	cmp	r0, r5
         2e6b0:	da000005 	ble	2e6cc <TAirusIterator::VerifyNextChar(void)+0x138>
         2e6b4:	e0860105 	add	r0, r6, r5, lsl #2
         2e6b8:	e5d01044 	ldrb	r1, [r0, #68]	; fField68
         2e6bc:	e1a00008 	mov	r0, r8
         2e6c0:	eb674ead 	bl	1a0217c <$SortOrder__FUcT1>
         2e6c4:	e3300000 	teq	r0, #0	; 0x0
         2e6c8:	0affffd8 	beq	2e630 <TAirusIterator::VerifyNextChar(void)+0x9c>
         2e6cc:	e3e00000 	mvn	r0, #0	; 0x0
         2e6d0:	e5b4108c 	ldr	r1, [r4, #140]!	; fField140
         2e6d4:	e5a10008 	str	r0, [r1, #8]!
         2e6d8:	e3a00001 	mov	r0, #1	; 0x1
         2e6dc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

