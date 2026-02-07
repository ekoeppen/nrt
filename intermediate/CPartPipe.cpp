#include "include/CPartPipe.h"

/**
 * Symbol: CPartPipe::Init(unsigned long, CShadowRingBuffer *, unsigned char)
 * Address: 001826cc
 */
CPartPipe::Init(unsigned long, CShadowRingBuffer *, unsigned char) {
    /*
        1826cc:	e1a0c00d 	mov	ip, sp
        1826d0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1826d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1826d8:	e1a04000 	mov	r4, r0
        1826dc:	e1a05002 	mov	r5, r2
        1826e0:	e20360ff 	and	r6, r3, #255	; 0xff
        1826e4:	e3a00000 	mov	r0, #0	; 0x0
        1826e8:	eb692bf7 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        1826ec:	e584000c 	str	r0, [r4, #12]	; fField12
        1826f0:	e5845004 	str	r5, [r4, #4]	; fField4
        1826f4:	e5c46008 	strb	r6, [r4, #8]	; fField8
        1826f8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CPartPipe::Overflow(void)
 * Address: 001826fc
 */
CPartPipe::Overflow(void) {
    /*
        1826fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPartPipe::Underflow(long, unsigned char &)
 * Address: 00182700
 */
CPartPipe::Underflow(long, unsigned char &) {
    /*
        182700:	e1a0c00d 	mov	ip, sp
        182704:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        182708:	e24cb004 	sub	fp, ip, #4	; 0x4
        18270c:	e1a05000 	mov	r5, r0
        182710:	e1a04001 	mov	r4, r1
        182714:	e24dd018 	sub	sp, sp, #24	; 0x18
        182718:	e1a02001 	mov	r2, r1
        18271c:	e28d0004 	add	r0, sp, #4	; 0x4
        182720:	e3a03000 	mov	r3, #0	; 0x0
        182724:	e3a01001 	mov	r1, #1	; 0x1
        182728:	eb65b41f 	bl	1aef7ac <TPipeEvent::$__ct(unsigned long, long, long)>
        18272c:	e28d0004 	add	r0, sp, #4	; 0x4
        182730:	e3a01014 	mov	r1, #20	; 0x14
        182734:	e3a02000 	mov	r2, #0	; 0x0
        182738:	e3a0e000 	mov	lr, #0	; 0x0
        18273c:	e3a06000 	mov	r6, #0	; 0x0
        182740:	e3a03000 	mov	r3, #0	; 0x0
        182744:	e595c00c 	ldr	ip, [r5, #12]	; fField12
        182748:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        18274c:	e1a03006 	mov	r3, r6
        182750:	e1a0100e 	mov	r1, lr
        182754:	e3a00014 	mov	r0, #20	; 0x14
        182758:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        18275c:	e28d3024 	add	r3, sp, #36	; 0x24
        182760:	e92d0008 	stmdb	sp!, {r3}
        182764:	e28d3024 	add	r3, sp, #36	; 0x24
        182768:	e1a0000c 	mov	r0, ip
        18276c:	e3a02002 	mov	r2, #2	; 0x2
        182770:	e3a01001 	mov	r1, #1	; 0x1
        182774:	eb696174 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        182778:	e28dd024 	add	sp, sp, #36	; 0x24
        18277c:	e1b01000 	movs	r1, r0
        182780:	e59f6068 	ldr	r6, [pc, #68]	; 1827f0 <CPartPipe::Underflow(long, unsigned char &)+0xf0>
        182784:	13a02000 	movne	r2, #0	; 0x0
        182788:	15960000 	ldrne	r0, [r6]
        18278c:	1b698282 	blne	1be319c <$Throw>
        182790:	e59d0014 	ldr	r0, [sp, #20]
        182794:	e3300000 	teq	r0, #0	; 0x0
        182798:	0a000003 	beq	1827ac <CPartPipe::Underflow(long, unsigned char &)+0xac>
        18279c:	e59d1014 	ldr	r1, [sp, #20]
        1827a0:	e3a02000 	mov	r2, #0	; 0x0
        1827a4:	e5960000 	ldr	r0, [r6]
        1827a8:	eb69827b 	bl	1be319c <$Throw>
        1827ac:	e3340000 	teq	r4, #0	; 0x0
        1827b0:	0a000007 	beq	1827d4 <CPartPipe::Underflow(long, unsigned char &)+0xd4>
        1827b4:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        1827b8:	e3300000 	teq	r0, #0	; 0x0
        1827bc:	1a000004 	bne	1827d4 <CPartPipe::Underflow(long, unsigned char &)+0xd4>
        1827c0:	e3a02000 	mov	r2, #0	; 0x0
        1827c4:	e3e010a4 	mvn	r1, #164	; 0xa4
        1827c8:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        1827cc:	e5960000 	ldr	r0, [r6]
        1827d0:	eb698271 	bl	1be319c <$Throw>
        1827d4:	e5b52004 	ldr	r2, [r5, #4]!	; fField4
        1827d8:	e1a00002 	mov	r0, r2
        1827dc:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        1827e0:	e5922000 	ldr	r2, [r2]
        1827e4:	e1a0e00f 	mov	lr, pc
        1827e8:	e282f044 	add	pc, r2, #68	; 0x44
        1827ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1827f0:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CPartPipe::FlushRead(void)
 * Address: 001827f4
 */
CPartPipe::FlushRead(void) {
    /*
        1827f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPartPipe::FlushWrite(void)
 * Address: 001827f8
 */
CPartPipe::FlushWrite(void) {
    /*
        1827f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPartPipe::Reset(void)
 * Address: 001827fc
 */
CPartPipe::Reset(void) {
    /*
        1827fc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        182800:	e5901000 	ldr	r1, [r0]
        182804:	e281f028 	add	pc, r1, #40	; 0x28
    */
}

/**
 * Symbol: CPartPipe::SetStreamSize(long)
 * Address: 00182808
 */
CPartPipe::SetStreamSize(long) {
    /*
        182808:	e1a0c00d 	mov	ip, sp
        18280c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        182810:	e24cb004 	sub	fp, ip, #4	; 0x4
        182814:	e1a04000 	mov	r4, r0
        182818:	e24dd014 	sub	sp, sp, #20	; 0x14
        18281c:	e1a02001 	mov	r2, r1
        182820:	e1a0000d 	mov	r0, sp
        182824:	e3a03000 	mov	r3, #0	; 0x0
        182828:	e3a01000 	mov	r1, #0	; 0x0
        18282c:	eb65b3de 	bl	1aef7ac <TPipeEvent::$__ct(unsigned long, long, long)>
        182830:	e5b4e00c 	ldr	lr, [r4, #12]!	; fField12
        182834:	e33e0000 	teq	lr, #0	; 0x0
        182838:	0a00000e 	beq	182878 <CPartPipe::SetStreamSize(long)+0x70>
        18283c:	e3a0c000 	mov	ip, #0	; 0x0
        182840:	e3a01000 	mov	r1, #0	; 0x0
        182844:	e3a03000 	mov	r3, #0	; 0x0
        182848:	e1a02001 	mov	r2, r1
        18284c:	e3a00000 	mov	r0, #0	; 0x0
        182850:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        182854:	e1a0300c 	mov	r3, ip
        182858:	e3a02014 	mov	r2, #20	; 0x14
        18285c:	e92d000c 	stmdb	sp!, {r2, r3}
        182860:	e28d3018 	add	r3, sp, #24	; 0x18
        182864:	e1a0000e 	mov	r0, lr
        182868:	e3a02000 	mov	r2, #0	; 0x0
        18286c:	e3a01001 	mov	r1, #1	; 0x1
        182870:	eb696134 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        182874:	e28dd018 	add	sp, sp, #24	; 0x18
        182878:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CPartPipe::SeekEOF(void)
 * Address: 0018287c
 */
CPartPipe::SeekEOF(void) {
    /*
        18287c:	e1a0c00d 	mov	ip, sp
        182880:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        182884:	e24cb004 	sub	fp, ip, #4	; 0x4
        182888:	e1a04000 	mov	r4, r0
        18288c:	e24dd014 	sub	sp, sp, #20	; 0x14
        182890:	e1a0000d 	mov	r0, sp
        182894:	e3a03000 	mov	r3, #0	; 0x0
        182898:	e3a02000 	mov	r2, #0	; 0x0
        18289c:	e3a01002 	mov	r1, #2	; 0x2
        1828a0:	eb65b3c1 	bl	1aef7ac <TPipeEvent::$__ct(unsigned long, long, long)>
        1828a4:	e5b4c00c 	ldr	ip, [r4, #12]!	; fField12
        1828a8:	e33c0000 	teq	ip, #0	; 0x0
        1828ac:	0a00000e 	beq	1828ec <CPartPipe::SeekEOF(void)+0x70>
        1828b0:	e3a0e000 	mov	lr, #0	; 0x0
        1828b4:	e3a01000 	mov	r1, #0	; 0x0
        1828b8:	e3a03000 	mov	r3, #0	; 0x0
        1828bc:	e1a02001 	mov	r2, r1
        1828c0:	e3a00000 	mov	r0, #0	; 0x0
        1828c4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1828c8:	e1a0300e 	mov	r3, lr
        1828cc:	e3a02014 	mov	r2, #20	; 0x14
        1828d0:	e92d000c 	stmdb	sp!, {r2, r3}
        1828d4:	e28d3018 	add	r3, sp, #24	; 0x18
        1828d8:	e1a0000c 	mov	r0, ip
        1828dc:	e3a02000 	mov	r2, #0	; 0x0
        1828e0:	e3a01001 	mov	r1, #1	; 0x1
        1828e4:	eb696117 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        1828e8:	e28dd018 	add	sp, sp, #24	; 0x18
        1828ec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CPartPipe::Close(void)
 * Address: 001828f0
 */
CPartPipe::Close(void) {
    /*
        1828f0:	e1a0c00d 	mov	ip, sp
        1828f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1828f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1828fc:	e1a04000 	mov	r4, r0
        182900:	e24dd018 	sub	sp, sp, #24	; 0x18
        182904:	e1a0000d 	mov	r0, sp
        182908:	e3a03000 	mov	r3, #0	; 0x0
        18290c:	e3a02000 	mov	r2, #0	; 0x0
        182910:	e3a01003 	mov	r1, #3	; 0x3
        182914:	eb65b3a4 	bl	1aef7ac <TPipeEvent::$__ct(unsigned long, long, long)>
        182918:	e5b4c00c 	ldr	ip, [r4, #12]!	; fField12
        18291c:	e33c0000 	teq	ip, #0	; 0x0
        182920:	0a000012 	beq	182970 <CPartPipe::Close(void)+0x80>
        182924:	e1a0000d 	mov	r0, sp
        182928:	e3a01014 	mov	r1, #20	; 0x14
        18292c:	e3a02000 	mov	r2, #0	; 0x0
        182930:	e3a0e000 	mov	lr, #0	; 0x0
        182934:	e3a04000 	mov	r4, #0	; 0x0
        182938:	e3a03000 	mov	r3, #0	; 0x0
        18293c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        182940:	e1a03004 	mov	r3, r4
        182944:	e1a0100e 	mov	r1, lr
        182948:	e3a00014 	mov	r0, #20	; 0x14
        18294c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        182950:	e28d3020 	add	r3, sp, #32	; 0x20
        182954:	e92d0008 	stmdb	sp!, {r3}
        182958:	e28d3038 	add	r3, sp, #56	; 0x38
        18295c:	e1a0000c 	mov	r0, ip
        182960:	e3a02002 	mov	r2, #2	; 0x2
        182964:	e3a01001 	mov	r1, #1	; 0x1
        182968:	eb6960f7 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        18296c:	e28dd024 	add	sp, sp, #36	; 0x24
        182970:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CPartPipe::ReadSeek(long, int)
 * Address: 00182974
 */
CPartPipe::ReadSeek(long, int) {
    /*
        182974:	e3a00000 	mov	r0, #0	; 0x0
        182978:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPartPipe::ReadPosition( const(void))
 * Address: 001829b0
 */
CPartPipe::ReadPosition( const(void)) {
    /*
        1829b0:	e3a00000 	mov	r0, #0	; 0x0
        1829b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPartPipe::WriteSeek(long, int)
 * Address: 001829b8
 */
CPartPipe::WriteSeek(long, int) {
    /*
        1829b8:	e3a00000 	mov	r0, #0	; 0x0
        1829bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPartPipe::WritePosition( const(void))
 * Address: 001829c0
 */
CPartPipe::WritePosition( const(void)) {
    /*
        1829c0:	e3a00000 	mov	r0, #0	; 0x0
        1829c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CPartPipe::__ct(void)
 * Address: 00182e04
 */
CPartPipe::CPartPipe(void) {
    /*
        182e04:	e1a0c00d 	mov	ip, sp
        182e08:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        182e0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        182e10:	e1b04000 	movs	r4, r0
        182e14:	1a000003 	bne	182e28 <CPartPipe::__ct(void)+0x24>
        182e18:	e3a00014 	mov	r0, #20	; 0x14
        182e1c:	eb692e45 	bl	1bce738 <$__nw(unsigned int)>
        182e20:	e1b04000 	movs	r4, r0
        182e24:	0a000007 	beq	182e48 <CPartPipe::__ct(void)+0x44>
        182e28:	e1a00004 	mov	r0, r4
        182e2c:	eb6984ff 	bl	1be4230 <CPipe::$__ct(void)>
        182e30:	e59f0018 	ldr	r0, [pc, #18]	; 182e50 <CPartPipe::__ct(void)+0x4c>
        182e34:	e5840000 	str	r0, [r4]
        182e38:	e3a00000 	mov	r0, #0	; 0x0
        182e3c:	e584000c 	str	r0, [r4, #12]	; fField12
        182e40:	e5840004 	str	r0, [r4, #4]	; fField4
        182e44:	e5c40008 	strb	r0, [r4, #8]	; fField8
        182e48:	e1a00004 	mov	r0, r4
        182e4c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        182e50:	00020688 	andeq	r0, r2, r8, lsl #13
    */
}

/**
 * Symbol: CPartPipe::__dt(void)
 * Address: 00182e54
 */
CPartPipe::~CPartPipe(void) {
    /*
        182e54:	e1a0c00d 	mov	ip, sp
        182e58:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        182e5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        182e60:	e1a04000 	mov	r4, r0
        182e64:	e1a05001 	mov	r5, r1
        182e68:	e59f0060 	ldr	r0, [pc, #60]	; 182ed0 <CPartPipe::__dt(void)+0x7c>
        182e6c:	e5840000 	str	r0, [r4]
        182e70:	e594600c 	ldr	r6, [r4, #12]	; fField12
        182e74:	e3360000 	teq	r6, #0	; 0x0
        182e78:	0a000004 	beq	182e90 <CPartPipe::__dt(void)+0x3c>
        182e7c:	e1a00006 	mov	r0, r6
        182e80:	e3a01000 	mov	r1, #0	; 0x0
        182e84:	eb692e26 	bl	1bce724 <TUObject::$__dt(void)>
        182e88:	e1a00006 	mov	r0, r6
        182e8c:	eb692a13 	bl	1bcd6e0 <$__dl(void *)>
        182e90:	e5d40008 	ldrb	r0, [r4, #8]	; fField8
        182e94:	e3300000 	teq	r0, #0	; 0x0
        182e98:	15940004 	ldrne	r0, [r4, #4]	; fField4
        182e9c:	13300000 	teqne	r0, #0	; 0x0
        182ea0:	0a000002 	beq	182eb0 <CPartPipe::__dt(void)+0x5c>
        182ea4:	e3a01001 	mov	r1, #1	; 0x1
        182ea8:	e1a0e00f 	mov	lr, pc
        182eac:	e590f000 	ldr	pc, [r0]
        182eb0:	e1a00004 	mov	r0, r4
        182eb4:	e3a01000 	mov	r1, #0	; 0x0
        182eb8:	eb6988f2 	bl	1be5288 <CPipe::$__dt(void)>
        182ebc:	e3150001 	tst	r5, #1	; 0x1
        182ec0:	11a00004 	movne	r0, r4
        182ec4:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        182ec8:	1a692a04 	bne	1bcd6e0 <$__dl(void *)>
        182ecc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        182ed0:	00020688 	andeq	r0, r2, r8, lsl #13
    */
}

/**
 * Symbol: CPartPipe::ReadChunk(void *, long &, unsigned char &)
 * Address: 00182ed4
 */
CPartPipe::ReadChunk(void *, long &, unsigned char &) {
    /*
        182ed4:	e1a0c00d 	mov	ip, sp
        182ed8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        182edc:	e24cb004 	sub	fp, ip, #4	; 0x4
        182ee0:	e1a04000 	mov	r4, r0
        182ee4:	e1a06001 	mov	r6, r1
        182ee8:	e1a05002 	mov	r5, r2
        182eec:	e1a07003 	mov	r7, r3
        182ef0:	e5920000 	ldr	r0, [r2]
        182ef4:	e3500000 	cmp	r0, #0	; 0x0
        182ef8:	d91babf0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        182efc:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        182f00:	e1a0200d 	mov	r2, sp
        182f04:	e1a01006 	mov	r1, r6
        182f08:	e5943004 	ldr	r3, [r4, #4]	; fField4
        182f0c:	e1a00003 	mov	r0, r3
        182f10:	e5933000 	ldr	r3, [r3]
        182f14:	e1a0e00f 	mov	lr, pc
        182f18:	e283f018 	add	pc, r3, #24	; 0x18
        182f1c:	e1a08000 	mov	r8, r0
        182f20:	e59f9010 	ldr	r9, [pc, #10]	; 182f38 <CPartPipe::ReadChunk(void *, long &, unsigned char &)+0x64>
        182f24:	e3700001 	cmn	r0, #1	; 0x1
        182f28:	0a000017 	beq	182f8c <CPartPipe::ReadChunk(void *, long &, unsigned char &)+0xb8>
        182f2c:	e3380000 	teq	r8, #0	; 0x0
        182f30:	0a00001d 	beq	182fac <CPartPipe::ReadChunk(void *, long &, unsigned char &)+0xd8>
        182f34:	ea000018 	b	182f9c <CPartPipe::ReadChunk(void *, long &, unsigned char &)+0xc8>
        182f38:	00371324 	eoreqs	r1, r7, r4, lsr #6
        182f3c:	e5840010 	str	r0, [r4, #16]	; fField16
        182f40:	e1a01000 	mov	r1, r0
        182f44:	e1a02007 	mov	r2, r7
        182f48:	e1a00004 	mov	r0, r4
        182f4c:	e5943000 	ldr	r3, [r4]
        182f50:	e1a0e00f 	mov	lr, pc
        182f54:	e283f034 	add	pc, r3, #52	; 0x34
        182f58:	e5943004 	ldr	r3, [r4, #4]	; fField4
        182f5c:	e5950000 	ldr	r0, [r5]
        182f60:	e0861000 	add	r1, r6, r0
        182f64:	e59d0000 	ldr	r0, [sp]
        182f68:	e0411000 	sub	r1, r1, r0
        182f6c:	e1a0200d 	mov	r2, sp
        182f70:	e1a00003 	mov	r0, r3
        182f74:	e5933000 	ldr	r3, [r3]
        182f78:	e1a0e00f 	mov	lr, pc
        182f7c:	e283f018 	add	pc, r3, #24	; 0x18
        182f80:	e1a08000 	mov	r8, r0
        182f84:	e3700001 	cmn	r0, #1	; 0x1
        182f88:	1a000001 	bne	182f94 <CPartPipe::ReadChunk(void *, long &, unsigned char &)+0xc0>
        182f8c:	e3a08000 	mov	r8, #0	; 0x0
        182f90:	ea000005 	b	182fac <CPartPipe::ReadChunk(void *, long &, unsigned char &)+0xd8>
        182f94:	e3380000 	teq	r8, #0	; 0x0
        182f98:	0a000003 	beq	182fac <CPartPipe::ReadChunk(void *, long &, unsigned char &)+0xd8>
        182f9c:	e1a01008 	mov	r1, r8
        182fa0:	e3a02000 	mov	r2, #0	; 0x0
        182fa4:	e5990000 	ldr	r0, [r9]
        182fa8:	eb69807b 	bl	1be319c <$Throw>
        182fac:	e59d0000 	ldr	r0, [sp]
        182fb0:	e3500000 	cmp	r0, #0	; 0x0
        182fb4:	da000001 	ble	182fc0 <CPartPipe::ReadChunk(void *, long &, unsigned char &)+0xec>
        182fb8:	e3380000 	teq	r8, #0	; 0x0
        182fbc:	0affffde 	beq	182f3c <CPartPipe::ReadChunk(void *, long &, unsigned char &)+0x68>
        182fc0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: CPartPipe::WriteChunk(void *, long, unsigned char)
 * Address: 00182fc4
 */
CPartPipe::WriteChunk(void *, long, unsigned char) {
    /*
        182fc4:	e1a0f00e 	mov	pc, lr
    */
}

