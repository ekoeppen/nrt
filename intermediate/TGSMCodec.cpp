#include "include/TGSMCodec.h"

/**
 * Symbol: Sizeof__9TGSMCodecSFv
 * Address: 000d87f0
 */
void TGSMCodec::Sizeof() {
    /*
         d87f0:	e3a0003c 	mov	r0, #60	; 0x3c
         d87f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGSMCodec::New(void)
 * Address: 000d87f8
 */
TGSMCodec::New(void) {
    /*
         d87f8:	e3a01000 	mov	r1, #0	; 0x0
         d87fc:	e5801018 	str	r1, [r0, #24]	; fField24
         d8800:	e5801020 	str	r1, [r0, #32]	; fField32
         d8804:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGSMCodec::Delete(void)
 * Address: 000d8808
 */
TGSMCodec::Delete(void) {
    /*
         d8808:	e5901014 	ldr	r1, [r0, #20]	; fField20
         d880c:	e59fc00c 	ldr	ip, [pc, #c]	; d8820 <TGSMCodec::Delete(void)+0x18>
         d8810:	e131000c 	teq	r1, ip
         d8814:	05900010 	ldreq	r0, [r0, #16]	; fField16
         d8818:	0a6a9df8 	beq	1b80000 <$gsm_destroy(gsm_state *)>
         d881c:	e1a0f00e 	mov	pc, lr
         d8820:	616c6f63 	cmnvs	ip, r3, ror #30
    */
}

/**
 * Symbol: TGSMCodec::Init(CodecBlock *)
 * Address: 000d8824
 */
TGSMCodec::Init(CodecBlock *) {
    /*
         d8824:	e1a0c00d 	mov	ip, sp
         d8828:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d882c:	e24cb004 	sub	fp, ip, #4	; 0x4
         d8830:	e1a04000 	mov	r4, r0
         d8834:	eb6a9def 	bl	1b7fff8 <$gsm_create(void)>
         d8838:	e5840010 	str	r0, [r4, #16]	; fField16
         d883c:	e1b01000 	movs	r1, r0
         d8840:	e3a00000 	mov	r0, #0	; 0x0
         d8844:	059f1008 	ldreq	r1, [pc, #8]	; d8854 <TGSMCodec::Init(CodecBlock *)+0x30>
         d8848:	159f1008 	ldrne	r1, [pc, #8]	; d8858 <TGSMCodec::Init(CodecBlock *)+0x34>
         d884c:	e5a41014 	str	r1, [r4, #20]!	; fField20
         d8850:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         d8854:	64656164 	strvsbt	r6, [r5], -#356
         d8858:	616c6f63 	cmnvs	ip, r3, ror #30
    */
}

/**
 * Symbol: TGSMCodec::Reset(CodecBlock *)
 * Address: 000d885c
 */
TGSMCodec::Reset(CodecBlock *) {
    /*
         d885c:	e5912004 	ldr	r2, [r1, #4]
         d8860:	e5802018 	str	r2, [r0, #24]	; fField24
         d8864:	e5912010 	ldr	r2, [r1, #16]	; fField16
         d8868:	e5802024 	str	r2, [r0, #36]	; fField36
         d886c:	e5912014 	ldr	r2, [r1, #20]	; fField20
         d8870:	e5802028 	str	r2, [r0, #40]	; fField40
         d8874:	e591200c 	ldr	r2, [r1, #12]
         d8878:	e580202c 	str	r2, [r0, #44]	; fField44
         d887c:	e5911008 	ldr	r1, [r1, #8]
         d8880:	e580101c 	str	r1, [r0, #28]	; fField28
         d8884:	e3a01000 	mov	r1, #0	; 0x0
         d8888:	e5a01020 	str	r1, [r0, #32]!	; fField32
         d888c:	e1a00001 	mov	r0, r1
         d8890:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGSMCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)
 * Address: 000d8894
 */
TGSMCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *) {
    /*
         d8894:	e1a0c00d 	mov	ip, sp
         d8898:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         d889c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         d88a0:	e24cb014 	sub	fp, ip, #20	; 0x14
         d88a4:	e1a04000 	mov	r4, r0
         d88a8:	e3a08000 	mov	r8, #0	; 0x0
         d88ac:	e59b9014 	ldr	r9, [fp, #20]	; fField20
         d88b0:	e5900018 	ldr	r0, [r0, #24]	; fField24
         d88b4:	e3300000 	teq	r0, #0	; 0x0
         d88b8:	0a00002a 	beq	d8968 <TGSMCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xd4>
         d88bc:	e594a020 	ldr	sl, [r4, #32]	; fField32
         d88c0:	e080700a 	add	r7, r0, sl
         d88c4:	e1a06001 	mov	r6, r1
         d88c8:	e59b200c 	ldr	r2, [fp, #12]
         d88cc:	e3a00d05 	mov	r0, #320	; 0x140
         d88d0:	e5921000 	ldr	r1, [r2]
         d88d4:	eb6b681b 	bl	1bb2948 <$__rt_udiv>
         d88d8:	e1a05000 	mov	r5, r0
         d88dc:	e594001c 	ldr	r0, [r4, #28]	; fField28
         d88e0:	e040100a 	sub	r1, r0, sl
         d88e4:	e3a00021 	mov	r0, #33	; 0x21
         d88e8:	eb6b6814 	bl	1bb2940 <$__rt_sdiv>
         d88ec:	e1500005 	cmp	r0, r5
         d88f0:	31a05000 	movcc	r5, r0
         d88f4:	e3a0a000 	mov	sl, #0	; 0x0
         d88f8:	e3550000 	cmp	r5, #0	; 0x0
         d88fc:	9a000008 	bls	d8924 <TGSMCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x90>
         d8900:	e1a02006 	mov	r2, r6
         d8904:	e1a01007 	mov	r1, r7
         d8908:	e5940010 	ldr	r0, [r4, #16]	; fField16
         d890c:	eb6a9dba 	bl	1b7fffc <$gsm_decode(gsm_state *, unsigned char *, short *)>
         d8910:	e2877021 	add	r7, r7, #33	; 0x21
         d8914:	e2866d05 	add	r6, r6, #320	; 0x140
         d8918:	e28aa001 	add	sl, sl, #1	; 0x1
         d891c:	e15a0005 	cmp	sl, r5
         d8920:	3afffff6 	bcc	d8900 <TGSMCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0x6c>
         d8924:	e0850285 	add	r0, r5, r5, lsl #5
         d8928:	e5941020 	ldr	r1, [r4, #32]	; fField32
         d892c:	e0811000 	add	r1, r1, r0
         d8930:	e5841020 	str	r1, [r4, #32]	; fField32
         d8934:	e0851105 	add	r1, r5, r5, lsl #2
         d8938:	e1a01301 	mov	r1, r1, lsl #6
         d893c:	e59b200c 	ldr	r2, [fp, #12]
         d8940:	e5821000 	str	r1, [r2]
         d8944:	e59b3010 	ldr	r3, [fp, #16]	; fField16
         d8948:	e5830000 	str	r0, [r3]
         d894c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         d8950:	e589000c 	str	r0, [r9, #12]
         d8954:	e3a00006 	mov	r0, #6	; 0x6
         d8958:	e5890010 	str	r0, [r9, #16]	; fField16
         d895c:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
         d8960:	e5a90014 	str	r0, [r9, #20]!	; fField20
         d8964:	ea000001 	b	d8970 <TGSMCodec::Produce(void *, unsigned long *, unsigned long *, CodecBlock *)+0xdc>
         d8968:	e3a08fb2 	mov	r8, #712	; 0x2c8
         d896c:	e2488b1e 	sub	r8, r8, #30720	; 0x7800
         d8970:	e1a00008 	mov	r0, r8
         d8974:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TGSMCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)
 * Address: 000d8978
 */
TGSMCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *) {
    /*
         d8978:	e1a0c00d 	mov	ip, sp
         d897c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         d8980:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         d8984:	e24cb014 	sub	fp, ip, #20	; 0x14
         d8988:	e1a04000 	mov	r4, r0
         d898c:	e1a05002 	mov	r5, r2
         d8990:	e3a09000 	mov	r9, #0	; 0x0
         d8994:	e5900018 	ldr	r0, [r0, #24]	; fField24
         d8998:	e3300000 	teq	r0, #0	; 0x0
         d899c:	0a000023 	beq	d8a30 <TGSMCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)+0xb8>
         d89a0:	e594a020 	ldr	sl, [r4, #32]	; fField32
         d89a4:	e080800a 	add	r8, r0, sl
         d89a8:	e1a07001 	mov	r7, r1
         d89ac:	e5950000 	ldr	r0, [r5]
         d89b0:	e1a010a0 	mov	r1, r0, lsr #1
         d89b4:	e3a000a0 	mov	r0, #160	; 0xa0
         d89b8:	eb6b67e2 	bl	1bb2948 <$__rt_udiv>
         d89bc:	e1a06000 	mov	r6, r0
         d89c0:	e594001c 	ldr	r0, [r4, #28]	; fField28
         d89c4:	e040100a 	sub	r1, r0, sl
         d89c8:	e3a00021 	mov	r0, #33	; 0x21
         d89cc:	eb6b67db 	bl	1bb2940 <$__rt_sdiv>
         d89d0:	e1500006 	cmp	r0, r6
         d89d4:	31a06000 	movcc	r6, r0
         d89d8:	e3a0a000 	mov	sl, #0	; 0x0
         d89dc:	e3560000 	cmp	r6, #0	; 0x0
         d89e0:	9a000008 	bls	d8a08 <TGSMCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)+0x90>
         d89e4:	e1a02008 	mov	r2, r8
         d89e8:	e1a01007 	mov	r1, r7
         d89ec:	e5940010 	ldr	r0, [r4, #16]	; fField16
         d89f0:	eb6a9d83 	bl	1b80004 <$gsm_encode(gsm_state *, short *, unsigned char *)>
         d89f4:	e2877d05 	add	r7, r7, #320	; 0x140
         d89f8:	e2888021 	add	r8, r8, #33	; 0x21
         d89fc:	e28aa001 	add	sl, sl, #1	; 0x1
         d8a00:	e15a0006 	cmp	sl, r6
         d8a04:	3afffff6 	bcc	d89e4 <TGSMCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)+0x6c>
         d8a08:	e0860286 	add	r0, r6, r6, lsl #5
         d8a0c:	e5941020 	ldr	r1, [r4, #32]	; fField32
         d8a10:	e0811000 	add	r1, r1, r0
         d8a14:	e5a41020 	str	r1, [r4, #32]!	; fField32
         d8a18:	e0861106 	add	r1, r6, r6, lsl #2
         d8a1c:	e1a01301 	mov	r1, r1, lsl #6
         d8a20:	e5851000 	str	r1, [r5]
         d8a24:	e59b3010 	ldr	r3, [fp, #16]	; fField16
         d8a28:	e5830000 	str	r0, [r3]
         d8a2c:	ea000001 	b	d8a38 <TGSMCodec::Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)+0xc0>
         d8a30:	e3a09fb2 	mov	r9, #712	; 0x2c8
         d8a34:	e2499b1e 	sub	r9, r9, #30720	; 0x7800
         d8a38:	e1a00009 	mov	r0, r9
         d8a3c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TGSMCodec::Start(void)
 * Address: 000d8a40
 */
TGSMCodec::Start(void) {
    /*
         d8a40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGSMCodec::Stop(int)
 * Address: 000d8a44
 */
TGSMCodec::Stop(int) {
    /*
         d8a44:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGSMCodec::BufferCompleted(void)
 * Address: 000d8a48
 */
TGSMCodec::BufferCompleted(void) {
    /*
         d8a48:	e280101c 	add	r1, r0, #28	; 0x1c
         d8a4c:	e8910003 	ldmia	r1, {r0, r1}
         d8a50:	e1310000 	teq	r1, r0
         d8a54:	13a00000 	movne	r0, #0	; 0x0
         d8a58:	03a00001 	moveq	r0, #1	; 0x1
         d8a5c:	e20000ff 	and	r0, r0, #255	; 0xff
         d8a60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__9TGSMCodecSFv
 * Address: 00389034
 */
void TGSMCodec::ClassInfo() {
    /*
        389034:	e24f0044 	sub	r0, pc, #68	; 0x44
        389038:	e1a0f00e 	mov	pc, lr
        38903c:	e3a00000 	mov	r0, #0	; 0x0
        389040:	e1a0f00e 	mov	pc, lr
        389044:	5447534d 	strplb	r5, [r7], -#845
        389048:	436f6465 	cmnmi	pc, #1694498816	; 0x65000000
        38904c:	63005453 	tstvs	r0, #1392508928	; 0x53000000
        389050:	6f756e64 	swivs	0x00756e64
        389054:	436f6465 	cmnmi	pc, #1694498816	; 0x65000000
        389058:	63000000 	tstvs	r0, #0	; 0x0
        38905c:	00000000 	andeq	r0, r0, r0
        389060:	eafffff3 	b	389034 <ClassInfo__9TGSMCodecSFv>
        389064:	ea5fcb63 	b	1b7bdf8 <TGSMCodec::$New(void)>
        389068:	ea5fcb63 	b	1b7bdfc <TGSMCodec::$Delete(void)>
        38906c:	ea5fcf63 	b	1b7ce00 <TGSMCodec::$Init(CodecBlock *)>
        389070:	ea5fcf63 	b	1b7ce04 <TGSMCodec::$Reset(CodecBlock *)>
        389074:	ea5fcf63 	b	1b7ce08 <TGSMCodec::$Produce(void *, unsigned long *, unsigned long *, CodecBlock *)>
        389078:	ea5fcf63 	b	1b7ce0c <TGSMCodec::$Consume(void const *, unsigned long *, unsigned long *, CodecBlock const *)>
        38907c:	ea5fcf63 	b	1b7ce10 <TGSMCodec::$Start(void)>
        389080:	ea5fcf63 	b	1b7ce14 <TGSMCodec::$Stop(int)>
        389084:	ea5fcf63 	b	1b7ce18 <TGSMCodec::$BufferCompleted(void)>
        389088:	e1a0000f 	mov	r0, pc
        38908c:	e1a0f00e 	mov	pc, lr
        389090:	50536f75 	subpls	r6, r3, r5, ror pc
        389094:	6e644472 	mcrvs	4, 3, r4, cr4, cr2, {3}
        389098:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        38909c:	00000000 	andeq	r0, r0, r0
    */
}

