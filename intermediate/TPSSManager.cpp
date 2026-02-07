#include "include/TPSSManager.h"

/**
 * Symbol: TPSSManager::UIEngine(unsigned char)
 * Address: 00154988
 */
TPSSManager::UIEngine(unsigned char) {
    /*
        154988:	e1a0c00d 	mov	ip, sp
        15498c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        154990:	e24cb004 	sub	fp, ip, #4	; 0x4
        154994:	e1a04000 	mov	r4, r0
        154998:	e20150ff 	and	r5, r1, #255	; 0xff
        15499c:	eb00000b 	bl	1549d0 <TPSSManager::MessageInUse(void)>
        1549a0:	e3350000 	teq	r5, #0	; 0x0
        1549a4:	11a00004 	movne	r0, r4
        1549a8:	1b66df1b 	blne	1b0c61c <TPSSManager::$DoReplyTransitions(void)>
        1549ac:	e3300000 	teq	r0, #0	; 0x0
        1549b0:	01a00004 	moveq	r0, r4
        1549b4:	0b000093 	bleq	154c08 <TPSSManager::DeregisterStores(void)>
        1549b8:	e3300000 	teq	r0, #0	; 0x0
        1549bc:	01a00004 	moveq	r0, r4
        1549c0:	0b00006c 	bleq	154b78 <TPSSManager::RegisterStores(void)>
        1549c4:	e1a00004 	mov	r0, r4
        1549c8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1549cc:	ea6694b8 	b	1af9cb4 <TPSSManager::$GCStores(void)>
    */
}

/**
 * Symbol: TPSSManager::MessageInUse(void)
 * Address: 001549d0
 */
