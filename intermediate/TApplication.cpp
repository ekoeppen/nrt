#include "include/TApplication.h"

/**
 * Symbol: TApplication::ClassID( const(void))
 * Address: 00033aa8
 */
TApplication::ClassID( const(void)) {
    /*
         33aa8:	e3a00043 	mov	r0, #67	; 0x43
         33aac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TApplication::DerivedFrom( const(long))
 * Address: 00033ab0
 */
TApplication::DerivedFrom( const(long)) {
    /*
         33ab0:	e1a0c00d 	mov	ip, sp
         33ab4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         33ab8:	e24cb004 	sub	fp, ip, #4	; 0x4
         33abc:	e3310043 	teq	r1, #67	; 0x43
         33ac0:	0a000002 	beq	33ad0 <TApplication::DerivedFrom( const(long))+0x20>
         33ac4:	eb05d624 	bl	1a935c <TResponder::DerivedFrom( const(long))>
         33ac8:	e3300000 	teq	r0, #0	; 0x0
         33acc:	0a000001 	beq	33ad8 <TApplication::DerivedFrom( const(long))+0x28>
         33ad0:	e3a00001 	mov	r0, #1	; 0x1
         33ad4:	ea000000 	b	33adc <TApplication::DerivedFrom( const(long))+0x2c>
         33ad8:	e3a00000 	mov	r0, #0	; 0x0
         33adc:	e20000ff 	and	r0, r0, #255	; 0xff
         33ae0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TApplication::Idle(void)
 * Address: 00033ae4
 */
TApplication::Idle(void) {
    /*
         33ae4:	e3a01001 	mov	r1, #1	; 0x1
         33ae8:	e5c01014 	strb	r1, [r0, #20]	; fField20
         33aec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TApplication::AddDelayedAction(RefVar const &, RefVar const &, RefVar const &, RefVar const &)
 * Address: 00033af0
 */
TApplication::AddDelayedAction(RefVar const &, RefVar const &, RefVar const &, RefVar const &) {
    /*
         33af0:	e1a0c00d 	mov	ip, sp
         33af4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         33af8:	e24cb004 	sub	fp, ip, #4	; 0x4
         33afc:	e1a06001 	mov	r6, r1
         33b00:	e1a05002 	mov	r5, r2
         33b04:	e1a04003 	mov	r4, r3
         33b08:	e2800018 	add	r0, r0, #24	; 0x18
         33b0c:	e1a07000 	mov	r7, r0
         33b10:	e59b9004 	ldr	r9, [fp, #4]
         33b14:	e5900000 	ldr	r0, [r0]
         33b18:	e5900000 	ldr	r0, [r0]
         33b1c:	e3300002 	teq	r0, #2	; 0x2
         33b20:	1a000006 	bne	33b40 <TApplication::AddDelayedAction(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x50>
         33b24:	e3a08000 	mov	r8, #0	; 0x0
         33b28:	e1a0a007 	mov	sl, r7
         33b2c:	e3a00004 	mov	r0, #4	; 0x4
         33b30:	eb69a099 	bl	1a9bd9c <$MakeArray(long)>
         33b34:	e59a1000 	ldr	r1, [sl]
         33b38:	e5810000 	str	r0, [r1]
         33b3c:	ea000004 	b	33b54 <TApplication::AddDelayedAction(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x64>
         33b40:	eb6e45d9 	bl	1bc52ac <$Length(long)>
         33b44:	e1a08000 	mov	r8, r0
         33b48:	e2801004 	add	r1, r0, #4	; 0x4
         33b4c:	e1a00007 	mov	r0, r7
         33b50:	eb6e4a05 	bl	1bc636c <$SetLength(RefVar const &, long)>
         33b54:	e5961000 	ldr	r1, [r6]
         33b58:	e5912000 	ldr	r2, [r1]
         33b5c:	e5970000 	ldr	r0, [r7]
         33b60:	e5900000 	ldr	r0, [r0]
         33b64:	e1a01008 	mov	r1, r8
         33b68:	eb6e49fa 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         33b6c:	e2881001 	add	r1, r8, #1	; 0x1
         33b70:	e5952000 	ldr	r2, [r5]
         33b74:	e5922000 	ldr	r2, [r2]
         33b78:	e5970000 	ldr	r0, [r7]
         33b7c:	e5900000 	ldr	r0, [r0]
         33b80:	eb6e49f4 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         33b84:	e2881002 	add	r1, r8, #2	; 0x2
         33b88:	e5942000 	ldr	r2, [r4]
         33b8c:	e5922000 	ldr	r2, [r2]
         33b90:	e5970000 	ldr	r0, [r7]
         33b94:	e5900000 	ldr	r0, [r0]
         33b98:	eb6e49ee 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         33b9c:	e5990000 	ldr	r0, [r9]
         33ba0:	e5900000 	ldr	r0, [r0]
         33ba4:	e3100003 	tst	r0, #3	; 0x3
         33ba8:	0a00000b 	beq	33bdc <TApplication::AddDelayedAction(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xec>
         33bac:	e2885003 	add	r5, r8, #3	; 0x3
         33bb0:	e3a00002 	mov	r0, #2	; 0x2
         33bb4:	eb6e3964 	bl	1bc214c <$AllocateRefHandle(long)>
         33bb8:	e1a04000 	mov	r4, r0
         33bbc:	e5902000 	ldr	r2, [r0]
         33bc0:	e5970000 	ldr	r0, [r7]
         33bc4:	e5900000 	ldr	r0, [r0]
         33bc8:	e1a01005 	mov	r1, r5
         33bcc:	eb6e49e1 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         33bd0:	e1a00004 	mov	r0, r4
         33bd4:	eb6e3d78 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         33bd8:	ea000028 	b	33c80 <TApplication::AddDelayedAction(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x190>
         33bdc:	e24dd004 	sub	sp, sp, #4	; 0x4
         33be0:	e59f00ac 	ldr	r0, [pc, #ac]	; 33c94 <TApplication::AddDelayedAction(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x1a4>
         33be4:	e3a01008 	mov	r1, #8	; 0x8
         33be8:	eb6e3953 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
         33bec:	eb6e3956 	bl	1bc214c <$AllocateRefHandle(long)>
         33bf0:	e40d0008 	str	r0, [sp], -#8
         33bf4:	e28d1008 	add	r1, sp, #8	; 0x8
         33bf8:	e1a0000d 	mov	r0, sp
         33bfc:	eb6e3535 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         33c00:	e1a0100d 	mov	r1, sp
         33c04:	e28d0004 	add	r0, sp, #4	; 0x4
         33c08:	eb6e3531 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
         33c0c:	e1a0000d 	mov	r0, sp
         33c10:	e3a01000 	mov	r1, #0	; 0x0
         33c14:	eb6e3939 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         33c18:	e28d0004 	add	r0, sp, #4	; 0x4
         33c1c:	eb6e393c 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         33c20:	e1a04000 	mov	r4, r0
         33c24:	e5990000 	ldr	r0, [r9]
         33c28:	e5900000 	ldr	r0, [r0]
         33c2c:	e3100003 	tst	r0, #3	; 0x3
         33c30:	01a00140 	moveq	r0, r0, asr #2
         33c34:	0a000000 	beq	33c3c <TApplication::AddDelayedAction(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x14c>
         33c38:	eb6e3937 	bl	1bc211c <$_RINTError(long)>
         33c3c:	e3a01066 	mov	r1, #102	; 0x66
         33c40:	e2811c0e 	add	r1, r1, #3584	; 0xe00
         33c44:	e0010190 	mul	r1, r0, r1
         33c48:	e1a00004 	mov	r0, r4
         33c4c:	eb6ea88f 	bl	1bdde90 <$TimeFromNow>
         33c50:	e28d0004 	add	r0, sp, #4	; 0x4
         33c54:	e3a01000 	mov	r1, #0	; 0x0
         33c58:	eb6e3928 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         33c5c:	e2881003 	add	r1, r8, #3	; 0x3
         33c60:	e5bd0008 	ldr	r0, [sp, #8]!
         33c64:	e5902000 	ldr	r2, [r0]
         33c68:	e5970000 	ldr	r0, [r7]
         33c6c:	e5900000 	ldr	r0, [r0]
         33c70:	eb6e49b8 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         33c74:	e59d0000 	ldr	r0, [sp]
         33c78:	eb6e3d4f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         33c7c:	e28dd004 	add	sp, sp, #4	; 0x4
         33c80:	eb6e7f53 	bl	1bd39d4 <$GetGlobals>
         33c84:	e5900078 	ldr	r0, [r0, #120]
         33c88:	e3a01000 	mov	r1, #0	; 0x0
         33c8c:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         33c90:	ea6acdd9 	b	1ae73fc <TNewtEventHandler::$SetWakeupTime(unsigned long)>
         33c94:	00684b38 	rsbeq	r4, r8, r8, lsr fp
    */
}

/**
 * Symbol: TApplication::RunNextDelayedAction(void)
 * Address: 00033c98
 */
TApplication::RunNextDelayedAction(void) {
    /*
         33c98:	e1a0c00d 	mov	ip, sp
         33c9c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         33ca0:	e24cb004 	sub	fp, ip, #4	; 0x4
         33ca4:	e2800018 	add	r0, r0, #24	; 0x18
         33ca8:	e1a04000 	mov	r4, r0
         33cac:	e5900000 	ldr	r0, [r0]
         33cb0:	e5900000 	ldr	r0, [r0]
         33cb4:	e3a06000 	mov	r6, #0	; 0x0
         33cb8:	e3300002 	teq	r0, #2	; 0x2
         33cbc:	0a000074 	beq	33e94 <TApplication::RunNextDelayedAction(void)+0x1fc>
         33cc0:	eb6e4579 	bl	1bc52ac <$Length(long)>
         33cc4:	e3500000 	cmp	r0, #0	; 0x0
         33cc8:	da000071 	ble	33e94 <TApplication::RunNextDelayedAction(void)+0x1fc>
         33ccc:	e24dd014 	sub	sp, sp, #20	; 0x14
         33cd0:	e1a0000d 	mov	r0, sp
         33cd4:	eb6e7f3f 	bl	1bd39d8 <$GetGlobalTime>
         33cd8:	e28d000c 	add	r0, sp, #12	; 0xc
         33cdc:	e89d5000 	ldmia	sp, {ip, lr}
         33ce0:	e8805000 	stmia	r0, {ip, lr}
         33ce4:	e3a05000 	mov	r5, #0	; 0x0
         33ce8:	e3a00002 	mov	r0, #2	; 0x2
         33cec:	eb6e3916 	bl	1bc214c <$AllocateRefHandle(long)>
         33cf0:	e58d0008 	str	r0, [sp, #8]
         33cf4:	e5940000 	ldr	r0, [r4]
         33cf8:	e5900000 	ldr	r0, [r0]
         33cfc:	eb6e456a 	bl	1bc52ac <$Length(long)>
         33d00:	e3500000 	cmp	r0, #0	; 0x0
         33d04:	da00005f 	ble	33e88 <TApplication::RunNextDelayedAction(void)+0x1f0>
         33d08:	e24dd008 	sub	sp, sp, #8	; 0x8
         33d0c:	e2851003 	add	r1, r5, #3	; 0x3
         33d10:	e5940000 	ldr	r0, [r4]
         33d14:	e5900000 	ldr	r0, [r0]
         33d18:	eb6e414d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         33d1c:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         33d20:	e5810000 	str	r0, [r1]
         33d24:	e24dd004 	sub	sp, sp, #4	; 0x4
         33d28:	e3300002 	teq	r0, #2	; 0x2
         33d2c:	0a000014 	beq	33d84 <TApplication::RunNextDelayedAction(void)+0xec>
         33d30:	e28d1014 	add	r1, sp, #20	; 0x14
         33d34:	e1a0000d 	mov	r0, sp
         33d38:	eb6e34e6 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         33d3c:	e1a0000d 	mov	r0, sp
         33d40:	eb6e38f3 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         33d44:	e1a01000 	mov	r1, r0
         33d48:	e28d0004 	add	r0, sp, #4	; 0x4
         33d4c:	e3a02008 	mov	r2, #8	; 0x8
         33d50:	eb6e033e 	bl	1bb4a50 <$memcpy>
         33d54:	e1a0000d 	mov	r0, sp
         33d58:	e3a01000 	mov	r1, #0	; 0x0
         33d5c:	eb6e38e7 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         33d60:	e59d0014 	ldr	r0, [sp, #20]	; fField20
         33d64:	e5900000 	ldr	r0, [r0]
         33d68:	e3300002 	teq	r0, #2	; 0x2
         33d6c:	0a000004 	beq	33d84 <TApplication::RunNextDelayedAction(void)+0xec>
         33d70:	e28d1004 	add	r1, sp, #4	; 0x4
         33d74:	e28d0018 	add	r0, sp, #24	; 0x18
         33d78:	eb6eb4c2 	bl	1be1088 <$CompCompare>
         33d7c:	e3500000 	cmp	r0, #0	; 0x0
         33d80:	da000039 	ble	33e6c <TApplication::RunNextDelayedAction(void)+0x1d4>
         33d84:	e5940000 	ldr	r0, [r4]
         33d88:	e5900000 	ldr	r0, [r0]
         33d8c:	e1a01005 	mov	r1, r5
         33d90:	eb6e412f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         33d94:	e59d1014 	ldr	r1, [sp, #20]	; fField20
         33d98:	e5810000 	str	r0, [r1]
         33d9c:	e24dd008 	sub	sp, sp, #8	; 0x8
         33da0:	e2851001 	add	r1, r5, #1	; 0x1
         33da4:	e5940000 	ldr	r0, [r4]
         33da8:	e5900000 	ldr	r0, [r0]
         33dac:	eb6e4128 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         33db0:	eb6e38e5 	bl	1bc214c <$AllocateRefHandle(long)>
         33db4:	e2851002 	add	r1, r5, #2	; 0x2
         33db8:	e58d0004 	str	r0, [sp, #4]
         33dbc:	e5940000 	ldr	r0, [r4]
         33dc0:	e5900000 	ldr	r0, [r0]
         33dc4:	eb6e4122 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         33dc8:	eb6e38df 	bl	1bc214c <$AllocateRefHandle(long)>
         33dcc:	e58d0000 	str	r0, [sp]
         33dd0:	e1a00004 	mov	r0, r4
         33dd4:	e1a01005 	mov	r1, r5
         33dd8:	e3a02004 	mov	r2, #4	; 0x4
         33ddc:	eb6f519b 	bl	1c08450 <$ArrayRemoveCount__FRC6RefVarlT2>
         33de0:	e5940000 	ldr	r0, [r4]
         33de4:	e5900000 	ldr	r0, [r0]
         33de8:	eb6e452f 	bl	1bc52ac <$Length(long)>
         33dec:	e3300000 	teq	r0, #0	; 0x0
         33df0:	03a00002 	moveq	r0, #2	; 0x2
         33df4:	05941000 	ldreq	r1, [r4]
         33df8:	05810000 	streq	r0, [r1]
         33dfc:	e59d001c 	ldr	r0, [sp, #28]	; fField28
         33e00:	e5900000 	ldr	r0, [r0]
         33e04:	e3300002 	teq	r0, #2	; 0x2
         33e08:	1a000003 	bne	33e1c <TApplication::RunNextDelayedAction(void)+0x184>
         33e0c:	e1a0100d 	mov	r1, sp
         33e10:	e28d0004 	add	r0, sp, #4	; 0x4
         33e14:	eb6e3ced 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
         33e18:	ea00000a 	b	33e48 <TApplication::RunNextDelayedAction(void)+0x1b0>
         33e1c:	e59d0004 	ldr	r0, [sp, #4]
         33e20:	e5900000 	ldr	r0, [r0]
         33e24:	eb6e451e 	bl	1bc52a4 <$IsSymbol(long)>
         33e28:	e3300000 	teq	r0, #0	; 0x0
         33e2c:	e1a0200d 	mov	r2, sp
         33e30:	e28d1004 	add	r1, sp, #4	; 0x4
         33e34:	e28d001c 	add	r0, sp, #28	; 0x1c
         33e38:	0a000001 	beq	33e44 <TApplication::RunNextDelayedAction(void)+0x1ac>
         33e3c:	eb6e3ce4 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
         33e40:	ea000000 	b	33e48 <TApplication::RunNextDelayedAction(void)+0x1b0>
         33e44:	eb6e3ce7 	bl	1bc31e8 <$DoScript__FRC6RefVarN21>
         33e48:	e3a04001 	mov	r4, #1	; 0x1
         33e4c:	e59d0000 	ldr	r0, [sp]
         33e50:	eb6e3cd9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         33e54:	e59d0004 	ldr	r0, [sp, #4]
         33e58:	eb6e3cd7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         33e5c:	e59d001c 	ldr	r0, [sp, #28]	; fField28
         33e60:	eb6e3cd5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         33e64:	e1a00004 	mov	r0, r4
         33e68:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         33e6c:	e2855004 	add	r5, r5, #4	; 0x4
         33e70:	e28dd00c 	add	sp, sp, #12	; 0xc
         33e74:	e5940000 	ldr	r0, [r4]
         33e78:	e5900000 	ldr	r0, [r0]
         33e7c:	eb6e450a 	bl	1bc52ac <$Length(long)>
         33e80:	e1500005 	cmp	r0, r5
         33e84:	caffff9f 	bgt	33d08 <TApplication::RunNextDelayedAction(void)+0x70>
         33e88:	e59d0008 	ldr	r0, [sp, #8]
         33e8c:	eb6e3cca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         33e90:	e28dd014 	add	sp, sp, #20	; 0x14
         33e94:	e1a00006 	mov	r0, r6
         33e98:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TApplication::UpdateNextIdleTime(TTime const &)
 * Address: 00033e9c
 */
TApplication::UpdateNextIdleTime(TTime const &) {
    /*
         33e9c:	e1a0c00d 	mov	ip, sp
         33ea0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         33ea4:	e24cb004 	sub	fp, ip, #4	; 0x4
         33ea8:	e1a05000 	mov	r5, r0
         33eac:	e1a04001 	mov	r4, r1
         33eb0:	e59f605c 	ldr	r6, [pc, #5c]	; 33f14 <TApplication::UpdateNextIdleTime(TTime const &)+0x78>
         33eb4:	e1a01006 	mov	r1, r6
         33eb8:	e1a00004 	mov	r0, r4
         33ebc:	eb6eb471 	bl	1be1088 <$CompCompare>
         33ec0:	e3300000 	teq	r0, #0	; 0x0
         33ec4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         33ec8:	e2850004 	add	r0, r5, #4	; 0x4
         33ecc:	e1a05000 	mov	r5, r0
         33ed0:	e1a01006 	mov	r1, r6
         33ed4:	eb6eb46b 	bl	1be1088 <$CompCompare>
         33ed8:	e3300000 	teq	r0, #0	; 0x0
         33edc:	0a000009 	beq	33f08 <TApplication::UpdateNextIdleTime(TTime const &)+0x6c>
         33ee0:	e1a01006 	mov	r1, r6
         33ee4:	e1a00004 	mov	r0, r4
         33ee8:	eb6eb466 	bl	1be1088 <$CompCompare>
         33eec:	e3300000 	teq	r0, #0	; 0x0
         33ef0:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         33ef4:	e1a01005 	mov	r1, r5
         33ef8:	e1a00004 	mov	r0, r4
         33efc:	eb6eb461 	bl	1be1088 <$CompCompare>
         33f00:	e3500000 	cmp	r0, #0	; 0x0
         33f04:	a91ba870 	ldmgedb	fp, {r4, r5, r6, fp, sp, pc}
         33f08:	e8945000 	ldmia	r4, {ip, lr}
         33f0c:	e8855000 	stmia	r5, {ip, lr}
         33f10:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         33f14:	0c101690 	ldceq	6, cr1, [r0], -#576
    */
}

/**
 * Symbol: TApplication::NextDelayedActionTime(TTime const &)
 * Address: 00033f18
 */
TApplication::NextDelayedActionTime(TTime const &) {
    /*
         33f18:	e1a0c00d 	mov	ip, sp
         33f1c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         33f20:	e24cb004 	sub	fp, ip, #4	; 0x4
         33f24:	e1a04000 	mov	r4, r0
         33f28:	e1a05002 	mov	r5, r2
         33f2c:	e59f0044 	ldr	r0, [pc, #44]	; 33f78 <TApplication::NextDelayedActionTime(TTime const &)+0x60>
         33f30:	e5900000 	ldr	r0, [r0]
         33f34:	e3300000 	teq	r0, #0	; 0x0
         33f38:	0a000005 	beq	33f54 <TApplication::NextDelayedActionTime(TTime const &)+0x3c>
         33f3c:	e2810018 	add	r0, r1, #24	; 0x18
         33f40:	e1a06000 	mov	r6, r0
         33f44:	e5900000 	ldr	r0, [r0]
         33f48:	e5900000 	ldr	r0, [r0]
         33f4c:	e3300002 	teq	r0, #2	; 0x2
         33f50:	1a000009 	bne	33f7c <TApplication::NextDelayedActionTime(TTime const &)+0x64>
         33f54:	e1b00004 	movs	r0, r4
         33f58:	1a000003 	bne	33f6c <TApplication::NextDelayedActionTime(TTime const &)+0x54>
         33f5c:	e3a00008 	mov	r0, #8	; 0x8
         33f60:	eb6e69f4 	bl	1bce738 <$__nw(unsigned int)>
         33f64:	e3300000 	teq	r0, #0	; 0x0
         33f68:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         33f6c:	e8955000 	ldmia	r5, {ip, lr}
         33f70:	e8805000 	stmia	r0, {ip, lr}
         33f74:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         33f78:	0c105510 	ldceq	5, cr5, [r0], -#64
         33f7c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         33f80:	e28d0004 	add	r0, sp, #4	; 0x4
         33f84:	e8955000 	ldmia	r5, {ip, lr}
         33f88:	e8805000 	stmia	r0, {ip, lr}
         33f8c:	e3a05003 	mov	r5, #3	; 0x3
         33f90:	e5960000 	ldr	r0, [r6]
         33f94:	e5900000 	ldr	r0, [r0]
         33f98:	eb6e44c3 	bl	1bc52ac <$Length(long)>
         33f9c:	e1a07000 	mov	r7, r0
         33fa0:	e3a00002 	mov	r0, #2	; 0x2
         33fa4:	eb6e3868 	bl	1bc214c <$AllocateRefHandle(long)>
         33fa8:	e3570003 	cmp	r7, #3	; 0x3
         33fac:	e58d0000 	str	r0, [sp]
         33fb0:	da000023 	ble	34044 <TApplication::NextDelayedActionTime(TTime const &)+0x12c>
         33fb4:	e59f90b8 	ldr	r9, [pc, #b8]	; 34074 <TApplication::NextDelayedActionTime(TTime const &)+0x15c>
         33fb8:	e5960000 	ldr	r0, [r6]
         33fbc:	e5900000 	ldr	r0, [r0]
         33fc0:	e1a01005 	mov	r1, r5
         33fc4:	eb6e40a2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         33fc8:	e59d1000 	ldr	r1, [sp]
         33fcc:	e5810000 	str	r0, [r1]
         33fd0:	e3300002 	teq	r0, #2	; 0x2
         33fd4:	0a000017 	beq	34038 <TApplication::NextDelayedActionTime(TTime const &)+0x120>
         33fd8:	e24dd004 	sub	sp, sp, #4	; 0x4
         33fdc:	e28d1004 	add	r1, sp, #4	; 0x4
         33fe0:	e1a0000d 	mov	r0, sp
         33fe4:	eb6e343b 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         33fe8:	e1a0000d 	mov	r0, sp
         33fec:	eb6e3848 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         33ff0:	e1a08000 	mov	r8, r0
         33ff4:	e1a0000d 	mov	r0, sp
         33ff8:	e3a01000 	mov	r1, #0	; 0x0
         33ffc:	eb6e383f 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         34000:	e1a01009 	mov	r1, r9
         34004:	e28d0008 	add	r0, sp, #8	; 0x8
         34008:	eb6eb41e 	bl	1be1088 <$CompCompare>
         3400c:	e3300000 	teq	r0, #0	; 0x0
         34010:	0a000004 	beq	34028 <TApplication::NextDelayedActionTime(TTime const &)+0x110>
         34014:	e28d1008 	add	r1, sp, #8	; 0x8
         34018:	e1a00008 	mov	r0, r8
         3401c:	eb6eb419 	bl	1be1088 <$CompCompare>
         34020:	e3500000 	cmp	r0, #0	; 0x0
         34024:	aa000002 	bge	34034 <TApplication::NextDelayedActionTime(TTime const &)+0x11c>
         34028:	e28d0008 	add	r0, sp, #8	; 0x8
         3402c:	e8981008 	ldmia	r8, {r3, ip}
         34030:	e8801008 	stmia	r0, {r3, ip}
         34034:	e28dd004 	add	sp, sp, #4	; 0x4
         34038:	e2855004 	add	r5, r5, #4	; 0x4
         3403c:	e1550007 	cmp	r5, r7
         34040:	baffffdc 	blt	33fb8 <TApplication::NextDelayedActionTime(TTime const &)+0xa0>
         34044:	e1b00004 	movs	r0, r4
         34048:	1a000003 	bne	3405c <TApplication::NextDelayedActionTime(TTime const &)+0x144>
         3404c:	e3a00008 	mov	r0, #8	; 0x8
         34050:	eb6e69b8 	bl	1bce738 <$__nw(unsigned int)>
         34054:	e3300000 	teq	r0, #0	; 0x0
         34058:	0a000002 	beq	34068 <TApplication::NextDelayedActionTime(TTime const &)+0x150>
         3405c:	e28d1004 	add	r1, sp, #4	; 0x4
         34060:	e8911008 	ldmia	r1, {r3, ip}
         34064:	e8801008 	stmia	r0, {r3, ip}
         34068:	e59d0000 	ldr	r0, [sp]
         3406c:	eb6e3c52 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34070:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         34074:	0c101690 	ldceq	6, cr1, [r0], -#576
    */
}

/**
 * Symbol: TApplication::DispatchCommand(RefVar const &)
 * Address: 00034078
 */
TApplication::DispatchCommand(RefVar const &) {
    /*
         34078:	e1a0c00d 	mov	ip, sp
         3407c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         34080:	e24cb004 	sub	fp, ip, #4	; 0x4
         34084:	e1a04001 	mov	r4, r1
         34088:	e1a00001 	mov	r0, r1
         3408c:	eb69c8ac 	bl	1aa6344 <$CommandReceiver(RefVar const &)>
         34090:	e3300000 	teq	r0, #0	; 0x0
         34094:	0a000004 	beq	340ac <TApplication::DispatchCommand(RefVar const &)+0x34>
         34098:	e1a01004 	mov	r1, r4
         3409c:	e5902000 	ldr	r2, [r0]
         340a0:	e1a0e00f 	mov	lr, pc
         340a4:	e282f010 	add	pc, r2, #16	; 0x10
         340a8:	ea000003 	b	340bc <TApplication::DispatchCommand(RefVar const &)+0x44>
         340ac:	e3a01003 	mov	r1, #3	; 0x3
         340b0:	e3a000bd 	mov	r0, #189	; 0xbd
         340b4:	e2400a02 	sub	r0, r0, #8192	; 0x2000
         340b8:	eb697a2c 	bl	1a92970 <$ErrorNotify__FlT1>
         340bc:	e1a00004 	mov	r0, r4
         340c0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         340c4:	ea69c8a1 	b	1aa6350 <$CommandResult(RefVar const &)>
    */
}

/**
 * Symbol: TApplication::Undo(void)
 * Address: 000340c8
 */
TApplication::Undo(void) {
    /*
         340c8:	e1a0c00d 	mov	ip, sp
         340cc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         340d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         340d4:	e1a04000 	mov	r4, r0
         340d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         340dc:	e3a08000 	mov	r8, #0	; 0x0
         340e0:	e280000c 	add	r0, r0, #12	; 0xc
         340e4:	e1a06000 	mov	r6, r0
         340e8:	e5900000 	ldr	r0, [r0]
         340ec:	e5900000 	ldr	r0, [r0]
         340f0:	eb6e3815 	bl	1bc214c <$AllocateRefHandle(long)>
         340f4:	e58d0000 	str	r0, [sp]
         340f8:	e2840010 	add	r0, r4, #16	; 0x10
         340fc:	e1a07000 	mov	r7, r0
         34100:	e5900000 	ldr	r0, [r0]
         34104:	e5900000 	ldr	r0, [r0]
         34108:	eb6e380f 	bl	1bc214c <$AllocateRefHandle(long)>
         3410c:	e1a05000 	mov	r5, r0
         34110:	e59f10d8 	ldr	r1, [pc, #d8]	; 341f0 <TApplication::Undo(void)+0x128>
         34114:	e59f00d8 	ldr	r0, [pc, #d8]	; 341f4 <TApplication::Undo(void)+0x12c>
         34118:	eb6f2fc0 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         3411c:	e3300002 	teq	r0, #2	; 0x2
         34120:	13a09000 	movne	r9, #0	; 0x0
         34124:	03a09001 	moveq	r9, #1	; 0x1
         34128:	e3390000 	teq	r9, #0	; 0x0
         3412c:	0a000003 	beq	34140 <TApplication::Undo(void)+0x78>
         34130:	e3a00000 	mov	r0, #0	; 0x0
         34134:	eb699f18 	bl	1a9bd9c <$MakeArray(long)>
         34138:	e5971000 	ldr	r1, [r7]
         3413c:	e5810000 	str	r0, [r1]
         34140:	e1a07006 	mov	r7, r6
         34144:	e3a00000 	mov	r0, #0	; 0x0
         34148:	eb699f13 	bl	1a9bd9c <$MakeArray(long)>
         3414c:	e5971000 	ldr	r1, [r7]
         34150:	e5810000 	str	r0, [r1]
         34154:	e24dd004 	sub	sp, sp, #4	; 0x4
         34158:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         3415c:	e40d006c 	str	r0, [sp], -#108
         34160:	e3a00000 	mov	r0, #0	; 0x0
         34164:	e3a07000 	mov	r7, #0	; 0x0
         34168:	e58d0000 	str	r0, [sp]
         3416c:	e28d0008 	add	r0, sp, #8	; 0x8
         34170:	eb6df9ff 	bl	1bb2974 <$setjmp>
         34174:	e3300000 	teq	r0, #0	; 0x0
         34178:	1a00001e 	bne	341f8 <TApplication::Undo(void)+0x130>
         3417c:	e1a0000d 	mov	r0, sp
         34180:	eb6eafbd 	bl	1be007c <$AddExceptionHandler>
         34184:	e28d0070 	add	r0, sp, #112	; 0x70
         34188:	eb03d312 	bl	128dd8 <ArrayIsEmpty(RefVar const &)>
         3418c:	e3300000 	teq	r0, #0	; 0x0
         34190:	1a000013 	bne	341e4 <TApplication::Undo(void)+0x11c>
         34194:	e24dd004 	sub	sp, sp, #4	; 0x4
         34198:	e28d0074 	add	r0, sp, #116	; 0x74
         3419c:	eb6a8235 	bl	1ad4a78 <$ArrayPop(RefVar const &)>
         341a0:	eb6e37e9 	bl	1bc214c <$AllocateRefHandle(long)>
         341a4:	e58d0000 	str	r0, [sp]
         341a8:	e1a0100d 	mov	r1, sp
         341ac:	e1a00004 	mov	r0, r4
         341b0:	eb6971a0 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         341b4:	e3300000 	teq	r0, #0	; 0x0
         341b8:	13a0a000 	movne	sl, #0	; 0x0
         341bc:	03a0a001 	moveq	sl, #1	; 0x1
         341c0:	e59d0000 	ldr	r0, [sp]
         341c4:	eb6e3bfc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         341c8:	e33a0000 	teq	sl, #0	; 0x0
         341cc:	13e08000 	mvnne	r8, #0	; 0x0
         341d0:	e28dd004 	add	sp, sp, #4	; 0x4
         341d4:	e28d0070 	add	r0, sp, #112	; 0x70
         341d8:	eb03d2fe 	bl	128dd8 <ArrayIsEmpty(RefVar const &)>
         341dc:	e3300000 	teq	r0, #0	; 0x0
         341e0:	0affffeb 	beq	34194 <TApplication::Undo(void)+0xcc>
         341e4:	e1a0000d 	mov	r0, sp
         341e8:	eb6eb3b2 	bl	1be10b8 <$ExitHandler>
         341ec:	ea000002 	b	341fc <TApplication::Undo(void)+0x134>
         341f0:	00684ce8 	rsbeq	r4, r8, r8, ror #25
         341f4:	00683000 	rsbeq	r3, r8, r0
         341f8:	e3a07001 	mov	r7, #1	; 0x1
         341fc:	e28d0070 	add	r0, sp, #112	; 0x70
         34200:	e3a01000 	mov	r1, #0	; 0x0
         34204:	eb6e4858 	bl	1bc636c <$SetLength(RefVar const &, long)>
         34208:	e3370000 	teq	r7, #0	; 0x0
         3420c:	11a0000d 	movne	r0, sp
         34210:	1b6eb7cf 	blne	1be2154 <$NextHandler>
         34214:	e28dd06c 	add	sp, sp, #108	; 0x6c
         34218:	e3390000 	teq	r9, #0	; 0x0
         3421c:	15950000 	ldrne	r0, [r5]
         34220:	15961000 	ldrne	r1, [r6]
         34224:	15810000 	strne	r0, [r1]
         34228:	e59d0000 	ldr	r0, [sp]
         3422c:	e3300000 	teq	r0, #0	; 0x0
         34230:	13a00000 	movne	r0, #0	; 0x0
         34234:	03a00001 	moveq	r0, #1	; 0x1
         34238:	e5c40015 	strb	r0, [r4, #21]	; fField21
         3423c:	e3380000 	teq	r8, #0	; 0x0
         34240:	03a01003 	moveq	r1, #3	; 0x3
         34244:	03a000bd 	moveq	r0, #189	; 0xbd
         34248:	02400a02 	subeq	r0, r0, #8192	; 0x2000
         3424c:	0b6979c7 	bleq	1a92970 <$ErrorNotify__FlT1>
         34250:	e28dd004 	add	sp, sp, #4	; 0x4
         34254:	e1a00005 	mov	r0, r5
         34258:	eb6e3bd7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3425c:	e59d0000 	ldr	r0, [sp]
         34260:	eb6e3bd5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34264:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TApplication::ClearUndo(void)
 * Address: 00034268
 */
TApplication::ClearUndo(void) {
    /*
         34268:	e1a0c00d 	mov	ip, sp
         3426c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         34270:	e24cb004 	sub	fp, ip, #4	; 0x4
         34274:	e1a04000 	mov	r4, r0
         34278:	e280500c 	add	r5, r0, #12	; 0xc
         3427c:	e3a00000 	mov	r0, #0	; 0x0
         34280:	eb699ec5 	bl	1a9bd9c <$MakeArray(long)>
         34284:	e5951000 	ldr	r1, [r5]
         34288:	e2845010 	add	r5, r4, #16	; 0x10
         3428c:	e5810000 	str	r0, [r1]
         34290:	e3a00000 	mov	r0, #0	; 0x0
         34294:	eb699ec0 	bl	1a9bd9c <$MakeArray(long)>
         34298:	e5951000 	ldr	r1, [r5]
         3429c:	e5810000 	str	r0, [r1]
         342a0:	e3a00000 	mov	r0, #0	; 0x0
         342a4:	e5c40015 	strb	r0, [r4, #21]	; fField21
         342a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TApplication::GetUndoState(void)
 * Address: 000342ac
 */
TApplication::GetUndoState(void) {
    /*
         342ac:	e1a0c00d 	mov	ip, sp
         342b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         342b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         342b8:	e1a04000 	mov	r4, r0
         342bc:	e59f103c 	ldr	r1, [pc, #3c]	; 34300 <TApplication::GetUndoState(void)+0x54>
         342c0:	e1a05001 	mov	r5, r1
         342c4:	e59f0038 	ldr	r0, [pc, #38]	; 34304 <TApplication::GetUndoState(void)+0x58>
         342c8:	eb6f2f54 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         342cc:	e3300002 	teq	r0, #2	; 0x2
         342d0:	13a00000 	movne	r0, #0	; 0x0
         342d4:	03a00001 	moveq	r0, #1	; 0x1
         342d8:	e3300000 	teq	r0, #0	; 0x0
         342dc:	159f0024 	ldrne	r0, [pc, #24]	; 34308 <TApplication::GetUndoState(void)+0x5c>	; fField24
         342e0:	15900000 	ldrne	r0, [r0]
         342e4:	1a000003 	bne	342f8 <TApplication::GetUndoState(void)+0x4c>
         342e8:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         342ec:	e3300000 	teq	r0, #0	; 0x0
         342f0:	059f5010 	ldreq	r5, [pc, #10]	; 34308 <TApplication::GetUndoState(void)+0x5c>
         342f4:	e5950000 	ldr	r0, [r5]
         342f8:	e5900000 	ldr	r0, [r0]
         342fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         34300:	00684ce8 	rsbeq	r4, r8, r8, ror #25
         34304:	00683000 	rsbeq	r3, r8, r0
         34308:	00684cd8 	ldreqd	r4, [r8], -#200
    */
}

/**
 * Symbol: TApplication::GetUndoStack(long)
 * Address: 0003430c
 */
TApplication::GetUndoStack(long) {
    /*
         3430c:	e3310000 	teq	r1, #0	; 0x0
         34310:	0280000c 	addeq	r0, r0, #12	; 0xc
         34314:	0a000003 	beq	34328 <TApplication::GetUndoStack(long)+0x1c>
         34318:	e3310001 	teq	r1, #1	; 0x1
         3431c:	13a00002 	movne	r0, #2	; 0x2
         34320:	11a0f00e 	movne	pc, lr
         34324:	e2800010 	add	r0, r0, #16	; 0x10
         34328:	e5900000 	ldr	r0, [r0]
         3432c:	e5900000 	ldr	r0, [r0]
         34330:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TApplication::Constructor(void)
 * Address: 00034334
 */
TApplication::Constructor(void) {
    /*
         34334:	e1a0c00d 	mov	ip, sp
         34338:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3433c:	e24cb004 	sub	fp, ip, #4	; 0x4
         34340:	e1a04000 	mov	r4, r0
         34344:	e24dd008 	sub	sp, sp, #8	; 0x8
         34348:	e5901000 	ldr	r1, [r0]
         3434c:	e1a0e00f 	mov	lr, pc
         34350:	e281f024 	add	pc, r1, #36	; 0x24
         34354:	e284500c 	add	r5, r4, #12	; 0xc
         34358:	e3a00000 	mov	r0, #0	; 0x0
         3435c:	eb699e8e 	bl	1a9bd9c <$MakeArray(long)>
         34360:	e5951000 	ldr	r1, [r5]
         34364:	e2845010 	add	r5, r4, #16	; 0x10
         34368:	e5810000 	str	r0, [r1]
         3436c:	e3a00000 	mov	r0, #0	; 0x0
         34370:	eb699e89 	bl	1a9bd9c <$MakeArray(long)>
         34374:	e5951000 	ldr	r1, [r5]
         34378:	e5810000 	str	r0, [r1]
         3437c:	e3a00000 	mov	r0, #0	; 0x0
         34380:	e5c40014 	strb	r0, [r4, #20]	; fField20
         34384:	e5c40015 	strb	r0, [r4, #21]	; fField21
         34388:	e3a01001 	mov	r1, #1	; 0x1
         3438c:	e88d0003 	stmia	sp, {r0, r1}
         34390:	e2841004 	add	r1, r4, #4	; 0x4
         34394:	e8bd5000 	ldmia	sp!, {ip, lr}
         34398:	e8815000 	stmia	r1, {ip, lr}
         3439c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TApplication::PostUndoCommand(RefVar const &)
 * Address: 000343a0
 */
TApplication::PostUndoCommand(RefVar const &) {
    /*
         343a0:	e1a0c00d 	mov	ip, sp
         343a4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         343a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         343ac:	e1a04000 	mov	r4, r0
         343b0:	e1a05001 	mov	r5, r1
         343b4:	e5d00014 	ldrb	r0, [r0, #20]	; fField20
         343b8:	e284600c 	add	r6, r4, #12	; 0xc
         343bc:	e3300000 	teq	r0, #0	; 0x0
         343c0:	0a000013 	beq	34414 <TApplication::PostUndoCommand(RefVar const &)+0x74>
         343c4:	e3a07000 	mov	r7, #0	; 0x0
         343c8:	e5c47014 	strb	r7, [r4, #20]	; fField20
         343cc:	e59f1058 	ldr	r1, [pc, #58]	; 3442c <TApplication::PostUndoCommand(RefVar const &)+0x8c>
         343d0:	e59f0058 	ldr	r0, [pc, #58]	; 34430 <TApplication::PostUndoCommand(RefVar const &)+0x90>
         343d4:	eb6f2f11 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
         343d8:	e3300002 	teq	r0, #2	; 0x2
         343dc:	13a00000 	movne	r0, #0	; 0x0
         343e0:	03a00001 	moveq	r0, #1	; 0x1
         343e4:	e3300000 	teq	r0, #0	; 0x0
         343e8:	0a000003 	beq	343fc <TApplication::PostUndoCommand(RefVar const &)+0x5c>
         343ec:	e5961000 	ldr	r1, [r6]
         343f0:	e5911000 	ldr	r1, [r1]
         343f4:	e5940010 	ldr	r0, [r4, #16]	; fField16
         343f8:	e5801000 	str	r1, [r0]
         343fc:	e1a08006 	mov	r8, r6
         34400:	e3a00000 	mov	r0, #0	; 0x0
         34404:	eb699e64 	bl	1a9bd9c <$MakeArray(long)>
         34408:	e5981000 	ldr	r1, [r8]
         3440c:	e5810000 	str	r0, [r1]
         34410:	e5c47015 	strb	r7, [r4, #21]	; fField21
         34414:	e1a00005 	mov	r0, r5
         34418:	eb69c7d4 	bl	1aa6370 <$MarkUndoCommand(RefVar const &)>
         3441c:	e1a00006 	mov	r0, r6
         34420:	e1a01005 	mov	r1, r5
         34424:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         34428:	ea6e373e 	b	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         3442c:	00684ce8 	rsbeq	r4, r8, r8, ror #25
         34430:	00683000 	rsbeq	r3, r8, r0
    */
}

/**
 * Symbol: TApplication::PostUndoCommand(unsigned long, TResponder *, long)
 * Address: 00034434
 */
TApplication::PostUndoCommand(unsigned long, TResponder *, long) {
    /*
         34434:	e1a0c00d 	mov	ip, sp
         34438:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         3443c:	e24cb004 	sub	fp, ip, #4	; 0x4
         34440:	e24dd004 	sub	sp, sp, #4	; 0x4
         34444:	e3320000 	teq	r2, #0	; 0x0
         34448:	01a02000 	moveq	r2, r0
         3444c:	e1a00001 	mov	r0, r1
         34450:	e1a01002 	mov	r1, r2
         34454:	e1a02003 	mov	r2, r3
         34458:	eb69c7b8 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         3445c:	eb6e373a 	bl	1bc214c <$AllocateRefHandle(long)>
         34460:	e58d0000 	str	r0, [sp]
         34464:	e1a0100d 	mov	r1, sp
         34468:	e59f0010 	ldr	r0, [pc, #10]	; 34480 <TApplication::PostUndoCommand(unsigned long, TResponder *, long)+0x4c>
         3446c:	e5900000 	ldr	r0, [r0]
         34470:	eb69a6a1 	bl	1a9defc <TApplication::$PostUndoCommand(RefVar const &)>
         34474:	e59d0000 	ldr	r0, [sp]
         34478:	eb6e3b4f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3447c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         34480:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TApplication::__dt(void)
 * Address: 0003448c
 */
TApplication::~TApplication(void) {
    /*
         3448c:	e1a0c00d 	mov	ip, sp
         34490:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         34494:	e24cb004 	sub	fp, ip, #4	; 0x4
         34498:	e1a04000 	mov	r4, r0
         3449c:	e1a05001 	mov	r5, r1
         344a0:	e59f0054 	ldr	r0, [pc, #54]	; 344fc <TApplication::__dt(void)+0x70>
         344a4:	e5840000 	str	r0, [r4]
         344a8:	e2846020 	add	r6, r4, #32	; 0x20
         344ac:	e5960018 	ldr	r0, [r6, #24]	; fField24
         344b0:	eb6e3b41 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         344b4:	e5960014 	ldr	r0, [r6, #20]	; fField20
         344b8:	eb6e3b3f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         344bc:	e5960010 	ldr	r0, [r6, #16]	; fField16
         344c0:	eb6e3b3d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         344c4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         344c8:	eb6e3b3b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         344cc:	e5940010 	ldr	r0, [r4, #16]	; fField16
         344d0:	eb6e3b39 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         344d4:	e594000c 	ldr	r0, [r4, #12]	; fField12
         344d8:	eb6e3b37 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         344dc:	e1a00004 	mov	r0, r4
         344e0:	e3a01000 	mov	r1, #0	; 0x0
         344e4:	eb6953ea 	bl	1a89494 <TxObject::$__dt(void)>
         344e8:	e3150001 	tst	r5, #1	; 0x1
         344ec:	11a00004 	movne	r0, r4
         344f0:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         344f4:	1a694fd0 	bne	1a8843c <$__dl__8TxObjectSFPv>
         344f8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         344fc:	0001b994 	muleq	r1, r4, r9
    */
}

/**
 * Symbol: TApplication::InitToolbox(void)
 * Address: 00034500
 */
TApplication::InitToolbox(void) {
    /*
         34500:	ea6995f7 	b	1a99ce4 <$InitSound(void)>
    */
}

/**
 * Symbol: TApplication::Run(void)
 * Address: 00034504
 */
TApplication::Run(void) {
    /*
         34504:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TApplication::Quit(void)
 * Address: 00034508
 */
TApplication::Quit(void) {
    /*
         34508:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TApplication::DoCommand(RefVar const &)
 * Address: 00034694
 */
TApplication::DoCommand(RefVar const &) {
    /*
         34694:	e1a0c00d 	mov	ip, sp
         34698:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         3469c:	e24cb004 	sub	fp, ip, #4	; 0x4
         346a0:	e1a05000 	mov	r5, r0
         346a4:	e1a04001 	mov	r4, r1
         346a8:	e3a06000 	mov	r6, #0	; 0x0
         346ac:	e1a00001 	mov	r0, r1
         346b0:	eb69c724 	bl	1aa6348 <$CommandID(RefVar const &)>
         346b4:	e3a07001 	mov	r7, #1	; 0x1
         346b8:	e3300070 	teq	r0, #112	; 0x70
         346bc:	0a000056 	beq	3481c <TApplication::DoCommand(RefVar const &)+0x188>
         346c0:	e3300071 	teq	r0, #113	; 0x71
         346c4:	0a000004 	beq	346dc <TApplication::DoCommand(RefVar const &)+0x48>
         346c8:	e3300072 	teq	r0, #114	; 0x72
         346cc:	1a000056 	bne	3482c <TApplication::DoCommand(RefVar const &)+0x198>
         346d0:	e1a00005 	mov	r0, r5
         346d4:	eb69c2eb 	bl	1aa5288 <TApplication::$Undo(void)>
         346d8:	ea000052 	b	34828 <TApplication::DoCommand(RefVar const &)+0x194>
         346dc:	e24dd010 	sub	sp, sp, #16	; 0x10
         346e0:	e1a00004 	mov	r0, r4
         346e4:	eb69c71d 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
         346e8:	eb6e3697 	bl	1bc214c <$AllocateRefHandle(long)>
         346ec:	e3a01002 	mov	r1, #2	; 0x2
         346f0:	e58d000c 	str	r0, [sp, #12]	; fField12
         346f4:	e5900000 	ldr	r0, [r0]
         346f8:	eb6e3ed5 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         346fc:	eb6e3692 	bl	1bc214c <$AllocateRefHandle(long)>
         34700:	e3a01000 	mov	r1, #0	; 0x0
         34704:	e58d0008 	str	r0, [sp, #8]
         34708:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         3470c:	e5900000 	ldr	r0, [r0]
         34710:	eb6e3ecf 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         34714:	eb6e368c 	bl	1bc214c <$AllocateRefHandle(long)>
         34718:	e1a01007 	mov	r1, r7
         3471c:	e58d0004 	str	r0, [sp, #4]
         34720:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         34724:	e5900000 	ldr	r0, [r0]
         34728:	eb6e3ec9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         3472c:	eb6e3686 	bl	1bc214c <$AllocateRefHandle(long)>
         34730:	e58d0000 	str	r0, [sp]
         34734:	e1a00004 	mov	r0, r4
         34738:	e3a01000 	mov	r1, #0	; 0x0
         3473c:	eb69c704 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
         34740:	e28d000c 	add	r0, sp, #12	; 0xc
         34744:	eb6e3687 	bl	1bc2168 <$ClassOf(RefVar const &)>
         34748:	eb6e367f 	bl	1bc214c <$AllocateRefHandle(long)>
         3474c:	e1a05000 	mov	r5, r0
         34750:	e59f0044 	ldr	r0, [pc, #44]	; 3479c <TApplication::DoCommand(RefVar const &)+0x108>
         34754:	e5900000 	ldr	r0, [r0]
         34758:	e5901000 	ldr	r1, [r0]
         3475c:	e5950000 	ldr	r0, [r5]
         34760:	eb6e3eb2 	bl	1bc4230 <$EQRef__FlT1>
         34764:	e1b06000 	movs	r6, r0
         34768:	13a06001 	movne	r6, #1	; 0x1
         3476c:	e1a00005 	mov	r0, r5
         34770:	eb6e3a91 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34774:	e3360000 	teq	r6, #0	; 0x0
         34778:	0a00000d 	beq	347b4 <TApplication::DoCommand(RefVar const &)+0x120>
         3477c:	e28d0004 	add	r0, sp, #4	; 0x4
         34780:	eb6e42c1 	bl	1bc528c <$IsFunction(RefVar const &)>
         34784:	e3300000 	teq	r0, #0	; 0x0
         34788:	0a000004 	beq	347a0 <TApplication::DoCommand(RefVar const &)+0x10c>
         3478c:	e1a0100d 	mov	r1, sp
         34790:	e28d0004 	add	r0, sp, #4	; 0x4
         34794:	eb6e3a8d 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
         34798:	ea000015 	b	347f4 <TApplication::DoCommand(RefVar const &)+0x160>
         3479c:	00684cd8 	ldreqd	r4, [r8], -#200
         347a0:	e1a0200d 	mov	r2, sp
         347a4:	e28d1004 	add	r1, sp, #4	; 0x4
         347a8:	e28d0008 	add	r0, sp, #8	; 0x8
         347ac:	eb6e3a88 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
         347b0:	ea00000f 	b	347f4 <TApplication::DoCommand(RefVar const &)+0x160>
         347b4:	e28d0008 	add	r0, sp, #8	; 0x8
         347b8:	eb6e5767 	bl	1bca55c <$GetView(RefVar const &)>
         347bc:	e3300000 	teq	r0, #0	; 0x0
         347c0:	0a000007 	beq	347e4 <TApplication::DoCommand(RefVar const &)+0x150>
         347c4:	e3a03000 	mov	r3, #0	; 0x0
         347c8:	e92d0008 	stmdb	sp!, {r3}
         347cc:	e28d2004 	add	r2, sp, #4	; 0x4
         347d0:	e28d1008 	add	r1, sp, #8	; 0x8
         347d4:	e3a03001 	mov	r3, #1	; 0x1
         347d8:	eb6e5b80 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         347dc:	e28dd004 	add	sp, sp, #4	; 0x4
         347e0:	ea000003 	b	347f4 <TApplication::DoCommand(RefVar const &)+0x160>
         347e4:	e1a00004 	mov	r0, r4
         347e8:	e3a010bd 	mov	r1, #189	; 0xbd
         347ec:	e2411a02 	sub	r1, r1, #8192	; 0x2000
         347f0:	eb69c6d7 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
         347f4:	e59d0000 	ldr	r0, [sp]
         347f8:	eb6e3a6f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         347fc:	e59d0004 	ldr	r0, [sp, #4]
         34800:	eb6e3a6d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34804:	e59d0008 	ldr	r0, [sp, #8]
         34808:	eb6e3a6b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3480c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         34810:	eb6e3a69 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34814:	e28dd010 	add	sp, sp, #16	; 0x10
         34818:	ea000002 	b	34828 <TApplication::DoCommand(RefVar const &)+0x194>
         3481c:	e595001c 	ldr	r0, [r5, #28]	; fField28
         34820:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         34824:	e5a5001c 	str	r0, [r5, #28]!	; fField28
         34828:	e3a06001 	mov	r6, #1	; 0x1
         3482c:	e1a00006 	mov	r0, r6
         34830:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

