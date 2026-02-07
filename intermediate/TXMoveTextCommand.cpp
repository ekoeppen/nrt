#include "include/TXMoveTextCommand.h"

/**
 * Symbol: TXMoveTextCommand::ITXMoveTextCommand(Textension *, TXOffsetRange const &, TXOffset, unsigned char)
 * Address: 002338a8
 */
TXMoveTextCommand::ITXMoveTextCommand(Textension *, TXOffsetRange const &, TXOffset, unsigned char) {
    /*
        2338a8:	e1a0c00d 	mov	ip, sp
        2338ac:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2338b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2338b4:	e24cb014 	sub	fp, ip, #20	; 0x14
        2338b8:	e1a04000 	mov	r4, r0
        2338bc:	e1a05002 	mov	r5, r2
        2338c0:	e59b0018 	ldr	r0, [fp, #24]
        2338c4:	e20060ff 	and	r6, r0, #255	; 0xff
        2338c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2338cc:	e1a0300d 	mov	r3, sp
        2338d0:	e1a00004 	mov	r0, r4
        2338d4:	e3a02004 	mov	r2, #4	; 0x4
        2338d8:	eb6552d2 	bl	1b88428 <TXEditCommand::$ITXEditCommand(Textension *, int, unsigned char *)>
        2338dc:	e2841068 	add	r1, r4, #104	; 0x68
        2338e0:	e895500c 	ldmia	r5, {r2, r3, ip, lr}
        2338e4:	e881500c 	stmia	r1, {r2, r3, ip, lr}
        2338e8:	e2842078 	add	r2, r4, #120	; 0x78
        2338ec:	e28b1010 	add	r1, fp, #16	; 0x10
        2338f0:	e8915000 	ldmia	r1, {ip, lr}
        2338f4:	e8825000 	stmia	r2, {ip, lr}
        2338f8:	e5c46080 	strb	r6, [r4, #128]	; fField128
        2338fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXMoveTextCommand::GetUndoParams(unsigned char *)
 * Address: 00233900
 */
TXMoveTextCommand::GetUndoParams(unsigned char *) {
    /*
        233900:	e1a0c00d 	mov	ip, sp
        233904:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        233908:	e24cb004 	sub	fp, ip, #4	; 0x4
        23390c:	e1a04001 	mov	r4, r1
        233910:	eb6552ca 	bl	1b88440 <TXEditCommand::$GetUndoParams(unsigned char *)>
        233914:	e3a00000 	mov	r0, #0	; 0x0
        233918:	e5c40000 	strb	r0, [r4]
        23391c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXMoveTextCommand::DoIt(int *)
 * Address: 00233920
 */
TXMoveTextCommand::DoIt(int *) {
    /*
        233920:	e1a0c00d 	mov	ip, sp
        233924:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        233928:	e24cb004 	sub	fp, ip, #4	; 0x4
        23392c:	e1a04000 	mov	r4, r0
        233930:	e1a05001 	mov	r5, r1
        233934:	e2800068 	add	r0, r0, #104	; 0x68
        233938:	e1a08000 	mov	r8, r0
        23393c:	e2800010 	add	r0, r0, #16	; 0x10
        233940:	e9301008 	ldmdb	r0!, {r3, ip}
        233944:	e92d1008 	stmdb	sp!, {r3, ip}
        233948:	e9301008 	ldmdb	r0!, {r3, ip}
        23394c:	e92d1008 	stmdb	sp!, {r3, ip}
        233950:	e1a0100d 	mov	r1, sp
        233954:	e1a00004 	mov	r0, r4
        233958:	e3a02007 	mov	r2, #7	; 0x7
        23395c:	e5943000 	ldr	r3, [r4]
        233960:	e1a0e00f 	mov	lr, pc
        233964:	e283f02c 	add	pc, r3, #44	; 0x2c
        233968:	e1b09000 	movs	r9, r0
        23396c:	03a000e9 	moveq	r0, #233	; 0xe9
        233970:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        233974:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        233978:	e59d0008 	ldr	r0, [sp, #8]
        23397c:	e59d1000 	ldr	r1, [sp]
        233980:	e0407001 	sub	r7, r0, r1
        233984:	e2840078 	add	r0, r4, #120	; 0x78
        233988:	e1a0a000 	mov	sl, r0
        23398c:	e5906000 	ldr	r6, [r0]
        233990:	e5d40080 	ldrb	r0, [r4, #128]	; fField128
        233994:	e3300000 	teq	r0, #0	; 0x0
        233998:	1a00001e 	bne	233a18 <TXMoveTextCommand::DoIt(int *)+0xf8>
        23399c:	e24dd024 	sub	sp, sp, #36	; 0x24
        2339a0:	e1a0000d 	mov	r0, sp
        2339a4:	eb65b195 	bl	1ba0000 <TXReplaceParams::$__ct(void)>
        2339a8:	e59d1024 	ldr	r1, [sp, #36]
        2339ac:	e59d202c 	ldr	r2, [sp, #44]
        2339b0:	e1a0300d 	mov	r3, sp
        2339b4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2339b8:	eb65b183 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        2339bc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2339c0:	e59d0034 	ldr	r0, [sp, #52]
        2339c4:	e1500006 	cmp	r0, r6
        2339c8:	b0466007 	sublt	r6, r6, r7
        2339cc:	b8985000 	ldmltia	r8, {ip, lr}
        2339d0:	b88a5000 	stmltia	sl, {ip, lr}
        2339d4:	ba000006 	blt	2339f4 <TXMoveTextCommand::DoIt(int *)+0xd4>
        2339d8:	e5980000 	ldr	r0, [r8]
        2339dc:	e0800007 	add	r0, r0, r7
        2339e0:	e3a01000 	mov	r1, #0	; 0x0
        2339e4:	e58d0000 	str	r0, [sp]
        2339e8:	e5cd1004 	strb	r1, [sp, #4]	; fField4
        2339ec:	e89d1008 	ldmia	sp, {r3, ip}
        2339f0:	e88a1008 	stmia	sl, {r3, ip}
        2339f4:	e3a03001 	mov	r3, #1	; 0x1
        2339f8:	e92d0008 	stmdb	sp!, {r3}
        2339fc:	e0862007 	add	r2, r6, r7
        233a00:	e1a00008 	mov	r0, r8
        233a04:	e1a01006 	mov	r1, r6
        233a08:	e3a03000 	mov	r3, #0	; 0x0
        233a0c:	eb00019e 	bl	23408c <TXOffsetRange::Set(long, long, unsigned char, unsigned char)>
        233a10:	e28dd030 	add	sp, sp, #48	; 0x30
        233a14:	ea000004 	b	233a2c <TXMoveTextCommand::DoIt(int *)+0x10c>
        233a18:	e59d0000 	ldr	r0, [sp]
        233a1c:	e1500006 	cmp	r0, r6
        233a20:	c1a00008 	movgt	r0, r8
        233a24:	c1a01007 	movgt	r1, r7
        233a28:	cb0001af 	blgt	2340ec <TXOffsetRange::Offset(long)>
        233a2c:	e1a00009 	mov	r0, r9
        233a30:	e3a01000 	mov	r1, #0	; 0x0
        233a34:	e5992000 	ldr	r2, [r9]
        233a38:	e1a0e00f 	mov	lr, pc
        233a3c:	e282f008 	add	pc, r2, #8	; 0x8
        233a40:	e24dd060 	sub	sp, sp, #96	; 0x60
        233a44:	e1a01009 	mov	r1, r9
        233a48:	e28d0024 	add	r0, sp, #36	; 0x24
        233a4c:	eb655ac2 	bl	1b8a55c <TXLocalContainer::$__ct(TXStream *)>
        233a50:	e28d1024 	add	r1, sp, #36	; 0x24
        233a54:	e1a0000d 	mov	r0, sp
        233a58:	e3a02007 	mov	r2, #7	; 0x7
        233a5c:	eb65b169 	bl	1ba0008 <TXReplaceParams::$__ct(TXContainer *, unsigned char)>
        233a60:	e1a0300d 	mov	r3, sp
        233a64:	e1a02006 	mov	r2, r6
        233a68:	e1a01006 	mov	r1, r6
        233a6c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        233a70:	eb65b155 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        233a74:	e1b08000 	movs	r8, r0
        233a78:	1a000015 	bne	233ad4 <TXMoveTextCommand::DoIt(int *)+0x1b4>
        233a7c:	e24dd010 	sub	sp, sp, #16	; 0x10
        233a80:	e3a03001 	mov	r3, #1	; 0x1
        233a84:	e92d0008 	stmdb	sp!, {r3}
        233a88:	e0862007 	add	r2, r6, r7
        233a8c:	e1a01006 	mov	r1, r6
        233a90:	e28d0004 	add	r0, sp, #4	; 0x4
        233a94:	e3a03000 	mov	r3, #0	; 0x0
        233a98:	eb000167 	bl	23403c <TXOffsetRange::__ct(long, long, unsigned char, unsigned char)>
        233a9c:	e28dd004 	add	sp, sp, #4	; 0x4
        233aa0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        233aa4:	e1a0c000 	mov	ip, r0
        233aa8:	e5900014 	ldr	r0, [r0, #20]
        233aac:	e5d00019 	ldrb	r0, [r0, #25]
        233ab0:	e2502002 	subs	r2, r0, #2	; 0x2
        233ab4:	13a02001 	movne	r2, #1	; 0x1
        233ab8:	e1a0100d 	mov	r1, sp
        233abc:	e1a0000c 	mov	r0, ip
        233ac0:	e3a03001 	mov	r3, #1	; 0x1
        233ac4:	e59cc000 	ldr	ip, [ip]
        233ac8:	e1a0e00f 	mov	lr, pc
        233acc:	e28cf008 	add	pc, ip, #8	; 0x8
        233ad0:	e28dd010 	add	sp, sp, #16	; 0x10
        233ad4:	e1a01009 	mov	r1, r9
        233ad8:	e1a00004 	mov	r0, r4
        233adc:	e5942000 	ldr	r2, [r4]
        233ae0:	e1a0e00f 	mov	lr, pc
        233ae4:	e282f030 	add	pc, r2, #48	; 0x30
        233ae8:	e59f000c 	ldr	r0, [pc, #c]	; 233afc <TXMoveTextCommand::DoIt(int *)+0x1dc>
        233aec:	e5900000 	ldr	r0, [r0]
        233af0:	e5850000 	str	r0, [r5]
        233af4:	e1a00008 	mov	r0, r8
        233af8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        233afc:	0c104d90 	ldceq	13, cr4, [r0], -#576
    */
}

/**
 * Symbol: TXMoveTextCommand::UndoIt(int *)
 * Address: 00233b00
 */
TXMoveTextCommand::UndoIt(int *) {
    /*
        233b00:	e1a0c00d 	mov	ip, sp
        233b04:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        233b08:	e24cb004 	sub	fp, ip, #4	; 0x4
        233b0c:	e1a04000 	mov	r4, r0
        233b10:	e1a05001 	mov	r5, r1
        233b14:	e5d00080 	ldrb	r0, [r0, #128]	; fField128
        233b18:	e3300000 	teq	r0, #0	; 0x0
        233b1c:	0a000018 	beq	233b84 <TXMoveTextCommand::UndoIt(int *)+0x84>
        233b20:	e24dd024 	sub	sp, sp, #36	; 0x24
        233b24:	e5946078 	ldr	r6, [r4, #120]	; fField120
        233b28:	e2840068 	add	r0, r4, #104	; 0x68
        233b2c:	e1a07000 	mov	r7, r0
        233b30:	e5901008 	ldr	r1, [r0, #8]
        233b34:	e5900000 	ldr	r0, [r0]
        233b38:	e0418000 	sub	r8, r1, r0
        233b3c:	e1a0000d 	mov	r0, sp
        233b40:	eb65b12e 	bl	1ba0000 <TXReplaceParams::$__ct(void)>
        233b44:	e0862008 	add	r2, r6, r8
        233b48:	e1a0300d 	mov	r3, sp
        233b4c:	e1a01006 	mov	r1, r6
        233b50:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        233b54:	eb65b11c 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        233b58:	e5970000 	ldr	r0, [r7]
        233b5c:	e1500006 	cmp	r0, r6
        233b60:	c1a00007 	movgt	r0, r7
        233b64:	c2681000 	rsbgt	r1, r8, #0	; 0x0
        233b68:	cb00015f 	blgt	2340ec <TXOffsetRange::Offset(long)>
        233b6c:	e59f000c 	ldr	r0, [pc, #c]	; 233b80 <TXMoveTextCommand::UndoIt(int *)+0x80>
        233b70:	e5900000 	ldr	r0, [r0]
        233b74:	e5850000 	str	r0, [r5]
        233b78:	e3a00000 	mov	r0, #0	; 0x0
        233b7c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        233b80:	0c104d90 	ldceq	13, cr4, [r0], -#576
        233b84:	e1a01005 	mov	r1, r5
        233b88:	e1a00004 	mov	r0, r4
        233b8c:	e5942000 	ldr	r2, [r4]
        233b90:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        233b94:	e282f004 	add	pc, r2, #4	; 0x4
    */
}

/**
 * Symbol: TXMoveTextCommand::RedoIt(int *)
 * Address: 00233b98
 */
TXMoveTextCommand::RedoIt(int *) {
    /*
        233b98:	e5902000 	ldr	r2, [r0]
        233b9c:	e282f004 	add	pc, r2, #4	; 0x4
    */
}

