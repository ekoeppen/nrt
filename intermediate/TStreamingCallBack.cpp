#include "include/TStreamingCallBack.h"

/**
 * Symbol: TStreamingCallBack::__ct(void)
 * Address: 00139c44
 */
TStreamingCallBack::TStreamingCallBack(void) {
    /*
        139c44:	e1a0c00d 	mov	ip, sp
        139c48:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        139c4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        139c50:	e1b04000 	movs	r4, r0
        139c54:	1a000003 	bne	139c68 <TStreamingCallBack::__ct(void)+0x24>
        139c58:	e3a00014 	mov	r0, #20	; 0x14
        139c5c:	eb6a52b5 	bl	1bce738 <$__nw(unsigned int)>
        139c60:	e1b04000 	movs	r4, r0
        139c64:	0a00000b 	beq	139c98 <TStreamingCallBack::__ct(void)+0x54>
        139c68:	e1a00004 	mov	r0, r4
        139c6c:	eb69b9f6 	bl	1ba844c <PipeCallBack::$__ct(void)>
        139c70:	e3a00002 	mov	r0, #2	; 0x2
        139c74:	eb6a2134 	bl	1bc214c <$AllocateRefHandle(long)>
        139c78:	e584000c 	str	r0, [r4, #12]
        139c7c:	e1a01000 	mov	r1, r0
        139c80:	e3a00000 	mov	r0, #0	; 0x0
        139c84:	e5a10004 	str	r0, [r1, #4]!
        139c88:	e59f1010 	ldr	r1, [pc, #10]	; 139ca0 <TStreamingCallBack::__ct(void)+0x5c>
        139c8c:	e5841000 	str	r1, [r4]
        139c90:	e594100c 	ldr	r1, [r4, #12]
        139c94:	e5810000 	str	r0, [r1]
        139c98:	e1a00004 	mov	r0, r4
        139c9c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        139ca0:	0001eb94 	muleq	r1, r4, fp
    */
}

/**
 * Symbol: TStreamingCallBack::__dt(void)
 * Address: 00139ca4
 */
TStreamingCallBack::~TStreamingCallBack(void) {
    /*
        139ca4:	e1a0c00d 	mov	ip, sp
        139ca8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        139cac:	e24cb004 	sub	fp, ip, #4	; 0x4
        139cb0:	e1a04000 	mov	r4, r0
        139cb4:	e1a05001 	mov	r5, r1
        139cb8:	e59f0038 	ldr	r0, [pc, #38]	; 139cf8 <TStreamingCallBack::__dt(void)+0x54>
        139cbc:	e5840000 	str	r0, [r4]
        139cc0:	e284000c 	add	r0, r4, #12	; 0xc
        139cc4:	e3a02000 	mov	r2, #0	; 0x0
        139cc8:	e5901000 	ldr	r1, [r0]
        139ccc:	e5812000 	str	r2, [r1]
        139cd0:	e5900000 	ldr	r0, [r0]
        139cd4:	eb6a2538 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139cd8:	e1a00004 	mov	r0, r4
        139cdc:	e3a01000 	mov	r1, #0	; 0x0
        139ce0:	eb69dadb 	bl	1bb0854 <PipeCallBack::$__dt(void)>
        139ce4:	e3150001 	tst	r5, #1	; 0x1
        139ce8:	11a00004 	movne	r0, r4
        139cec:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        139cf0:	1a6a4e7a 	bne	1bcd6e0 <$__dl(void *)>
        139cf4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        139cf8:	0001eb94 	muleq	r1, r4, fp
    */
}

/**
 * Symbol: TStreamingCallBack::Status(long, long)
 * Address: 00139cfc
 */
