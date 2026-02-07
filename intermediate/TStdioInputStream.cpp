#include "include/TStdioInputStream.h"

/**
 * Symbol: TStdioInputStream::UngetChar(unsigned short)
 * Address: 000eb3d0
 */
TStdioInputStream::UngetChar(unsigned short) {
    /*
         eb3d0:	e1a0c00d 	mov	ip, sp
         eb3d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         eb3d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb3dc:	e1a04000 	mov	r4, r0
         eb3e0:	e24dd004 	sub	sp, sp, #4	; 0x4
         eb3e4:	e1a01801 	mov	r1, r1, lsl #16
         eb3e8:	e1a01821 	mov	r1, r1, lsr #16
         eb3ec:	e5cd1001 	strb	r1, [sp, #1]
         eb3f0:	e1a00421 	mov	r0, r1, lsr #8
         eb3f4:	e5cd0000 	strb	r0, [sp]
         eb3f8:	e331000d 	teq	r1, #13	; 0xd
         eb3fc:	05940004 	ldreq	r0, [r4, #4]	; fField4
         eb400:	02400001 	subeq	r0, r0, #1	; 0x1
         eb404:	05840004 	streq	r0, [r4, #4]	; fField4
         eb408:	e3a00000 	mov	r0, #0	; 0x0
         eb40c:	e56d0004 	strb	r0, [sp, -#4]!	; fField4
         eb410:	e5cd0001 	strb	r0, [sp, #1]
         eb414:	e59f503c 	ldr	r5, [pc, #3c]	; eb458 <TStdioInputStream::UngetChar(unsigned short)+0x88>
         eb418:	e1a0100d 	mov	r1, sp
         eb41c:	e28d0004 	add	r0, sp, #4	; 0x4
         eb420:	e3a03001 	mov	r3, #1	; 0x1
         eb424:	e5952000 	ldr	r2, [r5]
         eb428:	eb6befd4 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         eb42c:	e5951000 	ldr	r1, [r5]
         eb430:	e5dd0000 	ldrb	r0, [sp]
         eb434:	eb6b0055 	bl	1bab590 <$IsFirstByteOf2Byte(unsigned char, long)>
         eb438:	e3300000 	teq	r0, #0	; 0x0
         eb43c:	15941108 	ldrne	r1, [r4, #264]	; fField264
         eb440:	15dd0001 	ldrneb	r0, [sp, #1]
         eb444:	1b6c1910 	blne	1bf188c <$ungetc>
         eb448:	e5b41108 	ldr	r1, [r4, #264]!	; fField264
         eb44c:	e5dd0000 	ldrb	r0, [sp]
         eb450:	eb6c190d 	bl	1bf188c <$ungetc>
         eb454:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         eb458:	0c100f80 	ldceq	15, cr0, [r0], -#512
    */
}

/**
 * Symbol: TStdioInputStream::End(void)
 * Address: 000eb45c
 */
TStdioInputStream::End(void) {
    /*
         eb45c:	e5900108 	ldr	r0, [r0, #264]	; fField264
         eb460:	ea6c14fc 	b	1bf0858 <$feof>
    */
}

/**
 * Symbol: TStdioInputStream::__ct(__FILE_struct *, char *)
 * Address: 000eb5b0
 */
TStdioInputStream::TStdioInputStream(__FILE_struct *, char *) {
    /*
         eb5b0:	e1a0c00d 	mov	ip, sp
         eb5b4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         eb5b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb5bc:	e1b04000 	movs	r4, r0
         eb5c0:	e1a06001 	mov	r6, r1
         eb5c4:	e1a05002 	mov	r5, r2
         eb5c8:	1a000003 	bne	eb5dc <TStdioInputStream::__ct(__FILE_struct *, char *)+0x2c>
         eb5cc:	e3a00f43 	mov	r0, #268	; 0x10c
         eb5d0:	eb6b8c58 	bl	1bce738 <$__nw(unsigned int)>
         eb5d4:	e1b04000 	movs	r4, r0
         eb5d8:	0a00000a 	beq	eb608 <TStdioInputStream::__ct(__FILE_struct *, char *)+0x58>
         eb5dc:	e1a00004 	mov	r0, r4
         eb5e0:	eb6541f8 	bl	1a3bdc8 <TInputStream::$__ct(void)>
         eb5e4:	e59f0024 	ldr	r0, [pc, #24]	; eb610 <TStdioInputStream::__ct(__FILE_struct *, char *)+0x60>
         eb5e8:	e3350000 	teq	r5, #0	; 0x0
         eb5ec:	e5840000 	str	r0, [r4]
         eb5f0:	e5846108 	str	r6, [r4, #264]	; fField264
         eb5f4:	0a000003 	beq	eb608 <TStdioInputStream::__ct(__FILE_struct *, char *)+0x58>
         eb5f8:	e2840008 	add	r0, r4, #8	; 0x8
         eb5fc:	e1a01005 	mov	r1, r5
         eb600:	e3a020ff 	mov	r2, #255	; 0xff
         eb604:	eb6b292c 	bl	1bb5abc <$strncpy>
         eb608:	e1a00004 	mov	r0, r4
         eb60c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         eb610:	0001e970 	andeq	lr, r1, r0, ror r9
    */
}

