#include "include/TCommServer.h"

/**
 * Symbol: TCommServer::__ct(unsigned char, unsigned char, unsigned char *)
 * Address: 00209654
 */
TCommServer::TCommServer(unsigned char, unsigned char, unsigned char *) {
    /*
        209654:	e1a0c00d 	mov	ip, sp
        209658:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20965c:	e24cb004 	sub	fp, ip, #4	; 0x4
        209660:	e1b04000 	movs	r4, r0
        209664:	e1a05003 	mov	r5, r3
        209668:	e20160ff 	and	r6, r1, #255	; 0xff
        20966c:	e20270ff 	and	r7, r2, #255	; 0xff
        209670:	1a000003 	bne	209684 <TCommServer::__ct(unsigned char, unsigned char, unsigned char *)+0x30>
        209674:	e3a000e4 	mov	r0, #228	; 0xe4
        209678:	eb67142e 	bl	1bce738 <$__nw(unsigned int)>
        20967c:	e1b04000 	movs	r4, r0
        209680:	0a000007 	beq	2096a4 <TCommServer::__ct(unsigned char, unsigned char, unsigned char *)+0x50>
        209684:	e5c4700c 	strb	r7, [r4, #12]
        209688:	e5c4600d 	strb	r6, [r4, #13]
        20968c:	e2840014 	add	r0, r4, #20	; 0x14
        209690:	e1a01005 	mov	r1, r5
        209694:	eb679430 	bl	1bee75c <$Ustrcpy>
        209698:	e3a00000 	mov	r0, #0	; 0x0
        20969c:	e5840010 	str	r0, [r4, #16]	; fField16
        2096a0:	e5c400e0 	strb	r0, [r4, #224]	; fField224
        2096a4:	e1a00004 	mov	r0, r4
        2096a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCommServer::__dt(void)
 * Address: 002096ac
 */
TCommServer::~TCommServer(void) {
    /*
        2096ac:	e3110001 	tst	r1, #1	; 0x1
        2096b0:	1a67100a 	bne	1bcd6e0 <$__dl(void *)>
        2096b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommServer::Pad(unsigned long)
 * Address: 002096b8
 */
TCommServer::Pad(unsigned long) {
    /*
        2096b8:	e1a0c00d 	mov	ip, sp
        2096bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2096c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2096c4:	e1a04000 	mov	r4, r0
        2096c8:	e2010003 	and	r0, r1, #3	; 0x3
        2096cc:	e3500000 	cmp	r0, #0	; 0x0
        2096d0:	991ba830 	ldmlsdb	fp, {r4, r5, fp, sp, pc}
        2096d4:	e2605004 	rsb	r5, r0, #4	; 0x4
        2096d8:	e3a00000 	mov	r0, #0	; 0x0
        2096dc:	e52d0004 	str	r0, [sp, -#4]!
        2096e0:	e52d006c 	str	r0, [sp, -#108]!
        2096e4:	e28d0008 	add	r0, sp, #8	; 0x8
        2096e8:	eb66a4a1 	bl	1bb2974 <$setjmp>
        2096ec:	e3300000 	teq	r0, #0	; 0x0
        2096f0:	1a00000a 	bne	209720 <TCommServer::Pad(unsigned long)+0x68>
        2096f4:	e1a0000d 	mov	r0, sp
        2096f8:	eb675a5f 	bl	1be007c <$AddExceptionHandler>
        2096fc:	e1a02005 	mov	r2, r5
        209700:	e28d106c 	add	r1, sp, #108	; 0x6c
        209704:	e594c000 	ldr	ip, [r4]
        209708:	e1a0000c 	mov	r0, ip
        20970c:	e3a03000 	mov	r3, #0	; 0x0
        209710:	e59cc000 	ldr	ip, [ip]
        209714:	e1a0e00f 	mov	lr, pc
        209718:	e28cf018 	add	pc, ip, #24	; 0x18
        20971c:	ea00000c 	b	209754 <TCommServer::Pad(unsigned long)+0x9c>
        209720:	e59d0060 	ldr	r0, [sp, #96]
        209724:	e59f101c 	ldr	r1, [pc, #1c]	; 209748 <TCommServer::Pad(unsigned long)+0x90>
        209728:	e5911000 	ldr	r1, [r1]
        20972c:	eb676698 	bl	1be3194 <$Subexception>
        209730:	e3300000 	teq	r0, #0	; 0x0
        209734:	0a000004 	beq	20974c <TCommServer::Pad(unsigned long)+0x94>
        209738:	e1a00004 	mov	r0, r4
        20973c:	e59d1064 	ldr	r1, [sp, #100]
        209740:	eb65eab7 	bl	1b84224 <TCommServer::$TestPipeExceptionHandler(long)>
        209744:	ea000002 	b	209754 <TCommServer::Pad(unsigned long)+0x9c>
        209748:	00371324 	eoreqs	r1, r7, r4, lsr #6
        20974c:	e1a0000d 	mov	r0, sp
        209750:	eb67627f 	bl	1be2154 <$NextHandler>
        209754:	e1a0000d 	mov	r0, sp
        209758:	eb675e56 	bl	1be10b8 <$ExitHandler>
        20975c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCommServer::GetResponse(long *)
 * Address: 00209760
 */
TCommServer::GetResponse(long *) {
    /*
        209760:	e1a0c00d 	mov	ip, sp
        209764:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        209768:	e24cb004 	sub	fp, ip, #4	; 0x4
        20976c:	e1a04000 	mov	r4, r0
        209770:	e1a05001 	mov	r5, r1
        209774:	e24dd018 	sub	sp, sp, #24	; 0x18
        209778:	e3a00008 	mov	r0, #8	; 0x8
        20977c:	e3a06000 	mov	r6, #0	; 0x0
        209780:	e58d0004 	str	r0, [sp, #4]
        209784:	e52d606c 	str	r6, [sp, -#108]!
        209788:	e08d0000 	add	r0, sp, r0
        20978c:	eb66a478 	bl	1bb2974 <$setjmp>
        209790:	e3300000 	teq	r0, #0	; 0x0
        209794:	1a00000a 	bne	2097c4 <TCommServer::GetResponse(long *)+0x64>
        209798:	e1a0000d 	mov	r0, sp
        20979c:	eb675a36 	bl	1be007c <$AddExceptionHandler>
        2097a0:	e28d306c 	add	r3, sp, #108	; 0x6c
        2097a4:	e28d2070 	add	r2, sp, #112	; 0x70
        2097a8:	e28d1074 	add	r1, sp, #116	; 0x74
        2097ac:	e594c000 	ldr	ip, [r4]
        2097b0:	e1a0000c 	mov	r0, ip
        2097b4:	e59cc000 	ldr	ip, [ip]
        2097b8:	e1a0e00f 	mov	lr, pc
        2097bc:	e28cf014 	add	pc, ip, #20	; 0x14
        2097c0:	ea00000c 	b	2097f8 <TCommServer::GetResponse(long *)+0x98>
        2097c4:	e59d0060 	ldr	r0, [sp, #96]
        2097c8:	e59f101c 	ldr	r1, [pc, #1c]	; 2097ec <TCommServer::GetResponse(long *)+0x8c>
        2097cc:	e5911000 	ldr	r1, [r1]
        2097d0:	eb67666f 	bl	1be3194 <$Subexception>
        2097d4:	e3300000 	teq	r0, #0	; 0x0
        2097d8:	0a000004 	beq	2097f0 <TCommServer::GetResponse(long *)+0x90>
        2097dc:	e1a00004 	mov	r0, r4
        2097e0:	e59d1064 	ldr	r1, [sp, #100]
        2097e4:	eb65ea8e 	bl	1b84224 <TCommServer::$TestPipeExceptionHandler(long)>
        2097e8:	ea000002 	b	2097f8 <TCommServer::GetResponse(long *)+0x98>
        2097ec:	00371324 	eoreqs	r1, r7, r4, lsr #6
        2097f0:	e1a0000d 	mov	r0, sp
        2097f4:	eb676256 	bl	1be2154 <$NextHandler>
        2097f8:	e1a0000d 	mov	r0, sp
        2097fc:	eb675e2d 	bl	1be10b8 <$ExitHandler>
        209800:	e28dd06c 	add	sp, sp, #108	; 0x6c
        209804:	e59d0008 	ldr	r0, [sp, #8]
        209808:	e59fc040 	ldr	ip, [pc, #40]	; 209850 <TCommServer::GetResponse(long *)+0xf0>
        20980c:	e130000c 	teq	r0, ip
        209810:	059d000c 	ldreq	r0, [sp, #12]
        209814:	059fc038 	ldreq	ip, [pc, #38]	; 209854 <TCommServer::GetResponse(long *)+0xf4>
        209818:	0130000c 	teqeq	r0, ip
        20981c:	11a00006 	movne	r0, r6
        209820:	1a000009 	bne	20984c <TCommServer::GetResponse(long *)+0xec>
        209824:	e28d1010 	add	r1, sp, #16	; 0x10
        209828:	e1a00004 	mov	r0, r4
        20982c:	e3a03000 	mov	r3, #0	; 0x0
        209830:	e3a02008 	mov	r2, #8	; 0x8
        209834:	eb000007 	bl	209858 <TCommServer::ReadChunk(void *, long, unsigned char)>
        209838:	e59d0014 	ldr	r0, [sp, #20]
        20983c:	e3350000 	teq	r5, #0	; 0x0
        209840:	e5a40010 	str	r0, [r4, #16]!	; fField16
        209844:	15850000 	strne	r0, [r5]
        209848:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        20984c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        209850:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        209854:	74737672 	ldrvcbt	r7, [r3], -#1650
    */
}

/**
 * Symbol: TCommServer::ReadChunk(void *, long, unsigned char)
 * Address: 00209858
 */
TCommServer::ReadChunk(void *, long, unsigned char) {
    /*
        209858:	e1a0c00d 	mov	ip, sp
        20985c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        209860:	e24cb004 	sub	fp, ip, #4	; 0x4
        209864:	e1a04000 	mov	r4, r0
        209868:	e1a06001 	mov	r6, r1
        20986c:	e1a05002 	mov	r5, r2
        209870:	e20370ff 	and	r7, r3, #255	; 0xff
        209874:	e3a00000 	mov	r0, #0	; 0x0
        209878:	e52d2008 	str	r2, [sp, -#8]!
        20987c:	e52d006c 	str	r0, [sp, -#108]!
        209880:	e28d0008 	add	r0, sp, #8	; 0x8
        209884:	eb66a43a 	bl	1bb2974 <$setjmp>
        209888:	e3300000 	teq	r0, #0	; 0x0
        20988c:	1a00000a 	bne	2098bc <TCommServer::ReadChunk(void *, long, unsigned char)+0x64>
        209890:	e1a0000d 	mov	r0, sp
        209894:	eb6759f8 	bl	1be007c <$AddExceptionHandler>
        209898:	e28d3070 	add	r3, sp, #112	; 0x70
        20989c:	e28d206c 	add	r2, sp, #108	; 0x6c
        2098a0:	e1a01006 	mov	r1, r6
        2098a4:	e594c000 	ldr	ip, [r4]
        2098a8:	e1a0000c 	mov	r0, ip
        2098ac:	e59cc000 	ldr	ip, [ip]
        2098b0:	e1a0e00f 	mov	lr, pc
        2098b4:	e28cf014 	add	pc, ip, #20	; 0x14
        2098b8:	ea00000c 	b	2098f0 <TCommServer::ReadChunk(void *, long, unsigned char)+0x98>
        2098bc:	e59d0060 	ldr	r0, [sp, #96]
        2098c0:	e59f101c 	ldr	r1, [pc, #1c]	; 2098e4 <TCommServer::ReadChunk(void *, long, unsigned char)+0x8c>
        2098c4:	e5911000 	ldr	r1, [r1]
        2098c8:	eb676631 	bl	1be3194 <$Subexception>
        2098cc:	e3300000 	teq	r0, #0	; 0x0
        2098d0:	0a000004 	beq	2098e8 <TCommServer::ReadChunk(void *, long, unsigned char)+0x90>
        2098d4:	e1a00004 	mov	r0, r4
        2098d8:	e59d1064 	ldr	r1, [sp, #100]
        2098dc:	eb65ea50 	bl	1b84224 <TCommServer::$TestPipeExceptionHandler(long)>
        2098e0:	ea000002 	b	2098f0 <TCommServer::ReadChunk(void *, long, unsigned char)+0x98>
        2098e4:	00371324 	eoreqs	r1, r7, r4, lsr #6
        2098e8:	e1a0000d 	mov	r0, sp
        2098ec:	eb676218 	bl	1be2154 <$NextHandler>
        2098f0:	e1a0000d 	mov	r0, sp
        2098f4:	eb675def 	bl	1be10b8 <$ExitHandler>
        2098f8:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2098fc:	e3370000 	teq	r7, #0	; 0x0
        209900:	11a01005 	movne	r1, r5
        209904:	11a00004 	movne	r0, r4
        209908:	1b00002d 	blne	2099c4 <TCommServer::FlushPadding(unsigned long)>
        20990c:	e5dd0004 	ldrb	r0, [sp, #4]
        209910:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCommServer::ReadString(char *, unsigned long, unsigned char)
 * Address: 00209914
 */
TCommServer::ReadString(char *, unsigned long, unsigned char) {
    /*
        209914:	e1a0c00d 	mov	ip, sp
        209918:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20991c:	e24cb004 	sub	fp, ip, #4	; 0x4
        209920:	e1a06000 	mov	r6, r0
        209924:	e1a04001 	mov	r4, r1
        209928:	e1a05002 	mov	r5, r2
        20992c:	e20300ff 	and	r0, r3, #255	; 0xff
        209930:	e3a08000 	mov	r8, #0	; 0x0
        209934:	e3a07000 	mov	r7, #0	; 0x0
        209938:	e3a09000 	mov	r9, #0	; 0x0
        20993c:	e242a001 	sub	sl, r2, #1	; 0x1
        209940:	e52d0004 	str	r0, [sp, -#4]!
        209944:	ea000012 	b	209994 <TCommServer::ReadString(char *, unsigned long, unsigned char)+0x80>
        209948:	e0841007 	add	r1, r4, r7
        20994c:	e1a00006 	mov	r0, r6
        209950:	e3a03000 	mov	r3, #0	; 0x0
        209954:	e3a02001 	mov	r2, #1	; 0x1
        209958:	ebffffbe 	bl	209858 <TCommServer::ReadChunk(void *, long, unsigned char)>
        20995c:	e7d41007 	ldrb	r1, [r4, r7]
        209960:	e3310000 	teq	r1, #0	; 0x0
        209964:	03a09001 	moveq	r9, #1	; 0x1
        209968:	e3300000 	teq	r0, #0	; 0x0
        20996c:	13e08001 	mvnne	r8, #1	; 0x1
        209970:	1a000004 	bne	209988 <TCommServer::ReadString(char *, unsigned long, unsigned char)+0x74>
        209974:	e13a0007 	teq	sl, r7
        209978:	03e08002 	mvneq	r8, #2	; 0x2
        20997c:	0a000001 	beq	209988 <TCommServer::ReadString(char *, unsigned long, unsigned char)+0x74>
        209980:	e3380000 	teq	r8, #0	; 0x0
        209984:	0a000001 	beq	209990 <TCommServer::ReadString(char *, unsigned long, unsigned char)+0x7c>
        209988:	e3a00000 	mov	r0, #0	; 0x0
        20998c:	e7c40007 	strb	r0, [r4, r7]
        209990:	e2877001 	add	r7, r7, #1	; 0x1
        209994:	e1570005 	cmp	r7, r5
        209998:	2a000002 	bcs	2099a8 <TCommServer::ReadString(char *, unsigned long, unsigned char)+0x94>
        20999c:	e3390000 	teq	r9, #0	; 0x0
        2099a0:	03380000 	teqeq	r8, #0	; 0x0
        2099a4:	0affffe7 	beq	209948 <TCommServer::ReadString(char *, unsigned long, unsigned char)+0x34>
        2099a8:	e59d0000 	ldr	r0, [sp]
        2099ac:	e3300000 	teq	r0, #0	; 0x0
        2099b0:	11a01007 	movne	r1, r7
        2099b4:	11a00006 	movne	r0, r6
        2099b8:	1b000001 	blne	2099c4 <TCommServer::FlushPadding(unsigned long)>
        2099bc:	e1a00008 	mov	r0, r8
        2099c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCommServer::FlushPadding(unsigned long)
 * Address: 002099c4
 */
TCommServer::FlushPadding(unsigned long) {
    /*
        2099c4:	e1a0c00d 	mov	ip, sp
        2099c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2099cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2099d0:	e1a04000 	mov	r4, r0
        2099d4:	e2010003 	and	r0, r1, #3	; 0x3
        2099d8:	e52d0004 	str	r0, [sp, -#4]!
        2099dc:	e3500000 	cmp	r0, #0	; 0x0
        2099e0:	da000023 	ble	209a74 <TCommServer::FlushPadding(unsigned long)+0xb0>
        2099e4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2099e8:	e2600004 	rsb	r0, r0, #4	; 0x4
        2099ec:	e58d0008 	str	r0, [sp, #8]
        2099f0:	e3a00000 	mov	r0, #0	; 0x0
        2099f4:	e52d006c 	str	r0, [sp, -#108]!
        2099f8:	e28d0008 	add	r0, sp, #8	; 0x8
        2099fc:	eb66a3dc 	bl	1bb2974 <$setjmp>
        209a00:	e3300000 	teq	r0, #0	; 0x0
        209a04:	1a00000a 	bne	209a34 <TCommServer::FlushPadding(unsigned long)+0x70>
        209a08:	e1a0000d 	mov	r0, sp
        209a0c:	eb67599a 	bl	1be007c <$AddExceptionHandler>
        209a10:	e28d306c 	add	r3, sp, #108	; 0x6c
        209a14:	e28d2074 	add	r2, sp, #116	; 0x74
        209a18:	e28d1070 	add	r1, sp, #112	; 0x70
        209a1c:	e594c000 	ldr	ip, [r4]
        209a20:	e1a0000c 	mov	r0, ip
        209a24:	e59cc000 	ldr	ip, [ip]
        209a28:	e1a0e00f 	mov	lr, pc
        209a2c:	e28cf014 	add	pc, ip, #20	; 0x14
        209a30:	ea00000c 	b	209a68 <TCommServer::FlushPadding(unsigned long)+0xa4>
        209a34:	e59d0060 	ldr	r0, [sp, #96]
        209a38:	e59f101c 	ldr	r1, [pc, #1c]	; 209a5c <TCommServer::FlushPadding(unsigned long)+0x98>
        209a3c:	e5911000 	ldr	r1, [r1]
        209a40:	eb6765d3 	bl	1be3194 <$Subexception>
        209a44:	e3300000 	teq	r0, #0	; 0x0
        209a48:	0a000004 	beq	209a60 <TCommServer::FlushPadding(unsigned long)+0x9c>
        209a4c:	e1a00004 	mov	r0, r4
        209a50:	e59d1064 	ldr	r1, [sp, #100]
        209a54:	eb65e9f2 	bl	1b84224 <TCommServer::$TestPipeExceptionHandler(long)>
        209a58:	ea000002 	b	209a68 <TCommServer::FlushPadding(unsigned long)+0xa4>
        209a5c:	00371324 	eoreqs	r1, r7, r4, lsr #6
        209a60:	e1a0000d 	mov	r0, sp
        209a64:	eb6761ba 	bl	1be2154 <$NextHandler>
        209a68:	e1a0000d 	mov	r0, sp
        209a6c:	eb675d91 	bl	1be10b8 <$ExitHandler>
        209a70:	e28dd074 	add	sp, sp, #116	; 0x74
        209a74:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCommServer::TestPipeExceptionHandler(long)
 * Address: 00209a78
 */
TCommServer::TestPipeExceptionHandler(long) {
    /*
        209a78:	e5a010dc 	str	r1, [r0, #220]!	; fField220
        209a7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommServer::SetBusy(unsigned char)
 * Address: 00209a80
 */
TCommServer::SetBusy(unsigned char) {
    /*
        209a80:	e5c010e0 	strb	r1, [r0, #224]	; fField224
        209a84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommServer::IsBusy(void)
 * Address: 00209a88
 */
TCommServer::IsBusy(void) {
    /*
        209a88:	e5d000e0 	ldrb	r0, [r0, #224]	; fField224
        209a8c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCommServer::SetTestServerName(char *, char *)
 * Address: 00209a90
 */
TCommServer::SetTestServerName(char *, char *) {
    /*
        209a90:	e1a0c00d 	mov	ip, sp
        209a94:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        209a98:	e24cb004 	sub	fp, ip, #4	; 0x4
        209a9c:	e1a05000 	mov	r5, r0
        209aa0:	e1a04002 	mov	r4, r2
        209aa4:	e3310000 	teq	r1, #0	; 0x0
        209aa8:	12850056 	addne	r0, r5, #86	; 0x56
        209aac:	1b67932a 	blne	1bee75c <$Ustrcpy>
        209ab0:	e2850098 	add	r0, r5, #152	; 0x98
        209ab4:	e3340000 	teq	r4, #0	; 0x0
        209ab8:	028f1f02 	addeq	r1, pc, #8	; 0x8
        209abc:	11a01004 	movne	r1, r4
        209ac0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        209ac4:	ea679324 	b	1bee75c <$Ustrcpy>
        209ac8:	002a0000 	eoreq	r0, sl, r0
        209acc:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TCommServer::ConnectToTestServer(TEzEndpointPipe **)
 * Address: 00209ad0
 */
TCommServer::ConnectToTestServer(TEzEndpointPipe **) {
    /*
        209ad0:	e1a0c00d 	mov	ip, sp
        209ad4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        209ad8:	e24cb004 	sub	fp, ip, #4	; 0x4
        209adc:	e1a04000 	mov	r4, r0
        209ae0:	e1a05001 	mov	r5, r1
        209ae4:	e24dd0c0 	sub	sp, sp, #192	; 0xc0
        209ae8:	e3a07003 	mov	r7, #3	; 0x3
        209aec:	e3a08000 	mov	r8, #0	; 0x0
        209af0:	e5818000 	str	r8, [r1]
        209af4:	e5900056 	ldr	r0, [r0, #86]	; fField86
        209af8:	e1b00820 	movs	r0, r0, lsr #16
        209afc:	03e00000 	mvneq	r0, #0	; 0x0
        209b00:	0a000063 	beq	209c94 <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x1c4>
        209b04:	e3a00000 	mov	r0, #0	; 0x0
        209b08:	eb66aff9 	bl	1bb5af4 <TEzEndpointPipe::$__ct(void)>
        209b0c:	e5840000 	str	r0, [r4]
        209b10:	e3300000 	teq	r0, #0	; 0x0
        209b14:	03e00001 	mvneq	r0, #1	; 0x1
        209b18:	0a00005d 	beq	209c94 <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x1c4>
        209b1c:	e5940056 	ldr	r0, [r4, #86]	; fField86
        209b20:	e1a00820 	mov	r0, r0, lsr #16
        209b24:	e330002a 	teq	r0, #42	; 0x2a
        209b28:	0594005a 	ldreq	r0, [r4, #90]	; fField90
        209b2c:	01a00820 	moveq	r0, r0, lsr #16
        209b30:	03300000 	teqeq	r0, #0	; 0x0
        209b34:	1a00000c 	bne	209b6c <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x9c>
        209b38:	e5940058 	ldr	r0, [r4, #88]	; fField88
        209b3c:	e1a00820 	mov	r0, r0, lsr #16
        209b40:	e3500030 	cmp	r0, #48	; 0x30
        209b44:	ba000001 	blt	209b50 <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x80>
        209b48:	e3500039 	cmp	r0, #57	; 0x39
        209b4c:	b2407030 	sublt	r7, r0, #48	; 0x30
        209b50:	e3a00008 	mov	r0, #8	; 0x8
        209b54:	eb676174 	bl	1be212c <$NewHandle>
        209b58:	e1a06000 	mov	r6, r0
        209b5c:	e5900000 	ldr	r0, [r0]
        209b60:	e5c08001 	strb	r8, [r0, #1]
        209b64:	e5c08000 	strb	r8, [r0]
        209b68:	ea000024 	b	209c00 <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x130>
        209b6c:	e3a07001 	mov	r7, #1	; 0x1
        209b70:	e3a00000 	mov	r0, #0	; 0x0
        209b74:	e08d1080 	add	r1, sp, r0, lsl #1
        209b78:	e5c18001 	strb	r8, [r1, #1]
        209b7c:	e5c18000 	strb	r8, [r1]
        209b80:	e2800001 	add	r0, r0, #1	; 0x1
        209b84:	e3500060 	cmp	r0, #96	; 0x60
        209b88:	3afffff9 	bcc	209b74 <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0xa4>
        209b8c:	e2841056 	add	r1, r4, #86	; 0x56
        209b90:	e1a0000d 	mov	r0, sp
        209b94:	eb6792f0 	bl	1bee75c <$Ustrcpy>
        209b98:	e1a0000d 	mov	r0, sp
        209b9c:	eb6792ef 	bl	1bee760 <$Ustrlen>
        209ba0:	e08d0080 	add	r0, sp, r0, lsl #1
        209ba4:	e3a0103a 	mov	r1, #58	; 0x3a
        209ba8:	e5c01001 	strb	r1, [r0, #1]
        209bac:	e5c08000 	strb	r8, [r0]
        209bb0:	e2841014 	add	r1, r4, #20	; 0x14
        209bb4:	e1a0000d 	mov	r0, sp
        209bb8:	eb6792e4 	bl	1bee750 <$Ustrcat>
        209bbc:	e1a0000d 	mov	r0, sp
        209bc0:	eb6792e6 	bl	1bee760 <$Ustrlen>
        209bc4:	e08d1080 	add	r1, sp, r0, lsl #1
        209bc8:	e3a00040 	mov	r0, #64	; 0x40
        209bcc:	e5c10001 	strb	r0, [r1, #1]
        209bd0:	e5c18000 	strb	r8, [r1]
        209bd4:	e2841098 	add	r1, r4, #152	; 0x98
        209bd8:	e1a0000d 	mov	r0, sp
        209bdc:	eb6792db 	bl	1bee750 <$Ustrcat>
        209be0:	e3a000c0 	mov	r0, #192	; 0xc0
        209be4:	eb676150 	bl	1be212c <$NewHandle>
        209be8:	e1b06000 	movs	r6, r0
        209bec:	03e00002 	mvneq	r0, #2	; 0x2
        209bf0:	0a000027 	beq	209c94 <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x1c4>
        209bf4:	e1a0100d 	mov	r1, sp
        209bf8:	e5960000 	ldr	r0, [r6]
        209bfc:	eb6792d6 	bl	1bee75c <$Ustrcpy>
        209c00:	e52d806c 	str	r8, [sp, -#108]!
        209c04:	e28d0008 	add	r0, sp, #8	; 0x8
        209c08:	eb66a359 	bl	1bb2974 <$setjmp>
        209c0c:	e3300000 	teq	r0, #0	; 0x0
        209c10:	1a000008 	bne	209c38 <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x168>
        209c14:	e1a0000d 	mov	r0, sp
        209c18:	eb675917 	bl	1be007c <$AddExceptionHandler>
        209c1c:	e1a02006 	mov	r2, r6
        209c20:	e1a01007 	mov	r1, r7
        209c24:	e3a0382f 	mov	r3, #3080192	; 0x2f0000
        209c28:	e283340d 	add	r3, r3, #218103808	; 0xd000000
        209c2c:	e5940000 	ldr	r0, [r4]
        209c30:	eb66c014 	bl	1bb9c88 <TEzEndpointPipe::$Init(ConnectionType, char **, unsigned long)>
        209c34:	ea00000c 	b	209c6c <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x19c>
        209c38:	e59d0060 	ldr	r0, [sp, #96]
        209c3c:	e59f101c 	ldr	r1, [pc, #1c]	; 209c60 <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x190>
        209c40:	e5911000 	ldr	r1, [r1]
        209c44:	eb676552 	bl	1be3194 <$Subexception>
        209c48:	e3300000 	teq	r0, #0	; 0x0
        209c4c:	0a000004 	beq	209c64 <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x194>
        209c50:	e1a00004 	mov	r0, r4
        209c54:	e59d1064 	ldr	r1, [sp, #100]
        209c58:	eb65e971 	bl	1b84224 <TCommServer::$TestPipeExceptionHandler(long)>
        209c5c:	ea000002 	b	209c6c <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x19c>
        209c60:	00371324 	eoreqs	r1, r7, r4, lsr #6
        209c64:	e1a0000d 	mov	r0, sp
        209c68:	eb676139 	bl	1be2154 <$NextHandler>
        209c6c:	e1a0000d 	mov	r0, sp
        209c70:	eb675d10 	bl	1be10b8 <$ExitHandler>
        209c74:	e28dd06c 	add	sp, sp, #108	; 0x6c
        209c78:	e1a00004 	mov	r0, r4
        209c7c:	e59f2014 	ldr	r2, [pc, #14]	; 209c98 <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x1c8>
        209c80:	e59f1014 	ldr	r1, [pc, #14]	; 209c9c <TCommServer::ConnectToTestServer(TEzEndpointPipe **)+0x1cc>
        209c84:	eb6254a5 	bl	1a9ef20 <TEzPipeProtocol::$ProtocolInit(unsigned long, unsigned long)>
        209c88:	e5940000 	ldr	r0, [r4]
        209c8c:	e5850000 	str	r0, [r5]
        209c90:	e1a00008 	mov	r0, r8
        209c94:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        209c98:	74616774 	strvcbt	r6, [r1], -#1908
        209c9c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
    */
}

/**
 * Symbol: TCommServer::DisconnectFromTestServer(void)
 * Address: 00209ca0
 */
TCommServer::DisconnectFromTestServer(void) {
    /*
        209ca0:	e1a0c00d 	mov	ip, sp
        209ca4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        209ca8:	e24cb004 	sub	fp, ip, #4	; 0x4
        209cac:	e1a04000 	mov	r4, r0
        209cb0:	e5900000 	ldr	r0, [r0]
        209cb4:	e3300000 	teq	r0, #0	; 0x0
        209cb8:	03e00000 	mvneq	r0, #0	; 0x0
        209cbc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        209cc0:	e3a05000 	mov	r5, #0	; 0x0
        209cc4:	e52d506c 	str	r5, [sp, -#108]!
        209cc8:	e28d0008 	add	r0, sp, #8	; 0x8
        209ccc:	eb66a328 	bl	1bb2974 <$setjmp>
        209cd0:	e3300000 	teq	r0, #0	; 0x0
        209cd4:	1a000005 	bne	209cf0 <TCommServer::DisconnectFromTestServer(void)+0x50>
        209cd8:	e1a0000d 	mov	r0, sp
        209cdc:	eb6758e6 	bl	1be007c <$AddExceptionHandler>
        209ce0:	e5940000 	ldr	r0, [r4]
        209ce4:	eb66c41c 	bl	1bbad5c <TEzEndpointPipe::$TearDown(void)>
        209ce8:	e1a06000 	mov	r6, r0
        209cec:	ea00000c 	b	209d24 <TCommServer::DisconnectFromTestServer(void)+0x84>
        209cf0:	e59d0060 	ldr	r0, [sp, #96]
        209cf4:	e59f101c 	ldr	r1, [pc, #1c]	; 209d18 <TCommServer::DisconnectFromTestServer(void)+0x78>
        209cf8:	e5911000 	ldr	r1, [r1]
        209cfc:	eb676524 	bl	1be3194 <$Subexception>
        209d00:	e3300000 	teq	r0, #0	; 0x0
        209d04:	0a000004 	beq	209d1c <TCommServer::DisconnectFromTestServer(void)+0x7c>
        209d08:	e1a00004 	mov	r0, r4
        209d0c:	e59d1064 	ldr	r1, [sp, #100]
        209d10:	eb65e943 	bl	1b84224 <TCommServer::$TestPipeExceptionHandler(long)>
        209d14:	ea000002 	b	209d24 <TCommServer::DisconnectFromTestServer(void)+0x84>
        209d18:	00371324 	eoreqs	r1, r7, r4, lsr #6
        209d1c:	e1a0000d 	mov	r0, sp
        209d20:	eb67610b 	bl	1be2154 <$NextHandler>
        209d24:	e1a0000d 	mov	r0, sp
        209d28:	eb675ce2 	bl	1be10b8 <$ExitHandler>
        209d2c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        209d30:	e5940000 	ldr	r0, [r4]
        209d34:	e3300000 	teq	r0, #0	; 0x0
        209d38:	0a000002 	beq	209d48 <TCommServer::DisconnectFromTestServer(void)+0xa8>
        209d3c:	e3a01001 	mov	r1, #1	; 0x1
        209d40:	e1a0e00f 	mov	lr, pc
        209d44:	e590f000 	ldr	pc, [r0]
        209d48:	e1a00006 	mov	r0, r6
        209d4c:	e5845000 	str	r5, [r4]
        209d50:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCommServer::SendCommandHeader(unsigned long, unsigned char)
 * Address: 00209d54
 */
TCommServer::SendCommandHeader(unsigned long, unsigned char) {
    /*
        209d54:	e20220ff 	and	r2, r2, #255	; 0xff
        209d58:	ea62bfde 	b	1ab9cd8 <TEzPipeProtocol::$SendDockerHeader(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TCommServer::SendChunk(void *, long, unsigned char)
 * Address: 00209d5c
 */
TCommServer::SendChunk(void *, long, unsigned char) {
    /*
        209d5c:	e1a0c00d 	mov	ip, sp
        209d60:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        209d64:	e24cb004 	sub	fp, ip, #4	; 0x4
        209d68:	e1a04000 	mov	r4, r0
        209d6c:	e1a06001 	mov	r6, r1
        209d70:	e1a05002 	mov	r5, r2
        209d74:	e20390ff 	and	r9, r3, #255	; 0xff
        209d78:	e3a08000 	mov	r8, #0	; 0x0
        209d7c:	e52d806c 	str	r8, [sp, -#108]!
        209d80:	e28d0008 	add	r0, sp, #8	; 0x8
        209d84:	eb66a2fa 	bl	1bb2974 <$setjmp>
        209d88:	e59f703c 	ldr	r7, [pc, #3c]	; 209dcc <TCommServer::SendChunk(void *, long, unsigned char)+0x70>
        209d8c:	e3300000 	teq	r0, #0	; 0x0
        209d90:	1a00000e 	bne	209dd0 <TCommServer::SendChunk(void *, long, unsigned char)+0x74>
        209d94:	e1a0000d 	mov	r0, sp
        209d98:	eb6758b7 	bl	1be007c <$AddExceptionHandler>
        209d9c:	e1a01005 	mov	r1, r5
        209da0:	e5940000 	ldr	r0, [r4]
        209da4:	eb676d3d 	bl	1be52a0 <CPipe::$__ls(long)>
        209da8:	e1a02005 	mov	r2, r5
        209dac:	e1a01006 	mov	r1, r6
        209db0:	e594c000 	ldr	ip, [r4]
        209db4:	e1a0000c 	mov	r0, ip
        209db8:	e3a03000 	mov	r3, #0	; 0x0
        209dbc:	e59cc000 	ldr	ip, [ip]
        209dc0:	e1a0e00f 	mov	lr, pc
        209dc4:	e28cf018 	add	pc, ip, #24	; 0x18
        209dc8:	ea00000b 	b	209dfc <TCommServer::SendChunk(void *, long, unsigned char)+0xa0>
        209dcc:	00371324 	eoreqs	r1, r7, r4, lsr #6
        209dd0:	e59d0060 	ldr	r0, [sp, #96]
        209dd4:	e5971000 	ldr	r1, [r7]
        209dd8:	eb6764ed 	bl	1be3194 <$Subexception>
        209ddc:	e3300000 	teq	r0, #0	; 0x0
        209de0:	0a000003 	beq	209df4 <TCommServer::SendChunk(void *, long, unsigned char)+0x98>
        209de4:	e1a00004 	mov	r0, r4
        209de8:	e59d1064 	ldr	r1, [sp, #100]
        209dec:	eb65e90c 	bl	1b84224 <TCommServer::$TestPipeExceptionHandler(long)>
        209df0:	ea000001 	b	209dfc <TCommServer::SendChunk(void *, long, unsigned char)+0xa0>
        209df4:	e1a0000d 	mov	r0, sp
        209df8:	eb6760d5 	bl	1be2154 <$NextHandler>
        209dfc:	e1a0000d 	mov	r0, sp
        209e00:	eb675cac 	bl	1be10b8 <$ExitHandler>
        209e04:	e28dd06c 	add	sp, sp, #108	; 0x6c
        209e08:	e1a01005 	mov	r1, r5
        209e0c:	e1a00004 	mov	r0, r4
        209e10:	eb65e4f4 	bl	1b831e8 <TCommServer::$Pad(unsigned long)>
        209e14:	e3390000 	teq	r9, #0	; 0x0
        209e18:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        209e1c:	e52d806c 	str	r8, [sp, -#108]!
        209e20:	e28d0008 	add	r0, sp, #8	; 0x8
        209e24:	eb66a2d2 	bl	1bb2974 <$setjmp>
        209e28:	e3300000 	teq	r0, #0	; 0x0
        209e2c:	1a000006 	bne	209e4c <TCommServer::SendChunk(void *, long, unsigned char)+0xf0>
        209e30:	e1a0000d 	mov	r0, sp
        209e34:	eb675890 	bl	1be007c <$AddExceptionHandler>
        209e38:	e5940000 	ldr	r0, [r4]
        209e3c:	e5901000 	ldr	r1, [r0]
        209e40:	e1a0e00f 	mov	lr, pc
        209e44:	e281f020 	add	pc, r1, #32	; 0x20
        209e48:	ea00000a 	b	209e78 <TCommServer::SendChunk(void *, long, unsigned char)+0x11c>
        209e4c:	e59d0060 	ldr	r0, [sp, #96]
        209e50:	e5971000 	ldr	r1, [r7]
        209e54:	eb6764ce 	bl	1be3194 <$Subexception>
        209e58:	e3300000 	teq	r0, #0	; 0x0
        209e5c:	0a000003 	beq	209e70 <TCommServer::SendChunk(void *, long, unsigned char)+0x114>
        209e60:	e1a00004 	mov	r0, r4
        209e64:	e59d1064 	ldr	r1, [sp, #100]
        209e68:	eb65e8ed 	bl	1b84224 <TCommServer::$TestPipeExceptionHandler(long)>
        209e6c:	ea000001 	b	209e78 <TCommServer::SendChunk(void *, long, unsigned char)+0x11c>
        209e70:	e1a0000d 	mov	r0, sp
        209e74:	eb6760b6 	bl	1be2154 <$NextHandler>
        209e78:	e1a0000d 	mov	r0, sp
        209e7c:	eb675c8d 	bl	1be10b8 <$ExitHandler>
        209e80:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

