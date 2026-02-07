#include "Newton.h"

/**
 * Symbol: HasActualOrImpliedAtr(AirusAParmBlock **)
 * Address: 0002c770
 */
HasActualOrImpliedAtr(AirusAParmBlock **) {
    /*
         2c770:	e5900000 	ldr	r0, [r0]
         2c774:	e5901034 	ldr	r1, [r0, #52]
         2c778:	e3310000 	teq	r1, #0	; 0x0
         2c77c:	1a000005 	bne	2c798 <HasActualOrImpliedAtr(AirusAParmBlock **)+0x28>
         2c780:	e5900008 	ldr	r0, [r0, #8]
         2c784:	e5900000 	ldr	r0, [r0]
         2c788:	e5d00001 	ldrb	r0, [r0, #1]
         2c78c:	e2000007 	and	r0, r0, #7	; 0x7
         2c790:	e3300003 	teq	r0, #3	; 0x3
         2c794:	1a000001 	bne	2c7a0 <HasActualOrImpliedAtr(AirusAParmBlock **)+0x30>
         2c798:	e3a00001 	mov	r0, #1	; 0x1
         2c79c:	ea000000 	b	2c7a4 <HasActualOrImpliedAtr(AirusAParmBlock **)+0x34>
         2c7a0:	e3a00000 	mov	r0, #0	; 0x0
         2c7a4:	e20000ff 	and	r0, r0, #255	; 0xff
         2c7a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HandleBulkStrokes__FRC6RefVarT1
 * Address: 00036340
 */
void globals::HandleBulkStrokes() {
    /*
         36340:	e1a0c00d 	mov	ip, sp
         36344:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         36348:	e24cb004 	sub	fp, ip, #4	; 0x4
         3634c:	e1a04000 	mov	r4, r0
         36350:	e1a05001 	mov	r5, r1
         36354:	e24dd004 	sub	sp, sp, #4	; 0x4
         36358:	e59f0030 	ldr	r0, [pc, #30]	; 36390 <HandleBulkStrokes__FRC6RefVarT1+0x50>
         3635c:	eb6e2f82 	bl	1bc216c <$Clone(RefVar const &)>
         36360:	eb6e2f79 	bl	1bc214c <$AllocateRefHandle(long)>
         36364:	e1a02005 	mov	r2, r5
         36368:	e58d0000 	str	r0, [sp]
         3636c:	e59f1020 	ldr	r1, [pc, #20]	; 36394 <HandleBulkStrokes__FRC6RefVarT1+0x54>
         36370:	e1a0000d 	mov	r0, sp
         36374:	eb6e3ffb 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         36378:	e1a0100d 	mov	r1, sp
         3637c:	e1a00004 	mov	r0, r4
         36380:	eb69c836 	bl	1aa8460 <$AddWordInfo__FRC6RefVarT1>
         36384:	e59d0000 	ldr	r0, [sp]
         36388:	eb6e338b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3638c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         36390:	00680790 	streqb	r0, [r8], -#112
         36394:	00684900 	rsbeq	r4, r8, r0, lsl #18
    */
}

/**
 * Symbol: HandleDebugCard
 * Address: 00045b78
 */
void globals::HandleDebugCard() {
    /*
         45b78:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: History__FRC6RefVarT1
 * Address: 0007fd18
 */
void globals::History() {
    /*
         7fd18:	e1a00001 	mov	r0, r1
         7fd1c:	ea66ec0e 	b	1a3ad5c <$SelectHistList(RefVar const &)>
    */
}

/**
 * Symbol: HandleReplayUnit(TArray *)
 * Address: 00090288
 */
HandleReplayUnit(TArray *) {
    /*
         90288:	e1a0c00d 	mov	ip, sp
         9028c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         90290:	e24cb004 	sub	fp, ip, #4	; 0x4
         90294:	e1a04000 	mov	r4, r0
         90298:	e590000c 	ldr	r0, [r0, #12]
         9029c:	e3300001 	teq	r0, #1	; 0x1
         902a0:	03a00001 	moveq	r0, #1	; 0x1
         902a4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         902a8:	eb0a243f 	bl	3193ac <StdioOn(void)>
         902ac:	e1a00004 	mov	r0, r4
         902b0:	eb6bcfdd 	bl	1b8422c <$WriteTapStats(TArray *)>
         902b4:	eb0a2357 	bl	319018 <StdioOff(void)>
         902b8:	e3a00001 	mov	r0, #1	; 0x1
         902bc:	e59f1008 	ldr	r1, [pc, #8]	; 902cc <HandleReplayUnit(TArray *)+0x44>
         902c0:	e5911000 	ldr	r1, [r1]
         902c4:	e5c10020 	strb	r0, [r1, #32]
         902c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         902cc:	0c101880 	ldceq	8, cr1, [r0], -#512
    */
}

/**
 * Symbol: HandleControlString(unsigned short *)
 * Address: 00091a34
 */
HandleControlString(unsigned short *) {
    /*
         91a34:	e1a0c00d 	mov	ip, sp
         91a38:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         91a3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         91a40:	e1a04000 	mov	r4, r0
         91a44:	e3a0002a 	mov	r0, #42	; 0x2a
         91a48:	eb6c4e2a 	bl	1ba52f8 <$U_CONST_CHAR>
         91a4c:	e5941000 	ldr	r1, [r4]
         91a50:	e3a07000 	mov	r7, #0	; 0x0
         91a54:	e1300821 	teq	r0, r1, lsr #16
         91a58:	1a000004 	bne	91a70 <HandleControlString(unsigned short *)+0x3c>
         91a5c:	e3a0002a 	mov	r0, #42	; 0x2a
         91a60:	eb6c4e24 	bl	1ba52f8 <$U_CONST_CHAR>
         91a64:	e5941002 	ldr	r1, [r4, #2]
         91a68:	e1300821 	teq	r0, r1, lsr #16
         91a6c:	0a000001 	beq	91a78 <HandleControlString(unsigned short *)+0x44>
         91a70:	e1a00007 	mov	r0, r7
         91a74:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         91a78:	e24dd0c8 	sub	sp, sp, #200	; 0xc8
         91a7c:	e1a02004 	mov	r2, r4
         91a80:	e1a0000d 	mov	r0, sp
         91a84:	e28f1f15 	add	r1, pc, #84	; 0x54
         91a88:	eb6c9001 	bl	1bb5a94 <$sprintf>
         91a8c:	e1a0300d 	mov	r3, sp
         91a90:	e59fa074 	ldr	sl, [pc, #74]	; 91b0c <HandleControlString(unsigned short *)+0xd8>
         91a94:	e59a0000 	ldr	r0, [sl]
         91a98:	e28f2f1c 	add	r2, pc, #112	; 0x70
         91a9c:	e3a01002 	mov	r1, #2	; 0x2
         91aa0:	eb6d87d5 	bl	1bf39fc <TTestReporter::$TestFPrintf(int, char const *,...)>
         91aa4:	e59f506c 	ldr	r5, [pc, #6c]	; 91b18 <HandleControlString(unsigned short *)+0xe4>
         91aa8:	e58570c8 	str	r7, [r5, #200]
         91aac:	e58570c0 	str	r7, [r5, #192]
         91ab0:	eb0002a3 	bl	92544 <InitReplayStats(void)>
         91ab4:	e3a00030 	mov	r0, #48	; 0x30
         91ab8:	eb6c4e0e 	bl	1ba52f8 <$U_CONST_CHAR>
         91abc:	e5941004 	ldr	r1, [r4, #4]
         91ac0:	e3a06001 	mov	r6, #1	; 0x1
         91ac4:	e1300821 	teq	r0, r1, lsr #16
         91ac8:	1a000018 	bne	91b30 <HandleControlString(unsigned short *)+0xfc>
         91acc:	e28f0f12 	add	r0, pc, #72	; 0x48
         91ad0:	ebffff53 	bl	91824 <SetTestName(char *)>
         91ad4:	e5c5700c 	strb	r7, [r5, #12]
         91ad8:	e5c57014 	strb	r7, [r5, #20]
         91adc:	ea0000cd 	b	91e18 <HandleControlString(unsigned short *)+0x3e4>
         91ae0:	2a2a2a52 	bcs	b1c430 <ROM$$Size+0x3fc7e4>
         91ae4:	65706c61 	ldrvsb	r6, [r0, -#3169]!
         91ae8:	7920656e 	stmvcdb	r0!, {r1, r2, r3, r5, r6, r8, sl, sp, lr}
         91aec:	636f756e 	cmnvs	pc, #461373440	; 0x1b800000
         91af0:	74657265 	strvcbt	r7, [r5], -#613
         91af4:	6420636f 	strvst	r6, [r0], -#879
         91af8:	6e74726f 	cdpvs	2, 7, cr7, cr4, cr15, {3}
         91afc:	6c207374 	stcvs	3, cr7, [r0], -#464
         91b00:	72696e67 	rsbvc	r6, r9, #1648	; 0x670
         91b04:	3a202555 	bcc	89b060 <ROM$$Size+0x17b414>
         91b08:	00000000 	andeq	r0, r0, r0
         91b0c:	0c104ecc 	ldceq	14, cr4, [r0], -#816
         91b10:	a5a5a5a5 	strge	sl, [r5, #1445]!
         91b14:	25730d00 	ldrcsb	r0, [r3, -#3328]!
         91b18:	0c100bd4 	ldceq	11, cr0, [r0], -#848
         91b1c:	5475726e 	ldrplbt	r7, [r5], -#622
         91b20:	204c6561 	subcs	r6, ip, r1, ror #10
         91b24:	726e696e 	rsbvc	r6, lr, #1802240	; 0x1b8000
         91b28:	67204f66 	strvs	r4, [r0, -r6, ror #30]!
         91b2c:	66000000 	strvs	r0, [r0], -r0
         91b30:	e3a00031 	mov	r0, #49	; 0x31
         91b34:	eb6c4def 	bl	1ba52f8 <$U_CONST_CHAR>
         91b38:	e5941004 	ldr	r1, [r4, #4]
         91b3c:	e1300821 	teq	r0, r1, lsr #16
         91b40:	1a000008 	bne	91b68 <HandleControlString(unsigned short *)+0x134>
         91b44:	e28f0f02 	add	r0, pc, #8	; 0x8
         91b48:	ebffff35 	bl	91824 <SetTestName(char *)>
         91b4c:	e5c57014 	strb	r7, [r5, #20]
         91b50:	ea000030 	b	91c18 <HandleControlString(unsigned short *)+0x1e4>
         91b54:	5475726e 	ldrplbt	r7, [r5], -#622
         91b58:	204c6561 	subcs	r6, ip, r1, ror #10
         91b5c:	726e696e 	rsbvc	r6, lr, #1802240	; 0x1b8000
         91b60:	67204f6e 	strvs	r4, [r0, -lr, ror #30]!
         91b64:	00000000 	andeq	r0, r0, r0
         91b68:	e3a00032 	mov	r0, #50	; 0x32
         91b6c:	eb6c4de1 	bl	1ba52f8 <$U_CONST_CHAR>
         91b70:	e5941004 	ldr	r1, [r4, #4]
         91b74:	e1300821 	teq	r0, r1, lsr #16
         91b78:	1a00001e 	bne	91bf8 <HandleControlString(unsigned short *)+0x1c4>
         91b7c:	e28f0f16 	add	r0, pc, #88	; 0x58
         91b80:	eb000270 	bl	92548 <PrintToStats(char *)>
         91b84:	eb01d15b 	bl	1060f8 <LIBeginWeights(void)>
         91b88:	e1a08000 	mov	r8, r0
         91b8c:	e59f005c 	ldr	r0, [pc, #5c]	; 91bf0 <HandleControlString(unsigned short *)+0x1bc>
         91b90:	e5900000 	ldr	r0, [r0]
         91b94:	e59f1058 	ldr	r1, [pc, #58]	; 91bf4 <HandleControlString(unsigned short *)+0x1c0>
         91b98:	eb6b3901 	bl	1b5ffa4 <TController::$GetTypedDomain(unsigned long)>
         91b9c:	e1a09000 	mov	r9, r0
         91ba0:	e1a01008 	mov	r1, r8
         91ba4:	e3a03000 	mov	r3, #0	; 0x0
         91ba8:	e3a02000 	mov	r2, #0	; 0x0
         91bac:	eb6934d9 	bl	1adef18 <$SetupXRD__FP7TDomainPPcUlT3>
         91bb0:	e1a03008 	mov	r3, r8
         91bb4:	e1a00009 	mov	r0, r9
         91bb8:	e3a02000 	mov	r2, #0	; 0x0
         91bbc:	e3a01015 	mov	r1, #21	; 0x15
         91bc0:	e2811802 	add	r1, r1, #131072	; 0x20000
         91bc4:	e599c000 	ldr	ip, [r9]
         91bc8:	e1a0e00f 	mov	lr, pc
         91bcc:	e28cf02c 	add	pc, ip, #44	; 0x2c
         91bd0:	e1a00008 	mov	r0, r8
         91bd4:	eb01d523 	bl	107068 <LIEndWeights(char **)>
         91bd8:	ea00008e 	b	91e18 <HandleControlString(unsigned short *)+0x3e4>
         91bdc:	2a2a5265 	bcs	b26578 <ROM$$Size+0x40692c>
         91be0:	73657420 	cmnvc	r5, #536870912	; 0x20000000
         91be4:	77656967 	strvcb	r6, [r5, -r7, ror #18]!
         91be8:	6874730d 	ldmvsda	r4!, {r0, r2, r3, r8, r9, ip, sp, lr}^
         91bec:	00000000 	andeq	r0, r0, r0
         91bf0:	0c10187c 	ldceq	8, cr1, [r0], -#496
         91bf4:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
         91bf8:	e3a00033 	mov	r0, #51	; 0x33
         91bfc:	eb6c4dbd 	bl	1ba52f8 <$U_CONST_CHAR>
         91c00:	e5941004 	ldr	r1, [r4, #4]
         91c04:	e1300821 	teq	r0, r1, lsr #16
         91c08:	1a000068 	bne	91db0 <HandleControlString(unsigned short *)+0x37c>
         91c0c:	e28f0f2b 	add	r0, pc, #172	; 0xac
         91c10:	eb00024c 	bl	92548 <PrintToStats(char *)>
         91c14:	e5c56014 	strb	r6, [r5, #20]
         91c18:	e5c5600c 	strb	r6, [r5, #12]
         91c1c:	e3a00030 	mov	r0, #48	; 0x30
         91c20:	eb6c4db4 	bl	1ba52f8 <$U_CONST_CHAR>
         91c24:	e5941006 	ldr	r1, [r4, #6]
         91c28:	e1300821 	teq	r0, r1, lsr #16
         91c2c:	03a00064 	moveq	r0, #100	; 0x64
         91c30:	05850010 	streq	r0, [r5, #16]
         91c34:	028f0f2a 	addeq	r0, pc, #168	; 0xa8
         91c38:	0a00001e 	beq	91cb8 <HandleControlString(unsigned short *)+0x284>
         91c3c:	e3a00031 	mov	r0, #49	; 0x31
         91c40:	eb6c4dac 	bl	1ba52f8 <$U_CONST_CHAR>
         91c44:	e5941006 	ldr	r1, [r4, #6]
         91c48:	e1300821 	teq	r0, r1, lsr #16
         91c4c:	05857010 	streq	r7, [r5, #16]
         91c50:	028f0f2e 	addeq	r0, pc, #184	; 0xb8
         91c54:	0a000017 	beq	91cb8 <HandleControlString(unsigned short *)+0x284>
         91c58:	e3a00032 	mov	r0, #50	; 0x32
         91c5c:	eb6c4da5 	bl	1ba52f8 <$U_CONST_CHAR>
         91c60:	e5941006 	ldr	r1, [r4, #6]
         91c64:	e1300821 	teq	r0, r1, lsr #16
         91c68:	03a00032 	moveq	r0, #50	; 0x32
         91c6c:	05850010 	streq	r0, [r5, #16]
         91c70:	028f0f30 	addeq	r0, pc, #192	; 0xc0
         91c74:	0a00000f 	beq	91cb8 <HandleControlString(unsigned short *)+0x284>
         91c78:	e3a00033 	mov	r0, #51	; 0x33
         91c7c:	eb6c4d9d 	bl	1ba52f8 <$U_CONST_CHAR>
         91c80:	e5941006 	ldr	r1, [r4, #6]
         91c84:	e1300821 	teq	r0, r1, lsr #16
         91c88:	03a00019 	moveq	r0, #25	; 0x19
         91c8c:	05850010 	streq	r0, [r5, #16]
         91c90:	028f0f32 	addeq	r0, pc, #200	; 0xc8
         91c94:	0a000007 	beq	91cb8 <HandleControlString(unsigned short *)+0x284>
         91c98:	e3a00034 	mov	r0, #52	; 0x34
         91c9c:	eb6c4d95 	bl	1ba52f8 <$U_CONST_CHAR>
         91ca0:	e5941006 	ldr	r1, [r4, #6]
         91ca4:	e1300821 	teq	r0, r1, lsr #16
         91ca8:	1a00005a 	bne	91e18 <HandleControlString(unsigned short *)+0x3e4>
         91cac:	e3a0004b 	mov	r0, #75	; 0x4b
         91cb0:	e5850010 	str	r0, [r5, #16]
         91cb4:	e28f0f33 	add	r0, pc, #204	; 0xcc
         91cb8:	eb000222 	bl	92548 <PrintToStats(char *)>
         91cbc:	ea000055 	b	91e18 <HandleControlString(unsigned short *)+0x3e4>
         91cc0:	2a2a5475 	bcs	b26e9c <ROM$$Size+0x407250>
         91cc4:	726e204c 	rsbvc	r2, lr, #76	; 0x4c
         91cc8:	6561726e 	strvsb	r7, [r1, -#622]!
         91ccc:	696e6720 	stmvsdb	lr!, {r5, r8, r9, sl, sp, lr}^
         91cd0:	66726f6d 	ldrvsbt	r6, [r2], -sp, ror #30
         91cd4:	20636f72 	rsbcs	r6, r3, r2, ror pc
         91cd8:	72656374 	rsbvc	r6, r5, #-805306367	; 0xd0000001
         91cdc:	6f72206f 	swivs	0x0072206f
         91ce0:	6e0d2000 	cdpvs	0, 0, cr2, cr13, cr0, {0}
         91ce4:	2a2a206c 	bcs	b19e9c <ROM$$Size+0x3fa250>
         91ce8:	6561726e 	strvsb	r7, [r1, -#622]!
         91cec:	20636f72 	rsbcs	r6, r3, r2, ror pc
         91cf0:	72656374 	rsbvc	r6, r5, #-805306367	; 0xd0000001
         91cf4:	20287573 	eorcs	r7, r8, r3, ror r5
         91cf8:	65722061 	ldrvsb	r2, [r2, -#97]!
         91cfc:	6c776179 	ldfvse	f6, [r7], -#484
         91d00:	7320636f 	teqvc	r0, #-1140850687	; 0xbc000001
         91d04:	72726563 	rsbvcs	r6, r2, #415236096	; 0x18c00000
         91d08:	7473290d 	ldrvcbt	r2, [r3], -#2317
         91d0c:	00000000 	andeq	r0, r0, r0
         91d10:	2a2a206c 	bcs	b19ec8 <ROM$$Size+0x3fa27c>
         91d14:	6561726e 	strvsb	r7, [r1, -#622]!
         91d18:	20616c77 	rsbcs	r6, r1, r7, ror ip
         91d1c:	61797320 	cmnvs	r9, r0, lsr #6
         91d20:	28757365 	ldmcsda	r5!, {r0, r2, r5, r6, r8, r9, ip, sp, lr}^
         91d24:	72206e65 	eorvc	r6, r0, #1616	; 0x650
         91d28:	76657220 	strvcbt	r7, [r5], -r0, lsr #4
         91d2c:	636f7272 	cmnvs	pc, #536870919	; 0x20000007
         91d30:	65637473 	strvsb	r7, [r3, -#1139]!
         91d34:	290d0000 	stmcsdb	sp, {}
         91d38:	2a2a206c 	bcs	b19ef0 <ROM$$Size+0x3fa2a4>
         91d3c:	6561726e 	strvsb	r7, [r1, -#622]!
         91d40:	20736f6d 	rsbcss	r6, r3, sp, ror #30
         91d44:	6574696d 	ldrvsb	r6, [r4, -#2413]!
         91d48:	65732028 	ldrvsb	r2, [r3, -#40]!
         91d4c:	75736572 	ldrvcb	r6, [r3, -#1394]!
         91d50:	20636f72 	rsbcs	r6, r3, r2, ror pc
         91d54:	72656374 	rsbvc	r6, r5, #-805306367	; 0xd0000001
         91d58:	73203530 	teqvc	r0, #201326592	; 0xc000000
         91d5c:	25290d00 	strcs	r0, [r9, -#3328]!
         91d60:	2a2a206c 	bcs	b19f18 <ROM$$Size+0x3fa2cc>
         91d64:	6561726e 	strvsb	r7, [r1, -#622]!
         91d68:	20736f6d 	rsbcss	r6, r3, sp, ror #30
         91d6c:	6574696d 	ldrvsb	r6, [r4, -#2413]!
         91d70:	65732028 	ldrvsb	r2, [r3, -#40]!
         91d74:	75736572 	ldrvcb	r6, [r3, -#1394]!
         91d78:	20636f72 	rsbcs	r6, r3, r2, ror pc
         91d7c:	72656374 	rsbvc	r6, r5, #-805306367	; 0xd0000001
         91d80:	73203235 	teqvc	r0, #1342177283	; 0x50000003
         91d84:	25290d00 	strcs	r0, [r9, -#3328]!
         91d88:	2a2a206c 	bcs	b19f40 <ROM$$Size+0x3fa2f4>
         91d8c:	6561726e 	strvsb	r7, [r1, -#622]!
         91d90:	20736f6d 	rsbcss	r6, r3, sp, ror #30
         91d94:	6574696d 	ldrvsb	r6, [r4, -#2413]!
         91d98:	65732028 	ldrvsb	r2, [r3, -#40]!
         91d9c:	75736572 	ldrvcb	r6, [r3, -#1394]!
         91da0:	20636f72 	rsbcs	r6, r3, r2, ror pc
         91da4:	72656374 	rsbvc	r6, r5, #-805306367	; 0xd0000001
         91da8:	73203735 	teqvc	r0, #13893632	; 0xd40000
         91dac:	25290d00 	strcs	r0, [r9, -#3328]!
         91db0:	e3a00034 	mov	r0, #52	; 0x34
         91db4:	eb6c4d4f 	bl	1ba52f8 <$U_CONST_CHAR>
         91db8:	e5941004 	ldr	r1, [r4, #4]
         91dbc:	e1300821 	teq	r0, r1, lsr #16
         91dc0:	1a000014 	bne	91e18 <HandleControlString(unsigned short *)+0x3e4>
         91dc4:	e3a00031 	mov	r0, #49	; 0x31
         91dc8:	eb6c4d4a 	bl	1ba52f8 <$U_CONST_CHAR>
         91dcc:	e5941006 	ldr	r1, [r4, #6]
         91dd0:	e1300821 	teq	r0, r1, lsr #16
         91dd4:	1a00000c 	bne	91e0c <HandleControlString(unsigned short *)+0x3d8>
         91dd8:	e28f0f02 	add	r0, pc, #8	; 0x8
         91ddc:	eb0001d9 	bl	92548 <PrintToStats(char *)>
         91de0:	e5c5607c 	strb	r6, [r5, #124]
         91de4:	ea00000b 	b	91e18 <HandleControlString(unsigned short *)+0x3e4>
         91de8:	2a2a5475 	bcs	b26fc4 <ROM$$Size+0x407378>
         91dec:	726e206f 	rsbvc	r2, lr, #111	; 0x6f
         91df0:	6e206465 	cdpvs	4, 2, cr6, cr0, cr5, {3}
         91df4:	66657272 	undefined
         91df8:	65642072 	strvsb	r2, [r4, -#114]!
         91dfc:	65636f67 	strvsb	r6, [r3, -#3943]!
         91e00:	6e697469 	cdpvs	4, 6, cr7, cr9, cr9, {3}
         91e04:	6f6e0d20 	swivs	0x006e0d20
         91e08:	00000000 	andeq	r0, r0, r0
         91e0c:	e28f0f21 	add	r0, pc, #132	; 0x84
         91e10:	eb0001cc 	bl	92548 <PrintToStats(char *)>
         91e14:	e5c5707c 	strb	r7, [r5, #124]
         91e18:	e3a00035 	mov	r0, #53	; 0x35
         91e1c:	eb6c4d35 	bl	1ba52f8 <$U_CONST_CHAR>
         91e20:	e5941004 	ldr	r1, [r4, #4]
         91e24:	e1300821 	teq	r0, r1, lsr #16
         91e28:	1a0000d4 	bne	92180 <HandleControlString(unsigned short *)+0x74c>
         91e2c:	e28f0f22 	add	r0, pc, #136	; 0x88
         91e30:	eb0001c4 	bl	92548 <PrintToStats(char *)>
         91e34:	e5950000 	ldr	r0, [r5]
         91e38:	e3300000 	teq	r0, #0	; 0x0
         91e3c:	0a000001 	beq	91e48 <HandleControlString(unsigned short *)+0x414>
         91e40:	eb689b8d 	bl	1ab8c7c <$RemoveTestConfig(void)>
         91e44:	e5857000 	str	r7, [r5]
         91e48:	e3a00030 	mov	r0, #48	; 0x30
         91e4c:	eb6c4d29 	bl	1ba52f8 <$U_CONST_CHAR>
         91e50:	e5941006 	ldr	r1, [r4, #6]
         91e54:	e1300821 	teq	r0, r1, lsr #16
         91e58:	028f0f1e 	addeq	r0, pc, #120	; 0x78
         91e5c:	0a000123 	beq	922f0 <HandleControlString(unsigned short *)+0x8bc>
         91e60:	e3a00031 	mov	r0, #49	; 0x31
         91e64:	eb6c4d23 	bl	1ba52f8 <$U_CONST_CHAR>
         91e68:	e5941006 	ldr	r1, [r4, #6]
         91e6c:	e1300821 	teq	r0, r1, lsr #16
         91e70:	1a00007e 	bne	92070 <HandleControlString(unsigned short *)+0x63c>
         91e74:	e3a00031 	mov	r0, #49	; 0x31
         91e78:	eb6c4d1e 	bl	1ba52f8 <$U_CONST_CHAR>
         91e7c:	e5941008 	ldr	r1, [r4, #8]
         91e80:	e1300821 	teq	r0, r1, lsr #16
         91e84:	1a000019 	bne	91ef0 <HandleControlString(unsigned short *)+0x4bc>
         91e88:	e28f0f15 	add	r0, pc, #84	; 0x54
         91e8c:	ebfffe64 	bl	91824 <SetTestName(char *)>
         91e90:	e3a00000 	mov	r0, #0	; 0x0
         91e94:	ea0000b4 	b	9216c <HandleControlString(unsigned short *)+0x738>
         91e98:	2a2a5475 	bcs	b27074 <ROM$$Size+0x407428>
         91e9c:	726e206f 	rsbvc	r2, lr, #111	; 0x6f
         91ea0:	66662064 	strvsbt	r2, [r6], -r4, rrx
         91ea4:	65666572 	strvsb	r6, [r6, -#1394]!
         91ea8:	72656420 	rsbvc	r6, r5, #536870912	; 0x20000000
         91eac:	7265636f 	rsbvc	r6, r5, #-1140850687	; 0xbc000001
         91eb0:	676e6974 	undefined
         91eb4:	696f6e0d 	stmvsdb	pc!, {r0, r2, r3, r9, sl, fp, sp, lr}^
         91eb8:	20000000 	andcs	r0, r0, r0
         91ebc:	2a2a5265 	bcs	b26858 <ROM$$Size+0x406c0c>
         91ec0:	636f676e 	cmnvs	pc, #28835840	; 0x1b80000
         91ec4:	6974696f 	ldmvsdb	r4!, {r0, r1, r2, r3, r5, r6, r8, fp, sp, lr}^
         91ec8:	6e20696e 	cdpvs	9, 2, cr6, cr0, cr14, {3}
         91ecc:	20666965 	rsbcs	r6, r6, r5, ror #18
         91ed0:	6c64730d 	stcvsl	3, cr7, [r4], -#52
         91ed4:	00000000 	andeq	r0, r0, r0
         91ed8:	2a2a5475 	bcs	b270b4 <ROM$$Size+0x407468>
         91edc:	726e206f 	rsbvc	r2, lr, #111	; 0x6f
         91ee0:	66660d00 	strvsbt	r0, [r6], -r0, lsl #26
         91ee4:	486f6e6f 	stmmida	pc!, {r0, r1, r2, r3, r5, r6, r9, sl, fp, sp, lr}^
         91ee8:	72696669 	rsbvc	r6, r9, #110100480	; 0x6900000
         91eec:	63000000 	tstvs	r0, #0	; 0x0
         91ef0:	e3a00032 	mov	r0, #50	; 0x32
         91ef4:	eb6c4cff 	bl	1ba52f8 <$U_CONST_CHAR>
         91ef8:	e5941008 	ldr	r1, [r4, #8]
         91efc:	e1300821 	teq	r0, r1, lsr #16
         91f00:	1a000006 	bne	91f20 <HandleControlString(unsigned short *)+0x4ec>
         91f04:	e28f0f02 	add	r0, pc, #8	; 0x8
         91f08:	ebfffe45 	bl	91824 <SetTestName(char *)>
         91f0c:	e3a00001 	mov	r0, #1	; 0x1
         91f10:	ea000095 	b	9216c <HandleControlString(unsigned short *)+0x738>
         91f14:	46697273 	undefined
         91f18:	744e616d 	strvcb	r6, [lr], -#365
         91f1c:	65000000 	strvs	r0, [r0]
         91f20:	e3a00033 	mov	r0, #51	; 0x33
         91f24:	eb6c4cf3 	bl	1ba52f8 <$U_CONST_CHAR>
         91f28:	e5941008 	ldr	r1, [r4, #8]
         91f2c:	e1300821 	teq	r0, r1, lsr #16
         91f30:	1a000006 	bne	91f50 <HandleControlString(unsigned short *)+0x51c>
         91f34:	e28f0f02 	add	r0, pc, #8	; 0x8
         91f38:	ebfffe39 	bl	91824 <SetTestName(char *)>
         91f3c:	e3a00002 	mov	r0, #2	; 0x2
         91f40:	ea000089 	b	9216c <HandleControlString(unsigned short *)+0x738>
         91f44:	4c617374 	stcmil	3, cr7, [r1], -#464
         91f48:	4e616d65 	cdpmi	13, 6, cr6, cr1, cr5, {3}
         91f4c:	00000000 	andeq	r0, r0, r0
         91f50:	e3a00034 	mov	r0, #52	; 0x34
         91f54:	eb6c4ce7 	bl	1ba52f8 <$U_CONST_CHAR>
         91f58:	e5941008 	ldr	r1, [r4, #8]
         91f5c:	e1300821 	teq	r0, r1, lsr #16
         91f60:	1a000005 	bne	91f7c <HandleControlString(unsigned short *)+0x548>
         91f64:	e28f0f02 	add	r0, pc, #8	; 0x8
         91f68:	ebfffe2d 	bl	91824 <SetTestName(char *)>
         91f6c:	e3a00003 	mov	r0, #3	; 0x3
         91f70:	ea00007d 	b	9216c <HandleControlString(unsigned short *)+0x738>
         91f74:	5469746c 	strplbt	r7, [r9], -#1132
         91f78:	65000000 	strvs	r0, [r0]
         91f7c:	e3a00035 	mov	r0, #53	; 0x35
         91f80:	eb6c4cdc 	bl	1ba52f8 <$U_CONST_CHAR>
         91f84:	e5941008 	ldr	r1, [r4, #8]
         91f88:	e1300821 	teq	r0, r1, lsr #16
         91f8c:	1a000007 	bne	91fb0 <HandleControlString(unsigned short *)+0x57c>
         91f90:	e594100a 	ldr	r1, [r4, #10]
         91f94:	e1a01821 	mov	r1, r1, lsr #16
         91f98:	e28f0f02 	add	r0, pc, #8	; 0x8
         91f9c:	ebfffe94 	bl	919f4 <SetLocale4(char *, unsigned short)>
         91fa0:	e3a00004 	mov	r0, #4	; 0x4
         91fa4:	ea000070 	b	9216c <HandleControlString(unsigned short *)+0x738>
         91fa8:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
         91fac:	616e7900 	cmnvs	lr, r0, lsl #18
         91fb0:	e3a00036 	mov	r0, #54	; 0x36
         91fb4:	eb6c4ccf 	bl	1ba52f8 <$U_CONST_CHAR>
         91fb8:	e5941008 	ldr	r1, [r4, #8]
         91fbc:	e1300821 	teq	r0, r1, lsr #16
         91fc0:	1a000005 	bne	91fdc <HandleControlString(unsigned short *)+0x5a8>
         91fc4:	e28f0f02 	add	r0, pc, #8	; 0x8
         91fc8:	ebfffe15 	bl	91824 <SetTestName(char *)>
         91fcc:	e3a00005 	mov	r0, #5	; 0x5
         91fd0:	ea000065 	b	9216c <HandleControlString(unsigned short *)+0x738>
         91fd4:	41646472 	cmnmi	r4, r2, ror r4
         91fd8:	65737300 	ldrvsb	r7, [r3, -#768]!
         91fdc:	e3a00037 	mov	r0, #55	; 0x37
         91fe0:	eb6c4cc4 	bl	1ba52f8 <$U_CONST_CHAR>
         91fe4:	e5941008 	ldr	r1, [r4, #8]
         91fe8:	e1300821 	teq	r0, r1, lsr #16
         91fec:	1a000007 	bne	92010 <HandleControlString(unsigned short *)+0x5dc>
         91ff0:	e594100a 	ldr	r1, [r4, #10]
         91ff4:	e1a01821 	mov	r1, r1, lsr #16
         91ff8:	e28f0f02 	add	r0, pc, #8	; 0x8
         91ffc:	ebfffe1e 	bl	9187c <SetLocale5(char *, unsigned short)>
         92000:	e3a00006 	mov	r0, #6	; 0x6
         92004:	ea000058 	b	9216c <HandleControlString(unsigned short *)+0x738>
         92008:	43697479 	cmnmi	r9, #2030043136	; 0x79000000
         9200c:	00000000 	andeq	r0, r0, r0
         92010:	e3a00038 	mov	r0, #56	; 0x38
         92014:	eb6c4cb7 	bl	1ba52f8 <$U_CONST_CHAR>
         92018:	e5941008 	ldr	r1, [r4, #8]
         9201c:	e1300821 	teq	r0, r1, lsr #16
         92020:	1a000007 	bne	92044 <HandleControlString(unsigned short *)+0x610>
         92024:	e594100a 	ldr	r1, [r4, #10]
         92028:	e1a01821 	mov	r1, r1, lsr #16
         9202c:	e28f0f02 	add	r0, pc, #8	; 0x8
         92030:	ebfffe6f 	bl	919f4 <SetLocale4(char *, unsigned short)>
         92034:	e3a00007 	mov	r0, #7	; 0x7
         92038:	ea00004b 	b	9216c <HandleControlString(unsigned short *)+0x738>
         9203c:	53746174 	cmnpl	r4, #29	; 0x1d
         92040:	65000000 	strvs	r0, [r0]
         92044:	e3a00039 	mov	r0, #57	; 0x39
         92048:	eb6c4caa 	bl	1ba52f8 <$U_CONST_CHAR>
         9204c:	e5941008 	ldr	r1, [r4, #8]
         92050:	e1300821 	teq	r0, r1, lsr #16
         92054:	1a0000d1 	bne	923a0 <HandleControlString(unsigned short *)+0x96c>
         92058:	e28f0f02 	add	r0, pc, #8	; 0x8
         9205c:	ebfffdf0 	bl	91824 <SetTestName(char *)>
         92060:	e3a00008 	mov	r0, #8	; 0x8
         92064:	ea000040 	b	9216c <HandleControlString(unsigned short *)+0x738>
         92068:	5a697043 	bpl	1aee17c <PCirrusBatteryDriver::$BatteryLevel(unsigned long, long)+0xa80>
         9206c:	6f646500 	swivs	0x00646500
         92070:	e3a00032 	mov	r0, #50	; 0x32
         92074:	eb6c4c9f 	bl	1ba52f8 <$U_CONST_CHAR>
         92078:	e5941006 	ldr	r1, [r4, #6]
         9207c:	e1300821 	teq	r0, r1, lsr #16
         92080:	1a0000c6 	bne	923a0 <HandleControlString(unsigned short *)+0x96c>
         92084:	e3a00030 	mov	r0, #48	; 0x30
         92088:	eb6c4c9a 	bl	1ba52f8 <$U_CONST_CHAR>
         9208c:	e5941008 	ldr	r1, [r4, #8]
         92090:	e1300821 	teq	r0, r1, lsr #16
         92094:	1a000005 	bne	920b0 <HandleControlString(unsigned short *)+0x67c>
         92098:	e28f0f02 	add	r0, pc, #8	; 0x8
         9209c:	ebfffde0 	bl	91824 <SetTestName(char *)>
         920a0:	e3a00009 	mov	r0, #9	; 0x9
         920a4:	ea000030 	b	9216c <HandleControlString(unsigned short *)+0x738>
         920a8:	436f756e 	cmnmi	pc, #461373440	; 0x1b800000
         920ac:	74727900 	ldrvcbt	r7, [r2], -#2304
         920b0:	e3a00031 	mov	r0, #49	; 0x31
         920b4:	eb6c4c8f 	bl	1ba52f8 <$U_CONST_CHAR>
         920b8:	e5941008 	ldr	r1, [r4, #8]
         920bc:	e1300821 	teq	r0, r1, lsr #16
         920c0:	1a000005 	bne	920dc <HandleControlString(unsigned short *)+0x6a8>
         920c4:	e28f0f02 	add	r0, pc, #8	; 0x8
         920c8:	ebfffdd5 	bl	91824 <SetTestName(char *)>
         920cc:	e3a0000a 	mov	r0, #10	; 0xa
         920d0:	ea000025 	b	9216c <HandleControlString(unsigned short *)+0x738>
         920d4:	452d4d61 	strmi	r4, [sp, -#3425]!
         920d8:	696c0000 	stmvsdb	ip!, {}^
         920dc:	e3a00032 	mov	r0, #50	; 0x32
         920e0:	eb6c4c84 	bl	1ba52f8 <$U_CONST_CHAR>
         920e4:	e5941008 	ldr	r1, [r4, #8]
         920e8:	e1300821 	teq	r0, r1, lsr #16
         920ec:	1a000007 	bne	92110 <HandleControlString(unsigned short *)+0x6dc>
         920f0:	e594100a 	ldr	r1, [r4, #10]
         920f4:	e1a01821 	mov	r1, r1, lsr #16
         920f8:	e28f0f02 	add	r0, pc, #8	; 0x8
         920fc:	ebfffdde 	bl	9187c <SetLocale5(char *, unsigned short)>
         92100:	e3a0000b 	mov	r0, #11	; 0xb
         92104:	ea000018 	b	9216c <HandleControlString(unsigned short *)+0x738>
         92108:	50686f6e 	rsbpl	r6, r8, lr, ror #30
         9210c:	65000000 	strvs	r0, [r0]
         92110:	e3a00033 	mov	r0, #51	; 0x33
         92114:	eb6c4c77 	bl	1ba52f8 <$U_CONST_CHAR>
         92118:	e5941008 	ldr	r1, [r4, #8]
         9211c:	e1300821 	teq	r0, r1, lsr #16
         92120:	1a000007 	bne	92144 <HandleControlString(unsigned short *)+0x710>
         92124:	e594100a 	ldr	r1, [r4, #10]
         92128:	e1a01821 	mov	r1, r1, lsr #16
         9212c:	e28f0f02 	add	r0, pc, #8	; 0x8
         92130:	ebfffdd1 	bl	9187c <SetLocale5(char *, unsigned short)>
         92134:	e3a0000c 	mov	r0, #12	; 0xc
         92138:	ea00000b 	b	9216c <HandleControlString(unsigned short *)+0x738>
         9213c:	44617465 	strmibt	r7, [r1], -#1125
         92140:	00000000 	andeq	r0, r0, r0
         92144:	e3a00034 	mov	r0, #52	; 0x34
         92148:	eb6c4c6a 	bl	1ba52f8 <$U_CONST_CHAR>
         9214c:	e5941008 	ldr	r1, [r4, #8]
         92150:	e1300821 	teq	r0, r1, lsr #16
         92154:	1a000091 	bne	923a0 <HandleControlString(unsigned short *)+0x96c>
         92158:	e594100a 	ldr	r1, [r4, #10]
         9215c:	e1a01821 	mov	r1, r1, lsr #16
         92160:	e28f0f04 	add	r0, pc, #16	; 0x10
         92164:	ebfffdc4 	bl	9187c <SetLocale5(char *, unsigned short)>
         92168:	e3a0000d 	mov	r0, #13	; 0xd
         9216c:	eb6858b7 	bl	1aa8450 <$AddTestConfig(unsigned long)>
         92170:	e5856000 	str	r6, [r5]
         92174:	ea000089 	b	923a0 <HandleControlString(unsigned short *)+0x96c>
         92178:	54696d65 	strplbt	r6, [r9], -#3429
         9217c:	00000000 	andeq	r0, r0, r0
         92180:	e3a00036 	mov	r0, #54	; 0x36
         92184:	eb6c4c5b 	bl	1ba52f8 <$U_CONST_CHAR>
         92188:	e5941004 	ldr	r1, [r4, #4]
         9218c:	e1300821 	teq	r0, r1, lsr #16
         92190:	1a000067 	bne	92334 <HandleControlString(unsigned short *)+0x900>
         92194:	e28f0f0b 	add	r0, pc, #44	; 0x2c
         92198:	eb0000ea 	bl	92548 <PrintToStats(char *)>
         9219c:	e3a00030 	mov	r0, #48	; 0x30
         921a0:	eb6c4c54 	bl	1ba52f8 <$U_CONST_CHAR>
         921a4:	e5941006 	ldr	r1, [r4, #6]
         921a8:	e3a08801 	mov	r8, #65536	; 0x10000
         921ac:	e1300821 	teq	r0, r1, lsr #16
         921b0:	1a000011 	bne	921fc <HandleControlString(unsigned short *)+0x7c8>
         921b4:	e28f0f0a 	add	r0, pc, #40	; 0x28
         921b8:	eb0000e2 	bl	92548 <PrintToStats(char *)>
         921bc:	e5c57080 	strb	r7, [r5, #128]
         921c0:	e5a58084 	str	r8, [r5, #132]!
         921c4:	ea000075 	b	923a0 <HandleControlString(unsigned short *)+0x96c>
         921c8:	2a2a5363 	bcs	b26f5c <ROM$$Size+0x407310>
         921cc:	616c696e 	cmnvs	ip, lr, ror #18
         921d0:	67202872 	undefined
         921d4:	6573697a 	ldrvsb	r6, [r3, -#2426]!
         921d8:	696e6729 	stmvsdb	lr!, {r0, r3, r5, r8, r9, sl, sp, lr}^
         921dc:	20696e6b 	rsbcs	r6, r9, fp, ror #28
         921e0:	0d000000 	stceq	0, cr0, [r0]
         921e4:	2a2a5475 	bcs	b273c0 <ROM$$Size+0x407774>
         921e8:	726e696e 	rsbvc	r6, lr, #1802240	; 0x1b8000
         921ec:	67207363 	strvs	r7, [r0, -r3, ror #6]!
         921f0:	616c696e 	cmnvs	ip, lr, ror #18
         921f4:	67206f66 	strvs	r6, [r0, -r6, ror #30]!
         921f8:	660d0000 	strvs	r0, [sp], -r0
         921fc:	e3a00031 	mov	r0, #49	; 0x31
         92200:	eb6c4c3c 	bl	1ba52f8 <$U_CONST_CHAR>
         92204:	e5941006 	ldr	r1, [r4, #6]
         92208:	e1300821 	teq	r0, r1, lsr #16
         9220c:	0a000004 	beq	92224 <HandleControlString(unsigned short *)+0x7f0>
         92210:	e3a00032 	mov	r0, #50	; 0x32
         92214:	eb6c4c37 	bl	1ba52f8 <$U_CONST_CHAR>
         92218:	e5941006 	ldr	r1, [r4, #6]
         9221c:	e1300821 	teq	r0, r1, lsr #16
         92220:	1a00005e 	bne	923a0 <HandleControlString(unsigned short *)+0x96c>
         92224:	e3a00030 	mov	r0, #48	; 0x30
         92228:	eb6c4c32 	bl	1ba52f8 <$U_CONST_CHAR>
         9222c:	e5941008 	ldr	r1, [r4, #8]
         92230:	e0607821 	rsb	r7, r0, r1, lsr #16
         92234:	e3570001 	cmp	r7, #1	; 0x1
         92238:	ba000058 	blt	923a0 <HandleControlString(unsigned short *)+0x96c>
         9223c:	e3570009 	cmp	r7, #9	; 0x9
         92240:	ca000056 	bgt	923a0 <HandleControlString(unsigned short *)+0x96c>
         92244:	e5c56080 	strb	r6, [r5, #128]
         92248:	e3a00032 	mov	r0, #50	; 0x32
         9224c:	eb6c4c29 	bl	1ba52f8 <$U_CONST_CHAR>
         92250:	e5941006 	ldr	r1, [r4, #6]
         92254:	e1300821 	teq	r0, r1, lsr #16
         92258:	02677000 	rsbeq	r7, r7, #0	; 0x0
         9225c:	e3370009 	teq	r7, #9	; 0x9
         92260:	03a00719 	moveq	r0, #6553600	; 0x640000
         92264:	0a000016 	beq	922c4 <HandleControlString(unsigned short *)+0x890>
         92268:	e2170003 	ands	r0, r7, #3	; 0x3
         9226c:	05858084 	streq	r8, [r5, #132]
         92270:	0a00000e 	beq	922b0 <HandleControlString(unsigned short *)+0x87c>
         92274:	e3300001 	teq	r0, #1	; 0x1
         92278:	03a0006f 	moveq	r0, #111	; 0x6f
         9227c:	02800a13 	addeq	r0, r0, #77824	; 0x13000
         92280:	02477001 	subeq	r7, r7, #1	; 0x1
         92284:	05850084 	streq	r0, [r5, #132]
         92288:	0a000008 	beq	922b0 <HandleControlString(unsigned short *)+0x87c>
         9228c:	e3300002 	teq	r0, #2	; 0x2
         92290:	059f0060 	ldreq	r0, [pc, #60]	; 922f8 <HandleControlString(unsigned short *)+0x8c4>
         92294:	02477002 	subeq	r7, r7, #2	; 0x2
         92298:	05850084 	streq	r0, [r5, #132]
         9229c:	0a000003 	beq	922b0 <HandleControlString(unsigned short *)+0x87c>
         922a0:	e3300003 	teq	r0, #3	; 0x3
         922a4:	059f0050 	ldreq	r0, [pc, #50]	; 922fc <HandleControlString(unsigned short *)+0x8c8>
         922a8:	02477003 	subeq	r7, r7, #3	; 0x3
         922ac:	05850084 	streq	r0, [r5, #132]
         922b0:	e3570000 	cmp	r7, #0	; 0x0
         922b4:	b2877003 	addlt	r7, r7, #3	; 0x3
         922b8:	e1a07147 	mov	r7, r7, asr #2
         922bc:	e5950084 	ldr	r0, [r5, #132]
         922c0:	e1a00710 	mov	r0, r0, lsl r7
         922c4:	e5850084 	str	r0, [r5, #132]
         922c8:	e5b50084 	ldr	r0, [r5, #132]!
         922cc:	ee010190 	fltd	f1, r0
         922d0:	ed9f810a 	ldfd	f0, [pc, #40]
         922d4:	ee410180 	dvfd	f0, f1, f0
         922d8:	e1a0000d 	mov	r0, sp
         922dc:	e28f1f09 	add	r1, pc, #36	; 0x24
         922e0:	ed2d8102 	stfd	f0, [sp, -#8]!
         922e4:	e8bd000c 	ldmia	sp!, {r2, r3}
         922e8:	eb6c8de9 	bl	1bb5a94 <$sprintf>
         922ec:	e1a0000d 	mov	r0, sp
         922f0:	eb000094 	bl	92548 <PrintToStats(char *)>
         922f4:	ea000029 	b	923a0 <HandleControlString(unsigned short *)+0x96c>
         922f8:	00016a09 	andeq	r6, r1, r9, lsl #20
         922fc:	0001ae89 	andeq	sl, r1, r9, lsl #29
         92300:	40f00000 	rscmis	r0, r0, r0
         92304:	00000000 	andeq	r0, r0, r0
         92308:	2a2a5475 	bcs	b274e4 <ROM$$Size+0x407898>
         9230c:	726e696e 	rsbvc	r6, lr, #1802240	; 0x1b8000
         92310:	67207363 	strvs	r7, [r0, -r3, ror #6]!
         92314:	616c696e 	cmnvs	ip, lr, ror #18
         92318:	67206f6e 	strvs	r6, [r0, -lr, ror #30]!
         9231c:	3a207363 	bcc	8af0b0 <ROM$$Size+0x18f464>
         92320:	616c6520 	cmnvs	ip, r0, lsr #10
         92324:	66616374 	undefined
         92328:	6f722025 	swivs	0x00722025
         9232c:	392e3466 	stmccdb	lr!, {r1, r2, r5, r6, sl, ip, sp}
         92330:	0d000000 	stceq	0, cr0, [r0]
         92334:	e3a00037 	mov	r0, #55	; 0x37
         92338:	eb6c4bee 	bl	1ba52f8 <$U_CONST_CHAR>
         9233c:	e5941004 	ldr	r1, [r4, #4]
         92340:	e1300821 	teq	r0, r1, lsr #16
         92344:	1a000015 	bne	923a0 <HandleControlString(unsigned short *)+0x96c>
         92348:	e3a00031 	mov	r0, #49	; 0x31
         9234c:	eb6c4be9 	bl	1ba52f8 <$U_CONST_CHAR>
         92350:	e5941006 	ldr	r1, [r4, #6]
         92354:	e1300821 	teq	r0, r1, lsr #16
         92358:	1a00000c 	bne	92390 <HandleControlString(unsigned short *)+0x95c>
         9235c:	e28f0f03 	add	r0, pc, #12	; 0xc
         92360:	eb000078 	bl	92548 <PrintToStats(char *)>
         92364:	e5c56088 	strb	r6, [r5, #136]
         92368:	e5c56098 	strb	r6, [r5, #152]
         9236c:	ea00000b 	b	923a0 <HandleControlString(unsigned short *)+0x96c>
         92370:	2a2a5265 	bcs	b26d0c <ROM$$Size+0x4070c0>
         92374:	636f676e 	cmnvs	pc, #28835840	; 0x1b80000
         92378:	6974696f 	ldmvsdb	r4!, {r0, r1, r2, r3, r5, r6, r8, fp, sp, lr}^
         9237c:	6e20696e 	cdpvs	9, 2, cr6, cr0, cr14, {3}
         92380:	20636f72 	rsbcs	r6, r3, r2, ror pc
         92384:	72656374 	rsbvc	r6, r5, #-805306367	; 0xd0000001
         92388:	6f720d20 	swivs	0x00720d20
         9238c:	00000000 	andeq	r0, r0, r0
         92390:	e28f0f0d 	add	r0, pc, #52	; 0x34
         92394:	eb00006b 	bl	92548 <PrintToStats(char *)>
         92398:	e5c57088 	strb	r7, [r5, #136]
         9239c:	eb689a36 	bl	1ab8c7c <$RemoveTestConfig(void)>
         923a0:	e59f2048 	ldr	r2, [pc, #48]	; 923f0 <HandleControlString(unsigned short *)+0x9bc>
         923a4:	e1a0000d 	mov	r0, sp
         923a8:	e28f1f11 	add	r1, pc, #68	; 0x44
         923ac:	eb6c8db8 	bl	1bb5a94 <$sprintf>
         923b0:	e1a0300d 	mov	r3, sp
         923b4:	e59a0000 	ldr	r0, [sl]
         923b8:	e28f2f12 	add	r2, pc, #72	; 0x48
         923bc:	e3a01002 	mov	r1, #2	; 0x2
         923c0:	eb6d858d 	bl	1bf39fc <TTestReporter::$TestFPrintf(int, char const *,...)>
         923c4:	e1a00006 	mov	r0, r6
         923c8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         923cc:	2a2a5475 	bcs	b275a8 <ROM$$Size+0x40795c>
         923d0:	726e206f 	rsbvc	r2, lr, #111	; 0x6f
         923d4:	66662063 	strvsbt	r2, [r6], -r3, rrx
         923d8:	6f727265 	swivs	0x00727265
         923dc:	63746f72 	cmnvs	r4, #456	; 0x1c8
         923e0:	20726563 	rsbcss	r6, r2, r3, ror #10
         923e4:	6f676e69 	swivs	0x00676e69
         923e8:	74696f6e 	strvcbt	r6, [r9], -#3950
         923ec:	0d200000 	stceq	0, cr0, [r0]
         923f0:	0c100bec 	ldceq	11, cr0, [r0], -#944
         923f4:	42656769 	rsbmi	r6, r5, #27525120	; 0x1a40000
         923f8:	6e6e696e 	cdpvs	9, 6, cr6, cr14, cr14, {3}
         923fc:	67207465 	strvs	r7, [r0, -r5, ror #8]!
         92400:	73743a20 	cmnvc	r4, #131072	; 0x20000
         92404:	25730000 	ldrcsb	r0, [r3]!
         92408:	a5a5a5a5 	strge	sl, [r5, #1445]!
         9240c:	25730d00 	ldrcsb	r0, [r3, -#3328]!
    */
}

/**
 * Symbol: HitsOldHilitedInk(TView *, TPoint)
 * Address: 000a40d4
 */
HitsOldHilitedInk(TView *, TPoint) {
    /*
         a40d4:	e1a0c00d 	mov	ip, sp
         a40d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a40dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         a40e0:	e1a05001 	mov	r5, r1
         a40e4:	e1a04000 	mov	r4, r0
         a40e8:	e3a01052 	mov	r1, #82	; 0x52
         a40ec:	e5902000 	ldr	r2, [r0]
         a40f0:	e1a0e00f 	mov	lr, pc
         a40f4:	e282f004 	add	pc, r2, #4	; 0x4
         a40f8:	e3a07000 	mov	r7, #0	; 0x0
         a40fc:	e3300000 	teq	r0, #0	; 0x0
         a4100:	0a000018 	beq	a4168 <HitsOldHilitedInk(TView *, TPoint)+0x94>
         a4104:	e1a00004 	mov	r0, r4
         a4108:	eb6835f2 	bl	1ab18d8 <TView::$FirstHilite(void)>
         a410c:	eb6c780e 	bl	1bc214c <$AllocateRefHandle(long)>
         a4110:	e1a06000 	mov	r6, r0
         a4114:	e5900000 	ldr	r0, [r0]
         a4118:	e3300002 	teq	r0, #2	; 0x2
         a411c:	0a00000f 	beq	a4160 <HitsOldHilitedInk(TView *, TPoint)+0x8c>
         a4120:	e59f1034 	ldr	r1, [pc, #34]	; a415c <HitsOldHilitedInk(TView *, TPoint)+0x88>
         a4124:	e1a00004 	mov	r0, r4
         a4128:	eb6c9906 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         a412c:	e3300000 	teq	r0, #0	; 0x0
         a4130:	0a000004 	beq	a4148 <HitsOldHilitedInk(TView *, TPoint)+0x74>
         a4134:	e2841010 	add	r1, r4, #16	; 0x10
         a4138:	e52d5004 	str	r5, [sp, -#4]!
         a413c:	e1a00005 	mov	r0, r5
         a4140:	e28dd004 	add	sp, sp, #4	; 0x4
         a4144:	eb6ab9fc 	bl	1b5293c <$PtInRect(Point, Rect *)>
         a4148:	e3a04001 	mov	r4, #1	; 0x1
         a414c:	e1a00006 	mov	r0, r6
         a4150:	eb6c7c19 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4154:	e1a00004 	mov	r0, r4
         a4158:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         a415c:	00683220 	rsbeq	r3, r8, r0, lsr #4
         a4160:	e1a00006 	mov	r0, r6
         a4164:	eb6c7c14 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4168:	e1a00007 	mov	r0, r7
         a416c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: HandleIgnoreStroke(RefVar const &, SortStuff *)
 * Address: 000a8e80
 */
HandleIgnoreStroke(RefVar const &, SortStuff *) {
    /*
         a8e80:	e1a0c00d 	mov	ip, sp
         a8e84:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a8e88:	e24cb004 	sub	fp, ip, #4	; 0x4
         a8e8c:	e1a04000 	mov	r4, r0
         a8e90:	e281000c 	add	r0, r1, #12	; 0xc
         a8e94:	e1a06000 	mov	r6, r0
         a8e98:	e5900000 	ldr	r0, [r0]
         a8e9c:	e5900000 	ldr	r0, [r0]
         a8ea0:	e3300002 	teq	r0, #2	; 0x2
         a8ea4:	0a00001e 	beq	a8f24 <HandleIgnoreStroke(RefVar const &, SortStuff *)+0xa4>
         a8ea8:	e24dd004 	sub	sp, sp, #4	; 0x4
         a8eac:	e59f507c 	ldr	r5, [pc, #7c]	; a8f30 <HandleIgnoreStroke(RefVar const &, SortStuff *)+0xb0>
         a8eb0:	e5951000 	ldr	r1, [r5]
         a8eb4:	e5911000 	ldr	r1, [r1]
         a8eb8:	eb6c6ce8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a8ebc:	eb6c64a2 	bl	1bc214c <$AllocateRefHandle(long)>
         a8ec0:	e40d0004 	str	r0, [sp], -#4
         a8ec4:	e28d0004 	add	r0, sp, #4	; 0x4
         a8ec8:	eb6d2aaf 	bl	1bf398c <$IsArray(RefVar const &)>
         a8ecc:	e3300000 	teq	r0, #0	; 0x0
         a8ed0:	1a000007 	bne	a8ef4 <HandleIgnoreStroke(RefVar const &, SortStuff *)+0x74>
         a8ed4:	e3a00000 	mov	r0, #0	; 0x0
         a8ed8:	eb67cbaf 	bl	1a9bd9c <$MakeArray(long)>
         a8edc:	e59d1004 	ldr	r1, [sp, #4]
         a8ee0:	e5810000 	str	r0, [r1]
         a8ee4:	e1a00006 	mov	r0, r6
         a8ee8:	e28d2004 	add	r2, sp, #4	; 0x4
         a8eec:	e1a01005 	mov	r1, r5
         a8ef0:	eb6c751c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a8ef4:	e1a00004 	mov	r0, r4
         a8ef8:	eb689e56 	bl	1ad0858 <$GetKidIndex(RefVar const &)>
         a8efc:	eb6c6492 	bl	1bc214c <$AllocateRefHandle(long)>
         a8f00:	e58d0000 	str	r0, [sp]
         a8f04:	e1a0100d 	mov	r1, sp
         a8f08:	e28d0004 	add	r0, sp, #4	; 0x4
         a8f0c:	eb6c6485 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         a8f10:	e59d0000 	ldr	r0, [sp]
         a8f14:	eb6c68a8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a8f18:	e5bd0004 	ldr	r0, [sp, #4]!
         a8f1c:	eb6c68a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a8f20:	e28dd004 	add	sp, sp, #4	; 0x4
         a8f24:	e1a00004 	mov	r0, r4
         a8f28:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         a8f2c:	ea68e8ab 	b	1ae31e0 <$InvalKidIndex(RefVar const &)>
         a8f30:	00684f08 	rsbeq	r4, r8, r8, lsl #30
    */
}

/**
 * Symbol: HashPSSID(unsigned long)
 * Address: 000c4fd8
 */
HashPSSID(unsigned long) {
    /*
         c4fd8:	e0201c20 	eor	r1, r0, r0, lsr #24
         c4fdc:	e0211820 	eor	r1, r1, r0, lsr #16
         c4fe0:	e0210420 	eor	r0, r1, r0, lsr #8
         c4fe4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HitShape(RefVar const &, TPoint const &, TPoint const &)
 * Address: 000e17bc
 */
HitShape(RefVar const &, TPoint const &, TPoint const &) {
    /*
         e17bc:	e1a0c00d 	mov	ip, sp
         e17c0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         e17c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         e17c8:	e1a06000 	mov	r6, r0
         e17cc:	e1a04001 	mov	r4, r1
         e17d0:	e1a05002 	mov	r5, r2
         e17d4:	e3a07000 	mov	r7, #0	; 0x0
         e17d8:	eb6c486b 	bl	1bf398c <$IsArray(RefVar const &)>
         e17dc:	e3a08000 	mov	r8, #0	; 0x0
         e17e0:	e3300000 	teq	r0, #0	; 0x0
         e17e4:	0a000036 	beq	e18c4 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x108>
         e17e8:	e3a08000 	mov	r8, #0	; 0x0
         e17ec:	e24dd030 	sub	sp, sp, #48	; 0x30
         e17f0:	e1a01006 	mov	r1, r6
         e17f4:	e1a0000d 	mov	r0, sp
         e17f8:	e3a02000 	mov	r2, #0	; 0x0
         e17fc:	eb6b7e3b 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
         e1800:	e1a0000d 	mov	r0, sp
         e1804:	eb6b8674 	bl	1bc31dc <TObjectIterator::$Done(void)>
         e1808:	e3300000 	teq	r0, #0	; 0x0
         e180c:	1a000026 	bne	e18ac <HitShape(RefVar const &, TPoint const &, TPoint const &)+0xf0>
         e1810:	e59fa074 	ldr	sl, [pc, #74]	; e188c <HitShape(RefVar const &, TPoint const &, TPoint const &)+0xd0>
         e1814:	e28d9008 	add	r9, sp, #8	; 0x8
         e1818:	e59d0008 	ldr	r0, [sp, #8]
         e181c:	e5900000 	ldr	r0, [r0]
         e1820:	e3300002 	teq	r0, #2	; 0x2
         e1824:	0a000019 	beq	e1890 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0xd4>
         e1828:	e59a0000 	ldr	r0, [sl]
         e182c:	e5906000 	ldr	r6, [r0]
         e1830:	e1a00009 	mov	r0, r9
         e1834:	eb6b824b 	bl	1bc2168 <$ClassOf(RefVar const &)>
         e1838:	e1a01006 	mov	r1, r6
         e183c:	eb6b8a7b 	bl	1bc4230 <$EQRef__FlT1>
         e1840:	e3300000 	teq	r0, #0	; 0x0
         e1844:	1a000011 	bne	e1890 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0xd4>
         e1848:	e1a00009 	mov	r0, r9
         e184c:	e1a02005 	mov	r2, r5
         e1850:	e1a01004 	mov	r1, r4
         e1854:	eb6771a2 	bl	1abdee4 <$HitShape(RefVar const &, TPoint const &, TPoint const &)>
         e1858:	e1b07000 	movs	r7, r0
         e185c:	0a00000b 	beq	e1890 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0xd4>
         e1860:	e24dd004 	sub	sp, sp, #4	; 0x4
         e1864:	e1a00108 	mov	r0, r8, lsl #2
         e1868:	eb6b8237 	bl	1bc214c <$AllocateRefHandle(long)>
         e186c:	e58d0000 	str	r0, [sp]
         e1870:	e1a0100d 	mov	r1, sp
         e1874:	e1a00005 	mov	r0, r5
         e1878:	eb6b822a 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         e187c:	e59d0000 	ldr	r0, [sp]
         e1880:	eb6b864d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         e1884:	e28dd004 	add	sp, sp, #4	; 0x4
         e1888:	ea000007 	b	e18ac <HitShape(RefVar const &, TPoint const &, TPoint const &)+0xf0>
         e188c:	00682ee8 	rsbeq	r2, r8, r8, ror #29
         e1890:	e2888001 	add	r8, r8, #1	; 0x1
         e1894:	e1a0000d 	mov	r0, sp
         e1898:	eb6b8e92 	bl	1bc52e8 <TObjectIterator::$Next(void)>
         e189c:	e1a0000d 	mov	r0, sp
         e18a0:	eb6b864d 	bl	1bc31dc <TObjectIterator::$Done(void)>
         e18a4:	e3300000 	teq	r0, #0	; 0x0
         e18a8:	0affffda 	beq	e1818 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x5c>
         e18ac:	e1a0000d 	mov	r0, sp
         e18b0:	e3a01000 	mov	r1, #0	; 0x0
         e18b4:	e1a0e00f 	mov	lr, pc
         e18b8:	e59df000 	ldr	pc, [sp]
         e18bc:	e28dd030 	add	sp, sp, #48	; 0x30
         e18c0:	ea0000a4 	b	e1b58 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x39c>
         e18c4:	e24dd008 	sub	sp, sp, #8	; 0x8
         e18c8:	e1a0100d 	mov	r1, sp
         e18cc:	e1a00006 	mov	r0, r6
         e18d0:	eb67c849 	bl	1ad39fc <$ShapeBounds(RefVar const &, TRect *)>
         e18d4:	e5940000 	ldr	r0, [r4]
         e18d8:	e52d0004 	str	r0, [sp, -#4]!
         e18dc:	e28d1004 	add	r1, sp, #4	; 0x4
         e18e0:	e28dd004 	add	sp, sp, #4	; 0x4
         e18e4:	eb69c414 	bl	1b5293c <$PtInRect(Point, Rect *)>
         e18e8:	e3300000 	teq	r0, #0	; 0x0
         e18ec:	0a000098 	beq	e1b54 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x398>
         e18f0:	e24dd004 	sub	sp, sp, #4	; 0x4
         e18f4:	e1a00006 	mov	r0, r6
         e18f8:	eb6b821a 	bl	1bc2168 <$ClassOf(RefVar const &)>
         e18fc:	eb6b8212 	bl	1bc214c <$AllocateRefHandle(long)>
         e1900:	e58d0000 	str	r0, [sp]
         e1904:	e5901000 	ldr	r1, [r0]
         e1908:	e59f0078 	ldr	r0, [pc, #78]	; e1988 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x1cc>
         e190c:	e5900000 	ldr	r0, [r0]
         e1910:	e5900000 	ldr	r0, [r0]
         e1914:	eb6b8a45 	bl	1bc4230 <$EQRef__FlT1>
         e1918:	e3300000 	teq	r0, #0	; 0x0
         e191c:	1a000017 	bne	e1980 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x1c4>
         e1920:	e59d0000 	ldr	r0, [sp]
         e1924:	e5901000 	ldr	r1, [r0]
         e1928:	e59f005c 	ldr	r0, [pc, #5c]	; e198c <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x1d0>
         e192c:	e5900000 	ldr	r0, [r0]
         e1930:	e5900000 	ldr	r0, [r0]
         e1934:	eb6b8a3d 	bl	1bc4230 <$EQRef__FlT1>
         e1938:	e3300000 	teq	r0, #0	; 0x0
         e193c:	1a00000f 	bne	e1980 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x1c4>
         e1940:	e59d0000 	ldr	r0, [sp]
         e1944:	e5901000 	ldr	r1, [r0]
         e1948:	e59f0040 	ldr	r0, [pc, #40]	; e1990 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x1d4>
         e194c:	e5900000 	ldr	r0, [r0]
         e1950:	e5900000 	ldr	r0, [r0]
         e1954:	eb6b8a35 	bl	1bc4230 <$EQRef__FlT1>
         e1958:	e3300000 	teq	r0, #0	; 0x0
         e195c:	1a000007 	bne	e1980 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x1c4>
         e1960:	e59d0000 	ldr	r0, [sp]
         e1964:	e5901000 	ldr	r1, [r0]
         e1968:	e59f0024 	ldr	r0, [pc, #24]	; e1994 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x1d8>
         e196c:	e5900000 	ldr	r0, [r0]
         e1970:	e5900000 	ldr	r0, [r0]
         e1974:	eb6b8a2d 	bl	1bc4230 <$EQRef__FlT1>
         e1978:	e3300000 	teq	r0, #0	; 0x0
         e197c:	0a000005 	beq	e1998 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x1dc>
         e1980:	e3a07001 	mov	r7, #1	; 0x1
         e1984:	ea00006f 	b	e1b48 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x38c>
         e1988:	006841e0 	rsbeq	r4, r8, r0, ror #3
         e198c:	006820c8 	rsbeq	r2, r8, r8, asr #1
         e1990:	00684ac0 	rsbeq	r4, r8, r0, asr #21
         e1994:	00683ec0 	rsbeq	r3, r8, r0, asr #29
         e1998:	e59d0000 	ldr	r0, [sp]
         e199c:	e5901000 	ldr	r1, [r0]
         e19a0:	e59f0034 	ldr	r0, [pc, #34]	; e19dc <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x220>
         e19a4:	e5900000 	ldr	r0, [r0]
         e19a8:	e5900000 	ldr	r0, [r0]
         e19ac:	eb6b8a1f 	bl	1bc4230 <$EQRef__FlT1>
         e19b0:	e3300000 	teq	r0, #0	; 0x0
         e19b4:	0a000009 	beq	e19e0 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x224>
         e19b8:	e28d2008 	add	r2, sp, #8	; 0x8
         e19bc:	e28d1004 	add	r1, sp, #4	; 0x4
         e19c0:	e1a00004 	mov	r0, r4
         e19c4:	eb6b9eb6 	bl	1bc94a4 <$Aligned__6TPointCFRC6TPointT1>
         e19c8:	e3300003 	teq	r0, #3	; 0x3
         e19cc:	13a00000 	movne	r0, #0	; 0x0
         e19d0:	03a00001 	moveq	r0, #1	; 0x1
         e19d4:	e20070ff 	and	r7, r0, #255	; 0xff
         e19d8:	ea00005a 	b	e1b48 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x38c>
         e19dc:	00683578 	rsbeq	r3, r8, r8, ror r5
         e19e0:	e59d0000 	ldr	r0, [sp]
         e19e4:	e5901000 	ldr	r1, [r0]
         e19e8:	e59f008c 	ldr	r0, [pc, #8c]	; e1a7c <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x2c0>
         e19ec:	e5900000 	ldr	r0, [r0]
         e19f0:	e5900000 	ldr	r0, [r0]
         e19f4:	eb6b8a0d 	bl	1bc4230 <$EQRef__FlT1>
         e19f8:	e3300000 	teq	r0, #0	; 0x0
         e19fc:	0a000020 	beq	e1a84 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x2c8>
         e1a00:	e59f1078 	ldr	r1, [pc, #78]	; e1a80 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x2c4>
         e1a04:	e1a00006 	mov	r0, r6
         e1a08:	e3a02000 	mov	r2, #0	; 0x0
         e1a0c:	eb6b8a15 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         e1a10:	e41d1004 	ldr	r1, [sp], -#4
         e1a14:	e5810000 	str	r0, [r1]
         e1a18:	e28d1004 	add	r1, sp, #4	; 0x4
         e1a1c:	e1a0000d 	mov	r0, sp
         e1a20:	eb6b7dac 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         e1a24:	e59d0004 	ldr	r0, [sp, #4]
         e1a28:	e5900000 	ldr	r0, [r0]
         e1a2c:	eb6b8e1e 	bl	1bc52ac <$Length(long)>
         e1a30:	e1a05000 	mov	r5, r0
         e1a34:	e1a0000d 	mov	r0, sp
         e1a38:	eb6b81b5 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         e1a3c:	e1a01005 	mov	r1, r5
         e1a40:	eb6c01b8 	bl	1be2128 <$NewFakeHandle>
         e1a44:	e1a05000 	mov	r5, r0
         e1a48:	e24dd004 	sub	sp, sp, #4	; 0x4
         e1a4c:	e5940000 	ldr	r0, [r4]
         e1a50:	e1a01005 	mov	r1, r5
         e1a54:	e48d0004 	str	r0, [sp], #4
         e1a58:	eb69c3b8 	bl	1b52940 <$PtInRgn(Point, Region **)>
         e1a5c:	e1a07000 	mov	r7, r0
         e1a60:	e1a00005 	mov	r0, r5
         e1a64:	eb6bfd91 	bl	1be10b0 <$DisposHandle>
         e1a68:	e1a0000d 	mov	r0, sp
         e1a6c:	e3a01000 	mov	r1, #0	; 0x0
         e1a70:	eb6b81a2 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         e1a74:	e28dd004 	add	sp, sp, #4	; 0x4
         e1a78:	ea000032 	b	e1b48 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x38c>
         e1a7c:	00684228 	rsbeq	r4, r8, r8, lsr #4
         e1a80:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         e1a84:	e24dd014 	sub	sp, sp, #20	; 0x14
         e1a88:	e1a0000d 	mov	r0, sp
         e1a8c:	eb669653 	bl	1a873e0 <TRegionVar::$__ct(void)>
         e1a90:	eb69bf97 	bl	1b518f4 <$OpenRgn(void)>
         e1a94:	e3a00001 	mov	r0, #1	; 0x1
         e1a98:	e52d8004 	str	r8, [sp, -#4]!
         e1a9c:	eb67ecf5 	bl	1adce78 <$ForceScaling__9TQDScalerSFl>
         e1aa0:	e1a07000 	mov	r7, r0
         e1aa4:	e3a05000 	mov	r5, #0	; 0x0
         e1aa8:	e52d806c 	str	r8, [sp, -#108]!
         e1aac:	e28d0008 	add	r0, sp, #8	; 0x8
         e1ab0:	eb6b43af 	bl	1bb2974 <$setjmp>
         e1ab4:	e3300000 	teq	r0, #0	; 0x0
         e1ab8:	1a00000f 	bne	e1afc <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x340>
         e1abc:	e1a0000d 	mov	r0, sp
         e1ac0:	eb6bf96d 	bl	1be007c <$AddExceptionHandler>
         e1ac4:	e24dd004 	sub	sp, sp, #4	; 0x4
         e1ac8:	e3a00002 	mov	r0, #2	; 0x2
         e1acc:	eb6b819e 	bl	1bc214c <$AllocateRefHandle(long)>
         e1ad0:	e58d0000 	str	r0, [sp]
         e1ad4:	e1a0100d 	mov	r1, sp
         e1ad8:	e28d2070 	add	r2, sp, #112	; 0x70
         e1adc:	e1a00006 	mov	r0, r6
         e1ae0:	ebfff738 	bl	df7c8 <DrawShape__FRC6RefVarT1RC6TPoint>
         e1ae4:	e59d0000 	ldr	r0, [sp]
         e1ae8:	eb6b85b3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         e1aec:	e28dd004 	add	sp, sp, #4	; 0x4
         e1af0:	e1a0000d 	mov	r0, sp
         e1af4:	eb6bfd6f 	bl	1be10b8 <$ExitHandler>
         e1af8:	ea000000 	b	e1b00 <HitShape(RefVar const &, TPoint const &, TPoint const &)+0x344>
         e1afc:	e3a05001 	mov	r5, #1	; 0x1
         e1b00:	e1a00007 	mov	r0, r7
         e1b04:	eb67ecdb 	bl	1adce78 <$ForceScaling__9TQDScalerSFl>
         e1b08:	e59d0070 	ldr	r0, [sp, #112]
         e1b0c:	eb69aee5 	bl	1b4d6a8 <$CloseRgn(Region **)>
         e1b10:	e3350000 	teq	r5, #0	; 0x0
         e1b14:	11a0000d 	movne	r0, sp
         e1b18:	1b6c018d 	blne	1be2154 <$NextHandler>
         e1b1c:	e5940000 	ldr	r0, [r4]
         e1b20:	e5ad0068 	str	r0, [sp, #104]!
         e1b24:	e59d1008 	ldr	r1, [sp, #8]
         e1b28:	e28dd004 	add	sp, sp, #4	; 0x4
         e1b2c:	eb69c383 	bl	1b52940 <$PtInRgn(Point, Region **)>
         e1b30:	e1a07000 	mov	r7, r0
         e1b34:	e28dd004 	add	sp, sp, #4	; 0x4
         e1b38:	e1a0000d 	mov	r0, sp
         e1b3c:	e3a01000 	mov	r1, #0	; 0x0
         e1b40:	eb669a3f 	bl	1a88444 <TRegionVar::$__dt(void)>
         e1b44:	e28dd014 	add	sp, sp, #20	; 0x14
         e1b48:	e59d0000 	ldr	r0, [sp]
         e1b4c:	eb6b859a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         e1b50:	e28dd004 	add	sp, sp, #4	; 0x4
         e1b54:	e28dd008 	add	sp, sp, #8	; 0x8
         e1b58:	e1a00007 	mov	r0, r7
         e1b5c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: HorizGrayShrink__FPcN41l
 * Address: 000e4548
 */
void globals::HorizGrayShrink() {
    /*
         e4548:	e1a0c00d 	mov	ip, sp
         e454c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         e4550:	e24cb004 	sub	fp, ip, #4	; 0x4
         e4554:	e1a06000 	mov	r6, r0
         e4558:	e1a05001 	mov	r5, r1
         e455c:	e1a04003 	mov	r4, r3
         e4560:	e59b9008 	ldr	r9, [fp, #8]
         e4564:	e1a080c9 	mov	r8, r9, asr #1
         e4568:	e1a07001 	mov	r7, r1
         e456c:	e0431001 	sub	r1, r3, r1
         e4570:	e1a00005 	mov	r0, r5
         e4574:	e59ba004 	ldr	sl, [fp, #4]
         e4578:	eb6beea7 	bl	1be001c <$ZeroBytes>
         e457c:	e1570004 	cmp	r7, r4
         e4580:	2a00000a 	bcs	e45b0 <HorizGrayShrink__FPcN41l+0x68>
         e4584:	e4d61001 	ldrb	r1, [r6], #1
         e4588:	e5d70000 	ldrb	r0, [r7]
         e458c:	e0810000 	add	r0, r1, r0
         e4590:	e5c70000 	strb	r0, [r7]
         e4594:	e0888009 	add	r8, r8, r9
         e4598:	e1b00848 	movs	r0, r8, asr #16
         e459c:	11a08808 	movne	r8, r8, lsl #16
         e45a0:	11a08828 	movne	r8, r8, lsr #16
         e45a4:	12877001 	addne	r7, r7, #1	; 0x1
         e45a8:	e1570004 	cmp	r7, r4
         e45ac:	3afffff4 	bcc	e4584 <HorizGrayShrink__FPcN41l+0x3c>
         e45b0:	e1a03009 	mov	r3, r9
         e45b4:	e1a0200a 	mov	r2, sl
         e45b8:	e92d000c 	stmdb	sp!, {r2, r3}
         e45bc:	e1a03004 	mov	r3, r4
         e45c0:	e1a02004 	mov	r2, r4
         e45c4:	e1a01005 	mov	r1, r5
         e45c8:	e1a00005 	mov	r0, r5
         e45cc:	eb69d19e 	bl	1b58c4c <$ConvertToGray__FPcN41l>
         e45d0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: HorizGrayStretch__FPcN41l
 * Address: 000e45d4
 */
void globals::HorizGrayStretch() {
    /*
         e45d4:	e1a0c00d 	mov	ip, sp
         e45d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         e45dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         e45e0:	e1a04000 	mov	r4, r0
         e45e4:	e1a06001 	mov	r6, r1
         e45e8:	e1a00002 	mov	r0, r2
         e45ec:	e1a05003 	mov	r5, r3
         e45f0:	e99b0084 	ldmib	fp, {r2, r7}
         e45f4:	e1a03007 	mov	r3, r7
         e45f8:	e92d000c 	stmdb	sp!, {r2, r3}
         e45fc:	e1a03000 	mov	r3, r0
         e4600:	e1a02000 	mov	r2, r0
         e4604:	e1a01004 	mov	r1, r4
         e4608:	e1a00004 	mov	r0, r4
         e460c:	eb69d18e 	bl	1b58c4c <$ConvertToGray__FPcN41l>
         e4610:	e28dd008 	add	sp, sp, #8	; 0x8
         e4614:	e3a02000 	mov	r2, #0	; 0x0
         e4618:	e3a0c20f 	mov	ip, #-268435456	; 0xf0000000
         e461c:	e3a0101c 	mov	r1, #28	; 0x1c
         e4620:	e1a030a7 	mov	r3, r7, lsr #1
         e4624:	e1b00e2c 	movs	r0, ip, lsr #28
         e4628:	e1a0c20c 	mov	ip, ip, lsl #4
         e462c:	0a000007 	beq	e4650 <HorizGrayStretch__FPcN41l+0x7c>
         e4630:	e33c0000 	teq	ip, #0	; 0x0
         e4634:	1a000003 	bne	e4648 <HorizGrayStretch__FPcN41l+0x74>
         e4638:	e1a0e000 	mov	lr, r0
         e463c:	e494c004 	ldr	ip, [r4], #4
         e4640:	e1a00e2c 	mov	r0, ip, lsr #28
         e4644:	e18ec20c 	orr	ip, lr, ip, lsl #4
         e4648:	e3300000 	teq	r0, #0	; 0x0
         e464c:	11822110 	orrne	r2, r2, r0, lsl r1
         e4650:	e3310000 	teq	r1, #0	; 0x0
         e4654:	1a000005 	bne	e4670 <HorizGrayStretch__FPcN41l+0x9c>
         e4658:	e3a0101c 	mov	r1, #28	; 0x1c
         e465c:	e4862004 	str	r2, [r6], #4
         e4660:	e3a02000 	mov	r2, #0	; 0x0
         e4664:	e1560005 	cmp	r6, r5
         e4668:	291ba8f0 	ldmcsdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         e466c:	ea000000 	b	e4674 <HorizGrayStretch__FPcN41l+0xa0>
         e4670:	e2411004 	sub	r1, r1, #4	; 0x4
         e4674:	e0833007 	add	r3, r3, r7
         e4678:	e1b0e843 	movs	lr, r3, asr #16
         e467c:	0afffff1 	beq	e4648 <HorizGrayStretch__FPcN41l+0x74>
         e4680:	e1a03803 	mov	r3, r3, lsl #16
         e4684:	e1a03823 	mov	r3, r3, lsr #16
         e4688:	eaffffe5 	b	e4624 <HorizGrayStretch__FPcN41l+0x50>
    */
}

/**
 * Symbol: HDefaultIRQHandler(void *)
 * Address: 000e4f40
 */
HDefaultIRQHandler(void *) {
    /*
         e4f40:	e3a00000 	mov	r0, #0	; 0x0
         e4f44:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HDefaultFIQHandler(void *)
 * Address: 000e4f48
 */
HDefaultFIQHandler(void *) {
    /*
         e4f48:	e3a00000 	mov	r0, #0	; 0x0
         e4f4c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HLevel2Handler(void *)
 * Address: 000e5720
 */
HLevel2Handler(void *) {
    /*
         e5720:	e1a0c00d 	mov	ip, sp
         e5724:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         e5728:	e24cb004 	sub	fp, ip, #4	; 0x4
         e572c:	e3a05000 	mov	r5, #0	; 0x0
         e5730:	e1b04000 	movs	r4, r0
         e5734:	0a000009 	beq	e5760 <HLevel2Handler(void *)+0x40>
         e5738:	e5940008 	ldr	r0, [r4, #8]
         e573c:	e3100080 	tst	r0, #128	; 0x80
         e5740:	0a000003 	beq	e5754 <HLevel2Handler(void *)+0x34>
         e5744:	e5940014 	ldr	r0, [r4, #20]
         e5748:	e1a0e00f 	mov	lr, pc
         e574c:	e594f010 	ldr	pc, [r4, #16]
         e5750:	e1855000 	orr	r5, r5, r0
         e5754:	e594400c 	ldr	r4, [r4, #12]
         e5758:	e3340000 	teq	r4, #0	; 0x0
         e575c:	1afffff5 	bne	e5738 <HLevel2Handler(void *)+0x18>
         e5760:	e1a00005 	mov	r0, r5
         e5764:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: HInitInterrupts(void)
 * Address: 000e5b54
 */
HInitInterrupts(void) {
    /*
         e5b54:	e1a0c00d 	mov	ip, sp
         e5b58:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         e5b5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         e5b60:	eb6bed61 	bl	1be10ec <$GetHeap>
         e5b64:	e1a04000 	mov	r4, r0
         e5b68:	e3a00000 	mov	r0, #0	; 0x0
         e5b6c:	eb6bf583 	bl	1be3180 <$SetHeap>
         e5b70:	e3a01000 	mov	r1, #0	; 0x0
         e5b74:	e59f001c 	ldr	r0, [pc, #1c]	; e5b98 <HInitInterrupts(void)+0x44>
         e5b78:	e5801004 	str	r1, [r0, #4]
         e5b7c:	e5801000 	str	r1, [r0]
         e5b80:	e59f1014 	ldr	r1, [pc, #14]	; e5b9c <HInitInterrupts(void)+0x48>
         e5b84:	e5911000 	ldr	r1, [r1]
         e5b88:	e5a01018 	str	r1, [r0, #24]!
         e5b8c:	e1a00004 	mov	r0, r4
         e5b90:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         e5b94:	ea6bf579 	b	1be3180 <$SetHeap>
         e5b98:	0c100e3c 	ldceq	14, cr0, [r0], -#240
         e5b9c:	0f183400 	swieq	0x00183400
    */
}

/**
 * Symbol: HWRMemoryAllocHandle(unsigned long)
 * Address: 000e63a8
 */
HWRMemoryAllocHandle(unsigned long) {
    /*
         e63a8:	e1a0c00d 	mov	ip, sp
         e63ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         e63b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         e63b4:	e3a05000 	mov	r5, #0	; 0x0
         e63b8:	e250ca49 	subs	ip, r0, #299008	; 0x49000
         e63bc:	235c0e3e 	cmpcs	ip, #992	; 0x3e0
         e63c0:	9a000001 	bls	e63cc <HWRMemoryAllocHandle(unsigned long)+0x24>
         e63c4:	e1a00005 	mov	r0, r5
         e63c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         e63cc:	e2800004 	add	r0, r0, #4	; 0x4
         e63d0:	eb6bef55 	bl	1be212c <$NewHandle>
         e63d4:	e1b04000 	movs	r4, r0
         e63d8:	1a000005 	bne	e63f4 <HWRMemoryAllocHandle(unsigned long)+0x4c>
         e63dc:	e59f000c 	ldr	r0, [pc, #c]	; e63f0 <HWRMemoryAllocHandle(unsigned long)+0x48>
         e63e0:	e5901000 	ldr	r1, [r0]
         e63e4:	e2811001 	add	r1, r1, #1	; 0x1
         e63e8:	e5801000 	str	r1, [r0]
         e63ec:	eafffff4 	b	e63c4 <HWRMemoryAllocHandle(unsigned long)+0x1c>
         e63f0:	0c104f78 	ldceq	15, cr4, [r0], -#480
         e63f4:	e1a00004 	mov	r0, r4
         e63f8:	e59f1008 	ldr	r1, [pc, #8]	; e6408 <HWRMemoryAllocHandle(unsigned long)+0x60>
         e63fc:	eb6a1ca2 	bl	1b6d68c <$NameHandle(char **, unsigned long)>
         e6400:	e1a00004 	mov	r0, r4
         e6404:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         e6408:	70617261 	rsbvc	r7, r1, r1, ror #4
    */
}

/**
 * Symbol: HWRMemoryLockHandle(unsigned long)
 * Address: 000e640c
 */
HWRMemoryLockHandle(unsigned long) {
    /*
         e640c:	e1a0c00d 	mov	ip, sp
         e6410:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         e6414:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6418:	e1a04000 	mov	r4, r0
         e641c:	eb6bef3a 	bl	1be210c <$HLock>
         e6420:	e5940000 	ldr	r0, [r4]
         e6424:	e3300000 	teq	r0, #0	; 0x0
         e6428:	14804004 	strne	r4, [r0], #4
         e642c:	03a00000 	moveq	r0, #0	; 0x0
         e6430:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: HWRMemoryUnlockHandle(unsigned long)
 * Address: 000e6434
 */
HWRMemoryUnlockHandle(unsigned long) {
    /*
         e6434:	e1a0c00d 	mov	ip, sp
         e6438:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         e643c:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6440:	eb6bef33 	bl	1be2114 <$HUnlock>
         e6444:	e3a00001 	mov	r0, #1	; 0x1
         e6448:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: HWRMemoryFreeHandle(unsigned long)
 * Address: 000e644c
 */
HWRMemoryFreeHandle(unsigned long) {
    /*
         e644c:	e1a0c00d 	mov	ip, sp
         e6450:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         e6454:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6458:	eb6beb14 	bl	1be10b0 <$DisposHandle>
         e645c:	e3a00001 	mov	r0, #1	; 0x1
         e6460:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: HWRMemoryAlloc(unsigned long)
 * Address: 000e6464
 */
HWRMemoryAlloc(unsigned long) {
    /*
         e6464:	e1a0c00d 	mov	ip, sp
         e6468:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         e646c:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6470:	e3a05000 	mov	r5, #0	; 0x0
         e6474:	e250ca49 	subs	ip, r0, #299008	; 0x49000
         e6478:	235c0e3e 	cmpcs	ip, #992	; 0x3e0
         e647c:	8a000014 	bhi	e64d4 <HWRMemoryAlloc(unsigned long)+0x70>
         e6480:	e2800004 	add	r0, r0, #4	; 0x4
         e6484:	eb6bef28 	bl	1be212c <$NewHandle>
         e6488:	e1b04000 	movs	r4, r0
         e648c:	1a000005 	bne	e64a8 <HWRMemoryAlloc(unsigned long)+0x44>
         e6490:	e59f000c 	ldr	r0, [pc, #c]	; e64a4 <HWRMemoryAlloc(unsigned long)+0x40>
         e6494:	e5901000 	ldr	r1, [r0]
         e6498:	e2811001 	add	r1, r1, #1	; 0x1
         e649c:	e5801000 	str	r1, [r0]
         e64a0:	ea00000b 	b	e64d4 <HWRMemoryAlloc(unsigned long)+0x70>
         e64a4:	0c104f78 	ldceq	15, cr4, [r0], -#480
         e64a8:	e1a00004 	mov	r0, r4
         e64ac:	e59f1028 	ldr	r1, [pc, #28]	; e64dc <HWRMemoryAlloc(unsigned long)+0x78>
         e64b0:	eb6a1c75 	bl	1b6d68c <$NameHandle(char **, unsigned long)>
         e64b4:	e1a00004 	mov	r0, r4
         e64b8:	eb6bef13 	bl	1be210c <$HLock>
         e64bc:	e5940000 	ldr	r0, [r4]
         e64c0:	e3300000 	teq	r0, #0	; 0x0
         e64c4:	14804004 	strne	r4, [r0], #4
         e64c8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         e64cc:	e1a00004 	mov	r0, r4
         e64d0:	eb6beaf6 	bl	1be10b0 <$DisposHandle>
         e64d4:	e1a00005 	mov	r0, r5
         e64d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         e64dc:	70617261 	rsbvc	r7, r1, r1, ror #4
    */
}

/**
 * Symbol: HWRMemoryFree(void *)
 * Address: 000e64e0
 */
HWRMemoryFree(void *) {
    /*
         e64e0:	e1a0c00d 	mov	ip, sp
         e64e4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         e64e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         e64ec:	e5100004 	ldr	r0, [r0, -#4]
         e64f0:	eb6beaee 	bl	1be10b0 <$DisposHandle>
         e64f4:	e3a00001 	mov	r0, #1	; 0x1
         e64f8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: HWRAbs(int)
 * Address: 000e64fc
 */
HWRAbs(int) {
    /*
         e64fc:	e3500000 	cmp	r0, #0	; 0x0
         e6500:	d2600000 	rsble	r0, r0, #0	; 0x0
         e6504:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HWRLAbs(long)
 * Address: 000e6508
 */
HWRLAbs(long) {
    /*
         e6508:	e3500000 	cmp	r0, #0	; 0x0
         e650c:	d2600000 	rsble	r0, r0, #0	; 0x0
         e6510:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HWRStrLen(char *)
 * Address: 000e6514
 */
HWRStrLen(char *) {
    /*
         e6514:	e2801001 	add	r1, r0, #1	; 0x1
         e6518:	e4d02001 	ldrb	r2, [r0], #1
         e651c:	e3320000 	teq	r2, #0	; 0x0
         e6520:	1afffffc 	bne	e6518 <HWRStrLen(char *)+0x4>
         e6524:	e0400001 	sub	r0, r0, r1
         e6528:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HWRStrChr(char *, int)
 * Address: 000e652c
 */
HWRStrChr(char *, int) {
    /*
         e652c:	e2400001 	sub	r0, r0, #1	; 0x1
         e6530:	e20110ff 	and	r1, r1, #255	; 0xff
         e6534:	e5f02001 	ldrb	r2, [r0, #1]!
         e6538:	e1320001 	teq	r2, r1
         e653c:	0a000002 	beq	e654c <HWRStrChr(char *, int)+0x20>
         e6540:	e3320000 	teq	r2, #0	; 0x0
         e6544:	1afffffa 	bne	e6534 <HWRStrChr(char *, int)+0x8>
         e6548:	ea000002 	b	e6558 <HWRStrChr(char *, int)+0x2c>
         e654c:	e5d01000 	ldrb	r1, [r0]
         e6550:	e3310000 	teq	r1, #0	; 0x0
         e6554:	11a0f00e 	movne	pc, lr
         e6558:	e3a00000 	mov	r0, #0	; 0x0
         e655c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HWRStrCpy__FPcT1
 * Address: 000e6560
 */
void globals::HWRStrCpy() {
    /*
         e6560:	e1a02000 	mov	r2, r0
         e6564:	e4d13001 	ldrb	r3, [r1], #1
         e6568:	e4c03001 	strb	r3, [r0], #1
         e656c:	e3330000 	teq	r3, #0	; 0x0
         e6570:	1afffffb 	bne	e6564 <HWRStrCpy__FPcT1+0x4>
         e6574:	e1a00002 	mov	r0, r2
         e6578:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HWRStrCat__FPcT1
 * Address: 000e657c
 */
void globals::HWRStrCat() {
    /*
         e657c:	e2402001 	sub	r2, r0, #1	; 0x1
         e6580:	e5f23001 	ldrb	r3, [r2, #1]!
         e6584:	e3330000 	teq	r3, #0	; 0x0
         e6588:	1afffffc 	bne	e6580 <HWRStrCat__FPcT1+0x4>
         e658c:	e4d13001 	ldrb	r3, [r1], #1
         e6590:	e4c23001 	strb	r3, [r2], #1
         e6594:	e3330000 	teq	r3, #0	; 0x0
         e6598:	1afffffb 	bne	e658c <HWRStrCat__FPcT1+0x10>
         e659c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HWRStrRev(char *)
 * Address: 000e65a0
 */
HWRStrRev(char *) {
    /*
         e65a0:	e92d4000 	stmdb	sp!, {lr}
         e65a4:	e2401001 	sub	r1, r0, #1	; 0x1
         e65a8:	e1a02000 	mov	r2, r0
         e65ac:	e5f13001 	ldrb	r3, [r1, #1]!
         e65b0:	e3330000 	teq	r3, #0	; 0x0
         e65b4:	1afffffc 	bne	e65ac <HWRStrRev(char *)+0xc>
         e65b8:	e0413002 	sub	r3, r1, r2
         e65bc:	e1b0c0c3 	movs	ip, r3, asr #1
         e65c0:	e24c3001 	sub	r3, ip, #1	; 0x1
         e65c4:	08bd8000 	ldmeqia	sp!, {pc}
         e65c8:	e5d2c000 	ldrb	ip, [r2]
         e65cc:	e571e001 	ldrb	lr, [r1, -#1]!
         e65d0:	e4c2e001 	strb	lr, [r2], #1
         e65d4:	e5c1c000 	strb	ip, [r1]
         e65d8:	e1b0c003 	movs	ip, r3
         e65dc:	e2433001 	sub	r3, r3, #1	; 0x1
         e65e0:	1afffff8 	bne	e65c8 <HWRStrRev(char *)+0x28>
         e65e4:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: HWRStrrChr(char *, int)
 * Address: 000e65e8
 */
HWRStrrChr(char *, int) {
    /*
         e65e8:	e3a02000 	mov	r2, #0	; 0x0
         e65ec:	e5d03000 	ldrb	r3, [r0]
         e65f0:	e3330000 	teq	r3, #0	; 0x0
         e65f4:	0a000006 	beq	e6614 <HWRStrrChr(char *, int)+0x2c>
         e65f8:	e20110ff 	and	r1, r1, #255	; 0xff
         e65fc:	e5d03000 	ldrb	r3, [r0]
         e6600:	e1330001 	teq	r3, r1
         e6604:	01a02000 	moveq	r2, r0
         e6608:	e5f03001 	ldrb	r3, [r0, #1]!
         e660c:	e3330000 	teq	r3, #0	; 0x0
         e6610:	1afffff9 	bne	e65fc <HWRStrrChr(char *, int)+0x14>
         e6614:	e1a00002 	mov	r0, r2
         e6618:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HWRStrCmp__FPcT1
 * Address: 000e661c
 */
void globals::HWRStrCmp() {
    /*
         e661c:	e2400001 	sub	r0, r0, #1	; 0x1
         e6620:	e2411001 	sub	r1, r1, #1	; 0x1
         e6624:	e5f02001 	ldrb	r2, [r0, #1]!
         e6628:	e5f13001 	ldrb	r3, [r1, #1]!
         e662c:	e1320003 	teq	r2, r3
         e6630:	1a000002 	bne	e6640 <HWRStrCmp__FPcT1+0x24>
         e6634:	e3320000 	teq	r2, #0	; 0x0
         e6638:	13330000 	teqne	r3, #0	; 0x0
         e663c:	1afffff8 	bne	e6624 <HWRStrCmp__FPcT1+0x8>
         e6640:	e5d00000 	ldrb	r0, [r0]
         e6644:	e5d11000 	ldrb	r1, [r1]
         e6648:	e0400001 	sub	r0, r0, r1
         e664c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HiliteLetter(TView *, unsigned long, long, unsigned char)
 * Address: 0010793c
 */
HiliteLetter(TView *, unsigned long, long, unsigned char) {
    /*
        10793c:	e1a0c00d 	mov	ip, sp
        107940:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        107944:	e24cb004 	sub	fp, ip, #4	; 0x4
        107948:	e1a05000 	mov	r5, r0
        10794c:	e1a06001 	mov	r6, r1
        107950:	e1a04002 	mov	r4, r2
        107954:	e20370ff 	and	r7, r3, #255	; 0xff
        107958:	e24dd038 	sub	sp, sp, #56	; 0x38
        10795c:	e1a0000d 	mov	r0, sp
        107960:	eb67618a 	bl	1adff90 <$InitLetterCursor(LetterCursor *)>
        107964:	e3300000 	teq	r0, #0	; 0x0
        107968:	1a000000 	bne	107970 <HiliteLetter(TView *, unsigned long, long, unsigned char)+0x34>
        10796c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        107970:	e1a0100d 	mov	r1, sp
        107974:	e1a00005 	mov	r0, r5
        107978:	eb676183 	bl	1adff8c <$InitLetterBounds(TView *, LetterCursor *)>
        10797c:	e1a00005 	mov	r0, r5
        107980:	eb67617e 	bl	1adff80 <$GetTitleLetter(TView *)>
        107984:	e1a01000 	mov	r1, r0
        107988:	e1a0000d 	mov	r0, sp
        10798c:	eb676186 	bl	1adffac <$SetLetter(LetterCursor *, unsigned short)>
        107990:	e1a0000d 	mov	r0, sp
        107994:	eb67617f 	bl	1adff98 <$InitLetter(LetterCursor *)>
        107998:	e1a0000d 	mov	r0, sp
        10799c:	eb67617e 	bl	1adff9c <$MoreGroups(LetterCursor *)>
        1079a0:	e3300000 	teq	r0, #0	; 0x0
        1079a4:	0a000028 	beq	107a4c <HiliteLetter(TView *, unsigned long, long, unsigned char)+0x110>
        1079a8:	e1a0000d 	mov	r0, sp
        1079ac:	eb676178 	bl	1adff94 <$InitLetterGroup(LetterCursor *)>
        1079b0:	e3300000 	teq	r0, #0	; 0x0
        1079b4:	0a00001e 	beq	107a34 <HiliteLetter(TView *, unsigned long, long, unsigned char)+0xf8>
        1079b8:	e1a0000d 	mov	r0, sp
        1079bc:	eb676170 	bl	1adff84 <$GroupFitsOnLine(LetterCursor *)>
        1079c0:	e3300000 	teq	r0, #0	; 0x0
        1079c4:	01a0000d 	moveq	r0, sp
        1079c8:	0b675d5b 	bleq	1adef3c <$DisplayNextLine(LetterCursor *)>
        1079cc:	e1a0000d 	mov	r0, sp
        1079d0:	eb675d5d 	bl	1adef4c <$EndOfPage(LetterCursor *)>
        1079d4:	e3300000 	teq	r0, #0	; 0x0
        1079d8:	1a00001b 	bne	107a4c <HiliteLetter(TView *, unsigned long, long, unsigned char)+0x110>
        1079dc:	e1a01006 	mov	r1, r6
        1079e0:	e1a0000d 	mov	r0, sp
        1079e4:	eb676167 	bl	1adff88 <$GroupHilited(LetterCursor *, long)>
        1079e8:	e3300000 	teq	r0, #0	; 0x0
        1079ec:	0a00000e 	beq	107a2c <HiliteLetter(TView *, unsigned long, long, unsigned char)+0xf0>
        1079f0:	e3a02000 	mov	r2, #0	; 0x0
        1079f4:	e3a00000 	mov	r0, #0	; 0x0
        1079f8:	e3540000 	cmp	r4, #0	; 0x0
        1079fc:	ba000003 	blt	107a10 <HiliteLetter(TView *, unsigned long, long, unsigned char)+0xd4>
        107a00:	e59d1034 	ldr	r1, [sp, #52]
        107a04:	e1540841 	cmp	r4, r1, asr #16
        107a08:	b3a02010 	movlt	r2, #16	; 0x10
        107a0c:	b3a00003 	movlt	r0, #3	; 0x3
        107a10:	e1a03007 	mov	r3, r7
        107a14:	e92d0008 	stmdb	sp!, {r3}
        107a18:	e1a03000 	mov	r3, r0
        107a1c:	e1a01004 	mov	r1, r4
        107a20:	e28d0004 	add	r0, sp, #4	; 0x4
        107a24:	eb675d47 	bl	1adef48 <$DrawGroup__FP12LetterCursorlN22Uc>
        107a28:	e28dd004 	add	sp, sp, #4	; 0x4
        107a2c:	e1a0000d 	mov	r0, sp
        107a30:	eb675d40 	bl	1adef38 <$DisplayNextGroup(LetterCursor *)>
        107a34:	e1a0000d 	mov	r0, sp
        107a38:	eb675d4f 	bl	1adef7c <$GetNextGroup(LetterCursor *)>
        107a3c:	e1a0000d 	mov	r0, sp
        107a40:	eb676155 	bl	1adff9c <$MoreGroups(LetterCursor *)>
        107a44:	e3300000 	teq	r0, #0	; 0x0
        107a48:	1affffd6 	bne	1079a8 <HiliteLetter(TView *, unsigned long, long, unsigned char)+0x6c>
        107a4c:	e1a0000d 	mov	r0, sp
        107a50:	eb676153 	bl	1adffa4 <$NextLetter(LetterCursor *)>
        107a54:	e3300000 	teq	r0, #0	; 0x0
        107a58:	11a0000d 	movne	r0, sp
        107a5c:	1b675d36 	blne	1adef3c <$DisplayNextLine(LetterCursor *)>
        107a60:	e1a0000d 	mov	r0, sp
        107a64:	eb67614d 	bl	1adffa0 <$MoreLetters(LetterCursor *)>
        107a68:	e3300000 	teq	r0, #0	; 0x0
        107a6c:	1affffc7 	bne	107990 <HiliteLetter(TView *, unsigned long, long, unsigned char)+0x54>
        107a70:	e1a0000d 	mov	r0, sp
        107a74:	eb675d31 	bl	1adef40 <$DoneLetterCursor(LetterCursor *)>
        107a78:	eaffffbb 	b	10796c <HiliteLetter(TView *, unsigned long, long, unsigned char)+0x30>
    */
}

/**
 * Symbol: HalveLetterPairs(void)
 * Address: 0013ea40
 */
HalveLetterPairs(void) {
    /*
        13ea40:	e3a01000 	mov	r1, #0	; 0x0
        13ea44:	e3a00000 	mov	r0, #0	; 0x0
        13ea48:	e0812101 	add	r2, r1, r1, lsl #2
        13ea4c:	e0822181 	add	r2, r2, r1, lsl #3
        13ea50:	e59f302c 	ldr	r3, [pc, #2c]	; 13ea84 <HalveLetterPairs(void)+0x44>
        13ea54:	e0832082 	add	r2, r3, r2, lsl #1
        13ea58:	e0823000 	add	r3, r2, r0
        13ea5c:	e5d3c000 	ldrb	ip, [r3]
        13ea60:	e1a0c0ac 	mov	ip, ip, lsr #1
        13ea64:	e5c3c000 	strb	ip, [r3]
        13ea68:	e2800001 	add	r0, r0, #1	; 0x1
        13ea6c:	e350001a 	cmp	r0, #26	; 0x1a
        13ea70:	3afffff8 	bcc	13ea58 <HalveLetterPairs(void)+0x18>
        13ea74:	e2811001 	add	r1, r1, #1	; 0x1
        13ea78:	e351001a 	cmp	r1, #26	; 0x1a
        13ea7c:	3afffff0 	bcc	13ea44 <HalveLetterPairs(void)+0x4>
        13ea80:	e1a0f00e 	mov	pc, lr
        13ea84:	0c106528 	ldceq	5, cr6, [r0], -#160
    */
}

/**
 * Symbol: HobbleTablet(void)
 * Address: 0013fb98
 */
HobbleTablet(void) {
    /*
        13fb98:	e1a0c00d 	mov	ip, sp
        13fb9c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        13fba0:	e24cb004 	sub	fp, ip, #4	; 0x4
        13fba4:	e24dd010 	sub	sp, sp, #16	; 0x10
        13fba8:	e1a0000d 	mov	r0, sp
        13fbac:	eb6a91a1 	bl	1be4238 <TAEvent::$__ct(void)>
        13fbb0:	e59f006c 	ldr	r0, [pc, #6c]	; 13fc24 <HobbleTablet(void)+0x8c>
        13fbb4:	e40d001c 	str	r0, [sp], -#28
        13fbb8:	e59f0068 	ldr	r0, [pc, #68]	; 13fc28 <HobbleTablet(void)+0x90>
        13fbbc:	e58d0020 	str	r0, [sp, #32]
        13fbc0:	e3a0001d 	mov	r0, #29	; 0x1d
        13fbc4:	e58d0024 	str	r0, [sp, #36]
        13fbc8:	e28d0004 	add	r0, sp, #4	; 0x4
        13fbcc:	eb6a9199 	bl	1be4238 <TAEvent::$__ct(void)>
        13fbd0:	eb656847 	bl	1a99cf4 <$InkerPort(void)>
        13fbd4:	e1a0c000 	mov	ip, r0
        13fbd8:	e28d0004 	add	r0, sp, #4	; 0x4
        13fbdc:	e3a01018 	mov	r1, #24	; 0x18
        13fbe0:	e3a02000 	mov	r2, #0	; 0x0
        13fbe4:	e3a0e000 	mov	lr, #0	; 0x0
        13fbe8:	e3a04000 	mov	r4, #0	; 0x0
        13fbec:	e3a03000 	mov	r3, #0	; 0x0
        13fbf0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13fbf4:	e1a03004 	mov	r3, r4
        13fbf8:	e1a0100e 	mov	r1, lr
        13fbfc:	e3a00010 	mov	r0, #16	; 0x10
        13fc00:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13fc04:	e28d303c 	add	r3, sp, #60	; 0x3c
        13fc08:	e92d0008 	stmdb	sp!, {r3}
        13fc0c:	e28d3024 	add	r3, sp, #36	; 0x24
        13fc10:	e1a0000c 	mov	r0, ip
        13fc14:	e3a02002 	mov	r2, #2	; 0x2
        13fc18:	e3a01001 	mov	r1, #1	; 0x1
        13fc1c:	eb6a6c4a 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        13fc20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        13fc24:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        13fc28:	696e6b72 	stmvsdb	lr!, {r1, r4, r5, r6, r8, r9, fp, sp, lr}^
    */
}

/**
 * Symbol: HandleInk(TEditView *, RefVar const &)
 * Address: 00140754
 */
HandleInk(TEditView *, RefVar const &) {
    /*
        140754:	e1a0c00d 	mov	ip, sp
        140758:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14075c:	e24cb004 	sub	fp, ip, #4	; 0x4
        140760:	e1a04000 	mov	r4, r0
        140764:	e1a00001 	mov	r0, r1
        140768:	eb65e97a 	bl	1abad58 <$StrokeBundleToTStrokes(RefVar const &)>
        14076c:	e1a01000 	mov	r1, r0
        140770:	e1a05000 	mov	r5, r0
        140774:	e1a00004 	mov	r0, r4
        140778:	eb65cc9d 	bl	1ab39f4 <$HandleInk(TEditView *, TStroke **)>
        14077c:	e1a00005 	mov	r0, r5
        140780:	eb65afa4 	bl	1aac618 <$DisposeTStrokes(TStroke **)>
        140784:	e3a00001 	mov	r0, #1	; 0x1
        140788:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: HandleInk(TEditView *, TStroke **)
 * Address: 00140834
 */
HandleInk(TEditView *, TStroke **) {
    /*
        140834:	e1a0c00d 	mov	ip, sp
        140838:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14083c:	e24cb004 	sub	fp, ip, #4	; 0x4
        140840:	e1a04000 	mov	r4, r0
        140844:	e1a00001 	mov	r0, r1
        140848:	e24dd00c 	sub	sp, sp, #12	; 0xc
        14084c:	e28d1004 	add	r1, sp, #4	; 0x4
        140850:	eb65e944 	bl	1abad68 <$TStrokesToInk(TStroke **, TRect *)>
        140854:	eb6a063c 	bl	1bc214c <$AllocateRefHandle(long)>
        140858:	e1a01004 	mov	r1, r4
        14085c:	e40d0008 	str	r0, [sp], -#8
        140860:	e28d0004 	add	r0, sp, #4	; 0x4
        140864:	eb049b26 	bl	267504 <TView::ContentsOrigin(void)>
        140868:	e59d0004 	ldr	r0, [sp, #4]
        14086c:	e2600000 	rsb	r0, r0, #0	; 0x0
        140870:	e1a01800 	mov	r1, r0, lsl #16
        140874:	e1a01841 	mov	r1, r1, asr #16
        140878:	e59d0006 	ldr	r0, [sp, #6]
        14087c:	e2600000 	rsb	r0, r0, #0	; 0x0
        140880:	e1a00800 	mov	r0, r0, lsl #16
        140884:	e1a00840 	mov	r0, r0, asr #16
        140888:	e24dd004 	sub	sp, sp, #4	; 0x4
        14088c:	e5cd1003 	strb	r1, [sp, #3]
        140890:	e1a01441 	mov	r1, r1, asr #8
        140894:	e5cd1002 	strb	r1, [sp, #2]
        140898:	e5cd0001 	strb	r0, [sp, #1]
        14089c:	e1a00440 	mov	r0, r0, asr #8
        1408a0:	e5cd0000 	strb	r0, [sp]
        1408a4:	e49d0004 	ldr	r0, [sp], #4
        1408a8:	e58d0000 	str	r0, [sp]
        1408ac:	e28d000c 	add	r0, sp, #12	; 0xc
        1408b0:	e59d1002 	ldr	r1, [sp, #2]
        1408b4:	e1a01841 	mov	r1, r1, asr #16
        1408b8:	e59d2000 	ldr	r2, [sp]
        1408bc:	e1a02842 	mov	r2, r2, asr #16
        1408c0:	eb684408 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1408c4:	e28dd004 	add	sp, sp, #4	; 0x4
        1408c8:	e59f0068 	ldr	r0, [pc, #68]	; 140938 <HandleInk(TEditView *, TStroke **)+0x104>
        1408cc:	eb65588c 	bl	1a96b04 <$GetPreference(RefVar const &)>
        1408d0:	e3100003 	tst	r0, #3	; 0x3
        1408d4:	01a00140 	moveq	r0, r0, asr #2
        1408d8:	0a000000 	beq	1408e0 <HandleInk(TEditView *, TStroke **)+0xac>
        1408dc:	eb6a060e 	bl	1bc211c <$_RINTError(long)>
        1408e0:	e1a03000 	mov	r3, r0
        1408e4:	e92d0008 	stmdb	sp!, {r3}
        1408e8:	e28d300c 	add	r3, sp, #12	; 0xc
        1408ec:	e3a0200e 	mov	r2, #14	; 0xe
        1408f0:	e3a01000 	mov	r1, #0	; 0x0
        1408f4:	e3a00000 	mov	r0, #0	; 0x0
        1408f8:	eb656d2f 	bl	1a9bdbc <$MakePolygonForm__FP6TPointlT2RC5TRectT2>
        1408fc:	e28dd004 	add	sp, sp, #4	; 0x4
        140900:	eb6a0611 	bl	1bc214c <$AllocateRefHandle(long)>
        140904:	e58d0000 	str	r0, [sp]
        140908:	e28d2004 	add	r2, sp, #4	; 0x4
        14090c:	e59f1028 	ldr	r1, [pc, #28]	; 14093c <HandleInk(TEditView *, TStroke **)+0x108>
        140910:	e1a0000d 	mov	r0, sp
        140914:	eb6a1693 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        140918:	e1a0100d 	mov	r1, sp
        14091c:	e1a00004 	mov	r0, r4
        140920:	eb6522e6 	bl	1a894c0 <TEditView::$AddForm(RefVar const &)>
        140924:	e59d0000 	ldr	r0, [sp]
        140928:	eb6a0a23 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14092c:	e5bd0004 	ldr	r0, [sp, #4]!
        140930:	eb6a0a21 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        140934:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        140938:	00684e50 	rsbeq	r4, r8, r0, asr lr
        14093c:	00683220 	rsbeq	r3, r8, r0, lsr #4
    */
}

/**
 * Symbol: HLock
 * Address: 00141d88
 */
void globals::HLock() {
    /*
        141d88:	e1a0c00d 	mov	ip, sp
        141d8c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        141d90:	e24cb004 	sub	fp, ip, #4	; 0x4
        141d94:	e1a04000 	mov	r4, r0
        141d98:	eb6a7886 	bl	1bdffb8 <$IsFakeIndirectBlock>
        141d9c:	e3300000 	teq	r0, #0	; 0x0
        141da0:	1a000030 	bne	141e68 <HLock+0xe0>
        141da4:	e59f50c4 	ldr	r5, [pc, #c4]	; 141e70 <HLock+0xe8>
        141da8:	e3340000 	teq	r4, #0	; 0x0
        141dac:	0a000036 	beq	141e8c <HLock+0x104>
        141db0:	e3a06000 	mov	r6, #0	; 0x0
        141db4:	e3a00000 	mov	r0, #0	; 0x0
        141db8:	eb6a7ccd 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        141dbc:	e3300000 	teq	r0, #0	; 0x0
        141dc0:	0a000004 	beq	141dd8 <HLock+0x50>
        141dc4:	e3a06001 	mov	r6, #1	; 0x1
        141dc8:	e3a00000 	mov	r0, #0	; 0x0
        141dcc:	eb6a7cc8 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        141dd0:	e3a01000 	mov	r1, #0	; 0x0
        141dd4:	eb6a325e 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        141dd8:	e24dd004 	sub	sp, sp, #4	; 0x4
        141ddc:	e59f7090 	ldr	r7, [pc, #90]	; 141e74 <HLock+0xec>
        141de0:	e5970000 	ldr	r0, [r7]
        141de4:	e3100040 	tst	r0, #64	; 0x40
        141de8:	0a000006 	beq	141e08 <HLock+0x80>
        141dec:	e1a0100d 	mov	r1, sp
        141df0:	e3a00000 	mov	r0, #0	; 0x0
        141df4:	eb6a7457 	bl	1bdef58 <$CheckHeap>
        141df8:	e1b01000 	movs	r1, r0
        141dfc:	159d2000 	ldrne	r2, [sp]
        141e00:	128f0f1c 	addne	r0, pc, #112	; 0x70
        141e04:	1b6a80d8 	blne	1be216c <$ReportSmashedHeap(char *, long, void *)>
        141e08:	e28dd004 	add	sp, sp, #4	; 0x4
        141e0c:	e5940000 	ldr	r0, [r4]
        141e10:	eb68db8c 	bl	1b78c48 <$IncrementBlockBusy>
        141e14:	e5950000 	ldr	r0, [r5]
        141e18:	e2400054 	sub	r0, r0, #84	; 0x54
        141e1c:	e3a01000 	mov	r1, #0	; 0x0
        141e20:	e5a01048 	str	r1, [r0, #72]!
        141e24:	e24dd004 	sub	sp, sp, #4	; 0x4
        141e28:	e5970000 	ldr	r0, [r7]
        141e2c:	e3100040 	tst	r0, #64	; 0x40
        141e30:	0a000006 	beq	141e50 <HLock+0xc8>
        141e34:	e1a0100d 	mov	r1, sp
        141e38:	e3a00000 	mov	r0, #0	; 0x0
        141e3c:	eb6a7445 	bl	1bdef58 <$CheckHeap>
        141e40:	e1b01000 	movs	r1, r0
        141e44:	159d2000 	ldrne	r2, [sp]
        141e48:	128f0f0d 	addne	r0, pc, #52	; 0x34
        141e4c:	1b6a80c6 	blne	1be216c <$ReportSmashedHeap(char *, long, void *)>
        141e50:	e28dd004 	add	sp, sp, #4	; 0x4
        141e54:	e3360000 	teq	r6, #0	; 0x0
        141e58:	0a000002 	beq	141e68 <HLock+0xe0>
        141e5c:	e3a00000 	mov	r0, #0	; 0x0
        141e60:	eb6a7ca3 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        141e64:	eb6a5f8b 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        141e68:	e5940000 	ldr	r0, [r4]
        141e6c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        141e70:	0c10105c 	ldceq	0, cr1, [r0], -#368
        141e74:	000013fc 	streqd	r1, [r0], -ip
        141e78:	656e7465 	strvsb	r7, [lr, -#1125]!
        141e7c:	72696e67 	rsbvc	r6, r9, #1648	; 0x670
        141e80:	00000000 	andeq	r0, r0, r0
        141e84:	6c656176 	stfvse	f6, [r5], -#472
        141e88:	696e6700 	stmvsdb	lr!, {r8, r9, sl, sp, lr}^
        141e8c:	e5950000 	ldr	r0, [r5]
        141e90:	e2400054 	sub	r0, r0, #84	; 0x54
        141e94:	e3e01000 	mvn	r1, #0	; 0x0
        141e98:	e5a01048 	str	r1, [r0, #72]!
        141e9c:	e3a00000 	mov	r0, #0	; 0x0
        141ea0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: HUnlock
 * Address: 00141ea4
 */
void globals::HUnlock() {
    /*
        141ea4:	e3300000 	teq	r0, #0	; 0x0
        141ea8:	01a0f00e 	moveq	pc, lr
        141eac:	e1a0c00d 	mov	ip, sp
        141eb0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        141eb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        141eb8:	e1a04000 	mov	r4, r0
        141ebc:	eb6a783d 	bl	1bdffb8 <$IsFakeIndirectBlock>
        141ec0:	e3300000 	teq	r0, #0	; 0x0
        141ec4:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        141ec8:	eb6a7c87 	bl	1be10ec <$GetHeap>
        141ecc:	e1a05000 	mov	r5, r0
        141ed0:	e1a00004 	mov	r0, r4
        141ed4:	eb6a7835 	bl	1bdffb0 <$HandleToHeap>
        141ed8:	e1350000 	teq	r5, r0
        141edc:	03a05000 	moveq	r5, #0	; 0x0
        141ee0:	0a000002 	beq	141ef0 <HUnlock+0x4c>
        141ee4:	e3300000 	teq	r0, #0	; 0x0
        141ee8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        141eec:	eb6a84a3 	bl	1be3180 <$SetHeap>
        141ef0:	e3340000 	teq	r4, #0	; 0x0
        141ef4:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        141ef8:	e3a06000 	mov	r6, #0	; 0x0
        141efc:	e3a00000 	mov	r0, #0	; 0x0
        141f00:	eb6a7c7b 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        141f04:	e3300000 	teq	r0, #0	; 0x0
        141f08:	0a000004 	beq	141f20 <HUnlock+0x7c>
        141f0c:	e3a06001 	mov	r6, #1	; 0x1
        141f10:	e3a00000 	mov	r0, #0	; 0x0
        141f14:	eb6a7c76 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        141f18:	e3a01000 	mov	r1, #0	; 0x0
        141f1c:	eb6a320c 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        141f20:	e24dd004 	sub	sp, sp, #4	; 0x4
        141f24:	e59f709c 	ldr	r7, [pc, #9c]	; 141fc8 <HUnlock+0x124>
        141f28:	e5970000 	ldr	r0, [r7]
        141f2c:	e3100040 	tst	r0, #64	; 0x40
        141f30:	0a000006 	beq	141f50 <HUnlock+0xac>
        141f34:	e1a0100d 	mov	r1, sp
        141f38:	e3a00000 	mov	r0, #0	; 0x0
        141f3c:	eb6a7405 	bl	1bdef58 <$CheckHeap>
        141f40:	e1b01000 	movs	r1, r0
        141f44:	159d2000 	ldrne	r2, [sp]
        141f48:	128f0f1f 	addne	r0, pc, #124	; 0x7c
        141f4c:	1b6a8086 	blne	1be216c <$ReportSmashedHeap(char *, long, void *)>
        141f50:	e28dd004 	add	sp, sp, #4	; 0x4
        141f54:	e5940000 	ldr	r0, [r4]
        141f58:	eb68d722 	bl	1b77be8 <$DecrementBlockBusy>
        141f5c:	e59f0074 	ldr	r0, [pc, #74]	; 141fd8 <HUnlock+0x134>
        141f60:	e5900000 	ldr	r0, [r0]
        141f64:	e2400054 	sub	r0, r0, #84	; 0x54
        141f68:	e3a01000 	mov	r1, #0	; 0x0
        141f6c:	e5a01048 	str	r1, [r0, #72]!
        141f70:	e24dd004 	sub	sp, sp, #4	; 0x4
        141f74:	e5970000 	ldr	r0, [r7]
        141f78:	e3100040 	tst	r0, #64	; 0x40
        141f7c:	0a000006 	beq	141f9c <HUnlock+0xf8>
        141f80:	e1a0100d 	mov	r1, sp
        141f84:	e3a00000 	mov	r0, #0	; 0x0
        141f88:	eb6a73f2 	bl	1bdef58 <$CheckHeap>
        141f8c:	e1b01000 	movs	r1, r0
        141f90:	159d2000 	ldrne	r2, [sp]
        141f94:	128f0f10 	addne	r0, pc, #64	; 0x40
        141f98:	1b6a8073 	blne	1be216c <$ReportSmashedHeap(char *, long, void *)>
        141f9c:	e28dd004 	add	sp, sp, #4	; 0x4
        141fa0:	e3360000 	teq	r6, #0	; 0x0
        141fa4:	0a000002 	beq	141fb4 <HUnlock+0x110>
        141fa8:	e3a00000 	mov	r0, #0	; 0x0
        141fac:	eb6a7c50 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        141fb0:	eb6a5f38 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        141fb4:	e3350000 	teq	r5, #0	; 0x0
        141fb8:	11a00005 	movne	r0, r5
        141fbc:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        141fc0:	1a6a846e 	bne	1be3180 <$SetHeap>
        141fc4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        141fc8:	000013fc 	streqd	r1, [r0], -ip
        141fcc:	656e7465 	strvsb	r7, [lr, -#1125]!
        141fd0:	72696e67 	rsbvc	r6, r9, #1648	; 0x670
        141fd4:	00000000 	andeq	r0, r0, r0
        141fd8:	0c10105c 	ldceq	0, cr1, [r0], -#368
        141fdc:	6c656176 	stfvse	f6, [r5], -#472
        141fe0:	696e6700 	stmvsdb	lr!, {r8, r9, sl, sp, lr}^
    */
}

/**
 * Symbol: HSetState
 * Address: 00141fe4
 */
void globals::HSetState() {
    /*
        141fe4:	e1a0c00d 	mov	ip, sp
        141fe8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        141fec:	e24cb004 	sub	fp, ip, #4	; 0x4
        141ff0:	e1a04000 	mov	r4, r0
        141ff4:	e20160ff 	and	r6, r1, #255	; 0xff
        141ff8:	eb6a77ee 	bl	1bdffb8 <$IsFakeIndirectBlock>
        141ffc:	e3300000 	teq	r0, #0	; 0x0
        142000:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        142004:	e3340000 	teq	r4, #0	; 0x0
        142008:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        14200c:	e3a05000 	mov	r5, #0	; 0x0
        142010:	e3a00000 	mov	r0, #0	; 0x0
        142014:	eb6a7c36 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        142018:	e3300000 	teq	r0, #0	; 0x0
        14201c:	0a000004 	beq	142034 <HSetState+0x50>
        142020:	e3a05001 	mov	r5, #1	; 0x1
        142024:	e3a00000 	mov	r0, #0	; 0x0
        142028:	eb6a7c31 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        14202c:	e3a01000 	mov	r1, #0	; 0x0
        142030:	eb6a31c7 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        142034:	e1a01006 	mov	r1, r6
        142038:	e5940000 	ldr	r0, [r4]
        14203c:	eb68df29 	bl	1b79ce8 <$xSetBlockBusy>
        142040:	e3350000 	teq	r5, #0	; 0x0
        142044:	0a000002 	beq	142054 <HSetState+0x70>
        142048:	e3a00000 	mov	r0, #0	; 0x0
        14204c:	eb6a7c28 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        142050:	eb6a5f10 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        142054:	e59f0010 	ldr	r0, [pc, #10]	; 14206c <HSetState+0x88>
        142058:	e5900000 	ldr	r0, [r0]
        14205c:	e2400054 	sub	r0, r0, #84	; 0x54
        142060:	e3a01000 	mov	r1, #0	; 0x0
        142064:	e5a01048 	str	r1, [r0, #72]!
        142068:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        14206c:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: HGetState
 * Address: 00142070
 */
void globals::HGetState() {
    /*
        142070:	e1a0c00d 	mov	ip, sp
        142074:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        142078:	e24cb004 	sub	fp, ip, #4	; 0x4
        14207c:	e1a04000 	mov	r4, r0
        142080:	eb6a77cc 	bl	1bdffb8 <$IsFakeIndirectBlock>
        142084:	e3a06000 	mov	r6, #0	; 0x0
        142088:	e3300000 	teq	r0, #0	; 0x0
        14208c:	1a00001a 	bne	1420fc <HGetState+0x8c>
        142090:	e3340000 	teq	r4, #0	; 0x0
        142094:	0a000018 	beq	1420fc <HGetState+0x8c>
        142098:	e3a05000 	mov	r5, #0	; 0x0
        14209c:	e3a00000 	mov	r0, #0	; 0x0
        1420a0:	eb6a7c13 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        1420a4:	e3300000 	teq	r0, #0	; 0x0
        1420a8:	0a000004 	beq	1420c0 <HGetState+0x50>
        1420ac:	e3a05001 	mov	r5, #1	; 0x1
        1420b0:	e3a00000 	mov	r0, #0	; 0x0
        1420b4:	eb6a7c0e 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        1420b8:	e3a01000 	mov	r1, #0	; 0x0
        1420bc:	eb6a31a4 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1420c0:	e59f0030 	ldr	r0, [pc, #30]	; 1420f8 <HGetState+0x88>
        1420c4:	e5900000 	ldr	r0, [r0]
        1420c8:	e2400054 	sub	r0, r0, #84	; 0x54
        1420cc:	e5a06048 	str	r6, [r0, #72]!
        1420d0:	e5940000 	ldr	r0, [r4]
        1420d4:	eb68dacc 	bl	1b78c0c <$GetBlockBusy>
        1420d8:	e20040ff 	and	r4, r0, #255	; 0xff
        1420dc:	e3350000 	teq	r5, #0	; 0x0
        1420e0:	0a000002 	beq	1420f0 <HGetState+0x80>
        1420e4:	e3a00000 	mov	r0, #0	; 0x0
        1420e8:	eb6a7c01 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        1420ec:	eb6a5ee9 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1420f0:	e1a00004 	mov	r0, r4
        1420f4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1420f8:	0c10105c 	ldceq	0, cr1, [r0], -#368
        1420fc:	e1a00006 	mov	r0, r6
        142100:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: HandToHand
 * Address: 00142230
 */
void globals::HandToHand() {
    /*
        142230:	e1a0c00d 	mov	ip, sp
        142234:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        142238:	e24cb004 	sub	fp, ip, #4	; 0x4
        14223c:	e1b04000 	movs	r4, r0
        142240:	15940000 	ldrne	r0, [r4]
        142244:	13300000 	teqne	r0, #0	; 0x0
        142248:	03e00000 	mvneq	r0, #0	; 0x0
        14224c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        142250:	eb6a7ba4 	bl	1be10e8 <$GetHandleSize>
        142254:	e1a06000 	mov	r6, r0
        142258:	eb6a7fb3 	bl	1be212c <$NewHandle>
        14225c:	e1b05000 	movs	r5, r0
        142260:	03a00001 	moveq	r0, #1	; 0x1
        142264:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        142268:	e5940000 	ldr	r0, [r4]
        14226c:	eb6a7fa6 	bl	1be210c <$HLock>
        142270:	e1a00005 	mov	r0, r5
        142274:	eb6a7fa4 	bl	1be210c <$HLock>
        142278:	e1a02006 	mov	r2, r6
        14227c:	e5951000 	ldr	r1, [r5]
        142280:	e5940000 	ldr	r0, [r4]
        142284:	e5900000 	ldr	r0, [r0]
        142288:	eb6a7331 	bl	1bdef54 <$BlockMove>
        14228c:	e5940000 	ldr	r0, [r4]
        142290:	eb6a7f9f 	bl	1be2114 <$HUnlock>
        142294:	e1a00005 	mov	r0, r5
        142298:	eb6a7f9d 	bl	1be2114 <$HUnlock>
        14229c:	e3a00000 	mov	r0, #0	; 0x0
        1422a0:	e5845000 	str	r5, [r4]
        1422a4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: HWRFileOpen__FPcUiT2
 * Address: 001543f4
 */
void globals::HWRFileOpen() {
    /*
        1543f4:	e3a00000 	mov	r0, #0	; 0x0
        1543f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HWRFileSeek(void *, long, unsigned int)
 * Address: 00154400
 */
HWRFileSeek(void *, long, unsigned int) {
    /*
        154400:	e3a00000 	mov	r0, #0	; 0x0
        154404:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HWRFileTell(void *)
 * Address: 00154408
 */
HWRFileTell(void *) {
    /*
        154408:	e3a00000 	mov	r0, #0	; 0x0
        15440c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HWRFileRead__FPvT1Ui
 * Address: 00154410
 */
void globals::HWRFileRead() {
    /*
        154410:	e3a00000 	mov	r0, #0	; 0x0
        154414:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HWRFileClose(void *)
 * Address: 00154418
 */
HWRFileClose(void *) {
    /*
        154418:	e3a00000 	mov	r0, #0	; 0x0
        15441c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HiliteBlock
 * Address: 00164d64
 */
void globals::HiliteBlock() {
    /*
        164d64:	e1a0c00d 	mov	ip, sp
        164d68:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        164d6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        164d70:	e1a09000 	mov	r9, r0
        164d74:	e1a04001 	mov	r4, r1
        164d78:	e24dd018 	sub	sp, sp, #24	; 0x18
        164d7c:	e3a00002 	mov	r0, #2	; 0x2
        164d80:	eb6974f1 	bl	1bc214c <$AllocateRefHandle(long)>
        164d84:	e1a07000 	mov	r7, r0
        164d88:	e3a00002 	mov	r0, #2	; 0x2
        164d8c:	eb6974ee 	bl	1bc214c <$AllocateRefHandle(long)>
        164d90:	e1a06000 	mov	r6, r0
        164d94:	e3a00002 	mov	r0, #2	; 0x2
        164d98:	eb6974eb 	bl	1bc214c <$AllocateRefHandle(long)>
        164d9c:	e1a05000 	mov	r5, r0
        164da0:	e51b2030 	ldr	r2, [fp, -#48]
        164da4:	e5920000 	ldr	r0, [r2]
        164da8:	e5900000 	ldr	r0, [r0]
        164dac:	e3100003 	tst	r0, #3	; 0x3
        164db0:	01a00140 	moveq	r0, r0, asr #2
        164db4:	0a000000 	beq	164dbc <HiliteBlock+0x58>
        164db8:	eb6974d7 	bl	1bc211c <$_RINTError(long)>
        164dbc:	e1a08000 	mov	r8, r0
        164dc0:	e3a00000 	mov	r0, #0	; 0x0
        164dc4:	e58d0000 	str	r0, [sp]
        164dc8:	e1a00009 	mov	r0, r9
        164dcc:	eb64a64b 	bl	1a8e700 <$ContentView(RefVar const &)>
        164dd0:	e1a01009 	mov	r1, r9
        164dd4:	e58d0014 	str	r0, [sp, #20]
        164dd8:	e59fa0a0 	ldr	sl, [pc, #a0]	; 164e80 <HiliteBlock+0x11c>
        164ddc:	e59a0000 	ldr	r0, [sl]
        164de0:	eb64aa79 	bl	1a8f7cc <TLibrarian::$CurrentPage(RefVar const &)>
        164de4:	e1a01000 	mov	r1, r0
        164de8:	e1a02009 	mov	r2, r9
        164dec:	e59a0000 	ldr	r0, [sl]
        164df0:	eb64c341 	bl	1a95afc <TLibrarian::$GetPageN(long, RefVar const &)>
        164df4:	e5870000 	str	r0, [r7]
        164df8:	e59f1084 	ldr	r1, [pc, #84]	; 164e84 <HiliteBlock+0x120>
        164dfc:	e5911000 	ldr	r1, [r1]
        164e00:	e5911000 	ldr	r1, [r1]
        164e04:	eb697d15 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        164e08:	e5860000 	str	r0, [r6]
        164e0c:	eb698126 	bl	1bc52ac <$Length(long)>
        164e10:	e3a09000 	mov	r9, #0	; 0x0
        164e14:	e58d0004 	str	r0, [sp, #4]
        164e18:	e3500000 	cmp	r0, #0	; 0x0
        164e1c:	da00001e 	ble	164e9c <HiliteBlock+0x138>
        164e20:	e1a01009 	mov	r1, r9
        164e24:	e5960000 	ldr	r0, [r6]
        164e28:	eb697d09 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        164e2c:	e5850000 	str	r0, [r5]
        164e30:	e24dd004 	sub	sp, sp, #4	; 0x4
        164e34:	e59f104c 	ldr	r1, [pc, #4c]	; 164e88 <HiliteBlock+0x124>
        164e38:	e5911000 	ldr	r1, [r1]
        164e3c:	e5911000 	ldr	r1, [r1]
        164e40:	eb697d06 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        164e44:	eb6974c0 	bl	1bc214c <$AllocateRefHandle(long)>
        164e48:	e1a0a000 	mov	sl, r0
        164e4c:	e5940000 	ldr	r0, [r4]
        164e50:	e5901000 	ldr	r1, [r0]
        164e54:	e59a0000 	ldr	r0, [sl]
        164e58:	eb697cf4 	bl	1bc4230 <$EQRef__FlT1>
        164e5c:	e3300000 	teq	r0, #0	; 0x0
        164e60:	13a00001 	movne	r0, #1	; 0x1
        164e64:	e58d0000 	str	r0, [sp]
        164e68:	e1a0000a 	mov	r0, sl
        164e6c:	eb6978d2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        164e70:	e49d0004 	ldr	r0, [sp], #4
        164e74:	e3300000 	teq	r0, #0	; 0x0
        164e78:	0a000003 	beq	164e8c <HiliteBlock+0x128>
        164e7c:	ea000006 	b	164e9c <HiliteBlock+0x138>
        164e80:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        164e84:	00682108 	rsbeq	r2, r8, r8, lsl #2
        164e88:	00683338 	rsbeq	r3, r8, r8, lsr r3
        164e8c:	e2899001 	add	r9, r9, #1	; 0x1
        164e90:	e59d0004 	ldr	r0, [sp, #4]
        164e94:	e1590000 	cmp	r9, r0
        164e98:	baffffe0 	blt	164e20 <HiliteBlock+0xbc>
        164e9c:	e24dd004 	sub	sp, sp, #4	; 0x4
        164ea0:	e59f00b4 	ldr	r0, [pc, #b4]	; 164f5c <HiliteBlock+0x1f8>
        164ea4:	e5900000 	ldr	r0, [r0]
        164ea8:	e5901000 	ldr	r1, [r0]
        164eac:	e5940000 	ldr	r0, [r4]
        164eb0:	e5900000 	ldr	r0, [r0]
        164eb4:	eb697ce9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        164eb8:	eb6974a3 	bl	1bc214c <$AllocateRefHandle(long)>
        164ebc:	e58d0000 	str	r0, [sp]
        164ec0:	e59fa098 	ldr	sl, [pc, #98]	; 164f60 <HiliteBlock+0x1fc>
        164ec4:	e59a0000 	ldr	r0, [sl]
        164ec8:	e5901000 	ldr	r1, [r0]
        164ecc:	e5940000 	ldr	r0, [r4]
        164ed0:	e5900000 	ldr	r0, [r0]
        164ed4:	eb697cdb 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        164ed8:	e3a09002 	mov	r9, #2	; 0x2
        164edc:	e3300000 	teq	r0, #0	; 0x0
        164ee0:	0a000020 	beq	164f68 <HiliteBlock+0x204>
        164ee4:	e59a0000 	ldr	r0, [sl]
        164ee8:	e5901000 	ldr	r1, [r0]
        164eec:	e5940000 	ldr	r0, [r4]
        164ef0:	e5900000 	ldr	r0, [r0]
        164ef4:	eb697cd9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        164ef8:	eb697493 	bl	1bc214c <$AllocateRefHandle(long)>
        164efc:	e1a04000 	mov	r4, r0
        164f00:	e59f005c 	ldr	r0, [pc, #5c]	; 164f64 <HiliteBlock+0x200>
        164f04:	e5900000 	ldr	r0, [r0]
        164f08:	e5901000 	ldr	r1, [r0]
        164f0c:	e5940000 	ldr	r0, [r4]
        164f10:	eb697cc6 	bl	1bc4230 <$EQRef__FlT1>
        164f14:	e1b0a000 	movs	sl, r0
        164f18:	13a0a001 	movne	sl, #1	; 0x1
        164f1c:	e1a00004 	mov	r0, r4
        164f20:	eb6978a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        164f24:	e33a0000 	teq	sl, #0	; 0x0
        164f28:	13a00001 	movne	r0, #1	; 0x1
        164f2c:	158d0004 	strne	r0, [sp, #4]
        164f30:	1a00001c 	bne	164fa8 <HiliteBlock+0x244>
        164f34:	e59d0000 	ldr	r0, [sp]
        164f38:	eb69789f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        164f3c:	e1a00005 	mov	r0, r5
        164f40:	eb69789d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        164f44:	e1a00006 	mov	r0, r6
        164f48:	eb69789b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        164f4c:	e1a00007 	mov	r0, r7
        164f50:	eb697899 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        164f54:	e1a00009 	mov	r0, r9
        164f58:	ea00009f 	b	1651dc <HiliteBlock+0x478>
        164f5c:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        164f60:	00684cb0 	streqh	r4, [r8], -#192
        164f64:	00682e68 	rsbeq	r2, r8, r8, ror #28
        164f68:	e1a0000d 	mov	r0, sp
        164f6c:	eb69747d 	bl	1bc2168 <$ClassOf(RefVar const &)>
        164f70:	eb697475 	bl	1bc214c <$AllocateRefHandle(long)>
        164f74:	e1a04000 	mov	r4, r0
        164f78:	e59f01bc 	ldr	r0, [pc, #1bc]	; 16513c <HiliteBlock+0x3d8>
        164f7c:	e5900000 	ldr	r0, [r0]
        164f80:	e5901000 	ldr	r1, [r0]
        164f84:	e5940000 	ldr	r0, [r4]
        164f88:	eb697ca8 	bl	1bc4230 <$EQRef__FlT1>
        164f8c:	e3300000 	teq	r0, #0	; 0x0
        164f90:	13a0a000 	movne	sl, #0	; 0x0
        164f94:	03a0a001 	moveq	sl, #1	; 0x1
        164f98:	e1a00004 	mov	r0, r4
        164f9c:	eb697886 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        164fa0:	e33a0000 	teq	sl, #0	; 0x0
        164fa4:	1affffe2 	bne	164f34 <HiliteBlock+0x1d0>
        164fa8:	e59f0190 	ldr	r0, [pc, #190]	; 165140 <HiliteBlock+0x3dc>
        164fac:	e5900000 	ldr	r0, [r0]
        164fb0:	e5901000 	ldr	r1, [r0]
        164fb4:	e5950000 	ldr	r0, [r5]
        164fb8:	eb697ca8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        164fbc:	eb697462 	bl	1bc214c <$AllocateRefHandle(long)>
        164fc0:	e1a04000 	mov	r4, r0
        164fc4:	e3a0a000 	mov	sl, #0	; 0x0
        164fc8:	e1a0100a 	mov	r1, sl
        164fcc:	e5900000 	ldr	r0, [r0]
        164fd0:	eb697c9f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        164fd4:	e3100003 	tst	r0, #3	; 0x3
        164fd8:	01a00140 	moveq	r0, r0, asr #2
        164fdc:	0a000000 	beq	164fe4 <HiliteBlock+0x280>
        164fe0:	eb69744d 	bl	1bc211c <$_RINTError(long)>
        164fe4:	e5cd0013 	strb	r0, [sp, #19]
        164fe8:	e1a00440 	mov	r0, r0, asr #8
        164fec:	e5cd0012 	strb	r0, [sp, #18]
        164ff0:	e3a01001 	mov	r1, #1	; 0x1
        164ff4:	e5940000 	ldr	r0, [r4]
        164ff8:	eb697c95 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        164ffc:	e3100003 	tst	r0, #3	; 0x3
        165000:	01a00140 	moveq	r0, r0, asr #2
        165004:	0a000000 	beq	16500c <HiliteBlock+0x2a8>
        165008:	eb697443 	bl	1bc211c <$_RINTError(long)>
        16500c:	e5cd0011 	strb	r0, [sp, #17]
        165010:	e1a00440 	mov	r0, r0, asr #8
        165014:	e5cd0010 	strb	r0, [sp, #16]
        165018:	e1a01009 	mov	r1, r9
        16501c:	e5940000 	ldr	r0, [r4]
        165020:	eb697c8b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        165024:	e3100003 	tst	r0, #3	; 0x3
        165028:	01a00140 	moveq	r0, r0, asr #2
        16502c:	0a000000 	beq	165034 <HiliteBlock+0x2d0>
        165030:	eb697439 	bl	1bc211c <$_RINTError(long)>
        165034:	e5cd0017 	strb	r0, [sp, #23]
        165038:	e1a00440 	mov	r0, r0, asr #8
        16503c:	e5cd0016 	strb	r0, [sp, #22]
        165040:	e3a01003 	mov	r1, #3	; 0x3
        165044:	e5940000 	ldr	r0, [r4]
        165048:	eb697c81 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        16504c:	e3100003 	tst	r0, #3	; 0x3
        165050:	01a00140 	moveq	r0, r0, asr #2
        165054:	0a000000 	beq	16505c <HiliteBlock+0x2f8>
        165058:	eb69742f 	bl	1bc211c <$_RINTError(long)>
        16505c:	e5cd0015 	strb	r0, [sp, #21]
        165060:	e1a00440 	mov	r0, r0, asr #8
        165064:	e5cd0014 	strb	r0, [sp, #20]
        165068:	e24dd004 	sub	sp, sp, #4	; 0x4
        16506c:	e59d001c 	ldr	r0, [sp, #28]
        165070:	e5900010 	ldr	r0, [r0, #16]
        165074:	e58d0000 	str	r0, [sp]
        165078:	e28d0014 	add	r0, sp, #20	; 0x14
        16507c:	e59d1002 	ldr	r1, [sp, #2]
        165080:	e1a01841 	mov	r1, r1, asr #16
        165084:	e59d2000 	ldr	r2, [sp]
        165088:	e1a02842 	mov	r2, r2, asr #16
        16508c:	eb67b215 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        165090:	e28dd004 	add	sp, sp, #4	; 0x4
        165094:	e28d1010 	add	r1, sp, #16	; 0x10
        165098:	e28d000c 	add	r0, sp, #12	; 0xc
        16509c:	eb00c9f8 	bl	197884 <TRect::MidPoint( const(void))>
        1650a0:	e59f909c 	ldr	r9, [pc, #9c]	; 165144 <HiliteBlock+0x3e0>
        1650a4:	e5990000 	ldr	r0, [r9]
        1650a8:	e5901000 	ldr	r1, [r0]
        1650ac:	e5950000 	ldr	r0, [r5]
        1650b0:	eb697c64 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        1650b4:	e3300000 	teq	r0, #0	; 0x0
        1650b8:	0a000008 	beq	1650e0 <HiliteBlock+0x37c>
        1650bc:	e5990000 	ldr	r0, [r9]
        1650c0:	e5901000 	ldr	r1, [r0]
        1650c4:	e5950000 	ldr	r0, [r5]
        1650c8:	eb697c64 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1650cc:	e3100003 	tst	r0, #3	; 0x3
        1650d0:	01a00140 	moveq	r0, r0, asr #2
        1650d4:	0a000000 	beq	1650dc <HiliteBlock+0x378>
        1650d8:	eb69740f 	bl	1bc211c <$_RINTError(long)>
        1650dc:	e0488000 	sub	r8, r8, r0
        1650e0:	e3a03000 	mov	r3, #0	; 0x0
        1650e4:	e3a02000 	mov	r2, #0	; 0x0
        1650e8:	e59d0018 	ldr	r0, [sp, #24]
        1650ec:	e59d100c 	ldr	r1, [sp, #12]
        1650f0:	eb69950c 	bl	1bca528 <TView::$FindView(TPoint, unsigned long, TPoint *)>
        1650f4:	e1b09000 	movs	r9, r0
        1650f8:	0a00002c 	beq	1651b0 <HiliteBlock+0x44c>
        1650fc:	e59d0004 	ldr	r0, [sp, #4]
        165100:	e3300000 	teq	r0, #0	; 0x0
        165104:	1a00000f 	bne	165148 <HiliteBlock+0x3e4>
        165108:	e51b302c 	ldr	r3, [fp, -#44]
        16510c:	e5930000 	ldr	r0, [r3]
        165110:	e5900000 	ldr	r0, [r0]
        165114:	e3100003 	tst	r0, #3	; 0x3
        165118:	01a00140 	moveq	r0, r0, asr #2
        16511c:	0a000000 	beq	165124 <HiliteBlock+0x3c0>
        165120:	eb6973fd 	bl	1bc211c <$_RINTError(long)>
        165124:	e0802008 	add	r2, r0, r8
        165128:	e1a01008 	mov	r1, r8
        16512c:	e1a00009 	mov	r0, r9
        165130:	e3a03001 	mov	r3, #1	; 0x1
        165134:	eb660054 	bl	1ae528c <TParagraphView::$MakeHilite(long, long, unsigned char)>
        165138:	ea00001c 	b	1651b0 <HiliteBlock+0x44c>
        16513c:	006848d0 	ldreqd	r4, [r8], -#128
        165140:	00682190 	streqb	r2, [r8], -#16
        165144:	006827c0 	rsbeq	r2, r8, r0, asr #15
        165148:	e24dd004 	sub	sp, sp, #4	; 0x4
        16514c:	e3a00002 	mov	r0, #2	; 0x2
        165150:	eb64db11 	bl	1a9bd9c <$MakeArray(long)>
        165154:	eb6973fc 	bl	1bc214c <$AllocateRefHandle(long)>
        165158:	e58d0000 	str	r0, [sp]
        16515c:	e51b2030 	ldr	r2, [fp, -#48]
        165160:	e5920000 	ldr	r0, [r2]
        165164:	e1a0100a 	mov	r1, sl
        165168:	e5902000 	ldr	r2, [r0]
        16516c:	e59d0000 	ldr	r0, [sp]
        165170:	e5900000 	ldr	r0, [r0]
        165174:	eb698477 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        165178:	e51b302c 	ldr	r3, [fp, -#44]
        16517c:	e5930000 	ldr	r0, [r3]
        165180:	e3a01001 	mov	r1, #1	; 0x1
        165184:	e5902000 	ldr	r2, [r0]
        165188:	e59d0000 	ldr	r0, [sp]
        16518c:	e5900000 	ldr	r0, [r0]
        165190:	eb698470 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        165194:	e2890024 	add	r0, r9, #36	; 0x24
        165198:	e1a0200d 	mov	r2, sp
        16519c:	e59f103c 	ldr	r1, [pc, #3c]	; 1651e0 <HiliteBlock+0x47c>
        1651a0:	eb69780b 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        1651a4:	e59d0000 	ldr	r0, [sp]
        1651a8:	eb697803 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1651ac:	e28dd004 	add	sp, sp, #4	; 0x4
        1651b0:	e1a00004 	mov	r0, r4
        1651b4:	eb697800 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1651b8:	e59d0000 	ldr	r0, [sp]
        1651bc:	eb6977fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1651c0:	e1a00005 	mov	r0, r5
        1651c4:	eb6977fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1651c8:	e1a00006 	mov	r0, r6
        1651cc:	eb6977fa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1651d0:	e1a00007 	mov	r0, r7
        1651d4:	eb6977f8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1651d8:	e3a0001a 	mov	r0, #26	; 0x1a
        1651dc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1651e0:	00682ea0 	rsbeq	r2, r8, r0, lsr #29
    */
}

/**
 * Symbol: HitsHilitedInkWord(TView *, TPoint)
 * Address: 00171344
 */
HitsHilitedInkWord(TView *, TPoint) {
    /*
        171344:	e1a0c00d 	mov	ip, sp
        171348:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        17134c:	e24cb004 	sub	fp, ip, #4	; 0x4
        171350:	e1a04001 	mov	r4, r1
        171354:	e1a06000 	mov	r6, r0
        171358:	e3a01051 	mov	r1, #81	; 0x51
        17135c:	e5902000 	ldr	r2, [r0]
        171360:	e1a0e00f 	mov	lr, pc
        171364:	e282f004 	add	pc, r2, #4	; 0x4
        171368:	e3a0a000 	mov	sl, #0	; 0x0
        17136c:	e3300000 	teq	r0, #0	; 0x0
        171370:	0a000052 	beq	1714c0 <HitsHilitedInkWord(TView *, TPoint)+0x17c>
        171374:	e1a00006 	mov	r0, r6
        171378:	eb650156 	bl	1ab18d8 <TView::$FirstHilite(void)>
        17137c:	eb694372 	bl	1bc214c <$AllocateRefHandle(long)>
        171380:	e1a07000 	mov	r7, r0
        171384:	e5900000 	ldr	r0, [r0]
        171388:	e3300002 	teq	r0, #2	; 0x2
        17138c:	0a000049 	beq	1714b8 <HitsHilitedInkWord(TView *, TPoint)+0x174>
        171390:	e24dd004 	sub	sp, sp, #4	; 0x4
        171394:	eb64bb11 	bl	1a9ffe0 <$RefToAddress(long)>
        171398:	e1a08000 	mov	r8, r0
        17139c:	e1a00006 	mov	r0, r6
        1713a0:	eb64cb9c 	bl	1aa4218 <TParagraphView::$Text(void)>
        1713a4:	e1a01000 	mov	r1, r0
        1713a8:	e1a0000d 	mov	r0, sp
        1713ac:	eb693f47 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        1713b0:	e1a0000d 	mov	r0, sp
        1713b4:	eb694356 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1713b8:	e1a09000 	mov	r9, r0
        1713bc:	e5980010 	ldr	r0, [r8, #16]
        1713c0:	e598500c 	ldr	r5, [r8, #12]
        1713c4:	e1500005 	cmp	r0, r5
        1713c8:	da000036 	ble	1714a8 <HitsHilitedInkWord(TView *, TPoint)+0x164>
        1713cc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1713d0:	e1a01005 	mov	r1, r5
        1713d4:	e1a00006 	mov	r0, r6
        1713d8:	e3a03000 	mov	r3, #0	; 0x0
        1713dc:	e3a02000 	mov	r2, #0	; 0x0
        1713e0:	eb657d23 	bl	1ad0874 <TParagraphView::$GetStyleAtOffset(long, long *, long *)>
        1713e4:	eb694358 	bl	1bc214c <$AllocateRefHandle(long)>
        1713e8:	e58d0000 	str	r0, [sp]
        1713ec:	e7990085 	ldr	r0, [r9, r5, lsl #1]
        1713f0:	e1a00820 	mov	r0, r0, lsr #16
        1713f4:	e240ccf7 	sub	ip, r0, #63232	; 0xf700
        1713f8:	e33c0001 	teq	ip, #1	; 0x1
        1713fc:	1a000022 	bne	17148c <HitsHilitedInkWord(TView *, TPoint)+0x148>
        171400:	e1a0000d 	mov	r0, sp
        171404:	eb658132 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
        171408:	e3300000 	teq	r0, #0	; 0x0
        17140c:	0a00001e 	beq	17148c <HitsHilitedInkWord(TView *, TPoint)+0x148>
        171410:	e24dd010 	sub	sp, sp, #16	; 0x10
        171414:	e28d2008 	add	r2, sp, #8	; 0x8
        171418:	e1a01005 	mov	r1, r5
        17141c:	e1a00006 	mov	r0, r6
        171420:	eb64ae86 	bl	1a9ce40 <TParagraphView::$OffsetToBounds(long, TRect *)>
        171424:	e2851001 	add	r1, r5, #1	; 0x1
        171428:	e1a0200d 	mov	r2, sp
        17142c:	e1a00006 	mov	r0, r6
        171430:	eb64ae82 	bl	1a9ce40 <TParagraphView::$OffsetToBounds(long, TRect *)>
        171434:	e59d0000 	ldr	r0, [sp]
        171438:	e5cd000f 	strb	r0, [sp, #15]
        17143c:	e1a00440 	mov	r0, r0, asr #8
        171440:	e5cd000e 	strb	r0, [sp, #14]
        171444:	e52d4004 	str	r4, [sp, -#4]!
        171448:	e28d100c 	add	r1, sp, #12	; 0xc
        17144c:	e1a00004 	mov	r0, r4
        171450:	e28dd004 	add	sp, sp, #4	; 0x4
        171454:	eb678538 	bl	1b5293c <$PtInRect(Point, Rect *)>
        171458:	e3300000 	teq	r0, #0	; 0x0
        17145c:	0a000009 	beq	171488 <HitsHilitedInkWord(TView *, TPoint)+0x144>
        171460:	e3a04001 	mov	r4, #1	; 0x1
        171464:	e59d0010 	ldr	r0, [sp, #16]
        171468:	eb694753 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17146c:	e28d0014 	add	r0, sp, #20	; 0x14
        171470:	e3a01000 	mov	r1, #0	; 0x0
        171474:	eb694321 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        171478:	e1a00007 	mov	r0, r7
        17147c:	eb69474e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        171480:	e1a00004 	mov	r0, r4
        171484:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        171488:	e28dd010 	add	sp, sp, #16	; 0x10
        17148c:	e59d0000 	ldr	r0, [sp]
        171490:	eb694749 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        171494:	e28dd004 	add	sp, sp, #4	; 0x4
        171498:	e2855001 	add	r5, r5, #1	; 0x1
        17149c:	e5980010 	ldr	r0, [r8, #16]
        1714a0:	e1500005 	cmp	r0, r5
        1714a4:	caffffc8 	bgt	1713cc <HitsHilitedInkWord(TView *, TPoint)+0x88>
        1714a8:	e1a0000d 	mov	r0, sp
        1714ac:	e3a01000 	mov	r1, #0	; 0x0
        1714b0:	eb694312 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1714b4:	e28dd004 	add	sp, sp, #4	; 0x4
        1714b8:	e1a00007 	mov	r0, r7
        1714bc:	eb69473e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1714c0:	e1a0000a 	mov	r0, sl
        1714c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7
 * Address: 0018f4cc
 */
void globals::HiliteTracedFrom() {
    /*
        18f4cc:	e1a0c00d 	mov	ip, sp
        18f4d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        18f4d4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        18f4d8:	e24cb014 	sub	fp, ip, #20	; 0x14
        18f4dc:	e1a0a001 	mov	sl, r1
        18f4e0:	e24dde31 	sub	sp, sp, #784	; 0x310
        18f4e4:	e28d1fb5 	add	r1, sp, #724	; 0x2d4
        18f4e8:	e59f30ec 	ldr	r3, [pc, #ec]	; 18f5dc <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x110>
        18f4ec:	e28d0f4d 	add	r0, sp, #308	; 0x134
        18f4f0:	e3a02034 	mov	r2, #52	; 0x34
        18f4f4:	eb61d762 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
        18f4f8:	e3e02000 	mvn	r2, #0	; 0x0
        18f4fc:	e3e00000 	mvn	r0, #0	; 0x0
        18f500:	e3a08000 	mov	r8, #0	; 0x0
        18f504:	e3a07000 	mov	r7, #0	; 0x0
        18f508:	e58d002c 	str	r0, [sp, #44]
        18f50c:	e58d2030 	str	r2, [sp, #48]
        18f510:	e58d701c 	str	r7, [sp, #28]
        18f514:	e58d8020 	str	r8, [sp, #32]
        18f518:	e59b0010 	ldr	r0, [fp, #16]
        18f51c:	e5900002 	ldr	r0, [r0, #2]
        18f520:	e1a00820 	mov	r0, r0, lsr #16
        18f524:	e59b2018 	ldr	r2, [fp, #24]
        18f528:	e5921002 	ldr	r1, [r2, #2]
        18f52c:	e1a01821 	mov	r1, r1, lsr #16
        18f530:	e0800001 	add	r0, r0, r1
        18f534:	e1a00800 	mov	r0, r0, lsl #16
        18f538:	e1a00840 	mov	r0, r0, asr #16
        18f53c:	e59b3010 	ldr	r3, [fp, #16]
        18f540:	e5931000 	ldr	r1, [r3]
        18f544:	e1a01821 	mov	r1, r1, lsr #16
        18f548:	e59b2018 	ldr	r2, [fp, #24]
        18f54c:	e5922000 	ldr	r2, [r2]
        18f550:	e1a02822 	mov	r2, r2, lsr #16
        18f554:	e0811002 	add	r1, r1, r2
        18f558:	e1a01801 	mov	r1, r1, lsl #16
        18f55c:	e1a01841 	mov	r1, r1, asr #16
        18f560:	e24dd004 	sub	sp, sp, #4	; 0x4
        18f564:	e5cd0003 	strb	r0, [sp, #3]
        18f568:	e1a00440 	mov	r0, r0, asr #8
        18f56c:	e5cd0002 	strb	r0, [sp, #2]
        18f570:	e5cd1001 	strb	r1, [sp, #1]
        18f574:	e1a00441 	mov	r0, r1, asr #8
        18f578:	e5cd0000 	strb	r0, [sp]
        18f57c:	e49d0004 	ldr	r0, [sp], #4
        18f580:	e3a04000 	mov	r4, #0	; 0x0
        18f584:	e3a06000 	mov	r6, #0	; 0x0
        18f588:	e3a01000 	mov	r1, #0	; 0x0
        18f58c:	e58d0014 	str	r0, [sp, #20]
        18f590:	e58d100c 	str	r1, [sp, #12]
        18f594:	e58d6010 	str	r6, [sp, #16]
        18f598:	e58d1008 	str	r1, [sp, #8]
        18f59c:	e58d1004 	str	r1, [sp, #4]
        18f5a0:	e59b0004 	ldr	r0, [fp, #4]
        18f5a4:	e5900000 	ldr	r0, [r0]
        18f5a8:	e1a00840 	mov	r0, r0, asr #16
        18f5ac:	eb645f7f 	bl	1aa73b0 <$IsClosed(long)>
        18f5b0:	e58d0000 	str	r0, [sp]
        18f5b4:	e59f0024 	ldr	r0, [pc, #24]	; 18f5e0 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x114>
        18f5b8:	e58d030c 	str	r0, [sp, #780]
        18f5bc:	e59d030c 	ldr	r0, [sp, #780]
        18f5c0:	e5900004 	ldr	r0, [r0, #4]
        18f5c4:	e1580080 	cmp	r8, r0, lsl #1
        18f5c8:	d59d1020 	ldrle	r1, [sp, #32]
        18f5cc:	d1510080 	cmple	r1, r0, lsl #1
        18f5d0:	da000003 	ble	18f5e4 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x118>
        18f5d4:	e3a00000 	mov	r0, #0	; 0x0
        18f5d8:	ea000116 	b	18fa38 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x56c>
        18f5dc:	0038ae9c 	mlaeqs	r8, ip, lr, sl
        18f5e0:	0c101768 	ldceq	7, cr1, [r0], -#416
        18f5e4:	e59d101c 	ldr	r1, [sp, #28]
        18f5e8:	e3a03002 	mov	r3, #2	; 0x2
        18f5ec:	e28b2010 	add	r2, fp, #16	; 0x10
        18f5f0:	e8920005 	ldmia	r2, {r0, r2}
        18f5f4:	eb645f7b 	bl	1aa73e8 <$NextHiliteIndex__FP6TPointlN22>
        18f5f8:	e58d001c 	str	r0, [sp, #28]
        18f5fc:	e3500000 	cmp	r0, #0	; 0x0
        18f600:	ba0000e7 	blt	18f9a4 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x4d8>
        18f604:	e59d0014 	ldr	r0, [sp, #20]
        18f608:	e58d0018 	str	r0, [sp, #24]
        18f60c:	e59b3010 	ldr	r3, [fp, #16]
        18f610:	e59d001c 	ldr	r0, [sp, #28]
        18f614:	e0830100 	add	r0, r3, r0, lsl #2
        18f618:	e5901002 	ldr	r1, [r0, #2]
        18f61c:	e1a01821 	mov	r1, r1, lsr #16
        18f620:	e59b2018 	ldr	r2, [fp, #24]
        18f624:	e5922002 	ldr	r2, [r2, #2]
        18f628:	e1a02822 	mov	r2, r2, lsr #16
        18f62c:	e0811002 	add	r1, r1, r2
        18f630:	e1a01801 	mov	r1, r1, lsl #16
        18f634:	e1a01841 	mov	r1, r1, asr #16
        18f638:	e5900000 	ldr	r0, [r0]
        18f63c:	e1a00820 	mov	r0, r0, lsr #16
        18f640:	e59b2018 	ldr	r2, [fp, #24]
        18f644:	e5922000 	ldr	r2, [r2]
        18f648:	e1a02822 	mov	r2, r2, lsr #16
        18f64c:	e0800002 	add	r0, r0, r2
        18f650:	e1a00800 	mov	r0, r0, lsl #16
        18f654:	e1a00840 	mov	r0, r0, asr #16
        18f658:	e24dd004 	sub	sp, sp, #4	; 0x4
        18f65c:	e5cd1003 	strb	r1, [sp, #3]
        18f660:	e1a01441 	mov	r1, r1, asr #8
        18f664:	e5cd1002 	strb	r1, [sp, #2]
        18f668:	e5cd0001 	strb	r0, [sp, #1]
        18f66c:	e1a00440 	mov	r0, r0, asr #8
        18f670:	e5cd0000 	strb	r0, [sp]
        18f674:	e49d0004 	ldr	r0, [sp], #4
        18f678:	e58d0014 	str	r0, [sp, #20]
        18f67c:	e28d2fb5 	add	r2, sp, #724	; 0x2d4
        18f680:	e28d1014 	add	r1, sp, #20	; 0x14
        18f684:	e28d0018 	add	r0, sp, #24	; 0x18
        18f688:	eb645f4c 	bl	1aa73c0 <$CalcSegParameters__FRC6TPointT1P9SegParams>
        18f68c:	ea00001c 	b	18f704 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x238>
        18f690:	e1a0200a 	mov	r2, sl
        18f694:	e59b300c 	ldr	r3, [fp, #12]
        18f698:	e59d1000 	ldr	r1, [sp]
        18f69c:	e59b0004 	ldr	r0, [fp, #4]
        18f6a0:	eb645f4f 	bl	1aa73e4 <$NextPSegBegin__FP12PolygonShapeUclT3>
        18f6a4:	e1b05000 	movs	r5, r0
        18f6a8:	4a00001b 	bmi	18f71c <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x250>
        18f6ac:	e59b200c 	ldr	r2, [fp, #12]
        18f6b0:	e085a002 	add	sl, r5, r2
        18f6b4:	e0840104 	add	r0, r4, r4, lsl #2
        18f6b8:	e0800184 	add	r0, r0, r4, lsl #3
        18f6bc:	e28d1f4d 	add	r1, sp, #308	; 0x134
        18f6c0:	e0812100 	add	r2, r1, r0, lsl #2
        18f6c4:	e1a09002 	mov	r9, r2
        18f6c8:	e59b0004 	ldr	r0, [fp, #4]
        18f6cc:	e080010a 	add	r0, r0, sl, lsl #2
        18f6d0:	e2801004 	add	r1, r0, #4	; 0x4
        18f6d4:	e59b0004 	ldr	r0, [fp, #4]
        18f6d8:	e0800105 	add	r0, r0, r5, lsl #2
        18f6dc:	e2800004 	add	r0, r0, #4	; 0x4
        18f6e0:	eb645f36 	bl	1aa73c0 <$CalcSegParameters__FRC6TPointT1P9SegParams>
        18f6e4:	e5b9001c 	ldr	r0, [r9, #28]!
        18f6e8:	e0806006 	add	r6, r0, r6
        18f6ec:	e28d0034 	add	r0, sp, #52	; 0x34
        18f6f0:	e7805284 	str	r5, [r0, r4, lsl #5]
        18f6f4:	e28d0034 	add	r0, sp, #52	; 0x34
        18f6f8:	e0800284 	add	r0, r0, r4, lsl #5
        18f6fc:	e2844001 	add	r4, r4, #1	; 0x1
        18f700:	e5a0a004 	str	sl, [r0, #4]!
        18f704:	e3540008 	cmp	r4, #8	; 0x8
        18f708:	aa000003 	bge	18f71c <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x250>
        18f70c:	e59d030c 	ldr	r0, [sp, #780]
        18f710:	e5900004 	ldr	r0, [r0, #4]
        18f714:	e1560000 	cmp	r6, r0
        18f718:	daffffdc 	ble	18f690 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x1c4>
        18f71c:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        18f720:	e1a05004 	mov	r5, r4
        18f724:	e3a09000 	mov	r9, #0	; 0x0
        18f728:	e3540000 	cmp	r4, #0	; 0x0
        18f72c:	e52d0004 	str	r0, [sp, -#4]!
        18f730:	da000013 	ble	18f784 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x2b8>
        18f734:	e28d0038 	add	r0, sp, #56	; 0x38
        18f738:	e0802289 	add	r2, r0, r9, lsl #5
        18f73c:	e0890109 	add	r0, r9, r9, lsl #2
        18f740:	e0800189 	add	r0, r0, r9, lsl #3
        18f744:	e58d230c 	str	r2, [sp, #780]
        18f748:	e28d1f4e 	add	r1, sp, #312	; 0x138
        18f74c:	e0811100 	add	r1, r1, r0, lsl #2
        18f750:	e28d0fb6 	add	r0, sp, #728	; 0x2d8
        18f754:	eb645f24 	bl	1aa73ec <$SegSegTraced__FRC9SegParamsT1P9SegTraced>
        18f758:	e3300000 	teq	r0, #0	; 0x0
        18f75c:	0a000005 	beq	18f778 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x2ac>
        18f760:	e59d230c 	ldr	r2, [sp, #780]
        18f764:	e5b20018 	ldr	r0, [r2, #24]!
        18f768:	e59d1000 	ldr	r1, [sp]
        18f76c:	e1500001 	cmp	r0, r1
        18f770:	d1a05009 	movle	r5, r9
        18f774:	d58d0000 	strle	r0, [sp]
        18f778:	e2899001 	add	r9, r9, #1	; 0x1
        18f77c:	e1590004 	cmp	r9, r4
        18f780:	baffffeb 	blt	18f734 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x268>
        18f784:	e1350004 	teq	r5, r4
        18f788:	1a000004 	bne	18f7a0 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x2d4>
        18f78c:	e59d0054 	ldr	r0, [sp, #84]
        18f790:	e59d1024 	ldr	r1, [sp, #36]
        18f794:	e0801001 	add	r1, r0, r1
        18f798:	e58d1024 	str	r1, [sp, #36]
        18f79c:	ea00007e 	b	18f99c <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x4d0>
        18f7a0:	e59d2034 	ldr	r2, [sp, #52]
        18f7a4:	e3720001 	cmn	r2, #1	; 0x1
        18f7a8:	1a000009 	bne	18f7d4 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x308>
        18f7ac:	e59d2038 	ldr	r2, [sp, #56]
        18f7b0:	e58d2034 	str	r2, [sp, #52]
        18f7b4:	e59d0044 	ldr	r0, [sp, #68]
        18f7b8:	e59d1154 	ldr	r1, [sp, #340]
        18f7bc:	eb69463f 	bl	1be10c0 <$FixedDivide>
        18f7c0:	e58d002c 	str	r0, [sp, #44]
        18f7c4:	e59d104c 	ldr	r1, [sp, #76]
        18f7c8:	e58d1014 	str	r1, [sp, #20]
        18f7cc:	e59d1044 	ldr	r1, [sp, #68]
        18f7d0:	e58d1010 	str	r1, [sp, #16]
        18f7d4:	e28d0038 	add	r0, sp, #56	; 0x38
        18f7d8:	e7900285 	ldr	r0, [r0, r5, lsl #5]
        18f7dc:	e58d0030 	str	r0, [sp, #48]
        18f7e0:	e0850105 	add	r0, r5, r5, lsl #2
        18f7e4:	e0800185 	add	r0, r0, r5, lsl #3
        18f7e8:	e28d1f4e 	add	r1, sp, #312	; 0x138
        18f7ec:	e0816100 	add	r6, r1, r0, lsl #2
        18f7f0:	e28d0038 	add	r0, sp, #56	; 0x38
        18f7f4:	e0809285 	add	r9, r0, r5, lsl #5
        18f7f8:	e596101c 	ldr	r1, [r6, #28]
        18f7fc:	e5990010 	ldr	r0, [r9, #16]
        18f800:	eb69462e 	bl	1be10c0 <$FixedDivide>
        18f804:	e58d0028 	str	r0, [sp, #40]
        18f808:	e59d004c 	ldr	r0, [sp, #76]
        18f80c:	e59d1014 	ldr	r1, [sp, #20]
        18f810:	e1500001 	cmp	r0, r1
        18f814:	b59d1014 	ldrlt	r1, [sp, #20]
        18f818:	b58d104c 	strlt	r1, [sp, #76]
        18f81c:	e59d0040 	ldr	r0, [sp, #64]
        18f820:	e59d1014 	ldr	r1, [sp, #20]
        18f824:	e1500001 	cmp	r0, r1
        18f828:	d3a00000 	movle	r0, #0	; 0x0
        18f82c:	c59d0040 	ldrgt	r0, [sp, #64]
        18f830:	c59d1014 	ldrgt	r1, [sp, #20]
        18f834:	c0400001 	subgt	r0, r0, r1
        18f838:	e58d0040 	str	r0, [sp, #64]
        18f83c:	e3a00000 	mov	r0, #0	; 0x0
        18f840:	e3550000 	cmp	r5, #0	; 0x0
        18f844:	ba000035 	blt	18f920 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x454>
        18f848:	e1500005 	cmp	r0, r5
        18f84c:	e28d1038 	add	r1, sp, #56	; 0x38
        18f850:	e0811280 	add	r1, r1, r0, lsl #5
        18f854:	a5911008 	ldrge	r1, [r1, #8]
        18f858:	aa000008 	bge	18f880 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x3b4>
        18f85c:	e5912014 	ldr	r2, [r1, #20]
        18f860:	e5911008 	ldr	r1, [r1, #8]
        18f864:	e0421001 	sub	r1, r2, r1
        18f868:	e0802100 	add	r2, r0, r0, lsl #2
        18f86c:	e0822180 	add	r2, r2, r0, lsl #3
        18f870:	e28d3f4e 	add	r3, sp, #312	; 0x138
        18f874:	e0832102 	add	r2, r3, r2, lsl #2
        18f878:	e592201c 	ldr	r2, [r2, #28]
        18f87c:	e0421001 	sub	r1, r2, r1
        18f880:	e0818008 	add	r8, r1, r8
        18f884:	e3500000 	cmp	r0, #0	; 0x0
        18f888:	da000004 	ble	18f8a0 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x3d4>
        18f88c:	e28d1038 	add	r1, sp, #56	; 0x38
        18f890:	e0811280 	add	r1, r1, r0, lsl #5
        18f894:	e281200c 	add	r2, r1, #12	; 0xc
        18f898:	e8920006 	ldmia	r2, {r1, r2}
        18f89c:	ea000008 	b	18f8c4 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x3f8>
        18f8a0:	e59d1048 	ldr	r1, [sp, #72]
        18f8a4:	e59d2010 	ldr	r2, [sp, #16]
        18f8a8:	e1510002 	cmp	r1, r2
        18f8ac:	da000006 	ble	18f8cc <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x400>
        18f8b0:	e59d1044 	ldr	r1, [sp, #68]
        18f8b4:	e59d2010 	ldr	r2, [sp, #16]
        18f8b8:	e1520001 	cmp	r2, r1
        18f8bc:	c59d1010 	ldrgt	r1, [sp, #16]
        18f8c0:	e59d2048 	ldr	r2, [sp, #72]
        18f8c4:	e0421001 	sub	r1, r2, r1
        18f8c8:	e0817007 	add	r7, r1, r7
        18f8cc:	e28d1038 	add	r1, sp, #56	; 0x38
        18f8d0:	e7911280 	ldr	r1, [r1, r0, lsl #5]
        18f8d4:	e59d2034 	ldr	r2, [sp, #52]
        18f8d8:	e1310002 	teq	r1, r2
        18f8dc:	13a01001 	movne	r1, #1	; 0x1
        18f8e0:	158d100c 	strne	r1, [sp, #12]
        18f8e4:	1a00000a 	bne	18f914 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x448>
        18f8e8:	e59d100c 	ldr	r1, [sp, #12]
        18f8ec:	e3310000 	teq	r1, #0	; 0x0
        18f8f0:	0a000007 	beq	18f914 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x448>
        18f8f4:	e1300005 	teq	r0, r5
        18f8f8:	1a000003 	bne	18f90c <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x440>
        18f8fc:	e59d102c 	ldr	r1, [sp, #44]
        18f900:	e59d2028 	ldr	r2, [sp, #40]
        18f904:	e1520001 	cmp	r2, r1
        18f908:	ba000001 	blt	18f914 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x448>
        18f90c:	e3a01001 	mov	r1, #1	; 0x1
        18f910:	e58d1008 	str	r1, [sp, #8]
        18f914:	e2800001 	add	r0, r0, #1	; 0x1
        18f918:	e1500005 	cmp	r0, r5
        18f91c:	daffffc9 	ble	18f848 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x37c>
        18f920:	e3550000 	cmp	r5, #0	; 0x0
        18f924:	da00000a 	ble	18f954 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x488>
        18f928:	e0444005 	sub	r4, r4, r5
        18f92c:	e0842104 	add	r2, r4, r4, lsl #2
        18f930:	e0822184 	add	r2, r2, r4, lsl #3
        18f934:	e1a02102 	mov	r2, r2, lsl #2
        18f938:	e1a00006 	mov	r0, r6
        18f93c:	e28d1f4e 	add	r1, sp, #312	; 0x138
        18f940:	eb693d83 	bl	1bdef54 <$BlockMove>
        18f944:	e1a02284 	mov	r2, r4, lsl #5
        18f948:	e1a00009 	mov	r0, r9
        18f94c:	e28d1038 	add	r1, sp, #56	; 0x38
        18f950:	eb693d7f 	bl	1bdef54 <$BlockMove>
        18f954:	e59d104c 	ldr	r1, [sp, #76]
        18f958:	e58d1014 	str	r1, [sp, #20]
        18f95c:	e59d1048 	ldr	r1, [sp, #72]
        18f960:	e58d1010 	str	r1, [sp, #16]
        18f964:	e59d1014 	ldr	r1, [sp, #20]
        18f968:	e2616000 	rsb	r6, r1, #0	; 0x0
        18f96c:	e3a00000 	mov	r0, #0	; 0x0
        18f970:	e3540000 	cmp	r4, #0	; 0x0
        18f974:	da000008 	ble	18f99c <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x4d0>
        18f978:	e0801100 	add	r1, r0, r0, lsl #2
        18f97c:	e0811180 	add	r1, r1, r0, lsl #3
        18f980:	e28d2f4e 	add	r2, sp, #312	; 0x138
        18f984:	e0821101 	add	r1, r2, r1, lsl #2
        18f988:	e591101c 	ldr	r1, [r1, #28]
        18f98c:	e0816006 	add	r6, r1, r6
        18f990:	e2800001 	add	r0, r0, #1	; 0x1
        18f994:	e1500004 	cmp	r0, r4
        18f998:	bafffff6 	blt	18f978 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x4ac>
        18f99c:	e28dd004 	add	sp, sp, #4	; 0x4
        18f9a0:	eaffff05 	b	18f5bc <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0xf0>
        18f9a4:	e3570702 	cmp	r7, #524288	; 0x80000
        18f9a8:	baffff09 	blt	18f5d4 <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x108>
        18f9ac:	e59d1004 	ldr	r1, [sp, #4]
        18f9b0:	e3310000 	teq	r1, #0	; 0x0
        18f9b4:	0a000008 	beq	18f9dc <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x510>
        18f9b8:	e3a00000 	mov	r0, #0	; 0x0
        18f9bc:	e59b101c 	ldr	r1, [fp, #28]
        18f9c0:	e5810000 	str	r0, [r1]
        18f9c4:	e59b0004 	ldr	r0, [fp, #4]
        18f9c8:	e5900002 	ldr	r0, [r0, #2]
        18f9cc:	e1a00820 	mov	r0, r0, lsr #16
        18f9d0:	e2400001 	sub	r0, r0, #1	; 0x1
        18f9d4:	e1a00800 	mov	r0, r0, lsl #16
        18f9d8:	ea000013 	b	18fa2c <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x560>
        18f9dc:	e59b200c 	ldr	r2, [fp, #12]
        18f9e0:	e3520000 	cmp	r2, #0	; 0x0
        18f9e4:	da000008 	ble	18fa0c <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x540>
        18f9e8:	e59d0028 	ldr	r0, [sp, #40]
        18f9ec:	e59d2030 	ldr	r2, [sp, #48]
        18f9f0:	e0800802 	add	r0, r0, r2, lsl #16
        18f9f4:	e59b101c 	ldr	r1, [fp, #28]
        18f9f8:	e5810000 	str	r0, [r1]
        18f9fc:	e59d0024 	ldr	r0, [sp, #36]
        18fa00:	e59d102c 	ldr	r1, [sp, #44]
        18fa04:	e0800801 	add	r0, r0, r1, lsl #16
        18fa08:	ea000007 	b	18fa2c <HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7+0x560>
        18fa0c:	e59d0024 	ldr	r0, [sp, #36]
        18fa10:	e59d102c 	ldr	r1, [sp, #44]
        18fa14:	e0600801 	rsb	r0, r0, r1, lsl #16
        18fa18:	e59b101c 	ldr	r1, [fp, #28]
        18fa1c:	e5810000 	str	r0, [r1]
        18fa20:	e59d0028 	ldr	r0, [sp, #40]
        18fa24:	e59d2030 	ldr	r2, [sp, #48]
        18fa28:	e0600802 	rsb	r0, r0, r2, lsl #16
        18fa2c:	e59b1020 	ldr	r1, [fp, #32]
        18fa30:	e5810000 	str	r0, [r1]
        18fa34:	e3a00001 	mov	r0, #1	; 0x1
        18fa38:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)
 * Address: 00193e9c
 */
HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char) {
    /*
        193e9c:	e1a0c00d 	mov	ip, sp
        193ea0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        193ea4:	e24cb004 	sub	fp, ip, #4	; 0x4
        193ea8:	e1a05001 	mov	r5, r1
        193eac:	e1a06002 	mov	r6, r2
        193eb0:	e1a04003 	mov	r4, r3
        193eb4:	e59b0004 	ldr	r0, [fp, #4]
        193eb8:	e20070ff 	and	r7, r0, #255	; 0xff
        193ebc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        193ec0:	e59f012c 	ldr	r0, [pc, #12c]	; 193ff4 <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0x158>
        193ec4:	eb696e38 	bl	1bef7ac <$SetPort(GrafPort *)>
        193ec8:	e1a08000 	mov	r8, r0
        193ecc:	e59f1124 	ldr	r1, [pc, #124]	; 193ff8 <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0x15c>
        193ed0:	e59f0124 	ldr	r0, [pc, #124]	; 193ffc <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0x160>
        193ed4:	e5900000 	ldr	r0, [r0]
        193ed8:	eb68d99e 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        193edc:	eb68b89a 	bl	1bc214c <$AllocateRefHandle(long)>
        193ee0:	e58d0008 	str	r0, [sp, #8]
        193ee4:	e1a00106 	mov	r0, r6, lsl #2
        193ee8:	eb68b897 	bl	1bc214c <$AllocateRefHandle(long)>
        193eec:	e58d0000 	str	r0, [sp]
        193ef0:	e1a0200d 	mov	r2, sp
        193ef4:	e59f1104 	ldr	r1, [pc, #104]	; 194000 <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0x164>
        193ef8:	e28d0008 	add	r0, sp, #8	; 0x8
        193efc:	eb68c919 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        193f00:	e59d0000 	ldr	r0, [sp]
        193f04:	eb68bcac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193f08:	e3370000 	teq	r7, #0	; 0x0
        193f0c:	03a00002 	moveq	r0, #2	; 0x2
        193f10:	13a0001a 	movne	r0, #26	; 0x1a
        193f14:	eb68b88c 	bl	1bc214c <$AllocateRefHandle(long)>
        193f18:	e58d0004 	str	r0, [sp, #4]
        193f1c:	e28d2004 	add	r2, sp, #4	; 0x4
        193f20:	e59f10dc 	ldr	r1, [pc, #dc]	; 194004 <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0x168>
        193f24:	e28d0008 	add	r0, sp, #8	; 0x8
        193f28:	eb68c90e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        193f2c:	e59d0004 	ldr	r0, [sp, #4]
        193f30:	eb68bca1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193f34:	e24dd010 	sub	sp, sp, #16	; 0x10
        193f38:	e1a0000d 	mov	r0, sp
        193f3c:	e3a0185e 	mov	r1, #6160384	; 0x5e0000
        193f40:	e281141a 	add	r1, r1, #436207616	; 0x1a000000
        193f44:	eb6927d1 	bl	1bdde90 <$TimeFromNow>
        193f48:	e28d0008 	add	r0, sp, #8	; 0x8
        193f4c:	e89d5000 	ldmia	sp, {ip, lr}
        193f50:	e8805000 	stmia	r0, {ip, lr}
        193f54:	e28d0018 	add	r0, sp, #24	; 0x18
        193f58:	eb697658 	bl	1bf18c0 <$FOpenX>
        193f5c:	e59f90a4 	ldr	r9, [pc, #a4]	; 194008 <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0x16c>
        193f60:	e24dd008 	sub	sp, sp, #8	; 0x8
        193f64:	eb68fe9a 	bl	1bd39d4 <$GetGlobals>
        193f68:	eb6869fc 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
        193f6c:	e1a00004 	mov	r0, r4
        193f70:	eb6923ad 	bl	1bdce2c <$Sleep(unsigned long)>
        193f74:	eb68fe96 	bl	1bd39d4 <$GetGlobals>
        193f78:	eb685d9d 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
        193f7c:	e1a00005 	mov	r0, r5
        193f80:	eb66b866 	bl	1b42120 <TPrinter::$IsProblemResolved(void)>
        193f84:	e3300000 	teq	r0, #0	; 0x0
        193f88:	13a00000 	movne	r0, #0	; 0x0
        193f8c:	03a00001 	moveq	r0, #1	; 0x1
        193f90:	e20060ff 	and	r6, r0, #255	; 0xff
        193f94:	e1a0000d 	mov	r0, sp
        193f98:	eb68fe8e 	bl	1bd39d8 <$GetGlobalTime>
        193f9c:	e28d1010 	add	r1, sp, #16	; 0x10
        193fa0:	e1a0000d 	mov	r0, sp
        193fa4:	eb693437 	bl	1be1088 <$CompCompare>
        193fa8:	e3500000 	cmp	r0, #0	; 0x0
        193fac:	d3a00000 	movle	r0, #0	; 0x0
        193fb0:	c3a00001 	movgt	r0, #1	; 0x1
        193fb4:	e20070ff 	and	r7, r0, #255	; 0xff
        193fb8:	e1a01009 	mov	r1, r9
        193fbc:	e28d0020 	add	r0, sp, #32	; 0x20
        193fc0:	e3a02000 	mov	r2, #0	; 0x0
        193fc4:	eb68c0a7 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        193fc8:	e3300002 	teq	r0, #2	; 0x2
        193fcc:	13a00000 	movne	r0, #0	; 0x0
        193fd0:	03a00001 	moveq	r0, #1	; 0x1
        193fd4:	e20000ff 	and	r0, r0, #255	; 0xff
        193fd8:	e28dd008 	add	sp, sp, #8	; 0x8
        193fdc:	e3360000 	teq	r6, #0	; 0x0
        193fe0:	03370000 	teqeq	r7, #0	; 0x0
        193fe4:	1a000008 	bne	19400c <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0x170>
        193fe8:	e3300000 	teq	r0, #0	; 0x0
        193fec:	1affffdb 	bne	193f60 <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0xc4>
        193ff0:	ea000008 	b	194018 <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0x17c>
        193ff4:	0c1067cc 	ldceq	7, cr6, [r0], -#816
        193ff8:	00684008 	rsbeq	r4, r8, r8
        193ffc:	0c101934 	ldceq	9, cr1, [r0], -#208
        194000:	00682c88 	rsbeq	r2, r8, r8, lsl #25
        194004:	00684338 	rsbeq	r4, r8, r8, lsr r3
        194008:	00684e38 	rsbeq	r4, r8, r8, lsr lr
        19400c:	e3300000 	teq	r0, #0	; 0x0
        194010:	128d0018 	addne	r0, sp, #24	; 0x18
        194014:	1b6506aa 	blne	1ad5ac4 <$FCloseX>
        194018:	e1a00008 	mov	r0, r8
        19401c:	eb696de2 	bl	1bef7ac <$SetPort(GrafPort *)>
        194020:	e3360000 	teq	r6, #0	; 0x0
        194024:	1a000006 	bne	194044 <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0x1a8>
        194028:	e59f103c 	ldr	r1, [pc, #3c]	; 19406c <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0x1d0>
        19402c:	e28d0018 	add	r0, sp, #24	; 0x18
        194030:	e3a02000 	mov	r2, #0	; 0x0
        194034:	eb68c08b 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        194038:	e2500002 	subs	r0, r0, #2	; 0x2
        19403c:	13a00001 	movne	r0, #1	; 0x1
        194040:	e20060ff 	and	r6, r0, #255	; 0xff
        194044:	e3360000 	teq	r6, #0	; 0x0
        194048:	0a000002 	beq	194058 <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0x1bc>
        19404c:	e3370000 	teq	r7, #0	; 0x0
        194050:	03a04000 	moveq	r4, #0	; 0x0
        194054:	0a000000 	beq	19405c <HandleProblem(RefVar const &, TPrinter *, long, unsigned long, unsigned char)+0x1c0>
        194058:	e3a04001 	mov	r4, #1	; 0x1
        19405c:	e59d0018 	ldr	r0, [sp, #24]
        194060:	eb68bc55 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        194064:	e1a00004 	mov	r0, r4
        194068:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        19406c:	00682de0 	rsbeq	r2, r8, r0, ror #27
    */
}

/**
 * Symbol: HandleUnit(TArray *)
 * Address: 0019d6a8
 */
HandleUnit(TArray *) {
    /*
        19d6a8:	e1a0c00d 	mov	ip, sp
        19d6ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19d6b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        19d6b4:	e1a04000 	mov	r4, r0
        19d6b8:	e3a05000 	mov	r5, #0	; 0x0
        19d6bc:	e3a00000 	mov	r0, #0	; 0x0
        19d6c0:	e52d006c 	str	r0, [sp, -#108]!
        19d6c4:	e28d0008 	add	r0, sp, #8	; 0x8
        19d6c8:	eb6854a9 	bl	1bb2974 <$setjmp>
        19d6cc:	e3300000 	teq	r0, #0	; 0x0
        19d6d0:	1a000005 	bne	19d6ec <HandleUnit(TArray *)+0x44>
        19d6d4:	e1a0000d 	mov	r0, sp
        19d6d8:	eb690a67 	bl	1be007c <$AddExceptionHandler>
        19d6dc:	e1a00004 	mov	r0, r4
        19d6e0:	eb6458c4 	bl	1ab39f8 <$HandleUnitList(TArray *)>
        19d6e4:	e1a05000 	mov	r5, r0
        19d6e8:	ea00000b 	b	19d71c <HandleUnit(TArray *)+0x74>
        19d6ec:	e59d0060 	ldr	r0, [sp, #96]
        19d6f0:	e59f101c 	ldr	r1, [pc, #1c]	; 19d714 <HandleUnit(TArray *)+0x6c>
        19d6f4:	e5911000 	ldr	r1, [r1]
        19d6f8:	eb6916a5 	bl	1be3194 <$Subexception>
        19d6fc:	e3300000 	teq	r0, #0	; 0x0
        19d700:	e1a0000d 	mov	r0, sp
        19d704:	0a000003 	beq	19d718 <HandleUnit(TArray *)+0x70>
        19d708:	e2800060 	add	r0, r0, #96	; 0x60
        19d70c:	eb647168 	bl	1ab9cb4 <$SafeExceptionNotify(Exception *)>
        19d710:	ea000001 	b	19d71c <HandleUnit(TArray *)+0x74>
        19d714:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        19d718:	eb69128d 	bl	1be2154 <$NextHandler>
        19d71c:	e1a0000d 	mov	r0, sp
        19d720:	eb690e64 	bl	1be10b8 <$ExitHandler>
        19d724:	e1a00005 	mov	r0, r5
        19d728:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: HandleUnitList(TArray *)
 * Address: 0019d72c
 */
HandleUnitList(TArray *) {
    /*
        19d72c:	e1a0c00d 	mov	ip, sp
        19d730:	e92ddff1 	stmdb	sp!, {r0, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        19d734:	e24cb004 	sub	fp, ip, #4	; 0x4
        19d738:	e3a00000 	mov	r0, #0	; 0x0
        19d73c:	e52d0028 	str	r0, [sp, -#40]!
        19d740:	e59f51f4 	ldr	r5, [pc, #1f4]	; 19d93c <HandleUnitList(TArray *)+0x210>
        19d744:	e5c50038 	strb	r0, [r5, #56]
        19d748:	e3a07000 	mov	r7, #0	; 0x0
        19d74c:	e51b002c 	ldr	r0, [fp, -#44]
        19d750:	e590000c 	ldr	r0, [r0, #12]
        19d754:	e3500000 	cmp	r0, #0	; 0x0
        19d758:	9a0000d6 	bls	19dab8 <HandleUnitList(TArray *)+0x38c>
        19d75c:	e59f01dc 	ldr	r0, [pc, #1dc]	; 19d940 <HandleUnitList(TArray *)+0x214>
        19d760:	e58d0024 	str	r0, [sp, #36]
        19d764:	e24d00b0 	sub	r0, sp, #176	; 0xb0
        19d768:	e2801008 	add	r1, r0, #8	; 0x8
        19d76c:	e58d1020 	str	r1, [sp, #32]
        19d770:	e59f11cc 	ldr	r1, [pc, #1cc]	; 19d944 <HandleUnitList(TArray *)+0x218>
        19d774:	e2800060 	add	r0, r0, #96	; 0x60
        19d778:	e58d0018 	str	r0, [sp, #24]
        19d77c:	e58d101c 	str	r1, [sp, #28]
        19d780:	e59f01c0 	ldr	r0, [pc, #1c0]	; 19d948 <HandleUnitList(TArray *)+0x21c>
        19d784:	e58d0014 	str	r0, [sp, #20]
        19d788:	e59f01bc 	ldr	r0, [pc, #1bc]	; 19d94c <HandleUnitList(TArray *)+0x220>
        19d78c:	e58d0010 	str	r0, [sp, #16]
        19d790:	e59f01b8 	ldr	r0, [pc, #1b8]	; 19d950 <HandleUnitList(TArray *)+0x224>
        19d794:	e58d000c 	str	r0, [sp, #12]
        19d798:	e1a01007 	mov	r1, r7
        19d79c:	e51b202c 	ldr	r2, [fp, -#44]
        19d7a0:	e1a00002 	mov	r0, r2
        19d7a4:	e5922000 	ldr	r2, [r2]
        19d7a8:	e1a0e00f 	mov	lr, pc
        19d7ac:	e282f01c 	add	pc, r2, #28	; 0x1c
        19d7b0:	e5906000 	ldr	r6, [r0]
        19d7b4:	e585603c 	str	r6, [r5, #60]
        19d7b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        19d7bc:	e5969008 	ldr	r9, [r6, #8]
        19d7c0:	e59fa174 	ldr	sl, [pc, #174]	; 19d93c <HandleUnitList(TArray *)+0x210>
        19d7c4:	e1a01009 	mov	r1, r9
        19d7c8:	e59a0014 	ldr	r0, [sl, #20]
        19d7cc:	eb64503a 	bl	1ab18bc <TRecognizerList::$FindRecognizer(unsigned long)>
        19d7d0:	e1a08000 	mov	r8, r0
        19d7d4:	e5901000 	ldr	r1, [r0]
        19d7d8:	e1a0e00f 	mov	lr, pc
        19d7dc:	e281f010 	add	pc, r1, #16	; 0x10
        19d7e0:	e1a04000 	mov	r4, r0
        19d7e4:	e596101c 	ldr	r1, [r6, #28]
        19d7e8:	e1a00005 	mov	r0, r5
        19d7ec:	e58d1000 	str	r1, [sp]
        19d7f0:	eb64713e 	bl	1ab9cf0 <TRecognitionManager::$SetNextClick(unsigned long)>
        19d7f4:	e5daa01c 	ldrb	sl, [sl, #28]
        19d7f8:	e1a00008 	mov	r0, r8
        19d7fc:	e3a01002 	mov	r1, #2	; 0x2
        19d800:	e5982000 	ldr	r2, [r8]
        19d804:	e1a0e00f 	mov	lr, pc
        19d808:	e282f018 	add	pc, r2, #24	; 0x18
        19d80c:	e3300000 	teq	r0, #0	; 0x0
        19d810:	133a0000 	teqne	sl, #0	; 0x0
        19d814:	0a00000f 	beq	19d858 <HandleUnitList(TArray *)+0x12c>
        19d818:	e1a00006 	mov	r0, r6
        19d81c:	e3a01000 	mov	r1, #0	; 0x0
        19d820:	e5962000 	ldr	r2, [r6]
        19d824:	e1a0e00f 	mov	lr, pc
        19d828:	e282f040 	add	pc, r2, #64	; 0x40
        19d82c:	e5901034 	ldr	r1, [r0, #52]
        19d830:	e5900040 	ldr	r0, [r0, #64]
        19d834:	e280001e 	add	r0, r0, #30	; 0x1e
        19d838:	e1510000 	cmp	r1, r0
        19d83c:	2a000005 	bcs	19d858 <HandleUnitList(TArray *)+0x12c>
        19d840:	e3a04000 	mov	r4, #0	; 0x0
        19d844:	e1a00006 	mov	r0, r6
        19d848:	eb63bf8c 	bl	1a8d680 <$ClicksOnlyArea(TUnit *)>
        19d84c:	e3300000 	teq	r0, #0	; 0x0
        19d850:	13a00001 	movne	r0, #1	; 0x1
        19d854:	15c50038 	strneb	r0, [r5, #56]
        19d858:	e24dd040 	sub	sp, sp, #64	; 0x40
        19d85c:	e1a01006 	mov	r1, r6
        19d860:	e28d0004 	add	r0, sp, #4	; 0x4
        19d864:	e3a02000 	mov	r2, #0	; 0x0
        19d868:	eb63a6dd 	bl	1a873e4 <TUnitPublic::$__ct(TUnit *, unsigned long)>
        19d86c:	e28d0004 	add	r0, sp, #4	; 0x4
        19d870:	eb647109 	bl	1ab9c9c <TUnitPublic::$RequiredMask(void)>
        19d874:	e3a0a000 	mov	sl, #0	; 0x0
        19d878:	e58d0000 	str	r0, [sp]
        19d87c:	e28d1048 	add	r1, sp, #72	; 0x48
        19d880:	e28d0004 	add	r0, sp, #4	; 0x4
        19d884:	eb63b339 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        19d888:	e28d1048 	add	r1, sp, #72	; 0x48
        19d88c:	e1a00005 	mov	r0, r5
        19d890:	eb6464a6 	bl	1ab6b30 <TRecognitionManager::$ModalRecognitionOK(TRect &)>
        19d894:	e3300000 	teq	r0, #0	; 0x0
        19d898:	0a000007 	beq	19d8bc <HandleUnitList(TArray *)+0x190>
        19d89c:	e334000b 	teq	r4, #11	; 0xb
        19d8a0:	1a000008 	bne	19d8c8 <HandleUnitList(TArray *)+0x19c>
        19d8a4:	e28d1004 	add	r1, sp, #4	; 0x4
        19d8a8:	e59d0068 	ldr	r0, [sp, #104]
        19d8ac:	e5900000 	ldr	r0, [r0]
        19d8b0:	eb64c397 	bl	1ace714 <TRootView::$DoCaretClick(TUnitPublic *)>
        19d8b4:	e3300000 	teq	r0, #0	; 0x0
        19d8b8:	0a000002 	beq	19d8c8 <HandleUnitList(TArray *)+0x19c>
        19d8bc:	e3a04000 	mov	r4, #0	; 0x0
        19d8c0:	e3a00001 	mov	r0, #1	; 0x1
        19d8c4:	e5c50038 	strb	r0, [r5, #56]
        19d8c8:	e59d0054 	ldr	r0, [sp, #84]
        19d8cc:	e59d1040 	ldr	r1, [sp, #64]
        19d8d0:	eb649647 	bl	1ac31f4 <StrokeCentral::$BeforeLastFlush(long)>
        19d8d4:	e3300000 	teq	r0, #0	; 0x0
        19d8d8:	13a04000 	movne	r4, #0	; 0x0
        19d8dc:	1a00002e 	bne	19d99c <HandleUnitList(TArray *)+0x270>
        19d8e0:	e3340000 	teq	r4, #0	; 0x0
        19d8e4:	0a00002c 	beq	19d99c <HandleUnitList(TArray *)+0x270>
        19d8e8:	e28d1004 	add	r1, sp, #4	; 0x4
        19d8ec:	e1a00008 	mov	r0, r8
        19d8f0:	e5982000 	ldr	r2, [r8]
        19d8f4:	e1a0e00f 	mov	lr, pc
        19d8f8:	e282f040 	add	pc, r2, #64	; 0x40
        19d8fc:	e1b04000 	movs	r4, r0
        19d900:	0a000025 	beq	19d99c <HandleUnitList(TArray *)+0x270>
        19d904:	e3a00000 	mov	r0, #0	; 0x0
        19d908:	e52d006c 	str	r0, [sp, -#108]!
        19d90c:	e59d00d0 	ldr	r0, [sp, #208]
        19d910:	eb685417 	bl	1bb2974 <$setjmp>
        19d914:	e3300000 	teq	r0, #0	; 0x0
        19d918:	1a00000d 	bne	19d954 <HandleUnitList(TArray *)+0x228>
        19d91c:	e1a0000d 	mov	r0, sp
        19d920:	eb6909d5 	bl	1be007c <$AddExceptionHandler>
        19d924:	e59d206c 	ldr	r2, [sp, #108]
        19d928:	e28d1070 	add	r1, sp, #112	; 0x70
        19d92c:	e1a00004 	mov	r0, r4
        19d930:	eb64016a 	bl	1a9dee0 <$PostAndDoCommand(unsigned long, TUnitPublic *, TUnitPublic *)>
        19d934:	e1a0a000 	mov	sl, r0
        19d938:	ea000010 	b	19d980 <HandleUnitList(TArray *)+0x254>
        19d93c:	0c106e88 	ldceq	14, cr6, [r0], -#544
        19d940:	0c101934 	ldceq	9, cr1, [r0], -#208
        19d944:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        19d948:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        19d94c:	0c1018cc 	ldceq	8, cr1, [r0], -#816
        19d950:	0c10187c 	ldceq	8, cr1, [r0], -#496
        19d954:	e59d0060 	ldr	r0, [sp, #96]
        19d958:	e59d10cc 	ldr	r1, [sp, #204]
        19d95c:	e5911000 	ldr	r1, [r1]
        19d960:	eb69160b 	bl	1be3194 <$Subexception>
        19d964:	e3300000 	teq	r0, #0	; 0x0
        19d968:	0a000002 	beq	19d978 <HandleUnitList(TArray *)+0x24c>
        19d96c:	e59d00c8 	ldr	r0, [sp, #200]
        19d970:	eb6470cf 	bl	1ab9cb4 <$SafeExceptionNotify(Exception *)>
        19d974:	ea000001 	b	19d980 <HandleUnitList(TArray *)+0x254>
        19d978:	e1a0000d 	mov	r0, sp
        19d97c:	eb6911f4 	bl	1be2154 <$NextHandler>
        19d980:	e1a0000d 	mov	r0, sp
        19d984:	eb690dcb 	bl	1be10b8 <$ExitHandler>
        19d988:	e28dd06c 	add	sp, sp, #108	; 0x6c
        19d98c:	e59d0058 	ldr	r0, [sp, #88]
        19d990:	e5900000 	ldr	r0, [r0]
        19d994:	e3a01001 	mov	r1, #1	; 0x1
        19d998:	e5c01014 	strb	r1, [r0, #20]
        19d99c:	e595003c 	ldr	r0, [r5, #60]
        19d9a0:	e1300006 	teq	r0, r6
        19d9a4:	1a000038 	bne	19da8c <HandleUnitList(TArray *)+0x360>
        19d9a8:	e334000b 	teq	r4, #11	; 0xb
        19d9ac:	1a000004 	bne	19d9c4 <HandleUnitList(TArray *)+0x298>
        19d9b0:	e59d0054 	ldr	r0, [sp, #84]
        19d9b4:	ebfe9b90 	bl	1447fc <StrokeCentral::CurrentStroke(void)>
        19d9b8:	e3300000 	teq	r0, #0	; 0x0
        19d9bc:	03a00001 	moveq	r0, #1	; 0x1
        19d9c0:	0a000000 	beq	19d9c8 <HandleUnitList(TArray *)+0x29c>
        19d9c4:	e3a00000 	mov	r0, #0	; 0x0
        19d9c8:	e20080ff 	and	r8, r0, #255	; 0xff
        19d9cc:	e334000b 	teq	r4, #11	; 0xb
        19d9d0:	03380000 	teqeq	r8, #0	; 0x0
        19d9d4:	1a000004 	bne	19d9ec <HandleUnitList(TArray *)+0x2c0>
        19d9d8:	e1a00006 	mov	r0, r6
        19d9dc:	eb63bf27 	bl	1a8d680 <$ClicksOnlyArea(TUnit *)>
        19d9e0:	e3300000 	teq	r0, #0	; 0x0
        19d9e4:	13a00001 	movne	r0, #1	; 0x1
        19d9e8:	15c50038 	strneb	r0, [r5, #56]
        19d9ec:	e33a0000 	teq	sl, #0	; 0x0
        19d9f0:	1a000004 	bne	19da08 <HandleUnitList(TArray *)+0x2dc>
        19d9f4:	e3340031 	teq	r4, #49	; 0x31
        19d9f8:	0a000004 	beq	19da10 <HandleUnitList(TArray *)+0x2e4>
        19d9fc:	e5d50038 	ldrb	r0, [r5, #56]
        19da00:	e3300000 	teq	r0, #0	; 0x0
        19da04:	0a000020 	beq	19da8c <HandleUnitList(TArray *)+0x360>
        19da08:	e3340000 	teq	r4, #0	; 0x0
        19da0c:	0a000008 	beq	19da34 <HandleUnitList(TArray *)+0x308>
        19da10:	e51fa0dc 	ldr	sl, [pc, #ffffff24]	; 19d93c <HandleUnitList(TArray *)+0x210>
        19da14:	e1a01009 	mov	r1, r9
        19da18:	e59a0014 	ldr	r0, [sl, #20]
        19da1c:	eb644fa6 	bl	1ab18bc <TRecognizerList::$FindRecognizer(unsigned long)>
        19da20:	e3a01001 	mov	r1, #1	; 0x1
        19da24:	e5902000 	ldr	r2, [r0]
        19da28:	e1a0e00f 	mov	lr, pc
        19da2c:	e282f018 	add	pc, r2, #24	; 0x18
        19da30:	e5ca001c 	strb	r0, [sl, #28]
        19da34:	e3380000 	teq	r8, #0	; 0x0
        19da38:	1a000008 	bne	19da60 <HandleUnitList(TArray *)+0x334>
        19da3c:	e28d0004 	add	r0, sp, #4	; 0x4
        19da40:	eb6432cd 	bl	1aaa57c <TUnitPublic::$Cleanup(void)>
        19da44:	e28d0004 	add	r0, sp, #4	; 0x4
        19da48:	eb63f4b7 	bl	1a9ad2c <TUnitPublic::$Invalidate(void)>
        19da4c:	e1a01006 	mov	r1, r6
        19da50:	e59d0050 	ldr	r0, [sp, #80]
        19da54:	e5900000 	ldr	r0, [r0]
        19da58:	e3a02101 	mov	r2, #1073741824	; 0x40000000
        19da5c:	eb670d98 	bl	1b610c4 <TController::$MarkUnits(TUnit *, unsigned long)>
        19da60:	e3a00001 	mov	r0, #1	; 0x1
        19da64:	e58d0044 	str	r0, [sp, #68]
        19da68:	e5d50038 	ldrb	r0, [r5, #56]
        19da6c:	e3300000 	teq	r0, #0	; 0x0
        19da70:	0a000005 	beq	19da8c <HandleUnitList(TArray *)+0x360>
        19da74:	e1a00005 	mov	r0, r5
        19da78:	e3a01000 	mov	r1, #0	; 0x0
        19da7c:	eb64708d 	bl	1ab9cb8 <TRecognitionManager::$SaveClickView(TView *)>
        19da80:	e59d0050 	ldr	r0, [sp, #80]
        19da84:	e5900000 	ldr	r0, [r0]
        19da88:	eb6715d9 	bl	1b631f4 <TController::$TriggerRecognition(void)>
        19da8c:	e3a00000 	mov	r0, #0	; 0x0
        19da90:	e585003c 	str	r0, [r5, #60]
        19da94:	e28d0004 	add	r0, sp, #4	; 0x4
        19da98:	e3a01000 	mov	r1, #0	; 0x0
        19da9c:	eb63aa6a 	bl	1a8844c <TUnitPublic::$__dt(void)>
        19daa0:	e28dd044 	add	sp, sp, #68	; 0x44
        19daa4:	e2877001 	add	r7, r7, #1	; 0x1
        19daa8:	e51b002c 	ldr	r0, [fp, -#44]
        19daac:	e590000c 	ldr	r0, [r0, #12]
        19dab0:	e1500007 	cmp	r0, r7
        19dab4:	8affff37 	bhi	19d798 <HandleUnitList(TArray *)+0x6c>
        19dab8:	e3a00000 	mov	r0, #0	; 0x0
        19dabc:	e59f1008 	ldr	r1, [pc, #8]	; 19dacc <HandleUnitList(TArray *)+0x3a0>
        19dac0:	e5c10000 	strb	r0, [r1]
        19dac4:	e49d0028 	ldr	r0, [sp], #40
        19dac8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        19dacc:	0c101948 	ldceq	9, cr1, [r0], -#288
    */
}

/**
 * Symbol: HandleExpiredStroke(TUnit *)
 * Address: 0019dad0
 */
HandleExpiredStroke(TUnit *) {
    /*
        19dad0:	e1a0c00d 	mov	ip, sp
        19dad4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19dad8:	e24cb004 	sub	fp, ip, #4	; 0x4
        19dadc:	e1a04000 	mov	r4, r0
        19dae0:	e3a00000 	mov	r0, #0	; 0x0
        19dae4:	e52d006c 	str	r0, [sp, -#108]!
        19dae8:	e28d0008 	add	r0, sp, #8	; 0x8
        19daec:	eb6853a0 	bl	1bb2974 <$setjmp>
        19daf0:	e3300000 	teq	r0, #0	; 0x0
        19daf4:	1a000013 	bne	19db48 <HandleExpiredStroke(TUnit *)+0x78>
        19daf8:	e1a0000d 	mov	r0, sp
        19dafc:	eb69095e 	bl	1be007c <$AddExceptionHandler>
        19db00:	e3a00001 	mov	r0, #1	; 0x1
        19db04:	e59f1024 	ldr	r1, [pc, #24]	; 19db30 <HandleExpiredStroke(TUnit *)+0x60>
        19db08:	e5c1001c 	strb	r0, [r1, #28]
        19db0c:	e59f0020 	ldr	r0, [pc, #20]	; 19db34 <HandleExpiredStroke(TUnit *)+0x64>
        19db10:	e5900000 	ldr	r0, [r0]
        19db14:	e5d00021 	ldrb	r0, [r0, #33]
        19db18:	e3300000 	teq	r0, #0	; 0x0
        19db1c:	1a000006 	bne	19db3c <HandleExpiredStroke(TUnit *)+0x6c>
        19db20:	e1a01004 	mov	r1, r4
        19db24:	e59f000c 	ldr	r0, [pc, #c]	; 19db38 <HandleExpiredStroke(TUnit *)+0x68>
        19db28:	ebfe9cb2 	bl	144df8 <StrokeCentral::AddExpiredStroke(TStrokeUnit *)>
        19db2c:	ea000011 	b	19db78 <HandleExpiredStroke(TUnit *)+0xa8>
        19db30:	0c106e88 	ldceq	14, cr6, [r0], -#544
        19db34:	0c101880 	ldceq	8, cr1, [r0], -#512
        19db38:	0c1018cc 	ldceq	8, cr1, [r0], -#816
        19db3c:	e1a00004 	mov	r0, r4
        19db40:	eb64789a 	bl	1abbdb0 <$UpdateStroke(TUnit *)>
        19db44:	ea00000b 	b	19db78 <HandleExpiredStroke(TUnit *)+0xa8>
        19db48:	e59d0060 	ldr	r0, [sp, #96]
        19db4c:	e59f101c 	ldr	r1, [pc, #1c]	; 19db70 <HandleExpiredStroke(TUnit *)+0xa0>
        19db50:	e5911000 	ldr	r1, [r1]
        19db54:	eb69158e 	bl	1be3194 <$Subexception>
        19db58:	e3300000 	teq	r0, #0	; 0x0
        19db5c:	e1a0000d 	mov	r0, sp
        19db60:	0a000003 	beq	19db74 <HandleExpiredStroke(TUnit *)+0xa4>
        19db64:	e2800060 	add	r0, r0, #96	; 0x60
        19db68:	eb647051 	bl	1ab9cb4 <$SafeExceptionNotify(Exception *)>
        19db6c:	ea000001 	b	19db78 <HandleExpiredStroke(TUnit *)+0xa8>
        19db70:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        19db74:	eb691176 	bl	1be2154 <$NextHandler>
        19db78:	e1a0000d 	mov	r0, sp
        19db7c:	eb690d4d 	bl	1be10b8 <$ExitHandler>
        19db80:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: HandleGetContextUnits(TUnit *, long)
 * Address: 0019dbd8
 */
HandleGetContextUnits(TUnit *, long) {
    /*
        19dbd8:	e1a0c00d 	mov	ip, sp
        19dbdc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        19dbe0:	e24cb004 	sub	fp, ip, #4	; 0x4
        19dbe4:	e1a05000 	mov	r5, r0
        19dbe8:	e1a04001 	mov	r4, r1
        19dbec:	e3a06000 	mov	r6, #0	; 0x0
        19dbf0:	e3a00000 	mov	r0, #0	; 0x0
        19dbf4:	e52d006c 	str	r0, [sp, -#108]!
        19dbf8:	e28d0008 	add	r0, sp, #8	; 0x8
        19dbfc:	eb68535c 	bl	1bb2974 <$setjmp>
        19dc00:	e3300000 	teq	r0, #0	; 0x0
        19dc04:	1a000024 	bne	19dc9c <HandleGetContextUnits(TUnit *, long)+0xc4>
        19dc08:	e1a0000d 	mov	r0, sp
        19dc0c:	eb69091a 	bl	1be007c <$AddExceptionHandler>
        19dc10:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        19dc14:	e1a01005 	mov	r1, r5
        19dc18:	e1a0000d 	mov	r0, sp
        19dc1c:	e3a02000 	mov	r2, #0	; 0x0
        19dc20:	eb63a5ef 	bl	1a873e4 <TUnitPublic::$__ct(TUnit *, unsigned long)>
        19dc24:	e1a0000d 	mov	r0, sp
        19dc28:	e3a01402 	mov	r1, #33554432	; 0x2000000
        19dc2c:	e2411c02 	sub	r1, r1, #512	; 0x200
        19dc30:	eb644f22 	bl	1ab18c0 <TUnitPublic::$FindView(unsigned long)>
        19dc34:	e1b01000 	movs	r1, r0
        19dc38:	0a000011 	beq	19dc84 <HandleGetContextUnits(TUnit *, long)+0xac>
        19dc3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        19dc40:	e28d2004 	add	r2, sp, #4	; 0x4
        19dc44:	e3a00014 	mov	r0, #20	; 0x14
        19dc48:	eb6421bc 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        19dc4c:	eb68913e 	bl	1bc214c <$AllocateRefHandle(long)>
        19dc50:	e1a02004 	mov	r2, r4
        19dc54:	e58d0000 	str	r0, [sp]
        19dc58:	e1a0000d 	mov	r0, sp
        19dc5c:	e3a01000 	mov	r1, #0	; 0x0
        19dc60:	eb6421c0 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        19dc64:	e59f002c 	ldr	r0, [pc, #2c]	; 19dc98 <HandleGetContextUnits(TUnit *, long)+0xc0>
        19dc68:	e5900000 	ldr	r0, [r0]
        19dc6c:	e1a0100d 	mov	r1, sp
        19dc70:	eb63caf0 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        19dc74:	e1a06000 	mov	r6, r0
        19dc78:	e59d0000 	ldr	r0, [sp]
        19dc7c:	eb68954e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        19dc80:	e28dd004 	add	sp, sp, #4	; 0x4
        19dc84:	e1a0000d 	mov	r0, sp
        19dc88:	e3a01000 	mov	r1, #0	; 0x0
        19dc8c:	eb63a9ee 	bl	1a8844c <TUnitPublic::$__dt(void)>
        19dc90:	e28dd03c 	add	sp, sp, #60	; 0x3c
        19dc94:	ea000007 	b	19dcb8 <HandleGetContextUnits(TUnit *, long)+0xe0>
        19dc98:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        19dc9c:	e59d0060 	ldr	r0, [sp, #96]
        19dca0:	e59f1020 	ldr	r1, [pc, #20]	; 19dcc8 <HandleGetContextUnits(TUnit *, long)+0xf0>
        19dca4:	e5911000 	ldr	r1, [r1]
        19dca8:	eb691539 	bl	1be3194 <$Subexception>
        19dcac:	e3300000 	teq	r0, #0	; 0x0
        19dcb0:	01a0000d 	moveq	r0, sp
        19dcb4:	0b691126 	bleq	1be2154 <$NextHandler>
        19dcb8:	e1a0000d 	mov	r0, sp
        19dcbc:	eb690cfd 	bl	1be10b8 <$ExitHandler>
        19dcc0:	e1a00006 	mov	r0, r6
        19dcc4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        19dcc8:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: hor_stroke__FP9SPEC_TYPEPsT2i
 * Address: 001bcdec
 */
void globals::hor_stroke() {
    /*
        1bcdec:	e1a0c00d 	mov	ip, sp
        1bcdf0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1bcdf4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1bcdf8:	e1a05001 	mov	r5, r1
        1bcdfc:	e1a04002 	mov	r4, r2
        1bce00:	e24dd024 	sub	sp, sp, #36	; 0x24
        1bce04:	e3a01000 	mov	r1, #0	; 0x0
        1bce08:	e5906006 	ldr	r6, [r0, #6]
        1bce0c:	e1a06846 	mov	r6, r6, asr #16
        1bce10:	e5900010 	ldr	r0, [r0, #16]
        1bce14:	e5d02000 	ldrb	r2, [r0]
        1bce18:	e3320010 	teq	r2, #16	; 0x10
        1bce1c:	0a000004 	beq	1bce34 <hor_stroke__FP9SPEC_TYPEPsT2i+0x48>
        1bce20:	e2811001 	add	r1, r1, #1	; 0x1
        1bce24:	e5900010 	ldr	r0, [r0, #16]
        1bce28:	e5d02000 	ldrb	r2, [r0]
        1bce2c:	e3320010 	teq	r2, #16	; 0x10
        1bce30:	1afffffa 	bne	1bce20 <hor_stroke__FP9SPEC_TYPEPsT2i+0x34>
        1bce34:	e3530001 	cmp	r3, #1	; 0x1
        1bce38:	c3510003 	cmpgt	r1, #3	; 0x3
        1bce3c:	da000001 	ble	1bce48 <hor_stroke__FP9SPEC_TYPEPsT2i+0x5c>
        1bce40:	e3a00000 	mov	r0, #0	; 0x0
        1bce44:	ea000032 	b	1bcf14 <hor_stroke__FP9SPEC_TYPEPsT2i+0x128>
        1bce48:	e3330001 	teq	r3, #1	; 0x1
        1bce4c:	1a000001 	bne	1bce58 <hor_stroke__FP9SPEC_TYPEPsT2i+0x6c>
        1bce50:	e3510005 	cmp	r1, #5	; 0x5
        1bce54:	cafffff9 	bgt	1bce40 <hor_stroke__FP9SPEC_TYPEPsT2i+0x54>
        1bce58:	e5907004 	ldr	r7, [r0, #4]
        1bce5c:	e1a07847 	mov	r7, r7, asr #16
        1bce60:	e7950086 	ldr	r0, [r5, r6, lsl #1]
        1bce64:	e1a00840 	mov	r0, r0, asr #16
        1bce68:	e7951087 	ldr	r1, [r5, r7, lsl #1]
        1bce6c:	e1a01841 	mov	r1, r1, asr #16
        1bce70:	e0400001 	sub	r0, r0, r1
        1bce74:	eb62ca52 	bl	1a6f7c4 <$HWRAbs(int)>
        1bce78:	e1a08000 	mov	r8, r0
        1bce7c:	e7940086 	ldr	r0, [r4, r6, lsl #1]
        1bce80:	e1a00840 	mov	r0, r0, asr #16
        1bce84:	e7941087 	ldr	r1, [r4, r7, lsl #1]
        1bce88:	e1a01841 	mov	r1, r1, asr #16
        1bce8c:	e0400001 	sub	r0, r0, r1
        1bce90:	eb62ca4b 	bl	1a6f7c4 <$HWRAbs(int)>
        1bce94:	e1a09000 	mov	r9, r0
        1bce98:	e3a03005 	mov	r3, #5	; 0x5
        1bce9c:	e92d0008 	stmdb	sp!, {r3}
        1bcea0:	e1a03004 	mov	r3, r4
        1bcea4:	e1a02005 	mov	r2, r5
        1bcea8:	e1a01006 	mov	r1, r6
        1bceac:	e1a00007 	mov	r0, r7
        1bceb0:	eb65a525 	bl	1b2634c <$straight_stroke__FiT1PsT3T1>
        1bceb4:	e28dd004 	add	sp, sp, #4	; 0x4
        1bceb8:	e3300001 	teq	r0, #1	; 0x1
        1bcebc:	1a000004 	bne	1bced4 <hor_stroke__FP9SPEC_TYPEPsT2i+0xe8>
        1bcec0:	e0890189 	add	r0, r9, r9, lsl #3
        1bcec4:	e1a00080 	mov	r0, r0, lsl #1
        1bcec8:	e0881108 	add	r1, r8, r8, lsl #2
        1bcecc:	e1500081 	cmp	r0, r1, lsl #1
        1bced0:	ba00000e 	blt	1bcf10 <hor_stroke__FP9SPEC_TYPEPsT2i+0x124>
        1bced4:	e3a03004 	mov	r3, #4	; 0x4
        1bced8:	e92d0008 	stmdb	sp!, {r3}
        1bcedc:	e1a03004 	mov	r3, r4
        1bcee0:	e1a02005 	mov	r2, r5
        1bcee4:	e1a01006 	mov	r1, r6
        1bcee8:	e1a00007 	mov	r0, r7
        1bceec:	eb65a516 	bl	1b2634c <$straight_stroke__FiT1PsT3T1>
        1bcef0:	e28dd004 	add	sp, sp, #4	; 0x4
        1bcef4:	e3300001 	teq	r0, #1	; 0x1
        1bcef8:	1a000006 	bne	1bcf18 <hor_stroke__FP9SPEC_TYPEPsT2i+0x12c>
        1bcefc:	e0690209 	rsb	r0, r9, r9, lsl #4
        1bcf00:	e1a00080 	mov	r0, r0, lsl #1
        1bcf04:	e0881108 	add	r1, r8, r8, lsl #2
        1bcf08:	e1500081 	cmp	r0, r1, lsl #1
        1bcf0c:	aa000001 	bge	1bcf18 <hor_stroke__FP9SPEC_TYPEPsT2i+0x12c>
        1bcf10:	e3a00001 	mov	r0, #1	; 0x1
        1bcf14:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1bcf18:	e0870006 	add	r0, r7, r6
        1bcf1c:	e1a000c0 	mov	r0, r0, asr #1
        1bcf20:	e1a03800 	mov	r3, r0, lsl #16
        1bcf24:	e1a03843 	mov	r3, r3, asr #16
        1bcf28:	e1a08003 	mov	r8, r3
        1bcf2c:	e1a02807 	mov	r2, r7, lsl #16
        1bcf30:	e1a02842 	mov	r2, r2, asr #16
        1bcf34:	e1a01004 	mov	r1, r4
        1bcf38:	e1a00005 	mov	r0, r5
        1bcf3c:	eb65a0da 	bl	1b252ac <$iMostFarFromChord__FPsT1iT3>
        1bcf40:	e1a09000 	mov	r9, r0
        1bcf44:	e1a03806 	mov	r3, r6, lsl #16
        1bcf48:	e1a03843 	mov	r3, r3, asr #16
        1bcf4c:	e1a02008 	mov	r2, r8
        1bcf50:	e1a01004 	mov	r1, r4
        1bcf54:	e1a00005 	mov	r0, r5
        1bcf58:	eb65a0d3 	bl	1b252ac <$iMostFarFromChord__FPsT1iT3>
        1bcf5c:	e1a08000 	mov	r8, r0
        1bcf60:	e7950080 	ldr	r0, [r5, r0, lsl #1]
        1bcf64:	e1a00840 	mov	r0, r0, asr #16
        1bcf68:	e7951089 	ldr	r1, [r5, r9, lsl #1]
        1bcf6c:	e1a01841 	mov	r1, r1, asr #16
        1bcf70:	e0400001 	sub	r0, r0, r1
        1bcf74:	eb62ca12 	bl	1a6f7c4 <$HWRAbs(int)>
        1bcf78:	e1a0a000 	mov	sl, r0
        1bcf7c:	e7940088 	ldr	r0, [r4, r8, lsl #1]
        1bcf80:	e1a00840 	mov	r0, r0, asr #16
        1bcf84:	e7941089 	ldr	r1, [r4, r9, lsl #1]
        1bcf88:	e1a01841 	mov	r1, r1, asr #16
        1bcf8c:	e0400001 	sub	r0, r0, r1
        1bcf90:	eb62ca0b 	bl	1a6f7c4 <$HWRAbs(int)>
        1bcf94:	e58d0020 	str	r0, [sp, #32]
        1bcf98:	e7950087 	ldr	r0, [r5, r7, lsl #1]
        1bcf9c:	e1a00840 	mov	r0, r0, asr #16
        1bcfa0:	e7951089 	ldr	r1, [r5, r9, lsl #1]
        1bcfa4:	e1a01841 	mov	r1, r1, asr #16
        1bcfa8:	e0400001 	sub	r0, r0, r1
        1bcfac:	eb62ca04 	bl	1a6f7c4 <$HWRAbs(int)>
        1bcfb0:	e58d001c 	str	r0, [sp, #28]
        1bcfb4:	e7940087 	ldr	r0, [r4, r7, lsl #1]
        1bcfb8:	e1a00840 	mov	r0, r0, asr #16
        1bcfbc:	e7941089 	ldr	r1, [r4, r9, lsl #1]
        1bcfc0:	e1a01841 	mov	r1, r1, asr #16
        1bcfc4:	e0400001 	sub	r0, r0, r1
        1bcfc8:	eb62c9fd 	bl	1a6f7c4 <$HWRAbs(int)>
        1bcfcc:	e58d0018 	str	r0, [sp, #24]
        1bcfd0:	e7950086 	ldr	r0, [r5, r6, lsl #1]
        1bcfd4:	e1a00840 	mov	r0, r0, asr #16
        1bcfd8:	e7951088 	ldr	r1, [r5, r8, lsl #1]
        1bcfdc:	e1a01841 	mov	r1, r1, asr #16
        1bcfe0:	e0400001 	sub	r0, r0, r1
        1bcfe4:	eb62c9f6 	bl	1a6f7c4 <$HWRAbs(int)>
        1bcfe8:	e58d0014 	str	r0, [sp, #20]
        1bcfec:	e7940086 	ldr	r0, [r4, r6, lsl #1]
        1bcff0:	e1a00840 	mov	r0, r0, asr #16
        1bcff4:	e7941088 	ldr	r1, [r4, r8, lsl #1]
        1bcff8:	e1a01841 	mov	r1, r1, asr #16
        1bcffc:	e0400001 	sub	r0, r0, r1
        1bd000:	eb62c9ef 	bl	1a6f7c4 <$HWRAbs(int)>
        1bd004:	e58d0010 	str	r0, [sp, #16]
        1bd008:	e7950089 	ldr	r0, [r5, r9, lsl #1]
        1bd00c:	e1a00840 	mov	r0, r0, asr #16
        1bd010:	e7951086 	ldr	r1, [r5, r6, lsl #1]
        1bd014:	e1a01841 	mov	r1, r1, asr #16
        1bd018:	e0400001 	sub	r0, r0, r1
        1bd01c:	eb62c9e8 	bl	1a6f7c4 <$HWRAbs(int)>
        1bd020:	e58d000c 	str	r0, [sp, #12]
        1bd024:	e7940089 	ldr	r0, [r4, r9, lsl #1]
        1bd028:	e1a00840 	mov	r0, r0, asr #16
        1bd02c:	e7941086 	ldr	r1, [r4, r6, lsl #1]
        1bd030:	e1a01841 	mov	r1, r1, asr #16
        1bd034:	e0400001 	sub	r0, r0, r1
        1bd038:	eb62c9e1 	bl	1a6f7c4 <$HWRAbs(int)>
        1bd03c:	e58d0008 	str	r0, [sp, #8]
        1bd040:	e7950087 	ldr	r0, [r5, r7, lsl #1]
        1bd044:	e1a00840 	mov	r0, r0, asr #16
        1bd048:	e7951088 	ldr	r1, [r5, r8, lsl #1]
        1bd04c:	e1a01841 	mov	r1, r1, asr #16
        1bd050:	e0400001 	sub	r0, r0, r1
        1bd054:	eb62c9da 	bl	1a6f7c4 <$HWRAbs(int)>
        1bd058:	e58d0004 	str	r0, [sp, #4]
        1bd05c:	e7940087 	ldr	r0, [r4, r7, lsl #1]
        1bd060:	e1a00840 	mov	r0, r0, asr #16
        1bd064:	e7941088 	ldr	r1, [r4, r8, lsl #1]
        1bd068:	e1a01841 	mov	r1, r1, asr #16
        1bd06c:	e0400001 	sub	r0, r0, r1
        1bd070:	eb62c9d3 	bl	1a6f7c4 <$HWRAbs(int)>
        1bd074:	e3a03005 	mov	r3, #5	; 0x5
        1bd078:	e58d0000 	str	r0, [sp]
        1bd07c:	e92d0008 	stmdb	sp!, {r3}
        1bd080:	e1a03004 	mov	r3, r4
        1bd084:	e1a02005 	mov	r2, r5
        1bd088:	e1a01008 	mov	r1, r8
        1bd08c:	e1a00009 	mov	r0, r9
        1bd090:	eb65a4ad 	bl	1b2634c <$straight_stroke__FiT1PsT3T1>
        1bd094:	e28dd004 	add	sp, sp, #4	; 0x4
        1bd098:	e3300001 	teq	r0, #1	; 0x1
        1bd09c:	1a00000e 	bne	1bd0dc <hor_stroke__FP9SPEC_TYPEPsT2i+0x2f0>
        1bd0a0:	e59d0020 	ldr	r0, [sp, #32]
        1bd0a4:	e0801100 	add	r1, r0, r0, lsl #2
        1bd0a8:	e1a01101 	mov	r1, r1, lsl #2
        1bd0ac:	e08a010a 	add	r0, sl, sl, lsl #2
        1bd0b0:	e1510080 	cmp	r1, r0, lsl #1
        1bd0b4:	b28a0002 	addlt	r0, sl, #2	; 0x2
        1bd0b8:	b59d101c 	ldrlt	r1, [sp, #28]
        1bd0bc:	b1510140 	cmplt	r1, r0, asr #2
        1bd0c0:	b59d1018 	ldrlt	r1, [sp, #24]
        1bd0c4:	b1510140 	cmplt	r1, r0, asr #2
        1bd0c8:	b59d1014 	ldrlt	r1, [sp, #20]
        1bd0cc:	b1510140 	cmplt	r1, r0, asr #2
        1bd0d0:	b59d1010 	ldrlt	r1, [sp, #16]
        1bd0d4:	b1510140 	cmplt	r1, r0, asr #2
        1bd0d8:	baffff8c 	blt	1bcf10 <hor_stroke__FP9SPEC_TYPEPsT2i+0x124>
        1bd0dc:	e3a03005 	mov	r3, #5	; 0x5
        1bd0e0:	e92d0008 	stmdb	sp!, {r3}
        1bd0e4:	e1a03004 	mov	r3, r4
        1bd0e8:	e1a02005 	mov	r2, r5
        1bd0ec:	e1a01006 	mov	r1, r6
        1bd0f0:	e1a00009 	mov	r0, r9
        1bd0f4:	eb65a494 	bl	1b2634c <$straight_stroke__FiT1PsT3T1>
        1bd0f8:	e28dd004 	add	sp, sp, #4	; 0x4
        1bd0fc:	e3300001 	teq	r0, #1	; 0x1
        1bd100:	1a00000c 	bne	1bd138 <hor_stroke__FP9SPEC_TYPEPsT2i+0x34c>
        1bd104:	e59d0008 	ldr	r0, [sp, #8]
        1bd108:	e0801100 	add	r1, r0, r0, lsl #2
        1bd10c:	e1a01101 	mov	r1, r1, lsl #2
        1bd110:	e59d000c 	ldr	r0, [sp, #12]
        1bd114:	e0800100 	add	r0, r0, r0, lsl #2
        1bd118:	e1510080 	cmp	r1, r0, lsl #1
        1bd11c:	b59d000c 	ldrlt	r0, [sp, #12]
        1bd120:	b2800002 	addlt	r0, r0, #2	; 0x2
        1bd124:	b59d101c 	ldrlt	r1, [sp, #28]
        1bd128:	b1510140 	cmplt	r1, r0, asr #2
        1bd12c:	b59d1018 	ldrlt	r1, [sp, #24]
        1bd130:	b1510140 	cmplt	r1, r0, asr #2
        1bd134:	baffff75 	blt	1bcf10 <hor_stroke__FP9SPEC_TYPEPsT2i+0x124>
        1bd138:	e3a03005 	mov	r3, #5	; 0x5
        1bd13c:	e92d0008 	stmdb	sp!, {r3}
        1bd140:	e1a03004 	mov	r3, r4
        1bd144:	e1a02005 	mov	r2, r5
        1bd148:	e1a01008 	mov	r1, r8
        1bd14c:	e1a00007 	mov	r0, r7
        1bd150:	eb65a47d 	bl	1b2634c <$straight_stroke__FiT1PsT3T1>
        1bd154:	e28dd004 	add	sp, sp, #4	; 0x4
        1bd158:	e3300001 	teq	r0, #1	; 0x1
        1bd15c:	1affff37 	bne	1bce40 <hor_stroke__FP9SPEC_TYPEPsT2i+0x54>
        1bd160:	e59d0000 	ldr	r0, [sp]
        1bd164:	e0800100 	add	r0, r0, r0, lsl #2
        1bd168:	e1a00100 	mov	r0, r0, lsl #2
        1bd16c:	e59d1004 	ldr	r1, [sp, #4]
        1bd170:	e0811101 	add	r1, r1, r1, lsl #2
        1bd174:	e1500081 	cmp	r0, r1, lsl #1
        1bd178:	b59d0004 	ldrlt	r0, [sp, #4]
        1bd17c:	b2800002 	addlt	r0, r0, #2	; 0x2
        1bd180:	b59d1014 	ldrlt	r1, [sp, #20]
        1bd184:	b1510140 	cmplt	r1, r0, asr #2
        1bd188:	b59d1010 	ldrlt	r1, [sp, #16]
        1bd18c:	b1510140 	cmplt	r1, r0, asr #2
        1bd190:	aaffff2a 	bge	1bce40 <hor_stroke__FP9SPEC_TYPEPsT2i+0x54>
        1bd194:	eaffff5d 	b	1bcf10 <hor_stroke__FP9SPEC_TYPEPsT2i+0x124>
    */
}

/**
 * Symbol: HoldSchedule(void)
 * Address: 001cc820
 */
HoldSchedule(void) {
    /*
        1cc820:	e59f000c 	ldr	r0, [pc, #c]	; 1cc834 <HoldSchedule(void)+0x14>
        1cc824:	e5901000 	ldr	r1, [r0]
        1cc828:	e2811001 	add	r1, r1, #1	; 0x1
        1cc82c:	e5801000 	str	r1, [r0]
        1cc830:	e1a0f00e 	mov	pc, lr
        1cc834:	0c100fd8 	ldceq	15, cr0, [r0], -#864
    */
}

/**
 * Symbol: HandleAreaSwitched(TDomain *, char **)
 * Address: 0020ac84
 */
HandleAreaSwitched(TDomain *, char **) {
    /*
        20ac84:	e1a0c00d 	mov	ip, sp
        20ac88:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20ac8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20ac90:	e1a04000 	mov	r4, r0
        20ac94:	e1a05001 	mov	r5, r1
        20ac98:	e24dd020 	sub	sp, sp, #32	; 0x20
        20ac9c:	e3a0a201 	mov	sl, #268435456	; 0x10000000
        20aca0:	e3a09312 	mov	r9, #1207959552	; 0x48000000
        20aca4:	e5908010 	ldr	r8, [r0, #16]
        20aca8:	e5900008 	ldr	r0, [r0, #8]
        20acac:	e590000c 	ldr	r0, [r0, #12]
        20acb0:	e1a0100d 	mov	r1, sp
        20acb4:	eb6550ae 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20acb8:	e3a07000 	mov	r7, #0	; 0x0
        20acbc:	e59d1014 	ldr	r1, [sp, #20]
        20acc0:	e3510000 	cmp	r1, #0	; 0x0
        20acc4:	9a000021 	bls	20ad50 <HandleAreaSwitched(TDomain *, char **)+0xcc>
        20acc8:	e5906000 	ldr	r6, [r0]
        20accc:	e5960008 	ldr	r0, [r6, #8]
        20acd0:	e1300008 	teq	r0, r8
        20acd4:	05960014 	ldreq	r0, [r6, #20]
        20acd8:	01300004 	teqeq	r0, r4
        20acdc:	1a000014 	bne	20ad34 <HandleAreaSwitched(TDomain *, char **)+0xb0>
        20ace0:	e1a0100a 	mov	r1, sl
        20ace4:	e1a00006 	mov	r0, r6
        20ace8:	eb65613e 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20acec:	e3300000 	teq	r0, #0	; 0x0
        20acf0:	0a00000f 	beq	20ad34 <HandleAreaSwitched(TDomain *, char **)+0xb0>
        20acf4:	e1a01009 	mov	r1, r9
        20acf8:	e1a00006 	mov	r0, r6
        20acfc:	eb656139 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20ad00:	e3300000 	teq	r0, #0	; 0x0
        20ad04:	1a00000a 	bne	20ad34 <HandleAreaSwitched(TDomain *, char **)+0xb0>
        20ad08:	e1a00006 	mov	r0, r6
        20ad0c:	eb65695b 	bl	1b65280 <TUnit::$GetArea(void)>
        20ad10:	e1a01008 	mov	r1, r8
        20ad14:	e3a02000 	mov	r2, #0	; 0x0
        20ad18:	eb655092 	bl	1b5ef68 <TRecArea::$GetInfoFor(unsigned long, unsigned char)>
        20ad1c:	e1300005 	teq	r0, r5
        20ad20:	0a000003 	beq	20ad34 <HandleAreaSwitched(TDomain *, char **)+0xb0>
        20ad24:	e1a00006 	mov	r0, r6
        20ad28:	e5961000 	ldr	r1, [r6]
        20ad2c:	e1a0e00f 	mov	lr, pc
        20ad30:	e281f060 	add	pc, r1, #96	; 0x60
        20ad34:	e1a0000d 	mov	r0, sp
        20ad38:	e1a0e00f 	mov	lr, pc
        20ad3c:	e59df018 	ldr	pc, [sp, #24]
        20ad40:	e2877001 	add	r7, r7, #1	; 0x1
        20ad44:	e59d1014 	ldr	r1, [sp, #20]
        20ad48:	e1510007 	cmp	r1, r7
        20ad4c:	8affffdd 	bhi	20acc8 <HandleAreaSwitched(TDomain *, char **)+0x44>
        20ad50:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: HandleTestAgentEvent(void)
 * Address: 00228dbc
 */
HandleTestAgentEvent(void) {
    /*
        228dbc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HasSpaces(unsigned short *)
 * Address: 00256460
 */
HasSpaces(unsigned short *) {
    /*
        256460:	e5901000 	ldr	r1, [r0]
        256464:	e1b01821 	movs	r1, r1, lsr #16
        256468:	0a000008 	beq	256490 <HasSpaces(unsigned short *)+0x30>
        25646c:	e5901000 	ldr	r1, [r0]
        256470:	e1a01821 	mov	r1, r1, lsr #16
        256474:	e2800002 	add	r0, r0, #2	; 0x2
        256478:	e3310020 	teq	r1, #32	; 0x20
        25647c:	03a00001 	moveq	r0, #1	; 0x1
        256480:	01a0f00e 	moveq	pc, lr
        256484:	e5901000 	ldr	r1, [r0]
        256488:	e1b01821 	movs	r1, r1, lsr #16
        25648c:	1afffff6 	bne	25646c <HasSpaces(unsigned short *)+0xc>
        256490:	e3a00000 	mov	r0, #0	; 0x0
        256494:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HasDigits(unsigned short *)
 * Address: 00256498
 */
HasDigits(unsigned short *) {
    /*
        256498:	e5901000 	ldr	r1, [r0]
        25649c:	e1b01821 	movs	r1, r1, lsr #16
        2564a0:	0a000009 	beq	2564cc <HasDigits(unsigned short *)+0x34>
        2564a4:	e5901000 	ldr	r1, [r0]
        2564a8:	e1a01821 	mov	r1, r1, lsr #16
        2564ac:	e3510030 	cmp	r1, #48	; 0x30
        2564b0:	ba000002 	blt	2564c0 <HasDigits(unsigned short *)+0x28>
        2564b4:	e3510039 	cmp	r1, #57	; 0x39
        2564b8:	d3a00001 	movle	r0, #1	; 0x1
        2564bc:	d1a0f00e 	movle	pc, lr
        2564c0:	e5b01002 	ldr	r1, [r0, #2]!
        2564c4:	e1b01821 	movs	r1, r1, lsr #16
        2564c8:	1afffff5 	bne	2564a4 <HasDigits(unsigned short *)+0xc>
        2564cc:	e3a00000 	mov	r0, #0	; 0x0
        2564d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HasChars(unsigned short *)
 * Address: 002564d4
 */
HasChars(unsigned short *) {
    /*
        2564d4:	e5901000 	ldr	r1, [r0]
        2564d8:	e1b01821 	movs	r1, r1, lsr #16
        2564dc:	0a00000e 	beq	25651c <HasChars(unsigned short *)+0x48>
        2564e0:	e5901000 	ldr	r1, [r0]
        2564e4:	e1a01821 	mov	r1, r1, lsr #16
        2564e8:	e3510061 	cmp	r1, #97	; 0x61
        2564ec:	ba000001 	blt	2564f8 <HasChars(unsigned short *)+0x24>
        2564f0:	e351007a 	cmp	r1, #122	; 0x7a
        2564f4:	da000003 	ble	256508 <HasChars(unsigned short *)+0x34>
        2564f8:	e3510041 	cmp	r1, #65	; 0x41
        2564fc:	ba000003 	blt	256510 <HasChars(unsigned short *)+0x3c>
        256500:	e351005a 	cmp	r1, #90	; 0x5a
        256504:	ca000001 	bgt	256510 <HasChars(unsigned short *)+0x3c>
        256508:	e3a00001 	mov	r0, #1	; 0x1
        25650c:	e1a0f00e 	mov	pc, lr
        256510:	e5b01002 	ldr	r1, [r0, #2]!
        256514:	e1b01821 	movs	r1, r1, lsr #16
        256518:	1afffff0 	bne	2564e0 <HasChars(unsigned short *)+0xc>
        25651c:	e3a00000 	mov	r0, #0	; 0x0
        256520:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HeapSeed
 * Address: 00271f00
 */
void globals::HeapSeed() {
    /*
        271f00:	e1a0c00d 	mov	ip, sp
        271f04:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        271f08:	e24cb004 	sub	fp, ip, #4	; 0x4
        271f0c:	e3300000 	teq	r0, #0	; 0x0
        271f10:	0b65bc72 	bleq	1be10e0 <$GetCurrentHeap>
        271f14:	e5900060 	ldr	r0, [r0, #96]
        271f18:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: HeaderSizeForXIPChunkOfSize(long)
 * Address: 00278464
 */
HeaderSizeForXIPChunkOfSize(long) {
    /*
        278464:	e3500000 	cmp	r0, #0	; 0x0
        278468:	b2400001 	sublt	r0, r0, #1	; 0x1
        27846c:	b2800b01 	addlt	r0, r0, #1024	; 0x400
        278470:	e1a00540 	mov	r0, r0, asr #10
        278474:	e3a0100c 	mov	r1, #12	; 0xc
        278478:	e0810180 	add	r0, r1, r0, lsl #3
        27847c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: H2Arc__FP13tag_wapx_typeiT2
 * Address: 002a7d18
 */
void globals::H2Arc() {
    /*
        2a7d18:	e1a0c00d 	mov	ip, sp
        2a7d1c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2a7d20:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a7d24:	e1a05000 	mov	r5, r0
        2a7d28:	e1a04002 	mov	r4, r2
        2a7d2c:	e3a06000 	mov	r6, #0	; 0x0
        2a7d30:	e2817001 	add	r7, r1, #1	; 0x1
        2a7d34:	e1570002 	cmp	r7, r2
        2a7d38:	aa000015 	bge	2a7d94 <H2Arc__FP13tag_wapx_typeiT2+0x7c>
        2a7d3c:	e0611181 	rsb	r1, r1, r1, lsl #3
        2a7d40:	e0859101 	add	r9, r5, r1, lsl #2
        2a7d44:	e0641184 	rsb	r1, r4, r4, lsl #3
        2a7d48:	e0858101 	add	r8, r5, r1, lsl #2
        2a7d4c:	e0670187 	rsb	r0, r7, r7, lsl #3
        2a7d50:	e0850100 	add	r0, r5, r0, lsl #2
        2a7d54:	e280000c 	add	r0, r0, #12	; 0xc
        2a7d58:	e9b0000c 	ldmib	r0!, {r2, r3}
        2a7d5c:	e92d000c 	stmdb	sp!, {r2, r3}
        2a7d60:	e2883010 	add	r3, r8, #16	; 0x10
        2a7d64:	e893000c 	ldmia	r3, {r2, r3}
        2a7d68:	e2891010 	add	r1, r9, #16	; 0x10
        2a7d6c:	e8910003 	ldmia	r1, {r0, r1}
        2a7d70:	eb622aeb 	bl	1b32924 <$v_QDistFromChord__FiN51>
        2a7d74:	e28dd008 	add	sp, sp, #8	; 0x8
        2a7d78:	e3500000 	cmp	r0, #0	; 0x0
        2a7d7c:	b2600000 	rsblt	r0, r0, #0	; 0x0
        2a7d80:	e1500006 	cmp	r0, r6
        2a7d84:	c1a06000 	movgt	r6, r0
        2a7d88:	e2877001 	add	r7, r7, #1	; 0x1
        2a7d8c:	e1570004 	cmp	r7, r4
        2a7d90:	baffffed 	blt	2a7d4c <H2Arc__FP13tag_wapx_typeiT2+0x34>
        2a7d94:	e1a00006 	mov	r0, r6
        2a7d98:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: HashQuadgram(unsigned long, long)
 * Address: 002dd2b8
 */
HashQuadgram(unsigned long, long) {
    /*
        2dd2b8:	e211101f 	ands	r1, r1, #31	; 0x1f
        2dd2bc:	11a00170 	movne	r0, r0, ror r1
        2dd2c0:	e59fc004 	ldr	ip, [pc, #4]	; 2dd2cc <HashQuadgram(unsigned long, long)+0x14>
        2dd2c4:	e000009c 	mul	r0, ip, r0
        2dd2c8:	e1a0f00e 	mov	pc, lr
        2dd2cc:	9e3779b9 	mrcls	9, 1, r7, cr7, cr9, {5}
    */
}

/**
 * Symbol: HWRMathILSqrt(long)
 * Address: 002e615c
 */
HWRMathILSqrt(long) {
    /*
        2e615c:	e3500000 	cmp	r0, #0	; 0x0
        2e6160:	b3a00000 	movlt	r0, #0	; 0x0
        2e6164:	b1a0f00e 	movlt	pc, lr
        2e6168:	e1a0c00d 	mov	ip, sp
        2e616c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e6170:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6174:	e3a04000 	mov	r4, #0	; 0x0
        2e6178:	e3a05902 	mov	r5, #32768	; 0x8000
        2e617c:	e2455001 	sub	r5, r5, #1	; 0x1
        2e6180:	e1500005 	cmp	r0, r5
        2e6184:	da000005 	ble	2e61a0 <HWRMathILSqrt(long)+0x44>
        2e6188:	e1a00140 	mov	r0, r0, asr #2
        2e618c:	e2841001 	add	r1, r4, #1	; 0x1
        2e6190:	e1a04801 	mov	r4, r1, lsl #16
        2e6194:	e1a04844 	mov	r4, r4, asr #16
        2e6198:	e1500005 	cmp	r0, r5
        2e619c:	cafffff9 	bgt	2e6188 <HWRMathILSqrt(long)+0x2c>
        2e61a0:	e1a00800 	mov	r0, r0, lsl #16
        2e61a4:	e1a00840 	mov	r0, r0, asr #16
        2e61a8:	eb60d2e0 	bl	1b1ad30 <$HWRMathISqrt(short)>
        2e61ac:	e1a00410 	mov	r0, r0, lsl r4
        2e61b0:	e1a00800 	mov	r0, r0, lsl #16
        2e61b4:	e1b00840 	movs	r0, r0, asr #16
        2e61b8:	41a00005 	movmi	r0, r5
        2e61bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: HWRMathISqrt(short)
 * Address: 002e61c0
 */
HWRMathISqrt(short) {
    /*
        2e61c0:	e1a01800 	mov	r1, r0, lsl #16
        2e61c4:	e1b01841 	movs	r1, r1, asr #16
        2e61c8:	43a00000 	movmi	r0, #0	; 0x0
        2e61cc:	41a0f00e 	movmi	pc, lr
        2e61d0:	e59f00b0 	ldr	r0, [pc, #b0]	; 2e6288 <HWRMathISqrt(short)+0xc8>
        2e61d4:	e3510c01 	cmp	r1, #256	; 0x100
        2e61d8:	b7d00001 	ldrltb	r0, [r0, r1]
        2e61dc:	b2800007 	addlt	r0, r0, #7	; 0x7
        2e61e0:	b1a00240 	movlt	r0, r0, asr #4
        2e61e4:	ba000024 	blt	2e627c <HWRMathISqrt(short)+0xbc>
        2e61e8:	e1a02441 	mov	r2, r1, asr #8
        2e61ec:	e20220ff 	and	r2, r2, #255	; 0xff
        2e61f0:	e7d00002 	ldrb	r0, [r0, r2]
        2e61f4:	e2800003 	add	r0, r0, #3	; 0x3
        2e61f8:	e1a00800 	mov	r0, r0, lsl #16
        2e61fc:	e1a00820 	mov	r0, r0, lsr #16
        2e6200:	e59f2084 	ldr	r2, [pc, #84]	; 2e628c <HWRMathISqrt(short)+0xcc>
        2e6204:	e7923100 	ldr	r3, [r2, r0, lsl #2]
        2e6208:	e1530001 	cmp	r3, r1
        2e620c:	b2800003 	addlt	r0, r0, #3	; 0x3
        2e6210:	b1a00800 	movlt	r0, r0, lsl #16
        2e6214:	b1a00820 	movlt	r0, r0, lsr #16
        2e6218:	e2400001 	sub	r0, r0, #1	; 0x1
        2e621c:	e1a00800 	mov	r0, r0, lsl #16
        2e6220:	e1a00820 	mov	r0, r0, lsr #16
        2e6224:	e7923100 	ldr	r3, [r2, r0, lsl #2]
        2e6228:	e1530001 	cmp	r3, r1
        2e622c:	c2400001 	subgt	r0, r0, #1	; 0x1
        2e6230:	c1a00800 	movgt	r0, r0, lsl #16
        2e6234:	c1a00820 	movgt	r0, r0, lsr #16
        2e6238:	c7923100 	ldrgt	r3, [r2, r0, lsl #2]
        2e623c:	c1530001 	cmpgt	r3, r1
        2e6240:	c2400001 	subgt	r0, r0, #1	; 0x1
        2e6244:	c1a00800 	movgt	r0, r0, lsl #16
        2e6248:	c1a00820 	movgt	r0, r0, lsr #16
        2e624c:	c7923100 	ldrgt	r3, [r2, r0, lsl #2]
        2e6250:	c1530001 	cmpgt	r3, r1
        2e6254:	c2400001 	subgt	r0, r0, #1	; 0x1
        2e6258:	c1a00800 	movgt	r0, r0, lsl #16
        2e625c:	c1a00820 	movgt	r0, r0, lsr #16
        2e6260:	e7923100 	ldr	r3, [r2, r0, lsl #2]
        2e6264:	e0413003 	sub	r3, r1, r3
        2e6268:	e0822100 	add	r2, r2, r0, lsl #2
        2e626c:	e5922004 	ldr	r2, [r2, #4]
        2e6270:	e0421001 	sub	r1, r2, r1
        2e6274:	e1530001 	cmp	r3, r1
        2e6278:	c2800001 	addgt	r0, r0, #1	; 0x1
        2e627c:	e1a00800 	mov	r0, r0, lsl #16
        2e6280:	e1a00840 	mov	r0, r0, asr #16
        2e6284:	e1a0f00e 	mov	pc, lr
        2e6288:	00374630 	eoreqs	r4, r7, r0, lsr r6
        2e628c:	00374730 	eoreqs	r4, r7, r0, lsr r7
    */
}

/**
 * Symbol: hypot
 * Address: 002e6290
 */
void globals::hypot() {
    /*
        2e6290:	e1a0c00d 	mov	ip, sp
        2e6294:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2e6298:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e629c:	ed6dc209 	sfm	f4, 3, [sp, -#36]!
        2e62a0:	e92d0003 	stmdb	sp!, {r0, r1}
        2e62a4:	ecbdd102 	ldfd	f5, [sp], #8
        2e62a8:	e92d000c 	stmdb	sp!, {r2, r3}
        2e62ac:	ecbdc102 	ldfd	f4, [sp], #8
        2e62b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e62b4:	e1a0000d 	mov	r0, sp
        2e62b8:	eb6335cd 	bl	1bb39f4 <$feholdexcept>
        2e62bc:	ed2dd102 	stfd	f5, [sp, -#8]!
        2e62c0:	e8bd0003 	ldmia	sp!, {r0, r1}
        2e62c4:	eb6335c4 	bl	1bb39dc <$fabs>
        2e62c8:	ee00d180 	mvfd	f5, f0
        2e62cc:	ee00e180 	mvfd	f6, f0
        2e62d0:	ed2dc102 	stfd	f4, [sp, -#8]!
        2e62d4:	e8bd0003 	ldmia	sp!, {r0, r1}
        2e62d8:	eb6335bf 	bl	1bb39dc <$fabs>
        2e62dc:	ee00c180 	mvfd	f4, f0
        2e62e0:	ee008186 	mvfd	f0, f6
        2e62e4:	eed0f114 	cmfe	f0, f4
        2e62e8:	ce008185 	mvfgtd	f0, f5
        2e62ec:	ce00d184 	mvfgtd	f5, f4
        2e62f0:	ce00c180 	mvfgtd	f4, f0
        2e62f4:	ee94f118 	cmf	f4, #0.0
        2e62f8:	0a00000c 	beq	2e6330 <hypot+0xa0>
        2e62fc:	eb6473b8 	bl	1c031e4 <$__inf>
        2e6300:	ee90f114 	cmf	f0, f4
        2e6304:	0a000009 	beq	2e6330 <hypot+0xa0>
        2e6308:	ee450184 	dvfd	f0, f5, f4
        2e630c:	ee100180 	mufd	f0, f0, f0
        2e6310:	ee000189 	adfd	f0, f0, #1.0
        2e6314:	ed2d8102 	stfd	f0, [sp, -#8]!
        2e6318:	e8bd0003 	ldmia	sp!, {r0, r1}
        2e631c:	eb633ddd 	bl	1bb5a98 <$sqrt>
        2e6320:	ee00d180 	mvfd	f5, f0
        2e6324:	e3a00008 	mov	r0, #8	; 0x8
        2e6328:	eb6335ad 	bl	1bb39e4 <$feclearexcept>
        2e632c:	ee144185 	mufd	f4, f4, f5
        2e6330:	e1a0000d 	mov	r0, sp
        2e6334:	eb6339b4 	bl	1bb4a0c <$feupdateenv>
        2e6338:	ee008184 	mvfd	f0, f4
        2e633c:	ed5bc20c 	lfm	f4, 3, [fp, -#48]
        2e6340:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: HeightInLine(short, low_type *)
 * Address: 00306e2c
 */
HeightInLine(short, low_type *) {
    /*
        306e2c:	e1a00800 	mov	r0, r0, lsl #16
        306e30:	e1a00840 	mov	r0, r0, asr #16
        306e34:	e5912076 	ldr	r2, [r1, #118]
        306e38:	e5912082 	ldr	r2, [r1, #130]
        306e3c:	e1a02842 	mov	r2, r2, asr #16
        306e40:	e1520000 	cmp	r2, r0
        306e44:	ba00000c 	blt	306e7c <HeightInLine(short, low_type *)+0x50>
        306e48:	e591207c 	ldr	r2, [r1, #124]
        306e4c:	e1500842 	cmp	r0, r2, asr #16
        306e50:	d3a00001 	movle	r0, #1	; 0x1
        306e54:	d1a0f00e 	movle	pc, lr
        306e58:	e591207e 	ldr	r2, [r1, #126]
        306e5c:	e1500842 	cmp	r0, r2, asr #16
        306e60:	d3a00002 	movle	r0, #2	; 0x2
        306e64:	d1a0f00e 	movle	pc, lr
        306e68:	e5911080 	ldr	r1, [r1, #128]
        306e6c:	e1500841 	cmp	r0, r1, asr #16
        306e70:	c3a00004 	movgt	r0, #4	; 0x4
        306e74:	d3a00003 	movle	r0, #3	; 0x3
        306e78:	e1a0f00e 	mov	pc, lr
        306e7c:	e5912088 	ldr	r2, [r1, #136]
        306e80:	e1500842 	cmp	r0, r2, asr #16
        306e84:	ca000008 	bgt	306eac <HeightInLine(short, low_type *)+0x80>
        306e88:	e5912084 	ldr	r2, [r1, #132]
        306e8c:	e1500842 	cmp	r0, r2, asr #16
        306e90:	d3a00005 	movle	r0, #5	; 0x5
        306e94:	d1a0f00e 	movle	pc, lr
        306e98:	e5911086 	ldr	r1, [r1, #134]
        306e9c:	e1500841 	cmp	r0, r1, asr #16
        306ea0:	c3a00007 	movgt	r0, #7	; 0x7
        306ea4:	d3a00006 	movle	r0, #6	; 0x6
        306ea8:	e1a0f00e 	mov	pc, lr
        306eac:	e591208c 	ldr	r2, [r1, #140]
        306eb0:	e1500842 	cmp	r0, r2, asr #16
        306eb4:	ca000004 	bgt	306ecc <HeightInLine(short, low_type *)+0xa0>
        306eb8:	e591108a 	ldr	r1, [r1, #138]
        306ebc:	e1500841 	cmp	r0, r1, asr #16
        306ec0:	c3a00009 	movgt	r0, #9	; 0x9
        306ec4:	d3a00008 	movle	r0, #8	; 0x8
        306ec8:	e1a0f00e 	mov	pc, lr
        306ecc:	e591208e 	ldr	r2, [r1, #142]
        306ed0:	e1500842 	cmp	r0, r2, asr #16
        306ed4:	d3a0000a 	movle	r0, #10	; 0xa
        306ed8:	d1a0f00e 	movle	pc, lr
        306edc:	e5912090 	ldr	r2, [r1, #144]
        306ee0:	e1500842 	cmp	r0, r2, asr #16
        306ee4:	d3a0000b 	movle	r0, #11	; 0xb
        306ee8:	d1a0f00e 	movle	pc, lr
        306eec:	e5911092 	ldr	r1, [r1, #146]
        306ef0:	e1500841 	cmp	r0, r1, asr #16
        306ef4:	c3a0000d 	movgt	r0, #13	; 0xd
        306ef8:	d3a0000c 	movle	r0, #12	; 0xc
        306efc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HardOverlapRect__FP5_RECTT1Ui
 * Address: 00308008
 */
void globals::HardOverlapRect() {
    /*
        308008:	e1a0c00d 	mov	ip, sp
        30800c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        308010:	e24cb004 	sub	fp, ip, #4	; 0x4
        308014:	e1a05000 	mov	r5, r0
        308018:	e1a04001 	mov	r4, r1
        30801c:	e1a06002 	mov	r6, r2
        308020:	eb605392 	bl	1b1ce70 <$xHardOverlapRect__FP5_RECTT1Ui>
        308024:	e3300000 	teq	r0, #0	; 0x0
        308028:	0a000006 	beq	308048 <HardOverlapRect__FP5_RECTT1Ui+0x40>
        30802c:	e1a02006 	mov	r2, r6
        308030:	e1a01004 	mov	r1, r4
        308034:	e1a00005 	mov	r0, r5
        308038:	eb60538e 	bl	1b1ce78 <$yHardOverlapRect__FP5_RECTT1Ui>
        30803c:	e3300000 	teq	r0, #0	; 0x0
        308040:	13a00001 	movne	r0, #1	; 0x1
        308044:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        308048:	e3a00000 	mov	r0, #0	; 0x0
        30804c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: HandleKeyEvents(RefVar const &, unsigned long)
 * Address: 0030ae94
 */
HandleKeyEvents(RefVar const &, unsigned long) {
    /*
        30ae94:	e1a0c00d 	mov	ip, sp
        30ae98:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        30ae9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        30aea0:	e1a05000 	mov	r5, r0
        30aea4:	e1a04001 	mov	r4, r1
        30aea8:	e24dd004 	sub	sp, sp, #4	; 0x4
        30aeac:	e3a00000 	mov	r0, #0	; 0x0
        30aeb0:	eb5f7563 	bl	1ae8444 <$GetPostingView(unsigned char)>
        30aeb4:	e5901000 	ldr	r1, [r0]
        30aeb8:	e1a0e00f 	mov	lr, pc
        30aebc:	e281f020 	add	pc, r1, #32	; 0x20
        30aec0:	e3100b01 	tst	r0, #1024	; 0x400
        30aec4:	0a00001e 	beq	30af44 <HandleKeyEvents(RefVar const &, unsigned long)+0xb0>
        30aec8:	e3a07000 	mov	r7, #0	; 0x0
        30aecc:	e3540000 	cmp	r4, #0	; 0x0
        30aed0:	9a000085 	bls	30b0ec <HandleKeyEvents(RefVar const &, unsigned long)+0x258>
        30aed4:	e1a01007 	mov	r1, r7
        30aed8:	e1a00005 	mov	r0, r5
        30aedc:	eb5f755b 	bl	1ae8450 <$GetKeyEventNo(RefVar const &, unsigned long)>
        30aee0:	e200607f 	and	r6, r0, #127	; 0x7f
        30aee4:	e3100080 	tst	r0, #128	; 0x80
        30aee8:	03a0801f 	moveq	r8, #31	; 0x1f
        30aeec:	13a08020 	movne	r8, #32	; 0x20
        30aef0:	e3380020 	teq	r8, #32	; 0x20
        30aef4:	03360037 	teqeq	r6, #55	; 0x37
        30aef8:	0a000006 	beq	30af18 <HandleKeyEvents(RefVar const &, unsigned long)+0x84>
        30aefc:	eb5f7552 	bl	1ae844c <$IsCommandKeyDown(void)>
        30af00:	e3300000 	teq	r0, #0	; 0x0
        30af04:	1a000003 	bne	30af18 <HandleKeyEvents(RefVar const &, unsigned long)+0x84>
        30af08:	e1a00006 	mov	r0, r6
        30af0c:	eb5f7549 	bl	1ae8438 <$IsCommandKeyCode(unsigned long)>
        30af10:	e3300000 	teq	r0, #0	; 0x0
        30af14:	0a000001 	beq	30af20 <HandleKeyEvents(RefVar const &, unsigned long)+0x8c>
        30af18:	e3a00001 	mov	r0, #1	; 0x1
        30af1c:	ea000000 	b	30af24 <HandleKeyEvents(RefVar const &, unsigned long)+0x90>
        30af20:	e3a00000 	mov	r0, #0	; 0x0
        30af24:	eb5f7546 	bl	1ae8444 <$GetPostingView(unsigned char)>
        30af28:	e1a02006 	mov	r2, r6
        30af2c:	e1a01008 	mov	r1, r8
        30af30:	eb5f0df8 	bl	1ace718 <$DoKeyEvent__FP10TResponderUlT2>
        30af34:	e2877001 	add	r7, r7, #1	; 0x1
        30af38:	e1570004 	cmp	r7, r4
        30af3c:	3affffe4 	bcc	30aed4 <HandleKeyEvents(RefVar const &, unsigned long)+0x40>
        30af40:	ea000069 	b	30b0ec <HandleKeyEvents(RefVar const &, unsigned long)+0x258>
        30af44:	e24dd008 	sub	sp, sp, #8	; 0x8
        30af48:	e3a00002 	mov	r0, #2	; 0x2
        30af4c:	e0801084 	add	r1, r0, r4, lsl #1
        30af50:	e58d1004 	str	r1, [sp, #4]
        30af54:	e59f0078 	ldr	r0, [pc, #78]	; 30afd4 <HandleKeyEvents(RefVar const &, unsigned long)+0x140>
        30af58:	eb62dc77 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        30af5c:	eb62dc7a 	bl	1bc214c <$AllocateRefHandle(long)>
        30af60:	e3a06000 	mov	r6, #0	; 0x0
        30af64:	e3a0a000 	mov	sl, #0	; 0x0
        30af68:	e3a08000 	mov	r8, #0	; 0x0
        30af6c:	e3540000 	cmp	r4, #0	; 0x0
        30af70:	e58d0000 	str	r0, [sp]
        30af74:	9a000049 	bls	30b0a0 <HandleKeyEvents(RefVar const &, unsigned long)+0x20c>
        30af78:	e2440001 	sub	r0, r4, #1	; 0x1
        30af7c:	e58d0008 	str	r0, [sp, #8]
        30af80:	e1a01008 	mov	r1, r8
        30af84:	e1a00005 	mov	r0, r5
        30af88:	eb5f7530 	bl	1ae8450 <$GetKeyEventNo(RefVar const &, unsigned long)>
        30af8c:	e200707f 	and	r7, r0, #127	; 0x7f
        30af90:	e3100080 	tst	r0, #128	; 0x80
        30af94:	03a0901f 	moveq	r9, #31	; 0x1f
        30af98:	13a09020 	movne	r9, #32	; 0x20
        30af9c:	e3390020 	teq	r9, #32	; 0x20
        30afa0:	033a0000 	teqeq	sl, #0	; 0x0
        30afa4:	1a00000b 	bne	30afd8 <HandleKeyEvents(RefVar const &, unsigned long)+0x144>
        30afa8:	e3370037 	teq	r7, #55	; 0x37
        30afac:	0a000006 	beq	30afcc <HandleKeyEvents(RefVar const &, unsigned long)+0x138>
        30afb0:	eb5f7525 	bl	1ae844c <$IsCommandKeyDown(void)>
        30afb4:	e3300000 	teq	r0, #0	; 0x0
        30afb8:	1a000003 	bne	30afcc <HandleKeyEvents(RefVar const &, unsigned long)+0x138>
        30afbc:	e1a00007 	mov	r0, r7
        30afc0:	eb5f751c 	bl	1ae8438 <$IsCommandKeyCode(unsigned long)>
        30afc4:	e3300000 	teq	r0, #0	; 0x0
        30afc8:	0a000020 	beq	30b050 <HandleKeyEvents(RefVar const &, unsigned long)+0x1bc>
        30afcc:	e3a0a001 	mov	sl, #1	; 0x1
        30afd0:	ea000002 	b	30afe0 <HandleKeyEvents(RefVar const &, unsigned long)+0x14c>
        30afd4:	006848d0 	ldreqd	r4, [r8], -#128
        30afd8:	e33a0000 	teq	sl, #0	; 0x0
        30afdc:	0a00001b 	beq	30b050 <HandleKeyEvents(RefVar const &, unsigned long)+0x1bc>
        30afe0:	e3360000 	teq	r6, #0	; 0x0
        30afe4:	0a000013 	beq	30b038 <HandleKeyEvents(RefVar const &, unsigned long)+0x1a4>
        30afe8:	e1a0000d 	mov	r0, sp
        30afec:	eb62e064 	bl	1bc3184 <$GetCString(RefVar const &)>
        30aff0:	e0800086 	add	r0, r0, r6, lsl #1
        30aff4:	e3a01000 	mov	r1, #0	; 0x0
        30aff8:	e5c01001 	strb	r1, [r0, #1]
        30affc:	e5c01000 	strb	r1, [r0]
        30b000:	e3a00002 	mov	r0, #2	; 0x2
        30b004:	e0801086 	add	r1, r0, r6, lsl #1
        30b008:	e1a0000d 	mov	r0, sp
        30b00c:	eb62ecd6 	bl	1bc636c <$SetLength(RefVar const &, long)>
        30b010:	e3a00000 	mov	r0, #0	; 0x0
        30b014:	eb5f750a 	bl	1ae8444 <$GetPostingView(unsigned char)>
        30b018:	e1a0100d 	mov	r1, sp
        30b01c:	eb5f7509 	bl	1ae8448 <$PostKeyString(TView *, RefVar const &)>
        30b020:	e59d0008 	ldr	r0, [sp, #8]
        30b024:	e1500008 	cmp	r0, r8
        30b028:	859d1004 	ldrhi	r1, [sp, #4]
        30b02c:	81a0000d 	movhi	r0, sp
        30b030:	8b62eccd 	blhi	1bc636c <$SetLength(RefVar const &, long)>
        30b034:	e3a06000 	mov	r6, #0	; 0x0
        30b038:	e3a00001 	mov	r0, #1	; 0x1
        30b03c:	eb5f7500 	bl	1ae8444 <$GetPostingView(unsigned char)>
        30b040:	e1a02007 	mov	r2, r7
        30b044:	e1a01009 	mov	r1, r9
        30b048:	eb5f0db2 	bl	1ace718 <$DoKeyEvent__FP10TResponderUlT2>
        30b04c:	ea000010 	b	30b094 <HandleKeyEvents(RefVar const &, unsigned long)+0x200>
        30b050:	e3390020 	teq	r9, #32	; 0x20
        30b054:	13a01000 	movne	r1, #0	; 0x0
        30b058:	03a01001 	moveq	r1, #1	; 0x1
        30b05c:	e1a00007 	mov	r0, r7
        30b060:	e3e02000 	mvn	r2, #0	; 0x0
        30b064:	eb5f1a24 	bl	1ad18fc <$KeyIn(unsigned long, unsigned char, TView *)>
        30b068:	e1b07000 	movs	r7, r0
        30b06c:	0a000008 	beq	30b094 <HandleKeyEvents(RefVar const &, unsigned long)+0x200>
        30b070:	e3390020 	teq	r9, #32	; 0x20
        30b074:	1a000006 	bne	30b094 <HandleKeyEvents(RefVar const &, unsigned long)+0x200>
        30b078:	e1a0000d 	mov	r0, sp
        30b07c:	eb62e040 	bl	1bc3184 <$GetCString(RefVar const &)>
        30b080:	e0800086 	add	r0, r0, r6, lsl #1
        30b084:	e5c07001 	strb	r7, [r0, #1]
        30b088:	e1a01447 	mov	r1, r7, asr #8
        30b08c:	e5c01000 	strb	r1, [r0]
        30b090:	e2866001 	add	r6, r6, #1	; 0x1
        30b094:	e2888001 	add	r8, r8, #1	; 0x1
        30b098:	e1580004 	cmp	r8, r4
        30b09c:	3affffb7 	bcc	30af80 <HandleKeyEvents(RefVar const &, unsigned long)+0xec>
        30b0a0:	e1a0000d 	mov	r0, sp
        30b0a4:	eb62e036 	bl	1bc3184 <$GetCString(RefVar const &)>
        30b0a8:	e0800086 	add	r0, r0, r6, lsl #1
        30b0ac:	e3a01000 	mov	r1, #0	; 0x0
        30b0b0:	e5c01001 	strb	r1, [r0, #1]
        30b0b4:	e5c01000 	strb	r1, [r0]
        30b0b8:	e3360000 	teq	r6, #0	; 0x0
        30b0bc:	0a000007 	beq	30b0e0 <HandleKeyEvents(RefVar const &, unsigned long)+0x24c>
        30b0c0:	e3a00002 	mov	r0, #2	; 0x2
        30b0c4:	e0801086 	add	r1, r0, r6, lsl #1
        30b0c8:	e1a0000d 	mov	r0, sp
        30b0cc:	eb62eca6 	bl	1bc636c <$SetLength(RefVar const &, long)>
        30b0d0:	e3a00000 	mov	r0, #0	; 0x0
        30b0d4:	eb5f74da 	bl	1ae8444 <$GetPostingView(unsigned char)>
        30b0d8:	e1a0100d 	mov	r1, sp
        30b0dc:	eb5f74d9 	bl	1ae8448 <$PostKeyString(TView *, RefVar const &)>
        30b0e0:	e59d0000 	ldr	r0, [sp]
        30b0e4:	eb62e034 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b0e8:	e28dd008 	add	sp, sp, #8	; 0x8
        30b0ec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: HandleKeyEvent(KeyboardEvent *)
 * Address: 0030b120
 */
HandleKeyEvent(KeyboardEvent *) {
    /*
        30b120:	e1a0c00d 	mov	ip, sp
        30b124:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        30b128:	e24cb004 	sub	fp, ip, #4	; 0x4
        30b12c:	e1a04000 	mov	r4, r0
        30b130:	e590600c 	ldr	r6, [r0, #12]
        30b134:	e3360021 	teq	r6, #33	; 0x21
        30b138:	0a00000f 	beq	30b17c <HandleKeyEvent(KeyboardEvent *)+0x5c>
        30b13c:	e59f0034 	ldr	r0, [pc, #34]	; 30b178 <HandleKeyEvent(KeyboardEvent *)+0x58>
        30b140:	eb632224 	bl	1bd39d8 <$GetGlobalTime>
        30b144:	e3360022 	teq	r6, #34	; 0x22
        30b148:	1a00000b 	bne	30b17c <HandleKeyEvent(KeyboardEvent *)+0x5c>
        30b14c:	e24dd004 	sub	sp, sp, #4	; 0x4
        30b150:	e284001c 	add	r0, r4, #28	; 0x1c
        30b154:	eb5df8e4 	bl	1a894ec <$AddressToRef(void *)>
        30b158:	eb62dbfb 	bl	1bc214c <$AllocateRefHandle(long)>
        30b15c:	e58d0000 	str	r0, [sp]
        30b160:	e1a0000d 	mov	r0, sp
        30b164:	e5b41018 	ldr	r1, [r4, #24]!
        30b168:	eb5f74b9 	bl	1ae8454 <$HandleKeyEvents(RefVar const &, unsigned long)>
        30b16c:	e59d0000 	ldr	r0, [sp]
        30b170:	eb62e011 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b174:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        30b178:	0c100d04 	ldceq	13, cr0, [r0], -#16
        30b17c:	e3a05000 	mov	r5, #0	; 0x0
        30b180:	e5940014 	ldr	r0, [r4, #20]
        30b184:	e3300037 	teq	r0, #55	; 0x37
        30b188:	0a000006 	beq	30b1a8 <HandleKeyEvent(KeyboardEvent *)+0x88>
        30b18c:	eb5f74ae 	bl	1ae844c <$IsCommandKeyDown(void)>
        30b190:	e3300000 	teq	r0, #0	; 0x0
        30b194:	1a000003 	bne	30b1a8 <HandleKeyEvent(KeyboardEvent *)+0x88>
        30b198:	e5940014 	ldr	r0, [r4, #20]
        30b19c:	eb5f74a5 	bl	1ae8438 <$IsCommandKeyCode(unsigned long)>
        30b1a0:	e3300000 	teq	r0, #0	; 0x0
        30b1a4:	0a000000 	beq	30b1ac <HandleKeyEvent(KeyboardEvent *)+0x8c>
        30b1a8:	e3a05001 	mov	r5, #1	; 0x1
        30b1ac:	e1a00005 	mov	r0, r5
        30b1b0:	eb5f74a3 	bl	1ae8444 <$GetPostingView(unsigned char)>
        30b1b4:	e1a01006 	mov	r1, r6
        30b1b8:	e5b42014 	ldr	r2, [r4, #20]!
        30b1bc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        30b1c0:	ea5f0d54 	b	1ace718 <$DoKeyEvent__FP10TResponderUlT2>
    */
}

/**
 * Symbol: HandleRunScriptEvent(TRunScriptEvent *)
 * Address: 0030b5b4
 */
HandleRunScriptEvent(TRunScriptEvent *) {
    /*
        30b5b4:	e1a0c00d 	mov	ip, sp
        30b5b8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        30b5bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        30b5c0:	e1a04000 	mov	r4, r0
        30b5c4:	e3a06000 	mov	r6, #0	; 0x0
        30b5c8:	e5806094 	str	r6, [r0, #148]
        30b5cc:	e52d606c 	str	r6, [sp, -#108]!
        30b5d0:	e28d0008 	add	r0, sp, #8	; 0x8
        30b5d4:	eb629ce6 	bl	1bb2974 <$setjmp>
        30b5d8:	e3300000 	teq	r0, #0	; 0x0
        30b5dc:	1a00004b 	bne	30b710 <HandleRunScriptEvent(TRunScriptEvent *)+0x15c>
        30b5e0:	e1a0000d 	mov	r0, sp
        30b5e4:	eb6352a4 	bl	1be007c <$AddExceptionHandler>
        30b5e8:	e24dd008 	sub	sp, sp, #8	; 0x8
        30b5ec:	e284000c 	add	r0, r4, #12	; 0xc
        30b5f0:	eb62e722 	bl	1bc5280 <$Intern(char *)>
        30b5f4:	eb62dad4 	bl	1bc214c <$AllocateRefHandle(long)>
        30b5f8:	e58d0004 	str	r0, [sp, #4]
        30b5fc:	e28d1004 	add	r1, sp, #4	; 0x4
        30b600:	e59f00d8 	ldr	r0, [pc, #d8]	; 30b6e0 <HandleRunScriptEvent(TRunScriptEvent *)+0x12c>
        30b604:	e5900000 	ldr	r0, [r0]
        30b608:	eb62fbd2 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        30b60c:	eb62dace 	bl	1bc214c <$AllocateRefHandle(long)>
        30b610:	e58d0000 	str	r0, [sp]
        30b614:	e5900000 	ldr	r0, [r0]
        30b618:	e3300002 	teq	r0, #2	; 0x2
        30b61c:	0a000032 	beq	30b6ec <HandleRunScriptEvent(TRunScriptEvent *)+0x138>
        30b620:	e24dd004 	sub	sp, sp, #4	; 0x4
        30b624:	e284004c 	add	r0, r4, #76	; 0x4c
        30b628:	eb62e714 	bl	1bc5280 <$Intern(char *)>
        30b62c:	eb62dac6 	bl	1bc214c <$AllocateRefHandle(long)>
        30b630:	e58d0000 	str	r0, [sp]
        30b634:	e3a00002 	mov	r0, #2	; 0x2
        30b638:	eb62dac3 	bl	1bc214c <$AllocateRefHandle(long)>
        30b63c:	e1a05000 	mov	r5, r0
        30b640:	e594008c 	ldr	r0, [r4, #140]
        30b644:	e3300000 	teq	r0, #0	; 0x0
        30b648:	0a000008 	beq	30b670 <HandleRunScriptEvent(TRunScriptEvent *)+0xbc>
        30b64c:	e5941090 	ldr	r1, [r4, #144]
        30b650:	e59f008c 	ldr	r0, [pc, #8c]	; 30b6e4 <HandleRunScriptEvent(TRunScriptEvent *)+0x130>
        30b654:	eb62dab8 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        30b658:	e5850000 	str	r0, [r5]
        30b65c:	eb62dabe 	bl	1bc215c <$BinaryData(long)>
        30b660:	e1a01000 	mov	r1, r0
        30b664:	e284208c 	add	r2, r4, #140	; 0x8c
        30b668:	e8920005 	ldmia	r2, {r0, r2}
        30b66c:	eb634e38 	bl	1bdef54 <$BlockMove>
        30b670:	e24dd004 	sub	sp, sp, #4	; 0x4
        30b674:	e59f006c 	ldr	r0, [pc, #6c]	; 30b6e8 <HandleRunScriptEvent(TRunScriptEvent *)+0x134>
        30b678:	e3a01001 	mov	r1, #1	; 0x1
        30b67c:	eb62daad 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        30b680:	eb62dab1 	bl	1bc214c <$AllocateRefHandle(long)>
        30b684:	e58d0000 	str	r0, [sp]
        30b688:	e5952000 	ldr	r2, [r5]
        30b68c:	e5900000 	ldr	r0, [r0]
        30b690:	e1a01006 	mov	r1, r6
        30b694:	eb62eb2f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        30b698:	e1a0200d 	mov	r2, sp
        30b69c:	e28d1004 	add	r1, sp, #4	; 0x4
        30b6a0:	e28d0008 	add	r0, sp, #8	; 0x8
        30b6a4:	eb62deca 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        30b6a8:	e3100003 	tst	r0, #3	; 0x3
        30b6ac:	01a00140 	moveq	r0, r0, asr #2
        30b6b0:	0a000000 	beq	30b6b8 <HandleRunScriptEvent(TRunScriptEvent *)+0x104>
        30b6b4:	eb62da98 	bl	1bc211c <$_RINTError(long)>
        30b6b8:	e5a40098 	str	r0, [r4, #152]!
        30b6bc:	e59d0000 	ldr	r0, [sp]
        30b6c0:	eb62debd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b6c4:	e28dd004 	add	sp, sp, #4	; 0x4
        30b6c8:	e1a00005 	mov	r0, r5
        30b6cc:	eb62deba 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b6d0:	e59d0000 	ldr	r0, [sp]
        30b6d4:	eb62deb8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b6d8:	e28dd004 	add	sp, sp, #4	; 0x4
        30b6dc:	ea000005 	b	30b6f8 <HandleRunScriptEvent(TRunScriptEvent *)+0x144>
        30b6e0:	0c101934 	ldceq	9, cr1, [r0], -#208
        30b6e4:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        30b6e8:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        30b6ec:	e3a00fed 	mov	r0, #948	; 0x3b4
        30b6f0:	e2400903 	sub	r0, r0, #49152	; 0xc000
        30b6f4:	e5a40094 	str	r0, [r4, #148]!
        30b6f8:	e59d0000 	ldr	r0, [sp]
        30b6fc:	eb62deae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b700:	e59d0004 	ldr	r0, [sp, #4]
        30b704:	eb62deac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b708:	e28dd008 	add	sp, sp, #8	; 0x8
        30b70c:	ea000021 	b	30b798 <HandleRunScriptEvent(TRunScriptEvent *)+0x1e4>
        30b710:	e59d0060 	ldr	r0, [sp, #96]
        30b714:	e59f1060 	ldr	r1, [pc, #60]	; 30b77c <HandleRunScriptEvent(TRunScriptEvent *)+0x1c8>
        30b718:	e5911000 	ldr	r1, [r1]
        30b71c:	eb635e9c 	bl	1be3194 <$Subexception>
        30b720:	e3e05000 	mvn	r5, #0	; 0x0
        30b724:	e3300000 	teq	r0, #0	; 0x0
        30b728:	1a000019 	bne	30b794 <HandleRunScriptEvent(TRunScriptEvent *)+0x1e0>
        30b72c:	e59d0060 	ldr	r0, [sp, #96]
        30b730:	e28f1f12 	add	r1, pc, #72	; 0x48
        30b734:	eb635e96 	bl	1be3194 <$Subexception>
        30b738:	e3300000 	teq	r0, #0	; 0x0
        30b73c:	e59d0064 	ldr	r0, [sp, #100]
        30b740:	0a00000b 	beq	30b774 <HandleRunScriptEvent(TRunScriptEvent *)+0x1c0>
        30b744:	e59f1044 	ldr	r1, [pc, #44]	; 30b790 <HandleRunScriptEvent(TRunScriptEvent *)+0x1dc>
        30b748:	e5911000 	ldr	r1, [r1]
        30b74c:	e5911000 	ldr	r1, [r1]
        30b750:	e5900000 	ldr	r0, [r0]
        30b754:	e5900000 	ldr	r0, [r0]
        30b758:	eb62e2c0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        30b75c:	e2001003 	and	r1, r0, #3	; 0x3
        30b760:	e3510000 	cmp	r1, #0	; 0x0
        30b764:	1a00000a 	bne	30b794 <HandleRunScriptEvent(TRunScriptEvent *)+0x1e0>
        30b768:	01a00140 	moveq	r0, r0, asr #2
        30b76c:	0a000000 	beq	30b774 <HandleRunScriptEvent(TRunScriptEvent *)+0x1c0>
        30b770:	eb62da69 	bl	1bc211c <$_RINTError(long)>
        30b774:	e5a40094 	str	r0, [r4, #148]!
        30b778:	ea000006 	b	30b798 <HandleRunScriptEvent(TRunScriptEvent *)+0x1e4>
        30b77c:	003712ac 	eoreqs	r1, r7, ip, lsr #5
        30b780:	74797065 	ldrvcbt	r7, [r9], -#101
        30b784:	2e726566 	cdpcs	5, 7, cr6, cr2, cr6, {3}
        30b788:	2e667261 	cdpcs	2, 6, cr7, cr6, cr1, {3}
        30b78c:	6d650000 	stcvsl	0, cr0, [r5]
        30b790:	00682c90 	streqb	r2, [r8], -#192
        30b794:	e5a45094 	str	r5, [r4, #148]!
        30b798:	e1a0000d 	mov	r0, sp
        30b79c:	eb635645 	bl	1be10b8 <$ExitHandler>
        30b7a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: HandleExternalNewtEvent(TExternalNewtEvent *)
 * Address: 0030b8a0
 */
HandleExternalNewtEvent(TExternalNewtEvent *) {
    /*
        30b8a0:	e1a0c00d 	mov	ip, sp
        30b8a4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        30b8a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        30b8ac:	e1a04000 	mov	r4, r0
        30b8b0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        30b8b4:	e59f00c8 	ldr	r0, [pc, #c8]	; 30b984 <HandleExternalNewtEvent(TExternalNewtEvent *)+0xe4>
        30b8b8:	e3a07000 	mov	r7, #0	; 0x0
        30b8bc:	e58d0004 	str	r0, [sp, #4]
        30b8c0:	e5847010 	str	r7, [r4, #16]
        30b8c4:	e59f60bc 	ldr	r6, [pc, #bc]	; 30b988 <HandleExternalNewtEvent(TExternalNewtEvent *)+0xe8>
        30b8c8:	e3a080e9 	mov	r8, #233	; 0xe9
        30b8cc:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        30b8d0:	e5960010 	ldr	r0, [r6, #16]
        30b8d4:	e3300000 	teq	r0, #0	; 0x0
        30b8d8:	1a000005 	bne	30b8f4 <HandleExternalNewtEvent(TExternalNewtEvent *)+0x54>
        30b8dc:	e3a00000 	mov	r0, #0	; 0x0
        30b8e0:	eb636251 	bl	1be422c <CList::$__ct(void)>
        30b8e4:	e5860010 	str	r0, [r6, #16]
        30b8e8:	e3300000 	teq	r0, #0	; 0x0
        30b8ec:	05a48010 	streq	r8, [r4, #16]!
        30b8f0:	0a000042 	beq	30ba00 <HandleExternalNewtEvent(TExternalNewtEvent *)+0x160>
        30b8f4:	e28d0004 	add	r0, sp, #4	; 0x4
        30b8f8:	e594100c 	ldr	r1, [r4, #12]
        30b8fc:	eb5f76ed 	bl	1ae94b8 <TExternalNewtEventListTypeTester::$SetEventType(unsigned long)>
        30b900:	e1a0200d 	mov	r2, sp
        30b904:	e28d1004 	add	r1, sp, #4	; 0x4
        30b908:	e5960010 	ldr	r0, [r6, #16]
        30b90c:	eb638762 	bl	1bed69c <CList::$Search(CItemTester *, long &)>
        30b910:	e1b05000 	movs	r5, r0
        30b914:	1a000027 	bne	30b9b8 <HandleExternalNewtEvent(TExternalNewtEvent *)+0x118>
        30b918:	e24dd008 	sub	sp, sp, #8	; 0x8
        30b91c:	e284100c 	add	r1, r4, #12	; 0xc
        30b920:	e3a00000 	mov	r0, #0	; 0x0
        30b924:	e4d13001 	ldrb	r3, [r1], #1
        30b928:	e7cd3000 	strb	r3, [sp, r0]
        30b92c:	e2800001 	add	r0, r0, #1	; 0x1
        30b930:	e3500004 	cmp	r0, #4	; 0x4
        30b934:	bafffffa 	blt	30b924 <HandleExternalNewtEvent(TExternalNewtEvent *)+0x84>
        30b938:	e5cd7004 	strb	r7, [sp, #4]
        30b93c:	e1a0200d 	mov	r2, sp
        30b940:	e28f0f11 	add	r0, pc, #68	; 0x44
        30b944:	e3a01000 	mov	r1, #0	; 0x0
        30b948:	eb63308e 	bl	1bd7b88 <$NewByName__FPCcN21>
        30b94c:	e1b09000 	movs	r9, r0
        30b950:	0a000014 	beq	30b9a8 <HandleExternalNewtEvent(TExternalNewtEvent *)+0x108>
        30b954:	e3a00008 	mov	r0, #8	; 0x8
        30b958:	eb630b76 	bl	1bce738 <$__nw(unsigned int)>
        30b95c:	e1b05000 	movs	r5, r0
        30b960:	05848010 	streq	r8, [r4, #16]
        30b964:	0a000012 	beq	30b9b4 <HandleExternalNewtEvent(TExternalNewtEvent *)+0x114>
        30b968:	e594000c 	ldr	r0, [r4, #12]
        30b96c:	e8850201 	stmia	r5, {r0, r9}
        30b970:	e1a02005 	mov	r2, r5
        30b974:	e5b60010 	ldr	r0, [r6, #16]!
        30b978:	e5901000 	ldr	r1, [r0]
        30b97c:	eb6376da 	bl	1be94ec <CList::$InsertAt(long, void *)>
        30b980:	ea00000b 	b	30b9b4 <HandleExternalNewtEvent(TExternalNewtEvent *)+0x114>
        30b984:	0001f368 	andeq	pc, r1, r8, ror #6
        30b988:	0c1054a8 	ldceq	4, cr5, [r0], -#672
        30b98c:	54457874 	strplb	r7, [r5], -#2164
        30b990:	65726e61 	ldrvsb	r6, [r2, -#3681]!
        30b994:	6c4e6577 	mcrrvs	5, 7, r6, lr, cr7
        30b998:	74457665 	strvcb	r7, [r5], -#1637
        30b99c:	6e744861 	cdpvs	8, 7, cr4, cr4, cr1, {3}
        30b9a0:	6e646c65 	cdpvs	12, 6, cr6, cr4, cr5, {3}
        30b9a4:	72000000 	andvc	r0, r0, #0	; 0x0
        30b9a8:	e3a000ad 	mov	r0, #173	; 0xad
        30b9ac:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        30b9b0:	e5840010 	str	r0, [r4, #16]
        30b9b4:	e28dd008 	add	sp, sp, #8	; 0x8
        30b9b8:	e3350000 	teq	r5, #0	; 0x0
        30b9bc:	0a00000f 	beq	30ba00 <HandleExternalNewtEvent(TExternalNewtEvent *)+0x160>
        30b9c0:	e52d706c 	str	r7, [sp, -#108]!
        30b9c4:	e28d0008 	add	r0, sp, #8	; 0x8
        30b9c8:	eb629be9 	bl	1bb2974 <$setjmp>
        30b9cc:	e3300000 	teq	r0, #0	; 0x0
        30b9d0:	1a000005 	bne	30b9ec <HandleExternalNewtEvent(TExternalNewtEvent *)+0x14c>
        30b9d4:	e1a0000d 	mov	r0, sp
        30b9d8:	eb6351a7 	bl	1be007c <$AddExceptionHandler>
        30b9dc:	e1a01004 	mov	r1, r4
        30b9e0:	e5b50004 	ldr	r0, [r5, #4]!
        30b9e4:	eb5f76ad 	bl	1ae94a0 <TExternalNewtEventHandler::$HandleEvent(TExternalNewtEvent *)>
        30b9e8:	ea000001 	b	30b9f4 <HandleExternalNewtEvent(TExternalNewtEvent *)+0x154>
        30b9ec:	e59f0010 	ldr	r0, [pc, #10]	; 30ba04 <HandleExternalNewtEvent(TExternalNewtEvent *)+0x164>
        30b9f0:	e5a40010 	str	r0, [r4, #16]!
        30b9f4:	e1a0000d 	mov	r0, sp
        30b9f8:	eb6355ae 	bl	1be10b8 <$ExitHandler>
        30b9fc:	e28dd06c 	add	sp, sp, #108	; 0x6c
        30ba00:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        30ba04:	ffffd8cb 	swinv	0x00ffd8cb
    */
}

/**
 * Symbol: HandleNewCard(TNewCardEvent *)
 * Address: 0030c5cc
 */
HandleNewCard(TNewCardEvent *) {
    /*
        30c5cc:	e1a0c00d 	mov	ip, sp
        30c5d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30c5d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        30c5d8:	e1a04000 	mov	r4, r0
        30c5dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        30c5e0:	e59f0070 	ldr	r0, [pc, #70]	; 30c658 <HandleNewCard(TNewCardEvent *)+0x8c>
        30c5e4:	e3a01000 	mov	r1, #0	; 0x0
        30c5e8:	eb62d6d2 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        30c5ec:	eb62d6d6 	bl	1bc214c <$AllocateRefHandle(long)>
        30c5f0:	e3a05000 	mov	r5, #0	; 0x0
        30c5f4:	e58d0000 	str	r0, [sp]
        30c5f8:	e0840105 	add	r0, r4, r5, lsl #2
        30c5fc:	e5900010 	ldr	r0, [r0, #16]
        30c600:	e24dd004 	sub	sp, sp, #4	; 0x4
        30c604:	e3300000 	teq	r0, #0	; 0x0
        30c608:	0a000007 	beq	30c62c <HandleNewCard(TNewCardEvent *)+0x60>
        30c60c:	ebfffeaa 	bl	30c0bc <FourCharToSymbol(unsigned long)>
        30c610:	eb62d6cd 	bl	1bc214c <$AllocateRefHandle(long)>
        30c614:	e58d0000 	str	r0, [sp]
        30c618:	e1a0100d 	mov	r1, sp
        30c61c:	e28d0004 	add	r0, sp, #4	; 0x4
        30c620:	eb62d6c0 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        30c624:	e59d0000 	ldr	r0, [sp]
        30c628:	eb62dae3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30c62c:	e28dd004 	add	sp, sp, #4	; 0x4
        30c630:	e2855001 	add	r5, r5, #1	; 0x1
        30c634:	e3550004 	cmp	r5, #4	; 0x4
        30c638:	baffffee 	blt	30c5f8 <HandleNewCard(TNewCardEvent *)+0x2c>
        30c63c:	e1a0200d 	mov	r2, sp
        30c640:	e5b4100c 	ldr	r1, [r4, #12]!
        30c644:	e59f0010 	ldr	r0, [pc, #10]	; 30c65c <HandleNewCard(TNewCardEvent *)+0x90>
        30c648:	eb000132 	bl	30cb18 <HandleWeirdCardEvent(RefVar const &, unsigned long, unsigned long)>
        30c64c:	e59d0000 	ldr	r0, [sp]
        30c650:	eb62dad9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30c654:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        30c658:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        30c65c:	00685170 	rsbeq	r5, r8, r0, ror r1
    */
}

/**
 * Symbol: HandleCardEvents(void)
 * Address: 0030c660
 */
HandleCardEvents(void) {
    /*
        30c660:	e1a0c00d 	mov	ip, sp
        30c664:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        30c668:	e24cb004 	sub	fp, ip, #4	; 0x4
        30c66c:	e3a00018 	mov	r0, #24	; 0x18
        30c670:	eb630830 	bl	1bce738 <$__nw(unsigned int)>
        30c674:	e1b04000 	movs	r4, r0
        30c678:	0a000003 	beq	30c68c <HandleCardEvents(void)+0x2c>
        30c67c:	e1a00004 	mov	r0, r4
        30c680:	eb635ee0 	bl	1be4208 <TAEventHandler::$__ct(void)>
        30c684:	e59f001c 	ldr	r0, [pc, #1c]	; 30c6a8 <HandleCardEvents(void)+0x48>
        30c688:	e5840000 	str	r0, [r4]
        30c68c:	e1a00004 	mov	r0, r4
        30c690:	e59f1014 	ldr	r1, [pc, #14]	; 30c6ac <HandleCardEvents(void)+0x4c>
        30c694:	e5a1400c 	str	r4, [r1, #12]!
        30c698:	e59f2010 	ldr	r2, [pc, #10]	; 30c6b0 <HandleCardEvents(void)+0x50>
        30c69c:	e59f1010 	ldr	r1, [pc, #10]	; 30c6b4 <HandleCardEvents(void)+0x54>
        30c6a0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        30c6a4:	ea5e357e 	b	1a99ca4 <TNewtCardEventHandler::$Init(unsigned long, unsigned long)>
        30c6a8:	0001f0ec 	andeq	pc, r1, ip, ror #1
        30c6ac:	0c1054a8 	ldceq	4, cr5, [r0], -#672
        30c6b0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        30c6b4:	63647376 	cmnvs	r4, #-671088639	; 0xd8000001
    */
}

/**
 * Symbol: HandleWeirdCardEvent(RefVar const &, unsigned long, unsigned long)
 * Address: 0030cb18
 */
HandleWeirdCardEvent(RefVar const &, unsigned long, unsigned long) {
    /*
        30cb18:	e1a0c00d 	mov	ip, sp
        30cb1c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30cb20:	e24cb004 	sub	fp, ip, #4	; 0x4
        30cb24:	e1a04000 	mov	r4, r0
        30cb28:	e1a05002 	mov	r5, r2
        30cb2c:	e24dd004 	sub	sp, sp, #4	; 0x4
        30cb30:	e1a00101 	mov	r0, r1, lsl #2
        30cb34:	eb62d584 	bl	1bc214c <$AllocateRefHandle(long)>
        30cb38:	e58d0000 	str	r0, [sp]
        30cb3c:	e1a0100d 	mov	r1, sp
        30cb40:	e1a02005 	mov	r2, r5
        30cb44:	e1a00004 	mov	r0, r4
        30cb48:	eb5eddaf 	bl	1ac420c <$CallNSCardEventHandler__FRC6RefVarN21>
        30cb4c:	e59d0000 	ldr	r0, [sp]
        30cb50:	eb62d999 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30cb54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: HandleCardStoreEvent__FRC6RefVarT1
 * Address: 0030d538
 */
void globals::HandleCardStoreEvent() {
    /*
        30d538:	ea5edb34 	b	1ac4210 <$CallNSCardEventHandler__FRC6RefVarT1>
    */
}

/**
 * Symbol: HandleInterConnect(TInterConnectEvent *)
 * Address: 0030dae8
 */
HandleInterConnect(TInterConnectEvent *) {
    /*
        30dae8:	e1a0c00d 	mov	ip, sp
        30daec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        30daf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        30daf4:	e24dd008 	sub	sp, sp, #8	; 0x8
        30daf8:	e590000c 	ldr	r0, [r0, #12]
        30dafc:	e59f4028 	ldr	r4, [pc, #28]	; 30db2c <HandleInterConnect(TInterConnectEvent *)+0x44>
        30db00:	e3300001 	teq	r0, #1	; 0x1
        30db04:	1a00000a 	bne	30db34 <HandleInterConnect(TInterConnectEvent *)+0x4c>
        30db08:	e3a0001a 	mov	r0, #26	; 0x1a
        30db0c:	eb62d18e 	bl	1bc214c <$AllocateRefHandle(long)>
        30db10:	e58d0000 	str	r0, [sp]
        30db14:	e1a0200d 	mov	r2, sp
        30db18:	e59f1010 	ldr	r1, [pc, #10]	; 30db30 <HandleInterConnect(TInterConnectEvent *)+0x48>
        30db1c:	e1a00004 	mov	r0, r4
        30db20:	eb63c93f 	bl	1c00024 <$NSCallGlobalFn__FRC6RefVarN21>
        30db24:	e59d0000 	ldr	r0, [sp]
        30db28:	ea000009 	b	30db54 <HandleInterConnect(TInterConnectEvent *)+0x6c>
        30db2c:	00681f78 	rsbeq	r1, r8, r8, ror pc
        30db30:	006825a0 	rsbeq	r2, r8, r0, lsr #11
        30db34:	e3a00002 	mov	r0, #2	; 0x2
        30db38:	eb62d183 	bl	1bc214c <$AllocateRefHandle(long)>
        30db3c:	e58d0004 	str	r0, [sp, #4]
        30db40:	e28d2004 	add	r2, sp, #4	; 0x4
        30db44:	e59f1010 	ldr	r1, [pc, #10]	; 30db5c <HandleInterConnect(TInterConnectEvent *)+0x74>
        30db48:	e1a00004 	mov	r0, r4
        30db4c:	eb63c934 	bl	1c00024 <$NSCallGlobalFn__FRC6RefVarN21>
        30db50:	e59d0004 	ldr	r0, [sp, #4]
        30db54:	eb62d598 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30db58:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        30db5c:	006829a8 	rsbeq	r2, r8, r8, lsr #19
    */
}

/**
 * Symbol: HandleSCPEvent(TSCPEvent *)
 * Address: 0030db60
 */
HandleSCPEvent(TSCPEvent *) {
    /*
        30db60:	e1a0c00d 	mov	ip, sp
        30db64:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30db68:	e24cb004 	sub	fp, ip, #4	; 0x4
        30db6c:	e1a04000 	mov	r4, r0
        30db70:	e590000c 	ldr	r0, [r0, #12]
        30db74:	e3300001 	teq	r0, #1	; 0x1
        30db78:	e24dd004 	sub	sp, sp, #4	; 0x4
        30db7c:	1a00001f 	bne	30dc00 <HandleSCPEvent(TSCPEvent *)+0xa0>
        30db80:	ebf91b60 	bl	154908 <GetInternalStore(void)>
        30db84:	e1a05000 	mov	r5, r0
        30db88:	e1a01005 	mov	r1, r5
        30db8c:	e5b40010 	ldr	r0, [r4, #16]!
        30db90:	eb5d303d 	bl	1a59c8c <$WrapPackage(unsigned long, TStore *)>
        30db94:	eb62d16c 	bl	1bc214c <$AllocateRefHandle(long)>
        30db98:	e40d0008 	str	r0, [sp], -#8
        30db9c:	e59d0008 	ldr	r0, [sp, #8]
        30dba0:	e5900000 	ldr	r0, [r0]
        30dba4:	e3300002 	teq	r0, #2	; 0x2
        30dba8:	0a000010 	beq	30dbf0 <HandleSCPEvent(TSCPEvent *)+0x90>
        30dbac:	e3a0001a 	mov	r0, #26	; 0x1a
        30dbb0:	eb62d165 	bl	1bc214c <$AllocateRefHandle(long)>
        30dbb4:	e58d0000 	str	r0, [sp]
        30dbb8:	e1a0400d 	mov	r4, sp
        30dbbc:	e1a00005 	mov	r0, r5
        30dbc0:	eb639363 	bl	1bf2954 <$ToObject(TStore *)>
        30dbc4:	eb62d160 	bl	1bc214c <$AllocateRefHandle(long)>
        30dbc8:	e58d0004 	str	r0, [sp, #4]
        30dbcc:	e28d2004 	add	r2, sp, #4	; 0x4
        30dbd0:	e28d1008 	add	r1, sp, #8	; 0x8
        30dbd4:	e59f0020 	ldr	r0, [pc, #20]	; 30dbfc <HandleSCPEvent(TSCPEvent *)+0x9c>
        30dbd8:	e1a03004 	mov	r3, r4
        30dbdc:	eb63c911 	bl	1c00028 <$NSCallGlobalFn__FRC6RefVarN31>
        30dbe0:	e59d0000 	ldr	r0, [sp]
        30dbe4:	eb62d574 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30dbe8:	e59d0004 	ldr	r0, [sp, #4]
        30dbec:	eb62d572 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30dbf0:	e5bd0008 	ldr	r0, [sp, #8]!
        30dbf4:	eb62d570 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30dbf8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        30dbfc:	00684238 	rsbeq	r4, r8, r8, lsr r2
        30dc00:	e24dd004 	sub	sp, sp, #4	; 0x4
        30dc04:	ebf91b3f 	bl	154908 <GetInternalStore(void)>
        30dc08:	e1a01000 	mov	r1, r0
        30dc0c:	e28d0004 	add	r0, sp, #4	; 0x4
        30dc10:	e5b42010 	ldr	r2, [r4, #16]!
        30dc14:	eb601b7e 	bl	1b14a14 <$StoreToVAddr(unsigned long *, TStore *, unsigned long)>
        30dc18:	e3300000 	teq	r0, #0	; 0x0
        30dc1c:	1a000008 	bne	30dc44 <HandleSCPEvent(TSCPEvent *)+0xe4>
        30dc20:	e59d0004 	ldr	r0, [sp, #4]
        30dc24:	eb5cddaf 	bl	1a452e8 <$GetEntryFromLargeObjectVAddr>
        30dc28:	eb62d147 	bl	1bc214c <$AllocateRefHandle(long)>
        30dc2c:	e58d0000 	str	r0, [sp]
        30dc30:	e1a0100d 	mov	r1, sp
        30dc34:	e59f0010 	ldr	r0, [pc, #10]	; 30dc4c <HandleSCPEvent(TSCPEvent *)+0xec>
        30dc38:	eb63c8f8 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
        30dc3c:	e59d0000 	ldr	r0, [sp]
        30dc40:	eb62d55d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30dc44:	e28dd004 	add	sp, sp, #4	; 0x4
        30dc48:	eaffffea 	b	30dbf8 <HandleSCPEvent(TSCPEvent *)+0x98>
        30dc4c:	006842a0 	rsbeq	r4, r8, r0, lsr #5
    */
}

/**
 * Symbol: HandleRedrawEvent(TRedrawScreenEvent *)
 * Address: 0030ee84
 */
HandleRedrawEvent(TRedrawScreenEvent *) {
    /*
        30ee84:	e1a0c00d 	mov	ip, sp
        30ee88:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        30ee8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        30ee90:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        30ee94:	e280000c 	add	r0, r0, #12	; 0xc
        30ee98:	e28d1004 	add	r1, sp, #4	; 0x4
        30ee9c:	e8905000 	ldmia	r0, {ip, lr}
        30eea0:	e8815000 	stmia	r1, {ip, lr}
        30eea4:	e28d1004 	add	r1, sp, #4	; 0x4
        30eea8:	e28d000c 	add	r0, sp, #12	; 0xc
        30eeac:	eb5de557 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        30eeb0:	e28d000c 	add	r0, sp, #12	; 0xc
        30eeb4:	e58d0000 	str	r0, [sp]
        30eeb8:	e59f401c 	ldr	r4, [pc, #1c]	; 30eedc <HandleRedrawEvent(TRedrawScreenEvent *)+0x58>
        30eebc:	e3a02000 	mov	r2, #0	; 0x0
        30eec0:	e5940000 	ldr	r0, [r4]
        30eec4:	e49d1004 	ldr	r1, [sp], #4
        30eec8:	eb5e2f99 	bl	1a9ad34 <TRootView::$Invalidate(TBaseRegion const, TView *)>
        30eecc:	e3a01000 	mov	r1, #0	; 0x0
        30eed0:	e5940000 	ldr	r0, [r4]
        30eed4:	eb5e58f2 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        30eed8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        30eedc:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: HandleAlarmEvent(TAlarmEvent *)
 * Address: 0030eee0
 */
HandleAlarmEvent(TAlarmEvent *) {
    /*
        30eee0:	e2801010 	add	r1, r0, #16	; 0x10
        30eee4:	e2800014 	add	r0, r0, #20	; 0x14
        30eee8:	ea62d0b8 	b	1bc31d0 <$DoBlock__FRC6RefVarT1>
    */
}

/**
 * Symbol: HeapReleaseRequestHandler
 * Address: 00310b98
 */
void globals::HeapReleaseRequestHandler() {
    /*
        310b98:	e1a0c00d 	mov	ip, sp
        310b9c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        310ba0:	e24cb004 	sub	fp, ip, #4	; 0x4
        310ba4:	e1a05001 	mov	r5, r1
        310ba8:	e1a04002 	mov	r4, r2
        310bac:	e20380ff 	and	r8, r3, #255	; 0xff
        310bb0:	e1a06000 	mov	r6, r0
        310bb4:	e3a07000 	mov	r7, #0	; 0x0
        310bb8:	eb633cff 	bl	1bdffbc <$IsSkiaHeap>
        310bbc:	e3300000 	teq	r0, #0	; 0x0
        310bc0:	0a000010 	beq	310c08 <HeapReleaseRequestHandler+0x70>
        310bc4:	e5960034 	ldr	r0, [r6, #52]
        310bc8:	e5961030 	ldr	r1, [r6, #48]
        310bcc:	e1510000 	cmp	r1, r0
        310bd0:	da000007 	ble	310bf4 <HeapReleaseRequestHandler+0x5c>
        310bd4:	e3380000 	teq	r8, #0	; 0x0
        310bd8:	15860030 	strne	r0, [r6, #48]
        310bdc:	e5960000 	ldr	r0, [r6]
        310be0:	e5961034 	ldr	r1, [r6, #52]
        310be4:	e0810000 	add	r0, r1, r0
        310be8:	e3a07001 	mov	r7, #1	; 0x1
        310bec:	e5840000 	str	r0, [r4]
        310bf0:	ea000002 	b	310c00 <HeapReleaseRequestHandler+0x68>
        310bf4:	e5960000 	ldr	r0, [r6]
        310bf8:	e0810000 	add	r0, r1, r0
        310bfc:	e5840000 	str	r0, [r4]
        310c00:	e5960000 	ldr	r0, [r6]
        310c04:	e5850000 	str	r0, [r5]
        310c08:	e1a00007 	mov	r0, r7
        310c0c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: HandleToHeap
 * Address: 00310fd0
 */
void globals::HandleToHeap() {
    /*
        310fd0:	e3300000 	teq	r0, #0	; 0x0
        310fd4:	15900004 	ldrne	r0, [r0, #4]
        310fd8:	03a00000 	moveq	r0, #0	; 0x0
        310fdc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: HeapBounds__FPPcT1
 * Address: 0031c554
 */
void globals::HeapBounds() {
    /*
        31c554:	e59f2014 	ldr	r2, [pc, #14]	; 31c570 <HeapBounds__FPPcT1+0x1c>
        31c558:	e5922000 	ldr	r2, [r2]
        31c55c:	e5923008 	ldr	r3, [r2, #8]
        31c560:	e5803000 	str	r3, [r0]
        31c564:	e5b2000c 	ldr	r0, [r2, #12]!
        31c568:	e5810000 	str	r0, [r1]
        31c56c:	e1a0f00e 	mov	pc, lr
        31c570:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: HidePen(void)
 * Address: 00329660
 */
HidePen(void) {
    /*
        329660:	e1a0c00d 	mov	ip, sp
        329664:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        329668:	e24cb004 	sub	fp, ip, #4	; 0x4
        32966c:	eb609852 	bl	1b4f7bc <$GetCurrentPort(void)>
        329670:	e590103e 	ldr	r1, [r0, #62]
        329674:	e1a01821 	mov	r1, r1, lsr #16
        329678:	e2411001 	sub	r1, r1, #1	; 0x1
        32967c:	e5c0103f 	strb	r1, [r0, #63]
        329680:	e1a01441 	mov	r1, r1, asr #8
        329684:	e5c0103e 	strb	r1, [r0, #62]
        329688:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: HatchureS(low_type *, SPEC_TYPE *, short *)
 * Address: 0032a14c
 */
HatchureS(low_type *, SPEC_TYPE *, short *) {
    /*
        32a14c:	e1a0c00d 	mov	ip, sp
        32a150:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        32a154:	e24cb004 	sub	fp, ip, #4	; 0x4
        32a158:	e1a04000 	mov	r4, r0
        32a15c:	e1a05001 	mov	r5, r1
        32a160:	e24dd0ac 	sub	sp, sp, #172	; 0xac
        32a164:	e5901068 	ldr	r1, [r0, #104]
        32a168:	e58d107c 	str	r1, [sp, #124]
        32a16c:	e5900064 	ldr	r0, [r0, #100]
        32a170:	e1a00840 	mov	r0, r0, asr #16
        32a174:	e58d0078 	str	r0, [sp, #120]
        32a178:	e5941060 	ldr	r1, [r4, #96]
        32a17c:	e5910008 	ldr	r0, [r1, #8]
        32a180:	e5942034 	ldr	r2, [r4, #52]
        32a184:	e58d2074 	str	r2, [sp, #116]
        32a188:	e5942038 	ldr	r2, [r4, #56]
        32a18c:	e58d2070 	str	r2, [sp, #112]
        32a190:	e5959004 	ldr	r9, [r5, #4]
        32a194:	e1a09849 	mov	r9, r9, asr #16
        32a198:	e5952006 	ldr	r2, [r5, #6]
        32a19c:	e1a02842 	mov	r2, r2, asr #16
        32a1a0:	e58d206c 	str	r2, [sp, #108]
        32a1a4:	e5952008 	ldr	r2, [r5, #8]
        32a1a8:	e1a02842 	mov	r2, r2, asr #16
        32a1ac:	e58d2068 	str	r2, [sp, #104]
        32a1b0:	e5911002 	ldr	r1, [r1, #2]
        32a1b4:	e1a01841 	mov	r1, r1, asr #16
        32a1b8:	e081c081 	add	ip, r1, r1, lsl #1
        32a1bc:	e08c1181 	add	r1, ip, r1, lsl #3
        32a1c0:	e0801101 	add	r1, r0, r1, lsl #2
        32a1c4:	e58d1064 	str	r1, [sp, #100]
        32a1c8:	e0820082 	add	r0, r2, r2, lsl #1
        32a1cc:	e5941054 	ldr	r1, [r4, #84]
        32a1d0:	e7912100 	ldr	r2, [r1, r0, lsl #2]
        32a1d4:	e1a02842 	mov	r2, r2, asr #16
        32a1d8:	e0810100 	add	r0, r1, r0, lsl #2
        32a1dc:	e58d2060 	str	r2, [sp, #96]
        32a1e0:	e5900002 	ldr	r0, [r0, #2]
        32a1e4:	e1a00840 	mov	r0, r0, asr #16
        32a1e8:	e3a07000 	mov	r7, #0	; 0x0
        32a1ec:	e3a08000 	mov	r8, #0	; 0x0
        32a1f0:	e3e06001 	mvn	r6, #1	; 0x1
        32a1f4:	e3590002 	cmp	r9, #2	; 0x2
        32a1f8:	e58d005c 	str	r0, [sp, #92]
        32a1fc:	e58d6058 	str	r6, [sp, #88]
        32a200:	da00020a 	ble	32aa30 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x8e4>
        32a204:	e59d0060 	ldr	r0, [sp, #96]
        32a208:	e3700002 	cmn	r0, #2	; 0x2
        32a20c:	159d005c 	ldrne	r0, [sp, #92]
        32a210:	13700002 	cmnne	r0, #2	; 0x2
        32a214:	0a000205 	beq	32aa30 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x8e4>
        32a218:	e1a00004 	mov	r0, r4
        32a21c:	eb5fcf1c 	bl	1b1de94 <$ApprHorStroke(low_type *)>
        32a220:	e3700002 	cmn	r0, #2	; 0x2
        32a224:	0a000201 	beq	32aa30 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x8e4>
        32a228:	e080c080 	add	ip, r0, r0, lsl #1
        32a22c:	e08c0180 	add	r0, ip, r0, lsl #3
        32a230:	e59d1064 	ldr	r1, [sp, #100]
        32a234:	e0810100 	add	r0, r1, r0, lsl #2
        32a238:	e5901002 	ldr	r1, [r0, #2]
        32a23c:	e1a01841 	mov	r1, r1, asr #16
        32a240:	e58d1034 	str	r1, [sp, #52]
        32a244:	e5900004 	ldr	r0, [r0, #4]
        32a248:	e1a00840 	mov	r0, r0, asr #16
        32a24c:	e58d0030 	str	r0, [sp, #48]
        32a250:	e1a0000d 	mov	r0, sp
        32a254:	eb5fdb89 	bl	1b21080 <$InitSpeclElement(SPEC_TYPE *)>
        32a258:	e3300001 	teq	r0, #1	; 0x1
        32a25c:	0a0001ec 	beq	32aa14 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x8c8>
        32a260:	e3a00000 	mov	r0, #0	; 0x0
        32a264:	e58d0028 	str	r0, [sp, #40]
        32a268:	e59d0078 	ldr	r0, [sp, #120]
        32a26c:	e2400001 	sub	r0, r0, #1	; 0x1
        32a270:	e58d002c 	str	r0, [sp, #44]
        32a274:	e59d0068 	ldr	r0, [sp, #104]
        32a278:	e2400002 	sub	r0, r0, #2	; 0x2
        32a27c:	e58d00a8 	str	r0, [sp, #168]
        32a280:	e1a00809 	mov	r0, r9, lsl #16
        32a284:	e1a00840 	mov	r0, r0, asr #16
        32a288:	e58d00a4 	str	r0, [sp, #164]
        32a28c:	e1a00440 	mov	r0, r0, asr #8
        32a290:	e58d00a0 	str	r0, [sp, #160]
        32a294:	e59d0060 	ldr	r0, [sp, #96]
        32a298:	e1a00800 	mov	r0, r0, lsl #16
        32a29c:	e1a00840 	mov	r0, r0, asr #16
        32a2a0:	e58d009c 	str	r0, [sp, #156]
        32a2a4:	e1a00440 	mov	r0, r0, asr #8
        32a2a8:	e58d0098 	str	r0, [sp, #152]
        32a2ac:	e59d005c 	ldr	r0, [sp, #92]
        32a2b0:	e1a00800 	mov	r0, r0, lsl #16
        32a2b4:	e1a00840 	mov	r0, r0, asr #16
        32a2b8:	e58d0094 	str	r0, [sp, #148]
        32a2bc:	e1a00440 	mov	r0, r0, asr #8
        32a2c0:	e58d0090 	str	r0, [sp, #144]
        32a2c4:	e59d0034 	ldr	r0, [sp, #52]
        32a2c8:	e1a03800 	mov	r3, r0, lsl #16
        32a2cc:	e1a03843 	mov	r3, r3, asr #16
        32a2d0:	e58d308c 	str	r3, [sp, #140]
        32a2d4:	e59d106c 	ldr	r1, [sp, #108]
        32a2d8:	e1a00801 	mov	r0, r1, lsl #16
        32a2dc:	e1a00840 	mov	r0, r0, asr #16
        32a2e0:	e58d0088 	str	r0, [sp, #136]
        32a2e4:	e1a00440 	mov	r0, r0, asr #8
        32a2e8:	e58d0084 	str	r0, [sp, #132]
        32a2ec:	e1a00443 	mov	r0, r3, asr #8
        32a2f0:	e58d0080 	str	r0, [sp, #128]
        32a2f4:	ea000190 	b	32a93c <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7f0>
        32a2f8:	e24dd030 	sub	sp, sp, #48	; 0x30
        32a2fc:	e3a0a000 	mov	sl, #0	; 0x0
        32a300:	e59d005c 	ldr	r0, [sp, #92]
        32a304:	e0800080 	add	r0, r0, r0, lsl #1
        32a308:	e59d10ac 	ldr	r1, [sp, #172]
        32a30c:	e7919100 	ldr	r9, [r1, r0, lsl #2]
        32a310:	e1a09849 	mov	r9, r9, asr #16
        32a314:	e0810100 	add	r0, r1, r0, lsl #2
        32a318:	e5901002 	ldr	r1, [r0, #2]
        32a31c:	e1a01841 	mov	r1, r1, asr #16
        32a320:	e58d102c 	str	r1, [sp, #44]
        32a324:	e59d0064 	ldr	r0, [sp, #100]
        32a328:	e1510000 	cmp	r1, r0
        32a32c:	b59d002c 	ldrlt	r0, [sp, #44]
        32a330:	b1590000 	cmplt	r9, r0
        32a334:	aa00017c 	bge	32a92c <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7e0>
        32a338:	e1a01009 	mov	r1, r9
        32a33c:	e1a00004 	mov	r0, r4
        32a340:	eb5fd733 	bl	1b20014 <$GetGroupNumber(low_type *, int)>
        32a344:	e1a01800 	mov	r1, r0, lsl #16
        32a348:	e1a01841 	mov	r1, r1, asr #16
        32a34c:	e58d1004 	str	r1, [sp, #4]
        32a350:	e59d0098 	ldr	r0, [sp, #152]
        32a354:	e1510000 	cmp	r1, r0
        32a358:	d59d00d8 	ldrle	r0, [sp, #216]
        32a35c:	d59d1004 	ldrle	r1, [sp, #4]
        32a360:	d1500001 	cmple	r0, r1
        32a364:	ca000170 	bgt	32a92c <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7e0>
        32a368:	e28d0044 	add	r0, sp, #68	; 0x44
        32a36c:	eb5fdb43 	bl	1b21080 <$InitSpeclElement(SPEC_TYPE *)>
        32a370:	e3300001 	teq	r0, #1	; 0x1
        32a374:	03a07001 	moveq	r7, #1	; 0x1
        32a378:	0a00006c 	beq	32a530 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x3e4>
        32a37c:	e5cd9069 	strb	r9, [sp, #105]
        32a380:	e1a02449 	mov	r2, r9, asr #8
        32a384:	e5cd2068 	strb	r2, [sp, #104]
        32a388:	e59d002c 	ldr	r0, [sp, #44]
        32a38c:	e5cd006b 	strb	r0, [sp, #107]
        32a390:	e1a01440 	mov	r1, r0, asr #8
        32a394:	e5cd106a 	strb	r1, [sp, #106]
        32a398:	e59d30bc 	ldr	r3, [sp, #188]
        32a39c:	e5cd3075 	strb	r3, [sp, #117]
        32a3a0:	e59d00b0 	ldr	r0, [sp, #176]
        32a3a4:	e5cd0074 	strb	r0, [sp, #116]
        32a3a8:	e5cd3035 	strb	r3, [sp, #53]
        32a3ac:	e59d00b0 	ldr	r0, [sp, #176]
        32a3b0:	e5cd0034 	strb	r0, [sp, #52]
        32a3b4:	e59d0060 	ldr	r0, [sp, #96]
        32a3b8:	e1a03800 	mov	r3, r0, lsl #16
        32a3bc:	e1a03843 	mov	r3, r3, asr #16
        32a3c0:	e5cd3077 	strb	r3, [sp, #119]
        32a3c4:	e1a00443 	mov	r0, r3, asr #8
        32a3c8:	e5cd0076 	strb	r0, [sp, #118]
        32a3cc:	e5cd3037 	strb	r3, [sp, #55]
        32a3d0:	e5cd0036 	strb	r0, [sp, #54]
        32a3d4:	e5cd9049 	strb	r9, [sp, #73]
        32a3d8:	e5cd2048 	strb	r2, [sp, #72]
        32a3dc:	e59d002c 	ldr	r0, [sp, #44]
        32a3e0:	e5cd004b 	strb	r0, [sp, #75]
        32a3e4:	e5cd104a 	strb	r1, [sp, #74]
        32a3e8:	e59d1004 	ldr	r1, [sp, #4]
        32a3ec:	e5cd1047 	strb	r1, [sp, #71]
        32a3f0:	e28d3068 	add	r3, sp, #104	; 0x68
        32a3f4:	e28d2074 	add	r2, sp, #116	; 0x74
        32a3f8:	e28d1084 	add	r1, sp, #132	; 0x84
        32a3fc:	e1a00004 	mov	r0, r4
        32a400:	eb5fd2d5 	bl	1b1ef5c <$Find_Cross__FP8low_typeP13PS_point_typeP12POINTS_GROUPT3>
        32a404:	e3500000 	cmp	r0, #0	; 0x0
        32a408:	1a000009 	bne	32a434 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x2e8>
        32a40c:	e28d3030 	add	r3, sp, #48	; 0x30
        32a410:	e92d0008 	stmdb	sp!, {r3}
        32a414:	e28d3048 	add	r3, sp, #72	; 0x48
        32a418:	e28d2088 	add	r2, sp, #136	; 0x88
        32a41c:	e1a00004 	mov	r0, r4
        32a420:	e51b102c 	ldr	r1, [fp, -#44]
        32a424:	eb5fd2bd 	bl	1b1ef20 <$DrawCross__FP8low_typePsP13PS_point_typeP9SPEC_TYPET4>
        32a428:	e28dd004 	add	sp, sp, #4	; 0x4
        32a42c:	e1a0a000 	mov	sl, r0
        32a430:	ea000000 	b	32a438 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x2ec>
        32a434:	1a000001 	bne	32a440 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x2f4>
        32a438:	e33a0000 	teq	sl, #0	; 0x0
        32a43c:	0a00013a 	beq	32a92c <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7e0>
        32a440:	e3a08001 	mov	r8, #1	; 0x1
        32a444:	e33a0000 	teq	sl, #0	; 0x0
        32a448:	1a000011 	bne	32a494 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x348>
        32a44c:	e59d006a 	ldr	r0, [sp, #106]
        32a450:	e5cd004d 	strb	r0, [sp, #77]
        32a454:	e1a00440 	mov	r0, r0, asr #8
        32a458:	e5cd004c 	strb	r0, [sp, #76]
        32a45c:	e59d0068 	ldr	r0, [sp, #104]
        32a460:	e5cd004f 	strb	r0, [sp, #79]
        32a464:	e1a00440 	mov	r0, r0, asr #8
        32a468:	e5cd004e 	strb	r0, [sp, #78]
        32a46c:	e59d0076 	ldr	r0, [sp, #118]
        32a470:	e5cd0039 	strb	r0, [sp, #57]
        32a474:	e1a00440 	mov	r0, r0, asr #8
        32a478:	e5cd0038 	strb	r0, [sp, #56]
        32a47c:	e59d0074 	ldr	r0, [sp, #116]
        32a480:	e5cd003b 	strb	r0, [sp, #59]
        32a484:	e1a00440 	mov	r0, r0, asr #8
        32a488:	e5cd003a 	strb	r0, [sp, #58]
        32a48c:	e3a00000 	mov	r0, #0	; 0x0
        32a490:	ea000010 	b	32a4d8 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x38c>
        32a494:	e59d004e 	ldr	r0, [sp, #78]
        32a498:	e5cd0069 	strb	r0, [sp, #105]
        32a49c:	e1a00440 	mov	r0, r0, asr #8
        32a4a0:	e5cd0068 	strb	r0, [sp, #104]
        32a4a4:	e59d004c 	ldr	r0, [sp, #76]
        32a4a8:	e5cd006b 	strb	r0, [sp, #107]
        32a4ac:	e1a00440 	mov	r0, r0, asr #8
        32a4b0:	e5cd006a 	strb	r0, [sp, #106]
        32a4b4:	e59d003a 	ldr	r0, [sp, #58]
        32a4b8:	e5cd0075 	strb	r0, [sp, #117]
        32a4bc:	e1a00440 	mov	r0, r0, asr #8
        32a4c0:	e5cd0074 	strb	r0, [sp, #116]
        32a4c4:	e59d0038 	ldr	r0, [sp, #56]
        32a4c8:	e5cd0077 	strb	r0, [sp, #119]
        32a4cc:	e1a00440 	mov	r0, r0, asr #8
        32a4d0:	e5cd0076 	strb	r0, [sp, #118]
        32a4d4:	e3a00001 	mov	r0, #1	; 0x1
        32a4d8:	e5cd0046 	strb	r0, [sp, #70]
        32a4dc:	e5cd0033 	strb	r0, [sp, #51]
        32a4e0:	e1a0300d 	mov	r3, sp
        32a4e4:	e92d0008 	stmdb	sp!, {r3}
        32a4e8:	e28d3088 	add	r3, sp, #136	; 0x88
        32a4ec:	e28d2034 	add	r2, sp, #52	; 0x34
        32a4f0:	e1a00004 	mov	r0, r4
        32a4f4:	e51b102c 	ldr	r1, [fp, -#44]
        32a4f8:	eb5fe323 	bl	1b2318c <$SCutFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, SPEC_TYPE *)>
        32a4fc:	e1a09000 	mov	r9, r0
        32a500:	e5bd0004 	ldr	r0, [sp, #4]!
        32a504:	e1a00820 	mov	r0, r0, lsr #16
        32a508:	e5cd0015 	strb	r0, [sp, #21]
        32a50c:	e1a00440 	mov	r0, r0, asr #8
        32a510:	e5cd0014 	strb	r0, [sp, #20]
        32a514:	e1a03005 	mov	r3, r5
        32a518:	e28d2030 	add	r2, sp, #48	; 0x30
        32a51c:	e28d1044 	add	r1, sp, #68	; 0x44
        32a520:	e1a00004 	mov	r0, r4
        32a524:	eb5fe31e 	bl	1b231a4 <$ShiftsAnalyse__FP8low_typeP9SPEC_TYPEN22>
        32a528:	e3300001 	teq	r0, #1	; 0x1
        32a52c:	1a000001 	bne	32a538 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x3ec>
        32a530:	e28dd030 	add	sp, sp, #48	; 0x30
        32a534:	ea00013d 	b	32aa30 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x8e4>
        32a538:	e59d0098 	ldr	r0, [sp, #152]
        32a53c:	e59d1004 	ldr	r1, [sp, #4]
        32a540:	e1510000 	cmp	r1, r0
        32a544:	aa000015 	bge	32a5a0 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x454>
        32a548:	e59d00d4 	ldr	r0, [sp, #212]
        32a54c:	e5cd0021 	strb	r0, [sp, #33]
        32a550:	e59d00d0 	ldr	r0, [sp, #208]
        32a554:	e5cd0020 	strb	r0, [sp, #32]
        32a558:	e59d00b8 	ldr	r0, [sp, #184]
        32a55c:	e5cd0023 	strb	r0, [sp, #35]
        32a560:	e59d00b4 	ldr	r0, [sp, #180]
        32a564:	e5cd0022 	strb	r0, [sp, #34]
        32a568:	e59d00cc 	ldr	r0, [sp, #204]
        32a56c:	e5cd0069 	strb	r0, [sp, #105]
        32a570:	e59d00c8 	ldr	r0, [sp, #200]
        32a574:	e5cd0068 	strb	r0, [sp, #104]
        32a578:	e59d00c4 	ldr	r0, [sp, #196]
        32a57c:	e5cd006b 	strb	r0, [sp, #107]
        32a580:	e59d00c0 	ldr	r0, [sp, #192]
        32a584:	e5cd006a 	strb	r0, [sp, #106]
        32a588:	e28d2068 	add	r2, sp, #104	; 0x68
        32a58c:	e28d1020 	add	r1, sp, #32	; 0x20
        32a590:	e1a00004 	mov	r0, r4
        32a594:	eb5fce44 	bl	1b1deac <$Box_Cover__FP8low_typeP12POINTS_GROUPT2>
        32a598:	e3300001 	teq	r0, #1	; 0x1
        32a59c:	0a0000e2 	beq	32a92c <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7e0>
        32a5a0:	e1a02005 	mov	r2, r5
        32a5a4:	e28d1030 	add	r1, sp, #48	; 0x30
        32a5a8:	e1a00004 	mov	r0, r4
        32a5ac:	eb5fd6a1 	bl	1b20038 <$HatDenAnal__FP8low_typeP9SPEC_TYPET2>
        32a5b0:	e1a08000 	mov	r8, r0
        32a5b4:	e59d0036 	ldr	r0, [sp, #54]
        32a5b8:	e1a00840 	mov	r0, r0, asr #16
        32a5bc:	e58d0060 	str	r0, [sp, #96]
        32a5c0:	e1500006 	cmp	r0, r6
        32a5c4:	c59d6060 	ldrgt	r6, [sp, #96]
        32a5c8:	e59d0076 	ldr	r0, [sp, #118]
        32a5cc:	e59d1088 	ldr	r1, [sp, #136]
        32a5d0:	e1510840 	cmp	r1, r0, asr #16
        32a5d4:	b59d0076 	ldrlt	r0, [sp, #118]
        32a5d8:	b1a00840 	movlt	r0, r0, asr #16
        32a5dc:	b58d0088 	strlt	r0, [sp, #136]
        32a5e0:	e59d109c 	ldr	r1, [sp, #156]
        32a5e4:	e1560001 	cmp	r6, r1
        32a5e8:	aa000010 	bge	32a630 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x4e4>
        32a5ec:	e59d30bc 	ldr	r3, [sp, #188]
        32a5f0:	e5cd3075 	strb	r3, [sp, #117]
        32a5f4:	e59d00b0 	ldr	r0, [sp, #176]
        32a5f8:	e5cd0074 	strb	r0, [sp, #116]
        32a5fc:	e1a00806 	mov	r0, r6, lsl #16
        32a600:	e1a00840 	mov	r0, r0, asr #16
        32a604:	e5cd0077 	strb	r0, [sp, #119]
        32a608:	e1a01440 	mov	r1, r0, asr #8
        32a60c:	e5cd1076 	strb	r1, [sp, #118]
        32a610:	e2800001 	add	r0, r0, #1	; 0x1
        32a614:	e5cd0069 	strb	r0, [sp, #105]
        32a618:	e1a00440 	mov	r0, r0, asr #8
        32a61c:	e5cd0068 	strb	r0, [sp, #104]
        32a620:	e59d00b8 	ldr	r0, [sp, #184]
        32a624:	e5cd006b 	strb	r0, [sp, #107]
        32a628:	e59d00b4 	ldr	r0, [sp, #180]
        32a62c:	e5cd006a 	strb	r0, [sp, #106]
        32a630:	e59d0076 	ldr	r0, [sp, #118]
        32a634:	e5cd0011 	strb	r0, [sp, #17]
        32a638:	e1a00440 	mov	r0, r0, asr #8
        32a63c:	e5cd0010 	strb	r0, [sp, #16]
        32a640:	e59d0074 	ldr	r0, [sp, #116]
        32a644:	e5cd0013 	strb	r0, [sp, #19]
        32a648:	e1a00440 	mov	r0, r0, asr #8
        32a64c:	e5cd0012 	strb	r0, [sp, #18]
        32a650:	e59d0058 	ldr	r0, [sp, #88]
        32a654:	e2800001 	add	r0, r0, #1	; 0x1
        32a658:	e3760002 	cmn	r6, #2	; 0x2
        32a65c:	e58d0058 	str	r0, [sp, #88]
        32a660:	0a0000b1 	beq	32a92c <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7e0>
        32a664:	e2860002 	add	r0, r6, #2	; 0x2
        32a668:	e59d109c 	ldr	r1, [sp, #156]
        32a66c:	e1500001 	cmp	r0, r1
        32a670:	a28dd030 	addge	sp, sp, #48	; 0x30
        32a674:	aa0000b6 	bge	32a954 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x808>
        32a678:	e59d0088 	ldr	r0, [sp, #136]
        32a67c:	e2400001 	sub	r0, r0, #1	; 0x1
        32a680:	e5cd0075 	strb	r0, [sp, #117]
        32a684:	e1a00440 	mov	r0, r0, asr #8
        32a688:	e5cd0074 	strb	r0, [sp, #116]
        32a68c:	e59d0060 	ldr	r0, [sp, #96]
        32a690:	e5cd0077 	strb	r0, [sp, #119]
        32a694:	e1a00440 	mov	r0, r0, asr #8
        32a698:	e5cd0076 	strb	r0, [sp, #118]
        32a69c:	e2860001 	add	r0, r6, #1	; 0x1
        32a6a0:	e5cd0069 	strb	r0, [sp, #105]
        32a6a4:	e1a00440 	mov	r0, r0, asr #8
        32a6a8:	e5cd0068 	strb	r0, [sp, #104]
        32a6ac:	e59d00b8 	ldr	r0, [sp, #184]
        32a6b0:	e5cd006b 	strb	r0, [sp, #107]
        32a6b4:	e59d00b4 	ldr	r0, [sp, #180]
        32a6b8:	e5cd006a 	strb	r0, [sp, #106]
        32a6bc:	e28d3068 	add	r3, sp, #104	; 0x68
        32a6c0:	e28d2074 	add	r2, sp, #116	; 0x74
        32a6c4:	e28d1080 	add	r1, sp, #128	; 0x80
        32a6c8:	e1a00004 	mov	r0, r4
        32a6cc:	eb5fd222 	bl	1b1ef5c <$Find_Cross__FP8low_typeP13PS_point_typeP12POINTS_GROUPT3>
        32a6d0:	e3300001 	teq	r0, #1	; 0x1
        32a6d4:	1a000034 	bne	32a7ac <HatchureS(low_type *, SPEC_TYPE *, short *)+0x660>
        32a6d8:	e3a08003 	mov	r8, #3	; 0x3
        32a6dc:	e59d1034 	ldr	r1, [sp, #52]
        32a6e0:	e1a01841 	mov	r1, r1, asr #16
        32a6e4:	e59d0036 	ldr	r0, [sp, #54]
        32a6e8:	e1510840 	cmp	r1, r0, asr #16
        32a6ec:	a3a07000 	movge	r7, #0	; 0x0
        32a6f0:	aaffff8e 	bge	32a530 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x3e4>
        32a6f4:	e59d0034 	ldr	r0, [sp, #52]
        32a6f8:	e1a00840 	mov	r0, r0, asr #16
        32a6fc:	e2801001 	add	r1, r0, #1	; 0x1
        32a700:	e59d0036 	ldr	r0, [sp, #54]
        32a704:	e1310840 	teq	r1, r0, asr #16
        32a708:	059d6036 	ldreq	r6, [sp, #54]
        32a70c:	01a06846 	moveq	r6, r6, asr #16
        32a710:	0a000021 	beq	32a79c <HatchureS(low_type *, SPEC_TYPE *, short *)+0x650>
        32a714:	e59d0076 	ldr	r0, [sp, #118]
        32a718:	e59d1088 	ldr	r1, [sp, #136]
        32a71c:	e1310840 	teq	r1, r0, asr #16
        32a720:	1a00001a 	bne	32a790 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x644>
        32a724:	e59d0084 	ldr	r0, [sp, #132]
        32a728:	e1a00840 	mov	r0, r0, asr #16
        32a72c:	e59d1080 	ldr	r1, [sp, #128]
        32a730:	e0800841 	add	r0, r0, r1, asr #16
        32a734:	e1a000c0 	mov	r0, r0, asr #1
        32a738:	e59d20a4 	ldr	r2, [sp, #164]
        32a73c:	e59d1074 	ldr	r1, [sp, #116]
        32a740:	e1a01841 	mov	r1, r1, asr #16
        32a744:	e0821081 	add	r1, r2, r1, lsl #1
        32a748:	e5c10001 	strb	r0, [r1, #1]
        32a74c:	e1a00440 	mov	r0, r0, asr #8
        32a750:	e5c10000 	strb	r0, [r1]
        32a754:	e59d1086 	ldr	r1, [sp, #134]
        32a758:	e1a01841 	mov	r1, r1, asr #16
        32a75c:	e59d0082 	ldr	r0, [sp, #130]
        32a760:	e0810840 	add	r0, r1, r0, asr #16
        32a764:	e1a000c0 	mov	r0, r0, asr #1
        32a768:	e59d20a0 	ldr	r2, [sp, #160]
        32a76c:	e59d1074 	ldr	r1, [sp, #116]
        32a770:	e1a01841 	mov	r1, r1, asr #16
        32a774:	e0821081 	add	r1, r2, r1, lsl #1
        32a778:	e5c10001 	strb	r0, [r1, #1]
        32a77c:	e1a00440 	mov	r0, r0, asr #8
        32a780:	e5c10000 	strb	r0, [r1]
        32a784:	e59d6074 	ldr	r6, [sp, #116]
        32a788:	e1a06846 	mov	r6, r6, asr #16
        32a78c:	ea000002 	b	32a79c <HatchureS(low_type *, SPEC_TYPE *, short *)+0x650>
        32a790:	e59d0076 	ldr	r0, [sp, #118]
        32a794:	e1a00840 	mov	r0, r0, asr #16
        32a798:	e2406001 	sub	r6, r0, #1	; 0x1
        32a79c:	e5cd6037 	strb	r6, [sp, #55]
        32a7a0:	e1a00446 	mov	r0, r6, asr #8
        32a7a4:	e5cd0036 	strb	r0, [sp, #54]
        32a7a8:	ea000005 	b	32a7c4 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x678>
        32a7ac:	e3e01001 	mvn	r1, #1	; 0x1
        32a7b0:	e5cd1083 	strb	r1, [sp, #131]
        32a7b4:	e3e00000 	mvn	r0, #0	; 0x0
        32a7b8:	e5cd0082 	strb	r0, [sp, #130]
        32a7bc:	e5cd1081 	strb	r1, [sp, #129]
        32a7c0:	e5cd0080 	strb	r0, [sp, #128]
        32a7c4:	e59d109c 	ldr	r1, [sp, #156]
        32a7c8:	e1560001 	cmp	r6, r1
        32a7cc:	aa000056 	bge	32a92c <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7e0>
        32a7d0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        32a7d4:	e2860001 	add	r0, r6, #1	; 0x1
        32a7d8:	e5cd0091 	strb	r0, [sp, #145]
        32a7dc:	e1a00440 	mov	r0, r0, asr #8
        32a7e0:	e5cd0090 	strb	r0, [sp, #144]
        32a7e4:	e59d00d4 	ldr	r0, [sp, #212]
        32a7e8:	e5cd0093 	strb	r0, [sp, #147]
        32a7ec:	e59d00d0 	ldr	r0, [sp, #208]
        32a7f0:	e5cd0092 	strb	r0, [sp, #146]
        32a7f4:	e59d00e8 	ldr	r0, [sp, #232]
        32a7f8:	e5cd0085 	strb	r0, [sp, #133]
        32a7fc:	e59d00e4 	ldr	r0, [sp, #228]
        32a800:	e5cd0084 	strb	r0, [sp, #132]
        32a804:	e59d00e0 	ldr	r0, [sp, #224]
        32a808:	e5cd0087 	strb	r0, [sp, #135]
        32a80c:	e59d00dc 	ldr	r0, [sp, #220]
        32a810:	e5cd0086 	strb	r0, [sp, #134]
        32a814:	e28d3084 	add	r3, sp, #132	; 0x84
        32a818:	e28d2090 	add	r2, sp, #144	; 0x90
        32a81c:	e1a0100d 	mov	r1, sp
        32a820:	e1a00004 	mov	r0, r4
        32a824:	eb5fd1cc 	bl	1b1ef5c <$Find_Cross__FP8low_typeP13PS_point_typeP12POINTS_GROUPT3>
        32a828:	e3300000 	teq	r0, #0	; 0x0
        32a82c:	13a00000 	movne	r0, #0	; 0x0
        32a830:	158d0024 	strne	r0, [sp, #36]
        32a834:	1a00003a 	bne	32a924 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7d8>
        32a838:	e28d3004 	add	r3, sp, #4	; 0x4
        32a83c:	e1a02005 	mov	r2, r5
        32a840:	e92d000c 	stmdb	sp!, {r2, r3}
        32a844:	e28d3068 	add	r3, sp, #104	; 0x68
        32a848:	e28d2054 	add	r2, sp, #84	; 0x54
        32a84c:	e1a00004 	mov	r0, r4
        32a850:	e51b102c 	ldr	r1, [fp, -#44]
        32a854:	eb5fde43 	bl	1b22168 <$RMinCalc__FP8low_typePsP9SPEC_TYPEN33>
        32a858:	e28dd008 	add	sp, sp, #8	; 0x8
        32a85c:	e5cd0027 	strb	r0, [sp, #39]
        32a860:	e1a00440 	mov	r0, r0, asr #8
        32a864:	e5cd0026 	strb	r0, [sp, #38]
        32a868:	e59d0008 	ldr	r0, [sp, #8]
        32a86c:	e5cd0025 	strb	r0, [sp, #37]
        32a870:	e1a00440 	mov	r0, r0, asr #8
        32a874:	e5cd0024 	strb	r0, [sp, #36]
        32a878:	e59d200c 	ldr	r2, [sp, #12]
        32a87c:	e1a02842 	mov	r2, r2, asr #16
        32a880:	e28d1060 	add	r1, sp, #96	; 0x60
        32a884:	e1a00004 	mov	r0, r4
        32a888:	eb5fda12 	bl	1b210d8 <$LeFiltr(low_type *, SPEC_TYPE *, short)>
        32a88c:	e58d0018 	str	r0, [sp, #24]
        32a890:	e5cd002a 	strb	r0, [sp, #42]
        32a894:	e28d3028 	add	r3, sp, #40	; 0x28
        32a898:	e92d0008 	stmdb	sp!, {r3}
        32a89c:	e28d30a4 	add	r3, sp, #164	; 0xa4
        32a8a0:	e28d2064 	add	r2, sp, #100	; 0x64
        32a8a4:	e1a00004 	mov	r0, r4
        32a8a8:	e51b102c 	ldr	r1, [fp, -#44]
        32a8ac:	eb5fda0f 	bl	1b210f0 <$LowStFiltr(low_type *, short *, SPEC_TYPE *, PS_point_type *, PS_point_type *)>
        32a8b0:	e28dd004 	add	sp, sp, #4	; 0x4
        32a8b4:	e3300000 	teq	r0, #0	; 0x0
        32a8b8:	0a000019 	beq	32a924 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7d8>
        32a8bc:	e3390000 	teq	r9, #0	; 0x0
        32a8c0:	059d0018 	ldreq	r0, [sp, #24]
        32a8c4:	03300000 	teqeq	r0, #0	; 0x0
        32a8c8:	0a000015 	beq	32a924 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7d8>
        32a8cc:	e59d0008 	ldr	r0, [sp, #8]
        32a8d0:	e1a00840 	mov	r0, r0, asr #16
        32a8d4:	e3300003 	teq	r0, #3	; 0x3
        32a8d8:	059d0018 	ldreq	r0, [sp, #24]
        32a8dc:	03300000 	teqeq	r0, #0	; 0x0
        32a8e0:	1a000008 	bne	32a908 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7bc>
        32a8e4:	e3380003 	teq	r8, #3	; 0x3
        32a8e8:	0a000006 	beq	32a908 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7bc>
        32a8ec:	e28d30a0 	add	r3, sp, #160	; 0xa0
        32a8f0:	e28d204c 	add	r2, sp, #76	; 0x4c
        32a8f4:	e28d1024 	add	r1, sp, #36	; 0x24
        32a8f8:	e1a00004 	mov	r0, r4
        32a8fc:	eb5fde18 	bl	1b22164 <$RDFiltr(low_type *, PS_point_type *, SPEC_TYPE *, SPEC_TYPE *)>
        32a900:	e3300000 	teq	r0, #0	; 0x0
        32a904:	0a000006 	beq	32a924 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x7d8>
        32a908:	e1a02008 	mov	r2, r8
        32a90c:	e28d1024 	add	r1, sp, #36	; 0x24
        32a910:	e1a00004 	mov	r0, r4
        32a914:	eb5ff6bc 	bl	1b2840c <$Oracle(low_type *, PS_point_type *, _HAT_DENOM_TYPE)>
        32a918:	e3300000 	teq	r0, #0	; 0x0
        32a91c:	128dd04c 	addne	sp, sp, #76	; 0x4c
        32a920:	1a00000b 	bne	32a954 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x808>
        32a924:	e28dd04c 	add	sp, sp, #76	; 0x4c
        32a928:	ea000040 	b	32aa30 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x8e4>
        32a92c:	e28dd030 	add	sp, sp, #48	; 0x30
        32a930:	e59d002c 	ldr	r0, [sp, #44]
        32a934:	e2400001 	sub	r0, r0, #1	; 0x1
        32a938:	e58d002c 	str	r0, [sp, #44]
        32a93c:	e59d002c 	ldr	r0, [sp, #44]
        32a940:	e3500000 	cmp	r0, #0	; 0x0
        32a944:	ba000002 	blt	32a954 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x808>
        32a948:	e59d0028 	ldr	r0, [sp, #40]
        32a94c:	e3500005 	cmp	r0, #5	; 0x5
        32a950:	bafffe68 	blt	32a2f8 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x1ac>
        32a954:	e3760002 	cmn	r6, #2	; 0x2
        32a958:	13380000 	teqne	r8, #0	; 0x0
        32a95c:	0a000033 	beq	32aa30 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x8e4>
        32a960:	e1a0300a 	mov	r3, sl
        32a964:	e28d2014 	add	r2, sp, #20	; 0x14
        32a968:	e92d000c 	stmdb	sp!, {r2, r3}
        32a96c:	e1a03005 	mov	r3, r5
        32a970:	e28d2008 	add	r2, sp, #8	; 0x8
        32a974:	e1a00004 	mov	r0, r4
        32a978:	e51b102c 	ldr	r1, [fp, -#44]
        32a97c:	eb5fe210 	bl	1b231c4 <$StrokeAnalyse__FP8low_typePsP9SPEC_TYPEN23Ui>
        32a980:	e28dd008 	add	sp, sp, #8	; 0x8
        32a984:	e1a07000 	mov	r7, r0
        32a988:	e3300001 	teq	r0, #1	; 0x1
        32a98c:	0a000027 	beq	32aa30 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x8e4>
        32a990:	e3370002 	teq	r7, #2	; 0x2
        32a994:	03a07000 	moveq	r7, #0	; 0x0
        32a998:	0a000024 	beq	32aa30 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x8e4>
        32a99c:	e3370007 	teq	r7, #7	; 0x7
        32a9a0:	1a00000e 	bne	32a9e0 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x894>
        32a9a4:	e59d1006 	ldr	r1, [sp, #6]
        32a9a8:	e5950006 	ldr	r0, [r5, #6]
        32a9ac:	e1a00840 	mov	r0, r0, asr #16
        32a9b0:	e1300841 	teq	r0, r1, asr #16
        32a9b4:	01a06000 	moveq	r6, r0
        32a9b8:	e3a00007 	mov	r0, #7	; 0x7
        32a9bc:	e5c50000 	strb	r0, [r5]
        32a9c0:	e59d001e 	ldr	r0, [sp, #30]
        32a9c4:	e5c50009 	strb	r0, [r5, #9]
        32a9c8:	e1a00440 	mov	r0, r0, asr #8
        32a9cc:	e5c50008 	strb	r0, [r5, #8]
        32a9d0:	e59d001c 	ldr	r0, [sp, #28]
        32a9d4:	e5c5000b 	strb	r0, [r5, #11]
        32a9d8:	e1a00440 	mov	r0, r0, asr #8
        32a9dc:	e5c5000a 	strb	r0, [r5, #10]
        32a9e0:	e59d1006 	ldr	r1, [sp, #6]
        32a9e4:	e1a01841 	mov	r1, r1, asr #16
        32a9e8:	e5950006 	ldr	r0, [r5, #6]
        32a9ec:	e1310840 	teq	r1, r0, asr #16
        32a9f0:	0a000009 	beq	32aa1c <HatchureS(low_type *, SPEC_TYPE *, short *)+0x8d0>
        32a9f4:	e28d3050 	add	r3, sp, #80	; 0x50
        32a9f8:	e1a02806 	mov	r2, r6, lsl #16
        32a9fc:	e1a02842 	mov	r2, r2, asr #16
        32aa00:	e1a00004 	mov	r0, r4
        32aa04:	e3e01003 	mvn	r1, #3	; 0x3
        32aa08:	eb5ff274 	bl	1b273e0 <$InsertBreakAfter__FP8low_typesT2P13PS_point_type>
        32aa0c:	e3300000 	teq	r0, #0	; 0x0
        32aa10:	1a000001 	bne	32aa1c <HatchureS(low_type *, SPEC_TYPE *, short *)+0x8d0>
        32aa14:	e3a07001 	mov	r7, #1	; 0x1
        32aa18:	ea000004 	b	32aa30 <HatchureS(low_type *, SPEC_TYPE *, short *)+0x8e4>
        32aa1c:	e3a00002 	mov	r0, #2	; 0x2
        32aa20:	e5c50003 	strb	r0, [r5, #3]
        32aa24:	e5c56007 	strb	r6, [r5, #7]
        32aa28:	e1a00446 	mov	r0, r6, asr #8
        32aa2c:	e5c50006 	strb	r0, [r5, #6]
        32aa30:	e1a00007 	mov	r0, r7
        32aa34:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: HatDenAnal__FP8low_typeP9SPEC_TYPET2
 * Address: 0032bfa0
 */
void globals::HatDenAnal() {
    /*
        32bfa0:	e1a0c00d 	mov	ip, sp
        32bfa4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        32bfa8:	e24cb004 	sub	fp, ip, #4	; 0x4
        32bfac:	e1a05000 	mov	r5, r0
        32bfb0:	e1a04001 	mov	r4, r1
        32bfb4:	e24dd014 	sub	sp, sp, #20	; 0x14
        32bfb8:	e5907034 	ldr	r7, [r0, #52]
        32bfbc:	e5908040 	ldr	r8, [r0, #64]
        32bfc0:	e591000a 	ldr	r0, [r1, #10]
        32bfc4:	e1a00820 	mov	r0, r0, lsr #16
        32bfc8:	e5cd0009 	strb	r0, [sp, #9]
        32bfcc:	e1a00440 	mov	r0, r0, asr #8
        32bfd0:	e5cd0008 	strb	r0, [sp, #8]
        32bfd4:	e5910006 	ldr	r0, [r1, #6]
        32bfd8:	e1a00820 	mov	r0, r0, lsr #16
        32bfdc:	e5cd000b 	strb	r0, [sp, #11]
        32bfe0:	e1a00440 	mov	r0, r0, asr #8
        32bfe4:	e5cd000a 	strb	r0, [sp, #10]
        32bfe8:	e3a00000 	mov	r0, #0	; 0x0
        32bfec:	e5cd0001 	strb	r0, [sp, #1]
        32bff0:	e5cd0000 	strb	r0, [sp]
        32bff4:	e5cd0004 	strb	r0, [sp, #4]
        32bff8:	e3a00002 	mov	r0, #2	; 0x2
        32bffc:	e5cd0005 	strb	r0, [sp, #5]
        32c000:	e59d0002 	ldr	r0, [sp, #2]
        32c004:	e3800002 	orr	r0, r0, #2	; 0x2
        32c008:	e5cd0001 	strb	r0, [sp, #1]
        32c00c:	e1a00440 	mov	r0, r0, asr #8
        32c010:	e5cd0000 	strb	r0, [sp]
        32c014:	e28d2008 	add	r2, sp, #8	; 0x8
        32c018:	e28d1004 	add	r1, sp, #4	; 0x4
        32c01c:	e1a00005 	mov	r0, r5
        32c020:	e3a03033 	mov	r3, #51	; 0x33
        32c024:	eb5fdc63 	bl	1b231b8 <$SpcElemFirstOccArr(low_type *, short *, POINTS_GROUP *, unsigned char)>
        32c028:	e1a02000 	mov	r2, r0
        32c02c:	e0800100 	add	r0, r0, r0, lsl #2
        32c030:	e0880100 	add	r0, r8, r0, lsl #2
        32c034:	e1a01000 	mov	r1, r0
        32c038:	e3720002 	cmn	r2, #2	; 0x2
        32c03c:	0a000017 	beq	32c0a0 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x100>
        32c040:	e5916006 	ldr	r6, [r1, #6]
        32c044:	e1a06846 	mov	r6, r6, asr #16
        32c048:	e7972086 	ldr	r2, [r7, r6, lsl #1]
        32c04c:	e1a02842 	mov	r2, r2, asr #16
        32c050:	e5941004 	ldr	r1, [r4, #4]
        32c054:	e1a01841 	mov	r1, r1, asr #16
        32c058:	e7971081 	ldr	r1, [r7, r1, lsl #1]
        32c05c:	e1a01841 	mov	r1, r1, asr #16
        32c060:	e281100a 	add	r1, r1, #10	; 0xa
        32c064:	e1520001 	cmp	r2, r1
        32c068:	da00000c 	ble	32c0a0 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x100>
        32c06c:	e59d1006 	ldr	r1, [sp, #6]
        32c070:	e3110020 	tst	r1, #32	; 0x20
        32c074:	15906008 	ldrne	r6, [r0, #8]
        32c078:	11a06846 	movne	r6, r6, asr #16
        32c07c:	1a000008 	bne	32c0a4 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x104>
        32c080:	e59d1006 	ldr	r1, [sp, #6]
        32c084:	e3110004 	tst	r1, #4	; 0x4
        32c088:	1a000005 	bne	32c0a4 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x104>
        32c08c:	e59d1006 	ldr	r1, [sp, #6]
        32c090:	e3110010 	tst	r1, #16	; 0x10
        32c094:	15906004 	ldrne	r6, [r0, #4]
        32c098:	11a06846 	movne	r6, r6, asr #16
        32c09c:	1a000000 	bne	32c0a4 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x104>
        32c0a0:	e3e06001 	mvn	r6, #1	; 0x1
        32c0a4:	e28d2008 	add	r2, sp, #8	; 0x8
        32c0a8:	e1a0100d 	mov	r1, sp
        32c0ac:	e1a00005 	mov	r0, r5
        32c0b0:	e3a03023 	mov	r3, #35	; 0x23
        32c0b4:	eb5fdc3f 	bl	1b231b8 <$SpcElemFirstOccArr(low_type *, short *, POINTS_GROUP *, unsigned char)>
        32c0b8:	e1a01000 	mov	r1, r0
        32c0bc:	e0800100 	add	r0, r0, r0, lsl #2
        32c0c0:	e0880100 	add	r0, r8, r0, lsl #2
        32c0c4:	e1a02000 	mov	r2, r0
        32c0c8:	e3710002 	cmn	r1, #2	; 0x2
        32c0cc:	0a000017 	beq	32c130 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x190>
        32c0d0:	e5921006 	ldr	r1, [r2, #6]
        32c0d4:	e1a01841 	mov	r1, r1, asr #16
        32c0d8:	e7973081 	ldr	r3, [r7, r1, lsl #1]
        32c0dc:	e1a03843 	mov	r3, r3, asr #16
        32c0e0:	e5942004 	ldr	r2, [r4, #4]
        32c0e4:	e1a02842 	mov	r2, r2, asr #16
        32c0e8:	e7972082 	ldr	r2, [r7, r2, lsl #1]
        32c0ec:	e1a02842 	mov	r2, r2, asr #16
        32c0f0:	e282200a 	add	r2, r2, #10	; 0xa
        32c0f4:	e1530002 	cmp	r3, r2
        32c0f8:	da00000c 	ble	32c130 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x190>
        32c0fc:	e59d2002 	ldr	r2, [sp, #2]
        32c100:	e3120020 	tst	r2, #32	; 0x20
        32c104:	15901008 	ldrne	r1, [r0, #8]
        32c108:	11a01841 	movne	r1, r1, asr #16
        32c10c:	1a000008 	bne	32c134 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x194>
        32c110:	e59d2002 	ldr	r2, [sp, #2]
        32c114:	e3120004 	tst	r2, #4	; 0x4
        32c118:	1a000005 	bne	32c134 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x194>
        32c11c:	e59d1002 	ldr	r1, [sp, #2]
        32c120:	e3110010 	tst	r1, #16	; 0x10
        32c124:	15901004 	ldrne	r1, [r0, #4]
        32c128:	11a01841 	movne	r1, r1, asr #16
        32c12c:	1a000000 	bne	32c134 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x194>
        32c130:	e3e01001 	mvn	r1, #1	; 0x1
        32c134:	e3760002 	cmn	r6, #2	; 0x2
        32c138:	0a00000d 	beq	32c174 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x1d4>
        32c13c:	e3710002 	cmn	r1, #2	; 0x2
        32c140:	0a000004 	beq	32c158 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x1b8>
        32c144:	e1560001 	cmp	r6, r1
        32c148:	b1a01006 	movlt	r1, r6
        32c14c:	e5c41007 	strb	r1, [r4, #7]
        32c150:	e1a00441 	mov	r0, r1, asr #8
        32c154:	ea000003 	b	32c168 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x1c8>
        32c158:	e3760002 	cmn	r6, #2	; 0x2
        32c15c:	0a000004 	beq	32c174 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x1d4>
        32c160:	e5c46007 	strb	r6, [r4, #7]
        32c164:	e1a00446 	mov	r0, r6, asr #8
        32c168:	e5c40006 	strb	r0, [r4, #6]
        32c16c:	e3a00002 	mov	r0, #2	; 0x2
        32c170:	ea000002 	b	32c180 <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x1e0>
        32c174:	e3710002 	cmn	r1, #2	; 0x2
        32c178:	1afffff3 	bne	32c14c <HatDenAnal__FP8low_typeP9SPEC_TYPET2+0x1ac>
        32c17c:	e3a00001 	mov	r0, #1	; 0x1
        32c180:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: HordIntersectDetect__FP9_SDS_TYPEPsT2
 * Address: 0032f19c
 */
void globals::HordIntersectDetect() {
    /*
        32f19c:	e1a0c00d 	mov	ip, sp
        32f1a0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        32f1a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        32f1a8:	e1a05001 	mov	r5, r1
        32f1ac:	e1a04002 	mov	r4, r2
        32f1b0:	e24dd008 	sub	sp, sp, #8	; 0x8
        32f1b4:	e5901002 	ldr	r1, [r0, #2]
        32f1b8:	e1a01841 	mov	r1, r1, asr #16
        32f1bc:	e5900004 	ldr	r0, [r0, #4]
        32f1c0:	e1a00840 	mov	r0, r0, asr #16
        32f1c4:	e795a081 	ldr	sl, [r5, r1, lsl #1]
        32f1c8:	e1a0a84a 	mov	sl, sl, asr #16
        32f1cc:	e7928081 	ldr	r8, [r2, r1, lsl #1]
        32f1d0:	e1a08848 	mov	r8, r8, asr #16
        32f1d4:	e7959080 	ldr	r9, [r5, r0, lsl #1]
        32f1d8:	e1a09849 	mov	r9, r9, asr #16
        32f1dc:	e7927080 	ldr	r7, [r2, r0, lsl #1]
        32f1e0:	e1a07847 	mov	r7, r7, asr #16
        32f1e4:	e3a02000 	mov	r2, #0	; 0x0
        32f1e8:	e2816002 	add	r6, r1, #2	; 0x2
        32f1ec:	e2400002 	sub	r0, r0, #2	; 0x2
        32f1f0:	e58d0004 	str	r0, [sp, #4]
        32f1f4:	e1500006 	cmp	r0, r6
        32f1f8:	e58d2000 	str	r2, [sp]
        32f1fc:	da000018 	ble	32f264 <HordIntersectDetect__FP9_SDS_TYPEPsT2+0xc8>
        32f200:	e0840086 	add	r0, r4, r6, lsl #1
        32f204:	e5903002 	ldr	r3, [r0, #2]
        32f208:	e1a03843 	mov	r3, r3, asr #16
        32f20c:	e0850086 	add	r0, r5, r6, lsl #1
        32f210:	e5902002 	ldr	r2, [r0, #2]
        32f214:	e1a02842 	mov	r2, r2, asr #16
        32f218:	e7941086 	ldr	r1, [r4, r6, lsl #1]
        32f21c:	e1a01841 	mov	r1, r1, asr #16
        32f220:	e7950086 	ldr	r0, [r5, r6, lsl #1]
        32f224:	e1a00840 	mov	r0, r0, asr #16
        32f228:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        32f22c:	e1a03007 	mov	r3, r7
        32f230:	e1a02009 	mov	r2, r9
        32f234:	e1a01008 	mov	r1, r8
        32f238:	e1a0000a 	mov	r0, sl
        32f23c:	eb5faec3 	bl	1b1ad50 <$is_cross__FsN71>
        32f240:	e28dd010 	add	sp, sp, #16	; 0x10
        32f244:	e3300000 	teq	r0, #0	; 0x0
        32f248:	13a00001 	movne	r0, #1	; 0x1
        32f24c:	158d0000 	strne	r0, [sp]
        32f250:	1a000003 	bne	32f264 <HordIntersectDetect__FP9_SDS_TYPEPsT2+0xc8>
        32f254:	e2866001 	add	r6, r6, #1	; 0x1
        32f258:	e59d0004 	ldr	r0, [sp, #4]
        32f25c:	e1500006 	cmp	r0, r6
        32f260:	caffffe6 	bgt	32f200 <HordIntersectDetect__FP9_SDS_TYPEPsT2+0x64>
        32f264:	e49d0008 	ldr	r0, [sp], #8
        32f268:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: HuhPicCodes(long, PicPlay *, GrafPort *)
 * Address: 00330f50
 */
HuhPicCodes(long, PicPlay *, GrafPort *) {
    /*
        330f50:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: H1
 * Address: 00374fa4
 */
void globals::H1() {
    /*
        374fa4:	00000022 	andeq	r0, r0, r2, lsr #32
        374fa8:	00000030 	andeq	r0, r0, r0, lsr r0
        374fac:	00000025 	andeq	r0, r0, r5, lsr #32
        374fb0:	00000030 	andeq	r0, r0, r0, lsr r0
        374fb4:	00000020 	andeq	r0, r0, r0, lsr #32
        374fb8:	00000020 	andeq	r0, r0, r0, lsr #32
        374fbc:	00000020 	andeq	r0, r0, r0, lsr #32
        374fc0:	00000020 	andeq	r0, r0, r0, lsr #32
        374fc4:	0000002f 	andeq	r0, r0, pc, lsr #32
        374fc8:	00000032 	andeq	r0, r0, r2, lsr r0
        374fcc:	00000032 	andeq	r0, r0, r2, lsr r0
        374fd0:	00000032 	andeq	r0, r0, r2, lsr r0
    */
}

/**
 * Symbol: H2
 * Address: 00374fd4
 */
void globals::H2() {
    /*
        374fd4:	00000030 	andeq	r0, r0, r0, lsr r0
        374fd8:	00000030 	andeq	r0, r0, r0, lsr r0
        374fdc:	00000030 	andeq	r0, r0, r0, lsr r0
        374fe0:	00000030 	andeq	r0, r0, r0, lsr r0
        374fe4:	00000020 	andeq	r0, r0, r0, lsr #32
        374fe8:	00000020 	andeq	r0, r0, r0, lsr #32
        374fec:	00000020 	andeq	r0, r0, r0, lsr #32
        374ff0:	00000020 	andeq	r0, r0, r0, lsr #32
        374ff4:	0000002f 	andeq	r0, r0, pc, lsr #32
        374ff8:	00000032 	andeq	r0, r0, r2, lsr r0
        374ffc:	00000032 	andeq	r0, r0, r2, lsr r0
        375000:	00000032 	andeq	r0, r0, r2, lsr r0
    */
}

/**
 * Symbol: HashCallChainWithStack
 * Address: 003893bc
 */
void globals::HashCallChainWithStack() {
    /*
        3893bc:	e3a00000 	mov	r0, #0	; 0x0
        3893c0:	e1a0100b 	mov	r1, fp
        3893c4:	e3510000 	cmp	r1, #0	; 0x0
        3893c8:	01a0f00e 	moveq	pc, lr
        3893cc:	e5912000 	ldr	r2, [r1]
        3893d0:	e0800002 	add	r0, r0, r2
        3893d4:	e5922000 	ldr	r2, [r2]
        3893d8:	e0800002 	add	r0, r0, r2
        3893dc:	e2800001 	add	r0, r0, #1	; 0x1
        3893e0:	e0800001 	add	r0, r0, r1
        3893e4:	e511100c 	ldr	r1, [r1, -#12]
        3893e8:	eafffff5 	b	3893c4 <HashCallChainWithStack+0x8>
    */
}

/**
 * Symbol: HashCallChain
 * Address: 003893ec
 */
void globals::HashCallChain() {
    /*
        3893ec:	e3a00000 	mov	r0, #0	; 0x0
        3893f0:	e1a0100b 	mov	r1, fp
        3893f4:	e3510000 	cmp	r1, #0	; 0x0
        3893f8:	01a0f00e 	moveq	pc, lr
        3893fc:	e5912000 	ldr	r2, [r1]
        389400:	e0800002 	add	r0, r0, r2
        389404:	e5922000 	ldr	r2, [r2]
        389408:	e0800002 	add	r0, r0, r2
        38940c:	e2800001 	add	r0, r0, #1	; 0x1
        389410:	e511100c 	ldr	r1, [r1, -#12]
        389414:	eafffff6 	b	3893f4 <HashCallChain+0x8>
        389418:	00000000 	andeq	r0, r0, r0
        38941c:	00000048 	andeq	r0, r0, r8, asr #32
        389420:	0000005a 	andeq	r0, r0, sl, asr r0
        389424:	0000006a 	andeq	r0, r0, sl, rrx
        389428:	00000068 	andeq	r0, r0, r8, rrx
        38942c:	00000084 	andeq	r0, r0, r4, lsl #1
        389430:	ea606fa4 	b	1ba52c8 <$Sizeof__21TArithmeticCompressorSFv>
        38943c:	ea606b84 	b	1ba4254 <TArithmeticCompressor::$New(void)>
        389440:	ea606344 	b	1ba2158 <TArithmeticCompressor::$Delete(void)>
        389450:	ea000001 	b	38945c <ClassInfo__21TArithmeticCompressorSFv+0x8>
    */
}

