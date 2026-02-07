#include "include/TInterpreter.h"

/**
 * Symbol: TInterpreter::StackTrace(void)
 * Address: 002d3cc4
 */
TInterpreter::StackTrace(void) {
    /*
        2d3cc4:	e1a01000 	mov	r1, r0
        2d3cc8:	e59f0004 	ldr	r0, [pc, #4]	; 2d3cd4 <TInterpreter::StackTrace(void)+0x10>	; fField4
        2d3ccc:	e5900000 	ldr	r0, [r0]
        2d3cd0:	ea02d884 	b	389ee8 <POutTranslator::StackTrace(void *)>
        2d3cd4:	0c101820 	ldceq	8, cr1, [r0], -#128
    */
}

/**
 * Symbol: TInterpreter::GetLocalFromStack(RefVar const &, RefVar const &)
 * Address: 002d3cd8
 */
TInterpreter::GetLocalFromStack(RefVar const &, RefVar const &) {
    /*
        2d3cd8:	e1a0c00d 	mov	ip, sp
        2d3cdc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d3ce0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d3ce4:	e1a04001 	mov	r4, r1
        2d3ce8:	e1a05002 	mov	r5, r2
        2d3cec:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d3cf0:	e1a01000 	mov	r1, r0
        2d3cf4:	e1a0000d 	mov	r0, sp
        2d3cf8:	eb5e17e8 	bl	1a59ca0 <TNSDebugAPI::$__ct(TInterpreter *)>
        2d3cfc:	e5950000 	ldr	r0, [r5]
        2d3d00:	e5900000 	ldr	r0, [r0]
        2d3d04:	e2001003 	and	r1, r0, #3	; 0x3
        2d3d08:	e3510000 	cmp	r1, #0	; 0x0
        2d3d0c:	1a00000e 	bne	2d3d4c <TInterpreter::GetLocalFromStack(RefVar const &, RefVar const &)+0x74>
        2d3d10:	01a00140 	moveq	r0, r0, asr #2
        2d3d14:	0a000000 	beq	2d3d1c <TInterpreter::GetLocalFromStack(RefVar const &, RefVar const &)+0x44>
        2d3d18:	eb63b8ff 	bl	1bc211c <$_RINTError(long)>
        2d3d1c:	e1a05000 	mov	r5, r0
        2d3d20:	e5940000 	ldr	r0, [r4]
        2d3d24:	e5900000 	ldr	r0, [r0]
        2d3d28:	e3100003 	tst	r0, #3	; 0x3
        2d3d2c:	01a00140 	moveq	r0, r0, asr #2
        2d3d30:	0a000000 	beq	2d3d38 <TInterpreter::GetLocalFromStack(RefVar const &, RefVar const &)+0x60>
        2d3d34:	eb63b8f8 	bl	1bc211c <$_RINTError(long)>
        2d3d38:	e1a01000 	mov	r1, r0
        2d3d3c:	e1a0000d 	mov	r0, sp
        2d3d40:	e1a02005 	mov	r2, r5
        2d3d44:	eb64b900 	bl	1c0214c <TNSDebugAPI::$GetVar(long, long)>
        2d3d48:	ea000009 	b	2d3d74 <TInterpreter::GetLocalFromStack(RefVar const &, RefVar const &)+0x9c>
        2d3d4c:	e5940000 	ldr	r0, [r4]
        2d3d50:	e5900000 	ldr	r0, [r0]
        2d3d54:	e3100003 	tst	r0, #3	; 0x3
        2d3d58:	01a00140 	moveq	r0, r0, asr #2
        2d3d5c:	0a000000 	beq	2d3d64 <TInterpreter::GetLocalFromStack(RefVar const &, RefVar const &)+0x8c>
        2d3d60:	eb63b8ed 	bl	1bc211c <$_RINTError(long)>
        2d3d64:	e1a01000 	mov	r1, r0
        2d3d68:	e1a02005 	mov	r2, r5
        2d3d6c:	e1a0000d 	mov	r0, sp
        2d3d70:	eb64b8f7 	bl	1c02154 <TNSDebugAPI::$FindVar(long, RefVar const &)>
        2d3d74:	e1a04000 	mov	r4, r0
        2d3d78:	e1a0000d 	mov	r0, sp
        2d3d7c:	e3a01000 	mov	r1, #0	; 0x0
        2d3d80:	eb5e17ce 	bl	1a59cc0 <TNSDebugAPI::$__dt(void)>
        2d3d84:	e1a00004 	mov	r0, r4
        2d3d88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::SetLocalOnStack(RefVar const &, RefVar const &, RefVar const &)
 * Address: 002d3d8c
 */
TInterpreter::SetLocalOnStack(RefVar const &, RefVar const &, RefVar const &) {
    /*
        2d3d8c:	e1a0c00d 	mov	ip, sp
        2d3d90:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d3d94:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d3d98:	e1a05001 	mov	r5, r1
        2d3d9c:	e1a06002 	mov	r6, r2
        2d3da0:	e1a04003 	mov	r4, r3
        2d3da4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d3da8:	e1a01000 	mov	r1, r0
        2d3dac:	e1a0000d 	mov	r0, sp
        2d3db0:	eb5e17ba 	bl	1a59ca0 <TNSDebugAPI::$__ct(TInterpreter *)>
        2d3db4:	e5960000 	ldr	r0, [r6]
        2d3db8:	e5900000 	ldr	r0, [r0]
        2d3dbc:	e2001003 	and	r1, r0, #3	; 0x3
        2d3dc0:	e3510000 	cmp	r1, #0	; 0x0
        2d3dc4:	1a00000f 	bne	2d3e08 <TInterpreter::SetLocalOnStack(RefVar const &, RefVar const &, RefVar const &)+0x7c>
        2d3dc8:	01a00140 	moveq	r0, r0, asr #2
        2d3dcc:	0a000000 	beq	2d3dd4 <TInterpreter::SetLocalOnStack(RefVar const &, RefVar const &, RefVar const &)+0x48>
        2d3dd0:	eb63b8d1 	bl	1bc211c <$_RINTError(long)>
        2d3dd4:	e1a06000 	mov	r6, r0
        2d3dd8:	e5950000 	ldr	r0, [r5]
        2d3ddc:	e5900000 	ldr	r0, [r0]
        2d3de0:	e3100003 	tst	r0, #3	; 0x3
        2d3de4:	01a00140 	moveq	r0, r0, asr #2
        2d3de8:	0a000000 	beq	2d3df0 <TInterpreter::SetLocalOnStack(RefVar const &, RefVar const &, RefVar const &)+0x64>
        2d3dec:	eb63b8ca 	bl	1bc211c <$_RINTError(long)>
        2d3df0:	e1a01000 	mov	r1, r0
        2d3df4:	e1a03004 	mov	r3, r4
        2d3df8:	e1a0000d 	mov	r0, sp
        2d3dfc:	e1a02006 	mov	r2, r6
        2d3e00:	eb64b8d2 	bl	1c02150 <TNSDebugAPI::$SetVar(long, long, RefVar const &)>
        2d3e04:	ea00000a 	b	2d3e34 <TInterpreter::SetLocalOnStack(RefVar const &, RefVar const &, RefVar const &)+0xa8>
        2d3e08:	e5950000 	ldr	r0, [r5]
        2d3e0c:	e5900000 	ldr	r0, [r0]
        2d3e10:	e3100003 	tst	r0, #3	; 0x3
        2d3e14:	01a00140 	moveq	r0, r0, asr #2
        2d3e18:	0a000000 	beq	2d3e20 <TInterpreter::SetLocalOnStack(RefVar const &, RefVar const &, RefVar const &)+0x94>
        2d3e1c:	eb63b8be 	bl	1bc211c <$_RINTError(long)>
        2d3e20:	e1a01000 	mov	r1, r0
        2d3e24:	e1a03004 	mov	r3, r4
        2d3e28:	e1a02006 	mov	r2, r6
        2d3e2c:	e1a0000d 	mov	r0, sp
        2d3e30:	eb64b8c8 	bl	1c02158 <TNSDebugAPI::$SetFindVar(long, RefVar const &, RefVar const &)>
        2d3e34:	e1a0000d 	mov	r0, sp
        2d3e38:	e3a01000 	mov	r1, #0	; 0x0
        2d3e3c:	eb5e179f 	bl	1a59cc0 <TNSDebugAPI::$__dt(void)>
        2d3e40:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::GetSelfFromStack(RefVar const &)
 * Address: 002d3e44
 */
TInterpreter::GetSelfFromStack(RefVar const &) {
    /*
        2d3e44:	e1a0c00d 	mov	ip, sp
        2d3e48:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d3e4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d3e50:	e1a04000 	mov	r4, r0
        2d3e54:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d3e58:	e5910000 	ldr	r0, [r1]
        2d3e5c:	e5900000 	ldr	r0, [r0]
        2d3e60:	e3100003 	tst	r0, #3	; 0x3
        2d3e64:	01a00140 	moveq	r0, r0, asr #2
        2d3e68:	0a000000 	beq	2d3e70 <TInterpreter::GetSelfFromStack(RefVar const &)+0x2c>
        2d3e6c:	eb63b8aa 	bl	1bc211c <$_RINTError(long)>
        2d3e70:	e1a05000 	mov	r5, r0
        2d3e74:	e1a01004 	mov	r1, r4
        2d3e78:	e1a0000d 	mov	r0, sp
        2d3e7c:	eb5e1787 	bl	1a59ca0 <TNSDebugAPI::$__ct(TInterpreter *)>
        2d3e80:	e1a0000d 	mov	r0, sp
        2d3e84:	e1a01005 	mov	r1, r5
        2d3e88:	eb64b8aa 	bl	1c02138 <TNSDebugAPI::$Receiver(long)>
        2d3e8c:	e1a04000 	mov	r4, r0
        2d3e90:	e1a0000d 	mov	r0, sp
        2d3e94:	e3a01000 	mov	r1, #0	; 0x0
        2d3e98:	eb5e1788 	bl	1a59cc0 <TNSDebugAPI::$__dt(void)>
        2d3e9c:	e1a00004 	mov	r0, r4
        2d3ea0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::HandleBreakPoints(void)
 * Address: 002d3f6c
 */
TInterpreter::HandleBreakPoints(void) {
    /*
        2d3f6c:	e1a0c00d 	mov	ip, sp
        2d3f70:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2d3f74:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d3f78:	e1a04000 	mov	r4, r0
        2d3f7c:	e59f520c 	ldr	r5, [pc, #20c]	; 2d4190 <TInterpreter::HandleBreakPoints(void)+0x224>
        2d3f80:	e5950000 	ldr	r0, [r5]
        2d3f84:	e3300002 	teq	r0, #2	; 0x2
        2d3f88:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d3f8c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d3f90:	e59f81fc 	ldr	r8, [pc, #1fc]	; 2d4194 <TInterpreter::HandleBreakPoints(void)+0x228>
        2d3f94:	e5981000 	ldr	r1, [r8]
        2d3f98:	e5911000 	ldr	r1, [r1]
        2d3f9c:	eb63c0af 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d3fa0:	eb63b869 	bl	1bc214c <$AllocateRefHandle(long)>
        2d3fa4:	e58d0000 	str	r0, [sp]
        2d3fa8:	e5900000 	ldr	r0, [r0]
        2d3fac:	e3300002 	teq	r0, #2	; 0x2
        2d3fb0:	0a000073 	beq	2d4184 <TInterpreter::HandleBreakPoints(void)+0x218>
        2d3fb4:	e3a06000 	mov	r6, #0	; 0x0
        2d3fb8:	e24dd030 	sub	sp, sp, #48	; 0x30
        2d3fbc:	e28d1030 	add	r1, sp, #48	; 0x30
        2d3fc0:	e1a0000d 	mov	r0, sp
        2d3fc4:	e3a02000 	mov	r2, #0	; 0x0
        2d3fc8:	eb63b448 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        2d3fcc:	e1a0000d 	mov	r0, sp
        2d3fd0:	eb63bc81 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2d3fd4:	e3300000 	teq	r0, #0	; 0x0
        2d3fd8:	1a00003a 	bne	2d40c8 <TInterpreter::HandleBreakPoints(void)+0x15c>
        2d3fdc:	e2847044 	add	r7, r4, #68	; 0x44
        2d3fe0:	e59fa1b0 	ldr	sl, [pc, #1b0]	; 2d4198 <TInterpreter::HandleBreakPoints(void)+0x22c>
        2d3fe4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2d3fe8:	e5900000 	ldr	r0, [r0]
        2d3fec:	e5981000 	ldr	r1, [r8]
        2d3ff0:	e5911000 	ldr	r1, [r1]
        2d3ff4:	eb63c099 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d3ff8:	e3100003 	tst	r0, #3	; 0x3
        2d3ffc:	01a00140 	moveq	r0, r0, asr #2
        2d4000:	0a000000 	beq	2d4008 <TInterpreter::HandleBreakPoints(void)+0x9c>
        2d4004:	eb63b844 	bl	1bc211c <$_RINTError(long)>
        2d4008:	e5941050 	ldr	r1, [r4, #80]	; fField80
        2d400c:	e1300001 	teq	r0, r1
        2d4010:	1a000026 	bne	2d40b0 <TInterpreter::HandleBreakPoints(void)+0x144>
        2d4014:	e5970000 	ldr	r0, [r7]
        2d4018:	e5909000 	ldr	r9, [r0]
        2d401c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2d4020:	e5900000 	ldr	r0, [r0]
        2d4024:	e59a1000 	ldr	r1, [sl]
        2d4028:	e5911000 	ldr	r1, [r1]
        2d402c:	eb63c08b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d4030:	e1a01000 	mov	r1, r0
        2d4034:	e1a00009 	mov	r0, r9
        2d4038:	eb63c07c 	bl	1bc4230 <$EQRef__FlT1>
        2d403c:	e3300000 	teq	r0, #0	; 0x0
        2d4040:	0a00001a 	beq	2d40b0 <TInterpreter::HandleBreakPoints(void)+0x144>
        2d4044:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2d4048:	e5900000 	ldr	r0, [r0]
        2d404c:	e59f1148 	ldr	r1, [pc, #148]	; 2d419c <TInterpreter::HandleBreakPoints(void)+0x230>
        2d4050:	e5911000 	ldr	r1, [r1]
        2d4054:	e5911000 	ldr	r1, [r1]
        2d4058:	eb63c080 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d405c:	e3300002 	teq	r0, #2	; 0x2
        2d4060:	1a000012 	bne	2d40b0 <TInterpreter::HandleBreakPoints(void)+0x144>
        2d4064:	e3a06001 	mov	r6, #1	; 0x1
        2d4068:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2d406c:	e5900000 	ldr	r0, [r0]
        2d4070:	e59f1128 	ldr	r1, [pc, #128]	; 2d41a0 <TInterpreter::HandleBreakPoints(void)+0x234>
        2d4074:	e5911000 	ldr	r1, [r1]
        2d4078:	e5911000 	ldr	r1, [r1]
        2d407c:	eb63c077 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d4080:	e3300002 	teq	r0, #2	; 0x2
        2d4084:	0a000009 	beq	2d40b0 <TInterpreter::HandleBreakPoints(void)+0x144>
        2d4088:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2d408c:	e5900000 	ldr	r0, [r0]
        2d4090:	e3100003 	tst	r0, #3	; 0x3
        2d4094:	01a00140 	moveq	r0, r0, asr #2
        2d4098:	0a000000 	beq	2d40a0 <TInterpreter::HandleBreakPoints(void)+0x134>
        2d409c:	eb63b81e 	bl	1bc211c <$_RINTError(long)>
        2d40a0:	e1a01000 	mov	r1, r0
        2d40a4:	e28d0030 	add	r0, sp, #48	; 0x30
        2d40a8:	e3a02001 	mov	r2, #1	; 0x1
        2d40ac:	eb64d0e7 	bl	1c08450 <$ArrayRemoveCount__FRC6RefVarlT2>
        2d40b0:	e1a0000d 	mov	r0, sp
        2d40b4:	eb63c48b 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        2d40b8:	e1a0000d 	mov	r0, sp
        2d40bc:	eb63bc46 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2d40c0:	e3300000 	teq	r0, #0	; 0x0
        2d40c4:	0affffc6 	beq	2d3fe4 <TInterpreter::HandleBreakPoints(void)+0x78>
        2d40c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d40cc:	e59d0034 	ldr	r0, [sp, #52]
        2d40d0:	e5900000 	ldr	r0, [r0]
        2d40d4:	eb63c474 	bl	1bc52ac <$Length(long)>
        2d40d8:	e3300000 	teq	r0, #0	; 0x0
        2d40dc:	1a000007 	bne	2d4100 <TInterpreter::HandleBreakPoints(void)+0x194>
        2d40e0:	e5950000 	ldr	r0, [r5]
        2d40e4:	eb63b818 	bl	1bc214c <$AllocateRefHandle(long)>
        2d40e8:	e58d0000 	str	r0, [sp]
        2d40ec:	e1a0000d 	mov	r0, sp
        2d40f0:	e59f109c 	ldr	r1, [pc, #9c]	; 2d4194 <TInterpreter::HandleBreakPoints(void)+0x228>
        2d40f4:	eb63c88a 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
        2d40f8:	e59d0000 	ldr	r0, [sp]
        2d40fc:	eb63bc2e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d4100:	e5950000 	ldr	r0, [r5]
        2d4104:	eb63c468 	bl	1bc52ac <$Length(long)>
        2d4108:	e3a01002 	mov	r1, #2	; 0x2
        2d410c:	e3300000 	teq	r0, #0	; 0x0
        2d4110:	05851000 	streq	r1, [r5]
        2d4114:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d4118:	e3360000 	teq	r6, #0	; 0x0
        2d411c:	0a000012 	beq	2d416c <TInterpreter::HandleBreakPoints(void)+0x200>
        2d4120:	e1a00001 	mov	r0, r1
        2d4124:	eb63b808 	bl	1bc214c <$AllocateRefHandle(long)>
        2d4128:	e58d0000 	str	r0, [sp]
        2d412c:	e1a0400d 	mov	r4, sp
        2d4130:	e59f006c 	ldr	r0, [pc, #6c]	; 2d41a4 <TInterpreter::HandleBreakPoints(void)+0x238>
        2d4134:	e5900000 	ldr	r0, [r0]
        2d4138:	e59f1068 	ldr	r1, [pc, #68]	; 2d41a8 <TInterpreter::HandleBreakPoints(void)+0x23c>	; fField68
        2d413c:	e5911000 	ldr	r1, [r1]
        2d4140:	e5911000 	ldr	r1, [r1]
        2d4144:	eb63c045 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d4148:	eb63b7ff 	bl	1bc214c <$AllocateRefHandle(long)>
        2d414c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2d4150:	e28d0004 	add	r0, sp, #4	; 0x4
        2d4154:	e1a01004 	mov	r1, r4
        2d4158:	eb63bc1c 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        2d415c:	e59d0000 	ldr	r0, [sp]
        2d4160:	eb63bc15 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d4164:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2d4168:	eb63bc13 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d416c:	e28dd00c 	add	sp, sp, #12	; 0xc
        2d4170:	e1a0000d 	mov	r0, sp
        2d4174:	e3a01000 	mov	r1, #0	; 0x0
        2d4178:	e1a0e00f 	mov	lr, pc
        2d417c:	e59df000 	ldr	pc, [sp]
        2d4180:	e28dd030 	add	sp, sp, #48	; 0x30
        2d4184:	e59d0000 	ldr	r0, [sp]
        2d4188:	eb63bc0b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d418c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d4190:	0c105464 	ldceq	4, cr5, [r0], -#400
        2d4194:	00684040 	rsbeq	r4, r8, r0, asr #32
        2d4198:	006832b0 	streqh	r3, [r8], -#32	; fField32
        2d419c:	00682990 	streqb	r2, [r8], -#144
        2d41a0:	00684a90 	streqb	r4, [r8], -#160
        2d41a4:	0c10544c 	ldceq	4, cr5, [r0], -#304
        2d41a8:	006821d0 	ldreqd	r2, [r8], -#16	; fField16
    */
}

/**
 * Symbol: TInterpreter::SetBreakPoints(RefVar const &)
 * Address: 002d41ac
 */
TInterpreter::SetBreakPoints(RefVar const &) {
    /*
        2d41ac:	e59f2010 	ldr	r2, [pc, #10]	; 2d41c4 <TInterpreter::SetBreakPoints(RefVar const &)+0x18>
        2d41b0:	e5920000 	ldr	r0, [r2]
        2d41b4:	e5911000 	ldr	r1, [r1]
        2d41b8:	e5911000 	ldr	r1, [r1]
        2d41bc:	e5821000 	str	r1, [r2]
        2d41c0:	e1a0f00e 	mov	pc, lr
        2d41c4:	0c105464 	ldceq	4, cr5, [r0], -#400
    */
}

/**
 * Symbol: TInterpreter::EnableBreakPoints(unsigned char)
 * Address: 002d41c8
 */
TInterpreter::EnableBreakPoints(unsigned char) {
    /*
        2d41c8:	e1a0c00d 	mov	ip, sp
        2d41cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d41d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d41d4:	e20120ff 	and	r2, r1, #255	; 0xff
        2d41d8:	e59f1010 	ldr	r1, [pc, #10]	; 2d41f0 <TInterpreter::EnableBreakPoints(unsigned char)+0x28>
        2d41dc:	e5d14000 	ldrb	r4, [r1]
        2d41e0:	e5c12000 	strb	r2, [r1]
        2d41e4:	eb5e0e6a 	bl	1a57b94 <TInterpreter::$SetFastLoopFlag(void)>
        2d41e8:	e1a00004 	mov	r0, r4
        2d41ec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2d41f0:	0c105460 	ldceq	4, cr5, [r0], -#384
    */
}

/**
 * Symbol: TInterpreter::FastRun(long)
 * Address: 002ee0a8
 */
TInterpreter::FastRun(long) {
    /*
        2ee0a8:	e1a0c00d 	mov	ip, sp
        2ee0ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2ee0b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ee0b4:	e1a04000 	mov	r4, r0
        2ee0b8:	e1a05001 	mov	r5, r1
        2ee0bc:	e24dd024 	sub	sp, sp, #36	; 0x24
        2ee0c0:	e3a00002 	mov	r0, #2	; 0x2
        2ee0c4:	eb635020 	bl	1bc214c <$AllocateRefHandle(long)>
        2ee0c8:	e58d000c 	str	r0, [sp, #12]	; fField12
        2ee0cc:	e3a00002 	mov	r0, #2	; 0x2
        2ee0d0:	eb63501d 	bl	1bc214c <$AllocateRefHandle(long)>
        2ee0d4:	e58d0010 	str	r0, [sp, #16]	; fField16
        2ee0d8:	e3a00002 	mov	r0, #2	; 0x2
        2ee0dc:	eb63501a 	bl	1bc214c <$AllocateRefHandle(long)>
        2ee0e0:	e58d0014 	str	r0, [sp, #20]
        2ee0e4:	e3a00002 	mov	r0, #2	; 0x2
        2ee0e8:	eb635017 	bl	1bc214c <$AllocateRefHandle(long)>
        2ee0ec:	e58d0018 	str	r0, [sp, #24]
        2ee0f0:	e58d4008 	str	r4, [sp, #8]	; fField8
        2ee0f4:	e2840020 	add	r0, r4, #32	; 0x20
        2ee0f8:	e58d0004 	str	r0, [sp, #4]	; fField4
        2ee0fc:	e1a0200d 	mov	r2, sp
        2ee100:	e1a01005 	mov	r1, r5
        2ee104:	e1a00004 	mov	r0, r4
        2ee108:	eb5d9a42 	bl	1a54a18 <TInterpreter::$FastRun1(long, FastRunState &)>
        2ee10c:	e1a04000 	mov	r4, r0
        2ee110:	e59d0018 	ldr	r0, [sp, #24]
        2ee114:	eb635428 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ee118:	e59d0014 	ldr	r0, [sp, #20]
        2ee11c:	eb635426 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ee120:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2ee124:	eb635424 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ee128:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2ee12c:	eb635422 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ee130:	e1a00004 	mov	r0, r4
        2ee134:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::FastRun1(long, FastRunState &)
 * Address: 002ee138
 */
TInterpreter::FastRun1(long, FastRunState &) {
    /*
        2ee138:	e1a0c00d 	mov	ip, sp
        2ee13c:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ee140:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ee144:	e1a05000 	mov	r5, r0
        2ee148:	e1a04002 	mov	r4, r2
        2ee14c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2ee150:	e2801044 	add	r1, r0, #68	; 0x44
        2ee154:	e58d1008 	str	r1, [sp, #8]	; fField8
        2ee158:	e2801040 	add	r1, r0, #64	; 0x40
        2ee15c:	e282a014 	add	sl, r2, #20	; 0x14
        2ee160:	e2829010 	add	r9, r2, #16	; 0x10
        2ee164:	e282800c 	add	r8, r2, #12	; 0xc
        2ee168:	e2800008 	add	r0, r0, #8	; 0x8
        2ee16c:	e88d0003 	stmia	sp, {r0, r1}
        2ee170:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2ee174:	e5900000 	ldr	r0, [r0]
        2ee178:	e5900000 	ldr	r0, [r0]
        2ee17c:	eb634ff6 	bl	1bc215c <$BinaryData(long)>
        2ee180:	e5840020 	str	r0, [r4, #32]	; fField32
        2ee184:	e5951050 	ldr	r1, [r5, #80]	; fField80
        2ee188:	e0800001 	add	r0, r0, r1
        2ee18c:	e5840000 	str	r0, [r4]
        2ee190:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2ee194:	e5900000 	ldr	r0, [r0]
        2ee198:	e5900000 	ldr	r0, [r0]
        2ee19c:	e3300002 	teq	r0, #2	; 0x2
        2ee1a0:	03a00000 	moveq	r0, #0	; 0x0
        2ee1a4:	0a000001 	beq	2ee1b0 <TInterpreter::FastRun1(long, FastRunState &)+0x78>
        2ee1a8:	eb635c51 	bl	1bc52f4 <$ObjectPtr(long)>
        2ee1ac:	e280000c 	add	r0, r0, #12	; 0xc
        2ee1b0:	e584001c 	str	r0, [r4, #28]
        2ee1b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ee1b8:	e5950058 	ldr	r0, [r5, #88]	; fField88
        2ee1bc:	e5951024 	ldr	r1, [r5, #36]	; fField36
        2ee1c0:	e0812100 	add	r2, r1, r0, lsl #2
        2ee1c4:	e58d2000 	str	r2, [sp]
        2ee1c8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ee1cc:	e5907000 	ldr	r7, [r0]
        2ee1d0:	e5946000 	ldr	r6, [r4]
        2ee1d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ee1d8:	e4d60001 	ldrb	r0, [r6], #1
        2ee1dc:	e35000cf 	cmp	r0, #207	; 0xcf
        2ee1e0:	908ff100 	addls	pc, pc, r0, lsl #2
        2ee1e4:	ea0003cc 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee1e8:	ea0000d1 	b	2ee534 <TInterpreter::FastRun1(long, FastRunState &)+0x3fc>
        2ee1ec:	ea0000d3 	b	2ee540 <TInterpreter::FastRun1(long, FastRunState &)+0x408>
        2ee1f0:	ea0000d6 	b	2ee550 <TInterpreter::FastRun1(long, FastRunState &)+0x418>
        2ee1f4:	ea000105 	b	2ee610 <TInterpreter::FastRun1(long, FastRunState &)+0x4d8>
        2ee1f8:	ea0002d2 	b	2eed48 <TInterpreter::FastRun1(long, FastRunState &)+0xc10>
        2ee1fc:	ea0002da 	b	2eed6c <TInterpreter::FastRun1(long, FastRunState &)+0xc34>
        2ee200:	ea0002e2 	b	2eed90 <TInterpreter::FastRun1(long, FastRunState &)+0xc58>
        2ee204:	ea0002ea 	b	2eedb4 <TInterpreter::FastRun1(long, FastRunState &)+0xc7c>
        2ee208:	ea0003c3 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee20c:	ea0003c2 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee210:	ea0003c1 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee214:	ea0003c0 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee218:	ea0003bf 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee21c:	ea0003be 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee220:	ea0003bd 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee224:	ea0003bc 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee228:	ea0003bb 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee22c:	ea0003ba 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee230:	ea0003b9 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee234:	ea0003b8 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee238:	ea0003b7 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee23c:	ea0003b6 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee240:	ea0003b5 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee244:	ea0003b4 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee248:	ea0000fa 	b	2ee638 <TInterpreter::FastRun1(long, FastRunState &)+0x500>
        2ee24c:	ea0000f9 	b	2ee638 <TInterpreter::FastRun1(long, FastRunState &)+0x500>
        2ee250:	ea0000f8 	b	2ee638 <TInterpreter::FastRun1(long, FastRunState &)+0x500>
        2ee254:	ea0000f7 	b	2ee638 <TInterpreter::FastRun1(long, FastRunState &)+0x500>
        2ee258:	ea0000f6 	b	2ee638 <TInterpreter::FastRun1(long, FastRunState &)+0x500>
        2ee25c:	ea0000f5 	b	2ee638 <TInterpreter::FastRun1(long, FastRunState &)+0x500>
        2ee260:	ea0000f4 	b	2ee638 <TInterpreter::FastRun1(long, FastRunState &)+0x500>
        2ee264:	ea0000ef 	b	2ee628 <TInterpreter::FastRun1(long, FastRunState &)+0x4f0>
        2ee268:	ea0000ff 	b	2ee66c <TInterpreter::FastRun1(long, FastRunState &)+0x534>
        2ee26c:	ea0000fe 	b	2ee66c <TInterpreter::FastRun1(long, FastRunState &)+0x534>
        2ee270:	ea0000fd 	b	2ee66c <TInterpreter::FastRun1(long, FastRunState &)+0x534>
        2ee274:	ea0000fc 	b	2ee66c <TInterpreter::FastRun1(long, FastRunState &)+0x534>
        2ee278:	ea0000fb 	b	2ee66c <TInterpreter::FastRun1(long, FastRunState &)+0x534>
        2ee27c:	ea0000fa 	b	2ee66c <TInterpreter::FastRun1(long, FastRunState &)+0x534>
        2ee280:	ea0000f9 	b	2ee66c <TInterpreter::FastRun1(long, FastRunState &)+0x534>
        2ee284:	ea0000f1 	b	2ee650 <TInterpreter::FastRun1(long, FastRunState &)+0x518>
        2ee288:	ea00030e 	b	2eeec8 <TInterpreter::FastRun1(long, FastRunState &)+0xd90>
        2ee28c:	ea00030d 	b	2eeec8 <TInterpreter::FastRun1(long, FastRunState &)+0xd90>
        2ee290:	ea00030c 	b	2eeec8 <TInterpreter::FastRun1(long, FastRunState &)+0xd90>
        2ee294:	ea00030b 	b	2eeec8 <TInterpreter::FastRun1(long, FastRunState &)+0xd90>
        2ee298:	ea00030a 	b	2eeec8 <TInterpreter::FastRun1(long, FastRunState &)+0xd90>
        2ee29c:	ea000309 	b	2eeec8 <TInterpreter::FastRun1(long, FastRunState &)+0xd90>
        2ee2a0:	ea000308 	b	2eeec8 <TInterpreter::FastRun1(long, FastRunState &)+0xd90>
        2ee2a4:	ea000303 	b	2eeeb8 <TInterpreter::FastRun1(long, FastRunState &)+0xd80>
        2ee2a8:	ea000317 	b	2eef0c <TInterpreter::FastRun1(long, FastRunState &)+0xdd4>
        2ee2ac:	ea000316 	b	2eef0c <TInterpreter::FastRun1(long, FastRunState &)+0xdd4>
        2ee2b0:	ea000315 	b	2eef0c <TInterpreter::FastRun1(long, FastRunState &)+0xdd4>
        2ee2b4:	ea000314 	b	2eef0c <TInterpreter::FastRun1(long, FastRunState &)+0xdd4>
        2ee2b8:	ea000313 	b	2eef0c <TInterpreter::FastRun1(long, FastRunState &)+0xdd4>
        2ee2bc:	ea000312 	b	2eef0c <TInterpreter::FastRun1(long, FastRunState &)+0xdd4>
        2ee2c0:	ea000311 	b	2eef0c <TInterpreter::FastRun1(long, FastRunState &)+0xdd4>
        2ee2c4:	ea00030c 	b	2eeefc <TInterpreter::FastRun1(long, FastRunState &)+0xdc4>
        2ee2c8:	ea000320 	b	2eef50 <TInterpreter::FastRun1(long, FastRunState &)+0xe18>
        2ee2cc:	ea00031f 	b	2eef50 <TInterpreter::FastRun1(long, FastRunState &)+0xe18>
        2ee2d0:	ea00031e 	b	2eef50 <TInterpreter::FastRun1(long, FastRunState &)+0xe18>
        2ee2d4:	ea00031d 	b	2eef50 <TInterpreter::FastRun1(long, FastRunState &)+0xe18>
        2ee2d8:	ea00031c 	b	2eef50 <TInterpreter::FastRun1(long, FastRunState &)+0xe18>
        2ee2dc:	ea00031b 	b	2eef50 <TInterpreter::FastRun1(long, FastRunState &)+0xe18>
        2ee2e0:	ea00031a 	b	2eef50 <TInterpreter::FastRun1(long, FastRunState &)+0xe18>
        2ee2e4:	ea000315 	b	2eef40 <TInterpreter::FastRun1(long, FastRunState &)+0xe08>
        2ee2e8:	ea000329 	b	2eef94 <TInterpreter::FastRun1(long, FastRunState &)+0xe5c>
        2ee2ec:	ea000328 	b	2eef94 <TInterpreter::FastRun1(long, FastRunState &)+0xe5c>
        2ee2f0:	ea000327 	b	2eef94 <TInterpreter::FastRun1(long, FastRunState &)+0xe5c>
        2ee2f4:	ea000326 	b	2eef94 <TInterpreter::FastRun1(long, FastRunState &)+0xe5c>
        2ee2f8:	ea000325 	b	2eef94 <TInterpreter::FastRun1(long, FastRunState &)+0xe5c>
        2ee2fc:	ea000324 	b	2eef94 <TInterpreter::FastRun1(long, FastRunState &)+0xe5c>
        2ee300:	ea000323 	b	2eef94 <TInterpreter::FastRun1(long, FastRunState &)+0xe5c>
        2ee304:	ea00031e 	b	2eef84 <TInterpreter::FastRun1(long, FastRunState &)+0xe4c>
        2ee308:	ea000332 	b	2eefd8 <TInterpreter::FastRun1(long, FastRunState &)+0xea0>
        2ee30c:	ea000331 	b	2eefd8 <TInterpreter::FastRun1(long, FastRunState &)+0xea0>
        2ee310:	ea000330 	b	2eefd8 <TInterpreter::FastRun1(long, FastRunState &)+0xea0>
        2ee314:	ea00032f 	b	2eefd8 <TInterpreter::FastRun1(long, FastRunState &)+0xea0>
        2ee318:	ea00032e 	b	2eefd8 <TInterpreter::FastRun1(long, FastRunState &)+0xea0>
        2ee31c:	ea00032d 	b	2eefd8 <TInterpreter::FastRun1(long, FastRunState &)+0xea0>
        2ee320:	ea00032c 	b	2eefd8 <TInterpreter::FastRun1(long, FastRunState &)+0xea0>
        2ee324:	ea000327 	b	2eefc8 <TInterpreter::FastRun1(long, FastRunState &)+0xe90>
        2ee328:	ea00033b 	b	2ef01c <TInterpreter::FastRun1(long, FastRunState &)+0xee4>
        2ee32c:	ea00033a 	b	2ef01c <TInterpreter::FastRun1(long, FastRunState &)+0xee4>
        2ee330:	ea000339 	b	2ef01c <TInterpreter::FastRun1(long, FastRunState &)+0xee4>
        2ee334:	ea000338 	b	2ef01c <TInterpreter::FastRun1(long, FastRunState &)+0xee4>
        2ee338:	ea000337 	b	2ef01c <TInterpreter::FastRun1(long, FastRunState &)+0xee4>
        2ee33c:	ea000336 	b	2ef01c <TInterpreter::FastRun1(long, FastRunState &)+0xee4>
        2ee340:	ea000335 	b	2ef01c <TInterpreter::FastRun1(long, FastRunState &)+0xee4>
        2ee344:	ea000330 	b	2ef00c <TInterpreter::FastRun1(long, FastRunState &)+0xed4>
        2ee348:	ea0000e5 	b	2ee6e4 <TInterpreter::FastRun1(long, FastRunState &)+0x5ac>
        2ee34c:	ea0000e4 	b	2ee6e4 <TInterpreter::FastRun1(long, FastRunState &)+0x5ac>
        2ee350:	ea0000e3 	b	2ee6e4 <TInterpreter::FastRun1(long, FastRunState &)+0x5ac>
        2ee354:	ea0000e2 	b	2ee6e4 <TInterpreter::FastRun1(long, FastRunState &)+0x5ac>
        2ee358:	ea0000e1 	b	2ee6e4 <TInterpreter::FastRun1(long, FastRunState &)+0x5ac>
        2ee35c:	ea0000e0 	b	2ee6e4 <TInterpreter::FastRun1(long, FastRunState &)+0x5ac>
        2ee360:	ea0000df 	b	2ee6e4 <TInterpreter::FastRun1(long, FastRunState &)+0x5ac>
        2ee364:	ea0000da 	b	2ee6d4 <TInterpreter::FastRun1(long, FastRunState &)+0x59c>
        2ee368:	ea0000c7 	b	2ee68c <TInterpreter::FastRun1(long, FastRunState &)+0x554>
        2ee36c:	ea0000c6 	b	2ee68c <TInterpreter::FastRun1(long, FastRunState &)+0x554>
        2ee370:	ea0000c5 	b	2ee68c <TInterpreter::FastRun1(long, FastRunState &)+0x554>
        2ee374:	ea0000c4 	b	2ee68c <TInterpreter::FastRun1(long, FastRunState &)+0x554>
        2ee378:	ea0000c3 	b	2ee68c <TInterpreter::FastRun1(long, FastRunState &)+0x554>
        2ee37c:	ea0000c2 	b	2ee68c <TInterpreter::FastRun1(long, FastRunState &)+0x554>
        2ee380:	ea0000c1 	b	2ee68c <TInterpreter::FastRun1(long, FastRunState &)+0x554>
        2ee384:	ea0000bc 	b	2ee67c <TInterpreter::FastRun1(long, FastRunState &)+0x544>
        2ee388:	ea0000ca 	b	2ee6b8 <TInterpreter::FastRun1(long, FastRunState &)+0x580>
        2ee38c:	ea0000c9 	b	2ee6b8 <TInterpreter::FastRun1(long, FastRunState &)+0x580>
        2ee390:	ea0000c8 	b	2ee6b8 <TInterpreter::FastRun1(long, FastRunState &)+0x580>
        2ee394:	ea0000c7 	b	2ee6b8 <TInterpreter::FastRun1(long, FastRunState &)+0x580>
        2ee398:	ea0000c6 	b	2ee6b8 <TInterpreter::FastRun1(long, FastRunState &)+0x580>
        2ee39c:	ea0000c5 	b	2ee6b8 <TInterpreter::FastRun1(long, FastRunState &)+0x580>
        2ee3a0:	ea0000c4 	b	2ee6b8 <TInterpreter::FastRun1(long, FastRunState &)+0x580>
        2ee3a4:	ea0000bf 	b	2ee6a8 <TInterpreter::FastRun1(long, FastRunState &)+0x570>
        2ee3a8:	ea00028e 	b	2eede8 <TInterpreter::FastRun1(long, FastRunState &)+0xcb0>
        2ee3ac:	ea00028d 	b	2eede8 <TInterpreter::FastRun1(long, FastRunState &)+0xcb0>
        2ee3b0:	ea00028c 	b	2eede8 <TInterpreter::FastRun1(long, FastRunState &)+0xcb0>
        2ee3b4:	ea00028b 	b	2eede8 <TInterpreter::FastRun1(long, FastRunState &)+0xcb0>
        2ee3b8:	ea00028a 	b	2eede8 <TInterpreter::FastRun1(long, FastRunState &)+0xcb0>
        2ee3bc:	ea000289 	b	2eede8 <TInterpreter::FastRun1(long, FastRunState &)+0xcb0>
        2ee3c0:	ea000288 	b	2eede8 <TInterpreter::FastRun1(long, FastRunState &)+0xcb0>
        2ee3c4:	ea000283 	b	2eedd8 <TInterpreter::FastRun1(long, FastRunState &)+0xca0>
        2ee3c8:	ea0000cf 	b	2ee70c <TInterpreter::FastRun1(long, FastRunState &)+0x5d4>
        2ee3cc:	ea0000ce 	b	2ee70c <TInterpreter::FastRun1(long, FastRunState &)+0x5d4>
        2ee3d0:	ea0000cd 	b	2ee70c <TInterpreter::FastRun1(long, FastRunState &)+0x5d4>
        2ee3d4:	ea0000cc 	b	2ee70c <TInterpreter::FastRun1(long, FastRunState &)+0x5d4>
        2ee3d8:	ea0000cb 	b	2ee70c <TInterpreter::FastRun1(long, FastRunState &)+0x5d4>
        2ee3dc:	ea0000ca 	b	2ee70c <TInterpreter::FastRun1(long, FastRunState &)+0x5d4>
        2ee3e0:	ea0000c9 	b	2ee70c <TInterpreter::FastRun1(long, FastRunState &)+0x5d4>
        2ee3e4:	ea0000c3 	b	2ee6f8 <TInterpreter::FastRun1(long, FastRunState &)+0x5c0>
        2ee3e8:	ea0002a8 	b	2eee90 <TInterpreter::FastRun1(long, FastRunState &)+0xd58>
        2ee3ec:	ea0002a7 	b	2eee90 <TInterpreter::FastRun1(long, FastRunState &)+0xd58>
        2ee3f0:	ea0002a6 	b	2eee90 <TInterpreter::FastRun1(long, FastRunState &)+0xd58>
        2ee3f4:	ea0002a5 	b	2eee90 <TInterpreter::FastRun1(long, FastRunState &)+0xd58>
        2ee3f8:	ea0002a4 	b	2eee90 <TInterpreter::FastRun1(long, FastRunState &)+0xd58>
        2ee3fc:	ea0002a3 	b	2eee90 <TInterpreter::FastRun1(long, FastRunState &)+0xd58>
        2ee400:	ea0002a2 	b	2eee90 <TInterpreter::FastRun1(long, FastRunState &)+0xd58>
        2ee404:	ea00029d 	b	2eee80 <TInterpreter::FastRun1(long, FastRunState &)+0xd48>
        2ee408:	ea000292 	b	2eee58 <TInterpreter::FastRun1(long, FastRunState &)+0xd20>
        2ee40c:	ea000291 	b	2eee58 <TInterpreter::FastRun1(long, FastRunState &)+0xd20>
        2ee410:	ea000290 	b	2eee58 <TInterpreter::FastRun1(long, FastRunState &)+0xd20>
        2ee414:	ea00028f 	b	2eee58 <TInterpreter::FastRun1(long, FastRunState &)+0xd20>
        2ee418:	ea00028e 	b	2eee58 <TInterpreter::FastRun1(long, FastRunState &)+0xd20>
        2ee41c:	ea00028d 	b	2eee58 <TInterpreter::FastRun1(long, FastRunState &)+0xd20>
        2ee420:	ea00028c 	b	2eee58 <TInterpreter::FastRun1(long, FastRunState &)+0xd20>
        2ee424:	ea000287 	b	2eee48 <TInterpreter::FastRun1(long, FastRunState &)+0xd10>
        2ee428:	ea00010d 	b	2ee864 <TInterpreter::FastRun1(long, FastRunState &)+0x72c>
        2ee42c:	ea000120 	b	2ee8b4 <TInterpreter::FastRun1(long, FastRunState &)+0x77c>
        2ee430:	ea000339 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee434:	ea000338 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee438:	ea000337 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee43c:	ea000336 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee440:	ea000335 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee444:	ea000334 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee448:	ea000134 	b	2ee920 <TInterpreter::FastRun1(long, FastRunState &)+0x7e8>
        2ee44c:	ea00014f 	b	2ee990 <TInterpreter::FastRun1(long, FastRunState &)+0x858>
        2ee450:	ea000331 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee454:	ea000330 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee458:	ea00032f 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee45c:	ea00032e 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee460:	ea00032d 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee464:	ea00032c 	b	2ef11c <TInterpreter::FastRun1(long, FastRunState &)+0xfe4>
        2ee468:	ea0000bf 	b	2ee76c <TInterpreter::FastRun1(long, FastRunState &)+0x634>
        2ee46c:	ea0000be 	b	2ee76c <TInterpreter::FastRun1(long, FastRunState &)+0x634>
        2ee470:	ea0000bd 	b	2ee76c <TInterpreter::FastRun1(long, FastRunState &)+0x634>
        2ee474:	ea0000bc 	b	2ee76c <TInterpreter::FastRun1(long, FastRunState &)+0x634>
        2ee478:	ea0000bb 	b	2ee76c <TInterpreter::FastRun1(long, FastRunState &)+0x634>
        2ee47c:	ea0000ba 	b	2ee76c <TInterpreter::FastRun1(long, FastRunState &)+0x634>
        2ee480:	ea0000b9 	b	2ee76c <TInterpreter::FastRun1(long, FastRunState &)+0x634>
        2ee484:	ea0000b3 	b	2ee758 <TInterpreter::FastRun1(long, FastRunState &)+0x620>
        2ee488:	ea000264 	b	2eee20 <TInterpreter::FastRun1(long, FastRunState &)+0xce8>
        2ee48c:	ea000263 	b	2eee20 <TInterpreter::FastRun1(long, FastRunState &)+0xce8>
        2ee490:	ea000262 	b	2eee20 <TInterpreter::FastRun1(long, FastRunState &)+0xce8>
        2ee494:	ea000261 	b	2eee20 <TInterpreter::FastRun1(long, FastRunState &)+0xce8>
        2ee498:	ea000260 	b	2eee20 <TInterpreter::FastRun1(long, FastRunState &)+0xce8>
        2ee49c:	ea00025f 	b	2eee20 <TInterpreter::FastRun1(long, FastRunState &)+0xce8>
        2ee4a0:	ea00025e 	b	2eee20 <TInterpreter::FastRun1(long, FastRunState &)+0xce8>
        2ee4a4:	ea000259 	b	2eee10 <TInterpreter::FastRun1(long, FastRunState &)+0xcd8>
        2ee4a8:	ea0000cb 	b	2ee7dc <TInterpreter::FastRun1(long, FastRunState &)+0x6a4>
        2ee4ac:	ea0000ca 	b	2ee7dc <TInterpreter::FastRun1(long, FastRunState &)+0x6a4>
        2ee4b0:	ea0000c9 	b	2ee7dc <TInterpreter::FastRun1(long, FastRunState &)+0x6a4>
        2ee4b4:	ea0000c8 	b	2ee7dc <TInterpreter::FastRun1(long, FastRunState &)+0x6a4>
        2ee4b8:	ea0000c7 	b	2ee7dc <TInterpreter::FastRun1(long, FastRunState &)+0x6a4>
        2ee4bc:	ea0000c6 	b	2ee7dc <TInterpreter::FastRun1(long, FastRunState &)+0x6a4>
        2ee4c0:	ea0000c5 	b	2ee7dc <TInterpreter::FastRun1(long, FastRunState &)+0x6a4>
        2ee4c4:	ea0000bf 	b	2ee7c8 <TInterpreter::FastRun1(long, FastRunState &)+0x690>
        2ee4c8:	ea0002e4 	b	2ef060 <TInterpreter::FastRun1(long, FastRunState &)+0xf28>
        2ee4cc:	ea0002e3 	b	2ef060 <TInterpreter::FastRun1(long, FastRunState &)+0xf28>
        2ee4d0:	ea0002e2 	b	2ef060 <TInterpreter::FastRun1(long, FastRunState &)+0xf28>
        2ee4d4:	ea0002e1 	b	2ef060 <TInterpreter::FastRun1(long, FastRunState &)+0xf28>
        2ee4d8:	ea0002e0 	b	2ef060 <TInterpreter::FastRun1(long, FastRunState &)+0xf28>
        2ee4dc:	ea0002df 	b	2ef060 <TInterpreter::FastRun1(long, FastRunState &)+0xf28>
        2ee4e0:	ea0002de 	b	2ef060 <TInterpreter::FastRun1(long, FastRunState &)+0xf28>
        2ee4e4:	ea0002d9 	b	2ef050 <TInterpreter::FastRun1(long, FastRunState &)+0xf18>
        2ee4e8:	ea000146 	b	2eea08 <TInterpreter::FastRun1(long, FastRunState &)+0x8d0>
        2ee4ec:	ea000157 	b	2eea50 <TInterpreter::FastRun1(long, FastRunState &)+0x918>
        2ee4f0:	ea000168 	b	2eea98 <TInterpreter::FastRun1(long, FastRunState &)+0x960>
        2ee4f4:	ea00019d 	b	2eeb70 <TInterpreter::FastRun1(long, FastRunState &)+0xa38>
        2ee4f8:	ea0001db 	b	2eec6c <TInterpreter::FastRun1(long, FastRunState &)+0xb34>
        2ee4fc:	ea00020a 	b	2eed2c <TInterpreter::FastRun1(long, FastRunState &)+0xbf4>
        2ee500:	ea0001f1 	b	2eeccc <TInterpreter::FastRun1(long, FastRunState &)+0xb94>
        2ee504:	ea0002df 	b	2ef088 <TInterpreter::FastRun1(long, FastRunState &)+0xf50>
        2ee508:	ea0002f9 	b	2ef0f4 <TInterpreter::FastRun1(long, FastRunState &)+0xfbc>
        2ee50c:	ea0002f8 	b	2ef0f4 <TInterpreter::FastRun1(long, FastRunState &)+0xfbc>
        2ee510:	ea0002f7 	b	2ef0f4 <TInterpreter::FastRun1(long, FastRunState &)+0xfbc>
        2ee514:	ea0002f6 	b	2ef0f4 <TInterpreter::FastRun1(long, FastRunState &)+0xfbc>
        2ee518:	ea0002f5 	b	2ef0f4 <TInterpreter::FastRun1(long, FastRunState &)+0xfbc>
        2ee51c:	ea0002f4 	b	2ef0f4 <TInterpreter::FastRun1(long, FastRunState &)+0xfbc>
        2ee520:	ea0002f3 	b	2ef0f4 <TInterpreter::FastRun1(long, FastRunState &)+0xfbc>
        2ee524:	e5d61001 	ldrb	r1, [r6, #1]
        2ee528:	e4d60002 	ldrb	r0, [r6], #2	; fField2
        2ee52c:	e1811400 	orr	r1, r1, r0, lsl #8
        2ee530:	ea0002f0 	b	2ef0f8 <TInterpreter::FastRun1(long, FastRunState &)+0xfc0>
        2ee534:	e2477004 	sub	r7, r7, #4	; 0x4
        2ee538:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee53c:	eaffff24 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee540:	e5170004 	ldr	r0, [r7, -#4]	; fField4
        2ee544:	e4870004 	str	r0, [r7], #4	; fField4
        2ee548:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee54c:	eaffff20 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee550:	e5950054 	ldr	r0, [r5, #84]	; fField84
        2ee554:	e3300000 	teq	r0, #0	; 0x0
        2ee558:	0a00000f 	beq	2ee59c <TInterpreter::FastRun1(long, FastRunState &)+0x464>
        2ee55c:	e5170004 	ldr	r0, [r7, -#4]	; fField4
        2ee560:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2ee564:	e5817000 	str	r7, [r1]
        2ee568:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2ee56c:	e595204c 	ldr	r2, [r5, #76]	; fField76
        2ee570:	e5922014 	ldr	r2, [r2, #20]
        2ee574:	e5922000 	ldr	r2, [r2]
        2ee578:	e1a02142 	mov	r2, r2, asr #2
        2ee57c:	e1a02342 	mov	r2, r2, asr #6
        2ee580:	e2822003 	add	r2, r2, #3	; 0x3
        2ee584:	e5913004 	ldr	r3, [r1, #4]	; fField4
        2ee588:	e0832102 	add	r2, r3, r2, lsl #2
        2ee58c:	e2822004 	add	r2, r2, #4	; 0x4
        2ee590:	e5812000 	str	r2, [r1]
        2ee594:	e5220004 	str	r0, [r2, -#4]!	; fField4
        2ee598:	ea000001 	b	2ee5a4 <TInterpreter::FastRun1(long, FastRunState &)+0x46c>
        2ee59c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ee5a0:	e5807000 	str	r7, [r0]
        2ee5a4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2ee5a8:	eb5da163 	bl	1a56b3c <TIntrpStack::$PrevState(void)>
        2ee5ac:	e585004c 	str	r0, [r5, #76]	; fField76
        2ee5b0:	e5900000 	ldr	r0, [r0]
        2ee5b4:	e5900000 	ldr	r0, [r0]
        2ee5b8:	e1a00140 	mov	r0, r0, asr #2
        2ee5bc:	e5850050 	str	r0, [r5, #80]	; fField80
        2ee5c0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2ee5c4:	e8900003 	ldmia	r0, {r0, r1}
        2ee5c8:	e0500001 	subs	r0, r0, r1
        2ee5cc:	42800003 	addmi	r0, r0, #3	; 0x3
        2ee5d0:	e1a00140 	mov	r0, r0, asr #2
        2ee5d4:	e2400001 	sub	r0, r0, #1	; 0x1
        2ee5d8:	e595103c 	ldr	r1, [r5, #60]	; fField60
        2ee5dc:	e1500001 	cmp	r0, r1
        2ee5e0:	b1a00005 	movlt	r0, r5
        2ee5e4:	bb5d4ed3 	bllt	1a42138 <TInterpreter::$PopHandlers(void)>
        2ee5e8:	e595004c 	ldr	r0, [r5, #76]	; fField76
        2ee5ec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2ee5f0:	e5900000 	ldr	r0, [r0]
        2ee5f4:	e3300002 	teq	r0, #2	; 0x2
        2ee5f8:	15950050 	ldrne	r0, [r5, #80]	; fField80
        2ee5fc:	13700001 	cmnne	r0, #1	; 0x1
        2ee600:	11a00005 	movne	r0, r5
        2ee604:	1b5da563 	blne	1a57b98 <TInterpreter::$SetFlags(void)>
        2ee608:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee60c:	ea0002a8 	b	2ef0b4 <TInterpreter::FastRun1(long, FastRunState &)+0xf7c>
        2ee610:	e595004c 	ldr	r0, [r5, #76]	; fField76
        2ee614:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2ee618:	e5900000 	ldr	r0, [r0]
        2ee61c:	e4870004 	str	r0, [r7], #4	; fField4
        2ee620:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee624:	eafffeea 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee628:	e5d60001 	ldrb	r0, [r6, #1]
        2ee62c:	e4d61002 	ldrb	r1, [r6], #2	; fField2
        2ee630:	e1800401 	orr	r0, r0, r1, lsl #8
        2ee634:	ea000000 	b	2ee63c <TInterpreter::FastRun1(long, FastRunState &)+0x504>
        2ee638:	e2000007 	and	r0, r0, #7	; 0x7
        2ee63c:	e594101c 	ldr	r1, [r4, #28]
        2ee640:	e7910100 	ldr	r0, [r1, r0, lsl #2]	; fField2
        2ee644:	e4870004 	str	r0, [r7], #4	; fField4
        2ee648:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee64c:	eafffee0 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee650:	e5d61001 	ldrb	r1, [r6, #1]
        2ee654:	e5d60000 	ldrb	r0, [r6]
        2ee658:	e1a00c00 	mov	r0, r0, lsl #24
        2ee65c:	e1a00c40 	mov	r0, r0, asr #24
        2ee660:	e1810400 	orr	r0, r1, r0, lsl #8
        2ee664:	e2866002 	add	r6, r6, #2	; 0x2
        2ee668:	ea000000 	b	2ee670 <TInterpreter::FastRun1(long, FastRunState &)+0x538>
        2ee66c:	e2000007 	and	r0, r0, #7	; 0x7
        2ee670:	e4870004 	str	r0, [r7], #4	; fField4
        2ee674:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee678:	eafffed5 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee67c:	e5d61001 	ldrb	r1, [r6, #1]
        2ee680:	e4d60002 	ldrb	r0, [r6], #2	; fField2
        2ee684:	e1810400 	orr	r0, r1, r0, lsl #8
        2ee688:	ea000000 	b	2ee690 <TInterpreter::FastRun1(long, FastRunState &)+0x558>
        2ee68c:	e2000007 	and	r0, r0, #7	; 0x7
        2ee690:	e5371004 	ldr	r1, [r7, -#4]!	; fField4
        2ee694:	e3310002 	teq	r1, #2	; 0x2
        2ee698:	15941020 	ldrne	r1, [r4, #32]	; fField32
        2ee69c:	10816000 	addne	r6, r1, r0
        2ee6a0:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee6a4:	eafffeca 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee6a8:	e5d60001 	ldrb	r0, [r6, #1]
        2ee6ac:	e4d61002 	ldrb	r1, [r6], #2	; fField2
        2ee6b0:	e1800401 	orr	r0, r0, r1, lsl #8
        2ee6b4:	ea000000 	b	2ee6bc <TInterpreter::FastRun1(long, FastRunState &)+0x584>
        2ee6b8:	e2000007 	and	r0, r0, #7	; 0x7
        2ee6bc:	e5371004 	ldr	r1, [r7, -#4]!	; fField4
        2ee6c0:	e3310002 	teq	r1, #2	; 0x2
        2ee6c4:	05941020 	ldreq	r1, [r4, #32]	; fField32
        2ee6c8:	00816000 	addeq	r6, r1, r0
        2ee6cc:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee6d0:	eafffebf 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee6d4:	e5d60001 	ldrb	r0, [r6, #1]
        2ee6d8:	e5d61000 	ldrb	r1, [r6]
        2ee6dc:	e1800401 	orr	r0, r0, r1, lsl #8
        2ee6e0:	ea000000 	b	2ee6e8 <TInterpreter::FastRun1(long, FastRunState &)+0x5b0>
        2ee6e4:	e2000007 	and	r0, r0, #7	; 0x7
        2ee6e8:	e5941020 	ldr	r1, [r4, #32]	; fField32
        2ee6ec:	e0816000 	add	r6, r1, r0
        2ee6f0:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee6f4:	eafffeb6 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee6f8:	e5d61001 	ldrb	r1, [r6, #1]
        2ee6fc:	e4d60002 	ldrb	r0, [r6], #2	; fField2
        2ee700:	e1811400 	orr	r1, r1, r0, lsl #8
        2ee704:	e58d1000 	str	r1, [sp]
        2ee708:	ea000001 	b	2ee714 <TInterpreter::FastRun1(long, FastRunState &)+0x5dc>
        2ee70c:	e2001007 	and	r1, r0, #7	; 0x7
        2ee710:	e58d1000 	str	r1, [sp]
        2ee714:	e5950054 	ldr	r0, [r5, #84]	; fField84
        2ee718:	e3300000 	teq	r0, #0	; 0x0
        2ee71c:	0a000003 	beq	2ee730 <TInterpreter::FastRun1(long, FastRunState &)+0x5f8>
        2ee720:	e89d0006 	ldmia	sp, {r1, r2}
        2ee724:	e7920101 	ldr	r0, [r2, r1, lsl #2]	; fField2
        2ee728:	e4870004 	str	r0, [r7], #4	; fField4
        2ee72c:	ea000007 	b	2ee750 <TInterpreter::FastRun1(long, FastRunState &)+0x618>
        2ee730:	e595004c 	ldr	r0, [r5, #76]	; fField76
        2ee734:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2ee738:	e5900000 	ldr	r0, [r0]
        2ee73c:	eb635aec 	bl	1bc52f4 <$ObjectPtr(long)>
        2ee740:	e59d1000 	ldr	r1, [sp]
        2ee744:	e0800101 	add	r0, r0, r1, lsl #2
        2ee748:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2ee74c:	e4870004 	str	r0, [r7], #4	; fField4
        2ee750:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee754:	eafffe9e 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee758:	e5d61001 	ldrb	r1, [r6, #1]
        2ee75c:	e4d60002 	ldrb	r0, [r6], #2	; fField2
        2ee760:	e1811400 	orr	r1, r1, r0, lsl #8
        2ee764:	e58d1000 	str	r1, [sp]
        2ee768:	ea000001 	b	2ee774 <TInterpreter::FastRun1(long, FastRunState &)+0x63c>
        2ee76c:	e2001007 	and	r1, r0, #7	; 0x7
        2ee770:	e58d1000 	str	r1, [sp]
        2ee774:	e5950054 	ldr	r0, [r5, #84]	; fField84
        2ee778:	e3300000 	teq	r0, #0	; 0x0
        2ee77c:	0a000003 	beq	2ee790 <TInterpreter::FastRun1(long, FastRunState &)+0x658>
        2ee780:	e5370004 	ldr	r0, [r7, -#4]!	; fField4
        2ee784:	e89d0006 	ldmia	sp, {r1, r2}
        2ee788:	e7820101 	str	r0, [r2, r1, lsl #2]	; fField2
        2ee78c:	ea00000b 	b	2ee7c0 <TInterpreter::FastRun1(long, FastRunState &)+0x688>
        2ee790:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ee794:	e595004c 	ldr	r0, [r5, #76]	; fField76
        2ee798:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2ee79c:	e5900000 	ldr	r0, [r0]
        2ee7a0:	e5371004 	ldr	r1, [r7, -#4]!	; fField4
        2ee7a4:	e58d1000 	str	r1, [sp]
        2ee7a8:	eb635ad1 	bl	1bc52f4 <$ObjectPtr(long)>
        2ee7ac:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2ee7b0:	e0800101 	add	r0, r0, r1, lsl #2
        2ee7b4:	e59d1000 	ldr	r1, [sp]
        2ee7b8:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        2ee7bc:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee7c0:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee7c4:	eafffe82 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee7c8:	e5d61001 	ldrb	r1, [r6, #1]
        2ee7cc:	e4d60002 	ldrb	r0, [r6], #2	; fField2
        2ee7d0:	e1810400 	orr	r0, r1, r0, lsl #8
        2ee7d4:	e58d0000 	str	r0, [sp]
        2ee7d8:	ea000001 	b	2ee7e4 <TInterpreter::FastRun1(long, FastRunState &)+0x6ac>
        2ee7dc:	e2000007 	and	r0, r0, #7	; 0x7
        2ee7e0:	e58d0000 	str	r0, [sp]
        2ee7e4:	e5950054 	ldr	r0, [r5, #84]	; fField84
        2ee7e8:	e3300000 	teq	r0, #0	; 0x0
        2ee7ec:	189d0005 	ldmneia	sp, {r0, r2}
        2ee7f0:	10821100 	addne	r1, r2, r0, lsl #2
        2ee7f4:	1a000006 	bne	2ee814 <TInterpreter::FastRun1(long, FastRunState &)+0x6dc>
        2ee7f8:	e595004c 	ldr	r0, [r5, #76]	; fField76
        2ee7fc:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2ee800:	e5900000 	ldr	r0, [r0]
        2ee804:	eb635aba 	bl	1bc52f4 <$ObjectPtr(long)>
        2ee808:	e280000c 	add	r0, r0, #12	; 0xc
        2ee80c:	e59d1000 	ldr	r1, [sp]
        2ee810:	e0801101 	add	r1, r0, r1, lsl #2
        2ee814:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ee818:	e5910000 	ldr	r0, [r1]
        2ee81c:	e5172004 	ldr	r2, [r7, -#4]	; fField4
        2ee820:	e58d2000 	str	r2, [sp]
        2ee824:	e1802002 	orr	r2, r0, r2
        2ee828:	e3120003 	tst	r2, #3	; 0x3
        2ee82c:	1a000004 	bne	2ee844 <TInterpreter::FastRun1(long, FastRunState &)+0x70c>
        2ee830:	e59d2000 	ldr	r2, [sp]
        2ee834:	e0800002 	add	r0, r0, r2
        2ee838:	e5810000 	str	r0, [r1]
        2ee83c:	e4870004 	str	r0, [r7], #4	; fField4
        2ee840:	ea000005 	b	2ee85c <TInterpreter::FastRun1(long, FastRunState &)+0x724>
        2ee844:	e3100003 	tst	r0, #3	; 0x3
        2ee848:	1b634e33 	blne	1bc211c <$_RINTError(long)>
        2ee84c:	e59d0000 	ldr	r0, [sp]
        2ee850:	e3100003 	tst	r0, #3	; 0x3
        2ee854:	159d0000 	ldrne	r0, [sp]
        2ee858:	1b634e2f 	blne	1bc211c <$_RINTError(long)>
        2ee85c:	e28dd008 	add	sp, sp, #8	; 0x8
        2ee860:	eafffe5b 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee864:	e5170008 	ldr	r0, [r7, -#8]	; fField8
        2ee868:	e3300002 	teq	r0, #2	; 0x2
        2ee86c:	02477004 	subeq	r7, r7, #4	; 0x4
        2ee870:	03a00002 	moveq	r0, #2	; 0x2
        2ee874:	05070004 	streq	r0, [r7, -#4]	; fField4
        2ee878:	0a00000b 	beq	2ee8ac <TInterpreter::FastRun1(long, FastRunState &)+0x774>
        2ee87c:	e2471004 	sub	r1, r7, #4	; 0x4
        2ee880:	e5912000 	ldr	r2, [r1]
        2ee884:	e5980000 	ldr	r0, [r8]
        2ee888:	e2417004 	sub	r7, r1, #4	; 0x4
        2ee88c:	e5802000 	str	r2, [r0]
        2ee890:	e5971000 	ldr	r1, [r7]
        2ee894:	e5990000 	ldr	r0, [r9]
        2ee898:	e5801000 	str	r1, [r0]
        2ee89c:	e1a01008 	mov	r1, r8
        2ee8a0:	e1a00009 	mov	r0, r9
        2ee8a4:	eb63566c 	bl	1bc425c <$GetFramePath__FRC6RefVarT1>
        2ee8a8:	e4870004 	str	r0, [r7], #4	; fField4
        2ee8ac:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee8b0:	eafffe47 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee8b4:	e5170008 	ldr	r0, [r7, -#8]	; fField8
        2ee8b8:	e3300002 	teq	r0, #2	; 0x2
        2ee8bc:	e1a00008 	mov	r0, r8
        2ee8c0:	e2471004 	sub	r1, r7, #4	; 0x4
        2ee8c4:	1a000008 	bne	2ee8ec <TInterpreter::FastRun1(long, FastRunState &)+0x7b4>
        2ee8c8:	e5911000 	ldr	r1, [r1]
        2ee8cc:	e5900000 	ldr	r0, [r0]
        2ee8d0:	e5801000 	str	r1, [r0]
        2ee8d4:	e1a01008 	mov	r1, r8
        2ee8d8:	e3a00fed 	mov	r0, #948	; 0x3b4
        2ee8dc:	e2400903 	sub	r0, r0, #49152	; 0xc000
        2ee8e0:	eb5d5653 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2ee8e4:	e3a00000 	mov	r0, #0	; 0x0
        2ee8e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ee8ec:	e5912000 	ldr	r2, [r1]
        2ee8f0:	e5900000 	ldr	r0, [r0]
        2ee8f4:	e2417004 	sub	r7, r1, #4	; 0x4
        2ee8f8:	e5802000 	str	r2, [r0]
        2ee8fc:	e5971000 	ldr	r1, [r7]
        2ee900:	e5990000 	ldr	r0, [r9]
        2ee904:	e5801000 	str	r1, [r0]
        2ee908:	e1a01008 	mov	r1, r8
        2ee90c:	e1a00009 	mov	r0, r9
        2ee910:	eb635651 	bl	1bc425c <$GetFramePath__FRC6RefVarT1>
        2ee914:	e4870004 	str	r0, [r7], #4	; fField4
        2ee918:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee91c:	eafffe2c 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee920:	e2471004 	sub	r1, r7, #4	; 0x4
        2ee924:	e5912000 	ldr	r2, [r1]
        2ee928:	e5980000 	ldr	r0, [r8]
        2ee92c:	e5802000 	str	r2, [r0]
        2ee930:	e2412004 	sub	r2, r1, #4	; 0x4
        2ee934:	e5921000 	ldr	r1, [r2]
        2ee938:	e5990000 	ldr	r0, [r9]
        2ee93c:	e2427004 	sub	r7, r2, #4	; 0x4
        2ee940:	e5801000 	str	r1, [r0]
        2ee944:	e5970000 	ldr	r0, [r7]
        2ee948:	e59a1000 	ldr	r1, [sl]
        2ee94c:	e5810000 	str	r0, [r1]
        2ee950:	e5950054 	ldr	r0, [r5, #84]	; fField84
        2ee954:	e3300000 	teq	r0, #0	; 0x0
        2ee958:	0a000006 	beq	2ee978 <TInterpreter::FastRun1(long, FastRunState &)+0x840>
        2ee95c:	e3560502 	cmp	r6, #8388608	; 0x800000
        2ee960:	3a000004 	bcc	2ee978 <TInterpreter::FastRun1(long, FastRunState &)+0x840>
        2ee964:	e1a02008 	mov	r2, r8
        2ee968:	e1a01009 	mov	r1, r9
        2ee96c:	e1a0000a 	mov	r0, sl
        2ee970:	eb635e7a 	bl	1bc6360 <$SetFramePath__FRC6RefVarN21>
        2ee974:	ea000003 	b	2ee988 <TInterpreter::FastRun1(long, FastRunState &)+0x850>
        2ee978:	e1a02008 	mov	r2, r8
        2ee97c:	e1a01009 	mov	r1, r9
        2ee980:	e1a0000a 	mov	r0, sl
        2ee984:	eb5da484 	bl	1a57b9c <$SetFramePathFor1XFunctions__FRC6RefVarN21>
        2ee988:	e28dd004 	add	sp, sp, #4	; 0x4
        2ee98c:	eafffe10 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2ee990:	e2471004 	sub	r1, r7, #4	; 0x4
        2ee994:	e5912000 	ldr	r2, [r1]
        2ee998:	e5980000 	ldr	r0, [r8]
        2ee99c:	e2417004 	sub	r7, r1, #4	; 0x4
        2ee9a0:	e5802000 	str	r2, [r0]
        2ee9a4:	e5971000 	ldr	r1, [r7]
        2ee9a8:	e5990000 	ldr	r0, [r9]
        2ee9ac:	e5801000 	str	r1, [r0]
        2ee9b0:	e5170004 	ldr	r0, [r7, -#4]	; fField4
        2ee9b4:	e59a1000 	ldr	r1, [sl]
        2ee9b8:	e5810000 	str	r0, [r1]
        2ee9bc:	e5950054 	ldr	r0, [r5, #84]	; fField84
        2ee9c0:	e3300000 	teq	r0, #0	; 0x0
        2ee9c4:	0a000006 	beq	2ee9e4 <TInterpreter::FastRun1(long, FastRunState &)+0x8ac>
        2ee9c8:	e3560502 	cmp	r6, #8388608	; 0x800000
        2ee9cc:	3a000004 	bcc	2ee9e4 <TInterpreter::FastRun1(long, FastRunState &)+0x8ac>
        2ee9d0:	e1a02008 	mov	r2, r8
        2ee9d4:	e1a01009 	mov	r1, r9
        2ee9d8:	e1a0000a 	mov	r0, sl
        2ee9dc:	eb635e5f 	bl	1bc6360 <$SetFramePath__FRC6RefVarN21>
        2ee9e0:	ea000003 	b	2ee9f4 <TInterpreter::FastRun1(long, FastRunState &)+0x8bc>
        2ee9e4:	e1a02008 	mov	r2, r8
        2ee9e8:	e1a01009 	mov	r1, r9
        2ee9ec:	e1a0000a 	mov	r0, sl
        2ee9f0:	eb5da469 	bl	1a57b9c <$SetFramePathFor1XFunctions__FRC6RefVarN21>
        2ee9f4:	e5980000 	ldr	r0, [r8]
        2ee9f8:	e5900000 	ldr	r0, [r0]
        2ee9fc:	e5070004 	str	r0, [r7, -#4]	; fField4
        2eea00:	e28dd004 	add	sp, sp, #4	; 0x4
        2eea04:	eafffdf2 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2eea08:	e5370004 	ldr	r0, [r7, -#4]!	; fField4
        2eea0c:	e5171004 	ldr	r1, [r7, -#4]	; fField4
        2eea10:	e1812000 	orr	r2, r1, r0
        2eea14:	e3120003 	tst	r2, #3	; 0x3
        2eea18:	0a000008 	beq	2eea40 <TInterpreter::FastRun1(long, FastRunState &)+0x908>
        2eea1c:	e5982000 	ldr	r2, [r8]
        2eea20:	e5821000 	str	r1, [r2]
        2eea24:	e5991000 	ldr	r1, [r9]
        2eea28:	e5810000 	str	r0, [r1]
        2eea2c:	e1a01009 	mov	r1, r9
        2eea30:	e1a00008 	mov	r0, r8
        2eea34:	eb5d4db6 	bl	1a42114 <$NumberAdd__FRC6RefVarT1>
        2eea38:	e5070004 	str	r0, [r7, -#4]	; fField4
        2eea3c:	ea000001 	b	2eea48 <TInterpreter::FastRun1(long, FastRunState &)+0x910>
        2eea40:	e0810000 	add	r0, r1, r0
        2eea44:	e5070004 	str	r0, [r7, -#4]	; fField4
        2eea48:	e28dd004 	add	sp, sp, #4	; 0x4
        2eea4c:	eafffde0 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2eea50:	e5370004 	ldr	r0, [r7, -#4]!	; fField4
        2eea54:	e5171004 	ldr	r1, [r7, -#4]	; fField4
        2eea58:	e1812000 	orr	r2, r1, r0
        2eea5c:	e3120003 	tst	r2, #3	; 0x3
        2eea60:	0a000008 	beq	2eea88 <TInterpreter::FastRun1(long, FastRunState &)+0x950>
        2eea64:	e5982000 	ldr	r2, [r8]
        2eea68:	e5821000 	str	r1, [r2]
        2eea6c:	e5991000 	ldr	r1, [r9]
        2eea70:	e5810000 	str	r0, [r1]
        2eea74:	e1a01009 	mov	r1, r9
        2eea78:	e1a00008 	mov	r0, r8
        2eea7c:	eb5d4da7 	bl	1a42120 <$NumberSubtract__FRC6RefVarT1>
        2eea80:	e5070004 	str	r0, [r7, -#4]	; fField4
        2eea84:	ea000001 	b	2eea90 <TInterpreter::FastRun1(long, FastRunState &)+0x958>
        2eea88:	e0410000 	sub	r0, r1, r0
        2eea8c:	e5070004 	str	r0, [r7, -#4]	; fField4
        2eea90:	e28dd004 	add	sp, sp, #4	; 0x4
        2eea94:	eafffdce 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2eea98:	e24dd004 	sub	sp, sp, #4	; 0x4
        2eea9c:	e5370004 	ldr	r0, [r7, -#4]!	; fField4
        2eeaa0:	e3100003 	tst	r0, #3	; 0x3
        2eeaa4:	01a00140 	moveq	r0, r0, asr #2
        2eeaa8:	0a000000 	beq	2eeab0 <TInterpreter::FastRun1(long, FastRunState &)+0x978>
        2eeaac:	eb634d9a 	bl	1bc211c <$_RINTError(long)>
        2eeab0:	e58d0000 	str	r0, [sp]
        2eeab4:	e5170004 	ldr	r0, [r7, -#4]	; fField4
        2eeab8:	eb635a0d 	bl	1bc52f4 <$ObjectPtr(long)>
        2eeabc:	e1a01000 	mov	r1, r0
        2eeac0:	e5900000 	ldr	r0, [r0]
        2eeac4:	e20020ff 	and	r2, r0, #255	; 0xff
        2eeac8:	e2023003 	and	r3, r2, #3	; 0x3
        2eeacc:	e3330001 	teq	r3, #1	; 0x1
        2eead0:	1a000017 	bne	2eeb34 <TInterpreter::FastRun1(long, FastRunState &)+0x9fc>
        2eead4:	e59d2000 	ldr	r2, [sp]
        2eead8:	e3520000 	cmp	r2, #0	; 0x0
        2eeadc:	ba000004 	blt	2eeaf4 <TInterpreter::FastRun1(long, FastRunState &)+0x9bc>
        2eeae0:	e3e0200b 	mvn	r2, #11	; 0xb
        2eeae4:	e0820420 	add	r0, r2, r0, lsr #8
        2eeae8:	e59d2000 	ldr	r2, [sp]
        2eeaec:	e1520120 	cmp	r2, r0, lsr #2
        2eeaf0:	3a00000a 	bcc	2eeb20 <TInterpreter::FastRun1(long, FastRunState &)+0x9e8>
        2eeaf4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2eeaf8:	e5370004 	ldr	r0, [r7, -#4]!	; fField4
        2eeafc:	eb634d92 	bl	1bc214c <$AllocateRefHandle(long)>
        2eeb00:	e58d0000 	str	r0, [sp]
        2eeb04:	e1a0000d 	mov	r0, sp
        2eeb08:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2eeb0c:	eb5da847 	bl	1a58c30 <$ThrowOutOfBoundsException(RefVar const &, long)>
        2eeb10:	e59d0000 	ldr	r0, [sp]
        2eeb14:	eb6351a8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2eeb18:	e3a00000 	mov	r0, #0	; 0x0
        2eeb1c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2eeb20:	e59d2000 	ldr	r2, [sp]
        2eeb24:	e0810102 	add	r0, r1, r2, lsl #2
        2eeb28:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2eeb2c:	e5070004 	str	r0, [r7, -#4]	; fField4
        2eeb30:	ea00000c 	b	2eeb68 <TInterpreter::FastRun1(long, FastRunState &)+0xa30>
        2eeb34:	e5170004 	ldr	r0, [r7, -#4]	; fField4
        2eeb38:	e5981000 	ldr	r1, [r8]
        2eeb3c:	e5810000 	str	r0, [r1]
        2eeb40:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eeb44:	e5807000 	str	r7, [r0]
        2eeb48:	e5846000 	str	r6, [r4]
        2eeb4c:	e5953054 	ldr	r3, [r5, #84]	; fField84
        2eeb50:	e1a00004 	mov	r0, r4
        2eeb54:	e59d1000 	ldr	r1, [sp]
        2eeb58:	eb5d939b 	bl	1a539cc <$FastComplicatedAref__FP12FastRunStatelT2i>
        2eeb5c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eeb60:	e5907000 	ldr	r7, [r0]
        2eeb64:	e5946000 	ldr	r6, [r4]
        2eeb68:	e28dd008 	add	sp, sp, #8	; 0x8
        2eeb6c:	eafffd98 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2eeb70:	e2471004 	sub	r1, r7, #4	; 0x4
        2eeb74:	e5912000 	ldr	r2, [r1]
        2eeb78:	e5990000 	ldr	r0, [r9]
        2eeb7c:	e5802000 	str	r2, [r0]
        2eeb80:	e24dd004 	sub	sp, sp, #4	; 0x4
        2eeb84:	e2417004 	sub	r7, r1, #4	; 0x4
        2eeb88:	e5970000 	ldr	r0, [r7]
        2eeb8c:	e3100003 	tst	r0, #3	; 0x3
        2eeb90:	01a00140 	moveq	r0, r0, asr #2
        2eeb94:	0a000000 	beq	2eeb9c <TInterpreter::FastRun1(long, FastRunState &)+0xa64>
        2eeb98:	eb634d5f 	bl	1bc211c <$_RINTError(long)>
        2eeb9c:	e58d0000 	str	r0, [sp]
        2eeba0:	e5170004 	ldr	r0, [r7, -#4]	; fField4
        2eeba4:	eb6359d2 	bl	1bc52f4 <$ObjectPtr(long)>
        2eeba8:	e1a01000 	mov	r1, r0
        2eebac:	e5900000 	ldr	r0, [r0]
        2eebb0:	e20020ff 	and	r2, r0, #255	; 0xff
        2eebb4:	e2023043 	and	r3, r2, #67	; 0x43
        2eebb8:	e3330001 	teq	r3, #1	; 0x1
        2eebbc:	1a00001b 	bne	2eec30 <TInterpreter::FastRun1(long, FastRunState &)+0xaf8>
        2eebc0:	e59d2000 	ldr	r2, [sp]
        2eebc4:	e3520000 	cmp	r2, #0	; 0x0
        2eebc8:	ba000004 	blt	2eebe0 <TInterpreter::FastRun1(long, FastRunState &)+0xaa8>
        2eebcc:	e3e0200b 	mvn	r2, #11	; 0xb
        2eebd0:	e0820420 	add	r0, r2, r0, lsr #8
        2eebd4:	e59d2000 	ldr	r2, [sp]
        2eebd8:	e1520120 	cmp	r2, r0, lsr #2
        2eebdc:	3a00000a 	bcc	2eec0c <TInterpreter::FastRun1(long, FastRunState &)+0xad4>
        2eebe0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2eebe4:	e5370004 	ldr	r0, [r7, -#4]!	; fField4
        2eebe8:	eb634d57 	bl	1bc214c <$AllocateRefHandle(long)>
        2eebec:	e58d0000 	str	r0, [sp]
        2eebf0:	e1a0000d 	mov	r0, sp
        2eebf4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2eebf8:	eb5da80c 	bl	1a58c30 <$ThrowOutOfBoundsException(RefVar const &, long)>
        2eebfc:	e59d0000 	ldr	r0, [sp]
        2eec00:	eb63516d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2eec04:	e3a00000 	mov	r0, #0	; 0x0
        2eec08:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2eec0c:	e5990000 	ldr	r0, [r9]
        2eec10:	e5900000 	ldr	r0, [r0]
        2eec14:	e59d2000 	ldr	r2, [sp]
        2eec18:	e0811102 	add	r1, r1, r2, lsl #2
        2eec1c:	e5a1000c 	str	r0, [r1, #12]!	; fField12
        2eec20:	e5990000 	ldr	r0, [r9]
        2eec24:	e5900000 	ldr	r0, [r0]
        2eec28:	e5070004 	str	r0, [r7, -#4]	; fField4
        2eec2c:	ea00000c 	b	2eec64 <TInterpreter::FastRun1(long, FastRunState &)+0xb2c>
        2eec30:	e5171004 	ldr	r1, [r7, -#4]	; fField4
        2eec34:	e5980000 	ldr	r0, [r8]
        2eec38:	e5801000 	str	r1, [r0]
        2eec3c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eec40:	e5807000 	str	r7, [r0]
        2eec44:	e5846000 	str	r6, [r4]
        2eec48:	e5953054 	ldr	r3, [r5, #84]	; fField84
        2eec4c:	e1a00004 	mov	r0, r4
        2eec50:	e59d1000 	ldr	r1, [sp]
        2eec54:	eb5d935f 	bl	1a539d8 <$FastComplicatedSetAref__FP12FastRunStatelT2i>
        2eec58:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eec5c:	e5907000 	ldr	r7, [r0]
        2eec60:	e5946000 	ldr	r6, [r4]
        2eec64:	e28dd008 	add	sp, sp, #8	; 0x8
        2eec68:	eafffd59 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2eec6c:	e5370004 	ldr	r0, [r7, -#4]!	; fField4
        2eec70:	e5171004 	ldr	r1, [r7, -#4]	; fField4
        2eec74:	e1812000 	orr	r2, r1, r0
        2eec78:	e3120001 	tst	r2, #1	; 0x1
        2eec7c:	1a000004 	bne	2eec94 <TInterpreter::FastRun1(long, FastRunState &)+0xb5c>
        2eec80:	e1310000 	teq	r1, r0
        2eec84:	13a00002 	movne	r0, #2	; 0x2
        2eec88:	03a0001a 	moveq	r0, #26	; 0x1a
        2eec8c:	e5070004 	str	r0, [r7, -#4]	; fField4
        2eec90:	ea00000b 	b	2eecc4 <TInterpreter::FastRun1(long, FastRunState &)+0xb8c>
        2eec94:	e5982000 	ldr	r2, [r8]
        2eec98:	e5821000 	str	r1, [r2]
        2eec9c:	e5991000 	ldr	r1, [r9]
        2eeca0:	e5810000 	str	r0, [r1]
        2eeca4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eeca8:	e5807000 	str	r7, [r0]
        2eecac:	e5846000 	str	r6, [r4]
        2eecb0:	e1a00004 	mov	r0, r4
        2eecb4:	eb5d9345 	bl	1a539d0 <$FastComplicatedEqual(FastRunState *)>
        2eecb8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eecbc:	e5907000 	ldr	r7, [r0]
        2eecc0:	e5946000 	ldr	r6, [r4]
        2eecc4:	e28dd004 	add	sp, sp, #4	; 0x4
        2eecc8:	eafffd41 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2eeccc:	e5370004 	ldr	r0, [r7, -#4]!	; fField4
        2eecd0:	e5171004 	ldr	r1, [r7, -#4]	; fField4
        2eecd4:	e1812000 	orr	r2, r1, r0
        2eecd8:	e3120001 	tst	r2, #1	; 0x1
        2eecdc:	1a000004 	bne	2eecf4 <TInterpreter::FastRun1(long, FastRunState &)+0xbbc>
        2eece0:	e1310000 	teq	r1, r0
        2eece4:	03a00002 	moveq	r0, #2	; 0x2
        2eece8:	13a0001a 	movne	r0, #26	; 0x1a
        2eecec:	e5070004 	str	r0, [r7, -#4]	; fField4
        2eecf0:	ea00000b 	b	2eed24 <TInterpreter::FastRun1(long, FastRunState &)+0xbec>
        2eecf4:	e5982000 	ldr	r2, [r8]
        2eecf8:	e5821000 	str	r1, [r2]
        2eecfc:	e5991000 	ldr	r1, [r9]
        2eed00:	e5810000 	str	r0, [r1]
        2eed04:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eed08:	e5807000 	str	r7, [r0]
        2eed0c:	e5846000 	str	r6, [r4]
        2eed10:	e1a00004 	mov	r0, r4
        2eed14:	eb5d932e 	bl	1a539d4 <$FastComplicatedNotEqual(FastRunState *)>
        2eed18:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eed1c:	e5907000 	ldr	r7, [r0]
        2eed20:	e5946000 	ldr	r6, [r4]
        2eed24:	e28dd004 	add	sp, sp, #4	; 0x4
        2eed28:	eafffd29 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2eed2c:	e5170004 	ldr	r0, [r7, -#4]	; fField4
        2eed30:	e3300002 	teq	r0, #2	; 0x2
        2eed34:	13a00002 	movne	r0, #2	; 0x2
        2eed38:	03a0001a 	moveq	r0, #26	; 0x1a
        2eed3c:	e5070004 	str	r0, [r7, -#4]	; fField4
        2eed40:	e28dd004 	add	sp, sp, #4	; 0x4
        2eed44:	eafffd22 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
        2eed48:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eed4c:	e5807000 	str	r7, [r0]
        2eed50:	e5846000 	str	r6, [r4]
        2eed54:	e1a00004 	mov	r0, r4
        2eed58:	eb5d9732 	bl	1a54a28 <$FastSetLexScope(FastRunState *, long)>
        2eed5c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eed60:	e5907000 	ldr	r7, [r0]
        2eed64:	e5946000 	ldr	r6, [r4]
        2eed68:	ea0000f3 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2eed6c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eed70:	e5807000 	str	r7, [r0]
        2eed74:	e5846000 	str	r6, [r4]
        2eed78:	e1a00004 	mov	r0, r4
        2eed7c:	eb5d931d 	bl	1a539f8 <$FastIterNext(FastRunState *, long)>
        2eed80:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eed84:	e5907000 	ldr	r7, [r0]
        2eed88:	e5946000 	ldr	r6, [r4]
        2eed8c:	ea0000ea 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2eed90:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eed94:	e5807000 	str	r7, [r0]
        2eed98:	e5846000 	str	r6, [r4]
        2eed9c:	e1a00004 	mov	r0, r4
        2eeda0:	eb5d9313 	bl	1a539f4 <$FastIterDone(FastRunState *, long)>
        2eeda4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eeda8:	e5907000 	ldr	r7, [r0]
        2eedac:	e5946000 	ldr	r6, [r4]
        2eedb0:	ea0000e1 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2eedb4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eedb8:	e5807000 	str	r7, [r0]
        2eedbc:	e5846000 	str	r6, [r4]
        2eedc0:	e1a00004 	mov	r0, r4
        2eedc4:	eb5d9718 	bl	1a54a2c <$FastUnary1Ext(FastRunState *, long)>
        2eedc8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eedcc:	e5907000 	ldr	r7, [r0]
        2eedd0:	e5946000 	ldr	r6, [r4]
        2eedd4:	ea0000d8 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2eedd8:	e5d60001 	ldrb	r0, [r6, #1]
        2eeddc:	e4d61002 	ldrb	r1, [r6], #2	; fField2
        2eede0:	e1801401 	orr	r1, r0, r1, lsl #8
        2eede4:	ea000000 	b	2eedec <TInterpreter::FastRun1(long, FastRunState &)+0xcb4>
        2eede8:	e2001007 	and	r1, r0, #7	; 0x7
        2eedec:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eedf0:	e5807000 	str	r7, [r0]
        2eedf4:	e5846000 	str	r6, [r4]
        2eedf8:	e1a00004 	mov	r0, r4
        2eedfc:	eb5d92f9 	bl	1a539e8 <$FastFindVar(FastRunState *, long)>
        2eee00:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eee04:	e5907000 	ldr	r7, [r0]
        2eee08:	e5946000 	ldr	r6, [r4]
        2eee0c:	ea0000ca 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2eee10:	e5d60001 	ldrb	r0, [r6, #1]
        2eee14:	e4d61002 	ldrb	r1, [r6], #2	; fField2
        2eee18:	e1801401 	orr	r1, r0, r1, lsl #8
        2eee1c:	ea000000 	b	2eee24 <TInterpreter::FastRun1(long, FastRunState &)+0xcec>
        2eee20:	e2001007 	and	r1, r0, #7	; 0x7
        2eee24:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eee28:	e5807000 	str	r7, [r0]
        2eee2c:	e5846000 	str	r6, [r4]
        2eee30:	e1a00004 	mov	r0, r4
        2eee34:	eb5d92ea 	bl	1a539e4 <$FastFindAndSetVar(FastRunState *, long)>
        2eee38:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eee3c:	e5907000 	ldr	r7, [r0]
        2eee40:	e5946000 	ldr	r6, [r4]
        2eee44:	ea0000bc 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2eee48:	e5d61001 	ldrb	r1, [r6, #1]
        2eee4c:	e4d60002 	ldrb	r0, [r6], #2	; fField2
        2eee50:	e1811400 	orr	r1, r1, r0, lsl #8
        2eee54:	ea000000 	b	2eee5c <TInterpreter::FastRun1(long, FastRunState &)+0xd24>
        2eee58:	e2001007 	and	r1, r0, #7	; 0x7
        2eee5c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eee60:	e5807000 	str	r7, [r0]
        2eee64:	e5846000 	str	r6, [r4]
        2eee68:	e1a00004 	mov	r0, r4
        2eee6c:	eb5d92e2 	bl	1a539fc <$FastMakeArray(FastRunState *, long)>
        2eee70:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eee74:	e5907000 	ldr	r7, [r0]
        2eee78:	e5946000 	ldr	r6, [r4]
        2eee7c:	ea0000ae 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2eee80:	e5d60001 	ldrb	r0, [r6, #1]
        2eee84:	e4d61002 	ldrb	r1, [r6], #2	; fField2
        2eee88:	e1801401 	orr	r1, r0, r1, lsl #8
        2eee8c:	ea000000 	b	2eee94 <TInterpreter::FastRun1(long, FastRunState &)+0xd5c>
        2eee90:	e2001007 	and	r1, r0, #7	; 0x7
        2eee94:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eee98:	e5807000 	str	r7, [r0]
        2eee9c:	e5846000 	str	r6, [r4]
        2eeea0:	e1a00004 	mov	r0, r4
        2eeea4:	eb5d96d5 	bl	1a54a00 <$FastMakeFrame(FastRunState *, long)>
        2eeea8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eeeac:	e5907000 	ldr	r7, [r0]
        2eeeb0:	e5946000 	ldr	r6, [r4]
        2eeeb4:	ea0000a0 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2eeeb8:	e5d60001 	ldrb	r0, [r6, #1]
        2eeebc:	e4d61002 	ldrb	r1, [r6], #2	; fField2
        2eeec0:	e1801401 	orr	r1, r0, r1, lsl #8
        2eeec4:	ea000000 	b	2eeecc <TInterpreter::FastRun1(long, FastRunState &)+0xd94>
        2eeec8:	e2001007 	and	r1, r0, #7	; 0x7
        2eeecc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eeed0:	e5807000 	str	r7, [r0]
        2eeed4:	e5846000 	str	r6, [r4]
        2eeed8:	e1a00004 	mov	r0, r4
        2eeedc:	eb5d92b9 	bl	1a539c8 <$FastCall(FastRunState *, long)>
        2eeee0:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2eeee4:	e5917000 	ldr	r7, [r1]
        2eeee8:	e3300000 	teq	r0, #0	; 0x0
        2eeeec:	e5946000 	ldr	r6, [r4]
        2eeef0:	128dd004 	addne	sp, sp, #4	; 0x4
        2eeef4:	1a00006e 	bne	2ef0b4 <TInterpreter::FastRun1(long, FastRunState &)+0xf7c>
        2eeef8:	ea00008f 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2eeefc:	e5d60001 	ldrb	r0, [r6, #1]
        2eef00:	e4d61002 	ldrb	r1, [r6], #2	; fField2
        2eef04:	e1801401 	orr	r1, r0, r1, lsl #8
        2eef08:	ea000000 	b	2eef10 <TInterpreter::FastRun1(long, FastRunState &)+0xdd8>
        2eef0c:	e2001007 	and	r1, r0, #7	; 0x7
        2eef10:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eef14:	e5807000 	str	r7, [r0]
        2eef18:	e5846000 	str	r6, [r4]
        2eef1c:	e1a00004 	mov	r0, r4
        2eef20:	eb5d92b2 	bl	1a539f0 <$FastInvoke(FastRunState *, long)>
        2eef24:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2eef28:	e5917000 	ldr	r7, [r1]
        2eef2c:	e3300000 	teq	r0, #0	; 0x0
        2eef30:	e5946000 	ldr	r6, [r4]
        2eef34:	128dd004 	addne	sp, sp, #4	; 0x4
        2eef38:	1a00005d 	bne	2ef0b4 <TInterpreter::FastRun1(long, FastRunState &)+0xf7c>
        2eef3c:	ea00007e 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2eef40:	e5d61001 	ldrb	r1, [r6, #1]
        2eef44:	e4d60002 	ldrb	r0, [r6], #2	; fField2
        2eef48:	e1811400 	orr	r1, r1, r0, lsl #8
        2eef4c:	ea000000 	b	2eef54 <TInterpreter::FastRun1(long, FastRunState &)+0xe1c>
        2eef50:	e2001007 	and	r1, r0, #7	; 0x7
        2eef54:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eef58:	e5807000 	str	r7, [r0]
        2eef5c:	e5846000 	str	r6, [r4]
        2eef60:	e1a00004 	mov	r0, r4
        2eef64:	eb5d96ae 	bl	1a54a24 <$FastSend(FastRunState *, long)>
        2eef68:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2eef6c:	e5917000 	ldr	r7, [r1]
        2eef70:	e3300000 	teq	r0, #0	; 0x0
        2eef74:	e5946000 	ldr	r6, [r4]
        2eef78:	128dd004 	addne	sp, sp, #4	; 0x4
        2eef7c:	1a00004c 	bne	2ef0b4 <TInterpreter::FastRun1(long, FastRunState &)+0xf7c>
        2eef80:	ea00006d 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2eef84:	e5d61001 	ldrb	r1, [r6, #1]
        2eef88:	e4d60002 	ldrb	r0, [r6], #2	; fField2
        2eef8c:	e1811400 	orr	r1, r1, r0, lsl #8
        2eef90:	ea000000 	b	2eef98 <TInterpreter::FastRun1(long, FastRunState &)+0xe60>
        2eef94:	e2001007 	and	r1, r0, #7	; 0x7
        2eef98:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eef9c:	e5807000 	str	r7, [r0]
        2eefa0:	e5846000 	str	r6, [r4]
        2eefa4:	e1a00004 	mov	r0, r4
        2eefa8:	eb5d969c 	bl	1a54a20 <$FastSendIfDefined(FastRunState *, long)>
        2eefac:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2eefb0:	e5917000 	ldr	r7, [r1]
        2eefb4:	e3300000 	teq	r0, #0	; 0x0
        2eefb8:	e5946000 	ldr	r6, [r4]
        2eefbc:	128dd004 	addne	sp, sp, #4	; 0x4
        2eefc0:	1a00003b 	bne	2ef0b4 <TInterpreter::FastRun1(long, FastRunState &)+0xf7c>
        2eefc4:	ea00005c 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2eefc8:	e5d60001 	ldrb	r0, [r6, #1]
        2eefcc:	e4d61002 	ldrb	r1, [r6], #2	; fField2
        2eefd0:	e1801401 	orr	r1, r0, r1, lsl #8
        2eefd4:	ea000000 	b	2eefdc <TInterpreter::FastRun1(long, FastRunState &)+0xea4>
        2eefd8:	e2001007 	and	r1, r0, #7	; 0x7
        2eefdc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2eefe0:	e5807000 	str	r7, [r0]
        2eefe4:	e5846000 	str	r6, [r4]
        2eefe8:	e1a00004 	mov	r0, r4
        2eefec:	eb5d9688 	bl	1a54a14 <$FastResend(FastRunState *, long)>
        2eeff0:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2eeff4:	e5917000 	ldr	r7, [r1]
        2eeff8:	e3300000 	teq	r0, #0	; 0x0
        2eeffc:	e5946000 	ldr	r6, [r4]
        2ef000:	128dd004 	addne	sp, sp, #4	; 0x4
        2ef004:	1a00002a 	bne	2ef0b4 <TInterpreter::FastRun1(long, FastRunState &)+0xf7c>
        2ef008:	ea00004b 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2ef00c:	e5d61001 	ldrb	r1, [r6, #1]
        2ef010:	e4d60002 	ldrb	r0, [r6], #2	; fField2
        2ef014:	e1811400 	orr	r1, r1, r0, lsl #8
        2ef018:	ea000000 	b	2ef020 <TInterpreter::FastRun1(long, FastRunState &)+0xee8>
        2ef01c:	e2001007 	and	r1, r0, #7	; 0x7
        2ef020:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ef024:	e5807000 	str	r7, [r0]
        2ef028:	e5846000 	str	r6, [r4]
        2ef02c:	e1a00004 	mov	r0, r4
        2ef030:	eb5d9676 	bl	1a54a10 <$FastResendIfDefined(FastRunState *, long)>
        2ef034:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2ef038:	e5917000 	ldr	r7, [r1]
        2ef03c:	e3300000 	teq	r0, #0	; 0x0
        2ef040:	e5946000 	ldr	r6, [r4]
        2ef044:	128dd004 	addne	sp, sp, #4	; 0x4
        2ef048:	1a000019 	bne	2ef0b4 <TInterpreter::FastRun1(long, FastRunState &)+0xf7c>
        2ef04c:	ea00003a 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2ef050:	e5d60001 	ldrb	r0, [r6, #1]
        2ef054:	e4d61002 	ldrb	r1, [r6], #2	; fField2
        2ef058:	e1801401 	orr	r1, r0, r1, lsl #8
        2ef05c:	ea000000 	b	2ef064 <TInterpreter::FastRun1(long, FastRunState &)+0xf2c>
        2ef060:	e2001007 	and	r1, r0, #7	; 0x7
        2ef064:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ef068:	e5807000 	str	r7, [r0]
        2ef06c:	e5846000 	str	r6, [r4]
        2ef070:	e1a00004 	mov	r0, r4
        2ef074:	eb5d9252 	bl	1a539c4 <$FastBranchIfLoopNotDone(FastRunState *, long)>
        2ef078:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ef07c:	e5907000 	ldr	r7, [r0]
        2ef080:	e5946000 	ldr	r6, [r4]
        2ef084:	ea00002c 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2ef088:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ef08c:	e5807000 	str	r7, [r0]
        2ef090:	e5846000 	str	r6, [r4]
        2ef094:	e1a00004 	mov	r0, r4
        2ef098:	eb5d9253 	bl	1a539ec <$FastFreqFuncGeneral(FastRunState *, long)>
        2ef09c:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2ef0a0:	e5917000 	ldr	r7, [r1]
        2ef0a4:	e3300000 	teq	r0, #0	; 0x0
        2ef0a8:	e5946000 	ldr	r6, [r4]
        2ef0ac:	0a000022 	beq	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2ef0b0:	e28dd004 	add	sp, sp, #4	; 0x4
        2ef0b4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2ef0b8:	e8900003 	ldmia	r0, {r0, r1}
        2ef0bc:	e0500001 	subs	r0, r0, r1
        2ef0c0:	42800003 	addmi	r0, r0, #3	; 0x3
        2ef0c4:	e1a00140 	mov	r0, r0, asr #2
        2ef0c8:	e2400001 	sub	r0, r0, #1	; 0x1
        2ef0cc:	e51b1030 	ldr	r1, [fp, -#48]
        2ef0d0:	e1500001 	cmp	r0, r1
        2ef0d4:	b3a00001 	movlt	r0, #1	; 0x1
        2ef0d8:	b91baff0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ef0dc:	e28dd004 	add	sp, sp, #4	; 0x4
        2ef0e0:	e5950060 	ldr	r0, [r5, #96]	; fField96
        2ef0e4:	e3300000 	teq	r0, #0	; 0x0
        2ef0e8:	1afffc20 	bne	2ee170 <TInterpreter::FastRun1(long, FastRunState &)+0x38>
        2ef0ec:	e3a00000 	mov	r0, #0	; 0x0
        2ef0f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ef0f4:	e2001007 	and	r1, r0, #7	; 0x7
        2ef0f8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ef0fc:	e5807000 	str	r7, [r0]
        2ef100:	e5846000 	str	r6, [r4]
        2ef104:	e1a00004 	mov	r0, r4
        2ef108:	eb5d963d 	bl	1a54a04 <$FastNewHandlers(FastRunState *, long)>
        2ef10c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ef110:	e5907000 	ldr	r7, [r0]
        2ef114:	e5946000 	ldr	r6, [r4]
        2ef118:	ea000007 	b	2ef13c <TInterpreter::FastRun1(long, FastRunState &)+0x1004>
        2ef11c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ef120:	e5807000 	str	r7, [r0]
        2ef124:	e5846000 	str	r6, [r4]
        2ef128:	e1a00004 	mov	r0, r4
        2ef12c:	eb5d963f 	bl	1a54a30 <$FastUndefined(FastRunState *, long)>
        2ef130:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2ef134:	e5907000 	ldr	r7, [r0]
        2ef138:	e5946000 	ldr	r6, [r4]
        2ef13c:	e28dd004 	add	sp, sp, #4	; 0x4
        2ef140:	eafffc23 	b	2ee1d4 <TInterpreter::FastRun1(long, FastRunState &)+0x9c>
    */
}

/**
 * Symbol: TInterpreter::SetFastLoopFlag(void)
 * Address: 002f1cec
 */
TInterpreter::SetFastLoopFlag(void) {
    /*
        2f1cec:	e59f1054 	ldr	r1, [pc, #54]	; 2f1d48 <TInterpreter::SetFastLoopFlag(void)+0x5c>
        2f1cf0:	e5911000 	ldr	r1, [r1]
        2f1cf4:	e3310000 	teq	r1, #0	; 0x0
        2f1cf8:	0590107c 	ldreq	r1, [r0, #124]	; fField124
        2f1cfc:	03310000 	teqeq	r1, #0	; 0x0
        2f1d00:	059f1044 	ldreq	r1, [pc, #44]	; 2f1d4c <TInterpreter::SetFastLoopFlag(void)+0x60>
        2f1d04:	05d11000 	ldreqb	r1, [r1]
        2f1d08:	03310000 	teqeq	r1, #0	; 0x0
        2f1d0c:	1a000012 	bne	2f1d5c <TInterpreter::SetFastLoopFlag(void)+0x70>
        2f1d10:	e5901048 	ldr	r1, [r0, #72]	; fField72
        2f1d14:	e3310000 	teq	r1, #0	; 0x0
        2f1d18:	0a00000f 	beq	2f1d5c <TInterpreter::SetFastLoopFlag(void)+0x70>
        2f1d1c:	e59f102c 	ldr	r1, [pc, #2c]	; 2f1d50 <TInterpreter::SetFastLoopFlag(void)+0x64>	; fField2
        2f1d20:	e5911000 	ldr	r1, [r1]
        2f1d24:	e59fc028 	ldr	ip, [pc, #28]	; 2f1d54 <TInterpreter::SetFastLoopFlag(void)+0x68>
        2f1d28:	e131000c 	teq	r1, ip
        2f1d2c:	1a000003 	bne	2f1d40 <TInterpreter::SetFastLoopFlag(void)+0x54>
        2f1d30:	e59f1020 	ldr	r1, [pc, #20]	; 2f1d58 <TInterpreter::SetFastLoopFlag(void)+0x6c>
        2f1d34:	e5911000 	ldr	r1, [r1]
        2f1d38:	e3310000 	teq	r1, #0	; 0x0
        2f1d3c:	1a000006 	bne	2f1d5c <TInterpreter::SetFastLoopFlag(void)+0x70>
        2f1d40:	e3a01001 	mov	r1, #1	; 0x1
        2f1d44:	ea000005 	b	2f1d60 <TInterpreter::SetFastLoopFlag(void)+0x74>
        2f1d48:	0c105468 	ldceq	4, cr5, [r0], -#416
        2f1d4c:	0c105460 	ldceq	4, cr5, [r0], -#384
        2f1d50:	0c10535c 	ldceq	3, cr5, [r0], -#368
        2f1d54:	66667065 	strvsbt	r7, [r6], -r5, rrx
        2f1d58:	0c105360 	ldceq	3, cr5, [r0], -#384
        2f1d5c:	e3a01000 	mov	r1, #0	; 0x0
        2f1d60:	e5a01060 	str	r1, [r0, #96]!	; fField96
        2f1d64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::AlternatingLoops(long)
 * Address: 002f1d68
 */
TInterpreter::AlternatingLoops(long) {
    /*
        2f1d68:	e1a0c00d 	mov	ip, sp
        2f1d6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2f1d70:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f1d74:	e1a04000 	mov	r4, r0
        2f1d78:	e1a05001 	mov	r5, r1
        2f1d7c:	e5900060 	ldr	r0, [r0, #96]	; fField96
        2f1d80:	e3300000 	teq	r0, #0	; 0x0
        2f1d84:	1a000004 	bne	2f1d9c <TInterpreter::AlternatingLoops(long)+0x34>
        2f1d88:	e1a01005 	mov	r1, r5
        2f1d8c:	e1a00004 	mov	r0, r4
        2f1d90:	eb5d9787 	bl	1a57bb4 <TInterpreter::$SlowRun(long)>
        2f1d94:	e3300000 	teq	r0, #0	; 0x0
        2f1d98:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        2f1d9c:	e1a01005 	mov	r1, r5
        2f1da0:	e1a00004 	mov	r0, r4
        2f1da4:	eb5d8b1c 	bl	1a54a1c <TInterpreter::$FastRun(long)>
        2f1da8:	e3300000 	teq	r0, #0	; 0x0
        2f1dac:	0afffff5 	beq	2f1d88 <TInterpreter::AlternatingLoops(long)+0x20>
        2f1db0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::Run(void)
 * Address: 002f1db4
 */
TInterpreter::Run(void) {
    /*
        2f1db4:	e1a0c00d 	mov	ip, sp
        2f1db8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f1dbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f1dc0:	e1a04000 	mov	r4, r0
        2f1dc4:	eb5d9b9f 	bl	1a58c48 <TInterpreter::$TraceSetOptions(void)>
        2f1dc8:	e24dd020 	sub	sp, sp, #32	; 0x20
        2f1dcc:	e1a0000d 	mov	r0, sp
        2f1dd0:	eb5d387e 	bl	1a3ffd0 <$GetStackState(void)>
        2f1dd4:	e28d0010 	add	r0, sp, #16	; 0x10
        2f1dd8:	e89d5000 	ldmia	sp, {ip, lr}
        2f1ddc:	e8805000 	stmia	r0, {ip, lr}
        2f1de0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2f1de4:	e5900000 	ldr	r0, [r0]
        2f1de8:	eb6340d7 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1dec:	e3a09000 	mov	r9, #0	; 0x0
        2f1df0:	e58d0018 	str	r0, [sp, #24]
        2f1df4:	e5a09004 	str	r9, [r0, #4]!	; fField4
        2f1df8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2f1dfc:	e58d001c 	str	r0, [sp, #28]
        2f1e00:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2f1e04:	eb6344ec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1e08:	e2840008 	add	r0, r4, #8	; 0x8
        2f1e0c:	e1a0a000 	mov	sl, r0
        2f1e10:	e8900003 	ldmia	r0, {r0, r1}
        2f1e14:	e0500001 	subs	r0, r0, r1
        2f1e18:	42800003 	addmi	r0, r0, #3	; 0x3
        2f1e1c:	e1a00140 	mov	r0, r0, asr #2
        2f1e20:	e2405001 	sub	r5, r0, #1	; 0x1
        2f1e24:	e24d006c 	sub	r0, sp, #108	; 0x6c
        2f1e28:	e2808008 	add	r8, r0, #8	; 0x8
        2f1e2c:	e59f7034 	ldr	r7, [pc, #34]	; 2f1e68 <TInterpreter::Run(void)+0xb4>
        2f1e30:	e2806060 	add	r6, r0, #96	; 0x60
        2f1e34:	e1a00008 	mov	r0, r8
        2f1e38:	e52d906c 	str	r9, [sp, -#108]!	; fField108
        2f1e3c:	eb6302cc 	bl	1bb2974 <$setjmp>
        2f1e40:	e3300000 	teq	r0, #0	; 0x0
        2f1e44:	1a000008 	bne	2f1e6c <TInterpreter::Run(void)+0xb8>
        2f1e48:	e1a0000d 	mov	r0, sp
        2f1e4c:	eb63b88a 	bl	1be007c <$AddExceptionHandler>
        2f1e50:	eb6427db 	bl	1bfbdc4 <$IncrementCurrentStackPos(void)>
        2f1e54:	e1a01005 	mov	r1, r5
        2f1e58:	e1a00004 	mov	r0, r4
        2f1e5c:	eb5d7e95 	bl	1a518b8 <TInterpreter::$AlternatingLoops(long)>
        2f1e60:	eb6427d8 	bl	1bfbdc8 <$DecrementCurrentStackPos(void)>
        2f1e64:	ea000010 	b	2f1eac <TInterpreter::Run(void)+0xf8>
        2f1e68:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        2f1e6c:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        2f1e70:	e5971000 	ldr	r1, [r7]
        2f1e74:	eb63c4c6 	bl	1be3194 <$Subexception>
        2f1e78:	e3300000 	teq	r0, #0	; 0x0
        2f1e7c:	0a000008 	beq	2f1ea4 <TInterpreter::Run(void)+0xf0>
        2f1e80:	eb6427d0 	bl	1bfbdc8 <$DecrementCurrentStackPos(void)>
        2f1e84:	eb6427d0 	bl	1bfbdcc <$ClearRefHandles(void)>
        2f1e88:	e1a01006 	mov	r1, r6
        2f1e8c:	e28d307c 	add	r3, sp, #124	; 0x7c
        2f1e90:	e1a02005 	mov	r2, r5
        2f1e94:	e1a00004 	mov	r0, r4
        2f1e98:	eb5d8efb 	bl	1a55a8c <TInterpreter::$HandleException(Exception *, long, StackState &)>
        2f1e9c:	e3300000 	teq	r0, #0	; 0x0
        2f1ea0:	1a000001 	bne	2f1eac <TInterpreter::Run(void)+0xf8>
        2f1ea4:	e1a0000d 	mov	r0, sp
        2f1ea8:	eb63c0a9 	bl	1be2154 <$NextHandler>
        2f1eac:	e1a0000d 	mov	r0, sp
        2f1eb0:	eb63bc80 	bl	1be10b8 <$ExitHandler>
        2f1eb4:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2f1eb8:	e89a0003 	ldmia	sl, {r0, r1}
        2f1ebc:	e0500001 	subs	r0, r0, r1
        2f1ec0:	42800003 	addmi	r0, r0, #3	; 0x3
        2f1ec4:	e1a00140 	mov	r0, r0, asr #2
        2f1ec8:	e2400001 	sub	r0, r0, #1	; 0x1
        2f1ecc:	e1500005 	cmp	r0, r5
        2f1ed0:	aaffffd7 	bge	2f1e34 <TInterpreter::Run(void)+0x80>
        2f1ed4:	e59d0018 	ldr	r0, [sp, #24]
        2f1ed8:	eb6344b7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1edc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::SlowRun(long)
 * Address: 002f1ee0
 */
TInterpreter::SlowRun(long) {
    /*
        2f1ee0:	e1a0c00d 	mov	ip, sp
        2f1ee4:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f1ee8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f1eec:	ed2dc203 	sfm	f4, 1, [sp, -#12]!	; fField12
        2f1ef0:	e1a04000 	mov	r4, r0
        2f1ef4:	e24dd058 	sub	sp, sp, #88	; 0x58
        2f1ef8:	e59f8484 	ldr	r8, [pc, #484]	; 2f2384 <TInterpreter::SlowRun(long)+0x4a4>
        2f1efc:	e5980000 	ldr	r0, [r8]
        2f1f00:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2f1f04:	e3500002 	cmp	r0, #2	; 0x2
        2f1f08:	b3a0a000 	movlt	sl, #0	; 0x0
        2f1f0c:	a3a0a001 	movge	sl, #1	; 0x1
        2f1f10:	e3a00002 	mov	r0, #2	; 0x2
        2f1f14:	eb63408c 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1f18:	e58d000c 	str	r0, [sp, #12]	; fField12
        2f1f1c:	e3a00002 	mov	r0, #2	; 0x2
        2f1f20:	eb634089 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1f24:	e58d0008 	str	r0, [sp, #8]	; fField8
        2f1f28:	e3a00002 	mov	r0, #2	; 0x2
        2f1f2c:	eb634086 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1f30:	e58d0004 	str	r0, [sp, #4]	; fField4
        2f1f34:	e3a00002 	mov	r0, #2	; 0x2
        2f1f38:	eb634083 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1f3c:	e3a07000 	mov	r7, #0	; 0x0
        2f1f40:	e58d0000 	str	r0, [sp]
        2f1f44:	e59f043c 	ldr	r0, [pc, #43c]	; 2f2388 <TInterpreter::SlowRun(long)+0x4a8>
        2f1f48:	e58d0054 	str	r0, [sp, #84]	; fField84
        2f1f4c:	e1a00004 	mov	r0, r4
        2f1f50:	e2841044 	add	r1, r4, #68	; 0x44
        2f1f54:	e58d1050 	str	r1, [sp, #80]	; fField80
        2f1f58:	e2841040 	add	r1, r4, #64	; 0x40
        2f1f5c:	e58d104c 	str	r1, [sp, #76]	; fField76
        2f1f60:	e59f1424 	ldr	r1, [pc, #424]	; 2f238c <TInterpreter::SlowRun(long)+0x4ac>
        2f1f64:	e58d1048 	str	r1, [sp, #72]	; fField72
        2f1f68:	e59f1420 	ldr	r1, [pc, #420]	; 2f2390 <TInterpreter::SlowRun(long)+0x4b0>
        2f1f6c:	e58d1044 	str	r1, [sp, #68]	; fField68
        2f1f70:	e59f141c 	ldr	r1, [pc, #41c]	; 2f2394 <TInterpreter::SlowRun(long)+0x4b4>
        2f1f74:	e58d1040 	str	r1, [sp, #64]	; fField64
        2f1f78:	e59f1418 	ldr	r1, [pc, #418]	; 2f2398 <TInterpreter::SlowRun(long)+0x4b8>
        2f1f7c:	e58d103c 	str	r1, [sp, #60]	; fField60
        2f1f80:	e59f1414 	ldr	r1, [pc, #414]	; 2f239c <TInterpreter::SlowRun(long)+0x4bc>
        2f1f84:	e58d1038 	str	r1, [sp, #56]	; fField56
        2f1f88:	e59f1410 	ldr	r1, [pc, #410]	; 2f23a0 <TInterpreter::SlowRun(long)+0x4c0>
        2f1f8c:	e58d1034 	str	r1, [sp, #52]
        2f1f90:	e59f140c 	ldr	r1, [pc, #40c]	; 2f23a4 <TInterpreter::SlowRun(long)+0x4c4>
        2f1f94:	e58d1030 	str	r1, [sp, #48]
        2f1f98:	e59f1408 	ldr	r1, [pc, #408]	; 2f23a8 <TInterpreter::SlowRun(long)+0x4c8>
        2f1f9c:	e58d102c 	str	r1, [sp, #44]
        2f1fa0:	e59f1404 	ldr	r1, [pc, #404]	; 2f23ac <TInterpreter::SlowRun(long)+0x4cc>
        2f1fa4:	e58d1028 	str	r1, [sp, #40]
        2f1fa8:	e59f1400 	ldr	r1, [pc, #400]	; 2f23b0 <TInterpreter::SlowRun(long)+0x4d0>
        2f1fac:	e58d1024 	str	r1, [sp, #36]	; fField36
        2f1fb0:	e59f13fc 	ldr	r1, [pc, #3fc]	; 2f23b4 <TInterpreter::SlowRun(long)+0x4d4>
        2f1fb4:	e58d1020 	str	r1, [sp, #32]	; fField32
        2f1fb8:	e2801008 	add	r1, r0, #8	; 0x8
        2f1fbc:	e58d101c 	str	r1, [sp, #28]
        2f1fc0:	e59f13f0 	ldr	r1, [pc, #3f0]	; 2f23b8 <TInterpreter::SlowRun(long)+0x4d8>
        2f1fc4:	e58d1018 	str	r1, [sp, #24]
        2f1fc8:	e59f13ec 	ldr	r1, [pc, #3ec]	; 2f23bc <TInterpreter::SlowRun(long)+0x4dc>
        2f1fcc:	e58d1014 	str	r1, [sp, #20]
        2f1fd0:	e2801038 	add	r1, r0, #56	; 0x38
        2f1fd4:	e2805020 	add	r5, r0, #32	; 0x20
        2f1fd8:	e58d1010 	str	r1, [sp, #16]	; fField16
        2f1fdc:	e59d0054 	ldr	r0, [sp, #84]	; fField84
        2f1fe0:	e5d00000 	ldrb	r0, [r0]
        2f1fe4:	e3300000 	teq	r0, #0	; 0x0
        2f1fe8:	11a00004 	movne	r0, r4
        2f1fec:	1b5d8ea5 	blne	1a55a88 <TInterpreter::$HandleBreakPoints(void)>
        2f1ff0:	e59d0050 	ldr	r0, [sp, #80]	; fField80
        2f1ff4:	e5900000 	ldr	r0, [r0]
        2f1ff8:	e5900000 	ldr	r0, [r0]
        2f1ffc:	eb634056 	bl	1bc215c <$BinaryData(long)>
        2f2000:	e5941050 	ldr	r1, [r4, #80]	; fField80
        2f2004:	e0809001 	add	r9, r0, r1
        2f2008:	e5d92000 	ldrb	r2, [r9]
        2f200c:	e2020007 	and	r0, r2, #7	; 0x7
        2f2010:	e1a06000 	mov	r6, r0
        2f2014:	e3300007 	teq	r0, #7	; 0x7
        2f2018:	13a00001 	movne	r0, #1	; 0x1
        2f201c:	03a00003 	moveq	r0, #3	; 0x3
        2f2020:	e0800001 	add	r0, r0, r1
        2f2024:	e5840050 	str	r0, [r4, #80]	; fField80
        2f2028:	e35200cf 	cmp	r2, #207	; 0xcf
        2f202c:	908ff102 	addls	pc, pc, r2, lsl #2
        2f2030:	ea0007eb 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2034:	ea0000e1 	b	2f23c0 <TInterpreter::SlowRun(long)+0x4e0>
        2f2038:	ea0000e4 	b	2f23d0 <TInterpreter::SlowRun(long)+0x4f0>
        2f203c:	ea0000e7 	b	2f23e0 <TInterpreter::SlowRun(long)+0x500>
        2f2040:	ea0000eb 	b	2f23f4 <TInterpreter::SlowRun(long)+0x514>
        2f2044:	ea0000ee 	b	2f2404 <TInterpreter::SlowRun(long)+0x524>
        2f2048:	ea00013a 	b	2f2538 <TInterpreter::SlowRun(long)+0x658>
        2f204c:	ea000142 	b	2f255c <TInterpreter::SlowRun(long)+0x67c>
        2f2050:	ea00014e 	b	2f2590 <TInterpreter::SlowRun(long)+0x6b0>
        2f2054:	ea0007e2 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2058:	ea0007e1 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f205c:	ea0007e0 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2060:	ea0007df 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2064:	ea0007de 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2068:	ea0007dd 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f206c:	ea0007dc 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2070:	ea0007db 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2074:	ea0007da 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2078:	ea0007d9 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f207c:	ea0007d8 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2080:	ea0007d7 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2084:	ea0007d6 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2088:	ea0007d5 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f208c:	ea0007d4 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2090:	ea0007d3 	b	2f3fe4 <TInterpreter::SlowRun(long)+0x2104>
        2f2094:	ea00014f 	b	2f25d8 <TInterpreter::SlowRun(long)+0x6f8>
        2f2098:	ea00014e 	b	2f25d8 <TInterpreter::SlowRun(long)+0x6f8>
        2f209c:	ea00014d 	b	2f25d8 <TInterpreter::SlowRun(long)+0x6f8>
        2f20a0:	ea00014c 	b	2f25d8 <TInterpreter::SlowRun(long)+0x6f8>
        2f20a4:	ea00014b 	b	2f25d8 <TInterpreter::SlowRun(long)+0x6f8>
        2f20a8:	ea00014a 	b	2f25d8 <TInterpreter::SlowRun(long)+0x6f8>
        2f20ac:	ea000149 	b	2f25d8 <TInterpreter::SlowRun(long)+0x6f8>
        2f20b0:	ea000145 	b	2f25cc <TInterpreter::SlowRun(long)+0x6ec>
        2f20b4:	ea00014f 	b	2f25f8 <TInterpreter::SlowRun(long)+0x718>
        2f20b8:	ea00014e 	b	2f25f8 <TInterpreter::SlowRun(long)+0x718>
        2f20bc:	ea00014d 	b	2f25f8 <TInterpreter::SlowRun(long)+0x718>
        2f20c0:	ea00014c 	b	2f25f8 <TInterpreter::SlowRun(long)+0x718>
        2f20c4:	ea00014b 	b	2f25f8 <TInterpreter::SlowRun(long)+0x718>
        2f20c8:	ea00014a 	b	2f25f8 <TInterpreter::SlowRun(long)+0x718>
        2f20cc:	ea000149 	b	2f25f8 <TInterpreter::SlowRun(long)+0x718>
        2f20d0:	ea000143 	b	2f25e4 <TInterpreter::SlowRun(long)+0x704>
        2f20d4:	ea000336 	b	2f2db4 <TInterpreter::SlowRun(long)+0xed4>
        2f20d8:	ea000335 	b	2f2db4 <TInterpreter::SlowRun(long)+0xed4>
        2f20dc:	ea000334 	b	2f2db4 <TInterpreter::SlowRun(long)+0xed4>
        2f20e0:	ea000333 	b	2f2db4 <TInterpreter::SlowRun(long)+0xed4>
        2f20e4:	ea000332 	b	2f2db4 <TInterpreter::SlowRun(long)+0xed4>
        2f20e8:	ea000331 	b	2f2db4 <TInterpreter::SlowRun(long)+0xed4>
        2f20ec:	ea000330 	b	2f2db4 <TInterpreter::SlowRun(long)+0xed4>
        2f20f0:	ea00032c 	b	2f2da8 <TInterpreter::SlowRun(long)+0xec8>
        2f20f4:	ea000356 	b	2f2e54 <TInterpreter::SlowRun(long)+0xf74>
        2f20f8:	ea000355 	b	2f2e54 <TInterpreter::SlowRun(long)+0xf74>
        2f20fc:	ea000354 	b	2f2e54 <TInterpreter::SlowRun(long)+0xf74>
        2f2100:	ea000353 	b	2f2e54 <TInterpreter::SlowRun(long)+0xf74>
        2f2104:	ea000352 	b	2f2e54 <TInterpreter::SlowRun(long)+0xf74>
        2f2108:	ea000351 	b	2f2e54 <TInterpreter::SlowRun(long)+0xf74>
        2f210c:	ea000350 	b	2f2e54 <TInterpreter::SlowRun(long)+0xf74>
        2f2110:	ea00034c 	b	2f2e48 <TInterpreter::SlowRun(long)+0xf68>
        2f2114:	ea00037e 	b	2f2f14 <TInterpreter::SlowRun(long)+0x1034>
        2f2118:	ea00037d 	b	2f2f14 <TInterpreter::SlowRun(long)+0x1034>
        2f211c:	ea00037c 	b	2f2f14 <TInterpreter::SlowRun(long)+0x1034>
        2f2120:	ea00037b 	b	2f2f14 <TInterpreter::SlowRun(long)+0x1034>
        2f2124:	ea00037a 	b	2f2f14 <TInterpreter::SlowRun(long)+0x1034>
        2f2128:	ea000379 	b	2f2f14 <TInterpreter::SlowRun(long)+0x1034>
        2f212c:	ea000378 	b	2f2f14 <TInterpreter::SlowRun(long)+0x1034>
        2f2130:	ea000374 	b	2f2f08 <TInterpreter::SlowRun(long)+0x1028>
        2f2134:	ea0003b5 	b	2f3010 <TInterpreter::SlowRun(long)+0x1130>
        2f2138:	ea0003b4 	b	2f3010 <TInterpreter::SlowRun(long)+0x1130>
        2f213c:	ea0003b3 	b	2f3010 <TInterpreter::SlowRun(long)+0x1130>
        2f2140:	ea0003b2 	b	2f3010 <TInterpreter::SlowRun(long)+0x1130>
        2f2144:	ea0003b1 	b	2f3010 <TInterpreter::SlowRun(long)+0x1130>
        2f2148:	ea0003b0 	b	2f3010 <TInterpreter::SlowRun(long)+0x1130>
        2f214c:	ea0003af 	b	2f3010 <TInterpreter::SlowRun(long)+0x1130>
        2f2150:	ea0003ab 	b	2f3004 <TInterpreter::SlowRun(long)+0x1124>
        2f2154:	ea0003f6 	b	2f3134 <TInterpreter::SlowRun(long)+0x1254>
        2f2158:	ea0003f5 	b	2f3134 <TInterpreter::SlowRun(long)+0x1254>
        2f215c:	ea0003f4 	b	2f3134 <TInterpreter::SlowRun(long)+0x1254>
        2f2160:	ea0003f3 	b	2f3134 <TInterpreter::SlowRun(long)+0x1254>
        2f2164:	ea0003f2 	b	2f3134 <TInterpreter::SlowRun(long)+0x1254>
        2f2168:	ea0003f1 	b	2f3134 <TInterpreter::SlowRun(long)+0x1254>
        2f216c:	ea0003f0 	b	2f3134 <TInterpreter::SlowRun(long)+0x1254>
        2f2170:	ea0003ec 	b	2f3128 <TInterpreter::SlowRun(long)+0x1248>
        2f2174:	ea000424 	b	2f320c <TInterpreter::SlowRun(long)+0x132c>
        2f2178:	ea000423 	b	2f320c <TInterpreter::SlowRun(long)+0x132c>
        2f217c:	ea000422 	b	2f320c <TInterpreter::SlowRun(long)+0x132c>
        2f2180:	ea000421 	b	2f320c <TInterpreter::SlowRun(long)+0x132c>
        2f2184:	ea000420 	b	2f320c <TInterpreter::SlowRun(long)+0x132c>
        2f2188:	ea00041f 	b	2f320c <TInterpreter::SlowRun(long)+0x132c>
        2f218c:	ea00041e 	b	2f320c <TInterpreter::SlowRun(long)+0x132c>
        2f2190:	ea000418 	b	2f31f8 <TInterpreter::SlowRun(long)+0x1318>
        2f2194:	ea000359 	b	2f2f00 <TInterpreter::SlowRun(long)+0x1020>
        2f2198:	ea000358 	b	2f2f00 <TInterpreter::SlowRun(long)+0x1020>
        2f219c:	ea000357 	b	2f2f00 <TInterpreter::SlowRun(long)+0x1020>
        2f21a0:	ea000356 	b	2f2f00 <TInterpreter::SlowRun(long)+0x1020>
        2f21a4:	ea000355 	b	2f2f00 <TInterpreter::SlowRun(long)+0x1020>
        2f21a8:	ea000354 	b	2f2f00 <TInterpreter::SlowRun(long)+0x1020>
        2f21ac:	ea000353 	b	2f2f00 <TInterpreter::SlowRun(long)+0x1020>
        2f21b0:	ea00034f 	b	2f2ef4 <TInterpreter::SlowRun(long)+0x1014>
        2f21b4:	ea00033d 	b	2f2eb0 <TInterpreter::SlowRun(long)+0xfd0>
        2f21b8:	ea00033c 	b	2f2eb0 <TInterpreter::SlowRun(long)+0xfd0>
        2f21bc:	ea00033b 	b	2f2eb0 <TInterpreter::SlowRun(long)+0xfd0>
        2f21c0:	ea00033a 	b	2f2eb0 <TInterpreter::SlowRun(long)+0xfd0>
        2f21c4:	ea000339 	b	2f2eb0 <TInterpreter::SlowRun(long)+0xfd0>
        2f21c8:	ea000338 	b	2f2eb0 <TInterpreter::SlowRun(long)+0xfd0>
        2f21cc:	ea000337 	b	2f2eb0 <TInterpreter::SlowRun(long)+0xfd0>
        2f21d0:	ea000333 	b	2f2ea4 <TInterpreter::SlowRun(long)+0xfc4>
        2f21d4:	ea00033f 	b	2f2ed8 <TInterpreter::SlowRun(long)+0xff8>
        2f21d8:	ea00033e 	b	2f2ed8 <TInterpreter::SlowRun(long)+0xff8>
        2f21dc:	ea00033d 	b	2f2ed8 <TInterpreter::SlowRun(long)+0xff8>
        2f21e0:	ea00033c 	b	2f2ed8 <TInterpreter::SlowRun(long)+0xff8>
        2f21e4:	ea00033b 	b	2f2ed8 <TInterpreter::SlowRun(long)+0xff8>
        2f21e8:	ea00033a 	b	2f2ed8 <TInterpreter::SlowRun(long)+0xff8>
        2f21ec:	ea000339 	b	2f2ed8 <TInterpreter::SlowRun(long)+0xff8>
        2f21f0:	ea000335 	b	2f2ecc <TInterpreter::SlowRun(long)+0xfec>
        2f21f4:	ea000138 	b	2f26dc <TInterpreter::SlowRun(long)+0x7fc>
        2f21f8:	ea000137 	b	2f26dc <TInterpreter::SlowRun(long)+0x7fc>
        2f21fc:	ea000136 	b	2f26dc <TInterpreter::SlowRun(long)+0x7fc>
        2f2200:	ea000135 	b	2f26dc <TInterpreter::SlowRun(long)+0x7fc>
        2f2204:	ea000134 	b	2f26dc <TInterpreter::SlowRun(long)+0x7fc>
        2f2208:	ea000133 	b	2f26dc <TInterpreter::SlowRun(long)+0x7fc>
        2f220c:	ea000132 	b	2f26dc <TInterpreter::SlowRun(long)+0x7fc>
        2f2210:	ea00012e 	b	2f26d0 <TInterpreter::SlowRun(long)+0x7f0>
        2f2214:	ea0000fe 	b	2f2614 <TInterpreter::SlowRun(long)+0x734>
        2f2218:	ea0000fd 	b	2f2614 <TInterpreter::SlowRun(long)+0x734>
        2f221c:	ea0000fc 	b	2f2614 <TInterpreter::SlowRun(long)+0x734>
        2f2220:	ea0000fb 	b	2f2614 <TInterpreter::SlowRun(long)+0x734>
        2f2224:	ea0000fa 	b	2f2614 <TInterpreter::SlowRun(long)+0x734>
        2f2228:	ea0000f9 	b	2f2614 <TInterpreter::SlowRun(long)+0x734>
        2f222c:	ea0000f8 	b	2f2614 <TInterpreter::SlowRun(long)+0x734>
        2f2230:	ea0000f4 	b	2f2608 <TInterpreter::SlowRun(long)+0x728>
        2f2234:	ea000223 	b	2f2ac8 <TInterpreter::SlowRun(long)+0xbe8>
        2f2238:	ea000222 	b	2f2ac8 <TInterpreter::SlowRun(long)+0xbe8>
        2f223c:	ea000221 	b	2f2ac8 <TInterpreter::SlowRun(long)+0xbe8>
        2f2240:	ea000220 	b	2f2ac8 <TInterpreter::SlowRun(long)+0xbe8>
        2f2244:	ea00021f 	b	2f2ac8 <TInterpreter::SlowRun(long)+0xbe8>
        2f2248:	ea00021e 	b	2f2ac8 <TInterpreter::SlowRun(long)+0xbe8>
        2f224c:	ea00021d 	b	2f2ac8 <TInterpreter::SlowRun(long)+0xbe8>
        2f2250:	ea000219 	b	2f2abc <TInterpreter::SlowRun(long)+0xbdc>
        2f2254:	ea0001e7 	b	2f29f8 <TInterpreter::SlowRun(long)+0xb18>
        2f2258:	ea0001e6 	b	2f29f8 <TInterpreter::SlowRun(long)+0xb18>
        2f225c:	ea0001e5 	b	2f29f8 <TInterpreter::SlowRun(long)+0xb18>
        2f2260:	ea0001e4 	b	2f29f8 <TInterpreter::SlowRun(long)+0xb18>
        2f2264:	ea0001e3 	b	2f29f8 <TInterpreter::SlowRun(long)+0xb18>
        2f2268:	ea0001e2 	b	2f29f8 <TInterpreter::SlowRun(long)+0xb18>
        2f226c:	ea0001e1 	b	2f29f8 <TInterpreter::SlowRun(long)+0xb18>
        2f2270:	ea0001db 	b	2f29e4 <TInterpreter::SlowRun(long)+0xb04>
        2f2274:	ea000235 	b	2f2b50 <TInterpreter::SlowRun(long)+0xc70>
        2f2278:	ea000251 	b	2f2bc4 <TInterpreter::SlowRun(long)+0xce4>
        2f227c:	ea000250 	b	2f2bc4 <TInterpreter::SlowRun(long)+0xce4>
        2f2280:	ea00024f 	b	2f2bc4 <TInterpreter::SlowRun(long)+0xce4>
        2f2284:	ea00024e 	b	2f2bc4 <TInterpreter::SlowRun(long)+0xce4>
        2f2288:	ea00024d 	b	2f2bc4 <TInterpreter::SlowRun(long)+0xce4>
        2f228c:	ea00024c 	b	2f2bc4 <TInterpreter::SlowRun(long)+0xce4>
        2f2290:	ea00024b 	b	2f2bc4 <TInterpreter::SlowRun(long)+0xce4>
        2f2294:	ea000267 	b	2f2c38 <TInterpreter::SlowRun(long)+0xd58>
        2f2298:	ea000291 	b	2f2ce4 <TInterpreter::SlowRun(long)+0xe04>
        2f229c:	ea000290 	b	2f2ce4 <TInterpreter::SlowRun(long)+0xe04>
        2f22a0:	ea00028f 	b	2f2ce4 <TInterpreter::SlowRun(long)+0xe04>
        2f22a4:	ea00028e 	b	2f2ce4 <TInterpreter::SlowRun(long)+0xe04>
        2f22a8:	ea00028d 	b	2f2ce4 <TInterpreter::SlowRun(long)+0xe04>
        2f22ac:	ea00028c 	b	2f2ce4 <TInterpreter::SlowRun(long)+0xe04>
        2f22b0:	ea00028b 	b	2f2ce4 <TInterpreter::SlowRun(long)+0xe04>
        2f22b4:	ea0000ee 	b	2f2674 <TInterpreter::SlowRun(long)+0x794>
        2f22b8:	ea0000ed 	b	2f2674 <TInterpreter::SlowRun(long)+0x794>
        2f22bc:	ea0000ec 	b	2f2674 <TInterpreter::SlowRun(long)+0x794>
        2f22c0:	ea0000eb 	b	2f2674 <TInterpreter::SlowRun(long)+0x794>
        2f22c4:	ea0000ea 	b	2f2674 <TInterpreter::SlowRun(long)+0x794>
        2f22c8:	ea0000e9 	b	2f2674 <TInterpreter::SlowRun(long)+0x794>
        2f22cc:	ea0000e8 	b	2f2674 <TInterpreter::SlowRun(long)+0x794>
        2f22d0:	ea0000e4 	b	2f2668 <TInterpreter::SlowRun(long)+0x788>
        2f22d4:	ea000176 	b	2f28b4 <TInterpreter::SlowRun(long)+0x9d4>
        2f22d8:	ea000175 	b	2f28b4 <TInterpreter::SlowRun(long)+0x9d4>
        2f22dc:	ea000174 	b	2f28b4 <TInterpreter::SlowRun(long)+0x9d4>
        2f22e0:	ea000173 	b	2f28b4 <TInterpreter::SlowRun(long)+0x9d4>
        2f22e4:	ea000172 	b	2f28b4 <TInterpreter::SlowRun(long)+0x9d4>
        2f22e8:	ea000171 	b	2f28b4 <TInterpreter::SlowRun(long)+0x9d4>
        2f22ec:	ea000170 	b	2f28b4 <TInterpreter::SlowRun(long)+0x9d4>
        2f22f0:	ea00016c 	b	2f28a8 <TInterpreter::SlowRun(long)+0x9c8>
        2f22f4:	ea000404 	b	2f330c <TInterpreter::SlowRun(long)+0x142c>
        2f22f8:	ea000403 	b	2f330c <TInterpreter::SlowRun(long)+0x142c>
        2f22fc:	ea000402 	b	2f330c <TInterpreter::SlowRun(long)+0x142c>
        2f2300:	ea000401 	b	2f330c <TInterpreter::SlowRun(long)+0x142c>
        2f2304:	ea000400 	b	2f330c <TInterpreter::SlowRun(long)+0x142c>
        2f2308:	ea0003ff 	b	2f330c <TInterpreter::SlowRun(long)+0x142c>
        2f230c:	ea0003fe 	b	2f330c <TInterpreter::SlowRun(long)+0x142c>
        2f2310:	ea0003f8 	b	2f32f8 <TInterpreter::SlowRun(long)+0x1418>
        2f2314:	ea000433 	b	2f33e8 <TInterpreter::SlowRun(long)+0x1508>
        2f2318:	ea000432 	b	2f33e8 <TInterpreter::SlowRun(long)+0x1508>
        2f231c:	ea000431 	b	2f33e8 <TInterpreter::SlowRun(long)+0x1508>
        2f2320:	ea000430 	b	2f33e8 <TInterpreter::SlowRun(long)+0x1508>
        2f2324:	ea00042f 	b	2f33e8 <TInterpreter::SlowRun(long)+0x1508>
        2f2328:	ea00042e 	b	2f33e8 <TInterpreter::SlowRun(long)+0x1508>
        2f232c:	ea00042d 	b	2f33e8 <TInterpreter::SlowRun(long)+0x1508>
        2f2330:	ea000427 	b	2f33d4 <TInterpreter::SlowRun(long)+0x14f4>
        2f2334:	ea000459 	b	2f34a0 <TInterpreter::SlowRun(long)+0x15c0>
        2f2338:	ea000477 	b	2f351c <TInterpreter::SlowRun(long)+0x163c>
        2f233c:	ea000495 	b	2f3598 <TInterpreter::SlowRun(long)+0x16b8>
        2f2340:	ea000504 	b	2f3758 <TInterpreter::SlowRun(long)+0x1878>
        2f2344:	ea0005f7 	b	2f3b28 <TInterpreter::SlowRun(long)+0x1c48>
        2f2348:	ea00064f 	b	2f3c8c <TInterpreter::SlowRun(long)+0x1dac>
        2f234c:	ea00065e 	b	2f3ccc <TInterpreter::SlowRun(long)+0x1dec>
        2f2350:	ea0006b8 	b	2f3e38 <TInterpreter::SlowRun(long)+0x1f58>
        2f2354:	ea0006ce 	b	2f3e94 <TInterpreter::SlowRun(long)+0x1fb4>
        2f2358:	ea0006cd 	b	2f3e94 <TInterpreter::SlowRun(long)+0x1fb4>
        2f235c:	ea0006cc 	b	2f3e94 <TInterpreter::SlowRun(long)+0x1fb4>
        2f2360:	ea0006cb 	b	2f3e94 <TInterpreter::SlowRun(long)+0x1fb4>
        2f2364:	ea0006ca 	b	2f3e94 <TInterpreter::SlowRun(long)+0x1fb4>
        2f2368:	ea0006c9 	b	2f3e94 <TInterpreter::SlowRun(long)+0x1fb4>
        2f236c:	ea0006c8 	b	2f3e94 <TInterpreter::SlowRun(long)+0x1fb4>
        2f2370:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f2374:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f2378:	e5d91001 	ldrb	r1, [r9, #1]
        2f237c:	e1806401 	orr	r6, r0, r1, lsl #8
        2f2380:	ea0006c4 	b	2f3e98 <TInterpreter::SlowRun(long)+0x1fb8>
        2f2384:	0c105458 	ldceq	4, cr5, [r0], -#352
        2f2388:	0c105460 	ldceq	4, cr5, [r0], -#384
        2f238c:	00680158 	rsbeq	r0, r8, r8, asr r1
        2f2390:	0c10544c 	ldceq	4, cr5, [r0], -#304
        2f2394:	00371300 	eoreqs	r1, r7, r0, lsl #6
        2f2398:	006848d0 	ldreqd	r4, [r8], -#128
        2f239c:	006831c0 	rsbeq	r3, r8, r0, asr #3
        2f23a0:	0037130c 	eoreqs	r1, r7, ip, lsl #6
        2f23a4:	00682c90 	streqb	r2, [r8], -#192
        2f23a8:	00684e98 	streqb	r4, [r8], -#232
        2f23ac:	00371304 	eoreqs	r1, r7, r4, lsl #6
        2f23b0:	0c105450 	ldceq	4, cr5, [r0], -#320
        2f23b4:	0c1051f4 	ldfeqs	f5, [r0], -#976
        2f23b8:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2f23bc:	0c10180c 	ldceq	8, cr1, [r0], -#48
        2f23c0:	e1a00005 	mov	r0, r5
        2f23c4:	e5951000 	ldr	r1, [r5]
        2f23c8:	e2411004 	sub	r1, r1, #4	; 0x4
        2f23cc:	ea0001f2 	b	2f2b9c <TInterpreter::SlowRun(long)+0xcbc>
        2f23d0:	e1a02005 	mov	r2, r5
        2f23d4:	e5950000 	ldr	r0, [r5]
        2f23d8:	e5101004 	ldr	r1, [r0, -#4]	; fField4
        2f23dc:	ea0001d8 	b	2f2b44 <TInterpreter::SlowRun(long)+0xc64>
        2f23e0:	e1a00004 	mov	r0, r4
        2f23e4:	e3a01002 	mov	r1, #2	; 0x2
        2f23e8:	eb5d436d 	bl	1a431a4 <TInterpreter::$Return(FramesProfilingKind)>
        2f23ec:	e3a07001 	mov	r7, #1	; 0x1
        2f23f0:	ea000700 	b	2f3ff8 <TInterpreter::SlowRun(long)+0x2118>
        2f23f4:	e1a00005 	mov	r0, r5
        2f23f8:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f23fc:	e5911010 	ldr	r1, [r1, #16]	; fField16
        2f2400:	ea000263 	b	2f2d94 <TInterpreter::SlowRun(long)+0xeb4>
        2f2404:	e5951000 	ldr	r1, [r5]
        2f2408:	e2411004 	sub	r1, r1, #4	; 0x4
        2f240c:	e5851000 	str	r1, [r5]
        2f2410:	e5910000 	ldr	r0, [r1]
        2f2414:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2418:	e5810000 	str	r0, [r1]
        2f241c:	e28d000c 	add	r0, sp, #12	; 0xc
        2f2420:	eb633f51 	bl	1bc216c <$Clone(RefVar const &)>
        2f2424:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2428:	e5810000 	str	r0, [r1]
        2f242c:	eb634bb0 	bl	1bc52f4 <$ObjectPtr(long)>
        2f2430:	e5900018 	ldr	r0, [r0, #24]
        2f2434:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2f2438:	e5810000 	str	r0, [r1]
        2f243c:	e28d0008 	add	r0, sp, #8	; 0x8
        2f2440:	eb633f49 	bl	1bc216c <$Clone(RefVar const &)>
        2f2444:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2f2448:	e5810000 	str	r0, [r1]
        2f244c:	eb634ba8 	bl	1bc52f4 <$ObjectPtr(long)>
        2f2450:	e280600c 	add	r6, r0, #12	; 0xc
        2f2454:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2f2458:	e3300000 	teq	r0, #0	; 0x0
        2f245c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f2460:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f2464:	e5900000 	ldr	r0, [r0]
        2f2468:	e5860000 	str	r0, [r6]
        2f246c:	0a000021 	beq	2f24f8 <TInterpreter::SlowRun(long)+0x618>
        2f2470:	e5960004 	ldr	r0, [r6, #4]	; fField4
        2f2474:	e3300000 	teq	r0, #0	; 0x0
        2f2478:	0a000004 	beq	2f2490 <TInterpreter::SlowRun(long)+0x5b0>
        2f247c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f2480:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2f2484:	e5900000 	ldr	r0, [r0]
        2f2488:	e5860004 	str	r0, [r6, #4]	; fField4
        2f248c:	ea000001 	b	2f2498 <TInterpreter::SlowRun(long)+0x5b8>
        2f2490:	e3a02002 	mov	r2, #2	; 0x2
        2f2494:	e5862004 	str	r2, [r6, #4]	; fField4
        2f2498:	e5960008 	ldr	r0, [r6, #8]	; fField8
        2f249c:	e3300000 	teq	r0, #0	; 0x0
        2f24a0:	0a000004 	beq	2f24b8 <TInterpreter::SlowRun(long)+0x5d8>
        2f24a4:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f24a8:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2f24ac:	e5900000 	ldr	r0, [r0]
        2f24b0:	e5860008 	str	r0, [r6, #8]	; fField8
        2f24b4:	ea000001 	b	2f24c0 <TInterpreter::SlowRun(long)+0x5e0>
        2f24b8:	e3a02002 	mov	r2, #2	; 0x2
        2f24bc:	e5862008 	str	r2, [r6, #8]	; fField8
        2f24c0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2f24c4:	e5900000 	ldr	r0, [r0]
        2f24c8:	eb634b77 	bl	1bc52ac <$Length(long)>
        2f24cc:	e3300003 	teq	r0, #3	; 0x3
        2f24d0:	05960000 	ldreq	r0, [r6]
        2f24d4:	03300002 	teqeq	r0, #2	; 0x2
        2f24d8:	05960004 	ldreq	r0, [r6, #4]	; fField4
        2f24dc:	03300002 	teqeq	r0, #2	; 0x2
        2f24e0:	05b60008 	ldreq	r0, [r6, #8]!	; fField8
        2f24e4:	03300002 	teqeq	r0, #2	; 0x2
        2f24e8:	03a02002 	moveq	r2, #2	; 0x2
        2f24ec:	059d0008 	ldreq	r0, [sp, #8]	; fField8
        2f24f0:	05802000 	streq	r2, [r0]
        2f24f4:	ea000007 	b	2f2518 <TInterpreter::SlowRun(long)+0x638>
        2f24f8:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f24fc:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2f2500:	e5900000 	ldr	r0, [r0]
        2f2504:	e5860004 	str	r0, [r6, #4]	; fField4
        2f2508:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f250c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2f2510:	e5900000 	ldr	r0, [r0]
        2f2514:	e5a60008 	str	r0, [r6, #8]!	; fField8
        2f2518:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2f251c:	e5900000 	ldr	r0, [r0]
        2f2520:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2f2524:	e5916000 	ldr	r6, [r1]
        2f2528:	eb634b71 	bl	1bc52f4 <$ObjectPtr(long)>
        2f252c:	e280000c 	add	r0, r0, #12	; 0xc
        2f2530:	e5a0600c 	str	r6, [r0, #12]!	; fField12
        2f2534:	ea000214 	b	2f2d8c <TInterpreter::SlowRun(long)+0xeac>
        2f2538:	e5951000 	ldr	r1, [r5]
        2f253c:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2540:	e5851000 	str	r1, [r5]
        2f2544:	e5910000 	ldr	r0, [r1]
        2f2548:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f254c:	e5810000 	str	r0, [r1]
        2f2550:	e28d000c 	add	r0, sp, #12	; 0xc
        2f2554:	eb640107 	bl	1bf2978 <$ForEachLoopNext(RefVar const &)>
        2f2558:	ea0006a4 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f255c:	e5951000 	ldr	r1, [r5]
        2f2560:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2564:	e5851000 	str	r1, [r5]
        2f2568:	e5910000 	ldr	r0, [r1]
        2f256c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2570:	e1a06005 	mov	r6, r5
        2f2574:	e5810000 	str	r0, [r1]
        2f2578:	e28d000c 	add	r0, sp, #12	; 0xc
        2f257c:	eb6400fc 	bl	1bf2974 <$ForEachLoopDone(RefVar const &)>
        2f2580:	e3300000 	teq	r0, #0	; 0x0
        2f2584:	03a00002 	moveq	r0, #2	; 0x2
        2f2588:	13a0001a 	movne	r0, #26	; 0x1a
        2f258c:	ea0001a5 	b	2f2c28 <TInterpreter::SlowRun(long)+0xd48>
        2f2590:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f2594:	e5d91001 	ldrb	r1, [r9, #1]
        2f2598:	e1800401 	orr	r0, r0, r1, lsl #8
        2f259c:	e3300007 	teq	r0, #7	; 0x7
        2f25a0:	1a000007 	bne	2f25c4 <TInterpreter::SlowRun(long)+0x6e4>
        2f25a4:	e59d6010 	ldr	r6, [sp, #16]	; fField16
        2f25a8:	e5960000 	ldr	r0, [r6]
        2f25ac:	e5900000 	ldr	r0, [r0]
        2f25b0:	e3a01000 	mov	r1, #0	; 0x0
        2f25b4:	eb634726 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f25b8:	e5961000 	ldr	r1, [r6]
        2f25bc:	e5810000 	str	r0, [r1]
        2f25c0:	ea00068a 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f25c4:	eb5d4723 	bl	1a44258 <$UndefinedBytecode(void)>
        2f25c8:	ea000688 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f25cc:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f25d0:	e5d91001 	ldrb	r1, [r9, #1]
        2f25d4:	e1806401 	orr	r6, r0, r1, lsl #8
        2f25d8:	e1a09005 	mov	r9, r5
        2f25dc:	e59d004c 	ldr	r0, [sp, #76]	; fField76
        2f25e0:	ea000017 	b	2f2644 <TInterpreter::SlowRun(long)+0x764>
        2f25e4:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f25e8:	e5d91001 	ldrb	r1, [r9, #1]
        2f25ec:	e1a01c01 	mov	r1, r1, lsl #24
        2f25f0:	e1a01c41 	mov	r1, r1, asr #24
        2f25f4:	e1806401 	orr	r6, r0, r1, lsl #8
        2f25f8:	e1a00005 	mov	r0, r5
        2f25fc:	e5951000 	ldr	r1, [r5]
        2f2600:	e5816000 	str	r6, [r1]
        2f2604:	ea000163 	b	2f2b98 <TInterpreter::SlowRun(long)+0xcb8>
        2f2608:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f260c:	e5d91001 	ldrb	r1, [r9, #1]
        2f2610:	e1806401 	orr	r6, r0, r1, lsl #8
        2f2614:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2f2618:	e3300000 	teq	r0, #0	; 0x0
        2f261c:	0a000005 	beq	2f2638 <TInterpreter::SlowRun(long)+0x758>
        2f2620:	e1a00005 	mov	r0, r5
        2f2624:	e5942058 	ldr	r2, [r4, #88]	; fField88
        2f2628:	e0822006 	add	r2, r2, r6
        2f262c:	e5951004 	ldr	r1, [r5, #4]	; fField4
        2f2630:	e7911102 	ldr	r1, [r1, r2, lsl #2]	; fField2
        2f2634:	ea0001d7 	b	2f2d98 <TInterpreter::SlowRun(long)+0xeb8>
        2f2638:	e1a09005 	mov	r9, r5
        2f263c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f2640:	e2800008 	add	r0, r0, #8	; 0x8
        2f2644:	e5900000 	ldr	r0, [r0]
        2f2648:	e5900000 	ldr	r0, [r0]
        2f264c:	eb634b28 	bl	1bc52f4 <$ObjectPtr(long)>
        2f2650:	e0800106 	add	r0, r0, r6, lsl #2
        2f2654:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2f2658:	e5991000 	ldr	r1, [r9]
        2f265c:	e4810004 	str	r0, [r1], #4	; fField4
        2f2660:	e5891000 	str	r1, [r9]
        2f2664:	ea000661 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2668:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f266c:	e5d91001 	ldrb	r1, [r9, #1]
        2f2670:	e1806401 	orr	r6, r0, r1, lsl #8
        2f2674:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2f2678:	e3300000 	teq	r0, #0	; 0x0
        2f267c:	0a000008 	beq	2f26a4 <TInterpreter::SlowRun(long)+0x7c4>
        2f2680:	e5941058 	ldr	r1, [r4, #88]	; fField88
        2f2684:	e0812006 	add	r2, r1, r6
        2f2688:	e5953000 	ldr	r3, [r5]
        2f268c:	e2433004 	sub	r3, r3, #4	; 0x4
        2f2690:	e5853000 	str	r3, [r5]
        2f2694:	e5931000 	ldr	r1, [r3]
        2f2698:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2f269c:	e7801102 	str	r1, [r0, r2, lsl #2]	; fField2
        2f26a0:	ea000652 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f26a4:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f26a8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f26ac:	e5900000 	ldr	r0, [r0]
        2f26b0:	e5952000 	ldr	r2, [r5]
        2f26b4:	e2422004 	sub	r2, r2, #4	; 0x4
        2f26b8:	e5852000 	str	r2, [r5]
        2f26bc:	e5929000 	ldr	r9, [r2]
        2f26c0:	eb634b0b 	bl	1bc52f4 <$ObjectPtr(long)>
        2f26c4:	e0800106 	add	r0, r0, r6, lsl #2
        2f26c8:	e5a0900c 	str	r9, [r0, #12]!	; fField12
        2f26cc:	ea000647 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f26d0:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f26d4:	e5d91001 	ldrb	r1, [r9, #1]
        2f26d8:	e1806401 	orr	r6, r0, r1, lsl #8
        2f26dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f26e0:	e59d0050 	ldr	r0, [sp, #80]	; fField80
        2f26e4:	e5900000 	ldr	r0, [r0]
        2f26e8:	e5900000 	ldr	r0, [r0]
        2f26ec:	eb634b00 	bl	1bc52f4 <$ObjectPtr(long)>
        2f26f0:	e0800106 	add	r0, r0, r6, lsl #2
        2f26f4:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2f26f8:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f26fc:	e33a0000 	teq	sl, #0	; 0x0
        2f2700:	e5810000 	str	r0, [r1]
        2f2704:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2f2708:	0a00003a 	beq	2f27f8 <TInterpreter::SlowRun(long)+0x918>
        2f270c:	e3300000 	teq	r0, #0	; 0x0
        2f2710:	0594004c 	ldreq	r0, [r4, #76]	; fField76
        2f2714:	02800008 	addeq	r0, r0, #8	; 0x8
        2f2718:	0a000005 	beq	2f2734 <TInterpreter::SlowRun(long)+0x854>
        2f271c:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f2720:	e2810008 	add	r0, r1, #8	; 0x8
        2f2724:	e5902000 	ldr	r2, [r0]
        2f2728:	e5922000 	ldr	r2, [r2]
        2f272c:	e3320002 	teq	r2, #2	; 0x2
        2f2730:	0a000003 	beq	2f2744 <TInterpreter::SlowRun(long)+0x864>
        2f2734:	e1a0200d 	mov	r2, sp
        2f2738:	e28d1010 	add	r1, sp, #16	; 0x10
        2f273c:	e3a03001 	mov	r3, #1	; 0x1
        2f2740:	ea000009 	b	2f276c <TInterpreter::SlowRun(long)+0x88c>
        2f2744:	e2810010 	add	r0, r1, #16	; 0x10
        2f2748:	e5901000 	ldr	r1, [r0]
        2f274c:	e5911000 	ldr	r1, [r1]
        2f2750:	e3310002 	teq	r1, #2	; 0x2
        2f2754:	03a00000 	moveq	r0, #0	; 0x0
        2f2758:	058d0000 	streq	r0, [sp]
        2f275c:	0a000008 	beq	2f2784 <TInterpreter::SlowRun(long)+0x8a4>
        2f2760:	e1a0200d 	mov	r2, sp
        2f2764:	e28d1010 	add	r1, sp, #16	; 0x10
        2f2768:	e3a03000 	mov	r3, #0	; 0x0
        2f276c:	eb6346c0 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2f2770:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2774:	e5810000 	str	r0, [r1]
        2f2778:	e59d0000 	ldr	r0, [sp]
        2f277c:	e3300000 	teq	r0, #0	; 0x0
        2f2780:	1a00003c 	bne	2f2878 <TInterpreter::SlowRun(long)+0x998>
        2f2784:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f2788:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        2f278c:	e5900000 	ldr	r0, [r0]
        2f2790:	eb633e6d 	bl	1bc214c <$AllocateRefHandle(long)>
        2f2794:	e58d0000 	str	r0, [sp]
        2f2798:	e1a0600d 	mov	r6, sp
        2f279c:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        2f27a0:	e5900000 	ldr	r0, [r0]
        2f27a4:	eb633e68 	bl	1bc214c <$AllocateRefHandle(long)>
        2f27a8:	e58d0004 	str	r0, [sp, #4]	; fField4
        2f27ac:	e28d1004 	add	r1, sp, #4	; 0x4
        2f27b0:	e28d3018 	add	r3, sp, #24	; 0x18
        2f27b4:	e1a02006 	mov	r2, r6
        2f27b8:	e5980000 	ldr	r0, [r8]
        2f27bc:	eb5d991d 	bl	1a58c38 <TInterpreter::$TraceGet(RefVar const &, RefVar const &, RefVar const &)>
        2f27c0:	e59d0000 	ldr	r0, [sp]
        2f27c4:	eb63427c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f27c8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2f27cc:	eb63427a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f27d0:	e59d0018 	ldr	r0, [sp, #24]
        2f27d4:	e28d2008 	add	r2, sp, #8	; 0x8
        2f27d8:	e5901000 	ldr	r1, [r0]
        2f27dc:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        2f27e0:	e5900000 	ldr	r0, [r0]
        2f27e4:	eb5d991a 	bl	1a58c54 <$UnsafeGetFrameSlot__FlT1Pl>
        2f27e8:	e59d1014 	ldr	r1, [sp, #20]
        2f27ec:	e5810000 	str	r0, [r1]
        2f27f0:	e28dd008 	add	sp, sp, #8	; 0x8
        2f27f4:	ea00001f 	b	2f2878 <TInterpreter::SlowRun(long)+0x998>
        2f27f8:	e3300000 	teq	r0, #0	; 0x0
        2f27fc:	0594004c 	ldreq	r0, [r4, #76]	; fField76
        2f2800:	02800008 	addeq	r0, r0, #8	; 0x8
        2f2804:	0a000005 	beq	2f2820 <TInterpreter::SlowRun(long)+0x940>
        2f2808:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f280c:	e2810008 	add	r0, r1, #8	; 0x8
        2f2810:	e5902000 	ldr	r2, [r0]
        2f2814:	e5922000 	ldr	r2, [r2]
        2f2818:	e3320002 	teq	r2, #2	; 0x2
        2f281c:	0a000003 	beq	2f2830 <TInterpreter::SlowRun(long)+0x950>
        2f2820:	e1a0200d 	mov	r2, sp
        2f2824:	e28d1010 	add	r1, sp, #16	; 0x10
        2f2828:	e3a03001 	mov	r3, #1	; 0x1
        2f282c:	ea000003 	b	2f2840 <TInterpreter::SlowRun(long)+0x960>
        2f2830:	e2810010 	add	r0, r1, #16	; 0x10
        2f2834:	e1a0200d 	mov	r2, sp
        2f2838:	e28d1010 	add	r1, sp, #16	; 0x10
        2f283c:	e3a03000 	mov	r3, #0	; 0x0
        2f2840:	eb5d9d14 	bl	1a59c98 <$XGetVariable__FRC6RefVarT1Pli>
        2f2844:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2848:	e5810000 	str	r0, [r1]
        2f284c:	e59d0000 	ldr	r0, [sp]
        2f2850:	e3300000 	teq	r0, #0	; 0x0
        2f2854:	1a000007 	bne	2f2878 <TInterpreter::SlowRun(long)+0x998>
        2f2858:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2f285c:	e1a0200d 	mov	r2, sp
        2f2860:	e5901000 	ldr	r1, [r0]
        2f2864:	e59d0018 	ldr	r0, [sp, #24]
        2f2868:	e5900000 	ldr	r0, [r0]
        2f286c:	eb5d98f8 	bl	1a58c54 <$UnsafeGetFrameSlot__FlT1Pl>
        2f2870:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2874:	e5810000 	str	r0, [r1]
        2f2878:	e59d0000 	ldr	r0, [sp]
        2f287c:	e3300000 	teq	r0, #0	; 0x0
        2f2880:	028d1010 	addeq	r1, sp, #16	; 0x10
        2f2884:	03a00059 	moveq	r0, #89	; 0x59
        2f2888:	02400cbf 	subeq	r0, r0, #48896	; 0xbf00
        2f288c:	0a000256 	beq	2f31ec <TInterpreter::SlowRun(long)+0x130c>
        2f2890:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2894:	e5911000 	ldr	r1, [r1]
        2f2898:	e5952000 	ldr	r2, [r5]
        2f289c:	e4821004 	str	r1, [r2], #4	; fField4
        2f28a0:	e5852000 	str	r2, [r5]
        2f28a4:	ea000251 	b	2f31f0 <TInterpreter::SlowRun(long)+0x1310>
        2f28a8:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f28ac:	e5d91001 	ldrb	r1, [r9, #1]
        2f28b0:	e1806401 	orr	r6, r0, r1, lsl #8
        2f28b4:	e59d004c 	ldr	r0, [sp, #76]	; fField76
        2f28b8:	e5900000 	ldr	r0, [r0]
        2f28bc:	e5900000 	ldr	r0, [r0]
        2f28c0:	eb634a8b 	bl	1bc52f4 <$ObjectPtr(long)>
        2f28c4:	e0800106 	add	r0, r0, r6, lsl #2
        2f28c8:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2f28cc:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f28d0:	e5810000 	str	r0, [r1]
        2f28d4:	e5951000 	ldr	r1, [r5]
        2f28d8:	e2411004 	sub	r1, r1, #4	; 0x4
        2f28dc:	e5851000 	str	r1, [r5]
        2f28e0:	e5910000 	ldr	r0, [r1]
        2f28e4:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2f28e8:	e5810000 	str	r0, [r1]
        2f28ec:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2f28f0:	e3300000 	teq	r0, #0	; 0x0
        2f28f4:	0a000030 	beq	2f29bc <TInterpreter::SlowRun(long)+0xadc>
        2f28f8:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f28fc:	e2810008 	add	r0, r1, #8	; 0x8
        2f2900:	e5902000 	ldr	r2, [r0]
        2f2904:	e5922000 	ldr	r2, [r2]
        2f2908:	e3320002 	teq	r2, #2	; 0x2
        2f290c:	0a00000a 	beq	2f293c <TInterpreter::SlowRun(long)+0xa5c>
        2f2910:	e5911014 	ldr	r1, [r1, #20]
        2f2914:	e5911000 	ldr	r1, [r1]
        2f2918:	e3a0203f 	mov	r2, #63	; 0x3f
        2f291c:	e0021141 	and	r1, r2, r1, asr #2
        2f2920:	e3110002 	tst	r1, #2	; 0x2
        2f2924:	03a03007 	moveq	r3, #7	; 0x7
        2f2928:	13a0300b 	movne	r3, #11	; 0xb
        2f292c:	e28d2008 	add	r2, sp, #8	; 0x8
        2f2930:	e28d100c 	add	r1, sp, #12	; 0xc
        2f2934:	eb5d949a 	bl	1a57ba4 <$SetVariableOrGlobal__FRC6RefVarN21l>
        2f2938:	ea0005ac 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f293c:	e5910014 	ldr	r0, [r1, #20]
        2f2940:	e5900000 	ldr	r0, [r0]
        2f2944:	e3a0203f 	mov	r2, #63	; 0x3f
        2f2948:	e0020140 	and	r0, r2, r0, asr #2
        2f294c:	e3100002 	tst	r0, #2	; 0x2
        2f2950:	03a03002 	moveq	r3, #2	; 0x2
        2f2954:	13a0300a 	movne	r3, #10	; 0xa
        2f2958:	e2810010 	add	r0, r1, #16	; 0x10
        2f295c:	e28d2008 	add	r2, sp, #8	; 0x8
        2f2960:	e28d100c 	add	r1, sp, #12	; 0xc
        2f2964:	eb5d948e 	bl	1a57ba4 <$SetVariableOrGlobal__FRC6RefVarN21l>
        2f2968:	e3300000 	teq	r0, #0	; 0x0
        2f296c:	1a00059f 	bne	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2970:	e59d0048 	ldr	r0, [sp, #72]	; fField72
        2f2974:	eb633dfc 	bl	1bc216c <$Clone(RefVar const &)>
        2f2978:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2f297c:	e5810000 	str	r0, [r1]
        2f2980:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f2984:	e5911010 	ldr	r1, [r1, #16]	; fField16
        2f2988:	e5916000 	ldr	r6, [r1]
        2f298c:	eb634a58 	bl	1bc52f4 <$ObjectPtr(long)>
        2f2990:	e2800004 	add	r0, r0, #4	; 0x4
        2f2994:	e28d2008 	add	r2, sp, #8	; 0x8
        2f2998:	e28d100c 	add	r1, sp, #12	; 0xc
        2f299c:	e5a0600c 	str	r6, [r0, #12]!	; fField12
        2f29a0:	e28d0004 	add	r0, sp, #4	; 0x4
        2f29a4:	eb634e6f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f29a8:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f29ac:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2f29b0:	e5911000 	ldr	r1, [r1]
        2f29b4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f29b8:	ea000077 	b	2f2b9c <TInterpreter::SlowRun(long)+0xcbc>
        2f29bc:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f29c0:	e5901014 	ldr	r1, [r0, #20]
        2f29c4:	e5911000 	ldr	r1, [r1]
        2f29c8:	e3a0203f 	mov	r2, #63	; 0x3f
        2f29cc:	e0021141 	and	r1, r2, r1, asr #2
        2f29d0:	e3110002 	tst	r1, #2	; 0x2
        2f29d4:	03a03007 	moveq	r3, #7	; 0x7
        2f29d8:	13a0300b 	movne	r3, #11	; 0xb
        2f29dc:	e2800008 	add	r0, r0, #8	; 0x8
        2f29e0:	eaffffd1 	b	2f292c <TInterpreter::SlowRun(long)+0xa4c>
        2f29e4:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f29e8:	e5d91001 	ldrb	r1, [r9, #1]
        2f29ec:	e1a01c01 	mov	r1, r1, lsl #24
        2f29f0:	e1a01c41 	mov	r1, r1, asr #24
        2f29f4:	e1806401 	orr	r6, r0, r1, lsl #8
        2f29f8:	e5951000 	ldr	r1, [r5]
        2f29fc:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2a00:	e5851000 	str	r1, [r5]
        2f2a04:	e5910000 	ldr	r0, [r1]
        2f2a08:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2a0c:	e3760001 	cmn	r6, #1	; 0x1
        2f2a10:	e5810000 	str	r0, [r1]
        2f2a14:	1a00000c 	bne	2f2a4c <TInterpreter::SlowRun(long)+0xb6c>
        2f2a18:	e1a06005 	mov	r6, r5
        2f2a1c:	e5951000 	ldr	r1, [r5]
        2f2a20:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2a24:	e5851000 	str	r1, [r5]
        2f2a28:	e5910000 	ldr	r0, [r1]
        2f2a2c:	e3100003 	tst	r0, #3	; 0x3
        2f2a30:	01a00140 	moveq	r0, r0, asr #2
        2f2a34:	0a000000 	beq	2f2a3c <TInterpreter::SlowRun(long)+0xb5c>
        2f2a38:	eb633db7 	bl	1bc211c <$_RINTError(long)>
        2f2a3c:	e1a01000 	mov	r1, r0
        2f2a40:	e28d000c 	add	r0, sp, #12	; 0xc
        2f2a44:	eb633dbb 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2f2a48:	ea000076 	b	2f2c28 <TInterpreter::SlowRun(long)+0xd48>
        2f2a4c:	e1a01006 	mov	r1, r6
        2f2a50:	e28d000c 	add	r0, sp, #12	; 0xc
        2f2a54:	eb633db7 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2f2a58:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2a5c:	e5810000 	str	r0, [r1]
        2f2a60:	eb634a23 	bl	1bc52f4 <$ObjectPtr(long)>
        2f2a64:	e280200c 	add	r2, r0, #12	; 0xc
        2f2a68:	e3a00000 	mov	r0, #0	; 0x0
        2f2a6c:	e3560000 	cmp	r6, #0	; 0x0
        2f2a70:	da000009 	ble	2f2a9c <TInterpreter::SlowRun(long)+0xbbc>
        2f2a74:	e3e0c000 	mvn	ip, #0	; 0x0
        2f2a78:	e0463000 	sub	r3, r6, r0
        2f2a7c:	e2433001 	sub	r3, r3, #1	; 0x1
        2f2a80:	e04c3003 	sub	r3, ip, r3
        2f2a84:	e5951000 	ldr	r1, [r5]
        2f2a88:	e7911103 	ldr	r1, [r1, r3, lsl #2]	; fField2
        2f2a8c:	e7821100 	str	r1, [r2, r0, lsl #2]	; fField2
        2f2a90:	e2800001 	add	r0, r0, #1	; 0x1
        2f2a94:	e1500006 	cmp	r0, r6
        2f2a98:	bafffff6 	blt	2f2a78 <TInterpreter::SlowRun(long)+0xb98>
        2f2a9c:	e5951000 	ldr	r1, [r5]
        2f2aa0:	e0412106 	sub	r2, r1, r6, lsl #2
        2f2aa4:	e5852000 	str	r2, [r5]
        2f2aa8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2f2aac:	e5900000 	ldr	r0, [r0]
        2f2ab0:	e4820004 	str	r0, [r2], #4	; fField4
        2f2ab4:	e5852000 	str	r2, [r5]
        2f2ab8:	ea00054c 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2abc:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f2ac0:	e5d91001 	ldrb	r1, [r9, #1]
        2f2ac4:	e1806401 	orr	r6, r0, r1, lsl #8
        2f2ac8:	e5951000 	ldr	r1, [r5]
        2f2acc:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2ad0:	e5851000 	str	r1, [r5]
        2f2ad4:	e5910000 	ldr	r0, [r1]
        2f2ad8:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2adc:	e5810000 	str	r0, [r1]
        2f2ae0:	e28d000c 	add	r0, sp, #12	; 0xc
        2f2ae4:	eb633d96 	bl	1bc2144 <$AllocateFrameWithMap(RefVar const &)>
        2f2ae8:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2aec:	e5810000 	str	r0, [r1]
        2f2af0:	eb6349ff 	bl	1bc52f4 <$ObjectPtr(long)>
        2f2af4:	e280200c 	add	r2, r0, #12	; 0xc
        2f2af8:	e3a00000 	mov	r0, #0	; 0x0
        2f2afc:	e3560000 	cmp	r6, #0	; 0x0
        2f2b00:	da000009 	ble	2f2b2c <TInterpreter::SlowRun(long)+0xc4c>
        2f2b04:	e3e0c000 	mvn	ip, #0	; 0x0
        2f2b08:	e0463000 	sub	r3, r6, r0
        2f2b0c:	e2433001 	sub	r3, r3, #1	; 0x1
        2f2b10:	e04c3003 	sub	r3, ip, r3
        2f2b14:	e5951000 	ldr	r1, [r5]
        2f2b18:	e7911103 	ldr	r1, [r1, r3, lsl #2]	; fField2
        2f2b1c:	e7821100 	str	r1, [r2, r0, lsl #2]	; fField2
        2f2b20:	e2800001 	add	r0, r0, #1	; 0x1
        2f2b24:	e1500006 	cmp	r0, r6
        2f2b28:	bafffff6 	blt	2f2b08 <TInterpreter::SlowRun(long)+0xc28>
        2f2b2c:	e5950000 	ldr	r0, [r5]
        2f2b30:	e0400106 	sub	r0, r0, r6, lsl #2
        2f2b34:	e5850000 	str	r0, [r5]
        2f2b38:	e1a02005 	mov	r2, r5
        2f2b3c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2b40:	e5911000 	ldr	r1, [r1]
        2f2b44:	e4801004 	str	r1, [r0], #4	; fField4
        2f2b48:	e5820000 	str	r0, [r2]
        2f2b4c:	ea000527 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2b50:	e5951000 	ldr	r1, [r5]
        2f2b54:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2b58:	e5851000 	str	r1, [r5]
        2f2b5c:	e5910000 	ldr	r0, [r1]
        2f2b60:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2b64:	e5810000 	str	r0, [r1]
        2f2b68:	e5951000 	ldr	r1, [r5]
        2f2b6c:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2b70:	e5851000 	str	r1, [r5]
        2f2b74:	e5910000 	ldr	r0, [r1]
        2f2b78:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2f2b7c:	e5810000 	str	r0, [r1]
        2f2b80:	e3300002 	teq	r0, #2	; 0x2
        2f2b84:	1a000006 	bne	2f2ba4 <TInterpreter::SlowRun(long)+0xcc4>
        2f2b88:	e1a00005 	mov	r0, r5
        2f2b8c:	e3a02002 	mov	r2, #2	; 0x2
        2f2b90:	e5951000 	ldr	r1, [r5]
        2f2b94:	e5812000 	str	r2, [r1]
        2f2b98:	e2811004 	add	r1, r1, #4	; 0x4
        2f2b9c:	e5801000 	str	r1, [r0]
        2f2ba0:	ea000512 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2ba4:	e33a0000 	teq	sl, #0	; 0x0
        2f2ba8:	0a00001a 	beq	2f2c18 <TInterpreter::SlowRun(long)+0xd38>
        2f2bac:	e28d300c 	add	r3, sp, #12	; 0xc
        2f2bb0:	e28d2008 	add	r2, sp, #8	; 0x8
        2f2bb4:	e28d1008 	add	r1, sp, #8	; 0x8
        2f2bb8:	e5980000 	ldr	r0, [r8]
        2f2bbc:	eb5d981d 	bl	1a58c38 <TInterpreter::$TraceGet(RefVar const &, RefVar const &, RefVar const &)>
        2f2bc0:	ea000014 	b	2f2c18 <TInterpreter::SlowRun(long)+0xd38>
        2f2bc4:	e5951000 	ldr	r1, [r5]
        2f2bc8:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2bcc:	e5851000 	str	r1, [r5]
        2f2bd0:	e5910000 	ldr	r0, [r1]
        2f2bd4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2bd8:	e5810000 	str	r0, [r1]
        2f2bdc:	e5951000 	ldr	r1, [r5]
        2f2be0:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2be4:	e5851000 	str	r1, [r5]
        2f2be8:	e5910000 	ldr	r0, [r1]
        2f2bec:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2f2bf0:	e5810000 	str	r0, [r1]
        2f2bf4:	e3300002 	teq	r0, #2	; 0x2
        2f2bf8:	1a000004 	bne	2f2c10 <TInterpreter::SlowRun(long)+0xd30>
        2f2bfc:	e28d100c 	add	r1, sp, #12	; 0xc
        2f2c00:	e3a00fed 	mov	r0, #948	; 0x3b4
        2f2c04:	e2400903 	sub	r0, r0, #49152	; 0xc000
        2f2c08:	eb5d4589 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2f2c0c:	ea0004f7 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2c10:	e33a0000 	teq	sl, #0	; 0x0
        2f2c14:	1affffe4 	bne	2f2bac <TInterpreter::SlowRun(long)+0xccc>
        2f2c18:	e1a06005 	mov	r6, r5
        2f2c1c:	e28d100c 	add	r1, sp, #12	; 0xc
        2f2c20:	e28d0008 	add	r0, sp, #8	; 0x8
        2f2c24:	eb63458c 	bl	1bc425c <$GetFramePath__FRC6RefVarT1>
        2f2c28:	e5961000 	ldr	r1, [r6]
        2f2c2c:	e4810004 	str	r0, [r1], #4	; fField4
        2f2c30:	e5861000 	str	r1, [r6]
        2f2c34:	ea0004ed 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2c38:	e5951000 	ldr	r1, [r5]
        2f2c3c:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2c40:	e5851000 	str	r1, [r5]
        2f2c44:	e5910000 	ldr	r0, [r1]
        2f2c48:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2c4c:	e5810000 	str	r0, [r1]
        2f2c50:	e5951000 	ldr	r1, [r5]
        2f2c54:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2c58:	e5851000 	str	r1, [r5]
        2f2c5c:	e5910000 	ldr	r0, [r1]
        2f2c60:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2f2c64:	e5810000 	str	r0, [r1]
        2f2c68:	e5951000 	ldr	r1, [r5]
        2f2c6c:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2c70:	e5851000 	str	r1, [r5]
        2f2c74:	e5910000 	ldr	r0, [r1]
        2f2c78:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2f2c7c:	e33a0000 	teq	sl, #0	; 0x0
        2f2c80:	e5810000 	str	r0, [r1]
        2f2c84:	0a000007 	beq	2f2ca8 <TInterpreter::SlowRun(long)+0xdc8>
        2f2c88:	e28d300c 	add	r3, sp, #12	; 0xc
        2f2c8c:	e92d0008 	stmdb	sp!, {r3}
        2f2c90:	e28d300c 	add	r3, sp, #12	; 0xc
        2f2c94:	e28d2008 	add	r2, sp, #8	; 0x8
        2f2c98:	e28d1008 	add	r1, sp, #8	; 0x8
        2f2c9c:	e5980000 	ldr	r0, [r8]
        2f2ca0:	eb5d97e9 	bl	1a58c4c <TInterpreter::$TraceSet(RefVar const &, RefVar const &, RefVar const &, RefVar const &)>
        2f2ca4:	e28dd004 	add	sp, sp, #4	; 0x4
        2f2ca8:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2f2cac:	e3300000 	teq	r0, #0	; 0x0
        2f2cb0:	0a000006 	beq	2f2cd0 <TInterpreter::SlowRun(long)+0xdf0>
        2f2cb4:	e3590502 	cmp	r9, #8388608	; 0x800000
        2f2cb8:	3a000004 	bcc	2f2cd0 <TInterpreter::SlowRun(long)+0xdf0>
        2f2cbc:	e28d200c 	add	r2, sp, #12	; 0xc
        2f2cc0:	e28d1008 	add	r1, sp, #8	; 0x8
        2f2cc4:	e28d0004 	add	r0, sp, #4	; 0x4
        2f2cc8:	eb634da4 	bl	1bc6360 <$SetFramePath__FRC6RefVarN21>
        2f2ccc:	ea0004c7 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2cd0:	e28d200c 	add	r2, sp, #12	; 0xc
        2f2cd4:	e28d1008 	add	r1, sp, #8	; 0x8
        2f2cd8:	e28d0004 	add	r0, sp, #4	; 0x4
        2f2cdc:	eb5d93ae 	bl	1a57b9c <$SetFramePathFor1XFunctions__FRC6RefVarN21>
        2f2ce0:	ea0004c2 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2ce4:	e5951000 	ldr	r1, [r5]
        2f2ce8:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2cec:	e5851000 	str	r1, [r5]
        2f2cf0:	e5910000 	ldr	r0, [r1]
        2f2cf4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2cf8:	e5810000 	str	r0, [r1]
        2f2cfc:	e5951000 	ldr	r1, [r5]
        2f2d00:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2d04:	e5851000 	str	r1, [r5]
        2f2d08:	e5910000 	ldr	r0, [r1]
        2f2d0c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2f2d10:	e5810000 	str	r0, [r1]
        2f2d14:	e5951000 	ldr	r1, [r5]
        2f2d18:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2d1c:	e5851000 	str	r1, [r5]
        2f2d20:	e5910000 	ldr	r0, [r1]
        2f2d24:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2f2d28:	e33a0000 	teq	sl, #0	; 0x0
        2f2d2c:	e5810000 	str	r0, [r1]
        2f2d30:	0a000007 	beq	2f2d54 <TInterpreter::SlowRun(long)+0xe74>
        2f2d34:	e28d300c 	add	r3, sp, #12	; 0xc
        2f2d38:	e92d0008 	stmdb	sp!, {r3}
        2f2d3c:	e28d300c 	add	r3, sp, #12	; 0xc
        2f2d40:	e28d2008 	add	r2, sp, #8	; 0x8
        2f2d44:	e28d1008 	add	r1, sp, #8	; 0x8
        2f2d48:	e5980000 	ldr	r0, [r8]
        2f2d4c:	eb5d97be 	bl	1a58c4c <TInterpreter::$TraceSet(RefVar const &, RefVar const &, RefVar const &, RefVar const &)>
        2f2d50:	e28dd004 	add	sp, sp, #4	; 0x4
        2f2d54:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2f2d58:	e3300000 	teq	r0, #0	; 0x0
        2f2d5c:	0a000006 	beq	2f2d7c <TInterpreter::SlowRun(long)+0xe9c>
        2f2d60:	e3590502 	cmp	r9, #8388608	; 0x800000
        2f2d64:	3a000004 	bcc	2f2d7c <TInterpreter::SlowRun(long)+0xe9c>
        2f2d68:	e28d200c 	add	r2, sp, #12	; 0xc
        2f2d6c:	e28d1008 	add	r1, sp, #8	; 0x8
        2f2d70:	e28d0004 	add	r0, sp, #4	; 0x4
        2f2d74:	eb634d79 	bl	1bc6360 <$SetFramePath__FRC6RefVarN21>
        2f2d78:	ea000003 	b	2f2d8c <TInterpreter::SlowRun(long)+0xeac>
        2f2d7c:	e28d200c 	add	r2, sp, #12	; 0xc
        2f2d80:	e28d1008 	add	r1, sp, #8	; 0x8
        2f2d84:	e28d0004 	add	r0, sp, #4	; 0x4
        2f2d88:	eb5d9383 	bl	1a57b9c <$SetFramePathFor1XFunctions__FRC6RefVarN21>
        2f2d8c:	e1a00005 	mov	r0, r5
        2f2d90:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2d94:	e5911000 	ldr	r1, [r1]
        2f2d98:	e5902000 	ldr	r2, [r0]
        2f2d9c:	e4821004 	str	r1, [r2], #4	; fField4
        2f2da0:	e5802000 	str	r2, [r0]
        2f2da4:	ea000491 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2da8:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f2dac:	e5d91001 	ldrb	r1, [r9, #1]
        2f2db0:	e1806401 	orr	r6, r0, r1, lsl #8
        2f2db4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f2db8:	e5951000 	ldr	r1, [r5]
        2f2dbc:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2dc0:	e5851000 	str	r1, [r5]
        2f2dc4:	e5910000 	ldr	r0, [r1]
        2f2dc8:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f2dcc:	e5810000 	str	r0, [r1]
        2f2dd0:	e1a01000 	mov	r1, r0
        2f2dd4:	e1a0200d 	mov	r2, sp
        2f2dd8:	e59d0048 	ldr	r0, [sp, #72]	; fField72
        2f2ddc:	e5900000 	ldr	r0, [r0]
        2f2de0:	eb5d979b 	bl	1a58c54 <$UnsafeGetFrameSlot__FlT1Pl>
        2f2de4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2de8:	e5810000 	str	r0, [r1]
        2f2dec:	e59d0000 	ldr	r0, [sp]
        2f2df0:	e3300000 	teq	r0, #0	; 0x0
        2f2df4:	028d1010 	addeq	r1, sp, #16	; 0x10
        2f2df8:	03a00f56 	moveq	r0, #344	; 0x158
        2f2dfc:	02400903 	subeq	r0, r0, #49152	; 0xc000
        2f2e00:	0a0000f9 	beq	2f31ec <TInterpreter::SlowRun(long)+0x130c>
        2f2e04:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f2e08:	e3300000 	teq	r0, #0	; 0x0
        2f2e0c:	0a000003 	beq	2f2e20 <TInterpreter::SlowRun(long)+0xf40>
        2f2e10:	e1a02006 	mov	r2, r6
        2f2e14:	e28d1010 	add	r1, sp, #16	; 0x10
        2f2e18:	e1a00004 	mov	r0, r4
        2f2e1c:	eb5d9784 	bl	1a58c34 <TInterpreter::$TraceCall(RefVar const &, long)>
        2f2e20:	e1a02006 	mov	r2, r6
        2f2e24:	e28d100c 	add	r1, sp, #12	; 0xc
        2f2e28:	e1a00004 	mov	r0, r4
        2f2e2c:	eb63f272 	bl	1bef7fc <TInterpreter::$Call(RefVar const &, long)>
        2f2e30:	e3300000 	teq	r0, #0	; 0x0
        2f2e34:	1a000001 	bne	2f2e40 <TInterpreter::SlowRun(long)+0xf60>
        2f2e38:	e3a07001 	mov	r7, #1	; 0x1
        2f2e3c:	ea0000eb 	b	2f31f0 <TInterpreter::SlowRun(long)+0x1310>
        2f2e40:	e3a07000 	mov	r7, #0	; 0x0
        2f2e44:	ea0000e9 	b	2f31f0 <TInterpreter::SlowRun(long)+0x1310>
        2f2e48:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f2e4c:	e5d91001 	ldrb	r1, [r9, #1]
        2f2e50:	e1806401 	orr	r6, r0, r1, lsl #8
        2f2e54:	e5951000 	ldr	r1, [r5]
        2f2e58:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2e5c:	e5851000 	str	r1, [r5]
        2f2e60:	e5910000 	ldr	r0, [r1]
        2f2e64:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2e68:	e5810000 	str	r0, [r1]
        2f2e6c:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f2e70:	e3300000 	teq	r0, #0	; 0x0
        2f2e74:	0a000003 	beq	2f2e88 <TInterpreter::SlowRun(long)+0xfa8>
        2f2e78:	e1a02006 	mov	r2, r6
        2f2e7c:	e28d100c 	add	r1, sp, #12	; 0xc
        2f2e80:	e1a00004 	mov	r0, r4
        2f2e84:	eb5d44ee 	bl	1a44244 <TInterpreter::$TraceApply(RefVar const &, long)>
        2f2e88:	e1a02006 	mov	r2, r6
        2f2e8c:	e28d100c 	add	r1, sp, #12	; 0xc
        2f2e90:	e1a00004 	mov	r0, r4
        2f2e94:	eb63f258 	bl	1bef7fc <TInterpreter::$Call(RefVar const &, long)>
        2f2e98:	e3300000 	teq	r0, #0	; 0x0
        2f2e9c:	1a000093 	bne	2f30f0 <TInterpreter::SlowRun(long)+0x1210>
        2f2ea0:	ea000090 	b	2f30e8 <TInterpreter::SlowRun(long)+0x1208>
        2f2ea4:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f2ea8:	e5d91001 	ldrb	r1, [r9, #1]
        2f2eac:	e1806401 	orr	r6, r0, r1, lsl #8
        2f2eb0:	e5951000 	ldr	r1, [r5]
        2f2eb4:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2eb8:	e5851000 	str	r1, [r5]
        2f2ebc:	e5910000 	ldr	r0, [r1]
        2f2ec0:	e3300002 	teq	r0, #2	; 0x2
        2f2ec4:	0a000449 	beq	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2ec8:	ea00000c 	b	2f2f00 <TInterpreter::SlowRun(long)+0x1020>
        2f2ecc:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f2ed0:	e5d91001 	ldrb	r1, [r9, #1]
        2f2ed4:	e1806401 	orr	r6, r0, r1, lsl #8
        2f2ed8:	e5951000 	ldr	r1, [r5]
        2f2edc:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2ee0:	e5851000 	str	r1, [r5]
        2f2ee4:	e5910000 	ldr	r0, [r1]
        2f2ee8:	e3300002 	teq	r0, #2	; 0x2
        2f2eec:	1a00043f 	bne	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2ef0:	ea000002 	b	2f2f00 <TInterpreter::SlowRun(long)+0x1020>
        2f2ef4:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f2ef8:	e5d91001 	ldrb	r1, [r9, #1]
        2f2efc:	e1806401 	orr	r6, r0, r1, lsl #8
        2f2f00:	e5846050 	str	r6, [r4, #80]	; fField80
        2f2f04:	ea000439 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f2f08:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f2f0c:	e5d91001 	ldrb	r1, [r9, #1]
        2f2f10:	e1806401 	orr	r6, r0, r1, lsl #8
        2f2f14:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f2f18:	e3300000 	teq	r0, #0	; 0x0
        2f2f1c:	0a000015 	beq	2f2f78 <TInterpreter::SlowRun(long)+0x1098>
        2f2f20:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f2f24:	e3a03002 	mov	r3, #2	; 0x2
        2f2f28:	e92d0008 	stmdb	sp!, {r3}
        2f2f2c:	e5950000 	ldr	r0, [r5]
        2f2f30:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        2f2f34:	eb633c84 	bl	1bc214c <$AllocateRefHandle(long)>
        2f2f38:	e58d0004 	str	r0, [sp, #4]	; fField4
        2f2f3c:	e28d9004 	add	r9, sp, #4	; 0x4
        2f2f40:	e5950000 	ldr	r0, [r5]
        2f2f44:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        2f2f48:	eb633c7f 	bl	1bc214c <$AllocateRefHandle(long)>
        2f2f4c:	e58d0008 	str	r0, [sp, #8]	; fField8
        2f2f50:	e28d1008 	add	r1, sp, #8	; 0x8
        2f2f54:	e1a03006 	mov	r3, r6
        2f2f58:	e1a00004 	mov	r0, r4
        2f2f5c:	e1a02009 	mov	r2, r9
        2f2f60:	eb5d9737 	bl	1a58c44 <TInterpreter::$TraceSend(RefVar const &, RefVar const &, long, long)>
        2f2f64:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2f2f68:	eb634093 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f2f6c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2f2f70:	eb634091 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f2f74:	e28dd008 	add	sp, sp, #8	; 0x8
        2f2f78:	e5951000 	ldr	r1, [r5]
        2f2f7c:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2f80:	e5851000 	str	r1, [r5]
        2f2f84:	e5910000 	ldr	r0, [r1]
        2f2f88:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f2f8c:	e5810000 	str	r0, [r1]
        2f2f90:	e5951000 	ldr	r1, [r5]
        2f2f94:	e2411004 	sub	r1, r1, #4	; 0x4
        2f2f98:	e5851000 	str	r1, [r5]
        2f2f9c:	e5910000 	ldr	r0, [r1]
        2f2fa0:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2f2fa4:	e1a0300d 	mov	r3, sp
        2f2fa8:	e28d2004 	add	r2, sp, #4	; 0x4
        2f2fac:	e5810000 	str	r0, [r1]
        2f2fb0:	e28d100c 	add	r1, sp, #12	; 0xc
        2f2fb4:	e28d0008 	add	r0, sp, #8	; 0x8
        2f2fb8:	eb5d9b34 	bl	1a59c90 <$XFindImplementor__FRC6RefVarT1P6RefVarT3>
        2f2fbc:	e3300000 	teq	r0, #0	; 0x0
        2f2fc0:	0a00000a 	beq	2f2ff0 <TInterpreter::SlowRun(long)+0x1110>
        2f2fc4:	e1a03006 	mov	r3, r6
        2f2fc8:	e92d0008 	stmdb	sp!, {r3}
        2f2fcc:	e28d3004 	add	r3, sp, #4	; 0x4
        2f2fd0:	e28d2008 	add	r2, sp, #8	; 0x8
        2f2fd4:	e28d100c 	add	r1, sp, #12	; 0xc
        2f2fd8:	e1a00004 	mov	r0, r4
        2f2fdc:	eb63f607 	bl	1bf0800 <TInterpreter::$Send(RefVar const &, RefVar const &, RefVar const &, long)>
        2f2fe0:	e28dd004 	add	sp, sp, #4	; 0x4
        2f2fe4:	e3300000 	teq	r0, #0	; 0x0
        2f2fe8:	1a000040 	bne	2f30f0 <TInterpreter::SlowRun(long)+0x1210>
        2f2fec:	ea00003d 	b	2f30e8 <TInterpreter::SlowRun(long)+0x1208>
        2f2ff0:	e28d100c 	add	r1, sp, #12	; 0xc
        2f2ff4:	e59f0004 	ldr	r0, [pc, #4]	; 2f3000 <TInterpreter::SlowRun(long)+0x1120>	; fField4
        2f2ff8:	eb5d448e 	bl	1a44238 <$ThrowExInterpreterWithSymbol(long, RefVar const &)>
        2f2ffc:	ea0003fb 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f3000:	ffff4157 	swinv	0x00ff4157
        2f3004:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f3008:	e5d91001 	ldrb	r1, [r9, #1]
        2f300c:	e1806401 	orr	r6, r0, r1, lsl #8
        2f3010:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3014:	e3300000 	teq	r0, #0	; 0x0
        2f3018:	0a000015 	beq	2f3074 <TInterpreter::SlowRun(long)+0x1194>
        2f301c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f3020:	e3a03002 	mov	r3, #2	; 0x2
        2f3024:	e92d0008 	stmdb	sp!, {r3}
        2f3028:	e5950000 	ldr	r0, [r5]
        2f302c:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        2f3030:	eb633c45 	bl	1bc214c <$AllocateRefHandle(long)>
        2f3034:	e58d0004 	str	r0, [sp, #4]	; fField4
        2f3038:	e28d9004 	add	r9, sp, #4	; 0x4
        2f303c:	e5950000 	ldr	r0, [r5]
        2f3040:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        2f3044:	eb633c40 	bl	1bc214c <$AllocateRefHandle(long)>
        2f3048:	e58d0008 	str	r0, [sp, #8]	; fField8
        2f304c:	e28d1008 	add	r1, sp, #8	; 0x8
        2f3050:	e1a03006 	mov	r3, r6
        2f3054:	e1a00004 	mov	r0, r4
        2f3058:	e1a02009 	mov	r2, r9
        2f305c:	eb5d96f8 	bl	1a58c44 <TInterpreter::$TraceSend(RefVar const &, RefVar const &, long, long)>
        2f3060:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2f3064:	eb634054 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f3068:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2f306c:	eb634052 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f3070:	e28dd008 	add	sp, sp, #8	; 0x8
        2f3074:	e5951000 	ldr	r1, [r5]
        2f3078:	e2411004 	sub	r1, r1, #4	; 0x4
        2f307c:	e5851000 	str	r1, [r5]
        2f3080:	e5910000 	ldr	r0, [r1]
        2f3084:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f3088:	e5810000 	str	r0, [r1]
        2f308c:	e5951000 	ldr	r1, [r5]
        2f3090:	e2411004 	sub	r1, r1, #4	; 0x4
        2f3094:	e5851000 	str	r1, [r5]
        2f3098:	e5910000 	ldr	r0, [r1]
        2f309c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2f30a0:	e1a0300d 	mov	r3, sp
        2f30a4:	e28d2004 	add	r2, sp, #4	; 0x4
        2f30a8:	e5810000 	str	r0, [r1]
        2f30ac:	e28d100c 	add	r1, sp, #12	; 0xc
        2f30b0:	e28d0008 	add	r0, sp, #8	; 0x8
        2f30b4:	eb5d9af5 	bl	1a59c90 <$XFindImplementor__FRC6RefVarT1P6RefVarT3>
        2f30b8:	e3300000 	teq	r0, #0	; 0x0
        2f30bc:	0a00000d 	beq	2f30f8 <TInterpreter::SlowRun(long)+0x1218>
        2f30c0:	e1a03006 	mov	r3, r6
        2f30c4:	e92d0008 	stmdb	sp!, {r3}
        2f30c8:	e28d3004 	add	r3, sp, #4	; 0x4
        2f30cc:	e28d2008 	add	r2, sp, #8	; 0x8
        2f30d0:	e28d100c 	add	r1, sp, #12	; 0xc
        2f30d4:	e1a00004 	mov	r0, r4
        2f30d8:	eb63f5c8 	bl	1bf0800 <TInterpreter::$Send(RefVar const &, RefVar const &, RefVar const &, long)>
        2f30dc:	e28dd004 	add	sp, sp, #4	; 0x4
        2f30e0:	e3300000 	teq	r0, #0	; 0x0
        2f30e4:	1a000001 	bne	2f30f0 <TInterpreter::SlowRun(long)+0x1210>
        2f30e8:	e3a07001 	mov	r7, #1	; 0x1
        2f30ec:	ea0003bf 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f30f0:	e3a07000 	mov	r7, #0	; 0x0
        2f30f4:	ea0003bd 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f30f8:	e5951000 	ldr	r1, [r5]
        2f30fc:	e0411106 	sub	r1, r1, r6, lsl #2
        2f3100:	e5851000 	str	r1, [r5]
        2f3104:	e1a00001 	mov	r0, r1
        2f3108:	e3a02002 	mov	r2, #2	; 0x2
        2f310c:	e4802004 	str	r2, [r0], #4	; fField4
        2f3110:	e5850000 	str	r0, [r5]
        2f3114:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3118:	e3300000 	teq	r0, #0	; 0x0
        2f311c:	11a00004 	movne	r0, r4
        2f3120:	1b5d444a 	blne	1a44250 <TInterpreter::$TraceReturn(void)>
        2f3124:	ea0003b1 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f3128:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f312c:	e5d91001 	ldrb	r1, [r9, #1]
        2f3130:	e1806401 	orr	r6, r0, r1, lsl #8
        2f3134:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f3138:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f313c:	e3300000 	teq	r0, #0	; 0x0
        2f3140:	0a00000d 	beq	2f317c <TInterpreter::SlowRun(long)+0x129c>
        2f3144:	e3a03001 	mov	r3, #1	; 0x1
        2f3148:	e92d0008 	stmdb	sp!, {r3}
        2f314c:	e5950000 	ldr	r0, [r5]
        2f3150:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        2f3154:	eb633bfc 	bl	1bc214c <$AllocateRefHandle(long)>
        2f3158:	e58d0004 	str	r0, [sp, #4]	; fField4
        2f315c:	e28d2004 	add	r2, sp, #4	; 0x4
        2f3160:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f3164:	e2801010 	add	r1, r0, #16	; 0x10
        2f3168:	e1a03006 	mov	r3, r6
        2f316c:	e1a00004 	mov	r0, r4
        2f3170:	eb5d96b3 	bl	1a58c44 <TInterpreter::$TraceSend(RefVar const &, RefVar const &, long, long)>
        2f3174:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2f3178:	eb63400f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f317c:	e5951000 	ldr	r1, [r5]
        2f3180:	e2411004 	sub	r1, r1, #4	; 0x4
        2f3184:	e5851000 	str	r1, [r5]
        2f3188:	e5910000 	ldr	r0, [r1]
        2f318c:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f3190:	e5810000 	str	r0, [r1]
        2f3194:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f3198:	e280000c 	add	r0, r0, #12	; 0xc
        2f319c:	e28d3008 	add	r3, sp, #8	; 0x8
        2f31a0:	e28d200c 	add	r2, sp, #12	; 0xc
        2f31a4:	e28d1010 	add	r1, sp, #16	; 0x10
        2f31a8:	eb5d9ab9 	bl	1a59c94 <$XFindProtoImplementor__FRC6RefVarT1P6RefVarT3>
        2f31ac:	e3300000 	teq	r0, #0	; 0x0
        2f31b0:	0a00000b 	beq	2f31e4 <TInterpreter::SlowRun(long)+0x1304>
        2f31b4:	e1a03006 	mov	r3, r6
        2f31b8:	e92d0008 	stmdb	sp!, {r3}
        2f31bc:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f31c0:	e2801010 	add	r1, r0, #16	; 0x10
        2f31c4:	e28d300c 	add	r3, sp, #12	; 0xc
        2f31c8:	e28d2010 	add	r2, sp, #16	; 0x10
        2f31cc:	e1a00004 	mov	r0, r4
        2f31d0:	eb63f58a 	bl	1bf0800 <TInterpreter::$Send(RefVar const &, RefVar const &, RefVar const &, long)>
        2f31d4:	e28dd004 	add	sp, sp, #4	; 0x4
        2f31d8:	e3300000 	teq	r0, #0	; 0x0
        2f31dc:	1affff17 	bne	2f2e40 <TInterpreter::SlowRun(long)+0xf60>
        2f31e0:	eaffff14 	b	2f2e38 <TInterpreter::SlowRun(long)+0xf58>
        2f31e4:	e28d1010 	add	r1, sp, #16	; 0x10
        2f31e8:	e51f01f0 	ldr	r0, [pc, #fffffe10]	; 2f3000 <TInterpreter::SlowRun(long)+0x1120>
        2f31ec:	eb5d4411 	bl	1a44238 <$ThrowExInterpreterWithSymbol(long, RefVar const &)>
        2f31f0:	e28dd004 	add	sp, sp, #4	; 0x4
        2f31f4:	ea00037d 	b	2f3ff0 <TInterpreter::SlowRun(long)+0x2110>
        2f31f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f31fc:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f3200:	e5d91001 	ldrb	r1, [r9, #1]
        2f3204:	e1806401 	orr	r6, r0, r1, lsl #8
        2f3208:	ea000000 	b	2f3210 <TInterpreter::SlowRun(long)+0x1330>
        2f320c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f3210:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f3214:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3218:	e3300000 	teq	r0, #0	; 0x0
        2f321c:	0a00000d 	beq	2f3258 <TInterpreter::SlowRun(long)+0x1378>
        2f3220:	e3a03001 	mov	r3, #1	; 0x1
        2f3224:	e92d0008 	stmdb	sp!, {r3}
        2f3228:	e5950000 	ldr	r0, [r5]
        2f322c:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        2f3230:	eb633bc5 	bl	1bc214c <$AllocateRefHandle(long)>
        2f3234:	e58d0004 	str	r0, [sp, #4]	; fField4
        2f3238:	e28d2004 	add	r2, sp, #4	; 0x4
        2f323c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f3240:	e2801010 	add	r1, r0, #16	; 0x10
        2f3244:	e1a03006 	mov	r3, r6
        2f3248:	e1a00004 	mov	r0, r4
        2f324c:	eb5d967c 	bl	1a58c44 <TInterpreter::$TraceSend(RefVar const &, RefVar const &, long, long)>
        2f3250:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2f3254:	eb633fd8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f3258:	e5951000 	ldr	r1, [r5]
        2f325c:	e2411004 	sub	r1, r1, #4	; 0x4
        2f3260:	e5851000 	str	r1, [r5]
        2f3264:	e5910000 	ldr	r0, [r1]
        2f3268:	e59d1014 	ldr	r1, [sp, #20]
        2f326c:	e5810000 	str	r0, [r1]
        2f3270:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f3274:	e280000c 	add	r0, r0, #12	; 0xc
        2f3278:	e28d300c 	add	r3, sp, #12	; 0xc
        2f327c:	e28d2010 	add	r2, sp, #16	; 0x10
        2f3280:	e28d1014 	add	r1, sp, #20	; 0x14
        2f3284:	eb5d9a82 	bl	1a59c94 <$XFindProtoImplementor__FRC6RefVarT1P6RefVarT3>
        2f3288:	e3300000 	teq	r0, #0	; 0x0
        2f328c:	0a00000c 	beq	2f32c4 <TInterpreter::SlowRun(long)+0x13e4>
        2f3290:	e1a03006 	mov	r3, r6
        2f3294:	e92d0008 	stmdb	sp!, {r3}
        2f3298:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f329c:	e2801010 	add	r1, r0, #16	; 0x10
        2f32a0:	e28d3010 	add	r3, sp, #16	; 0x10
        2f32a4:	e28d2014 	add	r2, sp, #20	; 0x14
        2f32a8:	e1a00004 	mov	r0, r4
        2f32ac:	eb63f553 	bl	1bf0800 <TInterpreter::$Send(RefVar const &, RefVar const &, RefVar const &, long)>
        2f32b0:	e28dd004 	add	sp, sp, #4	; 0x4
        2f32b4:	e3300000 	teq	r0, #0	; 0x0
        2f32b8:	13a07000 	movne	r7, #0	; 0x0
        2f32bc:	03a07001 	moveq	r7, #1	; 0x1
        2f32c0:	ea000349 	b	2f3fec <TInterpreter::SlowRun(long)+0x210c>
        2f32c4:	e5951000 	ldr	r1, [r5]
        2f32c8:	e0411106 	sub	r1, r1, r6, lsl #2
        2f32cc:	e5851000 	str	r1, [r5]
        2f32d0:	e1a00001 	mov	r0, r1
        2f32d4:	e3a02002 	mov	r2, #2	; 0x2
        2f32d8:	e4802004 	str	r2, [r0], #4	; fField4
        2f32dc:	e5850000 	str	r0, [r5]
        2f32e0:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f32e4:	e3300000 	teq	r0, #0	; 0x0
        2f32e8:	0a00033f 	beq	2f3fec <TInterpreter::SlowRun(long)+0x210c>
        2f32ec:	e1a00004 	mov	r0, r4
        2f32f0:	eb5d43d6 	bl	1a44250 <TInterpreter::$TraceReturn(void)>
        2f32f4:	ea00033c 	b	2f3fec <TInterpreter::SlowRun(long)+0x210c>
        2f32f8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f32fc:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f3300:	e5d91001 	ldrb	r1, [r9, #1]
        2f3304:	e1806401 	orr	r6, r0, r1, lsl #8
        2f3308:	ea000000 	b	2f3310 <TInterpreter::SlowRun(long)+0x1430>
        2f330c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f3310:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2f3314:	e3300000 	teq	r0, #0	; 0x0
        2f3318:	0a000004 	beq	2f3330 <TInterpreter::SlowRun(long)+0x1450>
        2f331c:	e5940058 	ldr	r0, [r4, #88]	; fField88
        2f3320:	e0800006 	add	r0, r0, r6
        2f3324:	e5951004 	ldr	r1, [r5, #4]	; fField4
        2f3328:	e7919100 	ldr	r9, [r1, r0, lsl #2]	; fField2
        2f332c:	ea000005 	b	2f3348 <TInterpreter::SlowRun(long)+0x1468>
        2f3330:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f3334:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f3338:	e5900000 	ldr	r0, [r0]
        2f333c:	eb6347ec 	bl	1bc52f4 <$ObjectPtr(long)>
        2f3340:	e0800106 	add	r0, r0, r6, lsl #2
        2f3344:	e5b0900c 	ldr	r9, [r0, #12]!	; fField12
        2f3348:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f334c:	e5950000 	ldr	r0, [r5]
        2f3350:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        2f3354:	e58d0000 	str	r0, [sp]
        2f3358:	e1890000 	orr	r0, r9, r0
        2f335c:	e3100003 	tst	r0, #3	; 0x3
        2f3360:	0a000006 	beq	2f3380 <TInterpreter::SlowRun(long)+0x14a0>
        2f3364:	e3190003 	tst	r9, #3	; 0x3
        2f3368:	11a00009 	movne	r0, r9
        2f336c:	1b633b6a 	blne	1bc211c <$_RINTError(long)>
        2f3370:	e59d0000 	ldr	r0, [sp]
        2f3374:	e3100003 	tst	r0, #3	; 0x3
        2f3378:	159d0000 	ldrne	r0, [sp]
        2f337c:	1b633b66 	blne	1bc211c <$_RINTError(long)>
        2f3380:	e59d0000 	ldr	r0, [sp]
        2f3384:	e0899000 	add	r9, r9, r0
        2f3388:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2f338c:	e3300000 	teq	r0, #0	; 0x0
        2f3390:	0a000004 	beq	2f33a8 <TInterpreter::SlowRun(long)+0x14c8>
        2f3394:	e5941058 	ldr	r1, [r4, #88]	; fField88
        2f3398:	e0811006 	add	r1, r1, r6
        2f339c:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2f33a0:	e7809101 	str	r9, [r0, r1, lsl #2]	; fField2
        2f33a4:	ea000005 	b	2f33c0 <TInterpreter::SlowRun(long)+0x14e0>
        2f33a8:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f33ac:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f33b0:	e5900000 	ldr	r0, [r0]
        2f33b4:	eb6347ce 	bl	1bc52f4 <$ObjectPtr(long)>
        2f33b8:	e0800106 	add	r0, r0, r6, lsl #2
        2f33bc:	e5a0900c 	str	r9, [r0, #12]!	; fField12
        2f33c0:	e5951000 	ldr	r1, [r5]
        2f33c4:	e4819004 	str	r9, [r1], #4	; fField4
        2f33c8:	e5851000 	str	r1, [r5]
        2f33cc:	e28dd004 	add	sp, sp, #4	; 0x4
        2f33d0:	ea000305 	b	2f3fec <TInterpreter::SlowRun(long)+0x210c>
        2f33d4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f33d8:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f33dc:	e5d91001 	ldrb	r1, [r9, #1]
        2f33e0:	e1806401 	orr	r6, r0, r1, lsl #8
        2f33e4:	ea000000 	b	2f33ec <TInterpreter::SlowRun(long)+0x150c>
        2f33e8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f33ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f33f0:	e5950000 	ldr	r0, [r5]
        2f33f4:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        2f33f8:	e3100003 	tst	r0, #3	; 0x3
        2f33fc:	01a00140 	moveq	r0, r0, asr #2
        2f3400:	0a000000 	beq	2f3408 <TInterpreter::SlowRun(long)+0x1528>
        2f3404:	eb633b44 	bl	1bc211c <$_RINTError(long)>
        2f3408:	e1a09000 	mov	r9, r0
        2f340c:	e5950000 	ldr	r0, [r5]
        2f3410:	e5100008 	ldr	r0, [r0, -#8]	; fField8
        2f3414:	e3100003 	tst	r0, #3	; 0x3
        2f3418:	01a00140 	moveq	r0, r0, asr #2
        2f341c:	0a000000 	beq	2f3424 <TInterpreter::SlowRun(long)+0x1544>
        2f3420:	eb633b3d 	bl	1bc211c <$_RINTError(long)>
        2f3424:	e58d0000 	str	r0, [sp]
        2f3428:	e5950000 	ldr	r0, [r5]
        2f342c:	e510000c 	ldr	r0, [r0, -#12]	; fField12
        2f3430:	e3100003 	tst	r0, #3	; 0x3
        2f3434:	01a00140 	moveq	r0, r0, asr #2
        2f3438:	0a000000 	beq	2f3440 <TInterpreter::SlowRun(long)+0x1560>
        2f343c:	eb633b36 	bl	1bc211c <$_RINTError(long)>
        2f3440:	e5952000 	ldr	r2, [r5]
        2f3444:	e242200c 	sub	r2, r2, #12	; 0xc
        2f3448:	e3500000 	cmp	r0, #0	; 0x0
        2f344c:	e5852000 	str	r2, [r5]
        2f3450:	da000002 	ble	2f3460 <TInterpreter::SlowRun(long)+0x1580>
        2f3454:	e59d1000 	ldr	r1, [sp]
        2f3458:	e1510009 	cmp	r1, r9
        2f345c:	da000004 	ble	2f3474 <TInterpreter::SlowRun(long)+0x1594>
        2f3460:	e3500000 	cmp	r0, #0	; 0x0
        2f3464:	aa000004 	bge	2f347c <TInterpreter::SlowRun(long)+0x159c>
        2f3468:	e59d1000 	ldr	r1, [sp]
        2f346c:	e1590001 	cmp	r9, r1
        2f3470:	ca000001 	bgt	2f347c <TInterpreter::SlowRun(long)+0x159c>
        2f3474:	e5846050 	str	r6, [r4, #80]	; fField80
        2f3478:	eaffffd3 	b	2f33cc <TInterpreter::SlowRun(long)+0x14ec>
        2f347c:	e3300000 	teq	r0, #0	; 0x0
        2f3480:	1affffd1 	bne	2f33cc <TInterpreter::SlowRun(long)+0x14ec>
        2f3484:	e59d004c 	ldr	r0, [sp, #76]	; fField76
        2f3488:	e5900000 	ldr	r0, [r0]
        2f348c:	e3a02000 	mov	r2, #0	; 0x0
        2f3490:	e3a01f57 	mov	r1, #348	; 0x15c
        2f3494:	e2411903 	sub	r1, r1, #49152	; 0xc000
        2f3498:	eb63bf3f 	bl	1be319c <$Throw>
        2f349c:	eaffffca 	b	2f33cc <TInterpreter::SlowRun(long)+0x14ec>
        2f34a0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f34a4:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f34a8:	e3300000 	teq	r0, #0	; 0x0
        2f34ac:	11a00004 	movne	r0, r4
        2f34b0:	13a01000 	movne	r1, #0	; 0x0
        2f34b4:	1b5d4364 	blne	1a4424c <TInterpreter::$TraceFreqCall(long)>
        2f34b8:	e5951000 	ldr	r1, [r5]
        2f34bc:	e2411004 	sub	r1, r1, #4	; 0x4
        2f34c0:	e5851000 	str	r1, [r5]
        2f34c4:	e1a02001 	mov	r2, r1
        2f34c8:	e5910000 	ldr	r0, [r1]
        2f34cc:	e5111004 	ldr	r1, [r1, -#4]	; fField4
        2f34d0:	e1813000 	orr	r3, r1, r0
        2f34d4:	e3130003 	tst	r3, #3	; 0x3
        2f34d8:	00810000 	addeq	r0, r1, r0
        2f34dc:	05220004 	streq	r0, [r2, -#4]!	; fField4
        2f34e0:	0a000009 	beq	2f350c <TInterpreter::SlowRun(long)+0x162c>
        2f34e4:	e59d2014 	ldr	r2, [sp, #20]
        2f34e8:	e5821000 	str	r1, [r2]
        2f34ec:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f34f0:	e1a06005 	mov	r6, r5
        2f34f4:	e5810000 	str	r0, [r1]
        2f34f8:	e28d1010 	add	r1, sp, #16	; 0x10
        2f34fc:	e28d0014 	add	r0, sp, #20	; 0x14
        2f3500:	eb5d3b03 	bl	1a42114 <$NumberAdd__FRC6RefVarT1>
        2f3504:	e5961000 	ldr	r1, [r6]
        2f3508:	e5210004 	str	r0, [r1, -#4]!	; fField4
        2f350c:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3510:	e3300000 	teq	r0, #0	; 0x0
        2f3514:	1affff74 	bne	2f32ec <TInterpreter::SlowRun(long)+0x140c>
        2f3518:	ea0002b3 	b	2f3fec <TInterpreter::SlowRun(long)+0x210c>
        2f351c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f3520:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3524:	e3300000 	teq	r0, #0	; 0x0
        2f3528:	11a00004 	movne	r0, r4
        2f352c:	13a01001 	movne	r1, #1	; 0x1
        2f3530:	1b5d4345 	blne	1a4424c <TInterpreter::$TraceFreqCall(long)>
        2f3534:	e5951000 	ldr	r1, [r5]
        2f3538:	e2411004 	sub	r1, r1, #4	; 0x4
        2f353c:	e5851000 	str	r1, [r5]
        2f3540:	e1a02001 	mov	r2, r1
        2f3544:	e5910000 	ldr	r0, [r1]
        2f3548:	e5111004 	ldr	r1, [r1, -#4]	; fField4
        2f354c:	e1813000 	orr	r3, r1, r0
        2f3550:	e3130003 	tst	r3, #3	; 0x3
        2f3554:	00410000 	subeq	r0, r1, r0
        2f3558:	05220004 	streq	r0, [r2, -#4]!	; fField4
        2f355c:	0a000009 	beq	2f3588 <TInterpreter::SlowRun(long)+0x16a8>
        2f3560:	e59d2014 	ldr	r2, [sp, #20]
        2f3564:	e5821000 	str	r1, [r2]
        2f3568:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f356c:	e1a06005 	mov	r6, r5
        2f3570:	e5810000 	str	r0, [r1]
        2f3574:	e28d1010 	add	r1, sp, #16	; 0x10
        2f3578:	e28d0014 	add	r0, sp, #20	; 0x14
        2f357c:	eb5d3ae7 	bl	1a42120 <$NumberSubtract__FRC6RefVarT1>
        2f3580:	e5961000 	ldr	r1, [r6]
        2f3584:	e5210004 	str	r0, [r1, -#4]!	; fField4
        2f3588:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f358c:	e3300000 	teq	r0, #0	; 0x0
        2f3590:	1affff55 	bne	2f32ec <TInterpreter::SlowRun(long)+0x140c>
        2f3594:	ea000294 	b	2f3fec <TInterpreter::SlowRun(long)+0x210c>
        2f3598:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f359c:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f35a0:	e3300000 	teq	r0, #0	; 0x0
        2f35a4:	11a00004 	movne	r0, r4
        2f35a8:	13a01002 	movne	r1, #2	; 0x2
        2f35ac:	1b5d4326 	blne	1a4424c <TInterpreter::$TraceFreqCall(long)>
        2f35b0:	e5951000 	ldr	r1, [r5]
        2f35b4:	e2411004 	sub	r1, r1, #4	; 0x4
        2f35b8:	e5851000 	str	r1, [r5]
        2f35bc:	e5910000 	ldr	r0, [r1]
        2f35c0:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f35c4:	e5810000 	str	r0, [r1]
        2f35c8:	e5950000 	ldr	r0, [r5]
        2f35cc:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        2f35d0:	e59d1014 	ldr	r1, [sp, #20]
        2f35d4:	e5810000 	str	r0, [r1]
        2f35d8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2f35dc:	e5900000 	ldr	r0, [r0]
        2f35e0:	e3100003 	tst	r0, #3	; 0x3
        2f35e4:	01a00140 	moveq	r0, r0, asr #2
        2f35e8:	0a000000 	beq	2f35f0 <TInterpreter::SlowRun(long)+0x1710>
        2f35ec:	eb633aca 	bl	1bc211c <$_RINTError(long)>
        2f35f0:	e1a06000 	mov	r6, r0
        2f35f4:	e59d0014 	ldr	r0, [sp, #20]
        2f35f8:	e5900000 	ldr	r0, [r0]
        2f35fc:	eb63473b 	bl	1bc52f0 <$ObjectFlags(long)>
        2f3600:	e3100001 	tst	r0, #1	; 0x1
        2f3604:	1a000041 	bne	2f3710 <TInterpreter::SlowRun(long)+0x1830>
        2f3608:	e59d1044 	ldr	r1, [sp, #68]	; fField68
        2f360c:	e28d0014 	add	r0, sp, #20	; 0x14
        2f3610:	eb63471e 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
        2f3614:	e3300000 	teq	r0, #0	; 0x0
        2f3618:	0a000046 	beq	2f3738 <TInterpreter::SlowRun(long)+0x1858>
        2f361c:	e24dd028 	sub	sp, sp, #40	; 0x28
        2f3620:	e28d103c 	add	r1, sp, #60	; 0x3c
        2f3624:	e1a0000d 	mov	r0, sp
        2f3628:	ebfae4fc 	bl	1aca20 <TRichString::__ct(RefVar const &)>
        2f362c:	e3560000 	cmp	r6, #0	; 0x0
        2f3630:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2f3634:	ba000001 	blt	2f3640 <TInterpreter::SlowRun(long)+0x1760>
        2f3638:	e1500006 	cmp	r0, r6
        2f363c:	ca000025 	bgt	2f36d8 <TInterpreter::SlowRun(long)+0x17f8>
        2f3640:	e5941054 	ldr	r1, [r4, #84]	; fField84
        2f3644:	e3310000 	teq	r1, #0	; 0x0
        2f3648:	01360000 	teqeq	r6, r0
        2f364c:	1a000003 	bne	2f3660 <TInterpreter::SlowRun(long)+0x1780>
        2f3650:	e3a01006 	mov	r1, #6	; 0x6
        2f3654:	e5950000 	ldr	r0, [r5]
        2f3658:	e5201004 	str	r1, [r0, -#4]!	; fField4
        2f365c:	ea000027 	b	2f3700 <TInterpreter::SlowRun(long)+0x1820>
        2f3660:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f3664:	eb633ab5 	bl	1bc2140 <$AllocateFrame(void)>
        2f3668:	eb633ab7 	bl	1bc214c <$AllocateRefHandle(long)>
        2f366c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2f3670:	e3a00fb3 	mov	r0, #716	; 0x2cc
        2f3674:	e2400bbd 	sub	r0, r0, #193536	; 0x2f400
        2f3678:	eb633ab3 	bl	1bc214c <$AllocateRefHandle(long)>
        2f367c:	e58d0000 	str	r0, [sp]
        2f3680:	e1a0200d 	mov	r2, sp
        2f3684:	e59d1068 	ldr	r1, [sp, #104]	; fField104
        2f3688:	e28d0004 	add	r0, sp, #4	; 0x4
        2f368c:	eb634b35 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f3690:	e59d0000 	ldr	r0, [sp]
        2f3694:	eb633ec8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f3698:	e28d2044 	add	r2, sp, #68	; 0x44
        2f369c:	e59d1064 	ldr	r1, [sp, #100]	; fField100
        2f36a0:	e28d0004 	add	r0, sp, #4	; 0x4
        2f36a4:	eb634b2f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f36a8:	e28d2040 	add	r2, sp, #64	; 0x40
        2f36ac:	e59d1070 	ldr	r1, [sp, #112]	; fField112
        2f36b0:	e28d0004 	add	r0, sp, #4	; 0x4
        2f36b4:	eb634b2b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f36b8:	e28d1004 	add	r1, sp, #4	; 0x4
        2f36bc:	e59d006c 	ldr	r0, [sp, #108]	; fField108
        2f36c0:	e5900000 	ldr	r0, [r0]
        2f36c4:	eb635364 	bl	1bc845c <$ThrowRefException(char *, RefVar const &)>
        2f36c8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2f36cc:	eb633eba 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f36d0:	e28dd008 	add	sp, sp, #8	; 0x8
        2f36d4:	ea000009 	b	2f3700 <TInterpreter::SlowRun(long)+0x1820>
        2f36d8:	e1a09005 	mov	r9, r5
        2f36dc:	e1a01006 	mov	r1, r6
        2f36e0:	e1a0000d 	mov	r0, sp
        2f36e4:	ebfae213 	bl	1abf38 <TRichString::GetChar( const(unsigned long))>
        2f36e8:	e3a01001 	mov	r1, #1	; 0x1
        2f36ec:	e1810100 	orr	r0, r1, r0, lsl #2
        2f36f0:	e3a02002 	mov	r2, #2	; 0x2
        2f36f4:	e1820100 	orr	r0, r2, r0, lsl #2
        2f36f8:	e5991000 	ldr	r1, [r9]
        2f36fc:	e5210004 	str	r0, [r1, -#4]!	; fField4
        2f3700:	e59d0000 	ldr	r0, [sp]
        2f3704:	eb633eac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f3708:	e28dd028 	add	sp, sp, #40	; 0x28
        2f370c:	ea00000d 	b	2f3748 <TInterpreter::SlowRun(long)+0x1868>
        2f3710:	e3100002 	tst	r0, #2	; 0x2
        2f3714:	1a000007 	bne	2f3738 <TInterpreter::SlowRun(long)+0x1858>
        2f3718:	e1a09005 	mov	r9, r5
        2f371c:	e59d0014 	ldr	r0, [sp, #20]
        2f3720:	e5900000 	ldr	r0, [r0]
        2f3724:	e1a01006 	mov	r1, r6
        2f3728:	eb6342c9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f372c:	e5991000 	ldr	r1, [r9]
        2f3730:	e5210004 	str	r0, [r1, -#4]!	; fField4
        2f3734:	ea000003 	b	2f3748 <TInterpreter::SlowRun(long)+0x1868>
        2f3738:	e28d1014 	add	r1, sp, #20	; 0x14
        2f373c:	e3a000dd 	mov	r0, #221	; 0xdd
        2f3740:	e2400cbe 	sub	r0, r0, #48640	; 0xbe00
        2f3744:	eb645344 	bl	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f3748:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f374c:	e3300000 	teq	r0, #0	; 0x0
        2f3750:	1afffee5 	bne	2f32ec <TInterpreter::SlowRun(long)+0x140c>
        2f3754:	ea000224 	b	2f3fec <TInterpreter::SlowRun(long)+0x210c>
        2f3758:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f375c:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3760:	e3300000 	teq	r0, #0	; 0x0
        2f3764:	11a00004 	movne	r0, r4
        2f3768:	13a01003 	movne	r1, #3	; 0x3
        2f376c:	1b5d42b6 	blne	1a4424c <TInterpreter::$TraceFreqCall(long)>
        2f3770:	e5951000 	ldr	r1, [r5]
        2f3774:	e2411004 	sub	r1, r1, #4	; 0x4
        2f3778:	e5851000 	str	r1, [r5]
        2f377c:	e5910000 	ldr	r0, [r1]
        2f3780:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f3784:	e5810000 	str	r0, [r1]
        2f3788:	e5951000 	ldr	r1, [r5]
        2f378c:	e2411004 	sub	r1, r1, #4	; 0x4
        2f3790:	e5851000 	str	r1, [r5]
        2f3794:	e5910000 	ldr	r0, [r1]
        2f3798:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f379c:	e5810000 	str	r0, [r1]
        2f37a0:	e5950000 	ldr	r0, [r5]
        2f37a4:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        2f37a8:	e59d1014 	ldr	r1, [sp, #20]
        2f37ac:	e5810000 	str	r0, [r1]
        2f37b0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2f37b4:	e5900000 	ldr	r0, [r0]
        2f37b8:	e3100003 	tst	r0, #3	; 0x3
        2f37bc:	01a00140 	moveq	r0, r0, asr #2
        2f37c0:	0a000000 	beq	2f37c8 <TInterpreter::SlowRun(long)+0x18e8>
        2f37c4:	eb633a54 	bl	1bc211c <$_RINTError(long)>
        2f37c8:	e1a06000 	mov	r6, r0
        2f37cc:	e59d0014 	ldr	r0, [sp, #20]
        2f37d0:	e5900000 	ldr	r0, [r0]
        2f37d4:	eb6346c5 	bl	1bc52f0 <$ObjectFlags(long)>
        2f37d8:	e3100001 	tst	r0, #1	; 0x1
        2f37dc:	1a0000bc 	bne	2f3ad4 <TInterpreter::SlowRun(long)+0x1bf4>
        2f37e0:	e59d1044 	ldr	r1, [sp, #68]	; fField68
        2f37e4:	e28d0014 	add	r0, sp, #20	; 0x14
        2f37e8:	eb6346a8 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
        2f37ec:	e3300000 	teq	r0, #0	; 0x0
        2f37f0:	0a0000c0 	beq	2f3af8 <TInterpreter::SlowRun(long)+0x1c18>
        2f37f4:	e24dd028 	sub	sp, sp, #40	; 0x28
        2f37f8:	e28d103c 	add	r1, sp, #60	; 0x3c
        2f37fc:	e1a0000d 	mov	r0, sp
        2f3800:	ebfae486 	bl	1aca20 <TRichString::__ct(RefVar const &)>
        2f3804:	e3560000 	cmp	r6, #0	; 0x0
        2f3808:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2f380c:	ba000001 	blt	2f3818 <TInterpreter::SlowRun(long)+0x1938>
        2f3810:	e1500006 	cmp	r0, r6
        2f3814:	ca00003c 	bgt	2f390c <TInterpreter::SlowRun(long)+0x1a2c>
        2f3818:	e1360000 	teq	r6, r0
        2f381c:	05940054 	ldreq	r0, [r4, #84]	; fField84
        2f3820:	03300000 	teqeq	r0, #0	; 0x0
        2f3824:	1a00001c 	bne	2f389c <TInterpreter::SlowRun(long)+0x19bc>
        2f3828:	e59d0034 	ldr	r0, [sp, #52]
        2f382c:	e5900000 	ldr	r0, [r0]
        2f3830:	e2001003 	and	r1, r0, #3	; 0x3
        2f3834:	e3310002 	teq	r1, #2	; 0x2
        2f3838:	03a01003 	moveq	r1, #3	; 0x3
        2f383c:	00011140 	andeq	r1, r1, r0, asr #2
        2f3840:	03310001 	teqeq	r1, #1	; 0x1
        2f3844:	01a00140 	moveq	r0, r0, asr #2
        2f3848:	01a00140 	moveq	r0, r0, asr #2
        2f384c:	01a00800 	moveq	r0, r0, lsl #16
        2f3850:	01a00820 	moveq	r0, r0, lsr #16
        2f3854:	0a000000 	beq	2f385c <TInterpreter::SlowRun(long)+0x197c>
        2f3858:	eb633a2e 	bl	1bc2118 <$_RCHARError(long)>
        2f385c:	e1b00800 	movs	r0, r0, lsl #16
        2f3860:	1a00000d 	bne	2f389c <TInterpreter::SlowRun(long)+0x19bc>
        2f3864:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f3868:	e3e03000 	mvn	r3, #0	; 0x0
        2f386c:	e3a02000 	mov	r2, #0	; 0x0
        2f3870:	e92d000c 	stmdb	sp!, {r2, r3}
        2f3874:	e3a00002 	mov	r0, #2	; 0x2
        2f3878:	eb633a33 	bl	1bc214c <$AllocateRefHandle(long)>
        2f387c:	e58d0008 	str	r0, [sp, #8]	; fField8
        2f3880:	e28d3008 	add	r3, sp, #8	; 0x8
        2f3884:	e1a01006 	mov	r1, r6
        2f3888:	e28d0048 	add	r0, sp, #72	; 0x48
        2f388c:	e3e02000 	mvn	r2, #0	; 0x0
        2f3890:	eb6352e9 	bl	1bc843c <$StrMunger__FRC6RefVarlT2T1N22>
        2f3894:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        2f3898:	ea00005a 	b	2f3a08 <TInterpreter::SlowRun(long)+0x1b28>
        2f389c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f38a0:	eb633a26 	bl	1bc2140 <$AllocateFrame(void)>
        2f38a4:	eb633a28 	bl	1bc214c <$AllocateRefHandle(long)>
        2f38a8:	e58d0004 	str	r0, [sp, #4]	; fField4
        2f38ac:	e3a00fb3 	mov	r0, #716	; 0x2cc
        2f38b0:	e2400bbd 	sub	r0, r0, #193536	; 0x2f400
        2f38b4:	eb633a24 	bl	1bc214c <$AllocateRefHandle(long)>
        2f38b8:	e58d0000 	str	r0, [sp]
        2f38bc:	e1a0200d 	mov	r2, sp
        2f38c0:	e59d1068 	ldr	r1, [sp, #104]	; fField104
        2f38c4:	e28d0004 	add	r0, sp, #4	; 0x4
        2f38c8:	eb634aa6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f38cc:	e59d0000 	ldr	r0, [sp]
        2f38d0:	eb633e39 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f38d4:	e28d2044 	add	r2, sp, #68	; 0x44
        2f38d8:	e59d1064 	ldr	r1, [sp, #100]	; fField100
        2f38dc:	e28d0004 	add	r0, sp, #4	; 0x4
        2f38e0:	eb634aa0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f38e4:	e28d2040 	add	r2, sp, #64	; 0x40
        2f38e8:	e59d1070 	ldr	r1, [sp, #112]	; fField112
        2f38ec:	e28d0004 	add	r0, sp, #4	; 0x4
        2f38f0:	eb634a9c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f38f4:	e28d1004 	add	r1, sp, #4	; 0x4
        2f38f8:	e59d006c 	ldr	r0, [sp, #108]	; fField108
        2f38fc:	e5900000 	ldr	r0, [r0]
        2f3900:	eb6352d5 	bl	1bc845c <$ThrowRefException(char *, RefVar const &)>
        2f3904:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2f3908:	ea000058 	b	2f3a70 <TInterpreter::SlowRun(long)+0x1b90>
        2f390c:	e59d0034 	ldr	r0, [sp, #52]
        2f3910:	e5900000 	ldr	r0, [r0]
        2f3914:	e2001003 	and	r1, r0, #3	; 0x3
        2f3918:	e3310002 	teq	r1, #2	; 0x2
        2f391c:	03a01003 	moveq	r1, #3	; 0x3
        2f3920:	00011140 	andeq	r1, r1, r0, asr #2
        2f3924:	03310001 	teqeq	r1, #1	; 0x1
        2f3928:	01a00140 	moveq	r0, r0, asr #2
        2f392c:	01a00140 	moveq	r0, r0, asr #2
        2f3930:	01a00800 	moveq	r0, r0, lsl #16
        2f3934:	01a00820 	moveq	r0, r0, lsr #16
        2f3938:	0a000000 	beq	2f3940 <TInterpreter::SlowRun(long)+0x1a60>
        2f393c:	eb6339f5 	bl	1bc2118 <$_RCHARError(long)>
        2f3940:	e1b00800 	movs	r0, r0, lsl #16
        2f3944:	0a000010 	beq	2f398c <TInterpreter::SlowRun(long)+0x1aac>
        2f3948:	e59d0034 	ldr	r0, [sp, #52]
        2f394c:	e5900000 	ldr	r0, [r0]
        2f3950:	e2001003 	and	r1, r0, #3	; 0x3
        2f3954:	e3310002 	teq	r1, #2	; 0x2
        2f3958:	03a01003 	moveq	r1, #3	; 0x3
        2f395c:	00011140 	andeq	r1, r1, r0, asr #2
        2f3960:	03310001 	teqeq	r1, #1	; 0x1
        2f3964:	01a00140 	moveq	r0, r0, asr #2
        2f3968:	01a00140 	moveq	r0, r0, asr #2
        2f396c:	01a00800 	moveq	r0, r0, lsl #16
        2f3970:	01a00820 	moveq	r0, r0, lsr #16
        2f3974:	0a000000 	beq	2f397c <TInterpreter::SlowRun(long)+0x1a9c>
        2f3978:	eb6339e6 	bl	1bc2118 <$_RCHARError(long)>
        2f397c:	e1a00800 	mov	r0, r0, lsl #16
        2f3980:	e1a00820 	mov	r0, r0, lsr #16
        2f3984:	e3300cf7 	teq	r0, #63232	; 0xf700
        2f3988:	1a00003b 	bne	2f3a7c <TInterpreter::SlowRun(long)+0x1b9c>
        2f398c:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2f3990:	e3300000 	teq	r0, #0	; 0x0
        2f3994:	1a00001e 	bne	2f3a14 <TInterpreter::SlowRun(long)+0x1b34>
        2f3998:	e59d0034 	ldr	r0, [sp, #52]
        2f399c:	e5900000 	ldr	r0, [r0]
        2f39a0:	e2001003 	and	r1, r0, #3	; 0x3
        2f39a4:	e3310002 	teq	r1, #2	; 0x2
        2f39a8:	03a01003 	moveq	r1, #3	; 0x3
        2f39ac:	00011140 	andeq	r1, r1, r0, asr #2
        2f39b0:	03310001 	teqeq	r1, #1	; 0x1
        2f39b4:	01a00140 	moveq	r0, r0, asr #2
        2f39b8:	01a00140 	moveq	r0, r0, asr #2
        2f39bc:	01a00800 	moveq	r0, r0, lsl #16
        2f39c0:	01a00820 	moveq	r0, r0, lsr #16
        2f39c4:	0a000000 	beq	2f39cc <TInterpreter::SlowRun(long)+0x1aec>
        2f39c8:	eb6339d2 	bl	1bc2118 <$_RCHARError(long)>
        2f39cc:	e1b00800 	movs	r0, r0, lsl #16
        2f39d0:	1a00000f 	bne	2f3a14 <TInterpreter::SlowRun(long)+0x1b34>
        2f39d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f39d8:	e3e03000 	mvn	r3, #0	; 0x0
        2f39dc:	e3a02000 	mov	r2, #0	; 0x0
        2f39e0:	e92d000c 	stmdb	sp!, {r2, r3}
        2f39e4:	e3a00002 	mov	r0, #2	; 0x2
        2f39e8:	eb6339d7 	bl	1bc214c <$AllocateRefHandle(long)>
        2f39ec:	e58d0008 	str	r0, [sp, #8]	; fField8
        2f39f0:	e28d3008 	add	r3, sp, #8	; 0x8
        2f39f4:	e1a01006 	mov	r1, r6
        2f39f8:	e28d0048 	add	r0, sp, #72	; 0x48
        2f39fc:	e3e02000 	mvn	r2, #0	; 0x0
        2f3a00:	eb63528d 	bl	1bc843c <$StrMunger__FRC6RefVarlT2T1N22>
        2f3a04:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        2f3a08:	eb633deb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f3a0c:	e28dd004 	add	sp, sp, #4	; 0x4
        2f3a10:	ea00002b 	b	2f3ac4 <TInterpreter::SlowRun(long)+0x1be4>
        2f3a14:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f3a18:	eb6339c8 	bl	1bc2140 <$AllocateFrame(void)>
        2f3a1c:	eb6339ca 	bl	1bc214c <$AllocateRefHandle(long)>
        2f3a20:	e58d0004 	str	r0, [sp, #4]	; fField4
        2f3a24:	e3a00f51 	mov	r0, #324	; 0x144
        2f3a28:	e2400bbf 	sub	r0, r0, #195584	; 0x2fc00
        2f3a2c:	eb6339c6 	bl	1bc214c <$AllocateRefHandle(long)>
        2f3a30:	e58d0000 	str	r0, [sp]
        2f3a34:	e1a0200d 	mov	r2, sp
        2f3a38:	e59d1068 	ldr	r1, [sp, #104]	; fField104
        2f3a3c:	e28d0004 	add	r0, sp, #4	; 0x4
        2f3a40:	eb634a48 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f3a44:	e59d0000 	ldr	r0, [sp]
        2f3a48:	eb633ddb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f3a4c:	e28d203c 	add	r2, sp, #60	; 0x3c
        2f3a50:	e59d1064 	ldr	r1, [sp, #100]	; fField100
        2f3a54:	e28d0004 	add	r0, sp, #4	; 0x4
        2f3a58:	eb634a42 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f3a5c:	e28d1004 	add	r1, sp, #4	; 0x4
        2f3a60:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        2f3a64:	e5900000 	ldr	r0, [r0]
        2f3a68:	eb63527b 	bl	1bc845c <$ThrowRefException(char *, RefVar const &)>
        2f3a6c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2f3a70:	eb633dd1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f3a74:	e28dd008 	add	sp, sp, #8	; 0x8
        2f3a78:	ea000011 	b	2f3ac4 <TInterpreter::SlowRun(long)+0x1be4>
        2f3a7c:	e59d0034 	ldr	r0, [sp, #52]
        2f3a80:	e5900000 	ldr	r0, [r0]
        2f3a84:	e2001003 	and	r1, r0, #3	; 0x3
        2f3a88:	e3310002 	teq	r1, #2	; 0x2
        2f3a8c:	03a01003 	moveq	r1, #3	; 0x3
        2f3a90:	00011140 	andeq	r1, r1, r0, asr #2
        2f3a94:	03310001 	teqeq	r1, #1	; 0x1
        2f3a98:	01a00140 	moveq	r0, r0, asr #2
        2f3a9c:	01a00140 	moveq	r0, r0, asr #2
        2f3aa0:	01a00800 	moveq	r0, r0, lsl #16
        2f3aa4:	01a00820 	moveq	r0, r0, lsr #16
        2f3aa8:	0a000000 	beq	2f3ab0 <TInterpreter::SlowRun(long)+0x1bd0>
        2f3aac:	eb633999 	bl	1bc2118 <$_RCHARError(long)>
        2f3ab0:	e1a02800 	mov	r2, r0, lsl #16
        2f3ab4:	e1a02822 	mov	r2, r2, lsr #16
        2f3ab8:	e1a01006 	mov	r1, r6
        2f3abc:	e1a0000d 	mov	r0, sp
        2f3ac0:	ebfadf8b 	bl	1ab8f4 <TRichString::SetChar(unsigned long, unsigned short)>
        2f3ac4:	e59d0000 	ldr	r0, [sp]
        2f3ac8:	eb633dbb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f3acc:	e28dd028 	add	sp, sp, #40	; 0x28
        2f3ad0:	ea00000c 	b	2f3b08 <TInterpreter::SlowRun(long)+0x1c28>
        2f3ad4:	e3100002 	tst	r0, #2	; 0x2
        2f3ad8:	1a000006 	bne	2f3af8 <TInterpreter::SlowRun(long)+0x1c18>
        2f3adc:	e59d0014 	ldr	r0, [sp, #20]
        2f3ae0:	e5900000 	ldr	r0, [r0]
        2f3ae4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f3ae8:	e5912000 	ldr	r2, [r1]
        2f3aec:	e1a01006 	mov	r1, r6
        2f3af0:	eb634a18 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2f3af4:	ea000003 	b	2f3b08 <TInterpreter::SlowRun(long)+0x1c28>
        2f3af8:	e28d1014 	add	r1, sp, #20	; 0x14
        2f3afc:	e3a000dd 	mov	r0, #221	; 0xdd
        2f3b00:	e2400cbe 	sub	r0, r0, #48640	; 0xbe00
        2f3b04:	eb645254 	bl	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f3b08:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2f3b0c:	e5911000 	ldr	r1, [r1]
        2f3b10:	e5950000 	ldr	r0, [r5]
        2f3b14:	e5201004 	str	r1, [r0, -#4]!	; fField4
        2f3b18:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3b1c:	e3300000 	teq	r0, #0	; 0x0
        2f3b20:	1afffdf1 	bne	2f32ec <TInterpreter::SlowRun(long)+0x140c>
        2f3b24:	ea000130 	b	2f3fec <TInterpreter::SlowRun(long)+0x210c>
        2f3b28:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f3b2c:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3b30:	e3300000 	teq	r0, #0	; 0x0
        2f3b34:	11a00004 	movne	r0, r4
        2f3b38:	13a01004 	movne	r1, #4	; 0x4
        2f3b3c:	1b5d41c2 	blne	1a4424c <TInterpreter::$TraceFreqCall(long)>
        2f3b40:	e5951000 	ldr	r1, [r5]
        2f3b44:	e2411004 	sub	r1, r1, #4	; 0x4
        2f3b48:	e5851000 	str	r1, [r5]
        2f3b4c:	e5910000 	ldr	r0, [r1]
        2f3b50:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f3b54:	e5810000 	str	r0, [r1]
        2f3b58:	e5950000 	ldr	r0, [r5]
        2f3b5c:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        2f3b60:	e59d1014 	ldr	r1, [sp, #20]
        2f3b64:	e5810000 	str	r0, [r1]
        2f3b68:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f3b6c:	e5911000 	ldr	r1, [r1]
        2f3b70:	e1802001 	orr	r2, r0, r1
        2f3b74:	e3120001 	tst	r2, #1	; 0x1
        2f3b78:	1a000002 	bne	2f3b88 <TInterpreter::SlowRun(long)+0x1ca8>
        2f3b7c:	e1300001 	teq	r0, r1
        2f3b80:	1a000036 	bne	2f3c60 <TInterpreter::SlowRun(long)+0x1d80>
        2f3b84:	ea000033 	b	2f3c58 <TInterpreter::SlowRun(long)+0x1d78>
        2f3b88:	eb6345c1 	bl	1bc5294 <$ISREAL(long)>
        2f3b8c:	e1a06000 	mov	r6, r0
        2f3b90:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2f3b94:	e5900000 	ldr	r0, [r0]
        2f3b98:	eb6345bd 	bl	1bc5294 <$ISREAL(long)>
        2f3b9c:	e3560000 	cmp	r6, #0	; 0x0
        2f3ba0:	1a000007 	bne	2f3bc4 <TInterpreter::SlowRun(long)+0x1ce4>
        2f3ba4:	e3300000 	teq	r0, #0	; 0x0
        2f3ba8:	1a000015 	bne	2f3c04 <TInterpreter::SlowRun(long)+0x1d24>
        2f3bac:	e59d0014 	ldr	r0, [sp, #20]
        2f3bb0:	e5900000 	ldr	r0, [r0]
        2f3bb4:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f3bb8:	e5911000 	ldr	r1, [r1]
        2f3bbc:	eb63419b 	bl	1bc4230 <$EQRef__FlT1>
        2f3bc0:	ea000027 	b	2f3c64 <TInterpreter::SlowRun(long)+0x1d84>
        2f3bc4:	13300000 	teqne	r0, #0	; 0x0
        2f3bc8:	0a00000d 	beq	2f3c04 <TInterpreter::SlowRun(long)+0x1d24>
        2f3bcc:	e28d0010 	add	r0, sp, #16	; 0x10
        2f3bd0:	eb633963 	bl	1bc2164 <$CDouble(RefVar const &)>
        2f3bd4:	ee00c180 	mvfd	f4, f0
        2f3bd8:	e28d0014 	add	r0, sp, #20	; 0x14
        2f3bdc:	eb633960 	bl	1bc2164 <$CDouble(RefVar const &)>
        2f3be0:	ed2d8102 	stfd	f0, [sp, -#8]!	; fField8
        2f3be4:	e8bd0003 	ldmia	sp!, {r0, r1}
        2f3be8:	ee008184 	mvfd	f0, f4
        2f3bec:	ed2d8102 	stfd	f0, [sp, -#8]!	; fField8
        2f3bf0:	e8bd000c 	ldmia	sp!, {r2, r3}
        2f3bf4:	eb63039d 	bl	1bb4a70 <$relation>
        2f3bf8:	e3300002 	teq	r0, #2	; 0x2
        2f3bfc:	1a000017 	bne	2f3c60 <TInterpreter::SlowRun(long)+0x1d80>
        2f3c00:	ea000014 	b	2f3c58 <TInterpreter::SlowRun(long)+0x1d78>
        2f3c04:	e59d0014 	ldr	r0, [sp, #20]
        2f3c08:	e5900000 	ldr	r0, [r0]
        2f3c0c:	e3100003 	tst	r0, #3	; 0x3
        2f3c10:	159d0010 	ldrne	r0, [sp, #16]	; fField16
        2f3c14:	15900000 	ldrne	r0, [r0]
        2f3c18:	12000003 	andne	r0, r0, #3	; 0x3
        2f3c1c:	13300000 	teqne	r0, #0	; 0x0
        2f3c20:	1a00000e 	bne	2f3c60 <TInterpreter::SlowRun(long)+0x1d80>
        2f3c24:	e28d0010 	add	r0, sp, #16	; 0x10
        2f3c28:	eb633950 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        2f3c2c:	ee00c180 	mvfd	f4, f0
        2f3c30:	e28d0014 	add	r0, sp, #20	; 0x14
        2f3c34:	eb63394d 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        2f3c38:	ed2d8102 	stfd	f0, [sp, -#8]!	; fField8
        2f3c3c:	e8bd0003 	ldmia	sp!, {r0, r1}
        2f3c40:	ee008184 	mvfd	f0, f4
        2f3c44:	ed2d8102 	stfd	f0, [sp, -#8]!	; fField8
        2f3c48:	e8bd000c 	ldmia	sp!, {r2, r3}
        2f3c4c:	eb630387 	bl	1bb4a70 <$relation>
        2f3c50:	e3300002 	teq	r0, #2	; 0x2
        2f3c54:	1a000001 	bne	2f3c60 <TInterpreter::SlowRun(long)+0x1d80>
        2f3c58:	e3a00001 	mov	r0, #1	; 0x1
        2f3c5c:	ea000000 	b	2f3c64 <TInterpreter::SlowRun(long)+0x1d84>
        2f3c60:	e3a00000 	mov	r0, #0	; 0x0
        2f3c64:	e1a01005 	mov	r1, r5
        2f3c68:	e3300000 	teq	r0, #0	; 0x0
        2f3c6c:	03a00002 	moveq	r0, #2	; 0x2
        2f3c70:	13a0001a 	movne	r0, #26	; 0x1a
        2f3c74:	e5911000 	ldr	r1, [r1]
        2f3c78:	e5210004 	str	r0, [r1, -#4]!	; fField4
        2f3c7c:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3c80:	e3300000 	teq	r0, #0	; 0x0
        2f3c84:	1afffd98 	bne	2f32ec <TInterpreter::SlowRun(long)+0x140c>
        2f3c88:	ea0000d7 	b	2f3fec <TInterpreter::SlowRun(long)+0x210c>
        2f3c8c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f3c90:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3c94:	e3300000 	teq	r0, #0	; 0x0
        2f3c98:	11a00004 	movne	r0, r4
        2f3c9c:	13a01005 	movne	r1, #5	; 0x5
        2f3ca0:	1b5d4169 	blne	1a4424c <TInterpreter::$TraceFreqCall(long)>
        2f3ca4:	e5951000 	ldr	r1, [r5]
        2f3ca8:	e5110004 	ldr	r0, [r1, -#4]	; fField4
        2f3cac:	e3300002 	teq	r0, #2	; 0x2
        2f3cb0:	13a00002 	movne	r0, #2	; 0x2
        2f3cb4:	03a0001a 	moveq	r0, #26	; 0x1a
        2f3cb8:	e5210004 	str	r0, [r1, -#4]!	; fField4
        2f3cbc:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3cc0:	e3300000 	teq	r0, #0	; 0x0
        2f3cc4:	1afffd88 	bne	2f32ec <TInterpreter::SlowRun(long)+0x140c>
        2f3cc8:	ea0000c7 	b	2f3fec <TInterpreter::SlowRun(long)+0x210c>
        2f3ccc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f3cd0:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3cd4:	e3300000 	teq	r0, #0	; 0x0
        2f3cd8:	11a00004 	movne	r0, r4
        2f3cdc:	13a01006 	movne	r1, #6	; 0x6
        2f3ce0:	1b5d4159 	blne	1a4424c <TInterpreter::$TraceFreqCall(long)>
        2f3ce4:	e5951000 	ldr	r1, [r5]
        2f3ce8:	e2411004 	sub	r1, r1, #4	; 0x4
        2f3cec:	e5851000 	str	r1, [r5]
        2f3cf0:	e5910000 	ldr	r0, [r1]
        2f3cf4:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f3cf8:	e5810000 	str	r0, [r1]
        2f3cfc:	e5950000 	ldr	r0, [r5]
        2f3d00:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        2f3d04:	e59d1014 	ldr	r1, [sp, #20]
        2f3d08:	e5810000 	str	r0, [r1]
        2f3d0c:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f3d10:	e5911000 	ldr	r1, [r1]
        2f3d14:	e1802001 	orr	r2, r0, r1
        2f3d18:	e3120001 	tst	r2, #1	; 0x1
        2f3d1c:	1a000002 	bne	2f3d2c <TInterpreter::SlowRun(long)+0x1e4c>
        2f3d20:	e1300001 	teq	r0, r1
        2f3d24:	1a000038 	bne	2f3e0c <TInterpreter::SlowRun(long)+0x1f2c>
        2f3d28:	ea000035 	b	2f3e04 <TInterpreter::SlowRun(long)+0x1f24>
        2f3d2c:	eb634558 	bl	1bc5294 <$ISREAL(long)>
        2f3d30:	e1a06000 	mov	r6, r0
        2f3d34:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2f3d38:	e5900000 	ldr	r0, [r0]
        2f3d3c:	eb634554 	bl	1bc5294 <$ISREAL(long)>
        2f3d40:	e3560000 	cmp	r6, #0	; 0x0
        2f3d44:	1a000009 	bne	2f3d70 <TInterpreter::SlowRun(long)+0x1e90>
        2f3d48:	e3300000 	teq	r0, #0	; 0x0
        2f3d4c:	1a000017 	bne	2f3db0 <TInterpreter::SlowRun(long)+0x1ed0>
        2f3d50:	e59d0014 	ldr	r0, [sp, #20]
        2f3d54:	e5900000 	ldr	r0, [r0]
        2f3d58:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f3d5c:	e5911000 	ldr	r1, [r1]
        2f3d60:	eb634132 	bl	1bc4230 <$EQRef__FlT1>
        2f3d64:	e3300000 	teq	r0, #0	; 0x0
        2f3d68:	0a000027 	beq	2f3e0c <TInterpreter::SlowRun(long)+0x1f2c>
        2f3d6c:	ea000024 	b	2f3e04 <TInterpreter::SlowRun(long)+0x1f24>
        2f3d70:	13300000 	teqne	r0, #0	; 0x0
        2f3d74:	0a00000d 	beq	2f3db0 <TInterpreter::SlowRun(long)+0x1ed0>
        2f3d78:	e28d0010 	add	r0, sp, #16	; 0x10
        2f3d7c:	eb6338f8 	bl	1bc2164 <$CDouble(RefVar const &)>
        2f3d80:	ee00c180 	mvfd	f4, f0
        2f3d84:	e28d0014 	add	r0, sp, #20	; 0x14
        2f3d88:	eb6338f5 	bl	1bc2164 <$CDouble(RefVar const &)>
        2f3d8c:	ed2d8102 	stfd	f0, [sp, -#8]!	; fField8
        2f3d90:	e8bd0003 	ldmia	sp!, {r0, r1}
        2f3d94:	ee008184 	mvfd	f0, f4
        2f3d98:	ed2d8102 	stfd	f0, [sp, -#8]!	; fField8
        2f3d9c:	e8bd000c 	ldmia	sp!, {r2, r3}
        2f3da0:	eb630332 	bl	1bb4a70 <$relation>
        2f3da4:	e3300002 	teq	r0, #2	; 0x2
        2f3da8:	1a000017 	bne	2f3e0c <TInterpreter::SlowRun(long)+0x1f2c>
        2f3dac:	ea000014 	b	2f3e04 <TInterpreter::SlowRun(long)+0x1f24>
        2f3db0:	e59d0014 	ldr	r0, [sp, #20]
        2f3db4:	e5900000 	ldr	r0, [r0]
        2f3db8:	e3100003 	tst	r0, #3	; 0x3
        2f3dbc:	159d0010 	ldrne	r0, [sp, #16]	; fField16
        2f3dc0:	15900000 	ldrne	r0, [r0]
        2f3dc4:	12000003 	andne	r0, r0, #3	; 0x3
        2f3dc8:	13300000 	teqne	r0, #0	; 0x0
        2f3dcc:	1a00000e 	bne	2f3e0c <TInterpreter::SlowRun(long)+0x1f2c>
        2f3dd0:	e28d0010 	add	r0, sp, #16	; 0x10
        2f3dd4:	eb6338e5 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        2f3dd8:	ee00c180 	mvfd	f4, f0
        2f3ddc:	e28d0014 	add	r0, sp, #20	; 0x14
        2f3de0:	eb6338e2 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        2f3de4:	ed2d8102 	stfd	f0, [sp, -#8]!	; fField8
        2f3de8:	e8bd0003 	ldmia	sp!, {r0, r1}
        2f3dec:	ee008184 	mvfd	f0, f4
        2f3df0:	ed2d8102 	stfd	f0, [sp, -#8]!	; fField8
        2f3df4:	e8bd000c 	ldmia	sp!, {r2, r3}
        2f3df8:	eb63031c 	bl	1bb4a70 <$relation>
        2f3dfc:	e3300002 	teq	r0, #2	; 0x2
        2f3e00:	1a000001 	bne	2f3e0c <TInterpreter::SlowRun(long)+0x1f2c>
        2f3e04:	e3a00000 	mov	r0, #0	; 0x0
        2f3e08:	ea000000 	b	2f3e10 <TInterpreter::SlowRun(long)+0x1f30>
        2f3e0c:	e3a00001 	mov	r0, #1	; 0x1
        2f3e10:	e1a01005 	mov	r1, r5
        2f3e14:	e3300000 	teq	r0, #0	; 0x0
        2f3e18:	03a00002 	moveq	r0, #2	; 0x2
        2f3e1c:	13a0001a 	movne	r0, #26	; 0x1a
        2f3e20:	e5911000 	ldr	r1, [r1]
        2f3e24:	e5210004 	str	r0, [r1, -#4]!	; fField4
        2f3e28:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f3e2c:	e3300000 	teq	r0, #0	; 0x0
        2f3e30:	1afffd2d 	bne	2f32ec <TInterpreter::SlowRun(long)+0x140c>
        2f3e34:	ea00006c 	b	2f3fec <TInterpreter::SlowRun(long)+0x210c>
        2f3e38:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2f3e3c:	e5d90002 	ldrb	r0, [r9, #2]	; fField2
        2f3e40:	e5d91001 	ldrb	r1, [r9, #1]
        2f3e44:	e1806401 	orr	r6, r0, r1, lsl #8
        2f3e48:	e59d0030 	ldr	r0, [sp, #48]
        2f3e4c:	e5900000 	ldr	r0, [r0]
        2f3e50:	eb634527 	bl	1bc52f4 <$ObjectPtr(long)>
        2f3e54:	e0800106 	add	r0, r0, r6, lsl #2
        2f3e58:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2f3e5c:	eb6338ba 	bl	1bc214c <$AllocateRefHandle(long)>
        2f3e60:	e58d0000 	str	r0, [sp]
        2f3e64:	e1a0100d 	mov	r1, sp
        2f3e68:	e59d002c 	ldr	r0, [sp, #44]
        2f3e6c:	e0800186 	add	r0, r0, r6, lsl #3
        2f3e70:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        2f3e74:	e1a00004 	mov	r0, r4
        2f3e78:	eb63ee5f 	bl	1bef7fc <TInterpreter::$Call(RefVar const &, long)>
        2f3e7c:	e3300000 	teq	r0, #0	; 0x0
        2f3e80:	13a07000 	movne	r7, #0	; 0x0
        2f3e84:	03a07001 	moveq	r7, #1	; 0x1
        2f3e88:	e59d0000 	ldr	r0, [sp]
        2f3e8c:	eb633cca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f3e90:	eafffd4d 	b	2f33cc <TInterpreter::SlowRun(long)+0x14ec>
        2f3e94:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f3e98:	e3a01009 	mov	r1, #9	; 0x9
        2f3e9c:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        2f3ea0:	eb6338a4 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2f3ea4:	e59d1014 	ldr	r1, [sp, #20]
        2f3ea8:	e5810000 	str	r0, [r1]
        2f3eac:	e1a01086 	mov	r1, r6, lsl #1
        2f3eb0:	e1a09001 	mov	r9, r1
        2f3eb4:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        2f3eb8:	eb63389e 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2f3ebc:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f3ec0:	e5810000 	str	r0, [r1]
        2f3ec4:	eb63450a 	bl	1bc52f4 <$ObjectPtr(long)>
        2f3ec8:	e280100c 	add	r1, r0, #12	; 0xc
        2f3ecc:	e3a00000 	mov	r0, #0	; 0x0
        2f3ed0:	e3e0c000 	mvn	ip, #0	; 0x0
        2f3ed4:	e1500086 	cmp	r0, r6, lsl #1
        2f3ed8:	aa000008 	bge	2f3f00 <TInterpreter::SlowRun(long)+0x2020>
        2f3edc:	e0603086 	rsb	r3, r0, r6, lsl #1
        2f3ee0:	e2433001 	sub	r3, r3, #1	; 0x1
        2f3ee4:	e04c3003 	sub	r3, ip, r3
        2f3ee8:	e5952000 	ldr	r2, [r5]
        2f3eec:	e7922103 	ldr	r2, [r2, r3, lsl #2]	; fField2
        2f3ef0:	e7812100 	str	r2, [r1, r0, lsl #2]	; fField2
        2f3ef4:	e2800001 	add	r0, r0, #1	; 0x1
        2f3ef8:	e1500086 	cmp	r0, r6, lsl #1
        2f3efc:	bafffff6 	blt	2f3edc <TInterpreter::SlowRun(long)+0x1ffc>
        2f3f00:	e5951000 	ldr	r1, [r5]
        2f3f04:	e0411109 	sub	r1, r1, r9, lsl #2
        2f3f08:	e5851000 	str	r1, [r5]
        2f3f0c:	e59d0014 	ldr	r0, [sp, #20]
        2f3f10:	e5900000 	ldr	r0, [r0]
        2f3f14:	eb6344f6 	bl	1bc52f4 <$ObjectPtr(long)>
        2f3f18:	e59d1018 	ldr	r1, [sp, #24]
        2f3f1c:	e5911000 	ldr	r1, [r1]
        2f3f20:	e5911000 	ldr	r1, [r1]
        2f3f24:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        2f3f28:	e8950006 	ldmia	r5, {r1, r2}
        2f3f2c:	e0511002 	subs	r1, r1, r2
        2f3f30:	42811003 	addmi	r1, r1, #3	; 0x3
        2f3f34:	e1a01141 	mov	r1, r1, asr #2
        2f3f38:	e2411001 	sub	r1, r1, #1	; 0x1
        2f3f3c:	e1a01101 	mov	r1, r1, lsl #2
        2f3f40:	e5801004 	str	r1, [r0, #4]	; fField4
        2f3f44:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        2f3f48:	e8910006 	ldmia	r1, {r1, r2}
        2f3f4c:	e0511002 	subs	r1, r1, r2
        2f3f50:	42811003 	addmi	r1, r1, #3	; 0x3
        2f3f54:	e1a01141 	mov	r1, r1, asr #2
        2f3f58:	e2411001 	sub	r1, r1, #1	; 0x1
        2f3f5c:	e1a01101 	mov	r1, r1, lsl #2
        2f3f60:	e5801008 	str	r1, [r0, #8]	; fField8
        2f3f64:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f3f68:	e5911004 	ldr	r1, [r1, #4]	; fField4
        2f3f6c:	e5911000 	ldr	r1, [r1]
        2f3f70:	e580100c 	str	r1, [r0, #12]	; fField12
        2f3f74:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f3f78:	e5911010 	ldr	r1, [r1, #16]	; fField16
        2f3f7c:	e5911000 	ldr	r1, [r1]
        2f3f80:	e5801010 	str	r1, [r0, #16]	; fField16
        2f3f84:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f3f88:	e591100c 	ldr	r1, [r1, #12]	; fField12
        2f3f8c:	e5911000 	ldr	r1, [r1]
        2f3f90:	e5801014 	str	r1, [r0, #20]
        2f3f94:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f3f98:	e5911008 	ldr	r1, [r1, #8]	; fField8
        2f3f9c:	e5911000 	ldr	r1, [r1]
        2f3fa0:	e5801020 	str	r1, [r0, #32]	; fField32
        2f3fa4:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f3fa8:	e5911000 	ldr	r1, [r1]
        2f3fac:	e5a01018 	str	r1, [r0, #24]!
        2f3fb0:	e59d0018 	ldr	r0, [sp, #24]
        2f3fb4:	e59d1014 	ldr	r1, [sp, #20]
        2f3fb8:	e5911000 	ldr	r1, [r1]
        2f3fbc:	e5900000 	ldr	r0, [r0]
        2f3fc0:	e5801000 	str	r1, [r0]
        2f3fc4:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        2f3fc8:	e8900003 	ldmia	r0, {r0, r1}
        2f3fcc:	e0500001 	subs	r0, r0, r1
        2f3fd0:	42800003 	addmi	r0, r0, #3	; 0x3
        2f3fd4:	e1a00140 	mov	r0, r0, asr #2
        2f3fd8:	e2400001 	sub	r0, r0, #1	; 0x1
        2f3fdc:	e584003c 	str	r0, [r4, #60]	; fField60
        2f3fe0:	ea000001 	b	2f3fec <TInterpreter::SlowRun(long)+0x210c>
        2f3fe4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f3fe8:	eb5d409a 	bl	1a44258 <$UndefinedBytecode(void)>
        2f3fec:	e28dd008 	add	sp, sp, #8	; 0x8
        2f3ff0:	e3370000 	teq	r7, #0	; 0x0
        2f3ff4:	0afff7f8 	beq	2f1fdc <TInterpreter::SlowRun(long)+0xfc>
        2f3ff8:	e59d001c 	ldr	r0, [sp, #28]
        2f3ffc:	e8900003 	ldmia	r0, {r0, r1}
        2f4000:	e0500001 	subs	r0, r0, r1
        2f4004:	42800003 	addmi	r0, r0, #3	; 0x3
        2f4008:	e1a00140 	mov	r0, r0, asr #2
        2f400c:	e2400001 	sub	r0, r0, #1	; 0x1
        2f4010:	e51b102c 	ldr	r1, [fp, -#44]
        2f4014:	e1500001 	cmp	r0, r1
        2f4018:	aa00000a 	bge	2f4048 <TInterpreter::SlowRun(long)+0x2168>
        2f401c:	e3a04001 	mov	r4, #1	; 0x1
        2f4020:	e59d0000 	ldr	r0, [sp]
        2f4024:	eb633c64 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4028:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2f402c:	eb633c62 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4030:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2f4034:	eb633c60 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4038:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2f403c:	eb633c5e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4040:	e1a00004 	mov	r0, r4
        2f4044:	ea00000c 	b	2f407c <TInterpreter::SlowRun(long)+0x219c>
        2f4048:	e5940060 	ldr	r0, [r4, #96]	; fField96
        2f404c:	e3300000 	teq	r0, #0	; 0x0
        2f4050:	0afff7e1 	beq	2f1fdc <TInterpreter::SlowRun(long)+0xfc>
        2f4054:	e59d0000 	ldr	r0, [sp]
        2f4058:	eb633c57 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f405c:	e3a04000 	mov	r4, #0	; 0x0
        2f4060:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2f4064:	eb633c54 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4068:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2f406c:	eb633c52 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4070:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2f4074:	eb633c50 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4078:	e1a00004 	mov	r0, r4
        2f407c:	ed1bc20f 	lfm	f4, 1, [fp, -#60]	; fField60
        2f4080:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::__ct(void)
 * Address: 002f40e0
 */
TInterpreter::TInterpreter(void) {
    /*
        2f40e0:	e1a0c00d 	mov	ip, sp
        2f40e4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f40e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f40ec:	e1b04000 	movs	r4, r0
        2f40f0:	1a000003 	bne	2f4104 <TInterpreter::__ct(void)+0x24>
        2f40f4:	e3a00080 	mov	r0, #128	; 0x80
        2f40f8:	eb63698e 	bl	1bce738 <$__nw(unsigned int)>
        2f40fc:	e1b04000 	movs	r4, r0
        2f4100:	0a00002e 	beq	2f41c0 <TInterpreter::__ct(void)+0xe0>
        2f4104:	e2840008 	add	r0, r4, #8	; 0x8
        2f4108:	e1a05000 	mov	r5, r0
        2f410c:	eb5d96e6 	bl	1a59cac <TRefStructStack::$__ct(void)>
        2f4110:	e2840020 	add	r0, r4, #32	; 0x20
        2f4114:	eb5d96e4 	bl	1a59cac <TRefStructStack::$__ct(void)>
        2f4118:	e3a00002 	mov	r0, #2	; 0x2
        2f411c:	eb63380a 	bl	1bc214c <$AllocateRefHandle(long)>
        2f4120:	e3a06000 	mov	r6, #0	; 0x0
        2f4124:	e5840038 	str	r0, [r4, #56]	; fField56
        2f4128:	e5a06004 	str	r6, [r0, #4]!	; fField4
        2f412c:	e3a00002 	mov	r0, #2	; 0x2
        2f4130:	eb633805 	bl	1bc214c <$AllocateRefHandle(long)>
        2f4134:	e5840040 	str	r0, [r4, #64]	; fField64
        2f4138:	e5a06004 	str	r6, [r0, #4]!	; fField4
        2f413c:	e3a00002 	mov	r0, #2	; 0x2
        2f4140:	eb633801 	bl	1bc214c <$AllocateRefHandle(long)>
        2f4144:	e5840044 	str	r0, [r4, #68]	; fField68
        2f4148:	e5a06004 	str	r6, [r0, #4]!	; fField4
        2f414c:	e3a00002 	mov	r0, #2	; 0x2
        2f4150:	eb6337fd 	bl	1bc214c <$AllocateRefHandle(long)>
        2f4154:	e584006c 	str	r0, [r4, #108]	; fField108
        2f4158:	e5a06004 	str	r6, [r0, #4]!	; fField4
        2f415c:	e3a00002 	mov	r0, #2	; 0x2
        2f4160:	eb6337f9 	bl	1bc214c <$AllocateRefHandle(long)>
        2f4164:	e5840070 	str	r0, [r4, #112]	; fField112
        2f4168:	e5a06004 	str	r6, [r0, #4]!	; fField4
        2f416c:	e3a00002 	mov	r0, #2	; 0x2
        2f4170:	eb6337f5 	bl	1bc214c <$AllocateRefHandle(long)>
        2f4174:	e5840074 	str	r0, [r4, #116]	; fField116
        2f4178:	e5a06004 	str	r6, [r0, #4]!	; fField4
        2f417c:	e59f0044 	ldr	r0, [pc, #44]	; 2f41c8 <TInterpreter::__ct(void)+0xe8>
        2f4180:	e5901010 	ldr	r1, [r0, #16]	; fField16
        2f4184:	e5841000 	str	r1, [r4]
        2f4188:	e5a04010 	str	r4, [r0, #16]!	; fField16
        2f418c:	e5846078 	str	r6, [r4, #120]	; fField120
        2f4190:	e5846064 	str	r6, [r4, #100]	; fField100
        2f4194:	e584607c 	str	r6, [r4, #124]	; fField124
        2f4198:	e5c46068 	strb	r6, [r4, #104]	; fField104
        2f419c:	e5c46069 	strb	r6, [r4, #105]	; fField105
        2f41a0:	e1a00005 	mov	r0, r5
        2f41a4:	e584603c 	str	r6, [r4, #60]	; fField60
        2f41a8:	eb5d8a5b 	bl	1a56b1c <TIntrpStack::$NewState(void)>
        2f41ac:	e584004c 	str	r0, [r4, #76]	; fField76
        2f41b0:	e5900000 	ldr	r0, [r0]
        2f41b4:	e5806000 	str	r6, [r0]
        2f41b8:	e1a00004 	mov	r0, r4
        2f41bc:	eb5d8e74 	bl	1a57b94 <TInterpreter::$SetFastLoopFlag(void)>
        2f41c0:	e1a00004 	mov	r0, r4
        2f41c4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2f41c8:	0c10544c 	ldceq	4, cr5, [r0], -#304
    */
}

/**
 * Symbol: TInterpreter::__dt(void)
 * Address: 002f41cc
 */
TInterpreter::~TInterpreter(void) {
    /*
        2f41cc:	e1a0c00d 	mov	ip, sp
        2f41d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2f41d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f41d8:	e1a04000 	mov	r4, r0
        2f41dc:	e1a05001 	mov	r5, r1
        2f41e0:	e59f0088 	ldr	r0, [pc, #88]	; 2f4270 <TInterpreter::__dt(void)+0xa4>	; fField88
        2f41e4:	e5901010 	ldr	r1, [r0, #16]	; fField16
        2f41e8:	e1310004 	teq	r1, r4
        2f41ec:	05941000 	ldreq	r1, [r4]
        2f41f0:	05a01010 	streq	r1, [r0, #16]!	; fField16
        2f41f4:	0a000006 	beq	2f4214 <TInterpreter::__dt(void)+0x48>
        2f41f8:	e1a00001 	mov	r0, r1
        2f41fc:	e5911000 	ldr	r1, [r1]
        2f4200:	e3310000 	teq	r1, #0	; 0x0
        2f4204:	11310004 	teqne	r1, r4
        2f4208:	1afffffa 	bne	2f41f8 <TInterpreter::__dt(void)+0x2c>
        2f420c:	e5941000 	ldr	r1, [r4]
        2f4210:	e5801000 	str	r1, [r0]
        2f4214:	e5940074 	ldr	r0, [r4, #116]	; fField116
        2f4218:	eb633be7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f421c:	e5940070 	ldr	r0, [r4, #112]	; fField112
        2f4220:	eb633be5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4224:	e594006c 	ldr	r0, [r4, #108]	; fField108
        2f4228:	eb633be3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f422c:	e5940044 	ldr	r0, [r4, #68]	; fField68
        2f4230:	eb633be1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4234:	e5940040 	ldr	r0, [r4, #64]	; fField64
        2f4238:	eb633bdf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f423c:	e5940038 	ldr	r0, [r4, #56]	; fField56
        2f4240:	eb633bdd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4244:	e2840020 	add	r0, r4, #32	; 0x20
        2f4248:	e3a01000 	mov	r1, #0	; 0x0
        2f424c:	eb5d969e 	bl	1a59ccc <TRefStructStack::$__dt(void)>
        2f4250:	e2840008 	add	r0, r4, #8	; 0x8
        2f4254:	e3a01000 	mov	r1, #0	; 0x0
        2f4258:	eb5d969b 	bl	1a59ccc <TRefStructStack::$__dt(void)>
        2f425c:	e3150001 	tst	r5, #1	; 0x1
        2f4260:	11a00004 	movne	r0, r4
        2f4264:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2f4268:	1a63651c 	bne	1bcd6e0 <$__dl(void *)>
        2f426c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2f4270:	0c10544c 	ldceq	4, cr5, [r0], -#304
    */
}

/**
 * Symbol: TInterpreter::PushValue(RefVar const &)
 * Address: 002f4274
 */
TInterpreter::PushValue(RefVar const &) {
    /*
        2f4274:	e5911000 	ldr	r1, [r1]
        2f4278:	e5911000 	ldr	r1, [r1]
        2f427c:	e5b02020 	ldr	r2, [r0, #32]!	; fField32
        2f4280:	e4821004 	str	r1, [r2], #4	; fField4
        2f4284:	e5802000 	str	r2, [r0]
        2f4288:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::PopValue(void)
 * Address: 002f428c
 */
TInterpreter::PopValue(void) {
    /*
        2f428c:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        2f4290:	e2411004 	sub	r1, r1, #4	; 0x4
        2f4294:	e5801000 	str	r1, [r0]
        2f4298:	e5910000 	ldr	r0, [r1]
        2f429c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::PeekValue(long)
 * Address: 002f42a0
 */
TInterpreter::PeekValue(long) {
    /*
        2f42a0:	e26110ff 	rsb	r1, r1, #255	; 0xff
        2f42a4:	e2411c01 	sub	r1, r1, #256	; 0x100
        2f42a8:	e5900020 	ldr	r0, [r0, #32]	; fField32
        2f42ac:	e7900101 	ldr	r0, [r0, r1, lsl #2]	; fField2
        2f42b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::SetValue(long, long)
 * Address: 002f42b4
 */
TInterpreter::SetValue(long, long) {
    /*
        2f42b4:	e26110ff 	rsb	r1, r1, #255	; 0xff
        2f42b8:	e2411c01 	sub	r1, r1, #256	; 0x100
        2f42bc:	e5900020 	ldr	r0, [r0, #32]	; fField32
        2f42c0:	e7802101 	str	r2, [r0, r1, lsl #2]	; fField2
        2f42c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::ValuePosition(void)
 * Address: 002f42c8
 */
TInterpreter::ValuePosition(void) {
    /*
        2f42c8:	e2800020 	add	r0, r0, #32	; 0x20
        2f42cc:	e8900003 	ldmia	r0, {r0, r1}
        2f42d0:	e0500001 	subs	r0, r0, r1
        2f42d4:	42800003 	addmi	r0, r0, #3	; 0x3
        2f42d8:	e1a00140 	mov	r0, r0, asr #2
        2f42dc:	e2400001 	sub	r0, r0, #1	; 0x1
        2f42e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::PeekControl(long)
 * Address: 002f42e4
 */
TInterpreter::PeekControl(long) {
    /*
        2f42e4:	e26110ff 	rsb	r1, r1, #255	; 0xff
        2f42e8:	e2411c01 	sub	r1, r1, #256	; 0x100
        2f42ec:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f42f0:	e7900101 	ldr	r0, [r0, r1, lsl #2]	; fField2
        2f42f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::SetControl(long, long)
 * Address: 002f42f8
 */
TInterpreter::SetControl(long, long) {
    /*
        2f42f8:	e26110ff 	rsb	r1, r1, #255	; 0xff
        2f42fc:	e2411c01 	sub	r1, r1, #256	; 0x100
        2f4300:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f4304:	e7802101 	str	r2, [r0, r1, lsl #2]	; fField2
        2f4308:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::ControlPosition(void)
 * Address: 002f430c
 */
TInterpreter::ControlPosition(void) {
    /*
        2f430c:	e2800008 	add	r0, r0, #8	; 0x8
        2f4310:	e8900003 	ldmia	r0, {r0, r1}
        2f4314:	e0500001 	subs	r0, r0, r1
        2f4318:	42800003 	addmi	r0, r0, #3	; 0x3
        2f431c:	e1a00140 	mov	r0, r0, asr #2
        2f4320:	e2400001 	sub	r0, r0, #1	; 0x1
        2f4324:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::TopLevelCall(RefVar const &, RefVar const &)
 * Address: 002f4328
 */
TInterpreter::TopLevelCall(RefVar const &, RefVar const &) {
    /*
        2f4328:	e1a0c00d 	mov	ip, sp
        2f432c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f4330:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f4334:	e1a04000 	mov	r4, r0
        2f4338:	e1a05001 	mov	r5, r1
        2f433c:	e59f00e0 	ldr	r0, [pc, #e0]	; 2f4424 <TInterpreter::TopLevelCall(RefVar const &, RefVar const &)+0xfc>
        2f4340:	e5900000 	ldr	r0, [r0]
        2f4344:	e2846008 	add	r6, r4, #8	; 0x8
        2f4348:	e59fc0d8 	ldr	ip, [pc, #d8]	; 2f4428 <TInterpreter::TopLevelCall(RefVar const &, RefVar const &)+0x100>
        2f434c:	e130000c 	teq	r0, ip
        2f4350:	1a000015 	bne	2f43ac <TInterpreter::TopLevelCall(RefVar const &, RefVar const &)+0x84>
        2f4354:	e59f00d0 	ldr	r0, [pc, #d0]	; 2f442c <TInterpreter::TopLevelCall(RefVar const &, RefVar const &)+0x104>
        2f4358:	e590c000 	ldr	ip, [r0]
        2f435c:	e33c0000 	teq	ip, #0	; 0x0
        2f4360:	0a000011 	beq	2f43ac <TInterpreter::TopLevelCall(RefVar const &, RefVar const &)+0x84>
        2f4364:	e59f00c4 	ldr	r0, [pc, #c4]	; 2f4430 <TInterpreter::TopLevelCall(RefVar const &, RefVar const &)+0x108>
        2f4368:	e3a02000 	mov	r2, #0	; 0x0
        2f436c:	e5903000 	ldr	r3, [r0]
        2f4370:	e92d000c 	stmdb	sp!, {r2, r3}
        2f4374:	e8960003 	ldmia	r6, {r0, r1}
        2f4378:	e0500001 	subs	r0, r0, r1
        2f437c:	42800003 	addmi	r0, r0, #3	; 0x3
        2f4380:	e1a00140 	mov	r0, r0, asr #2
        2f4384:	e2402001 	sub	r2, r0, #1	; 0x1
        2f4388:	e59f00a4 	ldr	r0, [pc, #a4]	; 2f4434 <TInterpreter::TopLevelCall(RefVar const &, RefVar const &)+0x10c>
        2f438c:	e5900000 	ldr	r0, [r0]
        2f4390:	e1a03840 	mov	r3, r0, asr #16
        2f4394:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f4398:	e2800004 	add	r0, r0, #4	; 0x4
        2f439c:	e1a01005 	mov	r1, r5
        2f43a0:	e1a0e00f 	mov	lr, pc
        2f43a4:	e1a0f00c 	mov	pc, ip
        2f43a8:	e28dd008 	add	sp, sp, #8	; 0x8
        2f43ac:	e5950000 	ldr	r0, [r5]
        2f43b0:	e5900000 	ldr	r0, [r0]
        2f43b4:	e3a01000 	mov	r1, #0	; 0x0
        2f43b8:	eb633fa5 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f43bc:	e3300032 	teq	r0, #50	; 0x32
        2f43c0:	1a000008 	bne	2f43e8 <TInterpreter::TopLevelCall(RefVar const &, RefVar const &)+0xc0>
        2f43c4:	e1a00006 	mov	r0, r6
        2f43c8:	eb5d89d3 	bl	1a56b1c <TIntrpStack::$NewState(void)>
        2f43cc:	e1a01005 	mov	r1, r5
        2f43d0:	e584004c 	str	r0, [r4, #76]	; fField76
        2f43d4:	e1a00004 	mov	r0, r4
        2f43d8:	e3a03002 	mov	r3, #2	; 0x2
        2f43dc:	e3a02000 	mov	r2, #0	; 0x0
        2f43e0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2f43e4:	ea5d7541 	b	1a518f0 <TInterpreter::$CallPlainCodeBlock(RefVar const &, long, long)>
        2f43e8:	e59f1048 	ldr	r1, [pc, #48]	; 2f4438 <TInterpreter::TopLevelCall(RefVar const &, RefVar const &)+0x110>
        2f43ec:	e5911000 	ldr	r1, [r1]
        2f43f0:	e5911000 	ldr	r1, [r1]
        2f43f4:	eb633f8d 	bl	1bc4230 <$EQRef__FlT1>
        2f43f8:	e3300000 	teq	r0, #0	; 0x0
        2f43fc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2f4400:	e1a00006 	mov	r0, r6
        2f4404:	eb5d89c4 	bl	1a56b1c <TIntrpStack::$NewState(void)>
        2f4408:	e1a01005 	mov	r1, r5
        2f440c:	e584004c 	str	r0, [r4, #76]	; fField76
        2f4410:	e1a00004 	mov	r0, r4
        2f4414:	e3a03002 	mov	r3, #2	; 0x2
        2f4418:	e3a02000 	mov	r2, #0	; 0x0
        2f441c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2f4420:	ea5d7530 	b	1a518e8 <TInterpreter::$CallCodeBlock(RefVar const &, long, long)>
        2f4424:	0c10535c 	ldceq	3, cr5, [r0], -#368
        2f4428:	66667065 	strvsbt	r7, [r6], -r5, rrx
        2f442c:	0c105360 	ldceq	3, cr5, [r0], -#384
        2f4430:	0c105364 	ldceq	3, cr5, [r0], -#400
        2f4434:	0c105560 	ldceq	5, cr5, [r0], -#384
        2f4438:	006824c8 	rsbeq	r2, r8, r8, asr #9
    */
}

/**
 * Symbol: TInterpreter::Call(RefVar const &, long)
 * Address: 002f443c
 */
TInterpreter::Call(RefVar const &, long) {
    /*
        2f443c:	e1a0c00d 	mov	ip, sp
        2f4440:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f4444:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f4448:	e1a04000 	mov	r4, r0
        2f444c:	e1a05001 	mov	r5, r1
        2f4450:	e1a06002 	mov	r6, r2
        2f4454:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2f4458:	e59f013c 	ldr	r0, [pc, #13c]	; 2f459c <TInterpreter::Call(RefVar const &, long)+0x160>
        2f445c:	e58d0008 	str	r0, [sp, #8]	; fField8
        2f4460:	e5900000 	ldr	r0, [r0]
        2f4464:	e59fa134 	ldr	sl, [pc, #134]	; 2f45a0 <TInterpreter::Call(RefVar const &, long)+0x164>
        2f4468:	e59f9134 	ldr	r9, [pc, #134]	; 2f45a4 <TInterpreter::Call(RefVar const &, long)+0x168>
        2f446c:	e2847008 	add	r7, r4, #8	; 0x8
        2f4470:	e59f1130 	ldr	r1, [pc, #130]	; 2f45a8 <TInterpreter::Call(RefVar const &, long)+0x16c>
        2f4474:	e58d1004 	str	r1, [sp, #4]	; fField4
        2f4478:	e59fc12c 	ldr	ip, [pc, #12c]	; 2f45ac <TInterpreter::Call(RefVar const &, long)+0x170>	; fField12
        2f447c:	e130000c 	teq	r0, ip
        2f4480:	1a000013 	bne	2f44d4 <TInterpreter::Call(RefVar const &, long)+0x98>
        2f4484:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2f4488:	e591c000 	ldr	ip, [r1]
        2f448c:	e33c0000 	teq	ip, #0	; 0x0
        2f4490:	0a00000f 	beq	2f44d4 <TInterpreter::Call(RefVar const &, long)+0x98>
        2f4494:	e3a02000 	mov	r2, #0	; 0x0
        2f4498:	e59a3000 	ldr	r3, [sl]
        2f449c:	e92d000c 	stmdb	sp!, {r2, r3}
        2f44a0:	e8970003 	ldmia	r7, {r0, r1}
        2f44a4:	e0500001 	subs	r0, r0, r1
        2f44a8:	42800003 	addmi	r0, r0, #3	; 0x3
        2f44ac:	e1a00140 	mov	r0, r0, asr #2
        2f44b0:	e2402001 	sub	r2, r0, #1	; 0x1
        2f44b4:	e5990000 	ldr	r0, [r9]
        2f44b8:	e1a03840 	mov	r3, r0, asr #16
        2f44bc:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f44c0:	e2800004 	add	r0, r0, #4	; 0x4
        2f44c4:	e1a01005 	mov	r1, r5
        2f44c8:	e1a0e00f 	mov	lr, pc
        2f44cc:	e1a0f00c 	mov	pc, ip
        2f44d0:	e28dd008 	add	sp, sp, #8	; 0x8
        2f44d4:	e284104c 	add	r1, r4, #76	; 0x4c
        2f44d8:	e8910003 	ldmia	r1, {r0, r1}
        2f44dc:	e1a01101 	mov	r1, r1, lsl #2
        2f44e0:	e5900000 	ldr	r0, [r0]
        2f44e4:	e5801000 	str	r1, [r0]
        2f44e8:	e5950000 	ldr	r0, [r5]
        2f44ec:	e5900000 	ldr	r0, [r0]
        2f44f0:	e3a01000 	mov	r1, #0	; 0x0
        2f44f4:	eb633f56 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f44f8:	e1a08000 	mov	r8, r0
        2f44fc:	e20000ff 	and	r0, r0, #255	; 0xff
        2f4500:	e2841020 	add	r1, r4, #32	; 0x20
        2f4504:	e3300032 	teq	r0, #50	; 0x32
        2f4508:	e58d1000 	str	r1, [sp]
        2f450c:	1a000030 	bne	2f45d4 <TInterpreter::Call(RefVar const &, long)+0x198>
        2f4510:	e3a00a01 	mov	r0, #4096	; 0x1000
        2f4514:	e2400001 	sub	r0, r0, #1	; 0x1
        2f4518:	e0100448 	ands	r0, r0, r8, asr #8
        2f451c:	0a000023 	beq	2f45b0 <TInterpreter::Call(RefVar const &, long)+0x174>
        2f4520:	e3300001 	teq	r0, #1	; 0x1
        2f4524:	1a00002a 	bne	2f45d4 <TInterpreter::Call(RefVar const &, long)+0x198>
        2f4528:	e1a00007 	mov	r0, r7
        2f452c:	e594804c 	ldr	r8, [r4, #76]	; fField76
        2f4530:	eb5d8979 	bl	1a56b1c <TIntrpStack::$NewState(void)>
        2f4534:	e584004c 	str	r0, [r4, #76]	; fField76
        2f4538:	e5981010 	ldr	r1, [r8, #16]	; fField16
        2f453c:	e5911000 	ldr	r1, [r1]
        2f4540:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2f4544:	e5801000 	str	r1, [r0]
        2f4548:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f454c:	e2800014 	add	r0, r0, #20	; 0x14
        2f4550:	e59d1000 	ldr	r1, [sp]
        2f4554:	e8910006 	ldmia	r1, {r1, r2}
        2f4558:	e0511002 	subs	r1, r1, r2
        2f455c:	42811003 	addmi	r1, r1, #3	; 0x3
        2f4560:	e1a01141 	mov	r1, r1, asr #2
        2f4564:	e2411001 	sub	r1, r1, #1	; 0x1
        2f4568:	e0411006 	sub	r1, r1, r6
        2f456c:	e2811001 	add	r1, r1, #1	; 0x1
        2f4570:	e3a02000 	mov	r2, #0	; 0x0
        2f4574:	e1821301 	orr	r1, r2, r1, lsl #6
        2f4578:	e1a01101 	mov	r1, r1, lsl #2
        2f457c:	e5900000 	ldr	r0, [r0]
        2f4580:	e5801000 	str	r1, [r0]
        2f4584:	e584205c 	str	r2, [r4, #92]	; fField92
        2f4588:	e1a02006 	mov	r2, r6
        2f458c:	e1a01005 	mov	r1, r5
        2f4590:	e1a00004 	mov	r0, r4
        2f4594:	eb5d74d4 	bl	1a518ec <TInterpreter::$CallPlainCFunction(RefVar const &, long)>
        2f4598:	ea00005d 	b	2f4714 <TInterpreter::Call(RefVar const &, long)+0x2d8>
        2f459c:	0c10535c 	ldceq	3, cr5, [r0], -#368
        2f45a0:	0c105364 	ldceq	3, cr5, [r0], -#400
        2f45a4:	0c105560 	ldceq	5, cr5, [r0], -#384
        2f45a8:	0c105360 	ldceq	3, cr5, [r0], -#384
        2f45ac:	66667065 	strvsbt	r7, [r6], -r5, rrx
        2f45b0:	e1a00007 	mov	r0, r7
        2f45b4:	eb5d8958 	bl	1a56b1c <TIntrpStack::$NewState(void)>
        2f45b8:	e1a02006 	mov	r2, r6
        2f45bc:	e1a01005 	mov	r1, r5
        2f45c0:	e584004c 	str	r0, [r4, #76]	; fField76
        2f45c4:	e1a00004 	mov	r0, r4
        2f45c8:	e3a03000 	mov	r3, #0	; 0x0
        2f45cc:	eb5d74c7 	bl	1a518f0 <TInterpreter::$CallPlainCodeBlock(RefVar const &, long, long)>
        2f45d0:	ea000067 	b	2f4774 <TInterpreter::Call(RefVar const &, long)+0x338>
        2f45d4:	e248ce23 	sub	ip, r8, #560	; 0x230
        2f45d8:	e33c0002 	teq	ip, #2	; 0x2
        2f45dc:	0a000006 	beq	2f45fc <TInterpreter::Call(RefVar const &, long)+0x1c0>
        2f45e0:	e59f0134 	ldr	r0, [pc, #134]	; 2f471c <TInterpreter::Call(RefVar const &, long)+0x2e0>
        2f45e4:	e5900000 	ldr	r0, [r0]
        2f45e8:	e5901000 	ldr	r1, [r0]
        2f45ec:	e1a00008 	mov	r0, r8
        2f45f0:	eb633f0e 	bl	1bc4230 <$EQRef__FlT1>
        2f45f4:	e3300000 	teq	r0, #0	; 0x0
        2f45f8:	0a000048 	beq	2f4720 <TInterpreter::Call(RefVar const &, long)+0x2e4>
        2f45fc:	e3a02000 	mov	r2, #0	; 0x0
        2f4600:	e1a00007 	mov	r0, r7
        2f4604:	e584205c 	str	r2, [r4, #92]	; fField92
        2f4608:	eb5d8943 	bl	1a56b1c <TIntrpStack::$NewState(void)>
        2f460c:	e584004c 	str	r0, [r4, #76]	; fField76
        2f4610:	e2800014 	add	r0, r0, #20	; 0x14
        2f4614:	e59d1000 	ldr	r1, [sp]
        2f4618:	e8910006 	ldmia	r1, {r1, r2}
        2f461c:	e0511002 	subs	r1, r1, r2
        2f4620:	42811003 	addmi	r1, r1, #3	; 0x3
        2f4624:	e1a01141 	mov	r1, r1, asr #2
        2f4628:	e2411001 	sub	r1, r1, #1	; 0x1
        2f462c:	e0411006 	sub	r1, r1, r6
        2f4630:	e2811001 	add	r1, r1, #1	; 0x1
        2f4634:	e3a02000 	mov	r2, #0	; 0x0
        2f4638:	e1821301 	orr	r1, r2, r1, lsl #6
        2f463c:	e1a01101 	mov	r1, r1, lsl #2
        2f4640:	e5900000 	ldr	r0, [r0]
        2f4644:	e28830ce 	add	r3, r8, #206	; 0xce
        2f4648:	e2533c03 	subs	r3, r3, #768	; 0x300
        2f464c:	e5801000 	str	r1, [r0]
        2f4650:	13a03001 	movne	r3, #1	; 0x1
        2f4654:	e1a02006 	mov	r2, r6
        2f4658:	e1a01005 	mov	r1, r5
        2f465c:	e1a00004 	mov	r0, r4
        2f4660:	eb5d2201 	bl	1a3ce6c <TInterpreter::$CallCFunction(RefVar const &, long, int)>
        2f4664:	e1a00007 	mov	r0, r7
        2f4668:	eb5d8933 	bl	1a56b3c <TIntrpStack::$PrevState(void)>
        2f466c:	e584004c 	str	r0, [r4, #76]	; fField76
        2f4670:	e5900000 	ldr	r0, [r0]
        2f4674:	e5900000 	ldr	r0, [r0]
        2f4678:	e3100003 	tst	r0, #3	; 0x3
        2f467c:	01a00140 	moveq	r0, r0, asr #2
        2f4680:	0a000000 	beq	2f4688 <TInterpreter::Call(RefVar const &, long)+0x24c>
        2f4684:	eb6336a4 	bl	1bc211c <$_RINTError(long)>
        2f4688:	e5840050 	str	r0, [r4, #80]	; fField80
        2f468c:	e1a01000 	mov	r1, r0
        2f4690:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f4694:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2f4698:	e5900000 	ldr	r0, [r0]
        2f469c:	e3300002 	teq	r0, #2	; 0x2
        2f46a0:	13710001 	cmnne	r1, #1	; 0x1
        2f46a4:	11a00004 	movne	r0, r4
        2f46a8:	1b5d8d3a 	blne	1a57b98 <TInterpreter::$SetFlags(void)>
        2f46ac:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2f46b0:	e5900000 	ldr	r0, [r0]
        2f46b4:	e51fc110 	ldr	ip, [pc, #fffffef0]	; 2f45ac <TInterpreter::Call(RefVar const &, long)+0x170>
        2f46b8:	e130000c 	teq	r0, ip
        2f46bc:	1a000014 	bne	2f4714 <TInterpreter::Call(RefVar const &, long)+0x2d8>
        2f46c0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2f46c4:	e591c000 	ldr	ip, [r1]
        2f46c8:	e33c0000 	teq	ip, #0	; 0x0
        2f46cc:	0a000010 	beq	2f4714 <TInterpreter::Call(RefVar const &, long)+0x2d8>
        2f46d0:	e3a02002 	mov	r2, #2	; 0x2
        2f46d4:	e59a3000 	ldr	r3, [sl]
        2f46d8:	e92d000c 	stmdb	sp!, {r2, r3}
        2f46dc:	e5970004 	ldr	r0, [r7, #4]	; fField4
        2f46e0:	e5971000 	ldr	r1, [r7]
        2f46e4:	e0510000 	subs	r0, r1, r0
        2f46e8:	42800003 	addmi	r0, r0, #3	; 0x3
        2f46ec:	e1a00140 	mov	r0, r0, asr #2
        2f46f0:	e2402001 	sub	r2, r0, #1	; 0x1
        2f46f4:	e5990000 	ldr	r0, [r9]
        2f46f8:	e1a03840 	mov	r3, r0, asr #16
        2f46fc:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        2f4700:	e2800004 	add	r0, r0, #4	; 0x4
        2f4704:	e1a01005 	mov	r1, r5
        2f4708:	e1a0e00f 	mov	lr, pc
        2f470c:	e1a0f00c 	mov	pc, ip
        2f4710:	e28dd008 	add	sp, sp, #8	; 0x8
        2f4714:	e3a00001 	mov	r0, #1	; 0x1
        2f4718:	ea000016 	b	2f4778 <TInterpreter::Call(RefVar const &, long)+0x33c>
        2f471c:	006820a8 	rsbeq	r2, r8, r8, lsr #1
        2f4720:	e59f0038 	ldr	r0, [pc, #38]	; 2f4760 <TInterpreter::Call(RefVar const &, long)+0x324>
        2f4724:	e5900000 	ldr	r0, [r0]
        2f4728:	e5901000 	ldr	r1, [r0]
        2f472c:	e1a00008 	mov	r0, r8
        2f4730:	eb633ebe 	bl	1bc4230 <$EQRef__FlT1>
        2f4734:	e3300000 	teq	r0, #0	; 0x0
        2f4738:	0a000009 	beq	2f4764 <TInterpreter::Call(RefVar const &, long)+0x328>
        2f473c:	e1a00007 	mov	r0, r7
        2f4740:	eb5d88f5 	bl	1a56b1c <TIntrpStack::$NewState(void)>
        2f4744:	e1a02006 	mov	r2, r6
        2f4748:	e1a01005 	mov	r1, r5
        2f474c:	e584004c 	str	r0, [r4, #76]	; fField76
        2f4750:	e1a00004 	mov	r0, r4
        2f4754:	e3a03000 	mov	r3, #0	; 0x0
        2f4758:	eb5d7462 	bl	1a518e8 <TInterpreter::$CallCodeBlock(RefVar const &, long, long)>
        2f475c:	ea000004 	b	2f4774 <TInterpreter::Call(RefVar const &, long)+0x338>
        2f4760:	006824c8 	rsbeq	r2, r8, r8, asr #9
        2f4764:	e1a01005 	mov	r1, r5
        2f4768:	e3a000e5 	mov	r0, #229	; 0xe5
        2f476c:	e2400cbe 	sub	r0, r0, #48640	; 0xbe00
        2f4770:	eb644f39 	bl	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f4774:	e3a00000 	mov	r0, #0	; 0x0
        2f4778:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)
 * Address: 002f477c
 */
TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long) {
    /*
        2f477c:	e1a0c00d 	mov	ip, sp
        2f4780:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2f4784:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f4788:	e24cb014 	sub	fp, ip, #20	; 0x14
        2f478c:	e1a04000 	mov	r4, r0
        2f4790:	e1a06001 	mov	r6, r1
        2f4794:	e1a05003 	mov	r5, r3
        2f4798:	e59b8014 	ldr	r8, [fp, #20]
        2f479c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f47a0:	e59f0114 	ldr	r0, [pc, #114]	; 2f48bc <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x140>
        2f47a4:	e58d0004 	str	r0, [sp, #4]	; fField4
        2f47a8:	e5900000 	ldr	r0, [r0]
        2f47ac:	e59fa10c 	ldr	sl, [pc, #10c]	; 2f48c0 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x144>
        2f47b0:	e59f910c 	ldr	r9, [pc, #10c]	; 2f48c4 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x148>
        2f47b4:	e2847008 	add	r7, r4, #8	; 0x8
        2f47b8:	e59f1108 	ldr	r1, [pc, #108]	; 2f48c8 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x14c>	; fField108
        2f47bc:	e58d1000 	str	r1, [sp]
        2f47c0:	e59fc104 	ldr	ip, [pc, #104]	; 2f48cc <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x150>	; fField104
        2f47c4:	e130000c 	teq	r0, ip
        2f47c8:	1a000013 	bne	2f481c <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0xa0>
        2f47cc:	e59d1000 	ldr	r1, [sp]
        2f47d0:	e591c000 	ldr	ip, [r1]
        2f47d4:	e33c0000 	teq	ip, #0	; 0x0
        2f47d8:	0a00000f 	beq	2f481c <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0xa0>
        2f47dc:	e3a02001 	mov	r2, #1	; 0x1
        2f47e0:	e59a3000 	ldr	r3, [sl]
        2f47e4:	e92d000c 	stmdb	sp!, {r2, r3}
        2f47e8:	e8970003 	ldmia	r7, {r0, r1}
        2f47ec:	e0500001 	subs	r0, r0, r1
        2f47f0:	42800003 	addmi	r0, r0, #3	; 0x3
        2f47f4:	e1a00140 	mov	r0, r0, asr #2
        2f47f8:	e2402001 	sub	r2, r0, #1	; 0x1
        2f47fc:	e5990000 	ldr	r0, [r9]
        2f4800:	e1a03840 	mov	r3, r0, asr #16
        2f4804:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f4808:	e2800004 	add	r0, r0, #4	; 0x4
        2f480c:	e1a01005 	mov	r1, r5
        2f4810:	e1a0e00f 	mov	lr, pc
        2f4814:	e1a0f00c 	mov	pc, ip
        2f4818:	e28dd008 	add	sp, sp, #8	; 0x8
        2f481c:	e284104c 	add	r1, r4, #76	; 0x4c
        2f4820:	e8910003 	ldmia	r1, {r0, r1}
        2f4824:	e1a01101 	mov	r1, r1, lsl #2
        2f4828:	e5900000 	ldr	r0, [r0]
        2f482c:	e5801000 	str	r1, [r0]
        2f4830:	e1a00007 	mov	r0, r7
        2f4834:	eb5d88b8 	bl	1a56b1c <TIntrpStack::$NewState(void)>
        2f4838:	e584004c 	str	r0, [r4, #76]	; fField76
        2f483c:	e5961000 	ldr	r1, [r6]
        2f4840:	e5911000 	ldr	r1, [r1]
        2f4844:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2f4848:	e5801000 	str	r1, [r0]
        2f484c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f4850:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        2f4854:	e5921000 	ldr	r1, [r2]
        2f4858:	e5911000 	ldr	r1, [r1]
        2f485c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2f4860:	e5801000 	str	r1, [r0]
        2f4864:	e5950000 	ldr	r0, [r5]
        2f4868:	e5900000 	ldr	r0, [r0]
        2f486c:	e3a01000 	mov	r1, #0	; 0x0
        2f4870:	eb633e77 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f4874:	e1a06000 	mov	r6, r0
        2f4878:	e20000ff 	and	r0, r0, #255	; 0xff
        2f487c:	e3300032 	teq	r0, #50	; 0x32
        2f4880:	1a000018 	bne	2f48e8 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x16c>
        2f4884:	e3a00a01 	mov	r0, #4096	; 0x1000
        2f4888:	e2400001 	sub	r0, r0, #1	; 0x1
        2f488c:	e0100446 	ands	r0, r0, r6, asr #8
        2f4890:	0a00000e 	beq	2f48d0 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x154>
        2f4894:	e3300001 	teq	r0, #1	; 0x1
        2f4898:	1a000012 	bne	2f48e8 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x16c>
        2f489c:	e3a06001 	mov	r6, #1	; 0x1
        2f48a0:	e1a02008 	mov	r2, r8
        2f48a4:	e1a01005 	mov	r1, r5
        2f48a8:	e584605c 	str	r6, [r4, #92]	; fField92
        2f48ac:	e1a00004 	mov	r0, r4
        2f48b0:	eb5d740d 	bl	1a518ec <TInterpreter::$CallPlainCFunction(RefVar const &, long)>
        2f48b4:	e1a00006 	mov	r0, r6
        2f48b8:	ea000064 	b	2f4a50 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x2d4>
        2f48bc:	0c10535c 	ldceq	3, cr5, [r0], -#368
        2f48c0:	0c105364 	ldceq	3, cr5, [r0], -#400
        2f48c4:	0c105560 	ldceq	5, cr5, [r0], -#384
        2f48c8:	0c105360 	ldceq	3, cr5, [r0], -#384
        2f48cc:	66667065 	strvsbt	r7, [r6], -r5, rrx
        2f48d0:	e1a02008 	mov	r2, r8
        2f48d4:	e1a01005 	mov	r1, r5
        2f48d8:	e1a00004 	mov	r0, r4
        2f48dc:	e3a03001 	mov	r3, #1	; 0x1
        2f48e0:	eb5d7402 	bl	1a518f0 <TInterpreter::$CallPlainCodeBlock(RefVar const &, long, long)>
        2f48e4:	ea000058 	b	2f4a4c <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x2d0>
        2f48e8:	e246ce23 	sub	ip, r6, #560	; 0x230
        2f48ec:	e33c0002 	teq	ip, #2	; 0x2
        2f48f0:	0a000006 	beq	2f4910 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x194>
        2f48f4:	e59f0104 	ldr	r0, [pc, #104]	; 2f4a00 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x284>	; fField104
        2f48f8:	e5900000 	ldr	r0, [r0]
        2f48fc:	e5901000 	ldr	r1, [r0]
        2f4900:	e1a00006 	mov	r0, r6
        2f4904:	eb633e49 	bl	1bc4230 <$EQRef__FlT1>
        2f4908:	e3300000 	teq	r0, #0	; 0x0
        2f490c:	0a00003c 	beq	2f4a04 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x288>
        2f4910:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f4914:	e2810008 	add	r0, r1, #8	; 0x8
        2f4918:	e5911010 	ldr	r1, [r1, #16]	; fField16
        2f491c:	e5911000 	ldr	r1, [r1]
        2f4920:	e5900000 	ldr	r0, [r0]
        2f4924:	e5801000 	str	r1, [r0]
        2f4928:	e3a00001 	mov	r0, #1	; 0x1
        2f492c:	e28630ce 	add	r3, r6, #206	; 0xce
        2f4930:	e2533c03 	subs	r3, r3, #768	; 0x300
        2f4934:	e584005c 	str	r0, [r4, #92]	; fField92
        2f4938:	13a03001 	movne	r3, #1	; 0x1
        2f493c:	e1a02008 	mov	r2, r8
        2f4940:	e1a01005 	mov	r1, r5
        2f4944:	e1a00004 	mov	r0, r4
        2f4948:	eb5d2147 	bl	1a3ce6c <TInterpreter::$CallCFunction(RefVar const &, long, int)>
        2f494c:	e1a00007 	mov	r0, r7
        2f4950:	eb5d8879 	bl	1a56b3c <TIntrpStack::$PrevState(void)>
        2f4954:	e584004c 	str	r0, [r4, #76]	; fField76
        2f4958:	e5900000 	ldr	r0, [r0]
        2f495c:	e5900000 	ldr	r0, [r0]
        2f4960:	e3100003 	tst	r0, #3	; 0x3
        2f4964:	01a00140 	moveq	r0, r0, asr #2
        2f4968:	0a000000 	beq	2f4970 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x1f4>
        2f496c:	eb6335ea 	bl	1bc211c <$_RINTError(long)>
        2f4970:	e5840050 	str	r0, [r4, #80]	; fField80
        2f4974:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f4978:	e5911004 	ldr	r1, [r1, #4]	; fField4
        2f497c:	e5911000 	ldr	r1, [r1]
        2f4980:	e3310002 	teq	r1, #2	; 0x2
        2f4984:	13700001 	cmnne	r0, #1	; 0x1
        2f4988:	11a00004 	movne	r0, r4
        2f498c:	1b5d8c81 	blne	1a57b98 <TInterpreter::$SetFlags(void)>
        2f4990:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2f4994:	e5900000 	ldr	r0, [r0]
        2f4998:	e51fc0d4 	ldr	ip, [pc, #ffffff2c]	; 2f48cc <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x150>
        2f499c:	e130000c 	teq	r0, ip
        2f49a0:	1a000014 	bne	2f49f8 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x27c>
        2f49a4:	e59d1000 	ldr	r1, [sp]
        2f49a8:	e591c000 	ldr	ip, [r1]
        2f49ac:	e33c0000 	teq	ip, #0	; 0x0
        2f49b0:	0a000010 	beq	2f49f8 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x27c>
        2f49b4:	e3a02002 	mov	r2, #2	; 0x2
        2f49b8:	e59a3000 	ldr	r3, [sl]
        2f49bc:	e92d000c 	stmdb	sp!, {r2, r3}
        2f49c0:	e5970004 	ldr	r0, [r7, #4]	; fField4
        2f49c4:	e5971000 	ldr	r1, [r7]
        2f49c8:	e0510000 	subs	r0, r1, r0
        2f49cc:	42800003 	addmi	r0, r0, #3	; 0x3
        2f49d0:	e1a00140 	mov	r0, r0, asr #2
        2f49d4:	e2402001 	sub	r2, r0, #1	; 0x1
        2f49d8:	e5990000 	ldr	r0, [r9]
        2f49dc:	e1a03840 	mov	r3, r0, asr #16
        2f49e0:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        2f49e4:	e2800004 	add	r0, r0, #4	; 0x4
        2f49e8:	e1a01005 	mov	r1, r5
        2f49ec:	e1a0e00f 	mov	lr, pc
        2f49f0:	e1a0f00c 	mov	pc, ip
        2f49f4:	e28dd008 	add	sp, sp, #8	; 0x8
        2f49f8:	e3a00001 	mov	r0, #1	; 0x1
        2f49fc:	ea000013 	b	2f4a50 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x2d4>
        2f4a00:	006820a8 	rsbeq	r2, r8, r8, lsr #1
        2f4a04:	e59f002c 	ldr	r0, [pc, #2c]	; 2f4a38 <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x2bc>	; fField2
        2f4a08:	e5900000 	ldr	r0, [r0]
        2f4a0c:	e5901000 	ldr	r1, [r0]
        2f4a10:	e1a00006 	mov	r0, r6
        2f4a14:	eb633e05 	bl	1bc4230 <$EQRef__FlT1>
        2f4a18:	e3300000 	teq	r0, #0	; 0x0
        2f4a1c:	0a000006 	beq	2f4a3c <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x2c0>
        2f4a20:	e1a02008 	mov	r2, r8
        2f4a24:	e1a01005 	mov	r1, r5
        2f4a28:	e1a00004 	mov	r0, r4
        2f4a2c:	e3a03001 	mov	r3, #1	; 0x1
        2f4a30:	eb5d73ac 	bl	1a518e8 <TInterpreter::$CallCodeBlock(RefVar const &, long, long)>
        2f4a34:	ea000004 	b	2f4a4c <TInterpreter::Send(RefVar const &, RefVar const &, RefVar const &, long)+0x2d0>
        2f4a38:	006824c8 	rsbeq	r2, r8, r8, asr #9
        2f4a3c:	e1a01005 	mov	r1, r5
        2f4a40:	e3a000e5 	mov	r0, #229	; 0xe5
        2f4a44:	e2400cbe 	sub	r0, r0, #48640	; 0xbe00
        2f4a48:	eb644e83 	bl	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f4a4c:	e3a00000 	mov	r0, #0	; 0x0
        2f4a50:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::CallCodeBlock(RefVar const &, long, long)
 * Address: 002f4a54
 */
TInterpreter::CallCodeBlock(RefVar const &, long, long) {
    /*
        2f4a54:	e1a0c00d 	mov	ip, sp
        2f4a58:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f4a5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f4a60:	e1a04000 	mov	r4, r0
        2f4a64:	e1a07001 	mov	r7, r1
        2f4a68:	e1a05002 	mov	r5, r2
        2f4a6c:	e1a06003 	mov	r6, r3
        2f4a70:	e590004c 	ldr	r0, [r0, #76]	; fField76
        2f4a74:	e5911000 	ldr	r1, [r1]
        2f4a78:	e5911000 	ldr	r1, [r1]
        2f4a7c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2f4a80:	e5801000 	str	r1, [r0]
        2f4a84:	e3a00000 	mov	r0, #0	; 0x0
        2f4a88:	e5840050 	str	r0, [r4, #80]	; fField80
        2f4a8c:	e5970000 	ldr	r0, [r7]
        2f4a90:	e5900000 	ldr	r0, [r0]
        2f4a94:	e3a01004 	mov	r1, #4	; 0x4
        2f4a98:	eb633ded 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f4a9c:	e3100003 	tst	r0, #3	; 0x3
        2f4aa0:	01a00140 	moveq	r0, r0, asr #2
        2f4aa4:	0a000000 	beq	2f4aac <TInterpreter::CallCodeBlock(RefVar const &, long, long)+0x58>
        2f4aa8:	eb63359b 	bl	1bc211c <$_RINTError(long)>
        2f4aac:	e1300005 	teq	r0, r5
        2f4ab0:	0a000005 	beq	2f4acc <TInterpreter::CallCodeBlock(RefVar const &, long, long)+0x78>
        2f4ab4:	e59f0100 	ldr	r0, [pc, #100]	; 2f4bbc <TInterpreter::CallCodeBlock(RefVar const &, long, long)+0x168>	; fField100
        2f4ab8:	e5900000 	ldr	r0, [r0]
        2f4abc:	e3a02000 	mov	r2, #0	; 0x0
        2f4ac0:	e3a0105d 	mov	r1, #93	; 0x5d
        2f4ac4:	e2411cbf 	sub	r1, r1, #48896	; 0xbf00
        2f4ac8:	eb63b9b3 	bl	1be319c <$Throw>
        2f4acc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f4ad0:	e5970000 	ldr	r0, [r7]
        2f4ad4:	e5900000 	ldr	r0, [r0]
        2f4ad8:	e3a01003 	mov	r1, #3	; 0x3
        2f4adc:	eb633ddc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f4ae0:	eb633599 	bl	1bc214c <$AllocateRefHandle(long)>
        2f4ae4:	e58d0000 	str	r0, [sp]
        2f4ae8:	e1a0000d 	mov	r0, sp
        2f4aec:	eb63359e 	bl	1bc216c <$Clone(RefVar const &)>
        2f4af0:	e59d1000 	ldr	r1, [sp]
        2f4af4:	e3a07000 	mov	r7, #0	; 0x0
        2f4af8:	e2848020 	add	r8, r4, #32	; 0x20
        2f4afc:	e3550000 	cmp	r5, #0	; 0x0
        2f4b00:	e5810000 	str	r0, [r1]
        2f4b04:	da00000d 	ble	2f4b40 <TInterpreter::CallCodeBlock(RefVar const &, long, long)+0xec>
        2f4b08:	e59d0000 	ldr	r0, [sp]
        2f4b0c:	e5900000 	ldr	r0, [r0]
        2f4b10:	e0451007 	sub	r1, r5, r7
        2f4b14:	e281a002 	add	sl, r1, #2	; 0x2
        2f4b18:	e5982000 	ldr	r2, [r8]
        2f4b1c:	e2422004 	sub	r2, r2, #4	; 0x4
        2f4b20:	e5882000 	str	r2, [r8]
        2f4b24:	e5929000 	ldr	r9, [r2]
        2f4b28:	eb6341f1 	bl	1bc52f4 <$ObjectPtr(long)>
        2f4b2c:	e080010a 	add	r0, r0, sl, lsl #2
        2f4b30:	e2877001 	add	r7, r7, #1	; 0x1
        2f4b34:	e1570005 	cmp	r7, r5
        2f4b38:	e5a0900c 	str	r9, [r0, #12]!	; fField12
        2f4b3c:	bafffff1 	blt	2f4b08 <TInterpreter::CallCodeBlock(RefVar const &, long, long)+0xb4>
        2f4b40:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f4b44:	e2800014 	add	r0, r0, #20	; 0x14
        2f4b48:	e5981004 	ldr	r1, [r8, #4]	; fField4
        2f4b4c:	e5982000 	ldr	r2, [r8]
        2f4b50:	e0521001 	subs	r1, r2, r1
        2f4b54:	42811003 	addmi	r1, r1, #3	; 0x3
        2f4b58:	e1a01141 	mov	r1, r1, asr #2
        2f4b5c:	e2412003 	sub	r2, r1, #3	; 0x3
        2f4b60:	e2161002 	ands	r1, r6, #2	; 0x2
        2f4b64:	13a01002 	movne	r1, #2	; 0x2
        2f4b68:	e201103f 	and	r1, r1, #63	; 0x3f
        2f4b6c:	e1811302 	orr	r1, r1, r2, lsl #6
        2f4b70:	e1a01101 	mov	r1, r1, lsl #2
        2f4b74:	e5900000 	ldr	r0, [r0]
        2f4b78:	e5801000 	str	r1, [r0]
        2f4b7c:	e59d0000 	ldr	r0, [sp]
        2f4b80:	e5900000 	ldr	r0, [r0]
        2f4b84:	eb6341da 	bl	1bc52f4 <$ObjectPtr(long)>
        2f4b88:	e280000c 	add	r0, r0, #12	; 0xc
        2f4b8c:	e3160001 	tst	r6, #1	; 0x1
        2f4b90:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f4b94:	e2811010 	add	r1, r1, #16	; 0x10
        2f4b98:	0a000008 	beq	2f4bc0 <TInterpreter::CallCodeBlock(RefVar const &, long, long)+0x16c>
        2f4b9c:	e5911000 	ldr	r1, [r1]
        2f4ba0:	e5911000 	ldr	r1, [r1]
        2f4ba4:	e5801004 	str	r1, [r0, #4]	; fField4
        2f4ba8:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f4bac:	e591100c 	ldr	r1, [r1, #12]	; fField12
        2f4bb0:	e5911000 	ldr	r1, [r1]
        2f4bb4:	e5a01008 	str	r1, [r0, #8]!	; fField8
        2f4bb8:	ea000007 	b	2f4bdc <TInterpreter::CallCodeBlock(RefVar const &, long, long)+0x188>
        2f4bbc:	00371300 	eoreqs	r1, r7, r0, lsl #6
        2f4bc0:	e5902004 	ldr	r2, [r0, #4]	; fField4
        2f4bc4:	e5911000 	ldr	r1, [r1]
        2f4bc8:	e5812000 	str	r2, [r1]
        2f4bcc:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f4bd0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f4bd4:	e591100c 	ldr	r1, [r1, #12]	; fField12
        2f4bd8:	e5810000 	str	r0, [r1]
        2f4bdc:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f4be0:	e59d1000 	ldr	r1, [sp]
        2f4be4:	e5911000 	ldr	r1, [r1]
        2f4be8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f4bec:	e5801000 	str	r1, [r0]
        2f4bf0:	e1a00004 	mov	r0, r4
        2f4bf4:	eb5d8be7 	bl	1a57b98 <TInterpreter::$SetFlags(void)>
        2f4bf8:	e59d0000 	ldr	r0, [sp]
        2f4bfc:	eb63396e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4c00:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::CallPlainCodeBlock(RefVar const &, long, long)
 * Address: 002f4c04
 */
TInterpreter::CallPlainCodeBlock(RefVar const &, long, long) {
    /*
        2f4c04:	e1a0c00d 	mov	ip, sp
        2f4c08:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2f4c0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f4c10:	e1a04000 	mov	r4, r0
        2f4c14:	e1a07001 	mov	r7, r1
        2f4c18:	e1a06002 	mov	r6, r2
        2f4c1c:	e1a05003 	mov	r5, r3
        2f4c20:	e5910000 	ldr	r0, [r1]
        2f4c24:	e5900000 	ldr	r0, [r0]
        2f4c28:	eb5d3538 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2f4c2c:	e1a09000 	mov	r9, r0
        2f4c30:	e590001c 	ldr	r0, [r0, #28]
        2f4c34:	e1a01120 	mov	r1, r0, lsr #2
        2f4c38:	e1a00801 	mov	r0, r1, lsl #16
        2f4c3c:	e1a08841 	mov	r8, r1, asr #16
        2f4c40:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f4c44:	e5972000 	ldr	r2, [r7]
        2f4c48:	e5922000 	ldr	r2, [r2]
        2f4c4c:	e5911004 	ldr	r1, [r1, #4]	; fField4
        2f4c50:	e5812000 	str	r2, [r1]
        2f4c54:	e3a01000 	mov	r1, #0	; 0x0
        2f4c58:	e1360820 	teq	r6, r0, lsr #16
        2f4c5c:	e5841050 	str	r1, [r4, #80]	; fField80
        2f4c60:	0a000005 	beq	2f4c7c <TInterpreter::CallPlainCodeBlock(RefVar const &, long, long)+0x78>
        2f4c64:	e59f00b8 	ldr	r0, [pc, #b8]	; 2f4d24 <TInterpreter::CallPlainCodeBlock(RefVar const &, long, long)+0x120>
        2f4c68:	e5900000 	ldr	r0, [r0]
        2f4c6c:	e3a02000 	mov	r2, #0	; 0x0
        2f4c70:	e3a0105d 	mov	r1, #93	; 0x5d
        2f4c74:	e2411cbf 	sub	r1, r1, #48896	; 0xbf00
        2f4c78:	eb63b947 	bl	1be319c <$Throw>
        2f4c7c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f4c80:	e2801014 	add	r1, r0, #20	; 0x14
        2f4c84:	e2840020 	add	r0, r4, #32	; 0x20
        2f4c88:	e1a07000 	mov	r7, r0
        2f4c8c:	e8900005 	ldmia	r0, {r0, r2}
        2f4c90:	e0500002 	subs	r0, r0, r2
        2f4c94:	42800003 	addmi	r0, r0, #3	; 0x3
        2f4c98:	e1a00140 	mov	r0, r0, asr #2
        2f4c9c:	e2400001 	sub	r0, r0, #1	; 0x1
        2f4ca0:	e0400006 	sub	r0, r0, r6
        2f4ca4:	e2400002 	sub	r0, r0, #2	; 0x2
        2f4ca8:	e3150002 	tst	r5, #2	; 0x2
        2f4cac:	03a02001 	moveq	r2, #1	; 0x1
        2f4cb0:	13a02003 	movne	r2, #3	; 0x3
        2f4cb4:	e202203f 	and	r2, r2, #63	; 0x3f
        2f4cb8:	e1820300 	orr	r0, r2, r0, lsl #6
        2f4cbc:	e1a00100 	mov	r0, r0, lsl #2
        2f4cc0:	e5911000 	ldr	r1, [r1]
        2f4cc4:	e5810000 	str	r0, [r1]
        2f4cc8:	e5b90018 	ldr	r0, [r9, #24]!
        2f4ccc:	e3300002 	teq	r0, #2	; 0x2
        2f4cd0:	0a00002d 	beq	2f4d8c <TInterpreter::CallPlainCodeBlock(RefVar const &, long, long)+0x188>
        2f4cd4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f4cd8:	eb63351b 	bl	1bc214c <$AllocateRefHandle(long)>
        2f4cdc:	e58d0000 	str	r0, [sp]
        2f4ce0:	e1a0000d 	mov	r0, sp
        2f4ce4:	eb633520 	bl	1bc216c <$Clone(RefVar const &)>
        2f4ce8:	e59d1000 	ldr	r1, [sp]
        2f4cec:	e5810000 	str	r0, [r1]
        2f4cf0:	eb63417f 	bl	1bc52f4 <$ObjectPtr(long)>
        2f4cf4:	e280000c 	add	r0, r0, #12	; 0xc
        2f4cf8:	e3150001 	tst	r5, #1	; 0x1
        2f4cfc:	0a000012 	beq	2f4d4c <TInterpreter::CallPlainCodeBlock(RefVar const &, long, long)+0x148>
        2f4d00:	e3a01002 	mov	r1, #2	; 0x2
        2f4d04:	e5902004 	ldr	r2, [r0, #4]	; fField4
        2f4d08:	e3320000 	teq	r2, #0	; 0x0
        2f4d0c:	0a000005 	beq	2f4d28 <TInterpreter::CallPlainCodeBlock(RefVar const &, long, long)+0x124>
        2f4d10:	e594204c 	ldr	r2, [r4, #76]	; fField76
        2f4d14:	e5922010 	ldr	r2, [r2, #16]	; fField16
        2f4d18:	e5922000 	ldr	r2, [r2]
        2f4d1c:	e5802004 	str	r2, [r0, #4]	; fField4
        2f4d20:	ea000001 	b	2f4d2c <TInterpreter::CallPlainCodeBlock(RefVar const &, long, long)+0x128>
        2f4d24:	00371300 	eoreqs	r1, r7, r0, lsl #6
        2f4d28:	e5801004 	str	r1, [r0, #4]	; fField4
        2f4d2c:	e5902008 	ldr	r2, [r0, #8]	; fField8
        2f4d30:	e3320000 	teq	r2, #0	; 0x0
        2f4d34:	0a000002 	beq	2f4d44 <TInterpreter::CallPlainCodeBlock(RefVar const &, long, long)+0x140>
        2f4d38:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f4d3c:	e591100c 	ldr	r1, [r1, #12]	; fField12
        2f4d40:	e5911000 	ldr	r1, [r1]
        2f4d44:	e5a01008 	str	r1, [r0, #8]!	; fField8
        2f4d48:	ea000007 	b	2f4d6c <TInterpreter::CallPlainCodeBlock(RefVar const &, long, long)+0x168>
        2f4d4c:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f4d50:	e5902004 	ldr	r2, [r0, #4]	; fField4
        2f4d54:	e5911010 	ldr	r1, [r1, #16]	; fField16
        2f4d58:	e5812000 	str	r2, [r1]
        2f4d5c:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f4d60:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f4d64:	e591100c 	ldr	r1, [r1, #12]	; fField12
        2f4d68:	e5810000 	str	r0, [r1]
        2f4d6c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f4d70:	e59d1000 	ldr	r1, [sp]
        2f4d74:	e5911000 	ldr	r1, [r1]
        2f4d78:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f4d7c:	e5801000 	str	r1, [r0]
        2f4d80:	e59d0000 	ldr	r0, [sp]
        2f4d84:	eb63390c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4d88:	e28dd004 	add	sp, sp, #4	; 0x4
        2f4d8c:	e3380000 	teq	r8, #0	; 0x0
        2f4d90:	11a00007 	movne	r0, r7
        2f4d94:	11a01008 	movne	r1, r8
        2f4d98:	1b5d876a 	blne	1a56b48 <TRefStack::$PushNILs(long)>
        2f4d9c:	e1a00004 	mov	r0, r4
        2f4da0:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2f4da4:	ea5d8b7b 	b	1a57b98 <TInterpreter::$SetFlags(void)>
    */
}

/**
 * Symbol: TInterpreter::CallCFunction(RefVar const &, long, int)
 * Address: 002f4da8
 */
TInterpreter::CallCFunction(RefVar const &, long, int) {
    /*
        2f4da8:	e1a0c00d 	mov	ip, sp
        2f4dac:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2f4db0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f4db4:	e1a05000 	mov	r5, r0
        2f4db8:	e1a04001 	mov	r4, r1
        2f4dbc:	e1a06002 	mov	r6, r2
        2f4dc0:	e1a07003 	mov	r7, r3
        2f4dc4:	e590004c 	ldr	r0, [r0, #76]	; fField76
        2f4dc8:	e5911000 	ldr	r1, [r1]
        2f4dcc:	e5911000 	ldr	r1, [r1]
        2f4dd0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2f4dd4:	e5801000 	str	r1, [r0]
        2f4dd8:	e3e00000 	mvn	r0, #0	; 0x0
        2f4ddc:	e5850050 	str	r0, [r5, #80]	; fField80
        2f4de0:	e3e01003 	mvn	r1, #3	; 0x3
        2f4de4:	e595004c 	ldr	r0, [r5, #76]	; fField76
        2f4de8:	e5900000 	ldr	r0, [r0]
        2f4dec:	e5801000 	str	r1, [r0]
        2f4df0:	e3a00002 	mov	r0, #2	; 0x2
        2f4df4:	eb6334d4 	bl	1bc214c <$AllocateRefHandle(long)>
        2f4df8:	e1a08000 	mov	r8, r0
        2f4dfc:	e3370000 	teq	r7, #0	; 0x0
        2f4e00:	e5940000 	ldr	r0, [r4]
        2f4e04:	e5900000 	ldr	r0, [r0]
        2f4e08:	0a000027 	beq	2f4eac <TInterpreter::CallCFunction(RefVar const &, long, int)+0x104>
        2f4e0c:	e59f1088 	ldr	r1, [pc, #88]	; 2f4e9c <TInterpreter::CallCFunction(RefVar const &, long, int)+0xf4>	; fField88
        2f4e10:	e5911000 	ldr	r1, [r1]
        2f4e14:	e5911000 	ldr	r1, [r1]
        2f4e18:	eb633d10 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2f4e1c:	e3100003 	tst	r0, #3	; 0x3
        2f4e20:	01a00140 	moveq	r0, r0, asr #2
        2f4e24:	0a000000 	beq	2f4e2c <TInterpreter::CallCFunction(RefVar const &, long, int)+0x84>
        2f4e28:	eb6334bb 	bl	1bc211c <$_RINTError(long)>
        2f4e2c:	e1a09000 	mov	r9, r0
        2f4e30:	e5940000 	ldr	r0, [r4]
        2f4e34:	e5900000 	ldr	r0, [r0]
        2f4e38:	e59f1060 	ldr	r1, [pc, #60]	; 2f4ea0 <TInterpreter::CallCFunction(RefVar const &, long, int)+0xf8>	; fField60
        2f4e3c:	e5911000 	ldr	r1, [r1]
        2f4e40:	e5911000 	ldr	r1, [r1]
        2f4e44:	eb633d05 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2f4e48:	e5880000 	str	r0, [r8]
        2f4e4c:	e5940000 	ldr	r0, [r4]
        2f4e50:	e5900000 	ldr	r0, [r0]
        2f4e54:	e59f1048 	ldr	r1, [pc, #48]	; 2f4ea4 <TInterpreter::CallCFunction(RefVar const &, long, int)+0xfc>
        2f4e58:	e5911000 	ldr	r1, [r1]
        2f4e5c:	e5911000 	ldr	r1, [r1]
        2f4e60:	eb633cfe 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2f4e64:	eb6334bc 	bl	1bc215c <$BinaryData(long)>
        2f4e68:	e1a07000 	mov	r7, r0
        2f4e6c:	e5940000 	ldr	r0, [r4]
        2f4e70:	e5900000 	ldr	r0, [r0]
        2f4e74:	e59f102c 	ldr	r1, [pc, #2c]	; 2f4ea8 <TInterpreter::CallCFunction(RefVar const &, long, int)+0x100>	; fField2
        2f4e78:	e5911000 	ldr	r1, [r1]
        2f4e7c:	e5911000 	ldr	r1, [r1]
        2f4e80:	eb633cf6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2f4e84:	e3100003 	tst	r0, #3	; 0x3
        2f4e88:	01a00140 	moveq	r0, r0, asr #2
        2f4e8c:	0a000000 	beq	2f4e94 <TInterpreter::CallCFunction(RefVar const &, long, int)+0xec>
        2f4e90:	eb6334a1 	bl	1bc211c <$_RINTError(long)>
        2f4e94:	e0874000 	add	r4, r7, r0
        2f4e98:	ea000016 	b	2f4ef8 <TInterpreter::CallCFunction(RefVar const &, long, int)+0x150>
        2f4e9c:	00683ac0 	rsbeq	r3, r8, r0, asr #21
        2f4ea0:	00682498 	streqb	r2, [r8], -#72	; fField72
        2f4ea4:	006824c0 	rsbeq	r2, r8, r0, asr #9
        2f4ea8:	00683b30 	rsbeq	r3, r8, r0, lsr fp
        2f4eac:	eb634110 	bl	1bc52f4 <$ObjectPtr(long)>
        2f4eb0:	e5900014 	ldr	r0, [r0, #20]
        2f4eb4:	e1a09140 	mov	r9, r0, asr #2
        2f4eb8:	e5940000 	ldr	r0, [r4]
        2f4ebc:	e5900000 	ldr	r0, [r0]
        2f4ec0:	eb63410b 	bl	1bc52f4 <$ObjectPtr(long)>
        2f4ec4:	e5900018 	ldr	r0, [r0, #24]
        2f4ec8:	e5880000 	str	r0, [r8]
        2f4ecc:	e5940000 	ldr	r0, [r4]
        2f4ed0:	e5900000 	ldr	r0, [r0]
        2f4ed4:	eb634106 	bl	1bc52f4 <$ObjectPtr(long)>
        2f4ed8:	e590001c 	ldr	r0, [r0, #28]
        2f4edc:	e1a07140 	mov	r7, r0, asr #2
        2f4ee0:	e5940000 	ldr	r0, [r4]
        2f4ee4:	e5900000 	ldr	r0, [r0]
        2f4ee8:	eb634101 	bl	1bc52f4 <$ObjectPtr(long)>
        2f4eec:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2f4ef0:	eb633499 	bl	1bc215c <$BinaryData(long)>
        2f4ef4:	e0804007 	add	r4, r0, r7
        2f4ef8:	e1390006 	teq	r9, r6
        2f4efc:	0a000005 	beq	2f4f18 <TInterpreter::CallCFunction(RefVar const &, long, int)+0x170>
        2f4f00:	e59f0080 	ldr	r0, [pc, #80]	; 2f4f88 <TInterpreter::CallCFunction(RefVar const &, long, int)+0x1e0>	; fField80
        2f4f04:	e5900000 	ldr	r0, [r0]
        2f4f08:	e3a02000 	mov	r2, #0	; 0x0
        2f4f0c:	e3a0105d 	mov	r1, #93	; 0x5d
        2f4f10:	e2411cbf 	sub	r1, r1, #48896	; 0xbf00
        2f4f14:	eb63b8a0 	bl	1be319c <$Throw>
        2f4f18:	e5980000 	ldr	r0, [r8]
        2f4f1c:	e1a01000 	mov	r1, r0
        2f4f20:	e2857020 	add	r7, r5, #32	; 0x20
        2f4f24:	e3300002 	teq	r0, #2	; 0x2
        2f4f28:	0a000003 	beq	2f4f3c <TInterpreter::CallCFunction(RefVar const &, long, int)+0x194>
        2f4f2c:	e2866001 	add	r6, r6, #1	; 0x1
        2f4f30:	e5972000 	ldr	r2, [r7]
        2f4f34:	e4821004 	str	r1, [r2], #4	; fField4
        2f4f38:	e5872000 	str	r2, [r7]
        2f4f3c:	e1a02006 	mov	r2, r6
        2f4f40:	e1a01004 	mov	r1, r4
        2f4f44:	e1a00005 	mov	r0, r5
        2f4f48:	eb5d1fc6 	bl	1a3ce68 <TInterpreter::$CallCFuncPtr(long (*)(RefVar const &,...), long)>
        2f4f4c:	e5880000 	str	r0, [r8]
        2f4f50:	e5971000 	ldr	r1, [r7]
        2f4f54:	e0411106 	sub	r1, r1, r6, lsl #2
        2f4f58:	e5871000 	str	r1, [r7]
        2f4f5c:	e1a00001 	mov	r0, r1
        2f4f60:	e5981000 	ldr	r1, [r8]
        2f4f64:	e4801004 	str	r1, [r0], #4	; fField4
        2f4f68:	e5870000 	str	r0, [r7]
        2f4f6c:	e595007c 	ldr	r0, [r5, #124]	; fField124
        2f4f70:	e3300000 	teq	r0, #0	; 0x0
        2f4f74:	11a00005 	movne	r0, r5
        2f4f78:	1b5d3cb4 	blne	1a44250 <TInterpreter::$TraceReturn(void)>
        2f4f7c:	e1a00008 	mov	r0, r8
        2f4f80:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2f4f84:	ea63388c 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f4f88:	00371300 	eoreqs	r1, r7, r0, lsl #6
    */
}

/**
 * Symbol: TInterpreter::CallPlainCFunction(RefVar const &, long)
 * Address: 002f4f8c
 */
TInterpreter::CallPlainCFunction(RefVar const &, long) {
    /*
        2f4f8c:	e1a0c00d 	mov	ip, sp
        2f4f90:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2f4f94:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f4f98:	e1a04000 	mov	r4, r0
        2f4f9c:	e1a06001 	mov	r6, r1
        2f4fa0:	e1a05002 	mov	r5, r2
        2f4fa4:	e590004c 	ldr	r0, [r0, #76]	; fField76
        2f4fa8:	e5911000 	ldr	r1, [r1]
        2f4fac:	e5911000 	ldr	r1, [r1]
        2f4fb0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2f4fb4:	e5801000 	str	r1, [r0]
        2f4fb8:	e3e00000 	mvn	r0, #0	; 0x0
        2f4fbc:	e5840050 	str	r0, [r4, #80]	; fField80
        2f4fc0:	e3e01003 	mvn	r1, #3	; 0x3
        2f4fc4:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f4fc8:	e5900000 	ldr	r0, [r0]
        2f4fcc:	e5801000 	str	r1, [r0]
        2f4fd0:	e5960000 	ldr	r0, [r6]
        2f4fd4:	e5900000 	ldr	r0, [r0]
        2f4fd8:	eb5d344c 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2f4fdc:	e1a07000 	mov	r7, r0
        2f4fe0:	e5900014 	ldr	r0, [r0, #20]
        2f4fe4:	e1350140 	teq	r5, r0, asr #2
        2f4fe8:	0a000009 	beq	2f5014 <TInterpreter::CallPlainCFunction(RefVar const &, long)+0x88>
        2f4fec:	e3a01002 	mov	r1, #2	; 0x2
        2f4ff0:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f4ff4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f4ff8:	e5801000 	str	r1, [r0]
        2f4ffc:	e59f0108 	ldr	r0, [pc, #108]	; 2f510c <TInterpreter::CallPlainCFunction(RefVar const &, long)+0x180>	; fField108
        2f5000:	e5900000 	ldr	r0, [r0]
        2f5004:	e3a02000 	mov	r2, #0	; 0x0
        2f5008:	e3a0105d 	mov	r1, #93	; 0x5d
        2f500c:	e2411cbf 	sub	r1, r1, #48896	; 0xbf00
        2f5010:	eb63b861 	bl	1be319c <$Throw>
        2f5014:	e1a02005 	mov	r2, r5
        2f5018:	e1a00004 	mov	r0, r4
        2f501c:	e5b71010 	ldr	r1, [r7, #16]!	; fField16
        2f5020:	eb5d1f90 	bl	1a3ce68 <TInterpreter::$CallCFuncPtr(long (*)(RefVar const &,...), long)>
        2f5024:	e1a01000 	mov	r1, r0
        2f5028:	e2840020 	add	r0, r4, #32	; 0x20
        2f502c:	e2452001 	sub	r2, r5, #1	; 0x1
        2f5030:	e5903000 	ldr	r3, [r0]
        2f5034:	e0432102 	sub	r2, r3, r2, lsl #2
        2f5038:	e5802000 	str	r2, [r0]
        2f503c:	e5221004 	str	r1, [r2, -#4]!	; fField4
        2f5040:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f5044:	e3300000 	teq	r0, #0	; 0x0
        2f5048:	11a00004 	movne	r0, r4
        2f504c:	1b5d3c7f 	blne	1a44250 <TInterpreter::$TraceReturn(void)>
        2f5050:	e2840008 	add	r0, r4, #8	; 0x8
        2f5054:	e1a05000 	mov	r5, r0
        2f5058:	eb5d86b7 	bl	1a56b3c <TIntrpStack::$PrevState(void)>
        2f505c:	e584004c 	str	r0, [r4, #76]	; fField76
        2f5060:	e5900000 	ldr	r0, [r0]
        2f5064:	e5900000 	ldr	r0, [r0]
        2f5068:	e3100003 	tst	r0, #3	; 0x3
        2f506c:	01a00140 	moveq	r0, r0, asr #2
        2f5070:	0a000000 	beq	2f5078 <TInterpreter::CallPlainCFunction(RefVar const &, long)+0xec>
        2f5074:	eb633428 	bl	1bc211c <$_RINTError(long)>
        2f5078:	e5840050 	str	r0, [r4, #80]	; fField80
        2f507c:	e1a01000 	mov	r1, r0
        2f5080:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f5084:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2f5088:	e5900000 	ldr	r0, [r0]
        2f508c:	e3300002 	teq	r0, #2	; 0x2
        2f5090:	13710001 	cmnne	r1, #1	; 0x1
        2f5094:	11a00004 	movne	r0, r4
        2f5098:	1b5d8abe 	blne	1a57b98 <TInterpreter::$SetFlags(void)>
        2f509c:	e59f006c 	ldr	r0, [pc, #6c]	; 2f5110 <TInterpreter::CallPlainCFunction(RefVar const &, long)+0x184>
        2f50a0:	e5900000 	ldr	r0, [r0]
        2f50a4:	e59fc068 	ldr	ip, [pc, #68]	; 2f5114 <TInterpreter::CallPlainCFunction(RefVar const &, long)+0x188>	; fField68
        2f50a8:	e130000c 	teq	r0, ip
        2f50ac:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2f50b0:	e59f0060 	ldr	r0, [pc, #60]	; 2f5118 <TInterpreter::CallPlainCFunction(RefVar const &, long)+0x18c>	; fField60
        2f50b4:	e590c000 	ldr	ip, [r0]
        2f50b8:	e33c0000 	teq	ip, #0	; 0x0
        2f50bc:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2f50c0:	e59f0054 	ldr	r0, [pc, #54]	; 2f511c <TInterpreter::CallPlainCFunction(RefVar const &, long)+0x190>
        2f50c4:	e3a02002 	mov	r2, #2	; 0x2
        2f50c8:	e5903000 	ldr	r3, [r0]
        2f50cc:	e92d000c 	stmdb	sp!, {r2, r3}
        2f50d0:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2f50d4:	e5951000 	ldr	r1, [r5]
        2f50d8:	e0510000 	subs	r0, r1, r0
        2f50dc:	42800003 	addmi	r0, r0, #3	; 0x3
        2f50e0:	e1a00140 	mov	r0, r0, asr #2
        2f50e4:	e2402001 	sub	r2, r0, #1	; 0x1
        2f50e8:	e59f0030 	ldr	r0, [pc, #30]	; 2f5120 <TInterpreter::CallPlainCFunction(RefVar const &, long)+0x194>
        2f50ec:	e5900000 	ldr	r0, [r0]
        2f50f0:	e1a03840 	mov	r3, r0, asr #16
        2f50f4:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        2f50f8:	e2800004 	add	r0, r0, #4	; 0x4
        2f50fc:	e1a01006 	mov	r1, r6
        2f5100:	e1a0e00f 	mov	lr, pc
        2f5104:	e1a0f00c 	mov	pc, ip
        2f5108:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2f510c:	00371300 	eoreqs	r1, r7, r0, lsl #6
        2f5110:	0c10535c 	ldceq	3, cr5, [r0], -#368
        2f5114:	66667065 	strvsbt	r7, [r6], -r5, rrx
        2f5118:	0c105360 	ldceq	3, cr5, [r0], -#384
        2f511c:	0c105364 	ldceq	3, cr5, [r0], -#400
        2f5120:	0c105560 	ldceq	5, cr5, [r0], -#384
    */
}

/**
 * Symbol: TInterpreter::CallCFuncPtr(long (*)(RefVar const &,...), long)
 * Address: 002f5124
 */
TInterpreter::CallCFuncPtr(long (*)(RefVar const &,...), long) {
    /*
        2f5124:	e1a0c00d 	mov	ip, sp
        2f5128:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2f512c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f5130:	e1a04000 	mov	r4, r0
        2f5134:	e1a05001 	mov	r5, r1
        2f5138:	e1a06002 	mov	r6, r2
        2f513c:	e2807020 	add	r7, r0, #32	; 0x20
        2f5140:	e2428001 	sub	r8, r2, #1	; 0x1
        2f5144:	e2871010 	add	r1, r7, #16	; 0x10
        2f5148:	e8910003 	ldmia	r1, {r0, r1}
        2f514c:	e0511000 	subs	r1, r1, r0
        2f5150:	42811003 	addmi	r1, r1, #3	; 0x3
        2f5154:	e1a01141 	mov	r1, r1, asr #2
        2f5158:	e5970004 	ldr	r0, [r7, #4]	; fField4
        2f515c:	e5972000 	ldr	r2, [r7]
        2f5160:	e0520000 	subs	r0, r2, r0
        2f5164:	42800003 	addmi	r0, r0, #3	; 0x3
        2f5168:	e1510140 	cmp	r1, r0, asr #2
        2f516c:	b1a00007 	movlt	r0, r7
        2f5170:	bb5d7e30 	bllt	1a54a38 <TRefStructStack::$Fill(void)>
        2f5174:	e5970010 	ldr	r0, [r7, #16]	; fField16
        2f5178:	e5971004 	ldr	r1, [r7, #4]	; fField4
        2f517c:	e5972000 	ldr	r2, [r7]
        2f5180:	e0521001 	subs	r1, r2, r1
        2f5184:	42811003 	addmi	r1, r1, #3	; 0x3
        2f5188:	e0681141 	rsb	r1, r8, r1, asr #2
        2f518c:	e0800101 	add	r0, r0, r1, lsl #2
        2f5190:	e240c004 	sub	ip, r0, #4	; 0x4
        2f5194:	e3560006 	cmp	r6, #6	; 0x6
        2f5198:	908ff106 	addls	pc, pc, r6, lsl #2
        2f519c:	ea000040 	b	2f52a4 <TInterpreter::CallCFuncPtr(long (*)(RefVar const &,...), long)+0x180>
        2f51a0:	ea000010 	b	2f51e8 <TInterpreter::CallCFuncPtr(long (*)(RefVar const &,...), long)+0xc4>
        2f51a4:	ea000014 	b	2f51fc <TInterpreter::CallCFuncPtr(long (*)(RefVar const &,...), long)+0xd8>
        2f51a8:	ea000019 	b	2f5214 <TInterpreter::CallCFuncPtr(long (*)(RefVar const &,...), long)+0xf0>
        2f51ac:	ea00001f 	b	2f5230 <TInterpreter::CallCFuncPtr(long (*)(RefVar const &,...), long)+0x10c>
        2f51b0:	ea000026 	b	2f5250 <TInterpreter::CallCFuncPtr(long (*)(RefVar const &,...), long)+0x12c>
        2f51b4:	ea00002f 	b	2f5278 <TInterpreter::CallCFuncPtr(long (*)(RefVar const &,...), long)+0x154>
        2f51b8:	e28c3014 	add	r3, ip, #20	; 0x14
        2f51bc:	e28c2010 	add	r2, ip, #16	; 0x10
        2f51c0:	e28c100c 	add	r1, ip, #12	; 0xc
        2f51c4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2f51c8:	e28c3008 	add	r3, ip, #8	; 0x8
        2f51cc:	e28c2004 	add	r2, ip, #4	; 0x4
        2f51d0:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        2f51d4:	e2800010 	add	r0, r0, #16	; 0x10
        2f51d8:	e1a0100c 	mov	r1, ip
        2f51dc:	e1a0e00f 	mov	lr, pc
        2f51e0:	e1a0f005 	mov	pc, r5
        2f51e4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2f51e8:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        2f51ec:	e2800010 	add	r0, r0, #16	; 0x10
        2f51f0:	e285c000 	add	ip, r5, #0	; 0x0
        2f51f4:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2f51f8:	e1a0f00c 	mov	pc, ip
        2f51fc:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        2f5200:	e2800010 	add	r0, r0, #16	; 0x10
        2f5204:	e1a0100c 	mov	r1, ip
        2f5208:	e285c000 	add	ip, r5, #0	; 0x0
        2f520c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2f5210:	e1a0f00c 	mov	pc, ip
        2f5214:	e28c2004 	add	r2, ip, #4	; 0x4
        2f5218:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        2f521c:	e2800010 	add	r0, r0, #16	; 0x10
        2f5220:	e1a0100c 	mov	r1, ip
        2f5224:	e285c000 	add	ip, r5, #0	; 0x0
        2f5228:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2f522c:	e1a0f00c 	mov	pc, ip
        2f5230:	e28c3008 	add	r3, ip, #8	; 0x8
        2f5234:	e28c2004 	add	r2, ip, #4	; 0x4
        2f5238:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        2f523c:	e2800010 	add	r0, r0, #16	; 0x10
        2f5240:	e1a0100c 	mov	r1, ip
        2f5244:	e285c000 	add	ip, r5, #0	; 0x0
        2f5248:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2f524c:	e1a0f00c 	mov	pc, ip
        2f5250:	e28c300c 	add	r3, ip, #12	; 0xc
        2f5254:	e92d0008 	stmdb	sp!, {r3}
        2f5258:	e28c3008 	add	r3, ip, #8	; 0x8
        2f525c:	e28c2004 	add	r2, ip, #4	; 0x4
        2f5260:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        2f5264:	e2800010 	add	r0, r0, #16	; 0x10
        2f5268:	e1a0100c 	mov	r1, ip
        2f526c:	e1a0e00f 	mov	lr, pc
        2f5270:	e1a0f005 	mov	pc, r5
        2f5274:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2f5278:	e28c3010 	add	r3, ip, #16	; 0x10
        2f527c:	e28c200c 	add	r2, ip, #12	; 0xc
        2f5280:	e92d000c 	stmdb	sp!, {r2, r3}
        2f5284:	e28c3008 	add	r3, ip, #8	; 0x8
        2f5288:	e28c2004 	add	r2, ip, #4	; 0x4
        2f528c:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        2f5290:	e2800010 	add	r0, r0, #16	; 0x10
        2f5294:	e1a0100c 	mov	r1, ip
        2f5298:	e1a0e00f 	mov	lr, pc
        2f529c:	e1a0f005 	mov	pc, r5
        2f52a0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2f52a4:	e59f0018 	ldr	r0, [pc, #18]	; 2f52c4 <TInterpreter::CallCFuncPtr(long (*)(RefVar const &,...), long)+0x1a0>
        2f52a8:	e5900000 	ldr	r0, [r0]
        2f52ac:	e3a02000 	mov	r2, #0	; 0x0
        2f52b0:	e3a0105e 	mov	r1, #94	; 0x5e
        2f52b4:	e2411cbf 	sub	r1, r1, #48896	; 0xbf00
        2f52b8:	eb63b7b7 	bl	1be319c <$Throw>
        2f52bc:	e3a00002 	mov	r0, #2	; 0x2
        2f52c0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2f52c4:	00371300 	eoreqs	r1, r7, r0, lsl #6
    */
}

/**
 * Symbol: TInterpreter::Return(FramesProfilingKind)
 * Address: 002f52c8
 */
TInterpreter::Return(FramesProfilingKind) {
    /*
        2f52c8:	e1a0c00d 	mov	ip, sp
        2f52cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f52d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f52d4:	e1a04000 	mov	r4, r0
        2f52d8:	e1a05001 	mov	r5, r1
        2f52dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f52e0:	e590004c 	ldr	r0, [r0, #76]	; fField76
        2f52e4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2f52e8:	e5900000 	ldr	r0, [r0]
        2f52ec:	eb633396 	bl	1bc214c <$AllocateRefHandle(long)>
        2f52f0:	e58d0000 	str	r0, [sp]
        2f52f4:	e594007c 	ldr	r0, [r4, #124]	; fField124
        2f52f8:	e3300000 	teq	r0, #0	; 0x0
        2f52fc:	11a00004 	movne	r0, r4
        2f5300:	1b5d3bd2 	blne	1a44250 <TInterpreter::$TraceReturn(void)>
        2f5304:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f5308:	e5900014 	ldr	r0, [r0, #20]
        2f530c:	e5901000 	ldr	r1, [r0]
        2f5310:	e3a0003f 	mov	r0, #63	; 0x3f
        2f5314:	e0000141 	and	r0, r0, r1, asr #2
        2f5318:	e3100001 	tst	r0, #1	; 0x1
        2f531c:	0a00000a 	beq	2f534c <TInterpreter::Return(FramesProfilingKind)+0x84>
        2f5320:	e2840020 	add	r0, r4, #32	; 0x20
        2f5324:	e5902000 	ldr	r2, [r0]
        2f5328:	e5122004 	ldr	r2, [r2, -#4]	; fField4
        2f532c:	e1a01141 	mov	r1, r1, asr #2
        2f5330:	e1a01341 	mov	r1, r1, asr #6
        2f5334:	e2811003 	add	r1, r1, #3	; 0x3
        2f5338:	e5903004 	ldr	r3, [r0, #4]	; fField4
        2f533c:	e0831101 	add	r1, r3, r1, lsl #2
        2f5340:	e2811004 	add	r1, r1, #4	; 0x4
        2f5344:	e5801000 	str	r1, [r0]
        2f5348:	e5212004 	str	r2, [r1, -#4]!	; fField4
        2f534c:	e2840008 	add	r0, r4, #8	; 0x8
        2f5350:	e1a06000 	mov	r6, r0
        2f5354:	eb5d85f8 	bl	1a56b3c <TIntrpStack::$PrevState(void)>
        2f5358:	e584004c 	str	r0, [r4, #76]	; fField76
        2f535c:	e5901000 	ldr	r1, [r0]
        2f5360:	e5911000 	ldr	r1, [r1]
        2f5364:	e1a01141 	mov	r1, r1, asr #2
        2f5368:	e5841050 	str	r1, [r4, #80]	; fField80
        2f536c:	e59f10b4 	ldr	r1, [pc, #b4]	; 2f5428 <TInterpreter::Return(FramesProfilingKind)+0x160>
        2f5370:	e5911000 	ldr	r1, [r1]
        2f5374:	e59fc0b0 	ldr	ip, [pc, #b0]	; 2f542c <TInterpreter::Return(FramesProfilingKind)+0x164>
        2f5378:	e131000c 	teq	r1, ip
        2f537c:	1a000014 	bne	2f53d4 <TInterpreter::Return(FramesProfilingKind)+0x10c>
        2f5380:	e59f10a8 	ldr	r1, [pc, #a8]	; 2f5430 <TInterpreter::Return(FramesProfilingKind)+0x168>
        2f5384:	e591c000 	ldr	ip, [r1]
        2f5388:	e33c0000 	teq	ip, #0	; 0x0
        2f538c:	0a000010 	beq	2f53d4 <TInterpreter::Return(FramesProfilingKind)+0x10c>
        2f5390:	e59f109c 	ldr	r1, [pc, #9c]	; 2f5434 <TInterpreter::Return(FramesProfilingKind)+0x16c>
        2f5394:	e1a02005 	mov	r2, r5
        2f5398:	e5913000 	ldr	r3, [r1]
        2f539c:	e92d000c 	stmdb	sp!, {r2, r3}
        2f53a0:	e8960006 	ldmia	r6, {r1, r2}
        2f53a4:	e0511002 	subs	r1, r1, r2
        2f53a8:	42811003 	addmi	r1, r1, #3	; 0x3
        2f53ac:	e1a01141 	mov	r1, r1, asr #2
        2f53b0:	e2412001 	sub	r2, r1, #1	; 0x1
        2f53b4:	e59f107c 	ldr	r1, [pc, #7c]	; 2f5438 <TInterpreter::Return(FramesProfilingKind)+0x170>
        2f53b8:	e5911000 	ldr	r1, [r1]
        2f53bc:	e1a03841 	mov	r3, r1, asr #16
        2f53c0:	e2800004 	add	r0, r0, #4	; 0x4
        2f53c4:	e28d1008 	add	r1, sp, #8	; 0x8
        2f53c8:	e1a0e00f 	mov	lr, pc
        2f53cc:	e1a0f00c 	mov	pc, ip
        2f53d0:	e28dd008 	add	sp, sp, #8	; 0x8
        2f53d4:	e5960004 	ldr	r0, [r6, #4]	; fField4
        2f53d8:	e5961000 	ldr	r1, [r6]
        2f53dc:	e0510000 	subs	r0, r1, r0
        2f53e0:	42800003 	addmi	r0, r0, #3	; 0x3
        2f53e4:	e1a00140 	mov	r0, r0, asr #2
        2f53e8:	e2400001 	sub	r0, r0, #1	; 0x1
        2f53ec:	e594103c 	ldr	r1, [r4, #60]	; fField60
        2f53f0:	e1500001 	cmp	r0, r1
        2f53f4:	b1a00004 	movlt	r0, r4
        2f53f8:	bb5d334e 	bllt	1a42138 <TInterpreter::$PopHandlers(void)>
        2f53fc:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f5400:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2f5404:	e5900000 	ldr	r0, [r0]
        2f5408:	e3300002 	teq	r0, #2	; 0x2
        2f540c:	15940050 	ldrne	r0, [r4, #80]	; fField80
        2f5410:	13700001 	cmnne	r0, #1	; 0x1
        2f5414:	11a00004 	movne	r0, r4
        2f5418:	1b5d89de 	blne	1a57b98 <TInterpreter::$SetFlags(void)>
        2f541c:	e59d0000 	ldr	r0, [sp]
        2f5420:	eb633765 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f5424:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2f5428:	0c10535c 	ldceq	3, cr5, [r0], -#368
        2f542c:	66667065 	strvsbt	r7, [r6], -r5, rrx
        2f5430:	0c105360 	ldceq	3, cr5, [r0], -#384
        2f5434:	0c105364 	ldceq	3, cr5, [r0], -#400
        2f5438:	0c105560 	ldceq	5, cr5, [r0], -#384
    */
}

/**
 * Symbol: TInterpreter::SetFlags(void)
 * Address: 002f543c
 */
TInterpreter::SetFlags(void) {
    /*
        2f543c:	e1a0c00d 	mov	ip, sp
        2f5440:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2f5444:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f5448:	e1a04000 	mov	r4, r0
        2f544c:	e590004c 	ldr	r0, [r0, #76]	; fField76
        2f5450:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2f5454:	e5900000 	ldr	r0, [r0]
        2f5458:	eb633fa5 	bl	1bc52f4 <$ObjectPtr(long)>
        2f545c:	e2841044 	add	r1, r4, #68	; 0x44
        2f5460:	e5903010 	ldr	r3, [r0, #16]	; fField16
        2f5464:	e5912000 	ldr	r2, [r1]
        2f5468:	e5823000 	str	r3, [r2]
        2f546c:	e5900014 	ldr	r0, [r0, #20]
        2f5470:	e5942040 	ldr	r2, [r4, #64]	; fField64
        2f5474:	e5820000 	str	r0, [r2]
        2f5478:	e5910000 	ldr	r0, [r1]
        2f547c:	e5900000 	ldr	r0, [r0]
        2f5480:	eb633f9a 	bl	1bc52f0 <$ObjectFlags(long)>
        2f5484:	e2100050 	ands	r0, r0, #80	; 0x50
        2f5488:	13a00001 	movne	r0, #1	; 0x1
        2f548c:	e5840048 	str	r0, [r4, #72]	; fField72
        2f5490:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f5494:	e5900014 	ldr	r0, [r0, #20]
        2f5498:	e5900000 	ldr	r0, [r0]
        2f549c:	e3a0103f 	mov	r1, #63	; 0x3f
        2f54a0:	e0011140 	and	r1, r1, r0, asr #2
        2f54a4:	e3110001 	tst	r1, #1	; 0x1
        2f54a8:	0a000005 	beq	2f54c4 <TInterpreter::SetFlags(void)+0x88>
        2f54ac:	e3a01001 	mov	r1, #1	; 0x1
        2f54b0:	e1a00140 	mov	r0, r0, asr #2
        2f54b4:	e1a00340 	mov	r0, r0, asr #6
        2f54b8:	e5840058 	str	r0, [r4, #88]	; fField88
        2f54bc:	e5841054 	str	r1, [r4, #84]	; fField84
        2f54c0:	ea000001 	b	2f54cc <TInterpreter::SetFlags(void)+0x90>
        2f54c4:	e3a00000 	mov	r0, #0	; 0x0
        2f54c8:	e5840054 	str	r0, [r4, #84]	; fField84
        2f54cc:	e1a00004 	mov	r0, r4
        2f54d0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2f54d4:	ea5d89ae 	b	1a57b94 <TInterpreter::$SetFastLoopFlag(void)>
    */
}

/**
 * Symbol: TInterpreter::PopHandlers(void)
 * Address: 002f5674
 */
TInterpreter::PopHandlers(void) {
    /*
        2f5674:	e1a0c00d 	mov	ip, sp
        2f5678:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2f567c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f5680:	e3a08000 	mov	r8, #0	; 0x0
        2f5684:	e3a07002 	mov	r7, #2	; 0x2
        2f5688:	e2805008 	add	r5, r0, #8	; 0x8
        2f568c:	e2804038 	add	r4, r0, #56	; 0x38
        2f5690:	ea000006 	b	2f56b0 <TInterpreter::PopHandlers(void)+0x3c>
        2f5694:	e1a06004 	mov	r6, r4
        2f5698:	e5940000 	ldr	r0, [r4]
        2f569c:	e5900000 	ldr	r0, [r0]
        2f56a0:	e1a01008 	mov	r1, r8
        2f56a4:	eb633aea 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f56a8:	e5961000 	ldr	r1, [r6]
        2f56ac:	e5810000 	str	r0, [r1]
        2f56b0:	e5940000 	ldr	r0, [r4]
        2f56b4:	e5900000 	ldr	r0, [r0]
        2f56b8:	e3300002 	teq	r0, #2	; 0x2
        2f56bc:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2f56c0:	e1a01007 	mov	r1, r7
        2f56c4:	eb633ae2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f56c8:	e3100003 	tst	r0, #3	; 0x3
        2f56cc:	01a00140 	moveq	r0, r0, asr #2
        2f56d0:	0a000000 	beq	2f56d8 <TInterpreter::PopHandlers(void)+0x64>
        2f56d4:	eb633290 	bl	1bc211c <$_RINTError(long)>
        2f56d8:	e1a01000 	mov	r1, r0
        2f56dc:	e8950005 	ldmia	r5, {r0, r2}
        2f56e0:	e0500002 	subs	r0, r0, r2
        2f56e4:	42800003 	addmi	r0, r0, #3	; 0x3
        2f56e8:	e1a00140 	mov	r0, r0, asr #2
        2f56ec:	e2400001 	sub	r0, r0, #1	; 0x1
        2f56f0:	e1510000 	cmp	r1, r0
        2f56f4:	caffffe6 	bgt	2f5694 <TInterpreter::PopHandlers(void)+0x20>
        2f56f8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2f56fc:	74797065 	ldrvcbt	r7, [r9], -#101
        2f5700:	2e726566 	cdpcs	5, 7, cr6, cr2, cr6, {3}
        2f5704:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TInterpreter::TranslateException(Exception *)
 * Address: 002f5890
 */
TInterpreter::TranslateException(Exception *) {
    /*
        2f5890:	e1a0c00d 	mov	ip, sp
        2f5894:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2f5898:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f589c:	e1a04001 	mov	r4, r1
        2f58a0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f58a4:	e5915000 	ldr	r5, [r1]
        2f58a8:	eb633224 	bl	1bc2140 <$AllocateFrame(void)>
        2f58ac:	eb633226 	bl	1bc214c <$AllocateRefHandle(long)>
        2f58b0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2f58b4:	e1a00005 	mov	r0, r5
        2f58b8:	eb633e70 	bl	1bc5280 <$Intern(char *)>
        2f58bc:	eb633222 	bl	1bc214c <$AllocateRefHandle(long)>
        2f58c0:	e58d0000 	str	r0, [sp]
        2f58c4:	e1a0200d 	mov	r2, sp
        2f58c8:	e59f1054 	ldr	r1, [pc, #54]	; 2f5924 <TInterpreter::TranslateException(Exception *)+0x94>
        2f58cc:	e28d0004 	add	r0, sp, #4	; 0x4
        2f58d0:	eb6342a4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f58d4:	e59d0000 	ldr	r0, [sp]
        2f58d8:	eb633637 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f58dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f58e0:	e59f0040 	ldr	r0, [pc, #40]	; 2f5928 <TInterpreter::TranslateException(Exception *)+0x98>
        2f58e4:	e5901000 	ldr	r1, [r0]
        2f58e8:	e1a00005 	mov	r0, r5
        2f58ec:	eb63b628 	bl	1be3194 <$Subexception>
        2f58f0:	e3300000 	teq	r0, #0	; 0x0
        2f58f4:	0a00000d 	beq	2f5930 <TInterpreter::TranslateException(Exception *)+0xa0>
        2f58f8:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        2f58fc:	eb633e73 	bl	1bc52d0 <$MakeString(char const *)>
        2f5900:	eb633211 	bl	1bc214c <$AllocateRefHandle(long)>
        2f5904:	e58d0000 	str	r0, [sp]
        2f5908:	e1a0200d 	mov	r2, sp
        2f590c:	e59f1018 	ldr	r1, [pc, #18]	; 2f592c <TInterpreter::TranslateException(Exception *)+0x9c>
        2f5910:	e28d0008 	add	r0, sp, #8	; 0x8
        2f5914:	eb634293 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f5918:	e59d0000 	ldr	r0, [sp]
        2f591c:	eb633626 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f5920:	ea00001b 	b	2f5994 <TInterpreter::TranslateException(Exception *)+0x104>
        2f5924:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        2f5928:	003712ac 	eoreqs	r1, r7, ip, lsr #5
        2f592c:	00683840 	rsbeq	r3, r8, r0, asr #16
        2f5930:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f5934:	e59f0024 	ldr	r0, [pc, #24]	; 2f5960 <TInterpreter::TranslateException(Exception *)+0xd0>
        2f5938:	e5901000 	ldr	r1, [r0]
        2f593c:	e1a00005 	mov	r0, r5
        2f5940:	eb63b613 	bl	1be3194 <$Subexception>
        2f5944:	e3300000 	teq	r0, #0	; 0x0
        2f5948:	0a000006 	beq	2f5968 <TInterpreter::TranslateException(Exception *)+0xd8>
        2f594c:	e5b42004 	ldr	r2, [r4, #4]!	; fField4
        2f5950:	e59f100c 	ldr	r1, [pc, #c]	; 2f5964 <TInterpreter::TranslateException(Exception *)+0xd4>
        2f5954:	e28d000c 	add	r0, sp, #12	; 0xc
        2f5958:	eb634282 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f595c:	ea00000b 	b	2f5990 <TInterpreter::TranslateException(Exception *)+0x100>
        2f5960:	00380880 	eoreqs	r0, r8, r0, lsl #17
        2f5964:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        2f5968:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        2f596c:	e1a00100 	mov	r0, r0, lsl #2
        2f5970:	eb6331f5 	bl	1bc214c <$AllocateRefHandle(long)>
        2f5974:	e58d0000 	str	r0, [sp]
        2f5978:	e1a0200d 	mov	r2, sp
        2f597c:	e59f1024 	ldr	r1, [pc, #24]	; 2f59a8 <TInterpreter::TranslateException(Exception *)+0x118>
        2f5980:	e28d000c 	add	r0, sp, #12	; 0xc
        2f5984:	eb634277 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f5988:	e59d0000 	ldr	r0, [sp]
        2f598c:	eb63360a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f5990:	e28dd004 	add	sp, sp, #4	; 0x4
        2f5994:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2f5998:	e5904000 	ldr	r4, [r0]
        2f599c:	eb633606 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f59a0:	e1a00004 	mov	r0, r4
        2f59a4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2f59a8:	00682c88 	rsbeq	r2, r8, r8, lsl #25
    */
}

/**
 * Symbol: TInterpreter::ExceptionBeingHandled(void)
 * Address: 002f59ac
 */
TInterpreter::ExceptionBeingHandled(void) {
    /*
        2f59ac:	e1a0c00d 	mov	ip, sp
        2f59b0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2f59b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f59b8:	e1a06000 	mov	r6, r0
        2f59bc:	e3a00002 	mov	r0, #2	; 0x2
        2f59c0:	eb6331e1 	bl	1bc214c <$AllocateRefHandle(long)>
        2f59c4:	e1a04000 	mov	r4, r0
        2f59c8:	e3a00002 	mov	r0, #2	; 0x2
        2f59cc:	eb6331de 	bl	1bc214c <$AllocateRefHandle(long)>
        2f59d0:	e1a05000 	mov	r5, r0
        2f59d4:	e5960038 	ldr	r0, [r6, #56]	; fField56
        2f59d8:	e5900000 	ldr	r0, [r0]
        2f59dc:	e3a06000 	mov	r6, #0	; 0x0
        2f59e0:	e5840000 	str	r0, [r4]
        2f59e4:	e3300002 	teq	r0, #2	; 0x2
        2f59e8:	0a000013 	beq	2f5a3c <TInterpreter::ExceptionBeingHandled(void)+0x90>
        2f59ec:	e3a07007 	mov	r7, #7	; 0x7
        2f59f0:	e1a01007 	mov	r1, r7
        2f59f4:	e5940000 	ldr	r0, [r4]
        2f59f8:	eb633a15 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f59fc:	e5850000 	str	r0, [r5]
        2f5a00:	e3300002 	teq	r0, #2	; 0x2
        2f5a04:	0a000006 	beq	2f5a24 <TInterpreter::ExceptionBeingHandled(void)+0x78>
        2f5a08:	e5956000 	ldr	r6, [r5]
        2f5a0c:	e1a00005 	mov	r0, r5
        2f5a10:	eb6335e9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f5a14:	e1a00004 	mov	r0, r4
        2f5a18:	eb6335e7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f5a1c:	e1a00006 	mov	r0, r6
        2f5a20:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2f5a24:	e1a01006 	mov	r1, r6
        2f5a28:	e5940000 	ldr	r0, [r4]
        2f5a2c:	eb633a08 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f5a30:	e5840000 	str	r0, [r4]
        2f5a34:	e3300002 	teq	r0, #2	; 0x2
        2f5a38:	1affffec 	bne	2f59f0 <TInterpreter::ExceptionBeingHandled(void)+0x44>
        2f5a3c:	e1a00005 	mov	r0, r5
        2f5a40:	eb6335dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f5a44:	e1a00004 	mov	r0, r4
        2f5a48:	eb6335db 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f5a4c:	e3a00002 	mov	r0, #2	; 0x2
        2f5a50:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::HandleException(Exception *, long, StackState &)
 * Address: 002f5de8
 */
TInterpreter::HandleException(Exception *, long, StackState &) {
    /*
        2f5de8:	e1a0c00d 	mov	ip, sp
        2f5dec:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f5df0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f5df4:	e1a04000 	mov	r4, r0
        2f5df8:	e24dd014 	sub	sp, sp, #20	; 0x14
        2f5dfc:	e51b0034 	ldr	r0, [fp, -#52]
        2f5e00:	e5900000 	ldr	r0, [r0]
        2f5e04:	e58d0000 	str	r0, [sp]
        2f5e08:	e51b0034 	ldr	r0, [fp, -#52]
        2f5e0c:	eb5d72cc 	bl	1a52944 <$DeveloperNotified(Exception *)>
        2f5e10:	e3a08002 	mov	r8, #2	; 0x2
        2f5e14:	e3a06000 	mov	r6, #0	; 0x0
        2f5e18:	e3300000 	teq	r0, #0	; 0x0
        2f5e1c:	1a000022 	bne	2f5eac <TInterpreter::HandleException(Exception *, long, StackState &)+0xc4>
        2f5e20:	e59f00d8 	ldr	r0, [pc, #d8]	; 2f5f00 <TInterpreter::HandleException(Exception *, long, StackState &)+0x118>
        2f5e24:	e5900000 	ldr	r0, [r0]
        2f5e28:	e59f10d4 	ldr	r1, [pc, #d4]	; 2f5f04 <TInterpreter::HandleException(Exception *, long, StackState &)+0x11c>
        2f5e2c:	e5911000 	ldr	r1, [r1]
        2f5e30:	e5911000 	ldr	r1, [r1]
        2f5e34:	eb633909 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2f5e38:	e3300002 	teq	r0, #2	; 0x2
        2f5e3c:	0a00001a 	beq	2f5eac <TInterpreter::HandleException(Exception *, long, StackState &)+0xc4>
        2f5e40:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f5e44:	e51b1034 	ldr	r1, [fp, -#52]
        2f5e48:	e59f00b8 	ldr	r0, [pc, #b8]	; 2f5f08 <TInterpreter::HandleException(Exception *, long, StackState &)+0x120>
        2f5e4c:	e5900000 	ldr	r0, [r0]
        2f5e50:	eb025027 	bl	389ef4 <POutTranslator::ExceptionNotify(Exception *)>
        2f5e54:	e1a00008 	mov	r0, r8
        2f5e58:	eb6330bb 	bl	1bc214c <$AllocateRefHandle(long)>
        2f5e5c:	e58d0000 	str	r0, [sp]
        2f5e60:	e1a0500d 	mov	r5, sp
        2f5e64:	e59f00a0 	ldr	r0, [pc, #a0]	; 2f5f0c <TInterpreter::HandleException(Exception *, long, StackState &)+0x124>
        2f5e68:	e5900000 	ldr	r0, [r0]
        2f5e6c:	e59f109c 	ldr	r1, [pc, #9c]	; 2f5f10 <TInterpreter::HandleException(Exception *, long, StackState &)+0x128>
        2f5e70:	e5911000 	ldr	r1, [r1]
        2f5e74:	e5911000 	ldr	r1, [r1]
        2f5e78:	eb6338f8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2f5e7c:	eb6330b2 	bl	1bc214c <$AllocateRefHandle(long)>
        2f5e80:	e58d0004 	str	r0, [sp, #4]	; fField4
        2f5e84:	e28d0004 	add	r0, sp, #4	; 0x4
        2f5e88:	e1a01005 	mov	r1, r5
        2f5e8c:	eb6334cf 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        2f5e90:	e59d0000 	ldr	r0, [sp]
        2f5e94:	eb6334c8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f5e98:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2f5e9c:	eb6334c6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f5ea0:	e51b0034 	ldr	r0, [fp, -#52]
        2f5ea4:	eb5d8331 	bl	1a56b70 <$RememberDeveloperNotified(Exception *)>
        2f5ea8:	e28dd008 	add	sp, sp, #8	; 0x8
        2f5eac:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f5eb0:	e3a00002 	mov	r0, #2	; 0x2
        2f5eb4:	eb6330a4 	bl	1bc214c <$AllocateRefHandle(long)>
        2f5eb8:	e1a05000 	mov	r5, r0
        2f5ebc:	e3a00002 	mov	r0, #2	; 0x2
        2f5ec0:	eb6330a1 	bl	1bc214c <$AllocateRefHandle(long)>
        2f5ec4:	e1a07000 	mov	r7, r0
        2f5ec8:	e2840038 	add	r0, r4, #56	; 0x38
        2f5ecc:	e58d0014 	str	r0, [sp, #20]
        2f5ed0:	e5900000 	ldr	r0, [r0]
        2f5ed4:	e5900000 	ldr	r0, [r0]
        2f5ed8:	e5850000 	str	r0, [r5]
        2f5edc:	e59f0030 	ldr	r0, [pc, #30]	; 2f5f14 <TInterpreter::HandleException(Exception *, long, StackState &)+0x12c>
        2f5ee0:	e58d0010 	str	r0, [sp, #16]	; fField16
        2f5ee4:	e59f002c 	ldr	r0, [pc, #2c]	; 2f5f18 <TInterpreter::HandleException(Exception *, long, StackState &)+0x130>	; fField2
        2f5ee8:	e58d000c 	str	r0, [sp, #12]	; fField12
        2f5eec:	e59f8028 	ldr	r8, [pc, #28]	; 2f5f1c <TInterpreter::HandleException(Exception *, long, StackState &)+0x134>
        2f5ef0:	e59f0028 	ldr	r0, [pc, #28]	; 2f5f20 <TInterpreter::HandleException(Exception *, long, StackState &)+0x138>
        2f5ef4:	e2846008 	add	r6, r4, #8	; 0x8
        2f5ef8:	e58d0008 	str	r0, [sp, #8]	; fField8
        2f5efc:	ea0000be 	b	2f61fc <TInterpreter::HandleException(Exception *, long, StackState &)+0x414>
        2f5f00:	0c10180c 	ldceq	8, cr1, [r0], -#48
        2f5f04:	006821d8 	ldreqd	r2, [r8], -#24
        2f5f08:	0c101820 	ldceq	8, cr1, [r0], -#128
        2f5f0c:	0c10544c 	ldceq	4, cr5, [r0], -#304
        2f5f10:	006821d0 	ldreqd	r2, [r8], -#16	; fField16
        2f5f14:	0c10535c 	ldceq	3, cr5, [r0], -#368
        2f5f18:	0c105560 	ldceq	5, cr5, [r0], -#384
        2f5f1c:	0c105360 	ldceq	3, cr5, [r0], -#384
        2f5f20:	0c105364 	ldceq	3, cr5, [r0], -#400
        2f5f24:	e3a01007 	mov	r1, #7	; 0x7
        2f5f28:	e5950000 	ldr	r0, [r5]
        2f5f2c:	eb6338c8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f5f30:	e3300002 	teq	r0, #2	; 0x2
        2f5f34:	1a0000ac 	bne	2f61ec <TInterpreter::HandleException(Exception *, long, StackState &)+0x404>
        2f5f38:	e3a01006 	mov	r1, #6	; 0x6
        2f5f3c:	e5950000 	ldr	r0, [r5]
        2f5f40:	eb6338c3 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f5f44:	e5870000 	str	r0, [r7]
        2f5f48:	eb633cd7 	bl	1bc52ac <$Length(long)>
        2f5f4c:	e1a0a000 	mov	sl, r0
        2f5f50:	e3a09000 	mov	r9, #0	; 0x0
        2f5f54:	e3500000 	cmp	r0, #0	; 0x0
        2f5f58:	da0000a3 	ble	2f61ec <TInterpreter::HandleException(Exception *, long, StackState &)+0x404>
        2f5f5c:	e1a01009 	mov	r1, r9
        2f5f60:	e5970000 	ldr	r0, [r7]
        2f5f64:	eb6338ba 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f5f68:	eb63493a 	bl	1bc8458 <$SymbolName(long)>
        2f5f6c:	e1a01000 	mov	r1, r0
        2f5f70:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2f5f74:	eb63b486 	bl	1be3194 <$Subexception>
        2f5f78:	e3300000 	teq	r0, #0	; 0x0
        2f5f7c:	0a000097 	beq	2f61e0 <TInterpreter::HandleException(Exception *, long, StackState &)+0x3f8>
        2f5f80:	e2840020 	add	r0, r4, #32	; 0x20
        2f5f84:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        2f5f88:	e8900003 	ldmia	r0, {r0, r1}
        2f5f8c:	e0500001 	subs	r0, r0, r1
        2f5f90:	42800003 	addmi	r0, r0, #3	; 0x3
        2f5f94:	e1a00140 	mov	r0, r0, asr #2
        2f5f98:	e240a001 	sub	sl, r0, #1	; 0x1
        2f5f9c:	e3a01001 	mov	r1, #1	; 0x1
        2f5fa0:	e5950000 	ldr	r0, [r5]
        2f5fa4:	eb6338aa 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f5fa8:	e3100003 	tst	r0, #3	; 0x3
        2f5fac:	01a00140 	moveq	r0, r0, asr #2
        2f5fb0:	0a000000 	beq	2f5fb8 <TInterpreter::HandleException(Exception *, long, StackState &)+0x1d0>
        2f5fb4:	eb633058 	bl	1bc211c <$_RINTError(long)>
        2f5fb8:	e04a0000 	sub	r0, sl, r0
        2f5fbc:	e59d1000 	ldr	r1, [sp]
        2f5fc0:	e5911000 	ldr	r1, [r1]
        2f5fc4:	e0410100 	sub	r0, r1, r0, lsl #2
        2f5fc8:	e59d1000 	ldr	r1, [sp]
        2f5fcc:	e5810000 	str	r0, [r1]
        2f5fd0:	e28dd004 	add	sp, sp, #4	; 0x4
        2f5fd4:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2f5fd8:	e5900000 	ldr	r0, [r0]
        2f5fdc:	e59fc1f8 	ldr	ip, [pc, #1f8]	; 2f61dc <TInterpreter::HandleException(Exception *, long, StackState &)+0x3f4>
        2f5fe0:	e130000c 	teq	r0, ip
        2f5fe4:	1a00002c 	bne	2f609c <TInterpreter::HandleException(Exception *, long, StackState &)+0x2b4>
        2f5fe8:	e5980000 	ldr	r0, [r8]
        2f5fec:	e3300000 	teq	r0, #0	; 0x0
        2f5ff0:	0a000029 	beq	2f609c <TInterpreter::HandleException(Exception *, long, StackState &)+0x2b4>
        2f5ff4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f5ff8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2f5ffc:	e5900000 	ldr	r0, [r0]
        2f6000:	e1a03840 	mov	r3, r0, asr #16
        2f6004:	e58d3000 	str	r3, [sp]
        2f6008:	e3a00006 	mov	r0, #6	; 0x6
        2f600c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2f6010:	eb62f24a 	bl	1bb2940 <$__rt_sdiv>
        2f6014:	e1a01000 	mov	r1, r0
        2f6018:	e1a00006 	mov	r0, r6
        2f601c:	eb5d86e6 	bl	1a57bbc <TIntrpStack::$StateAt(long)>
        2f6020:	e1a0a000 	mov	sl, r0
        2f6024:	e8960003 	ldmia	r6, {r0, r1}
        2f6028:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f602c:	e130000a 	teq	r0, sl
        2f6030:	0a000018 	beq	2f6098 <TInterpreter::HandleException(Exception *, long, StackState &)+0x2b0>
        2f6034:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f6038:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f603c:	e1a00006 	mov	r0, r6
        2f6040:	e58d1000 	str	r1, [sp]
        2f6044:	eb5d82bc 	bl	1a56b3c <TIntrpStack::$PrevState(void)>
        2f6048:	e584004c 	str	r0, [r4, #76]	; fField76
        2f604c:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f6050:	e3a02003 	mov	r2, #3	; 0x3
        2f6054:	e5913000 	ldr	r3, [r1]
        2f6058:	e92d000c 	stmdb	sp!, {r2, r3}
        2f605c:	e8960006 	ldmia	r6, {r1, r2}
        2f6060:	e0511002 	subs	r1, r1, r2
        2f6064:	42811003 	addmi	r1, r1, #3	; 0x3
        2f6068:	e1a01141 	mov	r1, r1, asr #2
        2f606c:	e2412001 	sub	r2, r1, #1	; 0x1
        2f6070:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2f6074:	e2811004 	add	r1, r1, #4	; 0x4
        2f6078:	e2800004 	add	r0, r0, #4	; 0x4
        2f607c:	e59d300c 	ldr	r3, [sp, #12]	; fField12
        2f6080:	e1a0e00f 	mov	lr, pc
        2f6084:	e598f000 	ldr	pc, [r8]
        2f6088:	e28dd00c 	add	sp, sp, #12	; 0xc
        2f608c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f6090:	e130000a 	teq	r0, sl
        2f6094:	1affffe6 	bne	2f6034 <TInterpreter::HandleException(Exception *, long, StackState &)+0x24c>
        2f6098:	e28dd004 	add	sp, sp, #4	; 0x4
        2f609c:	e1a01006 	mov	r1, r6
        2f60a0:	e8960005 	ldmia	r6, {r0, r2}
        2f60a4:	e0502002 	subs	r2, r0, r2
        2f60a8:	42822003 	addmi	r2, r2, #3	; 0x3
        2f60ac:	e1a02142 	mov	r2, r2, asr #2
        2f60b0:	e2422001 	sub	r2, r2, #1	; 0x1
        2f60b4:	e59d3000 	ldr	r3, [sp]
        2f60b8:	e0422003 	sub	r2, r2, r3
        2f60bc:	e0400102 	sub	r0, r0, r2, lsl #2
        2f60c0:	e5810000 	str	r0, [r1]
        2f60c4:	e5961004 	ldr	r1, [r6, #4]	; fField4
        2f60c8:	e0500001 	subs	r0, r0, r1
        2f60cc:	42800003 	addmi	r0, r0, #3	; 0x3
        2f60d0:	e1a00140 	mov	r0, r0, asr #2
        2f60d4:	e2401001 	sub	r1, r0, #1	; 0x1
        2f60d8:	e3a00006 	mov	r0, #6	; 0x6
        2f60dc:	eb62f217 	bl	1bb2940 <$__rt_sdiv>
        2f60e0:	e1a01000 	mov	r1, r0
        2f60e4:	e1a00006 	mov	r0, r6
        2f60e8:	eb5d86b3 	bl	1a57bbc <TIntrpStack::$StateAt(long)>
        2f60ec:	e584004c 	str	r0, [r4, #76]	; fField76
        2f60f0:	e2806004 	add	r6, r0, #4	; 0x4
        2f60f4:	e3a01003 	mov	r1, #3	; 0x3
        2f60f8:	e5950000 	ldr	r0, [r5]
        2f60fc:	eb633854 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f6100:	e5961000 	ldr	r1, [r6]
        2f6104:	e5810000 	str	r0, [r1]
        2f6108:	e2891001 	add	r1, r9, #1	; 0x1
        2f610c:	e5970000 	ldr	r0, [r7]
        2f6110:	eb63384f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f6114:	e3100003 	tst	r0, #3	; 0x3
        2f6118:	01a00140 	moveq	r0, r0, asr #2
        2f611c:	0a000000 	beq	2f6124 <TInterpreter::HandleException(Exception *, long, StackState &)+0x33c>
        2f6120:	eb632ffd 	bl	1bc211c <$_RINTError(long)>
        2f6124:	e5840050 	str	r0, [r4, #80]	; fField80
        2f6128:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f612c:	e2806010 	add	r6, r0, #16	; 0x10
        2f6130:	e3a01004 	mov	r1, #4	; 0x4
        2f6134:	e5950000 	ldr	r0, [r5]
        2f6138:	eb633845 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f613c:	e5961000 	ldr	r1, [r6]
        2f6140:	e5810000 	str	r0, [r1]
        2f6144:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f6148:	e280600c 	add	r6, r0, #12	; 0xc
        2f614c:	e3a01005 	mov	r1, #5	; 0x5
        2f6150:	e5950000 	ldr	r0, [r5]
        2f6154:	eb63383e 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f6158:	e5961000 	ldr	r1, [r6]
        2f615c:	e5810000 	str	r0, [r1]
        2f6160:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f6164:	e2806008 	add	r6, r0, #8	; 0x8
        2f6168:	e3a01008 	mov	r1, #8	; 0x8
        2f616c:	e5950000 	ldr	r0, [r5]
        2f6170:	eb633837 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f6174:	e5961000 	ldr	r1, [r6]
        2f6178:	e5810000 	str	r0, [r1]
        2f617c:	e1a00004 	mov	r0, r4
        2f6180:	eb5d8684 	bl	1a57b98 <TInterpreter::$SetFlags(void)>
        2f6184:	e1a00004 	mov	r0, r4
        2f6188:	e51b1034 	ldr	r1, [fp, -#52]
        2f618c:	eb63fa1f 	bl	1bf4a10 <TInterpreter::$TranslateException(Exception *)>
        2f6190:	eb632fed 	bl	1bc214c <$AllocateRefHandle(long)>
        2f6194:	e1a04000 	mov	r4, r0
        2f6198:	e5950000 	ldr	r0, [r5]
        2f619c:	e3a01007 	mov	r1, #7	; 0x7
        2f61a0:	e5942000 	ldr	r2, [r4]
        2f61a4:	eb63406b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2f61a8:	e59d0014 	ldr	r0, [sp, #20]
        2f61ac:	e5951000 	ldr	r1, [r5]
        2f61b0:	e5900000 	ldr	r0, [r0]
        2f61b4:	e3a06001 	mov	r6, #1	; 0x1
        2f61b8:	e5801000 	str	r1, [r0]
        2f61bc:	e1a00004 	mov	r0, r4
        2f61c0:	eb6333fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f61c4:	e1a00007 	mov	r0, r7
        2f61c8:	eb6333fb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f61cc:	e1a00005 	mov	r0, r5
        2f61d0:	eb6333f9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f61d4:	e1a00006 	mov	r0, r6
        2f61d8:	ea00006c 	b	2f6390 <TInterpreter::HandleException(Exception *, long, StackState &)+0x5a8>
        2f61dc:	66667065 	strvsbt	r7, [r6], -r5, rrx
        2f61e0:	e2899002 	add	r9, r9, #2	; 0x2
        2f61e4:	e159000a 	cmp	r9, sl
        2f61e8:	baffff5b 	blt	2f5f5c <TInterpreter::HandleException(Exception *, long, StackState &)+0x174>
        2f61ec:	e3a01000 	mov	r1, #0	; 0x0
        2f61f0:	e5950000 	ldr	r0, [r5]
        2f61f4:	eb633816 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f61f8:	e5850000 	str	r0, [r5]
        2f61fc:	e5950000 	ldr	r0, [r5]
        2f6200:	e3300002 	teq	r0, #2	; 0x2
        2f6204:	0a000009 	beq	2f6230 <TInterpreter::HandleException(Exception *, long, StackState &)+0x448>
        2f6208:	e3a01002 	mov	r1, #2	; 0x2
        2f620c:	eb633810 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f6210:	e3100003 	tst	r0, #3	; 0x3
        2f6214:	01a00140 	moveq	r0, r0, asr #2
        2f6218:	0a000000 	beq	2f6220 <TInterpreter::HandleException(Exception *, long, StackState &)+0x438>
        2f621c:	eb632fbe 	bl	1bc211c <$_RINTError(long)>
        2f6220:	e58d0000 	str	r0, [sp]
        2f6224:	e51b2030 	ldr	r2, [fp, -#48]
        2f6228:	e1500002 	cmp	r0, r2
        2f622c:	aaffff3c 	bge	2f5f24 <TInterpreter::HandleException(Exception *, long, StackState &)+0x13c>
        2f6230:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2f6234:	e5900000 	ldr	r0, [r0]
        2f6238:	e51fc064 	ldr	ip, [pc, #ffffff9c]	; 2f61dc <TInterpreter::HandleException(Exception *, long, StackState &)+0x3f4>
        2f623c:	e130000c 	teq	r0, ip
        2f6240:	1a00002e 	bne	2f6300 <TInterpreter::HandleException(Exception *, long, StackState &)+0x518>
        2f6244:	e5980000 	ldr	r0, [r8]
        2f6248:	e3300000 	teq	r0, #0	; 0x0
        2f624c:	0a00002b 	beq	2f6300 <TInterpreter::HandleException(Exception *, long, StackState &)+0x518>
        2f6250:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f6254:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2f6258:	e5900000 	ldr	r0, [r0]
        2f625c:	e1a03840 	mov	r3, r0, asr #16
        2f6260:	e58d3000 	str	r3, [sp]
        2f6264:	e51b302c 	ldr	r3, [fp, -#44]
        2f6268:	e3a00006 	mov	r0, #6	; 0x6
        2f626c:	e5931000 	ldr	r1, [r3]
        2f6270:	eb62f1b2 	bl	1bb2940 <$__rt_sdiv>
        2f6274:	e2401001 	sub	r1, r0, #1	; 0x1
        2f6278:	e1a00006 	mov	r0, r6
        2f627c:	eb5d864e 	bl	1a57bbc <TIntrpStack::$StateAt(long)>
        2f6280:	e1a0a000 	mov	sl, r0
        2f6284:	e8960003 	ldmia	r6, {r0, r1}
        2f6288:	e0500001 	subs	r0, r0, r1
        2f628c:	42800003 	addmi	r0, r0, #3	; 0x3
        2f6290:	e1a00140 	mov	r0, r0, asr #2
        2f6294:	e2409001 	sub	r9, r0, #1	; 0x1
        2f6298:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f629c:	e130000a 	teq	r0, sl
        2f62a0:	0a000015 	beq	2f62fc <TInterpreter::HandleException(Exception *, long, StackState &)+0x514>
        2f62a4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f62a8:	e594104c 	ldr	r1, [r4, #76]	; fField76
        2f62ac:	e1a00006 	mov	r0, r6
        2f62b0:	e58d1000 	str	r1, [sp]
        2f62b4:	eb5d8220 	bl	1a56b3c <TIntrpStack::$PrevState(void)>
        2f62b8:	e2499006 	sub	r9, r9, #6	; 0x6
        2f62bc:	e584004c 	str	r0, [r4, #76]	; fField76
        2f62c0:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2f62c4:	e3a02003 	mov	r2, #3	; 0x3
        2f62c8:	e5913000 	ldr	r3, [r1]
        2f62cc:	e92d000c 	stmdb	sp!, {r2, r3}
        2f62d0:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2f62d4:	e2811004 	add	r1, r1, #4	; 0x4
        2f62d8:	e2800004 	add	r0, r0, #4	; 0x4
        2f62dc:	e1a02009 	mov	r2, r9
        2f62e0:	e59d300c 	ldr	r3, [sp, #12]	; fField12
        2f62e4:	e1a0e00f 	mov	lr, pc
        2f62e8:	e598f000 	ldr	pc, [r8]
        2f62ec:	e28dd00c 	add	sp, sp, #12	; 0xc
        2f62f0:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f62f4:	e130000a 	teq	r0, sl
        2f62f8:	1affffe9 	bne	2f62a4 <TInterpreter::HandleException(Exception *, long, StackState &)+0x4bc>
        2f62fc:	e28dd004 	add	sp, sp, #4	; 0x4
        2f6300:	e51b002c 	ldr	r0, [fp, -#44]
        2f6304:	eb5d33a2 	bl	1a43194 <$ResetStack(StackState const &)>
        2f6308:	e51b002c 	ldr	r0, [fp, -#44]
        2f630c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2f6310:	eb6333a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f6314:	e3a08000 	mov	r8, #0	; 0x0
        2f6318:	e1a00006 	mov	r0, r6
        2f631c:	eb5d8206 	bl	1a56b3c <TIntrpStack::$PrevState(void)>
        2f6320:	e584004c 	str	r0, [r4, #76]	; fField76
        2f6324:	e5900000 	ldr	r0, [r0]
        2f6328:	e5900000 	ldr	r0, [r0]
        2f632c:	e1a00140 	mov	r0, r0, asr #2
        2f6330:	e5840050 	str	r0, [r4, #80]	; fField80
        2f6334:	e5960004 	ldr	r0, [r6, #4]	; fField4
        2f6338:	e5961000 	ldr	r1, [r6]
        2f633c:	e0510000 	subs	r0, r1, r0
        2f6340:	42800003 	addmi	r0, r0, #3	; 0x3
        2f6344:	e1a00140 	mov	r0, r0, asr #2
        2f6348:	e2400001 	sub	r0, r0, #1	; 0x1
        2f634c:	e594103c 	ldr	r1, [r4, #60]	; fField60
        2f6350:	e1500001 	cmp	r0, r1
        2f6354:	b1a00004 	movlt	r0, r4
        2f6358:	bb5d2f76 	bllt	1a42138 <TInterpreter::$PopHandlers(void)>
        2f635c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2f6360:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2f6364:	e5900000 	ldr	r0, [r0]
        2f6368:	e3300002 	teq	r0, #2	; 0x2
        2f636c:	15940050 	ldrne	r0, [r4, #80]	; fField80
        2f6370:	13700001 	cmnne	r0, #1	; 0x1
        2f6374:	11a00004 	movne	r0, r4
        2f6378:	1b5d8606 	blne	1a57b98 <TInterpreter::$SetFlags(void)>
        2f637c:	e1a00007 	mov	r0, r7
        2f6380:	eb63338d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f6384:	e1a00005 	mov	r0, r5
        2f6388:	eb63338b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f638c:	e1a00008 	mov	r0, r8
        2f6390:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::GetReceiver(void)
 * Address: 002f63b4
 */
TInterpreter::GetReceiver(void) {
    /*
        2f63b4:	e590004c 	ldr	r0, [r0, #76]	; fField76
        2f63b8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2f63bc:	e5900000 	ldr	r0, [r0]
        2f63c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::GetImplementor(void)
 * Address: 002f63c4
 */
TInterpreter::GetImplementor(void) {
    /*
        2f63c4:	e590004c 	ldr	r0, [r0, #76]	; fField76
        2f63c8:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2f63cc:	e5900000 	ldr	r0, [r0]
        2f63d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::IsSend(void)
 * Address: 002f63d4
 */
TInterpreter::IsSend(void) {
    /*
        2f63d4:	e590005c 	ldr	r0, [r0, #92]	; fField92
        2f63d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::SetCallEnv(void)
 * Address: 002f63dc
 */
TInterpreter::SetCallEnv(void) {
    /*
        2f63dc:	e3a01000 	mov	r1, #0	; 0x0
        2f63e0:	e5a0105c 	str	r1, [r0, #92]!	; fField92
        2f63e4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::SetSendEnv(RefVar const &, RefVar const &)
 * Address: 002f63e8
 */
TInterpreter::SetSendEnv(RefVar const &, RefVar const &) {
    /*
        2f63e8:	e3a03001 	mov	r3, #1	; 0x1
        2f63ec:	e580305c 	str	r3, [r0, #92]	; fField92
        2f63f0:	e590304c 	ldr	r3, [r0, #76]	; fField76
        2f63f4:	e5911000 	ldr	r1, [r1]
        2f63f8:	e5911000 	ldr	r1, [r1]
        2f63fc:	e5933010 	ldr	r3, [r3, #16]	; fField16
        2f6400:	e5831000 	str	r1, [r3]
        2f6404:	e590004c 	ldr	r0, [r0, #76]	; fField76
        2f6408:	e5921000 	ldr	r1, [r2]
        2f640c:	e5911000 	ldr	r1, [r1]
        2f6410:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2f6414:	e5801000 	str	r1, [r0]
        2f6418:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInterpreter::TaciturnPrintObject(RefVar const &, long)
 * Address: 0035e4f4
 */
TInterpreter::TaciturnPrintObject(RefVar const &, long) {
    /*
        35e4f4:	e1a0c00d 	mov	ip, sp
        35e4f8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        35e4fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        35e500:	e1a06000 	mov	r6, r0
        35e504:	e1a04001 	mov	r4, r1
        35e508:	e1a05002 	mov	r5, r2
        35e50c:	e5910000 	ldr	r0, [r1]
        35e510:	e5900000 	ldr	r0, [r0]
        35e514:	e3100001 	tst	r0, #1	; 0x1
        35e518:	0a000011 	beq	35e564 <TInterpreter::TaciturnPrintObject(RefVar const &, long)+0x70>
        35e51c:	eb619b60 	bl	1bc52a4 <$IsSymbol(long)>
        35e520:	e3300000 	teq	r0, #0	; 0x0
        35e524:	1a00000e 	bne	35e564 <TInterpreter::TaciturnPrintObject(RefVar const &, long)+0x70>
        35e528:	e5940000 	ldr	r0, [r4]
        35e52c:	e5900000 	ldr	r0, [r0]
        35e530:	eb619b57 	bl	1bc5294 <$ISREAL(long)>
        35e534:	e3300000 	teq	r0, #0	; 0x0
        35e538:	1a000009 	bne	35e564 <TInterpreter::TaciturnPrintObject(RefVar const &, long)+0x70>
        35e53c:	e5b6007c 	ldr	r0, [r6, #124]!	; fField124
        35e540:	e3300003 	teq	r0, #3	; 0x3
        35e544:	0a000006 	beq	35e564 <TInterpreter::TaciturnPrintObject(RefVar const &, long)+0x70>
        35e548:	e5940000 	ldr	r0, [r4]
        35e54c:	e5902000 	ldr	r2, [r0]
        35e550:	e59f001c 	ldr	r0, [pc, #1c]	; 35e574 <TInterpreter::TaciturnPrintObject(RefVar const &, long)+0x80>
        35e554:	e5900000 	ldr	r0, [r0]
        35e558:	e28f1f06 	add	r1, pc, #24	; 0x18
        35e55c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        35e560:	ea00ae54 	b	389eb8 <POutTranslator::Print(char const *,...)>
        35e564:	e1a01005 	mov	r1, r5
        35e568:	e1a00004 	mov	r0, r4
        35e56c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        35e570:	ea625503 	b	1bf3984 <$PrintObject(RefVar const &, unsigned long)>
        35e574:	0c101820 	ldceq	8, cr1, [r0], -#128
        35e578:	23256c58 	teqcs	r5, #22528	; 0x5800
        35e57c:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TInterpreter::TraceSend(RefVar const &, RefVar const &, long, long)
 * Address: 0035e600
 */
TInterpreter::TraceSend(RefVar const &, RefVar const &, long, long) {
    /*
        35e600:	e1a0c00d 	mov	ip, sp
        35e604:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        35e608:	e24cb004 	sub	fp, ip, #4	; 0x4
        35e60c:	e1a06000 	mov	r6, r0
        35e610:	e1a05001 	mov	r5, r1
        35e614:	e1a04002 	mov	r4, r2
        35e618:	e1a02003 	mov	r2, r3
        35e61c:	e59b3004 	ldr	r3, [fp, #4]	; fField4
        35e620:	e92d000c 	stmdb	sp!, {r2, r3}
        35e624:	e5940000 	ldr	r0, [r4]
        35e628:	e5900000 	ldr	r0, [r0]
        35e62c:	e3300002 	teq	r0, #2	; 0x2
        35e630:	028f3f07 	addeq	r3, pc, #28	; 0x1c
        35e634:	0a000001 	beq	35e640 <TInterpreter::TraceSend(RefVar const &, RefVar const &, long, long)+0x40>
        35e638:	eb61a786 	bl	1bc8458 <$SymbolName(long)>
        35e63c:	e1a03000 	mov	r3, r0
        35e640:	e1a02004 	mov	r2, r4
        35e644:	e1a01005 	mov	r1, r5
        35e648:	e1a00006 	mov	r0, r6
        35e64c:	eb5be97a 	bl	1a58c3c <TInterpreter::$TraceMethod(RefVar const &, RefVar const &, char *, long, long)>
        35e650:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        35e654:	2d2d2d00 	stccs	13, cr2, [sp]
    */
}

/**
 * Symbol: TInterpreter::TraceFreqCall(long)
 * Address: 0035e658
 */
TInterpreter::TraceFreqCall(long) {
    /*
        35e658:	e1a0c00d 	mov	ip, sp
        35e65c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        35e660:	e24cb004 	sub	fp, ip, #4	; 0x4
        35e664:	e1a06000 	mov	r6, r0
        35e668:	e1a04001 	mov	r4, r1
        35e66c:	e24dd008 	sub	sp, sp, #8	; 0x8
        35e670:	e3a03000 	mov	r3, #0	; 0x0
        35e674:	e59f7050 	ldr	r7, [pc, #50]	; 35e6cc <TInterpreter::TraceFreqCall(long)+0x74>
        35e678:	e0870181 	add	r0, r7, r1, lsl #3
        35e67c:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        35e680:	e92d000c 	stmdb	sp!, {r2, r3}
        35e684:	e3a08002 	mov	r8, #2	; 0x2
        35e688:	e1a00008 	mov	r0, r8
        35e68c:	eb618eae 	bl	1bc214c <$AllocateRefHandle(long)>
        35e690:	e58d0008 	str	r0, [sp, #8]	; fField8
        35e694:	e28d5008 	add	r5, sp, #8	; 0x8
        35e698:	e1a00008 	mov	r0, r8
        35e69c:	eb618eaa 	bl	1bc214c <$AllocateRefHandle(long)>
        35e6a0:	e58d000c 	str	r0, [sp, #12]	; fField12
        35e6a4:	e28d100c 	add	r1, sp, #12	; 0xc
        35e6a8:	e7973184 	ldr	r3, [r7, r4, lsl #3]
        35e6ac:	e1a00006 	mov	r0, r6
        35e6b0:	e1a02005 	mov	r2, r5
        35e6b4:	eb5be960 	bl	1a58c3c <TInterpreter::$TraceMethod(RefVar const &, RefVar const &, char *, long, long)>
        35e6b8:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        35e6bc:	eb6192be 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35e6c0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        35e6c4:	eb6192bc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35e6c8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        35e6cc:	0c1051f4 	ldfeqs	f5, [r0], -#976
    */
}

/**
 * Symbol: TInterpreter::TraceApply(RefVar const &, long)
 * Address: 0035e6d0
 */
TInterpreter::TraceApply(RefVar const &, long) {
    /*
        35e6d0:	e1a0c00d 	mov	ip, sp
        35e6d4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        35e6d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        35e6dc:	e1a05000 	mov	r5, r0
        35e6e0:	e24dd008 	sub	sp, sp, #8	; 0x8
        35e6e4:	e3a03000 	mov	r3, #0	; 0x0
        35e6e8:	e92d000c 	stmdb	sp!, {r2, r3}
        35e6ec:	e3a06002 	mov	r6, #2	; 0x2
        35e6f0:	e1a00006 	mov	r0, r6
        35e6f4:	eb618e94 	bl	1bc214c <$AllocateRefHandle(long)>
        35e6f8:	e58d0008 	str	r0, [sp, #8]	; fField8
        35e6fc:	e28d4008 	add	r4, sp, #8	; 0x8
        35e700:	e1a00006 	mov	r0, r6
        35e704:	eb618e90 	bl	1bc214c <$AllocateRefHandle(long)>
        35e708:	e58d000c 	str	r0, [sp, #12]	; fField12
        35e70c:	e28d100c 	add	r1, sp, #12	; 0xc
        35e710:	e1a00005 	mov	r0, r5
        35e714:	e28f3f06 	add	r3, pc, #24	; 0x18
        35e718:	e1a02004 	mov	r2, r4
        35e71c:	eb5be946 	bl	1a58c3c <TInterpreter::$TraceMethod(RefVar const &, RefVar const &, char *, long, long)>
        35e720:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        35e724:	eb6192a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35e728:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        35e72c:	eb6192a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35e730:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        35e734:	5b63616c 	blpl	1c36cec <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x26494>
        35e738:	6c207769 	stcvs	7, cr7, [r0], -#420
        35e73c:	74685d00 	strvcbt	r5, [r8], -#3328
    */
}

/**
 * Symbol: TInterpreter::TraceCall(RefVar const &, long)
 * Address: 0035e740
 */
TInterpreter::TraceCall(RefVar const &, long) {
    /*
        35e740:	e1a0c00d 	mov	ip, sp
        35e744:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        35e748:	e24cb004 	sub	fp, ip, #4	; 0x4
        35e74c:	e1a06000 	mov	r6, r0
        35e750:	e1a04001 	mov	r4, r1
        35e754:	e24dd004 	sub	sp, sp, #4	; 0x4
        35e758:	e3a03000 	mov	r3, #0	; 0x0
        35e75c:	e92d000c 	stmdb	sp!, {r2, r3}
        35e760:	e5910000 	ldr	r0, [r1]
        35e764:	e5900000 	ldr	r0, [r0]
        35e768:	eb61a73a 	bl	1bc8458 <$SymbolName(long)>
        35e76c:	e1a05000 	mov	r5, r0
        35e770:	e3a00002 	mov	r0, #2	; 0x2
        35e774:	eb618e74 	bl	1bc214c <$AllocateRefHandle(long)>
        35e778:	e58d0008 	str	r0, [sp, #8]	; fField8
        35e77c:	e28d1008 	add	r1, sp, #8	; 0x8
        35e780:	e1a02004 	mov	r2, r4
        35e784:	e1a00006 	mov	r0, r6
        35e788:	e1a03005 	mov	r3, r5
        35e78c:	eb5be92a 	bl	1a58c3c <TInterpreter::$TraceMethod(RefVar const &, RefVar const &, char *, long, long)>
        35e790:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        35e794:	eb619288 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35e798:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TInterpreter::TraceSetOptions(void)
 * Address: 0035e79c
 */
TInterpreter::TraceSetOptions(void) {
    /*
        35e79c:	e1a0c00d 	mov	ip, sp
        35e7a0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        35e7a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        35e7a8:	e1a04000 	mov	r4, r0
        35e7ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        35e7b0:	e59f00e4 	ldr	r0, [pc, #e4]	; 35e89c <TInterpreter::TraceSetOptions(void)+0x100>
        35e7b4:	e5900000 	ldr	r0, [r0]
        35e7b8:	e59f10e0 	ldr	r1, [pc, #e0]	; 35e8a0 <TInterpreter::TraceSetOptions(void)+0x104>
        35e7bc:	e5911000 	ldr	r1, [r1]
        35e7c0:	e5911000 	ldr	r1, [r1]
        35e7c4:	eb6196a5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35e7c8:	eb618e5f 	bl	1bc214c <$AllocateRefHandle(long)>
        35e7cc:	e58d0000 	str	r0, [sp]
        35e7d0:	e5900000 	ldr	r0, [r0]
        35e7d4:	e3a07000 	mov	r7, #0	; 0x0
        35e7d8:	e3300002 	teq	r0, #2	; 0x2
        35e7dc:	0584707c 	streq	r7, [r4, #124]	; fField124
        35e7e0:	0a00008c 	beq	35ea18 <TInterpreter::TraceSetOptions(void)+0x27c>
        35e7e4:	e3a00002 	mov	r0, #2	; 0x2
        35e7e8:	e3a0a001 	mov	sl, #1	; 0x1
        35e7ec:	e584007c 	str	r0, [r4, #124]	; fField124
        35e7f0:	e5c4a069 	strb	sl, [r4, #105]	; fField105
        35e7f4:	e5c4a068 	strb	sl, [r4, #104]	; fField104
        35e7f8:	e2841070 	add	r1, r4, #112	; 0x70
        35e7fc:	e1a06001 	mov	r6, r1
        35e800:	e5911000 	ldr	r1, [r1]
        35e804:	e5810000 	str	r0, [r1]
        35e808:	e2841074 	add	r1, r4, #116	; 0x74
        35e80c:	e1a05001 	mov	r5, r1
        35e810:	e5911000 	ldr	r1, [r1]
        35e814:	e5810000 	str	r0, [r1]
        35e818:	e284106c 	add	r1, r4, #108	; 0x6c
        35e81c:	e1a09001 	mov	r9, r1
        35e820:	e5911000 	ldr	r1, [r1]
        35e824:	e5810000 	str	r0, [r1]
        35e828:	e59d0000 	ldr	r0, [sp]
        35e82c:	e5900000 	ldr	r0, [r0]
        35e830:	eb619a9b 	bl	1bc52a4 <$IsSymbol(long)>
        35e834:	e59f8068 	ldr	r8, [pc, #68]	; 35e8a4 <TInterpreter::TraceSetOptions(void)+0x108>	; fField68
        35e838:	e3300000 	teq	r0, #0	; 0x0
        35e83c:	0a00001a 	beq	35e8ac <TInterpreter::TraceSetOptions(void)+0x110>
        35e840:	e59d0000 	ldr	r0, [sp]
        35e844:	e5900000 	ldr	r0, [r0]
        35e848:	e5981000 	ldr	r1, [r8]
        35e84c:	e5911000 	ldr	r1, [r1]
        35e850:	eb619676 	bl	1bc4230 <$EQRef__FlT1>
        35e854:	e3300000 	teq	r0, #0	; 0x0
        35e858:	1584a07c 	strne	sl, [r4, #124]	; fField124
        35e85c:	15c47068 	strneb	r7, [r4, #104]	; fField104
        35e860:	1a00006c 	bne	35ea18 <TInterpreter::TraceSetOptions(void)+0x27c>
        35e864:	e59d0000 	ldr	r0, [sp]
        35e868:	e5900000 	ldr	r0, [r0]
        35e86c:	e59f1034 	ldr	r1, [pc, #34]	; 35e8a8 <TInterpreter::TraceSetOptions(void)+0x10c>
        35e870:	e5911000 	ldr	r1, [r1]
        35e874:	e5911000 	ldr	r1, [r1]
        35e878:	eb61966c 	bl	1bc4230 <$EQRef__FlT1>
        35e87c:	e3300000 	teq	r0, #0	; 0x0
        35e880:	13a00003 	movne	r0, #3	; 0x3
        35e884:	1584007c 	strne	r0, [r4, #124]	; fField124
        35e888:	1a000062 	bne	35ea18 <TInterpreter::TraceSetOptions(void)+0x27c>
        35e88c:	e59d0000 	ldr	r0, [sp]
        35e890:	e5900000 	ldr	r0, [r0]
        35e894:	e5961000 	ldr	r1, [r6]
        35e898:	ea000012 	b	35e8e8 <TInterpreter::TraceSetOptions(void)+0x14c>
        35e89c:	0c10180c 	ldceq	8, cr1, [r0], -#48
        35e8a0:	00684c38 	rsbeq	r4, r8, r8, lsr ip
        35e8a4:	00682f30 	rsbeq	r2, r8, r0, lsr pc
        35e8a8:	00682f10 	rsbeq	r2, r8, r0, lsl pc
        35e8ac:	e1a0000d 	mov	r0, sp
        35e8b0:	eb625436 	bl	1bf3990 <$IsFrame(RefVar const &)>
        35e8b4:	e3300000 	teq	r0, #0	; 0x0
        35e8b8:	0a000056 	beq	35ea18 <TInterpreter::TraceSetOptions(void)+0x27c>
        35e8bc:	e59d0000 	ldr	r0, [sp]
        35e8c0:	e5900000 	ldr	r0, [r0]
        35e8c4:	e59f1024 	ldr	r1, [pc, #24]	; 35e8f0 <TInterpreter::TraceSetOptions(void)+0x154>
        35e8c8:	e5911000 	ldr	r1, [r1]
        35e8cc:	e5911000 	ldr	r1, [r1]
        35e8d0:	eb61965c 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        35e8d4:	e3300000 	teq	r0, #0	; 0x0
        35e8d8:	e59d0000 	ldr	r0, [sp]
        35e8dc:	e5900000 	ldr	r0, [r0]
        35e8e0:	0a000003 	beq	35e8f4 <TInterpreter::TraceSetOptions(void)+0x158>
        35e8e4:	e5951000 	ldr	r1, [r5]
        35e8e8:	e5810000 	str	r0, [r1]
        35e8ec:	ea000049 	b	35ea18 <TInterpreter::TraceSetOptions(void)+0x27c>
        35e8f0:	00684f48 	rsbeq	r4, r8, r8, asr #30
        35e8f4:	e5981000 	ldr	r1, [r8]
        35e8f8:	e5911000 	ldr	r1, [r1]
        35e8fc:	eb619651 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        35e900:	e3300000 	teq	r0, #0	; 0x0
        35e904:	0a000007 	beq	35e928 <TInterpreter::TraceSetOptions(void)+0x18c>
        35e908:	e59d0000 	ldr	r0, [sp]
        35e90c:	e5900000 	ldr	r0, [r0]
        35e910:	e5981000 	ldr	r1, [r8]
        35e914:	e5911000 	ldr	r1, [r1]
        35e918:	eb619650 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35e91c:	e2500002 	subs	r0, r0, #2	; 0x2
        35e920:	13a00001 	movne	r0, #1	; 0x1
        35e924:	e5c40068 	strb	r0, [r4, #104]	; fField104
        35e928:	e59d0000 	ldr	r0, [sp]
        35e92c:	e5900000 	ldr	r0, [r0]
        35e930:	e59f80f4 	ldr	r8, [pc, #f4]	; 35ea2c <TInterpreter::TraceSetOptions(void)+0x290>
        35e934:	e5981000 	ldr	r1, [r8]
        35e938:	e5911000 	ldr	r1, [r1]
        35e93c:	eb619641 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        35e940:	e3300000 	teq	r0, #0	; 0x0
        35e944:	0a000006 	beq	35e964 <TInterpreter::TraceSetOptions(void)+0x1c8>
        35e948:	e59d0000 	ldr	r0, [sp]
        35e94c:	e5900000 	ldr	r0, [r0]
        35e950:	e5981000 	ldr	r1, [r8]
        35e954:	e5911000 	ldr	r1, [r1]
        35e958:	eb619640 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35e95c:	e5961000 	ldr	r1, [r6]
        35e960:	e5810000 	str	r0, [r1]
        35e964:	e59d0000 	ldr	r0, [sp]
        35e968:	e5900000 	ldr	r0, [r0]
        35e96c:	e59f60bc 	ldr	r6, [pc, #bc]	; 35ea30 <TInterpreter::TraceSetOptions(void)+0x294>
        35e970:	e5961000 	ldr	r1, [r6]
        35e974:	e5911000 	ldr	r1, [r1]
        35e978:	eb619632 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        35e97c:	e3300000 	teq	r0, #0	; 0x0
        35e980:	0a000006 	beq	35e9a0 <TInterpreter::TraceSetOptions(void)+0x204>
        35e984:	e59d0000 	ldr	r0, [sp]
        35e988:	e5900000 	ldr	r0, [r0]
        35e98c:	e5961000 	ldr	r1, [r6]
        35e990:	e5911000 	ldr	r1, [r1]
        35e994:	eb619631 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35e998:	e5951000 	ldr	r1, [r5]
        35e99c:	e5810000 	str	r0, [r1]
        35e9a0:	e59d0000 	ldr	r0, [sp]
        35e9a4:	e5900000 	ldr	r0, [r0]
        35e9a8:	e59f5084 	ldr	r5, [pc, #84]	; 35ea34 <TInterpreter::TraceSetOptions(void)+0x298>	; fField84
        35e9ac:	e5951000 	ldr	r1, [r5]
        35e9b0:	e5911000 	ldr	r1, [r1]
        35e9b4:	eb619623 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        35e9b8:	e3300000 	teq	r0, #0	; 0x0
        35e9bc:	0a000015 	beq	35ea18 <TInterpreter::TraceSetOptions(void)+0x27c>
        35e9c0:	e59d0000 	ldr	r0, [sp]
        35e9c4:	e5900000 	ldr	r0, [r0]
        35e9c8:	e5951000 	ldr	r1, [r5]
        35e9cc:	e5911000 	ldr	r1, [r1]
        35e9d0:	eb619622 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35e9d4:	eb618ddc 	bl	1bc214c <$AllocateRefHandle(long)>
        35e9d8:	e1a05000 	mov	r5, r0
        35e9dc:	e5900000 	ldr	r0, [r0]
        35e9e0:	e3a0101a 	mov	r1, #26	; 0x1a
        35e9e4:	eb619611 	bl	1bc4230 <$EQRef__FlT1>
        35e9e8:	e3300000 	teq	r0, #0	; 0x0
        35e9ec:	1a000007 	bne	35ea10 <TInterpreter::TraceSetOptions(void)+0x274>
        35e9f0:	e5950000 	ldr	r0, [r5]
        35e9f4:	e2500002 	subs	r0, r0, #2	; 0x2
        35e9f8:	13a00001 	movne	r0, #1	; 0x1
        35e9fc:	e5c40068 	strb	r0, [r4, #104]	; fField104
        35ea00:	e5950000 	ldr	r0, [r5]
        35ea04:	e5991000 	ldr	r1, [r9]
        35ea08:	e5810000 	str	r0, [r1]
        35ea0c:	e5c47069 	strb	r7, [r4, #105]	; fField105
        35ea10:	e1a00005 	mov	r0, r5
        35ea14:	eb6191e8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35ea18:	e1a00004 	mov	r0, r4
        35ea1c:	eb5be45c 	bl	1a57b94 <TInterpreter::$SetFastLoopFlag(void)>
        35ea20:	e59d0000 	ldr	r0, [sp]
        35ea24:	eb6191e4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35ea28:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35ea2c:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        35ea30:	00682608 	rsbeq	r2, r8, r8, lsl #12
        35ea34:	006846c8 	rsbeq	r4, r8, r8, asr #13
    */
}

/**
 * Symbol: TInterpreter::TraceGet(RefVar const &, RefVar const &, RefVar const &)
 * Address: 0035ea38
 */
TInterpreter::TraceGet(RefVar const &, RefVar const &, RefVar const &) {
    /*
        35ea38:	e1a0c00d 	mov	ip, sp
        35ea3c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        35ea40:	e24cb004 	sub	fp, ip, #4	; 0x4
        35ea44:	e1a04000 	mov	r4, r0
        35ea48:	e1a07001 	mov	r7, r1
        35ea4c:	e1a06002 	mov	r6, r2
        35ea50:	e1a05003 	mov	r5, r3
        35ea54:	e5d00068 	ldrb	r0, [r0, #104]	; fField104
        35ea58:	e3300000 	teq	r0, #0	; 0x0
        35ea5c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35ea60:	e594006c 	ldr	r0, [r4, #108]	; fField108
        35ea64:	e5900000 	ldr	r0, [r0]
        35ea68:	e1a01000 	mov	r1, r0
        35ea6c:	e3300002 	teq	r0, #2	; 0x2
        35ea70:	0a000004 	beq	35ea88 <TInterpreter::TraceGet(RefVar const &, RefVar const &, RefVar const &)+0x50>
        35ea74:	e5950000 	ldr	r0, [r5]
        35ea78:	e5900000 	ldr	r0, [r0]
        35ea7c:	eb6195eb 	bl	1bc4230 <$EQRef__FlT1>
        35ea80:	e3300000 	teq	r0, #0	; 0x0
        35ea84:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35ea88:	e5940070 	ldr	r0, [r4, #112]	; fField112
        35ea8c:	e5900000 	ldr	r0, [r0]
        35ea90:	e3300002 	teq	r0, #2	; 0x2
        35ea94:	0a000002 	beq	35eaa4 <TInterpreter::TraceGet(RefVar const &, RefVar const &, RefVar const &)+0x6c>
        35ea98:	e5940078 	ldr	r0, [r4, #120]	; fField120
        35ea9c:	e3300000 	teq	r0, #0	; 0x0
        35eaa0:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35eaa4:	e2840074 	add	r0, r4, #116	; 0x74
        35eaa8:	e5901000 	ldr	r1, [r0]
        35eaac:	e5911000 	ldr	r1, [r1]
        35eab0:	e3310002 	teq	r1, #2	; 0x2
        35eab4:	0a000004 	beq	35eacc <TInterpreter::TraceGet(RefVar const &, RefVar const &, RefVar const &)+0x94>
        35eab8:	e594104c 	ldr	r1, [r4, #76]	; fField76
        35eabc:	e2811008 	add	r1, r1, #8	; 0x8
        35eac0:	eb5bdc04 	bl	1a55ad8 <$IsParent__FRC6RefVarT1>
        35eac4:	e3300000 	teq	r0, #0	; 0x0
        35eac8:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35eacc:	e5942064 	ldr	r2, [r4, #100]	; fField100
        35ead0:	e59f805c 	ldr	r8, [pc, #5c]	; 35eb34 <TInterpreter::TraceGet(RefVar const &, RefVar const &, RefVar const &)+0xfc>
        35ead4:	e5980000 	ldr	r0, [r8]
        35ead8:	e28f3f16 	add	r3, pc, #88	; 0x58
        35eadc:	e28f1f16 	add	r1, pc, #88	; 0x58
        35eae0:	eb00acf4 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35eae4:	e1a09000 	mov	r9, r0
        35eae8:	e24dd008 	sub	sp, sp, #8	; 0x8
        35eaec:	e5950000 	ldr	r0, [r5]
        35eaf0:	e5900000 	ldr	r0, [r0]
        35eaf4:	eb6199ea 	bl	1bc52a4 <$IsSymbol(long)>
        35eaf8:	e3300000 	teq	r0, #0	; 0x0
        35eafc:	0a00000f 	beq	35eb40 <TInterpreter::TraceGet(RefVar const &, RefVar const &, RefVar const &)+0x108>
        35eb00:	e5960000 	ldr	r0, [r6]
        35eb04:	e5900000 	ldr	r0, [r0]
        35eb08:	e5951000 	ldr	r1, [r5]
        35eb0c:	e5911000 	ldr	r1, [r1]
        35eb10:	eb6195d2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35eb14:	eb618d8c 	bl	1bc214c <$AllocateRefHandle(long)>
        35eb18:	e58d0000 	str	r0, [sp]
        35eb1c:	e1a0100d 	mov	r1, sp
        35eb20:	e1a02009 	mov	r2, r9
        35eb24:	e1a00004 	mov	r0, r4
        35eb28:	eb5b95bf 	bl	1a4422c <TInterpreter::$TaciturnPrintObject(RefVar const &, long)>
        35eb2c:	e59d0000 	ldr	r0, [sp]
        35eb30:	ea00000c 	b	35eb68 <TInterpreter::TraceGet(RefVar const &, RefVar const &, RefVar const &)+0x130>
        35eb34:	0c101820 	ldceq	8, cr1, [r0], -#128
        35eb38:	20000000 	andcs	r0, r0, r0
        35eb3c:	252a7300 	strcs	r7, [sl, -#768]!
        35eb40:	e1a01005 	mov	r1, r5
        35eb44:	e1a00006 	mov	r0, r6
        35eb48:	eb6195c3 	bl	1bc425c <$GetFramePath__FRC6RefVarT1>
        35eb4c:	eb618d7e 	bl	1bc214c <$AllocateRefHandle(long)>
        35eb50:	e58d0004 	str	r0, [sp, #4]	; fField4
        35eb54:	e28d1004 	add	r1, sp, #4	; 0x4
        35eb58:	e1a02009 	mov	r2, r9
        35eb5c:	e1a00004 	mov	r0, r4
        35eb60:	eb5b95b1 	bl	1a4422c <TInterpreter::$TaciturnPrintObject(RefVar const &, long)>
        35eb64:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        35eb68:	eb619193 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35eb6c:	e5980000 	ldr	r0, [r8]
        35eb70:	e28f1f1d 	add	r1, pc, #116	; 0x74
        35eb74:	eb00accf 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35eb78:	e1a02000 	mov	r2, r0
        35eb7c:	e1a01007 	mov	r1, r7
        35eb80:	e1a00004 	mov	r0, r4
        35eb84:	eb5b95a8 	bl	1a4422c <TInterpreter::$TaciturnPrintObject(RefVar const &, long)>
        35eb88:	e5960000 	ldr	r0, [r6]
        35eb8c:	e5900000 	ldr	r0, [r0]
        35eb90:	e5971000 	ldr	r1, [r7]
        35eb94:	e5911000 	ldr	r1, [r1]
        35eb98:	eb6195a4 	bl	1bc4230 <$EQRef__FlT1>
        35eb9c:	e3300000 	teq	r0, #0	; 0x0
        35eba0:	1a000006 	bne	35ebc0 <TInterpreter::TraceGet(RefVar const &, RefVar const &, RefVar const &)+0x188>
        35eba4:	e5980000 	ldr	r0, [r8]
        35eba8:	e28f1f11 	add	r1, pc, #68	; 0x44
        35ebac:	eb00acc1 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35ebb0:	e1a02000 	mov	r2, r0
        35ebb4:	e1a01006 	mov	r1, r6
        35ebb8:	e1a00004 	mov	r0, r4
        35ebbc:	eb5b959a 	bl	1a4422c <TInterpreter::$TaciturnPrintObject(RefVar const &, long)>
        35ebc0:	e5980000 	ldr	r0, [r8]
        35ebc4:	e28f1f0b 	add	r1, pc, #44	; 0x2c
        35ebc8:	eb00acba 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35ebcc:	e1a02000 	mov	r2, r0
        35ebd0:	e1a01005 	mov	r1, r5
        35ebd4:	e1a00004 	mov	r0, r4
        35ebd8:	eb5b9593 	bl	1a4422c <TInterpreter::$TaciturnPrintObject(RefVar const &, long)>
        35ebdc:	e5980000 	ldr	r0, [r8]
        35ebe0:	e28f1f05 	add	r1, pc, #20	; 0x14
        35ebe4:	eb00acb3 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35ebe8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35ebec:	203c3d20 	eorcss	r3, ip, r0, lsr #26
        35ebf0:	28000000 	stmcsda	r0, {}
        35ebf4:	2f000000 	swics	0x00000000
        35ebf8:	292e0000 	stmcsdb	lr!, {}
        35ebfc:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TInterpreter::TraceSet(RefVar const &, RefVar const &, RefVar const &, RefVar const &)
 * Address: 0035ec00
 */
TInterpreter::TraceSet(RefVar const &, RefVar const &, RefVar const &, RefVar const &) {
    /*
        35ec00:	e1a0c00d 	mov	ip, sp
        35ec04:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        35ec08:	e24cb004 	sub	fp, ip, #4	; 0x4
        35ec0c:	e1a07000 	mov	r7, r0
        35ec10:	e1a06001 	mov	r6, r1
        35ec14:	e1a05002 	mov	r5, r2
        35ec18:	e1a04003 	mov	r4, r3
        35ec1c:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        35ec20:	e5d00068 	ldrb	r0, [r0, #104]	; fField104
        35ec24:	e3300000 	teq	r0, #0	; 0x0
        35ec28:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35ec2c:	e597006c 	ldr	r0, [r7, #108]	; fField108
        35ec30:	e5900000 	ldr	r0, [r0]
        35ec34:	e1a01000 	mov	r1, r0
        35ec38:	e3300002 	teq	r0, #2	; 0x2
        35ec3c:	0a000004 	beq	35ec54 <TInterpreter::TraceSet(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x54>
        35ec40:	e5940000 	ldr	r0, [r4]
        35ec44:	e5900000 	ldr	r0, [r0]
        35ec48:	eb619578 	bl	1bc4230 <$EQRef__FlT1>
        35ec4c:	e3300000 	teq	r0, #0	; 0x0
        35ec50:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35ec54:	e5970070 	ldr	r0, [r7, #112]	; fField112
        35ec58:	e5900000 	ldr	r0, [r0]
        35ec5c:	e3300002 	teq	r0, #2	; 0x2
        35ec60:	0a000002 	beq	35ec70 <TInterpreter::TraceSet(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x70>
        35ec64:	e5970078 	ldr	r0, [r7, #120]	; fField120
        35ec68:	e3300000 	teq	r0, #0	; 0x0
        35ec6c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35ec70:	e2870074 	add	r0, r7, #116	; 0x74
        35ec74:	e5901000 	ldr	r1, [r0]
        35ec78:	e5911000 	ldr	r1, [r1]
        35ec7c:	e3310002 	teq	r1, #2	; 0x2
        35ec80:	0a000004 	beq	35ec98 <TInterpreter::TraceSet(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x98>
        35ec84:	e597104c 	ldr	r1, [r7, #76]	; fField76
        35ec88:	e2811008 	add	r1, r1, #8	; 0x8
        35ec8c:	eb5bdb91 	bl	1a55ad8 <$IsParent__FRC6RefVarT1>
        35ec90:	e3300000 	teq	r0, #0	; 0x0
        35ec94:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35ec98:	e5b72064 	ldr	r2, [r7, #100]!	; fField100
        35ec9c:	e59f70a0 	ldr	r7, [pc, #a0]	; 35ed44 <TInterpreter::TraceSet(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x144>
        35eca0:	e5970000 	ldr	r0, [r7]
        35eca4:	e28f3f27 	add	r3, pc, #156	; 0x9c
        35eca8:	e28f1f27 	add	r1, pc, #156	; 0x9c
        35ecac:	eb00ac81 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35ecb0:	e1a02000 	mov	r2, r0
        35ecb4:	e1a01006 	mov	r1, r6
        35ecb8:	e59f8094 	ldr	r8, [pc, #94]	; 35ed54 <TInterpreter::TraceSet(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0x154>
        35ecbc:	e5980000 	ldr	r0, [r8]
        35ecc0:	eb5b9559 	bl	1a4422c <TInterpreter::$TaciturnPrintObject(RefVar const &, long)>
        35ecc4:	e5950000 	ldr	r0, [r5]
        35ecc8:	e5900000 	ldr	r0, [r0]
        35eccc:	e5961000 	ldr	r1, [r6]
        35ecd0:	e5911000 	ldr	r1, [r1]
        35ecd4:	eb619555 	bl	1bc4230 <$EQRef__FlT1>
        35ecd8:	e3300000 	teq	r0, #0	; 0x0
        35ecdc:	1a000006 	bne	35ecfc <TInterpreter::TraceSet(RefVar const &, RefVar const &, RefVar const &, RefVar const &)+0xfc>
        35ece0:	e5970000 	ldr	r0, [r7]
        35ece4:	e28f1f1b 	add	r1, pc, #108	; 0x6c
        35ece8:	eb00ac72 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35ecec:	e1a02000 	mov	r2, r0
        35ecf0:	e1a01005 	mov	r1, r5
        35ecf4:	e5980000 	ldr	r0, [r8]
        35ecf8:	eb5b954b 	bl	1a4422c <TInterpreter::$TaciturnPrintObject(RefVar const &, long)>
        35ecfc:	e5970000 	ldr	r0, [r7]
        35ed00:	e28f1f15 	add	r1, pc, #84	; 0x54
        35ed04:	eb00ac6b 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35ed08:	e1a02000 	mov	r2, r0
        35ed0c:	e1a01004 	mov	r1, r4
        35ed10:	e5980000 	ldr	r0, [r8]
        35ed14:	eb5b9544 	bl	1a4422c <TInterpreter::$TaciturnPrintObject(RefVar const &, long)>
        35ed18:	e5970000 	ldr	r0, [r7]
        35ed1c:	e28f1f0f 	add	r1, pc, #60	; 0x3c
        35ed20:	eb00ac64 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35ed24:	e1a02000 	mov	r2, r0
        35ed28:	e1a01009 	mov	r1, r9
        35ed2c:	e5980000 	ldr	r0, [r8]
        35ed30:	eb5b953d 	bl	1a4422c <TInterpreter::$TaciturnPrintObject(RefVar const &, long)>
        35ed34:	e5970000 	ldr	r0, [r7]
        35ed38:	e28f1f0a 	add	r1, pc, #40	; 0x28
        35ed3c:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        35ed40:	ea00ac5c 	b	389eb8 <POutTranslator::Print(char const *,...)>
        35ed44:	0c101820 	ldceq	8, cr1, [r0], -#128
        35ed48:	20000000 	andcs	r0, r0, r0
        35ed4c:	252a7328 	strcs	r7, [sl, -#808]!
        35ed50:	00000000 	andeq	r0, r0, r0
        35ed54:	0c105458 	ldceq	4, cr5, [r0], -#352
        35ed58:	2f000000 	swics	0x00000000
        35ed5c:	292e0000 	stmcsdb	lr!, {}
        35ed60:	203a3d20 	eorcss	r3, sl, r0, lsr #26
        35ed64:	00000000 	andeq	r0, r0, r0
        35ed68:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TInterpreter::TraceReturn(unsigned char)
 * Address: 0035ed6c
 */
TInterpreter::TraceReturn(unsigned char) {
    /*
        35ed6c:	e1a0c00d 	mov	ip, sp
        35ed70:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        35ed74:	e24cb004 	sub	fp, ip, #4	; 0x4
        35ed78:	e1a04000 	mov	r4, r0
        35ed7c:	e20160ff 	and	r6, r1, #255	; 0xff
        35ed80:	e5900070 	ldr	r0, [r0, #112]	; fField112
        35ed84:	e5900000 	ldr	r0, [r0]
        35ed88:	e3300002 	teq	r0, #2	; 0x2
        35ed8c:	0a000004 	beq	35eda4 <TInterpreter::TraceReturn(unsigned char)+0x38>
        35ed90:	e5940078 	ldr	r0, [r4, #120]	; fField120
        35ed94:	e3300000 	teq	r0, #0	; 0x0
        35ed98:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        35ed9c:	e2400001 	sub	r0, r0, #1	; 0x1
        35eda0:	e5840078 	str	r0, [r4, #120]	; fField120
        35eda4:	e5940064 	ldr	r0, [r4, #100]	; fField100
        35eda8:	e3300000 	teq	r0, #0	; 0x0
        35edac:	12402004 	subne	r2, r0, #4	; 0x4
        35edb0:	15842064 	strne	r2, [r4, #100]	; fField100
        35edb4:	15d40069 	ldrneb	r0, [r4, #105]	; fField105
        35edb8:	13300000 	teqne	r0, #0	; 0x0
        35edbc:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        35edc0:	e24dd004 	sub	sp, sp, #4	; 0x4
        35edc4:	e59f5050 	ldr	r5, [pc, #50]	; 35ee1c <TInterpreter::TraceReturn(unsigned char)+0xb0>
        35edc8:	e5950000 	ldr	r0, [r5]
        35edcc:	e28f3f13 	add	r3, pc, #76	; 0x4c
        35edd0:	e28f1f13 	add	r1, pc, #76	; 0x4c
        35edd4:	eb00ac37 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35edd8:	e1a07000 	mov	r7, r0
        35eddc:	e5940020 	ldr	r0, [r4, #32]	; fField32
        35ede0:	e5100004 	ldr	r0, [r0, -#4]	; fField4
        35ede4:	eb618cd8 	bl	1bc214c <$AllocateRefHandle(long)>
        35ede8:	e3360000 	teq	r6, #0	; 0x0
        35edec:	e58d0000 	str	r0, [sp]
        35edf0:	0a000003 	beq	35ee04 <TInterpreter::TraceReturn(unsigned char)+0x98>
        35edf4:	e1a02007 	mov	r2, r7
        35edf8:	e1a0100d 	mov	r1, sp
        35edfc:	e1a00004 	mov	r0, r4
        35ee00:	eb5b9509 	bl	1a4422c <TInterpreter::$TaciturnPrintObject(RefVar const &, long)>
        35ee04:	e5950000 	ldr	r0, [r5]
        35ee08:	e28f1f07 	add	r1, pc, #28	; 0x1c
        35ee0c:	eb00ac29 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35ee10:	e59d0000 	ldr	r0, [sp]
        35ee14:	eb6190e8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35ee18:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        35ee1c:	0c101820 	ldceq	8, cr1, [r0], -#128
        35ee20:	20000000 	andcs	r0, r0, r0
        35ee24:	252a733d 	strcs	r7, [sl, -#829]!
        35ee28:	3e200000 	cdpcc	0, 2, cr0, cr0, cr0, {0}
        35ee2c:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TInterpreter::TraceReturn(void)
 * Address: 0035ee30
 */
TInterpreter::TraceReturn(void) {
    /*
        35ee30:	e3a01001 	mov	r1, #1	; 0x1
        35ee34:	ea5be781 	b	1a58c40 <TInterpreter::$TraceReturn(unsigned char)>
    */
}

/**
 * Symbol: TInterpreter::TraceArgs(long, long, long)
 * Address: 0035ee38
 */
TInterpreter::TraceArgs(long, long, long) {
    /*
        35ee38:	e1a0c00d 	mov	ip, sp
        35ee3c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        35ee40:	e24cb004 	sub	fp, ip, #4	; 0x4
        35ee44:	e1a05000 	mov	r5, r0
        35ee48:	e1a04002 	mov	r4, r2
        35ee4c:	e1a06003 	mov	r6, r3
        35ee50:	e0810002 	add	r0, r1, r2
        35ee54:	e2407001 	sub	r7, r0, #1	; 0x1
        35ee58:	e2859020 	add	r9, r5, #32	; 0x20
        35ee5c:	e3e0a000 	mvn	sl, #0	; 0x0
        35ee60:	e59f8058 	ldr	r8, [pc, #58]	; 35eec0 <TInterpreter::TraceArgs(long, long, long)+0x88>
        35ee64:	e1570002 	cmp	r7, r2
        35ee68:	b91baff0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35ee6c:	e24dd004 	sub	sp, sp, #4	; 0x4
        35ee70:	e04a1007 	sub	r1, sl, r7
        35ee74:	e5990000 	ldr	r0, [r9]
        35ee78:	e7900101 	ldr	r0, [r0, r1, lsl #2]	; fField2
        35ee7c:	eb618cb2 	bl	1bc214c <$AllocateRefHandle(long)>
        35ee80:	e1a02006 	mov	r2, r6
        35ee84:	e58d0000 	str	r0, [sp]
        35ee88:	e1a0100d 	mov	r1, sp
        35ee8c:	e1a00005 	mov	r0, r5
        35ee90:	eb5b94e5 	bl	1a4422c <TInterpreter::$TaciturnPrintObject(RefVar const &, long)>
        35ee94:	e1570004 	cmp	r7, r4
        35ee98:	c5980000 	ldrgt	r0, [r8]
        35ee9c:	c28f1f08 	addgt	r1, pc, #32	; 0x20
        35eea0:	cb00ac04 	blgt	389eb8 <POutTranslator::Print(char const *,...)>
        35eea4:	e59d0000 	ldr	r0, [sp]
        35eea8:	eb6190c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35eeac:	e28dd004 	add	sp, sp, #4	; 0x4
        35eeb0:	e2477001 	sub	r7, r7, #1	; 0x1
        35eeb4:	e1570004 	cmp	r7, r4
        35eeb8:	aaffffeb 	bge	35ee6c <TInterpreter::TraceArgs(long, long, long)+0x34>
        35eebc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35eec0:	0c101820 	ldceq	8, cr1, [r0], -#128
        35eec4:	2c200000 	stccs	0, cr0, [r0]
    */
}

/**
 * Symbol: TInterpreter::TraceMethod(RefVar const &, RefVar const &, char *, long, long)
 * Address: 0035eec8
 */
TInterpreter::TraceMethod(RefVar const &, RefVar const &, char *, long, long) {
    /*
        35eec8:	e1a0c00d 	mov	ip, sp
        35eecc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        35eed0:	e24cb004 	sub	fp, ip, #4	; 0x4
        35eed4:	e1a04000 	mov	r4, r0
        35eed8:	e1a05001 	mov	r5, r1
        35eedc:	e1a06003 	mov	r6, r3
        35eee0:	e59b8008 	ldr	r8, [fp, #8]	; fField8
        35eee4:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        35eee8:	e5900070 	ldr	r0, [r0, #112]	; fField112
        35eeec:	e5900000 	ldr	r0, [r0]
        35eef0:	e3300002 	teq	r0, #2	; 0x2
        35eef4:	0a00000d 	beq	35ef30 <TInterpreter::TraceMethod(RefVar const &, RefVar const &, char *, long, long)+0x68>
        35eef8:	e5941078 	ldr	r1, [r4, #120]	; fField120
        35eefc:	e3310000 	teq	r1, #0	; 0x0
        35ef00:	1a000004 	bne	35ef18 <TInterpreter::TraceMethod(RefVar const &, RefVar const &, char *, long, long)+0x50>
        35ef04:	e5921000 	ldr	r1, [r2]
        35ef08:	e5911000 	ldr	r1, [r1]
        35ef0c:	eb6194c7 	bl	1bc4230 <$EQRef__FlT1>
        35ef10:	e3300000 	teq	r0, #0	; 0x0
        35ef14:	0a000002 	beq	35ef24 <TInterpreter::TraceMethod(RefVar const &, RefVar const &, char *, long, long)+0x5c>
        35ef18:	e5940078 	ldr	r0, [r4, #120]	; fField120
        35ef1c:	e2800001 	add	r0, r0, #1	; 0x1
        35ef20:	e5840078 	str	r0, [r4, #120]	; fField120
        35ef24:	e5940078 	ldr	r0, [r4, #120]	; fField120
        35ef28:	e3300000 	teq	r0, #0	; 0x0
        35ef2c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35ef30:	e2840074 	add	r0, r4, #116	; 0x74
        35ef34:	e1a07000 	mov	r7, r0
        35ef38:	e5900000 	ldr	r0, [r0]
        35ef3c:	e5900000 	ldr	r0, [r0]
        35ef40:	e3300002 	teq	r0, #2	; 0x2
        35ef44:	0a00000b 	beq	35ef78 <TInterpreter::TraceMethod(RefVar const &, RefVar const &, char *, long, long)+0xb0>
        35ef48:	e594004c 	ldr	r0, [r4, #76]	; fField76
        35ef4c:	e2801008 	add	r1, r0, #8	; 0x8
        35ef50:	e1a00005 	mov	r0, r5
        35ef54:	eb5bdadf 	bl	1a55ad8 <$IsParent__FRC6RefVarT1>
        35ef58:	e3300000 	teq	r0, #0	; 0x0
        35ef5c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35ef60:	e594004c 	ldr	r0, [r4, #76]	; fField76
        35ef64:	e2801008 	add	r1, r0, #8	; 0x8
        35ef68:	e1a00007 	mov	r0, r7
        35ef6c:	eb5bdad9 	bl	1a55ad8 <$IsParent__FRC6RefVarT1>
        35ef70:	e3300000 	teq	r0, #0	; 0x0
        35ef74:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35ef78:	e5d40069 	ldrb	r0, [r4, #105]	; fField105
        35ef7c:	e3300000 	teq	r0, #0	; 0x0
        35ef80:	0a00001f 	beq	35f004 <TInterpreter::TraceMethod(RefVar const &, RefVar const &, char *, long, long)+0x13c>
        35ef84:	e5942064 	ldr	r2, [r4, #100]	; fField100
        35ef88:	e59f7084 	ldr	r7, [pc, #84]	; 35f014 <TInterpreter::TraceMethod(RefVar const &, RefVar const &, char *, long, long)+0x14c>	; fField84
        35ef8c:	e5970000 	ldr	r0, [r7]
        35ef90:	e28f3f20 	add	r3, pc, #128	; 0x80
        35ef94:	e28f1f20 	add	r1, pc, #128	; 0x80
        35ef98:	eb00abc6 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35ef9c:	e5950000 	ldr	r0, [r5]
        35efa0:	e5900000 	ldr	r0, [r0]
        35efa4:	e3300002 	teq	r0, #2	; 0x2
        35efa8:	0a000009 	beq	35efd4 <TInterpreter::TraceMethod(RefVar const &, RefVar const &, char *, long, long)+0x10c>
        35efac:	e5970000 	ldr	r0, [r7]
        35efb0:	e28f1f1a 	add	r1, pc, #104	; 0x68
        35efb4:	eb00abbf 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35efb8:	e1a02000 	mov	r2, r0
        35efbc:	e1a01005 	mov	r1, r5
        35efc0:	e1a00004 	mov	r0, r4
        35efc4:	eb5b9498 	bl	1a4422c <TInterpreter::$TaciturnPrintObject(RefVar const &, long)>
        35efc8:	e5970000 	ldr	r0, [r7]
        35efcc:	e28f1f14 	add	r1, pc, #80	; 0x50
        35efd0:	eb00abb8 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35efd4:	e1a02006 	mov	r2, r6
        35efd8:	e5970000 	ldr	r0, [r7]
        35efdc:	e28f1f11 	add	r1, pc, #68	; 0x44
        35efe0:	eb00abb4 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35efe4:	e1a03000 	mov	r3, r0
        35efe8:	e1a02008 	mov	r2, r8
        35efec:	e1a01009 	mov	r1, r9
        35eff0:	e1a00004 	mov	r0, r4
        35eff4:	eb5b9493 	bl	1a44248 <TInterpreter::$TraceArgs(long, long, long)>
        35eff8:	e5970000 	ldr	r0, [r7]
        35effc:	e28f1f0a 	add	r1, pc, #40	; 0x28
        35f000:	eb00abac 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        35f004:	e5940064 	ldr	r0, [r4, #100]	; fField100
        35f008:	e2800004 	add	r0, r0, #4	; 0x4
        35f00c:	e5a40064 	str	r0, [r4, #100]!	; fField100
        35f010:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35f014:	0c101820 	ldceq	8, cr1, [r0], -#128
        35f018:	20000000 	andcs	r0, r0, r0
        35f01c:	252a7300 	strcs	r7, [sl, -#768]!
        35f020:	28000000 	stmcsda	r0, {}
        35f024:	293a0000 	ldmcsdb	sl!, {}
        35f028:	25732800 	ldrcsb	r2, [r3, -#2048]!
        35f02c:	290d0000 	stmcsdb	sp, {}
    */
}

