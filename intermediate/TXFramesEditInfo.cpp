#include "include/TXFramesEditInfo.h"

/**
 * Symbol: TXFramesEditInfo::CatchFrame(long)
 * Address: 002399b0
 */
TXFramesEditInfo::CatchFrame(long) {
    /*
        2399b0:	e5902000 	ldr	r2, [r0]
        2399b4:	e3320000 	teq	r2, #0	; 0x0
        2399b8:	05801034 	streq	r1, [r0, #52]	; fField52
        2399bc:	e2823001 	add	r3, r2, #1	; 0x1
        2399c0:	e0822082 	add	r2, r2, r2, lsl #1
        2399c4:	e5801038 	str	r1, [r0, #56]	; fField56
        2399c8:	e5803000 	str	r3, [r0]
        2399cc:	e0800182 	add	r0, r0, r2, lsl #3
        2399d0:	e5a01004 	str	r1, [r0, #4]!	; fField4
        2399d4:	e3a01000 	mov	r1, #0	; 0x0
        2399d8:	e580100c 	str	r1, [r0, #12]	; fField12
        2399dc:	e5801004 	str	r1, [r0, #4]	; fField4
        2399e0:	e5801008 	str	r1, [r0, #8]	; fField8
        2399e4:	e5801010 	str	r1, [r0, #16]	; fField16
        2399e8:	e5801014 	str	r1, [r0, #20]	; fField20
        2399ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFramesEditInfo::GetEditInfoPtr( const(long, TXFrameEditInfo **, int))
 * Address: 002399f0
 */
TXFramesEditInfo::GetEditInfoPtr( const(long, TXFrameEditInfo **, int)) {
    /*
        2399f0:	e92d4010 	stmdb	sp!, {r4, lr}
        2399f4:	e3a0e000 	mov	lr, #0	; 0x0
        2399f8:	e582e000 	str	lr, [r2]
        2399fc:	e5904000 	ldr	r4, [r0]
        239a00:	e3340000 	teq	r4, #0	; 0x0
        239a04:	0a000018 	beq	239a6c <TXFramesEditInfo::GetEditInfoPtr( const(long, TXFrameEditInfo **, int))+0x7c>
        239a08:	e590c034 	ldr	ip, [r0, #52]	; fField52
        239a0c:	e15c0001 	cmp	ip, r1
        239a10:	ca000015 	bgt	239a6c <TXFramesEditInfo::GetEditInfoPtr( const(long, TXFrameEditInfo **, int))+0x7c>
        239a14:	e590c038 	ldr	ip, [r0, #56]	; fField56
        239a18:	e15c0001 	cmp	ip, r1
        239a1c:	ba000012 	blt	239a6c <TXFramesEditInfo::GetEditInfoPtr( const(long, TXFrameEditInfo **, int))+0x7c>
        239a20:	e280c004 	add	ip, r0, #4	; 0x4
        239a24:	e0844084 	add	r4, r4, r4, lsl #1
        239a28:	e0800184 	add	r0, r0, r4, lsl #3
        239a2c:	e2800004 	add	r0, r0, #4	; 0x4
        239a30:	e15c0000 	cmp	ip, r0
        239a34:	2a00000c 	bcs	239a6c <TXFramesEditInfo::GetEditInfoPtr( const(long, TXFrameEditInfo **, int))+0x7c>
        239a38:	e59c4000 	ldr	r4, [ip]
        239a3c:	e1340001 	teq	r4, r1
        239a40:	1a000006 	bne	239a60 <TXFramesEditInfo::GetEditInfoPtr( const(long, TXFrameEditInfo **, int))+0x70>
        239a44:	e582c000 	str	ip, [r2]
        239a48:	e5bc0004 	ldr	r0, [ip, #4]!	; fField4
        239a4c:	e1100003 	tst	r0, r3
        239a50:	13a00000 	movne	r0, #0	; 0x0
        239a54:	03a00001 	moveq	r0, #1	; 0x1
        239a58:	e20000ff 	and	r0, r0, #255	; 0xff
        239a5c:	e8bd8010 	ldmia	sp!, {r4, pc}
        239a60:	e28cc018 	add	ip, ip, #24	; 0x18
        239a64:	e15c0000 	cmp	ip, r0
        239a68:	3afffff2 	bcc	239a38 <TXFramesEditInfo::GetEditInfoPtr( const(long, TXFrameEditInfo **, int))+0x48>
        239a6c:	e1a0000e 	mov	r0, lr
        239a70:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TXFramesEditInfo::GetNext(void)
 * Address: 00239a74
 */
TXFramesEditInfo::GetNext(void) {
    /*
        239a74:	e590103c 	ldr	r1, [r0, #60]	; fField60
        239a78:	e5902000 	ldr	r2, [r0]
        239a7c:	e1310002 	teq	r1, r2
        239a80:	03a01000 	moveq	r1, #0	; 0x0
        239a84:	05a0103c 	streq	r1, [r0, #60]!	; fField60
        239a88:	01a00001 	moveq	r0, r1
        239a8c:	01a0f00e 	moveq	pc, lr
        239a90:	e2812001 	add	r2, r1, #1	; 0x1
        239a94:	e0811081 	add	r1, r1, r1, lsl #1
        239a98:	e580203c 	str	r2, [r0, #60]	; fField60
        239a9c:	e0800181 	add	r0, r0, r1, lsl #3
        239aa0:	e2800004 	add	r0, r0, #4	; 0x4
        239aa4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFramesEditInfo::SetEditFlag(int, long, long)
 * Address: 00239aa8
 */
TXFramesEditInfo::SetEditFlag(int, long, long) {
    /*
        239aa8:	e1a0c00d 	mov	ip, sp
        239aac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        239ab0:	e24cb004 	sub	fp, ip, #4	; 0x4
        239ab4:	e1a04001 	mov	r4, r1
        239ab8:	e1a01002 	mov	r1, r2
        239abc:	e590c000 	ldr	ip, [r0]
        239ac0:	e33c0000 	teq	ip, #0	; 0x0
        239ac4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        239ac8:	e3330001 	teq	r3, #1	; 0x1
        239acc:	1a00000a 	bne	239afc <TXFramesEditInfo::SetEditFlag(int, long, long)+0x54>
        239ad0:	e24dd004 	sub	sp, sp, #4	; 0x4
        239ad4:	e1a0200d 	mov	r2, sp
        239ad8:	e3a03000 	mov	r3, #0	; 0x0
        239adc:	eb65531c 	bl	1b8e754 <TXFramesEditInfo::$GetEditInfoPtr( const(long, TXFrameEditInfo **, int))>
        239ae0:	e3300000 	teq	r0, #0	; 0x0
        239ae4:	0a000003 	beq	239af8 <TXFramesEditInfo::SetEditFlag(int, long, long)+0x50>
        239ae8:	e59d0000 	ldr	r0, [sp]
        239aec:	e5901004 	ldr	r1, [r0, #4]	; fField4
        239af0:	e1811004 	orr	r1, r1, r4
        239af4:	e5a01004 	str	r1, [r0, #4]!	; fField4
        239af8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        239afc:	e2802004 	add	r2, r0, #4	; 0x4
        239b00:	e08cc08c 	add	ip, ip, ip, lsl #1
        239b04:	e080018c 	add	r0, r0, ip, lsl #3
        239b08:	e280c004 	add	ip, r0, #4	; 0x4
        239b0c:	e3730106 	cmn	r3, #-2147483647	; 0x80000001
        239b10:	a1a00003 	movge	r0, r3
        239b14:	b0810003 	addlt	r0, r1, r3
        239b18:	e152000c 	cmp	r2, ip
        239b1c:	291ba810 	ldmcsdb	fp, {r4, fp, sp, pc}
        239b20:	e5923000 	ldr	r3, [r2]
        239b24:	e1530001 	cmp	r3, r1
        239b28:	ba000003 	blt	239b3c <TXFramesEditInfo::SetEditFlag(int, long, long)+0x94>
        239b2c:	e1530000 	cmp	r3, r0
        239b30:	b5923004 	ldrlt	r3, [r2, #4]	; fField4
        239b34:	b1833004 	orrlt	r3, r3, r4
        239b38:	b5823004 	strlt	r3, [r2, #4]	; fField4
        239b3c:	e2822018 	add	r2, r2, #24	; 0x18
        239b40:	e152000c 	cmp	r2, ip
        239b44:	3afffff5 	bcc	239b20 <TXFramesEditInfo::SetEditFlag(int, long, long)+0x78>
        239b48:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

