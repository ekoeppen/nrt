#include "include/TCommToolConnectPB.h"

/**
 * Symbol: TCommToolConnectPB::__ct(unsigned long, long, unsigned long, unsigned char)
 * Address: 001d9a38
 */
TCommToolConnectPB::TCommToolConnectPB(unsigned long, long, unsigned long, unsigned char) {
    /*
        1d9a38:	e1a0c00d 	mov	ip, sp
        1d9a3c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1d9a40:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9a44:	e1b04000 	movs	r4, r0
        1d9a48:	e1a07001 	mov	r7, r1
        1d9a4c:	e1a06002 	mov	r6, r2
        1d9a50:	e1a05003 	mov	r5, r3
        1d9a54:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1d9a58:	e20080ff 	and	r8, r0, #255	; 0xff
        1d9a5c:	1a000003 	bne	1d9a70 <TCommToolConnectPB::__ct(unsigned long, long, unsigned long, unsigned char)+0x38>
        1d9a60:	e3a00088 	mov	r0, #136	; 0x88
        1d9a64:	eb67d333 	bl	1bce738 <$__nw(unsigned int)>
        1d9a68:	e1b04000 	movs	r4, r0
        1d9a6c:	0a00000c 	beq	1d9aa4 <TCommToolConnectPB::__ct(unsigned long, long, unsigned long, unsigned char)+0x6c>
        1d9a70:	e1a03008 	mov	r3, r8
        1d9a74:	e1a02005 	mov	r2, r5
        1d9a78:	e1a00004 	mov	r0, r4
        1d9a7c:	e3a01004 	mov	r1, #4	; 0x4
        1d9a80:	eb614efe 	bl	1a2d680 <TCommToolPB::$__ct(unsigned long, unsigned long, unsigned char)>
        1d9a84:	e284001c 	add	r0, r4, #28	; 0x1c
        1d9a88:	eb685754 	bl	1bef7e0 <TCommToolConnectRequest::$__ct(void)>
        1d9a8c:	e2840044 	add	r0, r4, #68	; 0x44
        1d9a90:	eb68574a 	bl	1bef7c0 <TCommToolConnectReply::$__ct(void)>
        1d9a94:	e2840058 	add	r0, r4, #88	; 0x58
        1d9a98:	eb60ae0e 	bl	1a052d8 <TConnectCompleteEvent::$__ct(void)>
        1d9a9c:	e5846068 	str	r6, [r4, #104]
        1d9aa0:	e5847024 	str	r7, [r4, #36]
        1d9aa4:	e1a00004 	mov	r0, r4
        1d9aa8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCommToolConnectPB::Prepare(TOptionArray *, CBufferSegment *, long *, unsigned char)
 * Address: 001d9aac
 */
TCommToolConnectPB::Prepare(TOptionArray *, CBufferSegment *, long *, unsigned char) {
    /*
        1d9aac:	e92d4010 	stmdb	sp!, {r4, lr}
        1d9ab0:	e59dc008 	ldr	ip, [sp, #8]
        1d9ab4:	e20c40ff 	and	r4, ip, #255	; 0xff
        1d9ab8:	e3a0e000 	mov	lr, #0	; 0x0
        1d9abc:	e3a0c000 	mov	ip, #0	; 0x0
        1d9ac0:	e5c0c040 	strb	ip, [r0, #64]	; fField64
        1d9ac4:	e580c030 	str	ip, [r0, #48]	; fField48
        1d9ac8:	e580c034 	str	ip, [r0, #52]	; fField52
        1d9acc:	e580c038 	str	ip, [r0, #56]	; fField56
        1d9ad0:	e580c03c 	str	ip, [r0, #60]	; fField60
        1d9ad4:	e3330000 	teq	r3, #0	; 0x0
        1d9ad8:	15933000 	ldrne	r3, [r3]
        1d9adc:	1580303c 	strne	r3, [r0, #60]	; fField60
        1d9ae0:	e3310000 	teq	r1, #0	; 0x0
        1d9ae4:	0a000004 	beq	1d9afc <TCommToolConnectPB::Prepare(TOptionArray *, CBufferSegment *, long *, unsigned char)+0x50>
        1d9ae8:	e5913000 	ldr	r3, [r1]
        1d9aec:	e3530000 	cmp	r3, #0	; 0x0
        1d9af0:	c5801030 	strgt	r1, [r0, #48]	; fField48
        1d9af4:	c5913000 	ldrgt	r3, [r1]
        1d9af8:	c5803034 	strgt	r3, [r0, #52]	; fField52
        1d9afc:	e3320000 	teq	r2, #0	; 0x0
        1d9b00:	15802038 	strne	r2, [r0, #56]	; fField56
        1d9b04:	e3340000 	teq	r4, #0	; 0x0
        1d9b08:	15c0c018 	strneb	ip, [r0, #24]	; fField24
        1d9b0c:	1a000007 	bne	1d9b30 <TCommToolConnectPB::Prepare(TOptionArray *, CBufferSegment *, long *, unsigned char)+0x84>
        1d9b10:	e580c060 	str	ip, [r0, #96]	; fField96
        1d9b14:	e280007c 	add	r0, r0, #124	; 0x7c
        1d9b18:	e8800006 	stmia	r0, {r1, r2}
        1d9b1c:	e520c004 	str	ip, [r0, -#4]!	; fField4
        1d9b20:	e3a01001 	mov	r1, #1	; 0x1
        1d9b24:	e580c00c 	str	ip, [r0, #12]	; fField12
        1d9b28:	e2400078 	sub	r0, r0, #120	; 0x78
        1d9b2c:	e5c01018 	strb	r1, [r0, #24]	; fField24
        1d9b30:	e1a0000e 	mov	r0, lr
        1d9b34:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