TPSSManager::MessageInUse(void) {
    /*
        1549d0:	e3a01000 	mov	r1, #0	; 0x0
        1549d4:	e5902304 	ldr	r2, [r0, #772]	; fField772
        1549d8:	e3520000 	cmp	r2, #0	; 0x0
        1549dc:	da00000b 	ble	154a10 <TPSSManager::MessageInUse(void)+0x40>
        1549e0:	e0613381 	rsb	r3, r1, r1, lsl #7
        1549e4:	e0803103 	add	r3, r0, r3, lsl #2
        1549e8:	e5933308 	ldr	r3, [r3, #776]
        1549ec:	e3330002 	teq	r3, #2	; 0x2
        1549f0:	13330003 	teqne	r3, #3	; 0x3
        1549f4:	13330006 	teqne	r3, #6	; 0x6
        1549f8:	13330007 	teqne	r3, #7	; 0x7
        1549fc:	03a00001 	moveq	r0, #1	; 0x1
        154a00:	01a0f00e 	moveq	pc, lr
        154a04:	e2811001 	add	r1, r1, #1	; 0x1
        154a08:	e1520001 	cmp	r2, r1
        154a0c:	cafffff3 	bgt	1549e0 <TPSSManager::MessageInUse(void)+0x10>
        154a10:	e3a00000 	mov	r0, #0	; 0x0
        154a14:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPSSManager::DoReplyTransitions(void)
 * Address: 00154a18
 */
TPSSManager::DoReplyTransitions(void) {
    /*
        154a18:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        154a1c:	e3a02000 	mov	r2, #0	; 0x0
        154a20:	e5901304 	ldr	r1, [r0, #772]	; fField772
        154a24:	e3510000 	cmp	r1, #0	; 0x0
        154a28:	da000015 	ble	154a84 <TPSSManager::DoReplyTransitions(void)+0x6c>
        154a2c:	e3a04004 	mov	r4, #4	; 0x4
        154a30:	e3a0e005 	mov	lr, #5	; 0x5
        154a34:	e3a0c008 	mov	ip, #8	; 0x8
        154a38:	e3a03001 	mov	r3, #1	; 0x1
        154a3c:	e0621382 	rsb	r1, r2, r2, lsl #7
        154a40:	e0801101 	add	r1, r0, r1, lsl #2
        154a44:	e5915308 	ldr	r5, [r1, #776]
        154a48:	e3350002 	teq	r5, #2	; 0x2
        154a4c:	05a14308 	streq	r4, [r1, #776]!
        154a50:	0a000007 	beq	154a74 <TPSSManager::DoReplyTransitions(void)+0x5c>
        154a54:	e3350003 	teq	r5, #3	; 0x3
        154a58:	05a1e308 	streq	lr, [r1, #776]!
        154a5c:	0a000004 	beq	154a74 <TPSSManager::DoReplyTransitions(void)+0x5c>
        154a60:	e3350006 	teq	r5, #6	; 0x6
        154a64:	05a1c308 	streq	ip, [r1, #776]!
        154a68:	0a000001 	beq	154a74 <TPSSManager::DoReplyTransitions(void)+0x5c>
        154a6c:	e3350007 	teq	r5, #7	; 0x7
        154a70:	05a13308 	streq	r3, [r1, #776]!
        154a74:	e2822001 	add	r2, r2, #1	; 0x1
        154a78:	e5901304 	ldr	r1, [r0, #772]	; fField772
        154a7c:	e1510002 	cmp	r1, r2
        154a80:	caffffed 	bgt	154a3c <TPSSManager::DoReplyTransitions(void)+0x24>
        154a84:	e3a00000 	mov	r0, #0	; 0x0
        154a88:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: TPSSManager::StuffSendAndTransition(int, int, int)
 * Address: 00154a8c
 */
TPSSManager::StuffSendAndTransition(int, int, int) {
    /*
        154a8c:	e1a0c00d 	mov	ip, sp
        154a90:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        154a94:	e24cb004 	sub	fp, ip, #4	; 0x4
        154a98:	e1a0e003 	mov	lr, r3
        154a9c:	e59f30cc 	ldr	r3, [pc, #cc]	; 154b70 <TPSSManager::StuffSendAndTransition(int, int, int)+0xe4>
        154aa0:	e5803190 	str	r3, [r0, #400]	; fField400
        154aa4:	e59f30c8 	ldr	r3, [pc, #c8]	; 154b74 <TPSSManager::StuffSendAndTransition(int, int, int)+0xe8>
        154aa8:	e3a05000 	mov	r5, #0	; 0x0
        154aac:	e0611381 	rsb	r1, r1, r1, lsl #7
        154ab0:	e5802198 	str	r2, [r0, #408]	; fField408
        154ab4:	e5803194 	str	r3, [r0, #404]	; fField404
        154ab8:	e0804101 	add	r4, r0, r1, lsl #2
        154abc:	e0857105 	add	r7, r5, r5, lsl #2
        154ac0:	e0806187 	add	r6, r0, r7, lsl #3
        154ac4:	e2868f6b 	add	r8, r6, #428	; 0x1ac
        154ac8:	e0841285 	add	r1, r4, r5, lsl #5
        154acc:	e2819fd1 	add	r9, r1, #836	; 0x344
        154ad0:	e8b9100e 	ldmia	r9!, {r1, r2, r3, ip}
        154ad4:	e8a8100e 	stmia	r8!, {r1, r2, r3, ip}
        154ad8:	e899100e 	ldmia	r9, {r1, r2, r3, ip}
        154adc:	e888100e 	stmia	r8, {r1, r2, r3, ip}
        154ae0:	e0841207 	add	r1, r4, r7, lsl #4
        154ae4:	e59123d4 	ldr	r2, [r1, #980]
        154ae8:	e2811ff1 	add	r1, r1, #964	; 0x3c4
        154aec:	e2855001 	add	r5, r5, #1	; 0x1
        154af0:	e3550004 	cmp	r5, #4	; 0x4
        154af4:	e5a621a4 	str	r2, [r6, #420]!
        154af8:	e5861004 	str	r1, [r6, #4]
        154afc:	baffffee 	blt	154abc <TPSSManager::StuffSendAndTransition(int, int, int)+0x30>
        154b00:	e59413d4 	ldr	r1, [r4, #980]
        154b04:	e580119c 	str	r1, [r0, #412]	; fField412
        154b08:	e2841ff1 	add	r1, r4, #964	; 0x3c4
        154b0c:	e58011a0 	str	r1, [r0, #416]	; fField416
        154b10:	e5a4e308 	str	lr, [r4, #776]!
        154b14:	e280ef4f 	add	lr, r0, #316	; 0x13c
        154b18:	e280cd06 	add	ip, r0, #384	; 0x180
        154b1c:	e2800e19 	add	r0, r0, #400	; 0x190
        154b20:	e1a05000 	mov	r5, r0
        154b24:	e3a010b4 	mov	r1, #180	; 0xb4
        154b28:	e3a02000 	mov	r2, #0	; 0x0
        154b2c:	e3a03000 	mov	r3, #0	; 0x0
        154b30:	e3a04000 	mov	r4, #0	; 0x0
        154b34:	e3a06000 	mov	r6, #0	; 0x0
        154b38:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        154b3c:	e1a03006 	mov	r3, r6
        154b40:	e3a02001 	mov	r2, #1	; 0x1
        154b44:	e1a01004 	mov	r1, r4
        154b48:	e3a000b4 	mov	r0, #180	; 0xb4
        154b4c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        154b50:	e1a03005 	mov	r3, r5
        154b54:	e92d0008 	stmdb	sp!, {r3}
        154b58:	e1a0000e 	mov	r0, lr
        154b5c:	e3a03000 	mov	r3, #0	; 0x0
        154b60:	e49c1008 	ldr	r1, [ip], #8
        154b64:	e59c2000 	ldr	r2, [ip]
        154b68:	eb6a1877 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        154b6c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        154b70:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        154b74:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
    */
}

/**
 * Symbol: TPSSManager::RegisterStores(void)
 * Address: 00154b78
 */
TPSSManager::RegisterStores(void) {
    /*
        154b78:	e1a0c00d 	mov	ip, sp
        154b7c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        154b80:	e24cb004 	sub	fp, ip, #4	; 0x4
        154b84:	e3a01000 	mov	r1, #0	; 0x0
        154b88:	e3a03000 	mov	r3, #0	; 0x0
        154b8c:	e5902304 	ldr	r2, [r0, #772]	; fField772
        154b90:	e3520000 	cmp	r2, #0	; 0x0
        154b94:	da000008 	ble	154bbc <TPSSManager::RegisterStores(void)+0x44>
        154b98:	e061c381 	rsb	ip, r1, r1, lsl #7
        154b9c:	e080c10c 	add	ip, r0, ip, lsl #2
        154ba0:	e59cc308 	ldr	ip, [ip, #776]
        154ba4:	e33c0002 	teq	ip, #2	; 0x2
        154ba8:	133c0003 	teqne	ip, #3	; 0x3
        154bac:	0a000013 	beq	154c00 <TPSSManager::RegisterStores(void)+0x88>
        154bb0:	e2811001 	add	r1, r1, #1	; 0x1
        154bb4:	e1520001 	cmp	r2, r1
        154bb8:	cafffff6 	bgt	154b98 <TPSSManager::RegisterStores(void)+0x20>
        154bbc:	e3a01000 	mov	r1, #0	; 0x0
        154bc0:	e3520000 	cmp	r2, #0	; 0x0
        154bc4:	da00000d 	ble	154c00 <TPSSManager::RegisterStores(void)+0x88>
        154bc8:	e061c381 	rsb	ip, r1, r1, lsl #7
        154bcc:	e080c10c 	add	ip, r0, ip, lsl #2
        154bd0:	e59cc308 	ldr	ip, [ip, #776]
        154bd4:	e33c0001 	teq	ip, #1	; 0x1
        154bd8:	1a000005 	bne	154bf4 <TPSSManager::RegisterStores(void)+0x7c>
        154bdc:	e3a03002 	mov	r3, #2	; 0x2
        154be0:	e59f2008 	ldr	r2, [pc, #8]	; 154bf0 <TPSSManager::RegisterStores(void)+0x78>
        154be4:	eb66ff8b 	bl	1b14a18 <TPSSManager::$StuffSendAndTransition(int, int, int)>
        154be8:	e3a00001 	mov	r0, #1	; 0x1
        154bec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        154bf0:	73746f72 	cmnvc	r4, #456	; 0x1c8
        154bf4:	e2811001 	add	r1, r1, #1	; 0x1
        154bf8:	e1520001 	cmp	r2, r1
        154bfc:	cafffff1 	bgt	154bc8 <TPSSManager::RegisterStores(void)+0x50>
        154c00:	e1a00003 	mov	r0, r3
        154c04:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPSSManager::DeregisterStores(void)
 * Address: 00154c08
 */
TPSSManager::DeregisterStores(void) {
    /*
        154c08:	e1a0c00d 	mov	ip, sp
        154c0c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        154c10:	e24cb004 	sub	fp, ip, #4	; 0x4
        154c14:	e3a01000 	mov	r1, #0	; 0x0
        154c18:	e5902304 	ldr	r2, [r0, #772]	; fField772
        154c1c:	e3520000 	cmp	r2, #0	; 0x0
        154c20:	da00000d 	ble	154c5c <TPSSManager::DeregisterStores(void)+0x54>
        154c24:	e0613381 	rsb	r3, r1, r1, lsl #7
        154c28:	e0803103 	add	r3, r0, r3, lsl #2
        154c2c:	e5933308 	ldr	r3, [r3, #776]
        154c30:	e3330005 	teq	r3, #5	; 0x5
        154c34:	1a000005 	bne	154c50 <TPSSManager::DeregisterStores(void)+0x48>
        154c38:	e3a03006 	mov	r3, #6	; 0x6
        154c3c:	e59f2008 	ldr	r2, [pc, #8]	; 154c4c <TPSSManager::DeregisterStores(void)+0x44>
        154c40:	eb66ff74 	bl	1b14a18 <TPSSManager::$StuffSendAndTransition(int, int, int)>
        154c44:	e3a00001 	mov	r0, #1	; 0x1
        154c48:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        154c4c:	72737472 	rsbvcs	r7, r3, #1912602624	; 0x72000000
        154c50:	e2811001 	add	r1, r1, #1	; 0x1
        154c54:	e1520001 	cmp	r2, r1
        154c58:	cafffff1 	bgt	154c24 <TPSSManager::DeregisterStores(void)+0x1c>
        154c5c:	e3a00000 	mov	r0, #0	; 0x0
        154c60:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPSSManager::GCStores(void)
 * Address: 00154c64
 */
TPSSManager::GCStores(void) {
    /*
        154c64:	e1a0c00d 	mov	ip, sp
        154c68:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        154c6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        154c70:	e1a04000 	mov	r4, r0
        154c74:	e3a06000 	mov	r6, #0	; 0x0
        154c78:	e5900304 	ldr	r0, [r0, #772]	; fField772
        154c7c:	e3500000 	cmp	r0, #0	; 0x0
        154c80:	d91babf0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        154c84:	e3a09000 	mov	r9, #0	; 0x0
        154c88:	e0660386 	rsb	r0, r6, r6, lsl #7
        154c8c:	e0848100 	add	r8, r4, r0, lsl #2
        154c90:	e5980308 	ldr	r0, [r8, #776]
        154c94:	e3300008 	teq	r0, #8	; 0x8
        154c98:	1a000030 	bne	154d60 <TPSSManager::GCStores(void)+0xfc>
        154c9c:	e0845106 	add	r5, r4, r6, lsl #2
        154ca0:	e5950af8 	ldr	r0, [r5, #2808]
        154ca4:	e3300000 	teq	r0, #0	; 0x0
        154ca8:	1a000008 	bne	154cd0 <TPSSManager::GCStores(void)+0x6c>
        154cac:	e3a03000 	mov	r3, #0	; 0x0
        154cb0:	e3a02000 	mov	r2, #0	; 0x0
        154cb4:	e92d000c 	stmdb	sp!, {r2, r3}
        154cb8:	e1a02006 	mov	r2, r6
        154cbc:	e1a00004 	mov	r0, r4
        154cc0:	e3a01034 	mov	r1, #52	; 0x34
        154cc4:	eb66c17e 	bl	1b052c4 <TPSSManager::$SendServer(unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
        154cc8:	e28dd008 	add	sp, sp, #8	; 0x8
        154ccc:	ea000018 	b	154d34 <TPSSManager::GCStores(void)+0xd0>
        154cd0:	e1a02006 	mov	r2, r6
        154cd4:	e3a03000 	mov	r3, #0	; 0x0
        154cd8:	e3a0106f 	mov	r1, #111	; 0x6f
        154cdc:	e5950b08 	ldr	r0, [r5, #2824]
        154ce0:	eb6a07a1 	bl	1bd6b6c <TCardMessage::$MessageStuff(unsigned long, unsigned long, unsigned long)>
        154ce4:	e3a03000 	mov	r3, #0	; 0x0
        154ce8:	e3a020b8 	mov	r2, #184	; 0xb8
        154cec:	e5950af8 	ldr	r0, [r5, #2808]
        154cf0:	e5951b08 	ldr	r1, [r5, #2824]
        154cf4:	eb6a13fc 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        154cf8:	e5950af8 	ldr	r0, [r5, #2808]
        154cfc:	eb69e277 	bl	1bcd6e0 <$__dl(void *)>
        154d00:	e5957b08 	ldr	r7, [r5, #2824]
        154d04:	e3370000 	teq	r7, #0	; 0x0
        154d08:	0a000007 	beq	154d2c <TPSSManager::GCStores(void)+0xc8>
        154d0c:	e28700bc 	add	r0, r7, #188	; 0xbc
        154d10:	e3a01000 	mov	r1, #0	; 0x0
        154d14:	eb69e67d 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        154d18:	e1a00007 	mov	r0, r7
        154d1c:	e3a01000 	mov	r1, #0	; 0x0
        154d20:	eb69e274 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
        154d24:	e1a00007 	mov	r0, r7
        154d28:	eb69e26c 	bl	1bcd6e0 <$__dl(void *)>
        154d2c:	e5859af8 	str	r9, [r5, #2808]
        154d30:	e5a59b08 	str	r9, [r5, #2824]!
        154d34:	e3a05000 	mov	r5, #0	; 0x0
        154d38:	e0850105 	add	r0, r5, r5, lsl #2
        154d3c:	e0880200 	add	r0, r8, r0, lsl #4
        154d40:	e59003d4 	ldr	r0, [r0, #980]
        154d44:	e3300000 	teq	r0, #0	; 0x0
        154d48:	1b668772 	blne	1af6b18 <TStore::$Delete(void)>
        154d4c:	e2855001 	add	r5, r5, #1	; 0x1
        154d50:	e3550004 	cmp	r5, #4	; 0x4
        154d54:	bafffff7 	blt	154d38 <TPSSManager::GCStores(void)+0xd4>
        154d58:	e2880fc2 	add	r0, r8, #776	; 0x308
        154d5c:	eb000398 	bl	155bc4 <SPSSSlotInfo::Clear(void)>
        154d60:	e2866001 	add	r6, r6, #1	; 0x1
        154d64:	e5940304 	ldr	r0, [r4, #772]	; fField772
        154d68:	e1500006 	cmp	r0, r6
        154d6c:	caffffc5 	bgt	154c88 <TPSSManager::GCStores(void)+0x24>
        154d70:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TPSSManager::CardAvailable(TCardMessage *)
 * Address: 00154d74
 */
TPSSManager::CardAvailable(TCardMessage *) {
    /*
        154d74:	e1a0c00d 	mov	ip, sp
        154d78:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        154d7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        154d80:	e1a04000 	mov	r4, r0
        154d84:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        154d88:	e3a00000 	mov	r0, #0	; 0x0
        154d8c:	e58d0004 	str	r0, [sp, #4]
        154d90:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        154d94:	e5b06010 	ldr	r6, [r0, #16]!	; fField16
        154d98:	e3a00000 	mov	r0, #0	; 0x0
        154d9c:	e58d0000 	str	r0, [sp]
        154da0:	e28d1008 	add	r1, sp, #8	; 0x8
        154da4:	e59f00dc 	ldr	r0, [pc, #dc]	; 154e88 <TPSSManager::CardAvailable(TCardMessage *)+0x114>
        154da8:	eb69f6d4 	bl	1bd2900 <$FindEnvironmentId__13MemObjManagerSFUlPUl>
        154dac:	e0660386 	rsb	r0, r6, r6, lsl #7
        154db0:	e0841100 	add	r1, r4, r0, lsl #2
        154db4:	e58d1028 	str	r1, [sp, #40]	; fField40
        154db8:	e281efc3 	add	lr, r1, #780	; 0x30c
        154dbc:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        154dc0:	e3a0c00f 	mov	ip, #15	; 0xf
        154dc4:	e8b0000e 	ldmia	r0!, {r1, r2, r3}
        154dc8:	e8ae000e 	stmia	lr!, {r1, r2, r3}
        154dcc:	e25cc001 	subs	ip, ip, #1	; 0x1
        154dd0:	1afffffb 	bne	154dc4 <TPSSManager::CardAvailable(TCardMessage *)+0x50>
        154dd4:	e8900008 	ldmia	r0, {r3}
        154dd8:	e88e0008 	stmia	lr, {r3}
        154ddc:	e3a0a000 	mov	sl, #0	; 0x0
        154de0:	e0841286 	add	r1, r4, r6, lsl #5
        154de4:	e58d1024 	str	r1, [sp, #36]
        154de8:	e59f009c 	ldr	r0, [pc, #9c]	; 154e8c <TPSSManager::CardAvailable(TCardMessage *)+0x118>
        154dec:	e58d0020 	str	r0, [sp, #32]	; fField32
        154df0:	e59f0098 	ldr	r0, [pc, #98]	; 154e90 <TPSSManager::CardAvailable(TCardMessage *)+0x11c>
        154df4:	e58d001c 	str	r0, [sp, #28]	; fField28
        154df8:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        154dfc:	e080728a 	add	r7, r0, sl, lsl #5
        154e00:	e1a08007 	mov	r8, r7
        154e04:	e5970038 	ldr	r0, [r7, #56]	; fField56
        154e08:	e59d1024 	ldr	r1, [sp, #36]
        154e0c:	e081110a 	add	r1, r1, sl, lsl #2
        154e10:	e5a10294 	str	r0, [r1, #660]!
        154e14:	e08a010a 	add	r0, sl, sl, lsl #2
        154e18:	e59d1028 	ldr	r1, [sp, #40]	; fField40
        154e1c:	e0810200 	add	r0, r1, r0, lsl #4
        154e20:	e2800ff1 	add	r0, r0, #964	; 0x3c4
        154e24:	e1a05000 	mov	r5, r0
        154e28:	eb667f0e 	bl	1af4a68 <SPSSStoreInfo::$Clear(void)>
        154e2c:	e5b80038 	ldr	r0, [r8, #56]!	; fField56
        154e30:	e3300000 	teq	r0, #0	; 0x0
        154e34:	0a00006b 	beq	154fe8 <TPSSManager::CardAvailable(TCardMessage *)+0x274>
        154e38:	e2870038 	add	r0, r7, #56	; 0x38
        154e3c:	e28d100c 	add	r1, sp, #12	; 0xc
        154e40:	e3a02004 	mov	r2, #4	; 0x4
        154e44:	eb6a2842 	bl	1bdef54 <$BlockMove>
        154e48:	e3a00000 	mov	r0, #0	; 0x0
        154e4c:	e5cd0010 	strb	r0, [sp, #16]	; fField16
        154e50:	e28d200c 	add	r2, sp, #12	; 0xc
        154e54:	e28f0f0e 	add	r0, pc, #56	; 0x38
        154e58:	e3a01000 	mov	r1, #0	; 0x0
        154e5c:	eb6a0b49 	bl	1bd7b88 <$NewByName__FPCcN21>
        154e60:	e1a08000 	mov	r8, r0
        154e64:	e28f0f0c 	add	r0, pc, #48	; 0x30
        154e68:	eb66ac62 	bl	1affff8 <$New__6TStoreSFPc>
        154e6c:	e1a09000 	mov	r9, r0
        154e70:	e24dd008 	sub	sp, sp, #8	; 0x8
        154e74:	e3380000 	teq	r8, #0	; 0x0
        154e78:	0a00000a 	beq	154ea8 <TPSSManager::CardAvailable(TCardMessage *)+0x134>
        154e7c:	e3390000 	teq	r9, #0	; 0x0
        154e80:	1a00000f 	bne	154ec4 <TPSSManager::CardAvailable(TCardMessage *)+0x150>
        154e84:	ea00000a 	b	154eb4 <TPSSManager::CardAvailable(TCardMessage *)+0x140>
        154e88:	75736572 	ldrvcb	r6, [r3, -#1394]!
        154e8c:	0c1016b8 	ldceq	6, cr1, [r0], -#736
        154e90:	0c101198 	ldfeqs	f1, [r0], -#608
        154e94:	5453746f 	ldrplb	r7, [r3], -#1135
        154e98:	72650000 	rsbvc	r0, r5, #0	; 0x0
        154e9c:	544d7578 	strplb	r7, [sp], -#1400
        154ea0:	53746f72 	cmnpl	r4, #456	; 0x1c8
        154ea4:	65000000 	strvs	r0, [r0]
        154ea8:	e3390000 	teq	r9, #0	; 0x0
        154eac:	11a00009 	movne	r0, r9
        154eb0:	1b668718 	blne	1af6b18 <TStore::$Delete(void)>
        154eb4:	e3380000 	teq	r8, #0	; 0x0
        154eb8:	11a00008 	movne	r0, r8
        154ebc:	1b668715 	blne	1af6b18 <TStore::$Delete(void)>
        154ec0:	ea000047 	b	154fe4 <TPSSManager::CardAvailable(TCardMessage *)+0x270>
        154ec4:	e59d000c 	ldr	r0, [sp, #12]
        154ec8:	e2800001 	add	r0, r0, #1	; 0x1
        154ecc:	e58d000c 	str	r0, [sp, #12]
        154ed0:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        154ed4:	e5a08014 	str	r8, [r0, #20]!	; fField20
        154ed8:	e1a01008 	mov	r1, r8
        154edc:	e1a00009 	mov	r0, r9
        154ee0:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        154ee4:	eb66c517 	bl	1b06348 <TStore::$SetStore(TStore *, unsigned long)>
        154ee8:	e3a01000 	mov	r1, #0	; 0x0
        154eec:	e597003c 	ldr	r0, [r7, #60]
        154ef0:	e5cd1004 	strb	r1, [sp, #4]
        154ef4:	e58d0000 	str	r0, [sp]
        154ef8:	e89d5000 	ldmia	sp, {ip, lr}
        154efc:	e8855000 	stmia	r5, {ip, lr}
        154f00:	e1a0000d 	mov	r0, sp
        154f04:	eb69e606 	bl	1bce724 <TUObject::$__dt(void)>
        154f08:	e2850008 	add	r0, r5, #8	; 0x8
        154f0c:	e58d0020 	str	r0, [sp, #32]	; fField32
        154f10:	e58d001c 	str	r0, [sp, #28]	; fField28
        154f14:	e597103c 	ldr	r1, [r7, #60]
        154f18:	eb69ee4a 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        154f1c:	e5970038 	ldr	r0, [r7, #56]	; fField56
        154f20:	e5850030 	str	r0, [r5, #48]	; fField48
        154f24:	e5856018 	str	r6, [r5, #24]	; fField24
        154f28:	e5859010 	str	r9, [r5, #16]	; fField16
        154f2c:	e59d0024 	ldr	r0, [sp, #36]
        154f30:	e7900106 	ldr	r0, [r0, r6, lsl #2]
        154f34:	e5971048 	ldr	r1, [r7, #72]
        154f38:	e0800001 	add	r0, r0, r1
        154f3c:	e585001c 	str	r0, [r5, #28]	; fField28
        154f40:	e597004c 	ldr	r0, [r7, #76]
        154f44:	e5850014 	str	r0, [r5, #20]	; fField20
        154f48:	e5970048 	ldr	r0, [r7, #72]
        154f4c:	e5850020 	str	r0, [r5, #32]	; fField32
        154f50:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
        154f54:	e5b1001c 	ldr	r0, [r1, #28]!	; fField28
        154f58:	e5850028 	str	r0, [r5, #40]	; fField40
        154f5c:	e5b70044 	ldr	r0, [r7, #68]!
        154f60:	e585002c 	str	r0, [r5, #44]	; fField44
        154f64:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
        154f68:	e5d1002c 	ldrb	r0, [r1, #44]	; fField44
        154f6c:	e5c50038 	strb	r0, [r5, #56]	; fField56
        154f70:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        154f74:	e3a01000 	mov	r1, #0	; 0x0
        154f78:	e285503c 	add	r5, r5, #60	; 0x3c
        154f7c:	e8850101 	stmia	r5, {r0, r8}
        154f80:	e245503c 	sub	r5, r5, #60	; 0x3c
        154f84:	e5c51039 	strb	r1, [r5, #57]	; fField57
        154f88:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        154f8c:	e5900000 	ldr	r0, [r0]
        154f90:	e3300000 	teq	r0, #0	; 0x0
        154f94:	0a000012 	beq	154fe4 <TPSSManager::CardAvailable(TCardMessage *)+0x270>
        154f98:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        154f9c:	e28d1008 	add	r1, sp, #8	; 0x8
        154fa0:	eb6a1f9e 	bl	1bdce20 <TUPhys::$Size(unsigned long &)>
        154fa4:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        154fa8:	e5905000 	ldr	r5, [r0]
        154fac:	e1a00006 	mov	r0, r6
        154fb0:	eb66e5df 	bl	1b0e734 <$ClientDomain__12TCardDomainsSFUl>
        154fb4:	e59d1024 	ldr	r1, [sp, #36]
        154fb8:	e7911106 	ldr	r1, [r1, r6, lsl #2]
        154fbc:	e3a03000 	mov	r3, #0	; 0x0
        154fc0:	e1a02005 	mov	r2, r5
        154fc4:	eb6a133d 	bl	1bd9cc0 <$RememberPhysMap__15TUDomainManagerSFUlN21Uc>
        154fc8:	e1a00006 	mov	r0, r6
        154fcc:	eb66e5d8 	bl	1b0e734 <$ClientDomain__12TCardDomainsSFUl>
        154fd0:	e59d1024 	ldr	r1, [sp, #36]
        154fd4:	e7911106 	ldr	r1, [r1, r6, lsl #2]
        154fd8:	e3a03003 	mov	r3, #3	; 0x3
        154fdc:	e59d2008 	ldr	r2, [sp, #8]
        154fe0:	eb6a1334 	bl	1bd9cb8 <$RememberPermMap__15TUDomainManagerSFUlN214Perm>
        154fe4:	e28dd008 	add	sp, sp, #8	; 0x8
        154fe8:	e28aa001 	add	sl, sl, #1	; 0x1
        154fec:	e35a0004 	cmp	sl, #4	; 0x4
        154ff0:	baffff80 	blt	154df8 <TPSSManager::CardAvailable(TCardMessage *)+0x84>
        154ff4:	e59d0004 	ldr	r0, [sp, #4]
        154ff8:	e3300000 	teq	r0, #0	; 0x0
        154ffc:	0a00001f 	beq	155080 <TPSSManager::CardAvailable(TCardMessage *)+0x30c>
        155000:	e3a00001 	mov	r0, #1	; 0x1
        155004:	e59d1028 	ldr	r1, [sp, #40]	; fField40
        155008:	e5a10308 	str	r0, [r1, #776]!
        15500c:	e1a00004 	mov	r0, r4
        155010:	e3a01000 	mov	r1, #0	; 0x0
        155014:	eb66cd0f 	bl	1b08458 <TPSSManager::$UIEngine(unsigned char)>
        155018:	e5940138 	ldr	r0, [r4, #312]	; fField312
        15501c:	e5903000 	ldr	r3, [r0]
        155020:	e2840080 	add	r0, r4, #128	; 0x80
        155024:	e1a05000 	mov	r5, r0
        155028:	e1a02006 	mov	r2, r6
        15502c:	e3a01032 	mov	r1, #50	; 0x32
        155030:	eb6a06cd 	bl	1bd6b6c <TCardMessage::$MessageStuff(unsigned long, unsigned long, unsigned long)>
        155034:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        155038:	e7900106 	ldr	r0, [r0, r6, lsl #2]
        15503c:	e58400a4 	str	r0, [r4, #164]
        155040:	e59d0000 	ldr	r0, [sp]
        155044:	e58400a8 	str	r0, [r4, #168]
        155048:	e284cf51 	add	ip, r4, #324	; 0x144
        15504c:	e284e070 	add	lr, r4, #112	; 0x70
        155050:	e3a02000 	mov	r2, #0	; 0x0
        155054:	e3a03000 	mov	r3, #0	; 0x0
        155058:	e3a04000 	mov	r4, #0	; 0x0
        15505c:	e3a01000 	mov	r1, #0	; 0x0
        155060:	e3a00001 	mov	r0, #1	; 0x1
        155064:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        155068:	e1a03004 	mov	r3, r4
        15506c:	e3a020b8 	mov	r2, #184	; 0xb8
        155070:	e92d000c 	stmdb	sp!, {r2, r3}
        155074:	e1a03005 	mov	r3, r5
        155078:	e59e1000 	ldr	r1, [lr]
        15507c:	ea00000f 	b	1550c0 <TPSSManager::CardAvailable(TCardMessage *)+0x34c>
        155080:	e284cf4f 	add	ip, r4, #316	; 0x13c
        155084:	e0840206 	add	r0, r4, r6, lsl #4
        155088:	e280ef91 	add	lr, r0, #580	; 0x244
        15508c:	e59d1024 	ldr	r1, [sp, #36]
        155090:	e2814fa1 	add	r4, r1, #644	; 0x284
        155094:	e3a02000 	mov	r2, #0	; 0x0
        155098:	e3a03000 	mov	r3, #0	; 0x0
        15509c:	e3a05000 	mov	r5, #0	; 0x0
        1550a0:	e3a01000 	mov	r1, #0	; 0x0
        1550a4:	e3a00001 	mov	r0, #1	; 0x1
        1550a8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1550ac:	e1a03005 	mov	r3, r5
        1550b0:	e3a02080 	mov	r2, #128	; 0x80
        1550b4:	e92d000c 	stmdb	sp!, {r2, r3}
        1550b8:	e1a03004 	mov	r3, r4
        1550bc:	e59e1000 	ldr	r1, [lr]
        1550c0:	e1a0000c 	mov	r0, ip
        1550c4:	e3a02000 	mov	r2, #0	; 0x0
        1550c8:	eb6a171e 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        1550cc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPSSManager::CardGone(TCardMessage *)
 * Address: 001550d0
 */
TPSSManager::CardGone(TCardMessage *) {
    /*
        1550d0:	e1a0c00d 	mov	ip, sp
        1550d4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1550d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1550dc:	e1a04000 	mov	r4, r0
        1550e0:	e1a05001 	mov	r5, r1
        1550e4:	e3a06002 	mov	r6, #2	; 0x2
        1550e8:	e5910010 	ldr	r0, [r1, #16]	; fField16
        1550ec:	e0600380 	rsb	r0, r0, r0, lsl #7
        1550f0:	e0840100 	add	r0, r4, r0, lsl #2
        1550f4:	e5900308 	ldr	r0, [r0, #776]
        1550f8:	e3300004 	teq	r0, #4	; 0x4
        1550fc:	1a00003a 	bne	1551ec <TPSSManager::CardGone(TCardMessage *)+0x11c>
        155100:	e3a01000 	mov	r1, #0	; 0x0
        155104:	e59f00c0 	ldr	r0, [pc, #c0]	; 1551cc <TPSSManager::CardGone(TCardMessage *)+0xfc>
        155108:	e5c01000 	strb	r1, [r0]
        15510c:	e3a07000 	mov	r7, #0	; 0x0
        155110:	e5a01004 	str	r1, [r0, #4]!
        155114:	e59f90b4 	ldr	r9, [pc, #b4]	; 1551d0 <TPSSManager::CardGone(TCardMessage *)+0x100>
        155118:	e2848f5e 	add	r8, r4, #376	; 0x178
        15511c:	e24dd004 	sub	sp, sp, #4	; 0x4
        155120:	e5950010 	ldr	r0, [r5, #16]	; fField16
        155124:	e0600380 	rsb	r0, r0, r0, lsl #7
        155128:	e0840100 	add	r0, r4, r0, lsl #2
        15512c:	e087a107 	add	sl, r7, r7, lsl #2
        155130:	e080020a 	add	r0, r0, sl, lsl #4
        155134:	e59013d4 	ldr	r1, [r0, #980]
        155138:	e58d1000 	str	r1, [sp]
        15513c:	e3310000 	teq	r1, #0	; 0x0
        155140:	0a000023 	beq	1551d4 <TPSSManager::CardGone(TCardMessage *)+0x104>
        155144:	e5b013cc 	ldr	r1, [r0, #972]!
        155148:	e3310000 	teq	r1, #0	; 0x0
        15514c:	0a000010 	beq	155194 <TPSSManager::CardGone(TCardMessage *)+0xc4>
        155150:	e24dd004 	sub	sp, sp, #4	; 0x4
        155154:	e1a0100d 	mov	r1, sp
        155158:	eb6a1f30 	bl	1bdce20 <TUPhys::$Size(unsigned long &)>
        15515c:	e5980000 	ldr	r0, [r8]
        155160:	e5951010 	ldr	r1, [r5, #16]	; fField16
        155164:	e7991101 	ldr	r1, [r9, r1, lsl #2]
        155168:	e59d2000 	ldr	r2, [sp]
        15516c:	eb69f5f4 	bl	1bd2944 <$ForgetPermMap__15TUDomainManagerSFUlN21>
        155170:	e5951010 	ldr	r1, [r5, #16]	; fField16
        155174:	e0610381 	rsb	r0, r1, r1, lsl #7
        155178:	e0840100 	add	r0, r4, r0, lsl #2
        15517c:	e080020a 	add	r0, r0, sl, lsl #4
        155180:	e5b023cc 	ldr	r2, [r0, #972]!
        155184:	e5980000 	ldr	r0, [r8]
        155188:	e7991101 	ldr	r1, [r9, r1, lsl #2]
        15518c:	eb69f5ef 	bl	1bd2950 <$ForgetPhysMap__15TUDomainManagerSFUlN21>
        155190:	e28dd004 	add	sp, sp, #4	; 0x4
        155194:	e5950010 	ldr	r0, [r5, #16]	; fField16
        155198:	e0600380 	rsb	r0, r0, r0, lsl #7
        15519c:	e0840100 	add	r0, r4, r0, lsl #2
        1551a0:	e080020a 	add	r0, r0, sl, lsl #4
        1551a4:	e5d003fd 	ldrb	r0, [r0, #1021]
        1551a8:	e3300000 	teq	r0, #0	; 0x0
        1551ac:	0a000003 	beq	1551c0 <TPSSManager::CardGone(TCardMessage *)+0xf0>
        1551b0:	e59d0000 	ldr	r0, [sp]
        1551b4:	eb66a34c 	bl	1afdeec <TStore::$IsLocked(void)>
        1551b8:	e3300000 	teq	r0, #0	; 0x0
        1551bc:	0a000004 	beq	1551d4 <TPSSManager::CardGone(TCardMessage *)+0x104>
        1551c0:	e3a06035 	mov	r6, #53	; 0x35
        1551c4:	e28dd004 	add	sp, sp, #4	; 0x4
        1551c8:	ea000005 	b	1551e4 <TPSSManager::CardGone(TCardMessage *)+0x114>
        1551cc:	0c106820 	ldceq	8, cr6, [r0], -#128
        1551d0:	0c101198 	ldfeqs	f1, [r0], -#608
        1551d4:	e28dd004 	add	sp, sp, #4	; 0x4
        1551d8:	e2877001 	add	r7, r7, #1	; 0x1
        1551dc:	e3570004 	cmp	r7, #4	; 0x4
        1551e0:	baffffcd 	blt	15511c <TPSSManager::CardGone(TCardMessage *)+0x4c>
        1551e4:	e3360002 	teq	r6, #2	; 0x2
        1551e8:	1a000013 	bne	15523c <TPSSManager::CardGone(TCardMessage *)+0x16c>
        1551ec:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
        1551f0:	e0600380 	rsb	r0, r0, r0, lsl #7
        1551f4:	e0840100 	add	r0, r4, r0, lsl #2
        1551f8:	e5901308 	ldr	r1, [r0, #776]
        1551fc:	e3310001 	teq	r1, #1	; 0x1
        155200:	03a01008 	moveq	r1, #8	; 0x8
        155204:	0a000008 	beq	15522c <TPSSManager::CardGone(TCardMessage *)+0x15c>
        155208:	e3310002 	teq	r1, #2	; 0x2
        15520c:	03a01003 	moveq	r1, #3	; 0x3
        155210:	0a000005 	beq	15522c <TPSSManager::CardGone(TCardMessage *)+0x15c>
        155214:	e3310004 	teq	r1, #4	; 0x4
        155218:	03a01005 	moveq	r1, #5	; 0x5
        15521c:	0a000002 	beq	15522c <TPSSManager::CardGone(TCardMessage *)+0x15c>
        155220:	e3310007 	teq	r1, #7	; 0x7
        155224:	1a000001 	bne	155230 <TPSSManager::CardGone(TCardMessage *)+0x160>
        155228:	e3a01006 	mov	r1, #6	; 0x6
        15522c:	e5a01308 	str	r1, [r0, #776]!
        155230:	e1a00004 	mov	r0, r4
        155234:	e3a01000 	mov	r1, #0	; 0x0
        155238:	eb66cc86 	bl	1b08458 <TPSSManager::$UIEngine(unsigned char)>
        15523c:	e1a00006 	mov	r0, r6
        155240:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPSSManager::CardIsSame(TCardMessage *)
 * Address: 00155244
 */
TPSSManager::CardIsSame(TCardMessage *) {
    /*
        155244:	e1a0c00d 	mov	ip, sp
        155248:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15524c:	e24cb004 	sub	fp, ip, #4	; 0x4
        155250:	e1a05000 	mov	r5, r0
        155254:	e1a04001 	mov	r4, r1
        155258:	e3a02001 	mov	r2, #1	; 0x1
        15525c:	e3a09037 	mov	r9, #55	; 0x37
        155260:	e3a06000 	mov	r6, #0	; 0x0
        155264:	e5940010 	ldr	r0, [r4, #16]	; fField16
        155268:	e0600380 	rsb	r0, r0, r0, lsl #7
        15526c:	e0850100 	add	r0, r5, r0, lsl #2
        155270:	e0861106 	add	r1, r6, r6, lsl #2
        155274:	e0801201 	add	r1, r0, r1, lsl #4
        155278:	e59103d4 	ldr	r0, [r1, #980]
        15527c:	e3300000 	teq	r0, #0	; 0x0
        155280:	0a000009 	beq	1552ac <TPSSManager::CardIsSame(TCardMessage *)+0x68>
        155284:	e5d123fd 	ldrb	r2, [r1, #1021]
        155288:	e3320000 	teq	r2, #0	; 0x0
        15528c:	03a02001 	moveq	r2, #1	; 0x1
        155290:	0a000005 	beq	1552ac <TPSSManager::CardIsSame(TCardMessage *)+0x68>
        155294:	e5b123d8 	ldr	r2, [r1, #984]!
        155298:	e5b1300c 	ldr	r3, [r1, #12]!
        15529c:	e594100c 	ldr	r1, [r4, #12]
        1552a0:	e0831001 	add	r1, r3, r1
        1552a4:	eb66a71e 	bl	1afef24 <TStore::$IsSameStore(void *, unsigned long)>
        1552a8:	e1a02000 	mov	r2, r0
        1552ac:	e2866001 	add	r6, r6, #1	; 0x1
        1552b0:	e3320000 	teq	r2, #0	; 0x0
        1552b4:	0a000041 	beq	1553c0 <TPSSManager::CardIsSame(TCardMessage *)+0x17c>
        1552b8:	e3560004 	cmp	r6, #4	; 0x4
        1552bc:	baffffe8 	blt	155264 <TPSSManager::CardIsSame(TCardMessage *)+0x20>
        1552c0:	e3320000 	teq	r2, #0	; 0x0
        1552c4:	0a00003d 	beq	1553c0 <TPSSManager::CardIsSame(TCardMessage *)+0x17c>
        1552c8:	e3a07000 	mov	r7, #0	; 0x0
        1552cc:	e3a0a002 	mov	sl, #2	; 0x2
        1552d0:	e59f80e0 	ldr	r8, [pc, #e0]	; 1553b8 <TPSSManager::CardIsSame(TCardMessage *)+0x174>
        1552d4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1552d8:	e0600380 	rsb	r0, r0, r0, lsl #7
        1552dc:	e0850100 	add	r0, r5, r0, lsl #2
        1552e0:	e0876107 	add	r6, r7, r7, lsl #2
        1552e4:	e0800206 	add	r0, r0, r6, lsl #4
        1552e8:	e59013d4 	ldr	r1, [r0, #980]
        1552ec:	e3310000 	teq	r1, #0	; 0x0
        1552f0:	0a000029 	beq	15539c <TPSSManager::CardIsSame(TCardMessage *)+0x158>
        1552f4:	e5b013cc 	ldr	r1, [r0, #972]!
        1552f8:	e3310000 	teq	r1, #0	; 0x0
        1552fc:	0a000015 	beq	155358 <TPSSManager::CardIsSame(TCardMessage *)+0x114>
        155300:	e24dd004 	sub	sp, sp, #4	; 0x4
        155304:	e1a0100d 	mov	r1, sp
        155308:	eb6a1ec4 	bl	1bdce20 <TUPhys::$Size(unsigned long &)>
        15530c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        155310:	e0601380 	rsb	r1, r0, r0, lsl #7
        155314:	e0851101 	add	r1, r5, r1, lsl #2
        155318:	e0811206 	add	r1, r1, r6, lsl #4
        15531c:	e5b163cc 	ldr	r6, [r1, #972]!
        155320:	eb66e503 	bl	1b0e734 <$ClientDomain__12TCardDomainsSFUl>
        155324:	e5941010 	ldr	r1, [r4, #16]	; fField16
        155328:	e7981101 	ldr	r1, [r8, r1, lsl #2]
        15532c:	e3a03000 	mov	r3, #0	; 0x0
        155330:	e1a02006 	mov	r2, r6
        155334:	eb6a1261 	bl	1bd9cc0 <$RememberPhysMap__15TUDomainManagerSFUlN21Uc>
        155338:	e5940010 	ldr	r0, [r4, #16]	; fField16
        15533c:	eb66e4fc 	bl	1b0e734 <$ClientDomain__12TCardDomainsSFUl>
        155340:	e5941010 	ldr	r1, [r4, #16]	; fField16
        155344:	e7981101 	ldr	r1, [r8, r1, lsl #2]
        155348:	e3a03003 	mov	r3, #3	; 0x3
        15534c:	e59d2000 	ldr	r2, [sp]
        155350:	eb6a1258 	bl	1bd9cb8 <$RememberPermMap__15TUDomainManagerSFUlN214Perm>
        155354:	e28dd004 	add	sp, sp, #4	; 0x4
        155358:	e5940010 	ldr	r0, [r4, #16]	; fField16
        15535c:	e0600380 	rsb	r0, r0, r0, lsl #7
        155360:	e0850100 	add	r0, r5, r0, lsl #2
        155364:	e5901308 	ldr	r1, [r0, #776]
        155368:	e3310003 	teq	r1, #3	; 0x3
        15536c:	05a0a308 	streq	sl, [r0, #776]!
        155370:	0a000009 	beq	15539c <TPSSManager::CardIsSame(TCardMessage *)+0x158>
        155374:	e3310005 	teq	r1, #5	; 0x5
        155378:	03a01004 	moveq	r1, #4	; 0x4
        15537c:	0a000005 	beq	155398 <TPSSManager::CardIsSame(TCardMessage *)+0x154>
        155380:	e3310006 	teq	r1, #6	; 0x6
        155384:	03a01007 	moveq	r1, #7	; 0x7
        155388:	0a000002 	beq	155398 <TPSSManager::CardIsSame(TCardMessage *)+0x154>
        15538c:	e3310008 	teq	r1, #8	; 0x8
        155390:	1a000001 	bne	15539c <TPSSManager::CardIsSame(TCardMessage *)+0x158>
        155394:	e3a01001 	mov	r1, #1	; 0x1
        155398:	e5a01308 	str	r1, [r0, #776]!
        15539c:	e2877001 	add	r7, r7, #1	; 0x1
        1553a0:	e3570004 	cmp	r7, #4	; 0x4
        1553a4:	baffffca 	blt	1552d4 <TPSSManager::CardIsSame(TCardMessage *)+0x90>
        1553a8:	e3a01001 	mov	r1, #1	; 0x1
        1553ac:	e59f0008 	ldr	r0, [pc, #8]	; 1553bc <TPSSManager::CardIsSame(TCardMessage *)+0x178>
        1553b0:	e5c01000 	strb	r1, [r0]
        1553b4:	ea000002 	b	1553c4 <TPSSManager::CardIsSame(TCardMessage *)+0x180>
        1553b8:	0c101198 	ldfeqs	f1, [r0], -#608
        1553bc:	0c106820 	ldceq	8, cr6, [r0], -#128
        1553c0:	e3a09038 	mov	r9, #56	; 0x38
        1553c4:	e1a00009 	mov	r0, r9
        1553c8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPSSManager::GetCardSlotStores( const(int, TStore **))
 * Address: 001556f8
 */
TPSSManager::GetCardSlotStores( const(int, TStore **)) {
    /*
        1556f8:	e3510000 	cmp	r1, #0	; 0x0
        1556fc:	ba000002 	blt	15570c <TPSSManager::GetCardSlotStores( const(int, TStore **))+0x14>
        155700:	e5903304 	ldr	r3, [r0, #772]	; fField772
        155704:	e1530001 	cmp	r3, r1
        155708:	ca000001 	bgt	155714 <TPSSManager::GetCardSlotStores( const(int, TStore **))+0x1c>
        15570c:	e3a00000 	mov	r0, #0	; 0x0
        155710:	e1a0f00e 	mov	pc, lr
        155714:	e92d4000 	stmdb	sp!, {lr}
        155718:	e3a0c000 	mov	ip, #0	; 0x0
        15571c:	e3a03000 	mov	r3, #0	; 0x0
        155720:	e0611381 	rsb	r1, r1, r1, lsl #7
        155724:	e0800101 	add	r0, r0, r1, lsl #2
        155728:	e0831103 	add	r1, r3, r3, lsl #2
        15572c:	e0801201 	add	r1, r0, r1, lsl #4
        155730:	e5b1e3d4 	ldr	lr, [r1, #980]!
        155734:	e33e0000 	teq	lr, #0	; 0x0
        155738:	11a0100c 	movne	r1, ip
        15573c:	128cc001 	addne	ip, ip, #1	; 0x1
        155740:	1782e101 	strne	lr, [r2, r1, lsl #2]
        155744:	e2833001 	add	r3, r3, #1	; 0x1
        155748:	e3530004 	cmp	r3, #4	; 0x4
        15574c:	bafffff5 	blt	155728 <TPSSManager::GetCardSlotStores( const(int, TStore **))+0x30>
        155750:	e1a0000c 	mov	r0, ip
        155754:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TPSSManager::GetStorePSSInfo( const(TStore const *, unsigned char))
 * Address: 00155758
 */
TPSSManager::GetStorePSSInfo( const(TStore const *, unsigned char)) {
    /*
        155758:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        15575c:	e20250ff 	and	r5, r2, #255	; 0xff
        155760:	e3a02000 	mov	r2, #0	; 0x0
        155764:	e590e304 	ldr	lr, [r0, #772]	; fField772
        155768:	e35e0000 	cmp	lr, #0	; 0x0
        15576c:	da000015 	ble	1557c8 <TPSSManager::GetStorePSSInfo( const(TStore const *, unsigned char))+0x70>
        155770:	e0623382 	rsb	r3, r2, r2, lsl #7
        155774:	e080c103 	add	ip, r0, r3, lsl #2
        155778:	e59c3308 	ldr	r3, [ip, #776]
        15577c:	e3350000 	teq	r5, #0	; 0x0
        155780:	13330004 	teqne	r3, #4	; 0x4
        155784:	13330007 	teqne	r3, #7	; 0x7
        155788:	13330002 	teqne	r3, #2	; 0x2
        15578c:	1a00000a 	bne	1557bc <TPSSManager::GetStorePSSInfo( const(TStore const *, unsigned char))+0x64>
        155790:	e3a03000 	mov	r3, #0	; 0x0
        155794:	e0834103 	add	r4, r3, r3, lsl #2
        155798:	e08c4204 	add	r4, ip, r4, lsl #4
        15579c:	e2844ff1 	add	r4, r4, #964	; 0x3c4
        1557a0:	e5946010 	ldr	r6, [r4, #16]	; fField16
        1557a4:	e1360001 	teq	r6, r1
        1557a8:	01a00004 	moveq	r0, r4
        1557ac:	08bd8070 	ldmeqia	sp!, {r4, r5, r6, pc}
        1557b0:	e2833001 	add	r3, r3, #1	; 0x1
        1557b4:	e3530004 	cmp	r3, #4	; 0x4
        1557b8:	bafffff5 	blt	155794 <TPSSManager::GetStorePSSInfo( const(TStore const *, unsigned char))+0x3c>
        1557bc:	e2822001 	add	r2, r2, #1	; 0x1
        1557c0:	e15e0002 	cmp	lr, r2
        1557c4:	caffffe9 	bgt	155770 <TPSSManager::GetStorePSSInfo( const(TStore const *, unsigned char))+0x18>
        1557c8:	e3a00000 	mov	r0, #0	; 0x0
        1557cc:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: TPSSManager::ReinsertCard(int, unsigned short const *, unsigned char)
 * Address: 001557d0
 */
TPSSManager::ReinsertCard(int, unsigned short const *, unsigned char) {
    /*
        1557d0:	e1a0c00d 	mov	ip, sp
        1557d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1557d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1557dc:	e1a05000 	mov	r5, r0
        1557e0:	e1b04001 	movs	r4, r1
        1557e4:	e20310ff 	and	r1, r3, #255	; 0xff
        1557e8:	491ba830 	ldmmidb	fp, {r4, r5, fp, sp, pc}
        1557ec:	e5950304 	ldr	r0, [r5, #772]	; fField772
        1557f0:	e1500004 	cmp	r0, r4
        1557f4:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
        1557f8:	e1a00002 	mov	r0, r2
        1557fc:	eb678d13 	bl	1b38c50 <$SetCardReinsertReason(unsigned short const *, unsigned char)>
        155800:	e24dd004 	sub	sp, sp, #4	; 0x4
        155804:	e0640384 	rsb	r0, r4, r4, lsl #7
        155808:	e0850100 	add	r0, r5, r0, lsl #2
        15580c:	e5b013e0 	ldr	r1, [r0, #992]!
        155810:	e1a0000d 	mov	r0, sp
        155814:	e3a02001 	mov	r2, #1	; 0x1
        155818:	eb697c8c 	bl	1bb4a50 <$memcpy>
        15581c:	e3a01000 	mov	r1, #0	; 0x0
        155820:	e3a00000 	mov	r0, #0	; 0x0
        155824:	eb678d09 	bl	1b38c50 <$SetCardReinsertReason(unsigned short const *, unsigned char)>
        155828:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPSSManager::MainConstructor(void)
 * Address: 00155a38
 */
TPSSManager::MainConstructor(void) {
    /*
        155a38:	e1a0c00d 	mov	ip, sp
        155a3c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        155a40:	e24cb004 	sub	fp, ip, #4	; 0x4
        155a44:	e1a04000 	mov	r4, r0
        155a48:	eb695f2b 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
        155a4c:	e2840070 	add	r0, r4, #112	; 0x70
        155a50:	e3a01001 	mov	r1, #1	; 0x1
        155a54:	eb6a000e 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        155a58:	e2840080 	add	r0, r4, #128	; 0x80
        155a5c:	eb69eb6a 	bl	1bd080c <TCardMessage::$Clear(void)>
        155a60:	e1a00004 	mov	r0, r4
        155a64:	eb6a4a74 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        155a68:	e5840138 	str	r0, [r4, #312]	; fField312
        155a6c:	e59f9110 	ldr	r9, [pc, #110]	; 155b84 <TPSSManager::MainConstructor(void)+0x14c>
        155a70:	e589001c 	str	r0, [r9, #28]	; fField28
        155a74:	e2840f53 	add	r0, r4, #332	; 0x14c
        155a78:	e1a08000 	mov	r8, r0
        155a7c:	e59f7104 	ldr	r7, [pc, #104]	; 155b88 <TPSSManager::MainConstructor(void)+0x150>
        155a80:	e1a02007 	mov	r2, r7
        155a84:	e59f1100 	ldr	r1, [pc, #100]	; 155b8c <TPSSManager::MainConstructor(void)+0x154>
        155a88:	eb6a4e88 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        155a8c:	e2840e16 	add	r0, r4, #352	; 0x160
        155a90:	e3a02000 	mov	r2, #0	; 0x0
        155a94:	e59f60f4 	ldr	r6, [pc, #f4]	; 155b90 <TPSSManager::MainConstructor(void)+0x158>
        155a98:	e1a01006 	mov	r1, r6
        155a9c:	eb6a4e87 	bl	1be94c0 <TSystemEventHandler::$Init(unsigned long, unsigned long)>
        155aa0:	e2840d06 	add	r0, r4, #384	; 0x180
        155aa4:	e1a05000 	mov	r5, r0
        155aa8:	e3a01001 	mov	r1, #1	; 0x1
        155aac:	eb69fff8 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        155ab0:	eb69f7c7 	bl	1bd39d4 <$GetGlobals>
        155ab4:	eb6a4a60 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        155ab8:	e5901000 	ldr	r1, [r0]
        155abc:	e1a00005 	mov	r0, r5
        155ac0:	eb6a18b2 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        155ac4:	e1a00005 	mov	r0, r5
        155ac8:	e1a01008 	mov	r1, r8
        155acc:	eb6a1ccf 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
        155ad0:	e59f00bc 	ldr	r0, [pc, #bc]	; 155b94 <TPSSManager::MainConstructor(void)+0x15c>
        155ad4:	e5900000 	ldr	r0, [r0]
        155ad8:	e3a05000 	mov	r5, #0	; 0x0
        155adc:	e5840304 	str	r0, [r4, #772]	; fField772
        155ae0:	e3500000 	cmp	r0, #0	; 0x0
        155ae4:	da000019 	ble	155b50 <TPSSManager::MainConstructor(void)+0x118>
        155ae8:	e3a0a000 	mov	sl, #0	; 0x0
        155aec:	e0650385 	rsb	r0, r5, r5, lsl #7
        155af0:	e0840100 	add	r0, r4, r0, lsl #2
        155af4:	e2800fc2 	add	r0, r0, #776	; 0x308
        155af8:	eb000031 	bl	155bc4 <SPSSSlotInfo::Clear(void)>
        155afc:	e0840105 	add	r0, r4, r5, lsl #2
        155b00:	e580aaf8 	str	sl, [r0, #2808]
        155b04:	e5a0ab08 	str	sl, [r0, #2824]!
        155b08:	e0840205 	add	r0, r4, r5, lsl #4
        155b0c:	e2800f91 	add	r0, r0, #580	; 0x244
        155b10:	e1a08000 	mov	r8, r0
        155b14:	e3a01001 	mov	r1, #1	; 0x1
        155b18:	eb69ffdd 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        155b1c:	e1a00008 	mov	r0, r8
        155b20:	e3a01000 	mov	r1, #0	; 0x0
        155b24:	eb6a1899 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        155b28:	e0840285 	add	r0, r4, r5, lsl #5
        155b2c:	e5807284 	str	r7, [r0, #644]
        155b30:	e59f1060 	ldr	r1, [pc, #60]	; 155b98 <TPSSManager::MainConstructor(void)+0x160>
        155b34:	e2800fa1 	add	r0, r0, #644	; 0x284
        155b38:	e9a00042 	stmib	r0!, {r1, r6}
        155b3c:	e5805004 	str	r5, [r0, #4]
        155b40:	e2855001 	add	r5, r5, #1	; 0x1
        155b44:	e5940304 	ldr	r0, [r4, #772]	; fField772
        155b48:	e1500005 	cmp	r0, r5
        155b4c:	caffffe6 	bgt	155aec <TPSSManager::MainConstructor(void)+0xb4>
        155b50:	e24dd004 	sub	sp, sp, #4	; 0x4
        155b54:	e1a0100d 	mov	r1, sp
        155b58:	e59f003c 	ldr	r0, [pc, #3c]	; 155b9c <TPSSManager::MainConstructor(void)+0x164>
        155b5c:	eb69ef65 	bl	1bd18f8 <$FindDomainId__13MemObjManagerSFUlPUl>
        155b60:	e1b05000 	movs	r5, r0
        155b64:	11a00005 	movne	r0, r5
        155b68:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        155b6c:	e2840f5e 	add	r0, r4, #376	; 0x178
        155b70:	e59d1000 	ldr	r1, [sp]
        155b74:	eb69eb33 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        155b78:	e1a00005 	mov	r0, r5
        155b7c:	e5a94004 	str	r4, [r9, #4]!
        155b80:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        155b84:	0c1016b8 	ldceq	6, cr1, [r0], -#736
        155b88:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        155b8c:	63647376 	cmnvs	r4, #-671088639	; 0xd8000001
        155b90:	63617264 	cmnvs	r1, #1073741830	; 0x40000006
        155b94:	0c100ab4 	ldceq	10, cr0, [r0], -#720
        155b98:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        155b9c:	63636c30 	cmnvs	r3, #12288	; 0x3000
    */
}

/**
 * Symbol: TPSSManager::MainDestructor(void)
 * Address: 00155c0c
 */
TPSSManager::MainDestructor(void) {
    /*
        155c0c:	ea6962bc 	b	1bae704 <TAppWorld::$MainDestructor(void)>
    */
}

/**
 * Symbol: TPSSManager::TheMain(void)
 * Address: 00155c10
 */
TPSSManager::TheMain(void) {
    /*
        155c10:	e1a0c00d 	mov	ip, sp
        155c14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        155c18:	e24cb004 	sub	fp, ip, #4	; 0x4
        155c1c:	e1a04000 	mov	r4, r0
        155c20:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        155c24:	e28d000c 	add	r0, sp, #12	; 0xc
        155c28:	eb69de96 	bl	1bcd688 <TUNameServer::$__ct(void)>
        155c2c:	e1a0300d 	mov	r3, sp
        155c30:	e92d0008 	stmdb	sp!, {r3}
        155c34:	e28d300c 	add	r3, sp, #12	; 0xc
        155c38:	e28d0010 	add	r0, sp, #16	; 0x10
        155c3c:	e28f2f1a 	add	r2, pc, #104	; 0x68
        155c40:	e28f1f1b 	add	r1, pc, #108	; 0x6c
        155c44:	eb6a24b9 	bl	1bdef30 <TUNameServer::$WaitForRegister(char *, char *, unsigned long *, unsigned long *)>
        155c48:	e28dd004 	add	sp, sp, #4	; 0x4
        155c4c:	e3300000 	teq	r0, #0	; 0x0
        155c50:	1a000011 	bne	155c9c <TPSSManager::TheMain(void)+0x8c>
        155c54:	e1a0300d 	mov	r3, sp
        155c58:	e92d0008 	stmdb	sp!, {r3}
        155c5c:	e28d3008 	add	r3, sp, #8	; 0x8
        155c60:	e28d0010 	add	r0, sp, #16	; 0x10
        155c64:	e28f2f10 	add	r2, pc, #64	; 0x40
        155c68:	e28f1f13 	add	r1, pc, #76	; 0x4c
        155c6c:	eb6a24af 	bl	1bdef30 <TUNameServer::$WaitForRegister(char *, char *, unsigned long *, unsigned long *)>
        155c70:	e28dd004 	add	sp, sp, #4	; 0x4
        155c74:	e3300000 	teq	r0, #0	; 0x0
        155c78:	1a000007 	bne	155c9c <TPSSManager::TheMain(void)+0x8c>
        155c7c:	e2840f4f 	add	r0, r4, #316	; 0x13c
        155c80:	e59d1008 	ldr	r1, [sp, #8]
        155c84:	eb69eaef 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        155c88:	e2840f51 	add	r0, r4, #324	; 0x144
        155c8c:	e59d1004 	ldr	r1, [sp, #4]
        155c90:	eb69eaec 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        155c94:	e1a00004 	mov	r0, r4
        155c98:	eb6966cd 	bl	1baf7d4 <TAppWorld::$TheMain(void)>
        155c9c:	e28d000c 	add	r0, sp, #12	; 0xc
        155ca0:	e3a01000 	mov	r1, #0	; 0x0
        155ca4:	eb69e296 	bl	1bce704 <TUNameServer::$__dt(void)>
        155ca8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        155cac:	5455506f 	ldrplb	r5, [r5], -#111
        155cb0:	72740000 	rsbvcs	r0, r4, #0	; 0x0
        155cb4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        155cb8:	00000000 	andeq	r0, r0, r0
        155cbc:	63647376 	cmnvs	r4, #-671088639	; 0xd8000001
        155cc0:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPSSManager::SendServer(unsigned long, unsigned long, unsigned long, unsigned long, TTime *)
 * Address: 00155cc4
 */
TPSSManager::SendServer(unsigned long, unsigned long, unsigned long, unsigned long, TTime *) {
    /*
        155cc4:	e1a0c00d 	mov	ip, sp
        155cc8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        155ccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        155cd0:	e1a04000 	mov	r4, r0
        155cd4:	e2800080 	add	r0, r0, #128	; 0x80
        155cd8:	e1a05000 	mov	r5, r0
        155cdc:	e59b6008 	ldr	r6, [fp, #8]
        155ce0:	e59b7004 	ldr	r7, [fp, #4]
        155ce4:	eb6a03a0 	bl	1bd6b6c <TCardMessage::$MessageStuff(unsigned long, unsigned long, unsigned long)>
        155ce8:	e284cf51 	add	ip, r4, #324	; 0x144
        155cec:	e284e070 	add	lr, r4, #112	; 0x70
        155cf0:	e1a02007 	mov	r2, r7
        155cf4:	e1a03006 	mov	r3, r6
        155cf8:	e3a04000 	mov	r4, #0	; 0x0
        155cfc:	e3a01000 	mov	r1, #0	; 0x0
        155d00:	e3a00001 	mov	r0, #1	; 0x1
        155d04:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        155d08:	e1a03004 	mov	r3, r4
        155d0c:	e3a020b8 	mov	r2, #184	; 0xb8
        155d10:	e92d000c 	stmdb	sp!, {r2, r3}
        155d14:	e1a03005 	mov	r3, r5
        155d18:	e1a0000c 	mov	r0, ip
        155d1c:	e3a02000 	mov	r2, #0	; 0x0
        155d20:	e59e1000 	ldr	r1, [lr]
        155d24:	eb6a1407 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        155d28:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPSSManager::ReplyServer(TCardMessage *, unsigned long, unsigned long, unsigned long)
 * Address: 00155d2c
 */
TPSSManager::ReplyServer(TCardMessage *, unsigned long, unsigned long, unsigned long) {
    /*
        155d2c:	e1a00002 	mov	r0, r2
        155d30:	e1a02003 	mov	r2, r3
        155d34:	e1a0c000 	mov	ip, r0
        155d38:	e1a00001 	mov	r0, r1
        155d3c:	e1a0100c 	mov	r1, ip
        155d40:	e59d3000 	ldr	r3, [sp]
        155d44:	ea6a0388 	b	1bd6b6c <TCardMessage::$MessageStuff(unsigned long, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)
 * Address: 00155d48
 */
TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char) {
    /*
        155d48:	e1a0c00d 	mov	ip, sp
        155d4c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        155d50:	e24cb004 	sub	fp, ip, #4	; 0x4
        155d54:	e1a05000 	mov	r5, r0
        155d58:	e1a04003 	mov	r4, r3
        155d5c:	e3a02002 	mov	r2, #2	; 0x2
        155d60:	e3a08000 	mov	r8, #0	; 0x0
        155d64:	e5930008 	ldr	r0, [r3, #8]
        155d68:	e3300033 	teq	r0, #51	; 0x33
        155d6c:	0a000003 	beq	155d80 <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x38>
        155d70:	e3300036 	teq	r0, #54	; 0x36
        155d74:	0a000054 	beq	155ecc <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x184>
        155d78:	e330006f 	teq	r0, #111	; 0x6f
        155d7c:	1a000056 	bne	155edc <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x194>
        155d80:	e1a01004 	mov	r1, r4
        155d84:	e1a00005 	mov	r0, r5
        155d88:	eb667b1c 	bl	1af4a00 <TPSSManager::$CardGone(TCardMessage *)>
        155d8c:	e1a02000 	mov	r2, r0
        155d90:	e5940008 	ldr	r0, [r4, #8]
        155d94:	e330006f 	teq	r0, #111	; 0x6f
        155d98:	1a00004f 	bne	155edc <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x194>
        155d9c:	e3320002 	teq	r2, #2	; 0x2
        155da0:	13320000 	teqne	r2, #0	; 0x0
        155da4:	13a080c9 	movne	r8, #201	; 0xc9
        155da8:	12488b0a 	subne	r8, r8, #10240	; 0x2800
        155dac:	1a000044 	bne	155ec4 <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x17c>
        155db0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        155db4:	e0850100 	add	r0, r5, r0, lsl #2
        155db8:	e5901af8 	ldr	r1, [r0, #2808]
        155dbc:	e3310000 	teq	r1, #0	; 0x0
        155dc0:	05900b08 	ldreq	r0, [r0, #2824]
        155dc4:	03300000 	teqeq	r0, #0	; 0x0
        155dc8:	159f80c0 	ldrne	r8, [pc, #c0]	; 155e90 <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x148>
        155dcc:	1a00003c 	bne	155ec4 <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x17c>
        155dd0:	e3a00010 	mov	r0, #16	; 0x10
        155dd4:	eb69e257 	bl	1bce738 <$__nw(unsigned int)>
        155dd8:	e3300000 	teq	r0, #0	; 0x0
        155ddc:	0a000004 	beq	155df4 <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0xac>
        155de0:	e3a01000 	mov	r1, #0	; 0x0
        155de4:	e5801000 	str	r1, [r0]
        155de8:	e580100c 	str	r1, [r0, #12]
        155dec:	e5801004 	str	r1, [r0, #4]
        155df0:	e5801008 	str	r1, [r0, #8]
        155df4:	e1a07000 	mov	r7, r0
        155df8:	e3a00000 	mov	r0, #0	; 0x0
        155dfc:	eb677f27 	bl	1b35aa0 <TCardAsyncMsg::$__ct(void)>
        155e00:	e1b06000 	movs	r6, r0
        155e04:	13370000 	teqne	r7, #0	; 0x0
        155e08:	0a000021 	beq	155e94 <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x14c>
        155e0c:	e1a09007 	mov	r9, r7
        155e10:	e1a00005 	mov	r0, r5
        155e14:	eb6a3d37 	bl	1be52f8 <TAppWorld::$AEGetMsgToken(void)>
        155e18:	e890500c 	ldmia	r0, {r2, r3, ip, lr}
        155e1c:	e889500c 	stmia	r9, {r2, r3, ip, lr}
        155e20:	e1a00005 	mov	r0, r5
        155e24:	eb6a3d30 	bl	1be52ec <TAppWorld::$AEGetAEvent(void)>
        155e28:	e1a0e006 	mov	lr, r6
        155e2c:	e1a09000 	mov	r9, r0
        155e30:	e3a0c00f 	mov	ip, #15	; 0xf
        155e34:	e8b9000e 	ldmia	r9!, {r1, r2, r3}
        155e38:	e8ae000e 	stmia	lr!, {r1, r2, r3}
        155e3c:	e25cc001 	subs	ip, ip, #1	; 0x1
        155e40:	1afffffb 	bne	155e34 <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0xec>
        155e44:	e899000c 	ldmia	r9, {r2, r3}
        155e48:	e88e000c 	stmia	lr, {r2, r3}
        155e4c:	e28690bc 	add	r9, r6, #188	; 0xbc
        155e50:	e280a0bc 	add	sl, r0, #188	; 0xbc
        155e54:	e1a00009 	mov	r0, r9
        155e58:	e59a1000 	ldr	r1, [sl]
        155e5c:	eb69ea79 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        155e60:	e2890008 	add	r0, r9, #8	; 0x8
        155e64:	e59a1008 	ldr	r1, [sl, #8]
        155e68:	eb69ea76 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        155e6c:	e1a00005 	mov	r0, r5
        155e70:	eb6a3d1a 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
        155e74:	e5940010 	ldr	r0, [r4, #16]	; fField16
        155e78:	e0850100 	add	r0, r5, r0, lsl #2
        155e7c:	e5a07af8 	str	r7, [r0, #2808]!
        155e80:	e5940010 	ldr	r0, [r4, #16]	; fField16
        155e84:	e0850100 	add	r0, r5, r0, lsl #2
        155e88:	e5a06b08 	str	r6, [r0, #2824]!
        155e8c:	ea00000c 	b	155ec4 <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x17c>
        155e90:	ffffd8df 	swinv	0x00ffd8df
        155e94:	e1a00007 	mov	r0, r7
        155e98:	eb69de10 	bl	1bcd6e0 <$__dl(void *)>
        155e9c:	e3360000 	teq	r6, #0	; 0x0
        155ea0:	0a000007 	beq	155ec4 <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x17c>
        155ea4:	e28600bc 	add	r0, r6, #188	; 0xbc
        155ea8:	e3a01000 	mov	r1, #0	; 0x0
        155eac:	eb69e217 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        155eb0:	e1a00006 	mov	r0, r6
        155eb4:	e3a01000 	mov	r1, #0	; 0x0
        155eb8:	eb69de0e 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
        155ebc:	e1a00006 	mov	r0, r6
        155ec0:	eb69de06 	bl	1bcd6e0 <$__dl(void *)>
        155ec4:	e3a0206f 	mov	r2, #111	; 0x6f
        155ec8:	ea000003 	b	155edc <TPSSManager::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x194>
        155ecc:	e1a01004 	mov	r1, r4
        155ed0:	e1a00005 	mov	r0, r5
        155ed4:	eb667aca 	bl	1af4a04 <TPSSManager::$CardIsSame(TCardMessage *)>
        155ed8:	e1a02000 	mov	r2, r0
        155edc:	e1a03008 	mov	r3, r8
        155ee0:	e92d0008 	stmdb	sp!, {r3}
        155ee4:	e5943010 	ldr	r3, [r4, #16]	; fField16
        155ee8:	e1a01004 	mov	r1, r4
        155eec:	e1a00005 	mov	r0, r5
        155ef0:	eb66b8d1 	bl	1b0423c <TPSSManager::$ReplyServer(TCardMessage *, unsigned long, unsigned long, unsigned long)>
        155ef4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPSSManager::DoReply(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)
 * Address: 00155ef8
 */
TPSSManager::DoReply(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char) {
    /*
        155ef8:	e5b31008 	ldr	r1, [r3, #8]!
        155efc:	e3310002 	teq	r1, #2	; 0x2
        155f00:	01a0f00e 	moveq	pc, lr
        155f04:	e59fc014 	ldr	ip, [pc, #14]	; 155f20 <TPSSManager::DoReply(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x28>
        155f08:	e131000c 	teq	r1, ip
        155f0c:	159fc010 	ldrne	ip, [pc, #10]	; 155f24 <TPSSManager::DoReply(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x2c>
        155f10:	1131000c 	teqne	r1, ip
        155f14:	03a01001 	moveq	r1, #1	; 0x1
        155f18:	0a66c94e 	beq	1b08458 <TPSSManager::$UIEngine(unsigned char)>
        155f1c:	e1a0f00e 	mov	pc, lr
        155f20:	72737472 	rsbvcs	r7, r3, #1912602624	; 0x72000000
        155f24:	73746f72 	cmnvc	r4, #456	; 0x1c8
        155f28:	e1a0c00d 	mov	ip, sp
        155f2c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        155f30:	e24cb004 	sub	fp, ip, #4	; 0x4
        155f34:	e1a04000 	mov	r4, r0
        155f38:	e24dd004 	sub	sp, sp, #4	; 0x4
        155f3c:	e1a0000d 	mov	r0, sp
        155f40:	eb6a6617 	bl	1bef7a4 <$GetPort(GrafPort **)>
        155f44:	e59d1000 	ldr	r1, [sp]
        155f48:	e3340000 	teq	r4, #0	; 0x0
        155f4c:	e5910054 	ldr	r0, [r1, #84]
        155f50:	15841000 	strne	r1, [r4]
        155f54:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