TStreamingCallBack::Status(long, long) {
    /*
        139cfc:	e1a0c00d 	mov	ip, sp
        139d00:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        139d04:	e24cb004 	sub	fp, ip, #4	; 0x4
        139d08:	e1a04000 	mov	r4, r0
        139d0c:	e1a06001 	mov	r6, r1
        139d10:	e1a05002 	mov	r5, r2
        139d14:	e280000c 	add	r0, r0, #12	; 0xc
        139d18:	e1a09000 	mov	r9, r0
        139d1c:	e5900000 	ldr	r0, [r0]
        139d20:	e5900000 	ldr	r0, [r0]
        139d24:	e3a07001 	mov	r7, #1	; 0x1
        139d28:	e3300000 	teq	r0, #0	; 0x0
        139d2c:	01a00007 	moveq	r0, r7
        139d30:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        139d34:	e24dd004 	sub	sp, sp, #4	; 0x4
        139d38:	e3a00002 	mov	r0, #2	; 0x2
        139d3c:	eb658816 	bl	1a9bd9c <$MakeArray(long)>
        139d40:	eb6a2101 	bl	1bc214c <$AllocateRefHandle(long)>
        139d44:	e58d0000 	str	r0, [sp]
        139d48:	e5d40010 	ldrb	r0, [r4, #16]	; fField16
        139d4c:	e3a08000 	mov	r8, #0	; 0x0
        139d50:	e3300000 	teq	r0, #0	; 0x0
        139d54:	0a000029 	beq	139e00 <TStreamingCallBack::Status(long, long)+0x104>
        139d58:	e3760001 	cmn	r6, #1	; 0x1
        139d5c:	11a00106 	movne	r0, r6, lsl #2
        139d60:	03a00002 	moveq	r0, #2	; 0x2
        139d64:	eb6a20f8 	bl	1bc214c <$AllocateRefHandle(long)>
        139d68:	e1a05000 	mov	r5, r0
        139d6c:	e1a01008 	mov	r1, r8
        139d70:	e5902000 	ldr	r2, [r0]
        139d74:	e59d0000 	ldr	r0, [sp]
        139d78:	e5900000 	ldr	r0, [r0]
        139d7c:	eb6a3175 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        139d80:	e1a00005 	mov	r0, r5
        139d84:	eb6a250c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139d88:	e5b40004 	ldr	r0, [r4, #4]!
        139d8c:	e3700001 	cmn	r0, #1	; 0x1
        139d90:	1a000001 	bne	139d9c <TStreamingCallBack::Status(long, long)+0xa0>
        139d94:	e3a00002 	mov	r0, #2	; 0x2
        139d98:	ea000000 	b	139da0 <TStreamingCallBack::Status(long, long)+0xa4>
        139d9c:	e1a00100 	mov	r0, r0, lsl #2
        139da0:	eb6a20e9 	bl	1bc214c <$AllocateRefHandle(long)>
        139da4:	e1a04000 	mov	r4, r0
        139da8:	e1a01007 	mov	r1, r7
        139dac:	e5902000 	ldr	r2, [r0]
        139db0:	e59d0000 	ldr	r0, [sp]
        139db4:	e5900000 	ldr	r0, [r0]
        139db8:	eb6a3166 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        139dbc:	e1a00004 	mov	r0, r4
        139dc0:	eb6a24fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139dc4:	e1a00009 	mov	r0, r9
        139dc8:	e1a0200d 	mov	r2, sp
        139dcc:	e59f1028 	ldr	r1, [pc, #28]	; 139dfc <TStreamingCallBack::Status(long, long)+0x100>
        139dd0:	eb6a24ff 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        139dd4:	eb6a20dc 	bl	1bc214c <$AllocateRefHandle(long)>
        139dd8:	e5901000 	ldr	r1, [r0]
        139ddc:	e2511002 	subs	r1, r1, #2	; 0x2
        139de0:	13a01001 	movne	r1, #1	; 0x1
        139de4:	e20140ff 	and	r4, r1, #255	; 0xff
        139de8:	eb6a24f3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139dec:	e59d0000 	ldr	r0, [sp]
        139df0:	eb6a24f1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139df4:	e1a00004 	mov	r0, r4
        139df8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        139dfc:	00684058 	rsbeq	r4, r8, r8, asr r0
        139e00:	e3750001 	cmn	r5, #1	; 0x1
        139e04:	11a00105 	movne	r0, r5, lsl #2
        139e08:	03a00002 	moveq	r0, #2	; 0x2
        139e0c:	eb6a20ce 	bl	1bc214c <$AllocateRefHandle(long)>
        139e10:	e1a05000 	mov	r5, r0
        139e14:	e1a01008 	mov	r1, r8
        139e18:	e5902000 	ldr	r2, [r0]
        139e1c:	e59d0000 	ldr	r0, [sp]
        139e20:	e5900000 	ldr	r0, [r0]
        139e24:	eb6a314b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        139e28:	e1a00005 	mov	r0, r5
        139e2c:	eb6a24e2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139e30:	e5b40008 	ldr	r0, [r4, #8]!
        139e34:	e3700001 	cmn	r0, #1	; 0x1
        139e38:	1affffd7 	bne	139d9c <TStreamingCallBack::Status(long, long)+0xa0>
        139e3c:	eaffffd4 	b	139d94 <TStreamingCallBack::Status(long, long)+0x98>
    */
}

