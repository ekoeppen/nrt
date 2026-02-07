#include "include/TMsg.h"

/**
 * Symbol: Make__4TMsgSFv
 * Address: 00219e88
 */
void TMsg::Make() {
    /*
        219e88:	e1a0c00d 	mov	ip, sp
        219e8c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        219e90:	e24cb004 	sub	fp, ip, #4	; 0x4
        219e94:	e3a00014 	mov	r0, #20	; 0x14
        219e98:	eb66d226 	bl	1bce738 <$__nw(unsigned int)>
        219e9c:	e1a04000 	mov	r4, r0
        219ea0:	e3a00000 	mov	r0, #0	; 0x0
        219ea4:	e5840000 	str	r0, [r4]
        219ea8:	e1a00004 	mov	r0, r4
        219eac:	eb6549d9 	bl	1b6c618 <TMsg::$IMsg(void)>
        219eb0:	e1a00004 	mov	r0, r4
        219eb4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: Msg__4TMsgSFPc
 * Address: 00219eb8
 */
void TMsg::Msg() {
    /*
        219eb8:	e1a0c00d 	mov	ip, sp
        219ebc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        219ec0:	e24cb004 	sub	fp, ip, #4	; 0x4
        219ec4:	e1a04000 	mov	r4, r0
        219ec8:	eb6549df 	bl	1b6c64c <$Make__4TMsgSFv>
        219ecc:	e1a05000 	mov	r5, r0
        219ed0:	e1a01004 	mov	r1, r4
        219ed4:	eb654dea 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        219ed8:	e1a00005 	mov	r0, r5
        219edc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMsg::IMsg(void)
 * Address: 00219ee0
 */
TMsg::IMsg(void) {
    /*
        219ee0:	e1a0c00d 	mov	ip, sp
        219ee4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        219ee8:	e24cb004 	sub	fp, ip, #4	; 0x4
        219eec:	e1a04000 	mov	r4, r0
        219ef0:	e5900000 	ldr	r0, [r0]
        219ef4:	e3300000 	teq	r0, #0	; 0x0
        219ef8:	1a000003 	bne	219f0c <TMsg::IMsg(void)+0x2c>
        219efc:	e3a00c01 	mov	r0, #256	; 0x100
        219f00:	eb6549d5 	bl	1b6c65c <$MakeHandle(long)>
        219f04:	e5840000 	str	r0, [r4]
        219f08:	ea000001 	b	219f14 <TMsg::IMsg(void)+0x34>
        219f0c:	e3a01c01 	mov	r1, #256	; 0x100
        219f10:	eb654de7 	bl	1b6d6b4 <$ResizeHandle(char **, long)>
        219f14:	e3a00c01 	mov	r0, #256	; 0x100
        219f18:	e5840004 	str	r0, [r4, #4]	; fField4
        219f1c:	e3a00000 	mov	r0, #0	; 0x0
        219f20:	e5840008 	str	r0, [r4, #8]	; fField8
        219f24:	e584000c 	str	r0, [r4, #12]	; fField12
        219f28:	e5840010 	str	r0, [r4, #16]	; fField16
        219f2c:	e1a00004 	mov	r0, r4
        219f30:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMsg::MsgLF(void)
 * Address: 00219f34
 */
TMsg::MsgLF(void) {
    /*
        219f34:	e1a0c00d 	mov	ip, sp
        219f38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        219f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        219f40:	e1a04000 	mov	r4, r0
        219f44:	e3a0100d 	mov	r1, #13	; 0xd
        219f48:	eb6549c7 	bl	1b6c66c <TMsg::$MsgChar(char)>
        219f4c:	e1a00004 	mov	r0, r4
        219f50:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMsg::MsgPrintf(void)
 * Address: 00219f54
 */
TMsg::MsgPrintf(void) {
    /*
        219f54:	e1a0c00d 	mov	ip, sp
        219f58:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        219f5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        219f60:	e1a04000 	mov	r4, r0
        219f64:	e24ddc01 	sub	sp, sp, #256	; 0x100
        219f68:	e59f001c 	ldr	r0, [pc, #1c]	; 219f8c <TMsg::MsgPrintf(void)+0x38>
        219f6c:	e5d00000 	ldrb	r0, [r0]
        219f70:	e3300000 	teq	r0, #0	; 0x0
        219f74:	0a000007 	beq	219f98 <TMsg::MsgPrintf(void)+0x44>
        219f78:	e1a00004 	mov	r0, r4
        219f7c:	e28f1f03 	add	r1, pc, #12	; 0xc
        219f80:	e3a02000 	mov	r2, #0	; 0x0
        219f84:	eb6549b9 	bl	1b6c670 <TMsg::$MsgFile(char *, unsigned long)>
        219f88:	ea000014 	b	219fe0 <TMsg::MsgPrintf(void)+0x8c>
        219f8c:	0c104d38 	ldceq	13, cr4, [r0], -#224
        219f90:	64756d70 	ldrvsbt	r6, [r5], -#3440
        219f94:	65720000 	ldrvsb	r0, [r2]!
        219f98:	e3a05000 	mov	r5, #0	; 0x0
        219f9c:	e3a07000 	mov	r7, #0	; 0x0
        219fa0:	e5946008 	ldr	r6, [r4, #8]	; fField8
        219fa4:	e3560000 	cmp	r6, #0	; 0x0
        219fa8:	da00000c 	ble	219fe0 <TMsg::MsgPrintf(void)+0x8c>
        219fac:	e5940000 	ldr	r0, [r4]
        219fb0:	e5900000 	ldr	r0, [r0]
        219fb4:	e0800005 	add	r0, r0, r5
        219fb8:	e1a0100d 	mov	r1, sp
        219fbc:	e3a020ff 	mov	r2, #255	; 0xff
        219fc0:	eb6549a7 	bl	1b6c664 <$MoveBlock__FPcT1l>
        219fc4:	e5cd70ff 	strb	r7, [sp, #255]
        219fc8:	e1a0000d 	mov	r0, sp
        219fcc:	eb675e2b 	bl	1bf1880 <$printf>
        219fd0:	e28550ff 	add	r5, r5, #255	; 0xff
        219fd4:	e24660ff 	sub	r6, r6, #255	; 0xff
        219fd8:	e3560000 	cmp	r6, #0	; 0x0
        219fdc:	cafffff2 	bgt	219fac <TMsg::MsgPrintf(void)+0x58>
        219fe0:	e1a00004 	mov	r0, r4
        219fe4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMsg::MsgFile(char *, unsigned long)
 * Address: 00219fe8
 */
TMsg::MsgFile(char *, unsigned long) {
    /*
        219fe8:	e1a0c00d 	mov	ip, sp
        219fec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        219ff0:	e24cb004 	sub	fp, ip, #4	; 0x4
        219ff4:	e1a04000 	mov	r4, r0
        219ff8:	e1a05001 	mov	r5, r1
        219ffc:	e1a06002 	mov	r6, r2
        21a000:	e24dd008 	sub	sp, sp, #8	; 0x8
        21a004:	e5900000 	ldr	r0, [r0]
        21a008:	e5900000 	ldr	r0, [r0]
        21a00c:	e3a0200a 	mov	r2, #10	; 0xa
        21a010:	e3a0100d 	mov	r1, #13	; 0xd
        21a014:	eb652049 	bl	1b62140 <$ReplaceCChars__FPccT2>
        21a018:	e5940008 	ldr	r0, [r4, #8]	; fField8
        21a01c:	e3500000 	cmp	r0, #0	; 0x0
        21a020:	9a00001c 	bls	21a098 <TMsg::MsgFile(char *, unsigned long)+0xb0>
        21a024:	e1a01806 	mov	r1, r6, lsl #16
        21a028:	e1a01841 	mov	r1, r1, asr #16
        21a02c:	e1a06001 	mov	r6, r1
        21a030:	e1a00005 	mov	r0, r5
        21a034:	eb654556 	bl	1b6b594 <$DeleteFile(char *, short)>
        21a038:	e1a01006 	mov	r1, r6
        21a03c:	e1a00005 	mov	r0, r5
        21a040:	e59f306c 	ldr	r3, [pc, #6c]	; 21a0b4 <TMsg::MsgFile(char *, unsigned long)+0xcc>
        21a044:	e59f206c 	ldr	r2, [pc, #6c]	; 21a0b8 <TMsg::MsgFile(char *, unsigned long)+0xd0>
        21a048:	eb654550 	bl	1b6b590 <$CreateFile__FPcslT3>
        21a04c:	e28d2004 	add	r2, sp, #4	; 0x4
        21a050:	e1a01006 	mov	r1, r6
        21a054:	e1a00005 	mov	r0, r5
        21a058:	eb654d91 	bl	1b6d6a4 <$OpenFile(char *, short, short *)>
        21a05c:	e5940000 	ldr	r0, [r4]
        21a060:	eb654975 	bl	1b6c63c <$LockHandle(char **)>
        21a064:	e5940008 	ldr	r0, [r4, #8]	; fField8
        21a068:	e58d0000 	str	r0, [sp]
        21a06c:	e5940000 	ldr	r0, [r4]
        21a070:	e1a0100d 	mov	r1, sp
        21a074:	e5902000 	ldr	r2, [r0]
        21a078:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        21a07c:	e1a00840 	mov	r0, r0, asr #16
        21a080:	eb6551a5 	bl	1b6e71c <$WriteFile(short, long *, void const *)>
        21a084:	e5940000 	ldr	r0, [r4]
        21a088:	eb6551a0 	bl	1b6e710 <$UnlockHandle(char **)>
        21a08c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        21a090:	e1a00840 	mov	r0, r0, asr #16
        21a094:	eb65453a 	bl	1b6b584 <$CloseFile(short)>
        21a098:	e5940000 	ldr	r0, [r4]
        21a09c:	e5900000 	ldr	r0, [r0]
        21a0a0:	e3a0200d 	mov	r2, #13	; 0xd
        21a0a4:	e3a0100a 	mov	r1, #10	; 0xa
        21a0a8:	eb652024 	bl	1b62140 <$ReplaceCChars__FPccT2>
        21a0ac:	e1a00004 	mov	r0, r4
        21a0b0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        21a0b4:	54455854 	strplb	r5, [r5], -#2132
        21a0b8:	4b41484c 	blmi	126c1f0 <ROM$$Size+0xb4c5a4>
    */
}

/**
 * Symbol: TMsg::Dispose(void)
 * Address: 0021a0bc
 */
TMsg::Dispose(void) {
    /*
        21a0bc:	e1a0c00d 	mov	ip, sp
        21a0c0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21a0c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a0c8:	e1a04000 	mov	r4, r0
        21a0cc:	e5900000 	ldr	r0, [r0]
        21a0d0:	eb654530 	bl	1b6b598 <$DeleteHandle(char **)>
        21a0d4:	e1a00004 	mov	r0, r4
        21a0d8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        21a0dc:	ea66cd7f 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: TMsg::MsgStr(char *)
 * Address: 0021a0e0
 */
TMsg::MsgStr(char *) {
    /*
        21a0e0:	e1a0c00d 	mov	ip, sp
        21a0e4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21a0e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a0ec:	e1a04000 	mov	r4, r0
        21a0f0:	e1a05001 	mov	r5, r1
        21a0f4:	e1a00001 	mov	r0, r1
        21a0f8:	eb652430 	bl	1b631c0 <$StringLength(char *)>
        21a0fc:	e1a06000 	mov	r6, r0
        21a100:	e5940008 	ldr	r0, [r4, #8]	; fField8
        21a104:	e0800006 	add	r0, r0, r6
        21a108:	e2801001 	add	r1, r0, #1	; 0x1
        21a10c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        21a110:	e1510000 	cmp	r1, r0
        21a114:	9a00000a 	bls	21a144 <TMsg::MsgStr(char *)+0x64>
        21a118:	e5940004 	ldr	r0, [r4, #4]	; fField4
        21a11c:	e2801c01 	add	r1, r0, #256	; 0x100
        21a120:	e5841004 	str	r1, [r4, #4]	; fField4
        21a124:	e5940000 	ldr	r0, [r4]
        21a128:	eb654d61 	bl	1b6d6b4 <$ResizeHandle(char **, long)>
        21a12c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        21a130:	e0800006 	add	r0, r0, r6
        21a134:	e2800001 	add	r0, r0, #1	; 0x1
        21a138:	e5941004 	ldr	r1, [r4, #4]	; fField4
        21a13c:	e1500001 	cmp	r0, r1
        21a140:	8afffff4 	bhi	21a118 <TMsg::MsgStr(char *)+0x38>
        21a144:	e2460001 	sub	r0, r6, #1	; 0x1
        21a148:	e3a01000 	mov	r1, #0	; 0x0
        21a14c:	e3560000 	cmp	r6, #0	; 0x0
        21a150:	9a000013 	bls	21a1a4 <TMsg::MsgStr(char *)+0xc4>
        21a154:	e4d52001 	ldrb	r2, [r5], #1
        21a158:	e332000d 	teq	r2, #13	; 0xd
        21a15c:	1a000003 	bne	21a170 <TMsg::MsgStr(char *)+0x90>
        21a160:	e584100c 	str	r1, [r4, #12]	; fField12
        21a164:	e5943010 	ldr	r3, [r4, #16]	; fField16
        21a168:	e2833001 	add	r3, r3, #1	; 0x1
        21a16c:	e5843010 	str	r3, [r4, #16]	; fField16
        21a170:	e594c008 	ldr	ip, [r4, #8]	; fField8
        21a174:	e28c3001 	add	r3, ip, #1	; 0x1
        21a178:	e5843008 	str	r3, [r4, #8]	; fField8
        21a17c:	e5943000 	ldr	r3, [r4]
        21a180:	e5933000 	ldr	r3, [r3]
        21a184:	e7c3200c 	strb	r2, [r3, ip]
        21a188:	e594200c 	ldr	r2, [r4, #12]	; fField12
        21a18c:	e2822001 	add	r2, r2, #1	; 0x1
        21a190:	e584200c 	str	r2, [r4, #12]	; fField12
        21a194:	e1a02000 	mov	r2, r0
        21a198:	e2400001 	sub	r0, r0, #1	; 0x1
        21a19c:	e3520000 	cmp	r2, #0	; 0x0
        21a1a0:	8affffeb 	bhi	21a154 <TMsg::MsgStr(char *)+0x74>
        21a1a4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        21a1a8:	e5942000 	ldr	r2, [r4]
        21a1ac:	e5922000 	ldr	r2, [r2]
        21a1b0:	e7c21000 	strb	r1, [r2, r0]
        21a1b4:	e1a00004 	mov	r0, r4
        21a1b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMsg::MsgChar(char)
 * Address: 0021a1bc
 */
TMsg::MsgChar(char) {
    /*
        21a1bc:	e1a0c00d 	mov	ip, sp
        21a1c0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21a1c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a1c8:	e1a04000 	mov	r4, r0
        21a1cc:	e56d1004 	strb	r1, [sp, -#4]!	; fField4
        21a1d0:	e3a00000 	mov	r0, #0	; 0x0
        21a1d4:	e5cd0001 	strb	r0, [sp, #1]
        21a1d8:	e1a0100d 	mov	r1, sp
        21a1dc:	e1a00004 	mov	r0, r4
        21a1e0:	eb654d27 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        21a1e4:	e1a00004 	mov	r0, r4
        21a1e8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMsg::MsgType(unsigned long)
 * Address: 0021a1ec
 */
TMsg::MsgType(unsigned long) {
    /*
        21a1ec:	e1a0c00d 	mov	ip, sp
        21a1f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21a1f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a1f8:	e1a04000 	mov	r4, r0
        21a1fc:	e3a00000 	mov	r0, #0	; 0x0
        21a200:	e52d1008 	str	r1, [sp, -#8]!	; fField8
        21a204:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        21a208:	e1a0100d 	mov	r1, sp
        21a20c:	e1a00004 	mov	r0, r4
        21a210:	eb654d1b 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        21a214:	e1a00004 	mov	r0, r4
        21a218:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMsg::MsgNum(unsigned long, long)
 * Address: 0021a21c
 */
TMsg::MsgNum(unsigned long, long) {
    /*
        21a21c:	e1a0c00d 	mov	ip, sp
        21a220:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        21a224:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a228:	e1a05000 	mov	r5, r0
        21a22c:	e1a04002 	mov	r4, r2
        21a230:	e24dd020 	sub	sp, sp, #32	; 0x20
        21a234:	e1a00001 	mov	r0, r1
        21a238:	e1a0100d 	mov	r1, sp
        21a23c:	eb6548ff 	bl	1b6c640 <$LongToString(long, char *)>
        21a240:	e5dd6000 	ldrb	r6, [sp]
        21a244:	e1a0000d 	mov	r0, sp
        21a248:	eb651fae 	bl	1b62108 <$PtoCString(char *)>
        21a24c:	e3540000 	cmp	r4, #0	; 0x0
        21a250:	da00000f 	ble	21a294 <TMsg::MsgNum(unsigned long, long)+0x78>
        21a254:	e1560004 	cmp	r6, r4
        21a258:	2a00000b 	bcs	21a28c <TMsg::MsgNum(unsigned long, long)+0x70>
        21a25c:	e28d7001 	add	r7, sp, #1	; 0x1
        21a260:	e3a08020 	mov	r8, #32	; 0x20
        21a264:	2a00000a 	bcs	21a294 <TMsg::MsgNum(unsigned long, long)+0x78>
        21a268:	e1a01007 	mov	r1, r7
        21a26c:	e1a0000d 	mov	r0, sp
        21a270:	e3a0201f 	mov	r2, #31	; 0x1f
        21a274:	eb6548fa 	bl	1b6c664 <$MoveBlock__FPcT1l>
        21a278:	e5cd8000 	strb	r8, [sp]
        21a27c:	e2866001 	add	r6, r6, #1	; 0x1
        21a280:	e1560004 	cmp	r6, r4
        21a284:	3afffff7 	bcc	21a268 <TMsg::MsgNum(unsigned long, long)+0x4c>
        21a288:	ea000001 	b	21a294 <TMsg::MsgNum(unsigned long, long)+0x78>
        21a28c:	e3a01000 	mov	r1, #0	; 0x0
        21a290:	e7cd1004 	strb	r1, [sp, r4]
        21a294:	e1a0100d 	mov	r1, sp
        21a298:	e1a00005 	mov	r0, r5
        21a29c:	eb654cf8 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        21a2a0:	e1a00005 	mov	r0, r5
        21a2a4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TMsg::MsgHex(unsigned long, long)
 * Address: 0021a2a8
 */
TMsg::MsgHex(unsigned long, long) {
    /*
        21a2a8:	e1a0c00d 	mov	ip, sp
        21a2ac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21a2b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21a2b4:	e1a05000 	mov	r5, r0
        21a2b8:	e1a06001 	mov	r6, r1
        21a2bc:	e1a04002 	mov	r4, r2
        21a2c0:	e3520008 	cmp	r2, #8	; 0x8
        21a2c4:	da000005 	ble	21a2e0 <TMsg::MsgHex(unsigned long, long)+0x38>
        21a2c8:	e2444001 	sub	r4, r4, #1	; 0x1
        21a2cc:	e1a00005 	mov	r0, r5
        21a2d0:	e3a01020 	mov	r1, #32	; 0x20
        21a2d4:	eb6548e4 	bl	1b6c66c <TMsg::$MsgChar(char)>
        21a2d8:	e3540008 	cmp	r4, #8	; 0x8
        21a2dc:	cafffff9 	bgt	21a2c8 <TMsg::MsgHex(unsigned long, long)+0x20>
        21a2e0:	e3540000 	cmp	r4, #0	; 0x0
        21a2e4:	a3a07000 	movge	r7, #0	; 0x0
        21a2e8:	b3a07001 	movlt	r7, #1	; 0x1
        21a2ec:	e3370000 	teq	r7, #0	; 0x0
        21a2f0:	13a04008 	movne	r4, #8	; 0x8
        21a2f4:	e1b04104 	movs	r4, r4, lsl #2
        21a2f8:	0a000010 	beq	21a340 <TMsg::MsgHex(unsigned long, long)+0x98>
        21a2fc:	e2444004 	sub	r4, r4, #4	; 0x4
        21a300:	e1a00436 	mov	r0, r6, lsr r4
        21a304:	e210000f 	ands	r0, r0, #15	; 0xf
        21a308:	0a000008 	beq	21a330 <TMsg::MsgHex(unsigned long, long)+0x88>
        21a30c:	e3a07000 	mov	r7, #0	; 0x0
        21a310:	e350000a 	cmp	r0, #10	; 0xa
        21a314:	22800037 	addcs	r0, r0, #55	; 0x37
        21a318:	2a000000 	bcs	21a320 <TMsg::MsgHex(unsigned long, long)+0x78>
        21a31c:	e2800030 	add	r0, r0, #48	; 0x30
        21a320:	e20010ff 	and	r1, r0, #255	; 0xff
        21a324:	e1a00005 	mov	r0, r5
        21a328:	eb6548cf 	bl	1b6c66c <TMsg::$MsgChar(char)>
        21a32c:	ea000001 	b	21a338 <TMsg::MsgHex(unsigned long, long)+0x90>
        21a330:	e3370000 	teq	r7, #0	; 0x0
        21a334:	0afffff8 	beq	21a31c <TMsg::MsgHex(unsigned long, long)+0x74>
        21a338:	e3340000 	teq	r4, #0	; 0x0
        21a33c:	1affffee 	bne	21a2fc <TMsg::MsgHex(unsigned long, long)+0x54>
        21a340:	e1a00005 	mov	r0, r5
        21a344:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

