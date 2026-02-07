#include "include/TPackageLoader.h"

/**
 * Symbol: TPackageLoader::__ct(char *, SourceType)
 * Address: 0015d3b0
 */
TPackageLoader::TPackageLoader(char *, SourceType) {
    /*
        15d3b0:	e1a0c00d 	mov	ip, sp
        15d3b4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15d3b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        15d3bc:	e1a05002 	mov	r5, r2
        15d3c0:	e1a04003 	mov	r4, r3
        15d3c4:	e1a06001 	mov	r6, r1
        15d3c8:	e3300000 	teq	r0, #0	; 0x0
        15d3cc:	1a000003 	bne	15d3e0 <TPackageLoader::__ct(char *, SourceType)+0x30>
        15d3d0:	e3a00024 	mov	r0, #36	; 0x24
        15d3d4:	eb69c4d7 	bl	1bce738 <$__nw(unsigned int)>
        15d3d8:	e3300000 	teq	r0, #0	; 0x0
        15d3dc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        15d3e0:	e3a01000 	mov	r1, #0	; 0x0
        15d3e4:	e5c01010 	strb	r1, [r0, #16]	; fField16
        15d3e8:	e2802008 	add	r2, r0, #8	; 0x8
        15d3ec:	e5824004 	str	r4, [r2, #4]	; fField4
        15d3f0:	e5825000 	str	r5, [r2]
        15d3f4:	e580101c 	str	r1, [r0, #28]	; fField28
        15d3f8:	e5806000 	str	r6, [r0]
        15d3fc:	e5801014 	str	r1, [r0, #20]	; fField20
        15d400:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageLoader::__ct(CPipe *, SourceType)
 * Address: 0015d404
 */
TPackageLoader::TPackageLoader(CPipe *, SourceType) {
    /*
        15d404:	e1a0c00d 	mov	ip, sp
        15d408:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15d40c:	e24cb004 	sub	fp, ip, #4	; 0x4
        15d410:	e1a05002 	mov	r5, r2
        15d414:	e1a04003 	mov	r4, r3
        15d418:	e1a06001 	mov	r6, r1
        15d41c:	e3300000 	teq	r0, #0	; 0x0
        15d420:	1a000003 	bne	15d434 <TPackageLoader::__ct(CPipe *, SourceType)+0x30>
        15d424:	e3a00024 	mov	r0, #36	; 0x24
        15d428:	eb69c4c2 	bl	1bce738 <$__nw(unsigned int)>
        15d42c:	e3300000 	teq	r0, #0	; 0x0
        15d430:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        15d434:	e2801008 	add	r1, r0, #8	; 0x8
        15d438:	e5814004 	str	r4, [r1, #4]	; fField4
        15d43c:	e5815000 	str	r5, [r1]
        15d440:	e3a01000 	mov	r1, #0	; 0x0
        15d444:	e5806004 	str	r6, [r0, #4]	; fField4
        15d448:	e5c01010 	strb	r1, [r0, #16]	; fField16
        15d44c:	e580101c 	str	r1, [r0, #28]	; fField28
        15d450:	e5801014 	str	r1, [r0, #20]	; fField20
        15d454:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageLoader::__ct(TEndpointPipe *, SourceType)
 * Address: 0015d74c
 */
TPackageLoader::TPackageLoader(TEndpointPipe *, SourceType) {
    /*
        15d74c:	e1a0c00d 	mov	ip, sp
        15d750:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15d754:	e24cb004 	sub	fp, ip, #4	; 0x4
        15d758:	e1a05002 	mov	r5, r2
        15d75c:	e1a04003 	mov	r4, r3
        15d760:	e1a06001 	mov	r6, r1
        15d764:	e3300000 	teq	r0, #0	; 0x0
        15d768:	1a000003 	bne	15d77c <TPackageLoader::__ct(TEndpointPipe *, SourceType)+0x30>
        15d76c:	e3a00024 	mov	r0, #36	; 0x24
        15d770:	eb69c3f0 	bl	1bce738 <$__nw(unsigned int)>
        15d774:	e3300000 	teq	r0, #0	; 0x0
        15d778:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        15d77c:	e2801008 	add	r1, r0, #8	; 0x8
        15d780:	e5814004 	str	r4, [r1, #4]	; fField4
        15d784:	e5815000 	str	r5, [r1]
        15d788:	e3a01001 	mov	r1, #1	; 0x1
        15d78c:	e5806004 	str	r6, [r0, #4]	; fField4
        15d790:	e5c01010 	strb	r1, [r0, #16]	; fField16
        15d794:	e3a01000 	mov	r1, #0	; 0x0
        15d798:	e580101c 	str	r1, [r0, #28]	; fField28
        15d79c:	e5801014 	str	r1, [r0, #20]	; fField20
        15d7a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageLoader::__dt(void)
 * Address: 0015d7a4
 */
TPackageLoader::~TPackageLoader(void) {
    /*
        15d7a4:	e3110001 	tst	r1, #1	; 0x1
        15d7a8:	1a69bfcc 	bne	1bcd6e0 <$__dl(void *)>
        15d7ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageLoader::Reset(void)
 * Address: 0015d7b0
 */
TPackageLoader::Reset(void) {
    /*
        15d7b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageLoader::Load(void)
 * Address: 0015d7b4
 */
TPackageLoader::Load(void) {
    /*
        15d7b4:	e1a0c00d 	mov	ip, sp
        15d7b8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        15d7bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        15d7c0:	e1a04000 	mov	r4, r0
        15d7c4:	e24dd018 	sub	sp, sp, #24	; 0x18
        15d7c8:	eb69d881 	bl	1bd39d4 <$GetGlobals>
        15d7cc:	eb6943e3 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
        15d7d0:	e59f00f0 	ldr	r0, [pc, #f0]	; 15d8c8 <TPackageLoader::Load(void)+0x114>
        15d7d4:	e5900000 	ldr	r0, [r0]
        15d7d8:	e3a01000 	mov	r1, #0	; 0x0
        15d7dc:	eb69c3dc 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        15d7e0:	eb69d87b 	bl	1bd39d4 <$GetGlobals>
        15d7e4:	eb693782 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
        15d7e8:	e3a06000 	mov	r6, #0	; 0x0
        15d7ec:	e5c46020 	strb	r6, [r4, #32]	; fField32
        15d7f0:	e5c46021 	strb	r6, [r4, #33]	; fField33
        15d7f4:	e3a00014 	mov	r0, #20	; 0x14
        15d7f8:	eb69c3ce 	bl	1bce738 <$__nw(unsigned int)>
        15d7fc:	e1b05000 	movs	r5, r0
        15d800:	0a000003 	beq	15d814 <TPackageLoader::Load(void)+0x60>
        15d804:	e1a00005 	mov	r0, r5
        15d808:	eb6a1a7e 	bl	1be4208 <TAEventHandler::$__ct(void)>
        15d80c:	e59f00b8 	ldr	r0, [pc, #b8]	; 15d8cc <TPackageLoader::Load(void)+0x118>
        15d810:	e5850000 	str	r0, [r5]
        15d814:	e1a00005 	mov	r0, r5
        15d818:	e584501c 	str	r5, [r4, #28]	; fField28
        15d81c:	e59f20ac 	ldr	r2, [pc, #ac]	; 15d8d0 <TPackageLoader::Load(void)+0x11c>
        15d820:	e59f10ac 	ldr	r1, [pc, #ac]	; 15d8d4 <TPackageLoader::Load(void)+0x120>
        15d824:	eb6a2f21 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        15d828:	e1b05000 	movs	r5, r0
        15d82c:	1a000064 	bne	15d9c4 <TPackageLoader::Load(void)+0x210>
        15d830:	e24dd008 	sub	sp, sp, #8	; 0x8
        15d834:	e2847008 	add	r7, r4, #8	; 0x8
        15d838:	e8975000 	ldmia	r7, {ip, lr}
        15d83c:	e88d5000 	stmia	sp, {ip, lr}
        15d840:	e4dd0008 	ldrb	r0, [sp], #8
        15d844:	e3100001 	tst	r0, #1	; 0x1
        15d848:	1a000022 	bne	15d8d8 <TPackageLoader::Load(void)+0x124>
        15d84c:	e3a00000 	mov	r0, #0	; 0x0
        15d850:	eb6a165c 	bl	1be31c8 <CRingBuffer::$__ct(void)>
        15d854:	e5840014 	str	r0, [r4, #20]	; fField20
        15d858:	e3300000 	teq	r0, #0	; 0x0
        15d85c:	0a000058 	beq	15d9c4 <TPackageLoader::Load(void)+0x210>
        15d860:	e3a01c01 	mov	r1, #256	; 0x100
        15d864:	eb6a2f0b 	bl	1be9498 <CRingBuffer::$Init(long)>
        15d868:	e1b05000 	movs	r5, r0
        15d86c:	1a000054 	bne	15d9c4 <TPackageLoader::Load(void)+0x210>
        15d870:	e3a01000 	mov	r1, #0	; 0x0
        15d874:	e5940014 	ldr	r0, [r4, #20]	; fField20
        15d878:	eb6a333a 	bl	1bea568 <CRingBuffer::$MakeShared(unsigned long)>
        15d87c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        15d880:	e58d0008 	str	r0, [sp, #8]
        15d884:	e5940004 	ldr	r0, [r4, #4]	; fField4
        15d888:	e58d0000 	str	r0, [sp]
        15d88c:	e5d40010 	ldrb	r0, [r4, #16]	; fField16
        15d890:	e3300000 	teq	r0, #0	; 0x0
        15d894:	0a00005c 	beq	15da0c <TPackageLoader::Load(void)+0x258>
        15d898:	e3a00000 	mov	r0, #0	; 0x0
        15d89c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        15d8a0:	e52d606c 	str	r6, [sp, -#108]!
        15d8a4:	e28d0008 	add	r0, sp, #8	; 0x8
        15d8a8:	eb695431 	bl	1bb2974 <$setjmp>
        15d8ac:	e3300000 	teq	r0, #0	; 0x0
        15d8b0:	1a000045 	bne	15d9cc <TPackageLoader::Load(void)+0x218>
        15d8b4:	e1a0000d 	mov	r0, sp
        15d8b8:	eb6a09ef 	bl	1be007c <$AddExceptionHandler>
        15d8bc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        15d8c0:	eb69750e 	bl	1bbad00 <TEndpointPipe::$RemoveFromAppWorld(void)>
        15d8c4:	ea00004a 	b	15d9f4 <TPackageLoader::Load(void)+0x240>
        15d8c8:	0c1016dc 	ldceq	6, cr1, [r0], -#880
        15d8cc:	0001f33c 	andeq	pc, r1, ip, lsr r3
        15d8d0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        15d8d4:	70636b6d 	rsbvc	r6, r3, sp, ror #22
        15d8d8:	e5940000 	ldr	r0, [r4]
        15d8dc:	e58d0010 	str	r0, [sp, #16]	; fField16
        15d8e0:	e24dd084 	sub	sp, sp, #132	; 0x84
        15d8e4:	e3a03001 	mov	r3, #1	; 0x1
        15d8e8:	e92d0008 	stmdb	sp!, {r3}
        15d8ec:	eb69d838 	bl	1bd39d4 <$GetGlobals>
        15d8f0:	eb6a2ad1 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        15d8f4:	e5903000 	ldr	r3, [r0]
        15d8f8:	e92d0008 	stmdb	sp!, {r3}
        15d8fc:	eb69d834 	bl	1bd39d4 <$GetGlobals>
        15d900:	eb6a2acd 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        15d904:	e5903000 	ldr	r3, [r0]
        15d908:	e92d0008 	stmdb	sp!, {r3}
        15d90c:	e28d30a0 	add	r3, sp, #160	; 0xa0
        15d910:	e28d000c 	add	r0, sp, #12	; 0xc
        15d914:	e8970006 	ldmia	r7, {r1, r2}
        15d918:	eb664bbe 	bl	1af0818 <TPkBeginLoadEvent::$__ct(SourceType, PartSource const &, unsigned long, unsigned long, unsigned char)>
        15d91c:	eb69e8aa 	bl	1bd7bcc <$PackageManagerPortId(void)>
        15d920:	e1a01000 	mov	r1, r0
        15d924:	e28d0004 	add	r0, sp, #4	; 0x4
        15d928:	eb69bf67 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        15d92c:	eb69d828 	bl	1bd39d4 <$GetGlobals>
        15d930:	eb69438a 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
        15d934:	e28d000c 	add	r0, sp, #12	; 0xc
        15d938:	e3a01084 	mov	r1, #132	; 0x84
        15d93c:	e3a02000 	mov	r2, #0	; 0x0
        15d940:	e3a0c000 	mov	ip, #0	; 0x0
        15d944:	e3a03000 	mov	r3, #0	; 0x0
        15d948:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15d94c:	e1a03006 	mov	r3, r6
        15d950:	e1a0100c 	mov	r1, ip
        15d954:	e3a00084 	mov	r0, #132	; 0x84
        15d958:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15d95c:	e28d302c 	add	r3, sp, #44	; 0x2c
        15d960:	e92d0008 	stmdb	sp!, {r3}
        15d964:	e28d3024 	add	r3, sp, #36	; 0x24
        15d968:	e28d0028 	add	r0, sp, #40	; 0x28
        15d96c:	e3a02002 	mov	r2, #2	; 0x2
        15d970:	e3a01001 	mov	r1, #1	; 0x1
        15d974:	eb69f4f4 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        15d978:	e28dd024 	add	sp, sp, #36	; 0x24
        15d97c:	e1a05000 	mov	r5, r0
        15d980:	eb69d813 	bl	1bd39d4 <$GetGlobals>
        15d984:	eb69371a 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
        15d988:	e3350000 	teq	r5, #0	; 0x0
        15d98c:	059d5018 	ldreq	r5, [sp, #24]
        15d990:	e28d0004 	add	r0, sp, #4	; 0x4
        15d994:	e3a01000 	mov	r1, #0	; 0x0
        15d998:	eb69c361 	bl	1bce724 <TUObject::$__dt(void)>
        15d99c:	e28dd00c 	add	sp, sp, #12	; 0xc
        15d9a0:	e59d002c 	ldr	r0, [sp, #44]
        15d9a4:	e3350000 	teq	r5, #0	; 0x0
        15d9a8:	e5840018 	str	r0, [r4, #24]
        15d9ac:	1a000003 	bne	15d9c0 <TPackageLoader::Load(void)+0x20c>
        15d9b0:	e5dd0081 	ldrb	r0, [sp, #129]
        15d9b4:	e5c40020 	strb	r0, [r4, #32]	; fField32
        15d9b8:	e5dd0080 	ldrb	r0, [sp, #128]
        15d9bc:	e5c40021 	strb	r0, [r4, #33]	; fField33
        15d9c0:	e28dd084 	add	sp, sp, #132	; 0x84
        15d9c4:	e1a00005 	mov	r0, r5
        15d9c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        15d9cc:	e59d0060 	ldr	r0, [sp, #96]
        15d9d0:	e59f1088 	ldr	r1, [pc, #88]	; 15da60 <TPackageLoader::Load(void)+0x2ac>
        15d9d4:	e5911000 	ldr	r1, [r1]
        15d9d8:	eb6a15ed 	bl	1be3194 <$Subexception>
        15d9dc:	e3300000 	teq	r0, #0	; 0x0
        15d9e0:	159d0064 	ldrne	r0, [sp, #100]
        15d9e4:	158d006c 	strne	r0, [sp, #108]
        15d9e8:	1a000001 	bne	15d9f4 <TPackageLoader::Load(void)+0x240>
        15d9ec:	e1a0000d 	mov	r0, sp
        15d9f0:	eb6a11d7 	bl	1be2154 <$NextHandler>
        15d9f4:	e1a0000d 	mov	r0, sp
        15d9f8:	eb6a0dae 	bl	1be10b8 <$ExitHandler>
        15d9fc:	e5bd506c 	ldr	r5, [sp, #108]!
        15da00:	e3350000 	teq	r5, #0	; 0x0
        15da04:	e28dd004 	add	sp, sp, #4	; 0x4
        15da08:	1affffed 	bne	15d9c4 <TPackageLoader::Load(void)+0x210>
        15da0c:	e24dd088 	sub	sp, sp, #136	; 0x88
        15da10:	e5d42010 	ldrb	r2, [r4, #16]	; fField16
        15da14:	e28d1088 	add	r1, sp, #136	; 0x88
        15da18:	e1a0000d 	mov	r0, sp
        15da1c:	eb66e870 	bl	1b17be4 <TPipeApp::$__ct(PipeInfo const &, unsigned char)>
        15da20:	e1a0000d 	mov	r0, sp
        15da24:	e3a03e77 	mov	r3, #1904	; 0x770
        15da28:	e2833a01 	add	r3, r3, #4096	; 0x1000
        15da2c:	e3a02001 	mov	r2, #1	; 0x1
        15da30:	e59f102c 	ldr	r1, [pc, #2c]	; 15da64 <TPackageLoader::Load(void)+0x2b0>
        15da34:	e59dc000 	ldr	ip, [sp]
        15da38:	e1a0e00f 	mov	lr, pc
        15da3c:	e28cf044 	add	pc, ip, #68	; 0x44
        15da40:	e1b05000 	movs	r5, r0
        15da44:	0a000007 	beq	15da68 <TPackageLoader::Load(void)+0x2b4>
        15da48:	e1a0000d 	mov	r0, sp
        15da4c:	e3a01000 	mov	r1, #0	; 0x0
        15da50:	e1a0e00f 	mov	lr, pc
        15da54:	e59df000 	ldr	pc, [sp]
        15da58:	e28dd088 	add	sp, sp, #136	; 0x88
        15da5c:	eaffffd8 	b	15d9c4 <TPackageLoader::Load(void)+0x210>
        15da60:	00371324 	eoreqs	r1, r7, r4, lsr #6
        15da64:	70697065 	rsbvc	r7, r9, r5, rrx
        15da68:	e24dd018 	sub	sp, sp, #24	; 0x18
        15da6c:	e28d0008 	add	r0, sp, #8	; 0x8
        15da70:	eb69bf04 	bl	1bcd688 <TUNameServer::$__ct(void)>
        15da74:	e1a0300d 	mov	r3, sp
        15da78:	e92d0008 	stmdb	sp!, {r3}
        15da7c:	e28d3008 	add	r3, sp, #8	; 0x8
        15da80:	e28d000c 	add	r0, sp, #12	; 0xc
        15da84:	e28f2f0d 	add	r2, pc, #52	; 0x34
        15da88:	e28f1f0e 	add	r1, pc, #56	; 0x38
        15da8c:	eb69e432 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
        15da90:	e28dd004 	add	sp, sp, #4	; 0x4
        15da94:	e1b05000 	movs	r5, r0
        15da98:	0a00000c 	beq	15dad0 <TPackageLoader::Load(void)+0x31c>
        15da9c:	e28d0008 	add	r0, sp, #8	; 0x8
        15daa0:	e3a01000 	mov	r1, #0	; 0x0
        15daa4:	eb69c316 	bl	1bce704 <TUNameServer::$__dt(void)>
        15daa8:	e28d0018 	add	r0, sp, #24	; 0x18
        15daac:	e3a01000 	mov	r1, #0	; 0x0
        15dab0:	e1a0e00f 	mov	lr, pc
        15dab4:	e59df018 	ldr	pc, [sp, #24]
        15dab8:	e28dd0a0 	add	sp, sp, #160	; 0xa0
        15dabc:	eaffffc0 	b	15d9c4 <TPackageLoader::Load(void)+0x210>
        15dac0:	5455506f 	ldrplb	r5, [r5], -#111	; fField111
        15dac4:	72740000 	rsbvcs	r0, r4, #0	; 0x0
        15dac8:	70697065 	rsbvc	r7, r9, r5, rrx
        15dacc:	00000000 	andeq	r0, r0, r0
        15dad0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        15dad4:	e5900018 	ldr	r0, [r0, #24]
        15dad8:	e58d00b0 	str	r0, [sp, #176]
        15dadc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        15dae0:	e58d00b4 	str	r0, [sp, #180]
        15dae4:	e28d0008 	add	r0, sp, #8	; 0x8
        15dae8:	e3a01000 	mov	r1, #0	; 0x0
        15daec:	eb69c304 	bl	1bce704 <TUNameServer::$__dt(void)>
        15daf0:	e28dd018 	add	sp, sp, #24	; 0x18
        15daf4:	e1a0000d 	mov	r0, sp
        15daf8:	e3a01000 	mov	r1, #0	; 0x0
        15dafc:	e1a0e00f 	mov	lr, pc
        15db00:	e59df000 	ldr	pc, [sp]
        15db04:	e28dd088 	add	sp, sp, #136	; 0x88
        15db08:	eaffff74 	b	15d8e0 <TPackageLoader::Load(void)+0x12c>
    */
}

/**
 * Symbol: TPackageLoader::Done(unsigned char *, unsigned char *)
 * Address: 0015db0c
 */
TPackageLoader::Done(unsigned char *, unsigned char *) {
    /*
        15db0c:	e1a0c00d 	mov	ip, sp
        15db10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15db14:	e24cb004 	sub	fp, ip, #4	; 0x4
        15db18:	e1a04000 	mov	r4, r0
        15db1c:	e3310000 	teq	r1, #0	; 0x0
        15db20:	15d40020 	ldrneb	r0, [r4, #32]	; fField32
        15db24:	15c10000 	strneb	r0, [r1]
        15db28:	e3320000 	teq	r2, #0	; 0x0
        15db2c:	15d40021 	ldrneb	r0, [r4, #33]	; fField33
        15db30:	15c20000 	strneb	r0, [r2]
        15db34:	e24dd008 	sub	sp, sp, #8	; 0x8
        15db38:	e2841008 	add	r1, r4, #8	; 0x8
        15db3c:	e8911008 	ldmia	r1, {r3, ip}
        15db40:	e88d1008 	stmia	sp, {r3, ip}
        15db44:	e4dd0008 	ldrb	r0, [sp], #8
        15db48:	e3100001 	tst	r0, #1	; 0x1
        15db4c:	e3a05000 	mov	r5, #0	; 0x0
        15db50:	1a00001b 	bne	15dbc4 <TPackageLoader::Done(unsigned char *, unsigned char *)+0xb8>
        15db54:	e5d40010 	ldrb	r0, [r4, #16]	; fField16
        15db58:	e3300000 	teq	r0, #0	; 0x0
        15db5c:	0a000018 	beq	15dbc4 <TPackageLoader::Done(unsigned char *, unsigned char *)+0xb8>
        15db60:	e3a00000 	mov	r0, #0	; 0x0
        15db64:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        15db68:	e52d506c 	str	r5, [sp, -#108]!
        15db6c:	e28d0008 	add	r0, sp, #8	; 0x8
        15db70:	eb69537f 	bl	1bb2974 <$setjmp>
        15db74:	e3300000 	teq	r0, #0	; 0x0
        15db78:	1a000004 	bne	15db90 <TPackageLoader::Done(unsigned char *, unsigned char *)+0x84>
        15db7c:	e1a0000d 	mov	r0, sp
        15db80:	eb6a093d 	bl	1be007c <$AddExceptionHandler>
        15db84:	e5940004 	ldr	r0, [r4, #4]	; fField4
        15db88:	eb6963f3 	bl	1bb6b5c <TEndpointPipe::$AddToAppWorld(void)>
        15db8c:	ea000009 	b	15dbb8 <TPackageLoader::Done(unsigned char *, unsigned char *)+0xac>
        15db90:	e59d0060 	ldr	r0, [sp, #96]
        15db94:	e59f1070 	ldr	r1, [pc, #70]	; 15dc0c <TPackageLoader::Done(unsigned char *, unsigned char *)+0x100>
        15db98:	e5911000 	ldr	r1, [r1]
        15db9c:	eb6a157c 	bl	1be3194 <$Subexception>
        15dba0:	e3300000 	teq	r0, #0	; 0x0
        15dba4:	159d0064 	ldrne	r0, [sp, #100]
        15dba8:	158d006c 	strne	r0, [sp, #108]
        15dbac:	1a000001 	bne	15dbb8 <TPackageLoader::Done(unsigned char *, unsigned char *)+0xac>
        15dbb0:	e1a0000d 	mov	r0, sp
        15dbb4:	eb6a1166 	bl	1be2154 <$NextHandler>
        15dbb8:	e1a0000d 	mov	r0, sp
        15dbbc:	eb6a0d3d 	bl	1be10b8 <$ExitHandler>
        15dbc0:	e28dd070 	add	sp, sp, #112	; 0x70
        15dbc4:	e594001c 	ldr	r0, [r4, #28]	; fField28
        15dbc8:	e3300000 	teq	r0, #0	; 0x0
        15dbcc:	0a000002 	beq	15dbdc <TPackageLoader::Done(unsigned char *, unsigned char *)+0xd0>
        15dbd0:	e3a01001 	mov	r1, #1	; 0x1
        15dbd4:	e1a0e00f 	mov	lr, pc
        15dbd8:	e590f000 	ldr	pc, [r0]
        15dbdc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        15dbe0:	e3300000 	teq	r0, #0	; 0x0
        15dbe4:	0a000002 	beq	15dbf4 <TPackageLoader::Done(unsigned char *, unsigned char *)+0xe8>
        15dbe8:	e3a01001 	mov	r1, #1	; 0x1
        15dbec:	e1a0e00f 	mov	lr, pc
        15dbf0:	e590f000 	ldr	pc, [r0]
        15dbf4:	e584501c 	str	r5, [r4, #28]	; fField28
        15dbf8:	e5a45014 	str	r5, [r4, #20]!	; fField20
        15dbfc:	e59f000c 	ldr	r0, [pc, #c]	; 15dc10 <TPackageLoader::Done(unsigned char *, unsigned char *)+0x104>
        15dc00:	e5900000 	ldr	r0, [r0]
        15dc04:	eb69f023 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        15dc08:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15dc0c:	00371324 	eoreqs	r1, r7, r4, lsr #6
        15dc10:	0c1016dc 	ldceq	6, cr1, [r0], -#880
    */
}

