#include "Newton.h"

/**
 * Symbol: OSWarningAlert(char *)
 * Address: 000308b4
 */
OSWarningAlert(char *) {
    /*
         308b4:	e59f0000 	ldr	r0, [pc, #0]	; 308bc <OSWarningAlert(char *)+0x8>
         308b8:	e1a0f00e 	mov	pc, lr
         308bc:	ffffd8eb 	swinv	0x00ffd8eb
    */
}

/**
 * Symbol: OSWarningAlert(unsigned short *)
 * Address: 000308c0
 */
OSWarningAlert(unsigned short *) {
    /*
         308c0:	e59f0000 	ldr	r0, [pc, #0]	; 308c8 <OSWarningAlert(unsigned short *)+0x8>
         308c4:	e1a0f00e 	mov	pc, lr
         308c8:	ffffd8eb 	swinv	0x00ffd8eb
    */
}

/**
 * Symbol: OSErrorAlert(char *)
 * Address: 00030bb4
 */
OSErrorAlert(char *) {
    /*
         30bb4:	e59f0000 	ldr	r0, [pc, #0]	; 30bbc <OSErrorAlert(char *)+0x8>
         30bb8:	e1a0f00e 	mov	pc, lr
         30bbc:	ffffd8eb 	swinv	0x00ffd8eb
    */
}

/**
 * Symbol: OSErrorAlert(unsigned short *)
 * Address: 00030bc0
 */
OSErrorAlert(unsigned short *) {
    /*
         30bc0:	e59f0000 	ldr	r0, [pc, #0]	; 30bc8 <OSErrorAlert(unsigned short *)+0x8>
         30bc4:	e1a0f00e 	mov	pc, lr
         30bc8:	ffffd8eb 	swinv	0x00ffd8eb
    */
}

/**
 * Symbol: OpenAppleTalk(unsigned long, unsigned short *, unsigned char)
 * Address: 000337a8
 */
