#include "include/TXTextDescriptor.h"

/**
 * Symbol: TXTextDescriptor::__ct(void)
 * Address: 00232820
 */
TXTextDescriptor::TXTextDescriptor(void) {
    /*
        232820:	e1a0c00d 	mov	ip, sp
        232824:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        232828:	e24cb004 	sub	fp, ip, #4	; 0x4
        23282c:	e3300000 	teq	r0, #0	; 0x0
        232830:	1a000003 	bne	232844 <TXTextDescriptor::__ct(void)+0x24>
        232834:	e3a00014 	mov	r0, #20	; 0x14
        232838:	eb666fbe 	bl	1bce738 <$__nw(unsigned int)>
        23283c:	e3300000 	teq	r0, #0	; 0x0
        232840:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        232844:	e3a01000 	mov	r1, #0	; 0x0
        232848:	e5801010 	str	r1, [r0, #16]	; fField16
        23284c:	e5801004 	str	r1, [r0, #4]	; fField4
        232850:	e5801000 	str	r1, [r0]
        232854:	e5801008 	str	r1, [r0, #8]	; fField8
        232858:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXTextDescriptor::Set(TXStream *, long)
 * Address: 0023285c
 */
TXTextDescriptor::Set(TXStream *, long) {
    /*
        23285c:	e5801010 	str	r1, [r0, #16]	; fField16
        232860:	e3a01000 	mov	r1, #0	; 0x0
        232864:	e9800006 	stmib	r0, {r1, r2}
        232868:	e5801000 	str	r1, [r0]
        23286c:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        232870:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXTextDescriptor::Set(unsigned short *, long)
 * Address: 00232874
 */
TXTextDescriptor::Set(unsigned short *, long) {
    /*
        232874:	e9800006 	stmib	r0, {r1, r2}
        232878:	e3a01000 	mov	r1, #0	; 0x0
        23287c:	e5801010 	str	r1, [r0, #16]	; fField16
        232880:	e5801000 	str	r1, [r0]
        232884:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        232888:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXTextDescriptor::Set(TXChars *, long, long)
 * Address: 002328fc
 */
TXTextDescriptor::Set(TXChars *, long, long) {
    /*
        2328fc:	e5801000 	str	r1, [r0]
        232900:	e3a01000 	mov	r1, #0	; 0x0
        232904:	e980000a 	stmib	r0, {r1, r3}
        232908:	e580200c 	str	r2, [r0, #12]	; fField12
        23290c:	e5a01010 	str	r1, [r0, #16]!	; fField16
        232910:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXTextDescriptor::CopyTo(TXTextDescriptor *, long)
 * Address: 00232914
 */
TXTextDescriptor::CopyTo(TXTextDescriptor *, long) {
    /*
        232914:	e1a0c00d 	mov	ip, sp
        232918:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23291c:	e24cb004 	sub	fp, ip, #4	; 0x4
        232920:	e1a05000 	mov	r5, r0
        232924:	e1a04001 	mov	r4, r1
        232928:	e1a06002 	mov	r6, r2
        23292c:	e3a07000 	mov	r7, #0	; 0x0
        232930:	e5900004 	ldr	r0, [r0, #4]	; fField4
        232934:	e1a02082 	mov	r2, r2, lsl #1
        232938:	e3300000 	teq	r0, #0	; 0x0
        23293c:	0a000026 	beq	2329dc <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0xc8>
        232940:	e5941004 	ldr	r1, [r4, #4]	; fField4
        232944:	e3310000 	teq	r1, #0	; 0x0
        232948:	0a000010 	beq	232990 <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0x7c>
        23294c:	e595300c 	ldr	r3, [r5, #12]	; fField12
        232950:	e0800083 	add	r0, r0, r3, lsl #1
        232954:	e594300c 	ldr	r3, [r4, #12]	; fField12
        232958:	e0811083 	add	r1, r1, r3, lsl #1
        23295c:	e3360001 	teq	r6, #1	; 0x1
        232960:	1a000005 	bne	23297c <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0x68>
        232964:	e5900000 	ldr	r0, [r0]
        232968:	e1a00820 	mov	r0, r0, lsr #16
        23296c:	e5c10001 	strb	r0, [r1, #1]
        232970:	e1a00440 	mov	r0, r0, asr #8
        232974:	e5c10000 	strb	r0, [r1]
        232978:	ea000000 	b	232980 <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0x6c>
        23297c:	eb66b174 	bl	1bdef54 <$BlockMove>
        232980:	e595000c 	ldr	r0, [r5, #12]	; fField12
        232984:	e0800006 	add	r0, r0, r6
        232988:	e5a5000c 	str	r0, [r5, #12]!	; fField12
        23298c:	ea00001c 	b	232a04 <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0xf0>
        232990:	e5943010 	ldr	r3, [r4, #16]	; fField16
        232994:	e3330000 	teq	r3, #0	; 0x0
        232998:	0a000004 	beq	2329b0 <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0x9c>
        23299c:	e595100c 	ldr	r1, [r5, #12]	; fField12
        2329a0:	e0801081 	add	r1, r0, r1, lsl #1
        2329a4:	e1a00003 	mov	r0, r3
        2329a8:	eb659cce 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        2329ac:	ea000026 	b	232a4c <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0x138>
        2329b0:	e594c000 	ldr	ip, [r4]
        2329b4:	e33c0000 	teq	ip, #0	; 0x0
        2329b8:	0a000027 	beq	232a5c <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0x148>
        2329bc:	e1a03005 	mov	r3, r5
        2329c0:	e1a0000c 	mov	r0, ip
        2329c4:	e3a02000 	mov	r2, #0	; 0x0
        2329c8:	e594100c 	ldr	r1, [r4, #12]	; fField12
        2329cc:	e59cc000 	ldr	ip, [ip]
        2329d0:	e1a0e00f 	mov	lr, pc
        2329d4:	e28cf008 	add	pc, ip, #8	; 0x8
        2329d8:	ea000008 	b	232a00 <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0xec>
        2329dc:	e5950010 	ldr	r0, [r5, #16]	; fField16
        2329e0:	e3300000 	teq	r0, #0	; 0x0
        2329e4:	0a00000e 	beq	232a24 <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0x110>
        2329e8:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2329ec:	e3310000 	teq	r1, #0	; 0x0
        2329f0:	0a000007 	beq	232a14 <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0x100>
        2329f4:	e594300c 	ldr	r3, [r4, #12]	; fField12
        2329f8:	e0811083 	add	r1, r1, r3, lsl #1
        2329fc:	eb659cba 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        232a00:	e1a07000 	mov	r7, r0
        232a04:	e594000c 	ldr	r0, [r4, #12]	; fField12
        232a08:	e0800006 	add	r0, r0, r6
        232a0c:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        232a10:	ea000011 	b	232a5c <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0x148>
        232a14:	e594c000 	ldr	ip, [r4]
        232a18:	e33c0000 	teq	ip, #0	; 0x0
        232a1c:	1affffe6 	bne	2329bc <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0xa8>
        232a20:	ea00000d 	b	232a5c <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0x148>
        232a24:	e595c000 	ldr	ip, [r5]
        232a28:	e33c0000 	teq	ip, #0	; 0x0
        232a2c:	0a00000a 	beq	232a5c <TXTextDescriptor::CopyTo(TXTextDescriptor *, long)+0x148>
        232a30:	e1a03006 	mov	r3, r6
        232a34:	e1a01004 	mov	r1, r4
        232a38:	e1a0000c 	mov	r0, ip
        232a3c:	e595200c 	ldr	r2, [r5, #12]	; fField12
        232a40:	e59cc000 	ldr	ip, [ip]
        232a44:	e1a0e00f 	mov	lr, pc
        232a48:	e28cf00c 	add	pc, ip, #12	; 0xc
        232a4c:	e1a07000 	mov	r7, r0
        232a50:	e595000c 	ldr	r0, [r5, #12]	; fField12
        232a54:	e0800006 	add	r0, r0, r6
        232a58:	e5a5000c 	str	r0, [r5, #12]!	; fField12
        232a5c:	e1a00007 	mov	r0, r7
        232a60:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