/**
 * Symbol: TStdioInputStream::GetChar(void)
 * Address: 000eb614
 */
TStdioInputStream::GetChar(void) {
    /*
         eb614:	e1a0c00d 	mov	ip, sp
         eb618:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         eb61c:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb620:	e1a04000 	mov	r4, r0
         eb624:	e24dd004 	sub	sp, sp, #4	; 0x4
         eb628:	e5900108 	ldr	r0, [r0, #264]	; fField264
         eb62c:	eb6c1492 	bl	1bf087c <$getc>
         eb630:	e1a05000 	mov	r5, r0
         eb634:	e3700001 	cmn	r0, #1	; 0x1
         eb638:	03a00801 	moveq	r0, #65536	; 0x10000
         eb63c:	02400001 	subeq	r0, r0, #1	; 0x1
         eb640:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         eb644:	e59f6034 	ldr	r6, [pc, #34]	; eb680 <TStdioInputStream::GetChar(void)+0x6c>
         eb648:	e1a00005 	mov	r0, r5
         eb64c:	e5961000 	ldr	r1, [r6]
         eb650:	eb6affce 	bl	1bab590 <$IsFirstByteOf2Byte(unsigned char, long)>
         eb654:	e3300000 	teq	r0, #0	; 0x0
         eb658:	e5cd5000 	strb	r5, [sp]
         eb65c:	0a000014 	beq	eb6b4 <TStdioInputStream::GetChar(void)+0xa0>
         eb660:	e5940108 	ldr	r0, [r4, #264]	; fField264
         eb664:	eb6c1484 	bl	1bf087c <$getc>
         eb668:	e1a05000 	mov	r5, r0
         eb66c:	e3700001 	cmn	r0, #1	; 0x1
         eb670:	028f0f03 	addeq	r0, pc, #12	; 0xc
         eb674:	0b6bdec9 	bleq	1be31a0 <$ThrowMsg>
         eb678:	e5cd5001 	strb	r5, [sp, #1]
         eb67c:	ea00000c 	b	eb6b4 <TStdioInputStream::GetChar(void)+0xa0>
         eb680:	0c100f80 	ldceq	15, cr0, [r0], -#512
         eb684:	45787065 	ldrmib	r7, [r8, -#101]!
         eb688:	63746564 	cmnvs	r4, #419430400	; 0x19000000
         eb68c:	20326e64 	eorcss	r6, r2, r4, ror #28
         eb690:	20627974 	rsbcs	r7, r2, r4, ror r9
         eb694:	65206f66 	strvs	r6, [r0, -#3942]!
         eb698:	20322d62 	eorcss	r2, r2, r2, ror #26
         eb69c:	79746520 	ldmvcdb	r4!, {r5, r8, sl, sp, lr}^
         eb6a0:	63686172 	cmnvs	r8, #-2147483620	; 0x8000001c
         eb6a4:	61637465 	cmnvs	r3, r5, ror #8
         eb6a8:	722c2067 	eorvc	r2, ip, #103	; 0x67
         eb6ac:	6f742045 	swivs	0x00742045
         eb6b0:	4f460000 	swimi	0x00460000
         eb6b4:	e24dd004 	sub	sp, sp, #4	; 0x4
         eb6b8:	e1a0100d 	mov	r1, sp
         eb6bc:	e28d0004 	add	r0, sp, #4	; 0x4
         eb6c0:	e3a03001 	mov	r3, #1	; 0x1
         eb6c4:	e5962000 	ldr	r2, [r6]
         eb6c8:	eb6bef2d 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         eb6cc:	e59d0000 	ldr	r0, [sp]
         eb6d0:	e1a00820 	mov	r0, r0, lsr #16
         eb6d4:	e330000d 	teq	r0, #13	; 0xd
         eb6d8:	05940004 	ldreq	r0, [r4, #4]	; fField4
         eb6dc:	02800001 	addeq	r0, r0, #1	; 0x1
         eb6e0:	05a40004 	streq	r0, [r4, #4]!	; fField4
         eb6e4:	e59d0000 	ldr	r0, [sp]
         eb6e8:	e1a00820 	mov	r0, r0, lsr #16
         eb6ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

