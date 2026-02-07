#include "include/TAgentReporter.h"

/**
 * Symbol: TAgentReporter::__ct(unsigned long, unsigned long, unsigned long)
 * Address: 0020684c
 */
TAgentReporter::TAgentReporter(unsigned long, unsigned long, unsigned long) {
    /*
        20684c:	e1a0c00d 	mov	ip, sp
        206850:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        206854:	e24cb004 	sub	fp, ip, #4	; 0x4
        206858:	e1b04000 	movs	r4, r0
        20685c:	e1a06001 	mov	r6, r1
        206860:	e1a05002 	mov	r5, r2
        206864:	e1a07003 	mov	r7, r3
        206868:	1a000003 	bne	20687c <TAgentReporter::__ct(unsigned long, unsigned long, unsigned long)+0x30>
        20686c:	e3a00e1a 	mov	r0, #416	; 0x1a0
        206870:	eb671fb0 	bl	1bce738 <$__nw(unsigned int)>
        206874:	e1b04000 	movs	r4, r0
        206878:	0a000004 	beq	206890 <TAgentReporter::__ct(unsigned long, unsigned long, unsigned long)+0x44>
        20687c:	e1a03007 	mov	r3, r7
        206880:	e1a02005 	mov	r2, r5
        206884:	e1a01006 	mov	r1, r6
        206888:	e1a00004 	mov	r0, r4
        20688c:	eb0092e0 	bl	22b414 <TTestReporter::__ct(unsigned long, unsigned long, unsigned long)>
        206890:	e1a00004 	mov	r0, r4
        206894:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TAgentReporter::__dt(void)
 * Address: 00206898
 */
TAgentReporter::~TAgentReporter(void) {
    /*
        206898:	e1a0c00d 	mov	ip, sp
        20689c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2068a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2068a4:	e1a04000 	mov	r4, r0
        2068a8:	e1a05001 	mov	r5, r1
        2068ac:	e3a01000 	mov	r1, #0	; 0x0
        2068b0:	eb0092ed 	bl	22b46c <TTestReporter::__dt(void)>
        2068b4:	e1a00004 	mov	r0, r4
        2068b8:	e3a01000 	mov	r1, #0	; 0x0
        2068bc:	eb0092ea 	bl	22b46c <TTestReporter::__dt(void)>
        2068c0:	e3150001 	tst	r5, #1	; 0x1
        2068c4:	11a00004 	movne	r0, r4
        2068c8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2068cc:	1a671b83 	bne	1bcd6e0 <$__dl(void *)>
        2068d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAgentReporter::AgentReportError(char *, char *, long)
 * Address: 002068d4
 */
TAgentReporter::AgentReportError(char *, char *, long) {
    /*
        2068d4:	e1a0c00d 	mov	ip, sp
        2068d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2068dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2068e0:	e1a04000 	mov	r4, r0
        2068e4:	e1a00003 	mov	r0, r3
        2068e8:	e24ddc01 	sub	sp, sp, #256	; 0x100
        2068ec:	e594319c 	ldr	r3, [r4, #412]	; fField412
        2068f0:	e2833001 	add	r3, r3, #1	; 0x1
        2068f4:	e584319c 	str	r3, [r4, #412]	; fField412
        2068f8:	e1a03001 	mov	r3, r1
        2068fc:	e92d0008 	stmdb	sp!, {r3}
        206900:	e1a03002 	mov	r3, r2
        206904:	e1a02000 	mov	r2, r0
        206908:	e28d0004 	add	r0, sp, #4	; 0x4
        20690c:	e28f1f07 	add	r1, pc, #28	; 0x1c
        206910:	eb66bc5f 	bl	1bb5a94 <$sprintf>
        206914:	e28dd004 	add	sp, sp, #4	; 0x4
        206918:	e1a0200d 	mov	r2, sp
        20691c:	e1a00004 	mov	r0, r4
        206920:	e3a03000 	mov	r3, #0	; 0x0
        206924:	e3a01002 	mov	r1, #2	; 0x2
        206928:	eb65f636 	bl	1b84208 <TTestReporter::$SendToTestAgent(unsigned long, char *, long)>
        20692c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        206930:	54657374 	strplbt	r7, [r5], -#884
        206934:	4167656e 	cmnmi	r7, lr, ror #10
        206938:	74204552 	strvct	r4, [r0], -#1362
        20693c:	52092564 	andpl	r2, r9, #419430400	; 0x19000000
        206940:	09257309 	stmeqdb	r5!, {r0, r3, r8, r9, ip, sp, lr}
        206944:	25730d00 	ldrcsb	r0, [r3, -#3328]!
    */
}

/**
 * Symbol: TAgentReporter::AgentReportStatus(long, char *)
 * Address: 00206948
 */
TAgentReporter::AgentReportStatus(long, char *) {
    /*
        206948:	e1a0c00d 	mov	ip, sp
        20694c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        206950:	e24cb004 	sub	fp, ip, #4	; 0x4
        206954:	e1a04000 	mov	r4, r0
        206958:	e1a05001 	mov	r5, r1
        20695c:	e1a06002 	mov	r6, r2
        206960:	e24ddf9a 	sub	sp, sp, #616	; 0x268
        206964:	e1a0000d 	mov	r0, sp
        206968:	eb67e173 	bl	1bfef3c <TDate::$__ct(void)>
        20696c:	e1a0000d 	mov	r0, sp
        206970:	eb67e17d 	bl	1bfef6c <TDate::$SetCurrentTime(void)>
        206974:	e28d20a8 	add	r2, sp, #168	; 0xa8
        206978:	e1a0000d 	mov	r0, sp
        20697c:	e3a03040 	mov	r3, #64	; 0x40
        206980:	e3a01000 	mov	r1, #0	; 0x0
        206984:	eb67e17b 	bl	1bfef78 <TDate::$ShortDateString(unsigned long, unsigned short *, unsigned long)>
        206988:	e28d2068 	add	r2, sp, #104	; 0x68
        20698c:	e1a0000d 	mov	r0, sp
        206990:	e3a03040 	mov	r3, #64	; 0x40
        206994:	e3a01000 	mov	r1, #0	; 0x0
        206998:	eb67e579 	bl	1bfff84 <TDate::$TimeString(unsigned long, unsigned short *, unsigned long)>
        20699c:	e28d1048 	add	r1, sp, #72	; 0x48
        2069a0:	e28d00a8 	add	r0, sp, #168	; 0xa8
        2069a4:	e3a03020 	mov	r3, #32	; 0x20
        2069a8:	e3a02001 	mov	r2, #1	; 0x1
        2069ac:	eb678273 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        2069b0:	e28d1028 	add	r1, sp, #40	; 0x28
        2069b4:	e28d0068 	add	r0, sp, #104	; 0x68
        2069b8:	e3a03020 	mov	r3, #32	; 0x20
        2069bc:	e3a02001 	mov	r2, #1	; 0x1
        2069c0:	eb67826e 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        2069c4:	e3360000 	teq	r6, #0	; 0x0
        2069c8:	028f6f20 	addeq	r6, pc, #128	; 0x80
        2069cc:	e2450002 	sub	r0, r5, #2	; 0x2
        2069d0:	e3a01000 	mov	r1, #0	; 0x0
        2069d4:	e3500007 	cmp	r0, #7	; 0x7
        2069d8:	908ff100 	addls	pc, pc, r0, lsl #2
        2069dc:	ea000056 	b	206b3c <TAgentReporter::AgentReportStatus(long, char *)+0x1f4>
        2069e0:	ea000031 	b	206aac <TAgentReporter::AgentReportStatus(long, char *)+0x164>
        2069e4:	ea000054 	b	206b3c <TAgentReporter::AgentReportStatus(long, char *)+0x1f4>
        2069e8:	ea000003 	b	2069fc <TAgentReporter::AgentReportStatus(long, char *)+0xb4>
        2069ec:	ea00002e 	b	206aac <TAgentReporter::AgentReportStatus(long, char *)+0x164>
        2069f0:	ea000001 	b	2069fc <TAgentReporter::AgentReportStatus(long, char *)+0xb4>
        2069f4:	ea000050 	b	206b3c <TAgentReporter::AgentReportStatus(long, char *)+0x1f4>
        2069f8:	ea00002b 	b	206aac <TAgentReporter::AgentReportStatus(long, char *)+0x164>
        2069fc:	e1a00004 	mov	r0, r4
        206a00:	eb65f1fc 	bl	1b831f8 <TAgentReporter::$ReportMemoryInfo(void)>
        206a04:	e28d3048 	add	r3, sp, #72	; 0x48
        206a08:	e92d0008 	stmdb	sp!, {r3}
        206a0c:	e28d302c 	add	r3, sp, #44	; 0x2c
        206a10:	e1a02006 	mov	r2, r6
        206a14:	e28d0f5b 	add	r0, sp, #364	; 0x16c
        206a18:	e28f1f0d 	add	r1, pc, #52	; 0x34
        206a1c:	eb66bc1c 	bl	1bb5a94 <$sprintf>
        206a20:	e28dd004 	add	sp, sp, #4	; 0x4
        206a24:	e594219c 	ldr	r2, [r4, #412]	; fField412
        206a28:	e5943198 	ldr	r3, [r4, #408]	; fField408
        206a2c:	e1520003 	cmp	r2, r3
        206a30:	91a03002 	movls	r3, r2
        206a34:	e28d00e8 	add	r0, sp, #232	; 0xe8
        206a38:	e28f1f10 	add	r1, pc, #64	; 0x40
        206a3c:	eb66bc14 	bl	1bb5a94 <$sprintf>
        206a40:	e28d10e8 	add	r1, sp, #232	; 0xe8
        206a44:	e28d0f5a 	add	r0, sp, #360	; 0x168
        206a48:	eb66bc15 	bl	1bb5aa4 <$strcat>
        206a4c:	ea00003e 	b	206b4c <TAgentReporter::AgentReportStatus(long, char *)+0x204>
        206a50:	00000000 	andeq	r0, r0, r0
        206a54:	54657374 	strplbt	r7, [r5], -#884
        206a58:	4167656e 	cmnmi	r7, lr, ror #10
        206a5c:	74204d53 	strvct	r4, [r0], -#3411
        206a60:	473a2074 	undefined
        206a64:	65737420 	ldrvsb	r7, [r3, -#1056]!
        206a68:	25732066 	ldrcsb	r2, [r3, -#102]!
        206a6c:	696e6973 	stmvsdb	lr!, {r0, r1, r4, r5, r6, r8, fp, sp, lr}^
        206a70:	68656420 	stmvsda	r5!, {r5, sl, sp, lr}^
        206a74:	61742025 	cmnvs	r4, r5, lsr #32
        206a78:	732c2025 	teqvc	ip, #37	; 0x25
        206a7c:	730d0000 	tstvc	sp, #0	; 0x0
        206a80:	2e2e2e2e 	cdpcs	14, 2, cr2, cr14, cr14, {1}
        206a84:	2e256420 	cdpcs	4, 2, cr6, cr5, cr0, {1}
        206a88:	6572726f 	ldrvsb	r7, [r2, -#623]!
        206a8c:	72732072 	rsbvcs	r2, r3, #114	; 0x72
        206a90:	65706f72 	ldrvsb	r6, [r0, -#3954]!
        206a94:	7465642c 	strvcbt	r6, [r5], -#1068
        206a98:	20256420 	eorcs	r6, r5, r0, lsr #8
        206a9c:	6572726f 	ldrvsb	r7, [r2, -#623]!
        206aa0:	7273206c 	rsbvcs	r2, r3, #108	; 0x6c
        206aa4:	6f676765 	swivs	0x00676765
        206aa8:	640d0000 	strvs	r0, [sp]
        206aac:	e3350005 	teq	r5, #5	; 0x5
        206ab0:	128f0f0b 	addne	r0, pc, #44	; 0x2c
        206ab4:	028f0f0c 	addeq	r0, pc, #48	; 0x30
        206ab8:	e28d3048 	add	r3, sp, #72	; 0x48
        206abc:	e28d2028 	add	r2, sp, #40	; 0x28
        206ac0:	e584119c 	str	r1, [r4, #412]	; fField412
        206ac4:	e92d000c 	stmdb	sp!, {r2, r3}
        206ac8:	e1a03000 	mov	r3, r0
        206acc:	e1a02006 	mov	r2, r6
        206ad0:	e28d0e17 	add	r0, sp, #368	; 0x170
        206ad4:	e28f1f06 	add	r1, pc, #24	; 0x18
        206ad8:	eb66bbed 	bl	1bb5a94 <$sprintf>
        206adc:	e28dd008 	add	sp, sp, #8	; 0x8
        206ae0:	ea000019 	b	206b4c <TAgentReporter::AgentReportStatus(long, char *)+0x204>
        206ae4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        206ae8:	00000000 	andeq	r0, r0, r0
        206aec:	7474736b 	ldrvcbt	r7, [r4], -#875	; fField875
        206af0:	00000000 	andeq	r0, r0, r0
        206af4:	2e2e2e2e 	cdpcs	14, 2, cr2, cr14, cr14, {1}
        206af8:	2e2e2e2e 	cdpcs	14, 2, cr2, cr14, cr14, {1}
        206afc:	2e2e2e2e 	cdpcs	14, 2, cr2, cr14, cr14, {1}
        206b00:	2e2e2e2e 	cdpcs	14, 2, cr2, cr14, cr14, {1}
        206b04:	2e2e2e2e 	cdpcs	14, 2, cr2, cr14, cr14, {1}
        206b08:	0d546573 	ldceql	5, cr6, [r4, -#460]
        206b0c:	74416765 	strvcb	r6, [r1], -#1893
        206b10:	6e74204d 	cdpvs	0, 7, cr2, cr4, cr13, {2}
        206b14:	53473a20 	cmppl	r7, #131072	; 0x20000
        206b18:	74657374 	strvcbt	r7, [r5], -#884
        206b1c:	20257320 	eorcs	r7, r5, r0, lsr #6
        206b20:	73746172 	cmnvc	r4, #-2147483620	; 0x8000001c
        206b24:	74656420 	strvcbt	r6, [r5], -#1056
        206b28:	696e2025 	stmvsdb	lr!, {r0, r2, r5, sp}^
        206b2c:	73206174 	teqvc	r0, #29	; 0x1d
        206b30:	2025732c 	eorcs	r7, r5, ip, lsr #6
        206b34:	2025730d 	eorcs	r7, r5, sp, lsl #6
        206b38:	00000000 	andeq	r0, r0, r0
        206b3c:	e28d1f5a 	add	r1, sp, #360	; 0x168
        206b40:	e1a00006 	mov	r0, r6
        206b44:	e3a020e0 	mov	r2, #224	; 0xe0
        206b48:	eb676101 	bl	1bdef54 <$BlockMove>
        206b4c:	e1a03005 	mov	r3, r5
        206b50:	e28d2f5a 	add	r2, sp, #360	; 0x168
        206b54:	e1a00004 	mov	r0, r4
        206b58:	e3a01005 	mov	r1, #5	; 0x5
        206b5c:	eb65f5a9 	bl	1b84208 <TTestReporter::$SendToTestAgent(unsigned long, char *, long)>
        206b60:	e3350002 	teq	r5, #2	; 0x2
        206b64:	13350005 	teqne	r5, #5	; 0x5
        206b68:	01a00004 	moveq	r0, r4
        206b6c:	0b65f1a1 	bleq	1b831f8 <TAgentReporter::$ReportMemoryInfo(void)>
        206b70:	e59d0024 	ldr	r0, [sp, #36]
        206b74:	eb66f190 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        206b78:	e59d0020 	ldr	r0, [sp, #32]
        206b7c:	eb66f18e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        206b80:	e59d001c 	ldr	r0, [sp, #28]
        206b84:	eb66f18c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        206b88:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAgentReporter::ReportMemoryInfo(void)
 * Address: 00206b8c
 */
TAgentReporter::ReportMemoryInfo(void) {
    /*
        206b8c:	e1a0c00d 	mov	ip, sp
        206b90:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        206b94:	e24cb004 	sub	fp, ip, #4	; 0x4
        206b98:	e1a04000 	mov	r4, r0
        206b9c:	e24ddc01 	sub	sp, sp, #256	; 0x100
        206ba0:	eb67717f 	bl	1be31a4 <$TotalSystemFree>
        206ba4:	e1a02000 	mov	r2, r0
        206ba8:	e1a0000d 	mov	r0, sp
        206bac:	e28f1f06 	add	r1, pc, #24	; 0x18
        206bb0:	eb66bbb7 	bl	1bb5a94 <$sprintf>
        206bb4:	e1a0200d 	mov	r2, sp
        206bb8:	e1a00004 	mov	r0, r4
        206bbc:	e3a03000 	mov	r3, #0	; 0x0
        206bc0:	e3a01001 	mov	r1, #1	; 0x1
        206bc4:	eb65f58f 	bl	1b84208 <TTestReporter::$SendToTestAgent(unsigned long, char *, long)>
        206bc8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        206bcc:	54657374 	strplbt	r7, [r5], -#884
        206bd0:	4167656e 	cmnmi	r7, lr, ror #10
        206bd4:	74204d53 	strvct	r4, [r0], -#3411
        206bd8:	4709546f 	strmi	r5, [r9, -pc, ror #8]
        206bdc:	74616c53 	strvcbt	r6, [r1], -#3155
        206be0:	79737465 	ldmvcdb	r3!, {r0, r2, r5, r6, sl, ip, sp, lr}^
        206be4:	6d467265 	sfmvs	f7, 2, [r6, -#404]
        206be8:	653d2564 	ldrvs	r2, [sp, -#1380]!
        206bec:	0d000000 	stceq	0, cr0, [r0]
    */
}

