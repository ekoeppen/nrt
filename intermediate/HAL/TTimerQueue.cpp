#include "include/TTimerQueue.h"

/**
 * Symbol: TTimerQueue::Cancel(unsigned long)
 * Address: 002556d8
 */
TTimerQueue::Cancel(unsigned long) {
    /*
        2556d8:	e92d4000 	stmdb	sp!, {lr}
        2556dc:	e3a03000 	mov	r3, #0	; 0x0
        2556e0:	e5902000 	ldr	r2, [r0]
        2556e4:	e3320000 	teq	r2, #0	; 0x0
        2556e8:	0a000018 	beq	255750 <TTimerQueue::Cancel(unsigned long)+0x78>
        2556ec:	e592c010 	ldr	ip, [r2, #16]
        2556f0:	e13c0001 	teq	ip, r1
        2556f4:	0a000004 	beq	25570c <TTimerQueue::Cancel(unsigned long)+0x34>
        2556f8:	e1a03002 	mov	r3, r2
        2556fc:	e5922008 	ldr	r2, [r2, #8]
        255700:	e3320000 	teq	r2, #0	; 0x0
        255704:	1afffff8 	bne	2556ec <TTimerQueue::Cancel(unsigned long)+0x14>
        255708:	ea000010 	b	255750 <TTimerQueue::Cancel(unsigned long)+0x78>
        25570c:	e3320000 	teq	r2, #0	; 0x0
        255710:	0a00000e 	beq	255750 <TTimerQueue::Cancel(unsigned long)+0x78>
        255714:	e5921008 	ldr	r1, [r2, #8]
        255718:	e3310000 	teq	r1, #0	; 0x0
        25571c:	0a000003 	beq	255730 <TTimerQueue::Cancel(unsigned long)+0x58>
        255720:	e592e00c 	ldr	lr, [r2, #12]	; fField12
        255724:	e5b1c00c 	ldr	ip, [r1, #12]!	; fField12
        255728:	e08ec00c 	add	ip, lr, ip
        25572c:	e581c000 	str	ip, [r1]
        255730:	e3330000 	teq	r3, #0	; 0x0
        255734:	05921008 	ldreq	r1, [r2, #8]
        255738:	05801000 	streq	r1, [r0]
        25573c:	15920008 	ldrne	r0, [r2, #8]
        255740:	15a30008 	strne	r0, [r3, #8]!
        255744:	e3a00000 	mov	r0, #0	; 0x0
        255748:	e5820008 	str	r0, [r2, #8]
        25574c:	e5c20014 	strb	r0, [r2, #20]
        255750:	e1a00002 	mov	r0, r2
        255754:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TTimerQueue::__ct(void)
 * Address: 0025591c
 */
TTimerQueue::TTimerQueue(void) {
    /*
        25591c:	e1a0c00d 	mov	ip, sp
        255920:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        255924:	e24cb004 	sub	fp, ip, #4	; 0x4
        255928:	e1b04000 	movs	r4, r0
        25592c:	1a000003 	bne	255940 <TTimerQueue::__ct(void)+0x24>
        255930:	e3a00010 	mov	r0, #16	; 0x10
        255934:	eb65e37f 	bl	1bce738 <$__nw(unsigned int)>
        255938:	e1b04000 	movs	r4, r0
        25593c:	0a000004 	beq	255954 <TTimerQueue::__ct(void)+0x38>
        255940:	e3a05000 	mov	r5, #0	; 0x0
        255944:	e5845000 	str	r5, [r4]
        255948:	e2840004 	add	r0, r4, #4	; 0x4
        25594c:	eb65f821 	bl	1bd39d8 <$GetGlobalTime>
        255950:	e5c4500c 	strb	r5, [r4, #12]	; fField12
        255954:	e1a00004 	mov	r0, r4
        255958:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTimerQueue::__dt(void)
 * Address: 0025595c
 */
TTimerQueue::~TTimerQueue(void) {
    /*
        25595c:	e3110001 	tst	r1, #1	; 0x1
        255960:	1a65df5e 	bne	1bcd6e0 <$__dl(void *)>
        255964:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTimerQueue::Check(void)
 * Address: 00255968
 */
TTimerQueue::Check(void) {
    /*
        255968:	e1a0c00d 	mov	ip, sp
        25596c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        255970:	e24cb004 	sub	fp, ip, #4	; 0x4
        255974:	e1a04000 	mov	r4, r0
        255978:	e3a06000 	mov	r6, #0	; 0x0
        25597c:	e5900000 	ldr	r0, [r0]
        255980:	e3300000 	teq	r0, #0	; 0x0
        255984:	0a000019 	beq	2559f0 <TTimerQueue::Check(void)+0x88>
        255988:	e1a00004 	mov	r0, r4
        25598c:	eb655b1e 	bl	1bac60c <TTimerQueue::$Calibrate(void)>
        255990:	e3a00001 	mov	r0, #1	; 0x1
        255994:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        255998:	e5945000 	ldr	r5, [r4]
        25599c:	e3350000 	teq	r5, #0	; 0x0
        2559a0:	0a00000d 	beq	2559dc <TTimerQueue::Check(void)+0x74>
        2559a4:	e595000c 	ldr	r0, [r5, #12]	; fField12
        2559a8:	e3500004 	cmp	r0, #4	; 0x4
        2559ac:	e5957008 	ldr	r7, [r5, #8]
        2559b0:	8a000009 	bhi	2559dc <TTimerQueue::Check(void)+0x74>
        2559b4:	e1a01005 	mov	r1, r5
        2559b8:	e1a00004 	mov	r0, r4
        2559bc:	e3a02000 	mov	r2, #0	; 0x0
        2559c0:	eb655b2b 	bl	1bac674 <TTimerQueue::$Dequeue(TTimerElement *, unsigned char)>
        2559c4:	e1a00005 	mov	r0, r5
        2559c8:	e5951000 	ldr	r1, [r5]
        2559cc:	e1a0e00f 	mov	lr, pc
        2559d0:	e281f004 	add	pc, r1, #4	; 0x4
        2559d4:	e1b05007 	movs	r5, r7
        2559d8:	1afffff1 	bne	2559a4 <TTimerQueue::Check(void)+0x3c>
        2559dc:	e3a00000 	mov	r0, #0	; 0x0
        2559e0:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        2559e4:	e5940000 	ldr	r0, [r4]
        2559e8:	e3300000 	teq	r0, #0	; 0x0
        2559ec:	15b0600c 	ldrne	r6, [r0, #12]!	; fField12
        2559f0:	e1a00006 	mov	r0, r6
        2559f4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTimerQueue::Calibrate(void)
 * Address: 002559f8
 */
TTimerQueue::Calibrate(void) {
    /*
        2559f8:	e1a0c00d 	mov	ip, sp
        2559fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        255a00:	e24cb004 	sub	fp, ip, #4	; 0x4
        255a04:	e1a04000 	mov	r4, r0
        255a08:	e5d0000c 	ldrb	r0, [r0, #12]	; fField12
        255a0c:	e3300000 	teq	r0, #0	; 0x0
        255a10:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        255a14:	e24dd010 	sub	sp, sp, #16	; 0x10
        255a18:	e1a0000d 	mov	r0, sp
        255a1c:	eb65f7ed 	bl	1bd39d8 <$GetGlobalTime>
        255a20:	e28d0008 	add	r0, sp, #8	; 0x8
        255a24:	e89d5000 	ldmia	sp, {ip, lr}
        255a28:	e8805000 	stmia	r0, {ip, lr}
        255a2c:	e2840004 	add	r0, r4, #4	; 0x4
        255a30:	e1a05000 	mov	r5, r0
        255a34:	e24dd010 	sub	sp, sp, #16	; 0x10
        255a38:	e28d1018 	add	r1, sp, #24	; 0x18
        255a3c:	e8915000 	ldmia	r1, {ip, lr}
        255a40:	e88d5000 	stmia	sp, {ip, lr}
        255a44:	e1a0100d 	mov	r1, sp
        255a48:	eb662d93 	bl	1be109c <$CompSub>
        255a4c:	e28d0008 	add	r0, sp, #8	; 0x8
        255a50:	e8bd5000 	ldmia	sp!, {ip, lr}
        255a54:	e8805000 	stmia	r0, {ip, lr}
        255a58:	e59d0004 	ldr	r0, [sp, #4]
        255a5c:	e5941000 	ldr	r1, [r4]
        255a60:	e3310000 	teq	r1, #0	; 0x0
        255a64:	0a000010 	beq	255aac <TTimerQueue::Calibrate(void)+0xb4>
        255a68:	e3a03004 	mov	r3, #4	; 0x4
        255a6c:	e591200c 	ldr	r2, [r1, #12]	; fField12
        255a70:	e1520000 	cmp	r2, r0
        255a74:	3a000005 	bcc	255a90 <TTimerQueue::Calibrate(void)+0x98>
        255a78:	e591200c 	ldr	r2, [r1, #12]	; fField12
        255a7c:	e0420000 	sub	r0, r2, r0
        255a80:	e3500004 	cmp	r0, #4	; 0x4
        255a84:	93a00004 	movls	r0, #4	; 0x4
        255a88:	e5a1000c 	str	r0, [r1, #12]!	; fField12
        255a8c:	ea000006 	b	255aac <TTimerQueue::Calibrate(void)+0xb4>
        255a90:	e0400002 	sub	r0, r0, r2
        255a94:	e3500004 	cmp	r0, #4	; 0x4
        255a98:	e581300c 	str	r3, [r1, #12]	; fField12
        255a9c:	9a000002 	bls	255aac <TTimerQueue::Calibrate(void)+0xb4>
        255aa0:	e5911008 	ldr	r1, [r1, #8]
        255aa4:	e3310000 	teq	r1, #0	; 0x0
        255aa8:	1affffef 	bne	255a6c <TTimerQueue::Calibrate(void)+0x74>
        255aac:	e28d0010 	add	r0, sp, #16	; 0x10
        255ab0:	e8901008 	ldmia	r0, {r3, ip}
        255ab4:	e8851008 	stmia	r5, {r3, ip}
        255ab8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTimerQueue::Enqueue(TTimerElement *)
 * Address: 00255abc
 */
TTimerQueue::Enqueue(TTimerElement *) {
    /*
        255abc:	e92d4000 	stmdb	sp!, {lr}
        255ac0:	e3a02000 	mov	r2, #0	; 0x0
        255ac4:	e3310000 	teq	r1, #0	; 0x0
        255ac8:	0a000024 	beq	255b60 <TTimerQueue::Enqueue(TTimerElement *)+0xa4>
        255acc:	e5913004 	ldr	r3, [r1, #4]
        255ad0:	e1330000 	teq	r3, r0
        255ad4:	1a000021 	bne	255b60 <TTimerQueue::Enqueue(TTimerElement *)+0xa4>
        255ad8:	e591300c 	ldr	r3, [r1, #12]	; fField12
        255adc:	e3330000 	teq	r3, #0	; 0x0
        255ae0:	0a00001e 	beq	255b60 <TTimerQueue::Enqueue(TTimerElement *)+0xa4>
        255ae4:	e3a03000 	mov	r3, #0	; 0x0
        255ae8:	e5902000 	ldr	r2, [r0]
        255aec:	e3320000 	teq	r2, #0	; 0x0
        255af0:	0a00000b 	beq	255b24 <TTimerQueue::Enqueue(TTimerElement *)+0x68>
        255af4:	e591e00c 	ldr	lr, [r1, #12]	; fField12
        255af8:	e592c00c 	ldr	ip, [r2, #12]	; fField12
        255afc:	e15e000c 	cmp	lr, ip
        255b00:	3a000007 	bcc	255b24 <TTimerQueue::Enqueue(TTimerElement *)+0x68>
        255b04:	e04e300c 	sub	r3, lr, ip
        255b08:	e3530004 	cmp	r3, #4	; 0x4
        255b0c:	93a03004 	movls	r3, #4	; 0x4
        255b10:	e581300c 	str	r3, [r1, #12]	; fField12
        255b14:	e1a03002 	mov	r3, r2
        255b18:	e5922008 	ldr	r2, [r2, #8]
        255b1c:	e3320000 	teq	r2, #0	; 0x0
        255b20:	1afffff3 	bne	255af4 <TTimerQueue::Enqueue(TTimerElement *)+0x38>
        255b24:	e3330000 	teq	r3, #0	; 0x0
        255b28:	e5812008 	str	r2, [r1, #8]
        255b2c:	05801000 	streq	r1, [r0]
        255b30:	15a31008 	strne	r1, [r3, #8]!
        255b34:	e3320000 	teq	r2, #0	; 0x0
        255b38:	0a000005 	beq	255b54 <TTimerQueue::Enqueue(TTimerElement *)+0x98>
        255b3c:	e592300c 	ldr	r3, [r2, #12]	; fField12
        255b40:	e591000c 	ldr	r0, [r1, #12]	; fField12
        255b44:	e0430000 	sub	r0, r3, r0
        255b48:	e3500004 	cmp	r0, #4	; 0x4
        255b4c:	93a00004 	movls	r0, #4	; 0x4
        255b50:	e5a2000c 	str	r0, [r2, #12]!	; fField12
        255b54:	e3a00001 	mov	r0, #1	; 0x1
        255b58:	e5c10014 	strb	r0, [r1, #20]
        255b5c:	e1a02001 	mov	r2, r1
        255b60:	e1a00002 	mov	r0, r2
        255b64:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TTimerQueue::Dequeue(TTimerElement *, unsigned char)
 * Address: 00255b68
 */
TTimerQueue::Dequeue(TTimerElement *, unsigned char) {
    /*
        255b68:	e92d4000 	stmdb	sp!, {lr}
        255b6c:	e202c0ff 	and	ip, r2, #255	; 0xff
        255b70:	e3a02000 	mov	r2, #0	; 0x0
        255b74:	e3310000 	teq	r1, #0	; 0x0
        255b78:	0a00001f 	beq	255bfc <TTimerQueue::Dequeue(TTimerElement *, unsigned char)+0x94>
        255b7c:	e5913004 	ldr	r3, [r1, #4]
        255b80:	e1330000 	teq	r3, r0
        255b84:	1a00001c 	bne	255bfc <TTimerQueue::Dequeue(TTimerElement *, unsigned char)+0x94>
        255b88:	e3a03000 	mov	r3, #0	; 0x0
        255b8c:	e5902000 	ldr	r2, [r0]
        255b90:	e3320000 	teq	r2, #0	; 0x0
        255b94:	0a000018 	beq	255bfc <TTimerQueue::Dequeue(TTimerElement *, unsigned char)+0x94>
        255b98:	e1320001 	teq	r2, r1
        255b9c:	0a000004 	beq	255bb4 <TTimerQueue::Dequeue(TTimerElement *, unsigned char)+0x4c>
        255ba0:	e1a03002 	mov	r3, r2
        255ba4:	e5922008 	ldr	r2, [r2, #8]
        255ba8:	e3320000 	teq	r2, #0	; 0x0
        255bac:	1afffff9 	bne	255b98 <TTimerQueue::Dequeue(TTimerElement *, unsigned char)+0x30>
        255bb0:	ea000011 	b	255bfc <TTimerQueue::Dequeue(TTimerElement *, unsigned char)+0x94>
        255bb4:	e3320000 	teq	r2, #0	; 0x0
        255bb8:	0a00000f 	beq	255bfc <TTimerQueue::Dequeue(TTimerElement *, unsigned char)+0x94>
        255bbc:	e33c0000 	teq	ip, #0	; 0x0
        255bc0:	15921008 	ldrne	r1, [r2, #8]
        255bc4:	13310000 	teqne	r1, #0	; 0x0
        255bc8:	0a000003 	beq	255bdc <TTimerQueue::Dequeue(TTimerElement *, unsigned char)+0x74>
        255bcc:	e592e00c 	ldr	lr, [r2, #12]	; fField12
        255bd0:	e5b1c00c 	ldr	ip, [r1, #12]!	; fField12
        255bd4:	e08ec00c 	add	ip, lr, ip
        255bd8:	e581c000 	str	ip, [r1]
        255bdc:	e3330000 	teq	r3, #0	; 0x0
        255be0:	05921008 	ldreq	r1, [r2, #8]
        255be4:	05801000 	streq	r1, [r0]
        255be8:	15920008 	ldrne	r0, [r2, #8]
        255bec:	15a30008 	strne	r0, [r3, #8]!
        255bf0:	e3a00000 	mov	r0, #0	; 0x0
        255bf4:	e5820008 	str	r0, [r2, #8]
        255bf8:	e5c20014 	strb	r0, [r2, #20]
        255bfc:	e1a00002 	mov	r0, r2
        255c00:	e8bd8000 	ldmia	sp!, {pc}
    */
}

