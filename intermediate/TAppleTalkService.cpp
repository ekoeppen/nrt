#include "include/TAppleTalkService.h"

/**
 * Symbol: Sizeof__17TAppleTalkServiceSFv
 * Address: 00032704
 */
void TAppleTalkService::Sizeof() {
    /*
         32704:	e3a00010 	mov	r0, #16	; 0x10
         32708:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppleTalkService::New(void)
 * Address: 0003270c
 */
TAppleTalkService::New(void) {
    /*
         3270c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppleTalkService::Delete(void)
 * Address: 00032710
 */
TAppleTalkService::Delete(void) {
    /*
         32710:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 00032714
 */
TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
         32714:	e1a0c00d 	mov	ip, sp
         32718:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         3271c:	e24cb004 	sub	fp, ip, #4	; 0x4
         32720:	e1a05000 	mov	r5, r0
         32724:	e1a04003 	mov	r4, r3
         32728:	e3a07000 	mov	r7, #0	; 0x0
         3272c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         32730:	e3a0a000 	mov	sl, #0	; 0x0
         32734:	e5cda004 	strb	sl, [sp, #4]
         32738:	e3a08000 	mov	r8, #0	; 0x0
         3273c:	e3a09000 	mov	r9, #0	; 0x0
         32740:	e40da01c 	str	sl, [sp], -#28
         32744:	e1a0000d 	mov	r0, sp
         32748:	eb6e0cea 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         3274c:	e1a0000d 	mov	r0, sp
         32750:	eb6e1931 	bl	1bb8c1c <TOptionIterator::$FirstOption(void)>
         32754:	e1b06000 	movs	r6, r0
         32758:	0a000018 	beq	327c0 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0xac>
         3275c:	e5960008 	ldr	r0, [r6, #8]
         32760:	e200043f 	and	r0, r0, #1056964608	; 0x3f000000
         32764:	e3300303 	teq	r0, #201326592	; 0xc000000
         32768:	05960000 	ldreq	r0, [r6]
         3276c:	059fc0d8 	ldreq	ip, [pc, #d8]	; 3284c <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x138>
         32770:	0130000c 	teqeq	r0, ip
         32774:	01a00004 	moveq	r0, r4
         32778:	0596100c 	ldreq	r1, [r6, #12]
         3277c:	0b6e216f 	bleq	1bbad40 <TServiceInfo::$SetServiceId(unsigned long)>
         32780:	e5960008 	ldr	r0, [r6, #8]
         32784:	e200043f 	and	r0, r0, #1056964608	; 0x3f000000
         32788:	e3300303 	teq	r0, #201326592	; 0xc000000
         3278c:	05961000 	ldreq	r1, [r6]
         32790:	059fc0b8 	ldreq	ip, [pc, #b8]	; 32850 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x13c>
         32794:	0131000c 	teqeq	r1, ip
         32798:	01a09006 	moveq	r9, r6
         3279c:	e3300303 	teq	r0, #201326592	; 0xc000000
         327a0:	05960000 	ldreq	r0, [r6]
         327a4:	059fc0a8 	ldreq	ip, [pc, #a8]	; 32854 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x140>
         327a8:	0130000c 	teqeq	r0, ip
         327ac:	01a08006 	moveq	r8, r6
         327b0:	e1a0000d 	mov	r0, sp
         327b4:	eb6e1d44 	bl	1bb9ccc <TOptionIterator::$NextOption(void)>
         327b8:	e1b06000 	movs	r6, r0
         327bc:	1affffe6 	bne	3275c <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x48>
         327c0:	e1a0000d 	mov	r0, sp
         327c4:	e3a01000 	mov	r1, #0	; 0x0
         327c8:	eb6e10db 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         327cc:	e28dd01c 	add	sp, sp, #28	; 0x1c
         327d0:	e1a0000d 	mov	r0, sp
         327d4:	eb69089f 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         327d8:	e1b06000 	movs	r6, r0
         327dc:	0a0000d8 	beq	32b44 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x430>
         327e0:	e24dde5f 	sub	sp, sp, #1520	; 0x5f0
         327e4:	e1a0000d 	mov	r0, sp
         327e8:	eb68fc43 	bl	1a718fc <TAppleTalkWorld::$__ct(void)>
         327ec:	e1a0000d 	mov	r0, sp
         327f0:	e3a03b05 	mov	r3, #5120	; 0x1400
         327f4:	e3a02001 	mov	r2, #1	; 0x1
         327f8:	e59f404c 	ldr	r4, [pc, #4c]	; 3284c <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x138>
         327fc:	e1a01004 	mov	r1, r4
         32800:	e59dc000 	ldr	ip, [sp]
         32804:	e1a0e00f 	mov	lr, pc
         32808:	e28cf044 	add	pc, ip, #68	; 0x44
         3280c:	e1b06000 	movs	r6, r0
         32810:	1a000003 	bne	32824 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x110>
         32814:	e28d0e5f 	add	r0, sp, #1520	; 0x5f0
         32818:	eb69088e 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         3281c:	e1b06000 	movs	r6, r0
         32820:	0a00000c 	beq	32858 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x144>
         32824:	e1a0000d 	mov	r0, sp
         32828:	e3a01000 	mov	r1, #0	; 0x0
         3282c:	e1a0e00f 	mov	lr, pc
         32830:	e59df000 	ldr	pc, [sp]
         32834:	e28d0e5f 	add	r0, sp, #1520	; 0x5f0
         32838:	e3a01000 	mov	r1, #0	; 0x0
         3283c:	eb6e6fb8 	bl	1bce724 <TUObject::$__dt(void)>
         32840:	e28ddf7f 	add	sp, sp, #508	; 0x1fc
         32844:	e28ddb01 	add	sp, sp, #1024	; 0x400
         32848:	ea0000aa 	b	32af8 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x3e4>
         3284c:	61746c6b 	cmnvs	r4, fp, ror #24
         32850:	6c696e6b 	stcvsl	14, cr6, [r9], -#428
         32854:	7379736e 	cmnvc	r9, #-1207959551	; 0xb8000001
         32858:	e24dd0f4 	sub	sp, sp, #244	; 0xf4
         3285c:	e28d0014 	add	r0, sp, #20	; 0x14
         32860:	eb6ec674 	bl	1be4238 <TAEvent::$__ct(void)>
         32864:	e59f604c 	ldr	r6, [pc, #4c]	; 328b8 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x1a4>
         32868:	e58d6014 	str	r6, [sp, #20]
         3286c:	e58da020 	str	sl, [sp, #32]
         32870:	e3a00005 	mov	r0, #5	; 0x5
         32874:	e58d0024 	str	r0, [sp, #36]
         32878:	e58d4018 	str	r4, [sp, #24]
         3287c:	e58da01c 	str	sl, [sp, #28]
         32880:	e1a0000d 	mov	r0, sp
         32884:	eb6ec66b 	bl	1be4238 <TAEvent::$__ct(void)>
         32888:	e58d6000 	str	r6, [sp]
         3288c:	e58da00c 	str	sl, [sp, #12]
         32890:	e58da008 	str	sl, [sp, #8]
         32894:	e59f0020 	ldr	r0, [pc, #20]	; 328bc <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x1a8>
         32898:	e3380000 	teq	r8, #0	; 0x0
         3289c:	e58d0028 	str	r0, [sp, #40]
         328a0:	0a000006 	beq	328c0 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x1ac>
         328a4:	e288100c 	add	r1, r8, #12	; 0xc
         328a8:	e28d002c 	add	r0, sp, #44	; 0x2c
         328ac:	e3a02063 	mov	r2, #99	; 0x63
         328b0:	eb6eefac 	bl	1bee768 <$Ustrncpy>
         328b4:	ea000003 	b	328c8 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x1b4>
         328b8:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         328bc:	64647020 	strvsbt	r7, [r4], -#32
         328c0:	e5cda02d 	strb	sl, [sp, #45]
         328c4:	e5cda02c 	strb	sl, [sp, #44]
         328c8:	e1a0000d 	mov	r0, sp
         328cc:	e3a01014 	mov	r1, #20	; 0x14
         328d0:	e3a02000 	mov	r2, #0	; 0x0
         328d4:	e3a0c000 	mov	ip, #0	; 0x0
         328d8:	e3a03000 	mov	r3, #0	; 0x0
         328dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         328e0:	e1a0300a 	mov	r3, sl
         328e4:	e1a0100c 	mov	r1, ip
         328e8:	e3a000e0 	mov	r0, #224	; 0xe0
         328ec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         328f0:	e28d3034 	add	r3, sp, #52	; 0x34
         328f4:	e92d0008 	stmdb	sp!, {r3}
         328f8:	e28d3e71 	add	r3, sp, #1808	; 0x710
         328fc:	e28d0fc2 	add	r0, sp, #776	; 0x308
         32900:	e2800b01 	add	r0, r0, #1024	; 0x400
         32904:	e3a02002 	mov	r2, #2	; 0x2
         32908:	e3a01001 	mov	r1, #1	; 0x1
         3290c:	eb6ea10e 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         32910:	e28dd024 	add	sp, sp, #36	; 0x24
         32914:	e1b06000 	movs	r6, r0
         32918:	059d6008 	ldreq	r6, [sp, #8]
         3291c:	03360000 	teqeq	r6, #0	; 0x0
         32920:	1a00006b 	bne	32ad4 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x3c0>
         32924:	e3a0001c 	mov	r0, #28	; 0x1c
         32928:	eb6e6f82 	bl	1bce738 <$__nw(unsigned int)>
         3292c:	e1b06000 	movs	r6, r0
         32930:	0a000009 	beq	3295c <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x248>
         32934:	e1a00006 	mov	r0, r6
         32938:	eb6ec63e 	bl	1be4238 <TAEvent::$__ct(void)>
         3293c:	e51f008c 	ldr	r0, [pc, #ffffff74]	; 328b8 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x1a4>
         32940:	e5860000 	str	r0, [r6]
         32944:	e586a00c 	str	sl, [r6, #12]
         32948:	e586a008 	str	sl, [r6, #8]
         3294c:	e59f0070 	ldr	r0, [pc, #70]	; 329c4 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x2b0>
         32950:	e5860004 	str	r0, [r6, #4]
         32954:	e3a00001 	mov	r0, #1	; 0x1
         32958:	e5860010 	str	r0, [r6, #16]
         3295c:	e1b08006 	movs	r8, r6
         32960:	0a00000b 	beq	32994 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x280>
         32964:	e3a00018 	mov	r0, #24	; 0x18
         32968:	eb6e6f72 	bl	1bce738 <$__nw(unsigned int)>
         3296c:	e1b06000 	movs	r6, r0
         32970:	0a000005 	beq	3298c <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x278>
         32974:	e1a00006 	mov	r0, r6
         32978:	eb6ec62e 	bl	1be4238 <TAEvent::$__ct(void)>
         3297c:	e51f00cc 	ldr	r0, [pc, #ffffff34]	; 328b8 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x1a4>
         32980:	e5860000 	str	r0, [r6]
         32984:	e586a00c 	str	sl, [r6, #12]
         32988:	e586a008 	str	sl, [r6, #8]
         3298c:	e1b0a006 	movs	sl, r6
         32990:	1a00000c 	bne	329c8 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x2b4>
         32994:	e3a060a8 	mov	r6, #168	; 0xa8
         32998:	e2466b07 	sub	r6, r6, #7168	; 0x1c00
         3299c:	e28d00f4 	add	r0, sp, #244	; 0xf4
         329a0:	e3a01000 	mov	r1, #0	; 0x0
         329a4:	e1a0e00f 	mov	lr, pc
         329a8:	e59df0f4 	ldr	pc, [sp, #244]
         329ac:	e28d0fb9 	add	r0, sp, #740	; 0x2e4
         329b0:	e2800b01 	add	r0, r0, #1024	; 0x400
         329b4:	e3a01000 	mov	r1, #0	; 0x0
         329b8:	eb6e6f59 	bl	1bce724 <TUObject::$__dt(void)>
         329bc:	e28dde6f 	add	sp, sp, #1776	; 0x6f0
         329c0:	ea00004e 	b	32b00 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x3ec>
         329c4:	6c617020 	stcvsl	0, cr7, [r1], -#128
         329c8:	e59f00ac 	ldr	r0, [pc, #ac]	; 32a7c <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x368>
         329cc:	e3390000 	teq	r9, #0	; 0x0
         329d0:	0a000002 	beq	329e0 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x2cc>
         329d4:	e5b9600c 	ldr	r6, [r9, #12]!
         329d8:	e1360000 	teq	r6, r0
         329dc:	1a000011 	bne	32a28 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x314>
         329e0:	e24dd014 	sub	sp, sp, #20	; 0x14
         329e4:	e28d0004 	add	r0, sp, #4	; 0x4
         329e8:	eb6e6b26 	bl	1bcd688 <TUNameServer::$__ct(void)>
         329ec:	e3a03000 	mov	r3, #0	; 0x0
         329f0:	e92d0008 	stmdb	sp!, {r3}
         329f4:	e28d3004 	add	r3, sp, #4	; 0x4
         329f8:	e28d0008 	add	r0, sp, #8	; 0x8
         329fc:	e28f2f1f 	add	r2, pc, #124	; 0x7c
         32a00:	e1a01004 	mov	r1, r4
         32a04:	eb02cdf7 	bl	e61e8 <TUConfigServer::GetDefaultConfig(unsigned long, char *, unsigned long *, unsigned long *)>
         32a08:	e28dd004 	add	sp, sp, #4	; 0x4
         32a0c:	e3300000 	teq	r0, #0	; 0x0
         32a10:	159f6074 	ldrne	r6, [pc, #74]	; 32a8c <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x378>
         32a14:	059d6000 	ldreq	r6, [sp]
         32a18:	e28d0004 	add	r0, sp, #4	; 0x4
         32a1c:	e3a01000 	mov	r1, #0	; 0x0
         32a20:	eb6e6f37 	bl	1bce704 <TUNameServer::$__dt(void)>
         32a24:	e28dd014 	add	sp, sp, #20	; 0x14
         32a28:	e3a00001 	mov	r0, #1	; 0x1
         32a2c:	e2888010 	add	r8, r8, #16	; 0x10
         32a30:	e8880041 	stmia	r8, {r0, r6}
         32a34:	e3a00000 	mov	r0, #0	; 0x0
         32a38:	e528400c 	str	r4, [r8, -#12]!
         32a3c:	e2488004 	sub	r8, r8, #4	; 0x4
         32a40:	eb674a22 	bl	1a052d0 <TAsyncServiceMessage::$__ct(void)>
         32a44:	e1b07000 	movs	r7, r0
         32a48:	1a000010 	bne	32a90 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x37c>
         32a4c:	e3a060a8 	mov	r6, #168	; 0xa8
         32a50:	e2466b07 	sub	r6, r6, #7168	; 0x1c00
         32a54:	e28d00f4 	add	r0, sp, #244	; 0xf4
         32a58:	e3a01000 	mov	r1, #0	; 0x0
         32a5c:	e1a0e00f 	mov	lr, pc
         32a60:	e59df0f4 	ldr	pc, [sp, #244]
         32a64:	e28d0fb9 	add	r0, sp, #740	; 0x2e4
         32a68:	e2800b01 	add	r0, r0, #1024	; 0x400
         32a6c:	e3a01000 	mov	r1, #0	; 0x0
         32a70:	eb6e6f2b 	bl	1bce724 <TUObject::$__dt(void)>
         32a74:	e28dde6f 	add	sp, sp, #1776	; 0x6f0
         32a78:	ea000038 	b	32b60 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x44c>
         32a7c:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
         32a80:	44656641 	strmibt	r6, [r5], -#1601	; fField1601
         32a84:	544c696e 	strplb	r6, [ip], -#2414
         32a88:	6b000000 	blvs	32a90 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x37c>
         32a8c:	6c6c6170 	stfvse	f6, [ip], -#448
         32a90:	e1a01005 	mov	r1, r5
         32a94:	e1a00007 	mov	r0, r7
         32a98:	eb674e2b 	bl	1a0634c <TAsyncServiceMessage::$Init(TCMService *)>
         32a9c:	e1b06000 	movs	r6, r0
         32aa0:	1a00000b 	bne	32ad4 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x3c0>
         32aa4:	e3a03000 	mov	r3, #0	; 0x0
         32aa8:	e3a02018 	mov	r2, #24	; 0x18
         32aac:	e1a0100a 	mov	r1, sl
         32ab0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         32ab4:	e1a02008 	mov	r2, r8
         32ab8:	e28d1e6f 	add	r1, sp, #1776	; 0x6f0
         32abc:	e1a00007 	mov	r0, r7
         32ac0:	e3a0301c 	mov	r3, #28	; 0x1c
         32ac4:	eb675231 	bl	1a07390 <TAsyncServiceMessage::$Send(TUPort *, void *, unsigned long, void *, unsigned long, unsigned long)>
         32ac8:	e28dd00c 	add	sp, sp, #12	; 0xc
         32acc:	e1b06000 	movs	r6, r0
         32ad0:	0a000010 	beq	32b18 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x404>
         32ad4:	e28d00f4 	add	r0, sp, #244	; 0xf4
         32ad8:	e3a01000 	mov	r1, #0	; 0x0
         32adc:	e1a0e00f 	mov	lr, pc
         32ae0:	e59df0f4 	ldr	pc, [sp, #244]
         32ae4:	e28d0fb9 	add	r0, sp, #740	; 0x2e4
         32ae8:	e2800b01 	add	r0, r0, #1024	; 0x400
         32aec:	e3a01000 	mov	r1, #0	; 0x0
         32af0:	eb6e6f0b 	bl	1bce724 <TUObject::$__dt(void)>
         32af4:	e28dde6f 	add	sp, sp, #1776	; 0x6f0
         32af8:	e3360000 	teq	r6, #0	; 0x0
         32afc:	0a000017 	beq	32b60 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x44c>
         32b00:	e3370000 	teq	r7, #0	; 0x0
         32b04:	0a000015 	beq	32b60 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x44c>
         32b08:	e1a00007 	mov	r0, r7
         32b0c:	e3a01001 	mov	r1, #1	; 0x1
         32b10:	eb6749f8 	bl	1a052f8 <TAsyncServiceMessage::$__dt(void)>
         32b14:	ea000011 	b	32b60 <TAppleTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x44c>
         32b18:	e3a04001 	mov	r4, #1	; 0x1
         32b1c:	e28d00f4 	add	r0, sp, #244	; 0xf4
         32b20:	e3a01000 	mov	r1, #0	; 0x0
         32b24:	e1a0e00f 	mov	lr, pc
         32b28:	e59df0f4 	ldr	pc, [sp, #244]
         32b2c:	e28d0fb9 	add	r0, sp, #740	; 0x2e4
         32b30:	e2800b01 	add	r0, r0, #1024	; 0x400
         32b34:	e3a01000 	mov	r1, #0	; 0x0
         32b38:	eb6e6ef9 	bl	1bce724 <TUObject::$__dt(void)>
         32b3c:	e1a00004 	mov	r0, r4
         32b40:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         32b44:	e1a00004 	mov	r0, r4
         32b48:	e59d1000 	ldr	r1, [sp]
         32b4c:	eb6e207a 	bl	1bbad3c <TServiceInfo::$SetPortId(unsigned long)>
         32b50:	e1a0000d 	mov	r0, sp
         32b54:	e3a01000 	mov	r1, #0	; 0x0
         32b58:	eb6e6ef1 	bl	1bce724 <TUObject::$__dt(void)>
         32b5c:	e28dd00c 	add	sp, sp, #12	; 0xc
         32b60:	e1a00006 	mov	r0, r6
         32b64:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TAppleTalkService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 00032b68
 */
TAppleTalkService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
         32b68:	e1a0c00d 	mov	ip, sp
         32b6c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         32b70:	e24cb004 	sub	fp, ip, #4	; 0x4
         32b74:	e1a05001 	mov	r5, r1
         32b78:	e1a04003 	mov	r4, r3
         32b7c:	e24dd008 	sub	sp, sp, #8	; 0x8
         32b80:	e3a07000 	mov	r7, #0	; 0x0
         32b84:	e5cd7004 	strb	r7, [sp, #4]
         32b88:	e58d7000 	str	r7, [sp]
         32b8c:	e1a0000d 	mov	r0, sp
         32b90:	eb6907b0 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         32b94:	e1b06000 	movs	r6, r0
         32b98:	1a000003 	bne	32bac <TAppleTalkService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)+0x44>
         32b9c:	e1a00004 	mov	r0, r4
         32ba0:	e59d1000 	ldr	r1, [sp]
         32ba4:	eb6e2064 	bl	1bbad3c <TServiceInfo::$SetPortId(unsigned long)>
         32ba8:	ea000004 	b	32bc0 <TAppleTalkService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)+0x58>
         32bac:	e1a00004 	mov	r0, r4
         32bb0:	e3a01000 	mov	r1, #0	; 0x0
         32bb4:	eb6e2060 	bl	1bbad3c <TServiceInfo::$SetPortId(unsigned long)>
         32bb8:	e3360000 	teq	r6, #0	; 0x0
         32bbc:	1a000024 	bne	32c54 <TAppleTalkService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)+0xec>
         32bc0:	e5b56008 	ldr	r6, [r5, #8]!
         32bc4:	e3360000 	teq	r6, #0	; 0x0
         32bc8:	0a000021 	beq	32c54 <TAppleTalkService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)+0xec>
         32bcc:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         32bd0:	e28d0014 	add	r0, sp, #20	; 0x14
         32bd4:	eb6ec597 	bl	1be4238 <TAEvent::$__ct(void)>
         32bd8:	e59f4088 	ldr	r4, [pc, #88]	; 32c68 <TAppleTalkService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)+0x100>
         32bdc:	e58d4014 	str	r4, [sp, #20]
         32be0:	e58d7020 	str	r7, [sp, #32]
         32be4:	e58d701c 	str	r7, [sp, #28]
         32be8:	e59f007c 	ldr	r0, [pc, #7c]	; 32c6c <TAppleTalkService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)+0x104>
         32bec:	e58d0018 	str	r0, [sp, #24]
         32bf0:	e3a00008 	mov	r0, #8	; 0x8
         32bf4:	e58d0024 	str	r0, [sp, #36]
         32bf8:	e1a0000d 	mov	r0, sp
         32bfc:	eb6ec58d 	bl	1be4238 <TAEvent::$__ct(void)>
         32c00:	e58d4000 	str	r4, [sp]
         32c04:	e58d700c 	str	r7, [sp, #12]
         32c08:	e58d7008 	str	r7, [sp, #8]
         32c0c:	e1a0000d 	mov	r0, sp
         32c10:	e3a01014 	mov	r1, #20	; 0x14
         32c14:	e3a02000 	mov	r2, #0	; 0x0
         32c18:	e3a0c000 	mov	ip, #0	; 0x0
         32c1c:	e3a03000 	mov	r3, #0	; 0x0
         32c20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         32c24:	e1a03007 	mov	r3, r7
         32c28:	e1a0100c 	mov	r1, ip
         32c2c:	e3a00014 	mov	r0, #20	; 0x14
         32c30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         32c34:	e28d3034 	add	r3, sp, #52	; 0x34
         32c38:	e92d0008 	stmdb	sp!, {r3}
         32c3c:	e28d304c 	add	r3, sp, #76	; 0x4c
         32c40:	e28d0050 	add	r0, sp, #80	; 0x50
         32c44:	e3a02002 	mov	r2, #2	; 0x2
         32c48:	e3a01001 	mov	r1, #1	; 0x1
         32c4c:	eb6ea03e 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         32c50:	e28dd050 	add	sp, sp, #80	; 0x50
         32c54:	e1a0000d 	mov	r0, sp
         32c58:	e3a01000 	mov	r1, #0	; 0x0
         32c5c:	eb6e6eb0 	bl	1bce724 <TUObject::$__dt(void)>
         32c60:	e1a00006 	mov	r0, r6
         32c64:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         32c68:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         32c6c:	61746c6b 	cmnvs	r4, fp, ror #24
    */
}

/**
 * Symbol: ClassInfo__17TAppleTalkServiceSFv
 * Address: 003852ac
 */
void TAppleTalkService::ClassInfo() {
    /*
        3852ac:	e24f0044 	sub	r0, pc, #68	; 0x44
        3852b0:	e1a0f00e 	mov	pc, lr
        3852b4:	e3a00000 	mov	r0, #0	; 0x0
        3852b8:	e1a0f00e 	mov	pc, lr
        3852bc:	54417070 	strplb	r7, [r1], -#112
        3852c0:	6c655461 	stcvsl	4, cr5, [r5], -#388
        3852c4:	6c6b5365 	stcvsl	3, cr5, [fp], -#404
        3852c8:	72766963 	rsbvcs	r6, r6, #1622016	; 0x18c000
        3852cc:	65005443 	strvs	r5, [r0, -#1091]	; fField1091
        3852d0:	4d536572 	ldcmil	5, cr6, [r3, -#456]
        3852d4:	76696365 	strvcbt	r6, [r9], -r5, ror #6
        3852d8:	00766572 	rsbeqs	r6, r6, r2, ror r5
        3852dc:	6e002020 	cdpvs	0, 0, cr2, cr0, cr0, {1}
        3852e0:	20020073 	andcs	r0, r2, r3, ror r0
        3852e4:	65727600 	ldrvsb	r7, [r2, -#1536]!
        3852e8:	61746c6b 	cmnvs	r4, fp, ror #24
        3852f4:	eaffffec 	b	3852ac <ClassInfo__17TAppleTalkServiceSFv>
        3852f8:	ea5bdeda 	b	1a7ce68 <TAppleTalkService::$New(void)>
        3852fc:	ea5bce49 	b	1a78c28 <TAppleTalkService::$Delete(void)>
        385300:	ea5beb3d 	b	1a7fffc <TAppleTalkService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        385304:	ea5bd25f 	b	1a79c88 <TAppleTalkService::$DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        385308:	00000000 	andeq	r0, r0, r0
        38530c:	00000048 	andeq	r0, r0, r8, asr #32
        385310:	00000052 	andeq	r0, r0, r2, asr r0
        385314:	00000058 	andeq	r0, r0, r8, asr r0
        385318:	00000058 	andeq	r0, r0, r8, asr r0
        38531c:	000000f8 	streqd	r0, [r0], -r8
        385320:	ea5beb30 	b	1a7ffe8 <$Sizeof__13TADSPEndpointSFv>
        38532c:	ea5bdecc 	b	1a7ce64 <TADSPEndpoint::$New(void)>
        385330:	ea5bce3b 	b	1a78c24 <TADSPEndpoint::$Delete(void)>
        385340:	ea000001 	b	38534c <ClassInfo__13TADSPEndpointSFv+0x8>
    */
}