OpenAppleTalk(unsigned long, unsigned short *, unsigned char) {
    /*
         337a8:	e1a0c00d 	mov	ip, sp
         337ac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         337b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         337b4:	e1a05000 	mov	r5, r0
         337b8:	e1a04001 	mov	r4, r1
         337bc:	e20270ff 	and	r7, r2, #255	; 0xff
         337c0:	e3a06000 	mov	r6, #0	; 0x0
         337c4:	e59f0040 	ldr	r0, [pc, #40]	; 3380c <OpenAppleTalk(unsigned long, unsigned short *, unsigned char)+0x64>
         337c8:	e5901000 	ldr	r1, [r0]
         337cc:	e2811001 	add	r1, r1, #1	; 0x1
         337d0:	e5801000 	str	r1, [r0]
         337d4:	e3310001 	teq	r1, #1	; 0x1
         337d8:	1a000044 	bne	338f0 <OpenAppleTalk(unsigned long, unsigned short *, unsigned char)+0x148>
         337dc:	e24dd018 	sub	sp, sp, #24	; 0x18
         337e0:	e1a0000d 	mov	r0, sp
         337e4:	eb6e08be 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         337e8:	e1a0000d 	mov	r0, sp
         337ec:	eb6910f5 	bl	1a77bc8 <$CMGetOptionsForAppleTalk(TOptionArray *)>
         337f0:	e1b06000 	movs	r6, r0
         337f4:	0a000005 	beq	33810 <OpenAppleTalk(unsigned long, unsigned short *, unsigned char)+0x68>
         337f8:	e1a0000d 	mov	r0, sp
         337fc:	e3a01000 	mov	r1, #0	; 0x0
         33800:	eb6e0cc9 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         33804:	e28dd018 	add	sp, sp, #24	; 0x18
         33808:	ea00002e 	b	338c8 <OpenAppleTalk(unsigned long, unsigned short *, unsigned char)+0x120>
         3380c:	0c10088c 	ldceq	8, cr0, [r0], -#560
         33810:	e24dd010 	sub	sp, sp, #16	; 0x10
         33814:	e1a0000d 	mov	r0, sp
         33818:	eb694ad3 	bl	1a8636c <TCMOAppleTalkLink::$__ct(void)>
         3381c:	e58d500c 	str	r5, [sp, #12]
         33820:	e1a0200d 	mov	r2, sp
         33824:	e59d1010 	ldr	r1, [sp, #16]
         33828:	e28d0010 	add	r0, sp, #16	; 0x10
         3382c:	eb6e191c 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         33830:	e1b06000 	movs	r6, r0
         33834:	0a000004 	beq	3384c <OpenAppleTalk(unsigned long, unsigned short *, unsigned char)+0xa4>
         33838:	e28d0010 	add	r0, sp, #16	; 0x10
         3383c:	e3a01000 	mov	r1, #0	; 0x0
         33840:	eb6e0cb9 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         33844:	e28dd028 	add	sp, sp, #40	; 0x28
         33848:	ea00001e 	b	338c8 <OpenAppleTalk(unsigned long, unsigned short *, unsigned char)+0x120>
         3384c:	e3340000 	teq	r4, #0	; 0x0
         33850:	0a000012 	beq	338a0 <OpenAppleTalk(unsigned long, unsigned short *, unsigned char)+0xf8>
         33854:	e24dd0d4 	sub	sp, sp, #212	; 0xd4
         33858:	e1a0000d 	mov	r0, sp
         3385c:	eb694abb 	bl	1a86350 <TCMOSystemName::$__ct(void)>
         33860:	e28d000c 	add	r0, sp, #12	; 0xc
         33864:	e1a01004 	mov	r1, r4
         33868:	e3a02063 	mov	r2, #99	; 0x63
         3386c:	eb6eebbd 	bl	1bee768 <$Ustrncpy>
         33870:	e1a0200d 	mov	r2, sp
         33874:	e59d10e4 	ldr	r1, [sp, #228]
         33878:	e28d00e4 	add	r0, sp, #228	; 0xe4
         3387c:	eb6e1908 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         33880:	e1b06000 	movs	r6, r0
         33884:	0a000004 	beq	3389c <OpenAppleTalk(unsigned long, unsigned short *, unsigned char)+0xf4>
         33888:	e28d00e4 	add	r0, sp, #228	; 0xe4
         3388c:	e3a01000 	mov	r1, #0	; 0x0
         33890:	eb6e0ca5 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         33894:	e28dd0fc 	add	sp, sp, #252	; 0xfc
         33898:	ea00000a 	b	338c8 <OpenAppleTalk(unsigned long, unsigned short *, unsigned char)+0x120>
         3389c:	e28dd0d4 	add	sp, sp, #212	; 0xd4
         338a0:	e24dd00c 	sub	sp, sp, #12	; 0xc
         338a4:	e1a0100d 	mov	r1, sp
         338a8:	e28d001c 	add	r0, sp, #28	; 0x1c
         338ac:	eb6e10c3 	bl	1bb7bc0 <$CMStartService(TOptionArray *, TServiceInfo *)>
         338b0:	e1b06000 	movs	r6, r0
         338b4:	0a000008 	beq	338dc <OpenAppleTalk(unsigned long, unsigned short *, unsigned char)+0x134>
         338b8:	e28d001c 	add	r0, sp, #28	; 0x1c
         338bc:	e3a01000 	mov	r1, #0	; 0x0
         338c0:	eb6e0c99 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         338c4:	e28dd034 	add	sp, sp, #52	; 0x34
         338c8:	e3360000 	teq	r6, #0	; 0x0
         338cc:	11a01007 	movne	r1, r7
         338d0:	11a00005 	movne	r0, r5
         338d4:	1b693a0f 	blne	1a82118 <$CloseAppleTalk(unsigned long, unsigned char)>
         338d8:	ea000004 	b	338f0 <OpenAppleTalk(unsigned long, unsigned short *, unsigned char)+0x148>
         338dc:	e28dd01c 	add	sp, sp, #28	; 0x1c
         338e0:	e1a0000d 	mov	r0, sp
         338e4:	e3a01000 	mov	r1, #0	; 0x0
         338e8:	eb6e0c8f 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         338ec:	e28dd018 	add	sp, sp, #24	; 0x18
         338f0:	e1a00006 	mov	r0, r6
         338f4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: OpenAppleTalk(unsigned long)
 * Address: 000338f8
 */
OpenAppleTalk(unsigned long) {
    /*
         338f8:	e3a02001 	mov	r2, #1	; 0x1
         338fc:	e3a01000 	mov	r1, #0	; 0x0
         33900:	ea694257 	b	1a84264 <$OpenAppleTalk(unsigned long, unsigned short *, unsigned char)>
    */
}

/**
 * Symbol: OpenAppleTalkPart(unsigned long, TUPort *, unsigned short *, unsigned char)
 * Address: 000339bc
 */
OpenAppleTalkPart(unsigned long, TUPort *, unsigned short *, unsigned char) {
    /*
         339bc:	e1a0c00d 	mov	ip, sp
         339c0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         339c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         339c8:	e1a05000 	mov	r5, r0
         339cc:	e1a04002 	mov	r4, r2
         339d0:	e20380ff 	and	r8, r3, #255	; 0xff
         339d4:	e1a00001 	mov	r0, r1
         339d8:	eb69041e 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         339dc:	e280cd9d 	add	ip, r0, #10048	; 0x2740
         339e0:	e37c0013 	cmn	ip, #19	; 0x13
         339e4:	059f006c 	ldreq	r0, [pc, #6c]	; 33a58 <OpenAppleTalkPart(unsigned long, TUPort *, unsigned short *, unsigned char)+0x9c>
         339e8:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         339ec:	e3300000 	teq	r0, #0	; 0x0
         339f0:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         339f4:	e24dd0f4 	sub	sp, sp, #244	; 0xf4
         339f8:	e28d0014 	add	r0, sp, #20	; 0x14
         339fc:	eb6ec20d 	bl	1be4238 <TAEvent::$__ct(void)>
         33a00:	e59f7054 	ldr	r7, [pc, #54]	; 33a5c <OpenAppleTalkPart(unsigned long, TUPort *, unsigned short *, unsigned char)+0xa0>
         33a04:	e3a06000 	mov	r6, #0	; 0x0
         33a08:	e58d6020 	str	r6, [sp, #32]
         33a0c:	e58d7014 	str	r7, [sp, #20]
         33a10:	e58d601c 	str	r6, [sp, #28]
         33a14:	e59f0044 	ldr	r0, [pc, #44]	; 33a60 <OpenAppleTalkPart(unsigned long, TUPort *, unsigned short *, unsigned char)+0xa4>
         33a18:	e58d0018 	str	r0, [sp, #24]
         33a1c:	e3a00005 	mov	r0, #5	; 0x5
         33a20:	e58d0024 	str	r0, [sp, #36]
         33a24:	e1a0000d 	mov	r0, sp
         33a28:	eb6ec202 	bl	1be4238 <TAEvent::$__ct(void)>
         33a2c:	e58d600c 	str	r6, [sp, #12]
         33a30:	e58d7000 	str	r7, [sp]
         33a34:	e3340000 	teq	r4, #0	; 0x0
         33a38:	e58d5028 	str	r5, [sp, #40]
         33a3c:	e58d6008 	str	r6, [sp, #8]
         33a40:	0a000007 	beq	33a64 <OpenAppleTalkPart(unsigned long, TUPort *, unsigned short *, unsigned char)+0xa8>
         33a44:	e28d002c 	add	r0, sp, #44	; 0x2c
         33a48:	e1a01004 	mov	r1, r4
         33a4c:	e3a02063 	mov	r2, #99	; 0x63
         33a50:	eb6eeb44 	bl	1bee768 <$Ustrncpy>
         33a54:	ea000004 	b	33a6c <OpenAppleTalkPart(unsigned long, TUPort *, unsigned short *, unsigned char)+0xb0>
         33a58:	ffffd113 	swinv	0x00ffd113
         33a5c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         33a60:	61746c6b 	cmnvs	r4, fp, ror #24
         33a64:	e5cd602d 	strb	r6, [sp, #45]
         33a68:	e5cd602c 	strb	r6, [sp, #44]
         33a6c:	e1a03008 	mov	r3, r8
         33a70:	e3a02000 	mov	r2, #0	; 0x0
         33a74:	e92d000c 	stmdb	sp!, {r2, r3}
         33a78:	e28d2008 	add	r2, sp, #8	; 0x8
         33a7c:	e28d001c 	add	r0, sp, #28	; 0x1c
         33a80:	e3a03014 	mov	r3, #20	; 0x14
         33a84:	e3a010e0 	mov	r1, #224	; 0xe0
         33a88:	eb69358d 	bl	1a810c4 <$ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5>
         33a8c:	e28dd008 	add	sp, sp, #8	; 0x8
         33a90:	e3300000 	teq	r0, #0	; 0x0
         33a94:	059d0008 	ldreq	r0, [sp, #8]
         33a98:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: OpenAppleTalkPart(unsigned long, TUPort *)
 * Address: 00033a9c
 */
OpenAppleTalkPart(unsigned long, TUPort *) {
    /*
         33a9c:	e3a03001 	mov	r3, #1	; 0x1
         33aa0:	e3a02000 	mov	r2, #0	; 0x0
         33aa4:	ea6941ed 	b	1a84260 <$OpenAppleTalkPart(unsigned long, TUPort *, unsigned short *, unsigned char)>
    */
}

/**
 * Symbol: OtherViewInUse(TView *)
 * Address: 00036960
 */
OtherViewInUse(TView *) {
    /*
         36960:	e1a0c00d 	mov	ip, sp
         36964:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         36968:	e24cb004 	sub	fp, ip, #4	; 0x4
         3696c:	e3a06000 	mov	r6, #0	; 0x0
         36970:	e3300000 	teq	r0, #0	; 0x0
         36974:	15b06004 	ldrne	r6, [r0, #4]!
         36978:	e3a04000 	mov	r4, #0	; 0x0
         3697c:	e59f5060 	ldr	r5, [pc, #60]	; 369e4 <OtherViewInUse(TView *)+0x84>
         36980:	e5950000 	ldr	r0, [r5]
         36984:	e590000c 	ldr	r0, [r0, #12]
         36988:	e3500000 	cmp	r0, #0	; 0x0
         3698c:	9a000012 	bls	369dc <OtherViewInUse(TView *)+0x7c>
         36990:	e1a01004 	mov	r1, r4
         36994:	e5952000 	ldr	r2, [r5]
         36998:	e1a00002 	mov	r0, r2
         3699c:	e5922000 	ldr	r2, [r2]
         369a0:	e1a0e00f 	mov	lr, pc
         369a4:	e282f01c 	add	pc, r2, #28	; 0x1c
         369a8:	e5900000 	ldr	r0, [r0]
         369ac:	e590102c 	ldr	r1, [r0, #44]
         369b0:	e1310006 	teq	r1, r6
         369b4:	0a000003 	beq	369c8 <OtherViewInUse(TView *)+0x68>
         369b8:	e5900008 	ldr	r0, [r0, #8]
         369bc:	e3500000 	cmp	r0, #0	; 0x0
         369c0:	c3a00001 	movgt	r0, #1	; 0x1
         369c4:	c91ba870 	ldmgtdb	fp, {r4, r5, r6, fp, sp, pc}
         369c8:	e2844001 	add	r4, r4, #1	; 0x1
         369cc:	e5950000 	ldr	r0, [r5]
         369d0:	e590000c 	ldr	r0, [r0, #12]
         369d4:	e1500004 	cmp	r0, r4
         369d8:	8affffec 	bhi	36990 <OtherViewInUse(TView *)+0x30>
         369dc:	e3a00000 	mov	r0, #0	; 0x0
         369e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         369e4:	0c1008a0 	ldceq	8, cr0, [r0], -#640
    */
}

/**
 * Symbol: OpenIREndpointForBitBang(void)
 * Address: 0003d4a8
 */
OpenIREndpointForBitBang(void) {
    /*
         3d4a8:	e1a0c00d 	mov	ip, sp
         3d4ac:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         3d4b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         3d4b4:	e3a00000 	mov	r0, #0	; 0x0
         3d4b8:	e52d0004 	str	r0, [sp, -#4]!
         3d4bc:	e24dd018 	sub	sp, sp, #24	; 0x18
         3d4c0:	e1a0000d 	mov	r0, sp
         3d4c4:	eb6de186 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         3d4c8:	e1a0000d 	mov	r0, sp
         3d4cc:	eb6dedea 	bl	1bb8c7c <TOptionArray::$Init(void)>
         3d4d0:	e3300000 	teq	r0, #0	; 0x0
         3d4d4:	0a000004 	beq	3d4ec <OpenIREndpointForBitBang(void)+0x44>
         3d4d8:	e1a0000d 	mov	r0, sp
         3d4dc:	e3a01000 	mov	r1, #0	; 0x0
         3d4e0:	eb6de591 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         3d4e4:	e28dd018 	add	sp, sp, #24	; 0x18
         3d4e8:	ea000022 	b	3d578 <OpenIREndpointForBitBang(void)+0xd0>
         3d4ec:	e24dd00c 	sub	sp, sp, #12	; 0xc
         3d4f0:	e1a0000d 	mov	r0, sp
         3d4f4:	e3a01303 	mov	r1, #201326592	; 0xc000000
         3d4f8:	eb6de58a 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         3d4fc:	e1a0000d 	mov	r0, sp
         3d500:	e59f1044 	ldr	r1, [pc, #44]	; 3d54c <OpenIREndpointForBitBang(void)+0xa4>
         3d504:	eb6df60a 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
         3d508:	e1a0200d 	mov	r2, sp
         3d50c:	e59d100c 	ldr	r1, [sp, #12]
         3d510:	e28d000c 	add	r0, sp, #12	; 0xc
         3d514:	eb6df1e2 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         3d518:	e3300000 	teq	r0, #0	; 0x0
         3d51c:	1a000005 	bne	3d538 <OpenIREndpointForBitBang(void)+0x90>
         3d520:	e28d1024 	add	r1, sp, #36	; 0x24
         3d524:	e28d000c 	add	r0, sp, #12	; 0xc
         3d528:	e3a02001 	mov	r2, #1	; 0x1
         3d52c:	eb6de99b 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
         3d530:	e3300000 	teq	r0, #0	; 0x0
         3d534:	0a000005 	beq	3d550 <OpenIREndpointForBitBang(void)+0xa8>
         3d538:	e28d000c 	add	r0, sp, #12	; 0xc
         3d53c:	e3a01000 	mov	r1, #0	; 0x0
         3d540:	eb6de579 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         3d544:	e28dd024 	add	sp, sp, #36	; 0x24
         3d548:	ea00000a 	b	3d578 <OpenIREndpointForBitBang(void)+0xd0>
         3d54c:	74766972 	ldrvcbt	r6, [r6], -#2418
         3d550:	e3a01000 	mov	r1, #0	; 0x0
         3d554:	e59d0024 	ldr	r0, [sp, #36]
         3d558:	eb6dedac 	bl	1bb8c10 <TEndpoint::$EasyOpen(unsigned long)>
         3d55c:	e3300000 	teq	r0, #0	; 0x0
         3d560:	0a000006 	beq	3d580 <OpenIREndpointForBitBang(void)+0xd8>
         3d564:	e28d000c 	add	r0, sp, #12	; 0xc
         3d568:	e3a01000 	mov	r1, #0	; 0x0
         3d56c:	eb6de56e 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         3d570:	e5bd0024 	ldr	r0, [sp, #36]!
         3d574:	eb6de99d 	bl	1bb7bf0 <TEndpoint::$Delete(void)>
         3d578:	e3a00000 	mov	r0, #0	; 0x0
         3d57c:	ea000004 	b	3d594 <OpenIREndpointForBitBang(void)+0xec>
         3d580:	e28dd00c 	add	sp, sp, #12	; 0xc
         3d584:	e1a0000d 	mov	r0, sp
         3d588:	e3a01000 	mov	r1, #0	; 0x0
         3d58c:	eb6de566 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         3d590:	e5bd0018 	ldr	r0, [sp, #24]!
         3d594:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: OpenCommTool(unsigned long, TOptionArray *, TCMService *)
 * Address: 00070a1c
 */
OpenCommTool(unsigned long, TOptionArray *, TCMService *) {
    /*
         70a1c:	e1a0c00d 	mov	ip, sp
         70a20:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         70a24:	e24cb004 	sub	fp, ip, #4	; 0x4
         70a28:	e1a06000 	mov	r6, r0
         70a2c:	e1a04001 	mov	r4, r1
         70a30:	e1a05002 	mov	r5, r2
         70a34:	e3a070e9 	mov	r7, #233	; 0xe9
         70a38:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
         70a3c:	e3a00000 	mov	r0, #0	; 0x0
         70a40:	eb6dfb65 	bl	1bef7dc <TCommToolOpenRequest::$__ct(void)>
         70a44:	e1b08000 	movs	r8, r0
         70a48:	0a000025 	beq	70ae4 <OpenCommTool(unsigned long, TOptionArray *, TCMService *)+0xc8>
         70a4c:	e3a00000 	mov	r0, #0	; 0x0
         70a50:	eb66f312 	bl	1a2d6a0 <TCommToolOpenReply::$__ct(void)>
         70a54:	e1b09000 	movs	r9, r0
         70a58:	0a000021 	beq	70ae4 <OpenCommTool(unsigned long, TOptionArray *, TCMService *)+0xc8>
         70a5c:	e588400c 	str	r4, [r8, #12]
         70a60:	e5940000 	ldr	r0, [r4]
         70a64:	e5880010 	str	r0, [r8, #16]
         70a68:	e3a00000 	mov	r0, #0	; 0x0
         70a6c:	e5c80014 	strb	r0, [r8, #20]
         70a70:	eb665216 	bl	1a052d0 <TAsyncServiceMessage::$__ct(void)>
         70a74:	e1b04000 	movs	r4, r0
         70a78:	0a000019 	beq	70ae4 <OpenCommTool(unsigned long, TOptionArray *, TCMService *)+0xc8>
         70a7c:	e1a01005 	mov	r1, r5
         70a80:	e1a00004 	mov	r0, r4
         70a84:	eb665630 	bl	1a0634c <TAsyncServiceMessage::$Init(TCMService *)>
         70a88:	e1b07000 	movs	r7, r0
         70a8c:	1a000012 	bne	70adc <OpenCommTool(unsigned long, TOptionArray *, TCMService *)+0xc0>
         70a90:	e24dd008 	sub	sp, sp, #8	; 0x8
         70a94:	e1a01006 	mov	r1, r6
         70a98:	e1a0000d 	mov	r0, sp
         70a9c:	eb6d730a 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
         70aa0:	e3a03004 	mov	r3, #4	; 0x4
         70aa4:	e3a02014 	mov	r2, #20	; 0x14
         70aa8:	e1a01009 	mov	r1, r9
         70aac:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         70ab0:	e1a02008 	mov	r2, r8
         70ab4:	e28d100c 	add	r1, sp, #12	; 0xc
         70ab8:	e1a00004 	mov	r0, r4
         70abc:	e3a03018 	mov	r3, #24	; 0x18
         70ac0:	eb665a32 	bl	1a07390 <TAsyncServiceMessage::$Send(TUPort *, void *, unsigned long, void *, unsigned long, unsigned long)>
         70ac4:	e28dd00c 	add	sp, sp, #12	; 0xc
         70ac8:	e1a07000 	mov	r7, r0
         70acc:	e1a0000d 	mov	r0, sp
         70ad0:	e3a01000 	mov	r1, #0	; 0x0
         70ad4:	eb6d7712 	bl	1bce724 <TUObject::$__dt(void)>
         70ad8:	e28dd008 	add	sp, sp, #8	; 0x8
         70adc:	e3370000 	teq	r7, #0	; 0x0
         70ae0:	03a07001 	moveq	r7, #1	; 0x1
         70ae4:	e1a00007 	mov	r0, r7
         70ae8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: OffsetCorrectionInfo__FRC6RefVarP5TViewlN23
 * Address: 000762c0
 */
void globals::OffsetCorrectionInfo() {
    /*
         762c0:	e1a0c00d 	mov	ip, sp
         762c4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         762c8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         762cc:	e24cb014 	sub	fp, ip, #20	; 0x14
         762d0:	e1a04002 	mov	r4, r2
         762d4:	e24dd004 	sub	sp, sp, #4	; 0x4
         762d8:	e59b0004 	ldr	r0, [fp, #4]
         762dc:	e5900000 	ldr	r0, [r0]
         762e0:	e5900000 	ldr	r0, [r0]
         762e4:	e3300002 	teq	r0, #2	; 0x2
         762e8:	0a0000b2 	beq	765b8 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x2f8>
         762ec:	e24dd00c 	sub	sp, sp, #12	; 0xc
         762f0:	e59b3010 	ldr	r3, [fp, #16]
         762f4:	e3330001 	teq	r3, #1	; 0x1
         762f8:	059b1014 	ldreq	r1, [fp, #20]
         762fc:	03310000 	teqeq	r1, #0	; 0x0
         76300:	13a01000 	movne	r1, #0	; 0x0
         76304:	03a01001 	moveq	r1, #1	; 0x1
         76308:	e20110ff 	and	r1, r1, #255	; 0xff
         7630c:	e3e07000 	mvn	r7, #0	; 0x0
         76310:	e3e06000 	mvn	r6, #0	; 0x0
         76314:	e58d1008 	str	r1, [sp, #8]
         76318:	e59b3010 	ldr	r3, [fp, #16]
         7631c:	e0841003 	add	r1, r4, r3
         76320:	e58d100c 	str	r1, [sp, #12]
         76324:	e58d1004 	str	r1, [sp, #4]
         76328:	e59f1134 	ldr	r1, [pc, #134]	; 76464 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x1a4>
         7632c:	e5911000 	ldr	r1, [r1]
         76330:	e5911000 	ldr	r1, [r1]
         76334:	eb6d37c9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         76338:	eb6d2f83 	bl	1bc214c <$AllocateRefHandle(long)>
         7633c:	e58d0000 	str	r0, [sp]
         76340:	e5900000 	ldr	r0, [r0]
         76344:	eb6d3bd8 	bl	1bc52ac <$Length(long)>
         76348:	e1a0a000 	mov	sl, r0
         7634c:	e3a05000 	mov	r5, #0	; 0x0
         76350:	e3500000 	cmp	r0, #0	; 0x0
         76354:	da00008b 	ble	76588 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x2c8>
         76358:	e24dd008 	sub	sp, sp, #8	; 0x8
         7635c:	e1a01005 	mov	r1, r5
         76360:	e59d0008 	ldr	r0, [sp, #8]
         76364:	e5900000 	ldr	r0, [r0]
         76368:	eb6d37b9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7636c:	eb6d2f76 	bl	1bc214c <$AllocateRefHandle(long)>
         76370:	e58d0004 	str	r0, [sp, #4]
         76374:	e3a00000 	mov	r0, #0	; 0x0
         76378:	e58d0000 	str	r0, [sp]
         7637c:	e59b1008 	ldr	r1, [fp, #8]
         76380:	e3310000 	teq	r1, #0	; 0x0
         76384:	0a00000d 	beq	763c0 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x100>
         76388:	e59f00d8 	ldr	r0, [pc, #d8]	; 76468 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x1a8>
         7638c:	e5900000 	ldr	r0, [r0]
         76390:	e5901000 	ldr	r1, [r0]
         76394:	e59d0004 	ldr	r0, [sp, #4]
         76398:	e5900000 	ldr	r0, [r0]
         7639c:	eb6d37af 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         763a0:	e3100003 	tst	r0, #3	; 0x3
         763a4:	01a00140 	moveq	r0, r0, asr #2
         763a8:	0a000000 	beq	763b0 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0xf0>
         763ac:	eb6d2f5a 	bl	1bc211c <$_RINTError(long)>
         763b0:	e59b1008 	ldr	r1, [fp, #8]
         763b4:	e5911004 	ldr	r1, [r1, #4]
         763b8:	e1300001 	teq	r0, r1
         763bc:	1a00006b 	bne	76570 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x2b0>
         763c0:	e59f10a4 	ldr	r1, [pc, #a4]	; 7646c <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x1ac>
         763c4:	e5910000 	ldr	r0, [r1]
         763c8:	e5901000 	ldr	r1, [r0]
         763cc:	e59d0004 	ldr	r0, [sp, #4]
         763d0:	e5900000 	ldr	r0, [r0]
         763d4:	eb6d37a1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         763d8:	e3100003 	tst	r0, #3	; 0x3
         763dc:	01a00140 	moveq	r0, r0, asr #2
         763e0:	0a000000 	beq	763e8 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x128>
         763e4:	eb6d2f4c 	bl	1bc211c <$_RINTError(long)>
         763e8:	e1a08000 	mov	r8, r0
         763ec:	e59f107c 	ldr	r1, [pc, #7c]	; 76470 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x1b0>
         763f0:	e5910000 	ldr	r0, [r1]
         763f4:	e5901000 	ldr	r1, [r0]
         763f8:	e59d0004 	ldr	r0, [sp, #4]
         763fc:	e5900000 	ldr	r0, [r0]
         76400:	eb6d3796 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         76404:	e3100003 	tst	r0, #3	; 0x3
         76408:	01a00140 	moveq	r0, r0, asr #2
         7640c:	0a000000 	beq	76414 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x154>
         76410:	eb6d2f41 	bl	1bc211c <$_RINTError(long)>
         76414:	e1a09000 	mov	r9, r0
         76418:	e59d0010 	ldr	r0, [sp, #16]
         7641c:	e3300000 	teq	r0, #0	; 0x0
         76420:	0a000005 	beq	7643c <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x17c>
         76424:	e1340009 	teq	r4, r9
         76428:	01a07005 	moveq	r7, r5
         7642c:	0a000002 	beq	7643c <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x17c>
         76430:	e2480001 	sub	r0, r8, #1	; 0x1
         76434:	e1300004 	teq	r0, r4
         76438:	01a06005 	moveq	r6, r5
         7643c:	e1340008 	teq	r4, r8
         76440:	059d000c 	ldreq	r0, [sp, #12]
         76444:	01300009 	teqeq	r0, r9
         76448:	0a000034 	beq	76520 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x260>
         7644c:	e1540008 	cmp	r4, r8
         76450:	ca000007 	bgt	76474 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x1b4>
         76454:	e59d000c 	ldr	r0, [sp, #12]
         76458:	e1500008 	cmp	r0, r8
         7645c:	da000008 	ble	76484 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x1c4>
         76460:	ea000005 	b	7647c <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x1bc>
         76464:	006831f8 	streqd	r3, [r8], -#24
         76468:	00683160 	rsbeq	r3, r8, r0, ror #2
         7646c:	00684800 	rsbeq	r4, r8, r0, lsl #16
         76470:	00684850 	rsbeq	r4, r8, r0, asr r8
         76474:	e1590004 	cmp	r9, r4
         76478:	da000001 	ble	76484 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x1c4>
         7647c:	e3a00001 	mov	r0, #1	; 0x1
         76480:	ea000000 	b	76488 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x1c8>
         76484:	e3a00000 	mov	r0, #0	; 0x0
         76488:	e31000ff 	tst	r0, #255	; 0xff
         7648c:	13a00001 	movne	r0, #1	; 0x1
         76490:	158d0000 	strne	r0, [sp]
         76494:	1a00001e 	bne	76514 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x254>
         76498:	e59d0014 	ldr	r0, [sp, #20]
         7649c:	e1500008 	cmp	r0, r8
         764a0:	ca00001b 	bgt	76514 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x254>
         764a4:	e24dd008 	sub	sp, sp, #8	; 0x8
         764a8:	e59b0014 	ldr	r0, [fp, #20]
         764ac:	e0880000 	add	r0, r8, r0
         764b0:	e59b3010 	ldr	r3, [fp, #16]
         764b4:	e0400003 	sub	r0, r0, r3
         764b8:	e1a00100 	mov	r0, r0, lsl #2
         764bc:	eb6d2f22 	bl	1bc214c <$AllocateRefHandle(long)>
         764c0:	e58d0000 	str	r0, [sp]
         764c4:	e1a0200d 	mov	r2, sp
         764c8:	e51f1064 	ldr	r1, [pc, #ffffff9c]	; 7646c <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x1ac>
         764cc:	e28d000c 	add	r0, sp, #12	; 0xc
         764d0:	eb6d3fa4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         764d4:	e59d0000 	ldr	r0, [sp]
         764d8:	eb6d3337 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         764dc:	e59b0014 	ldr	r0, [fp, #20]
         764e0:	e0890000 	add	r0, r9, r0
         764e4:	e59b3010 	ldr	r3, [fp, #16]
         764e8:	e0400003 	sub	r0, r0, r3
         764ec:	e1a00100 	mov	r0, r0, lsl #2
         764f0:	eb6d2f15 	bl	1bc214c <$AllocateRefHandle(long)>
         764f4:	e58d0004 	str	r0, [sp, #4]
         764f8:	e28d2004 	add	r2, sp, #4	; 0x4
         764fc:	e51f1094 	ldr	r1, [pc, #ffffff6c]	; 76470 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x1b0>
         76500:	e28d000c 	add	r0, sp, #12	; 0xc
         76504:	eb6d3f97 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         76508:	e59d0004 	ldr	r0, [sp, #4]
         7650c:	eb6d332a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76510:	e28dd008 	add	sp, sp, #8	; 0x8
         76514:	e59d0000 	ldr	r0, [sp]
         76518:	e3300000 	teq	r0, #0	; 0x0
         7651c:	0a000013 	beq	76570 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x2b0>
         76520:	e59b0004 	ldr	r0, [fp, #4]
         76524:	e5900000 	ldr	r0, [r0]
         76528:	e5908000 	ldr	r8, [r0]
         7652c:	eb68d42a 	bl	1aab5dc <$CorrectInfo(void)>
         76530:	e1380000 	teq	r8, r0
         76534:	028d0004 	addeq	r0, sp, #4	; 0x4
         76538:	0b68c7cf 	bleq	1aa847c <$AutoRemove(RefVar const &)>
         7653c:	e1a01005 	mov	r1, r5
         76540:	e28d0008 	add	r0, sp, #8	; 0x8
         76544:	eb6909c5 	bl	1ab8c60 <$RemoveArrayElement(RefVar, long)>
         76548:	e1370005 	teq	r7, r5
         7654c:	03e07000 	mvneq	r7, #0	; 0x0
         76550:	e1550007 	cmp	r5, r7
         76554:	d2477001 	suble	r7, r7, #1	; 0x1
         76558:	e1360005 	teq	r6, r5
         7655c:	03e06000 	mvneq	r6, #0	; 0x0
         76560:	e1550006 	cmp	r5, r6
         76564:	d2466001 	suble	r6, r6, #1	; 0x1
         76568:	e24aa001 	sub	sl, sl, #1	; 0x1
         7656c:	e2455001 	sub	r5, r5, #1	; 0x1
         76570:	e59d0004 	ldr	r0, [sp, #4]
         76574:	eb6d3310 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76578:	e28dd008 	add	sp, sp, #8	; 0x8
         7657c:	e2855001 	add	r5, r5, #1	; 0x1
         76580:	e155000a 	cmp	r5, sl
         76584:	baffff73 	blt	76358 <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x98>
         76588:	e59d0008 	ldr	r0, [sp, #8]
         7658c:	e3300000 	teq	r0, #0	; 0x0
         76590:	13770001 	cmnne	r7, #1	; 0x1
         76594:	13760001 	cmnne	r6, #1	; 0x1
         76598:	0a000003 	beq	765ac <OffsetCorrectionInfo__FRC6RefVarP5TViewlN23+0x2ec>
         7659c:	e1a02006 	mov	r2, r6
         765a0:	e1a01007 	mov	r1, r7
         765a4:	e59b0004 	ldr	r0, [fp, #4]
         765a8:	eb69015e 	bl	1ab6b28 <$MergeWordInfo__FRC6RefVarlT2>
         765ac:	e59d0000 	ldr	r0, [sp]
         765b0:	eb6d3301 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         765b4:	e28dd00c 	add	sp, sp, #12	; 0xc
         765b8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: OffsetCorrectionInfo__FP5TViewlN22
 * Address: 0007779c
 */
void globals::OffsetCorrectionInfo() {
    /*
         7779c:	e1a0c00d 	mov	ip, sp
         777a0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         777a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         777a8:	e1a06000 	mov	r6, r0
         777ac:	e1a05001 	mov	r5, r1
         777b0:	e1a07002 	mov	r7, r2
         777b4:	e1a04003 	mov	r4, r3
         777b8:	e24dd004 	sub	sp, sp, #4	; 0x4
         777bc:	eb68cf86 	bl	1aab5dc <$CorrectInfo(void)>
         777c0:	eb6d2a61 	bl	1bc214c <$AllocateRefHandle(long)>
         777c4:	e1a03004 	mov	r3, r4
         777c8:	e58d0000 	str	r0, [sp]
         777cc:	e92d0008 	stmdb	sp!, {r3}
         777d0:	e1a03007 	mov	r3, r7
         777d4:	e1a02005 	mov	r2, r5
         777d8:	e1a01006 	mov	r1, r6
         777dc:	e28d0004 	add	r0, sp, #4	; 0x4
         777e0:	eb68fcda 	bl	1ab6b50 <$OffsetCorrectionInfo__FRC6RefVarP5TViewlN23>
         777e4:	e5bd0004 	ldr	r0, [sp, #4]!
         777e8:	eb6d2e73 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         777ec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: OpenKeypadFor(TView *)
 * Address: 000791f8
 */
OpenKeypadFor(TView *) {
    /*
         791f8:	e1a0c00d 	mov	ip, sp
         791fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         79200:	e24cb004 	sub	fp, ip, #4	; 0x4
         79204:	e1a04000 	mov	r4, r0
         79208:	e24dd008 	sub	sp, sp, #8	; 0x8
         7920c:	e59f007c 	ldr	r0, [pc, #7c]	; 79290 <OpenKeypadFor(TView *)+0x98>
         79210:	e3a01001 	mov	r1, #1	; 0x1
         79214:	eb6d23c7 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         79218:	eb6d23cb 	bl	1bc214c <$AllocateRefHandle(long)>
         7921c:	e58d0004 	str	r0, [sp, #4]
         79220:	e28d5004 	add	r5, sp, #4	; 0x4
         79224:	e5940024 	ldr	r0, [r4, #36]
         79228:	e5902000 	ldr	r2, [r0]
         7922c:	e59d0004 	ldr	r0, [sp, #4]
         79230:	e5900000 	ldr	r0, [r0]
         79234:	e3a01000 	mov	r1, #0	; 0x0
         79238:	eb6d3446 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         7923c:	e59f0050 	ldr	r0, [pc, #50]	; 79294 <OpenKeypadFor(TView *)+0x9c>
         79240:	e5900000 	ldr	r0, [r0]
         79244:	eb6d23c0 	bl	1bc214c <$AllocateRefHandle(long)>
         79248:	e1a04000 	mov	r4, r0
         7924c:	e59f0044 	ldr	r0, [pc, #44]	; 79298 <OpenKeypadFor(TView *)+0xa0>
         79250:	e5900000 	ldr	r0, [r0]
         79254:	e5901000 	ldr	r1, [r0]
         79258:	e5940000 	ldr	r0, [r4]
         7925c:	eb6d2bff 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         79260:	eb6d23b9 	bl	1bc214c <$AllocateRefHandle(long)>
         79264:	e58d0000 	str	r0, [sp]
         79268:	e1a0000d 	mov	r0, sp
         7926c:	e1a01005 	mov	r1, r5
         79270:	eb6d27d6 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
         79274:	e59d0000 	ldr	r0, [sp]
         79278:	eb6d27cf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7927c:	e1a00004 	mov	r0, r4
         79280:	eb6d27cd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         79284:	e59d0004 	ldr	r0, [sp, #4]
         79288:	eb6d27cb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7928c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         79290:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         79294:	0c10544c 	ldceq	4, cr5, [r0], -#304
         79298:	00683b60 	rsbeq	r3, r8, r0, ror #22
    */
}

/**
 * Symbol: OrigPhrase(RefVar const &)
 * Address: 00080a70
 */
OrigPhrase(RefVar const &) {
    /*
         80a70:	e59f000c 	ldr	r0, [pc, #c]	; 80a84 <OrigPhrase(RefVar const &)+0x14>
         80a74:	e5900000 	ldr	r0, [r0]
         80a78:	e5900110 	ldr	r0, [r0, #272]
         80a7c:	e5900000 	ldr	r0, [r0]
         80a80:	e1a0f00e 	mov	pc, lr
         80a84:	0c100bbc 	ldceq	11, cr0, [r0], -#752
    */
}

/**
 * Symbol: OSToRec(int)
 * Address: 00087d7c
 */
OSToRec(int) {
    /*
         87d7c:	e20000ff 	and	r0, r0, #255	; 0xff
         87d80:	e350007f 	cmp	r0, #127	; 0x7f
         87d84:	b1a0f00e 	movlt	pc, lr
         87d88:	e1a03000 	mov	r3, r0
         87d8c:	e3a00000 	mov	r0, #0	; 0x0
         87d90:	e3a01000 	mov	r1, #0	; 0x0
         87d94:	e59f2024 	ldr	r2, [pc, #24]	; 87dc0 <OSToRec(int)+0x44>
         87d98:	e5922000 	ldr	r2, [r2]
         87d9c:	e7d2c081 	ldrb	ip, [r2, r1, lsl #1]
         87da0:	e13c0003 	teq	ip, r3
         87da4:	00820081 	addeq	r0, r2, r1, lsl #1
         87da8:	05d00001 	ldreqb	r0, [r0, #1]
         87dac:	01a0f00e 	moveq	pc, lr
         87db0:	e2811001 	add	r1, r1, #1	; 0x1
         87db4:	e351003f 	cmp	r1, #63	; 0x3f
         87db8:	bafffff7 	blt	87d9c <OSToRec(int)+0x20>
         87dbc:	e1a0f00e 	mov	pc, lr
         87dc0:	0c100bcc 	ldceq	11, cr0, [r0], -#816
    */
}

/**
 * Symbol: OffsetBoundsRef(RefVar const &, TPoint const &)
 * Address: 0009ca58
 */
OffsetBoundsRef(RefVar const &, TPoint const &) {
    /*
         9ca58:	e1a0c00d 	mov	ip, sp
         9ca5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9ca60:	e24cb004 	sub	fp, ip, #4	; 0x4
         9ca64:	e1a04000 	mov	r4, r0
         9ca68:	e1a05001 	mov	r5, r1
         9ca6c:	eb6d5bc7 	bl	1bf3990 <$IsFrame(RefVar const &)>
         9ca70:	e3300000 	teq	r0, #0	; 0x0
         9ca74:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         9ca78:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ca7c:	e59f0078 	ldr	r0, [pc, #78]	; 9cafc <OffsetBoundsRef(RefVar const &, TPoint const &)+0xa4>
         9ca80:	e5900000 	ldr	r0, [r0]
         9ca84:	e5901000 	ldr	r1, [r0]
         9ca88:	e5940000 	ldr	r0, [r4]
         9ca8c:	e5900000 	ldr	r0, [r0]
         9ca90:	eb6c9df2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9ca94:	eb6c95ac 	bl	1bc214c <$AllocateRefHandle(long)>
         9ca98:	e58d0000 	str	r0, [sp]
         9ca9c:	e5900000 	ldr	r0, [r0]
         9caa0:	e3300002 	teq	r0, #2	; 0x2
         9caa4:	0a000011 	beq	9caf0 <OffsetBoundsRef(RefVar const &, TPoint const &)+0x98>
         9caa8:	e24dd008 	sub	sp, sp, #8	; 0x8
         9caac:	e1a0100d 	mov	r1, sp
         9cab0:	e28d0008 	add	r0, sp, #8	; 0x8
         9cab4:	eb67dfef 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         9cab8:	e24dd004 	sub	sp, sp, #4	; 0x4
         9cabc:	e5950000 	ldr	r0, [r5]
         9cac0:	e58d0000 	str	r0, [sp]
         9cac4:	e28d0004 	add	r0, sp, #4	; 0x4
         9cac8:	e59d1002 	ldr	r1, [sp, #2]
         9cacc:	e1a01841 	mov	r1, r1, asr #16
         9cad0:	e59d2000 	ldr	r2, [sp]
         9cad4:	e1a02842 	mov	r2, r2, asr #16
         9cad8:	eb6ad382 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         9cadc:	e28dd004 	add	sp, sp, #4	; 0x4
         9cae0:	e1a0100d 	mov	r1, sp
         9cae4:	e28d0008 	add	r0, sp, #8	; 0x8
         9cae8:	eb690d57 	bl	1ae004c <$SetBoundsRect(RefVar const &, TRect const &)>
         9caec:	e28dd008 	add	sp, sp, #8	; 0x8
         9caf0:	e59d0000 	ldr	r0, [sp]
         9caf4:	eb6c99b0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9caf8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         9cafc:	00684f08 	rsbeq	r4, r8, r8, lsl #30
    */
}

/**
 * Symbol: OrFixedRect
 * Address: 000bd974
 */
void globals::OrFixedRect() {
    /*
         bd974:	e1a0c00d 	mov	ip, sp
         bd978:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         bd97c:	e24cb004 	sub	fp, ip, #4	; 0x4
         bd980:	e1a04000 	mov	r4, r0
         bd984:	e1a05001 	mov	r5, r1
         bd988:	eb6adc37 	bl	1b74a6c <$ValidFixedRect>
         bd98c:	e3300000 	teq	r0, #0	; 0x0
         bd990:	0a000003 	beq	bd9a4 <OrFixedRect+0x30>
         bd994:	e1a00004 	mov	r0, r4
         bd998:	eb6ac78a 	bl	1b6f7c8 <$EmptyFixedRect>
         bd99c:	e3300000 	teq	r0, #0	; 0x0
         bd9a0:	0a000003 	beq	bd9b4 <OrFixedRect+0x40>
         bd9a4:	e1a01005 	mov	r1, r5
         bd9a8:	e1a00004 	mov	r0, r4
         bd9ac:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         bd9b0:	ea6ac783 	b	1b6f7c4 <$CopyFixedRect>
         bd9b4:	e1a00005 	mov	r0, r5
         bd9b8:	eb6adc2b 	bl	1b74a6c <$ValidFixedRect>
         bd9bc:	e3300000 	teq	r0, #0	; 0x0
         bd9c0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         bd9c4:	e1a00005 	mov	r0, r5
         bd9c8:	eb6ac77e 	bl	1b6f7c8 <$EmptyFixedRect>
         bd9cc:	e3300000 	teq	r0, #0	; 0x0
         bd9d0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         bd9d4:	e5941004 	ldr	r1, [r4, #4]
         bd9d8:	e5950004 	ldr	r0, [r5, #4]
         bd9dc:	e1510000 	cmp	r1, r0
         bd9e0:	c5840004 	strgt	r0, [r4, #4]
         bd9e4:	e5941000 	ldr	r1, [r4]
         bd9e8:	e5950000 	ldr	r0, [r5]
         bd9ec:	e1510000 	cmp	r1, r0
         bd9f0:	c5840000 	strgt	r0, [r4]
         bd9f4:	e594100c 	ldr	r1, [r4, #12]
         bd9f8:	e595000c 	ldr	r0, [r5, #12]
         bd9fc:	e1510000 	cmp	r1, r0
         bda00:	b584000c 	strlt	r0, [r4, #12]
         bda04:	e5940008 	ldr	r0, [r4, #8]
         bda08:	e5b51008 	ldr	r1, [r5, #8]!
         bda0c:	e1500001 	cmp	r0, r1
         bda10:	b5a41008 	strlt	r1, [r4, #8]!
         bda14:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ObjectStateToTransBits(int, TFlashStore *)
 * Address: 000c4eb0
 */
ObjectStateToTransBits(int, TFlashStore *) {
    /*
         c4eb0:	e59f1008 	ldr	r1, [pc, #8]	; c4ec0 <ObjectStateToTransBits(int, TFlashStore *)+0x10>
         c4eb4:	e7d10000 	ldrb	r0, [r1, r0]
         c4eb8:	e1e00000 	mvn	r0, r0
         c4ebc:	e1a0f00e 	mov	pc, lr
         c4ec0:	0037142c 	eoreqs	r1, r7, ip, lsr #8
    */
}

/**
 * Symbol: ObjectSize(unsigned long)
 * Address: 001034f0
 */
ObjectSize(unsigned long) {
    /*
        1034f0:	e1a0c00d 	mov	ip, sp
        1034f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1034f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1034fc:	e1a04000 	mov	r4, r0
        103500:	e24dd024 	sub	sp, sp, #36	; 0x24
        103504:	e28d0008 	add	r0, sp, #8	; 0x8
        103508:	eb684d87 	bl	1b16b2c <RDMParams::$__ct(void)>
        10350c:	eb684d8b 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        103510:	e1a01000 	mov	r1, r0
        103514:	e3a00000 	mov	r0, #0	; 0x0
        103518:	e5cd0004 	strb	r0, [sp, #4]
        10351c:	e5911000 	ldr	r1, [r1]
        103520:	e58d0018 	str	r0, [sp, #24]
        103524:	e58d1000 	str	r1, [sp]
        103528:	e58d4010 	str	r4, [sp, #16]
        10352c:	e28d2008 	add	r2, sp, #8	; 0x8
        103530:	e3a0100d 	mov	r1, #13	; 0xd
        103534:	e59d0000 	ldr	r0, [sp]
        103538:	eb0aab78 	bl	3ae320 <MonitorDispatchSWI>
        10353c:	e3300000 	teq	r0, #0	; 0x0
        103540:	1a00001d 	bne	1035bc <ObjectSize(unsigned long)+0xcc>
        103544:	e59d0018 	ldr	r0, [sp, #24]
        103548:	e3300000 	teq	r0, #0	; 0x0
        10354c:	0a00001a 	beq	1035bc <ObjectSize(unsigned long)+0xcc>
        103550:	e1a00004 	mov	r0, r4
        103554:	e3a01034 	mov	r1, #52	; 0x34
        103558:	eb6c2025 	bl	1c0b5f4 <$IsPackageHeader__FUlT1>
        10355c:	e3300000 	teq	r0, #0	; 0x0
        103560:	0a000015 	beq	1035bc <ObjectSize(unsigned long)+0xcc>
        103564:	e24dd028 	sub	sp, sp, #40	; 0x28
        103568:	e1a01004 	mov	r1, r4
        10356c:	e1a0000d 	mov	r0, sp
        103570:	eb6b2850 	bl	1bcd6b8 <TPackageIterator::$__ct(void *)>
        103574:	e1a0000d 	mov	r0, sp
        103578:	eb6b4949 	bl	1bd5aa4 <TPackageIterator::$Init(void)>
        10357c:	e3300000 	teq	r0, #0	; 0x0
        103580:	e1a0000d 	mov	r0, sp
        103584:	1a000009 	bne	1035b0 <ObjectSize(unsigned long)+0xc0>
        103588:	eb6b5193 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        10358c:	e1a04000 	mov	r4, r0
        103590:	e1a0000d 	mov	r0, sp
        103594:	e3a01000 	mov	r1, #0	; 0x0
        103598:	eb6b2c5e 	bl	1bce718 <TPackageIterator::$__dt(void)>
        10359c:	e28d0028 	add	r0, sp, #40	; 0x28
        1035a0:	e3a01000 	mov	r1, #0	; 0x0
        1035a4:	eb6b2c61 	bl	1bce730 <TUMonitor::$__dt(void)>
        1035a8:	e1a00004 	mov	r0, r4
        1035ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1035b0:	e3a01000 	mov	r1, #0	; 0x0
        1035b4:	eb6b2c57 	bl	1bce718 <TPackageIterator::$__dt(void)>
        1035b8:	e28dd028 	add	sp, sp, #40	; 0x28
        1035bc:	e59d4018 	ldr	r4, [sp, #24]
        1035c0:	e1a0000d 	mov	r0, sp
        1035c4:	e3a01000 	mov	r1, #0	; 0x0
        1035c8:	eb6b2c58 	bl	1bce730 <TUMonitor::$__dt(void)>
        1035cc:	e1a00004 	mov	r0, r4
        1035d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: OpenFile(char *, short, short *)
 * Address: 0011b89c
 */
OpenFile(char *, short, short *) {
    /*
        11b89c:	e1a01801 	mov	r1, r1, lsl #16
        11b8a0:	e1a01841 	mov	r1, r1, asr #16
        11b8a4:	ea693f49 	b	1b6b5d0 <$FSOpen>
    */
}

/**
 * Symbol: Occam(unsigned short, _ALIST *)
 * Address: 0012d834
 */
Occam(unsigned short, _ALIST *) {
    /*
        12d834:	e1a0c00d 	mov	ip, sp
        12d838:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12d83c:	e24cb004 	sub	fp, ip, #4	; 0x4
        12d840:	e1a02800 	mov	r2, r0, lsl #16
        12d844:	e1a02822 	mov	r2, r2, lsr #16
        12d848:	e3a04001 	mov	r4, #1	; 0x1
        12d84c:	e2810004 	add	r0, r1, #4	; 0x4
        12d850:	e5903000 	ldr	r3, [r0]
        12d854:	e1320823 	teq	r2, r3, lsr #16
        12d858:	1a00000e 	bne	12d898 <Occam(unsigned short, _ALIST *)+0x64>
        12d85c:	e5911002 	ldr	r1, [r1, #2]
        12d860:	e1a01821 	mov	r1, r1, lsr #16
        12d864:	e3510002 	cmp	r1, #2	; 0x2
        12d868:	aa000003 	bge	12d87c <Occam(unsigned short, _ALIST *)+0x48>
        12d86c:	e5900004 	ldr	r0, [r0, #4]
        12d870:	e3500008 	cmp	r0, #8	; 0x8
        12d874:	2a000007 	bcs	12d898 <Occam(unsigned short, _ALIST *)+0x64>
        12d878:	ea000005 	b	12d894 <Occam(unsigned short, _ALIST *)+0x60>
        12d87c:	e5901004 	ldr	r1, [r0, #4]
        12d880:	e1a01381 	mov	r1, r1, lsl #7
        12d884:	e5900014 	ldr	r0, [r0, #20]
        12d888:	eb6a142c 	bl	1bb2940 <$__rt_sdiv>
        12d88c:	e3500040 	cmp	r0, #64	; 0x40
        12d890:	aa000000 	bge	12d898 <Occam(unsigned short, _ALIST *)+0x64>
        12d894:	e3a04000 	mov	r4, #0	; 0x0
        12d898:	e1a00004 	mov	r0, r4
        12d89c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: operator new(unsigned int, void *)
 * Address: 00133c7c
 */
operator new(unsigned int, void *) {
    /*
        133c7c:	e1a00001 	mov	r0, r1
        133c80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: OrtoCalcSize__FsT1
 * Address: 00147548
 */
void globals::OrtoCalcSize() {
    /*
        147548:	e1a00800 	mov	r0, r0, lsl #16
        14754c:	e1a00840 	mov	r0, r0, asr #16
        147550:	e1a01801 	mov	r1, r1, lsl #16
        147554:	e1a01841 	mov	r1, r1, asr #16
        147558:	e3510000 	cmp	r1, #0	; 0x0
        14755c:	d1a01100 	movle	r1, r0, lsl #2
        147560:	d1a01801 	movle	r1, r1, lsl #16
        147564:	d1a01841 	movle	r1, r1, asr #16
        147568:	e2400001 	sub	r0, r0, #1	; 0x1
        14756c:	e1a00100 	mov	r0, r0, lsl #2
        147570:	e0800101 	add	r0, r0, r1, lsl #2
        147574:	e280001c 	add	r0, r0, #28	; 0x1c
        147578:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: OrtoGetmem__FsT1
 * Address: 0014757c
 */
void globals::OrtoGetmem() {
    /*
        14757c:	e1a0c00d 	mov	ip, sp
        147580:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        147584:	e24cb004 	sub	fp, ip, #4	; 0x4
        147588:	e1a04800 	mov	r4, r0, lsl #16
        14758c:	e1a04844 	mov	r4, r4, asr #16
        147590:	e1a05801 	mov	r5, r1, lsl #16
        147594:	e1a05845 	mov	r5, r5, asr #16
        147598:	e1a01005 	mov	r1, r5
        14759c:	e1a00004 	mov	r0, r4
        1475a0:	eb67a497 	bl	1b30804 <$OrtoCalcSize__FsT1>
        1475a4:	e1a00800 	mov	r0, r0, lsl #16
        1475a8:	e1a00840 	mov	r0, r0, asr #16
        1475ac:	e1a06000 	mov	r6, r0
        1475b0:	eb64a081 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        1475b4:	e3300000 	teq	r0, #0	; 0x0
        1475b8:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1475bc:	e5806000 	str	r6, [r0]
        1475c0:	e5c04009 	strb	r4, [r0, #9]
        1475c4:	e1a01444 	mov	r1, r4, asr #8
        1475c8:	e5c01008 	strb	r1, [r0, #8]
        1475cc:	e5c0500b 	strb	r5, [r0, #11]
        1475d0:	e1a01445 	mov	r1, r5, asr #8
        1475d4:	e5c0100a 	strb	r1, [r0, #10]
        1475d8:	e3a01000 	mov	r1, #0	; 0x0
        1475dc:	e5c0100f 	strb	r1, [r0, #15]
        1475e0:	e5c0100e 	strb	r1, [r0, #14]
        1475e4:	e5c01011 	strb	r1, [r0, #17]
        1475e8:	e5c01010 	strb	r1, [r0, #16]
        1475ec:	e5901008 	ldr	r1, [r0, #8]
        1475f0:	e1a01841 	mov	r1, r1, asr #16
        1475f4:	e2411001 	sub	r1, r1, #1	; 0x1
        1475f8:	e3a0201c 	mov	r2, #28	; 0x1c
        1475fc:	e0821101 	add	r1, r2, r1, lsl #2
        147600:	e5801004 	str	r1, [r0, #4]
        147604:	e0811000 	add	r1, r1, r0
        147608:	e5801014 	str	r1, [r0, #20]
        14760c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: OrtoResize(_LEARN_ARRAY_tag *)
 * Address: 00147610
 */
OrtoResize(_LEARN_ARRAY_tag *) {
    /*
        147610:	e1a0c00d 	mov	ip, sp
        147614:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        147618:	e24cb004 	sub	fp, ip, #4	; 0x4
        14761c:	e1b04000 	movs	r4, r0
        147620:	e3a06000 	mov	r6, #0	; 0x0
        147624:	1a000001 	bne	147630 <OrtoResize(_LEARN_ARRAY_tag *)+0x20>
        147628:	e1a00006 	mov	r0, r6
        14762c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        147630:	e5941010 	ldr	r1, [r4, #16]
        147634:	e1a01841 	mov	r1, r1, asr #16
        147638:	e594000e 	ldr	r0, [r4, #14]
        14763c:	e1a00840 	mov	r0, r0, asr #16
        147640:	eb67a474 	bl	1b30818 <$OrtoGetmem__FsT1>
        147644:	e1b05000 	movs	r5, r0
        147648:	1a000002 	bne	147658 <OrtoResize(_LEARN_ARRAY_tag *)+0x48>
        14764c:	e1a00004 	mov	r0, r4
        147650:	eb67a46d 	bl	1b3080c <$OrtoDelete(_LEARN_ARRAY_tag *)>
        147654:	eafffff3 	b	147628 <OrtoResize(_LEARN_ARRAY_tag *)+0x18>
        147658:	e5950008 	ldr	r0, [r5, #8]
        14765c:	e1a00820 	mov	r0, r0, lsr #16
        147660:	e5c5000f 	strb	r0, [r5, #15]
        147664:	e1a00440 	mov	r0, r0, asr #8
        147668:	e5c5000e 	strb	r0, [r5, #14]
        14766c:	e595000a 	ldr	r0, [r5, #10]
        147670:	e1a00820 	mov	r0, r0, lsr #16
        147674:	e5c50011 	strb	r0, [r5, #17]
        147678:	e1a00440 	mov	r0, r0, asr #8
        14767c:	e5c50010 	strb	r0, [r5, #16]
        147680:	e594000c 	ldr	r0, [r4, #12]
        147684:	e1a00820 	mov	r0, r0, lsr #16
        147688:	e5c5000d 	strb	r0, [r5, #13]
        14768c:	e1a00440 	mov	r0, r0, asr #8
        147690:	e5c5000c 	strb	r0, [r5, #12]
        147694:	e595000e 	ldr	r0, [r5, #14]
        147698:	e1a00840 	mov	r0, r0, asr #16
        14769c:	e1a02100 	mov	r2, r0, lsl #2
        1476a0:	e2841018 	add	r1, r4, #24	; 0x18
        1476a4:	e2850018 	add	r0, r5, #24	; 0x18
        1476a8:	eb69b4e9 	bl	1bb4a54 <$memmove>
        1476ac:	e5950010 	ldr	r0, [r5, #16]
        1476b0:	e1a00840 	mov	r0, r0, asr #16
        1476b4:	e1a02100 	mov	r2, r0, lsl #2
        1476b8:	e5941014 	ldr	r1, [r4, #20]
        1476bc:	e5950014 	ldr	r0, [r5, #20]
        1476c0:	eb69b4e3 	bl	1bb4a54 <$memmove>
        1476c4:	e1a00004 	mov	r0, r4
        1476c8:	eb67a44f 	bl	1b3080c <$OrtoDelete(_LEARN_ARRAY_tag *)>
        1476cc:	e1a00005 	mov	r0, r5
        1476d0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: OrtoFasten__FP16_LEARN_ARRAY_tagUcN22
 * Address: 001476d4
 */
void globals::OrtoFasten() {
    /*
        1476d4:	e92d4010 	stmdb	sp!, {r4, lr}
        1476d8:	e201c0ff 	and	ip, r1, #255	; 0xff
        1476dc:	e20220ff 	and	r2, r2, #255	; 0xff
        1476e0:	e203e0ff 	and	lr, r3, #255	; 0xff
        1476e4:	e590100e 	ldr	r1, [r0, #14]
        1476e8:	e1a01841 	mov	r1, r1, asr #16
        1476ec:	e5904008 	ldr	r4, [r0, #8]
        1476f0:	e3a03000 	mov	r3, #0	; 0x0
        1476f4:	e1510844 	cmp	r1, r4, asr #16
        1476f8:	a1a00003 	movge	r0, r3
        1476fc:	a8bd8010 	ldmgeia	sp!, {r4, pc}
        147700:	e0801101 	add	r1, r0, r1, lsl #2
        147704:	e5c1301b 	strb	r3, [r1, #27]
        147708:	e5c1c01a 	strb	ip, [r1, #26]
        14770c:	e5c12018 	strb	r2, [r1, #24]
        147710:	e5c1e019 	strb	lr, [r1, #25]
        147714:	e590100e 	ldr	r1, [r0, #14]
        147718:	e1a01821 	mov	r1, r1, lsr #16
        14771c:	e2811001 	add	r1, r1, #1	; 0x1
        147720:	e5c0100f 	strb	r1, [r0, #15]
        147724:	e1a01441 	mov	r1, r1, asr #8
        147728:	e5c0100e 	strb	r1, [r0, #14]
        14772c:	e3a00001 	mov	r0, #1	; 0x1
        147730:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)
 * Address: 00147734
 */
OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *) {
    /*
        147734:	e1a0c00d 	mov	ip, sp
        147738:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14773c:	e24cb004 	sub	fp, ip, #4	; 0x4
        147740:	e1a04001 	mov	r4, r1
        147744:	e1a05800 	mov	r5, r0, lsl #16
        147748:	e1a05845 	mov	r5, r5, asr #16
        14774c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        147750:	e3520000 	cmp	r2, #0	; 0x0
        147754:	1592a008 	ldrne	sl, [r2, #8]
        147758:	03a0a000 	moveq	sl, #0	; 0x0
        14775c:	03a00000 	moveq	r0, #0	; 0x0
        147760:	15b20004 	ldrne	r0, [r2, #4]!
        147764:	e1a00800 	mov	r0, r0, lsl #16
        147768:	e1a00840 	mov	r0, r0, asr #16
        14776c:	e58d0010 	str	r0, [sp, #16]
        147770:	e3a00000 	mov	r0, #0	; 0x0
        147774:	e58d000c 	str	r0, [sp, #12]
        147778:	e51b002c 	ldr	r0, [fp, -#44]
        14777c:	e5900008 	ldr	r0, [r0, #8]
        147780:	e58d0000 	str	r0, [sp]
        147784:	e3a00010 	mov	r0, #16	; 0x10
        147788:	eb64a00b 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        14778c:	e1b06000 	movs	r6, r0
        147790:	0a0000ac 	beq	147a48 <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x314>
        147794:	e2150001 	ands	r0, r5, #1	; 0x1
        147798:	e58d0018 	str	r0, [sp, #24]
        14779c:	151b002c 	ldrne	r0, [fp, -#44]
        1477a0:	15900000 	ldrne	r0, [r0]
        1477a4:	11a07800 	movne	r7, r0, lsl #16
        1477a8:	11a07847 	movne	r7, r7, asr #16
        1477ac:	e3a05000 	mov	r5, #0	; 0x0
        1477b0:	e3a09001 	mov	r9, #1	; 0x1
        1477b4:	e3a00000 	mov	r0, #0	; 0x0
        1477b8:	e58d0004 	str	r0, [sp, #4]
        1477bc:	e59d0010 	ldr	r0, [sp, #16]
        1477c0:	e3500000 	cmp	r0, #0	; 0x0
        1477c4:	da000036 	ble	1478a4 <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x170>
        1477c8:	e2470001 	sub	r0, r7, #1	; 0x1
        1477cc:	e20030ff 	and	r3, r0, #255	; 0xff
        1477d0:	e58d3014 	str	r3, [sp, #20]
        1477d4:	e08a8205 	add	r8, sl, r5, lsl #4
        1477d8:	e5d87004 	ldrb	r7, [r8, #4]
        1477dc:	e5d80002 	ldrb	r0, [r8, #2]
        1477e0:	e3300001 	teq	r0, #1	; 0x1
        1477e4:	0a00000a 	beq	147814 <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0xe0>
        1477e8:	e3a09001 	mov	r9, #1	; 0x1
        1477ec:	e20510ff 	and	r1, r5, #255	; 0xff
        1477f0:	e1a00004 	mov	r0, r4
        1477f4:	e3a03000 	mov	r3, #0	; 0x0
        1477f8:	e3a02001 	mov	r2, #1	; 0x1
        1477fc:	eb67a404 	bl	1b30814 <$OrtoFasten__FP16_LEARN_ARRAY_tagUcN22>
        147800:	e5d80002 	ldrb	r0, [r8, #2]
        147804:	e3300003 	teq	r0, #3	; 0x3
        147808:	0a000025 	beq	1478a4 <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x170>
        14780c:	e3300001 	teq	r0, #1	; 0x1
        147810:	1a00001d 	bne	14788c <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x158>
        147814:	e3390000 	teq	r9, #0	; 0x0
        147818:	0a000005 	beq	147834 <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x100>
        14781c:	e3a09000 	mov	r9, #0	; 0x0
        147820:	e59d0004 	ldr	r0, [sp, #4]
        147824:	e2800001 	add	r0, r0, #1	; 0x1
        147828:	e1a00800 	mov	r0, r0, lsl #16
        14782c:	e1a00840 	mov	r0, r0, asr #16
        147830:	e58d0004 	str	r0, [sp, #4]
        147834:	e5d80000 	ldrb	r0, [r8]
        147838:	eb679bca 	bl	1b2e768 <$IsAlnum>
        14783c:	e3300000 	teq	r0, #0	; 0x0
        147840:	0a000011 	beq	14788c <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x158>
        147844:	e59d0018 	ldr	r0, [sp, #24]
        147848:	e3300000 	teq	r0, #0	; 0x0
        14784c:	159d3014 	ldrne	r3, [sp, #20]
        147850:	1a000003 	bne	147864 <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x130>
        147854:	e5d80005 	ldrb	r0, [r8, #5]
        147858:	e0800007 	add	r0, r0, r7
        14785c:	e2400001 	sub	r0, r0, #1	; 0x1
        147860:	e20030ff 	and	r3, r0, #255	; 0xff
        147864:	e3570000 	cmp	r7, #0	; 0x0
        147868:	ba000007 	blt	14788c <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x158>
        14786c:	e3530078 	cmp	r3, #120	; 0x78
        147870:	aa000005 	bge	14788c <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x158>
        147874:	e1530007 	cmp	r3, r7
        147878:	ba000003 	blt	14788c <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x158>
        14787c:	e1a02007 	mov	r2, r7
        147880:	e20510ff 	and	r1, r5, #255	; 0xff
        147884:	e1a00004 	mov	r0, r4
        147888:	eb67a3e1 	bl	1b30814 <$OrtoFasten__FP16_LEARN_ARRAY_tagUcN22>
        14788c:	e2850001 	add	r0, r5, #1	; 0x1
        147890:	e1a05800 	mov	r5, r0, lsl #16
        147894:	e1a05845 	mov	r5, r5, asr #16
        147898:	e59d0010 	ldr	r0, [sp, #16]
        14789c:	e1550000 	cmp	r5, r0
        1478a0:	baffffcb 	blt	1477d4 <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0xa0>
        1478a4:	e59d0004 	ldr	r0, [sp, #4]
        1478a8:	e5c4000d 	strb	r0, [r4, #13]
        1478ac:	e1a00440 	mov	r0, r0, asr #8
        1478b0:	e5c4000c 	strb	r0, [r4, #12]
        1478b4:	e3a05000 	mov	r5, #0	; 0x0
        1478b8:	e594000e 	ldr	r0, [r4, #14]
        1478bc:	e1a00840 	mov	r0, r0, asr #16
        1478c0:	e3500000 	cmp	r0, #0	; 0x0
        1478c4:	da00005a 	ble	147a34 <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x300>
        1478c8:	e0840105 	add	r0, r4, r5, lsl #2
        1478cc:	e5d0101b 	ldrb	r1, [r0, #27]
        1478d0:	e3310000 	teq	r1, #0	; 0x0
        1478d4:	1a000050 	bne	147a1c <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x2e8>
        1478d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1478dc:	e5d08018 	ldrb	r8, [r0, #24]
        1478e0:	e5d07019 	ldrb	r7, [r0, #25]
        1478e4:	e3a09001 	mov	r9, #1	; 0x1
        1478e8:	e3a03000 	mov	r3, #0	; 0x0
        1478ec:	e1580007 	cmp	r8, r7
        1478f0:	e58d3000 	str	r3, [sp]
        1478f4:	ca000047 	bgt	147a18 <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x2e4>
        1478f8:	e1a03006 	mov	r3, r6
        1478fc:	e92d0008 	stmdb	sp!, {r3}
        147900:	e28d3010 	add	r3, sp, #16	; 0x10
        147904:	e1a02007 	mov	r2, r7
        147908:	e1a01008 	mov	r1, r8
        14790c:	e59d0008 	ldr	r0, [sp, #8]
        147910:	eb6782d3 	bl	1b28464 <$connect_trajectory_and_letter__FP11xrd_el_typesT2PsP14Part_of_letter>
        147914:	e28dd004 	add	sp, sp, #4	; 0x4
        147918:	e3300000 	teq	r0, #0	; 0x0
        14791c:	1a000022 	bne	1479ac <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x278>
        147920:	e59d000c 	ldr	r0, [sp, #12]
        147924:	e1b00840 	movs	r0, r0, asr #16
        147928:	0a00001f 	beq	1479ac <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x278>
        14792c:	e28d300c 	add	r3, sp, #12	; 0xc
        147930:	e92d0008 	stmdb	sp!, {r3}
        147934:	e1a03006 	mov	r3, r6
        147938:	e1a02007 	mov	r2, r7
        14793c:	e1a01008 	mov	r1, r8
        147940:	e51b002c 	ldr	r0, [fp, -#44]
        147944:	eb67a3b8 	bl	1b3082c <$RemovePointAndSort__FP11xrdata_typesT2P14Part_of_letterPs>
        147948:	e28dd004 	add	sp, sp, #4	; 0x4
        14794c:	e5941010 	ldr	r1, [r4, #16]
        147950:	e1a01841 	mov	r1, r1, asr #16
        147954:	e59d000c 	ldr	r0, [sp, #12]
        147958:	e0810840 	add	r0, r1, r0, asr #16
        14795c:	e594200a 	ldr	r2, [r4, #10]
        147960:	e1500842 	cmp	r0, r2, asr #16
        147964:	a28dd004 	addge	sp, sp, #4	; 0x4
        147968:	aa000033 	bge	147a3c <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x308>
        14796c:	e20190ff 	and	r9, r1, #255	; 0xff
        147970:	e59d100e 	ldr	r1, [sp, #14]
        147974:	e0891001 	add	r1, r9, r1
        147978:	e2411001 	sub	r1, r1, #1	; 0x1
        14797c:	e20130ff 	and	r3, r1, #255	; 0xff
        147980:	e58d3000 	str	r3, [sp]
        147984:	e5c40011 	strb	r0, [r4, #17]
        147988:	e1a00440 	mov	r0, r0, asr #8
        14798c:	e5c40010 	strb	r0, [r4, #16]
        147990:	e5940014 	ldr	r0, [r4, #20]
        147994:	e0800109 	add	r0, r0, r9, lsl #2
        147998:	e59d100c 	ldr	r1, [sp, #12]
        14799c:	e1a01841 	mov	r1, r1, asr #16
        1479a0:	e1a02101 	mov	r2, r1, lsl #2
        1479a4:	e1a01006 	mov	r1, r6
        1479a8:	eb69b429 	bl	1bb4a54 <$memmove>
        1479ac:	e1a01005 	mov	r1, r5
        1479b0:	e594000e 	ldr	r0, [r4, #14]
        1479b4:	e1550840 	cmp	r5, r0, asr #16
        1479b8:	aa000016 	bge	147a18 <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x2e4>
        1479bc:	e0840101 	add	r0, r4, r1, lsl #2
        1479c0:	e5d0201b 	ldrb	r2, [r0, #27]
        1479c4:	e3320000 	teq	r2, #0	; 0x0
        1479c8:	05d0201a 	ldreqb	r2, [r0, #26]
        1479cc:	05d03018 	ldreqb	r3, [r0, #24]
        1479d0:	01330008 	teqeq	r3, r8
        1479d4:	05d03019 	ldreqb	r3, [r0, #25]
        1479d8:	01330007 	teqeq	r3, r7
        1479dc:	1a000007 	bne	147a00 <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x2cc>
        1479e0:	e5c09018 	strb	r9, [r0, #24]
        1479e4:	e59d3000 	ldr	r3, [sp]
        1479e8:	e5c03019 	strb	r3, [r0, #25]
        1479ec:	e08a3202 	add	r3, sl, r2, lsl #4
        1479f0:	e5d33002 	ldrb	r3, [r3, #2]
        1479f4:	e3330001 	teq	r3, #1	; 0x1
        1479f8:	07da2202 	ldreqb	r2, [sl, r2, lsl #4]
        1479fc:	05c0201b 	streqb	r2, [r0, #27]
        147a00:	e2810001 	add	r0, r1, #1	; 0x1
        147a04:	e1a01800 	mov	r1, r0, lsl #16
        147a08:	e1a01841 	mov	r1, r1, asr #16
        147a0c:	e594000e 	ldr	r0, [r4, #14]
        147a10:	e1510840 	cmp	r1, r0, asr #16
        147a14:	baffffe8 	blt	1479bc <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x288>
        147a18:	e28dd004 	add	sp, sp, #4	; 0x4
        147a1c:	e2850001 	add	r0, r5, #1	; 0x1
        147a20:	e1a05800 	mov	r5, r0, lsl #16
        147a24:	e1a05845 	mov	r5, r5, asr #16
        147a28:	e594000e 	ldr	r0, [r4, #14]
        147a2c:	e1550840 	cmp	r5, r0, asr #16
        147a30:	baffffa4 	blt	1478c8 <OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)+0x194>
        147a34:	e3a00001 	mov	r0, #1	; 0x1
        147a38:	e58d000c 	str	r0, [sp, #12]
        147a3c:	e3360000 	teq	r6, #0	; 0x0
        147a40:	11a00006 	movne	r0, r6
        147a44:	1b649f5d 	blne	1a6f7c0 <$HWRMemoryFree(void *)>
        147a48:	e59d000c 	ldr	r0, [sp, #12]
        147a4c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ORTraining(void *, PS_point_type *, rec_w_type *, PS_point_type *)
 * Address: 00147d70
 */
ORTraining(void *, PS_point_type *, rec_w_type *, PS_point_type *) {
    /*
        147d70:	e3300000 	teq	r0, #0	; 0x0
        147d74:	13310000 	teqne	r1, #0	; 0x0
        147d78:	13320000 	teqne	r2, #0	; 0x0
        147d7c:	13330000 	teqne	r3, #0	; 0x0
        147d80:	01a0f00e 	moveq	pc, lr
        147d84:	e1a0c003 	mov	ip, r3
        147d88:	e5d23000 	ldrb	r3, [r2]
        147d8c:	e3330000 	teq	r3, #0	; 0x0
        147d90:	01a0f00e 	moveq	pc, lr
        147d94:	e1a03001 	mov	r3, r1
        147d98:	e1a01000 	mov	r1, r0
        147d9c:	e1a0000c 	mov	r0, ip
        147da0:	ea67a29f 	b	1b30824 <$OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)>
    */
}

/**
 * Symbol: ORLArrayDelete(void **)
 * Address: 00147da4
 */
ORLArrayDelete(void **) {
    /*
        147da4:	e3300000 	teq	r0, #0	; 0x0
        147da8:	01a0f00e 	moveq	pc, lr
        147dac:	e1a0c00d 	mov	ip, sp
        147db0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        147db4:	e24cb004 	sub	fp, ip, #4	; 0x4
        147db8:	e1a04000 	mov	r4, r0
        147dbc:	e5900000 	ldr	r0, [r0]
        147dc0:	e3300000 	teq	r0, #0	; 0x0
        147dc4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        147dc8:	eb67a28f 	bl	1b3080c <$OrtoDelete(_LEARN_ARRAY_tag *)>
        147dcc:	e5840000 	str	r0, [r4]
        147dd0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: OrtoCreate(short, RWG_type *, xrdata_type *)
 * Address: 00147dd4
 */
OrtoCreate(short, RWG_type *, xrdata_type *) {
    /*
        147dd4:	e1a0c00d 	mov	ip, sp
        147dd8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        147ddc:	e24cb004 	sub	fp, ip, #4	; 0x4
        147de0:	e1b04001 	movs	r4, r1
        147de4:	e1a05002 	mov	r5, r2
        147de8:	e1a08800 	mov	r8, r0, lsl #16
        147dec:	e1a08848 	mov	r8, r8, asr #16
        147df0:	e3a06000 	mov	r6, #0	; 0x0
        147df4:	0a000015 	beq	147e50 <OrtoCreate(short, RWG_type *, xrdata_type *)+0x7c>
        147df8:	e5940008 	ldr	r0, [r4, #8]
        147dfc:	e3300000 	teq	r0, #0	; 0x0
        147e00:	13350000 	teqne	r5, #0	; 0x0
        147e04:	0a000011 	beq	147e50 <OrtoCreate(short, RWG_type *, xrdata_type *)+0x7c>
        147e08:	e3a01080 	mov	r1, #128	; 0x80
        147e0c:	e3a00080 	mov	r0, #128	; 0x80
        147e10:	eb67a280 	bl	1b30818 <$OrtoGetmem__FsT1>
        147e14:	e1b07000 	movs	r7, r0
        147e18:	0a00000c 	beq	147e50 <OrtoCreate(short, RWG_type *, xrdata_type *)+0x7c>
        147e1c:	e1a03005 	mov	r3, r5
        147e20:	e1a02004 	mov	r2, r4
        147e24:	e1a01007 	mov	r1, r7
        147e28:	e1a00008 	mov	r0, r8
        147e2c:	eb67a277 	bl	1b30810 <$OrtoEntries(short, _LEARN_ARRAY_tag *, RWG_type *, xrdata_type *)>
        147e30:	e3300000 	teq	r0, #0	; 0x0
        147e34:	e1a00007 	mov	r0, r7
        147e38:	1a000001 	bne	147e44 <OrtoCreate(short, RWG_type *, xrdata_type *)+0x70>
        147e3c:	eb67a272 	bl	1b3080c <$OrtoDelete(_LEARN_ARRAY_tag *)>
        147e40:	ea000002 	b	147e50 <OrtoCreate(short, RWG_type *, xrdata_type *)+0x7c>
        147e44:	eb67a274 	bl	1b3081c <$OrtoResize(_LEARN_ARRAY_tag *)>
        147e48:	e3300000 	teq	r0, #0	; 0x0
        147e4c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        147e50:	e1a00006 	mov	r0, r6
        147e54:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: OrtoDelete(_LEARN_ARRAY_tag *)
 * Address: 00147e58
 */
OrtoDelete(_LEARN_ARRAY_tag *) {
    /*
        147e58:	e1a0c00d 	mov	ip, sp
        147e5c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        147e60:	e24cb004 	sub	fp, ip, #4	; 0x4
        147e64:	e3300000 	teq	r0, #0	; 0x0
        147e68:	1b649e54 	blne	1a6f7c0 <$HWRMemoryFree(void *)>
        147e6c:	e3a00000 	mov	r0, #0	; 0x0
        147e70:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)
 * Address: 00147e74
 */
OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *) {
    /*
        147e74:	e1a0c00d 	mov	ip, sp
        147e78:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        147e7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        147e80:	e1b04000 	movs	r4, r0
        147e84:	e24dd004 	sub	sp, sp, #4	; 0x4
        147e88:	e3a05000 	mov	r5, #0	; 0x0
        147e8c:	151b1034 	ldrne	r1, [fp, -#52]
        147e90:	13310000 	teqne	r1, #0	; 0x0
        147e94:	151b2030 	ldrne	r2, [fp, -#48]
        147e98:	13320000 	teqne	r2, #0	; 0x0
        147e9c:	151b002c 	ldrne	r0, [fp, -#44]
        147ea0:	13300000 	teqne	r0, #0	; 0x0
        147ea4:	0a000068 	beq	14804c <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x1d8>
        147ea8:	e3a00b01 	mov	r0, #1024	; 0x400
        147eac:	eb649e42 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        147eb0:	e58d0000 	str	r0, [sp]
        147eb4:	e3300000 	teq	r0, #0	; 0x0
        147eb8:	0a000063 	beq	14804c <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x1d8>
        147ebc:	e5940008 	ldr	r0, [r4, #8]
        147ec0:	e1a00840 	mov	r0, r0, asr #16
        147ec4:	e2401001 	sub	r1, r0, #1	; 0x1
        147ec8:	e3a0001c 	mov	r0, #28	; 0x1c
        147ecc:	e0800101 	add	r0, r0, r1, lsl #2
        147ed0:	e5840004 	str	r0, [r4, #4]
        147ed4:	e0800004 	add	r0, r0, r4
        147ed8:	e3a06000 	mov	r6, #0	; 0x0
        147edc:	e5840014 	str	r0, [r4, #20]
        147ee0:	e594000e 	ldr	r0, [r4, #14]
        147ee4:	e1a00840 	mov	r0, r0, asr #16
        147ee8:	e3500000 	cmp	r0, #0	; 0x0
        147eec:	da000051 	ble	148038 <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x1c4>
        147ef0:	e0840106 	add	r0, r4, r6, lsl #2
        147ef4:	e5d0101b 	ldrb	r1, [r0, #27]
        147ef8:	e3310000 	teq	r1, #0	; 0x0
        147efc:	0a000047 	beq	148020 <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x1ac>
        147f00:	e3360000 	teq	r6, #0	; 0x0
        147f04:	15d00017 	ldrneb	r0, [r0, #23]
        147f08:	13300000 	teqne	r0, #0	; 0x0
        147f0c:	1a000043 	bne	148020 <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x1ac>
        147f10:	e20670ff 	and	r7, r6, #255	; 0xff
        147f14:	e3a05000 	mov	r5, #0	; 0x0
        147f18:	e3a08000 	mov	r8, #0	; 0x0
        147f1c:	e594100e 	ldr	r1, [r4, #14]
        147f20:	e1570841 	cmp	r7, r1, asr #16
        147f24:	ca00001d 	bgt	147fa0 <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x12c>
        147f28:	e0870005 	add	r0, r7, r5
        147f2c:	e594100e 	ldr	r1, [r4, #14]
        147f30:	e1300841 	teq	r0, r1, asr #16
        147f34:	03a00000 	moveq	r0, #0	; 0x0
        147f38:	0a000003 	beq	147f4c <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0xd8>
        147f3c:	e0840100 	add	r0, r4, r0, lsl #2
        147f40:	e5d0001b 	ldrb	r0, [r0, #27]
        147f44:	eb67a659 	bl	1b318b0 <$ToLower>
        147f48:	e20000ff 	and	r0, r0, #255	; 0xff
        147f4c:	e20090ff 	and	r9, r0, #255	; 0xff
        147f50:	e0850008 	add	r0, r5, r8
        147f54:	e51b2030 	ldr	r2, [fp, -#48]
        147f58:	e7d20000 	ldrb	r0, [r2, r0]
        147f5c:	eb67a653 	bl	1b318b0 <$ToLower>
        147f60:	e20000ff 	and	r0, r0, #255	; 0xff
        147f64:	e1a0a000 	mov	sl, r0
        147f68:	eb6799fe 	bl	1b2e768 <$IsAlnum>
        147f6c:	e3300000 	teq	r0, #0	; 0x0
        147f70:	02880001 	addeq	r0, r8, #1	; 0x1
        147f74:	020080ff 	andeq	r8, r0, #255	; 0xff
        147f78:	12850001 	addne	r0, r5, #1	; 0x1
        147f7c:	120050ff 	andne	r5, r0, #255	; 0xff
        147f80:	e139000a 	teq	r9, sl
        147f84:	1a000025 	bne	148020 <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x1ac>
        147f88:	e3390000 	teq	r9, #0	; 0x0
        147f8c:	0a000003 	beq	147fa0 <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x12c>
        147f90:	e0871005 	add	r1, r7, r5
        147f94:	e594000e 	ldr	r0, [r4, #14]
        147f98:	e1510840 	cmp	r1, r0, asr #16
        147f9c:	daffffe1 	ble	147f28 <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0xb4>
        147fa0:	e1a06807 	mov	r6, r7, lsl #16
        147fa4:	e1a06846 	mov	r6, r6, asr #16
        147fa8:	e0877005 	add	r7, r7, r5
        147fac:	e1570006 	cmp	r7, r6
        147fb0:	da000020 	ble	148038 <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x1c4>
        147fb4:	e0845106 	add	r5, r4, r6, lsl #2
        147fb8:	e5d5001b 	ldrb	r0, [r5, #27]
        147fbc:	eb67a63b 	bl	1b318b0 <$ToLower>
        147fc0:	e20080ff 	and	r8, r0, #255	; 0xff
        147fc4:	e5d51019 	ldrb	r1, [r5, #25]
        147fc8:	e5d50018 	ldrb	r0, [r5, #24]
        147fcc:	e0411000 	sub	r1, r1, r0
        147fd0:	e2811001 	add	r1, r1, #1	; 0x1
        147fd4:	e1a03801 	mov	r3, r1, lsl #16
        147fd8:	e1a03843 	mov	r3, r3, asr #16
        147fdc:	e5941014 	ldr	r1, [r4, #20]
        147fe0:	e0812100 	add	r2, r1, r0, lsl #2
        147fe4:	e59d1000 	ldr	r1, [sp]
        147fe8:	e51b002c 	ldr	r0, [fp, -#44]
        147fec:	eb679df2 	bl	1b2f7bc <$LearnPartsCopy__FP13PS_point_typeT1P14Part_of_letters>
        147ff0:	e3500003 	cmp	r0, #3	; 0x3
        147ff4:	da000003 	ble	148008 <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x194>
        147ff8:	e1a02008 	mov	r2, r8
        147ffc:	e51b1034 	ldr	r1, [fp, -#52]
        148000:	e59d0000 	ldr	r0, [sp]
        148004:	eb67a631 	bl	1b318d0 <$TrainTrajectory(_POINT *, void *, unsigned short)>
        148008:	e2860001 	add	r0, r6, #1	; 0x1
        14800c:	e1a06800 	mov	r6, r0, lsl #16
        148010:	e1a06846 	mov	r6, r6, asr #16
        148014:	e1570006 	cmp	r7, r6
        148018:	caffffe5 	bgt	147fb4 <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x140>
        14801c:	ea000005 	b	148038 <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x1c4>
        148020:	e2860001 	add	r0, r6, #1	; 0x1
        148024:	e1a06800 	mov	r6, r0, lsl #16
        148028:	e1a06846 	mov	r6, r6, asr #16
        14802c:	e594000e 	ldr	r0, [r4, #14]
        148030:	e1560840 	cmp	r6, r0, asr #16
        148034:	baffffad 	blt	147ef0 <OrtoTraining(_LEARN_ARRAY_tag *, void *, char *, PS_point_type *)+0x7c>
        148038:	e3a05001 	mov	r5, #1	; 0x1
        14803c:	e59d0000 	ldr	r0, [sp]
        148040:	e3300000 	teq	r0, #0	; 0x0
        148044:	159d0000 	ldrne	r0, [sp]
        148048:	1b649ddc 	blne	1a6f7c0 <$HWRMemoryFree(void *)>
        14804c:	e1a00005 	mov	r0, r5
        148050:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: OrtoSize(_LEARN_ARRAY_tag *)
 * Address: 00148054
 */
OrtoSize(_LEARN_ARRAY_tag *) {
    /*
        148054:	e3300000 	teq	r0, #0	; 0x0
        148058:	03a00000 	moveq	r0, #0	; 0x0
        14805c:	15900000 	ldrne	r0, [r0]
        148060:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ORGetDBSize(void)
 * Address: 00148064
 */
ORGetDBSize(void) {
    /*
        148064:	e3a00a06 	mov	r0, #24576	; 0x6000
        148068:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ORInitDB(void *, unsigned long)
 * Address: 0014806c
 */
ORInitDB(void *, unsigned long) {
    /*
        14806c:	e3300000 	teq	r0, #0	; 0x0
        148070:	1a6799bb 	bne	1b2e764 <$InitDataBase(void *, unsigned int)>
        148074:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ORCreateLearnInfo(xrdata_type *, RWG_type *, void **, unsigned long *)
 * Address: 00148078
 */
ORCreateLearnInfo(xrdata_type *, RWG_type *, void **, unsigned long *) {
    /*
        148078:	e3320000 	teq	r2, #0	; 0x0
        14807c:	13300000 	teqne	r0, #0	; 0x0
        148080:	13310000 	teqne	r1, #0	; 0x0
        148084:	01a0f00e 	moveq	pc, lr
        148088:	e1a0c00d 	mov	ip, sp
        14808c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        148090:	e24cb004 	sub	fp, ip, #4	; 0x4
        148094:	e1a05002 	mov	r5, r2
        148098:	e1a04003 	mov	r4, r3
        14809c:	e1a02000 	mov	r2, r0
        1480a0:	e3a00002 	mov	r0, #2	; 0x2
        1480a4:	eb67a1d7 	bl	1b30808 <$OrtoCreate(short, RWG_type *, xrdata_type *)>
        1480a8:	e3340000 	teq	r4, #0	; 0x0
        1480ac:	e5850000 	str	r0, [r5]
        1480b0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1480b4:	eb67a1d9 	bl	1b30820 <$OrtoSize(_LEARN_ARRAY_tag *)>
        1480b8:	e5840000 	str	r0, [r4]
        1480bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: OsBoot
 * Address: 001480c0
 */
void globals::OsBoot() {
    /*
        1480c0:	e1a0c00d 	mov	ip, sp
        1480c4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1480c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1480cc:	e24ddf62 	sub	sp, sp, #392	; 0x188
        1480d0:	e28d002c 	add	r0, sp, #44	; 0x2c
        1480d4:	eb66a1da 	bl	1af0844 <TTask::$__ct(void)>
        1480d8:	e28d1f62 	add	r1, sp, #392	; 0x188
        1480dc:	e59f0188 	ldr	r0, [pc, #188]	; 14826c <OsBoot+0x1ac>
        1480e0:	e5801000 	str	r1, [r0]
        1480e4:	e3a00015 	mov	r0, #21	; 0x15
        1480e8:	e58d0010 	str	r0, [sp, #16]
        1480ec:	e58dd0a0 	str	sp, [sp, #160]
        1480f0:	e28d002c 	add	r0, sp, #44	; 0x2c
        1480f4:	e59f7174 	ldr	r7, [pc, #174]	; 148270 <OsBoot+0x1b0>
        1480f8:	e5870000 	str	r0, [r7]
        1480fc:	eb64703f 	bl	1a64200 <$HInitInterrupts(void)>
        148100:	eb66d75f 	bl	1afde84 <$InitInterruptTables>
        148104:	e3a00e21 	mov	r0, #528	; 0x210
        148108:	eb6a198a 	bl	1bce738 <$__nw(unsigned int)>
        14810c:	e59f4160 	ldr	r4, [pc, #160]	; 148274 <OsBoot+0x1b4>
        148110:	e5840000 	str	r0, [r4]
        148114:	eb66cf2e 	bl	1afbdd4 <TObjectTable::$Init(void)>
        148118:	eb66d75b 	bl	1afde8c <$InitMemArchCore(void)>
        14811c:	e24dd004 	sub	sp, sp, #4	; 0x4
        148120:	eb66d758 	bl	1afde88 <$InitKernelDomainAndEnvironment(void)>
        148124:	e1a0100d 	mov	r1, sp
        148128:	e59f0148 	ldr	r0, [pc, #148]	; 148278 <OsBoot+0x1b8>
        14812c:	eb6a29f3 	bl	1bd2900 <$FindEnvironmentId__13MemObjManagerSFUlPUl>
        148130:	e5942000 	ldr	r2, [r4]
        148134:	e59d1000 	ldr	r1, [sp]
        148138:	e201300f 	and	r3, r1, #15	; 0xf
        14813c:	e3a06001 	mov	r6, #1	; 0x1
        148140:	e3a00000 	mov	r0, #0	; 0x0
        148144:	e3330004 	teq	r3, #4	; 0x4
        148148:	11a03000 	movne	r3, r0
        14814c:	01a03006 	moveq	r3, r6
        148150:	e3330000 	teq	r3, #0	; 0x0
        148154:	11a00002 	movne	r0, r2
        148158:	1b07476d 	blne	319f14 <TObjectTable::Get(unsigned long)>
        14815c:	e1a05000 	mov	r5, r0
        148160:	e28dd004 	add	sp, sp, #4	; 0x4
        148164:	eb092a89 	bl	392b90 <EnterFIQAtomic>
        148168:	eb66d340 	bl	1afce70 <$InitGlobalWorld(void)>
        14816c:	eb66d753 	bl	1afdec0 <$InitTime>
        148170:	eb66d74c 	bl	1afdea8 <$InitRealTimeClock(void)>
        148174:	eb6704cc 	bl	1b094ac <$UserInit(void)>
        148178:	e3a00000 	mov	r0, #0	; 0x0
        14817c:	eb66a1b0 	bl	1af0844 <TTask::$__ct(void)>
        148180:	e59f40f4 	ldr	r4, [pc, #f4]	; 14827c <OsBoot+0x1bc>
        148184:	e3a03000 	mov	r3, #0	; 0x0
        148188:	e3a02001 	mov	r2, #1	; 0x1
        14818c:	e3a01003 	mov	r1, #3	; 0x3
        148190:	e5840000 	str	r0, [r4]
        148194:	eb66ebfc 	bl	1b0318c <$RegisterObject(TKernelObject *, KernelTypes, unsigned long, unsigned long *)>
        148198:	e1a03005 	mov	r3, r5
        14819c:	e59f20dc 	ldr	r2, [pc, #dc]	; 148280 <OsBoot+0x1c0>
        1481a0:	e3a01000 	mov	r1, #0	; 0x0
        1481a4:	e3a00000 	mov	r0, #0	; 0x0
        1481a8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1481ac:	e59f10d0 	ldr	r1, [pc, #d0]	; 148284 <OsBoot+0x1c4>
        1481b0:	e3a03000 	mov	r3, #0	; 0x0
        1481b4:	e3a02000 	mov	r2, #0	; 0x0
        1481b8:	e5940000 	ldr	r0, [r4]
        1481bc:	eb66d31e 	bl	1afce3c <$Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment>
        1481c0:	e28dd010 	add	sp, sp, #16	; 0x10
        1481c4:	e5940000 	ldr	r0, [r4]
        1481c8:	e5870000 	str	r0, [r7]
        1481cc:	eb67008f 	bl	1b08410 <$SwapInGlobals>
        1481d0:	e3a00000 	mov	r0, #0	; 0x0
        1481d4:	eb66a19a 	bl	1af0844 <TTask::$__ct(void)>
        1481d8:	e1a04000 	mov	r4, r0
        1481dc:	e28d3e13 	add	r3, sp, #304	; 0x130
        1481e0:	e3a02001 	mov	r2, #1	; 0x1
        1481e4:	e3a01003 	mov	r1, #3	; 0x3
        1481e8:	eb66ebe7 	bl	1b0318c <$RegisterObject(TKernelObject *, KernelTypes, unsigned long, unsigned long *)>
        1481ec:	e1a03005 	mov	r3, r5
        1481f0:	e59f2090 	ldr	r2, [pc, #90]	; 148288 <OsBoot+0x1c8>
        1481f4:	e3a01014 	mov	r1, #20	; 0x14
        1481f8:	e3a00000 	mov	r0, #0	; 0x0
        1481fc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        148200:	e59f1084 	ldr	r1, [pc, #84]	; 14828c <OsBoot+0x1cc>
        148204:	e1a00004 	mov	r0, r4
        148208:	e3a03000 	mov	r3, #0	; 0x0
        14820c:	e3a02b02 	mov	r2, #2048	; 0x800
        148210:	eb66d309 	bl	1afce3c <$Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment>
        148214:	e28dd010 	add	sp, sp, #16	; 0x10
        148218:	eb66fc70 	bl	1b073e0 <$StartTime>
        14821c:	eb66951e 	bl	1aed69c <$TabBoot>
        148220:	e59f0068 	ldr	r0, [pc, #68]	; 148290 <OsBoot+0x1d0>
        148224:	e5c06000 	strb	r6, [r0]
        148228:	eb66fc70 	bl	1b073f0 <$StopScheduler(void)>
        14822c:	eb66fc6a 	bl	1b073dc <$StartScheduler>
        148230:	eb092a5e 	bl	392bb0 <ExitFIQAtomic>
        148234:	eb092a21 	bl	392ac0 <EnterAtomic>
        148238:	e1a01004 	mov	r1, r4
        14823c:	e59f0050 	ldr	r0, [pc, #50]	; 148294 <OsBoot+0x1d4>
        148240:	e5900000 	ldr	r0, [r0]
        148244:	eb66a59b 	bl	1af18b8 <TScheduler::$Add(TTask *)>
        148248:	eb092a33 	bl	392b1c <ExitAtomic>
        14824c:	eb66fc50 	bl	1b07394 <$SleepTask(void)>
        148250:	e1a0000d 	mov	r0, sp
        148254:	e3a01000 	mov	r1, #0	; 0x0
        148258:	eb66a181 	bl	1af0864 <TEnvironment::$__dt(void)>
        14825c:	e28d002c 	add	r0, sp, #44	; 0x2c
        148260:	e3a01000 	mov	r1, #0	; 0x0
        148264:	eb66a589 	bl	1af1890 <TTask::$__dt(void)>
        148268:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        14826c:	0c10105c 	ldceq	0, cr1, [r0], -#368
        148270:	0c100ff8 	ldceq	15, cr0, [r0], -#992
        148274:	0c100fc8 	ldceq	15, cr0, [r0], -#800
        148278:	6b726e6c 	blvs	1de3c30 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x1d33d8>
        14827c:	0c100fc4 	ldceq	15, cr0, [r0], -#784
        148280:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        148284:	01b00078 	moveqs	r0, r8, ror r0
        148288:	75736572 	ldrvcb	r6, [r3, -#1394]!
        14828c:	01b094a8 	moveqs	r9, r8, lsr #9
        148290:	0c101008 	ldceq	0, cr1, [r0], -#32
        148294:	0c100fd0 	ldceq	15, cr0, [r0], -#832
    */
}

/**
 * Symbol: ObjectScavenger(TKernelObject *, unsigned long)
 * Address: 001489ac
 */
ObjectScavenger(TKernelObject *, unsigned long) {
    /*
        1489ac:	e1a0c00d 	mov	ip, sp
        1489b0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1489b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1489b8:	e5901000 	ldr	r1, [r0]
        1489bc:	e201100f 	and	r1, r1, #15	; 0xf
        1489c0:	e2411002 	sub	r1, r1, #2	; 0x2
        1489c4:	e3a04000 	mov	r4, #0	; 0x0
        1489c8:	e3510009 	cmp	r1, #9	; 0x9
        1489cc:	908ff101 	addls	pc, pc, r1, lsl #2
        1489d0:	ea000028 	b	148a78 <ObjectScavenger(TKernelObject *, unsigned long)+0xcc>
        1489d4:	ea000013 	b	148a28 <ObjectScavenger(TKernelObject *, unsigned long)+0x7c>
        1489d8:	ea000009 	b	148a04 <ObjectScavenger(TKernelObject *, unsigned long)+0x58>
        1489dc:	ea000025 	b	148a78 <ObjectScavenger(TKernelObject *, unsigned long)+0xcc>
        1489e0:	ea000024 	b	148a78 <ObjectScavenger(TKernelObject *, unsigned long)+0xcc>
        1489e4:	ea000012 	b	148a34 <ObjectScavenger(TKernelObject *, unsigned long)+0x88>
        1489e8:	ea000014 	b	148a40 <ObjectScavenger(TKernelObject *, unsigned long)+0x94>
        1489ec:	ea000016 	b	148a4c <ObjectScavenger(TKernelObject *, unsigned long)+0xa0>
        1489f0:	ea000018 	b	148a58 <ObjectScavenger(TKernelObject *, unsigned long)+0xac>
        1489f4:	ea00001a 	b	148a64 <ObjectScavenger(TKernelObject *, unsigned long)+0xb8>
        1489f8:	e59f0000 	ldr	r0, [pc, #0]	; 148a00 <ObjectScavenger(TKernelObject *, unsigned long)+0x54>
        1489fc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        148a00:	01b15ad4 	ldreqsb	r5, [r1, r4]!
        148a04:	e59010d4 	ldr	r1, [r0, #212]
        148a08:	e3310000 	teq	r1, #0	; 0x0
        148a0c:	1590106c 	ldrne	r1, [r0, #108]
        148a10:	13811501 	orrne	r1, r1, #4194304	; 0x400000
        148a14:	15a0106c 	strne	r1, [r0, #108]!
        148a18:	1a000016 	bne	148a78 <ObjectScavenger(TKernelObject *, unsigned long)+0xcc>
        148a1c:	e59f0000 	ldr	r0, [pc, #0]	; 148a24 <ObjectScavenger(TKernelObject *, unsigned long)+0x78>
        148a20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        148a24:	01af6b54 	moveq	r6, r4, asr fp
        148a28:	e59f0000 	ldr	r0, [pc, #0]	; 148a30 <ObjectScavenger(TKernelObject *, unsigned long)+0x84>
        148a2c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        148a30:	01af6b40 	moveq	r6, r0, asr #22
        148a34:	e59f0000 	ldr	r0, [pc, #0]	; 148a3c <ObjectScavenger(TKernelObject *, unsigned long)+0x90>
        148a38:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        148a3c:	01af6b48 	moveq	r6, r8, asr #22
        148a40:	e59f0000 	ldr	r0, [pc, #0]	; 148a48 <ObjectScavenger(TKernelObject *, unsigned long)+0x9c>
        148a44:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        148a48:	01af6b44 	moveq	r6, r4, asr #22
        148a4c:	e59f0000 	ldr	r0, [pc, #0]	; 148a54 <ObjectScavenger(TKernelObject *, unsigned long)+0xa8>
        148a50:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        148a54:	01af6b4c 	moveq	r6, ip, asr #22
        148a58:	e59f0000 	ldr	r0, [pc, #0]	; 148a60 <ObjectScavenger(TKernelObject *, unsigned long)+0xb4>
        148a5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        148a60:	01af6b50 	moveq	r6, r0, asr fp
        148a64:	e3a01001 	mov	r1, #1	; 0x1
        148a68:	eb66fe67 	bl	1b0840c <TMonitor::$Suspend(unsigned long)>
        148a6c:	e3300000 	teq	r0, #0	; 0x0
        148a70:	159f0008 	ldrne	r0, [pc, #8]	; 148a80 <ObjectScavenger(TKernelObject *, unsigned long)+0xd4>
        148a74:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        148a78:	e1a00004 	mov	r0, r4
        148a7c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        148a80:	01af6b24 	moveq	r6, r4, lsr #22
    */
}

/**
 * Symbol: ObjectAlloc__FP13ObjectMessageUlT2PUl
 * Address: 00148c0c
 */
void globals::ObjectAlloc() {
    /*
        148c0c:	e1a0c00d 	mov	ip, sp
        148c10:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        148c14:	e24cb004 	sub	fp, ip, #4	; 0x4
        148c18:	e1a04000 	mov	r4, r0
        148c1c:	e1a05002 	mov	r5, r2
        148c20:	e1a06003 	mov	r6, r3
        148c24:	e3a000ea 	mov	r0, #234	; 0xea
        148c28:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        148c2c:	e351000c 	cmp	r1, #12	; 0xc
        148c30:	391baff0 	ldmccdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148c34:	e3a08001 	mov	r8, #1	; 0x1
        148c38:	e205900f 	and	r9, r5, #15	; 0xf
        148c3c:	e5942008 	ldr	r2, [r4, #8]
        148c40:	e59f704c 	ldr	r7, [pc, #4c]	; 148c94 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x88>
        148c44:	e3520009 	cmp	r2, #9	; 0x9
        148c48:	908ff102 	addls	pc, pc, r2, lsl #2
        148c4c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148c50:	ea000010 	b	148c98 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x8c>
        148c54:	ea000020 	b	148cdc <ObjectAlloc__FP13ObjectMessageUlT2PUl+0xd0>
        148c58:	ea00005b 	b	148dcc <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x1c0>
        148c5c:	ea00006f 	b	148e20 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x214>
        148c60:	ea0000b2 	b	148f30 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x324>
        148c64:	ea0000cc 	b	148f9c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x390>
        148c68:	ea0000e0 	b	148ff0 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x3e4>
        148c6c:	ea0000ff 	b	149070 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x464>
        148c70:	ea00011f 	b	1490f4 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x4e8>
        148c74:	e3310024 	teq	r1, #36	; 0x24
        148c78:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148c7c:	e594001c 	ldr	r0, [r4, #28]
        148c80:	e3500601 	cmp	r0, #1048576	; 0x100000
        148c84:	e3a00000 	mov	r0, #0	; 0x0
        148c88:	2a000092 	bcs	148ed8 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x2cc>
        148c8c:	eb669ad0 	bl	1aef7d4 <TLittlePhys::$__ct(void)>
        148c90:	ea000091 	b	148edc <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x2d0>
        148c94:	0c100fc8 	ldceq	15, cr0, [r0], -#800
        148c98:	e331000c 	teq	r1, #12	; 0xc
        148c9c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148ca0:	e3a00038 	mov	r0, #56	; 0x38
        148ca4:	eb6a16a3 	bl	1bce738 <$__nw(unsigned int)>
        148ca8:	e1b04000 	movs	r4, r0
        148cac:	0a000005 	beq	148cc8 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0xbc>
        148cb0:	e2840010 	add	r0, r4, #16	; 0x10
        148cb4:	e3a01080 	mov	r1, #128	; 0x80
        148cb8:	eb6a127f 	bl	1bcd6bc <TDoubleQContainer::$__ct(char *)>
        148cbc:	e2840024 	add	r0, r4, #36	; 0x24
        148cc0:	e3a01080 	mov	r1, #128	; 0x80
        148cc4:	eb6a127c 	bl	1bcd6bc <TDoubleQContainer::$__ct(char *)>
        148cc8:	e1a00004 	mov	r0, r4
        148ccc:	e1a03006 	mov	r3, r6
        148cd0:	e1a02005 	mov	r2, r5
        148cd4:	e3a01002 	mov	r1, #2	; 0x2
        148cd8:	ea000103 	b	1490ec <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x4e0>
        148cdc:	e3310028 	teq	r1, #40	; 0x28
        148ce0:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148ce4:	e5940024 	ldr	r0, [r4, #36]
        148ce8:	e3300000 	teq	r0, #0	; 0x0
        148cec:	0a00000d 	beq	148d28 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x11c>
        148cf0:	e200100f 	and	r1, r0, #15	; 0xf
        148cf4:	e3310004 	teq	r1, #4	; 0x4
        148cf8:	e5972000 	ldr	r2, [r7]
        148cfc:	13a08000 	movne	r8, #0	; 0x0
        148d00:	e3380000 	teq	r8, #0	; 0x0
        148d04:	0a000003 	beq	148d18 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x10c>
        148d08:	e1a01000 	mov	r1, r0
        148d0c:	e1a00002 	mov	r0, r2
        148d10:	eb07447f 	bl	319f14 <TObjectTable::Get(unsigned long)>
        148d14:	ea000000 	b	148d1c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x110>
        148d18:	e3a00000 	mov	r0, #0	; 0x0
        148d1c:	e1b08000 	movs	r8, r0
        148d20:	0a000118 	beq	149188 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x57c>
        148d24:	ea00000b 	b	148d58 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x14c>
        148d28:	e3390003 	teq	r9, #3	; 0x3
        148d2c:	e5970000 	ldr	r0, [r7]
        148d30:	13a08000 	movne	r8, #0	; 0x0
        148d34:	e3380000 	teq	r8, #0	; 0x0
        148d38:	0a000002 	beq	148d48 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x13c>
        148d3c:	e1a01005 	mov	r1, r5
        148d40:	eb074473 	bl	319f14 <TObjectTable::Get(unsigned long)>
        148d44:	ea000000 	b	148d4c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x140>
        148d48:	e3a00000 	mov	r0, #0	; 0x0
        148d4c:	e3300000 	teq	r0, #0	; 0x0
        148d50:	0a00010c 	beq	149188 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x57c>
        148d54:	e5b08074 	ldr	r8, [r0, #116]!
        148d58:	e3a00000 	mov	r0, #0	; 0x0
        148d5c:	eb669eb8 	bl	1af0844 <TTask::$__ct(void)>
        148d60:	e1b09000 	movs	r9, r0
        148d64:	0a0000e8 	beq	14910c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x500>
        148d68:	e1a01009 	mov	r1, r9
        148d6c:	e3a03001 	mov	r3, #1	; 0x1
        148d70:	e3a02003 	mov	r2, #3	; 0x3
        148d74:	e5970000 	ldr	r0, [r7]
        148d78:	eb66a2d2 	bl	1af18c8 <TObjectTable::$Add(TKernelObject *, KernelTypes, unsigned long)>
        148d7c:	e1a0a000 	mov	sl, r0
        148d80:	e1a03008 	mov	r3, r8
        148d84:	e2842018 	add	r2, r4, #24	; 0x18
        148d88:	e8920007 	ldmia	r2, {r0, r1, r2}
        148d8c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        148d90:	e1a0300a 	mov	r3, sl
        148d94:	e1a00009 	mov	r0, r9
        148d98:	e284400c 	add	r4, r4, #12	; 0xc
        148d9c:	e9b40006 	ldmib	r4!, {r1, r2}
        148da0:	eb66d025 	bl	1afce3c <$Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment>
        148da4:	e28dd010 	add	sp, sp, #16	; 0x10
        148da8:	e3300000 	teq	r0, #0	; 0x0
        148dac:	11a0100a 	movne	r1, sl
        148db0:	1a00010b 	bne	1491e4 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x5d8>
        148db4:	e59f000c 	ldr	r0, [pc, #c]	; 148dc8 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x1bc>
        148db8:	e5a9500c 	str	r5, [r9, #12]!
        148dbc:	e589003c 	str	r0, [r9, #60]
        148dc0:	e586a000 	str	sl, [r6]
        148dc4:	ea00010a 	b	1491f4 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x5e8>
        148dc8:	01bdde84 	moveqs	sp, r4, lsl #29
        148dcc:	e3310010 	teq	r1, #16	; 0x10
        148dd0:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148dd4:	e3a0002c 	mov	r0, #44	; 0x2c
        148dd8:	eb6a1656 	bl	1bce738 <$__nw(unsigned int)>
        148ddc:	e3500000 	cmp	r0, #0	; 0x0
        148de0:	e1a07000 	mov	r7, r0
        148de4:	0a000008 	beq	148e0c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x200>
        148de8:	e1a00007 	mov	r0, r7
        148dec:	e5b4100c 	ldr	r1, [r4, #12]!
        148df0:	eb66cbf6 	bl	1afbdd0 <TEnvironment::$Init(void *)>
        148df4:	e3300000 	teq	r0, #0	; 0x0
        148df8:	0a000003 	beq	148e0c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x200>
        148dfc:	e1a00007 	mov	r0, r7
        148e00:	e3a01001 	mov	r1, #1	; 0x1
        148e04:	eb669e96 	bl	1af0864 <TEnvironment::$__dt(void)>
        148e08:	ea0000bf 	b	14910c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x500>
        148e0c:	e1a03006 	mov	r3, r6
        148e10:	e1a02005 	mov	r2, r5
        148e14:	e1a00007 	mov	r0, r7
        148e18:	e3a01004 	mov	r1, #4	; 0x4
        148e1c:	ea0000b2 	b	1490ec <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x4e0>
        148e20:	e3310018 	teq	r1, #24	; 0x18
        148e24:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148e28:	e594100c 	ldr	r1, [r4, #12]
        148e2c:	e1b09001 	movs	r9, r1
        148e30:	0a00000f 	beq	148e74 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x268>
        148e34:	e201200f 	and	r2, r1, #15	; 0xf
        148e38:	e332000a 	teq	r2, #10	; 0xa
        148e3c:	e5970000 	ldr	r0, [r7]
        148e40:	13a08000 	movne	r8, #0	; 0x0
        148e44:	e3380000 	teq	r8, #0	; 0x0
        148e48:	0a000001 	beq	148e54 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x248>
        148e4c:	eb074430 	bl	319f14 <TObjectTable::Get(unsigned long)>
        148e50:	ea000000 	b	148e58 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x24c>
        148e54:	e3a00000 	mov	r0, #0	; 0x0
        148e58:	e3300000 	teq	r0, #0	; 0x0
        148e5c:	0a0000c9 	beq	149188 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x57c>
        148e60:	e5d00044 	ldrb	r0, [r0, #68]
        148e64:	e3300000 	teq	r0, #0	; 0x0
        148e68:	03e00041 	mvneq	r0, #65	; 0x41
        148e6c:	02400c27 	subeq	r0, r0, #9984	; 0x2700
        148e70:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148e74:	e3a00000 	mov	r0, #0	; 0x0
        148e78:	eb669e72 	bl	1af0848 <TKDomain::$__ct(void)>
        148e7c:	e1b08000 	movs	r8, r0
        148e80:	0a0000a1 	beq	14910c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x500>
        148e84:	e1a03005 	mov	r3, r5
        148e88:	e1a01008 	mov	r1, r8
        148e8c:	e3a02005 	mov	r2, #5	; 0x5
        148e90:	e5970000 	ldr	r0, [r7]
        148e94:	eb66a28b 	bl	1af18c8 <TObjectTable::$Add(TKernelObject *, KernelTypes, unsigned long)>
        148e98:	e1a05000 	mov	r5, r0
        148e9c:	e1a01009 	mov	r1, r9
        148ea0:	e1a00008 	mov	r0, r8
        148ea4:	e284400c 	add	r4, r4, #12	; 0xc
        148ea8:	e9b4000c 	ldmib	r4!, {r2, r3}
        148eac:	eb66cfe4 	bl	1afce44 <TKDomain::$Init(unsigned long, unsigned long, unsigned long)>
        148eb0:	e1b04000 	movs	r4, r0
        148eb4:	0a0000cd 	beq	1491f0 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x5e4>
        148eb8:	e1a01005 	mov	r1, r5
        148ebc:	e5970000 	ldr	r0, [r7]
        148ec0:	eb66e8c3 	bl	1b031d4 <TObjectTable::$Remove(unsigned long)>
        148ec4:	e1a00008 	mov	r0, r8
        148ec8:	e3a01001 	mov	r1, #1	; 0x1
        148ecc:	eb66a270 	bl	1af1894 <TKDomain::$__dt(void)>
        148ed0:	e1a00004 	mov	r0, r4
        148ed4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148ed8:	eb669e58 	bl	1af0840 <TPhys::$__ct(void)>
        148edc:	e1b07000 	movs	r7, r0
        148ee0:	0a000089 	beq	14910c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x500>
        148ee4:	e5d43021 	ldrb	r3, [r4, #33]
        148ee8:	e92d0008 	stmdb	sp!, {r3}
        148eec:	e5d43020 	ldrb	r3, [r4, #32]
        148ef0:	e1a00007 	mov	r0, r7
        148ef4:	e5b41010 	ldr	r1, [r4, #16]!
        148ef8:	e5b4200c 	ldr	r2, [r4, #12]!
        148efc:	eb66cfcd 	bl	1afce38 <TPhys::$Init(unsigned long, unsigned long, unsigned char, unsigned char)>
        148f00:	e28dd004 	add	sp, sp, #4	; 0x4
        148f04:	e3300000 	teq	r0, #0	; 0x0
        148f08:	0a000003 	beq	148f1c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x310>
        148f0c:	e1a00007 	mov	r0, r7
        148f10:	e3a01001 	mov	r1, #1	; 0x1
        148f14:	eb66a25b 	bl	1af1888 <TPhys::$__dt(void)>
        148f18:	ea00007b 	b	14910c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x500>
        148f1c:	e1a03006 	mov	r3, r6
        148f20:	e1a02005 	mov	r2, r5
        148f24:	e1a00007 	mov	r0, r7
        148f28:	e3a0100b 	mov	r1, #11	; 0xb
        148f2c:	ea00006e 	b	1490ec <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x4e0>
        148f30:	e3510010 	cmp	r1, #16	; 0x10
        148f34:	391baff0 	ldmccdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148f38:	e3a02010 	mov	r2, #16	; 0x10
        148f3c:	e594300c 	ldr	r3, [r4, #12]
        148f40:	e0822103 	add	r2, r2, r3, lsl #2
        148f44:	e1320001 	teq	r2, r1
        148f48:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148f4c:	e3a00018 	mov	r0, #24	; 0x18
        148f50:	eb6a15f8 	bl	1bce738 <$__nw(unsigned int)>
        148f54:	e3500000 	cmp	r0, #0	; 0x0
        148f58:	e1a07000 	mov	r7, r0
        148f5c:	0a000009 	beq	148f88 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x37c>
        148f60:	e2842010 	add	r2, r4, #16	; 0x10
        148f64:	e1a00007 	mov	r0, r7
        148f68:	e5b4100c 	ldr	r1, [r4, #12]!
        148f6c:	eb66cfa7 	bl	1afce10 <TSemaphoreOpList::$Init(unsigned long, unsigned long *)>
        148f70:	e3300000 	teq	r0, #0	; 0x0
        148f74:	0a000003 	beq	148f88 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x37c>
        148f78:	e1a00007 	mov	r0, r7
        148f7c:	e3a01001 	mov	r1, #1	; 0x1
        148f80:	eb669e3c 	bl	1af0878 <TSemaphoreOpList::$__dt(void)>
        148f84:	ea000060 	b	14910c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x500>
        148f88:	e1a03006 	mov	r3, r6
        148f8c:	e1a02005 	mov	r2, r5
        148f90:	e1a00007 	mov	r0, r7
        148f94:	e3a01006 	mov	r1, #6	; 0x6
        148f98:	ea000053 	b	1490ec <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x4e0>
        148f9c:	e3310010 	teq	r1, #16	; 0x10
        148fa0:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148fa4:	e3a0001c 	mov	r0, #28	; 0x1c
        148fa8:	eb6a15e2 	bl	1bce738 <$__nw(unsigned int)>
        148fac:	e3500000 	cmp	r0, #0	; 0x0
        148fb0:	e1a07000 	mov	r7, r0
        148fb4:	0a000008 	beq	148fdc <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x3d0>
        148fb8:	e1a00007 	mov	r0, r7
        148fbc:	e5b4100c 	ldr	r1, [r4, #12]!
        148fc0:	eb66cf90 	bl	1afce08 <TSemaphoreGroup::$Init(unsigned long)>
        148fc4:	e3300000 	teq	r0, #0	; 0x0
        148fc8:	0a000003 	beq	148fdc <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x3d0>
        148fcc:	e1a00007 	mov	r0, r7
        148fd0:	e3a01001 	mov	r1, #1	; 0x1
        148fd4:	eb669e26 	bl	1af0874 <TSemaphoreGroup::$__dt(void)>
        148fd8:	ea00004b 	b	14910c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x500>
        148fdc:	e1a03006 	mov	r3, r6
        148fe0:	e1a02005 	mov	r2, r5
        148fe4:	e1a00007 	mov	r0, r7
        148fe8:	e3a01007 	mov	r1, #7	; 0x7
        148fec:	ea00003e 	b	1490ec <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x4e0>
        148ff0:	e331000c 	teq	r1, #12	; 0xc
        148ff4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        148ff8:	e3390003 	teq	r9, #3	; 0x3
        148ffc:	e5970000 	ldr	r0, [r7]
        149000:	13a08000 	movne	r8, #0	; 0x0
        149004:	e3380000 	teq	r8, #0	; 0x0
        149008:	0a000002 	beq	149018 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x40c>
        14900c:	e1a01005 	mov	r1, r5
        149010:	eb0743bf 	bl	319f14 <TObjectTable::Get(unsigned long)>
        149014:	ea000000 	b	14901c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x410>
        149018:	e3a00000 	mov	r0, #0	; 0x0
        14901c:	e3300000 	teq	r0, #0	; 0x0
        149020:	0a000058 	beq	149188 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x57c>
        149024:	e5b07074 	ldr	r7, [r0, #116]!
        149028:	e3a00024 	mov	r0, #36	; 0x24
        14902c:	eb6a15c1 	bl	1bce738 <$__nw(unsigned int)>
        149030:	e3500000 	cmp	r0, #0	; 0x0
        149034:	e1a04000 	mov	r4, r0
        149038:	0a000007 	beq	14905c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x450>
        14903c:	e1a01007 	mov	r1, r7
        149040:	e1a00004 	mov	r0, r4
        149044:	eb66cb5a 	bl	1afbdb4 <TSharedMem::$Init(TEnvironment *)>
        149048:	e3300000 	teq	r0, #0	; 0x0
        14904c:	0a000002 	beq	14905c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x450>
        149050:	e1a00004 	mov	r0, r4
        149054:	eb6a11a1 	bl	1bcd6e0 <$__dl(void *)>
        149058:	ea00002b 	b	14910c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x500>
        14905c:	e1a03006 	mov	r3, r6
        149060:	e1a02005 	mov	r2, r5
        149064:	e1a00004 	mov	r0, r4
        149068:	e3a01008 	mov	r1, #8	; 0x8
        14906c:	ea00001e 	b	1490ec <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x4e0>
        149070:	e331000c 	teq	r1, #12	; 0xc
        149074:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        149078:	e3390003 	teq	r9, #3	; 0x3
        14907c:	e5970000 	ldr	r0, [r7]
        149080:	13a08000 	movne	r8, #0	; 0x0
        149084:	e3380000 	teq	r8, #0	; 0x0
        149088:	0a000002 	beq	149098 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x48c>
        14908c:	e1a01005 	mov	r1, r5
        149090:	eb07439f 	bl	319f14 <TObjectTable::Get(unsigned long)>
        149094:	ea000000 	b	14909c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x490>
        149098:	e3a00000 	mov	r0, #0	; 0x0
        14909c:	e3300000 	teq	r0, #0	; 0x0
        1490a0:	0a000038 	beq	149188 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x57c>
        1490a4:	e5b07074 	ldr	r7, [r0, #116]!
        1490a8:	e3a00000 	mov	r0, #0	; 0x0
        1490ac:	eb6699cf 	bl	1aef7f0 <TSharedMemMsg::$__ct(void)>
        1490b0:	e1b04000 	movs	r4, r0
        1490b4:	0a000008 	beq	1490dc <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x4d0>
        1490b8:	e1a01007 	mov	r1, r7
        1490bc:	e1a00004 	mov	r0, r4
        1490c0:	eb66cb4a 	bl	1afbdf0 <TSharedMemMsg::$Init(TEnvironment *)>
        1490c4:	e3300000 	teq	r0, #0	; 0x0
        1490c8:	0a000003 	beq	1490dc <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x4d0>
        1490cc:	e1a00004 	mov	r0, r4
        1490d0:	e3a01001 	mov	r1, #1	; 0x1
        1490d4:	eb669de4 	bl	1af086c <TSharedMemMsg::$__dt(void)>
        1490d8:	ea00000b 	b	14910c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x500>
        1490dc:	e1a03006 	mov	r3, r6
        1490e0:	e1a02005 	mov	r2, r5
        1490e4:	e1a00004 	mov	r0, r4
        1490e8:	e3a01009 	mov	r1, #9	; 0x9
        1490ec:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1490f0:	ea66e825 	b	1b0318c <$RegisterObject(TKernelObject *, KernelTypes, unsigned long, unsigned long *)>
        1490f4:	e3310024 	teq	r1, #36	; 0x24
        1490f8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1490fc:	e3a00000 	mov	r0, #0	; 0x0
        149100:	eb669dd1 	bl	1af084c <TMonitor::$__ct(void)>
        149104:	e1b0a000 	movs	sl, r0
        149108:	1a000002 	bne	149118 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x50c>
        14910c:	e59f0000 	ldr	r0, [pc, #0]	; 149114 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x508>
        149110:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        149114:	ffffd8e7 	swinv	0x00ffd8e7
        149118:	e5940018 	ldr	r0, [r4, #24]
        14911c:	e3300000 	teq	r0, #0	; 0x0
        149120:	0a00000d 	beq	14915c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x550>
        149124:	e200100f 	and	r1, r0, #15	; 0xf
        149128:	e3310004 	teq	r1, #4	; 0x4
        14912c:	e5972000 	ldr	r2, [r7]
        149130:	13a08000 	movne	r8, #0	; 0x0
        149134:	e3380000 	teq	r8, #0	; 0x0
        149138:	0a000003 	beq	14914c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x540>
        14913c:	e1a01000 	mov	r1, r0
        149140:	e1a00002 	mov	r0, r2
        149144:	eb074372 	bl	319f14 <TObjectTable::Get(unsigned long)>
        149148:	ea000000 	b	149150 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x544>
        14914c:	e3a00000 	mov	r0, #0	; 0x0
        149150:	e1b08000 	movs	r8, r0
        149154:	1a00000f 	bne	149198 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x58c>
        149158:	ea00000a 	b	149188 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x57c>
        14915c:	e3390003 	teq	r9, #3	; 0x3
        149160:	e5970000 	ldr	r0, [r7]
        149164:	13a08000 	movne	r8, #0	; 0x0
        149168:	e3380000 	teq	r8, #0	; 0x0
        14916c:	0a000002 	beq	14917c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x570>
        149170:	e1a01005 	mov	r1, r5
        149174:	eb074366 	bl	319f14 <TObjectTable::Get(unsigned long)>
        149178:	ea000000 	b	149180 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x574>
        14917c:	e3a00000 	mov	r0, #0	; 0x0
        149180:	e3300000 	teq	r0, #0	; 0x0
        149184:	1a000002 	bne	149194 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x588>
        149188:	e3a000e1 	mov	r0, #225	; 0xe1
        14918c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        149190:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        149194:	e5b08074 	ldr	r8, [r0, #116]!
        149198:	e1a03005 	mov	r3, r5
        14919c:	e1a0100a 	mov	r1, sl
        1491a0:	e3a0200a 	mov	r2, #10	; 0xa
        1491a4:	e5970000 	ldr	r0, [r7]
        1491a8:	eb66a1c6 	bl	1af18c8 <TObjectTable::$Add(TKernelObject *, KernelTypes, unsigned long)>
        1491ac:	e1a05000 	mov	r5, r0
        1491b0:	e5d4301d 	ldrb	r3, [r4, #29]
        1491b4:	e5942020 	ldr	r2, [r4, #32]
        1491b8:	e5d4101c 	ldrb	r1, [r4, #28]
        1491bc:	e1a00008 	mov	r0, r8
        1491c0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1491c4:	e1a0000a 	mov	r0, sl
        1491c8:	e2844008 	add	r4, r4, #8	; 0x8
        1491cc:	e9b4000e 	ldmib	r4!, {r1, r2, r3}
        1491d0:	eb66cf1c 	bl	1afce48 <$Init__8TMonitorFPFPvUlT1_vUlPvP12TEnvironmentUcT2T5>
        1491d4:	e28dd010 	add	sp, sp, #16	; 0x10
        1491d8:	e3300000 	teq	r0, #0	; 0x0
        1491dc:	0a000003 	beq	1491f0 <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x5e4>
        1491e0:	e1a01005 	mov	r1, r5
        1491e4:	e5970000 	ldr	r0, [r7]
        1491e8:	eb66e7f9 	bl	1b031d4 <TObjectTable::$Remove(unsigned long)>
        1491ec:	eaffffc6 	b	14910c <ObjectAlloc__FP13ObjectMessageUlT2PUl+0x500>
        1491f0:	e5865000 	str	r5, [r6]
        1491f4:	e3a00000 	mov	r0, #0	; 0x0
        1491f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ObjectDestroy__FP13ObjectMessageUlT2
 * Address: 0014974c
 */
void globals::ObjectDestroy() {
    /*
        14974c:	e331000c 	teq	r1, #12	; 0xc
        149750:	13a000ea 	movne	r0, #234	; 0xea
        149754:	12400b0a 	subne	r0, r0, #10240	; 0x2800
        149758:	11a0f00e 	movne	pc, lr
        14975c:	e1a0c00d 	mov	ip, sp
        149760:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        149764:	e24cb004 	sub	fp, ip, #4	; 0x4
        149768:	e1a05000 	mov	r5, r0
        14976c:	e1a04002 	mov	r4, r2
        149770:	e5901008 	ldr	r1, [r0, #8]
        149774:	e59f603c 	ldr	r6, [pc, #3c]	; 1497b8 <ObjectDestroy__FP13ObjectMessageUlT2+0x6c>
        149778:	e5960000 	ldr	r0, [r6]
        14977c:	eb0741e4 	bl	319f14 <TObjectTable::Get(unsigned long)>
        149780:	e3300000 	teq	r0, #0	; 0x0
        149784:	03a000e1 	moveq	r0, #225	; 0xe1
        149788:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        14978c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        149790:	e3340000 	teq	r4, #0	; 0x0
        149794:	15900008 	ldrne	r0, [r0, #8]
        149798:	11300004 	teqne	r0, r4
        14979c:	05b51008 	ldreq	r1, [r5, #8]!
        1497a0:	05960000 	ldreq	r0, [r6]
        1497a4:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
        1497a8:	0a66e689 	beq	1b031d4 <TObjectTable::$Remove(unsigned long)>
        1497ac:	13a000cd 	movne	r0, #205	; 0xcd
        1497b0:	12400b0a 	subne	r0, r0, #10240	; 0x2800
        1497b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1497b8:	0c100fc8 	ldceq	15, cr0, [r0], -#800
    */
}

/**
 * Symbol: ObjectStart(ObjectMessage *, unsigned long)
 * Address: 001497bc
 */
ObjectStart(ObjectMessage *, unsigned long) {
    /*
        1497bc:	e1a0c00d 	mov	ip, sp
        1497c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1497c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1497c8:	e1a03000 	mov	r3, r0
        1497cc:	e3a000ea 	mov	r0, #234	; 0xea
        1497d0:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        1497d4:	e331000c 	teq	r1, #12	; 0xc
        1497d8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1497dc:	e59f104c 	ldr	r1, [pc, #4c]	; 149830 <ObjectStart(ObjectMessage *, unsigned long)+0x74>
        1497e0:	e5912000 	ldr	r2, [r1]
        1497e4:	e5b31008 	ldr	r1, [r3, #8]!
        1497e8:	e201300f 	and	r3, r1, #15	; 0xf
        1497ec:	e3a04000 	mov	r4, #0	; 0x0
        1497f0:	e3330003 	teq	r3, #3	; 0x3
        1497f4:	11a03004 	movne	r3, r4
        1497f8:	03a03001 	moveq	r3, #1	; 0x1
        1497fc:	e3330000 	teq	r3, #0	; 0x0
        149800:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        149804:	e1a00002 	mov	r0, r2
        149808:	eb0741c1 	bl	319f14 <TObjectTable::Get(unsigned long)>
        14980c:	e1a05000 	mov	r5, r0
        149810:	eb0924aa 	bl	392ac0 <EnterAtomic>
        149814:	e1a01005 	mov	r1, r5
        149818:	e59f0014 	ldr	r0, [pc, #14]	; 149834 <ObjectStart(ObjectMessage *, unsigned long)+0x78>
        14981c:	e5900000 	ldr	r0, [r0]
        149820:	eb66a024 	bl	1af18b8 <TScheduler::$Add(TTask *)>
        149824:	eb0924bc 	bl	392b1c <ExitAtomic>
        149828:	e1a00004 	mov	r0, r4
        14982c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        149830:	0c100fc8 	ldceq	15, cr0, [r0], -#800
        149834:	0c100fd0 	ldceq	15, cr0, [r0], -#832
    */
}

/**
 * Symbol: ObjectSuspend(ObjectMessage *, unsigned long)
 * Address: 00149838
 */
ObjectSuspend(ObjectMessage *, unsigned long) {
    /*
        149838:	e1a0c00d 	mov	ip, sp
        14983c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        149840:	e24cb004 	sub	fp, ip, #4	; 0x4
        149844:	e1a03000 	mov	r3, r0
        149848:	e3a000ea 	mov	r0, #234	; 0xea
        14984c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        149850:	e331000c 	teq	r1, #12	; 0xc
        149854:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        149858:	e59f105c 	ldr	r1, [pc, #5c]	; 1498bc <ObjectSuspend(ObjectMessage *, unsigned long)+0x84>
        14985c:	e5912000 	ldr	r2, [r1]
        149860:	e5b31008 	ldr	r1, [r3, #8]!
        149864:	e201300f 	and	r3, r1, #15	; 0xf
        149868:	e3a05000 	mov	r5, #0	; 0x0
        14986c:	e3330003 	teq	r3, #3	; 0x3
        149870:	11a03005 	movne	r3, r5
        149874:	03a03001 	moveq	r3, #1	; 0x1
        149878:	e3330000 	teq	r3, #0	; 0x0
        14987c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        149880:	e1a00002 	mov	r0, r2
        149884:	eb0741a2 	bl	319f14 <TObjectTable::Get(unsigned long)>
        149888:	e1b04000 	movs	r4, r0
        14988c:	0a000008 	beq	1498b4 <ObjectSuspend(ObjectMessage *, unsigned long)+0x7c>
        149890:	e594006c 	ldr	r0, [r4, #108]
        149894:	e3100008 	tst	r0, #8	; 0x8
        149898:	03a000d4 	moveq	r0, #212	; 0xd4
        14989c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1498a0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1498a4:	eb092485 	bl	392ac0 <EnterAtomic>
        1498a8:	e1a00004 	mov	r0, r4
        1498ac:	eb66fef7 	bl	1b09490 <$UnScheduleTask(TTask *)>
        1498b0:	eb092499 	bl	392b1c <ExitAtomic>
        1498b4:	e1a00005 	mov	r0, r5
        1498b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1498bc:	0c100fc8 	ldceq	15, cr0, [r0], -#800
    */
}

/**
 * Symbol: ObjectGetRegister(ObjectMessage *, unsigned long, unsigned long *)
 * Address: 001498c0
 */
ObjectGetRegister(ObjectMessage *, unsigned long, unsigned long *) {
    /*
        1498c0:	e1a0c00d 	mov	ip, sp
        1498c4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1498c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1498cc:	e1a04000 	mov	r4, r0
        1498d0:	e1a05002 	mov	r5, r2
        1498d4:	e3a000ea 	mov	r0, #234	; 0xea
        1498d8:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        1498dc:	e3310010 	teq	r1, #16	; 0x10
        1498e0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1498e4:	e59f105c 	ldr	r1, [pc, #5c]	; 149948 <ObjectGetRegister(ObjectMessage *, unsigned long, unsigned long *)+0x88>
        1498e8:	e5912000 	ldr	r2, [r1]
        1498ec:	e5941008 	ldr	r1, [r4, #8]
        1498f0:	e201300f 	and	r3, r1, #15	; 0xf
        1498f4:	e3a06000 	mov	r6, #0	; 0x0
        1498f8:	e3330003 	teq	r3, #3	; 0x3
        1498fc:	11a03006 	movne	r3, r6
        149900:	03a03001 	moveq	r3, #1	; 0x1
        149904:	e3330000 	teq	r3, #0	; 0x0
        149908:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        14990c:	e1a00002 	mov	r0, r2
        149910:	eb07417f 	bl	319f14 <TObjectTable::Get(unsigned long)>
        149914:	e1a07000 	mov	r7, r0
        149918:	e594000c 	ldr	r0, [r4, #12]
        14991c:	e350000f 	cmp	r0, #15	; 0xf
        149920:	859f0024 	ldrhi	r0, [pc, #24]	; 14994c <ObjectGetRegister(ObjectMessage *, unsigned long, unsigned long *)+0x8c>
        149924:	891ba8f0 	ldmhidb	fp, {r4, r5, r6, r7, fp, sp, pc}
        149928:	eb092464 	bl	392ac0 <EnterAtomic>
        14992c:	e5b4000c 	ldr	r0, [r4, #12]!
        149930:	e0870100 	add	r0, r7, r0, lsl #2
        149934:	e5900010 	ldr	r0, [r0, #16]
        149938:	e5850000 	str	r0, [r5]
        14993c:	eb092476 	bl	392b1c <ExitAtomic>
        149940:	e1a00006 	mov	r0, r6
        149944:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        149948:	0c100fc8 	ldceq	15, cr0, [r0], -#800
        14994c:	ffffd8d3 	swinv	0x00ffd8d3
    */
}

/**
 * Symbol: ObjectSetRegister(ObjectMessage *, unsigned long)
 * Address: 00149950
 */
ObjectSetRegister(ObjectMessage *, unsigned long) {
    /*
        149950:	e1a0c00d 	mov	ip, sp
        149954:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        149958:	e24cb004 	sub	fp, ip, #4	; 0x4
        14995c:	e1a04000 	mov	r4, r0
        149960:	e3a000ea 	mov	r0, #234	; 0xea
        149964:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        149968:	e3310014 	teq	r1, #20	; 0x14
        14996c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        149970:	e59f105c 	ldr	r1, [pc, #5c]	; 1499d4 <ObjectSetRegister(ObjectMessage *, unsigned long)+0x84>
        149974:	e5912000 	ldr	r2, [r1]
        149978:	e5941008 	ldr	r1, [r4, #8]
        14997c:	e201300f 	and	r3, r1, #15	; 0xf
        149980:	e3a05000 	mov	r5, #0	; 0x0
        149984:	e3330003 	teq	r3, #3	; 0x3
        149988:	11a03005 	movne	r3, r5
        14998c:	03a03001 	moveq	r3, #1	; 0x1
        149990:	e3330000 	teq	r3, #0	; 0x0
        149994:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        149998:	e1a00002 	mov	r0, r2
        14999c:	eb07415c 	bl	319f14 <TObjectTable::Get(unsigned long)>
        1499a0:	e1a06000 	mov	r6, r0
        1499a4:	e594000c 	ldr	r0, [r4, #12]
        1499a8:	e350000f 	cmp	r0, #15	; 0xf
        1499ac:	859f0024 	ldrhi	r0, [pc, #24]	; 1499d8 <ObjectSetRegister(ObjectMessage *, unsigned long)+0x88>
        1499b0:	891ba870 	ldmhidb	fp, {r4, r5, r6, fp, sp, pc}
        1499b4:	eb092441 	bl	392ac0 <EnterAtomic>
        1499b8:	e5b4100c 	ldr	r1, [r4, #12]!
        1499bc:	e5940004 	ldr	r0, [r4, #4]
        1499c0:	e0861101 	add	r1, r6, r1, lsl #2
        1499c4:	e5a10010 	str	r0, [r1, #16]!
        1499c8:	eb092453 	bl	392b1c <ExitAtomic>
        1499cc:	e1a00005 	mov	r0, r5
        1499d0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1499d4:	0c100fc8 	ldceq	15, cr0, [r0], -#800
        1499d8:	ffffd8d3 	swinv	0x00ffd8d3
    */
}

/**
 * Symbol: OffsetStrokes__FPP7TStrokelT2
 * Address: 001a3750
 */
void globals::OffsetStrokes() {
    /*
        1a3750:	e1a0c00d 	mov	ip, sp
        1a3754:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a3758:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a375c:	e1a04000 	mov	r4, r0
        1a3760:	e1a06001 	mov	r6, r1
        1a3764:	e1a05002 	mov	r5, r2
        1a3768:	e3a07000 	mov	r7, #0	; 0x0
        1a376c:	e5900000 	ldr	r0, [r0]
        1a3770:	e3300000 	teq	r0, #0	; 0x0
        1a3774:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a3778:	e1a02005 	mov	r2, r5
        1a377c:	e1a01006 	mov	r1, r6
        1a3780:	eb6727c6 	bl	1b6d6a0 <TStroke::$Offset(long, long)>
        1a3784:	e2877001 	add	r7, r7, #1	; 0x1
        1a3788:	e7940107 	ldr	r0, [r4, r7, lsl #2]
        1a378c:	e3300000 	teq	r0, #0	; 0x0
        1a3790:	1afffff8 	bne	1a3778 <OffsetStrokes__FPP7TStrokelT2+0x28>
        1a3794:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: outputRun(unsigned char *&, unsigned char *, int, unsigned char, unsigned long &, int &)
 * Address: 00204eb4
 */
outputRun(unsigned char *&, unsigned char *, int, unsigned char, unsigned long &, int &) {
    /*
        204eb4:	e1a0c00d 	mov	ip, sp
        204eb8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        204ebc:	e24cb004 	sub	fp, ip, #4	; 0x4
        204ec0:	e1a06000 	mov	r6, r0
        204ec4:	e1a05001 	mov	r5, r1
        204ec8:	e1a04002 	mov	r4, r2
        204ecc:	e20370ff 	and	r7, r3, #255	; 0xff
        204ed0:	e3a000ff 	mov	r0, #255	; 0xff
        204ed4:	e2800c06 	add	r0, r0, #1536	; 0x600
        204ed8:	e1520000 	cmp	r2, r0
        204edc:	e59b8008 	ldr	r8, [fp, #8]
        204ee0:	e59b9004 	ldr	r9, [fp, #4]
        204ee4:	c1a04000 	movgt	r4, r0
        204ee8:	e3140d3f 	tst	r4, #4032	; 0xfc0
        204eec:	0a00000b 	beq	204f20 <outputRun(unsigned char *&, unsigned char *, int, unsigned char, unsigned long &, int &)+0x6c>
        204ef0:	e3370000 	teq	r7, #0	; 0x0
        204ef4:	159f0054 	ldrne	r0, [pc, #54]	; 204f50 <outputRun(unsigned char *&, unsigned char *, int, unsigned char, unsigned long &, int &)+0x9c>
        204ef8:	059f0054 	ldreq	r0, [pc, #54]	; 204f54 <outputRun(unsigned char *&, unsigned char *, int, unsigned char, unsigned long &, int &)+0xa0>
        204efc:	e1a01344 	mov	r1, r4, asr #6
        204f00:	e7902101 	ldr	r2, [r0, r1, lsl #2]
        204f04:	e1a03008 	mov	r3, r8
        204f08:	e92d0008 	stmdb	sp!, {r3}
        204f0c:	e1a03009 	mov	r3, r9
        204f10:	e1a01005 	mov	r1, r5
        204f14:	e1a00006 	mov	r0, r6
        204f18:	eb605fb8 	bl	1a1ce00 <$writeCodeWord(unsigned char *&, unsigned char *, unsigned long, unsigned long &, int &)>
        204f1c:	e28dd004 	add	sp, sp, #4	; 0x4
        204f20:	e3370000 	teq	r7, #0	; 0x0
        204f24:	159f002c 	ldrne	r0, [pc, #2c]	; 204f58 <outputRun(unsigned char *&, unsigned char *, int, unsigned char, unsigned long &, int &)+0xa4>
        204f28:	059f002c 	ldreq	r0, [pc, #2c]	; 204f5c <outputRun(unsigned char *&, unsigned char *, int, unsigned char, unsigned long &, int &)+0xa8>
        204f2c:	e204103f 	and	r1, r4, #63	; 0x3f
        204f30:	e7902101 	ldr	r2, [r0, r1, lsl #2]
        204f34:	e1a03008 	mov	r3, r8
        204f38:	e92d0008 	stmdb	sp!, {r3}
        204f3c:	e1a03009 	mov	r3, r9
        204f40:	e1a01005 	mov	r1, r5
        204f44:	e1a00006 	mov	r0, r6
        204f48:	eb605fac 	bl	1a1ce00 <$writeCodeWord(unsigned char *&, unsigned char *, unsigned long, unsigned long &, int &)>
        204f4c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        204f50:	0037839c 	mlaeqs	r7, ip, r3, r8
        204f54:	00378228 	eoreqs	r8, r7, r8, lsr #4
        204f58:	0037829c 	mlaeqs	r7, ip, r2, r8
        204f5c:	00378128 	eoreqs	r8, r7, r8, lsr #2
    */
}

/**
 * Symbol: OnlyStrokeWritten(TStrokeUnit *)
 * Address: 0020bf58
 */
OnlyStrokeWritten(TStrokeUnit *) {
    /*
        20bf58:	e1a0c00d 	mov	ip, sp
        20bf5c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20bf60:	e24cb004 	sub	fp, ip, #4	; 0x4
        20bf64:	e1a04000 	mov	r4, r0
        20bf68:	e24dd020 	sub	sp, sp, #32	; 0x20
        20bf6c:	e59f009c 	ldr	r0, [pc, #9c]	; 20c010 <OnlyStrokeWritten(TStrokeUnit *)+0xb8>
        20bf70:	e5900000 	ldr	r0, [r0]
        20bf74:	e5900008 	ldr	r0, [r0, #8]
        20bf78:	e1a0100d 	mov	r1, sp
        20bf7c:	eb654bfc 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20bf80:	e3a05000 	mov	r5, #0	; 0x0
        20bf84:	e59d1014 	ldr	r1, [sp, #20]
        20bf88:	e3510000 	cmp	r1, #0	; 0x0
        20bf8c:	9a000013 	bls	20bfe0 <OnlyStrokeWritten(TStrokeUnit *)+0x88>
        20bf90:	e59f707c 	ldr	r7, [pc, #7c]	; 20c014 <OnlyStrokeWritten(TStrokeUnit *)+0xbc>
        20bf94:	e5906000 	ldr	r6, [r0]
        20bf98:	e5960008 	ldr	r0, [r6, #8]
        20bf9c:	e1300007 	teq	r0, r7
        20bfa0:	1a000007 	bne	20bfc4 <OnlyStrokeWritten(TStrokeUnit *)+0x6c>
        20bfa4:	e1a00006 	mov	r0, r6
        20bfa8:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        20bfac:	eb655c8d 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20bfb0:	e3300000 	teq	r0, #0	; 0x0
        20bfb4:	1a000002 	bne	20bfc4 <OnlyStrokeWritten(TStrokeUnit *)+0x6c>
        20bfb8:	e1360004 	teq	r6, r4
        20bfbc:	13a00000 	movne	r0, #0	; 0x0
        20bfc0:	1a000011 	bne	20c00c <OnlyStrokeWritten(TStrokeUnit *)+0xb4>
        20bfc4:	e1a0000d 	mov	r0, sp
        20bfc8:	e1a0e00f 	mov	lr, pc
        20bfcc:	e59df018 	ldr	pc, [sp, #24]
        20bfd0:	e2855001 	add	r5, r5, #1	; 0x1
        20bfd4:	e59d1014 	ldr	r1, [sp, #20]
        20bfd8:	e1510005 	cmp	r1, r5
        20bfdc:	8affffec 	bhi	20bf94 <OnlyStrokeWritten(TStrokeUnit *)+0x3c>
        20bfe0:	e3340000 	teq	r4, #0	; 0x0
        20bfe4:	03a00001 	moveq	r0, #1	; 0x1
        20bfe8:	0a000007 	beq	20c00c <OnlyStrokeWritten(TStrokeUnit *)+0xb4>
        20bfec:	e5b40040 	ldr	r0, [r4, #64]!
        20bff0:	e5900038 	ldr	r0, [r0, #56]
        20bff4:	e3a010ff 	mov	r1, #255	; 0xff
        20bff8:	eb653f76 	bl	1b5bdd8 <$CheckStrokeQueueEvents__FUlT1>
        20bffc:	e3300000 	teq	r0, #0	; 0x0
        20c000:	13a00000 	movne	r0, #0	; 0x0
        20c004:	03a00001 	moveq	r0, #1	; 0x1
        20c008:	e20000ff 	and	r0, r0, #255	; 0xff
        20c00c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        20c010:	0c10187c 	ldceq	8, cr1, [r0], -#496
        20c014:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
    */
}

/**
 * Symbol: ooops(void)
 * Address: 002211e4
 */
ooops(void) {
    /*
        2211e4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)
 * Address: 00257b30
 */
OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *) {
    /*
        257b30:	e1a0c00d 	mov	ip, sp
        257b34:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        257b38:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        257b3c:	e24cb014 	sub	fp, ip, #20	; 0x14
        257b40:	e1a04000 	mov	r4, r0
        257b44:	e28ba014 	add	sl, fp, #20	; 0x14
        257b48:	e89a0401 	ldmia	sl, {r0, sl}
        257b4c:	e20000ff 	and	r0, r0, #255	; 0xff
        257b50:	e52d0004 	str	r0, [sp, -#4]!
        257b54:	e24dd004 	sub	sp, sp, #4	; 0x4
        257b58:	e59f0088 	ldr	r0, [pc, #88]	; 257be8 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0xb8>
        257b5c:	e5b08054 	ldr	r8, [r0, #84]!
        257b60:	e5b09010 	ldr	r9, [r0, #16]!
        257b64:	e59b1008 	ldr	r1, [fp, #8]
        257b68:	e59b3010 	ldr	r3, [fp, #16]
        257b6c:	e1510003 	cmp	r1, r3
        257b70:	a59b0010 	ldrge	r0, [fp, #16]
        257b74:	b59b0008 	ldrlt	r0, [fp, #8]
        257b78:	e58d0000 	str	r0, [sp]
        257b7c:	e1a07000 	mov	r7, r0
        257b80:	e3500000 	cmp	r0, #0	; 0x0
        257b84:	da000042 	ble	257c94 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x164>
        257b88:	e5946000 	ldr	r6, [r4]
        257b8c:	e1a06826 	mov	r6, r6, lsr #16
        257b90:	e2844002 	add	r4, r4, #2	; 0x2
        257b94:	e59b200c 	ldr	r2, [fp, #12]
        257b98:	e5925000 	ldr	r5, [r2]
        257b9c:	e1a05825 	mov	r5, r5, lsr #16
        257ba0:	e2822002 	add	r2, r2, #2	; 0x2
        257ba4:	e33a0000 	teq	sl, #0	; 0x0
        257ba8:	e58b200c 	str	r2, [fp, #12]
        257bac:	0a000011 	beq	257bf8 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0xc8>
        257bb0:	e3360cf7 	teq	r6, #63232	; 0xf700
        257bb4:	1a00000c 	bne	257bec <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0xbc>
        257bb8:	e3350cf7 	teq	r5, #63232	; 0xf700
        257bbc:	13a00001 	movne	r0, #1	; 0x1
        257bc0:	1a00002f 	bne	257c84 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x154>
        257bc4:	e59d0000 	ldr	r0, [sp]
        257bc8:	e0400007 	sub	r0, r0, r7
        257bcc:	e1a01000 	mov	r1, r0
        257bd0:	e59b201c 	ldr	r2, [fp, #28]
        257bd4:	e1a0e00f 	mov	lr, pc
        257bd8:	e1a0f00a 	mov	pc, sl
        257bdc:	e3300000 	teq	r0, #0	; 0x0
        257be0:	0a000028 	beq	257c88 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x158>
        257be4:	ea000026 	b	257c84 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x154>
        257be8:	0c107790 	ldceq	7, cr7, [r0], -#576
        257bec:	e3350cf7 	teq	r5, #63232	; 0xf700
        257bf0:	03e00000 	mvneq	r0, #0	; 0x0
        257bf4:	0a000022 	beq	257c84 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x154>
        257bf8:	e59d0004 	ldr	r0, [sp, #4]
        257bfc:	e3300000 	teq	r0, #0	; 0x0
        257c00:	10460005 	subne	r0, r6, r5
        257c04:	1a00001c 	bne	257c7c <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x14c>
        257c08:	e3560080 	cmp	r6, #128	; 0x80
        257c0c:	b20600ff 	andlt	r0, r6, #255	; 0xff
        257c10:	ba000001 	blt	257c1c <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0xec>
        257c14:	e1a00006 	mov	r0, r6
        257c18:	eb652521 	bl	1ba10a4 <$A_CONST_CHAR>
        257c1c:	e20000ff 	and	r0, r0, #255	; 0xff
        257c20:	e330001a 	teq	r0, #26	; 0x1a
        257c24:	0a000004 	beq	257c3c <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x10c>
        257c28:	e7d81000 	ldrb	r1, [r8, r0]
        257c2c:	e7d91001 	ldrb	r1, [r9, r1]
        257c30:	e0810000 	add	r0, r1, r0
        257c34:	e20060ff 	and	r6, r0, #255	; 0xff
        257c38:	ea000000 	b	257c40 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x110>
        257c3c:	e20660ff 	and	r6, r6, #255	; 0xff
        257c40:	e3550080 	cmp	r5, #128	; 0x80
        257c44:	b20500ff 	andlt	r0, r5, #255	; 0xff
        257c48:	ba000001 	blt	257c54 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x124>
        257c4c:	e1a00005 	mov	r0, r5
        257c50:	eb652513 	bl	1ba10a4 <$A_CONST_CHAR>
        257c54:	e20000ff 	and	r0, r0, #255	; 0xff
        257c58:	e330001a 	teq	r0, #26	; 0x1a
        257c5c:	0a000004 	beq	257c74 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x144>
        257c60:	e7d81000 	ldrb	r1, [r8, r0]
        257c64:	e7d91001 	ldrb	r1, [r9, r1]
        257c68:	e0810000 	add	r0, r1, r0
        257c6c:	e20000ff 	and	r0, r0, #255	; 0xff
        257c70:	ea000000 	b	257c78 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x148>
        257c74:	e20500ff 	and	r0, r5, #255	; 0xff
        257c78:	e0460000 	sub	r0, r6, r0
        257c7c:	e3300000 	teq	r0, #0	; 0x0
        257c80:	0a000000 	beq	257c88 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x158>
        257c84:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        257c88:	e2477001 	sub	r7, r7, #1	; 0x1
        257c8c:	e3570000 	cmp	r7, #0	; 0x0
        257c90:	caffffbc 	bgt	257b88 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x58>
        257c94:	e59b0008 	ldr	r0, [fp, #8]
        257c98:	e59b3010 	ldr	r3, [fp, #16]
        257c9c:	e0400003 	sub	r0, r0, r3
        257ca0:	eafffff7 	b	257c84 <OldCompareText(unsigned short const *, long, long, long, unsigned char, long (*)(long, long, void *), void *)+0x154>
    */
}

/**
 * Symbol: OpenSocket(unsigned char &, unsigned long)
 * Address: 0025c668
 */
OpenSocket(unsigned char &, unsigned long) {
    /*
        25c668:	e1a0c00d 	mov	ip, sp
        25c66c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25c670:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c674:	e1a04000 	mov	r4, r0
        25c678:	e24dd084 	sub	sp, sp, #132	; 0x84
        25c67c:	e28d5004 	add	r5, sp, #4	; 0x4
        25c680:	e3a00024 	mov	r0, #36	; 0x24
        25c684:	e58d0000 	str	r0, [sp]
        25c688:	e59f0060 	ldr	r0, [pc, #60]	; 25c6f0 <OpenSocket(unsigned char &, unsigned long)+0x88>
        25c68c:	e58d0004 	str	r0, [sp, #4]
        25c690:	e59f005c 	ldr	r0, [pc, #5c]	; 25c6f4 <OpenSocket(unsigned char &, unsigned long)+0x8c>
        25c694:	e58d0008 	str	r0, [sp, #8]
        25c698:	e3a00c07 	mov	r0, #1792	; 0x700
        25c69c:	e58d0014 	str	r0, [sp, #20]
        25c6a0:	e5d40000 	ldrb	r0, [r4]
        25c6a4:	e5cd0018 	strb	r0, [sp, #24]
        25c6a8:	e3a00000 	mov	r0, #0	; 0x0
        25c6ac:	e5cd0019 	strb	r0, [sp, #25]
        25c6b0:	e58d0020 	str	r0, [sp, #32]
        25c6b4:	e58d101c 	str	r1, [sp, #28]
        25c6b8:	eb65dcc5 	bl	1bd39d4 <$GetGlobals>
        25c6bc:	e1a03005 	mov	r3, r5
        25c6c0:	e92d0008 	stmdb	sp!, {r3}
        25c6c4:	e28d3004 	add	r3, sp, #4	; 0x4
        25c6c8:	e3a02000 	mov	r2, #0	; 0x0
        25c6cc:	e3a01000 	mov	r1, #0	; 0x0
        25c6d0:	e590c000 	ldr	ip, [r0]
        25c6d4:	e1a0e00f 	mov	lr, pc
        25c6d8:	e28cf050 	add	pc, ip, #80	; 0x50
        25c6dc:	e28dd004 	add	sp, sp, #4	; 0x4
        25c6e0:	e5dd0018 	ldrb	r0, [sp, #24]
        25c6e4:	e5c40000 	strb	r0, [r4]
        25c6e8:	e59d000c 	ldr	r0, [sp, #12]
        25c6ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25c6f0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25c6f4:	64647020 	strvsbt	r7, [r4], -#32
    */
}

/**
 * Symbol: OuterBounds1(TRect *, unsigned long)
 * Address: 0026404c
 */
OuterBounds1(TRect *, unsigned long) {
    /*
        26404c:	e1a0c00d 	mov	ip, sp
        264050:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        264054:	e24cb004 	sub	fp, ip, #4	; 0x4
        264058:	e1a04000 	mov	r4, r0
        26405c:	e1a05001 	mov	r5, r1
        264060:	e21100f0 	ands	r0, r1, #240	; 0xf0
        264064:	12050c0f 	andne	r0, r5, #3840	; 0xf00
        264068:	11a00420 	movne	r0, r0, lsr #8
        26406c:	e2051803 	and	r1, r5, #196608	; 0x30000
        264070:	e0900821 	adds	r0, r0, r1, lsr #16
        264074:	0a000003 	beq	264088 <OuterBounds1(TRect *, unsigned long)+0x3c>
        264078:	e2601000 	rsb	r1, r0, #0	; 0x0
        26407c:	e1a02001 	mov	r2, r1
        264080:	e1a00004 	mov	r0, r4
        264084:	eb63b1ed 	bl	1b50840 <$InsetRect__FP4RectlT2>
        264088:	e2050703 	and	r0, r5, #786432	; 0xc0000
        26408c:	e1b00920 	movs	r0, r0, lsr #18
        264090:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        264094:	e5941006 	ldr	r1, [r4, #6]
        264098:	e1a01821 	mov	r1, r1, lsr #16
        26409c:	e1a00800 	mov	r0, r0, lsl #16
        2640a0:	e1a00840 	mov	r0, r0, asr #16
        2640a4:	e0811000 	add	r1, r1, r0
        2640a8:	e5c41007 	strb	r1, [r4, #7]
        2640ac:	e1a01441 	mov	r1, r1, asr #8
        2640b0:	e5c41006 	strb	r1, [r4, #6]
        2640b4:	e5941004 	ldr	r1, [r4, #4]
        2640b8:	e1a01821 	mov	r1, r1, lsr #16
        2640bc:	e0810000 	add	r0, r1, r0
        2640c0:	e5c40005 	strb	r0, [r4, #5]
        2640c4:	e1a00440 	mov	r0, r0, asr #8
        2640c8:	e5c40004 	strb	r0, [r4, #4]
        2640cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: Orient00__FP9SPEC_TYPET1PsT3
 * Address: 002bde8c
 */
void globals::Orient00() {
    /*
        2bde8c:	e1a0c00d 	mov	ip, sp
        2bde90:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2bde94:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bde98:	e1a04000 	mov	r4, r0
        2bde9c:	e1a06001 	mov	r6, r1
        2bdea0:	e1a05003 	mov	r5, r3
        2bdea4:	e5900006 	ldr	r0, [r0, #6]
        2bdea8:	e1a00840 	mov	r0, r0, asr #16
        2bdeac:	e7921080 	ldr	r1, [r2, r0, lsl #1]
        2bdeb0:	e1a01841 	mov	r1, r1, asr #16
        2bdeb4:	e5940004 	ldr	r0, [r4, #4]
        2bdeb8:	e1a00840 	mov	r0, r0, asr #16
        2bdebc:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        2bdec0:	e1a00840 	mov	r0, r0, asr #16
        2bdec4:	e0410000 	sub	r0, r1, r0
        2bdec8:	eb5ec63d 	bl	1a6f7c4 <$HWRAbs(int)>
        2bdecc:	e1a07800 	mov	r7, r0, lsl #16
        2bded0:	e1a07847 	mov	r7, r7, asr #16
        2bded4:	e5940006 	ldr	r0, [r4, #6]
        2bded8:	e1a00840 	mov	r0, r0, asr #16
        2bdedc:	e7950080 	ldr	r0, [r5, r0, lsl #1]
        2bdee0:	e1a00840 	mov	r0, r0, asr #16
        2bdee4:	e5961004 	ldr	r1, [r6, #4]
        2bdee8:	e1a01841 	mov	r1, r1, asr #16
        2bdeec:	e7951081 	ldr	r1, [r5, r1, lsl #1]
        2bdef0:	e1a01841 	mov	r1, r1, asr #16
        2bdef4:	e0400001 	sub	r0, r0, r1
        2bdef8:	eb5ec631 	bl	1a6f7c4 <$HWRAbs(int)>
        2bdefc:	e1a01800 	mov	r1, r0, lsl #16
        2bdf00:	e1a01841 	mov	r1, r1, asr #16
        2bdf04:	e0872107 	add	r2, r7, r7, lsl #2
        2bdf08:	e0822187 	add	r2, r2, r7, lsl #3
        2bdf0c:	e3a00001 	mov	r0, #1	; 0x1
        2bdf10:	e1520001 	cmp	r2, r1
        2bdf14:	b91ba8f0 	ldmltdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2bdf18:	e3570006 	cmp	r7, #6	; 0x6
        2bdf1c:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2bdf20:	e1570081 	cmp	r7, r1, lsl #1
        2bdf24:	d3a00000 	movle	r0, #0	; 0x0
        2bdf28:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: OffsetCurve__FP5curvelT2
 * Address: 002d21d0
 */
void globals::OffsetCurve() {
    /*
        2d21d0:	e5903000 	ldr	r3, [r0]
        2d21d4:	e0833001 	add	r3, r3, r1
        2d21d8:	e5803000 	str	r3, [r0]
        2d21dc:	e5903004 	ldr	r3, [r0, #4]
        2d21e0:	e0833002 	add	r3, r3, r2
        2d21e4:	e5803004 	str	r3, [r0, #4]
        2d21e8:	e5903008 	ldr	r3, [r0, #8]
        2d21ec:	e0833001 	add	r3, r3, r1
        2d21f0:	e5803008 	str	r3, [r0, #8]
        2d21f4:	e590300c 	ldr	r3, [r0, #12]
        2d21f8:	e0833002 	add	r3, r3, r2
        2d21fc:	e580300c 	str	r3, [r0, #12]
        2d2200:	e5903010 	ldr	r3, [r0, #16]
        2d2204:	e0831001 	add	r1, r3, r1
        2d2208:	e5801010 	str	r1, [r0, #16]
        2d220c:	e5901014 	ldr	r1, [r0, #20]
        2d2210:	e0811002 	add	r1, r1, r2
        2d2214:	e5a01014 	str	r1, [r0, #20]!
        2d2218:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo
 * Address: 002e229c
 */
void globals::OpenFont() {
    /*
        2e229c:	e1a0c00d 	mov	ip, sp
        2e22a0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2e22a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e22a8:	e24cb014 	sub	fp, ip, #20	; 0x14
        2e22ac:	e1a05002 	mov	r5, r2
        2e22b0:	e1a04003 	mov	r4, r3
        2e22b4:	e59b9014 	ldr	r9, [fp, #20]
        2e22b8:	e24dd018 	sub	sp, sp, #24	; 0x18
        2e22bc:	e59b1008 	ldr	r1, [fp, #8]
        2e22c0:	e5910000 	ldr	r0, [r1]
        2e22c4:	e5900000 	ldr	r0, [r0]
        2e22c8:	eb637f9f 	bl	1bc214c <$AllocateRefHandle(long)>
        2e22cc:	e58d0000 	str	r0, [sp]
        2e22d0:	e59f1094 	ldr	r1, [pc, #94]	; 2e236c <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0xd0>
        2e22d4:	e58d1014 	str	r1, [sp, #20]
        2e22d8:	e59f0090 	ldr	r0, [pc, #90]	; 2e2370 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0xd4>
        2e22dc:	e58d0010 	str	r0, [sp, #16]
        2e22e0:	e24de01c 	sub	lr, sp, #28	; 0x1c
        2e22e4:	e58de00c 	str	lr, [sp, #12]
        2e22e8:	e59f0084 	ldr	r0, [pc, #84]	; 2e2374 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0xd8>
        2e22ec:	e58d0008 	str	r0, [sp, #8]
        2e22f0:	e59f0080 	ldr	r0, [pc, #80]	; 2e2378 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0xdc>
        2e22f4:	e58d0004 	str	r0, [sp, #4]
        2e22f8:	e59f607c 	ldr	r6, [pc, #7c]	; 2e237c <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0xe0>
        2e22fc:	e59d0000 	ldr	r0, [sp]
        2e2300:	e5900000 	ldr	r0, [r0]
        2e2304:	e3300002 	teq	r0, #2	; 0x2
        2e2308:	1a00001d 	bne	2e2384 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0xe8>
        2e230c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e2310:	e59d000c 	ldr	r0, [sp, #12]
        2e2314:	e5900000 	ldr	r0, [r0]
        2e2318:	eb637f8b 	bl	1bc214c <$AllocateRefHandle(long)>
        2e231c:	e1a07000 	mov	r7, r0
        2e2320:	e59f0058 	ldr	r0, [pc, #58]	; 2e2380 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0xe4>
        2e2324:	e5900000 	ldr	r0, [r0]
        2e2328:	e5901000 	ldr	r1, [r0]
        2e232c:	e5970000 	ldr	r0, [r7]
        2e2330:	eb6387ca 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2e2334:	eb637f84 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2338:	e58d0000 	str	r0, [sp]
        2e233c:	e1a00007 	mov	r0, r7
        2e2340:	eb63839d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2344:	e59d1018 	ldr	r1, [sp, #24]
        2e2348:	e1a0000d 	mov	r0, sp
        2e234c:	e3a02000 	mov	r2, #0	; 0x0
        2e2350:	eb6387c4 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        2e2354:	e59d1004 	ldr	r1, [sp, #4]
        2e2358:	e5810000 	str	r0, [r1]
        2e235c:	e59d0000 	ldr	r0, [sp]
        2e2360:	eb638395 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2364:	e28dd004 	add	sp, sp, #4	; 0x4
        2e2368:	ea000016 	b	2e23c8 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x12c>
        2e236c:	00681ac0 	rsbeq	r1, r8, r0, asr #21
        2e2370:	00380f78 	eoreqs	r0, r8, r8, ror pc
        2e2374:	0c10180c 	ldceq	8, cr1, [r0], -#48
        2e2378:	0c1053f8 	ldceq	3, cr5, [r0], -#992
        2e237c:	0c1079a8 	ldceq	9, cr7, [r0], -#672
        2e2380:	00682e48 	rsbeq	r2, r8, r8, asr #28
        2e2384:	e1a0000d 	mov	r0, sp
        2e2388:	eb5fbd51 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
        2e238c:	e3300000 	teq	r0, #0	; 0x0
        2e2390:	1a000003 	bne	2e23a4 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x108>
        2e2394:	e59d0000 	ldr	r0, [sp]
        2e2398:	e5900000 	ldr	r0, [r0]
        2e239c:	e3100003 	tst	r0, #3	; 0x3
        2e23a0:	1a000008 	bne	2e23c8 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x12c>
        2e23a4:	e1a03009 	mov	r3, r9
        2e23a8:	e1a02004 	mov	r2, r4
        2e23ac:	e92d000c 	stmdb	sp!, {r2, r3}
        2e23b0:	e1a03005 	mov	r3, r5
        2e23b4:	e28d2008 	add	r2, sp, #8	; 0x8
        2e23b8:	e99b0003 	ldmib	fp, {r0, r1}
        2e23bc:	eb61b91c 	bl	1b50834 <$InkOpenFont__FP8PixelMapP11StyleRecordRC6RefVarlT4P14FontEngineInfo>
        2e23c0:	e28dd008 	add	sp, sp, #8	; 0x8
        2e23c4:	ea0000ce 	b	2e2704 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x468>
        2e23c8:	e24dd020 	sub	sp, sp, #32	; 0x20
        2e23cc:	e3a07000 	mov	r7, #0	; 0x0
        2e23d0:	e0678187 	rsb	r8, r7, r7, lsl #3
        2e23d4:	e7960188 	ldr	r0, [r6, r8, lsl #3]
        2e23d8:	e3300000 	teq	r0, #0	; 0x0
        2e23dc:	1a000022 	bne	2e246c <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x1d0>
        2e23e0:	e3a000c4 	mov	r0, #196	; 0xc4
        2e23e4:	eb63b0d3 	bl	1bce738 <$__nw(unsigned int)>
        2e23e8:	e1b0a000 	movs	sl, r0
        2e23ec:	0a000004 	beq	2e2404 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x168>
        2e23f0:	e3a00002 	mov	r0, #2	; 0x2
        2e23f4:	eb637f54 	bl	1bc214c <$AllocateRefHandle(long)>
        2e23f8:	e3a01000 	mov	r1, #0	; 0x0
        2e23fc:	e58a00c0 	str	r0, [sl, #192]
        2e2400:	e5a01004 	str	r1, [r0, #4]!
        2e2404:	e0671187 	rsb	r1, r7, r7, lsl #3
        2e2408:	e786a181 	str	sl, [r6, r1, lsl #3]
        2e240c:	e3a00020 	mov	r0, #32	; 0x20
        2e2410:	eb63b0c8 	bl	1bce738 <$__nw(unsigned int)>
        2e2414:	e1b0a000 	movs	sl, r0
        2e2418:	0a000005 	beq	2e2434 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x198>
        2e241c:	e3a00002 	mov	r0, #2	; 0x2
        2e2420:	eb637f49 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2424:	e3a01000 	mov	r1, #0	; 0x0
        2e2428:	e58a0000 	str	r0, [sl]
        2e242c:	e5a01004 	str	r1, [r0, #4]!
        2e2430:	e58a101c 	str	r1, [sl, #28]
        2e2434:	e0868188 	add	r8, r6, r8, lsl #3
        2e2438:	e1a00007 	mov	r0, r7
        2e243c:	e588a008 	str	sl, [r8, #8]
        2e2440:	eb61b900 	bl	1b50848 <$InvalFontCache(long)>
        2e2444:	e288e014 	add	lr, r8, #20	; 0x14
        2e2448:	e59d0030 	ldr	r0, [sp, #48]
        2e244c:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        2e2450:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        2e2454:	e890100c 	ldmia	r0, {r2, r3, ip}
        2e2458:	e88e100c 	stmia	lr, {r2, r3, ip}
        2e245c:	e3a00801 	mov	r0, #65536	; 0x10000
        2e2460:	e5880030 	str	r0, [r8, #48]
        2e2464:	e5a80034 	str	r0, [r8, #52]!
        2e2468:	ea000020 	b	2e24f0 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x254>
        2e246c:	e086a188 	add	sl, r6, r8, lsl #3
        2e2470:	e59a0008 	ldr	r0, [sl, #8]
        2e2474:	e59b1008 	ldr	r1, [fp, #8]
        2e2478:	eb61b0ad 	bl	1b4e734 <$EqualStyle__FP11StyleRecordT1>
        2e247c:	e3300000 	teq	r0, #0	; 0x0
        2e2480:	0a000017 	beq	2e24e4 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x248>
        2e2484:	e59a0004 	ldr	r0, [sl, #4]
        2e2488:	e59b1004 	ldr	r1, [fp, #4]
        2e248c:	e5911010 	ldr	r1, [r1, #16]
        2e2490:	e1300001 	teq	r0, r1
        2e2494:	059a0010 	ldreq	r0, [sl, #16]
        2e2498:	01300005 	teqeq	r0, r5
        2e249c:	05ba000c 	ldreq	r0, [sl, #12]!
        2e24a0:	01300004 	teqeq	r0, r4
        2e24a4:	1a00000e 	bne	2e24e4 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x248>
        2e24a8:	e7960188 	ldr	r0, [r6, r8, lsl #3]
        2e24ac:	e5890090 	str	r0, [r9, #144]
        2e24b0:	e1a00009 	mov	r0, r9
        2e24b4:	e7961188 	ldr	r1, [r6, r8, lsl #3]
        2e24b8:	e1a0e00f 	mov	lr, pc
        2e24bc:	e591f070 	ldr	pc, [r1, #112]
        2e24c0:	e3300003 	teq	r0, #3	; 0x3
        2e24c4:	0a000006 	beq	2e24e4 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x248>
        2e24c8:	e59d1024 	ldr	r1, [sp, #36]
        2e24cc:	e1a04000 	mov	r4, r0
        2e24d0:	e5817000 	str	r7, [r1]
        2e24d4:	e59d0020 	ldr	r0, [sp, #32]
        2e24d8:	eb638337 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e24dc:	e1a00004 	mov	r0, r4
        2e24e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e24e4:	e2877001 	add	r7, r7, #1	; 0x1
        2e24e8:	e3570004 	cmp	r7, #4	; 0x4
        2e24ec:	baffffb7 	blt	2e23d0 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x134>
        2e24f0:	e3570004 	cmp	r7, #4	; 0x4
        2e24f4:	ba000005 	blt	2e2510 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x274>
        2e24f8:	e59d0024 	ldr	r0, [sp, #36]
        2e24fc:	e5900000 	ldr	r0, [r0]
        2e2500:	e2907001 	adds	r7, r0, #1	; 0x1
        2e2504:	42677000 	rsbmi	r7, r7, #0	; 0x0
        2e2508:	e2077003 	and	r7, r7, #3	; 0x3
        2e250c:	42677000 	rsbmi	r7, r7, #0	; 0x0
        2e2510:	e59d0024 	ldr	r0, [sp, #36]
        2e2514:	e5807000 	str	r7, [r0]
        2e2518:	e0670187 	rsb	r0, r7, r7, lsl #3
        2e251c:	e7960180 	ldr	r0, [r6, r0, lsl #3]
        2e2520:	e5890090 	str	r0, [r9, #144]
        2e2524:	e59d0024 	ldr	r0, [sp, #36]
        2e2528:	e5900000 	ldr	r0, [r0]
        2e252c:	e0600180 	rsb	r0, r0, r0, lsl #3
        2e2530:	e0860180 	add	r0, r6, r0, lsl #3
        2e2534:	e5b07008 	ldr	r7, [r0, #8]!
        2e2538:	e1a0000d 	mov	r0, sp
        2e253c:	e59b1008 	ldr	r1, [fp, #8]
        2e2540:	eb61ac5c 	bl	1b4d6b8 <$CopyStyle(StyleRecord *)>
        2e2544:	e59d0000 	ldr	r0, [sp]
        2e2548:	e5901000 	ldr	r1, [r0]
        2e254c:	e5970000 	ldr	r0, [r7]
        2e2550:	e5801000 	str	r1, [r0]
        2e2554:	e2870004 	add	r0, r7, #4	; 0x4
        2e2558:	e59de02c 	ldr	lr, [sp, #44]
        2e255c:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        2e2560:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        2e2564:	e89e100c 	ldmia	lr, {r2, r3, ip}
        2e2568:	e880100c 	stmia	r0, {r2, r3, ip}
        2e256c:	e59d001c 	ldr	r0, [sp, #28]
        2e2570:	e3300000 	teq	r0, #0	; 0x0
        2e2574:	159d001c 	ldrne	r0, [sp, #28]
        2e2578:	1b61ac57 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        2e257c:	e59d0000 	ldr	r0, [sp]
        2e2580:	eb63830d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2584:	e59b0004 	ldr	r0, [fp, #4]
        2e2588:	e5b01010 	ldr	r1, [r0, #16]!
        2e258c:	e59d0024 	ldr	r0, [sp, #36]
        2e2590:	e5900000 	ldr	r0, [r0]
        2e2594:	e0600180 	rsb	r0, r0, r0, lsl #3
        2e2598:	e0860180 	add	r0, r6, r0, lsl #3
        2e259c:	e5a01004 	str	r1, [r0, #4]!
        2e25a0:	e2800004 	add	r0, r0, #4	; 0x4
        2e25a4:	e9a00030 	stmib	r0!, {r4, r5}
        2e25a8:	e59b0004 	ldr	r0, [fp, #4]
        2e25ac:	e5900010 	ldr	r0, [r0, #16]
        2e25b0:	e2000c0f 	and	r0, r0, #3840	; 0xf00
        2e25b4:	e3300c02 	teq	r0, #512	; 0x200
        2e25b8:	1a000043 	bne	2e26cc <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x430>
        2e25bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e25c0:	e59f0150 	ldr	r0, [pc, #150]	; 2e2718 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x47c>
        2e25c4:	e5900000 	ldr	r0, [r0]
        2e25c8:	e5901000 	ldr	r1, [r0]
        2e25cc:	e59d0024 	ldr	r0, [sp, #36]
        2e25d0:	e5900000 	ldr	r0, [r0]
        2e25d4:	eb638721 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2e25d8:	eb637edb 	bl	1bc214c <$AllocateRefHandle(long)>
        2e25dc:	e58d0000 	str	r0, [sp]
        2e25e0:	e5900000 	ldr	r0, [r0]
        2e25e4:	e3300002 	teq	r0, #2	; 0x2
        2e25e8:	0a000034 	beq	2e26c0 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x424>
        2e25ec:	e59f0128 	ldr	r0, [pc, #128]	; 2e271c <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x480>
        2e25f0:	e5900000 	ldr	r0, [r0]
        2e25f4:	e5901000 	ldr	r1, [r0]
        2e25f8:	e59d0024 	ldr	r0, [sp, #36]
        2e25fc:	e5900000 	ldr	r0, [r0]
        2e2600:	eb638716 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2e2604:	eb637ed0 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2608:	e1a07000 	mov	r7, r0
        2e260c:	e5900000 	ldr	r0, [r0]
        2e2610:	e3300002 	teq	r0, #2	; 0x2
        2e2614:	0a000010 	beq	2e265c <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x3c0>
        2e2618:	e3100003 	tst	r0, #3	; 0x3
        2e261c:	01a00140 	moveq	r0, r0, asr #2
        2e2620:	0a000000 	beq	2e2628 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x38c>
        2e2624:	eb637ebc 	bl	1bc211c <$_RINTError(long)>
        2e2628:	e1a01000 	mov	r1, r0
        2e262c:	e1a00005 	mov	r0, r5
        2e2630:	eb63faa3 	bl	1be10c4 <$FixedMultiply>
        2e2634:	e1a05000 	mov	r5, r0
        2e2638:	e5970000 	ldr	r0, [r7]
        2e263c:	e3100003 	tst	r0, #3	; 0x3
        2e2640:	01a00140 	moveq	r0, r0, asr #2
        2e2644:	0a000000 	beq	2e264c <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x3b0>
        2e2648:	eb637eb3 	bl	1bc211c <$_RINTError(long)>
        2e264c:	e1a01000 	mov	r1, r0
        2e2650:	e1a00004 	mov	r0, r4
        2e2654:	eb63fa9a 	bl	1be10c4 <$FixedMultiply>
        2e2658:	e1a04000 	mov	r4, r0
        2e265c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e2660:	e59d0030 	ldr	r0, [sp, #48]
        2e2664:	e5900000 	ldr	r0, [r0]
        2e2668:	eb637eb7 	bl	1bc214c <$AllocateRefHandle(long)>
        2e266c:	e1a08000 	mov	r8, r0
        2e2670:	e59f00a8 	ldr	r0, [pc, #a8]	; 2e2720 <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x484>
        2e2674:	e5900000 	ldr	r0, [r0]
        2e2678:	e5901000 	ldr	r1, [r0]
        2e267c:	e5980000 	ldr	r0, [r8]
        2e2680:	eb6386f6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2e2684:	eb637eb0 	bl	1bc214c <$AllocateRefHandle(long)>
        2e2688:	e58d0000 	str	r0, [sp]
        2e268c:	e1a00008 	mov	r0, r8
        2e2690:	eb6382c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2694:	e28d1004 	add	r1, sp, #4	; 0x4
        2e2698:	e1a0000d 	mov	r0, sp
        2e269c:	e3a02000 	mov	r2, #0	; 0x0
        2e26a0:	eb6386f0 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        2e26a4:	e59d1028 	ldr	r1, [sp, #40]
        2e26a8:	e5810000 	str	r0, [r1]
        2e26ac:	e59d0000 	ldr	r0, [sp]
        2e26b0:	eb6382c1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e26b4:	e28dd004 	add	sp, sp, #4	; 0x4
        2e26b8:	e1a00007 	mov	r0, r7
        2e26bc:	eb6382be 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e26c0:	e59d0000 	ldr	r0, [sp]
        2e26c4:	eb6382bc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e26c8:	e28dd004 	add	sp, sp, #4	; 0x4
        2e26cc:	e1a03009 	mov	r3, r9
        2e26d0:	e1a02004 	mov	r2, r4
        2e26d4:	e92d000c 	stmdb	sp!, {r2, r3}
        2e26d8:	e1a03005 	mov	r3, r5
        2e26dc:	e28d2028 	add	r2, sp, #40	; 0x28
        2e26e0:	e99b0003 	ldmib	fp, {r0, r1}
        2e26e4:	eb61a7c8 	bl	1b4c60c <$SFNTOpenFont__FP8PixelMapP11StyleRecordRC6RefVarlT4P14FontEngineInfo>
        2e26e8:	e28dd008 	add	sp, sp, #8	; 0x8
        2e26ec:	e3500003 	cmp	r0, #3	; 0x3
        2e26f0:	03a02002 	moveq	r2, #2	; 0x2
        2e26f4:	059d1020 	ldreq	r1, [sp, #32]
        2e26f8:	05812000 	streq	r2, [r1]
        2e26fc:	e28dd020 	add	sp, sp, #32	; 0x20
        2e2700:	0afffefd 	beq	2e22fc <OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo+0x60>
        2e2704:	e1a04000 	mov	r4, r0
        2e2708:	e59d0000 	ldr	r0, [sp]
        2e270c:	eb6382aa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e2710:	e1a00004 	mov	r0, r4
        2e2714:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e2718:	00684088 	rsbeq	r4, r8, r8, lsl #1
        2e271c:	00684090 	streqb	r4, [r8]
        2e2720:	00684080 	rsbeq	r4, r8, r0, lsl #1
    */
}

/**
 * Symbol: OpenPort(GrafPort *)
 * Address: 002e44ac
 */
OpenPort(GrafPort *) {
    /*
        2e44ac:	e1a0c00d 	mov	ip, sp
        2e44b0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e44b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e44b8:	e1a04000 	mov	r4, r0
        2e44bc:	eb61b501 	bl	1b518c8 <$NewRgn(void)>
        2e44c0:	e5840024 	str	r0, [r4, #36]
        2e44c4:	eb61b4ff 	bl	1b518c8 <$NewRgn(void)>
        2e44c8:	e5840028 	str	r0, [r4, #40]
        2e44cc:	e1a00004 	mov	r0, r4
        2e44d0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2e44d4:	ea61b0cd 	b	1b50810 <$InitPort(GrafPort *)>
    */
}

/**
 * Symbol: O_GU_To3Elements(NxtPrvCircle_type *)
 * Address: 002fc538
 */
O_GU_To3Elements(NxtPrvCircle_type *) {
    /*
        2fc538:	e1a0c00d 	mov	ip, sp
        2fc53c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2fc540:	e24cb004 	sub	fp, ip, #4	; 0x4
        2fc544:	e1a02000 	mov	r2, r0
        2fc548:	e3a00000 	mov	r0, #0	; 0x0
        2fc54c:	e5921004 	ldr	r1, [r2, #4]
        2fc550:	e5924000 	ldr	r4, [r2]
        2fc554:	e5915000 	ldr	r5, [r1]
        2fc558:	e5921008 	ldr	r1, [r2, #8]
        2fc55c:	e5911000 	ldr	r1, [r1]
        2fc560:	e592700c 	ldr	r7, [r2, #12]
        2fc564:	e5976038 	ldr	r6, [r7, #56]
        2fc568:	e5d43002 	ldrb	r3, [r4, #2]
        2fc56c:	e2033030 	and	r3, r3, #48	; 0x30
        2fc570:	e3330020 	teq	r3, #32	; 0x20
        2fc574:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2fc578:	e5d43001 	ldrb	r3, [r4, #1]
        2fc57c:	e3330004 	teq	r3, #4	; 0x4
        2fc580:	15d23015 	ldrneb	r3, [r2, #21]
        2fc584:	15d22016 	ldrneb	r2, [r2, #22]
        2fc588:	10832002 	addne	r2, r3, r2
        2fc58c:	13320001 	teqne	r2, #1	; 0x1
        2fc590:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2fc594:	e3a0c000 	mov	ip, #0	; 0x0
        2fc598:	e3a03000 	mov	r3, #0	; 0x0
        2fc59c:	e591e006 	ldr	lr, [r1, #6]
        2fc5a0:	e1a0e84e 	mov	lr, lr, asr #16
        2fc5a4:	e5942004 	ldr	r2, [r4, #4]
        2fc5a8:	e15e0842 	cmp	lr, r2, asr #16
        2fc5ac:	a594e006 	ldrge	lr, [r4, #6]
        2fc5b0:	a1a0e84e 	movge	lr, lr, asr #16
        2fc5b4:	a5912004 	ldrge	r2, [r1, #4]
        2fc5b8:	a15e0842 	cmpge	lr, r2, asr #16
        2fc5bc:	ba00000c 	blt	2fc5f4 <O_GU_To3Elements(NxtPrvCircle_type *)+0xbc>
        2fc5c0:	e5d12001 	ldrb	r2, [r1, #1]
        2fc5c4:	e3320003 	teq	r2, #3	; 0x3
        2fc5c8:	13320007 	teqne	r2, #7	; 0x7
        2fc5cc:	1a000002 	bne	2fc5dc <O_GU_To3Elements(NxtPrvCircle_type *)+0xa4>
        2fc5d0:	e5d1e000 	ldrb	lr, [r1]
        2fc5d4:	e33e0010 	teq	lr, #16	; 0x10
        2fc5d8:	0a000004 	beq	2fc5f0 <O_GU_To3Elements(NxtPrvCircle_type *)+0xb8>
        2fc5dc:	e332000a 	teq	r2, #10	; 0xa
        2fc5e0:	13320009 	teqne	r2, #9	; 0x9
        2fc5e4:	1332000c 	teqne	r2, #12	; 0xc
        2fc5e8:	1332000b 	teqne	r2, #11	; 0xb
        2fc5ec:	1a000000 	bne	2fc5f4 <O_GU_To3Elements(NxtPrvCircle_type *)+0xbc>
        2fc5f0:	e3a0c001 	mov	ip, #1	; 0x1
        2fc5f4:	e3350000 	teq	r5, #0	; 0x0
        2fc5f8:	0a000010 	beq	2fc640 <O_GU_To3Elements(NxtPrvCircle_type *)+0x108>
        2fc5fc:	e5942006 	ldr	r2, [r4, #6]
        2fc600:	e1a02842 	mov	r2, r2, asr #16
        2fc604:	e595e006 	ldr	lr, [r5, #6]
        2fc608:	e132084e 	teq	r2, lr, asr #16
        2fc60c:	1a00000c 	bne	2fc644 <O_GU_To3Elements(NxtPrvCircle_type *)+0x10c>
        2fc610:	e5d52001 	ldrb	r2, [r5, #1]
        2fc614:	e3320003 	teq	r2, #3	; 0x3
        2fc618:	13320007 	teqne	r2, #7	; 0x7
        2fc61c:	1a000002 	bne	2fc62c <O_GU_To3Elements(NxtPrvCircle_type *)+0xf4>
        2fc620:	e5d5e000 	ldrb	lr, [r5]
        2fc624:	e33e0020 	teq	lr, #32	; 0x20
        2fc628:	0a000004 	beq	2fc640 <O_GU_To3Elements(NxtPrvCircle_type *)+0x108>
        2fc62c:	e332000a 	teq	r2, #10	; 0xa
        2fc630:	13320009 	teqne	r2, #9	; 0x9
        2fc634:	1332000c 	teqne	r2, #12	; 0xc
        2fc638:	1332000b 	teqne	r2, #11	; 0xb
        2fc63c:	1a000000 	bne	2fc644 <O_GU_To3Elements(NxtPrvCircle_type *)+0x10c>
        2fc640:	e3a03001 	mov	r3, #1	; 0x1
        2fc644:	e33c0000 	teq	ip, #0	; 0x0
        2fc648:	13330000 	teqne	r3, #0	; 0x0
        2fc64c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2fc650:	e3a0001b 	mov	r0, #27	; 0x1b
        2fc654:	e5c10001 	strb	r0, [r1, #1]
        2fc658:	e5b1000c 	ldr	r0, [r1, #12]!
        2fc65c:	e5d01001 	ldrb	r1, [r0, #1]
        2fc660:	e3310008 	teq	r1, #8	; 0x8
        2fc664:	0b607593 	bleq	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2fc668:	e5d40001 	ldrb	r0, [r4, #1]
        2fc66c:	e3300005 	teq	r0, #5	; 0x5
        2fc670:	1a000002 	bne	2fc680 <O_GU_To3Elements(NxtPrvCircle_type *)+0x148>
        2fc674:	e1a00004 	mov	r0, r4
        2fc678:	eb60758e 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2fc67c:	ea000001 	b	2fc688 <O_GU_To3Elements(NxtPrvCircle_type *)+0x150>
        2fc680:	e3a00021 	mov	r0, #33	; 0x21
        2fc684:	e5c40001 	strb	r0, [r4, #1]
        2fc688:	e3a0001a 	mov	r0, #26	; 0x1a
        2fc68c:	e3350000 	teq	r5, #0	; 0x0
        2fc690:	0a000007 	beq	2fc6b4 <O_GU_To3Elements(NxtPrvCircle_type *)+0x17c>
        2fc694:	e5c50001 	strb	r0, [r5, #1]
        2fc698:	e5d40001 	ldrb	r0, [r4, #1]
        2fc69c:	e3300005 	teq	r0, #5	; 0x5
        2fc6a0:	05b50010 	ldreq	r0, [r5, #16]!
        2fc6a4:	05d01001 	ldreqb	r1, [r0, #1]
        2fc6a8:	03310008 	teqeq	r1, #8	; 0x8
        2fc6ac:	0b607581 	bleq	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        2fc6b0:	ea000013 	b	2fc704 <O_GU_To3Elements(NxtPrvCircle_type *)+0x1cc>
        2fc6b4:	e2845014 	add	r5, r4, #20	; 0x14
        2fc6b8:	e5942006 	ldr	r2, [r4, #6]
        2fc6bc:	e1a02822 	mov	r2, r2, lsr #16
        2fc6c0:	e5c52007 	strb	r2, [r5, #7]
        2fc6c4:	e1a01442 	mov	r1, r2, asr #8
        2fc6c8:	e5c51006 	strb	r1, [r5, #6]
        2fc6cc:	e5c52005 	strb	r2, [r5, #5]
        2fc6d0:	e1a01442 	mov	r1, r2, asr #8
        2fc6d4:	e5c51004 	strb	r1, [r5, #4]
        2fc6d8:	e5c50001 	strb	r0, [r5, #1]
        2fc6dc:	e5950006 	ldr	r0, [r5, #6]
        2fc6e0:	e1a00840 	mov	r0, r0, asr #16
        2fc6e4:	e7960080 	ldr	r0, [r6, r0, lsl #1]
        2fc6e8:	e1a00840 	mov	r0, r0, asr #16
        2fc6ec:	e1a01007 	mov	r1, r7
        2fc6f0:	eb60798c 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2fc6f4:	e5c50002 	strb	r0, [r5, #2]
        2fc6f8:	e1a01005 	mov	r1, r5
        2fc6fc:	e1a00004 	mov	r0, r4
        2fc700:	eb60798e 	bl	1b1ad40 <$Insert2ndAfter1st__FP9SPEC_TYPET1>
        2fc704:	e3a00001 	mov	r0, #1	; 0x1
        2fc708:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: operator new(unsigned int)
 * Address: 00318ee8
 */
operator new(unsigned int) {
    /*
        318ee8:	e1a0c00d 	mov	ip, sp
        318eec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        318ef0:	e24cb004 	sub	fp, ip, #4	; 0x4
        318ef4:	e3300000 	teq	r0, #0	; 0x0
        318ef8:	03a00001 	moveq	r0, #1	; 0x1
        318efc:	eb62f719 	bl	1bd6b68 <$malloc>
        318f00:	e1b04000 	movs	r4, r0
        318f04:	1a000004 	bne	318f1c <operator new(unsigned int)+0x34>
        318f08:	e59f0014 	ldr	r0, [pc, #14]	; 318f24 <operator new(unsigned int)+0x3c>
        318f0c:	e5900000 	ldr	r0, [r0]
        318f10:	e3300000 	teq	r0, #0	; 0x0
        318f14:	11a0e00f 	movne	lr, pc
        318f18:	11a0f000 	movne	pc, r0
        318f1c:	e1a00004 	mov	r0, r4
        318f20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        318f24:	0c105534 	ldceq	5, cr5, [r0], -#208
    */
}

/**
 * Symbol: operator delete(void *)
 * Address: 00318f28
 */
operator delete(void *) {
    /*
        318f28:	ea62e68a 	b	1bd2958 <$free>
    */
}

/**
 * Symbol: OnStack(void const *)
 * Address: 0031abf4
 */
OnStack(void const *) {
    /*
        31abf4:	e24dd004 	sub	sp, sp, #4	; 0x4
        31abf8:	e15d0000 	cmp	sp, r0
        31abfc:	8a000005 	bhi	31ac18 <OnStack(void const *)+0x24>
        31ac00:	e59f1020 	ldr	r1, [pc, #20]	; 31ac28 <OnStack(void const *)+0x34>
        31ac04:	e5911000 	ldr	r1, [r1]
        31ac08:	e5911008 	ldr	r1, [r1, #8]
        31ac0c:	e1510000 	cmp	r1, r0
        31ac10:	23a00001 	movcs	r0, #1	; 0x1
        31ac14:	2a000000 	bcs	31ac1c <OnStack(void const *)+0x28>
        31ac18:	e3a00000 	mov	r0, #0	; 0x0
        31ac1c:	e20000ff 	and	r0, r0, #255	; 0xff
        31ac20:	e28dd004 	add	sp, sp, #4	; 0x4
        31ac24:	e1a0f00e 	mov	pc, lr
        31ac28:	0c1054b0 	ldceq	4, cr5, [r0], -#704
    */
}

/**
 * Symbol: ObjectPtr1__FlT1i
 * Address: 0031dc54
 */
void globals::ObjectPtr1() {
    /*
        31dc54:	e1a0c00d 	mov	ip, sp
        31dc58:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        31dc5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        31dc60:	e1a04002 	mov	r4, r2
        31dc64:	e3a06000 	mov	r6, #0	; 0x0
        31dc68:	e3310001 	teq	r1, #1	; 0x1
        31dc6c:	1a000023 	bne	31dd00 <ObjectPtr1__FlT1i+0xac>
        31dc70:	e59f504c 	ldr	r5, [pc, #4c]	; 31dcc4 <ObjectPtr1__FlT1i+0x70>
        31dc74:	e5850004 	str	r0, [r5, #4]
        31dc78:	eb5c88c5 	bl	1a3ff94 <$ForwardReference(long)>
        31dc7c:	e2401001 	sub	r1, r0, #1	; 0x1
        31dc80:	e5910000 	ldr	r0, [r1]
        31dc84:	e3100001 	tst	r0, #1	; 0x1
        31dc88:	0a000019 	beq	31dcf4 <ObjectPtr1__FlT1i+0xa0>
        31dc8c:	e5910008 	ldr	r0, [r1, #8]
        31dc90:	e3300022 	teq	r0, #34	; 0x22
        31dc94:	1a000016 	bne	31dcf4 <ObjectPtr1__FlT1i+0xa0>
        31dc98:	e1a00006 	mov	r0, r6
        31dc9c:	e5a56004 	str	r6, [r5, #4]!
        31dca0:	e5912018 	ldr	r2, [r1, #24]
        31dca4:	e3320002 	teq	r2, #2	; 0x2
        31dca8:	11a00002 	movne	r0, r2
        31dcac:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        31dcb0:	1a629d8f 	bne	1bc52f4 <$ObjectPtr(long)>
        31dcb4:	e24dd004 	sub	sp, sp, #4	; 0x4
        31dcb8:	e3340000 	teq	r4, #0	; 0x0
        31dcbc:	0a000001 	beq	31dcc8 <ObjectPtr1__FlT1i+0x74>
        31dcc0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        31dcc4:	0c105548 	ldceq	5, cr5, [r0], -#288
        31dcc8:	e2810001 	add	r0, r1, #1	; 0x1
        31dccc:	eb62911e 	bl	1bc214c <$AllocateRefHandle(long)>
        31dcd0:	e58d0000 	str	r0, [sp]
        31dcd4:	e1a0000d 	mov	r0, sp
        31dcd8:	eb5c88aa 	bl	1a3ff88 <$FollowFaultBlock(RefVar const &)>
        31dcdc:	eb629d84 	bl	1bc52f4 <$ObjectPtr(long)>
        31dce0:	e1a04000 	mov	r4, r0
        31dce4:	e59d0000 	ldr	r0, [sp]
        31dce8:	eb629533 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31dcec:	e1a00004 	mov	r0, r4
        31dcf0:	eafffff2 	b	31dcc0 <ObjectPtr1__FlT1i+0x6c>
        31dcf4:	e1a00001 	mov	r0, r1
        31dcf8:	e5a51008 	str	r1, [r5, #8]!
        31dcfc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        31dd00:	e24dd004 	sub	sp, sp, #4	; 0x4
        31dd04:	e3300042 	teq	r0, #66	; 0x42
        31dd08:	1a000007 	bne	31dd2c <ObjectPtr1__FlT1i+0xd8>
        31dd0c:	e59f0010 	ldr	r0, [pc, #10]	; 31dd24 <ObjectPtr1__FlT1i+0xd0>
        31dd10:	e5900000 	ldr	r0, [r0]
        31dd14:	e3a02000 	mov	r2, #0	; 0x0
        31dd18:	e59f1008 	ldr	r1, [pc, #8]	; 31dd28 <ObjectPtr1__FlT1i+0xd4>
        31dd1c:	eb63151e 	bl	1be319c <$Throw>
        31dd20:	ea000009 	b	31dd4c <ObjectPtr1__FlT1i+0xf8>
        31dd24:	00371308 	eoreqs	r1, r7, r8, lsl #6
        31dd28:	ffff43a3 	swinv	0x00ff43a3
        31dd2c:	eb629106 	bl	1bc214c <$AllocateRefHandle(long)>
        31dd30:	e58d0000 	str	r0, [sp]
        31dd34:	e1a0100d 	mov	r1, sp
        31dd38:	e3a00fee 	mov	r0, #952	; 0x3b8
        31dd3c:	e2400903 	sub	r0, r0, #49152	; 0xc000
        31dd40:	eb5c993b 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31dd44:	e59d0000 	ldr	r0, [sp]
        31dd48:	eb62951b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31dd4c:	e1a00006 	mov	r0, r6
        31dd50:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ObjectPtr(long)
 * Address: 0031dd54
 */
ObjectPtr(long) {
    /*
        31dd54:	e2001003 	and	r1, r0, #3	; 0x3
        31dd58:	e3310001 	teq	r1, #1	; 0x1
        31dd5c:	1a00000e 	bne	31dd9c <ObjectPtr(long)+0x48>
        31dd60:	e350050e 	cmp	r0, #58720256	; 0x3800000
        31dd64:	3a000003 	bcc	31dd78 <ObjectPtr(long)+0x24>
        31dd68:	e3500206 	cmp	r0, #1610612736	; 0x60000000
        31dd6c:	ba000003 	blt	31dd80 <ObjectPtr(long)+0x2c>
        31dd70:	e350031a 	cmp	r0, #1744830464	; 0x68000000
        31dd74:	aa000001 	bge	31dd80 <ObjectPtr(long)+0x2c>
        31dd78:	e2400001 	sub	r0, r0, #1	; 0x1
        31dd7c:	e1a0f00e 	mov	pc, lr
        31dd80:	e59f2010 	ldr	r2, [pc, #10]	; 31dd98 <ObjectPtr(long)+0x44>
        31dd84:	e5923004 	ldr	r3, [r2, #4]
        31dd88:	e1330000 	teq	r3, r0
        31dd8c:	05b20008 	ldreq	r0, [r2, #8]!
        31dd90:	01a0f00e 	moveq	pc, lr
        31dd94:	ea000002 	b	31dda4 <ObjectPtr(long)+0x50>
        31dd98:	0c105548 	ldceq	5, cr5, [r0], -#288
        31dd9c:	e3310003 	teq	r1, #3	; 0x3
        31dda0:	0a5c94fe 	beq	1a431a0 <$ResolveMagicPtr(long)>
        31dda4:	e3a02000 	mov	r2, #0	; 0x0
        31dda8:	ea5ce35f 	b	1a56b2c <$ObjectPtr1__FlT1i>
    */
}

/**
 * Symbol: ObjectFlags(long)
 * Address: 0031e290
 */
ObjectFlags(long) {
    /*
        31e290:	e1a0c00d 	mov	ip, sp
        31e294:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        31e298:	e24cb004 	sub	fp, ip, #4	; 0x4
        31e29c:	eb629c14 	bl	1bc52f4 <$ObjectPtr(long)>
        31e2a0:	e5900000 	ldr	r0, [r0]
        31e2a4:	e20000ff 	and	r0, r0, #255	; 0xff
        31e2a8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: OnCurve(long *, long)
 * Address: 00327c50
 */
OnCurve(long *, long) {
    /*
        327c50:	e1a022c1 	mov	r2, r1, asr #5
        327c54:	e0800102 	add	r0, r0, r2, lsl #2
        327c58:	e201201f 	and	r2, r1, #31	; 0x1f
        327c5c:	e3a01102 	mov	r1, #-2147483648	; 0x80000000
        327c60:	e5900000 	ldr	r0, [r0]
        327c64:	e1100231 	tst	r0, r1, lsr r2
        327c68:	13a00000 	movne	r0, #0	; 0x0
        327c6c:	03a00001 	moveq	r0, #1	; 0x1
        327c70:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: OffsetPaths__FPP5pathslT2
 * Address: 00327fbc
 */
void globals::OffsetPaths() {
    /*
        327fbc:	e92d4000 	stmdb	sp!, {lr}
        327fc0:	e5900000 	ldr	r0, [r0]
        327fc4:	e4903004 	ldr	r3, [r0], #4
        327fc8:	e243c001 	sub	ip, r3, #1	; 0x1
        327fcc:	e3330000 	teq	r3, #0	; 0x0
        327fd0:	08bd8000 	ldmeqia	sp!, {pc}
        327fd4:	e590e000 	ldr	lr, [r0]
        327fd8:	e28e301f 	add	r3, lr, #31	; 0x1f
        327fdc:	e1a032c3 	mov	r3, r3, asr #5
        327fe0:	e0800103 	add	r0, r0, r3, lsl #2
        327fe4:	e2800004 	add	r0, r0, #4	; 0x4
        327fe8:	e24e3001 	sub	r3, lr, #1	; 0x1
        327fec:	e33e0000 	teq	lr, #0	; 0x0
        327ff0:	0a000008 	beq	328018 <OffsetPaths__FPP5pathslT2+0x5c>
        327ff4:	e590e000 	ldr	lr, [r0]
        327ff8:	e08ee001 	add	lr, lr, r1
        327ffc:	e480e004 	str	lr, [r0], #4
        328000:	e590e000 	ldr	lr, [r0]
        328004:	e08ee002 	add	lr, lr, r2
        328008:	e480e004 	str	lr, [r0], #4
        32800c:	e1b0e003 	movs	lr, r3
        328010:	e2433001 	sub	r3, r3, #1	; 0x1
        328014:	1afffff6 	bne	327ff4 <OffsetPaths__FPP5pathslT2+0x38>
        328018:	e1b0300c 	movs	r3, ip
        32801c:	e24cc001 	sub	ip, ip, #1	; 0x1
        328020:	1affffeb 	bne	327fd4 <OffsetPaths__FPP5pathslT2+0x18>
        328024:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: Oracle(low_type *, PS_point_type *, _HAT_DENOM_TYPE)
 * Address: 0032be28
 */
Oracle(low_type *, PS_point_type *, _HAT_DENOM_TYPE) {
    /*
        32be28:	e3320003 	teq	r2, #3	; 0x3
        32be2c:	03a00006 	moveq	r0, #6	; 0x6
        32be30:	0a000006 	beq	32be50 <Oracle(low_type *, PS_point_type *, _HAT_DENOM_TYPE)+0x28>
        32be34:	e3320001 	teq	r2, #1	; 0x1
        32be38:	03a00010 	moveq	r0, #16	; 0x10
        32be3c:	0a000003 	beq	32be50 <Oracle(low_type *, PS_point_type *, _HAT_DENOM_TYPE)+0x28>
        32be40:	e3320002 	teq	r2, #2	; 0x2
        32be44:	13a00902 	movne	r0, #32768	; 0x8000
        32be48:	12400001 	subne	r0, r0, #1	; 0x1
        32be4c:	03a00016 	moveq	r0, #22	; 0x16
        32be50:	e5912002 	ldr	r2, [r1, #2]
        32be54:	e1a02842 	mov	r2, r2, asr #16
        32be58:	e1520000 	cmp	r2, r0
        32be5c:	c5911000 	ldrgt	r1, [r1]
        32be60:	c1a01841 	movgt	r1, r1, asr #16
        32be64:	c1510000 	cmpgt	r1, r0
        32be68:	d3a00000 	movle	r0, #0	; 0x0
        32be6c:	c3a00001 	movgt	r0, #1	; 0x1
        32be70:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: OperateSpeclArray(low_type *)
 * Address: 0032f5f0
 */
OperateSpeclArray(low_type *) {
    /*
        32f5f0:	e1a0c00d 	mov	ip, sp
        32f5f4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        32f5f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        32f5fc:	e1a04000 	mov	r4, r0
        32f600:	e5908040 	ldr	r8, [r0, #64]
        32f604:	e5906046 	ldr	r6, [r0, #70]
        32f608:	e1a06846 	mov	r6, r6, asr #16
        32f60c:	e3a07001 	mov	r7, #1	; 0x1
        32f610:	e2885014 	add	r5, r8, #20	; 0x14
        32f614:	e1a09005 	mov	r9, r5
        32f618:	e3560001 	cmp	r6, #1	; 0x1
        32f61c:	da000012 	ble	32f66c <OperateSpeclArray(low_type *)+0x7c>
        32f620:	e5d50000 	ldrb	r0, [r5]
        32f624:	e3300010 	teq	r0, #16	; 0x10
        32f628:	05d50014 	ldreqb	r0, [r5, #20]
        32f62c:	03300020 	teqeq	r0, #32	; 0x20
        32f630:	1a000008 	bne	32f658 <OperateSpeclArray(low_type *)+0x68>
        32f634:	e0460007 	sub	r0, r6, r7
        32f638:	e2400002 	sub	r0, r0, #2	; 0x2
        32f63c:	e0802100 	add	r2, r0, r0, lsl #2
        32f640:	e1a02102 	mov	r2, r2, lsl #2
        32f644:	e2851028 	add	r1, r5, #40	; 0x28
        32f648:	e1a00005 	mov	r0, r5
        32f64c:	eb621500 	bl	1bb4a54 <$memmove>
        32f650:	e2466002 	sub	r6, r6, #2	; 0x2
        32f654:	ea000002 	b	32f664 <OperateSpeclArray(low_type *)+0x74>
        32f658:	e2877001 	add	r7, r7, #1	; 0x1
        32f65c:	e0870107 	add	r0, r7, r7, lsl #2
        32f660:	e0885100 	add	r5, r8, r0, lsl #2
        32f664:	e1570006 	cmp	r7, r6
        32f668:	baffffec 	blt	32f620 <OperateSpeclArray(low_type *)+0x30>
        32f66c:	e5941046 	ldr	r1, [r4, #70]
        32f670:	e3a00000 	mov	r0, #0	; 0x0
        32f674:	e1560841 	cmp	r6, r1, asr #16
        32f678:	a91babf0 	ldmgedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        32f67c:	e1a01806 	mov	r1, r6, lsl #16
        32f680:	e1a01841 	mov	r1, r1, asr #16
        32f684:	e5c41047 	strb	r1, [r4, #71]
        32f688:	e1a02441 	mov	r2, r1, asr #8
        32f68c:	e5c42046 	strb	r2, [r4, #70]
        32f690:	e2411001 	sub	r1, r1, #1	; 0x1
        32f694:	e5c41049 	strb	r1, [r4, #73]
        32f698:	e1a01441 	mov	r1, r1, asr #8
        32f69c:	e5c41048 	strb	r1, [r4, #72]
        32f6a0:	e3a01001 	mov	r1, #1	; 0x1
        32f6a4:	e3560001 	cmp	r6, #1	; 0x1
        32f6a8:	e588900c 	str	r9, [r8, #12]
        32f6ac:	da000008 	ble	32f6d4 <OperateSpeclArray(low_type *)+0xe4>
        32f6b0:	e0812101 	add	r2, r1, r1, lsl #2
        32f6b4:	e0885102 	add	r5, r8, r2, lsl #2
        32f6b8:	e2452014 	sub	r2, r5, #20	; 0x14
        32f6bc:	e5852010 	str	r2, [r5, #16]
        32f6c0:	e2852014 	add	r2, r5, #20	; 0x14
        32f6c4:	e2811001 	add	r1, r1, #1	; 0x1
        32f6c8:	e1510006 	cmp	r1, r6
        32f6cc:	e585200c 	str	r2, [r5, #12]
        32f6d0:	bafffff6 	blt	32f6b0 <OperateSpeclArray(low_type *)+0xc0>
        32f6d4:	e5a5000c 	str	r0, [r5, #12]!
        32f6d8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: OpenPicture(Rect *, unsigned char)
 * Address: 00331980
 */
OpenPicture(Rect *, unsigned char) {
    /*
        331980:	e1a0c00d 	mov	ip, sp
        331984:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        331988:	e24cb004 	sub	fp, ip, #4	; 0x4
        33198c:	e1a04000 	mov	r4, r0
        331990:	e20160ff 	and	r6, r1, #255	; 0xff
        331994:	e24dd044 	sub	sp, sp, #68	; 0x44
        331998:	eb607787 	bl	1b4f7bc <$GetCurrentPort(void)>
        33199c:	e1a08000 	mov	r8, r0
        3319a0:	e3a01000 	mov	r1, #0	; 0x0
        3319a4:	e3a00000 	mov	r0, #0	; 0x0
        3319a8:	eb608806 	bl	1b539c8 <$SearchFont(long, unsigned short *)>
        3319ac:	eb6241e6 	bl	1bc214c <$AllocateRefHandle(long)>
        3319b0:	e58d0020 	str	r0, [sp, #32]
        3319b4:	e28d1020 	add	r1, sp, #32	; 0x20
        3319b8:	e1a0000d 	mov	r0, sp
        3319bc:	e3a03000 	mov	r3, #0	; 0x0
        3319c0:	e3a02703 	mov	r2, #786432	; 0xc0000
        3319c4:	eb607fb2 	bl	1b51894 <$MakeSimpleStyle__FRC6RefVarlT2>
        3319c8:	e59d0000 	ldr	r0, [sp]
        3319cc:	e5900000 	ldr	r0, [r0]
        3319d0:	eb6241dd 	bl	1bc214c <$AllocateRefHandle(long)>
        3319d4:	e3a05000 	mov	r5, #0	; 0x0
        3319d8:	e58d0024 	str	r0, [sp, #36]
        3319dc:	e5a05004 	str	r5, [r0, #4]!
        3319e0:	e28d0028 	add	r0, sp, #40	; 0x28
        3319e4:	e28de004 	add	lr, sp, #4	; 0x4
        3319e8:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        3319ec:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        3319f0:	e89e100c 	ldmia	lr, {r2, r3, ip}
        3319f4:	e880100c 	stmia	r0, {r2, r3, ip}
        3319f8:	e59d001c 	ldr	r0, [sp, #28]
        3319fc:	e3300000 	teq	r0, #0	; 0x0
        331a00:	159d001c 	ldrne	r0, [sp, #28]
        331a04:	1b606f34 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        331a08:	e59d0000 	ldr	r0, [sp]
        331a0c:	eb6245ea 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        331a10:	e59d0020 	ldr	r0, [sp, #32]
        331a14:	eb6245e8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        331a18:	e5980044 	ldr	r0, [r8, #68]
        331a1c:	e3300000 	teq	r0, #0	; 0x0
        331a20:	1a000093 	bne	331c74 <OpenPicture(Rect *, unsigned char)+0x2f4>
        331a24:	e24dd008 	sub	sp, sp, #8	; 0x8
        331a28:	e59f1038 	ldr	r1, [pc, #38]	; 331a68 <OpenPicture(Rect *, unsigned char)+0xe8>
        331a2c:	e8915000 	ldmia	r1, {ip, lr}
        331a30:	e88d5000 	stmia	sp, {ip, lr}
        331a34:	eb60776c 	bl	1b4f7ec <$HidePen(void)>
        331a38:	e3a0009c 	mov	r0, #156	; 0x9c
        331a3c:	eb62c1ba 	bl	1be212c <$NewHandle>
        331a40:	e1b07000 	movs	r7, r0
        331a44:	1a000008 	bne	331a6c <OpenPicture(Rect *, unsigned char)+0xec>
        331a48:	e59d0048 	ldr	r0, [sp, #72]
        331a4c:	e3300000 	teq	r0, #0	; 0x0
        331a50:	159d0048 	ldrne	r0, [sp, #72]
        331a54:	1b606f20 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        331a58:	e59d002c 	ldr	r0, [sp, #44]
        331a5c:	eb6245d6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        331a60:	e3a00000 	mov	r0, #0	; 0x0
        331a64:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        331a68:	00380ae0 	eoreqs	r0, r8, r0, ror #21
        331a6c:	e1a00007 	mov	r0, r7
        331a70:	eb62c1a5 	bl	1be210c <$HLock>
        331a74:	e5975000 	ldr	r5, [r7]
        331a78:	e5c5605c 	strb	r6, [r5, #92]
        331a7c:	e59f0110 	ldr	r0, [pc, #110]	; 331b94 <OpenPicture(Rect *, unsigned char)+0x214>
        331a80:	e5901010 	ldr	r1, [r0, #16]
        331a84:	e5851010 	str	r1, [r5, #16]
        331a88:	e5900000 	ldr	r0, [r0]
        331a8c:	e5850014 	str	r0, [r5, #20]
        331a90:	e3a00801 	mov	r0, #65536	; 0x10000
        331a94:	e5850018 	str	r0, [r5, #24]
        331a98:	e585001c 	str	r0, [r5, #28]
        331a9c:	e2850020 	add	r0, r5, #32	; 0x20
        331aa0:	e3a02000 	mov	r2, #0	; 0x0
        331aa4:	e3a01000 	mov	r1, #0	; 0x0
        331aa8:	eb608bd4 	bl	1b54a00 <$SetPt__FP5PointlT2>
        331aac:	e2850024 	add	r0, r5, #36	; 0x24
        331ab0:	e3a02001 	mov	r2, #1	; 0x1
        331ab4:	e3a01001 	mov	r1, #1	; 0x1
        331ab8:	eb608bd0 	bl	1b54a00 <$SetPt__FP5PointlT2>
        331abc:	e3a02008 	mov	r2, #8	; 0x8
        331ac0:	e5852028 	str	r2, [r5, #40]
        331ac4:	e285002c 	add	r0, r5, #44	; 0x2c
        331ac8:	eb6087c5 	bl	1b539e4 <$SetEmptyRect(Rect *)>
        331acc:	e2850034 	add	r0, r5, #52	; 0x34
        331ad0:	e3a02000 	mov	r2, #0	; 0x0
        331ad4:	e3a01000 	mov	r1, #0	; 0x0
        331ad8:	eb608bc8 	bl	1b54a00 <$SetPt__FP5PointlT2>
        331adc:	e598201c 	ldr	r2, [r8, #28]
        331ae0:	e1a02842 	mov	r2, r2, asr #16
        331ae4:	e598101e 	ldr	r1, [r8, #30]
        331ae8:	e1a01841 	mov	r1, r1, asr #16
        331aec:	e2850038 	add	r0, r5, #56	; 0x38
        331af0:	eb608bc2 	bl	1b54a00 <$SetPt__FP5PointlT2>
        331af4:	e24dd008 	sub	sp, sp, #8	; 0x8
        331af8:	e28d1008 	add	r1, sp, #8	; 0x8
        331afc:	e8915000 	ldmia	r1, {ip, lr}
        331b00:	e88d5000 	stmia	sp, {ip, lr}
        331b04:	e24dd008 	sub	sp, sp, #8	; 0x8
        331b08:	e28d0010 	add	r0, sp, #16	; 0x10
        331b0c:	e8905000 	ldmia	r0, {ip, lr}
        331b10:	e88d5000 	stmia	sp, {ip, lr}
        331b14:	e2850044 	add	r0, r5, #68	; 0x44
        331b18:	e59d3000 	ldr	r3, [sp]
        331b1c:	e28d2010 	add	r2, sp, #16	; 0x10
        331b20:	e8920006 	ldmia	r2, {r1, r2}
        331b24:	e28dd004 	add	sp, sp, #4	; 0x4
        331b28:	eb6087ac 	bl	1b539e0 <$SetCurve__FP5curve6FPointN22>
        331b2c:	e28dd00c 	add	sp, sp, #12	; 0xc
        331b30:	e3a00c01 	mov	r0, #256	; 0x100
        331b34:	e5850004 	str	r0, [r5, #4]
        331b38:	eb607f62 	bl	1b518c8 <$NewRgn(void)>
        331b3c:	e585000c 	str	r0, [r5, #12]
        331b40:	e2850060 	add	r0, r5, #96	; 0x60
        331b44:	e59fe04c 	ldr	lr, [pc, #4c]	; 331b98 <OpenPicture(Rect *, unsigned char)+0x218>
        331b48:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        331b4c:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        331b50:	e89e100c 	ldmia	lr, {r2, r3, ip}
        331b54:	e880100c 	stmia	r0, {r2, r3, ip}
        331b58:	e5950004 	ldr	r0, [r5, #4]
        331b5c:	eb62c172 	bl	1be212c <$NewHandle>
        331b60:	e1b06000 	movs	r6, r0
        331b64:	e24dd020 	sub	sp, sp, #32	; 0x20
        331b68:	1a00000b 	bne	331b9c <OpenPicture(Rect *, unsigned char)+0x21c>
        331b6c:	e1a00007 	mov	r0, r7
        331b70:	eb62bd4e 	bl	1be10b0 <$DisposHandle>
        331b74:	e59d0068 	ldr	r0, [sp, #104]
        331b78:	e3300000 	teq	r0, #0	; 0x0
        331b7c:	159d0068 	ldrne	r0, [sp, #104]
        331b80:	1b606ed5 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        331b84:	e59d004c 	ldr	r0, [sp, #76]
        331b88:	eb62458b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        331b8c:	e3a00000 	mov	r0, #0	; 0x0
        331b90:	ea000036 	b	331c70 <OpenPicture(Rect *, unsigned char)+0x2f0>
        331b94:	0c107d74 	ldceq	13, cr7, [r0], -#464
        331b98:	00380ca0 	eoreqs	r0, r8, r0, lsr #25
        331b9c:	e285007c 	add	r0, r5, #124	; 0x7c
        331ba0:	e1a09000 	mov	r9, r0
        331ba4:	e1b0a000 	movs	sl, r0
        331ba8:	0a000004 	beq	331bc0 <OpenPicture(Rect *, unsigned char)+0x240>
        331bac:	e3a00002 	mov	r0, #2	; 0x2
        331bb0:	eb624165 	bl	1bc214c <$AllocateRefHandle(long)>
        331bb4:	e3a01000 	mov	r1, #0	; 0x0
        331bb8:	e58a0000 	str	r0, [sl]
        331bbc:	e5a01004 	str	r1, [r0, #4]!
        331bc0:	e28d104c 	add	r1, sp, #76	; 0x4c
        331bc4:	e1a0000d 	mov	r0, sp
        331bc8:	eb606eba 	bl	1b4d6b8 <$CopyStyle(StyleRecord *)>
        331bcc:	e59d0000 	ldr	r0, [sp]
        331bd0:	e5901000 	ldr	r1, [r0]
        331bd4:	e5990000 	ldr	r0, [r9]
        331bd8:	e5801000 	str	r1, [r0]
        331bdc:	e2890004 	add	r0, r9, #4	; 0x4
        331be0:	e28de004 	add	lr, sp, #4	; 0x4
        331be4:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        331be8:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        331bec:	e89e100c 	ldmia	lr, {r2, r3, ip}
        331bf0:	e880100c 	stmia	r0, {r2, r3, ip}
        331bf4:	e59d001c 	ldr	r0, [sp, #28]
        331bf8:	e3300000 	teq	r0, #0	; 0x0
        331bfc:	159d001c 	ldrne	r0, [sp, #28]
        331c00:	1b606eb5 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        331c04:	e59d0000 	ldr	r0, [sp]
        331c08:	eb62456b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        331c0c:	e3a00000 	mov	r0, #0	; 0x0
        331c10:	e3a0900a 	mov	r9, #10	; 0xa
        331c14:	e5961000 	ldr	r1, [r6]
        331c18:	e5c19001 	strb	r9, [r1, #1]
        331c1c:	e5c10000 	strb	r0, [r1]
        331c20:	e5960000 	ldr	r0, [r6]
        331c24:	e2801002 	add	r1, r0, #2	; 0x2
        331c28:	e3a02008 	mov	r2, #8	; 0x8
        331c2c:	e1a00004 	mov	r0, r4
        331c30:	eb62b4c7 	bl	1bdef54 <$BlockMove>
        331c34:	e4856008 	str	r6, [r5], #8
        331c38:	e5859000 	str	r9, [r5]
        331c3c:	e3a00011 	mov	r0, #17	; 0x11
        331c40:	e5a87044 	str	r7, [r8, #68]!
        331c44:	eb608345 	bl	1b52960 <$PutPicOpcode(long)>
        331c48:	e3a000ff 	mov	r0, #255	; 0xff
        331c4c:	e2800c02 	add	r0, r0, #512	; 0x200
        331c50:	eb608349 	bl	1b5297c <$PutPicWord(long)>
        331c54:	e59d0068 	ldr	r0, [sp, #104]
        331c58:	e3300000 	teq	r0, #0	; 0x0
        331c5c:	159d0068 	ldrne	r0, [sp, #104]
        331c60:	1b606e9d 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        331c64:	e59d004c 	ldr	r0, [sp, #76]
        331c68:	eb624553 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        331c6c:	e1a00006 	mov	r0, r6
        331c70:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        331c74:	e59d0040 	ldr	r0, [sp, #64]
        331c78:	e3300000 	teq	r0, #0	; 0x0
        331c7c:	159d0040 	ldrne	r0, [sp, #64]
        331c80:	1b606e95 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        331c84:	e59d0024 	ldr	r0, [sp, #36]
        331c88:	eb62454b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        331c8c:	e3a00000 	mov	r0, #0	; 0x0
        331c90:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: OpenPoly(void)
 * Address: 003354d0
 */
OpenPoly(void) {
    /*
        3354d0:	e1a0c00d 	mov	ip, sp
        3354d4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        3354d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3354dc:	eb6068b6 	bl	1b4f7bc <$GetCurrentPort(void)>
        3354e0:	e1a05000 	mov	r5, r0
        3354e4:	e59f004c 	ldr	r0, [pc, #4c]	; 335538 <OpenPoly(void)+0x68>
        3354e8:	e1a06000 	mov	r6, r0
        3354ec:	e3a01c01 	mov	r1, #256	; 0x100
        3354f0:	e5a01028 	str	r1, [r0, #40]!
        3354f4:	e1a00001 	mov	r0, r1
        3354f8:	eb62b30b 	bl	1be212c <$NewHandle>
        3354fc:	e1b04000 	movs	r4, r0
        335500:	e3a00000 	mov	r0, #0	; 0x0
        335504:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        335508:	e5a6402c 	str	r4, [r6, #44]!
        33550c:	e3a0200c 	mov	r2, #12	; 0xc
        335510:	e5a5404c 	str	r4, [r5, #76]!
        335514:	e5941000 	ldr	r1, [r4]
        335518:	e5c12001 	strb	r2, [r1, #1]
        33551c:	e5c10000 	strb	r0, [r1]
        335520:	e5940000 	ldr	r0, [r4]
        335524:	e2800004 	add	r0, r0, #4	; 0x4
        335528:	eb60792d 	bl	1b539e4 <$SetEmptyRect(Rect *)>
        33552c:	eb6068ae 	bl	1b4f7ec <$HidePen(void)>
        335530:	e1a00004 	mov	r0, r4
        335534:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        335538:	0c107d88 	ldceq	13, cr7, [r0], -#544
    */
}

/**
 * Symbol: OffsetPoly__FPP7PolygonlT2
 * Address: 00335814
 */
void globals::OffsetPoly() {
    /*
        335814:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        335818:	e590c000 	ldr	ip, [r0]
        33581c:	e59c0000 	ldr	r0, [ip]
        335820:	e1a00840 	mov	r0, r0, asr #16
        335824:	e240000c 	sub	r0, r0, #12	; 0xc
        335828:	e1a0e120 	mov	lr, r0, lsr #2
        33582c:	e3a03000 	mov	r3, #0	; 0x0
        335830:	e35e0000 	cmp	lr, #0	; 0x0
        335834:	da000013 	ble	335888 <OffsetPoly__FPP7PolygonlT2+0x74>
        335838:	e1a05802 	mov	r5, r2, lsl #16
        33583c:	e1a05845 	mov	r5, r5, asr #16
        335840:	e1a04801 	mov	r4, r1, lsl #16
        335844:	e1a04844 	mov	r4, r4, asr #16
        335848:	e08c0103 	add	r0, ip, r3, lsl #2
        33584c:	e590600c 	ldr	r6, [r0, #12]
        335850:	e1a06826 	mov	r6, r6, lsr #16
        335854:	e0866005 	add	r6, r6, r5
        335858:	e5c0600d 	strb	r6, [r0, #13]
        33585c:	e1a06446 	mov	r6, r6, asr #8
        335860:	e5c0600c 	strb	r6, [r0, #12]
        335864:	e590600e 	ldr	r6, [r0, #14]
        335868:	e1a06826 	mov	r6, r6, lsr #16
        33586c:	e0866004 	add	r6, r6, r4
        335870:	e5c0600f 	strb	r6, [r0, #15]
        335874:	e1a06446 	mov	r6, r6, asr #8
        335878:	e5c0600e 	strb	r6, [r0, #14]
        33587c:	e2833001 	add	r3, r3, #1	; 0x1
        335880:	e153000e 	cmp	r3, lr
        335884:	baffffef 	blt	335848 <OffsetPoly__FPP7PolygonlT2+0x34>
        335888:	e28c0004 	add	r0, ip, #4	; 0x4
        33588c:	e8bd4070 	ldmia	sp!, {r4, r5, r6, lr}
        335890:	ea607014 	b	1b518e8 <$OffsetRect__FP4RectlT2>
    */
}

/**
 * Symbol: OffsetRect__FP4RectlT2
 * Address: 0033ffe8
 */
void globals::OffsetRect() {
    /*
        33ffe8:	e5903000 	ldr	r3, [r0]
        33ffec:	e1a03823 	mov	r3, r3, lsr #16
        33fff0:	e1a02802 	mov	r2, r2, lsl #16
        33fff4:	e1a02842 	mov	r2, r2, asr #16
        33fff8:	e0833002 	add	r3, r3, r2
        33fffc:	e5c03001 	strb	r3, [r0, #1]
        340000:	e1a03443 	mov	r3, r3, asr #8
        340004:	e5c03000 	strb	r3, [r0]
        340008:	e5903002 	ldr	r3, [r0, #2]
        34000c:	e1a03823 	mov	r3, r3, lsr #16
        340010:	e1a01801 	mov	r1, r1, lsl #16
        340014:	e1a01841 	mov	r1, r1, asr #16
        340018:	e0833001 	add	r3, r3, r1
        34001c:	e5c03003 	strb	r3, [r0, #3]
        340020:	e1a03443 	mov	r3, r3, asr #8
        340024:	e5c03002 	strb	r3, [r0, #2]
        340028:	e5903004 	ldr	r3, [r0, #4]
        34002c:	e1a03823 	mov	r3, r3, lsr #16
        340030:	e0832002 	add	r2, r3, r2
        340034:	e5c02005 	strb	r2, [r0, #5]
        340038:	e1a02442 	mov	r2, r2, asr #8
        34003c:	e5c02004 	strb	r2, [r0, #4]
        340040:	e5902006 	ldr	r2, [r0, #6]
        340044:	e1a02822 	mov	r2, r2, lsr #16
        340048:	e0821001 	add	r1, r2, r1
        34004c:	e5c01007 	strb	r1, [r0, #7]
        340050:	e1a01441 	mov	r1, r1, asr #8
        340054:	e5c01006 	strb	r1, [r0, #6]
        340058:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: OpenRgn(void)
 * Address: 0034103c
 */
OpenRgn(void) {
    /*
        34103c:	e1a0c00d 	mov	ip, sp
        341040:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        341044:	e24cb004 	sub	fp, ip, #4	; 0x4
        341048:	e59f0038 	ldr	r0, [pc, #38]	; 341088 <OpenRgn(void)+0x4c>
        34104c:	e1a04000 	mov	r4, r0
        341050:	e3a01000 	mov	r1, #0	; 0x0
        341054:	e5801034 	str	r1, [r0, #52]
        341058:	e1a01000 	mov	r1, r0
        34105c:	e3a00c01 	mov	r0, #256	; 0x100
        341060:	e5a10030 	str	r0, [r1, #48]!
        341064:	eb628430 	bl	1be212c <$NewHandle>
        341068:	e5a40038 	str	r0, [r4, #56]!
        34106c:	e3300000 	teq	r0, #0	; 0x0
        341070:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        341074:	e1a04000 	mov	r4, r0
        341078:	eb6039cf 	bl	1b4f7bc <$GetCurrentPort(void)>
        34107c:	e5a04048 	str	r4, [r0, #72]!
        341080:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        341084:	ea6039d8 	b	1b4f7ec <$HidePen(void)>
        341088:	0c107d88 	ldceq	13, cr7, [r0], -#544
    */
}

/**
 * Symbol: OffsetRgn__FPP6RegionlT2
 * Address: 00342c54
 */
void globals::OffsetRgn() {
    /*
        342c54:	e1a0c00d 	mov	ip, sp
        342c58:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        342c5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        342c60:	e1a06000 	mov	r6, r0
        342c64:	e1a05001 	mov	r5, r1
        342c68:	e1a04002 	mov	r4, r2
        342c6c:	e5900000 	ldr	r0, [r0]
        342c70:	e2800004 	add	r0, r0, #4	; 0x4
        342c74:	eb603b1b 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        342c78:	e5960000 	ldr	r0, [r6]
        342c7c:	e5901000 	ldr	r1, [r0]
        342c80:	e1a01841 	mov	r1, r1, asr #16
        342c84:	e331000c 	teq	r1, #12	; 0xc
        342c88:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        342c8c:	e280000c 	add	r0, r0, #12	; 0xc
        342c90:	e1a01804 	mov	r1, r4, lsl #16
        342c94:	e1a01841 	mov	r1, r1, asr #16
        342c98:	e3a02902 	mov	r2, #32768	; 0x8000
        342c9c:	e2422001 	sub	r2, r2, #1	; 0x1
        342ca0:	e1a03805 	mov	r3, r5, lsl #16
        342ca4:	e1a03843 	mov	r3, r3, asr #16
        342ca8:	e590c000 	ldr	ip, [r0]
        342cac:	e1a0c82c 	mov	ip, ip, lsr #16
        342cb0:	e08cc001 	add	ip, ip, r1
        342cb4:	e5c0c001 	strb	ip, [r0, #1]
        342cb8:	e1a0c44c 	mov	ip, ip, asr #8
        342cbc:	e4c0c002 	strb	ip, [r0], #2
        342cc0:	e590c000 	ldr	ip, [r0]
        342cc4:	e1a0c82c 	mov	ip, ip, lsr #16
        342cc8:	e08cc003 	add	ip, ip, r3
        342ccc:	e5c0c001 	strb	ip, [r0, #1]
        342cd0:	e1a0c44c 	mov	ip, ip, asr #8
        342cd4:	e4c0c002 	strb	ip, [r0], #2
        342cd8:	e590c000 	ldr	ip, [r0]
        342cdc:	e1a0c82c 	mov	ip, ip, lsr #16
        342ce0:	e08cc003 	add	ip, ip, r3
        342ce4:	e5c0c001 	strb	ip, [r0, #1]
        342ce8:	e1a0c44c 	mov	ip, ip, asr #8
        342cec:	e4c0c002 	strb	ip, [r0], #2
        342cf0:	e590e000 	ldr	lr, [r0]
        342cf4:	e132084e 	teq	r2, lr, asr #16
        342cf8:	1afffff0 	bne	342cc0 <OffsetRgn__FPP6RegionlT2+0x6c>
        342cfc:	e5b0e002 	ldr	lr, [r0, #2]!
        342d00:	e132084e 	teq	r2, lr, asr #16
        342d04:	1affffe7 	bne	342ca8 <OffsetRgn__FPP6RegionlT2+0x54>
        342d08:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: operator[](void *, unsigned int, int, void (*)(void *))
 * Address: 00344fe0
 */
operator[](void *, unsigned int, int, void (*)(void *)) {
    /*
        344fe0:	e1a0c00d 	mov	ip, sp
        344fe4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        344fe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        344fec:	e1a04000 	mov	r4, r0
        344ff0:	e1b05002 	movs	r5, r2
        344ff4:	e1a06003 	mov	r6, r3
        344ff8:	e0000192 	mul	r0, r2, r1
        344ffc:	50807004 	addpl	r7, r0, r4
        345000:	40847005 	addmi	r7, r4, r5
        345004:	40474000 	submi	r4, r7, r0
        345008:	e1340007 	teq	r4, r7
        34500c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        345010:	e1a00004 	mov	r0, r4
        345014:	e1a0e00f 	mov	lr, pc
        345018:	e1a0f006 	mov	pc, r6
        34501c:	e0844005 	add	r4, r4, r5
        345020:	e1340007 	teq	r4, r7
        345024:	1afffff9 	bne	345010 <operator[](void *, unsigned int, int, void (*)(void *))+0x30>
        345028:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: O10
 * Address: 00371a60
 */
void globals::O10() {
    /*
        371a60:	00000007 	andeq	r0, r0, r7
        371a64:	00000009 	andeq	r0, r0, r9
        371a68:	0000000d 	andeq	r0, r0, sp
    */
}

/**
 * Symbol: O9
 * Address: 00371a6c
 */
void globals::O9() {
    /*
        371a6c:	0000000c 	andeq	r0, r0, ip
        371a70:	0000000e 	andeq	r0, r0, lr
        371a74:	00000012 	andeq	r0, r0, r2, lsl r0
        371a78:	0000001a 	andeq	r0, r0, sl, lsl r0
    */
}

/**
 * Symbol: O8
 * Address: 00371a7c
 */
void globals::O8() {
    /*
        371a7c:	00000016 	andeq	r0, r0, r6, lsl r0
        371a80:	00000018 	andeq	r0, r0, r8, lsl r0
        371a84:	0000001c 	andeq	r0, r0, ip, lsl r0
        371a88:	00000024 	andeq	r0, r0, r4, lsr #32
        371a8c:	00000034 	andeq	r0, r0, r4, lsr r0
    */
}

/**
 * Symbol: O7
 * Address: 00371a90
 */
void globals::O7() {
    /*
        371a90:	0000002a 	andeq	r0, r0, sl, lsr #32
        371a94:	0000002c 	andeq	r0, r0, ip, lsr #32
        371a98:	00000030 	andeq	r0, r0, r0, lsr r0
        371a9c:	00000038 	andeq	r0, r0, r8, lsr r0
        371aa0:	00000048 	andeq	r0, r0, r8, asr #32
        371aa4:	00000068 	andeq	r0, r0, r8, rrx
    */
}

/**
 * Symbol: O6
 * Address: 00371aa8
 */
void globals::O6() {
    /*
        371aa8:	00000052 	andeq	r0, r0, r2, asr r0
        371aac:	00000054 	andeq	r0, r0, r4, asr r0
        371ab0:	00000058 	andeq	r0, r0, r8, asr r0
        371ab4:	00000060 	andeq	r0, r0, r0, rrx
        371ab8:	00000070 	andeq	r0, r0, r0, ror r0
        371abc:	00000090 	muleq	r0, r0, r0
        371ac0:	000000d0 	ldreqd	r0, [r0], -r0
    */
}

/**
 * Symbol: O5
 * Address: 00371ac4
 */
void globals::O5() {
    /*
        371ac4:	000000a2 	andeq	r0, r0, r2, lsr #1
        371ac8:	000000a4 	andeq	r0, r0, r4, lsr #1
        371acc:	000000a8 	andeq	r0, r0, r8, lsr #1
        371ad0:	000000b0 	streqh	r0, [r0], -r0
        371ad4:	000000c0 	andeq	r0, r0, r0, asr #1
        371ad8:	000000e0 	andeq	r0, r0, r0, ror #1
        371adc:	00000120 	andeq	r0, r0, r0, lsr #2
        371ae0:	000001a0 	andeq	r0, r0, r0, lsr #3
    */
}

/**
 * Symbol: O4
 * Address: 00371ae4
 */
void globals::O4() {
    /*
        371ae4:	00000142 	andeq	r0, r0, r2, asr #2
        371ae8:	00000144 	andeq	r0, r0, r4, asr #2
        371aec:	00000148 	andeq	r0, r0, r8, asr #2
        371af0:	00000150 	andeq	r0, r0, r0, asr r1
        371af4:	00000160 	andeq	r0, r0, r0, ror #2
        371af8:	00000180 	andeq	r0, r0, r0, lsl #3
        371afc:	000001c0 	andeq	r0, r0, r0, asr #3
        371b00:	00000240 	andeq	r0, r0, r0, asr #4
        371b04:	00000340 	andeq	r0, r0, r0, asr #6
    */
}

/**
 * Symbol: O3
 * Address: 00371b08
 */
void globals::O3() {
    /*
        371b08:	00000282 	andeq	r0, r0, r2, lsl #5
        371b0c:	00000284 	andeq	r0, r0, r4, lsl #5
        371b10:	00000288 	andeq	r0, r0, r8, lsl #5
        371b14:	00000290 	muleq	r0, r0, r2
        371b18:	000002a0 	andeq	r0, r0, r0, lsr #5
        371b1c:	000002c0 	andeq	r0, r0, r0, asr #5
        371b20:	00000300 	andeq	r0, r0, r0, lsl #6
        371b24:	00000380 	andeq	r0, r0, r0, lsl #7
        371b28:	00000480 	andeq	r0, r0, r0, lsl #9
        371b2c:	0000066c 	andeq	r0, r0, ip, ror #12
    */
}

/**
 * Symbol: O2
 * Address: 00371b30
 */
void globals::O2() {
    /*
        371b30:	00000502 	andeq	r0, r0, r2, lsl #10
        371b34:	00000504 	andeq	r0, r0, r4, lsl #10
        371b38:	00000508 	andeq	r0, r0, r8, lsl #10
        371b3c:	00000510 	andeq	r0, r0, r0, lsl r5
        371b40:	00000520 	andeq	r0, r0, r0, lsr #10
        371b44:	00000540 	andeq	r0, r0, r0, asr #10
        371b48:	00000580 	andeq	r0, r0, r0, lsl #11
        371b4c:	00000600 	andeq	r0, r0, r0, lsl #12
        371b50:	00000700 	andeq	r0, r0, r0, lsl #14
        371b54:	00000900 	andeq	r0, r0, r0, lsl #18
        371b58:	00000d00 	andeq	r0, r0, r0, lsl #26
    */
}

/**
 * Symbol: O1
 * Address: 00371b5c
 */
void globals::O1() {
    /*
        371b5c:	00000a02 	andeq	r0, r0, r2, lsl #20
        371b60:	00000a04 	andeq	r0, r0, r4, lsl #20
        371b64:	00000a08 	andeq	r0, r0, r8, lsl #20
        371b68:	00000a10 	andeq	r0, r0, r0, lsl sl
        371b6c:	00000a20 	andeq	r0, r0, r0, lsr #20
        371b70:	00000a40 	andeq	r0, r0, r0, asr #20
        371b74:	00000a80 	andeq	r0, r0, r0, lsl #21
        371b78:	00000b00 	andeq	r0, r0, r0, lsl #22
        371b7c:	00000c00 	andeq	r0, r0, r0, lsl #24
        371b80:	00000e00 	andeq	r0, r0, r0, lsl #28
        371b84:	00001200 	andeq	r1, r0, r0, lsl #4
        371b88:	00001a00 	andeq	r1, r0, r0, lsl #20
    */
}

/**
 * Symbol: other_charset
 * Address: 00375078
 */
void globals::other_charset() {
    /*
        375078:	3a2e2d25 	bcc	f00514 <ROM$$Size+0x7e08c8>
        37507c:	2c2b2a3d 	stccs	10, cr2, [fp], -#244
        375080:	24402326 	strcsb	r2, [r0], -#806
        375084:	a35f2f00 	cmpge	pc, #0	; 0x0
    */
}

/**
 * Symbol: os_rec_ctbl_intl
 * Address: 00376a40
 */
void globals::os_rec_ctbl_intl() {
    /*
        376a40:	a37f8080 	cmnge	pc, #128	; 0x80
        376a44:	8a818582 	bhi	fe3d8054 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc7c77fc>
        376a48:	9a838655 	bls	fe4583a4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc847b4c>
        376a4c:	9f75a786 	swils	0x0075a786
        376a50:	cb418861 	blgt	13d8bdc <ROM$$Size+0xcb8f90>
        376a54:	e5418961 	strb	r8, [r1, -#2401]
        376a58:	82438d63 	subhi	r8, r3, #6336	; 0x18c0
        376a5c:	e9458f65 	stmdb	r5, {r0, r2, r5, r6, r8, r9, sl, fp, pc}^
        376a60:	83458e65 	cmphi	r5, #1616	; 0x650
        376a64:	e6459065 	strb	r9, [r5], -r5, rrx
        376a68:	eb499469 	bl	15dbc14 <ROM$$Size+0xebbfc8>
        376a6c:	ec499569 	mcrr	5, 6, r9, r9, cr9
        376a70:	ef4f996f 	swi	0x004f996f
        376a74:	f4559d75 	ldrnvb	r9, [r5], -#3445
        376a78:	f3559e75 	cmpnv	r5, #1872	; 0x750
        376a7c:	9165bb9e 	strlsb	fp, [r5, -#190]!
        376a80:	bc9f81a0 	ldfltd	f0, [pc], #640
        376a84:	8ca1b4a2 	stchi	4, cr11, [r1], #648
        376a88:	c7a3c8a4 	strgt	ip, [r3, r4, lsr #17]!
        376a8c:	a6a5d959 	undefined
        376a90:	d879844e 	ldmleda	r9!, {r1, r2, r3, r6, sl, pc}^
        376a94:	966ea2aa 	strlsbt	sl, [lr], -sl, lsr #5
        376a98:	c0abc1ac 	adcgt	ip, fp, ip, lsr #3
        376a9c:	e7418761 	strb	r8, [r1, -r1, ror #14]
        376aa0:	ea499269 	b	15db44c <ROM$$Size+0xebb800>
        376aa4:	ed499369 	stcl	3, cr9, [r9, -#420]
        376aa8:	ee4f976f 	cdp	7, 4, cr9, cr15, cr15, {3}
        376aac:	f14f986f 	cmpnv	pc, pc, ror #16
        376ab0:	f2559c75 	subnvs	r9, r5, #29952	; 0x7500
        376ab4:	cc418b61 	mcrrgt	11, 6, r8, r1, cr1
        376ab8:	cd4f9b6f 	stcgtl	11, cr9, [pc, -#444]
        376abc:	e8450000 	stmda	r5, {}^
    */
}

/**
 * Symbol: os_rec_ctbl_eng
 * Address: 00376ac0
 */
void globals::os_rec_ctbl_eng() {
    /*
        376ac0:	a37f8041 	cmnge	pc, #65	; 0x41
        376ac4:	8a61854f 	bhi	1bd8008 <$PrimGetEntryByIndex__13MemObjManagerSF10MemObjTypeUlPv+0x40c>
        376ac8:	9a6f8655 	bls	1f58424 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x347bcc>
        376acc:	9f75a786 	swils	0x0075a786
        376ad0:	cb418861 	blgt	13d8c5c <ROM$$Size+0xcb9010>
        376ad4:	e5418961 	strb	r8, [r1, -#2401]
        376ad8:	82438d63 	subhi	r8, r3, #6336	; 0x18c0
        376adc:	e9458f65 	stmdb	r5, {r0, r2, r5, r6, r8, r9, sl, fp, pc}^
        376ae0:	83458e65 	cmphi	r5, #1616	; 0x650
        376ae4:	e6459065 	strb	r9, [r5], -r5, rrx
        376ae8:	eb499469 	bl	15dbc94 <ROM$$Size+0xebc048>
        376aec:	ec499569 	mcrr	5, 6, r9, r9, cr9
        376af0:	ef4f996f 	swi	0x004f996f
        376af4:	f4559d75 	ldrnvb	r9, [r5], -#3445
        376af8:	f3559e75 	cmpnv	r5, #1872	; 0x750
        376afc:	9165bb9e 	strlsb	fp, [r5, -#190]!
        376b00:	bc9f8141 	ldfltd	f0, [pc], #260
        376b04:	8c61b4a2 	stchil	4, cr11, [r1], -#648
        376b08:	c7a3c8a4 	strgt	ip, [r3, r4, lsr #17]!
        376b0c:	a6a5d959 	undefined
        376b10:	d879844e 	ldmleda	r9!, {r1, r2, r3, r6, sl, pc}^
        376b14:	966ea2aa 	strlsbt	sl, [lr], -sl, lsr #5
        376b18:	c0abc1ac 	adcgt	ip, fp, ip, lsr #3
        376b1c:	e7418761 	strb	r8, [r1, -r1, ror #14]
        376b20:	ea499269 	b	15db4cc <ROM$$Size+0xebb880>
        376b24:	ed499369 	stcl	3, cr9, [r9, -#420]
        376b28:	ee4f976f 	cdp	7, 4, cr9, cr15, cr15, {3}
        376b2c:	f14f986f 	cmpnv	pc, pc, ror #16
        376b30:	f2559c75 	subnvs	r9, r5, #29952	; 0x7500
        376b34:	cc418b61 	mcrrgt	11, 6, r8, r1, cr1
        376b38:	cd4f9b6f 	stcgtl	11, cr9, [pc, -#444]
        376b3c:	e8450000 	stmda	r5, {}^
    */
}

/**
 * Symbol: OpcodeProcs
 * Address: 00380a9c
 */
void globals::OpcodeProcs() {
    /*
        380a9c:	01b58c7c 	moveqs	r8, ip, ror ip
        380aa0:	01b58c7c 	moveqs	r8, ip, ror ip
        380aa4:	01b59c80 	moveqs	r9, r0, lsl #25
        380aa8:	01b59c84 	moveqs	r9, r4, lsl #25
        380aac:	01b59c84 	moveqs	r9, r4, lsl #25
        380ab0:	01b59c84 	moveqs	r9, r4, lsl #25
        380ab4:	01b59c88 	moveqs	r9, r8, lsl #25
        380ab8:	01b59c8c 	moveqs	r9, ip, lsl #25
        380abc:	01b59c90 	ldreqb	r9, [r5, r0]!
        380ac0:	01b59c94 	ldreqb	r9, [r5, r4]!
        380ac4:	01b59c98 	ldreqb	r9, [r5, r8]!
        380ac8:	01b59c9c 	ldreqb	r9, [r5, ip]!
        380acc:	01b59c9c 	ldreqb	r9, [r5, ip]!
        380ad0:	01b59c9c 	ldreqb	r9, [r5, ip]!
        380ad4:	01b59c9c 	ldreqb	r9, [r5, ip]!
        380ad8:	01b59ca0 	moveqs	r9, r0, lsr #25
        380adc:	01b5ad3c 	moveqs	sl, ip, lsr sp
        380ae8:	7ff00000 	swivc	0x00f00000	; IMB
        380aec:	00000000 	andeq	r0, r0, r0
        380af0:	fff00000 	swinv	0x00f00000	; IMB
        380af4:	00000000 	andeq	r0, r0, r0
        380af8:	7ff80025 	swivc	0x00f80025
        380afc:	00000000 	andeq	r0, r0, r0
    */
}

